# MakePacket

`_ZN13CBattle_Field10MakePacketEiPv`

`CBattle_Field::MakePacket(int, void*)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083090a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083090a4  _ZN13CBattle_Field10MakePacketEiPv
#           CBattle_Field::MakePacket(int, void*)
# range [0x083090a4, 0x0830a0e7]
083090a4 +0x0000:  push   %ebp
083090a5 +0x0001:  mov    %esp,%ebp
083090a7 +0x0003:  push   %edi
083090a8 +0x0004:  push   %esi
083090a9 +0x0005:  push   %ebx
083090aa +0x0006:  sub    $0x45c,%esp
083090b0 +0x000c:  mov    0x10(%ebp),%eax
083090b3 +0x000f:  mov    %eax,-0x58(%ebp)
083090b6 +0x0012:  mov    0xc(%ebp),%eax
083090b9 +0x0015:  cmp    $0xd3,%eax
083090be +0x001a:  je     08309960 <+0x8bc>
083090c4 +0x0020:  cmp    $0xd3,%eax
083090c9 +0x0025:  jg     083090de <+0x3a>
083090cb +0x0027:  cmp    $0x1c,%eax
083090ce +0x002a:  je     08309713 <+0x66f>
083090d4 +0x0030:  cmp    $0x1d,%eax
083090d7 +0x0033:  je     08309104 <+0x60>
083090d9 +0x0035:  jmp    0830a0dc <+0x1038>
083090de +0x003a:  cmp    $0x182,%eax
083090e3 +0x003f:  je     08309c2a <+0xb86>
083090e9 +0x0045:  cmp    $0x183,%eax
083090ee +0x004a:  je     08309ef0 <+0xe4c>
083090f4 +0x0050:  cmp    $0xd4,%eax
083090f9 +0x0055:  je     08309b54 <+0xab0>
083090ff +0x005b:  jmp    0830a0dc <+0x1038>
08309104 +0x0060:  mov    -0x58(%ebp),%eax
08309107 +0x0063:  movl   $0x1d,0x8(%esp)
0830910f +0x006b:  movl   $0x0,0x4(%esp)
08309117 +0x0073:  mov    %eax,(%esp)
0830911a +0x0076:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0830911f +0x007b:  movl   $0xffffffff,-0x78(%ebp)
08309126 +0x0082:  movl   $0xffffffff,-0x7c(%ebp)
0830912d +0x0089:  lea    -0x7c(%ebp),%eax
08309130 +0x008c:  mov    %eax,0x8(%esp)
08309134 +0x0090:  lea    -0x78(%ebp),%eax
08309137 +0x0093:  mov    %eax,0x4(%esp)
0830913b +0x0097:  mov    0x8(%ebp),%eax
0830913e +0x009a:  mov    %eax,(%esp)
08309141 +0x009d:  call   08300da6 <_ZN13CBattle_Field11getCurPosXYERiS0_>  ; CBattle_Field::getCurPosXY(int&, int&)
08309146 +0x00a2:  mov    -0x78(%ebp),%edx
08309149 +0x00a5:  mov    -0x58(%ebp),%eax
0830914c +0x00a8:  mov    %edx,0x4(%esp)
08309150 +0x00ac:  mov    %eax,(%esp)
08309153 +0x00af:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309158 +0x00b4:  mov    -0x7c(%ebp),%edx
0830915b +0x00b7:  mov    -0x58(%ebp),%eax
0830915e +0x00ba:  mov    %edx,0x4(%esp)
08309162 +0x00be:  mov    %eax,(%esp)
08309165 +0x00c1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830916a +0x00c6:  mov    0x8(%ebp),%eax
0830916d +0x00c9:  mov    %eax,(%esp)
08309170 +0x00cc:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08309175 +0x00d1:  movzbl 0xe8(%eax),%eax
0830917c +0x00d8:  test   %al,%al
0830917e +0x00da:  je     08309195 <+0xf1>
08309180 +0x00dc:  mov    -0x58(%ebp),%eax
08309183 +0x00df:  movl   $0x1,0x4(%esp)
0830918b +0x00e7:  mov    %eax,(%esp)
0830918e +0x00ea:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309193 +0x00ef:  jmp    083091a8 <+0x104>
08309195 +0x00f1:  mov    -0x58(%ebp),%eax
08309198 +0x00f4:  movl   $0x0,0x4(%esp)
083091a0 +0x00fc:  mov    %eax,(%esp)
083091a3 +0x00ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083091a8 +0x0104:  mov    0x8(%ebp),%eax
083091ab +0x0107:  mov    %eax,(%esp)
083091ae +0x010a:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083091b3 +0x010f:  mov    0x48(%eax),%edx
083091b6 +0x0112:  mov    -0x58(%ebp),%eax
083091b9 +0x0115:  mov    %edx,0x4(%esp)
083091bd +0x0119:  mov    %eax,(%esp)
083091c0 +0x011c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
083091c5 +0x0121:  mov    0x8(%ebp),%eax
083091c8 +0x0124:  movzbl 0x1cc(%eax),%eax
083091cf +0x012b:  movsbl %al,%edx
083091d2 +0x012e:  mov    -0x58(%ebp),%eax
083091d5 +0x0131:  mov    %edx,0x4(%esp)
083091d9 +0x0135:  mov    %eax,(%esp)
083091dc +0x0138:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083091e1 +0x013d:  mov    0x8(%ebp),%eax
083091e4 +0x0140:  movzbl 0x1cd(%eax),%eax
083091eb +0x0147:  movsbl %al,%edx
083091ee +0x014a:  mov    -0x58(%ebp),%eax
083091f1 +0x014d:  mov    %edx,0x4(%esp)
083091f5 +0x0151:  mov    %eax,(%esp)
083091f8 +0x0154:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083091fd +0x0159:  mov    0x8(%ebp),%eax
08309200 +0x015c:  mov    %eax,(%esp)
08309203 +0x015f:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08309208 +0x0164:  movzbl 0x1(%eax),%eax
0830920c +0x0168:  test   %al,%al
0830920e +0x016a:  je     083092b0 <+0x20c>
08309214 +0x0170:  mov    -0x58(%ebp),%eax
08309217 +0x0173:  movl   $0x0,0x4(%esp)
0830921f +0x017b:  mov    %eax,(%esp)
08309222 +0x017e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309227 +0x0183:  mov    -0x58(%ebp),%eax
0830922a +0x0186:  mov    %eax,0x4(%esp)
0830922e +0x018a:  mov    0x8(%ebp),%eax
08309231 +0x018d:  mov    %eax,(%esp)
08309234 +0x0190:  call   0830eca2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x887>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x887
08309239 +0x0195:  mov    0x8(%ebp),%eax
0830923c +0x0198:  mov    0x188(%eax),%eax
08309242 +0x019e:  test   %eax,%eax
08309244 +0x01a0:  je     08309262 <+0x1be>
08309246 +0x01a2:  mov    0x8(%ebp),%eax
08309249 +0x01a5:  mov    0x188(%eax),%eax
0830924f +0x01ab:  mov    %eax,(%esp)
08309252 +0x01ae:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
08309257 +0x01b3:  test   %al,%al
08309259 +0x01b5:  je     08309262 <+0x1be>
0830925b +0x01b7:  mov    $0x1,%eax
08309260 +0x01bc:  jmp    08309267 <+0x1c3>
08309262 +0x01be:  mov    $0x0,%eax
08309267 +0x01c3:  test   %al,%al
08309269 +0x01c5:  je     08309285 <+0x1e1>
0830926b +0x01c7:  mov    0x8(%ebp),%eax
0830926e +0x01ca:  mov    0x114(%eax),%edx
08309274 +0x01d0:  mov    -0x58(%ebp),%eax
08309277 +0x01d3:  mov    %edx,0x4(%esp)
0830927b +0x01d7:  mov    %eax,(%esp)
0830927e +0x01da:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309283 +0x01df:  jmp    08309298 <+0x1f4>
08309285 +0x01e1:  mov    -0x58(%ebp),%eax
08309288 +0x01e4:  movl   $0xff,0x4(%esp)
08309290 +0x01ec:  mov    %eax,(%esp)
08309293 +0x01ef:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309298 +0x01f4:  mov    -0x58(%ebp),%eax
0830929b +0x01f7:  movl   $0x1,0x4(%esp)
083092a3 +0x01ff:  mov    %eax,(%esp)
083092a6 +0x0202:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
083092ab +0x0207:  jmp    0830a0dc <+0x1038>
083092b0 +0x020c:  mov    0x8(%ebp),%eax
083092b3 +0x020f:  mov    %eax,(%esp)
083092b6 +0x0212:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083092bb +0x0217:  movzbl 0x44(%eax),%eax
083092bf +0x021b:  movsbl %al,%edx
083092c2 +0x021e:  mov    -0x58(%ebp),%eax
083092c5 +0x0221:  mov    %edx,0x4(%esp)
083092c9 +0x0225:  mov    %eax,(%esp)
083092cc +0x0228:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083092d1 +0x022d:  mov    0x8(%ebp),%eax
083092d4 +0x0230:  mov    %eax,(%esp)
083092d7 +0x0233:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083092dc +0x0238:  mov    0x4(%eax),%edx
083092df +0x023b:  mov    -0x58(%ebp),%eax
083092e2 +0x023e:  mov    %edx,0x4(%esp)
083092e6 +0x0242:  mov    %eax,(%esp)
083092e9 +0x0245:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
083092ee +0x024a:  mov    0x8(%ebp),%eax
083092f1 +0x024d:  mov    %eax,(%esp)
083092f4 +0x0250:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083092f9 +0x0255:  add    $0xc,%eax
083092fc +0x0258:  mov    %eax,(%esp)
083092ff +0x025b:  call   08152966 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x229b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x229b
08309304 +0x0260:  mov    %eax,%edx
08309306 +0x0262:  mov    -0x58(%ebp),%eax
08309309 +0x0265:  mov    %edx,0x4(%esp)
0830930d +0x0269:  mov    %eax,(%esp)
08309310 +0x026c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309315 +0x0271:  lea    -0x448(%ebp),%eax
0830931b +0x0277:  mov    %eax,(%esp)
0830931e +0x027a:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
08309323 +0x027f:  mov    0x8(%ebp),%eax
08309326 +0x0282:  mov    %eax,(%esp)
08309329 +0x0285:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830932e +0x028a:  lea    0xc(%eax),%edx
08309331 +0x028d:  lea    -0x80(%ebp),%eax
08309334 +0x0290:  mov    %edx,0x4(%esp)
08309338 +0x0294:  mov    %eax,(%esp)
0830933b +0x0297:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
08309340 +0x029c:  sub    $0x4,%esp
08309343 +0x029f:  jmp    08309464 <+0x3c0>
08309348 +0x02a4:  lea    -0x80(%ebp),%eax
0830934b +0x02a7:  mov    %eax,(%esp)
0830934e +0x02aa:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08309353 +0x02af:  add    $0x4,%eax
08309356 +0x02b2:  mov    %eax,0x4(%esp)
0830935a +0x02b6:  lea    -0x448(%ebp),%eax
08309360 +0x02bc:  mov    %eax,(%esp)
08309363 +0x02bf:  call   08151d3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x166f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x166f
08309368 +0x02c4:  movzwl -0x114(%ebp),%eax
0830936f +0x02cb:  movzwl %ax,%edx
08309372 +0x02ce:  mov    -0x58(%ebp),%eax
08309375 +0x02d1:  mov    %edx,0x4(%esp)
08309379 +0x02d5:  mov    %eax,(%esp)
0830937c +0x02d8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08309381 +0x02dd:  mov    -0x448(%ebp),%edx
08309387 +0x02e3:  mov    -0x58(%ebp),%eax
0830938a +0x02e6:  mov    %edx,0x4(%esp)
0830938e +0x02ea:  mov    %eax,(%esp)
08309391 +0x02ed:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08309396 +0x02f2:  mov    -0x444(%ebp),%eax
0830939c +0x02f8:  movswl %ax,%edx
0830939f +0x02fb:  mov    -0x58(%ebp),%eax
083093a2 +0x02fe:  mov    %edx,0x4(%esp)
083093a6 +0x0302:  mov    %eax,(%esp)
083093a9 +0x0305:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
083093ae +0x030a:  mov    -0x43c(%ebp),%edx
083093b4 +0x0310:  mov    -0x58(%ebp),%eax
083093b7 +0x0313:  mov    %edx,0x4(%esp)
083093bb +0x0317:  mov    %eax,(%esp)
083093be +0x031a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
083093c3 +0x031f:  movzbl -0x438(%ebp),%eax
083093ca +0x0326:  movzbl %al,%edx
083093cd +0x0329:  mov    -0x58(%ebp),%eax
083093d0 +0x032c:  mov    %edx,0x4(%esp)
083093d4 +0x0330:  mov    %eax,(%esp)
083093d7 +0x0333:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083093dc +0x0338:  movzbl -0x414(%ebp),%eax
083093e3 +0x033f:  test   %al,%al
083093e5 +0x0341:  je     083093fc <+0x358>
083093e7 +0x0343:  mov    -0x58(%ebp),%eax
083093ea +0x0346:  movl   $0x3,0x4(%esp)
083093f2 +0x034e:  mov    %eax,(%esp)
083093f5 +0x0351:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083093fa +0x0356:  jmp    08309415 <+0x371>
083093fc +0x0358:  movzbl -0x440(%ebp),%eax
08309403 +0x035f:  movsbl %al,%edx
08309406 +0x0362:  mov    -0x58(%ebp),%eax
08309409 +0x0365:  mov    %edx,0x4(%esp)
0830940d +0x0369:  mov    %eax,(%esp)
08309410 +0x036c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309415 +0x0371:  movzbl -0x435(%ebp),%eax
0830941c +0x0378:  movzbl %al,%edx
0830941f +0x037b:  mov    -0x58(%ebp),%eax
08309422 +0x037e:  mov    %edx,0x4(%esp)
08309426 +0x0382:  mov    %eax,(%esp)
08309429 +0x0385:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830942e +0x038a:  movzbl -0x434(%ebp),%eax
08309435 +0x0391:  movzbl %al,%edx
08309438 +0x0394:  mov    -0x58(%ebp),%eax
0830943b +0x0397:  mov    %edx,0x4(%esp)
0830943f +0x039b:  mov    %eax,(%esp)
08309442 +0x039e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309447 +0x03a3:  lea    -0x70(%ebp),%eax
0830944a +0x03a6:  movl   $0x0,0x8(%esp)
08309452 +0x03ae:  lea    -0x80(%ebp),%edx
08309455 +0x03b1:  mov    %edx,0x4(%esp)
08309459 +0x03b5:  mov    %eax,(%esp)
0830945c +0x03b8:  call   08155b8c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x54c1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x54c1
08309461 +0x03bd:  sub    $0x4,%esp
08309464 +0x03c0:  mov    0x8(%ebp),%eax
08309467 +0x03c3:  mov    %eax,(%esp)
0830946a +0x03c6:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830946f +0x03cb:  lea    0xc(%eax),%edx
08309472 +0x03ce:  lea    -0x74(%ebp),%eax
08309475 +0x03d1:  mov    %edx,0x4(%esp)
08309479 +0x03d5:  mov    %eax,(%esp)
0830947c +0x03d8:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
08309481 +0x03dd:  sub    $0x4,%esp
08309484 +0x03e0:  lea    -0x74(%ebp),%eax
08309487 +0x03e3:  mov    %eax,0x4(%esp)
0830948b +0x03e7:  lea    -0x80(%ebp),%eax
0830948e +0x03ea:  mov    %eax,(%esp)
08309491 +0x03ed:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
08309496 +0x03f2:  test   %al,%al
08309498 +0x03f4:  jne    08309348 <+0x2a4>
0830949e +0x03fa:  mov    0x8(%ebp),%eax
083094a1 +0x03fd:  mov    %eax,(%esp)
083094a4 +0x0400:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083094a9 +0x0405:  add    $0x24,%eax
083094ac +0x0408:  mov    %eax,(%esp)
083094af +0x040b:  call   0815297a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22af>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22af
083094b4 +0x0410:  mov    %eax,%edx
083094b6 +0x0412:  mov    -0x58(%ebp),%eax
083094b9 +0x0415:  mov    %edx,0x4(%esp)
083094bd +0x0419:  mov    %eax,(%esp)
083094c0 +0x041c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083094c5 +0x0421:  lea    -0xfc(%ebp),%eax
083094cb +0x0427:  mov    %eax,(%esp)
083094ce +0x042a:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
083094d3 +0x042f:  mov    0x8(%ebp),%eax
083094d6 +0x0432:  mov    %eax,(%esp)
083094d9 +0x0435:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083094de +0x043a:  lea    0x24(%eax),%edx
083094e1 +0x043d:  lea    -0x84(%ebp),%eax
083094e7 +0x0443:  mov    %edx,0x4(%esp)
083094eb +0x0447:  mov    %eax,(%esp)
083094ee +0x044a:  call   0815298e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22c3
083094f3 +0x044f:  sub    $0x4,%esp
083094f6 +0x0452:  jmp    08309603 <+0x55f>
083094fb +0x0457:  lea    -0x84(%ebp),%eax
08309501 +0x045d:  mov    %eax,(%esp)
08309504 +0x0460:  call   081529b4 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22e9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22e9
08309509 +0x0465:  lea    -0xfc(%ebp),%edx
0830950f +0x046b:  lea    0x4(%eax),%ebx
08309512 +0x046e:  mov    $0x15,%eax
08309517 +0x0473:  mov    %edx,%edi
08309519 +0x0475:  mov    %ebx,%esi
0830951b +0x0477:  mov    %eax,%ecx
0830951d +0x0479:  rep movsl %ds:(%esi),%es:(%edi)
0830951f +0x047b:  movzbl -0xfb(%ebp),%eax
08309526 +0x0482:  movsbl %al,%edx
08309529 +0x0485:  mov    -0x58(%ebp),%eax
0830952c +0x0488:  mov    %edx,0x4(%esp)
08309530 +0x048c:  mov    %eax,(%esp)
08309533 +0x048f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309538 +0x0494:  mov    -0xf8(%ebp),%edx
0830953e +0x049a:  mov    -0x58(%ebp),%eax
08309541 +0x049d:  mov    %edx,0x4(%esp)
08309545 +0x04a1:  mov    %eax,(%esp)
08309548 +0x04a4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0830954d +0x04a9:  mov    -0xea(%ebp),%eax
08309553 +0x04af:  mov    %eax,%edx
08309555 +0x04b1:  mov    -0x58(%ebp),%eax
08309558 +0x04b4:  mov    %edx,0x4(%esp)
0830955c +0x04b8:  mov    %eax,(%esp)
0830955f +0x04bb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08309564 +0x04c0:  lea    -0xfc(%ebp),%eax
0830956a +0x04c6:  add    $0x10,%eax
0830956d +0x04c9:  mov    %eax,(%esp)
08309570 +0x04cc:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08309575 +0x04d1:  mov    -0x58(%ebp),%edx
08309578 +0x04d4:  mov    %eax,0x4(%esp)
0830957c +0x04d8:  mov    %edx,(%esp)
0830957f +0x04db:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08309584 +0x04e0:  movzwl -0xe1(%ebp),%eax
0830958b +0x04e7:  movzwl %ax,%edx
0830958e +0x04ea:  mov    -0x58(%ebp),%eax
08309591 +0x04ed:  mov    %edx,0x4(%esp)
08309595 +0x04f1:  mov    %eax,(%esp)
08309598 +0x04f4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0830959d +0x04f9:  lea    -0xfc(%ebp),%eax
083095a3 +0x04ff:  add    $0x21,%eax
083095a6 +0x0502:  mov    %eax,(%esp)
083095a9 +0x0505:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
083095ae +0x050a:  movzbl %al,%edx
083095b1 +0x050d:  mov    -0x58(%ebp),%eax
083095b4 +0x0510:  mov    %edx,0x4(%esp)
083095b8 +0x0514:  mov    %eax,(%esp)
083095bb +0x0517:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083095c0 +0x051c:  lea    -0xfc(%ebp),%eax
083095c6 +0x0522:  add    $0x21,%eax
083095c9 +0x0525:  mov    %eax,(%esp)
083095cc +0x0528:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
083095d1 +0x052d:  movzwl %ax,%edx
083095d4 +0x0530:  mov    -0x58(%ebp),%eax
083095d7 +0x0533:  mov    %edx,0x4(%esp)
083095db +0x0537:  mov    %eax,(%esp)
083095de +0x053a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
083095e3 +0x053f:  lea    -0x68(%ebp),%eax
083095e6 +0x0542:  movl   $0x0,0x8(%esp)
083095ee +0x054a:  lea    -0x84(%ebp),%edx
083095f4 +0x0550:  mov    %edx,0x4(%esp)
083095f8 +0x0554:  mov    %eax,(%esp)
083095fb +0x0557:  call   08155d40 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x5675>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x5675
08309600 +0x055c:  sub    $0x4,%esp
08309603 +0x055f:  mov    0x8(%ebp),%eax
08309606 +0x0562:  mov    %eax,(%esp)
08309609 +0x0565:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830960e +0x056a:  lea    0x24(%eax),%edx
08309611 +0x056d:  lea    -0x6c(%ebp),%eax
08309614 +0x0570:  mov    %edx,0x4(%esp)
08309618 +0x0574:  mov    %eax,(%esp)
0830961b +0x0577:  call   0815255e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e93>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e93
08309620 +0x057c:  sub    $0x4,%esp
08309623 +0x057f:  lea    -0x6c(%ebp),%eax
08309626 +0x0582:  mov    %eax,0x4(%esp)
0830962a +0x0586:  lea    -0x84(%ebp),%eax
08309630 +0x058c:  mov    %eax,(%esp)
08309633 +0x058f:  call   08152584 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1eb9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1eb9
08309638 +0x0594:  test   %al,%al
0830963a +0x0596:  jne    083094fb <+0x457>
08309640 +0x059c:  mov    0x8(%ebp),%eax
08309643 +0x059f:  movzbl 0x1b8(%eax),%eax
0830964a +0x05a6:  movzbl %al,%edx
0830964d +0x05a9:  mov    -0x58(%ebp),%eax
08309650 +0x05ac:  mov    %edx,0x4(%esp)
08309654 +0x05b0:  mov    %eax,(%esp)
08309657 +0x05b3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830965c +0x05b8:  mov    -0x58(%ebp),%eax
0830965f +0x05bb:  mov    %eax,0x4(%esp)
08309663 +0x05bf:  mov    0x8(%ebp),%eax
08309666 +0x05c2:  mov    %eax,(%esp)
08309669 +0x05c5:  call   0830eca2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x887>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x887
0830966e +0x05ca:  mov    0x8(%ebp),%eax
08309671 +0x05cd:  mov    0x188(%eax),%eax
08309677 +0x05d3:  test   %eax,%eax
08309679 +0x05d5:  je     08309697 <+0x5f3>
0830967b +0x05d7:  mov    0x8(%ebp),%eax
0830967e +0x05da:  mov    0x188(%eax),%eax
08309684 +0x05e0:  mov    %eax,(%esp)
08309687 +0x05e3:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
0830968c +0x05e8:  test   %al,%al
0830968e +0x05ea:  je     08309697 <+0x5f3>
08309690 +0x05ec:  mov    $0x1,%eax
08309695 +0x05f1:  jmp    0830969c <+0x5f8>
08309697 +0x05f3:  mov    $0x0,%eax
0830969c +0x05f8:  test   %al,%al
0830969e +0x05fa:  je     083096ba <+0x616>
083096a0 +0x05fc:  mov    0x8(%ebp),%eax
083096a3 +0x05ff:  mov    0x114(%eax),%edx
083096a9 +0x0605:  mov    -0x58(%ebp),%eax
083096ac +0x0608:  mov    %edx,0x4(%esp)
083096b0 +0x060c:  mov    %eax,(%esp)
083096b3 +0x060f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083096b8 +0x0614:  jmp    083096cd <+0x629>
083096ba +0x0616:  mov    -0x58(%ebp),%eax
083096bd +0x0619:  movl   $0xff,0x4(%esp)
083096c5 +0x0621:  mov    %eax,(%esp)
083096c8 +0x0624:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083096cd +0x0629:  mov    -0x58(%ebp),%eax
083096d0 +0x062c:  movl   $0x1,0x4(%esp)
083096d8 +0x0634:  mov    %eax,(%esp)
083096db +0x0637:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
083096e0 +0x063c:  jmp    08309700 <+0x65c>
083096e2 +0x063e:  mov    %edx,%ebx
083096e4 +0x0640:  mov    %eax,%esi
083096e6 +0x0642:  lea    -0x448(%ebp),%eax
083096ec +0x0648:  mov    %eax,(%esp)
083096ef +0x064b:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
083096f4 +0x0650:  mov    %esi,%eax
083096f6 +0x0652:  mov    %ebx,%edx
083096f8 +0x0654:  mov    %eax,(%esp)
083096fb +0x0657:  call   08ae3750 <_Unwind_Resume>
08309700 +0x065c:  lea    -0x448(%ebp),%eax
08309706 +0x0662:  mov    %eax,(%esp)
08309709 +0x0665:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0830970e +0x066a:  jmp    0830a0dc <+0x1038>
08309713 +0x066f:  mov    0x8(%ebp),%eax
08309716 +0x0672:  mov    0x1ac(%eax),%edx
0830971c +0x0678:  mov    -0x58(%ebp),%eax
0830971f +0x067b:  mov    %edx,0x4(%esp)
08309723 +0x067f:  mov    %eax,(%esp)
08309726 +0x0682:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830972b +0x0687:  mov    0x8(%ebp),%eax
0830972e +0x068a:  mov    0xc(%eax),%edx
08309731 +0x068d:  mov    -0x58(%ebp),%eax
08309734 +0x0690:  mov    %edx,0x4(%esp)
08309738 +0x0694:  mov    %eax,(%esp)
0830973b +0x0697:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309740 +0x069c:  mov    0x8(%ebp),%eax
08309743 +0x069f:  mov    0x10(%eax),%edx
08309746 +0x06a2:  mov    -0x58(%ebp),%eax
08309749 +0x06a5:  mov    %edx,0x4(%esp)
0830974d +0x06a9:  mov    %eax,(%esp)
08309750 +0x06ac:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309755 +0x06b1:  mov    0x8(%ebp),%eax
08309758 +0x06b4:  mov    0x1c0(%eax),%edx
0830975e +0x06ba:  mov    -0x58(%ebp),%eax
08309761 +0x06bd:  mov    %edx,0x4(%esp)
08309765 +0x06c1:  mov    %eax,(%esp)
08309768 +0x06c4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830976d +0x06c9:  mov    0x8(%ebp),%eax
08309770 +0x06cc:  mov    0x1c4(%eax),%edx
08309776 +0x06d2:  mov    -0x58(%ebp),%eax
08309779 +0x06d5:  mov    %edx,0x4(%esp)
0830977d +0x06d9:  mov    %eax,(%esp)
08309780 +0x06dc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309785 +0x06e1:  mov    0x8(%ebp),%eax
08309788 +0x06e4:  mov    0x1b4(%eax),%eax
0830978e +0x06ea:  mov    %eax,%edx
08309790 +0x06ec:  mov    -0x58(%ebp),%eax
08309793 +0x06ef:  mov    %edx,0x4(%esp)
08309797 +0x06f3:  mov    %eax,(%esp)
0830979a +0x06f6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830979f +0x06fb:  mov    0x8(%ebp),%eax
083097a2 +0x06fe:  add    $0xd0,%eax
083097a7 +0x0703:  mov    %eax,(%esp)
083097aa +0x0706:  call   0830ea0a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x5ef>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x5ef
083097af +0x070b:  mov    -0x58(%ebp),%edx
083097b2 +0x070e:  mov    %eax,0x4(%esp)
083097b6 +0x0712:  mov    %edx,(%esp)
083097b9 +0x0715:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083097be +0x071a:  lea    -0x90(%ebp),%eax
083097c4 +0x0720:  mov    %eax,(%esp)
083097c7 +0x0723:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
083097cc +0x0728:  mov    0x8(%ebp),%eax
083097cf +0x072b:  lea    0xd0(%eax),%edx
083097d5 +0x0731:  lea    -0x90(%ebp),%eax
083097db +0x0737:  mov    %eax,0x4(%esp)
083097df +0x073b:  mov    %edx,(%esp)
083097e2 +0x073e:  call   082fec2c <_ZN8CRidable12GetObjectPosERSt6vectorISt4pairIiiESaIS2_EE>  ; CRidable::GetObjectPos(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
083097e7 +0x0743:  movl   $0x0,-0x54(%ebp)
083097ee +0x074a:  jmp    08309841 <+0x79d>
083097f0 +0x074c:  mov    -0x54(%ebp),%eax
083097f3 +0x074f:  mov    %eax,0x4(%esp)
083097f7 +0x0753:  lea    -0x90(%ebp),%eax
083097fd +0x0759:  mov    %eax,(%esp)
08309800 +0x075c:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08309805 +0x0761:  mov    (%eax),%edx
08309807 +0x0763:  mov    -0x58(%ebp),%eax
0830980a +0x0766:  mov    %edx,0x4(%esp)
0830980e +0x076a:  mov    %eax,(%esp)
08309811 +0x076d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309816 +0x0772:  mov    -0x54(%ebp),%eax
08309819 +0x0775:  mov    %eax,0x4(%esp)
0830981d +0x0779:  lea    -0x90(%ebp),%eax
08309823 +0x077f:  mov    %eax,(%esp)
08309826 +0x0782:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0830982b +0x0787:  mov    0x4(%eax),%edx
0830982e +0x078a:  mov    -0x58(%ebp),%eax
08309831 +0x078d:  mov    %edx,0x4(%esp)
08309835 +0x0791:  mov    %eax,(%esp)
08309838 +0x0794:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830983d +0x0799:  addl   $0x1,-0x54(%ebp)
08309841 +0x079d:  lea    -0x90(%ebp),%eax
08309847 +0x07a3:  mov    %eax,(%esp)
0830984a +0x07a6:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0830984f +0x07ab:  cmp    -0x54(%ebp),%eax
08309852 +0x07ae:  setg   %al
08309855 +0x07b1:  test   %al,%al
08309857 +0x07b3:  jne    083097f0 <+0x74c>
08309859 +0x07b5:  movl   $0x0,-0x50(%ebp)
08309860 +0x07bc:  movl   $0x0,-0x4c(%ebp)
08309867 +0x07c3:  movw   $0x0,-0x46(%ebp)
0830986d +0x07c9:  mov    0x8(%ebp),%eax
08309870 +0x07cc:  mov    (%eax),%eax
08309872 +0x07ce:  test   %eax,%eax
08309874 +0x07d0:  je     083098cb <+0x827>
08309876 +0x07d2:  mov    0x8(%ebp),%eax
08309879 +0x07d5:  mov    (%eax),%eax
0830987b +0x07d7:  mov    %eax,(%esp)
0830987e +0x07da:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
08309883 +0x07df:  mov    %eax,-0x50(%ebp)
08309886 +0x07e2:  cmpl   $0x0,-0x50(%ebp)
0830988a +0x07e6:  setne  %al
0830988d +0x07e9:  test   %al,%al
0830988f +0x07eb:  je     083098cb <+0x827>
08309891 +0x07ed:  movl   $0xd,0x4(%esp)
08309899 +0x07f5:  mov    -0x50(%ebp),%eax
0830989c +0x07f8:  mov    %eax,(%esp)
0830989f +0x07fb:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
083098a4 +0x0800:  mov    %eax,-0x4c(%ebp)
083098a7 +0x0803:  lea    -0x64(%ebp),%eax
083098aa +0x0806:  mov    -0x4c(%ebp),%edx
083098ad +0x0809:  mov    %edx,0x4(%esp)
083098b1 +0x080d:  mov    %eax,(%esp)
083098b4 +0x0810:  call   0864383e <_ZNK13TOD_UserState18getTodayEnterLayerEv>  ; TOD_UserState::getTodayEnterLayer() const
083098b9 +0x0815:  sub    $0x4,%esp
083098bc +0x0818:  lea    -0x64(%ebp),%eax
083098bf +0x081b:  mov    %eax,(%esp)
083098c2 +0x081e:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
083098c7 +0x0823:  mov    %ax,-0x46(%ebp)
083098cb +0x0827:  movzwl -0x46(%ebp),%edx
083098cf +0x082b:  mov    -0x58(%ebp),%eax
083098d2 +0x082e:  mov    %edx,0x4(%esp)
083098d6 +0x0832:  mov    %eax,(%esp)
083098d9 +0x0835:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
083098de +0x083a:  mov    0x8(%ebp),%eax
083098e1 +0x083d:  mov    (%eax),%eax
083098e3 +0x083f:  test   %eax,%eax
083098e5 +0x0841:  je     08309907 <+0x863>
083098e7 +0x0843:  mov    0x8(%ebp),%eax
083098ea +0x0846:  mov    (%eax),%eax
083098ec +0x0848:  mov    %eax,(%esp)
083098ef +0x084b:  call   0830ed3a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x91f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x91f
083098f4 +0x0850:  mov    %eax,%edx
083098f6 +0x0852:  mov    -0x58(%ebp),%eax
083098f9 +0x0855:  mov    %edx,0x4(%esp)
083098fd +0x0859:  mov    %eax,(%esp)
08309900 +0x085c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309905 +0x0861:  jmp    0830991a <+0x876>
08309907 +0x0863:  mov    -0x58(%ebp),%eax
0830990a +0x0866:  movl   $0xb,0x4(%esp)
08309912 +0x086e:  mov    %eax,(%esp)
08309915 +0x0871:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830991a +0x0876:  mov    -0x58(%ebp),%eax
0830991d +0x0879:  movl   $0x1,0x4(%esp)
08309925 +0x0881:  mov    %eax,(%esp)
08309928 +0x0884:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0830992d +0x0889:  jmp    0830994d <+0x8a9>
0830992f +0x088b:  mov    %edx,%ebx
08309931 +0x088d:  mov    %eax,%esi
08309933 +0x088f:  lea    -0x90(%ebp),%eax
08309939 +0x0895:  mov    %eax,(%esp)
0830993c +0x0898:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08309941 +0x089d:  mov    %esi,%eax
08309943 +0x089f:  mov    %ebx,%edx
08309945 +0x08a1:  mov    %eax,(%esp)
08309948 +0x08a4:  call   08ae3750 <_Unwind_Resume>
0830994d +0x08a9:  lea    -0x90(%ebp),%eax
08309953 +0x08af:  mov    %eax,(%esp)
08309956 +0x08b2:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0830995b +0x08b7:  jmp    0830a0dc <+0x1038>
08309960 +0x08bc:  mov    -0x58(%ebp),%eax
08309963 +0x08bf:  movl   $0xd3,0x8(%esp)
0830996b +0x08c7:  movl   $0x0,0x4(%esp)
08309973 +0x08cf:  mov    %eax,(%esp)
08309976 +0x08d2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0830997b +0x08d7:  movl   $0xffffffff,-0x94(%ebp)
08309985 +0x08e1:  movl   $0xffffffff,-0x98(%ebp)
0830998f +0x08eb:  lea    -0x98(%ebp),%eax
08309995 +0x08f1:  mov    %eax,0x8(%esp)
08309999 +0x08f5:  lea    -0x94(%ebp),%eax
0830999f +0x08fb:  mov    %eax,0x4(%esp)
083099a3 +0x08ff:  mov    0x8(%ebp),%eax
083099a6 +0x0902:  mov    %eax,(%esp)
083099a9 +0x0905:  call   08300da6 <_ZN13CBattle_Field11getCurPosXYERiS0_>  ; CBattle_Field::getCurPosXY(int&, int&)
083099ae +0x090a:  mov    -0x94(%ebp),%edx
083099b4 +0x0910:  mov    -0x58(%ebp),%eax
083099b7 +0x0913:  mov    %edx,0x4(%esp)
083099bb +0x0917:  mov    %eax,(%esp)
083099be +0x091a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083099c3 +0x091f:  mov    -0x98(%ebp),%edx
083099c9 +0x0925:  mov    -0x58(%ebp),%eax
083099cc +0x0928:  mov    %edx,0x4(%esp)
083099d0 +0x092c:  mov    %eax,(%esp)
083099d3 +0x092f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083099d8 +0x0934:  mov    0x8(%ebp),%eax
083099db +0x0937:  mov    %eax,(%esp)
083099de +0x093a:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083099e3 +0x093f:  mov    0x48(%eax),%edx
083099e6 +0x0942:  mov    -0x58(%ebp),%eax
083099e9 +0x0945:  mov    %edx,0x4(%esp)
083099ed +0x0949:  mov    %eax,(%esp)
083099f0 +0x094c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
083099f5 +0x0951:  mov    -0x58(%ebp),%eax
083099f8 +0x0954:  movl   $0x0,0x4(%esp)
08309a00 +0x095c:  mov    %eax,(%esp)
08309a03 +0x095f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309a08 +0x0964:  mov    0x8(%ebp),%eax
08309a0b +0x0967:  mov    %eax,(%esp)
08309a0e +0x096a:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08309a13 +0x096f:  movzbl 0x1(%eax),%eax
08309a17 +0x0973:  test   %al,%al
08309a19 +0x0975:  je     08309a46 <+0x9a2>
08309a1b +0x0977:  mov    -0x58(%ebp),%eax
08309a1e +0x097a:  movl   $0x0,0x4(%esp)
08309a26 +0x0982:  mov    %eax,(%esp)
08309a29 +0x0985:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309a2e +0x098a:  mov    -0x58(%ebp),%eax
08309a31 +0x098d:  movl   $0x1,0x4(%esp)
08309a39 +0x0995:  mov    %eax,(%esp)
08309a3c +0x0998:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08309a41 +0x099d:  jmp    0830a0dc <+0x1038>
08309a46 +0x09a2:  mov    0x8(%ebp),%eax
08309a49 +0x09a5:  mov    %eax,(%esp)
08309a4c +0x09a8:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08309a51 +0x09ad:  movzbl 0x44(%eax),%eax
08309a55 +0x09b1:  movsbl %al,%edx
08309a58 +0x09b4:  mov    -0x58(%ebp),%eax
08309a5b +0x09b7:  mov    %edx,0x4(%esp)
08309a5f +0x09bb:  mov    %eax,(%esp)
08309a62 +0x09be:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309a67 +0x09c3:  mov    0x8(%ebp),%eax
08309a6a +0x09c6:  mov    %eax,(%esp)
08309a6d +0x09c9:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08309a72 +0x09ce:  mov    0x4(%eax),%edx
08309a75 +0x09d1:  mov    -0x58(%ebp),%eax
08309a78 +0x09d4:  mov    %edx,0x4(%esp)
08309a7c +0x09d8:  mov    %eax,(%esp)
08309a7f +0x09db:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08309a84 +0x09e0:  mov    0x8(%ebp),%eax
08309a87 +0x09e3:  mov    %eax,(%esp)
08309a8a +0x09e6:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08309a8f +0x09eb:  mov    0x4(%eax),%ebx
08309a92 +0x09ee:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08309a97 +0x09f3:  mov    %ebx,0x4(%esp)
08309a9b +0x09f7:  mov    %eax,(%esp)
08309a9e +0x09fa:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
08309aa3 +0x09ff:  mov    %eax,-0x44(%ebp)
08309aa6 +0x0a02:  cmpl   $0x0,-0x44(%ebp)
08309aaa +0x0a06:  jne    08309b03 <+0xa5f>
08309aac +0x0a08:  mov    0x8(%ebp),%eax
08309aaf +0x0a0b:  mov    0x64(%eax),%esi
08309ab2 +0x0a0e:  mov    0x8(%ebp),%eax
08309ab5 +0x0a11:  mov    0x60(%eax),%ebx
08309ab8 +0x0a14:  mov    0x8(%ebp),%eax
08309abb +0x0a17:  mov    %eax,(%esp)
08309abe +0x0a1a:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08309ac3 +0x0a1f:  mov    0x4(%eax),%eax
08309ac6 +0x0a22:  mov    %esi,0x1c(%esp)
08309aca +0x0a26:  mov    %ebx,0x18(%esp)
08309ace +0x0a2a:  mov    %eax,0x14(%esp)
08309ad2 +0x0a2e:  movl   $"Find Map[%d] Error(In Map Maker)(%d/%d)",0x10(%esp)
08309ada +0x0a36:  movl   $0x1746,0xc(%esp)
08309ae2 +0x0a3e:  movl   $&_ZZN13CBattle_Field10MakePacketEiPvE19__PRETTY_FUNCTION__,0x8(%esp)
08309aea +0x0a46:  movl   $"battle_field.cpp",0x4(%esp)
08309af2 +0x0a4e:  movl   $0x1,(%esp)
08309af9 +0x0a55:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08309afe +0x0a5a:  jmp    0830a0dc <+0x1038>
08309b03 +0x0a5f:  mov    -0x58(%ebp),%eax
08309b06 +0x0a62:  movl   $0x0,0x4(%esp)
08309b0e +0x0a6a:  mov    %eax,(%esp)
08309b11 +0x0a6d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309b16 +0x0a72:  mov    -0x58(%ebp),%eax
08309b19 +0x0a75:  movl   $0x0,0x4(%esp)
08309b21 +0x0a7d:  mov    %eax,(%esp)
08309b24 +0x0a80:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309b29 +0x0a85:  mov    -0x58(%ebp),%eax
08309b2c +0x0a88:  movl   $0x0,0x4(%esp)
08309b34 +0x0a90:  mov    %eax,(%esp)
08309b37 +0x0a93:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309b3c +0x0a98:  mov    -0x58(%ebp),%eax
08309b3f +0x0a9b:  movl   $0x1,0x4(%esp)
08309b47 +0x0aa3:  mov    %eax,(%esp)
08309b4a +0x0aa6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08309b4f +0x0aab:  jmp    0830a0dc <+0x1038>
08309b54 +0x0ab0:  mov    0x8(%ebp),%eax
08309b57 +0x0ab3:  mov    0x1ac(%eax),%edx
08309b5d +0x0ab9:  mov    -0x58(%ebp),%eax
08309b60 +0x0abc:  mov    %edx,0x4(%esp)
08309b64 +0x0ac0:  mov    %eax,(%esp)
08309b67 +0x0ac3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309b6c +0x0ac8:  mov    0x8(%ebp),%eax
08309b6f +0x0acb:  mov    0xc(%eax),%edx
08309b72 +0x0ace:  mov    -0x58(%ebp),%eax
08309b75 +0x0ad1:  mov    %edx,0x4(%esp)
08309b79 +0x0ad5:  mov    %eax,(%esp)
08309b7c +0x0ad8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309b81 +0x0add:  mov    0x8(%ebp),%eax
08309b84 +0x0ae0:  mov    0x10(%eax),%edx
08309b87 +0x0ae3:  mov    -0x58(%ebp),%eax
08309b8a +0x0ae6:  mov    %edx,0x4(%esp)
08309b8e +0x0aea:  mov    %eax,(%esp)
08309b91 +0x0aed:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309b96 +0x0af2:  mov    -0x58(%ebp),%eax
08309b99 +0x0af5:  movl   $0x0,0x4(%esp)
08309ba1 +0x0afd:  mov    %eax,(%esp)
08309ba4 +0x0b00:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309ba9 +0x0b05:  mov    -0x58(%ebp),%eax
08309bac +0x0b08:  movl   $0x0,0x4(%esp)
08309bb4 +0x0b10:  mov    %eax,(%esp)
08309bb7 +0x0b13:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309bbc +0x0b18:  mov    0x8(%ebp),%eax
08309bbf +0x0b1b:  mov    0x1b4(%eax),%eax
08309bc5 +0x0b21:  mov    %eax,%edx
08309bc7 +0x0b23:  mov    -0x58(%ebp),%eax
08309bca +0x0b26:  mov    %edx,0x4(%esp)
08309bce +0x0b2a:  mov    %eax,(%esp)
08309bd1 +0x0b2d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309bd6 +0x0b32:  mov    0x8(%ebp),%eax
08309bd9 +0x0b35:  mov    (%eax),%eax
08309bdb +0x0b37:  test   %eax,%eax
08309bdd +0x0b39:  je     08309bff <+0xb5b>
08309bdf +0x0b3b:  mov    0x8(%ebp),%eax
08309be2 +0x0b3e:  mov    (%eax),%eax
08309be4 +0x0b40:  mov    %eax,(%esp)
08309be7 +0x0b43:  call   0830ed3a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x91f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x91f
08309bec +0x0b48:  mov    %eax,%edx
08309bee +0x0b4a:  mov    -0x58(%ebp),%eax
08309bf1 +0x0b4d:  mov    %edx,0x4(%esp)
08309bf5 +0x0b51:  mov    %eax,(%esp)
08309bf8 +0x0b54:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309bfd +0x0b59:  jmp    08309c12 <+0xb6e>
08309bff +0x0b5b:  mov    -0x58(%ebp),%eax
08309c02 +0x0b5e:  movl   $0xb,0x4(%esp)
08309c0a +0x0b66:  mov    %eax,(%esp)
08309c0d +0x0b69:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309c12 +0x0b6e:  mov    -0x58(%ebp),%eax
08309c15 +0x0b71:  movl   $0x1,0x4(%esp)
08309c1d +0x0b79:  mov    %eax,(%esp)
08309c20 +0x0b7c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08309c25 +0x0b81:  jmp    0830a0dc <+0x1038>
08309c2a +0x0b86:  mov    0x8(%ebp),%eax
08309c2d +0x0b89:  mov    (%eax),%eax
08309c2f +0x0b8b:  mov    %eax,(%esp)
08309c32 +0x0b8e:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08309c37 +0x0b93:  mov    %al,-0x3d(%ebp)
08309c3a +0x0b96:  movsbl -0x3d(%ebp),%edx
08309c3e +0x0b9a:  mov    -0x58(%ebp),%eax
08309c41 +0x0b9d:  mov    %edx,0x4(%esp)
08309c45 +0x0ba1:  mov    %eax,(%esp)
08309c48 +0x0ba4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309c4d +0x0ba9:  mov    0x8(%ebp),%eax
08309c50 +0x0bac:  mov    %eax,(%esp)
08309c53 +0x0baf:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08309c58 +0x0bb4:  add    $0xc,%eax
08309c5b +0x0bb7:  mov    %eax,-0x3c(%ebp)
08309c5e +0x0bba:  lea    -0x9c(%ebp),%eax
08309c64 +0x0bc0:  mov    -0x3c(%ebp),%edx
08309c67 +0x0bc3:  mov    %edx,0x4(%esp)
08309c6b +0x0bc7:  mov    %eax,(%esp)
08309c6e +0x0bca:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
08309c73 +0x0bcf:  sub    $0x4,%esp
08309c76 +0x0bd2:  movb   $0x1,-0x35(%ebp)
08309c7a +0x0bd6:  jmp    08309daf <+0xd0b>
08309c7f +0x0bdb:  movsbl -0x35(%ebp),%edx
08309c83 +0x0bdf:  mov    -0x58(%ebp),%eax
08309c86 +0x0be2:  mov    %edx,0x4(%esp)
08309c8a +0x0be6:  mov    %eax,(%esp)
08309c8d +0x0be9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309c92 +0x0bee:  movsbw -0x35(%ebp),%ax
08309c97 +0x0bf3:  mov    %ax,-0x62(%ebp)
08309c9b +0x0bf7:  mov    0x8(%ebp),%eax
08309c9e +0x0bfa:  lea    0x13c(%eax),%ecx
08309ca4 +0x0c00:  lea    -0xa0(%ebp),%eax
08309caa +0x0c06:  lea    -0x62(%ebp),%edx
08309cad +0x0c09:  mov    %edx,0x8(%esp)
08309cb1 +0x0c0d:  mov    %ecx,0x4(%esp)
08309cb5 +0x0c11:  mov    %eax,(%esp)
08309cb8 +0x0c14:  call   08311c78 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x385d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x385d
08309cbd +0x0c19:  sub    $0x4,%esp
08309cc0 +0x0c1c:  lea    -0xa0(%ebp),%eax
08309cc6 +0x0c22:  mov    %eax,(%esp)
08309cc9 +0x0c25:  call   08311ca4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3889>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3889
08309cce +0x0c2a:  add    $0x4,%eax
08309cd1 +0x0c2d:  mov    %eax,-0x34(%ebp)
08309cd4 +0x0c30:  mov    -0x34(%ebp),%eax
08309cd7 +0x0c33:  mov    %eax,(%esp)
08309cda +0x0c36:  call   08311cb2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3897>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3897
08309cdf +0x0c3b:  mov    %eax,%edx
08309ce1 +0x0c3d:  mov    -0x58(%ebp),%eax
08309ce4 +0x0c40:  mov    %edx,0x4(%esp)
08309ce8 +0x0c44:  mov    %eax,(%esp)
08309ceb +0x0c47:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309cf0 +0x0c4c:  movl   $0x0,-0x30(%ebp)
08309cf7 +0x0c53:  jmp    08309d92 <+0xcee>
08309cfc +0x0c58:  mov    -0x30(%ebp),%eax
08309cff +0x0c5b:  mov    %eax,0x4(%esp)
08309d03 +0x0c5f:  mov    -0x34(%ebp),%eax
08309d06 +0x0c62:  mov    %eax,(%esp)
08309d09 +0x0c65:  call   08311cd4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x38b9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x38b9
08309d0e +0x0c6a:  movzwl (%eax),%eax
08309d11 +0x0c6d:  movswl %ax,%edx
08309d14 +0x0c70:  mov    -0x58(%ebp),%eax
08309d17 +0x0c73:  mov    %edx,0x4(%esp)
08309d1b +0x0c77:  mov    %eax,(%esp)
08309d1e +0x0c7a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309d23 +0x0c7f:  movl   $0x0,-0x2c(%ebp)
08309d2a +0x0c86:  jmp    08309d80 <+0xcdc>
08309d2c +0x0c88:  mov    -0x30(%ebp),%eax
08309d2f +0x0c8b:  mov    %eax,0x4(%esp)
08309d33 +0x0c8f:  mov    -0x34(%ebp),%eax
08309d36 +0x0c92:  mov    %eax,(%esp)
08309d39 +0x0c95:  call   08311cd4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x38b9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x38b9
08309d3e +0x0c9a:  mov    -0x2c(%ebp),%edx
08309d41 +0x0c9d:  mov    0x4(%eax,%edx,8),%edx
08309d45 +0x0ca1:  mov    -0x58(%ebp),%eax
08309d48 +0x0ca4:  mov    %edx,0x4(%esp)
08309d4c +0x0ca8:  mov    %eax,(%esp)
08309d4f +0x0cab:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08309d54 +0x0cb0:  mov    -0x30(%ebp),%eax
08309d57 +0x0cb3:  mov    %eax,0x4(%esp)
08309d5b +0x0cb7:  mov    -0x34(%ebp),%eax
08309d5e +0x0cba:  mov    %eax,(%esp)
08309d61 +0x0cbd:  call   08311cd4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x38b9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x38b9
08309d66 +0x0cc2:  mov    -0x2c(%ebp),%edx
08309d69 +0x0cc5:  mov    0x8(%eax,%edx,8),%edx
08309d6d +0x0cc9:  mov    -0x58(%ebp),%eax
08309d70 +0x0ccc:  mov    %edx,0x4(%esp)
08309d74 +0x0cd0:  mov    %eax,(%esp)
08309d77 +0x0cd3:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08309d7c +0x0cd8:  addl   $0x1,-0x2c(%ebp)
08309d80 +0x0cdc:  movsbl -0x3d(%ebp),%eax
08309d84 +0x0ce0:  cmp    -0x2c(%ebp),%eax
08309d87 +0x0ce3:  setg   %al
08309d8a +0x0ce6:  test   %al,%al
08309d8c +0x0ce8:  jne    08309d2c <+0xc88>
08309d8e +0x0cea:  addl   $0x1,-0x30(%ebp)
08309d92 +0x0cee:  mov    -0x34(%ebp),%eax
08309d95 +0x0cf1:  mov    %eax,(%esp)
08309d98 +0x0cf4:  call   08311cb2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3897>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3897
08309d9d +0x0cf9:  cmp    -0x30(%ebp),%eax
08309da0 +0x0cfc:  seta   %al
08309da3 +0x0cff:  test   %al,%al
08309da5 +0x0d01:  jne    08309cfc <+0xc58>
08309dab +0x0d07:  addb   $0x1,-0x35(%ebp)
08309daf +0x0d0b:  cmpb   $0x4,-0x35(%ebp)
08309db3 +0x0d0f:  setle  %al
08309db6 +0x0d12:  test   %al,%al
08309db8 +0x0d14:  jne    08309c7f <+0xbdb>
08309dbe +0x0d1a:  movb   $0x1,-0x25(%ebp)
08309dc2 +0x0d1e:  jmp    08309ec9 <+0xe25>
08309dc7 +0x0d23:  movsbl -0x25(%ebp),%edx
08309dcb +0x0d27:  mov    -0x58(%ebp),%eax
08309dce +0x0d2a:  mov    %edx,0x4(%esp)
08309dd2 +0x0d2e:  mov    %eax,(%esp)
08309dd5 +0x0d31:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309dda +0x0d36:  movl   $0x0,-0x24(%ebp)
08309de1 +0x0d3d:  jmp    08309e7a <+0xdd6>
08309de6 +0x0d42:  lea    -0x9c(%ebp),%eax
08309dec +0x0d48:  mov    %eax,(%esp)
08309def +0x0d4b:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08309df4 +0x0d50:  add    $0x4,%eax
08309df7 +0x0d53:  mov    %eax,-0x20(%ebp)
08309dfa +0x0d56:  mov    -0x20(%ebp),%eax
08309dfd +0x0d59:  mov    0x4(%eax),%edx
08309e00 +0x0d5c:  mov    -0x58(%ebp),%eax
08309e03 +0x0d5f:  mov    %edx,0x4(%esp)
08309e07 +0x0d63:  mov    %eax,(%esp)
08309e0a +0x0d66:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08309e0f +0x0d6b:  mov    -0x20(%ebp),%eax
08309e12 +0x0d6e:  mov    0xc(%eax),%edx
08309e15 +0x0d71:  mov    -0x58(%ebp),%eax
08309e18 +0x0d74:  mov    %edx,0x4(%esp)
08309e1c +0x0d78:  mov    %eax,(%esp)
08309e1f +0x0d7b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08309e24 +0x0d80:  mov    -0x20(%ebp),%eax
08309e27 +0x0d83:  movzbl 0x10(%eax),%eax
08309e2b +0x0d87:  movzbl %al,%edx
08309e2e +0x0d8a:  mov    -0x58(%ebp),%eax
08309e31 +0x0d8d:  mov    %edx,0x4(%esp)
08309e35 +0x0d91:  mov    %eax,(%esp)
08309e38 +0x0d94:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309e3d +0x0d99:  mov    -0x20(%ebp),%eax
08309e40 +0x0d9c:  movzbl 0x8(%eax),%eax
08309e44 +0x0da0:  movsbl %al,%edx
08309e47 +0x0da3:  mov    -0x58(%ebp),%eax
08309e4a +0x0da6:  mov    %edx,0x4(%esp)
08309e4e +0x0daa:  mov    %eax,(%esp)
08309e51 +0x0dad:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309e56 +0x0db2:  addl   $0x1,-0x24(%ebp)
08309e5a +0x0db6:  lea    -0x5c(%ebp),%eax
08309e5d +0x0db9:  movl   $0x0,0x8(%esp)
08309e65 +0x0dc1:  lea    -0x9c(%ebp),%edx
08309e6b +0x0dc7:  mov    %edx,0x4(%esp)
08309e6f +0x0dcb:  mov    %eax,(%esp)
08309e72 +0x0dce:  call   08155b8c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x54c1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x54c1
08309e77 +0x0dd3:  sub    $0x4,%esp
08309e7a +0x0dd6:  movsbl -0x3d(%ebp),%eax
08309e7e +0x0dda:  cmp    -0x24(%ebp),%eax
08309e81 +0x0ddd:  jle    08309eb8 <+0xe14>
08309e83 +0x0ddf:  lea    -0x60(%ebp),%eax
08309e86 +0x0de2:  mov    -0x3c(%ebp),%edx
08309e89 +0x0de5:  mov    %edx,0x4(%esp)
08309e8d +0x0de9:  mov    %eax,(%esp)
08309e90 +0x0dec:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
08309e95 +0x0df1:  sub    $0x4,%esp
08309e98 +0x0df4:  lea    -0x60(%ebp),%eax
08309e9b +0x0df7:  mov    %eax,0x4(%esp)
08309e9f +0x0dfb:  lea    -0x9c(%ebp),%eax
08309ea5 +0x0e01:  mov    %eax,(%esp)
08309ea8 +0x0e04:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
08309ead +0x0e09:  test   %al,%al
08309eaf +0x0e0b:  je     08309eb8 <+0xe14>
08309eb1 +0x0e0d:  mov    $0x1,%eax
08309eb6 +0x0e12:  jmp    08309ebd <+0xe19>
08309eb8 +0x0e14:  mov    $0x0,%eax
08309ebd +0x0e19:  test   %al,%al
08309ebf +0x0e1b:  jne    08309de6 <+0xd42>
08309ec5 +0x0e21:  addb   $0x1,-0x25(%ebp)
08309ec9 +0x0e25:  cmpb   $0x4,-0x25(%ebp)
08309ecd +0x0e29:  setle  %al
08309ed0 +0x0e2c:  test   %al,%al
08309ed2 +0x0e2e:  jne    08309dc7 <+0xd23>
08309ed8 +0x0e34:  mov    -0x58(%ebp),%eax
08309edb +0x0e37:  movl   $0x1,0x4(%esp)
08309ee3 +0x0e3f:  mov    %eax,(%esp)
08309ee6 +0x0e42:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08309eeb +0x0e47:  jmp    0830a0dc <+0x1038>
08309ef0 +0x0e4c:  mov    -0x58(%ebp),%eax
08309ef3 +0x0e4f:  movl   $0x183,0x8(%esp)
08309efb +0x0e57:  movl   $0x0,0x4(%esp)
08309f03 +0x0e5f:  mov    %eax,(%esp)
08309f06 +0x0e62:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08309f0b +0x0e67:  movl   $0xffffffff,-0xa4(%ebp)
08309f15 +0x0e71:  movl   $0xffffffff,-0xa8(%ebp)
08309f1f +0x0e7b:  lea    -0xa8(%ebp),%eax
08309f25 +0x0e81:  mov    %eax,0x8(%esp)
08309f29 +0x0e85:  lea    -0xa4(%ebp),%eax
08309f2f +0x0e8b:  mov    %eax,0x4(%esp)
08309f33 +0x0e8f:  mov    0x8(%ebp),%eax
08309f36 +0x0e92:  mov    %eax,(%esp)
08309f39 +0x0e95:  call   08300da6 <_ZN13CBattle_Field11getCurPosXYERiS0_>  ; CBattle_Field::getCurPosXY(int&, int&)
08309f3e +0x0e9a:  mov    -0xa4(%ebp),%edx
08309f44 +0x0ea0:  mov    -0x58(%ebp),%eax
08309f47 +0x0ea3:  mov    %edx,0x4(%esp)
08309f4b +0x0ea7:  mov    %eax,(%esp)
08309f4e +0x0eaa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309f53 +0x0eaf:  mov    -0xa8(%ebp),%edx
08309f59 +0x0eb5:  mov    -0x58(%ebp),%eax
08309f5c +0x0eb8:  mov    %edx,0x4(%esp)
08309f60 +0x0ebc:  mov    %eax,(%esp)
08309f63 +0x0ebf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309f68 +0x0ec4:  mov    0x8(%ebp),%eax
08309f6b +0x0ec7:  mov    %eax,(%esp)
08309f6e +0x0eca:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08309f73 +0x0ecf:  mov    0x48(%eax),%edx
08309f76 +0x0ed2:  mov    -0x58(%ebp),%eax
08309f79 +0x0ed5:  mov    %edx,0x4(%esp)
08309f7d +0x0ed9:  mov    %eax,(%esp)
08309f80 +0x0edc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08309f85 +0x0ee1:  mov    -0x58(%ebp),%eax
08309f88 +0x0ee4:  movl   $0x0,0x4(%esp)
08309f90 +0x0eec:  mov    %eax,(%esp)
08309f93 +0x0eef:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309f98 +0x0ef4:  mov    0x8(%ebp),%eax
08309f9b +0x0ef7:  mov    %eax,(%esp)
08309f9e +0x0efa:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08309fa3 +0x0eff:  movzbl 0x1(%eax),%eax
08309fa7 +0x0f03:  test   %al,%al
08309fa9 +0x0f05:  je     08309fd6 <+0xf32>
08309fab +0x0f07:  mov    -0x58(%ebp),%eax
08309fae +0x0f0a:  movl   $0x0,0x4(%esp)
08309fb6 +0x0f12:  mov    %eax,(%esp)
08309fb9 +0x0f15:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309fbe +0x0f1a:  mov    -0x58(%ebp),%eax
08309fc1 +0x0f1d:  movl   $0x1,0x4(%esp)
08309fc9 +0x0f25:  mov    %eax,(%esp)
08309fcc +0x0f28:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08309fd1 +0x0f2d:  jmp    0830a0dc <+0x1038>
08309fd6 +0x0f32:  mov    0x8(%ebp),%eax
08309fd9 +0x0f35:  mov    %eax,(%esp)
08309fdc +0x0f38:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08309fe1 +0x0f3d:  movzbl 0x44(%eax),%eax
08309fe5 +0x0f41:  movsbl %al,%edx
08309fe8 +0x0f44:  mov    -0x58(%ebp),%eax
08309feb +0x0f47:  mov    %edx,0x4(%esp)
08309fef +0x0f4b:  mov    %eax,(%esp)
08309ff2 +0x0f4e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08309ff7 +0x0f53:  mov    0x8(%ebp),%eax
08309ffa +0x0f56:  mov    %eax,(%esp)
08309ffd +0x0f59:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830a002 +0x0f5e:  mov    0x4(%eax),%edx
0830a005 +0x0f61:  mov    -0x58(%ebp),%eax
0830a008 +0x0f64:  mov    %edx,0x4(%esp)
0830a00c +0x0f68:  mov    %eax,(%esp)
0830a00f +0x0f6b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0830a014 +0x0f70:  mov    0x8(%ebp),%eax
0830a017 +0x0f73:  mov    %eax,(%esp)
0830a01a +0x0f76:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830a01f +0x0f7b:  mov    0x4(%eax),%ebx
0830a022 +0x0f7e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830a027 +0x0f83:  mov    %ebx,0x4(%esp)
0830a02b +0x0f87:  mov    %eax,(%esp)
0830a02e +0x0f8a:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
0830a033 +0x0f8f:  mov    %eax,-0x1c(%ebp)
0830a036 +0x0f92:  cmpl   $0x0,-0x1c(%ebp)
0830a03a +0x0f96:  jne    0830a090 <+0xfec>
0830a03c +0x0f98:  mov    0x8(%ebp),%eax
0830a03f +0x0f9b:  mov    0x64(%eax),%esi
0830a042 +0x0f9e:  mov    0x8(%ebp),%eax
0830a045 +0x0fa1:  mov    0x60(%eax),%ebx
0830a048 +0x0fa4:  mov    0x8(%ebp),%eax
0830a04b +0x0fa7:  mov    %eax,(%esp)
0830a04e +0x0faa:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830a053 +0x0faf:  mov    0x4(%eax),%eax
0830a056 +0x0fb2:  mov    %esi,0x1c(%esp)
0830a05a +0x0fb6:  mov    %ebx,0x18(%esp)
0830a05e +0x0fba:  mov    %eax,0x14(%esp)
0830a062 +0x0fbe:  movl   $"Find Map[%d] Error(In Map Maker)(%d/%d)",0x10(%esp)
0830a06a +0x0fc6:  movl   $0x17d2,0xc(%esp)
0830a072 +0x0fce:  movl   $&_ZZN13CBattle_Field10MakePacketEiPvE19__PRETTY_FUNCTION__,0x8(%esp)
0830a07a +0x0fd6:  movl   $"battle_field.cpp",0x4(%esp)
0830a082 +0x0fde:  movl   $0x1,(%esp)
0830a089 +0x0fe5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830a08e +0x0fea:  jmp    0830a0dc <+0x1038>
0830a090 +0x0fec:  mov    -0x58(%ebp),%eax
0830a093 +0x0fef:  movl   $0x0,0x4(%esp)
0830a09b +0x0ff7:  mov    %eax,(%esp)
0830a09e +0x0ffa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830a0a3 +0x0fff:  mov    -0x58(%ebp),%eax
0830a0a6 +0x1002:  movl   $0x0,0x4(%esp)
0830a0ae +0x100a:  mov    %eax,(%esp)
0830a0b1 +0x100d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830a0b6 +0x1012:  mov    -0x58(%ebp),%eax
0830a0b9 +0x1015:  movl   $0x0,0x4(%esp)
0830a0c1 +0x101d:  mov    %eax,(%esp)
0830a0c4 +0x1020:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830a0c9 +0x1025:  mov    -0x58(%ebp),%eax
0830a0cc +0x1028:  movl   $0x1,0x4(%esp)
0830a0d4 +0x1030:  mov    %eax,(%esp)
0830a0d7 +0x1033:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0830a0dc +0x1038:  lea    -0xc(%ebp),%esp
0830a0df +0x103b:  add    $0x0,%esp
0830a0e2 +0x103e:  pop    %ebx
0830a0e3 +0x103f:  pop    %esi
0830a0e4 +0x1040:  pop    %edi
0830a0e5 +0x1041:  pop    %ebp
0830a0e6 +0x1042:  ret
0830a0e7 +0x1043:  nop
```

