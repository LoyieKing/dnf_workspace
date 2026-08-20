# dispatch_sig

`_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MultiMailBoxSend` | `0x082262a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082262a2  _ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)
# range [0x082262a2, 0x08226bd9]
082262a2 +0x000:  push   %ebp
082262a3 +0x001:  mov    %esp,%ebp
082262a5 +0x003:  push   %esi
082262a6 +0x004:  push   %ebx
082262a7 +0x005:  sub    $0x4160,%esp
082262ad +0x00b:  mov    0xc(%ebp),%eax
082262b0 +0x00e:  mov    %eax,(%esp)
082262b3 +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082262b8 +0x016:  cmp    $0x3,%eax
082262bb +0x019:  jne    082262cc <+0x2a>
082262bd +0x01b:  mov    0xc(%ebp),%eax
082262c0 +0x01e:  mov    %eax,(%esp)
082262c3 +0x021:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082262c8 +0x026:  test   %eax,%eax
082262ca +0x028:  jne    082262d3 <+0x31>
082262cc +0x02a:  mov    $0x1,%eax
082262d1 +0x02f:  jmp    082262d8 <+0x36>
082262d3 +0x031:  mov    $0x0,%eax
082262d8 +0x036:  test   %al,%al
082262da +0x038:  je     082262e6 <+0x44>
082262dc +0x03a:  mov    $0x0,%ebx
082262e1 +0x03f:  jmp    08226bce <+0x92c>
082262e6 +0x044:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
082262eb +0x049:  movl   $0x40,0x8(%esp)
082262f3 +0x051:  mov    0xc(%ebp),%edx
082262f6 +0x054:  mov    %edx,0x4(%esp)
082262fa +0x058:  mov    %eax,(%esp)
082262fd +0x05b:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08226302 +0x060:  mov    %eax,-0x20(%ebp)
08226305 +0x063:  cmpl   $0x0,-0x20(%ebp)
08226309 +0x067:  je     08226332 <+0x90>
0822630b +0x069:  mov    -0x20(%ebp),%eax
0822630e +0x06c:  movzbl %al,%eax
08226311 +0x06f:  mov    %eax,0x8(%esp)
08226315 +0x073:  movl   $0x13c,0x4(%esp)
0822631d +0x07b:  mov    0xc(%ebp),%eax
08226320 +0x07e:  mov    %eax,(%esp)
08226323 +0x081:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08226328 +0x086:  mov    $0x0,%ebx
0822632d +0x08b:  jmp    08226bce <+0x92c>
08226332 +0x090:  mov    0xc(%ebp),%eax
08226335 +0x093:  mov    %eax,(%esp)
08226338 +0x096:  call   0822fd3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53e6
0822633d +0x09b:  test   %al,%al
0822633f +0x09d:  je     08226366 <+0xc4>
08226341 +0x09f:  movl   $0x17,0x8(%esp)
08226349 +0x0a7:  movl   $0x13c,0x4(%esp)
08226351 +0x0af:  mov    0xc(%ebp),%eax
08226354 +0x0b2:  mov    %eax,(%esp)
08226357 +0x0b5:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822635c +0x0ba:  mov    $0x0,%ebx
08226361 +0x0bf:  jmp    08226bce <+0x92c>
08226366 +0x0c4:  lea    -0x1cf(%ebp),%eax
0822636c +0x0ca:  add    $0xd,%eax
0822636f +0x0cd:  mov    %eax,0x4(%esp)
08226373 +0x0d1:  mov    0x10(%ebp),%eax
08226376 +0x0d4:  mov    %eax,(%esp)
08226379 +0x0d7:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0822637e +0x0dc:  xor    $0x1,%eax
08226381 +0x0df:  test   %al,%al
08226383 +0x0e1:  je     082263b0 <+0x10e>
08226385 +0x0e3:  movl   $0x0,0xc(%esp)
0822638d +0x0eb:  movl   $0x0,0x8(%esp)
08226395 +0x0f3:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822639d +0x0fb:  movl   $0xe1ea,(%esp)
082263a4 +0x102:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082263a9 +0x107:  mov    %eax,%ebx
082263ab +0x109:  jmp    08226bce <+0x92c>
082263b0 +0x10e:  mov    -0x1c2(%ebp),%eax
082263b6 +0x114:  test   %eax,%eax
082263b8 +0x116:  jg     082263e5 <+0x143>
082263ba +0x118:  movl   $0x0,0xc(%esp)
082263c2 +0x120:  movl   $0x0,0x8(%esp)
082263ca +0x128:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082263d2 +0x130:  movl   $0xe1ed,(%esp)
082263d9 +0x137:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082263de +0x13c:  mov    %eax,%ebx
082263e0 +0x13e:  jmp    08226bce <+0x92c>
082263e5 +0x143:  mov    -0x1c2(%ebp),%eax
082263eb +0x149:  mov    %eax,0xc(%esp)
082263ef +0x14d:  movl   $0x1e,0x8(%esp)
082263f7 +0x155:  lea    -0x1cf(%ebp),%eax
082263fd +0x15b:  add    $0x11,%eax
08226400 +0x15e:  mov    %eax,0x4(%esp)
08226404 +0x162:  mov    0x10(%ebp),%eax
08226407 +0x165:  mov    %eax,(%esp)
0822640a +0x168:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
0822640f +0x16d:  xor    $0x1,%eax
08226412 +0x170:  test   %al,%al
08226414 +0x172:  je     08226441 <+0x19f>
08226416 +0x174:  movl   $0x0,0xc(%esp)
0822641e +0x17c:  movl   $0x0,0x8(%esp)
08226426 +0x184:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822642e +0x18c:  movl   $0xe1f0,(%esp)
08226435 +0x193:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822643a +0x198:  mov    %eax,%ebx
0822643c +0x19a:  jmp    08226bce <+0x92c>
08226441 +0x19f:  lea    -0x1cf(%ebp),%eax
08226447 +0x1a5:  add    $0x2f,%eax
0822644a +0x1a8:  mov    %eax,0x4(%esp)
0822644e +0x1ac:  mov    0x10(%ebp),%eax
08226451 +0x1af:  mov    %eax,(%esp)
08226454 +0x1b2:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08226459 +0x1b7:  xor    $0x1,%eax
0822645c +0x1ba:  test   %al,%al
0822645e +0x1bc:  je     0822648b <+0x1e9>
08226460 +0x1be:  movl   $0x0,0xc(%esp)
08226468 +0x1c6:  movl   $0x0,0x8(%esp)
08226470 +0x1ce:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08226478 +0x1d6:  movl   $0xe1f3,(%esp)
0822647f +0x1dd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08226484 +0x1e2:  mov    %eax,%ebx
08226486 +0x1e4:  jmp    08226bce <+0x92c>
0822648b +0x1e9:  movb   $0x1,-0x19c(%ebp)
08226492 +0x1f0:  lea    -0x1cf(%ebp),%eax
08226498 +0x1f6:  add    $0x33,%eax
0822649b +0x1f9:  mov    %eax,0x4(%esp)
0822649f +0x1fd:  mov    0x10(%ebp),%eax
082264a2 +0x200:  mov    %eax,(%esp)
082264a5 +0x203:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082264aa +0x208:  xor    $0x1,%eax
082264ad +0x20b:  test   %al,%al
082264af +0x20d:  je     082264dc <+0x23a>
082264b1 +0x20f:  movl   $0x0,0xc(%esp)
082264b9 +0x217:  movl   $0x0,0x8(%esp)
082264c1 +0x21f:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082264c9 +0x227:  movl   $0xe1f7,(%esp)
082264d0 +0x22e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082264d5 +0x233:  mov    %eax,%ebx
082264d7 +0x235:  jmp    08226bce <+0x92c>
082264dc +0x23a:  movzbl -0x19c(%ebp),%eax
082264e3 +0x241:  cmp    $0xa,%al
082264e5 +0x243:  jbe    08226512 <+0x270>
082264e7 +0x245:  movl   $0x0,0xc(%esp)
082264ef +0x24d:  movl   $0x0,0x8(%esp)
082264f7 +0x255:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082264ff +0x25d:  movl   $0xe1fa,(%esp)
08226506 +0x264:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822650b +0x269:  mov    %eax,%ebx
0822650d +0x26b:  jmp    08226bce <+0x92c>
08226512 +0x270:  movl   $0x0,-0x18(%ebp)
08226519 +0x277:  jmp    082267f7 <+0x555>
0822651e +0x27c:  mov    -0x18(%ebp),%edx
08226521 +0x27f:  lea    -0x1cf(%ebp),%ecx
08226527 +0x285:  mov    %edx,%eax
08226529 +0x287:  shl    $0x2,%eax
0822652c +0x28a:  add    %edx,%eax
0822652e +0x28c:  add    %eax,%eax
08226530 +0x28e:  add    %edx,%eax
08226532 +0x290:  add    $0x30,%eax
08226535 +0x293:  lea    (%ecx,%eax,1),%eax
08226538 +0x296:  add    $0x4,%eax
0822653b +0x299:  mov    %eax,0x4(%esp)
0822653f +0x29d:  mov    0x10(%ebp),%eax
08226542 +0x2a0:  mov    %eax,(%esp)
08226545 +0x2a3:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0822654a +0x2a8:  xor    $0x1,%eax
0822654d +0x2ab:  test   %al,%al
0822654f +0x2ad:  je     0822657c <+0x2da>
08226551 +0x2af:  movl   $0x0,0xc(%esp)
08226559 +0x2b7:  movl   $0x0,0x8(%esp)
08226561 +0x2bf:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08226569 +0x2c7:  movl   $0xe1ff,(%esp)
08226570 +0x2ce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08226575 +0x2d3:  mov    %eax,%ebx
08226577 +0x2d5:  jmp    08226bce <+0x92c>
0822657c +0x2da:  mov    -0x18(%ebp),%edx
0822657f +0x2dd:  lea    -0x1cf(%ebp),%ecx
08226585 +0x2e3:  mov    %edx,%eax
08226587 +0x2e5:  shl    $0x2,%eax
0822658a +0x2e8:  add    %edx,%eax
0822658c +0x2ea:  add    %eax,%eax
0822658e +0x2ec:  add    %edx,%eax
08226590 +0x2ee:  add    $0x30,%eax
08226593 +0x2f1:  lea    (%ecx,%eax,1),%eax
08226596 +0x2f4:  add    $0x5,%eax
08226599 +0x2f7:  mov    %eax,0x4(%esp)
0822659d +0x2fb:  mov    0x10(%ebp),%eax
082265a0 +0x2fe:  mov    %eax,(%esp)
082265a3 +0x301:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
082265a8 +0x306:  xor    $0x1,%eax
082265ab +0x309:  test   %al,%al
082265ad +0x30b:  je     082265da <+0x338>
082265af +0x30d:  movl   $0x0,0xc(%esp)
082265b7 +0x315:  movl   $0x0,0x8(%esp)
082265bf +0x31d:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082265c7 +0x325:  movl   $0xe202,(%esp)
082265ce +0x32c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082265d3 +0x331:  mov    %eax,%ebx
082265d5 +0x333:  jmp    08226bce <+0x92c>
082265da +0x338:  mov    -0x18(%ebp),%edx
082265dd +0x33b:  lea    -0x1cf(%ebp),%ecx
082265e3 +0x341:  mov    %edx,%eax
082265e5 +0x343:  shl    $0x2,%eax
082265e8 +0x346:  add    %edx,%eax
082265ea +0x348:  add    %eax,%eax
082265ec +0x34a:  add    %edx,%eax
082265ee +0x34c:  add    $0x30,%eax
082265f1 +0x34f:  lea    (%ecx,%eax,1),%eax
082265f4 +0x352:  add    $0x7,%eax
082265f7 +0x355:  mov    %eax,0x4(%esp)
082265fb +0x359:  mov    0x10(%ebp),%eax
082265fe +0x35c:  mov    %eax,(%esp)
08226601 +0x35f:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
08226606 +0x364:  xor    $0x1,%eax
08226609 +0x367:  test   %al,%al
0822660b +0x369:  je     08226638 <+0x396>
0822660d +0x36b:  movl   $0x0,0xc(%esp)
08226615 +0x373:  movl   $0x0,0x8(%esp)
0822661d +0x37b:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08226625 +0x383:  movl   $0xe205,(%esp)
0822662c +0x38a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08226631 +0x38f:  mov    %eax,%ebx
08226633 +0x391:  jmp    08226bce <+0x92c>
08226638 +0x396:  mov    -0x18(%ebp),%edx
0822663b +0x399:  mov    %edx,%eax
0822663d +0x39b:  shl    $0x2,%eax
08226640 +0x39e:  add    %edx,%eax
08226642 +0x3a0:  add    %eax,%eax
08226644 +0x3a2:  add    %edx,%eax
08226646 +0x3a4:  lea    -0x8(%ebp),%edx
08226649 +0x3a7:  lea    (%edx,%eax,1),%eax
0822664c +0x3aa:  sub    $0x197,%eax
08226651 +0x3af:  mov    0x7(%eax),%eax
08226654 +0x3b2:  test   %eax,%eax
08226656 +0x3b4:  jne    0822667d <+0x3db>
08226658 +0x3b6:  movl   $0x11,0x8(%esp)
08226660 +0x3be:  movl   $0x13c,0x4(%esp)
08226668 +0x3c6:  mov    0xc(%ebp),%eax
0822666b +0x3c9:  mov    %eax,(%esp)
0822666e +0x3cc:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08226673 +0x3d1:  mov    $0x0,%ebx
08226678 +0x3d6:  jmp    08226bce <+0x92c>
0822667d +0x3db:  mov    -0x18(%ebp),%edx
08226680 +0x3de:  lea    -0x1cf(%ebp),%ecx
08226686 +0x3e4:  mov    %edx,%eax
08226688 +0x3e6:  shl    $0x2,%eax
0822668b +0x3e9:  add    %edx,%eax
0822668d +0x3eb:  add    %eax,%eax
0822668f +0x3ed:  add    %edx,%eax
08226691 +0x3ef:  add    $0x30,%eax
08226694 +0x3f2:  lea    (%ecx,%eax,1),%eax
08226697 +0x3f5:  add    $0xb,%eax
0822669a +0x3f8:  mov    %eax,0x4(%esp)
0822669e +0x3fc:  mov    0x10(%ebp),%eax
082266a1 +0x3ff:  mov    %eax,(%esp)
082266a4 +0x402:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082266a9 +0x407:  xor    $0x1,%eax
082266ac +0x40a:  test   %al,%al
082266ae +0x40c:  je     082266db <+0x439>
082266b0 +0x40e:  movl   $0x0,0xc(%esp)
082266b8 +0x416:  movl   $0x0,0x8(%esp)
082266c0 +0x41e:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082266c8 +0x426:  movl   $0xe20e,(%esp)
082266cf +0x42d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082266d4 +0x432:  mov    %eax,%ebx
082266d6 +0x434:  jmp    08226bce <+0x92c>
082266db +0x439:  mov    -0x18(%ebp),%edx
082266de +0x43c:  mov    %edx,%eax
082266e0 +0x43e:  shl    $0x2,%eax
082266e3 +0x441:  add    %edx,%eax
082266e5 +0x443:  add    %eax,%eax
082266e7 +0x445:  add    %edx,%eax
082266e9 +0x447:  lea    -0x8(%ebp),%edx
082266ec +0x44a:  lea    (%edx,%eax,1),%eax
082266ef +0x44d:  sub    $0x197,%eax
082266f4 +0x452:  movzwl 0x5(%eax),%eax
082266f8 +0x456:  movzwl %ax,%ebx
082266fb +0x459:  mov    -0x18(%ebp),%edx
082266fe +0x45c:  mov    %edx,%eax
08226700 +0x45e:  shl    $0x2,%eax
08226703 +0x461:  add    %edx,%eax
08226705 +0x463:  add    %eax,%eax
08226707 +0x465:  add    %edx,%eax
08226709 +0x467:  lea    -0x8(%ebp),%edx
0822670c +0x46a:  lea    (%edx,%eax,1),%eax
0822670f +0x46d:  sub    $0x193,%eax
08226714 +0x472:  movzbl (%eax),%eax
08226717 +0x475:  movzbl %al,%eax
0822671a +0x478:  mov    %eax,(%esp)
0822671d +0x47b:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
08226722 +0x480:  mov    %ebx,0x8(%esp)
08226726 +0x484:  mov    %eax,0x4(%esp)
0822672a +0x488:  mov    0xc(%ebp),%eax
0822672d +0x48b:  mov    %eax,(%esp)
08226730 +0x48e:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08226735 +0x493:  test   %al,%al
08226737 +0x495:  je     0822675e <+0x4bc>
08226739 +0x497:  movl   $0xd5,0x8(%esp)
08226741 +0x49f:  movl   $0x13c,0x4(%esp)
08226749 +0x4a7:  mov    0xc(%ebp),%eax
0822674c +0x4aa:  mov    %eax,(%esp)
0822674f +0x4ad:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08226754 +0x4b2:  mov    $0x0,%ebx
08226759 +0x4b7:  jmp    08226bce <+0x92c>
0822675e +0x4bc:  movb   $0x1,-0x29(%ebp)
08226762 +0x4c0:  mov    -0x18(%ebp),%edx
08226765 +0x4c3:  mov    %edx,%eax
08226767 +0x4c5:  shl    $0x2,%eax
0822676a +0x4c8:  add    %edx,%eax
0822676c +0x4ca:  add    %eax,%eax
0822676e +0x4cc:  add    %edx,%eax
08226770 +0x4ce:  lea    -0x8(%ebp),%edx
08226773 +0x4d1:  lea    (%edx,%eax,1),%eax
08226776 +0x4d4:  sub    $0x197,%eax
0822677b +0x4d9:  movzwl 0x5(%eax),%eax
0822677f +0x4dd:  movzwl %ax,%ebx
08226782 +0x4e0:  mov    -0x18(%ebp),%edx
08226785 +0x4e3:  mov    %edx,%eax
08226787 +0x4e5:  shl    $0x2,%eax
0822678a +0x4e8:  add    %edx,%eax
0822678c +0x4ea:  add    %eax,%eax
0822678e +0x4ec:  add    %edx,%eax
08226790 +0x4ee:  lea    -0x8(%ebp),%edx
08226793 +0x4f1:  lea    (%edx,%eax,1),%eax
08226796 +0x4f4:  sub    $0x193,%eax
0822679b +0x4f9:  movzbl (%eax),%eax
0822679e +0x4fc:  movzbl %al,%eax
082267a1 +0x4ff:  mov    %eax,(%esp)
082267a4 +0x502:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
082267a9 +0x507:  lea    -0x29(%ebp),%edx
082267ac +0x50a:  mov    %edx,0xc(%esp)
082267b0 +0x50e:  mov    %ebx,0x8(%esp)
082267b4 +0x512:  mov    %eax,0x4(%esp)
082267b8 +0x516:  mov    0xc(%ebp),%eax
082267bb +0x519:  mov    %eax,(%esp)
082267be +0x51c:  call   0812032e <_Z36CheckItemTradeLimitCountToMoveByUserR5CUseriiRb>  ; CheckItemTradeLimitCountToMoveByUser(CUser&, int, int, bool&)
082267c3 +0x521:  movzbl -0x29(%ebp),%eax
082267c7 +0x525:  xor    $0x1,%eax
082267ca +0x528:  test   %al,%al
082267cc +0x52a:  je     082267f3 <+0x551>
082267ce +0x52c:  movl   $0x72,0x8(%esp)
082267d6 +0x534:  movl   $0x13c,0x4(%esp)
082267de +0x53c:  mov    0xc(%ebp),%eax
082267e1 +0x53f:  mov    %eax,(%esp)
082267e4 +0x542:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082267e9 +0x547:  mov    $0x0,%ebx
082267ee +0x54c:  jmp    08226bce <+0x92c>
082267f3 +0x551:  addl   $0x1,-0x18(%ebp)
082267f7 +0x555:  movzbl -0x19c(%ebp),%eax
082267fe +0x55c:  movzbl %al,%eax
08226801 +0x55f:  cmp    -0x18(%ebp),%eax
08226804 +0x562:  setg   %al
08226807 +0x565:  test   %al,%al
08226809 +0x567:  jne    0822651e <+0x27c>
0822680f +0x56d:  movl   $0x0,-0x12d(%ebp)
08226819 +0x577:  movl   $0x100,0x8(%esp)
08226821 +0x57f:  movl   $0x0,0x4(%esp)
08226829 +0x587:  lea    -0x1cf(%ebp),%eax
0822682f +0x58d:  add    $0xa6,%eax
08226834 +0x592:  mov    %eax,(%esp)
08226837 +0x595:  call   0807dcc0 <_init+0x5b8>
0822683c +0x59a:  lea    -0x1cf(%ebp),%eax
08226842 +0x5a0:  add    $0xa2,%eax
08226847 +0x5a5:  mov    %eax,0x4(%esp)
0822684b +0x5a9:  mov    0x10(%ebp),%eax
0822684e +0x5ac:  mov    %eax,(%esp)
08226851 +0x5af:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08226856 +0x5b4:  xor    $0x1,%eax
08226859 +0x5b7:  test   %al,%al
0822685b +0x5b9:  je     08226888 <+0x5e6>
0822685d +0x5bb:  movl   $0x0,0xc(%esp)
08226865 +0x5c3:  movl   $0x0,0x8(%esp)
0822686d +0x5cb:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08226875 +0x5d3:  movl   $0xe229,(%esp)
0822687c +0x5da:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08226881 +0x5df:  mov    %eax,%ebx
08226883 +0x5e1:  jmp    08226bce <+0x92c>
08226888 +0x5e6:  mov    -0x12d(%ebp),%eax
0822688e +0x5ec:  mov    %eax,0xc(%esp)
08226892 +0x5f0:  movl   $0x100,0x8(%esp)
0822689a +0x5f8:  lea    -0x1cf(%ebp),%eax
082268a0 +0x5fe:  add    $0xa6,%eax
082268a5 +0x603:  mov    %eax,0x4(%esp)
082268a9 +0x607:  mov    0x10(%ebp),%eax
082268ac +0x60a:  mov    %eax,(%esp)
082268af +0x60d:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
082268b4 +0x612:  xor    $0x1,%eax
082268b7 +0x615:  test   %al,%al
082268b9 +0x617:  je     082268e6 <+0x644>
082268bb +0x619:  movl   $0x0,0xc(%esp)
082268c3 +0x621:  movl   $0x0,0x8(%esp)
082268cb +0x629:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082268d3 +0x631:  movl   $0xe22b,(%esp)
082268da +0x638:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082268df +0x63d:  mov    %eax,%ebx
082268e1 +0x63f:  jmp    08226bce <+0x92c>
082268e6 +0x644:  lea    -0x21(%ebp),%eax
082268e9 +0x647:  mov    %eax,(%esp)
082268ec +0x64a:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
082268f1 +0x64f:  lea    -0x21(%ebp),%eax
082268f4 +0x652:  mov    %eax,0x8(%esp)
082268f8 +0x656:  lea    -0x1cf(%ebp),%eax
082268fe +0x65c:  add    $0xa6,%eax
08226903 +0x661:  mov    %eax,0x4(%esp)
08226907 +0x665:  lea    -0x28(%ebp),%eax
0822690a +0x668:  mov    %eax,(%esp)
0822690d +0x66b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08226912 +0x670:  jmp    0822692f <+0x68d>
08226914 +0x672:  mov    %edx,%ebx
08226916 +0x674:  mov    %eax,%esi
08226918 +0x676:  lea    -0x21(%ebp),%eax
0822691b +0x679:  mov    %eax,(%esp)
0822691e +0x67c:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08226923 +0x681:  mov    %esi,%eax
08226925 +0x683:  mov    %ebx,%edx
08226927 +0x685:  mov    %eax,(%esp)
0822692a +0x688:  call   08ae3750 <_Unwind_Resume>
0822692f +0x68d:  lea    -0x21(%ebp),%eax
08226932 +0x690:  mov    %eax,(%esp)
08226935 +0x693:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0822693a +0x698:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
0822693f +0x69d:  lea    -0x28(%ebp),%edx
08226942 +0x6a0:  mov    %edx,0x4(%esp)
08226946 +0x6a4:  mov    %eax,(%esp)
08226949 +0x6a7:  call   0862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>  ; CSyncSlangFilter::HasSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0822694e +0x6ac:  test   %al,%al
08226950 +0x6ae:  je     08226977 <+0x6d5>
08226952 +0x6b0:  movl   $0x9f,0x8(%esp)
0822695a +0x6b8:  movl   $0x13c,0x4(%esp)
08226962 +0x6c0:  mov    0xc(%ebp),%eax
08226965 +0x6c3:  mov    %eax,(%esp)
08226968 +0x6c6:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822696d +0x6cb:  mov    $0x0,%ebx
08226972 +0x6d0:  jmp    08226bc3 <+0x921>
08226977 +0x6d5:  lea    -0x1cf(%ebp),%eax
0822697d +0x6db:  add    $0xa6,%eax
08226982 +0x6e0:  mov    %eax,(%esp)
08226985 +0x6e3:  call   0807e3b0 <_init+0xca8>
0822698a +0x6e8:  mov    -0x12d(%ebp),%edx
08226990 +0x6ee:  cmp    %edx,%eax
08226992 +0x6f0:  je     082269bf <+0x71d>
08226994 +0x6f2:  movl   $0x0,0xc(%esp)
0822699c +0x6fa:  movl   $0x0,0x8(%esp)
082269a4 +0x702:  movl   $&_ZZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082269ac +0x70a:  movl   $0xe237,(%esp)
082269b3 +0x711:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082269b8 +0x716:  mov    %eax,%ebx
082269ba +0x718:  jmp    08226bc3 <+0x921>
082269bf +0x71d:  mov    0xc(%ebp),%eax
082269c2 +0x720:  mov    %eax,(%esp)
082269c5 +0x723:  call   0822f380 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a2a
082269ca +0x728:  xor    $0x1,%eax
082269cd +0x72b:  test   %al,%al
082269cf +0x72d:  je     08226a12 <+0x770>
082269d1 +0x72f:  mov    -0x1a0(%ebp),%edx
082269d7 +0x735:  mov    0xc(%ebp),%eax
082269da +0x738:  mov    %edx,0x4(%esp)
082269de +0x73c:  mov    %eax,(%esp)
082269e1 +0x73f:  call   08646496 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj>  ; CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(unsigned int)
082269e6 +0x744:  xor    $0x1,%eax
082269e9 +0x747:  test   %al,%al
082269eb +0x749:  je     08226a12 <+0x770>
082269ed +0x74b:  movl   $0x46,0x8(%esp)
082269f5 +0x753:  movl   $0x13c,0x4(%esp)
082269fd +0x75b:  mov    0xc(%ebp),%eax
08226a00 +0x75e:  mov    %eax,(%esp)
08226a03 +0x761:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08226a08 +0x766:  mov    $0x0,%ebx
08226a0d +0x76b:  jmp    08226bc3 <+0x921>
08226a12 +0x770:  mov    -0x1a0(%ebp),%eax
08226a18 +0x776:  test   %eax,%eax
08226a1a +0x778:  je     08226a32 <+0x790>
08226a1c +0x77a:  mov    0xc(%ebp),%eax
08226a1f +0x77d:  mov    %eax,(%esp)
08226a22 +0x780:  call   0868a51a <_ZN5CUser18reqSendMailCertifyEv>  ; CUser::reqSendMailCertify()
08226a27 +0x785:  test   %al,%al
08226a29 +0x787:  je     08226a32 <+0x790>
08226a2b +0x789:  mov    $0x1,%eax
08226a30 +0x78e:  jmp    08226a37 <+0x795>
08226a32 +0x790:  mov    $0x0,%eax
08226a37 +0x795:  test   %al,%al
08226a39 +0x797:  je     08226a5a <+0x7b8>
08226a3b +0x799:  lea    -0x1cf(%ebp),%eax
08226a41 +0x79f:  mov    %eax,0x4(%esp)
08226a45 +0x7a3:  mov    0xc(%ebp),%eax
08226a48 +0x7a6:  mov    %eax,(%esp)
08226a4b +0x7a9:  call   0868a4e8 <_ZN5CUser20set_MultimailMsgDataEP22MSG_MULTI_MAILBOX_SEND>  ; CUser::set_MultimailMsgData(MSG_MULTI_MAILBOX_SEND*)
08226a50 +0x7ae:  mov    $0x0,%ebx
08226a55 +0x7b3:  jmp    08226bc3 <+0x921>
08226a5a +0x7b8:  lea    -0x1cf(%ebp),%eax
08226a60 +0x7be:  mov    %eax,0x4(%esp)
08226a64 +0x7c2:  lea    -0x4157(%ebp),%eax
08226a6a +0x7c8:  mov    %eax,(%esp)
08226a6d +0x7cb:  call   08238086 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd730>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd730
08226a72 +0x7d0:  lea    -0x4157(%ebp),%eax
08226a78 +0x7d6:  mov    %eax,0x8(%esp)
08226a7c +0x7da:  lea    -0x1cf(%ebp),%eax
08226a82 +0x7e0:  add    $0x11,%eax
08226a85 +0x7e3:  mov    %eax,0x4(%esp)
08226a89 +0x7e7:  mov    0xc(%ebp),%eax
08226a8c +0x7ea:  mov    %eax,(%esp)
08226a8f +0x7ed:  call   08555464 <_ZN8WongWork14CMailBoxHelper18ReqDBCheckReceiverEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER>  ; WongWork::CMailBoxHelper::ReqDBCheckReceiver(CUser*, char const*, MSG_CHECK_MAIL_RECEIVER*)
08226a94 +0x7f2:  mov    %eax,-0x1c(%ebp)
08226a97 +0x7f5:  cmpl   $0x0,-0x1c(%ebp)
08226a9b +0x7f9:  je     08226abf <+0x81d>
08226a9d +0x7fb:  mov    -0x1c(%ebp),%eax
08226aa0 +0x7fe:  movzbl %al,%eax
08226aa3 +0x801:  mov    %eax,0x8(%esp)
08226aa7 +0x805:  movl   $0x13c,0x4(%esp)
08226aaf +0x80d:  mov    0xc(%ebp),%eax
08226ab2 +0x810:  mov    %eax,(%esp)
08226ab5 +0x813:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08226aba +0x818:  jmp    08226ba1 <+0x8ff>
08226abf +0x81d:  movb   $0x0,-0x11(%ebp)
08226ac3 +0x821:  movl   $0x0,-0x10(%ebp)
08226aca +0x828:  jmp    08226b89 <+0x8e7>
08226acf +0x82d:  mov    -0x10(%ebp),%edx
08226ad2 +0x830:  mov    %edx,%eax
08226ad4 +0x832:  shl    $0x2,%eax
08226ad7 +0x835:  add    %edx,%eax
08226ad9 +0x837:  add    %eax,%eax
08226adb +0x839:  add    %edx,%eax
08226add +0x83b:  lea    -0x8(%ebp),%edx
08226ae0 +0x83e:  lea    (%edx,%eax,1),%eax
08226ae3 +0x841:  sub    $0x197,%eax
08226ae8 +0x846:  mov    0x7(%eax),%eax
08226aeb +0x849:  mov    %eax,%ebx
08226aed +0x84b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08226af2 +0x850:  mov    %ebx,0x4(%esp)
08226af6 +0x854:  mov    %eax,(%esp)
08226af9 +0x857:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08226afe +0x85c:  mov    %eax,-0xc(%ebp)
08226b01 +0x85f:  cmpl   $0x0,-0xc(%ebp)
08226b05 +0x863:  je     08226b44 <+0x8a2>
08226b07 +0x865:  mov    -0xc(%ebp),%eax
08226b0a +0x868:  mov    (%eax),%eax
08226b0c +0x86a:  add    $0x10,%eax
08226b0f +0x86d:  mov    (%eax),%edx
08226b11 +0x86f:  mov    -0xc(%ebp),%eax
08226b14 +0x872:  mov    %eax,(%esp)
08226b17 +0x875:  call   *%edx
08226b19 +0x877:  xor    $0x1,%eax
08226b1c +0x87a:  test   %al,%al
08226b1e +0x87c:  je     08226b37 <+0x895>
08226b20 +0x87e:  mov    -0xc(%ebp),%eax
08226b23 +0x881:  mov    %eax,(%esp)
08226b26 +0x884:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08226b2b +0x889:  cmp    $0x1,%eax
08226b2e +0x88c:  jg     08226b37 <+0x895>
08226b30 +0x88e:  mov    $0x1,%eax
08226b35 +0x893:  jmp    08226b3c <+0x89a>
08226b37 +0x895:  mov    $0x0,%eax
08226b3c +0x89a:  test   %al,%al
08226b3e +0x89c:  je     08226b44 <+0x8a2>
08226b40 +0x89e:  movb   $0x1,-0x11(%ebp)
08226b44 +0x8a2:  mov    -0x10(%ebp),%edx
08226b47 +0x8a5:  mov    %edx,%eax
08226b49 +0x8a7:  shl    $0x2,%eax
08226b4c +0x8aa:  add    %edx,%eax
08226b4e +0x8ac:  add    %eax,%eax
08226b50 +0x8ae:  add    %edx,%eax
08226b52 +0x8b0:  lea    -0x8(%ebp),%edx
08226b55 +0x8b3:  lea    (%edx,%eax,1),%eax
08226b58 +0x8b6:  sub    $0x197,%eax
08226b5d +0x8bb:  mov    0x7(%eax),%eax
08226b60 +0x8be:  test   %eax,%eax
08226b62 +0x8c0:  jne    08226b68 <+0x8c6>
08226b64 +0x8c2:  movb   $0x1,-0x11(%ebp)
08226b68 +0x8c6:  movzbl -0x11(%ebp),%edx
08226b6c +0x8ca:  mov    -0x1a0(%ebp),%eax
08226b72 +0x8d0:  mov    %edx,0x8(%esp)
08226b76 +0x8d4:  mov    %eax,0x4(%esp)
08226b7a +0x8d8:  mov    0xc(%ebp),%eax
08226b7d +0x8db:  mov    %eax,(%esp)
08226b80 +0x8de:  call   0864658a <_ZN5CUser18IncrementTradeGoldEji>  ; CUser::IncrementTradeGold(unsigned int, int)
08226b85 +0x8e3:  addl   $0x1,-0x10(%ebp)
08226b89 +0x8e7:  movzbl -0x19c(%ebp),%eax
08226b90 +0x8ee:  movzbl %al,%eax
08226b93 +0x8f1:  cmp    -0x10(%ebp),%eax
08226b96 +0x8f4:  setg   %al
08226b99 +0x8f7:  test   %al,%al
08226b9b +0x8f9:  jne    08226acf <+0x82d>
08226ba1 +0x8ff:  mov    $0x0,%ebx
08226ba6 +0x904:  jmp    08226bc3 <+0x921>
08226ba8 +0x906:  mov    %edx,%ebx
08226baa +0x908:  mov    %eax,%esi
08226bac +0x90a:  lea    -0x28(%ebp),%eax
08226baf +0x90d:  mov    %eax,(%esp)
08226bb2 +0x910:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08226bb7 +0x915:  mov    %esi,%eax
08226bb9 +0x917:  mov    %ebx,%edx
08226bbb +0x919:  mov    %eax,(%esp)
08226bbe +0x91c:  call   08ae3750 <_Unwind_Resume>
08226bc3 +0x921:  lea    -0x28(%ebp),%eax
08226bc6 +0x924:  mov    %eax,(%esp)
08226bc9 +0x927:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08226bce +0x92c:  mov    %ebx,%eax
08226bd0 +0x92e:  add    $0x4160,%esp
08226bd6 +0x934:  pop    %ebx
08226bd7 +0x935:  pop    %esi
08226bd8 +0x936:  pop    %ebp
08226bd9 +0x937:  ret
```

