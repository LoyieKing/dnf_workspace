# singleMapMonsterKill

`_ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE`

`game_master::CMonsterDropTest::singleMapMonsterKill(CParty*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CMonsterDropTest` | `0x084ad93a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ad93a  _ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE
#           game_master::CMonsterDropTest::singleMapMonsterKill(CParty*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)
# range [0x084ad93a, 0x084adaf7]
084ad93a +0x000:  push   %ebp
084ad93b +0x001:  mov    %esp,%ebp
084ad93d +0x003:  push   %esi
084ad93e +0x004:  push   %ebx
084ad93f +0x005:  sub    $0x60,%esp
084ad942 +0x008:  lea    -0x24(%ebp),%eax
084ad945 +0x00b:  mov    %eax,(%esp)
084ad948 +0x00e:  call   08152a2c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2361>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2361
084ad94d +0x013:  movl   $0x64,-0x18(%ebp)
084ad954 +0x01a:  lea    -0x38(%ebp),%eax
084ad957 +0x01d:  mov    %eax,(%esp)
084ad95a +0x020:  call   0814ab92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x931>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x931
084ad95f +0x025:  movb   $0x1,-0x12(%ebp)
084ad963 +0x029:  movb   $0x1,-0x11(%ebp)
084ad967 +0x02d:  movzbl -0x12(%ebp),%eax
084ad96b +0x031:  mov    %eax,0x4(%esp)
084ad96f +0x035:  lea    -0x38(%ebp),%eax
084ad972 +0x038:  mov    %eax,(%esp)
084ad975 +0x03b:  call   0814abf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x98f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x98f
084ad97a +0x040:  movzbl -0x11(%ebp),%eax
084ad97e +0x044:  mov    %eax,0x4(%esp)
084ad982 +0x048:  lea    -0x38(%ebp),%eax
084ad985 +0x04b:  mov    %eax,(%esp)
084ad988 +0x04e:  call   0814abf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x98f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x98f
084ad98d +0x053:  mov    0xc(%ebp),%eax
084ad990 +0x056:  add    $0xb24,%eax
084ad995 +0x05b:  mov    %eax,(%esp)
084ad998 +0x05e:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
084ad99d +0x063:  mov    %eax,-0x10(%ebp)
084ad9a0 +0x066:  movl   $0x0,-0xc(%ebp)
084ad9a7 +0x06d:  jmp    084ada90 <+0x156>
084ad9ac +0x072:  mov    -0x10(%ebp),%eax
084ad9af +0x075:  lea    0xc(%eax),%edx
084ad9b2 +0x078:  lea    -0x3c(%ebp),%eax
084ad9b5 +0x07b:  mov    %edx,0x4(%esp)
084ad9b9 +0x07f:  mov    %eax,(%esp)
084ad9bc +0x082:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
084ad9c1 +0x087:  sub    $0x4,%esp
084ad9c4 +0x08a:  jmp    084ada5a <+0x120>
084ad9c9 +0x08f:  lea    -0x3c(%ebp),%eax
084ad9cc +0x092:  mov    %eax,(%esp)
084ad9cf +0x095:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
084ad9d4 +0x09a:  mov    0x30(%eax),%eax
084ad9d7 +0x09d:  cmp    $0x64,%eax
084ad9da +0x0a0:  setne  %al
084ad9dd +0x0a3:  test   %al,%al
084ad9df +0x0a5:  jne    084ada4e <+0x114>
084ad9e1 +0x0a7:  lea    -0x3c(%ebp),%eax
084ad9e4 +0x0aa:  mov    %eax,(%esp)
084ad9e7 +0x0ad:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
084ad9ec +0x0b2:  lea    0x4(%eax),%edx
084ad9ef +0x0b5:  lea    -0x24(%ebp),%eax
084ad9f2 +0x0b8:  mov    %eax,0x18(%esp)
084ad9f6 +0x0bc:  mov    -0x18(%ebp),%eax
084ad9f9 +0x0bf:  mov    %eax,0x14(%esp)
084ad9fd +0x0c3:  lea    -0x38(%ebp),%eax
084ada00 +0x0c6:  mov    %eax,0x10(%esp)
084ada04 +0x0ca:  mov    %edx,0xc(%esp)
084ada08 +0x0ce:  mov    -0x10(%ebp),%eax
084ada0b +0x0d1:  mov    %eax,0x8(%esp)
084ada0f +0x0d5:  mov    0xc(%ebp),%eax
084ada12 +0x0d8:  mov    %eax,0x4(%esp)
084ada16 +0x0dc:  mov    0x8(%ebp),%eax
084ada19 +0x0df:  mov    %eax,(%esp)
084ada1c +0x0e2:  call   084add20 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE>  ; game_master::CMonsterDropTest::processKillMonster(CParty*, MapInfo&, map_monster&, std::vector<bool, std::allocator<bool> >&, int, std::list<map_item, std::allocator<map_item> >&)
084ada21 +0x0e7:  mov    0x14(%ebp),%eax
084ada24 +0x0ea:  mov    %eax,0xc(%esp)
084ada28 +0x0ee:  mov    0x10(%ebp),%eax
084ada2b +0x0f1:  mov    %eax,0x8(%esp)
084ada2f +0x0f5:  lea    -0x24(%ebp),%eax
084ada32 +0x0f8:  mov    %eax,0x4(%esp)
084ada36 +0x0fc:  mov    0x8(%ebp),%eax
084ada39 +0x0ff:  mov    %eax,(%esp)
084ada3c +0x102:  call   084ae0e2 <_ZN11game_master16CMonsterDropTest20getDungeonDropResultERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS6_IiSD_S8_SaIS9_ISA_SD_EEE>  ; game_master::CMonsterDropTest::getDungeonDropResult(std::list<map_item, std::allocator<map_item> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)
084ada41 +0x107:  lea    -0x24(%ebp),%eax
084ada44 +0x10a:  mov    %eax,(%esp)
084ada47 +0x10d:  call   08152ab2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x23e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x23e7
084ada4c +0x112:  jmp    084ada4f <+0x115>
084ada4e +0x114:  nop
084ada4f +0x115:  lea    -0x3c(%ebp),%eax
084ada52 +0x118:  mov    %eax,(%esp)
084ada55 +0x11b:  call   0815262e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f63>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f63
084ada5a +0x120:  mov    -0x10(%ebp),%eax
084ada5d +0x123:  lea    0xc(%eax),%edx
084ada60 +0x126:  lea    -0x1c(%ebp),%eax
084ada63 +0x129:  mov    %edx,0x4(%esp)
084ada67 +0x12d:  mov    %eax,(%esp)
084ada6a +0x130:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
084ada6f +0x135:  sub    $0x4,%esp
084ada72 +0x138:  lea    -0x1c(%ebp),%eax
084ada75 +0x13b:  mov    %eax,0x4(%esp)
084ada79 +0x13f:  lea    -0x3c(%ebp),%eax
084ada7c +0x142:  mov    %eax,(%esp)
084ada7f +0x145:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
084ada84 +0x14a:  test   %al,%al
084ada86 +0x14c:  jne    084ad9c9 <+0x8f>
084ada8c +0x152:  addl   $0x1,-0xc(%ebp)
084ada90 +0x156:  mov    0x8(%ebp),%eax
084ada93 +0x159:  mov    0xc(%eax),%eax
084ada96 +0x15c:  cmp    -0xc(%ebp),%eax
084ada99 +0x15f:  seta   %al
084ada9c +0x162:  test   %al,%al
084ada9e +0x164:  jne    084ad9ac <+0x72>
084adaa4 +0x16a:  jmp    084adabb <+0x181>
084adaa6 +0x16c:  mov    %edx,%ebx
084adaa8 +0x16e:  mov    %eax,%esi
084adaaa +0x170:  lea    -0x38(%ebp),%eax
084adaad +0x173:  mov    %eax,(%esp)
084adab0 +0x176:  call   0814aba6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x945>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x945
084adab5 +0x17b:  mov    %esi,%eax
084adab7 +0x17d:  mov    %ebx,%edx
084adab9 +0x17f:  jmp    084adac8 <+0x18e>
084adabb +0x181:  lea    -0x38(%ebp),%eax
084adabe +0x184:  mov    %eax,(%esp)
084adac1 +0x187:  call   0814aba6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x945>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x945
084adac6 +0x18c:  jmp    084adae3 <+0x1a9>
084adac8 +0x18e:  mov    %edx,%ebx
084adaca +0x190:  mov    %eax,%esi
084adacc +0x192:  lea    -0x24(%ebp),%eax
084adacf +0x195:  mov    %eax,(%esp)
084adad2 +0x198:  call   08151f6e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18a3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18a3
084adad7 +0x19d:  mov    %esi,%eax
084adad9 +0x19f:  mov    %ebx,%edx
084adadb +0x1a1:  mov    %eax,(%esp)
084adade +0x1a4:  call   08ae3750 <_Unwind_Resume>
084adae3 +0x1a9:  lea    -0x24(%ebp),%eax
084adae6 +0x1ac:  mov    %eax,(%esp)
084adae9 +0x1af:  call   08151f6e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18a3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18a3
084adaee +0x1b4:  lea    -0x8(%ebp),%esp
084adaf1 +0x1b7:  add    $0x0,%esp
084adaf4 +0x1ba:  pop    %ebx
084adaf5 +0x1bb:  pop    %esi
084adaf6 +0x1bc:  pop    %ebp
084adaf7 +0x1bd:  ret
```

