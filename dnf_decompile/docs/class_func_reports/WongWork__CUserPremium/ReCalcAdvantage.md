# ReCalcAdvantage

`_ZN8WongWork12CUserPremium15ReCalcAdvantageEv`

`WongWork::CUserPremium::ReCalcAdvantage()`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086ae10e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ae10e  _ZN8WongWork12CUserPremium15ReCalcAdvantageEv
#           WongWork::CUserPremium::ReCalcAdvantage()
# range [0x086ae10e, 0x086ae7a7]
086ae10e +0x000:  push   %ebp
086ae10f +0x001:  mov    %esp,%ebp
086ae111 +0x003:  push   %esi
086ae112 +0x004:  push   %ebx
086ae113 +0x005:  sub    $0xb0,%esp
086ae119 +0x00b:  mov    0x8(%ebp),%eax
086ae11c +0x00e:  movw   $0x0,0x850(%eax)
086ae125 +0x017:  mov    0x8(%ebp),%eax
086ae128 +0x01a:  movl   $0x0,0x854(%eax)
086ae132 +0x024:  mov    0x8(%ebp),%eax
086ae135 +0x027:  movl   $0x0,0x858(%eax)
086ae13f +0x031:  mov    0x8(%ebp),%eax
086ae142 +0x034:  movb   $0x0,0x85c(%eax)
086ae149 +0x03b:  mov    0x8(%ebp),%eax
086ae14c +0x03e:  movb   $0x0,0x8bc(%eax)
086ae153 +0x045:  mov    0x8(%ebp),%eax
086ae156 +0x048:  add    $0x864,%eax
086ae15b +0x04d:  movl   $0x58,0x8(%esp)
086ae163 +0x055:  movl   $0x0,0x4(%esp)
086ae16b +0x05d:  mov    %eax,(%esp)
086ae16e +0x060:  call   0807dcc0 <_init+0x5b8>
086ae173 +0x065:  mov    0x8(%ebp),%eax
086ae176 +0x068:  add    $0x8bd,%eax
086ae17b +0x06d:  mov    %eax,(%esp)
086ae17e +0x070:  call   08348268 <_ZN15_Additioal_info5clearEv>  ; _Additioal_info::clear()
086ae183 +0x075:  mov    0x8(%ebp),%eax
086ae186 +0x078:  add    $0x90f,%eax
086ae18b +0x07d:  mov    %eax,(%esp)
086ae18e +0x080:  call   08348268 <_ZN15_Additioal_info5clearEv>  ; _Additioal_info::clear()
086ae193 +0x085:  mov    0x8(%ebp),%eax
086ae196 +0x088:  add    $0x964,%eax
086ae19b +0x08d:  mov    %eax,(%esp)
086ae19e +0x090:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
086ae1a3 +0x095:  mov    0x8(%ebp),%eax
086ae1a6 +0x098:  movw   $0x0,0x85e(%eax)
086ae1af +0x0a1:  mov    0x8(%ebp),%eax
086ae1b2 +0x0a4:  movw   $0x0,0x860(%eax)
086ae1bb +0x0ad:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086ae1c2 +0x0b4:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086ae1c7 +0x0b9:  mov    %eax,-0x3c(%ebp)
086ae1ca +0x0bc:  lea    -0x70(%ebp),%eax
086ae1cd +0x0bf:  mov    %eax,0x4(%esp)
086ae1d1 +0x0c3:  lea    -0x3c(%ebp),%eax
086ae1d4 +0x0c6:  mov    %eax,(%esp)
086ae1d7 +0x0c9:  call   0807e360 <_init+0xc58>
086ae1dc +0x0ce:  movl   $0x1,-0x1c(%ebp)
086ae1e3 +0x0d5:  jmp    086ae78e <+0x680>
086ae1e8 +0x0da:  mov    -0x1c(%ebp),%edx
086ae1eb +0x0dd:  mov    0x8(%ebp),%ecx
086ae1ee +0x0e0:  mov    %edx,%eax
086ae1f0 +0x0e2:  shl    $0x2,%eax
086ae1f3 +0x0e5:  add    %edx,%eax
086ae1f5 +0x0e7:  shl    $0x2,%eax
086ae1f8 +0x0ea:  mov    (%eax,%ecx,1),%eax
086ae1fb +0x0ed:  test   %eax,%eax
086ae1fd +0x0ef:  je     086ae780 <+0x672>
086ae203 +0x0f5:  mov    -0x1c(%ebp),%edx
086ae206 +0x0f8:  mov    0x8(%ebp),%ecx
086ae209 +0x0fb:  mov    %edx,%eax
086ae20b +0x0fd:  shl    $0x2,%eax
086ae20e +0x100:  add    %edx,%eax
086ae210 +0x102:  shl    $0x2,%eax
086ae213 +0x105:  mov    (%eax,%ecx,1),%edx
086ae216 +0x108:  mov    %edx,%eax
086ae218 +0x10a:  shl    $0x3,%eax
086ae21b +0x10d:  add    %edx,%eax
086ae21d +0x10f:  shl    $0x5,%eax
086ae220 +0x112:  mov    &g_SPremiumInfo(%eax),%eax
086ae226 +0x118:  cmp    $0x1,%eax
086ae229 +0x11b:  jne    086ae783 <+0x675>
086ae22f +0x121:  mov    -0x1c(%ebp),%edx
086ae232 +0x124:  mov    0x8(%ebp),%ecx
086ae235 +0x127:  mov    %edx,%eax
086ae237 +0x129:  shl    $0x2,%eax
086ae23a +0x12c:  add    %edx,%eax
086ae23c +0x12e:  shl    $0x2,%eax
086ae23f +0x131:  lea    (%ecx,%eax,1),%eax
086ae242 +0x134:  add    $0x10,%eax
086ae245 +0x137:  mov    (%eax),%eax
086ae247 +0x139:  cmp    $0x2,%eax
086ae24a +0x13c:  je     086ae786 <+0x678>
086ae250 +0x142:  mov    -0x1c(%ebp),%edx
086ae253 +0x145:  mov    0x8(%ebp),%ecx
086ae256 +0x148:  mov    %edx,%eax
086ae258 +0x14a:  shl    $0x2,%eax
086ae25b +0x14d:  add    %edx,%eax
086ae25d +0x14f:  shl    $0x2,%eax
086ae260 +0x152:  mov    (%eax,%ecx,1),%eax
086ae263 +0x155:  mov    -0x70(%ebp),%edx
086ae266 +0x158:  mov    %edx,0x8(%esp)
086ae26a +0x15c:  mov    -0x6c(%ebp),%edx
086ae26d +0x15f:  mov    %edx,0xc(%esp)
086ae271 +0x163:  mov    -0x68(%ebp),%edx
086ae274 +0x166:  mov    %edx,0x10(%esp)
086ae278 +0x16a:  mov    -0x64(%ebp),%edx
086ae27b +0x16d:  mov    %edx,0x14(%esp)
086ae27f +0x171:  mov    -0x60(%ebp),%edx
086ae282 +0x174:  mov    %edx,0x18(%esp)
086ae286 +0x178:  mov    -0x5c(%ebp),%edx
086ae289 +0x17b:  mov    %edx,0x1c(%esp)
086ae28d +0x17f:  mov    -0x58(%ebp),%edx
086ae290 +0x182:  mov    %edx,0x20(%esp)
086ae294 +0x186:  mov    -0x54(%ebp),%edx
086ae297 +0x189:  mov    %edx,0x24(%esp)
086ae29b +0x18d:  mov    -0x50(%ebp),%edx
086ae29e +0x190:  mov    %edx,0x28(%esp)
086ae2a2 +0x194:  mov    -0x4c(%ebp),%edx
086ae2a5 +0x197:  mov    %edx,0x2c(%esp)
086ae2a9 +0x19b:  mov    -0x48(%ebp),%edx
086ae2ac +0x19e:  mov    %edx,0x30(%esp)
086ae2b0 +0x1a2:  mov    %eax,0x4(%esp)
086ae2b4 +0x1a6:  mov    0x8(%ebp),%eax
086ae2b7 +0x1a9:  mov    %eax,(%esp)
086ae2ba +0x1ac:  call   086ae834 <_ZN8WongWork12CUserPremium11_CheckApplyEi2tm>  ; WongWork::CUserPremium::_CheckApply(int, tm)
086ae2bf +0x1b1:  xor    $0x1,%eax
086ae2c2 +0x1b4:  test   %al,%al
086ae2c4 +0x1b6:  jne    086ae789 <+0x67b>
086ae2ca +0x1bc:  mov    -0x1c(%ebp),%edx
086ae2cd +0x1bf:  mov    0x8(%ebp),%ecx
086ae2d0 +0x1c2:  mov    %edx,%eax
086ae2d2 +0x1c4:  shl    $0x2,%eax
086ae2d5 +0x1c7:  add    %edx,%eax
086ae2d7 +0x1c9:  shl    $0x2,%eax
086ae2da +0x1cc:  mov    (%eax,%ecx,1),%edx
086ae2dd +0x1cf:  mov    %edx,%eax
086ae2df +0x1d1:  shl    $0x3,%eax
086ae2e2 +0x1d4:  add    %edx,%eax
086ae2e4 +0x1d6:  shl    $0x5,%eax
086ae2e7 +0x1d9:  movzbl &g_SPremiumInfo+0x40(%eax),%eax
086ae2ee +0x1e0:  test   %al,%al
086ae2f0 +0x1e2:  je     086ae2fc <+0x1ee>
086ae2f2 +0x1e4:  mov    0x8(%ebp),%eax
086ae2f5 +0x1e7:  movb   $0x1,0x85c(%eax)
086ae2fc +0x1ee:  mov    -0x1c(%ebp),%edx
086ae2ff +0x1f1:  mov    0x8(%ebp),%ecx
086ae302 +0x1f4:  mov    %edx,%eax
086ae304 +0x1f6:  shl    $0x2,%eax
086ae307 +0x1f9:  add    %edx,%eax
086ae309 +0x1fb:  shl    $0x2,%eax
086ae30c +0x1fe:  mov    (%eax,%ecx,1),%edx
086ae30f +0x201:  mov    %edx,%eax
086ae311 +0x203:  shl    $0x3,%eax
086ae314 +0x206:  add    %edx,%eax
086ae316 +0x208:  shl    $0x5,%eax
086ae319 +0x20b:  add    $0x50,%eax
086ae31c +0x20e:  add    $&g_SPremiumInfo,%eax
086ae321 +0x213:  lea    0x8(%eax),%edx
086ae324 +0x216:  mov    0x8(%ebp),%eax
086ae327 +0x219:  add    $0x85e,%eax
086ae32c +0x21e:  mov    %edx,0x4(%esp)
086ae330 +0x222:  mov    %eax,(%esp)
086ae333 +0x225:  call   0828718b <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0xc9>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0xc9
086ae338 +0x22a:  movzwl (%eax),%edx
086ae33b +0x22d:  mov    0x8(%ebp),%eax
086ae33e +0x230:  mov    %dx,0x85e(%eax)
086ae345 +0x237:  mov    -0x1c(%ebp),%edx
086ae348 +0x23a:  mov    0x8(%ebp),%ecx
086ae34b +0x23d:  mov    %edx,%eax
086ae34d +0x23f:  shl    $0x2,%eax
086ae350 +0x242:  add    %edx,%eax
086ae352 +0x244:  shl    $0x2,%eax
086ae355 +0x247:  mov    (%eax,%ecx,1),%edx
086ae358 +0x24a:  mov    %edx,%eax
086ae35a +0x24c:  shl    $0x3,%eax
086ae35d +0x24f:  add    %edx,%eax
086ae35f +0x251:  shl    $0x5,%eax
086ae362 +0x254:  add    $0x50,%eax
086ae365 +0x257:  add    $&g_SPremiumInfo,%eax
086ae36a +0x25c:  lea    0xa(%eax),%edx
086ae36d +0x25f:  mov    0x8(%ebp),%eax
086ae370 +0x262:  add    $0x860,%eax
086ae375 +0x267:  mov    %edx,0x4(%esp)
086ae379 +0x26b:  mov    %eax,(%esp)
086ae37c +0x26e:  call   0828718b <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0xc9>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0xc9
086ae381 +0x273:  movzwl (%eax),%edx
086ae384 +0x276:  mov    0x8(%ebp),%eax
086ae387 +0x279:  mov    %dx,0x860(%eax)
086ae38e +0x280:  mov    0x8(%ebp),%eax
086ae391 +0x283:  movzwl 0x850(%eax),%ebx
086ae398 +0x28a:  mov    -0x1c(%ebp),%edx
086ae39b +0x28d:  mov    0x8(%ebp),%ecx
086ae39e +0x290:  mov    %edx,%eax
086ae3a0 +0x292:  shl    $0x2,%eax
086ae3a3 +0x295:  add    %edx,%eax
086ae3a5 +0x297:  shl    $0x2,%eax
086ae3a8 +0x29a:  mov    (%eax,%ecx,1),%edx
086ae3ab +0x29d:  mov    %edx,%eax
086ae3ad +0x29f:  shl    $0x3,%eax
086ae3b0 +0x2a2:  add    %edx,%eax
086ae3b2 +0x2a4:  shl    $0x5,%eax
086ae3b5 +0x2a7:  movzwl &g_SPremiumInfo+0x34(%eax),%eax
086ae3bc +0x2ae:  lea    (%ebx,%eax,1),%edx
086ae3bf +0x2b1:  mov    0x8(%ebp),%eax
086ae3c2 +0x2b4:  mov    %dx,0x850(%eax)
086ae3c9 +0x2bb:  mov    0x8(%ebp),%eax
086ae3cc +0x2be:  mov    0x858(%eax),%ebx
086ae3d2 +0x2c4:  mov    -0x1c(%ebp),%edx
086ae3d5 +0x2c7:  mov    0x8(%ebp),%ecx
086ae3d8 +0x2ca:  mov    %edx,%eax
086ae3da +0x2cc:  shl    $0x2,%eax
086ae3dd +0x2cf:  add    %edx,%eax
086ae3df +0x2d1:  shl    $0x2,%eax
086ae3e2 +0x2d4:  mov    (%eax,%ecx,1),%edx
086ae3e5 +0x2d7:  mov    %edx,%eax
086ae3e7 +0x2d9:  shl    $0x3,%eax
086ae3ea +0x2dc:  add    %edx,%eax
086ae3ec +0x2de:  shl    $0x5,%eax
086ae3ef +0x2e1:  mov    &g_SPremiumInfo+0x3c(%eax),%eax
086ae3f5 +0x2e7:  lea    (%ebx,%eax,1),%edx
086ae3f8 +0x2ea:  mov    0x8(%ebp),%eax
086ae3fb +0x2ed:  mov    %edx,0x858(%eax)
086ae401 +0x2f3:  mov    0x8(%ebp),%eax
086ae404 +0x2f6:  mov    0x854(%eax),%ebx
086ae40a +0x2fc:  mov    -0x1c(%ebp),%edx
086ae40d +0x2ff:  mov    0x8(%ebp),%ecx
086ae410 +0x302:  mov    %edx,%eax
086ae412 +0x304:  shl    $0x2,%eax
086ae415 +0x307:  add    %edx,%eax
086ae417 +0x309:  shl    $0x2,%eax
086ae41a +0x30c:  mov    (%eax,%ecx,1),%edx
086ae41d +0x30f:  mov    %edx,%eax
086ae41f +0x311:  shl    $0x3,%eax
086ae422 +0x314:  add    %edx,%eax
086ae424 +0x316:  shl    $0x5,%eax
086ae427 +0x319:  mov    &g_SPremiumInfo+0x38(%eax),%eax
086ae42d +0x31f:  lea    (%ebx,%eax,1),%edx
086ae430 +0x322:  mov    0x8(%ebp),%eax
086ae433 +0x325:  mov    %edx,0x854(%eax)
086ae439 +0x32b:  mov    -0x1c(%ebp),%edx
086ae43c +0x32e:  mov    0x8(%ebp),%ecx
086ae43f +0x331:  mov    %edx,%eax
086ae441 +0x333:  shl    $0x2,%eax
086ae444 +0x336:  add    %edx,%eax
086ae446 +0x338:  shl    $0x2,%eax
086ae449 +0x33b:  mov    (%eax,%ecx,1),%edx
086ae44c +0x33e:  mov    %edx,%eax
086ae44e +0x340:  shl    $0x3,%eax
086ae451 +0x343:  add    %edx,%eax
086ae453 +0x345:  shl    $0x5,%eax
086ae456 +0x348:  movzbl &g_SPremiumInfo+0x60(%eax),%eax
086ae45d +0x34f:  test   %al,%al
086ae45f +0x351:  je     086ae46b <+0x35d>
086ae461 +0x353:  mov    0x8(%ebp),%eax
086ae464 +0x356:  movb   $0x1,0x8bc(%eax)
086ae46b +0x35d:  movl   $0x0,-0x18(%ebp)
086ae472 +0x364:  jmp    086ae578 <+0x46a>
086ae477 +0x369:  movl   $0x0,-0x14(%ebp)
086ae47e +0x370:  jmp    086ae538 <+0x42a>
086ae483 +0x375:  mov    -0x1c(%ebp),%edx
086ae486 +0x378:  mov    -0x18(%ebp),%ecx
086ae489 +0x37b:  mov    %edx,%eax
086ae48b +0x37d:  shl    $0x3,%eax
086ae48e +0x380:  add    %edx,%eax
086ae490 +0x382:  shl    $0x2,%eax
086ae493 +0x385:  add    %ecx,%eax
086ae495 +0x387:  add    $0xc,%eax
086ae498 +0x38a:  mov    &g_SPremiumInfo+0x8(,%eax,8),%eax
086ae49f +0x391:  mov    %eax,0x4(%esp)
086ae4a3 +0x395:  movl   $&g_vecPremiumOverEquipableInfo,(%esp)
086ae4aa +0x39c:  call   086b09c6 <_GLOBAL__I_g_SPremiumInfo+0x1bc>  ; global constructors keyed to g_SPremiumInfo+0x1bc
086ae4af +0x3a1:  mov    -0x14(%ebp),%edx
086ae4b2 +0x3a4:  mov    0x4(%eax,%edx,4),%eax
086ae4b6 +0x3a8:  mov    %eax,%ebx
086ae4b8 +0x3aa:  mov    -0x1c(%ebp),%edx
086ae4bb +0x3ad:  mov    -0x18(%ebp),%ecx
086ae4be +0x3b0:  mov    %edx,%eax
086ae4c0 +0x3b2:  shl    $0x3,%eax
086ae4c3 +0x3b5:  add    %edx,%eax
086ae4c5 +0x3b7:  shl    $0x2,%eax
086ae4c8 +0x3ba:  add    %ecx,%eax
086ae4ca +0x3bc:  add    $0xc,%eax
086ae4cd +0x3bf:  shl    $0x3,%eax
086ae4d0 +0x3c2:  add    $&g_SPremiumInfo,%eax
086ae4d5 +0x3c7:  lea    0xc(%eax),%esi
086ae4d8 +0x3ca:  mov    -0x1c(%ebp),%edx
086ae4db +0x3cd:  mov    -0x18(%ebp),%ecx
086ae4de +0x3d0:  mov    %edx,%eax
086ae4e0 +0x3d2:  shl    $0x3,%eax
086ae4e3 +0x3d5:  add    %edx,%eax
086ae4e5 +0x3d7:  shl    $0x2,%eax
086ae4e8 +0x3da:  add    %ecx,%eax
086ae4ea +0x3dc:  add    $0xc,%eax
086ae4ed +0x3df:  mov    &g_SPremiumInfo+0x8(,%eax,8),%eax
086ae4f4 +0x3e6:  mov    %eax,0x4(%esp)
086ae4f8 +0x3ea:  movl   $&g_vecPremiumOverEquipableInfo,(%esp)
086ae4ff +0x3f1:  call   086b09c6 <_GLOBAL__I_g_SPremiumInfo+0x1bc>  ; global constructors keyed to g_SPremiumInfo+0x1bc
086ae504 +0x3f6:  mov    -0x14(%ebp),%edx
086ae507 +0x3f9:  mov    0x4(%eax,%edx,4),%eax
086ae50b +0x3fd:  add    $0x218,%eax
086ae510 +0x402:  shl    $0x2,%eax
086ae513 +0x405:  add    0x8(%ebp),%eax
086ae516 +0x408:  add    $0x4,%eax
086ae519 +0x40b:  mov    %esi,0x4(%esp)
086ae51d +0x40f:  mov    %eax,(%esp)
086ae520 +0x412:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
086ae525 +0x417:  mov    (%eax),%edx
086ae527 +0x419:  mov    0x8(%ebp),%eax
086ae52a +0x41c:  lea    0x218(%ebx),%ecx
086ae530 +0x422:  mov    %edx,0x4(%eax,%ecx,4)
086ae534 +0x426:  addl   $0x1,-0x14(%ebp)
086ae538 +0x42a:  mov    -0x1c(%ebp),%edx
086ae53b +0x42d:  mov    -0x18(%ebp),%ecx
086ae53e +0x430:  mov    %edx,%eax
086ae540 +0x432:  shl    $0x3,%eax
086ae543 +0x435:  add    %edx,%eax
086ae545 +0x437:  shl    $0x2,%eax
086ae548 +0x43a:  add    %ecx,%eax
086ae54a +0x43c:  add    $0xc,%eax
086ae54d +0x43f:  mov    &g_SPremiumInfo+0x8(,%eax,8),%eax
086ae554 +0x446:  mov    %eax,0x4(%esp)
086ae558 +0x44a:  movl   $&g_vecPremiumOverEquipableInfo,(%esp)
086ae55f +0x451:  call   086b09c6 <_GLOBAL__I_g_SPremiumInfo+0x1bc>  ; global constructors keyed to g_SPremiumInfo+0x1bc
086ae564 +0x456:  mov    (%eax),%eax
086ae566 +0x458:  cmp    -0x14(%ebp),%eax
086ae569 +0x45b:  setg   %al
086ae56c +0x45e:  test   %al,%al
086ae56e +0x460:  jne    086ae483 <+0x375>
086ae574 +0x466:  addl   $0x1,-0x18(%ebp)
086ae578 +0x46a:  mov    -0x1c(%ebp),%edx
086ae57b +0x46d:  mov    %edx,%eax
086ae57d +0x46f:  shl    $0x3,%eax
086ae580 +0x472:  add    %edx,%eax
086ae582 +0x474:  shl    $0x5,%eax
086ae585 +0x477:  mov    &g_SPremiumInfo+0x64(%eax),%eax
086ae58b +0x47d:  cmp    -0x18(%ebp),%eax
086ae58e +0x480:  setg   %al
086ae591 +0x483:  test   %al,%al
086ae593 +0x485:  jne    086ae477 <+0x369>
086ae599 +0x48b:  movl   $0x0,-0x10(%ebp)
086ae5a0 +0x492:  jmp    086ae71f <+0x611>
086ae5a5 +0x497:  movl   $0x0,-0xc(%ebp)
086ae5ac +0x49e:  jmp    086ae6df <+0x5d1>
086ae5b1 +0x4a3:  mov    -0x1c(%ebp),%edx
086ae5b4 +0x4a6:  mov    -0x10(%ebp),%ecx
086ae5b7 +0x4a9:  mov    %edx,%eax
086ae5b9 +0x4ab:  shl    $0x3,%eax
086ae5bc +0x4ae:  add    %edx,%eax
086ae5be +0x4b0:  shl    $0x2,%eax
086ae5c1 +0x4b3:  add    %ecx,%eax
086ae5c3 +0x4b5:  add    $0x12,%eax
086ae5c6 +0x4b8:  mov    &g_SPremiumInfo+0x4(,%eax,8),%eax
086ae5cd +0x4bf:  mov    %eax,0x4(%esp)
086ae5d1 +0x4c3:  movl   $&g_vecPremiumReturnItemInfo,(%esp)
086ae5d8 +0x4ca:  call   086b09da <_GLOBAL__I_g_SPremiumInfo+0x1d0>  ; global constructors keyed to g_SPremiumInfo+0x1d0
086ae5dd +0x4cf:  mov    -0xc(%ebp),%edx
086ae5e0 +0x4d2:  mov    0x4(%eax,%edx,4),%eax
086ae5e4 +0x4d6:  mov    %eax,-0x40(%ebp)
086ae5e7 +0x4d9:  mov    0x8(%ebp),%eax
086ae5ea +0x4dc:  lea    0x964(%eax),%ecx
086ae5f0 +0x4e2:  lea    -0x44(%ebp),%eax
086ae5f3 +0x4e5:  lea    -0x40(%ebp),%edx
086ae5f6 +0x4e8:  mov    %edx,0x8(%esp)
086ae5fa +0x4ec:  mov    %ecx,0x4(%esp)
086ae5fe +0x4f0:  mov    %eax,(%esp)
086ae601 +0x4f3:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
086ae606 +0x4f8:  sub    $0x4,%esp
086ae609 +0x4fb:  mov    0x8(%ebp),%eax
086ae60c +0x4fe:  lea    0x964(%eax),%edx
086ae612 +0x504:  lea    -0x38(%ebp),%eax
086ae615 +0x507:  mov    %edx,0x4(%esp)
086ae619 +0x50b:  mov    %eax,(%esp)
086ae61c +0x50e:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
086ae621 +0x513:  sub    $0x4,%esp
086ae624 +0x516:  lea    -0x38(%ebp),%eax
086ae627 +0x519:  mov    %eax,0x4(%esp)
086ae62b +0x51d:  lea    -0x44(%ebp),%eax
086ae62e +0x520:  mov    %eax,(%esp)
086ae631 +0x523:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
086ae636 +0x528:  test   %al,%al
086ae638 +0x52a:  je     086ae6a9 <+0x59b>
086ae63a +0x52c:  mov    -0x1c(%ebp),%edx
086ae63d +0x52f:  mov    -0x10(%ebp),%ecx
086ae640 +0x532:  mov    %edx,%eax
086ae642 +0x534:  shl    $0x3,%eax
086ae645 +0x537:  add    %edx,%eax
086ae647 +0x539:  shl    $0x2,%eax
086ae64a +0x53c:  add    %ecx,%eax
086ae64c +0x53e:  add    $0x12,%eax
086ae64f +0x541:  shl    $0x3,%eax
086ae652 +0x544:  add    $&g_SPremiumInfo,%eax
086ae657 +0x549:  lea    0x8(%eax),%edx
086ae65a +0x54c:  lea    -0x24(%ebp),%eax
086ae65d +0x54f:  mov    %edx,0x8(%esp)
086ae661 +0x553:  lea    -0x40(%ebp),%edx
086ae664 +0x556:  mov    %edx,0x4(%esp)
086ae668 +0x55a:  mov    %eax,(%esp)
086ae66b +0x55d:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
086ae670 +0x562:  sub    $0x4,%esp
086ae673 +0x565:  lea    -0x24(%ebp),%eax
086ae676 +0x568:  mov    %eax,0x4(%esp)
086ae67a +0x56c:  lea    -0x2c(%ebp),%eax
086ae67d +0x56f:  mov    %eax,(%esp)
086ae680 +0x572:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
086ae685 +0x577:  mov    0x8(%ebp),%eax
086ae688 +0x57a:  lea    0x964(%eax),%ecx
086ae68e +0x580:  lea    -0x34(%ebp),%eax
086ae691 +0x583:  lea    -0x2c(%ebp),%edx
086ae694 +0x586:  mov    %edx,0x8(%esp)
086ae698 +0x58a:  mov    %ecx,0x4(%esp)
086ae69c +0x58e:  mov    %eax,(%esp)
086ae69f +0x591:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
086ae6a4 +0x596:  sub    $0x4,%esp
086ae6a7 +0x599:  jmp    086ae6db <+0x5cd>
086ae6a9 +0x59b:  lea    -0x44(%ebp),%eax
086ae6ac +0x59e:  mov    %eax,(%esp)
086ae6af +0x5a1:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
086ae6b4 +0x5a6:  mov    %eax,%edx
086ae6b6 +0x5a8:  mov    0x4(%edx),%ebx
086ae6b9 +0x5ab:  mov    -0x1c(%ebp),%ecx
086ae6bc +0x5ae:  mov    -0x10(%ebp),%esi
086ae6bf +0x5b1:  mov    %ecx,%eax
086ae6c1 +0x5b3:  shl    $0x3,%eax
086ae6c4 +0x5b6:  add    %ecx,%eax
086ae6c6 +0x5b8:  shl    $0x2,%eax
086ae6c9 +0x5bb:  add    %esi,%eax
086ae6cb +0x5bd:  add    $0x12,%eax
086ae6ce +0x5c0:  mov    &g_SPremiumInfo+0x8(,%eax,8),%eax
086ae6d5 +0x5c7:  lea    (%ebx,%eax,1),%eax
086ae6d8 +0x5ca:  mov    %eax,0x4(%edx)
086ae6db +0x5cd:  addl   $0x1,-0xc(%ebp)
086ae6df +0x5d1:  mov    -0x1c(%ebp),%edx
086ae6e2 +0x5d4:  mov    -0x10(%ebp),%ecx
086ae6e5 +0x5d7:  mov    %edx,%eax
086ae6e7 +0x5d9:  shl    $0x3,%eax
086ae6ea +0x5dc:  add    %edx,%eax
086ae6ec +0x5de:  shl    $0x2,%eax
086ae6ef +0x5e1:  add    %ecx,%eax
086ae6f1 +0x5e3:  add    $0x12,%eax
086ae6f4 +0x5e6:  mov    &g_SPremiumInfo+0x4(,%eax,8),%eax
086ae6fb +0x5ed:  mov    %eax,0x4(%esp)
086ae6ff +0x5f1:  movl   $&g_vecPremiumReturnItemInfo,(%esp)
086ae706 +0x5f8:  call   086b09da <_GLOBAL__I_g_SPremiumInfo+0x1d0>  ; global constructors keyed to g_SPremiumInfo+0x1d0
086ae70b +0x5fd:  mov    (%eax),%eax
086ae70d +0x5ff:  cmp    -0xc(%ebp),%eax
086ae710 +0x602:  setg   %al
086ae713 +0x605:  test   %al,%al
086ae715 +0x607:  jne    086ae5b1 <+0x4a3>
086ae71b +0x60d:  addl   $0x1,-0x10(%ebp)
086ae71f +0x611:  mov    -0x1c(%ebp),%edx
086ae722 +0x614:  mov    %edx,%eax
086ae724 +0x616:  shl    $0x3,%eax
086ae727 +0x619:  add    %edx,%eax
086ae729 +0x61b:  shl    $0x5,%eax
086ae72c +0x61e:  mov    &g_SPremiumInfo+0x90(%eax),%eax
086ae732 +0x624:  cmp    -0x10(%ebp),%eax
086ae735 +0x627:  setg   %al
086ae738 +0x62a:  test   %al,%al
086ae73a +0x62c:  jne    086ae5a5 <+0x497>
086ae740 +0x632:  mov    -0x1c(%ebp),%edx
086ae743 +0x635:  mov    0x8(%ebp),%ecx
086ae746 +0x638:  mov    %edx,%eax
086ae748 +0x63a:  shl    $0x2,%eax
086ae74b +0x63d:  add    %edx,%eax
086ae74d +0x63f:  shl    $0x2,%eax
086ae750 +0x642:  mov    (%eax,%ecx,1),%edx
086ae753 +0x645:  mov    %edx,%eax
086ae755 +0x647:  shl    $0x3,%eax
086ae758 +0x64a:  add    %edx,%eax
086ae75a +0x64c:  shl    $0x5,%eax
086ae75d +0x64f:  add    $0xc0,%eax
086ae762 +0x654:  add    $&g_SPremiumInfo,%eax
086ae767 +0x659:  lea    0x8(%eax),%edx
086ae76a +0x65c:  mov    0x8(%ebp),%eax
086ae76d +0x65f:  add    $0x8bd,%eax
086ae772 +0x664:  mov    %edx,0x4(%esp)
086ae776 +0x668:  mov    %eax,(%esp)
086ae779 +0x66b:  call   08693cea <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x53f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x53f
086ae77e +0x670:  jmp    086ae78a <+0x67c>
086ae780 +0x672:  nop
086ae781 +0x673:  jmp    086ae78a <+0x67c>
086ae783 +0x675:  nop
086ae784 +0x676:  jmp    086ae78a <+0x67c>
086ae786 +0x678:  nop
086ae787 +0x679:  jmp    086ae78a <+0x67c>
086ae789 +0x67b:  nop
086ae78a +0x67c:  addl   $0x1,-0x1c(%ebp)
086ae78e +0x680:  cmpl   $0x69,-0x1c(%ebp)
086ae792 +0x684:  setle  %al
086ae795 +0x687:  test   %al,%al
086ae797 +0x689:  jne    086ae1e8 <+0xda>
086ae79d +0x68f:  lea    -0x8(%ebp),%esp
086ae7a0 +0x692:  add    $0x0,%esp
086ae7a3 +0x695:  pop    %ebx
086ae7a4 +0x696:  pop    %esi
086ae7a5 +0x697:  pop    %ebp
086ae7a6 +0x698:  ret
086ae7a7 +0x699:  nop
```

## 反编译 C

```c
// WongWork::CUserPremium::ReCalcAdvantage @ 0x86ae10e

