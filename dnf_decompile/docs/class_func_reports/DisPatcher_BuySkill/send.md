# send

`_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase`

`DisPatcher_BuySkill::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuySkill` | `0x081bf468` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bf468  _ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase
#           DisPatcher_BuySkill::send(CUser*, ParamBase&)
# range [0x081bf468, 0x081bf8bd]
081bf468 +0x000:  push   %ebp
081bf469 +0x001:  mov    %esp,%ebp
081bf46b +0x003:  push   %esi
081bf46c +0x004:  push   %ebx
081bf46d +0x005:  sub    $0x40,%esp
081bf470 +0x008:  mov    0x10(%ebp),%eax
081bf473 +0x00b:  mov    %eax,-0x14(%ebp)
081bf476 +0x00e:  lea    -0x20(%ebp),%eax
081bf479 +0x011:  mov    %eax,(%esp)
081bf47c +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081bf481 +0x019:  movl   $0x1f,0x8(%esp)
081bf489 +0x021:  movl   $0x1,0x4(%esp)
081bf491 +0x029:  lea    -0x20(%ebp),%eax
081bf494 +0x02c:  mov    %eax,(%esp)
081bf497 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081bf49c +0x034:  mov    -0x14(%ebp),%eax
081bf49f +0x037:  mov    0x350(%eax),%eax
081bf4a5 +0x03d:  test   %eax,%eax
081bf4a7 +0x03f:  jns    081bf57b <+0x113>
081bf4ad +0x045:  movl   $0x0,0x4(%esp)
081bf4b5 +0x04d:  lea    -0x20(%ebp),%eax
081bf4b8 +0x050:  mov    %eax,(%esp)
081bf4bb +0x053:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf4c0 +0x058:  mov    -0x14(%ebp),%eax
081bf4c3 +0x05b:  mov    0x350(%eax),%eax
081bf4c9 +0x061:  add    $0x6,%eax
081bf4cc +0x064:  cmp    $0x5,%eax
081bf4cf +0x067:  ja     081bf55a <+0xf2>
081bf4d5 +0x06d:  mov    &data#39462280(.rodata)(,%eax,4),%eax
081bf4dc +0x074:  jmp    *%eax
081bf4de +0x076:  movl   $0x15,0x4(%esp)
081bf4e6 +0x07e:  lea    -0x20(%ebp),%eax
081bf4e9 +0x081:  mov    %eax,(%esp)
081bf4ec +0x084:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf4f1 +0x089:  jmp    081bf55a <+0xf2>
081bf4f3 +0x08b:  movl   $0x16,0x4(%esp)
081bf4fb +0x093:  lea    -0x20(%ebp),%eax
081bf4fe +0x096:  mov    %eax,(%esp)
081bf501 +0x099:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf506 +0x09e:  jmp    081bf55a <+0xf2>
081bf508 +0x0a0:  movl   $0x12,0x4(%esp)
081bf510 +0x0a8:  lea    -0x20(%ebp),%eax
081bf513 +0x0ab:  mov    %eax,(%esp)
081bf516 +0x0ae:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf51b +0x0b3:  jmp    081bf55a <+0xf2>
081bf51d +0x0b5:  movl   $0x1,0x4(%esp)
081bf525 +0x0bd:  lea    -0x20(%ebp),%eax
081bf528 +0x0c0:  mov    %eax,(%esp)
081bf52b +0x0c3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf530 +0x0c8:  jmp    081bf55a <+0xf2>
081bf532 +0x0ca:  movl   $0x5b,0x4(%esp)
081bf53a +0x0d2:  lea    -0x20(%ebp),%eax
081bf53d +0x0d5:  mov    %eax,(%esp)
081bf540 +0x0d8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf545 +0x0dd:  jmp    081bf55a <+0xf2>
081bf547 +0x0df:  movl   $0x5c,0x4(%esp)
081bf54f +0x0e7:  lea    -0x20(%ebp),%eax
081bf552 +0x0ea:  mov    %eax,(%esp)
081bf555 +0x0ed:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf55a +0x0f2:  mov    -0x14(%ebp),%eax
081bf55d +0x0f5:  movzbl 0x354(%eax),%eax
081bf564 +0x0fc:  movzbl %al,%eax
081bf567 +0x0ff:  mov    %eax,0x4(%esp)
081bf56b +0x103:  lea    -0x20(%ebp),%eax
081bf56e +0x106:  mov    %eax,(%esp)
081bf571 +0x109:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf576 +0x10e:  jmp    081bf86a <+0x402>
081bf57b +0x113:  movl   $0x1,0x4(%esp)
081bf583 +0x11b:  lea    -0x20(%ebp),%eax
081bf586 +0x11e:  mov    %eax,(%esp)
081bf589 +0x121:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf58e +0x126:  mov    0xc(%ebp),%eax
081bf591 +0x129:  mov    %eax,(%esp)
081bf594 +0x12c:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081bf599 +0x131:  movsbl %al,%eax
081bf59c +0x134:  mov    %eax,0x4(%esp)
081bf5a0 +0x138:  lea    -0x20(%ebp),%eax
081bf5a3 +0x13b:  mov    %eax,(%esp)
081bf5a6 +0x13e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf5ab +0x143:  mov    0xc(%ebp),%eax
081bf5ae +0x146:  mov    %eax,(%esp)
081bf5b1 +0x149:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081bf5b6 +0x14e:  mov    %eax,%ebx
081bf5b8 +0x150:  mov    0xc(%ebp),%eax
081bf5bb +0x153:  mov    %eax,(%esp)
081bf5be +0x156:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
081bf5c3 +0x15b:  mov    %ebx,0x4(%esp)
081bf5c7 +0x15f:  mov    %eax,(%esp)
081bf5ca +0x162:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
081bf5cf +0x167:  mov    %eax,0x4(%esp)
081bf5d3 +0x16b:  lea    -0x20(%ebp),%eax
081bf5d6 +0x16e:  mov    %eax,(%esp)
081bf5d9 +0x171:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081bf5de +0x176:  mov    0xc(%ebp),%eax
081bf5e1 +0x179:  mov    %eax,(%esp)
081bf5e4 +0x17c:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081bf5e9 +0x181:  cmp    $0xffffffff,%eax
081bf5ec +0x184:  je     081bf5fd <+0x195>
081bf5ee +0x186:  mov    0xc(%ebp),%eax
081bf5f1 +0x189:  mov    %eax,(%esp)
081bf5f4 +0x18c:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081bf5f9 +0x191:  test   %eax,%eax
081bf5fb +0x193:  jne    081bf604 <+0x19c>
081bf5fd +0x195:  mov    $0x1,%eax
081bf602 +0x19a:  jmp    081bf609 <+0x1a1>
081bf604 +0x19c:  mov    $0x0,%eax
081bf609 +0x1a1:  test   %al,%al
081bf60b +0x1a3:  je     081bf639 <+0x1d1>
081bf60d +0x1a5:  mov    0xc(%ebp),%eax
081bf610 +0x1a8:  mov    %eax,(%esp)
081bf613 +0x1ab:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
081bf618 +0x1b0:  movl   $0x2,0x4(%esp)
081bf620 +0x1b8:  mov    %eax,(%esp)
081bf623 +0x1bb:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
081bf628 +0x1c0:  mov    %eax,0x4(%esp)
081bf62c +0x1c4:  lea    -0x20(%ebp),%eax
081bf62f +0x1c7:  mov    %eax,(%esp)
081bf632 +0x1ca:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081bf637 +0x1cf:  jmp    081bf663 <+0x1fb>
081bf639 +0x1d1:  mov    0xc(%ebp),%eax
081bf63c +0x1d4:  mov    %eax,(%esp)
081bf63f +0x1d7:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
081bf644 +0x1dc:  movl   $0x3,0x4(%esp)
081bf64c +0x1e4:  mov    %eax,(%esp)
081bf64f +0x1e7:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
081bf654 +0x1ec:  mov    %eax,0x4(%esp)
081bf658 +0x1f0:  lea    -0x20(%ebp),%eax
081bf65b +0x1f3:  mov    %eax,(%esp)
081bf65e +0x1f6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081bf663 +0x1fb:  mov    -0x14(%ebp),%eax
081bf666 +0x1fe:  movzbl 0x355(%eax),%eax
081bf66d +0x205:  movsbl %al,%eax
081bf670 +0x208:  mov    %eax,0x4(%esp)
081bf674 +0x20c:  lea    -0x20(%ebp),%eax
081bf677 +0x20f:  mov    %eax,(%esp)
081bf67a +0x212:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf67f +0x217:  movl   $0x0,-0x10(%ebp)
081bf686 +0x21e:  jmp    081bf84f <+0x3e7>
081bf68b +0x223:  mov    -0x10(%ebp),%edx
081bf68e +0x226:  mov    -0x14(%ebp),%ecx
081bf691 +0x229:  mov    %edx,%eax
081bf693 +0x22b:  add    %eax,%eax
081bf695 +0x22d:  add    %edx,%eax
081bf697 +0x22f:  shl    $0x2,%eax
081bf69a +0x232:  movzbl 0x8(%eax,%ecx,1),%eax
081bf69f +0x237:  cmp    $0xc7,%al
081bf6a1 +0x239:  jbe    081bf71c <+0x2b4>
081bf6a3 +0x23b:  mov    -0x10(%ebp),%edx
081bf6a6 +0x23e:  mov    -0x14(%ebp),%ecx
081bf6a9 +0x241:  mov    %edx,%eax
081bf6ab +0x243:  add    %eax,%eax
081bf6ad +0x245:  add    %edx,%eax
081bf6af +0x247:  shl    $0x2,%eax
081bf6b2 +0x24a:  movzbl 0x8(%eax,%ecx,1),%eax
081bf6b7 +0x24f:  cmp    $0xd0,%al
081bf6b9 +0x251:  ja     081bf71c <+0x2b4>
081bf6bb +0x253:  movl   $0xff,0x4(%esp)
081bf6c3 +0x25b:  lea    -0x20(%ebp),%eax
081bf6c6 +0x25e:  mov    %eax,(%esp)
081bf6c9 +0x261:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf6ce +0x266:  mov    -0x10(%ebp),%edx
081bf6d1 +0x269:  mov    -0x14(%ebp),%ecx
081bf6d4 +0x26c:  mov    %edx,%eax
081bf6d6 +0x26e:  add    %eax,%eax
081bf6d8 +0x270:  add    %edx,%eax
081bf6da +0x272:  shl    $0x2,%eax
081bf6dd +0x275:  movzbl 0x8(%eax,%ecx,1),%eax
081bf6e2 +0x27a:  movzbl %al,%eax
081bf6e5 +0x27d:  mov    %eax,0x4(%esp)
081bf6e9 +0x281:  lea    -0x20(%ebp),%eax
081bf6ec +0x284:  mov    %eax,(%esp)
081bf6ef +0x287:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf6f4 +0x28c:  mov    -0x10(%ebp),%edx
081bf6f7 +0x28f:  mov    -0x14(%ebp),%ecx
081bf6fa +0x292:  mov    %edx,%eax
081bf6fc +0x294:  add    %eax,%eax
081bf6fe +0x296:  add    %edx,%eax
081bf700 +0x298:  shl    $0x2,%eax
081bf703 +0x29b:  lea    (%ecx,%eax,1),%eax
081bf706 +0x29e:  add    $0x10,%eax
081bf709 +0x2a1:  mov    (%eax),%eax
081bf70b +0x2a3:  mov    %eax,0x4(%esp)
081bf70f +0x2a7:  lea    -0x20(%ebp),%eax
081bf712 +0x2aa:  mov    %eax,(%esp)
081bf715 +0x2ad:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf71a +0x2b2:  jmp    081bf791 <+0x329>
081bf71c +0x2b4:  mov    -0x10(%ebp),%edx
081bf71f +0x2b7:  mov    -0x14(%ebp),%ecx
081bf722 +0x2ba:  mov    %edx,%eax
081bf724 +0x2bc:  add    %eax,%eax
081bf726 +0x2be:  add    %edx,%eax
081bf728 +0x2c0:  shl    $0x2,%eax
081bf72b +0x2c3:  lea    (%ecx,%eax,1),%eax
081bf72e +0x2c6:  add    $0xc,%eax
081bf731 +0x2c9:  mov    (%eax),%eax
081bf733 +0x2cb:  movsbl %al,%eax
081bf736 +0x2ce:  mov    %eax,0x4(%esp)
081bf73a +0x2d2:  lea    -0x20(%ebp),%eax
081bf73d +0x2d5:  mov    %eax,(%esp)
081bf740 +0x2d8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf745 +0x2dd:  mov    -0x10(%ebp),%edx
081bf748 +0x2e0:  mov    -0x14(%ebp),%ecx
081bf74b +0x2e3:  mov    %edx,%eax
081bf74d +0x2e5:  add    %eax,%eax
081bf74f +0x2e7:  add    %edx,%eax
081bf751 +0x2e9:  shl    $0x2,%eax
081bf754 +0x2ec:  movzbl 0x8(%eax,%ecx,1),%eax
081bf759 +0x2f1:  movzbl %al,%eax
081bf75c +0x2f4:  mov    %eax,0x4(%esp)
081bf760 +0x2f8:  lea    -0x20(%ebp),%eax
081bf763 +0x2fb:  mov    %eax,(%esp)
081bf766 +0x2fe:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf76b +0x303:  mov    -0x10(%ebp),%edx
081bf76e +0x306:  mov    -0x14(%ebp),%ecx
081bf771 +0x309:  mov    %edx,%eax
081bf773 +0x30b:  add    %eax,%eax
081bf775 +0x30d:  add    %edx,%eax
081bf777 +0x30f:  shl    $0x2,%eax
081bf77a +0x312:  lea    (%ecx,%eax,1),%eax
081bf77d +0x315:  add    $0x10,%eax
081bf780 +0x318:  mov    (%eax),%eax
081bf782 +0x31a:  mov    %eax,0x4(%esp)
081bf786 +0x31e:  lea    -0x20(%ebp),%eax
081bf789 +0x321:  mov    %eax,(%esp)
081bf78c +0x324:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf791 +0x329:  lea    -0x2c(%ebp),%eax
081bf794 +0x32c:  mov    %eax,(%esp)
081bf797 +0x32f:  call   0822db66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3210>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3210
081bf79c +0x334:  mov    -0x10(%ebp),%edx
081bf79f +0x337:  mov    -0x14(%ebp),%ecx
081bf7a2 +0x33a:  mov    %edx,%eax
081bf7a4 +0x33c:  add    %eax,%eax
081bf7a6 +0x33e:  add    %edx,%eax
081bf7a8 +0x340:  shl    $0x2,%eax
081bf7ab +0x343:  movzbl 0x8(%eax,%ecx,1),%eax
081bf7b0 +0x348:  movzbl %al,%eax
081bf7b3 +0x34b:  movl   $0x1,0xc(%esp)
081bf7bb +0x353:  lea    -0x2c(%ebp),%edx
081bf7be +0x356:  mov    %edx,0x8(%esp)
081bf7c2 +0x35a:  mov    %eax,0x4(%esp)
081bf7c6 +0x35e:  mov    0xc(%ebp),%eax
081bf7c9 +0x361:  mov    %eax,(%esp)
081bf7cc +0x364:  call   08654e6a <_ZN5CUser20findSkillCommandDataEiR18STSkillCommandDatab>  ; CUser::findSkillCommandData(int, STSkillCommandData&, bool)
081bf7d1 +0x369:  test   %al,%al
081bf7d3 +0x36b:  je     081bf838 <+0x3d0>
081bf7d5 +0x36d:  movl   $0x1,0x4(%esp)
081bf7dd +0x375:  lea    -0x20(%ebp),%eax
081bf7e0 +0x378:  mov    %eax,(%esp)
081bf7e3 +0x37b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf7e8 +0x380:  movzbl -0x2a(%ebp),%eax
081bf7ec +0x384:  movsbl %al,%eax
081bf7ef +0x387:  mov    %eax,0x4(%esp)
081bf7f3 +0x38b:  lea    -0x20(%ebp),%eax
081bf7f6 +0x38e:  mov    %eax,(%esp)
081bf7f9 +0x391:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf7fe +0x396:  movl   $0x0,-0xc(%ebp)
081bf805 +0x39d:  jmp    081bf825 <+0x3bd>
081bf807 +0x39f:  mov    -0xc(%ebp),%eax
081bf80a +0x3a2:  movzbl -0x29(%ebp,%eax,1),%eax
081bf80f +0x3a7:  movsbl %al,%eax
081bf812 +0x3aa:  mov    %eax,0x4(%esp)
081bf816 +0x3ae:  lea    -0x20(%ebp),%eax
081bf819 +0x3b1:  mov    %eax,(%esp)
081bf81c +0x3b4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf821 +0x3b9:  addl   $0x1,-0xc(%ebp)
081bf825 +0x3bd:  movzbl -0x2a(%ebp),%eax
081bf829 +0x3c1:  movsbl %al,%eax
081bf82c +0x3c4:  cmp    -0xc(%ebp),%eax
081bf82f +0x3c7:  setg   %al
081bf832 +0x3ca:  test   %al,%al
081bf834 +0x3cc:  jne    081bf807 <+0x39f>
081bf836 +0x3ce:  jmp    081bf84b <+0x3e3>
081bf838 +0x3d0:  movl   $0x0,0x4(%esp)
081bf840 +0x3d8:  lea    -0x20(%ebp),%eax
081bf843 +0x3db:  mov    %eax,(%esp)
081bf846 +0x3de:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081bf84b +0x3e3:  addl   $0x1,-0x10(%ebp)
081bf84f +0x3e7:  mov    -0x14(%ebp),%eax
081bf852 +0x3ea:  movzbl 0x355(%eax),%eax
081bf859 +0x3f1:  movsbl %al,%eax
081bf85c +0x3f4:  cmp    -0x10(%ebp),%eax
081bf85f +0x3f7:  setg   %al
081bf862 +0x3fa:  test   %al,%al
081bf864 +0x3fc:  jne    081bf68b <+0x223>
081bf86a +0x402:  movl   $0x1,0x4(%esp)
081bf872 +0x40a:  lea    -0x20(%ebp),%eax
081bf875 +0x40d:  mov    %eax,(%esp)
081bf878 +0x410:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081bf87d +0x415:  lea    -0x20(%ebp),%eax
081bf880 +0x418:  mov    %eax,0x4(%esp)
081bf884 +0x41c:  mov    0xc(%ebp),%eax
081bf887 +0x41f:  mov    %eax,(%esp)
081bf88a +0x422:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081bf88f +0x427:  jmp    081bf8ac <+0x444>
081bf891 +0x429:  mov    %edx,%ebx
081bf893 +0x42b:  mov    %eax,%esi
081bf895 +0x42d:  lea    -0x20(%ebp),%eax
081bf898 +0x430:  mov    %eax,(%esp)
081bf89b +0x433:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081bf8a0 +0x438:  mov    %esi,%eax
081bf8a2 +0x43a:  mov    %ebx,%edx
081bf8a4 +0x43c:  mov    %eax,(%esp)
081bf8a7 +0x43f:  call   08ae3750 <_Unwind_Resume>
081bf8ac +0x444:  lea    -0x20(%ebp),%eax
081bf8af +0x447:  mov    %eax,(%esp)
081bf8b2 +0x44a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081bf8b7 +0x44f:  add    $0x40,%esp
081bf8ba +0x452:  pop    %ebx
081bf8bb +0x453:  pop    %esi
081bf8bc +0x454:  pop    %ebp
081bf8bd +0x455:  ret
```

## 反编译 C

```c
// DisPatcher_BuySkill::send @ 0x81bf468

