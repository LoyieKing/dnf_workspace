# SendDBThread_forchina

`_ZN31Inter_MailBox_Req_CheckReceiver21SendDBThread_forchinaEP5CUserP26SIG_MAILBOX_CHECK_RECEIVER`

`Inter_MailBox_Req_CheckReceiver::SendDBThread_forchina(CUser*, SIG_MAILBOX_CHECK_RECEIVER*)`

| 类 | 地址 |
|---|---|
| `Inter_MailBox_Req_CheckReceiver` | `0x084cff18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cff18  _ZN31Inter_MailBox_Req_CheckReceiver21SendDBThread_forchinaEP5CUserP26SIG_MAILBOX_CHECK_RECEIVER
#           Inter_MailBox_Req_CheckReceiver::SendDBThread_forchina(CUser*, SIG_MAILBOX_CHECK_RECEIVER*)
# range [0x084cff18, 0x084d0085]
084cff18 +0x000:  push   %ebp
084cff19 +0x001:  mov    %esp,%ebp
084cff1b +0x003:  push   %esi
084cff1c +0x004:  push   %ebx
084cff1d +0x005:  sub    $0x30,%esp
084cff20 +0x008:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
084cff25 +0x00d:  movl   $0x2dfa,0x8(%esp)
084cff2d +0x015:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cff35 +0x01d:  mov    %eax,(%esp)
084cff38 +0x020:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
084cff3d +0x025:  movl   $0x1,0x8(%esp)
084cff45 +0x02d:  mov    %eax,0x4(%esp)
084cff49 +0x031:  lea    -0x24(%ebp),%eax
084cff4c +0x034:  mov    %eax,(%esp)
084cff4f +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084cff54 +0x03c:  lea    -0x24(%ebp),%eax
084cff57 +0x03f:  mov    %eax,(%esp)
084cff5a +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084cff5f +0x047:  movl   $0x1f5,0x4(%esp)
084cff67 +0x04f:  mov    %eax,(%esp)
084cff6a +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084cff6f +0x057:  movl   $0x0,0xc(%esp)
084cff77 +0x05f:  movl   $0x2dfd,0x8(%esp)
084cff7f +0x067:  movl   $&_ZZN31Inter_MailBox_Req_CheckReceiver21SendDBThread_forchinaEP5CUserP26SIG_MAILBOX_CHECK_RECEIVERE19__PRETTY_FUNCTION__,0x4(%esp)
084cff87 +0x06f:  lea    -0x1c(%ebp),%eax
084cff8a +0x072:  mov    %eax,(%esp)
084cff8d +0x075:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084cff92 +0x07a:  movl   $0x1f5,0x8(%esp)
084cff9a +0x082:  movl   $"E_MULTI_MAILBOX_REQ_SEND : %d",0x4(%esp)
084cffa2 +0x08a:  lea    -0x1c(%ebp),%eax
084cffa5 +0x08d:  mov    %eax,(%esp)
084cffa8 +0x090:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084cffad +0x095:  mov    0xc(%ebp),%eax
084cffb0 +0x098:  mov    %eax,(%esp)
084cffb3 +0x09b:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084cffb8 +0x0a0:  mov    %eax,%ebx
084cffba +0x0a2:  lea    -0x24(%ebp),%eax
084cffbd +0x0a5:  mov    %eax,(%esp)
084cffc0 +0x0a8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084cffc5 +0x0ad:  mov    %ebx,0x4(%esp)
084cffc9 +0x0b1:  mov    %eax,(%esp)
084cffcc +0x0b4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084cffd1 +0x0b9:  lea    -0x24(%ebp),%eax
084cffd4 +0x0bc:  mov    %eax,(%esp)
084cffd7 +0x0bf:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084cffdc +0x0c4:  mov    %eax,(%esp)
084cffdf +0x0c7:  call   084515ae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x41c4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x41c4
084cffe4 +0x0cc:  mov    %eax,-0xc(%ebp)
084cffe7 +0x0cf:  movl   $0x3fde,0x8(%esp)
084cffef +0x0d7:  mov    0x10(%ebp),%eax
084cfff2 +0x0da:  mov    %eax,0x4(%esp)
084cfff6 +0x0de:  mov    -0xc(%ebp),%eax
084cfff9 +0x0e1:  mov    %eax,(%esp)
084cfffc +0x0e4:  call   0807d8a0 <_init+0x198>
084d0001 +0x0e9:  mov    0xc(%ebp),%eax
084d0004 +0x0ec:  mov    %eax,(%esp)
084d0007 +0x0ef:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084d000c +0x0f4:  mov    -0xc(%ebp),%edx
084d000f +0x0f7:  add    $0x3fc1,%edx
084d0015 +0x0fd:  movl   $0x1d,0x8(%esp)
084d001d +0x105:  mov    %eax,0x4(%esp)
084d0021 +0x109:  mov    %edx,(%esp)
084d0024 +0x10c:  call   0807d8d0 <_init+0x1c8>
084d0029 +0x111:  mov    0xc(%ebp),%eax
084d002c +0x114:  mov    %eax,(%esp)
084d002f +0x117:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d0034 +0x11c:  mov    -0xc(%ebp),%edx
084d0037 +0x11f:  mov    %eax,0x2d(%edx)
084d003a +0x122:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084d003f +0x127:  lea    -0x24(%ebp),%edx
084d0042 +0x12a:  mov    %edx,0x8(%esp)
084d0046 +0x12e:  movl   $0x2,0x4(%esp)
084d004e +0x136:  mov    %eax,(%esp)
084d0051 +0x139:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084d0056 +0x13e:  mov    $0x1,%ebx
084d005b +0x143:  lea    -0x24(%ebp),%eax
084d005e +0x146:  mov    %eax,(%esp)
084d0061 +0x149:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084d0066 +0x14e:  mov    %ebx,%eax
084d0068 +0x150:  add    $0x30,%esp
084d006b +0x153:  pop    %ebx
084d006c +0x154:  pop    %esi
084d006d +0x155:  pop    %ebp
084d006e +0x156:  ret
084d006f +0x157:  mov    %edx,%ebx
084d0071 +0x159:  mov    %eax,%esi
084d0073 +0x15b:  lea    -0x24(%ebp),%eax
084d0076 +0x15e:  mov    %eax,(%esp)
084d0079 +0x161:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084d007e +0x166:  mov    %esi,%eax
084d0080 +0x168:  mov    %ebx,%edx
084d0082 +0x16a:  mov    %eax,(%esp)
084d0085 +0x16d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_MailBox_Req_CheckReceiver::SendDBThread_forchina @ 0x84cff18

/* Inter_MailBox_Req_CheckReceiver::SendDBThread_forchina(CUser*, SIG_MAILBOX_CHECK_RECEIVER*) */

undefined4 __thiscall
Inter_MailBox_Req_CheckReceiver::SendDBThread_forchina
          (Inter_MailBox_Req_CheckReceiver *this,CUser *param_1,SIG_MAILBOX_CHECK_RECEIVER *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  char *__src;
  undefined4 uVar4;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  SIG_MAILBOX_CHECK_RECEIVER *local_10;
  
  pSVar1 = (Stream *)
           BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"InterDispatcher.cpp",0x2dfa);
  CStreamGuard::CStreamGuard(local_28,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 084cff6a to 084d0055 has its CatchHandler @ 084d006f */
  CStreamGuard::operator<<(pCVar2,0x1f5);
  cMyTrace::cMyTrace(local_20,
                     "bool Inter_MailBox_Req_CheckReceiver::SendDBThread_forchina(CUser*, SIG_MAILBOX_CHECK_RECEIVER*)"
                     ,0x2dfd,0);
  cMyTrace::operator()(local_20,"E_MULTI_MAILBOX_REQ_SEND : %d",0x1f5);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_CHECK_RECEIVER>(pCVar2);
  memcpy(local_10,param_2,0x3fde);
  __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(local_10 + 0x3fc1),__src,0x1d);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_10 + 0x2d) = uVar4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  CStreamGuard::~CStreamGuard(local_28);
  return 1;
}
```
