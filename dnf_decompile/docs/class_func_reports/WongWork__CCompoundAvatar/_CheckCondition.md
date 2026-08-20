# _CheckCondition

`_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE`

`WongWork::CCompoundAvatar::_CheckCondition(CUser const*, WongWork::CCompoundAvatar::tagCompoundInfo const&) const`

| 类 | 地址 |
|---|---|
| `WongWork::CCompoundAvatar` | `0x0833260c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833260c  _ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE
#           WongWork::CCompoundAvatar::_CheckCondition(CUser const*, WongWork::CCompoundAvatar::tagCompoundInfo const&) const
# range [0x0833260c, 0x08332e4d]
0833260c +0x000:  push   %ebp
0833260d +0x001:  mov    %esp,%ebp
0833260f +0x003:  push   %ebx
08332610 +0x004:  sub    $0x44,%esp
08332613 +0x007:  mov    0x10(%ebp),%eax
08332616 +0x00a:  movzbl 0xe8(%eax),%eax
0833261d +0x011:  cmp    $0x4,%al
0833261f +0x013:  jne    0833263b <+0x2f>
08332621 +0x015:  mov    0x10(%ebp),%eax
08332624 +0x018:  mov    0x94(%eax),%eax
0833262a +0x01e:  cmp    $0x2898c4,%eax
0833262f +0x023:  je     0833263b <+0x2f>
08332631 +0x025:  mov    $0x11,%eax
08332636 +0x02a:  jmp    08332e49 <+0x83d>
0833263b +0x02f:  mov    0x10(%ebp),%eax
0833263e +0x032:  movzwl 0xd4(%eax),%eax
08332645 +0x039:  cmp    $0x63,%ax
08332649 +0x03d:  jbe    08332655 <+0x49>
0833264b +0x03f:  mov    $0x11,%eax
08332650 +0x044:  jmp    08332e49 <+0x83d>
08332655 +0x049:  mov    0x10(%ebp),%eax
08332658 +0x04c:  movzbl 0xd7(%eax),%eax
0833265f +0x053:  test   %al,%al
08332661 +0x055:  je     0833266d <+0x61>
08332663 +0x057:  mov    $0x11,%eax
08332668 +0x05c:  jmp    08332e49 <+0x83d>
0833266d +0x061:  mov    0x10(%ebp),%eax
08332670 +0x064:  mov    (%eax),%eax
08332672 +0x066:  cmp    $0xb,%eax
08332675 +0x069:  jne    08332681 <+0x75>
08332677 +0x06b:  mov    $0x17,%eax
0833267c +0x070:  jmp    08332e49 <+0x83d>
08332681 +0x075:  mov    0x10(%ebp),%eax
08332684 +0x078:  mov    0xc(%eax),%eax
08332687 +0x07b:  test   %eax,%eax
08332689 +0x07d:  je     08332695 <+0x89>
0833268b +0x07f:  mov    0x10(%ebp),%eax
0833268e +0x082:  mov    0x4c(%eax),%eax
08332691 +0x085:  test   %eax,%eax
08332693 +0x087:  jne    0833269f <+0x93>
08332695 +0x089:  mov    $0x11,%eax
0833269a +0x08e:  jmp    08332e49 <+0x83d>
0833269f +0x093:  mov    0x10(%ebp),%eax
083326a2 +0x096:  mov    0x11(%eax),%eax
083326a5 +0x099:  mov    %eax,(%esp)
083326a8 +0x09c:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
083326ad +0x0a1:  test   %al,%al
083326af +0x0a3:  jne    083326c3 <+0xb7>
083326b1 +0x0a5:  mov    0x10(%ebp),%eax
083326b4 +0x0a8:  mov    0x51(%eax),%eax
083326b7 +0x0ab:  mov    %eax,(%esp)
083326ba +0x0ae:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
083326bf +0x0b3:  test   %al,%al
083326c1 +0x0b5:  je     083326ca <+0xbe>
083326c3 +0x0b7:  mov    $0x1,%eax
083326c8 +0x0bc:  jmp    083326cf <+0xc3>
083326ca +0x0be:  mov    $0x0,%eax
083326cf +0x0c3:  test   %al,%al
083326d1 +0x0c5:  je     083326dd <+0xd1>
083326d3 +0x0c7:  mov    $0x1,%eax
083326d8 +0x0cc:  jmp    08332e49 <+0x83d>
083326dd +0x0d1:  mov    0x10(%ebp),%eax
083326e0 +0x0d4:  mov    0x88(%eax),%eax
083326e6 +0x0da:  mov    (%eax),%eax
083326e8 +0x0dc:  add    $0x10,%eax
083326eb +0x0df:  mov    (%eax),%edx
083326ed +0x0e1:  mov    0x10(%ebp),%eax
083326f0 +0x0e4:  mov    0x88(%eax),%eax
083326f6 +0x0ea:  mov    %eax,(%esp)
083326f9 +0x0ed:  call   *%edx
083326fb +0x0ef:  xor    $0x1,%eax
083326fe +0x0f2:  test   %al,%al
08332700 +0x0f4:  jne    08332727 <+0x11b>
08332702 +0x0f6:  mov    0x10(%ebp),%eax
08332705 +0x0f9:  mov    0x8c(%eax),%eax
0833270b +0x0ff:  mov    (%eax),%eax
0833270d +0x101:  add    $0x10,%eax
08332710 +0x104:  mov    (%eax),%edx
08332712 +0x106:  mov    0x10(%ebp),%eax
08332715 +0x109:  mov    0x8c(%eax),%eax
0833271b +0x10f:  mov    %eax,(%esp)
0833271e +0x112:  call   *%edx
08332720 +0x114:  xor    $0x1,%eax
08332723 +0x117:  test   %al,%al
08332725 +0x119:  je     0833272e <+0x122>
08332727 +0x11b:  mov    $0x1,%eax
0833272c +0x120:  jmp    08332733 <+0x127>
0833272e +0x122:  mov    $0x0,%eax
08332733 +0x127:  test   %al,%al
08332735 +0x129:  je     08332741 <+0x135>
08332737 +0x12b:  mov    $0x11,%eax
0833273c +0x130:  jmp    08332e49 <+0x83d>
08332741 +0x135:  mov    0x10(%ebp),%eax
08332744 +0x138:  mov    0x88(%eax),%eax
0833274a +0x13e:  mov    (%eax),%eax
0833274c +0x140:  add    $0xc,%eax
0833274f +0x143:  mov    (%eax),%edx
08332751 +0x145:  mov    0x10(%ebp),%eax
08332754 +0x148:  mov    0x88(%eax),%eax
0833275a +0x14e:  mov    %eax,(%esp)
0833275d +0x151:  call   *%edx
0833275f +0x153:  mov    %eax,%ebx
08332761 +0x155:  mov    0x10(%ebp),%eax
08332764 +0x158:  mov    0x8c(%eax),%eax
0833276a +0x15e:  mov    (%eax),%eax
0833276c +0x160:  add    $0xc,%eax
0833276f +0x163:  mov    (%eax),%edx
08332771 +0x165:  mov    0x10(%ebp),%eax
08332774 +0x168:  mov    0x8c(%eax),%eax
0833277a +0x16e:  mov    %eax,(%esp)
0833277d +0x171:  call   *%edx
0833277f +0x173:  cmp    %eax,%ebx
08332781 +0x175:  setne  %al
08332784 +0x178:  test   %al,%al
08332786 +0x17a:  je     08332792 <+0x186>
08332788 +0x17c:  mov    $0x17,%eax
0833278d +0x181:  jmp    08332e49 <+0x83d>
08332792 +0x186:  mov    0x10(%ebp),%eax
08332795 +0x189:  mov    0x4(%eax),%eax
08332798 +0x18c:  test   %eax,%eax
0833279a +0x18e:  jne    083327a6 <+0x19a>
0833279c +0x190:  mov    $0x17,%eax
083327a1 +0x195:  jmp    08332e49 <+0x83d>
083327a6 +0x19a:  mov    0x10(%ebp),%eax
083327a9 +0x19d:  mov    0x88(%eax),%eax
083327af +0x1a3:  mov    (%eax),%eax
083327b1 +0x1a5:  add    $0x24,%eax
083327b4 +0x1a8:  mov    (%eax),%edx
083327b6 +0x1aa:  mov    0x10(%ebp),%eax
083327b9 +0x1ad:  mov    0x88(%eax),%eax
083327bf +0x1b3:  movl   $0x1,0x4(%esp)
083327c7 +0x1bb:  mov    %eax,(%esp)
083327ca +0x1be:  call   *%edx
083327cc +0x1c0:  xor    $0x1,%eax
083327cf +0x1c3:  test   %al,%al
083327d1 +0x1c5:  jne    08332800 <+0x1f4>
083327d3 +0x1c7:  mov    0x10(%ebp),%eax
083327d6 +0x1ca:  mov    0x8c(%eax),%eax
083327dc +0x1d0:  mov    (%eax),%eax
083327de +0x1d2:  add    $0x24,%eax
083327e1 +0x1d5:  mov    (%eax),%edx
083327e3 +0x1d7:  mov    0x10(%ebp),%eax
083327e6 +0x1da:  mov    0x8c(%eax),%eax
083327ec +0x1e0:  movl   $0x1,0x4(%esp)
083327f4 +0x1e8:  mov    %eax,(%esp)
083327f7 +0x1eb:  call   *%edx
083327f9 +0x1ed:  xor    $0x1,%eax
083327fc +0x1f0:  test   %al,%al
083327fe +0x1f2:  je     08332807 <+0x1fb>
08332800 +0x1f4:  mov    $0x1,%eax
08332805 +0x1f9:  jmp    0833280c <+0x200>
08332807 +0x1fb:  mov    $0x0,%eax
0833280c +0x200:  test   %al,%al
0833280e +0x202:  je     0833283c <+0x230>
08332810 +0x204:  movl   $0x4,(%esp)
08332817 +0x20b:  call   08725800 <__cxa_allocate_exception>
0833281c +0x210:  mov    %eax,%edx
0833281e +0x212:  movl   $0x17,(%edx)
08332824 +0x218:  movl   $0x0,0x8(%esp)
0833282c +0x220:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08332834 +0x228:  mov    %eax,(%esp)
08332837 +0x22b:  call   08724c50 <__cxa_throw>
0833283c +0x230:  mov    0x10(%ebp),%eax
0833283f +0x233:  mov    0x4(%eax),%ecx
08332842 +0x236:  mov    0x10(%ebp),%eax
08332845 +0x239:  mov    (%eax),%eax
08332847 +0x23b:  mov    %eax,%edx
08332849 +0x23d:  mov    %edx,%eax
0833284b +0x23f:  add    %eax,%eax
0833284d +0x241:  add    %edx,%eax
0833284f +0x243:  shl    $0x2,%eax
08332852 +0x246:  add    0x8(%ebp),%eax
08332855 +0x249:  mov    %ecx,0x4(%esp)
08332859 +0x24d:  mov    %eax,(%esp)
0833285c +0x250:  call   08903fcc <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi>  ; tagCompoundAvatarTable::getCompoundAvatarInfo(int) const
08332861 +0x255:  mov    %eax,-0x1c(%ebp)
08332864 +0x258:  mov    0x10(%ebp),%eax
08332867 +0x25b:  mov    0x88(%eax),%eax
0833286d +0x261:  mov    %eax,(%esp)
08332870 +0x264:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08332875 +0x269:  cmp    $0x1,%eax
08332878 +0x26c:  jg     08332890 <+0x284>
0833287a +0x26e:  mov    0x10(%ebp),%eax
0833287d +0x271:  mov    0x8c(%eax),%eax
08332883 +0x277:  mov    %eax,(%esp)
08332886 +0x27a:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0833288b +0x27f:  cmp    $0x1,%eax
0833288e +0x282:  jle    08332897 <+0x28b>
08332890 +0x284:  mov    $0x1,%eax
08332895 +0x289:  jmp    0833289c <+0x290>
08332897 +0x28b:  mov    $0x0,%eax
0833289c +0x290:  test   %al,%al
0833289e +0x292:  je     083328aa <+0x29e>
083328a0 +0x294:  mov    $0x17,%eax
083328a5 +0x299:  jmp    08332e49 <+0x83d>
083328aa +0x29e:  mov    0x10(%ebp),%eax
083328ad +0x2a1:  mov    0x88(%eax),%eax
083328b3 +0x2a7:  mov    %eax,(%esp)
083328b6 +0x2aa:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
083328bb +0x2af:  mov    %eax,%ebx
083328bd +0x2b1:  mov    0x10(%ebp),%eax
083328c0 +0x2b4:  mov    0x8c(%eax),%eax
083328c6 +0x2ba:  mov    %eax,(%esp)
083328c9 +0x2bd:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
083328ce +0x2c2:  cmp    %eax,%ebx
083328d0 +0x2c4:  setne  %al
083328d3 +0x2c7:  test   %al,%al
083328d5 +0x2c9:  je     083328e1 <+0x2d5>
083328d7 +0x2cb:  mov    $0x17,%eax
083328dc +0x2d0:  jmp    08332e49 <+0x83d>
083328e1 +0x2d5:  mov    0x10(%ebp),%eax
083328e4 +0x2d8:  movzbl 0xd6(%eax),%eax
083328eb +0x2df:  xor    $0x1,%eax
083328ee +0x2e2:  test   %al,%al
083328f0 +0x2e4:  je     08332afc <+0x4f0>
083328f6 +0x2ea:  lea    -0x20(%ebp),%eax
083328f9 +0x2ed:  mov    %eax,(%esp)
083328fc +0x2f0:  call   08334434 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x232>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x232
08332901 +0x2f5:  lea    -0x24(%ebp),%eax
08332904 +0x2f8:  mov    %eax,(%esp)
08332907 +0x2fb:  call   08334434 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x232>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x232
0833290c +0x300:  mov    0x10(%ebp),%eax
0833290f +0x303:  mov    0x88(%eax),%eax
08332915 +0x309:  mov    %eax,(%esp)
08332918 +0x30c:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0833291d +0x311:  mov    -0x1c(%ebp),%edx
08332920 +0x314:  mov    (%edx),%edx
08332922 +0x316:  cmp    %edx,%eax
08332924 +0x318:  sete   %al
08332927 +0x31b:  test   %al,%al
08332929 +0x31d:  je     083329cc <+0x3c0>
0833292f +0x323:  mov    0x10(%ebp),%eax
08332932 +0x326:  mov    0x88(%eax),%eax
08332938 +0x32c:  mov    (%eax),%eax
0833293a +0x32e:  add    $0xc,%eax
0833293d +0x331:  mov    (%eax),%edx
0833293f +0x333:  mov    0x10(%ebp),%eax
08332942 +0x336:  mov    0x88(%eax),%eax
08332948 +0x33c:  mov    %eax,(%esp)
0833294b +0x33f:  call   *%edx
0833294d +0x341:  mov    %eax,%edx
0833294f +0x343:  mov    %edx,%eax
08332951 +0x345:  add    %eax,%eax
08332953 +0x347:  add    %edx,%eax
08332955 +0x349:  shl    $0x2,%eax
08332958 +0x34c:  add    $0x190,%eax
0833295d +0x351:  add    -0x1c(%ebp),%eax
08332960 +0x354:  lea    0x4(%eax),%edx
08332963 +0x357:  lea    -0x2c(%ebp),%eax
08332966 +0x35a:  mov    %edx,0x4(%esp)
0833296a +0x35e:  mov    %eax,(%esp)
0833296d +0x361:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08332972 +0x366:  sub    $0x4,%esp
08332975 +0x369:  mov    -0x2c(%ebp),%eax
08332978 +0x36c:  mov    %eax,-0x20(%ebp)
0833297b +0x36f:  mov    0x10(%ebp),%eax
0833297e +0x372:  mov    0x88(%eax),%eax
08332984 +0x378:  mov    (%eax),%eax
08332986 +0x37a:  add    $0xc,%eax
08332989 +0x37d:  mov    (%eax),%edx
0833298b +0x37f:  mov    0x10(%ebp),%eax
0833298e +0x382:  mov    0x88(%eax),%eax
08332994 +0x388:  mov    %eax,(%esp)
08332997 +0x38b:  call   *%edx
08332999 +0x38d:  mov    %eax,%edx
0833299b +0x38f:  mov    %edx,%eax
0833299d +0x391:  add    %eax,%eax
0833299f +0x393:  add    %edx,%eax
083329a1 +0x395:  shl    $0x2,%eax
083329a4 +0x398:  add    $0x190,%eax
083329a9 +0x39d:  add    -0x1c(%ebp),%eax
083329ac +0x3a0:  lea    0x4(%eax),%edx
083329af +0x3a3:  lea    -0x2c(%ebp),%eax
083329b2 +0x3a6:  mov    %edx,0x4(%esp)
083329b6 +0x3aa:  mov    %eax,(%esp)
083329b9 +0x3ad:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
083329be +0x3b2:  sub    $0x4,%esp
083329c1 +0x3b5:  mov    -0x2c(%ebp),%eax
083329c4 +0x3b8:  mov    %eax,-0x24(%ebp)
083329c7 +0x3bb:  jmp    08332ac3 <+0x4b7>
083329cc +0x3c0:  mov    0x10(%ebp),%eax
083329cf +0x3c3:  mov    0x88(%eax),%eax
083329d5 +0x3c9:  mov    %eax,(%esp)
083329d8 +0x3cc:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
083329dd +0x3d1:  mov    -0x1c(%ebp),%edx
083329e0 +0x3d4:  mov    0x2dc(%edx),%edx
083329e6 +0x3da:  cmp    %edx,%eax
083329e8 +0x3dc:  sete   %al
083329eb +0x3df:  test   %al,%al
083329ed +0x3e1:  je     08332a8d <+0x481>
083329f3 +0x3e7:  mov    0x10(%ebp),%eax
083329f6 +0x3ea:  mov    0x88(%eax),%eax
083329fc +0x3f0:  mov    (%eax),%eax
083329fe +0x3f2:  add    $0xc,%eax
08332a01 +0x3f5:  mov    (%eax),%edx
08332a03 +0x3f7:  mov    0x10(%ebp),%eax
08332a06 +0x3fa:  mov    0x88(%eax),%eax
08332a0c +0x400:  mov    %eax,(%esp)
08332a0f +0x403:  call   *%edx
08332a11 +0x405:  mov    %eax,%edx
08332a13 +0x407:  mov    %edx,%eax
08332a15 +0x409:  add    %eax,%eax
08332a17 +0x40b:  add    %edx,%eax
08332a19 +0x40d:  shl    $0x2,%eax
08332a1c +0x410:  add    $0xf0,%eax
08332a21 +0x415:  add    -0x1c(%ebp),%eax
08332a24 +0x418:  lea    0x4(%eax),%edx
08332a27 +0x41b:  lea    -0x2c(%ebp),%eax
08332a2a +0x41e:  mov    %edx,0x4(%esp)
08332a2e +0x422:  mov    %eax,(%esp)
08332a31 +0x425:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08332a36 +0x42a:  sub    $0x4,%esp
08332a39 +0x42d:  mov    -0x2c(%ebp),%eax
08332a3c +0x430:  mov    %eax,-0x20(%ebp)
08332a3f +0x433:  mov    0x10(%ebp),%eax
08332a42 +0x436:  mov    0x88(%eax),%eax
08332a48 +0x43c:  mov    (%eax),%eax
08332a4a +0x43e:  add    $0xc,%eax
08332a4d +0x441:  mov    (%eax),%edx
08332a4f +0x443:  mov    0x10(%ebp),%eax
08332a52 +0x446:  mov    0x88(%eax),%eax
08332a58 +0x44c:  mov    %eax,(%esp)
08332a5b +0x44f:  call   *%edx
08332a5d +0x451:  mov    %eax,%edx
08332a5f +0x453:  mov    %edx,%eax
08332a61 +0x455:  add    %eax,%eax
08332a63 +0x457:  add    %edx,%eax
08332a65 +0x459:  shl    $0x2,%eax
08332a68 +0x45c:  add    $0xf0,%eax
08332a6d +0x461:  add    -0x1c(%ebp),%eax
08332a70 +0x464:  lea    0x4(%eax),%edx
08332a73 +0x467:  lea    -0x2c(%ebp),%eax
08332a76 +0x46a:  mov    %edx,0x4(%esp)
08332a7a +0x46e:  mov    %eax,(%esp)
08332a7d +0x471:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08332a82 +0x476:  sub    $0x4,%esp
08332a85 +0x479:  mov    -0x2c(%ebp),%eax
08332a88 +0x47c:  mov    %eax,-0x24(%ebp)
08332a8b +0x47f:  jmp    08332ac3 <+0x4b7>
08332a8d +0x481:  mov    $0x1,%eax
08332a92 +0x486:  jmp    08332e49 <+0x83d>
08332a97 +0x48b:  lea    -0x20(%ebp),%eax
08332a9a +0x48e:  mov    %eax,(%esp)
08332a9d +0x491:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08332aa2 +0x496:  mov    (%eax),%eax
08332aa4 +0x498:  mov    %eax,%edx
08332aa6 +0x49a:  mov    0x10(%ebp),%eax
08332aa9 +0x49d:  mov    0xd0(%eax),%eax
08332aaf +0x4a3:  cmp    %eax,%edx
08332ab1 +0x4a5:  sete   %al
08332ab4 +0x4a8:  test   %al,%al
08332ab6 +0x4aa:  jne    08332adb <+0x4cf>
08332ab8 +0x4ac:  lea    -0x20(%ebp),%eax
08332abb +0x4af:  mov    %eax,(%esp)
08332abe +0x4b2:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
08332ac3 +0x4b7:  lea    -0x24(%ebp),%eax
08332ac6 +0x4ba:  mov    %eax,0x4(%esp)
08332aca +0x4be:  lea    -0x20(%ebp),%eax
08332acd +0x4c1:  mov    %eax,(%esp)
08332ad0 +0x4c4:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08332ad5 +0x4c9:  test   %al,%al
08332ad7 +0x4cb:  jne    08332a97 <+0x48b>
08332ad9 +0x4cd:  jmp    08332adc <+0x4d0>
08332adb +0x4cf:  nop
08332adc +0x4d0:  lea    -0x24(%ebp),%eax
08332adf +0x4d3:  mov    %eax,0x4(%esp)
08332ae3 +0x4d7:  lea    -0x20(%ebp),%eax
08332ae6 +0x4da:  mov    %eax,(%esp)
08332ae9 +0x4dd:  call   081123d7 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18e9>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18e9
08332aee +0x4e2:  test   %al,%al
08332af0 +0x4e4:  je     08332afc <+0x4f0>
08332af2 +0x4e6:  mov    $0x1,%eax
08332af7 +0x4eb:  jmp    08332e49 <+0x83d>
08332afc +0x4f0:  mov    0x10(%ebp),%eax
08332aff +0x4f3:  mov    0x88(%eax),%eax
08332b05 +0x4f9:  mov    %eax,(%esp)
08332b08 +0x4fc:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08332b0d +0x501:  mov    0x10(%ebp),%edx
08332b10 +0x504:  mov    0x4(%edx),%edx
08332b13 +0x507:  cmp    %edx,%eax
08332b15 +0x509:  jl     08332b32 <+0x526>
08332b17 +0x50b:  mov    0x10(%ebp),%eax
08332b1a +0x50e:  mov    0x8c(%eax),%eax
08332b20 +0x514:  mov    %eax,(%esp)
08332b23 +0x517:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08332b28 +0x51c:  mov    0x10(%ebp),%edx
08332b2b +0x51f:  mov    0x4(%edx),%edx
08332b2e +0x522:  cmp    %edx,%eax
08332b30 +0x524:  jge    08332b39 <+0x52d>
08332b32 +0x526:  mov    $0x1,%eax
08332b37 +0x52b:  jmp    08332b3e <+0x532>
08332b39 +0x52d:  mov    $0x0,%eax
08332b3e +0x532:  test   %al,%al
08332b40 +0x534:  je     08332b4c <+0x540>
08332b42 +0x536:  mov    $0x17,%eax
08332b47 +0x53b:  jmp    08332e49 <+0x83d>
08332b4c +0x540:  mov    0x10(%ebp),%eax
08332b4f +0x543:  mov    0x88(%eax),%eax
08332b55 +0x549:  mov    %eax,(%esp)
08332b58 +0x54c:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08332b5d +0x551:  mov    -0x1c(%ebp),%edx
08332b60 +0x554:  mov    0x2dc(%edx),%edx
08332b66 +0x55a:  cmp    %edx,%eax
08332b68 +0x55c:  jg     08332b88 <+0x57c>
08332b6a +0x55e:  mov    0x10(%ebp),%eax
08332b6d +0x561:  mov    0x8c(%eax),%eax
08332b73 +0x567:  mov    %eax,(%esp)
08332b76 +0x56a:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08332b7b +0x56f:  mov    -0x1c(%ebp),%edx
08332b7e +0x572:  mov    0x2dc(%edx),%edx
08332b84 +0x578:  cmp    %edx,%eax
08332b86 +0x57a:  jle    08332b8f <+0x583>
08332b88 +0x57c:  mov    $0x1,%eax
08332b8d +0x581:  jmp    08332b94 <+0x588>
08332b8f +0x583:  mov    $0x0,%eax
08332b94 +0x588:  test   %al,%al
08332b96 +0x58a:  je     08332ba2 <+0x596>
08332b98 +0x58c:  mov    $0x17,%eax
08332b9d +0x591:  jmp    08332e49 <+0x83d>
08332ba2 +0x596:  mov    0xc(%ebp),%eax
08332ba5 +0x599:  mov    %eax,(%esp)
08332ba8 +0x59c:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08332bad +0x5a1:  movsbl %al,%edx
08332bb0 +0x5a4:  mov    0x10(%ebp),%eax
08332bb3 +0x5a7:  mov    0x88(%eax),%eax
08332bb9 +0x5ad:  mov    %edx,0x4(%esp)
08332bbd +0x5b1:  mov    %eax,(%esp)
08332bc0 +0x5b4:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
08332bc5 +0x5b9:  xor    $0x1,%eax
08332bc8 +0x5bc:  test   %al,%al
08332bca +0x5be:  jne    08332bf6 <+0x5ea>
08332bcc +0x5c0:  mov    0xc(%ebp),%eax
08332bcf +0x5c3:  mov    %eax,(%esp)
08332bd2 +0x5c6:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08332bd7 +0x5cb:  movsbl %al,%edx
08332bda +0x5ce:  mov    0x10(%ebp),%eax
08332bdd +0x5d1:  mov    0x8c(%eax),%eax
08332be3 +0x5d7:  mov    %edx,0x4(%esp)
08332be7 +0x5db:  mov    %eax,(%esp)
08332bea +0x5de:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
08332bef +0x5e3:  xor    $0x1,%eax
08332bf2 +0x5e6:  test   %al,%al
08332bf4 +0x5e8:  je     08332bfd <+0x5f1>
08332bf6 +0x5ea:  mov    $0x1,%eax
08332bfb +0x5ef:  jmp    08332c02 <+0x5f6>
08332bfd +0x5f1:  mov    $0x0,%eax
08332c02 +0x5f6:  test   %al,%al
08332c04 +0x5f8:  je     08332c10 <+0x604>
08332c06 +0x5fa:  mov    $0x17,%eax
08332c0b +0x5ff:  jmp    08332e49 <+0x83d>
08332c10 +0x604:  mov    0x10(%ebp),%eax
08332c13 +0x607:  movzbl 0xe8(%eax),%eax
08332c1a +0x60e:  test   %al,%al
08332c1c +0x610:  jne    08332c53 <+0x647>
08332c1e +0x612:  mov    -0x1c(%ebp),%eax
08332c21 +0x615:  lea    0x2b8(%eax),%ebx
08332c27 +0x61b:  mov    0xc(%ebp),%eax
08332c2a +0x61e:  mov    %eax,(%esp)
08332c2d +0x621:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08332c32 +0x626:  mov    %ebx,0x4(%esp)
08332c36 +0x62a:  mov    %eax,(%esp)
08332c39 +0x62d:  call   08507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
08332c3e +0x632:  xor    $0x1,%eax
08332c41 +0x635:  test   %al,%al
08332c43 +0x637:  je     08332d14 <+0x708>
08332c49 +0x63d:  mov    $0x16,%eax
08332c4e +0x642:  jmp    08332e49 <+0x83d>
08332c53 +0x647:  mov    0x10(%ebp),%eax
08332c56 +0x64a:  movzbl 0xe8(%eax),%eax
08332c5d +0x651:  cmp    $0x1,%al
08332c5f +0x653:  jne    08332c96 <+0x68a>
08332c61 +0x655:  mov    -0x1c(%ebp),%eax
08332c64 +0x658:  lea    0x2c4(%eax),%ebx
08332c6a +0x65e:  mov    0xc(%ebp),%eax
08332c6d +0x661:  mov    %eax,(%esp)
08332c70 +0x664:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08332c75 +0x669:  mov    %ebx,0x4(%esp)
08332c79 +0x66d:  mov    %eax,(%esp)
08332c7c +0x670:  call   08507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
08332c81 +0x675:  xor    $0x1,%eax
08332c84 +0x678:  test   %al,%al
08332c86 +0x67a:  je     08332d14 <+0x708>
08332c8c +0x680:  mov    $0x16,%eax
08332c91 +0x685:  jmp    08332e49 <+0x83d>
08332c96 +0x68a:  mov    0x10(%ebp),%eax
08332c99 +0x68d:  movzbl 0xe8(%eax),%eax
08332ca0 +0x694:  cmp    $0x3,%al
08332ca2 +0x696:  jne    08332cd5 <+0x6c9>
08332ca4 +0x698:  mov    -0x1c(%ebp),%eax
08332ca7 +0x69b:  lea    0x2d0(%eax),%ebx
08332cad +0x6a1:  mov    0xc(%ebp),%eax
08332cb0 +0x6a4:  mov    %eax,(%esp)
08332cb3 +0x6a7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08332cb8 +0x6ac:  mov    %ebx,0x4(%esp)
08332cbc +0x6b0:  mov    %eax,(%esp)
08332cbf +0x6b3:  call   08507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
08332cc4 +0x6b8:  xor    $0x1,%eax
08332cc7 +0x6bb:  test   %al,%al
08332cc9 +0x6bd:  je     08332d14 <+0x708>
08332ccb +0x6bf:  mov    $0x16,%eax
08332cd0 +0x6c4:  jmp    08332e49 <+0x83d>
08332cd5 +0x6c9:  mov    0x10(%ebp),%eax
08332cd8 +0x6cc:  movzbl 0xe8(%eax),%eax
08332cdf +0x6d3:  cmp    $0x4,%al
08332ce1 +0x6d5:  jne    08332d14 <+0x708>
08332ce3 +0x6d7:  mov    -0x1c(%ebp),%eax
08332ce6 +0x6da:  lea    0x20c(%eax),%ebx
08332cec +0x6e0:  mov    0xc(%ebp),%eax
08332cef +0x6e3:  mov    %eax,(%esp)
08332cf2 +0x6e6:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08332cf7 +0x6eb:  mov    %ebx,0x4(%esp)
08332cfb +0x6ef:  mov    %eax,(%esp)
08332cfe +0x6f2:  call   08507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
08332d03 +0x6f7:  xor    $0x1,%eax
08332d06 +0x6fa:  test   %al,%al
08332d08 +0x6fc:  je     08332d14 <+0x708>
08332d0a +0x6fe:  mov    $0x16,%eax
08332d0f +0x703:  jmp    08332e49 <+0x83d>
08332d14 +0x708:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08332d1b +0x70f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08332d20 +0x714:  mov    %eax,-0x18(%ebp)
08332d23 +0x717:  mov    0x10(%ebp),%eax
08332d26 +0x71a:  mov    0x11(%eax),%ebx
08332d29 +0x71d:  mov    0xc(%ebp),%eax
08332d2c +0x720:  mov    %eax,(%esp)
08332d2f +0x723:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08332d34 +0x728:  mov    %eax,(%esp)
08332d37 +0x72b:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08332d3c +0x730:  mov    -0x18(%ebp),%edx
08332d3f +0x733:  mov    %edx,0x8(%esp)
08332d43 +0x737:  mov    %ebx,0x4(%esp)
08332d47 +0x73b:  mov    %eax,(%esp)
08332d4a +0x73e:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
08332d4f +0x743:  mov    %eax,-0x14(%ebp)
08332d52 +0x746:  mov    0x10(%ebp),%eax
08332d55 +0x749:  mov    0x51(%eax),%ebx
08332d58 +0x74c:  mov    0xc(%ebp),%eax
08332d5b +0x74f:  mov    %eax,(%esp)
08332d5e +0x752:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08332d63 +0x757:  mov    %eax,(%esp)
08332d66 +0x75a:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08332d6b +0x75f:  mov    -0x18(%ebp),%edx
08332d6e +0x762:  mov    %edx,0x8(%esp)
08332d72 +0x766:  mov    %ebx,0x4(%esp)
08332d76 +0x76a:  mov    %eax,(%esp)
08332d79 +0x76d:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
08332d7e +0x772:  mov    %eax,-0x10(%ebp)
08332d81 +0x775:  mov    0x10(%ebp),%eax
08332d84 +0x778:  mov    0x11(%eax),%ebx
08332d87 +0x77b:  mov    0xc(%ebp),%eax
08332d8a +0x77e:  mov    %eax,(%esp)
08332d8d +0x781:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08332d92 +0x786:  mov    %eax,(%esp)
08332d95 +0x789:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08332d9a +0x78e:  mov    %ebx,0x4(%esp)
08332d9e +0x792:  mov    %eax,(%esp)
08332da1 +0x795:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
08332da6 +0x79a:  test   %eax,%eax
08332da8 +0x79c:  sete   %al
08332dab +0x79f:  mov    %al,-0xa(%ebp)
08332dae +0x7a2:  mov    0x10(%ebp),%eax
08332db1 +0x7a5:  mov    0x51(%eax),%ebx
08332db4 +0x7a8:  mov    0xc(%ebp),%eax
08332db7 +0x7ab:  mov    %eax,(%esp)
08332dba +0x7ae:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08332dbf +0x7b3:  mov    %eax,(%esp)
08332dc2 +0x7b6:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08332dc7 +0x7bb:  mov    %ebx,0x4(%esp)
08332dcb +0x7bf:  mov    %eax,(%esp)
08332dce +0x7c2:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
08332dd3 +0x7c7:  test   %eax,%eax
08332dd5 +0x7c9:  sete   %al
08332dd8 +0x7cc:  mov    %al,-0x9(%ebp)
08332ddb +0x7cf:  movzbl -0xa(%ebp),%eax
08332ddf +0x7d3:  cmp    -0x9(%ebp),%al
08332de2 +0x7d6:  je     08332deb <+0x7df>
08332de4 +0x7d8:  mov    $0x13,%eax
08332de9 +0x7dd:  jmp    08332e49 <+0x83d>
08332deb +0x7df:  movzbl -0xa(%ebp),%eax
08332def +0x7e3:  xor    $0x1,%eax
08332df2 +0x7e6:  test   %al,%al
08332df4 +0x7e8:  je     08332e09 <+0x7fd>
08332df6 +0x7ea:  cmpl   $0x5,-0x14(%ebp)
08332dfa +0x7ee:  jle    08332e02 <+0x7f6>
08332dfc +0x7f0:  cmpl   $0x5,-0x10(%ebp)
08332e00 +0x7f4:  jg     08332e09 <+0x7fd>
08332e02 +0x7f6:  mov    $0x18,%eax
08332e07 +0x7fb:  jmp    08332e49 <+0x83d>
08332e09 +0x7fd:  mov    0x10(%ebp),%eax
08332e0c +0x800:  add    $0x3d,%eax
08332e0f +0x803:  mov    %eax,(%esp)
08332e12 +0x806:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
08332e17 +0x80b:  test   %al,%al
08332e19 +0x80d:  jne    08332e2d <+0x821>
08332e1b +0x80f:  mov    0x10(%ebp),%eax
08332e1e +0x812:  add    $0x7d,%eax
08332e21 +0x815:  mov    %eax,(%esp)
08332e24 +0x818:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
08332e29 +0x81d:  test   %al,%al
08332e2b +0x81f:  je     08332e34 <+0x828>
08332e2d +0x821:  mov    $0x1,%eax
08332e32 +0x826:  jmp    08332e39 <+0x82d>
08332e34 +0x828:  mov    $0x0,%eax
08332e39 +0x82d:  test   %al,%al
08332e3b +0x82f:  je     08332e44 <+0x838>
08332e3d +0x831:  mov    $0x17,%eax
08332e42 +0x836:  jmp    08332e49 <+0x83d>
08332e44 +0x838:  mov    $0x0,%eax
08332e49 +0x83d:  mov    -0x4(%ebp),%ebx
08332e4c +0x840:  leave
08332e4d +0x841:  ret
```

