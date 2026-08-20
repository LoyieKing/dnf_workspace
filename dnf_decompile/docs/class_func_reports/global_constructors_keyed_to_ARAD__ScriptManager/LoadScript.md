# LoadScript

`_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv`

`global constructors keyed to ARAD::ScriptManager::LoadScript()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::ScriptManager` | `0x081a153a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a153a  _GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv
#           global constructors keyed to ARAD::ScriptManager::LoadScript()
# range [0x081a153a, 0x081a1ed7]
081a153a +0x000:  push   %ebp
081a153b +0x001:  mov    %esp,%ebp
081a153d +0x003:  sub    $0x18,%esp
081a1540 +0x006:  movl   $0xffff,0x4(%esp)
081a1548 +0x00e:  movl   $0x1,(%esp)
081a154f +0x015:  call   081a14fa <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081a1554 +0x01a:  leave
081a1555 +0x01b:  ret
081a1556 +0x01c:  push   %ebp
081a1557 +0x01d:  mov    %esp,%ebp
081a1559 +0x01f:  push   %ebx
081a155a +0x020:  sub    $0x14,%esp
081a155d +0x023:  mov    0x8(%ebp),%ebx
081a1560 +0x026:  mov    0xc(%ebp),%eax
081a1563 +0x029:  mov    %eax,0x4(%esp)
081a1567 +0x02d:  mov    %ebx,(%esp)
081a156a +0x030:  call   081a171c <+0x1e2>
081a156f +0x035:  sub    $0x4,%esp
081a1572 +0x038:  mov    %ebx,%eax
081a1574 +0x03a:  mov    -0x4(%ebp),%ebx
081a1577 +0x03d:  leave
081a1578 +0x03e:  ret    $0x4
081a157b +0x041:  nop
081a157c +0x042:  push   %ebp
081a157d +0x043:  mov    %esp,%ebp
081a157f +0x045:  push   %ebx
081a1580 +0x046:  sub    $0x14,%esp
081a1583 +0x049:  mov    0x8(%ebp),%ebx
081a1586 +0x04c:  mov    0xc(%ebp),%eax
081a1589 +0x04f:  mov    %eax,0x4(%esp)
081a158d +0x053:  mov    %ebx,(%esp)
081a1590 +0x056:  call   081a1742 <+0x208>
081a1595 +0x05b:  sub    $0x4,%esp
081a1598 +0x05e:  mov    %ebx,%eax
081a159a +0x060:  mov    -0x4(%ebp),%ebx
081a159d +0x063:  leave
081a159e +0x064:  ret    $0x4
081a15a1 +0x067:  nop
081a15a2 +0x068:  push   %ebp
081a15a3 +0x069:  mov    %esp,%ebp
081a15a5 +0x06b:  mov    0x8(%ebp),%eax
081a15a8 +0x06e:  mov    (%eax),%edx
081a15aa +0x070:  mov    0xc(%ebp),%eax
081a15ad +0x073:  mov    (%eax),%eax
081a15af +0x075:  cmp    %eax,%edx
081a15b1 +0x077:  setne  %al
081a15b4 +0x07a:  pop    %ebp
081a15b5 +0x07b:  ret
081a15b6 +0x07c:  push   %ebp
081a15b7 +0x07d:  mov    %esp,%ebp
081a15b9 +0x07f:  mov    0x8(%ebp),%eax
081a15bc +0x082:  mov    (%eax),%eax
081a15be +0x084:  add    $0x10,%eax
081a15c1 +0x087:  pop    %ebp
081a15c2 +0x088:  ret
081a15c3 +0x089:  nop
081a15c4 +0x08a:  push   %ebp
081a15c5 +0x08b:  mov    %esp,%ebp
081a15c7 +0x08d:  sub    $0x18,%esp
081a15ca +0x090:  mov    0x8(%ebp),%eax
081a15cd +0x093:  mov    (%eax),%eax
081a15cf +0x095:  mov    %eax,(%esp)
081a15d2 +0x098:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
081a15d7 +0x09d:  mov    0x8(%ebp),%edx
081a15da +0x0a0:  mov    %eax,(%edx)
081a15dc +0x0a2:  mov    0x8(%ebp),%eax
081a15df +0x0a5:  leave
081a15e0 +0x0a6:  ret
081a15e1 +0x0a7:  nop
081a15e2 +0x0a8:  push   %ebp
081a15e3 +0x0a9:  mov    %esp,%ebp
081a15e5 +0x0ab:  push   %ebx
081a15e6 +0x0ac:  sub    $0x24,%esp
081a15e9 +0x0af:  mov    0x8(%ebp),%ebx
081a15ec +0x0b2:  mov    0xc(%ebp),%edx
081a15ef +0x0b5:  lea    -0xc(%ebp),%eax
081a15f2 +0x0b8:  mov    0x10(%ebp),%ecx
081a15f5 +0x0bb:  mov    %ecx,0x8(%esp)
081a15f9 +0x0bf:  mov    %edx,0x4(%esp)
081a15fd +0x0c3:  mov    %eax,(%esp)
081a1600 +0x0c6:  call   081a1768 <+0x22e>
081a1605 +0x0cb:  sub    $0x4,%esp
081a1608 +0x0ce:  lea    -0xc(%ebp),%eax
081a160b +0x0d1:  mov    %eax,0x4(%esp)
081a160f +0x0d5:  mov    %ebx,(%esp)
081a1612 +0x0d8:  call   081a1826 <+0x2ec>
081a1617 +0x0dd:  mov    %ebx,%eax
081a1619 +0x0df:  mov    -0x4(%ebp),%ebx
081a161c +0x0e2:  leave
081a161d +0x0e3:  ret    $0x4
081a1620 +0x0e6:  push   %ebp
081a1621 +0x0e7:  mov    %esp,%ebp
081a1623 +0x0e9:  mov    0x8(%ebp),%eax
081a1626 +0x0ec:  mov    (%eax),%edx
081a1628 +0x0ee:  mov    0xc(%ebp),%eax
081a162b +0x0f1:  mov    (%eax),%eax
081a162d +0x0f3:  cmp    %eax,%edx
081a162f +0x0f5:  sete   %al
081a1632 +0x0f8:  pop    %ebp
081a1633 +0x0f9:  ret
081a1634 +0x0fa:  push   %ebp
081a1635 +0x0fb:  mov    %esp,%ebp
081a1637 +0x0fd:  push   %ebx
081a1638 +0x0fe:  sub    $0x24,%esp
081a163b +0x101:  mov    0x8(%ebp),%ebx
081a163e +0x104:  mov    0xc(%ebp),%edx
081a1641 +0x107:  lea    -0x10(%ebp),%eax
081a1644 +0x10a:  mov    0x10(%ebp),%ecx
081a1647 +0x10d:  mov    %ecx,0x8(%esp)
081a164b +0x111:  mov    %edx,0x4(%esp)
081a164f +0x115:  mov    %eax,(%esp)
081a1652 +0x118:  call   081a1836 <+0x2fc>
081a1657 +0x11d:  sub    $0x4,%esp
081a165a +0x120:  lea    -0x10(%ebp),%eax
081a165d +0x123:  add    $0x4,%eax
081a1660 +0x126:  mov    %eax,0x8(%esp)
081a1664 +0x12a:  lea    -0x10(%ebp),%eax
081a1667 +0x12d:  mov    %eax,0x4(%esp)
081a166b +0x131:  mov    %ebx,(%esp)
081a166e +0x134:  call   081a1a06 <+0x4cc>
081a1673 +0x139:  mov    %ebx,%eax
081a1675 +0x13b:  mov    -0x4(%ebp),%ebx
081a1678 +0x13e:  leave
081a1679 +0x13f:  ret    $0x4
081a167c +0x142:  push   %ebp
081a167d +0x143:  mov    %esp,%ebp
081a167f +0x145:  push   %edi
081a1680 +0x146:  push   %esi
081a1681 +0x147:  push   %ebx
081a1682 +0x148:  sub    $0x1c,%esp
081a1685 +0x14b:  mov    $&_ZGVZN4ARAD9SingletonI28LevelupSupport2ndEventMangerE3GetEvE3obj,%eax
081a168a +0x150:  movzbl (%eax),%eax
081a168d +0x153:  test   %al,%al
081a168f +0x155:  jne    081a1702 <+0x1c8>
081a1691 +0x157:  movl   $&_ZGVZN4ARAD9SingletonI28LevelupSupport2ndEventMangerE3GetEvE3obj,(%esp)
081a1698 +0x15e:  call   08725330 <__cxa_guard_acquire>
081a169d +0x163:  test   %eax,%eax
081a169f +0x165:  setne  %al
081a16a2 +0x168:  test   %al,%al
081a16a4 +0x16a:  je     081a1702 <+0x1c8>
081a16a6 +0x16c:  mov    $0x0,%ebx
081a16ab +0x171:  movl   $&_ZZN4ARAD9SingletonI28LevelupSupport2ndEventMangerE3GetEvE3obj,(%esp)
081a16b2 +0x178:  call   0814778e <_ZN28LevelupSupport2ndEventMangerC1Ev>  ; LevelupSupport2ndEventManger::LevelupSupport2ndEventManger()
081a16b7 +0x17d:  movl   $&_ZGVZN4ARAD9SingletonI28LevelupSupport2ndEventMangerE3GetEvE3obj,(%esp)
081a16be +0x184:  call   08725250 <__cxa_guard_release>
081a16c3 +0x189:  mov    $&_ZN28LevelupSupport2ndEventMangerD1Ev,%eax
081a16c8 +0x18e:  movl   $&__dso_handle,0x8(%esp)
081a16d0 +0x196:  movl   $&_ZZN4ARAD9SingletonI28LevelupSupport2ndEventMangerE3GetEvE3obj,0x4(%esp)
081a16d8 +0x19e:  mov    %eax,(%esp)
081a16db +0x1a1:  call   0807ddd0 <_init+0x6c8>
081a16e0 +0x1a6:  jmp    081a1702 <+0x1c8>
081a16e2 +0x1a8:  mov    %edx,%esi
081a16e4 +0x1aa:  mov    %eax,%edi
081a16e6 +0x1ac:  test   %bl,%bl
081a16e8 +0x1ae:  jne    081a16f6 <+0x1bc>
081a16ea +0x1b0:  movl   $&_ZGVZN4ARAD9SingletonI28LevelupSupport2ndEventMangerE3GetEvE3obj,(%esp)
081a16f1 +0x1b7:  call   087252c0 <__cxa_guard_abort>
081a16f6 +0x1bc:  mov    %edi,%eax
081a16f8 +0x1be:  mov    %esi,%edx
081a16fa +0x1c0:  mov    %eax,(%esp)
081a16fd +0x1c3:  call   08ae3750 <_Unwind_Resume>
081a1702 +0x1c8:  mov    $&_ZZN4ARAD9SingletonI28LevelupSupport2ndEventMangerE3GetEvE3obj,%eax
081a1707 +0x1cd:  add    $0x1c,%esp
081a170a +0x1d0:  pop    %ebx
081a170b +0x1d1:  pop    %esi
081a170c +0x1d2:  pop    %edi
081a170d +0x1d3:  pop    %ebp
081a170e +0x1d4:  ret
081a170f +0x1d5:  nop
081a1710 +0x1d6:  push   %ebp
081a1711 +0x1d7:  mov    %esp,%ebp
081a1713 +0x1d9:  mov    0x8(%ebp),%eax
081a1716 +0x1dc:  mov    0x8(%eax),%eax
081a1719 +0x1df:  pop    %ebp
081a171a +0x1e0:  ret
081a171b +0x1e1:  nop
081a171c +0x1e2:  push   %ebp
081a171d +0x1e3:  mov    %esp,%ebp
081a171f +0x1e5:  push   %ebx
081a1720 +0x1e6:  sub    $0x14,%esp
081a1723 +0x1e9:  mov    0x8(%ebp),%ebx
081a1726 +0x1ec:  mov    0xc(%ebp),%eax
081a1729 +0x1ef:  mov    0xc(%eax),%eax
081a172c +0x1f2:  mov    %eax,0x4(%esp)
081a1730 +0x1f6:  mov    %ebx,(%esp)
081a1733 +0x1f9:  call   081a1a52 <+0x518>
081a1738 +0x1fe:  mov    %ebx,%eax
081a173a +0x200:  add    $0x14,%esp
081a173d +0x203:  pop    %ebx
081a173e +0x204:  pop    %ebp
081a173f +0x205:  ret    $0x4
081a1742 +0x208:  push   %ebp
081a1743 +0x209:  mov    %esp,%ebp
081a1745 +0x20b:  push   %ebx
081a1746 +0x20c:  sub    $0x14,%esp
081a1749 +0x20f:  mov    0x8(%ebp),%ebx
081a174c +0x212:  mov    0xc(%ebp),%eax
081a174f +0x215:  add    $0x4,%eax
081a1752 +0x218:  mov    %eax,0x4(%esp)
081a1756 +0x21c:  mov    %ebx,(%esp)
081a1759 +0x21f:  call   081a1a52 <+0x518>
081a175e +0x224:  mov    %ebx,%eax
081a1760 +0x226:  add    $0x14,%esp
081a1763 +0x229:  pop    %ebx
081a1764 +0x22a:  pop    %ebp
081a1765 +0x22b:  ret    $0x4
081a1768 +0x22e:  push   %ebp
081a1769 +0x22f:  mov    %esp,%ebp
081a176b +0x231:  push   %esi
081a176c +0x232:  push   %ebx
081a176d +0x233:  sub    $0x30,%esp
081a1770 +0x236:  mov    0x8(%ebp),%ebx
081a1773 +0x239:  mov    0xc(%ebp),%eax
081a1776 +0x23c:  mov    %eax,(%esp)
081a1779 +0x23f:  call   081a1a60 <+0x526>
081a177e +0x244:  mov    %eax,%esi
081a1780 +0x246:  mov    0xc(%ebp),%eax
081a1783 +0x249:  mov    %eax,(%esp)
081a1786 +0x24c:  call   081a1710 <+0x1d6>
081a178b +0x251:  lea    -0x10(%ebp),%edx
081a178e +0x254:  mov    0x10(%ebp),%ecx
081a1791 +0x257:  mov    %ecx,0x10(%esp)
081a1795 +0x25b:  mov    %esi,0xc(%esp)
081a1799 +0x25f:  mov    %eax,0x8(%esp)
081a179d +0x263:  mov    0xc(%ebp),%eax
081a17a0 +0x266:  mov    %eax,0x4(%esp)
081a17a4 +0x26a:  mov    %edx,(%esp)
081a17a7 +0x26d:  call   081a1a6c <+0x532>
081a17ac +0x272:  sub    $0x4,%esp
081a17af +0x275:  lea    -0xc(%ebp),%eax
081a17b2 +0x278:  mov    0xc(%ebp),%edx
081a17b5 +0x27b:  mov    %edx,0x4(%esp)
081a17b9 +0x27f:  mov    %eax,(%esp)
081a17bc +0x282:  call   081a1ae8 <+0x5ae>
081a17c1 +0x287:  sub    $0x4,%esp
081a17c4 +0x28a:  lea    -0xc(%ebp),%eax
081a17c7 +0x28d:  mov    %eax,0x4(%esp)
081a17cb +0x291:  lea    -0x10(%ebp),%eax
081a17ce +0x294:  mov    %eax,(%esp)
081a17d1 +0x297:  call   081a1b44 <+0x60a>
081a17d6 +0x29c:  test   %al,%al
081a17d8 +0x29e:  jne    081a17ff <+0x2c5>
081a17da +0x2a0:  mov    -0x10(%ebp),%eax
081a17dd +0x2a3:  mov    %eax,(%esp)
081a17e0 +0x2a6:  call   081a1b0e <+0x5d4>
081a17e5 +0x2ab:  mov    0xc(%ebp),%edx
081a17e8 +0x2ae:  mov    %eax,0x8(%esp)
081a17ec +0x2b2:  mov    0x10(%ebp),%eax
081a17ef +0x2b5:  mov    %eax,0x4(%esp)
081a17f3 +0x2b9:  mov    %edx,(%esp)
081a17f6 +0x2bc:  call   081a1b30 <+0x5f6>
081a17fb +0x2c1:  test   %al,%al
081a17fd +0x2c3:  je     081a1813 <+0x2d9>
081a17ff +0x2c5:  mov    0xc(%ebp),%eax
081a1802 +0x2c8:  mov    %eax,0x4(%esp)
081a1806 +0x2cc:  mov    %ebx,(%esp)
081a1809 +0x2cf:  call   081a1ae8 <+0x5ae>
081a180e +0x2d4:  sub    $0x4,%esp
081a1811 +0x2d7:  jmp    081a1818 <+0x2de>
081a1813 +0x2d9:  mov    -0x10(%ebp),%eax
081a1816 +0x2dc:  mov    %eax,(%ebx)
081a1818 +0x2de:  mov    %ebx,%eax
081a181a +0x2e0:  lea    -0x8(%ebp),%esp
081a181d +0x2e3:  add    $0x0,%esp
081a1820 +0x2e6:  pop    %ebx
081a1821 +0x2e7:  pop    %esi
081a1822 +0x2e8:  pop    %ebp
081a1823 +0x2e9:  ret    $0x4
081a1826 +0x2ec:  push   %ebp
081a1827 +0x2ed:  mov    %esp,%ebp
081a1829 +0x2ef:  mov    0xc(%ebp),%eax
081a182c +0x2f2:  mov    (%eax),%edx
081a182e +0x2f4:  mov    0x8(%ebp),%eax
081a1831 +0x2f7:  mov    %edx,(%eax)
081a1833 +0x2f9:  pop    %ebp
081a1834 +0x2fa:  ret
081a1835 +0x2fb:  nop
081a1836 +0x2fc:  push   %ebp
081a1837 +0x2fd:  mov    %esp,%ebp
081a1839 +0x2ff:  push   %esi
081a183a +0x300:  push   %ebx
081a183b +0x301:  sub    $0x50,%esp
081a183e +0x304:  mov    0x8(%ebp),%ebx
081a1841 +0x307:  mov    0xc(%ebp),%eax
081a1844 +0x30a:  mov    %eax,(%esp)
081a1847 +0x30d:  call   081a1710 <+0x1d6>
081a184c +0x312:  mov    %eax,-0x14(%ebp)
081a184f +0x315:  mov    0xc(%ebp),%eax
081a1852 +0x318:  mov    %eax,(%esp)
081a1855 +0x31b:  call   081a1a60 <+0x526>
081a185a +0x320:  mov    %eax,-0x10(%ebp)
081a185d +0x323:  movb   $0x1,-0x9(%ebp)
081a1861 +0x327:  jmp    081a18bf <+0x385>
081a1863 +0x329:  mov    -0x14(%ebp),%eax
081a1866 +0x32c:  mov    %eax,-0x10(%ebp)
081a1869 +0x32f:  mov    -0x14(%ebp),%eax
081a186c +0x332:  mov    %eax,(%esp)
081a186f +0x335:  call   081a1b60 <+0x626>
081a1874 +0x33a:  mov    %eax,%esi
081a1876 +0x33c:  mov    0x10(%ebp),%eax
081a1879 +0x33f:  mov    %eax,0x4(%esp)
081a187d +0x343:  lea    -0x2d(%ebp),%eax
081a1880 +0x346:  mov    %eax,(%esp)
081a1883 +0x349:  call   081a1b58 <+0x61e>
081a1888 +0x34e:  mov    0xc(%ebp),%edx
081a188b +0x351:  mov    %esi,0x8(%esp)
081a188f +0x355:  mov    %eax,0x4(%esp)
081a1893 +0x359:  mov    %edx,(%esp)
081a1896 +0x35c:  call   081a1b30 <+0x5f6>
081a189b +0x361:  mov    %al,-0x9(%ebp)
081a189e +0x364:  cmpb   $0x0,-0x9(%ebp)
081a18a2 +0x368:  je     081a18b1 <+0x377>
081a18a4 +0x36a:  mov    -0x14(%ebp),%eax
081a18a7 +0x36d:  mov    %eax,(%esp)
081a18aa +0x370:  call   081a1a47 <+0x50d>
081a18af +0x375:  jmp    081a18bc <+0x382>
081a18b1 +0x377:  mov    -0x14(%ebp),%eax
081a18b4 +0x37a:  mov    %eax,(%esp)
081a18b7 +0x37d:  call   081a1a3c <+0x502>
081a18bc +0x382:  mov    %eax,-0x14(%ebp)
081a18bf +0x385:  cmpl   $0x0,-0x14(%ebp)
081a18c3 +0x389:  setne  %al
081a18c6 +0x38c:  test   %al,%al
081a18c8 +0x38e:  jne    081a1863 <+0x329>
081a18ca +0x390:  mov    -0x10(%ebp),%eax
081a18cd +0x393:  mov    %eax,0x4(%esp)
081a18d1 +0x397:  lea    -0x34(%ebp),%eax
081a18d4 +0x39a:  mov    %eax,(%esp)
081a18d7 +0x39d:  call   081a1b82 <+0x648>
081a18dc +0x3a2:  cmpb   $0x0,-0x9(%ebp)
081a18e0 +0x3a6:  je     081a1961 <+0x427>
081a18e2 +0x3a8:  lea    -0x2c(%ebp),%eax
081a18e5 +0x3ab:  mov    0xc(%ebp),%edx
081a18e8 +0x3ae:  mov    %edx,0x4(%esp)
081a18ec +0x3b2:  mov    %eax,(%esp)
081a18ef +0x3b5:  call   081a1b90 <+0x656>
081a18f4 +0x3ba:  sub    $0x4,%esp
081a18f7 +0x3bd:  lea    -0x2c(%ebp),%eax
081a18fa +0x3c0:  mov    %eax,0x4(%esp)
081a18fe +0x3c4:  lea    -0x34(%ebp),%eax
081a1901 +0x3c7:  mov    %eax,(%esp)
081a1904 +0x3ca:  call   081a1b44 <+0x60a>
081a1909 +0x3cf:  test   %al,%al
081a190b +0x3d1:  je     081a1956 <+0x41c>
081a190d +0x3d3:  movb   $0x1,-0x25(%ebp)
081a1911 +0x3d7:  mov    -0x10(%ebp),%ecx
081a1914 +0x3da:  mov    -0x14(%ebp),%edx
081a1917 +0x3dd:  lea    -0x24(%ebp),%eax
081a191a +0x3e0:  mov    0x10(%ebp),%esi
081a191d +0x3e3:  mov    %esi,0x10(%esp)
081a1921 +0x3e7:  mov    %ecx,0xc(%esp)
081a1925 +0x3eb:  mov    %edx,0x8(%esp)
081a1929 +0x3ef:  mov    0xc(%ebp),%edx
081a192c +0x3f2:  mov    %edx,0x4(%esp)
081a1930 +0x3f6:  mov    %eax,(%esp)
081a1933 +0x3f9:  call   081a1bb6 <+0x67c>
081a1938 +0x3fe:  sub    $0x4,%esp
081a193b +0x401:  lea    -0x25(%ebp),%eax
081a193e +0x404:  mov    %eax,0x8(%esp)
081a1942 +0x408:  lea    -0x24(%ebp),%eax
081a1945 +0x40b:  mov    %eax,0x4(%esp)
081a1949 +0x40f:  mov    %ebx,(%esp)
081a194c +0x412:  call   081a1c7e <+0x744>
081a1951 +0x417:  jmp    081a19f7 <+0x4bd>
081a1956 +0x41c:  lea    -0x34(%ebp),%eax
081a1959 +0x41f:  mov    %eax,(%esp)
081a195c +0x422:  call   081a1cac <+0x772>
081a1961 +0x427:  mov    0x10(%ebp),%eax
081a1964 +0x42a:  mov    %eax,0x4(%esp)
081a1968 +0x42e:  lea    -0x1e(%ebp),%eax
081a196b +0x431:  mov    %eax,(%esp)
081a196e +0x434:  call   081a1b58 <+0x61e>
081a1973 +0x439:  mov    %eax,%esi
081a1975 +0x43b:  mov    -0x34(%ebp),%eax
081a1978 +0x43e:  mov    %eax,(%esp)
081a197b +0x441:  call   081a1b0e <+0x5d4>
081a1980 +0x446:  mov    0xc(%ebp),%edx
081a1983 +0x449:  mov    %esi,0x8(%esp)
081a1987 +0x44d:  mov    %eax,0x4(%esp)
081a198b +0x451:  mov    %edx,(%esp)
081a198e +0x454:  call   081a1b30 <+0x5f6>
081a1993 +0x459:  test   %al,%al
081a1995 +0x45b:  je     081a19dd <+0x4a3>
081a1997 +0x45d:  movb   $0x1,-0x1d(%ebp)
081a199b +0x461:  mov    -0x10(%ebp),%ecx
081a199e +0x464:  mov    -0x14(%ebp),%edx
081a19a1 +0x467:  lea    -0x1c(%ebp),%eax
081a19a4 +0x46a:  mov    0x10(%ebp),%esi
081a19a7 +0x46d:  mov    %esi,0x10(%esp)
081a19ab +0x471:  mov    %ecx,0xc(%esp)
081a19af +0x475:  mov    %edx,0x8(%esp)
081a19b3 +0x479:  mov    0xc(%ebp),%edx
081a19b6 +0x47c:  mov    %edx,0x4(%esp)
081a19ba +0x480:  mov    %eax,(%esp)
081a19bd +0x483:  call   081a1bb6 <+0x67c>
081a19c2 +0x488:  sub    $0x4,%esp
081a19c5 +0x48b:  lea    -0x1d(%ebp),%eax
081a19c8 +0x48e:  mov    %eax,0x8(%esp)
081a19cc +0x492:  lea    -0x1c(%ebp),%eax
081a19cf +0x495:  mov    %eax,0x4(%esp)
081a19d3 +0x499:  mov    %ebx,(%esp)
081a19d6 +0x49c:  call   081a1c7e <+0x744>
081a19db +0x4a1:  jmp    081a19f7 <+0x4bd>
081a19dd +0x4a3:  movb   $0x0,-0x15(%ebp)
081a19e1 +0x4a7:  lea    -0x15(%ebp),%eax
081a19e4 +0x4aa:  mov    %eax,0x8(%esp)
081a19e8 +0x4ae:  lea    -0x34(%ebp),%eax
081a19eb +0x4b1:  mov    %eax,0x4(%esp)
081a19ef +0x4b5:  mov    %ebx,(%esp)
081a19f2 +0x4b8:  call   081a1cca <+0x790>
081a19f7 +0x4bd:  mov    %ebx,%eax
081a19f9 +0x4bf:  lea    -0x8(%ebp),%esp
081a19fc +0x4c2:  add    $0x0,%esp
081a19ff +0x4c5:  pop    %ebx
081a1a00 +0x4c6:  pop    %esi
081a1a01 +0x4c7:  pop    %ebp
081a1a02 +0x4c8:  ret    $0x4
081a1a05 +0x4cb:  nop
081a1a06 +0x4cc:  push   %ebp
081a1a07 +0x4cd:  mov    %esp,%ebp
081a1a09 +0x4cf:  sub    $0x18,%esp
081a1a0c +0x4d2:  mov    0xc(%ebp),%eax
081a1a0f +0x4d5:  mov    %eax,(%esp)
081a1a12 +0x4d8:  call   081a1cf8 <+0x7be>
081a1a17 +0x4dd:  mov    0x8(%ebp),%edx
081a1a1a +0x4e0:  mov    %eax,0x4(%esp)
081a1a1e +0x4e4:  mov    %edx,(%esp)
081a1a21 +0x4e7:  call   081a1826 <+0x2ec>
081a1a26 +0x4ec:  mov    0x10(%ebp),%eax
081a1a29 +0x4ef:  mov    %eax,(%esp)
081a1a2c +0x4f2:  call   080db505 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x16a2>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x16a2
081a1a31 +0x4f7:  movzbl (%eax),%edx
081a1a34 +0x4fa:  mov    0x8(%ebp),%eax
081a1a37 +0x4fd:  mov    %dl,0x4(%eax)
081a1a3a +0x500:  leave
081a1a3b +0x501:  ret
081a1a3c +0x502:  push   %ebp
081a1a3d +0x503:  mov    %esp,%ebp
081a1a3f +0x505:  mov    0x8(%ebp),%eax
081a1a42 +0x508:  mov    0xc(%eax),%eax
081a1a45 +0x50b:  pop    %ebp
081a1a46 +0x50c:  ret
081a1a47 +0x50d:  push   %ebp
081a1a48 +0x50e:  mov    %esp,%ebp
081a1a4a +0x510:  mov    0x8(%ebp),%eax
081a1a4d +0x513:  mov    0x8(%eax),%eax
081a1a50 +0x516:  pop    %ebp
081a1a51 +0x517:  ret
081a1a52 +0x518:  push   %ebp
081a1a53 +0x519:  mov    %esp,%ebp
081a1a55 +0x51b:  mov    0xc(%ebp),%edx
081a1a58 +0x51e:  mov    0x8(%ebp),%eax
081a1a5b +0x521:  mov    %edx,(%eax)
081a1a5d +0x523:  pop    %ebp
081a1a5e +0x524:  ret
081a1a5f +0x525:  nop
081a1a60 +0x526:  push   %ebp
081a1a61 +0x527:  mov    %esp,%ebp
081a1a63 +0x529:  mov    0x8(%ebp),%eax
081a1a66 +0x52c:  add    $0x4,%eax
081a1a69 +0x52f:  pop    %ebp
081a1a6a +0x530:  ret
081a1a6b +0x531:  nop
081a1a6c +0x532:  push   %ebp
081a1a6d +0x533:  mov    %esp,%ebp
081a1a6f +0x535:  push   %ebx
081a1a70 +0x536:  sub    $0x14,%esp
081a1a73 +0x539:  mov    0x8(%ebp),%ebx
081a1a76 +0x53c:  jmp    081a1ac4 <+0x58a>
081a1a78 +0x53e:  mov    0x10(%ebp),%eax
081a1a7b +0x541:  mov    %eax,(%esp)
081a1a7e +0x544:  call   081a1b60 <+0x626>
081a1a83 +0x549:  mov    0xc(%ebp),%edx
081a1a86 +0x54c:  mov    0x18(%ebp),%ecx
081a1a89 +0x54f:  mov    %ecx,0x8(%esp)
081a1a8d +0x553:  mov    %eax,0x4(%esp)
081a1a91 +0x557:  mov    %edx,(%esp)
081a1a94 +0x55a:  call   081a1b30 <+0x5f6>
081a1a99 +0x55f:  xor    $0x1,%eax
081a1a9c +0x562:  test   %al,%al
081a1a9e +0x564:  je     081a1ab6 <+0x57c>
081a1aa0 +0x566:  mov    0x10(%ebp),%eax
081a1aa3 +0x569:  mov    %eax,0x14(%ebp)
081a1aa6 +0x56c:  mov    0x10(%ebp),%eax
081a1aa9 +0x56f:  mov    %eax,(%esp)
081a1aac +0x572:  call   081a1a47 <+0x50d>
081a1ab1 +0x577:  mov    %eax,0x10(%ebp)
081a1ab4 +0x57a:  jmp    081a1ac4 <+0x58a>
081a1ab6 +0x57c:  mov    0x10(%ebp),%eax
081a1ab9 +0x57f:  mov    %eax,(%esp)
081a1abc +0x582:  call   081a1a3c <+0x502>
081a1ac1 +0x587:  mov    %eax,0x10(%ebp)
081a1ac4 +0x58a:  cmpl   $0x0,0x10(%ebp)
081a1ac8 +0x58e:  setne  %al
081a1acb +0x591:  test   %al,%al
081a1acd +0x593:  jne    081a1a78 <+0x53e>
081a1acf +0x595:  mov    0x14(%ebp),%eax
081a1ad2 +0x598:  mov    %eax,0x4(%esp)
081a1ad6 +0x59c:  mov    %ebx,(%esp)
081a1ad9 +0x59f:  call   081a1b82 <+0x648>
081a1ade +0x5a4:  mov    %ebx,%eax
081a1ae0 +0x5a6:  add    $0x14,%esp
081a1ae3 +0x5a9:  pop    %ebx
081a1ae4 +0x5aa:  pop    %ebp
081a1ae5 +0x5ab:  ret    $0x4
081a1ae8 +0x5ae:  push   %ebp
081a1ae9 +0x5af:  mov    %esp,%ebp
081a1aeb +0x5b1:  push   %ebx
081a1aec +0x5b2:  sub    $0x14,%esp
081a1aef +0x5b5:  mov    0x8(%ebp),%ebx
081a1af2 +0x5b8:  mov    0xc(%ebp),%eax
081a1af5 +0x5bb:  add    $0x4,%eax
081a1af8 +0x5be:  mov    %eax,0x4(%esp)
081a1afc +0x5c2:  mov    %ebx,(%esp)
081a1aff +0x5c5:  call   081a1b82 <+0x648>
081a1b04 +0x5ca:  mov    %ebx,%eax
081a1b06 +0x5cc:  add    $0x14,%esp
081a1b09 +0x5cf:  pop    %ebx
081a1b0a +0x5d0:  pop    %ebp
081a1b0b +0x5d1:  ret    $0x4
081a1b0e +0x5d4:  push   %ebp
081a1b0f +0x5d5:  mov    %esp,%ebp
081a1b11 +0x5d7:  sub    $0x28,%esp
081a1b14 +0x5da:  mov    0x8(%ebp),%eax
081a1b17 +0x5dd:  mov    %eax,(%esp)
081a1b1a +0x5e0:  call   081a1d2a <+0x7f0>
081a1b1f +0x5e5:  mov    %eax,0x4(%esp)
081a1b23 +0x5e9:  lea    -0x9(%ebp),%eax
081a1b26 +0x5ec:  mov    %eax,(%esp)
081a1b29 +0x5ef:  call   081a1b58 <+0x61e>
081a1b2e +0x5f4:  leave
081a1b2f +0x5f5:  ret
081a1b30 +0x5f6:  push   %ebp
081a1b31 +0x5f7:  mov    %esp,%ebp
081a1b33 +0x5f9:  mov    0xc(%ebp),%eax
081a1b36 +0x5fc:  mov    (%eax),%edx
081a1b38 +0x5fe:  mov    0x10(%ebp),%eax
081a1b3b +0x601:  mov    (%eax),%eax
081a1b3d +0x603:  cmp    %eax,%edx
081a1b3f +0x605:  setb   %al
081a1b42 +0x608:  pop    %ebp
081a1b43 +0x609:  ret
081a1b44 +0x60a:  push   %ebp
081a1b45 +0x60b:  mov    %esp,%ebp
081a1b47 +0x60d:  mov    0x8(%ebp),%eax
081a1b4a +0x610:  mov    (%eax),%edx
081a1b4c +0x612:  mov    0xc(%ebp),%eax
081a1b4f +0x615:  mov    (%eax),%eax
081a1b51 +0x617:  cmp    %eax,%edx
081a1b53 +0x619:  sete   %al
081a1b56 +0x61c:  pop    %ebp
081a1b57 +0x61d:  ret
081a1b58 +0x61e:  push   %ebp
081a1b59 +0x61f:  mov    %esp,%ebp
081a1b5b +0x621:  mov    0xc(%ebp),%eax
081a1b5e +0x624:  pop    %ebp
081a1b5f +0x625:  ret
081a1b60 +0x626:  push   %ebp
081a1b61 +0x627:  mov    %esp,%ebp
081a1b63 +0x629:  sub    $0x28,%esp
081a1b66 +0x62c:  mov    0x8(%ebp),%eax
081a1b69 +0x62f:  mov    %eax,(%esp)
081a1b6c +0x632:  call   081a1d35 <+0x7fb>
081a1b71 +0x637:  mov    %eax,0x4(%esp)
081a1b75 +0x63b:  lea    -0x9(%ebp),%eax
081a1b78 +0x63e:  mov    %eax,(%esp)
081a1b7b +0x641:  call   081a1b58 <+0x61e>
081a1b80 +0x646:  leave
081a1b81 +0x647:  ret
081a1b82 +0x648:  push   %ebp
081a1b83 +0x649:  mov    %esp,%ebp
081a1b85 +0x64b:  mov    0xc(%ebp),%edx
081a1b88 +0x64e:  mov    0x8(%ebp),%eax
081a1b8b +0x651:  mov    %edx,(%eax)
081a1b8d +0x653:  pop    %ebp
081a1b8e +0x654:  ret
081a1b8f +0x655:  nop
081a1b90 +0x656:  push   %ebp
081a1b91 +0x657:  mov    %esp,%ebp
081a1b93 +0x659:  push   %ebx
081a1b94 +0x65a:  sub    $0x14,%esp
081a1b97 +0x65d:  mov    0x8(%ebp),%ebx
081a1b9a +0x660:  mov    0xc(%ebp),%eax
081a1b9d +0x663:  mov    0xc(%eax),%eax
081a1ba0 +0x666:  mov    %eax,0x4(%esp)
081a1ba4 +0x66a:  mov    %ebx,(%esp)
081a1ba7 +0x66d:  call   081a1b82 <+0x648>
081a1bac +0x672:  mov    %ebx,%eax
081a1bae +0x674:  add    $0x14,%esp
081a1bb1 +0x677:  pop    %ebx
081a1bb2 +0x678:  pop    %ebp
081a1bb3 +0x679:  ret    $0x4
081a1bb6 +0x67c:  push   %ebp
081a1bb7 +0x67d:  mov    %esp,%ebp
081a1bb9 +0x67f:  push   %esi
081a1bba +0x680:  push   %ebx
081a1bbb +0x681:  sub    $0x20,%esp
081a1bbe +0x684:  mov    0x8(%ebp),%esi
081a1bc1 +0x687:  cmpl   $0x0,0x10(%ebp)
081a1bc5 +0x68b:  jne    081a1c0d <+0x6d3>
081a1bc7 +0x68d:  mov    0xc(%ebp),%eax
081a1bca +0x690:  mov    %eax,(%esp)
081a1bcd +0x693:  call   081a1a60 <+0x526>
081a1bd2 +0x698:  cmp    0x14(%ebp),%eax
081a1bd5 +0x69b:  je     081a1c0d <+0x6d3>
081a1bd7 +0x69d:  mov    0x14(%ebp),%eax
081a1bda +0x6a0:  mov    %eax,(%esp)
081a1bdd +0x6a3:  call   081a1b0e <+0x5d4>
081a1be2 +0x6a8:  mov    %eax,%ebx
081a1be4 +0x6aa:  mov    0x18(%ebp),%eax
081a1be7 +0x6ad:  mov    %eax,0x4(%esp)
081a1beb +0x6b1:  lea    -0xe(%ebp),%eax
081a1bee +0x6b4:  mov    %eax,(%esp)
081a1bf1 +0x6b7:  call   081a1b58 <+0x61e>
081a1bf6 +0x6bc:  mov    0xc(%ebp),%edx
081a1bf9 +0x6bf:  mov    %ebx,0x8(%esp)
081a1bfd +0x6c3:  mov    %eax,0x4(%esp)
081a1c01 +0x6c7:  mov    %edx,(%esp)
081a1c04 +0x6ca:  call   081a1b30 <+0x5f6>
081a1c09 +0x6cf:  test   %al,%al
081a1c0b +0x6d1:  je     081a1c14 <+0x6da>
081a1c0d +0x6d3:  mov    $0x1,%eax
081a1c12 +0x6d8:  jmp    081a1c19 <+0x6df>
081a1c14 +0x6da:  mov    $0x0,%eax
081a1c19 +0x6df:  mov    %al,-0xd(%ebp)
081a1c1c +0x6e2:  mov    0x18(%ebp),%eax
081a1c1f +0x6e5:  mov    %eax,0x4(%esp)
081a1c23 +0x6e9:  mov    0xc(%ebp),%eax
081a1c26 +0x6ec:  mov    %eax,(%esp)
081a1c29 +0x6ef:  call   081a1d40 <+0x806>
081a1c2e +0x6f4:  mov    %eax,-0xc(%ebp)
081a1c31 +0x6f7:  mov    0xc(%ebp),%eax
081a1c34 +0x6fa:  lea    0x4(%eax),%ecx
081a1c37 +0x6fd:  mov    -0xc(%ebp),%edx
081a1c3a +0x700:  movzbl -0xd(%ebp),%eax
081a1c3e +0x704:  mov    %ecx,0xc(%esp)
081a1c42 +0x708:  mov    0x14(%ebp),%ecx
081a1c45 +0x70b:  mov    %ecx,0x8(%esp)
081a1c49 +0x70f:  mov    %edx,0x4(%esp)
081a1c4d +0x713:  mov    %eax,(%esp)
081a1c50 +0x716:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
081a1c55 +0x71b:  mov    0xc(%ebp),%eax
081a1c58 +0x71e:  mov    0x14(%eax),%eax
081a1c5b +0x721:  lea    0x1(%eax),%edx
081a1c5e +0x724:  mov    0xc(%ebp),%eax
081a1c61 +0x727:  mov    %edx,0x14(%eax)
081a1c64 +0x72a:  mov    -0xc(%ebp),%eax
081a1c67 +0x72d:  mov    %eax,0x4(%esp)
081a1c6b +0x731:  mov    %esi,(%esp)
081a1c6e +0x734:  call   081a1b82 <+0x648>
081a1c73 +0x739:  mov    %esi,%eax
081a1c75 +0x73b:  add    $0x20,%esp
081a1c78 +0x73e:  pop    %ebx
081a1c79 +0x73f:  pop    %esi
081a1c7a +0x740:  pop    %ebp
081a1c7b +0x741:  ret    $0x4
081a1c7e +0x744:  push   %ebp
081a1c7f +0x745:  mov    %esp,%ebp
081a1c81 +0x747:  sub    $0x18,%esp
081a1c84 +0x74a:  mov    0xc(%ebp),%eax
081a1c87 +0x74d:  mov    %eax,(%esp)
081a1c8a +0x750:  call   081a1dc1 <+0x887>
081a1c8f +0x755:  mov    0x8(%ebp),%edx
081a1c92 +0x758:  mov    (%eax),%eax
081a1c94 +0x75a:  mov    %eax,(%edx)
081a1c96 +0x75c:  mov    0x10(%ebp),%eax
081a1c99 +0x75f:  mov    %eax,(%esp)
081a1c9c +0x762:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081a1ca1 +0x767:  movzbl (%eax),%edx
081a1ca4 +0x76a:  mov    0x8(%ebp),%eax
081a1ca7 +0x76d:  mov    %dl,0x4(%eax)
081a1caa +0x770:  leave
081a1cab +0x771:  ret
081a1cac +0x772:  push   %ebp
081a1cad +0x773:  mov    %esp,%ebp
081a1caf +0x775:  sub    $0x18,%esp
081a1cb2 +0x778:  mov    0x8(%ebp),%eax
081a1cb5 +0x77b:  mov    (%eax),%eax
081a1cb7 +0x77d:  mov    %eax,(%esp)
081a1cba +0x780:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
081a1cbf +0x785:  mov    0x8(%ebp),%edx
081a1cc2 +0x788:  mov    %eax,(%edx)
081a1cc4 +0x78a:  mov    0x8(%ebp),%eax
081a1cc7 +0x78d:  leave
081a1cc8 +0x78e:  ret
081a1cc9 +0x78f:  nop
081a1cca +0x790:  push   %ebp
081a1ccb +0x791:  mov    %esp,%ebp
081a1ccd +0x793:  sub    $0x18,%esp
081a1cd0 +0x796:  mov    0xc(%ebp),%eax
081a1cd3 +0x799:  mov    %eax,(%esp)
081a1cd6 +0x79c:  call   081a1cf8 <+0x7be>
081a1cdb +0x7a1:  mov    0x8(%ebp),%edx
081a1cde +0x7a4:  mov    (%eax),%eax
081a1ce0 +0x7a6:  mov    %eax,(%edx)
081a1ce2 +0x7a8:  mov    0x10(%ebp),%eax
081a1ce5 +0x7ab:  mov    %eax,(%esp)
081a1ce8 +0x7ae:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081a1ced +0x7b3:  movzbl (%eax),%edx
081a1cf0 +0x7b6:  mov    0x8(%ebp),%eax
081a1cf3 +0x7b9:  mov    %dl,0x4(%eax)
081a1cf6 +0x7bc:  leave
081a1cf7 +0x7bd:  ret
081a1cf8 +0x7be:  push   %ebp
081a1cf9 +0x7bf:  mov    %esp,%ebp
081a1cfb +0x7c1:  mov    0x8(%ebp),%eax
081a1cfe +0x7c4:  pop    %ebp
081a1cff +0x7c5:  ret
081a1d00 +0x7c6:  push   %ebp
081a1d01 +0x7c7:  mov    %esp,%ebp
081a1d03 +0x7c9:  mov    0x8(%ebp),%eax
081a1d06 +0x7cc:  pop    %ebp
081a1d07 +0x7cd:  ret
081a1d08 +0x7ce:  push   %ebp
081a1d09 +0x7cf:  mov    %esp,%ebp
081a1d0b +0x7d1:  sub    $0x18,%esp
081a1d0e +0x7d4:  mov    0x8(%ebp),%eax
081a1d11 +0x7d7:  movl   $0x1,0x8(%esp)
081a1d19 +0x7df:  mov    0xc(%ebp),%edx
081a1d1c +0x7e2:  mov    %edx,0x4(%esp)
081a1d20 +0x7e6:  mov    %eax,(%esp)
081a1d23 +0x7e9:  call   081a1dca <+0x890>
081a1d28 +0x7ee:  leave
081a1d29 +0x7ef:  ret
081a1d2a +0x7f0:  push   %ebp
081a1d2b +0x7f1:  mov    %esp,%ebp
081a1d2d +0x7f3:  mov    0x8(%ebp),%eax
081a1d30 +0x7f6:  add    $0x10,%eax
081a1d33 +0x7f9:  pop    %ebp
081a1d34 +0x7fa:  ret
081a1d35 +0x7fb:  push   %ebp
081a1d36 +0x7fc:  mov    %esp,%ebp
081a1d38 +0x7fe:  mov    0x8(%ebp),%eax
081a1d3b +0x801:  add    $0x10,%eax
081a1d3e +0x804:  pop    %ebp
081a1d3f +0x805:  ret
081a1d40 +0x806:  push   %ebp
081a1d41 +0x807:  mov    %esp,%ebp
081a1d43 +0x809:  push   %esi
081a1d44 +0x80a:  push   %ebx
081a1d45 +0x80b:  sub    $0x20,%esp
081a1d48 +0x80e:  mov    0x8(%ebp),%eax
081a1d4b +0x811:  mov    %eax,(%esp)
081a1d4e +0x814:  call   081a1dde <+0x8a4>
081a1d53 +0x819:  mov    %eax,-0xc(%ebp)
081a1d56 +0x81c:  mov    0xc(%ebp),%eax
081a1d59 +0x81f:  mov    %eax,(%esp)
081a1d5c +0x822:  call   081a1e01 <+0x8c7>
081a1d61 +0x827:  mov    %eax,%ebx
081a1d63 +0x829:  mov    0x8(%ebp),%eax
081a1d66 +0x82c:  mov    %eax,(%esp)
081a1d69 +0x82f:  call   081a1d00 <+0x7c6>
081a1d6e +0x834:  mov    %ebx,0x8(%esp)
081a1d72 +0x838:  mov    -0xc(%ebp),%edx
081a1d75 +0x83b:  mov    %edx,0x4(%esp)
081a1d79 +0x83f:  mov    %eax,(%esp)
081a1d7c +0x842:  call   081a1e0a <+0x8d0>
081a1d81 +0x847:  jmp    081a1db7 <+0x87d>
081a1d83 +0x849:  mov    %eax,(%esp)
081a1d86 +0x84c:  call   08725ce0 <__cxa_begin_catch>
081a1d8b +0x851:  mov    -0xc(%ebp),%eax
081a1d8e +0x854:  mov    %eax,0x4(%esp)
081a1d92 +0x858:  mov    0x8(%ebp),%eax
081a1d95 +0x85b:  mov    %eax,(%esp)
081a1d98 +0x85e:  call   081a1d08 <+0x7ce>
081a1d9d +0x863:  call   08724be0 <__cxa_rethrow>
081a1da2 +0x868:  mov    %edx,%ebx
081a1da4 +0x86a:  mov    %eax,%esi
081a1da6 +0x86c:  call   08725c30 <__cxa_end_catch>
081a1dab +0x871:  mov    %esi,%eax
081a1dad +0x873:  mov    %ebx,%edx
081a1daf +0x875:  mov    %eax,(%esp)
081a1db2 +0x878:  call   08ae3750 <_Unwind_Resume>
081a1db7 +0x87d:  mov    -0xc(%ebp),%eax
081a1dba +0x880:  add    $0x20,%esp
081a1dbd +0x883:  pop    %ebx
081a1dbe +0x884:  pop    %esi
081a1dbf +0x885:  pop    %ebp
081a1dc0 +0x886:  ret
081a1dc1 +0x887:  push   %ebp
081a1dc2 +0x888:  mov    %esp,%ebp
081a1dc4 +0x88a:  mov    0x8(%ebp),%eax
081a1dc7 +0x88d:  pop    %ebp
081a1dc8 +0x88e:  ret
081a1dc9 +0x88f:  nop
081a1dca +0x890:  push   %ebp
081a1dcb +0x891:  mov    %esp,%ebp
081a1dcd +0x893:  sub    $0x18,%esp
081a1dd0 +0x896:  mov    0xc(%ebp),%eax
081a1dd3 +0x899:  mov    %eax,(%esp)
081a1dd6 +0x89c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a1ddb +0x8a1:  leave
081a1ddc +0x8a2:  ret
081a1ddd +0x8a3:  nop
081a1dde +0x8a4:  push   %ebp
081a1ddf +0x8a5:  mov    %esp,%ebp
081a1de1 +0x8a7:  sub    $0x18,%esp
081a1de4 +0x8aa:  mov    0x8(%ebp),%eax
081a1de7 +0x8ad:  movl   $0x0,0x8(%esp)
081a1def +0x8b5:  movl   $0x1,0x4(%esp)
081a1df7 +0x8bd:  mov    %eax,(%esp)
081a1dfa +0x8c0:  call   081a1e4a <+0x910>
081a1dff +0x8c5:  leave
081a1e00 +0x8c6:  ret
081a1e01 +0x8c7:  push   %ebp
081a1e02 +0x8c8:  mov    %esp,%ebp
081a1e04 +0x8ca:  mov    0x8(%ebp),%eax
081a1e07 +0x8cd:  pop    %ebp
081a1e08 +0x8ce:  ret
081a1e09 +0x8cf:  nop
081a1e0a +0x8d0:  push   %ebp
081a1e0b +0x8d1:  mov    %esp,%ebp
081a1e0d +0x8d3:  push   %ebx
081a1e0e +0x8d4:  sub    $0x14,%esp
081a1e11 +0x8d7:  mov    0x10(%ebp),%eax
081a1e14 +0x8da:  mov    %eax,(%esp)
081a1e17 +0x8dd:  call   081a1e01 <+0x8c7>
081a1e1c +0x8e2:  mov    %eax,%ebx
081a1e1e +0x8e4:  mov    0xc(%ebp),%eax
081a1e21 +0x8e7:  mov    %eax,0x4(%esp)
081a1e25 +0x8eb:  movl   $0x14,(%esp)
081a1e2c +0x8f2:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081a1e31 +0x8f7:  mov    %eax,%edx
081a1e33 +0x8f9:  test   %edx,%edx
081a1e35 +0x8fb:  je     081a1e43 <+0x909>
081a1e37 +0x8fd:  mov    %ebx,0x4(%esp)
081a1e3b +0x901:  mov    %eax,(%esp)
081a1e3e +0x904:  call   081a1e8a <+0x950>
081a1e43 +0x909:  add    $0x14,%esp
081a1e46 +0x90c:  pop    %ebx
081a1e47 +0x90d:  pop    %ebp
081a1e48 +0x90e:  ret
081a1e49 +0x90f:  nop
081a1e4a +0x910:  push   %ebp
081a1e4b +0x911:  mov    %esp,%ebp
081a1e4d +0x913:  sub    $0x18,%esp
081a1e50 +0x916:  mov    0x8(%ebp),%eax
081a1e53 +0x919:  mov    %eax,(%esp)
081a1e56 +0x91c:  call   081a1ecc <+0x992>
081a1e5b +0x921:  cmp    0xc(%ebp),%eax
081a1e5e +0x924:  setb   %al
081a1e61 +0x927:  movzbl %al,%eax
081a1e64 +0x92a:  test   %eax,%eax
081a1e66 +0x92c:  setne  %al
081a1e69 +0x92f:  test   %al,%al
081a1e6b +0x931:  je     081a1e72 <+0x938>
081a1e6d +0x933:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081a1e72 +0x938:  mov    0xc(%ebp),%edx
081a1e75 +0x93b:  mov    %edx,%eax
081a1e77 +0x93d:  shl    $0x2,%eax
081a1e7a +0x940:  add    %edx,%eax
081a1e7c +0x942:  shl    $0x2,%eax
081a1e7f +0x945:  mov    %eax,(%esp)
081a1e82 +0x948:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081a1e87 +0x94d:  leave
081a1e88 +0x94e:  ret
081a1e89 +0x94f:  nop
081a1e8a +0x950:  push   %ebp
081a1e8b +0x951:  mov    %esp,%ebp
081a1e8d +0x953:  sub    $0x18,%esp
081a1e90 +0x956:  mov    0x8(%ebp),%eax
081a1e93 +0x959:  movl   $0x0,(%eax)
081a1e99 +0x95f:  mov    0x8(%ebp),%eax
081a1e9c +0x962:  movl   $0x0,0x4(%eax)
081a1ea3 +0x969:  mov    0x8(%ebp),%eax
081a1ea6 +0x96c:  movl   $0x0,0x8(%eax)
081a1ead +0x973:  mov    0x8(%ebp),%eax
081a1eb0 +0x976:  movl   $0x0,0xc(%eax)
081a1eb7 +0x97d:  mov    0xc(%ebp),%eax
081a1eba +0x980:  mov    %eax,(%esp)
081a1ebd +0x983:  call   081a1e01 <+0x8c7>
081a1ec2 +0x988:  mov    (%eax),%edx
081a1ec4 +0x98a:  mov    0x8(%ebp),%eax
081a1ec7 +0x98d:  mov    %edx,0x10(%eax)
081a1eca +0x990:  leave
081a1ecb +0x991:  ret
081a1ecc +0x992:  push   %ebp
081a1ecd +0x993:  mov    %esp,%ebp
081a1ecf +0x995:  mov    $0xccccccc,%eax
081a1ed4 +0x99a:  pop    %ebp
081a1ed5 +0x99b:  ret
081a1ed6 +0x99c:  nop
081a1ed7 +0x99d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81a153a

/* ARAD::ScriptManager::LoadScript() */

void ARAD::ScriptManager::_GLOBAL__I_LoadScript(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
