# handleDieUser

`_ZN8WongWork11CDeathTower13handleDieUserEP5CUser`

`WongWork::CDeathTower::handleDieUser(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x0846595a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846595a  _ZN8WongWork11CDeathTower13handleDieUserEP5CUser
#           WongWork::CDeathTower::handleDieUser(CUser*)
# range [0x0846595a, 0x08465ac1]
0846595a +0x000:  push   %ebp
0846595b +0x001:  mov    %esp,%ebp
0846595d +0x003:  push   %esi
0846595e +0x004:  push   %ebx
0846595f +0x005:  sub    $0x20,%esp
08465962 +0x008:  movl   $0x0,-0xc(%ebp)
08465969 +0x00f:  movl   $0x0,-0xc(%ebp)
08465970 +0x016:  jmp    08465a81 <+0x127>
08465975 +0x01b:  mov    0x8(%ebp),%eax
08465978 +0x01e:  mov    (%eax),%eax
0846597a +0x020:  mov    -0xc(%ebp),%edx
0846597d +0x023:  mov    %edx,0x4(%esp)
08465981 +0x027:  mov    %eax,(%esp)
08465984 +0x02a:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08465989 +0x02f:  test   %al,%al
0846598b +0x031:  je     08465a7d <+0x123>
08465991 +0x037:  mov    0x8(%ebp),%eax
08465994 +0x03a:  mov    (%eax),%eax
08465996 +0x03c:  mov    -0xc(%ebp),%edx
08465999 +0x03f:  mov    %edx,0x4(%esp)
0846599d +0x043:  mov    %eax,(%esp)
084659a0 +0x046:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
084659a5 +0x04b:  cmp    0xc(%ebp),%eax
084659a8 +0x04e:  sete   %al
084659ab +0x051:  test   %al,%al
084659ad +0x053:  je     08465a7d <+0x123>
084659b3 +0x059:  mov    0x8(%ebp),%eax
084659b6 +0x05c:  lea    0x110(%eax),%edx
084659bc +0x062:  mov    -0xc(%ebp),%eax
084659bf +0x065:  mov    %eax,0x4(%esp)
084659c3 +0x069:  mov    %edx,(%esp)
084659c6 +0x06c:  call   08469b76 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x259>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x259
084659cb +0x071:  xor    $0x1,%eax
084659ce +0x074:  test   %al,%al
084659d0 +0x076:  je     084659f7 <+0x9d>
084659d2 +0x078:  movl   $0x12,0x8(%esp)
084659da +0x080:  movl   $0x2b,0x4(%esp)
084659e2 +0x088:  mov    0xc(%ebp),%eax
084659e5 +0x08b:  mov    %eax,(%esp)
084659e8 +0x08e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084659ed +0x093:  mov    $0x0,%eax
084659f2 +0x098:  jmp    08465aba <+0x160>
084659f7 +0x09d:  mov    0x8(%ebp),%eax
084659fa +0x0a0:  lea    0x110(%eax),%edx
08465a00 +0x0a6:  movl   $0x0,0x8(%esp)
08465a08 +0x0ae:  mov    -0xc(%ebp),%eax
08465a0b +0x0b1:  mov    %eax,0x4(%esp)
08465a0f +0x0b5:  mov    %edx,(%esp)
08465a12 +0x0b8:  call   08469b5a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x23d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x23d
08465a17 +0x0bd:  lea    -0x18(%ebp),%eax
08465a1a +0x0c0:  mov    %eax,(%esp)
08465a1d +0x0c3:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08465a22 +0x0c8:  mov    0xc(%ebp),%eax
08465a25 +0x0cb:  mov    %eax,(%esp)
08465a28 +0x0ce:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08465a2d +0x0d3:  movzwl %ax,%eax
08465a30 +0x0d6:  mov    %eax,0x4(%esp)
08465a34 +0x0da:  lea    -0x18(%ebp),%eax
08465a37 +0x0dd:  mov    %eax,(%esp)
08465a3a +0x0e0:  call   08460176 <_ZN8WongWork11CDeathTower14CPacketHandler12makeDieStateEt>  ; WongWork::CDeathTower::CPacketHandler::makeDieState(unsigned short)
08465a3f +0x0e5:  mov    0x8(%ebp),%eax
08465a42 +0x0e8:  mov    (%eax),%eax
08465a44 +0x0ea:  lea    -0x18(%ebp),%edx
08465a47 +0x0ed:  mov    %edx,0x4(%esp)
08465a4b +0x0f1:  mov    %eax,(%esp)
08465a4e +0x0f4:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08465a53 +0x0f9:  jmp    08465a70 <+0x116>
08465a55 +0x0fb:  mov    %edx,%ebx
08465a57 +0x0fd:  mov    %eax,%esi
08465a59 +0x0ff:  lea    -0x18(%ebp),%eax
08465a5c +0x102:  mov    %eax,(%esp)
08465a5f +0x105:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465a64 +0x10a:  mov    %esi,%eax
08465a66 +0x10c:  mov    %ebx,%edx
08465a68 +0x10e:  mov    %eax,(%esp)
08465a6b +0x111:  call   08ae3750 <_Unwind_Resume>
08465a70 +0x116:  lea    -0x18(%ebp),%eax
08465a73 +0x119:  mov    %eax,(%esp)
08465a76 +0x11c:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465a7b +0x121:  jmp    08465a90 <+0x136>
08465a7d +0x123:  addl   $0x1,-0xc(%ebp)
08465a81 +0x127:  cmpl   $0x3,-0xc(%ebp)
08465a85 +0x12b:  setle  %al
08465a88 +0x12e:  test   %al,%al
08465a8a +0x130:  jne    08465975 <+0x1b>
08465a90 +0x136:  mov    0x8(%ebp),%eax
08465a93 +0x139:  mov    %eax,(%esp)
08465a96 +0x13c:  call   08467188 <_ZN8WongWork11CDeathTower15_checkMemberDieEv>  ; WongWork::CDeathTower::_checkMemberDie()
08465a9b +0x141:  test   %al,%al
08465a9d +0x143:  je     08465ab5 <+0x15b>
08465a9f +0x145:  mov    0x8(%ebp),%eax
08465aa2 +0x148:  mov    %eax,(%esp)
08465aa5 +0x14b:  call   08467cc2 <_ZN8WongWork11CDeathTower14_onFinishStageEv>  ; WongWork::CDeathTower::_onFinishStage()
08465aaa +0x150:  mov    0x8(%ebp),%eax
08465aad +0x153:  mov    %eax,(%esp)
08465ab0 +0x156:  call   08467e00 <_ZN8WongWork11CDeathTower21_onPrepareFinishTowerEv>  ; WongWork::CDeathTower::_onPrepareFinishTower()
08465ab5 +0x15b:  mov    $0x1,%eax
08465aba +0x160:  add    $0x20,%esp
08465abd +0x163:  pop    %ebx
08465abe +0x164:  pop    %esi
08465abf +0x165:  pop    %ebp
08465ac0 +0x166:  ret
08465ac1 +0x167:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::handleDieUser @ 0x846595a

/* WongWork::CDeathTower::handleDieUser(CUser*) */

undefined4 __thiscall WongWork::CDeathTower::handleDieUser(CDeathTower *this,CUser *param_1)

{
  char cVar1;
  ushort uVar2;
  CUser *pCVar3;
  CPacketHandler local_1c [12];
  int local_10;
  
  local_10 = 0;
  do {
    if (3 < local_10) {
LAB_08465a90:
      cVar1 = _checkMemberDie(this);
      if (cVar1 != '\0') {
        _onFinishStage(this);
        _onPrepareFinishTower(this);
      }
      return 1;
    }
    cVar1 = CParty::checkValidUser(*(CParty **)this,local_10);
    if ((cVar1 != '\0') &&
       (pCVar3 = (CUser *)CParty::get_user(*(CParty **)this,local_10), pCVar3 == param_1)) {
      cVar1 = CPlayData::isMemberAlive((CPlayData *)(this + 0x110),local_10);
      if (cVar1 != '\x01') {
        CUser::SendCmdErrorPacket(param_1,0x2b,0x12);
        return 0;
      }
      CPlayData::setMemberAlive((CPlayData *)(this + 0x110),local_10,false);
      CPacketHandler::CPacketHandler(local_1c);
      uVar2 = CUser::get_unique_id(param_1);
                    /* try { // try from 08465a3a to 08465a52 has its CatchHandler @ 08465a55 */
      CPacketHandler::makeDieState(local_1c,uVar2);
      CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_1c);
      CPacketHandler::~CPacketHandler(local_1c);
      goto LAB_08465a90;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
