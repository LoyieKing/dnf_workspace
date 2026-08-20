# OnTeleportCharacter

`_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib`

`expert_job::CAlchemist::OnTeleportCharacter(CUser*, int, int, int, int, bool)`

| 类 | 地址 |
|---|---|
| `expert_job::CAlchemist` | `0x085d1424` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1424  _ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib
#           expert_job::CAlchemist::OnTeleportCharacter(CUser*, int, int, int, int, bool)
# range [0x085d1424, 0x085d1693]
085d1424 +0x000:  push   %ebp
085d1425 +0x001:  mov    %esp,%ebp
085d1427 +0x003:  push   %esi
085d1428 +0x004:  push   %ebx
085d1429 +0x005:  sub    $0x60,%esp
085d142c +0x008:  mov    0x1c(%ebp),%eax
085d142f +0x00b:  mov    %al,-0x2c(%ebp)
085d1432 +0x00e:  cmpb   $0x0,-0x2c(%ebp)
085d1436 +0x012:  je     085d14d7 <+0xb3>
085d143c +0x018:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d1441 +0x01d:  mov    0xc(%ebp),%edx
085d1444 +0x020:  mov    %edx,0x4(%esp)
085d1448 +0x024:  mov    %eax,(%esp)
085d144b +0x027:  call   086c497c <_ZNK9GameWorld13get_gate_areaEi>  ; GameWorld::get_gate_area(int) const
085d1450 +0x02c:  mov    %eax,0x10(%ebp)
085d1453 +0x02f:  mov    0x10(%ebp),%eax
085d1456 +0x032:  shr    $0x1f,%eax
085d1459 +0x035:  test   %al,%al
085d145b +0x037:  je     085d1467 <+0x43>
085d145d +0x039:  mov    $0x0,%ebx
085d1462 +0x03e:  jmp    085d168a <+0x266>
085d1467 +0x043:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d146c +0x048:  lea    0x18(%ebp),%edx
085d146f +0x04b:  mov    %edx,0x10(%esp)
085d1473 +0x04f:  lea    0x14(%ebp),%edx
085d1476 +0x052:  mov    %edx,0xc(%esp)
085d147a +0x056:  mov    0x10(%ebp),%edx
085d147d +0x059:  mov    %edx,0x8(%esp)
085d1481 +0x05d:  mov    0xc(%ebp),%edx
085d1484 +0x060:  mov    %edx,0x4(%esp)
085d1488 +0x064:  mov    %eax,(%esp)
085d148b +0x067:  call   086c471e <_ZNK9GameWorld21get_area_center_pointEiiRiS0_>  ; GameWorld::get_area_center_point(int, int, int&, int&) const
085d1490 +0x06c:  xor    $0x1,%eax
085d1493 +0x06f:  test   %al,%al
085d1495 +0x071:  je     085d14d7 <+0xb3>
085d1497 +0x073:  movl   $0x5,0xc(%esp)
085d149f +0x07b:  movl   $0x8b,0x8(%esp)
085d14a7 +0x083:  movl   $&_ZZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiibE19__PRETTY_FUNCTION__,0x4(%esp)
085d14af +0x08b:  lea    -0x18(%ebp),%eax
085d14b2 +0x08e:  mov    %eax,(%esp)
085d14b5 +0x091:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d14ba +0x096:  movl   $"get_area_center_point() call failed",0x4(%esp)
085d14c2 +0x09e:  lea    -0x18(%ebp),%eax
085d14c5 +0x0a1:  mov    %eax,(%esp)
085d14c8 +0x0a4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d14cd +0x0a9:  mov    $0x0,%ebx
085d14d2 +0x0ae:  jmp    085d168a <+0x266>
085d14d7 +0x0b3:  mov    0x8(%ebp),%eax
085d14da +0x0b6:  mov    %eax,(%esp)
085d14dd +0x0b9:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085d14e2 +0x0be:  movsbl %al,%eax
085d14e5 +0x0c1:  cmp    0xc(%ebp),%eax
085d14e8 +0x0c4:  jne    085d1502 <+0xde>
085d14ea +0x0c6:  movl   $0x0,0x4(%esp)
085d14f2 +0x0ce:  mov    0x8(%ebp),%eax
085d14f5 +0x0d1:  mov    %eax,(%esp)
085d14f8 +0x0d4:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085d14fd +0x0d9:  cmp    0x10(%ebp),%eax
085d1500 +0x0dc:  je     085d1509 <+0xe5>
085d1502 +0x0de:  mov    $0x1,%eax
085d1507 +0x0e3:  jmp    085d150e <+0xea>
085d1509 +0x0e5:  mov    $0x0,%eax
085d150e +0x0ea:  test   %al,%al
085d1510 +0x0ec:  je     085d157b <+0x157>
085d1512 +0x0ee:  mov    0x18(%ebp),%esi
085d1515 +0x0f1:  mov    0x14(%ebp),%ebx
085d1518 +0x0f4:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d151d +0x0f9:  movl   $0x0,0x28(%esp)
085d1525 +0x101:  movl   $0x0,0x24(%esp)
085d152d +0x109:  movl   $0x0,0x20(%esp)
085d1535 +0x111:  movl   $0x0,0x1c(%esp)
085d153d +0x119:  movl   $0x0,0x18(%esp)
085d1545 +0x121:  mov    %esi,0x14(%esp)
085d1549 +0x125:  mov    %ebx,0x10(%esp)
085d154d +0x129:  mov    0x10(%ebp),%edx
085d1550 +0x12c:  mov    %edx,0xc(%esp)
085d1554 +0x130:  mov    0xc(%ebp),%edx
085d1557 +0x133:  mov    %edx,0x8(%esp)
085d155b +0x137:  mov    0x8(%ebp),%edx
085d155e +0x13a:  mov    %edx,0x4(%esp)
085d1562 +0x13e:  mov    %eax,(%esp)
085d1565 +0x141:  call   086c5a84 <_ZN9GameWorld9move_areaEP5CUseriiiiibiii>  ; GameWorld::move_area(CUser*, int, int, int, int, int, bool, int, int, int)
085d156a +0x146:  xor    $0x1,%eax
085d156d +0x149:  test   %al,%al
085d156f +0x14b:  je     085d15a2 <+0x17e>
085d1571 +0x14d:  mov    $0x0,%ebx
085d1576 +0x152:  jmp    085d168a <+0x266>
085d157b +0x157:  mov    0x18(%ebp),%eax
085d157e +0x15a:  movzwl %ax,%edx
085d1581 +0x15d:  mov    0x14(%ebp),%eax
085d1584 +0x160:  movzwl %ax,%eax
085d1587 +0x163:  movl   $0x0,0xc(%esp)
085d158f +0x16b:  mov    %edx,0x8(%esp)
085d1593 +0x16f:  mov    %eax,0x4(%esp)
085d1597 +0x173:  mov    0x8(%ebp),%eax
085d159a +0x176:  mov    %eax,(%esp)
085d159d +0x179:  call   082f0e2a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xbae>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xbae
085d15a2 +0x17e:  lea    -0x24(%ebp),%eax
085d15a5 +0x181:  mov    %eax,(%esp)
085d15a8 +0x184:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d15ad +0x189:  movl   $0x8a,0x8(%esp)
085d15b5 +0x191:  movl   $0x0,0x4(%esp)
085d15bd +0x199:  lea    -0x24(%ebp),%eax
085d15c0 +0x19c:  mov    %eax,(%esp)
085d15c3 +0x19f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d15c8 +0x1a4:  mov    0x8(%ebp),%eax
085d15cb +0x1a7:  mov    %eax,(%esp)
085d15ce +0x1aa:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085d15d3 +0x1af:  movzwl %ax,%eax
085d15d6 +0x1b2:  mov    %eax,0x4(%esp)
085d15da +0x1b6:  lea    -0x24(%ebp),%eax
085d15dd +0x1b9:  mov    %eax,(%esp)
085d15e0 +0x1bc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d15e5 +0x1c1:  mov    0x14(%ebp),%eax
085d15e8 +0x1c4:  mov    %eax,0x4(%esp)
085d15ec +0x1c8:  lea    -0x24(%ebp),%eax
085d15ef +0x1cb:  mov    %eax,(%esp)
085d15f2 +0x1ce:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d15f7 +0x1d3:  mov    0x18(%ebp),%eax
085d15fa +0x1d6:  mov    %eax,0x4(%esp)
085d15fe +0x1da:  lea    -0x24(%ebp),%eax
085d1601 +0x1dd:  mov    %eax,(%esp)
085d1604 +0x1e0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d1609 +0x1e5:  movl   $0x0,0x4(%esp)
085d1611 +0x1ed:  lea    -0x24(%ebp),%eax
085d1614 +0x1f0:  mov    %eax,(%esp)
085d1617 +0x1f3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d161c +0x1f8:  movl   $0x1,0x4(%esp)
085d1624 +0x200:  lea    -0x24(%ebp),%eax
085d1627 +0x203:  mov    %eax,(%esp)
085d162a +0x206:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d162f +0x20b:  cmpl   $0x0,0xc(%ebp)
085d1633 +0x20f:  jne    085d163b <+0x217>
085d1635 +0x211:  cmpl   $0x0,0x10(%ebp)
085d1639 +0x215:  je     085d165d <+0x239>
085d163b +0x217:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d1640 +0x21c:  lea    -0x24(%ebp),%edx
085d1643 +0x21f:  mov    %edx,0xc(%esp)
085d1647 +0x223:  mov    0x10(%ebp),%edx
085d164a +0x226:  mov    %edx,0x8(%esp)
085d164e +0x22a:  mov    0xc(%ebp),%edx
085d1651 +0x22d:  mov    %edx,0x4(%esp)
085d1655 +0x231:  mov    %eax,(%esp)
085d1658 +0x234:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
085d165d +0x239:  mov    $0x1,%ebx
085d1662 +0x23e:  lea    -0x24(%ebp),%eax
085d1665 +0x241:  mov    %eax,(%esp)
085d1668 +0x244:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d166d +0x249:  jmp    085d168a <+0x266>
085d166f +0x24b:  mov    %edx,%ebx
085d1671 +0x24d:  mov    %eax,%esi
085d1673 +0x24f:  lea    -0x24(%ebp),%eax
085d1676 +0x252:  mov    %eax,(%esp)
085d1679 +0x255:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d167e +0x25a:  mov    %esi,%eax
085d1680 +0x25c:  mov    %ebx,%edx
085d1682 +0x25e:  mov    %eax,(%esp)
085d1685 +0x261:  call   08ae3750 <_Unwind_Resume>
085d168a +0x266:  mov    %ebx,%eax
085d168c +0x268:  add    $0x60,%esp
085d168f +0x26b:  pop    %ebx
085d1690 +0x26c:  pop    %esi
085d1691 +0x26d:  pop    %ebp
085d1692 +0x26e:  ret
085d1693 +0x26f:  nop
```

## 反编译 C

```c
// expert_job::CAlchemist::OnTeleportCharacter @ 0x85d1424

