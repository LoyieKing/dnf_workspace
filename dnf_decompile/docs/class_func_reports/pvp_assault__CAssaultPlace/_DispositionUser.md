# _DispositionUser

`_ZN11pvp_assault13CAssaultPlace16_DispositionUserEPP5CUser`

`pvp_assault::CAssaultPlace::_DispositionUser(CUser**)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e7bbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e7bbc  _ZN11pvp_assault13CAssaultPlace16_DispositionUserEPP5CUser
#           pvp_assault::CAssaultPlace::_DispositionUser(CUser**)
# range [0x082e7bbc, 0x082e7d09]
082e7bbc +0x000:  push   %ebp
082e7bbd +0x001:  mov    %esp,%ebp
082e7bbf +0x003:  push   %esi
082e7bc0 +0x004:  push   %ebx
082e7bc1 +0x005:  sub    $0x50,%esp
082e7bc4 +0x008:  movl   $0x0,-0x10(%ebp)
082e7bcb +0x00f:  movl   $0x0,-0xc(%ebp)
082e7bd2 +0x016:  lea    -0x10(%ebp),%eax
082e7bd5 +0x019:  mov    %eax,0x4(%esp)
082e7bd9 +0x01d:  mov    0x8(%ebp),%eax
082e7bdc +0x020:  mov    %eax,(%esp)
082e7bdf +0x023:  call   082e7232 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPi>  ; pvp_assault::CAssaultPlace::_GetTeamCount(int*)
082e7be4 +0x028:  lea    -0x10(%ebp),%eax
082e7be7 +0x02b:  mov    %eax,0x8(%esp)
082e7beb +0x02f:  mov    0xc(%ebp),%eax
082e7bee +0x032:  mov    %eax,0x4(%esp)
082e7bf2 +0x036:  lea    -0x3c(%ebp),%eax
082e7bf5 +0x039:  mov    %eax,(%esp)
082e7bf8 +0x03c:  call   082e62aa <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi>  ; pvp_assault::CStaticDisposition::CStaticDisposition(CUser**, int*)
082e7bfd +0x041:  mov    0x8(%ebp),%eax
082e7c00 +0x044:  mov    0x11c(%eax),%esi
082e7c06 +0x04a:  mov    0x8(%ebp),%eax
082e7c09 +0x04d:  mov    0x118(%eax),%ebx
082e7c0f +0x053:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082e7c14 +0x058:  lea    -0x3c(%ebp),%edx
082e7c17 +0x05b:  mov    %edx,0xc(%esp)
082e7c1b +0x05f:  mov    %esi,0x8(%esp)
082e7c1f +0x063:  mov    %ebx,0x4(%esp)
082e7c23 +0x067:  mov    %eax,(%esp)
082e7c26 +0x06a:  call   086c46ba <_ZN9GameWorld15get_dispositionEiiPN11pvp_assault12CDispositionE>  ; GameWorld::get_disposition(int, int, pvp_assault::CDisposition*)
082e7c2b +0x06f:  xor    $0x1,%eax
082e7c2e +0x072:  test   %al,%al
082e7c30 +0x074:  je     082e7c5e <+0xa2>
082e7c32 +0x076:  movl   $0x4,(%esp)
082e7c39 +0x07d:  call   08725800 <__cxa_allocate_exception>
082e7c3e +0x082:  mov    %eax,%edx
082e7c40 +0x084:  movl   $0x3,(%edx)
082e7c46 +0x08a:  movl   $0x0,0x8(%esp)
082e7c4e +0x092:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082e7c56 +0x09a:  mov    %eax,(%esp)
082e7c59 +0x09d:  call   08724c50 <__cxa_throw>
082e7c5e +0x0a2:  mov    0x8(%ebp),%eax
082e7c61 +0x0a5:  lea    0x114(%eax),%edx
082e7c67 +0x0ab:  mov    0x8(%ebp),%eax
082e7c6a +0x0ae:  add    $0x110,%eax
082e7c6f +0x0b3:  mov    %edx,0x8(%esp)
082e7c73 +0x0b7:  mov    %eax,0x4(%esp)
082e7c77 +0x0bb:  lea    -0x3c(%ebp),%eax
082e7c7a +0x0be:  mov    %eax,(%esp)
082e7c7d +0x0c1:  call   082f0526 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2aa>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2aa
082e7c82 +0x0c6:  mov    0x8(%ebp),%eax
082e7c85 +0x0c9:  mov    %eax,(%esp)
082e7c88 +0x0cc:  call   082e7ac4 <_ZN11pvp_assault13CAssaultPlace14_SendGiveAlarmEv>  ; pvp_assault::CAssaultPlace::_SendGiveAlarm()
082e7c8d +0x0d1:  mov    0x8(%ebp),%eax
082e7c90 +0x0d4:  mov    %eax,(%esp)
082e7c93 +0x0d7:  call   082e7918 <_ZN11pvp_assault13CAssaultPlace13_SendUserInfoEv>  ; pvp_assault::CAssaultPlace::_SendUserInfo()
082e7c98 +0x0dc:  mov    0x8(%ebp),%eax
082e7c9b +0x0df:  mov    %eax,(%esp)
082e7c9e +0x0e2:  call   082e7a5e <_ZN11pvp_assault13CAssaultPlace18_SendUserUdpIpPortEv>  ; pvp_assault::CAssaultPlace::_SendUserUdpIpPort()
082e7ca3 +0x0e7:  mov    0x8(%ebp),%eax
082e7ca6 +0x0ea:  mov    0x11c(%eax),%edx
082e7cac +0x0f0:  mov    0x8(%ebp),%eax
082e7caf +0x0f3:  mov    0x118(%eax),%eax
082e7cb5 +0x0f9:  mov    %edx,0xc(%esp)
082e7cb9 +0x0fd:  mov    %eax,0x8(%esp)
082e7cbd +0x101:  lea    -0x3c(%ebp),%eax
082e7cc0 +0x104:  mov    %eax,0x4(%esp)
082e7cc4 +0x108:  mov    0x8(%ebp),%eax
082e7cc7 +0x10b:  mov    %eax,(%esp)
082e7cca +0x10e:  call   082e782a <_ZN11pvp_assault13CAssaultPlace9_MoveUserEPNS_12CDispositionEii>  ; pvp_assault::CAssaultPlace::_MoveUser(pvp_assault::CDisposition*, int, int)
082e7ccf +0x113:  mov    0x8(%ebp),%eax
082e7cd2 +0x116:  mov    %eax,(%esp)
082e7cd5 +0x119:  call   082e8300 <_ZN11pvp_assault13CAssaultPlace17_MoveAssaultPlaceEv>  ; pvp_assault::CAssaultPlace::_MoveAssaultPlace()
082e7cda +0x11e:  jmp    082e7cf7 <+0x13b>
082e7cdc +0x120:  mov    %edx,%ebx
082e7cde +0x122:  mov    %eax,%esi
082e7ce0 +0x124:  lea    -0x3c(%ebp),%eax
082e7ce3 +0x127:  mov    %eax,(%esp)
082e7ce6 +0x12a:  call   082f10b0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xe34>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xe34
082e7ceb +0x12f:  mov    %esi,%eax
082e7ced +0x131:  mov    %ebx,%edx
082e7cef +0x133:  mov    %eax,(%esp)
082e7cf2 +0x136:  call   08ae3750 <_Unwind_Resume>
082e7cf7 +0x13b:  lea    -0x3c(%ebp),%eax
082e7cfa +0x13e:  mov    %eax,(%esp)
082e7cfd +0x141:  call   082f10b0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xe34>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xe34
082e7d02 +0x146:  add    $0x50,%esp
082e7d05 +0x149:  pop    %ebx
082e7d06 +0x14a:  pop    %esi
082e7d07 +0x14b:  pop    %ebp
082e7d08 +0x14c:  ret
082e7d09 +0x14d:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_DispositionUser @ 0x82e7bbc

/* pvp_assault::CAssaultPlace::_DispositionUser(CUser**) */

void __thiscall pvp_assault::CAssaultPlace::_DispositionUser(CAssaultPlace *this,CUser **param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  GameWorld *this_00;
  undefined4 *puVar4;
  CStaticDisposition local_40 [44];
  int local_14 [2];
  
  local_14[0] = 0;
  local_14[1] = 0;
  _GetTeamCount(this,local_14);
  CStaticDisposition::CStaticDisposition(local_40,param_1,local_14);
  iVar1 = *(int *)(this + 0x11c);
  iVar2 = *(int *)(this + 0x118);
                    /* try { // try from 082e7c0f to 082e7cd9 has its CatchHandler @ 082e7cdc */
  this_00 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::get_disposition(this_00,iVar2,iVar1,(CDisposition *)local_40);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  CStaticDisposition::GetFlagPoint(local_40,(int *)(this + 0x110),(int *)(this + 0x114));
  _SendGiveAlarm(this);
  _SendUserInfo(this);
  _SendUserUdpIpPort(this);
  _MoveUser(this,(CDisposition *)local_40,*(int *)(this + 0x118),*(int *)(this + 0x11c));
  _MoveAssaultPlace(this);
  CStaticDisposition::~CStaticDisposition(local_40);
  return;
}
```
