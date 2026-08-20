# ReqDBCheckReceiver_forchina

`_ZN8WongWork14CMailBoxHelper27ReqDBCheckReceiver_forchinaEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER`

`WongWork::CMailBoxHelper::ReqDBCheckReceiver_forchina(CUser*, char const*, MSG_CHECK_MAIL_RECEIVER*)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08555486` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08555486  _ZN8WongWork14CMailBoxHelper27ReqDBCheckReceiver_forchinaEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER
#           WongWork::CMailBoxHelper::ReqDBCheckReceiver_forchina(CUser*, char const*, MSG_CHECK_MAIL_RECEIVER*)
# range [0x08555486, 0x085555e7]
08555486 +0x000:  push   %ebp
08555487 +0x001:  mov    %esp,%ebp
08555489 +0x003:  push   %esi
0855548a +0x004:  push   %ebx
0855548b +0x005:  sub    $0x20,%esp
0855548e +0x008:  mov    0x8(%ebp),%eax
08555491 +0x00b:  mov    %eax,(%esp)
08555494 +0x00e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08555499 +0x013:  mov    0xc(%ebp),%edx
0855549c +0x016:  mov    %edx,0x4(%esp)
085554a0 +0x01a:  mov    %eax,(%esp)
085554a3 +0x01d:  call   0807e4e0 <_init+0xdd8>
085554a8 +0x022:  test   %eax,%eax
085554aa +0x024:  sete   %al
085554ad +0x027:  test   %al,%al
085554af +0x029:  je     085554bb <+0x35>
085554b1 +0x02b:  mov    $0x7,%ebx
085554b6 +0x030:  jmp    085555df <+0x159>
085554bb +0x035:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
085554c0 +0x03a:  movl   $0x52e,0x8(%esp)
085554c8 +0x042:  movl   $"MailBox.cpp",0x4(%esp)
085554d0 +0x04a:  mov    %eax,(%esp)
085554d3 +0x04d:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
085554d8 +0x052:  movl   $0x1,0x8(%esp)
085554e0 +0x05a:  mov    %eax,0x4(%esp)
085554e4 +0x05e:  lea    -0x14(%ebp),%eax
085554e7 +0x061:  mov    %eax,(%esp)
085554ea +0x064:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085554ef +0x069:  lea    -0x14(%ebp),%eax
085554f2 +0x06c:  mov    %eax,(%esp)
085554f5 +0x06f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085554fa +0x074:  movl   $0x7e,0x4(%esp)
08555502 +0x07c:  mov    %eax,(%esp)
08555505 +0x07f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0855550a +0x084:  mov    0x8(%ebp),%eax
0855550d +0x087:  mov    %eax,(%esp)
08555510 +0x08a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08555515 +0x08f:  mov    %eax,%ebx
08555517 +0x091:  lea    -0x14(%ebp),%eax
0855551a +0x094:  mov    %eax,(%esp)
0855551d +0x097:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08555522 +0x09c:  mov    %ebx,0x4(%esp)
08555526 +0x0a0:  mov    %eax,(%esp)
08555529 +0x0a3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0855552e +0x0a8:  lea    -0x14(%ebp),%eax
08555531 +0x0ab:  mov    %eax,(%esp)
08555534 +0x0ae:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08555539 +0x0b3:  mov    %eax,(%esp)
0855553c +0x0b6:  call   084515ae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x41c4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x41c4
08555541 +0x0bb:  mov    %eax,-0xc(%ebp)
08555544 +0x0be:  mov    -0xc(%ebp),%eax
08555547 +0x0c1:  movl   $0x1d,0x8(%esp)
0855554f +0x0c9:  mov    0xc(%ebp),%edx
08555552 +0x0cc:  mov    %edx,0x4(%esp)
08555556 +0x0d0:  mov    %eax,(%esp)
08555559 +0x0d3:  call   0807d8d0 <_init+0x1c8>
0855555e +0x0d8:  mov    -0xc(%ebp),%eax
08555561 +0x0db:  lea    0x31(%eax),%edx
08555564 +0x0de:  movl   $0x3f88,0x8(%esp)
0855556c +0x0e6:  mov    0x10(%ebp),%eax
0855556f +0x0e9:  mov    %eax,0x4(%esp)
08555573 +0x0ed:  mov    %edx,(%esp)
08555576 +0x0f0:  call   0807d8a0 <_init+0x198>
0855557b +0x0f5:  movl   $0xffffffff,0x4(%esp)
08555583 +0x0fd:  mov    0x8(%ebp),%eax
08555586 +0x100:  mov    %eax,(%esp)
08555589 +0x103:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0855558e +0x108:  mov    %eax,%edx
08555590 +0x10a:  mov    -0xc(%ebp),%eax
08555593 +0x10d:  mov    %edx,0x2d(%eax)
08555596 +0x110:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0855559b +0x115:  lea    -0x14(%ebp),%edx
0855559e +0x118:  mov    %edx,0x8(%esp)
085555a2 +0x11c:  movl   $0x2,0x4(%esp)
085555aa +0x124:  mov    %eax,(%esp)
085555ad +0x127:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085555b2 +0x12c:  mov    $0x0,%ebx
085555b7 +0x131:  lea    -0x14(%ebp),%eax
085555ba +0x134:  mov    %eax,(%esp)
085555bd +0x137:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085555c2 +0x13c:  jmp    085555df <+0x159>
085555c4 +0x13e:  mov    %edx,%ebx
085555c6 +0x140:  mov    %eax,%esi
085555c8 +0x142:  lea    -0x14(%ebp),%eax
085555cb +0x145:  mov    %eax,(%esp)
085555ce +0x148:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085555d3 +0x14d:  mov    %esi,%eax
085555d5 +0x14f:  mov    %ebx,%edx
085555d7 +0x151:  mov    %eax,(%esp)
085555da +0x154:  call   08ae3750 <_Unwind_Resume>
085555df +0x159:  mov    %ebx,%eax
085555e1 +0x15b:  add    $0x20,%esp
085555e4 +0x15e:  pop    %ebx
085555e5 +0x15f:  pop    %esi
085555e6 +0x160:  pop    %ebp
085555e7 +0x161:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBCheckReceiver_forchina @ 0x8555486

/* WongWork::CMailBoxHelper::ReqDBCheckReceiver_forchina(CUser*, char const*,
   MSG_CHECK_MAIL_RECEIVER*) */

undefined4
WongWork::CMailBoxHelper::ReqDBCheckReceiver_forchina
          (CUser *param_1,char *param_2,MSG_CHECK_MAIL_RECEIVER *param_3)

{
  char *__s1;
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_MAILBOX_CHECK_RECEIVER *local_10;
  
  __s1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  iVar1 = strcmp(__s1,param_2);
  if (iVar1 == 0) {
    uVar4 = 7;
  }
  else {
    pSVar2 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"MailBox.cpp",0x52e);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08555505 to 085555b1 has its CatchHandler @ 085555c4 */
    CStreamGuard::operator<<(pCVar3,0x7e);
    iVar1 = CUser::GetUID(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_CHECK_RECEIVER>(pCVar3);
    strncpy((char *)local_10,param_2,0x1d);
    memcpy(local_10 + 0x31,param_3,0x3f88);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_10 + 0x2d) = uVar4;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    uVar4 = 0;
    CStreamGuard::~CStreamGuard(local_18);
  }
  return uVar4;
}
```
