# RevivalUser

`_ZN11pvp_assault13CAssaultPlace11RevivalUserEP5CUserRi`

`pvp_assault::CAssaultPlace::RevivalUser(CUser*, int&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ed43e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ed43e  _ZN11pvp_assault13CAssaultPlace11RevivalUserEP5CUserRi
#           pvp_assault::CAssaultPlace::RevivalUser(CUser*, int&)
# range [0x082ed43e, 0x082ed5f3]
082ed43e +0x000:  push   %ebp
082ed43f +0x001:  mov    %esp,%ebp
082ed441 +0x003:  push   %esi
082ed442 +0x004:  push   %ebx
082ed443 +0x005:  sub    $0x30,%esp
082ed446 +0x008:  mov    0x8(%ebp),%eax
082ed449 +0x00b:  mov    %eax,(%esp)
082ed44c +0x00e:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
082ed451 +0x013:  xor    $0x1,%eax
082ed454 +0x016:  test   %al,%al
082ed456 +0x018:  je     082ed484 <+0x46>
082ed458 +0x01a:  movl   $0x4,(%esp)
082ed45f +0x021:  call   08725800 <__cxa_allocate_exception>
082ed464 +0x026:  mov    %eax,%edx
082ed466 +0x028:  movl   $0x12,(%edx)
082ed46c +0x02e:  movl   $0x0,0x8(%esp)
082ed474 +0x036:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ed47c +0x03e:  mov    %eax,(%esp)
082ed47f +0x041:  call   08724c50 <__cxa_throw>
082ed484 +0x046:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082ed48b +0x04d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082ed490 +0x052:  mov    %eax,-0x10(%ebp)
082ed493 +0x055:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ed498 +0x05a:  mov    %eax,(%esp)
082ed49b +0x05d:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ed4a0 +0x062:  test   %al,%al
082ed4a2 +0x064:  jne    082ed4b3 <+0x75>
082ed4a4 +0x066:  mov    0x8(%ebp),%eax
082ed4a7 +0x069:  mov    %eax,(%esp)
082ed4aa +0x06c:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ed4af +0x071:  cmp    $0x7,%al
082ed4b1 +0x073:  jne    082ed4ba <+0x7c>
082ed4b3 +0x075:  mov    $0x1,%eax
082ed4b8 +0x07a:  jmp    082ed4bf <+0x81>
082ed4ba +0x07c:  mov    $0x0,%eax
082ed4bf +0x081:  test   %al,%al
082ed4c1 +0x083:  je     082ed51c <+0xde>
082ed4c3 +0x085:  mov    -0x10(%ebp),%edx
082ed4c6 +0x088:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ed4cb +0x08d:  mov    0xc(%ebp),%ecx
082ed4ce +0x090:  mov    %ecx,0xc(%esp)
082ed4d2 +0x094:  mov    %edx,0x8(%esp)
082ed4d6 +0x098:  mov    0x8(%ebp),%edx
082ed4d9 +0x09b:  mov    %edx,0x4(%esp)
082ed4dd +0x09f:  mov    %eax,(%esp)
082ed4e0 +0x0a2:  call   0847f952 <_ZN13CPowerManager15IsAbleToRevivalEP5CUserjRi>  ; CPowerManager::IsAbleToRevival(CUser*, unsigned int, int&)
082ed4e5 +0x0a7:  xor    $0x1,%eax
082ed4e8 +0x0aa:  test   %al,%al
082ed4ea +0x0ac:  je     082ed577 <+0x139>
082ed4f0 +0x0b2:  movl   $0x4,(%esp)
082ed4f7 +0x0b9:  call   08725800 <__cxa_allocate_exception>
082ed4fc +0x0be:  mov    %eax,%edx
082ed4fe +0x0c0:  movl   $0x16,(%edx)
082ed504 +0x0c6:  movl   $0x0,0x8(%esp)
082ed50c +0x0ce:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ed514 +0x0d6:  mov    %eax,(%esp)
082ed517 +0x0d9:  call   08724c50 <__cxa_throw>
082ed51c +0x0de:  mov    0x8(%ebp),%eax
082ed51f +0x0e1:  mov    %eax,(%esp)
082ed522 +0x0e4:  call   082f0b88 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x90c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x90c
082ed527 +0x0e9:  mov    -0x10(%ebp),%edx
082ed52a +0x0ec:  mov    %edx,%ecx
082ed52c +0x0ee:  sub    %eax,%ecx
082ed52e +0x0f0:  mov    %ecx,%eax
082ed530 +0x0f2:  mov    %eax,-0xc(%ebp)
082ed533 +0x0f5:  cmpl   $0x257,-0xc(%ebp)
082ed53a +0x0fc:  jg     082ed577 <+0x139>
082ed53c +0x0fe:  mov    $0x258,%eax
082ed541 +0x103:  mov    %eax,%edx
082ed543 +0x105:  sub    -0xc(%ebp),%edx
082ed546 +0x108:  mov    0xc(%ebp),%eax
082ed549 +0x10b:  mov    %edx,(%eax)
082ed54b +0x10d:  movl   $0x4,(%esp)
082ed552 +0x114:  call   08725800 <__cxa_allocate_exception>
082ed557 +0x119:  mov    %eax,%edx
082ed559 +0x11b:  movl   $0x16,(%edx)
082ed55f +0x121:  movl   $0x0,0x8(%esp)
082ed567 +0x129:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ed56f +0x131:  mov    %eax,(%esp)
082ed572 +0x134:  call   08724c50 <__cxa_throw>
082ed577 +0x139:  lea    -0x1c(%ebp),%eax
082ed57a +0x13c:  mov    %eax,(%esp)
082ed57d +0x13f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ed582 +0x144:  mov    0x8(%ebp),%eax
082ed585 +0x147:  mov    %eax,(%esp)
082ed588 +0x14a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082ed58d +0x14f:  movzwl %ax,%eax
082ed590 +0x152:  mov    %eax,0x4(%esp)
082ed594 +0x156:  lea    -0x1c(%ebp),%eax
082ed597 +0x159:  mov    %eax,(%esp)
082ed59a +0x15c:  call   082e8978 <_ZN11pvp_assault13CAssaultPlace25_MakeRevivalAssaultPlayerEP11PacketGuardi>  ; pvp_assault::CAssaultPlace::_MakeRevivalAssaultPlayer(PacketGuard*, int)
082ed59f +0x161:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082ed5a4 +0x166:  lea    -0x1c(%ebp),%edx
082ed5a7 +0x169:  mov    %edx,0x4(%esp)
082ed5ab +0x16d:  mov    %eax,(%esp)
082ed5ae +0x170:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082ed5b3 +0x175:  mov    0x8(%ebp),%eax
082ed5b6 +0x178:  movl   $0x0,0x4(%esp)
082ed5be +0x180:  mov    %eax,(%esp)
082ed5c1 +0x183:  call   082f0c30 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x9b4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x9b4
082ed5c6 +0x188:  lea    -0x1c(%ebp),%eax
082ed5c9 +0x18b:  mov    %eax,(%esp)
082ed5cc +0x18e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ed5d1 +0x193:  add    $0x30,%esp
082ed5d4 +0x196:  pop    %ebx
082ed5d5 +0x197:  pop    %esi
082ed5d6 +0x198:  pop    %ebp
082ed5d7 +0x199:  ret
082ed5d8 +0x19a:  mov    %edx,%ebx
082ed5da +0x19c:  mov    %eax,%esi
082ed5dc +0x19e:  lea    -0x1c(%ebp),%eax
082ed5df +0x1a1:  mov    %eax,(%esp)
082ed5e2 +0x1a4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ed5e7 +0x1a9:  mov    %esi,%eax
082ed5e9 +0x1ab:  mov    %ebx,%edx
082ed5eb +0x1ad:  mov    %eax,(%esp)
082ed5ee +0x1b0:  call   08ae3750 <_Unwind_Resume>
082ed5f3 +0x1b5:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::RevivalUser @ 0x82ed43e

/* pvp_assault::CAssaultPlace::RevivalUser(CUser*, int&) */

void pvp_assault::CAssaultPlace::RevivalUser(CUser *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  GameWorld *this;
  PacketGuard local_20 [12];
  uint local_14;
  int local_10;
  
  cVar2 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x12;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 == '\0') {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 != '\a') {
      bVar1 = false;
      goto LAB_082ed4bf;
    }
  }
  bVar1 = true;
LAB_082ed4bf:
  if (bVar1) {
    cVar2 = CPowerManager::IsAbleToRevival(GlobalData::s_power_manager,param_1,local_14,param_2);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
  }
  else {
    local_10 = CUserCharacInfo::GetCurCharacChaosDieTime((CUserCharacInfo *)param_1);
    local_10 = local_14 - local_10;
    if (local_10 < 600) {
      *param_2 = 600 - local_10;
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
  }
  PacketGuard::PacketGuard(local_20);
  uVar4 = CUser::get_unique_id(param_1);
                    /* try { // try from 082ed59a to 082ed5b2 has its CatchHandler @ 082ed5d8 */
  _MakeRevivalAssaultPlayer(local_20,uVar4 & 0xffff);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_20);
  CUserCharacInfo::SetCurCharacGhost((CUserCharacInfo *)param_1,false);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
