# SendPowerUpList

`_ZN9GameWorld15SendPowerUpListE27ENUM_POWER_UP_ACTIVATE_TYPERSt6vectorIP5CUserSaIS3_EE`

`GameWorld::SendPowerUpList(ENUM_POWER_UP_ACTIVATE_TYPE, std::vector<CUser*, std::allocator<CUser*> >&)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cf46a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cf46a  _ZN9GameWorld15SendPowerUpListE27ENUM_POWER_UP_ACTIVATE_TYPERSt6vectorIP5CUserSaIS3_EE
#           GameWorld::SendPowerUpList(ENUM_POWER_UP_ACTIVATE_TYPE, std::vector<CUser*, std::allocator<CUser*> >&)
# range [0x086cf46a, 0x086cf59b]
086cf46a +0x000:  push   %ebp
086cf46b +0x001:  mov    %esp,%ebp
086cf46d +0x003:  push   %esi
086cf46e +0x004:  push   %ebx
086cf46f +0x005:  sub    $0x30,%esp
086cf472 +0x008:  lea    -0x18(%ebp),%eax
086cf475 +0x00b:  mov    %eax,(%esp)
086cf478 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086cf47d +0x013:  movl   $0xd8,0x8(%esp)
086cf485 +0x01b:  movl   $0x0,0x4(%esp)
086cf48d +0x023:  lea    -0x18(%ebp),%eax
086cf490 +0x026:  mov    %eax,(%esp)
086cf493 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086cf498 +0x02e:  mov    0xc(%ebp),%eax
086cf49b +0x031:  movzbl %al,%eax
086cf49e +0x034:  mov    %eax,0x4(%esp)
086cf4a2 +0x038:  lea    -0x18(%ebp),%eax
086cf4a5 +0x03b:  mov    %eax,(%esp)
086cf4a8 +0x03e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086cf4ad +0x043:  mov    0x10(%ebp),%eax
086cf4b0 +0x046:  mov    %eax,(%esp)
086cf4b3 +0x049:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
086cf4b8 +0x04e:  mov    %eax,0x4(%esp)
086cf4bc +0x052:  lea    -0x18(%ebp),%eax
086cf4bf +0x055:  mov    %eax,(%esp)
086cf4c2 +0x058:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086cf4c7 +0x05d:  lea    -0x1c(%ebp),%eax
086cf4ca +0x060:  mov    0x10(%ebp),%edx
086cf4cd +0x063:  mov    %edx,0x4(%esp)
086cf4d1 +0x067:  mov    %eax,(%esp)
086cf4d4 +0x06a:  call   08551640 <_GLOBAL__I__ZN10CLuckPointC2Ev+0x693>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0x693
086cf4d9 +0x06f:  sub    $0x4,%esp
086cf4dc +0x072:  jmp    086cf510 <+0xa6>
086cf4de +0x074:  lea    -0x1c(%ebp),%eax
086cf4e1 +0x077:  mov    %eax,(%esp)
086cf4e4 +0x07a:  call   08551590 <_GLOBAL__I__ZN10CLuckPointC2Ev+0x5e3>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0x5e3
086cf4e9 +0x07f:  mov    (%eax),%eax
086cf4eb +0x081:  mov    %eax,(%esp)
086cf4ee +0x084:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086cf4f3 +0x089:  movzwl %ax,%eax
086cf4f6 +0x08c:  mov    %eax,0x4(%esp)
086cf4fa +0x090:  lea    -0x18(%ebp),%eax
086cf4fd +0x093:  mov    %eax,(%esp)
086cf500 +0x096:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086cf505 +0x09b:  lea    -0x1c(%ebp),%eax
086cf508 +0x09e:  mov    %eax,(%esp)
086cf50b +0x0a1:  call   086d4324 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2b55>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2b55
086cf510 +0x0a6:  lea    -0xc(%ebp),%eax
086cf513 +0x0a9:  mov    0x10(%ebp),%edx
086cf516 +0x0ac:  mov    %edx,0x4(%esp)
086cf51a +0x0b0:  mov    %eax,(%esp)
086cf51d +0x0b3:  call   0855119e <_GLOBAL__I__ZN10CLuckPointC2Ev+0x1f1>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0x1f1
086cf522 +0x0b8:  sub    $0x4,%esp
086cf525 +0x0bb:  lea    -0xc(%ebp),%eax
086cf528 +0x0be:  mov    %eax,0x4(%esp)
086cf52c +0x0c2:  lea    -0x1c(%ebp),%eax
086cf52f +0x0c5:  mov    %eax,(%esp)
086cf532 +0x0c8:  call   086d42f8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2b29>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2b29
086cf537 +0x0cd:  test   %al,%al
086cf539 +0x0cf:  jne    086cf4de <+0x74>
086cf53b +0x0d1:  movl   $0x1,0x4(%esp)
086cf543 +0x0d9:  lea    -0x18(%ebp),%eax
086cf546 +0x0dc:  mov    %eax,(%esp)
086cf549 +0x0df:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086cf54e +0x0e4:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086cf553 +0x0e9:  lea    -0x18(%ebp),%edx
086cf556 +0x0ec:  mov    %edx,0x8(%esp)
086cf55a +0x0f0:  movl   $0x7,0x4(%esp)
086cf562 +0x0f8:  mov    %eax,(%esp)
086cf565 +0x0fb:  call   086c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>  ; GameWorld::send_to_vill(int, PacketGuard&)
086cf56a +0x100:  jmp    086cf587 <+0x11d>
086cf56c +0x102:  mov    %edx,%ebx
086cf56e +0x104:  mov    %eax,%esi
086cf570 +0x106:  lea    -0x18(%ebp),%eax
086cf573 +0x109:  mov    %eax,(%esp)
086cf576 +0x10c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086cf57b +0x111:  mov    %esi,%eax
086cf57d +0x113:  mov    %ebx,%edx
086cf57f +0x115:  mov    %eax,(%esp)
086cf582 +0x118:  call   08ae3750 <_Unwind_Resume>
086cf587 +0x11d:  lea    -0x18(%ebp),%eax
086cf58a +0x120:  mov    %eax,(%esp)
086cf58d +0x123:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086cf592 +0x128:  lea    -0x8(%ebp),%esp
086cf595 +0x12b:  add    $0x0,%esp
086cf598 +0x12e:  pop    %ebx
086cf599 +0x12f:  pop    %esi
086cf59a +0x130:  pop    %ebp
086cf59b +0x131:  ret
```

