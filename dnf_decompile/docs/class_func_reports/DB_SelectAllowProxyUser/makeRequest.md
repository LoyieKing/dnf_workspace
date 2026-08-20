# makeRequest

`_ZN23DB_SelectAllowProxyUser11makeRequestEij`

`DB_SelectAllowProxyUser::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_SelectAllowProxyUser` | `0x0844d2d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844d2d4  _ZN23DB_SelectAllowProxyUser11makeRequestEij
#           DB_SelectAllowProxyUser::makeRequest(int, unsigned int)
# range [0x0844d2d4, 0x0844d3a9]
0844d2d4 +0x00:  push   %ebp
0844d2d5 +0x01:  mov    %esp,%ebp
0844d2d7 +0x03:  push   %esi
0844d2d8 +0x04:  push   %ebx
0844d2d9 +0x05:  sub    $0x20,%esp
0844d2dc +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844d2e1 +0x0d:  movl   $0xc2c6,0x8(%esp)
0844d2e9 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0844d2f1 +0x1d:  mov    %eax,(%esp)
0844d2f4 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844d2f9 +0x25:  movl   $0x1,0x8(%esp)
0844d301 +0x2d:  mov    %eax,0x4(%esp)
0844d305 +0x31:  lea    -0x10(%ebp),%eax
0844d308 +0x34:  mov    %eax,(%esp)
0844d30b +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844d310 +0x3c:  lea    -0x10(%ebp),%eax
0844d313 +0x3f:  mov    %eax,(%esp)
0844d316 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844d31b +0x47:  movl   $0x352,0x4(%esp)
0844d323 +0x4f:  mov    %eax,(%esp)
0844d326 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844d32b +0x57:  lea    -0x10(%ebp),%eax
0844d32e +0x5a:  mov    %eax,(%esp)
0844d331 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844d336 +0x62:  mov    0x8(%ebp),%edx
0844d339 +0x65:  mov    %edx,0x4(%esp)
0844d33d +0x69:  mov    %eax,(%esp)
0844d340 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844d345 +0x71:  lea    -0x10(%ebp),%eax
0844d348 +0x74:  mov    %eax,(%esp)
0844d34b +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844d350 +0x7c:  mov    0xc(%ebp),%edx
0844d353 +0x7f:  mov    %edx,0x4(%esp)
0844d357 +0x83:  mov    %eax,(%esp)
0844d35a +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0844d35f +0x8b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844d364 +0x90:  lea    -0x10(%ebp),%edx
0844d367 +0x93:  mov    %edx,0x8(%esp)
0844d36b +0x97:  movl   $0x2,0x4(%esp)
0844d373 +0x9f:  mov    %eax,(%esp)
0844d376 +0xa2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844d37b +0xa7:  jmp    0844d398 <+0xc4>
0844d37d +0xa9:  mov    %edx,%ebx
0844d37f +0xab:  mov    %eax,%esi
0844d381 +0xad:  lea    -0x10(%ebp),%eax
0844d384 +0xb0:  mov    %eax,(%esp)
0844d387 +0xb3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844d38c +0xb8:  mov    %esi,%eax
0844d38e +0xba:  mov    %ebx,%edx
0844d390 +0xbc:  mov    %eax,(%esp)
0844d393 +0xbf:  call   08ae3750 <_Unwind_Resume>
0844d398 +0xc4:  lea    -0x10(%ebp),%eax
0844d39b +0xc7:  mov    %eax,(%esp)
0844d39e +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844d3a3 +0xcf:  add    $0x20,%esp
0844d3a6 +0xd2:  pop    %ebx
0844d3a7 +0xd3:  pop    %esi
0844d3a8 +0xd4:  pop    %ebp
0844d3a9 +0xd5:  ret
```

## 反编译 C

```c
// DB_SelectAllowProxyUser::makeRequest @ 0x844d2d4

/* DB_SelectAllowProxyUser::makeRequest(int, unsigned int) */

void DB_SelectAllowProxyUser::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xc2c6);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844d326 to 0844d37a has its CatchHandler @ 0844d37d */
  CStreamGuard::operator<<(pCVar2,0x352);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
