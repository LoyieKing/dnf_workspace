# CFairPvPScore

`_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev`

`global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to fair_pvp::CFairPvPScore` | `0x084a6018` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a6018  _GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev
#           global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()
# range [0x084a6018, 0x084a7fe3]
084a6018 +0x0000:  push   %ebp
084a6019 +0x0001:  mov    %esp,%ebp
084a601b +0x0003:  sub    $0x18,%esp
084a601e +0x0006:  movl   $0xffff,0x4(%esp)
084a6026 +0x000e:  movl   $0x1,(%esp)
084a602d +0x0015:  call   084a5fd8 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
084a6032 +0x001a:  leave
084a6033 +0x001b:  ret
084a6034 +0x001c:  push   %ebp
084a6035 +0x001d:  mov    %esp,%ebp
084a6037 +0x001f:  mov    0x8(%ebp),%eax
084a603a +0x0022:  movzbl (%eax),%edx
084a603d +0x0025:  mov    0xc(%ebp),%eax
084a6040 +0x0028:  movzbl (%eax),%eax
084a6043 +0x002b:  cmp    %al,%dl
084a6045 +0x002d:  jae    084a604e <+0x36>
084a6047 +0x002f:  mov    $0x1,%eax
084a604c +0x0034:  jmp    084a60a7 <+0x8f>
084a604e +0x0036:  mov    0x8(%ebp),%eax
084a6051 +0x0039:  movzbl (%eax),%edx
084a6054 +0x003c:  mov    0xc(%ebp),%eax
084a6057 +0x003f:  movzbl (%eax),%eax
084a605a +0x0042:  cmp    %al,%dl
084a605c +0x0044:  jne    084a60a2 <+0x8a>
084a605e +0x0046:  mov    0x8(%ebp),%eax
084a6061 +0x0049:  movzbl 0x1(%eax),%edx
084a6065 +0x004d:  mov    0xc(%ebp),%eax
084a6068 +0x0050:  movzbl 0x1(%eax),%eax
084a606c +0x0054:  cmp    %al,%dl
084a606e +0x0056:  jae    084a6077 <+0x5f>
084a6070 +0x0058:  mov    $0x1,%eax
084a6075 +0x005d:  jmp    084a60a7 <+0x8f>
084a6077 +0x005f:  mov    0x8(%ebp),%eax
084a607a +0x0062:  movzbl 0x1(%eax),%edx
084a607e +0x0066:  mov    0xc(%ebp),%eax
084a6081 +0x0069:  movzbl 0x1(%eax),%eax
084a6085 +0x006d:  cmp    %al,%dl
084a6087 +0x006f:  jne    084a60a2 <+0x8a>
084a6089 +0x0071:  mov    0x8(%ebp),%eax
084a608c +0x0074:  movzbl 0x2(%eax),%edx
084a6090 +0x0078:  mov    0xc(%ebp),%eax
084a6093 +0x007b:  movzbl 0x2(%eax),%eax
084a6097 +0x007f:  cmp    %al,%dl
084a6099 +0x0081:  jae    084a60a2 <+0x8a>
084a609b +0x0083:  mov    $0x1,%eax
084a60a0 +0x0088:  jmp    084a60a7 <+0x8f>
084a60a2 +0x008a:  mov    $0x0,%eax
084a60a7 +0x008f:  pop    %ebp
084a60a8 +0x0090:  ret
084a60a9 +0x0091:  nop
084a60aa +0x0092:  push   %ebp
084a60ab +0x0093:  mov    %esp,%ebp
084a60ad +0x0095:  sub    $0xc,%esp
084a60b0 +0x0098:  mov    0xc(%ebp),%ecx
084a60b3 +0x009b:  mov    0x10(%ebp),%edx
084a60b6 +0x009e:  mov    0x14(%ebp),%eax
084a60b9 +0x00a1:  mov    %cl,-0x4(%ebp)
084a60bc +0x00a4:  mov    %dl,-0x8(%ebp)
084a60bf +0x00a7:  mov    %al,-0xc(%ebp)
084a60c2 +0x00aa:  mov    0x8(%ebp),%eax
084a60c5 +0x00ad:  movzbl -0x4(%ebp),%edx
084a60c9 +0x00b1:  mov    %dl,(%eax)
084a60cb +0x00b3:  mov    0x8(%ebp),%eax
084a60ce +0x00b6:  movzbl -0x8(%ebp),%edx
084a60d2 +0x00ba:  mov    %dl,0x1(%eax)
084a60d5 +0x00bd:  mov    0x8(%ebp),%eax
084a60d8 +0x00c0:  movzbl -0xc(%ebp),%edx
084a60dc +0x00c4:  mov    %dl,0x2(%eax)
084a60df +0x00c7:  leave
084a60e0 +0x00c8:  ret
084a60e1 +0x00c9:  nop
084a60e2 +0x00ca:  push   %ebp
084a60e3 +0x00cb:  mov    %esp,%ebp
084a60e5 +0x00cd:  sub    $0x38,%esp
084a60e8 +0x00d0:  mov    0x8(%ebp),%eax
084a60eb +0x00d3:  add    $0x4994,%eax
084a60f0 +0x00d8:  mov    %eax,(%esp)
084a60f3 +0x00db:  call   082fa3c0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1f2
084a60f8 +0x00e0:  test   %al,%al
084a60fa +0x00e2:  je     084a6106 <+0xee>
084a60fc +0x00e4:  mov    $0x0,%eax
084a6101 +0x00e9:  jmp    084a61c1 <+0x1a9>
084a6106 +0x00ee:  mov    0x8(%ebp),%eax
084a6109 +0x00f1:  lea    0x4994(%eax),%ecx
084a610f +0x00f7:  lea    -0x10(%ebp),%eax
084a6112 +0x00fa:  lea    0xc(%ebp),%edx
084a6115 +0x00fd:  mov    %edx,0x8(%esp)
084a6119 +0x0101:  mov    %ecx,0x4(%esp)
084a611d +0x0105:  mov    %eax,(%esp)
084a6120 +0x0108:  call   080c6eaa <_GLOBAL__I_g_ServerString_+0x415>  ; global constructors keyed to g_ServerString_+0x415
084a6125 +0x010d:  sub    $0x4,%esp
084a6128 +0x0110:  mov    0x8(%ebp),%eax
084a612b +0x0113:  lea    0x4994(%eax),%edx
084a6131 +0x0119:  lea    -0xc(%ebp),%eax
084a6134 +0x011c:  mov    %edx,0x4(%esp)
084a6138 +0x0120:  mov    %eax,(%esp)
084a613b +0x0123:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
084a6140 +0x0128:  sub    $0x4,%esp
084a6143 +0x012b:  lea    -0xc(%ebp),%eax
084a6146 +0x012e:  mov    %eax,0x4(%esp)
084a614a +0x0132:  lea    -0x10(%ebp),%eax
084a614d +0x0135:  mov    %eax,(%esp)
084a6150 +0x0138:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
084a6155 +0x013d:  test   %al,%al
084a6157 +0x013f:  je     084a6169 <+0x151>
084a6159 +0x0141:  lea    -0x10(%ebp),%eax
084a615c +0x0144:  mov    %eax,(%esp)
084a615f +0x0147:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
084a6164 +0x014c:  mov    0x4(%eax),%eax
084a6167 +0x014f:  jmp    084a61c1 <+0x1a9>
084a6169 +0x0151:  mov    0x8(%ebp),%eax
084a616c +0x0154:  add    $0x4994,%eax
084a6171 +0x0159:  mov    %eax,(%esp)
084a6174 +0x015c:  call   082fa3c0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1f2
084a6179 +0x0161:  xor    $0x1,%eax
084a617c +0x0164:  test   %al,%al
084a617e +0x0166:  je     084a61bc <+0x1a4>
084a6180 +0x0168:  mov    0x8(%ebp),%eax
084a6183 +0x016b:  lea    0x4994(%eax),%edx
084a6189 +0x0171:  lea    -0x1c(%ebp),%eax
084a618c +0x0174:  mov    %edx,0x4(%esp)
084a6190 +0x0178:  mov    %eax,(%esp)
084a6193 +0x017b:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
084a6198 +0x0180:  sub    $0x4,%esp
084a619b +0x0183:  mov    -0x1c(%ebp),%eax
084a619e +0x0186:  mov    %eax,-0x10(%ebp)
084a61a1 +0x0189:  lea    -0x10(%ebp),%eax
084a61a4 +0x018c:  mov    %eax,(%esp)
084a61a7 +0x018f:  call   08193454 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xbc>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xbc
084a61ac +0x0194:  lea    -0x10(%ebp),%eax
084a61af +0x0197:  mov    %eax,(%esp)
084a61b2 +0x019a:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
084a61b7 +0x019f:  mov    0x4(%eax),%eax
084a61ba +0x01a2:  jmp    084a61c1 <+0x1a9>
084a61bc +0x01a4:  mov    $0x0,%eax
084a61c1 +0x01a9:  leave
084a61c2 +0x01aa:  ret
084a61c3 +0x01ab:  nop
084a61c4 +0x01ac:  push   %ebp
084a61c5 +0x01ad:  mov    %esp,%ebp
084a61c7 +0x01af:  sub    $0x58,%esp
084a61ca +0x01b2:  mov    0x8(%ebp),%eax
084a61cd +0x01b5:  lea    0x49c4(%eax),%edx
084a61d3 +0x01bb:  lea    -0x38(%ebp),%eax
084a61d6 +0x01be:  mov    %edx,0x4(%esp)
084a61da +0x01c2:  mov    %eax,(%esp)
084a61dd +0x01c5:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
084a61e2 +0x01ca:  sub    $0x4,%esp
084a61e5 +0x01cd:  lea    -0x38(%ebp),%eax
084a61e8 +0x01d0:  mov    %eax,0x4(%esp)
084a61ec +0x01d4:  lea    -0x3c(%ebp),%eax
084a61ef +0x01d7:  mov    %eax,(%esp)
084a61f2 +0x01da:  call   08151fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18fb
084a61f7 +0x01df:  jmp    084a622d <+0x215>
084a61f9 +0x01e1:  lea    -0x3c(%ebp),%eax
084a61fc +0x01e4:  mov    %eax,(%esp)
084a61ff +0x01e7:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
084a6204 +0x01ec:  mov    (%eax),%eax
084a6206 +0x01ee:  cmp    0x14(%ebp),%eax
084a6209 +0x01f1:  setge  %al
084a620c +0x01f4:  test   %al,%al
084a620e +0x01f6:  je     084a6222 <+0x20a>
084a6210 +0x01f8:  lea    -0x3c(%ebp),%eax
084a6213 +0x01fb:  mov    %eax,(%esp)
084a6216 +0x01fe:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
084a621b +0x0203:  mov    (%eax),%eax
084a621d +0x0205:  mov    %eax,0x14(%ebp)
084a6220 +0x0208:  jmp    084a6270 <+0x258>
084a6222 +0x020a:  lea    -0x3c(%ebp),%eax
084a6225 +0x020d:  mov    %eax,(%esp)
084a6228 +0x0210:  call   08151f82 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18b7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18b7
084a622d +0x0215:  mov    0x8(%ebp),%eax
084a6230 +0x0218:  lea    0x49c4(%eax),%edx
084a6236 +0x021e:  lea    -0x30(%ebp),%eax
084a6239 +0x0221:  mov    %edx,0x4(%esp)
084a623d +0x0225:  mov    %eax,(%esp)
084a6240 +0x0228:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084a6245 +0x022d:  sub    $0x4,%esp
084a6248 +0x0230:  lea    -0x30(%ebp),%eax
084a624b +0x0233:  mov    %eax,0x4(%esp)
084a624f +0x0237:  lea    -0x34(%ebp),%eax
084a6252 +0x023a:  mov    %eax,(%esp)
084a6255 +0x023d:  call   08151fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18fb
084a625a +0x0242:  lea    -0x34(%ebp),%eax
084a625d +0x0245:  mov    %eax,0x4(%esp)
084a6261 +0x0249:  lea    -0x3c(%ebp),%eax
084a6264 +0x024c:  mov    %eax,(%esp)
084a6267 +0x024f:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
084a626c +0x0254:  test   %al,%al
084a626e +0x0256:  jne    084a61f9 <+0x1e1>
084a6270 +0x0258:  mov    0x8(%ebp),%eax
084a6273 +0x025b:  lea    0x49c4(%eax),%edx
084a6279 +0x0261:  lea    -0x28(%ebp),%eax
084a627c +0x0264:  mov    %edx,0x4(%esp)
084a6280 +0x0268:  mov    %eax,(%esp)
084a6283 +0x026b:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084a6288 +0x0270:  sub    $0x4,%esp
084a628b +0x0273:  lea    -0x28(%ebp),%eax
084a628e +0x0276:  mov    %eax,0x4(%esp)
084a6292 +0x027a:  lea    -0x2c(%ebp),%eax
084a6295 +0x027d:  mov    %eax,(%esp)
084a6298 +0x0280:  call   08151fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18fb
084a629d +0x0285:  lea    -0x2c(%ebp),%eax
084a62a0 +0x0288:  mov    %eax,0x4(%esp)
084a62a4 +0x028c:  lea    -0x3c(%ebp),%eax
084a62a7 +0x028f:  mov    %eax,(%esp)
084a62aa +0x0292:  call   080c7d34 <_GLOBAL__I_g_ServerString_+0x129f>  ; global constructors keyed to g_ServerString_+0x129f
084a62af +0x0297:  test   %al,%al
084a62b1 +0x0299:  je     084a62ce <+0x2b6>
084a62b3 +0x029b:  lea    -0x3c(%ebp),%eax
084a62b6 +0x029e:  mov    %eax,(%esp)
084a62b9 +0x02a1:  call   08193454 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xbc>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xbc
084a62be +0x02a6:  lea    -0x3c(%ebp),%eax
084a62c1 +0x02a9:  mov    %eax,(%esp)
084a62c4 +0x02ac:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
084a62c9 +0x02b1:  mov    (%eax),%eax
084a62cb +0x02b3:  mov    %eax,0x14(%ebp)
084a62ce +0x02b6:  mov    0x14(%ebp),%eax
084a62d1 +0x02b9:  movzbl %al,%ecx
084a62d4 +0x02bc:  mov    0x10(%ebp),%eax
084a62d7 +0x02bf:  movzbl %al,%edx
084a62da +0x02c2:  mov    0xc(%ebp),%eax
084a62dd +0x02c5:  movzbl %al,%eax
084a62e0 +0x02c8:  mov    %ecx,0xc(%esp)
084a62e4 +0x02cc:  mov    %edx,0x8(%esp)
084a62e8 +0x02d0:  mov    %eax,0x4(%esp)
084a62ec +0x02d4:  lea    -0x1f(%ebp),%eax
084a62ef +0x02d7:  mov    %eax,(%esp)
084a62f2 +0x02da:  call   084a60aa <+0x92>
084a62f7 +0x02df:  mov    0x8(%ebp),%eax
084a62fa +0x02e2:  lea    0x49ac(%eax),%ecx
084a6300 +0x02e8:  lea    -0x24(%ebp),%eax
084a6303 +0x02eb:  lea    -0x1f(%ebp),%edx
084a6306 +0x02ee:  mov    %edx,0x8(%esp)
084a630a +0x02f2:  mov    %ecx,0x4(%esp)
084a630e +0x02f6:  mov    %eax,(%esp)
084a6311 +0x02f9:  call   084a6492 <+0x47a>
084a6316 +0x02fe:  sub    $0x4,%esp
084a6319 +0x0301:  lea    -0x24(%ebp),%eax
084a631c +0x0304:  mov    %eax,0x4(%esp)
084a6320 +0x0308:  lea    -0x40(%ebp),%eax
084a6323 +0x030b:  mov    %eax,(%esp)
084a6326 +0x030e:  call   084a64be <+0x4a6>
084a632b +0x0313:  mov    0x8(%ebp),%eax
084a632e +0x0316:  lea    0x49ac(%eax),%edx
084a6334 +0x031c:  lea    -0x18(%ebp),%eax
084a6337 +0x031f:  mov    %edx,0x4(%esp)
084a633b +0x0323:  mov    %eax,(%esp)
084a633e +0x0326:  call   084a64ce <+0x4b6>
084a6343 +0x032b:  sub    $0x4,%esp
084a6346 +0x032e:  lea    -0x18(%ebp),%eax
084a6349 +0x0331:  mov    %eax,0x4(%esp)
084a634d +0x0335:  lea    -0x1c(%ebp),%eax
084a6350 +0x0338:  mov    %eax,(%esp)
084a6353 +0x033b:  call   084a64be <+0x4a6>
084a6358 +0x0340:  lea    -0x1c(%ebp),%eax
084a635b +0x0343:  mov    %eax,0x4(%esp)
084a635f +0x0347:  lea    -0x40(%ebp),%eax
084a6362 +0x034a:  mov    %eax,(%esp)
084a6365 +0x034d:  call   084a64f4 <+0x4dc>
084a636a +0x0352:  test   %al,%al
084a636c +0x0354:  je     084a6375 <+0x35d>
084a636e +0x0356:  mov    $0x0,%eax
084a6373 +0x035b:  jmp    084a63ef <+0x3d7>
084a6375 +0x035d:  lea    -0x40(%ebp),%eax
084a6378 +0x0360:  mov    %eax,(%esp)
084a637b +0x0363:  call   084a6508 <+0x4f0>
084a6380 +0x0368:  lea    0x4(%eax),%edx
084a6383 +0x036b:  lea    -0x14(%ebp),%eax
084a6386 +0x036e:  mov    %edx,0x4(%esp)
084a638a +0x0372:  mov    %eax,(%esp)
084a638d +0x0375:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
084a6392 +0x037a:  sub    $0x4,%esp
084a6395 +0x037d:  lea    -0x40(%ebp),%eax
084a6398 +0x0380:  mov    %eax,(%esp)
084a639b +0x0383:  call   084a6508 <+0x4f0>
084a63a0 +0x0388:  lea    0x4(%eax),%edx
084a63a3 +0x038b:  lea    -0x10(%ebp),%eax
084a63a6 +0x038e:  mov    %edx,0x4(%esp)
084a63aa +0x0392:  mov    %eax,(%esp)
084a63ad +0x0395:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
084a63b2 +0x039a:  sub    $0x4,%esp
084a63b5 +0x039d:  lea    -0xc(%ebp),%eax
084a63b8 +0x03a0:  mov    0x18(%ebp),%edx
084a63bb +0x03a3:  mov    %edx,0x4(%esp)
084a63bf +0x03a7:  mov    %eax,(%esp)
084a63c2 +0x03aa:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
084a63c7 +0x03af:  sub    $0x4,%esp
084a63ca +0x03b2:  mov    -0x14(%ebp),%eax
084a63cd +0x03b5:  mov    %eax,0xc(%esp)
084a63d1 +0x03b9:  mov    -0x10(%ebp),%eax
084a63d4 +0x03bc:  mov    %eax,0x8(%esp)
084a63d8 +0x03c0:  mov    -0xc(%ebp),%eax
084a63db +0x03c3:  mov    %eax,0x4(%esp)
084a63df +0x03c7:  mov    0x18(%ebp),%eax
084a63e2 +0x03ca:  mov    %eax,(%esp)
084a63e5 +0x03cd:  call   084a6516 <+0x4fe>
084a63ea +0x03d2:  mov    $0x1,%eax
084a63ef +0x03d7:  leave
084a63f0 +0x03d8:  ret
084a63f1 +0x03d9:  nop
084a63f2 +0x03da:  push   %ebp
084a63f3 +0x03db:  mov    %esp,%ebp
084a63f5 +0x03dd:  mov    0x8(%ebp),%eax
084a63f8 +0x03e0:  mov    (%eax),%eax
084a63fa +0x03e2:  mov    %eax,%edx
084a63fc +0x03e4:  mov    0xc(%ebp),%eax
084a63ff +0x03e7:  mov    (%eax),%eax
084a6401 +0x03e9:  cmp    %eax,%edx
084a6403 +0x03eb:  jge    084a640c <+0x3f4>
084a6405 +0x03ed:  mov    $0x1,%eax
084a640a +0x03f2:  jmp    084a6438 <+0x420>
084a640c +0x03f4:  mov    0x8(%ebp),%eax
084a640f +0x03f7:  mov    (%eax),%edx
084a6411 +0x03f9:  mov    0xc(%ebp),%eax
084a6414 +0x03fc:  mov    (%eax),%eax
084a6416 +0x03fe:  cmp    %eax,%edx
084a6418 +0x0400:  jne    084a6433 <+0x41b>
084a641a +0x0402:  mov    0x8(%ebp),%eax
084a641d +0x0405:  movzbl 0x4(%eax),%edx
084a6421 +0x0409:  mov    0xc(%ebp),%eax
084a6424 +0x040c:  movzbl 0x4(%eax),%eax
084a6428 +0x0410:  cmp    %al,%dl
084a642a +0x0412:  jge    084a6433 <+0x41b>
084a642c +0x0414:  mov    $0x1,%eax
084a6431 +0x0419:  jmp    084a6438 <+0x420>
084a6433 +0x041b:  mov    $0x0,%eax
084a6438 +0x0420:  pop    %ebp
084a6439 +0x0421:  ret
084a643a +0x0422:  push   %ebp
084a643b +0x0423:  mov    %esp,%ebp
084a643d +0x0425:  sub    $0x4,%esp
084a6440 +0x0428:  mov    0x10(%ebp),%eax
084a6443 +0x042b:  mov    %al,-0x4(%ebp)
084a6446 +0x042e:  mov    0x8(%ebp),%eax
084a6449 +0x0431:  mov    0xc(%ebp),%edx
084a644c +0x0434:  mov    %edx,(%eax)
084a644e +0x0436:  movzbl -0x4(%ebp),%edx
084a6452 +0x043a:  mov    0x8(%ebp),%eax
084a6455 +0x043d:  mov    %dl,0x4(%eax)
084a6458 +0x0440:  leave
084a6459 +0x0441:  ret
084a645a +0x0442:  push   %ebp
084a645b +0x0443:  mov    %esp,%ebp
084a645d +0x0445:  mov    0x8(%ebp),%eax
084a6460 +0x0448:  movl   $0x0,0x50(%eax)
084a6467 +0x044f:  pop    %ebp
084a6468 +0x0450:  ret
084a6469 +0x0451:  nop
084a646a +0x0452:  push   %ebp
084a646b +0x0453:  mov    %esp,%ebp
084a646d +0x0455:  sub    $0x18,%esp
084a6470 +0x0458:  mov    0x8(%ebp),%eax
084a6473 +0x045b:  mov    %eax,(%esp)
084a6476 +0x045e:  call   084a6542 <+0x52a>
084a647b +0x0463:  leave
084a647c +0x0464:  ret
084a647d +0x0465:  nop
084a647e +0x0466:  push   %ebp
084a647f +0x0467:  mov    %esp,%ebp
084a6481 +0x0469:  sub    $0x18,%esp
084a6484 +0x046c:  mov    0x8(%ebp),%eax
084a6487 +0x046f:  mov    %eax,(%esp)
084a648a +0x0472:  call   084a65ac <+0x594>
084a648f +0x0477:  leave
084a6490 +0x0478:  ret
084a6491 +0x0479:  nop
084a6492 +0x047a:  push   %ebp
084a6493 +0x047b:  mov    %esp,%ebp
084a6495 +0x047d:  push   %ebx
084a6496 +0x047e:  sub    $0x14,%esp
084a6499 +0x0481:  mov    0x8(%ebp),%ebx
084a649c +0x0484:  mov    0xc(%ebp),%eax
084a649f +0x0487:  mov    0x10(%ebp),%edx
084a64a2 +0x048a:  mov    %edx,0x8(%esp)
084a64a6 +0x048e:  mov    %eax,0x4(%esp)
084a64aa +0x0492:  mov    %ebx,(%esp)
084a64ad +0x0495:  call   084a69bc <+0x9a4>
084a64b2 +0x049a:  sub    $0x4,%esp
084a64b5 +0x049d:  mov    %ebx,%eax
084a64b7 +0x049f:  mov    -0x4(%ebp),%ebx
084a64ba +0x04a2:  leave
084a64bb +0x04a3:  ret    $0x4
084a64be +0x04a6:  push   %ebp
084a64bf +0x04a7:  mov    %esp,%ebp
084a64c1 +0x04a9:  mov    0xc(%ebp),%eax
084a64c4 +0x04ac:  mov    (%eax),%edx
084a64c6 +0x04ae:  mov    0x8(%ebp),%eax
084a64c9 +0x04b1:  mov    %edx,(%eax)
084a64cb +0x04b3:  pop    %ebp
084a64cc +0x04b4:  ret
084a64cd +0x04b5:  nop
084a64ce +0x04b6:  push   %ebp
084a64cf +0x04b7:  mov    %esp,%ebp
084a64d1 +0x04b9:  push   %ebx
084a64d2 +0x04ba:  sub    $0x14,%esp
084a64d5 +0x04bd:  mov    0x8(%ebp),%ebx
084a64d8 +0x04c0:  mov    0xc(%ebp),%eax
084a64db +0x04c3:  mov    %eax,0x4(%esp)
084a64df +0x04c7:  mov    %ebx,(%esp)
084a64e2 +0x04ca:  call   084a6a7a <+0xa62>
084a64e7 +0x04cf:  sub    $0x4,%esp
084a64ea +0x04d2:  mov    %ebx,%eax
084a64ec +0x04d4:  mov    -0x4(%ebp),%ebx
084a64ef +0x04d7:  leave
084a64f0 +0x04d8:  ret    $0x4
084a64f3 +0x04db:  nop
084a64f4 +0x04dc:  push   %ebp
084a64f5 +0x04dd:  mov    %esp,%ebp
084a64f7 +0x04df:  mov    0x8(%ebp),%eax
084a64fa +0x04e2:  mov    (%eax),%edx
084a64fc +0x04e4:  mov    0xc(%ebp),%eax
084a64ff +0x04e7:  mov    (%eax),%eax
084a6501 +0x04e9:  cmp    %eax,%edx
084a6503 +0x04eb:  sete   %al
084a6506 +0x04ee:  pop    %ebp
084a6507 +0x04ef:  ret
084a6508 +0x04f0:  push   %ebp
084a6509 +0x04f1:  mov    %esp,%ebp
084a650b +0x04f3:  mov    0x8(%ebp),%eax
084a650e +0x04f6:  mov    (%eax),%eax
084a6510 +0x04f8:  add    $0x10,%eax
084a6513 +0x04fb:  pop    %ebp
084a6514 +0x04fc:  ret
084a6515 +0x04fd:  nop
084a6516 +0x04fe:  push   %ebp
084a6517 +0x04ff:  mov    %esp,%ebp
084a6519 +0x0501:  sub    $0x28,%esp
084a651c +0x0504:  mov    %al,0x10(%esp)
084a6520 +0x0508:  mov    0x14(%ebp),%eax
084a6523 +0x050b:  mov    %eax,0xc(%esp)
084a6527 +0x050f:  mov    0x10(%ebp),%eax
084a652a +0x0512:  mov    %eax,0x8(%esp)
084a652e +0x0516:  mov    0xc(%ebp),%eax
084a6531 +0x0519:  mov    %eax,0x4(%esp)
084a6535 +0x051d:  mov    0x8(%ebp),%eax
084a6538 +0x0520:  mov    %eax,(%esp)
084a653b +0x0523:  call   084a6aa0 <+0xa88>
084a6540 +0x0528:  leave
084a6541 +0x0529:  ret
084a6542 +0x052a:  push   %ebp
084a6543 +0x052b:  mov    %esp,%ebp
084a6545 +0x052d:  push   %esi
084a6546 +0x052e:  push   %ebx
084a6547 +0x052f:  sub    $0x10,%esp
084a654a +0x0532:  mov    0x8(%ebp),%eax
084a654d +0x0535:  mov    %eax,(%esp)
084a6550 +0x0538:  call   084a6acc <+0xab4>
084a6555 +0x053d:  jmp    084a6572 <+0x55a>
084a6557 +0x053f:  mov    %edx,%ebx
084a6559 +0x0541:  mov    %eax,%esi
084a655b +0x0543:  mov    0x8(%ebp),%eax
084a655e +0x0546:  mov    %eax,(%esp)
084a6561 +0x0549:  call   082ab45c <_GLOBAL__I__ZN4CLog5this_E+0x7883>  ; global constructors keyed to CLog::this_+0x7883
084a6566 +0x054e:  mov    %esi,%eax
084a6568 +0x0550:  mov    %ebx,%edx
084a656a +0x0552:  mov    %eax,(%esp)
084a656d +0x0555:  call   08ae3750 <_Unwind_Resume>
084a6572 +0x055a:  mov    0x8(%ebp),%eax
084a6575 +0x055d:  mov    %eax,(%esp)
084a6578 +0x0560:  call   082ab45c <_GLOBAL__I__ZN4CLog5this_E+0x7883>  ; global constructors keyed to CLog::this_+0x7883
084a657d +0x0565:  add    $0x10,%esp
084a6580 +0x0568:  pop    %ebx
084a6581 +0x0569:  pop    %esi
084a6582 +0x056a:  pop    %ebp
084a6583 +0x056b:  ret
084a6584 +0x056c:  push   %ebp
084a6585 +0x056d:  mov    %esp,%ebp
084a6587 +0x056f:  sub    $0x18,%esp
084a658a +0x0572:  mov    0x8(%ebp),%eax
084a658d +0x0575:  mov    %eax,(%esp)
084a6590 +0x0578:  call   084a6b28 <+0xb10>
084a6595 +0x057d:  leave
084a6596 +0x057e:  ret
084a6597 +0x057f:  nop
084a6598 +0x0580:  push   %ebp
084a6599 +0x0581:  mov    %esp,%ebp
084a659b +0x0583:  sub    $0x18,%esp
084a659e +0x0586:  mov    0x8(%ebp),%eax
084a65a1 +0x0589:  mov    %eax,(%esp)
084a65a4 +0x058c:  call   084a6b3c <+0xb24>
084a65a9 +0x0591:  leave
084a65aa +0x0592:  ret
084a65ab +0x0593:  nop
084a65ac +0x0594:  push   %ebp
084a65ad +0x0595:  mov    %esp,%ebp
084a65af +0x0597:  push   %esi
084a65b0 +0x0598:  push   %ebx
084a65b1 +0x0599:  sub    $0x10,%esp
084a65b4 +0x059c:  mov    0x8(%ebp),%eax
084a65b7 +0x059f:  mov    %eax,(%esp)
084a65ba +0x05a2:  call   084a6ba6 <+0xb8e>
084a65bf +0x05a7:  mov    %eax,0x4(%esp)
084a65c3 +0x05ab:  mov    0x8(%ebp),%eax
084a65c6 +0x05ae:  mov    %eax,(%esp)
084a65c9 +0x05b1:  call   084a6b50 <+0xb38>
084a65ce +0x05b6:  jmp    084a65eb <+0x5d3>
084a65d0 +0x05b8:  mov    %edx,%ebx
084a65d2 +0x05ba:  mov    %eax,%esi
084a65d4 +0x05bc:  mov    0x8(%ebp),%eax
084a65d7 +0x05bf:  mov    %eax,(%esp)
084a65da +0x05c2:  call   084a6598 <+0x580>
084a65df +0x05c7:  mov    %esi,%eax
084a65e1 +0x05c9:  mov    %ebx,%edx
084a65e3 +0x05cb:  mov    %eax,(%esp)
084a65e6 +0x05ce:  call   08ae3750 <_Unwind_Resume>
084a65eb +0x05d3:  mov    0x8(%ebp),%eax
084a65ee +0x05d6:  mov    %eax,(%esp)
084a65f1 +0x05d9:  call   084a6598 <+0x580>
084a65f6 +0x05de:  add    $0x10,%esp
084a65f9 +0x05e1:  pop    %ebx
084a65fa +0x05e2:  pop    %esi
084a65fb +0x05e3:  pop    %ebp
084a65fc +0x05e4:  ret
084a65fd +0x05e5:  push   %ebp
084a65fe +0x05e6:  mov    %esp,%ebp
084a6600 +0x05e8:  push   %esi
084a6601 +0x05e9:  push   %ebx
084a6602 +0x05ea:  sub    $0x10,%esp
084a6605 +0x05ed:  mov    0x8(%ebp),%esi
084a6608 +0x05f0:  mov    0x10(%ebp),%eax
084a660b +0x05f3:  mov    %eax,(%esp)
084a660e +0x05f6:  call   084a6bb9 <+0xba1>
084a6613 +0x05fb:  mov    %eax,%ebx
084a6615 +0x05fd:  mov    0xc(%ebp),%eax
084a6618 +0x0600:  mov    %eax,(%esp)
084a661b +0x0603:  call   084a6bb1 <+0xb99>
084a6620 +0x0608:  mov    %ebx,0x8(%esp)
084a6624 +0x060c:  mov    %eax,0x4(%esp)
084a6628 +0x0610:  mov    %esi,(%esp)
084a662b +0x0613:  call   084a6bc2 <+0xbaa>
084a6630 +0x0618:  mov    %esi,%eax
084a6632 +0x061a:  add    $0x10,%esp
084a6635 +0x061d:  pop    %ebx
084a6636 +0x061e:  pop    %esi
084a6637 +0x061f:  pop    %ebp
084a6638 +0x0620:  ret    $0x4
084a663b +0x0623:  nop
084a663c +0x0624:  push   %ebp
084a663d +0x0625:  mov    %esp,%ebp
084a663f +0x0627:  push   %ebx
084a6640 +0x0628:  sub    $0x14,%esp
084a6643 +0x062b:  mov    0x8(%ebp),%ebx
084a6646 +0x062e:  mov    0xc(%ebp),%eax
084a6649 +0x0631:  mov    %eax,(%esp)
084a664c +0x0634:  call   084a6c01 <+0xbe9>
084a6651 +0x0639:  mov    0x4(%eax),%edx
084a6654 +0x063c:  mov    (%eax),%eax
084a6656 +0x063e:  mov    %eax,(%ebx)
084a6658 +0x0640:  mov    %edx,0x4(%ebx)
084a665b +0x0643:  mov    0xc(%ebp),%eax
084a665e +0x0646:  add    $0x8,%eax
084a6661 +0x0649:  mov    %eax,(%esp)
084a6664 +0x064c:  call   084a6c09 <+0xbf1>
084a6669 +0x0651:  mov    0x8(%ebp),%edx
084a666c +0x0654:  mov    (%eax),%ecx
084a666e +0x0656:  mov    %ecx,0x8(%edx)
084a6671 +0x0659:  mov    0x4(%eax),%ecx
084a6674 +0x065c:  mov    %ecx,0xc(%edx)
084a6677 +0x065f:  mov    0x8(%eax),%eax
084a667a +0x0662:  mov    %eax,0x10(%edx)
084a667d +0x0665:  add    $0x14,%esp
084a6680 +0x0668:  pop    %ebx
084a6681 +0x0669:  pop    %ebp
084a6682 +0x066a:  ret
084a6683 +0x066b:  nop
084a6684 +0x066c:  push   %ebp
084a6685 +0x066d:  mov    %esp,%ebp
084a6687 +0x066f:  push   %ebx
084a6688 +0x0670:  sub    $0x14,%esp
084a668b +0x0673:  mov    0x8(%ebp),%ebx
084a668e +0x0676:  mov    0xc(%ebp),%eax
084a6691 +0x0679:  mov    0x10(%ebp),%edx
084a6694 +0x067c:  mov    %edx,0x8(%esp)
084a6698 +0x0680:  mov    %eax,0x4(%esp)
084a669c +0x0684:  mov    %ebx,(%esp)
084a669f +0x0687:  call   084a6c12 <+0xbfa>
084a66a4 +0x068c:  sub    $0x4,%esp
084a66a7 +0x068f:  mov    %ebx,%eax
084a66a9 +0x0691:  mov    -0x4(%ebp),%ebx
084a66ac +0x0694:  leave
084a66ad +0x0695:  ret    $0x4
084a66b0 +0x0698:  push   %ebp
084a66b1 +0x0699:  mov    %esp,%ebp
084a66b3 +0x069b:  sub    $0x28,%esp
084a66b6 +0x069e:  lea    -0xc(%ebp),%eax
084a66b9 +0x06a1:  mov    0x8(%ebp),%edx
084a66bc +0x06a4:  mov    %edx,0x4(%esp)
084a66c0 +0x06a8:  mov    %eax,(%esp)
084a66c3 +0x06ab:  call   084a6de2 <+0xdca>
084a66c8 +0x06b0:  sub    $0x4,%esp
084a66cb +0x06b3:  mov    0xc(%ebp),%eax
084a66ce +0x06b6:  mov    %eax,0x8(%esp)
084a66d2 +0x06ba:  mov    -0xc(%ebp),%eax
084a66d5 +0x06bd:  mov    %eax,0x4(%esp)
084a66d9 +0x06c1:  mov    0x8(%ebp),%eax
084a66dc +0x06c4:  mov    %eax,(%esp)
084a66df +0x06c7:  call   084a6e06 <+0xdee>
084a66e4 +0x06cc:  leave
084a66e5 +0x06cd:  ret
084a66e6 +0x06ce:  push   %ebp
084a66e7 +0x06cf:  mov    %esp,%ebp
084a66e9 +0x06d1:  push   %ebx
084a66ea +0x06d2:  sub    $0x14,%esp
084a66ed +0x06d5:  mov    0x8(%ebp),%ebx
084a66f0 +0x06d8:  mov    0xc(%ebp),%eax
084a66f3 +0x06db:  mov    %eax,0x4(%esp)
084a66f7 +0x06df:  mov    %ebx,(%esp)
084a66fa +0x06e2:  call   084a6e3e <+0xe26>
084a66ff +0x06e7:  sub    $0x4,%esp
084a6702 +0x06ea:  mov    %ebx,%eax
084a6704 +0x06ec:  mov    -0x4(%ebp),%ebx
084a6707 +0x06ef:  leave
084a6708 +0x06f0:  ret    $0x4
084a670b +0x06f3:  nop
084a670c +0x06f4:  push   %ebp
084a670d +0x06f5:  mov    %esp,%ebp
084a670f +0x06f7:  push   %ebx
084a6710 +0x06f8:  sub    $0x14,%esp
084a6713 +0x06fb:  mov    0x8(%ebp),%ebx
084a6716 +0x06fe:  mov    0xc(%ebp),%eax
084a6719 +0x0701:  mov    %eax,0x4(%esp)
084a671d +0x0705:  mov    %ebx,(%esp)
084a6720 +0x0708:  call   084a6e64 <+0xe4c>
084a6725 +0x070d:  sub    $0x4,%esp
084a6728 +0x0710:  mov    %ebx,%eax
084a672a +0x0712:  mov    -0x4(%ebp),%ebx
084a672d +0x0715:  leave
084a672e +0x0716:  ret    $0x4
084a6731 +0x0719:  nop
084a6732 +0x071a:  push   %ebp
084a6733 +0x071b:  mov    %esp,%ebp
084a6735 +0x071d:  mov    0x8(%ebp),%eax
084a6738 +0x0720:  mov    (%eax),%edx
084a673a +0x0722:  mov    0xc(%ebp),%eax
084a673d +0x0725:  mov    (%eax),%eax
084a673f +0x0727:  cmp    %eax,%edx
084a6741 +0x0729:  setne  %al
084a6744 +0x072c:  pop    %ebp
084a6745 +0x072d:  ret
084a6746 +0x072e:  push   %ebp
084a6747 +0x072f:  mov    %esp,%ebp
084a6749 +0x0731:  sub    $0x18,%esp
084a674c +0x0734:  mov    0x8(%ebp),%eax
084a674f +0x0737:  mov    (%eax),%eax
084a6751 +0x0739:  mov    %eax,(%esp)
084a6754 +0x073c:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
084a6759 +0x0741:  mov    0x8(%ebp),%edx
084a675c +0x0744:  mov    %eax,(%edx)
084a675e +0x0746:  mov    0x8(%ebp),%eax
084a6761 +0x0749:  leave
084a6762 +0x074a:  ret
084a6763 +0x074b:  nop
084a6764 +0x074c:  push   %ebp
084a6765 +0x074d:  mov    %esp,%ebp
084a6767 +0x074f:  mov    0x8(%ebp),%eax
084a676a +0x0752:  mov    (%eax),%eax
084a676c +0x0754:  add    $0x10,%eax
084a676f +0x0757:  pop    %ebp
084a6770 +0x0758:  ret
084a6771 +0x0759:  nop
084a6772 +0x075a:  push   %ebp
084a6773 +0x075b:  mov    %esp,%ebp
084a6775 +0x075d:  push   %ebx
084a6776 +0x075e:  sub    $0x14,%esp
084a6779 +0x0761:  mov    0x8(%ebp),%ebx
084a677c +0x0764:  mov    0xc(%ebp),%eax
084a677f +0x0767:  mov    (%eax),%eax
084a6781 +0x0769:  mov    %eax,0x4(%esp)
084a6785 +0x076d:  mov    %ebx,(%esp)
084a6788 +0x0770:  call   084a6e8a <+0xe72>
084a678d +0x0775:  mov    %ebx,%eax
084a678f +0x0777:  add    $0x14,%esp
084a6792 +0x077a:  pop    %ebx
084a6793 +0x077b:  pop    %ebp
084a6794 +0x077c:  ret    $0x4
084a6797 +0x077f:  nop
084a6798 +0x0780:  push   %ebp
084a6799 +0x0781:  mov    %esp,%ebp
084a679b +0x0783:  push   %ebx
084a679c +0x0784:  sub    $0x14,%esp
084a679f +0x0787:  mov    0x8(%ebp),%ebx
084a67a2 +0x078a:  mov    0xc(%ebp),%eax
084a67a5 +0x078d:  mov    %eax,0x4(%esp)
084a67a9 +0x0791:  mov    %ebx,(%esp)
084a67ac +0x0794:  call   084a6e8a <+0xe72>
084a67b1 +0x0799:  mov    %ebx,%eax
084a67b3 +0x079b:  add    $0x14,%esp
084a67b6 +0x079e:  pop    %ebx
084a67b7 +0x079f:  pop    %ebp
084a67b8 +0x07a0:  ret    $0x4
084a67bb +0x07a3:  nop
084a67bc +0x07a4:  push   %ebp
084a67bd +0x07a5:  mov    %esp,%ebp
084a67bf +0x07a7:  mov    0x8(%ebp),%eax
084a67c2 +0x07aa:  mov    (%eax),%edx
084a67c4 +0x07ac:  mov    0xc(%ebp),%eax
084a67c7 +0x07af:  mov    (%eax),%eax
084a67c9 +0x07b1:  cmp    %eax,%edx
084a67cb +0x07b3:  setne  %al
084a67ce +0x07b6:  pop    %ebp
084a67cf +0x07b7:  ret
084a67d0 +0x07b8:  push   %ebp
084a67d1 +0x07b9:  mov    %esp,%ebp
084a67d3 +0x07bb:  mov    0x8(%ebp),%eax
084a67d6 +0x07be:  mov    (%eax),%eax
084a67d8 +0x07c0:  mov    (%eax),%edx
084a67da +0x07c2:  mov    0x8(%ebp),%eax
084a67dd +0x07c5:  mov    %edx,(%eax)
084a67df +0x07c7:  mov    0x8(%ebp),%eax
084a67e2 +0x07ca:  pop    %ebp
084a67e3 +0x07cb:  ret
084a67e4 +0x07cc:  push   %ebp
084a67e5 +0x07cd:  mov    %esp,%ebp
084a67e7 +0x07cf:  mov    0x8(%ebp),%eax
084a67ea +0x07d2:  mov    (%eax),%eax
084a67ec +0x07d4:  add    $0x8,%eax
084a67ef +0x07d7:  pop    %ebp
084a67f0 +0x07d8:  ret
084a67f1 +0x07d9:  nop
084a67f2 +0x07da:  push   %ebp
084a67f3 +0x07db:  mov    %esp,%ebp
084a67f5 +0x07dd:  sub    $0x18,%esp
084a67f8 +0x07e0:  mov    0x8(%ebp),%eax
084a67fb +0x07e3:  mov    (%eax),%eax
084a67fd +0x07e5:  mov    %eax,(%esp)
084a6800 +0x07e8:  call   084a6e98 <+0xe80>
084a6805 +0x07ed:  leave
084a6806 +0x07ee:  ret
084a6807 +0x07ef:  nop
084a6808 +0x07f0:  push   %ebp
084a6809 +0x07f1:  mov    %esp,%ebp
084a680b +0x07f3:  sub    $0x18,%esp
084a680e +0x07f6:  mov    0x8(%ebp),%eax
084a6811 +0x07f9:  mov    %eax,(%esp)
084a6814 +0x07fc:  call   084a6f02 <+0xeea>
084a6819 +0x0801:  leave
084a681a +0x0802:  ret
084a681b +0x0803:  nop
084a681c +0x0804:  push   %ebp
084a681d +0x0805:  mov    %esp,%ebp
084a681f +0x0807:  sub    $0x18,%esp
084a6822 +0x080a:  mov    0x8(%ebp),%eax
084a6825 +0x080d:  mov    %eax,(%esp)
084a6828 +0x0810:  call   084a6acc <+0xab4>
084a682d +0x0815:  mov    0x8(%ebp),%eax
084a6830 +0x0818:  mov    %eax,(%esp)
084a6833 +0x081b:  call   082bf2bc <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x111b7>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x111b7
084a6838 +0x0820:  leave
084a6839 +0x0821:  ret
084a683a +0x0822:  push   %ebp
084a683b +0x0823:  mov    %esp,%ebp
084a683d +0x0825:  push   %ebx
084a683e +0x0826:  sub    $0x14,%esp
084a6841 +0x0829:  mov    0x8(%ebp),%ebx
084a6844 +0x082c:  mov    0xc(%ebp),%eax
084a6847 +0x082f:  mov    0x10(%ebp),%edx
084a684a +0x0832:  mov    %edx,0x8(%esp)
084a684e +0x0836:  mov    %eax,0x4(%esp)
084a6852 +0x083a:  mov    %ebx,(%esp)
084a6855 +0x083d:  call   084a6f78 <+0xf60>
084a685a +0x0842:  sub    $0x4,%esp
084a685d +0x0845:  mov    %ebx,%eax
084a685f +0x0847:  mov    -0x4(%ebp),%ebx
084a6862 +0x084a:  leave
084a6863 +0x084b:  ret    $0x4
084a6866 +0x084e:  push   %ebp
084a6867 +0x084f:  mov    %esp,%ebp
084a6869 +0x0851:  push   %ebx
084a686a +0x0852:  sub    $0x14,%esp
084a686d +0x0855:  mov    0x8(%ebp),%ebx
084a6870 +0x0858:  mov    0xc(%ebp),%eax
084a6873 +0x085b:  mov    %eax,0x4(%esp)
084a6877 +0x085f:  mov    %ebx,(%esp)
084a687a +0x0862:  call   084a7036 <+0x101e>
084a687f +0x0867:  sub    $0x4,%esp
084a6882 +0x086a:  mov    %ebx,%eax
084a6884 +0x086c:  mov    -0x4(%ebp),%ebx
084a6887 +0x086f:  leave
084a6888 +0x0870:  ret    $0x4
084a688b +0x0873:  nop
084a688c +0x0874:  push   %ebp
084a688d +0x0875:  mov    %esp,%ebp
084a688f +0x0877:  mov    0x8(%ebp),%eax
084a6892 +0x087a:  mov    (%eax),%edx
084a6894 +0x087c:  mov    0xc(%ebp),%eax
084a6897 +0x087f:  mov    (%eax),%eax
084a6899 +0x0881:  cmp    %eax,%edx
084a689b +0x0883:  setne  %al
084a689e +0x0886:  pop    %ebp
084a689f +0x0887:  ret
084a68a0 +0x0888:  push   %ebp
084a68a1 +0x0889:  mov    %esp,%ebp
084a68a3 +0x088b:  mov    0x8(%ebp),%eax
084a68a6 +0x088e:  mov    (%eax),%eax
084a68a8 +0x0890:  add    $0x10,%eax
084a68ab +0x0893:  pop    %ebp
084a68ac +0x0894:  ret
084a68ad +0x0895:  push   %ebp
084a68ae +0x0896:  mov    %esp,%ebp
084a68b0 +0x0898:  push   %esi
084a68b1 +0x0899:  push   %ebx
084a68b2 +0x089a:  sub    $0x10,%esp
084a68b5 +0x089d:  mov    0x8(%ebp),%esi
084a68b8 +0x08a0:  mov    0x10(%ebp),%eax
084a68bb +0x08a3:  mov    %eax,(%esp)
084a68be +0x08a6:  call   084a6bb9 <+0xba1>
084a68c3 +0x08ab:  mov    %eax,%ebx
084a68c5 +0x08ad:  mov    0xc(%ebp),%eax
084a68c8 +0x08b0:  mov    %eax,(%esp)
084a68cb +0x08b3:  call   084a705c <+0x1044>
084a68d0 +0x08b8:  mov    %ebx,0x8(%esp)
084a68d4 +0x08bc:  mov    %eax,0x4(%esp)
084a68d8 +0x08c0:  mov    %esi,(%esp)
084a68db +0x08c3:  call   084a7064 <+0x104c>
084a68e0 +0x08c8:  mov    %esi,%eax
084a68e2 +0x08ca:  add    $0x10,%esp
084a68e5 +0x08cd:  pop    %ebx
084a68e6 +0x08ce:  pop    %esi
084a68e7 +0x08cf:  pop    %ebp
084a68e8 +0x08d0:  ret    $0x4
084a68eb +0x08d3:  nop
084a68ec +0x08d4:  push   %ebp
084a68ed +0x08d5:  mov    %esp,%ebp
084a68ef +0x08d7:  sub    $0x28,%esp
084a68f2 +0x08da:  mov    0xc(%ebp),%eax
084a68f5 +0x08dd:  mov    %eax,(%esp)
084a68f8 +0x08e0:  call   0807f2d7 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3a7>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a7
084a68fd +0x08e5:  movzbl (%eax),%eax
084a6900 +0x08e8:  mov    %al,-0xd(%ebp)
084a6903 +0x08eb:  lea    -0xc(%ebp),%eax
084a6906 +0x08ee:  mov    0x8(%ebp),%edx
084a6909 +0x08f1:  mov    %edx,0x4(%esp)
084a690d +0x08f5:  mov    %eax,(%esp)
084a6910 +0x08f8:  call   084a6de2 <+0xdca>
084a6915 +0x08fd:  sub    $0x4,%esp
084a6918 +0x0900:  lea    -0xd(%ebp),%eax
084a691b +0x0903:  mov    %eax,0x8(%esp)
084a691f +0x0907:  mov    -0xc(%ebp),%eax
084a6922 +0x090a:  mov    %eax,0x4(%esp)
084a6926 +0x090e:  mov    0x8(%ebp),%eax
084a6929 +0x0911:  mov    %eax,(%esp)
084a692c +0x0914:  call   084a70a4 <+0x108c>
084a6931 +0x0919:  leave
084a6932 +0x091a:  ret
084a6933 +0x091b:  nop
084a6934 +0x091c:  push   %ebp
084a6935 +0x091d:  mov    %esp,%ebp
084a6937 +0x091f:  sub    $0x28,%esp
084a693a +0x0922:  lea    -0x10(%ebp),%eax
084a693d +0x0925:  mov    0x8(%ebp),%edx
084a6940 +0x0928:  mov    %edx,0x4(%esp)
084a6944 +0x092c:  mov    %eax,(%esp)
084a6947 +0x092f:  call   084a6798 <+0x780>
084a694c +0x0934:  sub    $0x4,%esp
084a694f +0x0937:  lea    -0xc(%ebp),%eax
084a6952 +0x093a:  mov    0x8(%ebp),%edx
084a6955 +0x093d:  mov    %edx,0x4(%esp)
084a6959 +0x0941:  mov    %eax,(%esp)
084a695c +0x0944:  call   084a6772 <+0x75a>
084a6961 +0x0949:  sub    $0x4,%esp
084a6964 +0x094c:  mov    -0x10(%ebp),%eax
084a6967 +0x094f:  mov    %eax,0x4(%esp)
084a696b +0x0953:  mov    -0xc(%ebp),%eax
084a696e +0x0956:  mov    %eax,(%esp)
084a6971 +0x0959:  call   084a70e4 <+0x10cc>
084a6976 +0x095e:  leave
084a6977 +0x095f:  ret
084a6978 +0x0960:  push   %ebp
084a6979 +0x0961:  mov    %esp,%ebp
084a697b +0x0963:  sub    $0x28,%esp
084a697e +0x0966:  lea    -0xc(%ebp),%eax
084a6981 +0x0969:  mov    0x8(%ebp),%edx
084a6984 +0x096c:  mov    %edx,0x4(%esp)
084a6988 +0x0970:  mov    %eax,(%esp)
084a698b +0x0973:  call   084a711c <+0x1104>
084a6990 +0x0978:  sub    $0x4,%esp
084a6993 +0x097b:  mov    -0xc(%ebp),%eax
084a6996 +0x097e:  mov    %eax,0x4(%esp)
084a699a +0x0982:  mov    0x8(%ebp),%eax
084a699d +0x0985:  mov    %eax,(%esp)
084a69a0 +0x0988:  call   084a7142 <+0x112a>
084a69a5 +0x098d:  leave
084a69a6 +0x098e:  ret
084a69a7 +0x098f:  nop
084a69a8 +0x0990:  push   %ebp
084a69a9 +0x0991:  mov    %esp,%ebp
084a69ab +0x0993:  sub    $0x18,%esp
084a69ae +0x0996:  mov    0x8(%ebp),%eax
084a69b1 +0x0999:  mov    %eax,(%esp)
084a69b4 +0x099c:  call   084a7188 <+0x1170>
084a69b9 +0x09a1:  leave
084a69ba +0x09a2:  ret
084a69bb +0x09a3:  nop
084a69bc +0x09a4:  push   %ebp
084a69bd +0x09a5:  mov    %esp,%ebp
084a69bf +0x09a7:  push   %esi
084a69c0 +0x09a8:  push   %ebx
084a69c1 +0x09a9:  sub    $0x30,%esp
084a69c4 +0x09ac:  mov    0x8(%ebp),%ebx
084a69c7 +0x09af:  mov    0xc(%ebp),%eax
084a69ca +0x09b2:  mov    %eax,(%esp)
084a69cd +0x09b5:  call   083b7b9e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x51b6a>  ; global constructors keyed to CServerEvent::m_nExpRate+0x51b6a
084a69d2 +0x09ba:  mov    %eax,%esi
084a69d4 +0x09bc:  mov    0xc(%ebp),%eax
084a69d7 +0x09bf:  mov    %eax,(%esp)
084a69da +0x09c2:  call   0839d298 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x4d34>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x4d34
084a69df +0x09c7:  lea    -0x10(%ebp),%edx
084a69e2 +0x09ca:  mov    0x10(%ebp),%ecx
084a69e5 +0x09cd:  mov    %ecx,0x10(%esp)
084a69e9 +0x09d1:  mov    %esi,0xc(%esp)
084a69ed +0x09d5:  mov    %eax,0x8(%esp)
084a69f1 +0x09d9:  mov    0xc(%ebp),%eax
084a69f4 +0x09dc:  mov    %eax,0x4(%esp)
084a69f8 +0x09e0:  mov    %edx,(%esp)
084a69fb +0x09e3:  call   084a7194 <+0x117c>
084a6a00 +0x09e8:  sub    $0x4,%esp
084a6a03 +0x09eb:  lea    -0xc(%ebp),%eax
084a6a06 +0x09ee:  mov    0xc(%ebp),%edx
084a6a09 +0x09f1:  mov    %edx,0x4(%esp)
084a6a0d +0x09f5:  mov    %eax,(%esp)
084a6a10 +0x09f8:  call   084a6a7a <+0xa62>
084a6a15 +0x09fd:  sub    $0x4,%esp
084a6a18 +0x0a00:  lea    -0xc(%ebp),%eax
084a6a1b +0x0a03:  mov    %eax,0x4(%esp)
084a6a1f +0x0a07:  lea    -0x10(%ebp),%eax
084a6a22 +0x0a0a:  mov    %eax,(%esp)
084a6a25 +0x0a0d:  call   084a724c <+0x1234>
084a6a2a +0x0a12:  test   %al,%al
084a6a2c +0x0a14:  jne    084a6a53 <+0xa3b>
084a6a2e +0x0a16:  mov    -0x10(%ebp),%eax
084a6a31 +0x0a19:  mov    %eax,(%esp)
084a6a34 +0x0a1c:  call   084a7210 <+0x11f8>
084a6a39 +0x0a21:  mov    0xc(%ebp),%edx
084a6a3c +0x0a24:  mov    %eax,0x8(%esp)
084a6a40 +0x0a28:  mov    0x10(%ebp),%eax
084a6a43 +0x0a2b:  mov    %eax,0x4(%esp)
084a6a47 +0x0a2f:  mov    %edx,(%esp)
084a6a4a +0x0a32:  call   084a7232 <+0x121a>
084a6a4f +0x0a37:  test   %al,%al
084a6a51 +0x0a39:  je     084a6a67 <+0xa4f>
084a6a53 +0x0a3b:  mov    0xc(%ebp),%eax
084a6a56 +0x0a3e:  mov    %eax,0x4(%esp)
084a6a5a +0x0a42:  mov    %ebx,(%esp)
084a6a5d +0x0a45:  call   084a6a7a <+0xa62>
084a6a62 +0x0a4a:  sub    $0x4,%esp
084a6a65 +0x0a4d:  jmp    084a6a6c <+0xa54>
084a6a67 +0x0a4f:  mov    -0x10(%ebp),%eax
084a6a6a +0x0a52:  mov    %eax,(%ebx)
084a6a6c +0x0a54:  mov    %ebx,%eax
084a6a6e +0x0a56:  lea    -0x8(%ebp),%esp
084a6a71 +0x0a59:  add    $0x0,%esp
084a6a74 +0x0a5c:  pop    %ebx
084a6a75 +0x0a5d:  pop    %esi
084a6a76 +0x0a5e:  pop    %ebp
084a6a77 +0x0a5f:  ret    $0x4
084a6a7a +0x0a62:  push   %ebp
084a6a7b +0x0a63:  mov    %esp,%ebp
084a6a7d +0x0a65:  push   %ebx
084a6a7e +0x0a66:  sub    $0x14,%esp
084a6a81 +0x0a69:  mov    0x8(%ebp),%ebx
084a6a84 +0x0a6c:  mov    0xc(%ebp),%eax
084a6a87 +0x0a6f:  add    $0x4,%eax
084a6a8a +0x0a72:  mov    %eax,0x4(%esp)
084a6a8e +0x0a76:  mov    %ebx,(%esp)
084a6a91 +0x0a79:  call   084a7260 <+0x1248>
084a6a96 +0x0a7e:  mov    %ebx,%eax
084a6a98 +0x0a80:  add    $0x14,%esp
084a6a9b +0x0a83:  pop    %ebx
084a6a9c +0x0a84:  pop    %ebp
084a6a9d +0x0a85:  ret    $0x4
084a6aa0 +0x0a88:  push   %ebp
084a6aa1 +0x0a89:  mov    %esp,%ebp
084a6aa3 +0x0a8b:  sub    $0x38,%esp
084a6aa6 +0x0a8e:  mov    %al,0x10(%esp)
084a6aaa +0x0a92:  mov    0x14(%ebp),%eax
084a6aad +0x0a95:  mov    %eax,0xc(%esp)
084a6ab1 +0x0a99:  mov    0x10(%ebp),%eax
084a6ab4 +0x0a9c:  mov    %eax,0x8(%esp)
084a6ab8 +0x0aa0:  mov    0xc(%ebp),%eax
084a6abb +0x0aa3:  mov    %eax,0x4(%esp)
084a6abf +0x0aa7:  mov    0x8(%ebp),%eax
084a6ac2 +0x0aaa:  mov    %eax,(%esp)
084a6ac5 +0x0aad:  call   084a726e <+0x1256>
084a6aca +0x0ab2:  leave
084a6acb +0x0ab3:  ret
084a6acc +0x0ab4:  push   %ebp
084a6acd +0x0ab5:  mov    %esp,%ebp
084a6acf +0x0ab7:  sub    $0x28,%esp
084a6ad2 +0x0aba:  mov    0x8(%ebp),%eax
084a6ad5 +0x0abd:  mov    (%eax),%eax
084a6ad7 +0x0abf:  mov    %eax,-0x10(%ebp)
084a6ada +0x0ac2:  jmp    084a6b16 <+0xafe>
084a6adc +0x0ac4:  mov    -0x10(%ebp),%eax
084a6adf +0x0ac7:  mov    %eax,-0xc(%ebp)
084a6ae2 +0x0aca:  mov    -0x10(%ebp),%eax
084a6ae5 +0x0acd:  mov    (%eax),%eax
084a6ae7 +0x0acf:  mov    %eax,-0x10(%ebp)
084a6aea +0x0ad2:  mov    0x8(%ebp),%eax
084a6aed +0x0ad5:  mov    %eax,(%esp)
084a6af0 +0x0ad8:  call   084a7634 <+0x161c>
084a6af5 +0x0add:  mov    -0xc(%ebp),%edx
084a6af8 +0x0ae0:  mov    %edx,0x4(%esp)
084a6afc +0x0ae4:  mov    %eax,(%esp)
084a6aff +0x0ae7:  call   084a7642 <+0x162a>
084a6b04 +0x0aec:  mov    -0xc(%ebp),%eax
084a6b07 +0x0aef:  mov    %eax,0x4(%esp)
084a6b0b +0x0af3:  mov    0x8(%ebp),%eax
084a6b0e +0x0af6:  mov    %eax,(%esp)
084a6b11 +0x0af9:  call   084a7656 <+0x163e>
084a6b16 +0x0afe:  mov    0x8(%ebp),%edx
084a6b19 +0x0b01:  mov    -0x10(%ebp),%eax
084a6b1c +0x0b04:  cmp    %eax,%edx
084a6b1e +0x0b06:  setne  %al
084a6b21 +0x0b09:  test   %al,%al
084a6b23 +0x0b0b:  jne    084a6adc <+0xac4>
084a6b25 +0x0b0d:  leave
084a6b26 +0x0b0e:  ret
084a6b27 +0x0b0f:  nop
084a6b28 +0x0b10:  push   %ebp
084a6b29 +0x0b11:  mov    %esp,%ebp
084a6b2b +0x0b13:  sub    $0x18,%esp
084a6b2e +0x0b16:  mov    0x8(%ebp),%eax
084a6b31 +0x0b19:  mov    %eax,(%esp)
084a6b34 +0x0b1c:  call   084a7678 <+0x1660>
084a6b39 +0x0b21:  leave
084a6b3a +0x0b22:  ret
084a6b3b +0x0b23:  nop
084a6b3c +0x0b24:  push   %ebp
084a6b3d +0x0b25:  mov    %esp,%ebp
084a6b3f +0x0b27:  sub    $0x18,%esp
084a6b42 +0x0b2a:  mov    0x8(%ebp),%eax
084a6b45 +0x0b2d:  mov    %eax,(%esp)
084a6b48 +0x0b30:  call   084a76c8 <+0x16b0>
084a6b4d +0x0b35:  leave
084a6b4e +0x0b36:  ret
084a6b4f +0x0b37:  nop
084a6b50 +0x0b38:  push   %ebp
084a6b51 +0x0b39:  mov    %esp,%ebp
084a6b53 +0x0b3b:  sub    $0x28,%esp
084a6b56 +0x0b3e:  jmp    084a6b98 <+0xb80>
084a6b58 +0x0b40:  mov    0xc(%ebp),%eax
084a6b5b +0x0b43:  mov    %eax,(%esp)
084a6b5e +0x0b46:  call   084a76cd <+0x16b5>
084a6b63 +0x0b4b:  mov    %eax,0x4(%esp)
084a6b67 +0x0b4f:  mov    0x8(%ebp),%eax
084a6b6a +0x0b52:  mov    %eax,(%esp)
084a6b6d +0x0b55:  call   084a6b50 <+0xb38>
084a6b72 +0x0b5a:  mov    0xc(%ebp),%eax
084a6b75 +0x0b5d:  mov    %eax,(%esp)
084a6b78 +0x0b60:  call   084a76d8 <+0x16c0>
084a6b7d +0x0b65:  mov    %eax,-0xc(%ebp)
084a6b80 +0x0b68:  mov    0xc(%ebp),%eax
084a6b83 +0x0b6b:  mov    %eax,0x4(%esp)
084a6b87 +0x0b6f:  mov    0x8(%ebp),%eax
084a6b8a +0x0b72:  mov    %eax,(%esp)
084a6b8d +0x0b75:  call   084a76e4 <+0x16cc>
084a6b92 +0x0b7a:  mov    -0xc(%ebp),%eax
084a6b95 +0x0b7d:  mov    %eax,0xc(%ebp)
084a6b98 +0x0b80:  cmpl   $0x0,0xc(%ebp)
084a6b9c +0x0b84:  setne  %al
084a6b9f +0x0b87:  test   %al,%al
084a6ba1 +0x0b89:  jne    084a6b58 <+0xb40>
084a6ba3 +0x0b8b:  leave
084a6ba4 +0x0b8c:  ret
084a6ba5 +0x0b8d:  nop
084a6ba6 +0x0b8e:  push   %ebp
084a6ba7 +0x0b8f:  mov    %esp,%ebp
084a6ba9 +0x0b91:  mov    0x8(%ebp),%eax
084a6bac +0x0b94:  mov    0x8(%eax),%eax
084a6baf +0x0b97:  pop    %ebp
084a6bb0 +0x0b98:  ret
084a6bb1 +0x0b99:  push   %ebp
084a6bb2 +0x0b9a:  mov    %esp,%ebp
084a6bb4 +0x0b9c:  mov    0x8(%ebp),%eax
084a6bb7 +0x0b9f:  pop    %ebp
084a6bb8 +0x0ba0:  ret
084a6bb9 +0x0ba1:  push   %ebp
084a6bba +0x0ba2:  mov    %esp,%ebp
084a6bbc +0x0ba4:  mov    0x8(%ebp),%eax
084a6bbf +0x0ba7:  pop    %ebp
084a6bc0 +0x0ba8:  ret
084a6bc1 +0x0ba9:  nop
084a6bc2 +0x0baa:  push   %ebp
084a6bc3 +0x0bab:  mov    %esp,%ebp
084a6bc5 +0x0bad:  sub    $0x18,%esp
084a6bc8 +0x0bb0:  mov    0xc(%ebp),%eax
084a6bcb +0x0bb3:  mov    %eax,(%esp)
084a6bce +0x0bb6:  call   084a6bb1 <+0xb99>
084a6bd3 +0x0bbb:  mov    0x8(%ebp),%ecx
084a6bd6 +0x0bbe:  mov    0x4(%eax),%edx
084a6bd9 +0x0bc1:  mov    (%eax),%eax
084a6bdb +0x0bc3:  mov    %eax,(%ecx)
084a6bdd +0x0bc5:  mov    %edx,0x4(%ecx)
084a6be0 +0x0bc8:  mov    0x10(%ebp),%eax
084a6be3 +0x0bcb:  mov    %eax,(%esp)
084a6be6 +0x0bce:  call   084a6bb9 <+0xba1>
084a6beb +0x0bd3:  mov    0x8(%ebp),%edx
084a6bee +0x0bd6:  mov    (%eax),%ecx
084a6bf0 +0x0bd8:  mov    %ecx,0x8(%edx)
084a6bf3 +0x0bdb:  mov    0x4(%eax),%ecx
084a6bf6 +0x0bde:  mov    %ecx,0xc(%edx)
084a6bf9 +0x0be1:  mov    0x8(%eax),%eax
084a6bfc +0x0be4:  mov    %eax,0x10(%edx)
084a6bff +0x0be7:  leave
084a6c00 +0x0be8:  ret
084a6c01 +0x0be9:  push   %ebp
084a6c02 +0x0bea:  mov    %esp,%ebp
084a6c04 +0x0bec:  mov    0x8(%ebp),%eax
084a6c07 +0x0bef:  pop    %ebp
084a6c08 +0x0bf0:  ret
084a6c09 +0x0bf1:  push   %ebp
084a6c0a +0x0bf2:  mov    %esp,%ebp
084a6c0c +0x0bf4:  mov    0x8(%ebp),%eax
084a6c0f +0x0bf7:  pop    %ebp
084a6c10 +0x0bf8:  ret
084a6c11 +0x0bf9:  nop
084a6c12 +0x0bfa:  push   %ebp
084a6c13 +0x0bfb:  mov    %esp,%ebp
084a6c15 +0x0bfd:  push   %esi
084a6c16 +0x0bfe:  push   %ebx
084a6c17 +0x0bff:  sub    $0x50,%esp
084a6c1a +0x0c02:  mov    0x8(%ebp),%ebx
084a6c1d +0x0c05:  mov    0xc(%ebp),%eax
084a6c20 +0x0c08:  mov    %eax,(%esp)
084a6c23 +0x0c0b:  call   084a6ba6 <+0xb8e>
084a6c28 +0x0c10:  mov    %eax,-0x14(%ebp)
084a6c2b +0x0c13:  mov    0xc(%ebp),%eax
084a6c2e +0x0c16:  mov    %eax,(%esp)
084a6c31 +0x0c19:  call   084a7718 <+0x1700>
084a6c36 +0x0c1e:  mov    %eax,-0x10(%ebp)
084a6c39 +0x0c21:  movb   $0x1,-0x9(%ebp)
084a6c3d +0x0c25:  jmp    084a6c9b <+0xc83>
084a6c3f +0x0c27:  mov    -0x14(%ebp),%eax
084a6c42 +0x0c2a:  mov    %eax,-0x10(%ebp)
084a6c45 +0x0c2d:  mov    -0x14(%ebp),%eax
084a6c48 +0x0c30:  mov    %eax,(%esp)
084a6c4b +0x0c33:  call   084a772c <+0x1714>
084a6c50 +0x0c38:  mov    %eax,%esi
084a6c52 +0x0c3a:  mov    0x10(%ebp),%eax
084a6c55 +0x0c3d:  mov    %eax,0x4(%esp)
084a6c59 +0x0c41:  lea    -0x2d(%ebp),%eax
084a6c5c +0x0c44:  mov    %eax,(%esp)
084a6c5f +0x0c47:  call   084a7724 <+0x170c>
084a6c64 +0x0c4c:  mov    0xc(%ebp),%edx
084a6c67 +0x0c4f:  mov    %esi,0x8(%esp)
084a6c6b +0x0c53:  mov    %eax,0x4(%esp)
084a6c6f +0x0c57:  mov    %edx,(%esp)
084a6c72 +0x0c5a:  call   084a774e <+0x1736>
084a6c77 +0x0c5f:  mov    %al,-0x9(%ebp)
084a6c7a +0x0c62:  cmpb   $0x0,-0x9(%ebp)
084a6c7e +0x0c66:  je     084a6c8d <+0xc75>
084a6c80 +0x0c68:  mov    -0x14(%ebp),%eax
084a6c83 +0x0c6b:  mov    %eax,(%esp)
084a6c86 +0x0c6e:  call   084a76d8 <+0x16c0>
084a6c8b +0x0c73:  jmp    084a6c98 <+0xc80>
084a6c8d +0x0c75:  mov    -0x14(%ebp),%eax
084a6c90 +0x0c78:  mov    %eax,(%esp)
084a6c93 +0x0c7b:  call   084a76cd <+0x16b5>
084a6c98 +0x0c80:  mov    %eax,-0x14(%ebp)
084a6c9b +0x0c83:  cmpl   $0x0,-0x14(%ebp)
084a6c9f +0x0c87:  setne  %al
084a6ca2 +0x0c8a:  test   %al,%al
084a6ca4 +0x0c8c:  jne    084a6c3f <+0xc27>
084a6ca6 +0x0c8e:  mov    -0x10(%ebp),%eax
084a6ca9 +0x0c91:  mov    %eax,0x4(%esp)
084a6cad +0x0c95:  lea    -0x34(%ebp),%eax
084a6cb0 +0x0c98:  mov    %eax,(%esp)
084a6cb3 +0x0c9b:  call   084a7768 <+0x1750>
084a6cb8 +0x0ca0:  cmpb   $0x0,-0x9(%ebp)
084a6cbc +0x0ca4:  je     084a6d3d <+0xd25>
084a6cbe +0x0ca6:  lea    -0x2c(%ebp),%eax
084a6cc1 +0x0ca9:  mov    0xc(%ebp),%edx
084a6cc4 +0x0cac:  mov    %edx,0x4(%esp)
084a6cc8 +0x0cb0:  mov    %eax,(%esp)
084a6ccb +0x0cb3:  call   084a7776 <+0x175e>
084a6cd0 +0x0cb8:  sub    $0x4,%esp
084a6cd3 +0x0cbb:  lea    -0x2c(%ebp),%eax
084a6cd6 +0x0cbe:  mov    %eax,0x4(%esp)
084a6cda +0x0cc2:  lea    -0x34(%ebp),%eax
084a6cdd +0x0cc5:  mov    %eax,(%esp)
084a6ce0 +0x0cc8:  call   084a779c <+0x1784>
084a6ce5 +0x0ccd:  test   %al,%al
084a6ce7 +0x0ccf:  je     084a6d32 <+0xd1a>
084a6ce9 +0x0cd1:  movb   $0x1,-0x25(%ebp)
084a6ced +0x0cd5:  mov    -0x10(%ebp),%ecx
084a6cf0 +0x0cd8:  mov    -0x14(%ebp),%edx
084a6cf3 +0x0cdb:  lea    -0x24(%ebp),%eax
084a6cf6 +0x0cde:  mov    0x10(%ebp),%esi
084a6cf9 +0x0ce1:  mov    %esi,0x10(%esp)
084a6cfd +0x0ce5:  mov    %ecx,0xc(%esp)
084a6d01 +0x0ce9:  mov    %edx,0x8(%esp)
084a6d05 +0x0ced:  mov    0xc(%ebp),%edx
084a6d08 +0x0cf0:  mov    %edx,0x4(%esp)
084a6d0c +0x0cf4:  mov    %eax,(%esp)
084a6d0f +0x0cf7:  call   084a77b0 <+0x1798>
084a6d14 +0x0cfc:  sub    $0x4,%esp
084a6d17 +0x0cff:  lea    -0x25(%ebp),%eax
084a6d1a +0x0d02:  mov    %eax,0x8(%esp)
084a6d1e +0x0d06:  lea    -0x24(%ebp),%eax
084a6d21 +0x0d09:  mov    %eax,0x4(%esp)
084a6d25 +0x0d0d:  mov    %ebx,(%esp)
084a6d28 +0x0d10:  call   084a7878 <+0x1860>
084a6d2d +0x0d15:  jmp    084a6dd3 <+0xdbb>
084a6d32 +0x0d1a:  lea    -0x34(%ebp),%eax
084a6d35 +0x0d1d:  mov    %eax,(%esp)
084a6d38 +0x0d20:  call   084a78a6 <+0x188e>
084a6d3d +0x0d25:  mov    0x10(%ebp),%eax
084a6d40 +0x0d28:  mov    %eax,0x4(%esp)
084a6d44 +0x0d2c:  lea    -0x1e(%ebp),%eax
084a6d47 +0x0d2f:  mov    %eax,(%esp)
084a6d4a +0x0d32:  call   084a7724 <+0x170c>
084a6d4f +0x0d37:  mov    %eax,%esi
084a6d51 +0x0d39:  mov    -0x34(%ebp),%eax
084a6d54 +0x0d3c:  mov    %eax,(%esp)
084a6d57 +0x0d3f:  call   084a78c3 <+0x18ab>
084a6d5c +0x0d44:  mov    0xc(%ebp),%edx
084a6d5f +0x0d47:  mov    %esi,0x8(%esp)
084a6d63 +0x0d4b:  mov    %eax,0x4(%esp)
084a6d67 +0x0d4f:  mov    %edx,(%esp)
084a6d6a +0x0d52:  call   084a774e <+0x1736>
084a6d6f +0x0d57:  test   %al,%al
084a6d71 +0x0d59:  je     084a6db9 <+0xda1>
084a6d73 +0x0d5b:  movb   $0x1,-0x1d(%ebp)
084a6d77 +0x0d5f:  mov    -0x10(%ebp),%ecx
084a6d7a +0x0d62:  mov    -0x14(%ebp),%edx
084a6d7d +0x0d65:  lea    -0x1c(%ebp),%eax
084a6d80 +0x0d68:  mov    0x10(%ebp),%esi
084a6d83 +0x0d6b:  mov    %esi,0x10(%esp)
084a6d87 +0x0d6f:  mov    %ecx,0xc(%esp)
084a6d8b +0x0d73:  mov    %edx,0x8(%esp)
084a6d8f +0x0d77:  mov    0xc(%ebp),%edx
084a6d92 +0x0d7a:  mov    %edx,0x4(%esp)
084a6d96 +0x0d7e:  mov    %eax,(%esp)
084a6d99 +0x0d81:  call   084a77b0 <+0x1798>
084a6d9e +0x0d86:  sub    $0x4,%esp
084a6da1 +0x0d89:  lea    -0x1d(%ebp),%eax
084a6da4 +0x0d8c:  mov    %eax,0x8(%esp)
084a6da8 +0x0d90:  lea    -0x1c(%ebp),%eax
084a6dab +0x0d93:  mov    %eax,0x4(%esp)
084a6daf +0x0d97:  mov    %ebx,(%esp)
084a6db2 +0x0d9a:  call   084a7878 <+0x1860>
084a6db7 +0x0d9f:  jmp    084a6dd3 <+0xdbb>
084a6db9 +0x0da1:  movb   $0x0,-0x15(%ebp)
084a6dbd +0x0da5:  lea    -0x15(%ebp),%eax
084a6dc0 +0x0da8:  mov    %eax,0x8(%esp)
084a6dc4 +0x0dac:  lea    -0x34(%ebp),%eax
084a6dc7 +0x0daf:  mov    %eax,0x4(%esp)
084a6dcb +0x0db3:  mov    %ebx,(%esp)
084a6dce +0x0db6:  call   084a78e6 <+0x18ce>
084a6dd3 +0x0dbb:  mov    %ebx,%eax
084a6dd5 +0x0dbd:  lea    -0x8(%ebp),%esp
084a6dd8 +0x0dc0:  add    $0x0,%esp
084a6ddb +0x0dc3:  pop    %ebx
084a6ddc +0x0dc4:  pop    %esi
084a6ddd +0x0dc5:  pop    %ebp
084a6dde +0x0dc6:  ret    $0x4
084a6de1 +0x0dc9:  nop
084a6de2 +0x0dca:  push   %ebp
084a6de3 +0x0dcb:  mov    %esp,%ebp
084a6de5 +0x0dcd:  push   %ebx
084a6de6 +0x0dce:  sub    $0x14,%esp
084a6de9 +0x0dd1:  mov    0x8(%ebp),%ebx
084a6dec +0x0dd4:  mov    0xc(%ebp),%eax
084a6def +0x0dd7:  mov    %eax,0x4(%esp)
084a6df3 +0x0ddb:  mov    %ebx,(%esp)
084a6df6 +0x0dde:  call   084a7914 <+0x18fc>
084a6dfb +0x0de3:  mov    %ebx,%eax
084a6dfd +0x0de5:  add    $0x14,%esp
084a6e00 +0x0de8:  pop    %ebx
084a6e01 +0x0de9:  pop    %ebp
084a6e02 +0x0dea:  ret    $0x4
084a6e05 +0x0ded:  nop
084a6e06 +0x0dee:  push   %ebp
084a6e07 +0x0def:  mov    %esp,%ebp
084a6e09 +0x0df1:  sub    $0x28,%esp
084a6e0c +0x0df4:  mov    0x10(%ebp),%eax
084a6e0f +0x0df7:  mov    %eax,(%esp)
084a6e12 +0x0dfa:  call   0807f356 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x426>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x426
084a6e17 +0x0dff:  mov    %eax,0x4(%esp)
084a6e1b +0x0e03:  mov    0x8(%ebp),%eax
084a6e1e +0x0e06:  mov    %eax,(%esp)
084a6e21 +0x0e09:  call   084a7922 <+0x190a>
084a6e26 +0x0e0e:  mov    %eax,-0xc(%ebp)
084a6e29 +0x0e11:  mov    0xc(%ebp),%edx
084a6e2c +0x0e14:  mov    -0xc(%ebp),%eax
084a6e2f +0x0e17:  mov    %edx,0x4(%esp)
084a6e33 +0x0e1b:  mov    %eax,(%esp)
084a6e36 +0x0e1e:  call   086dad20 <_ZNSt15_List_node_base4hookEPS_>  ; std::_List_node_base::hook(std::_List_node_base*)
084a6e3b +0x0e23:  leave
084a6e3c +0x0e24:  ret
084a6e3d +0x0e25:  nop
084a6e3e +0x0e26:  push   %ebp
084a6e3f +0x0e27:  mov    %esp,%ebp
084a6e41 +0x0e29:  push   %ebx
084a6e42 +0x0e2a:  sub    $0x14,%esp
084a6e45 +0x0e2d:  mov    0x8(%ebp),%ebx
084a6e48 +0x0e30:  mov    0xc(%ebp),%eax
084a6e4b +0x0e33:  mov    0xc(%eax),%eax
084a6e4e +0x0e36:  mov    %eax,0x4(%esp)
084a6e52 +0x0e3a:  mov    %ebx,(%esp)
084a6e55 +0x0e3d:  call   084a79a4 <+0x198c>
084a6e5a +0x0e42:  mov    %ebx,%eax
084a6e5c +0x0e44:  add    $0x14,%esp
084a6e5f +0x0e47:  pop    %ebx
084a6e60 +0x0e48:  pop    %ebp
084a6e61 +0x0e49:  ret    $0x4
084a6e64 +0x0e4c:  push   %ebp
084a6e65 +0x0e4d:  mov    %esp,%ebp
084a6e67 +0x0e4f:  push   %ebx
084a6e68 +0x0e50:  sub    $0x14,%esp
084a6e6b +0x0e53:  mov    0x8(%ebp),%ebx
084a6e6e +0x0e56:  mov    0xc(%ebp),%eax
084a6e71 +0x0e59:  add    $0x4,%eax
084a6e74 +0x0e5c:  mov    %eax,0x4(%esp)
084a6e78 +0x0e60:  mov    %ebx,(%esp)
084a6e7b +0x0e63:  call   084a79a4 <+0x198c>
084a6e80 +0x0e68:  mov    %ebx,%eax
084a6e82 +0x0e6a:  add    $0x14,%esp
084a6e85 +0x0e6d:  pop    %ebx
084a6e86 +0x0e6e:  pop    %ebp
084a6e87 +0x0e6f:  ret    $0x4
084a6e8a +0x0e72:  push   %ebp
084a6e8b +0x0e73:  mov    %esp,%ebp
084a6e8d +0x0e75:  mov    0x8(%ebp),%eax
084a6e90 +0x0e78:  mov    0xc(%ebp),%edx
084a6e93 +0x0e7b:  mov    %edx,(%eax)
084a6e95 +0x0e7d:  pop    %ebp
084a6e96 +0x0e7e:  ret
084a6e97 +0x0e7f:  nop
084a6e98 +0x0e80:  push   %ebp
084a6e99 +0x0e81:  mov    %esp,%ebp
084a6e9b +0x0e83:  sub    $0x28,%esp
084a6e9e +0x0e86:  jmp    084a6ebc <+0xea4>
084a6ea0 +0x0e88:  mov    0x8(%ebp),%eax
084a6ea3 +0x0e8b:  mov    %eax,(%esp)
084a6ea6 +0x0e8e:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
084a6eab +0x0e93:  add    %eax,%eax
084a6ead +0x0e95:  mov    %eax,0x4(%esp)
084a6eb1 +0x0e99:  mov    0x8(%ebp),%eax
084a6eb4 +0x0e9c:  mov    %eax,(%esp)
084a6eb7 +0x0e9f:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
084a6ebc +0x0ea4:  movl   $0x688,0x4(%esp)
084a6ec4 +0x0eac:  mov    0x8(%ebp),%eax
084a6ec7 +0x0eaf:  mov    %eax,(%esp)
084a6eca +0x0eb2:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
084a6ecf +0x0eb7:  xor    $0x1,%eax
084a6ed2 +0x0eba:  test   %al,%al
084a6ed4 +0x0ebc:  jne    084a6ea0 <+0xe88>
084a6ed6 +0x0ebe:  mov    0x8(%ebp),%eax
084a6ed9 +0x0ec1:  mov    0x8(%eax),%eax
084a6edc +0x0ec4:  mov    %eax,%edx
084a6ede +0x0ec6:  mov    0x8(%ebp),%eax
084a6ee1 +0x0ec9:  mov    0xc(%eax),%eax
084a6ee4 +0x0ecc:  lea    (%edx,%eax,1),%eax
084a6ee7 +0x0ecf:  mov    %eax,-0xc(%ebp)
084a6eea +0x0ed2:  movl   $0x688,0x4(%esp)
084a6ef2 +0x0eda:  mov    0x8(%ebp),%eax
084a6ef5 +0x0edd:  mov    %eax,(%esp)
084a6ef8 +0x0ee0:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
084a6efd +0x0ee5:  mov    -0xc(%ebp),%eax
084a6f00 +0x0ee8:  leave
084a6f01 +0x0ee9:  ret
084a6f02 +0x0eea:  push   %ebp
084a6f03 +0x0eeb:  mov    %esp,%ebp
084a6f05 +0x0eed:  push   %ebx
084a6f06 +0x0eee:  sub    $0x14,%esp
084a6f09 +0x0ef1:  mov    0x8(%ebp),%eax
084a6f0c +0x0ef4:  mov    %eax,(%esp)
084a6f0f +0x0ef7:  call   084a6ba6 <+0xb8e>
084a6f14 +0x0efc:  mov    %eax,0x4(%esp)
084a6f18 +0x0f00:  mov    0x8(%ebp),%eax
084a6f1b +0x0f03:  mov    %eax,(%esp)
084a6f1e +0x0f06:  call   084a6b50 <+0xb38>
084a6f23 +0x0f0b:  mov    0x8(%ebp),%eax
084a6f26 +0x0f0e:  mov    %eax,(%esp)
084a6f29 +0x0f11:  call   084a79b2 <+0x199a>
084a6f2e +0x0f16:  mov    %eax,%ebx
084a6f30 +0x0f18:  mov    0x8(%ebp),%eax
084a6f33 +0x0f1b:  mov    %eax,(%esp)
084a6f36 +0x0f1e:  call   084a7718 <+0x1700>
084a6f3b +0x0f23:  mov    %eax,(%ebx)
084a6f3d +0x0f25:  mov    0x8(%ebp),%eax
084a6f40 +0x0f28:  mov    %eax,(%esp)
084a6f43 +0x0f2b:  call   084a79be <+0x19a6>
084a6f48 +0x0f30:  movl   $0x0,(%eax)
084a6f4e +0x0f36:  mov    0x8(%ebp),%eax
084a6f51 +0x0f39:  mov    %eax,(%esp)
084a6f54 +0x0f3c:  call   084a79ca <+0x19b2>
084a6f59 +0x0f41:  mov    %eax,%ebx
084a6f5b +0x0f43:  mov    0x8(%ebp),%eax
084a6f5e +0x0f46:  mov    %eax,(%esp)
084a6f61 +0x0f49:  call   084a7718 <+0x1700>
084a6f66 +0x0f4e:  mov    %eax,(%ebx)
084a6f68 +0x0f50:  mov    0x8(%ebp),%eax
084a6f6b +0x0f53:  movl   $0x0,0x14(%eax)
084a6f72 +0x0f5a:  add    $0x14,%esp
084a6f75 +0x0f5d:  pop    %ebx
084a6f76 +0x0f5e:  pop    %ebp
084a6f77 +0x0f5f:  ret
084a6f78 +0x0f60:  push   %ebp
084a6f79 +0x0f61:  mov    %esp,%ebp
084a6f7b +0x0f63:  push   %esi
084a6f7c +0x0f64:  push   %ebx
084a6f7d +0x0f65:  sub    $0x30,%esp
084a6f80 +0x0f68:  mov    0x8(%ebp),%ebx
084a6f83 +0x0f6b:  mov    0xc(%ebp),%eax
084a6f86 +0x0f6e:  mov    %eax,(%esp)
084a6f89 +0x0f71:  call   084a7718 <+0x1700>
084a6f8e +0x0f76:  mov    %eax,%esi
084a6f90 +0x0f78:  mov    0xc(%ebp),%eax
084a6f93 +0x0f7b:  mov    %eax,(%esp)
084a6f96 +0x0f7e:  call   084a6ba6 <+0xb8e>
084a6f9b +0x0f83:  lea    -0x10(%ebp),%edx
084a6f9e +0x0f86:  mov    0x10(%ebp),%ecx
084a6fa1 +0x0f89:  mov    %ecx,0x10(%esp)
084a6fa5 +0x0f8d:  mov    %esi,0xc(%esp)
084a6fa9 +0x0f91:  mov    %eax,0x8(%esp)
084a6fad +0x0f95:  mov    0xc(%ebp),%eax
084a6fb0 +0x0f98:  mov    %eax,0x4(%esp)
084a6fb4 +0x0f9c:  mov    %edx,(%esp)
084a6fb7 +0x0f9f:  call   084a79d6 <+0x19be>
084a6fbc +0x0fa4:  sub    $0x4,%esp
084a6fbf +0x0fa7:  lea    -0xc(%ebp),%eax
084a6fc2 +0x0faa:  mov    0xc(%ebp),%edx
084a6fc5 +0x0fad:  mov    %edx,0x4(%esp)
084a6fc9 +0x0fb1:  mov    %eax,(%esp)
084a6fcc +0x0fb4:  call   084a7036 <+0x101e>
084a6fd1 +0x0fb9:  sub    $0x4,%esp
084a6fd4 +0x0fbc:  lea    -0xc(%ebp),%eax
084a6fd7 +0x0fbf:  mov    %eax,0x4(%esp)
084a6fdb +0x0fc3:  lea    -0x10(%ebp),%eax
084a6fde +0x0fc6:  mov    %eax,(%esp)
084a6fe1 +0x0fc9:  call   084a779c <+0x1784>
084a6fe6 +0x0fce:  test   %al,%al
084a6fe8 +0x0fd0:  jne    084a700f <+0xff7>
084a6fea +0x0fd2:  mov    -0x10(%ebp),%eax
084a6fed +0x0fd5:  mov    %eax,(%esp)
084a6ff0 +0x0fd8:  call   084a78c3 <+0x18ab>
084a6ff5 +0x0fdd:  mov    0xc(%ebp),%edx
084a6ff8 +0x0fe0:  mov    %eax,0x8(%esp)
084a6ffc +0x0fe4:  mov    0x10(%ebp),%eax
084a6fff +0x0fe7:  mov    %eax,0x4(%esp)
084a7003 +0x0feb:  mov    %edx,(%esp)
084a7006 +0x0fee:  call   084a774e <+0x1736>
084a700b +0x0ff3:  test   %al,%al
084a700d +0x0ff5:  je     084a7023 <+0x100b>
084a700f +0x0ff7:  mov    0xc(%ebp),%eax
084a7012 +0x0ffa:  mov    %eax,0x4(%esp)
084a7016 +0x0ffe:  mov    %ebx,(%esp)
084a7019 +0x1001:  call   084a7036 <+0x101e>
084a701e +0x1006:  sub    $0x4,%esp
084a7021 +0x1009:  jmp    084a7028 <+0x1010>
084a7023 +0x100b:  mov    -0x10(%ebp),%eax
084a7026 +0x100e:  mov    %eax,(%ebx)
084a7028 +0x1010:  mov    %ebx,%eax
084a702a +0x1012:  lea    -0x8(%ebp),%esp
084a702d +0x1015:  add    $0x0,%esp
084a7030 +0x1018:  pop    %ebx
084a7031 +0x1019:  pop    %esi
084a7032 +0x101a:  pop    %ebp
084a7033 +0x101b:  ret    $0x4
084a7036 +0x101e:  push   %ebp
084a7037 +0x101f:  mov    %esp,%ebp
084a7039 +0x1021:  push   %ebx
084a703a +0x1022:  sub    $0x14,%esp
084a703d +0x1025:  mov    0x8(%ebp),%ebx
084a7040 +0x1028:  mov    0xc(%ebp),%eax
084a7043 +0x102b:  add    $0x4,%eax
084a7046 +0x102e:  mov    %eax,0x4(%esp)
084a704a +0x1032:  mov    %ebx,(%esp)
084a704d +0x1035:  call   084a7768 <+0x1750>
084a7052 +0x103a:  mov    %ebx,%eax
084a7054 +0x103c:  add    $0x14,%esp
084a7057 +0x103f:  pop    %ebx
084a7058 +0x1040:  pop    %ebp
084a7059 +0x1041:  ret    $0x4
084a705c +0x1044:  push   %ebp
084a705d +0x1045:  mov    %esp,%ebp
084a705f +0x1047:  mov    0x8(%ebp),%eax
084a7062 +0x104a:  pop    %ebp
084a7063 +0x104b:  ret
084a7064 +0x104c:  push   %ebp
084a7065 +0x104d:  mov    %esp,%ebp
084a7067 +0x104f:  sub    $0x18,%esp
084a706a +0x1052:  mov    0xc(%ebp),%eax
084a706d +0x1055:  mov    %eax,(%esp)
084a7070 +0x1058:  call   084a705c <+0x1044>
084a7075 +0x105d:  mov    0x8(%ebp),%ecx
084a7078 +0x1060:  mov    0x4(%eax),%edx
084a707b +0x1063:  mov    (%eax),%eax
084a707d +0x1065:  mov    %eax,(%ecx)
084a707f +0x1067:  mov    %edx,0x4(%ecx)
084a7082 +0x106a:  mov    0x10(%ebp),%eax
084a7085 +0x106d:  mov    %eax,(%esp)
084a7088 +0x1070:  call   084a6bb9 <+0xba1>
084a708d +0x1075:  mov    0x8(%ebp),%edx
084a7090 +0x1078:  mov    (%eax),%ecx
084a7092 +0x107a:  mov    %ecx,0x8(%edx)
084a7095 +0x107d:  mov    0x4(%eax),%ecx
084a7098 +0x1080:  mov    %ecx,0xc(%edx)
084a709b +0x1083:  mov    0x8(%eax),%eax
084a709e +0x1086:  mov    %eax,0x10(%edx)
084a70a1 +0x1089:  leave
084a70a2 +0x108a:  ret
084a70a3 +0x108b:  nop
084a70a4 +0x108c:  push   %ebp
084a70a5 +0x108d:  mov    %esp,%ebp
084a70a7 +0x108f:  sub    $0x28,%esp
084a70aa +0x1092:  mov    0x10(%ebp),%eax
084a70ad +0x1095:  mov    %eax,(%esp)
084a70b0 +0x1098:  call   0807f54c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x61c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x61c
084a70b5 +0x109d:  movzbl (%eax),%eax
084a70b8 +0x10a0:  mov    %al,-0xd(%ebp)
084a70bb +0x10a3:  lea    -0xd(%ebp),%eax
084a70be +0x10a6:  mov    %eax,0x4(%esp)
084a70c2 +0x10aa:  mov    0x8(%ebp),%eax
084a70c5 +0x10ad:  mov    %eax,(%esp)
084a70c8 +0x10b0:  call   084a7a52 <+0x1a3a>
084a70cd +0x10b5:  mov    %eax,-0xc(%ebp)
084a70d0 +0x10b8:  mov    0xc(%ebp),%edx
084a70d3 +0x10bb:  mov    -0xc(%ebp),%eax
084a70d6 +0x10be:  mov    %edx,0x4(%esp)
084a70da +0x10c2:  mov    %eax,(%esp)
084a70dd +0x10c5:  call   086dad20 <_ZNSt15_List_node_base4hookEPS_>  ; std::_List_node_base::hook(std::_List_node_base*)
084a70e2 +0x10ca:  leave
084a70e3 +0x10cb:  ret
084a70e4 +0x10cc:  push   %ebp
084a70e5 +0x10cd:  mov    %esp,%ebp
084a70e7 +0x10cf:  push   %ebx
084a70e8 +0x10d0:  sub    $0x24,%esp
084a70eb +0x10d3:  lea    -0x9(%ebp),%eax
084a70ee +0x10d6:  lea    0x8(%ebp),%edx
084a70f1 +0x10d9:  mov    %edx,0x4(%esp)
084a70f5 +0x10dd:  mov    %eax,(%esp)
084a70f8 +0x10e0:  call   084a7ada <+0x1ac2>
084a70fd +0x10e5:  sub    $0x4,%esp
084a7100 +0x10e8:  mov    %bl,0x8(%esp)
084a7104 +0x10ec:  mov    0xc(%ebp),%eax
084a7107 +0x10ef:  mov    %eax,0x4(%esp)
084a710b +0x10f3:  mov    0x8(%ebp),%eax
084a710e +0x10f6:  mov    %eax,(%esp)
084a7111 +0x10f9:  call   084a7ae4 <+0x1acc>
084a7116 +0x10fe:  mov    -0x4(%ebp),%ebx
084a7119 +0x1101:  leave
084a711a +0x1102:  ret
084a711b +0x1103:  nop
084a711c +0x1104:  push   %ebp
084a711d +0x1105:  mov    %esp,%ebp
084a711f +0x1107:  push   %ebx
084a7120 +0x1108:  sub    $0x14,%esp
084a7123 +0x110b:  mov    0x8(%ebp),%ebx
084a7126 +0x110e:  mov    0xc(%ebp),%eax
084a7129 +0x1111:  mov    (%eax),%eax
084a712b +0x1113:  mov    %eax,0x4(%esp)
084a712f +0x1117:  mov    %ebx,(%esp)
084a7132 +0x111a:  call   084a7914 <+0x18fc>
084a7137 +0x111f:  mov    %ebx,%eax
084a7139 +0x1121:  add    $0x14,%esp
084a713c +0x1124:  pop    %ebx
084a713d +0x1125:  pop    %ebp
084a713e +0x1126:  ret    $0x4
084a7141 +0x1129:  nop
084a7142 +0x112a:  push   %ebp
084a7143 +0x112b:  mov    %esp,%ebp
084a7145 +0x112d:  sub    $0x28,%esp
084a7148 +0x1130:  mov    0xc(%ebp),%eax
084a714b +0x1133:  mov    %eax,(%esp)
084a714e +0x1136:  call   086dad40 <_ZNSt15_List_node_base6unhookEv>  ; std::_List_node_base::unhook()
084a7153 +0x113b:  mov    0xc(%ebp),%eax
084a7156 +0x113e:  mov    %eax,-0xc(%ebp)
084a7159 +0x1141:  mov    0x8(%ebp),%eax
084a715c +0x1144:  mov    %eax,(%esp)
084a715f +0x1147:  call   084a7634 <+0x161c>
084a7164 +0x114c:  mov    -0xc(%ebp),%edx
084a7167 +0x114f:  mov    %edx,0x4(%esp)
084a716b +0x1153:  mov    %eax,(%esp)
084a716e +0x1156:  call   084a7642 <+0x162a>
084a7173 +0x115b:  mov    0x8(%ebp),%eax
084a7176 +0x115e:  mov    -0xc(%ebp),%edx
084a7179 +0x1161:  mov    %edx,0x4(%esp)
084a717d +0x1165:  mov    %eax,(%esp)
084a7180 +0x1168:  call   084a7656 <+0x163e>
084a7185 +0x116d:  leave
084a7186 +0x116e:  ret
084a7187 +0x116f:  nop
084a7188 +0x1170:  push   %ebp
084a7189 +0x1171:  mov    %esp,%ebp
084a718b +0x1173:  mov    0x8(%ebp),%eax
084a718e +0x1176:  mov    0x14(%eax),%eax
084a7191 +0x1179:  pop    %ebp
084a7192 +0x117a:  ret
084a7193 +0x117b:  nop
084a7194 +0x117c:  push   %ebp
084a7195 +0x117d:  mov    %esp,%ebp
084a7197 +0x117f:  push   %ebx
084a7198 +0x1180:  sub    $0x14,%esp
084a719b +0x1183:  mov    0x8(%ebp),%ebx
084a719e +0x1186:  jmp    084a71ec <+0x11d4>
084a71a0 +0x1188:  mov    0x10(%ebp),%eax
084a71a3 +0x118b:  mov    %eax,(%esp)
084a71a6 +0x118e:  call   084a7b1d <+0x1b05>
084a71ab +0x1193:  mov    0xc(%ebp),%edx
084a71ae +0x1196:  mov    0x18(%ebp),%ecx
084a71b1 +0x1199:  mov    %ecx,0x8(%esp)
084a71b5 +0x119d:  mov    %eax,0x4(%esp)
084a71b9 +0x11a1:  mov    %edx,(%esp)
084a71bc +0x11a4:  call   084a7232 <+0x121a>
084a71c1 +0x11a9:  xor    $0x1,%eax
084a71c4 +0x11ac:  test   %al,%al
084a71c6 +0x11ae:  je     084a71de <+0x11c6>
084a71c8 +0x11b0:  mov    0x10(%ebp),%eax
084a71cb +0x11b3:  mov    %eax,0x14(%ebp)
084a71ce +0x11b6:  mov    0x10(%ebp),%eax
084a71d1 +0x11b9:  mov    %eax,(%esp)
084a71d4 +0x11bc:  call   083b8882 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x5284e>  ; global constructors keyed to CServerEvent::m_nExpRate+0x5284e
084a71d9 +0x11c1:  mov    %eax,0x10(%ebp)
084a71dc +0x11c4:  jmp    084a71ec <+0x11d4>
084a71de +0x11c6:  mov    0x10(%ebp),%eax
084a71e1 +0x11c9:  mov    %eax,(%esp)
084a71e4 +0x11cc:  call   083b8877 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x52843>  ; global constructors keyed to CServerEvent::m_nExpRate+0x52843
084a71e9 +0x11d1:  mov    %eax,0x10(%ebp)
084a71ec +0x11d4:  cmpl   $0x0,0x10(%ebp)
084a71f0 +0x11d8:  setne  %al
084a71f3 +0x11db:  test   %al,%al
084a71f5 +0x11dd:  jne    084a71a0 <+0x1188>
084a71f7 +0x11df:  mov    0x14(%ebp),%eax
084a71fa +0x11e2:  mov    %eax,0x4(%esp)
084a71fe +0x11e6:  mov    %ebx,(%esp)
084a7201 +0x11e9:  call   084a7260 <+0x1248>
084a7206 +0x11ee:  mov    %ebx,%eax
084a7208 +0x11f0:  add    $0x14,%esp
084a720b +0x11f3:  pop    %ebx
084a720c +0x11f4:  pop    %ebp
084a720d +0x11f5:  ret    $0x4
084a7210 +0x11f8:  push   %ebp
084a7211 +0x11f9:  mov    %esp,%ebp
084a7213 +0x11fb:  sub    $0x28,%esp
084a7216 +0x11fe:  mov    0x8(%ebp),%eax
084a7219 +0x1201:  mov    %eax,(%esp)
084a721c +0x1204:  call   084a7b3f <+0x1b27>
084a7221 +0x1209:  mov    %eax,0x4(%esp)
084a7225 +0x120d:  lea    -0x9(%ebp),%eax
084a7228 +0x1210:  mov    %eax,(%esp)
084a722b +0x1213:  call   084a7b4a <+0x1b32>
084a7230 +0x1218:  leave
084a7231 +0x1219:  ret
084a7232 +0x121a:  push   %ebp
084a7233 +0x121b:  mov    %esp,%ebp
084a7235 +0x121d:  sub    $0x18,%esp
084a7238 +0x1220:  mov    0x10(%ebp),%eax
084a723b +0x1223:  mov    %eax,0x4(%esp)
084a723f +0x1227:  mov    0xc(%ebp),%eax
084a7242 +0x122a:  mov    %eax,(%esp)
084a7245 +0x122d:  call   084a6034 <+0x1c>
084a724a +0x1232:  leave
084a724b +0x1233:  ret
084a724c +0x1234:  push   %ebp
084a724d +0x1235:  mov    %esp,%ebp
084a724f +0x1237:  mov    0x8(%ebp),%eax
084a7252 +0x123a:  mov    (%eax),%edx
084a7254 +0x123c:  mov    0xc(%ebp),%eax
084a7257 +0x123f:  mov    (%eax),%eax
084a7259 +0x1241:  cmp    %eax,%edx
084a725b +0x1243:  sete   %al
084a725e +0x1246:  pop    %ebp
084a725f +0x1247:  ret
084a7260 +0x1248:  push   %ebp
084a7261 +0x1249:  mov    %esp,%ebp
084a7263 +0x124b:  mov    0xc(%ebp),%edx
084a7266 +0x124e:  mov    0x8(%ebp),%eax
084a7269 +0x1251:  mov    %edx,(%eax)
084a726b +0x1253:  pop    %ebp
084a726c +0x1254:  ret
084a726d +0x1255:  nop
084a726e +0x1256:  push   %ebp
084a726f +0x1257:  mov    %esp,%ebp
084a7271 +0x1259:  push   %esi
084a7272 +0x125a:  push   %ebx
084a7273 +0x125b:  sub    $0x40,%esp
084a7276 +0x125e:  lea    0x14(%ebp),%eax
084a7279 +0x1261:  mov    %eax,0x4(%esp)
084a727d +0x1265:  lea    0x10(%ebp),%eax
084a7280 +0x1268:  mov    %eax,(%esp)
084a7283 +0x126b:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
084a7288 +0x1270:  test   %al,%al
084a728a +0x1272:  je     084a762a <+0x1612>
084a7290 +0x1278:  mov    0x14(%ebp),%eax
084a7293 +0x127b:  mov    %eax,0x4(%esp)
084a7297 +0x127f:  mov    0x10(%ebp),%eax
084a729a +0x1282:  mov    %eax,(%esp)
084a729d +0x1285:  call   084a7b52 <+0x1b3a>
084a72a2 +0x128a:  mov    %eax,-0x20(%ebp)
084a72a5 +0x128d:  mov    0x8(%ebp),%eax
084a72a8 +0x1290:  mov    0x8(%eax),%eax
084a72ab +0x1293:  mov    %eax,%edx
084a72ad +0x1295:  mov    0x8(%ebp),%eax
084a72b0 +0x1298:  mov    0x4(%eax),%eax
084a72b3 +0x129b:  mov    %edx,%ecx
084a72b5 +0x129d:  sub    %eax,%ecx
084a72b7 +0x129f:  mov    %ecx,%eax
084a72b9 +0x12a1:  sar    $0x3,%eax
084a72bc +0x12a4:  cmp    -0x20(%ebp),%eax
084a72bf +0x12a7:  jb     084a747e <+0x1466>
084a72c5 +0x12ad:  lea    -0x2c(%ebp),%eax
084a72c8 +0x12b0:  mov    0x8(%ebp),%edx
084a72cb +0x12b3:  mov    %edx,0x4(%esp)
084a72cf +0x12b7:  mov    %eax,(%esp)
084a72d2 +0x12ba:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
084a72d7 +0x12bf:  sub    $0x4,%esp
084a72da +0x12c2:  lea    0xc(%ebp),%eax
084a72dd +0x12c5:  mov    %eax,0x4(%esp)
084a72e1 +0x12c9:  lea    -0x2c(%ebp),%eax
084a72e4 +0x12cc:  mov    %eax,(%esp)
084a72e7 +0x12cf:  call   080ddd8a <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x8d3>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x8d3
084a72ec +0x12d4:  mov    %eax,-0x1c(%ebp)
084a72ef +0x12d7:  mov    0x8(%ebp),%eax
084a72f2 +0x12da:  mov    0x4(%eax),%eax
084a72f5 +0x12dd:  mov    %eax,-0x18(%ebp)
084a72f8 +0x12e0:  mov    -0x1c(%ebp),%eax
084a72fb +0x12e3:  cmp    -0x20(%ebp),%eax
084a72fe +0x12e6:  jbe    084a73a9 <+0x1391>
084a7304 +0x12ec:  mov    0x8(%ebp),%eax
084a7307 +0x12ef:  mov    %eax,(%esp)
084a730a +0x12f2:  call   080dd7f2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x33b>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x33b
084a730f +0x12f7:  mov    0x8(%ebp),%edx
084a7312 +0x12fa:  mov    0x4(%edx),%ecx
084a7315 +0x12fd:  mov    0x8(%ebp),%edx
084a7318 +0x1300:  mov    0x4(%edx),%edx
084a731b +0x1303:  mov    0x8(%ebp),%ebx
084a731e +0x1306:  mov    0x4(%ebx),%ebx
084a7321 +0x1309:  mov    -0x20(%ebp),%esi
084a7324 +0x130c:  shl    $0x3,%esi
084a7327 +0x130f:  neg    %esi
084a7329 +0x1311:  add    %esi,%ebx
084a732b +0x1313:  mov    %eax,0xc(%esp)
084a732f +0x1317:  mov    %ecx,0x8(%esp)
084a7333 +0x131b:  mov    %edx,0x4(%esp)
084a7337 +0x131f:  mov    %ebx,(%esp)
084a733a +0x1322:  call   080dddbc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x905>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x905
084a733f +0x1327:  mov    0x8(%ebp),%eax
084a7342 +0x132a:  mov    0x4(%eax),%eax
084a7345 +0x132d:  mov    -0x20(%ebp),%edx
084a7348 +0x1330:  shl    $0x3,%edx
084a734b +0x1333:  lea    (%eax,%edx,1),%edx
084a734e +0x1336:  mov    0x8(%ebp),%eax
084a7351 +0x1339:  mov    %edx,0x4(%eax)
084a7354 +0x133c:  mov    -0x20(%ebp),%eax
084a7357 +0x133f:  shl    $0x3,%eax
084a735a +0x1342:  neg    %eax
084a735c +0x1344:  mov    %eax,%ebx
084a735e +0x1346:  add    -0x18(%ebp),%ebx
084a7361 +0x1349:  lea    0xc(%ebp),%eax
084a7364 +0x134c:  mov    %eax,(%esp)
084a7367 +0x134f:  call   080dd868 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x3b1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x3b1
084a736c +0x1354:  mov    (%eax),%eax
084a736e +0x1356:  mov    -0x18(%ebp),%edx
084a7371 +0x1359:  mov    %edx,0x8(%esp)
084a7375 +0x135d:  mov    %ebx,0x4(%esp)
084a7379 +0x1361:  mov    %eax,(%esp)
084a737c +0x1364:  call   080dde0e <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x957>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x957
084a7381 +0x1369:  lea    -0x28(%ebp),%eax
084a7384 +0x136c:  mov    0xc(%ebp),%edx
084a7387 +0x136f:  mov    %edx,0xc(%esp)
084a738b +0x1373:  mov    0x14(%ebp),%edx
084a738e +0x1376:  mov    %edx,0x8(%esp)
084a7392 +0x137a:  mov    0x10(%ebp),%edx
084a7395 +0x137d:  mov    %edx,0x4(%esp)
084a7399 +0x1381:  mov    %eax,(%esp)
084a739c +0x1384:  call   08312160 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3d45>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3d45
084a73a1 +0x1389:  sub    $0x4,%esp
084a73a4 +0x138c:  jmp    084a762a <+0x1612>
084a73a9 +0x1391:  mov    0x10(%ebp),%eax
084a73ac +0x1394:  mov    %eax,-0x30(%ebp)
084a73af +0x1397:  mov    -0x1c(%ebp),%eax
084a73b2 +0x139a:  mov    %eax,0x4(%esp)
084a73b6 +0x139e:  lea    -0x30(%ebp),%eax
084a73b9 +0x13a1:  mov    %eax,(%esp)
084a73bc +0x13a4:  call   084a7b89 <+0x1b71>
084a73c1 +0x13a9:  mov    0x8(%ebp),%eax
084a73c4 +0x13ac:  mov    %eax,(%esp)
084a73c7 +0x13af:  call   080dd7f2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x33b>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x33b
084a73cc +0x13b4:  mov    0x8(%ebp),%edx
084a73cf +0x13b7:  mov    0x4(%edx),%edx
084a73d2 +0x13ba:  mov    %eax,0xc(%esp)
084a73d6 +0x13be:  mov    %edx,0x8(%esp)
084a73da +0x13c2:  mov    0x14(%ebp),%eax
084a73dd +0x13c5:  mov    %eax,0x4(%esp)
084a73e1 +0x13c9:  mov    -0x30(%ebp),%eax
084a73e4 +0x13cc:  mov    %eax,(%esp)
084a73e7 +0x13cf:  call   0823a89a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xff44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xff44
084a73ec +0x13d4:  mov    0x8(%ebp),%eax
084a73ef +0x13d7:  mov    0x4(%eax),%eax
084a73f2 +0x13da:  mov    -0x1c(%ebp),%edx
084a73f5 +0x13dd:  mov    -0x20(%ebp),%ecx
084a73f8 +0x13e0:  mov    %ecx,%ebx
084a73fa +0x13e2:  sub    %edx,%ebx
084a73fc +0x13e4:  mov    %ebx,%edx
084a73fe +0x13e6:  shl    $0x3,%edx
084a7401 +0x13e9:  lea    (%eax,%edx,1),%edx
084a7404 +0x13ec:  mov    0x8(%ebp),%eax
084a7407 +0x13ef:  mov    %edx,0x4(%eax)
084a740a +0x13f2:  mov    0x8(%ebp),%eax
084a740d +0x13f5:  mov    %eax,(%esp)
084a7410 +0x13f8:  call   080dd7f2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x33b>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x33b
084a7415 +0x13fd:  mov    %eax,%ebx
084a7417 +0x13ff:  mov    0x8(%ebp),%eax
084a741a +0x1402:  mov    0x4(%eax),%esi
084a741d +0x1405:  lea    0xc(%ebp),%eax
084a7420 +0x1408:  mov    %eax,(%esp)
084a7423 +0x140b:  call   080dd868 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x3b1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x3b1
084a7428 +0x1410:  mov    (%eax),%eax
084a742a +0x1412:  mov    %ebx,0xc(%esp)
084a742e +0x1416:  mov    %esi,0x8(%esp)
084a7432 +0x141a:  mov    -0x18(%ebp),%edx
084a7435 +0x141d:  mov    %edx,0x4(%esp)
084a7439 +0x1421:  mov    %eax,(%esp)
084a743c +0x1424:  call   080dddbc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x905>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x905
084a7441 +0x1429:  mov    0x8(%ebp),%eax
084a7444 +0x142c:  mov    0x4(%eax),%eax
084a7447 +0x142f:  mov    -0x1c(%ebp),%edx
084a744a +0x1432:  shl    $0x3,%edx
084a744d +0x1435:  lea    (%eax,%edx,1),%edx
084a7450 +0x1438:  mov    0x8(%ebp),%eax
084a7453 +0x143b:  mov    %edx,0x4(%eax)
084a7456 +0x143e:  lea    -0x24(%ebp),%eax
084a7459 +0x1441:  mov    0xc(%ebp),%edx
084a745c +0x1444:  mov    %edx,0xc(%esp)
084a7460 +0x1448:  mov    -0x30(%ebp),%edx
084a7463 +0x144b:  mov    %edx,0x8(%esp)
084a7467 +0x144f:  mov    0x10(%ebp),%edx
084a746a +0x1452:  mov    %edx,0x4(%esp)
084a746e +0x1456:  mov    %eax,(%esp)
084a7471 +0x1459:  call   08312160 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3d45>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3d45
084a7476 +0x145e:  sub    $0x4,%esp
084a7479 +0x1461:  jmp    084a762a <+0x1612>
084a747e +0x1466:  movl   $"vector::_M_range_insert",0x8(%esp)
084a7486 +0x146e:  mov    -0x20(%ebp),%eax
084a7489 +0x1471:  mov    %eax,0x4(%esp)
084a748d +0x1475:  mov    0x8(%ebp),%eax
084a7490 +0x1478:  mov    %eax,(%esp)
084a7493 +0x147b:  call   080dde46 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x98f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x98f
084a7498 +0x1480:  mov    %eax,-0x14(%ebp)
084a749b +0x1483:  mov    0x8(%ebp),%eax
084a749e +0x1486:  mov    -0x14(%ebp),%edx
084a74a1 +0x1489:  mov    %edx,0x4(%esp)
084a74a5 +0x148d:  mov    %eax,(%esp)
084a74a8 +0x1490:  call   080dd9ec <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x535>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x535
084a74ad +0x1495:  mov    %eax,-0x10(%ebp)
084a74b0 +0x1498:  mov    -0x10(%ebp),%eax
084a74b3 +0x149b:  mov    %eax,-0xc(%ebp)
084a74b6 +0x149e:  mov    0x8(%ebp),%eax
084a74b9 +0x14a1:  mov    %eax,(%esp)
084a74bc +0x14a4:  call   080dd7f2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x33b>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x33b
084a74c1 +0x14a9:  mov    %eax,%ebx
084a74c3 +0x14ab:  lea    0xc(%ebp),%eax
084a74c6 +0x14ae:  mov    %eax,(%esp)
084a74c9 +0x14b1:  call   080dd868 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x3b1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x3b1
084a74ce +0x14b6:  mov    (%eax),%edx
084a74d0 +0x14b8:  mov    0x8(%ebp),%eax
084a74d3 +0x14bb:  mov    (%eax),%eax
084a74d5 +0x14bd:  mov    %ebx,0xc(%esp)
084a74d9 +0x14c1:  mov    -0x10(%ebp),%ecx
084a74dc +0x14c4:  mov    %ecx,0x8(%esp)
084a74e0 +0x14c8:  mov    %edx,0x4(%esp)
084a74e4 +0x14cc:  mov    %eax,(%esp)
084a74e7 +0x14cf:  call   080dddbc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x905>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x905
084a74ec +0x14d4:  mov    %eax,-0xc(%ebp)
084a74ef +0x14d7:  mov    0x8(%ebp),%eax
084a74f2 +0x14da:  mov    %eax,(%esp)
084a74f5 +0x14dd:  call   080dd7f2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x33b>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x33b
084a74fa +0x14e2:  mov    %eax,0xc(%esp)
084a74fe +0x14e6:  mov    -0xc(%ebp),%eax
084a7501 +0x14e9:  mov    %eax,0x8(%esp)
084a7505 +0x14ed:  mov    0x14(%ebp),%eax
084a7508 +0x14f0:  mov    %eax,0x4(%esp)
084a750c +0x14f4:  mov    0x10(%ebp),%eax
084a750f +0x14f7:  mov    %eax,(%esp)
084a7512 +0x14fa:  call   0823a89a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xff44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xff44
084a7517 +0x14ff:  mov    %eax,-0xc(%ebp)
084a751a +0x1502:  mov    0x8(%ebp),%eax
084a751d +0x1505:  mov    %eax,(%esp)
084a7520 +0x1508:  call   080dd7f2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x33b>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x33b
084a7525 +0x150d:  mov    %eax,%ebx
084a7527 +0x150f:  mov    0x8(%ebp),%eax
084a752a +0x1512:  mov    0x4(%eax),%esi
084a752d +0x1515:  lea    0xc(%ebp),%eax
084a7530 +0x1518:  mov    %eax,(%esp)
084a7533 +0x151b:  call   080dd868 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x3b1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x3b1
084a7538 +0x1520:  mov    (%eax),%eax
084a753a +0x1522:  mov    %ebx,0xc(%esp)
084a753e +0x1526:  mov    -0xc(%ebp),%edx
084a7541 +0x1529:  mov    %edx,0x8(%esp)
084a7545 +0x152d:  mov    %esi,0x4(%esp)
084a7549 +0x1531:  mov    %eax,(%esp)
084a754c +0x1534:  call   080dddbc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x905>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x905
084a7551 +0x1539:  mov    %eax,-0xc(%ebp)
084a7554 +0x153c:  mov    0x8(%ebp),%eax
084a7557 +0x153f:  mov    %eax,(%esp)
084a755a +0x1542:  call   080dd7f2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x33b>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x33b
084a755f +0x1547:  mov    0x8(%ebp),%edx
084a7562 +0x154a:  mov    0x4(%edx),%ecx
084a7565 +0x154d:  mov    0x8(%ebp),%edx
084a7568 +0x1550:  mov    (%edx),%edx
084a756a +0x1552:  mov    %eax,0x8(%esp)
084a756e +0x1556:  mov    %ecx,0x4(%esp)
084a7572 +0x155a:  mov    %edx,(%esp)
084a7575 +0x155d:  call   080dd7fa <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x343>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x343
084a757a +0x1562:  mov    0x8(%ebp),%eax
084a757d +0x1565:  mov    0x8(%eax),%eax
084a7580 +0x1568:  mov    %eax,%edx
084a7582 +0x156a:  mov    0x8(%ebp),%eax
084a7585 +0x156d:  mov    (%eax),%eax
084a7587 +0x156f:  mov    %edx,%ecx
084a7589 +0x1571:  sub    %eax,%ecx
084a758b +0x1573:  mov    %ecx,%eax
084a758d +0x1575:  sar    $0x3,%eax
084a7590 +0x1578:  mov    %eax,%ecx
084a7592 +0x157a:  mov    0x8(%ebp),%eax
084a7595 +0x157d:  mov    (%eax),%edx
084a7597 +0x157f:  mov    0x8(%ebp),%eax
084a759a +0x1582:  mov    %ecx,0x8(%esp)
084a759e +0x1586:  mov    %edx,0x4(%esp)
084a75a2 +0x158a:  mov    %eax,(%esp)
084a75a5 +0x158d:  call   080dd830 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x379>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x379
084a75aa +0x1592:  mov    0x8(%ebp),%eax
084a75ad +0x1595:  mov    -0x10(%ebp),%edx
084a75b0 +0x1598:  mov    %edx,(%eax)
084a75b2 +0x159a:  mov    0x8(%ebp),%eax
084a75b5 +0x159d:  mov    -0xc(%ebp),%edx
084a75b8 +0x15a0:  mov    %edx,0x4(%eax)
084a75bb +0x15a3:  mov    -0x14(%ebp),%eax
084a75be +0x15a6:  shl    $0x3,%eax
084a75c1 +0x15a9:  mov    %eax,%edx
084a75c3 +0x15ab:  add    -0x10(%ebp),%edx
084a75c6 +0x15ae:  mov    0x8(%ebp),%eax
084a75c9 +0x15b1:  mov    %edx,0x8(%eax)
084a75cc +0x15b4:  jmp    084a762a <+0x1612>
084a75ce +0x15b6:  mov    %eax,(%esp)
084a75d1 +0x15b9:  call   08725ce0 <__cxa_begin_catch>
084a75d6 +0x15be:  mov    0x8(%ebp),%eax
084a75d9 +0x15c1:  mov    %eax,(%esp)
084a75dc +0x15c4:  call   080dd7f2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x33b>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x33b
084a75e1 +0x15c9:  mov    %eax,0x8(%esp)
084a75e5 +0x15cd:  mov    -0xc(%ebp),%eax
084a75e8 +0x15d0:  mov    %eax,0x4(%esp)
084a75ec +0x15d4:  mov    -0x10(%ebp),%eax
084a75ef +0x15d7:  mov    %eax,(%esp)
084a75f2 +0x15da:  call   080dd7fa <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x343>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x343
084a75f7 +0x15df:  mov    0x8(%ebp),%eax
084a75fa +0x15e2:  mov    -0x14(%ebp),%edx
084a75fd +0x15e5:  mov    %edx,0x8(%esp)
084a7601 +0x15e9:  mov    -0x10(%ebp),%edx
084a7604 +0x15ec:  mov    %edx,0x4(%esp)
084a7608 +0x15f0:  mov    %eax,(%esp)
084a760b +0x15f3:  call   080dd830 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x379>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x379
084a7610 +0x15f8:  call   08724be0 <__cxa_rethrow>
084a7615 +0x15fd:  mov    %edx,%ebx
084a7617 +0x15ff:  mov    %eax,%esi
084a7619 +0x1601:  call   08725c30 <__cxa_end_catch>
084a761e +0x1606:  mov    %esi,%eax
084a7620 +0x1608:  mov    %ebx,%edx
084a7622 +0x160a:  mov    %eax,(%esp)
084a7625 +0x160d:  call   08ae3750 <_Unwind_Resume>
084a762a +0x1612:  lea    -0x8(%ebp),%esp
084a762d +0x1615:  add    $0x0,%esp
084a7630 +0x1618:  pop    %ebx
084a7631 +0x1619:  pop    %esi
084a7632 +0x161a:  pop    %ebp
084a7633 +0x161b:  ret
084a7634 +0x161c:  push   %ebp
084a7635 +0x161d:  mov    %esp,%ebp
084a7637 +0x161f:  mov    0x8(%ebp),%eax
084a763a +0x1622:  pop    %ebp
084a763b +0x1623:  ret
084a763c +0x1624:  push   %ebp
084a763d +0x1625:  mov    %esp,%ebp
084a763f +0x1627:  pop    %ebp
084a7640 +0x1628:  ret
084a7641 +0x1629:  nop
084a7642 +0x162a:  push   %ebp
084a7643 +0x162b:  mov    %esp,%ebp
084a7645 +0x162d:  sub    $0x18,%esp
084a7648 +0x1630:  mov    0xc(%ebp),%eax
084a764b +0x1633:  mov    %eax,(%esp)
084a764e +0x1636:  call   084a763c <+0x1624>
084a7653 +0x163b:  leave
084a7654 +0x163c:  ret
084a7655 +0x163d:  nop
084a7656 +0x163e:  push   %ebp
084a7657 +0x163f:  mov    %esp,%ebp
084a7659 +0x1641:  sub    $0x18,%esp
084a765c +0x1644:  mov    0x8(%ebp),%eax
084a765f +0x1647:  movl   $0x1,0x8(%esp)
084a7667 +0x164f:  mov    0xc(%ebp),%edx
084a766a +0x1652:  mov    %edx,0x4(%esp)
084a766e +0x1656:  mov    %eax,(%esp)
084a7671 +0x1659:  call   084a7bc6 <+0x1bae>
084a7676 +0x165e:  leave
084a7677 +0x165f:  ret
084a7678 +0x1660:  push   %ebp
084a7679 +0x1661:  mov    %esp,%ebp
084a767b +0x1663:  sub    $0x18,%esp
084a767e +0x1666:  mov    0x8(%ebp),%eax
084a7681 +0x1669:  mov    %eax,(%esp)
084a7684 +0x166c:  call   084a7bda <+0x1bc2>
084a7689 +0x1671:  mov    0x8(%ebp),%eax
084a768c +0x1674:  movl   $0x0,0x4(%eax)
084a7693 +0x167b:  mov    0x8(%ebp),%eax
084a7696 +0x167e:  movl   $0x0,0x8(%eax)
084a769d +0x1685:  mov    0x8(%ebp),%eax
084a76a0 +0x1688:  movl   $0x0,0xc(%eax)
084a76a7 +0x168f:  mov    0x8(%ebp),%eax
084a76aa +0x1692:  movl   $0x0,0x10(%eax)
084a76b1 +0x1699:  mov    0x8(%ebp),%eax
084a76b4 +0x169c:  movl   $0x0,0x14(%eax)
084a76bb +0x16a3:  mov    0x8(%ebp),%eax
084a76be +0x16a6:  mov    %eax,(%esp)
084a76c1 +0x16a9:  call   084a7bee <+0x1bd6>
084a76c6 +0x16ae:  leave
084a76c7 +0x16af:  ret
084a76c8 +0x16b0:  push   %ebp
084a76c9 +0x16b1:  mov    %esp,%ebp
084a76cb +0x16b3:  pop    %ebp
084a76cc +0x16b4:  ret
084a76cd +0x16b5:  push   %ebp
084a76ce +0x16b6:  mov    %esp,%ebp
084a76d0 +0x16b8:  mov    0x8(%ebp),%eax
084a76d3 +0x16bb:  mov    0xc(%eax),%eax
084a76d6 +0x16be:  pop    %ebp
084a76d7 +0x16bf:  ret
084a76d8 +0x16c0:  push   %ebp
084a76d9 +0x16c1:  mov    %esp,%ebp
084a76db +0x16c3:  mov    0x8(%ebp),%eax
084a76de +0x16c6:  mov    0x8(%eax),%eax
084a76e1 +0x16c9:  pop    %ebp
084a76e2 +0x16ca:  ret
084a76e3 +0x16cb:  nop
084a76e4 +0x16cc:  push   %ebp
084a76e5 +0x16cd:  mov    %esp,%ebp
084a76e7 +0x16cf:  sub    $0x18,%esp
084a76ea +0x16d2:  mov    0x8(%ebp),%eax
084a76ed +0x16d5:  mov    %eax,(%esp)
084a76f0 +0x16d8:  call   084a7c20 <+0x1c08>
084a76f5 +0x16dd:  mov    0xc(%ebp),%edx
084a76f8 +0x16e0:  mov    %edx,0x4(%esp)
084a76fc +0x16e4:  mov    %eax,(%esp)
084a76ff +0x16e7:  call   084a7c2e <+0x1c16>
084a7704 +0x16ec:  mov    0xc(%ebp),%eax
084a7707 +0x16ef:  mov    %eax,0x4(%esp)
084a770b +0x16f3:  mov    0x8(%ebp),%eax
084a770e +0x16f6:  mov    %eax,(%esp)
084a7711 +0x16f9:  call   084a7c42 <+0x1c2a>
084a7716 +0x16fe:  leave
084a7717 +0x16ff:  ret
084a7718 +0x1700:  push   %ebp
084a7719 +0x1701:  mov    %esp,%ebp
084a771b +0x1703:  mov    0x8(%ebp),%eax
084a771e +0x1706:  add    $0x4,%eax
084a7721 +0x1709:  pop    %ebp
084a7722 +0x170a:  ret
084a7723 +0x170b:  nop
084a7724 +0x170c:  push   %ebp
084a7725 +0x170d:  mov    %esp,%ebp
084a7727 +0x170f:  mov    0xc(%ebp),%eax
084a772a +0x1712:  pop    %ebp
084a772b +0x1713:  ret
084a772c +0x1714:  push   %ebp
084a772d +0x1715:  mov    %esp,%ebp
084a772f +0x1717:  sub    $0x28,%esp
084a7732 +0x171a:  mov    0x8(%ebp),%eax
084a7735 +0x171d:  mov    %eax,(%esp)
084a7738 +0x1720:  call   084a7c64 <+0x1c4c>
084a773d +0x1725:  mov    %eax,0x4(%esp)
084a7741 +0x1729:  lea    -0x9(%ebp),%eax
084a7744 +0x172c:  mov    %eax,(%esp)
084a7747 +0x172f:  call   084a7724 <+0x170c>
084a774c +0x1734:  leave
084a774d +0x1735:  ret
084a774e +0x1736:  push   %ebp
084a774f +0x1737:  mov    %esp,%ebp
084a7751 +0x1739:  sub    $0x18,%esp
084a7754 +0x173c:  mov    0x10(%ebp),%eax
084a7757 +0x173f:  mov    %eax,0x4(%esp)
084a775b +0x1743:  mov    0xc(%ebp),%eax
084a775e +0x1746:  mov    %eax,(%esp)
084a7761 +0x1749:  call   084a63f2 <+0x3da>
084a7766 +0x174e:  leave
084a7767 +0x174f:  ret
084a7768 +0x1750:  push   %ebp
084a7769 +0x1751:  mov    %esp,%ebp
084a776b +0x1753:  mov    0xc(%ebp),%edx
084a776e +0x1756:  mov    0x8(%ebp),%eax
084a7771 +0x1759:  mov    %edx,(%eax)
084a7773 +0x175b:  pop    %ebp
084a7774 +0x175c:  ret
084a7775 +0x175d:  nop
084a7776 +0x175e:  push   %ebp
084a7777 +0x175f:  mov    %esp,%ebp
084a7779 +0x1761:  push   %ebx
084a777a +0x1762:  sub    $0x14,%esp
084a777d +0x1765:  mov    0x8(%ebp),%ebx
084a7780 +0x1768:  mov    0xc(%ebp),%eax
084a7783 +0x176b:  mov    0xc(%eax),%eax
084a7786 +0x176e:  mov    %eax,0x4(%esp)
084a778a +0x1772:  mov    %ebx,(%esp)
084a778d +0x1775:  call   084a7768 <+0x1750>
084a7792 +0x177a:  mov    %ebx,%eax
084a7794 +0x177c:  add    $0x14,%esp
084a7797 +0x177f:  pop    %ebx
084a7798 +0x1780:  pop    %ebp
084a7799 +0x1781:  ret    $0x4
084a779c +0x1784:  push   %ebp
084a779d +0x1785:  mov    %esp,%ebp
084a779f +0x1787:  mov    0x8(%ebp),%eax
084a77a2 +0x178a:  mov    (%eax),%edx
084a77a4 +0x178c:  mov    0xc(%ebp),%eax
084a77a7 +0x178f:  mov    (%eax),%eax
084a77a9 +0x1791:  cmp    %eax,%edx
084a77ab +0x1793:  sete   %al
084a77ae +0x1796:  pop    %ebp
084a77af +0x1797:  ret
084a77b0 +0x1798:  push   %ebp
084a77b1 +0x1799:  mov    %esp,%ebp
084a77b3 +0x179b:  push   %esi
084a77b4 +0x179c:  push   %ebx
084a77b5 +0x179d:  sub    $0x20,%esp
084a77b8 +0x17a0:  mov    0x8(%ebp),%esi
084a77bb +0x17a3:  cmpl   $0x0,0x10(%ebp)
084a77bf +0x17a7:  jne    084a7807 <+0x17ef>
084a77c1 +0x17a9:  mov    0xc(%ebp),%eax
084a77c4 +0x17ac:  mov    %eax,(%esp)
084a77c7 +0x17af:  call   084a7718 <+0x1700>
084a77cc +0x17b4:  cmp    0x14(%ebp),%eax
084a77cf +0x17b7:  je     084a7807 <+0x17ef>
084a77d1 +0x17b9:  mov    0x14(%ebp),%eax
084a77d4 +0x17bc:  mov    %eax,(%esp)
084a77d7 +0x17bf:  call   084a78c3 <+0x18ab>
084a77dc +0x17c4:  mov    %eax,%ebx
084a77de +0x17c6:  mov    0x18(%ebp),%eax
084a77e1 +0x17c9:  mov    %eax,0x4(%esp)
084a77e5 +0x17cd:  lea    -0xe(%ebp),%eax
084a77e8 +0x17d0:  mov    %eax,(%esp)
084a77eb +0x17d3:  call   084a7724 <+0x170c>
084a77f0 +0x17d8:  mov    0xc(%ebp),%edx
084a77f3 +0x17db:  mov    %ebx,0x8(%esp)
084a77f7 +0x17df:  mov    %eax,0x4(%esp)
084a77fb +0x17e3:  mov    %edx,(%esp)
084a77fe +0x17e6:  call   084a774e <+0x1736>
084a7803 +0x17eb:  test   %al,%al
084a7805 +0x17ed:  je     084a780e <+0x17f6>
084a7807 +0x17ef:  mov    $0x1,%eax
084a780c +0x17f4:  jmp    084a7813 <+0x17fb>
084a780e +0x17f6:  mov    $0x0,%eax
084a7813 +0x17fb:  mov    %al,-0xd(%ebp)
084a7816 +0x17fe:  mov    0x18(%ebp),%eax
084a7819 +0x1801:  mov    %eax,0x4(%esp)
084a781d +0x1805:  mov    0xc(%ebp),%eax
084a7820 +0x1808:  mov    %eax,(%esp)
084a7823 +0x180b:  call   084a7c70 <+0x1c58>
084a7828 +0x1810:  mov    %eax,-0xc(%ebp)
084a782b +0x1813:  mov    0xc(%ebp),%eax
084a782e +0x1816:  lea    0x4(%eax),%ecx
084a7831 +0x1819:  mov    -0xc(%ebp),%edx
084a7834 +0x181c:  movzbl -0xd(%ebp),%eax
084a7838 +0x1820:  mov    %ecx,0xc(%esp)
084a783c +0x1824:  mov    0x14(%ebp),%ecx
084a783f +0x1827:  mov    %ecx,0x8(%esp)
084a7843 +0x182b:  mov    %edx,0x4(%esp)
084a7847 +0x182f:  mov    %eax,(%esp)
084a784a +0x1832:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
084a784f +0x1837:  mov    0xc(%ebp),%eax
084a7852 +0x183a:  mov    0x14(%eax),%eax
084a7855 +0x183d:  lea    0x1(%eax),%edx
084a7858 +0x1840:  mov    0xc(%ebp),%eax
084a785b +0x1843:  mov    %edx,0x14(%eax)
084a785e +0x1846:  mov    -0xc(%ebp),%eax
084a7861 +0x1849:  mov    %eax,0x4(%esp)
084a7865 +0x184d:  mov    %esi,(%esp)
084a7868 +0x1850:  call   084a7768 <+0x1750>
084a786d +0x1855:  mov    %esi,%eax
084a786f +0x1857:  add    $0x20,%esp
084a7872 +0x185a:  pop    %ebx
084a7873 +0x185b:  pop    %esi
084a7874 +0x185c:  pop    %ebp
084a7875 +0x185d:  ret    $0x4
084a7878 +0x1860:  push   %ebp
084a7879 +0x1861:  mov    %esp,%ebp
084a787b +0x1863:  sub    $0x18,%esp
084a787e +0x1866:  mov    0xc(%ebp),%eax
084a7881 +0x1869:  mov    %eax,(%esp)
084a7884 +0x186c:  call   084a7cf1 <+0x1cd9>
084a7889 +0x1871:  mov    0x8(%ebp),%edx
084a788c +0x1874:  mov    (%eax),%eax
084a788e +0x1876:  mov    %eax,(%edx)
084a7890 +0x1878:  mov    0x10(%ebp),%eax
084a7893 +0x187b:  mov    %eax,(%esp)
084a7896 +0x187e:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
084a789b +0x1883:  movzbl (%eax),%edx
084a789e +0x1886:  mov    0x8(%ebp),%eax
084a78a1 +0x1889:  mov    %dl,0x4(%eax)
084a78a4 +0x188c:  leave
084a78a5 +0x188d:  ret
084a78a6 +0x188e:  push   %ebp
084a78a7 +0x188f:  mov    %esp,%ebp
084a78a9 +0x1891:  sub    $0x18,%esp
084a78ac +0x1894:  mov    0x8(%ebp),%eax
084a78af +0x1897:  mov    (%eax),%eax
084a78b1 +0x1899:  mov    %eax,(%esp)
084a78b4 +0x189c:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
084a78b9 +0x18a1:  mov    0x8(%ebp),%edx
084a78bc +0x18a4:  mov    %eax,(%edx)
084a78be +0x18a6:  mov    0x8(%ebp),%eax
084a78c1 +0x18a9:  leave
084a78c2 +0x18aa:  ret
084a78c3 +0x18ab:  push   %ebp
084a78c4 +0x18ac:  mov    %esp,%ebp
084a78c6 +0x18ae:  sub    $0x28,%esp
084a78c9 +0x18b1:  mov    0x8(%ebp),%eax
084a78cc +0x18b4:  mov    %eax,(%esp)
084a78cf +0x18b7:  call   084a7cf9 <+0x1ce1>
084a78d4 +0x18bc:  mov    %eax,0x4(%esp)
084a78d8 +0x18c0:  lea    -0x9(%ebp),%eax
084a78db +0x18c3:  mov    %eax,(%esp)
084a78de +0x18c6:  call   084a7724 <+0x170c>
084a78e3 +0x18cb:  leave
084a78e4 +0x18cc:  ret
084a78e5 +0x18cd:  nop
084a78e6 +0x18ce:  push   %ebp
084a78e7 +0x18cf:  mov    %esp,%ebp
084a78e9 +0x18d1:  sub    $0x18,%esp
084a78ec +0x18d4:  mov    0xc(%ebp),%eax
084a78ef +0x18d7:  mov    %eax,(%esp)
084a78f2 +0x18da:  call   084a7d04 <+0x1cec>
084a78f7 +0x18df:  mov    0x8(%ebp),%edx
084a78fa +0x18e2:  mov    (%eax),%eax
084a78fc +0x18e4:  mov    %eax,(%edx)
084a78fe +0x18e6:  mov    0x10(%ebp),%eax
084a7901 +0x18e9:  mov    %eax,(%esp)
084a7904 +0x18ec:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
084a7909 +0x18f1:  movzbl (%eax),%edx
084a790c +0x18f4:  mov    0x8(%ebp),%eax
084a790f +0x18f7:  mov    %dl,0x4(%eax)
084a7912 +0x18fa:  leave
084a7913 +0x18fb:  ret
084a7914 +0x18fc:  push   %ebp
084a7915 +0x18fd:  mov    %esp,%ebp
084a7917 +0x18ff:  mov    0x8(%ebp),%eax
084a791a +0x1902:  mov    0xc(%ebp),%edx
084a791d +0x1905:  mov    %edx,(%eax)
084a791f +0x1907:  pop    %ebp
084a7920 +0x1908:  ret
084a7921 +0x1909:  nop
084a7922 +0x190a:  push   %ebp
084a7923 +0x190b:  mov    %esp,%ebp
084a7925 +0x190d:  push   %esi
084a7926 +0x190e:  push   %ebx
084a7927 +0x190f:  sub    $0x20,%esp
084a792a +0x1912:  mov    0x8(%ebp),%eax
084a792d +0x1915:  mov    %eax,(%esp)
084a7930 +0x1918:  call   084a7d0c <+0x1cf4>
084a7935 +0x191d:  mov    %eax,-0xc(%ebp)
084a7938 +0x1920:  mov    0xc(%ebp),%eax
084a793b +0x1923:  mov    %eax,(%esp)
084a793e +0x1926:  call   0807f356 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x426>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x426
084a7943 +0x192b:  mov    %eax,%ebx
084a7945 +0x192d:  mov    0x8(%ebp),%eax
084a7948 +0x1930:  mov    %eax,(%esp)
084a794b +0x1933:  call   084a7634 <+0x161c>
084a7950 +0x1938:  mov    %ebx,0x8(%esp)
084a7954 +0x193c:  mov    -0xc(%ebp),%edx
084a7957 +0x193f:  mov    %edx,0x4(%esp)
084a795b +0x1943:  mov    %eax,(%esp)
084a795e +0x1946:  call   084a7d30 <+0x1d18>
084a7963 +0x194b:  jmp    084a7999 <+0x1981>
084a7965 +0x194d:  mov    %eax,(%esp)
084a7968 +0x1950:  call   08725ce0 <__cxa_begin_catch>
084a796d +0x1955:  mov    0x8(%ebp),%eax
084a7970 +0x1958:  mov    -0xc(%ebp),%edx
084a7973 +0x195b:  mov    %edx,0x4(%esp)
084a7977 +0x195f:  mov    %eax,(%esp)
084a797a +0x1962:  call   084a7656 <+0x163e>
084a797f +0x1967:  call   08724be0 <__cxa_rethrow>
084a7984 +0x196c:  mov    %edx,%ebx
084a7986 +0x196e:  mov    %eax,%esi
084a7988 +0x1970:  call   08725c30 <__cxa_end_catch>
084a798d +0x1975:  mov    %esi,%eax
084a798f +0x1977:  mov    %ebx,%edx
084a7991 +0x1979:  mov    %eax,(%esp)
084a7994 +0x197c:  call   08ae3750 <_Unwind_Resume>
084a7999 +0x1981:  mov    -0xc(%ebp),%eax
084a799c +0x1984:  add    $0x20,%esp
084a799f +0x1987:  pop    %ebx
084a79a0 +0x1988:  pop    %esi
084a79a1 +0x1989:  pop    %ebp
084a79a2 +0x198a:  ret
084a79a3 +0x198b:  nop
084a79a4 +0x198c:  push   %ebp
084a79a5 +0x198d:  mov    %esp,%ebp
084a79a7 +0x198f:  mov    0xc(%ebp),%edx
084a79aa +0x1992:  mov    0x8(%ebp),%eax
084a79ad +0x1995:  mov    %edx,(%eax)
084a79af +0x1997:  pop    %ebp
084a79b0 +0x1998:  ret
084a79b1 +0x1999:  nop
084a79b2 +0x199a:  push   %ebp
084a79b3 +0x199b:  mov    %esp,%ebp
084a79b5 +0x199d:  mov    0x8(%ebp),%eax
084a79b8 +0x19a0:  add    $0xc,%eax
084a79bb +0x19a3:  pop    %ebp
084a79bc +0x19a4:  ret
084a79bd +0x19a5:  nop
084a79be +0x19a6:  push   %ebp
084a79bf +0x19a7:  mov    %esp,%ebp
084a79c1 +0x19a9:  mov    0x8(%ebp),%eax
084a79c4 +0x19ac:  add    $0x8,%eax
084a79c7 +0x19af:  pop    %ebp
084a79c8 +0x19b0:  ret
084a79c9 +0x19b1:  nop
084a79ca +0x19b2:  push   %ebp
084a79cb +0x19b3:  mov    %esp,%ebp
084a79cd +0x19b5:  mov    0x8(%ebp),%eax
084a79d0 +0x19b8:  add    $0x10,%eax
084a79d3 +0x19bb:  pop    %ebp
084a79d4 +0x19bc:  ret
084a79d5 +0x19bd:  nop
084a79d6 +0x19be:  push   %ebp
084a79d7 +0x19bf:  mov    %esp,%ebp
084a79d9 +0x19c1:  push   %ebx
084a79da +0x19c2:  sub    $0x14,%esp
084a79dd +0x19c5:  mov    0x8(%ebp),%ebx
084a79e0 +0x19c8:  jmp    084a7a2e <+0x1a16>
084a79e2 +0x19ca:  mov    0x10(%ebp),%eax
084a79e5 +0x19cd:  mov    %eax,(%esp)
084a79e8 +0x19d0:  call   084a772c <+0x1714>
084a79ed +0x19d5:  mov    0xc(%ebp),%edx
084a79f0 +0x19d8:  mov    0x18(%ebp),%ecx
084a79f3 +0x19db:  mov    %ecx,0x8(%esp)
084a79f7 +0x19df:  mov    %eax,0x4(%esp)
084a79fb +0x19e3:  mov    %edx,(%esp)
084a79fe +0x19e6:  call   084a774e <+0x1736>
084a7a03 +0x19eb:  xor    $0x1,%eax
084a7a06 +0x19ee:  test   %al,%al
084a7a08 +0x19f0:  je     084a7a20 <+0x1a08>
084a7a0a +0x19f2:  mov    0x10(%ebp),%eax
084a7a0d +0x19f5:  mov    %eax,0x14(%ebp)
084a7a10 +0x19f8:  mov    0x10(%ebp),%eax
084a7a13 +0x19fb:  mov    %eax,(%esp)
084a7a16 +0x19fe:  call   084a76d8 <+0x16c0>
084a7a1b +0x1a03:  mov    %eax,0x10(%ebp)
084a7a1e +0x1a06:  jmp    084a7a2e <+0x1a16>
084a7a20 +0x1a08:  mov    0x10(%ebp),%eax
084a7a23 +0x1a0b:  mov    %eax,(%esp)
084a7a26 +0x1a0e:  call   084a76cd <+0x16b5>
084a7a2b +0x1a13:  mov    %eax,0x10(%ebp)
084a7a2e +0x1a16:  cmpl   $0x0,0x10(%ebp)
084a7a32 +0x1a1a:  setne  %al
084a7a35 +0x1a1d:  test   %al,%al
084a7a37 +0x1a1f:  jne    084a79e2 <+0x19ca>
084a7a39 +0x1a21:  mov    0x14(%ebp),%eax
084a7a3c +0x1a24:  mov    %eax,0x4(%esp)
084a7a40 +0x1a28:  mov    %ebx,(%esp)
084a7a43 +0x1a2b:  call   084a7768 <+0x1750>
084a7a48 +0x1a30:  mov    %ebx,%eax
084a7a4a +0x1a32:  add    $0x14,%esp
084a7a4d +0x1a35:  pop    %ebx
084a7a4e +0x1a36:  pop    %ebp
084a7a4f +0x1a37:  ret    $0x4
084a7a52 +0x1a3a:  push   %ebp
084a7a53 +0x1a3b:  mov    %esp,%ebp
084a7a55 +0x1a3d:  push   %esi
084a7a56 +0x1a3e:  push   %ebx
084a7a57 +0x1a3f:  sub    $0x20,%esp
084a7a5a +0x1a42:  mov    0x8(%ebp),%eax
084a7a5d +0x1a45:  mov    %eax,(%esp)
084a7a60 +0x1a48:  call   084a7d0c <+0x1cf4>
084a7a65 +0x1a4d:  mov    %eax,-0xc(%ebp)
084a7a68 +0x1a50:  mov    0xc(%ebp),%eax
084a7a6b +0x1a53:  mov    %eax,(%esp)
084a7a6e +0x1a56:  call   0807f54c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x61c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x61c
084a7a73 +0x1a5b:  movzbl (%eax),%eax
084a7a76 +0x1a5e:  mov    %al,-0xd(%ebp)
084a7a79 +0x1a61:  mov    0x8(%ebp),%eax
084a7a7c +0x1a64:  mov    %eax,(%esp)
084a7a7f +0x1a67:  call   084a7634 <+0x161c>
084a7a84 +0x1a6c:  lea    -0xd(%ebp),%edx
084a7a87 +0x1a6f:  mov    %edx,0x8(%esp)
084a7a8b +0x1a73:  mov    -0xc(%ebp),%edx
084a7a8e +0x1a76:  mov    %edx,0x4(%esp)
084a7a92 +0x1a7a:  mov    %eax,(%esp)
084a7a95 +0x1a7d:  call   084a7d70 <+0x1d58>
084a7a9a +0x1a82:  jmp    084a7ad0 <+0x1ab8>
084a7a9c +0x1a84:  mov    %eax,(%esp)
084a7a9f +0x1a87:  call   08725ce0 <__cxa_begin_catch>
084a7aa4 +0x1a8c:  mov    0x8(%ebp),%eax
084a7aa7 +0x1a8f:  mov    -0xc(%ebp),%edx
084a7aaa +0x1a92:  mov    %edx,0x4(%esp)
084a7aae +0x1a96:  mov    %eax,(%esp)
084a7ab1 +0x1a99:  call   084a7656 <+0x163e>
084a7ab6 +0x1a9e:  call   08724be0 <__cxa_rethrow>
084a7abb +0x1aa3:  mov    %edx,%ebx
084a7abd +0x1aa5:  mov    %eax,%esi
084a7abf +0x1aa7:  call   08725c30 <__cxa_end_catch>
084a7ac4 +0x1aac:  mov    %esi,%eax
084a7ac6 +0x1aae:  mov    %ebx,%edx
084a7ac8 +0x1ab0:  mov    %eax,(%esp)
084a7acb +0x1ab3:  call   08ae3750 <_Unwind_Resume>
084a7ad0 +0x1ab8:  mov    -0xc(%ebp),%eax
084a7ad3 +0x1abb:  add    $0x20,%esp
084a7ad6 +0x1abe:  pop    %ebx
084a7ad7 +0x1abf:  pop    %esi
084a7ad8 +0x1ac0:  pop    %ebp
084a7ad9 +0x1ac1:  ret
084a7ada +0x1ac2:  push   %ebp
084a7adb +0x1ac3:  mov    %esp,%ebp
084a7add +0x1ac5:  mov    0x8(%ebp),%eax
084a7ae0 +0x1ac8:  pop    %ebp
084a7ae1 +0x1ac9:  ret    $0x4
084a7ae4 +0x1acc:  push   %ebp
084a7ae5 +0x1acd:  mov    %esp,%ebp
084a7ae7 +0x1acf:  sub    $0x28,%esp
084a7aea +0x1ad2:  movl   $0x0,-0xc(%ebp)
084a7af1 +0x1ad9:  jmp    084a7b02 <+0x1aea>
084a7af3 +0x1adb:  lea    0x8(%ebp),%eax
084a7af6 +0x1ade:  mov    %eax,(%esp)
084a7af9 +0x1ae1:  call   084a67d0 <+0x7b8>
084a7afe +0x1ae6:  addl   $0x1,-0xc(%ebp)
084a7b02 +0x1aea:  lea    0xc(%ebp),%eax
084a7b05 +0x1aed:  mov    %eax,0x4(%esp)
084a7b09 +0x1af1:  lea    0x8(%ebp),%eax
084a7b0c +0x1af4:  mov    %eax,(%esp)
084a7b0f +0x1af7:  call   084a67bc <+0x7a4>
084a7b14 +0x1afc:  test   %al,%al
084a7b16 +0x1afe:  jne    084a7af3 <+0x1adb>
084a7b18 +0x1b00:  mov    -0xc(%ebp),%eax
084a7b1b +0x1b03:  leave
084a7b1c +0x1b04:  ret
084a7b1d +0x1b05:  push   %ebp
084a7b1e +0x1b06:  mov    %esp,%ebp
084a7b20 +0x1b08:  sub    $0x28,%esp
084a7b23 +0x1b0b:  mov    0x8(%ebp),%eax
084a7b26 +0x1b0e:  mov    %eax,(%esp)
084a7b29 +0x1b11:  call   084a7db6 <+0x1d9e>
084a7b2e +0x1b16:  mov    %eax,0x4(%esp)
084a7b32 +0x1b1a:  lea    -0x9(%ebp),%eax
084a7b35 +0x1b1d:  mov    %eax,(%esp)
084a7b38 +0x1b20:  call   084a7b4a <+0x1b32>
084a7b3d +0x1b25:  leave
084a7b3e +0x1b26:  ret
084a7b3f +0x1b27:  push   %ebp
084a7b40 +0x1b28:  mov    %esp,%ebp
084a7b42 +0x1b2a:  mov    0x8(%ebp),%eax
084a7b45 +0x1b2d:  add    $0x10,%eax
084a7b48 +0x1b30:  pop    %ebp
084a7b49 +0x1b31:  ret
084a7b4a +0x1b32:  push   %ebp
084a7b4b +0x1b33:  mov    %esp,%ebp
084a7b4d +0x1b35:  mov    0xc(%ebp),%eax
084a7b50 +0x1b38:  pop    %ebp
084a7b51 +0x1b39:  ret
084a7b52 +0x1b3a:  push   %ebp
084a7b53 +0x1b3b:  mov    %esp,%ebp
084a7b55 +0x1b3d:  push   %ebx
084a7b56 +0x1b3e:  sub    $0x24,%esp
084a7b59 +0x1b41:  lea    -0x9(%ebp),%eax
084a7b5c +0x1b44:  lea    0x8(%ebp),%edx
084a7b5f +0x1b47:  mov    %edx,0x4(%esp)
084a7b63 +0x1b4b:  mov    %eax,(%esp)
084a7b66 +0x1b4e:  call   0823b606 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x6784>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x6784
084a7b6b +0x1b53:  sub    $0x4,%esp
084a7b6e +0x1b56:  mov    %bl,0x8(%esp)
084a7b72 +0x1b5a:  mov    0xc(%ebp),%eax
084a7b75 +0x1b5d:  mov    %eax,0x4(%esp)
084a7b79 +0x1b61:  mov    0x8(%ebp),%eax
084a7b7c +0x1b64:  mov    %eax,(%esp)
084a7b7f +0x1b67:  call   084a7dc1 <+0x1da9>
084a7b84 +0x1b6c:  mov    -0x4(%ebp),%ebx
084a7b87 +0x1b6f:  leave
084a7b88 +0x1b70:  ret
084a7b89 +0x1b71:  push   %ebp
084a7b8a +0x1b72:  mov    %esp,%ebp
084a7b8c +0x1b74:  push   %ebx
084a7b8d +0x1b75:  sub    $0x24,%esp
084a7b90 +0x1b78:  mov    0xc(%ebp),%eax
084a7b93 +0x1b7b:  mov    %eax,-0xc(%ebp)
084a7b96 +0x1b7e:  lea    -0xd(%ebp),%eax
084a7b99 +0x1b81:  mov    0x8(%ebp),%edx
084a7b9c +0x1b84:  mov    %edx,0x4(%esp)
084a7ba0 +0x1b88:  mov    %eax,(%esp)
084a7ba3 +0x1b8b:  call   0823b606 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x6784>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x6784
084a7ba8 +0x1b90:  sub    $0x4,%esp
084a7bab +0x1b93:  mov    %bl,0x8(%esp)
084a7baf +0x1b97:  mov    -0xc(%ebp),%eax
084a7bb2 +0x1b9a:  mov    %eax,0x4(%esp)
084a7bb6 +0x1b9e:  mov    0x8(%ebp),%eax
084a7bb9 +0x1ba1:  mov    %eax,(%esp)
084a7bbc +0x1ba4:  call   084a7ddb <+0x1dc3>
084a7bc1 +0x1ba9:  mov    -0x4(%ebp),%ebx
084a7bc4 +0x1bac:  leave
084a7bc5 +0x1bad:  ret
084a7bc6 +0x1bae:  push   %ebp
084a7bc7 +0x1baf:  mov    %esp,%ebp
084a7bc9 +0x1bb1:  sub    $0x18,%esp
084a7bcc +0x1bb4:  mov    0xc(%ebp),%eax
084a7bcf +0x1bb7:  mov    %eax,(%esp)
084a7bd2 +0x1bba:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a7bd7 +0x1bbf:  leave
084a7bd8 +0x1bc0:  ret
084a7bd9 +0x1bc1:  nop
084a7bda +0x1bc2:  push   %ebp
084a7bdb +0x1bc3:  mov    %esp,%ebp
084a7bdd +0x1bc5:  sub    $0x18,%esp
084a7be0 +0x1bc8:  mov    0x8(%ebp),%eax
084a7be3 +0x1bcb:  mov    %eax,(%esp)
084a7be6 +0x1bce:  call   084a7df6 <+0x1dde>
084a7beb +0x1bd3:  leave
084a7bec +0x1bd4:  ret
084a7bed +0x1bd5:  nop
084a7bee +0x1bd6:  push   %ebp
084a7bef +0x1bd7:  mov    %esp,%ebp
084a7bf1 +0x1bd9:  mov    0x8(%ebp),%eax
084a7bf4 +0x1bdc:  movl   $0x0,0x4(%eax)
084a7bfb +0x1be3:  mov    0x8(%ebp),%eax
084a7bfe +0x1be6:  movl   $0x0,0x8(%eax)
084a7c05 +0x1bed:  mov    0x8(%ebp),%eax
084a7c08 +0x1bf0:  lea    0x4(%eax),%edx
084a7c0b +0x1bf3:  mov    0x8(%ebp),%eax
084a7c0e +0x1bf6:  mov    %edx,0xc(%eax)
084a7c11 +0x1bf9:  mov    0x8(%ebp),%eax
084a7c14 +0x1bfc:  lea    0x4(%eax),%edx
084a7c17 +0x1bff:  mov    0x8(%ebp),%eax
084a7c1a +0x1c02:  mov    %edx,0x10(%eax)
084a7c1d +0x1c05:  pop    %ebp
084a7c1e +0x1c06:  ret
084a7c1f +0x1c07:  nop
084a7c20 +0x1c08:  push   %ebp
084a7c21 +0x1c09:  mov    %esp,%ebp
084a7c23 +0x1c0b:  mov    0x8(%ebp),%eax
084a7c26 +0x1c0e:  pop    %ebp
084a7c27 +0x1c0f:  ret
084a7c28 +0x1c10:  push   %ebp
084a7c29 +0x1c11:  mov    %esp,%ebp
084a7c2b +0x1c13:  pop    %ebp
084a7c2c +0x1c14:  ret
084a7c2d +0x1c15:  nop
084a7c2e +0x1c16:  push   %ebp
084a7c2f +0x1c17:  mov    %esp,%ebp
084a7c31 +0x1c19:  sub    $0x18,%esp
084a7c34 +0x1c1c:  mov    0xc(%ebp),%eax
084a7c37 +0x1c1f:  mov    %eax,(%esp)
084a7c3a +0x1c22:  call   084a7c28 <+0x1c10>
084a7c3f +0x1c27:  leave
084a7c40 +0x1c28:  ret
084a7c41 +0x1c29:  nop
084a7c42 +0x1c2a:  push   %ebp
084a7c43 +0x1c2b:  mov    %esp,%ebp
084a7c45 +0x1c2d:  sub    $0x18,%esp
084a7c48 +0x1c30:  mov    0x8(%ebp),%eax
084a7c4b +0x1c33:  movl   $0x1,0x8(%esp)
084a7c53 +0x1c3b:  mov    0xc(%ebp),%edx
084a7c56 +0x1c3e:  mov    %edx,0x4(%esp)
084a7c5a +0x1c42:  mov    %eax,(%esp)
084a7c5d +0x1c45:  call   084a7dfc <+0x1de4>
084a7c62 +0x1c4a:  leave
084a7c63 +0x1c4b:  ret
084a7c64 +0x1c4c:  push   %ebp
084a7c65 +0x1c4d:  mov    %esp,%ebp
084a7c67 +0x1c4f:  mov    0x8(%ebp),%eax
084a7c6a +0x1c52:  add    $0x10,%eax
084a7c6d +0x1c55:  pop    %ebp
084a7c6e +0x1c56:  ret
084a7c6f +0x1c57:  nop
084a7c70 +0x1c58:  push   %ebp
084a7c71 +0x1c59:  mov    %esp,%ebp
084a7c73 +0x1c5b:  push   %esi
084a7c74 +0x1c5c:  push   %ebx
084a7c75 +0x1c5d:  sub    $0x20,%esp
084a7c78 +0x1c60:  mov    0x8(%ebp),%eax
084a7c7b +0x1c63:  mov    %eax,(%esp)
084a7c7e +0x1c66:  call   084a7e10 <+0x1df8>
084a7c83 +0x1c6b:  mov    %eax,-0xc(%ebp)
084a7c86 +0x1c6e:  mov    0xc(%ebp),%eax
084a7c89 +0x1c71:  mov    %eax,(%esp)
084a7c8c +0x1c74:  call   084a7e33 <+0x1e1b>
084a7c91 +0x1c79:  mov    %eax,%ebx
084a7c93 +0x1c7b:  mov    0x8(%ebp),%eax
084a7c96 +0x1c7e:  mov    %eax,(%esp)
084a7c99 +0x1c81:  call   084a7c20 <+0x1c08>
084a7c9e +0x1c86:  mov    %ebx,0x8(%esp)
084a7ca2 +0x1c8a:  mov    -0xc(%ebp),%edx
084a7ca5 +0x1c8d:  mov    %edx,0x4(%esp)
084a7ca9 +0x1c91:  mov    %eax,(%esp)
084a7cac +0x1c94:  call   084a7e3c <+0x1e24>
084a7cb1 +0x1c99:  jmp    084a7ce7 <+0x1ccf>
084a7cb3 +0x1c9b:  mov    %eax,(%esp)
084a7cb6 +0x1c9e:  call   08725ce0 <__cxa_begin_catch>
084a7cbb +0x1ca3:  mov    -0xc(%ebp),%eax
084a7cbe +0x1ca6:  mov    %eax,0x4(%esp)
084a7cc2 +0x1caa:  mov    0x8(%ebp),%eax
084a7cc5 +0x1cad:  mov    %eax,(%esp)
084a7cc8 +0x1cb0:  call   084a7c42 <+0x1c2a>
084a7ccd +0x1cb5:  call   08724be0 <__cxa_rethrow>
084a7cd2 +0x1cba:  mov    %edx,%ebx
084a7cd4 +0x1cbc:  mov    %eax,%esi
084a7cd6 +0x1cbe:  call   08725c30 <__cxa_end_catch>
084a7cdb +0x1cc3:  mov    %esi,%eax
084a7cdd +0x1cc5:  mov    %ebx,%edx
084a7cdf +0x1cc7:  mov    %eax,(%esp)
084a7ce2 +0x1cca:  call   08ae3750 <_Unwind_Resume>
084a7ce7 +0x1ccf:  mov    -0xc(%ebp),%eax
084a7cea +0x1cd2:  add    $0x20,%esp
084a7ced +0x1cd5:  pop    %ebx
084a7cee +0x1cd6:  pop    %esi
084a7cef +0x1cd7:  pop    %ebp
084a7cf0 +0x1cd8:  ret
084a7cf1 +0x1cd9:  push   %ebp
084a7cf2 +0x1cda:  mov    %esp,%ebp
084a7cf4 +0x1cdc:  mov    0x8(%ebp),%eax
084a7cf7 +0x1cdf:  pop    %ebp
084a7cf8 +0x1ce0:  ret
084a7cf9 +0x1ce1:  push   %ebp
084a7cfa +0x1ce2:  mov    %esp,%ebp
084a7cfc +0x1ce4:  mov    0x8(%ebp),%eax
084a7cff +0x1ce7:  add    $0x10,%eax
084a7d02 +0x1cea:  pop    %ebp
084a7d03 +0x1ceb:  ret
084a7d04 +0x1cec:  push   %ebp
084a7d05 +0x1ced:  mov    %esp,%ebp
084a7d07 +0x1cef:  mov    0x8(%ebp),%eax
084a7d0a +0x1cf2:  pop    %ebp
084a7d0b +0x1cf3:  ret
084a7d0c +0x1cf4:  push   %ebp
084a7d0d +0x1cf5:  mov    %esp,%ebp
084a7d0f +0x1cf7:  sub    $0x18,%esp
084a7d12 +0x1cfa:  mov    0x8(%ebp),%eax
084a7d15 +0x1cfd:  movl   $0x0,0x8(%esp)
084a7d1d +0x1d05:  movl   $0x1,0x4(%esp)
084a7d25 +0x1d0d:  mov    %eax,(%esp)
084a7d28 +0x1d10:  call   084a7e7c <+0x1e64>
084a7d2d +0x1d15:  leave
084a7d2e +0x1d16:  ret
084a7d2f +0x1d17:  nop
084a7d30 +0x1d18:  push   %ebp
084a7d31 +0x1d19:  mov    %esp,%ebp
084a7d33 +0x1d1b:  push   %ebx
084a7d34 +0x1d1c:  sub    $0x14,%esp
084a7d37 +0x1d1f:  mov    0x10(%ebp),%eax
084a7d3a +0x1d22:  mov    %eax,(%esp)
084a7d3d +0x1d25:  call   0807f356 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x426>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x426
084a7d42 +0x1d2a:  mov    %eax,%ebx
084a7d44 +0x1d2c:  mov    0xc(%ebp),%eax
084a7d47 +0x1d2f:  mov    %eax,0x4(%esp)
084a7d4b +0x1d33:  movl   $0xc,(%esp)
084a7d52 +0x1d3a:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
084a7d57 +0x1d3f:  mov    %eax,%edx
084a7d59 +0x1d41:  test   %edx,%edx
084a7d5b +0x1d43:  je     084a7d69 <+0x1d51>
084a7d5d +0x1d45:  mov    %ebx,0x4(%esp)
084a7d61 +0x1d49:  mov    %eax,(%esp)
084a7d64 +0x1d4c:  call   084a7eba <+0x1ea2>
084a7d69 +0x1d51:  add    $0x14,%esp
084a7d6c +0x1d54:  pop    %ebx
084a7d6d +0x1d55:  pop    %ebp
084a7d6e +0x1d56:  ret
084a7d6f +0x1d57:  nop
084a7d70 +0x1d58:  push   %ebp
084a7d71 +0x1d59:  mov    %esp,%ebp
084a7d73 +0x1d5b:  push   %ebx
084a7d74 +0x1d5c:  sub    $0x24,%esp
084a7d77 +0x1d5f:  mov    0x10(%ebp),%eax
084a7d7a +0x1d62:  mov    %eax,(%esp)
084a7d7d +0x1d65:  call   0807f54c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x61c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x61c
084a7d82 +0x1d6a:  movzbl (%eax),%eax
084a7d85 +0x1d6d:  mov    %al,-0x9(%ebp)
084a7d88 +0x1d70:  lea    -0x9(%ebp),%ebx
084a7d8b +0x1d73:  mov    0xc(%ebp),%eax
084a7d8e +0x1d76:  mov    %eax,0x4(%esp)
084a7d92 +0x1d7a:  movl   $0xc,(%esp)
084a7d99 +0x1d81:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
084a7d9e +0x1d86:  mov    %eax,%edx
084a7da0 +0x1d88:  test   %edx,%edx
084a7da2 +0x1d8a:  je     084a7db0 <+0x1d98>
084a7da4 +0x1d8c:  mov    %ebx,0x4(%esp)
084a7da8 +0x1d90:  mov    %eax,(%esp)
084a7dab +0x1d93:  call   084a7eea <+0x1ed2>
084a7db0 +0x1d98:  add    $0x24,%esp
084a7db3 +0x1d9b:  pop    %ebx
084a7db4 +0x1d9c:  pop    %ebp
084a7db5 +0x1d9d:  ret
084a7db6 +0x1d9e:  push   %ebp
084a7db7 +0x1d9f:  mov    %esp,%ebp
084a7db9 +0x1da1:  mov    0x8(%ebp),%eax
084a7dbc +0x1da4:  add    $0x10,%eax
084a7dbf +0x1da7:  pop    %ebp
084a7dc0 +0x1da8:  ret
084a7dc1 +0x1da9:  push   %ebp
084a7dc2 +0x1daa:  mov    %esp,%ebp
084a7dc4 +0x1dac:  sub    $0x18,%esp
084a7dc7 +0x1daf:  lea    0x8(%ebp),%eax
084a7dca +0x1db2:  mov    %eax,0x4(%esp)
084a7dce +0x1db6:  lea    0xc(%ebp),%eax
084a7dd1 +0x1db9:  mov    %eax,(%esp)
084a7dd4 +0x1dbc:  call   0823dc6e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8dec>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8dec
084a7dd9 +0x1dc1:  leave
084a7dda +0x1dc2:  ret
084a7ddb +0x1dc3:  push   %ebp
084a7ddc +0x1dc4:  mov    %esp,%ebp
084a7dde +0x1dc6:  sub    $0x18,%esp
084a7de1 +0x1dc9:  lea    0xc(%ebp),%eax
084a7de4 +0x1dcc:  mov    %eax,0x4(%esp)
084a7de8 +0x1dd0:  mov    0x8(%ebp),%eax
084a7deb +0x1dd3:  mov    %eax,(%esp)
084a7dee +0x1dd6:  call   084a7f1a <+0x1f02>
084a7df3 +0x1ddb:  leave
084a7df4 +0x1ddc:  ret
084a7df5 +0x1ddd:  nop
084a7df6 +0x1dde:  push   %ebp
084a7df7 +0x1ddf:  mov    %esp,%ebp
084a7df9 +0x1de1:  pop    %ebp
084a7dfa +0x1de2:  ret
084a7dfb +0x1de3:  nop
084a7dfc +0x1de4:  push   %ebp
084a7dfd +0x1de5:  mov    %esp,%ebp
084a7dff +0x1de7:  sub    $0x18,%esp
084a7e02 +0x1dea:  mov    0xc(%ebp),%eax
084a7e05 +0x1ded:  mov    %eax,(%esp)
084a7e08 +0x1df0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a7e0d +0x1df5:  leave
084a7e0e +0x1df6:  ret
084a7e0f +0x1df7:  nop
084a7e10 +0x1df8:  push   %ebp
084a7e11 +0x1df9:  mov    %esp,%ebp
084a7e13 +0x1dfb:  sub    $0x18,%esp
084a7e16 +0x1dfe:  mov    0x8(%ebp),%eax
084a7e19 +0x1e01:  movl   $0x0,0x8(%esp)
084a7e21 +0x1e09:  movl   $0x1,0x4(%esp)
084a7e29 +0x1e11:  mov    %eax,(%esp)
084a7e2c +0x1e14:  call   084a7f36 <+0x1f1e>
084a7e31 +0x1e19:  leave
084a7e32 +0x1e1a:  ret
084a7e33 +0x1e1b:  push   %ebp
084a7e34 +0x1e1c:  mov    %esp,%ebp
084a7e36 +0x1e1e:  mov    0x8(%ebp),%eax
084a7e39 +0x1e21:  pop    %ebp
084a7e3a +0x1e22:  ret
084a7e3b +0x1e23:  nop
084a7e3c +0x1e24:  push   %ebp
084a7e3d +0x1e25:  mov    %esp,%ebp
084a7e3f +0x1e27:  push   %ebx
084a7e40 +0x1e28:  sub    $0x14,%esp
084a7e43 +0x1e2b:  mov    0x10(%ebp),%eax
084a7e46 +0x1e2e:  mov    %eax,(%esp)
084a7e49 +0x1e31:  call   084a7e33 <+0x1e1b>
084a7e4e +0x1e36:  mov    %eax,%ebx
084a7e50 +0x1e38:  mov    0xc(%ebp),%eax
084a7e53 +0x1e3b:  mov    %eax,0x4(%esp)
084a7e57 +0x1e3f:  movl   $0x24,(%esp)
084a7e5e +0x1e46:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
084a7e63 +0x1e4b:  mov    %eax,%edx
084a7e65 +0x1e4d:  test   %edx,%edx
084a7e67 +0x1e4f:  je     084a7e75 <+0x1e5d>
084a7e69 +0x1e51:  mov    %ebx,0x4(%esp)
084a7e6d +0x1e55:  mov    %eax,(%esp)
084a7e70 +0x1e58:  call   084a7f76 <+0x1f5e>
084a7e75 +0x1e5d:  add    $0x14,%esp
084a7e78 +0x1e60:  pop    %ebx
084a7e79 +0x1e61:  pop    %ebp
084a7e7a +0x1e62:  ret
084a7e7b +0x1e63:  nop
084a7e7c +0x1e64:  push   %ebp
084a7e7d +0x1e65:  mov    %esp,%ebp
084a7e7f +0x1e67:  sub    $0x18,%esp
084a7e82 +0x1e6a:  mov    0x8(%ebp),%eax
084a7e85 +0x1e6d:  mov    %eax,(%esp)
084a7e88 +0x1e70:  call   084a7fd0 <+0x1fb8>
084a7e8d +0x1e75:  cmp    0xc(%ebp),%eax
084a7e90 +0x1e78:  setb   %al
084a7e93 +0x1e7b:  movzbl %al,%eax
084a7e96 +0x1e7e:  test   %eax,%eax
084a7e98 +0x1e80:  setne  %al
084a7e9b +0x1e83:  test   %al,%al
084a7e9d +0x1e85:  je     084a7ea4 <+0x1e8c>
084a7e9f +0x1e87:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
084a7ea4 +0x1e8c:  mov    0xc(%ebp),%edx
084a7ea7 +0x1e8f:  mov    %edx,%eax
084a7ea9 +0x1e91:  add    %eax,%eax
084a7eab +0x1e93:  add    %edx,%eax
084a7ead +0x1e95:  shl    $0x2,%eax
084a7eb0 +0x1e98:  mov    %eax,(%esp)
084a7eb3 +0x1e9b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
084a7eb8 +0x1ea0:  leave
084a7eb9 +0x1ea1:  ret
084a7eba +0x1ea2:  push   %ebp
084a7ebb +0x1ea3:  mov    %esp,%ebp
084a7ebd +0x1ea5:  sub    $0x18,%esp
084a7ec0 +0x1ea8:  mov    0x8(%ebp),%eax
084a7ec3 +0x1eab:  movl   $0x0,(%eax)
084a7ec9 +0x1eb1:  mov    0x8(%ebp),%eax
084a7ecc +0x1eb4:  movl   $0x0,0x4(%eax)
084a7ed3 +0x1ebb:  mov    0xc(%ebp),%eax
084a7ed6 +0x1ebe:  mov    %eax,(%esp)
084a7ed9 +0x1ec1:  call   0807f356 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x426>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x426
084a7ede +0x1ec6:  movzbl (%eax),%edx
084a7ee1 +0x1ec9:  mov    0x8(%ebp),%eax
084a7ee4 +0x1ecc:  mov    %dl,0x8(%eax)
084a7ee7 +0x1ecf:  leave
084a7ee8 +0x1ed0:  ret
084a7ee9 +0x1ed1:  nop
084a7eea +0x1ed2:  push   %ebp
084a7eeb +0x1ed3:  mov    %esp,%ebp
084a7eed +0x1ed5:  sub    $0x18,%esp
084a7ef0 +0x1ed8:  mov    0x8(%ebp),%eax
084a7ef3 +0x1edb:  movl   $0x0,(%eax)
084a7ef9 +0x1ee1:  mov    0x8(%ebp),%eax
084a7efc +0x1ee4:  movl   $0x0,0x4(%eax)
084a7f03 +0x1eeb:  mov    0xc(%ebp),%eax
084a7f06 +0x1eee:  mov    %eax,(%esp)
084a7f09 +0x1ef1:  call   0807f54c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x61c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x61c
084a7f0e +0x1ef6:  movzbl (%eax),%edx
084a7f11 +0x1ef9:  mov    0x8(%ebp),%eax
084a7f14 +0x1efc:  mov    %dl,0x8(%eax)
084a7f17 +0x1eff:  leave
084a7f18 +0x1f00:  ret
084a7f19 +0x1f01:  nop
084a7f1a +0x1f02:  push   %ebp
084a7f1b +0x1f03:  mov    %esp,%ebp
084a7f1d +0x1f05:  mov    0x8(%ebp),%eax
084a7f20 +0x1f08:  mov    (%eax),%edx
084a7f22 +0x1f0a:  mov    0xc(%ebp),%eax
084a7f25 +0x1f0d:  mov    (%eax),%eax
084a7f27 +0x1f0f:  shl    $0x3,%eax
084a7f2a +0x1f12:  add    %eax,%edx
084a7f2c +0x1f14:  mov    0x8(%ebp),%eax
084a7f2f +0x1f17:  mov    %edx,(%eax)
084a7f31 +0x1f19:  mov    0x8(%ebp),%eax
084a7f34 +0x1f1c:  pop    %ebp
084a7f35 +0x1f1d:  ret
084a7f36 +0x1f1e:  push   %ebp
084a7f37 +0x1f1f:  mov    %esp,%ebp
084a7f39 +0x1f21:  sub    $0x18,%esp
084a7f3c +0x1f24:  mov    0x8(%ebp),%eax
084a7f3f +0x1f27:  mov    %eax,(%esp)
084a7f42 +0x1f2a:  call   084a7fda <+0x1fc2>
084a7f47 +0x1f2f:  cmp    0xc(%ebp),%eax
084a7f4a +0x1f32:  setb   %al
084a7f4d +0x1f35:  movzbl %al,%eax
084a7f50 +0x1f38:  test   %eax,%eax
084a7f52 +0x1f3a:  setne  %al
084a7f55 +0x1f3d:  test   %al,%al
084a7f57 +0x1f3f:  je     084a7f5e <+0x1f46>
084a7f59 +0x1f41:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
084a7f5e +0x1f46:  mov    0xc(%ebp),%edx
084a7f61 +0x1f49:  mov    %edx,%eax
084a7f63 +0x1f4b:  shl    $0x3,%eax
084a7f66 +0x1f4e:  add    %edx,%eax
084a7f68 +0x1f50:  shl    $0x2,%eax
084a7f6b +0x1f53:  mov    %eax,(%esp)
084a7f6e +0x1f56:  call   08724450 <_Znwj>  ; operator new(unsigned int)
084a7f73 +0x1f5b:  leave
084a7f74 +0x1f5c:  ret
084a7f75 +0x1f5d:  nop
084a7f76 +0x1f5e:  push   %ebp
084a7f77 +0x1f5f:  mov    %esp,%ebp
084a7f79 +0x1f61:  sub    $0x18,%esp
084a7f7c +0x1f64:  mov    0x8(%ebp),%eax
084a7f7f +0x1f67:  movl   $0x0,(%eax)
084a7f85 +0x1f6d:  mov    0x8(%ebp),%eax
084a7f88 +0x1f70:  movl   $0x0,0x4(%eax)
084a7f8f +0x1f77:  mov    0x8(%ebp),%eax
084a7f92 +0x1f7a:  movl   $0x0,0x8(%eax)
084a7f99 +0x1f81:  mov    0x8(%ebp),%eax
084a7f9c +0x1f84:  movl   $0x0,0xc(%eax)
084a7fa3 +0x1f8b:  mov    0xc(%ebp),%eax
084a7fa6 +0x1f8e:  mov    %eax,(%esp)
084a7fa9 +0x1f91:  call   084a7e33 <+0x1e1b>
084a7fae +0x1f96:  mov    0x8(%ebp),%edx
084a7fb1 +0x1f99:  mov    (%eax),%ecx
084a7fb3 +0x1f9b:  mov    %ecx,0x10(%edx)
084a7fb6 +0x1f9e:  mov    0x4(%eax),%ecx
084a7fb9 +0x1fa1:  mov    %ecx,0x14(%edx)
084a7fbc +0x1fa4:  mov    0x8(%eax),%ecx
084a7fbf +0x1fa7:  mov    %ecx,0x18(%edx)
084a7fc2 +0x1faa:  mov    0xc(%eax),%ecx
084a7fc5 +0x1fad:  mov    %ecx,0x1c(%edx)
084a7fc8 +0x1fb0:  mov    0x10(%eax),%eax
084a7fcb +0x1fb3:  mov    %eax,0x20(%edx)
084a7fce +0x1fb6:  leave
084a7fcf +0x1fb7:  ret
084a7fd0 +0x1fb8:  push   %ebp
084a7fd1 +0x1fb9:  mov    %esp,%ebp
084a7fd3 +0x1fbb:  mov    $0x15555555,%eax
084a7fd8 +0x1fc0:  pop    %ebp
084a7fd9 +0x1fc1:  ret
084a7fda +0x1fc2:  push   %ebp
084a7fdb +0x1fc3:  mov    %esp,%ebp
084a7fdd +0x1fc5:  mov    $0x71c71c7,%eax
084a7fe2 +0x1fca:  pop    %ebp
084a7fe3 +0x1fcb:  ret
```

## 反编译 C

```c
// <global>::global @ 0x84a6018

/* fair_pvp::CFairPvPScore::CFairPvPScore() */

void fair_pvp::CFairPvPScore::_GLOBAL__I_CFairPvPScore(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
