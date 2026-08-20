# makeRequest

`_ZN25DB_BlackIPMonitorPartLoad11makeRequestEv`

`DB_BlackIPMonitorPartLoad::makeRequest()`

| 类 | 地址 |
|---|---|
| `DB_BlackIPMonitorPartLoad` | `0x0843351e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843351e  _ZN25DB_BlackIPMonitorPartLoad11makeRequestEv
#           DB_BlackIPMonitorPartLoad::makeRequest()
# range [0x0843351e, 0x084335db]
0843351e +0x00:  push   %ebp
0843351f +0x01:  mov    %esp,%ebp
08433521 +0x03:  push   %esi
08433522 +0x04:  push   %ebx
08433523 +0x05:  sub    $0x20,%esp
08433526 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843352b +0x0d:  movl   $0x7b3d,0x8(%esp)
08433533 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843353b +0x1d:  mov    %eax,(%esp)
0843353e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08433543 +0x25:  movl   $0x1,0x8(%esp)
0843354b +0x2d:  mov    %eax,0x4(%esp)
0843354f +0x31:  lea    -0x10(%ebp),%eax
08433552 +0x34:  mov    %eax,(%esp)
08433555 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843355a +0x3c:  lea    -0x10(%ebp),%eax
0843355d +0x3f:  mov    %eax,(%esp)
08433560 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433565 +0x47:  movl   $0x155,0x4(%esp)
0843356d +0x4f:  mov    %eax,(%esp)
08433570 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08433575 +0x57:  lea    -0x10(%ebp),%eax
08433578 +0x5a:  mov    %eax,(%esp)
0843357b +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433580 +0x62:  movl   $0xffffffff,0x4(%esp)
08433588 +0x6a:  mov    %eax,(%esp)
0843358b +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08433590 +0x72:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08433595 +0x77:  lea    -0x10(%ebp),%edx
08433598 +0x7a:  mov    %edx,0x8(%esp)
0843359c +0x7e:  movl   $0x2,0x4(%esp)
084335a4 +0x86:  mov    %eax,(%esp)
084335a7 +0x89:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084335ac +0x8e:  jmp    084335c9 <+0xab>
084335ae +0x90:  mov    %edx,%ebx
084335b0 +0x92:  mov    %eax,%esi
084335b2 +0x94:  lea    -0x10(%ebp),%eax
084335b5 +0x97:  mov    %eax,(%esp)
084335b8 +0x9a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084335bd +0x9f:  mov    %esi,%eax
084335bf +0xa1:  mov    %ebx,%edx
084335c1 +0xa3:  mov    %eax,(%esp)
084335c4 +0xa6:  call   08ae3750 <_Unwind_Resume>
084335c9 +0xab:  lea    -0x10(%ebp),%eax
084335cc +0xae:  mov    %eax,(%esp)
084335cf +0xb1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084335d4 +0xb6:  add    $0x20,%esp
084335d7 +0xb9:  pop    %ebx
084335d8 +0xba:  pop    %esi
084335d9 +0xbb:  pop    %ebp
084335da +0xbc:  ret
084335db +0xbd:  nop
```

## 反编译 C

```c
// DB_BlackIPMonitorPartLoad::makeRequest @ 0x843351e

/* DB_BlackIPMonitorPartLoad::makeRequest() */

void DB_BlackIPMonitorPartLoad::makeRequest(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7b3d);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08433570 to 084335ab has its CatchHandler @ 084335ae */
  CStreamGuard::operator<<(pCVar2,0x155);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
