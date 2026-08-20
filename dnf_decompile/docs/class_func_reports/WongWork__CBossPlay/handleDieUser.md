# handleDieUser

`_ZN8WongWork9CBossPlay13handleDieUserEP5CUser`

`WongWork::CBossPlay::handleDieUser(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossPlay` | `0x081494a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081494a4  _ZN8WongWork9CBossPlay13handleDieUserEP5CUser
#           WongWork::CBossPlay::handleDieUser(CUser*)
# range [0x081494a4, 0x08149723]
081494a4 +0x000:  push   %ebp
081494a5 +0x001:  mov    %esp,%ebp
081494a7 +0x003:  push   %esi
081494a8 +0x004:  push   %ebx
081494a9 +0x005:  sub    $0x30,%esp
081494ac +0x008:  movl   $0x0,-0xc(%ebp)
081494b3 +0x00f:  movl   $0x0,-0xc(%ebp)
081494ba +0x016:  jmp    08149709 <+0x265>
081494bf +0x01b:  mov    0x8(%ebp),%eax
081494c2 +0x01e:  mov    0x4(%eax),%eax
081494c5 +0x021:  mov    -0xc(%ebp),%edx
081494c8 +0x024:  mov    %edx,0x4(%esp)
081494cc +0x028:  mov    %eax,(%esp)
081494cf +0x02b:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081494d4 +0x030:  test   %al,%al
081494d6 +0x032:  je     08149705 <+0x261>
081494dc +0x038:  mov    0x8(%ebp),%eax
081494df +0x03b:  mov    0x4(%eax),%eax
081494e2 +0x03e:  mov    -0xc(%ebp),%edx
081494e5 +0x041:  mov    %edx,0x4(%esp)
081494e9 +0x045:  mov    %eax,(%esp)
081494ec +0x048:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081494f1 +0x04d:  cmp    0xc(%ebp),%eax
081494f4 +0x050:  sete   %al
081494f7 +0x053:  test   %al,%al
081494f9 +0x055:  je     08149705 <+0x261>
081494ff +0x05b:  mov    -0xc(%ebp),%eax
08149502 +0x05e:  mov    %eax,0x4(%esp)
08149506 +0x062:  mov    0x8(%ebp),%eax
08149509 +0x065:  mov    %eax,(%esp)
0814950c +0x068:  call   08145682 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x105>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x105
08149511 +0x06d:  xor    $0x1,%eax
08149514 +0x070:  test   %al,%al
08149516 +0x072:  je     0814953d <+0x99>
08149518 +0x074:  movl   $0x12,0x8(%esp)
08149520 +0x07c:  movl   $0x2b,0x4(%esp)
08149528 +0x084:  mov    0xc(%ebp),%eax
0814952b +0x087:  mov    %eax,(%esp)
0814952e +0x08a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08149533 +0x08f:  mov    $0x0,%eax
08149538 +0x094:  jmp    0814971d <+0x279>
0814953d +0x099:  movl   $0x0,0x8(%esp)
08149545 +0x0a1:  mov    -0xc(%ebp),%eax
08149548 +0x0a4:  mov    %eax,0x4(%esp)
0814954c +0x0a8:  mov    0x8(%ebp),%eax
0814954f +0x0ab:  mov    %eax,(%esp)
08149552 +0x0ae:  call   0814a7e4 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x583>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x583
08149557 +0x0b3:  lea    -0x18(%ebp),%eax
0814955a +0x0b6:  mov    %eax,(%esp)
0814955d +0x0b9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08149562 +0x0be:  movl   $0x20,0x8(%esp)
0814956a +0x0c6:  movl   $0x0,0x4(%esp)
08149572 +0x0ce:  lea    -0x18(%ebp),%eax
08149575 +0x0d1:  mov    %eax,(%esp)
08149578 +0x0d4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814957d +0x0d9:  mov    0xc(%ebp),%eax
08149580 +0x0dc:  mov    %eax,(%esp)
08149583 +0x0df:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08149588 +0x0e4:  movzwl %ax,%eax
0814958b +0x0e7:  mov    %eax,0x4(%esp)
0814958f +0x0eb:  lea    -0x18(%ebp),%eax
08149592 +0x0ee:  mov    %eax,(%esp)
08149595 +0x0f1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814959a +0x0f6:  movl   $0x0,0x4(%esp)
081495a2 +0x0fe:  lea    -0x18(%ebp),%eax
081495a5 +0x101:  mov    %eax,(%esp)
081495a8 +0x104:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081495ad +0x109:  movl   $0x1,0x4(%esp)
081495b5 +0x111:  lea    -0x18(%ebp),%eax
081495b8 +0x114:  mov    %eax,(%esp)
081495bb +0x117:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081495c0 +0x11c:  mov    0x8(%ebp),%eax
081495c3 +0x11f:  mov    0x4(%eax),%eax
081495c6 +0x122:  lea    -0x18(%ebp),%edx
081495c9 +0x125:  mov    %edx,0x4(%esp)
081495cd +0x129:  mov    %eax,(%esp)
081495d0 +0x12c:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081495d5 +0x131:  mov    0xc(%ebp),%eax
081495d8 +0x134:  mov    %eax,(%esp)
081495db +0x137:  call   0814aa8c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x82b>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x82b
081495e0 +0x13c:  mov    %eax,%ebx
081495e2 +0x13e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081495e9 +0x145:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081495ee +0x14a:  cmp    %eax,%ebx
081495f0 +0x14c:  setg   %al
081495f3 +0x14f:  test   %al,%al
081495f5 +0x151:  je     081496f8 <+0x254>
081495fb +0x157:  movl   $0x0,0x4(%esp)
08149603 +0x15f:  mov    0xc(%ebp),%eax
08149606 +0x162:  mov    %eax,(%esp)
08149609 +0x165:  call   0814aa7a <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x819>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x819
0814960e +0x16a:  movl   $0x0,0x4(%esp)
08149616 +0x172:  mov    0xc(%ebp),%eax
08149619 +0x175:  mov    %eax,(%esp)
0814961c +0x178:  call   0814aa9a <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x839>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x839
08149621 +0x17d:  movl   $0x1,0x8(%esp)
08149629 +0x185:  mov    -0xc(%ebp),%eax
0814962c +0x188:  mov    %eax,0x4(%esp)
08149630 +0x18c:  mov    0x8(%ebp),%eax
08149633 +0x18f:  mov    %eax,(%esp)
08149636 +0x192:  call   0814a7e4 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x583>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x583
0814963b +0x197:  lea    -0x24(%ebp),%eax
0814963e +0x19a:  mov    %eax,(%esp)
08149641 +0x19d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08149646 +0x1a2:  movl   $0x20,0x8(%esp)
0814964e +0x1aa:  movl   $0x0,0x4(%esp)
08149656 +0x1b2:  lea    -0x24(%ebp),%eax
08149659 +0x1b5:  mov    %eax,(%esp)
0814965c +0x1b8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08149661 +0x1bd:  mov    0xc(%ebp),%eax
08149664 +0x1c0:  mov    %eax,(%esp)
08149667 +0x1c3:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0814966c +0x1c8:  movzwl %ax,%eax
0814966f +0x1cb:  mov    %eax,0x4(%esp)
08149673 +0x1cf:  lea    -0x24(%ebp),%eax
08149676 +0x1d2:  mov    %eax,(%esp)
08149679 +0x1d5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814967e +0x1da:  movl   $0x2,0x4(%esp)
08149686 +0x1e2:  lea    -0x24(%ebp),%eax
08149689 +0x1e5:  mov    %eax,(%esp)
0814968c +0x1e8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08149691 +0x1ed:  movl   $0x1,0x4(%esp)
08149699 +0x1f5:  lea    -0x24(%ebp),%eax
0814969c +0x1f8:  mov    %eax,(%esp)
0814969f +0x1fb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081496a4 +0x200:  mov    0x8(%ebp),%eax
081496a7 +0x203:  mov    0x4(%eax),%eax
081496aa +0x206:  lea    -0x24(%ebp),%edx
081496ad +0x209:  mov    %edx,0x4(%esp)
081496b1 +0x20d:  mov    %eax,(%esp)
081496b4 +0x210:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081496b9 +0x215:  jmp    081496d0 <+0x22c>
081496bb +0x217:  mov    %edx,%ebx
081496bd +0x219:  mov    %eax,%esi
081496bf +0x21b:  lea    -0x24(%ebp),%eax
081496c2 +0x21e:  mov    %eax,(%esp)
081496c5 +0x221:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081496ca +0x226:  mov    %esi,%eax
081496cc +0x228:  mov    %ebx,%edx
081496ce +0x22a:  jmp    081496dd <+0x239>
081496d0 +0x22c:  lea    -0x24(%ebp),%eax
081496d3 +0x22f:  mov    %eax,(%esp)
081496d6 +0x232:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081496db +0x237:  jmp    081496f8 <+0x254>
081496dd +0x239:  mov    %edx,%ebx
081496df +0x23b:  mov    %eax,%esi
081496e1 +0x23d:  lea    -0x18(%ebp),%eax
081496e4 +0x240:  mov    %eax,(%esp)
081496e7 +0x243:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081496ec +0x248:  mov    %esi,%eax
081496ee +0x24a:  mov    %ebx,%edx
081496f0 +0x24c:  mov    %eax,(%esp)
081496f3 +0x24f:  call   08ae3750 <_Unwind_Resume>
081496f8 +0x254:  lea    -0x18(%ebp),%eax
081496fb +0x257:  mov    %eax,(%esp)
081496fe +0x25a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08149703 +0x25f:  jmp    08149718 <+0x274>
08149705 +0x261:  addl   $0x1,-0xc(%ebp)
08149709 +0x265:  cmpl   $0x3,-0xc(%ebp)
0814970d +0x269:  setle  %al
08149710 +0x26c:  test   %al,%al
08149712 +0x26e:  jne    081494bf <+0x1b>
08149718 +0x274:  mov    $0x1,%eax
0814971d +0x279:  add    $0x30,%esp
08149720 +0x27c:  pop    %ebx
08149721 +0x27d:  pop    %esi
08149722 +0x27e:  pop    %ebp
08149723 +0x27f:  ret
```

