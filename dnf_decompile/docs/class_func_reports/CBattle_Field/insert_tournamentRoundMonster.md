# insert_tournamentRoundMonster

`_ZN13CBattle_Field29insert_tournamentRoundMonsterEv`

`CBattle_Field::insert_tournamentRoundMonster()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083029b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083029b8  _ZN13CBattle_Field29insert_tournamentRoundMonsterEv
#           CBattle_Field::insert_tournamentRoundMonster()
# range [0x083029b8, 0x08302bc5]
083029b8 +0x000:  push   %ebp
083029b9 +0x001:  mov    %esp,%ebp
083029bb +0x003:  push   %esi
083029bc +0x004:  push   %ebx
083029bd +0x005:  sub    $0x6e0,%esp
083029c3 +0x00b:  mov    0x8(%ebp),%eax
083029c6 +0x00e:  mov    0x188(%eax),%eax
083029cc +0x014:  test   %eax,%eax
083029ce +0x016:  je     08302bb8 <+0x200>
083029d4 +0x01c:  mov    0x8(%ebp),%eax
083029d7 +0x01f:  mov    (%eax),%eax
083029d9 +0x021:  test   %eax,%eax
083029db +0x023:  je     08302bbb <+0x203>
083029e1 +0x029:  mov    0x8(%ebp),%eax
083029e4 +0x02c:  mov    0x188(%eax),%eax
083029ea +0x032:  mov    %eax,(%esp)
083029ed +0x035:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
083029f2 +0x03a:  test   %al,%al
083029f4 +0x03c:  je     08302bbc <+0x204>
083029fa +0x042:  mov    0x8(%ebp),%eax
083029fd +0x045:  mov    %eax,(%esp)
08302a00 +0x048:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08302a05 +0x04d:  add    $0xd0,%eax
08302a0a +0x052:  mov    %eax,-0x18(%ebp)
08302a0d +0x055:  mov    0x8(%ebp),%eax
08302a10 +0x058:  mov    %eax,(%esp)
08302a13 +0x05b:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08302a18 +0x060:  add    $0xc,%eax
08302a1b +0x063:  mov    %eax,-0x14(%ebp)
08302a1e +0x066:  lea    -0x6c8(%ebp),%eax
08302a24 +0x06c:  mov    -0x14(%ebp),%edx
08302a27 +0x06f:  mov    %edx,0x4(%esp)
08302a2b +0x073:  mov    %eax,(%esp)
08302a2e +0x076:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
08302a33 +0x07b:  sub    $0x4,%esp
08302a36 +0x07e:  mov    0x8(%ebp),%eax
08302a39 +0x081:  mov    (%eax),%eax
08302a3b +0x083:  mov    %eax,(%esp)
08302a3e +0x086:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08302a43 +0x08b:  mov    %eax,-0x10(%ebp)
08302a46 +0x08e:  movl   $0x1,-0x6cc(%ebp)
08302a50 +0x098:  jmp    08302ba2 <+0x1ea>
08302a55 +0x09d:  movl   $0x0,-0xc(%ebp)
08302a5c +0x0a4:  jmp    08302b43 <+0x18b>
08302a61 +0x0a9:  lea    -0x6c8(%ebp),%eax
08302a67 +0x0af:  mov    %eax,(%esp)
08302a6a +0x0b2:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08302a6f +0x0b7:  lea    0x4(%eax),%edx
08302a72 +0x0ba:  lea    -0x36c(%ebp),%eax
08302a78 +0x0c0:  mov    %edx,0x8(%esp)
08302a7c +0x0c4:  lea    -0x6cc(%ebp),%edx
08302a82 +0x0ca:  mov    %edx,0x4(%esp)
08302a86 +0x0ce:  mov    %eax,(%esp)
08302a89 +0x0d1:  call   0831095b <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2540>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2540
08302a8e +0x0d6:  sub    $0x4,%esp
08302a91 +0x0d9:  lea    -0x36c(%ebp),%eax
08302a97 +0x0df:  mov    %eax,0x4(%esp)
08302a9b +0x0e3:  lea    -0x6bc(%ebp),%eax
08302aa1 +0x0e9:  mov    %eax,(%esp)
08302aa4 +0x0ec:  call   083109a0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2585>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2585
08302aa9 +0x0f1:  lea    -0x6c0(%ebp),%eax
08302aaf +0x0f7:  lea    -0x6bc(%ebp),%edx
08302ab5 +0x0fd:  mov    %edx,0x8(%esp)
08302ab9 +0x101:  mov    -0x18(%ebp),%edx
08302abc +0x104:  mov    %edx,0x4(%esp)
08302ac0 +0x108:  mov    %eax,(%esp)
08302ac3 +0x10b:  call   083109da <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x25bf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x25bf
08302ac8 +0x110:  sub    $0x4,%esp
08302acb +0x113:  lea    -0x6bc(%ebp),%eax
08302ad1 +0x119:  mov    %eax,(%esp)
08302ad4 +0x11c:  call   081515fc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf31>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf31
08302ad9 +0x121:  jmp    08302b11 <+0x159>
08302adb +0x123:  mov    %edx,%ebx
08302add +0x125:  mov    %eax,%esi
08302adf +0x127:  lea    -0x6bc(%ebp),%eax
08302ae5 +0x12d:  mov    %eax,(%esp)
08302ae8 +0x130:  call   081515fc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf31>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf31
08302aed +0x135:  mov    %esi,%eax
08302aef +0x137:  mov    %ebx,%edx
08302af1 +0x139:  jmp    08302af3 <+0x13b>
08302af3 +0x13b:  mov    %edx,%ebx
08302af5 +0x13d:  mov    %eax,%esi
08302af7 +0x13f:  lea    -0x36c(%ebp),%eax
08302afd +0x145:  mov    %eax,(%esp)
08302b00 +0x148:  call   0830ee62 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa47>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa47
08302b05 +0x14d:  mov    %esi,%eax
08302b07 +0x14f:  mov    %ebx,%edx
08302b09 +0x151:  mov    %eax,(%esp)
08302b0c +0x154:  call   08ae3750 <_Unwind_Resume>
08302b11 +0x159:  lea    -0x36c(%ebp),%eax
08302b17 +0x15f:  mov    %eax,(%esp)
08302b1a +0x162:  call   0830ee62 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa47>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa47
08302b1f +0x167:  addl   $0x1,-0xc(%ebp)
08302b23 +0x16b:  lea    -0x1c(%ebp),%eax
08302b26 +0x16e:  movl   $0x0,0x8(%esp)
08302b2e +0x176:  lea    -0x6c8(%ebp),%edx
08302b34 +0x17c:  mov    %edx,0x4(%esp)
08302b38 +0x180:  mov    %eax,(%esp)
08302b3b +0x183:  call   08155b8c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x54c1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x54c1
08302b40 +0x188:  sub    $0x4,%esp
08302b43 +0x18b:  mov    -0xc(%ebp),%eax
08302b46 +0x18e:  cmp    -0x10(%ebp),%eax
08302b49 +0x191:  jge    08302b86 <+0x1ce>
08302b4b +0x193:  lea    -0x6c4(%ebp),%eax
08302b51 +0x199:  mov    -0x14(%ebp),%edx
08302b54 +0x19c:  mov    %edx,0x4(%esp)
08302b58 +0x1a0:  mov    %eax,(%esp)
08302b5b +0x1a3:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
08302b60 +0x1a8:  sub    $0x4,%esp
08302b63 +0x1ab:  lea    -0x6c4(%ebp),%eax
08302b69 +0x1b1:  mov    %eax,0x4(%esp)
08302b6d +0x1b5:  lea    -0x6c8(%ebp),%eax
08302b73 +0x1bb:  mov    %eax,(%esp)
08302b76 +0x1be:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
08302b7b +0x1c3:  test   %al,%al
08302b7d +0x1c5:  je     08302b86 <+0x1ce>
08302b7f +0x1c7:  mov    $0x1,%eax
08302b84 +0x1cc:  jmp    08302b8b <+0x1d3>
08302b86 +0x1ce:  mov    $0x0,%eax
08302b8b +0x1d3:  test   %al,%al
08302b8d +0x1d5:  jne    08302a61 <+0xa9>
08302b93 +0x1db:  mov    -0x6cc(%ebp),%eax
08302b99 +0x1e1:  add    $0x1,%eax
08302b9c +0x1e4:  mov    %eax,-0x6cc(%ebp)
08302ba2 +0x1ea:  mov    -0x6cc(%ebp),%eax
08302ba8 +0x1f0:  cmp    $0x4,%eax
08302bab +0x1f3:  setle  %al
08302bae +0x1f6:  test   %al,%al
08302bb0 +0x1f8:  jne    08302a55 <+0x9d>
08302bb6 +0x1fe:  jmp    08302bbc <+0x204>
08302bb8 +0x200:  nop
08302bb9 +0x201:  jmp    08302bbc <+0x204>
08302bbb +0x203:  nop
08302bbc +0x204:  lea    -0x8(%ebp),%esp
08302bbf +0x207:  add    $0x0,%esp
08302bc2 +0x20a:  pop    %ebx
08302bc3 +0x20b:  pop    %esi
08302bc4 +0x20c:  pop    %ebp
08302bc5 +0x20d:  ret
```

