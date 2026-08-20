# expire

`_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv`

`global constructors keyed to nexon::cash::UserBalance::expire()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to nexon::cash::UserBalance` | `0x081b163a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b163a  _GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv
#           global constructors keyed to nexon::cash::UserBalance::expire()
# range [0x081b163a, 0x081b25d7]
081b163a +0x000:  push   %ebp
081b163b +0x001:  mov    %esp,%ebp
081b163d +0x003:  sub    $0x18,%esp
081b1640 +0x006:  movl   $0xffff,0x4(%esp)
081b1648 +0x00e:  movl   $0x1,(%esp)
081b164f +0x015:  call   081b15fa <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081b1654 +0x01a:  leave
081b1655 +0x01b:  ret
081b1656 +0x01c:  push   %ebp
081b1657 +0x01d:  mov    %esp,%ebp
081b1659 +0x01f:  sub    $0x18,%esp
081b165c +0x022:  movl   $0x0,(%esp)
081b1663 +0x029:  call   0807d750 <_init+0x48>
081b1668 +0x02e:  mov    0x8(%ebp),%edx
081b166b +0x031:  mov    0x8(%edx),%edx
081b166e +0x034:  sub    %edx,%eax
081b1670 +0x036:  cmp    $0xf,%eax
081b1673 +0x039:  setg   %al
081b1676 +0x03c:  leave
081b1677 +0x03d:  ret
081b1678 +0x03e:  push   %ebp
081b1679 +0x03f:  mov    %esp,%ebp
081b167b +0x041:  push   %ebx
081b167c +0x042:  sub    $0x14,%esp
081b167f +0x045:  mov    0x8(%ebp),%ebx
081b1682 +0x048:  mov    0xc(%ebp),%eax
081b1685 +0x04b:  mov    %eax,0x4(%esp)
081b1689 +0x04f:  mov    %ebx,(%esp)
081b168c +0x052:  call   081b1a38 <+0x3fe>
081b1691 +0x057:  mov    %ebx,%eax
081b1693 +0x059:  add    $0x14,%esp
081b1696 +0x05c:  pop    %ebx
081b1697 +0x05d:  pop    %ebp
081b1698 +0x05e:  ret    $0x4
081b169b +0x061:  nop
081b169c +0x062:  push   %ebp
081b169d +0x063:  mov    %esp,%ebp
081b169f +0x065:  push   %ebx
081b16a0 +0x066:  sub    $0x14,%esp
081b16a3 +0x069:  mov    0x8(%ebp),%ebx
081b16a6 +0x06c:  mov    0xc(%ebp),%eax
081b16a9 +0x06f:  add    $0x4,%eax
081b16ac +0x072:  mov    %eax,0x4(%esp)
081b16b0 +0x076:  mov    %ebx,(%esp)
081b16b3 +0x079:  call   081b1a38 <+0x3fe>
081b16b8 +0x07e:  mov    %ebx,%eax
081b16ba +0x080:  add    $0x14,%esp
081b16bd +0x083:  pop    %ebx
081b16be +0x084:  pop    %ebp
081b16bf +0x085:  ret    $0x4
081b16c2 +0x088:  push   %ebp
081b16c3 +0x089:  mov    %esp,%ebp
081b16c5 +0x08b:  push   %ebx
081b16c6 +0x08c:  sub    $0x14,%esp
081b16c9 +0x08f:  mov    0x8(%ebp),%eax
081b16cc +0x092:  mov    %eax,(%esp)
081b16cf +0x095:  call   081b1a48 <+0x40e>
081b16d4 +0x09a:  mov    (%eax),%ebx
081b16d6 +0x09c:  mov    0xc(%ebp),%eax
081b16d9 +0x09f:  mov    %eax,(%esp)
081b16dc +0x0a2:  call   081b1a48 <+0x40e>
081b16e1 +0x0a7:  mov    (%eax),%eax
081b16e3 +0x0a9:  cmp    %eax,%ebx
081b16e5 +0x0ab:  setne  %al
081b16e8 +0x0ae:  add    $0x14,%esp
081b16eb +0x0b1:  pop    %ebx
081b16ec +0x0b2:  pop    %ebp
081b16ed +0x0b3:  ret
081b16ee +0x0b4:  push   %ebp
081b16ef +0x0b5:  mov    %esp,%ebp
081b16f1 +0x0b7:  mov    0x8(%ebp),%eax
081b16f4 +0x0ba:  mov    (%eax),%eax
081b16f6 +0x0bc:  pop    %ebp
081b16f7 +0x0bd:  ret
081b16f8 +0x0be:  push   %ebp
081b16f9 +0x0bf:  mov    %esp,%ebp
081b16fb +0x0c1:  push   %ebx
081b16fc +0x0c2:  sub    $0x34,%esp
081b16ff +0x0c5:  mov    0x8(%ebp),%ebx
081b1702 +0x0c8:  lea    -0x24(%ebp),%eax
081b1705 +0x0cb:  mov    0xc(%ebp),%edx
081b1708 +0x0ce:  mov    %edx,0x4(%esp)
081b170c +0x0d2:  mov    %eax,(%esp)
081b170f +0x0d5:  call   081b169c <+0x62>
081b1714 +0x0da:  sub    $0x4,%esp
081b1717 +0x0dd:  movl   $0x1,-0x1c(%ebp)
081b171e +0x0e4:  lea    -0x20(%ebp),%eax
081b1721 +0x0e7:  lea    -0x1c(%ebp),%edx
081b1724 +0x0ea:  mov    %edx,0x8(%esp)
081b1728 +0x0ee:  lea    0x10(%ebp),%edx
081b172b +0x0f1:  mov    %edx,0x4(%esp)
081b172f +0x0f5:  mov    %eax,(%esp)
081b1732 +0x0f8:  call   081b1a50 <+0x416>
081b1737 +0x0fd:  sub    $0x4,%esp
081b173a +0x100:  lea    -0x24(%ebp),%eax
081b173d +0x103:  mov    %eax,0x4(%esp)
081b1741 +0x107:  lea    -0x20(%ebp),%eax
081b1744 +0x10a:  mov    %eax,(%esp)
081b1747 +0x10d:  call   081b16c2 <+0x88>
081b174c +0x112:  test   %al,%al
081b174e +0x114:  je     081b17ab <+0x171>
081b1750 +0x116:  lea    -0x14(%ebp),%eax
081b1753 +0x119:  mov    0xc(%ebp),%edx
081b1756 +0x11c:  mov    %edx,0x4(%esp)
081b175a +0x120:  mov    %eax,(%esp)
081b175d +0x123:  call   081b169c <+0x62>
081b1762 +0x128:  sub    $0x4,%esp
081b1765 +0x12b:  movl   $0x1,-0xc(%ebp)
081b176c +0x132:  lea    -0x10(%ebp),%eax
081b176f +0x135:  lea    -0xc(%ebp),%edx
081b1772 +0x138:  mov    %edx,0x8(%esp)
081b1776 +0x13c:  lea    0x10(%ebp),%edx
081b1779 +0x13f:  mov    %edx,0x4(%esp)
081b177d +0x143:  mov    %eax,(%esp)
081b1780 +0x146:  call   081b1a50 <+0x416>
081b1785 +0x14b:  sub    $0x4,%esp
081b1788 +0x14e:  lea    -0x18(%ebp),%eax
081b178b +0x151:  mov    0x10(%ebp),%edx
081b178e +0x154:  mov    %edx,0xc(%esp)
081b1792 +0x158:  mov    -0x14(%ebp),%edx
081b1795 +0x15b:  mov    %edx,0x8(%esp)
081b1799 +0x15f:  mov    -0x10(%ebp),%edx
081b179c +0x162:  mov    %edx,0x4(%esp)
081b17a0 +0x166:  mov    %eax,(%esp)
081b17a3 +0x169:  call   081b1a86 <+0x44c>
081b17a8 +0x16e:  sub    $0x4,%esp
081b17ab +0x171:  mov    0xc(%ebp),%eax
081b17ae +0x174:  mov    0x4(%eax),%eax
081b17b1 +0x177:  lea    -0x4(%eax),%edx
081b17b4 +0x17a:  mov    0xc(%ebp),%eax
081b17b7 +0x17d:  mov    %edx,0x4(%eax)
081b17ba +0x180:  mov    0xc(%ebp),%eax
081b17bd +0x183:  mov    0x4(%eax),%edx
081b17c0 +0x186:  mov    0xc(%ebp),%eax
081b17c3 +0x189:  mov    %edx,0x4(%esp)
081b17c7 +0x18d:  mov    %eax,(%esp)
081b17ca +0x190:  call   081b1ae4 <+0x4aa>
081b17cf +0x195:  mov    0x10(%ebp),%eax
081b17d2 +0x198:  mov    %eax,(%ebx)
081b17d4 +0x19a:  mov    %ebx,%eax
081b17d6 +0x19c:  mov    -0x4(%ebp),%ebx
081b17d9 +0x19f:  leave
081b17da +0x1a0:  ret    $0x4
081b17dd +0x1a3:  nop
081b17de +0x1a4:  push   %ebp
081b17df +0x1a5:  mov    %esp,%ebp
081b17e1 +0x1a7:  mov    0x8(%ebp),%eax
081b17e4 +0x1aa:  mov    (%eax),%eax
081b17e6 +0x1ac:  lea    0x4(%eax),%edx
081b17e9 +0x1af:  mov    0x8(%ebp),%eax
081b17ec +0x1b2:  mov    %edx,(%eax)
081b17ee +0x1b4:  mov    0x8(%ebp),%eax
081b17f1 +0x1b7:  pop    %ebp
081b17f2 +0x1b8:  ret
081b17f3 +0x1b9:  push   %ebp
081b17f4 +0x1ba:  mov    %esp,%ebp
081b17f6 +0x1bc:  push   %esi
081b17f7 +0x1bd:  push   %ebx
081b17f8 +0x1be:  sub    $0x30,%esp
081b17fb +0x1c1:  mov    0x8(%ebp),%ebx
081b17fe +0x1c4:  lea    -0x1c(%ebp),%eax
081b1801 +0x1c7:  mov    0x14(%ebp),%edx
081b1804 +0x1ca:  mov    %edx,0xc(%esp)
081b1808 +0x1ce:  mov    0x10(%ebp),%edx
081b180b +0x1d1:  mov    %edx,0x8(%esp)
081b180f +0x1d5:  mov    0xc(%ebp),%edx
081b1812 +0x1d8:  mov    %edx,0x4(%esp)
081b1816 +0x1dc:  mov    %eax,(%esp)
081b1819 +0x1df:  call   081b1ae9 <+0x4af>
081b181e +0x1e4:  sub    $0x4,%esp
081b1821 +0x1e7:  mov    -0x1c(%ebp),%eax
081b1824 +0x1ea:  mov    %eax,0xc(%ebp)
081b1827 +0x1ed:  lea    0x10(%ebp),%eax
081b182a +0x1f0:  mov    %eax,0x4(%esp)
081b182e +0x1f4:  lea    0xc(%ebp),%eax
081b1831 +0x1f7:  mov    %eax,(%esp)
081b1834 +0x1fa:  call   081b1b3d <+0x503>
081b1839 +0x1ff:  test   %al,%al
081b183b +0x201:  je     081b1847 <+0x20d>
081b183d +0x203:  mov    0xc(%ebp),%eax
081b1840 +0x206:  mov    %eax,(%ebx)
081b1842 +0x208:  jmp    081b18ca <+0x290>
081b1847 +0x20d:  mov    0xc(%ebp),%eax
081b184a +0x210:  mov    %eax,-0xc(%ebp)
081b184d +0x213:  lea    0xc(%ebp),%eax
081b1850 +0x216:  mov    %eax,(%esp)
081b1853 +0x219:  call   081b17de <+0x1a4>
081b1858 +0x21e:  jmp    081b18af <+0x275>
081b185a +0x220:  lea    0xc(%ebp),%eax
081b185d +0x223:  mov    %eax,(%esp)
081b1860 +0x226:  call   081b16ee <+0xb4>
081b1865 +0x22b:  mov    (%eax),%edx
081b1867 +0x22d:  mov    0x14(%ebp),%eax
081b186a +0x230:  mov    (%eax),%eax
081b186c +0x232:  cmp    %eax,%edx
081b186e +0x234:  setne  %al
081b1871 +0x237:  test   %al,%al
081b1873 +0x239:  je     081b18a4 <+0x26a>
081b1875 +0x23b:  lea    -0xc(%ebp),%eax
081b1878 +0x23e:  mov    %eax,(%esp)
081b187b +0x241:  call   081b16ee <+0xb4>
081b1880 +0x246:  mov    %eax,%esi
081b1882 +0x248:  lea    0xc(%ebp),%eax
081b1885 +0x24b:  mov    %eax,(%esp)
081b1888 +0x24e:  call   081b16ee <+0xb4>
081b188d +0x253:  mov    %eax,(%esp)
081b1890 +0x256:  call   081b08b5 <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0x48d>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0x48d
081b1895 +0x25b:  mov    (%eax),%eax
081b1897 +0x25d:  mov    %eax,(%esi)
081b1899 +0x25f:  lea    -0xc(%ebp),%eax
081b189c +0x262:  mov    %eax,(%esp)
081b189f +0x265:  call   081b17de <+0x1a4>
081b18a4 +0x26a:  lea    0xc(%ebp),%eax
081b18a7 +0x26d:  mov    %eax,(%esp)
081b18aa +0x270:  call   081b17de <+0x1a4>
081b18af +0x275:  lea    0x10(%ebp),%eax
081b18b2 +0x278:  mov    %eax,0x4(%esp)
081b18b6 +0x27c:  lea    0xc(%ebp),%eax
081b18b9 +0x27f:  mov    %eax,(%esp)
081b18bc +0x282:  call   081b16c2 <+0x88>
081b18c1 +0x287:  test   %al,%al
081b18c3 +0x289:  jne    081b185a <+0x220>
081b18c5 +0x28b:  mov    -0xc(%ebp),%eax
081b18c8 +0x28e:  mov    %eax,(%ebx)
081b18ca +0x290:  mov    %ebx,%eax
081b18cc +0x292:  lea    -0x8(%ebp),%esp
081b18cf +0x295:  add    $0x0,%esp
081b18d2 +0x298:  pop    %ebx
081b18d3 +0x299:  pop    %esi
081b18d4 +0x29a:  pop    %ebp
081b18d5 +0x29b:  ret    $0x4
081b18d8 +0x29e:  push   %ebp
081b18d9 +0x29f:  mov    %esp,%ebp
081b18db +0x2a1:  push   %esi
081b18dc +0x2a2:  push   %ebx
081b18dd +0x2a3:  sub    $0x20,%esp
081b18e0 +0x2a6:  mov    0x8(%ebp),%ebx
081b18e3 +0x2a9:  lea    -0x18(%ebp),%eax
081b18e6 +0x2ac:  mov    0xc(%ebp),%edx
081b18e9 +0x2af:  mov    %edx,0x4(%esp)
081b18ed +0x2b3:  mov    %eax,(%esp)
081b18f0 +0x2b6:  call   081b169c <+0x62>
081b18f5 +0x2bb:  sub    $0x4,%esp
081b18f8 +0x2be:  lea    -0x18(%ebp),%eax
081b18fb +0x2c1:  mov    %eax,0x4(%esp)
081b18ff +0x2c5:  lea    0x14(%ebp),%eax
081b1902 +0x2c8:  mov    %eax,(%esp)
081b1905 +0x2cb:  call   081b16c2 <+0x88>
081b190a +0x2d0:  test   %al,%al
081b190c +0x2d2:  je     081b1946 <+0x30c>
081b190e +0x2d4:  lea    -0x10(%ebp),%eax
081b1911 +0x2d7:  mov    0xc(%ebp),%edx
081b1914 +0x2da:  mov    %edx,0x4(%esp)
081b1918 +0x2de:  mov    %eax,(%esp)
081b191b +0x2e1:  call   081b169c <+0x62>
081b1920 +0x2e6:  sub    $0x4,%esp
081b1923 +0x2e9:  lea    -0x14(%ebp),%eax
081b1926 +0x2ec:  mov    0x10(%ebp),%edx
081b1929 +0x2ef:  mov    %edx,0xc(%esp)
081b192d +0x2f3:  mov    -0x10(%ebp),%edx
081b1930 +0x2f6:  mov    %edx,0x8(%esp)
081b1934 +0x2fa:  mov    0x14(%ebp),%edx
081b1937 +0x2fd:  mov    %edx,0x4(%esp)
081b193b +0x301:  mov    %eax,(%esp)
081b193e +0x304:  call   081b1a86 <+0x44c>
081b1943 +0x309:  sub    $0x4,%esp
081b1946 +0x30c:  lea    0x10(%ebp),%eax
081b1949 +0x30f:  mov    %eax,(%esp)
081b194c +0x312:  call   081b1a48 <+0x40e>
081b1951 +0x317:  mov    (%eax),%esi
081b1953 +0x319:  lea    -0xc(%ebp),%eax
081b1956 +0x31c:  mov    0xc(%ebp),%edx
081b1959 +0x31f:  mov    %edx,0x4(%esp)
081b195d +0x323:  mov    %eax,(%esp)
081b1960 +0x326:  call   081b169c <+0x62>
081b1965 +0x32b:  sub    $0x4,%esp
081b1968 +0x32e:  lea    0x14(%ebp),%eax
081b196b +0x331:  mov    %eax,0x4(%esp)
081b196f +0x335:  lea    -0xc(%ebp),%eax
081b1972 +0x338:  mov    %eax,(%esp)
081b1975 +0x33b:  call   081b1b9f <+0x565>
081b197a +0x340:  shl    $0x2,%eax
081b197d +0x343:  lea    (%esi,%eax,1),%eax
081b1980 +0x346:  mov    %eax,0x4(%esp)
081b1984 +0x34a:  mov    0xc(%ebp),%eax
081b1987 +0x34d:  mov    %eax,(%esp)
081b198a +0x350:  call   081b1b6a <+0x530>
081b198f +0x355:  mov    0x10(%ebp),%eax
081b1992 +0x358:  mov    %eax,(%ebx)
081b1994 +0x35a:  mov    %ebx,%eax
081b1996 +0x35c:  lea    -0x8(%ebp),%esp
081b1999 +0x35f:  add    $0x0,%esp
081b199c +0x362:  pop    %ebx
081b199d +0x363:  pop    %esi
081b199e +0x364:  pop    %ebp
081b199f +0x365:  ret    $0x4
081b19a2 +0x368:  push   %ebp
081b19a3 +0x369:  mov    %esp,%ebp
081b19a5 +0x36b:  sub    $0x28,%esp
081b19a8 +0x36e:  mov    0x8(%ebp),%eax
081b19ab +0x371:  mov    0x4(%eax),%edx
081b19ae +0x374:  mov    0x8(%ebp),%eax
081b19b1 +0x377:  mov    0x8(%eax),%eax
081b19b4 +0x37a:  cmp    %eax,%edx
081b19b6 +0x37c:  je     081b19e5 <+0x3ab>
081b19b8 +0x37e:  mov    0x8(%ebp),%eax
081b19bb +0x381:  mov    0x4(%eax),%edx
081b19be +0x384:  mov    0x8(%ebp),%eax
081b19c1 +0x387:  mov    0xc(%ebp),%ecx
081b19c4 +0x38a:  mov    %ecx,0x8(%esp)
081b19c8 +0x38e:  mov    %edx,0x4(%esp)
081b19cc +0x392:  mov    %eax,(%esp)
081b19cf +0x395:  call   081b1bd2 <+0x598>
081b19d4 +0x39a:  mov    0x8(%ebp),%eax
081b19d7 +0x39d:  mov    0x4(%eax),%eax
081b19da +0x3a0:  lea    0x4(%eax),%edx
081b19dd +0x3a3:  mov    0x8(%ebp),%eax
081b19e0 +0x3a6:  mov    %edx,0x4(%eax)
081b19e3 +0x3a9:  jmp    081b1a13 <+0x3d9>
081b19e5 +0x3ab:  lea    -0xc(%ebp),%eax
081b19e8 +0x3ae:  mov    0x8(%ebp),%edx
081b19eb +0x3b1:  mov    %edx,0x4(%esp)
081b19ef +0x3b5:  mov    %eax,(%esp)
081b19f2 +0x3b8:  call   081b169c <+0x62>
081b19f7 +0x3bd:  sub    $0x4,%esp
081b19fa +0x3c0:  mov    0xc(%ebp),%eax
081b19fd +0x3c3:  mov    %eax,0x8(%esp)
081b1a01 +0x3c7:  mov    -0xc(%ebp),%eax
081b1a04 +0x3ca:  mov    %eax,0x4(%esp)
081b1a08 +0x3ce:  mov    0x8(%ebp),%eax
081b1a0b +0x3d1:  mov    %eax,(%esp)
081b1a0e +0x3d4:  call   081b1bfa <+0x5c0>
081b1a13 +0x3d9:  leave
081b1a14 +0x3da:  ret
081b1a15 +0x3db:  nop
081b1a16 +0x3dc:  push   %ebp
081b1a17 +0x3dd:  mov    %esp,%ebp
081b1a19 +0x3df:  mov    0x8(%ebp),%eax
081b1a1c +0x3e2:  pop    %ebp
081b1a1d +0x3e3:  ret
081b1a1e +0x3e4:  push   %ebp
081b1a1f +0x3e5:  mov    %esp,%ebp
081b1a21 +0x3e7:  sub    $0x18,%esp
081b1a24 +0x3ea:  mov    0xc(%ebp),%eax
081b1a27 +0x3ed:  mov    %eax,0x4(%esp)
081b1a2b +0x3f1:  mov    0x8(%ebp),%eax
081b1a2e +0x3f4:  mov    %eax,(%esp)
081b1a31 +0x3f7:  call   081b1edb <+0x8a1>
081b1a36 +0x3fc:  leave
081b1a37 +0x3fd:  ret
081b1a38 +0x3fe:  push   %ebp
081b1a39 +0x3ff:  mov    %esp,%ebp
081b1a3b +0x401:  mov    0xc(%ebp),%eax
081b1a3e +0x404:  mov    (%eax),%edx
081b1a40 +0x406:  mov    0x8(%ebp),%eax
081b1a43 +0x409:  mov    %edx,(%eax)
081b1a45 +0x40b:  pop    %ebp
081b1a46 +0x40c:  ret
081b1a47 +0x40d:  nop
081b1a48 +0x40e:  push   %ebp
081b1a49 +0x40f:  mov    %esp,%ebp
081b1a4b +0x411:  mov    0x8(%ebp),%eax
081b1a4e +0x414:  pop    %ebp
081b1a4f +0x415:  ret
081b1a50 +0x416:  push   %ebp
081b1a51 +0x417:  mov    %esp,%ebp
081b1a53 +0x419:  push   %ebx
081b1a54 +0x41a:  sub    $0x24,%esp
081b1a57 +0x41d:  mov    0x8(%ebp),%ebx
081b1a5a +0x420:  mov    0xc(%ebp),%eax
081b1a5d +0x423:  mov    (%eax),%edx
081b1a5f +0x425:  mov    0x10(%ebp),%eax
081b1a62 +0x428:  mov    (%eax),%eax
081b1a64 +0x42a:  shl    $0x2,%eax
081b1a67 +0x42d:  lea    (%edx,%eax,1),%eax
081b1a6a +0x430:  mov    %eax,-0xc(%ebp)
081b1a6d +0x433:  lea    -0xc(%ebp),%eax
081b1a70 +0x436:  mov    %eax,0x4(%esp)
081b1a74 +0x43a:  mov    %ebx,(%esp)
081b1a77 +0x43d:  call   081b1a38 <+0x3fe>
081b1a7c +0x442:  mov    %ebx,%eax
081b1a7e +0x444:  add    $0x24,%esp
081b1a81 +0x447:  pop    %ebx
081b1a82 +0x448:  pop    %ebp
081b1a83 +0x449:  ret    $0x4
081b1a86 +0x44c:  push   %ebp
081b1a87 +0x44d:  mov    %esp,%ebp
081b1a89 +0x44f:  push   %ebx
081b1a8a +0x450:  sub    $0x24,%esp
081b1a8d +0x453:  mov    0x8(%ebp),%ebx
081b1a90 +0x456:  lea    -0x10(%ebp),%eax
081b1a93 +0x459:  mov    0x10(%ebp),%edx
081b1a96 +0x45c:  mov    %edx,0x4(%esp)
081b1a9a +0x460:  mov    %eax,(%esp)
081b1a9d +0x463:  call   081b1ef5 <+0x8bb>
081b1aa2 +0x468:  sub    $0x4,%esp
081b1aa5 +0x46b:  lea    -0xc(%ebp),%eax
081b1aa8 +0x46e:  mov    0xc(%ebp),%edx
081b1aab +0x471:  mov    %edx,0x4(%esp)
081b1aaf +0x475:  mov    %eax,(%esp)
081b1ab2 +0x478:  call   081b1ef5 <+0x8bb>
081b1ab7 +0x47d:  sub    $0x4,%esp
081b1aba +0x480:  mov    0x14(%ebp),%eax
081b1abd +0x483:  mov    %eax,0xc(%esp)
081b1ac1 +0x487:  mov    -0x10(%ebp),%eax
081b1ac4 +0x48a:  mov    %eax,0x8(%esp)
081b1ac8 +0x48e:  mov    -0xc(%ebp),%eax
081b1acb +0x491:  mov    %eax,0x4(%esp)
081b1acf +0x495:  mov    %ebx,(%esp)
081b1ad2 +0x498:  call   081b1f04 <+0x8ca>
081b1ad7 +0x49d:  sub    $0x4,%esp
081b1ada +0x4a0:  mov    %ebx,%eax
081b1adc +0x4a2:  mov    -0x4(%ebp),%ebx
081b1adf +0x4a5:  leave
081b1ae0 +0x4a6:  ret    $0x4
081b1ae3 +0x4a9:  nop
081b1ae4 +0x4aa:  push   %ebp
081b1ae5 +0x4ab:  mov    %esp,%ebp
081b1ae7 +0x4ad:  pop    %ebp
081b1ae8 +0x4ae:  ret
081b1ae9 +0x4af:  push   %ebp
081b1aea +0x4b0:  mov    %esp,%ebp
081b1aec +0x4b2:  push   %esi
081b1aed +0x4b3:  push   %ebx
081b1aee +0x4b4:  sub    $0x30,%esp
081b1af1 +0x4b7:  mov    0x8(%ebp),%ebx
081b1af4 +0x4ba:  lea    -0x9(%ebp),%eax
081b1af7 +0x4bd:  lea    0xc(%ebp),%edx
081b1afa +0x4c0:  mov    %edx,0x4(%esp)
081b1afe +0x4c4:  mov    %eax,(%esp)
081b1b01 +0x4c7:  call   081b1f63 <+0x929>
081b1b06 +0x4cc:  sub    $0x4,%esp
081b1b09 +0x4cf:  mov    %esi,%eax
081b1b0b +0x4d1:  mov    %al,0x10(%esp)
081b1b0f +0x4d5:  mov    0x14(%ebp),%eax
081b1b12 +0x4d8:  mov    %eax,0xc(%esp)
081b1b16 +0x4dc:  mov    0x10(%ebp),%eax
081b1b19 +0x4df:  mov    %eax,0x8(%esp)
081b1b1d +0x4e3:  mov    0xc(%ebp),%eax
081b1b20 +0x4e6:  mov    %eax,0x4(%esp)
081b1b24 +0x4ea:  mov    %ebx,(%esp)
081b1b27 +0x4ed:  call   081b1f6d <+0x933>
081b1b2c +0x4f2:  sub    $0x4,%esp
081b1b2f +0x4f5:  mov    %ebx,%eax
081b1b31 +0x4f7:  lea    -0x8(%ebp),%esp
081b1b34 +0x4fa:  add    $0x0,%esp
081b1b37 +0x4fd:  pop    %ebx
081b1b38 +0x4fe:  pop    %esi
081b1b39 +0x4ff:  pop    %ebp
081b1b3a +0x500:  ret    $0x4
081b1b3d +0x503:  push   %ebp
081b1b3e +0x504:  mov    %esp,%ebp
081b1b40 +0x506:  push   %ebx
081b1b41 +0x507:  sub    $0x14,%esp
081b1b44 +0x50a:  mov    0x8(%ebp),%eax
081b1b47 +0x50d:  mov    %eax,(%esp)
081b1b4a +0x510:  call   081b1a48 <+0x40e>
081b1b4f +0x515:  mov    (%eax),%ebx
081b1b51 +0x517:  mov    0xc(%ebp),%eax
081b1b54 +0x51a:  mov    %eax,(%esp)
081b1b57 +0x51d:  call   081b1a48 <+0x40e>
081b1b5c +0x522:  mov    (%eax),%eax
081b1b5e +0x524:  cmp    %eax,%ebx
081b1b60 +0x526:  sete   %al
081b1b63 +0x529:  add    $0x14,%esp
081b1b66 +0x52c:  pop    %ebx
081b1b67 +0x52d:  pop    %ebp
081b1b68 +0x52e:  ret
081b1b69 +0x52f:  nop
081b1b6a +0x530:  push   %ebp
081b1b6b +0x531:  mov    %esp,%ebp
081b1b6d +0x533:  sub    $0x18,%esp
081b1b70 +0x536:  mov    0x8(%ebp),%eax
081b1b73 +0x539:  mov    %eax,(%esp)
081b1b76 +0x53c:  call   081b1a16 <+0x3dc>
081b1b7b +0x541:  mov    0x8(%ebp),%edx
081b1b7e +0x544:  mov    0x4(%edx),%edx
081b1b81 +0x547:  mov    %eax,0x8(%esp)
081b1b85 +0x54b:  mov    %edx,0x4(%esp)
081b1b89 +0x54f:  mov    0xc(%ebp),%eax
081b1b8c +0x552:  mov    %eax,(%esp)
081b1b8f +0x555:  call   081b1a1e <+0x3e4>
081b1b94 +0x55a:  mov    0x8(%ebp),%eax
081b1b97 +0x55d:  mov    0xc(%ebp),%edx
081b1b9a +0x560:  mov    %edx,0x4(%eax)
081b1b9d +0x563:  leave
081b1b9e +0x564:  ret
081b1b9f +0x565:  push   %ebp
081b1ba0 +0x566:  mov    %esp,%ebp
081b1ba2 +0x568:  push   %ebx
081b1ba3 +0x569:  sub    $0x14,%esp
081b1ba6 +0x56c:  mov    0x8(%ebp),%eax
081b1ba9 +0x56f:  mov    %eax,(%esp)
081b1bac +0x572:  call   081b1a48 <+0x40e>
081b1bb1 +0x577:  mov    (%eax),%eax
081b1bb3 +0x579:  mov    %eax,%ebx
081b1bb5 +0x57b:  mov    0xc(%ebp),%eax
081b1bb8 +0x57e:  mov    %eax,(%esp)
081b1bbb +0x581:  call   081b1a48 <+0x40e>
081b1bc0 +0x586:  mov    (%eax),%eax
081b1bc2 +0x588:  mov    %ebx,%edx
081b1bc4 +0x58a:  sub    %eax,%edx
081b1bc6 +0x58c:  mov    %edx,%eax
081b1bc8 +0x58e:  sar    $0x2,%eax
081b1bcb +0x591:  add    $0x14,%esp
081b1bce +0x594:  pop    %ebx
081b1bcf +0x595:  pop    %ebp
081b1bd0 +0x596:  ret
081b1bd1 +0x597:  nop
081b1bd2 +0x598:  push   %ebp
081b1bd3 +0x599:  mov    %esp,%ebp
081b1bd5 +0x59b:  sub    $0x18,%esp
081b1bd8 +0x59e:  mov    0xc(%ebp),%eax
081b1bdb +0x5a1:  mov    %eax,0x4(%esp)
081b1bdf +0x5a5:  movl   $0x4,(%esp)
081b1be6 +0x5ac:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b1beb +0x5b1:  mov    %eax,%edx
081b1bed +0x5b3:  test   %edx,%edx
081b1bef +0x5b5:  je     081b1bf8 <+0x5be>
081b1bf1 +0x5b7:  mov    0x10(%ebp),%edx
081b1bf4 +0x5ba:  mov    (%edx),%edx
081b1bf6 +0x5bc:  mov    %edx,(%eax)
081b1bf8 +0x5be:  leave
081b1bf9 +0x5bf:  ret
081b1bfa +0x5c0:  push   %ebp
081b1bfb +0x5c1:  mov    %esp,%ebp
081b1bfd +0x5c3:  push   %esi
081b1bfe +0x5c4:  push   %ebx
081b1bff +0x5c5:  sub    $0x30,%esp
081b1c02 +0x5c8:  mov    0x8(%ebp),%eax
081b1c05 +0x5cb:  mov    0x4(%eax),%edx
081b1c08 +0x5ce:  mov    0x8(%ebp),%eax
081b1c0b +0x5d1:  mov    0x8(%eax),%eax
081b1c0e +0x5d4:  cmp    %eax,%edx
081b1c10 +0x5d6:  je     081b1ca7 <+0x66d>
081b1c16 +0x5dc:  mov    0x8(%ebp),%eax
081b1c19 +0x5df:  mov    0x4(%eax),%eax
081b1c1c +0x5e2:  sub    $0x4,%eax
081b1c1f +0x5e5:  mov    %eax,(%esp)
081b1c22 +0x5e8:  call   081b08b5 <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0x48d>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0x48d
081b1c27 +0x5ed:  mov    (%eax),%eax
081b1c29 +0x5ef:  mov    %eax,-0x20(%ebp)
081b1c2c +0x5f2:  mov    0x8(%ebp),%eax
081b1c2f +0x5f5:  mov    0x4(%eax),%edx
081b1c32 +0x5f8:  mov    0x8(%ebp),%eax
081b1c35 +0x5fb:  lea    -0x20(%ebp),%ecx
081b1c38 +0x5fe:  mov    %ecx,0x8(%esp)
081b1c3c +0x602:  mov    %edx,0x4(%esp)
081b1c40 +0x606:  mov    %eax,(%esp)
081b1c43 +0x609:  call   081b2124 <+0xaea>
081b1c48 +0x60e:  mov    0x8(%ebp),%eax
081b1c4b +0x611:  mov    0x4(%eax),%eax
081b1c4e +0x614:  lea    0x4(%eax),%edx
081b1c51 +0x617:  mov    0x8(%ebp),%eax
081b1c54 +0x61a:  mov    %edx,0x4(%eax)
081b1c57 +0x61d:  mov    0x8(%ebp),%eax
081b1c5a +0x620:  mov    0x4(%eax),%eax
081b1c5d +0x623:  lea    -0x4(%eax),%esi
081b1c60 +0x626:  mov    0x8(%ebp),%eax
081b1c63 +0x629:  mov    0x4(%eax),%eax
081b1c66 +0x62c:  lea    -0x8(%eax),%ebx
081b1c69 +0x62f:  lea    0xc(%ebp),%eax
081b1c6c +0x632:  mov    %eax,(%esp)
081b1c6f +0x635:  call   081b1a48 <+0x40e>
081b1c74 +0x63a:  mov    (%eax),%eax
081b1c76 +0x63c:  mov    %esi,0x8(%esp)
081b1c7a +0x640:  mov    %ebx,0x4(%esp)
081b1c7e +0x644:  mov    %eax,(%esp)
081b1c81 +0x647:  call   081b2159 <+0xb1f>
081b1c86 +0x64c:  lea    0xc(%ebp),%eax
081b1c89 +0x64f:  mov    %eax,(%esp)
081b1c8c +0x652:  call   081b16ee <+0xb4>
081b1c91 +0x657:  mov    %eax,%ebx
081b1c93 +0x659:  mov    0x10(%ebp),%eax
081b1c96 +0x65c:  mov    %eax,(%esp)
081b1c99 +0x65f:  call   081b2191 <+0xb57>
081b1c9e +0x664:  mov    (%eax),%eax
081b1ca0 +0x666:  mov    %eax,(%ebx)
081b1ca2 +0x668:  jmp    081b1ea9 <+0x86f>
081b1ca7 +0x66d:  movl   $"vector::_M_insert_aux",0x8(%esp)
081b1caf +0x675:  movl   $0x1,0x4(%esp)
081b1cb7 +0x67d:  mov    0x8(%ebp),%eax
081b1cba +0x680:  mov    %eax,(%esp)
081b1cbd +0x683:  call   081b219a <+0xb60>
081b1cc2 +0x688:  mov    %eax,-0x18(%ebp)
081b1cc5 +0x68b:  lea    -0x1c(%ebp),%eax
081b1cc8 +0x68e:  mov    0x8(%ebp),%edx
081b1ccb +0x691:  mov    %edx,0x4(%esp)
081b1ccf +0x695:  mov    %eax,(%esp)
081b1cd2 +0x698:  call   081b1678 <+0x3e>
081b1cd7 +0x69d:  sub    $0x4,%esp
081b1cda +0x6a0:  lea    -0x1c(%ebp),%eax
081b1cdd +0x6a3:  mov    %eax,0x4(%esp)
081b1ce1 +0x6a7:  lea    0xc(%ebp),%eax
081b1ce4 +0x6aa:  mov    %eax,(%esp)
081b1ce7 +0x6ad:  call   081b1b9f <+0x565>
081b1cec +0x6b2:  mov    %eax,-0x14(%ebp)
081b1cef +0x6b5:  mov    0x8(%ebp),%eax
081b1cf2 +0x6b8:  mov    -0x18(%ebp),%edx
081b1cf5 +0x6bb:  mov    %edx,0x4(%esp)
081b1cf9 +0x6bf:  mov    %eax,(%esp)
081b1cfc +0x6c2:  call   081b2240 <+0xc06>
081b1d01 +0x6c7:  mov    %eax,-0x10(%ebp)
081b1d04 +0x6ca:  mov    -0x10(%ebp),%eax
081b1d07 +0x6cd:  mov    %eax,-0xc(%ebp)
081b1d0a +0x6d0:  mov    0x10(%ebp),%eax
081b1d0d +0x6d3:  mov    %eax,(%esp)
081b1d10 +0x6d6:  call   081b2191 <+0xb57>
081b1d15 +0x6db:  mov    -0x14(%ebp),%edx
081b1d18 +0x6de:  shl    $0x2,%edx
081b1d1b +0x6e1:  mov    %edx,%ecx
081b1d1d +0x6e3:  add    -0x10(%ebp),%ecx
081b1d20 +0x6e6:  mov    0x8(%ebp),%edx
081b1d23 +0x6e9:  mov    %eax,0x8(%esp)
081b1d27 +0x6ed:  mov    %ecx,0x4(%esp)
081b1d2b +0x6f1:  mov    %edx,(%esp)
081b1d2e +0x6f4:  call   081b1bd2 <+0x598>
081b1d33 +0x6f9:  movl   $0x0,-0xc(%ebp)
081b1d3a +0x700:  mov    0x8(%ebp),%eax
081b1d3d +0x703:  mov    %eax,(%esp)
081b1d40 +0x706:  call   081b1a16 <+0x3dc>
081b1d45 +0x70b:  mov    %eax,%ebx
081b1d47 +0x70d:  lea    0xc(%ebp),%eax
081b1d4a +0x710:  mov    %eax,(%esp)
081b1d4d +0x713:  call   081b1a48 <+0x40e>
081b1d52 +0x718:  mov    (%eax),%edx
081b1d54 +0x71a:  mov    0x8(%ebp),%eax
081b1d57 +0x71d:  mov    (%eax),%eax
081b1d59 +0x71f:  mov    %ebx,0xc(%esp)
081b1d5d +0x723:  mov    -0x10(%ebp),%ecx
081b1d60 +0x726:  mov    %ecx,0x8(%esp)
081b1d64 +0x72a:  mov    %edx,0x4(%esp)
081b1d68 +0x72e:  mov    %eax,(%esp)
081b1d6b +0x731:  call   081b226f <+0xc35>
081b1d70 +0x736:  mov    %eax,-0xc(%ebp)
081b1d73 +0x739:  addl   $0x4,-0xc(%ebp)
081b1d77 +0x73d:  mov    0x8(%ebp),%eax
081b1d7a +0x740:  mov    %eax,(%esp)
081b1d7d +0x743:  call   081b1a16 <+0x3dc>
081b1d82 +0x748:  mov    %eax,%ebx
081b1d84 +0x74a:  mov    0x8(%ebp),%eax
081b1d87 +0x74d:  mov    0x4(%eax),%esi
081b1d8a +0x750:  lea    0xc(%ebp),%eax
081b1d8d +0x753:  mov    %eax,(%esp)
081b1d90 +0x756:  call   081b1a48 <+0x40e>
081b1d95 +0x75b:  mov    (%eax),%eax
081b1d97 +0x75d:  mov    %ebx,0xc(%esp)
081b1d9b +0x761:  mov    -0xc(%ebp),%edx
081b1d9e +0x764:  mov    %edx,0x8(%esp)
081b1da2 +0x768:  mov    %esi,0x4(%esp)
081b1da6 +0x76c:  mov    %eax,(%esp)
081b1da9 +0x76f:  call   081b226f <+0xc35>
081b1dae +0x774:  mov    %eax,-0xc(%ebp)
081b1db1 +0x777:  mov    0x8(%ebp),%eax
081b1db4 +0x77a:  mov    %eax,(%esp)
081b1db7 +0x77d:  call   081b1a16 <+0x3dc>
081b1dbc +0x782:  mov    0x8(%ebp),%edx
081b1dbf +0x785:  mov    0x4(%edx),%ecx
081b1dc2 +0x788:  mov    0x8(%ebp),%edx
081b1dc5 +0x78b:  mov    (%edx),%edx
081b1dc7 +0x78d:  mov    %eax,0x8(%esp)
081b1dcb +0x791:  mov    %ecx,0x4(%esp)
081b1dcf +0x795:  mov    %edx,(%esp)
081b1dd2 +0x798:  call   081b1a1e <+0x3e4>
081b1dd7 +0x79d:  mov    0x8(%ebp),%eax
081b1dda +0x7a0:  mov    0x8(%eax),%eax
081b1ddd +0x7a3:  mov    %eax,%edx
081b1ddf +0x7a5:  mov    0x8(%ebp),%eax
081b1de2 +0x7a8:  mov    (%eax),%eax
081b1de4 +0x7aa:  mov    %edx,%ecx
081b1de6 +0x7ac:  sub    %eax,%ecx
081b1de8 +0x7ae:  mov    %ecx,%eax
081b1dea +0x7b0:  sar    $0x2,%eax
081b1ded +0x7b3:  mov    %eax,%ecx
081b1def +0x7b5:  mov    0x8(%ebp),%eax
081b1df2 +0x7b8:  mov    (%eax),%edx
081b1df4 +0x7ba:  mov    0x8(%ebp),%eax
081b1df7 +0x7bd:  mov    %ecx,0x8(%esp)
081b1dfb +0x7c1:  mov    %edx,0x4(%esp)
081b1dff +0x7c5:  mov    %eax,(%esp)
081b1e02 +0x7c8:  call   081b1eb4 <+0x87a>
081b1e07 +0x7cd:  mov    0x8(%ebp),%eax
081b1e0a +0x7d0:  mov    -0x10(%ebp),%edx
081b1e0d +0x7d3:  mov    %edx,(%eax)
081b1e0f +0x7d5:  mov    0x8(%ebp),%eax
081b1e12 +0x7d8:  mov    -0xc(%ebp),%edx
081b1e15 +0x7db:  mov    %edx,0x4(%eax)
081b1e18 +0x7de:  mov    -0x18(%ebp),%eax
081b1e1b +0x7e1:  shl    $0x2,%eax
081b1e1e +0x7e4:  mov    %eax,%edx
081b1e20 +0x7e6:  add    -0x10(%ebp),%edx
081b1e23 +0x7e9:  mov    0x8(%ebp),%eax
081b1e26 +0x7ec:  mov    %edx,0x8(%eax)
081b1e29 +0x7ef:  jmp    081b1ea9 <+0x86f>
081b1e2b +0x7f1:  mov    %eax,(%esp)
081b1e2e +0x7f4:  call   08725ce0 <__cxa_begin_catch>
081b1e33 +0x7f9:  cmpl   $0x0,-0xc(%ebp)
081b1e37 +0x7fd:  jne    081b1e55 <+0x81b>
081b1e39 +0x7ff:  mov    -0x14(%ebp),%eax
081b1e3c +0x802:  shl    $0x2,%eax
081b1e3f +0x805:  mov    %eax,%edx
081b1e41 +0x807:  add    -0x10(%ebp),%edx
081b1e44 +0x80a:  mov    0x8(%ebp),%eax
081b1e47 +0x80d:  mov    %edx,0x4(%esp)
081b1e4b +0x811:  mov    %eax,(%esp)
081b1e4e +0x814:  call   081b1ae4 <+0x4aa>
081b1e53 +0x819:  jmp    081b1e76 <+0x83c>
081b1e55 +0x81b:  mov    0x8(%ebp),%eax
081b1e58 +0x81e:  mov    %eax,(%esp)
081b1e5b +0x821:  call   081b1a16 <+0x3dc>
081b1e60 +0x826:  mov    %eax,0x8(%esp)
081b1e64 +0x82a:  mov    -0xc(%ebp),%eax
081b1e67 +0x82d:  mov    %eax,0x4(%esp)
081b1e6b +0x831:  mov    -0x10(%ebp),%eax
081b1e6e +0x834:  mov    %eax,(%esp)
081b1e71 +0x837:  call   081b1a1e <+0x3e4>
081b1e76 +0x83c:  mov    0x8(%ebp),%eax
081b1e79 +0x83f:  mov    -0x18(%ebp),%edx
081b1e7c +0x842:  mov    %edx,0x8(%esp)
081b1e80 +0x846:  mov    -0x10(%ebp),%edx
081b1e83 +0x849:  mov    %edx,0x4(%esp)
081b1e87 +0x84d:  mov    %eax,(%esp)
081b1e8a +0x850:  call   081b1eb4 <+0x87a>
081b1e8f +0x855:  call   08724be0 <__cxa_rethrow>
081b1e94 +0x85a:  mov    %edx,%ebx
081b1e96 +0x85c:  mov    %eax,%esi
081b1e98 +0x85e:  call   08725c30 <__cxa_end_catch>
081b1e9d +0x863:  mov    %esi,%eax
081b1e9f +0x865:  mov    %ebx,%edx
081b1ea1 +0x867:  mov    %eax,(%esp)
081b1ea4 +0x86a:  call   08ae3750 <_Unwind_Resume>
081b1ea9 +0x86f:  lea    -0x8(%ebp),%esp
081b1eac +0x872:  add    $0x0,%esp
081b1eaf +0x875:  pop    %ebx
081b1eb0 +0x876:  pop    %esi
081b1eb1 +0x877:  pop    %ebp
081b1eb2 +0x878:  ret
081b1eb3 +0x879:  nop
081b1eb4 +0x87a:  push   %ebp
081b1eb5 +0x87b:  mov    %esp,%ebp
081b1eb7 +0x87d:  sub    $0x18,%esp
081b1eba +0x880:  cmpl   $0x0,0xc(%ebp)
081b1ebe +0x884:  je     081b1ed9 <+0x89f>
081b1ec0 +0x886:  mov    0x8(%ebp),%eax
081b1ec3 +0x889:  mov    0x10(%ebp),%edx
081b1ec6 +0x88c:  mov    %edx,0x8(%esp)
081b1eca +0x890:  mov    0xc(%ebp),%edx
081b1ecd +0x893:  mov    %edx,0x4(%esp)
081b1ed1 +0x897:  mov    %eax,(%esp)
081b1ed4 +0x89a:  call   081b22c2 <+0xc88>
081b1ed9 +0x89f:  leave
081b1eda +0x8a0:  ret
081b1edb +0x8a1:  push   %ebp
081b1edc +0x8a2:  mov    %esp,%ebp
081b1ede +0x8a4:  sub    $0x18,%esp
081b1ee1 +0x8a7:  mov    0xc(%ebp),%eax
081b1ee4 +0x8aa:  mov    %eax,0x4(%esp)
081b1ee8 +0x8ae:  mov    0x8(%ebp),%eax
081b1eeb +0x8b1:  mov    %eax,(%esp)
081b1eee +0x8b4:  call   081b22d5 <+0xc9b>
081b1ef3 +0x8b9:  leave
081b1ef4 +0x8ba:  ret
081b1ef5 +0x8bb:  push   %ebp
081b1ef6 +0x8bc:  mov    %esp,%ebp
081b1ef8 +0x8be:  mov    0x8(%ebp),%eax
081b1efb +0x8c1:  mov    0xc(%ebp),%edx
081b1efe +0x8c4:  mov    %edx,(%eax)
081b1f00 +0x8c6:  pop    %ebp
081b1f01 +0x8c7:  ret    $0x4
081b1f04 +0x8ca:  push   %ebp
081b1f05 +0x8cb:  mov    %esp,%ebp
081b1f07 +0x8cd:  push   %edi
081b1f08 +0x8ce:  push   %esi
081b1f09 +0x8cf:  push   %ebx
081b1f0a +0x8d0:  sub    $0x2c,%esp
081b1f0d +0x8d3:  mov    0x8(%ebp),%edi
081b1f10 +0x8d6:  mov    0x14(%ebp),%eax
081b1f13 +0x8d9:  mov    %eax,(%esp)
081b1f16 +0x8dc:  call   081b22da <+0xca0>
081b1f1b +0x8e1:  mov    %eax,%esi
081b1f1d +0x8e3:  mov    0x10(%ebp),%eax
081b1f20 +0x8e6:  mov    %eax,(%esp)
081b1f23 +0x8e9:  call   081b22da <+0xca0>
081b1f28 +0x8ee:  mov    %eax,%ebx
081b1f2a +0x8f0:  mov    0xc(%ebp),%eax
081b1f2d +0x8f3:  mov    %eax,(%esp)
081b1f30 +0x8f6:  call   081b22da <+0xca0>
081b1f35 +0x8fb:  mov    %esi,0x8(%esp)
081b1f39 +0x8ff:  mov    %ebx,0x4(%esp)
081b1f3d +0x903:  mov    %eax,(%esp)
081b1f40 +0x906:  call   081b22ef <+0xcb5>
081b1f45 +0x90b:  mov    %eax,-0x1c(%ebp)
081b1f48 +0x90e:  lea    -0x1c(%ebp),%eax
081b1f4b +0x911:  mov    %eax,0x4(%esp)
081b1f4f +0x915:  mov    %edi,(%esp)
081b1f52 +0x918:  call   081b1a38 <+0x3fe>
081b1f57 +0x91d:  mov    %edi,%eax
081b1f59 +0x91f:  add    $0x2c,%esp
081b1f5c +0x922:  pop    %ebx
081b1f5d +0x923:  pop    %esi
081b1f5e +0x924:  pop    %edi
081b1f5f +0x925:  pop    %ebp
081b1f60 +0x926:  ret    $0x4
081b1f63 +0x929:  push   %ebp
081b1f64 +0x92a:  mov    %esp,%ebp
081b1f66 +0x92c:  mov    0x8(%ebp),%eax
081b1f69 +0x92f:  pop    %ebp
081b1f6a +0x930:  ret    $0x4
081b1f6d +0x933:  push   %ebp
081b1f6e +0x934:  mov    %esp,%ebp
081b1f70 +0x936:  push   %ebx
081b1f71 +0x937:  sub    $0x24,%esp
081b1f74 +0x93a:  mov    0x8(%ebp),%ebx
081b1f77 +0x93d:  lea    0xc(%ebp),%eax
081b1f7a +0x940:  mov    %eax,0x4(%esp)
081b1f7e +0x944:  lea    0x10(%ebp),%eax
081b1f81 +0x947:  mov    %eax,(%esp)
081b1f84 +0x94a:  call   081b1b9f <+0x565>
081b1f89 +0x94f:  sar    $0x2,%eax
081b1f8c +0x952:  mov    %eax,-0xc(%ebp)
081b1f8f +0x955:  jmp    081b2058 <+0xa1e>
081b1f94 +0x95a:  lea    0xc(%ebp),%eax
081b1f97 +0x95d:  mov    %eax,(%esp)
081b1f9a +0x960:  call   081b16ee <+0xb4>
081b1f9f +0x965:  mov    (%eax),%edx
081b1fa1 +0x967:  mov    0x14(%ebp),%eax
081b1fa4 +0x96a:  mov    (%eax),%eax
081b1fa6 +0x96c:  cmp    %eax,%edx
081b1fa8 +0x96e:  sete   %al
081b1fab +0x971:  test   %al,%al
081b1fad +0x973:  je     081b1fb9 <+0x97f>
081b1faf +0x975:  mov    0xc(%ebp),%eax
081b1fb2 +0x978:  mov    %eax,(%ebx)
081b1fb4 +0x97a:  jmp    081b2119 <+0xadf>
081b1fb9 +0x97f:  lea    0xc(%ebp),%eax
081b1fbc +0x982:  mov    %eax,(%esp)
081b1fbf +0x985:  call   081b17de <+0x1a4>
081b1fc4 +0x98a:  lea    0xc(%ebp),%eax
081b1fc7 +0x98d:  mov    %eax,(%esp)
081b1fca +0x990:  call   081b16ee <+0xb4>
081b1fcf +0x995:  mov    (%eax),%edx
081b1fd1 +0x997:  mov    0x14(%ebp),%eax
081b1fd4 +0x99a:  mov    (%eax),%eax
081b1fd6 +0x99c:  cmp    %eax,%edx
081b1fd8 +0x99e:  sete   %al
081b1fdb +0x9a1:  test   %al,%al
081b1fdd +0x9a3:  je     081b1fe9 <+0x9af>
081b1fdf +0x9a5:  mov    0xc(%ebp),%eax
081b1fe2 +0x9a8:  mov    %eax,(%ebx)
081b1fe4 +0x9aa:  jmp    081b2119 <+0xadf>
081b1fe9 +0x9af:  lea    0xc(%ebp),%eax
081b1fec +0x9b2:  mov    %eax,(%esp)
081b1fef +0x9b5:  call   081b17de <+0x1a4>
081b1ff4 +0x9ba:  lea    0xc(%ebp),%eax
081b1ff7 +0x9bd:  mov    %eax,(%esp)
081b1ffa +0x9c0:  call   081b16ee <+0xb4>
081b1fff +0x9c5:  mov    (%eax),%edx
081b2001 +0x9c7:  mov    0x14(%ebp),%eax
081b2004 +0x9ca:  mov    (%eax),%eax
081b2006 +0x9cc:  cmp    %eax,%edx
081b2008 +0x9ce:  sete   %al
081b200b +0x9d1:  test   %al,%al
081b200d +0x9d3:  je     081b2019 <+0x9df>
081b200f +0x9d5:  mov    0xc(%ebp),%eax
081b2012 +0x9d8:  mov    %eax,(%ebx)
081b2014 +0x9da:  jmp    081b2119 <+0xadf>
081b2019 +0x9df:  lea    0xc(%ebp),%eax
081b201c +0x9e2:  mov    %eax,(%esp)
081b201f +0x9e5:  call   081b17de <+0x1a4>
081b2024 +0x9ea:  lea    0xc(%ebp),%eax
081b2027 +0x9ed:  mov    %eax,(%esp)
081b202a +0x9f0:  call   081b16ee <+0xb4>
081b202f +0x9f5:  mov    (%eax),%edx
081b2031 +0x9f7:  mov    0x14(%ebp),%eax
081b2034 +0x9fa:  mov    (%eax),%eax
081b2036 +0x9fc:  cmp    %eax,%edx
081b2038 +0x9fe:  sete   %al
081b203b +0xa01:  test   %al,%al
081b203d +0xa03:  je     081b2049 <+0xa0f>
081b203f +0xa05:  mov    0xc(%ebp),%eax
081b2042 +0xa08:  mov    %eax,(%ebx)
081b2044 +0xa0a:  jmp    081b2119 <+0xadf>
081b2049 +0xa0f:  lea    0xc(%ebp),%eax
081b204c +0xa12:  mov    %eax,(%esp)
081b204f +0xa15:  call   081b17de <+0x1a4>
081b2054 +0xa1a:  subl   $0x1,-0xc(%ebp)
081b2058 +0xa1e:  cmpl   $0x0,-0xc(%ebp)
081b205c +0xa22:  setg   %al
081b205f +0xa25:  test   %al,%al
081b2061 +0xa27:  jne    081b1f94 <+0x95a>
081b2067 +0xa2d:  lea    0xc(%ebp),%eax
081b206a +0xa30:  mov    %eax,0x4(%esp)
081b206e +0xa34:  lea    0x10(%ebp),%eax
081b2071 +0xa37:  mov    %eax,(%esp)
081b2074 +0xa3a:  call   081b1b9f <+0x565>
081b2079 +0xa3f:  cmp    $0x2,%eax
081b207c +0xa42:  je     081b20ba <+0xa80>
081b207e +0xa44:  cmp    $0x3,%eax
081b2081 +0xa47:  je     081b208d <+0xa53>
081b2083 +0xa49:  cmp    $0x1,%eax
081b2086 +0xa4c:  je     081b20e7 <+0xaad>
081b2088 +0xa4e:  jmp    081b2114 <+0xada>
081b208d +0xa53:  lea    0xc(%ebp),%eax
081b2090 +0xa56:  mov    %eax,(%esp)
081b2093 +0xa59:  call   081b16ee <+0xb4>
081b2098 +0xa5e:  mov    (%eax),%edx
081b209a +0xa60:  mov    0x14(%ebp),%eax
081b209d +0xa63:  mov    (%eax),%eax
081b209f +0xa65:  cmp    %eax,%edx
081b20a1 +0xa67:  sete   %al
081b20a4 +0xa6a:  test   %al,%al
081b20a6 +0xa6c:  je     081b20af <+0xa75>
081b20a8 +0xa6e:  mov    0xc(%ebp),%eax
081b20ab +0xa71:  mov    %eax,(%ebx)
081b20ad +0xa73:  jmp    081b2119 <+0xadf>
081b20af +0xa75:  lea    0xc(%ebp),%eax
081b20b2 +0xa78:  mov    %eax,(%esp)
081b20b5 +0xa7b:  call   081b17de <+0x1a4>
081b20ba +0xa80:  lea    0xc(%ebp),%eax
081b20bd +0xa83:  mov    %eax,(%esp)
081b20c0 +0xa86:  call   081b16ee <+0xb4>
081b20c5 +0xa8b:  mov    (%eax),%edx
081b20c7 +0xa8d:  mov    0x14(%ebp),%eax
081b20ca +0xa90:  mov    (%eax),%eax
081b20cc +0xa92:  cmp    %eax,%edx
081b20ce +0xa94:  sete   %al
081b20d1 +0xa97:  test   %al,%al
081b20d3 +0xa99:  je     081b20dc <+0xaa2>
081b20d5 +0xa9b:  mov    0xc(%ebp),%eax
081b20d8 +0xa9e:  mov    %eax,(%ebx)
081b20da +0xaa0:  jmp    081b2119 <+0xadf>
081b20dc +0xaa2:  lea    0xc(%ebp),%eax
081b20df +0xaa5:  mov    %eax,(%esp)
081b20e2 +0xaa8:  call   081b17de <+0x1a4>
081b20e7 +0xaad:  lea    0xc(%ebp),%eax
081b20ea +0xab0:  mov    %eax,(%esp)
081b20ed +0xab3:  call   081b16ee <+0xb4>
081b20f2 +0xab8:  mov    (%eax),%edx
081b20f4 +0xaba:  mov    0x14(%ebp),%eax
081b20f7 +0xabd:  mov    (%eax),%eax
081b20f9 +0xabf:  cmp    %eax,%edx
081b20fb +0xac1:  sete   %al
081b20fe +0xac4:  test   %al,%al
081b2100 +0xac6:  je     081b2109 <+0xacf>
081b2102 +0xac8:  mov    0xc(%ebp),%eax
081b2105 +0xacb:  mov    %eax,(%ebx)
081b2107 +0xacd:  jmp    081b2119 <+0xadf>
081b2109 +0xacf:  lea    0xc(%ebp),%eax
081b210c +0xad2:  mov    %eax,(%esp)
081b210f +0xad5:  call   081b17de <+0x1a4>
081b2114 +0xada:  mov    0x10(%ebp),%eax
081b2117 +0xadd:  mov    %eax,(%ebx)
081b2119 +0xadf:  mov    %ebx,%eax
081b211b +0xae1:  add    $0x24,%esp
081b211e +0xae4:  pop    %ebx
081b211f +0xae5:  pop    %ebp
081b2120 +0xae6:  ret    $0x4
081b2123 +0xae9:  nop
081b2124 +0xaea:  push   %ebp
081b2125 +0xaeb:  mov    %esp,%ebp
081b2127 +0xaed:  push   %ebx
081b2128 +0xaee:  sub    $0x14,%esp
081b212b +0xaf1:  mov    0x10(%ebp),%eax
081b212e +0xaf4:  mov    %eax,(%esp)
081b2131 +0xaf7:  call   081b2314 <+0xcda>
081b2136 +0xafc:  mov    (%eax),%ebx
081b2138 +0xafe:  mov    0xc(%ebp),%eax
081b213b +0xb01:  mov    %eax,0x4(%esp)
081b213f +0xb05:  movl   $0x4,(%esp)
081b2146 +0xb0c:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b214b +0xb11:  mov    %eax,%edx
081b214d +0xb13:  test   %edx,%edx
081b214f +0xb15:  je     081b2153 <+0xb19>
081b2151 +0xb17:  mov    %ebx,(%eax)
081b2153 +0xb19:  add    $0x14,%esp
081b2156 +0xb1c:  pop    %ebx
081b2157 +0xb1d:  pop    %ebp
081b2158 +0xb1e:  ret
081b2159 +0xb1f:  push   %ebp
081b215a +0xb20:  mov    %esp,%ebp
081b215c +0xb22:  push   %ebx
081b215d +0xb23:  sub    $0x14,%esp
081b2160 +0xb26:  mov    0xc(%ebp),%eax
081b2163 +0xb29:  mov    %eax,(%esp)
081b2166 +0xb2c:  call   081b231c <+0xce2>
081b216b +0xb31:  mov    %eax,%ebx
081b216d +0xb33:  mov    0x8(%ebp),%eax
081b2170 +0xb36:  mov    %eax,(%esp)
081b2173 +0xb39:  call   081b231c <+0xce2>
081b2178 +0xb3e:  mov    0x10(%ebp),%edx
081b217b +0xb41:  mov    %edx,0x8(%esp)
081b217f +0xb45:  mov    %ebx,0x4(%esp)
081b2183 +0xb49:  mov    %eax,(%esp)
081b2186 +0xb4c:  call   081b2324 <+0xcea>
081b218b +0xb51:  add    $0x14,%esp
081b218e +0xb54:  pop    %ebx
081b218f +0xb55:  pop    %ebp
081b2190 +0xb56:  ret
081b2191 +0xb57:  push   %ebp
081b2192 +0xb58:  mov    %esp,%ebp
081b2194 +0xb5a:  mov    0x8(%ebp),%eax
081b2197 +0xb5d:  pop    %ebp
081b2198 +0xb5e:  ret
081b2199 +0xb5f:  nop
081b219a +0xb60:  push   %ebp
081b219b +0xb61:  mov    %esp,%ebp
081b219d +0xb63:  push   %ebx
081b219e +0xb64:  sub    $0x24,%esp
081b21a1 +0xb67:  mov    0x8(%ebp),%eax
081b21a4 +0xb6a:  mov    %eax,(%esp)
081b21a7 +0xb6d:  call   081b2384 <+0xd4a>
081b21ac +0xb72:  mov    %eax,%ebx
081b21ae +0xb74:  mov    0x8(%ebp),%eax
081b21b1 +0xb77:  mov    %eax,(%esp)
081b21b4 +0xb7a:  call   081b2368 <+0xd2e>
081b21b9 +0xb7f:  mov    %ebx,%edx
081b21bb +0xb81:  sub    %eax,%edx
081b21bd +0xb83:  mov    0xc(%ebp),%eax
081b21c0 +0xb86:  cmp    %eax,%edx
081b21c2 +0xb88:  setb   %al
081b21c5 +0xb8b:  test   %al,%al
081b21c7 +0xb8d:  je     081b21d4 <+0xb9a>
081b21c9 +0xb8f:  mov    0x10(%ebp),%eax
081b21cc +0xb92:  mov    %eax,(%esp)
081b21cf +0xb95:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
081b21d4 +0xb9a:  mov    0x8(%ebp),%eax
081b21d7 +0xb9d:  mov    %eax,(%esp)
081b21da +0xba0:  call   081b2368 <+0xd2e>
081b21df +0xba5:  mov    %eax,%ebx
081b21e1 +0xba7:  mov    0x8(%ebp),%eax
081b21e4 +0xbaa:  mov    %eax,(%esp)
081b21e7 +0xbad:  call   081b2368 <+0xd2e>
081b21ec +0xbb2:  mov    %eax,-0x10(%ebp)
081b21ef +0xbb5:  lea    0xc(%ebp),%eax
081b21f2 +0xbb8:  mov    %eax,0x4(%esp)
081b21f6 +0xbbc:  lea    -0x10(%ebp),%eax
081b21f9 +0xbbf:  mov    %eax,(%esp)
081b21fc +0xbc2:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
081b2201 +0xbc7:  mov    (%eax),%eax
081b2203 +0xbc9:  lea    (%ebx,%eax,1),%eax
081b2206 +0xbcc:  mov    %eax,-0xc(%ebp)
081b2209 +0xbcf:  mov    0x8(%ebp),%eax
081b220c +0xbd2:  mov    %eax,(%esp)
081b220f +0xbd5:  call   081b2368 <+0xd2e>
081b2214 +0xbda:  cmp    -0xc(%ebp),%eax
081b2217 +0xbdd:  ja     081b2229 <+0xbef>
081b2219 +0xbdf:  mov    0x8(%ebp),%eax
081b221c +0xbe2:  mov    %eax,(%esp)
081b221f +0xbe5:  call   081b2384 <+0xd4a>
081b2224 +0xbea:  cmp    -0xc(%ebp),%eax
081b2227 +0xbed:  jae    081b2236 <+0xbfc>
081b2229 +0xbef:  mov    0x8(%ebp),%eax
081b222c +0xbf2:  mov    %eax,(%esp)
081b222f +0xbf5:  call   081b2384 <+0xd4a>
081b2234 +0xbfa:  jmp    081b2239 <+0xbff>
081b2236 +0xbfc:  mov    -0xc(%ebp),%eax
081b2239 +0xbff:  add    $0x24,%esp
081b223c +0xc02:  pop    %ebx
081b223d +0xc03:  pop    %ebp
081b223e +0xc04:  ret
081b223f +0xc05:  nop
081b2240 +0xc06:  push   %ebp
081b2241 +0xc07:  mov    %esp,%ebp
081b2243 +0xc09:  sub    $0x18,%esp
081b2246 +0xc0c:  cmpl   $0x0,0xc(%ebp)
081b224a +0xc10:  je     081b2268 <+0xc2e>
081b224c +0xc12:  mov    0x8(%ebp),%eax
081b224f +0xc15:  movl   $0x0,0x8(%esp)
081b2257 +0xc1d:  mov    0xc(%ebp),%edx
081b225a +0xc20:  mov    %edx,0x4(%esp)
081b225e +0xc24:  mov    %eax,(%esp)
081b2261 +0xc27:  call   081b23a0 <+0xd66>
081b2266 +0xc2c:  jmp    081b226d <+0xc33>
081b2268 +0xc2e:  mov    $0x0,%eax
081b226d +0xc33:  leave
081b226e +0xc34:  ret
081b226f +0xc35:  push   %ebp
081b2270 +0xc36:  mov    %esp,%ebp
081b2272 +0xc38:  sub    $0x28,%esp
081b2275 +0xc3b:  lea    -0x10(%ebp),%eax
081b2278 +0xc3e:  lea    0xc(%ebp),%edx
081b227b +0xc41:  mov    %edx,0x4(%esp)
081b227f +0xc45:  mov    %eax,(%esp)
081b2282 +0xc48:  call   081b23d8 <+0xd9e>
081b2287 +0xc4d:  sub    $0x4,%esp
081b228a +0xc50:  lea    -0xc(%ebp),%eax
081b228d +0xc53:  lea    0x8(%ebp),%edx
081b2290 +0xc56:  mov    %edx,0x4(%esp)
081b2294 +0xc5a:  mov    %eax,(%esp)
081b2297 +0xc5d:  call   081b23d8 <+0xd9e>
081b229c +0xc62:  sub    $0x4,%esp
081b229f +0xc65:  mov    0x14(%ebp),%eax
081b22a2 +0xc68:  mov    %eax,0xc(%esp)
081b22a6 +0xc6c:  mov    0x10(%ebp),%eax
081b22a9 +0xc6f:  mov    %eax,0x8(%esp)
081b22ad +0xc73:  mov    -0x10(%ebp),%eax
081b22b0 +0xc76:  mov    %eax,0x4(%esp)
081b22b4 +0xc7a:  mov    -0xc(%ebp),%eax
081b22b7 +0xc7d:  mov    %eax,(%esp)
081b22ba +0xc80:  call   081b23fd <+0xdc3>
081b22bf +0xc85:  leave
081b22c0 +0xc86:  ret
081b22c1 +0xc87:  nop
081b22c2 +0xc88:  push   %ebp
081b22c3 +0xc89:  mov    %esp,%ebp
081b22c5 +0xc8b:  sub    $0x18,%esp
081b22c8 +0xc8e:  mov    0xc(%ebp),%eax
081b22cb +0xc91:  mov    %eax,(%esp)
081b22ce +0xc94:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b22d3 +0xc99:  leave
081b22d4 +0xc9a:  ret
081b22d5 +0xc9b:  push   %ebp
081b22d6 +0xc9c:  mov    %esp,%ebp
081b22d8 +0xc9e:  pop    %ebp
081b22d9 +0xc9f:  ret
081b22da +0xca0:  push   %ebp
081b22db +0xca1:  mov    %esp,%ebp
081b22dd +0xca3:  sub    $0x18,%esp
081b22e0 +0xca6:  lea    0x8(%ebp),%eax
081b22e3 +0xca9:  mov    %eax,(%esp)
081b22e6 +0xcac:  call   081b1a48 <+0x40e>
081b22eb +0xcb1:  mov    (%eax),%eax
081b22ed +0xcb3:  leave
081b22ee +0xcb4:  ret
081b22ef +0xcb5:  push   %ebp
081b22f0 +0xcb6:  mov    %esp,%ebp
081b22f2 +0xcb8:  sub    $0x28,%esp
081b22f5 +0xcbb:  movb   $0x1,-0x9(%ebp)
081b22f9 +0xcbf:  mov    0x10(%ebp),%eax
081b22fc +0xcc2:  mov    %eax,0x8(%esp)
081b2300 +0xcc6:  mov    0xc(%ebp),%eax
081b2303 +0xcc9:  mov    %eax,0x4(%esp)
081b2307 +0xccd:  mov    0x8(%ebp),%eax
081b230a +0xcd0:  mov    %eax,(%esp)
081b230d +0xcd3:  call   081b241e <+0xde4>
081b2312 +0xcd8:  leave
081b2313 +0xcd9:  ret
081b2314 +0xcda:  push   %ebp
081b2315 +0xcdb:  mov    %esp,%ebp
081b2317 +0xcdd:  mov    0x8(%ebp),%eax
081b231a +0xce0:  pop    %ebp
081b231b +0xce1:  ret
081b231c +0xce2:  push   %ebp
081b231d +0xce3:  mov    %esp,%ebp
081b231f +0xce5:  mov    0x8(%ebp),%eax
081b2322 +0xce8:  pop    %ebp
081b2323 +0xce9:  ret
081b2324 +0xcea:  push   %ebp
081b2325 +0xceb:  mov    %esp,%ebp
081b2327 +0xced:  push   %esi
081b2328 +0xcee:  push   %ebx
081b2329 +0xcef:  sub    $0x10,%esp
081b232c +0xcf2:  mov    0x10(%ebp),%eax
081b232f +0xcf5:  mov    %eax,(%esp)
081b2332 +0xcf8:  call   081b2463 <+0xe29>
081b2337 +0xcfd:  mov    %eax,%esi
081b2339 +0xcff:  mov    0xc(%ebp),%eax
081b233c +0xd02:  mov    %eax,(%esp)
081b233f +0xd05:  call   081b2463 <+0xe29>
081b2344 +0xd0a:  mov    %eax,%ebx
081b2346 +0xd0c:  mov    0x8(%ebp),%eax
081b2349 +0xd0f:  mov    %eax,(%esp)
081b234c +0xd12:  call   081b2463 <+0xe29>
081b2351 +0xd17:  mov    %esi,0x8(%esp)
081b2355 +0xd1b:  mov    %ebx,0x4(%esp)
081b2359 +0xd1f:  mov    %eax,(%esp)
081b235c +0xd22:  call   081b246b <+0xe31>
081b2361 +0xd27:  add    $0x10,%esp
081b2364 +0xd2a:  pop    %ebx
081b2365 +0xd2b:  pop    %esi
081b2366 +0xd2c:  pop    %ebp
081b2367 +0xd2d:  ret
081b2368 +0xd2e:  push   %ebp
081b2369 +0xd2f:  mov    %esp,%ebp
081b236b +0xd31:  mov    0x8(%ebp),%eax
081b236e +0xd34:  mov    0x4(%eax),%eax
081b2371 +0xd37:  mov    %eax,%edx
081b2373 +0xd39:  mov    0x8(%ebp),%eax
081b2376 +0xd3c:  mov    (%eax),%eax
081b2378 +0xd3e:  mov    %edx,%ecx
081b237a +0xd40:  sub    %eax,%ecx
081b237c +0xd42:  mov    %ecx,%eax
081b237e +0xd44:  sar    $0x2,%eax
081b2381 +0xd47:  pop    %ebp
081b2382 +0xd48:  ret
081b2383 +0xd49:  nop
081b2384 +0xd4a:  push   %ebp
081b2385 +0xd4b:  mov    %esp,%ebp
081b2387 +0xd4d:  sub    $0x18,%esp
081b238a +0xd50:  mov    0x8(%ebp),%eax
081b238d +0xd53:  mov    %eax,(%esp)
081b2390 +0xd56:  call   081b2490 <+0xe56>
081b2395 +0xd5b:  mov    %eax,(%esp)
081b2398 +0xd5e:  call   081b2498 <+0xe5e>
081b239d +0xd63:  leave
081b239e +0xd64:  ret
081b239f +0xd65:  nop
081b23a0 +0xd66:  push   %ebp
081b23a1 +0xd67:  mov    %esp,%ebp
081b23a3 +0xd69:  sub    $0x18,%esp
081b23a6 +0xd6c:  mov    0x8(%ebp),%eax
081b23a9 +0xd6f:  mov    %eax,(%esp)
081b23ac +0xd72:  call   081b2498 <+0xe5e>
081b23b1 +0xd77:  cmp    0xc(%ebp),%eax
081b23b4 +0xd7a:  setb   %al
081b23b7 +0xd7d:  movzbl %al,%eax
081b23ba +0xd80:  test   %eax,%eax
081b23bc +0xd82:  setne  %al
081b23bf +0xd85:  test   %al,%al
081b23c1 +0xd87:  je     081b23c8 <+0xd8e>
081b23c3 +0xd89:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081b23c8 +0xd8e:  mov    0xc(%ebp),%eax
081b23cb +0xd91:  shl    $0x2,%eax
081b23ce +0xd94:  mov    %eax,(%esp)
081b23d1 +0xd97:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081b23d6 +0xd9c:  leave
081b23d7 +0xd9d:  ret
081b23d8 +0xd9e:  push   %ebp
081b23d9 +0xd9f:  mov    %esp,%ebp
081b23db +0xda1:  push   %ebx
081b23dc +0xda2:  sub    $0x14,%esp
081b23df +0xda5:  mov    0x8(%ebp),%ebx
081b23e2 +0xda8:  mov    0xc(%ebp),%eax
081b23e5 +0xdab:  mov    (%eax),%eax
081b23e7 +0xdad:  mov    %eax,0x4(%esp)
081b23eb +0xdb1:  mov    %ebx,(%esp)
081b23ee +0xdb4:  call   081b24a2 <+0xe68>
081b23f3 +0xdb9:  mov    %ebx,%eax
081b23f5 +0xdbb:  add    $0x14,%esp
081b23f8 +0xdbe:  pop    %ebx
081b23f9 +0xdbf:  pop    %ebp
081b23fa +0xdc0:  ret    $0x4
081b23fd +0xdc3:  push   %ebp
081b23fe +0xdc4:  mov    %esp,%ebp
081b2400 +0xdc6:  sub    $0x18,%esp
081b2403 +0xdc9:  mov    0x10(%ebp),%eax
081b2406 +0xdcc:  mov    %eax,0x8(%esp)
081b240a +0xdd0:  mov    0xc(%ebp),%eax
081b240d +0xdd3:  mov    %eax,0x4(%esp)
081b2411 +0xdd7:  mov    0x8(%ebp),%eax
081b2414 +0xdda:  mov    %eax,(%esp)
081b2417 +0xddd:  call   081b24af <+0xe75>
081b241c +0xde2:  leave
081b241d +0xde3:  ret
081b241e +0xde4:  push   %ebp
081b241f +0xde5:  mov    %esp,%ebp
081b2421 +0xde7:  sub    $0x18,%esp
081b2424 +0xdea:  mov    0xc(%ebp),%edx
081b2427 +0xded:  mov    0x8(%ebp),%eax
081b242a +0xdf0:  mov    %edx,%ecx
081b242c +0xdf2:  sub    %eax,%ecx
081b242e +0xdf4:  mov    %ecx,%eax
081b2430 +0xdf6:  sar    $0x2,%eax
081b2433 +0xdf9:  shl    $0x2,%eax
081b2436 +0xdfc:  mov    %eax,0x8(%esp)
081b243a +0xe00:  mov    0x8(%ebp),%eax
081b243d +0xe03:  mov    %eax,0x4(%esp)
081b2441 +0xe07:  mov    0x10(%ebp),%eax
081b2444 +0xe0a:  mov    %eax,(%esp)
081b2447 +0xe0d:  call   0807d880 <_init+0x178>
081b244c +0xe12:  mov    0xc(%ebp),%edx
081b244f +0xe15:  mov    0x8(%ebp),%eax
081b2452 +0xe18:  mov    %edx,%ecx
081b2454 +0xe1a:  sub    %eax,%ecx
081b2456 +0xe1c:  mov    %ecx,%eax
081b2458 +0xe1e:  sar    $0x2,%eax
081b245b +0xe21:  shl    $0x2,%eax
081b245e +0xe24:  add    0x10(%ebp),%eax
081b2461 +0xe27:  leave
081b2462 +0xe28:  ret
081b2463 +0xe29:  push   %ebp
081b2464 +0xe2a:  mov    %esp,%ebp
081b2466 +0xe2c:  mov    0x8(%ebp),%eax
081b2469 +0xe2f:  pop    %ebp
081b246a +0xe30:  ret
081b246b +0xe31:  push   %ebp
081b246c +0xe32:  mov    %esp,%ebp
081b246e +0xe34:  sub    $0x28,%esp
081b2471 +0xe37:  movb   $0x1,-0x9(%ebp)
081b2475 +0xe3b:  mov    0x10(%ebp),%eax
081b2478 +0xe3e:  mov    %eax,0x8(%esp)
081b247c +0xe42:  mov    0xc(%ebp),%eax
081b247f +0xe45:  mov    %eax,0x4(%esp)
081b2483 +0xe49:  mov    0x8(%ebp),%eax
081b2486 +0xe4c:  mov    %eax,(%esp)
081b2489 +0xe4f:  call   081b24d0 <+0xe96>
081b248e +0xe54:  leave
081b248f +0xe55:  ret
081b2490 +0xe56:  push   %ebp
081b2491 +0xe57:  mov    %esp,%ebp
081b2493 +0xe59:  mov    0x8(%ebp),%eax
081b2496 +0xe5c:  pop    %ebp
081b2497 +0xe5d:  ret
081b2498 +0xe5e:  push   %ebp
081b2499 +0xe5f:  mov    %esp,%ebp
081b249b +0xe61:  mov    $0x3fffffff,%eax
081b24a0 +0xe66:  pop    %ebp
081b24a1 +0xe67:  ret
081b24a2 +0xe68:  push   %ebp
081b24a3 +0xe69:  mov    %esp,%ebp
081b24a5 +0xe6b:  mov    0x8(%ebp),%eax
081b24a8 +0xe6e:  mov    0xc(%ebp),%edx
081b24ab +0xe71:  mov    %edx,(%eax)
081b24ad +0xe73:  pop    %ebp
081b24ae +0xe74:  ret
081b24af +0xe75:  push   %ebp
081b24b0 +0xe76:  mov    %esp,%ebp
081b24b2 +0xe78:  sub    $0x18,%esp
081b24b5 +0xe7b:  mov    0x10(%ebp),%eax
081b24b8 +0xe7e:  mov    %eax,0x8(%esp)
081b24bc +0xe82:  mov    0xc(%ebp),%eax
081b24bf +0xe85:  mov    %eax,0x4(%esp)
081b24c3 +0xe89:  mov    0x8(%ebp),%eax
081b24c6 +0xe8c:  mov    %eax,(%esp)
081b24c9 +0xe8f:  call   081b251d <+0xee3>
081b24ce +0xe94:  leave
081b24cf +0xe95:  ret
081b24d0 +0xe96:  push   %ebp
081b24d1 +0xe97:  mov    %esp,%ebp
081b24d3 +0xe99:  sub    $0x28,%esp
081b24d6 +0xe9c:  mov    0xc(%ebp),%edx
081b24d9 +0xe9f:  mov    0x8(%ebp),%eax
081b24dc +0xea2:  mov    %edx,%ecx
081b24de +0xea4:  sub    %eax,%ecx
081b24e0 +0xea6:  mov    %ecx,%eax
081b24e2 +0xea8:  sar    $0x2,%eax
081b24e5 +0xeab:  mov    %eax,-0xc(%ebp)
081b24e8 +0xeae:  mov    -0xc(%ebp),%eax
081b24eb +0xeb1:  lea    0x0(,%eax,4),%edx
081b24f2 +0xeb8:  mov    -0xc(%ebp),%eax
081b24f5 +0xebb:  shl    $0x2,%eax
081b24f8 +0xebe:  neg    %eax
081b24fa +0xec0:  add    0x10(%ebp),%eax
081b24fd +0xec3:  mov    %edx,0x8(%esp)
081b2501 +0xec7:  mov    0x8(%ebp),%edx
081b2504 +0xeca:  mov    %edx,0x4(%esp)
081b2508 +0xece:  mov    %eax,(%esp)
081b250b +0xed1:  call   0807d880 <_init+0x178>
081b2510 +0xed6:  mov    -0xc(%ebp),%eax
081b2513 +0xed9:  shl    $0x2,%eax
081b2516 +0xedc:  neg    %eax
081b2518 +0xede:  add    0x10(%ebp),%eax
081b251b +0xee1:  leave
081b251c +0xee2:  ret
081b251d +0xee3:  push   %ebp
081b251e +0xee4:  mov    %esp,%ebp
081b2520 +0xee6:  sub    $0x18,%esp
081b2523 +0xee9:  mov    0x10(%ebp),%eax
081b2526 +0xeec:  mov    %eax,0x8(%esp)
081b252a +0xef0:  mov    0xc(%ebp),%eax
081b252d +0xef3:  mov    %eax,0x4(%esp)
081b2531 +0xef7:  mov    0x8(%ebp),%eax
081b2534 +0xefa:  mov    %eax,(%esp)
081b2537 +0xefd:  call   081b253e <+0xf04>
081b253c +0xf02:  leave
081b253d +0xf03:  ret
081b253e +0xf04:  push   %ebp
081b253f +0xf05:  mov    %esp,%ebp
081b2541 +0xf07:  push   %ebx
081b2542 +0xf08:  sub    $0x14,%esp
081b2545 +0xf0b:  mov    0xc(%ebp),%eax
081b2548 +0xf0e:  mov    %eax,(%esp)
081b254b +0xf11:  call   081b2576 <+0xf3c>
081b2550 +0xf16:  mov    %eax,%ebx
081b2552 +0xf18:  mov    0x8(%ebp),%eax
081b2555 +0xf1b:  mov    %eax,(%esp)
081b2558 +0xf1e:  call   081b2576 <+0xf3c>
081b255d +0xf23:  mov    0x10(%ebp),%edx
081b2560 +0xf26:  mov    %edx,0x8(%esp)
081b2564 +0xf2a:  mov    %ebx,0x4(%esp)
081b2568 +0xf2e:  mov    %eax,(%esp)
081b256b +0xf31:  call   081b2589 <+0xf4f>
081b2570 +0xf36:  add    $0x14,%esp
081b2573 +0xf39:  pop    %ebx
081b2574 +0xf3a:  pop    %ebp
081b2575 +0xf3b:  ret
081b2576 +0xf3c:  push   %ebp
081b2577 +0xf3d:  mov    %esp,%ebp
081b2579 +0xf3f:  sub    $0x18,%esp
081b257c +0xf42:  lea    0x8(%ebp),%eax
081b257f +0xf45:  mov    %eax,(%esp)
081b2582 +0xf48:  call   081b25ce <+0xf94>
081b2587 +0xf4d:  leave
081b2588 +0xf4e:  ret
081b2589 +0xf4f:  push   %ebp
081b258a +0xf50:  mov    %esp,%ebp
081b258c +0xf52:  push   %esi
081b258d +0xf53:  push   %ebx
081b258e +0xf54:  sub    $0x10,%esp
081b2591 +0xf57:  mov    0x10(%ebp),%eax
081b2594 +0xf5a:  mov    %eax,(%esp)
081b2597 +0xf5d:  call   081b2463 <+0xe29>
081b259c +0xf62:  mov    %eax,%esi
081b259e +0xf64:  mov    0xc(%ebp),%eax
081b25a1 +0xf67:  mov    %eax,(%esp)
081b25a4 +0xf6a:  call   081b2463 <+0xe29>
081b25a9 +0xf6f:  mov    %eax,%ebx
081b25ab +0xf71:  mov    0x8(%ebp),%eax
081b25ae +0xf74:  mov    %eax,(%esp)
081b25b1 +0xf77:  call   081b2463 <+0xe29>
081b25b6 +0xf7c:  mov    %esi,0x8(%esp)
081b25ba +0xf80:  mov    %ebx,0x4(%esp)
081b25be +0xf84:  mov    %eax,(%esp)
081b25c1 +0xf87:  call   081b22ef <+0xcb5>
081b25c6 +0xf8c:  add    $0x10,%esp
081b25c9 +0xf8f:  pop    %ebx
081b25ca +0xf90:  pop    %esi
081b25cb +0xf91:  pop    %ebp
081b25cc +0xf92:  ret
081b25cd +0xf93:  nop
081b25ce +0xf94:  push   %ebp
081b25cf +0xf95:  mov    %esp,%ebp
081b25d1 +0xf97:  mov    0x8(%ebp),%eax
081b25d4 +0xf9a:  mov    (%eax),%eax
081b25d6 +0xf9c:  pop    %ebp
081b25d7 +0xf9d:  ret
```

## 反编译 C

```c
// <global>::global @ 0x81b163a

/* nexon::cash::UserBalance::expire() */

void nexon::cash::UserBalance::_GLOBAL__I_expire(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
