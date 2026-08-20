# addOutputItem

`_ZN24CVendingMachineStatistic13addOutputItemEmj`

`CVendingMachineStatistic::addOutputItem(unsigned long, unsigned int)`

| 类 | 地址 |
|---|---|
| `CVendingMachineStatistic` | `0x0860f5a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860f5a4  _ZN24CVendingMachineStatistic13addOutputItemEmj
#           CVendingMachineStatistic::addOutputItem(unsigned long, unsigned int)
# range [0x0860f5a4, 0x0860f6dd]
0860f5a4 +0x000:  push   %ebp
0860f5a5 +0x001:  mov    %esp,%ebp
0860f5a7 +0x003:  sub    $0x48,%esp
0860f5aa +0x006:  mov    0x8(%ebp),%edx
0860f5ad +0x009:  lea    -0x30(%ebp),%eax
0860f5b0 +0x00c:  mov    %edx,0x4(%esp)
0860f5b4 +0x010:  mov    %eax,(%esp)
0860f5b7 +0x013:  call   0819d1da <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x6b>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x6b
0860f5bc +0x018:  sub    $0x4,%esp
0860f5bf +0x01b:  mov    0x8(%ebp),%edx
0860f5c2 +0x01e:  lea    -0x2c(%ebp),%eax
0860f5c5 +0x021:  mov    %edx,0x4(%esp)
0860f5c9 +0x025:  mov    %eax,(%esp)
0860f5cc +0x028:  call   0819d1b6 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x47>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x47
0860f5d1 +0x02d:  sub    $0x4,%esp
0860f5d4 +0x030:  lea    -0x34(%ebp),%eax
0860f5d7 +0x033:  lea    0xc(%ebp),%edx
0860f5da +0x036:  mov    %edx,0xc(%esp)
0860f5de +0x03a:  mov    -0x30(%ebp),%edx
0860f5e1 +0x03d:  mov    %edx,0x8(%esp)
0860f5e5 +0x041:  mov    -0x2c(%ebp),%edx
0860f5e8 +0x044:  mov    %edx,0x4(%esp)
0860f5ec +0x048:  mov    %eax,(%esp)
0860f5ef +0x04b:  call   0819d200 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x91>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x91
0860f5f4 +0x050:  sub    $0x4,%esp
0860f5f7 +0x053:  mov    0x8(%ebp),%edx
0860f5fa +0x056:  lea    -0x28(%ebp),%eax
0860f5fd +0x059:  mov    %edx,0x4(%esp)
0860f601 +0x05d:  mov    %eax,(%esp)
0860f604 +0x060:  call   0819d1da <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x6b>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x6b
0860f609 +0x065:  sub    $0x4,%esp
0860f60c +0x068:  lea    -0x28(%ebp),%eax
0860f60f +0x06b:  mov    %eax,0x4(%esp)
0860f613 +0x06f:  lea    -0x34(%ebp),%eax
0860f616 +0x072:  mov    %eax,(%esp)
0860f619 +0x075:  call   08611a55 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1ad3>  ; global constructors keyed to Statistics::Statistics()+0x1ad3
0860f61e +0x07a:  test   %al,%al
0860f620 +0x07c:  jne    0860f6db <+0x137>
0860f626 +0x082:  mov    0x8(%ebp),%eax
0860f629 +0x085:  lea    0x10(%eax),%ecx
0860f62c +0x088:  lea    -0x38(%ebp),%eax
0860f62f +0x08b:  lea    0xc(%ebp),%edx
0860f632 +0x08e:  mov    %edx,0x8(%esp)
0860f636 +0x092:  mov    %ecx,0x4(%esp)
0860f63a +0x096:  mov    %eax,(%esp)
0860f63d +0x099:  call   08611a82 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1b00>  ; global constructors keyed to Statistics::Statistics()+0x1b00
0860f642 +0x09e:  sub    $0x4,%esp
0860f645 +0x0a1:  mov    0x8(%ebp),%eax
0860f648 +0x0a4:  lea    0x10(%eax),%edx
0860f64b +0x0a7:  lea    -0x24(%ebp),%eax
0860f64e +0x0aa:  mov    %edx,0x4(%esp)
0860f652 +0x0ae:  mov    %eax,(%esp)
0860f655 +0x0b1:  call   08611aae <_GLOBAL__I__ZN10StatisticsC2Ev+0x1b2c>  ; global constructors keyed to Statistics::Statistics()+0x1b2c
0860f65a +0x0b6:  sub    $0x4,%esp
0860f65d +0x0b9:  lea    -0x24(%ebp),%eax
0860f660 +0x0bc:  mov    %eax,0x4(%esp)
0860f664 +0x0c0:  lea    -0x38(%ebp),%eax
0860f667 +0x0c3:  mov    %eax,(%esp)
0860f66a +0x0c6:  call   08611ad4 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1b52>  ; global constructors keyed to Statistics::Statistics()+0x1b52
0860f66f +0x0cb:  test   %al,%al
0860f671 +0x0cd:  je     0860f6c2 <+0x11e>
0860f673 +0x0cf:  lea    -0x10(%ebp),%eax
0860f676 +0x0d2:  lea    0x10(%ebp),%edx
0860f679 +0x0d5:  mov    %edx,0x8(%esp)
0860f67d +0x0d9:  lea    0xc(%ebp),%edx
0860f680 +0x0dc:  mov    %edx,0x4(%esp)
0860f684 +0x0e0:  mov    %eax,(%esp)
0860f687 +0x0e3:  call   0854b74f <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x5d7>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x5d7
0860f68c +0x0e8:  sub    $0x4,%esp
0860f68f +0x0eb:  lea    -0x10(%ebp),%eax
0860f692 +0x0ee:  mov    %eax,0x4(%esp)
0860f696 +0x0f2:  lea    -0x18(%ebp),%eax
0860f699 +0x0f5:  mov    %eax,(%esp)
0860f69c +0x0f8:  call   08611ae8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1b66>  ; global constructors keyed to Statistics::Statistics()+0x1b66
0860f6a1 +0x0fd:  mov    0x8(%ebp),%eax
0860f6a4 +0x100:  lea    0x10(%eax),%ecx
0860f6a7 +0x103:  lea    -0x20(%ebp),%eax
0860f6aa +0x106:  lea    -0x18(%ebp),%edx
0860f6ad +0x109:  mov    %edx,0x8(%esp)
0860f6b1 +0x10d:  mov    %ecx,0x4(%esp)
0860f6b5 +0x111:  mov    %eax,(%esp)
0860f6b8 +0x114:  call   08611b18 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1b96>  ; global constructors keyed to Statistics::Statistics()+0x1b96
0860f6bd +0x119:  sub    $0x4,%esp
0860f6c0 +0x11c:  jmp    0860f6dc <+0x138>
0860f6c2 +0x11e:  lea    -0x38(%ebp),%eax
0860f6c5 +0x121:  mov    %eax,(%esp)
0860f6c8 +0x124:  call   08611b44 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1bc2>  ; global constructors keyed to Statistics::Statistics()+0x1bc2
0860f6cd +0x129:  mov    0x4(%eax),%ecx
0860f6d0 +0x12c:  mov    0x10(%ebp),%edx
0860f6d3 +0x12f:  lea    (%ecx,%edx,1),%edx
0860f6d6 +0x132:  mov    %edx,0x4(%eax)
0860f6d9 +0x135:  jmp    0860f6dc <+0x138>
0860f6db +0x137:  nop
0860f6dc +0x138:  leave
0860f6dd +0x139:  ret
```

