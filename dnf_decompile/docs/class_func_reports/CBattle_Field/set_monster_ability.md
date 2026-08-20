# set_monster_ability

`_ZN13CBattle_Field19set_monster_abilityEv`

`CBattle_Field::set_monster_ability()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083026da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083026da  _ZN13CBattle_Field19set_monster_abilityEv
#           CBattle_Field::set_monster_ability()
# range [0x083026da, 0x083029b7]
083026da +0x000:  push   %ebp
083026db +0x001:  mov    %esp,%ebp
083026dd +0x003:  push   %edi
083026de +0x004:  push   %esi
083026df +0x005:  push   %ebx
083026e0 +0x006:  sub    $0x6c,%esp
083026e3 +0x009:  mov    0x8(%ebp),%eax
083026e6 +0x00c:  mov    0x188(%eax),%eax
083026ec +0x012:  test   %eax,%eax
083026ee +0x014:  je     083029ac <+0x2d2>
083026f4 +0x01a:  mov    0x8(%ebp),%eax
083026f7 +0x01d:  mov    %eax,(%esp)
083026fa +0x020:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083026ff +0x025:  mov    %eax,-0x28(%ebp)
08302702 +0x028:  call   0807dca0 <_init+0x598>
08302707 +0x02d:  mov    -0x28(%ebp),%edx
0830270a +0x030:  mov    %eax,0x48(%edx)
0830270d +0x033:  mov    0x8(%ebp),%eax
08302710 +0x036:  mov    %eax,(%esp)
08302713 +0x039:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08302718 +0x03e:  mov    0x48(%eax),%eax
0830271b +0x041:  mov    %eax,(%esp)
0830271e +0x044:  call   0807d780 <_init+0x78>
08302723 +0x049:  mov    0x8(%ebp),%eax
08302726 +0x04c:  mov    %eax,(%esp)
08302729 +0x04f:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830272e +0x054:  lea    0xc(%eax),%edx
08302731 +0x057:  lea    -0x2c(%ebp),%eax
08302734 +0x05a:  mov    %edx,0x4(%esp)
08302738 +0x05e:  mov    %eax,(%esp)
0830273b +0x061:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
08302740 +0x066:  sub    $0x4,%esp
08302743 +0x069:  mov    0x8(%ebp),%eax
08302746 +0x06c:  mov    %eax,(%esp)
08302749 +0x06f:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830274e +0x074:  lea    0xc(%eax),%edx
08302751 +0x077:  lea    -0x30(%ebp),%eax
08302754 +0x07a:  mov    %edx,0x4(%esp)
08302758 +0x07e:  mov    %eax,(%esp)
0830275b +0x081:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
08302760 +0x086:  sub    $0x4,%esp
08302763 +0x089:  jmp    08302990 <+0x2b6>
08302768 +0x08e:  lea    -0x2c(%ebp),%eax
0830276b +0x091:  mov    %eax,(%esp)
0830276e +0x094:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08302773 +0x099:  add    $0x4,%eax
08302776 +0x09c:  mov    %eax,-0x24(%ebp)
08302779 +0x09f:  mov    -0x24(%ebp),%eax
0830277c +0x0a2:  movzbl 0x8(%eax),%eax
08302780 +0x0a6:  cmp    $0x4,%al
08302782 +0x0a8:  jg     08302981 <+0x2a7>
08302788 +0x0ae:  mov    -0x24(%ebp),%eax
0830278b +0x0b1:  mov    0xc(%eax),%ebx
0830278e +0x0b4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08302793 +0x0b9:  mov    %ebx,0x4(%esp)
08302797 +0x0bd:  mov    %eax,(%esp)
0830279a +0x0c0:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
0830279f +0x0c5:  mov    %eax,-0x20(%ebp)
083027a2 +0x0c8:  cmpl   $0x0,-0x20(%ebp)
083027a6 +0x0cc:  je     08302984 <+0x2aa>
083027ac +0x0d2:  mov    -0x24(%ebp),%eax
083027af +0x0d5:  movzbl 0x8(%eax),%eax
083027b3 +0x0d9:  movsbl %al,%edi
083027b6 +0x0dc:  mov    0x8(%ebp),%eax
083027b9 +0x0df:  mov    0x194(%eax),%esi
083027bf +0x0e5:  mov    -0x24(%ebp),%eax
083027c2 +0x0e8:  movzbl 0x10(%eax),%eax
083027c6 +0x0ec:  movzbl %al,%ebx
083027c9 +0x0ef:  mov    -0x24(%ebp),%eax
083027cc +0x0f2:  add    $0x38,%eax
083027cf +0x0f5:  mov    %eax,-0x4c(%ebp)
083027d2 +0x0f8:  mov    -0x20(%ebp),%eax
083027d5 +0x0fb:  mov    %eax,(%esp)
083027d8 +0x0fe:  call   0830e6c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2ab
083027dd +0x103:  movl   $0x0,0x18(%esp)
083027e5 +0x10b:  movl   $0x0,0x14(%esp)
083027ed +0x113:  mov    %edi,0x10(%esp)
083027f1 +0x117:  mov    %esi,0xc(%esp)
083027f5 +0x11b:  mov    %ebx,0x8(%esp)
083027f9 +0x11f:  mov    -0x4c(%ebp),%edx
083027fc +0x122:  mov    %edx,0x4(%esp)
08302800 +0x126:  mov    %eax,(%esp)
08302803 +0x129:  call   088b9603 <_Z22setBasicAbilityByLevelPK15STMonsterScriptP16ActiveStaticInfoiiibb>  ; setBasicAbilityByLevel(STMonsterScript const*, ActiveStaticInfo*, int, int, int, bool, bool)
08302808 +0x12e:  mov    -0x24(%ebp),%eax
0830280b +0x131:  movzbl 0x8(%eax),%eax
0830280f +0x135:  cmp    $0x3,%al
08302811 +0x137:  sete   %al
08302814 +0x13a:  movzbl %al,%ebx
08302817 +0x13d:  mov    -0x24(%ebp),%eax
0830281a +0x140:  lea    0x38(%eax),%esi
0830281d +0x143:  mov    -0x20(%ebp),%eax
08302820 +0x146:  mov    %eax,(%esp)
08302823 +0x149:  call   0830e6c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2ab
08302828 +0x14e:  add    $0x7c,%eax
0830282b +0x151:  mov    %ebx,0x8(%esp)
0830282f +0x155:  mov    %esi,0x4(%esp)
08302833 +0x159:  mov    %eax,(%esp)
08302836 +0x15c:  call   088b7f36 <_Z40upgradeAbilityByMonsterParameterCategoryPKSt6vectorI26STMonsterParameterCategorySaIS0_EEP16ActiveStaticInfob>  ; upgradeAbilityByMonsterParameterCategory(std::vector<STMonsterParameterCategory, std::allocator<STMonsterParameterCategory> > const*, ActiveStaticInfo*, bool)
0830283b +0x161:  mov    0x8(%ebp),%eax
0830283e +0x164:  mov    0x188(%eax),%eax
08302844 +0x16a:  lea    0x900(%eax),%edi
0830284a +0x170:  mov    -0x24(%ebp),%eax
0830284d +0x173:  movzbl 0x10(%eax),%eax
08302851 +0x177:  movzbl %al,%ebx
08302854 +0x17a:  mov    -0x24(%ebp),%eax
08302857 +0x17d:  lea    0x38(%eax),%esi
0830285a +0x180:  mov    0x8(%ebp),%eax
0830285d +0x183:  mov    %eax,(%esp)
08302860 +0x186:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
08302865 +0x18b:  mov    %edi,0xc(%esp)
08302869 +0x18f:  mov    %ebx,0x8(%esp)
0830286d +0x193:  mov    %esi,0x4(%esp)
08302871 +0x197:  mov    %eax,(%esp)
08302874 +0x19a:  call   088b813a <_Z35upgradeAbilityByDifficultyOfDungeoniP16ActiveStaticInfoiRKSt6vectorIS1_IfSaIfEESaIS3_EE>  ; upgradeAbilityByDifficultyOfDungeon(int, ActiveStaticInfo*, int, std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > > const&)
08302879 +0x19f:  mov    -0x24(%ebp),%eax
0830287c +0x1a2:  movzbl 0x8(%eax),%eax
08302880 +0x1a6:  cmp    $0x3,%al
08302882 +0x1a8:  jne    08302897 <+0x1bd>
08302884 +0x1aa:  mov    -0x24(%ebp),%eax
08302887 +0x1ad:  add    $0x38,%eax
0830288a +0x1b0:  mov    %eax,(%esp)
0830288d +0x1b3:  call   088b7c24 <_Z27upgradeAbilityByBossFeatureP16ActiveStaticInfo>  ; upgradeAbilityByBossFeature(ActiveStaticInfo*)
08302892 +0x1b8:  jmp    08302985 <+0x2ab>
08302897 +0x1bd:  mov    -0x24(%ebp),%eax
0830289a +0x1c0:  movzbl 0x8(%eax),%eax
0830289e +0x1c4:  cmp    $0x1,%al
083028a0 +0x1c6:  je     083028b1 <+0x1d7>
083028a2 +0x1c8:  mov    -0x24(%ebp),%eax
083028a5 +0x1cb:  movzbl 0x8(%eax),%eax
083028a9 +0x1cf:  cmp    $0x2,%al
083028ab +0x1d1:  jne    08302985 <+0x2ab>
083028b1 +0x1d7:  mov    0x8(%ebp),%eax
083028b4 +0x1da:  mov    %eax,(%esp)
083028b7 +0x1dd:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083028bc +0x1e2:  mov    0x48(%eax),%ebx
083028bf +0x1e5:  mov    -0x20(%ebp),%eax
083028c2 +0x1e8:  mov    %eax,(%esp)
083028c5 +0x1eb:  call   0830e6c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2ab
083028ca +0x1f0:  mov    %ebx,0x4(%esp)
083028ce +0x1f4:  mov    %eax,(%esp)
083028d1 +0x1f7:  call   088b9cce <_Z24getRandomChampionElementPK15STMonsterScripti>  ; getRandomChampionElement(STMonsterScript const*, int)
083028d6 +0x1fc:  mov    %eax,-0x1c(%ebp)
083028d9 +0x1ff:  lea    -0x3c(%ebp),%eax
083028dc +0x202:  mov    %eax,(%esp)
083028df +0x205:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
083028e4 +0x20a:  mov    0x8(%ebp),%eax
083028e7 +0x20d:  mov    %eax,(%esp)
083028ea +0x210:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
083028ef +0x215:  mov    %eax,%ebx
083028f1 +0x217:  mov    0x8(%ebp),%eax
083028f4 +0x21a:  mov    %eax,(%esp)
083028f7 +0x21d:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083028fc +0x222:  mov    0x48(%eax),%edx
083028ff +0x225:  mov    -0x24(%ebp),%eax
08302902 +0x228:  movzbl 0x10(%eax),%eax
08302906 +0x22c:  movzbl %al,%eax
08302909 +0x22f:  mov    -0x24(%ebp),%ecx
0830290c +0x232:  lea    0x328(%ecx),%esi
08302912 +0x238:  mov    %ebx,0x10(%esp)
08302916 +0x23c:  lea    -0x3c(%ebp),%ecx
08302919 +0x23f:  mov    %ecx,0xc(%esp)
0830291d +0x243:  mov    %edx,0x8(%esp)
08302921 +0x247:  mov    %eax,0x4(%esp)
08302925 +0x24b:  mov    %esi,(%esp)
08302928 +0x24e:  call   088ba0fd <_Z23makeChampionFeatureListRSt6vectorIiSaIiEEiiS2_i>  ; makeChampionFeatureList(std::vector<int, std::allocator<int> >&, int, int, std::vector<int, std::allocator<int> >&, int)
0830292d +0x253:  mov    -0x24(%ebp),%eax
08302930 +0x256:  lea    0x38(%eax),%ecx
08302933 +0x259:  mov    -0x24(%ebp),%eax
08302936 +0x25c:  movzbl 0x8(%eax),%eax
0830293a +0x260:  movsbl %al,%edx
0830293d +0x263:  mov    -0x1c(%ebp),%eax
08302940 +0x266:  mov    %ecx,0xc(%esp)
08302944 +0x26a:  lea    -0x3c(%ebp),%ecx
08302947 +0x26d:  mov    %ecx,0x8(%esp)
0830294b +0x271:  mov    %edx,0x4(%esp)
0830294f +0x275:  mov    %eax,(%esp)
08302952 +0x278:  call   088b7c29 <_Z31upgradeAbilityByChampionFeatureiiPSt6vectorIiSaIiEEP16ActiveStaticInfo>  ; upgradeAbilityByChampionFeature(int, int, std::vector<int, std::allocator<int> >*, ActiveStaticInfo*)
08302957 +0x27d:  jmp    08302974 <+0x29a>
08302959 +0x27f:  mov    %edx,%ebx
0830295b +0x281:  mov    %eax,%esi
0830295d +0x283:  lea    -0x3c(%ebp),%eax
08302960 +0x286:  mov    %eax,(%esp)
08302963 +0x289:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08302968 +0x28e:  mov    %esi,%eax
0830296a +0x290:  mov    %ebx,%edx
0830296c +0x292:  mov    %eax,(%esp)
0830296f +0x295:  call   08ae3750 <_Unwind_Resume>
08302974 +0x29a:  lea    -0x3c(%ebp),%eax
08302977 +0x29d:  mov    %eax,(%esp)
0830297a +0x2a0:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0830297f +0x2a5:  jmp    08302985 <+0x2ab>
08302981 +0x2a7:  nop
08302982 +0x2a8:  jmp    08302985 <+0x2ab>
08302984 +0x2aa:  nop
08302985 +0x2ab:  lea    -0x2c(%ebp),%eax
08302988 +0x2ae:  mov    %eax,(%esp)
0830298b +0x2b1:  call   0815262e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f63>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f63
08302990 +0x2b6:  lea    -0x30(%ebp),%eax
08302993 +0x2b9:  mov    %eax,0x4(%esp)
08302997 +0x2bd:  lea    -0x2c(%ebp),%eax
0830299a +0x2c0:  mov    %eax,(%esp)
0830299d +0x2c3:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
083029a2 +0x2c8:  test   %al,%al
083029a4 +0x2ca:  jne    08302768 <+0x8e>
083029aa +0x2d0:  jmp    083029ad <+0x2d3>
083029ac +0x2d2:  nop
083029ad +0x2d3:  lea    -0xc(%ebp),%esp
083029b0 +0x2d6:  add    $0x0,%esp
083029b3 +0x2d9:  pop    %ebx
083029b4 +0x2da:  pop    %esi
083029b5 +0x2db:  pop    %edi
083029b6 +0x2dc:  pop    %ebp
083029b7 +0x2dd:  ret
```

