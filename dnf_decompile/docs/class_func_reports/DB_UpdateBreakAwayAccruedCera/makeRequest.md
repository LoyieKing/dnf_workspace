# makeRequest

`_ZN29DB_UpdateBreakAwayAccruedCera11makeRequestEjj`

`DB_UpdateBreakAwayAccruedCera::makeRequest(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBreakAwayAccruedCera` | `0x0843856a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843856a  _ZN29DB_UpdateBreakAwayAccruedCera11makeRequestEjj
#           DB_UpdateBreakAwayAccruedCera::makeRequest(unsigned int, unsigned int)
# range [0x0843856a, 0x0843865b]
0843856a +0x00:  push   %ebp
0843856b +0x01:  mov    %esp,%ebp
0843856d +0x03:  push   %esi
0843856e +0x04:  push   %ebx
0843856f +0x05:  sub    $0x20,%esp
08438572 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08438577 +0x0d:  movl   $0x85fe,0x8(%esp)
0843857f +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08438587 +0x1d:  mov    %eax,(%esp)
0843858a +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843858f +0x25:  movl   $0x1,0x8(%esp)
08438597 +0x2d:  mov    %eax,0x4(%esp)
0843859b +0x31:  lea    -0x10(%ebp),%eax
0843859e +0x34:  mov    %eax,(%esp)
084385a1 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084385a6 +0x3c:  lea    -0x10(%ebp),%eax
084385a9 +0x3f:  mov    %eax,(%esp)
084385ac +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084385b1 +0x47:  movl   $0x146,0x4(%esp)
084385b9 +0x4f:  mov    %eax,(%esp)
084385bc +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084385c1 +0x57:  lea    -0x10(%ebp),%eax
084385c4 +0x5a:  mov    %eax,(%esp)
084385c7 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084385cc +0x62:  movl   $0xffffffff,0x4(%esp)
084385d4 +0x6a:  mov    %eax,(%esp)
084385d7 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084385dc +0x72:  lea    -0x10(%ebp),%eax
084385df +0x75:  mov    %eax,(%esp)
084385e2 +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084385e7 +0x7d:  mov    0x8(%ebp),%edx
084385ea +0x80:  mov    %edx,0x4(%esp)
084385ee +0x84:  mov    %eax,(%esp)
084385f1 +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084385f6 +0x8c:  lea    -0x10(%ebp),%eax
084385f9 +0x8f:  mov    %eax,(%esp)
084385fc +0x92:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08438601 +0x97:  mov    0xc(%ebp),%edx
08438604 +0x9a:  mov    %edx,0x4(%esp)
08438608 +0x9e:  mov    %eax,(%esp)
0843860b +0xa1:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08438610 +0xa6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08438615 +0xab:  lea    -0x10(%ebp),%edx
08438618 +0xae:  mov    %edx,0x8(%esp)
0843861c +0xb2:  movl   $0x2,0x4(%esp)
08438624 +0xba:  mov    %eax,(%esp)
08438627 +0xbd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843862c +0xc2:  jmp    08438649 <+0xdf>
0843862e +0xc4:  mov    %edx,%ebx
08438630 +0xc6:  mov    %eax,%esi
08438632 +0xc8:  lea    -0x10(%ebp),%eax
08438635 +0xcb:  mov    %eax,(%esp)
08438638 +0xce:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843863d +0xd3:  mov    %esi,%eax
0843863f +0xd5:  mov    %ebx,%edx
08438641 +0xd7:  mov    %eax,(%esp)
08438644 +0xda:  call   08ae3750 <_Unwind_Resume>
08438649 +0xdf:  lea    -0x10(%ebp),%eax
0843864c +0xe2:  mov    %eax,(%esp)
0843864f +0xe5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08438654 +0xea:  add    $0x20,%esp
08438657 +0xed:  pop    %ebx
08438658 +0xee:  pop    %esi
08438659 +0xef:  pop    %ebp
0843865a +0xf0:  ret
0843865b +0xf1:  nop
```

## 反编译 C

```c
// DB_UpdateBreakAwayAccruedCera::makeRequest @ 0x843856a

/* DB_UpdateBreakAwayAccruedCera::makeRequest(unsigned int, unsigned int) */

void DB_UpdateBreakAwayAccruedCera::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x85fe);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084385bc to 0843862b has its CatchHandler @ 0843862e */
  CStreamGuard::operator<<(pCVar2,0x146);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
