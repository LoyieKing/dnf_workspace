# _ProcessChaos

`_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii`

`pvp_assault::CAssaultPlace::_ProcessChaos(int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ebb9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ebb9c  _ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii
#           pvp_assault::CAssaultPlace::_ProcessChaos(int, int)
# range [0x082ebb9c, 0x082ebd63]
082ebb9c +0x000:  push   %ebp
082ebb9d +0x001:  mov    %esp,%ebp
082ebb9f +0x003:  push   %esi
082ebba0 +0x004:  push   %ebx
082ebba1 +0x005:  sub    $0x30,%esp
082ebba4 +0x008:  cmpl   $0x0,0x10(%ebp)
082ebba8 +0x00c:  js     082ebd5c <+0x1c0>
082ebbae +0x012:  cmpl   $0x7,0x10(%ebp)
082ebbb2 +0x016:  jg     082ebd5c <+0x1c0>
082ebbb8 +0x01c:  mov    0x10(%ebp),%eax
082ebbbb +0x01f:  shl    $0x5,%eax
082ebbbe +0x022:  add    0x8(%ebp),%eax
082ebbc1 +0x025:  mov    %eax,(%esp)
082ebbc4 +0x028:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082ebbc9 +0x02d:  mov    0x8(%ebp),%edx
082ebbcc +0x030:  mov    0x124(%edx),%edx
082ebbd2 +0x036:  cmp    %edx,%eax
082ebbd4 +0x038:  sete   %al
082ebbd7 +0x03b:  test   %al,%al
082ebbd9 +0x03d:  je     082ebd5c <+0x1c0>
082ebbdf +0x043:  mov    0xc(%ebp),%eax
082ebbe2 +0x046:  shl    $0x5,%eax
082ebbe5 +0x049:  add    0x8(%ebp),%eax
082ebbe8 +0x04c:  mov    %eax,(%esp)
082ebbeb +0x04f:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ebbf0 +0x054:  mov    %eax,-0x10(%ebp)
082ebbf3 +0x057:  mov    0x10(%ebp),%eax
082ebbf6 +0x05a:  shl    $0x5,%eax
082ebbf9 +0x05d:  add    0x8(%ebp),%eax
082ebbfc +0x060:  mov    %eax,(%esp)
082ebbff +0x063:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ebc04 +0x068:  mov    %eax,-0xc(%ebp)
082ebc07 +0x06b:  cmpl   $0x0,-0xc(%ebp)
082ebc0b +0x06f:  je     082ebd5c <+0x1c0>
082ebc11 +0x075:  mov    0xc(%ebp),%eax
082ebc14 +0x078:  shl    $0x5,%eax
082ebc17 +0x07b:  add    0x8(%ebp),%eax
082ebc1a +0x07e:  mov    %eax,(%esp)
082ebc1d +0x081:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082ebc22 +0x086:  mov    0x8(%ebp),%edx
082ebc25 +0x089:  movzbl 0x128(%edx,%eax,1),%eax
082ebc2d +0x091:  xor    $0x1,%eax
082ebc30 +0x094:  test   %al,%al
082ebc32 +0x096:  je     082ebd1f <+0x183>
082ebc38 +0x09c:  mov    -0xc(%ebp),%eax
082ebc3b +0x09f:  movl   $0xa,0x4(%esp)
082ebc43 +0x0a7:  mov    %eax,(%esp)
082ebc46 +0x0aa:  call   08645f80 <_ZN15CUserCharacInfo22AddCurCharacChaosPointEi>  ; CUserCharacInfo::AddCurCharacChaosPoint(int)
082ebc4b +0x0af:  mov    -0xc(%ebp),%eax
082ebc4e +0x0b2:  mov    %eax,(%esp)
082ebc51 +0x0b5:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082ebc56 +0x0ba:  test   %eax,%eax
082ebc58 +0x0bc:  setne  %al
082ebc5b +0x0bf:  test   %al,%al
082ebc5d +0x0c1:  je     082ebd1f <+0x183>
082ebc63 +0x0c7:  lea    -0x1c(%ebp),%eax
082ebc66 +0x0ca:  mov    %eax,(%esp)
082ebc69 +0x0cd:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ebc6e +0x0d2:  movl   $0x2,0x8(%esp)
082ebc76 +0x0da:  movl   $0x0,0x4(%esp)
082ebc7e +0x0e2:  lea    -0x1c(%ebp),%eax
082ebc81 +0x0e5:  mov    %eax,(%esp)
082ebc84 +0x0e8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082ebc89 +0x0ed:  movl   $0x0,0x4(%esp)
082ebc91 +0x0f5:  lea    -0x1c(%ebp),%eax
082ebc94 +0x0f8:  mov    %eax,(%esp)
082ebc97 +0x0fb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ebc9c +0x100:  movl   $0x1,0x4(%esp)
082ebca4 +0x108:  lea    -0x1c(%ebp),%eax
082ebca7 +0x10b:  mov    %eax,(%esp)
082ebcaa +0x10e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082ebcaf +0x113:  lea    -0x1c(%ebp),%eax
082ebcb2 +0x116:  movl   $0x0,0x8(%esp)
082ebcba +0x11e:  mov    %eax,0x4(%esp)
082ebcbe +0x122:  mov    -0xc(%ebp),%eax
082ebcc1 +0x125:  mov    %eax,(%esp)
082ebcc4 +0x128:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
082ebcc9 +0x12d:  movl   $0x1,0x4(%esp)
082ebcd1 +0x135:  lea    -0x1c(%ebp),%eax
082ebcd4 +0x138:  mov    %eax,(%esp)
082ebcd7 +0x13b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082ebcdc +0x140:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082ebce1 +0x145:  mov    -0xc(%ebp),%edx
082ebce4 +0x148:  mov    %edx,0x8(%esp)
082ebce8 +0x14c:  lea    -0x1c(%ebp),%edx
082ebceb +0x14f:  mov    %edx,0x4(%esp)
082ebcef +0x153:  mov    %eax,(%esp)
082ebcf2 +0x156:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
082ebcf7 +0x15b:  jmp    082ebd14 <+0x178>
082ebcf9 +0x15d:  mov    %edx,%ebx
082ebcfb +0x15f:  mov    %eax,%esi
082ebcfd +0x161:  lea    -0x1c(%ebp),%eax
082ebd00 +0x164:  mov    %eax,(%esp)
082ebd03 +0x167:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ebd08 +0x16c:  mov    %esi,%eax
082ebd0a +0x16e:  mov    %ebx,%edx
082ebd0c +0x170:  mov    %eax,(%esp)
082ebd0f +0x173:  call   08ae3750 <_Unwind_Resume>
082ebd14 +0x178:  lea    -0x1c(%ebp),%eax
082ebd17 +0x17b:  mov    %eax,(%esp)
082ebd1a +0x17e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ebd1f +0x183:  cmpl   $0x0,-0x10(%ebp)
082ebd23 +0x187:  je     082ebd5c <+0x1c0>
082ebd25 +0x189:  mov    -0x10(%ebp),%eax
082ebd28 +0x18c:  mov    %eax,(%esp)
082ebd2b +0x18f:  call   082f0ad8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x85c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x85c
082ebd30 +0x194:  test   %eax,%eax
082ebd32 +0x196:  setg   %al
082ebd35 +0x199:  test   %al,%al
082ebd37 +0x19b:  je     082ebd46 <+0x1aa>
082ebd39 +0x19d:  mov    -0xc(%ebp),%eax
082ebd3c +0x1a0:  mov    %eax,(%esp)
082ebd3f +0x1a3:  call   082f0c64 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x9e8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x9e8
082ebd44 +0x1a8:  jmp    082ebd51 <+0x1b5>
082ebd46 +0x1aa:  mov    -0xc(%ebp),%eax
082ebd49 +0x1ad:  mov    %eax,(%esp)
082ebd4c +0x1b0:  call   082f0c94 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xa18>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xa18
082ebd51 +0x1b5:  mov    -0x10(%ebp),%eax
082ebd54 +0x1b8:  mov    %eax,(%esp)
082ebd57 +0x1bb:  call   082f0cc4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xa48>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xa48
082ebd5c +0x1c0:  add    $0x30,%esp
082ebd5f +0x1c3:  pop    %ebx
082ebd60 +0x1c4:  pop    %esi
082ebd61 +0x1c5:  pop    %ebp
082ebd62 +0x1c6:  ret
082ebd63 +0x1c7:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_ProcessChaos @ 0x82ebb9c

/* pvp_assault::CAssaultPlace::_ProcessChaos(int, int) */

void __thiscall
pvp_assault::CAssaultPlace::_ProcessChaos(CAssaultPlace *this,int param_1,int param_2)

{
  int iVar1;
  GameWorld *this_00;
  PacketGuard local_20 [12];
  CUserCharacInfo *local_14;
  CUserCharacInfo *local_10;
  
  if ((-1 < param_2) && (param_2 < 8)) {
    iVar1 = CAssaulter::GetTeam((CAssaulter *)(this + param_2 * 0x20));
    if (iVar1 == *(int *)(this + 0x124)) {
      local_14 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + param_1 * 0x20));
      local_10 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + param_2 * 0x20));
      if (local_10 != (CUserCharacInfo *)0x0) {
        iVar1 = CAssaulter::GetTeam((CAssaulter *)(this + param_1 * 0x20));
        if (this[iVar1 + 0x128] != (CAssaultPlace)0x1) {
          CUserCharacInfo::AddCurCharacChaosPoint(local_10,10);
          iVar1 = CUserCharacInfo::getCurCharacR(local_10);
          if (iVar1 != 0) {
            PacketGuard::PacketGuard(local_20);
                    /* try { // try from 082ebc84 to 082ebcf6 has its CatchHandler @ 082ebcf9 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,2);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
            CUser::make_basic_info((CUser *)local_10,(char *)local_20,'\0');
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
            this_00 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(this_00,local_20,(CUser *)local_10);
            PacketGuard::~PacketGuard(local_20);
          }
        }
        if (local_14 != (CUserCharacInfo *)0x0) {
          iVar1 = CUserCharacInfo::GetCurCharacChaosPoint(local_14);
          if (iVar1 < 1) {
            CUserCharacInfo::IncCurCharacChaosKillCount(local_10);
          }
          else {
            CUserCharacInfo::IncCurCharacChaosModeCount(local_10);
          }
          CUserCharacInfo::IncCurCharacChaosDieCount(local_14);
        }
      }
    }
  }
  return;
}
```
