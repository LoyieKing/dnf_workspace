# add_monster_event

`_ZN13CBattle_Field17add_monster_eventERiii`

`CBattle_Field::add_monster_event(int&, int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083023ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083023ec  _ZN13CBattle_Field17add_monster_eventERiii
#           CBattle_Field::add_monster_event(int&, int, int)
# range [0x083023ec, 0x083026d9]
083023ec +0x000:  push   %ebp
083023ed +0x001:  mov    %esp,%ebp
083023ef +0x003:  push   %esi
083023f0 +0x004:  push   %ebx
083023f1 +0x005:  sub    $0x6d0,%esp
083023f7 +0x00b:  mov    0x8(%ebp),%eax
083023fa +0x00e:  mov    0x188(%eax),%eax
08302400 +0x014:  test   %eax,%eax
08302402 +0x016:  je     083026c9 <+0x2dd>
08302408 +0x01c:  mov    0x8(%ebp),%eax
0830240b +0x01f:  mov    0x108(%eax),%eax
08302411 +0x025:  test   %eax,%eax
08302413 +0x027:  je     083026cc <+0x2e0>
08302419 +0x02d:  mov    0x8(%ebp),%eax
0830241c +0x030:  add    $0x17c,%eax
08302421 +0x035:  mov    %eax,(%esp)
08302424 +0x038:  call   08310802 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x23e7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x23e7
08302429 +0x03d:  xor    $0x1,%eax
0830242c +0x040:  test   %al,%al
0830242e +0x042:  je     083026d0 <+0x2e4>
08302434 +0x048:  movl   $0x0,-0x1c(%ebp)
0830243b +0x04f:  mov    0x8(%ebp),%eax
0830243e +0x052:  mov    %eax,(%esp)
08302441 +0x055:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08302446 +0x05a:  add    $0xc,%eax
08302449 +0x05d:  mov    %eax,(%esp)
0830244c +0x060:  call   08152966 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x229b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x229b
08302451 +0x065:  mov    %eax,-0x18(%ebp)
08302454 +0x068:  movl   $0x2710,-0x14(%ebp)
0830245b +0x06f:  mov    0x8(%ebp),%eax
0830245e +0x072:  lea    0x17c(%eax),%edx
08302464 +0x078:  lea    -0x370(%ebp),%eax
0830246a +0x07e:  mov    %edx,0x4(%esp)
0830246e +0x082:  mov    %eax,(%esp)
08302471 +0x085:  call   08310846 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x242b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x242b
08302476 +0x08a:  sub    $0x4,%esp
08302479 +0x08d:  lea    -0x370(%ebp),%eax
0830247f +0x093:  mov    %eax,0x4(%esp)
08302483 +0x097:  lea    -0x374(%ebp),%eax
08302489 +0x09d:  mov    %eax,(%esp)
0830248c +0x0a0:  call   0831086a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x244f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x244f
08302491 +0x0a5:  mov    0x8(%ebp),%eax
08302494 +0x0a8:  lea    0x17c(%eax),%edx
0830249a +0x0ae:  lea    -0x36c(%ebp),%eax
083024a0 +0x0b4:  mov    %edx,0x4(%esp)
083024a4 +0x0b8:  mov    %eax,(%esp)
083024a7 +0x0bb:  call   08310884 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2469>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2469
083024ac +0x0c0:  sub    $0x4,%esp
083024af +0x0c3:  lea    -0x36c(%ebp),%eax
083024b5 +0x0c9:  mov    %eax,0x4(%esp)
083024b9 +0x0cd:  lea    -0x378(%ebp),%eax
083024bf +0x0d3:  mov    %eax,(%esp)
083024c2 +0x0d6:  call   0831086a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x244f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x244f
083024c7 +0x0db:  jmp    083026a7 <+0x2bb>
083024cc +0x0e0:  lea    -0x374(%ebp),%eax
083024d2 +0x0e6:  mov    %eax,(%esp)
083024d5 +0x0e9:  call   083108ec <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x24d1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x24d1
083024da +0x0ee:  mov    %eax,-0x10(%ebp)
083024dd +0x0f1:  mov    -0x10(%ebp),%eax
083024e0 +0x0f4:  mov    0x4(%eax),%eax
083024e3 +0x0f7:  cmp    0x10(%ebp),%eax
083024e6 +0x0fa:  jne    08302699 <+0x2ad>
083024ec +0x100:  mov    -0x10(%ebp),%eax
083024ef +0x103:  mov    0x8(%eax),%eax
083024f2 +0x106:  cmp    0x14(%ebp),%eax
083024f5 +0x109:  jne    08302699 <+0x2ad>
083024fb +0x10f:  mov    0x8(%ebp),%eax
083024fe +0x112:  mov    0x108(%eax),%eax
08302504 +0x118:  add    $0x9c,%eax
08302509 +0x11d:  mov    %eax,(%esp)
0830250c +0x120:  call   083108f6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x24db>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x24db
08302511 +0x125:  test   %al,%al
08302513 +0x127:  jne    083026cf <+0x2e3>
08302519 +0x12d:  movl   $0x0,-0xc(%ebp)
08302520 +0x134:  jmp    08302685 <+0x299>
08302525 +0x139:  lea    -0x6c4(%ebp),%eax
0830252b +0x13f:  mov    %eax,(%esp)
0830252e +0x142:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
08302533 +0x147:  mov    -0x10(%ebp),%eax
08302536 +0x14a:  mov    (%eax),%eax
08302538 +0x14c:  mov    %eax,-0x6b8(%ebp)
0830253e +0x152:  mov    0x8(%ebp),%eax
08302541 +0x155:  mov    0x188(%eax),%eax
08302547 +0x15b:  mov    %eax,(%esp)
0830254a +0x15e:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
0830254f +0x163:  mov    %al,-0x6b4(%ebp)
08302555 +0x169:  mov    -0x14(%ebp),%eax
08302558 +0x16c:  mov    %eax,-0x6c4(%ebp)
0830255e +0x172:  mov    -0x10(%ebp),%eax
08302561 +0x175:  mov    0x14(%eax),%eax
08302564 +0x178:  mov    %al,-0x6b3(%ebp)
0830256a +0x17e:  mov    -0x10(%ebp),%eax
0830256d +0x181:  mov    0x10(%eax),%eax
08302570 +0x184:  mov    %al,-0x6b2(%ebp)
08302576 +0x18a:  movb   $0x0,-0x6bc(%ebp)
0830257d +0x191:  movb   $0x0,-0x6b1(%ebp)
08302584 +0x198:  movb   $0x0,-0x6b0(%ebp)
0830258b +0x19f:  movl   $0x64,-0x698(%ebp)
08302595 +0x1a9:  movb   $0x0,-0x690(%ebp)
0830259c +0x1b0:  movb   $0x1,-0x37a(%ebp)
083025a3 +0x1b7:  mov    -0x1c(%ebp),%eax
083025a6 +0x1ba:  cmp    -0x18(%ebp),%eax
083025a9 +0x1bd:  jge    0830264f <+0x263>
083025af +0x1c3:  mov    0xc(%ebp),%eax
083025b2 +0x1c6:  mov    (%eax),%eax
083025b4 +0x1c8:  mov    %eax,-0x6c0(%ebp)
083025ba +0x1ce:  lea    0x1(%eax),%edx
083025bd +0x1d1:  mov    0xc(%ebp),%eax
083025c0 +0x1d4:  mov    %edx,(%eax)
083025c2 +0x1d6:  lea    -0x6c4(%ebp),%eax
083025c8 +0x1dc:  mov    %eax,0x4(%esp)
083025cc +0x1e0:  lea    -0x368(%ebp),%eax
083025d2 +0x1e6:  mov    %eax,(%esp)
083025d5 +0x1e9:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
083025da +0x1ee:  mov    0x8(%ebp),%eax
083025dd +0x1f1:  mov    %eax,(%esp)
083025e0 +0x1f4:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083025e5 +0x1f9:  lea    -0x368(%ebp),%edx
083025eb +0x1ff:  mov    %edx,0x4(%esp)
083025ef +0x203:  mov    %eax,(%esp)
083025f2 +0x206:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
083025f7 +0x20b:  jmp    08302611 <+0x225>
083025f9 +0x20d:  mov    %edx,%ebx
083025fb +0x20f:  mov    %eax,%esi
083025fd +0x211:  lea    -0x368(%ebp),%eax
08302603 +0x217:  mov    %eax,(%esp)
08302606 +0x21a:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0830260b +0x21f:  mov    %esi,%eax
0830260d +0x221:  mov    %ebx,%edx
0830260f +0x223:  jmp    08302667 <+0x27b>
08302611 +0x225:  lea    -0x368(%ebp),%eax
08302617 +0x22b:  mov    %eax,(%esp)
0830261a +0x22e:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0830261f +0x233:  addl   $0x1,-0x14(%ebp)
08302623 +0x237:  mov    0x8(%ebp),%eax
08302626 +0x23a:  mov    0x108(%eax),%eax
0830262c +0x240:  add    $0x9c,%eax
08302631 +0x245:  mov    %eax,(%esp)
08302634 +0x248:  call   0831093a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x251f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x251f
08302639 +0x24d:  add    $0x2710,%eax
0830263e +0x252:  cmp    -0x14(%ebp),%eax
08302641 +0x255:  setbe  %al
08302644 +0x258:  test   %al,%al
08302646 +0x25a:  je     0830264f <+0x263>
08302648 +0x25c:  movl   $0x2710,-0x14(%ebp)
0830264f +0x263:  addl   $0x1,-0x1c(%ebp)
08302653 +0x267:  lea    -0x6c4(%ebp),%eax
08302659 +0x26d:  mov    %eax,(%esp)
0830265c +0x270:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08302661 +0x275:  addl   $0x1,-0xc(%ebp)
08302665 +0x279:  jmp    08302685 <+0x299>
08302667 +0x27b:  mov    %edx,%ebx
08302669 +0x27d:  mov    %eax,%esi
0830266b +0x27f:  lea    -0x6c4(%ebp),%eax
08302671 +0x285:  mov    %eax,(%esp)
08302674 +0x288:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08302679 +0x28d:  mov    %esi,%eax
0830267b +0x28f:  mov    %ebx,%edx
0830267d +0x291:  mov    %eax,(%esp)
08302680 +0x294:  call   08ae3750 <_Unwind_Resume>
08302685 +0x299:  mov    -0x10(%ebp),%eax
08302688 +0x29c:  mov    0xc(%eax),%eax
0830268b +0x29f:  cmp    -0xc(%ebp),%eax
0830268e +0x2a2:  setg   %al
08302691 +0x2a5:  test   %al,%al
08302693 +0x2a7:  jne    08302525 <+0x139>
08302699 +0x2ad:  lea    -0x374(%ebp),%eax
0830269f +0x2b3:  mov    %eax,(%esp)
083026a2 +0x2b6:  call   083108d6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x24bb>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x24bb
083026a7 +0x2bb:  lea    -0x378(%ebp),%eax
083026ad +0x2c1:  mov    %eax,0x4(%esp)
083026b1 +0x2c5:  lea    -0x374(%ebp),%eax
083026b7 +0x2cb:  mov    %eax,(%esp)
083026ba +0x2ce:  call   083108aa <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x248f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x248f
083026bf +0x2d3:  test   %al,%al
083026c1 +0x2d5:  jne    083024cc <+0xe0>
083026c7 +0x2db:  jmp    083026d0 <+0x2e4>
083026c9 +0x2dd:  nop
083026ca +0x2de:  jmp    083026d0 <+0x2e4>
083026cc +0x2e0:  nop
083026cd +0x2e1:  jmp    083026d0 <+0x2e4>
083026cf +0x2e3:  nop
083026d0 +0x2e4:  lea    -0x8(%ebp),%esp
083026d3 +0x2e7:  add    $0x0,%esp
083026d6 +0x2ea:  pop    %ebx
083026d7 +0x2eb:  pop    %esi
083026d8 +0x2ec:  pop    %ebp
083026d9 +0x2ed:  ret
```

