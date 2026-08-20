# send_teleport_effect_at_different_place

`_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi`

`CPartyTelePort::send_teleport_effect_at_different_place(int)`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bc2b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bc2b0  _ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi
#           CPartyTelePort::send_teleport_effect_at_different_place(int)
# range [0x085bc2b0, 0x085bc64b]
085bc2b0 +0x000:  push   %ebp
085bc2b1 +0x001:  mov    %esp,%ebp
085bc2b3 +0x003:  push   %esi
085bc2b4 +0x004:  push   %ebx
085bc2b5 +0x005:  sub    $0x70,%esp
085bc2b8 +0x008:  mov    0x8(%ebp),%eax
085bc2bb +0x00b:  mov    (%eax),%eax
085bc2bd +0x00d:  test   %eax,%eax
085bc2bf +0x00f:  je     085bc640 <+0x390>
085bc2c5 +0x015:  lea    -0x34(%ebp),%eax
085bc2c8 +0x018:  mov    %eax,(%esp)
085bc2cb +0x01b:  call   085c04fc <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1a5a>  ; global constructors keyed to CParty::cMember::cMember()+0x1a5a
085bc2d0 +0x020:  movl   $0x0,-0x24(%ebp)
085bc2d7 +0x027:  jmp    085bc49d <+0x1ed>
085bc2dc +0x02c:  mov    0x8(%ebp),%eax
085bc2df +0x02f:  mov    (%eax),%eax
085bc2e1 +0x031:  mov    -0x24(%ebp),%edx
085bc2e4 +0x034:  mov    %edx,0x4(%esp)
085bc2e8 +0x038:  mov    %eax,(%esp)
085bc2eb +0x03b:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085bc2f0 +0x040:  xor    $0x1,%eax
085bc2f3 +0x043:  test   %al,%al
085bc2f5 +0x045:  jne    085bc498 <+0x1e8>
085bc2fb +0x04b:  mov    0x8(%ebp),%eax
085bc2fe +0x04e:  mov    (%eax),%eax
085bc300 +0x050:  mov    -0x24(%ebp),%edx
085bc303 +0x053:  mov    %edx,0x4(%esp)
085bc307 +0x057:  mov    %eax,(%esp)
085bc30a +0x05a:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085bc30f +0x05f:  mov    %eax,-0x20(%ebp)
085bc312 +0x062:  cmpl   $0x0,-0x20(%ebp)
085bc316 +0x066:  je     085bc499 <+0x1e9>
085bc31c +0x06c:  lea    -0x38(%ebp),%eax
085bc31f +0x06f:  lea    -0x34(%ebp),%edx
085bc322 +0x072:  mov    %edx,0x4(%esp)
085bc326 +0x076:  mov    %eax,(%esp)
085bc329 +0x079:  call   085c056e <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1acc>  ; global constructors keyed to CParty::cMember::cMember()+0x1acc
085bc32e +0x07e:  sub    $0x4,%esp
085bc331 +0x081:  lea    -0x3c(%ebp),%eax
085bc334 +0x084:  lea    -0x34(%ebp),%edx
085bc337 +0x087:  mov    %edx,0x4(%esp)
085bc33b +0x08b:  mov    %eax,(%esp)
085bc33e +0x08e:  call   085c0592 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1af0>  ; global constructors keyed to CParty::cMember::cMember()+0x1af0
085bc343 +0x093:  sub    $0x4,%esp
085bc346 +0x096:  movb   $0x0,-0x19(%ebp)
085bc34a +0x09a:  jmp    085bc3de <+0x12e>
085bc34f +0x09f:  lea    -0x38(%ebp),%eax
085bc352 +0x0a2:  mov    %eax,(%esp)
085bc355 +0x0a5:  call   085c05e4 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1b42>  ; global constructors keyed to CParty::cMember::cMember()+0x1b42
085bc35a +0x0aa:  mov    0x4(%eax),%ebx
085bc35d +0x0ad:  movl   $0x0,0x4(%esp)
085bc365 +0x0b5:  mov    -0x20(%ebp),%eax
085bc368 +0x0b8:  mov    %eax,(%esp)
085bc36b +0x0bb:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085bc370 +0x0c0:  cmp    %eax,%ebx
085bc372 +0x0c2:  jne    085bc398 <+0xe8>
085bc374 +0x0c4:  lea    -0x38(%ebp),%eax
085bc377 +0x0c7:  mov    %eax,(%esp)
085bc37a +0x0ca:  call   085c05e4 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1b42>  ; global constructors keyed to CParty::cMember::cMember()+0x1b42
085bc37f +0x0cf:  movzbl (%eax),%ebx
085bc382 +0x0d2:  mov    -0x20(%ebp),%eax
085bc385 +0x0d5:  mov    %eax,(%esp)
085bc388 +0x0d8:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085bc38d +0x0dd:  cmp    %al,%bl
085bc38f +0x0df:  jne    085bc398 <+0xe8>
085bc391 +0x0e1:  mov    $0x1,%eax
085bc396 +0x0e6:  jmp    085bc39d <+0xed>
085bc398 +0x0e8:  mov    $0x0,%eax
085bc39d +0x0ed:  test   %al,%al
085bc39f +0x0ef:  je     085bc3d3 <+0x123>
085bc3a1 +0x0f1:  movb   $0x1,-0x19(%ebp)
085bc3a5 +0x0f5:  mov    -0x20(%ebp),%eax
085bc3a8 +0x0f8:  mov    %eax,(%esp)
085bc3ab +0x0fb:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085bc3b0 +0x100:  mov    %ax,-0x28(%ebp)
085bc3b4 +0x104:  lea    -0x38(%ebp),%eax
085bc3b7 +0x107:  mov    %eax,(%esp)
085bc3ba +0x10a:  call   085c05e4 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1b42>  ; global constructors keyed to CParty::cMember::cMember()+0x1b42
085bc3bf +0x10f:  lea    0x8(%eax),%edx
085bc3c2 +0x112:  lea    -0x28(%ebp),%eax
085bc3c5 +0x115:  mov    %eax,0x4(%esp)
085bc3c9 +0x119:  mov    %edx,(%esp)
085bc3cc +0x11c:  call   085c05ee <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1b4c>  ; global constructors keyed to CParty::cMember::cMember()+0x1b4c
085bc3d1 +0x121:  jmp    085bc3f8 <+0x148>
085bc3d3 +0x123:  lea    -0x38(%ebp),%eax
085bc3d6 +0x126:  mov    %eax,(%esp)
085bc3d9 +0x129:  call   085c061a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1b78>  ; global constructors keyed to CParty::cMember::cMember()+0x1b78
085bc3de +0x12e:  lea    -0x3c(%ebp),%eax
085bc3e1 +0x131:  mov    %eax,0x4(%esp)
085bc3e5 +0x135:  lea    -0x38(%ebp),%eax
085bc3e8 +0x138:  mov    %eax,(%esp)
085bc3eb +0x13b:  call   085c05b8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1b16>  ; global constructors keyed to CParty::cMember::cMember()+0x1b16
085bc3f0 +0x140:  test   %al,%al
085bc3f2 +0x142:  jne    085bc34f <+0x9f>
085bc3f8 +0x148:  movzbl -0x19(%ebp),%eax
085bc3fc +0x14c:  xor    $0x1,%eax
085bc3ff +0x14f:  test   %al,%al
085bc401 +0x151:  je     085bc499 <+0x1e9>
085bc407 +0x157:  lea    -0x50(%ebp),%eax
085bc40a +0x15a:  mov    %eax,(%esp)
085bc40d +0x15d:  call   085bff3e <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x149c>  ; global constructors keyed to CParty::cMember::cMember()+0x149c
085bc412 +0x162:  movl   $0x0,0x4(%esp)
085bc41a +0x16a:  mov    -0x20(%ebp),%eax
085bc41d +0x16d:  mov    %eax,(%esp)
085bc420 +0x170:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085bc425 +0x175:  mov    %eax,-0x4c(%ebp)
085bc428 +0x178:  mov    -0x20(%ebp),%eax
085bc42b +0x17b:  mov    %eax,(%esp)
085bc42e +0x17e:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085bc433 +0x183:  mov    %al,-0x50(%ebp)
085bc436 +0x186:  mov    -0x20(%ebp),%eax
085bc439 +0x189:  mov    %eax,(%esp)
085bc43c +0x18c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085bc441 +0x191:  mov    %ax,-0x26(%ebp)
085bc445 +0x195:  lea    -0x26(%ebp),%eax
085bc448 +0x198:  mov    %eax,0x4(%esp)
085bc44c +0x19c:  lea    -0x50(%ebp),%eax
085bc44f +0x19f:  add    $0x8,%eax
085bc452 +0x1a2:  mov    %eax,(%esp)
085bc455 +0x1a5:  call   085c05ee <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1b4c>  ; global constructors keyed to CParty::cMember::cMember()+0x1b4c
085bc45a +0x1aa:  lea    -0x50(%ebp),%eax
085bc45d +0x1ad:  mov    %eax,0x4(%esp)
085bc461 +0x1b1:  lea    -0x34(%ebp),%eax
085bc464 +0x1b4:  mov    %eax,(%esp)
085bc467 +0x1b7:  call   085c0630 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1b8e>  ; global constructors keyed to CParty::cMember::cMember()+0x1b8e
085bc46c +0x1bc:  movl   $0x0,-0x18(%ebp)
085bc473 +0x1c3:  lea    -0x50(%ebp),%eax
085bc476 +0x1c6:  mov    %eax,(%esp)
085bc479 +0x1c9:  call   085bff54 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x14b2>  ; global constructors keyed to CParty::cMember::cMember()+0x14b2
085bc47e +0x1ce:  jmp    085bc499 <+0x1e9>
085bc480 +0x1d0:  mov    %edx,%ebx
085bc482 +0x1d2:  mov    %eax,%esi
085bc484 +0x1d4:  lea    -0x50(%ebp),%eax
085bc487 +0x1d7:  mov    %eax,(%esp)
085bc48a +0x1da:  call   085bff54 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x14b2>  ; global constructors keyed to CParty::cMember::cMember()+0x14b2
085bc48f +0x1df:  mov    %esi,%eax
085bc491 +0x1e1:  mov    %ebx,%edx
085bc493 +0x1e3:  jmp    085bc618 <+0x368>
085bc498 +0x1e8:  nop
085bc499 +0x1e9:  addl   $0x1,-0x24(%ebp)
085bc49d +0x1ed:  cmpl   $0x3,-0x24(%ebp)
085bc4a1 +0x1f1:  setle  %al
085bc4a4 +0x1f4:  test   %al,%al
085bc4a6 +0x1f6:  jne    085bc2dc <+0x2c>
085bc4ac +0x1fc:  movl   $0x0,-0x14(%ebp)
085bc4b3 +0x203:  jmp    085bc5fd <+0x34d>
085bc4b8 +0x208:  lea    -0x5c(%ebp),%eax
085bc4bb +0x20b:  mov    %eax,(%esp)
085bc4be +0x20e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085bc4c3 +0x213:  movl   $0x17b,0x8(%esp)
085bc4cb +0x21b:  movl   $0x0,0x4(%esp)
085bc4d3 +0x223:  lea    -0x5c(%ebp),%eax
085bc4d6 +0x226:  mov    %eax,(%esp)
085bc4d9 +0x229:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085bc4de +0x22e:  mov    0xc(%ebp),%eax
085bc4e1 +0x231:  movsbl %al,%eax
085bc4e4 +0x234:  mov    %eax,0x4(%esp)
085bc4e8 +0x238:  lea    -0x5c(%ebp),%eax
085bc4eb +0x23b:  mov    %eax,(%esp)
085bc4ee +0x23e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bc4f3 +0x243:  mov    -0x14(%ebp),%eax
085bc4f6 +0x246:  mov    %eax,0x4(%esp)
085bc4fa +0x24a:  lea    -0x34(%ebp),%eax
085bc4fd +0x24d:  mov    %eax,(%esp)
085bc500 +0x250:  call   085c06c6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1c24>  ; global constructors keyed to CParty::cMember::cMember()+0x1c24
085bc505 +0x255:  add    $0x8,%eax
085bc508 +0x258:  mov    %eax,(%esp)
085bc50b +0x25b:  call   081684dc <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x33d>  ; global constructors keyed to HeroMissionValue::clear()+0x33d
085bc510 +0x260:  mov    %eax,-0x10(%ebp)
085bc513 +0x263:  mov    -0x10(%ebp),%eax
085bc516 +0x266:  movsbl %al,%eax
085bc519 +0x269:  mov    %eax,0x4(%esp)
085bc51d +0x26d:  lea    -0x5c(%ebp),%eax
085bc520 +0x270:  mov    %eax,(%esp)
085bc523 +0x273:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085bc528 +0x278:  movl   $0x0,-0xc(%ebp)
085bc52f +0x27f:  jmp    085bc56e <+0x2be>
085bc531 +0x281:  mov    -0xc(%ebp),%ebx
085bc534 +0x284:  mov    -0x14(%ebp),%eax
085bc537 +0x287:  mov    %eax,0x4(%esp)
085bc53b +0x28b:  lea    -0x34(%ebp),%eax
085bc53e +0x28e:  mov    %eax,(%esp)
085bc541 +0x291:  call   085c06c6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1c24>  ; global constructors keyed to CParty::cMember::cMember()+0x1c24
085bc546 +0x296:  add    $0x8,%eax
085bc549 +0x299:  mov    %ebx,0x4(%esp)
085bc54d +0x29d:  mov    %eax,(%esp)
085bc550 +0x2a0:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
085bc555 +0x2a5:  movzwl (%eax),%eax
085bc558 +0x2a8:  movzwl %ax,%eax
085bc55b +0x2ab:  mov    %eax,0x4(%esp)
085bc55f +0x2af:  lea    -0x5c(%ebp),%eax
085bc562 +0x2b2:  mov    %eax,(%esp)
085bc565 +0x2b5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085bc56a +0x2ba:  addl   $0x1,-0xc(%ebp)
085bc56e +0x2be:  mov    -0xc(%ebp),%eax
085bc571 +0x2c1:  cmp    -0x10(%ebp),%eax
085bc574 +0x2c4:  setl   %al
085bc577 +0x2c7:  test   %al,%al
085bc579 +0x2c9:  jne    085bc531 <+0x281>
085bc57b +0x2cb:  movl   $0x1,0x4(%esp)
085bc583 +0x2d3:  lea    -0x5c(%ebp),%eax
085bc586 +0x2d6:  mov    %eax,(%esp)
085bc589 +0x2d9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085bc58e +0x2de:  mov    -0x14(%ebp),%eax
085bc591 +0x2e1:  mov    %eax,0x4(%esp)
085bc595 +0x2e5:  lea    -0x34(%ebp),%eax
085bc598 +0x2e8:  mov    %eax,(%esp)
085bc59b +0x2eb:  call   085c06c6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1c24>  ; global constructors keyed to CParty::cMember::cMember()+0x1c24
085bc5a0 +0x2f0:  mov    0x4(%eax),%esi
085bc5a3 +0x2f3:  mov    -0x14(%ebp),%eax
085bc5a6 +0x2f6:  mov    %eax,0x4(%esp)
085bc5aa +0x2fa:  lea    -0x34(%ebp),%eax
085bc5ad +0x2fd:  mov    %eax,(%esp)
085bc5b0 +0x300:  call   085c06c6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1c24>  ; global constructors keyed to CParty::cMember::cMember()+0x1c24
085bc5b5 +0x305:  movzbl (%eax),%eax
085bc5b8 +0x308:  movsbl %al,%ebx
085bc5bb +0x30b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085bc5c0 +0x310:  lea    -0x5c(%ebp),%edx
085bc5c3 +0x313:  mov    %edx,0xc(%esp)
085bc5c7 +0x317:  mov    %esi,0x8(%esp)
085bc5cb +0x31b:  mov    %ebx,0x4(%esp)
085bc5cf +0x31f:  mov    %eax,(%esp)
085bc5d2 +0x322:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
085bc5d7 +0x327:  jmp    085bc5ee <+0x33e>
085bc5d9 +0x329:  mov    %edx,%ebx
085bc5db +0x32b:  mov    %eax,%esi
085bc5dd +0x32d:  lea    -0x5c(%ebp),%eax
085bc5e0 +0x330:  mov    %eax,(%esp)
085bc5e3 +0x333:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bc5e8 +0x338:  mov    %esi,%eax
085bc5ea +0x33a:  mov    %ebx,%edx
085bc5ec +0x33c:  jmp    085bc618 <+0x368>
085bc5ee +0x33e:  lea    -0x5c(%ebp),%eax
085bc5f1 +0x341:  mov    %eax,(%esp)
085bc5f4 +0x344:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bc5f9 +0x349:  addl   $0x1,-0x14(%ebp)
085bc5fd +0x34d:  lea    -0x34(%ebp),%eax
085bc600 +0x350:  mov    %eax,(%esp)
085bc603 +0x353:  call   085c06a4 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1c02>  ; global constructors keyed to CParty::cMember::cMember()+0x1c02
085bc608 +0x358:  cmp    -0x14(%ebp),%eax
085bc60b +0x35b:  setg   %al
085bc60e +0x35e:  test   %al,%al
085bc610 +0x360:  jne    085bc4b8 <+0x208>
085bc616 +0x366:  jmp    085bc633 <+0x383>
085bc618 +0x368:  mov    %edx,%ebx
085bc61a +0x36a:  mov    %eax,%esi
085bc61c +0x36c:  lea    -0x34(%ebp),%eax
085bc61f +0x36f:  mov    %eax,(%esp)
085bc622 +0x372:  call   085c0510 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1a6e>  ; global constructors keyed to CParty::cMember::cMember()+0x1a6e
085bc627 +0x377:  mov    %esi,%eax
085bc629 +0x379:  mov    %ebx,%edx
085bc62b +0x37b:  mov    %eax,(%esp)
085bc62e +0x37e:  call   08ae3750 <_Unwind_Resume>
085bc633 +0x383:  lea    -0x34(%ebp),%eax
085bc636 +0x386:  mov    %eax,(%esp)
085bc639 +0x389:  call   085c0510 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1a6e>  ; global constructors keyed to CParty::cMember::cMember()+0x1a6e
085bc63e +0x38e:  jmp    085bc641 <+0x391>
085bc640 +0x390:  nop
085bc641 +0x391:  lea    -0x8(%ebp),%esp
085bc644 +0x394:  add    $0x0,%esp
085bc647 +0x397:  pop    %ebx
085bc648 +0x398:  pop    %esi
085bc649 +0x399:  pop    %ebp
085bc64a +0x39a:  ret
085bc64b +0x39b:  nop
```

## 反编译 C

```c
// CPartyTelePort::send_teleport_effect_at_different_place @ 0x85bc2b0

