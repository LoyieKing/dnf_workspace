# ReqDBLoadMail

`_ZN8WongWork14CMailBoxHelper13ReqDBLoadMailEP5CUserj`

`WongWork::CMailBoxHelper::ReqDBLoadMail(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x085552ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085552ac  _ZN8WongWork14CMailBoxHelper13ReqDBLoadMailEP5CUserj
#           WongWork::CMailBoxHelper::ReqDBLoadMail(CUser*, unsigned int)
# range [0x085552ac, 0x08555463]
085552ac +0x000:  push   %ebp
085552ad +0x001:  mov    %esp,%ebp
085552af +0x003:  push   %esi
085552b0 +0x004:  push   %ebx
085552b1 +0x005:  sub    $0x20,%esp
085552b4 +0x008:  mov    0x8(%ebp),%eax
085552b7 +0x00b:  mov    %eax,(%esp)
085552ba +0x00e:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
085552bf +0x013:  mov    %eax,-0x10(%ebp)
085552c2 +0x016:  cmpl   $0x0,-0x10(%ebp)
085552c6 +0x01a:  je     0855545c <+0x1b0>
085552cc +0x020:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
085552d1 +0x025:  movl   $0x4e0,0x8(%esp)
085552d9 +0x02d:  movl   $"MailBox.cpp",0x4(%esp)
085552e1 +0x035:  mov    %eax,(%esp)
085552e4 +0x038:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
085552e9 +0x03d:  movl   $0x1,0x8(%esp)
085552f1 +0x045:  mov    %eax,0x4(%esp)
085552f5 +0x049:  lea    -0x18(%ebp),%eax
085552f8 +0x04c:  mov    %eax,(%esp)
085552fb +0x04f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08555300 +0x054:  lea    -0x18(%ebp),%eax
08555303 +0x057:  mov    %eax,(%esp)
08555306 +0x05a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0855530b +0x05f:  movl   $0x7f,0x4(%esp)
08555313 +0x067:  mov    %eax,(%esp)
08555316 +0x06a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0855531b +0x06f:  mov    0x8(%ebp),%eax
0855531e +0x072:  mov    %eax,(%esp)
08555321 +0x075:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08555326 +0x07a:  mov    %eax,%ebx
08555328 +0x07c:  lea    -0x18(%ebp),%eax
0855532b +0x07f:  mov    %eax,(%esp)
0855532e +0x082:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08555333 +0x087:  mov    %ebx,0x4(%esp)
08555337 +0x08b:  mov    %eax,(%esp)
0855533a +0x08e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0855533f +0x093:  lea    -0x18(%ebp),%eax
08555342 +0x096:  mov    %eax,(%esp)
08555345 +0x099:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0855534a +0x09e:  mov    %eax,(%esp)
0855534d +0x0a1:  call   08558ab4 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1615>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1615
08555352 +0x0a6:  mov    %eax,-0xc(%ebp)
08555355 +0x0a9:  movl   $0x338a,0x8(%esp)
0855535d +0x0b1:  movl   $0x0,0x4(%esp)
08555365 +0x0b9:  mov    -0xc(%ebp),%eax
08555368 +0x0bc:  mov    %eax,(%esp)
0855536b +0x0bf:  call   0807dcc0 <_init+0x5b8>
08555370 +0x0c4:  mov    -0xc(%ebp),%eax
08555373 +0x0c7:  mov    0xc(%ebp),%edx
08555376 +0x0ca:  mov    %edx,(%eax)
08555378 +0x0cc:  mov    -0x10(%ebp),%eax
0855537b +0x0cf:  mov    %eax,(%esp)
0855537e +0x0d2:  call   08557944 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x4a5>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x4a5
08555383 +0x0d7:  mov    -0xc(%ebp),%edx
08555386 +0x0da:  mov    %eax,0x4(%edx)
08555389 +0x0dd:  mov    -0x10(%ebp),%eax
0855538c +0x0e0:  mov    %eax,(%esp)
0855538f +0x0e3:  call   0823454c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bf6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bf6
08555394 +0x0e8:  cmp    $0x14,%eax
08555397 +0x0eb:  setg   %al
0855539a +0x0ee:  test   %al,%al
0855539c +0x0f0:  je     085553b1 <+0x105>
0855539e +0x0f2:  movl   $0x14,0x4(%esp)
085553a6 +0x0fa:  mov    -0x10(%ebp),%eax
085553a9 +0x0fd:  mov    %eax,(%esp)
085553ac +0x100:  call   0855789c <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x3fd>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x3fd
085553b1 +0x105:  mov    -0x10(%ebp),%eax
085553b4 +0x108:  mov    %eax,(%esp)
085553b7 +0x10b:  call   08557922 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x483>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x483
085553bc +0x110:  mov    %eax,%ebx
085553be +0x112:  mov    -0x10(%ebp),%eax
085553c1 +0x115:  mov    %eax,(%esp)
085553c4 +0x118:  call   0823454c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bf6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bf6
085553c9 +0x11d:  mov    %ebx,%edx
085553cb +0x11f:  sub    %eax,%edx
085553cd +0x121:  mov    %edx,%eax
085553cf +0x123:  mov    %eax,%edx
085553d1 +0x125:  mov    -0xc(%ebp),%eax
085553d4 +0x128:  mov    %edx,0x8(%eax)
085553d7 +0x12b:  mov    -0x10(%ebp),%eax
085553da +0x12e:  mov    %eax,(%esp)
085553dd +0x131:  call   0855784c <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x3ad>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x3ad
085553e2 +0x136:  mov    -0xc(%ebp),%edx
085553e5 +0x139:  mov    %eax,0xc(%edx)
085553e8 +0x13c:  mov    -0x10(%ebp),%eax
085553eb +0x13f:  mov    %eax,(%esp)
085553ee +0x142:  call   084ed216 <_GLOBAL__I__Z7getUserj+0x41c8>  ; global constructors keyed to getUser(unsigned int)+0x41c8
085553f3 +0x147:  mov    -0xc(%ebp),%edx
085553f6 +0x14a:  mov    %eax,0x10(%edx)
085553f9 +0x14d:  mov    -0xc(%ebp),%eax
085553fc +0x150:  add    $0x14,%eax
085553ff +0x153:  movl   $0x14,0x8(%esp)
08555407 +0x15b:  mov    %eax,0x4(%esp)
0855540b +0x15f:  mov    -0x10(%ebp),%eax
0855540e +0x162:  mov    %eax,(%esp)
08555411 +0x165:  call   08557608 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x169>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x169
08555416 +0x16a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0855541b +0x16f:  lea    -0x18(%ebp),%edx
0855541e +0x172:  mov    %edx,0x8(%esp)
08555422 +0x176:  movl   $0x2,0x4(%esp)
0855542a +0x17e:  mov    %eax,(%esp)
0855542d +0x181:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08555432 +0x186:  jmp    0855544f <+0x1a3>
08555434 +0x188:  mov    %edx,%ebx
08555436 +0x18a:  mov    %eax,%esi
08555438 +0x18c:  lea    -0x18(%ebp),%eax
0855543b +0x18f:  mov    %eax,(%esp)
0855543e +0x192:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08555443 +0x197:  mov    %esi,%eax
08555445 +0x199:  mov    %ebx,%edx
08555447 +0x19b:  mov    %eax,(%esp)
0855544a +0x19e:  call   08ae3750 <_Unwind_Resume>
0855544f +0x1a3:  lea    -0x18(%ebp),%eax
08555452 +0x1a6:  mov    %eax,(%esp)
08555455 +0x1a9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0855545a +0x1ae:  jmp    0855545d <+0x1b1>
0855545c +0x1b0:  nop
0855545d +0x1b1:  add    $0x20,%esp
08555460 +0x1b4:  pop    %ebx
08555461 +0x1b5:  pop    %esi
08555462 +0x1b6:  pop    %ebp
08555463 +0x1b7:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBLoadMail @ 0x85552ac

/* WongWork::CMailBoxHelper::ReqDBLoadMail(CUser*, unsigned int) */

void WongWork::CMailBoxHelper::ReqDBLoadMail(CUser *param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  CStreamGuard local_1c [8];
  CMailBox *local_14;
  SIG_MAILBOX_LIST *local_10;
  
  local_14 = (CMailBox *)CUser::GetMailBox(param_1);
  if (local_14 != (CMailBox *)0x0) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x4e0);
    CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08555316 to 08555431 has its CatchHandler @ 08555434 */
    CStreamGuard::operator<<(pCVar2,0x7f);
    iVar3 = CUser::GetUID(param_1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar2,iVar3);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
    local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_LIST>(pCVar2);
    memset(local_10,0,0x338a);
    *(uint *)local_10 = param_2;
    uVar4 = CMailBox::GetLastLoadIdx(local_14);
    *(undefined4 *)(local_10 + 4) = uVar4;
    iVar3 = CMailBox::GetLoadedLetterCount(local_14);
    if (0x14 < iVar3) {
      CMailBox::SetLoadedLetterCount(local_14,0x14);
    }
    iVar3 = CMailBox::GetRemainSize(local_14);
    iVar5 = CMailBox::GetLoadedLetterCount(local_14);
    *(int *)(local_10 + 8) = iVar3 - iVar5;
    uVar4 = CMailBox::GetLastLoadLetterIdx(local_14);
    *(undefined4 *)(local_10 + 0xc) = uVar4;
    uVar4 = CMailBox::getMailLoadCount(local_14);
    *(undefined4 *)(local_10 + 0x10) = uVar4;
    CMailBox::GetPackageLoadLack(local_14,(uint *)(local_10 + 0x14),0x14);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return;
}
```