## 反编译 C

```c
// CBattle_Field::add_monster_event @ 0x83023ec

/* CBattle_Field::add_monster_event(int&, int, int) */

void __thiscall
CBattle_Field::add_monster_event(CBattle_Field *this,int *param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  MapInfo *pMVar4;
  uint local_6c8;
  int local_6c4;
  undefined1 local_6c0;
  undefined4 local_6bc;
  undefined1 local_6b8;
  undefined1 local_6b7;
  undefined1 local_6b6;
  undefined1 local_6b5;
  undefined1 local_6b4;
  undefined4 local_69c;
  undefined1 local_694;
  undefined1 local_37e;
  __normal_iterator<CBattle_Field::stEventMonsterStatus_t_const*,std::vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>>
  local_37c [4];
  __normal_iterator<CBattle_Field::stEventMonsterStatus_t_const*,std::vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>>
  local_378 [4];
  __normal_iterator local_374 [4];
  __normal_iterator local_370 [4];
  map_monster local_36c [844];
  int local_20;
  int local_1c;
  uint local_18;
  undefined4 *local_14;
  int local_10;
  
  if (((*(int *)(this + 0x188) != 0) && (*(int *)(this + 0x108) != 0)) &&
     (cVar1 = std::
              vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>
              ::empty(), cVar1 != '\x01')) {
    local_20 = 0;
    iVar3 = GetCurrentMapInfo(this);
    local_1c = std::
               map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
               ::size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                       *)(iVar3 + 0xc));
    local_18 = 10000;
    std::
    vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>
    ::begin();
    __gnu_cxx::
    __normal_iterator<CBattle_Field::stEventMonsterStatus_t_const*,std::vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>>
    ::__normal_iterator<CBattle_Field::stEventMonsterStatus_t*>(local_378,local_374);
    std::
    vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>
    ::end();
    __gnu_cxx::
    __normal_iterator<CBattle_Field::stEventMonsterStatus_t_const*,std::vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>>
    ::__normal_iterator<CBattle_Field::stEventMonsterStatus_t*>(local_37c,local_370);
    while (bVar2 = __gnu_cxx::operator!=(local_378,local_37c), bVar2) {
      local_14 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<CBattle_Field::stEventMonsterStatus_t_const*,std::vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>>
                 ::operator*(local_378);
      if ((local_14[1] == param_2) && (local_14[2] == param_3)) {
        cVar1 = std::vector<STRivalMapData,std::allocator<STRivalMapData>>::empty();
        if (cVar1 != '\0') {
          return;
        }
        for (local_10 = 0; local_10 < (int)local_14[3]; local_10 = local_10 + 1) {
          map_monster::map_monster((map_monster *)&local_6c8);
          local_6bc = *local_14;
          local_6b8 = CDungeon::get_standard_level(*(CDungeon **)(this + 0x188));
          local_6c8 = local_18;
          local_6b7 = (undefined1)local_14[5];
          local_6b6 = (undefined1)local_14[4];
          local_6c0 = 0;
          local_6b5 = 0;
          local_6b4 = 0;
          local_69c = 100;
          local_694 = 0;
          local_37e = 1;
          if (local_20 < local_1c) {
            local_6c4 = *param_1;
            *param_1 = local_6c4 + 1;
                    /* try { // try from 083025d5 to 083025d9 has its CatchHandler @ 08302667 */
            map_monster::map_monster(local_36c,(map_monster *)&local_6c8);
                    /* try { // try from 083025e0 to 083025f6 has its CatchHandler @ 083025f9 */
            pMVar4 = (MapInfo *)GetCurrentMapInfo(this);
            MapInfo::Add_Mob(pMVar4,local_36c);
                    /* try { // try from 0830261a to 0830261e has its CatchHandler @ 08302667 */
            map_monster::~map_monster(local_36c);
            local_18 = local_18 + 1;
            iVar3 = std::vector<STRivalMapData,std::allocator<STRivalMapData>>::size
                              ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)
                               (*(int *)(this + 0x108) + 0x9c));
            if (iVar3 + 10000U <= local_18) {
              local_18 = 10000;
            }
          }
          local_20 = local_20 + 1;
          map_monster::~map_monster((map_monster *)&local_6c8);
        }
      }
      __gnu_cxx::
      __normal_iterator<CBattle_Field::stEventMonsterStatus_t_const*,std::vector<CBattle_Field::stEventMonsterStatus_t,std::allocator<CBattle_Field::stEventMonsterStatus_t>>>
      ::operator++(local_378);
    }
  }
  return;
}
```
