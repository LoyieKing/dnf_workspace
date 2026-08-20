# processSeriaRoomAniDecoEvent

`_ZN13Inter_LoadEtc28processSeriaRoomAniDecoEventE17seriaRoom_AniDecoR5CUser`

`Inter_LoadEtc::processSeriaRoomAniDecoEvent(seriaRoom_AniDeco, CUser&)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084e8428` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e8428  _ZN13Inter_LoadEtc28processSeriaRoomAniDecoEventE17seriaRoom_AniDecoR5CUser
#           Inter_LoadEtc::processSeriaRoomAniDecoEvent(seriaRoom_AniDeco, CUser&)
# range [0x084e8428, 0x084e84f5]
084e8428 +0x00:  push   %ebp
084e8429 +0x01:  mov    %esp,%ebp
084e842b +0x03:  push   %esi
084e842c +0x04:  push   %ebx
084e842d +0x05:  sub    $0x20,%esp
084e8430 +0x08:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084e8435 +0x0d:  movl   $0x69,0x4(%esp)
084e843d +0x15:  mov    %eax,(%esp)
084e8440 +0x18:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084e8445 +0x1d:  mov    (%eax),%edx
084e8447 +0x1f:  add    $0x34,%edx
084e844a +0x22:  mov    (%edx),%edx
084e844c +0x24:  movl   $0x0,0x4(%esp)
084e8454 +0x2c:  mov    %eax,(%esp)
084e8457 +0x2f:  call   *%edx
084e8459 +0x31:  test   %al,%al
084e845b +0x33:  je     084e84ef <+0xc7>
084e8461 +0x39:  mov    0x10(%ebp),%eax
084e8464 +0x3c:  mov    0xc(%ebp),%edx
084e8467 +0x3f:  mov    %edx,0x4(%esp)
084e846b +0x43:  mov    %eax,(%esp)
084e846e +0x46:  call   0822fb78 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5222>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5222
084e8473 +0x4b:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084e8478 +0x50:  movl   $0x69,0x4(%esp)
084e8480 +0x58:  mov    %eax,(%esp)
084e8483 +0x5b:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084e8488 +0x60:  mov    %eax,-0xc(%ebp)
084e848b +0x63:  cmpl   $0x0,-0xc(%ebp)
084e848f +0x67:  je     084e84ef <+0xc7>
084e8491 +0x69:  mov    0x10(%ebp),%eax
084e8494 +0x6c:  mov    %eax,0x4(%esp)
084e8498 +0x70:  mov    -0xc(%ebp),%eax
084e849b +0x73:  mov    %eax,(%esp)
084e849e +0x76:  call   0827b99a <_ZN21SeriaRoomAniDecoEvent13SendEventInfoER5CUser>  ; SeriaRoomAniDecoEvent::SendEventInfo(CUser&)
084e84a3 +0x7b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084e84aa +0x82:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084e84af +0x87:  mov    %eax,%esi
084e84b1 +0x89:  mov    0x10(%ebp),%eax
084e84b4 +0x8c:  mov    %eax,(%esp)
084e84b7 +0x8f:  call   082a66aa <_GLOBAL__I__ZN4CLog5this_E+0x2ad1>  ; global constructors keyed to CLog::this_+0x2ad1
084e84bc +0x94:  mov    %eax,%ebx
084e84be +0x96:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e84c3 +0x9b:  mov    0x37c(%eax),%eax
084e84c9 +0xa1:  mov    %esi,0x8(%esp)
084e84cd +0xa5:  mov    %ebx,0x4(%esp)
084e84d1 +0xa9:  mov    %eax,(%esp)
084e84d4 +0xac:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
084e84d9 +0xb1:  test   %al,%al
084e84db +0xb3:  je     084e84ef <+0xc7>
084e84dd +0xb5:  mov    0x10(%ebp),%eax
084e84e0 +0xb8:  mov    %eax,0x4(%esp)
084e84e4 +0xbc:  mov    -0xc(%ebp),%eax
084e84e7 +0xbf:  mov    %eax,(%esp)
084e84ea +0xc2:  call   0827b75a <_ZN21SeriaRoomAniDecoEvent15SendAniDecoItemER5CUser>  ; SeriaRoomAniDecoEvent::SendAniDecoItem(CUser&)
084e84ef +0xc7:  add    $0x20,%esp
084e84f2 +0xca:  pop    %ebx
084e84f3 +0xcb:  pop    %esi
084e84f4 +0xcc:  pop    %ebp
084e84f5 +0xcd:  ret
```

## 反编译 C

```c
// Inter_LoadEtc::processSeriaRoomAniDecoEvent @ 0x84e8428

/* Inter_LoadEtc::processSeriaRoomAniDecoEvent(seriaRoom_AniDeco, CUser&) */

void __thiscall
Inter_LoadEtc::processSeriaRoomAniDecoEvent
          (undefined4 this,undefined4 param_2,CUserCharacInfo *param_3)

{
  char cVar1;
  int *piVar2;
  SeriaRoomAniDecoEvent *this_00;
  long lVar3;
  long lVar4;
  int iVar5;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x69);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    CUserCharacInfo::setSeriaRoomAniDecoInfo(param_3,param_2);
    this_00 = (SeriaRoomAniDecoEvent *)
              CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x69);
    if (this_00 != (SeriaRoomAniDecoEvent *)0x0) {
      SeriaRoomAniDecoEvent::SendEventInfo(this_00,(CUser *)param_3);
      lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      lVar4 = CUserCharacInfo::getCurCharacLastPlayTick(param_3);
      iVar5 = G_CEnvironment();
      cVar1 = CheckDailyScheduleTime(*(int *)(iVar5 + 0x37c),lVar4,lVar3);
      if (cVar1 != '\0') {
        SeriaRoomAniDecoEvent::SendAniDecoItem(this_00,(CUser *)param_3);
      }
    }
  }
  return;
}
```
