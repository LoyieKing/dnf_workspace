# outFromBlueMarble

`_ZN9GameWorld17outFromBlueMarbleEP5CUser`

`GameWorld::outFromBlueMarble(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c7914` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c7914  _ZN9GameWorld17outFromBlueMarbleEP5CUser
#           GameWorld::outFromBlueMarble(CUser*)
# range [0x086c7914, 0x086c7af7]
086c7914 +0x000:  push   %ebp
086c7915 +0x001:  mov    %esp,%ebp
086c7917 +0x003:  push   %esi
086c7918 +0x004:  push   %ebx
086c7919 +0x005:  sub    $0x40,%esp
086c791c +0x008:  movl   $0x0,0x4(%esp)
086c7924 +0x010:  mov    0xc(%ebp),%eax
086c7927 +0x013:  mov    %eax,(%esp)
086c792a +0x016:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c792f +0x01b:  mov    %eax,%ebx
086c7931 +0x01d:  mov    0xc(%ebp),%eax
086c7934 +0x020:  mov    %eax,(%esp)
086c7937 +0x023:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c793c +0x028:  movsbl %al,%eax
086c793f +0x02b:  mov    %ebx,0x8(%esp)
086c7943 +0x02f:  mov    %eax,0x4(%esp)
086c7947 +0x033:  mov    0x8(%ebp),%eax
086c794a +0x036:  mov    %eax,(%esp)
086c794d +0x039:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c7952 +0x03e:  xor    $0x1,%eax
086c7955 +0x041:  test   %al,%al
086c7957 +0x043:  je     086c79c8 <+0xb4>
086c7959 +0x045:  mov    0xc(%ebp),%eax
086c795c +0x048:  mov    %eax,(%esp)
086c795f +0x04b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c7964 +0x050:  mov    %eax,%ebx
086c7966 +0x052:  movl   $0x0,0xc(%esp)
086c796e +0x05a:  movl   $0xa7f,0x8(%esp)
086c7976 +0x062:  movl   $&_ZZN9GameWorld17outFromBlueMarbleEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
086c797e +0x06a:  lea    -0x20(%ebp),%eax
086c7981 +0x06d:  mov    %eax,(%esp)
086c7984 +0x070:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c7989 +0x075:  mov    %ebx,0x8(%esp)
086c798d +0x079:  movl   $"user %s - check_valid_area() fail",0x4(%esp)
086c7995 +0x081:  lea    -0x20(%ebp),%eax
086c7998 +0x084:  mov    %eax,(%esp)
086c799b +0x087:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c79a0 +0x08c:  movl   $0x0,0xc(%esp)
086c79a8 +0x094:  movl   $0x1,0x8(%esp)
086c79b0 +0x09c:  movl   $0x3,0x4(%esp)
086c79b8 +0x0a4:  mov    0xc(%ebp),%eax
086c79bb +0x0a7:  mov    %eax,(%esp)
086c79be +0x0aa:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
086c79c3 +0x0af:  jmp    086c7af0 <+0x1dc>
086c79c8 +0x0b4:  movl   $0xffffffff,0x4(%esp)
086c79d0 +0x0bc:  mov    0xc(%ebp),%eax
086c79d3 +0x0bf:  mov    %eax,(%esp)
086c79d6 +0x0c2:  call   080da340 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4dd>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4dd
086c79db +0x0c7:  mov    0xc(%ebp),%eax
086c79de +0x0ca:  mov    %eax,0x4(%esp)
086c79e2 +0x0ce:  mov    0x8(%ebp),%eax
086c79e5 +0x0d1:  mov    %eax,(%esp)
086c79e8 +0x0d4:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086c79ed +0x0d9:  mov    %eax,-0x10(%ebp)
086c79f0 +0x0dc:  cmpl   $0x0,-0x10(%ebp)
086c79f4 +0x0e0:  je     086c7a33 <+0x11f>
086c79f6 +0x0e2:  movl   $0x0,0x4(%esp)
086c79fe +0x0ea:  mov    0xc(%ebp),%eax
086c7a01 +0x0ed:  mov    %eax,(%esp)
086c7a04 +0x0f0:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c7a09 +0x0f5:  mov    %eax,0x4(%esp)
086c7a0d +0x0f9:  mov    -0x10(%ebp),%eax
086c7a10 +0x0fc:  mov    %eax,(%esp)
086c7a13 +0x0ff:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c7a18 +0x104:  mov    %eax,-0xc(%ebp)
086c7a1b +0x107:  cmpl   $0x0,-0xc(%ebp)
086c7a1f +0x10b:  je     086c7a33 <+0x11f>
086c7a21 +0x10d:  mov    0xc(%ebp),%eax
086c7a24 +0x110:  mov    %eax,0x4(%esp)
086c7a28 +0x114:  mov    -0xc(%ebp),%eax
086c7a2b +0x117:  mov    %eax,(%esp)
086c7a2e +0x11a:  call   086c25a6 <_ZN4Area11insert_userEP5CUser>  ; Area::insert_user(CUser*)
086c7a33 +0x11f:  lea    -0x2c(%ebp),%eax
086c7a36 +0x122:  mov    %eax,(%esp)
086c7a39 +0x125:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c7a3e +0x12a:  movl   $0x3,0x8(%esp)
086c7a46 +0x132:  movl   $0x0,0x4(%esp)
086c7a4e +0x13a:  lea    -0x2c(%ebp),%eax
086c7a51 +0x13d:  mov    %eax,(%esp)
086c7a54 +0x140:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c7a59 +0x145:  movl   $0x1,0x4(%esp)
086c7a61 +0x14d:  lea    -0x2c(%ebp),%eax
086c7a64 +0x150:  mov    %eax,(%esp)
086c7a67 +0x153:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7a6c +0x158:  mov    0xc(%ebp),%eax
086c7a6f +0x15b:  mov    %eax,(%esp)
086c7a72 +0x15e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c7a77 +0x163:  movzwl %ax,%eax
086c7a7a +0x166:  mov    %eax,0x4(%esp)
086c7a7e +0x16a:  lea    -0x2c(%ebp),%eax
086c7a81 +0x16d:  mov    %eax,(%esp)
086c7a84 +0x170:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c7a89 +0x175:  movl   $0x0,0x4(%esp)
086c7a91 +0x17d:  lea    -0x2c(%ebp),%eax
086c7a94 +0x180:  mov    %eax,(%esp)
086c7a97 +0x183:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7a9c +0x188:  movl   $0x1,0x4(%esp)
086c7aa4 +0x190:  lea    -0x2c(%ebp),%eax
086c7aa7 +0x193:  mov    %eax,(%esp)
086c7aaa +0x196:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c7aaf +0x19b:  mov    0xc(%ebp),%eax
086c7ab2 +0x19e:  mov    %eax,0x8(%esp)
086c7ab6 +0x1a2:  lea    -0x2c(%ebp),%eax
086c7ab9 +0x1a5:  mov    %eax,0x4(%esp)
086c7abd +0x1a9:  mov    0x8(%ebp),%eax
086c7ac0 +0x1ac:  mov    %eax,(%esp)
086c7ac3 +0x1af:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
086c7ac8 +0x1b4:  jmp    086c7ae5 <+0x1d1>
086c7aca +0x1b6:  mov    %edx,%ebx
086c7acc +0x1b8:  mov    %eax,%esi
086c7ace +0x1ba:  lea    -0x2c(%ebp),%eax
086c7ad1 +0x1bd:  mov    %eax,(%esp)
086c7ad4 +0x1c0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c7ad9 +0x1c5:  mov    %esi,%eax
086c7adb +0x1c7:  mov    %ebx,%edx
086c7add +0x1c9:  mov    %eax,(%esp)
086c7ae0 +0x1cc:  call   08ae3750 <_Unwind_Resume>
086c7ae5 +0x1d1:  lea    -0x2c(%ebp),%eax
086c7ae8 +0x1d4:  mov    %eax,(%esp)
086c7aeb +0x1d7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c7af0 +0x1dc:  add    $0x40,%esp
086c7af3 +0x1df:  pop    %ebx
086c7af4 +0x1e0:  pop    %esi
086c7af5 +0x1e1:  pop    %ebp
086c7af6 +0x1e2:  ret
086c7af7 +0x1e3:  nop
```

## 反编译 C

```c
// GameWorld::outFromBlueMarble @ 0x86c7914

/* GameWorld::outFromBlueMarble(CUser*) */

void __thiscall GameWorld::outFromBlueMarble(GameWorld *this,CUser *param_1)

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
    CUser::setBlueMarbleIndex(param_1,-1);
    local_14 = (Village *)getUserVillage(this,param_1);
    if (local_14 != (Village *)0x0) {
      iVar2 = CUser::get_area(param_1,false);
      local_10 = (Area *)Village::getArea(local_14,iVar2);
      if (local_10 != (Area *)0x0) {
        Area::insert_user(local_10,param_1);
      }
    }
    PacketGuard::PacketGuard(local_30);
                    /* try { // try from 086c7a54 to 086c7ac7 has its CatchHandler @ 086c7aca */
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
    cMyTrace::cMyTrace(local_24,"void GameWorld::outFromBlueMarble(CUser*)",0xa7f,0);
    cMyTrace::operator()(local_24,"user %s - check_valid_area() fail",uVar3);
    CUser::DisConnSig(param_1,3,1,0);
  }
  return;
}
```