## 反编译 C

```c
// CBattle_Field::set_monster_ability @ 0x83026da

/* CBattle_Field::set_monster_ability() */

void __thiscall CBattle_Field::set_monster_ability(CBattle_Field *this)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ActiveStaticInfo *pAVar4;
  STMonsterScript *pSVar5;
  int iVar6;
  vector<int,std::allocator<int>> local_40 [12];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_34 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_30 [4];
  int local_2c;
  int local_28;
  CMonster *local_24;
  int local_20;
  
  if (*(int *)(this + 0x188) != 0) {
    local_2c = GetCurrentMapInfo(this);
    iVar3 = rand();
    *(int *)(local_2c + 0x48) = iVar3;
    iVar3 = GetCurrentMapInfo(this);
    srand(*(uint *)(iVar3 + 0x48));
    GetCurrentMapInfo(this);
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
              (local_30);
    GetCurrentMapInfo(this);
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
              (local_34);
    while (cVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                             ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_30,
                              (_Rb_tree_iterator *)local_34), cVar2 != '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_30);
      local_28 = iVar3 + 4;
      if (*(char *)(iVar3 + 0xc) < '\x05') {
        iVar3 = G_CDataManager();
        local_24 = (CMonster *)CDataManager::find_monster(iVar3);
        if (local_24 != (CMonster *)0x0) {
          cVar2 = *(char *)(local_28 + 8);
          iVar3 = *(int *)(this + 0x194);
          bVar1 = *(byte *)(local_28 + 0x10);
          pAVar4 = (ActiveStaticInfo *)(local_28 + 0x38);
          pSVar5 = (STMonsterScript *)CMonster::getMonsterScript(local_24);
          setBasicAbilityByLevel(pSVar5,pAVar4,(uint)bVar1,iVar3,(int)cVar2,false,false);
          cVar2 = *(char *)(local_28 + 8);
          pAVar4 = (ActiveStaticInfo *)(local_28 + 0x38);
          iVar3 = CMonster::getMonsterScript(local_24);
          upgradeAbilityByMonsterParameterCategory((vector *)(iVar3 + 0x7c),pAVar4,cVar2 == '\x03');
          iVar3 = *(int *)(this + 0x188);
          bVar1 = *(byte *)(local_28 + 0x10);
          pAVar4 = (ActiveStaticInfo *)(local_28 + 0x38);
          iVar6 = get_dungeon_diff(this);
          upgradeAbilityByDifficultyOfDungeon(iVar6,pAVar4,(uint)bVar1,(vector *)(iVar3 + 0x900));
          if (*(char *)(local_28 + 8) == '\x03') {
            upgradeAbilityByBossFeature((ActiveStaticInfo *)(local_28 + 0x38));
          }
          else if ((*(char *)(local_28 + 8) == '\x01') || (*(char *)(local_28 + 8) == '\x02')) {
            iVar3 = GetCurrentMapInfo(this);
            iVar3 = *(int *)(iVar3 + 0x48);
            pSVar5 = (STMonsterScript *)CMonster::getMonsterScript(local_24);
            local_20 = getRandomChampionElement(pSVar5,iVar3);
            std::vector<int,std::allocator<int>>::vector(local_40);
            iVar3 = get_dungeon_diff(this);
                    /* try { // try from 083028f7 to 08302956 has its CatchHandler @ 08302959 */
            iVar6 = GetCurrentMapInfo(this);
            makeChampionFeatureList
                      ((vector *)(local_28 + 0x328),(uint)*(byte *)(local_28 + 0x10),
                       *(int *)(iVar6 + 0x48),(vector *)local_40,iVar3);
            upgradeAbilityByChampionFeature
                      (local_20,(int)*(char *)(local_28 + 8),(vector *)local_40,
                       (ActiveStaticInfo *)(local_28 + 0x38));
            std::vector<int,std::allocator<int>>::~vector(local_40);
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_30);
    }
  }
  return;
}
```