## 反编译 C

```c
// WongWork::CCompoundAvatar::_CheckCondition @ 0x833260c

/* WongWork::CCompoundAvatar::_CheckCondition(CUser const*,
   WongWork::CCompoundAvatar::tagCompoundInfo const&) const */

undefined4 __thiscall
WongWork::CCompoundAvatar::_CheckCondition
          (CCompoundAvatar *this,CUser *param_1,tagCompoundInfo *param_2)

{
  vector *pvVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  CInventory *pCVar9;
  CAvatarItemMgr *pCVar10;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_28 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_24 [4];
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_e;
  undefined1 local_d;
  
  if ((param_2[0xe8] == (tagCompoundInfo)0x4) && (*(int *)(param_2 + 0x94) != 0x2898c4)) {
    return 0x11;
  }
  if (99 < *(ushort *)(param_2 + 0xd4)) {
    return 0x11;
  }
  if (param_2[0xd7] != (tagCompoundInfo)0x0) {
    return 0x11;
  }
  if (*(int *)param_2 == 0xb) {
    return 0x17;
  }
  if ((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0x4c) == 0)) {
    return 0x11;
  }
  cVar2 = CAvatarItemMgr::IsTempKey(*(int *)(param_2 + 0x11));
  if ((cVar2 == '\0') &&
     (cVar2 = CAvatarItemMgr::IsTempKey(*(int *)(param_2 + 0x51)), cVar2 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return 1;
  }
  cVar2 = (**(code **)(**(int **)(param_2 + 0x88) + 0x10))(*(undefined4 *)(param_2 + 0x88));
  if ((cVar2 == '\x01') &&
     (cVar2 = (**(code **)(**(int **)(param_2 + 0x8c) + 0x10))(*(undefined4 *)(param_2 + 0x8c)),
     cVar2 == '\x01')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return 0x11;
  }
  iVar4 = (**(code **)(**(int **)(param_2 + 0x88) + 0xc))(*(undefined4 *)(param_2 + 0x88));
  iVar5 = (**(code **)(**(int **)(param_2 + 0x8c) + 0xc))(*(undefined4 *)(param_2 + 0x8c));
  if (iVar4 != iVar5) {
    return 0x17;
  }
  if (*(int *)(param_2 + 4) == 0) {
    return 0x17;
  }
  cVar2 = (**(code **)(**(int **)(param_2 + 0x88) + 0x24))(*(undefined4 *)(param_2 + 0x88),1);
  if ((cVar2 == '\x01') &&
     (cVar2 = (**(code **)(**(int **)(param_2 + 0x8c) + 0x24))(*(undefined4 *)(param_2 + 0x8c),1),
     cVar2 == '\x01')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x17;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  local_20 = (int *)tagCompoundAvatarTable::getCompoundAvatarInfo
                              ((tagCompoundAvatarTable *)(this + *(int *)param_2 * 0xc),
                               *(int *)(param_2 + 4));
  iVar4 = CItem::get_rarity(*(CItem **)(param_2 + 0x88));
  if ((iVar4 < 2) && (iVar4 = CItem::get_rarity(*(CItem **)(param_2 + 0x8c)), iVar4 < 2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return 0x17;
  }
  iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x88));
  iVar5 = CItem::get_grade(*(CItem **)(param_2 + 0x8c));
  if (iVar4 != iVar5) {
    return 0x17;
  }
  if (param_2[0xd6] != (tagCompoundInfo)0x1) {
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator(local_24);
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator(local_28);
    iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x88));
    if (iVar4 == *local_20) {
      iVar4 = (**(code **)(**(int **)(param_2 + 0x88) + 0xc))(*(undefined4 *)(param_2 + 0x88));
      piVar7 = local_20 + iVar4 * 3 + 0x65;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      (**(code **)(**(int **)(param_2 + 0x88) + 0xc))(*(undefined4 *)(param_2 + 0x88),piVar7);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    }
    else {
      iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x88));
      if (iVar4 != local_20[0xb7]) {
        return 1;
      }
      iVar4 = (**(code **)(**(int **)(param_2 + 0x88) + 0xc))(*(undefined4 *)(param_2 + 0x88));
      piVar7 = local_20 + iVar4 * 3 + 0x3d;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      (**(code **)(**(int **)(param_2 + 0x88) + 0xc))(*(undefined4 *)(param_2 + 0x88),piVar7);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    }
    while ((bVar3 = __gnu_cxx::operator!=(local_24,local_28), bVar3 &&
           (piVar7 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator->(local_24), *piVar7 != *(int *)(param_2 + 0xd0)))) {
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_24);
    }
    bVar3 = __gnu_cxx::operator==(local_24,local_28);
    if (bVar3) {
      return 1;
    }
  }
  iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x88));
  if ((iVar4 < *(int *)(param_2 + 4)) ||
     (iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x8c)), iVar4 < *(int *)(param_2 + 4))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    return 0x17;
  }
  iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x88));
  if ((local_20[0xb7] < iVar4) ||
     (iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x8c)), local_20[0xb7] < iVar4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    return 0x17;
  }
  cVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  cVar2 = CItem::check_job_type(*(CItem **)(param_2 + 0x88),cVar2);
  if (cVar2 == '\x01') {
    cVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    cVar2 = CItem::check_job_type(*(CItem **)(param_2 + 0x8c),cVar2);
    if (cVar2 == '\x01') {
      bVar3 = false;
      goto LAB_08332c02;
    }
  }
  bVar3 = true;
LAB_08332c02:
  if (bVar3) {
    uVar8 = 0x17;
  }
  else {
    if (param_2[0xe8] == (tagCompoundInfo)0x0) {
      pvVar1 = (vector *)(local_20 + 0xae);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar2 = CInventory::CheckNeedItemList(pCVar9,pvVar1);
      if (cVar2 != '\x01') {
        return 0x16;
      }
    }
    else if (param_2[0xe8] == (tagCompoundInfo)0x1) {
      pvVar1 = (vector *)(local_20 + 0xb1);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar2 = CInventory::CheckNeedItemList(pCVar9,pvVar1);
      if (cVar2 != '\x01') {
        return 0x16;
      }
    }
    else if (param_2[0xe8] == (tagCompoundInfo)0x3) {
      pvVar1 = (vector *)(local_20 + 0xb4);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar2 = CInventory::CheckNeedItemList(pCVar9,pvVar1);
      if (cVar2 != '\x01') {
        return 0x16;
      }
    }
    else if (param_2[0xe8] == (tagCompoundInfo)0x4) {
      pvVar1 = (vector *)(local_20 + 0x83);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar2 = CInventory::CheckNeedItemList(pCVar9,pvVar1);
      if (cVar2 != '\x01') {
        return 0x16;
      }
    }
    local_1c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar4 = *(int *)(param_2 + 0x11);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
    local_18 = CAvatarItemMgr::GetRemainDate(pCVar10,iVar4,local_1c);
    iVar4 = *(int *)(param_2 + 0x51);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
    local_14 = CAvatarItemMgr::GetRemainDate(pCVar10,iVar4,local_1c);
    iVar4 = *(int *)(param_2 + 0x11);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
    iVar4 = CAvatarItemMgr::GetExpireDate(pCVar10,iVar4);
    local_e = iVar4 == 0;
    iVar4 = *(int *)(param_2 + 0x51);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
    iVar4 = CAvatarItemMgr::GetExpireDate(pCVar10,iVar4);
    local_d = iVar4 == 0;
    if (local_e == local_d) {
      if ((local_e == '\x01') || ((5 < local_18 && (5 < local_14)))) {
        cVar2 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)(param_2 + 0x3d));
        if ((cVar2 == '\0') &&
           (cVar2 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)(param_2 + 0x7d))
           , cVar2 == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uVar8 = 0x17;
        }
        else {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0x18;
      }
    }
    else {
      uVar8 = 0x13;
    }
  }
  return uVar8;
}
```
