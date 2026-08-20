# GetSaleInfo

`_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi`

`global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to secretshop::RETAILER` | `0x08ab15d5` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab15d5  _GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi
#           global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)
# range [0x08ab15d5, 0x08ab21f7]
08ab15d5 +0x000:  push   %ebp
08ab15d6 +0x001:  mov    %esp,%ebp
08ab15d8 +0x003:  sub    $0x18,%esp
08ab15db +0x006:  movl   $0xffff,0x4(%esp)
08ab15e3 +0x00e:  movl   $0x1,(%esp)
08ab15ea +0x015:  call   08ab1595 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08ab15ef +0x01a:  leave
08ab15f0 +0x01b:  ret
08ab15f1 +0x01c:  nop
08ab15f2 +0x01d:  push   %ebp
08ab15f3 +0x01e:  mov    %esp,%ebp
08ab15f5 +0x020:  sub    $0x18,%esp
08ab15f8 +0x023:  mov    0x8(%ebp),%eax
08ab15fb +0x026:  mov    %eax,(%esp)
08ab15fe +0x029:  call   085fc034 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x1c6>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x1c6
08ab1603 +0x02e:  leave
08ab1604 +0x02f:  ret
08ab1605 +0x030:  nop
08ab1606 +0x031:  push   %ebp
08ab1607 +0x032:  mov    %esp,%ebp
08ab1609 +0x034:  mov    0x8(%ebp),%eax
08ab160c +0x037:  movl   $0x0,(%eax)
08ab1612 +0x03d:  mov    0x8(%ebp),%eax
08ab1615 +0x040:  movl   $0x0,0x4(%eax)
08ab161c +0x047:  pop    %ebp
08ab161d +0x048:  ret
08ab161e +0x049:  push   %ebp
08ab161f +0x04a:  mov    %esp,%ebp
08ab1621 +0x04c:  mov    0x8(%ebp),%eax
08ab1624 +0x04f:  mov    (%eax),%eax
08ab1626 +0x051:  cmp    0xc(%ebp),%eax
08ab1629 +0x054:  sete   %al
08ab162c +0x057:  pop    %ebp
08ab162d +0x058:  ret
08ab162e +0x059:  push   %ebp
08ab162f +0x05a:  mov    %esp,%ebp
08ab1631 +0x05c:  sub    $0x18,%esp
08ab1634 +0x05f:  mov    0x8(%ebp),%eax
08ab1637 +0x062:  mov    %eax,(%esp)
08ab163a +0x065:  call   08ab166a <+0x95>
08ab163f +0x06a:  leave
08ab1640 +0x06b:  ret
08ab1641 +0x06c:  nop
08ab1642 +0x06d:  push   %ebp
08ab1643 +0x06e:  mov    %esp,%ebp
08ab1645 +0x070:  sub    $0x18,%esp
08ab1648 +0x073:  mov    0x8(%ebp),%eax
08ab164b +0x076:  movb   $0x0,0x18(%eax)
08ab164f +0x07a:  mov    0x8(%ebp),%eax
08ab1652 +0x07d:  mov    %eax,(%esp)
08ab1655 +0x080:  call   08ab15f2 <+0x1d>
08ab165a +0x085:  mov    0x8(%ebp),%eax
08ab165d +0x088:  add    $0xc,%eax
08ab1660 +0x08b:  mov    %eax,(%esp)
08ab1663 +0x08e:  call   08ab162e <+0x59>
08ab1668 +0x093:  leave
08ab1669 +0x094:  ret
08ab166a +0x095:  push   %ebp
08ab166b +0x096:  mov    %esp,%ebp
08ab166d +0x098:  sub    $0x18,%esp
08ab1670 +0x09b:  mov    0x8(%ebp),%eax
08ab1673 +0x09e:  mov    (%eax),%eax
08ab1675 +0x0a0:  mov    %eax,0x4(%esp)
08ab1679 +0x0a4:  mov    0x8(%ebp),%eax
08ab167c +0x0a7:  mov    %eax,(%esp)
08ab167f +0x0aa:  call   08ab17ea <+0x215>
08ab1684 +0x0af:  leave
08ab1685 +0x0b0:  ret
08ab1686 +0x0b1:  push   %ebp
08ab1687 +0x0b2:  mov    %esp,%ebp
08ab1689 +0x0b4:  mov    0x8(%ebp),%eax
08ab168c +0x0b7:  movl   $0x0,(%eax)
08ab1692 +0x0bd:  pop    %ebp
08ab1693 +0x0be:  ret
08ab1694 +0x0bf:  push   %ebp
08ab1695 +0x0c0:  mov    %esp,%ebp
08ab1697 +0x0c2:  mov    0x8(%ebp),%eax
08ab169a +0x0c5:  movl   $0x0,(%eax)
08ab16a0 +0x0cb:  pop    %ebp
08ab16a1 +0x0cc:  ret
08ab16a2 +0x0cd:  push   %ebp
08ab16a3 +0x0ce:  mov    %esp,%ebp
08ab16a5 +0x0d0:  push   %ebx
08ab16a6 +0x0d1:  sub    $0x14,%esp
08ab16a9 +0x0d4:  mov    0x8(%ebp),%ebx
08ab16ac +0x0d7:  mov    0xc(%ebp),%eax
08ab16af +0x0da:  mov    %eax,0x4(%esp)
08ab16b3 +0x0de:  mov    %ebx,(%esp)
08ab16b6 +0x0e1:  call   08ab1820 <+0x24b>
08ab16bb +0x0e6:  mov    %ebx,%eax
08ab16bd +0x0e8:  add    $0x14,%esp
08ab16c0 +0x0eb:  pop    %ebx
08ab16c1 +0x0ec:  pop    %ebp
08ab16c2 +0x0ed:  ret    $0x4
08ab16c5 +0x0f0:  nop
08ab16c6 +0x0f1:  push   %ebp
08ab16c7 +0x0f2:  mov    %esp,%ebp
08ab16c9 +0x0f4:  push   %ebx
08ab16ca +0x0f5:  sub    $0x14,%esp
08ab16cd +0x0f8:  mov    0x8(%ebp),%ebx
08ab16d0 +0x0fb:  mov    0xc(%ebp),%eax
08ab16d3 +0x0fe:  add    $0x4,%eax
08ab16d6 +0x101:  mov    %eax,0x4(%esp)
08ab16da +0x105:  mov    %ebx,(%esp)
08ab16dd +0x108:  call   08ab1820 <+0x24b>
08ab16e2 +0x10d:  mov    %ebx,%eax
08ab16e4 +0x10f:  add    $0x14,%esp
08ab16e7 +0x112:  pop    %ebx
08ab16e8 +0x113:  pop    %ebp
08ab16e9 +0x114:  ret    $0x4
08ab16ec +0x117:  push   %ebp
08ab16ed +0x118:  mov    %esp,%ebp
08ab16ef +0x11a:  push   %esi
08ab16f0 +0x11b:  push   %ebx
08ab16f1 +0x11c:  sub    $0x30,%esp
08ab16f4 +0x11f:  mov    0x8(%ebp),%ebx
08ab16f7 +0x122:  lea    -0x9(%ebp),%eax
08ab16fa +0x125:  lea    0xc(%ebp),%edx
08ab16fd +0x128:  mov    %edx,0x4(%esp)
08ab1701 +0x12c:  mov    %eax,(%esp)
08ab1704 +0x12f:  call   08ab182f <+0x25a>
08ab1709 +0x134:  sub    $0x4,%esp
08ab170c +0x137:  mov    %esi,%eax
08ab170e +0x139:  mov    %al,0x10(%esp)
08ab1712 +0x13d:  mov    0x14(%ebp),%eax
08ab1715 +0x140:  mov    %eax,0xc(%esp)
08ab1719 +0x144:  mov    0x10(%ebp),%eax
08ab171c +0x147:  mov    %eax,0x8(%esp)
08ab1720 +0x14b:  mov    0xc(%ebp),%eax
08ab1723 +0x14e:  mov    %eax,0x4(%esp)
08ab1727 +0x152:  mov    %ebx,(%esp)
08ab172a +0x155:  call   08ab1839 <+0x264>
08ab172f +0x15a:  sub    $0x4,%esp
08ab1732 +0x15d:  mov    %ebx,%eax
08ab1734 +0x15f:  lea    -0x8(%ebp),%esp
08ab1737 +0x162:  add    $0x0,%esp
08ab173a +0x165:  pop    %ebx
08ab173b +0x166:  pop    %esi
08ab173c +0x167:  pop    %ebp
08ab173d +0x168:  ret    $0x4
08ab1740 +0x16b:  push   %ebp
08ab1741 +0x16c:  mov    %esp,%ebp
08ab1743 +0x16e:  push   %ebx
08ab1744 +0x16f:  sub    $0x14,%esp
08ab1747 +0x172:  mov    0x8(%ebp),%eax
08ab174a +0x175:  mov    %eax,(%esp)
08ab174d +0x178:  call   08ab1a14 <+0x43f>
08ab1752 +0x17d:  mov    (%eax),%ebx
08ab1754 +0x17f:  mov    0xc(%ebp),%eax
08ab1757 +0x182:  mov    %eax,(%esp)
08ab175a +0x185:  call   08ab1a14 <+0x43f>
08ab175f +0x18a:  mov    (%eax),%eax
08ab1761 +0x18c:  cmp    %eax,%ebx
08ab1763 +0x18e:  setne  %al
08ab1766 +0x191:  add    $0x14,%esp
08ab1769 +0x194:  pop    %ebx
08ab176a +0x195:  pop    %ebp
08ab176b +0x196:  ret
08ab176c +0x197:  push   %ebp
08ab176d +0x198:  mov    %esp,%ebp
08ab176f +0x19a:  mov    0x8(%ebp),%eax
08ab1772 +0x19d:  mov    (%eax),%eax
08ab1774 +0x19f:  pop    %ebp
08ab1775 +0x1a0:  ret
08ab1776 +0x1a1:  push   %ebp
08ab1777 +0x1a2:  mov    %esp,%ebp
08ab1779 +0x1a4:  sub    $0x28,%esp
08ab177c +0x1a7:  mov    0x8(%ebp),%eax
08ab177f +0x1aa:  mov    0x4(%eax),%edx
08ab1782 +0x1ad:  mov    0x8(%ebp),%eax
08ab1785 +0x1b0:  mov    0x8(%eax),%eax
08ab1788 +0x1b3:  cmp    %eax,%edx
08ab178a +0x1b5:  je     08ab17b9 <+0x1e4>
08ab178c +0x1b7:  mov    0x8(%ebp),%eax
08ab178f +0x1ba:  mov    0x4(%eax),%edx
08ab1792 +0x1bd:  mov    0x8(%ebp),%eax
08ab1795 +0x1c0:  mov    0xc(%ebp),%ecx
08ab1798 +0x1c3:  mov    %ecx,0x8(%esp)
08ab179c +0x1c7:  mov    %edx,0x4(%esp)
08ab17a0 +0x1cb:  mov    %eax,(%esp)
08ab17a3 +0x1ce:  call   08ab1a1c <+0x447>
08ab17a8 +0x1d3:  mov    0x8(%ebp),%eax
08ab17ab +0x1d6:  mov    0x4(%eax),%eax
08ab17ae +0x1d9:  lea    0x8(%eax),%edx
08ab17b1 +0x1dc:  mov    0x8(%ebp),%eax
08ab17b4 +0x1df:  mov    %edx,0x4(%eax)
08ab17b7 +0x1e2:  jmp    08ab17e7 <+0x212>
08ab17b9 +0x1e4:  lea    -0xc(%ebp),%eax
08ab17bc +0x1e7:  mov    0x8(%ebp),%edx
08ab17bf +0x1ea:  mov    %edx,0x4(%esp)
08ab17c3 +0x1ee:  mov    %eax,(%esp)
08ab17c6 +0x1f1:  call   08ab16c6 <+0xf1>
08ab17cb +0x1f6:  sub    $0x4,%esp
08ab17ce +0x1f9:  mov    0xc(%ebp),%eax
08ab17d1 +0x1fc:  mov    %eax,0x8(%esp)
08ab17d5 +0x200:  mov    -0xc(%ebp),%eax
08ab17d8 +0x203:  mov    %eax,0x4(%esp)
08ab17dc +0x207:  mov    0x8(%ebp),%eax
08ab17df +0x20a:  mov    %eax,(%esp)
08ab17e2 +0x20d:  call   08ab1a4c <+0x477>
08ab17e7 +0x212:  leave
08ab17e8 +0x213:  ret
08ab17e9 +0x214:  nop
08ab17ea +0x215:  push   %ebp
08ab17eb +0x216:  mov    %esp,%ebp
08ab17ed +0x218:  sub    $0x18,%esp
08ab17f0 +0x21b:  mov    0x8(%ebp),%eax
08ab17f3 +0x21e:  mov    %eax,(%esp)
08ab17f6 +0x221:  call   082b59d4 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x78cf>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x78cf
08ab17fb +0x226:  mov    0x8(%ebp),%edx
08ab17fe +0x229:  mov    0x4(%edx),%edx
08ab1801 +0x22c:  mov    %eax,0x8(%esp)
08ab1805 +0x230:  mov    %edx,0x4(%esp)
08ab1809 +0x234:  mov    0xc(%ebp),%eax
08ab180c +0x237:  mov    %eax,(%esp)
08ab180f +0x23a:  call   082b59dc <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x78d7>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x78d7
08ab1814 +0x23f:  mov    0x8(%ebp),%eax
08ab1817 +0x242:  mov    0xc(%ebp),%edx
08ab181a +0x245:  mov    %edx,0x4(%eax)
08ab181d +0x248:  leave
08ab181e +0x249:  ret
08ab181f +0x24a:  nop
08ab1820 +0x24b:  push   %ebp
08ab1821 +0x24c:  mov    %esp,%ebp
08ab1823 +0x24e:  mov    0xc(%ebp),%eax
08ab1826 +0x251:  mov    (%eax),%edx
08ab1828 +0x253:  mov    0x8(%ebp),%eax
08ab182b +0x256:  mov    %edx,(%eax)
08ab182d +0x258:  pop    %ebp
08ab182e +0x259:  ret
08ab182f +0x25a:  push   %ebp
08ab1830 +0x25b:  mov    %esp,%ebp
08ab1832 +0x25d:  mov    0x8(%ebp),%eax
08ab1835 +0x260:  pop    %ebp
08ab1836 +0x261:  ret    $0x4
08ab1839 +0x264:  push   %ebp
08ab183a +0x265:  mov    %esp,%ebp
08ab183c +0x267:  push   %esi
08ab183d +0x268:  push   %ebx
08ab183e +0x269:  sub    $0x20,%esp
08ab1841 +0x26c:  mov    0x8(%ebp),%ebx
08ab1844 +0x26f:  lea    0xc(%ebp),%eax
08ab1847 +0x272:  mov    %eax,0x4(%esp)
08ab184b +0x276:  lea    0x10(%ebp),%eax
08ab184e +0x279:  mov    %eax,(%esp)
08ab1851 +0x27c:  call   08ab1d03 <+0x72e>
08ab1856 +0x281:  sar    $0x2,%eax
08ab1859 +0x284:  mov    %eax,-0xc(%ebp)
08ab185c +0x287:  jmp    08ab1939 <+0x364>
08ab1861 +0x28c:  mov    0x14(%ebp),%eax
08ab1864 +0x28f:  mov    (%eax),%esi
08ab1866 +0x291:  lea    0xc(%ebp),%eax
08ab1869 +0x294:  mov    %eax,(%esp)
08ab186c +0x297:  call   08ab176c <+0x197>
08ab1871 +0x29c:  mov    %esi,0x4(%esp)
08ab1875 +0x2a0:  mov    %eax,(%esp)
08ab1878 +0x2a3:  call   08ab161e <+0x49>
08ab187d +0x2a8:  test   %al,%al
08ab187f +0x2aa:  je     08ab188b <+0x2b6>
08ab1881 +0x2ac:  mov    0xc(%ebp),%eax
08ab1884 +0x2af:  mov    %eax,(%ebx)
08ab1886 +0x2b1:  jmp    08ab1a09 <+0x434>
08ab188b +0x2b6:  lea    0xc(%ebp),%eax
08ab188e +0x2b9:  mov    %eax,(%esp)
08ab1891 +0x2bc:  call   08ab1d36 <+0x761>
08ab1896 +0x2c1:  mov    0x14(%ebp),%eax
08ab1899 +0x2c4:  mov    (%eax),%esi
08ab189b +0x2c6:  lea    0xc(%ebp),%eax
08ab189e +0x2c9:  mov    %eax,(%esp)
08ab18a1 +0x2cc:  call   08ab176c <+0x197>
08ab18a6 +0x2d1:  mov    %esi,0x4(%esp)
08ab18aa +0x2d5:  mov    %eax,(%esp)
08ab18ad +0x2d8:  call   08ab161e <+0x49>
08ab18b2 +0x2dd:  test   %al,%al
08ab18b4 +0x2df:  je     08ab18c0 <+0x2eb>
08ab18b6 +0x2e1:  mov    0xc(%ebp),%eax
08ab18b9 +0x2e4:  mov    %eax,(%ebx)
08ab18bb +0x2e6:  jmp    08ab1a09 <+0x434>
08ab18c0 +0x2eb:  lea    0xc(%ebp),%eax
08ab18c3 +0x2ee:  mov    %eax,(%esp)
08ab18c6 +0x2f1:  call   08ab1d36 <+0x761>
08ab18cb +0x2f6:  mov    0x14(%ebp),%eax
08ab18ce +0x2f9:  mov    (%eax),%esi
08ab18d0 +0x2fb:  lea    0xc(%ebp),%eax
08ab18d3 +0x2fe:  mov    %eax,(%esp)
08ab18d6 +0x301:  call   08ab176c <+0x197>
08ab18db +0x306:  mov    %esi,0x4(%esp)
08ab18df +0x30a:  mov    %eax,(%esp)
08ab18e2 +0x30d:  call   08ab161e <+0x49>
08ab18e7 +0x312:  test   %al,%al
08ab18e9 +0x314:  je     08ab18f5 <+0x320>
08ab18eb +0x316:  mov    0xc(%ebp),%eax
08ab18ee +0x319:  mov    %eax,(%ebx)
08ab18f0 +0x31b:  jmp    08ab1a09 <+0x434>
08ab18f5 +0x320:  lea    0xc(%ebp),%eax
08ab18f8 +0x323:  mov    %eax,(%esp)
08ab18fb +0x326:  call   08ab1d36 <+0x761>
08ab1900 +0x32b:  mov    0x14(%ebp),%eax
08ab1903 +0x32e:  mov    (%eax),%esi
08ab1905 +0x330:  lea    0xc(%ebp),%eax
08ab1908 +0x333:  mov    %eax,(%esp)
08ab190b +0x336:  call   08ab176c <+0x197>
08ab1910 +0x33b:  mov    %esi,0x4(%esp)
08ab1914 +0x33f:  mov    %eax,(%esp)
08ab1917 +0x342:  call   08ab161e <+0x49>
08ab191c +0x347:  test   %al,%al
08ab191e +0x349:  je     08ab192a <+0x355>
08ab1920 +0x34b:  mov    0xc(%ebp),%eax
08ab1923 +0x34e:  mov    %eax,(%ebx)
08ab1925 +0x350:  jmp    08ab1a09 <+0x434>
08ab192a +0x355:  lea    0xc(%ebp),%eax
08ab192d +0x358:  mov    %eax,(%esp)
08ab1930 +0x35b:  call   08ab1d36 <+0x761>
08ab1935 +0x360:  subl   $0x1,-0xc(%ebp)
08ab1939 +0x364:  cmpl   $0x0,-0xc(%ebp)
08ab193d +0x368:  setg   %al
08ab1940 +0x36b:  test   %al,%al
08ab1942 +0x36d:  jne    08ab1861 <+0x28c>
08ab1948 +0x373:  lea    0xc(%ebp),%eax
08ab194b +0x376:  mov    %eax,0x4(%esp)
08ab194f +0x37a:  lea    0x10(%ebp),%eax
08ab1952 +0x37d:  mov    %eax,(%esp)
08ab1955 +0x380:  call   08ab1d03 <+0x72e>
08ab195a +0x385:  cmp    $0x2,%eax
08ab195d +0x388:  je     08ab19a0 <+0x3cb>
08ab195f +0x38a:  cmp    $0x3,%eax
08ab1962 +0x38d:  je     08ab196e <+0x399>
08ab1964 +0x38f:  cmp    $0x1,%eax
08ab1967 +0x392:  je     08ab19d2 <+0x3fd>
08ab1969 +0x394:  jmp    08ab1a04 <+0x42f>
08ab196e +0x399:  mov    0x14(%ebp),%eax
08ab1971 +0x39c:  mov    (%eax),%esi
08ab1973 +0x39e:  lea    0xc(%ebp),%eax
08ab1976 +0x3a1:  mov    %eax,(%esp)
08ab1979 +0x3a4:  call   08ab176c <+0x197>
08ab197e +0x3a9:  mov    %esi,0x4(%esp)
08ab1982 +0x3ad:  mov    %eax,(%esp)
08ab1985 +0x3b0:  call   08ab161e <+0x49>
08ab198a +0x3b5:  test   %al,%al
08ab198c +0x3b7:  je     08ab1995 <+0x3c0>
08ab198e +0x3b9:  mov    0xc(%ebp),%eax
08ab1991 +0x3bc:  mov    %eax,(%ebx)
08ab1993 +0x3be:  jmp    08ab1a09 <+0x434>
08ab1995 +0x3c0:  lea    0xc(%ebp),%eax
08ab1998 +0x3c3:  mov    %eax,(%esp)
08ab199b +0x3c6:  call   08ab1d36 <+0x761>
08ab19a0 +0x3cb:  mov    0x14(%ebp),%eax
08ab19a3 +0x3ce:  mov    (%eax),%esi
08ab19a5 +0x3d0:  lea    0xc(%ebp),%eax
08ab19a8 +0x3d3:  mov    %eax,(%esp)
08ab19ab +0x3d6:  call   08ab176c <+0x197>
08ab19b0 +0x3db:  mov    %esi,0x4(%esp)
08ab19b4 +0x3df:  mov    %eax,(%esp)
08ab19b7 +0x3e2:  call   08ab161e <+0x49>
08ab19bc +0x3e7:  test   %al,%al
08ab19be +0x3e9:  je     08ab19c7 <+0x3f2>
08ab19c0 +0x3eb:  mov    0xc(%ebp),%eax
08ab19c3 +0x3ee:  mov    %eax,(%ebx)
08ab19c5 +0x3f0:  jmp    08ab1a09 <+0x434>
08ab19c7 +0x3f2:  lea    0xc(%ebp),%eax
08ab19ca +0x3f5:  mov    %eax,(%esp)
08ab19cd +0x3f8:  call   08ab1d36 <+0x761>
08ab19d2 +0x3fd:  mov    0x14(%ebp),%eax
08ab19d5 +0x400:  mov    (%eax),%esi
08ab19d7 +0x402:  lea    0xc(%ebp),%eax
08ab19da +0x405:  mov    %eax,(%esp)
08ab19dd +0x408:  call   08ab176c <+0x197>
08ab19e2 +0x40d:  mov    %esi,0x4(%esp)
08ab19e6 +0x411:  mov    %eax,(%esp)
08ab19e9 +0x414:  call   08ab161e <+0x49>
08ab19ee +0x419:  test   %al,%al
08ab19f0 +0x41b:  je     08ab19f9 <+0x424>
08ab19f2 +0x41d:  mov    0xc(%ebp),%eax
08ab19f5 +0x420:  mov    %eax,(%ebx)
08ab19f7 +0x422:  jmp    08ab1a09 <+0x434>
08ab19f9 +0x424:  lea    0xc(%ebp),%eax
08ab19fc +0x427:  mov    %eax,(%esp)
08ab19ff +0x42a:  call   08ab1d36 <+0x761>
08ab1a04 +0x42f:  mov    0x10(%ebp),%eax
08ab1a07 +0x432:  mov    %eax,(%ebx)
08ab1a09 +0x434:  mov    %ebx,%eax
08ab1a0b +0x436:  add    $0x20,%esp
08ab1a0e +0x439:  pop    %ebx
08ab1a0f +0x43a:  pop    %esi
08ab1a10 +0x43b:  pop    %ebp
08ab1a11 +0x43c:  ret    $0x4
08ab1a14 +0x43f:  push   %ebp
08ab1a15 +0x440:  mov    %esp,%ebp
08ab1a17 +0x442:  mov    0x8(%ebp),%eax
08ab1a1a +0x445:  pop    %ebp
08ab1a1b +0x446:  ret
08ab1a1c +0x447:  push   %ebp
08ab1a1d +0x448:  mov    %esp,%ebp
08ab1a1f +0x44a:  sub    $0x18,%esp
08ab1a22 +0x44d:  mov    0xc(%ebp),%eax
08ab1a25 +0x450:  mov    %eax,0x4(%esp)
08ab1a29 +0x454:  movl   $0x8,(%esp)
08ab1a30 +0x45b:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08ab1a35 +0x460:  mov    %eax,%edx
08ab1a37 +0x462:  test   %edx,%edx
08ab1a39 +0x464:  je     08ab1a4a <+0x475>
08ab1a3b +0x466:  mov    %eax,%ecx
08ab1a3d +0x468:  mov    0x10(%ebp),%eax
08ab1a40 +0x46b:  mov    0x4(%eax),%edx
08ab1a43 +0x46e:  mov    (%eax),%eax
08ab1a45 +0x470:  mov    %eax,(%ecx)
08ab1a47 +0x472:  mov    %edx,0x4(%ecx)
08ab1a4a +0x475:  leave
08ab1a4b +0x476:  ret
08ab1a4c +0x477:  push   %ebp
08ab1a4d +0x478:  mov    %esp,%ebp
08ab1a4f +0x47a:  push   %esi
08ab1a50 +0x47b:  push   %ebx
08ab1a51 +0x47c:  sub    $0x30,%esp
08ab1a54 +0x47f:  mov    0x8(%ebp),%eax
08ab1a57 +0x482:  mov    0x4(%eax),%edx
08ab1a5a +0x485:  mov    0x8(%ebp),%eax
08ab1a5d +0x488:  mov    0x8(%eax),%eax
08ab1a60 +0x48b:  cmp    %eax,%edx
08ab1a62 +0x48d:  je     08ab1af7 <+0x522>
08ab1a68 +0x493:  mov    0x8(%ebp),%eax
08ab1a6b +0x496:  mov    0x4(%eax),%eax
08ab1a6e +0x499:  sub    $0x8,%eax
08ab1a71 +0x49c:  mov    %eax,(%esp)
08ab1a74 +0x49f:  call   08ab1d4b <+0x776>
08ab1a79 +0x4a4:  mov    0x8(%ebp),%edx
08ab1a7c +0x4a7:  mov    0x4(%edx),%ecx
08ab1a7f +0x4aa:  mov    0x8(%ebp),%edx
08ab1a82 +0x4ad:  mov    %eax,0x8(%esp)
08ab1a86 +0x4b1:  mov    %ecx,0x4(%esp)
08ab1a8a +0x4b5:  mov    %edx,(%esp)
08ab1a8d +0x4b8:  call   08ab1d54 <+0x77f>
08ab1a92 +0x4bd:  mov    0x8(%ebp),%eax
08ab1a95 +0x4c0:  mov    0x4(%eax),%eax
08ab1a98 +0x4c3:  lea    0x8(%eax),%edx
08ab1a9b +0x4c6:  mov    0x8(%ebp),%eax
08ab1a9e +0x4c9:  mov    %edx,0x4(%eax)
08ab1aa1 +0x4cc:  mov    0x8(%ebp),%eax
08ab1aa4 +0x4cf:  mov    0x4(%eax),%eax
08ab1aa7 +0x4d2:  lea    -0x8(%eax),%esi
08ab1aaa +0x4d5:  mov    0x8(%ebp),%eax
08ab1aad +0x4d8:  mov    0x4(%eax),%eax
08ab1ab0 +0x4db:  lea    -0x10(%eax),%ebx
08ab1ab3 +0x4de:  lea    0xc(%ebp),%eax
08ab1ab6 +0x4e1:  mov    %eax,(%esp)
08ab1ab9 +0x4e4:  call   08ab1a14 <+0x43f>
08ab1abe +0x4e9:  mov    (%eax),%eax
08ab1ac0 +0x4eb:  mov    %esi,0x8(%esp)
08ab1ac4 +0x4ef:  mov    %ebx,0x4(%esp)
08ab1ac8 +0x4f3:  mov    %eax,(%esp)
08ab1acb +0x4f6:  call   08ab1d93 <+0x7be>
08ab1ad0 +0x4fb:  lea    0xc(%ebp),%eax
08ab1ad3 +0x4fe:  mov    %eax,(%esp)
08ab1ad6 +0x501:  call   08ab176c <+0x197>
08ab1adb +0x506:  mov    %eax,%ebx
08ab1add +0x508:  mov    0x10(%ebp),%eax
08ab1ae0 +0x50b:  mov    %eax,(%esp)
08ab1ae3 +0x50e:  call   08ab1dcb <+0x7f6>
08ab1ae8 +0x513:  mov    0x4(%eax),%edx
08ab1aeb +0x516:  mov    (%eax),%eax
08ab1aed +0x518:  mov    %eax,(%ebx)
08ab1aef +0x51a:  mov    %edx,0x4(%ebx)
08ab1af2 +0x51d:  jmp    08ab1cf9 <+0x724>
08ab1af7 +0x522:  movl   $"vector::_M_insert_aux",0x8(%esp)
08ab1aff +0x52a:  movl   $0x1,0x4(%esp)
08ab1b07 +0x532:  mov    0x8(%ebp),%eax
08ab1b0a +0x535:  mov    %eax,(%esp)
08ab1b0d +0x538:  call   08ab1dd4 <+0x7ff>
08ab1b12 +0x53d:  mov    %eax,-0x18(%ebp)
08ab1b15 +0x540:  lea    -0x1c(%ebp),%eax
08ab1b18 +0x543:  mov    0x8(%ebp),%edx
08ab1b1b +0x546:  mov    %edx,0x4(%esp)
08ab1b1f +0x54a:  mov    %eax,(%esp)
08ab1b22 +0x54d:  call   08ab16a2 <+0xcd>
08ab1b27 +0x552:  sub    $0x4,%esp
08ab1b2a +0x555:  lea    -0x1c(%ebp),%eax
08ab1b2d +0x558:  mov    %eax,0x4(%esp)
08ab1b31 +0x55c:  lea    0xc(%ebp),%eax
08ab1b34 +0x55f:  mov    %eax,(%esp)
08ab1b37 +0x562:  call   08ab1d03 <+0x72e>
08ab1b3c +0x567:  mov    %eax,-0x14(%ebp)
08ab1b3f +0x56a:  mov    0x8(%ebp),%eax
08ab1b42 +0x56d:  mov    -0x18(%ebp),%edx
08ab1b45 +0x570:  mov    %edx,0x4(%esp)
08ab1b49 +0x574:  mov    %eax,(%esp)
08ab1b4c +0x577:  call   08ab1e7a <+0x8a5>
08ab1b51 +0x57c:  mov    %eax,-0x10(%ebp)
08ab1b54 +0x57f:  mov    -0x10(%ebp),%eax
08ab1b57 +0x582:  mov    %eax,-0xc(%ebp)
08ab1b5a +0x585:  mov    0x10(%ebp),%eax
08ab1b5d +0x588:  mov    %eax,(%esp)
08ab1b60 +0x58b:  call   08ab1dcb <+0x7f6>
08ab1b65 +0x590:  mov    -0x14(%ebp),%edx
08ab1b68 +0x593:  shl    $0x3,%edx
08ab1b6b +0x596:  mov    %edx,%ecx
08ab1b6d +0x598:  add    -0x10(%ebp),%ecx
08ab1b70 +0x59b:  mov    0x8(%ebp),%edx
08ab1b73 +0x59e:  mov    %eax,0x8(%esp)
08ab1b77 +0x5a2:  mov    %ecx,0x4(%esp)
08ab1b7b +0x5a6:  mov    %edx,(%esp)
08ab1b7e +0x5a9:  call   08ab1a1c <+0x447>
08ab1b83 +0x5ae:  movl   $0x0,-0xc(%ebp)
08ab1b8a +0x5b5:  mov    0x8(%ebp),%eax
08ab1b8d +0x5b8:  mov    %eax,(%esp)
08ab1b90 +0x5bb:  call   082b59d4 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x78cf>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x78cf
08ab1b95 +0x5c0:  mov    %eax,%ebx
08ab1b97 +0x5c2:  lea    0xc(%ebp),%eax
08ab1b9a +0x5c5:  mov    %eax,(%esp)
08ab1b9d +0x5c8:  call   08ab1a14 <+0x43f>
08ab1ba2 +0x5cd:  mov    (%eax),%edx
08ab1ba4 +0x5cf:  mov    0x8(%ebp),%eax
08ab1ba7 +0x5d2:  mov    (%eax),%eax
08ab1ba9 +0x5d4:  mov    %ebx,0xc(%esp)
08ab1bad +0x5d8:  mov    -0x10(%ebp),%ecx
08ab1bb0 +0x5db:  mov    %ecx,0x8(%esp)
08ab1bb4 +0x5df:  mov    %edx,0x4(%esp)
08ab1bb8 +0x5e3:  mov    %eax,(%esp)
08ab1bbb +0x5e6:  call   08ab1ea9 <+0x8d4>
08ab1bc0 +0x5eb:  mov    %eax,-0xc(%ebp)
08ab1bc3 +0x5ee:  addl   $0x8,-0xc(%ebp)
08ab1bc7 +0x5f2:  mov    0x8(%ebp),%eax
08ab1bca +0x5f5:  mov    %eax,(%esp)
08ab1bcd +0x5f8:  call   082b59d4 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x78cf>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x78cf
08ab1bd2 +0x5fd:  mov    %eax,%ebx
08ab1bd4 +0x5ff:  mov    0x8(%ebp),%eax
08ab1bd7 +0x602:  mov    0x4(%eax),%esi
08ab1bda +0x605:  lea    0xc(%ebp),%eax
08ab1bdd +0x608:  mov    %eax,(%esp)
08ab1be0 +0x60b:  call   08ab1a14 <+0x43f>
08ab1be5 +0x610:  mov    (%eax),%eax
08ab1be7 +0x612:  mov    %ebx,0xc(%esp)
08ab1beb +0x616:  mov    -0xc(%ebp),%edx
08ab1bee +0x619:  mov    %edx,0x8(%esp)
08ab1bf2 +0x61d:  mov    %esi,0x4(%esp)
08ab1bf6 +0x621:  mov    %eax,(%esp)
08ab1bf9 +0x624:  call   08ab1ea9 <+0x8d4>
08ab1bfe +0x629:  mov    %eax,-0xc(%ebp)
08ab1c01 +0x62c:  mov    0x8(%ebp),%eax
08ab1c04 +0x62f:  mov    %eax,(%esp)
08ab1c07 +0x632:  call   082b59d4 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x78cf>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x78cf
08ab1c0c +0x637:  mov    0x8(%ebp),%edx
08ab1c0f +0x63a:  mov    0x4(%edx),%ecx
08ab1c12 +0x63d:  mov    0x8(%ebp),%edx
08ab1c15 +0x640:  mov    (%edx),%edx
08ab1c17 +0x642:  mov    %eax,0x8(%esp)
08ab1c1b +0x646:  mov    %ecx,0x4(%esp)
08ab1c1f +0x64a:  mov    %edx,(%esp)
08ab1c22 +0x64d:  call   082b59dc <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x78d7>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x78d7
08ab1c27 +0x652:  mov    0x8(%ebp),%eax
08ab1c2a +0x655:  mov    0x8(%eax),%eax
08ab1c2d +0x658:  mov    %eax,%edx
08ab1c2f +0x65a:  mov    0x8(%ebp),%eax
08ab1c32 +0x65d:  mov    (%eax),%eax
08ab1c34 +0x65f:  mov    %edx,%ecx
08ab1c36 +0x661:  sub    %eax,%ecx
08ab1c38 +0x663:  mov    %ecx,%eax
08ab1c3a +0x665:  sar    $0x3,%eax
08ab1c3d +0x668:  mov    %eax,%ecx
08ab1c3f +0x66a:  mov    0x8(%ebp),%eax
08ab1c42 +0x66d:  mov    (%eax),%edx
08ab1c44 +0x66f:  mov    0x8(%ebp),%eax
08ab1c47 +0x672:  mov    %ecx,0x8(%esp)
08ab1c4b +0x676:  mov    %edx,0x4(%esp)
08ab1c4f +0x67a:  mov    %eax,(%esp)
08ab1c52 +0x67d:  call   082bec58 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x10b53>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x10b53
08ab1c57 +0x682:  mov    0x8(%ebp),%eax
08ab1c5a +0x685:  mov    -0x10(%ebp),%edx
08ab1c5d +0x688:  mov    %edx,(%eax)
08ab1c5f +0x68a:  mov    0x8(%ebp),%eax
08ab1c62 +0x68d:  mov    -0xc(%ebp),%edx
08ab1c65 +0x690:  mov    %edx,0x4(%eax)
08ab1c68 +0x693:  mov    -0x18(%ebp),%eax
08ab1c6b +0x696:  shl    $0x3,%eax
08ab1c6e +0x699:  mov    %eax,%edx
08ab1c70 +0x69b:  add    -0x10(%ebp),%edx
08ab1c73 +0x69e:  mov    0x8(%ebp),%eax
08ab1c76 +0x6a1:  mov    %edx,0x8(%eax)
08ab1c79 +0x6a4:  jmp    08ab1cf9 <+0x724>
08ab1c7b +0x6a6:  mov    %eax,(%esp)
08ab1c7e +0x6a9:  call   08725ce0 <__cxa_begin_catch>
08ab1c83 +0x6ae:  cmpl   $0x0,-0xc(%ebp)
08ab1c87 +0x6b2:  jne    08ab1ca5 <+0x6d0>
08ab1c89 +0x6b4:  mov    -0x14(%ebp),%eax
08ab1c8c +0x6b7:  shl    $0x3,%eax
08ab1c8f +0x6ba:  mov    %eax,%edx
08ab1c91 +0x6bc:  add    -0x10(%ebp),%edx
08ab1c94 +0x6bf:  mov    0x8(%ebp),%eax
08ab1c97 +0x6c2:  mov    %edx,0x4(%esp)
08ab1c9b +0x6c6:  mov    %eax,(%esp)
08ab1c9e +0x6c9:  call   08ab1f02 <+0x92d>
08ab1ca3 +0x6ce:  jmp    08ab1cc6 <+0x6f1>
08ab1ca5 +0x6d0:  mov    0x8(%ebp),%eax
08ab1ca8 +0x6d3:  mov    %eax,(%esp)
08ab1cab +0x6d6:  call   082b59d4 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x78cf>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x78cf
08ab1cb0 +0x6db:  mov    %eax,0x8(%esp)
08ab1cb4 +0x6df:  mov    -0xc(%ebp),%eax
08ab1cb7 +0x6e2:  mov    %eax,0x4(%esp)
08ab1cbb +0x6e6:  mov    -0x10(%ebp),%eax
08ab1cbe +0x6e9:  mov    %eax,(%esp)
08ab1cc1 +0x6ec:  call   082b59dc <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x78d7>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x78d7
08ab1cc6 +0x6f1:  mov    0x8(%ebp),%eax
08ab1cc9 +0x6f4:  mov    -0x18(%ebp),%edx
08ab1ccc +0x6f7:  mov    %edx,0x8(%esp)
08ab1cd0 +0x6fb:  mov    -0x10(%ebp),%edx
08ab1cd3 +0x6fe:  mov    %edx,0x4(%esp)
08ab1cd7 +0x702:  mov    %eax,(%esp)
08ab1cda +0x705:  call   082bec58 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x10b53>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x10b53
08ab1cdf +0x70a:  call   08724be0 <__cxa_rethrow>
08ab1ce4 +0x70f:  mov    %edx,%ebx
08ab1ce6 +0x711:  mov    %eax,%esi
08ab1ce8 +0x713:  call   08725c30 <__cxa_end_catch>
08ab1ced +0x718:  mov    %esi,%eax
08ab1cef +0x71a:  mov    %ebx,%edx
08ab1cf1 +0x71c:  mov    %eax,(%esp)
08ab1cf4 +0x71f:  call   08ae3750 <_Unwind_Resume>
08ab1cf9 +0x724:  lea    -0x8(%ebp),%esp
08ab1cfc +0x727:  add    $0x0,%esp
08ab1cff +0x72a:  pop    %ebx
08ab1d00 +0x72b:  pop    %esi
08ab1d01 +0x72c:  pop    %ebp
08ab1d02 +0x72d:  ret
08ab1d03 +0x72e:  push   %ebp
08ab1d04 +0x72f:  mov    %esp,%ebp
08ab1d06 +0x731:  push   %ebx
08ab1d07 +0x732:  sub    $0x14,%esp
08ab1d0a +0x735:  mov    0x8(%ebp),%eax
08ab1d0d +0x738:  mov    %eax,(%esp)
08ab1d10 +0x73b:  call   08ab1a14 <+0x43f>
08ab1d15 +0x740:  mov    (%eax),%eax
08ab1d17 +0x742:  mov    %eax,%ebx
08ab1d19 +0x744:  mov    0xc(%ebp),%eax
08ab1d1c +0x747:  mov    %eax,(%esp)
08ab1d1f +0x74a:  call   08ab1a14 <+0x43f>
08ab1d24 +0x74f:  mov    (%eax),%eax
08ab1d26 +0x751:  mov    %ebx,%edx
08ab1d28 +0x753:  sub    %eax,%edx
08ab1d2a +0x755:  mov    %edx,%eax
08ab1d2c +0x757:  sar    $0x3,%eax
08ab1d2f +0x75a:  add    $0x14,%esp
08ab1d32 +0x75d:  pop    %ebx
08ab1d33 +0x75e:  pop    %ebp
08ab1d34 +0x75f:  ret
08ab1d35 +0x760:  nop
08ab1d36 +0x761:  push   %ebp
08ab1d37 +0x762:  mov    %esp,%ebp
08ab1d39 +0x764:  mov    0x8(%ebp),%eax
08ab1d3c +0x767:  mov    (%eax),%eax
08ab1d3e +0x769:  lea    0x8(%eax),%edx
08ab1d41 +0x76c:  mov    0x8(%ebp),%eax
08ab1d44 +0x76f:  mov    %edx,(%eax)
08ab1d46 +0x771:  mov    0x8(%ebp),%eax
08ab1d49 +0x774:  pop    %ebp
08ab1d4a +0x775:  ret
08ab1d4b +0x776:  push   %ebp
08ab1d4c +0x777:  mov    %esp,%ebp
08ab1d4e +0x779:  mov    0x8(%ebp),%eax
08ab1d51 +0x77c:  pop    %ebp
08ab1d52 +0x77d:  ret
08ab1d53 +0x77e:  nop
08ab1d54 +0x77f:  push   %ebp
08ab1d55 +0x780:  mov    %esp,%ebp
08ab1d57 +0x782:  push   %ebx
08ab1d58 +0x783:  sub    $0x14,%esp
08ab1d5b +0x786:  mov    0x10(%ebp),%eax
08ab1d5e +0x789:  mov    %eax,(%esp)
08ab1d61 +0x78c:  call   08ab1f15 <+0x940>
08ab1d66 +0x791:  mov    %eax,%ebx
08ab1d68 +0x793:  mov    0xc(%ebp),%eax
08ab1d6b +0x796:  mov    %eax,0x4(%esp)
08ab1d6f +0x79a:  movl   $0x8,(%esp)
08ab1d76 +0x7a1:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08ab1d7b +0x7a6:  mov    %eax,%edx
08ab1d7d +0x7a8:  test   %edx,%edx
08ab1d7f +0x7aa:  je     08ab1d8d <+0x7b8>
08ab1d81 +0x7ac:  mov    %eax,%ecx
08ab1d83 +0x7ae:  mov    (%ebx),%eax
08ab1d85 +0x7b0:  mov    0x4(%ebx),%edx
08ab1d88 +0x7b3:  mov    %eax,(%ecx)
08ab1d8a +0x7b5:  mov    %edx,0x4(%ecx)
08ab1d8d +0x7b8:  add    $0x14,%esp
08ab1d90 +0x7bb:  pop    %ebx
08ab1d91 +0x7bc:  pop    %ebp
08ab1d92 +0x7bd:  ret
08ab1d93 +0x7be:  push   %ebp
08ab1d94 +0x7bf:  mov    %esp,%ebp
08ab1d96 +0x7c1:  push   %ebx
08ab1d97 +0x7c2:  sub    $0x14,%esp
08ab1d9a +0x7c5:  mov    0xc(%ebp),%eax
08ab1d9d +0x7c8:  mov    %eax,(%esp)
08ab1da0 +0x7cb:  call   08ab1f1d <+0x948>
08ab1da5 +0x7d0:  mov    %eax,%ebx
08ab1da7 +0x7d2:  mov    0x8(%ebp),%eax
08ab1daa +0x7d5:  mov    %eax,(%esp)
08ab1dad +0x7d8:  call   08ab1f1d <+0x948>
08ab1db2 +0x7dd:  mov    0x10(%ebp),%edx
08ab1db5 +0x7e0:  mov    %edx,0x8(%esp)
08ab1db9 +0x7e4:  mov    %ebx,0x4(%esp)
08ab1dbd +0x7e8:  mov    %eax,(%esp)
08ab1dc0 +0x7eb:  call   08ab1f25 <+0x950>
08ab1dc5 +0x7f0:  add    $0x14,%esp
08ab1dc8 +0x7f3:  pop    %ebx
08ab1dc9 +0x7f4:  pop    %ebp
08ab1dca +0x7f5:  ret
08ab1dcb +0x7f6:  push   %ebp
08ab1dcc +0x7f7:  mov    %esp,%ebp
08ab1dce +0x7f9:  mov    0x8(%ebp),%eax
08ab1dd1 +0x7fc:  pop    %ebp
08ab1dd2 +0x7fd:  ret
08ab1dd3 +0x7fe:  nop
08ab1dd4 +0x7ff:  push   %ebp
08ab1dd5 +0x800:  mov    %esp,%ebp
08ab1dd7 +0x802:  push   %ebx
08ab1dd8 +0x803:  sub    $0x24,%esp
08ab1ddb +0x806:  mov    0x8(%ebp),%eax
08ab1dde +0x809:  mov    %eax,(%esp)
08ab1de1 +0x80c:  call   08ab1f86 <+0x9b1>
08ab1de6 +0x811:  mov    %eax,%ebx
08ab1de8 +0x813:  mov    0x8(%ebp),%eax
08ab1deb +0x816:  mov    %eax,(%esp)
08ab1dee +0x819:  call   08ab1f6a <+0x995>
08ab1df3 +0x81e:  mov    %ebx,%edx
08ab1df5 +0x820:  sub    %eax,%edx
08ab1df7 +0x822:  mov    0xc(%ebp),%eax
08ab1dfa +0x825:  cmp    %eax,%edx
08ab1dfc +0x827:  setb   %al
08ab1dff +0x82a:  test   %al,%al
08ab1e01 +0x82c:  je     08ab1e0e <+0x839>
08ab1e03 +0x82e:  mov    0x10(%ebp),%eax
08ab1e06 +0x831:  mov    %eax,(%esp)
08ab1e09 +0x834:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08ab1e0e +0x839:  mov    0x8(%ebp),%eax
08ab1e11 +0x83c:  mov    %eax,(%esp)
08ab1e14 +0x83f:  call   08ab1f6a <+0x995>
08ab1e19 +0x844:  mov    %eax,%ebx
08ab1e1b +0x846:  mov    0x8(%ebp),%eax
08ab1e1e +0x849:  mov    %eax,(%esp)
08ab1e21 +0x84c:  call   08ab1f6a <+0x995>
08ab1e26 +0x851:  mov    %eax,-0x10(%ebp)
08ab1e29 +0x854:  lea    0xc(%ebp),%eax
08ab1e2c +0x857:  mov    %eax,0x4(%esp)
08ab1e30 +0x85b:  lea    -0x10(%ebp),%eax
08ab1e33 +0x85e:  mov    %eax,(%esp)
08ab1e36 +0x861:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08ab1e3b +0x866:  mov    (%eax),%eax
08ab1e3d +0x868:  lea    (%ebx,%eax,1),%eax
08ab1e40 +0x86b:  mov    %eax,-0xc(%ebp)
08ab1e43 +0x86e:  mov    0x8(%ebp),%eax
08ab1e46 +0x871:  mov    %eax,(%esp)
08ab1e49 +0x874:  call   08ab1f6a <+0x995>
08ab1e4e +0x879:  cmp    -0xc(%ebp),%eax
08ab1e51 +0x87c:  ja     08ab1e63 <+0x88e>
08ab1e53 +0x87e:  mov    0x8(%ebp),%eax
08ab1e56 +0x881:  mov    %eax,(%esp)
08ab1e59 +0x884:  call   08ab1f86 <+0x9b1>
08ab1e5e +0x889:  cmp    -0xc(%ebp),%eax
08ab1e61 +0x88c:  jae    08ab1e70 <+0x89b>
08ab1e63 +0x88e:  mov    0x8(%ebp),%eax
08ab1e66 +0x891:  mov    %eax,(%esp)
08ab1e69 +0x894:  call   08ab1f86 <+0x9b1>
08ab1e6e +0x899:  jmp    08ab1e73 <+0x89e>
08ab1e70 +0x89b:  mov    -0xc(%ebp),%eax
08ab1e73 +0x89e:  add    $0x24,%esp
08ab1e76 +0x8a1:  pop    %ebx
08ab1e77 +0x8a2:  pop    %ebp
08ab1e78 +0x8a3:  ret
08ab1e79 +0x8a4:  nop
08ab1e7a +0x8a5:  push   %ebp
08ab1e7b +0x8a6:  mov    %esp,%ebp
08ab1e7d +0x8a8:  sub    $0x18,%esp
08ab1e80 +0x8ab:  cmpl   $0x0,0xc(%ebp)
08ab1e84 +0x8af:  je     08ab1ea2 <+0x8cd>
08ab1e86 +0x8b1:  mov    0x8(%ebp),%eax
08ab1e89 +0x8b4:  movl   $0x0,0x8(%esp)
08ab1e91 +0x8bc:  mov    0xc(%ebp),%edx
08ab1e94 +0x8bf:  mov    %edx,0x4(%esp)
08ab1e98 +0x8c3:  mov    %eax,(%esp)
08ab1e9b +0x8c6:  call   08ab1fa2 <+0x9cd>
08ab1ea0 +0x8cb:  jmp    08ab1ea7 <+0x8d2>
08ab1ea2 +0x8cd:  mov    $0x0,%eax
08ab1ea7 +0x8d2:  leave
08ab1ea8 +0x8d3:  ret
08ab1ea9 +0x8d4:  push   %ebp
08ab1eaa +0x8d5:  mov    %esp,%ebp
08ab1eac +0x8d7:  sub    $0x28,%esp
08ab1eaf +0x8da:  lea    -0x10(%ebp),%eax
08ab1eb2 +0x8dd:  lea    0xc(%ebp),%edx
08ab1eb5 +0x8e0:  mov    %edx,0x4(%esp)
08ab1eb9 +0x8e4:  mov    %eax,(%esp)
08ab1ebc +0x8e7:  call   08ab1fda <+0xa05>
08ab1ec1 +0x8ec:  sub    $0x4,%esp
08ab1ec4 +0x8ef:  lea    -0xc(%ebp),%eax
08ab1ec7 +0x8f2:  lea    0x8(%ebp),%edx
08ab1eca +0x8f5:  mov    %edx,0x4(%esp)
08ab1ece +0x8f9:  mov    %eax,(%esp)
08ab1ed1 +0x8fc:  call   08ab1fda <+0xa05>
08ab1ed6 +0x901:  sub    $0x4,%esp
08ab1ed9 +0x904:  mov    0x14(%ebp),%eax
08ab1edc +0x907:  mov    %eax,0xc(%esp)
08ab1ee0 +0x90b:  mov    0x10(%ebp),%eax
08ab1ee3 +0x90e:  mov    %eax,0x8(%esp)
08ab1ee7 +0x912:  mov    -0x10(%ebp),%eax
08ab1eea +0x915:  mov    %eax,0x4(%esp)
08ab1eee +0x919:  mov    -0xc(%ebp),%eax
08ab1ef1 +0x91c:  mov    %eax,(%esp)
08ab1ef4 +0x91f:  call   08ab1fff <+0xa2a>
08ab1ef9 +0x924:  leave
08ab1efa +0x925:  ret
08ab1efb +0x926:  nop
08ab1efc +0x927:  push   %ebp
08ab1efd +0x928:  mov    %esp,%ebp
08ab1eff +0x92a:  pop    %ebp
08ab1f00 +0x92b:  ret
08ab1f01 +0x92c:  nop
08ab1f02 +0x92d:  push   %ebp
08ab1f03 +0x92e:  mov    %esp,%ebp
08ab1f05 +0x930:  sub    $0x18,%esp
08ab1f08 +0x933:  mov    0xc(%ebp),%eax
08ab1f0b +0x936:  mov    %eax,(%esp)
08ab1f0e +0x939:  call   08ab1efc <+0x927>
08ab1f13 +0x93e:  leave
08ab1f14 +0x93f:  ret
08ab1f15 +0x940:  push   %ebp
08ab1f16 +0x941:  mov    %esp,%ebp
08ab1f18 +0x943:  mov    0x8(%ebp),%eax
08ab1f1b +0x946:  pop    %ebp
08ab1f1c +0x947:  ret
08ab1f1d +0x948:  push   %ebp
08ab1f1e +0x949:  mov    %esp,%ebp
08ab1f20 +0x94b:  mov    0x8(%ebp),%eax
08ab1f23 +0x94e:  pop    %ebp
08ab1f24 +0x94f:  ret
08ab1f25 +0x950:  push   %ebp
08ab1f26 +0x951:  mov    %esp,%ebp
08ab1f28 +0x953:  push   %esi
08ab1f29 +0x954:  push   %ebx
08ab1f2a +0x955:  sub    $0x10,%esp
08ab1f2d +0x958:  mov    0x10(%ebp),%eax
08ab1f30 +0x95b:  mov    %eax,(%esp)
08ab1f33 +0x95e:  call   08ab2020 <+0xa4b>
08ab1f38 +0x963:  mov    %eax,%esi
08ab1f3a +0x965:  mov    0xc(%ebp),%eax
08ab1f3d +0x968:  mov    %eax,(%esp)
08ab1f40 +0x96b:  call   08ab2020 <+0xa4b>
08ab1f45 +0x970:  mov    %eax,%ebx
08ab1f47 +0x972:  mov    0x8(%ebp),%eax
08ab1f4a +0x975:  mov    %eax,(%esp)
08ab1f4d +0x978:  call   08ab2020 <+0xa4b>
08ab1f52 +0x97d:  mov    %esi,0x8(%esp)
08ab1f56 +0x981:  mov    %ebx,0x4(%esp)
08ab1f5a +0x985:  mov    %eax,(%esp)
08ab1f5d +0x988:  call   08ab2028 <+0xa53>
08ab1f62 +0x98d:  add    $0x10,%esp
08ab1f65 +0x990:  pop    %ebx
08ab1f66 +0x991:  pop    %esi
08ab1f67 +0x992:  pop    %ebp
08ab1f68 +0x993:  ret
08ab1f69 +0x994:  nop
08ab1f6a +0x995:  push   %ebp
08ab1f6b +0x996:  mov    %esp,%ebp
08ab1f6d +0x998:  mov    0x8(%ebp),%eax
08ab1f70 +0x99b:  mov    0x4(%eax),%eax
08ab1f73 +0x99e:  mov    %eax,%edx
08ab1f75 +0x9a0:  mov    0x8(%ebp),%eax
08ab1f78 +0x9a3:  mov    (%eax),%eax
08ab1f7a +0x9a5:  mov    %edx,%ecx
08ab1f7c +0x9a7:  sub    %eax,%ecx
08ab1f7e +0x9a9:  mov    %ecx,%eax
08ab1f80 +0x9ab:  sar    $0x3,%eax
08ab1f83 +0x9ae:  pop    %ebp
08ab1f84 +0x9af:  ret
08ab1f85 +0x9b0:  nop
08ab1f86 +0x9b1:  push   %ebp
08ab1f87 +0x9b2:  mov    %esp,%ebp
08ab1f89 +0x9b4:  sub    $0x18,%esp
08ab1f8c +0x9b7:  mov    0x8(%ebp),%eax
08ab1f8f +0x9ba:  mov    %eax,(%esp)
08ab1f92 +0x9bd:  call   08ab204e <+0xa79>
08ab1f97 +0x9c2:  mov    %eax,(%esp)
08ab1f9a +0x9c5:  call   08ab2056 <+0xa81>
08ab1f9f +0x9ca:  leave
08ab1fa0 +0x9cb:  ret
08ab1fa1 +0x9cc:  nop
08ab1fa2 +0x9cd:  push   %ebp
08ab1fa3 +0x9ce:  mov    %esp,%ebp
08ab1fa5 +0x9d0:  sub    $0x18,%esp
08ab1fa8 +0x9d3:  mov    0x8(%ebp),%eax
08ab1fab +0x9d6:  mov    %eax,(%esp)
08ab1fae +0x9d9:  call   08ab2056 <+0xa81>
08ab1fb3 +0x9de:  cmp    0xc(%ebp),%eax
08ab1fb6 +0x9e1:  setb   %al
08ab1fb9 +0x9e4:  movzbl %al,%eax
08ab1fbc +0x9e7:  test   %eax,%eax
08ab1fbe +0x9e9:  setne  %al
08ab1fc1 +0x9ec:  test   %al,%al
08ab1fc3 +0x9ee:  je     08ab1fca <+0x9f5>
08ab1fc5 +0x9f0:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08ab1fca +0x9f5:  mov    0xc(%ebp),%eax
08ab1fcd +0x9f8:  shl    $0x3,%eax
08ab1fd0 +0x9fb:  mov    %eax,(%esp)
08ab1fd3 +0x9fe:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ab1fd8 +0xa03:  leave
08ab1fd9 +0xa04:  ret
08ab1fda +0xa05:  push   %ebp
08ab1fdb +0xa06:  mov    %esp,%ebp
08ab1fdd +0xa08:  push   %ebx
08ab1fde +0xa09:  sub    $0x14,%esp
08ab1fe1 +0xa0c:  mov    0x8(%ebp),%ebx
08ab1fe4 +0xa0f:  mov    0xc(%ebp),%eax
08ab1fe7 +0xa12:  mov    (%eax),%eax
08ab1fe9 +0xa14:  mov    %eax,0x4(%esp)
08ab1fed +0xa18:  mov    %ebx,(%esp)
08ab1ff0 +0xa1b:  call   08ab2060 <+0xa8b>
08ab1ff5 +0xa20:  mov    %ebx,%eax
08ab1ff7 +0xa22:  add    $0x14,%esp
08ab1ffa +0xa25:  pop    %ebx
08ab1ffb +0xa26:  pop    %ebp
08ab1ffc +0xa27:  ret    $0x4
08ab1fff +0xa2a:  push   %ebp
08ab2000 +0xa2b:  mov    %esp,%ebp
08ab2002 +0xa2d:  sub    $0x18,%esp
08ab2005 +0xa30:  mov    0x10(%ebp),%eax
08ab2008 +0xa33:  mov    %eax,0x8(%esp)
08ab200c +0xa37:  mov    0xc(%ebp),%eax
08ab200f +0xa3a:  mov    %eax,0x4(%esp)
08ab2013 +0xa3e:  mov    0x8(%ebp),%eax
08ab2016 +0xa41:  mov    %eax,(%esp)
08ab2019 +0xa44:  call   08ab206d <+0xa98>
08ab201e +0xa49:  leave
08ab201f +0xa4a:  ret
08ab2020 +0xa4b:  push   %ebp
08ab2021 +0xa4c:  mov    %esp,%ebp
08ab2023 +0xa4e:  mov    0x8(%ebp),%eax
08ab2026 +0xa51:  pop    %ebp
08ab2027 +0xa52:  ret
08ab2028 +0xa53:  push   %ebp
08ab2029 +0xa54:  mov    %esp,%ebp
08ab202b +0xa56:  sub    $0x28,%esp
08ab202e +0xa59:  movb   $0x0,-0x9(%ebp)
08ab2032 +0xa5d:  mov    0x10(%ebp),%eax
08ab2035 +0xa60:  mov    %eax,0x8(%esp)
08ab2039 +0xa64:  mov    0xc(%ebp),%eax
08ab203c +0xa67:  mov    %eax,0x4(%esp)
08ab2040 +0xa6b:  mov    0x8(%ebp),%eax
08ab2043 +0xa6e:  mov    %eax,(%esp)
08ab2046 +0xa71:  call   08ab208e <+0xab9>
08ab204b +0xa76:  leave
08ab204c +0xa77:  ret
08ab204d +0xa78:  nop
08ab204e +0xa79:  push   %ebp
08ab204f +0xa7a:  mov    %esp,%ebp
08ab2051 +0xa7c:  mov    0x8(%ebp),%eax
08ab2054 +0xa7f:  pop    %ebp
08ab2055 +0xa80:  ret
08ab2056 +0xa81:  push   %ebp
08ab2057 +0xa82:  mov    %esp,%ebp
08ab2059 +0xa84:  mov    $0x1fffffff,%eax
08ab205e +0xa89:  pop    %ebp
08ab205f +0xa8a:  ret
08ab2060 +0xa8b:  push   %ebp
08ab2061 +0xa8c:  mov    %esp,%ebp
08ab2063 +0xa8e:  mov    0x8(%ebp),%eax
08ab2066 +0xa91:  mov    0xc(%ebp),%edx
08ab2069 +0xa94:  mov    %edx,(%eax)
08ab206b +0xa96:  pop    %ebp
08ab206c +0xa97:  ret
08ab206d +0xa98:  push   %ebp
08ab206e +0xa99:  mov    %esp,%ebp
08ab2070 +0xa9b:  sub    $0x18,%esp
08ab2073 +0xa9e:  mov    0x10(%ebp),%eax
08ab2076 +0xaa1:  mov    %eax,0x8(%esp)
08ab207a +0xaa5:  mov    0xc(%ebp),%eax
08ab207d +0xaa8:  mov    %eax,0x4(%esp)
08ab2081 +0xaac:  mov    0x8(%ebp),%eax
08ab2084 +0xaaf:  mov    %eax,(%esp)
08ab2087 +0xab2:  call   08ab20e1 <+0xb0c>
08ab208c +0xab7:  leave
08ab208d +0xab8:  ret
08ab208e +0xab9:  push   %ebp
08ab208f +0xaba:  mov    %esp,%ebp
08ab2091 +0xabc:  push   %ebx
08ab2092 +0xabd:  sub    $0x24,%esp
08ab2095 +0xac0:  mov    0xc(%ebp),%edx
08ab2098 +0xac3:  mov    0x8(%ebp),%eax
08ab209b +0xac6:  mov    %edx,%ecx
08ab209d +0xac8:  sub    %eax,%ecx
08ab209f +0xaca:  mov    %ecx,%eax
08ab20a1 +0xacc:  sar    $0x3,%eax
08ab20a4 +0xacf:  mov    %eax,-0xc(%ebp)
08ab20a7 +0xad2:  jmp    08ab20cd <+0xaf8>
08ab20a9 +0xad4:  subl   $0x8,0x10(%ebp)
08ab20ad +0xad8:  mov    0x10(%ebp),%ebx
08ab20b0 +0xadb:  subl   $0x8,0xc(%ebp)
08ab20b4 +0xadf:  mov    0xc(%ebp),%eax
08ab20b7 +0xae2:  mov    %eax,(%esp)
08ab20ba +0xae5:  call   08ab1d4b <+0x776>
08ab20bf +0xaea:  mov    0x4(%eax),%edx
08ab20c2 +0xaed:  mov    (%eax),%eax
08ab20c4 +0xaef:  mov    %eax,(%ebx)
08ab20c6 +0xaf1:  mov    %edx,0x4(%ebx)
08ab20c9 +0xaf4:  subl   $0x1,-0xc(%ebp)
08ab20cd +0xaf8:  cmpl   $0x0,-0xc(%ebp)
08ab20d1 +0xafc:  setg   %al
08ab20d4 +0xaff:  test   %al,%al
08ab20d6 +0xb01:  jne    08ab20a9 <+0xad4>
08ab20d8 +0xb03:  mov    0x10(%ebp),%eax
08ab20db +0xb06:  add    $0x24,%esp
08ab20de +0xb09:  pop    %ebx
08ab20df +0xb0a:  pop    %ebp
08ab20e0 +0xb0b:  ret
08ab20e1 +0xb0c:  push   %ebp
08ab20e2 +0xb0d:  mov    %esp,%ebp
08ab20e4 +0xb0f:  push   %esi
08ab20e5 +0xb10:  push   %ebx
08ab20e6 +0xb11:  sub    $0x20,%esp
08ab20e9 +0xb14:  mov    0x10(%ebp),%eax
08ab20ec +0xb17:  mov    %eax,-0xc(%ebp)
08ab20ef +0xb1a:  jmp    08ab2132 <+0xb5d>
08ab20f1 +0xb1c:  lea    0x8(%ebp),%eax
08ab20f4 +0xb1f:  mov    %eax,(%esp)
08ab20f7 +0xb22:  call   08ab21ba <+0xbe5>
08ab20fc +0xb27:  mov    %eax,%ebx
08ab20fe +0xb29:  mov    -0xc(%ebp),%eax
08ab2101 +0xb2c:  mov    %eax,0x4(%esp)
08ab2105 +0xb30:  movl   $0x8,(%esp)
08ab210c +0xb37:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08ab2111 +0xb3c:  mov    %eax,%edx
08ab2113 +0xb3e:  test   %edx,%edx
08ab2115 +0xb40:  je     08ab2123 <+0xb4e>
08ab2117 +0xb42:  mov    %eax,%ecx
08ab2119 +0xb44:  mov    (%ebx),%eax
08ab211b +0xb46:  mov    0x4(%ebx),%edx
08ab211e +0xb49:  mov    %eax,(%ecx)
08ab2120 +0xb4b:  mov    %edx,0x4(%ecx)
08ab2123 +0xb4e:  lea    0x8(%ebp),%eax
08ab2126 +0xb51:  mov    %eax,(%esp)
08ab2129 +0xb54:  call   08ab21a4 <+0xbcf>
08ab212e +0xb59:  addl   $0x8,-0xc(%ebp)
08ab2132 +0xb5d:  lea    0xc(%ebp),%eax
08ab2135 +0xb60:  mov    %eax,0x4(%esp)
08ab2139 +0xb64:  lea    0x8(%ebp),%eax
08ab213c +0xb67:  mov    %eax,(%esp)
08ab213f +0xb6a:  call   08ab2186 <+0xbb1>
08ab2144 +0xb6f:  test   %al,%al
08ab2146 +0xb71:  jne    08ab20f1 <+0xb1c>
08ab2148 +0xb73:  mov    -0xc(%ebp),%eax
08ab214b +0xb76:  add    $0x20,%esp
08ab214e +0xb79:  pop    %ebx
08ab214f +0xb7a:  pop    %esi
08ab2150 +0xb7b:  pop    %ebp
08ab2151 +0xb7c:  ret
08ab2152 +0xb7d:  mov    %eax,(%esp)
08ab2155 +0xb80:  call   08725ce0 <__cxa_begin_catch>
08ab215a +0xb85:  mov    -0xc(%ebp),%eax
08ab215d +0xb88:  mov    %eax,0x4(%esp)
08ab2161 +0xb8c:  mov    0x10(%ebp),%eax
08ab2164 +0xb8f:  mov    %eax,(%esp)
08ab2167 +0xb92:  call   082bec7f <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x10b7a>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x10b7a
08ab216c +0xb97:  call   08724be0 <__cxa_rethrow>
08ab2171 +0xb9c:  mov    %edx,%ebx
08ab2173 +0xb9e:  mov    %eax,%esi
08ab2175 +0xba0:  call   08725c30 <__cxa_end_catch>
08ab217a +0xba5:  mov    %esi,%eax
08ab217c +0xba7:  mov    %ebx,%edx
08ab217e +0xba9:  mov    %eax,(%esp)
08ab2181 +0xbac:  call   08ae3750 <_Unwind_Resume>
08ab2186 +0xbb1:  push   %ebp
08ab2187 +0xbb2:  mov    %esp,%ebp
08ab2189 +0xbb4:  sub    $0x18,%esp
08ab218c +0xbb7:  mov    0xc(%ebp),%eax
08ab218f +0xbba:  mov    %eax,0x4(%esp)
08ab2193 +0xbbe:  mov    0x8(%ebp),%eax
08ab2196 +0xbc1:  mov    %eax,(%esp)
08ab2199 +0xbc4:  call   08ab21c4 <+0xbef>
08ab219e +0xbc9:  xor    $0x1,%eax
08ab21a1 +0xbcc:  leave
08ab21a2 +0xbcd:  ret
08ab21a3 +0xbce:  nop
08ab21a4 +0xbcf:  push   %ebp
08ab21a5 +0xbd0:  mov    %esp,%ebp
08ab21a7 +0xbd2:  mov    0x8(%ebp),%eax
08ab21aa +0xbd5:  mov    (%eax),%eax
08ab21ac +0xbd7:  lea    0x8(%eax),%edx
08ab21af +0xbda:  mov    0x8(%ebp),%eax
08ab21b2 +0xbdd:  mov    %edx,(%eax)
08ab21b4 +0xbdf:  mov    0x8(%ebp),%eax
08ab21b7 +0xbe2:  pop    %ebp
08ab21b8 +0xbe3:  ret
08ab21b9 +0xbe4:  nop
08ab21ba +0xbe5:  push   %ebp
08ab21bb +0xbe6:  mov    %esp,%ebp
08ab21bd +0xbe8:  mov    0x8(%ebp),%eax
08ab21c0 +0xbeb:  mov    (%eax),%eax
08ab21c2 +0xbed:  pop    %ebp
08ab21c3 +0xbee:  ret
08ab21c4 +0xbef:  push   %ebp
08ab21c5 +0xbf0:  mov    %esp,%ebp
08ab21c7 +0xbf2:  push   %ebx
08ab21c8 +0xbf3:  sub    $0x14,%esp
08ab21cb +0xbf6:  mov    0x8(%ebp),%eax
08ab21ce +0xbf9:  mov    %eax,(%esp)
08ab21d1 +0xbfc:  call   08ab21ee <+0xc19>
08ab21d6 +0xc01:  mov    %eax,%ebx
08ab21d8 +0xc03:  mov    0xc(%ebp),%eax
08ab21db +0xc06:  mov    %eax,(%esp)
08ab21de +0xc09:  call   08ab21ee <+0xc19>
08ab21e3 +0xc0e:  cmp    %eax,%ebx
08ab21e5 +0xc10:  sete   %al
08ab21e8 +0xc13:  add    $0x14,%esp
08ab21eb +0xc16:  pop    %ebx
08ab21ec +0xc17:  pop    %ebp
08ab21ed +0xc18:  ret
08ab21ee +0xc19:  push   %ebp
08ab21ef +0xc1a:  mov    %esp,%ebp
08ab21f1 +0xc1c:  mov    0x8(%ebp),%eax
08ab21f4 +0xc1f:  mov    (%eax),%eax
08ab21f6 +0xc21:  pop    %ebp
08ab21f7 +0xc22:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8ab15d5

/* secretshop::RETAILER::GetSaleInfo(int) */

void secretshop::RETAILER::_GLOBAL__I_GetSaleInfo(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
