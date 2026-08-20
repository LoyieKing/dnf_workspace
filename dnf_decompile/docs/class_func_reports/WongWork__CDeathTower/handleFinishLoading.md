# handleFinishLoading

`_ZN8WongWork11CDeathTower19handleFinishLoadingEP5CUser`

`WongWork::CDeathTower::handleFinishLoading(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08466024` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08466024  _ZN8WongWork11CDeathTower19handleFinishLoadingEP5CUser
#           WongWork::CDeathTower::handleFinishLoading(CUser*)
# range [0x08466024, 0x0846614f]
08466024 +0x000:  push   %ebp
08466025 +0x001:  mov    %esp,%ebp
08466027 +0x003:  push   %esi
08466028 +0x004:  push   %ebx
08466029 +0x005:  sub    $0x20,%esp
0846602c +0x008:  mov    0x8(%ebp),%eax
0846602f +0x00b:  mov    (%eax),%eax
08466031 +0x00d:  mov    0xc(%ebp),%edx
08466034 +0x010:  mov    %edx,0x4(%esp)
08466038 +0x014:  mov    %eax,(%esp)
0846603b +0x017:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
08466040 +0x01c:  mov    %eax,-0xc(%ebp)
08466043 +0x01f:  cmpl   $0xffffffff,-0xc(%ebp)
08466047 +0x023:  je     08466068 <+0x44>
08466049 +0x025:  mov    0x8(%ebp),%eax
0846604c +0x028:  mov    (%eax),%eax
0846604e +0x02a:  mov    -0xc(%ebp),%edx
08466051 +0x02d:  mov    %edx,0x4(%esp)
08466055 +0x031:  mov    %eax,(%esp)
08466058 +0x034:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0846605d +0x039:  test   %al,%al
0846605f +0x03b:  je     08466068 <+0x44>
08466061 +0x03d:  mov    $0x1,%eax
08466066 +0x042:  jmp    0846606d <+0x49>
08466068 +0x044:  mov    $0x0,%eax
0846606d +0x049:  test   %al,%al
0846606f +0x04b:  je     08466143 <+0x11f>
08466075 +0x051:  mov    0x8(%ebp),%eax
08466078 +0x054:  lea    0x110(%eax),%edx
0846607e +0x05a:  mov    -0xc(%ebp),%eax
08466081 +0x05d:  mov    %eax,0x4(%esp)
08466085 +0x061:  mov    %edx,(%esp)
08466088 +0x064:  call   08461e4a <_ZN8WongWork11CDeathTower9CPlayData18checkEnterStartMapEi>  ; WongWork::CDeathTower::CPlayData::checkEnterStartMap(int)
0846608d +0x069:  test   %al,%al
0846608f +0x06b:  je     084660a4 <+0x80>
08466091 +0x06d:  movl   $0x28,0x4(%esp)
08466099 +0x075:  mov    0xc(%ebp),%eax
0846609c +0x078:  mov    %eax,(%esp)
0846609f +0x07b:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
084660a4 +0x080:  mov    0x8(%ebp),%eax
084660a7 +0x083:  lea    0x110(%eax),%edx
084660ad +0x089:  movl   $0x1,0x8(%esp)
084660b5 +0x091:  mov    -0xc(%ebp),%eax
084660b8 +0x094:  mov    %eax,0x4(%esp)
084660bc +0x098:  mov    %edx,(%esp)
084660bf +0x09b:  call   08469b86 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x269>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x269
084660c4 +0x0a0:  mov    0x8(%ebp),%eax
084660c7 +0x0a3:  mov    (%eax),%eax
084660c9 +0x0a5:  mov    %eax,(%esp)
084660cc +0x0a8:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
084660d1 +0x0ad:  mov    0x8(%ebp),%edx
084660d4 +0x0b0:  add    $0x110,%edx
084660da +0x0b6:  mov    %eax,0x4(%esp)
084660de +0x0ba:  mov    %edx,(%esp)
084660e1 +0x0bd:  call   08461e7e <_ZN8WongWork11CDeathTower9CPlayData19checkAllMemberReadyEi>  ; WongWork::CDeathTower::CPlayData::checkAllMemberReady(int)
084660e6 +0x0c2:  test   %al,%al
084660e8 +0x0c4:  je     0846613c <+0x118>
084660ea +0x0c6:  lea    -0x18(%ebp),%eax
084660ed +0x0c9:  mov    %eax,(%esp)
084660f0 +0x0cc:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
084660f5 +0x0d1:  lea    -0x18(%ebp),%eax
084660f8 +0x0d4:  mov    %eax,(%esp)
084660fb +0x0d7:  call   0846012c <_ZN8WongWork11CDeathTower14CPacketHandler17makeFinishLoadingEv>  ; WongWork::CDeathTower::CPacketHandler::makeFinishLoading()
08466100 +0x0dc:  mov    0x8(%ebp),%eax
08466103 +0x0df:  mov    (%eax),%eax
08466105 +0x0e1:  lea    -0x18(%ebp),%edx
08466108 +0x0e4:  mov    %edx,0x4(%esp)
0846610c +0x0e8:  mov    %eax,(%esp)
0846610f +0x0eb:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08466114 +0x0f0:  jmp    08466131 <+0x10d>
08466116 +0x0f2:  mov    %edx,%ebx
08466118 +0x0f4:  mov    %eax,%esi
0846611a +0x0f6:  lea    -0x18(%ebp),%eax
0846611d +0x0f9:  mov    %eax,(%esp)
08466120 +0x0fc:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08466125 +0x101:  mov    %esi,%eax
08466127 +0x103:  mov    %ebx,%edx
08466129 +0x105:  mov    %eax,(%esp)
0846612c +0x108:  call   08ae3750 <_Unwind_Resume>
08466131 +0x10d:  lea    -0x18(%ebp),%eax
08466134 +0x110:  mov    %eax,(%esp)
08466137 +0x113:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
0846613c +0x118:  mov    $0x1,%eax
08466141 +0x11d:  jmp    08466148 <+0x124>
08466143 +0x11f:  mov    $0x0,%eax
08466148 +0x124:  add    $0x20,%esp
0846614b +0x127:  pop    %ebx
0846614c +0x128:  pop    %esi
0846614d +0x129:  pop    %ebp
0846614e +0x12a:  ret
0846614f +0x12b:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::handleFinishLoading @ 0x8466024