## 反编译 C

```c
// GameWorld::SendPowerUpList @ 0x86cf46a

/* GameWorld::SendPowerUpList(ENUM_POWER_UP_ACTIVATE_TYPE, std::vector<CUser*,
   std::allocator<CUser*> >&) */

void __thiscall
GameWorld::SendPowerUpList
          (undefined4 this,uint param_2,vector<CUser*,std::allocator<CUser*>> *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  GameWorld *this_00;
  __normal_iterator<CUser**,std::vector<CUser*,std::allocator<CUser*>>> local_20 [4];
  PacketGuard local_1c [12];
  __normal_iterator local_10 [4];
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 086cf493 to 086cf569 has its CatchHandler @ 086cf56c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xd8);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,param_2 & 0xff);
  iVar2 = std::vector<CUser*,std::allocator<CUser*>>::size(param_3);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar2);
  std::vector<CUser*,std::allocator<CUser*>>::begin();
  while( true ) {
    std::vector<CUser*,std::allocator<CUser*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_20,local_10);
    if (!bVar1) break;
    puVar3 = (undefined4 *)
             __gnu_cxx::__normal_iterator<CUser**,std::vector<CUser*,std::allocator<CUser*>>>::
             operator*(local_20);
    uVar4 = CUser::get_unique_id((CUser *)*puVar3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar4 & 0xffff);
    __gnu_cxx::__normal_iterator<CUser**,std::vector<CUser*,std::allocator<CUser*>>>::operator++
              (local_20);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this_00 = (GameWorld *)G_GameWorld();
  send_to_vill(this_00,7,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