/* expert_job::CAlchemist::OnTeleportCharacter(CUser*, int, int, int, int, bool) */

undefined4
expert_job::CAlchemist::OnTeleportCharacter
          (CUser *param_1,int param_2,int param_3,int param_4,int param_5,bool param_6)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  GameWorld *pGVar4;
  int iVar5;
  uint uVar6;
  undefined3 in_stack_00000019;
  PacketGuard local_28 [12];
  cMyTrace local_1c [16];
  
  if (param_6) {
    pGVar4 = (GameWorld *)G_GameWorld();
    param_3 = GameWorld::get_gate_area(pGVar4,param_2);
    if (param_3 < 0) {
      return 0;
    }
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::get_area_center_point(pGVar4,param_2,param_3,&param_4,&param_5);
    if (cVar3 != '\x01') {
      cMyTrace::cMyTrace(local_1c,
                         "static bool expert_job::CAlchemist::OnTeleportCharacter(CUser*, int, int, int, int, bool)"
                         ,0x8b,5);
      cMyTrace::operator()(local_1c,"get_area_center_point() call failed");
      return 0;
    }
  }
  cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  if ((cVar3 == param_2) && (iVar5 = CUser::get_area(param_1,false), iVar5 == param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = param_5;
  iVar5 = param_4;
  if (bVar1) {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::move_area(pGVar4,param_1,param_2,param_3,iVar5,iVar2,0,false,0,0,0);
    if (cVar3 != '\x01') {
      return 0;
    }
  }
  else {
    CUser::set_position(param_1,(ushort)param_4,(ushort)param_5,'\0');
  }
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 085d15c3 to 085d165c has its CatchHandler @ 085d166f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x8a);
  uVar6 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar6 & 0xffff);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,param_4);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,param_5);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  if ((param_2 != 0) || (param_3 != 0)) {
    pGVar4 = (GameWorld *)G_GameWorld();
    GameWorld::send_to_area(pGVar4,param_2,param_3,local_28);
  }
  PacketGuard::~PacketGuard(local_28);
  return 1;
}
```
