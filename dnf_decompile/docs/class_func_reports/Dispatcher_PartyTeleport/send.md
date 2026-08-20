# send

`_ZN24Dispatcher_PartyTeleport4sendEP5CUserR9ParamBase`

`Dispatcher_PartyTeleport::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PartyTeleport` | `0x081dc426` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dc426  _ZN24Dispatcher_PartyTeleport4sendEP5CUserR9ParamBase
#           Dispatcher_PartyTeleport::send(CUser*, ParamBase&)
# range [0x081dc426, 0x081dc597]
081dc426 +0x000:  push   %ebp
081dc427 +0x001:  mov    %esp,%ebp
081dc429 +0x003:  push   %esi
081dc42a +0x004:  push   %ebx
081dc42b +0x005:  sub    $0x30,%esp
081dc42e +0x008:  mov    0x10(%ebp),%eax
081dc431 +0x00b:  mov    %eax,-0x10(%ebp)
081dc434 +0x00e:  lea    -0x1c(%ebp),%eax
081dc437 +0x011:  mov    %eax,(%esp)
081dc43a +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081dc43f +0x019:  lea    -0x1c(%ebp),%eax
081dc442 +0x01c:  mov    %eax,(%esp)
081dc445 +0x01f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081dc44a +0x024:  movl   $0x1b3,0x8(%esp)
081dc452 +0x02c:  movl   $0x1,0x4(%esp)
081dc45a +0x034:  lea    -0x1c(%ebp),%eax
081dc45d +0x037:  mov    %eax,(%esp)
081dc460 +0x03a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081dc465 +0x03f:  mov    -0x10(%ebp),%eax
081dc468 +0x042:  mov    0x4(%eax),%eax
081dc46b +0x045:  test   %eax,%eax
081dc46d +0x047:  jne    081dc484 <+0x5e>
081dc46f +0x049:  movl   $0x1,0x4(%esp)
081dc477 +0x051:  lea    -0x1c(%ebp),%eax
081dc47a +0x054:  mov    %eax,(%esp)
081dc47d +0x057:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dc482 +0x05c:  jmp    081dc4dd <+0xb7>
081dc484 +0x05e:  movl   $0x0,0x4(%esp)
081dc48c +0x066:  lea    -0x1c(%ebp),%eax
081dc48f +0x069:  mov    %eax,(%esp)
081dc492 +0x06c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dc497 +0x071:  mov    -0x10(%ebp),%eax
081dc49a +0x074:  mov    0x4(%eax),%eax
081dc49d +0x077:  movzbl %al,%eax
081dc4a0 +0x07a:  mov    %eax,0x4(%esp)
081dc4a4 +0x07e:  lea    -0x1c(%ebp),%eax
081dc4a7 +0x081:  mov    %eax,(%esp)
081dc4aa +0x084:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dc4af +0x089:  mov    -0x10(%ebp),%eax
081dc4b2 +0x08c:  movzbl 0x8(%eax),%eax
081dc4b6 +0x090:  movzbl %al,%eax
081dc4b9 +0x093:  mov    %eax,0x4(%esp)
081dc4bd +0x097:  lea    -0x1c(%ebp),%eax
081dc4c0 +0x09a:  mov    %eax,(%esp)
081dc4c3 +0x09d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dc4c8 +0x0a2:  mov    -0x10(%ebp),%eax
081dc4cb +0x0a5:  mov    0xc(%eax),%eax
081dc4ce +0x0a8:  mov    %eax,0x4(%esp)
081dc4d2 +0x0ac:  lea    -0x1c(%ebp),%eax
081dc4d5 +0x0af:  mov    %eax,(%esp)
081dc4d8 +0x0b2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081dc4dd +0x0b7:  movl   $0x1,0x4(%esp)
081dc4e5 +0x0bf:  lea    -0x1c(%ebp),%eax
081dc4e8 +0x0c2:  mov    %eax,(%esp)
081dc4eb +0x0c5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081dc4f0 +0x0ca:  lea    -0x1c(%ebp),%eax
081dc4f3 +0x0cd:  mov    %eax,0x4(%esp)
081dc4f7 +0x0d1:  mov    0xc(%ebp),%eax
081dc4fa +0x0d4:  mov    %eax,(%esp)
081dc4fd +0x0d7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081dc502 +0x0dc:  mov    -0x10(%ebp),%eax
081dc505 +0x0df:  mov    0x4(%eax),%eax
081dc508 +0x0e2:  test   %eax,%eax
081dc50a +0x0e4:  jne    081dc586 <+0x160>
081dc50c +0x0e6:  mov    0xc(%ebp),%eax
081dc50f +0x0e9:  mov    %eax,(%esp)
081dc512 +0x0ec:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081dc517 +0x0f1:  mov    %eax,-0xc(%ebp)
081dc51a +0x0f4:  cmpl   $0x0,-0xc(%ebp)
081dc51e +0x0f8:  je     081dc586 <+0x160>
081dc520 +0x0fa:  mov    -0xc(%ebp),%eax
081dc523 +0x0fd:  mov    %eax,(%esp)
081dc526 +0x100:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc52b +0x105:  movl   $0x3,0x4(%esp)
081dc533 +0x10d:  mov    %eax,(%esp)
081dc536 +0x110:  call   085bc2b0 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi>  ; CPartyTelePort::send_teleport_effect_at_different_place(int)
081dc53b +0x115:  mov    -0xc(%ebp),%eax
081dc53e +0x118:  mov    %eax,(%esp)
081dc541 +0x11b:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc546 +0x120:  movl   $0x0,0x4(%esp)
081dc54e +0x128:  mov    %eax,(%esp)
081dc551 +0x12b:  call   085bb96e <_ZN14CPartyTelePort20send_teleport_statusEh>  ; CPartyTelePort::send_teleport_status(unsigned char)
081dc556 +0x130:  mov    -0xc(%ebp),%eax
081dc559 +0x133:  mov    %eax,(%esp)
081dc55c +0x136:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc561 +0x13b:  mov    %eax,(%esp)
081dc564 +0x13e:  call   085bbbb8 <_ZN14CPartyTelePort16process_teleportEv>  ; CPartyTelePort::process_teleport()
081dc569 +0x143:  jmp    081dc586 <+0x160>
081dc56b +0x145:  mov    %edx,%ebx
081dc56d +0x147:  mov    %eax,%esi
081dc56f +0x149:  lea    -0x1c(%ebp),%eax
081dc572 +0x14c:  mov    %eax,(%esp)
081dc575 +0x14f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081dc57a +0x154:  mov    %esi,%eax
081dc57c +0x156:  mov    %ebx,%edx
081dc57e +0x158:  mov    %eax,(%esp)
081dc581 +0x15b:  call   08ae3750 <_Unwind_Resume>
081dc586 +0x160:  lea    -0x1c(%ebp),%eax
081dc589 +0x163:  mov    %eax,(%esp)
081dc58c +0x166:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081dc591 +0x16b:  add    $0x30,%esp
081dc594 +0x16e:  pop    %ebx
081dc595 +0x16f:  pop    %esi
081dc596 +0x170:  pop    %ebp
081dc597 +0x171:  ret
```

## 反编译 C

```c
// Dispatcher_PartyTeleport::send @ 0x81dc426

/* Dispatcher_PartyTeleport::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_PartyTeleport::send(Dispatcher_PartyTeleport *this,CUser *param_1,ParamBase *param_2)

{
  CPartyTelePort *pCVar1;
  PacketGuard local_20 [12];
  ParamBase *local_14;
  CParty *local_10;
  
  local_14 = param_2;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081dc445 to 081dc568 has its CatchHandler @ 081dc56b */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x1b3);
  if (*(int *)(local_14 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(uint *)(local_14 + 4) & 0xff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)(byte)local_14[8]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0xc));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  if (*(int *)(local_14 + 4) == 0) {
    local_10 = (CParty *)CUser::GetParty(param_1);
    if (local_10 != (CParty *)0x0) {
      pCVar1 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
      CPartyTelePort::send_teleport_effect_at_different_place(pCVar1,3);
      pCVar1 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
      CPartyTelePort::send_teleport_status(pCVar1,'\0');
      pCVar1 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
      CPartyTelePort::process_teleport(pCVar1);
    }
  }
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
