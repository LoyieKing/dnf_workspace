# makeRequest

`_ZN20DB_LoadCleanPadPoint11makeRequestEv`

`DB_LoadCleanPadPoint::makeRequest()`

| 类 | 地址 |
|---|---|
| `DB_LoadCleanPadPoint` | `0x0842efa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842efa0  _ZN20DB_LoadCleanPadPoint11makeRequestEv
#           DB_LoadCleanPadPoint::makeRequest()
# range [0x0842efa0, 0x0842f05d]
0842efa0 +0x00:  push   %ebp
0842efa1 +0x01:  mov    %esp,%ebp
0842efa3 +0x03:  push   %esi
0842efa4 +0x04:  push   %ebx
0842efa5 +0x05:  sub    $0x20,%esp
0842efa8 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842efad +0x0d:  movl   $0x73d8,0x8(%esp)
0842efb5 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0842efbd +0x1d:  mov    %eax,(%esp)
0842efc0 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842efc5 +0x25:  movl   $0x1,0x8(%esp)
0842efcd +0x2d:  mov    %eax,0x4(%esp)
0842efd1 +0x31:  lea    -0x10(%ebp),%eax
0842efd4 +0x34:  mov    %eax,(%esp)
0842efd7 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842efdc +0x3c:  lea    -0x10(%ebp),%eax
0842efdf +0x3f:  mov    %eax,(%esp)
0842efe2 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842efe7 +0x47:  movl   $0x127,0x4(%esp)
0842efef +0x4f:  mov    %eax,(%esp)
0842eff2 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842eff7 +0x57:  lea    -0x10(%ebp),%eax
0842effa +0x5a:  mov    %eax,(%esp)
0842effd +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842f002 +0x62:  movl   $0xffffffff,0x4(%esp)
0842f00a +0x6a:  mov    %eax,(%esp)
0842f00d +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842f012 +0x72:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842f017 +0x77:  lea    -0x10(%ebp),%edx
0842f01a +0x7a:  mov    %edx,0x8(%esp)
0842f01e +0x7e:  movl   $0x2,0x4(%esp)
0842f026 +0x86:  mov    %eax,(%esp)
0842f029 +0x89:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842f02e +0x8e:  jmp    0842f04b <+0xab>
0842f030 +0x90:  mov    %edx,%ebx
0842f032 +0x92:  mov    %eax,%esi
0842f034 +0x94:  lea    -0x10(%ebp),%eax
0842f037 +0x97:  mov    %eax,(%esp)
0842f03a +0x9a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842f03f +0x9f:  mov    %esi,%eax
0842f041 +0xa1:  mov    %ebx,%edx
0842f043 +0xa3:  mov    %eax,(%esp)
0842f046 +0xa6:  call   08ae3750 <_Unwind_Resume>
0842f04b +0xab:  lea    -0x10(%ebp),%eax
0842f04e +0xae:  mov    %eax,(%esp)
0842f051 +0xb1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842f056 +0xb6:  add    $0x20,%esp
0842f059 +0xb9:  pop    %ebx
0842f05a +0xba:  pop    %esi
0842f05b +0xbb:  pop    %ebp
0842f05c +0xbc:  ret
0842f05d +0xbd:  nop
```

## 反编译 C

```c
// DB_LoadCleanPadPoint::makeRequest @ 0x842efa0

/* DB_LoadCleanPadPoint::makeRequest() */

void DB_LoadCleanPadPoint::makeRequest(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x73d8);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842eff2 to 0842f02d has its CatchHandler @ 0842f030 */
  CStreamGuard::operator<<(pCVar2,0x127);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
