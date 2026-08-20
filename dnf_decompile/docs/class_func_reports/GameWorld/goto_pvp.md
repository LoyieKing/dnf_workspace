# goto_pvp

`_ZN9GameWorld8goto_pvpEP5CUser`

`GameWorld::goto_pvp(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c6cee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c6cee  _ZN9GameWorld8goto_pvpEP5CUser
#           GameWorld::goto_pvp(CUser*)
# range [0x086c6cee, 0x086c6fad]
086c6cee +0x000:  push   %ebp
086c6cef +0x001:  mov    %esp,%ebp
086c6cf1 +0x003:  push   %esi
086c6cf2 +0x004:  push   %ebx
086c6cf3 +0x005:  sub    $0x40,%esp
086c6cf6 +0x008:  movl   $0x0,0x4(%esp)
086c6cfe +0x010:  mov    0xc(%ebp),%eax
086c6d01 +0x013:  mov    %eax,(%esp)
086c6d04 +0x016:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c6d09 +0x01b:  mov    %eax,%ebx
086c6d0b +0x01d:  mov    0xc(%ebp),%eax
086c6d0e +0x020:  mov    %eax,(%esp)
086c6d11 +0x023:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c6d16 +0x028:  movsbl %al,%eax
086c6d19 +0x02b:  mov    %ebx,0x8(%esp)
086c6d1d +0x02f:  mov    %eax,0x4(%esp)
086c6d21 +0x033:  mov    0x8(%ebp),%eax
086c6d24 +0x036:  mov    %eax,(%esp)
086c6d27 +0x039:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c6d2c +0x03e:  xor    $0x1,%eax
086c6d2f +0x041:  test   %al,%al
086c6d31 +0x043:  je     086c6d73 <+0x85>
086c6d33 +0x045:  mov    0xc(%ebp),%eax
086c6d36 +0x048:  mov    %eax,(%esp)
086c6d39 +0x04b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c6d3e +0x050:  mov    %eax,0x14(%esp)
086c6d42 +0x054:  movl   $"user %s - check_valid_area() fail",0x10(%esp)
086c6d4a +0x05c:  movl   $0x998,0xc(%esp)
086c6d52 +0x064:  movl   $&_ZZN9GameWorld8goto_pvpEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c6d5a +0x06c:  movl   $"world.cpp",0x4(%esp)
086c6d62 +0x074:  movl   $0x1,(%esp)
086c6d69 +0x07b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c6d6e +0x080:  jmp    086c6fa7 <+0x2b9>
086c6d73 +0x085:  mov    0xc(%ebp),%eax
086c6d76 +0x088:  mov    %eax,0x4(%esp)
086c6d7a +0x08c:  mov    0x8(%ebp),%eax
086c6d7d +0x08f:  mov    %eax,(%esp)
086c6d80 +0x092:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086c6d85 +0x097:  mov    %eax,-0x10(%ebp)
086c6d88 +0x09a:  cmpl   $0x0,-0x10(%ebp)
086c6d8c +0x09e:  je     086c6dcb <+0xdd>
086c6d8e +0x0a0:  movl   $0x0,0x4(%esp)
086c6d96 +0x0a8:  mov    0xc(%ebp),%eax
086c6d99 +0x0ab:  mov    %eax,(%esp)
086c6d9c +0x0ae:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c6da1 +0x0b3:  mov    %eax,0x4(%esp)
086c6da5 +0x0b7:  mov    -0x10(%ebp),%eax
086c6da8 +0x0ba:  mov    %eax,(%esp)
086c6dab +0x0bd:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c6db0 +0x0c2:  mov    %eax,-0xc(%ebp)
086c6db3 +0x0c5:  cmpl   $0x0,-0xc(%ebp)
086c6db7 +0x0c9:  je     086c6dcb <+0xdd>
086c6db9 +0x0cb:  mov    0xc(%ebp),%eax
086c6dbc +0x0ce:  mov    %eax,0x4(%esp)
086c6dc0 +0x0d2:  mov    -0xc(%ebp),%eax
086c6dc3 +0x0d5:  mov    %eax,(%esp)
086c6dc6 +0x0d8:  call   086c2be4 <_ZN4Area10erase_userEP5CUser>  ; Area::erase_user(CUser*)
086c6dcb +0x0dd:  lea    -0x1c(%ebp),%eax
086c6dce +0x0e0:  mov    %eax,(%esp)
086c6dd1 +0x0e3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c6dd6 +0x0e8:  movl   $0x17,0x8(%esp)
086c6dde +0x0f0:  movl   $0x0,0x4(%esp)
086c6de6 +0x0f8:  lea    -0x1c(%ebp),%eax
086c6de9 +0x0fb:  mov    %eax,(%esp)
086c6dec +0x0fe:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c6df1 +0x103:  mov    0xc(%ebp),%eax
086c6df4 +0x106:  mov    %eax,(%esp)
086c6df7 +0x109:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c6dfc +0x10e:  movzwl %ax,%eax
086c6dff +0x111:  mov    %eax,0x4(%esp)
086c6e03 +0x115:  lea    -0x1c(%ebp),%eax
086c6e06 +0x118:  mov    %eax,(%esp)
086c6e09 +0x11b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c6e0e +0x120:  mov    0xc(%ebp),%eax
086c6e11 +0x123:  mov    %eax,(%esp)
086c6e14 +0x126:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c6e19 +0x12b:  movsbl %al,%eax
086c6e1c +0x12e:  mov    %eax,0x4(%esp)
086c6e20 +0x132:  lea    -0x1c(%ebp),%eax
086c6e23 +0x135:  mov    %eax,(%esp)
086c6e26 +0x138:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6e2b +0x13d:  movl   $0xfe,0x4(%esp)
086c6e33 +0x145:  lea    -0x1c(%ebp),%eax
086c6e36 +0x148:  mov    %eax,(%esp)
086c6e39 +0x14b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6e3e +0x150:  mov    0xc(%ebp),%eax
086c6e41 +0x153:  mov    %eax,(%esp)
086c6e44 +0x156:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
086c6e49 +0x15b:  movzwl %ax,%eax
086c6e4c +0x15e:  mov    %eax,0x4(%esp)
086c6e50 +0x162:  lea    -0x1c(%ebp),%eax
086c6e53 +0x165:  mov    %eax,(%esp)
086c6e56 +0x168:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c6e5b +0x16d:  mov    0xc(%ebp),%eax
086c6e5e +0x170:  mov    %eax,(%esp)
086c6e61 +0x173:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
086c6e66 +0x178:  movzwl %ax,%eax
086c6e69 +0x17b:  mov    %eax,0x4(%esp)
086c6e6d +0x17f:  lea    -0x1c(%ebp),%eax
086c6e70 +0x182:  mov    %eax,(%esp)
086c6e73 +0x185:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c6e78 +0x18a:  mov    0xc(%ebp),%eax
086c6e7b +0x18d:  mov    %eax,(%esp)
086c6e7e +0x190:  call   0813494c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x553>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x553
086c6e83 +0x195:  movsbl %al,%eax
086c6e86 +0x198:  mov    %eax,0x4(%esp)
086c6e8a +0x19c:  lea    -0x1c(%ebp),%eax
086c6e8d +0x19f:  mov    %eax,(%esp)
086c6e90 +0x1a2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6e95 +0x1a7:  mov    0xc(%ebp),%eax
086c6e98 +0x1aa:  mov    %eax,(%esp)
086c6e9b +0x1ad:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
086c6ea0 +0x1b2:  movsbl %al,%eax
086c6ea3 +0x1b5:  mov    %eax,0x4(%esp)
086c6ea7 +0x1b9:  lea    -0x1c(%ebp),%eax
086c6eaa +0x1bc:  mov    %eax,(%esp)
086c6ead +0x1bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6eb2 +0x1c4:  movl   $0x1,0x4(%esp)
086c6eba +0x1cc:  lea    -0x1c(%ebp),%eax
086c6ebd +0x1cf:  mov    %eax,(%esp)
086c6ec0 +0x1d2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c6ec5 +0x1d7:  lea    -0x1c(%ebp),%eax
086c6ec8 +0x1da:  mov    %eax,0x4(%esp)
086c6ecc +0x1de:  mov    0xc(%ebp),%eax
086c6ecf +0x1e1:  mov    %eax,(%esp)
086c6ed2 +0x1e4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c6ed7 +0x1e9:  movl   $0x6,0x4(%esp)
086c6edf +0x1f1:  mov    0xc(%ebp),%eax
086c6ee2 +0x1f4:  mov    %eax,(%esp)
086c6ee5 +0x1f7:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
086c6eea +0x1fc:  lea    -0x1c(%ebp),%eax
086c6eed +0x1ff:  mov    %eax,(%esp)
086c6ef0 +0x202:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086c6ef5 +0x207:  movl   $0x3,0x8(%esp)
086c6efd +0x20f:  movl   $0x0,0x4(%esp)
086c6f05 +0x217:  lea    -0x1c(%ebp),%eax
086c6f08 +0x21a:  mov    %eax,(%esp)
086c6f0b +0x21d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c6f10 +0x222:  movl   $0x1,0x4(%esp)
086c6f18 +0x22a:  lea    -0x1c(%ebp),%eax
086c6f1b +0x22d:  mov    %eax,(%esp)
086c6f1e +0x230:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6f23 +0x235:  mov    0xc(%ebp),%eax
086c6f26 +0x238:  mov    %eax,(%esp)
086c6f29 +0x23b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c6f2e +0x240:  movzwl %ax,%eax
086c6f31 +0x243:  mov    %eax,0x4(%esp)
086c6f35 +0x247:  lea    -0x1c(%ebp),%eax
086c6f38 +0x24a:  mov    %eax,(%esp)
086c6f3b +0x24d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c6f40 +0x252:  movl   $0x2,0x4(%esp)
086c6f48 +0x25a:  lea    -0x1c(%ebp),%eax
086c6f4b +0x25d:  mov    %eax,(%esp)
086c6f4e +0x260:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6f53 +0x265:  movl   $0x1,0x4(%esp)
086c6f5b +0x26d:  lea    -0x1c(%ebp),%eax
086c6f5e +0x270:  mov    %eax,(%esp)
086c6f61 +0x273:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c6f66 +0x278:  mov    0xc(%ebp),%eax
086c6f69 +0x27b:  mov    %eax,0x8(%esp)
086c6f6d +0x27f:  lea    -0x1c(%ebp),%eax
086c6f70 +0x282:  mov    %eax,0x4(%esp)
086c6f74 +0x286:  mov    0x8(%ebp),%eax
086c6f77 +0x289:  mov    %eax,(%esp)
086c6f7a +0x28c:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
086c6f7f +0x291:  jmp    086c6f9c <+0x2ae>
086c6f81 +0x293:  mov    %edx,%ebx
086c6f83 +0x295:  mov    %eax,%esi
086c6f85 +0x297:  lea    -0x1c(%ebp),%eax
086c6f88 +0x29a:  mov    %eax,(%esp)
086c6f8b +0x29d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c6f90 +0x2a2:  mov    %esi,%eax
086c6f92 +0x2a4:  mov    %ebx,%edx
086c6f94 +0x2a6:  mov    %eax,(%esp)
086c6f97 +0x2a9:  call   08ae3750 <_Unwind_Resume>
086c6f9c +0x2ae:  lea    -0x1c(%ebp),%eax
086c6f9f +0x2b1:  mov    %eax,(%esp)
086c6fa2 +0x2b4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c6fa7 +0x2b9:  add    $0x40,%esp
086c6faa +0x2bc:  pop    %ebx
086c6fab +0x2bd:  pop    %esi
086c6fac +0x2be:  pop    %ebp
086c6fad +0x2bf:  ret
```

