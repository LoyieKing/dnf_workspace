# gotoBlueMarble

`_ZN9GameWorld14gotoBlueMarbleEP5CUser`

`GameWorld::gotoBlueMarble(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c7654` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c7654  _ZN9GameWorld14gotoBlueMarbleEP5CUser
#           GameWorld::gotoBlueMarble(CUser*)
# range [0x086c7654, 0x086c7913]
086c7654 +0x000:  push   %ebp
086c7655 +0x001:  mov    %esp,%ebp
086c7657 +0x003:  push   %esi
086c7658 +0x004:  push   %ebx
086c7659 +0x005:  sub    $0x40,%esp
086c765c +0x008:  movl   $0x0,0x4(%esp)
086c7664 +0x010:  mov    0xc(%ebp),%eax
086c7667 +0x013:  mov    %eax,(%esp)
086c766a +0x016:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c766f +0x01b:  mov    %eax,%ebx
086c7671 +0x01d:  mov    0xc(%ebp),%eax
086c7674 +0x020:  mov    %eax,(%esp)
086c7677 +0x023:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c767c +0x028:  movsbl %al,%eax
086c767f +0x02b:  mov    %ebx,0x8(%esp)
086c7683 +0x02f:  mov    %eax,0x4(%esp)
086c7687 +0x033:  mov    0x8(%ebp),%eax
086c768a +0x036:  mov    %eax,(%esp)
086c768d +0x039:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c7692 +0x03e:  xor    $0x1,%eax
086c7695 +0x041:  test   %al,%al
086c7697 +0x043:  je     086c76d9 <+0x85>
086c7699 +0x045:  mov    0xc(%ebp),%eax
086c769c +0x048:  mov    %eax,(%esp)
086c769f +0x04b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c76a4 +0x050:  mov    %eax,0x14(%esp)
086c76a8 +0x054:  movl   $"user %s - check_valid_area() fail",0x10(%esp)
086c76b0 +0x05c:  movl   $0xa54,0xc(%esp)
086c76b8 +0x064:  movl   $&_ZZN9GameWorld14gotoBlueMarbleEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c76c0 +0x06c:  movl   $"world.cpp",0x4(%esp)
086c76c8 +0x074:  movl   $0x1,(%esp)
086c76cf +0x07b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c76d4 +0x080:  jmp    086c790d <+0x2b9>
086c76d9 +0x085:  mov    0xc(%ebp),%eax
086c76dc +0x088:  mov    %eax,0x4(%esp)
086c76e0 +0x08c:  mov    0x8(%ebp),%eax
086c76e3 +0x08f:  mov    %eax,(%esp)
086c76e6 +0x092:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086c76eb +0x097:  mov    %eax,-0x10(%ebp)
086c76ee +0x09a:  cmpl   $0x0,-0x10(%ebp)
086c76f2 +0x09e:  je     086c7731 <+0xdd>
086c76f4 +0x0a0:  movl   $0x0,0x4(%esp)
086c76fc +0x0a8:  mov    0xc(%ebp),%eax
086c76ff +0x0ab:  mov    %eax,(%esp)
086c7702 +0x0ae:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c7707 +0x0b3:  mov    %eax,0x4(%esp)
086c770b +0x0b7:  mov    -0x10(%ebp),%eax
086c770e +0x0ba:  mov    %eax,(%esp)
086c7711 +0x0bd:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c7716 +0x0c2:  mov    %eax,-0xc(%ebp)
086c7719 +0x0c5:  cmpl   $0x0,-0xc(%ebp)
086c771d +0x0c9:  je     086c7731 <+0xdd>
086c771f +0x0cb:  mov    0xc(%ebp),%eax
086c7722 +0x0ce:  mov    %eax,0x4(%esp)
086c7726 +0x0d2:  mov    -0xc(%ebp),%eax
086c7729 +0x0d5:  mov    %eax,(%esp)
086c772c +0x0d8:  call   086c2be4 <_ZN4Area10erase_userEP5CUser>  ; Area::erase_user(CUser*)
086c7731 +0x0dd:  lea    -0x1c(%ebp),%eax
086c7734 +0x0e0:  mov    %eax,(%esp)
086c7737 +0x0e3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c773c +0x0e8:  movl   $0x17,0x8(%esp)
086c7744 +0x0f0:  movl   $0x0,0x4(%esp)
086c774c +0x0f8:  lea    -0x1c(%ebp),%eax
086c774f +0x0fb:  mov    %eax,(%esp)
086c7752 +0x0fe:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c7757 +0x103:  mov    0xc(%ebp),%eax
086c775a +0x106:  mov    %eax,(%esp)
086c775d +0x109:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c7762 +0x10e:  movzwl %ax,%eax
086c7765 +0x111:  mov    %eax,0x4(%esp)
086c7769 +0x115:  lea    -0x1c(%ebp),%eax
086c776c +0x118:  mov    %eax,(%esp)
086c776f +0x11b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c7774 +0x120:  mov    0xc(%ebp),%eax
086c7777 +0x123:  mov    %eax,(%esp)
086c777a +0x126:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c777f +0x12b:  movsbl %al,%eax
086c7782 +0x12e:  mov    %eax,0x4(%esp)
086c7786 +0x132:  lea    -0x1c(%ebp),%eax
086c7789 +0x135:  mov    %eax,(%esp)
086c778c +0x138:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7791 +0x13d:  movl   $0xfe,0x4(%esp)
086c7799 +0x145:  lea    -0x1c(%ebp),%eax
086c779c +0x148:  mov    %eax,(%esp)
086c779f +0x14b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c77a4 +0x150:  mov    0xc(%ebp),%eax
086c77a7 +0x153:  mov    %eax,(%esp)
086c77aa +0x156:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
086c77af +0x15b:  movzwl %ax,%eax
086c77b2 +0x15e:  mov    %eax,0x4(%esp)
086c77b6 +0x162:  lea    -0x1c(%ebp),%eax
086c77b9 +0x165:  mov    %eax,(%esp)
086c77bc +0x168:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c77c1 +0x16d:  mov    0xc(%ebp),%eax
086c77c4 +0x170:  mov    %eax,(%esp)
086c77c7 +0x173:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
086c77cc +0x178:  movzwl %ax,%eax
086c77cf +0x17b:  mov    %eax,0x4(%esp)
086c77d3 +0x17f:  lea    -0x1c(%ebp),%eax
086c77d6 +0x182:  mov    %eax,(%esp)
086c77d9 +0x185:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c77de +0x18a:  mov    0xc(%ebp),%eax
086c77e1 +0x18d:  mov    %eax,(%esp)
086c77e4 +0x190:  call   0813494c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x553>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x553
086c77e9 +0x195:  movsbl %al,%eax
086c77ec +0x198:  mov    %eax,0x4(%esp)
086c77f0 +0x19c:  lea    -0x1c(%ebp),%eax
086c77f3 +0x19f:  mov    %eax,(%esp)
086c77f6 +0x1a2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c77fb +0x1a7:  mov    0xc(%ebp),%eax
086c77fe +0x1aa:  mov    %eax,(%esp)
086c7801 +0x1ad:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
086c7806 +0x1b2:  movsbl %al,%eax
086c7809 +0x1b5:  mov    %eax,0x4(%esp)
086c780d +0x1b9:  lea    -0x1c(%ebp),%eax
086c7810 +0x1bc:  mov    %eax,(%esp)
086c7813 +0x1bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7818 +0x1c4:  movl   $0x1,0x4(%esp)
086c7820 +0x1cc:  lea    -0x1c(%ebp),%eax
086c7823 +0x1cf:  mov    %eax,(%esp)
086c7826 +0x1d2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c782b +0x1d7:  lea    -0x1c(%ebp),%eax
086c782e +0x1da:  mov    %eax,0x4(%esp)
086c7832 +0x1de:  mov    0xc(%ebp),%eax
086c7835 +0x1e1:  mov    %eax,(%esp)
086c7838 +0x1e4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c783d +0x1e9:  movl   $0xb,0x4(%esp)
086c7845 +0x1f1:  mov    0xc(%ebp),%eax
086c7848 +0x1f4:  mov    %eax,(%esp)
086c784b +0x1f7:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
086c7850 +0x1fc:  lea    -0x1c(%ebp),%eax
086c7853 +0x1ff:  mov    %eax,(%esp)
086c7856 +0x202:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086c785b +0x207:  movl   $0x3,0x8(%esp)
086c7863 +0x20f:  movl   $0x0,0x4(%esp)
086c786b +0x217:  lea    -0x1c(%ebp),%eax
086c786e +0x21a:  mov    %eax,(%esp)
086c7871 +0x21d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c7876 +0x222:  movl   $0x1,0x4(%esp)
086c787e +0x22a:  lea    -0x1c(%ebp),%eax
086c7881 +0x22d:  mov    %eax,(%esp)
086c7884 +0x230:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7889 +0x235:  mov    0xc(%ebp),%eax
086c788c +0x238:  mov    %eax,(%esp)
086c788f +0x23b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c7894 +0x240:  movzwl %ax,%eax
086c7897 +0x243:  mov    %eax,0x4(%esp)
086c789b +0x247:  lea    -0x1c(%ebp),%eax
086c789e +0x24a:  mov    %eax,(%esp)
086c78a1 +0x24d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c78a6 +0x252:  movl   $0x7,0x4(%esp)
086c78ae +0x25a:  lea    -0x1c(%ebp),%eax
086c78b1 +0x25d:  mov    %eax,(%esp)
086c78b4 +0x260:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c78b9 +0x265:  movl   $0x1,0x4(%esp)
086c78c1 +0x26d:  lea    -0x1c(%ebp),%eax
086c78c4 +0x270:  mov    %eax,(%esp)
086c78c7 +0x273:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c78cc +0x278:  mov    0xc(%ebp),%eax
086c78cf +0x27b:  mov    %eax,0x8(%esp)
086c78d3 +0x27f:  lea    -0x1c(%ebp),%eax
086c78d6 +0x282:  mov    %eax,0x4(%esp)
086c78da +0x286:  mov    0x8(%ebp),%eax
086c78dd +0x289:  mov    %eax,(%esp)
086c78e0 +0x28c:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
086c78e5 +0x291:  jmp    086c7902 <+0x2ae>
086c78e7 +0x293:  mov    %edx,%ebx
086c78e9 +0x295:  mov    %eax,%esi
086c78eb +0x297:  lea    -0x1c(%ebp),%eax
086c78ee +0x29a:  mov    %eax,(%esp)
086c78f1 +0x29d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c78f6 +0x2a2:  mov    %esi,%eax
086c78f8 +0x2a4:  mov    %ebx,%edx
086c78fa +0x2a6:  mov    %eax,(%esp)
086c78fd +0x2a9:  call   08ae3750 <_Unwind_Resume>
086c7902 +0x2ae:  lea    -0x1c(%ebp),%eax
086c7905 +0x2b1:  mov    %eax,(%esp)
086c7908 +0x2b4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c790d +0x2b9:  add    $0x40,%esp
086c7910 +0x2bc:  pop    %ebx
086c7911 +0x2bd:  pop    %esi
086c7912 +0x2be:  pop    %ebp
086c7913 +0x2bf:  ret
```

## 反编译 C

```c
// GameWorld::gotoBlueMarble @ 0x86c7654

/* GameWorld::gotoBlueMarble(CUser*) */

void __thiscall GameWorld::gotoBlueMarble(GameWorld *this,CUser *param_1)

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
                    /* try { // try from 086c7752 to 086c78e4 has its CatchHandler @ 086c78e7 */
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
    CUser::set_state(param_1,0xb);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    uVar4 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,uVar4 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,7);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    send_all(this,local_20,param_1);
    PacketGuard::~PacketGuard(local_20);
  }
  else {
    uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"world.cpp","void GameWorld::gotoBlueMarble(CUser*)",0xa54,
               "user %s - check_valid_area() fail",uVar3);
  }
  return;
}
```
