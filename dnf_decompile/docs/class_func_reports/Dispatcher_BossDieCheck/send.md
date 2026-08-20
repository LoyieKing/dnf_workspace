# send

`_ZN23Dispatcher_BossDieCheck4sendEP5CUserR9ParamBase`

`Dispatcher_BossDieCheck::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BossDieCheck` | `0x081cda62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cda62  _ZN23Dispatcher_BossDieCheck4sendEP5CUserR9ParamBase
#           Dispatcher_BossDieCheck::send(CUser*, ParamBase&)
# range [0x081cda62, 0x081cdbc5]
081cda62 +0x000:  push   %ebp
081cda63 +0x001:  mov    %esp,%ebp
081cda65 +0x003:  push   %esi
081cda66 +0x004:  push   %ebx
081cda67 +0x005:  sub    $0x30,%esp
081cda6a +0x008:  mov    0x10(%ebp),%eax
081cda6d +0x00b:  mov    %eax,-0x10(%ebp)
081cda70 +0x00e:  mov    -0x10(%ebp),%eax
081cda73 +0x011:  mov    0xc(%eax),%eax
081cda76 +0x014:  cmp    $0x2,%eax
081cda79 +0x017:  jne    081cda96 <+0x34>
081cda7b +0x019:  movl   $0x2,0x8(%esp)
081cda83 +0x021:  movl   $0xb7,0x4(%esp)
081cda8b +0x029:  mov    0xc(%ebp),%eax
081cda8e +0x02c:  mov    %eax,(%esp)
081cda91 +0x02f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081cda96 +0x034:  lea    -0x1c(%ebp),%eax
081cda99 +0x037:  mov    %eax,(%esp)
081cda9c +0x03a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081cdaa1 +0x03f:  movl   $0x73,0x8(%esp)
081cdaa9 +0x047:  movl   $0x0,0x4(%esp)
081cdab1 +0x04f:  lea    -0x1c(%ebp),%eax
081cdab4 +0x052:  mov    %eax,(%esp)
081cdab7 +0x055:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081cdabc +0x05a:  mov    -0x10(%ebp),%eax
081cdabf +0x05d:  mov    0x4(%eax),%eax
081cdac2 +0x060:  test   %eax,%eax
081cdac4 +0x062:  je     081cdaf0 <+0x8e>
081cdac6 +0x064:  movl   $0x0,0x4(%esp)
081cdace +0x06c:  lea    -0x1c(%ebp),%eax
081cdad1 +0x06f:  mov    %eax,(%esp)
081cdad4 +0x072:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081cdad9 +0x077:  mov    -0x10(%ebp),%eax
081cdadc +0x07a:  mov    0x4(%eax),%eax
081cdadf +0x07d:  mov    %eax,0x4(%esp)
081cdae3 +0x081:  lea    -0x1c(%ebp),%eax
081cdae6 +0x084:  mov    %eax,(%esp)
081cdae9 +0x087:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081cdaee +0x08c:  jmp    081cdb35 <+0xd3>
081cdaf0 +0x08e:  movl   $0x1,0x4(%esp)
081cdaf8 +0x096:  lea    -0x1c(%ebp),%eax
081cdafb +0x099:  mov    %eax,(%esp)
081cdafe +0x09c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081cdb03 +0x0a1:  mov    -0x10(%ebp),%eax
081cdb06 +0x0a4:  movzbl 0x8(%eax),%eax
081cdb0a +0x0a8:  movzbl %al,%eax
081cdb0d +0x0ab:  mov    %eax,0x4(%esp)
081cdb11 +0x0af:  lea    -0x1c(%ebp),%eax
081cdb14 +0x0b2:  mov    %eax,(%esp)
081cdb17 +0x0b5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081cdb1c +0x0ba:  mov    -0x10(%ebp),%eax
081cdb1f +0x0bd:  movzwl 0xa(%eax),%eax
081cdb23 +0x0c1:  movzwl %ax,%eax
081cdb26 +0x0c4:  mov    %eax,0x4(%esp)
081cdb2a +0x0c8:  lea    -0x1c(%ebp),%eax
081cdb2d +0x0cb:  mov    %eax,(%esp)
081cdb30 +0x0ce:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081cdb35 +0x0d3:  movl   $0x1,0x4(%esp)
081cdb3d +0x0db:  lea    -0x1c(%ebp),%eax
081cdb40 +0x0de:  mov    %eax,(%esp)
081cdb43 +0x0e1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081cdb48 +0x0e6:  mov    0xc(%ebp),%eax
081cdb4b +0x0e9:  mov    %eax,(%esp)
081cdb4e +0x0ec:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081cdb53 +0x0f1:  movswl %ax,%ebx
081cdb56 +0x0f4:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081cdb5b +0x0f9:  mov    %ebx,0x4(%esp)
081cdb5f +0x0fd:  mov    %eax,(%esp)
081cdb62 +0x100:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081cdb67 +0x105:  mov    %eax,-0xc(%ebp)
081cdb6a +0x108:  cmpl   $0x0,-0xc(%ebp)
081cdb6e +0x10c:  je     081cdb84 <+0x122>
081cdb70 +0x10e:  lea    -0x1c(%ebp),%eax
081cdb73 +0x111:  mov    %eax,0x4(%esp)
081cdb77 +0x115:  mov    -0xc(%ebp),%eax
081cdb7a +0x118:  mov    %eax,(%esp)
081cdb7d +0x11b:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081cdb82 +0x120:  jmp    081cdbb3 <+0x151>
081cdb84 +0x122:  lea    -0x1c(%ebp),%eax
081cdb87 +0x125:  mov    %eax,0x4(%esp)
081cdb8b +0x129:  mov    0xc(%ebp),%eax
081cdb8e +0x12c:  mov    %eax,(%esp)
081cdb91 +0x12f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081cdb96 +0x134:  jmp    081cdbb3 <+0x151>
081cdb98 +0x136:  mov    %edx,%ebx
081cdb9a +0x138:  mov    %eax,%esi
081cdb9c +0x13a:  lea    -0x1c(%ebp),%eax
081cdb9f +0x13d:  mov    %eax,(%esp)
081cdba2 +0x140:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081cdba7 +0x145:  mov    %esi,%eax
081cdba9 +0x147:  mov    %ebx,%edx
081cdbab +0x149:  mov    %eax,(%esp)
081cdbae +0x14c:  call   08ae3750 <_Unwind_Resume>
081cdbb3 +0x151:  lea    -0x1c(%ebp),%eax
081cdbb6 +0x154:  mov    %eax,(%esp)
081cdbb9 +0x157:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081cdbbe +0x15c:  add    $0x30,%esp
081cdbc1 +0x15f:  pop    %ebx
081cdbc2 +0x160:  pop    %esi
081cdbc3 +0x161:  pop    %ebp
081cdbc4 +0x162:  ret
081cdbc5 +0x163:  nop
```

## 反编译 C

```c
// Dispatcher_BossDieCheck::send @ 0x81cda62

/* Dispatcher_BossDieCheck::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_BossDieCheck::send(Dispatcher_BossDieCheck *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  PacketGuard local_20 [12];
  ParamBase *local_14;
  CParty *local_10;
  
  local_14 = param_2;
  if (*(int *)(param_2 + 0xc) == 2) {
    CUser::SendCmdErrorPacket(param_1,0xb7,2);
  }
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081cdab7 to 081cdb95 has its CatchHandler @ 081cdb98 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x73);
  if (*(int *)(local_14 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)(byte)local_14[8]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_14 + 10));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::GetPartyIndex(param_1);
  iVar1 = G_CGameManager();
  local_10 = (CParty *)CGameManager::GetParty(iVar1);
  if (local_10 == (CParty *)0x0) {
    CUser::Send(param_1,local_20);
  }
  else {
    CParty::send_to_party(local_10,local_20);
  }
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
