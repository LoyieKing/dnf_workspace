# CheckHackAverageHitCount

`_ZN6CParty24CheckHackAverageHitCountEv`

`CParty::CheckHackAverageHitCount()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bb0ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bb0ac  _ZN6CParty24CheckHackAverageHitCountEv
#           CParty::CheckHackAverageHitCount()
# range [0x085bb0ac, 0x085bb5af]
085bb0ac +0x000:  push   %ebp
085bb0ad +0x001:  mov    %esp,%ebp
085bb0af +0x003:  push   %ebx
085bb0b0 +0x004:  sub    $0x94,%esp
085bb0b6 +0x00a:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
085bb0bb +0x00f:  mov    %eax,(%esp)
085bb0be +0x012:  call   082f0f44 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xcc8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xcc8
085bb0c3 +0x017:  test   %al,%al
085bb0c5 +0x019:  jne    085bb59f <+0x4f3>
085bb0cb +0x01f:  mov    0x8(%ebp),%eax
085bb0ce +0x022:  mov    0x1874(%eax),%eax
085bb0d4 +0x028:  cmp    $0x2d,%eax
085bb0d7 +0x02b:  jg     085bb5a2 <+0x4f6>
085bb0dd +0x031:  mov    0x8(%ebp),%eax
085bb0e0 +0x034:  mov    0xcac(%eax),%eax
085bb0e6 +0x03a:  test   %eax,%eax
085bb0e8 +0x03c:  je     085bb113 <+0x67>
085bb0ea +0x03e:  mov    0x8(%ebp),%eax
085bb0ed +0x041:  mov    0xcac(%eax),%eax
085bb0f3 +0x047:  movzbl 0x89c(%eax),%eax
085bb0fa +0x04e:  test   %al,%al
085bb0fc +0x050:  jne    085bb121 <+0x75>
085bb0fe +0x052:  mov    0x8(%ebp),%eax
085bb101 +0x055:  mov    0xcac(%eax),%eax
085bb107 +0x05b:  mov    %eax,(%esp)
085bb10a +0x05e:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085bb10f +0x063:  test   %al,%al
085bb111 +0x065:  jg     085bb121 <+0x75>
085bb113 +0x067:  mov    0x8(%ebp),%eax
085bb116 +0x06a:  mov    0x1874(%eax),%eax
085bb11c +0x070:  cmp    $0x1,%eax
085bb11f +0x073:  jg     085bb128 <+0x7c>
085bb121 +0x075:  mov    $0x1,%eax
085bb126 +0x07a:  jmp    085bb12d <+0x81>
085bb128 +0x07c:  mov    $0x0,%eax
085bb12d +0x081:  test   %al,%al
085bb12f +0x083:  jne    085bb5a5 <+0x4f9>
085bb135 +0x089:  mov    $0x0,%eax
085bb13a +0x08e:  mov    %eax,-0x5c(%ebp)
085bb13d +0x091:  mov    0x8(%ebp),%eax
085bb140 +0x094:  mov    0x1878(%eax),%eax
085bb146 +0x09a:  mov    %eax,-0x6c(%ebp)
085bb149 +0x09d:  fildl  -0x6c(%ebp)
085bb14c +0x0a0:  mov    0x8(%ebp),%eax
085bb14f +0x0a3:  mov    0x1874(%eax),%eax
085bb155 +0x0a9:  mov    %eax,-0x6c(%ebp)
085bb158 +0x0ac:  fildl  -0x6c(%ebp)
085bb15b +0x0af:  fdivrp %st,%st(1)
085bb15d +0x0b1:  fstps  -0x5c(%ebp)
085bb160 +0x0b4:  flds   -0x5c(%ebp)
085bb163 +0x0b7:  flds   "蠱�="
085bb169 +0x0bd:  fmulp  %st,%st(1)
085bb16b +0x0bf:  fstps  -0x58(%ebp)
085bb16e +0x0c2:  flds   -0x5c(%ebp)
085bb171 +0x0c5:  fadds  -0x58(%ebp)
085bb174 +0x0c8:  flds   &data#fb2a4316(.rodata)
085bb17a +0x0ce:  faddp  %st,%st(1)
085bb17c +0x0d0:  fnstcw -0x6e(%ebp)
085bb17f +0x0d3:  movzwl -0x6e(%ebp),%eax
085bb183 +0x0d7:  mov    $0xc,%ah
085bb185 +0x0d9:  mov    %ax,-0x70(%ebp)
085bb189 +0x0dd:  fldcw  -0x70(%ebp)
085bb18c +0x0e0:  fistpl -0x54(%ebp)
085bb18f +0x0e3:  fldcw  -0x6e(%ebp)
085bb192 +0x0e6:  flds   -0x5c(%ebp)
085bb195 +0x0e9:  fsubs  -0x58(%ebp)
085bb198 +0x0ec:  fldcw  -0x70(%ebp)
085bb19b +0x0ef:  fistpl -0x50(%ebp)
085bb19e +0x0f2:  fldcw  -0x6e(%ebp)
085bb1a1 +0x0f5:  mov    $0x0,%eax
085bb1a6 +0x0fa:  mov    %eax,-0x4c(%ebp)
085bb1a9 +0x0fd:  mov    0x8(%ebp),%eax
085bb1ac +0x100:  mov    0x1930(%eax),%eax
085bb1b2 +0x106:  mov    %eax,-0x6c(%ebp)
085bb1b5 +0x109:  fildl  -0x6c(%ebp)
085bb1b8 +0x10c:  mov    0x8(%ebp),%eax
085bb1bb +0x10f:  mov    0x1874(%eax),%eax
085bb1c1 +0x115:  mov    %eax,-0x6c(%ebp)
085bb1c4 +0x118:  fildl  -0x6c(%ebp)
085bb1c7 +0x11b:  fdivrp %st,%st(1)
085bb1c9 +0x11d:  fstps  -0x4c(%ebp)
085bb1cc +0x120:  flds   -0x4c(%ebp)
085bb1cf +0x123:  flds   "蠱�="
085bb1d5 +0x129:  fmulp  %st,%st(1)
085bb1d7 +0x12b:  fstps  -0x58(%ebp)
085bb1da +0x12e:  flds   -0x4c(%ebp)
085bb1dd +0x131:  fadds  -0x58(%ebp)
085bb1e0 +0x134:  flds   &data#fb2a4316(.rodata)
085bb1e6 +0x13a:  faddp  %st,%st(1)
085bb1e8 +0x13c:  fldcw  -0x70(%ebp)
085bb1eb +0x13f:  fistpl -0x48(%ebp)
085bb1ee +0x142:  fldcw  -0x6e(%ebp)
085bb1f1 +0x145:  flds   -0x4c(%ebp)
085bb1f4 +0x148:  fsubs  -0x58(%ebp)
085bb1f7 +0x14b:  fldcw  -0x70(%ebp)
085bb1fa +0x14e:  fistpl -0x44(%ebp)
085bb1fd +0x151:  fldcw  -0x6e(%ebp)
085bb200 +0x154:  movl   $0x0,-0x40(%ebp)
085bb207 +0x15b:  mov    $0x0,%eax
085bb20c +0x160:  mov    %eax,-0x3c(%ebp)
085bb20f +0x163:  mov    0x8(%ebp),%eax
085bb212 +0x166:  mov    0x19e8(%eax),%eax
085bb218 +0x16c:  mov    %eax,-0x6c(%ebp)
085bb21b +0x16f:  fildl  -0x6c(%ebp)
085bb21e +0x172:  mov    0x8(%ebp),%eax
085bb221 +0x175:  mov    0x1874(%eax),%eax
085bb227 +0x17b:  mov    %eax,-0x6c(%ebp)
085bb22a +0x17e:  fildl  -0x6c(%ebp)
085bb22d +0x181:  fdivrp %st,%st(1)
085bb22f +0x183:  fstps  -0x3c(%ebp)
085bb232 +0x186:  flds   -0x3c(%ebp)
085bb235 +0x189:  flds   "蠱�="
085bb23b +0x18f:  fmulp  %st,%st(1)
085bb23d +0x191:  fstps  -0x58(%ebp)
085bb240 +0x194:  flds   -0x3c(%ebp)
085bb243 +0x197:  fadds  -0x58(%ebp)
085bb246 +0x19a:  flds   &data#fb2a4316(.rodata)
085bb24c +0x1a0:  faddp  %st,%st(1)
085bb24e +0x1a2:  fldcw  -0x70(%ebp)
085bb251 +0x1a5:  fistpl -0x38(%ebp)
085bb254 +0x1a8:  fldcw  -0x6e(%ebp)
085bb257 +0x1ab:  flds   -0x3c(%ebp)
085bb25a +0x1ae:  fsubs  -0x58(%ebp)
085bb25d +0x1b1:  fldcw  -0x70(%ebp)
085bb260 +0x1b4:  fistpl -0x34(%ebp)
085bb263 +0x1b7:  fldcw  -0x6e(%ebp)
085bb266 +0x1ba:  movl   $0x0,-0x30(%ebp)
085bb26d +0x1c1:  movl   $0x0,-0x2c(%ebp)
085bb274 +0x1c8:  movl   $0x0,-0x28(%ebp)
085bb27b +0x1cf:  movl   $0x0,-0x24(%ebp)
085bb282 +0x1d6:  movl   $0x0,-0x18(%ebp)
085bb289 +0x1dd:  jmp    085bb350 <+0x2a4>
085bb28e +0x1e2:  mov    -0x18(%ebp),%edx
085bb291 +0x1e5:  mov    0x8(%ebp),%eax
085bb294 +0x1e8:  add    $0x61c,%edx
085bb29a +0x1ee:  mov    0xc(%eax,%edx,4),%eax
085bb29e +0x1f2:  cmp    -0x54(%ebp),%eax
085bb2a1 +0x1f5:  jg     085bb2bc <+0x210>
085bb2a3 +0x1f7:  mov    -0x18(%ebp),%edx
085bb2a6 +0x1fa:  mov    0x8(%ebp),%eax
085bb2a9 +0x1fd:  add    $0x61c,%edx
085bb2af +0x203:  mov    0xc(%eax,%edx,4),%eax
085bb2b3 +0x207:  cmp    -0x50(%ebp),%eax
085bb2b6 +0x20a:  jl     085bb2bc <+0x210>
085bb2b8 +0x20c:  addl   $0x1,-0x2c(%ebp)
085bb2bc +0x210:  mov    -0x18(%ebp),%edx
085bb2bf +0x213:  mov    0x8(%ebp),%eax
085bb2c2 +0x216:  add    $0x64c,%edx
085bb2c8 +0x21c:  mov    0x4(%eax,%edx,4),%eax
085bb2cc +0x220:  test   %eax,%eax
085bb2ce +0x222:  jne    085bb2d6 <+0x22a>
085bb2d0 +0x224:  addl   $0x1,-0x28(%ebp)
085bb2d4 +0x228:  jmp    085bb304 <+0x258>
085bb2d6 +0x22a:  mov    -0x18(%ebp),%edx
085bb2d9 +0x22d:  mov    0x8(%ebp),%eax
085bb2dc +0x230:  add    $0x64c,%edx
085bb2e2 +0x236:  mov    0x4(%eax,%edx,4),%eax
085bb2e6 +0x23a:  cmp    -0x48(%ebp),%eax
085bb2e9 +0x23d:  jg     085bb304 <+0x258>
085bb2eb +0x23f:  mov    -0x18(%ebp),%edx
085bb2ee +0x242:  mov    0x8(%ebp),%eax
085bb2f1 +0x245:  add    $0x64c,%edx
085bb2f7 +0x24b:  mov    0x4(%eax,%edx,4),%eax
085bb2fb +0x24f:  cmp    -0x44(%ebp),%eax
085bb2fe +0x252:  jl     085bb304 <+0x258>
085bb300 +0x254:  addl   $0x1,-0x40(%ebp)
085bb304 +0x258:  mov    -0x18(%ebp),%edx
085bb307 +0x25b:  mov    0x8(%ebp),%eax
085bb30a +0x25e:  add    $0x678,%edx
085bb310 +0x264:  mov    0xc(%eax,%edx,4),%eax
085bb314 +0x268:  test   %eax,%eax
085bb316 +0x26a:  jne    085bb31e <+0x272>
085bb318 +0x26c:  addl   $0x1,-0x24(%ebp)
085bb31c +0x270:  jmp    085bb34c <+0x2a0>
085bb31e +0x272:  mov    -0x18(%ebp),%edx
085bb321 +0x275:  mov    0x8(%ebp),%eax
085bb324 +0x278:  add    $0x678,%edx
085bb32a +0x27e:  mov    0xc(%eax,%edx,4),%eax
085bb32e +0x282:  cmp    -0x38(%ebp),%eax
085bb331 +0x285:  jg     085bb34c <+0x2a0>
085bb333 +0x287:  mov    -0x18(%ebp),%edx
085bb336 +0x28a:  mov    0x8(%ebp),%eax
085bb339 +0x28d:  add    $0x678,%edx
085bb33f +0x293:  mov    0xc(%eax,%edx,4),%eax
085bb343 +0x297:  cmp    -0x34(%ebp),%eax
085bb346 +0x29a:  jl     085bb34c <+0x2a0>
085bb348 +0x29c:  addl   $0x1,-0x30(%ebp)
085bb34c +0x2a0:  addl   $0x1,-0x18(%ebp)
085bb350 +0x2a4:  mov    0x8(%ebp),%eax
085bb353 +0x2a7:  mov    0x1874(%eax),%eax
085bb359 +0x2ad:  cmp    -0x18(%ebp),%eax
085bb35c +0x2b0:  setg   %al
085bb35f +0x2b3:  test   %al,%al
085bb361 +0x2b5:  jne    085bb28e <+0x1e2>
085bb367 +0x2bb:  mov    0x8(%ebp),%eax
085bb36a +0x2be:  mov    0x1874(%eax),%eax
085bb370 +0x2c4:  mov    %eax,%edx
085bb372 +0x2c6:  shr    $0x1f,%edx
085bb375 +0x2c9:  lea    (%edx,%eax,1),%eax
085bb378 +0x2cc:  sar    %eax
085bb37a +0x2ce:  cmp    -0x2c(%ebp),%eax
085bb37d +0x2d1:  jg     085bb417 <+0x36b>
085bb383 +0x2d7:  movl   $0x0,-0x14(%ebp)
085bb38a +0x2de:  jmp    085bb408 <+0x35c>
085bb38c +0x2e0:  mov    -0x14(%ebp),%eax
085bb38f +0x2e3:  mov    %eax,0x4(%esp)
085bb393 +0x2e7:  mov    0x8(%ebp),%eax
085bb396 +0x2ea:  mov    %eax,(%esp)
085bb399 +0x2ed:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085bb39e +0x2f2:  test   %al,%al
085bb3a0 +0x2f4:  je     085bb404 <+0x358>
085bb3a2 +0x2f6:  mov    -0x14(%ebp),%edx
085bb3a5 +0x2f9:  mov    0x8(%ebp),%ecx
085bb3a8 +0x2fc:  mov    %edx,%eax
085bb3aa +0x2fe:  add    %eax,%eax
085bb3ac +0x300:  add    %edx,%eax
085bb3ae +0x302:  shl    $0x3,%eax
085bb3b1 +0x305:  lea    (%ecx,%eax,1),%eax
085bb3b4 +0x308:  add    $0x78,%eax
085bb3b7 +0x30b:  mov    (%eax),%ebx
085bb3b9 +0x30d:  mov    -0x14(%ebp),%edx
085bb3bc +0x310:  mov    0x8(%ebp),%ecx
085bb3bf +0x313:  mov    %edx,%eax
085bb3c1 +0x315:  add    %eax,%eax
085bb3c3 +0x317:  add    %edx,%eax
085bb3c5 +0x319:  shl    $0x3,%eax
085bb3c8 +0x31c:  lea    (%ecx,%eax,1),%eax
085bb3cb +0x31f:  add    $0x78,%eax
085bb3ce +0x322:  mov    (%eax),%eax
085bb3d0 +0x324:  mov    %eax,(%esp)
085bb3d3 +0x327:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085bb3d8 +0x32c:  movl   $0x0,0x14(%esp)
085bb3e0 +0x334:  movl   $0x0,0x10(%esp)
085bb3e8 +0x33c:  movl   $0x1,0xc(%esp)
085bb3f0 +0x344:  movl   $0xd9,0x8(%esp)
085bb3f8 +0x34c:  mov    %ebx,0x4(%esp)
085bb3fc +0x350:  mov    %eax,(%esp)
085bb3ff +0x353:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085bb404 +0x358:  addl   $0x1,-0x14(%ebp)
085bb408 +0x35c:  cmpl   $0x3,-0x14(%ebp)
085bb40c +0x360:  setle  %al
085bb40f +0x363:  test   %al,%al
085bb411 +0x365:  jne    085bb38c <+0x2e0>
085bb417 +0x36b:  mov    0x8(%ebp),%eax
085bb41a +0x36e:  mov    0x1874(%eax),%eax
085bb420 +0x374:  sub    -0x28(%ebp),%eax
085bb423 +0x377:  mov    %eax,-0x20(%ebp)
085bb426 +0x37a:  cmpl   $0x0,-0x20(%ebp)
085bb42a +0x37e:  jle    085bb4da <+0x42e>
085bb430 +0x384:  mov    -0x20(%ebp),%eax
085bb433 +0x387:  mov    %eax,%edx
085bb435 +0x389:  shr    $0x1f,%edx
085bb438 +0x38c:  lea    (%edx,%eax,1),%eax
085bb43b +0x38f:  sar    %eax
085bb43d +0x391:  cmp    -0x40(%ebp),%eax
085bb440 +0x394:  jg     085bb4da <+0x42e>
085bb446 +0x39a:  movl   $0x0,-0x10(%ebp)
085bb44d +0x3a1:  jmp    085bb4cb <+0x41f>
085bb44f +0x3a3:  mov    -0x10(%ebp),%eax
085bb452 +0x3a6:  mov    %eax,0x4(%esp)
085bb456 +0x3aa:  mov    0x8(%ebp),%eax
085bb459 +0x3ad:  mov    %eax,(%esp)
085bb45c +0x3b0:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085bb461 +0x3b5:  test   %al,%al
085bb463 +0x3b7:  je     085bb4c7 <+0x41b>
085bb465 +0x3b9:  mov    -0x10(%ebp),%edx
085bb468 +0x3bc:  mov    0x8(%ebp),%ecx
085bb46b +0x3bf:  mov    %edx,%eax
085bb46d +0x3c1:  add    %eax,%eax
085bb46f +0x3c3:  add    %edx,%eax
085bb471 +0x3c5:  shl    $0x3,%eax
085bb474 +0x3c8:  lea    (%ecx,%eax,1),%eax
085bb477 +0x3cb:  add    $0x78,%eax
085bb47a +0x3ce:  mov    (%eax),%ebx
085bb47c +0x3d0:  mov    -0x10(%ebp),%edx
085bb47f +0x3d3:  mov    0x8(%ebp),%ecx
085bb482 +0x3d6:  mov    %edx,%eax
085bb484 +0x3d8:  add    %eax,%eax
085bb486 +0x3da:  add    %edx,%eax
085bb488 +0x3dc:  shl    $0x3,%eax
085bb48b +0x3df:  lea    (%ecx,%eax,1),%eax
085bb48e +0x3e2:  add    $0x78,%eax
085bb491 +0x3e5:  mov    (%eax),%eax
085bb493 +0x3e7:  mov    %eax,(%esp)
085bb496 +0x3ea:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085bb49b +0x3ef:  movl   $0x0,0x14(%esp)
085bb4a3 +0x3f7:  movl   $0x0,0x10(%esp)
085bb4ab +0x3ff:  movl   $0x1,0xc(%esp)
085bb4b3 +0x407:  movl   $0xda,0x8(%esp)
085bb4bb +0x40f:  mov    %ebx,0x4(%esp)
085bb4bf +0x413:  mov    %eax,(%esp)
085bb4c2 +0x416:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085bb4c7 +0x41b:  addl   $0x1,-0x10(%ebp)
085bb4cb +0x41f:  cmpl   $0x3,-0x10(%ebp)
085bb4cf +0x423:  setle  %al
085bb4d2 +0x426:  test   %al,%al
085bb4d4 +0x428:  jne    085bb44f <+0x3a3>
085bb4da +0x42e:  mov    0x8(%ebp),%eax
085bb4dd +0x431:  mov    0x1874(%eax),%eax
085bb4e3 +0x437:  sub    -0x24(%ebp),%eax
085bb4e6 +0x43a:  mov    %eax,-0x1c(%ebp)
085bb4e9 +0x43d:  cmpl   $0x0,-0x1c(%ebp)
085bb4ed +0x441:  jle    085bb5a6 <+0x4fa>
085bb4f3 +0x447:  mov    -0x1c(%ebp),%eax
085bb4f6 +0x44a:  mov    %eax,%edx
085bb4f8 +0x44c:  shr    $0x1f,%edx
085bb4fb +0x44f:  lea    (%edx,%eax,1),%eax
085bb4fe +0x452:  sar    %eax
085bb500 +0x454:  cmp    -0x30(%ebp),%eax
085bb503 +0x457:  jg     085bb5a6 <+0x4fa>
085bb509 +0x45d:  movl   $0x0,-0xc(%ebp)
085bb510 +0x464:  jmp    085bb58e <+0x4e2>
085bb512 +0x466:  mov    -0xc(%ebp),%eax
085bb515 +0x469:  mov    %eax,0x4(%esp)
085bb519 +0x46d:  mov    0x8(%ebp),%eax
085bb51c +0x470:  mov    %eax,(%esp)
085bb51f +0x473:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085bb524 +0x478:  test   %al,%al
085bb526 +0x47a:  je     085bb58a <+0x4de>
085bb528 +0x47c:  mov    -0xc(%ebp),%edx
085bb52b +0x47f:  mov    0x8(%ebp),%ecx
085bb52e +0x482:  mov    %edx,%eax
085bb530 +0x484:  add    %eax,%eax
085bb532 +0x486:  add    %edx,%eax
085bb534 +0x488:  shl    $0x3,%eax
085bb537 +0x48b:  lea    (%ecx,%eax,1),%eax
085bb53a +0x48e:  add    $0x78,%eax
085bb53d +0x491:  mov    (%eax),%ebx
085bb53f +0x493:  mov    -0xc(%ebp),%edx
085bb542 +0x496:  mov    0x8(%ebp),%ecx
085bb545 +0x499:  mov    %edx,%eax
085bb547 +0x49b:  add    %eax,%eax
085bb549 +0x49d:  add    %edx,%eax
085bb54b +0x49f:  shl    $0x3,%eax
085bb54e +0x4a2:  lea    (%ecx,%eax,1),%eax
085bb551 +0x4a5:  add    $0x78,%eax
085bb554 +0x4a8:  mov    (%eax),%eax
085bb556 +0x4aa:  mov    %eax,(%esp)
085bb559 +0x4ad:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085bb55e +0x4b2:  movl   $0x0,0x14(%esp)
085bb566 +0x4ba:  movl   $0x0,0x10(%esp)
085bb56e +0x4c2:  movl   $0x1,0xc(%esp)
085bb576 +0x4ca:  movl   $0xdb,0x8(%esp)
085bb57e +0x4d2:  mov    %ebx,0x4(%esp)
085bb582 +0x4d6:  mov    %eax,(%esp)
085bb585 +0x4d9:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085bb58a +0x4de:  addl   $0x1,-0xc(%ebp)
085bb58e +0x4e2:  cmpl   $0x3,-0xc(%ebp)
085bb592 +0x4e6:  setle  %al
085bb595 +0x4e9:  test   %al,%al
085bb597 +0x4eb:  jne    085bb512 <+0x466>
085bb59d +0x4f1:  jmp    085bb5a6 <+0x4fa>
085bb59f +0x4f3:  nop
085bb5a0 +0x4f4:  jmp    085bb5a6 <+0x4fa>
085bb5a2 +0x4f6:  nop
085bb5a3 +0x4f7:  jmp    085bb5a6 <+0x4fa>
085bb5a5 +0x4f9:  nop
085bb5a6 +0x4fa:  add    $0x94,%esp
085bb5ac +0x500:  pop    %ebx
085bb5ad +0x501:  pop    %ebp
085bb5ae +0x502:  ret
085bb5af +0x503:  nop
```

