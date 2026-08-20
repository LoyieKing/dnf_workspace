# makeRequest

`_ZN26DBInsertGiveBoxEventReward11makeRequestEP5CUser`

`DBInsertGiveBoxEventReward::makeRequest(CUser*)`

| 类 | 地址 |
|---|---|
| `DBInsertGiveBoxEventReward` | `0x0815d2c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815d2c8  _ZN26DBInsertGiveBoxEventReward11makeRequestEP5CUser
#           DBInsertGiveBoxEventReward::makeRequest(CUser*)
# range [0x0815d2c8, 0x0815d3ed]
0815d2c8 +0x000:  push   %ebp
0815d2c9 +0x001:  mov    %esp,%ebp
0815d2cb +0x003:  push   %esi
0815d2cc +0x004:  push   %ebx
0815d2cd +0x005:  sub    $0x30,%esp
0815d2d0 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815d2d5 +0x00d:  movl   $0x369,0x8(%esp)
0815d2dd +0x015:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815d2e5 +0x01d:  mov    %eax,(%esp)
0815d2e8 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815d2ed +0x025:  movl   $0x1,0x8(%esp)
0815d2f5 +0x02d:  mov    %eax,0x4(%esp)
0815d2f9 +0x031:  lea    -0x24(%ebp),%eax
0815d2fc +0x034:  mov    %eax,(%esp)
0815d2ff +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815d304 +0x03c:  mov    0x8(%ebp),%eax
0815d307 +0x03f:  mov    %eax,(%esp)
0815d30a +0x042:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0815d30f +0x047:  mov    %eax,0x8(%esp)
0815d313 +0x04b:  movl   $0x10,0x4(%esp)
0815d31b +0x053:  lea    -0x24(%ebp),%eax
0815d31e +0x056:  mov    %eax,(%esp)
0815d321 +0x059:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815d326 +0x05e:  lea    -0x24(%ebp),%eax
0815d329 +0x061:  mov    %eax,(%esp)
0815d32c +0x064:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0815d331 +0x069:  mov    %eax,(%esp)
0815d334 +0x06c:  call   0815ed08 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xf7c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xf7c
0815d339 +0x071:  mov    %eax,-0xc(%ebp)
0815d33c +0x074:  cmpl   $0x0,-0xc(%ebp)
0815d340 +0x078:  jne    0815d37a <+0xb2>
0815d342 +0x07a:  movl   $0x0,0xc(%esp)
0815d34a +0x082:  movl   $0x36e,0x8(%esp)
0815d352 +0x08a:  movl   $&_ZZN26DBInsertGiveBoxEventReward11makeRequestEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0815d35a +0x092:  lea    -0x1c(%ebp),%eax
0815d35d +0x095:  mov    %eax,(%esp)
0815d360 +0x098:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815d365 +0x09d:  movl   $"[Taiwan, Event] msg is null",0x4(%esp)
0815d36d +0x0a5:  lea    -0x1c(%ebp),%eax
0815d370 +0x0a8:  mov    %eax,(%esp)
0815d373 +0x0ab:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815d378 +0x0b0:  jmp    0815d3dc <+0x114>
0815d37a +0x0b2:  mov    0x8(%ebp),%eax
0815d37d +0x0b5:  mov    %eax,(%esp)
0815d380 +0x0b8:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0815d385 +0x0bd:  mov    -0xc(%ebp),%edx
0815d388 +0x0c0:  mov    %eax,(%edx)
0815d38a +0x0c2:  movl   $0xffffffff,0x4(%esp)
0815d392 +0x0ca:  mov    0x8(%ebp),%eax
0815d395 +0x0cd:  mov    %eax,(%esp)
0815d398 +0x0d0:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0815d39d +0x0d5:  mov    -0xc(%ebp),%edx
0815d3a0 +0x0d8:  mov    %eax,0x4(%edx)
0815d3a3 +0x0db:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815d3a8 +0x0e0:  lea    -0x24(%ebp),%edx
0815d3ab +0x0e3:  mov    %edx,0x8(%esp)
0815d3af +0x0e7:  movl   $0x2,0x4(%esp)
0815d3b7 +0x0ef:  mov    %eax,(%esp)
0815d3ba +0x0f2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815d3bf +0x0f7:  jmp    0815d3dc <+0x114>
0815d3c1 +0x0f9:  mov    %edx,%ebx
0815d3c3 +0x0fb:  mov    %eax,%esi
0815d3c5 +0x0fd:  lea    -0x24(%ebp),%eax
0815d3c8 +0x100:  mov    %eax,(%esp)
0815d3cb +0x103:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815d3d0 +0x108:  mov    %esi,%eax
0815d3d2 +0x10a:  mov    %ebx,%edx
0815d3d4 +0x10c:  mov    %eax,(%esp)
0815d3d7 +0x10f:  call   08ae3750 <_Unwind_Resume>
0815d3dc +0x114:  lea    -0x24(%ebp),%eax
0815d3df +0x117:  mov    %eax,(%esp)
0815d3e2 +0x11a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815d3e7 +0x11f:  add    $0x30,%esp
0815d3ea +0x122:  pop    %ebx
0815d3eb +0x123:  pop    %esi
0815d3ec +0x124:  pop    %ebp
0815d3ed +0x125:  ret
```

## 反编译 C

```c
// DBInsertGiveBoxEventReward::makeRequest @ 0x815d2c8

/* DBInsertGiveBoxEventReward::makeRequest(CUser*) */

void DBInsertGiveBoxEventReward::makeRequest(CUser *param_1)

{
  Stream *pSVar1;
  undefined4 uVar2;
  CStreamGuard *this;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  MSG *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x369);
  CStreamGuard::CStreamGuard(local_28,pSVar1,true);
  uVar2 = CUser::GetUID(param_1);
                    /* try { // try from 0815d321 to 0815d3be has its CatchHandler @ 0815d3c1 */
  Taiwan::internal_stream(local_28,0x10,uVar2);
  this = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<DBInsertGiveBoxEventReward::MSG>(this);
  if (local_10 == (MSG *)0x0) {
    cMyTrace::cMyTrace(local_20,"static void DBInsertGiveBoxEventReward::makeRequest(CUser*)",0x36e,
                       0);
    cMyTrace::operator()(local_20,"[Taiwan, Event] msg is null");
  }
  else {
    uVar2 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_10 = uVar2;
    uVar2 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_10 + 4) = uVar2;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  }
  CStreamGuard::~CStreamGuard(local_28);
  return;
}
```
