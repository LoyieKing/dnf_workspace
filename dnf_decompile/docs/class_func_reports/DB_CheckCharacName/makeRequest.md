# makeRequest

`_ZN18DB_CheckCharacName11makeRequestEijPKcb`

`DB_CheckCharacName::makeRequest(int, unsigned int, char const*, bool)`

| 类 | 地址 |
|---|---|
| `DB_CheckCharacName` | `0x08443352` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08443352  _ZN18DB_CheckCharacName11makeRequestEijPKcb
#           DB_CheckCharacName::makeRequest(int, unsigned int, char const*, bool)
# range [0x08443352, 0x08443469]
08443352 +0x000:  push   %ebp
08443353 +0x001:  mov    %esp,%ebp
08443355 +0x003:  push   %esi
08443356 +0x004:  push   %ebx
08443357 +0x005:  sub    $0x30,%esp
0844335a +0x008:  mov    0x14(%ebp),%eax
0844335d +0x00b:  mov    %al,-0x1c(%ebp)
08443360 +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08443365 +0x013:  movl   $0xa4f9,0x8(%esp)
0844336d +0x01b:  movl   $"DBThread.cpp",0x4(%esp)
08443375 +0x023:  mov    %eax,(%esp)
08443378 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844337d +0x02b:  movl   $0x1,0x8(%esp)
08443385 +0x033:  mov    %eax,0x4(%esp)
08443389 +0x037:  lea    -0x14(%ebp),%eax
0844338c +0x03a:  mov    %eax,(%esp)
0844338f +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08443394 +0x042:  lea    -0x14(%ebp),%eax
08443397 +0x045:  mov    %eax,(%esp)
0844339a +0x048:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844339f +0x04d:  movl   $0x2a2,0x4(%esp)
084433a7 +0x055:  mov    %eax,(%esp)
084433aa +0x058:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084433af +0x05d:  lea    -0x14(%ebp),%eax
084433b2 +0x060:  mov    %eax,(%esp)
084433b5 +0x063:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084433ba +0x068:  mov    0x8(%ebp),%edx
084433bd +0x06b:  mov    %edx,0x4(%esp)
084433c1 +0x06f:  mov    %eax,(%esp)
084433c4 +0x072:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084433c9 +0x077:  lea    -0x14(%ebp),%eax
084433cc +0x07a:  mov    %eax,(%esp)
084433cf +0x07d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084433d4 +0x082:  mov    %eax,(%esp)
084433d7 +0x085:  call   08453ef2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6b08>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6b08
084433dc +0x08a:  mov    %eax,-0xc(%ebp)
084433df +0x08d:  mov    -0xc(%ebp),%eax
084433e2 +0x090:  mov    0xc(%ebp),%edx
084433e5 +0x093:  mov    %edx,(%eax)
084433e7 +0x095:  cmpl   $0x0,0x10(%ebp)
084433eb +0x099:  je     08443414 <+0xc2>
084433ed +0x09b:  mov    0x10(%ebp),%eax
084433f0 +0x09e:  movzbl (%eax),%eax
084433f3 +0x0a1:  test   %al,%al
084433f5 +0x0a3:  je     08443414 <+0xc2>
084433f7 +0x0a5:  mov    -0xc(%ebp),%eax
084433fa +0x0a8:  lea    0x4(%eax),%edx
084433fd +0x0ab:  movl   $0x1e,0x8(%esp)
08443405 +0x0b3:  mov    0x10(%ebp),%eax
08443408 +0x0b6:  mov    %eax,0x4(%esp)
0844340c +0x0ba:  mov    %edx,(%esp)
0844340f +0x0bd:  call   0807d8d0 <_init+0x1c8>
08443414 +0x0c2:  mov    -0xc(%ebp),%eax
08443417 +0x0c5:  movzbl -0x1c(%ebp),%edx
0844341b +0x0c9:  mov    %dl,0x22(%eax)
0844341e +0x0cc:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08443423 +0x0d1:  lea    -0x14(%ebp),%edx
08443426 +0x0d4:  mov    %edx,0x8(%esp)
0844342a +0x0d8:  movl   $0x2,0x4(%esp)
08443432 +0x0e0:  mov    %eax,(%esp)
08443435 +0x0e3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844343a +0x0e8:  jmp    08443457 <+0x105>
0844343c +0x0ea:  mov    %edx,%ebx
0844343e +0x0ec:  mov    %eax,%esi
08443440 +0x0ee:  lea    -0x14(%ebp),%eax
08443443 +0x0f1:  mov    %eax,(%esp)
08443446 +0x0f4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844344b +0x0f9:  mov    %esi,%eax
0844344d +0x0fb:  mov    %ebx,%edx
0844344f +0x0fd:  mov    %eax,(%esp)
08443452 +0x100:  call   08ae3750 <_Unwind_Resume>
08443457 +0x105:  lea    -0x14(%ebp),%eax
0844345a +0x108:  mov    %eax,(%esp)
0844345d +0x10b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08443462 +0x110:  add    $0x30,%esp
08443465 +0x113:  pop    %ebx
08443466 +0x114:  pop    %esi
08443467 +0x115:  pop    %ebp
08443468 +0x116:  ret
08443469 +0x117:  nop
```

## 反编译 C

```c
// DB_CheckCharacName::makeRequest @ 0x8443352

/* DB_CheckCharacName::makeRequest(int, unsigned int, char const*, bool) */

void DB_CheckCharacName::makeRequest(int param_1,uint param_2,char *param_3,bool param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_CHECK_CHARAC_NAME *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa4f9);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084433aa to 08443439 has its CatchHandler @ 0844343c */
  CStreamGuard::operator<<(pCVar2,0x2a2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_CHARAC_NAME>(pCVar2);
  *(uint *)local_10 = param_2;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    strncpy((char *)(local_10 + 4),param_3,0x1e);
  }
  local_10[0x22] = (SIG_CHECK_CHARAC_NAME)param_4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
