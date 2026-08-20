# makeGoldItemDropList

`_ZN11game_master16CMonsterDropTest20makeGoldItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`game_master::CMonsterDropTest::makeGoldItemDropList(std::list<map_item, std::allocator<map_item> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CMonsterDropTest` | `0x084ae944` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ae944  _ZN11game_master16CMonsterDropTest20makeGoldItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           game_master::CMonsterDropTest::makeGoldItemDropList(std::list<map_item, std::allocator<map_item> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x084ae944, 0x084aea7f]
084ae944 +0x000:  push   %ebp
084ae945 +0x001:  mov    %esp,%ebp
084ae947 +0x003:  sub    $0x48,%esp
084ae94a +0x006:  lea    -0x30(%ebp),%eax
084ae94d +0x009:  mov    0xc(%ebp),%edx
084ae950 +0x00c:  mov    %edx,0x4(%esp)
084ae954 +0x010:  mov    %eax,(%esp)
084ae957 +0x013:  call   08152b88 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24bd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24bd
084ae95c +0x018:  sub    $0x4,%esp
084ae95f +0x01b:  jmp    084aea4e <+0x10a>
084ae964 +0x020:  lea    -0x30(%ebp),%eax
084ae967 +0x023:  mov    %eax,(%esp)
084ae96a +0x026:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae96f +0x02b:  mov    0x12(%eax),%eax
084ae972 +0x02e:  test   %eax,%eax
084ae974 +0x030:  sete   %al
084ae977 +0x033:  test   %al,%al
084ae979 +0x035:  je     084aea43 <+0xff>
084ae97f +0x03b:  lea    -0x30(%ebp),%eax
084ae982 +0x03e:  mov    %eax,(%esp)
084ae985 +0x041:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae98a +0x046:  lea    0x17(%eax),%edx
084ae98d +0x049:  lea    -0x34(%ebp),%eax
084ae990 +0x04c:  mov    %edx,0x8(%esp)
084ae994 +0x050:  mov    0x10(%ebp),%edx
084ae997 +0x053:  mov    %edx,0x4(%esp)
084ae99b +0x057:  mov    %eax,(%esp)
084ae99e +0x05a:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084ae9a3 +0x05f:  sub    $0x4,%esp
084ae9a6 +0x062:  lea    -0x28(%ebp),%eax
084ae9a9 +0x065:  mov    0x10(%ebp),%edx
084ae9ac +0x068:  mov    %edx,0x4(%esp)
084ae9b0 +0x06c:  mov    %eax,(%esp)
084ae9b3 +0x06f:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084ae9b8 +0x074:  sub    $0x4,%esp
084ae9bb +0x077:  lea    -0x28(%ebp),%eax
084ae9be +0x07a:  mov    %eax,0x4(%esp)
084ae9c2 +0x07e:  lea    -0x34(%ebp),%eax
084ae9c5 +0x081:  mov    %eax,(%esp)
084ae9c8 +0x084:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084ae9cd +0x089:  test   %al,%al
084ae9cf +0x08b:  je     084ae9e7 <+0xa3>
084ae9d1 +0x08d:  lea    -0x34(%ebp),%eax
084ae9d4 +0x090:  mov    %eax,(%esp)
084ae9d7 +0x093:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084ae9dc +0x098:  mov    0x4(%eax),%edx
084ae9df +0x09b:  add    $0x1,%edx
084ae9e2 +0x09e:  mov    %edx,0x4(%eax)
084ae9e5 +0x0a1:  jmp    084aea43 <+0xff>
084ae9e7 +0x0a3:  movl   $0x1,-0xc(%ebp)
084ae9ee +0x0aa:  lea    -0x30(%ebp),%eax
084ae9f1 +0x0ad:  mov    %eax,(%esp)
084ae9f4 +0x0b0:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae9f9 +0x0b5:  lea    0x17(%eax),%ecx
084ae9fc +0x0b8:  lea    -0x14(%ebp),%eax
084ae9ff +0x0bb:  lea    -0xc(%ebp),%edx
084aea02 +0x0be:  mov    %edx,0x8(%esp)
084aea06 +0x0c2:  mov    %ecx,0x4(%esp)
084aea0a +0x0c6:  mov    %eax,(%esp)
084aea0d +0x0c9:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
084aea12 +0x0ce:  sub    $0x4,%esp
084aea15 +0x0d1:  lea    -0x14(%ebp),%eax
084aea18 +0x0d4:  mov    %eax,0x4(%esp)
084aea1c +0x0d8:  lea    -0x1c(%ebp),%eax
084aea1f +0x0db:  mov    %eax,(%esp)
084aea22 +0x0de:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
084aea27 +0x0e3:  lea    -0x24(%ebp),%eax
084aea2a +0x0e6:  lea    -0x1c(%ebp),%edx
084aea2d +0x0e9:  mov    %edx,0x8(%esp)
084aea31 +0x0ed:  mov    0x10(%ebp),%edx
084aea34 +0x0f0:  mov    %edx,0x4(%esp)
084aea38 +0x0f4:  mov    %eax,(%esp)
084aea3b +0x0f7:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084aea40 +0x0fc:  sub    $0x4,%esp
084aea43 +0x0ff:  lea    -0x30(%ebp),%eax
084aea46 +0x102:  mov    %eax,(%esp)
084aea49 +0x105:  call   084b4896 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x949>  ; global constructors keyed to game_master::CMacro::Reset()+0x949
084aea4e +0x10a:  lea    -0x2c(%ebp),%eax
084aea51 +0x10d:  mov    0xc(%ebp),%edx
084aea54 +0x110:  mov    %edx,0x4(%esp)
084aea58 +0x114:  mov    %eax,(%esp)
084aea5b +0x117:  call   08152bbe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24f3
084aea60 +0x11c:  sub    $0x4,%esp
084aea63 +0x11f:  lea    -0x2c(%ebp),%eax
084aea66 +0x122:  mov    %eax,0x4(%esp)
084aea6a +0x126:  lea    -0x30(%ebp),%eax
084aea6d +0x129:  mov    %eax,(%esp)
084aea70 +0x12c:  call   08311e70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3a55>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3a55
084aea75 +0x131:  test   %al,%al
084aea77 +0x133:  jne    084ae964 <+0x20>
084aea7d +0x139:  leave
084aea7e +0x13a:  ret
084aea7f +0x13b:  nop
```

## 反编译 C

```c
// game_master::CMonsterDropTest::makeGoldItemDropList @ 0x84ae944

/* game_master::CMonsterDropTest::makeGoldItemDropList(std::list<map_item, std::allocator<map_item>
   >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&) */

void game_master::CMonsterDropTest::makeGoldItemDropList(list *param_1,map *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_38 [4];
  _List_iterator<map_item> local_34 [4];
  _List_iterator local_30 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  pair local_28 [8];
  pair<int_const,int> local_20 [8];
  int local_18 [2];
  undefined4 local_10;
  
  std::list<map_item,std::allocator<map_item>>::begin();
  while( true ) {
    std::list<map_item,std::allocator<map_item>>::end();
    cVar1 = std::_List_iterator<map_item>::operator!=(local_34,local_30);
    if (cVar1 == '\0') break;
    iVar2 = std::_List_iterator<map_item>::operator->(local_34);
    if (*(int *)(iVar2 + 0x12) == 0) {
      std::_List_iterator<map_item>::operator->(local_34);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_38);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_2c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_38,(_Rb_tree_iterator *)local_2c);
      if (cVar1 == '\0') {
        local_10 = 1;
        iVar2 = std::_List_iterator<map_item>::operator->(local_34);
        std::make_pair<int,int>(local_18,(int *)(iVar2 + 0x17));
        std::pair<int_const,int>::pair<int,int>(local_20,(pair *)local_18);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_28);
      }
      else {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_38);
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
    }
    std::_List_iterator<map_item>::operator++(local_34);
  }
  return;
}
```
