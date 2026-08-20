# _IsTimeout

`_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi`

`global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to disconnect_detecter::CDisconnectDetecter` | `0x0847260d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847260d  _GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi
#           global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)
# range [0x0847260d, 0x08472ff7]
0847260d +0x000:  push   %ebp
0847260e +0x001:  mov    %esp,%ebp
08472610 +0x003:  sub    $0x18,%esp
08472613 +0x006:  movl   $0xffff,0x4(%esp)
0847261b +0x00e:  movl   $0x1,(%esp)
08472622 +0x015:  call   084725cd <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08472627 +0x01a:  leave
08472628 +0x01b:  ret
08472629 +0x01c:  nop
0847262a +0x01d:  push   %ebp
0847262b +0x01e:  mov    %esp,%ebp
0847262d +0x020:  mov    0x8(%ebp),%eax
08472630 +0x023:  mov    (%eax),%edx
08472632 +0x025:  mov    0xc(%ebp),%eax
08472635 +0x028:  mov    (%eax),%eax
08472637 +0x02a:  cmp    %eax,%edx
08472639 +0x02c:  jge    08472642 <+0x35>
0847263b +0x02e:  mov    $0x1,%eax
08472640 +0x033:  jmp    0847266c <+0x5f>
08472642 +0x035:  mov    0x8(%ebp),%eax
08472645 +0x038:  mov    (%eax),%edx
08472647 +0x03a:  mov    0xc(%ebp),%eax
0847264a +0x03d:  mov    (%eax),%eax
0847264c +0x03f:  cmp    %eax,%edx
0847264e +0x041:  jne    08472667 <+0x5a>
08472650 +0x043:  mov    0x8(%ebp),%eax
08472653 +0x046:  mov    0x4(%eax),%edx
08472656 +0x049:  mov    0xc(%ebp),%eax
08472659 +0x04c:  mov    0x4(%eax),%eax
0847265c +0x04f:  cmp    %eax,%edx
0847265e +0x051:  jge    08472667 <+0x5a>
08472660 +0x053:  mov    $0x1,%eax
08472665 +0x058:  jmp    0847266c <+0x5f>
08472667 +0x05a:  mov    $0x0,%eax
0847266c +0x05f:  pop    %ebp
0847266d +0x060:  ret
0847266e +0x061:  push   %ebp
0847266f +0x062:  mov    %esp,%ebp
08472671 +0x064:  mov    0x8(%ebp),%eax
08472674 +0x067:  mov    0xc(%ebp),%edx
08472677 +0x06a:  mov    %edx,(%eax)
08472679 +0x06c:  mov    0x8(%ebp),%eax
0847267c +0x06f:  mov    0x10(%ebp),%edx
0847267f +0x072:  mov    %edx,0x4(%eax)
08472682 +0x075:  pop    %ebp
08472683 +0x076:  ret
08472684 +0x077:  push   %ebp
08472685 +0x078:  mov    %esp,%ebp
08472687 +0x07a:  sub    $0x18,%esp
0847268a +0x07d:  mov    0x8(%ebp),%eax
0847268d +0x080:  mov    %eax,(%esp)
08472690 +0x083:  call   08472866 <+0x259>
08472695 +0x088:  leave
08472696 +0x089:  ret
08472697 +0x08a:  push   %ebp
08472698 +0x08b:  mov    %esp,%ebp
0847269a +0x08d:  push   %ebx
0847269b +0x08e:  sub    $0x24,%esp
0847269e +0x091:  mov    0x8(%ebp),%ebx
084726a1 +0x094:  mov    0x10(%ebp),%eax
084726a4 +0x097:  mov    %eax,(%esp)
084726a7 +0x09a:  call   08472879 <+0x26c>
084726ac +0x09f:  mov    (%eax),%eax
084726ae +0x0a1:  mov    %eax,-0xc(%ebp)
084726b1 +0x0a4:  mov    0xc(%ebp),%eax
084726b4 +0x0a7:  mov    %eax,(%esp)
084726b7 +0x0aa:  call   08472871 <+0x264>
084726bc +0x0af:  lea    -0xc(%ebp),%edx
084726bf +0x0b2:  mov    %edx,0x8(%esp)
084726c3 +0x0b6:  mov    %eax,0x4(%esp)
084726c7 +0x0ba:  mov    %ebx,(%esp)
084726ca +0x0bd:  call   08472882 <+0x275>
084726cf +0x0c2:  mov    %ebx,%eax
084726d1 +0x0c4:  add    $0x24,%esp
084726d4 +0x0c7:  pop    %ebx
084726d5 +0x0c8:  pop    %ebp
084726d6 +0x0c9:  ret    $0x4
084726d9 +0x0cc:  nop
084726da +0x0cd:  push   %ebp
084726db +0x0ce:  mov    %esp,%ebp
084726dd +0x0d0:  push   %ebx
084726de +0x0d1:  sub    $0x14,%esp
084726e1 +0x0d4:  mov    0x8(%ebp),%ebx
084726e4 +0x0d7:  mov    0xc(%ebp),%eax
084726e7 +0x0da:  mov    %eax,(%esp)
084726ea +0x0dd:  call   084728b5 <+0x2a8>
084726ef +0x0e2:  mov    0x4(%eax),%edx
084726f2 +0x0e5:  mov    (%eax),%eax
084726f4 +0x0e7:  mov    %eax,(%ebx)
084726f6 +0x0e9:  mov    %edx,0x4(%ebx)
084726f9 +0x0ec:  mov    0xc(%ebp),%eax
084726fc +0x0ef:  add    $0x8,%eax
084726ff +0x0f2:  mov    %eax,(%esp)
08472702 +0x0f5:  call   084728bd <+0x2b0>
08472707 +0x0fa:  mov    (%eax),%edx
08472709 +0x0fc:  mov    0x8(%ebp),%eax
0847270c +0x0ff:  mov    %edx,0x8(%eax)
0847270f +0x102:  add    $0x14,%esp
08472712 +0x105:  pop    %ebx
08472713 +0x106:  pop    %ebp
08472714 +0x107:  ret
08472715 +0x108:  nop
08472716 +0x109:  push   %ebp
08472717 +0x10a:  mov    %esp,%ebp
08472719 +0x10c:  push   %ebx
0847271a +0x10d:  sub    $0x14,%esp
0847271d +0x110:  mov    0x8(%ebp),%ebx
08472720 +0x113:  mov    0xc(%ebp),%eax
08472723 +0x116:  mov    0x10(%ebp),%edx
08472726 +0x119:  mov    %edx,0x8(%esp)
0847272a +0x11d:  mov    %eax,0x4(%esp)
0847272e +0x121:  mov    %ebx,(%esp)
08472731 +0x124:  call   084728c6 <+0x2b9>
08472736 +0x129:  sub    $0x4,%esp
08472739 +0x12c:  mov    %ebx,%eax
0847273b +0x12e:  mov    -0x4(%ebp),%ebx
0847273e +0x131:  leave
0847273f +0x132:  ret    $0x4
08472742 +0x135:  push   %ebp
08472743 +0x136:  mov    %esp,%ebp
08472745 +0x138:  push   %ebx
08472746 +0x139:  sub    $0x14,%esp
08472749 +0x13c:  mov    0x8(%ebp),%ebx
0847274c +0x13f:  mov    0xc(%ebp),%eax
0847274f +0x142:  mov    0x10(%ebp),%edx
08472752 +0x145:  mov    %edx,0x8(%esp)
08472756 +0x149:  mov    %eax,0x4(%esp)
0847275a +0x14d:  mov    %ebx,(%esp)
0847275d +0x150:  call   08472a96 <+0x489>
08472762 +0x155:  sub    $0x4,%esp
08472765 +0x158:  mov    %ebx,%eax
08472767 +0x15a:  mov    -0x4(%ebp),%ebx
0847276a +0x15d:  leave
0847276b +0x15e:  ret    $0x4
0847276e +0x161:  push   %ebp
0847276f +0x162:  mov    %esp,%ebp
08472771 +0x164:  push   %ebx
08472772 +0x165:  sub    $0x14,%esp
08472775 +0x168:  mov    0x8(%ebp),%ebx
08472778 +0x16b:  mov    0xc(%ebp),%eax
0847277b +0x16e:  mov    %eax,0x4(%esp)
0847277f +0x172:  mov    %ebx,(%esp)
08472782 +0x175:  call   08472b54 <+0x547>
08472787 +0x17a:  sub    $0x4,%esp
0847278a +0x17d:  mov    %ebx,%eax
0847278c +0x17f:  mov    -0x4(%ebp),%ebx
0847278f +0x182:  leave
08472790 +0x183:  ret    $0x4
08472793 +0x186:  nop
08472794 +0x187:  push   %ebp
08472795 +0x188:  mov    %esp,%ebp
08472797 +0x18a:  mov    0x8(%ebp),%eax
0847279a +0x18d:  mov    (%eax),%edx
0847279c +0x18f:  mov    0xc(%ebp),%eax
0847279f +0x192:  mov    (%eax),%eax
084727a1 +0x194:  cmp    %eax,%edx
084727a3 +0x196:  setne  %al
084727a6 +0x199:  pop    %ebp
084727a7 +0x19a:  ret
084727a8 +0x19b:  push   %ebp
084727a9 +0x19c:  mov    %esp,%ebp
084727ab +0x19e:  sub    $0x18,%esp
084727ae +0x1a1:  mov    0x8(%ebp),%eax
084727b1 +0x1a4:  mov    0xc(%ebp),%edx
084727b4 +0x1a7:  mov    %edx,0x4(%esp)
084727b8 +0x1ab:  mov    %eax,(%esp)
084727bb +0x1ae:  call   08472b7a <+0x56d>
084727c0 +0x1b3:  leave
084727c1 +0x1b4:  ret
084727c2 +0x1b5:  push   %ebp
084727c3 +0x1b6:  mov    %esp,%ebp
084727c5 +0x1b8:  mov    0x8(%ebp),%eax
084727c8 +0x1bb:  mov    (%eax),%eax
084727ca +0x1bd:  add    $0x10,%eax
084727cd +0x1c0:  pop    %ebp
084727ce +0x1c1:  ret
084727cf +0x1c2:  nop
084727d0 +0x1c3:  push   %ebp
084727d1 +0x1c4:  mov    %esp,%ebp
084727d3 +0x1c6:  push   %ebx
084727d4 +0x1c7:  sub    $0x14,%esp
084727d7 +0x1ca:  mov    0x8(%ebp),%ebx
084727da +0x1cd:  mov    0xc(%ebp),%eax
084727dd +0x1d0:  mov    %eax,0x4(%esp)
084727e1 +0x1d4:  mov    %ebx,(%esp)
084727e4 +0x1d7:  call   08472bbc <+0x5af>
084727e9 +0x1dc:  sub    $0x4,%esp
084727ec +0x1df:  mov    %ebx,%eax
084727ee +0x1e1:  mov    -0x4(%ebp),%ebx
084727f1 +0x1e4:  leave
084727f2 +0x1e5:  ret    $0x4
084727f5 +0x1e8:  nop
084727f6 +0x1e9:  push   %ebp
084727f7 +0x1ea:  mov    %esp,%ebp
084727f9 +0x1ec:  push   %ebx
084727fa +0x1ed:  sub    $0x14,%esp
084727fd +0x1f0:  mov    0x8(%ebp),%ebx
08472800 +0x1f3:  mov    0xc(%ebp),%eax
08472803 +0x1f6:  movl   $0x4,0x8(%esp)
0847280b +0x1fe:  mov    %eax,0x4(%esp)
0847280f +0x202:  mov    %ebx,(%esp)
08472812 +0x205:  call   0807d880 <_init+0x178>
08472817 +0x20a:  mov    0xc(%ebp),%eax
0847281a +0x20d:  mov    (%eax),%eax
0847281c +0x20f:  mov    %eax,(%esp)
0847281f +0x212:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08472824 +0x217:  mov    0xc(%ebp),%edx
08472827 +0x21a:  mov    %eax,(%edx)
08472829 +0x21c:  mov    %ebx,%eax
0847282b +0x21e:  add    $0x14,%esp
0847282e +0x221:  pop    %ebx
0847282f +0x222:  pop    %ebp
08472830 +0x223:  ret    $0x4
08472833 +0x226:  nop
08472834 +0x227:  push   %ebp
08472835 +0x228:  mov    %esp,%ebp
08472837 +0x22a:  sub    $0x18,%esp
0847283a +0x22d:  mov    0x8(%ebp),%eax
0847283d +0x230:  mov    (%eax),%eax
0847283f +0x232:  mov    %eax,(%esp)
08472842 +0x235:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08472847 +0x23a:  mov    0x8(%ebp),%edx
0847284a +0x23d:  mov    %eax,(%edx)
0847284c +0x23f:  mov    0x8(%ebp),%eax
0847284f +0x242:  leave
08472850 +0x243:  ret
08472851 +0x244:  nop
08472852 +0x245:  push   %ebp
08472853 +0x246:  mov    %esp,%ebp
08472855 +0x248:  sub    $0x18,%esp
08472858 +0x24b:  mov    0x8(%ebp),%eax
0847285b +0x24e:  mov    %eax,(%esp)
0847285e +0x251:  call   08472be2 <+0x5d5>
08472863 +0x256:  leave
08472864 +0x257:  ret
08472865 +0x258:  nop
08472866 +0x259:  push   %ebp
08472867 +0x25a:  mov    %esp,%ebp
08472869 +0x25c:  mov    0x8(%ebp),%eax
0847286c +0x25f:  mov    0x14(%eax),%eax
0847286f +0x262:  pop    %ebp
08472870 +0x263:  ret
08472871 +0x264:  push   %ebp
08472872 +0x265:  mov    %esp,%ebp
08472874 +0x267:  mov    0x8(%ebp),%eax
08472877 +0x26a:  pop    %ebp
08472878 +0x26b:  ret
08472879 +0x26c:  push   %ebp
0847287a +0x26d:  mov    %esp,%ebp
0847287c +0x26f:  mov    0x8(%ebp),%eax
0847287f +0x272:  pop    %ebp
08472880 +0x273:  ret
08472881 +0x274:  nop
08472882 +0x275:  push   %ebp
08472883 +0x276:  mov    %esp,%ebp
08472885 +0x278:  sub    $0x18,%esp
08472888 +0x27b:  mov    0xc(%ebp),%eax
0847288b +0x27e:  mov    %eax,(%esp)
0847288e +0x281:  call   08472871 <+0x264>
08472893 +0x286:  mov    0x8(%ebp),%ecx
08472896 +0x289:  mov    0x4(%eax),%edx
08472899 +0x28c:  mov    (%eax),%eax
0847289b +0x28e:  mov    %eax,(%ecx)
0847289d +0x290:  mov    %edx,0x4(%ecx)
084728a0 +0x293:  mov    0x10(%ebp),%eax
084728a3 +0x296:  mov    %eax,(%esp)
084728a6 +0x299:  call   08472879 <+0x26c>
084728ab +0x29e:  mov    (%eax),%edx
084728ad +0x2a0:  mov    0x8(%ebp),%eax
084728b0 +0x2a3:  mov    %edx,0x8(%eax)
084728b3 +0x2a6:  leave
084728b4 +0x2a7:  ret
084728b5 +0x2a8:  push   %ebp
084728b6 +0x2a9:  mov    %esp,%ebp
084728b8 +0x2ab:  mov    0x8(%ebp),%eax
084728bb +0x2ae:  pop    %ebp
084728bc +0x2af:  ret
084728bd +0x2b0:  push   %ebp
084728be +0x2b1:  mov    %esp,%ebp
084728c0 +0x2b3:  mov    0x8(%ebp),%eax
084728c3 +0x2b6:  pop    %ebp
084728c4 +0x2b7:  ret
084728c5 +0x2b8:  nop
084728c6 +0x2b9:  push   %ebp
084728c7 +0x2ba:  mov    %esp,%ebp
084728c9 +0x2bc:  push   %esi
084728ca +0x2bd:  push   %ebx
084728cb +0x2be:  sub    $0x50,%esp
084728ce +0x2c1:  mov    0x8(%ebp),%ebx
084728d1 +0x2c4:  mov    0xc(%ebp),%eax
084728d4 +0x2c7:  mov    %eax,(%esp)
084728d7 +0x2ca:  call   082393d0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xea7a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xea7a
084728dc +0x2cf:  mov    %eax,-0x14(%ebp)
084728df +0x2d2:  mov    0xc(%ebp),%eax
084728e2 +0x2d5:  mov    %eax,(%esp)
084728e5 +0x2d8:  call   08472bf2 <+0x5e5>
084728ea +0x2dd:  mov    %eax,-0x10(%ebp)
084728ed +0x2e0:  movb   $0x1,-0x9(%ebp)
084728f1 +0x2e4:  jmp    0847294f <+0x342>
084728f3 +0x2e6:  mov    -0x14(%ebp),%eax
084728f6 +0x2e9:  mov    %eax,-0x10(%ebp)
084728f9 +0x2ec:  mov    -0x14(%ebp),%eax
084728fc +0x2ef:  mov    %eax,(%esp)
084728ff +0x2f2:  call   08472c06 <+0x5f9>
08472904 +0x2f7:  mov    %eax,%esi
08472906 +0x2f9:  mov    0x10(%ebp),%eax
08472909 +0x2fc:  mov    %eax,0x4(%esp)
0847290d +0x300:  lea    -0x2d(%ebp),%eax
08472910 +0x303:  mov    %eax,(%esp)
08472913 +0x306:  call   08472bfe <+0x5f1>
08472918 +0x30b:  mov    0xc(%ebp),%edx
0847291b +0x30e:  mov    %esi,0x8(%esp)
0847291f +0x312:  mov    %eax,0x4(%esp)
08472923 +0x316:  mov    %edx,(%esp)
08472926 +0x319:  call   08472c28 <+0x61b>
0847292b +0x31e:  mov    %al,-0x9(%ebp)
0847292e +0x321:  cmpb   $0x0,-0x9(%ebp)
08472932 +0x325:  je     08472941 <+0x334>
08472934 +0x327:  mov    -0x14(%ebp),%eax
08472937 +0x32a:  mov    %eax,(%esp)
0847293a +0x32d:  call   0823c75a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x78d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x78d8
0847293f +0x332:  jmp    0847294c <+0x33f>
08472941 +0x334:  mov    -0x14(%ebp),%eax
08472944 +0x337:  mov    %eax,(%esp)
08472947 +0x33a:  call   0823c74f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x78cd>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x78cd
0847294c +0x33f:  mov    %eax,-0x14(%ebp)
0847294f +0x342:  cmpl   $0x0,-0x14(%ebp)
08472953 +0x346:  setne  %al
08472956 +0x349:  test   %al,%al
08472958 +0x34b:  jne    084728f3 <+0x2e6>
0847295a +0x34d:  mov    -0x10(%ebp),%eax
0847295d +0x350:  mov    %eax,0x4(%esp)
08472961 +0x354:  lea    -0x34(%ebp),%eax
08472964 +0x357:  mov    %eax,(%esp)
08472967 +0x35a:  call   08472c42 <+0x635>
0847296c +0x35f:  cmpb   $0x0,-0x9(%ebp)
08472970 +0x363:  je     084729f1 <+0x3e4>
08472972 +0x365:  lea    -0x2c(%ebp),%eax
08472975 +0x368:  mov    0xc(%ebp),%edx
08472978 +0x36b:  mov    %edx,0x4(%esp)
0847297c +0x36f:  mov    %eax,(%esp)
0847297f +0x372:  call   08472bbc <+0x5af>
08472984 +0x377:  sub    $0x4,%esp
08472987 +0x37a:  lea    -0x2c(%ebp),%eax
0847298a +0x37d:  mov    %eax,0x4(%esp)
0847298e +0x381:  lea    -0x34(%ebp),%eax
08472991 +0x384:  mov    %eax,(%esp)
08472994 +0x387:  call   08472c50 <+0x643>
08472999 +0x38c:  test   %al,%al
0847299b +0x38e:  je     084729e6 <+0x3d9>
0847299d +0x390:  movb   $0x1,-0x25(%ebp)
084729a1 +0x394:  mov    -0x10(%ebp),%ecx
084729a4 +0x397:  mov    -0x14(%ebp),%edx
084729a7 +0x39a:  lea    -0x24(%ebp),%eax
084729aa +0x39d:  mov    0x10(%ebp),%esi
084729ad +0x3a0:  mov    %esi,0x10(%esp)
084729b1 +0x3a4:  mov    %ecx,0xc(%esp)
084729b5 +0x3a8:  mov    %edx,0x8(%esp)
084729b9 +0x3ac:  mov    0xc(%ebp),%edx
084729bc +0x3af:  mov    %edx,0x4(%esp)
084729c0 +0x3b3:  mov    %eax,(%esp)
084729c3 +0x3b6:  call   08472c64 <+0x657>
084729c8 +0x3bb:  sub    $0x4,%esp
084729cb +0x3be:  lea    -0x25(%ebp),%eax
084729ce +0x3c1:  mov    %eax,0x8(%esp)
084729d2 +0x3c5:  lea    -0x24(%ebp),%eax
084729d5 +0x3c8:  mov    %eax,0x4(%esp)
084729d9 +0x3cc:  mov    %ebx,(%esp)
084729dc +0x3cf:  call   08472d2c <+0x71f>
084729e1 +0x3d4:  jmp    08472a87 <+0x47a>
084729e6 +0x3d9:  lea    -0x34(%ebp),%eax
084729e9 +0x3dc:  mov    %eax,(%esp)
084729ec +0x3df:  call   08472d5a <+0x74d>
084729f1 +0x3e4:  mov    0x10(%ebp),%eax
084729f4 +0x3e7:  mov    %eax,0x4(%esp)
084729f8 +0x3eb:  lea    -0x1e(%ebp),%eax
084729fb +0x3ee:  mov    %eax,(%esp)
084729fe +0x3f1:  call   08472bfe <+0x5f1>
08472a03 +0x3f6:  mov    %eax,%esi
08472a05 +0x3f8:  mov    -0x34(%ebp),%eax
08472a08 +0x3fb:  mov    %eax,(%esp)
08472a0b +0x3fe:  call   08472d77 <+0x76a>
08472a10 +0x403:  mov    0xc(%ebp),%edx
08472a13 +0x406:  mov    %esi,0x8(%esp)
08472a17 +0x40a:  mov    %eax,0x4(%esp)
08472a1b +0x40e:  mov    %edx,(%esp)
08472a1e +0x411:  call   08472c28 <+0x61b>
08472a23 +0x416:  test   %al,%al
08472a25 +0x418:  je     08472a6d <+0x460>
08472a27 +0x41a:  movb   $0x1,-0x1d(%ebp)
08472a2b +0x41e:  mov    -0x10(%ebp),%ecx
08472a2e +0x421:  mov    -0x14(%ebp),%edx
08472a31 +0x424:  lea    -0x1c(%ebp),%eax
08472a34 +0x427:  mov    0x10(%ebp),%esi
08472a37 +0x42a:  mov    %esi,0x10(%esp)
08472a3b +0x42e:  mov    %ecx,0xc(%esp)
08472a3f +0x432:  mov    %edx,0x8(%esp)
08472a43 +0x436:  mov    0xc(%ebp),%edx
08472a46 +0x439:  mov    %edx,0x4(%esp)
08472a4a +0x43d:  mov    %eax,(%esp)
08472a4d +0x440:  call   08472c64 <+0x657>
08472a52 +0x445:  sub    $0x4,%esp
08472a55 +0x448:  lea    -0x1d(%ebp),%eax
08472a58 +0x44b:  mov    %eax,0x8(%esp)
08472a5c +0x44f:  lea    -0x1c(%ebp),%eax
08472a5f +0x452:  mov    %eax,0x4(%esp)
08472a63 +0x456:  mov    %ebx,(%esp)
08472a66 +0x459:  call   08472d2c <+0x71f>
08472a6b +0x45e:  jmp    08472a87 <+0x47a>
08472a6d +0x460:  movb   $0x0,-0x15(%ebp)
08472a71 +0x464:  lea    -0x15(%ebp),%eax
08472a74 +0x467:  mov    %eax,0x8(%esp)
08472a78 +0x46b:  lea    -0x34(%ebp),%eax
08472a7b +0x46e:  mov    %eax,0x4(%esp)
08472a7f +0x472:  mov    %ebx,(%esp)
08472a82 +0x475:  call   08472d9a <+0x78d>
08472a87 +0x47a:  mov    %ebx,%eax
08472a89 +0x47c:  lea    -0x8(%ebp),%esp
08472a8c +0x47f:  add    $0x0,%esp
08472a8f +0x482:  pop    %ebx
08472a90 +0x483:  pop    %esi
08472a91 +0x484:  pop    %ebp
08472a92 +0x485:  ret    $0x4
08472a95 +0x488:  nop
08472a96 +0x489:  push   %ebp
08472a97 +0x48a:  mov    %esp,%ebp
08472a99 +0x48c:  push   %esi
08472a9a +0x48d:  push   %ebx
08472a9b +0x48e:  sub    $0x30,%esp
08472a9e +0x491:  mov    0x8(%ebp),%ebx
08472aa1 +0x494:  mov    0xc(%ebp),%eax
08472aa4 +0x497:  mov    %eax,(%esp)
08472aa7 +0x49a:  call   08472bf2 <+0x5e5>
08472aac +0x49f:  mov    %eax,%esi
08472aae +0x4a1:  mov    0xc(%ebp),%eax
08472ab1 +0x4a4:  mov    %eax,(%esp)
08472ab4 +0x4a7:  call   082393d0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xea7a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xea7a
08472ab9 +0x4ac:  lea    -0x10(%ebp),%edx
08472abc +0x4af:  mov    0x10(%ebp),%ecx
08472abf +0x4b2:  mov    %ecx,0x10(%esp)
08472ac3 +0x4b6:  mov    %esi,0xc(%esp)
08472ac7 +0x4ba:  mov    %eax,0x8(%esp)
08472acb +0x4be:  mov    0xc(%ebp),%eax
08472ace +0x4c1:  mov    %eax,0x4(%esp)
08472ad2 +0x4c5:  mov    %edx,(%esp)
08472ad5 +0x4c8:  call   08472dc8 <+0x7bb>
08472ada +0x4cd:  sub    $0x4,%esp
08472add +0x4d0:  lea    -0xc(%ebp),%eax
08472ae0 +0x4d3:  mov    0xc(%ebp),%edx
08472ae3 +0x4d6:  mov    %edx,0x4(%esp)
08472ae7 +0x4da:  mov    %eax,(%esp)
08472aea +0x4dd:  call   08472b54 <+0x547>
08472aef +0x4e2:  sub    $0x4,%esp
08472af2 +0x4e5:  lea    -0xc(%ebp),%eax
08472af5 +0x4e8:  mov    %eax,0x4(%esp)
08472af9 +0x4ec:  lea    -0x10(%ebp),%eax
08472afc +0x4ef:  mov    %eax,(%esp)
08472aff +0x4f2:  call   08472c50 <+0x643>
08472b04 +0x4f7:  test   %al,%al
08472b06 +0x4f9:  jne    08472b2d <+0x520>
08472b08 +0x4fb:  mov    -0x10(%ebp),%eax
08472b0b +0x4fe:  mov    %eax,(%esp)
08472b0e +0x501:  call   08472d77 <+0x76a>
08472b13 +0x506:  mov    0xc(%ebp),%edx
08472b16 +0x509:  mov    %eax,0x8(%esp)
08472b1a +0x50d:  mov    0x10(%ebp),%eax
08472b1d +0x510:  mov    %eax,0x4(%esp)
08472b21 +0x514:  mov    %edx,(%esp)
08472b24 +0x517:  call   08472c28 <+0x61b>
08472b29 +0x51c:  test   %al,%al
08472b2b +0x51e:  je     08472b41 <+0x534>
08472b2d +0x520:  mov    0xc(%ebp),%eax
08472b30 +0x523:  mov    %eax,0x4(%esp)
08472b34 +0x527:  mov    %ebx,(%esp)
08472b37 +0x52a:  call   08472b54 <+0x547>
08472b3c +0x52f:  sub    $0x4,%esp
08472b3f +0x532:  jmp    08472b46 <+0x539>
08472b41 +0x534:  mov    -0x10(%ebp),%eax
08472b44 +0x537:  mov    %eax,(%ebx)
08472b46 +0x539:  mov    %ebx,%eax
08472b48 +0x53b:  lea    -0x8(%ebp),%esp
08472b4b +0x53e:  add    $0x0,%esp
08472b4e +0x541:  pop    %ebx
08472b4f +0x542:  pop    %esi
08472b50 +0x543:  pop    %ebp
08472b51 +0x544:  ret    $0x4
08472b54 +0x547:  push   %ebp
08472b55 +0x548:  mov    %esp,%ebp
08472b57 +0x54a:  push   %ebx
08472b58 +0x54b:  sub    $0x14,%esp
08472b5b +0x54e:  mov    0x8(%ebp),%ebx
08472b5e +0x551:  mov    0xc(%ebp),%eax
08472b61 +0x554:  add    $0x4,%eax
08472b64 +0x557:  mov    %eax,0x4(%esp)
08472b68 +0x55b:  mov    %ebx,(%esp)
08472b6b +0x55e:  call   08472c42 <+0x635>
08472b70 +0x563:  mov    %ebx,%eax
08472b72 +0x565:  add    $0x14,%esp
08472b75 +0x568:  pop    %ebx
08472b76 +0x569:  pop    %ebp
08472b77 +0x56a:  ret    $0x4
08472b7a +0x56d:  push   %ebp
08472b7b +0x56e:  mov    %esp,%ebp
08472b7d +0x570:  sub    $0x28,%esp
08472b80 +0x573:  mov    0x8(%ebp),%eax
08472b83 +0x576:  lea    0x4(%eax),%edx
08472b86 +0x579:  mov    0xc(%ebp),%eax
08472b89 +0x57c:  mov    %edx,0x4(%esp)
08472b8d +0x580:  mov    %eax,(%esp)
08472b90 +0x583:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08472b95 +0x588:  mov    %eax,-0xc(%ebp)
08472b98 +0x58b:  mov    -0xc(%ebp),%eax
08472b9b +0x58e:  mov    %eax,0x4(%esp)
08472b9f +0x592:  mov    0x8(%ebp),%eax
08472ba2 +0x595:  mov    %eax,(%esp)
08472ba5 +0x598:  call   0823c766 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x78e4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x78e4
08472baa +0x59d:  mov    0x8(%ebp),%eax
08472bad +0x5a0:  mov    0x14(%eax),%eax
08472bb0 +0x5a3:  lea    -0x1(%eax),%edx
08472bb3 +0x5a6:  mov    0x8(%ebp),%eax
08472bb6 +0x5a9:  mov    %edx,0x14(%eax)
08472bb9 +0x5ac:  leave
08472bba +0x5ad:  ret
08472bbb +0x5ae:  nop
08472bbc +0x5af:  push   %ebp
08472bbd +0x5b0:  mov    %esp,%ebp
08472bbf +0x5b2:  push   %ebx
08472bc0 +0x5b3:  sub    $0x14,%esp
08472bc3 +0x5b6:  mov    0x8(%ebp),%ebx
08472bc6 +0x5b9:  mov    0xc(%ebp),%eax
08472bc9 +0x5bc:  mov    0xc(%eax),%eax
08472bcc +0x5bf:  mov    %eax,0x4(%esp)
08472bd0 +0x5c3:  mov    %ebx,(%esp)
08472bd3 +0x5c6:  call   08472c42 <+0x635>
08472bd8 +0x5cb:  mov    %ebx,%eax
08472bda +0x5cd:  add    $0x14,%esp
08472bdd +0x5d0:  pop    %ebx
08472bde +0x5d1:  pop    %ebp
08472bdf +0x5d2:  ret    $0x4
08472be2 +0x5d5:  push   %ebp
08472be3 +0x5d6:  mov    %esp,%ebp
08472be5 +0x5d8:  mov    0x8(%ebp),%eax
08472be8 +0x5db:  mov    0x14(%eax),%eax
08472beb +0x5de:  test   %eax,%eax
08472bed +0x5e0:  sete   %al
08472bf0 +0x5e3:  pop    %ebp
08472bf1 +0x5e4:  ret
08472bf2 +0x5e5:  push   %ebp
08472bf3 +0x5e6:  mov    %esp,%ebp
08472bf5 +0x5e8:  mov    0x8(%ebp),%eax
08472bf8 +0x5eb:  add    $0x4,%eax
08472bfb +0x5ee:  pop    %ebp
08472bfc +0x5ef:  ret
08472bfd +0x5f0:  nop
08472bfe +0x5f1:  push   %ebp
08472bff +0x5f2:  mov    %esp,%ebp
08472c01 +0x5f4:  mov    0xc(%ebp),%eax
08472c04 +0x5f7:  pop    %ebp
08472c05 +0x5f8:  ret
08472c06 +0x5f9:  push   %ebp
08472c07 +0x5fa:  mov    %esp,%ebp
08472c09 +0x5fc:  sub    $0x28,%esp
08472c0c +0x5ff:  mov    0x8(%ebp),%eax
08472c0f +0x602:  mov    %eax,(%esp)
08472c12 +0x605:  call   08472e44 <+0x837>
08472c17 +0x60a:  mov    %eax,0x4(%esp)
08472c1b +0x60e:  lea    -0x9(%ebp),%eax
08472c1e +0x611:  mov    %eax,(%esp)
08472c21 +0x614:  call   08472bfe <+0x5f1>
08472c26 +0x619:  leave
08472c27 +0x61a:  ret
08472c28 +0x61b:  push   %ebp
08472c29 +0x61c:  mov    %esp,%ebp
08472c2b +0x61e:  sub    $0x18,%esp
08472c2e +0x621:  mov    0x10(%ebp),%eax
08472c31 +0x624:  mov    %eax,0x4(%esp)
08472c35 +0x628:  mov    0xc(%ebp),%eax
08472c38 +0x62b:  mov    %eax,(%esp)
08472c3b +0x62e:  call   0847262a <+0x1d>
08472c40 +0x633:  leave
08472c41 +0x634:  ret
08472c42 +0x635:  push   %ebp
08472c43 +0x636:  mov    %esp,%ebp
08472c45 +0x638:  mov    0xc(%ebp),%edx
08472c48 +0x63b:  mov    0x8(%ebp),%eax
08472c4b +0x63e:  mov    %edx,(%eax)
08472c4d +0x640:  pop    %ebp
08472c4e +0x641:  ret
08472c4f +0x642:  nop
08472c50 +0x643:  push   %ebp
08472c51 +0x644:  mov    %esp,%ebp
08472c53 +0x646:  mov    0x8(%ebp),%eax
08472c56 +0x649:  mov    (%eax),%edx
08472c58 +0x64b:  mov    0xc(%ebp),%eax
08472c5b +0x64e:  mov    (%eax),%eax
08472c5d +0x650:  cmp    %eax,%edx
08472c5f +0x652:  sete   %al
08472c62 +0x655:  pop    %ebp
08472c63 +0x656:  ret
08472c64 +0x657:  push   %ebp
08472c65 +0x658:  mov    %esp,%ebp
08472c67 +0x65a:  push   %esi
08472c68 +0x65b:  push   %ebx
08472c69 +0x65c:  sub    $0x20,%esp
08472c6c +0x65f:  mov    0x8(%ebp),%esi
08472c6f +0x662:  cmpl   $0x0,0x10(%ebp)
08472c73 +0x666:  jne    08472cbb <+0x6ae>
08472c75 +0x668:  mov    0xc(%ebp),%eax
08472c78 +0x66b:  mov    %eax,(%esp)
08472c7b +0x66e:  call   08472bf2 <+0x5e5>
08472c80 +0x673:  cmp    0x14(%ebp),%eax
08472c83 +0x676:  je     08472cbb <+0x6ae>
08472c85 +0x678:  mov    0x14(%ebp),%eax
08472c88 +0x67b:  mov    %eax,(%esp)
08472c8b +0x67e:  call   08472d77 <+0x76a>
08472c90 +0x683:  mov    %eax,%ebx
08472c92 +0x685:  mov    0x18(%ebp),%eax
08472c95 +0x688:  mov    %eax,0x4(%esp)
08472c99 +0x68c:  lea    -0xe(%ebp),%eax
08472c9c +0x68f:  mov    %eax,(%esp)
08472c9f +0x692:  call   08472bfe <+0x5f1>
08472ca4 +0x697:  mov    0xc(%ebp),%edx
08472ca7 +0x69a:  mov    %ebx,0x8(%esp)
08472cab +0x69e:  mov    %eax,0x4(%esp)
08472caf +0x6a2:  mov    %edx,(%esp)
08472cb2 +0x6a5:  call   08472c28 <+0x61b>
08472cb7 +0x6aa:  test   %al,%al
08472cb9 +0x6ac:  je     08472cc2 <+0x6b5>
08472cbb +0x6ae:  mov    $0x1,%eax
08472cc0 +0x6b3:  jmp    08472cc7 <+0x6ba>
08472cc2 +0x6b5:  mov    $0x0,%eax
08472cc7 +0x6ba:  mov    %al,-0xd(%ebp)
08472cca +0x6bd:  mov    0x18(%ebp),%eax
08472ccd +0x6c0:  mov    %eax,0x4(%esp)
08472cd1 +0x6c4:  mov    0xc(%ebp),%eax
08472cd4 +0x6c7:  mov    %eax,(%esp)
08472cd7 +0x6ca:  call   08472e50 <+0x843>
08472cdc +0x6cf:  mov    %eax,-0xc(%ebp)
08472cdf +0x6d2:  mov    0xc(%ebp),%eax
08472ce2 +0x6d5:  lea    0x4(%eax),%ecx
08472ce5 +0x6d8:  mov    -0xc(%ebp),%edx
08472ce8 +0x6db:  movzbl -0xd(%ebp),%eax
08472cec +0x6df:  mov    %ecx,0xc(%esp)
08472cf0 +0x6e3:  mov    0x14(%ebp),%ecx
08472cf3 +0x6e6:  mov    %ecx,0x8(%esp)
08472cf7 +0x6ea:  mov    %edx,0x4(%esp)
08472cfb +0x6ee:  mov    %eax,(%esp)
08472cfe +0x6f1:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08472d03 +0x6f6:  mov    0xc(%ebp),%eax
08472d06 +0x6f9:  mov    0x14(%eax),%eax
08472d09 +0x6fc:  lea    0x1(%eax),%edx
08472d0c +0x6ff:  mov    0xc(%ebp),%eax
08472d0f +0x702:  mov    %edx,0x14(%eax)
08472d12 +0x705:  mov    -0xc(%ebp),%eax
08472d15 +0x708:  mov    %eax,0x4(%esp)
08472d19 +0x70c:  mov    %esi,(%esp)
08472d1c +0x70f:  call   08472c42 <+0x635>
08472d21 +0x714:  mov    %esi,%eax
08472d23 +0x716:  add    $0x20,%esp
08472d26 +0x719:  pop    %ebx
08472d27 +0x71a:  pop    %esi
08472d28 +0x71b:  pop    %ebp
08472d29 +0x71c:  ret    $0x4
08472d2c +0x71f:  push   %ebp
08472d2d +0x720:  mov    %esp,%ebp
08472d2f +0x722:  sub    $0x18,%esp
08472d32 +0x725:  mov    0xc(%ebp),%eax
08472d35 +0x728:  mov    %eax,(%esp)
08472d38 +0x72b:  call   08472ed1 <+0x8c4>
08472d3d +0x730:  mov    0x8(%ebp),%edx
08472d40 +0x733:  mov    (%eax),%eax
08472d42 +0x735:  mov    %eax,(%edx)
08472d44 +0x737:  mov    0x10(%ebp),%eax
08472d47 +0x73a:  mov    %eax,(%esp)
08472d4a +0x73d:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08472d4f +0x742:  movzbl (%eax),%edx
08472d52 +0x745:  mov    0x8(%ebp),%eax
08472d55 +0x748:  mov    %dl,0x4(%eax)
08472d58 +0x74b:  leave
08472d59 +0x74c:  ret
08472d5a +0x74d:  push   %ebp
08472d5b +0x74e:  mov    %esp,%ebp
08472d5d +0x750:  sub    $0x18,%esp
08472d60 +0x753:  mov    0x8(%ebp),%eax
08472d63 +0x756:  mov    (%eax),%eax
08472d65 +0x758:  mov    %eax,(%esp)
08472d68 +0x75b:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08472d6d +0x760:  mov    0x8(%ebp),%edx
08472d70 +0x763:  mov    %eax,(%edx)
08472d72 +0x765:  mov    0x8(%ebp),%eax
08472d75 +0x768:  leave
08472d76 +0x769:  ret
08472d77 +0x76a:  push   %ebp
08472d78 +0x76b:  mov    %esp,%ebp
08472d7a +0x76d:  sub    $0x28,%esp
08472d7d +0x770:  mov    0x8(%ebp),%eax
08472d80 +0x773:  mov    %eax,(%esp)
08472d83 +0x776:  call   08472ed9 <+0x8cc>
08472d88 +0x77b:  mov    %eax,0x4(%esp)
08472d8c +0x77f:  lea    -0x9(%ebp),%eax
08472d8f +0x782:  mov    %eax,(%esp)
08472d92 +0x785:  call   08472bfe <+0x5f1>
08472d97 +0x78a:  leave
08472d98 +0x78b:  ret
08472d99 +0x78c:  nop
08472d9a +0x78d:  push   %ebp
08472d9b +0x78e:  mov    %esp,%ebp
08472d9d +0x790:  sub    $0x18,%esp
08472da0 +0x793:  mov    0xc(%ebp),%eax
08472da3 +0x796:  mov    %eax,(%esp)
08472da6 +0x799:  call   08472ee4 <+0x8d7>
08472dab +0x79e:  mov    0x8(%ebp),%edx
08472dae +0x7a1:  mov    (%eax),%eax
08472db0 +0x7a3:  mov    %eax,(%edx)
08472db2 +0x7a5:  mov    0x10(%ebp),%eax
08472db5 +0x7a8:  mov    %eax,(%esp)
08472db8 +0x7ab:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08472dbd +0x7b0:  movzbl (%eax),%edx
08472dc0 +0x7b3:  mov    0x8(%ebp),%eax
08472dc3 +0x7b6:  mov    %dl,0x4(%eax)
08472dc6 +0x7b9:  leave
08472dc7 +0x7ba:  ret
08472dc8 +0x7bb:  push   %ebp
08472dc9 +0x7bc:  mov    %esp,%ebp
08472dcb +0x7be:  push   %ebx
08472dcc +0x7bf:  sub    $0x14,%esp
08472dcf +0x7c2:  mov    0x8(%ebp),%ebx
08472dd2 +0x7c5:  jmp    08472e20 <+0x813>
08472dd4 +0x7c7:  mov    0x10(%ebp),%eax
08472dd7 +0x7ca:  mov    %eax,(%esp)
08472dda +0x7cd:  call   08472c06 <+0x5f9>
08472ddf +0x7d2:  mov    0xc(%ebp),%edx
08472de2 +0x7d5:  mov    0x18(%ebp),%ecx
08472de5 +0x7d8:  mov    %ecx,0x8(%esp)
08472de9 +0x7dc:  mov    %eax,0x4(%esp)
08472ded +0x7e0:  mov    %edx,(%esp)
08472df0 +0x7e3:  call   08472c28 <+0x61b>
08472df5 +0x7e8:  xor    $0x1,%eax
08472df8 +0x7eb:  test   %al,%al
08472dfa +0x7ed:  je     08472e12 <+0x805>
08472dfc +0x7ef:  mov    0x10(%ebp),%eax
08472dff +0x7f2:  mov    %eax,0x14(%ebp)
08472e02 +0x7f5:  mov    0x10(%ebp),%eax
08472e05 +0x7f8:  mov    %eax,(%esp)
08472e08 +0x7fb:  call   0823c75a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x78d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x78d8
08472e0d +0x800:  mov    %eax,0x10(%ebp)
08472e10 +0x803:  jmp    08472e20 <+0x813>
08472e12 +0x805:  mov    0x10(%ebp),%eax
08472e15 +0x808:  mov    %eax,(%esp)
08472e18 +0x80b:  call   0823c74f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x78cd>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x78cd
08472e1d +0x810:  mov    %eax,0x10(%ebp)
08472e20 +0x813:  cmpl   $0x0,0x10(%ebp)
08472e24 +0x817:  setne  %al
08472e27 +0x81a:  test   %al,%al
08472e29 +0x81c:  jne    08472dd4 <+0x7c7>
08472e2b +0x81e:  mov    0x14(%ebp),%eax
08472e2e +0x821:  mov    %eax,0x4(%esp)
08472e32 +0x825:  mov    %ebx,(%esp)
08472e35 +0x828:  call   08472c42 <+0x635>
08472e3a +0x82d:  mov    %ebx,%eax
08472e3c +0x82f:  add    $0x14,%esp
08472e3f +0x832:  pop    %ebx
08472e40 +0x833:  pop    %ebp
08472e41 +0x834:  ret    $0x4
08472e44 +0x837:  push   %ebp
08472e45 +0x838:  mov    %esp,%ebp
08472e47 +0x83a:  mov    0x8(%ebp),%eax
08472e4a +0x83d:  add    $0x10,%eax
08472e4d +0x840:  pop    %ebp
08472e4e +0x841:  ret
08472e4f +0x842:  nop
08472e50 +0x843:  push   %ebp
08472e51 +0x844:  mov    %esp,%ebp
08472e53 +0x846:  push   %esi
08472e54 +0x847:  push   %ebx
08472e55 +0x848:  sub    $0x20,%esp
08472e58 +0x84b:  mov    0x8(%ebp),%eax
08472e5b +0x84e:  mov    %eax,(%esp)
08472e5e +0x851:  call   08472eec <+0x8df>
08472e63 +0x856:  mov    %eax,-0xc(%ebp)
08472e66 +0x859:  mov    0xc(%ebp),%eax
08472e69 +0x85c:  mov    %eax,(%esp)
08472e6c +0x85f:  call   08472f0f <+0x902>
08472e71 +0x864:  mov    %eax,%ebx
08472e73 +0x866:  mov    0x8(%ebp),%eax
08472e76 +0x869:  mov    %eax,(%esp)
08472e79 +0x86c:  call   0823e69e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x981c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x981c
08472e7e +0x871:  mov    %ebx,0x8(%esp)
08472e82 +0x875:  mov    -0xc(%ebp),%edx
08472e85 +0x878:  mov    %edx,0x4(%esp)
08472e89 +0x87c:  mov    %eax,(%esp)
08472e8c +0x87f:  call   08472f18 <+0x90b>
08472e91 +0x884:  jmp    08472ec7 <+0x8ba>
08472e93 +0x886:  mov    %eax,(%esp)
08472e96 +0x889:  call   08725ce0 <__cxa_begin_catch>
08472e9b +0x88e:  mov    -0xc(%ebp),%eax
08472e9e +0x891:  mov    %eax,0x4(%esp)
08472ea2 +0x895:  mov    0x8(%ebp),%eax
08472ea5 +0x898:  mov    %eax,(%esp)
08472ea8 +0x89b:  call   0823e6c0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x983e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x983e
08472ead +0x8a0:  call   08724be0 <__cxa_rethrow>
08472eb2 +0x8a5:  mov    %edx,%ebx
08472eb4 +0x8a7:  mov    %eax,%esi
08472eb6 +0x8a9:  call   08725c30 <__cxa_end_catch>
08472ebb +0x8ae:  mov    %esi,%eax
08472ebd +0x8b0:  mov    %ebx,%edx
08472ebf +0x8b2:  mov    %eax,(%esp)
08472ec2 +0x8b5:  call   08ae3750 <_Unwind_Resume>
08472ec7 +0x8ba:  mov    -0xc(%ebp),%eax
08472eca +0x8bd:  add    $0x20,%esp
08472ecd +0x8c0:  pop    %ebx
08472ece +0x8c1:  pop    %esi
08472ecf +0x8c2:  pop    %ebp
08472ed0 +0x8c3:  ret
08472ed1 +0x8c4:  push   %ebp
08472ed2 +0x8c5:  mov    %esp,%ebp
08472ed4 +0x8c7:  mov    0x8(%ebp),%eax
08472ed7 +0x8ca:  pop    %ebp
08472ed8 +0x8cb:  ret
08472ed9 +0x8cc:  push   %ebp
08472eda +0x8cd:  mov    %esp,%ebp
08472edc +0x8cf:  mov    0x8(%ebp),%eax
08472edf +0x8d2:  add    $0x10,%eax
08472ee2 +0x8d5:  pop    %ebp
08472ee3 +0x8d6:  ret
08472ee4 +0x8d7:  push   %ebp
08472ee5 +0x8d8:  mov    %esp,%ebp
08472ee7 +0x8da:  mov    0x8(%ebp),%eax
08472eea +0x8dd:  pop    %ebp
08472eeb +0x8de:  ret
08472eec +0x8df:  push   %ebp
08472eed +0x8e0:  mov    %esp,%ebp
08472eef +0x8e2:  sub    $0x18,%esp
08472ef2 +0x8e5:  mov    0x8(%ebp),%eax
08472ef5 +0x8e8:  movl   $0x0,0x8(%esp)
08472efd +0x8f0:  movl   $0x1,0x4(%esp)
08472f05 +0x8f8:  mov    %eax,(%esp)
08472f08 +0x8fb:  call   08472f58 <+0x94b>
08472f0d +0x900:  leave
08472f0e +0x901:  ret
08472f0f +0x902:  push   %ebp
08472f10 +0x903:  mov    %esp,%ebp
08472f12 +0x905:  mov    0x8(%ebp),%eax
08472f15 +0x908:  pop    %ebp
08472f16 +0x909:  ret
08472f17 +0x90a:  nop
08472f18 +0x90b:  push   %ebp
08472f19 +0x90c:  mov    %esp,%ebp
08472f1b +0x90e:  push   %ebx
08472f1c +0x90f:  sub    $0x14,%esp
08472f1f +0x912:  mov    0x10(%ebp),%eax
08472f22 +0x915:  mov    %eax,(%esp)
08472f25 +0x918:  call   08472f0f <+0x902>
08472f2a +0x91d:  mov    %eax,%ebx
08472f2c +0x91f:  mov    0xc(%ebp),%eax
08472f2f +0x922:  mov    %eax,0x4(%esp)
08472f33 +0x926:  movl   $0x1c,(%esp)
08472f3a +0x92d:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08472f3f +0x932:  mov    %eax,%edx
08472f41 +0x934:  test   %edx,%edx
08472f43 +0x936:  je     08472f51 <+0x944>
08472f45 +0x938:  mov    %ebx,0x4(%esp)
08472f49 +0x93c:  mov    %eax,(%esp)
08472f4c +0x93f:  call   08472f9e <+0x991>
08472f51 +0x944:  add    $0x14,%esp
08472f54 +0x947:  pop    %ebx
08472f55 +0x948:  pop    %ebp
08472f56 +0x949:  ret
08472f57 +0x94a:  nop
08472f58 +0x94b:  push   %ebp
08472f59 +0x94c:  mov    %esp,%ebp
08472f5b +0x94e:  sub    $0x18,%esp
08472f5e +0x951:  mov    0x8(%ebp),%eax
08472f61 +0x954:  mov    %eax,(%esp)
08472f64 +0x957:  call   08472fec <+0x9df>
08472f69 +0x95c:  cmp    0xc(%ebp),%eax
08472f6c +0x95f:  setb   %al
08472f6f +0x962:  movzbl %al,%eax
08472f72 +0x965:  test   %eax,%eax
08472f74 +0x967:  setne  %al
08472f77 +0x96a:  test   %al,%al
08472f79 +0x96c:  je     08472f80 <+0x973>
08472f7b +0x96e:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08472f80 +0x973:  mov    0xc(%ebp),%eax
08472f83 +0x976:  shl    $0x2,%eax
08472f86 +0x979:  lea    0x0(,%eax,8),%edx
08472f8d +0x980:  mov    %edx,%ecx
08472f8f +0x982:  sub    %eax,%ecx
08472f91 +0x984:  mov    %ecx,%eax
08472f93 +0x986:  mov    %eax,(%esp)
08472f96 +0x989:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08472f9b +0x98e:  leave
08472f9c +0x98f:  ret
08472f9d +0x990:  nop
08472f9e +0x991:  push   %ebp
08472f9f +0x992:  mov    %esp,%ebp
08472fa1 +0x994:  sub    $0x18,%esp
08472fa4 +0x997:  mov    0x8(%ebp),%eax
08472fa7 +0x99a:  movl   $0x0,(%eax)
08472fad +0x9a0:  mov    0x8(%ebp),%eax
08472fb0 +0x9a3:  movl   $0x0,0x4(%eax)
08472fb7 +0x9aa:  mov    0x8(%ebp),%eax
08472fba +0x9ad:  movl   $0x0,0x8(%eax)
08472fc1 +0x9b4:  mov    0x8(%ebp),%eax
08472fc4 +0x9b7:  movl   $0x0,0xc(%eax)
08472fcb +0x9be:  mov    0xc(%ebp),%eax
08472fce +0x9c1:  mov    %eax,(%esp)
08472fd1 +0x9c4:  call   08472f0f <+0x902>
08472fd6 +0x9c9:  mov    0x8(%ebp),%edx
08472fd9 +0x9cc:  mov    (%eax),%ecx
08472fdb +0x9ce:  mov    %ecx,0x10(%edx)
08472fde +0x9d1:  mov    0x4(%eax),%ecx
08472fe1 +0x9d4:  mov    %ecx,0x14(%edx)
08472fe4 +0x9d7:  mov    0x8(%eax),%eax
08472fe7 +0x9da:  mov    %eax,0x18(%edx)
08472fea +0x9dd:  leave
08472feb +0x9de:  ret
08472fec +0x9df:  push   %ebp
08472fed +0x9e0:  mov    %esp,%ebp
08472fef +0x9e2:  mov    $"}p�.",%eax
08472ff4 +0x9e7:  pop    %ebp
08472ff5 +0x9e8:  ret
08472ff6 +0x9e9:  nop
08472ff7 +0x9ea:  nop
```

## 反编译 C

```c
// <global>::global @ 0x847260d

/* disconnect_detecter::CDisconnectDetecter::_IsTimeout(int) */

void disconnect_detecter::CDisconnectDetecter::_GLOBAL__I__IsTimeout(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
