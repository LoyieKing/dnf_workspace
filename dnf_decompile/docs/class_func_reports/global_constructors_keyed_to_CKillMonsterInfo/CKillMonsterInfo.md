# CKillMonsterInfo

`_GLOBAL__I__ZN16CKillMonsterInfoC2Ev`

`global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CKillMonsterInfo` | `0x0854d506` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854d506  _GLOBAL__I__ZN16CKillMonsterInfoC2Ev
#           global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()
# range [0x0854d506, 0x0854e133]
0854d506 +0x000:  push   %ebp
0854d507 +0x001:  mov    %esp,%ebp
0854d509 +0x003:  sub    $0x18,%esp
0854d50c +0x006:  movl   $0xffff,0x4(%esp)
0854d514 +0x00e:  movl   $0x1,(%esp)
0854d51b +0x015:  call   0854d4c6 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0854d520 +0x01a:  leave
0854d521 +0x01b:  ret
0854d522 +0x01c:  push   %ebp
0854d523 +0x01d:  mov    %esp,%ebp
0854d525 +0x01f:  push   %esi
0854d526 +0x020:  push   %ebx
0854d527 +0x021:  sub    $0x10,%esp
0854d52a +0x024:  mov    0x8(%ebp),%esi
0854d52d +0x027:  mov    0x10(%ebp),%eax
0854d530 +0x02a:  mov    %eax,(%esp)
0854d533 +0x02d:  call   08138740 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4347>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4347
0854d538 +0x032:  mov    %eax,%ebx
0854d53a +0x034:  mov    0xc(%ebp),%eax
0854d53d +0x037:  mov    %eax,(%esp)
0854d540 +0x03a:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0854d545 +0x03f:  mov    %ebx,0x8(%esp)
0854d549 +0x043:  mov    %eax,0x4(%esp)
0854d54d +0x047:  mov    %esi,(%esp)
0854d550 +0x04a:  call   0854d796 <+0x290>
0854d555 +0x04f:  mov    %esi,%eax
0854d557 +0x051:  add    $0x10,%esp
0854d55a +0x054:  pop    %ebx
0854d55b +0x055:  pop    %esi
0854d55c +0x056:  pop    %ebp
0854d55d +0x057:  ret    $0x4
0854d560 +0x05a:  push   %ebp
0854d561 +0x05b:  mov    %esp,%ebp
0854d563 +0x05d:  sub    $0x18,%esp
0854d566 +0x060:  mov    0xc(%ebp),%eax
0854d569 +0x063:  mov    %eax,(%esp)
0854d56c +0x066:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
0854d571 +0x06b:  mov    (%eax),%edx
0854d573 +0x06d:  mov    0x8(%ebp),%eax
0854d576 +0x070:  mov    %edx,(%eax)
0854d578 +0x072:  mov    0xc(%ebp),%eax
0854d57b +0x075:  add    $0x4,%eax
0854d57e +0x078:  mov    %eax,(%esp)
0854d581 +0x07b:  call   0807f2d7 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3a7>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a7
0854d586 +0x080:  movzbl (%eax),%edx
0854d589 +0x083:  mov    0x8(%ebp),%eax
0854d58c +0x086:  mov    %dl,0x4(%eax)
0854d58f +0x089:  leave
0854d590 +0x08a:  ret
0854d591 +0x08b:  nop
0854d592 +0x08c:  push   %ebp
0854d593 +0x08d:  mov    %esp,%ebp
0854d595 +0x08f:  push   %ebx
0854d596 +0x090:  sub    $0x14,%esp
0854d599 +0x093:  mov    0x8(%ebp),%ebx
0854d59c +0x096:  mov    0xc(%ebp),%eax
0854d59f +0x099:  mov    0x10(%ebp),%edx
0854d5a2 +0x09c:  mov    %edx,0x8(%esp)
0854d5a6 +0x0a0:  mov    %eax,0x4(%esp)
0854d5aa +0x0a4:  mov    %ebx,(%esp)
0854d5ad +0x0a7:  call   0854d7c4 <+0x2be>
0854d5b2 +0x0ac:  sub    $0x4,%esp
0854d5b5 +0x0af:  mov    %ebx,%eax
0854d5b7 +0x0b1:  mov    -0x4(%ebp),%ebx
0854d5ba +0x0b4:  leave
0854d5bb +0x0b5:  ret    $0x4
0854d5be +0x0b8:  push   %ebp
0854d5bf +0x0b9:  mov    %esp,%ebp
0854d5c1 +0x0bb:  sub    $0x18,%esp
0854d5c4 +0x0be:  mov    0x8(%ebp),%eax
0854d5c7 +0x0c1:  mov    %eax,(%esp)
0854d5ca +0x0c4:  call   0854d994 <+0x48e>
0854d5cf +0x0c9:  leave
0854d5d0 +0x0ca:  ret
0854d5d1 +0x0cb:  nop
0854d5d2 +0x0cc:  push   %ebp
0854d5d3 +0x0cd:  mov    %esp,%ebp
0854d5d5 +0x0cf:  sub    $0x18,%esp
0854d5d8 +0x0d2:  mov    0x8(%ebp),%eax
0854d5db +0x0d5:  mov    %eax,(%esp)
0854d5de +0x0d8:  call   0854d9a4 <+0x49e>
0854d5e3 +0x0dd:  leave
0854d5e4 +0x0de:  ret
0854d5e5 +0x0df:  nop
0854d5e6 +0x0e0:  push   %ebp
0854d5e7 +0x0e1:  mov    %esp,%ebp
0854d5e9 +0x0e3:  mov    0x8(%ebp),%eax
0854d5ec +0x0e6:  movl   $0x0,(%eax)
0854d5f2 +0x0ec:  pop    %ebp
0854d5f3 +0x0ed:  ret
0854d5f4 +0x0ee:  push   %ebp
0854d5f5 +0x0ef:  mov    %esp,%ebp
0854d5f7 +0x0f1:  push   %ebx
0854d5f8 +0x0f2:  sub    $0x14,%esp
0854d5fb +0x0f5:  mov    0x8(%ebp),%ebx
0854d5fe +0x0f8:  mov    0xc(%ebp),%eax
0854d601 +0x0fb:  mov    %eax,0x4(%esp)
0854d605 +0x0ff:  mov    %ebx,(%esp)
0854d608 +0x102:  call   0854d9b0 <+0x4aa>
0854d60d +0x107:  sub    $0x4,%esp
0854d610 +0x10a:  mov    %ebx,%eax
0854d612 +0x10c:  mov    -0x4(%ebp),%ebx
0854d615 +0x10f:  leave
0854d616 +0x110:  ret    $0x4
0854d619 +0x113:  nop
0854d61a +0x114:  push   %ebp
0854d61b +0x115:  mov    %esp,%ebp
0854d61d +0x117:  push   %ebx
0854d61e +0x118:  sub    $0x14,%esp
0854d621 +0x11b:  mov    0x8(%ebp),%ebx
0854d624 +0x11e:  mov    0xc(%ebp),%eax
0854d627 +0x121:  mov    %eax,0x4(%esp)
0854d62b +0x125:  mov    %ebx,(%esp)
0854d62e +0x128:  call   0854d9d6 <+0x4d0>
0854d633 +0x12d:  sub    $0x4,%esp
0854d636 +0x130:  mov    %ebx,%eax
0854d638 +0x132:  mov    -0x4(%ebp),%ebx
0854d63b +0x135:  leave
0854d63c +0x136:  ret    $0x4
0854d63f +0x139:  nop
0854d640 +0x13a:  push   %ebp
0854d641 +0x13b:  mov    %esp,%ebp
0854d643 +0x13d:  mov    0x8(%ebp),%eax
0854d646 +0x140:  mov    (%eax),%edx
0854d648 +0x142:  mov    0xc(%ebp),%eax
0854d64b +0x145:  mov    (%eax),%eax
0854d64d +0x147:  cmp    %eax,%edx
0854d64f +0x149:  setne  %al
0854d652 +0x14c:  pop    %ebp
0854d653 +0x14d:  ret
0854d654 +0x14e:  push   %ebp
0854d655 +0x14f:  mov    %esp,%ebp
0854d657 +0x151:  push   %ebx
0854d658 +0x152:  sub    $0x14,%esp
0854d65b +0x155:  mov    0x8(%ebp),%ebx
0854d65e +0x158:  mov    0xc(%ebp),%eax
0854d661 +0x15b:  movl   $0x4,0x8(%esp)
0854d669 +0x163:  mov    %eax,0x4(%esp)
0854d66d +0x167:  mov    %ebx,(%esp)
0854d670 +0x16a:  call   0807d880 <_init+0x178>
0854d675 +0x16f:  mov    0xc(%ebp),%eax
0854d678 +0x172:  mov    (%eax),%eax
0854d67a +0x174:  mov    %eax,(%esp)
0854d67d +0x177:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
0854d682 +0x17c:  mov    0xc(%ebp),%edx
0854d685 +0x17f:  mov    %eax,(%edx)
0854d687 +0x181:  mov    %ebx,%eax
0854d689 +0x183:  add    $0x14,%esp
0854d68c +0x186:  pop    %ebx
0854d68d +0x187:  pop    %ebp
0854d68e +0x188:  ret    $0x4
0854d691 +0x18b:  nop
0854d692 +0x18c:  push   %ebp
0854d693 +0x18d:  mov    %esp,%ebp
0854d695 +0x18f:  mov    0x8(%ebp),%eax
0854d698 +0x192:  mov    (%eax),%eax
0854d69a +0x194:  add    $0x10,%eax
0854d69d +0x197:  pop    %ebp
0854d69e +0x198:  ret
0854d69f +0x199:  nop
0854d6a0 +0x19a:  push   %ebp
0854d6a1 +0x19b:  mov    %esp,%ebp
0854d6a3 +0x19d:  sub    $0x18,%esp
0854d6a6 +0x1a0:  mov    0x8(%ebp),%eax
0854d6a9 +0x1a3:  mov    %eax,(%esp)
0854d6ac +0x1a6:  call   0854d9fc <+0x4f6>
0854d6b1 +0x1ab:  leave
0854d6b2 +0x1ac:  ret
0854d6b3 +0x1ad:  nop
0854d6b4 +0x1ae:  push   %ebp
0854d6b5 +0x1af:  mov    %esp,%ebp
0854d6b7 +0x1b1:  push   %ebx
0854d6b8 +0x1b2:  sub    $0x14,%esp
0854d6bb +0x1b5:  mov    0x8(%ebp),%ebx
0854d6be +0x1b8:  mov    0xc(%ebp),%eax
0854d6c1 +0x1bb:  mov    0x10(%ebp),%edx
0854d6c4 +0x1be:  mov    %edx,0x8(%esp)
0854d6c8 +0x1c2:  mov    %eax,0x4(%esp)
0854d6cc +0x1c6:  mov    %ebx,(%esp)
0854d6cf +0x1c9:  call   0854da72 <+0x56c>
0854d6d4 +0x1ce:  sub    $0x4,%esp
0854d6d7 +0x1d1:  mov    %ebx,%eax
0854d6d9 +0x1d3:  mov    -0x4(%ebp),%ebx
0854d6dc +0x1d6:  leave
0854d6dd +0x1d7:  ret    $0x4
0854d6e0 +0x1da:  push   %ebp
0854d6e1 +0x1db:  mov    %esp,%ebp
0854d6e3 +0x1dd:  push   %ebx
0854d6e4 +0x1de:  sub    $0x14,%esp
0854d6e7 +0x1e1:  mov    0x8(%ebp),%ebx
0854d6ea +0x1e4:  mov    0xc(%ebp),%eax
0854d6ed +0x1e7:  mov    0x10(%ebp),%edx
0854d6f0 +0x1ea:  mov    %edx,0x8(%esp)
0854d6f4 +0x1ee:  mov    %eax,0x4(%esp)
0854d6f8 +0x1f2:  mov    %ebx,(%esp)
0854d6fb +0x1f5:  call   0854db30 <+0x62a>
0854d700 +0x1fa:  sub    $0x4,%esp
0854d703 +0x1fd:  mov    %ebx,%eax
0854d705 +0x1ff:  mov    -0x4(%ebp),%ebx
0854d708 +0x202:  leave
0854d709 +0x203:  ret    $0x4
0854d70c +0x206:  push   %ebp
0854d70d +0x207:  mov    %esp,%ebp
0854d70f +0x209:  push   %ebx
0854d710 +0x20a:  sub    $0x14,%esp
0854d713 +0x20d:  mov    0x8(%ebp),%ebx
0854d716 +0x210:  mov    0xc(%ebp),%eax
0854d719 +0x213:  mov    %eax,0x4(%esp)
0854d71d +0x217:  mov    %ebx,(%esp)
0854d720 +0x21a:  call   0854dbee <+0x6e8>
0854d725 +0x21f:  sub    $0x4,%esp
0854d728 +0x222:  mov    %ebx,%eax
0854d72a +0x224:  mov    -0x4(%ebp),%ebx
0854d72d +0x227:  leave
0854d72e +0x228:  ret    $0x4
0854d731 +0x22b:  nop
0854d732 +0x22c:  push   %ebp
0854d733 +0x22d:  mov    %esp,%ebp
0854d735 +0x22f:  mov    0x8(%ebp),%eax
0854d738 +0x232:  mov    (%eax),%edx
0854d73a +0x234:  mov    0xc(%ebp),%eax
0854d73d +0x237:  mov    (%eax),%eax
0854d73f +0x239:  cmp    %eax,%edx
0854d741 +0x23b:  setne  %al
0854d744 +0x23e:  pop    %ebp
0854d745 +0x23f:  ret
0854d746 +0x240:  push   %ebp
0854d747 +0x241:  mov    %esp,%ebp
0854d749 +0x243:  mov    0x8(%ebp),%eax
0854d74c +0x246:  mov    (%eax),%eax
0854d74e +0x248:  add    $0x10,%eax
0854d751 +0x24b:  pop    %ebp
0854d752 +0x24c:  ret
0854d753 +0x24d:  push   %ebp
0854d754 +0x24e:  mov    %esp,%ebp
0854d756 +0x250:  push   %ebx
0854d757 +0x251:  sub    $0x24,%esp
0854d75a +0x254:  mov    0x8(%ebp),%ebx
0854d75d +0x257:  mov    0x10(%ebp),%eax
0854d760 +0x25a:  mov    %eax,(%esp)
0854d763 +0x25d:  call   0807f54c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x61c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x61c
0854d768 +0x262:  movzbl (%eax),%eax
0854d76b +0x265:  mov    %al,-0x9(%ebp)
0854d76e +0x268:  mov    0xc(%ebp),%eax
0854d771 +0x26b:  mov    %eax,(%esp)
0854d774 +0x26e:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0854d779 +0x273:  lea    -0x9(%ebp),%edx
0854d77c +0x276:  mov    %edx,0x8(%esp)
0854d780 +0x27a:  mov    %eax,0x4(%esp)
0854d784 +0x27e:  mov    %ebx,(%esp)
0854d787 +0x281:  call   0854dc14 <+0x70e>
0854d78c +0x286:  mov    %ebx,%eax
0854d78e +0x288:  add    $0x24,%esp
0854d791 +0x28b:  pop    %ebx
0854d792 +0x28c:  pop    %ebp
0854d793 +0x28d:  ret    $0x4
0854d796 +0x290:  push   %ebp
0854d797 +0x291:  mov    %esp,%ebp
0854d799 +0x293:  sub    $0x18,%esp
0854d79c +0x296:  mov    0xc(%ebp),%eax
0854d79f +0x299:  mov    %eax,(%esp)
0854d7a2 +0x29c:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0854d7a7 +0x2a1:  mov    (%eax),%edx
0854d7a9 +0x2a3:  mov    0x8(%ebp),%eax
0854d7ac +0x2a6:  mov    %edx,(%eax)
0854d7ae +0x2a8:  mov    0x10(%ebp),%eax
0854d7b1 +0x2ab:  mov    %eax,(%esp)
0854d7b4 +0x2ae:  call   08138740 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4347>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4347
0854d7b9 +0x2b3:  movzbl (%eax),%edx
0854d7bc +0x2b6:  mov    0x8(%ebp),%eax
0854d7bf +0x2b9:  mov    %dl,0x4(%eax)
0854d7c2 +0x2bc:  leave
0854d7c3 +0x2bd:  ret
0854d7c4 +0x2be:  push   %ebp
0854d7c5 +0x2bf:  mov    %esp,%ebp
0854d7c7 +0x2c1:  push   %esi
0854d7c8 +0x2c2:  push   %ebx
0854d7c9 +0x2c3:  sub    $0x50,%esp
0854d7cc +0x2c6:  mov    0x8(%ebp),%ebx
0854d7cf +0x2c9:  mov    0xc(%ebp),%eax
0854d7d2 +0x2cc:  mov    %eax,(%esp)
0854d7d5 +0x2cf:  call   0808c4b0 <_GLOBAL__I_hashkey_map+0x3e1>  ; global constructors keyed to hashkey_map+0x3e1
0854d7da +0x2d4:  mov    %eax,-0x14(%ebp)
0854d7dd +0x2d7:  mov    0xc(%ebp),%eax
0854d7e0 +0x2da:  mov    %eax,(%esp)
0854d7e3 +0x2dd:  call   0854dc42 <+0x73c>
0854d7e8 +0x2e2:  mov    %eax,-0x10(%ebp)
0854d7eb +0x2e5:  movb   $0x1,-0x9(%ebp)
0854d7ef +0x2e9:  jmp    0854d84d <+0x347>
0854d7f1 +0x2eb:  mov    -0x14(%ebp),%eax
0854d7f4 +0x2ee:  mov    %eax,-0x10(%ebp)
0854d7f7 +0x2f1:  mov    -0x14(%ebp),%eax
0854d7fa +0x2f4:  mov    %eax,(%esp)
0854d7fd +0x2f7:  call   0854dc56 <+0x750>
0854d802 +0x2fc:  mov    %eax,%esi
0854d804 +0x2fe:  mov    0x10(%ebp),%eax
0854d807 +0x301:  mov    %eax,0x4(%esp)
0854d80b +0x305:  lea    -0x2d(%ebp),%eax
0854d80e +0x308:  mov    %eax,(%esp)
0854d811 +0x30b:  call   0854dc4e <+0x748>
0854d816 +0x310:  mov    0xc(%ebp),%edx
0854d819 +0x313:  mov    %esi,0x8(%esp)
0854d81d +0x317:  mov    %eax,0x4(%esp)
0854d821 +0x31b:  mov    %edx,(%esp)
0854d824 +0x31e:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0854d829 +0x323:  mov    %al,-0x9(%ebp)
0854d82c +0x326:  cmpb   $0x0,-0x9(%ebp)
0854d830 +0x32a:  je     0854d83f <+0x339>
0854d832 +0x32c:  mov    -0x14(%ebp),%eax
0854d835 +0x32f:  mov    %eax,(%esp)
0854d838 +0x332:  call   0808c512 <_GLOBAL__I_hashkey_map+0x443>  ; global constructors keyed to hashkey_map+0x443
0854d83d +0x337:  jmp    0854d84a <+0x344>
0854d83f +0x339:  mov    -0x14(%ebp),%eax
0854d842 +0x33c:  mov    %eax,(%esp)
0854d845 +0x33f:  call   0808c507 <_GLOBAL__I_hashkey_map+0x438>  ; global constructors keyed to hashkey_map+0x438
0854d84a +0x344:  mov    %eax,-0x14(%ebp)
0854d84d +0x347:  cmpl   $0x0,-0x14(%ebp)
0854d851 +0x34b:  setne  %al
0854d854 +0x34e:  test   %al,%al
0854d856 +0x350:  jne    0854d7f1 <+0x2eb>
0854d858 +0x352:  mov    -0x10(%ebp),%eax
0854d85b +0x355:  mov    %eax,0x4(%esp)
0854d85f +0x359:  lea    -0x34(%ebp),%eax
0854d862 +0x35c:  mov    %eax,(%esp)
0854d865 +0x35f:  call   0854dc78 <+0x772>
0854d86a +0x364:  cmpb   $0x0,-0x9(%ebp)
0854d86e +0x368:  je     0854d8ef <+0x3e9>
0854d870 +0x36a:  lea    -0x2c(%ebp),%eax
0854d873 +0x36d:  mov    0xc(%ebp),%edx
0854d876 +0x370:  mov    %edx,0x4(%esp)
0854d87a +0x374:  mov    %eax,(%esp)
0854d87d +0x377:  call   0854dc86 <+0x780>
0854d882 +0x37c:  sub    $0x4,%esp
0854d885 +0x37f:  lea    -0x2c(%ebp),%eax
0854d888 +0x382:  mov    %eax,0x4(%esp)
0854d88c +0x386:  lea    -0x34(%ebp),%eax
0854d88f +0x389:  mov    %eax,(%esp)
0854d892 +0x38c:  call   0854dcac <+0x7a6>
0854d897 +0x391:  test   %al,%al
0854d899 +0x393:  je     0854d8e4 <+0x3de>
0854d89b +0x395:  movb   $0x1,-0x25(%ebp)
0854d89f +0x399:  mov    -0x10(%ebp),%ecx
0854d8a2 +0x39c:  mov    -0x14(%ebp),%edx
0854d8a5 +0x39f:  lea    -0x24(%ebp),%eax
0854d8a8 +0x3a2:  mov    0x10(%ebp),%esi
0854d8ab +0x3a5:  mov    %esi,0x10(%esp)
0854d8af +0x3a9:  mov    %ecx,0xc(%esp)
0854d8b3 +0x3ad:  mov    %edx,0x8(%esp)
0854d8b7 +0x3b1:  mov    0xc(%ebp),%edx
0854d8ba +0x3b4:  mov    %edx,0x4(%esp)
0854d8be +0x3b8:  mov    %eax,(%esp)
0854d8c1 +0x3bb:  call   0854dcc0 <+0x7ba>
0854d8c6 +0x3c0:  sub    $0x4,%esp
0854d8c9 +0x3c3:  lea    -0x25(%ebp),%eax
0854d8cc +0x3c6:  mov    %eax,0x8(%esp)
0854d8d0 +0x3ca:  lea    -0x24(%ebp),%eax
0854d8d3 +0x3cd:  mov    %eax,0x4(%esp)
0854d8d7 +0x3d1:  mov    %ebx,(%esp)
0854d8da +0x3d4:  call   0854dd88 <+0x882>
0854d8df +0x3d9:  jmp    0854d985 <+0x47f>
0854d8e4 +0x3de:  lea    -0x34(%ebp),%eax
0854d8e7 +0x3e1:  mov    %eax,(%esp)
0854d8ea +0x3e4:  call   0854ddb6 <+0x8b0>
0854d8ef +0x3e9:  mov    0x10(%ebp),%eax
0854d8f2 +0x3ec:  mov    %eax,0x4(%esp)
0854d8f6 +0x3f0:  lea    -0x1e(%ebp),%eax
0854d8f9 +0x3f3:  mov    %eax,(%esp)
0854d8fc +0x3f6:  call   0854dc4e <+0x748>
0854d901 +0x3fb:  mov    %eax,%esi
0854d903 +0x3fd:  mov    -0x34(%ebp),%eax
0854d906 +0x400:  mov    %eax,(%esp)
0854d909 +0x403:  call   0854ddd3 <+0x8cd>
0854d90e +0x408:  mov    0xc(%ebp),%edx
0854d911 +0x40b:  mov    %esi,0x8(%esp)
0854d915 +0x40f:  mov    %eax,0x4(%esp)
0854d919 +0x413:  mov    %edx,(%esp)
0854d91c +0x416:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0854d921 +0x41b:  test   %al,%al
0854d923 +0x41d:  je     0854d96b <+0x465>
0854d925 +0x41f:  movb   $0x1,-0x1d(%ebp)
0854d929 +0x423:  mov    -0x10(%ebp),%ecx
0854d92c +0x426:  mov    -0x14(%ebp),%edx
0854d92f +0x429:  lea    -0x1c(%ebp),%eax
0854d932 +0x42c:  mov    0x10(%ebp),%esi
0854d935 +0x42f:  mov    %esi,0x10(%esp)
0854d939 +0x433:  mov    %ecx,0xc(%esp)
0854d93d +0x437:  mov    %edx,0x8(%esp)
0854d941 +0x43b:  mov    0xc(%ebp),%edx
0854d944 +0x43e:  mov    %edx,0x4(%esp)
0854d948 +0x442:  mov    %eax,(%esp)
0854d94b +0x445:  call   0854dcc0 <+0x7ba>
0854d950 +0x44a:  sub    $0x4,%esp
0854d953 +0x44d:  lea    -0x1d(%ebp),%eax
0854d956 +0x450:  mov    %eax,0x8(%esp)
0854d95a +0x454:  lea    -0x1c(%ebp),%eax
0854d95d +0x457:  mov    %eax,0x4(%esp)
0854d961 +0x45b:  mov    %ebx,(%esp)
0854d964 +0x45e:  call   0854dd88 <+0x882>
0854d969 +0x463:  jmp    0854d985 <+0x47f>
0854d96b +0x465:  movb   $0x0,-0x15(%ebp)
0854d96f +0x469:  lea    -0x15(%ebp),%eax
0854d972 +0x46c:  mov    %eax,0x8(%esp)
0854d976 +0x470:  lea    -0x34(%ebp),%eax
0854d979 +0x473:  mov    %eax,0x4(%esp)
0854d97d +0x477:  mov    %ebx,(%esp)
0854d980 +0x47a:  call   0854ddf6 <+0x8f0>
0854d985 +0x47f:  mov    %ebx,%eax
0854d987 +0x481:  lea    -0x8(%ebp),%esp
0854d98a +0x484:  add    $0x0,%esp
0854d98d +0x487:  pop    %ebx
0854d98e +0x488:  pop    %esi
0854d98f +0x489:  pop    %ebp
0854d990 +0x48a:  ret    $0x4
0854d993 +0x48d:  nop
0854d994 +0x48e:  push   %ebp
0854d995 +0x48f:  mov    %esp,%ebp
0854d997 +0x491:  mov    0x8(%ebp),%eax
0854d99a +0x494:  mov    0x14(%eax),%eax
0854d99d +0x497:  test   %eax,%eax
0854d99f +0x499:  sete   %al
0854d9a2 +0x49c:  pop    %ebp
0854d9a3 +0x49d:  ret
0854d9a4 +0x49e:  push   %ebp
0854d9a5 +0x49f:  mov    %esp,%ebp
0854d9a7 +0x4a1:  mov    0x8(%ebp),%eax
0854d9aa +0x4a4:  mov    0x14(%eax),%eax
0854d9ad +0x4a7:  pop    %ebp
0854d9ae +0x4a8:  ret
0854d9af +0x4a9:  nop
0854d9b0 +0x4aa:  push   %ebp
0854d9b1 +0x4ab:  mov    %esp,%ebp
0854d9b3 +0x4ad:  push   %ebx
0854d9b4 +0x4ae:  sub    $0x14,%esp
0854d9b7 +0x4b1:  mov    0x8(%ebp),%ebx
0854d9ba +0x4b4:  mov    0xc(%ebp),%eax
0854d9bd +0x4b7:  mov    0xc(%eax),%eax
0854d9c0 +0x4ba:  mov    %eax,0x4(%esp)
0854d9c4 +0x4be:  mov    %ebx,(%esp)
0854d9c7 +0x4c1:  call   0854de24 <+0x91e>
0854d9cc +0x4c6:  mov    %ebx,%eax
0854d9ce +0x4c8:  add    $0x14,%esp
0854d9d1 +0x4cb:  pop    %ebx
0854d9d2 +0x4cc:  pop    %ebp
0854d9d3 +0x4cd:  ret    $0x4
0854d9d6 +0x4d0:  push   %ebp
0854d9d7 +0x4d1:  mov    %esp,%ebp
0854d9d9 +0x4d3:  push   %ebx
0854d9da +0x4d4:  sub    $0x14,%esp
0854d9dd +0x4d7:  mov    0x8(%ebp),%ebx
0854d9e0 +0x4da:  mov    0xc(%ebp),%eax
0854d9e3 +0x4dd:  add    $0x4,%eax
0854d9e6 +0x4e0:  mov    %eax,0x4(%esp)
0854d9ea +0x4e4:  mov    %ebx,(%esp)
0854d9ed +0x4e7:  call   0854de24 <+0x91e>
0854d9f2 +0x4ec:  mov    %ebx,%eax
0854d9f4 +0x4ee:  add    $0x14,%esp
0854d9f7 +0x4f1:  pop    %ebx
0854d9f8 +0x4f2:  pop    %ebp
0854d9f9 +0x4f3:  ret    $0x4
0854d9fc +0x4f6:  push   %ebp
0854d9fd +0x4f7:  mov    %esp,%ebp
0854d9ff +0x4f9:  push   %ebx
0854da00 +0x4fa:  sub    $0x14,%esp
0854da03 +0x4fd:  mov    0x8(%ebp),%eax
0854da06 +0x500:  mov    %eax,(%esp)
0854da09 +0x503:  call   0808c4b0 <_GLOBAL__I_hashkey_map+0x3e1>  ; global constructors keyed to hashkey_map+0x3e1
0854da0e +0x508:  mov    %eax,0x4(%esp)
0854da12 +0x50c:  mov    0x8(%ebp),%eax
0854da15 +0x50f:  mov    %eax,(%esp)
0854da18 +0x512:  call   0808c45a <_GLOBAL__I_hashkey_map+0x38b>  ; global constructors keyed to hashkey_map+0x38b
0854da1d +0x517:  mov    0x8(%ebp),%eax
0854da20 +0x51a:  mov    %eax,(%esp)
0854da23 +0x51d:  call   0854de32 <+0x92c>
0854da28 +0x522:  mov    %eax,%ebx
0854da2a +0x524:  mov    0x8(%ebp),%eax
0854da2d +0x527:  mov    %eax,(%esp)
0854da30 +0x52a:  call   0854dc42 <+0x73c>
0854da35 +0x52f:  mov    %eax,(%ebx)
0854da37 +0x531:  mov    0x8(%ebp),%eax
0854da3a +0x534:  mov    %eax,(%esp)
0854da3d +0x537:  call   0854de3e <+0x938>
0854da42 +0x53c:  movl   $0x0,(%eax)
0854da48 +0x542:  mov    0x8(%ebp),%eax
0854da4b +0x545:  mov    %eax,(%esp)
0854da4e +0x548:  call   0854de4a <+0x944>
0854da53 +0x54d:  mov    %eax,%ebx
0854da55 +0x54f:  mov    0x8(%ebp),%eax
0854da58 +0x552:  mov    %eax,(%esp)
0854da5b +0x555:  call   0854dc42 <+0x73c>
0854da60 +0x55a:  mov    %eax,(%ebx)
0854da62 +0x55c:  mov    0x8(%ebp),%eax
0854da65 +0x55f:  movl   $0x0,0x14(%eax)
0854da6c +0x566:  add    $0x14,%esp
0854da6f +0x569:  pop    %ebx
0854da70 +0x56a:  pop    %ebp
0854da71 +0x56b:  ret
0854da72 +0x56c:  push   %ebp
0854da73 +0x56d:  mov    %esp,%ebp
0854da75 +0x56f:  push   %esi
0854da76 +0x570:  push   %ebx
0854da77 +0x571:  sub    $0x30,%esp
0854da7a +0x574:  mov    0x8(%ebp),%ebx
0854da7d +0x577:  mov    0xc(%ebp),%eax
0854da80 +0x57a:  mov    %eax,(%esp)
0854da83 +0x57d:  call   0854de62 <+0x95c>
0854da88 +0x582:  mov    %eax,%esi
0854da8a +0x584:  mov    0xc(%ebp),%eax
0854da8d +0x587:  mov    %eax,(%esp)
0854da90 +0x58a:  call   0854de56 <+0x950>
0854da95 +0x58f:  lea    -0x10(%ebp),%edx
0854da98 +0x592:  mov    0x10(%ebp),%ecx
0854da9b +0x595:  mov    %ecx,0x10(%esp)
0854da9f +0x599:  mov    %esi,0xc(%esp)
0854daa3 +0x59d:  mov    %eax,0x8(%esp)
0854daa7 +0x5a1:  mov    0xc(%ebp),%eax
0854daaa +0x5a4:  mov    %eax,0x4(%esp)
0854daae +0x5a8:  mov    %edx,(%esp)
0854dab1 +0x5ab:  call   0854de6e <+0x968>
0854dab6 +0x5b0:  sub    $0x4,%esp
0854dab9 +0x5b3:  lea    -0xc(%ebp),%eax
0854dabc +0x5b6:  mov    0xc(%ebp),%edx
0854dabf +0x5b9:  mov    %edx,0x4(%esp)
0854dac3 +0x5bd:  mov    %eax,(%esp)
0854dac6 +0x5c0:  call   0854d9d6 <+0x4d0>
0854dacb +0x5c5:  sub    $0x4,%esp
0854dace +0x5c8:  lea    -0xc(%ebp),%eax
0854dad1 +0x5cb:  mov    %eax,0x4(%esp)
0854dad5 +0x5cf:  lea    -0x10(%ebp),%eax
0854dad8 +0x5d2:  mov    %eax,(%esp)
0854dadb +0x5d5:  call   0854deea <+0x9e4>
0854dae0 +0x5da:  test   %al,%al
0854dae2 +0x5dc:  jne    0854db09 <+0x603>
0854dae4 +0x5de:  mov    -0x10(%ebp),%eax
0854dae7 +0x5e1:  mov    %eax,(%esp)
0854daea +0x5e4:  call   0854ddd3 <+0x8cd>
0854daef +0x5e9:  mov    0xc(%ebp),%edx
0854daf2 +0x5ec:  mov    %eax,0x8(%esp)
0854daf6 +0x5f0:  mov    0x10(%ebp),%eax
0854daf9 +0x5f3:  mov    %eax,0x4(%esp)
0854dafd +0x5f7:  mov    %edx,(%esp)
0854db00 +0x5fa:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0854db05 +0x5ff:  test   %al,%al
0854db07 +0x601:  je     0854db1d <+0x617>
0854db09 +0x603:  mov    0xc(%ebp),%eax
0854db0c +0x606:  mov    %eax,0x4(%esp)
0854db10 +0x60a:  mov    %ebx,(%esp)
0854db13 +0x60d:  call   0854d9d6 <+0x4d0>
0854db18 +0x612:  sub    $0x4,%esp
0854db1b +0x615:  jmp    0854db22 <+0x61c>
0854db1d +0x617:  mov    -0x10(%ebp),%eax
0854db20 +0x61a:  mov    %eax,(%ebx)
0854db22 +0x61c:  mov    %ebx,%eax
0854db24 +0x61e:  lea    -0x8(%ebp),%esp
0854db27 +0x621:  add    $0x0,%esp
0854db2a +0x624:  pop    %ebx
0854db2b +0x625:  pop    %esi
0854db2c +0x626:  pop    %ebp
0854db2d +0x627:  ret    $0x4
0854db30 +0x62a:  push   %ebp
0854db31 +0x62b:  mov    %esp,%ebp
0854db33 +0x62d:  push   %esi
0854db34 +0x62e:  push   %ebx
0854db35 +0x62f:  sub    $0x30,%esp
0854db38 +0x632:  mov    0x8(%ebp),%ebx
0854db3b +0x635:  mov    0xc(%ebp),%eax
0854db3e +0x638:  mov    %eax,(%esp)
0854db41 +0x63b:  call   0854dc42 <+0x73c>
0854db46 +0x640:  mov    %eax,%esi
0854db48 +0x642:  mov    0xc(%ebp),%eax
0854db4b +0x645:  mov    %eax,(%esp)
0854db4e +0x648:  call   0808c4b0 <_GLOBAL__I_hashkey_map+0x3e1>  ; global constructors keyed to hashkey_map+0x3e1
0854db53 +0x64d:  lea    -0x10(%ebp),%edx
0854db56 +0x650:  mov    0x10(%ebp),%ecx
0854db59 +0x653:  mov    %ecx,0x10(%esp)
0854db5d +0x657:  mov    %esi,0xc(%esp)
0854db61 +0x65b:  mov    %eax,0x8(%esp)
0854db65 +0x65f:  mov    0xc(%ebp),%eax
0854db68 +0x662:  mov    %eax,0x4(%esp)
0854db6c +0x666:  mov    %edx,(%esp)
0854db6f +0x669:  call   0854defe <+0x9f8>
0854db74 +0x66e:  sub    $0x4,%esp
0854db77 +0x671:  lea    -0xc(%ebp),%eax
0854db7a +0x674:  mov    0xc(%ebp),%edx
0854db7d +0x677:  mov    %edx,0x4(%esp)
0854db81 +0x67b:  mov    %eax,(%esp)
0854db84 +0x67e:  call   0854dbee <+0x6e8>
0854db89 +0x683:  sub    $0x4,%esp
0854db8c +0x686:  lea    -0xc(%ebp),%eax
0854db8f +0x689:  mov    %eax,0x4(%esp)
0854db93 +0x68d:  lea    -0x10(%ebp),%eax
0854db96 +0x690:  mov    %eax,(%esp)
0854db99 +0x693:  call   0854dcac <+0x7a6>
0854db9e +0x698:  test   %al,%al
0854dba0 +0x69a:  jne    0854dbc7 <+0x6c1>
0854dba2 +0x69c:  mov    -0x10(%ebp),%eax
0854dba5 +0x69f:  mov    %eax,(%esp)
0854dba8 +0x6a2:  call   0854ddd3 <+0x8cd>
0854dbad +0x6a7:  mov    0xc(%ebp),%edx
0854dbb0 +0x6aa:  mov    %eax,0x8(%esp)
0854dbb4 +0x6ae:  mov    0x10(%ebp),%eax
0854dbb7 +0x6b1:  mov    %eax,0x4(%esp)
0854dbbb +0x6b5:  mov    %edx,(%esp)
0854dbbe +0x6b8:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0854dbc3 +0x6bd:  test   %al,%al
0854dbc5 +0x6bf:  je     0854dbdb <+0x6d5>
0854dbc7 +0x6c1:  mov    0xc(%ebp),%eax
0854dbca +0x6c4:  mov    %eax,0x4(%esp)
0854dbce +0x6c8:  mov    %ebx,(%esp)
0854dbd1 +0x6cb:  call   0854dbee <+0x6e8>
0854dbd6 +0x6d0:  sub    $0x4,%esp
0854dbd9 +0x6d3:  jmp    0854dbe0 <+0x6da>
0854dbdb +0x6d5:  mov    -0x10(%ebp),%eax
0854dbde +0x6d8:  mov    %eax,(%ebx)
0854dbe0 +0x6da:  mov    %ebx,%eax
0854dbe2 +0x6dc:  lea    -0x8(%ebp),%esp
0854dbe5 +0x6df:  add    $0x0,%esp
0854dbe8 +0x6e2:  pop    %ebx
0854dbe9 +0x6e3:  pop    %esi
0854dbea +0x6e4:  pop    %ebp
0854dbeb +0x6e5:  ret    $0x4
0854dbee +0x6e8:  push   %ebp
0854dbef +0x6e9:  mov    %esp,%ebp
0854dbf1 +0x6eb:  push   %ebx
0854dbf2 +0x6ec:  sub    $0x14,%esp
0854dbf5 +0x6ef:  mov    0x8(%ebp),%ebx
0854dbf8 +0x6f2:  mov    0xc(%ebp),%eax
0854dbfb +0x6f5:  add    $0x4,%eax
0854dbfe +0x6f8:  mov    %eax,0x4(%esp)
0854dc02 +0x6fc:  mov    %ebx,(%esp)
0854dc05 +0x6ff:  call   0854dc78 <+0x772>
0854dc0a +0x704:  mov    %ebx,%eax
0854dc0c +0x706:  add    $0x14,%esp
0854dc0f +0x709:  pop    %ebx
0854dc10 +0x70a:  pop    %ebp
0854dc11 +0x70b:  ret    $0x4
0854dc14 +0x70e:  push   %ebp
0854dc15 +0x70f:  mov    %esp,%ebp
0854dc17 +0x711:  sub    $0x18,%esp
0854dc1a +0x714:  mov    0xc(%ebp),%eax
0854dc1d +0x717:  mov    %eax,(%esp)
0854dc20 +0x71a:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0854dc25 +0x71f:  mov    (%eax),%edx
0854dc27 +0x721:  mov    0x8(%ebp),%eax
0854dc2a +0x724:  mov    %edx,(%eax)
0854dc2c +0x726:  mov    0x10(%ebp),%eax
0854dc2f +0x729:  mov    %eax,(%esp)
0854dc32 +0x72c:  call   0807f54c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x61c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x61c
0854dc37 +0x731:  movzbl (%eax),%edx
0854dc3a +0x734:  mov    0x8(%ebp),%eax
0854dc3d +0x737:  mov    %dl,0x4(%eax)
0854dc40 +0x73a:  leave
0854dc41 +0x73b:  ret
0854dc42 +0x73c:  push   %ebp
0854dc43 +0x73d:  mov    %esp,%ebp
0854dc45 +0x73f:  mov    0x8(%ebp),%eax
0854dc48 +0x742:  add    $0x4,%eax
0854dc4b +0x745:  pop    %ebp
0854dc4c +0x746:  ret
0854dc4d +0x747:  nop
0854dc4e +0x748:  push   %ebp
0854dc4f +0x749:  mov    %esp,%ebp
0854dc51 +0x74b:  mov    0xc(%ebp),%eax
0854dc54 +0x74e:  pop    %ebp
0854dc55 +0x74f:  ret
0854dc56 +0x750:  push   %ebp
0854dc57 +0x751:  mov    %esp,%ebp
0854dc59 +0x753:  sub    $0x28,%esp
0854dc5c +0x756:  mov    0x8(%ebp),%eax
0854dc5f +0x759:  mov    %eax,(%esp)
0854dc62 +0x75c:  call   0854df7a <+0xa74>
0854dc67 +0x761:  mov    %eax,0x4(%esp)
0854dc6b +0x765:  lea    -0x9(%ebp),%eax
0854dc6e +0x768:  mov    %eax,(%esp)
0854dc71 +0x76b:  call   0854dc4e <+0x748>
0854dc76 +0x770:  leave
0854dc77 +0x771:  ret
0854dc78 +0x772:  push   %ebp
0854dc79 +0x773:  mov    %esp,%ebp
0854dc7b +0x775:  mov    0xc(%ebp),%edx
0854dc7e +0x778:  mov    0x8(%ebp),%eax
0854dc81 +0x77b:  mov    %edx,(%eax)
0854dc83 +0x77d:  pop    %ebp
0854dc84 +0x77e:  ret
0854dc85 +0x77f:  nop
0854dc86 +0x780:  push   %ebp
0854dc87 +0x781:  mov    %esp,%ebp
0854dc89 +0x783:  push   %ebx
0854dc8a +0x784:  sub    $0x14,%esp
0854dc8d +0x787:  mov    0x8(%ebp),%ebx
0854dc90 +0x78a:  mov    0xc(%ebp),%eax
0854dc93 +0x78d:  mov    0xc(%eax),%eax
0854dc96 +0x790:  mov    %eax,0x4(%esp)
0854dc9a +0x794:  mov    %ebx,(%esp)
0854dc9d +0x797:  call   0854dc78 <+0x772>
0854dca2 +0x79c:  mov    %ebx,%eax
0854dca4 +0x79e:  add    $0x14,%esp
0854dca7 +0x7a1:  pop    %ebx
0854dca8 +0x7a2:  pop    %ebp
0854dca9 +0x7a3:  ret    $0x4
0854dcac +0x7a6:  push   %ebp
0854dcad +0x7a7:  mov    %esp,%ebp
0854dcaf +0x7a9:  mov    0x8(%ebp),%eax
0854dcb2 +0x7ac:  mov    (%eax),%edx
0854dcb4 +0x7ae:  mov    0xc(%ebp),%eax
0854dcb7 +0x7b1:  mov    (%eax),%eax
0854dcb9 +0x7b3:  cmp    %eax,%edx
0854dcbb +0x7b5:  sete   %al
0854dcbe +0x7b8:  pop    %ebp
0854dcbf +0x7b9:  ret
0854dcc0 +0x7ba:  push   %ebp
0854dcc1 +0x7bb:  mov    %esp,%ebp
0854dcc3 +0x7bd:  push   %esi
0854dcc4 +0x7be:  push   %ebx
0854dcc5 +0x7bf:  sub    $0x20,%esp
0854dcc8 +0x7c2:  mov    0x8(%ebp),%esi
0854dccb +0x7c5:  cmpl   $0x0,0x10(%ebp)
0854dccf +0x7c9:  jne    0854dd17 <+0x811>
0854dcd1 +0x7cb:  mov    0xc(%ebp),%eax
0854dcd4 +0x7ce:  mov    %eax,(%esp)
0854dcd7 +0x7d1:  call   0854dc42 <+0x73c>
0854dcdc +0x7d6:  cmp    0x14(%ebp),%eax
0854dcdf +0x7d9:  je     0854dd17 <+0x811>
0854dce1 +0x7db:  mov    0x14(%ebp),%eax
0854dce4 +0x7de:  mov    %eax,(%esp)
0854dce7 +0x7e1:  call   0854ddd3 <+0x8cd>
0854dcec +0x7e6:  mov    %eax,%ebx
0854dcee +0x7e8:  mov    0x18(%ebp),%eax
0854dcf1 +0x7eb:  mov    %eax,0x4(%esp)
0854dcf5 +0x7ef:  lea    -0xe(%ebp),%eax
0854dcf8 +0x7f2:  mov    %eax,(%esp)
0854dcfb +0x7f5:  call   0854dc4e <+0x748>
0854dd00 +0x7fa:  mov    0xc(%ebp),%edx
0854dd03 +0x7fd:  mov    %ebx,0x8(%esp)
0854dd07 +0x801:  mov    %eax,0x4(%esp)
0854dd0b +0x805:  mov    %edx,(%esp)
0854dd0e +0x808:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0854dd13 +0x80d:  test   %al,%al
0854dd15 +0x80f:  je     0854dd1e <+0x818>
0854dd17 +0x811:  mov    $0x1,%eax
0854dd1c +0x816:  jmp    0854dd23 <+0x81d>
0854dd1e +0x818:  mov    $0x0,%eax
0854dd23 +0x81d:  mov    %al,-0xd(%ebp)
0854dd26 +0x820:  mov    0x18(%ebp),%eax
0854dd29 +0x823:  mov    %eax,0x4(%esp)
0854dd2d +0x827:  mov    0xc(%ebp),%eax
0854dd30 +0x82a:  mov    %eax,(%esp)
0854dd33 +0x82d:  call   0854df86 <+0xa80>
0854dd38 +0x832:  mov    %eax,-0xc(%ebp)
0854dd3b +0x835:  mov    0xc(%ebp),%eax
0854dd3e +0x838:  lea    0x4(%eax),%ecx
0854dd41 +0x83b:  mov    -0xc(%ebp),%edx
0854dd44 +0x83e:  movzbl -0xd(%ebp),%eax
0854dd48 +0x842:  mov    %ecx,0xc(%esp)
0854dd4c +0x846:  mov    0x14(%ebp),%ecx
0854dd4f +0x849:  mov    %ecx,0x8(%esp)
0854dd53 +0x84d:  mov    %edx,0x4(%esp)
0854dd57 +0x851:  mov    %eax,(%esp)
0854dd5a +0x854:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0854dd5f +0x859:  mov    0xc(%ebp),%eax
0854dd62 +0x85c:  mov    0x14(%eax),%eax
0854dd65 +0x85f:  lea    0x1(%eax),%edx
0854dd68 +0x862:  mov    0xc(%ebp),%eax
0854dd6b +0x865:  mov    %edx,0x14(%eax)
0854dd6e +0x868:  mov    -0xc(%ebp),%eax
0854dd71 +0x86b:  mov    %eax,0x4(%esp)
0854dd75 +0x86f:  mov    %esi,(%esp)
0854dd78 +0x872:  call   0854dc78 <+0x772>
0854dd7d +0x877:  mov    %esi,%eax
0854dd7f +0x879:  add    $0x20,%esp
0854dd82 +0x87c:  pop    %ebx
0854dd83 +0x87d:  pop    %esi
0854dd84 +0x87e:  pop    %ebp
0854dd85 +0x87f:  ret    $0x4
0854dd88 +0x882:  push   %ebp
0854dd89 +0x883:  mov    %esp,%ebp
0854dd8b +0x885:  sub    $0x18,%esp
0854dd8e +0x888:  mov    0xc(%ebp),%eax
0854dd91 +0x88b:  mov    %eax,(%esp)
0854dd94 +0x88e:  call   0854e007 <+0xb01>
0854dd99 +0x893:  mov    0x8(%ebp),%edx
0854dd9c +0x896:  mov    (%eax),%eax
0854dd9e +0x898:  mov    %eax,(%edx)
0854dda0 +0x89a:  mov    0x10(%ebp),%eax
0854dda3 +0x89d:  mov    %eax,(%esp)
0854dda6 +0x8a0:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0854ddab +0x8a5:  movzbl (%eax),%edx
0854ddae +0x8a8:  mov    0x8(%ebp),%eax
0854ddb1 +0x8ab:  mov    %dl,0x4(%eax)
0854ddb4 +0x8ae:  leave
0854ddb5 +0x8af:  ret
0854ddb6 +0x8b0:  push   %ebp
0854ddb7 +0x8b1:  mov    %esp,%ebp
0854ddb9 +0x8b3:  sub    $0x18,%esp
0854ddbc +0x8b6:  mov    0x8(%ebp),%eax
0854ddbf +0x8b9:  mov    (%eax),%eax
0854ddc1 +0x8bb:  mov    %eax,(%esp)
0854ddc4 +0x8be:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
0854ddc9 +0x8c3:  mov    0x8(%ebp),%edx
0854ddcc +0x8c6:  mov    %eax,(%edx)
0854ddce +0x8c8:  mov    0x8(%ebp),%eax
0854ddd1 +0x8cb:  leave
0854ddd2 +0x8cc:  ret
0854ddd3 +0x8cd:  push   %ebp
0854ddd4 +0x8ce:  mov    %esp,%ebp
0854ddd6 +0x8d0:  sub    $0x28,%esp
0854ddd9 +0x8d3:  mov    0x8(%ebp),%eax
0854dddc +0x8d6:  mov    %eax,(%esp)
0854dddf +0x8d9:  call   0854e00f <+0xb09>
0854dde4 +0x8de:  mov    %eax,0x4(%esp)
0854dde8 +0x8e2:  lea    -0x9(%ebp),%eax
0854ddeb +0x8e5:  mov    %eax,(%esp)
0854ddee +0x8e8:  call   0854dc4e <+0x748>
0854ddf3 +0x8ed:  leave
0854ddf4 +0x8ee:  ret
0854ddf5 +0x8ef:  nop
0854ddf6 +0x8f0:  push   %ebp
0854ddf7 +0x8f1:  mov    %esp,%ebp
0854ddf9 +0x8f3:  sub    $0x18,%esp
0854ddfc +0x8f6:  mov    0xc(%ebp),%eax
0854ddff +0x8f9:  mov    %eax,(%esp)
0854de02 +0x8fc:  call   0854e01a <+0xb14>
0854de07 +0x901:  mov    0x8(%ebp),%edx
0854de0a +0x904:  mov    (%eax),%eax
0854de0c +0x906:  mov    %eax,(%edx)
0854de0e +0x908:  mov    0x10(%ebp),%eax
0854de11 +0x90b:  mov    %eax,(%esp)
0854de14 +0x90e:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0854de19 +0x913:  movzbl (%eax),%edx
0854de1c +0x916:  mov    0x8(%ebp),%eax
0854de1f +0x919:  mov    %dl,0x4(%eax)
0854de22 +0x91c:  leave
0854de23 +0x91d:  ret
0854de24 +0x91e:  push   %ebp
0854de25 +0x91f:  mov    %esp,%ebp
0854de27 +0x921:  mov    0xc(%ebp),%edx
0854de2a +0x924:  mov    0x8(%ebp),%eax
0854de2d +0x927:  mov    %edx,(%eax)
0854de2f +0x929:  pop    %ebp
0854de30 +0x92a:  ret
0854de31 +0x92b:  nop
0854de32 +0x92c:  push   %ebp
0854de33 +0x92d:  mov    %esp,%ebp
0854de35 +0x92f:  mov    0x8(%ebp),%eax
0854de38 +0x932:  add    $0xc,%eax
0854de3b +0x935:  pop    %ebp
0854de3c +0x936:  ret
0854de3d +0x937:  nop
0854de3e +0x938:  push   %ebp
0854de3f +0x939:  mov    %esp,%ebp
0854de41 +0x93b:  mov    0x8(%ebp),%eax
0854de44 +0x93e:  add    $0x8,%eax
0854de47 +0x941:  pop    %ebp
0854de48 +0x942:  ret
0854de49 +0x943:  nop
0854de4a +0x944:  push   %ebp
0854de4b +0x945:  mov    %esp,%ebp
0854de4d +0x947:  mov    0x8(%ebp),%eax
0854de50 +0x94a:  add    $0x10,%eax
0854de53 +0x94d:  pop    %ebp
0854de54 +0x94e:  ret
0854de55 +0x94f:  nop
0854de56 +0x950:  push   %ebp
0854de57 +0x951:  mov    %esp,%ebp
0854de59 +0x953:  mov    0x8(%ebp),%eax
0854de5c +0x956:  mov    0x8(%eax),%eax
0854de5f +0x959:  pop    %ebp
0854de60 +0x95a:  ret
0854de61 +0x95b:  nop
0854de62 +0x95c:  push   %ebp
0854de63 +0x95d:  mov    %esp,%ebp
0854de65 +0x95f:  mov    0x8(%ebp),%eax
0854de68 +0x962:  add    $0x4,%eax
0854de6b +0x965:  pop    %ebp
0854de6c +0x966:  ret
0854de6d +0x967:  nop
0854de6e +0x968:  push   %ebp
0854de6f +0x969:  mov    %esp,%ebp
0854de71 +0x96b:  push   %ebx
0854de72 +0x96c:  sub    $0x14,%esp
0854de75 +0x96f:  mov    0x8(%ebp),%ebx
0854de78 +0x972:  jmp    0854dec6 <+0x9c0>
0854de7a +0x974:  mov    0x10(%ebp),%eax
0854de7d +0x977:  mov    %eax,(%esp)
0854de80 +0x97a:  call   0854dc56 <+0x750>
0854de85 +0x97f:  mov    0xc(%ebp),%edx
0854de88 +0x982:  mov    0x18(%ebp),%ecx
0854de8b +0x985:  mov    %ecx,0x8(%esp)
0854de8f +0x989:  mov    %eax,0x4(%esp)
0854de93 +0x98d:  mov    %edx,(%esp)
0854de96 +0x990:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0854de9b +0x995:  xor    $0x1,%eax
0854de9e +0x998:  test   %al,%al
0854dea0 +0x99a:  je     0854deb8 <+0x9b2>
0854dea2 +0x99c:  mov    0x10(%ebp),%eax
0854dea5 +0x99f:  mov    %eax,0x14(%ebp)
0854dea8 +0x9a2:  mov    0x10(%ebp),%eax
0854deab +0x9a5:  mov    %eax,(%esp)
0854deae +0x9a8:  call   0854e022 <+0xb1c>
0854deb3 +0x9ad:  mov    %eax,0x10(%ebp)
0854deb6 +0x9b0:  jmp    0854dec6 <+0x9c0>
0854deb8 +0x9b2:  mov    0x10(%ebp),%eax
0854debb +0x9b5:  mov    %eax,(%esp)
0854debe +0x9b8:  call   0854e02d <+0xb27>
0854dec3 +0x9bd:  mov    %eax,0x10(%ebp)
0854dec6 +0x9c0:  cmpl   $0x0,0x10(%ebp)
0854deca +0x9c4:  setne  %al
0854decd +0x9c7:  test   %al,%al
0854decf +0x9c9:  jne    0854de7a <+0x974>
0854ded1 +0x9cb:  mov    0x14(%ebp),%eax
0854ded4 +0x9ce:  mov    %eax,0x4(%esp)
0854ded8 +0x9d2:  mov    %ebx,(%esp)
0854dedb +0x9d5:  call   0854de24 <+0x91e>
0854dee0 +0x9da:  mov    %ebx,%eax
0854dee2 +0x9dc:  add    $0x14,%esp
0854dee5 +0x9df:  pop    %ebx
0854dee6 +0x9e0:  pop    %ebp
0854dee7 +0x9e1:  ret    $0x4
0854deea +0x9e4:  push   %ebp
0854deeb +0x9e5:  mov    %esp,%ebp
0854deed +0x9e7:  mov    0x8(%ebp),%eax
0854def0 +0x9ea:  mov    (%eax),%edx
0854def2 +0x9ec:  mov    0xc(%ebp),%eax
0854def5 +0x9ef:  mov    (%eax),%eax
0854def7 +0x9f1:  cmp    %eax,%edx
0854def9 +0x9f3:  sete   %al
0854defc +0x9f6:  pop    %ebp
0854defd +0x9f7:  ret
0854defe +0x9f8:  push   %ebp
0854deff +0x9f9:  mov    %esp,%ebp
0854df01 +0x9fb:  push   %ebx
0854df02 +0x9fc:  sub    $0x14,%esp
0854df05 +0x9ff:  mov    0x8(%ebp),%ebx
0854df08 +0xa02:  jmp    0854df56 <+0xa50>
0854df0a +0xa04:  mov    0x10(%ebp),%eax
0854df0d +0xa07:  mov    %eax,(%esp)
0854df10 +0xa0a:  call   0854dc56 <+0x750>
0854df15 +0xa0f:  mov    0xc(%ebp),%edx
0854df18 +0xa12:  mov    0x18(%ebp),%ecx
0854df1b +0xa15:  mov    %ecx,0x8(%esp)
0854df1f +0xa19:  mov    %eax,0x4(%esp)
0854df23 +0xa1d:  mov    %edx,(%esp)
0854df26 +0xa20:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0854df2b +0xa25:  xor    $0x1,%eax
0854df2e +0xa28:  test   %al,%al
0854df30 +0xa2a:  je     0854df48 <+0xa42>
0854df32 +0xa2c:  mov    0x10(%ebp),%eax
0854df35 +0xa2f:  mov    %eax,0x14(%ebp)
0854df38 +0xa32:  mov    0x10(%ebp),%eax
0854df3b +0xa35:  mov    %eax,(%esp)
0854df3e +0xa38:  call   0808c512 <_GLOBAL__I_hashkey_map+0x443>  ; global constructors keyed to hashkey_map+0x443
0854df43 +0xa3d:  mov    %eax,0x10(%ebp)
0854df46 +0xa40:  jmp    0854df56 <+0xa50>
0854df48 +0xa42:  mov    0x10(%ebp),%eax
0854df4b +0xa45:  mov    %eax,(%esp)
0854df4e +0xa48:  call   0808c507 <_GLOBAL__I_hashkey_map+0x438>  ; global constructors keyed to hashkey_map+0x438
0854df53 +0xa4d:  mov    %eax,0x10(%ebp)
0854df56 +0xa50:  cmpl   $0x0,0x10(%ebp)
0854df5a +0xa54:  setne  %al
0854df5d +0xa57:  test   %al,%al
0854df5f +0xa59:  jne    0854df0a <+0xa04>
0854df61 +0xa5b:  mov    0x14(%ebp),%eax
0854df64 +0xa5e:  mov    %eax,0x4(%esp)
0854df68 +0xa62:  mov    %ebx,(%esp)
0854df6b +0xa65:  call   0854dc78 <+0x772>
0854df70 +0xa6a:  mov    %ebx,%eax
0854df72 +0xa6c:  add    $0x14,%esp
0854df75 +0xa6f:  pop    %ebx
0854df76 +0xa70:  pop    %ebp
0854df77 +0xa71:  ret    $0x4
0854df7a +0xa74:  push   %ebp
0854df7b +0xa75:  mov    %esp,%ebp
0854df7d +0xa77:  mov    0x8(%ebp),%eax
0854df80 +0xa7a:  add    $0x10,%eax
0854df83 +0xa7d:  pop    %ebp
0854df84 +0xa7e:  ret
0854df85 +0xa7f:  nop
0854df86 +0xa80:  push   %ebp
0854df87 +0xa81:  mov    %esp,%ebp
0854df89 +0xa83:  push   %esi
0854df8a +0xa84:  push   %ebx
0854df8b +0xa85:  sub    $0x20,%esp
0854df8e +0xa88:  mov    0x8(%ebp),%eax
0854df91 +0xa8b:  mov    %eax,(%esp)
0854df94 +0xa8e:  call   0854e038 <+0xb32>
0854df99 +0xa93:  mov    %eax,-0xc(%ebp)
0854df9c +0xa96:  mov    0xc(%ebp),%eax
0854df9f +0xa99:  mov    %eax,(%esp)
0854dfa2 +0xa9c:  call   0854e05b <+0xb55>
0854dfa7 +0xaa1:  mov    %eax,%ebx
0854dfa9 +0xaa3:  mov    0x8(%ebp),%eax
0854dfac +0xaa6:  mov    %eax,(%esp)
0854dfaf +0xaa9:  call   0808c558 <_GLOBAL__I_hashkey_map+0x489>  ; global constructors keyed to hashkey_map+0x489
0854dfb4 +0xaae:  mov    %ebx,0x8(%esp)
0854dfb8 +0xab2:  mov    -0xc(%ebp),%edx
0854dfbb +0xab5:  mov    %edx,0x4(%esp)
0854dfbf +0xab9:  mov    %eax,(%esp)
0854dfc2 +0xabc:  call   0854e064 <+0xb5e>
0854dfc7 +0xac1:  jmp    0854dffd <+0xaf7>
0854dfc9 +0xac3:  mov    %eax,(%esp)
0854dfcc +0xac6:  call   08725ce0 <__cxa_begin_catch>
0854dfd1 +0xacb:  mov    -0xc(%ebp),%eax
0854dfd4 +0xace:  mov    %eax,0x4(%esp)
0854dfd8 +0xad2:  mov    0x8(%ebp),%eax
0854dfdb +0xad5:  mov    %eax,(%esp)
0854dfde +0xad8:  call   0808c57a <_GLOBAL__I_hashkey_map+0x4ab>  ; global constructors keyed to hashkey_map+0x4ab
0854dfe3 +0xadd:  call   08724be0 <__cxa_rethrow>
0854dfe8 +0xae2:  mov    %edx,%ebx
0854dfea +0xae4:  mov    %eax,%esi
0854dfec +0xae6:  call   08725c30 <__cxa_end_catch>
0854dff1 +0xaeb:  mov    %esi,%eax
0854dff3 +0xaed:  mov    %ebx,%edx
0854dff5 +0xaef:  mov    %eax,(%esp)
0854dff8 +0xaf2:  call   08ae3750 <_Unwind_Resume>
0854dffd +0xaf7:  mov    -0xc(%ebp),%eax
0854e000 +0xafa:  add    $0x20,%esp
0854e003 +0xafd:  pop    %ebx
0854e004 +0xafe:  pop    %esi
0854e005 +0xaff:  pop    %ebp
0854e006 +0xb00:  ret
0854e007 +0xb01:  push   %ebp
0854e008 +0xb02:  mov    %esp,%ebp
0854e00a +0xb04:  mov    0x8(%ebp),%eax
0854e00d +0xb07:  pop    %ebp
0854e00e +0xb08:  ret
0854e00f +0xb09:  push   %ebp
0854e010 +0xb0a:  mov    %esp,%ebp
0854e012 +0xb0c:  mov    0x8(%ebp),%eax
0854e015 +0xb0f:  add    $0x10,%eax
0854e018 +0xb12:  pop    %ebp
0854e019 +0xb13:  ret
0854e01a +0xb14:  push   %ebp
0854e01b +0xb15:  mov    %esp,%ebp
0854e01d +0xb17:  mov    0x8(%ebp),%eax
0854e020 +0xb1a:  pop    %ebp
0854e021 +0xb1b:  ret
0854e022 +0xb1c:  push   %ebp
0854e023 +0xb1d:  mov    %esp,%ebp
0854e025 +0xb1f:  mov    0x8(%ebp),%eax
0854e028 +0xb22:  mov    0x8(%eax),%eax
0854e02b +0xb25:  pop    %ebp
0854e02c +0xb26:  ret
0854e02d +0xb27:  push   %ebp
0854e02e +0xb28:  mov    %esp,%ebp
0854e030 +0xb2a:  mov    0x8(%ebp),%eax
0854e033 +0xb2d:  mov    0xc(%eax),%eax
0854e036 +0xb30:  pop    %ebp
0854e037 +0xb31:  ret
0854e038 +0xb32:  push   %ebp
0854e039 +0xb33:  mov    %esp,%ebp
0854e03b +0xb35:  sub    $0x18,%esp
0854e03e +0xb38:  mov    0x8(%ebp),%eax
0854e041 +0xb3b:  movl   $0x0,0x8(%esp)
0854e049 +0xb43:  movl   $0x1,0x4(%esp)
0854e051 +0xb4b:  mov    %eax,(%esp)
0854e054 +0xb4e:  call   0854e0a4 <+0xb9e>
0854e059 +0xb53:  leave
0854e05a +0xb54:  ret
0854e05b +0xb55:  push   %ebp
0854e05c +0xb56:  mov    %esp,%ebp
0854e05e +0xb58:  mov    0x8(%ebp),%eax
0854e061 +0xb5b:  pop    %ebp
0854e062 +0xb5c:  ret
0854e063 +0xb5d:  nop
0854e064 +0xb5e:  push   %ebp
0854e065 +0xb5f:  mov    %esp,%ebp
0854e067 +0xb61:  push   %ebx
0854e068 +0xb62:  sub    $0x14,%esp
0854e06b +0xb65:  mov    0x10(%ebp),%eax
0854e06e +0xb68:  mov    %eax,(%esp)
0854e071 +0xb6b:  call   0854e05b <+0xb55>
0854e076 +0xb70:  mov    %eax,%ebx
0854e078 +0xb72:  mov    0xc(%ebp),%eax
0854e07b +0xb75:  mov    %eax,0x4(%esp)
0854e07f +0xb79:  movl   $0x18,(%esp)
0854e086 +0xb80:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0854e08b +0xb85:  mov    %eax,%edx
0854e08d +0xb87:  test   %edx,%edx
0854e08f +0xb89:  je     0854e09d <+0xb97>
0854e091 +0xb8b:  mov    %ebx,0x4(%esp)
0854e095 +0xb8f:  mov    %eax,(%esp)
0854e098 +0xb92:  call   0854e0e2 <+0xbdc>
0854e09d +0xb97:  add    $0x14,%esp
0854e0a0 +0xb9a:  pop    %ebx
0854e0a1 +0xb9b:  pop    %ebp
0854e0a2 +0xb9c:  ret
0854e0a3 +0xb9d:  nop
0854e0a4 +0xb9e:  push   %ebp
0854e0a5 +0xb9f:  mov    %esp,%ebp
0854e0a7 +0xba1:  sub    $0x18,%esp
0854e0aa +0xba4:  mov    0x8(%ebp),%eax
0854e0ad +0xba7:  mov    %eax,(%esp)
0854e0b0 +0xbaa:  call   0854e12a <+0xc24>
0854e0b5 +0xbaf:  cmp    0xc(%ebp),%eax
0854e0b8 +0xbb2:  setb   %al
0854e0bb +0xbb5:  movzbl %al,%eax
0854e0be +0xbb8:  test   %eax,%eax
0854e0c0 +0xbba:  setne  %al
0854e0c3 +0xbbd:  test   %al,%al
0854e0c5 +0xbbf:  je     0854e0cc <+0xbc6>
0854e0c7 +0xbc1:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0854e0cc +0xbc6:  mov    0xc(%ebp),%edx
0854e0cf +0xbc9:  mov    %edx,%eax
0854e0d1 +0xbcb:  add    %eax,%eax
0854e0d3 +0xbcd:  add    %edx,%eax
0854e0d5 +0xbcf:  shl    $0x3,%eax
0854e0d8 +0xbd2:  mov    %eax,(%esp)
0854e0db +0xbd5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0854e0e0 +0xbda:  leave
0854e0e1 +0xbdb:  ret
0854e0e2 +0xbdc:  push   %ebp
0854e0e3 +0xbdd:  mov    %esp,%ebp
0854e0e5 +0xbdf:  sub    $0x18,%esp
0854e0e8 +0xbe2:  mov    0x8(%ebp),%eax
0854e0eb +0xbe5:  movl   $0x0,(%eax)
0854e0f1 +0xbeb:  mov    0x8(%ebp),%eax
0854e0f4 +0xbee:  movl   $0x0,0x4(%eax)
0854e0fb +0xbf5:  mov    0x8(%ebp),%eax
0854e0fe +0xbf8:  movl   $0x0,0x8(%eax)
0854e105 +0xbff:  mov    0x8(%ebp),%eax
0854e108 +0xc02:  movl   $0x0,0xc(%eax)
0854e10f +0xc09:  mov    0xc(%ebp),%eax
0854e112 +0xc0c:  mov    %eax,(%esp)
0854e115 +0xc0f:  call   0854e05b <+0xb55>
0854e11a +0xc14:  mov    0x8(%ebp),%ecx
0854e11d +0xc17:  mov    0x4(%eax),%edx
0854e120 +0xc1a:  mov    (%eax),%eax
0854e122 +0xc1c:  mov    %eax,0x10(%ecx)
0854e125 +0xc1f:  mov    %edx,0x14(%ecx)
0854e128 +0xc22:  leave
0854e129 +0xc23:  ret
0854e12a +0xc24:  push   %ebp
0854e12b +0xc25:  mov    %esp,%ebp
0854e12d +0xc27:  mov    $0xaaaaaaa,%eax
0854e132 +0xc2c:  pop    %ebp
0854e133 +0xc2d:  ret
```

## 反编译 C

```c
// <global>::global @ 0x854d506

/* CKillMonsterInfo::CKillMonsterInfo() */

void CKillMonsterInfo::_GLOBAL__I_CKillMonsterInfo(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