## 反编译 C

```c
// CBattle_Field::insert_tournamentRoundMonster @ 0x83029b8

/* CBattle_Field::insert_tournamentRoundMonster() */

void __thiscall CBattle_Field::insert_tournamentRoundMonster(CBattle_Field *this)

{
  bool bVar1;
  char cVar2;
  int local_6d0;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_6cc [4]
  ;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_6c8 [4]
  ;
  pair local_6c4 [4];
  pair<int_const,map_monster> local_6c0 [848];
  pair<int,map_monster> local_370 [848];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (((*(int *)(this + 0x188) == 0) || (*(int *)this == 0)) ||
     (cVar2 = CDungeon::isTournamentDungeon(*(CDungeon **)(this + 0x188)), cVar2 == '\0')) {
    return;
  }
  local_1c = GetCurrentMapInfo(this);
  local_1c = local_1c + 0xd0;
  local_18 = GetCurrentMapInfo(this);
  local_18 = local_18 + 0xc;
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
            (local_6cc);
  local_14 = CParty::get_member_count(*(CParty **)this);
  local_6d0 = 1;
LAB_08302ba2:
  if (4 < local_6d0) {
    return;
  }
  local_10 = 0;
  do {
    if (local_10 < local_14) {
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
                (local_6c8);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_6cc,
                         (_Rb_tree_iterator *)local_6c8);
      if (cVar2 == '\0') goto LAB_08302b86;
      bVar1 = true;
    }
    else {
LAB_08302b86:
      bVar1 = false;
    }
    if (!bVar1) break;
    std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
              ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_6cc);
    std::make_pair<int&,map_monster&>((int *)local_370,(map_monster *)&local_6d0);
                    /* try { // try from 08302aa4 to 08302aa8 has its CatchHandler @ 08302af3 */
    std::pair<int_const,map_monster>::pair<int,map_monster>(local_6c0,local_370);
                    /* try { // try from 08302ac3 to 08302ac7 has its CatchHandler @ 08302adb */
    std::multimap<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
    insert(local_6c4);
                    /* try { // try from 08302ad4 to 08302ad8 has its CatchHandler @ 08302af3 */
    std::pair<int_const,map_monster>::~pair(local_6c0);
    std::pair<int,map_monster>::~pair(local_370);
    local_10 = local_10 + 1;
    std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++(local_20,(int)local_6cc);
  } while( true );
  local_6d0 = local_6d0 + 1;
  goto LAB_08302ba2;
}
```
