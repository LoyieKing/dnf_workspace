# out_from_pvp

`_ZN9GameWorld12out_from_pvpEP5CUser`

`GameWorld::out_from_pvp(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c6fae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c6fae  _ZN9GameWorld12out_from_pvpEP5CUser
#           GameWorld::out_from_pvp(CUser*)
# range [0x086c6fae, 0x086c7191]
086c6fae +0x000:  push   %ebp
086c6faf +0x001:  mov    %esp,%ebp
086c6fb1 +0x003:  push   %esi
086c6fb2 +0x004:  push   %ebx
086c6fb3 +0x005:  sub    $0x40,%esp
086c6fb6 +0x008:  movl   $0x0,0x4(%esp)
086c6fbe +0x010:  mov    0xc(%ebp),%eax
086c6fc1 +0x013:  mov    %eax,(%esp)
086c6fc4 +0x016:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c6fc9 +0x01b:  mov    %eax,%ebx
086c6fcb +0x01d:  mov    0xc(%ebp),%eax
086c6fce +0x020:  mov    %eax,(%esp)
086c6fd1 +0x023:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c6fd6 +0x028:  movsbl %al,%eax
086c6fd9 +0x02b:  mov    %ebx,0x8(%esp)
086c6fdd +0x02f:  mov    %eax,0x4(%esp)
086c6fe1 +0x033:  mov    0x8(%ebp),%eax
086c6fe4 +0x036:  mov    %eax,(%esp)
086c6fe7 +0x039:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c6fec +0x03e:  xor    $0x1,%eax
086c6fef +0x041:  test   %al,%al
086c6ff1 +0x043:  je     086c7062 <+0xb4>
086c6ff3 +0x045:  mov    0xc(%ebp),%eax
086c6ff6 +0x048:  mov    %eax,(%esp)
086c6ff9 +0x04b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c6ffe +0x050:  mov    %eax,%ebx
086c7000 +0x052:  movl   $0x0,0xc(%esp)
086c7008 +0x05a:  movl   $0x9ce,0x8(%esp)
086c7010 +0x062:  movl   $&_ZZN9GameWorld12out_from_pvpEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
086c7018 +0x06a:  lea    -0x20(%ebp),%eax
086c701b +0x06d:  mov    %eax,(%esp)
086c701e +0x070:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c7023 +0x075:  mov    %ebx,0x8(%esp)
086c7027 +0x079:  movl   $"user %s - check_valid_area() fail",0x4(%esp)
086c702f +0x081:  lea    -0x20(%ebp),%eax
086c7032 +0x084:  mov    %eax,(%esp)
086c7035 +0x087:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c703a +0x08c:  movl   $0x0,0xc(%esp)
086c7042 +0x094:  movl   $0x1,0x8(%esp)
086c704a +0x09c:  movl   $0x3,0x4(%esp)
086c7052 +0x0a4:  mov    0xc(%ebp),%eax
086c7055 +0x0a7:  mov    %eax,(%esp)
086c7058 +0x0aa:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
086c705d +0x0af:  jmp    086c718a <+0x1dc>
086c7062 +0x0b4:  movl   $0xffffffff,0x4(%esp)
086c706a +0x0bc:  mov    0xc(%ebp),%eax
086c706d +0x0bf:  mov    %eax,(%esp)
086c7070 +0x0c2:  call   085df9b2 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x239>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x239
086c7075 +0x0c7:  mov    0xc(%ebp),%eax
086c7078 +0x0ca:  mov    %eax,0x4(%esp)
086c707c +0x0ce:  mov    0x8(%ebp),%eax
086c707f +0x0d1:  mov    %eax,(%esp)
086c7082 +0x0d4:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086c7087 +0x0d9:  mov    %eax,-0x10(%ebp)
086c708a +0x0dc:  cmpl   $0x0,-0x10(%ebp)
086c708e +0x0e0:  je     086c70cd <+0x11f>
086c7090 +0x0e2:  movl   $0x0,0x4(%esp)
086c7098 +0x0ea:  mov    0xc(%ebp),%eax
086c709b +0x0ed:  mov    %eax,(%esp)
086c709e +0x0f0:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c70a3 +0x0f5:  mov    %eax,0x4(%esp)
086c70a7 +0x0f9:  mov    -0x10(%ebp),%eax
086c70aa +0x0fc:  mov    %eax,(%esp)
086c70ad +0x0ff:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c70b2 +0x104:  mov    %eax,-0xc(%ebp)
086c70b5 +0x107:  cmpl   $0x0,-0xc(%ebp)
086c70b9 +0x10b:  je     086c70cd <+0x11f>
086c70bb +0x10d:  mov    0xc(%ebp),%eax
086c70be +0x110:  mov    %eax,0x4(%esp)
086c70c2 +0x114:  mov    -0xc(%ebp),%eax
086c70c5 +0x117:  mov    %eax,(%esp)
086c70c8 +0x11a:  call   086c25a6 <_ZN4Area11insert_userEP5CUser>  ; Area::insert_user(CUser*)
086c70cd +0x11f:  lea    -0x2c(%ebp),%eax
086c70d0 +0x122:  mov    %eax,(%esp)
086c70d3 +0x125:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c70d8 +0x12a:  movl   $0x3,0x8(%esp)
086c70e0 +0x132:  movl   $0x0,0x4(%esp)
086c70e8 +0x13a:  lea    -0x2c(%ebp),%eax
086c70eb +0x13d:  mov    %eax,(%esp)
086c70ee +0x140:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c70f3 +0x145:  movl   $0x1,0x4(%esp)
086c70fb +0x14d:  lea    -0x2c(%ebp),%eax
086c70fe +0x150:  mov    %eax,(%esp)
086c7101 +0x153:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7106 +0x158:  mov    0xc(%ebp),%eax
086c7109 +0x15b:  mov    %eax,(%esp)
086c710c +0x15e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c7111 +0x163:  movzwl %ax,%eax
086c7114 +0x166:  mov    %eax,0x4(%esp)
086c7118 +0x16a:  lea    -0x2c(%ebp),%eax
086c711b +0x16d:  mov    %eax,(%esp)
086c711e +0x170:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c7123 +0x175:  movl   $0x0,0x4(%esp)
086c712b +0x17d:  lea    -0x2c(%ebp),%eax
086c712e +0x180:  mov    %eax,(%esp)
086c7131 +0x183:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7136 +0x188:  movl   $0x1,0x4(%esp)
086c713e +0x190:  lea    -0x2c(%ebp),%eax
086c7141 +0x193:  mov    %eax,(%esp)
086c7144 +0x196:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c7149 +0x19b:  mov    0xc(%ebp),%eax
086c714c +0x19e:  mov    %eax,0x8(%esp)
086c7150 +0x1a2:  lea    -0x2c(%ebp),%eax
086c7153 +0x1a5:  mov    %eax,0x4(%esp)
086c7157 +0x1a9:  mov    0x8(%ebp),%eax
086c715a +0x1ac:  mov    %eax,(%esp)
086c715d +0x1af:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
086c7162 +0x1b4:  jmp    086c717f <+0x1d1>
086c7164 +0x1b6:  mov    %edx,%ebx
086c7166 +0x1b8:  mov    %eax,%esi
086c7168 +0x1ba:  lea    -0x2c(%ebp),%eax
086c716b +0x1bd:  mov    %eax,(%esp)
086c716e +0x1c0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c7173 +0x1c5:  mov    %esi,%eax
086c7175 +0x1c7:  mov    %ebx,%edx
086c7177 +0x1c9:  mov    %eax,(%esp)
086c717a +0x1cc:  call   08ae3750 <_Unwind_Resume>
086c717f +0x1d1:  lea    -0x2c(%ebp),%eax
086c7182 +0x1d4:  mov    %eax,(%esp)
086c7185 +0x1d7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c718a +0x1dc:  add    $0x40,%esp
086c718d +0x1df:  pop    %ebx
086c718e +0x1e0:  pop    %esi
086c718f +0x1e1:  pop    %ebp
086c7190 +0x1e2:  ret
086c7191 +0x1e3:  nop
```

