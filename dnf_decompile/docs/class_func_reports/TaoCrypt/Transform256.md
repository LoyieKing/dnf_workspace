# Transform256

`_ZN8TaoCryptL12Transform256EPjS0_`

`TaoCrypt::Transform256(unsigned int*, unsigned int*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0876d4a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0876d4a0  _ZN8TaoCryptL12Transform256EPjS0_
#           TaoCrypt::Transform256(unsigned int*, unsigned int*)
# range [0x0876d4a0, 0x0876e349]
0876d4a0 +0x000:  push   %ebp
0876d4a1 +0x001:  mov    %esp,%ebp
0876d4a3 +0x003:  push   %edi
0876d4a4 +0x004:  push   %esi
0876d4a5 +0x005:  push   %ebx
0876d4a6 +0x006:  sub    $0x94,%esp
0876d4ac +0x00c:  mov    %edx,-0x9c(%ebp)
0876d4b2 +0x012:  mov    %eax,%edx
0876d4b4 +0x014:  mov    %eax,-0xa0(%ebp)
0876d4ba +0x01a:  mov    (%eax),%eax
0876d4bc +0x01c:  mov    %edx,%ecx
0876d4be +0x01e:  call   08722df8 <__i686.get_pc_thunk.bx>
0876d4c3 +0x023:  add    $0xbff6d5,%ebx
0876d4c9 +0x029:  mov    %eax,-0x2c(%ebp)
0876d4cc +0x02c:  mov    0x4(%edx),%eax
0876d4cf +0x02f:  mov    %eax,-0x28(%ebp)
0876d4d2 +0x032:  mov    0x8(%edx),%eax
0876d4d5 +0x035:  mov    %eax,-0x24(%ebp)
0876d4d8 +0x038:  mov    0xc(%edx),%eax
0876d4db +0x03b:  mov    %eax,-0x20(%ebp)
0876d4de +0x03e:  mov    0x10(%edx),%esi
0876d4e1 +0x041:  mov    %esi,-0x1c(%ebp)
0876d4e4 +0x044:  mov    0x14(%edx),%edx
0876d4e7 +0x047:  mov    %edx,-0x18(%ebp)
0876d4ea +0x04a:  mov    0x18(%ecx),%eax
0876d4ed +0x04d:  mov    %eax,-0x14(%ebp)
0876d4f0 +0x050:  mov    0x1c(%ecx),%edi
0876d4f3 +0x053:  mov    %eax,-0x7c(%ebp)
0876d4f6 +0x056:  lea    -0x6674b8(%ebx),%eax
0876d4fc +0x05c:  mov    %edx,-0x70(%ebp)
0876d4ff +0x05f:  mov    %eax,-0x94(%ebp)
0876d505 +0x065:  mov    %edi,-0x84(%ebp)
0876d50b +0x06b:  movl   $0x0,-0x90(%ebp)
0876d515 +0x075:  mov    -0x90(%ebp),%edi
0876d51b +0x07b:  mov    -0x94(%ebp),%ecx
0876d521 +0x081:  test   %edi,%edi
0876d523 +0x083:  mov    (%ecx),%edx
0876d525 +0x085:  je     0876e338 <+0xe98>
0876d52b +0x08b:  mov    -0x34(%ebp),%eax
0876d52e +0x08e:  mov    -0x34(%ebp),%edi
0876d531 +0x091:  mov    -0x48(%ebp),%ecx
0876d534 +0x094:  add    -0x6c(%ebp),%ecx
0876d537 +0x097:  ror    $0x11,%eax
0876d53a +0x09a:  shr    $0xa,%edi
0876d53d +0x09d:  xor    %edi,%eax
0876d53f +0x09f:  mov    -0x34(%ebp),%edi
0876d542 +0x0a2:  ror    $0x13,%edi
0876d545 +0x0a5:  xor    %edi,%eax
0876d547 +0x0a7:  lea    (%ecx,%eax,1),%edi
0876d54a +0x0aa:  mov    -0x68(%ebp),%ecx
0876d54d +0x0ad:  mov    -0x68(%ebp),%eax
0876d550 +0x0b0:  ror    $0x7,%ecx
0876d553 +0x0b3:  shr    $0x3,%eax
0876d556 +0x0b6:  xor    %eax,%ecx
0876d558 +0x0b8:  mov    -0x68(%ebp),%eax
0876d55b +0x0bb:  ror    $0x12,%eax
0876d55e +0x0be:  xor    %eax,%ecx
0876d560 +0x0c0:  lea    (%edi,%ecx,1),%ecx
0876d563 +0x0c3:  mov    %ecx,-0x6c(%ebp)
0876d566 +0x0c6:  mov    %esi,%edi
0876d568 +0x0c8:  mov    %esi,%eax
0876d56a +0x0ca:  ror    $0x6,%eax
0876d56d +0x0cd:  ror    $0xb,%edi
0876d570 +0x0d0:  xor    %eax,%edi
0876d572 +0x0d2:  mov    %esi,%eax
0876d574 +0x0d4:  ror    $0x19,%eax
0876d577 +0x0d7:  xor    %eax,%edi
0876d579 +0x0d9:  mov    -0x7c(%ebp),%eax
0876d57c +0x0dc:  xor    -0x70(%ebp),%eax
0876d57f +0x0df:  add    -0x84(%ebp),%edx
0876d585 +0x0e5:  and    %esi,%eax
0876d587 +0x0e7:  xor    -0x7c(%ebp),%eax
0876d58a +0x0ea:  add    %edi,%edx
0876d58c +0x0ec:  add    %eax,%edx
0876d58e +0x0ee:  mov    -0x28(%ebp),%eax
0876d591 +0x0f1:  lea    (%edx,%ecx,1),%ecx
0876d594 +0x0f4:  mov    -0x20(%ebp),%edx
0876d597 +0x0f7:  mov    %eax,%edi
0876d599 +0x0f9:  add    %ecx,%edx
0876d59b +0x0fb:  mov    %edx,-0x88(%ebp)
0876d5a1 +0x101:  mov    -0x2c(%ebp),%edx
0876d5a4 +0x104:  or     %edx,%edi
0876d5a6 +0x106:  and    %edx,%eax
0876d5a8 +0x108:  and    -0x24(%ebp),%edi
0876d5ab +0x10b:  mov    %edx,%esi
0876d5ad +0x10d:  ror    $0xd,%esi
0876d5b0 +0x110:  or     %eax,%edi
0876d5b2 +0x112:  mov    %edx,%eax
0876d5b4 +0x114:  ror    $0x2,%eax
0876d5b7 +0x117:  xor    %eax,%esi
0876d5b9 +0x119:  mov    %edx,%eax
0876d5bb +0x11b:  ror    $0x16,%eax
0876d5be +0x11e:  xor    %eax,%esi
0876d5c0 +0x120:  lea    (%edi,%esi,1),%eax
0876d5c3 +0x123:  mov    -0x1c(%ebp),%esi
0876d5c6 +0x126:  add    %ecx,%eax
0876d5c8 +0x128:  mov    -0x14(%ebp),%ecx
0876d5cb +0x12b:  mov    -0x18(%ebp),%edi
0876d5ce +0x12e:  mov    %esi,-0x84(%ebp)
0876d5d4 +0x134:  mov    %ecx,-0x78(%ebp)
0876d5d7 +0x137:  mov    -0x94(%ebp),%ecx
0876d5dd +0x13d:  mov    %edi,-0x80(%ebp)
0876d5e0 +0x140:  mov    0x4(%ecx),%ecx
0876d5e3 +0x143:  mov    %ecx,-0x7c(%ebp)
0876d5e6 +0x146:  mov    -0x90(%ebp),%ecx
0876d5ec +0x14c:  test   %ecx,%ecx
0876d5ee +0x14e:  je     0876e320 <+0xe80>
0876d5f4 +0x154:  mov    -0x30(%ebp),%ecx
0876d5f7 +0x157:  mov    -0x30(%ebp),%esi
0876d5fa +0x15a:  mov    -0x44(%ebp),%edi
0876d5fd +0x15d:  add    -0x68(%ebp),%edi
0876d600 +0x160:  ror    $0x11,%ecx
0876d603 +0x163:  shr    $0xa,%esi
0876d606 +0x166:  xor    %esi,%ecx
0876d608 +0x168:  mov    -0x30(%ebp),%esi
0876d60b +0x16b:  ror    $0x13,%esi
0876d60e +0x16e:  xor    %esi,%ecx
0876d610 +0x170:  lea    (%edi,%ecx,1),%esi
0876d613 +0x173:  mov    -0x64(%ebp),%ecx
0876d616 +0x176:  mov    -0x64(%ebp),%edi
0876d619 +0x179:  ror    $0x7,%ecx
0876d61c +0x17c:  shr    $0x3,%edi
0876d61f +0x17f:  xor    %edi,%ecx
0876d621 +0x181:  mov    -0x64(%ebp),%edi
0876d624 +0x184:  ror    $0x12,%edi
0876d627 +0x187:  xor    %edi,%ecx
0876d629 +0x189:  add    %esi,%ecx
0876d62b +0x18b:  mov    %ecx,-0x68(%ebp)
0876d62e +0x18e:  mov    -0x7c(%ebp),%esi
0876d631 +0x191:  mov    -0x80(%ebp),%edi
0876d634 +0x194:  add    -0x78(%ebp),%esi
0876d637 +0x197:  xor    -0x84(%ebp),%edi
0876d63d +0x19d:  and    -0x88(%ebp),%edi
0876d643 +0x1a3:  xor    -0x80(%ebp),%edi
0876d646 +0x1a6:  lea    (%esi,%edi,1),%edi
0876d649 +0x1a9:  mov    -0x88(%ebp),%esi
0876d64f +0x1af:  mov    %edi,-0x70(%ebp)
0876d652 +0x1b2:  mov    -0x88(%ebp),%edi
0876d658 +0x1b8:  ror    $0xb,%esi
0876d65b +0x1bb:  ror    $0x6,%edi
0876d65e +0x1be:  xor    %edi,%esi
0876d660 +0x1c0:  mov    -0x88(%ebp),%edi
0876d666 +0x1c6:  ror    $0x19,%edi
0876d669 +0x1c9:  xor    %edi,%esi
0876d66b +0x1cb:  mov    %eax,%edi
0876d66d +0x1cd:  add    -0x70(%ebp),%esi
0876d670 +0x1d0:  or     %edx,%edi
0876d672 +0x1d2:  and    -0x28(%ebp),%edi
0876d675 +0x1d5:  and    %eax,%edx
0876d677 +0x1d7:  lea    (%esi,%ecx,1),%ecx
0876d67a +0x1da:  mov    -0x24(%ebp),%esi
0876d67d +0x1dd:  or     %edx,%edi
0876d67f +0x1df:  mov    %eax,%edx
0876d681 +0x1e1:  ror    $0xd,%edx
0876d684 +0x1e4:  add    %ecx,%esi
0876d686 +0x1e6:  mov    %esi,-0x7c(%ebp)
0876d689 +0x1e9:  mov    %eax,%esi
0876d68b +0x1eb:  ror    $0x2,%esi
0876d68e +0x1ee:  xor    %esi,%edx
0876d690 +0x1f0:  mov    %eax,%esi
0876d692 +0x1f2:  ror    $0x16,%esi
0876d695 +0x1f5:  xor    %esi,%edx
0876d697 +0x1f7:  lea    (%edi,%edx,1),%edx
0876d69a +0x1fa:  mov    -0x94(%ebp),%edi
0876d6a0 +0x200:  add    %ecx,%edx
0876d6a2 +0x202:  mov    %edx,-0x70(%ebp)
0876d6a5 +0x205:  mov    0x8(%edi),%ecx
0876d6a8 +0x208:  mov    -0x90(%ebp),%edi
0876d6ae +0x20e:  test   %edi,%edi
0876d6b0 +0x210:  je     0876e308 <+0xe68>
0876d6b6 +0x216:  mov    -0x6c(%ebp),%edx
0876d6b9 +0x219:  mov    -0x6c(%ebp),%edi
0876d6bc +0x21c:  mov    -0x40(%ebp),%esi
0876d6bf +0x21f:  add    -0x64(%ebp),%esi
0876d6c2 +0x222:  ror    $0x11,%edx
0876d6c5 +0x225:  shr    $0xa,%edi
0876d6c8 +0x228:  xor    %edi,%edx
0876d6ca +0x22a:  mov    -0x6c(%ebp),%edi
0876d6cd +0x22d:  ror    $0x13,%edi
0876d6d0 +0x230:  xor    %edi,%edx
0876d6d2 +0x232:  lea    (%esi,%edx,1),%edi
0876d6d5 +0x235:  mov    -0x60(%ebp),%esi
0876d6d8 +0x238:  mov    -0x60(%ebp),%edx
0876d6db +0x23b:  ror    $0x7,%esi
0876d6de +0x23e:  shr    $0x3,%edx
0876d6e1 +0x241:  xor    %edx,%esi
0876d6e3 +0x243:  mov    -0x60(%ebp),%edx
0876d6e6 +0x246:  ror    $0x12,%edx
0876d6e9 +0x249:  xor    %edx,%esi
0876d6eb +0x24b:  lea    (%edi,%esi,1),%esi
0876d6ee +0x24e:  mov    %esi,-0x64(%ebp)
0876d6f1 +0x251:  mov    -0x80(%ebp),%edx
0876d6f4 +0x254:  mov    -0x88(%ebp),%edi
0876d6fa +0x25a:  xor    -0x84(%ebp),%edi
0876d700 +0x260:  and    -0x7c(%ebp),%edi
0876d703 +0x263:  xor    -0x84(%ebp),%edi
0876d709 +0x269:  lea    (%ecx,%edx,1),%edx
0876d70c +0x26c:  mov    -0x7c(%ebp),%ecx
0876d70f +0x26f:  add    %edi,%edx
0876d711 +0x271:  mov    -0x7c(%ebp),%edi
0876d714 +0x274:  ror    $0x6,%ecx
0876d717 +0x277:  ror    $0xb,%edi
0876d71a +0x27a:  xor    %ecx,%edi
0876d71c +0x27c:  mov    -0x7c(%ebp),%ecx
0876d71f +0x27f:  ror    $0x19,%ecx
0876d722 +0x282:  xor    %ecx,%edi
0876d724 +0x284:  mov    -0x28(%ebp),%ecx
0876d727 +0x287:  add    %edi,%edx
0876d729 +0x289:  mov    -0x70(%ebp),%edi
0876d72c +0x28c:  add    %esi,%edx
0876d72e +0x28e:  mov    -0x70(%ebp),%esi
0876d731 +0x291:  add    %edx,%ecx
0876d733 +0x293:  mov    %ecx,-0x74(%ebp)
0876d736 +0x296:  mov    -0x70(%ebp),%ecx
0876d739 +0x299:  ror    $0xd,%edi
0876d73c +0x29c:  and    %eax,%esi
0876d73e +0x29e:  or     %eax,%ecx
0876d740 +0x2a0:  and    -0x2c(%ebp),%ecx
0876d743 +0x2a3:  or     %esi,%ecx
0876d745 +0x2a5:  mov    -0x70(%ebp),%esi
0876d748 +0x2a8:  ror    $0x2,%esi
0876d74b +0x2ab:  xor    %esi,%edi
0876d74d +0x2ad:  mov    -0x70(%ebp),%esi
0876d750 +0x2b0:  ror    $0x16,%esi
0876d753 +0x2b3:  xor    %esi,%edi
0876d755 +0x2b5:  mov    -0x94(%ebp),%esi
0876d75b +0x2bb:  add    %edi,%ecx
0876d75d +0x2bd:  add    %edx,%ecx
0876d75f +0x2bf:  mov    %ecx,-0x80(%ebp)
0876d762 +0x2c2:  mov    0xc(%esi),%ecx
0876d765 +0x2c5:  mov    -0x90(%ebp),%esi
0876d76b +0x2cb:  test   %esi,%esi
0876d76d +0x2cd:  je     0876e2f0 <+0xe50>
0876d773 +0x2d3:  mov    -0x68(%ebp),%edx
0876d776 +0x2d6:  mov    -0x68(%ebp),%edi
0876d779 +0x2d9:  mov    -0x3c(%ebp),%esi
0876d77c +0x2dc:  add    -0x60(%ebp),%esi
0876d77f +0x2df:  ror    $0x11,%edx
0876d782 +0x2e2:  shr    $0xa,%edi
0876d785 +0x2e5:  xor    %edi,%edx
0876d787 +0x2e7:  mov    -0x68(%ebp),%edi
0876d78a +0x2ea:  ror    $0x13,%edi
0876d78d +0x2ed:  xor    %edi,%edx
0876d78f +0x2ef:  lea    (%esi,%edx,1),%edi
0876d792 +0x2f2:  mov    -0x5c(%ebp),%esi
0876d795 +0x2f5:  mov    -0x5c(%ebp),%edx
0876d798 +0x2f8:  ror    $0x7,%esi
0876d79b +0x2fb:  shr    $0x3,%edx
0876d79e +0x2fe:  xor    %edx,%esi
0876d7a0 +0x300:  mov    -0x5c(%ebp),%edx
0876d7a3 +0x303:  ror    $0x12,%edx
0876d7a6 +0x306:  xor    %edx,%esi
0876d7a8 +0x308:  lea    (%edi,%esi,1),%esi
0876d7ab +0x30b:  mov    %esi,-0x60(%ebp)
0876d7ae +0x30e:  mov    -0x84(%ebp),%edx
0876d7b4 +0x314:  mov    -0x7c(%ebp),%edi
0876d7b7 +0x317:  xor    -0x88(%ebp),%edi
0876d7bd +0x31d:  and    -0x74(%ebp),%edi
0876d7c0 +0x320:  xor    -0x88(%ebp),%edi
0876d7c6 +0x326:  lea    (%ecx,%edx,1),%edx
0876d7c9 +0x329:  mov    -0x74(%ebp),%ecx
0876d7cc +0x32c:  add    %edi,%edx
0876d7ce +0x32e:  mov    -0x74(%ebp),%edi
0876d7d1 +0x331:  ror    $0x6,%ecx
0876d7d4 +0x334:  ror    $0xb,%edi
0876d7d7 +0x337:  xor    %ecx,%edi
0876d7d9 +0x339:  mov    -0x74(%ebp),%ecx
0876d7dc +0x33c:  ror    $0x19,%ecx
0876d7df +0x33f:  xor    %ecx,%edi
0876d7e1 +0x341:  mov    -0x2c(%ebp),%ecx
0876d7e4 +0x344:  add    %edi,%edx
0876d7e6 +0x346:  mov    -0x80(%ebp),%edi
0876d7e9 +0x349:  add    %esi,%edx
0876d7eb +0x34b:  mov    -0x80(%ebp),%esi
0876d7ee +0x34e:  and    -0x70(%ebp),%esi
0876d7f1 +0x351:  add    %edx,%ecx
0876d7f3 +0x353:  mov    %ecx,-0x78(%ebp)
0876d7f6 +0x356:  mov    -0x80(%ebp),%ecx
0876d7f9 +0x359:  ror    $0xd,%edi
0876d7fc +0x35c:  or     -0x70(%ebp),%ecx
0876d7ff +0x35f:  and    %eax,%ecx
0876d801 +0x361:  or     %esi,%ecx
0876d803 +0x363:  mov    -0x80(%ebp),%esi
0876d806 +0x366:  ror    $0x2,%esi
0876d809 +0x369:  xor    %esi,%edi
0876d80b +0x36b:  mov    -0x80(%ebp),%esi
0876d80e +0x36e:  ror    $0x16,%esi
0876d811 +0x371:  xor    %esi,%edi
0876d813 +0x373:  mov    -0x94(%ebp),%esi
0876d819 +0x379:  add    %edi,%ecx
0876d81b +0x37b:  add    %edx,%ecx
0876d81d +0x37d:  mov    -0x90(%ebp),%edx
0876d823 +0x383:  mov    %ecx,-0x84(%ebp)
0876d829 +0x389:  mov    0x10(%esi),%ecx
0876d82c +0x38c:  test   %edx,%edx
0876d82e +0x38e:  je     0876e2d8 <+0xe38>
0876d834 +0x394:  mov    -0x64(%ebp),%edx
0876d837 +0x397:  mov    -0x64(%ebp),%edi
0876d83a +0x39a:  mov    -0x38(%ebp),%esi
0876d83d +0x39d:  add    -0x5c(%ebp),%esi
0876d840 +0x3a0:  ror    $0x11,%edx
0876d843 +0x3a3:  shr    $0xa,%edi
0876d846 +0x3a6:  xor    %edi,%edx
0876d848 +0x3a8:  mov    -0x64(%ebp),%edi
0876d84b +0x3ab:  ror    $0x13,%edi
0876d84e +0x3ae:  xor    %edi,%edx
0876d850 +0x3b0:  lea    (%esi,%edx,1),%edi
0876d853 +0x3b3:  mov    -0x58(%ebp),%edx
0876d856 +0x3b6:  mov    -0x58(%ebp),%esi
0876d859 +0x3b9:  ror    $0x7,%edx
0876d85c +0x3bc:  shr    $0x3,%esi
0876d85f +0x3bf:  xor    %esi,%edx
0876d861 +0x3c1:  mov    -0x58(%ebp),%esi
0876d864 +0x3c4:  ror    $0x12,%esi
0876d867 +0x3c7:  xor    %esi,%edx
0876d869 +0x3c9:  lea    (%edi,%edx,1),%edx
0876d86c +0x3cc:  mov    %edx,-0x5c(%ebp)
0876d86f +0x3cf:  mov    -0x74(%ebp),%esi
0876d872 +0x3d2:  add    -0x88(%ebp),%ecx
0876d878 +0x3d8:  xor    -0x7c(%ebp),%esi
0876d87b +0x3db:  and    -0x78(%ebp),%esi
0876d87e +0x3de:  xor    -0x7c(%ebp),%esi
0876d881 +0x3e1:  mov    -0x78(%ebp),%edi
0876d884 +0x3e4:  add    %esi,%ecx
0876d886 +0x3e6:  mov    -0x78(%ebp),%esi
0876d889 +0x3e9:  ror    $0xb,%edi
0876d88c +0x3ec:  ror    $0x6,%esi
0876d88f +0x3ef:  xor    %esi,%edi
0876d891 +0x3f1:  mov    -0x78(%ebp),%esi
0876d894 +0x3f4:  ror    $0x19,%esi
0876d897 +0x3f7:  xor    %esi,%edi
0876d899 +0x3f9:  mov    -0x84(%ebp),%esi
0876d89f +0x3ff:  add    %edi,%ecx
0876d8a1 +0x401:  mov    -0x94(%ebp),%edi
0876d8a7 +0x407:  lea    (%ecx,%edx,1),%edx
0876d8aa +0x40a:  mov    -0x84(%ebp),%ecx
0876d8b0 +0x410:  lea    (%edx,%eax,1),%eax
0876d8b3 +0x413:  mov    %eax,-0x88(%ebp)
0876d8b9 +0x419:  mov    -0x84(%ebp),%eax
0876d8bf +0x41f:  ror    $0x2,%esi
0876d8c2 +0x422:  and    -0x80(%ebp),%eax
0876d8c5 +0x425:  or     -0x80(%ebp),%ecx
0876d8c8 +0x428:  and    -0x70(%ebp),%ecx
0876d8cb +0x42b:  or     %eax,%ecx
0876d8cd +0x42d:  mov    -0x84(%ebp),%eax
0876d8d3 +0x433:  ror    $0xd,%eax
0876d8d6 +0x436:  xor    %esi,%eax
0876d8d8 +0x438:  mov    -0x84(%ebp),%esi
0876d8de +0x43e:  ror    $0x16,%esi
0876d8e1 +0x441:  xor    %esi,%eax
0876d8e3 +0x443:  lea    (%ecx,%eax,1),%esi
0876d8e6 +0x446:  mov    -0x90(%ebp),%eax
0876d8ec +0x44c:  add    %edx,%esi
0876d8ee +0x44e:  mov    0x14(%edi),%edx
0876d8f1 +0x451:  test   %eax,%eax
0876d8f3 +0x453:  je     0876e2c0 <+0xe20>
0876d8f9 +0x459:  mov    -0x60(%ebp),%eax
0876d8fc +0x45c:  mov    -0x60(%ebp),%edi
0876d8ff +0x45f:  mov    -0x34(%ebp),%ecx
0876d902 +0x462:  add    -0x58(%ebp),%ecx
0876d905 +0x465:  ror    $0x11,%eax
0876d908 +0x468:  shr    $0xa,%edi
0876d90b +0x46b:  xor    %edi,%eax
0876d90d +0x46d:  mov    -0x60(%ebp),%edi
0876d910 +0x470:  ror    $0x13,%edi
0876d913 +0x473:  xor    %edi,%eax
0876d915 +0x475:  lea    (%ecx,%eax,1),%edi
0876d918 +0x478:  mov    -0x54(%ebp),%eax
0876d91b +0x47b:  mov    -0x54(%ebp),%ecx
0876d91e +0x47e:  ror    $0x7,%eax
0876d921 +0x481:  shr    $0x3,%ecx
0876d924 +0x484:  xor    %ecx,%eax
0876d926 +0x486:  mov    -0x54(%ebp),%ecx
0876d929 +0x489:  ror    $0x12,%ecx
0876d92c +0x48c:  xor    %ecx,%eax
0876d92e +0x48e:  lea    (%edi,%eax,1),%eax
0876d931 +0x491:  mov    %eax,-0x58(%ebp)
0876d934 +0x494:  mov    -0x78(%ebp),%ecx
0876d937 +0x497:  add    -0x7c(%ebp),%edx
0876d93a +0x49a:  xor    -0x74(%ebp),%ecx
0876d93d +0x49d:  and    -0x88(%ebp),%ecx
0876d943 +0x4a3:  xor    -0x74(%ebp),%ecx
0876d946 +0x4a6:  mov    -0x88(%ebp),%edi
0876d94c +0x4ac:  add    %ecx,%edx
0876d94e +0x4ae:  mov    -0x88(%ebp),%ecx
0876d954 +0x4b4:  ror    $0xb,%edi
0876d957 +0x4b7:  ror    $0x6,%ecx
0876d95a +0x4ba:  xor    %ecx,%edi
0876d95c +0x4bc:  mov    -0x88(%ebp),%ecx
0876d962 +0x4c2:  ror    $0x19,%ecx
0876d965 +0x4c5:  xor    %ecx,%edi
0876d967 +0x4c7:  mov    -0x84(%ebp),%ecx
0876d96d +0x4cd:  add    %edi,%edx
0876d96f +0x4cf:  mov    -0x70(%ebp),%edi
0876d972 +0x4d2:  lea    (%edx,%eax,1),%eax
0876d975 +0x4d5:  mov    -0x84(%ebp),%edx
0876d97b +0x4db:  and    %esi,%ecx
0876d97d +0x4dd:  add    %eax,%edi
0876d97f +0x4df:  or     %esi,%edx
0876d981 +0x4e1:  and    -0x80(%ebp),%edx
0876d984 +0x4e4:  mov    %edi,-0x7c(%ebp)
0876d987 +0x4e7:  mov    %esi,%edi
0876d989 +0x4e9:  ror    $0x2,%edi
0876d98c +0x4ec:  or     %ecx,%edx
0876d98e +0x4ee:  mov    %esi,%ecx
0876d990 +0x4f0:  ror    $0xd,%ecx
0876d993 +0x4f3:  xor    %edi,%ecx
0876d995 +0x4f5:  mov    %esi,%edi
0876d997 +0x4f7:  ror    $0x16,%edi
0876d99a +0x4fa:  xor    %edi,%ecx
0876d99c +0x4fc:  mov    -0x90(%ebp),%edi
0876d9a2 +0x502:  lea    (%edx,%ecx,1),%ecx
0876d9a5 +0x505:  add    %eax,%ecx
0876d9a7 +0x507:  mov    -0x94(%ebp),%eax
0876d9ad +0x50d:  mov    %ecx,-0x70(%ebp)
0876d9b0 +0x510:  test   %edi,%edi
0876d9b2 +0x512:  mov    0x18(%eax),%edx
0876d9b5 +0x515:  je     0876e2a8 <+0xe08>
0876d9bb +0x51b:  mov    -0x5c(%ebp),%eax
0876d9be +0x51e:  mov    -0x5c(%ebp),%edi
0876d9c1 +0x521:  mov    -0x30(%ebp),%ecx
0876d9c4 +0x524:  add    -0x54(%ebp),%ecx
0876d9c7 +0x527:  ror    $0x11,%eax
0876d9ca +0x52a:  shr    $0xa,%edi
0876d9cd +0x52d:  xor    %edi,%eax
0876d9cf +0x52f:  mov    -0x5c(%ebp),%edi
0876d9d2 +0x532:  ror    $0x13,%edi
0876d9d5 +0x535:  xor    %edi,%eax
0876d9d7 +0x537:  lea    (%ecx,%eax,1),%edi
0876d9da +0x53a:  mov    -0x50(%ebp),%ecx
0876d9dd +0x53d:  mov    -0x50(%ebp),%eax
0876d9e0 +0x540:  ror    $0x7,%ecx
0876d9e3 +0x543:  shr    $0x3,%eax
0876d9e6 +0x546:  xor    %eax,%ecx
0876d9e8 +0x548:  mov    -0x50(%ebp),%eax
0876d9eb +0x54b:  ror    $0x12,%eax
0876d9ee +0x54e:  xor    %eax,%ecx
0876d9f0 +0x550:  lea    (%edi,%ecx,1),%ecx
0876d9f3 +0x553:  mov    %ecx,-0x54(%ebp)
0876d9f6 +0x556:  mov    -0x74(%ebp),%eax
0876d9f9 +0x559:  mov    -0x88(%ebp),%edi
0876d9ff +0x55f:  xor    -0x78(%ebp),%edi
0876da02 +0x562:  and    -0x7c(%ebp),%edi
0876da05 +0x565:  xor    -0x78(%ebp),%edi
0876da08 +0x568:  add    %edx,%eax
0876da0a +0x56a:  mov    -0x7c(%ebp),%edx
0876da0d +0x56d:  add    %edi,%eax
0876da0f +0x56f:  mov    -0x7c(%ebp),%edi
0876da12 +0x572:  ror    $0x6,%edx
0876da15 +0x575:  ror    $0xb,%edi
0876da18 +0x578:  xor    %edx,%edi
0876da1a +0x57a:  mov    -0x7c(%ebp),%edx
0876da1d +0x57d:  ror    $0x19,%edx
0876da20 +0x580:  xor    %edx,%edi
0876da22 +0x582:  mov    -0x80(%ebp),%edx
0876da25 +0x585:  add    %edi,%eax
0876da27 +0x587:  mov    -0x70(%ebp),%edi
0876da2a +0x58a:  add    %ecx,%eax
0876da2c +0x58c:  mov    -0x70(%ebp),%ecx
0876da2f +0x58f:  add    %eax,%edx
0876da31 +0x591:  mov    %edx,-0x74(%ebp)
0876da34 +0x594:  mov    -0x70(%ebp),%edx
0876da37 +0x597:  ror    $0xd,%edi
0876da3a +0x59a:  and    %esi,%ecx
0876da3c +0x59c:  or     %esi,%edx
0876da3e +0x59e:  and    -0x84(%ebp),%edx
0876da44 +0x5a4:  or     %ecx,%edx
0876da46 +0x5a6:  mov    -0x70(%ebp),%ecx
0876da49 +0x5a9:  ror    $0x2,%ecx
0876da4c +0x5ac:  xor    %ecx,%edi
0876da4e +0x5ae:  mov    -0x70(%ebp),%ecx
0876da51 +0x5b1:  ror    $0x16,%ecx
0876da54 +0x5b4:  xor    %ecx,%edi
0876da56 +0x5b6:  mov    -0x94(%ebp),%ecx
0876da5c +0x5bc:  lea    (%edx,%edi,1),%edi
0876da5f +0x5bf:  add    %eax,%edi
0876da61 +0x5c1:  mov    %edi,-0x80(%ebp)
0876da64 +0x5c4:  mov    0x1c(%ecx),%edx
0876da67 +0x5c7:  mov    -0x90(%ebp),%ecx
0876da6d +0x5cd:  test   %ecx,%ecx
0876da6f +0x5cf:  je     0876e290 <+0xdf0>
0876da75 +0x5d5:  mov    -0x58(%ebp),%eax
0876da78 +0x5d8:  mov    -0x58(%ebp),%edi
0876da7b +0x5db:  mov    -0x6c(%ebp),%ecx
0876da7e +0x5de:  add    -0x50(%ebp),%ecx
0876da81 +0x5e1:  ror    $0x11,%eax
0876da84 +0x5e4:  shr    $0xa,%edi
0876da87 +0x5e7:  xor    %edi,%eax
0876da89 +0x5e9:  mov    -0x58(%ebp),%edi
0876da8c +0x5ec:  ror    $0x13,%edi
0876da8f +0x5ef:  xor    %edi,%eax
0876da91 +0x5f1:  lea    (%ecx,%eax,1),%edi
0876da94 +0x5f4:  mov    -0x4c(%ebp),%ecx
0876da97 +0x5f7:  mov    -0x4c(%ebp),%eax
0876da9a +0x5fa:  ror    $0x7,%ecx
0876da9d +0x5fd:  shr    $0x3,%eax
0876daa0 +0x600:  xor    %eax,%ecx
0876daa2 +0x602:  mov    -0x4c(%ebp),%eax
0876daa5 +0x605:  ror    $0x12,%eax
0876daa8 +0x608:  xor    %eax,%ecx
0876daaa +0x60a:  lea    (%edi,%ecx,1),%ecx
0876daad +0x60d:  mov    %ecx,-0x50(%ebp)
0876dab0 +0x610:  mov    -0x78(%ebp),%eax
0876dab3 +0x613:  mov    -0x7c(%ebp),%edi
0876dab6 +0x616:  xor    -0x88(%ebp),%edi
0876dabc +0x61c:  and    -0x74(%ebp),%edi
0876dabf +0x61f:  xor    -0x88(%ebp),%edi
0876dac5 +0x625:  add    %edx,%eax
0876dac7 +0x627:  mov    -0x74(%ebp),%edx
0876daca +0x62a:  add    %edi,%eax
0876dacc +0x62c:  mov    -0x74(%ebp),%edi
0876dacf +0x62f:  ror    $0x6,%edx
0876dad2 +0x632:  ror    $0xb,%edi
0876dad5 +0x635:  xor    %edx,%edi
0876dad7 +0x637:  mov    -0x74(%ebp),%edx
0876dada +0x63a:  ror    $0x19,%edx
0876dadd +0x63d:  xor    %edx,%edi
0876dadf +0x63f:  mov    -0x84(%ebp),%edx
0876dae5 +0x645:  add    %edi,%eax
0876dae7 +0x647:  mov    -0x80(%ebp),%edi
0876daea +0x64a:  add    %ecx,%eax
0876daec +0x64c:  mov    -0x80(%ebp),%ecx
0876daef +0x64f:  and    -0x70(%ebp),%ecx
0876daf2 +0x652:  add    %eax,%edx
0876daf4 +0x654:  mov    %edx,-0x78(%ebp)
0876daf7 +0x657:  mov    -0x80(%ebp),%edx
0876dafa +0x65a:  ror    $0xd,%edi
0876dafd +0x65d:  or     -0x70(%ebp),%edx
0876db00 +0x660:  and    %esi,%edx
0876db02 +0x662:  or     %ecx,%edx
0876db04 +0x664:  mov    -0x80(%ebp),%ecx
0876db07 +0x667:  ror    $0x2,%ecx
0876db0a +0x66a:  xor    %ecx,%edi
0876db0c +0x66c:  mov    -0x80(%ebp),%ecx
0876db0f +0x66f:  ror    $0x16,%ecx
0876db12 +0x672:  xor    %ecx,%edi
0876db14 +0x674:  mov    -0x94(%ebp),%ecx
0876db1a +0x67a:  lea    (%edx,%edi,1),%edi
0876db1d +0x67d:  mov    -0x90(%ebp),%edx
0876db23 +0x683:  add    %eax,%edi
0876db25 +0x685:  mov    %edi,-0x84(%ebp)
0876db2b +0x68b:  mov    0x20(%ecx),%eax
0876db2e +0x68e:  test   %edx,%edx
0876db30 +0x690:  je     0876e278 <+0xdd8>
0876db36 +0x696:  mov    -0x54(%ebp),%edx
0876db39 +0x699:  mov    -0x54(%ebp),%edi
0876db3c +0x69c:  mov    -0x68(%ebp),%ecx
0876db3f +0x69f:  add    -0x4c(%ebp),%ecx
0876db42 +0x6a2:  ror    $0x11,%edx
0876db45 +0x6a5:  shr    $0xa,%edi
0876db48 +0x6a8:  xor    %edi,%edx
0876db4a +0x6aa:  mov    -0x54(%ebp),%edi
0876db4d +0x6ad:  ror    $0x13,%edi
0876db50 +0x6b0:  xor    %edi,%edx
0876db52 +0x6b2:  lea    (%ecx,%edx,1),%edi
0876db55 +0x6b5:  mov    -0x48(%ebp),%ecx
0876db58 +0x6b8:  mov    -0x48(%ebp),%edx
0876db5b +0x6bb:  ror    $0x7,%ecx
0876db5e +0x6be:  shr    $0x3,%edx
0876db61 +0x6c1:  xor    %edx,%ecx
0876db63 +0x6c3:  mov    -0x48(%ebp),%edx
0876db66 +0x6c6:  ror    $0x12,%edx
0876db69 +0x6c9:  xor    %edx,%ecx
0876db6b +0x6cb:  lea    (%edi,%ecx,1),%ecx
0876db6e +0x6ce:  mov    %ecx,-0x4c(%ebp)
0876db71 +0x6d1:  mov    -0x74(%ebp),%edx
0876db74 +0x6d4:  add    -0x88(%ebp),%eax
0876db7a +0x6da:  xor    -0x7c(%ebp),%edx
0876db7d +0x6dd:  and    -0x78(%ebp),%edx
0876db80 +0x6e0:  xor    -0x7c(%ebp),%edx
0876db83 +0x6e3:  mov    -0x78(%ebp),%edi
0876db86 +0x6e6:  add    %edx,%eax
0876db88 +0x6e8:  mov    -0x78(%ebp),%edx
0876db8b +0x6eb:  ror    $0xb,%edi
0876db8e +0x6ee:  ror    $0x6,%edx
0876db91 +0x6f1:  xor    %edx,%edi
0876db93 +0x6f3:  mov    -0x78(%ebp),%edx
0876db96 +0x6f6:  ror    $0x19,%edx
0876db99 +0x6f9:  xor    %edx,%edi
0876db9b +0x6fb:  mov    -0x84(%ebp),%edx
0876dba1 +0x701:  add    %edi,%eax
0876dba3 +0x703:  lea    (%eax,%ecx,1),%ecx
0876dba6 +0x706:  mov    -0x84(%ebp),%eax
0876dbac +0x70c:  and    -0x80(%ebp),%edx
0876dbaf +0x70f:  or     -0x80(%ebp),%eax
0876dbb2 +0x712:  and    -0x70(%ebp),%eax
0876dbb5 +0x715:  lea    (%ecx,%esi,1),%esi
0876dbb8 +0x718:  mov    %esi,-0x8c(%ebp)
0876dbbe +0x71e:  mov    -0x84(%ebp),%esi
0876dbc4 +0x724:  or     %edx,%eax
0876dbc6 +0x726:  mov    -0x84(%ebp),%edx
0876dbcc +0x72c:  ror    $0xd,%esi
0876dbcf +0x72f:  ror    $0x2,%edx
0876dbd2 +0x732:  xor    %edx,%esi
0876dbd4 +0x734:  mov    -0x84(%ebp),%edx
0876dbda +0x73a:  ror    $0x16,%edx
0876dbdd +0x73d:  xor    %edx,%esi
0876dbdf +0x73f:  lea    (%eax,%esi,1),%edx
0876dbe2 +0x742:  mov    -0x90(%ebp),%eax
0876dbe8 +0x748:  mov    -0x94(%ebp),%esi
0876dbee +0x74e:  add    %ecx,%edx
0876dbf0 +0x750:  test   %eax,%eax
0876dbf2 +0x752:  mov    0x24(%esi),%ecx
0876dbf5 +0x755:  je     0876e260 <+0xdc0>
0876dbfb +0x75b:  mov    -0x50(%ebp),%eax
0876dbfe +0x75e:  mov    -0x50(%ebp),%edi
0876dc01 +0x761:  mov    -0x64(%ebp),%esi
0876dc04 +0x764:  add    -0x48(%ebp),%esi
0876dc07 +0x767:  ror    $0x11,%eax
0876dc0a +0x76a:  shr    $0xa,%edi
0876dc0d +0x76d:  xor    %edi,%eax
0876dc0f +0x76f:  mov    -0x50(%ebp),%edi
0876dc12 +0x772:  ror    $0x13,%edi
0876dc15 +0x775:  xor    %edi,%eax
0876dc17 +0x777:  lea    (%esi,%eax,1),%edi
0876dc1a +0x77a:  mov    -0x44(%ebp),%eax
0876dc1d +0x77d:  mov    -0x44(%ebp),%esi
0876dc20 +0x780:  ror    $0x7,%eax
0876dc23 +0x783:  shr    $0x3,%esi
0876dc26 +0x786:  xor    %esi,%eax
0876dc28 +0x788:  mov    -0x44(%ebp),%esi
0876dc2b +0x78b:  ror    $0x12,%esi
0876dc2e +0x78e:  xor    %esi,%eax
0876dc30 +0x790:  lea    (%edi,%eax,1),%eax
0876dc33 +0x793:  mov    %eax,-0x48(%ebp)
0876dc36 +0x796:  mov    -0x78(%ebp),%esi
0876dc39 +0x799:  add    -0x7c(%ebp),%ecx
0876dc3c +0x79c:  xor    -0x74(%ebp),%esi
0876dc3f +0x79f:  and    -0x8c(%ebp),%esi
0876dc45 +0x7a5:  xor    -0x74(%ebp),%esi
0876dc48 +0x7a8:  mov    -0x8c(%ebp),%edi
0876dc4e +0x7ae:  add    %esi,%ecx
0876dc50 +0x7b0:  mov    -0x8c(%ebp),%esi
0876dc56 +0x7b6:  ror    $0xb,%edi
0876dc59 +0x7b9:  ror    $0x6,%esi
0876dc5c +0x7bc:  xor    %esi,%edi
0876dc5e +0x7be:  mov    -0x8c(%ebp),%esi
0876dc64 +0x7c4:  ror    $0x19,%esi
0876dc67 +0x7c7:  xor    %esi,%edi
0876dc69 +0x7c9:  mov    -0x84(%ebp),%esi
0876dc6f +0x7cf:  add    %edi,%ecx
0876dc71 +0x7d1:  mov    -0x70(%ebp),%edi
0876dc74 +0x7d4:  lea    (%ecx,%eax,1),%eax
0876dc77 +0x7d7:  mov    -0x84(%ebp),%ecx
0876dc7d +0x7dd:  and    %edx,%esi
0876dc7f +0x7df:  add    %eax,%edi
0876dc81 +0x7e1:  or     %edx,%ecx
0876dc83 +0x7e3:  and    -0x80(%ebp),%ecx
0876dc86 +0x7e6:  mov    %edi,-0x88(%ebp)
0876dc8c +0x7ec:  mov    %edx,%edi
0876dc8e +0x7ee:  ror    $0x2,%edi
0876dc91 +0x7f1:  or     %esi,%ecx
0876dc93 +0x7f3:  mov    %edx,%esi
0876dc95 +0x7f5:  ror    $0xd,%esi
0876dc98 +0x7f8:  xor    %edi,%esi
0876dc9a +0x7fa:  mov    %edx,%edi
0876dc9c +0x7fc:  ror    $0x16,%edi
0876dc9f +0x7ff:  xor    %edi,%esi
0876dca1 +0x801:  mov    -0x90(%ebp),%edi
0876dca7 +0x807:  lea    (%ecx,%esi,1),%esi
0876dcaa +0x80a:  add    %eax,%esi
0876dcac +0x80c:  mov    -0x94(%ebp),%eax
0876dcb2 +0x812:  mov    %esi,-0x7c(%ebp)
0876dcb5 +0x815:  test   %edi,%edi
0876dcb7 +0x817:  mov    0x28(%eax),%ecx
0876dcba +0x81a:  je     0876e248 <+0xda8>
0876dcc0 +0x820:  mov    -0x4c(%ebp),%eax
0876dcc3 +0x823:  mov    -0x4c(%ebp),%edi
0876dcc6 +0x826:  mov    -0x60(%ebp),%esi
0876dcc9 +0x829:  add    -0x44(%ebp),%esi
0876dccc +0x82c:  ror    $0x11,%eax
0876dccf +0x82f:  shr    $0xa,%edi
0876dcd2 +0x832:  xor    %edi,%eax
0876dcd4 +0x834:  mov    -0x4c(%ebp),%edi
0876dcd7 +0x837:  ror    $0x13,%edi
0876dcda +0x83a:  xor    %edi,%eax
0876dcdc +0x83c:  lea    (%esi,%eax,1),%edi
0876dcdf +0x83f:  mov    -0x40(%ebp),%esi
0876dce2 +0x842:  mov    -0x40(%ebp),%eax
0876dce5 +0x845:  ror    $0x7,%esi
0876dce8 +0x848:  shr    $0x3,%eax
0876dceb +0x84b:  xor    %eax,%esi
0876dced +0x84d:  mov    -0x40(%ebp),%eax
0876dcf0 +0x850:  ror    $0x12,%eax
0876dcf3 +0x853:  xor    %eax,%esi
0876dcf5 +0x855:  lea    (%edi,%esi,1),%esi
0876dcf8 +0x858:  mov    %esi,-0x44(%ebp)
0876dcfb +0x85b:  mov    -0x8c(%ebp),%edi
0876dd01 +0x861:  add    -0x74(%ebp),%ecx
0876dd04 +0x864:  xor    -0x78(%ebp),%edi
0876dd07 +0x867:  and    -0x88(%ebp),%edi
0876dd0d +0x86d:  xor    -0x78(%ebp),%edi
0876dd10 +0x870:  lea    (%ecx,%edi,1),%eax
0876dd13 +0x873:  mov    -0x88(%ebp),%edi
0876dd19 +0x879:  mov    -0x88(%ebp),%ecx
0876dd1f +0x87f:  ror    $0xb,%edi
0876dd22 +0x882:  ror    $0x6,%ecx
0876dd25 +0x885:  xor    %ecx,%edi
0876dd27 +0x887:  mov    -0x88(%ebp),%ecx
0876dd2d +0x88d:  ror    $0x19,%ecx
0876dd30 +0x890:  xor    %ecx,%edi
0876dd32 +0x892:  mov    -0x80(%ebp),%ecx
0876dd35 +0x895:  add    %edi,%eax
0876dd37 +0x897:  mov    -0x7c(%ebp),%edi
0876dd3a +0x89a:  add    %esi,%eax
0876dd3c +0x89c:  mov    -0x7c(%ebp),%esi
0876dd3f +0x89f:  add    %eax,%ecx
0876dd41 +0x8a1:  mov    %ecx,-0x74(%ebp)
0876dd44 +0x8a4:  mov    -0x7c(%ebp),%ecx
0876dd47 +0x8a7:  ror    $0xd,%edi
0876dd4a +0x8aa:  and    %edx,%esi
0876dd4c +0x8ac:  or     %edx,%ecx
0876dd4e +0x8ae:  and    -0x84(%ebp),%ecx
0876dd54 +0x8b4:  or     %esi,%ecx
0876dd56 +0x8b6:  mov    -0x7c(%ebp),%esi
0876dd59 +0x8b9:  ror    $0x2,%esi
0876dd5c +0x8bc:  xor    %esi,%edi
0876dd5e +0x8be:  mov    -0x7c(%ebp),%esi
0876dd61 +0x8c1:  ror    $0x16,%esi
0876dd64 +0x8c4:  xor    %esi,%edi
0876dd66 +0x8c6:  mov    -0x94(%ebp),%esi
0876dd6c +0x8cc:  lea    (%ecx,%edi,1),%edi
0876dd6f +0x8cf:  add    %eax,%edi
0876dd71 +0x8d1:  mov    %edi,-0x70(%ebp)
0876dd74 +0x8d4:  mov    0x2c(%esi),%ecx
0876dd77 +0x8d7:  mov    -0x90(%ebp),%esi
0876dd7d +0x8dd:  test   %esi,%esi
0876dd7f +0x8df:  je     0876e230 <+0xd90>
0876dd85 +0x8e5:  mov    -0x48(%ebp),%eax
0876dd88 +0x8e8:  mov    -0x48(%ebp),%edi
0876dd8b +0x8eb:  mov    -0x5c(%ebp),%esi
0876dd8e +0x8ee:  add    -0x40(%ebp),%esi
0876dd91 +0x8f1:  ror    $0x11,%eax
0876dd94 +0x8f4:  shr    $0xa,%edi
0876dd97 +0x8f7:  xor    %edi,%eax
0876dd99 +0x8f9:  mov    -0x48(%ebp),%edi
0876dd9c +0x8fc:  ror    $0x13,%edi
0876dd9f +0x8ff:  xor    %edi,%eax
0876dda1 +0x901:  lea    (%esi,%eax,1),%edi
0876dda4 +0x904:  mov    -0x3c(%ebp),%esi
0876dda7 +0x907:  mov    -0x3c(%ebp),%eax
0876ddaa +0x90a:  ror    $0x7,%esi
0876ddad +0x90d:  shr    $0x3,%eax
0876ddb0 +0x910:  xor    %eax,%esi
0876ddb2 +0x912:  mov    -0x3c(%ebp),%eax
0876ddb5 +0x915:  ror    $0x12,%eax
0876ddb8 +0x918:  xor    %eax,%esi
0876ddba +0x91a:  lea    (%edi,%esi,1),%esi
0876ddbd +0x91d:  mov    %esi,-0x40(%ebp)
0876ddc0 +0x920:  mov    -0x88(%ebp),%edi
0876ddc6 +0x926:  add    -0x78(%ebp),%ecx
0876ddc9 +0x929:  xor    -0x8c(%ebp),%edi
0876ddcf +0x92f:  and    -0x74(%ebp),%edi
0876ddd2 +0x932:  xor    -0x8c(%ebp),%edi
0876ddd8 +0x938:  lea    (%ecx,%edi,1),%eax
0876dddb +0x93b:  mov    -0x74(%ebp),%edi
0876ddde +0x93e:  mov    -0x74(%ebp),%ecx
0876dde1 +0x941:  ror    $0xb,%edi
0876dde4 +0x944:  ror    $0x6,%ecx
0876dde7 +0x947:  xor    %ecx,%edi
0876dde9 +0x949:  mov    -0x74(%ebp),%ecx
0876ddec +0x94c:  ror    $0x19,%ecx
0876ddef +0x94f:  xor    %ecx,%edi
0876ddf1 +0x951:  mov    -0x84(%ebp),%ecx
0876ddf7 +0x957:  add    %edi,%eax
0876ddf9 +0x959:  mov    -0x70(%ebp),%edi
0876ddfc +0x95c:  add    %esi,%eax
0876ddfe +0x95e:  mov    -0x70(%ebp),%esi
0876de01 +0x961:  and    -0x7c(%ebp),%esi
0876de04 +0x964:  add    %eax,%ecx
0876de06 +0x966:  mov    %ecx,-0x78(%ebp)
0876de09 +0x969:  mov    -0x70(%ebp),%ecx
0876de0c +0x96c:  ror    $0xd,%edi
0876de0f +0x96f:  or     -0x7c(%ebp),%ecx
0876de12 +0x972:  and    %edx,%ecx
0876de14 +0x974:  or     %esi,%ecx
0876de16 +0x976:  mov    -0x70(%ebp),%esi
0876de19 +0x979:  ror    $0x2,%esi
0876de1c +0x97c:  xor    %esi,%edi
0876de1e +0x97e:  mov    -0x70(%ebp),%esi
0876de21 +0x981:  ror    $0x16,%esi
0876de24 +0x984:  xor    %esi,%edi
0876de26 +0x986:  lea    (%ecx,%edi,1),%edi
0876de29 +0x989:  mov    -0x90(%ebp),%ecx
0876de2f +0x98f:  add    %eax,%edi
0876de31 +0x991:  mov    %edi,-0x80(%ebp)
0876de34 +0x994:  mov    -0x94(%ebp),%edi
0876de3a +0x99a:  test   %ecx,%ecx
0876de3c +0x99c:  mov    0x30(%edi),%esi
0876de3f +0x99f:  je     0876e218 <+0xd78>
0876de45 +0x9a5:  mov    -0x44(%ebp),%eax
0876de48 +0x9a8:  mov    -0x44(%ebp),%edi
0876de4b +0x9ab:  mov    -0x58(%ebp),%ecx
0876de4e +0x9ae:  add    -0x3c(%ebp),%ecx
0876de51 +0x9b1:  ror    $0x11,%eax
0876de54 +0x9b4:  shr    $0xa,%edi
0876de57 +0x9b7:  xor    %edi,%eax
0876de59 +0x9b9:  mov    -0x44(%ebp),%edi
0876de5c +0x9bc:  ror    $0x13,%edi
0876de5f +0x9bf:  xor    %edi,%eax
0876de61 +0x9c1:  lea    (%ecx,%eax,1),%edi
0876de64 +0x9c4:  mov    -0x38(%ebp),%ecx
0876de67 +0x9c7:  mov    -0x38(%ebp),%eax
0876de6a +0x9ca:  ror    $0x7,%ecx
0876de6d +0x9cd:  shr    $0x3,%eax
0876de70 +0x9d0:  xor    %eax,%ecx
0876de72 +0x9d2:  mov    -0x38(%ebp),%eax
0876de75 +0x9d5:  ror    $0x12,%eax
0876de78 +0x9d8:  xor    %eax,%ecx
0876de7a +0x9da:  lea    (%edi,%ecx,1),%ecx
0876de7d +0x9dd:  mov    %ecx,-0x3c(%ebp)
0876de80 +0x9e0:  mov    -0x74(%ebp),%eax
0876de83 +0x9e3:  add    -0x8c(%ebp),%esi
0876de89 +0x9e9:  xor    -0x88(%ebp),%eax
0876de8f +0x9ef:  and    -0x78(%ebp),%eax
0876de92 +0x9f2:  xor    -0x88(%ebp),%eax
0876de98 +0x9f8:  mov    -0x78(%ebp),%edi
0876de9b +0x9fb:  add    %eax,%esi
0876de9d +0x9fd:  mov    -0x78(%ebp),%eax
0876dea0 +0xa00:  ror    $0xb,%edi
0876dea3 +0xa03:  ror    $0x6,%eax
0876dea6 +0xa06:  xor    %eax,%edi
0876dea8 +0xa08:  mov    -0x78(%ebp),%eax
0876deab +0xa0b:  ror    $0x19,%eax
0876deae +0xa0e:  xor    %eax,%edi
0876deb0 +0xa10:  mov    -0x80(%ebp),%eax
0876deb3 +0xa13:  add    %edi,%esi
0876deb5 +0xa15:  lea    (%esi,%ecx,1),%ecx
0876deb8 +0xa18:  mov    -0x80(%ebp),%esi
0876debb +0xa1b:  and    -0x70(%ebp),%eax
0876debe +0xa1e:  or     -0x70(%ebp),%esi
0876dec1 +0xa21:  and    -0x7c(%ebp),%esi
0876dec4 +0xa24:  lea    (%ecx,%edx,1),%edx
0876dec7 +0xa27:  mov    %edx,-0x10(%ebp)
0876deca +0xa2a:  or     %eax,%esi
0876decc +0xa2c:  mov    -0x80(%ebp),%eax
0876decf +0xa2f:  mov    %edx,-0x84(%ebp)
0876ded5 +0xa35:  mov    -0x80(%ebp),%edx
0876ded8 +0xa38:  ror    $0x2,%eax
0876dedb +0xa3b:  ror    $0xd,%edx
0876dede +0xa3e:  xor    %eax,%edx
0876dee0 +0xa40:  mov    -0x80(%ebp),%eax
0876dee3 +0xa43:  ror    $0x16,%eax
0876dee6 +0xa46:  xor    %eax,%edx
0876dee8 +0xa48:  lea    (%esi,%edx,1),%eax
0876deeb +0xa4b:  mov    -0x94(%ebp),%edx
0876def1 +0xa51:  add    %ecx,%eax
0876def3 +0xa53:  mov    %eax,-0x20(%ebp)
0876def6 +0xa56:  mov    0x34(%edx),%ecx
0876def9 +0xa59:  mov    -0x90(%ebp),%edx
0876deff +0xa5f:  test   %edx,%edx
0876df01 +0xa61:  je     0876e200 <+0xd60>
0876df07 +0xa67:  mov    -0x40(%ebp),%edx
0876df0a +0xa6a:  mov    -0x40(%ebp),%edi
0876df0d +0xa6d:  mov    -0x54(%ebp),%esi
0876df10 +0xa70:  add    -0x38(%ebp),%esi
0876df13 +0xa73:  ror    $0x11,%edx
0876df16 +0xa76:  shr    $0xa,%edi
0876df19 +0xa79:  xor    %edi,%edx
0876df1b +0xa7b:  mov    -0x40(%ebp),%edi
0876df1e +0xa7e:  ror    $0x13,%edi
0876df21 +0xa81:  xor    %edi,%edx
0876df23 +0xa83:  lea    (%esi,%edx,1),%edi
0876df26 +0xa86:  mov    -0x34(%ebp),%esi
0876df29 +0xa89:  mov    -0x34(%ebp),%edx
0876df2c +0xa8c:  ror    $0x7,%esi
0876df2f +0xa8f:  shr    $0x3,%edx
0876df32 +0xa92:  xor    %edx,%esi
0876df34 +0xa94:  mov    -0x34(%ebp),%edx
0876df37 +0xa97:  ror    $0x12,%edx
0876df3a +0xa9a:  xor    %edx,%esi
0876df3c +0xa9c:  lea    (%edi,%esi,1),%esi
0876df3f +0xa9f:  mov    %esi,-0x38(%ebp)
0876df42 +0xaa2:  mov    -0x78(%ebp),%edx
0876df45 +0xaa5:  add    -0x88(%ebp),%ecx
0876df4b +0xaab:  xor    -0x74(%ebp),%edx
0876df4e +0xaae:  and    -0x84(%ebp),%edx
0876df54 +0xab4:  xor    -0x74(%ebp),%edx
0876df57 +0xab7:  mov    -0x84(%ebp),%edi
0876df5d +0xabd:  add    %edx,%ecx
0876df5f +0xabf:  mov    -0x84(%ebp),%edx
0876df65 +0xac5:  ror    $0xb,%edi
0876df68 +0xac8:  ror    $0x6,%edx
0876df6b +0xacb:  xor    %edx,%edi
0876df6d +0xacd:  mov    -0x84(%ebp),%edx
0876df73 +0xad3:  ror    $0x19,%edx
0876df76 +0xad6:  xor    %edx,%edi
0876df78 +0xad8:  mov    -0x80(%ebp),%edx
0876df7b +0xadb:  add    %edi,%ecx
0876df7d +0xadd:  mov    -0x80(%ebp),%edi
0876df80 +0xae0:  lea    (%ecx,%esi,1),%esi
0876df83 +0xae3:  mov    -0x7c(%ebp),%ecx
0876df86 +0xae6:  and    %eax,%edx
0876df88 +0xae8:  or     %eax,%edi
0876df8a +0xaea:  and    -0x70(%ebp),%edi
0876df8d +0xaed:  add    %esi,%ecx
0876df8f +0xaef:  mov    %ecx,-0x14(%ebp)
0876df92 +0xaf2:  mov    %ecx,-0x7c(%ebp)
0876df95 +0xaf5:  mov    %eax,%ecx
0876df97 +0xaf7:  or     %edx,%edi
0876df99 +0xaf9:  mov    %eax,%edx
0876df9b +0xafb:  ror    $0x2,%edx
0876df9e +0xafe:  ror    $0xd,%ecx
0876dfa1 +0xb01:  xor    %edx,%ecx
0876dfa3 +0xb03:  mov    %eax,%edx
0876dfa5 +0xb05:  ror    $0x16,%edx
0876dfa8 +0xb08:  xor    %edx,%ecx
0876dfaa +0xb0a:  lea    (%edi,%ecx,1),%edx
0876dfad +0xb0d:  mov    -0x90(%ebp),%edi
0876dfb3 +0xb13:  add    %esi,%edx
0876dfb5 +0xb15:  mov    -0x94(%ebp),%esi
0876dfbb +0xb1b:  mov    %edx,-0x24(%ebp)
0876dfbe +0xb1e:  test   %edi,%edi
0876dfc0 +0xb20:  mov    0x38(%esi),%esi
0876dfc3 +0xb23:  mov    %esi,-0x8c(%ebp)
0876dfc9 +0xb29:  je     0876e1e8 <+0xd48>
0876dfcf +0xb2f:  mov    -0x3c(%ebp),%edi
0876dfd2 +0xb32:  mov    -0x3c(%ebp),%esi
0876dfd5 +0xb35:  mov    -0x50(%ebp),%ecx
0876dfd8 +0xb38:  add    -0x34(%ebp),%ecx
0876dfdb +0xb3b:  ror    $0x11,%edi
0876dfde +0xb3e:  shr    $0xa,%esi
0876dfe1 +0xb41:  xor    %esi,%edi
0876dfe3 +0xb43:  mov    -0x3c(%ebp),%esi
0876dfe6 +0xb46:  ror    $0x13,%esi
0876dfe9 +0xb49:  xor    %esi,%edi
0876dfeb +0xb4b:  lea    (%ecx,%edi,1),%esi
0876dfee +0xb4e:  mov    -0x30(%ebp),%edi
0876dff1 +0xb51:  mov    -0x30(%ebp),%ecx
0876dff4 +0xb54:  ror    $0x7,%edi
0876dff7 +0xb57:  shr    $0x3,%ecx
0876dffa +0xb5a:  xor    %ecx,%edi
0876dffc +0xb5c:  mov    -0x30(%ebp),%ecx
0876dfff +0xb5f:  ror    $0x12,%ecx
0876e002 +0xb62:  xor    %ecx,%edi
0876e004 +0xb64:  add    %esi,%edi
0876e006 +0xb66:  mov    %edi,-0x34(%ebp)
0876e009 +0xb69:  mov    -0x8c(%ebp),%esi
0876e00f +0xb6f:  mov    -0x84(%ebp),%ecx
0876e015 +0xb75:  add    -0x74(%ebp),%esi
0876e018 +0xb78:  xor    -0x78(%ebp),%ecx
0876e01b +0xb7b:  and    -0x7c(%ebp),%ecx
0876e01e +0xb7e:  xor    -0x78(%ebp),%ecx
0876e021 +0xb81:  lea    (%esi,%ecx,1),%ecx
0876e024 +0xb84:  mov    -0x7c(%ebp),%esi
0876e027 +0xb87:  mov    %ecx,-0x74(%ebp)
0876e02a +0xb8a:  mov    -0x7c(%ebp),%ecx
0876e02d +0xb8d:  ror    $0xb,%esi
0876e030 +0xb90:  ror    $0x6,%ecx
0876e033 +0xb93:  xor    %ecx,%esi
0876e035 +0xb95:  mov    -0x7c(%ebp),%ecx
0876e038 +0xb98:  ror    $0x19,%ecx
0876e03b +0xb9b:  xor    %ecx,%esi
0876e03d +0xb9d:  mov    -0x74(%ebp),%ecx
0876e040 +0xba0:  add    %esi,%ecx
0876e042 +0xba2:  mov    -0x70(%ebp),%esi
0876e045 +0xba5:  add    %edi,%ecx
0876e047 +0xba7:  mov    %edx,%edi
0876e049 +0xba9:  or     %eax,%edi
0876e04b +0xbab:  and    -0x80(%ebp),%edi
0876e04e +0xbae:  add    %ecx,%esi
0876e050 +0xbb0:  mov    %esi,-0x18(%ebp)
0876e053 +0xbb3:  mov    %esi,-0x70(%ebp)
0876e056 +0xbb6:  mov    %edx,%esi
0876e058 +0xbb8:  and    %eax,%esi
0876e05a +0xbba:  or     %esi,%edi
0876e05c +0xbbc:  mov    %edx,%esi
0876e05e +0xbbe:  mov    %ecx,-0x88(%ebp)
0876e064 +0xbc4:  mov    %edx,%ecx
0876e066 +0xbc6:  ror    $0x2,%ecx
0876e069 +0xbc9:  ror    $0xd,%esi
0876e06c +0xbcc:  xor    %ecx,%esi
0876e06e +0xbce:  mov    %edx,%ecx
0876e070 +0xbd0:  ror    $0x16,%ecx
0876e073 +0xbd3:  xor    %ecx,%esi
0876e075 +0xbd5:  mov    -0x88(%ebp),%ecx
0876e07b +0xbdb:  lea    (%edi,%esi,1),%esi
0876e07e +0xbde:  lea    (%esi,%ecx,1),%ecx
0876e081 +0xbe1:  mov    -0x94(%ebp),%esi
0876e087 +0xbe7:  mov    %ecx,-0x28(%ebp)
0876e08a +0xbea:  mov    0x3c(%esi),%esi
0876e08d +0xbed:  mov    %esi,-0x8c(%ebp)
0876e093 +0xbf3:  mov    -0x90(%ebp),%esi
0876e099 +0xbf9:  test   %esi,%esi
0876e09b +0xbfb:  je     0876e1d0 <+0xd30>
0876e0a1 +0xc01:  mov    -0x30(%ebp),%esi
0876e0a4 +0xc04:  mov    -0x4c(%ebp),%edi
0876e0a7 +0xc07:  add    %esi,%edi
0876e0a9 +0xc09:  mov    -0x38(%ebp),%esi
0876e0ac +0xc0c:  mov    %edi,-0x88(%ebp)
0876e0b2 +0xc12:  mov    -0x38(%ebp),%edi
0876e0b5 +0xc15:  ror    $0x11,%esi
0876e0b8 +0xc18:  shr    $0xa,%edi
0876e0bb +0xc1b:  xor    %edi,%esi
0876e0bd +0xc1d:  mov    -0x38(%ebp),%edi
0876e0c0 +0xc20:  ror    $0x13,%edi
0876e0c3 +0xc23:  xor    %edi,%esi
0876e0c5 +0xc25:  mov    -0x6c(%ebp),%edi
0876e0c8 +0xc28:  add    -0x88(%ebp),%esi
0876e0ce +0xc2e:  mov    %esi,-0x74(%ebp)
0876e0d1 +0xc31:  mov    -0x6c(%ebp),%esi
0876e0d4 +0xc34:  shr    $0x3,%edi
0876e0d7 +0xc37:  ror    $0x7,%esi
0876e0da +0xc3a:  xor    %edi,%esi
0876e0dc +0xc3c:  mov    -0x6c(%ebp),%edi
0876e0df +0xc3f:  ror    $0x12,%edi
0876e0e2 +0xc42:  xor    %edi,%esi
0876e0e4 +0xc44:  add    -0x74(%ebp),%esi
0876e0e7 +0xc47:  mov    %esi,-0x88(%ebp)
0876e0ed +0xc4d:  mov    %esi,-0x30(%ebp)
0876e0f0 +0xc50:  mov    -0x78(%ebp),%esi
0876e0f3 +0xc53:  mov    -0x7c(%ebp),%edi
0876e0f6 +0xc56:  add    -0x8c(%ebp),%esi
0876e0fc +0xc5c:  xor    -0x84(%ebp),%edi
0876e102 +0xc62:  and    -0x70(%ebp),%edi
0876e105 +0xc65:  xor    -0x84(%ebp),%edi
0876e10b +0xc6b:  addl   $0x10,-0x90(%ebp)
0876e112 +0xc72:  addl   $0x40,-0x94(%ebp)
0876e119 +0xc79:  add    %esi,%edi
0876e11b +0xc7b:  mov    -0x70(%ebp),%esi
0876e11e +0xc7e:  mov    %edi,-0x78(%ebp)
0876e121 +0xc81:  mov    -0x70(%ebp),%edi
0876e124 +0xc84:  ror    $0x6,%esi
0876e127 +0xc87:  ror    $0xb,%edi
0876e12a +0xc8a:  xor    %esi,%edi
0876e12c +0xc8c:  mov    -0x70(%ebp),%esi
0876e12f +0xc8f:  ror    $0x19,%esi
0876e132 +0xc92:  xor    %esi,%edi
0876e134 +0xc94:  mov    -0x80(%ebp),%esi
0876e137 +0xc97:  add    -0x78(%ebp),%edi
0876e13a +0xc9a:  add    -0x88(%ebp),%edi
0876e140 +0xca0:  add    %edi,%esi
0876e142 +0xca2:  mov    %edi,-0x78(%ebp)
0876e145 +0xca5:  mov    %ecx,%edi
0876e147 +0xca7:  or     %edx,%edi
0876e149 +0xca9:  and    %ecx,%edx
0876e14b +0xcab:  and    %eax,%edi
0876e14d +0xcad:  mov    %ecx,%eax
0876e14f +0xcaf:  or     %edx,%edi
0876e151 +0xcb1:  mov    %ecx,%edx
0876e153 +0xcb3:  ror    $0xd,%eax
0876e156 +0xcb6:  ror    $0x2,%edx
0876e159 +0xcb9:  xor    %edx,%eax
0876e15b +0xcbb:  ror    $0x16,%ecx
0876e15e +0xcbe:  xor    %ecx,%eax
0876e160 +0xcc0:  add    %eax,%edi
0876e162 +0xcc2:  add    -0x78(%ebp),%edi
0876e165 +0xcc5:  cmpl   $0x40,-0x90(%ebp)
0876e16c +0xccc:  mov    %esi,-0x1c(%ebp)
0876e16f +0xccf:  mov    %edi,-0x2c(%ebp)
0876e172 +0xcd2:  jne    0876d515 <+0x75>
0876e178 +0xcd8:  mov    -0xa0(%ebp),%eax
0876e17e +0xcde:  mov    -0xa0(%ebp),%edx
0876e184 +0xce4:  add    %edi,(%eax)
0876e186 +0xce6:  mov    -0x28(%ebp),%eax
0876e189 +0xce9:  add    %eax,0x4(%edx)
0876e18c +0xcec:  mov    -0x24(%ebp),%eax
0876e18f +0xcef:  add    %eax,0x8(%edx)
0876e192 +0xcf2:  mov    -0x20(%ebp),%eax
0876e195 +0xcf5:  add    %eax,0xc(%edx)
0876e198 +0xcf8:  add    %esi,0x10(%edx)
0876e19b +0xcfb:  mov    -0x18(%ebp),%eax
0876e19e +0xcfe:  add    %eax,0x14(%edx)
0876e1a1 +0xd01:  mov    -0x14(%ebp),%eax
0876e1a4 +0xd04:  add    %eax,0x18(%edx)
0876e1a7 +0xd07:  mov    -0x10(%ebp),%eax
0876e1aa +0xd0a:  add    %eax,0x1c(%edx)
0876e1ad +0xd0d:  xor    %eax,%eax
0876e1af +0xd0f:  lea    -0x2c(%ebp),%edx
0876e1b2 +0xd12:  movl   $0x0,(%edx,%eax,1)
0876e1b9 +0xd19:  add    $0x4,%eax
0876e1bc +0xd1c:  cmp    $0x20,%eax
0876e1bf +0xd1f:  jb     0876e1b2 <+0xd12>
0876e1c1 +0xd21:  add    $0x94,%esp
0876e1c7 +0xd27:  pop    %ebx
0876e1c8 +0xd28:  pop    %esi
0876e1c9 +0xd29:  pop    %edi
0876e1ca +0xd2a:  pop    %ebp
0876e1cb +0xd2b:  ret
0876e1cc +0xd2c:  lea    0x0(%esi,%eiz,1),%esi
0876e1d0 +0xd30:  mov    -0x9c(%ebp),%esi
0876e1d6 +0xd36:  mov    0x3c(%esi),%esi
0876e1d9 +0xd39:  mov    %esi,-0x88(%ebp)
0876e1df +0xd3f:  mov    %esi,-0x30(%ebp)
0876e1e2 +0xd42:  jmp    0876e0f0 <+0xc50>
0876e1e7 +0xd47:  nop
0876e1e8 +0xd48:  mov    -0x9c(%ebp),%ecx
0876e1ee +0xd4e:  mov    0x38(%ecx),%edi
0876e1f1 +0xd51:  mov    %edi,-0x34(%ebp)
0876e1f4 +0xd54:  jmp    0876e009 <+0xb69>
0876e1f9 +0xd59:  lea    0x0(%esi,%eiz,1),%esi
0876e200 +0xd60:  mov    -0x9c(%ebp),%edx
0876e206 +0xd66:  mov    0x34(%edx),%esi
0876e209 +0xd69:  mov    %esi,-0x38(%ebp)
0876e20c +0xd6c:  jmp    0876df42 <+0xaa2>
0876e211 +0xd71:  lea    0x0(%esi,%eiz,1),%esi
0876e218 +0xd78:  mov    -0x9c(%ebp),%eax
0876e21e +0xd7e:  mov    0x30(%eax),%ecx
0876e221 +0xd81:  mov    %ecx,-0x3c(%ebp)
0876e224 +0xd84:  jmp    0876de80 <+0x9e0>
0876e229 +0xd89:  lea    0x0(%esi,%eiz,1),%esi
0876e230 +0xd90:  mov    -0x9c(%ebp),%eax
0876e236 +0xd96:  mov    0x2c(%eax),%esi
0876e239 +0xd99:  mov    %esi,-0x40(%ebp)
0876e23c +0xd9c:  jmp    0876ddc0 <+0x920>
0876e241 +0xda1:  lea    0x0(%esi,%eiz,1),%esi
0876e248 +0xda8:  mov    -0x9c(%ebp),%eax
0876e24e +0xdae:  mov    0x28(%eax),%esi
0876e251 +0xdb1:  mov    %esi,-0x44(%ebp)
0876e254 +0xdb4:  jmp    0876dcfb <+0x85b>
0876e259 +0xdb9:  lea    0x0(%esi,%eiz,1),%esi
0876e260 +0xdc0:  mov    -0x9c(%ebp),%esi
0876e266 +0xdc6:  mov    0x24(%esi),%eax
0876e269 +0xdc9:  mov    %eax,-0x48(%ebp)
0876e26c +0xdcc:  jmp    0876dc36 <+0x796>
0876e271 +0xdd1:  lea    0x0(%esi,%eiz,1),%esi
0876e278 +0xdd8:  mov    -0x9c(%ebp),%edx
0876e27e +0xdde:  mov    0x20(%edx),%ecx
0876e281 +0xde1:  mov    %ecx,-0x4c(%ebp)
0876e284 +0xde4:  jmp    0876db71 <+0x6d1>
0876e289 +0xde9:  lea    0x0(%esi,%eiz,1),%esi
0876e290 +0xdf0:  mov    -0x9c(%ebp),%eax
0876e296 +0xdf6:  mov    0x1c(%eax),%ecx
0876e299 +0xdf9:  mov    %ecx,-0x50(%ebp)
0876e29c +0xdfc:  jmp    0876dab0 <+0x610>
0876e2a1 +0xe01:  lea    0x0(%esi,%eiz,1),%esi
0876e2a8 +0xe08:  mov    -0x9c(%ebp),%eax
0876e2ae +0xe0e:  mov    0x18(%eax),%ecx
0876e2b1 +0xe11:  mov    %ecx,-0x54(%ebp)
0876e2b4 +0xe14:  jmp    0876d9f6 <+0x556>
0876e2b9 +0xe19:  lea    0x0(%esi,%eiz,1),%esi
0876e2c0 +0xe20:  mov    -0x9c(%ebp),%ecx
0876e2c6 +0xe26:  mov    0x14(%ecx),%eax
0876e2c9 +0xe29:  mov    %eax,-0x58(%ebp)
0876e2cc +0xe2c:  jmp    0876d934 <+0x494>
0876e2d1 +0xe31:  lea    0x0(%esi,%eiz,1),%esi
0876e2d8 +0xe38:  mov    -0x9c(%ebp),%esi
0876e2de +0xe3e:  mov    0x10(%esi),%edx
0876e2e1 +0xe41:  mov    %edx,-0x5c(%ebp)
0876e2e4 +0xe44:  jmp    0876d86f <+0x3cf>
0876e2e9 +0xe49:  lea    0x0(%esi,%eiz,1),%esi
0876e2f0 +0xe50:  mov    -0x9c(%ebp),%edx
0876e2f6 +0xe56:  mov    0xc(%edx),%esi
0876e2f9 +0xe59:  mov    %esi,-0x60(%ebp)
0876e2fc +0xe5c:  jmp    0876d7ae <+0x30e>
0876e301 +0xe61:  lea    0x0(%esi,%eiz,1),%esi
0876e308 +0xe68:  mov    -0x9c(%ebp),%edx
0876e30e +0xe6e:  mov    0x8(%edx),%esi
0876e311 +0xe71:  mov    %esi,-0x64(%ebp)
0876e314 +0xe74:  jmp    0876d6f1 <+0x251>
0876e319 +0xe79:  lea    0x0(%esi,%eiz,1),%esi
0876e320 +0xe80:  mov    -0x9c(%ebp),%edi
0876e326 +0xe86:  mov    0x4(%edi),%ecx
0876e329 +0xe89:  mov    %ecx,-0x68(%ebp)
0876e32c +0xe8c:  jmp    0876d62e <+0x18e>
0876e331 +0xe91:  lea    0x0(%esi,%eiz,1),%esi
0876e338 +0xe98:  mov    -0x9c(%ebp),%eax
0876e33e +0xe9e:  mov    (%eax),%ecx
0876e340 +0xea0:  mov    %ecx,-0x6c(%ebp)
0876e343 +0xea3:  jmp    0876d566 <+0xc6>
0876e348 +0xea8:  nop
0876e349 +0xea9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Transform256 @ 0x876d4a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Transform256(unsigned int*, unsigned int*) */

void __regparm3 TaoCrypt::Transform256(uint *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *local_98;
  int local_94;
  uint local_88;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30 [8];
  
  local_30[0] = *param_1;
  local_30[1] = param_1[1];
  local_30[2] = param_1[2];
  local_30[3] = param_1[3];
  uVar4 = param_1[4];
  local_30[5] = param_1[5];
  local_30[6] = param_1[6];
  local_88 = param_1[7];
  local_98 = &K256;
  local_94 = 0;
  do {
    if (local_94 == 0) {
      local_70 = *param_2;
    }
    else {
      local_70 = local_4c + local_70 +
                 ((local_38 >> 0x11 | local_38 << 0xf) ^ local_38 >> 10 ^
                 (local_38 >> 0x13 | local_38 << 0xd)) +
                 ((local_6c >> 7 | local_6c << 0x19) ^ local_6c >> 3 ^
                 (local_6c >> 0x12 | local_6c << 0xe));
    }
    iVar7 = *local_98 + local_88 +
            ((uVar4 >> 0xb | uVar4 << 0x15) ^ (uVar4 >> 6 | uVar4 << 0x1a) ^
            (uVar4 >> 0x19 | uVar4 << 7)) + ((local_30[6] ^ local_30[5]) & uVar4 ^ local_30[6]) +
            local_70;
    local_30[3] = local_30[3] + iVar7;
    uVar2 = ((local_30[1] | local_30[0]) & local_30[2] | local_30[1] & local_30[0]) +
            ((local_30[0] >> 0xd | local_30[0] << 0x13) ^ (local_30[0] >> 2 | local_30[0] << 0x1e) ^
            (local_30[0] >> 0x16 | local_30[0] << 10)) + iVar7;
    if (local_94 == 0) {
      local_6c = param_2[1];
    }
    else {
      local_6c = ((local_68 >> 7 | local_68 << 0x19) ^ local_68 >> 3 ^
                 (local_68 >> 0x12 | local_68 << 0xe)) +
                 local_48 + local_6c +
                 ((local_34 >> 0x11 | local_34 << 0xf) ^ local_34 >> 10 ^
                 (local_34 >> 0x13 | local_34 << 0xd));
    }
    iVar7 = ((local_30[3] >> 0xb | local_30[3] * 0x200000) ^
             (local_30[3] >> 6 | local_30[3] * 0x4000000) ^
            (local_30[3] >> 0x19 | local_30[3] * 0x80)) +
            local_98[1] + local_30[6] + ((local_30[5] ^ uVar4) & local_30[3] ^ local_30[5]) +
            local_6c;
    local_30[2] = local_30[2] + iVar7;
    uVar6 = ((uVar2 | local_30[0]) & local_30[1] | local_30[0] & uVar2) +
            ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^
            (uVar2 >> 0x16 | uVar2 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_68 = param_2[2];
    }
    else {
      local_68 = local_44 + local_68 +
                 ((local_70 >> 0x11 | local_70 << 0xf) ^ local_70 >> 10 ^
                 (local_70 >> 0x13 | local_70 << 0xd)) +
                 ((local_64 >> 7 | local_64 << 0x19) ^ local_64 >> 3 ^
                 (local_64 >> 0x12 | local_64 << 0xe));
    }
    iVar7 = local_98[2] + local_30[5] + ((local_30[3] ^ uVar4) & local_30[2] ^ uVar4) +
            ((local_30[2] >> 0xb | local_30[2] * 0x200000) ^
             (local_30[2] >> 6 | local_30[2] * 0x4000000) ^
            (local_30[2] >> 0x19 | local_30[2] * 0x80)) + local_68;
    local_30[1] = local_30[1] + iVar7;
    uVar3 = ((uVar6 | uVar2) & local_30[0] | uVar6 & uVar2) +
            ((uVar6 >> 0xd | uVar6 * 0x80000) ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^
            (uVar6 >> 0x16 | uVar6 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_64 = param_2[3];
    }
    else {
      local_64 = local_40 + local_64 +
                 ((local_6c >> 0x11 | local_6c << 0xf) ^ local_6c >> 10 ^
                 (local_6c >> 0x13 | local_6c << 0xd)) +
                 ((local_60 >> 7 | local_60 << 0x19) ^ local_60 >> 3 ^
                 (local_60 >> 0x12 | local_60 << 0xe));
    }
    iVar7 = local_98[3] + uVar4 + ((local_30[2] ^ local_30[3]) & local_30[1] ^ local_30[3]) +
            ((local_30[1] >> 0xb | local_30[1] * 0x200000) ^
             (local_30[1] >> 6 | local_30[1] * 0x4000000) ^
            (local_30[1] >> 0x19 | local_30[1] * 0x80)) + local_64;
    local_30[0] = local_30[0] + iVar7;
    uVar4 = ((uVar3 | uVar6) & uVar2 | uVar3 & uVar6) +
            ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
            (uVar3 >> 0x16 | uVar3 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_60 = param_2[4];
    }
    else {
      local_60 = local_3c + local_60 +
                 ((local_68 >> 0x11 | local_68 << 0xf) ^ local_68 >> 10 ^
                 (local_68 >> 0x13 | local_68 << 0xd)) +
                 ((local_5c >> 7 | local_5c << 0x19) ^ local_5c >> 3 ^
                 (local_5c >> 0x12 | local_5c << 0xe));
    }
    iVar7 = local_98[4] + local_30[3] + ((local_30[1] ^ local_30[2]) & local_30[0] ^ local_30[2]) +
            ((local_30[0] >> 0xb | local_30[0] * 0x200000) ^
             (local_30[0] >> 6 | local_30[0] * 0x4000000) ^
            (local_30[0] >> 0x19 | local_30[0] * 0x80)) + local_60;
    uVar2 = iVar7 + uVar2;
    uVar8 = ((uVar4 | uVar3) & uVar6 | uVar4 & uVar3) +
            ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^
            (uVar4 >> 0x16 | uVar4 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_5c = param_2[5];
    }
    else {
      local_5c = local_38 + local_5c +
                 ((local_64 >> 0x11 | local_64 << 0xf) ^ local_64 >> 10 ^
                 (local_64 >> 0x13 | local_64 << 0xd)) +
                 ((local_58 >> 7 | local_58 << 0x19) ^ local_58 >> 3 ^
                 (local_58 >> 0x12 | local_58 << 0xe));
    }
    iVar7 = local_98[5] + local_30[2] + ((local_30[0] ^ local_30[1]) & uVar2 ^ local_30[1]) +
            ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
            (uVar2 >> 0x19 | uVar2 * 0x80)) + local_5c;
    uVar6 = uVar6 + iVar7;
    uVar5 = ((uVar4 | uVar8) & uVar3 | uVar4 & uVar8) +
            ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
            (uVar8 >> 0x16 | uVar8 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_58 = param_2[6];
    }
    else {
      local_58 = local_34 + local_58 +
                 ((local_60 >> 0x11 | local_60 << 0xf) ^ local_60 >> 10 ^
                 (local_60 >> 0x13 | local_60 << 0xd)) +
                 ((local_54 >> 7 | local_54 << 0x19) ^ local_54 >> 3 ^
                 (local_54 >> 0x12 | local_54 << 0xe));
    }
    iVar7 = local_30[1] + local_98[6] + ((uVar2 ^ local_30[0]) & uVar6 ^ local_30[0]) +
            ((uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 6 | uVar6 * 0x4000000) ^
            (uVar6 >> 0x19 | uVar6 * 0x80)) + local_58;
    uVar3 = uVar3 + iVar7;
    uVar9 = ((uVar5 | uVar8) & uVar4 | uVar5 & uVar8) +
            ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^
            (uVar5 >> 0x16 | uVar5 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_54 = param_2[7];
    }
    else {
      local_54 = local_70 + local_54 +
                 ((local_5c >> 0x11 | local_5c << 0xf) ^ local_5c >> 10 ^
                 (local_5c >> 0x13 | local_5c << 0xd)) +
                 ((local_50 >> 7 | local_50 << 0x19) ^ local_50 >> 3 ^
                 (local_50 >> 0x12 | local_50 << 0xe));
    }
    iVar7 = local_30[0] + local_98[7] + ((uVar6 ^ uVar2) & uVar3 ^ uVar2) +
            ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
            (uVar3 >> 0x19 | uVar3 * 0x80)) + local_54;
    uVar4 = uVar4 + iVar7;
    uVar10 = ((uVar9 | uVar5) & uVar8 | uVar9 & uVar5) +
             ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^
             (uVar9 >> 0x16 | uVar9 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_50 = param_2[8];
    }
    else {
      local_50 = local_6c + local_50 +
                 ((local_58 >> 0x11 | local_58 << 0xf) ^ local_58 >> 10 ^
                 (local_58 >> 0x13 | local_58 << 0xd)) +
                 ((local_4c >> 7 | local_4c << 0x19) ^ local_4c >> 3 ^
                 (local_4c >> 0x12 | local_4c << 0xe));
    }
    iVar7 = local_98[8] + uVar2 + ((uVar3 ^ uVar6) & uVar4 ^ uVar6) +
            ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
            (uVar4 >> 0x19 | uVar4 * 0x80)) + local_50;
    uVar8 = iVar7 + uVar8;
    local_88 = ((uVar10 | uVar9) & uVar5 | uVar10 & uVar9) +
               ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^
               (uVar10 >> 0x16 | uVar10 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_4c = param_2[9];
    }
    else {
      local_4c = local_68 + local_4c +
                 ((local_54 >> 0x11 | local_54 << 0xf) ^ local_54 >> 10 ^
                 (local_54 >> 0x13 | local_54 << 0xd)) +
                 ((local_48 >> 7 | local_48 << 0x19) ^ local_48 >> 3 ^
                 (local_48 >> 0x12 | local_48 << 0xe));
    }
    iVar7 = local_98[9] + uVar6 + ((uVar4 ^ uVar3) & uVar8 ^ uVar3) +
            ((uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000) ^
            (uVar8 >> 0x19 | uVar8 * 0x80)) + local_4c;
    uVar5 = uVar5 + iVar7;
    local_30[6] = ((uVar10 | local_88) & uVar9 | uVar10 & local_88) +
                  ((local_88 >> 0xd | local_88 * 0x80000) ^ (local_88 >> 2 | local_88 * 0x40000000)
                  ^ (local_88 >> 0x16 | local_88 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_48 = param_2[10];
    }
    else {
      local_48 = local_64 + local_48 +
                 ((local_50 >> 0x11 | local_50 << 0xf) ^ local_50 >> 10 ^
                 (local_50 >> 0x13 | local_50 << 0xd)) +
                 ((local_44 >> 7 | local_44 << 0x19) ^ local_44 >> 3 ^
                 (local_44 >> 0x12 | local_44 << 0xe));
    }
    iVar7 = local_98[10] + uVar3 + ((uVar8 ^ uVar4) & uVar5 ^ uVar4) +
            ((uVar5 >> 0xb | uVar5 * 0x200000) ^ (uVar5 >> 6 | uVar5 * 0x4000000) ^
            (uVar5 >> 0x19 | uVar5 * 0x80)) + local_48;
    uVar9 = uVar9 + iVar7;
    local_30[5] = ((local_30[6] | local_88) & uVar10 | local_30[6] & local_88) +
                  ((local_30[6] >> 0xd | local_30[6] * 0x80000) ^
                   (local_30[6] >> 2 | local_30[6] * 0x40000000) ^
                  (local_30[6] >> 0x16 | local_30[6] * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_44 = param_2[0xb];
    }
    else {
      local_44 = local_60 + local_44 +
                 ((local_4c >> 0x11 | local_4c << 0xf) ^ local_4c >> 10 ^
                 (local_4c >> 0x13 | local_4c << 0xd)) +
                 ((local_40 >> 7 | local_40 << 0x19) ^ local_40 >> 3 ^
                 (local_40 >> 0x12 | local_40 << 0xe));
    }
    iVar7 = local_98[0xb] + uVar4 + ((uVar5 ^ uVar8) & uVar9 ^ uVar8) +
            ((uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000) ^
            (uVar9 >> 0x19 | uVar9 * 0x80)) + local_44;
    uVar10 = uVar10 + iVar7;
    uVar4 = ((local_30[5] | local_30[6]) & local_88 | local_30[5] & local_30[6]) +
            ((local_30[5] >> 0xd | local_30[5] * 0x80000) ^
             (local_30[5] >> 2 | local_30[5] * 0x40000000) ^
            (local_30[5] >> 0x16 | local_30[5] * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_40 = param_2[0xc];
    }
    else {
      local_40 = local_5c + local_40 +
                 ((local_48 >> 0x11 | local_48 << 0xf) ^ local_48 >> 10 ^
                 (local_48 >> 0x13 | local_48 << 0xd)) +
                 ((local_3c >> 7 | local_3c << 0x19) ^ local_3c >> 3 ^
                 (local_3c >> 0x12 | local_3c << 0xe));
    }
    iVar7 = local_98[0xc] + uVar8 + ((uVar9 ^ uVar5) & uVar10 ^ uVar5) +
            ((uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000) ^
            (uVar10 >> 0x19 | uVar10 * 0x80)) + local_40;
    local_88 = iVar7 + local_88;
    local_30[3] = ((uVar4 | local_30[5]) & local_30[6] | uVar4 & local_30[5]) +
                  ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^
                  (uVar4 >> 0x16 | uVar4 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_3c = param_2[0xd];
    }
    else {
      local_3c = local_58 + local_3c +
                 ((local_44 >> 0x11 | local_44 << 0xf) ^ local_44 >> 10 ^
                 (local_44 >> 0x13 | local_44 << 0xd)) +
                 ((local_38 >> 7 | local_38 << 0x19) ^ local_38 >> 3 ^
                 (local_38 >> 0x12 | local_38 << 0xe));
    }
    iVar7 = local_98[0xd] + uVar5 + ((uVar10 ^ uVar9) & local_88 ^ uVar9) +
            ((local_88 >> 0xb | local_88 * 0x200000) ^ (local_88 >> 6 | local_88 * 0x4000000) ^
            (local_88 >> 0x19 | local_88 * 0x80)) + local_3c;
    local_30[6] = local_30[6] + iVar7;
    local_30[2] = ((uVar4 | local_30[3]) & local_30[5] | uVar4 & local_30[3]) +
                  ((local_30[3] >> 0xd | local_30[3] * 0x80000) ^
                   (local_30[3] >> 2 | local_30[3] * 0x40000000) ^
                  (local_30[3] >> 0x16 | local_30[3] * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_38 = param_2[0xe];
    }
    else {
      local_38 = ((local_34 >> 7 | local_34 << 0x19) ^ local_34 >> 3 ^
                 (local_34 >> 0x12 | local_34 << 0xe)) +
                 local_54 + local_38 +
                 ((local_40 >> 0x11 | local_40 << 0xf) ^ local_40 >> 10 ^
                 (local_40 >> 0x13 | local_40 << 0xd));
    }
    iVar7 = local_98[0xe] + uVar9 + ((local_88 ^ uVar10) & local_30[6] ^ uVar10) +
            ((local_30[6] >> 0xb | local_30[6] * 0x200000) ^
             (local_30[6] >> 6 | local_30[6] * 0x4000000) ^
            (local_30[6] >> 0x19 | local_30[6] * 0x80)) + local_38;
    local_30[5] = local_30[5] + iVar7;
    local_30[1] = ((local_30[2] | local_30[3]) & uVar4 | local_30[2] & local_30[3]) +
                  ((local_30[2] >> 0xd | local_30[2] * 0x80000) ^
                   (local_30[2] >> 2 | local_30[2] * 0x40000000) ^
                  (local_30[2] >> 0x16 | local_30[2] * 0x400)) + iVar7;
    piVar1 = local_98 + 0xf;
    if (local_94 == 0) {
      local_34 = param_2[0xf];
    }
    else {
      local_34 = ((local_70 >> 7 | local_70 << 0x19) ^ local_70 >> 3 ^
                 (local_70 >> 0x12 | local_70 << 0xe)) +
                 ((local_3c >> 0x11 | local_3c << 0xf) ^ local_3c >> 10 ^
                 (local_3c >> 0x13 | local_3c << 0xd)) + local_50 + local_34;
    }
    local_94 = local_94 + 0x10;
    local_98 = local_98 + 0x10;
    iVar7 = ((local_30[5] >> 0xb | local_30[5] * 0x200000) ^
             (local_30[5] >> 6 | local_30[5] * 0x4000000) ^
            (local_30[5] >> 0x19 | local_30[5] * 0x80)) +
            ((local_30[6] ^ local_88) & local_30[5] ^ local_88) + uVar10 + *piVar1 + local_34;
    uVar4 = uVar4 + iVar7;
    local_30[0] = ((local_30[1] | local_30[2]) & local_30[3] | local_30[2] & local_30[1]) +
                  ((local_30[1] >> 0xd | local_30[1] * 0x80000) ^
                   (local_30[1] >> 2 | local_30[1] * 0x40000000) ^
                  (local_30[1] >> 0x16 | local_30[1] * 0x400)) + iVar7;
  } while (local_94 != 0x40);
  *param_1 = *param_1 + local_30[0];
  param_1[1] = param_1[1] + local_30[1];
  param_1[2] = param_1[2] + local_30[2];
  param_1[3] = param_1[3] + local_30[3];
  param_1[4] = param_1[4] + uVar4;
  param_1[5] = param_1[5] + local_30[5];
  param_1[6] = param_1[6] + local_30[6];
  param_1[7] = param_1[7] + local_88;
  uVar4 = 0;
  do {
    *(undefined4 *)((int)local_30 + uVar4) = 0;
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x20);
  return;
}
```
