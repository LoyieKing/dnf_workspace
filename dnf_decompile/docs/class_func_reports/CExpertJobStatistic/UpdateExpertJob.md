# UpdateExpertJob

`_ZN19CExpertJobStatistic15UpdateExpertJobEv`

`CExpertJobStatistic::UpdateExpertJob()`

| 类 | 地址 |
|---|---|
| `CExpertJobStatistic` | `0x0860faca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860faca  _ZN19CExpertJobStatistic15UpdateExpertJobEv
#           CExpertJobStatistic::UpdateExpertJob()
# range [0x0860faca, 0x0860fcb5]
0860faca +0x000:  push   %ebp
0860facb +0x001:  mov    %esp,%ebp
0860facd +0x003:  push   %esi
0860face +0x004:  push   %ebx
0860facf +0x005:  sub    $0x30,%esp
0860fad2 +0x008:  mov    0x8(%ebp),%eax
0860fad5 +0x00b:  mov    %eax,(%esp)
0860fad8 +0x00e:  call   08611cf6 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1d74>  ; global constructors keyed to Statistics::Statistics()+0x1d74
0860fadd +0x013:  test   %al,%al
0860fadf +0x015:  jne    0860fcab <+0x1e1>
0860fae5 +0x01b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0860faea +0x020:  movl   $0x65a,0x8(%esp)
0860faf2 +0x028:  movl   $"Statistics.cpp",0x4(%esp)
0860fafa +0x030:  mov    %eax,(%esp)
0860fafd +0x033:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0860fb02 +0x038:  movl   $0x1,0x8(%esp)
0860fb0a +0x040:  mov    %eax,0x4(%esp)
0860fb0e +0x044:  lea    -0x18(%ebp),%eax
0860fb11 +0x047:  mov    %eax,(%esp)
0860fb14 +0x04a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0860fb19 +0x04f:  lea    -0x18(%ebp),%eax
0860fb1c +0x052:  mov    %eax,(%esp)
0860fb1f +0x055:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860fb24 +0x05a:  movl   $0x182,0x4(%esp)
0860fb2c +0x062:  mov    %eax,(%esp)
0860fb2f +0x065:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860fb34 +0x06a:  lea    -0x18(%ebp),%eax
0860fb37 +0x06d:  mov    %eax,(%esp)
0860fb3a +0x070:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860fb3f +0x075:  movl   $0xffffffff,0x4(%esp)
0860fb47 +0x07d:  mov    %eax,(%esp)
0860fb4a +0x080:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860fb4f +0x085:  mov    0x8(%ebp),%eax
0860fb52 +0x088:  mov    %eax,(%esp)
0860fb55 +0x08b:  call   08611d0a <_GLOBAL__I__ZN10StatisticsC2Ev+0x1d88>  ; global constructors keyed to Statistics::Statistics()+0x1d88
0860fb5a +0x090:  mov    %eax,%ebx
0860fb5c +0x092:  lea    -0x18(%ebp),%eax
0860fb5f +0x095:  mov    %eax,(%esp)
0860fb62 +0x098:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860fb67 +0x09d:  mov    %ebx,0x4(%esp)
0860fb6b +0x0a1:  mov    %eax,(%esp)
0860fb6e +0x0a4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860fb73 +0x0a9:  mov    0x8(%ebp),%edx
0860fb76 +0x0ac:  lea    -0x10(%ebp),%eax
0860fb79 +0x0af:  mov    %edx,0x4(%esp)
0860fb7d +0x0b3:  mov    %eax,(%esp)
0860fb80 +0x0b6:  call   08611d1e <_GLOBAL__I__ZN10StatisticsC2Ev+0x1d9c>  ; global constructors keyed to Statistics::Statistics()+0x1d9c
0860fb85 +0x0bb:  sub    $0x4,%esp
0860fb88 +0x0be:  lea    -0x10(%ebp),%eax
0860fb8b +0x0c1:  mov    %eax,0x4(%esp)
0860fb8f +0x0c5:  lea    -0x1c(%ebp),%eax
0860fb92 +0x0c8:  mov    %eax,(%esp)
0860fb95 +0x0cb:  call   08611d44 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1dc2>  ; global constructors keyed to Statistics::Statistics()+0x1dc2
0860fb9a +0x0d0:  mov    0x8(%ebp),%edx
0860fb9d +0x0d3:  lea    -0xc(%ebp),%eax
0860fba0 +0x0d6:  mov    %edx,0x4(%esp)
0860fba4 +0x0da:  mov    %eax,(%esp)
0860fba7 +0x0dd:  call   08611c08 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1c86>  ; global constructors keyed to Statistics::Statistics()+0x1c86
0860fbac +0x0e2:  sub    $0x4,%esp
0860fbaf +0x0e5:  lea    -0xc(%ebp),%eax
0860fbb2 +0x0e8:  mov    %eax,0x4(%esp)
0860fbb6 +0x0ec:  lea    -0x20(%ebp),%eax
0860fbb9 +0x0ef:  mov    %eax,(%esp)
0860fbbc +0x0f2:  call   08611d44 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1dc2>  ; global constructors keyed to Statistics::Statistics()+0x1dc2
0860fbc1 +0x0f7:  jmp    0860fc40 <+0x176>
0860fbc3 +0x0f9:  lea    -0x1c(%ebp),%eax
0860fbc6 +0x0fc:  mov    %eax,(%esp)
0860fbc9 +0x0ff:  call   08611d86 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1e04>  ; global constructors keyed to Statistics::Statistics()+0x1e04
0860fbce +0x104:  mov    (%eax),%eax
0860fbd0 +0x106:  mov    %eax,%ebx
0860fbd2 +0x108:  lea    -0x18(%ebp),%eax
0860fbd5 +0x10b:  mov    %eax,(%esp)
0860fbd8 +0x10e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860fbdd +0x113:  mov    %ebx,0x4(%esp)
0860fbe1 +0x117:  mov    %eax,(%esp)
0860fbe4 +0x11a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860fbe9 +0x11f:  lea    -0x1c(%ebp),%eax
0860fbec +0x122:  mov    %eax,(%esp)
0860fbef +0x125:  call   08611d86 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1e04>  ; global constructors keyed to Statistics::Statistics()+0x1e04
0860fbf4 +0x12a:  mov    0x4(%eax),%eax
0860fbf7 +0x12d:  mov    %eax,%ebx
0860fbf9 +0x12f:  lea    -0x18(%ebp),%eax
0860fbfc +0x132:  mov    %eax,(%esp)
0860fbff +0x135:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860fc04 +0x13a:  mov    %ebx,0x4(%esp)
0860fc08 +0x13e:  mov    %eax,(%esp)
0860fc0b +0x141:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860fc10 +0x146:  lea    -0x1c(%ebp),%eax
0860fc13 +0x149:  mov    %eax,(%esp)
0860fc16 +0x14c:  call   08611d86 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1e04>  ; global constructors keyed to Statistics::Statistics()+0x1e04
0860fc1b +0x151:  mov    0x8(%eax),%ebx
0860fc1e +0x154:  lea    -0x18(%ebp),%eax
0860fc21 +0x157:  mov    %eax,(%esp)
0860fc24 +0x15a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860fc29 +0x15f:  mov    %ebx,0x4(%esp)
0860fc2d +0x163:  mov    %eax,(%esp)
0860fc30 +0x166:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860fc35 +0x16b:  lea    -0x1c(%ebp),%eax
0860fc38 +0x16e:  mov    %eax,(%esp)
0860fc3b +0x171:  call   08611d68 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1de6>  ; global constructors keyed to Statistics::Statistics()+0x1de6
0860fc40 +0x176:  lea    -0x20(%ebp),%eax
0860fc43 +0x179:  mov    %eax,0x4(%esp)
0860fc47 +0x17d:  lea    -0x1c(%ebp),%eax
0860fc4a +0x180:  mov    %eax,(%esp)
0860fc4d +0x183:  call   08611d54 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1dd2>  ; global constructors keyed to Statistics::Statistics()+0x1dd2
0860fc52 +0x188:  test   %al,%al
0860fc54 +0x18a:  jne    0860fbc3 <+0xf9>
0860fc5a +0x190:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860fc5f +0x195:  lea    -0x18(%ebp),%edx
0860fc62 +0x198:  mov    %edx,0x8(%esp)
0860fc66 +0x19c:  movl   $0x4,0x4(%esp)
0860fc6e +0x1a4:  mov    %eax,(%esp)
0860fc71 +0x1a7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860fc76 +0x1ac:  mov    0x8(%ebp),%eax
0860fc79 +0x1af:  mov    %eax,(%esp)
0860fc7c +0x1b2:  call   08610c24 <_GLOBAL__I__ZN10StatisticsC2Ev+0xca2>  ; global constructors keyed to Statistics::Statistics()+0xca2
0860fc81 +0x1b7:  jmp    0860fc9e <+0x1d4>
0860fc83 +0x1b9:  mov    %edx,%ebx
0860fc85 +0x1bb:  mov    %eax,%esi
0860fc87 +0x1bd:  lea    -0x18(%ebp),%eax
0860fc8a +0x1c0:  mov    %eax,(%esp)
0860fc8d +0x1c3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860fc92 +0x1c8:  mov    %esi,%eax
0860fc94 +0x1ca:  mov    %ebx,%edx
0860fc96 +0x1cc:  mov    %eax,(%esp)
0860fc99 +0x1cf:  call   08ae3750 <_Unwind_Resume>
0860fc9e +0x1d4:  lea    -0x18(%ebp),%eax
0860fca1 +0x1d7:  mov    %eax,(%esp)
0860fca4 +0x1da:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860fca9 +0x1df:  jmp    0860fcac <+0x1e2>
0860fcab +0x1e1:  nop
0860fcac +0x1e2:  lea    -0x8(%ebp),%esp
0860fcaf +0x1e5:  add    $0x0,%esp
0860fcb2 +0x1e8:  pop    %ebx
0860fcb3 +0x1e9:  pop    %esi
0860fcb4 +0x1ea:  pop    %ebp
0860fcb5 +0x1eb:  ret
```

