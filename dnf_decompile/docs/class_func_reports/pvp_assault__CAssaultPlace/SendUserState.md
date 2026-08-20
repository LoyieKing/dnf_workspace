# SendUserState

`_ZN11pvp_assault13CAssaultPlace13SendUserStateEP5CUser`

`pvp_assault::CAssaultPlace::SendUserState(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e83c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e83c4  _ZN11pvp_assault13CAssaultPlace13SendUserStateEP5CUser
#           pvp_assault::CAssaultPlace::SendUserState(CUser*)
# range [0x082e83c4, 0x082e8499]
082e83c4 +0x00:  push   %ebp
082e83c5 +0x01:  mov    %esp,%ebp
082e83c7 +0x03:  push   %esi
082e83c8 +0x04:  push   %ebx
082e83c9 +0x05:  sub    $0x20,%esp
082e83cc +0x08:  lea    -0x14(%ebp),%eax
082e83cf +0x0b:  mov    %eax,(%esp)
082e83d2 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e83d7 +0x13:  movl   $0x3,0x8(%esp)
082e83df +0x1b:  movl   $0x0,0x4(%esp)
082e83e7 +0x23:  lea    -0x14(%ebp),%eax
082e83ea +0x26:  mov    %eax,(%esp)
082e83ed +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e83f2 +0x2e:  movl   $0x1,0x4(%esp)
082e83fa +0x36:  lea    -0x14(%ebp),%eax
082e83fd +0x39:  mov    %eax,(%esp)
082e8400 +0x3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8405 +0x41:  mov    0x8(%ebp),%eax
082e8408 +0x44:  mov    %eax,(%esp)
082e840b +0x47:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082e8410 +0x4c:  movzwl %ax,%eax
082e8413 +0x4f:  mov    %eax,0x4(%esp)
082e8417 +0x53:  lea    -0x14(%ebp),%eax
082e841a +0x56:  mov    %eax,(%esp)
082e841d +0x59:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8422 +0x5e:  mov    0x8(%ebp),%eax
082e8425 +0x61:  mov    %eax,(%esp)
082e8428 +0x64:  call   082f0e70 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xbf4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xbf4
082e842d +0x69:  mov    %eax,0x4(%esp)
082e8431 +0x6d:  lea    -0x14(%ebp),%eax
082e8434 +0x70:  mov    %eax,(%esp)
082e8437 +0x73:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e843c +0x78:  movl   $0x1,0x4(%esp)
082e8444 +0x80:  lea    -0x14(%ebp),%eax
082e8447 +0x83:  mov    %eax,(%esp)
082e844a +0x86:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e844f +0x8b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082e8454 +0x90:  mov    0x8(%ebp),%edx
082e8457 +0x93:  mov    %edx,0x8(%esp)
082e845b +0x97:  lea    -0x14(%ebp),%edx
082e845e +0x9a:  mov    %edx,0x4(%esp)
082e8462 +0x9e:  mov    %eax,(%esp)
082e8465 +0xa1:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
082e846a +0xa6:  jmp    082e8487 <+0xc3>
082e846c +0xa8:  mov    %edx,%ebx
082e846e +0xaa:  mov    %eax,%esi
082e8470 +0xac:  lea    -0x14(%ebp),%eax
082e8473 +0xaf:  mov    %eax,(%esp)
082e8476 +0xb2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e847b +0xb7:  mov    %esi,%eax
082e847d +0xb9:  mov    %ebx,%edx
082e847f +0xbb:  mov    %eax,(%esp)
082e8482 +0xbe:  call   08ae3750 <_Unwind_Resume>
082e8487 +0xc3:  lea    -0x14(%ebp),%eax
082e848a +0xc6:  mov    %eax,(%esp)
082e848d +0xc9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e8492 +0xce:  add    $0x20,%esp
082e8495 +0xd1:  pop    %ebx
082e8496 +0xd2:  pop    %esi
082e8497 +0xd3:  pop    %ebp
082e8498 +0xd4:  ret
082e8499 +0xd5:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::SendUserState @ 0x82e83c4

/* pvp_assault::CAssaultPlace::SendUserState(CUser*) */

void pvp_assault::CAssaultPlace::SendUserState(CUser *param_1)

{
  uint uVar1;
  int iVar2;
  GameWorld *this;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e83ed to 082e8469 has its CatchHandler @ 082e846c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  uVar1 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar1 & 0xffff);
  iVar2 = CUser::GetUserState(param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,iVar2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_18,param_1);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
