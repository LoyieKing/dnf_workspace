# WalkOut

`_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE`

`PvP_Room::WalkOut(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dd4a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dd4a4  _ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE
#           PvP_Room::WalkOut(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
# range [0x085dd4a4, 0x085dd6b9]
085dd4a4 +0x000:  push   %ebp
085dd4a5 +0x001:  mov    %esp,%ebp
085dd4a7 +0x003:  push   %esi
085dd4a8 +0x004:  push   %ebx
085dd4a9 +0x005:  sub    $0x40,%esp
085dd4ac +0x008:  lea    -0x1c(%ebp),%eax
085dd4af +0x00b:  mov    %eax,(%esp)
085dd4b2 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085dd4b7 +0x013:  movl   $0x0,-0x20(%ebp)
085dd4be +0x01a:  movb   $0x0,-0x21(%ebp)
085dd4c2 +0x01e:  movb   $0x0,-0x22(%ebp)
085dd4c6 +0x022:  movb   $0x0,-0x23(%ebp)
085dd4ca +0x026:  mov    0x10(%ebp),%eax
085dd4cd +0x029:  mov    %eax,0x4(%esp)
085dd4d1 +0x02d:  mov    0x8(%ebp),%eax
085dd4d4 +0x030:  mov    %eax,(%esp)
085dd4d7 +0x033:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
085dd4dc +0x038:  mov    %eax,-0x10(%ebp)
085dd4df +0x03b:  mov    0x18(%ebp),%eax
085dd4e2 +0x03e:  mov    %eax,0x8(%esp)
085dd4e6 +0x042:  mov    0x10(%ebp),%eax
085dd4e9 +0x045:  mov    %eax,0x4(%esp)
085dd4ed +0x049:  mov    0x8(%ebp),%eax
085dd4f0 +0x04c:  mov    %eax,(%esp)
085dd4f3 +0x04f:  call   085dd3f8 <_ZN8PvP_Room11SendWalkOutEi17ENUM_WALKOUT_TYPE>  ; PvP_Room::SendWalkOut(int, ENUM_WALKOUT_TYPE)
085dd4f8 +0x054:  lea    -0x23(%ebp),%eax
085dd4fb +0x057:  mov    %eax,0x1c(%esp)
085dd4ff +0x05b:  lea    -0x22(%ebp),%eax
085dd502 +0x05e:  mov    %eax,0x18(%esp)
085dd506 +0x062:  lea    -0x21(%ebp),%eax
085dd509 +0x065:  mov    %eax,0x14(%esp)
085dd50d +0x069:  lea    -0x20(%ebp),%eax
085dd510 +0x06c:  mov    %eax,0x10(%esp)
085dd514 +0x070:  mov    0x14(%ebp),%eax
085dd517 +0x073:  mov    %eax,0xc(%esp)
085dd51b +0x077:  mov    0x10(%ebp),%eax
085dd51e +0x07a:  mov    %eax,0x8(%esp)
085dd522 +0x07e:  mov    0xc(%ebp),%eax
085dd525 +0x081:  mov    %eax,0x4(%esp)
085dd529 +0x085:  mov    0x8(%ebp),%eax
085dd52c +0x088:  mov    %eax,(%esp)
085dd52f +0x08b:  call   085d77c0 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_>  ; PvP_Room::set_seat_state(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&)
085dd534 +0x090:  mov    %eax,-0xc(%ebp)
085dd537 +0x093:  mov    0x8(%ebp),%eax
085dd53a +0x096:  mov    %eax,(%esp)
085dd53d +0x099:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085dd542 +0x09e:  test   %eax,%eax
085dd544 +0x0a0:  jne    085dd558 <+0xb4>
085dd546 +0x0a2:  movzbl -0x23(%ebp),%eax
085dd54a +0x0a6:  xor    $0x1,%eax
085dd54d +0x0a9:  test   %al,%al
085dd54f +0x0ab:  je     085dd558 <+0xb4>
085dd551 +0x0ad:  mov    $0x1,%eax
085dd556 +0x0b2:  jmp    085dd55d <+0xb9>
085dd558 +0x0b4:  mov    $0x0,%eax
085dd55d +0x0b9:  test   %al,%al
085dd55f +0x0bb:  je     085dd59c <+0xf8>
085dd561 +0x0bd:  mov    0x8(%ebp),%eax
085dd564 +0x0c0:  mov    %eax,(%esp)
085dd567 +0x0c3:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085dd56c +0x0c8:  mov    %eax,0x14(%esp)
085dd570 +0x0cc:  movl   $"방없어져야하는데 안없어짐 ID[%d]",0x10(%esp)
085dd578 +0x0d4:  movl   $0x1210,0xc(%esp)
085dd580 +0x0dc:  movl   $&_ZZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPEE19__PRETTY_FUNCTION__,0x8(%esp)
085dd588 +0x0e4:  movl   $"pvp.cpp",0x4(%esp)
085dd590 +0x0ec:  movl   $0x1,(%esp)
085dd597 +0x0f3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085dd59c +0x0f8:  cmpl   $0x0,-0xc(%ebp)
085dd5a0 +0x0fc:  jne    085dd683 <+0x1df>
085dd5a6 +0x102:  mov    -0x20(%ebp),%eax
085dd5a9 +0x105:  test   %eax,%eax
085dd5ab +0x107:  je     085dd5fb <+0x157>
085dd5ad +0x109:  mov    0x8(%ebp),%eax
085dd5b0 +0x10c:  mov    0x6e4(%eax),%eax
085dd5b6 +0x112:  mov    (%eax),%eax
085dd5b8 +0x114:  add    $0x2c,%eax
085dd5bb +0x117:  mov    (%eax),%ebx
085dd5bd +0x119:  mov    -0x20(%ebp),%edx
085dd5c0 +0x11c:  mov    0x8(%ebp),%eax
085dd5c3 +0x11f:  mov    0x6e4(%eax),%eax
085dd5c9 +0x125:  mov    0x10(%ebp),%ecx
085dd5cc +0x128:  mov    %ecx,0x10(%esp)
085dd5d0 +0x12c:  mov    -0x10(%ebp),%ecx
085dd5d3 +0x12f:  mov    %ecx,0xc(%esp)
085dd5d7 +0x133:  mov    0x8(%ebp),%ecx
085dd5da +0x136:  mov    %ecx,0x8(%esp)
085dd5de +0x13a:  mov    %edx,0x4(%esp)
085dd5e2 +0x13e:  mov    %eax,(%esp)
085dd5e5 +0x141:  call   *%ebx
085dd5e7 +0x143:  mov    -0x20(%ebp),%ebx
085dd5ea +0x146:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dd5ef +0x14b:  mov    %ebx,0x4(%esp)
085dd5f3 +0x14f:  mov    %eax,(%esp)
085dd5f6 +0x152:  call   086c6fae <_ZN9GameWorld12out_from_pvpEP5CUser>  ; GameWorld::out_from_pvp(CUser*)
085dd5fb +0x157:  movzbl -0x21(%ebp),%eax
085dd5ff +0x15b:  test   %al,%al
085dd601 +0x15d:  je     085dd63b <+0x197>
085dd603 +0x15f:  lea    -0x1c(%ebp),%eax
085dd606 +0x162:  mov    %eax,(%esp)
085dd609 +0x165:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085dd60e +0x16a:  lea    -0x1c(%ebp),%eax
085dd611 +0x16d:  mov    0x10(%ebp),%edx
085dd614 +0x170:  mov    %edx,0x8(%esp)
085dd618 +0x174:  mov    %eax,0x4(%esp)
085dd61c +0x178:  mov    0x8(%ebp),%eax
085dd61f +0x17b:  mov    %eax,(%esp)
085dd622 +0x17e:  call   085db9e2 <_ZN8PvP_Room14make_seat_infoEPci>  ; PvP_Room::make_seat_info(char*, int)
085dd627 +0x183:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dd62c +0x188:  lea    -0x1c(%ebp),%edx
085dd62f +0x18b:  mov    %edx,0x4(%esp)
085dd633 +0x18f:  mov    %eax,(%esp)
085dd636 +0x192:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
085dd63b +0x197:  movzbl -0x22(%ebp),%eax
085dd63f +0x19b:  test   %al,%al
085dd641 +0x19d:  je     085dd674 <+0x1d0>
085dd643 +0x19f:  lea    -0x1c(%ebp),%eax
085dd646 +0x1a2:  mov    %eax,(%esp)
085dd649 +0x1a5:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085dd64e +0x1aa:  lea    -0x1c(%ebp),%eax
085dd651 +0x1ad:  mov    %eax,0x4(%esp)
085dd655 +0x1b1:  mov    0x8(%ebp),%eax
085dd658 +0x1b4:  mov    %eax,(%esp)
085dd65b +0x1b7:  call   085dbd3a <_ZN8PvP_Room15make_state_infoEPc>  ; PvP_Room::make_state_info(char*)
085dd660 +0x1bc:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dd665 +0x1c1:  lea    -0x1c(%ebp),%edx
085dd668 +0x1c4:  mov    %edx,0x4(%esp)
085dd66c +0x1c8:  mov    %eax,(%esp)
085dd66f +0x1cb:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
085dd674 +0x1d0:  movzbl -0x23(%ebp),%eax
085dd678 +0x1d4:  test   %al,%al
085dd67a +0x1d6:  je     085dd683 <+0x1df>
085dd67c +0x1d8:  mov    $0x0,%ebx
085dd681 +0x1dd:  jmp    085dd6a5 <+0x201>
085dd683 +0x1df:  mov    $0x1,%ebx
085dd688 +0x1e4:  jmp    085dd6a5 <+0x201>
085dd68a +0x1e6:  mov    %edx,%ebx
085dd68c +0x1e8:  mov    %eax,%esi
085dd68e +0x1ea:  lea    -0x1c(%ebp),%eax
085dd691 +0x1ed:  mov    %eax,(%esp)
085dd694 +0x1f0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085dd699 +0x1f5:  mov    %esi,%eax
085dd69b +0x1f7:  mov    %ebx,%edx
085dd69d +0x1f9:  mov    %eax,(%esp)
085dd6a0 +0x1fc:  call   08ae3750 <_Unwind_Resume>
085dd6a5 +0x201:  lea    -0x1c(%ebp),%eax
085dd6a8 +0x204:  mov    %eax,(%esp)
085dd6ab +0x207:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085dd6b0 +0x20c:  mov    %ebx,%eax
085dd6b2 +0x20e:  add    $0x40,%esp
085dd6b5 +0x211:  pop    %ebx
085dd6b6 +0x212:  pop    %esi
085dd6b7 +0x213:  pop    %ebp
085dd6b8 +0x214:  ret
085dd6b9 +0x215:  nop
```

