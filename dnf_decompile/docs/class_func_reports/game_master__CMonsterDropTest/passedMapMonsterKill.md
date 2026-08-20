# passedMapMonsterKill

`_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE`

`game_master::CMonsterDropTest::passedMapMonsterKill(CParty*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CMonsterDropTest` | `0x084adaf8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084adaf8  _ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE
#           game_master::CMonsterDropTest::passedMapMonsterKill(CParty*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)
# range [0x084adaf8, 0x084add1f]
084adaf8 +0x000:  push   %ebp
084adaf9 +0x001:  mov    %esp,%ebp
084adafb +0x003:  push   %esi
084adafc +0x004:  push   %ebx
084adafd +0x005:  sub    $0x60,%esp
084adb00 +0x008:  lea    -0x24(%ebp),%eax
084adb03 +0x00b:  mov    %eax,(%esp)
084adb06 +0x00e:  call   08152a2c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2361>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2361
084adb0b +0x013:  movl   $0x64,-0x14(%ebp)
084adb12 +0x01a:  lea    -0x38(%ebp),%eax
084adb15 +0x01d:  mov    %eax,(%esp)
084adb18 +0x020:  call   0814ab92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x931>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x931
084adb1d +0x025:  movb   $0x1,-0xe(%ebp)
084adb21 +0x029:  movb   $0x1,-0xd(%ebp)
084adb25 +0x02d:  movzbl -0xe(%ebp),%eax
084adb29 +0x031:  mov    %eax,0x4(%esp)
084adb2d +0x035:  lea    -0x38(%ebp),%eax
084adb30 +0x038:  mov    %eax,(%esp)
084adb33 +0x03b:  call   0814abf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x98f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x98f
084adb38 +0x040:  movzbl -0xd(%ebp),%eax
084adb3c +0x044:  mov    %eax,0x4(%esp)
084adb40 +0x048:  lea    -0x38(%ebp),%eax
084adb43 +0x04b:  mov    %eax,(%esp)
084adb46 +0x04e:  call   0814abf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x98f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x98f
084adb4b +0x053:  movl   $0x0,-0xc(%ebp)
084adb52 +0x05a:  jmp    084adcb7 <+0x1bf>
084adb57 +0x05f:  mov    0xc(%ebp),%eax
084adb5a +0x062:  mov    %eax,(%esp)
084adb5d +0x065:  call   084b42a8 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x35b>  ; global constructors keyed to game_master::CMacro::Reset()+0x35b
084adb62 +0x06a:  lea    -0x3c(%ebp),%edx
084adb65 +0x06d:  mov    %eax,0x4(%esp)
084adb69 +0x071:  mov    %edx,(%esp)
084adb6c +0x074:  call   084b47f4 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x8a7>  ; global constructors keyed to game_master::CMacro::Reset()+0x8a7
084adb71 +0x079:  sub    $0x4,%esp
084adb74 +0x07c:  jmp    084adc7c <+0x184>
084adb79 +0x081:  lea    -0x3c(%ebp),%eax
084adb7c +0x084:  mov    %eax,(%esp)
084adb7f +0x087:  call   084b4882 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x935>  ; global constructors keyed to game_master::CMacro::Reset()+0x935
084adb84 +0x08c:  lea    0xc(%eax),%edx
084adb87 +0x08f:  lea    -0x40(%ebp),%eax
084adb8a +0x092:  mov    %edx,0x4(%esp)
084adb8e +0x096:  mov    %eax,(%esp)
084adb91 +0x099:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
084adb96 +0x09e:  sub    $0x4,%esp
084adb99 +0x0a1:  jmp    084adc37 <+0x13f>
084adb9e +0x0a6:  lea    -0x40(%ebp),%eax
084adba1 +0x0a9:  mov    %eax,(%esp)
084adba4 +0x0ac:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
084adba9 +0x0b1:  mov    0x30(%eax),%eax
084adbac +0x0b4:  cmp    $0x64,%eax
084adbaf +0x0b7:  setne  %al
084adbb2 +0x0ba:  test   %al,%al
084adbb4 +0x0bc:  jne    084adc2b <+0x133>
084adbb6 +0x0be:  lea    -0x40(%ebp),%eax
084adbb9 +0x0c1:  mov    %eax,(%esp)
084adbbc +0x0c4:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
084adbc1 +0x0c9:  lea    0x4(%eax),%ebx
084adbc4 +0x0cc:  lea    -0x3c(%ebp),%eax
084adbc7 +0x0cf:  mov    %eax,(%esp)
084adbca +0x0d2:  call   084b488c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x93f>  ; global constructors keyed to game_master::CMacro::Reset()+0x93f
084adbcf +0x0d7:  lea    -0x24(%ebp),%edx
084adbd2 +0x0da:  mov    %edx,0x18(%esp)
084adbd6 +0x0de:  mov    -0x14(%ebp),%edx
084adbd9 +0x0e1:  mov    %edx,0x14(%esp)
084adbdd +0x0e5:  lea    -0x38(%ebp),%edx
084adbe0 +0x0e8:  mov    %edx,0x10(%esp)
084adbe4 +0x0ec:  mov    %ebx,0xc(%esp)
084adbe8 +0x0f0:  mov    %eax,0x8(%esp)
084adbec +0x0f4:  mov    0xc(%ebp),%eax
084adbef +0x0f7:  mov    %eax,0x4(%esp)
084adbf3 +0x0fb:  mov    0x8(%ebp),%eax
084adbf6 +0x0fe:  mov    %eax,(%esp)
084adbf9 +0x101:  call   084add20 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE>  ; game_master::CMonsterDropTest::processKillMonster(CParty*, MapInfo&, map_monster&, std::vector<bool, std::allocator<bool> >&, int, std::list<map_item, std::allocator<map_item> >&)
084adbfe +0x106:  mov    0x14(%ebp),%eax
084adc01 +0x109:  mov    %eax,0xc(%esp)
084adc05 +0x10d:  mov    0x10(%ebp),%eax
084adc08 +0x110:  mov    %eax,0x8(%esp)
084adc0c +0x114:  lea    -0x24(%ebp),%eax
084adc0f +0x117:  mov    %eax,0x4(%esp)
084adc13 +0x11b:  mov    0x8(%ebp),%eax
084adc16 +0x11e:  mov    %eax,(%esp)
084adc19 +0x121:  call   084ae0e2 <_ZN11game_master16CMonsterDropTest20getDungeonDropResultERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS6_IiSD_S8_SaIS9_ISA_SD_EEE>  ; game_master::CMonsterDropTest::getDungeonDropResult(std::list<map_item, std::allocator<map_item> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)
084adc1e +0x126:  lea    -0x24(%ebp),%eax
084adc21 +0x129:  mov    %eax,(%esp)
084adc24 +0x12c:  call   08152ab2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x23e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x23e7
084adc29 +0x131:  jmp    084adc2c <+0x134>
084adc2b +0x133:  nop
084adc2c +0x134:  lea    -0x40(%ebp),%eax
084adc2f +0x137:  mov    %eax,(%esp)
084adc32 +0x13a:  call   0815262e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f63>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f63
084adc37 +0x13f:  lea    -0x3c(%ebp),%eax
084adc3a +0x142:  mov    %eax,(%esp)
084adc3d +0x145:  call   084b4882 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x935>  ; global constructors keyed to game_master::CMacro::Reset()+0x935
084adc42 +0x14a:  lea    0xc(%eax),%edx
084adc45 +0x14d:  lea    -0x18(%ebp),%eax
084adc48 +0x150:  mov    %edx,0x4(%esp)
084adc4c +0x154:  mov    %eax,(%esp)
084adc4f +0x157:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
084adc54 +0x15c:  sub    $0x4,%esp
084adc57 +0x15f:  lea    -0x18(%ebp),%eax
084adc5a +0x162:  mov    %eax,0x4(%esp)
084adc5e +0x166:  lea    -0x40(%ebp),%eax
084adc61 +0x169:  mov    %eax,(%esp)
084adc64 +0x16c:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
084adc69 +0x171:  test   %al,%al
084adc6b +0x173:  jne    084adb9e <+0xa6>
084adc71 +0x179:  lea    -0x3c(%ebp),%eax
084adc74 +0x17c:  mov    %eax,(%esp)
084adc77 +0x17f:  call   084b486a <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x91d>  ; global constructors keyed to game_master::CMacro::Reset()+0x91d
084adc7c +0x184:  mov    0xc(%ebp),%eax
084adc7f +0x187:  mov    %eax,(%esp)
084adc82 +0x18a:  call   084b42a8 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x35b>  ; global constructors keyed to game_master::CMacro::Reset()+0x35b
084adc87 +0x18f:  lea    -0x1c(%ebp),%edx
084adc8a +0x192:  mov    %eax,0x4(%esp)
084adc8e +0x196:  mov    %edx,(%esp)
084adc91 +0x199:  call   084b4818 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x8cb>  ; global constructors keyed to game_master::CMacro::Reset()+0x8cb
084adc96 +0x19e:  sub    $0x4,%esp
084adc99 +0x1a1:  lea    -0x1c(%ebp),%eax
084adc9c +0x1a4:  mov    %eax,0x4(%esp)
084adca0 +0x1a8:  lea    -0x3c(%ebp),%eax
084adca3 +0x1ab:  mov    %eax,(%esp)
084adca6 +0x1ae:  call   084b483e <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x8f1>  ; global constructors keyed to game_master::CMacro::Reset()+0x8f1
084adcab +0x1b3:  test   %al,%al
084adcad +0x1b5:  jne    084adb79 <+0x81>
084adcb3 +0x1bb:  addl   $0x1,-0xc(%ebp)
084adcb7 +0x1bf:  mov    0x8(%ebp),%eax
084adcba +0x1c2:  mov    0xc(%eax),%eax
084adcbd +0x1c5:  cmp    -0xc(%ebp),%eax
084adcc0 +0x1c8:  seta   %al
084adcc3 +0x1cb:  test   %al,%al
084adcc5 +0x1cd:  jne    084adb57 <+0x5f>
084adccb +0x1d3:  jmp    084adce2 <+0x1ea>
084adccd +0x1d5:  mov    %edx,%ebx
084adccf +0x1d7:  mov    %eax,%esi
084adcd1 +0x1d9:  lea    -0x38(%ebp),%eax
084adcd4 +0x1dc:  mov    %eax,(%esp)
084adcd7 +0x1df:  call   0814aba6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x945>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x945
084adcdc +0x1e4:  mov    %esi,%eax
084adcde +0x1e6:  mov    %ebx,%edx
084adce0 +0x1e8:  jmp    084adcef <+0x1f7>
084adce2 +0x1ea:  lea    -0x38(%ebp),%eax
084adce5 +0x1ed:  mov    %eax,(%esp)
084adce8 +0x1f0:  call   0814aba6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x945>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x945
084adced +0x1f5:  jmp    084add0a <+0x212>
084adcef +0x1f7:  mov    %edx,%ebx
084adcf1 +0x1f9:  mov    %eax,%esi
084adcf3 +0x1fb:  lea    -0x24(%ebp),%eax
084adcf6 +0x1fe:  mov    %eax,(%esp)
084adcf9 +0x201:  call   08151f6e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18a3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18a3
084adcfe +0x206:  mov    %esi,%eax
084add00 +0x208:  mov    %ebx,%edx
084add02 +0x20a:  mov    %eax,(%esp)
084add05 +0x20d:  call   08ae3750 <_Unwind_Resume>
084add0a +0x212:  lea    -0x24(%ebp),%eax
084add0d +0x215:  mov    %eax,(%esp)
084add10 +0x218:  call   08151f6e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18a3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18a3
084add15 +0x21d:  lea    -0x8(%ebp),%esp
084add18 +0x220:  add    $0x0,%esp
084add1b +0x223:  pop    %ebx
084add1c +0x224:  pop    %esi
084add1d +0x225:  pop    %ebp
084add1e +0x226:  ret
084add1f +0x227:  nop
```

