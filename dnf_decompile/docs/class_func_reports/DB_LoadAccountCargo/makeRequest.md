# makeRequest

`_ZN19DB_LoadAccountCargo11makeRequestEij`

`DB_LoadAccountCargo::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_LoadAccountCargo` | `0x0843b6ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843b6ec  _ZN19DB_LoadAccountCargo11makeRequestEij
#           DB_LoadAccountCargo::makeRequest(int, unsigned int)
# range [0x0843b6ec, 0x0843b7c1]
0843b6ec +0x00:  push   %ebp
0843b6ed +0x01:  mov    %esp,%ebp
0843b6ef +0x03:  push   %esi
0843b6f0 +0x04:  push   %ebx
0843b6f1 +0x05:  sub    $0x20,%esp
0843b6f4 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843b6f9 +0x0d:  movl   $0x8c75,0x8(%esp)
0843b701 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843b709 +0x1d:  mov    %eax,(%esp)
0843b70c +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843b711 +0x25:  movl   $0x1,0x8(%esp)
0843b719 +0x2d:  mov    %eax,0x4(%esp)
0843b71d +0x31:  lea    -0x10(%ebp),%eax
0843b720 +0x34:  mov    %eax,(%esp)
0843b723 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843b728 +0x3c:  lea    -0x10(%ebp),%eax
0843b72b +0x3f:  mov    %eax,(%esp)
0843b72e +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b733 +0x47:  movl   $0x1f2,0x4(%esp)
0843b73b +0x4f:  mov    %eax,(%esp)
0843b73e +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843b743 +0x57:  lea    -0x10(%ebp),%eax
0843b746 +0x5a:  mov    %eax,(%esp)
0843b749 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b74e +0x62:  mov    0x8(%ebp),%edx
0843b751 +0x65:  mov    %edx,0x4(%esp)
0843b755 +0x69:  mov    %eax,(%esp)
0843b758 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843b75d +0x71:  lea    -0x10(%ebp),%eax
0843b760 +0x74:  mov    %eax,(%esp)
0843b763 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843b768 +0x7c:  mov    0xc(%ebp),%edx
0843b76b +0x7f:  mov    %edx,0x4(%esp)
0843b76f +0x83:  mov    %eax,(%esp)
0843b772 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843b777 +0x8b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843b77c +0x90:  lea    -0x10(%ebp),%edx
0843b77f +0x93:  mov    %edx,0x8(%esp)
0843b783 +0x97:  movl   $0x2,0x4(%esp)
0843b78b +0x9f:  mov    %eax,(%esp)
0843b78e +0xa2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843b793 +0xa7:  jmp    0843b7b0 <+0xc4>
0843b795 +0xa9:  mov    %edx,%ebx
0843b797 +0xab:  mov    %eax,%esi
0843b799 +0xad:  lea    -0x10(%ebp),%eax
0843b79c +0xb0:  mov    %eax,(%esp)
0843b79f +0xb3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843b7a4 +0xb8:  mov    %esi,%eax
0843b7a6 +0xba:  mov    %ebx,%edx
0843b7a8 +0xbc:  mov    %eax,(%esp)
0843b7ab +0xbf:  call   08ae3750 <_Unwind_Resume>
0843b7b0 +0xc4:  lea    -0x10(%ebp),%eax
0843b7b3 +0xc7:  mov    %eax,(%esp)
0843b7b6 +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843b7bb +0xcf:  add    $0x20,%esp
0843b7be +0xd2:  pop    %ebx
0843b7bf +0xd3:  pop    %esi
0843b7c0 +0xd4:  pop    %ebp
0843b7c1 +0xd5:  ret
```

## 反编译 C

```c
// DB_LoadAccountCargo::makeRequest @ 0x843b6ec

/* DB_LoadAccountCargo::makeRequest(int, unsigned int) */

void DB_LoadAccountCargo::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8c75);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843b73e to 0843b792 has its CatchHandler @ 0843b795 */
  CStreamGuard::operator<<(pCVar2,0x1f2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
