# makeRequest

`_ZN25DBInsertCreateDnfUserInfo11makeRequestEij`

`DBInsertCreateDnfUserInfo::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DBInsertCreateDnfUserInfo` | `0x0815c25c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815c25c  _ZN25DBInsertCreateDnfUserInfo11makeRequestEij
#           DBInsertCreateDnfUserInfo::makeRequest(int, unsigned int)
# range [0x0815c25c, 0x0815c3af]
0815c25c +0x000:  push   %ebp
0815c25d +0x001:  mov    %esp,%ebp
0815c25f +0x003:  push   %esi
0815c260 +0x004:  push   %ebx
0815c261 +0x005:  sub    $0x30,%esp
0815c264 +0x008:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0815c269 +0x00d:  movl   $0xa0,0x4(%esp)
0815c271 +0x015:  mov    %eax,(%esp)
0815c274 +0x018:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0815c279 +0x01d:  mov    %eax,-0x10(%ebp)
0815c27c +0x020:  cmpl   $0x0,-0x10(%ebp)
0815c280 +0x024:  je     0815c2a3 <+0x47>
0815c282 +0x026:  mov    -0x10(%ebp),%eax
0815c285 +0x029:  mov    (%eax),%eax
0815c287 +0x02b:  add    $0x34,%eax
0815c28a +0x02e:  mov    (%eax),%edx
0815c28c +0x030:  movl   $0x0,0x4(%esp)
0815c294 +0x038:  mov    -0x10(%ebp),%eax
0815c297 +0x03b:  mov    %eax,(%esp)
0815c29a +0x03e:  call   *%edx
0815c29c +0x040:  xor    $0x1,%eax
0815c29f +0x043:  test   %al,%al
0815c2a1 +0x045:  je     0815c2aa <+0x4e>
0815c2a3 +0x047:  mov    $0x1,%eax
0815c2a8 +0x04c:  jmp    0815c2af <+0x53>
0815c2aa +0x04e:  mov    $0x0,%eax
0815c2af +0x053:  test   %al,%al
0815c2b1 +0x055:  jne    0815c3a7 <+0x14b>
0815c2b7 +0x05b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815c2bc +0x060:  movl   $0x261,0x8(%esp)
0815c2c4 +0x068:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815c2cc +0x070:  mov    %eax,(%esp)
0815c2cf +0x073:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815c2d4 +0x078:  movl   $0x1,0x8(%esp)
0815c2dc +0x080:  mov    %eax,0x4(%esp)
0815c2e0 +0x084:  lea    -0x28(%ebp),%eax
0815c2e3 +0x087:  mov    %eax,(%esp)
0815c2e6 +0x08a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815c2eb +0x08f:  mov    0x8(%ebp),%eax
0815c2ee +0x092:  mov    %eax,0x8(%esp)
0815c2f2 +0x096:  movl   $0xb,0x4(%esp)
0815c2fa +0x09e:  lea    -0x28(%ebp),%eax
0815c2fd +0x0a1:  mov    %eax,(%esp)
0815c300 +0x0a4:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815c305 +0x0a9:  lea    -0x28(%ebp),%eax
0815c308 +0x0ac:  mov    %eax,(%esp)
0815c30b +0x0af:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0815c310 +0x0b4:  mov    %eax,(%esp)
0815c313 +0x0b7:  call   0815eb60 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xdd4>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xdd4
0815c318 +0x0bc:  mov    %eax,-0xc(%ebp)
0815c31b +0x0bf:  cmpl   $0x0,-0xc(%ebp)
0815c31f +0x0c3:  jne    0815c359 <+0xfd>
0815c321 +0x0c5:  movl   $0x0,0xc(%esp)
0815c329 +0x0cd:  movl   $0x267,0x8(%esp)
0815c331 +0x0d5:  movl   $&_ZZN25DBInsertCreateDnfUserInfo11makeRequestEijE19__PRETTY_FUNCTION__,0x4(%esp)
0815c339 +0x0dd:  lea    -0x20(%ebp),%eax
0815c33c +0x0e0:  mov    %eax,(%esp)
0815c33f +0x0e3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815c344 +0x0e8:  movl   $"[Taiwan, Event] msg is null",0x4(%esp)
0815c34c +0x0f0:  lea    -0x20(%ebp),%eax
0815c34f +0x0f3:  mov    %eax,(%esp)
0815c352 +0x0f6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815c357 +0x0fb:  jmp    0815c39a <+0x13e>
0815c359 +0x0fd:  mov    -0xc(%ebp),%eax
0815c35c +0x100:  mov    0xc(%ebp),%edx
0815c35f +0x103:  mov    %edx,(%eax)
0815c361 +0x105:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815c366 +0x10a:  lea    -0x28(%ebp),%edx
0815c369 +0x10d:  mov    %edx,0x8(%esp)
0815c36d +0x111:  movl   $0x2,0x4(%esp)
0815c375 +0x119:  mov    %eax,(%esp)
0815c378 +0x11c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815c37d +0x121:  jmp    0815c39a <+0x13e>
0815c37f +0x123:  mov    %edx,%ebx
0815c381 +0x125:  mov    %eax,%esi
0815c383 +0x127:  lea    -0x28(%ebp),%eax
0815c386 +0x12a:  mov    %eax,(%esp)
0815c389 +0x12d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815c38e +0x132:  mov    %esi,%eax
0815c390 +0x134:  mov    %ebx,%edx
0815c392 +0x136:  mov    %eax,(%esp)
0815c395 +0x139:  call   08ae3750 <_Unwind_Resume>
0815c39a +0x13e:  lea    -0x28(%ebp),%eax
0815c39d +0x141:  mov    %eax,(%esp)
0815c3a0 +0x144:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815c3a5 +0x149:  jmp    0815c3a8 <+0x14c>
0815c3a7 +0x14b:  nop
0815c3a8 +0x14c:  add    $0x30,%esp
0815c3ab +0x14f:  pop    %ebx
0815c3ac +0x150:  pop    %esi
0815c3ad +0x151:  pop    %ebp
0815c3ae +0x152:  ret
0815c3af +0x153:  nop
```

