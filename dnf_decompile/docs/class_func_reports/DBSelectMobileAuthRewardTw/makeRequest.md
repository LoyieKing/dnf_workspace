# makeRequest

`_ZN26DBSelectMobileAuthRewardTw11makeRequestEP5CUser`

`DBSelectMobileAuthRewardTw::makeRequest(CUser*)`

| 类 | 地址 |
|---|---|
| `DBSelectMobileAuthRewardTw` | `0x0815c586` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815c586  _ZN26DBSelectMobileAuthRewardTw11makeRequestEP5CUser
#           DBSelectMobileAuthRewardTw::makeRequest(CUser*)
# range [0x0815c586, 0x0815c6a7]
0815c586 +0x000:  push   %ebp
0815c587 +0x001:  mov    %esp,%ebp
0815c589 +0x003:  push   %esi
0815c58a +0x004:  push   %ebx
0815c58b +0x005:  sub    $0x30,%esp
0815c58e +0x008:  mov    0x8(%ebp),%eax
0815c591 +0x00b:  movzbl 0x8ec31(%eax),%eax
0815c598 +0x012:  test   %al,%al
0815c59a +0x014:  jne    0815c6a0 <+0x11a>
0815c5a0 +0x01a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815c5a5 +0x01f:  movl   $0x294,0x8(%esp)
0815c5ad +0x027:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815c5b5 +0x02f:  mov    %eax,(%esp)
0815c5b8 +0x032:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815c5bd +0x037:  movl   $0x1,0x8(%esp)
0815c5c5 +0x03f:  mov    %eax,0x4(%esp)
0815c5c9 +0x043:  lea    -0x24(%ebp),%eax
0815c5cc +0x046:  mov    %eax,(%esp)
0815c5cf +0x049:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815c5d4 +0x04e:  mov    0x8(%ebp),%eax
0815c5d7 +0x051:  mov    %eax,(%esp)
0815c5da +0x054:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0815c5df +0x059:  mov    %eax,0x8(%esp)
0815c5e3 +0x05d:  movl   $0xc,0x4(%esp)
0815c5eb +0x065:  lea    -0x24(%ebp),%eax
0815c5ee +0x068:  mov    %eax,(%esp)
0815c5f1 +0x06b:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815c5f6 +0x070:  lea    -0x24(%ebp),%eax
0815c5f9 +0x073:  mov    %eax,(%esp)
0815c5fc +0x076:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0815c601 +0x07b:  mov    %eax,(%esp)
0815c604 +0x07e:  call   0815ebca <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xe3e>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xe3e
0815c609 +0x083:  mov    %eax,-0xc(%ebp)
0815c60c +0x086:  cmpl   $0x0,-0xc(%ebp)
0815c610 +0x08a:  jne    0815c64a <+0xc4>
0815c612 +0x08c:  movl   $0x0,0xc(%esp)
0815c61a +0x094:  movl   $0x29a,0x8(%esp)
0815c622 +0x09c:  movl   $&_ZZN26DBSelectMobileAuthRewardTw11makeRequestEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0815c62a +0x0a4:  lea    -0x1c(%ebp),%eax
0815c62d +0x0a7:  mov    %eax,(%esp)
0815c630 +0x0aa:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815c635 +0x0af:  movl   $"[Taiwan, MobileAuth] msg is null",0x4(%esp)
0815c63d +0x0b7:  lea    -0x1c(%ebp),%eax
0815c640 +0x0ba:  mov    %eax,(%esp)
0815c643 +0x0bd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815c648 +0x0c2:  jmp    0815c693 <+0x10d>
0815c64a +0x0c4:  mov    0x8(%ebp),%eax
0815c64d +0x0c7:  mov    %eax,(%esp)
0815c650 +0x0ca:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0815c655 +0x0cf:  mov    -0xc(%ebp),%edx
0815c658 +0x0d2:  mov    %eax,(%edx)
0815c65a +0x0d4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815c65f +0x0d9:  lea    -0x24(%ebp),%edx
0815c662 +0x0dc:  mov    %edx,0x8(%esp)
0815c666 +0x0e0:  movl   $0x2,0x4(%esp)
0815c66e +0x0e8:  mov    %eax,(%esp)
0815c671 +0x0eb:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815c676 +0x0f0:  jmp    0815c693 <+0x10d>
0815c678 +0x0f2:  mov    %edx,%ebx
0815c67a +0x0f4:  mov    %eax,%esi
0815c67c +0x0f6:  lea    -0x24(%ebp),%eax
0815c67f +0x0f9:  mov    %eax,(%esp)
0815c682 +0x0fc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815c687 +0x101:  mov    %esi,%eax
0815c689 +0x103:  mov    %ebx,%edx
0815c68b +0x105:  mov    %eax,(%esp)
0815c68e +0x108:  call   08ae3750 <_Unwind_Resume>
0815c693 +0x10d:  lea    -0x24(%ebp),%eax
0815c696 +0x110:  mov    %eax,(%esp)
0815c699 +0x113:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815c69e +0x118:  jmp    0815c6a1 <+0x11b>
0815c6a0 +0x11a:  nop
0815c6a1 +0x11b:  add    $0x30,%esp
0815c6a4 +0x11e:  pop    %ebx
0815c6a5 +0x11f:  pop    %esi
0815c6a6 +0x120:  pop    %ebp
0815c6a7 +0x121:  ret
```

## 反编译 C

```c
// DBSelectMobileAuthRewardTw::makeRequest @ 0x815c586

/* DBSelectMobileAuthRewardTw::makeRequest(CUser*) */

void DBSelectMobileAuthRewardTw::makeRequest(CUser *param_1)

{
  Stream *pSVar1;
  undefined4 uVar2;
  CStreamGuard *this;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  MSG *local_10;
  
  if (param_1[0x8ec31] == (CUser)0x0) {
    pSVar1 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x294);
    CStreamGuard::CStreamGuard(local_28,pSVar1,true);
    uVar2 = CUser::GetUID(param_1);
                    /* try { // try from 0815c5f1 to 0815c675 has its CatchHandler @ 0815c678 */
    Taiwan::internal_stream(local_28,0xc,uVar2);
    this = (CStreamGuard *)CStreamGuard::operator->(local_28);
    local_10 = CStreamGuard::GetInBuffer<DBSelectMobileAuthRewardTw::MSG>(this);
    if (local_10 == (MSG *)0x0) {
      cMyTrace::cMyTrace(local_20,"static void DBSelectMobileAuthRewardTw::makeRequest(CUser*)",
                         0x29a,0);
      cMyTrace::operator()(local_20,"[Taiwan, MobileAuth] msg is null");
    }
    else {
      uVar2 = CUser::get_acc_id(param_1);
      *(undefined4 *)local_10 = uVar2;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
    }
    CStreamGuard::~CStreamGuard(local_28);
  }
  return;
}
```
