# makeRequest

`_ZN21DB_DeleteAccountCargo11makeRequestEij`

`DB_DeleteAccountCargo::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_DeleteAccountCargo` | `0x0843b2e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843b2e0  _ZN21DB_DeleteAccountCargo11makeRequestEij
#           DB_DeleteAccountCargo::makeRequest(int, unsigned int)
# range [0x0843b2e0, 0x0843b3b5]
0843b2e0 +0x00:  push   %ebp
0843b2e1 +0x01:  mov    %esp,%ebp
0843b2e3 +0x03:  push   %esi
0843b2e4 +0x04:  push   %ebx
0843b2e5 +0x05:  sub    $0x20,%esp
0843b2e8 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843b2ed +0x0d:  movl   $0x8c38,0x8(%esp)
0843b2f5 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843b2fd +0x1d:  mov    %eax,(%esp)
0843b300 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843b305 +0x25:  movl   $0x1,0x8(%esp)
0843b30d +0x2d:  mov    %eax,0x4(%esp)
0843b311 +0x31:  lea    -0x10(%ebp),%eax
0843b314 +0x34:  mov    %eax,(%esp)
0843b317 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843b31c +0x3c:  lea    -0x10(%ebp),%eax
0843b31f +0x3f:  mov    %eax,(%esp)
0843b322 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b327 +0x47:  movl   $0x1f0,0x4(%esp)
0843b32f +0x4f:  mov    %eax,(%esp)
0843b332 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843b337 +0x57:  lea    -0x10(%ebp),%eax
0843b33a +0x5a:  mov    %eax,(%esp)
0843b33d +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b342 +0x62:  mov    0x8(%ebp),%edx
0843b345 +0x65:  mov    %edx,0x4(%esp)
0843b349 +0x69:  mov    %eax,(%esp)
0843b34c +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843b351 +0x71:  lea    -0x10(%ebp),%eax
0843b354 +0x74:  mov    %eax,(%esp)
0843b357 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b35c +0x7c:  mov    0xc(%ebp),%edx
0843b35f +0x7f:  mov    %edx,0x4(%esp)
0843b363 +0x83:  mov    %eax,(%esp)
0843b366 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843b36b +0x8b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843b370 +0x90:  lea    -0x10(%ebp),%edx
0843b373 +0x93:  mov    %edx,0x8(%esp)
0843b377 +0x97:  movl   $0x2,0x4(%esp)
0843b37f +0x9f:  mov    %eax,(%esp)
0843b382 +0xa2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843b387 +0xa7:  jmp    0843b3a4 <+0xc4>
0843b389 +0xa9:  mov    %edx,%ebx
0843b38b +0xab:  mov    %eax,%esi
0843b38d +0xad:  lea    -0x10(%ebp),%eax
0843b390 +0xb0:  mov    %eax,(%esp)
0843b393 +0xb3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843b398 +0xb8:  mov    %esi,%eax
0843b39a +0xba:  mov    %ebx,%edx
0843b39c +0xbc:  mov    %eax,(%esp)
0843b39f +0xbf:  call   08ae3750 <_Unwind_Resume>
0843b3a4 +0xc4:  lea    -0x10(%ebp),%eax
0843b3a7 +0xc7:  mov    %eax,(%esp)
0843b3aa +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843b3af +0xcf:  add    $0x20,%esp
0843b3b2 +0xd2:  pop    %ebx
0843b3b3 +0xd3:  pop    %esi
0843b3b4 +0xd4:  pop    %ebp
0843b3b5 +0xd5:  ret
```

## 反编译 C

```c
// DB_DeleteAccountCargo::makeRequest @ 0x843b2e0

/* DB_DeleteAccountCargo::makeRequest(int, unsigned int) */

void DB_DeleteAccountCargo::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8c38);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843b332 to 0843b386 has its CatchHandler @ 0843b389 */
  CStreamGuard::operator<<(pCVar2,0x1f0);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
