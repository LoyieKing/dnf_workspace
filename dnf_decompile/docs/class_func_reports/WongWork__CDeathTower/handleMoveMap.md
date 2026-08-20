# handleMoveMap

`_ZN8WongWork11CDeathTower13handleMoveMapEv`

`WongWork::CDeathTower::handleMoveMap()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08465c94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08465c94  _ZN8WongWork11CDeathTower13handleMoveMapEv
#           WongWork::CDeathTower::handleMoveMap()
# range [0x08465c94, 0x08466023]
08465c94 +0x000:  push   %ebp
08465c95 +0x001:  mov    %esp,%ebp
08465c97 +0x003:  push   %esi
08465c98 +0x004:  push   %ebx
08465c99 +0x005:  sub    $0x60,%esp
08465c9c +0x008:  mov    0x8(%ebp),%eax
08465c9f +0x00b:  mov    %eax,(%esp)
08465ca2 +0x00e:  call   08467188 <_ZN8WongWork11CDeathTower15_checkMemberDieEv>  ; WongWork::CDeathTower::_checkMemberDie()
08465ca7 +0x013:  test   %al,%al
08465ca9 +0x015:  je     08465d15 <+0x81>
08465cab +0x017:  lea    -0x1c(%ebp),%eax
08465cae +0x01a:  mov    %eax,(%esp)
08465cb1 +0x01d:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08465cb6 +0x022:  movl   $0x16,0x8(%esp)
08465cbe +0x02a:  movl   $0x30,0x4(%esp)
08465cc6 +0x032:  lea    -0x1c(%ebp),%eax
08465cc9 +0x035:  mov    %eax,(%esp)
08465ccc +0x038:  call   0845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>  ; WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)
08465cd1 +0x03d:  mov    0x8(%ebp),%eax
08465cd4 +0x040:  mov    (%eax),%eax
08465cd6 +0x042:  lea    -0x1c(%ebp),%edx
08465cd9 +0x045:  mov    %edx,0x4(%esp)
08465cdd +0x049:  mov    %eax,(%esp)
08465ce0 +0x04c:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08465ce5 +0x051:  mov    $0x0,%ebx
08465cea +0x056:  lea    -0x1c(%ebp),%eax
08465ced +0x059:  mov    %eax,(%esp)
08465cf0 +0x05c:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465cf5 +0x061:  jmp    0846601b <+0x387>
08465cfa +0x066:  mov    %edx,%ebx
08465cfc +0x068:  mov    %eax,%esi
08465cfe +0x06a:  lea    -0x1c(%ebp),%eax
08465d01 +0x06d:  mov    %eax,(%esp)
08465d04 +0x070:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465d09 +0x075:  mov    %esi,%eax
08465d0b +0x077:  mov    %ebx,%edx
08465d0d +0x079:  mov    %eax,(%esp)
08465d10 +0x07c:  call   08ae3750 <_Unwind_Resume>
08465d15 +0x081:  mov    0x8(%ebp),%eax
08465d18 +0x084:  add    $0x14,%eax
08465d1b +0x087:  mov    %eax,(%esp)
08465d1e +0x08a:  call   08469b18 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1fb>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1fb
08465d23 +0x08f:  cmp    $0x1,%eax
08465d26 +0x092:  setle  %al
08465d29 +0x095:  test   %al,%al
08465d2b +0x097:  je     08465d97 <+0x103>
08465d2d +0x099:  lea    -0x28(%ebp),%eax
08465d30 +0x09c:  mov    %eax,(%esp)
08465d33 +0x09f:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08465d38 +0x0a4:  movl   $0x13,0x8(%esp)
08465d40 +0x0ac:  movl   $0x30,0x4(%esp)
08465d48 +0x0b4:  lea    -0x28(%ebp),%eax
08465d4b +0x0b7:  mov    %eax,(%esp)
08465d4e +0x0ba:  call   0845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>  ; WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)
08465d53 +0x0bf:  mov    0x8(%ebp),%eax
08465d56 +0x0c2:  mov    (%eax),%eax
08465d58 +0x0c4:  lea    -0x28(%ebp),%edx
08465d5b +0x0c7:  mov    %edx,0x4(%esp)
08465d5f +0x0cb:  mov    %eax,(%esp)
08465d62 +0x0ce:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08465d67 +0x0d3:  mov    $0x0,%ebx
08465d6c +0x0d8:  lea    -0x28(%ebp),%eax
08465d6f +0x0db:  mov    %eax,(%esp)
08465d72 +0x0de:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465d77 +0x0e3:  jmp    0846601b <+0x387>
08465d7c +0x0e8:  mov    %edx,%ebx
08465d7e +0x0ea:  mov    %eax,%esi
08465d80 +0x0ec:  lea    -0x28(%ebp),%eax
08465d83 +0x0ef:  mov    %eax,(%esp)
08465d86 +0x0f2:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465d8b +0x0f7:  mov    %esi,%eax
08465d8d +0x0f9:  mov    %ebx,%edx
08465d8f +0x0fb:  mov    %eax,(%esp)
08465d92 +0x0fe:  call   08ae3750 <_Unwind_Resume>
08465d97 +0x103:  mov    0x8(%ebp),%eax
08465d9a +0x106:  add    $0xc,%eax
08465d9d +0x109:  mov    %eax,(%esp)
08465da0 +0x10c:  call   08469ab4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x197>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x197
08465da5 +0x111:  mov    0x8(%ebp),%edx
08465da8 +0x114:  add    $0x14,%edx
08465dab +0x117:  mov    %eax,0x4(%esp)
08465daf +0x11b:  mov    %edx,(%esp)
08465db2 +0x11e:  call   084617da <_ZN8WongWork11CDeathTower6CStage13moveNextStageEj>  ; WongWork::CDeathTower::CStage::moveNextStage(unsigned int)
08465db7 +0x123:  test   %al,%al
08465db9 +0x125:  je     08465fb4 <+0x320>
08465dbf +0x12b:  mov    0x8(%ebp),%eax
08465dc2 +0x12e:  add    $0x14,%eax
08465dc5 +0x131:  mov    %eax,(%esp)
08465dc8 +0x134:  call   08469b02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1e5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1e5
08465dcd +0x139:  mov    0x8(%ebp),%edx
08465dd0 +0x13c:  add    $0xc,%edx
08465dd3 +0x13f:  mov    %eax,0x4(%esp)
08465dd7 +0x143:  mov    %edx,(%esp)
08465dda +0x146:  call   084605ee <_ZN8WongWork11CDeathTower11CDungeonMgr11getStageMapEj>  ; WongWork::CDeathTower::CDungeonMgr::getStageMap(unsigned int)
08465ddf +0x14b:  mov    %eax,-0x10(%ebp)
08465de2 +0x14e:  cmpl   $0x0,-0x10(%ebp)
08465de6 +0x152:  jne    08465e14 <+0x180>
08465de8 +0x154:  movl   $0x4,(%esp)
08465def +0x15b:  call   08725800 <__cxa_allocate_exception>
08465df4 +0x160:  mov    %eax,%edx
08465df6 +0x162:  movl   $0x15,(%edx)
08465dfc +0x168:  movl   $0x0,0x8(%esp)
08465e04 +0x170:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08465e0c +0x178:  mov    %eax,(%esp)
08465e0f +0x17b:  call   08724c50 <__cxa_throw>
08465e14 +0x180:  mov    0x8(%ebp),%eax
08465e17 +0x183:  add    $0x14,%eax
08465e1a +0x186:  mov    %eax,(%esp)
08465e1d +0x189:  call   084614ec <_ZN8WongWork11CDeathTower6CStage5resetEv>  ; WongWork::CDeathTower::CStage::reset()
08465e22 +0x18e:  mov    0x8(%ebp),%eax
08465e25 +0x191:  lea    0xc(%eax),%ecx
08465e28 +0x194:  mov    0x8(%ebp),%eax
08465e2b +0x197:  lea    0x14(%eax),%edx
08465e2e +0x19a:  mov    0x8(%ebp),%eax
08465e31 +0x19d:  mov    %eax,0xc(%esp)
08465e35 +0x1a1:  mov    -0x10(%ebp),%eax
08465e38 +0x1a4:  mov    %eax,0x8(%esp)
08465e3c +0x1a8:  mov    %ecx,0x4(%esp)
08465e40 +0x1ac:  mov    %edx,(%esp)
08465e43 +0x1af:  call   08460634 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_>  ; WongWork::CDeathTower::CStage::consistMap(WongWork::CDeathTower::CDungeonMgr const&, CMap const*, WongWork::CDeathTower*)
08465e48 +0x1b4:  xor    $0x1,%eax
08465e4b +0x1b7:  test   %al,%al
08465e4d +0x1b9:  je     08465f18 <+0x284>
08465e53 +0x1bf:  movl   $0x4,(%esp)
08465e5a +0x1c6:  call   08725800 <__cxa_allocate_exception>
08465e5f +0x1cb:  mov    %eax,%edx
08465e61 +0x1cd:  movl   $0x1,(%edx)
08465e67 +0x1d3:  movl   $0x0,0x8(%esp)
08465e6f +0x1db:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08465e77 +0x1e3:  mov    %eax,(%esp)
08465e7a +0x1e6:  call   08724c50 <__cxa_throw>
08465e7f +0x1eb:  cmp    $0x1,%edx
08465e82 +0x1ee:  je     08465e8c <+0x1f8>
08465e84 +0x1f0:  mov    %eax,(%esp)
08465e87 +0x1f3:  call   08ae3750 <_Unwind_Resume>
08465e8c +0x1f8:  mov    %eax,(%esp)
08465e8f +0x1fb:  call   08725ce0 <__cxa_begin_catch>
08465e94 +0x200:  mov    (%eax),%eax
08465e96 +0x202:  mov    %eax,-0xc(%ebp)
08465e99 +0x205:  lea    -0x40(%ebp),%eax
08465e9c +0x208:  mov    %eax,(%esp)
08465e9f +0x20b:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08465ea4 +0x210:  mov    -0xc(%ebp),%eax
08465ea7 +0x213:  mov    %eax,0x8(%esp)
08465eab +0x217:  movl   $0x30,0x4(%esp)
08465eb3 +0x21f:  lea    -0x40(%ebp),%eax
08465eb6 +0x222:  mov    %eax,(%esp)
08465eb9 +0x225:  call   0845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>  ; WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)
08465ebe +0x22a:  mov    0x8(%ebp),%eax
08465ec1 +0x22d:  mov    (%eax),%eax
08465ec3 +0x22f:  lea    -0x40(%ebp),%edx
08465ec6 +0x232:  mov    %edx,0x4(%esp)
08465eca +0x236:  mov    %eax,(%esp)
08465ecd +0x239:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08465ed2 +0x23e:  mov    $0x0,%ebx
08465ed7 +0x243:  lea    -0x40(%ebp),%eax
08465eda +0x246:  mov    %eax,(%esp)
08465edd +0x249:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465ee2 +0x24e:  jmp    08465f0e <+0x27a>
08465ee4 +0x250:  mov    %edx,%ebx
08465ee6 +0x252:  mov    %eax,%esi
08465ee8 +0x254:  lea    -0x40(%ebp),%eax
08465eeb +0x257:  mov    %eax,(%esp)
08465eee +0x25a:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465ef3 +0x25f:  mov    %esi,%eax
08465ef5 +0x261:  mov    %ebx,%edx
08465ef7 +0x263:  jmp    08465ef9 <+0x265>
08465ef9 +0x265:  mov    %edx,%ebx
08465efb +0x267:  mov    %eax,%esi
08465efd +0x269:  call   08725c30 <__cxa_end_catch>
08465f02 +0x26e:  mov    %esi,%eax
08465f04 +0x270:  mov    %ebx,%edx
08465f06 +0x272:  mov    %eax,(%esp)
08465f09 +0x275:  call   08ae3750 <_Unwind_Resume>
08465f0e +0x27a:  call   08725c30 <__cxa_end_catch>
08465f13 +0x27f:  jmp    0846601b <+0x387>
08465f18 +0x284:  lea    -0x34(%ebp),%eax
08465f1b +0x287:  mov    %eax,(%esp)
08465f1e +0x28a:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08465f23 +0x28f:  movl   $0x8f,0x8(%esp)
08465f2b +0x297:  movl   $0x0,0x4(%esp)
08465f33 +0x29f:  lea    -0x34(%ebp),%eax
08465f36 +0x2a2:  mov    %eax,(%esp)
08465f39 +0x2a5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08465f3e +0x2aa:  mov    0x8(%ebp),%eax
08465f41 +0x2ad:  lea    0x14(%eax),%edx
08465f44 +0x2b0:  lea    -0x34(%ebp),%eax
08465f47 +0x2b3:  mov    %eax,0x4(%esp)
08465f4b +0x2b7:  mov    %edx,(%esp)
08465f4e +0x2ba:  call   08461828 <_ZN8WongWork11CDeathTower6CStage15makeStagePacketER11PacketGuard>  ; WongWork::CDeathTower::CStage::makeStagePacket(PacketGuard&)
08465f53 +0x2bf:  movl   $0x1,0x4(%esp)
08465f5b +0x2c7:  lea    -0x34(%ebp),%eax
08465f5e +0x2ca:  mov    %eax,(%esp)
08465f61 +0x2cd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08465f66 +0x2d2:  mov    0x8(%ebp),%eax
08465f69 +0x2d5:  mov    (%eax),%eax
08465f6b +0x2d7:  lea    -0x34(%ebp),%edx
08465f6e +0x2da:  mov    %edx,0x4(%esp)
08465f72 +0x2de:  mov    %eax,(%esp)
08465f75 +0x2e1:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08465f7a +0x2e6:  mov    0x8(%ebp),%eax
08465f7d +0x2e9:  mov    %eax,(%esp)
08465f80 +0x2ec:  call   084670f8 <_ZN8WongWork11CDeathTower17_checkMemberReadyEv>  ; WongWork::CDeathTower::_checkMemberReady()
08465f85 +0x2f1:  jmp    08465fa2 <+0x30e>
08465f87 +0x2f3:  mov    %edx,%ebx
08465f89 +0x2f5:  mov    %eax,%esi
08465f8b +0x2f7:  lea    -0x34(%ebp),%eax
08465f8e +0x2fa:  mov    %eax,(%esp)
08465f91 +0x2fd:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465f96 +0x302:  mov    %esi,%eax
08465f98 +0x304:  mov    %ebx,%edx
08465f9a +0x306:  mov    %eax,(%esp)
08465f9d +0x309:  call   08ae3750 <_Unwind_Resume>
08465fa2 +0x30e:  lea    -0x34(%ebp),%eax
08465fa5 +0x311:  mov    %eax,(%esp)
08465fa8 +0x314:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465fad +0x319:  mov    $0x1,%ebx
08465fb2 +0x31e:  jmp    0846601b <+0x387>
08465fb4 +0x320:  lea    -0x4c(%ebp),%eax
08465fb7 +0x323:  mov    %eax,(%esp)
08465fba +0x326:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08465fbf +0x32b:  movl   $0x16,0x8(%esp)
08465fc7 +0x333:  movl   $0x30,0x4(%esp)
08465fcf +0x33b:  lea    -0x4c(%ebp),%eax
08465fd2 +0x33e:  mov    %eax,(%esp)
08465fd5 +0x341:  call   0845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>  ; WongWork::CDeathTower::CPacketHandler::makeCommonError(ENUM_CMDPACKET, ENUM_ERROR)
08465fda +0x346:  mov    0x8(%ebp),%eax
08465fdd +0x349:  mov    (%eax),%eax
08465fdf +0x34b:  lea    -0x4c(%ebp),%edx
08465fe2 +0x34e:  mov    %edx,0x4(%esp)
08465fe6 +0x352:  mov    %eax,(%esp)
08465fe9 +0x355:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08465fee +0x35a:  mov    $0x0,%ebx
08465ff3 +0x35f:  lea    -0x4c(%ebp),%eax
08465ff6 +0x362:  mov    %eax,(%esp)
08465ff9 +0x365:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08465ffe +0x36a:  jmp    0846601b <+0x387>
08466000 +0x36c:  mov    %edx,%ebx
08466002 +0x36e:  mov    %eax,%esi
08466004 +0x370:  lea    -0x4c(%ebp),%eax
08466007 +0x373:  mov    %eax,(%esp)
0846600a +0x376:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
0846600f +0x37b:  mov    %esi,%eax
08466011 +0x37d:  mov    %ebx,%edx
08466013 +0x37f:  mov    %eax,(%esp)
08466016 +0x382:  call   08ae3750 <_Unwind_Resume>
0846601b +0x387:  mov    %ebx,%eax
0846601d +0x389:  add    $0x60,%esp
08466020 +0x38c:  pop    %ebx
08466021 +0x38d:  pop    %esi
08466022 +0x38e:  pop    %ebp
08466023 +0x38f:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::handleMoveMap @ 0x8465c94

/* WongWork::CDeathTower::handleMoveMap() */

undefined4 __thiscall WongWork::CDeathTower::handleMoveMap(CDeathTower *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  CPacketHandler local_50 [24];
  CPacketHandler local_38 [12];
  CPacketHandler local_2c [12];
  CPacketHandler local_20 [12];
  CMap *local_14;
  
  cVar1 = _checkMemberDie(this);
  if (cVar1 == '\0') {
    iVar2 = CStage::getState((CStage *)(this + 0x14));
    if (iVar2 < 2) {
      CPacketHandler::CPacketHandler(local_2c);
                    /* try { // try from 08465d4e to 08465d66 has its CatchHandler @ 08465d7c */
      CPacketHandler::makeCommonError(local_2c,0x30,0x13);
      CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_2c);
      uVar5 = 0;
      CPacketHandler::~CPacketHandler(local_2c);
    }
    else {
      uVar3 = CDungeonMgr::getEndStage((CDungeonMgr *)(this + 0xc));
      cVar1 = CStage::moveNextStage((CStage *)(this + 0x14),uVar3);
      if (cVar1 == '\0') {
        CPacketHandler::CPacketHandler(local_50);
                    /* try { // try from 08465fd5 to 08465fed has its CatchHandler @ 08466000 */
        CPacketHandler::makeCommonError(local_50,0x30,0x16);
        CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_50);
        uVar5 = 0;
        CPacketHandler::~CPacketHandler(local_50);
      }
      else {
        uVar3 = CStage::getCurrentStage((CStage *)(this + 0x14));
                    /* try { // try from 08465dda to 08465e7e has its CatchHandler @ 08465e7f */
        local_14 = (CMap *)CDungeonMgr::getStageMap((CDungeonMgr *)(this + 0xc),uVar3);
        if (local_14 == (CMap *)0x0) {
          puVar4 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar4 = 0x15;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
        }
        CStage::reset((CStage *)(this + 0x14));
        cVar1 = CStage::consistMap((CStage *)(this + 0x14),(CDungeonMgr *)(this + 0xc),local_14,this
                                  );
        if (cVar1 != '\x01') {
          puVar4 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
        }
        CPacketHandler::CPacketHandler(local_38);
                    /* try { // try from 08465f39 to 08465f84 has its CatchHandler @ 08465f87 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,0x8f);
        CStage::makeStagePacket((CStage *)(this + 0x14),(PacketGuard *)local_38);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
        CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_38);
        _checkMemberReady(this);
        CPacketHandler::~CPacketHandler(local_38);
        uVar5 = 1;
      }
    }
  }
  else {
    CPacketHandler::CPacketHandler(local_20);
                    /* try { // try from 08465ccc to 08465ce4 has its CatchHandler @ 08465cfa */
    CPacketHandler::makeCommonError(local_20,0x30,0x16);
    CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_20);
    uVar5 = 0;
    CPacketHandler::~CPacketHandler(local_20);
  }
  return uVar5;
}
```
