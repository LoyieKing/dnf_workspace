# NCashImpl

`_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts`

`global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to nexon::cash::NCashImpl` | `0x081ae511` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae511  _GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts
#           global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)
# range [0x081ae511, 0x081aed17]
081ae511 +0x000:  push   %ebp
081ae512 +0x001:  mov    %esp,%ebp
081ae514 +0x003:  sub    $0x18,%esp
081ae517 +0x006:  movl   $0xffff,0x4(%esp)
081ae51f +0x00e:  movl   $0x1,(%esp)
081ae526 +0x015:  call   081ae4d1 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081ae52b +0x01a:  leave
081ae52c +0x01b:  ret
081ae52d +0x01c:  nop
081ae52e +0x01d:  push   %ebp
081ae52f +0x01e:  mov    %esp,%ebp
081ae531 +0x020:  mov    0x8(%ebp),%eax
081ae534 +0x023:  movb   $0x55,(%eax)
081ae537 +0x026:  mov    0x8(%ebp),%eax
081ae53a +0x029:  movw   $0x0,0x2(%eax)
081ae540 +0x02f:  pop    %ebp
081ae541 +0x030:  ret
081ae542 +0x031:  push   %ebp
081ae543 +0x032:  mov    %esp,%ebp
081ae545 +0x034:  mov    0x8(%ebp),%eax
081ae548 +0x037:  add    $0x4,%eax
081ae54b +0x03a:  pop    %ebp
081ae54c +0x03b:  ret
081ae54d +0x03c:  nop
081ae54e +0x03d:  push   %ebp
081ae54f +0x03e:  mov    %esp,%ebp
081ae551 +0x040:  mov    0x8(%ebp),%eax
081ae554 +0x043:  movzwl 0x2(%eax),%eax
081ae558 +0x047:  movzwl %ax,%eax
081ae55b +0x04a:  add    $0x3,%eax
081ae55e +0x04d:  pop    %ebp
081ae55f +0x04e:  ret
081ae560 +0x04f:  push   %ebp
081ae561 +0x050:  mov    %esp,%ebp
081ae563 +0x052:  mov    0x8(%ebp),%eax
081ae566 +0x055:  add    $0x7,%eax
081ae569 +0x058:  pop    %ebp
081ae56a +0x059:  ret
081ae56b +0x05a:  nop
081ae56c +0x05b:  push   %ebp
081ae56d +0x05c:  mov    %esp,%ebp
081ae56f +0x05e:  mov    0x8(%ebp),%eax
081ae572 +0x061:  movzwl 0x2(%eax),%eax
081ae576 +0x065:  pop    %ebp
081ae577 +0x066:  ret
081ae578 +0x067:  push   %ebp
081ae579 +0x068:  mov    %esp,%ebp
081ae57b +0x06a:  push   %ebx
081ae57c +0x06b:  sub    $0x14,%esp
081ae57f +0x06e:  mov    0x8(%ebp),%eax
081ae582 +0x071:  movb   $0x55,0x4(%eax)
081ae586 +0x075:  mov    0x8(%ebp),%eax
081ae589 +0x078:  add    $0x5,%eax
081ae58c +0x07b:  mov    %eax,%ebx
081ae58e +0x07d:  mov    0x8(%ebp),%eax
081ae591 +0x080:  movzwl 0x2(%eax),%eax
081ae595 +0x084:  movzwl %ax,%eax
081ae598 +0x087:  mov    %eax,(%esp)
081ae59b +0x08a:  call   0807e680 <_init+0xf78>
081ae5a0 +0x08f:  mov    %ax,(%ebx)
081ae5a3 +0x092:  mov    $0x1,%eax
081ae5a8 +0x097:  add    $0x14,%esp
081ae5ab +0x09a:  pop    %ebx
081ae5ac +0x09b:  pop    %ebp
081ae5ad +0x09c:  ret
081ae5ae +0x09d:  push   %ebp
081ae5af +0x09e:  mov    %esp,%ebp
081ae5b1 +0x0a0:  sub    $0x18,%esp
081ae5b4 +0x0a3:  mov    0xc(%ebp),%eax
081ae5b7 +0x0a6:  mov    %eax,%edx
081ae5b9 +0x0a8:  mov    0x8(%ebp),%eax
081ae5bc +0x0ab:  mov    %dx,0x2(%eax)
081ae5c0 +0x0af:  mov    0x8(%ebp),%eax
081ae5c3 +0x0b2:  mov    %eax,(%esp)
081ae5c6 +0x0b5:  call   081ae578 <+0x67>
081ae5cb +0x0ba:  leave
081ae5cc +0x0bb:  ret
081ae5cd +0x0bc:  nop
081ae5ce +0x0bd:  push   %ebp
081ae5cf +0x0be:  mov    %esp,%ebp
081ae5d1 +0x0c0:  sub    $0x18,%esp
081ae5d4 +0x0c3:  mov    0x8(%ebp),%eax
081ae5d7 +0x0c6:  add    $0x5,%eax
081ae5da +0x0c9:  movzwl (%eax),%eax
081ae5dd +0x0cc:  movzwl %ax,%eax
081ae5e0 +0x0cf:  mov    %eax,(%esp)
081ae5e3 +0x0d2:  call   0807de90 <_init+0x788>
081ae5e8 +0x0d7:  mov    0x8(%ebp),%edx
081ae5eb +0x0da:  mov    %ax,0x2(%edx)
081ae5ef +0x0de:  mov    0x8(%ebp),%eax
081ae5f2 +0x0e1:  movzwl 0x2(%eax),%eax
081ae5f6 +0x0e5:  cmp    $0x200,%ax
081ae5fa +0x0e9:  jbe    081ae60c <+0xfb>
081ae5fc +0x0eb:  mov    0x8(%ebp),%eax
081ae5ff +0x0ee:  movw   $0x0,0x2(%eax)
081ae605 +0x0f4:  mov    $0x0,%eax
081ae60a +0x0f9:  jmp    081ae611 <+0x100>
081ae60c +0x0fb:  mov    $0x1,%eax
081ae611 +0x100:  leave
081ae612 +0x101:  ret
081ae613 +0x102:  nop
081ae614 +0x103:  push   %ebp
081ae615 +0x104:  mov    %esp,%ebp
081ae617 +0x106:  sub    $0x28,%esp
081ae61a +0x109:  mov    0xc(%ebp),%eax
081ae61d +0x10c:  mov    %al,-0xc(%ebp)
081ae620 +0x10f:  mov    0x8(%ebp),%eax
081ae623 +0x112:  mov    %eax,(%esp)
081ae626 +0x115:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081ae62b +0x11a:  lea    0x1(%eax),%edx
081ae62e +0x11d:  mov    0x8(%ebp),%eax
081ae631 +0x120:  mov    0xc(%eax),%eax
081ae634 +0x123:  cmp    %eax,%edx
081ae636 +0x125:  setb   %al
081ae639 +0x128:  test   %al,%al
081ae63b +0x12a:  je     081ae658 <+0x147>
081ae63d +0x12c:  mov    0x8(%ebp),%eax
081ae640 +0x12f:  mov    0x4(%eax),%eax
081ae643 +0x132:  movzbl -0xc(%ebp),%edx
081ae647 +0x136:  mov    %dl,(%eax)
081ae649 +0x138:  mov    0x8(%ebp),%eax
081ae64c +0x13b:  mov    0x4(%eax),%eax
081ae64f +0x13e:  lea    0x1(%eax),%edx
081ae652 +0x141:  mov    0x8(%ebp),%eax
081ae655 +0x144:  mov    %edx,0x4(%eax)
081ae658 +0x147:  mov    0x8(%ebp),%eax
081ae65b +0x14a:  leave
081ae65c +0x14b:  ret
081ae65d +0x14c:  nop
081ae65e +0x14d:  push   %ebp
081ae65f +0x14e:  mov    %esp,%ebp
081ae661 +0x150:  sub    $0x38,%esp
081ae664 +0x153:  mov    0xc(%ebp),%eax
081ae667 +0x156:  mov    %ax,-0x1c(%ebp)
081ae66b +0x15a:  lea    -0x1c(%ebp),%eax
081ae66e +0x15d:  mov    %eax,-0xc(%ebp)
081ae671 +0x160:  mov    0x8(%ebp),%eax
081ae674 +0x163:  mov    %eax,(%esp)
081ae677 +0x166:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081ae67c +0x16b:  lea    0x2(%eax),%edx
081ae67f +0x16e:  mov    0x8(%ebp),%eax
081ae682 +0x171:  mov    0xc(%eax),%eax
081ae685 +0x174:  cmp    %eax,%edx
081ae687 +0x176:  setbe  %al
081ae68a +0x179:  test   %al,%al
081ae68c +0x17b:  je     081ae6bf <+0x1ae>
081ae68e +0x17d:  mov    0x8(%ebp),%eax
081ae691 +0x180:  mov    0x4(%eax),%eax
081ae694 +0x183:  mov    -0xc(%ebp),%edx
081ae697 +0x186:  add    $0x1,%edx
081ae69a +0x189:  movzbl (%edx),%edx
081ae69d +0x18c:  mov    %dl,(%eax)
081ae69f +0x18e:  mov    0x8(%ebp),%eax
081ae6a2 +0x191:  mov    0x4(%eax),%eax
081ae6a5 +0x194:  lea    0x1(%eax),%edx
081ae6a8 +0x197:  mov    -0xc(%ebp),%eax
081ae6ab +0x19a:  movzbl (%eax),%eax
081ae6ae +0x19d:  mov    %al,(%edx)
081ae6b0 +0x19f:  mov    0x8(%ebp),%eax
081ae6b3 +0x1a2:  mov    0x4(%eax),%eax
081ae6b6 +0x1a5:  lea    0x2(%eax),%edx
081ae6b9 +0x1a8:  mov    0x8(%ebp),%eax
081ae6bc +0x1ab:  mov    %edx,0x4(%eax)
081ae6bf +0x1ae:  mov    0x8(%ebp),%eax
081ae6c2 +0x1b1:  leave
081ae6c3 +0x1b2:  ret
081ae6c4 +0x1b3:  push   %ebp
081ae6c5 +0x1b4:  mov    %esp,%ebp
081ae6c7 +0x1b6:  sub    $0x28,%esp
081ae6ca +0x1b9:  lea    0xc(%ebp),%eax
081ae6cd +0x1bc:  mov    %eax,-0xc(%ebp)
081ae6d0 +0x1bf:  mov    0x8(%ebp),%eax
081ae6d3 +0x1c2:  mov    %eax,(%esp)
081ae6d6 +0x1c5:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081ae6db +0x1ca:  lea    0x4(%eax),%edx
081ae6de +0x1cd:  mov    0x8(%ebp),%eax
081ae6e1 +0x1d0:  mov    0xc(%eax),%eax
081ae6e4 +0x1d3:  cmp    %eax,%edx
081ae6e6 +0x1d5:  setbe  %al
081ae6e9 +0x1d8:  test   %al,%al
081ae6eb +0x1da:  je     081ae746 <+0x235>
081ae6ed +0x1dc:  mov    0x8(%ebp),%eax
081ae6f0 +0x1df:  mov    0x4(%eax),%eax
081ae6f3 +0x1e2:  mov    -0xc(%ebp),%edx
081ae6f6 +0x1e5:  add    $0x3,%edx
081ae6f9 +0x1e8:  movzbl (%edx),%edx
081ae6fc +0x1eb:  mov    %dl,(%eax)
081ae6fe +0x1ed:  mov    0x8(%ebp),%eax
081ae701 +0x1f0:  mov    0x4(%eax),%eax
081ae704 +0x1f3:  lea    0x1(%eax),%edx
081ae707 +0x1f6:  mov    -0xc(%ebp),%eax
081ae70a +0x1f9:  add    $0x2,%eax
081ae70d +0x1fc:  movzbl (%eax),%eax
081ae710 +0x1ff:  mov    %al,(%edx)
081ae712 +0x201:  mov    0x8(%ebp),%eax
081ae715 +0x204:  mov    0x4(%eax),%eax
081ae718 +0x207:  lea    0x2(%eax),%edx
081ae71b +0x20a:  mov    -0xc(%ebp),%eax
081ae71e +0x20d:  add    $0x1,%eax
081ae721 +0x210:  movzbl (%eax),%eax
081ae724 +0x213:  mov    %al,(%edx)
081ae726 +0x215:  mov    0x8(%ebp),%eax
081ae729 +0x218:  mov    0x4(%eax),%eax
081ae72c +0x21b:  lea    0x3(%eax),%edx
081ae72f +0x21e:  mov    -0xc(%ebp),%eax
081ae732 +0x221:  movzbl (%eax),%eax
081ae735 +0x224:  mov    %al,(%edx)
081ae737 +0x226:  mov    0x8(%ebp),%eax
081ae73a +0x229:  mov    0x4(%eax),%eax
081ae73d +0x22c:  lea    0x4(%eax),%edx
081ae740 +0x22f:  mov    0x8(%ebp),%eax
081ae743 +0x232:  mov    %edx,0x4(%eax)
081ae746 +0x235:  mov    0x8(%ebp),%eax
081ae749 +0x238:  leave
081ae74a +0x239:  ret
081ae74b +0x23a:  nop
081ae74c +0x23b:  push   %ebp
081ae74d +0x23c:  mov    %esp,%ebp
081ae74f +0x23e:  sub    $0x28,%esp
081ae752 +0x241:  lea    0xc(%ebp),%eax
081ae755 +0x244:  mov    %eax,-0xc(%ebp)
081ae758 +0x247:  mov    0x8(%ebp),%eax
081ae75b +0x24a:  mov    %eax,(%esp)
081ae75e +0x24d:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081ae763 +0x252:  lea    0x4(%eax),%edx
081ae766 +0x255:  mov    0x8(%ebp),%eax
081ae769 +0x258:  mov    0xc(%eax),%eax
081ae76c +0x25b:  cmp    %eax,%edx
081ae76e +0x25d:  setbe  %al
081ae771 +0x260:  test   %al,%al
081ae773 +0x262:  je     081ae7ce <+0x2bd>
081ae775 +0x264:  mov    0x8(%ebp),%eax
081ae778 +0x267:  mov    0x4(%eax),%eax
081ae77b +0x26a:  mov    -0xc(%ebp),%edx
081ae77e +0x26d:  add    $0x3,%edx
081ae781 +0x270:  movzbl (%edx),%edx
081ae784 +0x273:  mov    %dl,(%eax)
081ae786 +0x275:  mov    0x8(%ebp),%eax
081ae789 +0x278:  mov    0x4(%eax),%eax
081ae78c +0x27b:  lea    0x1(%eax),%edx
081ae78f +0x27e:  mov    -0xc(%ebp),%eax
081ae792 +0x281:  add    $0x2,%eax
081ae795 +0x284:  movzbl (%eax),%eax
081ae798 +0x287:  mov    %al,(%edx)
081ae79a +0x289:  mov    0x8(%ebp),%eax
081ae79d +0x28c:  mov    0x4(%eax),%eax
081ae7a0 +0x28f:  lea    0x2(%eax),%edx
081ae7a3 +0x292:  mov    -0xc(%ebp),%eax
081ae7a6 +0x295:  add    $0x1,%eax
081ae7a9 +0x298:  movzbl (%eax),%eax
081ae7ac +0x29b:  mov    %al,(%edx)
081ae7ae +0x29d:  mov    0x8(%ebp),%eax
081ae7b1 +0x2a0:  mov    0x4(%eax),%eax
081ae7b4 +0x2a3:  lea    0x3(%eax),%edx
081ae7b7 +0x2a6:  mov    -0xc(%ebp),%eax
081ae7ba +0x2a9:  movzbl (%eax),%eax
081ae7bd +0x2ac:  mov    %al,(%edx)
081ae7bf +0x2ae:  mov    0x8(%ebp),%eax
081ae7c2 +0x2b1:  mov    0x4(%eax),%eax
081ae7c5 +0x2b4:  lea    0x4(%eax),%edx
081ae7c8 +0x2b7:  mov    0x8(%ebp),%eax
081ae7cb +0x2ba:  mov    %edx,0x4(%eax)
081ae7ce +0x2bd:  mov    0x8(%ebp),%eax
081ae7d1 +0x2c0:  leave
081ae7d2 +0x2c1:  ret
081ae7d3 +0x2c2:  nop
081ae7d4 +0x2c3:  push   %ebp
081ae7d5 +0x2c4:  mov    %esp,%ebp
081ae7d7 +0x2c6:  sub    $0x38,%esp
081ae7da +0x2c9:  mov    0xc(%ebp),%eax
081ae7dd +0x2cc:  mov    %eax,-0x20(%ebp)
081ae7e0 +0x2cf:  mov    0x10(%ebp),%eax
081ae7e3 +0x2d2:  mov    %eax,-0x1c(%ebp)
081ae7e6 +0x2d5:  lea    -0x20(%ebp),%eax
081ae7e9 +0x2d8:  mov    %eax,-0xc(%ebp)
081ae7ec +0x2db:  mov    0x8(%ebp),%eax
081ae7ef +0x2de:  mov    %eax,(%esp)
081ae7f2 +0x2e1:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081ae7f7 +0x2e6:  lea    0x8(%eax),%edx
081ae7fa +0x2e9:  mov    0x8(%ebp),%eax
081ae7fd +0x2ec:  mov    0xc(%eax),%eax
081ae800 +0x2ef:  cmp    %eax,%edx
081ae802 +0x2f1:  setbe  %al
081ae805 +0x2f4:  test   %al,%al
081ae807 +0x2f6:  je     081ae8b6 <+0x3a5>
081ae80d +0x2fc:  mov    0x8(%ebp),%eax
081ae810 +0x2ff:  mov    0x4(%eax),%eax
081ae813 +0x302:  mov    -0xc(%ebp),%edx
081ae816 +0x305:  add    $0x7,%edx
081ae819 +0x308:  movzbl (%edx),%edx
081ae81c +0x30b:  mov    %dl,(%eax)
081ae81e +0x30d:  mov    0x8(%ebp),%eax
081ae821 +0x310:  mov    0x4(%eax),%eax
081ae824 +0x313:  lea    0x1(%eax),%edx
081ae827 +0x316:  mov    -0xc(%ebp),%eax
081ae82a +0x319:  add    $0x6,%eax
081ae82d +0x31c:  movzbl (%eax),%eax
081ae830 +0x31f:  mov    %al,(%edx)
081ae832 +0x321:  mov    0x8(%ebp),%eax
081ae835 +0x324:  mov    0x4(%eax),%eax
081ae838 +0x327:  lea    0x2(%eax),%edx
081ae83b +0x32a:  mov    -0xc(%ebp),%eax
081ae83e +0x32d:  add    $0x5,%eax
081ae841 +0x330:  movzbl (%eax),%eax
081ae844 +0x333:  mov    %al,(%edx)
081ae846 +0x335:  mov    0x8(%ebp),%eax
081ae849 +0x338:  mov    0x4(%eax),%eax
081ae84c +0x33b:  lea    0x3(%eax),%edx
081ae84f +0x33e:  mov    -0xc(%ebp),%eax
081ae852 +0x341:  add    $0x4,%eax
081ae855 +0x344:  movzbl (%eax),%eax
081ae858 +0x347:  mov    %al,(%edx)
081ae85a +0x349:  mov    0x8(%ebp),%eax
081ae85d +0x34c:  mov    0x4(%eax),%eax
081ae860 +0x34f:  lea    0x4(%eax),%edx
081ae863 +0x352:  mov    -0xc(%ebp),%eax
081ae866 +0x355:  add    $0x3,%eax
081ae869 +0x358:  movzbl (%eax),%eax
081ae86c +0x35b:  mov    %al,(%edx)
081ae86e +0x35d:  mov    0x8(%ebp),%eax
081ae871 +0x360:  mov    0x4(%eax),%eax
081ae874 +0x363:  lea    0x5(%eax),%edx
081ae877 +0x366:  mov    -0xc(%ebp),%eax
081ae87a +0x369:  add    $0x2,%eax
081ae87d +0x36c:  movzbl (%eax),%eax
081ae880 +0x36f:  mov    %al,(%edx)
081ae882 +0x371:  mov    0x8(%ebp),%eax
081ae885 +0x374:  mov    0x4(%eax),%eax
081ae888 +0x377:  lea    0x6(%eax),%edx
081ae88b +0x37a:  mov    -0xc(%ebp),%eax
081ae88e +0x37d:  add    $0x1,%eax
081ae891 +0x380:  movzbl (%eax),%eax
081ae894 +0x383:  mov    %al,(%edx)
081ae896 +0x385:  mov    0x8(%ebp),%eax
081ae899 +0x388:  mov    0x4(%eax),%eax
081ae89c +0x38b:  lea    0x7(%eax),%edx
081ae89f +0x38e:  mov    -0xc(%ebp),%eax
081ae8a2 +0x391:  movzbl (%eax),%eax
081ae8a5 +0x394:  mov    %al,(%edx)
081ae8a7 +0x396:  mov    0x8(%ebp),%eax
081ae8aa +0x399:  mov    0x4(%eax),%eax
081ae8ad +0x39c:  lea    0x8(%eax),%edx
081ae8b0 +0x39f:  mov    0x8(%ebp),%eax
081ae8b3 +0x3a2:  mov    %edx,0x4(%eax)
081ae8b6 +0x3a5:  mov    0x8(%ebp),%eax
081ae8b9 +0x3a8:  leave
081ae8ba +0x3a9:  ret
081ae8bb +0x3aa:  nop
081ae8bc +0x3ab:  push   %ebp
081ae8bd +0x3ac:  mov    %esp,%ebp
081ae8bf +0x3ae:  mov    0x8(%ebp),%eax
081ae8c2 +0x3b1:  mov    0x8(%eax),%eax
081ae8c5 +0x3b4:  movzbl (%eax),%eax
081ae8c8 +0x3b7:  mov    %eax,%edx
081ae8ca +0x3b9:  mov    0xc(%ebp),%eax
081ae8cd +0x3bc:  mov    %dl,(%eax)
081ae8cf +0x3be:  mov    0x8(%ebp),%eax
081ae8d2 +0x3c1:  mov    0x8(%eax),%eax
081ae8d5 +0x3c4:  lea    0x1(%eax),%edx
081ae8d8 +0x3c7:  mov    0x8(%ebp),%eax
081ae8db +0x3ca:  mov    %edx,0x8(%eax)
081ae8de +0x3cd:  mov    0x8(%ebp),%eax
081ae8e1 +0x3d0:  pop    %ebp
081ae8e2 +0x3d1:  ret
081ae8e3 +0x3d2:  nop
081ae8e4 +0x3d3:  push   %ebp
081ae8e5 +0x3d4:  mov    %esp,%ebp
081ae8e7 +0x3d6:  sub    $0x10,%esp
081ae8ea +0x3d9:  mov    0xc(%ebp),%eax
081ae8ed +0x3dc:  mov    %eax,-0x4(%ebp)
081ae8f0 +0x3df:  mov    0x8(%ebp),%eax
081ae8f3 +0x3e2:  mov    0x8(%eax),%eax
081ae8f6 +0x3e5:  add    $0x3,%eax
081ae8f9 +0x3e8:  movzbl (%eax),%edx
081ae8fc +0x3eb:  mov    -0x4(%ebp),%eax
081ae8ff +0x3ee:  mov    %dl,(%eax)
081ae901 +0x3f0:  mov    -0x4(%ebp),%eax
081ae904 +0x3f3:  lea    0x1(%eax),%edx
081ae907 +0x3f6:  mov    0x8(%ebp),%eax
081ae90a +0x3f9:  mov    0x8(%eax),%eax
081ae90d +0x3fc:  add    $0x2,%eax
081ae910 +0x3ff:  movzbl (%eax),%eax
081ae913 +0x402:  mov    %al,(%edx)
081ae915 +0x404:  mov    -0x4(%ebp),%eax
081ae918 +0x407:  lea    0x2(%eax),%edx
081ae91b +0x40a:  mov    0x8(%ebp),%eax
081ae91e +0x40d:  mov    0x8(%eax),%eax
081ae921 +0x410:  add    $0x1,%eax
081ae924 +0x413:  movzbl (%eax),%eax
081ae927 +0x416:  mov    %al,(%edx)
081ae929 +0x418:  mov    -0x4(%ebp),%eax
081ae92c +0x41b:  lea    0x3(%eax),%edx
081ae92f +0x41e:  mov    0x8(%ebp),%eax
081ae932 +0x421:  mov    0x8(%eax),%eax
081ae935 +0x424:  movzbl (%eax),%eax
081ae938 +0x427:  mov    %al,(%edx)
081ae93a +0x429:  mov    0x8(%ebp),%eax
081ae93d +0x42c:  mov    0x8(%eax),%eax
081ae940 +0x42f:  lea    0x4(%eax),%edx
081ae943 +0x432:  mov    0x8(%ebp),%eax
081ae946 +0x435:  mov    %edx,0x8(%eax)
081ae949 +0x438:  mov    0x8(%ebp),%eax
081ae94c +0x43b:  leave
081ae94d +0x43c:  ret
081ae94e +0x43d:  push   %ebp
081ae94f +0x43e:  mov    %esp,%ebp
081ae951 +0x440:  sub    $0x10,%esp
081ae954 +0x443:  mov    0xc(%ebp),%eax
081ae957 +0x446:  mov    %eax,-0x4(%ebp)
081ae95a +0x449:  mov    0x8(%ebp),%eax
081ae95d +0x44c:  mov    0x8(%eax),%eax
081ae960 +0x44f:  add    $0x3,%eax
081ae963 +0x452:  movzbl (%eax),%edx
081ae966 +0x455:  mov    -0x4(%ebp),%eax
081ae969 +0x458:  mov    %dl,(%eax)
081ae96b +0x45a:  mov    -0x4(%ebp),%eax
081ae96e +0x45d:  lea    0x1(%eax),%edx
081ae971 +0x460:  mov    0x8(%ebp),%eax
081ae974 +0x463:  mov    0x8(%eax),%eax
081ae977 +0x466:  add    $0x2,%eax
081ae97a +0x469:  movzbl (%eax),%eax
081ae97d +0x46c:  mov    %al,(%edx)
081ae97f +0x46e:  mov    -0x4(%ebp),%eax
081ae982 +0x471:  lea    0x2(%eax),%edx
081ae985 +0x474:  mov    0x8(%ebp),%eax
081ae988 +0x477:  mov    0x8(%eax),%eax
081ae98b +0x47a:  add    $0x1,%eax
081ae98e +0x47d:  movzbl (%eax),%eax
081ae991 +0x480:  mov    %al,(%edx)
081ae993 +0x482:  mov    -0x4(%ebp),%eax
081ae996 +0x485:  lea    0x3(%eax),%edx
081ae999 +0x488:  mov    0x8(%ebp),%eax
081ae99c +0x48b:  mov    0x8(%eax),%eax
081ae99f +0x48e:  movzbl (%eax),%eax
081ae9a2 +0x491:  mov    %al,(%edx)
081ae9a4 +0x493:  mov    0x8(%ebp),%eax
081ae9a7 +0x496:  mov    0x8(%eax),%eax
081ae9aa +0x499:  lea    0x4(%eax),%edx
081ae9ad +0x49c:  mov    0x8(%ebp),%eax
081ae9b0 +0x49f:  mov    %edx,0x8(%eax)
081ae9b3 +0x4a2:  mov    0x8(%ebp),%eax
081ae9b6 +0x4a5:  leave
081ae9b7 +0x4a6:  ret
081ae9b8 +0x4a7:  push   %ebp
081ae9b9 +0x4a8:  mov    %esp,%ebp
081ae9bb +0x4aa:  push   %ebx
081ae9bc +0x4ab:  sub    $0x14,%esp
081ae9bf +0x4ae:  mov    0x8(%ebp),%ebx
081ae9c2 +0x4b1:  mov    0x10(%ebp),%eax
081ae9c5 +0x4b4:  mov    %eax,0x8(%esp)
081ae9c9 +0x4b8:  mov    0xc(%ebp),%eax
081ae9cc +0x4bb:  mov    %eax,0x4(%esp)
081ae9d0 +0x4bf:  mov    %ebx,(%esp)
081ae9d3 +0x4c2:  call   081ae9e2 <+0x4d1>
081ae9d8 +0x4c7:  mov    %ebx,%eax
081ae9da +0x4c9:  add    $0x14,%esp
081ae9dd +0x4cc:  pop    %ebx
081ae9de +0x4cd:  pop    %ebp
081ae9df +0x4ce:  ret    $0x4
081ae9e2 +0x4d1:  push   %ebp
081ae9e3 +0x4d2:  mov    %esp,%ebp
081ae9e5 +0x4d4:  mov    0x8(%ebp),%eax
081ae9e8 +0x4d7:  mov    0xc(%ebp),%edx
081ae9eb +0x4da:  mov    %edx,(%eax)
081ae9ed +0x4dc:  mov    0x8(%ebp),%eax
081ae9f0 +0x4df:  mov    0xc(%ebp),%edx
081ae9f3 +0x4e2:  mov    %edx,0x4(%eax)
081ae9f6 +0x4e5:  mov    0x8(%ebp),%eax
081ae9f9 +0x4e8:  mov    0xc(%ebp),%edx
081ae9fc +0x4eb:  mov    %edx,0x8(%eax)
081ae9ff +0x4ee:  mov    0x8(%ebp),%eax
081aea02 +0x4f1:  mov    0x10(%ebp),%edx
081aea05 +0x4f4:  mov    %edx,0xc(%eax)
081aea08 +0x4f7:  pop    %ebp
081aea09 +0x4f8:  ret
081aea0a +0x4f9:  push   %ebp
081aea0b +0x4fa:  mov    %esp,%ebp
081aea0d +0x4fc:  mov    $0x0,%eax
081aea12 +0x501:  pop    %ebp
081aea13 +0x502:  ret
081aea14 +0x503:  push   %ebp
081aea15 +0x504:  mov    %esp,%ebp
081aea17 +0x506:  mov    $0x0,%eax
081aea1c +0x50b:  pop    %ebp
081aea1d +0x50c:  ret
081aea1e +0x50d:  push   %ebp
081aea1f +0x50e:  mov    %esp,%ebp
081aea21 +0x510:  mov    $0x0,%eax
081aea26 +0x515:  pop    %ebp
081aea27 +0x516:  ret
081aea28 +0x517:  push   %ebp
081aea29 +0x518:  mov    %esp,%ebp
081aea2b +0x51a:  mov    $0x0,%eax
081aea30 +0x51f:  pop    %ebp
081aea31 +0x520:  ret
081aea32 +0x521:  push   %ebp
081aea33 +0x522:  mov    %esp,%ebp
081aea35 +0x524:  mov    0x8(%ebp),%eax
081aea38 +0x527:  mov    0x8(%eax),%eax
081aea3b +0x52a:  lea    0x1(%eax),%edx
081aea3e +0x52d:  mov    0x8(%ebp),%eax
081aea41 +0x530:  mov    %edx,0x8(%eax)
081aea44 +0x533:  pop    %ebp
081aea45 +0x534:  ret
081aea46 +0x535:  push   %ebp
081aea47 +0x536:  mov    %esp,%ebp
081aea49 +0x538:  push   %ebx
081aea4a +0x539:  sub    $0x24,%esp
081aea4d +0x53c:  mov    0x8(%ebp),%eax
081aea50 +0x53f:  add    $0x40,%eax
081aea53 +0x542:  mov    %eax,(%esp)
081aea56 +0x545:  call   081ae542 <+0x31>
081aea5b +0x54a:  mov    %eax,%ebx
081aea5d +0x54c:  mov    0x8(%ebp),%eax
081aea60 +0x54f:  add    $0x20,%eax
081aea63 +0x552:  mov    %eax,(%esp)
081aea66 +0x555:  call   081af7f4 <_ZNK5nexon4cash9TCPSocket9getHandleEv>  ; nexon::cash::TCPSocket::getHandle() const
081aea6b +0x55a:  movl   $0x100,0xc(%esp)
081aea73 +0x562:  movl   $0x3,0x8(%esp)
081aea7b +0x56a:  mov    %ebx,0x4(%esp)
081aea7f +0x56e:  mov    %eax,(%esp)
081aea82 +0x571:  call   0807e240 <_init+0xb38>
081aea87 +0x576:  mov    %eax,-0xc(%ebp)
081aea8a +0x579:  cmpl   $0x0,-0xc(%ebp)
081aea8e +0x57d:  jne    081aead3 <+0x5c2>
081aea90 +0x57f:  call   0807dd70 <_init+0x668>
081aea95 +0x584:  mov    (%eax),%eax
081aea97 +0x586:  mov    %eax,(%esp)
081aea9a +0x589:  call   0807d730 <_init+0x28>
081aea9f +0x58e:  mov    %eax,0x8(%esp)
081aeaa3 +0x592:  movl   $&_ZZN5nexon4cash9NCashImpl8recv_msgEvE12__FUNCTION__,0x4(%esp)
081aeaab +0x59a:  movl   $"[%s] connection lost: %s\n",(%esp)
081aeab2 +0x5a1:  call   0807db60 <_init+0x458>
081aeab7 +0x5a6:  mov    0x8(%ebp),%eax
081aeaba +0x5a9:  movb   $0x0,0xc(%eax)
081aeabe +0x5ad:  mov    0x8(%ebp),%eax
081aeac1 +0x5b0:  add    $0x20,%eax
081aeac4 +0x5b3:  mov    %eax,(%esp)
081aeac7 +0x5b6:  call   081af80c <_ZN5nexon4cash9TCPSocket5closeEv>  ; nexon::cash::TCPSocket::close()
081aeacc +0x5bb:  mov    $0x2,%eax
081aead1 +0x5c0:  jmp    081aeb35 <+0x624>
081aead3 +0x5c2:  cmpl   $0x0,-0xc(%ebp)
081aead7 +0x5c6:  jns    081aeb1c <+0x60b>
081aead9 +0x5c8:  call   0807dd70 <_init+0x668>
081aeade +0x5cd:  mov    (%eax),%eax
081aeae0 +0x5cf:  mov    %eax,(%esp)
081aeae3 +0x5d2:  call   0807d730 <_init+0x28>
081aeae8 +0x5d7:  mov    %eax,0x8(%esp)
081aeaec +0x5db:  movl   $&_ZZN5nexon4cash9NCashImpl8recv_msgEvE12__FUNCTION__,0x4(%esp)
081aeaf4 +0x5e3:  movl   $"[%s] recv error: %s\n",(%esp)
081aeafb +0x5ea:  call   0807db60 <_init+0x458>
081aeb00 +0x5ef:  mov    0x8(%ebp),%eax
081aeb03 +0x5f2:  movb   $0x0,0xc(%eax)
081aeb07 +0x5f6:  mov    0x8(%ebp),%eax
081aeb0a +0x5f9:  add    $0x20,%eax
081aeb0d +0x5fc:  mov    %eax,(%esp)
081aeb10 +0x5ff:  call   081af80c <_ZN5nexon4cash9TCPSocket5closeEv>  ; nexon::cash::TCPSocket::close()
081aeb15 +0x604:  mov    $0x2,%eax
081aeb1a +0x609:  jmp    081aeb35 <+0x624>
081aeb1c +0x60b:  mov    0x8(%ebp),%eax
081aeb1f +0x60e:  add    $0x40,%eax
081aeb22 +0x611:  mov    %eax,(%esp)
081aeb25 +0x614:  call   081ae5ce <+0xbd>
081aeb2a +0x619:  mov    0x8(%ebp),%eax
081aeb2d +0x61c:  mov    %eax,(%esp)
081aeb30 +0x61f:  call   081aeb3c <+0x62b>
081aeb35 +0x624:  add    $0x24,%esp
081aeb38 +0x627:  pop    %ebx
081aeb39 +0x628:  pop    %ebp
081aeb3a +0x629:  ret
081aeb3b +0x62a:  nop
081aeb3c +0x62b:  push   %ebp
081aeb3d +0x62c:  mov    %esp,%ebp
081aeb3f +0x62e:  push   %esi
081aeb40 +0x62f:  push   %ebx
081aeb41 +0x630:  sub    $0x20,%esp
081aeb44 +0x633:  mov    0x8(%ebp),%eax
081aeb47 +0x636:  add    $0x40,%eax
081aeb4a +0x639:  mov    %eax,(%esp)
081aeb4d +0x63c:  call   081ae56c <+0x5b>
081aeb52 +0x641:  movzwl %ax,%esi
081aeb55 +0x644:  mov    0x8(%ebp),%eax
081aeb58 +0x647:  add    $0x40,%eax
081aeb5b +0x64a:  mov    %eax,(%esp)
081aeb5e +0x64d:  call   081ae560 <+0x4f>
081aeb63 +0x652:  mov    %eax,%ebx
081aeb65 +0x654:  mov    0x8(%ebp),%eax
081aeb68 +0x657:  add    $0x20,%eax
081aeb6b +0x65a:  mov    %eax,(%esp)
081aeb6e +0x65d:  call   081af7f4 <_ZNK5nexon4cash9TCPSocket9getHandleEv>  ; nexon::cash::TCPSocket::getHandle() const
081aeb73 +0x662:  movl   $0x100,0xc(%esp)
081aeb7b +0x66a:  mov    %esi,0x8(%esp)
081aeb7f +0x66e:  mov    %ebx,0x4(%esp)
081aeb83 +0x672:  mov    %eax,(%esp)
081aeb86 +0x675:  call   0807e240 <_init+0xb38>
081aeb8b +0x67a:  mov    %eax,-0xc(%ebp)
081aeb8e +0x67d:  cmpl   $0x0,-0xc(%ebp)
081aeb92 +0x681:  jne    081aebd7 <+0x6c6>
081aeb94 +0x683:  call   0807dd70 <_init+0x668>
081aeb99 +0x688:  mov    (%eax),%eax
081aeb9b +0x68a:  mov    %eax,(%esp)
081aeb9e +0x68d:  call   0807d730 <_init+0x28>
081aeba3 +0x692:  mov    %eax,0x8(%esp)
081aeba7 +0x696:  movl   $&_ZZN5nexon4cash9NCashImpl9recv_bodyEvE12__FUNCTION__,0x4(%esp)
081aebaf +0x69e:  movl   $"[%s] connection lost: %s\n",(%esp)
081aebb6 +0x6a5:  call   0807db60 <_init+0x458>
081aebbb +0x6aa:  mov    0x8(%ebp),%eax
081aebbe +0x6ad:  movb   $0x0,0xc(%eax)
081aebc2 +0x6b1:  mov    0x8(%ebp),%eax
081aebc5 +0x6b4:  add    $0x20,%eax
081aebc8 +0x6b7:  mov    %eax,(%esp)
081aebcb +0x6ba:  call   081af80c <_ZN5nexon4cash9TCPSocket5closeEv>  ; nexon::cash::TCPSocket::close()
081aebd0 +0x6bf:  mov    $0x2,%eax
081aebd5 +0x6c4:  jmp    081aec25 <+0x714>
081aebd7 +0x6c6:  cmpl   $0x0,-0xc(%ebp)
081aebdb +0x6ca:  jns    081aec20 <+0x70f>
081aebdd +0x6cc:  call   0807dd70 <_init+0x668>
081aebe2 +0x6d1:  mov    (%eax),%eax
081aebe4 +0x6d3:  mov    %eax,(%esp)
081aebe7 +0x6d6:  call   0807d730 <_init+0x28>
081aebec +0x6db:  mov    %eax,0x8(%esp)
081aebf0 +0x6df:  movl   $&_ZZN5nexon4cash9NCashImpl9recv_bodyEvE12__FUNCTION__,0x4(%esp)
081aebf8 +0x6e7:  movl   $"[%s] recv error: %s\n",(%esp)
081aebff +0x6ee:  call   0807db60 <_init+0x458>
081aec04 +0x6f3:  mov    0x8(%ebp),%eax
081aec07 +0x6f6:  movb   $0x0,0xc(%eax)
081aec0b +0x6fa:  mov    0x8(%ebp),%eax
081aec0e +0x6fd:  add    $0x20,%eax
081aec11 +0x700:  mov    %eax,(%esp)
081aec14 +0x703:  call   081af80c <_ZN5nexon4cash9TCPSocket5closeEv>  ; nexon::cash::TCPSocket::close()
081aec19 +0x708:  mov    $0x2,%eax
081aec1e +0x70d:  jmp    081aec25 <+0x714>
081aec20 +0x70f:  mov    $0x0,%eax
081aec25 +0x714:  add    $0x20,%esp
081aec28 +0x717:  pop    %ebx
081aec29 +0x718:  pop    %esi
081aec2a +0x719:  pop    %ebp
081aec2b +0x71a:  ret
081aec2c +0x71b:  push   %ebp
081aec2d +0x71c:  mov    %esp,%ebp
081aec2f +0x71e:  push   %esi
081aec30 +0x71f:  push   %ebx
081aec31 +0x720:  sub    $0x20,%esp
081aec34 +0x723:  mov    0x8(%ebp),%eax
081aec37 +0x726:  lea    0x248(%eax),%edx
081aec3d +0x72c:  mov    0xc(%ebp),%eax
081aec40 +0x72f:  mov    %eax,0x4(%esp)
081aec44 +0x733:  mov    %edx,(%esp)
081aec47 +0x736:  call   081ae5ae <+0x9d>
081aec4c +0x73b:  mov    0x8(%ebp),%eax
081aec4f +0x73e:  add    $0x248,%eax
081aec54 +0x743:  mov    %eax,(%esp)
081aec57 +0x746:  call   081ae54e <+0x3d>
081aec5c +0x74b:  mov    %eax,%esi
081aec5e +0x74d:  mov    0x8(%ebp),%eax
081aec61 +0x750:  add    $0x248,%eax
081aec66 +0x755:  mov    %eax,(%esp)
081aec69 +0x758:  call   081ae542 <+0x31>
081aec6e +0x75d:  mov    %eax,%ebx
081aec70 +0x75f:  mov    0x8(%ebp),%eax
081aec73 +0x762:  add    $0x20,%eax
081aec76 +0x765:  mov    %eax,(%esp)
081aec79 +0x768:  call   081af7f4 <_ZNK5nexon4cash9TCPSocket9getHandleEv>  ; nexon::cash::TCPSocket::getHandle() const
081aec7e +0x76d:  movl   $0x100,0xc(%esp)
081aec86 +0x775:  mov    %esi,0x8(%esp)
081aec8a +0x779:  mov    %ebx,0x4(%esp)
081aec8e +0x77d:  mov    %eax,(%esp)
081aec91 +0x780:  call   0807db40 <_init+0x438>
081aec96 +0x785:  mov    %eax,-0xc(%ebp)
081aec99 +0x788:  mov    0x8(%ebp),%eax
081aec9c +0x78b:  add    $0x248,%eax
081aeca1 +0x790:  mov    %eax,(%esp)
081aeca4 +0x793:  call   081ae54e <+0x3d>
081aeca9 +0x798:  cmp    -0xc(%ebp),%eax
081aecac +0x79b:  setne  %al
081aecaf +0x79e:  test   %al,%al
081aecb1 +0x7a0:  je     081aed0b <+0x7fa>
081aecb3 +0x7a2:  call   0807dd70 <_init+0x668>
081aecb8 +0x7a7:  mov    (%eax),%eax
081aecba +0x7a9:  mov    %eax,(%esp)
081aecbd +0x7ac:  call   0807d730 <_init+0x28>
081aecc2 +0x7b1:  mov    %eax,%ebx
081aecc4 +0x7b3:  mov    0x8(%ebp),%eax
081aecc7 +0x7b6:  add    $0x248,%eax
081aeccc +0x7bb:  mov    %eax,(%esp)
081aeccf +0x7be:  call   081ae54e <+0x3d>
081aecd4 +0x7c3:  mov    %ebx,0xc(%esp)
081aecd8 +0x7c7:  mov    %eax,0x8(%esp)
081aecdc +0x7cb:  mov    -0xc(%ebp),%eax
081aecdf +0x7ce:  mov    %eax,0x4(%esp)
081aece3 +0x7d2:  movl   $"send error: send bytes: %d, message length: %d, error: %s\n",(%esp)
081aecea +0x7d9:  call   0807db60 <_init+0x458>
081aecef +0x7de:  mov    0x8(%ebp),%eax
081aecf2 +0x7e1:  movb   $0x0,0xc(%eax)
081aecf6 +0x7e5:  mov    0x8(%ebp),%eax
081aecf9 +0x7e8:  add    $0x20,%eax
081aecfc +0x7eb:  mov    %eax,(%esp)
081aecff +0x7ee:  call   081af80c <_ZN5nexon4cash9TCPSocket5closeEv>  ; nexon::cash::TCPSocket::close()
081aed04 +0x7f3:  mov    $0x2,%eax
081aed09 +0x7f8:  jmp    081aed10 <+0x7ff>
081aed0b +0x7fa:  mov    $0x0,%eax
081aed10 +0x7ff:  add    $0x20,%esp
081aed13 +0x802:  pop    %ebx
081aed14 +0x803:  pop    %esi
081aed15 +0x804:  pop    %ebp
081aed16 +0x805:  ret
081aed17 +0x806:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81ae511

/* nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short) */

void nexon::cash::NCashImpl::_GLOBAL__I_NCashImpl(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
