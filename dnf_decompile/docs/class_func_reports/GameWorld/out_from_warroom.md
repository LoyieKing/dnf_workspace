# out_from_warroom

`_ZN9GameWorld16out_from_warroomEP5CUser`

`GameWorld::out_from_warroom(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c7452` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c7452  _ZN9GameWorld16out_from_warroomEP5CUser
#           GameWorld::out_from_warroom(CUser*)
# range [0x086c7452, 0x086c7653]
086c7452 +0x000:  push   %ebp
086c7453 +0x001:  mov    %esp,%ebp
086c7455 +0x003:  push   %esi
086c7456 +0x004:  push   %ebx
086c7457 +0x005:  sub    $0x40,%esp
086c745a +0x008:  movl   $0x0,0x4(%esp)
086c7462 +0x010:  mov    0xc(%ebp),%eax
086c7465 +0x013:  mov    %eax,(%esp)
086c7468 +0x016:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c746d +0x01b:  mov    %eax,%ebx
086c746f +0x01d:  mov    0xc(%ebp),%eax
086c7472 +0x020:  mov    %eax,(%esp)
086c7475 +0x023:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c747a +0x028:  movsbl %al,%eax
086c747d +0x02b:  mov    %ebx,0x8(%esp)
086c7481 +0x02f:  mov    %eax,0x4(%esp)
086c7485 +0x033:  mov    0x8(%ebp),%eax
086c7488 +0x036:  mov    %eax,(%esp)
086c748b +0x039:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c7490 +0x03e:  xor    $0x1,%eax
086c7493 +0x041:  test   %al,%al
086c7495 +0x043:  je     086c7506 <+0xb4>
086c7497 +0x045:  mov    0xc(%ebp),%eax
086c749a +0x048:  mov    %eax,(%esp)
086c749d +0x04b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c74a2 +0x050:  mov    %eax,%ebx
086c74a4 +0x052:  movl   $0x0,0xc(%esp)
086c74ac +0x05a:  movl   $0xa29,0x8(%esp)
086c74b4 +0x062:  movl   $&_ZZN9GameWorld16out_from_warroomEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
086c74bc +0x06a:  lea    -0x20(%ebp),%eax
086c74bf +0x06d:  mov    %eax,(%esp)
086c74c2 +0x070:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c74c7 +0x075:  mov    %ebx,0x8(%esp)
086c74cb +0x079:  movl   $"user %s - check_valid_area() fail",0x4(%esp)
086c74d3 +0x081:  lea    -0x20(%ebp),%eax
086c74d6 +0x084:  mov    %eax,(%esp)
086c74d9 +0x087:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c74de +0x08c:  movl   $0x0,0xc(%esp)
086c74e6 +0x094:  movl   $0x1,0x8(%esp)
086c74ee +0x09c:  movl   $0x3,0x4(%esp)
086c74f6 +0x0a4:  mov    0xc(%ebp),%eax
086c74f9 +0x0a7:  mov    %eax,(%esp)
086c74fc +0x0aa:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
086c7501 +0x0af:  jmp    086c764c <+0x1fa>
086c7506 +0x0b4:  movl   $0xffffffff,0x4(%esp)
086c750e +0x0bc:  mov    0xc(%ebp),%eax
086c7511 +0x0bf:  mov    %eax,(%esp)
086c7514 +0x0c2:  call   086c0b50 <_GLOBAL__I__ZN7WarRoomC2Ev+0x49>  ; global constructors keyed to WarRoom::WarRoom()+0x49
086c7519 +0x0c7:  mov    0xc(%ebp),%eax
086c751c +0x0ca:  mov    %eax,0x4(%esp)
086c7520 +0x0ce:  mov    0x8(%ebp),%eax
086c7523 +0x0d1:  mov    %eax,(%esp)
086c7526 +0x0d4:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086c752b +0x0d9:  mov    %eax,-0x10(%ebp)
086c752e +0x0dc:  cmpl   $0x0,-0x10(%ebp)
086c7532 +0x0e0:  je     086c7571 <+0x11f>
086c7534 +0x0e2:  movl   $0x0,0x4(%esp)
086c753c +0x0ea:  mov    0xc(%ebp),%eax
086c753f +0x0ed:  mov    %eax,(%esp)
086c7542 +0x0f0:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c7547 +0x0f5:  mov    %eax,0x4(%esp)
086c754b +0x0f9:  mov    -0x10(%ebp),%eax
086c754e +0x0fc:  mov    %eax,(%esp)
086c7551 +0x0ff:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c7556 +0x104:  mov    %eax,-0xc(%ebp)
086c7559 +0x107:  cmpl   $0x0,-0xc(%ebp)
086c755d +0x10b:  je     086c7571 <+0x11f>
086c755f +0x10d:  mov    0xc(%ebp),%eax
086c7562 +0x110:  mov    %eax,0x4(%esp)
086c7566 +0x114:  mov    -0xc(%ebp),%eax
086c7569 +0x117:  mov    %eax,(%esp)
086c756c +0x11a:  call   086c25a6 <_ZN4Area11insert_userEP5CUser>  ; Area::insert_user(CUser*)
086c7571 +0x11f:  lea    -0x2c(%ebp),%eax
086c7574 +0x122:  mov    %eax,(%esp)
086c7577 +0x125:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c757c +0x12a:  movl   $0x3,0x8(%esp)
086c7584 +0x132:  movl   $0x0,0x4(%esp)
086c758c +0x13a:  lea    -0x2c(%ebp),%eax
086c758f +0x13d:  mov    %eax,(%esp)
086c7592 +0x140:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c7597 +0x145:  movl   $0x1,0x4(%esp)
086c759f +0x14d:  lea    -0x2c(%ebp),%eax
086c75a2 +0x150:  mov    %eax,(%esp)
086c75a5 +0x153:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c75aa +0x158:  mov    0xc(%ebp),%eax
086c75ad +0x15b:  mov    %eax,(%esp)
086c75b0 +0x15e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c75b5 +0x163:  movzwl %ax,%eax
086c75b8 +0x166:  mov    %eax,0x4(%esp)
086c75bc +0x16a:  lea    -0x2c(%ebp),%eax
086c75bf +0x16d:  mov    %eax,(%esp)
086c75c2 +0x170:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c75c7 +0x175:  movl   $0x0,0x4(%esp)
086c75cf +0x17d:  lea    -0x2c(%ebp),%eax
086c75d2 +0x180:  mov    %eax,(%esp)
086c75d5 +0x183:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c75da +0x188:  movl   $0x1,0x4(%esp)
086c75e2 +0x190:  lea    -0x2c(%ebp),%eax
086c75e5 +0x193:  mov    %eax,(%esp)
086c75e8 +0x196:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c75ed +0x19b:  mov    0xc(%ebp),%eax
086c75f0 +0x19e:  mov    %eax,0x8(%esp)
086c75f4 +0x1a2:  lea    -0x2c(%ebp),%eax
086c75f7 +0x1a5:  mov    %eax,0x4(%esp)
086c75fb +0x1a9:  mov    0x8(%ebp),%eax
086c75fe +0x1ac:  mov    %eax,(%esp)
086c7601 +0x1af:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
086c7606 +0x1b4:  mov    0xc(%ebp),%eax
086c7609 +0x1b7:  mov    %eax,(%esp)
086c760c +0x1ba:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086c7611 +0x1bf:  mov    %eax,(%esp)
086c7614 +0x1c2:  call   0850a298 <_ZN10CInventory12RemoveKCItemEv>  ; CInventory::RemoveKCItem()
086c7619 +0x1c7:  mov    0xc(%ebp),%eax
086c761c +0x1ca:  mov    %eax,(%esp)
086c761f +0x1cd:  call   0864592a <_ZN15CUserCharacInfo15InitFinishPointEv>  ; CUserCharacInfo::InitFinishPoint()
086c7624 +0x1d2:  jmp    086c7641 <+0x1ef>
086c7626 +0x1d4:  mov    %edx,%ebx
086c7628 +0x1d6:  mov    %eax,%esi
086c762a +0x1d8:  lea    -0x2c(%ebp),%eax
086c762d +0x1db:  mov    %eax,(%esp)
086c7630 +0x1de:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c7635 +0x1e3:  mov    %esi,%eax
086c7637 +0x1e5:  mov    %ebx,%edx
086c7639 +0x1e7:  mov    %eax,(%esp)
086c763c +0x1ea:  call   08ae3750 <_Unwind_Resume>
086c7641 +0x1ef:  lea    -0x2c(%ebp),%eax
086c7644 +0x1f2:  mov    %eax,(%esp)
086c7647 +0x1f5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c764c +0x1fa:  add    $0x40,%esp
086c764f +0x1fd:  pop    %ebx
086c7650 +0x1fe:  pop    %esi
086c7651 +0x1ff:  pop    %ebp
086c7652 +0x200:  ret
086c7653 +0x201:  nop
```

## 反编译 C

```c
// GameWorld::out_from_warroom @ 0x86c7452

