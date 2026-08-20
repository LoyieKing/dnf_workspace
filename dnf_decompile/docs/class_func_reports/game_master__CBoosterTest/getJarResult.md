# getJarResult

`_ZN11game_master12CBoosterTest12getJarResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`game_master::CBoosterTest::getJarResult(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084afba8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084afba8  _ZN11game_master12CBoosterTest12getJarResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           game_master::CBoosterTest::getJarResult(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x084afba8, 0x084afccb]
084afba8 +0x000:  push   %ebp
084afba9 +0x001:  mov    %esp,%ebp
084afbab +0x003:  push   %esi
084afbac +0x004:  push   %ebx
084afbad +0x005:  add    $0xffffff80,%esp
084afbb0 +0x008:  lea    -0x75(%ebp),%eax
084afbb3 +0x00b:  mov    %eax,(%esp)
084afbb6 +0x00e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084afbbb +0x013:  movl   $0x0,-0xc(%ebp)
084afbc2 +0x01a:  jmp    084afcad <+0x105>
084afbc7 +0x01f:  lea    -0x75(%ebp),%esi
084afbca +0x022:  mov    0xc(%ebp),%eax
084afbcd +0x025:  mov    %eax,(%esp)
084afbd0 +0x028:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
084afbd5 +0x02d:  mov    %eax,%ebx
084afbd7 +0x02f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084afbdc +0x034:  mov    0xc(%eax),%eax
084afbdf +0x037:  mov    %esi,0x8(%esp)
084afbe3 +0x03b:  mov    %ebx,0x4(%esp)
084afbe7 +0x03f:  mov    %eax,(%esp)
084afbea +0x042:  call   08512230 <_ZN9CItemList14get_lotto_itemEiPc>  ; CItemList::get_lotto_item(int, char*)
084afbef +0x047:  mov    -0x73(%ebp),%eax
084afbf2 +0x04a:  mov    %eax,-0x34(%ebp)
084afbf5 +0x04d:  lea    -0x38(%ebp),%eax
084afbf8 +0x050:  lea    -0x34(%ebp),%edx
084afbfb +0x053:  mov    %edx,0x8(%esp)
084afbff +0x057:  mov    0x10(%ebp),%edx
084afc02 +0x05a:  mov    %edx,0x4(%esp)
084afc06 +0x05e:  mov    %eax,(%esp)
084afc09 +0x061:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084afc0e +0x066:  sub    $0x4,%esp
084afc11 +0x069:  lea    -0x30(%ebp),%eax
084afc14 +0x06c:  mov    0x10(%ebp),%edx
084afc17 +0x06f:  mov    %edx,0x4(%esp)
084afc1b +0x073:  mov    %eax,(%esp)
084afc1e +0x076:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084afc23 +0x07b:  sub    $0x4,%esp
084afc26 +0x07e:  lea    -0x30(%ebp),%eax
084afc29 +0x081:  mov    %eax,0x4(%esp)
084afc2d +0x085:  lea    -0x38(%ebp),%eax
084afc30 +0x088:  mov    %eax,(%esp)
084afc33 +0x08b:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084afc38 +0x090:  test   %al,%al
084afc3a +0x092:  je     084afc52 <+0xaa>
084afc3c +0x094:  lea    -0x38(%ebp),%eax
084afc3f +0x097:  mov    %eax,(%esp)
084afc42 +0x09a:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084afc47 +0x09f:  mov    0x4(%eax),%edx
084afc4a +0x0a2:  add    $0x1,%edx
084afc4d +0x0a5:  mov    %edx,0x4(%eax)
084afc50 +0x0a8:  jmp    084afca9 <+0x101>
084afc52 +0x0aa:  movl   $0x1,-0x14(%ebp)
084afc59 +0x0b1:  mov    -0x73(%ebp),%eax
084afc5c +0x0b4:  mov    %eax,-0x10(%ebp)
084afc5f +0x0b7:  lea    -0x1c(%ebp),%eax
084afc62 +0x0ba:  lea    -0x14(%ebp),%edx
084afc65 +0x0bd:  mov    %edx,0x8(%esp)
084afc69 +0x0c1:  lea    -0x10(%ebp),%edx
084afc6c +0x0c4:  mov    %edx,0x4(%esp)
084afc70 +0x0c8:  mov    %eax,(%esp)
084afc73 +0x0cb:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
084afc78 +0x0d0:  sub    $0x4,%esp
084afc7b +0x0d3:  lea    -0x1c(%ebp),%eax
084afc7e +0x0d6:  mov    %eax,0x4(%esp)
084afc82 +0x0da:  lea    -0x24(%ebp),%eax
084afc85 +0x0dd:  mov    %eax,(%esp)
084afc88 +0x0e0:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
084afc8d +0x0e5:  lea    -0x2c(%ebp),%eax
084afc90 +0x0e8:  lea    -0x24(%ebp),%edx
084afc93 +0x0eb:  mov    %edx,0x8(%esp)
084afc97 +0x0ef:  mov    0x10(%ebp),%edx
084afc9a +0x0f2:  mov    %edx,0x4(%esp)
084afc9e +0x0f6:  mov    %eax,(%esp)
084afca1 +0x0f9:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084afca6 +0x0fe:  sub    $0x4,%esp
084afca9 +0x101:  addl   $0x1,-0xc(%ebp)
084afcad +0x105:  mov    0x8(%ebp),%eax
084afcb0 +0x108:  mov    0xc(%eax),%eax
084afcb3 +0x10b:  cmp    -0xc(%ebp),%eax
084afcb6 +0x10e:  setg   %al
084afcb9 +0x111:  test   %al,%al
084afcbb +0x113:  jne    084afbc7 <+0x1f>
084afcc1 +0x119:  lea    -0x8(%ebp),%esp
084afcc4 +0x11c:  add    $0x0,%esp
084afcc7 +0x11f:  pop    %ebx
084afcc8 +0x120:  pop    %esi
084afcc9 +0x121:  pop    %ebp
084afcca +0x122:  ret
084afccb +0x123:  nop
```

## 反编译 C

```c
// game_master::CBoosterTest::getJarResult @ 0x84afba8

/* game_master::CBoosterTest::getJarResult(CItem const*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void game_master::CBoosterTest::getJarResult(CItem *param_1,map *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Inven_Item local_79 [2];
  int local_77;
  _Rb_tree_iterator<std::pair<int_const,int>> local_3c [4];
  int local_38;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_34 [4];
  pair local_30 [8];
  pair<int_const,int> local_28 [8];
  int local_20 [2];
  undefined4 local_18;
  int local_14;
  int local_10;
  
  Inven_Item::Inven_Item(local_79);
  for (local_10 = 0; local_10 < *(int *)(param_1 + 0xc); local_10 = local_10 + 1) {
    iVar2 = CItem::get_index((CItem *)param_2);
    iVar3 = G_CDataManager();
    CItemList::get_lotto_item(*(CItemList **)(iVar3 + 0xc),iVar2,(char *)local_79);
    local_38 = local_77;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_3c)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_34);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_3c,(_Rb_tree_iterator *)local_34);
    if (cVar1 == '\0') {
      local_18 = 1;
      local_14 = local_77;
      std::make_pair<int,int>(local_20,&local_14);
      std::pair<int_const,int>::pair<int,int>(local_28,(pair *)local_20);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_30);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_3c);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  return;
}
```
