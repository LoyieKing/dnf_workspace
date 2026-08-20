# execute

`_ZN11game_master14CMoveCharacCmd7executeEv`

`game_master::CMoveCharacCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CMoveCharacCmd` | `0x084a8d02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8d02  _ZN11game_master14CMoveCharacCmd7executeEv
#           game_master::CMoveCharacCmd::execute()
# range [0x084a8d02, 0x084a8f69]
084a8d02 +0x000:  push   %ebp
084a8d03 +0x001:  mov    %esp,%ebp
084a8d05 +0x003:  push   %esi
084a8d06 +0x004:  push   %ebx
084a8d07 +0x005:  sub    $0x50,%esp
084a8d0a +0x008:  mov    0x8(%ebp),%eax
084a8d0d +0x00b:  add    $0x8,%eax
084a8d10 +0x00e:  mov    %eax,(%esp)
084a8d13 +0x011:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084a8d18 +0x016:  mov    %eax,%ebx
084a8d1a +0x018:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084a8d1f +0x01d:  mov    %ebx,0x4(%esp)
084a8d23 +0x021:  mov    %eax,(%esp)
084a8d26 +0x024:  call   086c9464 <_ZN9GameWorld24find_user_by_charac_nameEPKc>  ; GameWorld::find_user_by_charac_name(char const*)
084a8d2b +0x029:  mov    %eax,-0x1c(%ebp)
084a8d2e +0x02c:  cmpl   $0x0,-0x1c(%ebp)
084a8d32 +0x030:  je     084a8f62 <+0x260>
084a8d38 +0x036:  mov    -0x1c(%ebp),%eax
084a8d3b +0x039:  mov    %eax,(%esp)
084a8d3e +0x03c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084a8d43 +0x041:  test   %eax,%eax
084a8d45 +0x043:  setne  %al
084a8d48 +0x046:  test   %al,%al
084a8d4a +0x048:  je     084a8f62 <+0x260>
084a8d50 +0x04e:  mov    -0x1c(%ebp),%eax
084a8d53 +0x051:  mov    %eax,(%esp)
084a8d56 +0x054:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
084a8d5b +0x059:  movsbl %al,%eax
084a8d5e +0x05c:  mov    %eax,-0x18(%ebp)
084a8d61 +0x05f:  movl   $0x0,0x4(%esp)
084a8d69 +0x067:  mov    -0x1c(%ebp),%eax
084a8d6c +0x06a:  mov    %eax,(%esp)
084a8d6f +0x06d:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
084a8d74 +0x072:  mov    %eax,-0x14(%ebp)
084a8d77 +0x075:  mov    -0x1c(%ebp),%eax
084a8d7a +0x078:  mov    %eax,(%esp)
084a8d7d +0x07b:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
084a8d82 +0x080:  movzwl %ax,%eax
084a8d85 +0x083:  mov    %eax,-0x10(%ebp)
084a8d88 +0x086:  mov    -0x1c(%ebp),%eax
084a8d8b +0x089:  mov    %eax,(%esp)
084a8d8e +0x08c:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
084a8d93 +0x091:  movzwl %ax,%eax
084a8d96 +0x094:  mov    %eax,-0xc(%ebp)
084a8d99 +0x097:  mov    0x8(%ebp),%eax
084a8d9c +0x09a:  mov    %eax,(%esp)
084a8d9f +0x09d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a8da4 +0x0a2:  mov    %eax,(%esp)
084a8da7 +0x0a5:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
084a8dac +0x0aa:  movsbl %al,%eax
084a8daf +0x0ad:  cmp    -0x18(%ebp),%eax
084a8db2 +0x0b0:  jne    084a8dd4 <+0xd2>
084a8db4 +0x0b2:  mov    0x8(%ebp),%eax
084a8db7 +0x0b5:  mov    %eax,(%esp)
084a8dba +0x0b8:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a8dbf +0x0bd:  movl   $0x0,0x4(%esp)
084a8dc7 +0x0c5:  mov    %eax,(%esp)
084a8dca +0x0c8:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
084a8dcf +0x0cd:  cmp    -0x14(%ebp),%eax
084a8dd2 +0x0d0:  je     084a8ddb <+0xd9>
084a8dd4 +0x0d2:  mov    $0x1,%eax
084a8dd9 +0x0d7:  jmp    084a8de0 <+0xde>
084a8ddb +0x0d9:  mov    $0x0,%eax
084a8de0 +0x0de:  test   %al,%al
084a8de2 +0x0e0:  je     084a8e48 <+0x146>
084a8de4 +0x0e2:  mov    0x8(%ebp),%eax
084a8de7 +0x0e5:  mov    %eax,(%esp)
084a8dea +0x0e8:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a8def +0x0ed:  mov    %eax,%ebx
084a8df1 +0x0ef:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084a8df6 +0x0f4:  movl   $0x0,0x28(%esp)
084a8dfe +0x0fc:  movl   $0x0,0x24(%esp)
084a8e06 +0x104:  movl   $0x0,0x20(%esp)
084a8e0e +0x10c:  movl   $0x0,0x1c(%esp)
084a8e16 +0x114:  movl   $0x0,0x18(%esp)
084a8e1e +0x11c:  mov    -0xc(%ebp),%edx
084a8e21 +0x11f:  mov    %edx,0x14(%esp)
084a8e25 +0x123:  mov    -0x10(%ebp),%edx
084a8e28 +0x126:  mov    %edx,0x10(%esp)
084a8e2c +0x12a:  mov    -0x14(%ebp),%edx
084a8e2f +0x12d:  mov    %edx,0xc(%esp)
084a8e33 +0x131:  mov    -0x18(%ebp),%edx
084a8e36 +0x134:  mov    %edx,0x8(%esp)
084a8e3a +0x138:  mov    %ebx,0x4(%esp)
084a8e3e +0x13c:  mov    %eax,(%esp)
084a8e41 +0x13f:  call   086c5a84 <_ZN9GameWorld9move_areaEP5CUseriiiiibiii>  ; GameWorld::move_area(CUser*, int, int, int, int, int, bool, int, int, int)
084a8e46 +0x144:  jmp    084a8e77 <+0x175>
084a8e48 +0x146:  mov    -0xc(%ebp),%eax
084a8e4b +0x149:  movzwl %ax,%esi
084a8e4e +0x14c:  mov    -0x10(%ebp),%eax
084a8e51 +0x14f:  movzwl %ax,%ebx
084a8e54 +0x152:  mov    0x8(%ebp),%eax
084a8e57 +0x155:  mov    %eax,(%esp)
084a8e5a +0x158:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a8e5f +0x15d:  movl   $0x0,0xc(%esp)
084a8e67 +0x165:  mov    %esi,0x8(%esp)
084a8e6b +0x169:  mov    %ebx,0x4(%esp)
084a8e6f +0x16d:  mov    %eax,(%esp)
084a8e72 +0x170:  call   082f0e2a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xbae>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xbae
084a8e77 +0x175:  lea    -0x28(%ebp),%eax
084a8e7a +0x178:  mov    %eax,(%esp)
084a8e7d +0x17b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084a8e82 +0x180:  movl   $0x8a,0x8(%esp)
084a8e8a +0x188:  movl   $0x0,0x4(%esp)
084a8e92 +0x190:  lea    -0x28(%ebp),%eax
084a8e95 +0x193:  mov    %eax,(%esp)
084a8e98 +0x196:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084a8e9d +0x19b:  mov    0x8(%ebp),%eax
084a8ea0 +0x19e:  mov    %eax,(%esp)
084a8ea3 +0x1a1:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a8ea8 +0x1a6:  mov    %eax,(%esp)
084a8eab +0x1a9:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
084a8eb0 +0x1ae:  movzwl %ax,%eax
084a8eb3 +0x1b1:  mov    %eax,0x4(%esp)
084a8eb7 +0x1b5:  lea    -0x28(%ebp),%eax
084a8eba +0x1b8:  mov    %eax,(%esp)
084a8ebd +0x1bb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084a8ec2 +0x1c0:  mov    -0x10(%ebp),%eax
084a8ec5 +0x1c3:  mov    %eax,0x4(%esp)
084a8ec9 +0x1c7:  lea    -0x28(%ebp),%eax
084a8ecc +0x1ca:  mov    %eax,(%esp)
084a8ecf +0x1cd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084a8ed4 +0x1d2:  mov    -0xc(%ebp),%eax
084a8ed7 +0x1d5:  mov    %eax,0x4(%esp)
084a8edb +0x1d9:  lea    -0x28(%ebp),%eax
084a8ede +0x1dc:  mov    %eax,(%esp)
084a8ee1 +0x1df:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084a8ee6 +0x1e4:  movl   $0x0,0x4(%esp)
084a8eee +0x1ec:  lea    -0x28(%ebp),%eax
084a8ef1 +0x1ef:  mov    %eax,(%esp)
084a8ef4 +0x1f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a8ef9 +0x1f7:  movl   $0x1,0x4(%esp)
084a8f01 +0x1ff:  lea    -0x28(%ebp),%eax
084a8f04 +0x202:  mov    %eax,(%esp)
084a8f07 +0x205:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084a8f0c +0x20a:  cmpl   $0x0,-0x18(%ebp)
084a8f10 +0x20e:  jne    084a8f18 <+0x216>
084a8f12 +0x210:  cmpl   $0x0,-0x14(%ebp)
084a8f16 +0x214:  je     084a8f3a <+0x238>
084a8f18 +0x216:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084a8f1d +0x21b:  lea    -0x28(%ebp),%edx
084a8f20 +0x21e:  mov    %edx,0xc(%esp)
084a8f24 +0x222:  mov    -0x14(%ebp),%edx
084a8f27 +0x225:  mov    %edx,0x8(%esp)
084a8f2b +0x229:  mov    -0x18(%ebp),%edx
084a8f2e +0x22c:  mov    %edx,0x4(%esp)
084a8f32 +0x230:  mov    %eax,(%esp)
084a8f35 +0x233:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
084a8f3a +0x238:  lea    -0x28(%ebp),%eax
084a8f3d +0x23b:  mov    %eax,(%esp)
084a8f40 +0x23e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a8f45 +0x243:  jmp    084a8f62 <+0x260>
084a8f47 +0x245:  mov    %edx,%ebx
084a8f49 +0x247:  mov    %eax,%esi
084a8f4b +0x249:  lea    -0x28(%ebp),%eax
084a8f4e +0x24c:  mov    %eax,(%esp)
084a8f51 +0x24f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a8f56 +0x254:  mov    %esi,%eax
084a8f58 +0x256:  mov    %ebx,%edx
084a8f5a +0x258:  mov    %eax,(%esp)
084a8f5d +0x25b:  call   08ae3750 <_Unwind_Resume>
084a8f62 +0x260:  add    $0x50,%esp
084a8f65 +0x263:  pop    %ebx
084a8f66 +0x264:  pop    %esi
084a8f67 +0x265:  pop    %ebp
084a8f68 +0x266:  ret
084a8f69 +0x267:  nop
```

