# checkInoutConditionDungeon

`_ZN6CParty26checkInoutConditionDungeonEv`

`CParty::checkInoutConditionDungeon()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ac59c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ac59c  _ZN6CParty26checkInoutConditionDungeonEv
#           CParty::checkInoutConditionDungeon()
# range [0x085ac59c, 0x085ac95d]
085ac59c +0x000:  push   %ebp
085ac59d +0x001:  mov    %esp,%ebp
085ac59f +0x003:  push   %edi
085ac5a0 +0x004:  push   %esi
085ac5a1 +0x005:  push   %ebx
085ac5a2 +0x006:  sub    $0x15c,%esp
085ac5a8 +0x00c:  mov    0x8(%ebp),%eax
085ac5ab +0x00f:  mov    0xcac(%eax),%eax
085ac5b1 +0x015:  test   %eax,%eax
085ac5b3 +0x017:  jne    085ac5bf <+0x23>
085ac5b5 +0x019:  mov    $0xa,%ebx
085ac5ba +0x01e:  jmp    085ac951 <+0x3b5>
085ac5bf +0x023:  mov    0x8(%ebp),%eax
085ac5c2 +0x026:  mov    %eax,(%esp)
085ac5c5 +0x029:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
085ac5ca +0x02e:  cmp    $0x1,%al
085ac5cc +0x030:  setle  %al
085ac5cf +0x033:  test   %al,%al
085ac5d1 +0x035:  je     085ac5dd <+0x41>
085ac5d3 +0x037:  mov    $0xa,%ebx
085ac5d8 +0x03c:  jmp    085ac951 <+0x3b5>
085ac5dd +0x041:  movl   $0x0,-0x20(%ebp)
085ac5e4 +0x048:  jmp    085ac673 <+0xd7>
085ac5e9 +0x04d:  mov    -0x20(%ebp),%eax
085ac5ec +0x050:  mov    %eax,0x4(%esp)
085ac5f0 +0x054:  mov    0x8(%ebp),%eax
085ac5f3 +0x057:  mov    %eax,(%esp)
085ac5f6 +0x05a:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085ac5fb +0x05f:  test   %eax,%eax
085ac5fd +0x061:  je     085ac614 <+0x78>
085ac5ff +0x063:  mov    0x8(%ebp),%eax
085ac602 +0x066:  mov    0xcac(%eax),%eax
085ac608 +0x06c:  mov    %eax,(%esp)
085ac60b +0x06f:  call   0826b928 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1f6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1f6
085ac610 +0x074:  test   %al,%al
085ac612 +0x076:  jle    085ac61b <+0x7f>
085ac614 +0x078:  mov    $0x1,%eax
085ac619 +0x07d:  jmp    085ac620 <+0x84>
085ac61b +0x07f:  mov    $0x0,%eax
085ac620 +0x084:  test   %al,%al
085ac622 +0x086:  jne    085ac66e <+0xd2>
085ac624 +0x088:  mov    -0x20(%ebp),%eax
085ac627 +0x08b:  mov    %eax,0x4(%esp)
085ac62b +0x08f:  mov    0x8(%ebp),%eax
085ac62e +0x092:  mov    %eax,(%esp)
085ac631 +0x095:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085ac636 +0x09a:  mov    %eax,(%esp)
085ac639 +0x09d:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
085ac63e +0x0a2:  mov    %eax,%esi
085ac640 +0x0a4:  mov    -0x20(%ebp),%eax
085ac643 +0x0a7:  mov    %eax,0x4(%esp)
085ac647 +0x0ab:  mov    0x8(%ebp),%eax
085ac64a +0x0ae:  mov    %eax,(%esp)
085ac64d +0x0b1:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085ac652 +0x0b6:  mov    %eax,(%esp)
085ac655 +0x0b9:  call   08657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>  ; CUser::getCurCharacTotalMaxFatigue() const
085ac65a +0x0be:  cmp    %ax,%si
085ac65d +0x0c1:  sete   %al
085ac660 +0x0c4:  test   %al,%al
085ac662 +0x0c6:  je     085ac66f <+0xd3>
085ac664 +0x0c8:  mov    $0x1,%ebx
085ac669 +0x0cd:  jmp    085ac951 <+0x3b5>
085ac66e +0x0d2:  nop
085ac66f +0x0d3:  addl   $0x1,-0x20(%ebp)
085ac673 +0x0d7:  cmpl   $0x3,-0x20(%ebp)
085ac677 +0x0db:  setle  %al
085ac67a +0x0de:  test   %al,%al
085ac67c +0x0e0:  jne    085ac5e9 <+0x4d>
085ac682 +0x0e6:  movb   $0x0,-0x29(%ebp)
085ac686 +0x0ea:  lea    -0x13c(%ebp),%eax
085ac68c +0x0f0:  mov    %eax,%esi
085ac68e +0x0f2:  mov    $0x3,%edi
085ac693 +0x0f7:  jmp    085ac6a3 <+0x107>
085ac695 +0x0f9:  mov    %esi,(%esp)
085ac698 +0x0fc:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085ac69d +0x101:  add    $0x3d,%esi
085ac6a0 +0x104:  sub    $0x1,%edi
085ac6a3 +0x107:  cmp    $0xffffffff,%edi
085ac6a6 +0x10a:  setne  %al
085ac6a9 +0x10d:  test   %al,%al
085ac6ab +0x10f:  jne    085ac695 <+0xf9>
085ac6ad +0x111:  movl   $0xf4,0x8(%esp)
085ac6b5 +0x119:  movl   $0x0,0x4(%esp)
085ac6bd +0x121:  lea    -0x13c(%ebp),%eax
085ac6c3 +0x127:  mov    %eax,(%esp)
085ac6c6 +0x12a:  call   0807dcc0 <_init+0x5b8>
085ac6cb +0x12f:  movl   $0x10,0x8(%esp)
085ac6d3 +0x137:  movl   $0x0,0x4(%esp)
085ac6db +0x13f:  lea    -0x3c(%ebp),%eax
085ac6de +0x142:  mov    %eax,(%esp)
085ac6e1 +0x145:  call   0807dcc0 <_init+0x5b8>
085ac6e6 +0x14a:  mov    0x8(%ebp),%eax
085ac6e9 +0x14d:  mov    0xcac(%eax),%eax
085ac6ef +0x153:  lea    -0x3c(%ebp),%edx
085ac6f2 +0x156:  mov    %edx,0x10(%esp)
085ac6f6 +0x15a:  lea    -0x13c(%ebp),%edx
085ac6fc +0x160:  mov    %edx,0xc(%esp)
085ac700 +0x164:  lea    -0x29(%ebp),%edx
085ac703 +0x167:  mov    %edx,0x8(%esp)
085ac707 +0x16b:  mov    %eax,0x4(%esp)
085ac70b +0x16f:  mov    0x8(%ebp),%eax
085ac70e +0x172:  mov    %eax,(%esp)
085ac711 +0x175:  call   0859e528 <_ZN6CParty24CheckEnterAncientDungeonEPK8CDungeonRhP10Inven_ItemPi>  ; CParty::CheckEnterAncientDungeon(CDungeon const*, unsigned char&, Inven_Item*, int*)
085ac716 +0x17a:  xor    $0x1,%eax
085ac719 +0x17d:  test   %al,%al
085ac71b +0x17f:  je     085ac727 <+0x18b>
085ac71d +0x181:  mov    $0x2,%ebx
085ac722 +0x186:  jmp    085ac951 <+0x3b5>
085ac727 +0x18b:  mov    0x8(%ebp),%eax
085ac72a +0x18e:  mov    0xcac(%eax),%eax
085ac730 +0x194:  mov    %eax,0x4(%esp)
085ac734 +0x198:  mov    0x8(%ebp),%eax
085ac737 +0x19b:  mov    %eax,(%esp)
085ac73a +0x19e:  call   0859f3fc <_ZN6CParty26CheckEnterDimensionDungeonEPK8CDungeon>  ; CParty::CheckEnterDimensionDungeon(CDungeon const*)
085ac73f +0x1a3:  cmp    $0xab,%eax
085ac744 +0x1a8:  je     085ac74d <+0x1b1>
085ac746 +0x1aa:  cmp    $0xad,%eax
085ac74b +0x1af:  jne    085ac757 <+0x1bb>
085ac74d +0x1b1:  mov    $0x4,%ebx
085ac752 +0x1b6:  jmp    085ac951 <+0x3b5>
085ac757 +0x1bb:  mov    0x8(%ebp),%eax
085ac75a +0x1be:  mov    0xcac(%eax),%eax
085ac760 +0x1c4:  mov    %eax,0x4(%esp)
085ac764 +0x1c8:  mov    0x8(%ebp),%eax
085ac767 +0x1cb:  mov    %eax,(%esp)
085ac76a +0x1ce:  call   0859fb16 <_ZN6CParty19check_dungeon_startEPK8CDungeon>  ; CParty::check_dungeon_start(CDungeon const*)
085ac76f +0x1d3:  cmp    $0xa,%eax
085ac772 +0x1d6:  je     085ac783 <+0x1e7>
085ac774 +0x1d8:  cmp    $0xa,%eax
085ac777 +0x1db:  jl     085ac78d <+0x1f1>
085ac779 +0x1dd:  sub    $0xf3,%eax
085ac77e +0x1e2:  cmp    $0x4,%eax
085ac781 +0x1e5:  ja     085ac78d <+0x1f1>
085ac783 +0x1e7:  mov    $0x7,%ebx
085ac788 +0x1ec:  jmp    085ac951 <+0x3b5>
085ac78d +0x1f1:  mov    0x8(%ebp),%eax
085ac790 +0x1f4:  mov    0xcac(%eax),%eax
085ac796 +0x1fa:  mov    %eax,0x4(%esp)
085ac79a +0x1fe:  mov    0x8(%ebp),%eax
085ac79d +0x201:  mov    %eax,(%esp)
085ac7a0 +0x204:  call   085ba804 <_ZN6CParty30CheckEnterVillageAttackRevengeEPK8CDungeon>  ; CParty::CheckEnterVillageAttackRevenge(CDungeon const*)
085ac7a5 +0x209:  test   %eax,%eax
085ac7a7 +0x20b:  setne  %al
085ac7aa +0x20e:  test   %al,%al
085ac7ac +0x210:  je     085ac7b8 <+0x21c>
085ac7ae +0x212:  mov    $0x7,%ebx
085ac7b3 +0x217:  jmp    085ac951 <+0x3b5>
085ac7b8 +0x21c:  movl   $0x0,-0x28(%ebp)
085ac7bf +0x223:  mov    0x8(%ebp),%eax
085ac7c2 +0x226:  mov    0x74(%eax),%esi
085ac7c5 +0x229:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085ac7ca +0x22e:  mov    %esi,0x4(%esp)
085ac7ce +0x232:  mov    %eax,(%esp)
085ac7d1 +0x235:  call   086cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>  ; GameWorld::GetWorldMapIndex(CUser*)
085ac7d6 +0x23a:  mov    %eax,-0x24(%ebp)
085ac7d9 +0x23d:  cmpl   $0x0,-0x24(%ebp)
085ac7dd +0x241:  jle    085ac7fc <+0x260>
085ac7df +0x243:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085ac7e4 +0x248:  lea    0x8780(%eax),%edx
085ac7ea +0x24e:  mov    -0x24(%ebp),%eax
085ac7ed +0x251:  mov    %eax,0x4(%esp)
085ac7f1 +0x255:  mov    %edx,(%esp)
085ac7f4 +0x258:  call   083647a2 <_ZNK13CWorldMapList14find_world_mapEi>  ; CWorldMapList::find_world_map(int) const
085ac7f9 +0x25d:  mov    %eax,-0x28(%ebp)
085ac7fc +0x260:  cmpl   $0x0,-0x28(%ebp)
085ac800 +0x264:  je     085ac82f <+0x293>
085ac802 +0x266:  mov    -0x28(%ebp),%eax
085ac805 +0x269:  mov    %eax,(%esp)
085ac808 +0x26c:  call   0830e6ba <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x29f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x29f
085ac80d +0x271:  test   %al,%al
085ac80f +0x273:  je     085ac82f <+0x293>
085ac811 +0x275:  call   0830ed07 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x8ec>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x8ec
085ac816 +0x27a:  test   %al,%al
085ac818 +0x27c:  je     085ac82f <+0x293>
085ac81a +0x27e:  mov    0x8(%ebp),%eax
085ac81d +0x281:  mov    0xcd4(%eax),%eax
085ac823 +0x287:  cmp    $0x1,%eax
085ac826 +0x28a:  jne    085ac82f <+0x293>
085ac828 +0x28c:  mov    $0x1,%eax
085ac82d +0x291:  jmp    085ac834 <+0x298>
085ac82f +0x293:  mov    $0x0,%eax
085ac834 +0x298:  test   %al,%al
085ac836 +0x29a:  je     085ac8cc <+0x330>
085ac83c +0x2a0:  lea    -0x48(%ebp),%eax
085ac83f +0x2a3:  mov    %eax,(%esp)
085ac842 +0x2a6:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085ac847 +0x2ab:  mov    -0x28(%ebp),%eax
085ac84a +0x2ae:  lea    0x34(%eax),%edx
085ac84d +0x2b1:  mov    0x8(%ebp),%eax
085ac850 +0x2b4:  mov    0xcac(%eax),%eax
085ac856 +0x2ba:  mov    %edx,0xc(%esp)
085ac85a +0x2be:  lea    -0x48(%ebp),%edx
085ac85d +0x2c1:  mov    %edx,0x8(%esp)
085ac861 +0x2c5:  mov    %eax,0x4(%esp)
085ac865 +0x2c9:  mov    0x8(%ebp),%eax
085ac868 +0x2cc:  mov    %eax,(%esp)
085ac86b +0x2cf:  call   085a7d86 <_ZN6CParty29CheckDestroyConditionSealDoorEPK8CDungeonRSt6vectorIiSaIiEES6_>  ; CParty::CheckDestroyConditionSealDoor(CDungeon const*, std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> >&)
085ac870 +0x2d4:  xor    $0x1,%eax
085ac873 +0x2d7:  test   %al,%al
085ac875 +0x2d9:  je     085ac88d <+0x2f1>
085ac877 +0x2db:  mov    0x8(%ebp),%eax
085ac87a +0x2de:  movb   $0x0,0x1865(%eax)
085ac881 +0x2e5:  mov    $0x8,%ebx
085ac886 +0x2ea:  mov    $0x0,%esi
085ac88b +0x2ef:  jmp    085ac8b9 <+0x31d>
085ac88d +0x2f1:  mov    0x8(%ebp),%eax
085ac890 +0x2f4:  movb   $0x1,0x1865(%eax)
085ac897 +0x2fb:  mov    $0x1,%esi
085ac89c +0x300:  jmp    085ac8b9 <+0x31d>
085ac89e +0x302:  mov    %edx,%ebx
085ac8a0 +0x304:  mov    %eax,%esi
085ac8a2 +0x306:  lea    -0x48(%ebp),%eax
085ac8a5 +0x309:  mov    %eax,(%esp)
085ac8a8 +0x30c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085ac8ad +0x311:  mov    %esi,%eax
085ac8af +0x313:  mov    %ebx,%edx
085ac8b1 +0x315:  mov    %eax,(%esp)
085ac8b4 +0x318:  call   08ae3750 <_Unwind_Resume>
085ac8b9 +0x31d:  lea    -0x48(%ebp),%eax
085ac8bc +0x320:  mov    %eax,(%esp)
085ac8bf +0x323:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085ac8c4 +0x328:  test   %esi,%esi
085ac8c6 +0x32a:  je     085ac951 <+0x3b5>
085ac8cc +0x330:  mov    0x8(%ebp),%eax
085ac8cf +0x333:  mov    0xcd8(%eax),%eax
085ac8d5 +0x339:  cmp    $0x1,%eax
085ac8d8 +0x33c:  je     085ac928 <+0x38c>
085ac8da +0x33e:  cmpl   $0x0,-0x28(%ebp)
085ac8de +0x342:  je     085ac8f2 <+0x356>
085ac8e0 +0x344:  mov    -0x28(%ebp),%eax
085ac8e3 +0x347:  mov    %eax,(%esp)
085ac8e6 +0x34a:  call   0822b520 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xbca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xbca
085ac8eb +0x34f:  xor    $0x1,%eax
085ac8ee +0x352:  test   %al,%al
085ac8f0 +0x354:  je     085ac928 <+0x38c>
085ac8f2 +0x356:  mov    0x8(%ebp),%eax
085ac8f5 +0x359:  mov    0xcac(%eax),%eax
085ac8fb +0x35f:  mov    %eax,(%esp)
085ac8fe +0x362:  call   0822b4de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb88>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb88
085ac903 +0x367:  xor    $0x1,%eax
085ac906 +0x36a:  test   %al,%al
085ac908 +0x36c:  je     085ac928 <+0x38c>
085ac90a +0x36e:  mov    0x8(%ebp),%eax
085ac90d +0x371:  mov    0xcac(%eax),%eax
085ac913 +0x377:  movzbl 0x800(%eax),%eax
085ac91a +0x37e:  xor    $0x1,%eax
085ac91d +0x381:  test   %al,%al
085ac91f +0x383:  je     085ac928 <+0x38c>
085ac921 +0x385:  mov    $0x1,%eax
085ac926 +0x38a:  jmp    085ac92d <+0x391>
085ac928 +0x38c:  mov    $0x0,%eax
085ac92d +0x391:  test   %al,%al
085ac92f +0x393:  je     085ac94c <+0x3b0>
085ac931 +0x395:  mov    0x8(%ebp),%eax
085ac934 +0x398:  mov    %eax,(%esp)
085ac937 +0x39b:  call   0859d5e8 <_ZN6CParty18CheckMemberFatigueEv>  ; CParty::CheckMemberFatigue()
085ac93c +0x3a0:  mov    %eax,-0x1c(%ebp)
085ac93f +0x3a3:  cmpl   $0x0,-0x1c(%ebp)
085ac943 +0x3a7:  jle    085ac94c <+0x3b0>
085ac945 +0x3a9:  mov    $0x1,%ebx
085ac94a +0x3ae:  jmp    085ac951 <+0x3b5>
085ac94c +0x3b0:  mov    $0x9,%ebx
085ac951 +0x3b5:  mov    %ebx,%eax
085ac953 +0x3b7:  add    $0x15c,%esp
085ac959 +0x3bd:  pop    %ebx
085ac95a +0x3be:  pop    %esi
085ac95b +0x3bf:  pop    %edi
085ac95c +0x3c0:  pop    %ebp
085ac95d +0x3c1:  ret
```

