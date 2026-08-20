# inc_total_gage

`_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi`

`global constructors keyed to CBoosterGage::inc_total_gage(int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CBoosterGage` | `0x080dd4b7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dd4b7  _GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi
#           global constructors keyed to CBoosterGage::inc_total_gage(int)
# range [0x080dd4b7, 0x080de22b]
080dd4b7 +0x000:  push   %ebp
080dd4b8 +0x001:  mov    %esp,%ebp
080dd4ba +0x003:  sub    $0x18,%esp
080dd4bd +0x006:  movl   $0xffff,0x4(%esp)
080dd4c5 +0x00e:  movl   $0x1,(%esp)
080dd4cc +0x015:  call   080dd477 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080dd4d1 +0x01a:  leave
080dd4d2 +0x01b:  ret
080dd4d3 +0x01c:  nop
080dd4d4 +0x01d:  push   %ebp
080dd4d5 +0x01e:  mov    %esp,%ebp
080dd4d7 +0x020:  sub    $0x28,%esp
080dd4da +0x023:  mov    0x8(%ebp),%edx
080dd4dd +0x026:  lea    -0x10(%ebp),%eax
080dd4e0 +0x029:  mov    %edx,0x4(%esp)
080dd4e4 +0x02d:  mov    %eax,(%esp)
080dd4e7 +0x030:  call   080dd628 <+0x171>
080dd4ec +0x035:  sub    $0x4,%esp
080dd4ef +0x038:  lea    -0x10(%ebp),%eax
080dd4f2 +0x03b:  mov    %eax,0x4(%esp)
080dd4f6 +0x03f:  lea    -0x14(%ebp),%eax
080dd4f9 +0x042:  mov    %eax,(%esp)
080dd4fc +0x045:  call   080dd64c <+0x195>
080dd501 +0x04a:  jmp    080dd536 <+0x7f>
080dd503 +0x04c:  lea    -0x14(%ebp),%eax
080dd506 +0x04f:  mov    %eax,(%esp)
080dd509 +0x052:  call   080dd6ce <+0x217>
080dd50e +0x057:  mov    (%eax),%eax
080dd510 +0x059:  cmp    0xc(%ebp),%eax
080dd513 +0x05c:  sete   %al
080dd516 +0x05f:  test   %al,%al
080dd518 +0x061:  je     080dd52b <+0x74>
080dd51a +0x063:  lea    -0x14(%ebp),%eax
080dd51d +0x066:  mov    %eax,(%esp)
080dd520 +0x069:  call   080dd6ce <+0x217>
080dd525 +0x06e:  movzbl 0x4(%eax),%eax
080dd529 +0x072:  jmp    080dd566 <+0xaf>
080dd52b +0x074:  lea    -0x14(%ebp),%eax
080dd52e +0x077:  mov    %eax,(%esp)
080dd531 +0x07a:  call   080dd6b8 <+0x201>
080dd536 +0x07f:  mov    0x8(%ebp),%edx
080dd539 +0x082:  lea    -0xc(%ebp),%eax
080dd53c +0x085:  mov    %edx,0x4(%esp)
080dd540 +0x089:  mov    %eax,(%esp)
080dd543 +0x08c:  call   080dd666 <+0x1af>
080dd548 +0x091:  sub    $0x4,%esp
080dd54b +0x094:  lea    -0xc(%ebp),%eax
080dd54e +0x097:  mov    %eax,0x4(%esp)
080dd552 +0x09b:  lea    -0x14(%ebp),%eax
080dd555 +0x09e:  mov    %eax,(%esp)
080dd558 +0x0a1:  call   080dd68c <+0x1d5>
080dd55d +0x0a6:  test   %al,%al
080dd55f +0x0a8:  jne    080dd503 <+0x4c>
080dd561 +0x0aa:  mov    $0x0,%eax
080dd566 +0x0af:  leave
080dd567 +0x0b0:  ret
080dd568 +0x0b1:  push   %ebp
080dd569 +0x0b2:  mov    %esp,%ebp
080dd56b +0x0b4:  mov    0x8(%ebp),%eax
080dd56e +0x0b7:  add    $0x6e8,%eax
080dd573 +0x0bc:  pop    %ebp
080dd574 +0x0bd:  ret
080dd575 +0x0be:  nop
080dd576 +0x0bf:  push   %ebp
080dd577 +0x0c0:  mov    %esp,%ebp
080dd579 +0x0c2:  mov    0x8(%ebp),%eax
080dd57c +0x0c5:  add    $0x734,%eax
080dd581 +0x0ca:  pop    %ebp
080dd582 +0x0cb:  ret
080dd583 +0x0cc:  nop
080dd584 +0x0cd:  push   %ebp
080dd585 +0x0ce:  mov    %esp,%ebp
080dd587 +0x0d0:  sub    $0x18,%esp
080dd58a +0x0d3:  mov    0x8(%ebp),%eax
080dd58d +0x0d6:  lea    0x79744(%eax),%edx
080dd593 +0x0dc:  mov    0xc(%ebp),%eax
080dd596 +0x0df:  mov    %eax,0x4(%esp)
080dd59a +0x0e3:  mov    %edx,(%esp)
080dd59d +0x0e6:  call   0832ac94 <_ZNK13charac_expand8CDataMgr7GetDataE23ENUM_CHARAC_EXPAND_TYPE>  ; charac_expand::CDataMgr::GetData(ENUM_CHARAC_EXPAND_TYPE) const
080dd5a2 +0x0eb:  leave
080dd5a3 +0x0ec:  ret
080dd5a4 +0x0ed:  push   %ebp
080dd5a5 +0x0ee:  mov    %esp,%ebp
080dd5a7 +0x0f0:  mov    0x8(%ebp),%eax
080dd5aa +0x0f3:  mov    0x71ba0(%eax),%eax
080dd5b0 +0x0f9:  pop    %ebp
080dd5b1 +0x0fa:  ret
080dd5b2 +0x0fb:  push   %ebp
080dd5b3 +0x0fc:  mov    %esp,%ebp
080dd5b5 +0x0fe:  push   %ebx
080dd5b6 +0x0ff:  sub    $0x14,%esp
080dd5b9 +0x102:  mov    0x8(%ebp),%ebx
080dd5bc +0x105:  mov    0xc(%ebp),%eax
080dd5bf +0x108:  mov    %eax,0x4(%esp)
080dd5c3 +0x10c:  mov    %ebx,(%esp)
080dd5c6 +0x10f:  call   080dd858 <+0x3a1>
080dd5cb +0x114:  mov    %ebx,%eax
080dd5cd +0x116:  add    $0x14,%esp
080dd5d0 +0x119:  pop    %ebx
080dd5d1 +0x11a:  pop    %ebp
080dd5d2 +0x11b:  ret    $0x4
080dd5d5 +0x11e:  nop
080dd5d6 +0x11f:  push   %ebp
080dd5d7 +0x120:  mov    %esp,%ebp
080dd5d9 +0x122:  push   %ebx
080dd5da +0x123:  sub    $0x14,%esp
080dd5dd +0x126:  mov    0x8(%ebp),%ebx
080dd5e0 +0x129:  mov    0xc(%ebp),%eax
080dd5e3 +0x12c:  add    $0x4,%eax
080dd5e6 +0x12f:  mov    %eax,0x4(%esp)
080dd5ea +0x133:  mov    %ebx,(%esp)
080dd5ed +0x136:  call   080dd858 <+0x3a1>
080dd5f2 +0x13b:  mov    %ebx,%eax
080dd5f4 +0x13d:  add    $0x14,%esp
080dd5f7 +0x140:  pop    %ebx
080dd5f8 +0x141:  pop    %ebp
080dd5f9 +0x142:  ret    $0x4
080dd5fc +0x145:  push   %ebp
080dd5fd +0x146:  mov    %esp,%ebp
080dd5ff +0x148:  mov    0x8(%ebp),%eax
080dd602 +0x14b:  mov    (%eax),%eax
080dd604 +0x14d:  pop    %ebp
080dd605 +0x14e:  ret
080dd606 +0x14f:  push   %ebp
080dd607 +0x150:  mov    %esp,%ebp
080dd609 +0x152:  sub    $0x18,%esp
080dd60c +0x155:  mov    0xc(%ebp),%eax
080dd60f +0x158:  mov    %eax,(%esp)
080dd612 +0x15b:  call   080dd870 <+0x3b9>
080dd617 +0x160:  mov    %eax,0x4(%esp)
080dd61b +0x164:  mov    0x8(%ebp),%eax
080dd61e +0x167:  mov    %eax,(%esp)
080dd621 +0x16a:  call   080dd878 <+0x3c1>
080dd626 +0x16f:  leave
080dd627 +0x170:  ret
080dd628 +0x171:  push   %ebp
080dd629 +0x172:  mov    %esp,%ebp
080dd62b +0x174:  push   %ebx
080dd62c +0x175:  sub    $0x14,%esp
080dd62f +0x178:  mov    0x8(%ebp),%ebx
080dd632 +0x17b:  mov    0xc(%ebp),%eax
080dd635 +0x17e:  mov    %eax,0x4(%esp)
080dd639 +0x182:  mov    %ebx,(%esp)
080dd63c +0x185:  call   080dd902 <+0x44b>
080dd641 +0x18a:  mov    %ebx,%eax
080dd643 +0x18c:  add    $0x14,%esp
080dd646 +0x18f:  pop    %ebx
080dd647 +0x190:  pop    %ebp
080dd648 +0x191:  ret    $0x4
080dd64b +0x194:  nop
080dd64c +0x195:  push   %ebp
080dd64d +0x196:  mov    %esp,%ebp
080dd64f +0x198:  sub    $0x18,%esp
080dd652 +0x19b:  mov    0xc(%ebp),%eax
080dd655 +0x19e:  mov    %eax,(%esp)
080dd658 +0x1a1:  call   080dd912 <+0x45b>
080dd65d +0x1a6:  mov    (%eax),%edx
080dd65f +0x1a8:  mov    0x8(%ebp),%eax
080dd662 +0x1ab:  mov    %edx,(%eax)
080dd664 +0x1ad:  leave
080dd665 +0x1ae:  ret
080dd666 +0x1af:  push   %ebp
080dd667 +0x1b0:  mov    %esp,%ebp
080dd669 +0x1b2:  push   %ebx
080dd66a +0x1b3:  sub    $0x14,%esp
080dd66d +0x1b6:  mov    0x8(%ebp),%ebx
080dd670 +0x1b9:  mov    0xc(%ebp),%eax
080dd673 +0x1bc:  add    $0x4,%eax
080dd676 +0x1bf:  mov    %eax,0x4(%esp)
080dd67a +0x1c3:  mov    %ebx,(%esp)
080dd67d +0x1c6:  call   080dd902 <+0x44b>
080dd682 +0x1cb:  mov    %ebx,%eax
080dd684 +0x1cd:  add    $0x14,%esp
080dd687 +0x1d0:  pop    %ebx
080dd688 +0x1d1:  pop    %ebp
080dd689 +0x1d2:  ret    $0x4
080dd68c +0x1d5:  push   %ebp
080dd68d +0x1d6:  mov    %esp,%ebp
080dd68f +0x1d8:  push   %ebx
080dd690 +0x1d9:  sub    $0x14,%esp
080dd693 +0x1dc:  mov    0x8(%ebp),%eax
080dd696 +0x1df:  mov    %eax,(%esp)
080dd699 +0x1e2:  call   080dd91a <+0x463>
080dd69e +0x1e7:  mov    (%eax),%ebx
080dd6a0 +0x1e9:  mov    0xc(%ebp),%eax
080dd6a3 +0x1ec:  mov    %eax,(%esp)
080dd6a6 +0x1ef:  call   080dd912 <+0x45b>
080dd6ab +0x1f4:  mov    (%eax),%eax
080dd6ad +0x1f6:  cmp    %eax,%ebx
080dd6af +0x1f8:  setne  %al
080dd6b2 +0x1fb:  add    $0x14,%esp
080dd6b5 +0x1fe:  pop    %ebx
080dd6b6 +0x1ff:  pop    %ebp
080dd6b7 +0x200:  ret
080dd6b8 +0x201:  push   %ebp
080dd6b9 +0x202:  mov    %esp,%ebp
080dd6bb +0x204:  mov    0x8(%ebp),%eax
080dd6be +0x207:  mov    (%eax),%eax
080dd6c0 +0x209:  lea    0x5(%eax),%edx
080dd6c3 +0x20c:  mov    0x8(%ebp),%eax
080dd6c6 +0x20f:  mov    %edx,(%eax)
080dd6c8 +0x211:  mov    0x8(%ebp),%eax
080dd6cb +0x214:  pop    %ebp
080dd6cc +0x215:  ret
080dd6cd +0x216:  nop
080dd6ce +0x217:  push   %ebp
080dd6cf +0x218:  mov    %esp,%ebp
080dd6d1 +0x21a:  mov    0x8(%ebp),%eax
080dd6d4 +0x21d:  mov    (%eax),%eax
080dd6d6 +0x21f:  pop    %ebp
080dd6d7 +0x220:  ret
080dd6d8 +0x221:  push   %ebp
080dd6d9 +0x222:  mov    %esp,%ebp
080dd6db +0x224:  push   %ebx
080dd6dc +0x225:  sub    $0x24,%esp
080dd6df +0x228:  mov    0x8(%ebp),%ebx
080dd6e2 +0x22b:  mov    0xc(%ebp),%eax
080dd6e5 +0x22e:  mov    (%eax),%eax
080dd6e7 +0x230:  mov    %eax,-0xc(%ebp)
080dd6ea +0x233:  lea    -0xc(%ebp),%eax
080dd6ed +0x236:  mov    %eax,0x4(%esp)
080dd6f1 +0x23a:  mov    %ebx,(%esp)
080dd6f4 +0x23d:  call   080dd922 <+0x46b>
080dd6f9 +0x242:  mov    %ebx,%eax
080dd6fb +0x244:  add    $0x24,%esp
080dd6fe +0x247:  pop    %ebx
080dd6ff +0x248:  pop    %ebp
080dd700 +0x249:  ret    $0x4
080dd703 +0x24c:  nop
080dd704 +0x24d:  push   %ebp
080dd705 +0x24e:  mov    %esp,%ebp
080dd707 +0x250:  push   %ebx
080dd708 +0x251:  sub    $0x24,%esp
080dd70b +0x254:  mov    0x8(%ebp),%ebx
080dd70e +0x257:  mov    0xc(%ebp),%eax
080dd711 +0x25a:  mov    0x4(%eax),%eax
080dd714 +0x25d:  mov    %eax,-0xc(%ebp)
080dd717 +0x260:  lea    -0xc(%ebp),%eax
080dd71a +0x263:  mov    %eax,0x4(%esp)
080dd71e +0x267:  mov    %ebx,(%esp)
080dd721 +0x26a:  call   080dd922 <+0x46b>
080dd726 +0x26f:  mov    %ebx,%eax
080dd728 +0x271:  add    $0x24,%esp
080dd72b +0x274:  pop    %ebx
080dd72c +0x275:  pop    %ebp
080dd72d +0x276:  ret    $0x4
080dd730 +0x279:  push   %ebp
080dd731 +0x27a:  mov    %esp,%ebp
080dd733 +0x27c:  push   %ebx
080dd734 +0x27d:  sub    $0x14,%esp
080dd737 +0x280:  mov    0x8(%ebp),%eax
080dd73a +0x283:  mov    %eax,(%esp)
080dd73d +0x286:  call   080dd932 <+0x47b>
080dd742 +0x28b:  mov    (%eax),%ebx
080dd744 +0x28d:  mov    0xc(%ebp),%eax
080dd747 +0x290:  mov    %eax,(%esp)
080dd74a +0x293:  call   080dd932 <+0x47b>
080dd74f +0x298:  mov    (%eax),%eax
080dd751 +0x29a:  cmp    %eax,%ebx
080dd753 +0x29c:  setne  %al
080dd756 +0x29f:  add    $0x14,%esp
080dd759 +0x2a2:  pop    %ebx
080dd75a +0x2a3:  pop    %ebp
080dd75b +0x2a4:  ret
080dd75c +0x2a5:  push   %ebp
080dd75d +0x2a6:  mov    %esp,%ebp
080dd75f +0x2a8:  mov    0x8(%ebp),%eax
080dd762 +0x2ab:  mov    (%eax),%eax
080dd764 +0x2ad:  pop    %ebp
080dd765 +0x2ae:  ret
080dd766 +0x2af:  push   %ebp
080dd767 +0x2b0:  mov    %esp,%ebp
080dd769 +0x2b2:  push   %ebx
080dd76a +0x2b3:  sub    $0x24,%esp
080dd76d +0x2b6:  mov    0x8(%ebp),%ebx
080dd770 +0x2b9:  mov    0xc(%ebp),%eax
080dd773 +0x2bc:  mov    (%eax),%eax
080dd775 +0x2be:  mov    %eax,-0xc(%ebp)
080dd778 +0x2c1:  lea    -0xc(%ebp),%edx
080dd77b +0x2c4:  lea    0x3e(%eax),%ecx
080dd77e +0x2c7:  mov    0xc(%ebp),%eax
080dd781 +0x2ca:  mov    %ecx,(%eax)
080dd783 +0x2cc:  mov    %edx,0x4(%esp)
080dd787 +0x2d0:  mov    %ebx,(%esp)
080dd78a +0x2d3:  call   080dd922 <+0x46b>
080dd78f +0x2d8:  mov    %ebx,%eax
080dd791 +0x2da:  add    $0x24,%esp
080dd794 +0x2dd:  pop    %ebx
080dd795 +0x2de:  pop    %ebp
080dd796 +0x2df:  ret    $0x4
080dd799 +0x2e2:  push   %ebp
080dd79a +0x2e3:  mov    %esp,%ebp
080dd79c +0x2e5:  push   %ebx
080dd79d +0x2e6:  sub    $0x24,%esp
080dd7a0 +0x2e9:  mov    0x8(%ebp),%ebx
080dd7a3 +0x2ec:  mov    0x10(%ebp),%eax
080dd7a6 +0x2ef:  mov    %eax,(%esp)
080dd7a9 +0x2f2:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
080dd7ae +0x2f7:  mov    (%eax),%eax
080dd7b0 +0x2f9:  mov    %eax,-0xc(%ebp)
080dd7b3 +0x2fc:  mov    0xc(%ebp),%eax
080dd7b6 +0x2ff:  mov    %eax,(%esp)
080dd7b9 +0x302:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
080dd7be +0x307:  lea    -0xc(%ebp),%edx
080dd7c1 +0x30a:  mov    %edx,0x8(%esp)
080dd7c5 +0x30e:  mov    %eax,0x4(%esp)
080dd7c9 +0x312:  mov    %ebx,(%esp)
080dd7cc +0x315:  call   080dd93a <+0x483>
080dd7d1 +0x31a:  mov    %ebx,%eax
080dd7d3 +0x31c:  add    $0x24,%esp
080dd7d6 +0x31f:  pop    %ebx
080dd7d7 +0x320:  pop    %ebp
080dd7d8 +0x321:  ret    $0x4
080dd7db +0x324:  nop
080dd7dc +0x325:  push   %ebp
080dd7dd +0x326:  mov    %esp,%ebp
080dd7df +0x328:  sub    $0x18,%esp
080dd7e2 +0x32b:  mov    0x8(%ebp),%eax
080dd7e5 +0x32e:  mov    (%eax),%eax
080dd7e7 +0x330:  mov    %eax,(%esp)
080dd7ea +0x333:  call   080dd968 <+0x4b1>
080dd7ef +0x338:  leave
080dd7f0 +0x339:  ret
080dd7f1 +0x33a:  nop
080dd7f2 +0x33b:  push   %ebp
080dd7f3 +0x33c:  mov    %esp,%ebp
080dd7f5 +0x33e:  mov    0x8(%ebp),%eax
080dd7f8 +0x341:  pop    %ebp
080dd7f9 +0x342:  ret
080dd7fa +0x343:  push   %ebp
080dd7fb +0x344:  mov    %esp,%ebp
080dd7fd +0x346:  sub    $0x18,%esp
080dd800 +0x349:  mov    0xc(%ebp),%eax
080dd803 +0x34c:  mov    %eax,0x4(%esp)
080dd807 +0x350:  mov    0x8(%ebp),%eax
080dd80a +0x353:  mov    %eax,(%esp)
080dd80d +0x356:  call   080dd9d2 <+0x51b>
080dd812 +0x35b:  leave
080dd813 +0x35c:  ret
080dd814 +0x35d:  push   %ebp
080dd815 +0x35e:  mov    %esp,%ebp
080dd817 +0x360:  mov    0x8(%ebp),%eax
080dd81a +0x363:  mov    0x4(%eax),%eax
080dd81d +0x366:  mov    %eax,%edx
080dd81f +0x368:  mov    0x8(%ebp),%eax
080dd822 +0x36b:  mov    (%eax),%eax
080dd824 +0x36d:  mov    %edx,%ecx
080dd826 +0x36f:  sub    %eax,%ecx
080dd828 +0x371:  mov    %ecx,%eax
080dd82a +0x373:  sar    $0x3,%eax
080dd82d +0x376:  pop    %ebp
080dd82e +0x377:  ret
080dd82f +0x378:  nop
080dd830 +0x379:  push   %ebp
080dd831 +0x37a:  mov    %esp,%ebp
080dd833 +0x37c:  sub    $0x18,%esp
080dd836 +0x37f:  cmpl   $0x0,0xc(%ebp)
080dd83a +0x383:  je     080dd855 <+0x39e>
080dd83c +0x385:  mov    0x8(%ebp),%eax
080dd83f +0x388:  mov    0x10(%ebp),%edx
080dd842 +0x38b:  mov    %edx,0x8(%esp)
080dd846 +0x38f:  mov    0xc(%ebp),%edx
080dd849 +0x392:  mov    %edx,0x4(%esp)
080dd84d +0x396:  mov    %eax,(%esp)
080dd850 +0x399:  call   080dda1c <+0x565>
080dd855 +0x39e:  leave
080dd856 +0x39f:  ret
080dd857 +0x3a0:  nop
080dd858 +0x3a1:  push   %ebp
080dd859 +0x3a2:  mov    %esp,%ebp
080dd85b +0x3a4:  mov    0xc(%ebp),%eax
080dd85e +0x3a7:  mov    (%eax),%edx
080dd860 +0x3a9:  mov    0x8(%ebp),%eax
080dd863 +0x3ac:  mov    %edx,(%eax)
080dd865 +0x3ae:  pop    %ebp
080dd866 +0x3af:  ret
080dd867 +0x3b0:  nop
080dd868 +0x3b1:  push   %ebp
080dd869 +0x3b2:  mov    %esp,%ebp
080dd86b +0x3b4:  mov    0x8(%ebp),%eax
080dd86e +0x3b7:  pop    %ebp
080dd86f +0x3b8:  ret
080dd870 +0x3b9:  push   %ebp
080dd871 +0x3ba:  mov    %esp,%ebp
080dd873 +0x3bc:  mov    0x8(%ebp),%eax
080dd876 +0x3bf:  pop    %ebp
080dd877 +0x3c0:  ret
080dd878 +0x3c1:  push   %ebp
080dd879 +0x3c2:  mov    %esp,%ebp
080dd87b +0x3c4:  push   %ebx
080dd87c +0x3c5:  sub    $0x24,%esp
080dd87f +0x3c8:  mov    0x8(%ebp),%eax
080dd882 +0x3cb:  mov    0x4(%eax),%edx
080dd885 +0x3ce:  mov    0x8(%ebp),%eax
080dd888 +0x3d1:  mov    0x8(%eax),%eax
080dd88b +0x3d4:  cmp    %eax,%edx
080dd88d +0x3d6:  je     080dd8c4 <+0x40d>
080dd88f +0x3d8:  mov    0xc(%ebp),%eax
080dd892 +0x3db:  mov    %eax,(%esp)
080dd895 +0x3de:  call   080dda37 <+0x580>
080dd89a +0x3e3:  mov    0x8(%ebp),%edx
080dd89d +0x3e6:  mov    0x4(%edx),%ecx
080dd8a0 +0x3e9:  mov    0x8(%ebp),%edx
080dd8a3 +0x3ec:  mov    %eax,0x8(%esp)
080dd8a7 +0x3f0:  mov    %ecx,0x4(%esp)
080dd8ab +0x3f4:  mov    %edx,(%esp)
080dd8ae +0x3f7:  call   080dda40 <+0x589>
080dd8b3 +0x3fc:  mov    0x8(%ebp),%eax
080dd8b6 +0x3ff:  mov    0x4(%eax),%eax
080dd8b9 +0x402:  lea    0x8(%eax),%edx
080dd8bc +0x405:  mov    0x8(%ebp),%eax
080dd8bf +0x408:  mov    %edx,0x4(%eax)
080dd8c2 +0x40b:  jmp    080dd8fc <+0x445>
080dd8c4 +0x40d:  mov    0xc(%ebp),%eax
080dd8c7 +0x410:  mov    %eax,(%esp)
080dd8ca +0x413:  call   080dda37 <+0x580>
080dd8cf +0x418:  mov    %eax,%ebx
080dd8d1 +0x41a:  lea    -0xc(%ebp),%eax
080dd8d4 +0x41d:  mov    0x8(%ebp),%edx
080dd8d7 +0x420:  mov    %edx,0x4(%esp)
080dd8db +0x424:  mov    %eax,(%esp)
080dd8de +0x427:  call   080dd5d6 <+0x11f>
080dd8e3 +0x42c:  sub    $0x4,%esp
080dd8e6 +0x42f:  mov    %ebx,0x8(%esp)
080dd8ea +0x433:  mov    -0xc(%ebp),%eax
080dd8ed +0x436:  mov    %eax,0x4(%esp)
080dd8f1 +0x43a:  mov    0x8(%ebp),%eax
080dd8f4 +0x43d:  mov    %eax,(%esp)
080dd8f7 +0x440:  call   080dda80 <+0x5c9>
080dd8fc +0x445:  mov    -0x4(%ebp),%ebx
080dd8ff +0x448:  leave
080dd900 +0x449:  ret
080dd901 +0x44a:  nop
080dd902 +0x44b:  push   %ebp
080dd903 +0x44c:  mov    %esp,%ebp
080dd905 +0x44e:  mov    0xc(%ebp),%eax
080dd908 +0x451:  mov    (%eax),%edx
080dd90a +0x453:  mov    0x8(%ebp),%eax
080dd90d +0x456:  mov    %edx,(%eax)
080dd90f +0x458:  pop    %ebp
080dd910 +0x459:  ret
080dd911 +0x45a:  nop
080dd912 +0x45b:  push   %ebp
080dd913 +0x45c:  mov    %esp,%ebp
080dd915 +0x45e:  mov    0x8(%ebp),%eax
080dd918 +0x461:  pop    %ebp
080dd919 +0x462:  ret
080dd91a +0x463:  push   %ebp
080dd91b +0x464:  mov    %esp,%ebp
080dd91d +0x466:  mov    0x8(%ebp),%eax
080dd920 +0x469:  pop    %ebp
080dd921 +0x46a:  ret
080dd922 +0x46b:  push   %ebp
080dd923 +0x46c:  mov    %esp,%ebp
080dd925 +0x46e:  mov    0xc(%ebp),%eax
080dd928 +0x471:  mov    (%eax),%edx
080dd92a +0x473:  mov    0x8(%ebp),%eax
080dd92d +0x476:  mov    %edx,(%eax)
080dd92f +0x478:  pop    %ebp
080dd930 +0x479:  ret
080dd931 +0x47a:  nop
080dd932 +0x47b:  push   %ebp
080dd933 +0x47c:  mov    %esp,%ebp
080dd935 +0x47e:  mov    0x8(%ebp),%eax
080dd938 +0x481:  pop    %ebp
080dd939 +0x482:  ret
080dd93a +0x483:  push   %ebp
080dd93b +0x484:  mov    %esp,%ebp
080dd93d +0x486:  sub    $0x18,%esp
080dd940 +0x489:  mov    0xc(%ebp),%eax
080dd943 +0x48c:  mov    %eax,(%esp)
080dd946 +0x48f:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
080dd94b +0x494:  mov    (%eax),%edx
080dd94d +0x496:  mov    0x8(%ebp),%eax
080dd950 +0x499:  mov    %edx,(%eax)
080dd952 +0x49b:  mov    0x10(%ebp),%eax
080dd955 +0x49e:  mov    %eax,(%esp)
080dd958 +0x4a1:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
080dd95d +0x4a6:  mov    (%eax),%edx
080dd95f +0x4a8:  mov    0x8(%ebp),%eax
080dd962 +0x4ab:  mov    %edx,0x4(%eax)
080dd965 +0x4ae:  leave
080dd966 +0x4af:  ret
080dd967 +0x4b0:  nop
080dd968 +0x4b1:  push   %ebp
080dd969 +0x4b2:  mov    %esp,%ebp
080dd96b +0x4b4:  sub    $0x28,%esp
080dd96e +0x4b7:  jmp    080dd98c <+0x4d5>
080dd970 +0x4b9:  mov    0x8(%ebp),%eax
080dd973 +0x4bc:  mov    %eax,(%esp)
080dd976 +0x4bf:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
080dd97b +0x4c4:  add    %eax,%eax
080dd97d +0x4c6:  mov    %eax,0x4(%esp)
080dd981 +0x4ca:  mov    0x8(%ebp),%eax
080dd984 +0x4cd:  mov    %eax,(%esp)
080dd987 +0x4d0:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
080dd98c +0x4d5:  movl   $0x8,0x4(%esp)
080dd994 +0x4dd:  mov    0x8(%ebp),%eax
080dd997 +0x4e0:  mov    %eax,(%esp)
080dd99a +0x4e3:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
080dd99f +0x4e8:  xor    $0x1,%eax
080dd9a2 +0x4eb:  test   %al,%al
080dd9a4 +0x4ed:  jne    080dd970 <+0x4b9>
080dd9a6 +0x4ef:  mov    0x8(%ebp),%eax
080dd9a9 +0x4f2:  mov    0x8(%eax),%eax
080dd9ac +0x4f5:  mov    %eax,%edx
080dd9ae +0x4f7:  mov    0x8(%ebp),%eax
080dd9b1 +0x4fa:  mov    0xc(%eax),%eax
080dd9b4 +0x4fd:  lea    (%edx,%eax,1),%eax
080dd9b7 +0x500:  mov    %eax,-0xc(%ebp)
080dd9ba +0x503:  movl   $0x8,0x4(%esp)
080dd9c2 +0x50b:  mov    0x8(%ebp),%eax
080dd9c5 +0x50e:  mov    %eax,(%esp)
080dd9c8 +0x511:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
080dd9cd +0x516:  mov    -0xc(%ebp),%eax
080dd9d0 +0x519:  leave
080dd9d1 +0x51a:  ret
080dd9d2 +0x51b:  push   %ebp
080dd9d3 +0x51c:  mov    %esp,%ebp
080dd9d5 +0x51e:  sub    $0x18,%esp
080dd9d8 +0x521:  mov    0xc(%ebp),%eax
080dd9db +0x524:  mov    %eax,0x4(%esp)
080dd9df +0x528:  mov    0x8(%ebp),%eax
080dd9e2 +0x52b:  mov    %eax,(%esp)
080dd9e5 +0x52e:  call   080ddd45 <+0x88e>
080dd9ea +0x533:  leave
080dd9eb +0x534:  ret
080dd9ec +0x535:  push   %ebp
080dd9ed +0x536:  mov    %esp,%ebp
080dd9ef +0x538:  sub    $0x18,%esp
080dd9f2 +0x53b:  cmpl   $0x0,0xc(%ebp)
080dd9f6 +0x53f:  je     080dda14 <+0x55d>
080dd9f8 +0x541:  mov    0x8(%ebp),%eax
080dd9fb +0x544:  movl   $0x0,0x8(%esp)
080dda03 +0x54c:  mov    0xc(%ebp),%edx
080dda06 +0x54f:  mov    %edx,0x4(%esp)
080dda0a +0x553:  mov    %eax,(%esp)
080dda0d +0x556:  call   080ddd4a <+0x893>
080dda12 +0x55b:  jmp    080dda19 <+0x562>
080dda14 +0x55d:  mov    $0x0,%eax
080dda19 +0x562:  leave
080dda1a +0x563:  ret
080dda1b +0x564:  nop
080dda1c +0x565:  push   %ebp
080dda1d +0x566:  mov    %esp,%ebp
080dda1f +0x568:  sub    $0x18,%esp
080dda22 +0x56b:  mov    0xc(%ebp),%eax
080dda25 +0x56e:  mov    %eax,(%esp)
080dda28 +0x571:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080dda2d +0x576:  leave
080dda2e +0x577:  ret
080dda2f +0x578:  push   %ebp
080dda30 +0x579:  mov    %esp,%ebp
080dda32 +0x57b:  mov    0x8(%ebp),%eax
080dda35 +0x57e:  pop    %ebp
080dda36 +0x57f:  ret
080dda37 +0x580:  push   %ebp
080dda38 +0x581:  mov    %esp,%ebp
080dda3a +0x583:  mov    0x8(%ebp),%eax
080dda3d +0x586:  pop    %ebp
080dda3e +0x587:  ret
080dda3f +0x588:  nop
080dda40 +0x589:  push   %ebp
080dda41 +0x58a:  mov    %esp,%ebp
080dda43 +0x58c:  push   %ebx
080dda44 +0x58d:  sub    $0x14,%esp
080dda47 +0x590:  mov    0x10(%ebp),%eax
080dda4a +0x593:  mov    %eax,(%esp)
080dda4d +0x596:  call   080dda37 <+0x580>
080dda52 +0x59b:  mov    %eax,%ebx
080dda54 +0x59d:  mov    0xc(%ebp),%eax
080dda57 +0x5a0:  mov    %eax,0x4(%esp)
080dda5b +0x5a4:  movl   $0x8,(%esp)
080dda62 +0x5ab:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080dda67 +0x5b0:  mov    %eax,%edx
080dda69 +0x5b2:  test   %edx,%edx
080dda6b +0x5b4:  je     080dda79 <+0x5c2>
080dda6d +0x5b6:  mov    %ebx,0x4(%esp)
080dda71 +0x5ba:  mov    %eax,(%esp)
080dda74 +0x5bd:  call   080ddeec <+0xa35>
080dda79 +0x5c2:  add    $0x14,%esp
080dda7c +0x5c5:  pop    %ebx
080dda7d +0x5c6:  pop    %ebp
080dda7e +0x5c7:  ret
080dda7f +0x5c8:  nop
080dda80 +0x5c9:  push   %ebp
080dda81 +0x5ca:  mov    %esp,%ebp
080dda83 +0x5cc:  push   %esi
080dda84 +0x5cd:  push   %ebx
080dda85 +0x5ce:  sub    $0x30,%esp
080dda88 +0x5d1:  mov    0x8(%ebp),%eax
080dda8b +0x5d4:  mov    0x4(%eax),%edx
080dda8e +0x5d7:  mov    0x8(%ebp),%eax
080dda91 +0x5da:  mov    0x8(%eax),%eax
080dda94 +0x5dd:  cmp    %eax,%edx
080dda96 +0x5df:  je     080ddb39 <+0x682>
080dda9c +0x5e5:  mov    0x8(%ebp),%eax
080dda9f +0x5e8:  mov    0x4(%eax),%eax
080ddaa2 +0x5eb:  sub    $0x8,%eax
080ddaa5 +0x5ee:  mov    %eax,(%esp)
080ddaa8 +0x5f1:  call   080dd870 <+0x3b9>
080ddaad +0x5f6:  mov    0x8(%ebp),%edx
080ddab0 +0x5f9:  mov    0x4(%edx),%ecx
080ddab3 +0x5fc:  mov    0x8(%ebp),%edx
080ddab6 +0x5ff:  mov    %eax,0x8(%esp)
080ddaba +0x603:  mov    %ecx,0x4(%esp)
080ddabe +0x607:  mov    %edx,(%esp)
080ddac1 +0x60a:  call   080dda40 <+0x589>
080ddac6 +0x60f:  mov    0x8(%ebp),%eax
080ddac9 +0x612:  mov    0x4(%eax),%eax
080ddacc +0x615:  lea    0x8(%eax),%edx
080ddacf +0x618:  mov    0x8(%ebp),%eax
080ddad2 +0x61b:  mov    %edx,0x4(%eax)
080ddad5 +0x61e:  mov    0x8(%ebp),%eax
080ddad8 +0x621:  mov    0x4(%eax),%eax
080ddadb +0x624:  lea    -0x8(%eax),%esi
080ddade +0x627:  mov    0x8(%ebp),%eax
080ddae1 +0x62a:  mov    0x4(%eax),%eax
080ddae4 +0x62d:  lea    -0x10(%eax),%ebx
080ddae7 +0x630:  lea    0xc(%ebp),%eax
080ddaea +0x633:  mov    %eax,(%esp)
080ddaed +0x636:  call   080dd868 <+0x3b1>
080ddaf2 +0x63b:  mov    (%eax),%eax
080ddaf4 +0x63d:  mov    %esi,0x8(%esp)
080ddaf8 +0x641:  mov    %ebx,0x4(%esp)
080ddafc +0x645:  mov    %eax,(%esp)
080ddaff +0x648:  call   080dde0e <+0x957>
080ddb04 +0x64d:  mov    0x10(%ebp),%eax
080ddb07 +0x650:  mov    %eax,(%esp)
080ddb0a +0x653:  call   080dda37 <+0x580>
080ddb0f +0x658:  mov    0x4(%eax),%edx
080ddb12 +0x65b:  mov    (%eax),%eax
080ddb14 +0x65d:  mov    %eax,-0x24(%ebp)
080ddb17 +0x660:  mov    %edx,-0x20(%ebp)
080ddb1a +0x663:  lea    0xc(%ebp),%eax
080ddb1d +0x666:  mov    %eax,(%esp)
080ddb20 +0x669:  call   080dd5fc <+0x145>
080ddb25 +0x66e:  lea    -0x24(%ebp),%edx
080ddb28 +0x671:  mov    %edx,0x4(%esp)
080ddb2c +0x675:  mov    %eax,(%esp)
080ddb2f +0x678:  call   080ddf1c <+0xa65>
080ddb34 +0x67d:  jmp    080ddd3b <+0x884>
080ddb39 +0x682:  movl   $"vector::_M_insert_aux",0x8(%esp)
080ddb41 +0x68a:  movl   $0x1,0x4(%esp)
080ddb49 +0x692:  mov    0x8(%ebp),%eax
080ddb4c +0x695:  mov    %eax,(%esp)
080ddb4f +0x698:  call   080dde46 <+0x98f>
080ddb54 +0x69d:  mov    %eax,-0x18(%ebp)
080ddb57 +0x6a0:  lea    -0x1c(%ebp),%eax
080ddb5a +0x6a3:  mov    0x8(%ebp),%edx
080ddb5d +0x6a6:  mov    %edx,0x4(%esp)
080ddb61 +0x6aa:  mov    %eax,(%esp)
080ddb64 +0x6ad:  call   080dd5b2 <+0xfb>
080ddb69 +0x6b2:  sub    $0x4,%esp
080ddb6c +0x6b5:  lea    -0x1c(%ebp),%eax
080ddb6f +0x6b8:  mov    %eax,0x4(%esp)
080ddb73 +0x6bc:  lea    0xc(%ebp),%eax
080ddb76 +0x6bf:  mov    %eax,(%esp)
080ddb79 +0x6c2:  call   080ddd8a <+0x8d3>
080ddb7e +0x6c7:  mov    %eax,-0x14(%ebp)
080ddb81 +0x6ca:  mov    0x8(%ebp),%eax
080ddb84 +0x6cd:  mov    -0x18(%ebp),%edx
080ddb87 +0x6d0:  mov    %edx,0x4(%esp)
080ddb8b +0x6d4:  mov    %eax,(%esp)
080ddb8e +0x6d7:  call   080dd9ec <+0x535>
080ddb93 +0x6dc:  mov    %eax,-0x10(%ebp)
080ddb96 +0x6df:  mov    -0x10(%ebp),%eax
080ddb99 +0x6e2:  mov    %eax,-0xc(%ebp)
080ddb9c +0x6e5:  mov    0x10(%ebp),%eax
080ddb9f +0x6e8:  mov    %eax,(%esp)
080ddba2 +0x6eb:  call   080dda37 <+0x580>
080ddba7 +0x6f0:  mov    -0x14(%ebp),%edx
080ddbaa +0x6f3:  shl    $0x3,%edx
080ddbad +0x6f6:  mov    %edx,%ecx
080ddbaf +0x6f8:  add    -0x10(%ebp),%ecx
080ddbb2 +0x6fb:  mov    0x8(%ebp),%edx
080ddbb5 +0x6fe:  mov    %eax,0x8(%esp)
080ddbb9 +0x702:  mov    %ecx,0x4(%esp)
080ddbbd +0x706:  mov    %edx,(%esp)
080ddbc0 +0x709:  call   080dda40 <+0x589>
080ddbc5 +0x70e:  movl   $0x0,-0xc(%ebp)
080ddbcc +0x715:  mov    0x8(%ebp),%eax
080ddbcf +0x718:  mov    %eax,(%esp)
080ddbd2 +0x71b:  call   080dd7f2 <+0x33b>
080ddbd7 +0x720:  mov    %eax,%ebx
080ddbd9 +0x722:  lea    0xc(%ebp),%eax
080ddbdc +0x725:  mov    %eax,(%esp)
080ddbdf +0x728:  call   080dd868 <+0x3b1>
080ddbe4 +0x72d:  mov    (%eax),%edx
080ddbe6 +0x72f:  mov    0x8(%ebp),%eax
080ddbe9 +0x732:  mov    (%eax),%eax
080ddbeb +0x734:  mov    %ebx,0xc(%esp)
080ddbef +0x738:  mov    -0x10(%ebp),%ecx
080ddbf2 +0x73b:  mov    %ecx,0x8(%esp)
080ddbf6 +0x73f:  mov    %edx,0x4(%esp)
080ddbfa +0x743:  mov    %eax,(%esp)
080ddbfd +0x746:  call   080dddbc <+0x905>
080ddc02 +0x74b:  mov    %eax,-0xc(%ebp)
080ddc05 +0x74e:  addl   $0x8,-0xc(%ebp)
080ddc09 +0x752:  mov    0x8(%ebp),%eax
080ddc0c +0x755:  mov    %eax,(%esp)
080ddc0f +0x758:  call   080dd7f2 <+0x33b>
080ddc14 +0x75d:  mov    %eax,%ebx
080ddc16 +0x75f:  mov    0x8(%ebp),%eax
080ddc19 +0x762:  mov    0x4(%eax),%esi
080ddc1c +0x765:  lea    0xc(%ebp),%eax
080ddc1f +0x768:  mov    %eax,(%esp)
080ddc22 +0x76b:  call   080dd868 <+0x3b1>
080ddc27 +0x770:  mov    (%eax),%eax
080ddc29 +0x772:  mov    %ebx,0xc(%esp)
080ddc2d +0x776:  mov    -0xc(%ebp),%edx
080ddc30 +0x779:  mov    %edx,0x8(%esp)
080ddc34 +0x77d:  mov    %esi,0x4(%esp)
080ddc38 +0x781:  mov    %eax,(%esp)
080ddc3b +0x784:  call   080dddbc <+0x905>
080ddc40 +0x789:  mov    %eax,-0xc(%ebp)
080ddc43 +0x78c:  mov    0x8(%ebp),%eax
080ddc46 +0x78f:  mov    %eax,(%esp)
080ddc49 +0x792:  call   080dd7f2 <+0x33b>
080ddc4e +0x797:  mov    0x8(%ebp),%edx
080ddc51 +0x79a:  mov    0x4(%edx),%ecx
080ddc54 +0x79d:  mov    0x8(%ebp),%edx
080ddc57 +0x7a0:  mov    (%edx),%edx
080ddc59 +0x7a2:  mov    %eax,0x8(%esp)
080ddc5d +0x7a6:  mov    %ecx,0x4(%esp)
080ddc61 +0x7aa:  mov    %edx,(%esp)
080ddc64 +0x7ad:  call   080dd7fa <+0x343>
080ddc69 +0x7b2:  mov    0x8(%ebp),%eax
080ddc6c +0x7b5:  mov    0x8(%eax),%eax
080ddc6f +0x7b8:  mov    %eax,%edx
080ddc71 +0x7ba:  mov    0x8(%ebp),%eax
080ddc74 +0x7bd:  mov    (%eax),%eax
080ddc76 +0x7bf:  mov    %edx,%ecx
080ddc78 +0x7c1:  sub    %eax,%ecx
080ddc7a +0x7c3:  mov    %ecx,%eax
080ddc7c +0x7c5:  sar    $0x3,%eax
080ddc7f +0x7c8:  mov    %eax,%ecx
080ddc81 +0x7ca:  mov    0x8(%ebp),%eax
080ddc84 +0x7cd:  mov    (%eax),%edx
080ddc86 +0x7cf:  mov    0x8(%ebp),%eax
080ddc89 +0x7d2:  mov    %ecx,0x8(%esp)
080ddc8d +0x7d6:  mov    %edx,0x4(%esp)
080ddc91 +0x7da:  mov    %eax,(%esp)
080ddc94 +0x7dd:  call   080dd830 <+0x379>
080ddc99 +0x7e2:  mov    0x8(%ebp),%eax
080ddc9c +0x7e5:  mov    -0x10(%ebp),%edx
080ddc9f +0x7e8:  mov    %edx,(%eax)
080ddca1 +0x7ea:  mov    0x8(%ebp),%eax
080ddca4 +0x7ed:  mov    -0xc(%ebp),%edx
080ddca7 +0x7f0:  mov    %edx,0x4(%eax)
080ddcaa +0x7f3:  mov    -0x18(%ebp),%eax
080ddcad +0x7f6:  shl    $0x3,%eax
080ddcb0 +0x7f9:  mov    %eax,%edx
080ddcb2 +0x7fb:  add    -0x10(%ebp),%edx
080ddcb5 +0x7fe:  mov    0x8(%ebp),%eax
080ddcb8 +0x801:  mov    %edx,0x8(%eax)
080ddcbb +0x804:  jmp    080ddd3b <+0x884>
080ddcbd +0x806:  mov    %eax,(%esp)
080ddcc0 +0x809:  call   08725ce0 <__cxa_begin_catch>
080ddcc5 +0x80e:  cmpl   $0x0,-0xc(%ebp)
080ddcc9 +0x812:  jne    080ddce7 <+0x830>
080ddccb +0x814:  mov    -0x14(%ebp),%eax
080ddcce +0x817:  shl    $0x3,%eax
080ddcd1 +0x81a:  mov    %eax,%edx
080ddcd3 +0x81c:  add    -0x10(%ebp),%edx
080ddcd6 +0x81f:  mov    0x8(%ebp),%eax
080ddcd9 +0x822:  mov    %edx,0x4(%esp)
080ddcdd +0x826:  mov    %eax,(%esp)
080ddce0 +0x829:  call   080ddf56 <+0xa9f>
080ddce5 +0x82e:  jmp    080ddd08 <+0x851>
080ddce7 +0x830:  mov    0x8(%ebp),%eax
080ddcea +0x833:  mov    %eax,(%esp)
080ddced +0x836:  call   080dd7f2 <+0x33b>
080ddcf2 +0x83b:  mov    %eax,0x8(%esp)
080ddcf6 +0x83f:  mov    -0xc(%ebp),%eax
080ddcf9 +0x842:  mov    %eax,0x4(%esp)
080ddcfd +0x846:  mov    -0x10(%ebp),%eax
080ddd00 +0x849:  mov    %eax,(%esp)
080ddd03 +0x84c:  call   080dd7fa <+0x343>
080ddd08 +0x851:  mov    0x8(%ebp),%eax
080ddd0b +0x854:  mov    -0x18(%ebp),%edx
080ddd0e +0x857:  mov    %edx,0x8(%esp)
080ddd12 +0x85b:  mov    -0x10(%ebp),%edx
080ddd15 +0x85e:  mov    %edx,0x4(%esp)
080ddd19 +0x862:  mov    %eax,(%esp)
080ddd1c +0x865:  call   080dd830 <+0x379>
080ddd21 +0x86a:  call   08724be0 <__cxa_rethrow>
080ddd26 +0x86f:  mov    %edx,%ebx
080ddd28 +0x871:  mov    %eax,%esi
080ddd2a +0x873:  call   08725c30 <__cxa_end_catch>
080ddd2f +0x878:  mov    %esi,%eax
080ddd31 +0x87a:  mov    %ebx,%edx
080ddd33 +0x87c:  mov    %eax,(%esp)
080ddd36 +0x87f:  call   08ae3750 <_Unwind_Resume>
080ddd3b +0x884:  lea    -0x8(%ebp),%esp
080ddd3e +0x887:  add    $0x0,%esp
080ddd41 +0x88a:  pop    %ebx
080ddd42 +0x88b:  pop    %esi
080ddd43 +0x88c:  pop    %ebp
080ddd44 +0x88d:  ret
080ddd45 +0x88e:  push   %ebp
080ddd46 +0x88f:  mov    %esp,%ebp
080ddd48 +0x891:  pop    %ebp
080ddd49 +0x892:  ret
080ddd4a +0x893:  push   %ebp
080ddd4b +0x894:  mov    %esp,%ebp
080ddd4d +0x896:  sub    $0x18,%esp
080ddd50 +0x899:  mov    0x8(%ebp),%eax
080ddd53 +0x89c:  mov    %eax,(%esp)
080ddd56 +0x89f:  call   080ddf6a <+0xab3>
080ddd5b +0x8a4:  cmp    0xc(%ebp),%eax
080ddd5e +0x8a7:  setb   %al
080ddd61 +0x8aa:  movzbl %al,%eax
080ddd64 +0x8ad:  test   %eax,%eax
080ddd66 +0x8af:  setne  %al
080ddd69 +0x8b2:  test   %al,%al
080ddd6b +0x8b4:  je     080ddd72 <+0x8bb>
080ddd6d +0x8b6:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
080ddd72 +0x8bb:  mov    0xc(%ebp),%eax
080ddd75 +0x8be:  shl    $0x3,%eax
080ddd78 +0x8c1:  mov    %eax,(%esp)
080ddd7b +0x8c4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080ddd80 +0x8c9:  leave
080ddd81 +0x8ca:  ret
080ddd82 +0x8cb:  push   %ebp
080ddd83 +0x8cc:  mov    %esp,%ebp
080ddd85 +0x8ce:  mov    0x8(%ebp),%eax
080ddd88 +0x8d1:  pop    %ebp
080ddd89 +0x8d2:  ret
080ddd8a +0x8d3:  push   %ebp
080ddd8b +0x8d4:  mov    %esp,%ebp
080ddd8d +0x8d6:  push   %ebx
080ddd8e +0x8d7:  sub    $0x14,%esp
080ddd91 +0x8da:  mov    0x8(%ebp),%eax
080ddd94 +0x8dd:  mov    %eax,(%esp)
080ddd97 +0x8e0:  call   080dd868 <+0x3b1>
080ddd9c +0x8e5:  mov    (%eax),%eax
080ddd9e +0x8e7:  mov    %eax,%ebx
080ddda0 +0x8e9:  mov    0xc(%ebp),%eax
080ddda3 +0x8ec:  mov    %eax,(%esp)
080ddda6 +0x8ef:  call   080dd868 <+0x3b1>
080dddab +0x8f4:  mov    (%eax),%eax
080dddad +0x8f6:  mov    %ebx,%edx
080dddaf +0x8f8:  sub    %eax,%edx
080dddb1 +0x8fa:  mov    %edx,%eax
080dddb3 +0x8fc:  sar    $0x3,%eax
080dddb6 +0x8ff:  add    $0x14,%esp
080dddb9 +0x902:  pop    %ebx
080dddba +0x903:  pop    %ebp
080dddbb +0x904:  ret
080dddbc +0x905:  push   %ebp
080dddbd +0x906:  mov    %esp,%ebp
080dddbf +0x908:  sub    $0x28,%esp
080dddc2 +0x90b:  lea    -0x10(%ebp),%eax
080dddc5 +0x90e:  lea    0xc(%ebp),%edx
080dddc8 +0x911:  mov    %edx,0x4(%esp)
080dddcc +0x915:  mov    %eax,(%esp)
080dddcf +0x918:  call   080ddf74 <+0xabd>
080dddd4 +0x91d:  sub    $0x4,%esp
080dddd7 +0x920:  lea    -0xc(%ebp),%eax
080dddda +0x923:  lea    0x8(%ebp),%edx
080ddddd +0x926:  mov    %edx,0x4(%esp)
080ddde1 +0x92a:  mov    %eax,(%esp)
080ddde4 +0x92d:  call   080ddf74 <+0xabd>
080ddde9 +0x932:  sub    $0x4,%esp
080dddec +0x935:  mov    0x14(%ebp),%eax
080dddef +0x938:  mov    %eax,0xc(%esp)
080dddf3 +0x93c:  mov    0x10(%ebp),%eax
080dddf6 +0x93f:  mov    %eax,0x8(%esp)
080dddfa +0x943:  mov    -0x10(%ebp),%eax
080dddfd +0x946:  mov    %eax,0x4(%esp)
080dde01 +0x94a:  mov    -0xc(%ebp),%eax
080dde04 +0x94d:  mov    %eax,(%esp)
080dde07 +0x950:  call   080ddf99 <+0xae2>
080dde0c +0x955:  leave
080dde0d +0x956:  ret
080dde0e +0x957:  push   %ebp
080dde0f +0x958:  mov    %esp,%ebp
080dde11 +0x95a:  push   %ebx
080dde12 +0x95b:  sub    $0x14,%esp
080dde15 +0x95e:  mov    0xc(%ebp),%eax
080dde18 +0x961:  mov    %eax,(%esp)
080dde1b +0x964:  call   080dda2f <+0x578>
080dde20 +0x969:  mov    %eax,%ebx
080dde22 +0x96b:  mov    0x8(%ebp),%eax
080dde25 +0x96e:  mov    %eax,(%esp)
080dde28 +0x971:  call   080dda2f <+0x578>
080dde2d +0x976:  mov    0x10(%ebp),%edx
080dde30 +0x979:  mov    %edx,0x8(%esp)
080dde34 +0x97d:  mov    %ebx,0x4(%esp)
080dde38 +0x981:  mov    %eax,(%esp)
080dde3b +0x984:  call   080ddfba <+0xb03>
080dde40 +0x989:  add    $0x14,%esp
080dde43 +0x98c:  pop    %ebx
080dde44 +0x98d:  pop    %ebp
080dde45 +0x98e:  ret
080dde46 +0x98f:  push   %ebp
080dde47 +0x990:  mov    %esp,%ebp
080dde49 +0x992:  push   %ebx
080dde4a +0x993:  sub    $0x24,%esp
080dde4d +0x996:  mov    0x8(%ebp),%eax
080dde50 +0x999:  mov    %eax,(%esp)
080dde53 +0x99c:  call   080ddffe <+0xb47>
080dde58 +0x9a1:  mov    %eax,%ebx
080dde5a +0x9a3:  mov    0x8(%ebp),%eax
080dde5d +0x9a6:  mov    %eax,(%esp)
080dde60 +0x9a9:  call   080dd814 <+0x35d>
080dde65 +0x9ae:  mov    %ebx,%edx
080dde67 +0x9b0:  sub    %eax,%edx
080dde69 +0x9b2:  mov    0xc(%ebp),%eax
080dde6c +0x9b5:  cmp    %eax,%edx
080dde6e +0x9b7:  setb   %al
080dde71 +0x9ba:  test   %al,%al
080dde73 +0x9bc:  je     080dde80 <+0x9c9>
080dde75 +0x9be:  mov    0x10(%ebp),%eax
080dde78 +0x9c1:  mov    %eax,(%esp)
080dde7b +0x9c4:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
080dde80 +0x9c9:  mov    0x8(%ebp),%eax
080dde83 +0x9cc:  mov    %eax,(%esp)
080dde86 +0x9cf:  call   080dd814 <+0x35d>
080dde8b +0x9d4:  mov    %eax,%ebx
080dde8d +0x9d6:  mov    0x8(%ebp),%eax
080dde90 +0x9d9:  mov    %eax,(%esp)
080dde93 +0x9dc:  call   080dd814 <+0x35d>
080dde98 +0x9e1:  mov    %eax,-0x10(%ebp)
080dde9b +0x9e4:  lea    0xc(%ebp),%eax
080dde9e +0x9e7:  mov    %eax,0x4(%esp)
080ddea2 +0x9eb:  lea    -0x10(%ebp),%eax
080ddea5 +0x9ee:  mov    %eax,(%esp)
080ddea8 +0x9f1:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
080ddead +0x9f6:  mov    (%eax),%eax
080ddeaf +0x9f8:  lea    (%ebx,%eax,1),%eax
080ddeb2 +0x9fb:  mov    %eax,-0xc(%ebp)
080ddeb5 +0x9fe:  mov    0x8(%ebp),%eax
080ddeb8 +0xa01:  mov    %eax,(%esp)
080ddebb +0xa04:  call   080dd814 <+0x35d>
080ddec0 +0xa09:  cmp    -0xc(%ebp),%eax
080ddec3 +0xa0c:  ja     080dded5 <+0xa1e>
080ddec5 +0xa0e:  mov    0x8(%ebp),%eax
080ddec8 +0xa11:  mov    %eax,(%esp)
080ddecb +0xa14:  call   080ddffe <+0xb47>
080dded0 +0xa19:  cmp    -0xc(%ebp),%eax
080dded3 +0xa1c:  jae    080ddee2 <+0xa2b>
080dded5 +0xa1e:  mov    0x8(%ebp),%eax
080dded8 +0xa21:  mov    %eax,(%esp)
080ddedb +0xa24:  call   080ddffe <+0xb47>
080ddee0 +0xa29:  jmp    080ddee5 <+0xa2e>
080ddee2 +0xa2b:  mov    -0xc(%ebp),%eax
080ddee5 +0xa2e:  add    $0x24,%esp
080ddee8 +0xa31:  pop    %ebx
080ddee9 +0xa32:  pop    %ebp
080ddeea +0xa33:  ret
080ddeeb +0xa34:  nop
080ddeec +0xa35:  push   %ebp
080ddeed +0xa36:  mov    %esp,%ebp
080ddeef +0xa38:  sub    $0x18,%esp
080ddef2 +0xa3b:  mov    0xc(%ebp),%eax
080ddef5 +0xa3e:  mov    %eax,(%esp)
080ddef8 +0xa41:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
080ddefd +0xa46:  mov    (%eax),%edx
080ddeff +0xa48:  mov    0x8(%ebp),%eax
080ddf02 +0xa4b:  mov    %edx,(%eax)
080ddf04 +0xa4d:  mov    0xc(%ebp),%eax
080ddf07 +0xa50:  add    $0x4,%eax
080ddf0a +0xa53:  mov    %eax,(%esp)
080ddf0d +0xa56:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
080ddf12 +0xa5b:  mov    (%eax),%edx
080ddf14 +0xa5d:  mov    0x8(%ebp),%eax
080ddf17 +0xa60:  mov    %edx,0x4(%eax)
080ddf1a +0xa63:  leave
080ddf1b +0xa64:  ret
080ddf1c +0xa65:  push   %ebp
080ddf1d +0xa66:  mov    %esp,%ebp
080ddf1f +0xa68:  sub    $0x18,%esp
080ddf22 +0xa6b:  mov    0xc(%ebp),%eax
080ddf25 +0xa6e:  mov    %eax,(%esp)
080ddf28 +0xa71:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
080ddf2d +0xa76:  mov    (%eax),%edx
080ddf2f +0xa78:  mov    0x8(%ebp),%eax
080ddf32 +0xa7b:  mov    %edx,(%eax)
080ddf34 +0xa7d:  mov    0xc(%ebp),%eax
080ddf37 +0xa80:  add    $0x4,%eax
080ddf3a +0xa83:  mov    %eax,(%esp)
080ddf3d +0xa86:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
080ddf42 +0xa8b:  mov    (%eax),%edx
080ddf44 +0xa8d:  mov    0x8(%ebp),%eax
080ddf47 +0xa90:  mov    %edx,0x4(%eax)
080ddf4a +0xa93:  mov    0x8(%ebp),%eax
080ddf4d +0xa96:  leave
080ddf4e +0xa97:  ret
080ddf4f +0xa98:  nop
080ddf50 +0xa99:  push   %ebp
080ddf51 +0xa9a:  mov    %esp,%ebp
080ddf53 +0xa9c:  pop    %ebp
080ddf54 +0xa9d:  ret
080ddf55 +0xa9e:  nop
080ddf56 +0xa9f:  push   %ebp
080ddf57 +0xaa0:  mov    %esp,%ebp
080ddf59 +0xaa2:  sub    $0x18,%esp
080ddf5c +0xaa5:  mov    0xc(%ebp),%eax
080ddf5f +0xaa8:  mov    %eax,(%esp)
080ddf62 +0xaab:  call   080ddf50 <+0xa99>
080ddf67 +0xab0:  leave
080ddf68 +0xab1:  ret
080ddf69 +0xab2:  nop
080ddf6a +0xab3:  push   %ebp
080ddf6b +0xab4:  mov    %esp,%ebp
080ddf6d +0xab6:  mov    $0x1fffffff,%eax
080ddf72 +0xabb:  pop    %ebp
080ddf73 +0xabc:  ret
080ddf74 +0xabd:  push   %ebp
080ddf75 +0xabe:  mov    %esp,%ebp
080ddf77 +0xac0:  push   %ebx
080ddf78 +0xac1:  sub    $0x14,%esp
080ddf7b +0xac4:  mov    0x8(%ebp),%ebx
080ddf7e +0xac7:  mov    0xc(%ebp),%eax
080ddf81 +0xaca:  mov    (%eax),%eax
080ddf83 +0xacc:  mov    %eax,0x4(%esp)
080ddf87 +0xad0:  mov    %ebx,(%esp)
080ddf8a +0xad3:  call   080de01a <+0xb63>
080ddf8f +0xad8:  mov    %ebx,%eax
080ddf91 +0xada:  add    $0x14,%esp
080ddf94 +0xadd:  pop    %ebx
080ddf95 +0xade:  pop    %ebp
080ddf96 +0xadf:  ret    $0x4
080ddf99 +0xae2:  push   %ebp
080ddf9a +0xae3:  mov    %esp,%ebp
080ddf9c +0xae5:  sub    $0x18,%esp
080ddf9f +0xae8:  mov    0x10(%ebp),%eax
080ddfa2 +0xaeb:  mov    %eax,0x8(%esp)
080ddfa6 +0xaef:  mov    0xc(%ebp),%eax
080ddfa9 +0xaf2:  mov    %eax,0x4(%esp)
080ddfad +0xaf6:  mov    0x8(%ebp),%eax
080ddfb0 +0xaf9:  mov    %eax,(%esp)
080ddfb3 +0xafc:  call   080de027 <+0xb70>
080ddfb8 +0xb01:  leave
080ddfb9 +0xb02:  ret
080ddfba +0xb03:  push   %ebp
080ddfbb +0xb04:  mov    %esp,%ebp
080ddfbd +0xb06:  push   %esi
080ddfbe +0xb07:  push   %ebx
080ddfbf +0xb08:  sub    $0x10,%esp
080ddfc2 +0xb0b:  mov    0x10(%ebp),%eax
080ddfc5 +0xb0e:  mov    %eax,(%esp)
080ddfc8 +0xb11:  call   080ddd82 <+0x8cb>
080ddfcd +0xb16:  mov    %eax,%esi
080ddfcf +0xb18:  mov    0xc(%ebp),%eax
080ddfd2 +0xb1b:  mov    %eax,(%esp)
080ddfd5 +0xb1e:  call   080ddd82 <+0x8cb>
080ddfda +0xb23:  mov    %eax,%ebx
080ddfdc +0xb25:  mov    0x8(%ebp),%eax
080ddfdf +0xb28:  mov    %eax,(%esp)
080ddfe2 +0xb2b:  call   080ddd82 <+0x8cb>
080ddfe7 +0xb30:  mov    %esi,0x8(%esp)
080ddfeb +0xb34:  mov    %ebx,0x4(%esp)
080ddfef +0xb38:  mov    %eax,(%esp)
080ddff2 +0xb3b:  call   080de048 <+0xb91>
080ddff7 +0xb40:  add    $0x10,%esp
080ddffa +0xb43:  pop    %ebx
080ddffb +0xb44:  pop    %esi
080ddffc +0xb45:  pop    %ebp
080ddffd +0xb46:  ret
080ddffe +0xb47:  push   %ebp
080ddfff +0xb48:  mov    %esp,%ebp
080de001 +0xb4a:  sub    $0x18,%esp
080de004 +0xb4d:  mov    0x8(%ebp),%eax
080de007 +0xb50:  mov    %eax,(%esp)
080de00a +0xb53:  call   080de06e <+0xbb7>
080de00f +0xb58:  mov    %eax,(%esp)
080de012 +0xb5b:  call   080ddf6a <+0xab3>
080de017 +0xb60:  leave
080de018 +0xb61:  ret
080de019 +0xb62:  nop
080de01a +0xb63:  push   %ebp
080de01b +0xb64:  mov    %esp,%ebp
080de01d +0xb66:  mov    0x8(%ebp),%eax
080de020 +0xb69:  mov    0xc(%ebp),%edx
080de023 +0xb6c:  mov    %edx,(%eax)
080de025 +0xb6e:  pop    %ebp
080de026 +0xb6f:  ret
080de027 +0xb70:  push   %ebp
080de028 +0xb71:  mov    %esp,%ebp
080de02a +0xb73:  sub    $0x18,%esp
080de02d +0xb76:  mov    0x10(%ebp),%eax
080de030 +0xb79:  mov    %eax,0x8(%esp)
080de034 +0xb7d:  mov    0xc(%ebp),%eax
080de037 +0xb80:  mov    %eax,0x4(%esp)
080de03b +0xb84:  mov    0x8(%ebp),%eax
080de03e +0xb87:  mov    %eax,(%esp)
080de041 +0xb8a:  call   080de076 <+0xbbf>
080de046 +0xb8f:  leave
080de047 +0xb90:  ret
080de048 +0xb91:  push   %ebp
080de049 +0xb92:  mov    %esp,%ebp
080de04b +0xb94:  sub    $0x28,%esp
080de04e +0xb97:  movb   $0x0,-0x9(%ebp)
080de052 +0xb9b:  mov    0x10(%ebp),%eax
080de055 +0xb9e:  mov    %eax,0x8(%esp)
080de059 +0xba2:  mov    0xc(%ebp),%eax
080de05c +0xba5:  mov    %eax,0x4(%esp)
080de060 +0xba9:  mov    0x8(%ebp),%eax
080de063 +0xbac:  mov    %eax,(%esp)
080de066 +0xbaf:  call   080de11b <+0xc64>
080de06b +0xbb4:  leave
080de06c +0xbb5:  ret
080de06d +0xbb6:  nop
080de06e +0xbb7:  push   %ebp
080de06f +0xbb8:  mov    %esp,%ebp
080de071 +0xbba:  mov    0x8(%ebp),%eax
080de074 +0xbbd:  pop    %ebp
080de075 +0xbbe:  ret
080de076 +0xbbf:  push   %ebp
080de077 +0xbc0:  mov    %esp,%ebp
080de079 +0xbc2:  push   %esi
080de07a +0xbc3:  push   %ebx
080de07b +0xbc4:  sub    $0x20,%esp
080de07e +0xbc7:  mov    0x10(%ebp),%eax
080de081 +0xbca:  mov    %eax,-0xc(%ebp)
080de084 +0xbcd:  jmp    080de0c7 <+0xc10>
080de086 +0xbcf:  lea    0x8(%ebp),%eax
080de089 +0xbd2:  mov    %eax,(%esp)
080de08c +0xbd5:  call   080de19e <+0xce7>
080de091 +0xbda:  mov    %eax,%ebx
080de093 +0xbdc:  mov    -0xc(%ebp),%eax
080de096 +0xbdf:  mov    %eax,0x4(%esp)
080de09a +0xbe3:  movl   $0x8,(%esp)
080de0a1 +0xbea:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080de0a6 +0xbef:  mov    %eax,%edx
080de0a8 +0xbf1:  test   %edx,%edx
080de0aa +0xbf3:  je     080de0b8 <+0xc01>
080de0ac +0xbf5:  mov    %ebx,0x4(%esp)
080de0b0 +0xbf9:  mov    %eax,(%esp)
080de0b3 +0xbfc:  call   080ddeec <+0xa35>
080de0b8 +0xc01:  lea    0x8(%ebp),%eax
080de0bb +0xc04:  mov    %eax,(%esp)
080de0be +0xc07:  call   080de188 <+0xcd1>
080de0c3 +0xc0c:  addl   $0x8,-0xc(%ebp)
080de0c7 +0xc10:  lea    0xc(%ebp),%eax
080de0ca +0xc13:  mov    %eax,0x4(%esp)
080de0ce +0xc17:  lea    0x8(%ebp),%eax
080de0d1 +0xc1a:  mov    %eax,(%esp)
080de0d4 +0xc1d:  call   080de16b <+0xcb4>
080de0d9 +0xc22:  test   %al,%al
080de0db +0xc24:  jne    080de086 <+0xbcf>
080de0dd +0xc26:  mov    -0xc(%ebp),%eax
080de0e0 +0xc29:  add    $0x20,%esp
080de0e3 +0xc2c:  pop    %ebx
080de0e4 +0xc2d:  pop    %esi
080de0e5 +0xc2e:  pop    %ebp
080de0e6 +0xc2f:  ret
080de0e7 +0xc30:  mov    %eax,(%esp)
080de0ea +0xc33:  call   08725ce0 <__cxa_begin_catch>
080de0ef +0xc38:  mov    -0xc(%ebp),%eax
080de0f2 +0xc3b:  mov    %eax,0x4(%esp)
080de0f6 +0xc3f:  mov    0x10(%ebp),%eax
080de0f9 +0xc42:  mov    %eax,(%esp)
080de0fc +0xc45:  call   080dd9d2 <+0x51b>
080de101 +0xc4a:  call   08724be0 <__cxa_rethrow>
080de106 +0xc4f:  mov    %edx,%ebx
080de108 +0xc51:  mov    %eax,%esi
080de10a +0xc53:  call   08725c30 <__cxa_end_catch>
080de10f +0xc58:  mov    %esi,%eax
080de111 +0xc5a:  mov    %ebx,%edx
080de113 +0xc5c:  mov    %eax,(%esp)
080de116 +0xc5f:  call   08ae3750 <_Unwind_Resume>
080de11b +0xc64:  push   %ebp
080de11c +0xc65:  mov    %esp,%ebp
080de11e +0xc67:  sub    $0x28,%esp
080de121 +0xc6a:  mov    0xc(%ebp),%edx
080de124 +0xc6d:  mov    0x8(%ebp),%eax
080de127 +0xc70:  mov    %edx,%ecx
080de129 +0xc72:  sub    %eax,%ecx
080de12b +0xc74:  mov    %ecx,%eax
080de12d +0xc76:  sar    $0x3,%eax
080de130 +0xc79:  mov    %eax,-0xc(%ebp)
080de133 +0xc7c:  jmp    080de15b <+0xca4>
080de135 +0xc7e:  subl   $0x8,0xc(%ebp)
080de139 +0xc82:  mov    0xc(%ebp),%eax
080de13c +0xc85:  mov    %eax,(%esp)
080de13f +0xc88:  call   080dd870 <+0x3b9>
080de144 +0xc8d:  subl   $0x8,0x10(%ebp)
080de148 +0xc91:  mov    %eax,0x4(%esp)
080de14c +0xc95:  mov    0x10(%ebp),%eax
080de14f +0xc98:  mov    %eax,(%esp)
080de152 +0xc9b:  call   080ddf1c <+0xa65>
080de157 +0xca0:  subl   $0x1,-0xc(%ebp)
080de15b +0xca4:  cmpl   $0x0,-0xc(%ebp)
080de15f +0xca8:  setg   %al
080de162 +0xcab:  test   %al,%al
080de164 +0xcad:  jne    080de135 <+0xc7e>
080de166 +0xcaf:  mov    0x10(%ebp),%eax
080de169 +0xcb2:  leave
080de16a +0xcb3:  ret
080de16b +0xcb4:  push   %ebp
080de16c +0xcb5:  mov    %esp,%ebp
080de16e +0xcb7:  sub    $0x18,%esp
080de171 +0xcba:  mov    0xc(%ebp),%eax
080de174 +0xcbd:  mov    %eax,0x4(%esp)
080de178 +0xcc1:  mov    0x8(%ebp),%eax
080de17b +0xcc4:  mov    %eax,(%esp)
080de17e +0xcc7:  call   080de1a8 <+0xcf1>
080de183 +0xccc:  xor    $0x1,%eax
080de186 +0xccf:  leave
080de187 +0xcd0:  ret
080de188 +0xcd1:  push   %ebp
080de189 +0xcd2:  mov    %esp,%ebp
080de18b +0xcd4:  mov    0x8(%ebp),%eax
080de18e +0xcd7:  mov    (%eax),%eax
080de190 +0xcd9:  lea    0x8(%eax),%edx
080de193 +0xcdc:  mov    0x8(%ebp),%eax
080de196 +0xcdf:  mov    %edx,(%eax)
080de198 +0xce1:  mov    0x8(%ebp),%eax
080de19b +0xce4:  pop    %ebp
080de19c +0xce5:  ret
080de19d +0xce6:  nop
080de19e +0xce7:  push   %ebp
080de19f +0xce8:  mov    %esp,%ebp
080de1a1 +0xcea:  mov    0x8(%ebp),%eax
080de1a4 +0xced:  mov    (%eax),%eax
080de1a6 +0xcef:  pop    %ebp
080de1a7 +0xcf0:  ret
080de1a8 +0xcf1:  push   %ebp
080de1a9 +0xcf2:  mov    %esp,%ebp
080de1ab +0xcf4:  push   %ebx
080de1ac +0xcf5:  sub    $0x14,%esp
080de1af +0xcf8:  mov    0x8(%ebp),%eax
080de1b2 +0xcfb:  mov    %eax,(%esp)
080de1b5 +0xcfe:  call   080de1d2 <+0xd1b>
080de1ba +0xd03:  mov    %eax,%ebx
080de1bc +0xd05:  mov    0xc(%ebp),%eax
080de1bf +0xd08:  mov    %eax,(%esp)
080de1c2 +0xd0b:  call   080de1d2 <+0xd1b>
080de1c7 +0xd10:  cmp    %eax,%ebx
080de1c9 +0xd12:  sete   %al
080de1cc +0xd15:  add    $0x14,%esp
080de1cf +0xd18:  pop    %ebx
080de1d0 +0xd19:  pop    %ebp
080de1d1 +0xd1a:  ret
080de1d2 +0xd1b:  push   %ebp
080de1d3 +0xd1c:  mov    %esp,%ebp
080de1d5 +0xd1e:  mov    0x8(%ebp),%eax
080de1d8 +0xd21:  mov    (%eax),%eax
080de1da +0xd23:  pop    %ebp
080de1db +0xd24:  ret
080de1dc +0xd25:  push   %ebp
080de1dd +0xd26:  mov    %esp,%ebp
080de1df +0xd28:  sub    $0x18,%esp
080de1e2 +0xd2b:  mov    0x8(%ebp),%eax
080de1e5 +0xd2e:  movl   $&_ZTV12CBoosterGage+0x8,(%eax)
080de1eb +0xd34:  mov    0x8(%ebp),%eax
080de1ee +0xd37:  mov    %eax,(%esp)
080de1f1 +0xd3a:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
080de1f6 +0xd3f:  mov    $0x0,%eax
080de1fb +0xd44:  test   %al,%al
080de1fd +0xd46:  je     080de20a <+0xd53>
080de1ff +0xd48:  mov    0x8(%ebp),%eax
080de202 +0xd4b:  mov    %eax,(%esp)
080de205 +0xd4e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080de20a +0xd53:  leave
080de20b +0xd54:  ret
080de20c +0xd55:  push   %ebp
080de20d +0xd56:  mov    %esp,%ebp
080de20f +0xd58:  sub    $0x18,%esp
080de212 +0xd5b:  mov    0x8(%ebp),%eax
080de215 +0xd5e:  mov    %eax,(%esp)
080de218 +0xd61:  call   080de1dc <+0xd25>
080de21d +0xd66:  mov    0x8(%ebp),%eax
080de220 +0xd69:  mov    %eax,(%esp)
080de223 +0xd6c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080de228 +0xd71:  leave
080de229 +0xd72:  ret
080de22a +0xd73:  nop
080de22b +0xd74:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80dd4b7

/* CBoosterGage::inc_total_gage(int) */

void CBoosterGage::_GLOBAL__I_inc_total_gage(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
