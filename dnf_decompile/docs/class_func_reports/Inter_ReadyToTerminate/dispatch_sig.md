# dispatch_sig

`_ZN22Inter_ReadyToTerminate12dispatch_sigEP5CUserPci`

`Inter_ReadyToTerminate::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReadyToTerminate` | `0x084c7d2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c7d2c  _ZN22Inter_ReadyToTerminate12dispatch_sigEP5CUserPci
#           Inter_ReadyToTerminate::dispatch_sig(CUser*, char*, int)
# range [0x084c7d2c, 0x084c7de9]
084c7d2c +0x00:  push   %ebp
084c7d2d +0x01:  mov    %esp,%ebp
084c7d2f +0x03:  push   %esi
084c7d30 +0x04:  push   %ebx
084c7d31 +0x05:  sub    $0x20,%esp
084c7d34 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084c7d39 +0x0d:  movl   $0x2055,0x8(%esp)
084c7d41 +0x15:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c7d49 +0x1d:  mov    %eax,(%esp)
084c7d4c +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084c7d51 +0x25:  movl   $0x1,0x8(%esp)
084c7d59 +0x2d:  mov    %eax,0x4(%esp)
084c7d5d +0x31:  lea    -0x10(%ebp),%eax
084c7d60 +0x34:  mov    %eax,(%esp)
084c7d63 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084c7d68 +0x3c:  lea    -0x10(%ebp),%eax
084c7d6b +0x3f:  mov    %eax,(%esp)
084c7d6e +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c7d73 +0x47:  movl   $0x3f,0x4(%esp)
084c7d7b +0x4f:  mov    %eax,(%esp)
084c7d7e +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c7d83 +0x57:  lea    -0x10(%ebp),%eax
084c7d86 +0x5a:  mov    %eax,(%esp)
084c7d89 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c7d8e +0x62:  movl   $0xffffffff,0x4(%esp)
084c7d96 +0x6a:  mov    %eax,(%esp)
084c7d99 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c7d9e +0x72:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084c7da3 +0x77:  lea    -0x10(%ebp),%edx
084c7da6 +0x7a:  mov    %edx,0x8(%esp)
084c7daa +0x7e:  movl   $0x2,0x4(%esp)
084c7db2 +0x86:  mov    %eax,(%esp)
084c7db5 +0x89:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084c7dba +0x8e:  mov    $0x0,%ebx
084c7dbf +0x93:  lea    -0x10(%ebp),%eax
084c7dc2 +0x96:  mov    %eax,(%esp)
084c7dc5 +0x99:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c7dca +0x9e:  mov    %ebx,%eax
084c7dcc +0xa0:  add    $0x20,%esp
084c7dcf +0xa3:  pop    %ebx
084c7dd0 +0xa4:  pop    %esi
084c7dd1 +0xa5:  pop    %ebp
084c7dd2 +0xa6:  ret
084c7dd3 +0xa7:  mov    %edx,%ebx
084c7dd5 +0xa9:  mov    %eax,%esi
084c7dd7 +0xab:  lea    -0x10(%ebp),%eax
084c7dda +0xae:  mov    %eax,(%esp)
084c7ddd +0xb1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c7de2 +0xb6:  mov    %esi,%eax
084c7de4 +0xb8:  mov    %ebx,%edx
084c7de6 +0xba:  mov    %eax,(%esp)
084c7de9 +0xbd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_ReadyToTerminate::dispatch_sig @ 0x84c7d2c

/* Inter_ReadyToTerminate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReadyToTerminate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x2055);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084c7d7e to 084c7db9 has its CatchHandler @ 084c7dd3 */
  CStreamGuard::operator<<(pCVar2,0x3f);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 0;
}
```
