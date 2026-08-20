# makeRequest

`_ZN30DB_UpdatePurchaseCashItemBonus11makeRequestEij`

`DB_UpdatePurchaseCashItemBonus::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_UpdatePurchaseCashItemBonus` | `0x0843e560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843e560  _ZN30DB_UpdatePurchaseCashItemBonus11makeRequestEij
#           DB_UpdatePurchaseCashItemBonus::makeRequest(int, unsigned int)
# range [0x0843e560, 0x0843e635]
0843e560 +0x00:  push   %ebp
0843e561 +0x01:  mov    %esp,%ebp
0843e563 +0x03:  push   %esi
0843e564 +0x04:  push   %ebx
0843e565 +0x05:  sub    $0x20,%esp
0843e568 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843e56d +0x0d:  movl   $0x9415,0x8(%esp)
0843e575 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843e57d +0x1d:  mov    %eax,(%esp)
0843e580 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843e585 +0x25:  movl   $0x1,0x8(%esp)
0843e58d +0x2d:  mov    %eax,0x4(%esp)
0843e591 +0x31:  lea    -0x10(%ebp),%eax
0843e594 +0x34:  mov    %eax,(%esp)
0843e597 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843e59c +0x3c:  lea    -0x10(%ebp),%eax
0843e59f +0x3f:  mov    %eax,(%esp)
0843e5a2 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e5a7 +0x47:  movl   $0x23c,0x4(%esp)
0843e5af +0x4f:  mov    %eax,(%esp)
0843e5b2 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843e5b7 +0x57:  lea    -0x10(%ebp),%eax
0843e5ba +0x5a:  mov    %eax,(%esp)
0843e5bd +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e5c2 +0x62:  mov    0x8(%ebp),%edx
0843e5c5 +0x65:  mov    %edx,0x4(%esp)
0843e5c9 +0x69:  mov    %eax,(%esp)
0843e5cc +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843e5d1 +0x71:  lea    -0x10(%ebp),%eax
0843e5d4 +0x74:  mov    %eax,(%esp)
0843e5d7 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e5dc +0x7c:  mov    0xc(%ebp),%edx
0843e5df +0x7f:  mov    %edx,0x4(%esp)
0843e5e3 +0x83:  mov    %eax,(%esp)
0843e5e6 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843e5eb +0x8b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843e5f0 +0x90:  lea    -0x10(%ebp),%edx
0843e5f3 +0x93:  mov    %edx,0x8(%esp)
0843e5f7 +0x97:  movl   $0x2,0x4(%esp)
0843e5ff +0x9f:  mov    %eax,(%esp)
0843e602 +0xa2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843e607 +0xa7:  jmp    0843e624 <+0xc4>
0843e609 +0xa9:  mov    %edx,%ebx
0843e60b +0xab:  mov    %eax,%esi
0843e60d +0xad:  lea    -0x10(%ebp),%eax
0843e610 +0xb0:  mov    %eax,(%esp)
0843e613 +0xb3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843e618 +0xb8:  mov    %esi,%eax
0843e61a +0xba:  mov    %ebx,%edx
0843e61c +0xbc:  mov    %eax,(%esp)
0843e61f +0xbf:  call   08ae3750 <_Unwind_Resume>
0843e624 +0xc4:  lea    -0x10(%ebp),%eax
0843e627 +0xc7:  mov    %eax,(%esp)
0843e62a +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843e62f +0xcf:  add    $0x20,%esp
0843e632 +0xd2:  pop    %ebx
0843e633 +0xd3:  pop    %esi
0843e634 +0xd4:  pop    %ebp
0843e635 +0xd5:  ret
```

## 反编译 C

```c
// DB_UpdatePurchaseCashItemBonus::makeRequest @ 0x843e560

/* DB_UpdatePurchaseCashItemBonus::makeRequest(int, unsigned int) */

void DB_UpdatePurchaseCashItemBonus::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9415);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843e5b2 to 0843e606 has its CatchHandler @ 0843e609 */
  CStreamGuard::operator<<(pCVar2,0x23c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
