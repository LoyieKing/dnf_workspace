# loadScript

`_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv`

`ARAD::SCRIPT::EmblemCompound::loadScript()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::EmblemCompound` | `0x088b154a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b154a  _ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv
#           ARAD::SCRIPT::EmblemCompound::loadScript()
# range [0x088b154a, 0x088b1925]
088b154a +0x000:  push   %ebp
088b154b +0x001:  mov    %esp,%ebp
088b154d +0x003:  push   %esi
088b154e +0x004:  push   %ebx
088b154f +0x005:  sub    $0x70,%esp
088b1552 +0x008:  movl   $"emblem_compound_jpn.etc",0x4(%esp)
088b155a +0x010:  movl   $"Etc/EmblemRenewal/",(%esp)
088b1561 +0x017:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088b1566 +0x01c:  xor    $0x1,%eax
088b1569 +0x01f:  test   %al,%al
088b156b +0x021:  je     088b1577 <+0x2d>
088b156d +0x023:  mov    $0xffffffff,%ebx
088b1572 +0x028:  jmp    088b191a <+0x3d0>
088b1577 +0x02d:  lea    -0x4c(%ebp),%eax
088b157a +0x030:  mov    %eax,(%esp)
088b157d +0x033:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088b1582 +0x038:  movb   $0x0,-0x4d(%ebp)
088b1586 +0x03c:  movb   $0x0,-0x4e(%ebp)
088b158a +0x040:  jmp    088b158d <+0x43>
088b158c +0x042:  nop
088b158d +0x043:  movl   $0x1,0x4(%esp)
088b1595 +0x04b:  lea    -0x4c(%ebp),%eax
088b1598 +0x04e:  mov    %eax,(%esp)
088b159b +0x051:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088b15a0 +0x056:  xor    $0x1,%eax
088b15a3 +0x059:  test   %al,%al
088b15a5 +0x05b:  jne    088b18e7 <+0x39d>
088b15ab +0x061:  movl   $"[emblem compound cost]",0x4(%esp)
088b15b3 +0x069:  lea    -0x4c(%ebp),%eax
088b15b6 +0x06c:  mov    %eax,(%esp)
088b15b9 +0x06f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088b15be +0x074:  test   %al,%al
088b15c0 +0x076:  je     088b16ad <+0x163>
088b15c6 +0x07c:  movl   $0x1,0xc(%esp)
088b15ce +0x084:  lea    -0x4e(%ebp),%eax
088b15d1 +0x087:  mov    %eax,0x8(%esp)
088b15d5 +0x08b:  lea    -0x4c(%ebp),%eax
088b15d8 +0x08e:  mov    %eax,0x4(%esp)
088b15dc +0x092:  lea    -0x4d(%ebp),%eax
088b15df +0x095:  mov    %eax,(%esp)
088b15e2 +0x098:  call   088bceaf <_Z13ScanTypeOrIntRbRSsS_b>  ; ScanTypeOrInt(bool&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool&, bool)
088b15e7 +0x09d:  mov    %eax,-0x54(%ebp)
088b15ea +0x0a0:  movzbl -0x4d(%ebp),%eax
088b15ee +0x0a4:  test   %al,%al
088b15f0 +0x0a6:  jne    088b15fd <+0xb3>
088b15f2 +0x0a8:  movzbl -0x4e(%ebp),%eax
088b15f6 +0x0ac:  xor    $0x1,%eax
088b15f9 +0x0af:  test   %al,%al
088b15fb +0x0b1:  je     088b1600 <+0xb6>
088b15fd +0x0b3:  nop
088b15fe +0x0b4:  jmp    088b158d <+0x43>
088b1600 +0x0b6:  movl   $0x0,(%esp)
088b1607 +0x0bd:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b160c +0x0c2:  mov    %eax,-0x58(%ebp)
088b160f +0x0c5:  mov    0x8(%ebp),%edx
088b1612 +0x0c8:  lea    -0x48(%ebp),%eax
088b1615 +0x0cb:  mov    %edx,0x4(%esp)
088b1619 +0x0cf:  mov    %eax,(%esp)
088b161c +0x0d2:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
088b1621 +0x0d7:  sub    $0x4,%esp
088b1624 +0x0da:  mov    0x8(%ebp),%edx
088b1627 +0x0dd:  lea    -0x44(%ebp),%eax
088b162a +0x0e0:  lea    -0x54(%ebp),%ecx
088b162d +0x0e3:  mov    %ecx,0x8(%esp)
088b1631 +0x0e7:  mov    %edx,0x4(%esp)
088b1635 +0x0eb:  mov    %eax,(%esp)
088b1638 +0x0ee:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
088b163d +0x0f3:  sub    $0x4,%esp
088b1640 +0x0f6:  lea    -0x48(%ebp),%eax
088b1643 +0x0f9:  mov    %eax,0x4(%esp)
088b1647 +0x0fd:  lea    -0x44(%ebp),%eax
088b164a +0x100:  mov    %eax,(%esp)
088b164d +0x103:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
088b1652 +0x108:  test   %al,%al
088b1654 +0x10a:  je     088b1690 <+0x146>
088b1656 +0x10c:  lea    -0x58(%ebp),%eax
088b1659 +0x10f:  mov    %eax,0x8(%esp)
088b165d +0x113:  lea    -0x54(%ebp),%eax
088b1660 +0x116:  mov    %eax,0x4(%esp)
088b1664 +0x11a:  lea    -0x38(%ebp),%eax
088b1667 +0x11d:  mov    %eax,(%esp)
088b166a +0x120:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
088b166f +0x125:  mov    0x8(%ebp),%edx
088b1672 +0x128:  lea    -0x40(%ebp),%eax
088b1675 +0x12b:  lea    -0x38(%ebp),%ecx
088b1678 +0x12e:  mov    %ecx,0x8(%esp)
088b167c +0x132:  mov    %edx,0x4(%esp)
088b1680 +0x136:  mov    %eax,(%esp)
088b1683 +0x139:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
088b1688 +0x13e:  sub    $0x4,%esp
088b168b +0x141:  jmp    088b15c6 <+0x7c>
088b1690 +0x146:  mov    -0x54(%ebp),%eax
088b1693 +0x149:  mov    %eax,0x4(%esp)
088b1697 +0x14d:  movl   $"[emblem compound cost] duplicate grade:%d",(%esp)
088b169e +0x154:  call   0807db60 <_init+0x458>
088b16a3 +0x159:  mov    $0xfffffffe,%ebx
088b16a8 +0x15e:  jmp    088b190f <+0x3c5>
088b16ad +0x163:  movl   $"[emblem compound result]",0x4(%esp)
088b16b5 +0x16b:  lea    -0x4c(%ebp),%eax
088b16b8 +0x16e:  mov    %eax,(%esp)
088b16bb +0x171:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088b16c0 +0x176:  test   %al,%al
088b16c2 +0x178:  je     088b1857 <+0x30d>
088b16c8 +0x17e:  movl   $0x1,0xc(%esp)
088b16d0 +0x186:  lea    -0x4e(%ebp),%eax
088b16d3 +0x189:  mov    %eax,0x8(%esp)
088b16d7 +0x18d:  lea    -0x4c(%ebp),%eax
088b16da +0x190:  mov    %eax,0x4(%esp)
088b16de +0x194:  lea    -0x4d(%ebp),%eax
088b16e1 +0x197:  mov    %eax,(%esp)
088b16e4 +0x19a:  call   088bceaf <_Z13ScanTypeOrIntRbRSsS_b>  ; ScanTypeOrInt(bool&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool&, bool)
088b16e9 +0x19f:  mov    %eax,-0x5c(%ebp)
088b16ec +0x1a2:  movzbl -0x4d(%ebp),%eax
088b16f0 +0x1a6:  test   %al,%al
088b16f2 +0x1a8:  jne    088b16ff <+0x1b5>
088b16f4 +0x1aa:  movzbl -0x4e(%ebp),%eax
088b16f8 +0x1ae:  xor    $0x1,%eax
088b16fb +0x1b1:  test   %al,%al
088b16fd +0x1b3:  je     088b1705 <+0x1bb>
088b16ff +0x1b5:  nop
088b1700 +0x1b6:  jmp    088b158d <+0x43>
088b1705 +0x1bb:  movl   $0xa,(%esp)
088b170c +0x1c2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
088b1711 +0x1c7:  mov    %eax,%ecx
088b1713 +0x1c9:  mov    %ecx,%edx
088b1715 +0x1cb:  mov    $0x0,%eax
088b171a +0x1d0:  mov    %eax,%ebx
088b171c +0x1d2:  movw   $0x0,(%edx,%ebx,4)
088b1722 +0x1d8:  mov    %eax,%ebx
088b1724 +0x1da:  movw   $0x0,0x2(%edx,%ebx,4)
088b172b +0x1e1:  cmp    $0x1,%eax
088b172e +0x1e4:  je     088b1735 <+0x1eb>
088b1730 +0x1e6:  add    $0x1,%eax
088b1733 +0x1e9:  jmp    088b171a <+0x1d0>
088b1735 +0x1eb:  movb   $0x0,0x8(%edx)
088b1739 +0x1ef:  mov    %ecx,%eax
088b173b +0x1f1:  mov    %eax,-0x60(%ebp)
088b173e +0x1f4:  mov    -0x60(%ebp),%ebx
088b1741 +0x1f7:  movl   $0x0,(%esp)
088b1748 +0x1fe:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b174d +0x203:  mov    %ax,(%ebx)
088b1750 +0x206:  mov    -0x60(%ebp),%ebx
088b1753 +0x209:  movl   $0x0,(%esp)
088b175a +0x210:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b175f +0x215:  mov    %ax,0x2(%ebx)
088b1763 +0x219:  mov    -0x60(%ebp),%ebx
088b1766 +0x21c:  movl   $0x0,(%esp)
088b176d +0x223:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b1772 +0x228:  mov    %ax,0x4(%ebx)
088b1776 +0x22c:  mov    -0x60(%ebp),%ebx
088b1779 +0x22f:  movl   $0x0,(%esp)
088b1780 +0x236:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b1785 +0x23b:  mov    %ax,0x6(%ebx)
088b1789 +0x23f:  movl   $0x0,(%esp)
088b1790 +0x246:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b1795 +0x24b:  mov    %eax,-0x14(%ebp)
088b1798 +0x24e:  mov    -0x60(%ebp),%eax
088b179b +0x251:  cmpl   $0x1,-0x14(%ebp)
088b179f +0x255:  sete   %dl
088b17a2 +0x258:  mov    %dl,0x8(%eax)
088b17a5 +0x25b:  mov    0x8(%ebp),%eax
088b17a8 +0x25e:  lea    0x18(%eax),%edx
088b17ab +0x261:  lea    -0x30(%ebp),%eax
088b17ae +0x264:  mov    %edx,0x4(%esp)
088b17b2 +0x268:  mov    %eax,(%esp)
088b17b5 +0x26b:  call   08193a2e <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x696>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x696
088b17ba +0x270:  sub    $0x4,%esp
088b17bd +0x273:  mov    0x8(%ebp),%eax
088b17c0 +0x276:  lea    0x18(%eax),%ecx
088b17c3 +0x279:  lea    -0x2c(%ebp),%eax
088b17c6 +0x27c:  lea    -0x5c(%ebp),%edx
088b17c9 +0x27f:  mov    %edx,0x8(%esp)
088b17cd +0x283:  mov    %ecx,0x4(%esp)
088b17d1 +0x287:  mov    %eax,(%esp)
088b17d4 +0x28a:  call   088b2054 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x157>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x157
088b17d9 +0x28f:  sub    $0x4,%esp
088b17dc +0x292:  lea    -0x30(%ebp),%eax
088b17df +0x295:  mov    %eax,0x4(%esp)
088b17e3 +0x299:  lea    -0x2c(%ebp),%eax
088b17e6 +0x29c:  mov    %eax,(%esp)
088b17e9 +0x29f:  call   08193a54 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x6bc>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x6bc
088b17ee +0x2a4:  test   %al,%al
088b17f0 +0x2a6:  je     088b182f <+0x2e5>
088b17f2 +0x2a8:  lea    -0x60(%ebp),%eax
088b17f5 +0x2ab:  mov    %eax,0x8(%esp)
088b17f9 +0x2af:  lea    -0x5c(%ebp),%eax
088b17fc +0x2b2:  mov    %eax,0x4(%esp)
088b1800 +0x2b6:  lea    -0x20(%ebp),%eax
088b1803 +0x2b9:  mov    %eax,(%esp)
088b1806 +0x2bc:  call   088b2080 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x183>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x183
088b180b +0x2c1:  mov    0x8(%ebp),%eax
088b180e +0x2c4:  lea    0x18(%eax),%ecx
088b1811 +0x2c7:  lea    -0x28(%ebp),%eax
088b1814 +0x2ca:  lea    -0x20(%ebp),%edx
088b1817 +0x2cd:  mov    %edx,0x8(%esp)
088b181b +0x2d1:  mov    %ecx,0x4(%esp)
088b181f +0x2d5:  mov    %eax,(%esp)
088b1822 +0x2d8:  call   088b20ae <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x1b1>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x1b1
088b1827 +0x2dd:  sub    $0x4,%esp
088b182a +0x2e0:  jmp    088b16c8 <+0x17e>
088b182f +0x2e5:  mov    -0x60(%ebp),%eax
088b1832 +0x2e8:  mov    %eax,(%esp)
088b1835 +0x2eb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088b183a +0x2f0:  mov    -0x5c(%ebp),%eax
088b183d +0x2f3:  mov    %eax,0x4(%esp)
088b1841 +0x2f7:  movl   $"[emblem compound result] duplicate grade:%d",(%esp)
088b1848 +0x2fe:  call   0807db60 <_init+0x458>
088b184d +0x303:  mov    $0xfffffffe,%ebx
088b1852 +0x308:  jmp    088b190f <+0x3c5>
088b1857 +0x30d:  movl   $"[emblem list]",0x4(%esp)
088b185f +0x315:  lea    -0x4c(%ebp),%eax
088b1862 +0x318:  mov    %eax,(%esp)
088b1865 +0x31b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088b186a +0x320:  test   %al,%al
088b186c +0x322:  je     088b158c <+0x42>
088b1872 +0x328:  movl   $0x1,0xc(%esp)
088b187a +0x330:  lea    -0x4e(%ebp),%eax
088b187d +0x333:  mov    %eax,0x8(%esp)
088b1881 +0x337:  lea    -0x4c(%ebp),%eax
088b1884 +0x33a:  mov    %eax,0x4(%esp)
088b1888 +0x33e:  lea    -0x4d(%ebp),%eax
088b188b +0x341:  mov    %eax,(%esp)
088b188e +0x344:  call   088bceaf <_Z13ScanTypeOrIntRbRSsS_b>  ; ScanTypeOrInt(bool&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool&, bool)
088b1893 +0x349:  mov    %eax,-0x10(%ebp)
088b1896 +0x34c:  movzbl -0x4d(%ebp),%eax
088b189a +0x350:  test   %al,%al
088b189c +0x352:  jne    088b18a9 <+0x35f>
088b189e +0x354:  movzbl -0x4e(%ebp),%eax
088b18a2 +0x358:  xor    $0x1,%eax
088b18a5 +0x35b:  test   %al,%al
088b18a7 +0x35d:  je     088b18af <+0x365>
088b18a9 +0x35f:  nop
088b18aa +0x360:  jmp    088b158d <+0x43>
088b18af +0x365:  movl   $0x0,(%esp)
088b18b6 +0x36c:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b18bb +0x371:  mov    %eax,-0xc(%ebp)
088b18be +0x374:  mov    -0xc(%ebp),%eax
088b18c1 +0x377:  mov    %eax,-0x18(%ebp)
088b18c4 +0x37a:  mov    -0x10(%ebp),%edx
088b18c7 +0x37d:  mov    %edx,%eax
088b18c9 +0x37f:  add    %eax,%eax
088b18cb +0x381:  add    %edx,%eax
088b18cd +0x383:  shl    $0x2,%eax
088b18d0 +0x386:  add    $0x30,%eax
088b18d3 +0x389:  add    0x8(%ebp),%eax
088b18d6 +0x38c:  lea    -0x18(%ebp),%edx
088b18d9 +0x38f:  mov    %edx,0x4(%esp)
088b18dd +0x393:  mov    %eax,(%esp)
088b18e0 +0x396:  call   0819d18c <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x1d
088b18e5 +0x39b:  jmp    088b1872 <+0x328>
088b18e7 +0x39d:  nop
088b18e8 +0x39e:  call   088bc054 <_Z20unloadRDARScriptFilev>  ; unloadRDARScriptFile()
088b18ed +0x3a3:  mov    $0x0,%ebx
088b18f2 +0x3a8:  jmp    088b190f <+0x3c5>
088b18f4 +0x3aa:  mov    %edx,%ebx
088b18f6 +0x3ac:  mov    %eax,%esi
088b18f8 +0x3ae:  lea    -0x4c(%ebp),%eax
088b18fb +0x3b1:  mov    %eax,(%esp)
088b18fe +0x3b4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088b1903 +0x3b9:  mov    %esi,%eax
088b1905 +0x3bb:  mov    %ebx,%edx
088b1907 +0x3bd:  mov    %eax,(%esp)
088b190a +0x3c0:  call   08ae3750 <_Unwind_Resume>
088b190f +0x3c5:  lea    -0x4c(%ebp),%eax
088b1912 +0x3c8:  mov    %eax,(%esp)
088b1915 +0x3cb:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088b191a +0x3d0:  mov    %ebx,%eax
088b191c +0x3d2:  lea    -0x8(%ebp),%esp
088b191f +0x3d5:  add    $0x0,%esp
088b1922 +0x3d8:  pop    %ebx
088b1923 +0x3d9:  pop    %esi
088b1924 +0x3da:  pop    %ebp
088b1925 +0x3db:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::EmblemCompound::loadScript @ 0x88b154a

/* ARAD::SCRIPT::EmblemCompound::loadScript() */

undefined4 __thiscall ARAD::SCRIPT::EmblemCompound::loadScript(EmblemCompound *this)

{
  Result *pRVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  Result *pRVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  Result *local_64;
  int local_60;
  int local_5c;
  int local_58;
  bool local_52;
  bool local_51;
  string local_50;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_4c [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_48 [4];
  pair local_44 [8];
  pair<int_const,int> local_3c [8];
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  local_34 [4];
  _Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>> local_30 [4];
  pair local_2c [8];
  pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*> local_24 [8];
  ulong local_1c;
  int local_18;
  int local_14;
  ulong local_10;
  
  cVar2 = loadRDARScriptFile("Etc/EmblemRenewal/","emblem_compound_jpn.etc");
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_50);
    local_51 = false;
    local_52 = false;
                    /* try { // try from 088b159b to 088b18ec has its CatchHandler @ 088b18f4 */
    while (cVar2 = ScanType((string *)&local_50,true), cVar2 == '\x01') {
      bVar3 = std::operator==(&local_50,"[emblem compound cost]");
      if (bVar3) {
        while ((local_58 = ScanTypeOrInt(&local_51,(string *)&local_50,&local_52,true),
               local_51 == false && (local_52 == true))) {
          local_5c = ScanInt((bool *)0x0);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_4c);
          piVar8 = &local_58;
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    ((int *)local_48);
          cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                            (local_48,(_Rb_tree_iterator *)local_4c);
          if (cVar2 == '\0') {
            printf("[emblem compound cost] duplicate grade:%d",local_58,piVar8);
            uVar7 = 0xfffffffe;
            goto LAB_088b190f;
          }
          std::pair<int_const,int>::pair<int&,int&>(local_3c,&local_58,&local_5c);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                    (local_44);
        }
      }
      else {
        bVar3 = std::operator==(&local_50,"[emblem compound result]");
        if (bVar3) {
          while ((local_60 = ScanTypeOrInt(&local_51,(string *)&local_50,&local_52,true),
                 local_51 == false && (local_52 == true))) {
            pRVar5 = operator_new(10);
            iVar6 = 0;
            while( true ) {
              *(undefined2 *)(pRVar5 + iVar6 * 4) = 0;
              *(undefined2 *)(pRVar5 + iVar6 * 4 + 2) = 0;
              if (iVar6 == 1) break;
              iVar6 = iVar6 + 1;
            }
            pRVar5[8] = (Result)0x0;
            local_64 = pRVar5;
            uVar4 = ScanInt((bool *)0x0);
            pRVar1 = local_64;
            *(undefined2 *)pRVar5 = uVar4;
            uVar4 = ScanInt((bool *)0x0);
            pRVar5 = local_64;
            *(undefined2 *)(pRVar1 + 2) = uVar4;
            uVar4 = ScanInt((bool *)0x0);
            pRVar1 = local_64;
            *(undefined2 *)(pRVar5 + 4) = uVar4;
            uVar4 = ScanInt((bool *)0x0);
            *(undefined2 *)(pRVar1 + 6) = uVar4;
            local_18 = ScanInt((bool *)0x0);
            local_64[8] = (Result)(local_18 == 1);
            std::
            map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
            ::end(local_34);
            piVar8 = &local_60;
            std::
            map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
            ::find((int *)local_30);
            cVar2 = std::
                    _Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
                    operator==(local_30,(_Rb_tree_iterator *)local_34);
            if (cVar2 == '\0') {
              operator_delete(local_64);
              printf("[emblem compound result] duplicate grade:%d",local_60,piVar8);
              uVar7 = 0xfffffffe;
              goto LAB_088b190f;
            }
            std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>::
            pair<int&,ARAD::SCRIPT::EmblemCompound::Result*&>(local_24,&local_60,&local_64);
            std::
            map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
            ::insert(local_2c);
          }
        }
        else {
          bVar3 = std::operator==(&local_50,"[emblem list]");
          if (bVar3) {
            while ((local_14 = ScanTypeOrInt(&local_51,(string *)&local_50,&local_52,true),
                   local_51 == false && (local_52 == true))) {
              local_1c = ScanInt((bool *)0x0);
              local_10 = local_1c;
              std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
                        ((vector<unsigned_long,std::allocator<unsigned_long>> *)
                         (this + local_14 * 0xc + 0x30),&local_1c);
            }
          }
        }
      }
    }
    unloadRDARScriptFile();
    uVar7 = 0;
LAB_088b190f:
    std::string::~string((string *)&local_50);
  }
  else {
    uVar7 = 0xffffffff;
  }
  return uVar7;
}
```
