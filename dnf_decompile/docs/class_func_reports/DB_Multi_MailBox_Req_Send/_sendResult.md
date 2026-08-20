# _sendResult

`_ZN25DB_Multi_MailBox_Req_Send11_sendResultEiP26SIG_MAILBOX_CHECK_RECEIVER`

`DB_Multi_MailBox_Req_Send::_sendResult(int, SIG_MAILBOX_CHECK_RECEIVER*)`

| 类 | 地址 |
|---|---|
| `DB_Multi_MailBox_Req_Send` | `0x0843bc16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843bc16  _ZN25DB_Multi_MailBox_Req_Send11_sendResultEiP26SIG_MAILBOX_CHECK_RECEIVER
#           DB_Multi_MailBox_Req_Send::_sendResult(int, SIG_MAILBOX_CHECK_RECEIVER*)
# range [0x0843bc16, 0x0843bd45]
0843bc16 +0x000:  push   %ebp
0843bc17 +0x001:  mov    %esp,%ebp
0843bc19 +0x003:  push   %esi
0843bc1a +0x004:  push   %ebx
0843bc1b +0x005:  sub    $0x30,%esp
0843bc1e +0x008:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
0843bc23 +0x00d:  movl   $0x8e67,0x8(%esp)
0843bc2b +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0843bc33 +0x01d:  mov    %eax,(%esp)
0843bc36 +0x020:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
0843bc3b +0x025:  movl   $0x1,0x8(%esp)
0843bc43 +0x02d:  mov    %eax,0x4(%esp)
0843bc47 +0x031:  lea    -0x24(%ebp),%eax
0843bc4a +0x034:  mov    %eax,(%esp)
0843bc4d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843bc52 +0x03c:  lea    -0x24(%ebp),%eax
0843bc55 +0x03f:  mov    %eax,(%esp)
0843bc58 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843bc5d +0x047:  movl   $0x1f5,0x4(%esp)
0843bc65 +0x04f:  mov    %eax,(%esp)
0843bc68 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843bc6d +0x057:  movl   $0x0,0xc(%esp)
0843bc75 +0x05f:  movl   $0x8e6a,0x8(%esp)
0843bc7d +0x067:  movl   $&_ZZN25DB_Multi_MailBox_Req_Send11_sendResultEiP26SIG_MAILBOX_CHECK_RECEIVERE19__PRETTY_FUNCTION__,0x4(%esp)
0843bc85 +0x06f:  lea    -0x1c(%ebp),%eax
0843bc88 +0x072:  mov    %eax,(%esp)
0843bc8b +0x075:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0843bc90 +0x07a:  movl   $0x1f5,0x8(%esp)
0843bc98 +0x082:  movl   $"E_MULTI_MAILBOX_REQ_SEND : %d",0x4(%esp)
0843bca0 +0x08a:  lea    -0x1c(%ebp),%eax
0843bca3 +0x08d:  mov    %eax,(%esp)
0843bca6 +0x090:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0843bcab +0x095:  lea    -0x24(%ebp),%eax
0843bcae +0x098:  mov    %eax,(%esp)
0843bcb1 +0x09b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843bcb6 +0x0a0:  mov    0xc(%ebp),%edx
0843bcb9 +0x0a3:  mov    %edx,0x4(%esp)
0843bcbd +0x0a7:  mov    %eax,(%esp)
0843bcc0 +0x0aa:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843bcc5 +0x0af:  lea    -0x24(%ebp),%eax
0843bcc8 +0x0b2:  mov    %eax,(%esp)
0843bccb +0x0b5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843bcd0 +0x0ba:  mov    %eax,(%esp)
0843bcd3 +0x0bd:  call   084515ae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x41c4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x41c4
0843bcd8 +0x0c2:  mov    %eax,-0xc(%ebp)
0843bcdb +0x0c5:  movl   $0x3fde,0x8(%esp)
0843bce3 +0x0cd:  mov    0x10(%ebp),%eax
0843bce6 +0x0d0:  mov    %eax,0x4(%esp)
0843bcea +0x0d4:  mov    -0xc(%ebp),%eax
0843bced +0x0d7:  mov    %eax,(%esp)
0843bcf0 +0x0da:  call   0807d8a0 <_init+0x198>
0843bcf5 +0x0df:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843bcfa +0x0e4:  lea    -0x24(%ebp),%edx
0843bcfd +0x0e7:  mov    %edx,0x8(%esp)
0843bd01 +0x0eb:  movl   $0x1,0x4(%esp)
0843bd09 +0x0f3:  mov    %eax,(%esp)
0843bd0c +0x0f6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843bd11 +0x0fb:  mov    $0x1,%ebx
0843bd16 +0x100:  lea    -0x24(%ebp),%eax
0843bd19 +0x103:  mov    %eax,(%esp)
0843bd1c +0x106:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843bd21 +0x10b:  mov    %ebx,%eax
0843bd23 +0x10d:  add    $0x30,%esp
0843bd26 +0x110:  pop    %ebx
0843bd27 +0x111:  pop    %esi
0843bd28 +0x112:  pop    %ebp
0843bd29 +0x113:  ret
0843bd2a +0x114:  mov    %edx,%ebx
0843bd2c +0x116:  mov    %eax,%esi
0843bd2e +0x118:  lea    -0x24(%ebp),%eax
0843bd31 +0x11b:  mov    %eax,(%esp)
0843bd34 +0x11e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843bd39 +0x123:  mov    %esi,%eax
0843bd3b +0x125:  mov    %ebx,%edx
0843bd3d +0x127:  mov    %eax,(%esp)
0843bd40 +0x12a:  call   08ae3750 <_Unwind_Resume>
0843bd45 +0x12f:  nop
```

## 反编译 C

```c
// DB_Multi_MailBox_Req_Send::_sendResult @ 0x843bc16

/* DB_Multi_MailBox_Req_Send::_sendResult(int, SIG_MAILBOX_CHECK_RECEIVER*) */

undefined4 __thiscall
DB_Multi_MailBox_Req_Send::_sendResult
          (DB_Multi_MailBox_Req_Send *this,int param_1,SIG_MAILBOX_CHECK_RECEIVER *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  SIG_MAILBOX_CHECK_RECEIVER *local_10;
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x8e67);
  CStreamGuard::CStreamGuard(local_28,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0843bc68 to 0843bd10 has its CatchHandler @ 0843bd2a */
  CStreamGuard::operator<<(pCVar2,0x1f5);
  cMyTrace::cMyTrace(local_20,
                     "bool DB_Multi_MailBox_Req_Send::_sendResult(int, SIG_MAILBOX_CHECK_RECEIVER*)"
                     ,0x8e6a,0);
  cMyTrace::operator()(local_20,"E_MULTI_MAILBOX_REQ_SEND : %d",0x1f5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_CHECK_RECEIVER>(pCVar2);
  memcpy(local_10,param_2,0x3fde);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
  CStreamGuard::~CStreamGuard(local_28);
  return 1;
}
```
