# handleSetUserPCRoom

`_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll`

`WongWork::CHandlePremium::handleSetUserPCRoom(CUser*, long, long)`

| 类 | 地址 |
|---|---|
| `WongWork::CHandlePremium` | `0x086b02fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b02fe  _ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll
#           WongWork::CHandlePremium::handleSetUserPCRoom(CUser*, long, long)
# range [0x086b02fe, 0x086b0593]
086b02fe +0x000:  push   %ebp
086b02ff +0x001:  mov    %esp,%ebp
086b0301 +0x003:  push   %edi
086b0302 +0x004:  push   %esi
086b0303 +0x005:  push   %ebx
086b0304 +0x006:  sub    $0x4c,%esp
086b0307 +0x009:  movl   $0xc,0x4(%esp)
086b030f +0x011:  mov    0x8(%ebp),%eax
086b0312 +0x014:  mov    %eax,(%esp)
086b0315 +0x017:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
086b031a +0x01c:  mov    %al,-0x1d(%ebp)
086b031d +0x01f:  movl   $0x1,0x14(%esp)
086b0325 +0x027:  movl   $0x0,0x10(%esp)
086b032d +0x02f:  mov    0x10(%ebp),%eax
086b0330 +0x032:  mov    %eax,0xc(%esp)
086b0334 +0x036:  mov    0xc(%ebp),%eax
086b0337 +0x039:  mov    %eax,0x8(%esp)
086b033b +0x03d:  movl   $0xc,0x4(%esp)
086b0343 +0x045:  mov    0x8(%ebp),%eax
086b0346 +0x048:  mov    %eax,(%esp)
086b0349 +0x04b:  call   086af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>  ; WongWork::CHandlePremium::handleSetUserPremium(CUser*, ENUM_PREMIUM_TYPE, long, long, int, bool)
086b034e +0x050:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086b0355 +0x057:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086b035a +0x05c:  mov    %eax,-0x1c(%ebp)
086b035d +0x05f:  mov    -0x1c(%ebp),%eax
086b0360 +0x062:  mov    0x10(%ebp),%edx
086b0363 +0x065:  mov    %edx,%ecx
086b0365 +0x067:  sub    %eax,%ecx
086b0367 +0x069:  mov    %ecx,%eax
086b0369 +0x06b:  cmp    $0x93a7f,%eax
086b036e +0x070:  jg     086b03e0 <+0xe2>
086b0370 +0x072:  mov    -0x1c(%ebp),%eax
086b0373 +0x075:  mov    0x10(%ebp),%edx
086b0376 +0x078:  mov    %edx,%ecx
086b0378 +0x07a:  sub    %eax,%ecx
086b037a +0x07c:  mov    %ecx,%eax
086b037c +0x07e:  cmp    $0x258,%eax
086b0381 +0x083:  jle    086b03e0 <+0xe2>
086b0383 +0x085:  mov    0x8(%ebp),%eax
086b0386 +0x088:  mov    %eax,(%esp)
086b0389 +0x08b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086b038e +0x090:  mov    %eax,%esi
086b0390 +0x092:  mov    -0x1c(%ebp),%eax
086b0393 +0x095:  mov    0x10(%ebp),%edx
086b0396 +0x098:  mov    %edx,%ecx
086b0398 +0x09a:  sub    %eax,%ecx
086b039a +0x09c:  mov    %ecx,%eax
086b039c +0x09e:  lea    -0x258(%eax),%edi
086b03a2 +0x0a4:  mov    0x8(%ebp),%eax
086b03a5 +0x0a7:  mov    %eax,(%esp)
086b03a8 +0x0aa:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086b03ad +0x0af:  mov    %eax,%ebx
086b03af +0x0b1:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086b03b4 +0x0b6:  mov    %esi,0x18(%esp)
086b03b8 +0x0ba:  movl   $0xc,0x14(%esp)
086b03c0 +0x0c2:  mov    %edi,0x10(%esp)
086b03c4 +0x0c6:  movl   $0x7,0xc(%esp)
086b03cc +0x0ce:  mov    %ebx,0x8(%esp)
086b03d0 +0x0d2:  movl   $0x0,0x4(%esp)
086b03d8 +0x0da:  mov    %eax,(%esp)
086b03db +0x0dd:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086b03e0 +0x0e2:  mov    0x8(%ebp),%eax
086b03e3 +0x0e5:  mov    %eax,(%esp)
086b03e6 +0x0e8:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086b03eb +0x0ed:  cmp    $0x2,%eax
086b03ee +0x0f0:  setg   %al
086b03f1 +0x0f3:  test   %al,%al
086b03f3 +0x0f5:  je     086b04da <+0x1dc>
086b03f9 +0x0fb:  mov    -0x1c(%ebp),%eax
086b03fc +0x0fe:  mov    0x10(%ebp),%edx
086b03ff +0x101:  mov    %edx,%ecx
086b0401 +0x103:  sub    %eax,%ecx
086b0403 +0x105:  mov    %ecx,%eax
086b0405 +0x107:  mov    %eax,0x8(%esp)
086b0409 +0x10b:  movl   $0xc,0x4(%esp)
086b0411 +0x113:  mov    0x8(%ebp),%eax
086b0414 +0x116:  mov    %eax,(%esp)
086b0417 +0x119:  call   086af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>  ; WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser*, int, int)
086b041c +0x11e:  movzbl -0x1d(%ebp),%eax
086b0420 +0x122:  xor    $0x1,%eax
086b0423 +0x125:  test   %al,%al
086b0425 +0x127:  je     086b045f <+0x161>
086b0427 +0x129:  movl   $0xc,0x4(%esp)
086b042f +0x131:  mov    0x8(%ebp),%eax
086b0432 +0x134:  mov    %eax,(%esp)
086b0435 +0x137:  call   086afc32 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE>  ; WongWork::CHandlePremium::handlePremiumEffect(CUser*, ENUM_PREMIUM_TYPE)
086b043a +0x13c:  movl   $0x0,0xc(%esp)
086b0442 +0x144:  movl   $0x2,0x8(%esp)
086b044a +0x14c:  movl   $0x0,0x4(%esp)
086b0452 +0x154:  mov    0x8(%ebp),%eax
086b0455 +0x157:  mov    %eax,(%esp)
086b0458 +0x15a:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
086b045d +0x15f:  jmp    086b04da <+0x1dc>
086b045f +0x161:  mov    -0x1c(%ebp),%eax
086b0462 +0x164:  mov    0x10(%ebp),%edx
086b0465 +0x167:  mov    %edx,%ecx
086b0467 +0x169:  sub    %eax,%ecx
086b0469 +0x16b:  mov    %ecx,%eax
086b046b +0x16d:  cmp    $0x93a7f,%eax
086b0470 +0x172:  jg     086b04da <+0x1dc>
086b0472 +0x174:  mov    -0x1c(%ebp),%eax
086b0475 +0x177:  mov    0x10(%ebp),%edx
086b0478 +0x17a:  mov    %edx,%ecx
086b047a +0x17c:  sub    %eax,%ecx
086b047c +0x17e:  mov    %ecx,%eax
086b047e +0x180:  cmp    $0x258,%eax
086b0483 +0x185:  jle    086b04da <+0x1dc>
086b0485 +0x187:  mov    0x8(%ebp),%eax
086b0488 +0x18a:  mov    %eax,(%esp)
086b048b +0x18d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086b0490 +0x192:  mov    %eax,%esi
086b0492 +0x194:  mov    -0x1c(%ebp),%eax
086b0495 +0x197:  mov    0x10(%ebp),%edx
086b0498 +0x19a:  mov    %edx,%edi
086b049a +0x19c:  sub    %eax,%edi
086b049c +0x19e:  mov    0x8(%ebp),%eax
086b049f +0x1a1:  mov    %eax,(%esp)
086b04a2 +0x1a4:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086b04a7 +0x1a9:  mov    %eax,%ebx
086b04a9 +0x1ab:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086b04ae +0x1b0:  mov    %esi,0x18(%esp)
086b04b2 +0x1b4:  movl   $0xc,0x14(%esp)
086b04ba +0x1bc:  mov    %edi,0x10(%esp)
086b04be +0x1c0:  movl   $0x4,0xc(%esp)
086b04c6 +0x1c8:  mov    %ebx,0x8(%esp)
086b04ca +0x1cc:  movl   $0x0,0x4(%esp)
086b04d2 +0x1d4:  mov    %eax,(%esp)
086b04d5 +0x1d7:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086b04da +0x1dc:  lea    -0x2c(%ebp),%eax
086b04dd +0x1df:  mov    %eax,(%esp)
086b04e0 +0x1e2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086b04e5 +0x1e7:  movl   $0x1aa,0x8(%esp)
086b04ed +0x1ef:  movl   $0x0,0x4(%esp)
086b04f5 +0x1f7:  lea    -0x2c(%ebp),%eax
086b04f8 +0x1fa:  mov    %eax,(%esp)
086b04fb +0x1fd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086b0500 +0x202:  movl   $0x1,0x4(%esp)
086b0508 +0x20a:  mov    0x8(%ebp),%eax
086b050b +0x20d:  mov    %eax,(%esp)
086b050e +0x210:  call   086772d2 <_ZNK5CUser22HasCurCharacRentalItemEi>  ; CUser::HasCurCharacRentalItem(int) const
086b0513 +0x215:  test   %al,%al
086b0515 +0x217:  je     086b052c <+0x22e>
086b0517 +0x219:  movl   $0x1,0x4(%esp)
086b051f +0x221:  lea    -0x2c(%ebp),%eax
086b0522 +0x224:  mov    %eax,(%esp)
086b0525 +0x227:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b052a +0x22c:  jmp    086b053f <+0x241>
086b052c +0x22e:  movl   $0x0,0x4(%esp)
086b0534 +0x236:  lea    -0x2c(%ebp),%eax
086b0537 +0x239:  mov    %eax,(%esp)
086b053a +0x23c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b053f +0x241:  movl   $0x1,0x4(%esp)
086b0547 +0x249:  lea    -0x2c(%ebp),%eax
086b054a +0x24c:  mov    %eax,(%esp)
086b054d +0x24f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086b0552 +0x254:  lea    -0x2c(%ebp),%eax
086b0555 +0x257:  mov    %eax,0x4(%esp)
086b0559 +0x25b:  mov    0x8(%ebp),%eax
086b055c +0x25e:  mov    %eax,(%esp)
086b055f +0x261:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086b0564 +0x266:  jmp    086b0581 <+0x283>
086b0566 +0x268:  mov    %edx,%ebx
086b0568 +0x26a:  mov    %eax,%esi
086b056a +0x26c:  lea    -0x2c(%ebp),%eax
086b056d +0x26f:  mov    %eax,(%esp)
086b0570 +0x272:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b0575 +0x277:  mov    %esi,%eax
086b0577 +0x279:  mov    %ebx,%edx
086b0579 +0x27b:  mov    %eax,(%esp)
086b057c +0x27e:  call   08ae3750 <_Unwind_Resume>
086b0581 +0x283:  lea    -0x2c(%ebp),%eax
086b0584 +0x286:  mov    %eax,(%esp)
086b0587 +0x289:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b058c +0x28e:  add    $0x4c,%esp
086b058f +0x291:  pop    %ebx
086b0590 +0x292:  pop    %esi
086b0591 +0x293:  pop    %edi
086b0592 +0x294:  pop    %ebp
086b0593 +0x295:  ret
```

