# add_item_curr_map

`_ZN13CBattle_Field17add_item_curr_mapERiS0_`

`CBattle_Field::add_item_curr_map(int&, int&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08302bc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08302bc6  _ZN13CBattle_Field17add_item_curr_mapERiS0_
#           CBattle_Field::add_item_curr_map(int&, int&)
# range [0x08302bc6, 0x083031d1]
08302bc6 +0x000:  push   %ebp
08302bc7 +0x001:  mov    %esp,%ebp
08302bc9 +0x003:  push   %edi
08302bca +0x004:  push   %esi
08302bcb +0x005:  push   %ebx
08302bcc +0x006:  sub    $0x20c,%esp
08302bd2 +0x00c:  mov    0x8(%ebp),%eax
08302bd5 +0x00f:  mov    0x188(%eax),%eax
08302bdb +0x015:  test   %eax,%eax
08302bdd +0x017:  je     083031c2 <+0x5fc>
08302be3 +0x01d:  mov    0x8(%ebp),%eax
08302be6 +0x020:  mov    0x108(%eax),%eax
08302bec +0x026:  test   %eax,%eax
08302bee +0x028:  je     083031c5 <+0x5ff>
08302bf4 +0x02e:  mov    0x8(%ebp),%eax
08302bf7 +0x031:  mov    %eax,(%esp)
08302bfa +0x034:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08302bff +0x039:  mov    0x10(%ebp),%edx
08302c02 +0x03c:  mov    (%edx),%edx
08302c04 +0x03e:  mov    %edx,0x3c(%eax)
08302c07 +0x041:  mov    0x8(%ebp),%eax
08302c0a +0x044:  mov    0x108(%eax),%edx
08302c10 +0x04a:  lea    -0x30(%ebp),%eax
08302c13 +0x04d:  mov    %edx,0x4(%esp)
08302c17 +0x051:  mov    %eax,(%esp)
08302c1a +0x054:  call   081508c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1fb
08302c1f +0x059:  sub    $0x4,%esp
08302c22 +0x05c:  lea    -0x34(%ebp),%eax
08302c25 +0x05f:  lea    -0x30(%ebp),%edx
08302c28 +0x062:  mov    %edx,0x4(%esp)
08302c2c +0x066:  mov    %eax,(%esp)
08302c2f +0x069:  call   08152852 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2187>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2187
08302c34 +0x06e:  sub    $0x4,%esp
08302c37 +0x071:  mov    0x8(%ebp),%eax
08302c3a +0x074:  mov    %eax,(%esp)
08302c3d +0x077:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08302c42 +0x07c:  mov    0x4(%eax),%eax
08302c45 +0x07f:  mov    %eax,-0x24(%ebp)
08302c48 +0x082:  lea    -0x44(%ebp),%eax
08302c4b +0x085:  mov    %eax,(%esp)
08302c4e +0x088:  call   0815088e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c3
08302c53 +0x08d:  mov    0x8(%ebp),%eax
08302c56 +0x090:  mov    0x188(%eax),%eax
08302c5c +0x096:  mov    %eax,(%esp)
08302c5f +0x099:  call   08150914 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x249>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x249
08302c64 +0x09e:  mov    %eax,-0x20(%ebp)
08302c67 +0x0a1:  lea    -0xc4(%ebp),%eax
08302c6d +0x0a7:  mov    %eax,(%esp)
08302c70 +0x0aa:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
08302c75 +0x0af:  lea    -0x10c(%ebp),%eax
08302c7b +0x0b5:  mov    %eax,(%esp)
08302c7e +0x0b8:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
08302c83 +0x0bd:  lea    -0x154(%ebp),%eax
08302c89 +0x0c3:  mov    %eax,(%esp)
08302c8c +0x0c6:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
08302c91 +0x0cb:  mov    0x8(%ebp),%eax
08302c94 +0x0ce:  mov    %eax,(%esp)
08302c97 +0x0d1:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
08302c9c +0x0d6:  mov    %al,-0x8f(%ebp)
08302ca2 +0x0dc:  movb   $0x1,-0x8e(%ebp)
08302ca9 +0x0e3:  mov    0x8(%ebp),%eax
08302cac +0x0e6:  mov    0x188(%eax),%eax
08302cb2 +0x0ec:  mov    %eax,(%esp)
08302cb5 +0x0ef:  call   08150908 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x23d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x23d
08302cba +0x0f4:  mov    %eax,-0x120(%ebp)
08302cc0 +0x0fa:  jmp    083030ae <+0x4e8>
08302cc5 +0x0ff:  lea    -0x34(%ebp),%eax
08302cc8 +0x102:  mov    %eax,(%esp)
08302ccb +0x105:  call   081528b0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21e5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21e5
08302cd0 +0x10a:  mov    (%eax),%edx
08302cd2 +0x10c:  mov    %edx,-0x44(%ebp)
08302cd5 +0x10f:  mov    0x4(%eax),%edx
08302cd8 +0x112:  mov    %edx,-0x40(%ebp)
08302cdb +0x115:  mov    0x8(%eax),%edx
08302cde +0x118:  mov    %edx,-0x3c(%ebp)
08302ce1 +0x11b:  mov    0xc(%eax),%eax
08302ce4 +0x11e:  mov    %eax,-0x38(%ebp)
08302ce7 +0x121:  mov    -0x20(%ebp),%eax
08302cea +0x124:  mov    %eax,(%esp)
08302ced +0x127:  call   08154f70 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x48a5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x48a5
08302cf2 +0x12c:  mov    -0x44(%ebp),%edx
08302cf5 +0x12f:  cmp    %edx,%eax
08302cf7 +0x131:  jbe    08302d00 <+0x13a>
08302cf9 +0x133:  mov    -0x44(%ebp),%eax
08302cfc +0x136:  test   %eax,%eax
08302cfe +0x138:  jns    08302d07 <+0x141>
08302d00 +0x13a:  mov    $0x1,%eax
08302d05 +0x13f:  jmp    08302d0c <+0x146>
08302d07 +0x141:  mov    $0x0,%eax
08302d0c +0x146:  test   %al,%al
08302d0e +0x148:  je     08302d70 <+0x1aa>
08302d10 +0x14a:  mov    -0x44(%ebp),%esi
08302d13 +0x14d:  mov    -0x20(%ebp),%eax
08302d16 +0x150:  mov    %eax,(%esp)
08302d19 +0x153:  call   08154f70 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x48a5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x48a5
08302d1e +0x158:  mov    %eax,%ebx
08302d20 +0x15a:  mov    0x8(%ebp),%eax
08302d23 +0x15d:  mov    %eax,(%esp)
08302d26 +0x160:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08302d2b +0x165:  mov    0x4(%eax),%eax
08302d2e +0x168:  mov    %esi,0x1c(%esp)
08302d32 +0x16c:  mov    %ebx,0x18(%esp)
08302d36 +0x170:  mov    %eax,0x14(%esp)
08302d3a +0x174:  movl   $"Dungeon passive object index error! Map id:%d, DungeonAssignItem size:%d, Passive object id:%d",0x10(%esp)
08302d42 +0x17c:  movl   $0x7a5,0xc(%esp)
08302d4a +0x184:  movl   $&_ZZN13CBattle_Field17add_item_curr_mapERiS0_E19__PRETTY_FUNCTION__,0x8(%esp)
08302d52 +0x18c:  movl   $"battle_field.cpp",0x4(%esp)
08302d5a +0x194:  movl   $0x1,(%esp)
08302d61 +0x19b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08302d66 +0x1a0:  mov    $0x0,%ebx
08302d6b +0x1a5:  jmp    0830311a <+0x554>
08302d70 +0x1aa:  mov    -0x44(%ebp),%eax
08302d73 +0x1ad:  mov    %eax,0x4(%esp)
08302d77 +0x1b1:  mov    -0x20(%ebp),%eax
08302d7a +0x1b4:  mov    %eax,(%esp)
08302d7d +0x1b7:  call   081528be <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21f3
08302d82 +0x1bc:  mov    %eax,-0x1c(%ebp)
08302d85 +0x1bf:  mov    -0x1c(%ebp),%eax
08302d88 +0x1c2:  mov    (%eax),%eax
08302d8a +0x1c4:  cmp    $0xffffffff,%eax
08302d8d +0x1c7:  je     08302daa <+0x1e4>
08302d8f +0x1c9:  mov    -0x1c(%ebp),%eax
08302d92 +0x1cc:  mov    (%eax),%eax
08302d94 +0x1ce:  mov    %al,-0x90(%ebp)
08302d9a +0x1d4:  mov    -0x1c(%ebp),%eax
08302d9d +0x1d7:  mov    (%eax),%eax
08302d9f +0x1d9:  mov    %al,-0xd4(%ebp)
08302da5 +0x1df:  jmp    08302e53 <+0x28d>
08302daa +0x1e4:  mov    0x8(%ebp),%eax
08302dad +0x1e7:  mov    0x188(%eax),%eax
08302db3 +0x1ed:  mov    %eax,(%esp)
08302db6 +0x1f0:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
08302dbb +0x1f5:  test   %eax,%eax
08302dbd +0x1f7:  jle    08302dd7 <+0x211>
08302dbf +0x1f9:  mov    0x8(%ebp),%eax
08302dc2 +0x1fc:  mov    0x188(%eax),%eax
08302dc8 +0x202:  mov    %eax,(%esp)
08302dcb +0x205:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
08302dd0 +0x20a:  cmp    $0xc8,%eax
08302dd5 +0x20f:  jle    08302dde <+0x218>
08302dd7 +0x211:  mov    $0x1,%eax
08302ddc +0x216:  jmp    08302de3 <+0x21d>
08302dde +0x218:  mov    $0x0,%eax
08302de3 +0x21d:  test   %al,%al
08302de5 +0x21f:  jne    083030ad <+0x4e7>
08302deb +0x225:  mov    0x8(%ebp),%eax
08302dee +0x228:  mov    0x188(%eax),%eax
08302df4 +0x22e:  mov    %eax,(%esp)
08302df7 +0x231:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
08302dfc +0x236:  test   %al,%al
08302dfe +0x238:  setg   %al
08302e01 +0x23b:  test   %al,%al
08302e03 +0x23d:  je     08302e25 <+0x25f>
08302e05 +0x23f:  mov    0x8(%ebp),%eax
08302e08 +0x242:  mov    0x238(%eax),%eax
08302e0e +0x248:  mov    %al,-0x90(%ebp)
08302e14 +0x24e:  mov    0x8(%ebp),%eax
08302e17 +0x251:  mov    0x238(%eax),%eax
08302e1d +0x257:  mov    %al,-0xd4(%ebp)
08302e23 +0x25d:  jmp    08302e53 <+0x28d>
08302e25 +0x25f:  mov    0x8(%ebp),%eax
08302e28 +0x262:  mov    0x188(%eax),%eax
08302e2e +0x268:  mov    %eax,(%esp)
08302e31 +0x26b:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
08302e36 +0x270:  mov    %al,-0x90(%ebp)
08302e3c +0x276:  mov    0x8(%ebp),%eax
08302e3f +0x279:  mov    0x188(%eax),%eax
08302e45 +0x27f:  mov    %eax,(%esp)
08302e48 +0x282:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
08302e4d +0x287:  mov    %al,-0xd4(%ebp)
08302e53 +0x28d:  lea    -0x7c(%ebp),%eax
08302e56 +0x290:  mov    %eax,(%esp)
08302e59 +0x293:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
08302e5e +0x298:  mov    -0x3c(%ebp),%eax
08302e61 +0x29b:  mov    %al,-0x8d(%ebp)
08302e67 +0x2a1:  mov    -0x40(%ebp),%eax
08302e6a +0x2a4:  mov    %al,-0xd3(%ebp)
08302e70 +0x2aa:  mov    -0x1c(%ebp),%eax
08302e73 +0x2ad:  add    $0x4,%eax
08302e76 +0x2b0:  mov    %eax,-0xd8(%ebp)
08302e7c +0x2b6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08302e81 +0x2bb:  mov    %eax,(%esp)
08302e84 +0x2be:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
08302e89 +0x2c3:  movl   $0x1,0x4(%esp)
08302e91 +0x2cb:  mov    %eax,(%esp)
08302e94 +0x2ce:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
08302e99 +0x2d3:  mov    (%eax),%edx
08302e9b +0x2d5:  add    $0x8,%edx
08302e9e +0x2d8:  mov    (%edx),%ecx
08302ea0 +0x2da:  lea    -0x7c(%ebp),%edx
08302ea3 +0x2dd:  mov    %edx,0x8(%esp)
08302ea7 +0x2e1:  lea    -0xc4(%ebp),%edx
08302ead +0x2e7:  mov    %edx,0x4(%esp)
08302eb1 +0x2eb:  mov    %eax,(%esp)
08302eb4 +0x2ee:  call   *%ecx
08302eb6 +0x2f0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08302ebb +0x2f5:  mov    %eax,(%esp)
08302ebe +0x2f8:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
08302ec3 +0x2fd:  movl   $0x1,0x4(%esp)
08302ecb +0x305:  mov    %eax,(%esp)
08302ece +0x308:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
08302ed3 +0x30d:  mov    (%eax),%edx
08302ed5 +0x30f:  add    $0xc,%edx
08302ed8 +0x312:  mov    (%edx),%ecx
08302eda +0x314:  lea    -0x7c(%ebp),%edx
08302edd +0x317:  mov    %edx,0x8(%esp)
08302ee1 +0x31b:  lea    -0x10c(%ebp),%edx
08302ee7 +0x321:  mov    %edx,0x4(%esp)
08302eeb +0x325:  mov    %eax,(%esp)
08302eee +0x328:  call   *%ecx
08302ef0 +0x32a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08302ef5 +0x32f:  mov    %eax,(%esp)
08302ef8 +0x332:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
08302efd +0x337:  movl   $0x4,0x4(%esp)
08302f05 +0x33f:  mov    %eax,(%esp)
08302f08 +0x342:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
08302f0d +0x347:  mov    (%eax),%edx
08302f0f +0x349:  add    $0xc,%edx
08302f12 +0x34c:  mov    (%edx),%ecx
08302f14 +0x34e:  lea    -0x7c(%ebp),%edx
08302f17 +0x351:  mov    %edx,0x8(%esp)
08302f1b +0x355:  lea    -0x154(%ebp),%edx
08302f21 +0x35b:  mov    %edx,0x4(%esp)
08302f25 +0x35f:  mov    %eax,(%esp)
08302f28 +0x362:  call   *%ecx
08302f2a +0x364:  lea    -0x48(%ebp),%eax
08302f2d +0x367:  lea    -0x7c(%ebp),%edx
08302f30 +0x36a:  mov    %edx,0x4(%esp)
08302f34 +0x36e:  mov    %eax,(%esp)
08302f37 +0x371:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
08302f3c +0x376:  sub    $0x4,%esp
08302f3f +0x379:  lea    -0x4c(%ebp),%eax
08302f42 +0x37c:  lea    -0x7c(%ebp),%edx
08302f45 +0x37f:  mov    %edx,0x4(%esp)
08302f49 +0x383:  mov    %eax,(%esp)
08302f4c +0x386:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
08302f51 +0x38b:  sub    $0x4,%esp
08302f54 +0x38e:  jmp    08303066 <+0x4a0>
08302f59 +0x393:  lea    -0x1a8(%ebp),%eax
08302f5f +0x399:  mov    %eax,(%esp)
08302f62 +0x39c:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
08302f67 +0x3a1:  movb   $0x1,-0x1a8(%ebp)
08302f6e +0x3a8:  mov    0xc(%ebp),%eax
08302f71 +0x3ab:  mov    (%eax),%eax
08302f73 +0x3ad:  mov    %eax,-0x1a4(%ebp)
08302f79 +0x3b3:  lea    0x1(%eax),%edx
08302f7c +0x3b6:  mov    0xc(%ebp),%eax
08302f7f +0x3b9:  mov    %edx,(%eax)
08302f81 +0x3bb:  mov    -0x38(%ebp),%eax
08302f84 +0x3be:  mov    %al,-0x1a7(%ebp)
08302f8a +0x3c4:  lea    -0x48(%ebp),%eax
08302f8d +0x3c7:  mov    %eax,(%esp)
08302f90 +0x3ca:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
08302f95 +0x3cf:  mov    (%eax),%edx
08302f97 +0x3d1:  mov    %edx,-0x198(%ebp)
08302f9d +0x3d7:  mov    0x4(%eax),%edx
08302fa0 +0x3da:  mov    %edx,-0x194(%ebp)
08302fa6 +0x3e0:  mov    0x8(%eax),%edx
08302fa9 +0x3e3:  mov    %edx,-0x190(%ebp)
08302faf +0x3e9:  mov    0xc(%eax),%edx
08302fb2 +0x3ec:  mov    %edx,-0x18c(%ebp)
08302fb8 +0x3f2:  mov    0x10(%eax),%edx
08302fbb +0x3f5:  mov    %edx,-0x188(%ebp)
08302fc1 +0x3fb:  mov    0x14(%eax),%edx
08302fc4 +0x3fe:  mov    %edx,-0x184(%ebp)
08302fca +0x404:  mov    0x18(%eax),%edx
08302fcd +0x407:  mov    %edx,-0x180(%ebp)
08302fd3 +0x40d:  mov    0x1c(%eax),%edx
08302fd6 +0x410:  mov    %edx,-0x17c(%ebp)
08302fdc +0x416:  mov    0x20(%eax),%edx
08302fdf +0x419:  mov    %edx,-0x178(%ebp)
08302fe5 +0x41f:  mov    0x24(%eax),%edx
08302fe8 +0x422:  mov    %edx,-0x174(%ebp)
08302fee +0x428:  mov    0x28(%eax),%edx
08302ff1 +0x42b:  mov    %edx,-0x170(%ebp)
08302ff7 +0x431:  mov    0x2c(%eax),%edx
08302ffa +0x434:  mov    %edx,-0x16c(%ebp)
08303000 +0x43a:  mov    0x30(%eax),%edx
08303003 +0x43d:  mov    %edx,-0x168(%ebp)
08303009 +0x443:  mov    0x34(%eax),%edx
0830300c +0x446:  mov    %edx,-0x164(%ebp)
08303012 +0x44c:  mov    0x38(%eax),%edx
08303015 +0x44f:  mov    %edx,-0x160(%ebp)
0830301b +0x455:  movzbl 0x3c(%eax),%eax
0830301f +0x459:  mov    %al,-0x15c(%ebp)
08303025 +0x45f:  mov    0x8(%ebp),%eax
08303028 +0x462:  mov    %eax,(%esp)
0830302b +0x465:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08303030 +0x46a:  mov    %eax,-0x1ac(%ebp)
08303036 +0x470:  lea    0x4(%esp),%edx
0830303a +0x474:  lea    -0x1a8(%ebp),%ebx
08303040 +0x47a:  mov    $0x15,%eax
08303045 +0x47f:  mov    %edx,%edi
08303047 +0x481:  mov    %ebx,%esi
08303049 +0x483:  mov    %eax,%ecx
0830304b +0x485:  rep movsl %ds:(%esi),%es:(%edi)
0830304d +0x487:  mov    -0x1ac(%ebp),%eax
08303053 +0x48d:  mov    %eax,(%esp)
08303056 +0x490:  call   081517e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1115>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1115
0830305b +0x495:  lea    -0x48(%ebp),%eax
0830305e +0x498:  mov    %eax,(%esp)
08303061 +0x49b:  call   0815293c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2271>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2271
08303066 +0x4a0:  lea    -0x4c(%ebp),%eax
08303069 +0x4a3:  mov    %eax,0x4(%esp)
0830306d +0x4a7:  lea    -0x48(%ebp),%eax
08303070 +0x4aa:  mov    %eax,(%esp)
08303073 +0x4ad:  call   08152910 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2245>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2245
08303078 +0x4b2:  test   %al,%al
0830307a +0x4b4:  jne    08302f59 <+0x393>
08303080 +0x4ba:  lea    -0x34(%ebp),%eax
08303083 +0x4bd:  mov    %eax,(%esp)
08303086 +0x4c0:  call   08152952 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2287>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2287
0830308b +0x4c5:  lea    -0x7c(%ebp),%eax
0830308e +0x4c8:  mov    %eax,(%esp)
08303091 +0x4cb:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
08303096 +0x4d0:  jmp    083030ae <+0x4e8>
08303098 +0x4d2:  mov    %edx,%ebx
0830309a +0x4d4:  mov    %eax,%esi
0830309c +0x4d6:  lea    -0x7c(%ebp),%eax
0830309f +0x4d9:  mov    %eax,(%esp)
083030a2 +0x4dc:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
083030a7 +0x4e1:  mov    %esi,%eax
083030a9 +0x4e3:  mov    %ebx,%edx
083030ab +0x4e5:  jmp    08303102 <+0x53c>
083030ad +0x4e7:  nop
083030ae +0x4e8:  lea    -0x28(%ebp),%eax
083030b1 +0x4eb:  lea    -0x30(%ebp),%edx
083030b4 +0x4ee:  mov    %edx,0x4(%esp)
083030b8 +0x4f2:  mov    %eax,(%esp)
083030bb +0x4f5:  call   08152878 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21ad>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21ad
083030c0 +0x4fa:  sub    $0x4,%esp
083030c3 +0x4fd:  lea    -0x28(%ebp),%eax
083030c6 +0x500:  mov    %eax,0x4(%esp)
083030ca +0x504:  lea    -0x34(%ebp),%eax
083030cd +0x507:  mov    %eax,(%esp)
083030d0 +0x50a:  call   0815289c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21d1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21d1
083030d5 +0x50f:  test   %al,%al
083030d7 +0x511:  je     083030ee <+0x528>
083030d9 +0x513:  mov    0x8(%ebp),%eax
083030dc +0x516:  mov    0x1b4(%eax),%eax
083030e2 +0x51c:  cmp    $0x1,%eax
083030e5 +0x51f:  je     083030ee <+0x528>
083030e7 +0x521:  mov    $0x1,%eax
083030ec +0x526:  jmp    083030f3 <+0x52d>
083030ee +0x528:  mov    $0x0,%eax
083030f3 +0x52d:  test   %al,%al
083030f5 +0x52f:  jne    08302cc5 <+0xff>
083030fb +0x535:  mov    $0x1,%ebx
08303100 +0x53a:  jmp    0830311a <+0x554>
08303102 +0x53c:  mov    %edx,%ebx
08303104 +0x53e:  mov    %eax,%esi
08303106 +0x540:  lea    -0x154(%ebp),%eax
0830310c +0x546:  mov    %eax,(%esp)
0830310f +0x549:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
08303114 +0x54e:  mov    %esi,%eax
08303116 +0x550:  mov    %ebx,%edx
08303118 +0x552:  jmp    0830313a <+0x574>
0830311a +0x554:  lea    -0x154(%ebp),%eax
08303120 +0x55a:  mov    %eax,(%esp)
08303123 +0x55d:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
08303128 +0x562:  test   %ebx,%ebx
0830312a +0x564:  jne    08303133 <+0x56d>
0830312c +0x566:  mov    $0x0,%ebx
08303131 +0x56b:  jmp    08303152 <+0x58c>
08303133 +0x56d:  mov    $0x1,%ebx
08303138 +0x572:  jmp    08303152 <+0x58c>
0830313a +0x574:  mov    %edx,%ebx
0830313c +0x576:  mov    %eax,%esi
0830313e +0x578:  lea    -0x10c(%ebp),%eax
08303144 +0x57e:  mov    %eax,(%esp)
08303147 +0x581:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
0830314c +0x586:  mov    %esi,%eax
0830314e +0x588:  mov    %ebx,%edx
08303150 +0x58a:  jmp    08303172 <+0x5ac>
08303152 +0x58c:  lea    -0x10c(%ebp),%eax
08303158 +0x592:  mov    %eax,(%esp)
0830315b +0x595:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
08303160 +0x59a:  test   %ebx,%ebx
08303162 +0x59c:  jne    0830316b <+0x5a5>
08303164 +0x59e:  mov    $0x0,%ebx
08303169 +0x5a3:  jmp    0830318a <+0x5c4>
0830316b +0x5a5:  mov    $0x1,%ebx
08303170 +0x5aa:  jmp    0830318a <+0x5c4>
08303172 +0x5ac:  mov    %edx,%ebx
08303174 +0x5ae:  mov    %eax,%esi
08303176 +0x5b0:  lea    -0xc4(%ebp),%eax
0830317c +0x5b6:  mov    %eax,(%esp)
0830317f +0x5b9:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
08303184 +0x5be:  mov    %esi,%eax
08303186 +0x5c0:  mov    %ebx,%edx
08303188 +0x5c2:  jmp    083031a7 <+0x5e1>
0830318a +0x5c4:  lea    -0xc4(%ebp),%eax
08303190 +0x5ca:  mov    %eax,(%esp)
08303193 +0x5cd:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
08303198 +0x5d2:  test   %ebx,%ebx
0830319a +0x5d4:  lea    -0x30(%ebp),%eax
0830319d +0x5d7:  mov    %eax,(%esp)
083031a0 +0x5da:  call   081508b2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e7
083031a5 +0x5df:  jmp    083031c6 <+0x600>
083031a7 +0x5e1:  mov    %edx,%ebx
083031a9 +0x5e3:  mov    %eax,%esi
083031ab +0x5e5:  lea    -0x30(%ebp),%eax
083031ae +0x5e8:  mov    %eax,(%esp)
083031b1 +0x5eb:  call   081508b2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e7
083031b6 +0x5f0:  mov    %esi,%eax
083031b8 +0x5f2:  mov    %ebx,%edx
083031ba +0x5f4:  mov    %eax,(%esp)
083031bd +0x5f7:  call   08ae3750 <_Unwind_Resume>
083031c2 +0x5fc:  nop
083031c3 +0x5fd:  jmp    083031c6 <+0x600>
083031c5 +0x5ff:  nop
083031c6 +0x600:  lea    -0xc(%ebp),%esp
083031c9 +0x603:  add    $0x0,%esp
083031cc +0x606:  pop    %ebx
083031cd +0x607:  pop    %esi
083031ce +0x608:  pop    %edi
083031cf +0x609:  pop    %ebp
083031d0 +0x60a:  ret
083031d1 +0x60b:  nop
```