## 反编译 C

```c
// CParty::checkInoutConditionDungeon @ 0x85ac59c

/* CParty::checkInoutConditionDungeon() */

undefined4 __thiscall CParty::checkInoutConditionDungeon(CParty *this)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  CUser *pCVar5;
  GameWorld *this_00;
  undefined4 unaff_EBX;
  Inven_Item *this_01;
  int iVar6;
  Inven_Item local_140 [244];
  vector<int,std::allocator<int>> local_4c [12];
  int local_40 [4];
  uchar local_2d;
  CWorldMap *local_2c;
  int local_28;
  int local_24;
  
  if (*(int *)(this + 0xcac) == 0) {
    return 10;
  }
  cVar2 = GetEPLPState(this);
  if (cVar2 < '\x02') {
    return 10;
  }
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    iVar6 = get_user(this,local_24);
    if ((iVar6 == 0) ||
       (cVar2 = CDungeon::get_blood_dungeon_type(*(CDungeon **)(this + 0xcac)), '\0' < cVar2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pCVar5 = (CUser *)get_user(this,local_24);
      sVar3 = CUser::getCurCharacTotalFatigue(pCVar5);
      pCVar5 = (CUser *)get_user(this,local_24);
      sVar4 = CUser::getCurCharacTotalMaxFatigue(pCVar5);
      if (sVar3 == sVar4) {
        return 1;
      }
    }
  }
  local_2d = '\0';
  this_01 = local_140;
  for (iVar6 = 3; iVar6 != -1; iVar6 = iVar6 + -1) {
    Inven_Item::Inven_Item(this_01);
    this_01 = this_01 + 0x3d;
  }
  memset(local_140,0,0xf4);
  memset(local_40,0,0x10);
  cVar2 = CheckEnterAncientDungeon(this,*(CDungeon **)(this + 0xcac),&local_2d,local_140,local_40);
  if (cVar2 == '\x01') {
    iVar6 = CheckEnterDimensionDungeon(this,*(CDungeon **)(this + 0xcac));
    if ((iVar6 == 0xab) || (iVar6 == 0xad)) {
      return 4;
    }
    iVar6 = check_dungeon_start(this,*(CDungeon **)(this + 0xcac));
    if ((iVar6 != 10) && ((iVar6 < 10 || (4 < iVar6 - 0xf3U)))) {
      iVar6 = CheckEnterVillageAttackRevenge(this,*(CDungeon **)(this + 0xcac));
      if (iVar6 != 0) {
        return 7;
      }
      local_2c = (CWorldMap *)0x0;
      pCVar5 = *(CUser **)(this + 0x74);
      this_00 = (GameWorld *)G_GameWorld();
      local_28 = GameWorld::GetWorldMapIndex(this_00,pCVar5);
      if (0 < local_28) {
        iVar6 = G_CDataManager();
        local_2c = (CWorldMap *)CWorldMapList::find_world_map(iVar6 + 0x8780);
      }
      if ((((local_2c == (CWorldMap *)0x0) ||
           (cVar2 = CWorldMap::IsInHellDungeon(local_2c), cVar2 == '\0')) ||
          (cVar2 = CBattle_Field::IsEnableHellDungeon(), cVar2 == '\0')) ||
         (*(int *)(this + 0xcd4) != 1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        std::vector<int,std::allocator<int>>::vector(local_4c);
                    /* try { // try from 085ac86b to 085ac86f has its CatchHandler @ 085ac89e */
        cVar2 = CheckDestroyConditionSealDoor
                          (this,*(CDungeon **)(this + 0xcac),(vector *)local_4c,
                           (vector *)(local_2c + 0x34));
        if (cVar2 == '\x01') {
          this[0x1865] = (CParty)0x1;
        }
        else {
          this[0x1865] = (CParty)0x0;
          unaff_EBX = 8;
        }
        std::vector<int,std::allocator<int>>::~vector(local_4c);
        if (cVar2 != '\x01') {
          return unaff_EBX;
        }
      }
      if ((((*(int *)(this + 0xcd8) == 1) ||
           ((local_2c != (CWorldMap *)0x0 &&
            (cVar2 = CWorldMap::hasDeathTower(local_2c), cVar2 == '\x01')))) ||
          (cVar2 = CDungeon::isNoFatigueDungeon(*(CDungeon **)(this + 0xcac)), cVar2 == '\x01')) ||
         (*(char *)(*(int *)(this + 0xcac) + 0x800) == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (iVar6 = CheckMemberFatigue(this), 0 < iVar6)) {
        return 1;
      }
      return 9;
    }
    return 7;
  }
  return 2;
}
```
