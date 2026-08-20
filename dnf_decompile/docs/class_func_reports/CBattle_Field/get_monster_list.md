# get_monster_list

`_ZN13CBattle_Field16get_monster_listERSt4listI11_mapMonsterSaIS1_EE`

`CBattle_Field::get_monster_list(std::list<_mapMonster, std::allocator<_mapMonster> >&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083012a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083012a4  _ZN13CBattle_Field16get_monster_listERSt4listI11_mapMonsterSaIS1_EE
#           CBattle_Field::get_monster_list(std::list<_mapMonster, std::allocator<_mapMonster> >&)
# range [0x083012a4, 0x083013e1]
083012a4 +0x000:  push   %ebp
083012a5 +0x001:  mov    %esp,%ebp
083012a7 +0x003:  push   %esi
083012a8 +0x004:  push   %ebx
083012a9 +0x005:  sub    $0x20,%esp
083012ac +0x008:  mov    0x8(%ebp),%eax
083012af +0x00b:  mov    0x188(%eax),%eax
083012b5 +0x011:  test   %eax,%eax
083012b7 +0x013:  je     083012cf <+0x2b>
083012b9 +0x015:  mov    0x8(%ebp),%eax
083012bc +0x018:  mov    0x108(%eax),%eax
083012c2 +0x01e:  test   %eax,%eax
083012c4 +0x020:  je     083012cf <+0x2b>
083012c6 +0x022:  mov    0x8(%ebp),%eax
083012c9 +0x025:  mov    (%eax),%eax
083012cb +0x027:  test   %eax,%eax
083012cd +0x029:  jne    083012d9 <+0x35>
083012cf +0x02b:  mov    $0x0,%eax
083012d4 +0x030:  jmp    083013d7 <+0x133>
083012d9 +0x035:  mov    0x8(%ebp),%eax
083012dc +0x038:  mov    0x188(%eax),%eax
083012e2 +0x03e:  mov    %eax,(%esp)
083012e5 +0x041:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
083012ea +0x046:  test   %al,%al
083012ec +0x048:  je     0830137d <+0xd9>
083012f2 +0x04e:  mov    0x8(%ebp),%eax
083012f5 +0x051:  add    $0x13c,%eax
083012fa +0x056:  mov    %eax,(%esp)
083012fd +0x059:  call   082aae22 <_GLOBAL__I__ZN4CLog5this_E+0x7249>  ; global constructors keyed to CLog::this_+0x7249
08301302 +0x05e:  mov    0x8(%ebp),%eax
08301305 +0x061:  lea    0x13c(%eax),%edx
0830130b +0x067:  mov    0x8(%ebp),%eax
0830130e +0x06a:  mov    0x108(%eax),%eax
08301314 +0x070:  mov    %edx,0xc(%esp)
08301318 +0x074:  mov    0xc(%ebp),%edx
0830131b +0x077:  mov    %edx,0x8(%esp)
0830131f +0x07b:  mov    %eax,0x4(%esp)
08301323 +0x07f:  mov    0x8(%ebp),%eax
08301326 +0x082:  mov    %eax,(%esp)
08301329 +0x085:  call   083035c8 <_ZN13CBattle_Field17ConsistTournamentEPK4CMapRSt4listI11_mapMonsterSaIS4_EERSt3mapIsSt6vectorINS_14TournamentInfoESaISA_EESt4lessIsESaISt4pairIKsSC_EEE>  ; CBattle_Field::ConsistTournament(CMap const*, std::list<_mapMonster, std::allocator<_mapMonster> >&, std::map<short, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > > >&)
0830132e +0x08a:  mov    %al,-0x9(%ebp)
08301331 +0x08d:  movzbl -0x9(%ebp),%eax
08301335 +0x091:  xor    $0x1,%eax
08301338 +0x094:  test   %al,%al
0830133a +0x096:  je     08301346 <+0xa2>
0830133c +0x098:  mov    $0x0,%eax
08301341 +0x09d:  jmp    083013d7 <+0x133>
08301346 +0x0a2:  mov    0x8(%ebp),%eax
08301349 +0x0a5:  mov    (%eax),%eax
0830134b +0x0a7:  mov    %eax,(%esp)
0830134e +0x0aa:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08301353 +0x0af:  mov    0x8(%ebp),%edx
08301356 +0x0b2:  add    $0x158,%edx
0830135c +0x0b8:  mov    %eax,0x4(%esp)
08301360 +0x0bc:  mov    %edx,(%esp)
08301363 +0x0bf:  call   082fee12 <_ZN19CDungeonClearTracer15SetMaxBossCountEi>  ; CDungeonClearTracer::SetMaxBossCount(int)
08301368 +0x0c4:  movl   $0x1,0x4(%esp)
08301370 +0x0cc:  mov    0x8(%ebp),%eax
08301373 +0x0cf:  mov    %eax,(%esp)
08301376 +0x0d2:  call   082fe69c <_ZN13CBattle_Field21SetTournamentCurRoundEi>  ; CBattle_Field::SetTournamentCurRound(int)
0830137b +0x0d7:  jmp    083013d2 <+0x12e>
0830137d +0x0d9:  mov    0x8(%ebp),%eax
08301380 +0x0dc:  mov    0x108(%eax),%edx
08301386 +0x0e2:  lea    -0x14(%ebp),%eax
08301389 +0x0e5:  mov    %edx,0x4(%esp)
0830138d +0x0e9:  mov    %eax,(%esp)
08301390 +0x0ec:  call   08134796 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x39d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x39d
08301395 +0x0f1:  sub    $0x4,%esp
08301398 +0x0f4:  lea    -0x14(%ebp),%eax
0830139b +0x0f7:  mov    %eax,0x4(%esp)
0830139f +0x0fb:  mov    0xc(%ebp),%eax
083013a2 +0x0fe:  mov    %eax,(%esp)
083013a5 +0x101:  call   0830fed2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1ab7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1ab7
083013aa +0x106:  jmp    083013c7 <+0x123>
083013ac +0x108:  mov    %edx,%ebx
083013ae +0x10a:  mov    %eax,%esi
083013b0 +0x10c:  lea    -0x14(%ebp),%eax
083013b3 +0x10f:  mov    %eax,(%esp)
083013b6 +0x112:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
083013bb +0x117:  mov    %esi,%eax
083013bd +0x119:  mov    %ebx,%edx
083013bf +0x11b:  mov    %eax,(%esp)
083013c2 +0x11e:  call   08ae3750 <_Unwind_Resume>
083013c7 +0x123:  lea    -0x14(%ebp),%eax
083013ca +0x126:  mov    %eax,(%esp)
083013cd +0x129:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
083013d2 +0x12e:  mov    $0x1,%eax
083013d7 +0x133:  lea    -0x8(%ebp),%esp
083013da +0x136:  add    $0x0,%esp
083013dd +0x139:  pop    %ebx
083013de +0x13a:  pop    %esi
083013df +0x13b:  pop    %ebp
083013e0 +0x13c:  ret
083013e1 +0x13d:  nop
```

