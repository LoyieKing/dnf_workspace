# DieUser

`_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER`

`pvp_assault::CAssaultPlace::DieUser(int, int, MSG_DIE_ASSAULT_PLAYER&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ebda6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ebda6  _ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER
#           pvp_assault::CAssaultPlace::DieUser(int, int, MSG_DIE_ASSAULT_PLAYER&)
# range [0x082ebda6, 0x082ec557]
082ebda6 +0x000:  push   %ebp
082ebda7 +0x001:  mov    %esp,%ebp
082ebda9 +0x003:  push   %edi
082ebdaa +0x004:  push   %esi
082ebdab +0x005:  push   %ebx
082ebdac +0x006:  sub    $0xcc,%esp
082ebdb2 +0x00c:  movl   $0x0,-0x2c(%ebp)
082ebdb9 +0x013:  movl   $0x0,-0x28(%ebp)
082ebdc0 +0x01a:  lea    -0x61(%ebp),%eax
082ebdc3 +0x01d:  mov    $0x15,%edx
082ebdc8 +0x022:  mov    $0x0,%ecx
082ebdcd +0x027:  mov    %eax,%ebx
082ebdcf +0x029:  and    $0x1,%ebx
082ebdd2 +0x02c:  test   %ebx,%ebx
082ebdd4 +0x02e:  je     082ebdde <+0x38>
082ebdd6 +0x030:  mov    %cl,(%eax)
082ebdd8 +0x032:  add    $0x1,%eax
082ebddb +0x035:  sub    $0x1,%edx
082ebdde +0x038:  mov    %eax,%ebx
082ebde0 +0x03a:  and    $0x2,%ebx
082ebde3 +0x03d:  test   %ebx,%ebx
082ebde5 +0x03f:  je     082ebdf0 <+0x4a>
082ebde7 +0x041:  mov    %cx,(%eax)
082ebdea +0x044:  add    $0x2,%eax
082ebded +0x047:  sub    $0x2,%edx
082ebdf0 +0x04a:  mov    %edx,%esi
082ebdf2 +0x04c:  and    $0xfffffffc,%esi
082ebdf5 +0x04f:  mov    $0x0,%ebx
082ebdfa +0x054:  mov    %ecx,(%eax,%ebx,1)
082ebdfd +0x057:  add    $0x4,%ebx
082ebe00 +0x05a:  cmp    %esi,%ebx
082ebe02 +0x05c:  jb     082ebdfa <+0x54>
082ebe04 +0x05e:  add    %ebx,%eax
082ebe06 +0x060:  mov    %edx,%ebx
082ebe08 +0x062:  and    $0x2,%ebx
082ebe0b +0x065:  test   %ebx,%ebx
082ebe0d +0x067:  je     082ebe15 <+0x6f>
082ebe0f +0x069:  mov    %cx,(%eax)
082ebe12 +0x06c:  add    $0x2,%eax
082ebe15 +0x06f:  and    $0x1,%edx
082ebe18 +0x072:  test   %edx,%edx
082ebe1a +0x074:  je     082ebe21 <+0x7b>
082ebe1c +0x076:  mov    %cl,(%eax)
082ebe1e +0x078:  add    $0x1,%eax
082ebe21 +0x07b:  mov    0x8(%ebp),%eax
082ebe24 +0x07e:  mov    0x10c(%eax),%eax
082ebe2a +0x084:  cmp    $0x4,%eax
082ebe2d +0x087:  je     082ebe5b <+0xb5>
082ebe2f +0x089:  movl   $0x4,(%esp)
082ebe36 +0x090:  call   08725800 <__cxa_allocate_exception>
082ebe3b +0x095:  mov    %eax,%edx
082ebe3d +0x097:  movl   $0x13,(%edx)
082ebe43 +0x09d:  movl   $0x0,0x8(%esp)
082ebe4b +0x0a5:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ebe53 +0x0ad:  mov    %eax,(%esp)
082ebe56 +0x0b0:  call   08724c50 <__cxa_throw>
082ebe5b +0x0b5:  mov    0xc(%ebp),%eax
082ebe5e +0x0b8:  shl    $0x5,%eax
082ebe61 +0x0bb:  add    0x8(%ebp),%eax
082ebe64 +0x0be:  mov    %eax,(%esp)
082ebe67 +0x0c1:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ebe6c +0x0c6:  mov    %eax,-0x28(%ebp)
082ebe6f +0x0c9:  mov    0xc(%ebp),%eax
082ebe72 +0x0cc:  shl    $0x5,%eax
082ebe75 +0x0cf:  add    0x8(%ebp),%eax
082ebe78 +0x0d2:  mov    %eax,(%esp)
082ebe7b +0x0d5:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082ebe80 +0x0da:  cmp    $0x5,%eax
082ebe83 +0x0dd:  setne  %al
082ebe86 +0x0e0:  test   %al,%al
082ebe88 +0x0e2:  je     082ebeb6 <+0x110>
082ebe8a +0x0e4:  movl   $0x4,(%esp)
082ebe91 +0x0eb:  call   08725800 <__cxa_allocate_exception>
082ebe96 +0x0f0:  mov    %eax,%edx
082ebe98 +0x0f2:  movl   $0x12,(%edx)
082ebe9e +0x0f8:  movl   $0x0,0x8(%esp)
082ebea6 +0x100:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ebeae +0x108:  mov    %eax,(%esp)
082ebeb1 +0x10b:  call   08724c50 <__cxa_throw>
082ebeb6 +0x110:  cmpl   $0x0,0x10(%ebp)
082ebeba +0x114:  js     082ec015 <+0x26f>
082ebec0 +0x11a:  cmpl   $0x7,0x10(%ebp)
082ebec4 +0x11e:  jg     082ec015 <+0x26f>
082ebeca +0x124:  mov    0x10(%ebp),%eax
082ebecd +0x127:  shl    $0x5,%eax
082ebed0 +0x12a:  add    0x8(%ebp),%eax
082ebed3 +0x12d:  mov    %eax,(%esp)
082ebed6 +0x130:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ebedb +0x135:  mov    %eax,-0x2c(%ebp)
082ebede +0x138:  mov    0x10(%ebp),%eax
082ebee1 +0x13b:  shl    $0x5,%eax
082ebee4 +0x13e:  add    0x8(%ebp),%eax
082ebee7 +0x141:  mov    %eax,(%esp)
082ebeea +0x144:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082ebeef +0x149:  cmp    $0x5,%eax
082ebef2 +0x14c:  setne  %al
082ebef5 +0x14f:  test   %al,%al
082ebef7 +0x151:  je     082ebf2f <+0x189>
082ebef9 +0x153:  movl   $0x0,0xc(%esp)
082ebf01 +0x15b:  movl   $0xd37,0x8(%esp)
082ebf09 +0x163:  movl   $&_ZZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYERE19__PRETTY_FUNCTION__,0x4(%esp)
082ebf11 +0x16b:  lea    -0x4c(%ebp),%eax
082ebf14 +0x16e:  mov    %eax,(%esp)
082ebf17 +0x171:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ebf1c +0x176:  movl   $"CAssaultPlace::DieUser => killer is already died!",0x4(%esp)
082ebf24 +0x17e:  lea    -0x4c(%ebp),%eax
082ebf27 +0x181:  mov    %eax,(%esp)
082ebf2a +0x184:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ebf2f +0x189:  mov    0x10(%ebp),%eax
082ebf32 +0x18c:  shl    $0x5,%eax
082ebf35 +0x18f:  add    0x8(%ebp),%eax
082ebf38 +0x192:  mov    %eax,(%esp)
082ebf3b +0x195:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082ebf40 +0x19a:  movl   $0x14,0x8(%esp)
082ebf48 +0x1a2:  mov    %eax,0x4(%esp)
082ebf4c +0x1a6:  lea    -0x61(%ebp),%eax
082ebf4f +0x1a9:  mov    %eax,(%esp)
082ebf52 +0x1ac:  call   0807d8d0 <_init+0x1c8>
082ebf57 +0x1b1:  cmpl   $0x0,-0x2c(%ebp)
082ebf5b +0x1b5:  je     082ec05b <+0x2b5>
082ebf61 +0x1bb:  mov    0x14(%ebp),%eax
082ebf64 +0x1be:  mov    (%eax),%eax
082ebf66 +0x1c0:  test   %eax,%eax
082ebf68 +0x1c2:  je     082ec05e <+0x2b8>
082ebf6e +0x1c8:  mov    0x14(%ebp),%eax
082ebf71 +0x1cb:  mov    (%eax),%eax
082ebf73 +0x1cd:  cmp    $0x1,%eax
082ebf76 +0x1d0:  jne    082ebfb2 <+0x20c>
082ebf78 +0x1d2:  mov    -0x2c(%ebp),%eax
082ebf7b +0x1d5:  mov    %eax,(%esp)
082ebf7e +0x1d8:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082ebf83 +0x1dd:  movl   $0x0,0x14(%esp)
082ebf8b +0x1e5:  movl   $0x0,0x10(%esp)
082ebf93 +0x1ed:  movl   $0x1,0xc(%esp)
082ebf9b +0x1f5:  movl   $0x7d,0x8(%esp)
082ebfa3 +0x1fd:  mov    -0x2c(%ebp),%edx
082ebfa6 +0x200:  mov    %edx,0x4(%esp)
082ebfaa +0x204:  mov    %eax,(%esp)
082ebfad +0x207:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
082ebfb2 +0x20c:  mov    0x14(%ebp),%eax
082ebfb5 +0x20f:  mov    0x4(%eax),%eax
082ebfb8 +0x212:  mov    0x14(%ebp),%edx
082ebfbb +0x215:  mov    (%edx),%edx
082ebfbd +0x217:  mov    %edx,-0x9c(%ebp)
082ebfc3 +0x21d:  mov    $0x0,%edx
082ebfc8 +0x222:  divl   -0x9c(%ebp)
082ebfce +0x228:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
082ebfd3 +0x22d:  jle    082ec061 <+0x2bb>
082ebfd9 +0x233:  mov    -0x2c(%ebp),%eax
082ebfdc +0x236:  mov    %eax,(%esp)
082ebfdf +0x239:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082ebfe4 +0x23e:  movl   $0x0,0x14(%esp)
082ebfec +0x246:  movl   $0x0,0x10(%esp)
082ebff4 +0x24e:  movl   $0x1,0xc(%esp)
082ebffc +0x256:  movl   $0x7e,0x8(%esp)
082ec004 +0x25e:  mov    -0x2c(%ebp),%edx
082ec007 +0x261:  mov    %edx,0x4(%esp)
082ec00b +0x265:  mov    %eax,(%esp)
082ec00e +0x268:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
082ec013 +0x26d:  jmp    082ec062 <+0x2bc>
082ec015 +0x26f:  movl   $0x0,0xc(%esp)
082ec01d +0x277:  movl   $0xd54,0x8(%esp)
082ec025 +0x27f:  movl   $&_ZZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYERE19__PRETTY_FUNCTION__,0x4(%esp)
082ec02d +0x287:  lea    -0x3c(%ebp),%eax
082ec030 +0x28a:  mov    %eax,(%esp)
082ec033 +0x28d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ec038 +0x292:  mov    0x10(%ebp),%eax
082ec03b +0x295:  mov    %eax,0xc(%esp)
082ec03f +0x299:  mov    0xc(%ebp),%eax
082ec042 +0x29c:  mov    %eax,0x8(%esp)
082ec046 +0x2a0:  movl   $"CAssaultPlace::DieUser invalid killer index income(%d,%d)",0x4(%esp)
082ec04e +0x2a8:  lea    -0x3c(%ebp),%eax
082ec051 +0x2ab:  mov    %eax,(%esp)
082ec054 +0x2ae:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ec059 +0x2b3:  jmp    082ec062 <+0x2bc>
082ec05b +0x2b5:  nop
082ec05c +0x2b6:  jmp    082ec062 <+0x2bc>
082ec05e +0x2b8:  nop
082ec05f +0x2b9:  jmp    082ec062 <+0x2bc>
082ec061 +0x2bb:  nop
082ec062 +0x2bc:  cmpl   $0x0,-0x28(%ebp)
082ec066 +0x2c0:  je     082ec1a0 <+0x3fa>
082ec06c +0x2c6:  mov    -0x28(%ebp),%eax
082ec06f +0x2c9:  mov    %eax,(%esp)
082ec072 +0x2cc:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ec077 +0x2d1:  cmp    $0x7,%al
082ec079 +0x2d3:  jne    082ec093 <+0x2ed>
082ec07b +0x2d5:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ec080 +0x2da:  mov    %eax,(%esp)
082ec083 +0x2dd:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ec088 +0x2e2:  test   %al,%al
082ec08a +0x2e4:  je     082ec093 <+0x2ed>
082ec08c +0x2e6:  mov    $0x1,%eax
082ec091 +0x2eb:  jmp    082ec098 <+0x2f2>
082ec093 +0x2ed:  mov    $0x0,%eax
082ec098 +0x2f2:  test   %al,%al
082ec09a +0x2f4:  je     082ec121 <+0x37b>
082ec0a0 +0x2fa:  mov    0x14(%ebp),%eax
082ec0a3 +0x2fd:  movzwl 0xe(%eax),%eax
082ec0a7 +0x301:  cwtl
082ec0a8 +0x302:  mov    %eax,-0x98(%ebp)
082ec0ae +0x308:  mov    0x14(%ebp),%eax
082ec0b1 +0x30b:  movzwl 0xc(%eax),%eax
082ec0b5 +0x30f:  cwtl
082ec0b6 +0x310:  mov    %eax,-0x94(%ebp)
082ec0bc +0x316:  mov    0x14(%ebp),%eax
082ec0bf +0x319:  movzwl 0xa(%eax),%eax
082ec0c3 +0x31d:  movswl %ax,%edi
082ec0c6 +0x320:  mov    0x14(%ebp),%eax
082ec0c9 +0x323:  movzwl 0x8(%eax),%eax
082ec0cd +0x327:  movswl %ax,%esi
082ec0d0 +0x32a:  mov    0x14(%ebp),%eax
082ec0d3 +0x32d:  mov    0x4(%eax),%ebx
082ec0d6 +0x330:  mov    0x14(%ebp),%eax
082ec0d9 +0x333:  mov    (%eax),%ecx
082ec0db +0x335:  mov    -0x28(%ebp),%eax
082ec0de +0x338:  lea    0x79700(%eax),%edx
082ec0e4 +0x33e:  lea    -0x61(%ebp),%eax
082ec0e7 +0x341:  mov    %eax,0x20(%esp)
082ec0eb +0x345:  mov    -0x98(%ebp),%eax
082ec0f1 +0x34b:  mov    %eax,0x1c(%esp)
082ec0f5 +0x34f:  mov    -0x94(%ebp),%eax
082ec0fb +0x355:  mov    %eax,0x18(%esp)
082ec0ff +0x359:  mov    %edi,0x14(%esp)
082ec103 +0x35d:  mov    %esi,0x10(%esp)
082ec107 +0x361:  mov    %ebx,0xc(%esp)
082ec10b +0x365:  mov    %ecx,0x8(%esp)
082ec10f +0x369:  movl   $0x2,0x4(%esp)
082ec117 +0x371:  mov    %edx,(%esp)
082ec11a +0x374:  call   08686490 <_ZN15cUserHistoryLog6DiePvPE23ENUM_PVP_HISTORY_REASONjjiiiiPKc>  ; cUserHistoryLog::DiePvP(ENUM_PVP_HISTORY_REASON, unsigned int, unsigned int, int, int, int, int, char const*)
082ec11f +0x379:  jmp    082ec1a0 <+0x3fa>
082ec121 +0x37b:  mov    0x14(%ebp),%eax
082ec124 +0x37e:  movzwl 0xe(%eax),%eax
082ec128 +0x382:  cwtl
082ec129 +0x383:  mov    %eax,-0x90(%ebp)
082ec12f +0x389:  mov    0x14(%ebp),%eax
082ec132 +0x38c:  movzwl 0xc(%eax),%eax
082ec136 +0x390:  cwtl
082ec137 +0x391:  mov    %eax,-0x8c(%ebp)
082ec13d +0x397:  mov    0x14(%ebp),%eax
082ec140 +0x39a:  movzwl 0xa(%eax),%eax
082ec144 +0x39e:  movswl %ax,%edi
082ec147 +0x3a1:  mov    0x14(%ebp),%eax
082ec14a +0x3a4:  movzwl 0x8(%eax),%eax
082ec14e +0x3a8:  movswl %ax,%esi
082ec151 +0x3ab:  mov    0x14(%ebp),%eax
082ec154 +0x3ae:  mov    0x4(%eax),%ebx
082ec157 +0x3b1:  mov    0x14(%ebp),%eax
082ec15a +0x3b4:  mov    (%eax),%ecx
082ec15c +0x3b6:  mov    -0x28(%ebp),%eax
082ec15f +0x3b9:  lea    0x79700(%eax),%edx
082ec165 +0x3bf:  lea    -0x61(%ebp),%eax
082ec168 +0x3c2:  mov    %eax,0x20(%esp)
082ec16c +0x3c6:  mov    -0x90(%ebp),%eax
082ec172 +0x3cc:  mov    %eax,0x1c(%esp)
082ec176 +0x3d0:  mov    -0x8c(%ebp),%eax
082ec17c +0x3d6:  mov    %eax,0x18(%esp)
082ec180 +0x3da:  mov    %edi,0x14(%esp)
082ec184 +0x3de:  mov    %esi,0x10(%esp)
082ec188 +0x3e2:  mov    %ebx,0xc(%esp)
082ec18c +0x3e6:  mov    %ecx,0x8(%esp)
082ec190 +0x3ea:  movl   $0x6,0x4(%esp)
082ec198 +0x3f2:  mov    %edx,(%esp)
082ec19b +0x3f5:  call   08686490 <_ZN15cUserHistoryLog6DiePvPE23ENUM_PVP_HISTORY_REASONjjiiiiPKc>  ; cUserHistoryLog::DiePvP(ENUM_PVP_HISTORY_REASON, unsigned int, unsigned int, int, int, int, int, char const*)
082ec1a0 +0x3fa:  mov    0x8(%ebp),%eax
082ec1a3 +0x3fd:  mov    %eax,(%esp)
082ec1a6 +0x400:  call   082ebaee <_ZN11pvp_assault13CAssaultPlace17_IsChangeDieStateEv>  ; pvp_assault::CAssaultPlace::_IsChangeDieState()
082ec1ab +0x405:  test   %al,%al
082ec1ad +0x407:  je     082ec1c1 <+0x41b>
082ec1af +0x409:  mov    0xc(%ebp),%eax
082ec1b2 +0x40c:  mov    %eax,0x4(%esp)
082ec1b6 +0x410:  mov    0x8(%ebp),%eax
082ec1b9 +0x413:  mov    %eax,(%esp)
082ec1bc +0x416:  call   082ebaf8 <_ZN11pvp_assault13CAssaultPlace15_ChangeDieStateEi>  ; pvp_assault::CAssaultPlace::_ChangeDieState(int)
082ec1c1 +0x41b:  cmpl   $0x0,-0x28(%ebp)
082ec1c5 +0x41f:  je     082ec1f1 <+0x44b>
082ec1c7 +0x421:  mov    -0x28(%ebp),%eax
082ec1ca +0x424:  mov    %eax,(%esp)
082ec1cd +0x427:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ec1d2 +0x42c:  cmp    $0x7,%al
082ec1d4 +0x42e:  jne    082ec1ea <+0x444>
082ec1d6 +0x430:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ec1db +0x435:  mov    %eax,(%esp)
082ec1de +0x438:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ec1e3 +0x43d:  xor    $0x1,%eax
082ec1e6 +0x440:  test   %al,%al
082ec1e8 +0x442:  je     082ec1f1 <+0x44b>
082ec1ea +0x444:  mov    $0x1,%eax
082ec1ef +0x449:  jmp    082ec1f6 <+0x450>
082ec1f1 +0x44b:  mov    $0x0,%eax
082ec1f6 +0x450:  test   %al,%al
082ec1f8 +0x452:  je     082ec25a <+0x4b4>
082ec1fa +0x454:  lea    -0x70(%ebp),%eax
082ec1fd +0x457:  mov    %eax,(%esp)
082ec200 +0x45a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ec205 +0x45f:  mov    -0x28(%ebp),%eax
082ec208 +0x462:  mov    %eax,0x8(%esp)
082ec20c +0x466:  lea    -0x70(%ebp),%eax
082ec20f +0x469:  mov    %eax,0x4(%esp)
082ec213 +0x46d:  mov    0x8(%ebp),%eax
082ec216 +0x470:  mov    %eax,(%esp)
082ec219 +0x473:  call   082e8d60 <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuardP5CUser>  ; pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*, CUser*)
082ec21e +0x478:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082ec223 +0x47d:  lea    -0x70(%ebp),%edx
082ec226 +0x480:  mov    %edx,0x4(%esp)
082ec22a +0x484:  mov    %eax,(%esp)
082ec22d +0x487:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082ec232 +0x48c:  jmp    082ec24f <+0x4a9>
082ec234 +0x48e:  mov    %edx,%ebx
082ec236 +0x490:  mov    %eax,%esi
082ec238 +0x492:  lea    -0x70(%ebp),%eax
082ec23b +0x495:  mov    %eax,(%esp)
082ec23e +0x498:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ec243 +0x49d:  mov    %esi,%eax
082ec245 +0x49f:  mov    %ebx,%edx
082ec247 +0x4a1:  mov    %eax,(%esp)
082ec24a +0x4a4:  call   08ae3750 <_Unwind_Resume>
082ec24f +0x4a9:  lea    -0x70(%ebp),%eax
082ec252 +0x4ac:  mov    %eax,(%esp)
082ec255 +0x4af:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ec25a +0x4b4:  cmpl   $0x0,-0x2c(%ebp)
082ec25e +0x4b8:  je     082ec28a <+0x4e4>
082ec260 +0x4ba:  mov    -0x2c(%ebp),%eax
082ec263 +0x4bd:  mov    %eax,(%esp)
082ec266 +0x4c0:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ec26b +0x4c5:  cmp    $0x7,%al
082ec26d +0x4c7:  jne    082ec283 <+0x4dd>
082ec26f +0x4c9:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ec274 +0x4ce:  mov    %eax,(%esp)
082ec277 +0x4d1:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ec27c +0x4d6:  xor    $0x1,%eax
082ec27f +0x4d9:  test   %al,%al
082ec281 +0x4db:  je     082ec28a <+0x4e4>
082ec283 +0x4dd:  mov    $0x1,%eax
082ec288 +0x4e2:  jmp    082ec28f <+0x4e9>
082ec28a +0x4e4:  mov    $0x0,%eax
082ec28f +0x4e9:  test   %al,%al
082ec291 +0x4eb:  je     082ec2bb <+0x515>
082ec293 +0x4ed:  mov    0x8(%ebp),%eax
082ec296 +0x4f0:  mov    %eax,(%esp)
082ec299 +0x4f3:  call   082ebd64 <_ZN11pvp_assault13CAssaultPlace15_IsProcsssChaosEv>  ; pvp_assault::CAssaultPlace::_IsProcsssChaos()
082ec29e +0x4f8:  test   %al,%al
082ec2a0 +0x4fa:  je     082ec2bb <+0x515>
082ec2a2 +0x4fc:  mov    0x10(%ebp),%eax
082ec2a5 +0x4ff:  mov    %eax,0x8(%esp)
082ec2a9 +0x503:  mov    0xc(%ebp),%eax
082ec2ac +0x506:  mov    %eax,0x4(%esp)
082ec2b0 +0x50a:  mov    0x8(%ebp),%eax
082ec2b3 +0x50d:  mov    %eax,(%esp)
082ec2b6 +0x510:  call   082ebb9c <_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii>  ; pvp_assault::CAssaultPlace::_ProcessChaos(int, int)
082ec2bb +0x515:  mov    0x8(%ebp),%eax
082ec2be +0x518:  mov    %eax,(%esp)
082ec2c1 +0x51b:  call   082e919a <_ZN11pvp_assault13CAssaultPlace17_CheckAssaultableEv>  ; pvp_assault::CAssaultPlace::_CheckAssaultable()
082ec2c6 +0x520:  xor    $0x1,%eax
082ec2c9 +0x523:  test   %al,%al
082ec2cb +0x525:  je     082ec54c <+0x7a6>
082ec2d1 +0x52b:  cmpl   $0x0,-0x2c(%ebp)
082ec2d5 +0x52f:  je     082ec304 <+0x55e>
082ec2d7 +0x531:  cmpl   $0x0,-0x28(%ebp)
082ec2db +0x535:  je     082ec304 <+0x55e>
082ec2dd +0x537:  mov    -0x28(%ebp),%eax
082ec2e0 +0x53a:  mov    %eax,(%esp)
082ec2e3 +0x53d:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ec2e8 +0x542:  cmp    $0x7,%al
082ec2ea +0x544:  jne    082ec304 <+0x55e>
082ec2ec +0x546:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ec2f1 +0x54b:  mov    %eax,(%esp)
082ec2f4 +0x54e:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ec2f9 +0x553:  test   %al,%al
082ec2fb +0x555:  je     082ec304 <+0x55e>
082ec2fd +0x557:  mov    $0x1,%eax
082ec302 +0x55c:  jmp    082ec309 <+0x563>
082ec304 +0x55e:  mov    $0x0,%eax
082ec309 +0x563:  test   %al,%al
082ec30b +0x565:  je     082ec486 <+0x6e0>
082ec311 +0x56b:  movl   $0x0,-0x74(%ebp)
082ec318 +0x572:  movl   $0x0,-0x78(%ebp)
082ec31f +0x579:  movl   $0x0,-0x7c(%ebp)
082ec326 +0x580:  movl   $0x0,-0x24(%ebp)
082ec32d +0x587:  movl   $0x0,-0x20(%ebp)
082ec334 +0x58e:  cmpl   $0x0,0x10(%ebp)
082ec338 +0x592:  js     082ec35a <+0x5b4>
082ec33a +0x594:  cmpl   $0x7,0x10(%ebp)
082ec33e +0x598:  jg     082ec35a <+0x5b4>
082ec340 +0x59a:  mov    -0x2c(%ebp),%eax
082ec343 +0x59d:  mov    %eax,(%esp)
082ec346 +0x5a0:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ec34b +0x5a5:  movsbl %al,%eax
082ec34e +0x5a8:  mov    %eax,-0x24(%ebp)
082ec351 +0x5ab:  movl   $0x1,-0x20(%ebp)
082ec358 +0x5b2:  jmp    082ec372 <+0x5cc>
082ec35a +0x5b4:  mov    -0x28(%ebp),%eax
082ec35d +0x5b7:  mov    %eax,(%esp)
082ec360 +0x5ba:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ec365 +0x5bf:  movsbl %al,%eax
082ec368 +0x5c2:  mov    %eax,-0x24(%ebp)
082ec36b +0x5c5:  movl   $0x2,-0x20(%ebp)
082ec372 +0x5cc:  lea    -0x7c(%ebp),%eax
082ec375 +0x5cf:  mov    %eax,0x14(%esp)
082ec379 +0x5d3:  lea    -0x78(%ebp),%eax
082ec37c +0x5d6:  mov    %eax,0x10(%esp)
082ec380 +0x5da:  lea    -0x74(%ebp),%eax
082ec383 +0x5dd:  mov    %eax,0xc(%esp)
082ec387 +0x5e1:  mov    -0x20(%ebp),%eax
082ec38a +0x5e4:  mov    %eax,0x8(%esp)
082ec38e +0x5e8:  mov    -0x24(%ebp),%eax
082ec391 +0x5eb:  mov    %eax,0x4(%esp)
082ec395 +0x5ef:  mov    0x8(%ebp),%eax
082ec398 +0x5f2:  mov    %eax,(%esp)
082ec39b +0x5f5:  call   082e7362 <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_>  ; pvp_assault::CAssaultPlace::_CheckPowerWarInPlayer(ENUM_POWER_SIDE_TYPE, ENUM_POWER_WAR_WINNER_OR_LOSER, int&, int&, int&)
082ec3a0 +0x5fa:  test   %al,%al
082ec3a2 +0x5fc:  je     082ec486 <+0x6e0>
082ec3a8 +0x602:  cmpl   $0x1,-0x20(%ebp)
082ec3ac +0x606:  jne    082ec3de <+0x638>
082ec3ae +0x608:  mov    -0x7c(%ebp),%ecx
082ec3b1 +0x60b:  mov    -0x78(%ebp),%edx
082ec3b4 +0x60e:  mov    -0x74(%ebp),%eax
082ec3b7 +0x611:  mov    %ecx,0x14(%esp)
082ec3bb +0x615:  mov    %edx,0x10(%esp)
082ec3bf +0x619:  mov    %eax,0xc(%esp)
082ec3c3 +0x61d:  mov    -0x20(%ebp),%eax
082ec3c6 +0x620:  mov    %eax,0x8(%esp)
082ec3ca +0x624:  mov    -0x2c(%ebp),%eax
082ec3cd +0x627:  mov    %eax,0x4(%esp)
082ec3d1 +0x62b:  mov    0x8(%ebp),%eax
082ec3d4 +0x62e:  mov    %eax,(%esp)
082ec3d7 +0x631:  call   082eceb2 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii>  ; pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)
082ec3dc +0x636:  jmp    082ec40c <+0x666>
082ec3de +0x638:  mov    -0x7c(%ebp),%ecx
082ec3e1 +0x63b:  mov    -0x78(%ebp),%edx
082ec3e4 +0x63e:  mov    -0x74(%ebp),%eax
082ec3e7 +0x641:  mov    %ecx,0x14(%esp)
082ec3eb +0x645:  mov    %edx,0x10(%esp)
082ec3ef +0x649:  mov    %eax,0xc(%esp)
082ec3f3 +0x64d:  mov    -0x20(%ebp),%eax
082ec3f6 +0x650:  mov    %eax,0x8(%esp)
082ec3fa +0x654:  mov    -0x28(%ebp),%eax
082ec3fd +0x657:  mov    %eax,0x4(%esp)
082ec401 +0x65b:  mov    0x8(%ebp),%eax
082ec404 +0x65e:  mov    %eax,(%esp)
082ec407 +0x661:  call   082eceb2 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii>  ; pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)
082ec40c +0x666:  lea    -0x88(%ebp),%eax
082ec412 +0x66c:  mov    %eax,(%esp)
082ec415 +0x66f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ec41a +0x674:  lea    -0x88(%ebp),%eax
082ec420 +0x67a:  mov    %eax,0x4(%esp)
082ec424 +0x67e:  mov    0x8(%ebp),%eax
082ec427 +0x681:  mov    %eax,(%esp)
082ec42a +0x684:  call   082e8c5a <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuard>  ; pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*)
082ec42f +0x689:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082ec434 +0x68e:  lea    -0x88(%ebp),%edx
082ec43a +0x694:  mov    %edx,0x4(%esp)
082ec43e +0x698:  mov    %eax,(%esp)
082ec441 +0x69b:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082ec446 +0x6a0:  mov    -0x2c(%ebp),%eax
082ec449 +0x6a3:  mov    %eax,0x4(%esp)
082ec44d +0x6a7:  mov    0x8(%ebp),%eax
082ec450 +0x6aa:  mov    %eax,(%esp)
082ec453 +0x6ad:  call   082ec558 <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser>  ; pvp_assault::CAssaultPlace::_SendStraightVictories(CUser*)
082ec458 +0x6b2:  jmp    082ec478 <+0x6d2>
082ec45a +0x6b4:  mov    %edx,%ebx
082ec45c +0x6b6:  mov    %eax,%esi
082ec45e +0x6b8:  lea    -0x88(%ebp),%eax
082ec464 +0x6be:  mov    %eax,(%esp)
082ec467 +0x6c1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ec46c +0x6c6:  mov    %esi,%eax
082ec46e +0x6c8:  mov    %ebx,%edx
082ec470 +0x6ca:  mov    %eax,(%esp)
082ec473 +0x6cd:  call   08ae3750 <_Unwind_Resume>
082ec478 +0x6d2:  lea    -0x88(%ebp),%eax
082ec47e +0x6d8:  mov    %eax,(%esp)
082ec481 +0x6db:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ec486 +0x6e0:  cmpl   $0x0,-0x28(%ebp)
082ec48a +0x6e4:  je     082ec4b3 <+0x70d>
082ec48c +0x6e6:  mov    -0x28(%ebp),%eax
082ec48f +0x6e9:  mov    %eax,(%esp)
082ec492 +0x6ec:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ec497 +0x6f1:  cmp    $0x7,%al
082ec499 +0x6f3:  jne    082ec4b3 <+0x70d>
082ec49b +0x6f5:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ec4a0 +0x6fa:  mov    %eax,(%esp)
082ec4a3 +0x6fd:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ec4a8 +0x702:  test   %al,%al
082ec4aa +0x704:  je     082ec4b3 <+0x70d>
082ec4ac +0x706:  mov    $0x1,%eax
082ec4b1 +0x70b:  jmp    082ec4b8 <+0x712>
082ec4b3 +0x70d:  mov    $0x0,%eax
082ec4b8 +0x712:  test   %al,%al
082ec4ba +0x714:  je     082ec4e8 <+0x742>
082ec4bc +0x716:  mov    -0x28(%ebp),%eax
082ec4bf +0x719:  mov    %eax,(%esp)
082ec4c2 +0x71c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082ec4c7 +0x721:  mov    %eax,-0x1c(%ebp)
082ec4ca +0x724:  cmpl   $0x0,-0x1c(%ebp)
082ec4ce +0x728:  je     082ec4dd <+0x737>
082ec4d0 +0x72a:  mov    -0x1c(%ebp),%eax
082ec4d3 +0x72d:  mov    %eax,(%esp)
082ec4d6 +0x730:  call   082f0818 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x59c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x59c
082ec4db +0x735:  jmp    082ec4e8 <+0x742>
082ec4dd +0x737:  mov    -0x28(%ebp),%eax
082ec4e0 +0x73a:  mov    %eax,(%esp)
082ec4e3 +0x73d:  call   082f0a5c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x7e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x7e0
082ec4e8 +0x742:  mov    0x8(%ebp),%eax
082ec4eb +0x745:  movl   $0x5,0x10c(%eax)
082ec4f5 +0x74f:  mov    0x8(%ebp),%eax
082ec4f8 +0x752:  mov    0x12c(%eax),%eax
082ec4fe +0x758:  test   %eax,%eax
082ec500 +0x75a:  je     082ec51b <+0x775>
082ec502 +0x75c:  mov    0x8(%ebp),%eax
082ec505 +0x75f:  mov    0x12c(%eax),%eax
082ec50b +0x765:  movl   $0x5,0x4(%esp)
082ec513 +0x76d:  mov    %eax,(%esp)
082ec516 +0x770:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082ec51b +0x775:  mov    0x8(%ebp),%eax
082ec51e +0x778:  mov    0x130(%eax),%eax
082ec524 +0x77e:  test   %eax,%eax
082ec526 +0x780:  je     082ec541 <+0x79b>
082ec528 +0x782:  mov    0x8(%ebp),%eax
082ec52b +0x785:  mov    0x130(%eax),%eax
082ec531 +0x78b:  movl   $0x5,0x4(%esp)
082ec539 +0x793:  mov    %eax,(%esp)
082ec53c +0x796:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082ec541 +0x79b:  mov    0x8(%ebp),%eax
082ec544 +0x79e:  mov    %eax,(%esp)
082ec547 +0x7a1:  call   082e99a2 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv>  ; pvp_assault::CAssaultPlace::EndAssault()
082ec54c +0x7a6:  add    $0xcc,%esp
082ec552 +0x7ac:  pop    %ebx
082ec553 +0x7ad:  pop    %esi
082ec554 +0x7ae:  pop    %edi
082ec555 +0x7af:  pop    %ebp
082ec556 +0x7b0:  ret
082ec557 +0x7b1:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::DieUser @ 0x82ebda6

/* pvp_assault::CAssaultPlace::DieUser(int, int, MSG_DIE_ASSAULT_PLAYER&) */

void __thiscall
pvp_assault::CAssaultPlace::DieUser
          (CAssaultPlace *this,int param_1,int param_2,MSG_DIE_ASSAULT_PLAYER *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  CHackAnalyzer *pCVar6;
  GameWorld *pGVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  PacketGuard local_8c [12];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  PacketGuard local_74 [15];
  char local_65;
  char local_64 [20];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  CUser *local_30;
  CUserCharacInfo *local_2c;
  int local_28;
  int local_24;
  CParty *local_20;
  
  local_30 = (CUser *)0x0;
  local_2c = (CUserCharacInfo *)0x0;
  pcVar3 = &local_65;
  uVar8 = 0x15;
  bVar10 = ((uint)pcVar3 & 1) != 0;
  if (bVar10) {
    local_65 = '\0';
    pcVar3 = local_64;
    uVar8 = 0x14;
  }
  if (((uint)pcVar3 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
    uVar8 = uVar8 - 2;
  }
  uVar9 = 0;
  do {
    pcVar1 = pcVar3 + uVar9;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar9 = uVar9 + 4;
  } while (uVar9 < (uVar8 & 0xfffffffc));
  pcVar3 = pcVar3 + uVar9;
  if ((uVar8 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
  }
  if (!bVar10) {
    *pcVar3 = '\0';
  }
  if (*(int *)(this + 0x10c) == 4) {
    local_2c = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + param_1 * 0x20));
    iVar5 = CAssaulter::GetState((CAssaulter *)(this + param_1 * 0x20));
    if (iVar5 == 5) {
      if ((param_2 < 0) || (7 < param_2)) {
        cMyTrace::cMyTrace(local_40,
                           "void pvp_assault::CAssaultPlace::DieUser(int, int, MSG_DIE_ASSAULT_PLAYER&)"
                           ,0xd54,0);
        cMyTrace::operator()
                  (local_40,"CAssaultPlace::DieUser invalid killer index income(%d,%d)",param_1,
                   param_2);
      }
      else {
        local_30 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + param_2 * 0x20));
        iVar5 = CAssaulter::GetState((CAssaulter *)(this + param_2 * 0x20));
        if (iVar5 != 5) {
          cMyTrace::cMyTrace(local_50,
                             "void pvp_assault::CAssaultPlace::DieUser(int, int, MSG_DIE_ASSAULT_PLAYER&)"
                             ,0xd37,0);
          cMyTrace::operator()(local_50,"CAssaultPlace::DieUser => killer is already died!");
        }
        pcVar3 = (char *)CAssaulter::GetCharacName((CAssaulter *)(this + param_2 * 0x20));
        strncpy(&local_65,pcVar3,0x14);
        if ((local_30 != (CUser *)0x0) && (*(int *)param_3 != 0)) {
          if (*(int *)param_3 == 1) {
            pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_30);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,local_30,0x7d,1,0,0);
          }
          if (100000 < (int)(*(uint *)(param_3 + 4) / *(uint *)param_3)) {
            pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_30);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,local_30,0x7e,1,0,0);
          }
        }
      }
      if (local_2c != (CUserCharacInfo *)0x0) {
        cVar2 = CUserCharacInfo::getCurCharacVill(local_2c);
        if ((cVar2 == '\a') && (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 != '\0')) {
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          cUserHistoryLog::DiePvP
                    ((cUserHistoryLog *)(local_2c + 0x79700),2,*(undefined4 *)param_3,
                     *(undefined4 *)(param_3 + 4),(int)*(short *)(param_3 + 8),
                     (int)*(short *)(param_3 + 10),(int)*(short *)(param_3 + 0xc),
                     (int)*(short *)(param_3 + 0xe),&local_65);
        }
        else {
          cUserHistoryLog::DiePvP
                    ((cUserHistoryLog *)(local_2c + 0x79700),6,*(undefined4 *)param_3,
                     *(undefined4 *)(param_3 + 4),(int)*(short *)(param_3 + 8),
                     (int)*(short *)(param_3 + 10),(int)*(short *)(param_3 + 0xc),
                     (int)*(short *)(param_3 + 0xe),&local_65);
        }
      }
      cVar2 = _IsChangeDieState();
      if (cVar2 != '\0') {
        _ChangeDieState(this,param_1);
      }
      if ((local_2c == (CUserCharacInfo *)0x0) ||
         ((cVar2 = CUserCharacInfo::getCurCharacVill(local_2c), cVar2 == '\a' &&
          (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\x01')))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (bVar10) {
        PacketGuard::PacketGuard(local_74);
                    /* try { // try from 082ec219 to 082ec231 has its CatchHandler @ 082ec234 */
        _MakeUserState(this,local_74,(CUser *)local_2c);
        pGVar7 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar7,local_74);
        PacketGuard::~PacketGuard(local_74);
      }
      if ((local_30 == (CUser *)0x0) ||
         ((cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_30), cVar2 == '\a' &&
          (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\x01')))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if ((bVar10) && (cVar2 = _IsProcsssChaos(), cVar2 != '\0')) {
        _ProcessChaos(this,param_1,param_2);
      }
      cVar2 = _CheckAssaultable(this);
      if (cVar2 != '\x01') {
        if ((((local_30 == (CUser *)0x0) || (local_2c == (CUserCharacInfo *)0x0)) ||
            (cVar2 = CUserCharacInfo::getCurCharacVill(local_2c), cVar2 != '\a')) ||
           (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\0')) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          local_78 = 0;
          local_7c = 0;
          local_80 = 0;
          local_28 = 0;
          local_24 = 0;
          if ((param_2 < 0) || (7 < param_2)) {
            cVar2 = CUser::getPowerSide((CUser *)local_2c);
            local_24 = 2;
          }
          else {
            cVar2 = CUser::getPowerSide(local_30);
            local_24 = 1;
          }
          local_28 = (int)cVar2;
          cVar2 = _CheckPowerWarInPlayer(this,local_28,local_24,&local_78,&local_7c,&local_80);
          if (cVar2 != '\0') {
            if (local_24 == 1) {
              _SendPowerWarPointToGuildServer(this,local_30,1,local_78,local_7c,local_80);
            }
            else {
              _SendPowerWarPointToGuildServer(this,local_2c,local_24,local_78,local_7c,local_80);
            }
            PacketGuard::PacketGuard(local_8c);
                    /* try { // try from 082ec42a to 082ec457 has its CatchHandler @ 082ec45a */
            _MakeUserState(this,local_8c);
            pGVar7 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(pGVar7,local_8c);
            _SendStraightVictories(this,local_30);
            PacketGuard::~PacketGuard(local_8c);
          }
        }
        if (((local_2c == (CUserCharacInfo *)0x0) ||
            (cVar2 = CUserCharacInfo::getCurCharacVill(local_2c), cVar2 != '\a')) ||
           (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\0')) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          local_20 = (CParty *)CUser::GetParty((CUser *)local_2c);
          if (local_20 == (CParty *)0x0) {
            CUserCharacInfo::resetStraightVictories(local_2c);
          }
          else {
            CParty::resetStraightVictories(local_20);
          }
        }
        *(undefined4 *)(this + 0x10c) = 5;
        if (*(int *)(this + 300) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 300),'\x05');
        }
        if (*(int *)(this + 0x130) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x05');
        }
        EndAssault(this);
      }
      return;
    }
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 0x12;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  puVar4 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar4 = 0x13;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
}
```
