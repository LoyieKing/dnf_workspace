# goto_dungeon

`_ZN9GameWorld12goto_dungeonEP5CUser`

`GameWorld::goto_dungeon(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c67a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c67a0  _ZN9GameWorld12goto_dungeonEP5CUser
#           GameWorld::goto_dungeon(CUser*)
# range [0x086c67a0, 0x086c6a15]
086c67a0 +0x000:  push   %ebp
086c67a1 +0x001:  mov    %esp,%ebp
086c67a3 +0x003:  push   %esi
086c67a4 +0x004:  push   %ebx
086c67a5 +0x005:  sub    $0x50,%esp
086c67a8 +0x008:  cmpl   $0x0,0xc(%ebp)
086c67ac +0x00c:  je     086c6a0d <+0x26d>
086c67b2 +0x012:  mov    0xc(%ebp),%eax
086c67b5 +0x015:  mov    %eax,(%esp)
086c67b8 +0x018:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
086c67bd +0x01d:  cmp    $0x1,%eax
086c67c0 +0x020:  setne  %al
086c67c3 +0x023:  test   %al,%al
086c67c5 +0x025:  je     086c69f8 <+0x258>
086c67cb +0x02b:  mov    0xc(%ebp),%eax
086c67ce +0x02e:  mov    %eax,0x4(%esp)
086c67d2 +0x032:  mov    0x8(%ebp),%eax
086c67d5 +0x035:  mov    %eax,(%esp)
086c67d8 +0x038:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086c67dd +0x03d:  mov    %eax,-0x10(%ebp)
086c67e0 +0x040:  cmpl   $0x0,-0x10(%ebp)
086c67e4 +0x044:  jne    086c6833 <+0x93>
086c67e6 +0x046:  mov    0xc(%ebp),%eax
086c67e9 +0x049:  mov    %eax,(%esp)
086c67ec +0x04c:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c67f1 +0x051:  movsbl %al,%ebx
086c67f4 +0x054:  movl   $0x5,0xc(%esp)
086c67fc +0x05c:  movl   $0x8d1,0x8(%esp)
086c6804 +0x064:  movl   $&_ZZN9GameWorld12goto_dungeonEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
086c680c +0x06c:  lea    -0x30(%ebp),%eax
086c680f +0x06f:  mov    %eax,(%esp)
086c6812 +0x072:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c6817 +0x077:  mov    %ebx,0x8(%esp)
086c681b +0x07b:  movl   $"%d",0x4(%esp)
086c6823 +0x083:  lea    -0x30(%ebp),%eax
086c6826 +0x086:  mov    %eax,(%esp)
086c6829 +0x089:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c682e +0x08e:  jmp    086c6a0e <+0x26e>
086c6833 +0x093:  movl   $0x0,0x4(%esp)
086c683b +0x09b:  mov    0xc(%ebp),%eax
086c683e +0x09e:  mov    %eax,(%esp)
086c6841 +0x0a1:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c6846 +0x0a6:  mov    %eax,0x4(%esp)
086c684a +0x0aa:  mov    -0x10(%ebp),%eax
086c684d +0x0ad:  mov    %eax,(%esp)
086c6850 +0x0b0:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c6855 +0x0b5:  mov    %eax,-0xc(%ebp)
086c6858 +0x0b8:  cmpl   $0x0,-0xc(%ebp)
086c685c +0x0bc:  jne    086c68b2 <+0x112>
086c685e +0x0be:  movl   $0x0,0x4(%esp)
086c6866 +0x0c6:  mov    0xc(%ebp),%eax
086c6869 +0x0c9:  mov    %eax,(%esp)
086c686c +0x0cc:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c6871 +0x0d1:  mov    %eax,%ebx
086c6873 +0x0d3:  movl   $0x5,0xc(%esp)
086c687b +0x0db:  movl   $0x8d8,0x8(%esp)
086c6883 +0x0e3:  movl   $&_ZZN9GameWorld12goto_dungeonEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
086c688b +0x0eb:  lea    -0x20(%ebp),%eax
086c688e +0x0ee:  mov    %eax,(%esp)
086c6891 +0x0f1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c6896 +0x0f6:  mov    %ebx,0x8(%esp)
086c689a +0x0fa:  movl   $"%d",0x4(%esp)
086c68a2 +0x102:  lea    -0x20(%ebp),%eax
086c68a5 +0x105:  mov    %eax,(%esp)
086c68a8 +0x108:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c68ad +0x10d:  jmp    086c6a0e <+0x26e>
086c68b2 +0x112:  mov    0xc(%ebp),%eax
086c68b5 +0x115:  mov    %eax,0x4(%esp)
086c68b9 +0x119:  mov    -0xc(%ebp),%eax
086c68bc +0x11c:  mov    %eax,(%esp)
086c68bf +0x11f:  call   086c2be4 <_ZN4Area10erase_userEP5CUser>  ; Area::erase_user(CUser*)
086c68c4 +0x124:  lea    -0x3c(%ebp),%eax
086c68c7 +0x127:  mov    %eax,(%esp)
086c68ca +0x12a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c68cf +0x12f:  movl   $0x17,0x8(%esp)
086c68d7 +0x137:  movl   $0x0,0x4(%esp)
086c68df +0x13f:  lea    -0x3c(%ebp),%eax
086c68e2 +0x142:  mov    %eax,(%esp)
086c68e5 +0x145:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c68ea +0x14a:  mov    0xc(%ebp),%eax
086c68ed +0x14d:  mov    %eax,(%esp)
086c68f0 +0x150:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c68f5 +0x155:  movzwl %ax,%eax
086c68f8 +0x158:  mov    %eax,0x4(%esp)
086c68fc +0x15c:  lea    -0x3c(%ebp),%eax
086c68ff +0x15f:  mov    %eax,(%esp)
086c6902 +0x162:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c6907 +0x167:  mov    0xc(%ebp),%eax
086c690a +0x16a:  mov    %eax,(%esp)
086c690d +0x16d:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c6912 +0x172:  movsbl %al,%eax
086c6915 +0x175:  mov    %eax,0x4(%esp)
086c6919 +0x179:  lea    -0x3c(%ebp),%eax
086c691c +0x17c:  mov    %eax,(%esp)
086c691f +0x17f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6924 +0x184:  movl   $0xff,0x4(%esp)
086c692c +0x18c:  lea    -0x3c(%ebp),%eax
086c692f +0x18f:  mov    %eax,(%esp)
086c6932 +0x192:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6937 +0x197:  mov    0xc(%ebp),%eax
086c693a +0x19a:  mov    %eax,(%esp)
086c693d +0x19d:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
086c6942 +0x1a2:  movzwl %ax,%eax
086c6945 +0x1a5:  mov    %eax,0x4(%esp)
086c6949 +0x1a9:  lea    -0x3c(%ebp),%eax
086c694c +0x1ac:  mov    %eax,(%esp)
086c694f +0x1af:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c6954 +0x1b4:  mov    0xc(%ebp),%eax
086c6957 +0x1b7:  mov    %eax,(%esp)
086c695a +0x1ba:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
086c695f +0x1bf:  movzwl %ax,%eax
086c6962 +0x1c2:  mov    %eax,0x4(%esp)
086c6966 +0x1c6:  lea    -0x3c(%ebp),%eax
086c6969 +0x1c9:  mov    %eax,(%esp)
086c696c +0x1cc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c6971 +0x1d1:  mov    0xc(%ebp),%eax
086c6974 +0x1d4:  mov    %eax,(%esp)
086c6977 +0x1d7:  call   0813494c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x553>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x553
086c697c +0x1dc:  movsbl %al,%eax
086c697f +0x1df:  mov    %eax,0x4(%esp)
086c6983 +0x1e3:  lea    -0x3c(%ebp),%eax
086c6986 +0x1e6:  mov    %eax,(%esp)
086c6989 +0x1e9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c698e +0x1ee:  mov    0xc(%ebp),%eax
086c6991 +0x1f1:  mov    %eax,(%esp)
086c6994 +0x1f4:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
086c6999 +0x1f9:  movsbl %al,%eax
086c699c +0x1fc:  mov    %eax,0x4(%esp)
086c69a0 +0x200:  lea    -0x3c(%ebp),%eax
086c69a3 +0x203:  mov    %eax,(%esp)
086c69a6 +0x206:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c69ab +0x20b:  movl   $0x1,0x4(%esp)
086c69b3 +0x213:  lea    -0x3c(%ebp),%eax
086c69b6 +0x216:  mov    %eax,(%esp)
086c69b9 +0x219:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c69be +0x21e:  lea    -0x3c(%ebp),%eax
086c69c1 +0x221:  mov    %eax,0x4(%esp)
086c69c5 +0x225:  mov    0xc(%ebp),%eax
086c69c8 +0x228:  mov    %eax,(%esp)
086c69cb +0x22b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c69d0 +0x230:  jmp    086c69ed <+0x24d>
086c69d2 +0x232:  mov    %edx,%ebx
086c69d4 +0x234:  mov    %eax,%esi
086c69d6 +0x236:  lea    -0x3c(%ebp),%eax
086c69d9 +0x239:  mov    %eax,(%esp)
086c69dc +0x23c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c69e1 +0x241:  mov    %esi,%eax
086c69e3 +0x243:  mov    %ebx,%edx
086c69e5 +0x245:  mov    %eax,(%esp)
086c69e8 +0x248:  call   08ae3750 <_Unwind_Resume>
086c69ed +0x24d:  lea    -0x3c(%ebp),%eax
086c69f0 +0x250:  mov    %eax,(%esp)
086c69f3 +0x253:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c69f8 +0x258:  movl   $0x5,0x4(%esp)
086c6a00 +0x260:  mov    0xc(%ebp),%eax
086c6a03 +0x263:  mov    %eax,(%esp)
086c6a06 +0x266:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
086c6a0b +0x26b:  jmp    086c6a0e <+0x26e>
086c6a0d +0x26d:  nop
086c6a0e +0x26e:  add    $0x50,%esp
086c6a11 +0x271:  pop    %ebx
086c6a12 +0x272:  pop    %esi
086c6a13 +0x273:  pop    %ebp
086c6a14 +0x274:  ret
086c6a15 +0x275:  nop
```

