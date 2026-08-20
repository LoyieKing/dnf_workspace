# InsertDatabase

`_ZN26CLevelDungeonPlayStatistic14InsertDatabaseEv`

`CLevelDungeonPlayStatistic::InsertDatabase()`

| 类 | 地址 |
|---|---|
| `CLevelDungeonPlayStatistic` | `0x0860edf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860edf4  _ZN26CLevelDungeonPlayStatistic14InsertDatabaseEv
#           CLevelDungeonPlayStatistic::InsertDatabase()
# range [0x0860edf4, 0x0860efc9]
0860edf4 +0x000:  push   %ebp
0860edf5 +0x001:  mov    %esp,%ebp
0860edf7 +0x003:  push   %esi
0860edf8 +0x004:  push   %ebx
0860edf9 +0x005:  sub    $0x20,%esp
0860edfc +0x008:  mov    0x8(%ebp),%eax
0860edff +0x00b:  mov    %eax,(%esp)
0860ee02 +0x00e:  call   0861183c <_GLOBAL__I__ZN10StatisticsC2Ev+0x18ba>  ; global constructors keyed to Statistics::Statistics()+0x18ba
0860ee07 +0x013:  test   %eax,%eax
0860ee09 +0x015:  sete   %al
0860ee0c +0x018:  test   %al,%al
0860ee0e +0x01a:  jne    0860efbf <+0x1cb>
0860ee14 +0x020:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0860ee19 +0x025:  movl   $0x569,0x8(%esp)
0860ee21 +0x02d:  movl   $"Statistics.cpp",0x4(%esp)
0860ee29 +0x035:  mov    %eax,(%esp)
0860ee2c +0x038:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0860ee31 +0x03d:  movl   $0x1,0x8(%esp)
0860ee39 +0x045:  mov    %eax,0x4(%esp)
0860ee3d +0x049:  lea    -0x10(%ebp),%eax
0860ee40 +0x04c:  mov    %eax,(%esp)
0860ee43 +0x04f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0860ee48 +0x054:  lea    -0x10(%ebp),%eax
0860ee4b +0x057:  mov    %eax,(%esp)
0860ee4e +0x05a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ee53 +0x05f:  movl   $0x107,0x4(%esp)
0860ee5b +0x067:  mov    %eax,(%esp)
0860ee5e +0x06a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ee63 +0x06f:  lea    -0x10(%ebp),%eax
0860ee66 +0x072:  mov    %eax,(%esp)
0860ee69 +0x075:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ee6e +0x07a:  movl   $0xffffffff,0x4(%esp)
0860ee76 +0x082:  mov    %eax,(%esp)
0860ee79 +0x085:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ee7e +0x08a:  mov    0x8(%ebp),%eax
0860ee81 +0x08d:  mov    %eax,(%esp)
0860ee84 +0x090:  call   0861183c <_GLOBAL__I__ZN10StatisticsC2Ev+0x18ba>  ; global constructors keyed to Statistics::Statistics()+0x18ba
0860ee89 +0x095:  mov    %eax,%ebx
0860ee8b +0x097:  lea    -0x10(%ebp),%eax
0860ee8e +0x09a:  mov    %eax,(%esp)
0860ee91 +0x09d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ee96 +0x0a2:  mov    %ebx,0x4(%esp)
0860ee9a +0x0a6:  mov    %eax,(%esp)
0860ee9d +0x0a9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860eea2 +0x0ae:  mov    0x8(%ebp),%edx
0860eea5 +0x0b1:  lea    -0x14(%ebp),%eax
0860eea8 +0x0b4:  mov    %edx,0x4(%esp)
0860eeac +0x0b8:  mov    %eax,(%esp)
0860eeaf +0x0bb:  call   08611850 <_GLOBAL__I__ZN10StatisticsC2Ev+0x18ce>  ; global constructors keyed to Statistics::Statistics()+0x18ce
0860eeb4 +0x0c0:  sub    $0x4,%esp
0860eeb7 +0x0c3:  mov    0x8(%ebp),%edx
0860eeba +0x0c6:  lea    -0x18(%ebp),%eax
0860eebd +0x0c9:  mov    %edx,0x4(%esp)
0860eec1 +0x0cd:  mov    %eax,(%esp)
0860eec4 +0x0d0:  call   08611754 <_GLOBAL__I__ZN10StatisticsC2Ev+0x17d2>  ; global constructors keyed to Statistics::Statistics()+0x17d2
0860eec9 +0x0d5:  sub    $0x4,%esp
0860eecc +0x0d8:  jmp    0860ef54 <+0x160>
0860eed1 +0x0dd:  lea    -0x14(%ebp),%eax
0860eed4 +0x0e0:  mov    %eax,(%esp)
0860eed7 +0x0e3:  call   0861182e <_GLOBAL__I__ZN10StatisticsC2Ev+0x18ac>  ; global constructors keyed to Statistics::Statistics()+0x18ac
0860eedc +0x0e8:  mov    (%eax),%ebx
0860eede +0x0ea:  lea    -0x10(%ebp),%eax
0860eee1 +0x0ed:  mov    %eax,(%esp)
0860eee4 +0x0f0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860eee9 +0x0f5:  mov    %ebx,0x4(%esp)
0860eeed +0x0f9:  mov    %eax,(%esp)
0860eef0 +0x0fc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860eef5 +0x101:  lea    -0x14(%ebp),%eax
0860eef8 +0x104:  mov    %eax,(%esp)
0860eefb +0x107:  call   0861182e <_GLOBAL__I__ZN10StatisticsC2Ev+0x18ac>  ; global constructors keyed to Statistics::Statistics()+0x18ac
0860ef00 +0x10c:  mov    0x8(%eax),%edx
0860ef03 +0x10f:  mov    0x4(%eax),%eax
0860ef06 +0x112:  mov    %eax,%ebx
0860ef08 +0x114:  lea    -0x10(%ebp),%eax
0860ef0b +0x117:  mov    %eax,(%esp)
0860ef0e +0x11a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ef13 +0x11f:  mov    %ebx,0x4(%esp)
0860ef17 +0x123:  mov    %eax,(%esp)
0860ef1a +0x126:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ef1f +0x12b:  lea    -0x14(%ebp),%eax
0860ef22 +0x12e:  mov    %eax,(%esp)
0860ef25 +0x131:  call   0861182e <_GLOBAL__I__ZN10StatisticsC2Ev+0x18ac>  ; global constructors keyed to Statistics::Statistics()+0x18ac
0860ef2a +0x136:  mov    0x8(%eax),%edx
0860ef2d +0x139:  mov    0x4(%eax),%eax
0860ef30 +0x13c:  mov    %edx,%ebx
0860ef32 +0x13e:  lea    -0x10(%ebp),%eax
0860ef35 +0x141:  mov    %eax,(%esp)
0860ef38 +0x144:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ef3d +0x149:  mov    %ebx,0x4(%esp)
0860ef41 +0x14d:  mov    %eax,(%esp)
0860ef44 +0x150:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ef49 +0x155:  lea    -0x14(%ebp),%eax
0860ef4c +0x158:  mov    %eax,(%esp)
0860ef4f +0x15b:  call   0861188a <_GLOBAL__I__ZN10StatisticsC2Ev+0x1908>  ; global constructors keyed to Statistics::Statistics()+0x1908
0860ef54 +0x160:  lea    -0x18(%ebp),%eax
0860ef57 +0x163:  mov    %eax,0x4(%esp)
0860ef5b +0x167:  lea    -0x14(%ebp),%eax
0860ef5e +0x16a:  mov    %eax,(%esp)
0860ef61 +0x16d:  call   08611876 <_GLOBAL__I__ZN10StatisticsC2Ev+0x18f4>  ; global constructors keyed to Statistics::Statistics()+0x18f4
0860ef66 +0x172:  test   %al,%al
0860ef68 +0x174:  jne    0860eed1 <+0xdd>
0860ef6e +0x17a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860ef73 +0x17f:  lea    -0x10(%ebp),%edx
0860ef76 +0x182:  mov    %edx,0x8(%esp)
0860ef7a +0x186:  movl   $0x4,0x4(%esp)
0860ef82 +0x18e:  mov    %eax,(%esp)
0860ef85 +0x191:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860ef8a +0x196:  mov    0x8(%ebp),%eax
0860ef8d +0x199:  mov    %eax,(%esp)
0860ef90 +0x19c:  call   086118a8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1926>  ; global constructors keyed to Statistics::Statistics()+0x1926
0860ef95 +0x1a1:  jmp    0860efb2 <+0x1be>
0860ef97 +0x1a3:  mov    %edx,%ebx
0860ef99 +0x1a5:  mov    %eax,%esi
0860ef9b +0x1a7:  lea    -0x10(%ebp),%eax
0860ef9e +0x1aa:  mov    %eax,(%esp)
0860efa1 +0x1ad:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860efa6 +0x1b2:  mov    %esi,%eax
0860efa8 +0x1b4:  mov    %ebx,%edx
0860efaa +0x1b6:  mov    %eax,(%esp)
0860efad +0x1b9:  call   08ae3750 <_Unwind_Resume>
0860efb2 +0x1be:  lea    -0x10(%ebp),%eax
0860efb5 +0x1c1:  mov    %eax,(%esp)
0860efb8 +0x1c4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860efbd +0x1c9:  jmp    0860efc0 <+0x1cc>
0860efbf +0x1cb:  nop
0860efc0 +0x1cc:  lea    -0x8(%ebp),%esp
0860efc3 +0x1cf:  add    $0x0,%esp
0860efc6 +0x1d2:  pop    %ebx
0860efc7 +0x1d3:  pop    %esi
0860efc8 +0x1d4:  pop    %ebp
0860efc9 +0x1d5:  ret
```