## 反编译 C

```c
// CParty::CheckHackAverageHitCount @ 0x85bb0ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CParty::CheckHackAverageHitCount() */

void __thiscall CParty::CheckHackAverageHitCount(CParty *this)

{
  undefined4 uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  CHackAnalyzer *pCVar7;
  int local_44;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar6 = village_attacked::CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr);
  if ((cVar6 == '\0') && (*(int *)(this + 0x1874) < 0x2e)) {
    if (((*(int *)(this + 0xcac) == 0) ||
        ((*(char *)(*(int *)(this + 0xcac) + 0x89c) == '\0' &&
         (cVar6 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0xcac)), cVar6 < '\x01'))))
       && (1 < *(int *)(this + 0x1874))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      fVar3 = (float)*(int *)(this + 0x1878) / (float)*(int *)(this + 0x1874);
      fVar4 = (float)*(int *)(this + 0x1930) / (float)*(int *)(this + 0x1874);
      local_44 = 0;
      fVar5 = (float)*(int *)(this + 0x19e8) / (float)*(int *)(this + 0x1874);
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      for (local_1c = 0; local_1c < *(int *)(this + 0x1874); local_1c = local_1c + 1) {
        if ((*(int *)(this + (local_1c + 0x61c) * 4 + 0xc) <=
             (int)ROUND(_DAT_08cbbc00 + fVar3 + _DAT_08cbbbfc * fVar3)) &&
           ((int)ROUND(fVar3 - _DAT_08cbbbfc * fVar3) <=
            *(int *)(this + (local_1c + 0x61c) * 4 + 0xc))) {
          local_30 = local_30 + 1;
        }
        if (*(int *)(this + (local_1c + 0x64c) * 4 + 4) == 0) {
          local_2c = local_2c + 1;
        }
        else if ((*(int *)(this + (local_1c + 0x64c) * 4 + 4) <=
                  (int)ROUND(_DAT_08cbbc00 + fVar4 + _DAT_08cbbbfc * fVar4)) &&
                ((int)ROUND(fVar4 - _DAT_08cbbbfc * fVar4) <=
                 *(int *)(this + (local_1c + 0x64c) * 4 + 4))) {
          local_44 = local_44 + 1;
        }
        if (*(int *)(this + (local_1c + 0x678) * 4 + 0xc) == 0) {
          local_28 = local_28 + 1;
        }
        else if ((*(int *)(this + (local_1c + 0x678) * 4 + 0xc) <=
                  (int)ROUND(_DAT_08cbbc00 + fVar5 + _DAT_08cbbbfc * fVar5)) &&
                ((int)ROUND(fVar5 - _DAT_08cbbbfc * fVar5) <=
                 *(int *)(this + (local_1c + 0x678) * 4 + 0xc))) {
          local_34 = local_34 + 1;
        }
      }
      if (*(int *)(this + 0x1874) / 2 <= local_30) {
        for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
          cVar6 = _checkValidUser(this,local_18);
          if (cVar6 != '\0') {
            uVar1 = *(undefined4 *)(this + local_18 * 0x18 + 0x78);
            pCVar7 = (CHackAnalyzer *)
                     CUser::getHackAnalyzer(*(CUser **)(this + local_18 * 0x18 + 0x78));
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,uVar1,0xd9,1,0,0);
          }
        }
      }
      if ((0 < *(int *)(this + 0x1874) - local_2c) &&
         ((*(int *)(this + 0x1874) - local_2c) / 2 <= local_44)) {
        for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
          cVar6 = _checkValidUser(this,local_14);
          if (cVar6 != '\0') {
            uVar1 = *(undefined4 *)(this + local_14 * 0x18 + 0x78);
            pCVar7 = (CHackAnalyzer *)
                     CUser::getHackAnalyzer(*(CUser **)(this + local_14 * 0x18 + 0x78));
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,uVar1,0xda,1,0,0);
          }
        }
      }
      if ((0 < *(int *)(this + 0x1874) - local_28) &&
         ((*(int *)(this + 0x1874) - local_28) / 2 <= local_34)) {
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          cVar6 = _checkValidUser(this,local_10);
          if (cVar6 != '\0') {
            uVar1 = *(undefined4 *)(this + local_10 * 0x18 + 0x78);
            pCVar7 = (CHackAnalyzer *)
                     CUser::getHackAnalyzer(*(CUser **)(this + local_10 * 0x18 + 0x78));
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,uVar1,0xdb,1,0,0);
          }
        }
      }
    }
  }
  return;
}
```