/* DisPatcher_BuySkill::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_BuySkill::send(DisPatcher_BuySkill *this,CUser *param_1,ParamBase *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  SkillSlot *pSVar4;
  int iVar5;
  STSkillCommandData local_30 [2];
  char local_2e;
  char acStack_2d [9];
  PacketGuard local_24 [12];
  ParamBase *local_18;
  int local_14;
  int local_10;
  
  local_18 = param_2;
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 081bf497 to 081bf88e has its CatchHandler @ 081bf891 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1f);
  if (*(int *)(local_18 + 0x350) < 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    switch(*(undefined4 *)(local_18 + 0x350)) {
    case 0xfffffffa:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0x5c);
      break;
    case 0xfffffffb:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0x5b);
      break;
    case 0xfffffffc:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      break;
    case 0xfffffffd:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0x12);
      break;
    case 0xfffffffe:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0x16);
      break;
    case 0xffffffff:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0x15);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)(byte)local_18[0x354]);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
    cVar2 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)cVar2);
    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    iVar5 = SkillSlot::get_remain_sp_at_index(pSVar4,uVar3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,iVar5);
    iVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if ((iVar5 == -1) ||
       (iVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1), iVar5 == 0)
       ) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      iVar5 = SkillSlot::get_remain_sfp_at_index(pSVar4,2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,iVar5);
    }
    else {
      pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      iVar5 = SkillSlot::get_remain_sfp_at_index(pSVar4,3);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,iVar5);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)(char)local_18[0x355]);
    for (local_14 = 0; local_14 < (char)local_18[0x355]; local_14 = local_14 + 1) {
      if (((byte)local_18[local_14 * 0xc + 8] < 200) || (0xd0 < (byte)local_18[local_14 * 0xc + 8]))
      {
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,
                   (int)(char)*(undefined4 *)(local_18 + local_14 * 0xc + 0xc));
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)(byte)local_18[local_14 * 0xc + 8]);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,*(int *)(local_18 + local_14 * 0xc + 0x10));
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0xff);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)(byte)local_18[local_14 * 0xc + 8]);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,*(int *)(local_18 + local_14 * 0xc + 0x10));
      }
      STSkillCommandData::STSkillCommandData(local_30);
      cVar2 = CUser::findSkillCommandData
                        ((int)param_1,(STSkillCommandData *)(uint)(byte)local_18[local_14 * 0xc + 8]
                         ,SUB41(local_30,0));
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)local_2e);
        for (local_10 = 0; local_10 < local_2e; local_10 = local_10 + 1) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)acStack_2d[local_10]);
        }
      }
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  CUser::Send(param_1,local_24);
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
