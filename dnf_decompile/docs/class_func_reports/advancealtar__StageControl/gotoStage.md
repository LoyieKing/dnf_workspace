# gotoStage

`_ZN12advancealtar12StageControl9gotoStageEP5CUser`

`advancealtar::StageControl::gotoStage(CUser*)`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x0812fdd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812fdd4  _ZN12advancealtar12StageControl9gotoStageEP5CUser
#           advancealtar::StageControl::gotoStage(CUser*)
# range [0x0812fdd4, 0x081300cd]
0812fdd4 +0x000:  push   %ebp
0812fdd5 +0x001:  mov    %esp,%ebp
0812fdd7 +0x003:  push   %esi
0812fdd8 +0x004:  push   %ebx
0812fdd9 +0x005:  sub    $0x50,%esp
0812fddc +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0812fde1 +0x00d:  mov    0x8(%ebp),%edx
0812fde4 +0x010:  mov    %edx,0x4(%esp)
0812fde8 +0x014:  mov    %eax,(%esp)
0812fdeb +0x017:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
0812fdf0 +0x01c:  mov    %eax,-0x10(%ebp)
0812fdf3 +0x01f:  cmpl   $0x0,-0x10(%ebp)
0812fdf7 +0x023:  jne    0812fe46 <+0x72>
0812fdf9 +0x025:  mov    0x8(%ebp),%eax
0812fdfc +0x028:  mov    %eax,(%esp)
0812fdff +0x02b:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
0812fe04 +0x030:  movsbl %al,%ebx
0812fe07 +0x033:  movl   $0x5,0xc(%esp)
0812fe0f +0x03b:  movl   $0x585,0x8(%esp)
0812fe17 +0x043:  movl   $&_ZZN12advancealtar12StageControl9gotoStageEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0812fe1f +0x04b:  lea    -0x30(%ebp),%eax
0812fe22 +0x04e:  mov    %eax,(%esp)
0812fe25 +0x051:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0812fe2a +0x056:  mov    %ebx,0x8(%esp)
0812fe2e +0x05a:  movl   $"%d",0x4(%esp)
0812fe36 +0x062:  lea    -0x30(%ebp),%eax
0812fe39 +0x065:  mov    %eax,(%esp)
0812fe3c +0x068:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0812fe41 +0x06d:  jmp    081300c7 <+0x2f3>
0812fe46 +0x072:  movl   $0x0,0x4(%esp)
0812fe4e +0x07a:  mov    0x8(%ebp),%eax
0812fe51 +0x07d:  mov    %eax,(%esp)
0812fe54 +0x080:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
0812fe59 +0x085:  mov    %eax,0x4(%esp)
0812fe5d +0x089:  mov    -0x10(%ebp),%eax
0812fe60 +0x08c:  mov    %eax,(%esp)
0812fe63 +0x08f:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
0812fe68 +0x094:  mov    %eax,-0xc(%ebp)
0812fe6b +0x097:  cmpl   $0x0,-0xc(%ebp)
0812fe6f +0x09b:  jne    0812fec5 <+0xf1>
0812fe71 +0x09d:  movl   $0x0,0x4(%esp)
0812fe79 +0x0a5:  mov    0x8(%ebp),%eax
0812fe7c +0x0a8:  mov    %eax,(%esp)
0812fe7f +0x0ab:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
0812fe84 +0x0b0:  mov    %eax,%ebx
0812fe86 +0x0b2:  movl   $0x5,0xc(%esp)
0812fe8e +0x0ba:  movl   $0x58c,0x8(%esp)
0812fe96 +0x0c2:  movl   $&_ZZN12advancealtar12StageControl9gotoStageEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0812fe9e +0x0ca:  lea    -0x20(%ebp),%eax
0812fea1 +0x0cd:  mov    %eax,(%esp)
0812fea4 +0x0d0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0812fea9 +0x0d5:  mov    %ebx,0x8(%esp)
0812fead +0x0d9:  movl   $"%d",0x4(%esp)
0812feb5 +0x0e1:  lea    -0x20(%ebp),%eax
0812feb8 +0x0e4:  mov    %eax,(%esp)
0812febb +0x0e7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0812fec0 +0x0ec:  jmp    081300c7 <+0x2f3>
0812fec5 +0x0f1:  mov    0x8(%ebp),%eax
0812fec8 +0x0f4:  mov    %eax,0x4(%esp)
0812fecc +0x0f8:  mov    -0xc(%ebp),%eax
0812fecf +0x0fb:  mov    %eax,(%esp)
0812fed2 +0x0fe:  call   086c2be4 <_ZN4Area10erase_userEP5CUser>  ; Area::erase_user(CUser*)
0812fed7 +0x103:  lea    -0x3c(%ebp),%eax
0812feda +0x106:  mov    %eax,(%esp)
0812fedd +0x109:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0812fee2 +0x10e:  movl   $0x17,0x8(%esp)
0812feea +0x116:  movl   $0x0,0x4(%esp)
0812fef2 +0x11e:  lea    -0x3c(%ebp),%eax
0812fef5 +0x121:  mov    %eax,(%esp)
0812fef8 +0x124:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0812fefd +0x129:  mov    0x8(%ebp),%eax
0812ff00 +0x12c:  mov    %eax,(%esp)
0812ff03 +0x12f:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0812ff08 +0x134:  movzwl %ax,%eax
0812ff0b +0x137:  mov    %eax,0x4(%esp)
0812ff0f +0x13b:  lea    -0x3c(%ebp),%eax
0812ff12 +0x13e:  mov    %eax,(%esp)
0812ff15 +0x141:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0812ff1a +0x146:  mov    0x8(%ebp),%eax
0812ff1d +0x149:  mov    %eax,(%esp)
0812ff20 +0x14c:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
0812ff25 +0x151:  movsbl %al,%eax
0812ff28 +0x154:  mov    %eax,0x4(%esp)
0812ff2c +0x158:  lea    -0x3c(%ebp),%eax
0812ff2f +0x15b:  mov    %eax,(%esp)
0812ff32 +0x15e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0812ff37 +0x163:  movl   $0xff,0x4(%esp)
0812ff3f +0x16b:  lea    -0x3c(%ebp),%eax
0812ff42 +0x16e:  mov    %eax,(%esp)
0812ff45 +0x171:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0812ff4a +0x176:  mov    0x8(%ebp),%eax
0812ff4d +0x179:  mov    %eax,(%esp)
0812ff50 +0x17c:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
0812ff55 +0x181:  movzwl %ax,%eax
0812ff58 +0x184:  mov    %eax,0x4(%esp)
0812ff5c +0x188:  lea    -0x3c(%ebp),%eax
0812ff5f +0x18b:  mov    %eax,(%esp)
0812ff62 +0x18e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0812ff67 +0x193:  mov    0x8(%ebp),%eax
0812ff6a +0x196:  mov    %eax,(%esp)
0812ff6d +0x199:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
0812ff72 +0x19e:  movzwl %ax,%eax
0812ff75 +0x1a1:  mov    %eax,0x4(%esp)
0812ff79 +0x1a5:  lea    -0x3c(%ebp),%eax
0812ff7c +0x1a8:  mov    %eax,(%esp)
0812ff7f +0x1ab:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0812ff84 +0x1b0:  mov    0x8(%ebp),%eax
0812ff87 +0x1b3:  mov    %eax,(%esp)
0812ff8a +0x1b6:  call   0813494c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x553>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x553
0812ff8f +0x1bb:  movsbl %al,%eax
0812ff92 +0x1be:  mov    %eax,0x4(%esp)
0812ff96 +0x1c2:  lea    -0x3c(%ebp),%eax
0812ff99 +0x1c5:  mov    %eax,(%esp)
0812ff9c +0x1c8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0812ffa1 +0x1cd:  mov    0x8(%ebp),%eax
0812ffa4 +0x1d0:  mov    %eax,(%esp)
0812ffa7 +0x1d3:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
0812ffac +0x1d8:  movsbl %al,%eax
0812ffaf +0x1db:  mov    %eax,0x4(%esp)
0812ffb3 +0x1df:  lea    -0x3c(%ebp),%eax
0812ffb6 +0x1e2:  mov    %eax,(%esp)
0812ffb9 +0x1e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0812ffbe +0x1ea:  movl   $0x1,0x4(%esp)
0812ffc6 +0x1f2:  lea    -0x3c(%ebp),%eax
0812ffc9 +0x1f5:  mov    %eax,(%esp)
0812ffcc +0x1f8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0812ffd1 +0x1fd:  lea    -0x3c(%ebp),%eax
0812ffd4 +0x200:  mov    %eax,0x4(%esp)
0812ffd8 +0x204:  mov    0x8(%ebp),%eax
0812ffdb +0x207:  mov    %eax,(%esp)
0812ffde +0x20a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0812ffe3 +0x20f:  lea    -0x3c(%ebp),%eax
0812ffe6 +0x212:  mov    %eax,(%esp)
0812ffe9 +0x215:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0812ffee +0x21a:  movl   $0x3,0x8(%esp)
0812fff6 +0x222:  movl   $0x0,0x4(%esp)
0812fffe +0x22a:  lea    -0x3c(%ebp),%eax
08130001 +0x22d:  mov    %eax,(%esp)
08130004 +0x230:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08130009 +0x235:  movl   $0x1,0x4(%esp)
08130011 +0x23d:  lea    -0x3c(%ebp),%eax
08130014 +0x240:  mov    %eax,(%esp)
08130017 +0x243:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0813001c +0x248:  mov    0x8(%ebp),%eax
0813001f +0x24b:  mov    %eax,(%esp)
08130022 +0x24e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08130027 +0x253:  movzwl %ax,%eax
0813002a +0x256:  mov    %eax,0x4(%esp)
0813002e +0x25a:  lea    -0x3c(%ebp),%eax
08130031 +0x25d:  mov    %eax,(%esp)
08130034 +0x260:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08130039 +0x265:  movl   $0x1,0x4(%esp)
08130041 +0x26d:  lea    -0x3c(%ebp),%eax
08130044 +0x270:  mov    %eax,(%esp)
08130047 +0x273:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0813004c +0x278:  movl   $0x1,0x4(%esp)
08130054 +0x280:  lea    -0x3c(%ebp),%eax
08130057 +0x283:  mov    %eax,(%esp)
0813005a +0x286:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0813005f +0x28b:  lea    -0x3c(%ebp),%eax
08130062 +0x28e:  mov    %eax,0x4(%esp)
08130066 +0x292:  mov    0x8(%ebp),%eax
08130069 +0x295:  mov    %eax,(%esp)
0813006c +0x298:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08130071 +0x29d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08130076 +0x2a2:  mov    0x8(%ebp),%edx
08130079 +0x2a5:  mov    %edx,0x8(%esp)
0813007d +0x2a9:  lea    -0x3c(%ebp),%edx
08130080 +0x2ac:  mov    %edx,0x4(%esp)
08130084 +0x2b0:  mov    %eax,(%esp)
08130087 +0x2b3:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0813008c +0x2b8:  movl   $0xd,0x4(%esp)
08130094 +0x2c0:  mov    0x8(%ebp),%eax
08130097 +0x2c3:  mov    %eax,(%esp)
0813009a +0x2c6:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
0813009f +0x2cb:  jmp    081300bc <+0x2e8>
081300a1 +0x2cd:  mov    %edx,%ebx
081300a3 +0x2cf:  mov    %eax,%esi
081300a5 +0x2d1:  lea    -0x3c(%ebp),%eax
081300a8 +0x2d4:  mov    %eax,(%esp)
081300ab +0x2d7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081300b0 +0x2dc:  mov    %esi,%eax
081300b2 +0x2de:  mov    %ebx,%edx
081300b4 +0x2e0:  mov    %eax,(%esp)
081300b7 +0x2e3:  call   08ae3750 <_Unwind_Resume>
081300bc +0x2e8:  lea    -0x3c(%ebp),%eax
081300bf +0x2eb:  mov    %eax,(%esp)
081300c2 +0x2ee:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081300c7 +0x2f3:  add    $0x50,%esp
081300ca +0x2f6:  pop    %ebx
081300cb +0x2f7:  pop    %esi
081300cc +0x2f8:  pop    %ebp
081300cd +0x2f9:  ret
```

## 反编译 C

```c
// advancealtar::StageControl::gotoStage @ 0x812fdd4

