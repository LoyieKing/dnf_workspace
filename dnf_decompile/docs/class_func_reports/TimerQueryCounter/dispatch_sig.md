# dispatch_sig

`_ZN17TimerQueryCounter12dispatch_sigEiij`

`TimerQueryCounter::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerQueryCounter` | `0x08635a60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635a60  _ZN17TimerQueryCounter12dispatch_sigEiij
#           TimerQueryCounter::dispatch_sig(int, int, unsigned int)
# range [0x08635a60, 0x08635bdb]
08635a60 +0x000:  push   %ebp
08635a61 +0x001:  mov    %esp,%ebp
08635a63 +0x003:  push   %esi
08635a64 +0x004:  push   %ebx
08635a65 +0x005:  sub    $0x20,%esp
08635a68 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08635a6d +0x00d:  movl   $0x97b,0x8(%esp)
08635a75 +0x015:  movl   $"TimerDispatcher.cpp",0x4(%esp)
08635a7d +0x01d:  mov    %eax,(%esp)
08635a80 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08635a85 +0x025:  movl   $0x1,0x8(%esp)
08635a8d +0x02d:  mov    %eax,0x4(%esp)
08635a91 +0x031:  lea    -0x10(%ebp),%eax
08635a94 +0x034:  mov    %eax,(%esp)
08635a97 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08635a9c +0x03c:  lea    -0x10(%ebp),%eax
08635a9f +0x03f:  mov    %eax,(%esp)
08635aa2 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08635aa7 +0x047:  movl   $0x7b,0x4(%esp)
08635aaf +0x04f:  mov    %eax,(%esp)
08635ab2 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08635ab7 +0x057:  lea    -0x10(%ebp),%eax
08635aba +0x05a:  mov    %eax,(%esp)
08635abd +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08635ac2 +0x062:  movl   $0xffffffff,0x4(%esp)
08635aca +0x06a:  mov    %eax,(%esp)
08635acd +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08635ad2 +0x072:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08635ad7 +0x077:  lea    -0x10(%ebp),%edx
08635ada +0x07a:  mov    %edx,0x8(%esp)
08635ade +0x07e:  movl   $0x4,0x4(%esp)
08635ae6 +0x086:  mov    %eax,(%esp)
08635ae9 +0x089:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08635aee +0x08e:  jmp    08635b0b <+0xab>
08635af0 +0x090:  mov    %edx,%ebx
08635af2 +0x092:  mov    %eax,%esi
08635af4 +0x094:  lea    -0x10(%ebp),%eax
08635af7 +0x097:  mov    %eax,(%esp)
08635afa +0x09a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08635aff +0x09f:  mov    %esi,%eax
08635b01 +0x0a1:  mov    %ebx,%edx
08635b03 +0x0a3:  mov    %eax,(%esp)
08635b06 +0x0a6:  call   08ae3750 <_Unwind_Resume>
08635b0b +0x0ab:  lea    -0x10(%ebp),%eax
08635b0e +0x0ae:  mov    %eax,(%esp)
08635b11 +0x0b1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08635b16 +0x0b6:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08635b1b +0x0bb:  movl   $0x981,0x8(%esp)
08635b23 +0x0c3:  movl   $"TimerDispatcher.cpp",0x4(%esp)
08635b2b +0x0cb:  mov    %eax,(%esp)
08635b2e +0x0ce:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08635b33 +0x0d3:  movl   $0x1,0x8(%esp)
08635b3b +0x0db:  mov    %eax,0x4(%esp)
08635b3f +0x0df:  lea    -0x18(%ebp),%eax
08635b42 +0x0e2:  mov    %eax,(%esp)
08635b45 +0x0e5:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08635b4a +0x0ea:  lea    -0x18(%ebp),%eax
08635b4d +0x0ed:  mov    %eax,(%esp)
08635b50 +0x0f0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08635b55 +0x0f5:  movl   $0x7c,0x4(%esp)
08635b5d +0x0fd:  mov    %eax,(%esp)
08635b60 +0x100:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08635b65 +0x105:  lea    -0x18(%ebp),%eax
08635b68 +0x108:  mov    %eax,(%esp)
08635b6b +0x10b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08635b70 +0x110:  movl   $0xffffffff,0x4(%esp)
08635b78 +0x118:  mov    %eax,(%esp)
08635b7b +0x11b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08635b80 +0x120:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08635b85 +0x125:  lea    -0x18(%ebp),%edx
08635b88 +0x128:  mov    %edx,0x8(%esp)
08635b8c +0x12c:  movl   $0x2,0x4(%esp)
08635b94 +0x134:  mov    %eax,(%esp)
08635b97 +0x137:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08635b9c +0x13c:  jmp    08635bb9 <+0x159>
08635b9e +0x13e:  mov    %edx,%ebx
08635ba0 +0x140:  mov    %eax,%esi
08635ba2 +0x142:  lea    -0x18(%ebp),%eax
08635ba5 +0x145:  mov    %eax,(%esp)
08635ba8 +0x148:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08635bad +0x14d:  mov    %esi,%eax
08635baf +0x14f:  mov    %ebx,%edx
08635bb1 +0x151:  mov    %eax,(%esp)
08635bb4 +0x154:  call   08ae3750 <_Unwind_Resume>
08635bb9 +0x159:  lea    -0x18(%ebp),%eax
08635bbc +0x15c:  mov    %eax,(%esp)
08635bbf +0x15f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08635bc4 +0x164:  mov    0x8(%ebp),%eax
08635bc7 +0x167:  mov    %eax,(%esp)
08635bca +0x16a:  call   08635bdc <_ZN17TimerQueryCounter15RegistNextTimerEv>  ; TimerQueryCounter::RegistNextTimer()
08635bcf +0x16f:  mov    $0x1,%eax
08635bd4 +0x174:  add    $0x20,%esp
08635bd7 +0x177:  pop    %ebx
08635bd8 +0x178:  pop    %esi
08635bd9 +0x179:  pop    %ebp
08635bda +0x17a:  ret
08635bdb +0x17b:  nop
```

## 反编译 C

```c
// TimerQueryCounter::dispatch_sig @ 0x8635a60

/* TimerQueryCounter::dispatch_sig(int, int, unsigned int) */

undefined4 TimerQueryCounter::dispatch_sig(int param_1,int param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_1c [8];
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0x97b);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08635ab2 to 08635aed has its CatchHandler @ 08635af0 */
  CStreamGuard::operator<<(pCVar2,0x7b);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0x981);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08635b60 to 08635b9b has its CatchHandler @ 08635b9e */
  CStreamGuard::operator<<(pCVar2,0x7c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  RegistNextTimer();
  return 1;
}
```
