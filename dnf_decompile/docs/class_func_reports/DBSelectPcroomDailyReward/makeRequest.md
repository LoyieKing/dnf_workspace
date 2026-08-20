# makeRequest

`_ZN25DBSelectPcroomDailyReward11makeRequestEP5CUser`

`DBSelectPcroomDailyReward::makeRequest(CUser*)`

| 类 | 地址 |
|---|---|
| `DBSelectPcroomDailyReward` | `0x0815c986` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815c986  _ZN25DBSelectPcroomDailyReward11makeRequestEP5CUser
#           DBSelectPcroomDailyReward::makeRequest(CUser*)
# range [0x0815c986, 0x0815ca93]
0815c986 +0x000:  push   %ebp
0815c987 +0x001:  mov    %esp,%ebp
0815c989 +0x003:  push   %esi
0815c98a +0x004:  push   %ebx
0815c98b +0x005:  sub    $0x30,%esp
0815c98e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815c993 +0x00d:  movl   $0x2d9,0x8(%esp)
0815c99b +0x015:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815c9a3 +0x01d:  mov    %eax,(%esp)
0815c9a6 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815c9ab +0x025:  movl   $0x1,0x8(%esp)
0815c9b3 +0x02d:  mov    %eax,0x4(%esp)
0815c9b7 +0x031:  lea    -0x24(%ebp),%eax
0815c9ba +0x034:  mov    %eax,(%esp)
0815c9bd +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815c9c2 +0x03c:  mov    0x8(%ebp),%eax
0815c9c5 +0x03f:  mov    %eax,(%esp)
0815c9c8 +0x042:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0815c9cd +0x047:  mov    %eax,0x8(%esp)
0815c9d1 +0x04b:  movl   $0xd,0x4(%esp)
0815c9d9 +0x053:  lea    -0x24(%ebp),%eax
0815c9dc +0x056:  mov    %eax,(%esp)
0815c9df +0x059:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815c9e4 +0x05e:  lea    -0x24(%ebp),%eax
0815c9e7 +0x061:  mov    %eax,(%esp)
0815c9ea +0x064:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0815c9ef +0x069:  mov    %eax,(%esp)
0815c9f2 +0x06c:  call   0815ec34 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xea8>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xea8
0815c9f7 +0x071:  mov    %eax,-0xc(%ebp)
0815c9fa +0x074:  cmpl   $0x0,-0xc(%ebp)
0815c9fe +0x078:  jne    0815ca38 <+0xb2>
0815ca00 +0x07a:  movl   $0x0,0xc(%esp)
0815ca08 +0x082:  movl   $0x2df,0x8(%esp)
0815ca10 +0x08a:  movl   $&_ZZN25DBSelectPcroomDailyReward11makeRequestEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0815ca18 +0x092:  lea    -0x1c(%ebp),%eax
0815ca1b +0x095:  mov    %eax,(%esp)
0815ca1e +0x098:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815ca23 +0x09d:  movl   $"[Taiwan, Pcroom] msg is null",0x4(%esp)
0815ca2b +0x0a5:  lea    -0x1c(%ebp),%eax
0815ca2e +0x0a8:  mov    %eax,(%esp)
0815ca31 +0x0ab:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815ca36 +0x0b0:  jmp    0815ca81 <+0xfb>
0815ca38 +0x0b2:  mov    0x8(%ebp),%eax
0815ca3b +0x0b5:  mov    %eax,(%esp)
0815ca3e +0x0b8:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0815ca43 +0x0bd:  mov    -0xc(%ebp),%edx
0815ca46 +0x0c0:  mov    %eax,(%edx)
0815ca48 +0x0c2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815ca4d +0x0c7:  lea    -0x24(%ebp),%edx
0815ca50 +0x0ca:  mov    %edx,0x8(%esp)
0815ca54 +0x0ce:  movl   $0x2,0x4(%esp)
0815ca5c +0x0d6:  mov    %eax,(%esp)
0815ca5f +0x0d9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815ca64 +0x0de:  jmp    0815ca81 <+0xfb>
0815ca66 +0x0e0:  mov    %edx,%ebx
0815ca68 +0x0e2:  mov    %eax,%esi
0815ca6a +0x0e4:  lea    -0x24(%ebp),%eax
0815ca6d +0x0e7:  mov    %eax,(%esp)
0815ca70 +0x0ea:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815ca75 +0x0ef:  mov    %esi,%eax
0815ca77 +0x0f1:  mov    %ebx,%edx
0815ca79 +0x0f3:  mov    %eax,(%esp)
0815ca7c +0x0f6:  call   08ae3750 <_Unwind_Resume>
0815ca81 +0x0fb:  lea    -0x24(%ebp),%eax
0815ca84 +0x0fe:  mov    %eax,(%esp)
0815ca87 +0x101:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815ca8c +0x106:  add    $0x30,%esp
0815ca8f +0x109:  pop    %ebx
0815ca90 +0x10a:  pop    %esi
0815ca91 +0x10b:  pop    %ebp
0815ca92 +0x10c:  ret
0815ca93 +0x10d:  nop
```

## 反编译 C

```c
// DBSelectPcroomDailyReward::makeRequest @ 0x815c986

/* DBSelectPcroomDailyReward::makeRequest(CUser*) */

void DBSelectPcroomDailyReward::makeRequest(CUser *param_1)

{
  Stream *pSVar1;
  undefined4 uVar2;
  CStreamGuard *this;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  MSG *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x2d9);
  CStreamGuard::CStreamGuard(local_28,pSVar1,true);
  uVar2 = CUser::GetUID(param_1);
                    /* try { // try from 0815c9df to 0815ca63 has its CatchHandler @ 0815ca66 */
  Taiwan::internal_stream(local_28,0xd,uVar2);
  this = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<DBSelectPcroomDailyReward::MSG>(this);
  if (local_10 == (MSG *)0x0) {
    cMyTrace::cMyTrace(local_20,"static void DBSelectPcroomDailyReward::makeRequest(CUser*)",0x2df,0
                      );
    cMyTrace::operator()(local_20,"[Taiwan, Pcroom] msg is null");
  }
  else {
    uVar2 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_10 = uVar2;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  }
  CStreamGuard::~CStreamGuard(local_28);
  return;
}
```