## 反编译 C

```c
// game_master::CMoveCharacCmd::execute @ 0x84a8d02

/* game_master::CMoveCharacCmd::execute() */

void __thiscall game_master::CMoveCharacCmd::execute(CMoveCharacCmd *this)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  GameWorld *pGVar5;
  int iVar6;
  CUserCharacInfo *this_00;
  CUser *pCVar7;
  uint uVar8;
  PacketGuard local_2c [12];
  CUserCharacInfo *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  
  pcVar4 = (char *)std::string::c_str((string *)(this + 8));
  pGVar5 = (GameWorld *)G_GameWorld();
  local_20 = (CUserCharacInfo *)GameWorld::find_user_by_charac_name(pGVar5,pcVar4);
  if (local_20 == (CUserCharacInfo *)0x0) {
    return;
  }
  iVar6 = CUserCharacInfo::getCurCharacR(local_20);
  if (iVar6 == 0) {
    return;
  }
  cVar3 = CUserCharacInfo::getCurCharacVill(local_20);
  local_1c = (int)cVar3;
  local_18 = CUser::get_area((CUser *)local_20,false);
  local_14 = CUser::get_posX((CUser *)local_20);
  local_14 = local_14 & 0xffff;
  local_10 = CUser::get_posY((CUser *)local_20);
  local_10 = local_10 & 0xffff;
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  cVar3 = CUserCharacInfo::getCurCharacVill(this_00);
  if (cVar3 == local_1c) {
    pCVar7 = (CUser *)CCommand::GetUser((CCommand *)this);
    iVar6 = CUser::get_area(pCVar7,false);
    if (iVar6 == local_18) {
      bVar1 = false;
      goto LAB_084a8de0;
    }
  }
  bVar1 = true;
LAB_084a8de0:
  uVar2 = local_10;
  uVar8 = local_14;
  if (bVar1) {
    pCVar7 = (CUser *)CCommand::GetUser((CCommand *)this);
    pGVar5 = (GameWorld *)G_GameWorld();
    GameWorld::move_area(pGVar5,pCVar7,local_1c,local_18,local_14,local_10,0,false,0,0,0);
  }
  else {
    pCVar7 = (CUser *)CCommand::GetUser((CCommand *)this);
    CUser::set_position(pCVar7,(ushort)uVar8,(ushort)uVar2,'\0');
  }
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084a8e98 to 084a8f39 has its CatchHandler @ 084a8f47 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x8a);
  pCVar7 = (CUser *)CCommand::GetUser((CCommand *)this);
  uVar8 = CUser::get_unique_id(pCVar7);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,uVar8 & 0xffff);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,local_14);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,local_10);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  if ((local_1c != 0) || (local_18 != 0)) {
    pGVar5 = (GameWorld *)G_GameWorld();
    GameWorld::send_to_area(pGVar5,local_1c,local_18,local_2c);
  }
  PacketGuard::~PacketGuard(local_2c);
  return;
}
```