## 反编译 C

```c
// CBattle_Field::get_monster_list @ 0x83012a4

/* CBattle_Field::get_monster_list(std::list<_mapMonster, std::allocator<_mapMonster> >&) */

undefined4 __thiscall CBattle_Field::get_monster_list(CBattle_Field *this,list *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  list local_18 [11];
  char local_d;
  
  if (((*(int *)(this + 0x188) == 0) || (*(int *)(this + 0x108) == 0)) || (*(int *)this == 0)) {
    uVar2 = 0;
  }
  else {
    cVar1 = CDungeon::isTournamentDungeon(*(CDungeon **)(this + 0x188));
    if (cVar1 == '\0') {
      CMap::get_monster_list();
                    /* try { // try from 083013a5 to 083013a9 has its CatchHandler @ 083013ac */
      std::list<_mapMonster,std::allocator<_mapMonster>>::operator=
                ((list<_mapMonster,std::allocator<_mapMonster>> *)param_1,local_18);
      std::list<_mapMonster,std::allocator<_mapMonster>>::~list
                ((list<_mapMonster,std::allocator<_mapMonster>> *)local_18);
    }
    else {
      std::
      map<short,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>>>
      ::clear((map<short,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>>>
               *)(this + 0x13c));
      local_d = ConsistTournament(this,*(CMap **)(this + 0x108),param_1,(map *)(this + 0x13c));
      if (local_d != '\x01') {
        return 0;
      }
      iVar3 = CParty::get_member_count(*(CParty **)this);
      CDungeonClearTracer::SetMaxBossCount((CDungeonClearTracer *)(this + 0x158),iVar3);
      SetTournamentCurRound(this,1);
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
