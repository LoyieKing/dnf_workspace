# out_from_dungeon

`_ZN9GameWorld16out_from_dungeonEP5CUser`

`GameWorld::out_from_dungeon(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c6a16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c6a16  _ZN9GameWorld16out_from_dungeonEP5CUser
#           GameWorld::out_from_dungeon(CUser*)
# range [0x086c6a16, 0x086c6ced]
086c6a16 +0x000:  push   %ebp
086c6a17 +0x001:  mov    %esp,%ebp
086c6a19 +0x003:  push   %esi
086c6a1a +0x004:  push   %ebx
086c6a1b +0x005:  sub    $0x40,%esp
086c6a1e +0x008:  movl   $0x0,0x4(%esp)
086c6a26 +0x010:  mov    0xc(%ebp),%eax
086c6a29 +0x013:  mov    %eax,(%esp)
086c6a2c +0x016:  call   0814aa7a <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x819>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x819
086c6a31 +0x01b:  movl   $0x0,0x4(%esp)
086c6a39 +0x023:  mov    0xc(%ebp),%eax
086c6a3c +0x026:  mov    %eax,(%esp)
086c6a3f +0x029:  call   0814aa9a <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x839>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x839
086c6a44 +0x02e:  mov    0xc(%ebp),%eax
086c6a47 +0x031:  mov    %eax,(%esp)
086c6a4a +0x034:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
086c6a4f +0x039:  cmp    $0x1,%eax
086c6a52 +0x03c:  setne  %al
086c6a55 +0x03f:  test   %al,%al
086c6a57 +0x041:  je     086c6c12 <+0x1fc>
086c6a5d +0x047:  movl   $0x0,0x4(%esp)
086c6a65 +0x04f:  mov    0xc(%ebp),%eax
086c6a68 +0x052:  mov    %eax,(%esp)
086c6a6b +0x055:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c6a70 +0x05a:  mov    %eax,%ebx
086c6a72 +0x05c:  mov    0xc(%ebp),%eax
086c6a75 +0x05f:  mov    %eax,(%esp)
086c6a78 +0x062:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c6a7d +0x067:  movsbl %al,%eax
086c6a80 +0x06a:  mov    %ebx,0x8(%esp)
086c6a84 +0x06e:  mov    %eax,0x4(%esp)
086c6a88 +0x072:  mov    0x8(%ebp),%eax
086c6a8b +0x075:  mov    %eax,(%esp)
086c6a8e +0x078:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c6a93 +0x07d:  xor    $0x1,%eax
086c6a96 +0x080:  test   %al,%al
086c6a98 +0x082:  je     086c6ada <+0xc4>
086c6a9a +0x084:  mov    0xc(%ebp),%eax
086c6a9d +0x087:  mov    %eax,(%esp)
086c6aa0 +0x08a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c6aa5 +0x08f:  mov    %eax,0x14(%esp)
086c6aa9 +0x093:  movl   $"user %s - check_valid_area() fail",0x10(%esp)
086c6ab1 +0x09b:  movl   $0x926,0xc(%esp)
086c6ab9 +0x0a3:  movl   $&_ZZN9GameWorld16out_from_dungeonEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c6ac1 +0x0ab:  movl   $"world.cpp",0x4(%esp)
086c6ac9 +0x0b3:  movl   $0x1,(%esp)
086c6ad0 +0x0ba:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c6ad5 +0x0bf:  jmp    086c6ce6 <+0x2d0>
086c6ada +0x0c4:  mov    0xc(%ebp),%eax
086c6add +0x0c7:  mov    %eax,0x4(%esp)
086c6ae1 +0x0cb:  mov    0x8(%ebp),%eax
086c6ae4 +0x0ce:  mov    %eax,(%esp)
086c6ae7 +0x0d1:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086c6aec +0x0d6:  mov    %eax,-0x10(%ebp)
086c6aef +0x0d9:  cmpl   $0x0,-0x10(%ebp)
086c6af3 +0x0dd:  je     086c6b32 <+0x11c>
086c6af5 +0x0df:  movl   $0x0,0x4(%esp)
086c6afd +0x0e7:  mov    0xc(%ebp),%eax
086c6b00 +0x0ea:  mov    %eax,(%esp)
086c6b03 +0x0ed:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c6b08 +0x0f2:  mov    %eax,0x4(%esp)
086c6b0c +0x0f6:  mov    -0x10(%ebp),%eax
086c6b0f +0x0f9:  mov    %eax,(%esp)
086c6b12 +0x0fc:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c6b17 +0x101:  mov    %eax,-0xc(%ebp)
086c6b1a +0x104:  cmpl   $0x0,-0xc(%ebp)
086c6b1e +0x108:  je     086c6b32 <+0x11c>
086c6b20 +0x10a:  mov    0xc(%ebp),%eax
086c6b23 +0x10d:  mov    %eax,0x4(%esp)
086c6b27 +0x111:  mov    -0xc(%ebp),%eax
086c6b2a +0x114:  mov    %eax,(%esp)
086c6b2d +0x117:  call   086c25a6 <_ZN4Area11insert_userEP5CUser>  ; Area::insert_user(CUser*)
086c6b32 +0x11c:  lea    -0x1c(%ebp),%eax
086c6b35 +0x11f:  mov    %eax,(%esp)
086c6b38 +0x122:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c6b3d +0x127:  movl   $0x3,0x8(%esp)
086c6b45 +0x12f:  movl   $0x0,0x4(%esp)
086c6b4d +0x137:  lea    -0x1c(%ebp),%eax
086c6b50 +0x13a:  mov    %eax,(%esp)
086c6b53 +0x13d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c6b58 +0x142:  movl   $0x1,0x4(%esp)
086c6b60 +0x14a:  lea    -0x1c(%ebp),%eax
086c6b63 +0x14d:  mov    %eax,(%esp)
086c6b66 +0x150:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6b6b +0x155:  mov    0xc(%ebp),%eax
086c6b6e +0x158:  mov    %eax,(%esp)
086c6b71 +0x15b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c6b76 +0x160:  movzwl %ax,%eax
086c6b79 +0x163:  mov    %eax,0x4(%esp)
086c6b7d +0x167:  lea    -0x1c(%ebp),%eax
086c6b80 +0x16a:  mov    %eax,(%esp)
086c6b83 +0x16d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c6b88 +0x172:  movl   $0x0,0x4(%esp)
086c6b90 +0x17a:  lea    -0x1c(%ebp),%eax
086c6b93 +0x17d:  mov    %eax,(%esp)
086c6b96 +0x180:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6b9b +0x185:  movl   $0x1,0x4(%esp)
086c6ba3 +0x18d:  lea    -0x1c(%ebp),%eax
086c6ba6 +0x190:  mov    %eax,(%esp)
086c6ba9 +0x193:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c6bae +0x198:  mov    0xc(%ebp),%eax
086c6bb1 +0x19b:  mov    %eax,0x8(%esp)
086c6bb5 +0x19f:  lea    -0x1c(%ebp),%eax
086c6bb8 +0x1a2:  mov    %eax,0x4(%esp)
086c6bbc +0x1a6:  mov    0x8(%ebp),%eax
086c6bbf +0x1a9:  mov    %eax,(%esp)
086c6bc2 +0x1ac:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
086c6bc7 +0x1b1:  mov    0xc(%ebp),%eax
086c6bca +0x1b4:  mov    %eax,(%esp)
086c6bcd +0x1b7:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
086c6bd2 +0x1bc:  mov    0xc(%ebp),%eax
086c6bd5 +0x1bf:  mov    %eax,(%esp)
086c6bd8 +0x1c2:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
086c6bdd +0x1c7:  mov    %eax,(%esp)
086c6be0 +0x1ca:  call   084b9386 <_ZN8XNuclear6CHades20Send_ReturnToVillageEv>  ; XNuclear::CHades::Send_ReturnToVillage()
086c6be5 +0x1cf:  jmp    086c6c02 <+0x1ec>
086c6be7 +0x1d1:  mov    %edx,%ebx
086c6be9 +0x1d3:  mov    %eax,%esi
086c6beb +0x1d5:  lea    -0x1c(%ebp),%eax
086c6bee +0x1d8:  mov    %eax,(%esp)
086c6bf1 +0x1db:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c6bf6 +0x1e0:  mov    %esi,%eax
086c6bf8 +0x1e2:  mov    %ebx,%edx
086c6bfa +0x1e4:  mov    %eax,(%esp)
086c6bfd +0x1e7:  call   08ae3750 <_Unwind_Resume>
086c6c02 +0x1ec:  lea    -0x1c(%ebp),%eax
086c6c05 +0x1ef:  mov    %eax,(%esp)
086c6c08 +0x1f2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c6c0d +0x1f7:  jmp    086c6ce6 <+0x2d0>
086c6c12 +0x1fc:  mov    0xc(%ebp),%eax
086c6c15 +0x1ff:  mov    %eax,(%esp)
086c6c18 +0x202:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
086c6c1d +0x207:  movl   $0xb,0x4(%esp)
086c6c25 +0x20f:  mov    0xc(%ebp),%eax
086c6c28 +0x212:  mov    %eax,(%esp)
086c6c2b +0x215:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
086c6c30 +0x21a:  lea    -0x28(%ebp),%eax
086c6c33 +0x21d:  mov    %eax,(%esp)
086c6c36 +0x220:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c6c3b +0x225:  movl   $0x3,0x8(%esp)
086c6c43 +0x22d:  movl   $0x0,0x4(%esp)
086c6c4b +0x235:  lea    -0x28(%ebp),%eax
086c6c4e +0x238:  mov    %eax,(%esp)
086c6c51 +0x23b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c6c56 +0x240:  movl   $0x1,0x4(%esp)
086c6c5e +0x248:  lea    -0x28(%ebp),%eax
086c6c61 +0x24b:  mov    %eax,(%esp)
086c6c64 +0x24e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6c69 +0x253:  mov    0xc(%ebp),%eax
086c6c6c +0x256:  mov    %eax,(%esp)
086c6c6f +0x259:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c6c74 +0x25e:  movzwl %ax,%eax
086c6c77 +0x261:  mov    %eax,0x4(%esp)
086c6c7b +0x265:  lea    -0x28(%ebp),%eax
086c6c7e +0x268:  mov    %eax,(%esp)
086c6c81 +0x26b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c6c86 +0x270:  movl   $0x7,0x4(%esp)
086c6c8e +0x278:  lea    -0x28(%ebp),%eax
086c6c91 +0x27b:  mov    %eax,(%esp)
086c6c94 +0x27e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c6c99 +0x283:  movl   $0x1,0x4(%esp)
086c6ca1 +0x28b:  lea    -0x28(%ebp),%eax
086c6ca4 +0x28e:  mov    %eax,(%esp)
086c6ca7 +0x291:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c6cac +0x296:  lea    -0x28(%ebp),%eax
086c6caf +0x299:  mov    %eax,0x4(%esp)
086c6cb3 +0x29d:  mov    0xc(%ebp),%eax
086c6cb6 +0x2a0:  mov    %eax,(%esp)
086c6cb9 +0x2a3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c6cbe +0x2a8:  jmp    086c6cdb <+0x2c5>
086c6cc0 +0x2aa:  mov    %edx,%ebx
086c6cc2 +0x2ac:  mov    %eax,%esi
086c6cc4 +0x2ae:  lea    -0x28(%ebp),%eax
086c6cc7 +0x2b1:  mov    %eax,(%esp)
086c6cca +0x2b4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c6ccf +0x2b9:  mov    %esi,%eax
086c6cd1 +0x2bb:  mov    %ebx,%edx
086c6cd3 +0x2bd:  mov    %eax,(%esp)
086c6cd6 +0x2c0:  call   08ae3750 <_Unwind_Resume>
086c6cdb +0x2c5:  lea    -0x28(%ebp),%eax
086c6cde +0x2c8:  mov    %eax,(%esp)
086c6ce1 +0x2cb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c6ce6 +0x2d0:  add    $0x40,%esp
086c6ce9 +0x2d3:  pop    %ebx
086c6cea +0x2d4:  pop    %esi
086c6ceb +0x2d5:  pop    %ebp
086c6cec +0x2d6:  ret
086c6ced +0x2d7:  nop
```

