# send_skill_info

`_ZN5CUser15send_skill_infoEv`

`CUser::send_skill_info()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866c46a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866c46a  _ZN5CUser15send_skill_infoEv
#           CUser::send_skill_info()
# range [0x0866c46a, 0x0866cac5]
0866c46a +0x000:  push   %ebp
0866c46b +0x001:  mov    %esp,%ebp
0866c46d +0x003:  push   %esi
0866c46e +0x004:  push   %ebx
0866c46f +0x005:  sub    $0x60,%esp
0866c472 +0x008:  lea    -0x38(%ebp),%eax
0866c475 +0x00b:  mov    %eax,(%esp)
0866c478 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0866c47d +0x013:  movl   $0x13,0x8(%esp)
0866c485 +0x01b:  movl   $0x0,0x4(%esp)
0866c48d +0x023:  lea    -0x38(%ebp),%eax
0866c490 +0x026:  mov    %eax,(%esp)
0866c493 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0866c498 +0x02e:  mov    0x8(%ebp),%eax
0866c49b +0x031:  mov    %eax,(%esp)
0866c49e +0x034:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866c4a3 +0x039:  movl   $0x0,0x4(%esp)
0866c4ab +0x041:  mov    %eax,(%esp)
0866c4ae +0x044:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866c4b3 +0x049:  mov    %eax,0x4(%esp)
0866c4b7 +0x04d:  lea    -0x38(%ebp),%eax
0866c4ba +0x050:  mov    %eax,(%esp)
0866c4bd +0x053:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866c4c2 +0x058:  lea    -0x38(%ebp),%eax
0866c4c5 +0x05b:  mov    %eax,(%esp)
0866c4c8 +0x05e:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0866c4cd +0x063:  mov    %eax,-0x3c(%ebp)
0866c4d0 +0x066:  movl   $0x0,-0x2c(%ebp)
0866c4d7 +0x06d:  movl   $0x0,0x4(%esp)
0866c4df +0x075:  lea    -0x38(%ebp),%eax
0866c4e2 +0x078:  mov    %eax,(%esp)
0866c4e5 +0x07b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c4ea +0x080:  movl   $0x0,-0x20(%ebp)
0866c4f1 +0x087:  jmp    0866c624 <+0x1ba>
0866c4f6 +0x08c:  mov    0x8(%ebp),%eax
0866c4f9 +0x08f:  mov    %eax,(%esp)
0866c4fc +0x092:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866c501 +0x097:  mov    -0x20(%ebp),%edx
0866c504 +0x09a:  add    $0x20,%edx
0866c507 +0x09d:  movzbl 0x6(%eax,%edx,2),%eax
0866c50c +0x0a2:  test   %al,%al
0866c50e +0x0a4:  setne  %al
0866c511 +0x0a7:  test   %al,%al
0866c513 +0x0a9:  je     0866c620 <+0x1b6>
0866c519 +0x0af:  mov    -0x20(%ebp),%eax
0866c51c +0x0b2:  mov    %eax,0x4(%esp)
0866c520 +0x0b6:  lea    -0x38(%ebp),%eax
0866c523 +0x0b9:  mov    %eax,(%esp)
0866c526 +0x0bc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c52b +0x0c1:  mov    0x8(%ebp),%eax
0866c52e +0x0c4:  mov    %eax,(%esp)
0866c531 +0x0c7:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866c536 +0x0cc:  mov    -0x20(%ebp),%edx
0866c539 +0x0cf:  add    $0x20,%edx
0866c53c +0x0d2:  movzbl 0x6(%eax,%edx,2),%eax
0866c541 +0x0d7:  movzbl %al,%eax
0866c544 +0x0da:  mov    %eax,0x4(%esp)
0866c548 +0x0de:  lea    -0x38(%ebp),%eax
0866c54b +0x0e1:  mov    %eax,(%esp)
0866c54e +0x0e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c553 +0x0e9:  mov    0x8(%ebp),%eax
0866c556 +0x0ec:  mov    %eax,(%esp)
0866c559 +0x0ef:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866c55e +0x0f4:  mov    -0x20(%ebp),%edx
0866c561 +0x0f7:  add    $0x20,%edx
0866c564 +0x0fa:  movzbl 0x7(%eax,%edx,2),%eax
0866c569 +0x0ff:  movsbl %al,%eax
0866c56c +0x102:  mov    %eax,0x4(%esp)
0866c570 +0x106:  lea    -0x38(%ebp),%eax
0866c573 +0x109:  mov    %eax,(%esp)
0866c576 +0x10c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c57b +0x111:  addl   $0x1,-0x2c(%ebp)
0866c57f +0x115:  lea    -0x48(%ebp),%eax
0866c582 +0x118:  mov    %eax,(%esp)
0866c585 +0x11b:  call   0822db66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3210>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3210
0866c58a +0x120:  mov    0x8(%ebp),%eax
0866c58d +0x123:  mov    %eax,(%esp)
0866c590 +0x126:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866c595 +0x12b:  mov    -0x20(%ebp),%edx
0866c598 +0x12e:  add    $0x20,%edx
0866c59b +0x131:  movzbl 0x6(%eax,%edx,2),%eax
0866c5a0 +0x136:  movzbl %al,%eax
0866c5a3 +0x139:  lea    -0x48(%ebp),%edx
0866c5a6 +0x13c:  mov    %edx,0x8(%esp)
0866c5aa +0x140:  mov    %eax,0x4(%esp)
0866c5ae +0x144:  mov    0x8(%ebp),%eax
0866c5b1 +0x147:  mov    %eax,(%esp)
0866c5b4 +0x14a:  call   08654b94 <_ZN5CUser20findSkillCommandDataEiR18STSkillCommandData>  ; CUser::findSkillCommandData(int, STSkillCommandData&)
0866c5b9 +0x14f:  test   %al,%al
0866c5bb +0x151:  je     0866c60d <+0x1a3>
0866c5bd +0x153:  movzbl -0x46(%ebp),%eax
0866c5c1 +0x157:  movsbl %al,%eax
0866c5c4 +0x15a:  mov    %eax,0x4(%esp)
0866c5c8 +0x15e:  lea    -0x38(%ebp),%eax
0866c5cb +0x161:  mov    %eax,(%esp)
0866c5ce +0x164:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c5d3 +0x169:  movl   $0x0,-0x1c(%ebp)
0866c5da +0x170:  jmp    0866c5fa <+0x190>
0866c5dc +0x172:  mov    -0x1c(%ebp),%eax
0866c5df +0x175:  movzbl -0x45(%ebp,%eax,1),%eax
0866c5e4 +0x17a:  movsbl %al,%eax
0866c5e7 +0x17d:  mov    %eax,0x4(%esp)
0866c5eb +0x181:  lea    -0x38(%ebp),%eax
0866c5ee +0x184:  mov    %eax,(%esp)
0866c5f1 +0x187:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c5f6 +0x18c:  addl   $0x1,-0x1c(%ebp)
0866c5fa +0x190:  movzbl -0x46(%ebp),%eax
0866c5fe +0x194:  movsbl %al,%eax
0866c601 +0x197:  cmp    -0x1c(%ebp),%eax
0866c604 +0x19a:  setg   %al
0866c607 +0x19d:  test   %al,%al
0866c609 +0x19f:  jne    0866c5dc <+0x172>
0866c60b +0x1a1:  jmp    0866c620 <+0x1b6>
0866c60d +0x1a3:  movl   $0x0,0x4(%esp)
0866c615 +0x1ab:  lea    -0x38(%ebp),%eax
0866c618 +0x1ae:  mov    %eax,(%esp)
0866c61b +0x1b1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c620 +0x1b6:  addl   $0x1,-0x20(%ebp)
0866c624 +0x1ba:  cmpl   $0xcb,-0x20(%ebp)
0866c62b +0x1c1:  setle  %al
0866c62e +0x1c4:  test   %al,%al
0866c630 +0x1c6:  jne    0866c4f6 <+0x8c>
0866c636 +0x1cc:  mov    0x8(%ebp),%eax
0866c639 +0x1cf:  mov    %eax,(%esp)
0866c63c +0x1d2:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
0866c641 +0x1d7:  mov    %eax,-0x28(%ebp)
0866c644 +0x1da:  mov    -0x28(%ebp),%eax
0866c647 +0x1dd:  movzbl 0x44(%eax),%eax
0866c64b +0x1e1:  movzbl %al,%eax
0866c64e +0x1e4:  mov    %eax,-0x24(%ebp)
0866c651 +0x1e7:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0866c656 +0x1ec:  mov    %eax,(%esp)
0866c659 +0x1ef:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
0866c65e +0x1f4:  test   %al,%al
0866c660 +0x1f6:  je     0866c669 <+0x1ff>
0866c662 +0x1f8:  movl   $0x0,-0x24(%ebp)
0866c669 +0x1ff:  movl   $0x0,-0x18(%ebp)
0866c670 +0x206:  jmp    0866c73f <+0x2d5>
0866c675 +0x20b:  mov    0x8(%ebp),%eax
0866c678 +0x20e:  mov    %eax,(%esp)
0866c67b +0x211:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0866c680 +0x216:  test   %al,%al
0866c682 +0x218:  je     0866c6b7 <+0x24d>
0866c684 +0x21a:  mov    0x8(%ebp),%eax
0866c687 +0x21d:  mov    %eax,(%esp)
0866c68a +0x220:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0866c68f +0x225:  test   %al,%al
0866c691 +0x227:  je     0866c6b7 <+0x24d>
0866c693 +0x229:  mov    -0x18(%ebp),%edx
0866c696 +0x22c:  mov    -0x28(%ebp),%ecx
0866c699 +0x22f:  mov    %edx,%eax
0866c69b +0x231:  shl    $0x2,%eax
0866c69e +0x234:  add    %edx,%eax
0866c6a0 +0x236:  lea    (%ecx,%eax,1),%eax
0866c6a3 +0x239:  add    $0x40,%eax
0866c6a6 +0x23c:  mov    0x5(%eax),%eax
0866c6a9 +0x23f:  cmp    $0xc7,%eax
0866c6ae +0x244:  jle    0866c6b7 <+0x24d>
0866c6b0 +0x246:  mov    $0x1,%eax
0866c6b5 +0x24b:  jmp    0866c6bc <+0x252>
0866c6b7 +0x24d:  mov    $0x0,%eax
0866c6bc +0x252:  test   %al,%al
0866c6be +0x254:  je     0866c73b <+0x2d1>
0866c6c0 +0x256:  mov    -0x18(%ebp),%eax
0866c6c3 +0x259:  add    $0x8a,%eax
0866c6c8 +0x25e:  mov    %eax,0x4(%esp)
0866c6cc +0x262:  lea    -0x38(%ebp),%eax
0866c6cf +0x265:  mov    %eax,(%esp)
0866c6d2 +0x268:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c6d7 +0x26d:  mov    -0x18(%ebp),%edx
0866c6da +0x270:  mov    -0x28(%ebp),%ecx
0866c6dd +0x273:  mov    %edx,%eax
0866c6df +0x275:  shl    $0x2,%eax
0866c6e2 +0x278:  add    %edx,%eax
0866c6e4 +0x27a:  lea    (%ecx,%eax,1),%eax
0866c6e7 +0x27d:  add    $0x40,%eax
0866c6ea +0x280:  mov    0x5(%eax),%eax
0866c6ed +0x283:  mov    %eax,0x4(%esp)
0866c6f1 +0x287:  lea    -0x38(%ebp),%eax
0866c6f4 +0x28a:  mov    %eax,(%esp)
0866c6f7 +0x28d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c6fc +0x292:  mov    -0x18(%ebp),%edx
0866c6ff +0x295:  mov    -0x28(%ebp),%ecx
0866c702 +0x298:  mov    %edx,%eax
0866c704 +0x29a:  shl    $0x2,%eax
0866c707 +0x29d:  add    %edx,%eax
0866c709 +0x29f:  lea    (%ecx,%eax,1),%eax
0866c70c +0x2a2:  add    $0x49,%eax
0866c70f +0x2a5:  movzbl (%eax),%eax
0866c712 +0x2a8:  movsbl %al,%eax
0866c715 +0x2ab:  mov    %eax,0x4(%esp)
0866c719 +0x2af:  lea    -0x38(%ebp),%eax
0866c71c +0x2b2:  mov    %eax,(%esp)
0866c71f +0x2b5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c724 +0x2ba:  addl   $0x1,-0x2c(%ebp)
0866c728 +0x2be:  movl   $0x0,0x4(%esp)
0866c730 +0x2c6:  lea    -0x38(%ebp),%eax
0866c733 +0x2c9:  mov    %eax,(%esp)
0866c736 +0x2cc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c73b +0x2d1:  addl   $0x1,-0x18(%ebp)
0866c73f +0x2d5:  mov    -0x18(%ebp),%eax
0866c742 +0x2d8:  cmp    -0x24(%ebp),%eax
0866c745 +0x2db:  setl   %al
0866c748 +0x2de:  test   %al,%al
0866c74a +0x2e0:  jne    0866c675 <+0x20b>
0866c750 +0x2e6:  mov    -0x2c(%ebp),%eax
0866c753 +0x2e9:  mov    %eax,0x8(%esp)
0866c757 +0x2ed:  lea    -0x3c(%ebp),%eax
0866c75a +0x2f0:  mov    %eax,0x4(%esp)
0866c75e +0x2f4:  lea    -0x38(%ebp),%eax
0866c761 +0x2f7:  mov    %eax,(%esp)
0866c764 +0x2fa:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0866c769 +0x2ff:  mov    0x8(%ebp),%eax
0866c76c +0x302:  mov    %eax,(%esp)
0866c76f +0x305:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866c774 +0x30a:  movl   $0x1,0x4(%esp)
0866c77c +0x312:  mov    %eax,(%esp)
0866c77f +0x315:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866c784 +0x31a:  mov    %eax,0x4(%esp)
0866c788 +0x31e:  lea    -0x38(%ebp),%eax
0866c78b +0x321:  mov    %eax,(%esp)
0866c78e +0x324:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866c793 +0x329:  lea    -0x38(%ebp),%eax
0866c796 +0x32c:  mov    %eax,(%esp)
0866c799 +0x32f:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0866c79e +0x334:  mov    %eax,-0x3c(%ebp)
0866c7a1 +0x337:  movl   $0x0,-0x2c(%ebp)
0866c7a8 +0x33e:  movl   $0x0,0x4(%esp)
0866c7b0 +0x346:  lea    -0x38(%ebp),%eax
0866c7b3 +0x349:  mov    %eax,(%esp)
0866c7b6 +0x34c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c7bb +0x351:  movl   $0x0,-0x14(%ebp)
0866c7c2 +0x358:  jmp    0866c901 <+0x497>
0866c7c7 +0x35d:  mov    0x8(%ebp),%eax
0866c7ca +0x360:  mov    %eax,(%esp)
0866c7cd +0x363:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866c7d2 +0x368:  mov    -0x14(%ebp),%edx
0866c7d5 +0x36b:  add    $0xe8,%edx
0866c7db +0x371:  movzbl 0xe(%eax,%edx,2),%eax
0866c7e0 +0x376:  test   %al,%al
0866c7e2 +0x378:  setne  %al
0866c7e5 +0x37b:  test   %al,%al
0866c7e7 +0x37d:  je     0866c8fd <+0x493>
0866c7ed +0x383:  mov    -0x14(%ebp),%eax
0866c7f0 +0x386:  mov    %eax,0x4(%esp)
0866c7f4 +0x38a:  lea    -0x38(%ebp),%eax
0866c7f7 +0x38d:  mov    %eax,(%esp)
0866c7fa +0x390:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c7ff +0x395:  mov    0x8(%ebp),%eax
0866c802 +0x398:  mov    %eax,(%esp)
0866c805 +0x39b:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866c80a +0x3a0:  mov    -0x14(%ebp),%edx
0866c80d +0x3a3:  add    $0xe8,%edx
0866c813 +0x3a9:  movzbl 0xe(%eax,%edx,2),%eax
0866c818 +0x3ae:  movzbl %al,%eax
0866c81b +0x3b1:  mov    %eax,0x4(%esp)
0866c81f +0x3b5:  lea    -0x38(%ebp),%eax
0866c822 +0x3b8:  mov    %eax,(%esp)
0866c825 +0x3bb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c82a +0x3c0:  mov    0x8(%ebp),%eax
0866c82d +0x3c3:  mov    %eax,(%esp)
0866c830 +0x3c6:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866c835 +0x3cb:  mov    -0x14(%ebp),%edx
0866c838 +0x3ce:  add    $0xe8,%edx
0866c83e +0x3d4:  movzbl 0xf(%eax,%edx,2),%eax
0866c843 +0x3d9:  movsbl %al,%eax
0866c846 +0x3dc:  mov    %eax,0x4(%esp)
0866c84a +0x3e0:  lea    -0x38(%ebp),%eax
0866c84d +0x3e3:  mov    %eax,(%esp)
0866c850 +0x3e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c855 +0x3eb:  addl   $0x1,-0x2c(%ebp)
0866c859 +0x3ef:  lea    -0x54(%ebp),%eax
0866c85c +0x3f2:  mov    %eax,(%esp)
0866c85f +0x3f5:  call   0822db66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3210>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3210
0866c864 +0x3fa:  mov    0x8(%ebp),%eax
0866c867 +0x3fd:  mov    %eax,(%esp)
0866c86a +0x400:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866c86f +0x405:  mov    -0x14(%ebp),%edx
0866c872 +0x408:  add    $0xe8,%edx
0866c878 +0x40e:  movzbl 0xe(%eax,%edx,2),%eax
0866c87d +0x413:  movzbl %al,%eax
0866c880 +0x416:  lea    -0x54(%ebp),%edx
0866c883 +0x419:  mov    %edx,0x8(%esp)
0866c887 +0x41d:  mov    %eax,0x4(%esp)
0866c88b +0x421:  mov    0x8(%ebp),%eax
0866c88e +0x424:  mov    %eax,(%esp)
0866c891 +0x427:  call   08654b94 <_ZN5CUser20findSkillCommandDataEiR18STSkillCommandData>  ; CUser::findSkillCommandData(int, STSkillCommandData&)
0866c896 +0x42c:  test   %al,%al
0866c898 +0x42e:  je     0866c8ea <+0x480>
0866c89a +0x430:  movzbl -0x52(%ebp),%eax
0866c89e +0x434:  movsbl %al,%eax
0866c8a1 +0x437:  mov    %eax,0x4(%esp)
0866c8a5 +0x43b:  lea    -0x38(%ebp),%eax
0866c8a8 +0x43e:  mov    %eax,(%esp)
0866c8ab +0x441:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c8b0 +0x446:  movl   $0x0,-0x10(%ebp)
0866c8b7 +0x44d:  jmp    0866c8d7 <+0x46d>
0866c8b9 +0x44f:  mov    -0x10(%ebp),%eax
0866c8bc +0x452:  movzbl -0x51(%ebp,%eax,1),%eax
0866c8c1 +0x457:  movsbl %al,%eax
0866c8c4 +0x45a:  mov    %eax,0x4(%esp)
0866c8c8 +0x45e:  lea    -0x38(%ebp),%eax
0866c8cb +0x461:  mov    %eax,(%esp)
0866c8ce +0x464:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c8d3 +0x469:  addl   $0x1,-0x10(%ebp)
0866c8d7 +0x46d:  movzbl -0x52(%ebp),%eax
0866c8db +0x471:  movsbl %al,%eax
0866c8de +0x474:  cmp    -0x10(%ebp),%eax
0866c8e1 +0x477:  setg   %al
0866c8e4 +0x47a:  test   %al,%al
0866c8e6 +0x47c:  jne    0866c8b9 <+0x44f>
0866c8e8 +0x47e:  jmp    0866c8fd <+0x493>
0866c8ea +0x480:  movl   $0x0,0x4(%esp)
0866c8f2 +0x488:  lea    -0x38(%ebp),%eax
0866c8f5 +0x48b:  mov    %eax,(%esp)
0866c8f8 +0x48e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c8fd +0x493:  addl   $0x1,-0x14(%ebp)
0866c901 +0x497:  cmpl   $0xcb,-0x14(%ebp)
0866c908 +0x49e:  setle  %al
0866c90b +0x4a1:  test   %al,%al
0866c90d +0x4a3:  jne    0866c7c7 <+0x35d>
0866c913 +0x4a9:  movl   $0x0,-0xc(%ebp)
0866c91a +0x4b0:  jmp    0866c9e9 <+0x57f>
0866c91f +0x4b5:  mov    0x8(%ebp),%eax
0866c922 +0x4b8:  mov    %eax,(%esp)
0866c925 +0x4bb:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0866c92a +0x4c0:  test   %al,%al
0866c92c +0x4c2:  je     0866c961 <+0x4f7>
0866c92e +0x4c4:  mov    0x8(%ebp),%eax
0866c931 +0x4c7:  mov    %eax,(%esp)
0866c934 +0x4ca:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
0866c939 +0x4cf:  test   %al,%al
0866c93b +0x4d1:  je     0866c961 <+0x4f7>
0866c93d +0x4d3:  mov    -0xc(%ebp),%edx
0866c940 +0x4d6:  mov    -0x28(%ebp),%ecx
0866c943 +0x4d9:  mov    %edx,%eax
0866c945 +0x4db:  shl    $0x2,%eax
0866c948 +0x4de:  add    %edx,%eax
0866c94a +0x4e0:  lea    (%ecx,%eax,1),%eax
0866c94d +0x4e3:  add    $0x40,%eax
0866c950 +0x4e6:  mov    0x5(%eax),%eax
0866c953 +0x4e9:  cmp    $0xc7,%eax
0866c958 +0x4ee:  jle    0866c961 <+0x4f7>
0866c95a +0x4f0:  mov    $0x1,%eax
0866c95f +0x4f5:  jmp    0866c966 <+0x4fc>
0866c961 +0x4f7:  mov    $0x0,%eax
0866c966 +0x4fc:  test   %al,%al
0866c968 +0x4fe:  je     0866c9e5 <+0x57b>
0866c96a +0x500:  mov    -0xc(%ebp),%eax
0866c96d +0x503:  add    $0x8a,%eax
0866c972 +0x508:  mov    %eax,0x4(%esp)
0866c976 +0x50c:  lea    -0x38(%ebp),%eax
0866c979 +0x50f:  mov    %eax,(%esp)
0866c97c +0x512:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c981 +0x517:  mov    -0xc(%ebp),%edx
0866c984 +0x51a:  mov    -0x28(%ebp),%ecx
0866c987 +0x51d:  mov    %edx,%eax
0866c989 +0x51f:  shl    $0x2,%eax
0866c98c +0x522:  add    %edx,%eax
0866c98e +0x524:  lea    (%ecx,%eax,1),%eax
0866c991 +0x527:  add    $0x40,%eax
0866c994 +0x52a:  mov    0x5(%eax),%eax
0866c997 +0x52d:  mov    %eax,0x4(%esp)
0866c99b +0x531:  lea    -0x38(%ebp),%eax
0866c99e +0x534:  mov    %eax,(%esp)
0866c9a1 +0x537:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c9a6 +0x53c:  mov    -0xc(%ebp),%edx
0866c9a9 +0x53f:  mov    -0x28(%ebp),%ecx
0866c9ac +0x542:  mov    %edx,%eax
0866c9ae +0x544:  shl    $0x2,%eax
0866c9b1 +0x547:  add    %edx,%eax
0866c9b3 +0x549:  lea    (%ecx,%eax,1),%eax
0866c9b6 +0x54c:  add    $0x49,%eax
0866c9b9 +0x54f:  movzbl (%eax),%eax
0866c9bc +0x552:  movsbl %al,%eax
0866c9bf +0x555:  mov    %eax,0x4(%esp)
0866c9c3 +0x559:  lea    -0x38(%ebp),%eax
0866c9c6 +0x55c:  mov    %eax,(%esp)
0866c9c9 +0x55f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c9ce +0x564:  addl   $0x1,-0x2c(%ebp)
0866c9d2 +0x568:  movl   $0x0,0x4(%esp)
0866c9da +0x570:  lea    -0x38(%ebp),%eax
0866c9dd +0x573:  mov    %eax,(%esp)
0866c9e0 +0x576:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866c9e5 +0x57b:  addl   $0x1,-0xc(%ebp)
0866c9e9 +0x57f:  mov    -0xc(%ebp),%eax
0866c9ec +0x582:  cmp    -0x24(%ebp),%eax
0866c9ef +0x585:  setl   %al
0866c9f2 +0x588:  test   %al,%al
0866c9f4 +0x58a:  jne    0866c91f <+0x4b5>
0866c9fa +0x590:  mov    -0x2c(%ebp),%eax
0866c9fd +0x593:  mov    %eax,0x8(%esp)
0866ca01 +0x597:  lea    -0x3c(%ebp),%eax
0866ca04 +0x59a:  mov    %eax,0x4(%esp)
0866ca08 +0x59e:  lea    -0x38(%ebp),%eax
0866ca0b +0x5a1:  mov    %eax,(%esp)
0866ca0e +0x5a4:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0866ca13 +0x5a9:  mov    0x8(%ebp),%eax
0866ca16 +0x5ac:  mov    %eax,(%esp)
0866ca19 +0x5af:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866ca1e +0x5b4:  movl   $0x2,0x4(%esp)
0866ca26 +0x5bc:  mov    %eax,(%esp)
0866ca29 +0x5bf:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866ca2e +0x5c4:  mov    %eax,0x4(%esp)
0866ca32 +0x5c8:  lea    -0x38(%ebp),%eax
0866ca35 +0x5cb:  mov    %eax,(%esp)
0866ca38 +0x5ce:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866ca3d +0x5d3:  mov    0x8(%ebp),%eax
0866ca40 +0x5d6:  mov    %eax,(%esp)
0866ca43 +0x5d9:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866ca48 +0x5de:  movl   $0x3,0x4(%esp)
0866ca50 +0x5e6:  mov    %eax,(%esp)
0866ca53 +0x5e9:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866ca58 +0x5ee:  mov    %eax,0x4(%esp)
0866ca5c +0x5f2:  lea    -0x38(%ebp),%eax
0866ca5f +0x5f5:  mov    %eax,(%esp)
0866ca62 +0x5f8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866ca67 +0x5fd:  movl   $0x1,0x4(%esp)
0866ca6f +0x605:  lea    -0x38(%ebp),%eax
0866ca72 +0x608:  mov    %eax,(%esp)
0866ca75 +0x60b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866ca7a +0x610:  lea    -0x38(%ebp),%eax
0866ca7d +0x613:  mov    %eax,0x4(%esp)
0866ca81 +0x617:  mov    0x8(%ebp),%eax
0866ca84 +0x61a:  mov    %eax,(%esp)
0866ca87 +0x61d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866ca8c +0x622:  mov    0x8(%ebp),%eax
0866ca8f +0x625:  mov    %eax,(%esp)
0866ca92 +0x628:  call   086924aa <_ZN5CUser18sendComboSkillListEv>  ; CUser::sendComboSkillList()
0866ca97 +0x62d:  jmp    0866cab4 <+0x64a>
0866ca99 +0x62f:  mov    %edx,%ebx
0866ca9b +0x631:  mov    %eax,%esi
0866ca9d +0x633:  lea    -0x38(%ebp),%eax
0866caa0 +0x636:  mov    %eax,(%esp)
0866caa3 +0x639:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866caa8 +0x63e:  mov    %esi,%eax
0866caaa +0x640:  mov    %ebx,%edx
0866caac +0x642:  mov    %eax,(%esp)
0866caaf +0x645:  call   08ae3750 <_Unwind_Resume>
0866cab4 +0x64a:  lea    -0x38(%ebp),%eax
0866cab7 +0x64d:  mov    %eax,(%esp)
0866caba +0x650:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866cabf +0x655:  add    $0x60,%esp
0866cac2 +0x658:  pop    %ebx
0866cac3 +0x659:  pop    %esi
0866cac4 +0x65a:  pop    %ebp
0866cac5 +0x65b:  ret
```