## 反编译 C

```c
// Dispatcher_MultiMailBoxSend::dispatch_sig @ 0x82262a2

/* Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_MultiMailBoxSend::dispatch_sig
          (Dispatcher_MultiMailBoxSend *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CSyncSlangFilter *this_00;
  size_t sVar6;
  CDataManager *this_01;
  MSG_CHECK_MAIL_RECEIVER local_415b [16264];
  MSG_MULTI_MAILBOX_SEND local_1d3 [13];
  int local_1c6;
  char acStack_1c2 [30];
  uint local_1a4;
  byte local_1a0;
  uchar uStack_19f;
  ushort uStack_19e;
  ulong auStack_19c [26];
  size_t local_131;
  char acStack_12d [256];
  bool local_2d;
  string local_2c;
  allocator<char> local_25;
  uint local_24;
  uint local_20;
  int local_1c;
  byte local_15;
  int local_14;
  CItem *local_10;
  
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 == 3) &&
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return 0;
  }
  local_24 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x40);
  if (local_24 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x13c,local_24 & 0xff);
    return 0;
  }
  cVar3 = CUser::isHackUser(param_1);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x13c,0x17);
    return 0;
  }
  cVar3 = PacketBuf::get_int(param_2,&local_1c6);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xe1ea,
                     "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
    return uVar5;
  }
  if (local_1c6 < 1) {
    uVar5 = LineFunc(0xe1ed,
                     "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
    return uVar5;
  }
  cVar3 = PacketBuf::get_str(param_2,acStack_1c2,0x1e,local_1c6);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xe1f0,
                     "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
    return uVar5;
  }
  cVar3 = PacketBuf::get_int(param_2,&local_1a4);
  if (cVar3 == '\x01') {
    local_1a0 = 1;
    cVar3 = PacketBuf::get_byte(param_2,&local_1a0);
    if (cVar3 != '\x01') {
      uVar5 = LineFunc(0xe1f7,
                       "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)",0
                       ,0);
      return uVar5;
    }
    if (10 < local_1a0) {
      uVar5 = LineFunc(0xe1fa,
                       "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)",0
                       ,0);
      return uVar5;
    }
    local_1c = 0;
    while( true ) {
      if ((int)(uint)local_1a0 <= local_1c) {
        local_131 = 0;
        memset(acStack_12d,0,0x100);
        cVar3 = PacketBuf::get_int(param_2,(int *)&local_131);
        if (cVar3 != '\x01') {
          uVar5 = LineFunc(0xe229,
                           "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar5;
        }
        cVar3 = PacketBuf::get_str(param_2,acStack_12d,0x100,local_131);
        if (cVar3 == '\x01') {
          std::allocator<char>::allocator();
                    /* try { // try from 0822690d to 08226911 has its CatchHandler @ 08226914 */
          std::string::string((string *)&local_2c,acStack_12d,(allocator *)&local_25);
          std::allocator<char>::~allocator(&local_25);
                    /* try { // try from 0822693a to 08226b84 has its CatchHandler @ 08226ba8 */
          this_00 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
          cVar3 = CSyncSlangFilter::HasSlang(this_00,&local_2c);
          if (cVar3 == '\0') {
            sVar6 = strlen(acStack_12d);
            if (sVar6 == local_131) {
              cVar3 = CUserCharacInfo::GetReliablePerson((CUserCharacInfo *)param_1);
              if ((cVar3 == '\x01') ||
                 (cVar3 = CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily
                                    ((CUserCharacInfo *)param_1,local_1a4), cVar3 == '\x01')) {
                if ((local_1a4 == 0) || (cVar3 = CUser::reqSendMailCertify(param_1), cVar3 == '\0'))
                {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  CUser::set_MultimailMsgData(param_1,local_1d3);
                  uVar5 = 0;
                }
                else {
                  MSG_CHECK_MAIL_RECEIVER::
                  set<(MSG_CHECK_MAIL_RECEIVER::ENUM_MAILBOX_CHECKTYPE)2,MSG_MULTI_MAILBOX_SEND>
                            (local_415b,local_1d3);
                  local_20 = WongWork::CMailBoxHelper::ReqDBCheckReceiver
                                       (param_1,acStack_1c2,local_415b);
                  if (local_20 == 0) {
                    local_15 = 0;
                    for (local_14 = 0; local_14 < (int)(uint)local_1a0; local_14 = local_14 + 1) {
                      iVar4 = *(int *)((int)auStack_19c + local_14 * 0xb);
                      this_01 = (CDataManager *)G_CDataManager();
                      local_10 = (CItem *)CDataManager::find_item(this_01,iVar4);
                      if (local_10 != (CItem *)0x0) {
                        cVar3 = (**(code **)(*(int *)local_10 + 0x10))(local_10);
                        if ((cVar3 == '\x01') || (iVar4 = CItem::get_rarity(local_10), 1 < iVar4)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          local_15 = 1;
                        }
                      }
                      if (*(int *)((int)auStack_19c + local_14 * 0xb) == 0) {
                        local_15 = 1;
                      }
                      CUser::IncrementTradeGold(param_1,local_1a4,(uint)local_15);
                    }
                  }
                  else {
                    CUser::SendCmdErrorPacket(param_1,0x13c,local_20 & 0xff);
                  }
                  uVar5 = 0;
                }
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0x13c,0x46);
                uVar5 = 0;
              }
            }
            else {
              uVar5 = LineFunc(0xe237,
                               "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x13c,0x9f);
            uVar5 = 0;
          }
          std::string::~string((string *)&local_2c);
          return uVar5;
        }
        uVar5 = LineFunc(0xe22b,
                         "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar5;
      }
      cVar3 = PacketBuf::get_byte(param_2,&uStack_19f + local_1c * 0xb);
      if (cVar3 != '\x01') {
        uVar5 = LineFunc(0xe1ff,
                         "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar5;
      }
      cVar3 = PacketBuf::get_short(param_2,(ushort *)((int)auStack_19c + local_1c * 0xb + -2));
      if (cVar3 != '\x01') {
        uVar5 = LineFunc(0xe202,
                         "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar5;
      }
      cVar3 = PacketBuf::get_int(param_2,(ulong *)((int)auStack_19c + local_1c * 0xb));
      if (cVar3 != '\x01') {
        uVar5 = LineFunc(0xe205,
                         "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar5;
      }
      if (*(int *)((int)auStack_19c + local_1c * 0xb) == 0) break;
      cVar3 = PacketBuf::get_int(param_2,(int *)((int)auStack_19c + local_1c * 0xb + 4));
      if (cVar3 != '\x01') {
        uVar5 = LineFunc(0xe20e,
                         "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar5;
      }
      uVar1 = *(ushort *)((int)auStack_19c + local_1c * 0xb + -2);
      iVar4 = GetInvenTypeFromItemSpace((&uStack_19f)[local_1c * 0xb]);
      cVar3 = CUser::CheckItemLock(param_1,iVar4,(uint)uVar1);
      if (cVar3 != '\0') {
        CUser::SendCmdErrorPacket(param_1,0x13c,0xd5);
        return 0;
      }
      local_2d = true;
      uVar1 = *(ushort *)((int)auStack_19c + local_1c * 0xb + -2);
      iVar4 = GetInvenTypeFromItemSpace((&uStack_19f)[local_1c * 0xb]);
      CheckItemTradeLimitCountToMoveByUser(param_1,iVar4,(uint)uVar1,&local_2d);
      if (local_2d != true) {
        CUser::SendCmdErrorPacket(param_1,0x13c,0x72);
        return 0;
      }
      local_1c = local_1c + 1;
    }
    CUser::SendCmdErrorPacket(param_1,0x13c,0x11);
    return 0;
  }
  uVar5 = LineFunc(0xe1f3,
                   "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return uVar5;
}
```