## 反编译 C

```c
// GameWorld::goto_pvp @ 0x86c6cee

/* GameWorld::goto_pvp(CUser*) */

void __thiscall GameWorld::goto_pvp(GameWorld *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  PacketGuard local_20 [12];
  Village *local_14;
  Area *local_10;
  
  iVar2 = CUser::get_area(param_1,false);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  cVar1 = check_valid_area(this,(int)cVar1,iVar2);
  if (cVar1 == '\x01') {
    local_14 = (Village *)getUserVillage(this,param_1);
    if (local_14 != (Village *)0x0) {
      iVar2 = CUser::get_area(param_1,false);
      local_10 = (Area *)Village::getArea(local_14,iVar2);
      if (local_10 != (Area *)0x0) {
        Area::erase_user(local_10,param_1);
      }
    }
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 086c6dec to 086c6f7e has its CatchHandler @ 086c6f81 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x17);
    uVar4 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,uVar4 & 0xffff);
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)cVar1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0xfe);
    uVar4 = CUser::get_posX(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,uVar4 & 0xffff);
    uVar4 = CUser::get_posY(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,uVar4 & 0xffff);
    cVar1 = CUser::get_direction(param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)cVar1);
    cVar1 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)cVar1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send(param_1,local_20);
    CUser::set_state(param_1,6);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    uVar4 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,uVar4 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    send_all(this,local_20,param_1);
    PacketGuard::~PacketGuard(local_20);
  }
  else {
    uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"world.cpp","void GameWorld::goto_pvp(CUser*)",0x998,
               "user %s - check_valid_area() fail",uVar3);
  }
  return;
}
```
