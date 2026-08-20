# InsertDungeonEntrance_Hour

`_ZN19CDungeonEntranceLog26InsertDungeonEntrance_HourEv`

`CDungeonEntranceLog::InsertDungeonEntrance_Hour()`

| 类 | 地址 |
|---|---|
| `CDungeonEntranceLog` | `0x0860e38e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860e38e  _ZN19CDungeonEntranceLog26InsertDungeonEntrance_HourEv
#           CDungeonEntranceLog::InsertDungeonEntrance_Hour()
# range [0x0860e38e, 0x0860e59b]
0860e38e +0x000:  push   %ebp
0860e38f +0x001:  mov    %esp,%ebp
0860e391 +0x003:  push   %esi
0860e392 +0x004:  push   %ebx
0860e393 +0x005:  sub    $0x40,%esp
0860e396 +0x008:  mov    0x8(%ebp),%eax
0860e399 +0x00b:  mov    %eax,(%esp)
0860e39c +0x00e:  call   086116bc <_GLOBAL__I__ZN10StatisticsC2Ev+0x173a>  ; global constructors keyed to Statistics::Statistics()+0x173a
0860e3a1 +0x013:  mov    %eax,-0xc(%ebp)
0860e3a4 +0x016:  cmpl   $0x0,-0xc(%ebp)
0860e3a8 +0x01a:  jg     0860e3b4 <+0x26>
0860e3aa +0x01c:  mov    $0x1,%ebx
0860e3af +0x021:  jmp    0860e590 <+0x202>
0860e3b4 +0x026:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0860e3b9 +0x02b:  movl   $0x4b5,0x8(%esp)
0860e3c1 +0x033:  movl   $"Statistics.cpp",0x4(%esp)
0860e3c9 +0x03b:  mov    %eax,(%esp)
0860e3cc +0x03e:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0860e3d1 +0x043:  movl   $0x1,0x8(%esp)
0860e3d9 +0x04b:  mov    %eax,0x4(%esp)
0860e3dd +0x04f:  lea    -0x14(%ebp),%eax
0860e3e0 +0x052:  mov    %eax,(%esp)
0860e3e3 +0x055:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0860e3e8 +0x05a:  lea    -0x14(%ebp),%eax
0860e3eb +0x05d:  mov    %eax,(%esp)
0860e3ee +0x060:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e3f3 +0x065:  movl   $0xe1,0x4(%esp)
0860e3fb +0x06d:  mov    %eax,(%esp)
0860e3fe +0x070:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e403 +0x075:  lea    -0x14(%ebp),%eax
0860e406 +0x078:  mov    %eax,(%esp)
0860e409 +0x07b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e40e +0x080:  movl   $0xffffffff,0x4(%esp)
0860e416 +0x088:  mov    %eax,(%esp)
0860e419 +0x08b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e41e +0x090:  lea    -0x14(%ebp),%eax
0860e421 +0x093:  mov    %eax,(%esp)
0860e424 +0x096:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e429 +0x09b:  mov    -0xc(%ebp),%edx
0860e42c +0x09e:  mov    %edx,0x4(%esp)
0860e430 +0x0a2:  mov    %eax,(%esp)
0860e433 +0x0a5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e438 +0x0aa:  mov    0x8(%ebp),%edx
0860e43b +0x0ad:  lea    -0x18(%ebp),%eax
0860e43e +0x0b0:  mov    %edx,0x4(%esp)
0860e442 +0x0b4:  mov    %eax,(%esp)
0860e445 +0x0b7:  call   086116d0 <_GLOBAL__I__ZN10StatisticsC2Ev+0x174e>  ; global constructors keyed to Statistics::Statistics()+0x174e
0860e44a +0x0bc:  sub    $0x4,%esp
0860e44d +0x0bf:  mov    0x8(%ebp),%edx
0860e450 +0x0c2:  lea    -0x1c(%ebp),%eax
0860e453 +0x0c5:  mov    %edx,0x4(%esp)
0860e457 +0x0c9:  mov    %eax,(%esp)
0860e45a +0x0cc:  call   086115c8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1646>  ; global constructors keyed to Statistics::Statistics()+0x1646
0860e45f +0x0d1:  sub    $0x4,%esp
0860e462 +0x0d4:  jmp    0860e4dd <+0x14f>
0860e464 +0x0d6:  lea    -0x18(%ebp),%eax
0860e467 +0x0d9:  mov    %eax,(%esp)
0860e46a +0x0dc:  call   08611602 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1680>  ; global constructors keyed to Statistics::Statistics()+0x1680
0860e46f +0x0e1:  mov    (%eax),%ebx
0860e471 +0x0e3:  lea    -0x14(%ebp),%eax
0860e474 +0x0e6:  mov    %eax,(%esp)
0860e477 +0x0e9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e47c +0x0ee:  mov    %ebx,0x4(%esp)
0860e480 +0x0f2:  mov    %eax,(%esp)
0860e483 +0x0f5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e488 +0x0fa:  lea    -0x18(%ebp),%eax
0860e48b +0x0fd:  mov    %eax,(%esp)
0860e48e +0x100:  call   08611602 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1680>  ; global constructors keyed to Statistics::Statistics()+0x1680
0860e493 +0x105:  mov    0xc(%eax),%ebx
0860e496 +0x108:  lea    -0x14(%ebp),%eax
0860e499 +0x10b:  mov    %eax,(%esp)
0860e49c +0x10e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e4a1 +0x113:  mov    %ebx,0x4(%esp)
0860e4a5 +0x117:  mov    %eax,(%esp)
0860e4a8 +0x11a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e4ad +0x11f:  lea    -0x18(%ebp),%eax
0860e4b0 +0x122:  mov    %eax,(%esp)
0860e4b3 +0x125:  call   08611602 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1680>  ; global constructors keyed to Statistics::Statistics()+0x1680
0860e4b8 +0x12a:  mov    0x10(%eax),%ebx
0860e4bb +0x12d:  lea    -0x14(%ebp),%eax
0860e4be +0x130:  mov    %eax,(%esp)
0860e4c1 +0x133:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e4c6 +0x138:  mov    %ebx,0x4(%esp)
0860e4ca +0x13c:  mov    %eax,(%esp)
0860e4cd +0x13f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e4d2 +0x144:  lea    -0x18(%ebp),%eax
0860e4d5 +0x147:  mov    %eax,(%esp)
0860e4d8 +0x14a:  call   086116f6 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1774>  ; global constructors keyed to Statistics::Statistics()+0x1774
0860e4dd +0x14f:  lea    -0x1c(%ebp),%eax
0860e4e0 +0x152:  mov    %eax,0x4(%esp)
0860e4e4 +0x156:  lea    -0x18(%ebp),%eax
0860e4e7 +0x159:  mov    %eax,(%esp)
0860e4ea +0x15c:  call   086115ee <_GLOBAL__I__ZN10StatisticsC2Ev+0x166c>  ; global constructors keyed to Statistics::Statistics()+0x166c
0860e4ef +0x161:  test   %al,%al
0860e4f1 +0x163:  jne    0860e464 <+0xd6>
0860e4f7 +0x169:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860e4fc +0x16e:  lea    -0x14(%ebp),%edx
0860e4ff +0x171:  mov    %edx,0x8(%esp)
0860e503 +0x175:  movl   $0x4,0x4(%esp)
0860e50b +0x17d:  mov    %eax,(%esp)
0860e50e +0x180:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860e513 +0x185:  mov    0x8(%ebp),%edx
0860e516 +0x188:  lea    -0x2c(%ebp),%eax
0860e519 +0x18b:  mov    %edx,0x4(%esp)
0860e51d +0x18f:  mov    %eax,(%esp)
0860e520 +0x192:  call   086116d0 <_GLOBAL__I__ZN10StatisticsC2Ev+0x174e>  ; global constructors keyed to Statistics::Statistics()+0x174e
0860e525 +0x197:  sub    $0x4,%esp
0860e528 +0x19a:  mov    -0x2c(%ebp),%eax
0860e52b +0x19d:  mov    %eax,-0x18(%ebp)
0860e52e +0x1a0:  jmp    0860e54d <+0x1bf>
0860e530 +0x1a2:  lea    -0x18(%ebp),%eax
0860e533 +0x1a5:  mov    %eax,(%esp)
0860e536 +0x1a8:  call   08611602 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1680>  ; global constructors keyed to Statistics::Statistics()+0x1680
0860e53b +0x1ad:  movl   $0x0,0xc(%eax)
0860e542 +0x1b4:  lea    -0x18(%ebp),%eax
0860e545 +0x1b7:  mov    %eax,(%esp)
0860e548 +0x1ba:  call   086116f6 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1774>  ; global constructors keyed to Statistics::Statistics()+0x1774
0860e54d +0x1bf:  lea    -0x1c(%ebp),%eax
0860e550 +0x1c2:  mov    %eax,0x4(%esp)
0860e554 +0x1c6:  lea    -0x18(%ebp),%eax
0860e557 +0x1c9:  mov    %eax,(%esp)
0860e55a +0x1cc:  call   086115ee <_GLOBAL__I__ZN10StatisticsC2Ev+0x166c>  ; global constructors keyed to Statistics::Statistics()+0x166c
0860e55f +0x1d1:  test   %al,%al
0860e561 +0x1d3:  jne    0860e530 <+0x1a2>
0860e563 +0x1d5:  mov    $0x1,%ebx
0860e568 +0x1da:  lea    -0x14(%ebp),%eax
0860e56b +0x1dd:  mov    %eax,(%esp)
0860e56e +0x1e0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860e573 +0x1e5:  jmp    0860e590 <+0x202>
0860e575 +0x1e7:  mov    %edx,%ebx
0860e577 +0x1e9:  mov    %eax,%esi
0860e579 +0x1eb:  lea    -0x14(%ebp),%eax
0860e57c +0x1ee:  mov    %eax,(%esp)
0860e57f +0x1f1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860e584 +0x1f6:  mov    %esi,%eax
0860e586 +0x1f8:  mov    %ebx,%edx
0860e588 +0x1fa:  mov    %eax,(%esp)
0860e58b +0x1fd:  call   08ae3750 <_Unwind_Resume>
0860e590 +0x202:  mov    %ebx,%eax
0860e592 +0x204:  lea    -0x8(%ebp),%esp
0860e595 +0x207:  add    $0x0,%esp
0860e598 +0x20a:  pop    %ebx
0860e599 +0x20b:  pop    %esi
0860e59a +0x20c:  pop    %ebp
0860e59b +0x20d:  ret
```