/* GameWorld::out_from_warroom(CUser*) */

void __thiscall GameWorld::out_from_warroom(GameWorld *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  CInventory *this_00;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  Village *local_14;
  Area *local_10;
  
  iVar2 = CUser::get_area(param_1,false);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  cVar1 = check_valid_area(this,(int)cVar1,iVar2);
  if (cVar1 == '\x01') {
    CUser::SetWarRoomIndex(param_1,-1);
    local_14 = (Village *)getUserVillage(this,param_1);
    if (local_14 != (Village *)0x0) {
      iVar2 = CUser::get_area(param_1,false);
      local_10 = (Area *)Village::getArea(local_14,iVar2);
      if (local_10 != (Area *)0x0) {
        Area::insert_user(local_10,param_1);
      }
    }
    PacketGuard::PacketGuard(local_30);
                    /* try { // try from 086c7592 to 086c7623 has its CatchHandler @ 086c7626 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
    uVar4 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,uVar4 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    send_all(this,local_30,param_1);
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::RemoveKCItem(this_00);
    CUserCharacInfo::InitFinishPoint((CUserCharacInfo *)param_1);
    PacketGuard::~PacketGuard(local_30);
  }
  else {
    uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_24,"void GameWorld::out_from_warroom(CUser*)",0xa29,0);
    cMyTrace::operator()(local_24,"user %s - check_valid_area() fail",uVar3);
    CUser::DisConnSig(param_1,3,1,0);
  }
  return;
}
```