## 反编译 C

```c
// WongWork::CHandlePremium::handleSetUserPCRoom @ 0x86b02fe

/* WongWork::CHandlePremium::handleSetUserPCRoom(CUser*, long, long) */

void WongWork::CHandlePremium::handleSetUserPCRoom(CUser *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TimerQueue *pTVar4;
  int iVar5;
  PacketGuard local_30 [15];
  char local_21;
  int local_20;
  
  local_21 = CUser::isAffectedPremium(param_1,0xc);
  handleSetUserPremium(param_1,0xc,param_2,param_3,0,1);
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if ((param_3 - local_20 < 0x93a80) && (600 < param_3 - local_20)) {
    uVar2 = CUser::get_acc_id(param_1);
    iVar5 = param_3 - local_20;
    uVar3 = CUser::GetUID(param_1);
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,0,uVar3,7,iVar5 + -600,0xc,uVar2);
  }
  iVar5 = CUser::get_state(param_1);
  if (2 < iVar5) {
    handleNotifyPremiumInfo(param_1,0xc,param_3 - local_20);
    if (local_21 == '\x01') {
      if ((param_3 - local_20 < 0x93a80) && (600 < param_3 - local_20)) {
        uVar2 = CUser::get_acc_id(param_1);
        iVar5 = param_3 - local_20;
        uVar3 = CUser::GetUID(param_1);
        pTVar4 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar4,0,uVar3,4,iVar5,0xc,uVar2);
      }
    }
    else {
      handlePremiumEffect(param_1,0xc);
      CUser::SendNotiPacket(param_1,0,2,0);
    }
  }
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 086b04fb to 086b0563 has its CatchHandler @ 086b0566 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x1aa);
  cVar1 = CUser::HasCurCharacRentalItem(param_1,1);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send(param_1,local_30);
  PacketGuard::~PacketGuard(local_30);
  return;
}
```
