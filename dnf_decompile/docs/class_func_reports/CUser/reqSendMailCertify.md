# reqSendMailCertify

`_ZN5CUser18reqSendMailCertifyEv`

`CUser::reqSendMailCertify()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868a51a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868a51a  _ZN5CUser18reqSendMailCertifyEv
#           CUser::reqSendMailCertify()
# range [0x0868a51a, 0x0868a781]
0868a51a +0x000:  push   %ebp
0868a51b +0x001:  mov    %esp,%ebp
0868a51d +0x003:  push   %esi
0868a51e +0x004:  push   %ebx
0868a51f +0x005:  sub    $0x40,%esp
0868a522 +0x008:  movl   $&_ZN10GlobalData19s_capchaDataManagerE,(%esp)
0868a529 +0x00f:  call   086977fa <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x404f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x404f
0868a52e +0x014:  test   %al,%al
0868a530 +0x016:  je     0868a53c <+0x22>
0868a532 +0x018:  mov    $0x0,%ebx
0868a537 +0x01d:  jmp    0868a779 <+0x25f>
0868a53c +0x022:  movl   $&_ZN10GlobalData19s_capchaDataManagerE,(%esp)
0868a543 +0x029:  call   08299f74 <_ZN8WongWork18CCapchaDataManager8peekDataEv>  ; WongWork::CCapchaDataManager::peekData()
0868a548 +0x02e:  mov    %eax,-0xc(%ebp)
0868a54b +0x031:  mov    -0xc(%ebp),%eax
0868a54e +0x034:  mov    0x8(%ebp),%edx
0868a551 +0x037:  add    $0x8e0ec,%edx
0868a557 +0x03d:  movl   $0xa,0x8(%esp)
0868a55f +0x045:  mov    %eax,0x4(%esp)
0868a563 +0x049:  mov    %edx,(%esp)
0868a566 +0x04c:  call   0807d8a0 <_init+0x198>
0868a56b +0x051:  lea    -0x18(%ebp),%eax
0868a56e +0x054:  mov    %eax,(%esp)
0868a571 +0x057:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868a576 +0x05c:  movl   $0x7d,0x8(%esp)
0868a57e +0x064:  movl   $0x0,0x4(%esp)
0868a586 +0x06c:  lea    -0x18(%ebp),%eax
0868a589 +0x06f:  mov    %eax,(%esp)
0868a58c +0x072:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868a591 +0x077:  movl   $0x5,0x4(%esp)
0868a599 +0x07f:  lea    -0x18(%ebp),%eax
0868a59c +0x082:  mov    %eax,(%esp)
0868a59f +0x085:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868a5a4 +0x08a:  mov    -0xc(%ebp),%eax
0868a5a7 +0x08d:  mov    0xa(%eax),%eax
0868a5aa +0x090:  mov    %eax,0x4(%esp)
0868a5ae +0x094:  lea    -0x18(%ebp),%eax
0868a5b1 +0x097:  mov    %eax,(%esp)
0868a5b4 +0x09a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868a5b9 +0x09f:  mov    -0xc(%ebp),%eax
0868a5bc +0x0a2:  mov    0xa(%eax),%eax
0868a5bf +0x0a5:  mov    -0xc(%ebp),%edx
0868a5c2 +0x0a8:  add    $0xe,%edx
0868a5c5 +0x0ab:  mov    %eax,0x8(%esp)
0868a5c9 +0x0af:  mov    %edx,0x4(%esp)
0868a5cd +0x0b3:  lea    -0x18(%ebp),%eax
0868a5d0 +0x0b6:  mov    %eax,(%esp)
0868a5d3 +0x0b9:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0868a5d8 +0x0be:  movl   $0x0,0x4(%esp)
0868a5e0 +0x0c6:  lea    -0x18(%ebp),%eax
0868a5e3 +0x0c9:  mov    %eax,(%esp)
0868a5e6 +0x0cc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868a5eb +0x0d1:  movw   $0x0,-0x1a(%ebp)
0868a5f1 +0x0d7:  movb   $0x0,-0x1b(%ebp)
0868a5f5 +0x0db:  movw   $0x0,-0x1e(%ebp)
0868a5fb +0x0e1:  lea    -0x1e(%ebp),%eax
0868a5fe +0x0e4:  mov    %eax,0xc(%esp)
0868a602 +0x0e8:  lea    -0x1b(%ebp),%eax
0868a605 +0x0eb:  mov    %eax,0x8(%esp)
0868a609 +0x0ef:  lea    -0x1a(%ebp),%eax
0868a60c +0x0f2:  mov    %eax,0x4(%esp)
0868a610 +0x0f6:  mov    0x8(%ebp),%eax
0868a613 +0x0f9:  mov    %eax,(%esp)
0868a616 +0x0fc:  call   08649ac4 <_ZN5CUser24GenerateCleanPadVeriDataERtRhS0_>  ; CUser::GenerateCleanPadVeriData(unsigned short&, unsigned char&, unsigned short&)
0868a61b +0x101:  movzwl -0x1a(%ebp),%eax
0868a61f +0x105:  movzwl %ax,%eax
0868a622 +0x108:  mov    %eax,0x4(%esp)
0868a626 +0x10c:  lea    -0x18(%ebp),%eax
0868a629 +0x10f:  mov    %eax,(%esp)
0868a62c +0x112:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0868a631 +0x117:  movzbl -0x1b(%ebp),%eax
0868a635 +0x11b:  movzbl %al,%eax
0868a638 +0x11e:  mov    %eax,0x4(%esp)
0868a63c +0x122:  lea    -0x18(%ebp),%eax
0868a63f +0x125:  mov    %eax,(%esp)
0868a642 +0x128:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868a647 +0x12d:  movzwl -0x1e(%ebp),%eax
0868a64b +0x131:  movzwl %ax,%eax
0868a64e +0x134:  mov    %eax,0x4(%esp)
0868a652 +0x138:  lea    -0x18(%ebp),%eax
0868a655 +0x13b:  mov    %eax,(%esp)
0868a658 +0x13e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0868a65d +0x143:  mov    0x8(%ebp),%eax
0868a660 +0x146:  mov    0x8e0fc(%eax),%eax
0868a666 +0x14c:  movzbl %al,%eax
0868a669 +0x14f:  mov    %eax,0x4(%esp)
0868a66d +0x153:  lea    -0x18(%ebp),%eax
0868a670 +0x156:  mov    %eax,(%esp)
0868a673 +0x159:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868a678 +0x15e:  movl   $0x1,0x4(%esp)
0868a680 +0x166:  lea    -0x18(%ebp),%eax
0868a683 +0x169:  mov    %eax,(%esp)
0868a686 +0x16c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868a68b +0x171:  movl   $0x1,0x4(%esp)
0868a693 +0x179:  lea    -0x18(%ebp),%eax
0868a696 +0x17c:  mov    %eax,(%esp)
0868a699 +0x17f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868a69e +0x184:  lea    -0x18(%ebp),%eax
0868a6a1 +0x187:  mov    %eax,0x4(%esp)
0868a6a5 +0x18b:  mov    0x8(%ebp),%eax
0868a6a8 +0x18e:  mov    %eax,(%esp)
0868a6ab +0x191:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868a6b0 +0x196:  movl   $0x0,0x4(%esp)
0868a6b8 +0x19e:  mov    0x8(%ebp),%eax
0868a6bb +0x1a1:  mov    %eax,(%esp)
0868a6be +0x1a4:  call   0823022a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58d4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58d4
0868a6c3 +0x1a9:  mov    0x8(%ebp),%eax
0868a6c6 +0x1ac:  movb   $0x0,0x8e3ed(%eax)
0868a6cd +0x1b3:  mov    0x8(%ebp),%eax
0868a6d0 +0x1b6:  mov    0x8e0f8(%eax),%eax
0868a6d6 +0x1bc:  cmp    $0x7ffffffe,%eax
0868a6db +0x1c1:  jbe    0868a6ea <+0x1d0>
0868a6dd +0x1c3:  mov    0x8(%ebp),%eax
0868a6e0 +0x1c6:  movl   $0x0,0x8e0f8(%eax)
0868a6ea +0x1d0:  mov    0x8(%ebp),%eax
0868a6ed +0x1d3:  mov    0x8e0f8(%eax),%eax
0868a6f3 +0x1d9:  lea    0x1(%eax),%edx
0868a6f6 +0x1dc:  mov    0x8(%ebp),%eax
0868a6f9 +0x1df:  mov    %edx,0x8e0f8(%eax)
0868a6ff +0x1e5:  mov    0x8(%ebp),%eax
0868a702 +0x1e8:  mov    0x8e0f8(%eax),%eax
0868a708 +0x1ee:  mov    %eax,%esi
0868a70a +0x1f0:  mov    0x8(%ebp),%eax
0868a70d +0x1f3:  mov    %eax,(%esp)
0868a710 +0x1f6:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0868a715 +0x1fb:  mov    %eax,%ebx
0868a717 +0x1fd:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0868a71c +0x202:  movl   $0xffffffff,0x18(%esp)
0868a724 +0x20a:  mov    %esi,0x14(%esp)
0868a728 +0x20e:  movl   $0x3c,0x10(%esp)
0868a730 +0x216:  movl   $0x9,0xc(%esp)
0868a738 +0x21e:  mov    %ebx,0x8(%esp)
0868a73c +0x222:  movl   $0x0,0x4(%esp)
0868a744 +0x22a:  mov    %eax,(%esp)
0868a747 +0x22d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0868a74c +0x232:  mov    $0x1,%ebx
0868a751 +0x237:  lea    -0x18(%ebp),%eax
0868a754 +0x23a:  mov    %eax,(%esp)
0868a757 +0x23d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868a75c +0x242:  jmp    0868a779 <+0x25f>
0868a75e +0x244:  mov    %edx,%ebx
0868a760 +0x246:  mov    %eax,%esi
0868a762 +0x248:  lea    -0x18(%ebp),%eax
0868a765 +0x24b:  mov    %eax,(%esp)
0868a768 +0x24e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868a76d +0x253:  mov    %esi,%eax
0868a76f +0x255:  mov    %ebx,%edx
0868a771 +0x257:  mov    %eax,(%esp)
0868a774 +0x25a:  call   08ae3750 <_Unwind_Resume>
0868a779 +0x25f:  mov    %ebx,%eax
0868a77b +0x261:  add    $0x40,%esp
0868a77e +0x264:  pop    %ebx
0868a77f +0x265:  pop    %esi
0868a780 +0x266:  pop    %ebp
0868a781 +0x267:  ret
```

