# makeRequest

`_ZN25DBUpdatePcroomDailyReward11makeRequestEP5CUser`

`DBUpdatePcroomDailyReward::makeRequest(CUser*)`

| 类 | 地址 |
|---|---|
| `DBUpdatePcroomDailyReward` | `0x0815cf06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815cf06  _ZN25DBUpdatePcroomDailyReward11makeRequestEP5CUser
#           DBUpdatePcroomDailyReward::makeRequest(CUser*)
# range [0x0815cf06, 0x0815d023]
0815cf06 +0x000:  push   %ebp
0815cf07 +0x001:  mov    %esp,%ebp
0815cf09 +0x003:  push   %esi
0815cf0a +0x004:  push   %ebx
0815cf0b +0x005:  sub    $0x30,%esp
0815cf0e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815cf13 +0x00d:  movl   $0x325,0x8(%esp)
0815cf1b +0x015:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815cf23 +0x01d:  mov    %eax,(%esp)
0815cf26 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815cf2b +0x025:  movl   $0x1,0x8(%esp)
0815cf33 +0x02d:  mov    %eax,0x4(%esp)
0815cf37 +0x031:  lea    -0x24(%ebp),%eax
0815cf3a +0x034:  mov    %eax,(%esp)
0815cf3d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815cf42 +0x03c:  mov    0x8(%ebp),%eax
0815cf45 +0x03f:  mov    %eax,(%esp)
0815cf48 +0x042:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0815cf4d +0x047:  mov    %eax,0x8(%esp)
0815cf51 +0x04b:  movl   $0xe,0x4(%esp)
0815cf59 +0x053:  lea    -0x24(%ebp),%eax
0815cf5c +0x056:  mov    %eax,(%esp)
0815cf5f +0x059:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815cf64 +0x05e:  lea    -0x24(%ebp),%eax
0815cf67 +0x061:  mov    %eax,(%esp)
0815cf6a +0x064:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0815cf6f +0x069:  mov    %eax,(%esp)
0815cf72 +0x06c:  call   0815ec9e <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xf12>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xf12
0815cf77 +0x071:  mov    %eax,-0xc(%ebp)
0815cf7a +0x074:  cmpl   $0x0,-0xc(%ebp)
0815cf7e +0x078:  jne    0815cfb8 <+0xb2>
0815cf80 +0x07a:  movl   $0x0,0xc(%esp)
0815cf88 +0x082:  movl   $0x32b,0x8(%esp)
0815cf90 +0x08a:  movl   $&_ZZN25DBUpdatePcroomDailyReward11makeRequestEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0815cf98 +0x092:  lea    -0x1c(%ebp),%eax
0815cf9b +0x095:  mov    %eax,(%esp)
0815cf9e +0x098:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815cfa3 +0x09d:  movl   $"[Taiwan, Pcroom] msg is null",0x4(%esp)
0815cfab +0x0a5:  lea    -0x1c(%ebp),%eax
0815cfae +0x0a8:  mov    %eax,(%esp)
0815cfb1 +0x0ab:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815cfb6 +0x0b0:  jmp    0815d011 <+0x10b>
0815cfb8 +0x0b2:  mov    0x8(%ebp),%eax
0815cfbb +0x0b5:  mov    %eax,(%esp)
0815cfbe +0x0b8:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0815cfc3 +0x0bd:  mov    -0xc(%ebp),%edx
0815cfc6 +0x0c0:  mov    %eax,(%edx)
0815cfc8 +0x0c2:  mov    0x8(%ebp),%eax
0815cfcb +0x0c5:  movzbl 0x8ec32(%eax),%edx
0815cfd2 +0x0cc:  mov    -0xc(%ebp),%eax
0815cfd5 +0x0cf:  mov    %dl,0x4(%eax)
0815cfd8 +0x0d2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815cfdd +0x0d7:  lea    -0x24(%ebp),%edx
0815cfe0 +0x0da:  mov    %edx,0x8(%esp)
0815cfe4 +0x0de:  movl   $0x2,0x4(%esp)
0815cfec +0x0e6:  mov    %eax,(%esp)
0815cfef +0x0e9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815cff4 +0x0ee:  jmp    0815d011 <+0x10b>
0815cff6 +0x0f0:  mov    %edx,%ebx
0815cff8 +0x0f2:  mov    %eax,%esi
0815cffa +0x0f4:  lea    -0x24(%ebp),%eax
0815cffd +0x0f7:  mov    %eax,(%esp)
0815d000 +0x0fa:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815d005 +0x0ff:  mov    %esi,%eax
0815d007 +0x101:  mov    %ebx,%edx
0815d009 +0x103:  mov    %eax,(%esp)
0815d00c +0x106:  call   08ae3750 <_Unwind_Resume>
0815d011 +0x10b:  lea    -0x24(%ebp),%eax
0815d014 +0x10e:  mov    %eax,(%esp)
0815d017 +0x111:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815d01c +0x116:  add    $0x30,%esp
0815d01f +0x119:  pop    %ebx
0815d020 +0x11a:  pop    %esi
0815d021 +0x11b:  pop    %ebp
0815d022 +0x11c:  ret
0815d023 +0x11d:  nop
```

## 反编译 C

```c
// DBUpdatePcroomDailyReward::makeRequest @ 0x815cf06

/* DBUpdatePcroomDailyReward::makeRequest(CUser*) */

void DBUpdatePcroomDailyReward::makeRequest(CUser *param_1)

{
  Stream *pSVar1;
  undefined4 uVar2;
  CStreamGuard *this;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  MSG *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x325);
  CStreamGuard::CStreamGuard(local_28,pSVar1,true);
  uVar2 = CUser::GetUID(param_1);
                    /* try { // try from 0815cf5f to 0815cff3 has its CatchHandler @ 0815cff6 */
  Taiwan::internal_stream(local_28,0xe,uVar2);
  this = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<DBUpdatePcroomDailyReward::MSG>(this);
  if (local_10 == (MSG *)0x0) {
    cMyTrace::cMyTrace(local_20,"static void DBUpdatePcroomDailyReward::makeRequest(CUser*)",0x32b,0
                      );
    cMyTrace::operator()(local_20,"[Taiwan, Pcroom] msg is null");
  }
  else {
    uVar2 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_10 = uVar2;
    local_10[4] = *(MSG *)(param_1 + 0x8ec32);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  }
  CStreamGuard::~CStreamGuard(local_28);
  return;
}
```
