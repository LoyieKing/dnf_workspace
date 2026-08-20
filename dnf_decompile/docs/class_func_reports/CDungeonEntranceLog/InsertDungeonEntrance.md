# InsertDungeonEntrance

`_ZN19CDungeonEntranceLog21InsertDungeonEntranceEv`

`CDungeonEntranceLog::InsertDungeonEntrance()`

| 类 | 地址 |
|---|---|
| `CDungeonEntranceLog` | `0x0860e59c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860e59c  _ZN19CDungeonEntranceLog21InsertDungeonEntranceEv
#           CDungeonEntranceLog::InsertDungeonEntrance()
# range [0x0860e59c, 0x0860e764]
0860e59c +0x000:  push   %ebp
0860e59d +0x001:  mov    %esp,%ebp
0860e59f +0x003:  push   %esi
0860e5a0 +0x004:  push   %ebx
0860e5a1 +0x005:  sub    $0x30,%esp
0860e5a4 +0x008:  mov    0x8(%ebp),%eax
0860e5a7 +0x00b:  mov    %eax,(%esp)
0860e5aa +0x00e:  call   086116bc <_GLOBAL__I__ZN10StatisticsC2Ev+0x173a>  ; global constructors keyed to Statistics::Statistics()+0x173a
0860e5af +0x013:  mov    %eax,-0xc(%ebp)
0860e5b2 +0x016:  cmpl   $0x0,-0xc(%ebp)
0860e5b6 +0x01a:  jg     0860e5c2 <+0x26>
0860e5b8 +0x01c:  mov    $0x1,%ebx
0860e5bd +0x021:  jmp    0860e759 <+0x1bd>
0860e5c2 +0x026:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0860e5c7 +0x02b:  movl   $0x4da,0x8(%esp)
0860e5cf +0x033:  movl   $"Statistics.cpp",0x4(%esp)
0860e5d7 +0x03b:  mov    %eax,(%esp)
0860e5da +0x03e:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0860e5df +0x043:  movl   $0x1,0x8(%esp)
0860e5e7 +0x04b:  mov    %eax,0x4(%esp)
0860e5eb +0x04f:  lea    -0x14(%ebp),%eax
0860e5ee +0x052:  mov    %eax,(%esp)
0860e5f1 +0x055:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0860e5f6 +0x05a:  lea    -0x14(%ebp),%eax
0860e5f9 +0x05d:  mov    %eax,(%esp)
0860e5fc +0x060:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e601 +0x065:  movl   $0xe0,0x4(%esp)
0860e609 +0x06d:  mov    %eax,(%esp)
0860e60c +0x070:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e611 +0x075:  lea    -0x14(%ebp),%eax
0860e614 +0x078:  mov    %eax,(%esp)
0860e617 +0x07b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e61c +0x080:  movl   $0xffffffff,0x4(%esp)
0860e624 +0x088:  mov    %eax,(%esp)
0860e627 +0x08b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e62c +0x090:  lea    -0x14(%ebp),%eax
0860e62f +0x093:  mov    %eax,(%esp)
0860e632 +0x096:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e637 +0x09b:  mov    -0xc(%ebp),%edx
0860e63a +0x09e:  mov    %edx,0x4(%esp)
0860e63e +0x0a2:  mov    %eax,(%esp)
0860e641 +0x0a5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e646 +0x0aa:  mov    0x8(%ebp),%edx
0860e649 +0x0ad:  lea    -0x18(%ebp),%eax
0860e64c +0x0b0:  mov    %edx,0x4(%esp)
0860e650 +0x0b4:  mov    %eax,(%esp)
0860e653 +0x0b7:  call   086116d0 <_GLOBAL__I__ZN10StatisticsC2Ev+0x174e>  ; global constructors keyed to Statistics::Statistics()+0x174e
0860e658 +0x0bc:  sub    $0x4,%esp
0860e65b +0x0bf:  mov    0x8(%ebp),%edx
0860e65e +0x0c2:  lea    -0x1c(%ebp),%eax
0860e661 +0x0c5:  mov    %edx,0x4(%esp)
0860e665 +0x0c9:  mov    %eax,(%esp)
0860e668 +0x0cc:  call   086115c8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1646>  ; global constructors keyed to Statistics::Statistics()+0x1646
0860e66d +0x0d1:  sub    $0x4,%esp
0860e670 +0x0d4:  jmp    0860e6eb <+0x14f>
0860e672 +0x0d6:  lea    -0x18(%ebp),%eax
0860e675 +0x0d9:  mov    %eax,(%esp)
0860e678 +0x0dc:  call   08611602 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1680>  ; global constructors keyed to Statistics::Statistics()+0x1680
0860e67d +0x0e1:  mov    (%eax),%ebx
0860e67f +0x0e3:  lea    -0x14(%ebp),%eax
0860e682 +0x0e6:  mov    %eax,(%esp)
0860e685 +0x0e9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e68a +0x0ee:  mov    %ebx,0x4(%esp)
0860e68e +0x0f2:  mov    %eax,(%esp)
0860e691 +0x0f5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e696 +0x0fa:  lea    -0x18(%ebp),%eax
0860e699 +0x0fd:  mov    %eax,(%esp)
0860e69c +0x100:  call   08611602 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1680>  ; global constructors keyed to Statistics::Statistics()+0x1680
0860e6a1 +0x105:  mov    0x4(%eax),%ebx
0860e6a4 +0x108:  lea    -0x14(%ebp),%eax
0860e6a7 +0x10b:  mov    %eax,(%esp)
0860e6aa +0x10e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e6af +0x113:  mov    %ebx,0x4(%esp)
0860e6b3 +0x117:  mov    %eax,(%esp)
0860e6b6 +0x11a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e6bb +0x11f:  lea    -0x18(%ebp),%eax
0860e6be +0x122:  mov    %eax,(%esp)
0860e6c1 +0x125:  call   08611602 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1680>  ; global constructors keyed to Statistics::Statistics()+0x1680
0860e6c6 +0x12a:  mov    0x8(%eax),%ebx
0860e6c9 +0x12d:  lea    -0x14(%ebp),%eax
0860e6cc +0x130:  mov    %eax,(%esp)
0860e6cf +0x133:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e6d4 +0x138:  mov    %ebx,0x4(%esp)
0860e6d8 +0x13c:  mov    %eax,(%esp)
0860e6db +0x13f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e6e0 +0x144:  lea    -0x18(%ebp),%eax
0860e6e3 +0x147:  mov    %eax,(%esp)
0860e6e6 +0x14a:  call   086116f6 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1774>  ; global constructors keyed to Statistics::Statistics()+0x1774
0860e6eb +0x14f:  lea    -0x1c(%ebp),%eax
0860e6ee +0x152:  mov    %eax,0x4(%esp)
0860e6f2 +0x156:  lea    -0x18(%ebp),%eax
0860e6f5 +0x159:  mov    %eax,(%esp)
0860e6f8 +0x15c:  call   086115ee <_GLOBAL__I__ZN10StatisticsC2Ev+0x166c>  ; global constructors keyed to Statistics::Statistics()+0x166c
0860e6fd +0x161:  test   %al,%al
0860e6ff +0x163:  jne    0860e672 <+0xd6>
0860e705 +0x169:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860e70a +0x16e:  lea    -0x14(%ebp),%edx
0860e70d +0x171:  mov    %edx,0x8(%esp)
0860e711 +0x175:  movl   $0x4,0x4(%esp)
0860e719 +0x17d:  mov    %eax,(%esp)
0860e71c +0x180:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860e721 +0x185:  mov    0x8(%ebp),%eax
0860e724 +0x188:  mov    %eax,(%esp)
0860e727 +0x18b:  call   08611714 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1792>  ; global constructors keyed to Statistics::Statistics()+0x1792
0860e72c +0x190:  mov    $0x1,%ebx
0860e731 +0x195:  lea    -0x14(%ebp),%eax
0860e734 +0x198:  mov    %eax,(%esp)
0860e737 +0x19b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860e73c +0x1a0:  jmp    0860e759 <+0x1bd>
0860e73e +0x1a2:  mov    %edx,%ebx
0860e740 +0x1a4:  mov    %eax,%esi
0860e742 +0x1a6:  lea    -0x14(%ebp),%eax
0860e745 +0x1a9:  mov    %eax,(%esp)
0860e748 +0x1ac:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860e74d +0x1b1:  mov    %esi,%eax
0860e74f +0x1b3:  mov    %ebx,%edx
0860e751 +0x1b5:  mov    %eax,(%esp)
0860e754 +0x1b8:  call   08ae3750 <_Unwind_Resume>
0860e759 +0x1bd:  mov    %ebx,%eax
0860e75b +0x1bf:  lea    -0x8(%ebp),%esp
0860e75e +0x1c2:  add    $0x0,%esp
0860e761 +0x1c5:  pop    %ebx
0860e762 +0x1c6:  pop    %esi
0860e763 +0x1c7:  pop    %ebp
0860e764 +0x1c8:  ret
```

## 反编译 C

```c
// CDungeonEntranceLog::InsertDungeonEntrance @ 0x860e59c

/* CDungeonEntranceLog::InsertDungeonEntrance() */

undefined4 __thiscall CDungeonEntranceLog::InsertDungeonEntrance(CDungeonEntranceLog *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int *piVar4;
  int iVar5;
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
  local_20 [4];
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
  local_1c [4];
  CStreamGuard local_18 [8];
  int local_10;
  
  local_10 = std::
             map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
             ::size((map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
                     *)this);
  if (0 < local_10) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x4da);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0860e60c to 0860e72b has its CatchHandler @ 0860e73e */
    CStreamGuard::operator<<(pCVar3,0xe0);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,local_10);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::begin(local_1c);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::end(local_20);
    while (cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator!=
                             ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)local_1c,
                              (_Rb_tree_iterator *)local_20), cVar1 != '\0') {
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)
                                 local_1c);
      iVar5 = *piVar4;
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,iVar5);
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)local_1c);
      iVar5 = *(int *)(iVar5 + 4);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,iVar5);
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)local_1c);
      iVar5 = *(int *)(iVar5 + 8);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,iVar5);
      std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)local_1c);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::clear((map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
             *)this);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return 1;
}
```
