# makeRequest

`_ZN28InterSelectCreateDnfUserInfo11makeRequestEijb`

`InterSelectCreateDnfUserInfo::makeRequest(int, unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `InterSelectCreateDnfUserInfo` | `0x08161218` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08161218  _ZN28InterSelectCreateDnfUserInfo11makeRequestEijb
#           InterSelectCreateDnfUserInfo::makeRequest(int, unsigned int, bool)
# range [0x08161218, 0x08161329]
08161218 +0x000:  push   %ebp
08161219 +0x001:  mov    %esp,%ebp
0816121b +0x003:  push   %esi
0816121c +0x004:  push   %ebx
0816121d +0x005:  sub    $0x40,%esp
08161220 +0x008:  mov    0x10(%ebp),%eax
08161223 +0x00b:  mov    %al,-0x1c(%ebp)
08161226 +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0816122b +0x013:  movl   $0x14d,0x8(%esp)
08161233 +0x01b:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
0816123b +0x023:  mov    %eax,(%esp)
0816123e +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08161243 +0x02b:  movl   $0x1,0x8(%esp)
0816124b +0x033:  mov    %eax,0x4(%esp)
0816124f +0x037:  lea    -0x14(%ebp),%eax
08161252 +0x03a:  mov    %eax,(%esp)
08161255 +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0816125a +0x042:  mov    0x8(%ebp),%eax
0816125d +0x045:  mov    %eax,0x8(%esp)
08161261 +0x049:  movl   $0xa,0x4(%esp)
08161269 +0x051:  lea    -0x14(%ebp),%eax
0816126c +0x054:  mov    %eax,(%esp)
0816126f +0x057:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
08161274 +0x05c:  lea    -0x14(%ebp),%eax
08161277 +0x05f:  mov    %eax,(%esp)
0816127a +0x062:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0816127f +0x067:  mov    %eax,(%esp)
08161282 +0x06a:  call   081627be <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa2c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa2c
08161287 +0x06f:  mov    %eax,-0xc(%ebp)
0816128a +0x072:  cmpl   $0x0,-0xc(%ebp)
0816128e +0x076:  jne    081612cd <+0xb5>
08161290 +0x078:  movzbl -0x1c(%ebp),%eax
08161294 +0x07c:  mov    %eax,0x18(%esp)
08161298 +0x080:  mov    0xc(%ebp),%eax
0816129b +0x083:  mov    %eax,0x14(%esp)
0816129f +0x087:  movl   $"[Taiwan, Event] m_id:%d isReceived:%d",0x10(%esp)
081612a7 +0x08f:  movl   $0x152,0xc(%esp)
081612af +0x097:  movl   $&_ZZN28InterSelectCreateDnfUserInfo11makeRequestEijbE19__PRETTY_FUNCTION__,0x8(%esp)
081612b7 +0x09f:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
081612bf +0x0a7:  movl   $0x1,(%esp)
081612c6 +0x0ae:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081612cb +0x0b3:  jmp    08161318 <+0x100>
081612cd +0x0b5:  mov    -0xc(%ebp),%eax
081612d0 +0x0b8:  mov    0xc(%ebp),%edx
081612d3 +0x0bb:  mov    %edx,(%eax)
081612d5 +0x0bd:  mov    -0xc(%ebp),%eax
081612d8 +0x0c0:  movzbl -0x1c(%ebp),%edx
081612dc +0x0c4:  mov    %dl,0x4(%eax)
081612df +0x0c7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081612e4 +0x0cc:  lea    -0x14(%ebp),%edx
081612e7 +0x0cf:  mov    %edx,0x8(%esp)
081612eb +0x0d3:  movl   $0x1,0x4(%esp)
081612f3 +0x0db:  mov    %eax,(%esp)
081612f6 +0x0de:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081612fb +0x0e3:  jmp    08161318 <+0x100>
081612fd +0x0e5:  mov    %edx,%ebx
081612ff +0x0e7:  mov    %eax,%esi
08161301 +0x0e9:  lea    -0x14(%ebp),%eax
08161304 +0x0ec:  mov    %eax,(%esp)
08161307 +0x0ef:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0816130c +0x0f4:  mov    %esi,%eax
0816130e +0x0f6:  mov    %ebx,%edx
08161310 +0x0f8:  mov    %eax,(%esp)
08161313 +0x0fb:  call   08ae3750 <_Unwind_Resume>
08161318 +0x100:  lea    -0x14(%ebp),%eax
0816131b +0x103:  mov    %eax,(%esp)
0816131e +0x106:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08161323 +0x10b:  add    $0x40,%esp
08161326 +0x10e:  pop    %ebx
08161327 +0x10f:  pop    %esi
08161328 +0x110:  pop    %ebp
08161329 +0x111:  ret
```

## 反编译 C

```c
// InterSelectCreateDnfUserInfo::makeRequest @ 0x8161218

/* InterSelectCreateDnfUserInfo::makeRequest(int, unsigned int, bool) */

void InterSelectCreateDnfUserInfo::makeRequest(int param_1,uint param_2,bool param_3)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  Msg *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x14d);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 0816126f to 081612fa has its CatchHandler @ 081612fd */
  Taiwan::internal_stream(local_18,10,param_1);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<InterSelectCreateDnfUserInfo::Msg>(this);
  if (local_10 == (Msg *)0x0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "static void InterSelectCreateDnfUserInfo::makeRequest(int, memberIdentificationNumber_t, bool)"
               ,0x152,"[Taiwan, Event] m_id:%d isReceived:%d",param_2,(uint)param_3);
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