## 反编译 C

```c
// CVendingMachineStatistic::addOutputItem @ 0x860f5a4

/* CVendingMachineStatistic::addOutputItem(unsigned long, unsigned int) */

void __thiscall
CVendingMachineStatistic::addOutputItem(CVendingMachineStatistic *this,ulong param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_long_const,unsigned_int>> local_3c [4];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  __normal_iterator local_2c [4];
  map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
  local_28 [4];
  pair local_24 [8];
  pair<unsigned_long_const,unsigned_int> local_1c [8];
  ulong local_14 [4];
  
  std::vector<unsigned_long,std::allocator<unsigned_long>>::end();
  std::vector<unsigned_long,std::allocator<unsigned_long>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<unsigned_long*,std::vector<unsigned_long,std::allocator<unsigned_long>>>,unsigned_long>
            (local_38,local_30,local_34,&param_1);
  std::vector<unsigned_long,std::allocator<unsigned_long>>::end();
  bVar1 = __gnu_cxx::operator==(local_38,local_2c);
  if (!bVar1) {
    std::
    map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
    ::find((ulong *)local_3c);
    std::
    map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
    ::end(local_28);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,unsigned_int>>::operator==
                      (local_3c,(_Rb_tree_iterator *)local_28);
    if (cVar2 == '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,unsigned_int>>::operator->
                        (local_3c);
      *(uint *)(iVar3 + 4) = *(int *)(iVar3 + 4) + param_2;
    }
    else {
      std::make_pair<unsigned_long&,unsigned_int&>(local_14,&param_1);
      std::pair<unsigned_long_const,unsigned_int>::pair<unsigned_long,unsigned_int>
                (local_1c,(pair *)local_14);
      std::
      map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
      ::insert(local_24);
    }
  }
  return;
}
```
