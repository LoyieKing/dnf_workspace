# _SendPowerWarPointToGuildServer

`_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii`

`pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082eceb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082eceb2  _ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii
#           pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)
# range [0x082eceb2, 0x082ed3fd]
082eceb2 +0x000:  push   %ebp
082eceb3 +0x001:  mov    %esp,%ebp
082eceb5 +0x003:  push   %edi
082eceb6 +0x004:  push   %esi
082eceb7 +0x005:  push   %ebx
082eceb8 +0x006:  sub    $0x9c,%esp
082ecebe +0x00c:  movl   $0x0,-0x2c(%ebp)
082ecec5 +0x013:  cmpl   $0x0,0xc(%ebp)
082ecec9 +0x017:  jne    082ecf18 <+0x66>
082ececb +0x019:  mov    0x10(%ebp),%eax
082ecece +0x01c:  mov    0x1c(%ebp),%edx
082eced1 +0x01f:  mov    %edx,0x20(%esp)
082eced5 +0x023:  mov    0x18(%ebp),%edx
082eced8 +0x026:  mov    %edx,0x1c(%esp)
082ecedc +0x02a:  mov    0x14(%ebp),%edx
082ecedf +0x02d:  mov    %edx,0x18(%esp)
082ecee3 +0x031:  mov    %eax,0x14(%esp)
082ecee7 +0x035:  movl   $"Invalid User pointer income (%d, %d, %d, %d)",0x10(%esp)
082eceef +0x03d:  movl   $0xf4c,0xc(%esp)
082ecef7 +0x045:  movl   $&_ZZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiiiE19__PRETTY_FUNCTION__,0x8(%esp)
082eceff +0x04d:  movl   $"Assault.cpp",0x4(%esp)
082ecf07 +0x055:  movl   $0x1,(%esp)
082ecf0e +0x05c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082ecf13 +0x061:  jmp    082ed3f2 <+0x540>
082ecf18 +0x066:  lea    -0x69(%ebp),%eax
082ecf1b +0x069:  mov    %eax,(%esp)
082ecf1e +0x06c:  call   082f070c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x490>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x490
082ecf23 +0x071:  cmpl   $0x1,0x10(%ebp)
082ecf27 +0x075:  jne    082ecf39 <+0x87>
082ecf29 +0x077:  mov    0xc(%ebp),%eax
082ecf2c +0x07a:  mov    %eax,(%esp)
082ecf2f +0x07d:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ecf34 +0x082:  mov    %al,-0x5f(%ebp)
082ecf37 +0x085:  jmp    082ecf57 <+0xa5>
082ecf39 +0x087:  mov    0xc(%ebp),%eax
082ecf3c +0x08a:  mov    %eax,(%esp)
082ecf3f +0x08d:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ecf44 +0x092:  cmp    $0x1,%al
082ecf46 +0x094:  jne    082ecf4f <+0x9d>
082ecf48 +0x096:  mov    $0x2,%eax
082ecf4d +0x09b:  jmp    082ecf54 <+0xa2>
082ecf4f +0x09d:  mov    $0x1,%eax
082ecf54 +0x0a2:  mov    %al,-0x5f(%ebp)
082ecf57 +0x0a5:  mov    0x1c(%ebp),%eax
082ecf5a +0x0a8:  mov    0x14(%ebp),%edx
082ecf5d +0x0ab:  mov    %edx,%ecx
082ecf5f +0x0ad:  sub    %eax,%ecx
082ecf61 +0x0af:  mov    %ecx,%eax
082ecf63 +0x0b1:  test   %eax,%eax
082ecf65 +0x0b3:  jns    082ecfa7 <+0xf5>
082ecf67 +0x0b5:  mov    0x1c(%ebp),%eax
082ecf6a +0x0b8:  mov    %eax,0x18(%esp)
082ecf6e +0x0bc:  mov    0x14(%ebp),%eax
082ecf71 +0x0bf:  mov    %eax,0x14(%esp)
082ecf75 +0x0c3:  movl   $"Power War Point Computer Error( winCnt : %d, winAliveCnt : %d )",0x10(%esp)
082ecf7d +0x0cb:  movl   $0xf5c,0xc(%esp)
082ecf85 +0x0d3:  movl   $&_ZZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiiiE19__PRETTY_FUNCTION__,0x8(%esp)
082ecf8d +0x0db:  movl   $"Assault.cpp",0x4(%esp)
082ecf95 +0x0e3:  movl   $0x1,(%esp)
082ecf9c +0x0ea:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082ecfa1 +0x0ef:  mov    0x14(%ebp),%eax
082ecfa4 +0x0f2:  mov    %eax,0x1c(%ebp)
082ecfa7 +0x0f5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ecfac +0x0fa:  mov    0xa67c(%eax),%eax
082ecfb2 +0x100:  mov    0x1c(%ebp),%edx
082ecfb5 +0x103:  mov    0x14(%ebp),%ecx
082ecfb8 +0x106:  mov    %ecx,%ebx
082ecfba +0x108:  sub    %edx,%ebx
082ecfbc +0x10a:  mov    %ebx,%edx
082ecfbe +0x10c:  imul   %edx,%eax
082ecfc1 +0x10f:  cmp    $0xff,%eax
082ecfc6 +0x114:  setg   %al
082ecfc9 +0x117:  test   %al,%al
082ecfcb +0x119:  je     082ed01c <+0x16a>
082ecfcd +0x11b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ecfd2 +0x120:  mov    0xa67c(%eax),%eax
082ecfd8 +0x126:  mov    %eax,0x1c(%esp)
082ecfdc +0x12a:  mov    0x1c(%ebp),%eax
082ecfdf +0x12d:  mov    %eax,0x18(%esp)
082ecfe3 +0x131:  mov    0x14(%ebp),%eax
082ecfe6 +0x134:  mov    %eax,0x14(%esp)
082ecfea +0x138:  movl   $"Power War Point Computer Error( winCnt : %d, winAliveCnt : %d , multiple n : %d)",0x10(%esp)
082ecff2 +0x140:  movl   $0xf62,0xc(%esp)
082ecffa +0x148:  movl   $&_ZZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiiiE19__PRETTY_FUNCTION__,0x8(%esp)
082ed002 +0x150:  movl   $"Assault.cpp",0x4(%esp)
082ed00a +0x158:  movl   $0x1,(%esp)
082ed011 +0x15f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082ed016 +0x164:  movb   $0xff,-0x3d(%ebp)
082ed01a +0x168:  jmp    082ed039 <+0x187>
082ed01c +0x16a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ed021 +0x16f:  mov    0xa67c(%eax),%eax
082ed027 +0x175:  mov    0x1c(%ebp),%edx
082ed02a +0x178:  mov    0x14(%ebp),%ecx
082ed02d +0x17b:  mov    %ecx,%ebx
082ed02f +0x17d:  sub    %edx,%ebx
082ed031 +0x17f:  mov    %ebx,%edx
082ed033 +0x181:  imul   %edx,%eax
082ed036 +0x184:  mov    %al,-0x3d(%ebp)
082ed039 +0x187:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ed03e +0x18c:  mov    0xa67c(%eax),%eax
082ed044 +0x192:  imul   0x18(%ebp),%eax
082ed048 +0x196:  cmp    $0xff,%eax
082ed04d +0x19b:  setg   %al
082ed050 +0x19e:  test   %al,%al
082ed052 +0x1a0:  je     082ed0a3 <+0x1f1>
082ed054 +0x1a2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ed059 +0x1a7:  mov    0xa67c(%eax),%eax
082ed05f +0x1ad:  mov    %eax,0x1c(%esp)
082ed063 +0x1b1:  mov    0x1c(%ebp),%eax
082ed066 +0x1b4:  mov    %eax,0x18(%esp)
082ed06a +0x1b8:  mov    0x14(%ebp),%eax
082ed06d +0x1bb:  mov    %eax,0x14(%esp)
082ed071 +0x1bf:  movl   $"Power War Point Computer Error( winCnt : %d, winAliveCnt : %d , multiple n : %d )",0x10(%esp)
082ed079 +0x1c7:  movl   $0xf6a,0xc(%esp)
082ed081 +0x1cf:  movl   $&_ZZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiiiE19__PRETTY_FUNCTION__,0x8(%esp)
082ed089 +0x1d7:  movl   $"Assault.cpp",0x4(%esp)
082ed091 +0x1df:  movl   $0x1,(%esp)
082ed098 +0x1e6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082ed09d +0x1eb:  movb   $0xff,-0x3e(%ebp)
082ed0a1 +0x1ef:  jmp    082ed0b7 <+0x205>
082ed0a3 +0x1f1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ed0a8 +0x1f6:  mov    0xa67c(%eax),%eax
082ed0ae +0x1fc:  mov    0x18(%ebp),%edx
082ed0b1 +0x1ff:  imul   %edx,%eax
082ed0b4 +0x202:  mov    %al,-0x3e(%ebp)
082ed0b7 +0x205:  movzbl -0x5f(%ebp),%eax
082ed0bb +0x209:  movsbl %al,%eax
082ed0be +0x20c:  mov    %eax,0x8(%esp)
082ed0c2 +0x210:  mov    0xc(%ebp),%eax
082ed0c5 +0x213:  mov    %eax,0x4(%esp)
082ed0c9 +0x217:  mov    0x8(%ebp),%eax
082ed0cc +0x21a:  mov    %eax,(%esp)
082ed0cf +0x21d:  call   082ec89c <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc>  ; pvp_assault::CAssaultPlace::_VictoryBonus(CUser*, char)
082ed0d4 +0x222:  mov    %eax,-0x28(%ebp)
082ed0d7 +0x225:  movzbl -0x3e(%ebp),%edx
082ed0db +0x229:  mov    -0x28(%ebp),%eax
082ed0de +0x22c:  lea    (%edx,%eax,1),%eax
082ed0e1 +0x22f:  mov    %al,-0x3e(%ebp)
082ed0e4 +0x232:  movl   $0x0,-0x24(%ebp)
082ed0eb +0x239:  movl   $0x0,-0x20(%ebp)
082ed0f2 +0x240:  movl   $0x0,-0x1c(%ebp)
082ed0f9 +0x247:  jmp    082ed2ff <+0x44d>
082ed0fe +0x24c:  mov    -0x1c(%ebp),%eax
082ed101 +0x24f:  shl    $0x5,%eax
082ed104 +0x252:  add    0x8(%ebp),%eax
082ed107 +0x255:  mov    %eax,(%esp)
082ed10a +0x258:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082ed10f +0x25d:  test   %al,%al
082ed111 +0x25f:  jne    082ed2f7 <+0x445>
082ed117 +0x265:  mov    -0x1c(%ebp),%eax
082ed11a +0x268:  shl    $0x5,%eax
082ed11d +0x26b:  add    0x8(%ebp),%eax
082ed120 +0x26e:  mov    %eax,(%esp)
082ed123 +0x271:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ed128 +0x276:  mov    %eax,-0x2c(%ebp)
082ed12b +0x279:  cmpl   $0x0,-0x2c(%ebp)
082ed12f +0x27d:  je     082ed2fa <+0x448>
082ed135 +0x283:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082ed13c +0x28a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082ed141 +0x28f:  mov    0x8(%ebp),%edx
082ed144 +0x292:  mov    0x13c(%edx),%edx
082ed14a +0x298:  sub    %edx,%eax
082ed14c +0x29a:  mov    %eax,%ebx
082ed14e +0x29c:  movzbl -0x5f(%ebp),%eax
082ed152 +0x2a0:  movzbl %al,%esi
082ed155 +0x2a3:  mov    -0x2c(%ebp),%eax
082ed158 +0x2a6:  mov    %eax,(%esp)
082ed15b +0x2a9:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ed160 +0x2ae:  movsbl %al,%eax
082ed163 +0x2b1:  cmp    %eax,%esi
082ed165 +0x2b3:  sete   %al
082ed168 +0x2b6:  movzbl %al,%eax
082ed16b +0x2b9:  mov    -0x2c(%ebp),%edx
082ed16e +0x2bc:  add    $0x79700,%edx
082ed174 +0x2c2:  mov    %ebx,0xc(%esp)
082ed178 +0x2c6:  mov    %eax,0x8(%esp)
082ed17c +0x2ca:  movl   $0x1,0x4(%esp)
082ed184 +0x2d2:  mov    %edx,(%esp)
082ed187 +0x2d5:  call   0868642e <_ZN15cUserHistoryLog6EndPvPE23ENUM_PVP_HISTORY_REASONbj>  ; cUserHistoryLog::EndPvP(ENUM_PVP_HISTORY_REASON, bool, unsigned int)
082ed18c +0x2da:  mov    -0x2c(%ebp),%eax
082ed18f +0x2dd:  mov    %eax,(%esp)
082ed192 +0x2e0:  call   082f0dc6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xb4a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xb4a
082ed197 +0x2e5:  movzbl -0x5f(%ebp),%eax
082ed19b +0x2e9:  movzbl %al,%ebx
082ed19e +0x2ec:  mov    -0x2c(%ebp),%eax
082ed1a1 +0x2ef:  mov    %eax,(%esp)
082ed1a4 +0x2f2:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ed1a9 +0x2f7:  movsbl %al,%eax
082ed1ac +0x2fa:  cmp    %eax,%ebx
082ed1ae +0x2fc:  sete   %al
082ed1b1 +0x2ff:  test   %al,%al
082ed1b3 +0x301:  je     082ed25f <+0x3ad>
082ed1b9 +0x307:  mov    -0x2c(%ebp),%eax
082ed1bc +0x30a:  mov    %eax,(%esp)
082ed1bf +0x30d:  call   082f0df8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xb7c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xb7c
082ed1c4 +0x312:  movzbl -0x3e(%ebp),%eax
082ed1c8 +0x316:  movzbl %al,%edx
082ed1cb +0x319:  mov    -0x2c(%ebp),%eax
082ed1ce +0x31c:  mov    %edx,0x4(%esp)
082ed1d2 +0x320:  mov    %eax,(%esp)
082ed1d5 +0x323:  call   08687efc <_ZN15CUserCharacInfo21IncreasePowerWarPointEs>  ; CUserCharacInfo::IncreasePowerWarPoint(short)
082ed1da +0x328:  cmpl   $0x3,-0x24(%ebp)
082ed1de +0x32c:  jle    082ed21f <+0x36d>
082ed1e0 +0x32e:  mov    -0x20(%ebp),%eax
082ed1e3 +0x331:  mov    %eax,0x18(%esp)
082ed1e7 +0x335:  mov    -0x24(%ebp),%eax
082ed1ea +0x338:  mov    %eax,0x14(%esp)
082ed1ee +0x33c:  movl   $"Power War Point Computer Error( winner index : %d, loser index : %d )",0x10(%esp)
082ed1f6 +0x344:  movl   $0xf94,0xc(%esp)
082ed1fe +0x34c:  movl   $&_ZZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiiiE19__PRETTY_FUNCTION__,0x8(%esp)
082ed206 +0x354:  movl   $"Assault.cpp",0x4(%esp)
082ed20e +0x35c:  movl   $0x1,(%esp)
082ed215 +0x363:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082ed21a +0x368:  jmp    082ed2fb <+0x449>
082ed21f +0x36d:  mov    -0x24(%ebp),%ebx
082ed222 +0x370:  movl   $0xffffffff,0x4(%esp)
082ed22a +0x378:  mov    -0x2c(%ebp),%eax
082ed22d +0x37b:  mov    %eax,(%esp)
082ed230 +0x37e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
082ed235 +0x383:  mov    %eax,-0x5e(%ebp,%ebx,4)
082ed239 +0x387:  addl   $0x1,-0x24(%ebp)
082ed23d +0x38b:  movzbl -0x3e(%ebp),%eax
082ed241 +0x38f:  movzbl %al,%eax
082ed244 +0x392:  mov    %eax,0x8(%esp)
082ed248 +0x396:  mov    -0x2c(%ebp),%eax
082ed24b +0x399:  mov    %eax,0x4(%esp)
082ed24f +0x39d:  mov    0x8(%ebp),%eax
082ed252 +0x3a0:  mov    %eax,(%esp)
082ed255 +0x3a3:  call   082ec808 <_ZN11pvp_assault13CAssaultPlace32_SendPowerWarAssaultResultToUserEP5CUseri>  ; pvp_assault::CAssaultPlace::_SendPowerWarAssaultResultToUser(CUser*, int)
082ed25a +0x3a8:  jmp    082ed2fb <+0x449>
082ed25f +0x3ad:  movzbl -0x3d(%ebp),%eax
082ed263 +0x3b1:  movzbl %al,%edx
082ed266 +0x3b4:  mov    -0x2c(%ebp),%eax
082ed269 +0x3b7:  mov    %edx,0x4(%esp)
082ed26d +0x3bb:  mov    %eax,(%esp)
082ed270 +0x3be:  call   08687efc <_ZN15CUserCharacInfo21IncreasePowerWarPointEs>  ; CUserCharacInfo::IncreasePowerWarPoint(short)
082ed275 +0x3c3:  cmpl   $0x3,-0x20(%ebp)
082ed279 +0x3c7:  jle    082ed2b7 <+0x405>
082ed27b +0x3c9:  mov    -0x20(%ebp),%eax
082ed27e +0x3cc:  mov    %eax,0x18(%esp)
082ed282 +0x3d0:  mov    -0x24(%ebp),%eax
082ed285 +0x3d3:  mov    %eax,0x14(%esp)
082ed289 +0x3d7:  movl   $"Power War Point Computer Error( winner index : %d, loser index : %d )",0x10(%esp)
082ed291 +0x3df:  movl   $0xfa4,0xc(%esp)
082ed299 +0x3e7:  movl   $&_ZZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiiiE19__PRETTY_FUNCTION__,0x8(%esp)
082ed2a1 +0x3ef:  movl   $"Assault.cpp",0x4(%esp)
082ed2a9 +0x3f7:  movl   $0x1,(%esp)
082ed2b0 +0x3fe:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082ed2b5 +0x403:  jmp    082ed2fb <+0x449>
082ed2b7 +0x405:  mov    -0x20(%ebp),%ebx
082ed2ba +0x408:  movl   $0xffffffff,0x4(%esp)
082ed2c2 +0x410:  mov    -0x2c(%ebp),%eax
082ed2c5 +0x413:  mov    %eax,(%esp)
082ed2c8 +0x416:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
082ed2cd +0x41b:  lea    0x4(%ebx),%edx
082ed2d0 +0x41e:  mov    %eax,-0x5e(%ebp,%edx,4)
082ed2d4 +0x422:  addl   $0x1,-0x20(%ebp)
082ed2d8 +0x426:  movzbl -0x3d(%ebp),%eax
082ed2dc +0x42a:  movzbl %al,%eax
082ed2df +0x42d:  mov    %eax,0x8(%esp)
082ed2e3 +0x431:  mov    -0x2c(%ebp),%eax
082ed2e6 +0x434:  mov    %eax,0x4(%esp)
082ed2ea +0x438:  mov    0x8(%ebp),%eax
082ed2ed +0x43b:  mov    %eax,(%esp)
082ed2f0 +0x43e:  call   082ec808 <_ZN11pvp_assault13CAssaultPlace32_SendPowerWarAssaultResultToUserEP5CUseri>  ; pvp_assault::CAssaultPlace::_SendPowerWarAssaultResultToUser(CUser*, int)
082ed2f5 +0x443:  jmp    082ed2fb <+0x449>
082ed2f7 +0x445:  nop
082ed2f8 +0x446:  jmp    082ed2fb <+0x449>
082ed2fa +0x448:  nop
082ed2fb +0x449:  addl   $0x1,-0x1c(%ebp)
082ed2ff +0x44d:  cmpl   $0x7,-0x1c(%ebp)
082ed303 +0x451:  setle  %al
082ed306 +0x454:  test   %al,%al
082ed308 +0x456:  jne    082ed0fe <+0x24c>
082ed30e +0x45c:  movzbl -0x3d(%ebp),%eax
082ed312 +0x460:  movzbl %al,%edi
082ed315 +0x463:  movzbl -0x3e(%ebp),%eax
082ed319 +0x467:  movzbl %al,%esi
082ed31c +0x46a:  movzbl -0x5f(%ebp),%eax
082ed320 +0x46e:  movzbl %al,%ebx
082ed323 +0x471:  movl   $0x0,0xc(%esp)
082ed32b +0x479:  movl   $0xfad,0x8(%esp)
082ed333 +0x481:  movl   $&_ZZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiiiE19__PRETTY_FUNCTION__,0x4(%esp)
082ed33b +0x489:  lea    -0x3c(%ebp),%eax
082ed33e +0x48c:  mov    %eax,(%esp)
082ed341 +0x48f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ed346 +0x494:  mov    0x1c(%ebp),%eax
082ed349 +0x497:  mov    %eax,0x1c(%esp)
082ed34d +0x49b:  mov    %edi,0x18(%esp)
082ed351 +0x49f:  mov    0x18(%ebp),%eax
082ed354 +0x4a2:  mov    %eax,0x14(%esp)
082ed358 +0x4a6:  mov    %esi,0x10(%esp)
082ed35c +0x4aa:  mov    0x14(%ebp),%eax
082ed35f +0x4ad:  mov    %eax,0xc(%esp)
082ed363 +0x4b1:  mov    %ebx,0x8(%esp)
082ed367 +0x4b5:  movl   $"win side(%d), win pp(%d, %d), lose pp(%d, %d), winAliveCnt(%d)",0x4(%esp)
082ed36f +0x4bd:  lea    -0x3c(%ebp),%eax
082ed372 +0x4c0:  mov    %eax,(%esp)
082ed375 +0x4c3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ed37a +0x4c8:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
082ed37f +0x4cd:  movl   $0x0,0x4(%esp)
082ed387 +0x4d5:  mov    %eax,(%esp)
082ed38a +0x4d8:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
082ed38f +0x4dd:  lea    -0x69(%ebp),%edx
082ed392 +0x4e0:  mov    %edx,0x4(%esp)
082ed396 +0x4e4:  mov    %eax,(%esp)
082ed399 +0x4e7:  call   0846e460 <_ZN17CGuildServerProxy17SendPowerWarPointER35Packet_Guild_Change_Power_War_Point>  ; CGuildServerProxy::SendPowerWarPoint(Packet_Guild_Change_Power_War_Point&)
082ed39e +0x4ec:  movzbl -0x3e(%ebp),%eax
082ed3a2 +0x4f0:  movzbl %al,%ecx
082ed3a5 +0x4f3:  movzbl -0x5f(%ebp),%eax
082ed3a9 +0x4f7:  movsbl %al,%edx
082ed3ac +0x4fa:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ed3b1 +0x4ff:  mov    %ecx,0x8(%esp)
082ed3b5 +0x503:  mov    %edx,0x4(%esp)
082ed3b9 +0x507:  mov    %eax,(%esp)
082ed3bc +0x50a:  call   084801a2 <_ZN13CPowerManager29IncreaePowerWarPointInChannelEci>  ; CPowerManager::IncreaePowerWarPointInChannel(char, int)
082ed3c1 +0x50f:  movzbl -0x3d(%ebp),%eax
082ed3c5 +0x513:  movzbl %al,%ecx
082ed3c8 +0x516:  movzbl -0x5f(%ebp),%eax
082ed3cc +0x51a:  cmp    $0x1,%al
082ed3ce +0x51c:  jne    082ed3d7 <+0x525>
082ed3d0 +0x51e:  mov    $0x2,%eax
082ed3d5 +0x523:  jmp    082ed3dc <+0x52a>
082ed3d7 +0x525:  mov    $0x1,%eax
082ed3dc +0x52a:  mov    &_ZN10GlobalData15s_power_managerE,%edx
082ed3e2 +0x530:  mov    %ecx,0x8(%esp)
082ed3e6 +0x534:  mov    %eax,0x4(%esp)
082ed3ea +0x538:  mov    %edx,(%esp)
082ed3ed +0x53b:  call   084801a2 <_ZN13CPowerManager29IncreaePowerWarPointInChannelEci>  ; CPowerManager::IncreaePowerWarPointInChannel(char, int)
082ed3f2 +0x540:  add    $0x9c,%esp
082ed3f8 +0x546:  pop    %ebx
082ed3f9 +0x547:  pop    %esi
082ed3fa +0x548:  pop    %edi
082ed3fb +0x549:  pop    %ebp
082ed3fc +0x54a:  ret
082ed3fd +0x54b:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer @ 0x82eceb2

/* pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*,
   ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int) */

void __thiscall
pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer
          (CAssaultPlace *this,CUser *param_1,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  CGuildServerProxy *this_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  Packet_Guild_Change_Power_War_Point local_6d [10];
  byte local_63;
  undefined4 auStack_62 [8];
  byte local_42;
  byte local_41;
  cMyTrace local_40 [16];
  CUser *local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_30 = (CUser *)0x0;
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"Assault.cpp",
               "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
               ,0xf4c,"Invalid User pointer income (%d, %d, %d, %d)",param_3,param_4,param_5,param_6
              );
  }
  else {
    Packet_Guild_Change_Power_War_Point::Packet_Guild_Change_Power_War_Point(local_6d);
    if (param_3 == 1) {
      local_63 = CUser::getPowerSide(param_1);
    }
    else {
      cVar1 = CUser::getPowerSide(param_1);
      if (cVar1 == '\x01') {
        local_63 = 2;
      }
      else {
        local_63 = 1;
      }
    }
    if (param_4 - param_6 < 0) {
      LogManager::logFormat
                (1,"Assault.cpp",
                 "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
                 ,0xf5c,"Power War Point Computer Error( winCnt : %d, winAliveCnt : %d )",param_4,
                 param_6);
      param_6 = param_4;
    }
    iVar2 = G_CDataManager();
    if (*(int *)(iVar2 + 0xa67c) * (param_4 - param_6) < 0x100) {
      iVar2 = G_CDataManager();
      local_41 = (char)*(undefined4 *)(iVar2 + 0xa67c) * ((char)param_4 - (char)param_6);
    }
    else {
      iVar2 = G_CDataManager();
      LogManager::logFormat
                (1,"Assault.cpp",
                 "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
                 ,0xf62,
                 "Power War Point Computer Error( winCnt : %d, winAliveCnt : %d , multiple n : %d)",
                 param_4,param_6,*(undefined4 *)(iVar2 + 0xa67c));
      local_41 = 0xff;
    }
    iVar2 = G_CDataManager();
    if (*(int *)(iVar2 + 0xa67c) * param_5 < 0x100) {
      iVar2 = G_CDataManager();
      local_42 = (char)*(undefined4 *)(iVar2 + 0xa67c) * (char)param_5;
    }
    else {
      iVar2 = G_CDataManager();
      LogManager::logFormat
                (1,"Assault.cpp",
                 "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
                 ,0xf6a,
                 "Power War Point Computer Error( winCnt : %d, winAliveCnt : %d , multiple n : %d )"
                 ,param_4,param_6,*(undefined4 *)(iVar2 + 0xa67c));
      local_42 = -1;
    }
    local_2c = _VictoryBonus(this,param_1,local_63);
    local_42 = local_42 + (char)local_2c;
    local_28 = 0;
    local_24 = 0;
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_20 * 0x20));
      if ((cVar1 == '\0') &&
         (local_30 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_20 * 0x20)),
         local_30 != (CUser *)0x0)) {
        iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar2 = *(int *)(this + 0x13c);
        uVar5 = (uint)local_63;
        cVar1 = CUser::getPowerSide(local_30);
        cUserHistoryLog::EndPvP
                  ((cUserHistoryLog *)(local_30 + 0x79700),1,uVar5 == (int)cVar1,iVar3 - iVar2);
        CUserCharacInfo::IncPowerWarAssaultCount((CUserCharacInfo *)local_30);
        uVar5 = (uint)local_63;
        cVar1 = CUser::getPowerSide(local_30);
        if (uVar5 == (int)cVar1) {
          CUserCharacInfo::IncPowerWarAssaultVictoryCount((CUserCharacInfo *)local_30);
          CUserCharacInfo::IncreasePowerWarPoint((CUserCharacInfo *)local_30,(ushort)local_42);
          iVar2 = local_28;
          if (local_28 < 4) {
            uVar4 = CUser::get_charac_no(local_30,-1);
            auStack_62[iVar2] = uVar4;
            local_28 = local_28 + 1;
            _SendPowerWarAssaultResultToUser(this,local_30,(uint)local_42);
          }
          else {
            LogManager::logFormat
                      (1,"Assault.cpp",
                       "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
                       ,0xf94,
                       "Power War Point Computer Error( winner index : %d, loser index : %d )",
                       local_28,local_24);
          }
        }
        else {
          CUserCharacInfo::IncreasePowerWarPoint((CUserCharacInfo *)local_30,(ushort)local_41);
          iVar2 = local_24;
          if (local_24 < 4) {
            uVar4 = CUser::get_charac_no(local_30,-1);
            auStack_62[iVar2 + 4] = uVar4;
            local_24 = local_24 + 1;
            _SendPowerWarAssaultResultToUser(this,local_30,(uint)local_41);
          }
          else {
            LogManager::logFormat
                      (1,"Assault.cpp",
                       "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
                       ,0xfa4,
                       "Power War Point Computer Error( winner index : %d, loser index : %d )",
                       local_28,local_24);
          }
        }
      }
    }
    uVar7 = (uint)local_41;
    uVar6 = (uint)local_42;
    uVar5 = (uint)local_63;
    cMyTrace::cMyTrace(local_40,
                       "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
                       ,0xfad,0);
    cMyTrace::operator()
              (local_40,"win side(%d), win pp(%d, %d), lose pp(%d, %d), winAliveCnt(%d)",uVar5,
               param_4,uVar6,param_5,uVar7,param_6);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
    CGuildServerProxy::SendPowerWarPoint(this_00,local_6d);
    CPowerManager::IncreaePowerWarPointInChannel
              (GlobalData::s_power_manager,local_63,(uint)local_42);
    if (local_63 == 1) {
      cVar1 = '\x02';
    }
    else {
      cVar1 = '\x01';
    }
    CPowerManager::IncreaePowerWarPointInChannel(GlobalData::s_power_manager,cVar1,(uint)local_41);
  }
  return;
}
```