/* WongWork::CUserPremium::ReCalcAdvantage() */

void __thiscall WongWork::CUserPremium::ReCalcAdvantage(CUserPremium *this)

{
  tm tVar1;
  char cVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  tm local_74;
  _Rb_tree_iterator<std::pair<int_const,int>> local_48 [4];
  int local_44;
  time_t local_40;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_3c [4];
  pair local_38 [8];
  pair<int_const,int> local_30 [8];
  int local_28 [2];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  *(undefined2 *)(this + 0x850) = 0;
  *(undefined4 *)(this + 0x854) = 0;
  *(undefined4 *)(this + 0x858) = 0;
  this[0x85c] = (CUserPremium)0x0;
  this[0x8bc] = (CUserPremium)0x0;
  memset(this + 0x864,0,0x58);
  _Additioal_info::clear((_Additioal_info *)(this + 0x8bd));
  _Additioal_info::clear((_Additioal_info *)(this + 0x90f));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x964))
  ;
  *(undefined2 *)(this + 0x85e) = 0;
  *(undefined2 *)(this + 0x860) = 0;
  local_40 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_40,&local_74);
  for (local_20 = 1; local_20 < 0x6a; local_20 = local_20 + 1) {
    if ((((*(int *)(this + local_20 * 0x14) != 0) &&
         (*(int *)(g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120) == 1)) &&
        (*(int *)(this + local_20 * 0x14 + 0x10) != 2)) &&
       (tVar1.tm_min = local_74.tm_sec, tVar1.tm_sec = *(undefined4 *)(this + local_20 * 0x14),
       tVar1.tm_hour = local_74.tm_min, tVar1.tm_mday = local_74.tm_hour,
       tVar1.tm_mon = local_74.tm_mday, tVar1.tm_year = local_74.tm_mon,
       tVar1.tm_wday = local_74.tm_year, tVar1.tm_yday = local_74.tm_wday,
       tVar1.tm_isdst = local_74.tm_yday, tVar1.tm_gmtoff = local_74.tm_isdst,
       tVar1.tm_zone = (char *)local_74.tm_gmtoff, cVar2 = _CheckApply((int)this,tVar1),
       cVar2 == '\x01')) {
      if (g_SPremiumInfo[*(int *)(this + local_20 * 0x14) * 0x120 + 0x40] != '\0') {
        this[0x85c] = (CUserPremium)0x1;
      }
      puVar3 = std::max<unsigned_short>
                         ((ushort *)(this + 0x85e),
                          (ushort *)
                          (g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120 + 0x58));
      *(ushort *)(this + 0x85e) = *puVar3;
      puVar3 = std::max<unsigned_short>
                         ((ushort *)(this + 0x860),
                          (ushort *)
                          (g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120 + 0x5a));
      *(ushort *)(this + 0x860) = *puVar3;
      *(short *)(this + 0x850) =
           *(short *)(this + 0x850) +
           *(short *)(g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120 + 0x34);
      *(int *)(this + 0x858) =
           *(int *)(this + 0x858) +
           *(int *)(g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120 + 0x3c);
      *(int *)(this + 0x854) =
           *(int *)(this + 0x854) +
           *(int *)(g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120 + 0x38);
      if (g_SPremiumInfo[*(int *)(this + local_20 * 0x14) * 0x120 + 0x60] != '\0') {
        this[0x8bc] = (CUserPremium)0x1;
      }
      for (local_1c = 0; local_1c < *(int *)(g_SPremiumInfo + local_20 * 0x120 + 100);
          local_1c = local_1c + 1) {
        local_18 = 0;
        while (piVar7 = (int *)std::
                               vector<SPremiumOverEquipableInfo,std::allocator<SPremiumOverEquipableInfo>>
                               ::operator[]((vector<SPremiumOverEquipableInfo,std::allocator<SPremiumOverEquipableInfo>>
                                             *)g_vecPremiumOverEquipableInfo,
                                            *(uint *)(g_SPremiumInfo +
                                                     (local_20 * 0x24 + local_1c + 0xc) * 8 + 8)),
              local_18 < *piVar7) {
          iVar6 = std::vector<SPremiumOverEquipableInfo,std::allocator<SPremiumOverEquipableInfo>>::
                  operator[]((vector<SPremiumOverEquipableInfo,std::allocator<SPremiumOverEquipableInfo>>
                              *)g_vecPremiumOverEquipableInfo,
                             *(uint *)(g_SPremiumInfo + (local_20 * 0x24 + local_1c + 0xc) * 8 + 8))
          ;
          iVar6 = *(int *)(iVar6 + 4 + local_18 * 4);
          iVar4 = local_20 * 0x24 + local_1c;
          iVar5 = std::vector<SPremiumOverEquipableInfo,std::allocator<SPremiumOverEquipableInfo>>::
                  operator[]((vector<SPremiumOverEquipableInfo,std::allocator<SPremiumOverEquipableInfo>>
                              *)g_vecPremiumOverEquipableInfo,
                             *(uint *)(g_SPremiumInfo + (local_20 * 0x24 + local_1c + 0xc) * 8 + 8))
          ;
          piVar7 = std::max<int>((int *)(this + (*(int *)(iVar5 + 4 + local_18 * 4) + 0x218) * 4 + 4
                                        ),(int *)(g_SPremiumInfo + (iVar4 + 0xc) * 8 + 0xc));
          *(int *)(this + (iVar6 + 0x218) * 4 + 4) = *piVar7;
          local_18 = local_18 + 1;
        }
      }
      for (local_14 = 0; local_14 < *(int *)(g_SPremiumInfo + local_20 * 0x120 + 0x90);
          local_14 = local_14 + 1) {
        local_10 = 0;
        while (piVar7 = (int *)std::
                               vector<SPremiumReturnItemInfo,std::allocator<SPremiumReturnItemInfo>>
                               ::operator[]((vector<SPremiumReturnItemInfo,std::allocator<SPremiumReturnItemInfo>>
                                             *)g_vecPremiumReturnItemInfo,
                                            *(uint *)(g_SPremiumInfo +
                                                     (local_20 * 0x24 + local_14 + 0x12) * 8 + 4)),
              local_10 < *piVar7) {
          iVar6 = std::vector<SPremiumReturnItemInfo,std::allocator<SPremiumReturnItemInfo>>::
                  operator[]((vector<SPremiumReturnItemInfo,std::allocator<SPremiumReturnItemInfo>>
                              *)g_vecPremiumReturnItemInfo,
                             *(uint *)(g_SPremiumInfo + (local_20 * 0x24 + local_14 + 0x12) * 8 + 4)
                            );
          local_44 = *(int *)(iVar6 + 4 + local_10 * 4);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    ((int *)local_48);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_3c);
          cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                            (local_48,(_Rb_tree_iterator *)local_3c);
          if (cVar2 == '\0') {
            iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_48);
            *(int *)(iVar6 + 4) =
                 *(int *)(iVar6 + 4) +
                 *(int *)(g_SPremiumInfo + (local_20 * 0x24 + local_14 + 0x12) * 8 + 8);
          }
          else {
            std::make_pair<int&,int&>(local_28,&local_44);
            std::pair<int_const,int>::pair<int,int>(local_30,(pair *)local_28);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_38);
          }
          local_10 = local_10 + 1;
        }
      }
      _Additioal_info::operator+=
                ((_Additioal_info *)(this + 0x8bd),
                 (_Additioal_info *)
                 (g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120 + 200));
    }
  }
  return;
}
```
