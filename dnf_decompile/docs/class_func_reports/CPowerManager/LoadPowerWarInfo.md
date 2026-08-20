# LoadPowerWarInfo

`_ZN13CPowerManager16LoadPowerWarInfoEv`

`CPowerManager::LoadPowerWarInfo()`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x08480d98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08480d98  _ZN13CPowerManager16LoadPowerWarInfoEv
#           CPowerManager::LoadPowerWarInfo()
# range [0x08480d98, 0x08480e77]
08480d98 +0x00:  push   %ebp
08480d99 +0x01:  mov    %esp,%ebp
08480d9b +0x03:  push   %esi
08480d9c +0x04:  push   %ebx
08480d9d +0x05:  sub    $0x20,%esp
08480da0 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08480da5 +0x0d:  movl   $0x3c4,0x8(%esp)
08480dad +0x15:  movl   $"DNF_PowerManager.cpp",0x4(%esp)
08480db5 +0x1d:  mov    %eax,(%esp)
08480db8 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08480dbd +0x25:  movl   $0x1,0x8(%esp)
08480dc5 +0x2d:  mov    %eax,0x4(%esp)
08480dc9 +0x31:  lea    -0x10(%ebp),%eax
08480dcc +0x34:  mov    %eax,(%esp)
08480dcf +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08480dd4 +0x3c:  lea    -0x10(%ebp),%eax
08480dd7 +0x3f:  mov    %eax,(%esp)
08480dda +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08480ddf +0x47:  movl   $0x19b,0x4(%esp)
08480de7 +0x4f:  mov    %eax,(%esp)
08480dea +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08480def +0x57:  lea    -0x10(%ebp),%eax
08480df2 +0x5a:  mov    %eax,(%esp)
08480df5 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08480dfa +0x62:  movl   $0xffffffff,0x4(%esp)
08480e02 +0x6a:  mov    %eax,(%esp)
08480e05 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08480e0a +0x72:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08480e0f +0x77:  mov    0x378(%eax),%ebx
08480e15 +0x7d:  lea    -0x10(%ebp),%eax
08480e18 +0x80:  mov    %eax,(%esp)
08480e1b +0x83:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08480e20 +0x88:  mov    %ebx,0x4(%esp)
08480e24 +0x8c:  mov    %eax,(%esp)
08480e27 +0x8f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08480e2c +0x94:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08480e31 +0x99:  lea    -0x10(%ebp),%edx
08480e34 +0x9c:  mov    %edx,0x8(%esp)
08480e38 +0xa0:  movl   $0x2,0x4(%esp)
08480e40 +0xa8:  mov    %eax,(%esp)
08480e43 +0xab:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08480e48 +0xb0:  jmp    08480e65 <+0xcd>
08480e4a +0xb2:  mov    %edx,%ebx
08480e4c +0xb4:  mov    %eax,%esi
08480e4e +0xb6:  lea    -0x10(%ebp),%eax
08480e51 +0xb9:  mov    %eax,(%esp)
08480e54 +0xbc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08480e59 +0xc1:  mov    %esi,%eax
08480e5b +0xc3:  mov    %ebx,%edx
08480e5d +0xc5:  mov    %eax,(%esp)
08480e60 +0xc8:  call   08ae3750 <_Unwind_Resume>
08480e65 +0xcd:  lea    -0x10(%ebp),%eax
08480e68 +0xd0:  mov    %eax,(%esp)
08480e6b +0xd3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08480e70 +0xd8:  add    $0x20,%esp
08480e73 +0xdb:  pop    %ebx
08480e74 +0xdc:  pop    %esi
08480e75 +0xdd:  pop    %ebp
08480e76 +0xde:  ret
08480e77 +0xdf:  nop
```

## 反编译 C

```c
// CPowerManager::LoadPowerWarInfo @ 0x8480d98

/* CPowerManager::LoadPowerWarInfo() */

void CPowerManager::LoadPowerWarInfo(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DNF_PowerManager.cpp",0x3c4);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08480dea to 08480e47 has its CatchHandler @ 08480e4a */
  CStreamGuard::operator<<(pCVar2,0x19b);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  iVar3 = G_CEnvironment();
  iVar3 = *(int *)(iVar3 + 0x378);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
