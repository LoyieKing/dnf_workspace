# CloseAssault

`_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv`

`pvp_assault::CAssaultPlace::CloseAssault()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e9ad6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e9ad6  _ZN11pvp_assault13CAssaultPlace12CloseAssaultEv
#           pvp_assault::CAssaultPlace::CloseAssault()
# range [0x082e9ad6, 0x082ea003]
082e9ad6 +0x000:  push   %ebp
082e9ad7 +0x001:  mov    %esp,%ebp
082e9ad9 +0x003:  push   %esi
082e9ada +0x004:  push   %ebx
082e9adb +0x005:  sub    $0x40,%esp
082e9ade +0x008:  movl   $0x0,-0x28(%ebp)
082e9ae5 +0x00f:  movl   $0x0,-0x24(%ebp)
082e9aec +0x016:  mov    0x8(%ebp),%eax
082e9aef +0x019:  mov    0x100(%eax),%eax
082e9af5 +0x01f:  test   %eax,%eax
082e9af7 +0x021:  jle    082e9e6c <+0x396>
082e9afd +0x027:  movl   $0x0,-0x28(%ebp)
082e9b04 +0x02e:  jmp    082e9e52 <+0x37c>
082e9b09 +0x033:  mov    -0x28(%ebp),%eax
082e9b0c +0x036:  shl    $0x5,%eax
082e9b0f +0x039:  add    0x8(%ebp),%eax
082e9b12 +0x03c:  mov    %eax,(%esp)
082e9b15 +0x03f:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e9b1a +0x044:  test   %al,%al
082e9b1c +0x046:  jne    082e9e4d <+0x377>
082e9b22 +0x04c:  mov    -0x28(%ebp),%eax
082e9b25 +0x04f:  shl    $0x5,%eax
082e9b28 +0x052:  add    0x8(%ebp),%eax
082e9b2b +0x055:  mov    %eax,(%esp)
082e9b2e +0x058:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e9b33 +0x05d:  mov    %eax,-0x20(%ebp)
082e9b36 +0x060:  cmpl   $0x0,-0x20(%ebp)
082e9b3a +0x064:  je     082e9c57 <+0x181>
082e9b40 +0x06a:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9b45 +0x06f:  mov    %eax,(%esp)
082e9b48 +0x072:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e9b4d +0x077:  test   %al,%al
082e9b4f +0x079:  je     082e9b67 <+0x91>
082e9b51 +0x07b:  mov    -0x20(%ebp),%eax
082e9b54 +0x07e:  mov    %eax,(%esp)
082e9b57 +0x081:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e9b5c +0x086:  cmp    $0x7,%al
082e9b5e +0x088:  jne    082e9b67 <+0x91>
082e9b60 +0x08a:  mov    $0x1,%eax
082e9b65 +0x08f:  jmp    082e9b6c <+0x96>
082e9b67 +0x091:  mov    $0x0,%eax
082e9b6c +0x096:  test   %al,%al
082e9b6e +0x098:  je     082e9bbc <+0xe6>
082e9b70 +0x09a:  mov    -0x28(%ebp),%eax
082e9b73 +0x09d:  shl    $0x5,%eax
082e9b76 +0x0a0:  add    0x8(%ebp),%eax
082e9b79 +0x0a3:  mov    %eax,(%esp)
082e9b7c +0x0a6:  call   082f05ae <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x332>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x332
082e9b81 +0x0ab:  xor    $0x1,%eax
082e9b84 +0x0ae:  test   %al,%al
082e9b86 +0x0b0:  je     082e9b93 <+0xbd>
082e9b88 +0x0b2:  mov    -0x20(%ebp),%eax
082e9b8b +0x0b5:  mov    %eax,(%esp)
082e9b8e +0x0b8:  call   082ed6a6 <_ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser>  ; pvp_assault::CAssaultPlace::ForcedMoveAtPowerWarPlace(CUser*)
082e9b93 +0x0bd:  mov    -0x20(%ebp),%eax
082e9b96 +0x0c0:  mov    %eax,(%esp)
082e9b99 +0x0c3:  call   082f09ee <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x772>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x772
082e9b9e +0x0c8:  movzwl %ax,%eax
082e9ba1 +0x0cb:  mov    %eax,0x8(%esp)
082e9ba5 +0x0cf:  mov    -0x20(%ebp),%eax
082e9ba8 +0x0d2:  mov    %eax,0x4(%esp)
082e9bac +0x0d6:  mov    0x8(%ebp),%eax
082e9baf +0x0d9:  mov    %eax,(%esp)
082e9bb2 +0x0dc:  call   082e7b2a <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri>  ; pvp_assault::CAssaultPlace::_SendCloseAssault(CUser*, int)
082e9bb7 +0x0e1:  jmp    082e9c46 <+0x170>
082e9bbc +0x0e6:  mov    -0x20(%ebp),%eax
082e9bbf +0x0e9:  mov    %eax,(%esp)
082e9bc2 +0x0ec:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082e9bc7 +0x0f1:  test   %eax,%eax
082e9bc9 +0x0f3:  setne  %al
082e9bcc +0x0f6:  test   %al,%al
082e9bce +0x0f8:  je     082e9c46 <+0x170>
082e9bd0 +0x0fa:  mov    -0x20(%ebp),%eax
082e9bd3 +0x0fd:  mov    %eax,(%esp)
082e9bd6 +0x100:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
082e9bdb +0x105:  test   %al,%al
082e9bdd +0x107:  je     082e9c0d <+0x137>
082e9bdf +0x109:  movl   $0x64,0x8(%esp)
082e9be7 +0x111:  mov    -0x20(%ebp),%eax
082e9bea +0x114:  mov    %eax,0x4(%esp)
082e9bee +0x118:  mov    0x8(%ebp),%eax
082e9bf1 +0x11b:  mov    %eax,(%esp)
082e9bf4 +0x11e:  call   082e7b2a <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri>  ; pvp_assault::CAssaultPlace::_SendCloseAssault(CUser*, int)
082e9bf9 +0x123:  movzbl %al,%edx
082e9bfc +0x126:  mov    -0x20(%ebp),%eax
082e9bff +0x129:  mov    %edx,0x4(%esp)
082e9c03 +0x12d:  mov    %eax,(%esp)
082e9c06 +0x130:  call   082f0914 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x698>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x698
082e9c0b +0x135:  jmp    082e9c46 <+0x170>
082e9c0d +0x137:  mov    -0x28(%ebp),%eax
082e9c10 +0x13a:  shl    $0x5,%eax
082e9c13 +0x13d:  add    0x8(%ebp),%eax
082e9c16 +0x140:  mov    %eax,(%esp)
082e9c19 +0x143:  call   082e6688 <_ZN11pvp_assault10CAssaulter5GetHpEv>  ; pvp_assault::CAssaulter::GetHp()
082e9c1e +0x148:  mov    %eax,0x8(%esp)
082e9c22 +0x14c:  mov    -0x20(%ebp),%eax
082e9c25 +0x14f:  mov    %eax,0x4(%esp)
082e9c29 +0x153:  mov    0x8(%ebp),%eax
082e9c2c +0x156:  mov    %eax,(%esp)
082e9c2f +0x159:  call   082e7b2a <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri>  ; pvp_assault::CAssaultPlace::_SendCloseAssault(CUser*, int)
082e9c34 +0x15e:  movzbl %al,%edx
082e9c37 +0x161:  mov    -0x20(%ebp),%eax
082e9c3a +0x164:  mov    %edx,0x4(%esp)
082e9c3e +0x168:  mov    %eax,(%esp)
082e9c41 +0x16b:  call   082f0914 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x698>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x698
082e9c46 +0x170:  mov    -0x20(%ebp),%eax
082e9c49 +0x173:  mov    %eax,(%esp)
082e9c4c +0x176:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e9c51 +0x17b:  movsbl %al,%eax
082e9c54 +0x17e:  mov    %eax,-0x24(%ebp)
082e9c57 +0x181:  mov    -0x28(%ebp),%eax
082e9c5a +0x184:  shl    $0x5,%eax
082e9c5d +0x187:  add    0x8(%ebp),%eax
082e9c60 +0x18a:  mov    %eax,(%esp)
082e9c63 +0x18d:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e9c68 +0x192:  movl   $0x0,0x4(%esp)
082e9c70 +0x19a:  mov    %eax,(%esp)
082e9c73 +0x19d:  call   082f0a7a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x7fe>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x7fe
082e9c78 +0x1a2:  mov    -0x28(%ebp),%eax
082e9c7b +0x1a5:  shl    $0x5,%eax
082e9c7e +0x1a8:  add    0x8(%ebp),%eax
082e9c81 +0x1ab:  mov    %eax,(%esp)
082e9c84 +0x1ae:  call   082f05ae <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x332>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x332
082e9c89 +0x1b3:  test   %al,%al
082e9c8b +0x1b5:  je     082e9cb6 <+0x1e0>
082e9c8d +0x1b7:  mov    -0x20(%ebp),%eax
082e9c90 +0x1ba:  mov    %eax,(%esp)
082e9c93 +0x1bd:  call   082f09ee <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x772>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x772
082e9c98 +0x1c2:  cmp    $0x1d,%ax
082e9c9c +0x1c6:  setbe  %al
082e9c9f +0x1c9:  test   %al,%al
082e9ca1 +0x1cb:  je     082e9cb6 <+0x1e0>
082e9ca3 +0x1cd:  mov    -0x20(%ebp),%eax
082e9ca6 +0x1d0:  movl   $0x1e,0x4(%esp)
082e9cae +0x1d8:  mov    %eax,(%esp)
082e9cb1 +0x1db:  call   082f09c4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x748>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x748
082e9cb6 +0x1e0:  mov    -0x28(%ebp),%eax
082e9cb9 +0x1e3:  shl    $0x5,%eax
082e9cbc +0x1e6:  add    0x8(%ebp),%eax
082e9cbf +0x1e9:  mov    %eax,(%esp)
082e9cc2 +0x1ec:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e9cc7 +0x1f1:  mov    0x8(%ebp),%edx
082e9cca +0x1f4:  mov    0x124(%edx),%edx
082e9cd0 +0x1fa:  cmp    %edx,%eax
082e9cd2 +0x1fc:  jne    082e9cfe <+0x228>
082e9cd4 +0x1fe:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9cd9 +0x203:  mov    %eax,(%esp)
082e9cdc +0x206:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e9ce1 +0x20b:  xor    $0x1,%eax
082e9ce4 +0x20e:  test   %al,%al
082e9ce6 +0x210:  je     082e9cfe <+0x228>
082e9ce8 +0x212:  mov    -0x20(%ebp),%eax
082e9ceb +0x215:  mov    %eax,(%esp)
082e9cee +0x218:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e9cf3 +0x21d:  cmp    $0x7,%al
082e9cf5 +0x21f:  je     082e9cfe <+0x228>
082e9cf7 +0x221:  mov    $0x1,%eax
082e9cfc +0x226:  jmp    082e9d03 <+0x22d>
082e9cfe +0x228:  mov    $0x0,%eax
082e9d03 +0x22d:  test   %al,%al
082e9d05 +0x22f:  je     082e9d22 <+0x24c>
082e9d07 +0x231:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082e9d0e +0x238:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082e9d13 +0x23d:  mov    -0x20(%ebp),%edx
082e9d16 +0x240:  mov    %eax,0x4(%esp)
082e9d1a +0x244:  mov    %edx,(%esp)
082e9d1d +0x247:  call   082f0da8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xb2c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xb2c
082e9d22 +0x24c:  movl   $0x0,-0x1c(%ebp)
082e9d29 +0x253:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9d2e +0x258:  mov    %eax,(%esp)
082e9d31 +0x25b:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e9d36 +0x260:  test   %al,%al
082e9d38 +0x262:  jne    082e9d49 <+0x273>
082e9d3a +0x264:  mov    -0x20(%ebp),%eax
082e9d3d +0x267:  mov    %eax,(%esp)
082e9d40 +0x26a:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e9d45 +0x26f:  cmp    $0x7,%al
082e9d47 +0x271:  jne    082e9d50 <+0x27a>
082e9d49 +0x273:  mov    $0x1,%eax
082e9d4e +0x278:  jmp    082e9d55 <+0x27f>
082e9d50 +0x27a:  mov    $0x0,%eax
082e9d55 +0x27f:  test   %al,%al
082e9d57 +0x281:  je     082e9d90 <+0x2ba>
082e9d59 +0x283:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9d5e +0x288:  mov    -0x20(%ebp),%edx
082e9d61 +0x28b:  mov    %edx,0x4(%esp)
082e9d65 +0x28f:  mov    %eax,(%esp)
082e9d68 +0x292:  call   08480ec8 <_ZN13CPowerManager24GetPowerWarResponPenaltyEP5CUser>  ; CPowerManager::GetPowerWarResponPenalty(CUser*)
082e9d6d +0x297:  fstps  -0x18(%ebp)
082e9d70 +0x29a:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9d75 +0x29f:  mov    -0x18(%ebp),%edx
082e9d78 +0x2a2:  mov    %edx,0x8(%esp)
082e9d7c +0x2a6:  mov    -0x20(%ebp),%edx
082e9d7f +0x2a9:  mov    %edx,0x4(%esp)
082e9d83 +0x2ad:  mov    %eax,(%esp)
082e9d86 +0x2b0:  call   08480e92 <_ZN13CPowerManager20GetPowerWarGhostTimeEP5CUserf>  ; CPowerManager::GetPowerWarGhostTime(CUser*, float)
082e9d8b +0x2b5:  mov    %eax,-0x1c(%ebp)
082e9d8e +0x2b8:  jmp    082e9dc5 <+0x2ef>
082e9d90 +0x2ba:  mov    -0x20(%ebp),%eax
082e9d93 +0x2bd:  mov    %eax,(%esp)
082e9d96 +0x2c0:  call   082f0ad8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x85c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x85c
082e9d9b +0x2c5:  mov    %eax,%esi
082e9d9d +0x2c7:  mov    -0x20(%ebp),%eax
082e9da0 +0x2ca:  mov    %eax,(%esp)
082e9da3 +0x2cd:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
082e9da8 +0x2d2:  mov    %eax,%ebx
082e9daa +0x2d4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082e9daf +0x2d9:  add    $0x68,%eax
082e9db2 +0x2dc:  mov    %esi,0x8(%esp)
082e9db6 +0x2e0:  mov    %ebx,0x4(%esp)
082e9dba +0x2e4:  mov    %eax,(%esp)
082e9dbd +0x2e7:  call   08a8c804 <_ZN21ServerParameterScript19getAssaultGhostTimeEii>  ; ServerParameterScript::getAssaultGhostTime(int, int)
082e9dc2 +0x2ec:  mov    %eax,-0x1c(%ebp)
082e9dc5 +0x2ef:  mov    -0x20(%ebp),%eax
082e9dc8 +0x2f2:  mov    %eax,(%esp)
082e9dcb +0x2f5:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
082e9dd0 +0x2fa:  test   %al,%al
082e9dd2 +0x2fc:  je     082e9de1 <+0x30b>
082e9dd4 +0x2fe:  cmpl   $0x0,-0x1c(%ebp)
082e9dd8 +0x302:  je     082e9de1 <+0x30b>
082e9dda +0x304:  mov    $0x1,%eax
082e9ddf +0x309:  jmp    082e9de6 <+0x310>
082e9de1 +0x30b:  mov    $0x0,%eax
082e9de6 +0x310:  test   %al,%al
082e9de8 +0x312:  je     082e9e4e <+0x378>
082e9dea +0x314:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082e9df1 +0x31b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082e9df6 +0x320:  mov    %eax,-0x14(%ebp)
082e9df9 +0x323:  mov    -0x20(%ebp),%eax
082e9dfc +0x326:  mov    -0x14(%ebp),%edx
082e9dff +0x329:  mov    %edx,0x4(%esp)
082e9e03 +0x32d:  mov    %eax,(%esp)
082e9e06 +0x330:  call   082f0c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x988
082e9e0b +0x335:  mov    -0x1c(%ebp),%eax
082e9e0e +0x338:  mov    -0x14(%ebp),%edx
082e9e11 +0x33b:  add    %eax,%edx
082e9e13 +0x33d:  mov    -0x20(%ebp),%eax
082e9e16 +0x340:  mov    %edx,0x4(%esp)
082e9e1a +0x344:  mov    %eax,(%esp)
082e9e1d +0x347:  call   0868eef4 <_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi>  ; CUserCharacInfo::SetCurCharacChaosResponTime(int)
082e9e22 +0x34c:  mov    -0x20(%ebp),%eax
082e9e25 +0x34f:  add    $0x796f4,%eax
082e9e2a +0x354:  mov    %eax,(%esp)
082e9e2d +0x357:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
082e9e32 +0x35c:  mov    -0x1c(%ebp),%eax
082e9e35 +0x35f:  mov    %eax,0x8(%esp)
082e9e39 +0x363:  mov    -0x1c(%ebp),%eax
082e9e3c +0x366:  mov    %eax,0x4(%esp)
082e9e40 +0x36a:  mov    -0x20(%ebp),%eax
082e9e43 +0x36d:  mov    %eax,(%esp)
082e9e46 +0x370:  call   082eff42 <_ZN11pvp_assault11CAssaultMgr15NotifyGhostTimeEP5CUserii>  ; pvp_assault::CAssaultMgr::NotifyGhostTime(CUser*, int, int)
082e9e4b +0x375:  jmp    082e9e4e <+0x378>
082e9e4d +0x377:  nop
082e9e4e +0x378:  addl   $0x1,-0x28(%ebp)
082e9e52 +0x37c:  cmpl   $0x7,-0x28(%ebp)
082e9e56 +0x380:  setle  %al
082e9e59 +0x383:  test   %al,%al
082e9e5b +0x385:  jne    082e9b09 <+0x33>
082e9e61 +0x38b:  mov    0x8(%ebp),%eax
082e9e64 +0x38e:  mov    %eax,(%esp)
082e9e67 +0x391:  call   082e79f6 <_ZN11pvp_assault13CAssaultPlace14_SendUserStateEv>  ; pvp_assault::CAssaultPlace::_SendUserState()
082e9e6c +0x396:  lea    -0x34(%ebp),%eax
082e9e6f +0x399:  mov    %eax,(%esp)
082e9e72 +0x39c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e9e77 +0x3a1:  movl   $0x0,0x8(%esp)
082e9e7f +0x3a9:  lea    -0x34(%ebp),%eax
082e9e82 +0x3ac:  mov    %eax,0x4(%esp)
082e9e86 +0x3b0:  mov    0x8(%ebp),%eax
082e9e89 +0x3b3:  mov    %eax,(%esp)
082e9e8c +0x3b6:  call   082e8afc <_ZN11pvp_assault13CAssaultPlace26_MakeViewAssaultIconPlayerEP11PacketGuardb>  ; pvp_assault::CAssaultPlace::_MakeViewAssaultIconPlayer(PacketGuard*, bool)
082e9e91 +0x3bb:  lea    -0x34(%ebp),%eax
082e9e94 +0x3be:  mov    %eax,0x4(%esp)
082e9e98 +0x3c2:  mov    0x8(%ebp),%eax
082e9e9b +0x3c5:  mov    %eax,(%esp)
082e9e9e +0x3c8:  call   082e6d3a <_ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuard>  ; pvp_assault::CAssaultPlace::_SendPacketToArea(PacketGuard&)
082e9ea3 +0x3cd:  jmp    082e9ec0 <+0x3ea>
082e9ea5 +0x3cf:  mov    %edx,%ebx
082e9ea7 +0x3d1:  mov    %eax,%esi
082e9ea9 +0x3d3:  lea    -0x34(%ebp),%eax
082e9eac +0x3d6:  mov    %eax,(%esp)
082e9eaf +0x3d9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e9eb4 +0x3de:  mov    %esi,%eax
082e9eb6 +0x3e0:  mov    %ebx,%edx
082e9eb8 +0x3e2:  mov    %eax,(%esp)
082e9ebb +0x3e5:  call   08ae3750 <_Unwind_Resume>
082e9ec0 +0x3ea:  lea    -0x34(%ebp),%eax
082e9ec3 +0x3ed:  mov    %eax,(%esp)
082e9ec6 +0x3f0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e9ecb +0x3f5:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9ed0 +0x3fa:  mov    %eax,(%esp)
082e9ed3 +0x3fd:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e9ed8 +0x402:  test   %al,%al
082e9eda +0x404:  je     082e9ee9 <+0x413>
082e9edc +0x406:  cmpl   $0x7,-0x24(%ebp)
082e9ee0 +0x40a:  jne    082e9ee9 <+0x413>
082e9ee2 +0x40c:  mov    $0x1,%eax
082e9ee7 +0x411:  jmp    082e9eee <+0x418>
082e9ee9 +0x413:  mov    $0x0,%eax
082e9eee +0x418:  test   %al,%al
082e9ef0 +0x41a:  je     082e9f90 <+0x4ba>
082e9ef6 +0x420:  mov    0x8(%ebp),%eax
082e9ef9 +0x423:  add    $0x12c,%eax
082e9efe +0x428:  mov    %eax,(%esp)
082e9f01 +0x42b:  call   082f060a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x38e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x38e
082e9f06 +0x430:  mov    %eax,-0x10(%ebp)
082e9f09 +0x433:  cmpl   $0x0,-0x10(%ebp)
082e9f0d +0x437:  je     082e9f43 <+0x46d>
082e9f0f +0x439:  movl   $0x2a,0x4(%esp)
082e9f17 +0x441:  mov    -0x10(%ebp),%eax
082e9f1a +0x444:  mov    %eax,(%esp)
082e9f1d +0x447:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
082e9f22 +0x44c:  mov    %eax,%ebx
082e9f24 +0x44e:  mov    -0x10(%ebp),%eax
082e9f27 +0x451:  mov    %eax,(%esp)
082e9f2a +0x454:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
082e9f2f +0x459:  mov    %ebx,0x8(%esp)
082e9f33 +0x45d:  mov    %eax,0x4(%esp)
082e9f37 +0x461:  movl   $0x3c,(%esp)
082e9f3e +0x468:  call   0863771a <_ZN36TimerCompleteLoadAfterAssaultTimeout15registNextTimerElii>  ; TimerCompleteLoadAfterAssaultTimeout::registNextTimer(long, int, int)
082e9f43 +0x46d:  mov    0x8(%ebp),%eax
082e9f46 +0x470:  add    $0x130,%eax
082e9f4b +0x475:  mov    %eax,(%esp)
082e9f4e +0x478:  call   082f060a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x38e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x38e
082e9f53 +0x47d:  mov    %eax,-0xc(%ebp)
082e9f56 +0x480:  cmpl   $0x0,-0xc(%ebp)
082e9f5a +0x484:  je     082e9f90 <+0x4ba>
082e9f5c +0x486:  movl   $0x2a,0x4(%esp)
082e9f64 +0x48e:  mov    -0xc(%ebp),%eax
082e9f67 +0x491:  mov    %eax,(%esp)
082e9f6a +0x494:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
082e9f6f +0x499:  mov    %eax,%ebx
082e9f71 +0x49b:  mov    -0xc(%ebp),%eax
082e9f74 +0x49e:  mov    %eax,(%esp)
082e9f77 +0x4a1:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
082e9f7c +0x4a6:  mov    %ebx,0x8(%esp)
082e9f80 +0x4aa:  mov    %eax,0x4(%esp)
082e9f84 +0x4ae:  movl   $0x3c,(%esp)
082e9f8b +0x4b5:  call   0863771a <_ZN36TimerCompleteLoadAfterAssaultTimeout15registNextTimerElii>  ; TimerCompleteLoadAfterAssaultTimeout::registNextTimer(long, int, int)
082e9f90 +0x4ba:  movl   $0x0,-0x28(%ebp)
082e9f97 +0x4c1:  jmp    082e9fcf <+0x4f9>
082e9f99 +0x4c3:  mov    -0x28(%ebp),%eax
082e9f9c +0x4c6:  shl    $0x5,%eax
082e9f9f +0x4c9:  add    0x8(%ebp),%eax
082e9fa2 +0x4cc:  mov    %eax,(%esp)
082e9fa5 +0x4cf:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e9faa +0x4d4:  test   %al,%al
082e9fac +0x4d6:  jne    082e9fca <+0x4f4>
082e9fae +0x4d8:  movl   $0x1,0x8(%esp)
082e9fb6 +0x4e0:  mov    -0x28(%ebp),%eax
082e9fb9 +0x4e3:  mov    %eax,0x4(%esp)
082e9fbd +0x4e7:  mov    0x8(%ebp),%eax
082e9fc0 +0x4ea:  mov    %eax,(%esp)
082e9fc3 +0x4ed:  call   082e6e2c <_ZN11pvp_assault13CAssaultPlace8_DelUserEib>  ; pvp_assault::CAssaultPlace::_DelUser(int, bool)
082e9fc8 +0x4f2:  jmp    082e9fcb <+0x4f5>
082e9fca +0x4f4:  nop
082e9fcb +0x4f5:  addl   $0x1,-0x28(%ebp)
082e9fcf +0x4f9:  cmpl   $0x7,-0x28(%ebp)
082e9fd3 +0x4fd:  setle  %al
082e9fd6 +0x500:  test   %al,%al
082e9fd8 +0x502:  jne    082e9f99 <+0x4c3>
082e9fda +0x504:  mov    0x8(%ebp),%eax
082e9fdd +0x507:  mov    0x104(%eax),%eax
082e9fe3 +0x50d:  mov    %eax,%ebx
082e9fe5 +0x50f:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
082e9fea +0x514:  mov    0x8(%ebp),%edx
082e9fed +0x517:  mov    %edx,0x8(%esp)
082e9ff1 +0x51b:  mov    %ebx,0x4(%esp)
082e9ff5 +0x51f:  mov    %eax,(%esp)
082e9ff8 +0x522:  call   082edb6a <_ZN11pvp_assault11CAssaultMgr16FreeAssaultPlaceEiPNS_13CAssaultPlaceE>  ; pvp_assault::CAssaultMgr::FreeAssaultPlace(int, pvp_assault::CAssaultPlace*)
082e9ffd +0x527:  add    $0x40,%esp
082ea000 +0x52a:  pop    %ebx
082ea001 +0x52b:  pop    %esi
082ea002 +0x52c:  pop    %ebp
082ea003 +0x52d:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::CloseAssault @ 0x82e9ad6

/* pvp_assault::CAssaultPlace::CloseAssault() */

void __thiscall pvp_assault::CAssaultPlace::CloseAssault(CAssaultPlace *this)

{
  bool bVar1;
  uchar uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  CUserCharacInfo *this_00;
  int iVar6;
  int iVar7;
  int iVar8;
  CAssaultMgr *this_01;
  longdouble lVar9;
  PacketGuard local_38 [12];
  int local_2c;
  int local_28;
  CUserCharacInfo *local_24;
  int local_20;
  float local_1c;
  int local_18;
  CParty *local_14;
  CParty *local_10;
  
  local_2c = 0;
  local_28 = 0;
  if (0 < *(int *)(this + 0x100)) {
    for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
      cVar3 = CAssaulter::Empty((CAssaulter *)(this + local_2c * 0x20));
      if (cVar3 == '\0') {
        local_24 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_2c * 0x20));
        if (local_24 != (CUserCharacInfo *)0x0) {
          cVar3 = CPowerManager::IsPowerWarEventOn();
          if (cVar3 == '\0') {
LAB_082e9b67:
            bVar1 = false;
          }
          else {
            cVar3 = CUserCharacInfo::getCurCharacVill(local_24);
            if (cVar3 != '\a') goto LAB_082e9b67;
            bVar1 = true;
          }
          if (bVar1) {
            cVar3 = CAssaulter::IsPowerWarWinner((CAssaulter *)(this + local_2c * 0x20));
            if (cVar3 != '\x01') {
              ForcedMoveAtPowerWarPlace((CUser *)local_24);
            }
            uVar5 = CUserCharacInfo::getPowerWarHP(local_24);
            _SendCloseAssault(this,(CUser *)local_24,uVar5 & 0xffff);
          }
          else {
            iVar7 = CUserCharacInfo::getCurCharacR(local_24);
            if (iVar7 != 0) {
              cVar3 = CUserCharacInfo::IsCurCharacGhost(local_24);
              if (cVar3 == '\0') {
                iVar7 = CAssaulter::GetHp((CAssaulter *)(this + local_2c * 0x20));
                uVar2 = _SendCloseAssault(this,(CUser *)local_24,iVar7);
                CUserCharacInfo::setCurCharacStamina(local_24,uVar2);
              }
              else {
                uVar2 = _SendCloseAssault(this,(CUser *)local_24,100);
                CUserCharacInfo::setCurCharacStamina(local_24,uVar2);
              }
            }
          }
          cVar3 = CUserCharacInfo::getCurCharacVill(local_24);
          local_28 = (int)cVar3;
        }
        this_00 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_2c * 0x20));
        CUserCharacInfo::SetAssaultPlace(this_00,0);
        cVar3 = CAssaulter::IsPowerWarWinner((CAssaulter *)(this + local_2c * 0x20));
        if (cVar3 != '\0') {
          uVar4 = CUserCharacInfo::getPowerWarHP(local_24);
          if (uVar4 < 0x1e) {
            CUserCharacInfo::setPowerWarHP(local_24,0x1e);
          }
        }
        iVar7 = CAssaulter::GetTeam((CAssaulter *)(this + local_2c * 0x20));
        if (iVar7 == *(int *)(this + 0x124)) {
          cVar3 = CPowerManager::IsPowerWarEventOn();
          if (cVar3 == '\x01') goto LAB_082e9cfe;
          cVar3 = CUserCharacInfo::getCurCharacVill(local_24);
          if (cVar3 == '\a') goto LAB_082e9cfe;
          bVar1 = true;
        }
        else {
LAB_082e9cfe:
          bVar1 = false;
        }
        if (bVar1) {
          iVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          CUserCharacInfo::SetCurCharacChaosKillTime(local_24,iVar7);
        }
        local_20 = 0;
        cVar3 = CPowerManager::IsPowerWarEventOn();
        if (cVar3 == '\0') {
          cVar3 = CUserCharacInfo::getCurCharacVill(local_24);
          if (cVar3 == '\a') goto LAB_082e9d49;
          bVar1 = false;
        }
        else {
LAB_082e9d49:
          bVar1 = true;
        }
        if (bVar1) {
          lVar9 = (longdouble)
                  CPowerManager::GetPowerWarResponPenalty
                            (GlobalData::s_power_manager,(CUser *)local_24);
          local_1c = (float)lVar9;
          local_20 = CPowerManager::GetPowerWarGhostTime
                               (GlobalData::s_power_manager,(CUser *)local_24,local_1c);
        }
        else {
          iVar7 = CUserCharacInfo::GetCurCharacChaosPoint(local_24);
          iVar8 = CUserCharacInfo::get_charac_level(local_24);
          iVar6 = G_CDataManager();
          local_20 = ServerParameterScript::getAssaultGhostTime
                               ((ServerParameterScript *)(iVar6 + 0x68),iVar8,iVar7);
        }
        cVar3 = CUserCharacInfo::IsCurCharacGhost(local_24);
        if ((cVar3 == '\0') || (local_20 == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          CUserCharacInfo::SetCurCharacChaosDieTime(local_24,local_18);
          CUserCharacInfo::SetCurCharacChaosResponTime(local_24,local_18 + local_20);
          CCharacterView::enableSaveCharacView((CCharacterView *)(local_24 + 0x796f4));
          CAssaultMgr::NotifyGhostTime((CUser *)local_24,local_20,local_20);
        }
      }
    }
    _SendUserState(this);
  }
  PacketGuard::PacketGuard(local_38);
                    /* try { // try from 082e9e8c to 082e9ea2 has its CatchHandler @ 082e9ea5 */
  _MakeViewAssaultIconPlayer(this,local_38,false);
  _SendPacketToArea(this,local_38);
  PacketGuard::~PacketGuard(local_38);
  cVar3 = CPowerManager::IsPowerWarEventOn();
  if ((cVar3 == '\0') || (local_28 != 7)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_14 = (CParty *)PartyInfo::Get((PartyInfo *)(this + 300));
    if (local_14 != (CParty *)0x0) {
      iVar7 = CParty::gen_timer_key(local_14,0x2a);
      iVar8 = CParty::GetPartyIndex(local_14);
      TimerCompleteLoadAfterAssaultTimeout::registNextTimer(0x3c,iVar8,iVar7);
    }
    local_10 = (CParty *)PartyInfo::Get((PartyInfo *)(this + 0x130));
    if (local_10 != (CParty *)0x0) {
      iVar7 = CParty::gen_timer_key(local_10,0x2a);
      iVar8 = CParty::GetPartyIndex(local_10);
      TimerCompleteLoadAfterAssaultTimeout::registNextTimer(0x3c,iVar8,iVar7);
    }
  }
  for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
    cVar3 = CAssaulter::Empty((CAssaulter *)(this + local_2c * 0x20));
    if (cVar3 == '\0') {
      _DelUser(this,local_2c,true);
    }
  }
  iVar7 = *(int *)(this + 0x104);
  this_01 = (CAssaultMgr *)GetInstanceAssaultMgr();
  CAssaultMgr::FreeAssaultPlace(this_01,iVar7,this);
  return;
}
```