## 反编译 C

```c
// CDungeonEntranceLog::InsertDungeonEntrance_Hour @ 0x860e38e

/* CDungeonEntranceLog::InsertDungeonEntrance_Hour() */

undefined4 __thiscall CDungeonEntranceLog::InsertDungeonEntrance_Hour(CDungeonEntranceLog *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_30 [4];
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
  local_20 [4];
  undefined4 local_1c;
  CStreamGuard local_18 [8];
  int local_10;
  
  local_10 = std::
             map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
             ::size((map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
                     *)this);
  if (0 < local_10) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x4b5);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0860e3fe to 0860e54c has its CatchHandler @ 0860e575 */
    CStreamGuard::operator<<(pCVar3,0xe1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,local_10);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::begin((map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
             *)&local_1c);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::end(local_20);
    while (cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator!=
                             ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c
                              ,(_Rb_tree_iterator *)local_20), cVar1 != '\0') {
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)
                                 &local_1c);
      iVar5 = *piVar4;
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,iVar5);
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c);
      iVar5 = *(int *)(iVar5 + 0xc);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,iVar5);
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c);
      iVar5 = *(int *)(iVar5 + 0x10);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,iVar5);
      std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::begin((map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
             *)local_30);
    local_1c = local_30[0];
    while (cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator!=
                             ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c
                              ,(_Rb_tree_iterator *)local_20), cVar1 != '\0') {
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c);
      *(undefined4 *)(iVar5 + 0xc) = 0;
      std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> *)&local_1c);
    }
    CStreamGuard::~CStreamGuard(local_18);
  }
  return 1;
}
```
