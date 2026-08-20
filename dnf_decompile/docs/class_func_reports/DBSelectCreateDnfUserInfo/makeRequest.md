# makeRequest

`_ZN25DBSelectCreateDnfUserInfo11makeRequestEij`

`DBSelectCreateDnfUserInfo::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DBSelectCreateDnfUserInfo` | `0x0815bee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815bee0  _ZN25DBSelectCreateDnfUserInfo11makeRequestEij
#           DBSelectCreateDnfUserInfo::makeRequest(int, unsigned int)
# range [0x0815bee0, 0x0815c033]
0815bee0 +0x000:  push   %ebp
0815bee1 +0x001:  mov    %esp,%ebp
0815bee3 +0x003:  push   %esi
0815bee4 +0x004:  push   %ebx
0815bee5 +0x005:  sub    $0x30,%esp
0815bee8 +0x008:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0815beed +0x00d:  movl   $0xa0,0x4(%esp)
0815bef5 +0x015:  mov    %eax,(%esp)
0815bef8 +0x018:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0815befd +0x01d:  mov    %eax,-0x10(%ebp)
0815bf00 +0x020:  cmpl   $0x0,-0x10(%ebp)
0815bf04 +0x024:  je     0815bf27 <+0x47>
0815bf06 +0x026:  mov    -0x10(%ebp),%eax
0815bf09 +0x029:  mov    (%eax),%eax
0815bf0b +0x02b:  add    $0x34,%eax
0815bf0e +0x02e:  mov    (%eax),%edx
0815bf10 +0x030:  movl   $0x0,0x4(%esp)
0815bf18 +0x038:  mov    -0x10(%ebp),%eax
0815bf1b +0x03b:  mov    %eax,(%esp)
0815bf1e +0x03e:  call   *%edx
0815bf20 +0x040:  xor    $0x1,%eax
0815bf23 +0x043:  test   %al,%al
0815bf25 +0x045:  je     0815bf2e <+0x4e>
0815bf27 +0x047:  mov    $0x1,%eax
0815bf2c +0x04c:  jmp    0815bf33 <+0x53>
0815bf2e +0x04e:  mov    $0x0,%eax
0815bf33 +0x053:  test   %al,%al
0815bf35 +0x055:  jne    0815c02b <+0x14b>
0815bf3b +0x05b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815bf40 +0x060:  movl   $0x227,0x8(%esp)
0815bf48 +0x068:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815bf50 +0x070:  mov    %eax,(%esp)
0815bf53 +0x073:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815bf58 +0x078:  movl   $0x1,0x8(%esp)
0815bf60 +0x080:  mov    %eax,0x4(%esp)
0815bf64 +0x084:  lea    -0x28(%ebp),%eax
0815bf67 +0x087:  mov    %eax,(%esp)
0815bf6a +0x08a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815bf6f +0x08f:  mov    0x8(%ebp),%eax
0815bf72 +0x092:  mov    %eax,0x8(%esp)
0815bf76 +0x096:  movl   $0xa,0x4(%esp)
0815bf7e +0x09e:  lea    -0x28(%ebp),%eax
0815bf81 +0x0a1:  mov    %eax,(%esp)
0815bf84 +0x0a4:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815bf89 +0x0a9:  lea    -0x28(%ebp),%eax
0815bf8c +0x0ac:  mov    %eax,(%esp)
0815bf8f +0x0af:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0815bf94 +0x0b4:  mov    %eax,(%esp)
0815bf97 +0x0b7:  call   0815eaf6 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xd6a>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xd6a
0815bf9c +0x0bc:  mov    %eax,-0xc(%ebp)
0815bf9f +0x0bf:  cmpl   $0x0,-0xc(%ebp)
0815bfa3 +0x0c3:  jne    0815bfdd <+0xfd>
0815bfa5 +0x0c5:  movl   $0x0,0xc(%esp)
0815bfad +0x0cd:  movl   $0x22c,0x8(%esp)
0815bfb5 +0x0d5:  movl   $&_ZZN25DBSelectCreateDnfUserInfo11makeRequestEijE19__PRETTY_FUNCTION__,0x4(%esp)
0815bfbd +0x0dd:  lea    -0x20(%ebp),%eax
0815bfc0 +0x0e0:  mov    %eax,(%esp)
0815bfc3 +0x0e3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815bfc8 +0x0e8:  movl   $"[Taiwan, Event] msg is null",0x4(%esp)
0815bfd0 +0x0f0:  lea    -0x20(%ebp),%eax
0815bfd3 +0x0f3:  mov    %eax,(%esp)
0815bfd6 +0x0f6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815bfdb +0x0fb:  jmp    0815c01e <+0x13e>
0815bfdd +0x0fd:  mov    -0xc(%ebp),%eax
0815bfe0 +0x100:  mov    0xc(%ebp),%edx
0815bfe3 +0x103:  mov    %edx,(%eax)
0815bfe5 +0x105:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815bfea +0x10a:  lea    -0x28(%ebp),%edx
0815bfed +0x10d:  mov    %edx,0x8(%esp)
0815bff1 +0x111:  movl   $0x2,0x4(%esp)
0815bff9 +0x119:  mov    %eax,(%esp)
0815bffc +0x11c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815c001 +0x121:  jmp    0815c01e <+0x13e>
0815c003 +0x123:  mov    %edx,%ebx
0815c005 +0x125:  mov    %eax,%esi
0815c007 +0x127:  lea    -0x28(%ebp),%eax
0815c00a +0x12a:  mov    %eax,(%esp)
0815c00d +0x12d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815c012 +0x132:  mov    %esi,%eax
0815c014 +0x134:  mov    %ebx,%edx
0815c016 +0x136:  mov    %eax,(%esp)
0815c019 +0x139:  call   08ae3750 <_Unwind_Resume>
0815c01e +0x13e:  lea    -0x28(%ebp),%eax
0815c021 +0x141:  mov    %eax,(%esp)
0815c024 +0x144:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815c029 +0x149:  jmp    0815c02c <+0x14c>
0815c02b +0x14b:  nop
0815c02c +0x14c:  add    $0x30,%esp
0815c02f +0x14f:  pop    %ebx
0815c030 +0x150:  pop    %esi
0815c031 +0x151:  pop    %ebp
0815c032 +0x152:  ret
0815c033 +0x153:  nop
```

## 反编译 C

```c
// DBSelectCreateDnfUserInfo::makeRequest @ 0x815bee0

/* DBSelectCreateDnfUserInfo::makeRequest(int, unsigned int) */

void DBSelectCreateDnfUserInfo::makeRequest(int param_1,uint param_2)

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
      goto LAB_0815bf33;
    }
  }
  bVar1 = true;
LAB_0815bf33:
  if (!bVar1) {
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x227);
    CStreamGuard::CStreamGuard(local_2c,pSVar3,true);
                    /* try { // try from 0815bf84 to 0815c000 has its CatchHandler @ 0815c003 */
    Taiwan::internal_stream(local_2c,10,param_1);
    this = (CStreamGuard *)CStreamGuard::operator->(local_2c);
    local_10 = CStreamGuard::GetInBuffer<DBSelectCreateDnfUserInfo::MSG>(this);
    if (local_10 == (MSG *)0x0) {
      cMyTrace::cMyTrace(local_24,
                         "static void DBSelectCreateDnfUserInfo::makeRequest(int, memberIdentificationNumber_t)"
                         ,0x22c,0);
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
