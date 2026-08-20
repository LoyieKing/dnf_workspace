# makeRequest

`_ZN37DB_UpdateGoblinPadAdvicePwdRewardTime11makeRequestEij`

`DB_UpdateGoblinPadAdvicePwdRewardTime::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateGoblinPadAdvicePwdRewardTime` | `0x0843f684` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843f684  _ZN37DB_UpdateGoblinPadAdvicePwdRewardTime11makeRequestEij
#           DB_UpdateGoblinPadAdvicePwdRewardTime::makeRequest(int, unsigned int)
# range [0x0843f684, 0x0843f759]
0843f684 +0x00:  push   %ebp
0843f685 +0x01:  mov    %esp,%ebp
0843f687 +0x03:  push   %esi
0843f688 +0x04:  push   %ebx
0843f689 +0x05:  sub    $0x20,%esp
0843f68c +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843f691 +0x0d:  movl   $0x9927,0x8(%esp)
0843f699 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843f6a1 +0x1d:  mov    %eax,(%esp)
0843f6a4 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843f6a9 +0x25:  movl   $0x1,0x8(%esp)
0843f6b1 +0x2d:  mov    %eax,0x4(%esp)
0843f6b5 +0x31:  lea    -0x10(%ebp),%eax
0843f6b8 +0x34:  mov    %eax,(%esp)
0843f6bb +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843f6c0 +0x3c:  lea    -0x10(%ebp),%eax
0843f6c3 +0x3f:  mov    %eax,(%esp)
0843f6c6 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843f6cb +0x47:  movl   $0x247,0x4(%esp)
0843f6d3 +0x4f:  mov    %eax,(%esp)
0843f6d6 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843f6db +0x57:  lea    -0x10(%ebp),%eax
0843f6de +0x5a:  mov    %eax,(%esp)
0843f6e1 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843f6e6 +0x62:  mov    0x8(%ebp),%edx
0843f6e9 +0x65:  mov    %edx,0x4(%esp)
0843f6ed +0x69:  mov    %eax,(%esp)
0843f6f0 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843f6f5 +0x71:  lea    -0x10(%ebp),%eax
0843f6f8 +0x74:  mov    %eax,(%esp)
0843f6fb +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843f700 +0x7c:  mov    0xc(%ebp),%edx
0843f703 +0x7f:  mov    %edx,0x4(%esp)
0843f707 +0x83:  mov    %eax,(%esp)
0843f70a +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843f70f +0x8b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843f714 +0x90:  lea    -0x10(%ebp),%edx
0843f717 +0x93:  mov    %edx,0x8(%esp)
0843f71b +0x97:  movl   $0x2,0x4(%esp)
0843f723 +0x9f:  mov    %eax,(%esp)
0843f726 +0xa2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843f72b +0xa7:  jmp    0843f748 <+0xc4>
0843f72d +0xa9:  mov    %edx,%ebx
0843f72f +0xab:  mov    %eax,%esi
0843f731 +0xad:  lea    -0x10(%ebp),%eax
0843f734 +0xb0:  mov    %eax,(%esp)
0843f737 +0xb3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843f73c +0xb8:  mov    %esi,%eax
0843f73e +0xba:  mov    %ebx,%edx
0843f740 +0xbc:  mov    %eax,(%esp)
0843f743 +0xbf:  call   08ae3750 <_Unwind_Resume>
0843f748 +0xc4:  lea    -0x10(%ebp),%eax
0843f74b +0xc7:  mov    %eax,(%esp)
0843f74e +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843f753 +0xcf:  add    $0x20,%esp
0843f756 +0xd2:  pop    %ebx
0843f757 +0xd3:  pop    %esi
0843f758 +0xd4:  pop    %ebp
0843f759 +0xd5:  ret
```

## 反编译 C

```c
// DB_UpdateGoblinPadAdvicePwdRewardTime::makeRequest @ 0x843f684

/* DB_UpdateGoblinPadAdvicePwdRewardTime::makeRequest(int, unsigned int) */

void DB_UpdateGoblinPadAdvicePwdRewardTime::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9927);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843f6d6 to 0843f72a has its CatchHandler @ 0843f72d */
  CStreamGuard::operator<<(pCVar2,0x247);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