/* CPartyTelePort::send_teleport_effect_at_different_place(int) */

void __thiscall
CPartyTelePort::send_teleport_effect_at_different_place(CPartyTelePort *this,int param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ushort *puVar6;
  char *pcVar7;
  GameWorld *this_00;
  int iVar8;
  PacketGuard local_60 [12];
  effect_data local_54 [4];
  undefined4 local_50;
  vector<unsigned_short,std::allocator<unsigned_short>> avStack_4c [12];
  __normal_iterator local_40 [4];
  __normal_iterator<effect_data*,std::vector<effect_data,std::allocator<effect_data>>> local_3c [4];
  vector<effect_data,std::allocator<effect_data>> local_38 [12];
  ushort local_2c;
  ushort local_2a;
  int local_28;
  CUser *local_24;
  char local_1d;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  
  if (*(int *)this != 0) {
    std::vector<effect_data,std::allocator<effect_data>>::vector(local_38);
    for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
                    /* try { // try from 085bc2eb to 085bc411 has its CatchHandler @ 085bc618 */
      cVar2 = CParty::checkValidUser(*(CParty **)this,local_28);
      if (cVar2 == '\x01') {
        local_24 = (CUser *)CParty::get_user(*(CParty **)this,local_28);
        if (local_24 != (CUser *)0x0) {
          std::vector<effect_data,std::allocator<effect_data>>::begin();
          std::vector<effect_data,std::allocator<effect_data>>::end();
          local_1d = '\0';
          while( true ) {
            bVar4 = __gnu_cxx::operator!=(local_3c,local_40);
            if (!bVar4) break;
            iVar8 = __gnu_cxx::
                    __normal_iterator<effect_data*,std::vector<effect_data,std::allocator<effect_data>>>
                    ::operator->(local_3c);
            iVar8 = *(int *)(iVar8 + 4);
            iVar5 = CUser::get_area(local_24,false);
            if (iVar8 == iVar5) {
              pcVar7 = (char *)__gnu_cxx::
                               __normal_iterator<effect_data*,std::vector<effect_data,std::allocator<effect_data>>>
                               ::operator->(local_3c);
              cVar2 = *pcVar7;
              cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_24);
              if (cVar2 != cVar3) goto LAB_085bc398;
              bVar4 = true;
            }
            else {
LAB_085bc398:
              bVar4 = false;
            }
            if (bVar4) {
              local_1d = '\x01';
              local_2c = CUser::get_unique_id(local_24);
              iVar8 = __gnu_cxx::
                      __normal_iterator<effect_data*,std::vector<effect_data,std::allocator<effect_data>>>
                      ::operator->(local_3c);
              std::vector<unsigned_short,std::allocator<unsigned_short>>::push_back
                        ((vector<unsigned_short,std::allocator<unsigned_short>> *)(iVar8 + 8),
                         &local_2c);
              break;
            }
            __gnu_cxx::
            __normal_iterator<effect_data*,std::vector<effect_data,std::allocator<effect_data>>>::
            operator++(local_3c);
          }
          if (local_1d != '\x01') {
            effect_data::effect_data(local_54);
                    /* try { // try from 085bc420 to 085bc46b has its CatchHandler @ 085bc480 */
            local_50 = CUser::get_area(local_24,false);
            local_54[0] = (effect_data)
                          CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_24);
            local_2a = CUser::get_unique_id(local_24);
            std::vector<unsigned_short,std::allocator<unsigned_short>>::push_back
                      (avStack_4c,&local_2a);
            std::vector<effect_data,std::allocator<effect_data>>::push_back(local_38,local_54);
            local_1c = 0;
                    /* try { // try from 085bc479 to 085bc47d has its CatchHandler @ 085bc618 */
            effect_data::~effect_data(local_54);
          }
        }
      }
    }
    local_18 = 0;
    while( true ) {
      iVar8 = std::vector<effect_data,std::allocator<effect_data>>::size(local_38);
      if (iVar8 <= (int)local_18) break;
                    /* try { // try from 085bc4be to 085bc4c2 has its CatchHandler @ 085bc618 */
      PacketGuard::PacketGuard(local_60);
                    /* try { // try from 085bc4d9 to 085bc5d6 has its CatchHandler @ 085bc5d9 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,0x17b);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(int)(char)param_1);
      iVar8 = std::vector<effect_data,std::allocator<effect_data>>::operator[](local_38,local_18);
      local_14 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size
                           ((vector<unsigned_short,std::allocator<unsigned_short>> *)(iVar8 + 8));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(int)(char)local_14);
      for (local_10 = 0; uVar1 = local_10, (int)local_10 < local_14; local_10 = local_10 + 1) {
        iVar8 = std::vector<effect_data,std::allocator<effect_data>>::operator[](local_38,local_18);
        puVar6 = (ushort *)
                 std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                           ((vector<unsigned_short,std::allocator<unsigned_short>> *)(iVar8 + 8),
                            uVar1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,(uint)*puVar6);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
      iVar8 = std::vector<effect_data,std::allocator<effect_data>>::operator[](local_38,local_18);
      iVar8 = *(int *)(iVar8 + 4);
      pcVar7 = (char *)std::vector<effect_data,std::allocator<effect_data>>::operator[]
                                 (local_38,local_18);
      cVar2 = *pcVar7;
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_to_area(this_00,(int)cVar2,iVar8,local_60);
                    /* try { // try from 085bc5f4 to 085bc5f8 has its CatchHandler @ 085bc618 */
      PacketGuard::~PacketGuard(local_60);
      local_18 = local_18 + 1;
    }
    std::vector<effect_data,std::allocator<effect_data>>::~vector(local_38);
  }
  return;
}
```