## 反编译 C

```c
// CUser::send_skill_info @ 0x866c46a

/* CUser::send_skill_info() */

void __thiscall CUser::send_skill_info(CUser *this)

{
  bool bVar1;
  char cVar2;
  SkillSlot *pSVar3;
  int iVar4;
  GameWorld *this_00;
  STSkillCommandData local_58 [2];
  char local_56;
  char acStack_55 [9];
  STSkillCommandData local_4c [2];
  char local_4a;
  char acStack_49 [9];
  int local_40;
  PacketGuard local_3c [12];
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 0866c493 to 0866ca96 has its CatchHandler @ 0866ca99 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x13);
  pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  iVar4 = SkillSlot::get_remain_sp_at_index(pSVar3,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,iVar4);
  local_40 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_3c);
  local_30 = 0;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
  for (local_24 = 0; local_24 < 0xcc; local_24 = local_24 + 1) {
    iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    if (*(char *)(iVar4 + 6 + (local_24 + 0x20) * 2) != '\0') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,local_24);
      iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_3c,(uint)*(byte *)(iVar4 + 6 + (local_24 + 0x20) * 2));
      iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_3c,(int)*(char *)(iVar4 + 7 + (local_24 + 0x20) * 2));
      local_30 = local_30 + 1;
      STSkillCommandData::STSkillCommandData(local_4c);
      iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      cVar2 = findSkillCommandData(this,(uint)*(byte *)(iVar4 + 6 + (local_24 + 0x20) * 2),local_4c)
      ;
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(int)local_4a);
        for (local_20 = 0; local_20 < local_4a; local_20 = local_20 + 1) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(int)acStack_49[local_20]);
        }
      }
    }
  }
  local_2c = GetGuildDBInfo(this);
  local_28 = (uint)*(byte *)(local_2c + 0x44);
  this_00 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPvPSkilTreeChannel(this_00);
  if (cVar2 != '\0') {
    local_28 = 0;
  }
  for (local_1c = 0; local_1c < (int)local_28; local_1c = local_1c + 1) {
    cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this);
    if (((cVar2 == '\0') ||
        (cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this), cVar2 == '\0')) ||
       (*(int *)(local_2c + local_1c * 5 + 0x45) < 200)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,local_1c + 0x8a);
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_3c,*(int *)(local_2c + local_1c * 5 + 0x45));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_3c,(int)*(char *)(local_2c + local_1c * 5 + 0x49));
      local_30 = local_30 + 1;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,&local_40,local_30);
  pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  iVar4 = SkillSlot::get_remain_sp_at_index(pSVar3,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,iVar4);
  local_40 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_3c);
  local_30 = 0;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
  for (local_18 = 0; local_18 < 0xcc; local_18 = local_18 + 1) {
    iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    if (*(char *)(iVar4 + 0xe + (local_18 + 0xe8) * 2) != '\0') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,local_18);
      iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_3c,(uint)*(byte *)(iVar4 + 0xe + (local_18 + 0xe8) * 2)
                );
      iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_3c,(int)*(char *)(iVar4 + 0xf + (local_18 + 0xe8) * 2))
      ;
      local_30 = local_30 + 1;
      STSkillCommandData::STSkillCommandData(local_58);
      iVar4 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      cVar2 = findSkillCommandData
                        (this,(uint)*(byte *)(iVar4 + 0xe + (local_18 + 0xe8) * 2),local_58);
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(int)local_56);
        for (local_14 = 0; local_14 < local_56; local_14 = local_14 + 1) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(int)acStack_55[local_14]);
        }
      }
    }
  }
  for (local_10 = 0; local_10 < (int)local_28; local_10 = local_10 + 1) {
    cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this);
    if (((cVar2 == '\0') ||
        (cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)this), cVar2 == '\0')) ||
       (*(int *)(local_2c + local_10 * 5 + 0x45) < 200)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,local_10 + 0x8a);
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_3c,*(int *)(local_2c + local_10 * 5 + 0x45));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_3c,(int)*(char *)(local_2c + local_10 * 5 + 0x49));
      local_30 = local_30 + 1;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,&local_40,local_30);
  pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  iVar4 = SkillSlot::get_remain_sfp_at_index(pSVar3,2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,iVar4);
  pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  iVar4 = SkillSlot::get_remain_sfp_at_index(pSVar3,3);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,iVar4);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  Send(this,local_3c);
  sendComboSkillList(this);
  PacketGuard::~PacketGuard(local_3c);
  return;
}
```