/* WongWork::CDeathTower::handleFinishLoading(CUser*) */

undefined4 __thiscall WongWork::CDeathTower::handleFinishLoading(CDeathTower *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CPacketHandler local_1c [12];
  int local_10;
  
  local_10 = CParty::GetMemberSlotNo(*(CParty **)this,param_1);
  if (local_10 != -1) {
    cVar2 = CParty::checkValidUser(*(CParty **)this,local_10);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0846606d;
    }
  }
  bVar1 = false;
LAB_0846606d:
  if (bVar1) {
    cVar2 = CPlayData::checkEnterStartMap((CPlayData *)(this + 0x110),local_10);
    if (cVar2 != '\0') {
      CUser::SendCmdOkPacket(param_1,0x28);
    }
    CPlayData::setMemberReady((CPlayData *)(this + 0x110),local_10,true);
    iVar3 = CParty::get_member_count(*(CParty **)this);
    cVar2 = CPlayData::checkAllMemberReady((CPlayData *)(this + 0x110),iVar3);
    if (cVar2 != '\0') {
      CPacketHandler::CPacketHandler(local_1c);
                    /* try { // try from 084660fb to 08466113 has its CatchHandler @ 08466116 */
      CPacketHandler::makeFinishLoading(local_1c);
      CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_1c);
      CPacketHandler::~CPacketHandler(local_1c);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
