# ResetOneADayItemShop

`_ZN9GameWorld20ResetOneADayItemShopEv`

`GameWorld::ResetOneADayItemShop()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cf7f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cf7f8  _ZN9GameWorld20ResetOneADayItemShopEv
#           GameWorld::ResetOneADayItemShop()
# range [0x086cf7f8, 0x086cf903]
086cf7f8 +0x000:  push   %ebp
086cf7f9 +0x001:  mov    %esp,%ebp
086cf7fb +0x003:  sub    $0x28,%esp
086cf7fe +0x006:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086cf803 +0x00b:  movl   $0x6d,0x4(%esp)
086cf80b +0x013:  mov    %eax,(%esp)
086cf80e +0x016:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086cf813 +0x01b:  mov    (%eax),%edx
086cf815 +0x01d:  add    $0x34,%edx
086cf818 +0x020:  mov    (%edx),%edx
086cf81a +0x022:  movl   $0x0,0x4(%esp)
086cf822 +0x02a:  mov    %eax,(%esp)
086cf825 +0x02d:  call   *%edx
086cf827 +0x02f:  xor    $0x1,%eax
086cf82a +0x032:  test   %al,%al
086cf82c +0x034:  jne    086cf901 <+0x109>
086cf832 +0x03a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086cf837 +0x03f:  mov    0x8cbc(%eax),%eax
086cf83d +0x045:  mov    %eax,(%esp)
086cf840 +0x048:  call   08512e98 <_ZN9CItemShop21updateOneADayItemListEv>  ; CItemShop::updateOneADayItemList()
086cf845 +0x04d:  mov    0x8(%ebp),%eax
086cf848 +0x050:  lea    0x134(%eax),%edx
086cf84e +0x056:  lea    -0x18(%ebp),%eax
086cf851 +0x059:  mov    %edx,0x4(%esp)
086cf855 +0x05d:  mov    %eax,(%esp)
086cf858 +0x060:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cf85d +0x065:  sub    $0x4,%esp
086cf860 +0x068:  jmp    086cf8ca <+0xd2>
086cf862 +0x06a:  lea    -0x18(%ebp),%eax
086cf865 +0x06d:  mov    %eax,(%esp)
086cf868 +0x070:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cf86d +0x075:  mov    0x4(%eax),%eax
086cf870 +0x078:  mov    %eax,-0xc(%ebp)
086cf873 +0x07b:  mov    -0xc(%ebp),%eax
086cf876 +0x07e:  mov    %eax,(%esp)
086cf879 +0x081:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086cf87e +0x086:  cmp    $0x2,%eax
086cf881 +0x089:  setle  %al
086cf884 +0x08c:  test   %al,%al
086cf886 +0x08e:  jne    086cf8ac <+0xb4>
086cf888 +0x090:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086cf88d +0x095:  mov    0x8cbc(%eax),%eax
086cf893 +0x09b:  mov    %eax,(%esp)
086cf896 +0x09e:  call   08513076 <_ZNK9CItemShop18GetOneADayItemListEv>  ; CItemShop::GetOneADayItemList() const
086cf89b +0x0a3:  mov    %eax,0x4(%esp)
086cf89f +0x0a7:  mov    -0xc(%ebp),%eax
086cf8a2 +0x0aa:  mov    %eax,(%esp)
086cf8a5 +0x0ad:  call   0868aaea <_ZN5CUser24SendOneADayItemShopIndexERKSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::SendOneADayItemShopIndex(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
086cf8aa +0x0b2:  jmp    086cf8ad <+0xb5>
086cf8ac +0x0b4:  nop
086cf8ad +0x0b5:  lea    -0x10(%ebp),%eax
086cf8b0 +0x0b8:  movl   $0x0,0x8(%esp)
086cf8b8 +0x0c0:  lea    -0x18(%ebp),%edx
086cf8bb +0x0c3:  mov    %edx,0x4(%esp)
086cf8bf +0x0c7:  mov    %eax,(%esp)
086cf8c2 +0x0ca:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086cf8c7 +0x0cf:  sub    $0x4,%esp
086cf8ca +0x0d2:  mov    0x8(%ebp),%eax
086cf8cd +0x0d5:  lea    0x134(%eax),%edx
086cf8d3 +0x0db:  lea    -0x14(%ebp),%eax
086cf8d6 +0x0de:  mov    %edx,0x4(%esp)
086cf8da +0x0e2:  mov    %eax,(%esp)
086cf8dd +0x0e5:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cf8e2 +0x0ea:  sub    $0x4,%esp
086cf8e5 +0x0ed:  lea    -0x14(%ebp),%eax
086cf8e8 +0x0f0:  mov    %eax,0x4(%esp)
086cf8ec +0x0f4:  lea    -0x18(%ebp),%eax
086cf8ef +0x0f7:  mov    %eax,(%esp)
086cf8f2 +0x0fa:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cf8f7 +0x0ff:  test   %al,%al
086cf8f9 +0x101:  jne    086cf862 <+0x6a>
086cf8ff +0x107:  jmp    086cf902 <+0x10a>
086cf901 +0x109:  nop
086cf902 +0x10a:  leave
086cf903 +0x10b:  ret
```

## 反编译 C

```c
// GameWorld::ResetOneADayItemShop @ 0x86cf7f8

/* GameWorld::ResetOneADayItemShop() */

void GameWorld::ResetOneADayItemShop(void)

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
    CItemShop::updateOneADayItemList(*(CItemShop **)(iVar3 + 0x8cbc));
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
