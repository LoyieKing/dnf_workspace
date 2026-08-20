# makeRequest

`_ZN27DB_LoadBreakAwayPreventData11makeRequestEb`

`DB_LoadBreakAwayPreventData::makeRequest(bool)`

| 类 | 地址 |
|---|---|
| `DB_LoadBreakAwayPreventData` | `0x08438920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08438920  _ZN27DB_LoadBreakAwayPreventData11makeRequestEb
#           DB_LoadBreakAwayPreventData::makeRequest(bool)
# range [0x08438920, 0x084389fd]
08438920 +0x00:  push   %ebp
08438921 +0x01:  mov    %esp,%ebp
08438923 +0x03:  push   %esi
08438924 +0x04:  push   %ebx
08438925 +0x05:  sub    $0x30,%esp
08438928 +0x08:  mov    0x8(%ebp),%eax
0843892b +0x0b:  mov    %al,-0x1c(%ebp)
0843892e +0x0e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08438933 +0x13:  movl   $0x8642,0x8(%esp)
0843893b +0x1b:  movl   $"DBThread.cpp",0x4(%esp)
08438943 +0x23:  mov    %eax,(%esp)
08438946 +0x26:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843894b +0x2b:  movl   $0x1,0x8(%esp)
08438953 +0x33:  mov    %eax,0x4(%esp)
08438957 +0x37:  lea    -0x10(%ebp),%eax
0843895a +0x3a:  mov    %eax,(%esp)
0843895d +0x3d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08438962 +0x42:  lea    -0x10(%ebp),%eax
08438965 +0x45:  mov    %eax,(%esp)
08438968 +0x48:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843896d +0x4d:  movl   $0x141,0x4(%esp)
08438975 +0x55:  mov    %eax,(%esp)
08438978 +0x58:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843897d +0x5d:  lea    -0x10(%ebp),%eax
08438980 +0x60:  mov    %eax,(%esp)
08438983 +0x63:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08438988 +0x68:  movl   $0xffffffff,0x4(%esp)
08438990 +0x70:  mov    %eax,(%esp)
08438993 +0x73:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08438998 +0x78:  movzbl -0x1c(%ebp),%ebx
0843899c +0x7c:  lea    -0x10(%ebp),%eax
0843899f +0x7f:  mov    %eax,(%esp)
084389a2 +0x82:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084389a7 +0x87:  mov    %ebx,0x4(%esp)
084389ab +0x8b:  mov    %eax,(%esp)
084389ae +0x8e:  call   0844d430 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x46>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x46
084389b3 +0x93:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084389b8 +0x98:  lea    -0x10(%ebp),%edx
084389bb +0x9b:  mov    %edx,0x8(%esp)
084389bf +0x9f:  movl   $0x2,0x4(%esp)
084389c7 +0xa7:  mov    %eax,(%esp)
084389ca +0xaa:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084389cf +0xaf:  jmp    084389ec <+0xcc>
084389d1 +0xb1:  mov    %edx,%ebx
084389d3 +0xb3:  mov    %eax,%esi
084389d5 +0xb5:  lea    -0x10(%ebp),%eax
084389d8 +0xb8:  mov    %eax,(%esp)
084389db +0xbb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084389e0 +0xc0:  mov    %esi,%eax
084389e2 +0xc2:  mov    %ebx,%edx
084389e4 +0xc4:  mov    %eax,(%esp)
084389e7 +0xc7:  call   08ae3750 <_Unwind_Resume>
084389ec +0xcc:  lea    -0x10(%ebp),%eax
084389ef +0xcf:  mov    %eax,(%esp)
084389f2 +0xd2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084389f7 +0xd7:  add    $0x30,%esp
084389fa +0xda:  pop    %ebx
084389fb +0xdb:  pop    %esi
084389fc +0xdc:  pop    %ebp
084389fd +0xdd:  ret
```

## 反编译 C

```c
// DB_LoadBreakAwayPreventData::makeRequest @ 0x8438920

/* DB_LoadBreakAwayPreventData::makeRequest(bool) */

void DB_LoadBreakAwayPreventData::makeRequest(bool param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8642);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08438978 to 084389ce has its CatchHandler @ 084389d1 */
  CStreamGuard::operator<<(pCVar2,0x141);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
