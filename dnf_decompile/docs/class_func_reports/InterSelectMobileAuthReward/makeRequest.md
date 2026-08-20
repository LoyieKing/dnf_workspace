# makeRequest

`_ZN27InterSelectMobileAuthReward11makeRequestEijb`

`InterSelectMobileAuthReward::makeRequest(int, unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `InterSelectMobileAuthReward` | `0x081615ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081615ae  _ZN27InterSelectMobileAuthReward11makeRequestEijb
#           InterSelectMobileAuthReward::makeRequest(int, unsigned int, bool)
# range [0x081615ae, 0x081616cd]
081615ae +0x000:  push   %ebp
081615af +0x001:  mov    %esp,%ebp
081615b1 +0x003:  push   %esi
081615b2 +0x004:  push   %ebx
081615b3 +0x005:  sub    $0x40,%esp
081615b6 +0x008:  mov    0x10(%ebp),%eax
081615b9 +0x00b:  mov    %al,-0x1c(%ebp)
081615bc +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081615c1 +0x013:  movl   $0x186,0x8(%esp)
081615c9 +0x01b:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
081615d1 +0x023:  mov    %eax,(%esp)
081615d4 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081615d9 +0x02b:  movl   $0x1,0x8(%esp)
081615e1 +0x033:  mov    %eax,0x4(%esp)
081615e5 +0x037:  lea    -0x14(%ebp),%eax
081615e8 +0x03a:  mov    %eax,(%esp)
081615eb +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081615f0 +0x042:  mov    0x8(%ebp),%eax
081615f3 +0x045:  mov    %eax,0x8(%esp)
081615f7 +0x049:  movl   $0xc,0x4(%esp)
081615ff +0x051:  lea    -0x14(%ebp),%eax
08161602 +0x054:  mov    %eax,(%esp)
08161605 +0x057:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0816160a +0x05c:  lea    -0x14(%ebp),%eax
0816160d +0x05f:  mov    %eax,(%esp)
08161610 +0x062:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08161615 +0x067:  mov    %eax,(%esp)
08161618 +0x06a:  call   08162802 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa70>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa70
0816161d +0x06f:  mov    %eax,-0xc(%ebp)
08161620 +0x072:  cmpl   $0x0,-0xc(%ebp)
08161624 +0x076:  jne    08161671 <+0xc3>
08161626 +0x078:  cmpb   $0x0,-0x1c(%ebp)
0816162a +0x07c:  je     08161633 <+0x85>
0816162c +0x07e:  mov    $0x1,%eax
08161631 +0x083:  jmp    08161638 <+0x8a>
08161633 +0x085:  mov    $0x0,%eax
08161638 +0x08a:  mov    %eax,0x18(%esp)
0816163c +0x08e:  mov    0xc(%ebp),%eax
0816163f +0x091:  mov    %eax,0x14(%esp)
08161643 +0x095:  movl   $"[Taiwan, MobileAuth] m_id:%d rewarded:%d",0x10(%esp)
0816164b +0x09d:  movl   $0x18b,0xc(%esp)
08161653 +0x0a5:  movl   $&_ZZN27InterSelectMobileAuthReward11makeRequestEijbE19__PRETTY_FUNCTION__,0x8(%esp)
0816165b +0x0ad:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
08161663 +0x0b5:  movl   $0x1,(%esp)
0816166a +0x0bc:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816166f +0x0c1:  jmp    081616bc <+0x10e>
08161671 +0x0c3:  mov    -0xc(%ebp),%eax
08161674 +0x0c6:  mov    0xc(%ebp),%edx
08161677 +0x0c9:  mov    %edx,(%eax)
08161679 +0x0cb:  mov    -0xc(%ebp),%eax
0816167c +0x0ce:  movzbl -0x1c(%ebp),%edx
08161680 +0x0d2:  mov    %dl,0x4(%eax)
08161683 +0x0d5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08161688 +0x0da:  lea    -0x14(%ebp),%edx
0816168b +0x0dd:  mov    %edx,0x8(%esp)
0816168f +0x0e1:  movl   $0x1,0x4(%esp)
08161697 +0x0e9:  mov    %eax,(%esp)
0816169a +0x0ec:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0816169f +0x0f1:  jmp    081616bc <+0x10e>
081616a1 +0x0f3:  mov    %edx,%ebx
081616a3 +0x0f5:  mov    %eax,%esi
081616a5 +0x0f7:  lea    -0x14(%ebp),%eax
081616a8 +0x0fa:  mov    %eax,(%esp)
081616ab +0x0fd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081616b0 +0x102:  mov    %esi,%eax
081616b2 +0x104:  mov    %ebx,%edx
081616b4 +0x106:  mov    %eax,(%esp)
081616b7 +0x109:  call   08ae3750 <_Unwind_Resume>
081616bc +0x10e:  lea    -0x14(%ebp),%eax
081616bf +0x111:  mov    %eax,(%esp)
081616c2 +0x114:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081616c7 +0x119:  add    $0x40,%esp
081616ca +0x11c:  pop    %ebx
081616cb +0x11d:  pop    %esi
081616cc +0x11e:  pop    %ebp
081616cd +0x11f:  ret
```

## 反编译 C

```c
// InterSelectMobileAuthReward::makeRequest @ 0x81615ae

/* InterSelectMobileAuthReward::makeRequest(int, unsigned int, bool) */

void InterSelectMobileAuthReward::makeRequest(int param_1,uint param_2,bool param_3)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  Msg *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x186);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 08161605 to 0816169e has its CatchHandler @ 081616a1 */
  Taiwan::internal_stream(local_18,0xc,param_1);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<InterSelectMobileAuthReward::Msg>(this);
  if (local_10 == (Msg *)0x0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "static void InterSelectMobileAuthReward::makeRequest(int, memberIdentificationNumber_t, bool)"
               ,0x18b,"[Taiwan, MobileAuth] m_id:%d rewarded:%d",param_2,(uint)param_3);
  }
  else {
    *(uint *)local_10 = param_2;
    local_10[4] = (Msg)param_3;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
