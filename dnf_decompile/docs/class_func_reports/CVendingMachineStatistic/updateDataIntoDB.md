# updateDataIntoDB

`_ZN24CVendingMachineStatistic16updateDataIntoDBEv`

`CVendingMachineStatistic::updateDataIntoDB()`

| 类 | 地址 |
|---|---|
| `CVendingMachineStatistic` | `0x0860f6de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860f6de  _ZN24CVendingMachineStatistic16updateDataIntoDBEv
#           CVendingMachineStatistic::updateDataIntoDB()
# range [0x0860f6de, 0x0860f8ac]
0860f6de +0x000:  push   %ebp
0860f6df +0x001:  mov    %esp,%ebp
0860f6e1 +0x003:  push   %esi
0860f6e2 +0x004:  push   %ebx
0860f6e3 +0x005:  sub    $0x30,%esp
0860f6e6 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0860f6eb +0x00d:  movl   $0x624,0x8(%esp)
0860f6f3 +0x015:  movl   $"Statistics.cpp",0x4(%esp)
0860f6fb +0x01d:  mov    %eax,(%esp)
0860f6fe +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0860f703 +0x025:  movl   $0x1,0x8(%esp)
0860f70b +0x02d:  mov    %eax,0x4(%esp)
0860f70f +0x031:  lea    -0x18(%ebp),%eax
0860f712 +0x034:  mov    %eax,(%esp)
0860f715 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0860f71a +0x03c:  lea    -0x18(%ebp),%eax
0860f71d +0x03f:  mov    %eax,(%esp)
0860f720 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f725 +0x047:  movl   $0x163,0x4(%esp)
0860f72d +0x04f:  mov    %eax,(%esp)
0860f730 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860f735 +0x057:  lea    -0x18(%ebp),%eax
0860f738 +0x05a:  mov    %eax,(%esp)
0860f73b +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f740 +0x062:  movl   $0xffffffff,0x4(%esp)
0860f748 +0x06a:  mov    %eax,(%esp)
0860f74b +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860f750 +0x072:  mov    0x8(%ebp),%eax
0860f753 +0x075:  mov    0xc(%eax),%ebx
0860f756 +0x078:  lea    -0x18(%ebp),%eax
0860f759 +0x07b:  mov    %eax,(%esp)
0860f75c +0x07e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f761 +0x083:  mov    %ebx,0x4(%esp)
0860f765 +0x087:  mov    %eax,(%esp)
0860f768 +0x08a:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0860f76d +0x08f:  mov    0x8(%ebp),%eax
0860f770 +0x092:  add    $0x10,%eax
0860f773 +0x095:  mov    %eax,(%esp)
0860f776 +0x098:  call   08611b52 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1bd0>  ; global constructors keyed to Statistics::Statistics()+0x1bd0
0860f77b +0x09d:  mov    %eax,%ebx
0860f77d +0x09f:  lea    -0x18(%ebp),%eax
0860f780 +0x0a2:  mov    %eax,(%esp)
0860f783 +0x0a5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f788 +0x0aa:  mov    %ebx,0x4(%esp)
0860f78c +0x0ae:  mov    %eax,(%esp)
0860f78f +0x0b1:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0860f794 +0x0b6:  mov    0x8(%ebp),%eax
0860f797 +0x0b9:  lea    0x10(%eax),%edx
0860f79a +0x0bc:  lea    -0x10(%ebp),%eax
0860f79d +0x0bf:  mov    %edx,0x4(%esp)
0860f7a1 +0x0c3:  mov    %eax,(%esp)
0860f7a4 +0x0c6:  call   08611b66 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1be4>  ; global constructors keyed to Statistics::Statistics()+0x1be4
0860f7a9 +0x0cb:  sub    $0x4,%esp
0860f7ac +0x0ce:  lea    -0x10(%ebp),%eax
0860f7af +0x0d1:  mov    %eax,0x4(%esp)
0860f7b3 +0x0d5:  lea    -0x1c(%ebp),%eax
0860f7b6 +0x0d8:  mov    %eax,(%esp)
0860f7b9 +0x0db:  call   08611b8c <_GLOBAL__I__ZN10StatisticsC2Ev+0x1c0a>  ; global constructors keyed to Statistics::Statistics()+0x1c0a
0860f7be +0x0e0:  mov    0x8(%ebp),%eax
0860f7c1 +0x0e3:  lea    0x10(%eax),%edx
0860f7c4 +0x0e6:  lea    -0xc(%ebp),%eax
0860f7c7 +0x0e9:  mov    %edx,0x4(%esp)
0860f7cb +0x0ed:  mov    %eax,(%esp)
0860f7ce +0x0f0:  call   08611aae <_GLOBAL__I__ZN10StatisticsC2Ev+0x1b2c>  ; global constructors keyed to Statistics::Statistics()+0x1b2c
0860f7d3 +0x0f5:  sub    $0x4,%esp
0860f7d6 +0x0f8:  lea    -0xc(%ebp),%eax
0860f7d9 +0x0fb:  mov    %eax,0x4(%esp)
0860f7dd +0x0ff:  lea    -0x20(%ebp),%eax
0860f7e0 +0x102:  mov    %eax,(%esp)
0860f7e3 +0x105:  call   08611b8c <_GLOBAL__I__ZN10StatisticsC2Ev+0x1c0a>  ; global constructors keyed to Statistics::Statistics()+0x1c0a
0860f7e8 +0x10a:  jmp    0860f83e <+0x160>
0860f7ea +0x10c:  lea    -0x1c(%ebp),%eax
0860f7ed +0x10f:  mov    %eax,(%esp)
0860f7f0 +0x112:  call   08611bce <_GLOBAL__I__ZN10StatisticsC2Ev+0x1c4c>  ; global constructors keyed to Statistics::Statistics()+0x1c4c
0860f7f5 +0x117:  mov    (%eax),%ebx
0860f7f7 +0x119:  lea    -0x18(%ebp),%eax
0860f7fa +0x11c:  mov    %eax,(%esp)
0860f7fd +0x11f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f802 +0x124:  mov    %ebx,0x4(%esp)
0860f806 +0x128:  mov    %eax,(%esp)
0860f809 +0x12b:  call   0822ada6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x450>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x450
0860f80e +0x130:  lea    -0x1c(%ebp),%eax
0860f811 +0x133:  mov    %eax,(%esp)
0860f814 +0x136:  call   08611bce <_GLOBAL__I__ZN10StatisticsC2Ev+0x1c4c>  ; global constructors keyed to Statistics::Statistics()+0x1c4c
0860f819 +0x13b:  mov    0x4(%eax),%ebx
0860f81c +0x13e:  lea    -0x18(%ebp),%eax
0860f81f +0x141:  mov    %eax,(%esp)
0860f822 +0x144:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860f827 +0x149:  mov    %ebx,0x4(%esp)
0860f82b +0x14d:  mov    %eax,(%esp)
0860f82e +0x150:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0860f833 +0x155:  lea    -0x1c(%ebp),%eax
0860f836 +0x158:  mov    %eax,(%esp)
0860f839 +0x15b:  call   08611bb0 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1c2e>  ; global constructors keyed to Statistics::Statistics()+0x1c2e
0860f83e +0x160:  lea    -0x20(%ebp),%eax
0860f841 +0x163:  mov    %eax,0x4(%esp)
0860f845 +0x167:  lea    -0x1c(%ebp),%eax
0860f848 +0x16a:  mov    %eax,(%esp)
0860f84b +0x16d:  call   08611b9c <_GLOBAL__I__ZN10StatisticsC2Ev+0x1c1a>  ; global constructors keyed to Statistics::Statistics()+0x1c1a
0860f850 +0x172:  test   %al,%al
0860f852 +0x174:  jne    0860f7ea <+0x10c>
0860f854 +0x176:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860f859 +0x17b:  lea    -0x18(%ebp),%edx
0860f85c +0x17e:  mov    %edx,0x8(%esp)
0860f860 +0x182:  movl   $0x4,0x4(%esp)
0860f868 +0x18a:  mov    %eax,(%esp)
0860f86b +0x18d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860f870 +0x192:  mov    0x8(%ebp),%eax
0860f873 +0x195:  mov    %eax,(%esp)
0860f876 +0x198:  call   086105ac <_GLOBAL__I__ZN10StatisticsC2Ev+0x62a>  ; global constructors keyed to Statistics::Statistics()+0x62a
0860f87b +0x19d:  jmp    0860f898 <+0x1ba>
0860f87d +0x19f:  mov    %edx,%ebx
0860f87f +0x1a1:  mov    %eax,%esi
0860f881 +0x1a3:  lea    -0x18(%ebp),%eax
0860f884 +0x1a6:  mov    %eax,(%esp)
0860f887 +0x1a9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860f88c +0x1ae:  mov    %esi,%eax
0860f88e +0x1b0:  mov    %ebx,%edx
0860f890 +0x1b2:  mov    %eax,(%esp)
0860f893 +0x1b5:  call   08ae3750 <_Unwind_Resume>
0860f898 +0x1ba:  lea    -0x18(%ebp),%eax
0860f89b +0x1bd:  mov    %eax,(%esp)
0860f89e +0x1c0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860f8a3 +0x1c5:  lea    -0x8(%ebp),%esp
0860f8a6 +0x1c8:  add    $0x0,%esp
0860f8a9 +0x1cb:  pop    %ebx
0860f8aa +0x1cc:  pop    %esi
0860f8ab +0x1cd:  pop    %ebp
0860f8ac +0x1ce:  ret
```