## 反编译 C

```c
// CUser::reqSendMailCertify @ 0x868a51a

/* CUser::reqSendMailCertify() */

undefined4 __thiscall CUser::reqSendMailCertify(CUser *this)

{
  char cVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  undefined4 uVar4;
  ushort local_22;
  byte local_1f;
  ushort local_1e;
  PacketGuard local_1c [12];
  void *local_10;
  
  cVar1 = WongWork::CCapchaDataManager::isEmpty
                    ((CCapchaDataManager *)GlobalData::s_capchaDataManager);
  if (cVar1 == '\0') {
    local_10 = (void *)WongWork::CCapchaDataManager::peekData
                                 ((CCapchaDataManager *)GlobalData::s_capchaDataManager);
    memcpy(this + 0x8e0ec,local_10,10);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0868a58c to 0868a74b has its CatchHandler @ 0868a75e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x7d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,5);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)((int)local_10 + 10));
    InterfacePacketBuf::put_binary
              ((InterfacePacketBuf *)local_1c,(char *)((int)local_10 + 0xe),
               *(int *)((int)local_10 + 10));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    local_1e = 0;
    local_1f = 0;
    local_22 = 0;
    GenerateCleanPadVeriData(this,&local_1e,&local_1f,&local_22);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)local_1e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)local_1f);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)local_22);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(uint *)(this + 0x8e0fc) & 0xff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    Send(this,local_1c);
    setHumanCertified(this,false);
    this[0x8e3ed] = (CUser)0x0;
    if (0x7ffffffe < *(uint *)(this + 0x8e0f8)) {
      *(undefined4 *)(this + 0x8e0f8) = 0;
    }
    *(int *)(this + 0x8e0f8) = *(int *)(this + 0x8e0f8) + 1;
    uVar4 = *(undefined4 *)(this + 0x8e0f8);
    uVar2 = GetUID(this);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,0,uVar2,9,0x3c,uVar4,0xffffffff);
    uVar4 = 1;
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
