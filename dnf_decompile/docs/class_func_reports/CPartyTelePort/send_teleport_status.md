# send_teleport_status

`_ZN14CPartyTelePort20send_teleport_statusEh`

`CPartyTelePort::send_teleport_status(unsigned char)`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bb96e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bb96e  _ZN14CPartyTelePort20send_teleport_statusEh
#           CPartyTelePort::send_teleport_status(unsigned char)
# range [0x085bb96e, 0x085bbb07]
085bb96e +0x000:  push   %ebp
085bb96f +0x001:  mov    %esp,%ebp
085bb971 +0x003:  push   %esi
085bb972 +0x004:  push   %ebx
085bb973 +0x005:  sub    $0x40,%esp
085bb976 +0x008:  mov    0xc(%ebp),%eax
085bb979 +0x00b:  mov    %al,-0x2c(%ebp)
085bb97c +0x00e:  mov    0x8(%ebp),%eax
085bb97f +0x011:  mov    (%eax),%eax
085bb981 +0x013:  test   %eax,%eax
085bb983 +0x015:  je     085bbb00 <+0x192>
085bb989 +0x01b:  lea    -0x20(%ebp),%eax
085bb98c +0x01e:  mov    %eax,(%esp)
085bb98f +0x021:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085bb994 +0x026:  lea    -0x20(%ebp),%eax
085bb997 +0x029:  mov    %eax,(%esp)
085bb99a +0x02c:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085bb99f +0x031:  movl   $0x179,0x8(%esp)
085bb9a7 +0x039:  movl   $0x0,0x4(%esp)
085bb9af +0x041:  lea    -0x20(%ebp),%eax
085bb9b2 +0x044:  mov    %eax,(%esp)
085bb9b5 +0x047:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085bb9ba +0x04c:  mov    0x8(%ebp),%eax
085bb9bd +0x04f:  mov    %eax,(%esp)
085bb9c0 +0x052:  call   085bf658 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbb6>  ; global constructors keyed to CParty::cMember::cMember()+0xbb6
085bb9c5 +0x057:  movzbl %al,%eax
085bb9c8 +0x05a:  mov    %eax,0x4(%esp)
085bb9cc +0x05e:  lea    -0x20(%ebp),%eax
085bb9cf +0x061:  mov    %eax,(%esp)
085bb9d2 +0x064:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bb9d7 +0x069:  mov    0x8(%ebp),%eax
085bb9da +0x06c:  mov    %eax,(%esp)
085bb9dd +0x06f:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
085bb9e2 +0x074:  movsbl %al,%eax
085bb9e5 +0x077:  mov    %eax,0x4(%esp)
085bb9e9 +0x07b:  lea    -0x20(%ebp),%eax
085bb9ec +0x07e:  mov    %eax,(%esp)
085bb9ef +0x081:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bb9f4 +0x086:  movl   $0x0,-0x14(%ebp)
085bb9fb +0x08d:  jmp    085bba8d <+0x11f>
085bba00 +0x092:  movw   $0xffff,-0x10(%ebp)
085bba06 +0x098:  movb   $0x0,-0xd(%ebp)
085bba0a +0x09c:  mov    0x8(%ebp),%eax
085bba0d +0x09f:  mov    (%eax),%eax
085bba0f +0x0a1:  mov    -0x14(%ebp),%edx
085bba12 +0x0a4:  mov    %edx,0x4(%esp)
085bba16 +0x0a8:  mov    %eax,(%esp)
085bba19 +0x0ab:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085bba1e +0x0b0:  test   %al,%al
085bba20 +0x0b2:  je     085bba63 <+0xf5>
085bba22 +0x0b4:  mov    0x8(%ebp),%eax
085bba25 +0x0b7:  mov    (%eax),%eax
085bba27 +0x0b9:  mov    -0x14(%ebp),%edx
085bba2a +0x0bc:  mov    %edx,0x4(%esp)
085bba2e +0x0c0:  mov    %eax,(%esp)
085bba31 +0x0c3:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085bba36 +0x0c8:  mov    %eax,-0xc(%ebp)
085bba39 +0x0cb:  cmpl   $0x0,-0xc(%ebp)
085bba3d +0x0cf:  je     085bba63 <+0xf5>
085bba3f +0x0d1:  mov    -0xc(%ebp),%eax
085bba42 +0x0d4:  mov    %eax,(%esp)
085bba45 +0x0d7:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085bba4a +0x0dc:  mov    %ax,-0x10(%ebp)
085bba4e +0x0e0:  mov    -0x14(%ebp),%eax
085bba51 +0x0e3:  mov    %eax,0x4(%esp)
085bba55 +0x0e7:  mov    0x8(%ebp),%eax
085bba58 +0x0ea:  mov    %eax,(%esp)
085bba5b +0x0ed:  call   085bc252 <_ZN14CPartyTelePort25get_teleport_member_stateEi>  ; CPartyTelePort::get_teleport_member_state(int)
085bba60 +0x0f2:  mov    %al,-0xd(%ebp)
085bba63 +0x0f5:  movswl -0x10(%ebp),%eax
085bba67 +0x0f9:  mov    %eax,0x4(%esp)
085bba6b +0x0fd:  lea    -0x20(%ebp),%eax
085bba6e +0x100:  mov    %eax,(%esp)
085bba71 +0x103:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085bba76 +0x108:  movzbl -0xd(%ebp),%eax
085bba7a +0x10c:  mov    %eax,0x4(%esp)
085bba7e +0x110:  lea    -0x20(%ebp),%eax
085bba81 +0x113:  mov    %eax,(%esp)
085bba84 +0x116:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bba89 +0x11b:  addl   $0x1,-0x14(%ebp)
085bba8d +0x11f:  cmpl   $0x3,-0x14(%ebp)
085bba91 +0x123:  setle  %al
085bba94 +0x126:  test   %al,%al
085bba96 +0x128:  jne    085bba00 <+0x92>
085bba9c +0x12e:  movzbl -0x2c(%ebp),%eax
085bbaa0 +0x132:  mov    %eax,0x4(%esp)
085bbaa4 +0x136:  lea    -0x20(%ebp),%eax
085bbaa7 +0x139:  mov    %eax,(%esp)
085bbaaa +0x13c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bbaaf +0x141:  movl   $0x1,0x4(%esp)
085bbab7 +0x149:  lea    -0x20(%ebp),%eax
085bbaba +0x14c:  mov    %eax,(%esp)
085bbabd +0x14f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085bbac2 +0x154:  mov    0x8(%ebp),%eax
085bbac5 +0x157:  mov    (%eax),%eax
085bbac7 +0x159:  lea    -0x20(%ebp),%edx
085bbaca +0x15c:  mov    %edx,0x4(%esp)
085bbace +0x160:  mov    %eax,(%esp)
085bbad1 +0x163:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085bbad6 +0x168:  jmp    085bbaf3 <+0x185>
085bbad8 +0x16a:  mov    %edx,%ebx
085bbada +0x16c:  mov    %eax,%esi
085bbadc +0x16e:  lea    -0x20(%ebp),%eax
085bbadf +0x171:  mov    %eax,(%esp)
085bbae2 +0x174:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bbae7 +0x179:  mov    %esi,%eax
085bbae9 +0x17b:  mov    %ebx,%edx
085bbaeb +0x17d:  mov    %eax,(%esp)
085bbaee +0x180:  call   08ae3750 <_Unwind_Resume>
085bbaf3 +0x185:  lea    -0x20(%ebp),%eax
085bbaf6 +0x188:  mov    %eax,(%esp)
085bbaf9 +0x18b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bbafe +0x190:  jmp    085bbb01 <+0x193>
085bbb00 +0x192:  nop
085bbb01 +0x193:  add    $0x40,%esp
085bbb04 +0x196:  pop    %ebx
085bbb05 +0x197:  pop    %esi
085bbb06 +0x198:  pop    %ebp
085bbb07 +0x199:  ret
```

## 反编译 C

```c
// CPartyTelePort::send_teleport_status @ 0x85bb96e

/* CPartyTelePort::send_teleport_status(unsigned char) */

void __thiscall CPartyTelePort::send_teleport_status(CPartyTelePort *this,uchar param_1)

{
  char cVar1;
  uint uVar2;
  PacketGuard local_24 [12];
  int local_18;
  short local_14;
  byte local_11;
  CUser *local_10;
  
  if (*(int *)this != 0) {
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 085bb99a to 085bbad5 has its CatchHandler @ 085bbad8 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x179);
    uVar2 = get_teleport_village(this);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,uVar2 & 0xff);
    cVar1 = get_teleport_state(this);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)cVar1);
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      local_14 = -1;
      local_11 = 0;
      cVar1 = CParty::checkValidUser(*(CParty **)this,local_18);
      if (cVar1 != '\0') {
        local_10 = (CUser *)CParty::get_user(*(CParty **)this,local_18);
        if (local_10 != (CUser *)0x0) {
          local_14 = CUser::get_unique_id(local_10);
          local_11 = get_teleport_member_state(this,local_18);
        }
      }
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(int)local_14);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)local_11);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)param_1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CParty::send_to_party(*(CParty **)this,local_24);
    PacketGuard::~PacketGuard(local_24);
  }
  return;
}
```