## 反编译 C

```c
// CLevelDungeonPlayStatistic::InsertDatabase @ 0x860edf4

/* CLevelDungeonPlayStatistic::InsertDatabase() */

void __thiscall CLevelDungeonPlayStatistic::InsertDatabase(CLevelDungeonPlayStatistic *this)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int *piVar5;
  map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
  local_1c [4];
  map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
  local_18 [4];
  CStreamGuard local_14 [8];
  
  iVar2 = std::
          map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
          ::size((map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
                  *)this);
  if (iVar2 != 0) {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x569);
    CStreamGuard::CStreamGuard(local_14,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0860ee5e to 0860ef94 has its CatchHandler @ 0860ef97 */
    CStreamGuard::operator<<(pCVar4,0x107);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,-1);
    iVar2 = std::
            map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
            ::size((map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
                    *)this);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,iVar2);
    std::
    map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
    ::begin(local_18);
    std::
    map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
    ::end(local_1c);
    while( true ) {
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
              ::operator!=((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                            *)local_18,(_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      piVar5 = (int *)std::
                      _Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                                    *)local_18);
      iVar2 = *piVar5;
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                            *)local_18);
      iVar2 = *(int *)(iVar2 + 4);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                            *)local_18);
      iVar2 = *(int *)(iVar2 + 8);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
      CStreamGuard::operator<<(pCVar4,iVar2);
      std::_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>::
      operator++((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                  *)local_18);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
    std::
    map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
    ::clear((map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
             *)this);
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}
```
