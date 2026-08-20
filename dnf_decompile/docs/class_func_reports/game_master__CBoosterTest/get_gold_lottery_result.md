# get_gold_lottery_result

`_ZN11game_master12CBoosterTest23get_gold_lottery_resultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`game_master::CBoosterTest::get_gold_lottery_result(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084afd1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084afd1c  _ZN11game_master12CBoosterTest23get_gold_lottery_resultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           game_master::CBoosterTest::get_gold_lottery_result(CItem const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x084afd1c, 0x084afe39]
084afd1c +0x000:  push   %ebp
084afd1d +0x001:  mov    %esp,%ebp
084afd1f +0x003:  push   %esi
084afd20 +0x004:  push   %ebx
084afd21 +0x005:  add    $0xffffff80,%esp
084afd24 +0x008:  lea    -0x6d(%ebp),%eax
084afd27 +0x00b:  mov    %eax,(%esp)
084afd2a +0x00e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084afd2f +0x013:  movl   $0x0,-0xc(%ebp)
084afd36 +0x01a:  jmp    084afe1b <+0xff>
084afd3b +0x01f:  lea    -0x6d(%ebp),%esi
084afd3e +0x022:  mov    0xc(%ebp),%eax
084afd41 +0x025:  mov    %eax,(%esp)
084afd44 +0x028:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
084afd49 +0x02d:  mov    %eax,%ebx
084afd4b +0x02f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084afd50 +0x034:  mov    0xc(%eax),%eax
084afd53 +0x037:  mov    %esi,0x8(%esp)
084afd57 +0x03b:  mov    %ebx,0x4(%esp)
084afd5b +0x03f:  mov    %eax,(%esp)
084afd5e +0x042:  call   08512230 <_ZN9CItemList14get_lotto_itemEiPc>  ; CItemList::get_lotto_item(int, char*)
084afd63 +0x047:  lea    -0x30(%ebp),%eax
084afd66 +0x04a:  lea    -0x6d(%ebp),%edx
084afd69 +0x04d:  add    $0x7,%edx
084afd6c +0x050:  mov    %edx,0x8(%esp)
084afd70 +0x054:  mov    0x10(%ebp),%edx
084afd73 +0x057:  mov    %edx,0x4(%esp)
084afd77 +0x05b:  mov    %eax,(%esp)
084afd7a +0x05e:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084afd7f +0x063:  sub    $0x4,%esp
084afd82 +0x066:  lea    -0x2c(%ebp),%eax
084afd85 +0x069:  mov    0x10(%ebp),%edx
084afd88 +0x06c:  mov    %edx,0x4(%esp)
084afd8c +0x070:  mov    %eax,(%esp)
084afd8f +0x073:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084afd94 +0x078:  sub    $0x4,%esp
084afd97 +0x07b:  lea    -0x2c(%ebp),%eax
084afd9a +0x07e:  mov    %eax,0x4(%esp)
084afd9e +0x082:  lea    -0x30(%ebp),%eax
084afda1 +0x085:  mov    %eax,(%esp)
084afda4 +0x088:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084afda9 +0x08d:  test   %al,%al
084afdab +0x08f:  je     084afdc3 <+0xa7>
084afdad +0x091:  lea    -0x30(%ebp),%eax
084afdb0 +0x094:  mov    %eax,(%esp)
084afdb3 +0x097:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084afdb8 +0x09c:  mov    0x4(%eax),%edx
084afdbb +0x09f:  add    $0x1,%edx
084afdbe +0x0a2:  mov    %edx,0x4(%eax)
084afdc1 +0x0a5:  jmp    084afe17 <+0xfb>
084afdc3 +0x0a7:  movl   $0x1,-0x10(%ebp)
084afdca +0x0ae:  lea    -0x18(%ebp),%eax
084afdcd +0x0b1:  lea    -0x10(%ebp),%edx
084afdd0 +0x0b4:  mov    %edx,0x8(%esp)
084afdd4 +0x0b8:  lea    -0x6d(%ebp),%edx
084afdd7 +0x0bb:  add    $0x7,%edx
084afdda +0x0be:  mov    %edx,0x4(%esp)
084afdde +0x0c2:  mov    %eax,(%esp)
084afde1 +0x0c5:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
084afde6 +0x0ca:  sub    $0x4,%esp
084afde9 +0x0cd:  lea    -0x18(%ebp),%eax
084afdec +0x0d0:  mov    %eax,0x4(%esp)
084afdf0 +0x0d4:  lea    -0x20(%ebp),%eax
084afdf3 +0x0d7:  mov    %eax,(%esp)
084afdf6 +0x0da:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
084afdfb +0x0df:  lea    -0x28(%ebp),%eax
084afdfe +0x0e2:  lea    -0x20(%ebp),%edx
084afe01 +0x0e5:  mov    %edx,0x8(%esp)
084afe05 +0x0e9:  mov    0x10(%ebp),%edx
084afe08 +0x0ec:  mov    %edx,0x4(%esp)
084afe0c +0x0f0:  mov    %eax,(%esp)
084afe0f +0x0f3:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084afe14 +0x0f8:  sub    $0x4,%esp
084afe17 +0x0fb:  addl   $0x1,-0xc(%ebp)
084afe1b +0x0ff:  mov    0x8(%ebp),%eax
084afe1e +0x102:  mov    0xc(%eax),%eax
084afe21 +0x105:  cmp    -0xc(%ebp),%eax
084afe24 +0x108:  setg   %al
084afe27 +0x10b:  test   %al,%al
084afe29 +0x10d:  jne    084afd3b <+0x1f>
084afe2f +0x113:  lea    -0x8(%ebp),%esp
084afe32 +0x116:  add    $0x0,%esp
084afe35 +0x119:  pop    %ebx
084afe36 +0x11a:  pop    %esi
084afe37 +0x11b:  pop    %ebp
084afe38 +0x11c:  ret
084afe39 +0x11d:  nop
```

## 反编译 C

```c
// game_master::CBoosterTest::get_gold_lottery_result @ 0x84afd1c

/* game_master::CBoosterTest::get_gold_lottery_result(CItem const*, std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >&) */

void game_master::CBoosterTest::get_gold_lottery_result(CItem *param_1,map *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Inven_Item local_71 [7];
  int aiStack_6a [13];
  _Rb_tree_iterator<std::pair<int_const,int>> local_34 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_30 [4];
  pair local_2c [8];
  pair<int_const,int> local_24 [8];
  int local_1c [2];
  undefined4 local_14;
  int local_10;
  
  Inven_Item::Inven_Item(local_71);
  for (local_10 = 0; local_10 < *(int *)(param_1 + 0xc); local_10 = local_10 + 1) {
    iVar2 = CItem::get_index((CItem *)param_2);
    iVar3 = G_CDataManager();
    CItemList::get_lotto_item(*(CItemList **)(iVar3 + 0xc),iVar2,(char *)local_71);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_34)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_30);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_34,(_Rb_tree_iterator *)local_30);
    if (cVar1 == '\0') {
      local_14 = 1;
      std::make_pair<int,int>(local_1c,aiStack_6a);
      std::pair<int_const,int>::pair<int,int>(local_24,(pair *)local_1c);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_2c);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_34);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  return;
}
```
