# makeRequest

`_ZN17DB_BlackIPMonitor11makeRequestEv`

`DB_BlackIPMonitor::makeRequest()`

| 类 | 地址 |
|---|---|
| `DB_BlackIPMonitor` | `0x08432e80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08432e80  _ZN17DB_BlackIPMonitor11makeRequestEv
#           DB_BlackIPMonitor::makeRequest()
# range [0x08432e80, 0x08432f3d]
08432e80 +0x00:  push   %ebp
08432e81 +0x01:  mov    %esp,%ebp
08432e83 +0x03:  push   %esi
08432e84 +0x04:  push   %ebx
08432e85 +0x05:  sub    $0x20,%esp
08432e88 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08432e8d +0x0d:  movl   $0x7a8e,0x8(%esp)
08432e95 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08432e9d +0x1d:  mov    %eax,(%esp)
08432ea0 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08432ea5 +0x25:  movl   $0x1,0x8(%esp)
08432ead +0x2d:  mov    %eax,0x4(%esp)
08432eb1 +0x31:  lea    -0x10(%ebp),%eax
08432eb4 +0x34:  mov    %eax,(%esp)
08432eb7 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08432ebc +0x3c:  lea    -0x10(%ebp),%eax
08432ebf +0x3f:  mov    %eax,(%esp)
08432ec2 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08432ec7 +0x47:  movl   $0x152,0x4(%esp)
08432ecf +0x4f:  mov    %eax,(%esp)
08432ed2 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08432ed7 +0x57:  lea    -0x10(%ebp),%eax
08432eda +0x5a:  mov    %eax,(%esp)
08432edd +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08432ee2 +0x62:  movl   $0xffffffff,0x4(%esp)
08432eea +0x6a:  mov    %eax,(%esp)
08432eed +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08432ef2 +0x72:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08432ef7 +0x77:  lea    -0x10(%ebp),%edx
08432efa +0x7a:  mov    %edx,0x8(%esp)
08432efe +0x7e:  movl   $0x2,0x4(%esp)
08432f06 +0x86:  mov    %eax,(%esp)
08432f09 +0x89:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08432f0e +0x8e:  jmp    08432f2b <+0xab>
08432f10 +0x90:  mov    %edx,%ebx
08432f12 +0x92:  mov    %eax,%esi
08432f14 +0x94:  lea    -0x10(%ebp),%eax
08432f17 +0x97:  mov    %eax,(%esp)
08432f1a +0x9a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08432f1f +0x9f:  mov    %esi,%eax
08432f21 +0xa1:  mov    %ebx,%edx
08432f23 +0xa3:  mov    %eax,(%esp)
08432f26 +0xa6:  call   08ae3750 <_Unwind_Resume>
08432f2b +0xab:  lea    -0x10(%ebp),%eax
08432f2e +0xae:  mov    %eax,(%esp)
08432f31 +0xb1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08432f36 +0xb6:  add    $0x20,%esp
08432f39 +0xb9:  pop    %ebx
08432f3a +0xba:  pop    %esi
08432f3b +0xbb:  pop    %ebp
08432f3c +0xbc:  ret
08432f3d +0xbd:  nop
```

## 反编译 C

```c
// DB_BlackIPMonitor::makeRequest @ 0x8432e80

/* DB_BlackIPMonitor::makeRequest() */

void DB_BlackIPMonitor::makeRequest(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7a8e);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08432ed2 to 08432f0d has its CatchHandler @ 08432f10 */
  CStreamGuard::operator<<(pCVar2,0x152);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