## 反编译 C

```c
// GameWorld::out_from_pvp @ 0x86c6fae

/* GameWorld::out_from_pvp(CUser*) */

void __thiscall GameWorld::out_from_pvp(GameWorld *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  Village *local_14;
  Area *local_10;
  
  iVar2 = CUser::get_area(param_1,false);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  cVar1 = check_valid_area(this,(int)cVar1,iVar2);
  if (cVar1 == '\x01') {
    CUser::SetPvpIndex(param_1,-1);
    local_14 = (Village *)getUserVillage(this,param_1);
    if (local_14 != (Village *)0x0) {
      iVar2 = CUser::get_area(param_1,false);
      local_10 = (Area *)Village::getArea(local_14,iVar2);
      if (local_10 != (Area *)0x0) {
        Area::insert_user(local_10,param_1);
      }
    }
    PacketGuard::PacketGuard(local_30);
                    /* try { // try from 086c70ee to 086c7161 has its CatchHandler @ 086c7164 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
    uVar4 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,uVar4 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    send_all(this,local_30,param_1);
    PacketGuard::~PacketGuard(local_30);
  }
  else {
    uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_24,"void GameWorld::out_from_pvp(CUser*)",0x9ce,0);
    cMyTrace::operator()(local_24,"user %s - check_valid_area() fail",uVar3);
    CUser::DisConnSig(param_1,3,1,0);
  }
  return;
}
```