## 反编译 C

```c
// game_master::CMonsterDropTest::passedMapMonsterKill @ 0x84adaf8

/* game_master::CMonsterDropTest::passedMapMonsterKill(CParty*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const,
   std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&) */

void game_master::CMonsterDropTest::passedMapMonsterKill(CParty *param_1,map *param_2,map *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  MapInfo *pMVar4;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_44 [4];
  __normal_iterator<MapInfo*,std::vector<MapInfo,std::allocator<MapInfo>>> local_40 [4];
  vector<bool,std::allocator<bool>> local_3c [20];
  list<map_item,std::allocator<map_item>> local_28 [8];
  __normal_iterator local_20 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_1c [4];
  int local_18;
  undefined1 local_12;
  bool local_11;
  uint local_10;
  
  std::list<map_item,std::allocator<map_item>>::list(local_28);
  local_18 = 100;
                    /* try { // try from 084adb18 to 084adb1c has its CatchHandler @ 084adcef */
  std::vector<bool,std::allocator<bool>>::vector(local_3c);
  local_12 = 1;
  local_11 = true;
                    /* try { // try from 084adb33 to 084adcaa has its CatchHandler @ 084adccd */
  std::vector<bool,std::allocator<bool>>::push_back(local_3c,true);
  std::vector<bool,std::allocator<bool>>::push_back(local_3c,local_11);
  for (local_10 = 0; local_10 < *(uint *)(param_1 + 0xc); local_10 = local_10 + 1) {
    CParty::getPassedMapInfoList((CParty *)param_2);
    std::vector<MapInfo,std::allocator<MapInfo>>::begin();
    while( true ) {
      CParty::getPassedMapInfoList((CParty *)param_2);
      std::vector<MapInfo,std::allocator<MapInfo>>::end();
      bVar2 = __gnu_cxx::operator!=(local_40,local_20);
      if (!bVar2) break;
      __gnu_cxx::__normal_iterator<MapInfo*,std::vector<MapInfo,std::allocator<MapInfo>>>::
      operator->(local_40);
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
      begin(local_44);
      while( true ) {
        __gnu_cxx::__normal_iterator<MapInfo*,std::vector<MapInfo,std::allocator<MapInfo>>>::
        operator->(local_40);
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        end(local_1c);
        cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_44,
                           (_Rb_tree_iterator *)local_1c);
        if (cVar1 == '\0') break;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_44);
        if (*(int *)(iVar3 + 0x30) == 100) {
          iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_44);
          pMVar4 = (MapInfo *)
                   __gnu_cxx::
                   __normal_iterator<MapInfo*,std::vector<MapInfo,std::allocator<MapInfo>>>::
                   operator*(local_40);
          processKillMonster((CMonsterDropTest *)param_1,(CParty *)param_2,pMVar4,
                             (map_monster *)(iVar3 + 4),(vector *)local_3c,local_18,(list *)local_28
                            );
          getDungeonDropResult((list *)param_1,(map *)local_28,param_3);
          std::list<map_item,std::allocator<map_item>>::clear(local_28);
        }
        std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_44);
      }
      __gnu_cxx::__normal_iterator<MapInfo*,std::vector<MapInfo,std::allocator<MapInfo>>>::
      operator++(local_40);
    }
  }
                    /* try { // try from 084adce8 to 084adcec has its CatchHandler @ 084adcef */
  std::vector<bool,std::allocator<bool>>::~vector(local_3c);
  std::list<map_item,std::allocator<map_item>>::~list(local_28);
  return;
}
```
