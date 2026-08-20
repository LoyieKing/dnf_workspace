# dispatch_sig

`_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf`

`ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest` | `0x081a0362` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a0362  _ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf
#           ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig(CUser*, PacketBuf&)
# range [0x081a0362, 0x081a0611]
081a0362 +0x000:  push   %ebp
081a0363 +0x001:  mov    %esp,%ebp
081a0365 +0x003:  push   %esi
081a0366 +0x004:  push   %ebx
081a0367 +0x005:  sub    $0x30,%esp
081a036a +0x008:  cmpl   $0x0,0xc(%ebp)
081a036e +0x00c:  jne    081a037a <+0x18>
081a0370 +0x00e:  mov    $0x7b3,%ebx
081a0375 +0x013:  jmp    081a0608 <+0x2a6>
081a037a +0x018:  mov    0xc(%ebp),%eax
081a037d +0x01b:  mov    %eax,(%esp)
081a0380 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081a0385 +0x023:  test   %eax,%eax
081a0387 +0x025:  sete   %al
081a038a +0x028:  test   %al,%al
081a038c +0x02a:  je     081a0398 <+0x36>
081a038e +0x02c:  mov    $0x0,%ebx
081a0393 +0x031:  jmp    081a0608 <+0x2a6>
081a0398 +0x036:  mov    0xc(%ebp),%eax
081a039b +0x039:  mov    %eax,(%esp)
081a039e +0x03c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081a03a3 +0x041:  cmp    $0x2,%eax
081a03a6 +0x044:  jle    081a03b8 <+0x56>
081a03a8 +0x046:  mov    0xc(%ebp),%eax
081a03ab +0x049:  mov    %eax,(%esp)
081a03ae +0x04c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081a03b3 +0x051:  cmp    $0x4,%eax
081a03b6 +0x054:  jle    081a03bf <+0x5d>
081a03b8 +0x056:  mov    $0x1,%eax
081a03bd +0x05b:  jmp    081a03c4 <+0x62>
081a03bf +0x05d:  mov    $0x0,%eax
081a03c4 +0x062:  test   %al,%al
081a03c6 +0x064:  je     081a03d2 <+0x70>
081a03c8 +0x066:  mov    $0x0,%ebx
081a03cd +0x06b:  jmp    081a0608 <+0x2a6>
081a03d2 +0x070:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081a03d7 +0x075:  movl   $0xa0,0x4(%esp)
081a03df +0x07d:  mov    %eax,(%esp)
081a03e2 +0x080:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081a03e7 +0x085:  mov    %eax,-0xc(%ebp)
081a03ea +0x088:  cmpl   $0x0,-0xc(%ebp)
081a03ee +0x08c:  je     081a0411 <+0xaf>
081a03f0 +0x08e:  mov    -0xc(%ebp),%eax
081a03f3 +0x091:  mov    (%eax),%eax
081a03f5 +0x093:  add    $0x34,%eax
081a03f8 +0x096:  mov    (%eax),%edx
081a03fa +0x098:  mov    -0xc(%ebp),%eax
081a03fd +0x09b:  movl   $0x0,0x4(%esp)
081a0405 +0x0a3:  mov    %eax,(%esp)
081a0408 +0x0a6:  call   *%edx
081a040a +0x0a8:  xor    $0x1,%eax
081a040d +0x0ab:  test   %al,%al
081a040f +0x0ad:  je     081a0418 <+0xb6>
081a0411 +0x0af:  mov    $0x1,%eax
081a0416 +0x0b4:  jmp    081a041d <+0xbb>
081a0418 +0x0b6:  mov    $0x0,%eax
081a041d +0x0bb:  test   %al,%al
081a041f +0x0bd:  je     081a048e <+0x12c>
081a0421 +0x0bf:  mov    -0xc(%ebp),%eax
081a0424 +0x0c2:  mov    (%eax),%eax
081a0426 +0x0c4:  add    $0x34,%eax
081a0429 +0x0c7:  mov    (%eax),%edx
081a042b +0x0c9:  mov    -0xc(%ebp),%eax
081a042e +0x0cc:  movl   $0x0,0x4(%esp)
081a0436 +0x0d4:  mov    %eax,(%esp)
081a0439 +0x0d7:  call   *%edx
081a043b +0x0d9:  movzbl %al,%edx
081a043e +0x0dc:  cmpl   $0x0,-0xc(%ebp)
081a0442 +0x0e0:  jne    081a044b <+0xe9>
081a0444 +0x0e2:  mov    $"nullptr",%eax
081a0449 +0x0e7:  jmp    081a0450 <+0xee>
081a044b +0x0e9:  mov    $"ok",%eax
081a0450 +0x0ee:  mov    %edx,0x18(%esp)
081a0454 +0x0f2:  mov    %eax,0x14(%esp)
081a0458 +0x0f6:  movl   $"[Taiwan, Event] stayEvent=%s eventing:%d",0x10(%esp)
081a0460 +0x0fe:  movl   $0x7c1,0xc(%esp)
081a0468 +0x106:  movl   $&_ZZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
081a0470 +0x10e:  movl   $"localjapan/Arad_PacketDispatcher.cpp",0x4(%esp)
081a0478 +0x116:  movl   $0x1,(%esp)
081a047f +0x11d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081a0484 +0x122:  mov    $0x0,%ebx
081a0489 +0x127:  jmp    081a0608 <+0x2a6>
081a048e +0x12c:  mov    0xc(%ebp),%eax
081a0491 +0x12f:  mov    %eax,(%esp)
081a0494 +0x132:  call   086931b4 <_ZN5CUser23GetEventCreateDnfRewardEv>  ; CUser::GetEventCreateDnfReward()
081a0499 +0x137:  xor    $0x1,%eax
081a049c +0x13a:  test   %al,%al
081a049e +0x13c:  je     081a04b6 <+0x154>
081a04a0 +0x13e:  mov    -0xc(%ebp),%eax
081a04a3 +0x141:  mov    %eax,(%esp)
081a04a6 +0x144:  call   08164092 <_ZN15CEventCreateDnf17IsRewardConditionEv>  ; CEventCreateDnf::IsRewardCondition()
081a04ab +0x149:  test   %al,%al
081a04ad +0x14b:  je     081a04b6 <+0x154>
081a04af +0x14d:  mov    $0x1,%eax
081a04b4 +0x152:  jmp    081a04bb <+0x159>
081a04b6 +0x154:  mov    $0x0,%eax
081a04bb +0x159:  test   %al,%al
081a04bd +0x15b:  je     081a050a <+0x1a8>
081a04bf +0x15d:  movl   $0x1,0x4(%esp)
081a04c7 +0x165:  mov    0xc(%ebp),%eax
081a04ca +0x168:  mov    %eax,(%esp)
081a04cd +0x16b:  call   08693198 <_ZN5CUser23SetEventCreateDnfRewardEb>  ; CUser::SetEventCreateDnfReward(bool)
081a04d2 +0x170:  mov    0xc(%ebp),%eax
081a04d5 +0x173:  mov    %eax,(%esp)
081a04d8 +0x176:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081a04dd +0x17b:  mov    %eax,%ebx
081a04df +0x17d:  mov    0xc(%ebp),%eax
081a04e2 +0x180:  mov    %eax,(%esp)
081a04e5 +0x183:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081a04ea +0x188:  mov    %ebx,0x4(%esp)
081a04ee +0x18c:  mov    %eax,(%esp)
081a04f1 +0x18f:  call   0815c25c <_ZN25DBInsertCreateDnfUserInfo11makeRequestEij>  ; DBInsertCreateDnfUserInfo::makeRequest(int, unsigned int)
081a04f6 +0x194:  mov    0xc(%ebp),%eax
081a04f9 +0x197:  mov    %eax,0x4(%esp)
081a04fd +0x19b:  mov    -0xc(%ebp),%eax
081a0500 +0x19e:  mov    %eax,(%esp)
081a0503 +0x1a1:  call   0816426c <_ZN15CEventCreateDnf10SendRewardEP5CUser>  ; CEventCreateDnf::SendReward(CUser*)
081a0508 +0x1a6:  jmp    081a0560 <+0x1fe>
081a050a +0x1a8:  movl   $0x1,0x8(%esp)
081a0512 +0x1b0:  movl   $0x258,0x4(%esp)
081a051a +0x1b8:  mov    0xc(%ebp),%eax
081a051d +0x1bb:  mov    %eax,(%esp)
081a0520 +0x1be:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081a0525 +0x1c3:  mov    0xc(%ebp),%eax
081a0528 +0x1c6:  mov    %eax,(%esp)
081a052b +0x1c9:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081a0530 +0x1ce:  mov    %eax,0x14(%esp)
081a0534 +0x1d2:  movl   $"[Taiwan, Event] condition error m_id:%d",0x10(%esp)
081a053c +0x1da:  movl   $0x7d6,0xc(%esp)
081a0544 +0x1e2:  movl   $&_ZZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
081a054c +0x1ea:  movl   $"localjapan/Arad_PacketDispatcher.cpp",0x4(%esp)
081a0554 +0x1f2:  movl   $0x1,(%esp)
081a055b +0x1f9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081a0560 +0x1fe:  lea    -0x18(%ebp),%eax
081a0563 +0x201:  mov    %eax,(%esp)
081a0566 +0x204:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081a056b +0x209:  movl   $0x22d,0x8(%esp)
081a0573 +0x211:  movl   $0x0,0x4(%esp)
081a057b +0x219:  lea    -0x18(%ebp),%eax
081a057e +0x21c:  mov    %eax,(%esp)
081a0581 +0x21f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081a0586 +0x224:  mov    -0xc(%ebp),%eax
081a0589 +0x227:  mov    %eax,(%esp)
081a058c +0x22a:  call   08164260 <_ZN15CEventCreateDnf7GetRateEv>  ; CEventCreateDnf::GetRate()
081a0591 +0x22f:  movzwl %ax,%eax
081a0594 +0x232:  mov    %eax,0x4(%esp)
081a0598 +0x236:  lea    -0x18(%ebp),%eax
081a059b +0x239:  mov    %eax,(%esp)
081a059e +0x23c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081a05a3 +0x241:  movl   $0x0,0x4(%esp)
081a05ab +0x249:  lea    -0x18(%ebp),%eax
081a05ae +0x24c:  mov    %eax,(%esp)
081a05b1 +0x24f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081a05b6 +0x254:  movl   $0x1,0x4(%esp)
081a05be +0x25c:  lea    -0x18(%ebp),%eax
081a05c1 +0x25f:  mov    %eax,(%esp)
081a05c4 +0x262:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081a05c9 +0x267:  lea    -0x18(%ebp),%eax
081a05cc +0x26a:  mov    %eax,0x4(%esp)
081a05d0 +0x26e:  mov    0xc(%ebp),%eax
081a05d3 +0x271:  mov    %eax,(%esp)
081a05d6 +0x274:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081a05db +0x279:  mov    $0x0,%ebx
081a05e0 +0x27e:  lea    -0x18(%ebp),%eax
081a05e3 +0x281:  mov    %eax,(%esp)
081a05e6 +0x284:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081a05eb +0x289:  jmp    081a0608 <+0x2a6>
081a05ed +0x28b:  mov    %edx,%ebx
081a05ef +0x28d:  mov    %eax,%esi
081a05f1 +0x28f:  lea    -0x18(%ebp),%eax
081a05f4 +0x292:  mov    %eax,(%esp)
081a05f7 +0x295:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081a05fc +0x29a:  mov    %esi,%eax
081a05fe +0x29c:  mov    %ebx,%edx
081a0600 +0x29e:  mov    %eax,(%esp)
081a0603 +0x2a1:  call   08ae3750 <_Unwind_Resume>
081a0608 +0x2a6:  mov    %ebx,%eax
081a060a +0x2a8:  add    $0x30,%esp
081a060d +0x2ab:  pop    %ebx
081a060e +0x2ac:  pop    %esi
081a060f +0x2ad:  pop    %ebp
081a0610 +0x2ae:  ret
081a0611 +0x2af:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig @ 0x81a0362

/* ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig(CUser*, PacketBuf&) */

undefined4
ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  PacketGuard local_1c [12];
  CEventCreateDnf *local_10;
  
  if (param_2 == (PacketBuf *)0x0) {
    return 0x7b3;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar3 != 0) {
    iVar3 = CUser::get_state((CUser *)param_2);
    if ((iVar3 < 3) || (iVar3 = CUser::get_state((CUser *)param_2), 4 < iVar3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      local_10 = (CEventCreateDnf *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
      if ((local_10 == (CEventCreateDnf *)0x0) ||
         (cVar2 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0), cVar2 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        cVar2 = CUser::GetEventCreateDnfReward((CUser *)param_2);
        if ((cVar2 == '\x01') ||
           (cVar2 = CEventCreateDnf::IsRewardCondition(local_10), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          CUser::SetEventCreateDnfReward((CUser *)param_2,true);
          uVar4 = CUser::get_acc_id((CUser *)param_2);
          iVar3 = CUser::GetUID((CUser *)param_2);
          DBInsertCreateDnfUserInfo::makeRequest(iVar3,uVar4);
          CEventCreateDnf::SendReward(local_10,(CUser *)param_2);
        }
        else {
          CUser::SendCmdErrorPacket((CUser *)param_2,600,1);
          uVar6 = CUser::get_acc_id((CUser *)param_2);
          LogManager::logFormat
                    (1,"localjapan/Arad_PacketDispatcher.cpp",
                     "virtual int ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig(CUser*, PacketBuf&)"
                     ,0x7d6,"[Taiwan, Event] condition error m_id:%d",uVar6);
        }
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081a0581 to 081a05da has its CatchHandler @ 081a05ed */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x22d);
        uVar4 = CEventCreateDnf::GetRate(local_10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar4 & 0xffff);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        PacketGuard::~PacketGuard(local_1c);
        return 0;
      }
      uVar4 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
      if (local_10 == (CEventCreateDnf *)0x0) {
        pcVar5 = "nullptr";
      }
      else {
        pcVar5 = "ok";
      }
      LogManager::logFormat
                (1,"localjapan/Arad_PacketDispatcher.cpp",
                 "virtual int ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig(CUser*, PacketBuf&)"
                 ,0x7c1,"[Taiwan, Event] stayEvent=%s eventing:%d",pcVar5,uVar4 & 0xff);
      return 0;
    }
    return 0;
  }
  return 0;
}
```
