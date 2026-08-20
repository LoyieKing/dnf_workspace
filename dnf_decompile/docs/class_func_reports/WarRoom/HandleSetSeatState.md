# HandleSetSeatState

`_ZN7WarRoom18HandleSetSeatStateEP5CUseri15ENUM_SEAT_STATE`

`WarRoom::HandleSetSeatState(CUser*, int, ENUM_SEAT_STATE)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bf484` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bf484  _ZN7WarRoom18HandleSetSeatStateEP5CUseri15ENUM_SEAT_STATE
#           WarRoom::HandleSetSeatState(CUser*, int, ENUM_SEAT_STATE)
# range [0x086bf484, 0x086bf5fb]
086bf484 +0x000:  push   %ebp
086bf485 +0x001:  mov    %esp,%ebp
086bf487 +0x003:  push   %esi
086bf488 +0x004:  push   %ebx
086bf489 +0x005:  sub    $0x40,%esp
086bf48c +0x008:  lea    -0x18(%ebp),%eax
086bf48f +0x00b:  mov    %eax,(%esp)
086bf492 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bf497 +0x013:  movl   $0x0,-0xc(%ebp)
086bf49e +0x01a:  movl   $0x0,-0x1c(%ebp)
086bf4a5 +0x021:  movb   $0x0,-0x1d(%ebp)
086bf4a9 +0x025:  movb   $0x0,-0x1e(%ebp)
086bf4ad +0x029:  movb   $0x0,-0x1f(%ebp)
086bf4b1 +0x02d:  lea    -0x1f(%ebp),%eax
086bf4b4 +0x030:  mov    %eax,0x1c(%esp)
086bf4b8 +0x034:  lea    -0x1e(%ebp),%eax
086bf4bb +0x037:  mov    %eax,0x18(%esp)
086bf4bf +0x03b:  lea    -0x1d(%ebp),%eax
086bf4c2 +0x03e:  mov    %eax,0x14(%esp)
086bf4c6 +0x042:  lea    -0x1c(%ebp),%eax
086bf4c9 +0x045:  mov    %eax,0x10(%esp)
086bf4cd +0x049:  mov    0x14(%ebp),%eax
086bf4d0 +0x04c:  mov    %eax,0xc(%esp)
086bf4d4 +0x050:  mov    0x10(%ebp),%eax
086bf4d7 +0x053:  mov    %eax,0x8(%esp)
086bf4db +0x057:  mov    0xc(%ebp),%eax
086bf4de +0x05a:  mov    %eax,0x4(%esp)
086bf4e2 +0x05e:  mov    0x8(%ebp),%eax
086bf4e5 +0x061:  mov    %eax,(%esp)
086bf4e8 +0x064:  call   086bd0f8 <_ZN7WarRoom12SetSlotStateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_>  ; WarRoom::SetSlotState(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&)
086bf4ed +0x069:  mov    %eax,-0xc(%ebp)
086bf4f0 +0x06c:  cmpl   $0x0,-0xc(%ebp)
086bf4f4 +0x070:  jne    086bf55d <+0xd9>
086bf4f6 +0x072:  mov    -0x1c(%ebp),%eax
086bf4f9 +0x075:  test   %eax,%eax
086bf4fb +0x077:  je     086bf511 <+0x8d>
086bf4fd +0x079:  mov    -0x1c(%ebp),%ebx
086bf500 +0x07c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086bf505 +0x081:  mov    %ebx,0x4(%esp)
086bf509 +0x085:  mov    %eax,(%esp)
086bf50c +0x088:  call   086c7452 <_ZN9GameWorld16out_from_warroomEP5CUser>  ; GameWorld::out_from_warroom(CUser*)
086bf511 +0x08d:  movzbl -0x1d(%ebp),%eax
086bf515 +0x091:  test   %al,%al
086bf517 +0x093:  je     086bf551 <+0xcd>
086bf519 +0x095:  lea    -0x18(%ebp),%eax
086bf51c +0x098:  mov    %eax,(%esp)
086bf51f +0x09b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086bf524 +0x0a0:  lea    -0x18(%ebp),%eax
086bf527 +0x0a3:  mov    0x10(%ebp),%edx
086bf52a +0x0a6:  mov    %edx,0x8(%esp)
086bf52e +0x0aa:  mov    %eax,0x4(%esp)
086bf532 +0x0ae:  mov    0x8(%ebp),%eax
086bf535 +0x0b1:  mov    %eax,(%esp)
086bf538 +0x0b4:  call   086bdea0 <_ZN7WarRoom12MakeSlotInfoEPci>  ; WarRoom::MakeSlotInfo(char*, int)
086bf53d +0x0b9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086bf542 +0x0be:  lea    -0x18(%ebp),%edx
086bf545 +0x0c1:  mov    %edx,0x4(%esp)
086bf549 +0x0c5:  mov    %eax,(%esp)
086bf54c +0x0c8:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086bf551 +0x0cd:  movzbl -0x1f(%ebp),%eax
086bf555 +0x0d1:  test   %al,%al
086bf557 +0x0d3:  jne    086bf5e9 <+0x165>
086bf55d +0x0d9:  cmpl   $0x0,-0xc(%ebp)
086bf561 +0x0dd:  jle    086bf5e9 <+0x165>
086bf567 +0x0e3:  movl   $0x5e,0x8(%esp)
086bf56f +0x0eb:  movl   $0x1,0x4(%esp)
086bf577 +0x0f3:  lea    -0x18(%ebp),%eax
086bf57a +0x0f6:  mov    %eax,(%esp)
086bf57d +0x0f9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bf582 +0x0fe:  movl   $0x0,0x4(%esp)
086bf58a +0x106:  lea    -0x18(%ebp),%eax
086bf58d +0x109:  mov    %eax,(%esp)
086bf590 +0x10c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bf595 +0x111:  mov    -0xc(%ebp),%eax
086bf598 +0x114:  mov    %eax,0x4(%esp)
086bf59c +0x118:  lea    -0x18(%ebp),%eax
086bf59f +0x11b:  mov    %eax,(%esp)
086bf5a2 +0x11e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bf5a7 +0x123:  movl   $0x1,0x4(%esp)
086bf5af +0x12b:  lea    -0x18(%ebp),%eax
086bf5b2 +0x12e:  mov    %eax,(%esp)
086bf5b5 +0x131:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bf5ba +0x136:  lea    -0x18(%ebp),%eax
086bf5bd +0x139:  mov    %eax,0x4(%esp)
086bf5c1 +0x13d:  mov    0xc(%ebp),%eax
086bf5c4 +0x140:  mov    %eax,(%esp)
086bf5c7 +0x143:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086bf5cc +0x148:  jmp    086bf5e9 <+0x165>
086bf5ce +0x14a:  mov    %edx,%ebx
086bf5d0 +0x14c:  mov    %eax,%esi
086bf5d2 +0x14e:  lea    -0x18(%ebp),%eax
086bf5d5 +0x151:  mov    %eax,(%esp)
086bf5d8 +0x154:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bf5dd +0x159:  mov    %esi,%eax
086bf5df +0x15b:  mov    %ebx,%edx
086bf5e1 +0x15d:  mov    %eax,(%esp)
086bf5e4 +0x160:  call   08ae3750 <_Unwind_Resume>
086bf5e9 +0x165:  lea    -0x18(%ebp),%eax
086bf5ec +0x168:  mov    %eax,(%esp)
086bf5ef +0x16b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bf5f4 +0x170:  add    $0x40,%esp
086bf5f7 +0x173:  pop    %ebx
086bf5f8 +0x174:  pop    %esi
086bf5f9 +0x175:  pop    %ebp
086bf5fa +0x176:  ret
086bf5fb +0x177:  nop
```

## 反编译 C

```c
// WarRoom::HandleSetSeatState @ 0x86bf484