## 反编译 C

```c
// CVendingMachineStatistic::updateDataIntoDB @ 0x860f6de

/* CVendingMachineStatistic::updateDataIntoDB() */

void __thiscall CVendingMachineStatistic::updateDataIntoDB(CVendingMachineStatistic *this)

{
  ulong uVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint uVar5;
  ulong *puVar6;
  int iVar7;
  _Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>> local_24 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>> local_20 [4];
  CStreamGuard local_1c [8];
  map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
  local_14 [4];
  map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
  local_10 [4];
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x624);
  CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0860f730 to 0860f87a has its CatchHandler @ 0860f87d */
  CStreamGuard::operator<<(pCVar4,0x163);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar4,-1);
  uVar5 = *(uint *)(this + 0xc);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar4,uVar5);
  uVar5 = std::
          map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
          ::size((map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
                  *)(this + 0x10));
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar4,uVar5);
  std::
  map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
  ::begin(local_14);
  std::_Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>>::_Rb_tree_const_iterator
            (local_20,(_Rb_tree_iterator *)local_14);
  std::
  map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
  ::end(local_10);
  std::_Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>>::_Rb_tree_const_iterator
            (local_24,(_Rb_tree_iterator *)local_10);
  while( true ) {
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>>::operator!=
                      (local_20,(_Rb_tree_const_iterator *)local_24);
    if (cVar2 == '\0') break;
    puVar6 = (ulong *)std::_Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>>::
                      operator->(local_20);
    uVar1 = *puVar6;
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar4,uVar1);
    iVar7 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>>::operator->
                      (local_20);
    uVar5 = *(uint *)(iVar7 + 4);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar4,uVar5);
    std::_Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>>::operator++(local_20);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
  _init(this);
  CStreamGuard::~CStreamGuard(local_1c);
  return;
}
```