## 反编译 C

```c
// DBInsertCreateDnfUserInfo::makeRequest @ 0x815c25c

/* DBInsertCreateDnfUserInfo::makeRequest(int, unsigned int) */

void DBInsertCreateDnfUserInfo::makeRequest(int param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *this;
  CStreamGuard local_2c [8];
  cMyTrace local_24 [16];
  int *local_14;
  MSG *local_10;
  
  local_14 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
  if (local_14 != (int *)0x0) {
    cVar2 = (**(code **)(*local_14 + 0x34))(local_14,0);
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_0815c2af;
    }
  }
  bVar1 = true;
LAB_0815c2af:
  if (!bVar1) {
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x261);
    CStreamGuard::CStreamGuard(local_2c,pSVar3,true);
                    /* try { // try from 0815c300 to 0815c37c has its CatchHandler @ 0815c37f */
    Taiwan::internal_stream(local_2c,0xb,param_1);
    this = (CStreamGuard *)CStreamGuard::operator->(local_2c);
    local_10 = CStreamGuard::GetInBuffer<DBInsertCreateDnfUserInfo::MSG>(this);
    if (local_10 == (MSG *)0x0) {
      cMyTrace::cMyTrace(local_24,
                         "static void DBInsertCreateDnfUserInfo::makeRequest(int, memberIdentificationNumber_t)"
                         ,0x267,0);
      cMyTrace::operator()(local_24,"[Taiwan, Event] msg is null");
    }
    else {
      *(uint *)local_10 = param_2;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_2c);
    }
    CStreamGuard::~CStreamGuard(local_2c);
  }
  return;
}
```