## 反编译 C

```c
// CBattle_Field::add_item_curr_map @ 0x8302bc6

/* CBattle_Field::add_item_curr_map(int&, int&) */

void __thiscall CBattle_Field::add_item_curr_map(CBattle_Field *this,int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  CDataManager *pCVar6;
  CItemGeneratorMgr *pCVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  map_item *pmVar11;
  byte bVar12;
  map_item local_1ac;
  undefined1 local_1ab;
  int local_1a8;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160;
  stGenerateRefData_t local_158 [52];
  undefined4 local_124;
  stGenerateRefData_t local_110 [52];
  int *local_dc;
  undefined1 local_d8;
  undefined1 local_d7;
  stGenerateRefData_t local_c8 [52];
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  stGenerateResult_t local_80 [48];
  __normal_iterator local_50 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_4c [4];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  _List_iterator<_mapItem> local_38 [4];
  list<_mapItem,std::allocator<_mapItem>> local_34 [8];
  _List_iterator local_2c [4];
  undefined4 local_28;
  vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>> *local_24;
  int *local_20;
  
  bVar12 = 0;
  if ((*(int *)(this + 0x188) != 0) && (*(int *)(this + 0x108) != 0)) {
    iVar3 = GetCurrentMapInfo(this);
    *(int *)(iVar3 + 0x3c) = *param_2;
    CMap::get_item_list();
                    /* try { // try from 08302c2f to 08302c74 has its CatchHandler @ 083031a7 */
    std::list<_mapItem,std::allocator<_mapItem>>::begin();
    iVar3 = GetCurrentMapInfo(this);
    local_28 = *(undefined4 *)(iVar3 + 4);
    _mapItem::_mapItem((_mapItem *)&local_48);
    local_24 = (vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>> *)
               CDungeon::getSpecialPassiveObjectItems(*(CDungeon **)(this + 0x188));
    WongWork::stGenerateRefData_t::stGenerateRefData_t(local_c8);
                    /* try { // try from 08302c7e to 08302c82 has its CatchHandler @ 08303172 */
    WongWork::stGenerateRefData_t::stGenerateRefData_t(local_110);
                    /* try { // try from 08302c8c to 08302c90 has its CatchHandler @ 0830313a */
    WongWork::stGenerateRefData_t::stGenerateRefData_t(local_158);
    local_93 = get_dungeon_diff(this);
    local_92 = 1;
    local_124 = CDungeon::getObjectDropItems(*(CDungeon **)(this + 0x188));
LAB_083030ae:
                    /* try { // try from 083030bb to 083030bf has its CatchHandler @ 08303102 */
    std::list<_mapItem,std::allocator<_mapItem>>::end();
    cVar2 = std::_List_iterator<_mapItem>::operator!=(local_38,local_2c);
    if ((cVar2 == '\0') || (*(int *)(this + 0x1b4) == 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar4 = (uint *)std::_List_iterator<_mapItem>::operator*(local_38);
      local_48 = *puVar4;
      local_44 = puVar4[1];
      local_40 = puVar4[2];
      local_3c = puVar4[3];
      uVar5 = std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::size
                        (local_24);
      if ((local_48 < uVar5) && (-1 < (int)local_48)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        local_20 = (int *)std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::
                          at(local_24,local_48);
        if (*local_20 == -1) goto LAB_08302daa;
        local_94 = (undefined1)*local_20;
        local_d8 = (undefined1)*local_20;
        goto LAB_08302e53;
      }
      std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::size(local_24);
                    /* try { // try from 08302d26 to 08302e5d has its CatchHandler @ 08303102 */
      GetCurrentMapInfo(this);
      LogManager::logFormat
                (1,"battle_field.cpp","void CBattle_Field::add_item_curr_map(int&, int&)",0x7a5,
                 "Dungeon passive object index error! Map id:%d, DungeonAssignItem size:%d, Passive object id:%d"
                );
    }
                    /* try { // try from 08303123 to 08303127 has its CatchHandler @ 0830313a */
    WongWork::stGenerateRefData_t::~stGenerateRefData_t(local_158);
                    /* try { // try from 0830315b to 0830315f has its CatchHandler @ 08303172 */
    WongWork::stGenerateRefData_t::~stGenerateRefData_t(local_110);
                    /* try { // try from 08303193 to 08303197 has its CatchHandler @ 083031a7 */
    WongWork::stGenerateRefData_t::~stGenerateRefData_t(local_c8);
    std::list<_mapItem,std::allocator<_mapItem>>::~list(local_34);
  }
  return;
LAB_08302daa:
  iVar3 = CDungeon::get_standard_level(*(CDungeon **)(this + 0x188));
  if ((iVar3 < 1) ||
     (iVar3 = CDungeon::get_standard_level(*(CDungeon **)(this + 0x188)), 200 < iVar3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    cVar2 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0x188));
    if (cVar2 < '\x01') {
      local_94 = CDungeon::get_standard_level(*(CDungeon **)(this + 0x188));
      local_d8 = CDungeon::get_standard_level(*(CDungeon **)(this + 0x188));
    }
    else {
      local_94 = (undefined1)*(undefined4 *)(this + 0x238);
      local_d8 = (undefined1)*(undefined4 *)(this + 0x238);
    }
LAB_08302e53:
    WongWork::stGenerateResult_t::stGenerateResult_t(local_80);
    local_91 = (undefined1)local_40;
    local_d7 = (undefined1)local_44;
    local_dc = local_20 + 1;
                    /* try { // try from 08302e7c to 08303077 has its CatchHandler @ 08303098 */
    pCVar6 = (CDataManager *)G_CDataManager();
    pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar6);
    piVar8 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar7);
    (**(code **)(*piVar8 + 8))(piVar8);
    pCVar6 = (CDataManager *)G_CDataManager();
    pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar6);
    piVar8 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar7);
    (**(code **)(*piVar8 + 0xc))(piVar8);
    pCVar6 = (CDataManager *)G_CDataManager();
    pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar6);
    piVar8 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar7);
    (**(code **)(*piVar8 + 0xc))(piVar8);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
    std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
    while (bVar1 = __gnu_cxx::operator!=(local_4c,local_50), bVar1) {
      map_item::map_item(&local_1ac);
      local_1ac = (map_item)0x1;
      local_1a8 = *param_1;
      *param_1 = local_1a8 + 1;
      local_1ab = (undefined1)local_3c;
      puVar9 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
               operator*(local_4c);
      local_19c = *puVar9;
      local_198 = puVar9[1];
      local_194 = puVar9[2];
      local_190 = puVar9[3];
      local_18c = puVar9[4];
      local_188 = puVar9[5];
      local_184 = puVar9[6];
      local_180 = puVar9[7];
      local_17c = puVar9[8];
      local_178 = puVar9[9];
      local_174 = puVar9[10];
      local_170 = puVar9[0xb];
      local_16c = puVar9[0xc];
      local_168 = puVar9[0xd];
      local_164 = puVar9[0xe];
      local_160 = *(undefined1 *)(puVar9 + 0xf);
      uVar10 = GetCurrentMapInfo(this);
      pmVar11 = &local_1ac;
      puVar9 = (undefined4 *)&stack0xfffffde8;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = *(undefined4 *)pmVar11;
        pmVar11 = pmVar11 + ((uint)bVar12 * -2 + 1) * 4;
        puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      }
      MapInfo::Add_Item(uVar10);
      __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
      operator++(local_4c);
    }
    std::_List_iterator<_mapItem>::operator++(local_38);
                    /* try { // try from 08303091 to 08303095 has its CatchHandler @ 08303102 */
    WongWork::stGenerateResult_t::~stGenerateResult_t(local_80);
  }
  goto LAB_083030ae;
}
```
