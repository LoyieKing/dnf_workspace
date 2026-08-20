# makeRequest

`_ZN29InterSelectCreateDnfEventInfo11makeRequestEiii`

`InterSelectCreateDnfEventInfo::makeRequest(int, int, int)`

| 类 | 地址 |
|---|---|
| `InterSelectCreateDnfEventInfo` | `0x08160ef6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08160ef6  _ZN29InterSelectCreateDnfEventInfo11makeRequestEiii
#           InterSelectCreateDnfEventInfo::makeRequest(int, int, int)
# range [0x08160ef6, 0x08161011]
08160ef6 +0x000:  push   %ebp
08160ef7 +0x001:  mov    %esp,%ebp
08160ef9 +0x003:  push   %esi
08160efa +0x004:  push   %ebx
08160efb +0x005:  sub    $0x30,%esp
08160efe +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08160f03 +0x00d:  movl   $0x11b,0x8(%esp)
08160f0b +0x015:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
08160f13 +0x01d:  mov    %eax,(%esp)
08160f16 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08160f1b +0x025:  movl   $0x1,0x8(%esp)
08160f23 +0x02d:  mov    %eax,0x4(%esp)
08160f27 +0x031:  lea    -0x14(%ebp),%eax
08160f2a +0x034:  mov    %eax,(%esp)
08160f2d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08160f32 +0x03c:  movl   $0xffffffff,0x8(%esp)
08160f3a +0x044:  movl   $0x9,0x4(%esp)
08160f42 +0x04c:  lea    -0x14(%ebp),%eax
08160f45 +0x04f:  mov    %eax,(%esp)
08160f48 +0x052:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
08160f4d +0x057:  lea    -0x14(%ebp),%eax
08160f50 +0x05a:  mov    %eax,(%esp)
08160f53 +0x05d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08160f58 +0x062:  mov    %eax,(%esp)
08160f5b +0x065:  call   081627a8 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa16>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa16
08160f60 +0x06a:  mov    %eax,-0xc(%ebp)
08160f63 +0x06d:  cmpl   $0x0,-0xc(%ebp)
08160f67 +0x071:  jne    08160fac <+0xb6>
08160f69 +0x073:  mov    0x10(%ebp),%eax
08160f6c +0x076:  mov    %eax,0x1c(%esp)
08160f70 +0x07a:  mov    0x8(%ebp),%eax
08160f73 +0x07d:  mov    %eax,0x18(%esp)
08160f77 +0x081:  mov    0xc(%ebp),%eax
08160f7a +0x084:  mov    %eax,0x14(%esp)
08160f7e +0x088:  movl   $"[Taiwan, Event] hour:%d rate:%d event_day:%d",0x10(%esp)
08160f86 +0x090:  movl   $0x120,0xc(%esp)
08160f8e +0x098:  movl   $&_ZZN29InterSelectCreateDnfEventInfo11makeRequestEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
08160f96 +0x0a0:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
08160f9e +0x0a8:  movl   $0x1,(%esp)
08160fa5 +0x0af:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08160faa +0x0b4:  jmp    08160fff <+0x109>
08160fac +0x0b6:  mov    -0xc(%ebp),%eax
08160faf +0x0b9:  mov    0x8(%ebp),%edx
08160fb2 +0x0bc:  mov    %edx,(%eax)
08160fb4 +0x0be:  mov    -0xc(%ebp),%eax
08160fb7 +0x0c1:  mov    0xc(%ebp),%edx
08160fba +0x0c4:  mov    %edx,0x4(%eax)
08160fbd +0x0c7:  mov    -0xc(%ebp),%eax
08160fc0 +0x0ca:  mov    0x10(%ebp),%edx
08160fc3 +0x0cd:  mov    %edx,0x8(%eax)
08160fc6 +0x0d0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08160fcb +0x0d5:  lea    -0x14(%ebp),%edx
08160fce +0x0d8:  mov    %edx,0x8(%esp)
08160fd2 +0x0dc:  movl   $0x1,0x4(%esp)
08160fda +0x0e4:  mov    %eax,(%esp)
08160fdd +0x0e7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08160fe2 +0x0ec:  jmp    08160fff <+0x109>
08160fe4 +0x0ee:  mov    %edx,%ebx
08160fe6 +0x0f0:  mov    %eax,%esi
08160fe8 +0x0f2:  lea    -0x14(%ebp),%eax
08160feb +0x0f5:  mov    %eax,(%esp)
08160fee +0x0f8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08160ff3 +0x0fd:  mov    %esi,%eax
08160ff5 +0x0ff:  mov    %ebx,%edx
08160ff7 +0x101:  mov    %eax,(%esp)
08160ffa +0x104:  call   08ae3750 <_Unwind_Resume>
08160fff +0x109:  lea    -0x14(%ebp),%eax
08161002 +0x10c:  mov    %eax,(%esp)
08161005 +0x10f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0816100a +0x114:  add    $0x30,%esp
0816100d +0x117:  pop    %ebx
0816100e +0x118:  pop    %esi
0816100f +0x119:  pop    %ebp
08161010 +0x11a:  ret
08161011 +0x11b:  nop
```

## 反编译 C

```c
// InterSelectCreateDnfEventInfo::makeRequest @ 0x8160ef6

/* InterSelectCreateDnfEventInfo::makeRequest(int, int, int) */

void InterSelectCreateDnfEventInfo::makeRequest(int param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  Msg *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x11b);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 08160f48 to 08160fe1 has its CatchHandler @ 08160fe4 */
  Taiwan::internal_stream(local_18,9,0xffffffff);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<InterSelectCreateDnfEventInfo::Msg>(this);
  if (local_10 == (Msg *)0x0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "static void InterSelectCreateDnfEventInfo::makeRequest(int, int, int)",0x120,
               "[Taiwan, Event] hour:%d rate:%d event_day:%d",param_2,param_1,param_3);
  }
  else {
    *(int *)local_10 = param_1;
    *(int *)(local_10 + 4) = param_2;
    *(int *)(local_10 + 8) = param_3;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
