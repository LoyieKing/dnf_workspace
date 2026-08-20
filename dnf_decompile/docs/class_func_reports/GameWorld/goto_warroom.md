# goto_warroom

`_ZN9GameWorld12goto_warroomEP5CUser`

`GameWorld::goto_warroom(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c7192` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c7192  _ZN9GameWorld12goto_warroomEP5CUser
#           GameWorld::goto_warroom(CUser*)
# range [0x086c7192, 0x086c7451]
086c7192 +0x000:  push   %ebp
086c7193 +0x001:  mov    %esp,%ebp
086c7195 +0x003:  push   %esi
086c7196 +0x004:  push   %ebx
086c7197 +0x005:  sub    $0x40,%esp
086c719a +0x008:  movl   $0x0,0x4(%esp)
086c71a2 +0x010:  mov    0xc(%ebp),%eax
086c71a5 +0x013:  mov    %eax,(%esp)
086c71a8 +0x016:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c71ad +0x01b:  mov    %eax,%ebx
086c71af +0x01d:  mov    0xc(%ebp),%eax
086c71b2 +0x020:  mov    %eax,(%esp)
086c71b5 +0x023:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c71ba +0x028:  movsbl %al,%eax
086c71bd +0x02b:  mov    %ebx,0x8(%esp)
086c71c1 +0x02f:  mov    %eax,0x4(%esp)
086c71c5 +0x033:  mov    0x8(%ebp),%eax
086c71c8 +0x036:  mov    %eax,(%esp)
086c71cb +0x039:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c71d0 +0x03e:  xor    $0x1,%eax
086c71d3 +0x041:  test   %al,%al
086c71d5 +0x043:  je     086c7217 <+0x85>
086c71d7 +0x045:  mov    0xc(%ebp),%eax
086c71da +0x048:  mov    %eax,(%esp)
086c71dd +0x04b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c71e2 +0x050:  mov    %eax,0x14(%esp)
086c71e6 +0x054:  movl   $"user %s - check_valid_area() fail",0x10(%esp)
086c71ee +0x05c:  movl   $0x9f3,0xc(%esp)
086c71f6 +0x064:  movl   $&_ZZN9GameWorld12goto_warroomEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c71fe +0x06c:  movl   $"world.cpp",0x4(%esp)
086c7206 +0x074:  movl   $0x1,(%esp)
086c720d +0x07b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c7212 +0x080:  jmp    086c744b <+0x2b9>
086c7217 +0x085:  mov    0xc(%ebp),%eax
086c721a +0x088:  mov    %eax,0x4(%esp)
086c721e +0x08c:  mov    0x8(%ebp),%eax
086c7221 +0x08f:  mov    %eax,(%esp)
086c7224 +0x092:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086c7229 +0x097:  mov    %eax,-0x10(%ebp)
086c722c +0x09a:  cmpl   $0x0,-0x10(%ebp)
086c7230 +0x09e:  je     086c726f <+0xdd>
086c7232 +0x0a0:  movl   $0x0,0x4(%esp)
086c723a +0x0a8:  mov    0xc(%ebp),%eax
086c723d +0x0ab:  mov    %eax,(%esp)
086c7240 +0x0ae:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c7245 +0x0b3:  mov    %eax,0x4(%esp)
086c7249 +0x0b7:  mov    -0x10(%ebp),%eax
086c724c +0x0ba:  mov    %eax,(%esp)
086c724f +0x0bd:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c7254 +0x0c2:  mov    %eax,-0xc(%ebp)
086c7257 +0x0c5:  cmpl   $0x0,-0xc(%ebp)
086c725b +0x0c9:  je     086c726f <+0xdd>
086c725d +0x0cb:  mov    0xc(%ebp),%eax
086c7260 +0x0ce:  mov    %eax,0x4(%esp)
086c7264 +0x0d2:  mov    -0xc(%ebp),%eax
086c7267 +0x0d5:  mov    %eax,(%esp)
086c726a +0x0d8:  call   086c2be4 <_ZN4Area10erase_userEP5CUser>  ; Area::erase_user(CUser*)
086c726f +0x0dd:  lea    -0x1c(%ebp),%eax
086c7272 +0x0e0:  mov    %eax,(%esp)
086c7275 +0x0e3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c727a +0x0e8:  movl   $0x17,0x8(%esp)
086c7282 +0x0f0:  movl   $0x0,0x4(%esp)
086c728a +0x0f8:  lea    -0x1c(%ebp),%eax
086c728d +0x0fb:  mov    %eax,(%esp)
086c7290 +0x0fe:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c7295 +0x103:  mov    0xc(%ebp),%eax
086c7298 +0x106:  mov    %eax,(%esp)
086c729b +0x109:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c72a0 +0x10e:  movzwl %ax,%eax
086c72a3 +0x111:  mov    %eax,0x4(%esp)
086c72a7 +0x115:  lea    -0x1c(%ebp),%eax
086c72aa +0x118:  mov    %eax,(%esp)
086c72ad +0x11b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c72b2 +0x120:  mov    0xc(%ebp),%eax
086c72b5 +0x123:  mov    %eax,(%esp)
086c72b8 +0x126:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c72bd +0x12b:  movsbl %al,%eax
086c72c0 +0x12e:  mov    %eax,0x4(%esp)
086c72c4 +0x132:  lea    -0x1c(%ebp),%eax
086c72c7 +0x135:  mov    %eax,(%esp)
086c72ca +0x138:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c72cf +0x13d:  movl   $0xfe,0x4(%esp)
086c72d7 +0x145:  lea    -0x1c(%ebp),%eax
086c72da +0x148:  mov    %eax,(%esp)
086c72dd +0x14b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c72e2 +0x150:  mov    0xc(%ebp),%eax
086c72e5 +0x153:  mov    %eax,(%esp)
086c72e8 +0x156:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
086c72ed +0x15b:  movzwl %ax,%eax
086c72f0 +0x15e:  mov    %eax,0x4(%esp)
086c72f4 +0x162:  lea    -0x1c(%ebp),%eax
086c72f7 +0x165:  mov    %eax,(%esp)
086c72fa +0x168:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c72ff +0x16d:  mov    0xc(%ebp),%eax
086c7302 +0x170:  mov    %eax,(%esp)
086c7305 +0x173:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
086c730a +0x178:  movzwl %ax,%eax
086c730d +0x17b:  mov    %eax,0x4(%esp)
086c7311 +0x17f:  lea    -0x1c(%ebp),%eax
086c7314 +0x182:  mov    %eax,(%esp)
086c7317 +0x185:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c731c +0x18a:  mov    0xc(%ebp),%eax
086c731f +0x18d:  mov    %eax,(%esp)
086c7322 +0x190:  call   0813494c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x553>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x553
086c7327 +0x195:  movsbl %al,%eax
086c732a +0x198:  mov    %eax,0x4(%esp)
086c732e +0x19c:  lea    -0x1c(%ebp),%eax
086c7331 +0x19f:  mov    %eax,(%esp)
086c7334 +0x1a2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7339 +0x1a7:  mov    0xc(%ebp),%eax
086c733c +0x1aa:  mov    %eax,(%esp)
086c733f +0x1ad:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
086c7344 +0x1b2:  movsbl %al,%eax
086c7347 +0x1b5:  mov    %eax,0x4(%esp)
086c734b +0x1b9:  lea    -0x1c(%ebp),%eax
086c734e +0x1bc:  mov    %eax,(%esp)
086c7351 +0x1bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7356 +0x1c4:  movl   $0x1,0x4(%esp)
086c735e +0x1cc:  lea    -0x1c(%ebp),%eax
086c7361 +0x1cf:  mov    %eax,(%esp)
086c7364 +0x1d2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c7369 +0x1d7:  lea    -0x1c(%ebp),%eax
086c736c +0x1da:  mov    %eax,0x4(%esp)
086c7370 +0x1de:  mov    0xc(%ebp),%eax
086c7373 +0x1e1:  mov    %eax,(%esp)
086c7376 +0x1e4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c737b +0x1e9:  movl   $0x8,0x4(%esp)
086c7383 +0x1f1:  mov    0xc(%ebp),%eax
086c7386 +0x1f4:  mov    %eax,(%esp)
086c7389 +0x1f7:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
086c738e +0x1fc:  lea    -0x1c(%ebp),%eax
086c7391 +0x1ff:  mov    %eax,(%esp)
086c7394 +0x202:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086c7399 +0x207:  movl   $0x3,0x8(%esp)
086c73a1 +0x20f:  movl   $0x0,0x4(%esp)
086c73a9 +0x217:  lea    -0x1c(%ebp),%eax
086c73ac +0x21a:  mov    %eax,(%esp)
086c73af +0x21d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c73b4 +0x222:  movl   $0x1,0x4(%esp)
086c73bc +0x22a:  lea    -0x1c(%ebp),%eax
086c73bf +0x22d:  mov    %eax,(%esp)
086c73c2 +0x230:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c73c7 +0x235:  mov    0xc(%ebp),%eax
086c73ca +0x238:  mov    %eax,(%esp)
086c73cd +0x23b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c73d2 +0x240:  movzwl %ax,%eax
086c73d5 +0x243:  mov    %eax,0x4(%esp)
086c73d9 +0x247:  lea    -0x1c(%ebp),%eax
086c73dc +0x24a:  mov    %eax,(%esp)
086c73df +0x24d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c73e4 +0x252:  movl   $0x3,0x4(%esp)
086c73ec +0x25a:  lea    -0x1c(%ebp),%eax
086c73ef +0x25d:  mov    %eax,(%esp)
086c73f2 +0x260:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c73f7 +0x265:  movl   $0x1,0x4(%esp)
086c73ff +0x26d:  lea    -0x1c(%ebp),%eax
086c7402 +0x270:  mov    %eax,(%esp)
086c7405 +0x273:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c740a +0x278:  mov    0xc(%ebp),%eax
086c740d +0x27b:  mov    %eax,0x8(%esp)
086c7411 +0x27f:  lea    -0x1c(%ebp),%eax
086c7414 +0x282:  mov    %eax,0x4(%esp)
086c7418 +0x286:  mov    0x8(%ebp),%eax
086c741b +0x289:  mov    %eax,(%esp)
086c741e +0x28c:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
086c7423 +0x291:  jmp    086c7440 <+0x2ae>
086c7425 +0x293:  mov    %edx,%ebx
086c7427 +0x295:  mov    %eax,%esi
086c7429 +0x297:  lea    -0x1c(%ebp),%eax
086c742c +0x29a:  mov    %eax,(%esp)
086c742f +0x29d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c7434 +0x2a2:  mov    %esi,%eax
086c7436 +0x2a4:  mov    %ebx,%edx
086c7438 +0x2a6:  mov    %eax,(%esp)
086c743b +0x2a9:  call   08ae3750 <_Unwind_Resume>
086c7440 +0x2ae:  lea    -0x1c(%ebp),%eax
086c7443 +0x2b1:  mov    %eax,(%esp)
086c7446 +0x2b4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c744b +0x2b9:  add    $0x40,%esp
086c744e +0x2bc:  pop    %ebx
086c744f +0x2bd:  pop    %esi
086c7450 +0x2be:  pop    %ebp
086c7451 +0x2bf:  ret
```

## 反编译 C

```c
// GameWorld::goto_warroom @ 0x86c7192

/* GameWorld::goto_warroom(CUser*) */

void __thiscall GameWorld::goto_warroom(GameWorld *this,CUser *param_1)

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
                    /* try { // try from 086c7290 to 086c7422 has its CatchHandler @ 086c7425 */
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
    CUser::set_state(param_1,8);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    uVar4 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,uVar4 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    send_all(this,local_20,param_1);
    PacketGuard::~PacketGuard(local_20);
  }
  else {
    uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"world.cpp","void GameWorld::goto_warroom(CUser*)",0x9f3,
               "user %s - check_valid_area() fail",uVar3);
  }
  return;
}
```