## 反编译 C

```c
// GameWorld::out_from_dungeon @ 0x86c6a16

/* GameWorld::out_from_dungeon(CUser*) */

void __thiscall GameWorld::out_from_dungeon(GameWorld *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  PacketGuard local_2c [12];
  PacketGuard local_20 [12];
  Village *local_14;
  Area *local_10;
  
  CUser::SetRevivalTime(param_1,0);
  CUser::SetUseAPCPotionTime(param_1,0);
  iVar2 = CUser::getMoveSpace(param_1);
  if (iVar2 == 1) {
    CUser::SendFatigue(param_1);
    CUser::set_state(param_1,0xb);
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 086c6c51 to 086c6cbd has its CatchHandler @ 086c6cc0 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
    uVar4 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,uVar4 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,7);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CUser::Send(param_1,local_2c);
    PacketGuard::~PacketGuard(local_2c);
  }
  else {
    iVar2 = CUser::get_area(param_1,false);
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    cVar1 = check_valid_area(this,(int)cVar1,iVar2);
    if (cVar1 == '\x01') {
      local_14 = (Village *)getUserVillage(this,param_1);
      if (local_14 != (Village *)0x0) {
        iVar2 = CUser::get_area(param_1,false);
        local_10 = (Area *)Village::getArea(local_14,iVar2);
        if (local_10 != (Area *)0x0) {
          Area::insert_user(local_10,param_1);
        }
      }
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 086c6b53 to 086c6be4 has its CatchHandler @ 086c6be7 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      uVar4 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,uVar4 & 0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      send_all(this,local_20,param_1);
      CUser::SendFatigue(param_1);
      CUser::getHades(param_1);
      XNuclear::CHades::Send_ReturnToVillage();
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      LogManager::logFormat
                (1,"world.cpp","void GameWorld::out_from_dungeon(CUser*)",0x926,
                 "user %s - check_valid_area() fail",uVar3);
    }
  }
  return;
}
```