## 反编译 C

```c
// game_master::CMonsterDropTest::singleMapMonsterKill @ 0x84ad93a

/* game_master::CMonsterDropTest::singleMapMonsterKill(CParty*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const,
   std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&) */

void game_master::CMonsterDropTest::singleMapMonsterKill(CParty *param_1,map *param_2,map *param_3)

{
  char cVar1;
  int iVar2;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_40 [4];
  vector<bool,std::allocator<bool>> local_3c [20];
  list<map_item,std::allocator<map_item>> local_28 [8];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_20 [4];
  int local_1c;
  undefined1 local_16;
  bool local_15;
  MapInfo *local_14;
  uint local_10;
  
  std::list<map_item,std::allocator<map_item>>::list(local_28);
  local_1c = 100;
                    /* try { // try from 084ad95a to 084ad95e has its CatchHandler @ 084adac8 */
  std::vector<bool,std::allocator<bool>>::vector(local_3c);
  local_16 = 1;
  local_15 = true;
                    /* try { // try from 084ad975 to 084ada6e has its CatchHandler @ 084adaa6 */
  std::vector<bool,std::allocator<bool>>::push_back(local_3c,true);
  std::vector<bool,std::allocator<bool>>::push_back(local_3c,local_15);
  local_14 = (MapInfo *)CBattle_Field::GetCurrentMapInfo((CBattle_Field *)(param_2 + 0xb24));
  for (local_10 = 0; local_10 < *(uint *)(param_1 + 0xc); local_10 = local_10 + 1) {
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
              (local_40);
    while( true ) {
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
                (local_20);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40,
                         (_Rb_tree_iterator *)local_20);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40);
      if (*(int *)(iVar2 + 0x30) == 100) {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40);
        processKillMonster((CMonsterDropTest *)param_1,(CParty *)param_2,local_14,
                           (map_monster *)(iVar2 + 4),(vector *)local_3c,local_1c,(list *)local_28);
        getDungeonDropResult((list *)param_1,(map *)local_28,param_3);
        std::list<map_item,std::allocator<map_item>>::clear(local_28);
      }
      std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40);
    }
  }
                    /* try { // try from 084adac1 to 084adac5 has its CatchHandler @ 084adac8 */
  std::vector<bool,std::allocator<bool>>::~vector(local_3c);
  std::list<map_item,std::allocator<map_item>>::~list(local_28);
  return;
}
```