## 反编译 C

```c
// PvP_Room::WalkOut @ 0x85dd4a4

/* PvP_Room::WalkOut(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE) */

undefined4 __thiscall
PvP_Room::WalkOut(PvP_Room *this,undefined4 param_1,int param_2,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  CUser *pCVar2;
  int iVar3;
  undefined4 uVar4;
  GameWorld *pGVar5;
  char local_27;
  char local_26;
  char local_25;
  CUser *local_24;
  PacketGuard local_20 [12];
  undefined4 local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_20);
  local_24 = (CUser *)0x0;
  local_25 = '\0';
  local_26 = '\0';
  local_27 = '\0';
  local_14 = get_team(this,param_2);
                    /* try { // try from 085dd4f3 to 085dd673 has its CatchHandler @ 085dd68a */
  SendWalkOut(this,param_2,param_5);
  local_10 = set_seat_state(this,param_1,param_2,param_4,&local_24,&local_25,&local_26,&local_27);
  iVar3 = get_waiter_count(this);
  if ((iVar3 == 0) && (local_27 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = get_index(this);
    LogManager::logFormat
              (1,"pvp.cpp","bool PvP_Room::WalkOut(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)"
               ,0x1210,&DAT_08cc12fc,uVar4);
  }
  if (local_10 == 0) {
    if (local_24 != (CUser *)0x0) {
      (**(code **)(**(int **)(this + 0x6e4) + 0x2c))
                (*(undefined4 *)(this + 0x6e4),local_24,this,local_14,param_2);
      pCVar2 = local_24;
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::out_from_pvp(pGVar5,pCVar2);
    }
    if (local_25 != '\0') {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
      make_seat_info(this,(char *)local_20,param_2);
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar5,local_20);
    }
    if (local_26 != '\0') {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
      make_state_info(this,(char *)local_20);
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar5,local_20);
    }
    if (local_27 != '\0') {
      uVar4 = 0;
      goto LAB_085dd6a5;
    }
  }
  uVar4 = 1;
LAB_085dd6a5:
  PacketGuard::~PacketGuard(local_20);
  return uVar4;
}
```