## 反编译 C

```c
// GameWorld::goto_dungeon @ 0x86c67a0

/* GameWorld::goto_dungeon(CUser*) */

void __thiscall GameWorld::goto_dungeon(GameWorld *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  PacketGuard local_40 [12];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  Village *local_14;
  Area *local_10;
  
  if (param_1 == (CUser *)0x0) {
    return;
  }
  iVar2 = CUser::getMoveSpace(param_1);
  if (iVar2 != 1) {
    local_14 = (Village *)getUserVillage(this,param_1);
    if (local_14 == (Village *)0x0) {
      cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_34,"void GameWorld::goto_dungeon(CUser*)",0x8d1,5);
      cMyTrace::operator()(local_34,"%d",(int)cVar1);
      return;
    }
    iVar2 = CUser::get_area(param_1,false);
    local_10 = (Area *)Village::getArea(local_14,iVar2);
    if (local_10 == (Area *)0x0) {
      uVar3 = CUser::get_area(param_1,false);
      cMyTrace::cMyTrace(local_24,"void GameWorld::goto_dungeon(CUser*)",0x8d8,5);
      cMyTrace::operator()(local_24,"%d",uVar3);
      return;
    }
    Area::erase_user(local_10,param_1);
    PacketGuard::PacketGuard(local_40);
                    /* try { // try from 086c68e5 to 086c69cf has its CatchHandler @ 086c69d2 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0x17);
    uVar4 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,uVar4 & 0xffff);
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)cVar1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0xff);
    uVar4 = CUser::get_posX(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,uVar4 & 0xffff);
    uVar4 = CUser::get_posY(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,uVar4 & 0xffff);
    cVar1 = CUser::get_direction(param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)cVar1);
    cVar1 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)cVar1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
    CUser::Send(param_1,local_40);
    PacketGuard::~PacketGuard(local_40);
  }
  CUser::set_state(param_1,5);
  return;
}
```