/* advancealtar::StageControl::gotoStage(CUser*) */

void advancealtar::StageControl::gotoStage(CUser *param_1)

{
  char cVar1;
  GameWorld *pGVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  PacketGuard local_40 [12];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  Village *local_14;
  Area *local_10;
  
  pGVar2 = (GameWorld *)G_GameWorld();
  local_14 = (Village *)GameWorld::getUserVillage(pGVar2,param_1);
  if (local_14 == (Village *)0x0) {
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_34,"static void advancealtar::StageControl::gotoStage(CUser*)",0x585,5)
    ;
    cMyTrace::operator()(local_34,"%d",(int)cVar1);
  }
  else {
    iVar3 = CUser::get_area(param_1,false);
    local_10 = (Area *)Village::getArea(local_14,iVar3);
    if (local_10 == (Area *)0x0) {
      uVar4 = CUser::get_area(param_1,false);
      cMyTrace::cMyTrace(local_24,"static void advancealtar::StageControl::gotoStage(CUser*)",0x58c,
                         5);
      cMyTrace::operator()(local_24,"%d",uVar4);
    }
    else {
      Area::erase_user(local_10,param_1);
      PacketGuard::PacketGuard(local_40);
                    /* try { // try from 0812fef8 to 0813009e has its CatchHandler @ 081300a1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0x17);
      uVar5 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,uVar5 & 0xffff);
      cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)cVar1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0xff);
      uVar5 = CUser::get_posX(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,uVar5 & 0xffff);
      uVar5 = CUser::get_posY(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,uVar5 & 0xffff);
      cVar1 = CUser::get_direction(param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)cVar1);
      cVar1 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)cVar1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
      CUser::Send(param_1,local_40);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
      uVar5 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,uVar5 & 0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
      CUser::Send(param_1,local_40);
      pGVar2 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar2,local_40,param_1);
      CUser::set_state(param_1,0xd);
      PacketGuard::~PacketGuard(local_40);
    }
  }
  return;
}
```
