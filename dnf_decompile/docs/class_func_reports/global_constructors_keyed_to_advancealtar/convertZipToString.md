# convertZipToString

`_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j`

`global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to advancealtar` | `0x08141cac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08141cac  _GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j
#           global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)
# range [0x08141cac, 0x0814299f]
08141cac +0x000:  push   %ebp
08141cad +0x001:  mov    %esp,%ebp
08141caf +0x003:  sub    $0x18,%esp
08141cb2 +0x006:  movl   $0xffff,0x4(%esp)
08141cba +0x00e:  movl   $0x1,(%esp)
08141cc1 +0x015:  call   08141c6c <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08141cc6 +0x01a:  leave
08141cc7 +0x01b:  ret
08141cc8 +0x01c:  push   %ebp
08141cc9 +0x01d:  mov    %esp,%ebp
08141ccb +0x01f:  sub    $0x18,%esp
08141cce +0x022:  mov    0x8(%ebp),%eax
08141cd1 +0x025:  mov    %eax,(%esp)
08141cd4 +0x028:  call   0812c07c <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x71>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x71
08141cd9 +0x02d:  movl   $0x20,0x8(%esp)
08141ce1 +0x035:  movl   $0x0,0x4(%esp)
08141ce9 +0x03d:  mov    0x8(%ebp),%eax
08141cec +0x040:  mov    %eax,(%esp)
08141cef +0x043:  call   0807dcc0 <_init+0x5b8>
08141cf4 +0x048:  leave
08141cf5 +0x049:  ret
08141cf6 +0x04a:  push   %ebp
08141cf7 +0x04b:  mov    %esp,%ebp
08141cf9 +0x04d:  sub    $0x18,%esp
08141cfc +0x050:  mov    0x8(%ebp),%eax
08141cff +0x053:  mov    %eax,(%esp)
08141d02 +0x056:  call   0812c0be <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0xb3>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0xb3
08141d07 +0x05b:  mov    0x8(%ebp),%eax
08141d0a +0x05e:  movl   $&_ZTVN15CMDPacketStruct23_ResAdvanceAltarBuyItemE+0x8,(%eax)
08141d10 +0x064:  movl   $0x1c,0x8(%esp)
08141d18 +0x06c:  movl   $0x0,0x4(%esp)
08141d20 +0x074:  mov    0x8(%ebp),%eax
08141d23 +0x077:  mov    %eax,(%esp)
08141d26 +0x07a:  call   0807dcc0 <_init+0x5b8>
08141d2b +0x07f:  leave
08141d2c +0x080:  ret
08141d2d +0x081:  nop
08141d2e +0x082:  push   %ebp
08141d2f +0x083:  mov    %esp,%ebp
08141d31 +0x085:  sub    $0x18,%esp
08141d34 +0x088:  mov    0x8(%ebp),%eax
08141d37 +0x08b:  mov    %eax,(%esp)
08141d3a +0x08e:  call   0812c07c <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x71>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x71
08141d3f +0x093:  movl   $0x24,0x8(%esp)
08141d47 +0x09b:  movl   $0x0,0x4(%esp)
08141d4f +0x0a3:  mov    0x8(%ebp),%eax
08141d52 +0x0a6:  mov    %eax,(%esp)
08141d55 +0x0a9:  call   0807dcc0 <_init+0x5b8>
08141d5a +0x0ae:  leave
08141d5b +0x0af:  ret
08141d5c +0x0b0:  push   %ebp
08141d5d +0x0b1:  mov    %esp,%ebp
08141d5f +0x0b3:  sub    $0x18,%esp
08141d62 +0x0b6:  mov    0x8(%ebp),%eax
08141d65 +0x0b9:  mov    %eax,(%esp)
08141d68 +0x0bc:  call   0812c0be <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0xb3>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0xb3
08141d6d +0x0c1:  mov    0x8(%ebp),%eax
08141d70 +0x0c4:  movl   $&_ZTVN15CMDPacketStruct23_ResAdvanceAltarSetSlotE+0x8,(%eax)
08141d76 +0x0ca:  movl   $0x1c,0x8(%esp)
08141d7e +0x0d2:  movl   $0x0,0x4(%esp)
08141d86 +0x0da:  mov    0x8(%ebp),%eax
08141d89 +0x0dd:  mov    %eax,(%esp)
08141d8c +0x0e0:  call   0807dcc0 <_init+0x5b8>
08141d91 +0x0e5:  leave
08141d92 +0x0e6:  ret
08141d93 +0x0e7:  nop
08141d94 +0x0e8:  push   %ebp
08141d95 +0x0e9:  mov    %esp,%ebp
08141d97 +0x0eb:  sub    $0x18,%esp
08141d9a +0x0ee:  mov    0x8(%ebp),%eax
08141d9d +0x0f1:  mov    %eax,(%esp)
08141da0 +0x0f4:  call   0812c07c <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x71>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x71
08141da5 +0x0f9:  movl   $0x30,0x8(%esp)
08141dad +0x101:  movl   $0x0,0x4(%esp)
08141db5 +0x109:  mov    0x8(%ebp),%eax
08141db8 +0x10c:  mov    %eax,(%esp)
08141dbb +0x10f:  call   0807dcc0 <_init+0x5b8>
08141dc0 +0x114:  leave
08141dc1 +0x115:  ret
08141dc2 +0x116:  push   %ebp
08141dc3 +0x117:  mov    %esp,%ebp
08141dc5 +0x119:  sub    $0x18,%esp
08141dc8 +0x11c:  mov    0x8(%ebp),%eax
08141dcb +0x11f:  mov    %eax,(%esp)
08141dce +0x122:  call   0812c0be <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0xb3>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0xb3
08141dd3 +0x127:  mov    0x8(%ebp),%eax
08141dd6 +0x12a:  movl   $&_ZTVN15CMDPacketStruct28_ResAdvanceAltarExchangeSlotE+0x8,(%eax)
08141ddc +0x130:  movl   $0x24,0x8(%esp)
08141de4 +0x138:  movl   $0x0,0x4(%esp)
08141dec +0x140:  mov    0x8(%ebp),%eax
08141def +0x143:  mov    %eax,(%esp)
08141df2 +0x146:  call   0807dcc0 <_init+0x5b8>
08141df7 +0x14b:  leave
08141df8 +0x14c:  ret
08141df9 +0x14d:  nop
08141dfa +0x14e:  push   %ebp
08141dfb +0x14f:  mov    %esp,%ebp
08141dfd +0x151:  sub    $0x18,%esp
08141e00 +0x154:  mov    0x8(%ebp),%eax
08141e03 +0x157:  mov    %eax,(%esp)
08141e06 +0x15a:  call   0812c07c <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x71>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x71
08141e0b +0x15f:  movl   $0x18,0x8(%esp)
08141e13 +0x167:  movl   $0x0,0x4(%esp)
08141e1b +0x16f:  mov    0x8(%ebp),%eax
08141e1e +0x172:  mov    %eax,(%esp)
08141e21 +0x175:  call   0807dcc0 <_init+0x5b8>
08141e26 +0x17a:  leave
08141e27 +0x17b:  ret
08141e28 +0x17c:  push   %ebp
08141e29 +0x17d:  mov    %esp,%ebp
08141e2b +0x17f:  sub    $0x18,%esp
08141e2e +0x182:  mov    0x8(%ebp),%eax
08141e31 +0x185:  mov    %eax,(%esp)
08141e34 +0x188:  call   0812c0be <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0xb3>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0xb3
08141e39 +0x18d:  mov    0x8(%ebp),%eax
08141e3c +0x190:  movl   $&_ZTVN15CMDPacketStruct27_ResAdvanceAltarUpgradeGageE+0x8,(%eax)
08141e42 +0x196:  movl   $0x14,0x8(%esp)
08141e4a +0x19e:  movl   $0x0,0x4(%esp)
08141e52 +0x1a6:  mov    0x8(%ebp),%eax
08141e55 +0x1a9:  mov    %eax,(%esp)
08141e58 +0x1ac:  call   0807dcc0 <_init+0x5b8>
08141e5d +0x1b1:  leave
08141e5e +0x1b2:  ret
08141e5f +0x1b3:  nop
08141e60 +0x1b4:  push   %ebp
08141e61 +0x1b5:  mov    %esp,%ebp
08141e63 +0x1b7:  sub    $0x18,%esp
08141e66 +0x1ba:  mov    0x8(%ebp),%eax
08141e69 +0x1bd:  mov    %eax,(%esp)
08141e6c +0x1c0:  call   0812c07c <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x71>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x71
08141e71 +0x1c5:  movl   $0x18,0x8(%esp)
08141e79 +0x1cd:  movl   $0x0,0x4(%esp)
08141e81 +0x1d5:  mov    0x8(%ebp),%eax
08141e84 +0x1d8:  mov    %eax,(%esp)
08141e87 +0x1db:  call   0807dcc0 <_init+0x5b8>
08141e8c +0x1e0:  leave
08141e8d +0x1e1:  ret
08141e8e +0x1e2:  push   %ebp
08141e8f +0x1e3:  mov    %esp,%ebp
08141e91 +0x1e5:  sub    $0x18,%esp
08141e94 +0x1e8:  mov    0x8(%ebp),%eax
08141e97 +0x1eb:  mov    %eax,(%esp)
08141e9a +0x1ee:  call   0812c0be <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0xb3>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0xb3
08141e9f +0x1f3:  mov    0x8(%ebp),%eax
08141ea2 +0x1f6:  movl   $&_ZTVN15CMDPacketStruct26_ResAdvanceAltarSummonUnitE+0x8,(%eax)
08141ea8 +0x1fc:  movl   $0x14,0x8(%esp)
08141eb0 +0x204:  movl   $0x0,0x4(%esp)
08141eb8 +0x20c:  mov    0x8(%ebp),%eax
08141ebb +0x20f:  mov    %eax,(%esp)
08141ebe +0x212:  call   0807dcc0 <_init+0x5b8>
08141ec3 +0x217:  leave
08141ec4 +0x218:  ret
08141ec5 +0x219:  nop
08141ec6 +0x21a:  push   %ebp
08141ec7 +0x21b:  mov    %esp,%ebp
08141ec9 +0x21d:  sub    $0x18,%esp
08141ecc +0x220:  mov    0x8(%ebp),%eax
08141ecf +0x223:  mov    %eax,(%esp)
08141ed2 +0x226:  call   0812c07c <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x71>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x71
08141ed7 +0x22b:  movl   $0xe,0x8(%esp)
08141edf +0x233:  movl   $0x0,0x4(%esp)
08141ee7 +0x23b:  mov    0x8(%ebp),%eax
08141eea +0x23e:  mov    %eax,(%esp)
08141eed +0x241:  call   0807dcc0 <_init+0x5b8>
08141ef2 +0x246:  leave
08141ef3 +0x247:  ret
08141ef4 +0x248:  push   %ebp
08141ef5 +0x249:  mov    %esp,%ebp
08141ef7 +0x24b:  sub    $0x18,%esp
08141efa +0x24e:  mov    0x8(%ebp),%eax
08141efd +0x251:  mov    %eax,(%esp)
08141f00 +0x254:  call   0812c0be <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0xb3>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0xb3
08141f05 +0x259:  mov    0x8(%ebp),%eax
08141f08 +0x25c:  movl   $&_ZTVN15CMDPacketStruct21_ResAdvanceAltarPauseE+0x8,(%eax)
08141f0e +0x262:  movl   $0xc,0x8(%esp)
08141f16 +0x26a:  movl   $0x0,0x4(%esp)
08141f1e +0x272:  mov    0x8(%ebp),%eax
08141f21 +0x275:  mov    %eax,(%esp)
08141f24 +0x278:  call   0807dcc0 <_init+0x5b8>
08141f29 +0x27d:  leave
08141f2a +0x27e:  ret
08141f2b +0x27f:  nop
08141f2c +0x280:  push   %ebp
08141f2d +0x281:  mov    %esp,%ebp
08141f2f +0x283:  sub    $0x18,%esp
08141f32 +0x286:  mov    0x8(%ebp),%eax
08141f35 +0x289:  mov    %eax,(%esp)
08141f38 +0x28c:  call   0812c07c <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x71>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x71
08141f3d +0x291:  movl   $0x14,0x8(%esp)
08141f45 +0x299:  movl   $0x0,0x4(%esp)
08141f4d +0x2a1:  mov    0x8(%ebp),%eax
08141f50 +0x2a4:  mov    %eax,(%esp)
08141f53 +0x2a7:  call   0807dcc0 <_init+0x5b8>
08141f58 +0x2ac:  leave
08141f59 +0x2ad:  ret
08141f5a +0x2ae:  push   %ebp
08141f5b +0x2af:  mov    %esp,%ebp
08141f5d +0x2b1:  sub    $0x18,%esp
08141f60 +0x2b4:  mov    0x8(%ebp),%eax
08141f63 +0x2b7:  mov    %eax,(%esp)
08141f66 +0x2ba:  call   0812c0be <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0xb3>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0xb3
08141f6b +0x2bf:  mov    0x8(%ebp),%eax
08141f6e +0x2c2:  movl   $&_ZTVN15CMDPacketStruct36_ResAdvanceAltarGetAchievementRewardE+0x8,(%eax)
08141f74 +0x2c8:  movl   $0xc,0x8(%esp)
08141f7c +0x2d0:  movl   $0x0,0x4(%esp)
08141f84 +0x2d8:  mov    0x8(%ebp),%eax
08141f87 +0x2db:  mov    %eax,(%esp)
08141f8a +0x2de:  call   0807dcc0 <_init+0x5b8>
08141f8f +0x2e3:  leave
08141f90 +0x2e4:  ret
08141f91 +0x2e5:  nop
08141f92 +0x2e6:  push   %ebp
08141f93 +0x2e7:  mov    %esp,%ebp
08141f95 +0x2e9:  sub    $0x18,%esp
08141f98 +0x2ec:  mov    0x8(%ebp),%eax
08141f9b +0x2ef:  mov    %eax,(%esp)
08141f9e +0x2f2:  call   0812c07c <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x71>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x71
08141fa3 +0x2f7:  movl   $0x14,0x8(%esp)
08141fab +0x2ff:  movl   $0x0,0x4(%esp)
08141fb3 +0x307:  mov    0x8(%ebp),%eax
08141fb6 +0x30a:  mov    %eax,(%esp)
08141fb9 +0x30d:  call   0807dcc0 <_init+0x5b8>
08141fbe +0x312:  leave
08141fbf +0x313:  ret
08141fc0 +0x314:  push   %ebp
08141fc1 +0x315:  mov    %esp,%ebp
08141fc3 +0x317:  sub    $0x18,%esp
08141fc6 +0x31a:  mov    0x8(%ebp),%eax
08141fc9 +0x31d:  mov    %eax,(%esp)
08141fcc +0x320:  call   0812c0be <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0xb3>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0xb3
08141fd1 +0x325:  mov    0x8(%ebp),%eax
08141fd4 +0x328:  movl   $&_ZTVN15CMDPacketStruct25_ResAdvanceAltarResetStarE+0x8,(%eax)
08141fda +0x32e:  movl   $0xc,0x8(%esp)
08141fe2 +0x336:  movl   $0x0,0x4(%esp)
08141fea +0x33e:  mov    0x8(%ebp),%eax
08141fed +0x341:  mov    %eax,(%esp)
08141ff0 +0x344:  call   0807dcc0 <_init+0x5b8>
08141ff5 +0x349:  leave
08141ff6 +0x34a:  ret
08141ff7 +0x34b:  nop
08141ff8 +0x34c:  push   %ebp
08141ff9 +0x34d:  mov    %esp,%ebp
08141ffb +0x34f:  sub    $0x18,%esp
08141ffe +0x352:  movl   $0x1,0x8(%esp)
08142006 +0x35a:  movl   $0x0,0x4(%esp)
0814200e +0x362:  mov    0x8(%ebp),%eax
08142011 +0x365:  mov    %eax,(%esp)
08142014 +0x368:  call   0807dcc0 <_init+0x5b8>
08142019 +0x36d:  leave
0814201a +0x36e:  ret
0814201b +0x36f:  nop
0814201c +0x370:  push   %ebp
0814201d +0x371:  mov    %esp,%ebp
0814201f +0x373:  sub    $0x28,%esp
08142022 +0x376:  mov    0x8(%ebp),%eax
08142025 +0x379:  mov    0xc(%eax),%eax
08142028 +0x37c:  test   %eax,%eax
0814202a +0x37e:  je     08142045 <+0x399>
0814202c +0x380:  mov    0xc(%ebp),%eax
0814202f +0x383:  mov    %eax,0x4(%esp)
08142033 +0x387:  mov    0x8(%ebp),%eax
08142036 +0x38a:  mov    %eax,(%esp)
08142039 +0x38d:  call   080e22d0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x76>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x76
0814203e +0x392:  xor    $0x1,%eax
08142041 +0x395:  test   %al,%al
08142043 +0x397:  je     0814204c <+0x3a0>
08142045 +0x399:  mov    $0x1,%eax
0814204a +0x39e:  jmp    08142051 <+0x3a5>
0814204c +0x3a0:  mov    $0x0,%eax
08142051 +0x3a5:  test   %al,%al
08142053 +0x3a7:  je     0814205c <+0x3b0>
08142055 +0x3a9:  mov    $0x0,%eax
0814205a +0x3ae:  jmp    08142086 <+0x3da>
0814205c +0x3b0:  mov    0x8(%ebp),%eax
0814205f +0x3b3:  mov    0xc(%eax),%eax
08142062 +0x3b6:  mov    0xc(%ebp),%edx
08142065 +0x3b9:  shl    $0x2,%edx
08142068 +0x3bc:  add    %edx,%eax
0814206a +0x3be:  mov    (%eax),%eax
0814206c +0x3c0:  mov    %eax,(%esp)
0814206f +0x3c3:  call   0807e6f0 <_init+0xfe8>
08142074 +0x3c8:  mov    %ax,-0xa(%ebp)
08142078 +0x3cc:  movswl -0xa(%ebp),%edx
0814207c +0x3d0:  mov    0x10(%ebp),%eax
0814207f +0x3d3:  mov    %edx,(%eax)
08142081 +0x3d5:  mov    $0x1,%eax
08142086 +0x3da:  leave
08142087 +0x3db:  ret
08142088 +0x3dc:  push   %ebp
08142089 +0x3dd:  mov    %esp,%ebp
0814208b +0x3df:  mov    0x8(%ebp),%eax
0814208e +0x3e2:  mov    0xc(%eax),%eax
08142091 +0x3e5:  pop    %ebp
08142092 +0x3e6:  ret
08142093 +0x3e7:  nop
08142094 +0x3e8:  push   %ebp
08142095 +0x3e9:  mov    %esp,%ebp
08142097 +0x3eb:  mov    0x8(%ebp),%eax
0814209a +0x3ee:  mov    0x8(%eax),%eax
0814209d +0x3f1:  pop    %ebp
0814209e +0x3f2:  ret
0814209f +0x3f3:  nop
081420a0 +0x3f4:  push   %ebp
081420a1 +0x3f5:  mov    %esp,%ebp
081420a3 +0x3f7:  sub    $0x18,%esp
081420a6 +0x3fa:  mov    0x8(%ebp),%eax
081420a9 +0x3fd:  movl   $&_ZTVN12advancealtar7DB_LoadE+0x8,(%eax)
081420af +0x403:  mov    0x8(%ebp),%eax
081420b2 +0x406:  mov    %eax,(%esp)
081420b5 +0x409:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
081420ba +0x40e:  mov    $0x0,%eax
081420bf +0x413:  test   %al,%al
081420c1 +0x415:  je     081420ce <+0x422>
081420c3 +0x417:  mov    0x8(%ebp),%eax
081420c6 +0x41a:  mov    %eax,(%esp)
081420c9 +0x41d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081420ce +0x422:  leave
081420cf +0x423:  ret
081420d0 +0x424:  push   %ebp
081420d1 +0x425:  mov    %esp,%ebp
081420d3 +0x427:  sub    $0x18,%esp
081420d6 +0x42a:  mov    0x8(%ebp),%eax
081420d9 +0x42d:  mov    %eax,(%esp)
081420dc +0x430:  call   081420a0 <+0x3f4>
081420e1 +0x435:  mov    0x8(%ebp),%eax
081420e4 +0x438:  mov    %eax,(%esp)
081420e7 +0x43b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081420ec +0x440:  leave
081420ed +0x441:  ret
081420ee +0x442:  push   %ebp
081420ef +0x443:  mov    %esp,%ebp
081420f1 +0x445:  sub    $0x18,%esp
081420f4 +0x448:  mov    0x8(%ebp),%eax
081420f7 +0x44b:  movl   $&_ZTVN12advancealtar9DB_UpdateE+0x8,(%eax)
081420fd +0x451:  mov    0x8(%ebp),%eax
08142100 +0x454:  mov    %eax,(%esp)
08142103 +0x457:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08142108 +0x45c:  mov    $0x0,%eax
0814210d +0x461:  test   %al,%al
0814210f +0x463:  je     0814211c <+0x470>
08142111 +0x465:  mov    0x8(%ebp),%eax
08142114 +0x468:  mov    %eax,(%esp)
08142117 +0x46b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814211c +0x470:  leave
0814211d +0x471:  ret
0814211e +0x472:  push   %ebp
0814211f +0x473:  mov    %esp,%ebp
08142121 +0x475:  sub    $0x18,%esp
08142124 +0x478:  mov    0x8(%ebp),%eax
08142127 +0x47b:  mov    %eax,(%esp)
0814212a +0x47e:  call   081420ee <+0x442>
0814212f +0x483:  mov    0x8(%ebp),%eax
08142132 +0x486:  mov    %eax,(%esp)
08142135 +0x489:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814213a +0x48e:  leave
0814213b +0x48f:  ret
0814213c +0x490:  push   %ebp
0814213d +0x491:  mov    %esp,%ebp
0814213f +0x493:  sub    $0x18,%esp
08142142 +0x496:  mov    0x8(%ebp),%eax
08142145 +0x499:  movl   $&_ZTVN12advancealtar10Inter_LoadE+0x8,(%eax)
0814214b +0x49f:  mov    0x8(%ebp),%eax
0814214e +0x4a2:  mov    %eax,(%esp)
08142151 +0x4a5:  call   080e23bc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x162>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x162
08142156 +0x4aa:  mov    $0x0,%eax
0814215b +0x4af:  test   %al,%al
0814215d +0x4b1:  je     0814216a <+0x4be>
0814215f +0x4b3:  mov    0x8(%ebp),%eax
08142162 +0x4b6:  mov    %eax,(%esp)
08142165 +0x4b9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814216a +0x4be:  leave
0814216b +0x4bf:  ret
0814216c +0x4c0:  push   %ebp
0814216d +0x4c1:  mov    %esp,%ebp
0814216f +0x4c3:  sub    $0x18,%esp
08142172 +0x4c6:  mov    0x8(%ebp),%eax
08142175 +0x4c9:  mov    %eax,(%esp)
08142178 +0x4cc:  call   0814213c <+0x490>
0814217d +0x4d1:  mov    0x8(%ebp),%eax
08142180 +0x4d4:  mov    %eax,(%esp)
08142183 +0x4d7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142188 +0x4dc:  leave
08142189 +0x4dd:  ret
0814218a +0x4de:  push   %ebp
0814218b +0x4df:  mov    %esp,%ebp
0814218d +0x4e1:  sub    $0x18,%esp
08142190 +0x4e4:  mov    0x8(%ebp),%eax
08142193 +0x4e7:  movl   $&_ZTVN12advancealtar20Dispatcher_StartGameE+0x8,(%eax)
08142199 +0x4ed:  mov    0x8(%ebp),%eax
0814219c +0x4f0:  mov    %eax,(%esp)
0814219f +0x4f3:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081421a4 +0x4f8:  mov    $0x0,%eax
081421a9 +0x4fd:  test   %al,%al
081421ab +0x4ff:  je     081421b8 <+0x50c>
081421ad +0x501:  mov    0x8(%ebp),%eax
081421b0 +0x504:  mov    %eax,(%esp)
081421b3 +0x507:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081421b8 +0x50c:  leave
081421b9 +0x50d:  ret
081421ba +0x50e:  push   %ebp
081421bb +0x50f:  mov    %esp,%ebp
081421bd +0x511:  sub    $0x18,%esp
081421c0 +0x514:  mov    0x8(%ebp),%eax
081421c3 +0x517:  mov    %eax,(%esp)
081421c6 +0x51a:  call   0814218a <+0x4de>
081421cb +0x51f:  mov    0x8(%ebp),%eax
081421ce +0x522:  mov    %eax,(%esp)
081421d1 +0x525:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081421d6 +0x52a:  leave
081421d7 +0x52b:  ret
081421d8 +0x52c:  push   %ebp
081421d9 +0x52d:  mov    %esp,%ebp
081421db +0x52f:  sub    $0x18,%esp
081421de +0x532:  mov    0x8(%ebp),%eax
081421e1 +0x535:  movl   $&_ZTVN12advancealtar18Dispatcher_BuyItemE+0x8,(%eax)
081421e7 +0x53b:  mov    0x8(%ebp),%eax
081421ea +0x53e:  mov    %eax,(%esp)
081421ed +0x541:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081421f2 +0x546:  mov    $0x0,%eax
081421f7 +0x54b:  test   %al,%al
081421f9 +0x54d:  je     08142206 <+0x55a>
081421fb +0x54f:  mov    0x8(%ebp),%eax
081421fe +0x552:  mov    %eax,(%esp)
08142201 +0x555:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142206 +0x55a:  leave
08142207 +0x55b:  ret
08142208 +0x55c:  push   %ebp
08142209 +0x55d:  mov    %esp,%ebp
0814220b +0x55f:  sub    $0x18,%esp
0814220e +0x562:  mov    0x8(%ebp),%eax
08142211 +0x565:  mov    %eax,(%esp)
08142214 +0x568:  call   081421d8 <+0x52c>
08142219 +0x56d:  mov    0x8(%ebp),%eax
0814221c +0x570:  mov    %eax,(%esp)
0814221f +0x573:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142224 +0x578:  leave
08142225 +0x579:  ret
08142226 +0x57a:  push   %ebp
08142227 +0x57b:  mov    %esp,%ebp
08142229 +0x57d:  mov    $0x0,%eax
0814222e +0x582:  pop    %ebp
0814222f +0x583:  ret
08142230 +0x584:  push   %ebp
08142231 +0x585:  mov    %esp,%ebp
08142233 +0x587:  mov    $0x0,%eax
08142238 +0x58c:  pop    %ebp
08142239 +0x58d:  ret
0814223a +0x58e:  push   %ebp
0814223b +0x58f:  mov    %esp,%ebp
0814223d +0x591:  sub    $0x18,%esp
08142240 +0x594:  mov    0x8(%ebp),%eax
08142243 +0x597:  movl   $&_ZTVN12advancealtar18Dispatcher_SetSlotE+0x8,(%eax)
08142249 +0x59d:  mov    0x8(%ebp),%eax
0814224c +0x5a0:  mov    %eax,(%esp)
0814224f +0x5a3:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
08142254 +0x5a8:  mov    $0x0,%eax
08142259 +0x5ad:  test   %al,%al
0814225b +0x5af:  je     08142268 <+0x5bc>
0814225d +0x5b1:  mov    0x8(%ebp),%eax
08142260 +0x5b4:  mov    %eax,(%esp)
08142263 +0x5b7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142268 +0x5bc:  leave
08142269 +0x5bd:  ret
0814226a +0x5be:  push   %ebp
0814226b +0x5bf:  mov    %esp,%ebp
0814226d +0x5c1:  sub    $0x18,%esp
08142270 +0x5c4:  mov    0x8(%ebp),%eax
08142273 +0x5c7:  mov    %eax,(%esp)
08142276 +0x5ca:  call   0814223a <+0x58e>
0814227b +0x5cf:  mov    0x8(%ebp),%eax
0814227e +0x5d2:  mov    %eax,(%esp)
08142281 +0x5d5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142286 +0x5da:  leave
08142287 +0x5db:  ret
08142288 +0x5dc:  push   %ebp
08142289 +0x5dd:  mov    %esp,%ebp
0814228b +0x5df:  mov    $0x0,%eax
08142290 +0x5e4:  pop    %ebp
08142291 +0x5e5:  ret
08142292 +0x5e6:  push   %ebp
08142293 +0x5e7:  mov    %esp,%ebp
08142295 +0x5e9:  mov    $0x0,%eax
0814229a +0x5ee:  pop    %ebp
0814229b +0x5ef:  ret
0814229c +0x5f0:  push   %ebp
0814229d +0x5f1:  mov    %esp,%ebp
0814229f +0x5f3:  sub    $0x18,%esp
081422a2 +0x5f6:  mov    0x8(%ebp),%eax
081422a5 +0x5f9:  movl   $&_ZTVN12advancealtar22Dispatcher_UpgradeGageE+0x8,(%eax)
081422ab +0x5ff:  mov    0x8(%ebp),%eax
081422ae +0x602:  mov    %eax,(%esp)
081422b1 +0x605:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081422b6 +0x60a:  mov    $0x0,%eax
081422bb +0x60f:  test   %al,%al
081422bd +0x611:  je     081422ca <+0x61e>
081422bf +0x613:  mov    0x8(%ebp),%eax
081422c2 +0x616:  mov    %eax,(%esp)
081422c5 +0x619:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081422ca +0x61e:  leave
081422cb +0x61f:  ret
081422cc +0x620:  push   %ebp
081422cd +0x621:  mov    %esp,%ebp
081422cf +0x623:  sub    $0x18,%esp
081422d2 +0x626:  mov    0x8(%ebp),%eax
081422d5 +0x629:  mov    %eax,(%esp)
081422d8 +0x62c:  call   0814229c <+0x5f0>
081422dd +0x631:  mov    0x8(%ebp),%eax
081422e0 +0x634:  mov    %eax,(%esp)
081422e3 +0x637:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081422e8 +0x63c:  leave
081422e9 +0x63d:  ret
081422ea +0x63e:  push   %ebp
081422eb +0x63f:  mov    %esp,%ebp
081422ed +0x641:  mov    $0x0,%eax
081422f2 +0x646:  pop    %ebp
081422f3 +0x647:  ret
081422f4 +0x648:  push   %ebp
081422f5 +0x649:  mov    %esp,%ebp
081422f7 +0x64b:  mov    $0x0,%eax
081422fc +0x650:  pop    %ebp
081422fd +0x651:  ret
081422fe +0x652:  push   %ebp
081422ff +0x653:  mov    %esp,%ebp
08142301 +0x655:  sub    $0x18,%esp
08142304 +0x658:  mov    0x8(%ebp),%eax
08142307 +0x65b:  movl   $&_ZTVN12advancealtar21Dispatcher_SummonUnitE+0x8,(%eax)
0814230d +0x661:  mov    0x8(%ebp),%eax
08142310 +0x664:  mov    %eax,(%esp)
08142313 +0x667:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
08142318 +0x66c:  mov    $0x0,%eax
0814231d +0x671:  test   %al,%al
0814231f +0x673:  je     0814232c <+0x680>
08142321 +0x675:  mov    0x8(%ebp),%eax
08142324 +0x678:  mov    %eax,(%esp)
08142327 +0x67b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814232c +0x680:  leave
0814232d +0x681:  ret
0814232e +0x682:  push   %ebp
0814232f +0x683:  mov    %esp,%ebp
08142331 +0x685:  sub    $0x18,%esp
08142334 +0x688:  mov    0x8(%ebp),%eax
08142337 +0x68b:  mov    %eax,(%esp)
0814233a +0x68e:  call   081422fe <+0x652>
0814233f +0x693:  mov    0x8(%ebp),%eax
08142342 +0x696:  mov    %eax,(%esp)
08142345 +0x699:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814234a +0x69e:  leave
0814234b +0x69f:  ret
0814234c +0x6a0:  push   %ebp
0814234d +0x6a1:  mov    %esp,%ebp
0814234f +0x6a3:  mov    $0x0,%eax
08142354 +0x6a8:  pop    %ebp
08142355 +0x6a9:  ret
08142356 +0x6aa:  push   %ebp
08142357 +0x6ab:  mov    %esp,%ebp
08142359 +0x6ad:  mov    $0x0,%eax
0814235e +0x6b2:  pop    %ebp
0814235f +0x6b3:  ret
08142360 +0x6b4:  push   %ebp
08142361 +0x6b5:  mov    %esp,%ebp
08142363 +0x6b7:  sub    $0x18,%esp
08142366 +0x6ba:  mov    0x8(%ebp),%eax
08142369 +0x6bd:  movl   $&_ZTVN12advancealtar23Dispatcher_ExchangeSlotE+0x8,(%eax)
0814236f +0x6c3:  mov    0x8(%ebp),%eax
08142372 +0x6c6:  mov    %eax,(%esp)
08142375 +0x6c9:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
0814237a +0x6ce:  mov    $0x0,%eax
0814237f +0x6d3:  test   %al,%al
08142381 +0x6d5:  je     0814238e <+0x6e2>
08142383 +0x6d7:  mov    0x8(%ebp),%eax
08142386 +0x6da:  mov    %eax,(%esp)
08142389 +0x6dd:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814238e +0x6e2:  leave
0814238f +0x6e3:  ret
08142390 +0x6e4:  push   %ebp
08142391 +0x6e5:  mov    %esp,%ebp
08142393 +0x6e7:  sub    $0x18,%esp
08142396 +0x6ea:  mov    0x8(%ebp),%eax
08142399 +0x6ed:  mov    %eax,(%esp)
0814239c +0x6f0:  call   08142360 <+0x6b4>
081423a1 +0x6f5:  mov    0x8(%ebp),%eax
081423a4 +0x6f8:  mov    %eax,(%esp)
081423a7 +0x6fb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081423ac +0x700:  leave
081423ad +0x701:  ret
081423ae +0x702:  push   %ebp
081423af +0x703:  mov    %esp,%ebp
081423b1 +0x705:  mov    $0x0,%eax
081423b6 +0x70a:  pop    %ebp
081423b7 +0x70b:  ret
081423b8 +0x70c:  push   %ebp
081423b9 +0x70d:  mov    %esp,%ebp
081423bb +0x70f:  mov    $0x0,%eax
081423c0 +0x714:  pop    %ebp
081423c1 +0x715:  ret
081423c2 +0x716:  push   %ebp
081423c3 +0x717:  mov    %esp,%ebp
081423c5 +0x719:  sub    $0x18,%esp
081423c8 +0x71c:  mov    0x8(%ebp),%eax
081423cb +0x71f:  movl   $&_ZTVN12advancealtar16Dispatcher_PauseE+0x8,(%eax)
081423d1 +0x725:  mov    0x8(%ebp),%eax
081423d4 +0x728:  mov    %eax,(%esp)
081423d7 +0x72b:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081423dc +0x730:  mov    $0x0,%eax
081423e1 +0x735:  test   %al,%al
081423e3 +0x737:  je     081423f0 <+0x744>
081423e5 +0x739:  mov    0x8(%ebp),%eax
081423e8 +0x73c:  mov    %eax,(%esp)
081423eb +0x73f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081423f0 +0x744:  leave
081423f1 +0x745:  ret
081423f2 +0x746:  push   %ebp
081423f3 +0x747:  mov    %esp,%ebp
081423f5 +0x749:  sub    $0x18,%esp
081423f8 +0x74c:  mov    0x8(%ebp),%eax
081423fb +0x74f:  mov    %eax,(%esp)
081423fe +0x752:  call   081423c2 <+0x716>
08142403 +0x757:  mov    0x8(%ebp),%eax
08142406 +0x75a:  mov    %eax,(%esp)
08142409 +0x75d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814240e +0x762:  leave
0814240f +0x763:  ret
08142410 +0x764:  push   %ebp
08142411 +0x765:  mov    %esp,%ebp
08142413 +0x767:  mov    $0x0,%eax
08142418 +0x76c:  pop    %ebp
08142419 +0x76d:  ret
0814241a +0x76e:  push   %ebp
0814241b +0x76f:  mov    %esp,%ebp
0814241d +0x771:  mov    $0x0,%eax
08142422 +0x776:  pop    %ebp
08142423 +0x777:  ret
08142424 +0x778:  push   %ebp
08142425 +0x779:  mov    %esp,%ebp
08142427 +0x77b:  sub    $0x18,%esp
0814242a +0x77e:  mov    0x8(%ebp),%eax
0814242d +0x781:  movl   $&_ZTVN12advancealtar31Dispatcher_GetAchievementRewardE+0x8,(%eax)
08142433 +0x787:  mov    0x8(%ebp),%eax
08142436 +0x78a:  mov    %eax,(%esp)
08142439 +0x78d:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
0814243e +0x792:  mov    $0x0,%eax
08142443 +0x797:  test   %al,%al
08142445 +0x799:  je     08142452 <+0x7a6>
08142447 +0x79b:  mov    0x8(%ebp),%eax
0814244a +0x79e:  mov    %eax,(%esp)
0814244d +0x7a1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142452 +0x7a6:  leave
08142453 +0x7a7:  ret
08142454 +0x7a8:  push   %ebp
08142455 +0x7a9:  mov    %esp,%ebp
08142457 +0x7ab:  sub    $0x18,%esp
0814245a +0x7ae:  mov    0x8(%ebp),%eax
0814245d +0x7b1:  mov    %eax,(%esp)
08142460 +0x7b4:  call   08142424 <+0x778>
08142465 +0x7b9:  mov    0x8(%ebp),%eax
08142468 +0x7bc:  mov    %eax,(%esp)
0814246b +0x7bf:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142470 +0x7c4:  leave
08142471 +0x7c5:  ret
08142472 +0x7c6:  push   %ebp
08142473 +0x7c7:  mov    %esp,%ebp
08142475 +0x7c9:  mov    $0x0,%eax
0814247a +0x7ce:  pop    %ebp
0814247b +0x7cf:  ret
0814247c +0x7d0:  push   %ebp
0814247d +0x7d1:  mov    %esp,%ebp
0814247f +0x7d3:  mov    $0x0,%eax
08142484 +0x7d8:  pop    %ebp
08142485 +0x7d9:  ret
08142486 +0x7da:  push   %ebp
08142487 +0x7db:  mov    %esp,%ebp
08142489 +0x7dd:  sub    $0x18,%esp
0814248c +0x7e0:  mov    0x8(%ebp),%eax
0814248f +0x7e3:  movl   $&_ZTVN12advancealtar20Dispatcher_ResetStarE+0x8,(%eax)
08142495 +0x7e9:  mov    0x8(%ebp),%eax
08142498 +0x7ec:  mov    %eax,(%esp)
0814249b +0x7ef:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081424a0 +0x7f4:  mov    $0x0,%eax
081424a5 +0x7f9:  test   %al,%al
081424a7 +0x7fb:  je     081424b4 <+0x808>
081424a9 +0x7fd:  mov    0x8(%ebp),%eax
081424ac +0x800:  mov    %eax,(%esp)
081424af +0x803:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081424b4 +0x808:  leave
081424b5 +0x809:  ret
081424b6 +0x80a:  push   %ebp
081424b7 +0x80b:  mov    %esp,%ebp
081424b9 +0x80d:  sub    $0x18,%esp
081424bc +0x810:  mov    0x8(%ebp),%eax
081424bf +0x813:  mov    %eax,(%esp)
081424c2 +0x816:  call   08142486 <+0x7da>
081424c7 +0x81b:  mov    0x8(%ebp),%eax
081424ca +0x81e:  mov    %eax,(%esp)
081424cd +0x821:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081424d2 +0x826:  leave
081424d3 +0x827:  ret
081424d4 +0x828:  push   %ebp
081424d5 +0x829:  mov    %esp,%ebp
081424d7 +0x82b:  mov    $0x0,%eax
081424dc +0x830:  pop    %ebp
081424dd +0x831:  ret
081424de +0x832:  push   %ebp
081424df +0x833:  mov    %esp,%ebp
081424e1 +0x835:  mov    $0x0,%eax
081424e6 +0x83a:  pop    %ebp
081424e7 +0x83b:  ret
081424e8 +0x83c:  push   %ebp
081424e9 +0x83d:  mov    %esp,%ebp
081424eb +0x83f:  push   %ebx
081424ec +0x840:  mov    0x8(%ebp),%eax
081424ef +0x843:  mov    0x20(%eax),%eax
081424f2 +0x846:  cmp    $0x10,%eax
081424f5 +0x849:  ja     08142514 <+0x868>
081424f7 +0x84b:  mov    $0x1,%edx
081424fc +0x850:  mov    %edx,%ebx
081424fe +0x852:  mov    %eax,%ecx
08142500 +0x854:  shl    %cl,%ebx
08142502 +0x856:  mov    %ebx,%eax
08142504 +0x858:  and    $&_ZL14gUnicodeBuffer+0x142c4,%eax
08142509 +0x85d:  test   %eax,%eax
0814250b +0x85f:  je     08142514 <+0x868>
0814250d +0x861:  mov    $0x1,%eax
08142512 +0x866:  jmp    08142519 <+0x86d>
08142514 +0x868:  mov    $0x0,%eax
08142519 +0x86d:  pop    %ebx
0814251a +0x86e:  pop    %ebp
0814251b +0x86f:  ret
0814251c +0x870:  push   %ebp
0814251d +0x871:  mov    %esp,%ebp
0814251f +0x873:  sub    $0x18,%esp
08142522 +0x876:  mov    0x8(%ebp),%eax
08142525 +0x879:  movl   $&_ZTVN15CMDPacketStruct23_ResAdvanceAltarBuyItemE+0x8,(%eax)
0814252b +0x87f:  mov    0x8(%ebp),%eax
0814252e +0x882:  mov    %eax,(%esp)
08142531 +0x885:  call   0812c028 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x1d>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x1d
08142536 +0x88a:  mov    $0x0,%eax
0814253b +0x88f:  test   %al,%al
0814253d +0x891:  je     0814254a <+0x89e>
0814253f +0x893:  mov    0x8(%ebp),%eax
08142542 +0x896:  mov    %eax,(%esp)
08142545 +0x899:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814254a +0x89e:  leave
0814254b +0x89f:  ret
0814254c +0x8a0:  push   %ebp
0814254d +0x8a1:  mov    %esp,%ebp
0814254f +0x8a3:  sub    $0x18,%esp
08142552 +0x8a6:  mov    0x8(%ebp),%eax
08142555 +0x8a9:  mov    %eax,(%esp)
08142558 +0x8ac:  call   0814251c <+0x870>
0814255d +0x8b1:  mov    0x8(%ebp),%eax
08142560 +0x8b4:  mov    %eax,(%esp)
08142563 +0x8b7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142568 +0x8bc:  leave
08142569 +0x8bd:  ret
0814256a +0x8be:  push   %ebp
0814256b +0x8bf:  mov    %esp,%ebp
0814256d +0x8c1:  sub    $0x18,%esp
08142570 +0x8c4:  mov    0x8(%ebp),%eax
08142573 +0x8c7:  movl   $&_ZTVN15CMDPacketStruct23_ResAdvanceAltarSetSlotE+0x8,(%eax)
08142579 +0x8cd:  mov    0x8(%ebp),%eax
0814257c +0x8d0:  mov    %eax,(%esp)
0814257f +0x8d3:  call   0812c028 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x1d>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x1d
08142584 +0x8d8:  mov    $0x0,%eax
08142589 +0x8dd:  test   %al,%al
0814258b +0x8df:  je     08142598 <+0x8ec>
0814258d +0x8e1:  mov    0x8(%ebp),%eax
08142590 +0x8e4:  mov    %eax,(%esp)
08142593 +0x8e7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142598 +0x8ec:  leave
08142599 +0x8ed:  ret
0814259a +0x8ee:  push   %ebp
0814259b +0x8ef:  mov    %esp,%ebp
0814259d +0x8f1:  sub    $0x18,%esp
081425a0 +0x8f4:  mov    0x8(%ebp),%eax
081425a3 +0x8f7:  mov    %eax,(%esp)
081425a6 +0x8fa:  call   0814256a <+0x8be>
081425ab +0x8ff:  mov    0x8(%ebp),%eax
081425ae +0x902:  mov    %eax,(%esp)
081425b1 +0x905:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081425b6 +0x90a:  leave
081425b7 +0x90b:  ret
081425b8 +0x90c:  push   %ebp
081425b9 +0x90d:  mov    %esp,%ebp
081425bb +0x90f:  sub    $0x18,%esp
081425be +0x912:  mov    0x8(%ebp),%eax
081425c1 +0x915:  movl   $&_ZTVN15CMDPacketStruct27_ResAdvanceAltarUpgradeGageE+0x8,(%eax)
081425c7 +0x91b:  mov    0x8(%ebp),%eax
081425ca +0x91e:  mov    %eax,(%esp)
081425cd +0x921:  call   0812c028 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x1d>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x1d
081425d2 +0x926:  mov    $0x0,%eax
081425d7 +0x92b:  test   %al,%al
081425d9 +0x92d:  je     081425e6 <+0x93a>
081425db +0x92f:  mov    0x8(%ebp),%eax
081425de +0x932:  mov    %eax,(%esp)
081425e1 +0x935:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081425e6 +0x93a:  leave
081425e7 +0x93b:  ret
081425e8 +0x93c:  push   %ebp
081425e9 +0x93d:  mov    %esp,%ebp
081425eb +0x93f:  sub    $0x18,%esp
081425ee +0x942:  mov    0x8(%ebp),%eax
081425f1 +0x945:  mov    %eax,(%esp)
081425f4 +0x948:  call   081425b8 <+0x90c>
081425f9 +0x94d:  mov    0x8(%ebp),%eax
081425fc +0x950:  mov    %eax,(%esp)
081425ff +0x953:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142604 +0x958:  leave
08142605 +0x959:  ret
08142606 +0x95a:  push   %ebp
08142607 +0x95b:  mov    %esp,%ebp
08142609 +0x95d:  sub    $0x18,%esp
0814260c +0x960:  mov    0x8(%ebp),%eax
0814260f +0x963:  movl   $&_ZTVN15CMDPacketStruct26_ResAdvanceAltarSummonUnitE+0x8,(%eax)
08142615 +0x969:  mov    0x8(%ebp),%eax
08142618 +0x96c:  mov    %eax,(%esp)
0814261b +0x96f:  call   0812c028 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x1d>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x1d
08142620 +0x974:  mov    $0x0,%eax
08142625 +0x979:  test   %al,%al
08142627 +0x97b:  je     08142634 <+0x988>
08142629 +0x97d:  mov    0x8(%ebp),%eax
0814262c +0x980:  mov    %eax,(%esp)
0814262f +0x983:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142634 +0x988:  leave
08142635 +0x989:  ret
08142636 +0x98a:  push   %ebp
08142637 +0x98b:  mov    %esp,%ebp
08142639 +0x98d:  sub    $0x18,%esp
0814263c +0x990:  mov    0x8(%ebp),%eax
0814263f +0x993:  mov    %eax,(%esp)
08142642 +0x996:  call   08142606 <+0x95a>
08142647 +0x99b:  mov    0x8(%ebp),%eax
0814264a +0x99e:  mov    %eax,(%esp)
0814264d +0x9a1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142652 +0x9a6:  leave
08142653 +0x9a7:  ret
08142654 +0x9a8:  push   %ebp
08142655 +0x9a9:  mov    %esp,%ebp
08142657 +0x9ab:  sub    $0x18,%esp
0814265a +0x9ae:  mov    0x8(%ebp),%eax
0814265d +0x9b1:  movl   $&_ZTVN15CMDPacketStruct28_ResAdvanceAltarExchangeSlotE+0x8,(%eax)
08142663 +0x9b7:  mov    0x8(%ebp),%eax
08142666 +0x9ba:  mov    %eax,(%esp)
08142669 +0x9bd:  call   0812c028 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x1d>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x1d
0814266e +0x9c2:  mov    $0x0,%eax
08142673 +0x9c7:  test   %al,%al
08142675 +0x9c9:  je     08142682 <+0x9d6>
08142677 +0x9cb:  mov    0x8(%ebp),%eax
0814267a +0x9ce:  mov    %eax,(%esp)
0814267d +0x9d1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142682 +0x9d6:  leave
08142683 +0x9d7:  ret
08142684 +0x9d8:  push   %ebp
08142685 +0x9d9:  mov    %esp,%ebp
08142687 +0x9db:  sub    $0x18,%esp
0814268a +0x9de:  mov    0x8(%ebp),%eax
0814268d +0x9e1:  mov    %eax,(%esp)
08142690 +0x9e4:  call   08142654 <+0x9a8>
08142695 +0x9e9:  mov    0x8(%ebp),%eax
08142698 +0x9ec:  mov    %eax,(%esp)
0814269b +0x9ef:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081426a0 +0x9f4:  leave
081426a1 +0x9f5:  ret
081426a2 +0x9f6:  push   %ebp
081426a3 +0x9f7:  mov    %esp,%ebp
081426a5 +0x9f9:  sub    $0x18,%esp
081426a8 +0x9fc:  mov    0x8(%ebp),%eax
081426ab +0x9ff:  movl   $&_ZTVN15CMDPacketStruct21_ResAdvanceAltarPauseE+0x8,(%eax)
081426b1 +0xa05:  mov    0x8(%ebp),%eax
081426b4 +0xa08:  mov    %eax,(%esp)
081426b7 +0xa0b:  call   0812c028 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x1d>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x1d
081426bc +0xa10:  mov    $0x0,%eax
081426c1 +0xa15:  test   %al,%al
081426c3 +0xa17:  je     081426d0 <+0xa24>
081426c5 +0xa19:  mov    0x8(%ebp),%eax
081426c8 +0xa1c:  mov    %eax,(%esp)
081426cb +0xa1f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081426d0 +0xa24:  leave
081426d1 +0xa25:  ret
081426d2 +0xa26:  push   %ebp
081426d3 +0xa27:  mov    %esp,%ebp
081426d5 +0xa29:  sub    $0x18,%esp
081426d8 +0xa2c:  mov    0x8(%ebp),%eax
081426db +0xa2f:  mov    %eax,(%esp)
081426de +0xa32:  call   081426a2 <+0x9f6>
081426e3 +0xa37:  mov    0x8(%ebp),%eax
081426e6 +0xa3a:  mov    %eax,(%esp)
081426e9 +0xa3d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081426ee +0xa42:  leave
081426ef +0xa43:  ret
081426f0 +0xa44:  push   %ebp
081426f1 +0xa45:  mov    %esp,%ebp
081426f3 +0xa47:  sub    $0x18,%esp
081426f6 +0xa4a:  mov    0x8(%ebp),%eax
081426f9 +0xa4d:  movl   $&_ZTVN15CMDPacketStruct36_ResAdvanceAltarGetAchievementRewardE+0x8,(%eax)
081426ff +0xa53:  mov    0x8(%ebp),%eax
08142702 +0xa56:  mov    %eax,(%esp)
08142705 +0xa59:  call   0812c028 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x1d>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x1d
0814270a +0xa5e:  mov    $0x0,%eax
0814270f +0xa63:  test   %al,%al
08142711 +0xa65:  je     0814271e <+0xa72>
08142713 +0xa67:  mov    0x8(%ebp),%eax
08142716 +0xa6a:  mov    %eax,(%esp)
08142719 +0xa6d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814271e +0xa72:  leave
0814271f +0xa73:  ret
08142720 +0xa74:  push   %ebp
08142721 +0xa75:  mov    %esp,%ebp
08142723 +0xa77:  sub    $0x18,%esp
08142726 +0xa7a:  mov    0x8(%ebp),%eax
08142729 +0xa7d:  mov    %eax,(%esp)
0814272c +0xa80:  call   081426f0 <+0xa44>
08142731 +0xa85:  mov    0x8(%ebp),%eax
08142734 +0xa88:  mov    %eax,(%esp)
08142737 +0xa8b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814273c +0xa90:  leave
0814273d +0xa91:  ret
0814273e +0xa92:  push   %ebp
0814273f +0xa93:  mov    %esp,%ebp
08142741 +0xa95:  sub    $0x18,%esp
08142744 +0xa98:  mov    0x8(%ebp),%eax
08142747 +0xa9b:  movl   $&_ZTVN15CMDPacketStruct25_ResAdvanceAltarResetStarE+0x8,(%eax)
0814274d +0xaa1:  mov    0x8(%ebp),%eax
08142750 +0xaa4:  mov    %eax,(%esp)
08142753 +0xaa7:  call   0812c028 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x1d>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x1d
08142758 +0xaac:  mov    $0x0,%eax
0814275d +0xab1:  test   %al,%al
0814275f +0xab3:  je     0814276c <+0xac0>
08142761 +0xab5:  mov    0x8(%ebp),%eax
08142764 +0xab8:  mov    %eax,(%esp)
08142767 +0xabb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814276c +0xac0:  leave
0814276d +0xac1:  ret
0814276e +0xac2:  push   %ebp
0814276f +0xac3:  mov    %esp,%ebp
08142771 +0xac5:  sub    $0x18,%esp
08142774 +0xac8:  mov    0x8(%ebp),%eax
08142777 +0xacb:  mov    %eax,(%esp)
0814277a +0xace:  call   0814273e <+0xa92>
0814277f +0xad3:  mov    0x8(%ebp),%eax
08142782 +0xad6:  mov    %eax,(%esp)
08142785 +0xad9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814278a +0xade:  leave
0814278b +0xadf:  ret
0814278c +0xae0:  push   %ebp
0814278d +0xae1:  mov    %esp,%ebp
0814278f +0xae3:  sub    $0x28,%esp
08142792 +0xae6:  movl   $0x51c,0x4(%esp)
0814279a +0xaee:  mov    0x8(%ebp),%eax
0814279d +0xaf1:  mov    %eax,(%esp)
081427a0 +0xaf4:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
081427a5 +0xaf9:  xor    $0x1,%eax
081427a8 +0xafc:  test   %al,%al
081427aa +0xafe:  je     081427b3 <+0xb07>
081427ac +0xb00:  mov    $0x0,%eax
081427b1 +0xb05:  jmp    081427dd <+0xb31>
081427b3 +0xb07:  mov    0x8(%ebp),%eax
081427b6 +0xb0a:  mov    0x8(%eax),%eax
081427b9 +0xb0d:  mov    %eax,%edx
081427bb +0xb0f:  mov    0x8(%ebp),%eax
081427be +0xb12:  mov    0x10(%eax),%eax
081427c1 +0xb15:  lea    (%edx,%eax,1),%eax
081427c4 +0xb18:  mov    %eax,-0xc(%ebp)
081427c7 +0xb1b:  movl   $0x51c,0x4(%esp)
081427cf +0xb23:  mov    0x8(%ebp),%eax
081427d2 +0xb26:  mov    %eax,(%esp)
081427d5 +0xb29:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
081427da +0xb2e:  mov    -0xc(%ebp),%eax
081427dd +0xb31:  leave
081427de +0xb32:  ret
081427df +0xb33:  nop
081427e0 +0xb34:  push   %ebp
081427e1 +0xb35:  mov    %esp,%ebp
081427e3 +0xb37:  sub    $0x28,%esp
081427e6 +0xb3a:  movl   $0x10,0x4(%esp)
081427ee +0xb42:  mov    0x8(%ebp),%eax
081427f1 +0xb45:  mov    %eax,(%esp)
081427f4 +0xb48:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
081427f9 +0xb4d:  xor    $0x1,%eax
081427fc +0xb50:  test   %al,%al
081427fe +0xb52:  je     08142807 <+0xb5b>
08142800 +0xb54:  mov    $0x0,%eax
08142805 +0xb59:  jmp    08142831 <+0xb85>
08142807 +0xb5b:  mov    0x8(%ebp),%eax
0814280a +0xb5e:  mov    0x8(%eax),%eax
0814280d +0xb61:  mov    %eax,%edx
0814280f +0xb63:  mov    0x8(%ebp),%eax
08142812 +0xb66:  mov    0x10(%eax),%eax
08142815 +0xb69:  lea    (%edx,%eax,1),%eax
08142818 +0xb6c:  mov    %eax,-0xc(%ebp)
0814281b +0xb6f:  movl   $0x10,0x4(%esp)
08142823 +0xb77:  mov    0x8(%ebp),%eax
08142826 +0xb7a:  mov    %eax,(%esp)
08142829 +0xb7d:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0814282e +0xb82:  mov    -0xc(%ebp),%eax
08142831 +0xb85:  leave
08142832 +0xb86:  ret
08142833 +0xb87:  nop
08142834 +0xb88:  push   %ebp
08142835 +0xb89:  mov    %esp,%ebp
08142837 +0xb8b:  sub    $0x28,%esp
0814283a +0xb8e:  movl   $0x10,0x4(%esp)
08142842 +0xb96:  mov    0x8(%ebp),%eax
08142845 +0xb99:  mov    %eax,(%esp)
08142848 +0xb9c:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0814284d +0xba1:  xor    $0x1,%eax
08142850 +0xba4:  test   %al,%al
08142852 +0xba6:  je     0814285b <+0xbaf>
08142854 +0xba8:  mov    $0x0,%eax
08142859 +0xbad:  jmp    08142885 <+0xbd9>
0814285b +0xbaf:  mov    0x8(%ebp),%eax
0814285e +0xbb2:  mov    0x8(%eax),%eax
08142861 +0xbb5:  mov    %eax,%edx
08142863 +0xbb7:  mov    0x8(%ebp),%eax
08142866 +0xbba:  mov    0x10(%eax),%eax
08142869 +0xbbd:  lea    (%edx,%eax,1),%eax
0814286c +0xbc0:  mov    %eax,-0xc(%ebp)
0814286f +0xbc3:  movl   $0x10,0x4(%esp)
08142877 +0xbcb:  mov    0x8(%ebp),%eax
0814287a +0xbce:  mov    %eax,(%esp)
0814287d +0xbd1:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
08142882 +0xbd6:  mov    -0xc(%ebp),%eax
08142885 +0xbd9:  leave
08142886 +0xbda:  ret
08142887 +0xbdb:  nop
08142888 +0xbdc:  push   %ebp
08142889 +0xbdd:  mov    %esp,%ebp
0814288b +0xbdf:  sub    $0x18,%esp
0814288e +0xbe2:  mov    0x8(%ebp),%eax
08142891 +0xbe5:  mov    %eax,(%esp)
08142894 +0xbe8:  call   08142914 <+0xc68>
08142899 +0xbed:  leave
0814289a +0xbee:  ret
0814289b +0xbef:  nop
0814289c +0xbf0:  push   %ebp
0814289d +0xbf1:  mov    %esp,%ebp
0814289f +0xbf3:  push   %ebx
081428a0 +0xbf4:  sub    $0x14,%esp
081428a3 +0xbf7:  mov    0x8(%ebp),%ebx
081428a6 +0xbfa:  mov    0xc(%ebp),%eax
081428a9 +0xbfd:  mov    %eax,0x4(%esp)
081428ad +0xc01:  mov    %ebx,(%esp)
081428b0 +0xc04:  call   08142920 <+0xc74>
081428b5 +0xc09:  sub    $0x4,%esp
081428b8 +0xc0c:  mov    %ebx,%eax
081428ba +0xc0e:  mov    -0x4(%ebp),%ebx
081428bd +0xc11:  leave
081428be +0xc12:  ret    $0x4
081428c1 +0xc15:  nop
081428c2 +0xc16:  push   %ebp
081428c3 +0xc17:  mov    %esp,%ebp
081428c5 +0xc19:  push   %ebx
081428c6 +0xc1a:  sub    $0x14,%esp
081428c9 +0xc1d:  mov    0x8(%ebp),%ebx
081428cc +0xc20:  mov    0xc(%ebp),%eax
081428cf +0xc23:  movl   $0x4,0x8(%esp)
081428d7 +0xc2b:  mov    %eax,0x4(%esp)
081428db +0xc2f:  mov    %ebx,(%esp)
081428de +0xc32:  call   0807d880 <_init+0x178>
081428e3 +0xc37:  mov    0xc(%ebp),%eax
081428e6 +0xc3a:  mov    (%eax),%eax
081428e8 +0xc3c:  mov    %eax,(%esp)
081428eb +0xc3f:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
081428f0 +0xc44:  mov    0xc(%ebp),%edx
081428f3 +0xc47:  mov    %eax,(%edx)
081428f5 +0xc49:  mov    %ebx,%eax
081428f7 +0xc4b:  add    $0x14,%esp
081428fa +0xc4e:  pop    %ebx
081428fb +0xc4f:  pop    %ebp
081428fc +0xc50:  ret    $0x4
081428ff +0xc53:  nop
08142900 +0xc54:  push   %ebp
08142901 +0xc55:  mov    %esp,%ebp
08142903 +0xc57:  sub    $0x18,%esp
08142906 +0xc5a:  mov    0x8(%ebp),%eax
08142909 +0xc5d:  mov    %eax,(%esp)
0814290c +0xc60:  call   08142946 <+0xc9a>
08142911 +0xc65:  leave
08142912 +0xc66:  ret
08142913 +0xc67:  nop
08142914 +0xc68:  push   %ebp
08142915 +0xc69:  mov    %esp,%ebp
08142917 +0xc6b:  mov    0x8(%ebp),%eax
0814291a +0xc6e:  mov    0x14(%eax),%eax
0814291d +0xc71:  pop    %ebp
0814291e +0xc72:  ret
0814291f +0xc73:  nop
08142920 +0xc74:  push   %ebp
08142921 +0xc75:  mov    %esp,%ebp
08142923 +0xc77:  push   %ebx
08142924 +0xc78:  sub    $0x14,%esp
08142927 +0xc7b:  mov    0x8(%ebp),%ebx
0814292a +0xc7e:  mov    0xc(%ebp),%eax
0814292d +0xc81:  mov    0xc(%eax),%eax
08142930 +0xc84:  mov    %eax,0x4(%esp)
08142934 +0xc88:  mov    %ebx,(%esp)
08142937 +0xc8b:  call   0813adce <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x69d5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x69d5
0814293c +0xc90:  mov    %ebx,%eax
0814293e +0xc92:  add    $0x14,%esp
08142941 +0xc95:  pop    %ebx
08142942 +0xc96:  pop    %ebp
08142943 +0xc97:  ret    $0x4
08142946 +0xc9a:  push   %ebp
08142947 +0xc9b:  mov    %esp,%ebp
08142949 +0xc9d:  mov    0x8(%ebp),%eax
0814294c +0xca0:  mov    0x14(%eax),%eax
0814294f +0xca3:  pop    %ebp
08142950 +0xca4:  ret
08142951 +0xca5:  nop
08142952 +0xca6:  push   %ebp
08142953 +0xca7:  mov    %esp,%ebp
08142955 +0xca9:  sub    $0x18,%esp
08142958 +0xcac:  mov    0x8(%ebp),%eax
0814295b +0xcaf:  movl   $&_ZTVN12advancealtar24DB_StatisticAdvanceAltarE+0x8,(%eax)
08142961 +0xcb5:  mov    0x8(%ebp),%eax
08142964 +0xcb8:  mov    %eax,(%esp)
08142967 +0xcbb:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
0814296c +0xcc0:  mov    $0x0,%eax
08142971 +0xcc5:  test   %al,%al
08142973 +0xcc7:  je     08142980 <+0xcd4>
08142975 +0xcc9:  mov    0x8(%ebp),%eax
08142978 +0xccc:  mov    %eax,(%esp)
0814297b +0xccf:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08142980 +0xcd4:  leave
08142981 +0xcd5:  ret
08142982 +0xcd6:  push   %ebp
08142983 +0xcd7:  mov    %esp,%ebp
08142985 +0xcd9:  sub    $0x18,%esp
08142988 +0xcdc:  mov    0x8(%ebp),%eax
0814298b +0xcdf:  mov    %eax,(%esp)
0814298e +0xce2:  call   08142952 <+0xca6>
08142993 +0xce7:  mov    0x8(%ebp),%eax
08142996 +0xcea:  mov    %eax,(%esp)
08142999 +0xced:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814299e +0xcf2:  leave
0814299f +0xcf3:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8141cac

/* advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int) */

void advancealtar::_GLOBAL__I_convertZipToString(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
