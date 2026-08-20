# set

`_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE`

`advancealtar::AdvanceAltarData::set(advancealtar::_AdvanceAltarDbData const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarData` | `0x088992da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088992da  _ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE
#           advancealtar::AdvanceAltarData::set(advancealtar::_AdvanceAltarDbData const&)
# range [0x088992da, 0x088996d7]
088992da +0x000:  push   %ebp
088992db +0x001:  mov    %esp,%ebp
088992dd +0x003:  sub    $0xd8,%esp
088992e3 +0x009:  mov    0x8(%ebp),%eax
088992e6 +0x00c:  movb   $0x0,0xcc(%eax)
088992ed +0x013:  mov    0xc(%ebp),%edx
088992f0 +0x016:  mov    0x8(%ebp),%eax
088992f3 +0x019:  movl   $0x21,0x8(%esp)
088992fb +0x021:  mov    %edx,0x4(%esp)
088992ff +0x025:  mov    %eax,(%esp)
08899302 +0x028:  call   0807d8a0 <_init+0x198>
08899307 +0x02d:  movl   $0x0,-0x1c(%ebp)
0889930e +0x034:  jmp    0889939f <+0xc5>
08899313 +0x039:  mov    -0x1c(%ebp),%edx
08899316 +0x03c:  mov    0xc(%ebp),%eax
08899319 +0x03f:  add    $0x4,%edx
0889931c +0x042:  mov    0x1(%eax,%edx,8),%eax
08899320 +0x046:  test   %eax,%eax
08899322 +0x048:  jle    0889939a <+0xc0>
08899324 +0x04a:  mov    -0x1c(%ebp),%eax
08899327 +0x04d:  add    $0x4,%eax
0889932a +0x050:  shl    $0x3,%eax
0889932d +0x053:  add    0xc(%ebp),%eax
08899330 +0x056:  lea    0x1(%eax),%ecx
08899333 +0x059:  mov    -0x1c(%ebp),%eax
08899336 +0x05c:  add    $0x4,%eax
08899339 +0x05f:  shl    $0x3,%eax
0889933c +0x062:  add    0xc(%ebp),%eax
0889933f +0x065:  lea    0x1(%eax),%edx
08899342 +0x068:  lea    -0xb0(%ebp),%eax
08899348 +0x06e:  mov    %ecx,0x8(%esp)
0889934c +0x072:  mov    %edx,0x4(%esp)
08899350 +0x076:  mov    %eax,(%esp)
08899353 +0x079:  call   0889baef <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x1b8>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x1b8
08899358 +0x07e:  sub    $0x4,%esp
0889935b +0x081:  lea    -0xb0(%ebp),%eax
08899361 +0x087:  mov    %eax,0x4(%esp)
08899365 +0x08b:  lea    -0xbc(%ebp),%eax
0889936b +0x091:  mov    %eax,(%esp)
0889936e +0x094:  call   081366aa <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x22b1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x22b1
08899373 +0x099:  mov    0x8(%ebp),%eax
08899376 +0x09c:  lea    0x24(%eax),%ecx
08899379 +0x09f:  lea    -0xc4(%ebp),%eax
0889937f +0x0a5:  lea    -0xbc(%ebp),%edx
08899385 +0x0ab:  mov    %edx,0x8(%esp)
08899389 +0x0af:  mov    %ecx,0x4(%esp)
0889938d +0x0b3:  mov    %eax,(%esp)
08899390 +0x0b6:  call   081366e0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x22e7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x22e7
08899395 +0x0bb:  sub    $0x4,%esp
08899398 +0x0be:  jmp    0889939b <+0xc1>
0889939a +0x0c0:  nop
0889939b +0x0c1:  addl   $0x1,-0x1c(%ebp)
0889939f +0x0c5:  cmpl   $0x31,-0x1c(%ebp)
088993a3 +0x0c9:  setle  %al
088993a6 +0x0cc:  test   %al,%al
088993a8 +0x0ce:  jne    08899313 <+0x39>
088993ae +0x0d4:  movl   $0x0,-0x18(%ebp)
088993b5 +0x0db:  jmp    0889952c <+0x252>
088993ba +0x0e0:  mov    -0x18(%ebp),%edx
088993bd +0x0e3:  mov    0xc(%ebp),%ecx
088993c0 +0x0e6:  mov    %edx,%eax
088993c2 +0x0e8:  shl    $0x2,%eax
088993c5 +0x0eb:  add    %edx,%eax
088993c7 +0x0ed:  add    %eax,%eax
088993c9 +0x0ef:  lea    (%ecx,%eax,1),%eax
088993cc +0x0f2:  add    $0x1b0,%eax
088993d1 +0x0f7:  mov    0x2(%eax),%eax
088993d4 +0x0fa:  test   %eax,%eax
088993d6 +0x0fc:  je     08899527 <+0x24d>
088993dc +0x102:  mov    -0x18(%ebp),%edx
088993df +0x105:  mov    0xc(%ebp),%ecx
088993e2 +0x108:  mov    %edx,%eax
088993e4 +0x10a:  shl    $0x2,%eax
088993e7 +0x10d:  add    %edx,%eax
088993e9 +0x10f:  add    %eax,%eax
088993eb +0x111:  lea    (%ecx,%eax,1),%eax
088993ee +0x114:  add    $0x1b0,%eax
088993f3 +0x119:  mov    0x2(%eax),%eax
088993f6 +0x11c:  cmp    $0x1,%eax
088993f9 +0x11f:  jne    0889948b <+0x1b1>
088993ff +0x125:  mov    -0x18(%ebp),%edx
08899402 +0x128:  mov    %edx,%eax
08899404 +0x12a:  shl    $0x2,%eax
08899407 +0x12d:  add    %edx,%eax
08899409 +0x12f:  add    %eax,%eax
0889940b +0x131:  add    $0x1b0,%eax
08899410 +0x136:  add    0xc(%ebp),%eax
08899413 +0x139:  lea    0x1(%eax),%ecx
08899416 +0x13c:  mov    -0x18(%ebp),%edx
08899419 +0x13f:  mov    %edx,%eax
0889941b +0x141:  shl    $0x2,%eax
0889941e +0x144:  add    %edx,%eax
08899420 +0x146:  add    %eax,%eax
08899422 +0x148:  add    $0x1b0,%eax
08899427 +0x14d:  add    0xc(%ebp),%eax
0889942a +0x150:  lea    0x6(%eax),%edx
0889942d +0x153:  lea    -0x8f(%ebp),%eax
08899433 +0x159:  mov    %ecx,0x8(%esp)
08899437 +0x15d:  mov    %edx,0x4(%esp)
0889943b +0x161:  mov    %eax,(%esp)
0889943e +0x164:  call   0889bb2d <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x1f6>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x1f6
08899443 +0x169:  sub    $0x4,%esp
08899446 +0x16c:  lea    -0x8f(%ebp),%eax
0889944c +0x172:  mov    %eax,0x4(%esp)
08899450 +0x176:  lea    -0x9a(%ebp),%eax
08899456 +0x17c:  mov    %eax,(%esp)
08899459 +0x17f:  call   08136600 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2207>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2207
0889945e +0x184:  mov    0x8(%ebp),%eax
08899461 +0x187:  lea    0x84(%eax),%ecx
08899467 +0x18d:  lea    -0xa4(%ebp),%eax
0889946d +0x193:  lea    -0x9a(%ebp),%edx
08899473 +0x199:  mov    %edx,0x8(%esp)
08899477 +0x19d:  mov    %ecx,0x4(%esp)
0889947b +0x1a1:  mov    %eax,(%esp)
0889947e +0x1a4:  call   08136640 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2247>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2247
08899483 +0x1a9:  sub    $0x4,%esp
08899486 +0x1ac:  jmp    08899528 <+0x24e>
0889948b +0x1b1:  mov    -0x18(%ebp),%edx
0889948e +0x1b4:  mov    0xc(%ebp),%ecx
08899491 +0x1b7:  mov    %edx,%eax
08899493 +0x1b9:  shl    $0x2,%eax
08899496 +0x1bc:  add    %edx,%eax
08899498 +0x1be:  add    %eax,%eax
0889949a +0x1c0:  lea    (%ecx,%eax,1),%eax
0889949d +0x1c3:  add    $0x1b0,%eax
088994a2 +0x1c8:  mov    0x2(%eax),%eax
088994a5 +0x1cb:  cmp    $0x2,%eax
088994a8 +0x1ce:  jne    08899528 <+0x24e>
088994aa +0x1d0:  mov    -0x18(%ebp),%edx
088994ad +0x1d3:  mov    %edx,%eax
088994af +0x1d5:  shl    $0x2,%eax
088994b2 +0x1d8:  add    %edx,%eax
088994b4 +0x1da:  add    %eax,%eax
088994b6 +0x1dc:  add    $0x1b0,%eax
088994bb +0x1e1:  add    0xc(%ebp),%eax
088994be +0x1e4:  lea    0x1(%eax),%ecx
088994c1 +0x1e7:  mov    -0x18(%ebp),%edx
088994c4 +0x1ea:  mov    %edx,%eax
088994c6 +0x1ec:  shl    $0x2,%eax
088994c9 +0x1ef:  add    %edx,%eax
088994cb +0x1f1:  add    %eax,%eax
088994cd +0x1f3:  add    $0x1b0,%eax
088994d2 +0x1f8:  add    0xc(%ebp),%eax
088994d5 +0x1fb:  lea    0x6(%eax),%edx
088994d8 +0x1fe:  lea    -0x6f(%ebp),%eax
088994db +0x201:  mov    %ecx,0x8(%esp)
088994df +0x205:  mov    %edx,0x4(%esp)
088994e3 +0x209:  mov    %eax,(%esp)
088994e6 +0x20c:  call   0889bb2d <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x1f6>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x1f6
088994eb +0x211:  sub    $0x4,%esp
088994ee +0x214:  lea    -0x6f(%ebp),%eax
088994f1 +0x217:  mov    %eax,0x4(%esp)
088994f5 +0x21b:  lea    -0x7a(%ebp),%eax
088994f8 +0x21e:  mov    %eax,(%esp)
088994fb +0x221:  call   08136600 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2207>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2207
08899500 +0x226:  mov    0x8(%ebp),%eax
08899503 +0x229:  lea    0x9c(%eax),%ecx
08899509 +0x22f:  lea    -0x84(%ebp),%eax
0889950f +0x235:  lea    -0x7a(%ebp),%edx
08899512 +0x238:  mov    %edx,0x8(%esp)
08899516 +0x23c:  mov    %ecx,0x4(%esp)
0889951a +0x240:  mov    %eax,(%esp)
0889951d +0x243:  call   08136640 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2247>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2247
08899522 +0x248:  sub    $0x4,%esp
08899525 +0x24b:  jmp    08899528 <+0x24e>
08899527 +0x24d:  nop
08899528 +0x24e:  addl   $0x1,-0x18(%ebp)
0889952c +0x252:  cmpl   $0xb,-0x18(%ebp)
08899530 +0x256:  setle  %al
08899533 +0x259:  test   %al,%al
08899535 +0x25b:  jne    088993ba <+0xe0>
0889953b +0x261:  movl   $0x0,-0x14(%ebp)
08899542 +0x268:  jmp    08899614 <+0x33a>
08899547 +0x26d:  mov    -0x14(%ebp),%edx
0889954a +0x270:  mov    0xc(%ebp),%ecx
0889954d +0x273:  mov    %edx,%eax
0889954f +0x275:  add    %eax,%eax
08899551 +0x277:  add    %edx,%eax
08899553 +0x279:  shl    $0x2,%eax
08899556 +0x27c:  lea    (%ecx,%eax,1),%eax
08899559 +0x27f:  add    $0x220,%eax
0889955e +0x284:  mov    0xd(%eax),%eax
08899561 +0x287:  test   %eax,%eax
08899563 +0x289:  jle    0889960f <+0x335>
08899569 +0x28f:  mov    -0x14(%ebp),%edx
0889956c +0x292:  mov    0xc(%ebp),%ecx
0889956f +0x295:  mov    %edx,%eax
08899571 +0x297:  add    %eax,%eax
08899573 +0x299:  add    %edx,%eax
08899575 +0x29b:  shl    $0x2,%eax
08899578 +0x29e:  lea    (%ecx,%eax,1),%eax
0889957b +0x2a1:  add    $0x220,%eax
08899580 +0x2a6:  mov    0x9(%eax),%eax
08899583 +0x2a9:  mov    %eax,0x4(%esp)
08899587 +0x2ad:  mov    0x8(%ebp),%eax
0889958a +0x2b0:  mov    %eax,(%esp)
0889958d +0x2b3:  call   088999d8 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE>  ; advancealtar::AdvanceAltarData::getBuyItemMap(advancealtar::AdvanceAltarShopType::T)
08899592 +0x2b8:  mov    %eax,-0x10(%ebp)
08899595 +0x2bb:  cmpl   $0x0,-0x10(%ebp)
08899599 +0x2bf:  je     08899610 <+0x336>
0889959b +0x2c1:  mov    -0x14(%ebp),%edx
0889959e +0x2c4:  mov    %edx,%eax
088995a0 +0x2c6:  add    %eax,%eax
088995a2 +0x2c8:  add    %edx,%eax
088995a4 +0x2ca:  shl    $0x2,%eax
088995a7 +0x2cd:  add    $0x220,%eax
088995ac +0x2d2:  add    0xc(%ebp),%eax
088995af +0x2d5:  lea    0x9(%eax),%ecx
088995b2 +0x2d8:  mov    -0x14(%ebp),%edx
088995b5 +0x2db:  mov    %edx,%eax
088995b7 +0x2dd:  add    %eax,%eax
088995b9 +0x2df:  add    %edx,%eax
088995bb +0x2e1:  shl    $0x2,%eax
088995be +0x2e4:  add    $0x220,%eax
088995c3 +0x2e9:  add    0xc(%ebp),%eax
088995c6 +0x2ec:  lea    0xd(%eax),%edx
088995c9 +0x2ef:  lea    -0x4c(%ebp),%eax
088995cc +0x2f2:  mov    %ecx,0x8(%esp)
088995d0 +0x2f6:  mov    %edx,0x4(%esp)
088995d4 +0x2fa:  mov    %eax,(%esp)
088995d7 +0x2fd:  call   0889bb6b <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x234>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x234
088995dc +0x302:  sub    $0x4,%esp
088995df +0x305:  lea    -0x4c(%ebp),%eax
088995e2 +0x308:  mov    %eax,0x4(%esp)
088995e6 +0x30c:  lea    -0x5c(%ebp),%eax
088995e9 +0x30f:  mov    %eax,(%esp)
088995ec +0x312:  call   08136028 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1c2f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1c2f
088995f1 +0x317:  lea    -0x64(%ebp),%eax
088995f4 +0x31a:  lea    -0x5c(%ebp),%edx
088995f7 +0x31d:  mov    %edx,0x8(%esp)
088995fb +0x321:  mov    -0x10(%ebp),%edx
088995fe +0x324:  mov    %edx,0x4(%esp)
08899602 +0x328:  mov    %eax,(%esp)
08899605 +0x32b:  call   08136064 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1c6b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1c6b
0889960a +0x330:  sub    $0x4,%esp
0889960d +0x333:  jmp    08899610 <+0x336>
0889960f +0x335:  nop
08899610 +0x336:  addl   $0x1,-0x14(%ebp)
08899614 +0x33a:  cmpl   $0x31,-0x14(%ebp)
08899618 +0x33e:  setle  %al
0889961b +0x341:  test   %al,%al
0889961d +0x343:  jne    08899547 <+0x26d>
08899623 +0x349:  movl   $0x0,-0xc(%ebp)
0889962a +0x350:  jmp    088996c6 <+0x3ec>
0889962f +0x355:  mov    -0xc(%ebp),%edx
08899632 +0x358:  mov    0xc(%ebp),%ecx
08899635 +0x35b:  mov    %edx,%eax
08899637 +0x35d:  shl    $0x2,%eax
0889963a +0x360:  add    %edx,%eax
0889963c +0x362:  lea    (%ecx,%eax,1),%eax
0889963f +0x365:  add    $0x480,%eax
08899644 +0x36a:  mov    0x1(%eax),%eax
08899647 +0x36d:  test   %eax,%eax
08899649 +0x36f:  jle    088996c1 <+0x3e7>
0889964b +0x371:  mov    -0xc(%ebp),%edx
0889964e +0x374:  mov    %edx,%eax
08899650 +0x376:  shl    $0x2,%eax
08899653 +0x379:  add    %edx,%eax
08899655 +0x37b:  add    $0x480,%eax
0889965a +0x380:  add    0xc(%ebp),%eax
0889965d +0x383:  lea    0x1(%eax),%ecx
08899660 +0x386:  mov    -0xc(%ebp),%edx
08899663 +0x389:  mov    %edx,%eax
08899665 +0x38b:  shl    $0x2,%eax
08899668 +0x38e:  add    %edx,%eax
0889966a +0x390:  add    $0x480,%eax
0889966f +0x395:  add    0xc(%ebp),%eax
08899672 +0x398:  lea    0x1(%eax),%edx
08899675 +0x39b:  lea    -0x28(%ebp),%eax
08899678 +0x39e:  mov    %ecx,0x8(%esp)
0889967c +0x3a2:  mov    %edx,0x4(%esp)
08899680 +0x3a6:  mov    %eax,(%esp)
08899683 +0x3a9:  call   0889bba9 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x272>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x272
08899688 +0x3ae:  sub    $0x4,%esp
0889968b +0x3b1:  lea    -0x28(%ebp),%eax
0889968e +0x3b4:  mov    %eax,0x4(%esp)
08899692 +0x3b8:  lea    -0x34(%ebp),%eax
08899695 +0x3bb:  mov    %eax,(%esp)
08899698 +0x3be:  call   081364aa <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x20b1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x20b1
0889969d +0x3c3:  mov    0x8(%ebp),%eax
088996a0 +0x3c6:  lea    0xb4(%eax),%ecx
088996a6 +0x3cc:  lea    -0x3c(%ebp),%eax
088996a9 +0x3cf:  lea    -0x34(%ebp),%edx
088996ac +0x3d2:  mov    %edx,0x8(%esp)
088996b0 +0x3d6:  mov    %ecx,0x4(%esp)
088996b4 +0x3da:  mov    %eax,(%esp)
088996b7 +0x3dd:  call   081364e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x20e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x20e9
088996bc +0x3e2:  sub    $0x4,%esp
088996bf +0x3e5:  jmp    088996c2 <+0x3e8>
088996c1 +0x3e7:  nop
088996c2 +0x3e8:  addl   $0x1,-0xc(%ebp)
088996c6 +0x3ec:  cmpl   $0x1d,-0xc(%ebp)
088996ca +0x3f0:  setle  %al
088996cd +0x3f3:  test   %al,%al
088996cf +0x3f5:  jne    0889962f <+0x355>
088996d5 +0x3fb:  leave
088996d6 +0x3fc:  ret
088996d7 +0x3fd:  nop
```