## 反编译 C

```c
// CExpertJobStatistic::UpdateExpertJob @ 0x860faca

/* CExpertJobStatistic::UpdateExpertJob() */

void __thiscall CExpertJobStatistic::UpdateExpertJob(CExpertJobStatistic *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  int *piVar5;
  _Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>> local_24 [4];
  _Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>> local_20 [4];
  CStreamGuard local_1c [8];
  map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
  local_14 [4];
  map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
  local_10 [4];
  
  cVar1 = std::
          map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
          ::empty((map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
                   *)this);
  if (cVar1 == '\0') {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x65a);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0860fb2f to 0860fc80 has its CatchHandler @ 0860fc83 */
    CStreamGuard::operator<<(pCVar3,0x182);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,-1);
    iVar4 = std::
            map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
            ::size((map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
                    *)this);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,iVar4);
    std::
    map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
    ::begin(local_14);
    std::_Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
    _Rb_tree_const_iterator(local_20,(_Rb_tree_iterator *)local_14);
    std::
    map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
    ::end(local_10);
    std::_Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
    _Rb_tree_const_iterator(local_24,(_Rb_tree_iterator *)local_10);
    while( true ) {
      cVar1 = std::_Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
              operator!=(local_20,(_Rb_tree_const_iterator *)local_24);
      if (cVar1 == '\0') break;
      piVar5 = (int *)std::
                      _Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>
                      ::operator->(local_20);
      iVar4 = *piVar5;
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar3,iVar4);
      iVar4 = std::_Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
              operator->(local_20);
      iVar4 = *(int *)(iVar4 + 4);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar3,iVar4);
      iVar4 = std::_Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
              operator->(local_20);
      iVar4 = *(int *)(iVar4 + 8);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar3,iVar4);
      std::_Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
      operator++(local_20);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
    std::
    map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
    ::clear((map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
             *)this);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return;
}
```
