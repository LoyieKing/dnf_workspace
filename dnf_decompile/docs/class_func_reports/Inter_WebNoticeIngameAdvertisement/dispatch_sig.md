# dispatch_sig

`_ZN34Inter_WebNoticeIngameAdvertisement12dispatch_sigEP5CUserPci`

`Inter_WebNoticeIngameAdvertisement::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_WebNoticeIngameAdvertisement` | `0x084c8c4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c8c4e  _ZN34Inter_WebNoticeIngameAdvertisement12dispatch_sigEP5CUserPci
#           Inter_WebNoticeIngameAdvertisement::dispatch_sig(CUser*, char*, int)
# range [0x084c8c4e, 0x084c8d0b]
084c8c4e +0x00:  push   %ebp
084c8c4f +0x01:  mov    %esp,%ebp
084c8c51 +0x03:  push   %esi
084c8c52 +0x04:  push   %ebx
084c8c53 +0x05:  sub    $0x20,%esp
084c8c56 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084c8c5b +0x0d:  movl   $0x2277,0x8(%esp)
084c8c63 +0x15:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c8c6b +0x1d:  mov    %eax,(%esp)
084c8c6e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084c8c73 +0x25:  movl   $0x1,0x8(%esp)
084c8c7b +0x2d:  mov    %eax,0x4(%esp)
084c8c7f +0x31:  lea    -0x10(%ebp),%eax
084c8c82 +0x34:  mov    %eax,(%esp)
084c8c85 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084c8c8a +0x3c:  lea    -0x10(%ebp),%eax
084c8c8d +0x3f:  mov    %eax,(%esp)
084c8c90 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c8c95 +0x47:  movl   $0x2f8,0x4(%esp)
084c8c9d +0x4f:  mov    %eax,(%esp)
084c8ca0 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c8ca5 +0x57:  lea    -0x10(%ebp),%eax
084c8ca8 +0x5a:  mov    %eax,(%esp)
084c8cab +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c8cb0 +0x62:  movl   $0xffffffff,0x4(%esp)
084c8cb8 +0x6a:  mov    %eax,(%esp)
084c8cbb +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c8cc0 +0x72:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084c8cc5 +0x77:  lea    -0x10(%ebp),%edx
084c8cc8 +0x7a:  mov    %edx,0x8(%esp)
084c8ccc +0x7e:  movl   $0x2,0x4(%esp)
084c8cd4 +0x86:  mov    %eax,(%esp)
084c8cd7 +0x89:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084c8cdc +0x8e:  mov    $0x0,%ebx
084c8ce1 +0x93:  lea    -0x10(%ebp),%eax
084c8ce4 +0x96:  mov    %eax,(%esp)
084c8ce7 +0x99:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c8cec +0x9e:  mov    %ebx,%eax
084c8cee +0xa0:  add    $0x20,%esp
084c8cf1 +0xa3:  pop    %ebx
084c8cf2 +0xa4:  pop    %esi
084c8cf3 +0xa5:  pop    %ebp
084c8cf4 +0xa6:  ret
084c8cf5 +0xa7:  mov    %edx,%ebx
084c8cf7 +0xa9:  mov    %eax,%esi
084c8cf9 +0xab:  lea    -0x10(%ebp),%eax
084c8cfc +0xae:  mov    %eax,(%esp)
084c8cff +0xb1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c8d04 +0xb6:  mov    %esi,%eax
084c8d06 +0xb8:  mov    %ebx,%edx
084c8d08 +0xba:  mov    %eax,(%esp)
084c8d0b +0xbd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_WebNoticeIngameAdvertisement::dispatch_sig @ 0x84c8c4e

/* Inter_WebNoticeIngameAdvertisement::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_WebNoticeIngameAdvertisement::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x2277);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084c8ca0 to 084c8cdb has its CatchHandler @ 084c8cf5 */
  CStreamGuard::operator<<(pCVar2,0x2f8);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 0;
}
```