## 反编译 C

```c
// WongWork::CBossPlay::handleDieUser @ 0x81494a4

/* WongWork::CBossPlay::handleDieUser(CUser*) */

undefined4 __thiscall WongWork::CBossPlay::handleDieUser(CBossPlay *this,CUser *param_1)

{
  char cVar1;
  CUser *pCVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 1;
    }
    cVar1 = CParty::checkValidUser(*(CParty **)(this + 4),local_10);
    if ((cVar1 != '\0') &&
       (pCVar2 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_10), pCVar2 == param_1))
    break;
    local_10 = local_10 + 1;
  }
  cVar1 = isMemberAlive(this,local_10);
  if (cVar1 == '\x01') {
    setMemberAlive(this,local_10,false);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08149578 to 08149645 has its CatchHandler @ 081496dd */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x20);
    uVar3 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar3 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CParty::send_to_party(*(CParty **)(this + 4),local_1c);
    iVar4 = CUser::GetRevivalTime(param_1);
    iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar5 < iVar4) {
      CUser::SetRevivalTime(param_1,0);
      CUser::SetUseAPCPotionTime(param_1,0);
      setMemberAlive(this,local_10,true);
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0814965c to 081496b8 has its CatchHandler @ 081496bb */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x20);
      uVar3 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar3 & 0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CParty::send_to_party(*(CParty **)(this + 4),local_28);
                    /* try { // try from 081496d6 to 081496da has its CatchHandler @ 081496dd */
      PacketGuard::~PacketGuard(local_28);
    }
    PacketGuard::~PacketGuard(local_1c);
    return 1;
  }
  CUser::SendCmdErrorPacket(param_1,0x2b,0x12);
  return 0;
}
```