## 反编译 C

```c
// CBattle_Field::MakePacket @ 0x83090a4

/* CBattle_Field::MakePacket(int, void*) */

void __thiscall CBattle_Field::MakePacket(CBattle_Field *this,int param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  short *psVar8;
  int iVar9;
  undefined4 *puVar10;
  map_item *pmVar11;
  byte bVar12;
  int local_44c [2];
  char local_444;
  int local_440;
  byte local_43c;
  byte local_439;
  byte local_438;
  char local_418;
  ushort local_118;
  map_item local_100;
  char local_ff;
  int local_fc;
  Inven_Item aIStack_f0 [2];
  int local_ee;
  ushort local_e5;
  stAmplifyOption_t asStack_df [51];
  int local_ac;
  int local_a8;
  _Rb_tree_iterator<std::pair<short_const,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>>
  local_a4 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_a0 [4];
  int local_9c;
  int local_98;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_94 [12];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_88 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_84 [4];
  int local_80;
  int local_7c;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_78 [4];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_74 [4];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_70 [4];
  _Rb_tree_iterator<std::pair<int_const,map_item>> local_6c [4];
  TOD_Layer local_68 [2];
  short local_66;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_64 [4];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_60 [4];
  InterfacePacketBuf *local_5c;
  uint local_58;
  CUser *local_54;
  undefined4 local_50;
  ushort local_4a;
  int local_48;
  char local_41;
  int local_40;
  char local_39;
  vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>> *local_38;
  uint local_34;
  int local_30;
  char local_29;
  int local_28;
  int local_24;
  int local_20;
  
  bVar12 = 0;
  local_5c = param_2;
  if (param_1 == 0xd3) {
    InterfacePacketBuf::put_header(param_2,0,0xd3);
    local_98 = -1;
    local_9c = -1;
    getCurPosXY(this,&local_98,&local_9c);
    InterfacePacketBuf::put_byte(local_5c,local_98);
    InterfacePacketBuf::put_byte(local_5c,local_9c);
    iVar5 = GetCurrentMapInfo(this);
    InterfacePacketBuf::put_int(local_5c,*(int *)(iVar5 + 0x48));
    InterfacePacketBuf::put_byte(local_5c,0);
    iVar5 = GetCurrentMapInfo(this);
    if (*(char *)(iVar5 + 1) == '\0') {
      iVar5 = GetCurrentMapInfo(this);
      InterfacePacketBuf::put_byte(local_5c,(int)*(char *)(iVar5 + 0x44));
      iVar5 = GetCurrentMapInfo(this);
      InterfacePacketBuf::put_short(local_5c,*(int *)(iVar5 + 4));
      GetCurrentMapInfo(this);
      iVar5 = G_CDataManager();
      local_48 = CDataManager::find_map(iVar5);
      if (local_48 == 0) {
        uVar1 = *(undefined4 *)(this + 100);
        uVar2 = *(undefined4 *)(this + 0x60);
        iVar5 = GetCurrentMapInfo(this);
        LogManager::logFormat
                  (1,"battle_field.cpp","void CBattle_Field::MakePacket(int, void*)",0x1746,
                   "Find Map[%d] Error(In Map Maker)(%d/%d)",*(undefined4 *)(iVar5 + 4),uVar2,uVar1)
        ;
      }
      else {
        InterfacePacketBuf::put_byte(local_5c,0);
        InterfacePacketBuf::put_byte(local_5c,0);
        InterfacePacketBuf::put_byte(local_5c,0);
        InterfacePacketBuf::finalize(local_5c,true);
      }
    }
    else {
      InterfacePacketBuf::put_byte(local_5c,0);
      InterfacePacketBuf::finalize(local_5c,true);
    }
  }
  else if (param_1 < 0xd4) {
    if (param_1 == 0x1c) {
      InterfacePacketBuf::put_byte(param_2,*(int *)(this + 0x1ac));
      InterfacePacketBuf::put_byte(local_5c,*(int *)(this + 0xc));
      InterfacePacketBuf::put_byte(local_5c,*(int *)(this + 0x10));
      InterfacePacketBuf::put_byte(local_5c,*(int *)(this + 0x1c0));
      InterfacePacketBuf::put_byte(local_5c,*(int *)(this + 0x1c4));
      InterfacePacketBuf::put_byte(local_5c,*(int *)(this + 0x1b4));
      iVar5 = CRidable::GetObjectCnt((CRidable *)(this + 0xd0));
      InterfacePacketBuf::put_byte(local_5c,iVar5);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_94);
                    /* try { // try from 083097e2 to 0830992c has its CatchHandler @ 0830992f */
      CRidable::GetObjectPos((CRidable *)(this + 0xd0),(vector *)local_94);
      local_58 = 0;
      while (iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               (local_94), (int)local_58 < iVar5) {
        piVar7 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[](local_94,local_58);
        InterfacePacketBuf::put_byte(local_5c,*piVar7);
        iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          (local_94,local_58);
        InterfacePacketBuf::put_byte(local_5c,*(int *)(iVar5 + 4));
        local_58 = local_58 + 1;
      }
      local_54 = (CUser *)0x0;
      local_50 = 0;
      local_4a = 0;
      if ((*(int *)this != 0) &&
         (local_54 = (CUser *)CParty::getManager(*(CParty **)this), local_54 != (CUser *)0x0)) {
        local_50 = CUser::GetCharacExpandData(local_54,0xd);
        TOD_UserState::getTodayEnterLayer();
        local_4a = TOD_Layer::GetLayer(local_68);
      }
      InterfacePacketBuf::put_short(local_5c,(uint)local_4a);
      if (*(int *)this == 0) {
        InterfacePacketBuf::put_byte(local_5c,0xb);
      }
      else {
        iVar5 = CParty::get_random_buff_type(*(CParty **)this);
        InterfacePacketBuf::put_byte(local_5c,iVar5);
      }
      InterfacePacketBuf::finalize(local_5c,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_94);
    }
    else if (param_1 == 0x1d) {
      InterfacePacketBuf::put_header(param_2,0,0x1d);
      local_7c = -1;
      local_80 = -1;
      getCurPosXY(this,&local_7c,&local_80);
      InterfacePacketBuf::put_byte(local_5c,local_7c);
      InterfacePacketBuf::put_byte(local_5c,local_80);
      iVar5 = GetCurrentMapInfo(this);
      if (*(char *)(iVar5 + 0xe8) == '\0') {
        InterfacePacketBuf::put_byte(local_5c,0);
      }
      else {
        InterfacePacketBuf::put_byte(local_5c,1);
      }
      iVar5 = GetCurrentMapInfo(this);
      InterfacePacketBuf::put_int(local_5c,*(int *)(iVar5 + 0x48));
      InterfacePacketBuf::put_byte(local_5c,(int)(char)this[0x1cc]);
      InterfacePacketBuf::put_byte(local_5c,(int)(char)this[0x1cd]);
      iVar5 = GetCurrentMapInfo(this);
      if (*(char *)(iVar5 + 1) == '\0') {
        iVar5 = GetCurrentMapInfo(this);
        InterfacePacketBuf::put_byte(local_5c,(int)*(char *)(iVar5 + 0x44));
        iVar5 = GetCurrentMapInfo(this);
        InterfacePacketBuf::put_short(local_5c,*(int *)(iVar5 + 4));
        iVar5 = GetCurrentMapInfo(this);
        iVar5 = std::
                map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                ::size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                        *)(iVar5 + 0xc));
        InterfacePacketBuf::put_byte(local_5c,iVar5);
        map_monster::map_monster((map_monster *)local_44c);
                    /* try { // try from 08309329 to 083096df has its CatchHandler @ 083096e2 */
        GetCurrentMapInfo(this);
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        begin(local_84);
        while( true ) {
          GetCurrentMapInfo(this);
          std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::end(local_78);
          cVar4 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_84,
                             (_Rb_tree_iterator *)local_78);
          if (cVar4 == '\0') break;
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_84);
          map_monster::operator=((map_monster *)local_44c,(map_monster *)(iVar5 + 4));
          InterfacePacketBuf::put_short(local_5c,(uint)local_118);
          InterfacePacketBuf::put_int(local_5c,local_44c[0]);
          InterfacePacketBuf::put_short(local_5c,(int)(short)local_44c[1]);
          InterfacePacketBuf::put_int(local_5c,local_440);
          InterfacePacketBuf::put_byte(local_5c,(uint)local_43c);
          if (local_418 == '\0') {
            InterfacePacketBuf::put_byte(local_5c,(int)local_444);
          }
          else {
            InterfacePacketBuf::put_byte(local_5c,3);
          }
          InterfacePacketBuf::put_byte(local_5c,(uint)local_439);
          InterfacePacketBuf::put_byte(local_5c,(uint)local_438);
          std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
                    (local_74,(int)local_84);
        }
        iVar5 = GetCurrentMapInfo(this);
        iVar5 = std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>
                ::size((map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>
                        *)(iVar5 + 0x24));
        InterfacePacketBuf::put_byte(local_5c,iVar5);
        map_item::map_item(&local_100);
        GetCurrentMapInfo(this);
        std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::begin
                  (local_88);
        while( true ) {
          GetCurrentMapInfo(this);
          std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end
                    (local_70);
          cVar4 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator!=
                            ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_88,
                             (_Rb_tree_iterator *)local_70);
          if (cVar4 == '\0') break;
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_88);
          puVar10 = (undefined4 *)(iVar5 + 4);
          pmVar11 = &local_100;
          for (iVar9 = 0x15; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined4 *)pmVar11 = *puVar10;
            puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
            pmVar11 = pmVar11 + ((uint)bVar12 * -2 + 1) * 4;
          }
          InterfacePacketBuf::put_byte(local_5c,(int)local_ff);
          InterfacePacketBuf::put_short(local_5c,local_fc);
          InterfacePacketBuf::put_int(local_5c,local_ee);
          iVar5 = Inven_Item::get_add_info(aIStack_f0);
          InterfacePacketBuf::put_int(local_5c,iVar5);
          InterfacePacketBuf::put_short(local_5c,(uint)local_e5);
          uVar6 = stAmplifyOption_t::getAbilityType(asStack_df);
          InterfacePacketBuf::put_byte(local_5c,uVar6 & 0xff);
          uVar6 = stAmplifyOption_t::getAbilityValue(asStack_df);
          InterfacePacketBuf::put_short(local_5c,uVar6 & 0xffff);
          std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator++(local_6c,(int)local_88);
        }
        InterfacePacketBuf::put_byte(local_5c,(uint)(byte)this[0x1b8]);
        CheckAppearRidableObject(this,(PacketGuard *)local_5c);
        if ((*(int *)(this + 0x188) == 0) ||
           (cVar4 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0x188)), cVar4 == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          InterfacePacketBuf::put_byte(local_5c,*(int *)(this + 0x114));
        }
        else {
          InterfacePacketBuf::put_byte(local_5c,0xff);
        }
        InterfacePacketBuf::finalize(local_5c,true);
        map_monster::~map_monster((map_monster *)local_44c);
      }
      else {
        InterfacePacketBuf::put_byte(local_5c,0);
        CheckAppearRidableObject(this,(PacketGuard *)local_5c);
        if ((*(int *)(this + 0x188) == 0) ||
           (cVar4 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0x188)), cVar4 == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          InterfacePacketBuf::put_byte(local_5c,*(int *)(this + 0x114));
        }
        else {
          InterfacePacketBuf::put_byte(local_5c,0xff);
        }
        InterfacePacketBuf::finalize(local_5c,true);
      }
    }
  }
  else {
    if (param_1 == 0x182) {
      local_41 = CParty::get_member_count(*(CParty **)this);
      InterfacePacketBuf::put_byte(local_5c,(int)local_41);
      local_40 = GetCurrentMapInfo(this);
      local_40 = local_40 + 0xc;
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
      begin(local_a0);
      for (local_39 = '\x01'; local_39 < '\x05'; local_39 = local_39 + '\x01') {
        InterfacePacketBuf::put_byte(local_5c,(int)local_39);
        local_66 = (short)local_39;
        std::
        map<short,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>>>
        ::find((short *)local_a4);
        iVar5 = std::
                _Rb_tree_iterator<std::pair<short_const,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>>
                ::operator->(local_a4);
        local_38 = (vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>
                    *)(iVar5 + 4);
        iVar5 = std::
                vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>
                ::size(local_38);
        InterfacePacketBuf::put_byte(local_5c,iVar5);
        local_34 = 0;
        while (uVar6 = std::
                       vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>
                       ::size(local_38), local_34 < uVar6) {
          psVar8 = (short *)std::
                            vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>
                            ::operator[](local_38,local_34);
          InterfacePacketBuf::put_byte(local_5c,(int)*psVar8);
          for (local_30 = 0; local_30 < local_41; local_30 = local_30 + 1) {
            iVar5 = std::
                    vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>
                    ::operator[](local_38,local_34);
            InterfacePacketBuf::put_int(local_5c,*(int *)(iVar5 + 4 + local_30 * 8));
            iVar5 = std::
                    vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>
                    ::operator[](local_38,local_34);
            InterfacePacketBuf::put_short(local_5c,*(int *)(iVar5 + 8 + local_30 * 8));
          }
          local_34 = local_34 + 1;
        }
      }
      local_29 = '\x01';
LAB_08309ec9:
      if ('\x04' < local_29) {
        InterfacePacketBuf::finalize(local_5c,true);
        return;
      }
      InterfacePacketBuf::put_byte(local_5c,(int)local_29);
      local_28 = 0;
      do {
        if (local_28 < local_41) {
          std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::end(local_64);
          cVar4 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_a0,
                             (_Rb_tree_iterator *)local_64);
          if (cVar4 == '\0') goto LAB_08309eb8;
          bVar3 = true;
        }
        else {
LAB_08309eb8:
          bVar3 = false;
        }
        if (!bVar3) goto code_r0x08309ec5;
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_a0);
        local_24 = iVar5 + 4;
        InterfacePacketBuf::put_short(local_5c,*(int *)(iVar5 + 8));
        InterfacePacketBuf::put_int(local_5c,*(int *)(local_24 + 0xc));
        InterfacePacketBuf::put_byte(local_5c,(uint)*(byte *)(local_24 + 0x10));
        InterfacePacketBuf::put_byte(local_5c,(int)*(char *)(local_24 + 8));
        local_28 = local_28 + 1;
        std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++(local_60,(int)local_a0)
        ;
      } while( true );
    }
    if (param_1 == 0x183) {
      InterfacePacketBuf::put_header(param_2,0,0x183);
      local_a8 = -1;
      local_ac = -1;
      getCurPosXY(this,&local_a8,&local_ac);
      InterfacePacketBuf::put_byte(local_5c,local_a8);
      InterfacePacketBuf::put_byte(local_5c,local_ac);
      iVar5 = GetCurrentMapInfo(this);
      InterfacePacketBuf::put_int(local_5c,*(int *)(iVar5 + 0x48));
      InterfacePacketBuf::put_byte(local_5c,0);
      iVar5 = GetCurrentMapInfo(this);
      if (*(char *)(iVar5 + 1) == '\0') {
        iVar5 = GetCurrentMapInfo(this);
        InterfacePacketBuf::put_byte(local_5c,(int)*(char *)(iVar5 + 0x44));
        iVar5 = GetCurrentMapInfo(this);
        InterfacePacketBuf::put_short(local_5c,*(int *)(iVar5 + 4));
        GetCurrentMapInfo(this);
        iVar5 = G_CDataManager();
        local_20 = CDataManager::find_map(iVar5);
        if (local_20 == 0) {
          uVar1 = *(undefined4 *)(this + 100);
          uVar2 = *(undefined4 *)(this + 0x60);
          iVar5 = GetCurrentMapInfo(this);
          LogManager::logFormat
                    (1,"battle_field.cpp","void CBattle_Field::MakePacket(int, void*)",0x17d2,
                     "Find Map[%d] Error(In Map Maker)(%d/%d)",*(undefined4 *)(iVar5 + 4),uVar2,
                     uVar1);
        }
        else {
          InterfacePacketBuf::put_byte(local_5c,0);
          InterfacePacketBuf::put_byte(local_5c,0);
          InterfacePacketBuf::put_byte(local_5c,0);
          InterfacePacketBuf::finalize(local_5c,true);
        }
      }
      else {
        InterfacePacketBuf::put_byte(local_5c,0);
        InterfacePacketBuf::finalize(local_5c,true);
      }
    }
    else if (param_1 == 0xd4) {
      InterfacePacketBuf::put_byte(param_2,*(int *)(this + 0x1ac));
      InterfacePacketBuf::put_byte(local_5c,*(int *)(this + 0xc));
      InterfacePacketBuf::put_byte(local_5c,*(int *)(this + 0x10));
      InterfacePacketBuf::put_byte(local_5c,0);
      InterfacePacketBuf::put_byte(local_5c,0);
      InterfacePacketBuf::put_byte(local_5c,*(int *)(this + 0x1b4));
      if (*(int *)this == 0) {
        InterfacePacketBuf::put_byte(local_5c,0xb);
      }
      else {
        iVar5 = CParty::get_random_buff_type(*(CParty **)this);
        InterfacePacketBuf::put_byte(local_5c,iVar5);
      }
      InterfacePacketBuf::finalize(local_5c,true);
    }
  }
  return;
code_r0x08309ec5:
  local_29 = local_29 + '\x01';
  goto LAB_08309ec9;
}
```
