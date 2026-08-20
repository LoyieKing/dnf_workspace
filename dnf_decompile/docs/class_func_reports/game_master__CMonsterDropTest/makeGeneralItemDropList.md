# makeGeneralItemDropList

`_ZN11game_master16CMonsterDropTest23makeGeneralItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`game_master::CMonsterDropTest::makeGeneralItemDropList(std::list<map_item, std::allocator<map_item> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CMonsterDropTest` | `0x084ae734` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ae734  _ZN11game_master16CMonsterDropTest23makeGeneralItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           game_master::CMonsterDropTest::makeGeneralItemDropList(std::list<map_item, std::allocator<map_item> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x084ae734, 0x084ae943]
084ae734 +0x000:  push   %ebp
084ae735 +0x001:  mov    %esp,%ebp
084ae737 +0x003:  push   %esi
084ae738 +0x004:  push   %ebx
084ae739 +0x005:  sub    $0x70,%esp
084ae73c +0x008:  lea    -0x58(%ebp),%eax
084ae73f +0x00b:  mov    0xc(%ebp),%edx
084ae742 +0x00e:  mov    %edx,0x4(%esp)
084ae746 +0x012:  mov    %eax,(%esp)
084ae749 +0x015:  call   08152b88 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24bd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24bd
084ae74e +0x01a:  sub    $0x4,%esp
084ae751 +0x01d:  jmp    084ae90b <+0x1d7>
084ae756 +0x022:  lea    -0x58(%ebp),%eax
084ae759 +0x025:  mov    %eax,(%esp)
084ae75c +0x028:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae761 +0x02d:  mov    0x12(%eax),%eax
084ae764 +0x030:  mov    %eax,-0x50(%ebp)
084ae767 +0x033:  lea    -0x5c(%ebp),%eax
084ae76a +0x036:  lea    -0x50(%ebp),%edx
084ae76d +0x039:  mov    %edx,0x8(%esp)
084ae771 +0x03d:  mov    0x10(%ebp),%edx
084ae774 +0x040:  mov    %edx,0x4(%esp)
084ae778 +0x044:  mov    %eax,(%esp)
084ae77b +0x047:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084ae780 +0x04c:  sub    $0x4,%esp
084ae783 +0x04f:  lea    -0x58(%ebp),%eax
084ae786 +0x052:  mov    %eax,(%esp)
084ae789 +0x055:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae78e +0x05a:  mov    0x12(%eax),%eax
084ae791 +0x05d:  test   %eax,%eax
084ae793 +0x05f:  sete   %al
084ae796 +0x062:  test   %al,%al
084ae798 +0x064:  je     084ae85d <+0x129>
084ae79e +0x06a:  lea    -0x4c(%ebp),%eax
084ae7a1 +0x06d:  mov    0x10(%ebp),%edx
084ae7a4 +0x070:  mov    %edx,0x4(%esp)
084ae7a8 +0x074:  mov    %eax,(%esp)
084ae7ab +0x077:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084ae7b0 +0x07c:  sub    $0x4,%esp
084ae7b3 +0x07f:  lea    -0x4c(%ebp),%eax
084ae7b6 +0x082:  mov    %eax,0x4(%esp)
084ae7ba +0x086:  lea    -0x5c(%ebp),%eax
084ae7bd +0x089:  mov    %eax,(%esp)
084ae7c0 +0x08c:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084ae7c5 +0x091:  test   %al,%al
084ae7c7 +0x093:  je     084ae7f2 <+0xbe>
084ae7c9 +0x095:  lea    -0x5c(%ebp),%eax
084ae7cc +0x098:  mov    %eax,(%esp)
084ae7cf +0x09b:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084ae7d4 +0x0a0:  mov    %eax,%ebx
084ae7d6 +0x0a2:  mov    0x4(%ebx),%esi
084ae7d9 +0x0a5:  lea    -0x58(%ebp),%eax
084ae7dc +0x0a8:  mov    %eax,(%esp)
084ae7df +0x0ab:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae7e4 +0x0b0:  mov    0x17(%eax),%eax
084ae7e7 +0x0b3:  lea    (%esi,%eax,1),%eax
084ae7ea +0x0b6:  mov    %eax,0x4(%ebx)
084ae7ed +0x0b9:  jmp    084ae900 <+0x1cc>
084ae7f2 +0x0be:  lea    -0x58(%ebp),%eax
084ae7f5 +0x0c1:  mov    %eax,(%esp)
084ae7f8 +0x0c4:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae7fd +0x0c9:  lea    0x17(%eax),%ebx
084ae800 +0x0cc:  lea    -0x58(%ebp),%eax
084ae803 +0x0cf:  mov    %eax,(%esp)
084ae806 +0x0d2:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae80b +0x0d7:  mov    0x12(%eax),%eax
084ae80e +0x0da:  mov    %eax,-0x30(%ebp)
084ae811 +0x0dd:  lea    -0x38(%ebp),%eax
084ae814 +0x0e0:  mov    %ebx,0x8(%esp)
084ae818 +0x0e4:  lea    -0x30(%ebp),%edx
084ae81b +0x0e7:  mov    %edx,0x4(%esp)
084ae81f +0x0eb:  mov    %eax,(%esp)
084ae822 +0x0ee:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
084ae827 +0x0f3:  sub    $0x4,%esp
084ae82a +0x0f6:  lea    -0x38(%ebp),%eax
084ae82d +0x0f9:  mov    %eax,0x4(%esp)
084ae831 +0x0fd:  lea    -0x40(%ebp),%eax
084ae834 +0x100:  mov    %eax,(%esp)
084ae837 +0x103:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
084ae83c +0x108:  lea    -0x48(%ebp),%eax
084ae83f +0x10b:  lea    -0x40(%ebp),%edx
084ae842 +0x10e:  mov    %edx,0x8(%esp)
084ae846 +0x112:  mov    0x10(%ebp),%edx
084ae849 +0x115:  mov    %edx,0x4(%esp)
084ae84d +0x119:  mov    %eax,(%esp)
084ae850 +0x11c:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084ae855 +0x121:  sub    $0x4,%esp
084ae858 +0x124:  jmp    084ae900 <+0x1cc>
084ae85d +0x129:  lea    -0x2c(%ebp),%eax
084ae860 +0x12c:  mov    0x10(%ebp),%edx
084ae863 +0x12f:  mov    %edx,0x4(%esp)
084ae867 +0x133:  mov    %eax,(%esp)
084ae86a +0x136:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084ae86f +0x13b:  sub    $0x4,%esp
084ae872 +0x13e:  lea    -0x2c(%ebp),%eax
084ae875 +0x141:  mov    %eax,0x4(%esp)
084ae879 +0x145:  lea    -0x5c(%ebp),%eax
084ae87c +0x148:  mov    %eax,(%esp)
084ae87f +0x14b:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084ae884 +0x150:  test   %al,%al
084ae886 +0x152:  je     084ae89e <+0x16a>
084ae888 +0x154:  lea    -0x5c(%ebp),%eax
084ae88b +0x157:  mov    %eax,(%esp)
084ae88e +0x15a:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084ae893 +0x15f:  mov    0x4(%eax),%edx
084ae896 +0x162:  add    $0x1,%edx
084ae899 +0x165:  mov    %edx,0x4(%eax)
084ae89c +0x168:  jmp    084ae900 <+0x1cc>
084ae89e +0x16a:  movl   $0x1,-0x10(%ebp)
084ae8a5 +0x171:  lea    -0x58(%ebp),%eax
084ae8a8 +0x174:  mov    %eax,(%esp)
084ae8ab +0x177:  call   084b48aa <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x95d>  ; global constructors keyed to game_master::CMacro::Reset()+0x95d
084ae8b0 +0x17c:  mov    0x12(%eax),%eax
084ae8b3 +0x17f:  mov    %eax,-0xc(%ebp)
084ae8b6 +0x182:  lea    -0x18(%ebp),%eax
084ae8b9 +0x185:  lea    -0x10(%ebp),%edx
084ae8bc +0x188:  mov    %edx,0x8(%esp)
084ae8c0 +0x18c:  lea    -0xc(%ebp),%edx
084ae8c3 +0x18f:  mov    %edx,0x4(%esp)
084ae8c7 +0x193:  mov    %eax,(%esp)
084ae8ca +0x196:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
084ae8cf +0x19b:  sub    $0x4,%esp
084ae8d2 +0x19e:  lea    -0x18(%ebp),%eax
084ae8d5 +0x1a1:  mov    %eax,0x4(%esp)
084ae8d9 +0x1a5:  lea    -0x20(%ebp),%eax
084ae8dc +0x1a8:  mov    %eax,(%esp)
084ae8df +0x1ab:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
084ae8e4 +0x1b0:  lea    -0x28(%ebp),%eax
084ae8e7 +0x1b3:  lea    -0x20(%ebp),%edx
084ae8ea +0x1b6:  mov    %edx,0x8(%esp)
084ae8ee +0x1ba:  mov    0x10(%ebp),%edx
084ae8f1 +0x1bd:  mov    %edx,0x4(%esp)
084ae8f5 +0x1c1:  mov    %eax,(%esp)
084ae8f8 +0x1c4:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084ae8fd +0x1c9:  sub    $0x4,%esp
084ae900 +0x1cc:  lea    -0x58(%ebp),%eax
084ae903 +0x1cf:  mov    %eax,(%esp)
084ae906 +0x1d2:  call   084b4896 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x949>  ; global constructors keyed to game_master::CMacro::Reset()+0x949
084ae90b +0x1d7:  lea    -0x54(%ebp),%eax
084ae90e +0x1da:  mov    0xc(%ebp),%edx
084ae911 +0x1dd:  mov    %edx,0x4(%esp)
084ae915 +0x1e1:  mov    %eax,(%esp)
084ae918 +0x1e4:  call   08152bbe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24f3
084ae91d +0x1e9:  sub    $0x4,%esp
084ae920 +0x1ec:  lea    -0x54(%ebp),%eax
084ae923 +0x1ef:  mov    %eax,0x4(%esp)
084ae927 +0x1f3:  lea    -0x58(%ebp),%eax
084ae92a +0x1f6:  mov    %eax,(%esp)
084ae92d +0x1f9:  call   08311e70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3a55>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3a55
084ae932 +0x1fe:  test   %al,%al
084ae934 +0x200:  jne    084ae756 <+0x22>
084ae93a +0x206:  lea    -0x8(%ebp),%esp
084ae93d +0x209:  add    $0x0,%esp
084ae940 +0x20c:  pop    %ebx
084ae941 +0x20d:  pop    %esi
084ae942 +0x20e:  pop    %ebp
084ae943 +0x20f:  ret
```

## 反编译 C

```c
// game_master::CMonsterDropTest::makeGeneralItemDropList @ 0x84ae734

/* game_master::CMonsterDropTest::makeGeneralItemDropList(std::list<map_item,
   std::allocator<map_item> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int
   const, int> > >&) */

void game_master::CMonsterDropTest::makeGeneralItemDropList(list *param_1,map *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Rb_tree_iterator<std::pair<int_const,int>> local_60 [4];
  _List_iterator<map_item> local_5c [4];
  _List_iterator local_58 [4];
  undefined4 local_54;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_50 [4];
  pair local_4c [8];
  pair<int_const,int> local_44 [8];
  int local_3c [2];
  int local_34;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_30 [4];
  pair local_2c [8];
  pair<int_const,int> local_24 [8];
  int local_1c [2];
  undefined4 local_14;
  int local_10;
  
  std::list<map_item,std::allocator<map_item>>::begin();
  while( true ) {
    std::list<map_item,std::allocator<map_item>>::end();
    cVar1 = std::_List_iterator<map_item>::operator!=(local_5c,local_58);
    if (cVar1 == '\0') break;
    iVar2 = std::_List_iterator<map_item>::operator->(local_5c);
    local_54 = *(undefined4 *)(iVar2 + 0x12);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_60)
    ;
    iVar2 = std::_List_iterator<map_item>::operator->(local_5c);
    if (*(int *)(iVar2 + 0x12) == 0) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_50);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_60,(_Rb_tree_iterator *)local_50);
      if (cVar1 == '\0') {
        std::_List_iterator<map_item>::operator->(local_5c);
        iVar2 = std::_List_iterator<map_item>::operator->(local_5c);
        local_34 = *(int *)(iVar2 + 0x12);
        std::make_pair<int,int>(local_3c,&local_34);
        std::pair<int_const,int>::pair<int,int>(local_44,(pair *)local_3c);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_4c);
      }
      else {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_60);
        iVar2 = *(int *)(iVar3 + 4);
        iVar4 = std::_List_iterator<map_item>::operator->(local_5c);
        *(int *)(iVar3 + 4) = iVar2 + *(int *)(iVar4 + 0x17);
      }
    }
    else {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_30);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_60,(_Rb_tree_iterator *)local_30);
      if (cVar1 == '\0') {
        local_14 = 1;
        iVar2 = std::_List_iterator<map_item>::operator->(local_5c);
        local_10 = *(int *)(iVar2 + 0x12);
        std::make_pair<int,int>(local_1c,&local_10);
        std::pair<int_const,int>::pair<int,int>(local_24,(pair *)local_1c);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_2c);
      }
      else {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_60);
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
    }
    std::_List_iterator<map_item>::operator++(local_5c);
  }
  return;
}
```
