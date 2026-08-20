# testResetOneADayItemShop

`_ZN9GameWorld24testResetOneADayItemShopEv`

`GameWorld::testResetOneADayItemShop()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cf904` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cf904  _ZN9GameWorld24testResetOneADayItemShopEv
#           GameWorld::testResetOneADayItemShop()
# range [0x086cf904, 0x086cfa0f]
086cf904 +0x000:  push   %ebp
086cf905 +0x001:  mov    %esp,%ebp
086cf907 +0x003:  sub    $0x28,%esp
086cf90a +0x006:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086cf90f +0x00b:  movl   $0x6d,0x4(%esp)
086cf917 +0x013:  mov    %eax,(%esp)
086cf91a +0x016:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086cf91f +0x01b:  mov    (%eax),%edx
086cf921 +0x01d:  add    $0x34,%edx
086cf924 +0x020:  mov    (%edx),%edx
086cf926 +0x022:  movl   $0x0,0x4(%esp)
086cf92e +0x02a:  mov    %eax,(%esp)
086cf931 +0x02d:  call   *%edx
086cf933 +0x02f:  xor    $0x1,%eax
086cf936 +0x032:  test   %al,%al
086cf938 +0x034:  jne    086cfa0d <+0x109>
086cf93e +0x03a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086cf943 +0x03f:  mov    0x8cbc(%eax),%eax
086cf949 +0x045:  mov    %eax,(%esp)
086cf94c +0x048:  call   08512f88 <_ZN9CItemShop25testupdateOneADayItemListEv>  ; CItemShop::testupdateOneADayItemList()
086cf951 +0x04d:  mov    0x8(%ebp),%eax
086cf954 +0x050:  lea    0x134(%eax),%edx
086cf95a +0x056:  lea    -0x18(%ebp),%eax
086cf95d +0x059:  mov    %edx,0x4(%esp)
086cf961 +0x05d:  mov    %eax,(%esp)
086cf964 +0x060:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cf969 +0x065:  sub    $0x4,%esp
086cf96c +0x068:  jmp    086cf9d6 <+0xd2>
086cf96e +0x06a:  lea    -0x18(%ebp),%eax
086cf971 +0x06d:  mov    %eax,(%esp)
086cf974 +0x070:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cf979 +0x075:  mov    0x4(%eax),%eax
086cf97c +0x078:  mov    %eax,-0xc(%ebp)
086cf97f +0x07b:  mov    -0xc(%ebp),%eax
086cf982 +0x07e:  mov    %eax,(%esp)
086cf985 +0x081:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086cf98a +0x086:  cmp    $0x2,%eax
086cf98d +0x089:  setle  %al
086cf990 +0x08c:  test   %al,%al
086cf992 +0x08e:  jne    086cf9b8 <+0xb4>
086cf994 +0x090:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086cf999 +0x095:  mov    0x8cbc(%eax),%eax
086cf99f +0x09b:  mov    %eax,(%esp)
086cf9a2 +0x09e:  call   08513076 <_ZNK9CItemShop18GetOneADayItemListEv>  ; CItemShop::GetOneADayItemList() const
086cf9a7 +0x0a3:  mov    %eax,0x4(%esp)
086cf9ab +0x0a7:  mov    -0xc(%ebp),%eax
086cf9ae +0x0aa:  mov    %eax,(%esp)
086cf9b1 +0x0ad:  call   0868aaea <_ZN5CUser24SendOneADayItemShopIndexERKSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::SendOneADayItemShopIndex(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
086cf9b6 +0x0b2:  jmp    086cf9b9 <+0xb5>
086cf9b8 +0x0b4:  nop
086cf9b9 +0x0b5:  lea    -0x10(%ebp),%eax
086cf9bc +0x0b8:  movl   $0x0,0x8(%esp)
086cf9c4 +0x0c0:  lea    -0x18(%ebp),%edx
086cf9c7 +0x0c3:  mov    %edx,0x4(%esp)
086cf9cb +0x0c7:  mov    %eax,(%esp)
086cf9ce +0x0ca:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086cf9d3 +0x0cf:  sub    $0x4,%esp
086cf9d6 +0x0d2:  mov    0x8(%ebp),%eax
086cf9d9 +0x0d5:  lea    0x134(%eax),%edx
086cf9df +0x0db:  lea    -0x14(%ebp),%eax
086cf9e2 +0x0de:  mov    %edx,0x4(%esp)
086cf9e6 +0x0e2:  mov    %eax,(%esp)
086cf9e9 +0x0e5:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cf9ee +0x0ea:  sub    $0x4,%esp
086cf9f1 +0x0ed:  lea    -0x14(%ebp),%eax
086cf9f4 +0x0f0:  mov    %eax,0x4(%esp)
086cf9f8 +0x0f4:  lea    -0x18(%ebp),%eax
086cf9fb +0x0f7:  mov    %eax,(%esp)
086cf9fe +0x0fa:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cfa03 +0x0ff:  test   %al,%al
086cfa05 +0x101:  jne    086cf96e <+0x6a>
086cfa0b +0x107:  jmp    086cfa0e <+0x10a>
086cfa0d +0x109:  nop
086cfa0e +0x10a:  leave
086cfa0f +0x10b:  ret
```

## 反编译 C

```c
// GameWorld::testResetOneADayItemShop @ 0x86cf904

/* GameWorld::testResetOneADayItemShop() */

void GameWorld::testResetOneADayItemShop(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  vector *pvVar4;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6d);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    iVar3 = G_CDataManager();
    CItemShop::testupdateOneADayItemList(*(CItemShop **)(iVar3 + 0x8cbc));
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                         (_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
      local_10 = *(CUser **)(iVar3 + 4);
      iVar3 = CUser::get_state(local_10);
      if (2 < iVar3) {
        iVar3 = G_CDataManager();
        pvVar4 = (vector *)CItemShop::GetOneADayItemList(*(CItemShop **)(iVar3 + 0x8cbc));
        CUser::SendOneADayItemShopIndex(local_10,pvVar4);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_14,(int)local_1c);
    }
  }
  return;
}
```