/* WarRoom::HandleSetSeatState(CUser*, int, ENUM_SEAT_STATE) */

void __thiscall
WarRoom::HandleSetSeatState(WarRoom *this,CUser *param_1,int param_2,undefined4 param_4)

{
  CUser *pCVar1;
  GameWorld *pGVar2;
  char local_23 [3];
  CUser *local_20;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
  local_10 = 0;
  local_20 = (CUser *)0x0;
  local_23[2] = '\0';
  local_23[1] = 0;
  local_23[0] = '\0';
                    /* try { // try from 086bf4e8 to 086bf5cb has its CatchHandler @ 086bf5ce */
  local_10 = SetSlotState(this,param_1,param_2,param_4,&local_20,local_23 + 2,local_23 + 1,local_23)
  ;
  pCVar1 = local_20;
  if (local_10 == 0) {
    if (local_20 != (CUser *)0x0) {
      pGVar2 = (GameWorld *)G_GameWorld();
      GameWorld::out_from_warroom(pGVar2,pCVar1);
    }
    if (local_23[2] != '\0') {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      MakeSlotInfo(this,(char *)local_1c,param_2);
      pGVar2 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar2,local_1c);
    }
    if (local_23[0] != '\0') goto LAB_086bf5e9;
  }
  if (0 < local_10) {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x5e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
LAB_086bf5e9:
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