## 反编译 C

```c
// advancealtar::AdvanceAltarData::set @ 0x88992da

/* advancealtar::AdvanceAltarData::set(advancealtar::_AdvanceAltarDbData const&) */

void __thiscall
advancealtar::AdvanceAltarData::set(AdvanceAltarData *this,_AdvanceAltarDbData *param_1)

{
  pair<int_const,advancealtar::_Stage> *ppVar1;
  pair local_c8 [8];
  pair<int_const,advancealtar::_Stage> local_c0 [12];
  int local_b4 [3];
  pair local_a8 [10];
  pair<unsigned_char_const,advancealtar::_Slot> local_9e [11];
  uchar local_93 [11];
  pair local_88 [10];
  pair<unsigned_char_const,advancealtar::_Slot> local_7e [11];
  uchar local_73 [11];
  pair local_68 [8];
  pair<int_const,advancealtar::_BuyItem> local_60 [16];
  int local_50 [4];
  pair local_40 [8];
  pair<int_const,advancealtar::_Reward> local_38 [12];
  int local_2c [3];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  this[0xcc] = (AdvanceAltarData)0x0;
  ppVar1 = (pair<int_const,advancealtar::_Stage> *)0x21;
  memcpy(this,param_1,0x21);
  for (local_20 = 0; local_20 < 0x32; local_20 = local_20 + 1) {
    if (0 < *(int *)(param_1 + (local_20 + 4) * 8 + 1)) {
      std::make_pair<int_const&,advancealtar::_Stage_const&>
                (local_b4,(_Stage *)(param_1 + (local_20 + 4) * 8 + 1));
      std::pair<int_const,advancealtar::_Stage>::pair<int,advancealtar::_Stage>
                (local_c0,(pair *)local_b4);
      ppVar1 = local_c0;
      std::
      map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
      ::insert(local_c8);
    }
  }
  for (local_1c = 0; local_1c < 0xc; local_1c = local_1c + 1) {
    if (*(int *)(param_1 + local_1c * 10 + 0x1b2) != 0) {
      if (*(int *)(param_1 + local_1c * 10 + 0x1b2) == 1) {
        std::make_pair<unsigned_char_const&,advancealtar::_Slot_const&>
                  (local_93,(_Slot *)(param_1 + local_1c * 10 + 0x1b6));
        std::pair<unsigned_char_const,advancealtar::_Slot>::pair<unsigned_char,advancealtar::_Slot>
                  (local_9e,local_93);
        ppVar1 = (pair<int_const,advancealtar::_Stage> *)local_9e;
        std::
        map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
        ::insert(local_a8);
      }
      else if (*(int *)(param_1 + local_1c * 10 + 0x1b2) == 2) {
        std::make_pair<unsigned_char_const&,advancealtar::_Slot_const&>
                  (local_73,(_Slot *)(param_1 + local_1c * 10 + 0x1b6));
        std::pair<unsigned_char_const,advancealtar::_Slot>::pair<unsigned_char,advancealtar::_Slot>
                  (local_7e,local_73);
        ppVar1 = (pair<int_const,advancealtar::_Stage> *)local_7e;
        std::
        map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
        ::insert(local_88);
      }
    }
  }
  for (local_18 = 0; local_18 < 0x32; local_18 = local_18 + 1) {
    if (0 < *(int *)(param_1 + local_18 * 0xc + 0x22d)) {
      local_14 = getBuyItemMap(this,*(undefined4 *)(param_1 + local_18 * 0xc + 0x229),ppVar1);
      if (local_14 != 0) {
        std::make_pair<int_const&,advancealtar::_BuyItem_const&>
                  (local_50,(_BuyItem *)(param_1 + local_18 * 0xc + 0x22d));
        std::pair<int_const,advancealtar::_BuyItem>::pair<int,advancealtar::_BuyItem>
                  (local_60,(pair *)local_50);
        ppVar1 = (pair<int_const,advancealtar::_Stage> *)local_60;
        std::
        map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
        ::insert(local_68);
      }
    }
  }
  for (local_10 = 0; local_10 < 0x1e; local_10 = local_10 + 1) {
    if (0 < *(int *)(param_1 + local_10 * 5 + 0x481)) {
      std::make_pair<int_const&,advancealtar::_Reward_const&>
                (local_2c,(_Reward *)(param_1 + local_10 * 5 + 0x481));
      std::pair<int_const,advancealtar::_Reward>::pair<int,advancealtar::_Reward>
                (local_38,(pair *)local_2c);
      std::
      map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
      ::insert(local_40);
    }
  }
  return;
}
```
