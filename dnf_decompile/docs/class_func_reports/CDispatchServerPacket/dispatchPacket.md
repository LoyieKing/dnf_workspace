# dispatchPacket

`_ZN21CDispatchServerPacket14dispatchPacketEPc`

`CDispatchServerPacket::dispatchPacket(char*)`

| 类 | 地址 |
|---|---|
| `CDispatchServerPacket` | `0x08473660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08473660  _ZN21CDispatchServerPacket14dispatchPacketEPc
#           CDispatchServerPacket::dispatchPacket(char*)
# range [0x08473660, 0x0847ac3b]
08473660 +0x0000:  push   %ebp
08473661 +0x0001:  mov    %esp,%ebp
08473663 +0x0003:  push   %edi
08473664 +0x0004:  push   %esi
08473665 +0x0005:  push   %ebx
08473666 +0x0006:  sub    $0x32c,%esp
0847366c +0x000c:  mov    0x8(%ebp),%eax
0847366f +0x000f:  movzwl 0x2(%eax),%eax
08473673 +0x0013:  mov    %ax,-0x2d6(%ebp)
0847367a +0x001a:  addw   $0x8,-0x2d6(%ebp)
08473682 +0x0022:  movl   $0x1,0x4(%esp)
0847368a +0x002a:  lea    -0x310(%ebp),%eax
08473690 +0x0030:  mov    %eax,(%esp)
08473693 +0x0033:  call   080de62c <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x1c>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x1c
08473698 +0x0038:  cmpw   $0xfff,-0x2d6(%ebp)
084736a1 +0x0041:  ja     084736d4 <+0x74>
084736a3 +0x0043:  mov    &_ZN10GlobalData19s_small_stream_poolE,%eax
084736a8 +0x0048:  movl   $0x36,0x8(%esp)
084736b0 +0x0050:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
084736b8 +0x0058:  mov    %eax,(%esp)
084736bb +0x005b:  call   0828ff74 <_ZN15SmallStreamPool7AcquireEPKci>  ; SmallStreamPool::Acquire(char const*, int)
084736c0 +0x0060:  mov    %eax,0x4(%esp)
084736c4 +0x0064:  lea    -0x310(%ebp),%eax
084736ca +0x006a:  mov    %eax,(%esp)
084736cd +0x006d:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
084736d2 +0x0072:  jmp    0847374a <+0xea>
084736d4 +0x0074:  cmpw   $0xfff,-0x2d6(%ebp)
084736dd +0x007d:  jbe    0847371b <+0xbb>
084736df +0x007f:  cmpw   $0x3fff,-0x2d6(%ebp)
084736e8 +0x0088:  ja     0847371b <+0xbb>
084736ea +0x008a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084736ef +0x008f:  movl   $0x3a,0x8(%esp)
084736f7 +0x0097:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
084736ff +0x009f:  mov    %eax,(%esp)
08473702 +0x00a2:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08473707 +0x00a7:  mov    %eax,0x4(%esp)
0847370b +0x00ab:  lea    -0x310(%ebp),%eax
08473711 +0x00b1:  mov    %eax,(%esp)
08473714 +0x00b4:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
08473719 +0x00b9:  jmp    0847374a <+0xea>
0847371b +0x00bb:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
08473720 +0x00c0:  movl   $0x3e,0x8(%esp)
08473728 +0x00c8:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
08473730 +0x00d0:  mov    %eax,(%esp)
08473733 +0x00d3:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
08473738 +0x00d8:  mov    %eax,0x4(%esp)
0847373c +0x00dc:  lea    -0x310(%ebp),%eax
08473742 +0x00e2:  mov    %eax,(%esp)
08473745 +0x00e5:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
0847374a +0x00ea:  mov    0x8(%ebp),%eax
0847374d +0x00ed:  movzwl (%eax),%eax
08473750 +0x00f0:  movzwl %ax,%eax
08473753 +0x00f3:  cmp    $0x70f,%eax
08473758 +0x00f8:  je     08478769 <+0x5109>
0847375e +0x00fe:  cmp    $0x70f,%eax
08473763 +0x0103:  jg     08473cf5 <+0x695>
08473769 +0x0109:  cmp    $0x44e,%eax
0847376e +0x010e:  je     08475fe4 <+0x2984>
08473774 +0x0114:  cmp    $0x44e,%eax
08473779 +0x0119:  jg     08473a3e <+0x3de>
0847377f +0x011f:  cmp    $0x423,%eax
08473784 +0x0124:  je     08475079 <+0x1a19>
0847378a +0x012a:  cmp    $0x423,%eax
0847378f +0x012f:  jg     084738e4 <+0x284>
08473795 +0x0135:  cmp    $0x3fd,%eax
0847379a +0x013a:  je     08474c80 <+0x1620>
084737a0 +0x0140:  cmp    $0x3fd,%eax
084737a5 +0x0145:  jg     08473842 <+0x1e2>
084737ab +0x014b:  cmp    $0x3f2,%eax
084737b0 +0x0150:  je     08474900 <+0x12a0>
084737b6 +0x0156:  cmp    $0x3f2,%eax
084737bb +0x015b:  jg     084737fa <+0x19a>
084737bd +0x015d:  cmp    $0x3ea,%eax
084737c2 +0x0162:  je     08474335 <+0xcd5>
084737c8 +0x0168:  cmp    $0x3ea,%eax
084737cd +0x016d:  jg     084737df <+0x17f>
084737cf +0x016f:  cmp    $0x3e8,%eax
084737d4 +0x0174:  je     0847429f <+0xc3f>
084737da +0x017a:  jmp    0847abe7 <+0x7587>
084737df +0x017f:  cmp    $0x3ee,%eax
084737e4 +0x0184:  je     08474457 <+0xdf7>
084737ea +0x018a:  cmp    $0x3ef,%eax
084737ef +0x018f:  je     084747d0 <+0x1170>
084737f5 +0x0195:  jmp    0847abe7 <+0x7587>
084737fa +0x019a:  cmp    $0x3f8,%eax
084737ff +0x019f:  je     08474579 <+0xf19>
08473805 +0x01a5:  cmp    $0x3f8,%eax
0847380a +0x01aa:  jg     08473827 <+0x1c7>
0847380c +0x01ac:  cmp    $0x3f3,%eax
08473811 +0x01b1:  je     08475382 <+0x1d22>
08473817 +0x01b7:  cmp    $0x3f7,%eax
0847381c +0x01bc:  je     08476649 <+0x2fe9>
08473822 +0x01c2:  jmp    0847abe7 <+0x7587>
08473827 +0x01c7:  cmp    $0x3f9,%eax
0847382c +0x01cc:  je     084743c6 <+0xd66>
08473832 +0x01d2:  cmp    $0x3fc,%eax
08473837 +0x01d7:  je     08474ea5 <+0x1845>
0847383d +0x01dd:  jmp    0847abe7 <+0x7587>
08473842 +0x01e2:  cmp    $0x407,%eax
08473847 +0x01e7:  je     084752ec <+0x1c8c>
0847384d +0x01ed:  cmp    $0x407,%eax
08473852 +0x01f2:  jg     0847389c <+0x23c>
08473854 +0x01f4:  cmp    $0x400,%eax
08473859 +0x01f9:  je     08474f3b <+0x18db>
0847385f +0x01ff:  cmp    $0x400,%eax
08473864 +0x0204:  jg     08473881 <+0x221>
08473866 +0x0206:  cmp    $0x3fe,%eax
0847386b +0x020b:  je     08474d16 <+0x16b6>
08473871 +0x0211:  cmp    $0x3ff,%eax
08473876 +0x0216:  je     08474dac <+0x174c>
0847387c +0x021c:  jmp    0847abe7 <+0x7587>
08473881 +0x0221:  cmp    $0x401,%eax
08473886 +0x0226:  je     08474fda <+0x197a>
0847388c +0x022c:  cmp    $0x406,%eax
08473891 +0x0231:  je     08475256 <+0x1bf6>
08473897 +0x0237:  jmp    0847abe7 <+0x7587>
0847389c +0x023c:  cmp    $0x40c,%eax
084738a1 +0x0241:  je     08474abc <+0x145c>
084738a7 +0x0247:  cmp    $0x40c,%eax
084738ac +0x024c:  jg     084738c9 <+0x269>
084738ae +0x024e:  cmp    $0x40a,%eax
084738b3 +0x0253:  je     08474be8 <+0x1588>
084738b9 +0x0259:  cmp    $0x40b,%eax
084738be +0x025e:  je     08474b52 <+0x14f2>
084738c4 +0x0264:  jmp    0847abe7 <+0x7587>
084738c9 +0x0269:  cmp    $0x40d,%eax
084738ce +0x026e:  je     08475421 <+0x1dc1>
084738d4 +0x0274:  cmp    $0x414,%eax
084738d9 +0x0279:  je     0847610d <+0x2aad>
084738df +0x027f:  jmp    0847abe7 <+0x7587>
084738e4 +0x0284:  cmp    $0x437,%eax
084738e9 +0x0289:  je     084769d2 <+0x3372>
084738ef +0x028f:  cmp    $0x437,%eax
084738f4 +0x0294:  jg     0847399c <+0x33c>
084738fa +0x029a:  cmp    $0x430,%eax
084738ff +0x029f:  je     084755e9 <+0x1f89>
08473905 +0x02a5:  cmp    $0x430,%eax
0847390a +0x02aa:  jg     08473954 <+0x2f4>
0847390c +0x02ac:  cmp    $0x42c,%eax
08473911 +0x02b1:  je     08475719 <+0x20b9>
08473917 +0x02b7:  cmp    $0x42c,%eax
0847391c +0x02bc:  jg     08473939 <+0x2d9>
0847391e +0x02be:  cmp    $0x424,%eax
08473923 +0x02c3:  je     08475118 <+0x1ab8>
08473929 +0x02c9:  cmp    $0x428,%eax
0847392e +0x02ce:  je     084751b7 <+0x1b57>
08473934 +0x02d4:  jmp    0847abe7 <+0x7587>
08473939 +0x02d9:  cmp    $0x42d,%eax
0847393e +0x02de:  je     084754b9 <+0x1e59>
08473944 +0x02e4:  cmp    $0x42f,%eax
08473949 +0x02e9:  je     08475551 <+0x1ef1>
0847394f +0x02ef:  jmp    0847abe7 <+0x7587>
08473954 +0x02f4:  cmp    $0x434,%eax
08473959 +0x02f9:  je     0847680a <+0x31aa>
0847395f +0x02ff:  cmp    $0x434,%eax
08473964 +0x0304:  jg     08473981 <+0x321>
08473966 +0x0306:  cmp    $0x431,%eax
0847396b +0x030b:  je     08475681 <+0x2021>
08473971 +0x0311:  cmp    $0x432,%eax
08473976 +0x0316:  je     08476772 <+0x3112>
0847397c +0x031c:  jmp    0847abe7 <+0x7587>
08473981 +0x0321:  cmp    $0x435,%eax
08473986 +0x0326:  je     084768a2 <+0x3242>
0847398c +0x032c:  cmp    $0x436,%eax
08473991 +0x0331:  je     0847693a <+0x32da>
08473997 +0x0337:  jmp    0847abe7 <+0x7587>
0847399c +0x033c:  cmp    $0x444,%eax
084739a1 +0x0341:  je     08476fa7 <+0x3947>
084739a7 +0x0347:  cmp    $0x444,%eax
084739ac +0x034c:  jg     084739f6 <+0x396>
084739ae +0x034e:  cmp    $0x43d,%eax
084739b3 +0x0353:  je     08476bfa <+0x359a>
084739b9 +0x0359:  cmp    $0x43d,%eax
084739be +0x035e:  jg     084739db <+0x37b>
084739c0 +0x0360:  cmp    $0x439,%eax
084739c5 +0x0365:  je     08476b62 <+0x3502>
084739cb +0x036b:  cmp    $0x43b,%eax
084739d0 +0x0370:  je     08476c92 <+0x3632>
084739d6 +0x0376:  jmp    0847abe7 <+0x7587>
084739db +0x037b:  cmp    $0x43e,%eax
084739e0 +0x0380:  je     08476d2a <+0x36ca>
084739e6 +0x0386:  cmp    $0x43f,%eax
084739eb +0x038b:  je     08476dc2 <+0x3762>
084739f1 +0x0391:  jmp    0847abe7 <+0x7587>
084739f6 +0x0396:  cmp    $0x447,%eax
084739fb +0x039b:  je     084770d7 <+0x3a77>
08473a01 +0x03a1:  cmp    $0x447,%eax
08473a06 +0x03a6:  jg     08473a23 <+0x3c3>
08473a08 +0x03a8:  cmp    $0x445,%eax
08473a0d +0x03ad:  je     08476e5a <+0x37fa>
08473a13 +0x03b3:  cmp    $0x446,%eax
08473a18 +0x03b8:  je     0847703f <+0x39df>
08473a1e +0x03be:  jmp    0847abe7 <+0x7587>
08473a23 +0x03c3:  cmp    $0x44c,%eax
08473a28 +0x03c8:  je     0847499a <+0x133a>
08473a2e +0x03ce:  cmp    $0x44d,%eax
08473a33 +0x03d3:  je     08474a2b <+0x13cb>
08473a39 +0x03d9:  jmp    0847abe7 <+0x7587>
08473a3e +0x03de:  cmp    $0x642,%eax
08473a43 +0x03e3:  je     0847623d <+0x2bdd>
08473a49 +0x03e9:  cmp    $0x642,%eax
08473a4e +0x03ee:  jg     08473bae <+0x54e>
08473a54 +0x03f4:  cmp    $0x4bf,%eax
08473a59 +0x03f9:  je     08475c61 <+0x2601>
08473a5f +0x03ff:  cmp    $0x4bf,%eax
08473a64 +0x0404:  jg     08473b0c <+0x4ac>
08473a6a +0x040a:  cmp    $0x4b9,%eax
08473a6f +0x040f:  je     08475a09 <+0x23a9>
08473a75 +0x0415:  cmp    $0x4b9,%eax
08473a7a +0x041a:  jg     08473ac4 <+0x464>
08473a7c +0x041c:  cmp    $0x4b6,%eax
08473a81 +0x0421:  je     084757b1 <+0x2151>
08473a87 +0x0427:  cmp    $0x4b6,%eax
08473a8c +0x042c:  jg     08473aa9 <+0x449>
08473a8e +0x042e:  cmp    $0x44f,%eax
08473a93 +0x0433:  je     08475ec2 <+0x2862>
08473a99 +0x0439:  cmp    $0x450,%eax
08473a9e +0x043e:  je     08475f53 <+0x28f3>
08473aa4 +0x0444:  jmp    0847abe7 <+0x7587>
08473aa9 +0x0449:  cmp    $0x4b7,%eax
08473aae +0x044e:  je     08475847 <+0x21e7>
08473ab4 +0x0454:  cmp    $0x4b8,%eax
08473ab9 +0x0459:  je     084758dd <+0x227d>
08473abf +0x045f:  jmp    0847abe7 <+0x7587>
08473ac4 +0x0464:  cmp    $0x4bc,%eax
08473ac9 +0x0469:  je     08475b35 <+0x24d5>
08473acf +0x046f:  cmp    $0x4bc,%eax
08473ad4 +0x0474:  jg     08473af1 <+0x491>
08473ad6 +0x0476:  cmp    $0x4ba,%eax
08473adb +0x047b:  je     08475973 <+0x2313>
08473ae1 +0x0481:  cmp    $0x4bb,%eax
08473ae6 +0x0486:  je     08475a9f <+0x243f>
08473aec +0x048c:  jmp    0847abe7 <+0x7587>
08473af1 +0x0491:  cmp    $0x4bd,%eax
08473af6 +0x0496:  je     08475bcb <+0x256b>
08473afc +0x049c:  cmp    $0x4be,%eax
08473b01 +0x04a1:  je     08475d00 <+0x26a0>
08473b07 +0x04a7:  jmp    0847abe7 <+0x7587>
08473b0c +0x04ac:  cmp    $0x514,%eax
08473b11 +0x04b1:  je     08476075 <+0x2a15>
08473b17 +0x04b7:  cmp    $0x514,%eax
08473b1c +0x04bc:  jg     08473b66 <+0x506>
08473b1e +0x04be:  cmp    $0x4cb,%eax
08473b23 +0x04c3:  je     08476a6a <+0x340a>
08473b29 +0x04c9:  cmp    $0x4cb,%eax
08473b2e +0x04ce:  jg     08473b4b <+0x4eb>
08473b30 +0x04d0:  cmp    $0x4c0,%eax
08473b35 +0x04d5:  je     08475d96 <+0x2736>
08473b3b +0x04db:  cmp    $0x4c1,%eax
08473b40 +0x04e0:  je     08475e2c <+0x27cc>
08473b46 +0x04e6:  jmp    0847abe7 <+0x7587>
08473b4b +0x04eb:  cmp    $0x4cf,%eax
08473b50 +0x04f0:  je     08476b02 <+0x34a2>
08473b56 +0x04f6:  cmp    $0x4d2,%eax
08473b5b +0x04fb:  je     08477b2d <+0x44cd>
08473b61 +0x0501:  jmp    0847abe7 <+0x7587>
08473b66 +0x0506:  cmp    $0x5dd,%eax
08473b6b +0x050b:  je     08474738 <+0x10d8>
08473b71 +0x0511:  cmp    $0x5dd,%eax
08473b76 +0x0516:  jg     08473b93 <+0x533>
08473b78 +0x0518:  cmp    $0x546,%eax
08473b7d +0x051d:  je     084761a3 <+0x2b43>
08473b83 +0x0523:  cmp    $0x5dc,%eax
08473b88 +0x0528:  je     084746a0 <+0x1040>
08473b8e +0x052e:  jmp    0847abe7 <+0x7587>
08473b93 +0x0533:  cmp    $0x5e0,%eax
08473b98 +0x0538:  je     0847460a <+0xfaa>
08473b9e +0x053e:  cmp    $0x5e2,%eax
08473ba3 +0x0543:  je     08474868 <+0x1208>
08473ba9 +0x0549:  jmp    0847abe7 <+0x7587>
08473bae +0x054e:  cmp    $0x6d8,%eax
08473bb3 +0x0553:  je     0847781a <+0x41ba>
08473bb9 +0x0559:  cmp    $0x6d8,%eax
08473bbe +0x055e:  jg     08473c53 <+0x5f3>
08473bc4 +0x0564:  cmp    $0x6ac,%eax
08473bc9 +0x0569:  jg     08473c16 <+0x5b6>
08473bcb +0x056b:  cmp    $0x6ab,%eax
08473bd0 +0x0570:  jge    0847abee <+0x758e>
08473bd6 +0x0576:  cmp    $0x6a5,%eax
08473bdb +0x057b:  je     0847abf1 <+0x7591>
08473be1 +0x0581:  cmp    $0x6a5,%eax
08473be6 +0x0586:  jg     08473c03 <+0x5a3>
08473be8 +0x0588:  cmp    $0x672,%eax
08473bed +0x058d:  je     084762d5 <+0x2c75>
08473bf3 +0x0593:  cmp    $0x674,%eax
08473bf8 +0x0598:  je     0847636d <+0x2d0d>
08473bfe +0x059e:  jmp    0847abe7 <+0x7587>
08473c03 +0x05a3:  sub    $0x6a8,%eax
08473c08 +0x05a8:  cmp    $0x1,%eax
08473c0b +0x05ab:  ja     0847abe7 <+0x7587>
08473c11 +0x05b1:  jmp    0847abfb <+0x759b>
08473c16 +0x05b6:  cmp    $0x6af,%eax
08473c1b +0x05bb:  je     0847abf4 <+0x7594>
08473c21 +0x05c1:  cmp    $0x6af,%eax
08473c26 +0x05c6:  jg     08473c38 <+0x5d8>
08473c28 +0x05c8:  cmp    $0x6ae,%eax
08473c2d +0x05cd:  je     0847abf7 <+0x7597>
08473c33 +0x05d3:  jmp    0847abe7 <+0x7587>
08473c38 +0x05d8:  cmp    $0x6b0,%eax
08473c3d +0x05dd:  je     08477c6d <+0x460d>
08473c43 +0x05e3:  cmp    $0x6b2,%eax
08473c48 +0x05e8:  je     0847814a <+0x4aea>
08473c4e +0x05ee:  jmp    0847abe7 <+0x7587>
08473c53 +0x05f3:  cmp    $0x6ea,%eax
08473c58 +0x05f8:  je     084781e0 <+0x4b80>
08473c5e +0x05fe:  cmp    $0x6ea,%eax
08473c63 +0x0603:  jg     08473cad <+0x64d>
08473c65 +0x0605:  cmp    $0x6e0,%eax
08473c6a +0x060a:  je     08477bce <+0x456e>
08473c70 +0x0610:  cmp    $0x6e0,%eax
08473c75 +0x0615:  jg     08473c92 <+0x632>
08473c77 +0x0617:  cmp    $0x6dc,%eax
08473c7c +0x061c:  je     0847794e <+0x42ee>
08473c82 +0x0622:  cmp    $0x6de,%eax
08473c87 +0x0627:  je     084779ed <+0x438d>
08473c8d +0x062d:  jmp    0847abe7 <+0x7587>
08473c92 +0x0632:  cmp    $0x6e2,%eax
08473c97 +0x0637:  je     08477a8c <+0x442c>
08473c9d +0x063d:  cmp    $0x6e5,%eax
08473ca2 +0x0642:  je     084780b9 <+0x4a59>
08473ca8 +0x0648:  jmp    0847abe7 <+0x7587>
08473cad +0x064d:  cmp    $0x70c,%eax
08473cb2 +0x0652:  je     0847858c <+0x4f2c>
08473cb8 +0x0658:  cmp    $0x70c,%eax
08473cbd +0x065d:  jg     08473cda <+0x67a>
08473cbf +0x065f:  cmp    $0x70a,%eax
08473cc4 +0x0664:  je     084783af <+0x4d4f>
08473cca +0x066a:  cmp    $0x70b,%eax
08473ccf +0x066f:  je     084784ed <+0x4e8d>
08473cd5 +0x0675:  jmp    0847abe7 <+0x7587>
08473cda +0x067a:  cmp    $0x70d,%eax
08473cdf +0x067f:  je     0847862b <+0x4fcb>
08473ce5 +0x0685:  cmp    $0x70e,%eax
08473cea +0x068a:  je     084786ca <+0x506a>
08473cf0 +0x0690:  jmp    0847abe7 <+0x7587>
08473cf5 +0x0695:  cmp    $0x1b5b,%eax
08473cfa +0x069a:  je     084792f5 <+0x5c95>
08473d00 +0x06a0:  cmp    $0x1b5b,%eax
08473d05 +0x06a5:  jg     08473fd5 <+0x975>
08473d0b +0x06ab:  cmp    $0xfab,%eax
08473d10 +0x06b0:  je     0847763d <+0x3fdd>
08473d16 +0x06b6:  cmp    $0xfab,%eax
08473d1b +0x06bb:  jg     08473e7b <+0x81b>
08473d21 +0x06c1:  cmp    $0xb57,%eax
08473d26 +0x06c6:  je     08477260 <+0x3c00>
08473d2c +0x06cc:  cmp    $0xb57,%eax
08473d31 +0x06d1:  jg     08473dd9 <+0x779>
08473d37 +0x06d7:  cmp    $0x9dd,%eax
08473d3c +0x06dc:  je     08476496 <+0x2e36>
08473d42 +0x06e2:  cmp    $0x9dd,%eax
08473d47 +0x06e7:  jg     08473d91 <+0x731>
08473d49 +0x06e9:  cmp    $0x76c,%eax
08473d4e +0x06ee:  je     084766da <+0x307a>
08473d54 +0x06f4:  cmp    $0x76c,%eax
08473d59 +0x06f9:  jg     08473d76 <+0x716>
08473d5b +0x06fb:  cmp    $0x712,%eax
08473d60 +0x0700:  je     0847844e <+0x4dee>
08473d66 +0x0706:  cmp    $0x713,%eax
08473d6b +0x070b:  je     08478808 <+0x51a8>
08473d71 +0x0711:  jmp    0847abe7 <+0x7587>
08473d76 +0x0716:  cmp    $0x9d3,%eax
08473d7b +0x071b:  je     08478b1d <+0x54bd>
08473d81 +0x0721:  cmp    $0x9dc,%eax
08473d86 +0x0726:  je     08476405 <+0x2da5>
08473d8c +0x072c:  jmp    0847abe7 <+0x7587>
08473d91 +0x0731:  cmp    $0xa8c,%eax
08473d96 +0x0736:  je     0847716f <+0x3b0f>
08473d9c +0x073c:  cmp    $0xa8c,%eax
08473da1 +0x0741:  jg     08473dbe <+0x75e>
08473da3 +0x0743:  cmp    $0x9de,%eax
08473da8 +0x0748:  je     084765b8 <+0x2f58>
08473dae +0x074e:  cmp    $0x9e0,%eax
08473db3 +0x0753:  je     08476527 <+0x2ec7>
08473db9 +0x0759:  jmp    0847abe7 <+0x7587>
08473dbe +0x075e:  cmp    $0xb54,%eax
08473dc3 +0x0763:  je     08476eeb <+0x388b>
08473dc9 +0x0769:  cmp    $0xb55,%eax
08473dce +0x076e:  je     08477200 <+0x3ba0>
08473dd4 +0x0774:  jmp    0847abe7 <+0x7587>
08473dd9 +0x0779:  cmp    $0xb64,%eax
08473dde +0x077e:  je     0847a152 <+0x6af2>
08473de4 +0x0784:  cmp    $0xb64,%eax
08473de9 +0x0789:  jg     08473e33 <+0x7d3>
08473deb +0x078b:  cmp    $0xb5f,%eax
08473df0 +0x0790:  je     08476f16 <+0x38b6>
08473df6 +0x0796:  cmp    $0xb5f,%eax
08473dfb +0x079b:  jg     08473e18 <+0x7b8>
08473dfd +0x079d:  cmp    $0xb58,%eax
08473e02 +0x07a2:  je     084772c0 <+0x3c60>
08473e08 +0x07a8:  cmp    $0xb5e,%eax
08473e0d +0x07ad:  je     0847735a <+0x3cfa>
08473e13 +0x07b3:  jmp    0847abe7 <+0x7587>
08473e18 +0x07b8:  cmp    $0xb60,%eax
08473e1d +0x07bd:  je     08478310 <+0x4cb0>
08473e23 +0x07c3:  cmp    $0xb61,%eax
08473e28 +0x07c8:  je     08479091 <+0x5a31>
08473e2e +0x07ce:  jmp    0847abe7 <+0x7587>
08473e33 +0x07d3:  cmp    $0xfa2,%eax
08473e38 +0x07d8:  je     08477483 <+0x3e23>
08473e3e +0x07de:  cmp    $0xfa2,%eax
08473e43 +0x07e3:  jg     08473e60 <+0x800>
08473e45 +0x07e5:  cmp    $0xb65,%eax
08473e4a +0x07ea:  je     0847a28b <+0x6c2b>
08473e50 +0x07f0:  cmp    $0xc1c,%eax
08473e55 +0x07f5:  je     084773eb <+0x3d8b>
08473e5b +0x07fb:  jmp    0847abe7 <+0x7587>
08473e60 +0x0800:  cmp    $0xfa3,%eax
08473e65 +0x0805:  je     0847751b <+0x3ebb>
08473e6b +0x080b:  cmp    $0xfa5,%eax
08473e70 +0x0810:  je     084775ac <+0x3f4c>
08473e76 +0x0816:  jmp    0847abe7 <+0x7587>
08473e7b +0x081b:  cmp    $0x1039,%eax
08473e80 +0x0820:  je     084789e9 <+0x5389>
08473e86 +0x0826:  cmp    $0x1039,%eax
08473e8b +0x082b:  jg     08473f33 <+0x8d3>
08473e91 +0x0831:  cmp    $0xfe7,%eax
08473e96 +0x0836:  je     0847a140 <+0x6ae0>
08473e9c +0x083c:  cmp    $0xfe7,%eax
08473ea1 +0x0841:  jg     08473eeb <+0x88b>
08473ea3 +0x0843:  cmp    $0xfae,%eax
08473ea8 +0x0848:  je     084778b4 <+0x4254>
08473eae +0x084e:  cmp    $0xfae,%eax
08473eb3 +0x0853:  jg     08473ed0 <+0x870>
08473eb5 +0x0855:  cmp    $0xfac,%eax
08473eba +0x085a:  je     084776dc <+0x407c>
08473ec0 +0x0860:  cmp    $0xfad,%eax
08473ec5 +0x0865:  je     0847777b <+0x411b>
08473ecb +0x086b:  jmp    0847abe7 <+0x7587>
08473ed0 +0x0870:  cmp    $0xfaf,%eax
08473ed5 +0x0875:  je     08477d0c <+0x46ac>
08473edb +0x087b:  cmp    $0xfe6,%eax
08473ee0 +0x0880:  je     0847a081 <+0x6a21>
08473ee6 +0x0886:  jmp    0847abe7 <+0x7587>
08473eeb +0x088b:  cmp    $0x1006,%eax
08473ef0 +0x0890:  je     0847801f <+0x49bf>
08473ef6 +0x0896:  cmp    $0x1006,%eax
08473efb +0x089b:  jg     08473f18 <+0x8b8>
08473efd +0x089d:  cmp    $0x1004,%eax
08473f02 +0x08a2:  je     08477e4a <+0x47ea>
08473f08 +0x08a8:  cmp    $0x1005,%eax
08473f0d +0x08ad:  je     08477ee4 <+0x4884>
08473f13 +0x08b3:  jmp    0847abe7 <+0x7587>
08473f18 +0x08b8:  cmp    $0x100a,%eax
08473f1d +0x08bd:  je     08477f7e <+0x491e>
08473f23 +0x08c3:  cmp    $0x100f,%eax
08473f28 +0x08c8:  je     08478271 <+0x4c11>
08473f2e +0x08ce:  jmp    0847abe7 <+0x7587>
08473f33 +0x08d3:  cmp    $0x1777,%eax
08473f38 +0x08d8:  je     08478d85 <+0x5725>
08473f3e +0x08de:  cmp    $0x1777,%eax
08473f43 +0x08e3:  jg     08473f8d <+0x92d>
08473f45 +0x08e5:  cmp    $0x1774,%eax
08473f4a +0x08ea:  je     08478c51 <+0x55f1>
08473f50 +0x08f0:  cmp    $0x1774,%eax
08473f55 +0x08f5:  jg     08473f72 <+0x912>
08473f57 +0x08f7:  cmp    $0x103a,%eax
08473f5c +0x08fc:  je     08478a83 <+0x5423>
08473f62 +0x0902:  cmp    $0x1773,%eax
08473f67 +0x0907:  je     08478bb7 <+0x5557>
08473f6d +0x090d:  jmp    0847abe7 <+0x7587>
08473f72 +0x0912:  cmp    $0x1775,%eax
08473f77 +0x0917:  je     08478ebe <+0x585e>
08473f7d +0x091d:  cmp    $0x1776,%eax
08473f82 +0x0922:  je     08478ceb <+0x568b>
08473f88 +0x0928:  jmp    0847abe7 <+0x7587>
08473f8d +0x092d:  cmp    $0x177e,%eax
08473f92 +0x0932:  je     08478ff7 <+0x5997>
08473f98 +0x0938:  cmp    $0x177e,%eax
08473f9d +0x093d:  jg     08473fba <+0x95a>
08473f9f +0x093f:  cmp    $0x1778,%eax
08473fa4 +0x0944:  je     08478e1f <+0x57bf>
08473faa +0x094a:  cmp    $0x177a,%eax
08473faf +0x094f:  je     08478f5d <+0x58fd>
08473fb5 +0x0955:  jmp    0847abe7 <+0x7587>
08473fba +0x095a:  cmp    $0x17c0,%eax
08473fbf +0x095f:  je     0847912b <+0x5acb>
08473fc5 +0x0965:  cmp    $0x17c2,%eax
08473fca +0x096a:  je     084791c5 <+0x5b65>
08473fd0 +0x0970:  jmp    0847abe7 <+0x7587>
08473fd5 +0x0975:  cmp    $0x2332,%eax
08473fda +0x097a:  je     08478948 <+0x52e8>
08473fe0 +0x0980:  cmp    $0x2332,%eax
08473fe5 +0x0985:  jg     08474145 <+0xae5>
08473feb +0x098b:  cmp    $0x1bbd,%eax
08473ff0 +0x0990:  je     084798d6 <+0x6276>
08473ff6 +0x0996:  cmp    $0x1bbd,%eax
08473ffb +0x099b:  jg     084740a3 <+0xa43>
08474001 +0x09a1:  cmp    $0x1b64,%eax
08474006 +0x09a6:  je     084796aa <+0x604a>
0847400c +0x09ac:  cmp    $0x1b64,%eax
08474011 +0x09b1:  jg     0847405b <+0x9fb>
08474013 +0x09b3:  cmp    $0x1b61,%eax
08474018 +0x09b8:  je     084794d2 <+0x5e72>
0847401e +0x09be:  cmp    $0x1b61,%eax
08474023 +0x09c3:  jg     08474040 <+0x9e0>
08474025 +0x09c5:  cmp    $0x1b5d,%eax
0847402a +0x09ca:  je     08479394 <+0x5d34>
08474030 +0x09d0:  cmp    $0x1b5f,%eax
08474035 +0x09d5:  je     08479433 <+0x5dd3>
0847403b +0x09db:  jmp    0847abe7 <+0x7587>
08474040 +0x09e0:  cmp    $0x1b62,%eax
08474045 +0x09e5:  je     08479571 <+0x5f11>
0847404b +0x09eb:  cmp    $0x1b63,%eax
08474050 +0x09f0:  je     08479610 <+0x5fb0>
08474056 +0x09f6:  jmp    0847abe7 <+0x7587>
0847405b +0x09fb:  cmp    $0x1b6a,%eax
08474060 +0x0a00:  je     08477dab <+0x474b>
08474066 +0x0a06:  cmp    $0x1b6a,%eax
0847406b +0x0a0b:  jg     08474088 <+0xa28>
0847406d +0x0a0d:  cmp    $0x1b65,%eax
08474072 +0x0a12:  je     08479744 <+0x60e4>
08474078 +0x0a18:  cmp    $0x1b66,%eax
0847407d +0x0a1d:  je     0847925f <+0x5bff>
08474083 +0x0a23:  jmp    0847abe7 <+0x7587>
08474088 +0x0a28:  cmp    $0x1b6c,%eax
0847408d +0x0a2d:  je     08479b48 <+0x64e8>
08474093 +0x0a33:  cmp    $0x1b6d,%eax
08474098 +0x0a38:  je     08479be2 <+0x6582>
0847409e +0x0a3e:  jmp    0847abe7 <+0x7587>
084740a3 +0x0a43:  cmp    $0x1f42,%eax
084740a8 +0x0a48:  je     08479aae <+0x644e>
084740ae +0x0a4e:  cmp    $0x1f42,%eax
084740b3 +0x0a53:  jg     084740fd <+0xa9d>
084740b5 +0x0a55:  cmp    $0x1bc7,%eax
084740ba +0x0a5a:  je     08479f5b <+0x68fb>
084740c0 +0x0a60:  cmp    $0x1bc7,%eax
084740c5 +0x0a65:  jg     084740e2 <+0xa82>
084740c7 +0x0a67:  cmp    $0x1bc1,%eax
084740cc +0x0a6c:  je     08479975 <+0x6315>
084740d2 +0x0a72:  cmp    $0x1bc3,%eax
084740d7 +0x0a77:  je     08479ec8 <+0x6868>
084740dd +0x0a7d:  jmp    0847abe7 <+0x7587>
084740e2 +0x0a82:  cmp    $0x1bc8,%eax
084740e7 +0x0a87:  je     08479fee <+0x698e>
084740ed +0x0a8d:  cmp    $0x1f40,%eax
084740f2 +0x0a92:  je     08479a14 <+0x63b4>
084740f8 +0x0a98:  jmp    0847abe7 <+0x7587>
084740fd +0x0a9d:  cmp    $0x1f4b,%eax
08474102 +0x0aa2:  je     08479da2 <+0x6742>
08474108 +0x0aa8:  cmp    $0x1f4b,%eax
0847410d +0x0aad:  jg     0847412a <+0xaca>
0847410f +0x0aaf:  cmp    $0x1f45,%eax
08474114 +0x0ab4:  je     08479c7c <+0x661c>
0847411a +0x0aba:  cmp    $0x1f4a,%eax
0847411f +0x0abf:  je     08479d11 <+0x66b1>
08474125 +0x0ac5:  jmp    0847abe7 <+0x7587>
0847412a +0x0aca:  cmp    $0x1f4c,%eax
0847412f +0x0acf:  je     08479e33 <+0x67d3>
08474135 +0x0ad5:  cmp    $0x2328,%eax
0847413a +0x0ada:  je     084788a7 <+0x5247>
08474140 +0x0ae0:  jmp    0847abe7 <+0x7587>
08474145 +0x0ae5:  cmp    $0x27dc,%eax
0847414a +0x0aea:  je     0847a79c <+0x713c>
08474150 +0x0af0:  cmp    $0x27dc,%eax
08474155 +0x0af5:  jg     084741fd <+0xb9d>
0847415b +0x0afb:  cmp    $0x2719,%eax
08474160 +0x0b00:  je     0847a430 <+0x6dd0>
08474166 +0x0b06:  cmp    $0x2719,%eax
0847416b +0x0b0b:  jg     084741b5 <+0xb55>
0847416d +0x0b0d:  cmp    $0x2713,%eax
08474172 +0x0b12:  je     0847a35c <+0x6cfc>
08474178 +0x0b18:  cmp    $0x2713,%eax
0847417d +0x0b1d:  jg     0847419a <+0xb3a>
0847417f +0x0b1f:  cmp    $0x2711,%eax
08474184 +0x0b24:  je     0847a1e7 <+0x6b87>
0847418a +0x0b2a:  cmp    $0x2712,%eax
0847418f +0x0b2f:  je     0847a31b <+0x6cbb>
08474195 +0x0b35:  jmp    0847abe7 <+0x7587>
0847419a +0x0b3a:  cmp    $0x2717,%eax
0847419f +0x0b3f:  je     0847a272 <+0x6c12>
084741a5 +0x0b45:  cmp    $0x2718,%eax
084741aa +0x0b4a:  je     0847a39d <+0x6d3d>
084741b0 +0x0b50:  jmp    0847abe7 <+0x7587>
084741b5 +0x0b55:  cmp    $0x27d9,%eax
084741ba +0x0b5a:  je     0847a5e7 <+0x6f87>
084741c0 +0x0b60:  cmp    $0x27d9,%eax
084741c5 +0x0b65:  jg     084741e2 <+0xb82>
084741c7 +0x0b67:  cmp    $0x271a,%eax
084741cc +0x0b6c:  je     0847a4c3 <+0x6e63>
084741d2 +0x0b72:  cmp    $0x271b,%eax
084741d7 +0x0b77:  je     0847a556 <+0x6ef6>
084741dd +0x0b7d:  jmp    0847abe7 <+0x7587>
084741e2 +0x0b82:  cmp    $0x27da,%eax
084741e7 +0x0b87:  je     0847a678 <+0x7018>
084741ed +0x0b8d:  cmp    $0x27db,%eax
084741f2 +0x0b92:  je     0847a70b <+0x70ab>
084741f8 +0x0b98:  jmp    0847abe7 <+0x7587>
084741fd +0x0b9d:  cmp    $0x27f2,%eax
08474202 +0x0ba2:  je     0847aa77 <+0x7417>
08474208 +0x0ba8:  cmp    $0x27f2,%eax
0847420d +0x0bad:  jg     08474257 <+0xbf7>
0847420f +0x0baf:  cmp    $0x27e7,%eax
08474214 +0x0bb4:  je     0847a9e6 <+0x7386>
0847421a +0x0bba:  cmp    $0x27e7,%eax
0847421f +0x0bbf:  jg     0847423c <+0xbdc>
08474221 +0x0bc1:  cmp    $0x27df,%eax
08474226 +0x0bc6:  je     0847a82d <+0x71cd>
0847422c +0x0bcc:  cmp    $0x27e2,%eax
08474231 +0x0bd1:  je     084744e8 <+0xe88>
08474237 +0x0bd7:  jmp    0847abe7 <+0x7587>
0847423c +0x0bdc:  cmp    $0x27e8,%eax
08474241 +0x0be1:  je     0847a8c0 <+0x7260>
08474247 +0x0be7:  cmp    $0x27e9,%eax
0847424c +0x0bec:  je     0847a955 <+0x72f5>
08474252 +0x0bf2:  jmp    0847abe7 <+0x7587>
08474257 +0x0bf7:  cmp    $0x27fa,%eax
0847425c +0x0bfc:  je     0847985a <+0x61fa>
08474262 +0x0c02:  cmp    $0x27fa,%eax
08474267 +0x0c07:  jg     08474284 <+0xc24>
08474269 +0x0c09:  cmp    $0x27f8,%eax
0847426e +0x0c0e:  je     0847ab08 <+0x74a8>
08474274 +0x0c14:  cmp    $0x27f9,%eax
08474279 +0x0c19:  je     084797de <+0x617e>
0847427f +0x0c1f:  jmp    0847abe7 <+0x7587>
08474284 +0x0c24:  cmp    $0x27fe,%eax
08474289 +0x0c29:  je     0847ab96 <+0x7536>
0847428f +0x0c2f:  cmp    $0x27ff,%eax
08474294 +0x0c34:  je     0847abd8 <+0x7578>
0847429a +0x0c3a:  jmp    0847abe7 <+0x7587>
0847429f +0x0c3f:  mov    0x8(%ebp),%eax
084742a2 +0x0c42:  mov    %eax,-0x2d4(%ebp)
084742a8 +0x0c48:  lea    -0x310(%ebp),%eax
084742ae +0x0c4e:  mov    %eax,(%esp)
084742b1 +0x0c51:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084742b6 +0x0c56:  movl   $0x41,0x4(%esp)
084742be +0x0c5e:  mov    %eax,(%esp)
084742c1 +0x0c61:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084742c6 +0x0c66:  mov    -0x2d4(%ebp),%eax
084742cc +0x0c6c:  mov    0xa(%eax),%ebx
084742cf +0x0c6f:  lea    -0x310(%ebp),%eax
084742d5 +0x0c75:  mov    %eax,(%esp)
084742d8 +0x0c78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084742dd +0x0c7d:  mov    %ebx,0x4(%esp)
084742e1 +0x0c81:  mov    %eax,(%esp)
084742e4 +0x0c84:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084742e9 +0x0c89:  lea    -0x310(%ebp),%eax
084742ef +0x0c8f:  mov    %eax,(%esp)
084742f2 +0x0c92:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084742f7 +0x0c97:  movl   $0x33,0x8(%esp)
084742ff +0x0c9f:  mov    -0x2d4(%ebp),%edx
08474305 +0x0ca5:  mov    %edx,0x4(%esp)
08474309 +0x0ca9:  mov    %eax,(%esp)
0847430c +0x0cac:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474311 +0x0cb1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474316 +0x0cb6:  lea    -0x310(%ebp),%edx
0847431c +0x0cbc:  mov    %edx,0x8(%esp)
08474320 +0x0cc0:  movl   $0x1,0x4(%esp)
08474328 +0x0cc8:  mov    %eax,(%esp)
0847432b +0x0ccb:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474330 +0x0cd0:  jmp    0847abfb <+0x759b>
08474335 +0x0cd5:  mov    0x8(%ebp),%eax
08474338 +0x0cd8:  mov    %eax,-0x2d0(%ebp)
0847433e +0x0cde:  lea    -0x310(%ebp),%eax
08474344 +0x0ce4:  mov    %eax,(%esp)
08474347 +0x0ce7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847434c +0x0cec:  movl   $0x42,0x4(%esp)
08474354 +0x0cf4:  mov    %eax,(%esp)
08474357 +0x0cf7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847435c +0x0cfc:  lea    -0x310(%ebp),%eax
08474362 +0x0d02:  mov    %eax,(%esp)
08474365 +0x0d05:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847436a +0x0d0a:  movl   $0xffffffff,0x4(%esp)
08474372 +0x0d12:  mov    %eax,(%esp)
08474375 +0x0d15:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847437a +0x0d1a:  lea    -0x310(%ebp),%eax
08474380 +0x0d20:  mov    %eax,(%esp)
08474383 +0x0d23:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474388 +0x0d28:  movl   $0xb,0x8(%esp)
08474390 +0x0d30:  mov    -0x2d0(%ebp),%edx
08474396 +0x0d36:  mov    %edx,0x4(%esp)
0847439a +0x0d3a:  mov    %eax,(%esp)
0847439d +0x0d3d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084743a2 +0x0d42:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084743a7 +0x0d47:  lea    -0x310(%ebp),%edx
084743ad +0x0d4d:  mov    %edx,0x8(%esp)
084743b1 +0x0d51:  movl   $0x1,0x4(%esp)
084743b9 +0x0d59:  mov    %eax,(%esp)
084743bc +0x0d5c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084743c1 +0x0d61:  jmp    0847abfb <+0x759b>
084743c6 +0x0d66:  mov    0x8(%ebp),%eax
084743c9 +0x0d69:  mov    %eax,-0x2cc(%ebp)
084743cf +0x0d6f:  lea    -0x310(%ebp),%eax
084743d5 +0x0d75:  mov    %eax,(%esp)
084743d8 +0x0d78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084743dd +0x0d7d:  movl   $0x12d,0x4(%esp)
084743e5 +0x0d85:  mov    %eax,(%esp)
084743e8 +0x0d88:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084743ed +0x0d8d:  lea    -0x310(%ebp),%eax
084743f3 +0x0d93:  mov    %eax,(%esp)
084743f6 +0x0d96:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084743fb +0x0d9b:  movl   $0xffffffff,0x4(%esp)
08474403 +0x0da3:  mov    %eax,(%esp)
08474406 +0x0da6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847440b +0x0dab:  lea    -0x310(%ebp),%eax
08474411 +0x0db1:  mov    %eax,(%esp)
08474414 +0x0db4:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474419 +0x0db9:  movl   $0xa,0x8(%esp)
08474421 +0x0dc1:  mov    -0x2cc(%ebp),%edx
08474427 +0x0dc7:  mov    %edx,0x4(%esp)
0847442b +0x0dcb:  mov    %eax,(%esp)
0847442e +0x0dce:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474433 +0x0dd3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474438 +0x0dd8:  lea    -0x310(%ebp),%edx
0847443e +0x0dde:  mov    %edx,0x8(%esp)
08474442 +0x0de2:  movl   $0x1,0x4(%esp)
0847444a +0x0dea:  mov    %eax,(%esp)
0847444d +0x0ded:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474452 +0x0df2:  jmp    0847abfb <+0x759b>
08474457 +0x0df7:  mov    0x8(%ebp),%eax
0847445a +0x0dfa:  mov    %eax,-0x2c8(%ebp)
08474460 +0x0e00:  lea    -0x310(%ebp),%eax
08474466 +0x0e06:  mov    %eax,(%esp)
08474469 +0x0e09:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847446e +0x0e0e:  movl   $0x43,0x4(%esp)
08474476 +0x0e16:  mov    %eax,(%esp)
08474479 +0x0e19:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847447e +0x0e1e:  lea    -0x310(%ebp),%eax
08474484 +0x0e24:  mov    %eax,(%esp)
08474487 +0x0e27:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847448c +0x0e2c:  movl   $0xffffffff,0x4(%esp)
08474494 +0x0e34:  mov    %eax,(%esp)
08474497 +0x0e37:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847449c +0x0e3c:  lea    -0x310(%ebp),%eax
084744a2 +0x0e42:  mov    %eax,(%esp)
084744a5 +0x0e45:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084744aa +0x0e4a:  movl   $0xe,0x8(%esp)
084744b2 +0x0e52:  mov    -0x2c8(%ebp),%edx
084744b8 +0x0e58:  mov    %edx,0x4(%esp)
084744bc +0x0e5c:  mov    %eax,(%esp)
084744bf +0x0e5f:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084744c4 +0x0e64:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084744c9 +0x0e69:  lea    -0x310(%ebp),%edx
084744cf +0x0e6f:  mov    %edx,0x8(%esp)
084744d3 +0x0e73:  movl   $0x1,0x4(%esp)
084744db +0x0e7b:  mov    %eax,(%esp)
084744de +0x0e7e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084744e3 +0x0e83:  jmp    0847abfb <+0x759b>
084744e8 +0x0e88:  mov    0x8(%ebp),%eax
084744eb +0x0e8b:  mov    %eax,-0x2c4(%ebp)
084744f1 +0x0e91:  lea    -0x310(%ebp),%eax
084744f7 +0x0e97:  mov    %eax,(%esp)
084744fa +0x0e9a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084744ff +0x0e9f:  movl   $0x2f7,0x4(%esp)
08474507 +0x0ea7:  mov    %eax,(%esp)
0847450a +0x0eaa:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847450f +0x0eaf:  lea    -0x310(%ebp),%eax
08474515 +0x0eb5:  mov    %eax,(%esp)
08474518 +0x0eb8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847451d +0x0ebd:  movl   $0xffffffff,0x4(%esp)
08474525 +0x0ec5:  mov    %eax,(%esp)
08474528 +0x0ec8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847452d +0x0ecd:  lea    -0x310(%ebp),%eax
08474533 +0x0ed3:  mov    %eax,(%esp)
08474536 +0x0ed6:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847453b +0x0edb:  movl   $0xa,0x8(%esp)
08474543 +0x0ee3:  mov    -0x2c4(%ebp),%edx
08474549 +0x0ee9:  mov    %edx,0x4(%esp)
0847454d +0x0eed:  mov    %eax,(%esp)
08474550 +0x0ef0:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474555 +0x0ef5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847455a +0x0efa:  lea    -0x310(%ebp),%edx
08474560 +0x0f00:  mov    %edx,0x8(%esp)
08474564 +0x0f04:  movl   $0x1,0x4(%esp)
0847456c +0x0f0c:  mov    %eax,(%esp)
0847456f +0x0f0f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474574 +0x0f14:  jmp    0847abfb <+0x759b>
08474579 +0x0f19:  mov    0x8(%ebp),%eax
0847457c +0x0f1c:  mov    %eax,-0x2c0(%ebp)
08474582 +0x0f22:  lea    -0x310(%ebp),%eax
08474588 +0x0f28:  mov    %eax,(%esp)
0847458b +0x0f2b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474590 +0x0f30:  movl   $0x121,0x4(%esp)
08474598 +0x0f38:  mov    %eax,(%esp)
0847459b +0x0f3b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084745a0 +0x0f40:  lea    -0x310(%ebp),%eax
084745a6 +0x0f46:  mov    %eax,(%esp)
084745a9 +0x0f49:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084745ae +0x0f4e:  movl   $0xffffffff,0x4(%esp)
084745b6 +0x0f56:  mov    %eax,(%esp)
084745b9 +0x0f59:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084745be +0x0f5e:  lea    -0x310(%ebp),%eax
084745c4 +0x0f64:  mov    %eax,(%esp)
084745c7 +0x0f67:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084745cc +0x0f6c:  movl   $0xb,0x8(%esp)
084745d4 +0x0f74:  mov    -0x2c0(%ebp),%edx
084745da +0x0f7a:  mov    %edx,0x4(%esp)
084745de +0x0f7e:  mov    %eax,(%esp)
084745e1 +0x0f81:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084745e6 +0x0f86:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084745eb +0x0f8b:  lea    -0x310(%ebp),%edx
084745f1 +0x0f91:  mov    %edx,0x8(%esp)
084745f5 +0x0f95:  movl   $0x1,0x4(%esp)
084745fd +0x0f9d:  mov    %eax,(%esp)
08474600 +0x0fa0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474605 +0x0fa5:  jmp    0847abfb <+0x759b>
0847460a +0x0faa:  mov    0x8(%ebp),%eax
0847460d +0x0fad:  mov    %eax,-0x2bc(%ebp)
08474613 +0x0fb3:  lea    -0x310(%ebp),%eax
08474619 +0x0fb9:  mov    %eax,(%esp)
0847461c +0x0fbc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474621 +0x0fc1:  movl   $0xab,0x4(%esp)
08474629 +0x0fc9:  mov    %eax,(%esp)
0847462c +0x0fcc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474631 +0x0fd1:  mov    -0x2bc(%ebp),%eax
08474637 +0x0fd7:  mov    0xa(%eax),%ebx
0847463a +0x0fda:  lea    -0x310(%ebp),%eax
08474640 +0x0fe0:  mov    %eax,(%esp)
08474643 +0x0fe3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474648 +0x0fe8:  mov    %ebx,0x4(%esp)
0847464c +0x0fec:  mov    %eax,(%esp)
0847464f +0x0fef:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474654 +0x0ff4:  lea    -0x310(%ebp),%eax
0847465a +0x0ffa:  mov    %eax,(%esp)
0847465d +0x0ffd:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474662 +0x1002:  movl   $0x19f,0x8(%esp)
0847466a +0x100a:  mov    -0x2bc(%ebp),%edx
08474670 +0x1010:  mov    %edx,0x4(%esp)
08474674 +0x1014:  mov    %eax,(%esp)
08474677 +0x1017:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847467c +0x101c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474681 +0x1021:  lea    -0x310(%ebp),%edx
08474687 +0x1027:  mov    %edx,0x8(%esp)
0847468b +0x102b:  movl   $0x1,0x4(%esp)
08474693 +0x1033:  mov    %eax,(%esp)
08474696 +0x1036:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847469b +0x103b:  jmp    0847abfb <+0x759b>
084746a0 +0x1040:  mov    0x8(%ebp),%eax
084746a3 +0x1043:  mov    %eax,-0x2b8(%ebp)
084746a9 +0x1049:  lea    -0x310(%ebp),%eax
084746af +0x104f:  mov    %eax,(%esp)
084746b2 +0x1052:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084746b7 +0x1057:  movl   $0xac,0x4(%esp)
084746bf +0x105f:  mov    %eax,(%esp)
084746c2 +0x1062:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084746c7 +0x1067:  mov    -0x2b8(%ebp),%eax
084746cd +0x106d:  mov    0xa(%eax),%eax
084746d0 +0x1070:  mov    %eax,%ebx
084746d2 +0x1072:  lea    -0x310(%ebp),%eax
084746d8 +0x1078:  mov    %eax,(%esp)
084746db +0x107b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084746e0 +0x1080:  mov    %ebx,0x4(%esp)
084746e4 +0x1084:  mov    %eax,(%esp)
084746e7 +0x1087:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084746ec +0x108c:  lea    -0x310(%ebp),%eax
084746f2 +0x1092:  mov    %eax,(%esp)
084746f5 +0x1095:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084746fa +0x109a:  movl   $0x31,0x8(%esp)
08474702 +0x10a2:  mov    -0x2b8(%ebp),%edx
08474708 +0x10a8:  mov    %edx,0x4(%esp)
0847470c +0x10ac:  mov    %eax,(%esp)
0847470f +0x10af:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474714 +0x10b4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474719 +0x10b9:  lea    -0x310(%ebp),%edx
0847471f +0x10bf:  mov    %edx,0x8(%esp)
08474723 +0x10c3:  movl   $0x1,0x4(%esp)
0847472b +0x10cb:  mov    %eax,(%esp)
0847472e +0x10ce:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474733 +0x10d3:  jmp    0847abfb <+0x759b>
08474738 +0x10d8:  mov    0x8(%ebp),%eax
0847473b +0x10db:  mov    %eax,-0x2b4(%ebp)
08474741 +0x10e1:  lea    -0x310(%ebp),%eax
08474747 +0x10e7:  mov    %eax,(%esp)
0847474a +0x10ea:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847474f +0x10ef:  movl   $0xad,0x4(%esp)
08474757 +0x10f7:  mov    %eax,(%esp)
0847475a +0x10fa:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847475f +0x10ff:  mov    -0x2b4(%ebp),%eax
08474765 +0x1105:  mov    0xa(%eax),%eax
08474768 +0x1108:  mov    %eax,%ebx
0847476a +0x110a:  lea    -0x310(%ebp),%eax
08474770 +0x1110:  mov    %eax,(%esp)
08474773 +0x1113:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474778 +0x1118:  mov    %ebx,0x4(%esp)
0847477c +0x111c:  mov    %eax,(%esp)
0847477f +0x111f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474784 +0x1124:  lea    -0x310(%ebp),%eax
0847478a +0x112a:  mov    %eax,(%esp)
0847478d +0x112d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474792 +0x1132:  movl   $0x31,0x8(%esp)
0847479a +0x113a:  mov    -0x2b4(%ebp),%edx
084747a0 +0x1140:  mov    %edx,0x4(%esp)
084747a4 +0x1144:  mov    %eax,(%esp)
084747a7 +0x1147:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084747ac +0x114c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084747b1 +0x1151:  lea    -0x310(%ebp),%edx
084747b7 +0x1157:  mov    %edx,0x8(%esp)
084747bb +0x115b:  movl   $0x1,0x4(%esp)
084747c3 +0x1163:  mov    %eax,(%esp)
084747c6 +0x1166:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084747cb +0x116b:  jmp    0847abfb <+0x759b>
084747d0 +0x1170:  mov    0x8(%ebp),%eax
084747d3 +0x1173:  mov    %eax,-0x2b0(%ebp)
084747d9 +0x1179:  lea    -0x310(%ebp),%eax
084747df +0x117f:  mov    %eax,(%esp)
084747e2 +0x1182:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084747e7 +0x1187:  movl   $0x44,0x4(%esp)
084747ef +0x118f:  mov    %eax,(%esp)
084747f2 +0x1192:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084747f7 +0x1197:  mov    -0x2b0(%ebp),%eax
084747fd +0x119d:  mov    0xe(%eax),%eax
08474800 +0x11a0:  mov    %eax,%ebx
08474802 +0x11a2:  lea    -0x310(%ebp),%eax
08474808 +0x11a8:  mov    %eax,(%esp)
0847480b +0x11ab:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474810 +0x11b0:  mov    %ebx,0x4(%esp)
08474814 +0x11b4:  mov    %eax,(%esp)
08474817 +0x11b7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847481c +0x11bc:  lea    -0x310(%ebp),%eax
08474822 +0x11c2:  mov    %eax,(%esp)
08474825 +0x11c5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847482a +0x11ca:  movl   $0x34,0x8(%esp)
08474832 +0x11d2:  mov    -0x2b0(%ebp),%edx
08474838 +0x11d8:  mov    %edx,0x4(%esp)
0847483c +0x11dc:  mov    %eax,(%esp)
0847483f +0x11df:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474844 +0x11e4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474849 +0x11e9:  lea    -0x310(%ebp),%edx
0847484f +0x11ef:  mov    %edx,0x8(%esp)
08474853 +0x11f3:  movl   $0x1,0x4(%esp)
0847485b +0x11fb:  mov    %eax,(%esp)
0847485e +0x11fe:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474863 +0x1203:  jmp    0847abfb <+0x759b>
08474868 +0x1208:  mov    0x8(%ebp),%eax
0847486b +0x120b:  mov    %eax,-0x2ac(%ebp)
08474871 +0x1211:  lea    -0x310(%ebp),%eax
08474877 +0x1217:  mov    %eax,(%esp)
0847487a +0x121a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847487f +0x121f:  movl   $0xae,0x4(%esp)
08474887 +0x1227:  mov    %eax,(%esp)
0847488a +0x122a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847488f +0x122f:  mov    -0x2ac(%ebp),%eax
08474895 +0x1235:  mov    0xe(%eax),%eax
08474898 +0x1238:  mov    %eax,%ebx
0847489a +0x123a:  lea    -0x310(%ebp),%eax
084748a0 +0x1240:  mov    %eax,(%esp)
084748a3 +0x1243:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084748a8 +0x1248:  mov    %ebx,0x4(%esp)
084748ac +0x124c:  mov    %eax,(%esp)
084748af +0x124f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084748b4 +0x1254:  lea    -0x310(%ebp),%eax
084748ba +0x125a:  mov    %eax,(%esp)
084748bd +0x125d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084748c2 +0x1262:  movl   $0x3b,0x8(%esp)
084748ca +0x126a:  mov    -0x2ac(%ebp),%edx
084748d0 +0x1270:  mov    %edx,0x4(%esp)
084748d4 +0x1274:  mov    %eax,(%esp)
084748d7 +0x1277:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084748dc +0x127c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084748e1 +0x1281:  lea    -0x310(%ebp),%edx
084748e7 +0x1287:  mov    %edx,0x8(%esp)
084748eb +0x128b:  movl   $0x1,0x4(%esp)
084748f3 +0x1293:  mov    %eax,(%esp)
084748f6 +0x1296:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084748fb +0x129b:  jmp    0847abfb <+0x759b>
08474900 +0x12a0:  mov    0x8(%ebp),%eax
08474903 +0x12a3:  mov    %eax,-0x2a8(%ebp)
08474909 +0x12a9:  lea    -0x310(%ebp),%eax
0847490f +0x12af:  mov    %eax,(%esp)
08474912 +0x12b2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474917 +0x12b7:  movl   $0x46,0x4(%esp)
0847491f +0x12bf:  mov    %eax,(%esp)
08474922 +0x12c2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474927 +0x12c7:  lea    -0x310(%ebp),%eax
0847492d +0x12cd:  mov    %eax,(%esp)
08474930 +0x12d0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474935 +0x12d5:  movl   $0xffffffff,0x4(%esp)
0847493d +0x12dd:  mov    %eax,(%esp)
08474940 +0x12e0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474945 +0x12e5:  mov    -0x2a8(%ebp),%eax
0847494b +0x12eb:  movzwl 0x2(%eax),%eax
0847494f +0x12ef:  movzwl %ax,%ebx
08474952 +0x12f2:  lea    -0x310(%ebp),%eax
08474958 +0x12f8:  mov    %eax,(%esp)
0847495b +0x12fb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474960 +0x1300:  mov    %ebx,0x8(%esp)
08474964 +0x1304:  mov    -0x2a8(%ebp),%edx
0847496a +0x130a:  mov    %edx,0x4(%esp)
0847496e +0x130e:  mov    %eax,(%esp)
08474971 +0x1311:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474976 +0x1316:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847497b +0x131b:  lea    -0x310(%ebp),%edx
08474981 +0x1321:  mov    %edx,0x8(%esp)
08474985 +0x1325:  movl   $0x1,0x4(%esp)
0847498d +0x132d:  mov    %eax,(%esp)
08474990 +0x1330:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474995 +0x1335:  jmp    0847abfb <+0x759b>
0847499a +0x133a:  mov    0x8(%ebp),%eax
0847499d +0x133d:  mov    %eax,-0x2a4(%ebp)
084749a3 +0x1343:  lea    -0x310(%ebp),%eax
084749a9 +0x1349:  mov    %eax,(%esp)
084749ac +0x134c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084749b1 +0x1351:  movl   $0x47,0x4(%esp)
084749b9 +0x1359:  mov    %eax,(%esp)
084749bc +0x135c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084749c1 +0x1361:  lea    -0x310(%ebp),%eax
084749c7 +0x1367:  mov    %eax,(%esp)
084749ca +0x136a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084749cf +0x136f:  movl   $0xffffffff,0x4(%esp)
084749d7 +0x1377:  mov    %eax,(%esp)
084749da +0x137a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084749df +0x137f:  lea    -0x310(%ebp),%eax
084749e5 +0x1385:  mov    %eax,(%esp)
084749e8 +0x1388:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084749ed +0x138d:  movl   $0xe,0x8(%esp)
084749f5 +0x1395:  mov    -0x2a4(%ebp),%edx
084749fb +0x139b:  mov    %edx,0x4(%esp)
084749ff +0x139f:  mov    %eax,(%esp)
08474a02 +0x13a2:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474a07 +0x13a7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474a0c +0x13ac:  lea    -0x310(%ebp),%edx
08474a12 +0x13b2:  mov    %edx,0x8(%esp)
08474a16 +0x13b6:  movl   $0x1,0x4(%esp)
08474a1e +0x13be:  mov    %eax,(%esp)
08474a21 +0x13c1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474a26 +0x13c6:  jmp    0847abfb <+0x759b>
08474a2b +0x13cb:  mov    0x8(%ebp),%eax
08474a2e +0x13ce:  mov    %eax,-0x2a0(%ebp)
08474a34 +0x13d4:  lea    -0x310(%ebp),%eax
08474a3a +0x13da:  mov    %eax,(%esp)
08474a3d +0x13dd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474a42 +0x13e2:  movl   $0x4a,0x4(%esp)
08474a4a +0x13ea:  mov    %eax,(%esp)
08474a4d +0x13ed:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474a52 +0x13f2:  lea    -0x310(%ebp),%eax
08474a58 +0x13f8:  mov    %eax,(%esp)
08474a5b +0x13fb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474a60 +0x1400:  movl   $0xffffffff,0x4(%esp)
08474a68 +0x1408:  mov    %eax,(%esp)
08474a6b +0x140b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474a70 +0x1410:  lea    -0x310(%ebp),%eax
08474a76 +0x1416:  mov    %eax,(%esp)
08474a79 +0x1419:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474a7e +0x141e:  movl   $0x22,0x8(%esp)
08474a86 +0x1426:  mov    -0x2a0(%ebp),%edx
08474a8c +0x142c:  mov    %edx,0x4(%esp)
08474a90 +0x1430:  mov    %eax,(%esp)
08474a93 +0x1433:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474a98 +0x1438:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474a9d +0x143d:  lea    -0x310(%ebp),%edx
08474aa3 +0x1443:  mov    %edx,0x8(%esp)
08474aa7 +0x1447:  movl   $0x1,0x4(%esp)
08474aaf +0x144f:  mov    %eax,(%esp)
08474ab2 +0x1452:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474ab7 +0x1457:  jmp    0847abfb <+0x759b>
08474abc +0x145c:  mov    0x8(%ebp),%eax
08474abf +0x145f:  mov    %eax,-0x29c(%ebp)
08474ac5 +0x1465:  lea    -0x310(%ebp),%eax
08474acb +0x146b:  mov    %eax,(%esp)
08474ace +0x146e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474ad3 +0x1473:  movl   $0x62,0x4(%esp)
08474adb +0x147b:  mov    %eax,(%esp)
08474ade +0x147e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474ae3 +0x1483:  mov    -0x29c(%ebp),%eax
08474ae9 +0x1489:  mov    0x29(%eax),%ebx
08474aec +0x148c:  lea    -0x310(%ebp),%eax
08474af2 +0x1492:  mov    %eax,(%esp)
08474af5 +0x1495:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474afa +0x149a:  mov    %ebx,0x4(%esp)
08474afe +0x149e:  mov    %eax,(%esp)
08474b01 +0x14a1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474b06 +0x14a6:  lea    -0x310(%ebp),%eax
08474b0c +0x14ac:  mov    %eax,(%esp)
08474b0f +0x14af:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474b14 +0x14b4:  movl   $0x2d,0x8(%esp)
08474b1c +0x14bc:  mov    -0x29c(%ebp),%edx
08474b22 +0x14c2:  mov    %edx,0x4(%esp)
08474b26 +0x14c6:  mov    %eax,(%esp)
08474b29 +0x14c9:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474b2e +0x14ce:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474b33 +0x14d3:  lea    -0x310(%ebp),%edx
08474b39 +0x14d9:  mov    %edx,0x8(%esp)
08474b3d +0x14dd:  movl   $0x1,0x4(%esp)
08474b45 +0x14e5:  mov    %eax,(%esp)
08474b48 +0x14e8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474b4d +0x14ed:  jmp    0847abfb <+0x759b>
08474b52 +0x14f2:  mov    0x8(%ebp),%eax
08474b55 +0x14f5:  mov    %eax,-0x298(%ebp)
08474b5b +0x14fb:  lea    -0x310(%ebp),%eax
08474b61 +0x1501:  mov    %eax,(%esp)
08474b64 +0x1504:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474b69 +0x1509:  movl   $0x61,0x4(%esp)
08474b71 +0x1511:  mov    %eax,(%esp)
08474b74 +0x1514:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474b79 +0x1519:  mov    -0x298(%ebp),%eax
08474b7f +0x151f:  mov    0xa(%eax),%ebx
08474b82 +0x1522:  lea    -0x310(%ebp),%eax
08474b88 +0x1528:  mov    %eax,(%esp)
08474b8b +0x152b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474b90 +0x1530:  mov    %ebx,0x4(%esp)
08474b94 +0x1534:  mov    %eax,(%esp)
08474b97 +0x1537:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474b9c +0x153c:  lea    -0x310(%ebp),%eax
08474ba2 +0x1542:  mov    %eax,(%esp)
08474ba5 +0x1545:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474baa +0x154a:  movl   $0x16,0x8(%esp)
08474bb2 +0x1552:  mov    -0x298(%ebp),%edx
08474bb8 +0x1558:  mov    %edx,0x4(%esp)
08474bbc +0x155c:  mov    %eax,(%esp)
08474bbf +0x155f:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474bc4 +0x1564:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474bc9 +0x1569:  lea    -0x310(%ebp),%edx
08474bcf +0x156f:  mov    %edx,0x8(%esp)
08474bd3 +0x1573:  movl   $0x1,0x4(%esp)
08474bdb +0x157b:  mov    %eax,(%esp)
08474bde +0x157e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474be3 +0x1583:  jmp    0847abfb <+0x759b>
08474be8 +0x1588:  mov    0x8(%ebp),%eax
08474beb +0x158b:  mov    %eax,-0x294(%ebp)
08474bf1 +0x1591:  lea    -0x310(%ebp),%eax
08474bf7 +0x1597:  mov    %eax,(%esp)
08474bfa +0x159a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474bff +0x159f:  movl   $0x60,0x4(%esp)
08474c07 +0x15a7:  mov    %eax,(%esp)
08474c0a +0x15aa:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474c0f +0x15af:  mov    -0x294(%ebp),%eax
08474c15 +0x15b5:  mov    0xa(%eax),%eax
08474c18 +0x15b8:  mov    %eax,%ebx
08474c1a +0x15ba:  lea    -0x310(%ebp),%eax
08474c20 +0x15c0:  mov    %eax,(%esp)
08474c23 +0x15c3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474c28 +0x15c8:  mov    %ebx,0x4(%esp)
08474c2c +0x15cc:  mov    %eax,(%esp)
08474c2f +0x15cf:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474c34 +0x15d4:  lea    -0x310(%ebp),%eax
08474c3a +0x15da:  mov    %eax,(%esp)
08474c3d +0x15dd:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474c42 +0x15e2:  movl   $0x139,0x8(%esp)
08474c4a +0x15ea:  mov    -0x294(%ebp),%edx
08474c50 +0x15f0:  mov    %edx,0x4(%esp)
08474c54 +0x15f4:  mov    %eax,(%esp)
08474c57 +0x15f7:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474c5c +0x15fc:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474c61 +0x1601:  lea    -0x310(%ebp),%edx
08474c67 +0x1607:  mov    %edx,0x8(%esp)
08474c6b +0x160b:  movl   $0x1,0x4(%esp)
08474c73 +0x1613:  mov    %eax,(%esp)
08474c76 +0x1616:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474c7b +0x161b:  jmp    0847abfb <+0x759b>
08474c80 +0x1620:  mov    0x8(%ebp),%eax
08474c83 +0x1623:  mov    %eax,-0x290(%ebp)
08474c89 +0x1629:  lea    -0x310(%ebp),%eax
08474c8f +0x162f:  mov    %eax,(%esp)
08474c92 +0x1632:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474c97 +0x1637:  movl   $0x56,0x4(%esp)
08474c9f +0x163f:  mov    %eax,(%esp)
08474ca2 +0x1642:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474ca7 +0x1647:  mov    -0x290(%ebp),%eax
08474cad +0x164d:  mov    0xa(%eax),%ebx
08474cb0 +0x1650:  lea    -0x310(%ebp),%eax
08474cb6 +0x1656:  mov    %eax,(%esp)
08474cb9 +0x1659:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474cbe +0x165e:  mov    %ebx,0x4(%esp)
08474cc2 +0x1662:  mov    %eax,(%esp)
08474cc5 +0x1665:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474cca +0x166a:  lea    -0x310(%ebp),%eax
08474cd0 +0x1670:  mov    %eax,(%esp)
08474cd3 +0x1673:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474cd8 +0x1678:  movl   $0x5a,0x8(%esp)
08474ce0 +0x1680:  mov    -0x290(%ebp),%edx
08474ce6 +0x1686:  mov    %edx,0x4(%esp)
08474cea +0x168a:  mov    %eax,(%esp)
08474ced +0x168d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474cf2 +0x1692:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474cf7 +0x1697:  lea    -0x310(%ebp),%edx
08474cfd +0x169d:  mov    %edx,0x8(%esp)
08474d01 +0x16a1:  movl   $0x1,0x4(%esp)
08474d09 +0x16a9:  mov    %eax,(%esp)
08474d0c +0x16ac:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474d11 +0x16b1:  jmp    0847abfb <+0x759b>
08474d16 +0x16b6:  mov    0x8(%ebp),%eax
08474d19 +0x16b9:  mov    %eax,-0x28c(%ebp)
08474d1f +0x16bf:  lea    -0x310(%ebp),%eax
08474d25 +0x16c5:  mov    %eax,(%esp)
08474d28 +0x16c8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474d2d +0x16cd:  movl   $0x57,0x4(%esp)
08474d35 +0x16d5:  mov    %eax,(%esp)
08474d38 +0x16d8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474d3d +0x16dd:  mov    -0x28c(%ebp),%eax
08474d43 +0x16e3:  mov    0xa(%eax),%ebx
08474d46 +0x16e6:  lea    -0x310(%ebp),%eax
08474d4c +0x16ec:  mov    %eax,(%esp)
08474d4f +0x16ef:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474d54 +0x16f4:  mov    %ebx,0x4(%esp)
08474d58 +0x16f8:  mov    %eax,(%esp)
08474d5b +0x16fb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474d60 +0x1700:  lea    -0x310(%ebp),%eax
08474d66 +0x1706:  mov    %eax,(%esp)
08474d69 +0x1709:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474d6e +0x170e:  movl   $0x55,0x8(%esp)
08474d76 +0x1716:  mov    -0x28c(%ebp),%edx
08474d7c +0x171c:  mov    %edx,0x4(%esp)
08474d80 +0x1720:  mov    %eax,(%esp)
08474d83 +0x1723:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474d88 +0x1728:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474d8d +0x172d:  lea    -0x310(%ebp),%edx
08474d93 +0x1733:  mov    %edx,0x8(%esp)
08474d97 +0x1737:  movl   $0x1,0x4(%esp)
08474d9f +0x173f:  mov    %eax,(%esp)
08474da2 +0x1742:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474da7 +0x1747:  jmp    0847abfb <+0x759b>
08474dac +0x174c:  mov    0x8(%ebp),%eax
08474daf +0x174f:  mov    %eax,-0x288(%ebp)
08474db5 +0x1755:  lea    -0x310(%ebp),%eax
08474dbb +0x175b:  mov    %eax,(%esp)
08474dbe +0x175e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474dc3 +0x1763:  movl   $0x58,0x4(%esp)
08474dcb +0x176b:  mov    %eax,(%esp)
08474dce +0x176e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474dd3 +0x1773:  mov    -0x288(%ebp),%eax
08474dd9 +0x1779:  mov    0xa(%eax),%ebx
08474ddc +0x177c:  lea    -0x310(%ebp),%eax
08474de2 +0x1782:  mov    %eax,(%esp)
08474de5 +0x1785:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474dea +0x178a:  mov    %ebx,0x4(%esp)
08474dee +0x178e:  mov    %eax,(%esp)
08474df1 +0x1791:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474df6 +0x1796:  lea    -0x310(%ebp),%eax
08474dfc +0x179c:  mov    %eax,(%esp)
08474dff +0x179f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474e04 +0x17a4:  movl   $0x16,0x8(%esp)
08474e0c +0x17ac:  mov    -0x288(%ebp),%edx
08474e12 +0x17b2:  mov    %edx,0x4(%esp)
08474e16 +0x17b6:  mov    %eax,(%esp)
08474e19 +0x17b9:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474e1e +0x17be:  mov    -0x288(%ebp),%eax
08474e24 +0x17c4:  mov    0x12(%eax),%edi
08474e27 +0x17c7:  mov    -0x288(%ebp),%eax
08474e2d +0x17cd:  mov    0xe(%eax),%esi
08474e30 +0x17d0:  mov    -0x288(%ebp),%eax
08474e36 +0x17d6:  mov    0xa(%eax),%ebx
08474e39 +0x17d9:  movl   $0x0,0xc(%esp)
08474e41 +0x17e1:  movl   $0x1a4,0x8(%esp)
08474e49 +0x17e9:  movl   $&_ZZN21CDispatchServerPacket14dispatchPacketEPcE19__PRETTY_FUNCTION__,0x4(%esp)
08474e51 +0x17f1:  lea    -0x308(%ebp),%eax
08474e57 +0x17f7:  mov    %eax,(%esp)
08474e5a +0x17fa:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08474e5f +0x17ff:  mov    %edi,0x10(%esp)
08474e63 +0x1803:  mov    %esi,0xc(%esp)
08474e67 +0x1807:  mov    %ebx,0x8(%esp)
08474e6b +0x180b:  movl   $"[GUILD MARK CHANGE] Recv from guild server. (channel:%d, character:%u, guildkey:%u)",0x4(%esp)
08474e73 +0x1813:  lea    -0x308(%ebp),%eax
08474e79 +0x1819:  mov    %eax,(%esp)
08474e7c +0x181c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08474e81 +0x1821:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474e86 +0x1826:  lea    -0x310(%ebp),%edx
08474e8c +0x182c:  mov    %edx,0x8(%esp)
08474e90 +0x1830:  movl   $0x1,0x4(%esp)
08474e98 +0x1838:  mov    %eax,(%esp)
08474e9b +0x183b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474ea0 +0x1840:  jmp    0847abfb <+0x759b>
08474ea5 +0x1845:  mov    0x8(%ebp),%eax
08474ea8 +0x1848:  mov    %eax,-0x284(%ebp)
08474eae +0x184e:  lea    -0x310(%ebp),%eax
08474eb4 +0x1854:  mov    %eax,(%esp)
08474eb7 +0x1857:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474ebc +0x185c:  movl   $0x59,0x4(%esp)
08474ec4 +0x1864:  mov    %eax,(%esp)
08474ec7 +0x1867:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474ecc +0x186c:  mov    -0x284(%ebp),%eax
08474ed2 +0x1872:  mov    0xa(%eax),%ebx
08474ed5 +0x1875:  lea    -0x310(%ebp),%eax
08474edb +0x187b:  mov    %eax,(%esp)
08474ede +0x187e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474ee3 +0x1883:  mov    %ebx,0x4(%esp)
08474ee7 +0x1887:  mov    %eax,(%esp)
08474eea +0x188a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474eef +0x188f:  lea    -0x310(%ebp),%eax
08474ef5 +0x1895:  mov    %eax,(%esp)
08474ef8 +0x1898:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474efd +0x189d:  movl   $0x12,0x8(%esp)
08474f05 +0x18a5:  mov    -0x284(%ebp),%edx
08474f0b +0x18ab:  mov    %edx,0x4(%esp)
08474f0f +0x18af:  mov    %eax,(%esp)
08474f12 +0x18b2:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474f17 +0x18b7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474f1c +0x18bc:  lea    -0x310(%ebp),%edx
08474f22 +0x18c2:  mov    %edx,0x8(%esp)
08474f26 +0x18c6:  movl   $0x1,0x4(%esp)
08474f2e +0x18ce:  mov    %eax,(%esp)
08474f31 +0x18d1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474f36 +0x18d6:  jmp    0847abfb <+0x759b>
08474f3b +0x18db:  mov    0x8(%ebp),%eax
08474f3e +0x18de:  mov    %eax,-0x280(%ebp)
08474f44 +0x18e4:  lea    -0x310(%ebp),%eax
08474f4a +0x18ea:  mov    %eax,(%esp)
08474f4d +0x18ed:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474f52 +0x18f2:  movl   $0x5a,0x4(%esp)
08474f5a +0x18fa:  mov    %eax,(%esp)
08474f5d +0x18fd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474f62 +0x1902:  mov    -0x280(%ebp),%eax
08474f68 +0x1908:  mov    0xa(%eax),%ebx
08474f6b +0x190b:  lea    -0x310(%ebp),%eax
08474f71 +0x1911:  mov    %eax,(%esp)
08474f74 +0x1914:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474f79 +0x1919:  mov    %ebx,0x4(%esp)
08474f7d +0x191d:  mov    %eax,(%esp)
08474f80 +0x1920:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08474f85 +0x1925:  mov    -0x280(%ebp),%eax
08474f8b +0x192b:  movzwl 0x2(%eax),%eax
08474f8f +0x192f:  movzwl %ax,%ebx
08474f92 +0x1932:  lea    -0x310(%ebp),%eax
08474f98 +0x1938:  mov    %eax,(%esp)
08474f9b +0x193b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08474fa0 +0x1940:  mov    %ebx,0x8(%esp)
08474fa4 +0x1944:  mov    -0x280(%ebp),%edx
08474faa +0x194a:  mov    %edx,0x4(%esp)
08474fae +0x194e:  mov    %eax,(%esp)
08474fb1 +0x1951:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08474fb6 +0x1956:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08474fbb +0x195b:  lea    -0x310(%ebp),%edx
08474fc1 +0x1961:  mov    %edx,0x8(%esp)
08474fc5 +0x1965:  movl   $0x1,0x4(%esp)
08474fcd +0x196d:  mov    %eax,(%esp)
08474fd0 +0x1970:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08474fd5 +0x1975:  jmp    0847abfb <+0x759b>
08474fda +0x197a:  mov    0x8(%ebp),%eax
08474fdd +0x197d:  mov    %eax,-0x27c(%ebp)
08474fe3 +0x1983:  lea    -0x310(%ebp),%eax
08474fe9 +0x1989:  mov    %eax,(%esp)
08474fec +0x198c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08474ff1 +0x1991:  movl   $0x5b,0x4(%esp)
08474ff9 +0x1999:  mov    %eax,(%esp)
08474ffc +0x199c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475001 +0x19a1:  mov    -0x27c(%ebp),%eax
08475007 +0x19a7:  mov    0xa(%eax),%ebx
0847500a +0x19aa:  lea    -0x310(%ebp),%eax
08475010 +0x19b0:  mov    %eax,(%esp)
08475013 +0x19b3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475018 +0x19b8:  mov    %ebx,0x4(%esp)
0847501c +0x19bc:  mov    %eax,(%esp)
0847501f +0x19bf:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475024 +0x19c4:  mov    -0x27c(%ebp),%eax
0847502a +0x19ca:  movzwl 0x2(%eax),%eax
0847502e +0x19ce:  movzwl %ax,%ebx
08475031 +0x19d1:  lea    -0x310(%ebp),%eax
08475037 +0x19d7:  mov    %eax,(%esp)
0847503a +0x19da:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847503f +0x19df:  mov    %ebx,0x8(%esp)
08475043 +0x19e3:  mov    -0x27c(%ebp),%edx
08475049 +0x19e9:  mov    %edx,0x4(%esp)
0847504d +0x19ed:  mov    %eax,(%esp)
08475050 +0x19f0:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475055 +0x19f5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847505a +0x19fa:  lea    -0x310(%ebp),%edx
08475060 +0x1a00:  mov    %edx,0x8(%esp)
08475064 +0x1a04:  movl   $0x1,0x4(%esp)
0847506c +0x1a0c:  mov    %eax,(%esp)
0847506f +0x1a0f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475074 +0x1a14:  jmp    0847abfb <+0x759b>
08475079 +0x1a19:  mov    0x8(%ebp),%eax
0847507c +0x1a1c:  mov    %eax,-0x278(%ebp)
08475082 +0x1a22:  lea    -0x310(%ebp),%eax
08475088 +0x1a28:  mov    %eax,(%esp)
0847508b +0x1a2b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475090 +0x1a30:  movl   $0xc6,0x4(%esp)
08475098 +0x1a38:  mov    %eax,(%esp)
0847509b +0x1a3b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084750a0 +0x1a40:  mov    -0x278(%ebp),%eax
084750a6 +0x1a46:  mov    0xa(%eax),%ebx
084750a9 +0x1a49:  lea    -0x310(%ebp),%eax
084750af +0x1a4f:  mov    %eax,(%esp)
084750b2 +0x1a52:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084750b7 +0x1a57:  mov    %ebx,0x4(%esp)
084750bb +0x1a5b:  mov    %eax,(%esp)
084750be +0x1a5e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084750c3 +0x1a63:  mov    -0x278(%ebp),%eax
084750c9 +0x1a69:  movzwl 0x2(%eax),%eax
084750cd +0x1a6d:  movzwl %ax,%ebx
084750d0 +0x1a70:  lea    -0x310(%ebp),%eax
084750d6 +0x1a76:  mov    %eax,(%esp)
084750d9 +0x1a79:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084750de +0x1a7e:  mov    %ebx,0x8(%esp)
084750e2 +0x1a82:  mov    -0x278(%ebp),%edx
084750e8 +0x1a88:  mov    %edx,0x4(%esp)
084750ec +0x1a8c:  mov    %eax,(%esp)
084750ef +0x1a8f:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084750f4 +0x1a94:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084750f9 +0x1a99:  lea    -0x310(%ebp),%edx
084750ff +0x1a9f:  mov    %edx,0x8(%esp)
08475103 +0x1aa3:  movl   $0x1,0x4(%esp)
0847510b +0x1aab:  mov    %eax,(%esp)
0847510e +0x1aae:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475113 +0x1ab3:  jmp    0847abfb <+0x759b>
08475118 +0x1ab8:  mov    0x8(%ebp),%eax
0847511b +0x1abb:  mov    %eax,-0x274(%ebp)
08475121 +0x1ac1:  lea    -0x310(%ebp),%eax
08475127 +0x1ac7:  mov    %eax,(%esp)
0847512a +0x1aca:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847512f +0x1acf:  movl   $0xc7,0x4(%esp)
08475137 +0x1ad7:  mov    %eax,(%esp)
0847513a +0x1ada:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847513f +0x1adf:  mov    -0x274(%ebp),%eax
08475145 +0x1ae5:  mov    0xa(%eax),%ebx
08475148 +0x1ae8:  lea    -0x310(%ebp),%eax
0847514e +0x1aee:  mov    %eax,(%esp)
08475151 +0x1af1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475156 +0x1af6:  mov    %ebx,0x4(%esp)
0847515a +0x1afa:  mov    %eax,(%esp)
0847515d +0x1afd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475162 +0x1b02:  mov    -0x274(%ebp),%eax
08475168 +0x1b08:  movzwl 0x2(%eax),%eax
0847516c +0x1b0c:  movzwl %ax,%ebx
0847516f +0x1b0f:  lea    -0x310(%ebp),%eax
08475175 +0x1b15:  mov    %eax,(%esp)
08475178 +0x1b18:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847517d +0x1b1d:  mov    %ebx,0x8(%esp)
08475181 +0x1b21:  mov    -0x274(%ebp),%edx
08475187 +0x1b27:  mov    %edx,0x4(%esp)
0847518b +0x1b2b:  mov    %eax,(%esp)
0847518e +0x1b2e:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475193 +0x1b33:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475198 +0x1b38:  lea    -0x310(%ebp),%edx
0847519e +0x1b3e:  mov    %edx,0x8(%esp)
084751a2 +0x1b42:  movl   $0x1,0x4(%esp)
084751aa +0x1b4a:  mov    %eax,(%esp)
084751ad +0x1b4d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084751b2 +0x1b52:  jmp    0847abfb <+0x759b>
084751b7 +0x1b57:  mov    0x8(%ebp),%eax
084751ba +0x1b5a:  mov    %eax,-0x270(%ebp)
084751c0 +0x1b60:  lea    -0x310(%ebp),%eax
084751c6 +0x1b66:  mov    %eax,(%esp)
084751c9 +0x1b69:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084751ce +0x1b6e:  movl   $0xc8,0x4(%esp)
084751d6 +0x1b76:  mov    %eax,(%esp)
084751d9 +0x1b79:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084751de +0x1b7e:  mov    -0x270(%ebp),%eax
084751e4 +0x1b84:  mov    0xa(%eax),%ebx
084751e7 +0x1b87:  lea    -0x310(%ebp),%eax
084751ed +0x1b8d:  mov    %eax,(%esp)
084751f0 +0x1b90:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084751f5 +0x1b95:  mov    %ebx,0x4(%esp)
084751f9 +0x1b99:  mov    %eax,(%esp)
084751fc +0x1b9c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475201 +0x1ba1:  mov    -0x270(%ebp),%eax
08475207 +0x1ba7:  movzwl 0x2(%eax),%eax
0847520b +0x1bab:  movzwl %ax,%ebx
0847520e +0x1bae:  lea    -0x310(%ebp),%eax
08475214 +0x1bb4:  mov    %eax,(%esp)
08475217 +0x1bb7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847521c +0x1bbc:  mov    %ebx,0x8(%esp)
08475220 +0x1bc0:  mov    -0x270(%ebp),%edx
08475226 +0x1bc6:  mov    %edx,0x4(%esp)
0847522a +0x1bca:  mov    %eax,(%esp)
0847522d +0x1bcd:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475232 +0x1bd2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475237 +0x1bd7:  lea    -0x310(%ebp),%edx
0847523d +0x1bdd:  mov    %edx,0x8(%esp)
08475241 +0x1be1:  movl   $0x1,0x4(%esp)
08475249 +0x1be9:  mov    %eax,(%esp)
0847524c +0x1bec:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475251 +0x1bf1:  jmp    0847abfb <+0x759b>
08475256 +0x1bf6:  mov    0x8(%ebp),%eax
08475259 +0x1bf9:  mov    %eax,-0x26c(%ebp)
0847525f +0x1bff:  lea    -0x310(%ebp),%eax
08475265 +0x1c05:  mov    %eax,(%esp)
08475268 +0x1c08:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847526d +0x1c0d:  movl   $0x5c,0x4(%esp)
08475275 +0x1c15:  mov    %eax,(%esp)
08475278 +0x1c18:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847527d +0x1c1d:  mov    -0x26c(%ebp),%eax
08475283 +0x1c23:  mov    0xa(%eax),%ebx
08475286 +0x1c26:  lea    -0x310(%ebp),%eax
0847528c +0x1c2c:  mov    %eax,(%esp)
0847528f +0x1c2f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475294 +0x1c34:  mov    %ebx,0x4(%esp)
08475298 +0x1c38:  mov    %eax,(%esp)
0847529b +0x1c3b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084752a0 +0x1c40:  lea    -0x310(%ebp),%eax
084752a6 +0x1c46:  mov    %eax,(%esp)
084752a9 +0x1c49:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084752ae +0x1c4e:  movl   $0x233f,0x8(%esp)
084752b6 +0x1c56:  mov    -0x26c(%ebp),%edx
084752bc +0x1c5c:  mov    %edx,0x4(%esp)
084752c0 +0x1c60:  mov    %eax,(%esp)
084752c3 +0x1c63:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084752c8 +0x1c68:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084752cd +0x1c6d:  lea    -0x310(%ebp),%edx
084752d3 +0x1c73:  mov    %edx,0x8(%esp)
084752d7 +0x1c77:  movl   $0x1,0x4(%esp)
084752df +0x1c7f:  mov    %eax,(%esp)
084752e2 +0x1c82:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084752e7 +0x1c87:  jmp    0847abfb <+0x759b>
084752ec +0x1c8c:  mov    0x8(%ebp),%eax
084752ef +0x1c8f:  mov    %eax,-0x268(%ebp)
084752f5 +0x1c95:  lea    -0x310(%ebp),%eax
084752fb +0x1c9b:  mov    %eax,(%esp)
084752fe +0x1c9e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475303 +0x1ca3:  movl   $0x5d,0x4(%esp)
0847530b +0x1cab:  mov    %eax,(%esp)
0847530e +0x1cae:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475313 +0x1cb3:  mov    -0x268(%ebp),%eax
08475319 +0x1cb9:  mov    0xb(%eax),%ebx
0847531c +0x1cbc:  lea    -0x310(%ebp),%eax
08475322 +0x1cc2:  mov    %eax,(%esp)
08475325 +0x1cc5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847532a +0x1cca:  mov    %ebx,0x4(%esp)
0847532e +0x1cce:  mov    %eax,(%esp)
08475331 +0x1cd1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475336 +0x1cd6:  lea    -0x310(%ebp),%eax
0847533c +0x1cdc:  mov    %eax,(%esp)
0847533f +0x1cdf:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475344 +0x1ce4:  movl   $0x32,0x8(%esp)
0847534c +0x1cec:  mov    -0x268(%ebp),%edx
08475352 +0x1cf2:  mov    %edx,0x4(%esp)
08475356 +0x1cf6:  mov    %eax,(%esp)
08475359 +0x1cf9:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847535e +0x1cfe:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475363 +0x1d03:  lea    -0x310(%ebp),%edx
08475369 +0x1d09:  mov    %edx,0x8(%esp)
0847536d +0x1d0d:  movl   $0x1,0x4(%esp)
08475375 +0x1d15:  mov    %eax,(%esp)
08475378 +0x1d18:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847537d +0x1d1d:  jmp    0847abfb <+0x759b>
08475382 +0x1d22:  mov    0x8(%ebp),%eax
08475385 +0x1d25:  mov    %eax,-0x264(%ebp)
0847538b +0x1d2b:  lea    -0x310(%ebp),%eax
08475391 +0x1d31:  mov    %eax,(%esp)
08475394 +0x1d34:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475399 +0x1d39:  movl   $0x5e,0x4(%esp)
084753a1 +0x1d41:  mov    %eax,(%esp)
084753a4 +0x1d44:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084753a9 +0x1d49:  mov    -0x264(%ebp),%eax
084753af +0x1d4f:  mov    0xf(%eax),%ebx
084753b2 +0x1d52:  lea    -0x310(%ebp),%eax
084753b8 +0x1d58:  mov    %eax,(%esp)
084753bb +0x1d5b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084753c0 +0x1d60:  mov    %ebx,0x4(%esp)
084753c4 +0x1d64:  mov    %eax,(%esp)
084753c7 +0x1d67:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084753cc +0x1d6c:  mov    -0x264(%ebp),%eax
084753d2 +0x1d72:  movzwl 0x2(%eax),%eax
084753d6 +0x1d76:  movzwl %ax,%ebx
084753d9 +0x1d79:  lea    -0x310(%ebp),%eax
084753df +0x1d7f:  mov    %eax,(%esp)
084753e2 +0x1d82:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084753e7 +0x1d87:  mov    %ebx,0x8(%esp)
084753eb +0x1d8b:  mov    -0x264(%ebp),%edx
084753f1 +0x1d91:  mov    %edx,0x4(%esp)
084753f5 +0x1d95:  mov    %eax,(%esp)
084753f8 +0x1d98:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084753fd +0x1d9d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475402 +0x1da2:  lea    -0x310(%ebp),%edx
08475408 +0x1da8:  mov    %edx,0x8(%esp)
0847540c +0x1dac:  movl   $0x1,0x4(%esp)
08475414 +0x1db4:  mov    %eax,(%esp)
08475417 +0x1db7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847541c +0x1dbc:  jmp    0847abfb <+0x759b>
08475421 +0x1dc1:  mov    0x8(%ebp),%eax
08475424 +0x1dc4:  mov    %eax,-0x260(%ebp)
0847542a +0x1dca:  lea    -0x310(%ebp),%eax
08475430 +0x1dd0:  mov    %eax,(%esp)
08475433 +0x1dd3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475438 +0x1dd8:  movl   $0x5f,0x4(%esp)
08475440 +0x1de0:  mov    %eax,(%esp)
08475443 +0x1de3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475448 +0x1de8:  mov    -0x260(%ebp),%eax
0847544e +0x1dee:  mov    0xa(%eax),%eax
08475451 +0x1df1:  mov    %eax,%ebx
08475453 +0x1df3:  lea    -0x310(%ebp),%eax
08475459 +0x1df9:  mov    %eax,(%esp)
0847545c +0x1dfc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475461 +0x1e01:  mov    %ebx,0x4(%esp)
08475465 +0x1e05:  mov    %eax,(%esp)
08475468 +0x1e08:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847546d +0x1e0d:  lea    -0x310(%ebp),%eax
08475473 +0x1e13:  mov    %eax,(%esp)
08475476 +0x1e16:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847547b +0x1e1b:  movl   $0x18f,0x8(%esp)
08475483 +0x1e23:  mov    -0x260(%ebp),%edx
08475489 +0x1e29:  mov    %edx,0x4(%esp)
0847548d +0x1e2d:  mov    %eax,(%esp)
08475490 +0x1e30:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475495 +0x1e35:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847549a +0x1e3a:  lea    -0x310(%ebp),%edx
084754a0 +0x1e40:  mov    %edx,0x8(%esp)
084754a4 +0x1e44:  movl   $0x1,0x4(%esp)
084754ac +0x1e4c:  mov    %eax,(%esp)
084754af +0x1e4f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084754b4 +0x1e54:  jmp    0847abfb <+0x759b>
084754b9 +0x1e59:  mov    0x8(%ebp),%eax
084754bc +0x1e5c:  mov    %eax,-0x25c(%ebp)
084754c2 +0x1e62:  lea    -0x310(%ebp),%eax
084754c8 +0x1e68:  mov    %eax,(%esp)
084754cb +0x1e6b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084754d0 +0x1e70:  movl   $0xd8,0x4(%esp)
084754d8 +0x1e78:  mov    %eax,(%esp)
084754db +0x1e7b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084754e0 +0x1e80:  mov    -0x25c(%ebp),%eax
084754e6 +0x1e86:  mov    0xa(%eax),%eax
084754e9 +0x1e89:  mov    %eax,%ebx
084754eb +0x1e8b:  lea    -0x310(%ebp),%eax
084754f1 +0x1e91:  mov    %eax,(%esp)
084754f4 +0x1e94:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084754f9 +0x1e99:  mov    %ebx,0x4(%esp)
084754fd +0x1e9d:  mov    %eax,(%esp)
08475500 +0x1ea0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475505 +0x1ea5:  lea    -0x310(%ebp),%eax
0847550b +0x1eab:  mov    %eax,(%esp)
0847550e +0x1eae:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475513 +0x1eb3:  movl   $0x77,0x8(%esp)
0847551b +0x1ebb:  mov    -0x25c(%ebp),%edx
08475521 +0x1ec1:  mov    %edx,0x4(%esp)
08475525 +0x1ec5:  mov    %eax,(%esp)
08475528 +0x1ec8:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847552d +0x1ecd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475532 +0x1ed2:  lea    -0x310(%ebp),%edx
08475538 +0x1ed8:  mov    %edx,0x8(%esp)
0847553c +0x1edc:  movl   $0x1,0x4(%esp)
08475544 +0x1ee4:  mov    %eax,(%esp)
08475547 +0x1ee7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847554c +0x1eec:  jmp    0847abfb <+0x759b>
08475551 +0x1ef1:  mov    0x8(%ebp),%eax
08475554 +0x1ef4:  mov    %eax,-0x258(%ebp)
0847555a +0x1efa:  lea    -0x310(%ebp),%eax
08475560 +0x1f00:  mov    %eax,(%esp)
08475563 +0x1f03:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475568 +0x1f08:  movl   $0x64,0x4(%esp)
08475570 +0x1f10:  mov    %eax,(%esp)
08475573 +0x1f13:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475578 +0x1f18:  mov    -0x258(%ebp),%eax
0847557e +0x1f1e:  mov    0xe(%eax),%eax
08475581 +0x1f21:  mov    %eax,%ebx
08475583 +0x1f23:  lea    -0x310(%ebp),%eax
08475589 +0x1f29:  mov    %eax,(%esp)
0847558c +0x1f2c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475591 +0x1f31:  mov    %ebx,0x4(%esp)
08475595 +0x1f35:  mov    %eax,(%esp)
08475598 +0x1f38:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847559d +0x1f3d:  lea    -0x310(%ebp),%eax
084755a3 +0x1f43:  mov    %eax,(%esp)
084755a6 +0x1f46:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084755ab +0x1f4b:  movl   $0x16,0x8(%esp)
084755b3 +0x1f53:  mov    -0x258(%ebp),%edx
084755b9 +0x1f59:  mov    %edx,0x4(%esp)
084755bd +0x1f5d:  mov    %eax,(%esp)
084755c0 +0x1f60:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084755c5 +0x1f65:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084755ca +0x1f6a:  lea    -0x310(%ebp),%edx
084755d0 +0x1f70:  mov    %edx,0x8(%esp)
084755d4 +0x1f74:  movl   $0x1,0x4(%esp)
084755dc +0x1f7c:  mov    %eax,(%esp)
084755df +0x1f7f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084755e4 +0x1f84:  jmp    0847abfb <+0x759b>
084755e9 +0x1f89:  mov    0x8(%ebp),%eax
084755ec +0x1f8c:  mov    %eax,-0x254(%ebp)
084755f2 +0x1f92:  lea    -0x310(%ebp),%eax
084755f8 +0x1f98:  mov    %eax,(%esp)
084755fb +0x1f9b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475600 +0x1fa0:  movl   $0x65,0x4(%esp)
08475608 +0x1fa8:  mov    %eax,(%esp)
0847560b +0x1fab:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475610 +0x1fb0:  mov    -0x254(%ebp),%eax
08475616 +0x1fb6:  mov    0xe(%eax),%eax
08475619 +0x1fb9:  mov    %eax,%ebx
0847561b +0x1fbb:  lea    -0x310(%ebp),%eax
08475621 +0x1fc1:  mov    %eax,(%esp)
08475624 +0x1fc4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475629 +0x1fc9:  mov    %ebx,0x4(%esp)
0847562d +0x1fcd:  mov    %eax,(%esp)
08475630 +0x1fd0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475635 +0x1fd5:  lea    -0x310(%ebp),%eax
0847563b +0x1fdb:  mov    %eax,(%esp)
0847563e +0x1fde:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475643 +0x1fe3:  movl   $0x3a,0x8(%esp)
0847564b +0x1feb:  mov    -0x254(%ebp),%edx
08475651 +0x1ff1:  mov    %edx,0x4(%esp)
08475655 +0x1ff5:  mov    %eax,(%esp)
08475658 +0x1ff8:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847565d +0x1ffd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475662 +0x2002:  lea    -0x310(%ebp),%edx
08475668 +0x2008:  mov    %edx,0x8(%esp)
0847566c +0x200c:  movl   $0x1,0x4(%esp)
08475674 +0x2014:  mov    %eax,(%esp)
08475677 +0x2017:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847567c +0x201c:  jmp    0847abfb <+0x759b>
08475681 +0x2021:  mov    0x8(%ebp),%eax
08475684 +0x2024:  mov    %eax,-0x250(%ebp)
0847568a +0x202a:  lea    -0x310(%ebp),%eax
08475690 +0x2030:  mov    %eax,(%esp)
08475693 +0x2033:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475698 +0x2038:  movl   $0x66,0x4(%esp)
084756a0 +0x2040:  mov    %eax,(%esp)
084756a3 +0x2043:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084756a8 +0x2048:  mov    -0x250(%ebp),%eax
084756ae +0x204e:  mov    0xa(%eax),%eax
084756b1 +0x2051:  mov    %eax,%ebx
084756b3 +0x2053:  lea    -0x310(%ebp),%eax
084756b9 +0x2059:  mov    %eax,(%esp)
084756bc +0x205c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084756c1 +0x2061:  mov    %ebx,0x4(%esp)
084756c5 +0x2065:  mov    %eax,(%esp)
084756c8 +0x2068:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084756cd +0x206d:  lea    -0x310(%ebp),%eax
084756d3 +0x2073:  mov    %eax,(%esp)
084756d6 +0x2076:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084756db +0x207b:  movl   $0x2c,0x8(%esp)
084756e3 +0x2083:  mov    -0x250(%ebp),%edx
084756e9 +0x2089:  mov    %edx,0x4(%esp)
084756ed +0x208d:  mov    %eax,(%esp)
084756f0 +0x2090:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084756f5 +0x2095:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084756fa +0x209a:  lea    -0x310(%ebp),%edx
08475700 +0x20a0:  mov    %edx,0x8(%esp)
08475704 +0x20a4:  movl   $0x1,0x4(%esp)
0847570c +0x20ac:  mov    %eax,(%esp)
0847570f +0x20af:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475714 +0x20b4:  jmp    0847abfb <+0x759b>
08475719 +0x20b9:  mov    0x8(%ebp),%eax
0847571c +0x20bc:  mov    %eax,-0x24c(%ebp)
08475722 +0x20c2:  lea    -0x310(%ebp),%eax
08475728 +0x20c8:  mov    %eax,(%esp)
0847572b +0x20cb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475730 +0x20d0:  movl   $0xd7,0x4(%esp)
08475738 +0x20d8:  mov    %eax,(%esp)
0847573b +0x20db:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475740 +0x20e0:  mov    -0x24c(%ebp),%eax
08475746 +0x20e6:  mov    0xa(%eax),%eax
08475749 +0x20e9:  mov    %eax,%ebx
0847574b +0x20eb:  lea    -0x310(%ebp),%eax
08475751 +0x20f1:  mov    %eax,(%esp)
08475754 +0x20f4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475759 +0x20f9:  mov    %ebx,0x4(%esp)
0847575d +0x20fd:  mov    %eax,(%esp)
08475760 +0x2100:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475765 +0x2105:  lea    -0x310(%ebp),%eax
0847576b +0x210b:  mov    %eax,(%esp)
0847576e +0x210e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475773 +0x2113:  movl   $0x13,0x8(%esp)
0847577b +0x211b:  mov    -0x24c(%ebp),%edx
08475781 +0x2121:  mov    %edx,0x4(%esp)
08475785 +0x2125:  mov    %eax,(%esp)
08475788 +0x2128:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847578d +0x212d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475792 +0x2132:  lea    -0x310(%ebp),%edx
08475798 +0x2138:  mov    %edx,0x8(%esp)
0847579c +0x213c:  movl   $0x1,0x4(%esp)
084757a4 +0x2144:  mov    %eax,(%esp)
084757a7 +0x2147:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084757ac +0x214c:  jmp    0847abfb <+0x759b>
084757b1 +0x2151:  mov    0x8(%ebp),%eax
084757b4 +0x2154:  mov    %eax,-0x248(%ebp)
084757ba +0x215a:  lea    -0x310(%ebp),%eax
084757c0 +0x2160:  mov    %eax,(%esp)
084757c3 +0x2163:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084757c8 +0x2168:  movl   $0x6c,0x4(%esp)
084757d0 +0x2170:  mov    %eax,(%esp)
084757d3 +0x2173:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084757d8 +0x2178:  mov    -0x248(%ebp),%eax
084757de +0x217e:  mov    0xb(%eax),%ebx
084757e1 +0x2181:  lea    -0x310(%ebp),%eax
084757e7 +0x2187:  mov    %eax,(%esp)
084757ea +0x218a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084757ef +0x218f:  mov    %ebx,0x4(%esp)
084757f3 +0x2193:  mov    %eax,(%esp)
084757f6 +0x2196:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084757fb +0x219b:  lea    -0x310(%ebp),%eax
08475801 +0x21a1:  mov    %eax,(%esp)
08475804 +0x21a4:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475809 +0x21a9:  movl   $0x38,0x8(%esp)
08475811 +0x21b1:  mov    -0x248(%ebp),%edx
08475817 +0x21b7:  mov    %edx,0x4(%esp)
0847581b +0x21bb:  mov    %eax,(%esp)
0847581e +0x21be:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475823 +0x21c3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475828 +0x21c8:  lea    -0x310(%ebp),%edx
0847582e +0x21ce:  mov    %edx,0x8(%esp)
08475832 +0x21d2:  movl   $0x1,0x4(%esp)
0847583a +0x21da:  mov    %eax,(%esp)
0847583d +0x21dd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475842 +0x21e2:  jmp    0847abfb <+0x759b>
08475847 +0x21e7:  mov    0x8(%ebp),%eax
0847584a +0x21ea:  mov    %eax,-0x244(%ebp)
08475850 +0x21f0:  lea    -0x310(%ebp),%eax
08475856 +0x21f6:  mov    %eax,(%esp)
08475859 +0x21f9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847585e +0x21fe:  movl   $0x6d,0x4(%esp)
08475866 +0x2206:  mov    %eax,(%esp)
08475869 +0x2209:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847586e +0x220e:  mov    -0x244(%ebp),%eax
08475874 +0x2214:  mov    0xa(%eax),%ebx
08475877 +0x2217:  lea    -0x310(%ebp),%eax
0847587d +0x221d:  mov    %eax,(%esp)
08475880 +0x2220:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475885 +0x2225:  mov    %ebx,0x4(%esp)
08475889 +0x2229:  mov    %eax,(%esp)
0847588c +0x222c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475891 +0x2231:  lea    -0x310(%ebp),%eax
08475897 +0x2237:  mov    %eax,(%esp)
0847589a +0x223a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847589f +0x223f:  movl   $0x31,0x8(%esp)
084758a7 +0x2247:  mov    -0x244(%ebp),%edx
084758ad +0x224d:  mov    %edx,0x4(%esp)
084758b1 +0x2251:  mov    %eax,(%esp)
084758b4 +0x2254:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084758b9 +0x2259:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084758be +0x225e:  lea    -0x310(%ebp),%edx
084758c4 +0x2264:  mov    %edx,0x8(%esp)
084758c8 +0x2268:  movl   $0x1,0x4(%esp)
084758d0 +0x2270:  mov    %eax,(%esp)
084758d3 +0x2273:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084758d8 +0x2278:  jmp    0847abfb <+0x759b>
084758dd +0x227d:  mov    0x8(%ebp),%eax
084758e0 +0x2280:  mov    %eax,-0x240(%ebp)
084758e6 +0x2286:  lea    -0x310(%ebp),%eax
084758ec +0x228c:  mov    %eax,(%esp)
084758ef +0x228f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084758f4 +0x2294:  movl   $0x6e,0x4(%esp)
084758fc +0x229c:  mov    %eax,(%esp)
084758ff +0x229f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475904 +0x22a4:  mov    -0x240(%ebp),%eax
0847590a +0x22aa:  mov    0xa(%eax),%ebx
0847590d +0x22ad:  lea    -0x310(%ebp),%eax
08475913 +0x22b3:  mov    %eax,(%esp)
08475916 +0x22b6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847591b +0x22bb:  mov    %ebx,0x4(%esp)
0847591f +0x22bf:  mov    %eax,(%esp)
08475922 +0x22c2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475927 +0x22c7:  lea    -0x310(%ebp),%eax
0847592d +0x22cd:  mov    %eax,(%esp)
08475930 +0x22d0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475935 +0x22d5:  movl   $0x32,0x8(%esp)
0847593d +0x22dd:  mov    -0x240(%ebp),%edx
08475943 +0x22e3:  mov    %edx,0x4(%esp)
08475947 +0x22e7:  mov    %eax,(%esp)
0847594a +0x22ea:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847594f +0x22ef:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475954 +0x22f4:  lea    -0x310(%ebp),%edx
0847595a +0x22fa:  mov    %edx,0x8(%esp)
0847595e +0x22fe:  movl   $0x1,0x4(%esp)
08475966 +0x2306:  mov    %eax,(%esp)
08475969 +0x2309:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847596e +0x230e:  jmp    0847abfb <+0x759b>
08475973 +0x2313:  mov    0x8(%ebp),%eax
08475976 +0x2316:  mov    %eax,-0x23c(%ebp)
0847597c +0x231c:  lea    -0x310(%ebp),%eax
08475982 +0x2322:  mov    %eax,(%esp)
08475985 +0x2325:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847598a +0x232a:  movl   $0x6f,0x4(%esp)
08475992 +0x2332:  mov    %eax,(%esp)
08475995 +0x2335:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847599a +0x233a:  mov    -0x23c(%ebp),%eax
084759a0 +0x2340:  mov    0xd(%eax),%ebx
084759a3 +0x2343:  lea    -0x310(%ebp),%eax
084759a9 +0x2349:  mov    %eax,(%esp)
084759ac +0x234c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084759b1 +0x2351:  mov    %ebx,0x4(%esp)
084759b5 +0x2355:  mov    %eax,(%esp)
084759b8 +0x2358:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084759bd +0x235d:  lea    -0x310(%ebp),%eax
084759c3 +0x2363:  mov    %eax,(%esp)
084759c6 +0x2366:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084759cb +0x236b:  movl   $0x39,0x8(%esp)
084759d3 +0x2373:  mov    -0x23c(%ebp),%edx
084759d9 +0x2379:  mov    %edx,0x4(%esp)
084759dd +0x237d:  mov    %eax,(%esp)
084759e0 +0x2380:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084759e5 +0x2385:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084759ea +0x238a:  lea    -0x310(%ebp),%edx
084759f0 +0x2390:  mov    %edx,0x8(%esp)
084759f4 +0x2394:  movl   $0x1,0x4(%esp)
084759fc +0x239c:  mov    %eax,(%esp)
084759ff +0x239f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475a04 +0x23a4:  jmp    0847abfb <+0x759b>
08475a09 +0x23a9:  mov    0x8(%ebp),%eax
08475a0c +0x23ac:  mov    %eax,-0x238(%ebp)
08475a12 +0x23b2:  lea    -0x310(%ebp),%eax
08475a18 +0x23b8:  mov    %eax,(%esp)
08475a1b +0x23bb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475a20 +0x23c0:  movl   $0x70,0x4(%esp)
08475a28 +0x23c8:  mov    %eax,(%esp)
08475a2b +0x23cb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475a30 +0x23d0:  mov    -0x238(%ebp),%eax
08475a36 +0x23d6:  mov    0xd(%eax),%ebx
08475a39 +0x23d9:  lea    -0x310(%ebp),%eax
08475a3f +0x23df:  mov    %eax,(%esp)
08475a42 +0x23e2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475a47 +0x23e7:  mov    %ebx,0x4(%esp)
08475a4b +0x23eb:  mov    %eax,(%esp)
08475a4e +0x23ee:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475a53 +0x23f3:  lea    -0x310(%ebp),%eax
08475a59 +0x23f9:  mov    %eax,(%esp)
08475a5c +0x23fc:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475a61 +0x2401:  movl   $0x39,0x8(%esp)
08475a69 +0x2409:  mov    -0x238(%ebp),%edx
08475a6f +0x240f:  mov    %edx,0x4(%esp)
08475a73 +0x2413:  mov    %eax,(%esp)
08475a76 +0x2416:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475a7b +0x241b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475a80 +0x2420:  lea    -0x310(%ebp),%edx
08475a86 +0x2426:  mov    %edx,0x8(%esp)
08475a8a +0x242a:  movl   $0x1,0x4(%esp)
08475a92 +0x2432:  mov    %eax,(%esp)
08475a95 +0x2435:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475a9a +0x243a:  jmp    0847abfb <+0x759b>
08475a9f +0x243f:  mov    0x8(%ebp),%eax
08475aa2 +0x2442:  mov    %eax,-0x234(%ebp)
08475aa8 +0x2448:  lea    -0x310(%ebp),%eax
08475aae +0x244e:  mov    %eax,(%esp)
08475ab1 +0x2451:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475ab6 +0x2456:  movl   $0x71,0x4(%esp)
08475abe +0x245e:  mov    %eax,(%esp)
08475ac1 +0x2461:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475ac6 +0x2466:  mov    -0x234(%ebp),%eax
08475acc +0x246c:  mov    0xa(%eax),%ebx
08475acf +0x246f:  lea    -0x310(%ebp),%eax
08475ad5 +0x2475:  mov    %eax,(%esp)
08475ad8 +0x2478:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475add +0x247d:  mov    %ebx,0x4(%esp)
08475ae1 +0x2481:  mov    %eax,(%esp)
08475ae4 +0x2484:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475ae9 +0x2489:  lea    -0x310(%ebp),%eax
08475aef +0x248f:  mov    %eax,(%esp)
08475af2 +0x2492:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475af7 +0x2497:  movl   $0x31,0x8(%esp)
08475aff +0x249f:  mov    -0x234(%ebp),%edx
08475b05 +0x24a5:  mov    %edx,0x4(%esp)
08475b09 +0x24a9:  mov    %eax,(%esp)
08475b0c +0x24ac:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475b11 +0x24b1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475b16 +0x24b6:  lea    -0x310(%ebp),%edx
08475b1c +0x24bc:  mov    %edx,0x8(%esp)
08475b20 +0x24c0:  movl   $0x1,0x4(%esp)
08475b28 +0x24c8:  mov    %eax,(%esp)
08475b2b +0x24cb:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475b30 +0x24d0:  jmp    0847abfb <+0x759b>
08475b35 +0x24d5:  mov    0x8(%ebp),%eax
08475b38 +0x24d8:  mov    %eax,-0x230(%ebp)
08475b3e +0x24de:  lea    -0x310(%ebp),%eax
08475b44 +0x24e4:  mov    %eax,(%esp)
08475b47 +0x24e7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475b4c +0x24ec:  movl   $0x72,0x4(%esp)
08475b54 +0x24f4:  mov    %eax,(%esp)
08475b57 +0x24f7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475b5c +0x24fc:  mov    -0x230(%ebp),%eax
08475b62 +0x2502:  mov    0xa(%eax),%ebx
08475b65 +0x2505:  lea    -0x310(%ebp),%eax
08475b6b +0x250b:  mov    %eax,(%esp)
08475b6e +0x250e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475b73 +0x2513:  mov    %ebx,0x4(%esp)
08475b77 +0x2517:  mov    %eax,(%esp)
08475b7a +0x251a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475b7f +0x251f:  lea    -0x310(%ebp),%eax
08475b85 +0x2525:  mov    %eax,(%esp)
08475b88 +0x2528:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475b8d +0x252d:  movl   $0x31,0x8(%esp)
08475b95 +0x2535:  mov    -0x230(%ebp),%edx
08475b9b +0x253b:  mov    %edx,0x4(%esp)
08475b9f +0x253f:  mov    %eax,(%esp)
08475ba2 +0x2542:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475ba7 +0x2547:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475bac +0x254c:  lea    -0x310(%ebp),%edx
08475bb2 +0x2552:  mov    %edx,0x8(%esp)
08475bb6 +0x2556:  movl   $0x1,0x4(%esp)
08475bbe +0x255e:  mov    %eax,(%esp)
08475bc1 +0x2561:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475bc6 +0x2566:  jmp    0847abfb <+0x759b>
08475bcb +0x256b:  mov    0x8(%ebp),%eax
08475bce +0x256e:  mov    %eax,-0x22c(%ebp)
08475bd4 +0x2574:  lea    -0x310(%ebp),%eax
08475bda +0x257a:  mov    %eax,(%esp)
08475bdd +0x257d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475be2 +0x2582:  movl   $0x73,0x4(%esp)
08475bea +0x258a:  mov    %eax,(%esp)
08475bed +0x258d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475bf2 +0x2592:  mov    -0x22c(%ebp),%eax
08475bf8 +0x2598:  mov    0xa(%eax),%ebx
08475bfb +0x259b:  lea    -0x310(%ebp),%eax
08475c01 +0x25a1:  mov    %eax,(%esp)
08475c04 +0x25a4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475c09 +0x25a9:  mov    %ebx,0x4(%esp)
08475c0d +0x25ad:  mov    %eax,(%esp)
08475c10 +0x25b0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475c15 +0x25b5:  lea    -0x310(%ebp),%eax
08475c1b +0x25bb:  mov    %eax,(%esp)
08475c1e +0x25be:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475c23 +0x25c3:  movl   $0x12,0x8(%esp)
08475c2b +0x25cb:  mov    -0x22c(%ebp),%edx
08475c31 +0x25d1:  mov    %edx,0x4(%esp)
08475c35 +0x25d5:  mov    %eax,(%esp)
08475c38 +0x25d8:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475c3d +0x25dd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475c42 +0x25e2:  lea    -0x310(%ebp),%edx
08475c48 +0x25e8:  mov    %edx,0x8(%esp)
08475c4c +0x25ec:  movl   $0x1,0x4(%esp)
08475c54 +0x25f4:  mov    %eax,(%esp)
08475c57 +0x25f7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475c5c +0x25fc:  jmp    0847abfb <+0x759b>
08475c61 +0x2601:  mov    0x8(%ebp),%eax
08475c64 +0x2604:  mov    %eax,-0x228(%ebp)
08475c6a +0x260a:  lea    -0x310(%ebp),%eax
08475c70 +0x2610:  mov    %eax,(%esp)
08475c73 +0x2613:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475c78 +0x2618:  movl   $0x74,0x4(%esp)
08475c80 +0x2620:  mov    %eax,(%esp)
08475c83 +0x2623:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475c88 +0x2628:  mov    -0x228(%ebp),%eax
08475c8e +0x262e:  mov    0xa(%eax),%ebx
08475c91 +0x2631:  lea    -0x310(%ebp),%eax
08475c97 +0x2637:  mov    %eax,(%esp)
08475c9a +0x263a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475c9f +0x263f:  mov    %ebx,0x4(%esp)
08475ca3 +0x2643:  mov    %eax,(%esp)
08475ca6 +0x2646:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475cab +0x264b:  mov    -0x228(%ebp),%eax
08475cb1 +0x2651:  movzwl 0x2(%eax),%eax
08475cb5 +0x2655:  movzwl %ax,%ebx
08475cb8 +0x2658:  lea    -0x310(%ebp),%eax
08475cbe +0x265e:  mov    %eax,(%esp)
08475cc1 +0x2661:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475cc6 +0x2666:  mov    %ebx,0x8(%esp)
08475cca +0x266a:  mov    -0x228(%ebp),%edx
08475cd0 +0x2670:  mov    %edx,0x4(%esp)
08475cd4 +0x2674:  mov    %eax,(%esp)
08475cd7 +0x2677:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475cdc +0x267c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475ce1 +0x2681:  lea    -0x310(%ebp),%edx
08475ce7 +0x2687:  mov    %edx,0x8(%esp)
08475ceb +0x268b:  movl   $0x1,0x4(%esp)
08475cf3 +0x2693:  mov    %eax,(%esp)
08475cf6 +0x2696:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475cfb +0x269b:  jmp    0847abfb <+0x759b>
08475d00 +0x26a0:  mov    0x8(%ebp),%eax
08475d03 +0x26a3:  mov    %eax,-0x224(%ebp)
08475d09 +0x26a9:  lea    -0x310(%ebp),%eax
08475d0f +0x26af:  mov    %eax,(%esp)
08475d12 +0x26b2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475d17 +0x26b7:  movl   $0x75,0x4(%esp)
08475d1f +0x26bf:  mov    %eax,(%esp)
08475d22 +0x26c2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475d27 +0x26c7:  mov    -0x224(%ebp),%eax
08475d2d +0x26cd:  mov    0xa(%eax),%ebx
08475d30 +0x26d0:  lea    -0x310(%ebp),%eax
08475d36 +0x26d6:  mov    %eax,(%esp)
08475d39 +0x26d9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475d3e +0x26de:  mov    %ebx,0x4(%esp)
08475d42 +0x26e2:  mov    %eax,(%esp)
08475d45 +0x26e5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475d4a +0x26ea:  lea    -0x310(%ebp),%eax
08475d50 +0x26f0:  mov    %eax,(%esp)
08475d53 +0x26f3:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475d58 +0x26f8:  movl   $0x1e1,0x8(%esp)
08475d60 +0x2700:  mov    -0x224(%ebp),%edx
08475d66 +0x2706:  mov    %edx,0x4(%esp)
08475d6a +0x270a:  mov    %eax,(%esp)
08475d6d +0x270d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475d72 +0x2712:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475d77 +0x2717:  lea    -0x310(%ebp),%edx
08475d7d +0x271d:  mov    %edx,0x8(%esp)
08475d81 +0x2721:  movl   $0x1,0x4(%esp)
08475d89 +0x2729:  mov    %eax,(%esp)
08475d8c +0x272c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475d91 +0x2731:  jmp    0847abfb <+0x759b>
08475d96 +0x2736:  mov    0x8(%ebp),%eax
08475d99 +0x2739:  mov    %eax,-0x220(%ebp)
08475d9f +0x273f:  lea    -0x310(%ebp),%eax
08475da5 +0x2745:  mov    %eax,(%esp)
08475da8 +0x2748:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475dad +0x274d:  movl   $0x76,0x4(%esp)
08475db5 +0x2755:  mov    %eax,(%esp)
08475db8 +0x2758:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475dbd +0x275d:  mov    -0x220(%ebp),%eax
08475dc3 +0x2763:  mov    0xa(%eax),%ebx
08475dc6 +0x2766:  lea    -0x310(%ebp),%eax
08475dcc +0x276c:  mov    %eax,(%esp)
08475dcf +0x276f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475dd4 +0x2774:  mov    %ebx,0x4(%esp)
08475dd8 +0x2778:  mov    %eax,(%esp)
08475ddb +0x277b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475de0 +0x2780:  lea    -0x310(%ebp),%eax
08475de6 +0x2786:  mov    %eax,(%esp)
08475de9 +0x2789:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475dee +0x278e:  movl   $0x38,0x8(%esp)
08475df6 +0x2796:  mov    -0x220(%ebp),%edx
08475dfc +0x279c:  mov    %edx,0x4(%esp)
08475e00 +0x27a0:  mov    %eax,(%esp)
08475e03 +0x27a3:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475e08 +0x27a8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475e0d +0x27ad:  lea    -0x310(%ebp),%edx
08475e13 +0x27b3:  mov    %edx,0x8(%esp)
08475e17 +0x27b7:  movl   $0x1,0x4(%esp)
08475e1f +0x27bf:  mov    %eax,(%esp)
08475e22 +0x27c2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475e27 +0x27c7:  jmp    0847abfb <+0x759b>
08475e2c +0x27cc:  mov    0x8(%ebp),%eax
08475e2f +0x27cf:  mov    %eax,-0x21c(%ebp)
08475e35 +0x27d5:  lea    -0x310(%ebp),%eax
08475e3b +0x27db:  mov    %eax,(%esp)
08475e3e +0x27de:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475e43 +0x27e3:  movl   $0x7a,0x4(%esp)
08475e4b +0x27eb:  mov    %eax,(%esp)
08475e4e +0x27ee:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475e53 +0x27f3:  mov    -0x21c(%ebp),%eax
08475e59 +0x27f9:  mov    0xa(%eax),%ebx
08475e5c +0x27fc:  lea    -0x310(%ebp),%eax
08475e62 +0x2802:  mov    %eax,(%esp)
08475e65 +0x2805:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475e6a +0x280a:  mov    %ebx,0x4(%esp)
08475e6e +0x280e:  mov    %eax,(%esp)
08475e71 +0x2811:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475e76 +0x2816:  lea    -0x310(%ebp),%eax
08475e7c +0x281c:  mov    %eax,(%esp)
08475e7f +0x281f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475e84 +0x2824:  movl   $0x12,0x8(%esp)
08475e8c +0x282c:  mov    -0x21c(%ebp),%edx
08475e92 +0x2832:  mov    %edx,0x4(%esp)
08475e96 +0x2836:  mov    %eax,(%esp)
08475e99 +0x2839:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475e9e +0x283e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475ea3 +0x2843:  lea    -0x310(%ebp),%edx
08475ea9 +0x2849:  mov    %edx,0x8(%esp)
08475ead +0x284d:  movl   $0x1,0x4(%esp)
08475eb5 +0x2855:  mov    %eax,(%esp)
08475eb8 +0x2858:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475ebd +0x285d:  jmp    0847abfb <+0x759b>
08475ec2 +0x2862:  mov    0x8(%ebp),%eax
08475ec5 +0x2865:  mov    %eax,-0x218(%ebp)
08475ecb +0x286b:  lea    -0x310(%ebp),%eax
08475ed1 +0x2871:  mov    %eax,(%esp)
08475ed4 +0x2874:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475ed9 +0x2879:  movl   $0x85,0x4(%esp)
08475ee1 +0x2881:  mov    %eax,(%esp)
08475ee4 +0x2884:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475ee9 +0x2889:  lea    -0x310(%ebp),%eax
08475eef +0x288f:  mov    %eax,(%esp)
08475ef2 +0x2892:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475ef7 +0x2897:  movl   $0xffffffff,0x4(%esp)
08475eff +0x289f:  mov    %eax,(%esp)
08475f02 +0x28a2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475f07 +0x28a7:  lea    -0x310(%ebp),%eax
08475f0d +0x28ad:  mov    %eax,(%esp)
08475f10 +0x28b0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475f15 +0x28b5:  movl   $0x12,0x8(%esp)
08475f1d +0x28bd:  mov    -0x218(%ebp),%edx
08475f23 +0x28c3:  mov    %edx,0x4(%esp)
08475f27 +0x28c7:  mov    %eax,(%esp)
08475f2a +0x28ca:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475f2f +0x28cf:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475f34 +0x28d4:  lea    -0x310(%ebp),%edx
08475f3a +0x28da:  mov    %edx,0x8(%esp)
08475f3e +0x28de:  movl   $0x1,0x4(%esp)
08475f46 +0x28e6:  mov    %eax,(%esp)
08475f49 +0x28e9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475f4e +0x28ee:  jmp    0847abfb <+0x759b>
08475f53 +0x28f3:  mov    0x8(%ebp),%eax
08475f56 +0x28f6:  mov    %eax,-0x214(%ebp)
08475f5c +0x28fc:  lea    -0x310(%ebp),%eax
08475f62 +0x2902:  mov    %eax,(%esp)
08475f65 +0x2905:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475f6a +0x290a:  movl   $0x86,0x4(%esp)
08475f72 +0x2912:  mov    %eax,(%esp)
08475f75 +0x2915:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475f7a +0x291a:  lea    -0x310(%ebp),%eax
08475f80 +0x2920:  mov    %eax,(%esp)
08475f83 +0x2923:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475f88 +0x2928:  movl   $0xffffffff,0x4(%esp)
08475f90 +0x2930:  mov    %eax,(%esp)
08475f93 +0x2933:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08475f98 +0x2938:  lea    -0x310(%ebp),%eax
08475f9e +0x293e:  mov    %eax,(%esp)
08475fa1 +0x2941:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08475fa6 +0x2946:  movl   $0xe,0x8(%esp)
08475fae +0x294e:  mov    -0x214(%ebp),%edx
08475fb4 +0x2954:  mov    %edx,0x4(%esp)
08475fb8 +0x2958:  mov    %eax,(%esp)
08475fbb +0x295b:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08475fc0 +0x2960:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08475fc5 +0x2965:  lea    -0x310(%ebp),%edx
08475fcb +0x296b:  mov    %edx,0x8(%esp)
08475fcf +0x296f:  movl   $0x1,0x4(%esp)
08475fd7 +0x2977:  mov    %eax,(%esp)
08475fda +0x297a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08475fdf +0x297f:  jmp    0847abfb <+0x759b>
08475fe4 +0x2984:  mov    0x8(%ebp),%eax
08475fe7 +0x2987:  mov    %eax,-0x210(%ebp)
08475fed +0x298d:  lea    -0x310(%ebp),%eax
08475ff3 +0x2993:  mov    %eax,(%esp)
08475ff6 +0x2996:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08475ffb +0x299b:  movl   $0x55,0x4(%esp)
08476003 +0x29a3:  mov    %eax,(%esp)
08476006 +0x29a6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847600b +0x29ab:  lea    -0x310(%ebp),%eax
08476011 +0x29b1:  mov    %eax,(%esp)
08476014 +0x29b4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476019 +0x29b9:  movl   $0xffffffff,0x4(%esp)
08476021 +0x29c1:  mov    %eax,(%esp)
08476024 +0x29c4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476029 +0x29c9:  lea    -0x310(%ebp),%eax
0847602f +0x29cf:  mov    %eax,(%esp)
08476032 +0x29d2:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476037 +0x29d7:  movl   $0x12,0x8(%esp)
0847603f +0x29df:  mov    -0x210(%ebp),%edx
08476045 +0x29e5:  mov    %edx,0x4(%esp)
08476049 +0x29e9:  mov    %eax,(%esp)
0847604c +0x29ec:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476051 +0x29f1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476056 +0x29f6:  lea    -0x310(%ebp),%edx
0847605c +0x29fc:  mov    %edx,0x8(%esp)
08476060 +0x2a00:  movl   $0x1,0x4(%esp)
08476068 +0x2a08:  mov    %eax,(%esp)
0847606b +0x2a0b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476070 +0x2a10:  jmp    0847abfb <+0x759b>
08476075 +0x2a15:  mov    0x8(%ebp),%eax
08476078 +0x2a18:  mov    %eax,-0x20c(%ebp)
0847607e +0x2a1e:  lea    -0x310(%ebp),%eax
08476084 +0x2a24:  mov    %eax,(%esp)
08476087 +0x2a27:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847608c +0x2a2c:  movl   $0x82,0x4(%esp)
08476094 +0x2a34:  mov    %eax,(%esp)
08476097 +0x2a37:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847609c +0x2a3c:  mov    -0x20c(%ebp),%eax
084760a2 +0x2a42:  mov    0xe(%eax),%eax
084760a5 +0x2a45:  mov    %eax,%ebx
084760a7 +0x2a47:  lea    -0x310(%ebp),%eax
084760ad +0x2a4d:  mov    %eax,(%esp)
084760b0 +0x2a50:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084760b5 +0x2a55:  mov    %ebx,0x4(%esp)
084760b9 +0x2a59:  mov    %eax,(%esp)
084760bc +0x2a5c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084760c1 +0x2a61:  lea    -0x310(%ebp),%eax
084760c7 +0x2a67:  mov    %eax,(%esp)
084760ca +0x2a6a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084760cf +0x2a6f:  movl   $0x12,0x8(%esp)
084760d7 +0x2a77:  mov    -0x20c(%ebp),%edx
084760dd +0x2a7d:  mov    %edx,0x4(%esp)
084760e1 +0x2a81:  mov    %eax,(%esp)
084760e4 +0x2a84:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084760e9 +0x2a89:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084760ee +0x2a8e:  lea    -0x310(%ebp),%edx
084760f4 +0x2a94:  mov    %edx,0x8(%esp)
084760f8 +0x2a98:  movl   $0x1,0x4(%esp)
08476100 +0x2aa0:  mov    %eax,(%esp)
08476103 +0x2aa3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476108 +0x2aa8:  jmp    0847abfb <+0x759b>
0847610d +0x2aad:  mov    0x8(%ebp),%eax
08476110 +0x2ab0:  mov    %eax,-0x208(%ebp)
08476116 +0x2ab6:  lea    -0x310(%ebp),%eax
0847611c +0x2abc:  mov    %eax,(%esp)
0847611f +0x2abf:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476124 +0x2ac4:  movl   $0x99,0x4(%esp)
0847612c +0x2acc:  mov    %eax,(%esp)
0847612f +0x2acf:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476134 +0x2ad4:  mov    -0x208(%ebp),%eax
0847613a +0x2ada:  mov    0xa(%eax),%ebx
0847613d +0x2add:  lea    -0x310(%ebp),%eax
08476143 +0x2ae3:  mov    %eax,(%esp)
08476146 +0x2ae6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847614b +0x2aeb:  mov    %ebx,0x4(%esp)
0847614f +0x2aef:  mov    %eax,(%esp)
08476152 +0x2af2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476157 +0x2af7:  lea    -0x310(%ebp),%eax
0847615d +0x2afd:  mov    %eax,(%esp)
08476160 +0x2b00:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476165 +0x2b05:  movl   $0x15c,0x8(%esp)
0847616d +0x2b0d:  mov    -0x208(%ebp),%edx
08476173 +0x2b13:  mov    %edx,0x4(%esp)
08476177 +0x2b17:  mov    %eax,(%esp)
0847617a +0x2b1a:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847617f +0x2b1f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476184 +0x2b24:  lea    -0x310(%ebp),%edx
0847618a +0x2b2a:  mov    %edx,0x8(%esp)
0847618e +0x2b2e:  movl   $0x1,0x4(%esp)
08476196 +0x2b36:  mov    %eax,(%esp)
08476199 +0x2b39:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847619e +0x2b3e:  jmp    0847abfb <+0x759b>
084761a3 +0x2b43:  mov    0x8(%ebp),%eax
084761a6 +0x2b46:  mov    %eax,-0x204(%ebp)
084761ac +0x2b4c:  lea    -0x310(%ebp),%eax
084761b2 +0x2b52:  mov    %eax,(%esp)
084761b5 +0x2b55:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084761ba +0x2b5a:  movl   $0xaa,0x4(%esp)
084761c2 +0x2b62:  mov    %eax,(%esp)
084761c5 +0x2b65:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084761ca +0x2b6a:  lea    -0x310(%ebp),%eax
084761d0 +0x2b70:  mov    %eax,(%esp)
084761d3 +0x2b73:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084761d8 +0x2b78:  movl   $0xffffffff,0x4(%esp)
084761e0 +0x2b80:  mov    %eax,(%esp)
084761e3 +0x2b83:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084761e8 +0x2b88:  mov    -0x204(%ebp),%eax
084761ee +0x2b8e:  movzwl 0x2(%eax),%eax
084761f2 +0x2b92:  movzwl %ax,%ebx
084761f5 +0x2b95:  lea    -0x310(%ebp),%eax
084761fb +0x2b9b:  mov    %eax,(%esp)
084761fe +0x2b9e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476203 +0x2ba3:  mov    %ebx,0x8(%esp)
08476207 +0x2ba7:  mov    -0x204(%ebp),%edx
0847620d +0x2bad:  mov    %edx,0x4(%esp)
08476211 +0x2bb1:  mov    %eax,(%esp)
08476214 +0x2bb4:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476219 +0x2bb9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847621e +0x2bbe:  lea    -0x310(%ebp),%edx
08476224 +0x2bc4:  mov    %edx,0x8(%esp)
08476228 +0x2bc8:  movl   $0x1,0x4(%esp)
08476230 +0x2bd0:  mov    %eax,(%esp)
08476233 +0x2bd3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476238 +0x2bd8:  jmp    0847abfb <+0x759b>
0847623d +0x2bdd:  mov    0x8(%ebp),%eax
08476240 +0x2be0:  mov    %eax,-0x200(%ebp)
08476246 +0x2be6:  lea    -0x310(%ebp),%eax
0847624c +0x2bec:  mov    %eax,(%esp)
0847624f +0x2bef:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476254 +0x2bf4:  movl   $0xba,0x4(%esp)
0847625c +0x2bfc:  mov    %eax,(%esp)
0847625f +0x2bff:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476264 +0x2c04:  mov    -0x200(%ebp),%eax
0847626a +0x2c0a:  mov    0xa(%eax),%eax
0847626d +0x2c0d:  mov    %eax,%ebx
0847626f +0x2c0f:  lea    -0x310(%ebp),%eax
08476275 +0x2c15:  mov    %eax,(%esp)
08476278 +0x2c18:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847627d +0x2c1d:  mov    %ebx,0x4(%esp)
08476281 +0x2c21:  mov    %eax,(%esp)
08476284 +0x2c24:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476289 +0x2c29:  lea    -0x310(%ebp),%eax
0847628f +0x2c2f:  mov    %eax,(%esp)
08476292 +0x2c32:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476297 +0x2c37:  movl   $0x13,0x8(%esp)
0847629f +0x2c3f:  mov    -0x200(%ebp),%edx
084762a5 +0x2c45:  mov    %edx,0x4(%esp)
084762a9 +0x2c49:  mov    %eax,(%esp)
084762ac +0x2c4c:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084762b1 +0x2c51:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084762b6 +0x2c56:  lea    -0x310(%ebp),%edx
084762bc +0x2c5c:  mov    %edx,0x8(%esp)
084762c0 +0x2c60:  movl   $0x1,0x4(%esp)
084762c8 +0x2c68:  mov    %eax,(%esp)
084762cb +0x2c6b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084762d0 +0x2c70:  jmp    0847abfb <+0x759b>
084762d5 +0x2c75:  mov    0x8(%ebp),%eax
084762d8 +0x2c78:  mov    %eax,-0x1fc(%ebp)
084762de +0x2c7e:  lea    -0x310(%ebp),%eax
084762e4 +0x2c84:  mov    %eax,(%esp)
084762e7 +0x2c87:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084762ec +0x2c8c:  movl   $0xbc,0x4(%esp)
084762f4 +0x2c94:  mov    %eax,(%esp)
084762f7 +0x2c97:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084762fc +0x2c9c:  mov    -0x1fc(%ebp),%eax
08476302 +0x2ca2:  mov    0xe(%eax),%eax
08476305 +0x2ca5:  mov    %eax,%ebx
08476307 +0x2ca7:  lea    -0x310(%ebp),%eax
0847630d +0x2cad:  mov    %eax,(%esp)
08476310 +0x2cb0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476315 +0x2cb5:  mov    %ebx,0x4(%esp)
08476319 +0x2cb9:  mov    %eax,(%esp)
0847631c +0x2cbc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476321 +0x2cc1:  lea    -0x310(%ebp),%eax
08476327 +0x2cc7:  mov    %eax,(%esp)
0847632a +0x2cca:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847632f +0x2ccf:  movl   $0x3b,0x8(%esp)
08476337 +0x2cd7:  mov    -0x1fc(%ebp),%edx
0847633d +0x2cdd:  mov    %edx,0x4(%esp)
08476341 +0x2ce1:  mov    %eax,(%esp)
08476344 +0x2ce4:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476349 +0x2ce9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847634e +0x2cee:  lea    -0x310(%ebp),%edx
08476354 +0x2cf4:  mov    %edx,0x8(%esp)
08476358 +0x2cf8:  movl   $0x1,0x4(%esp)
08476360 +0x2d00:  mov    %eax,(%esp)
08476363 +0x2d03:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476368 +0x2d08:  jmp    0847abfb <+0x759b>
0847636d +0x2d0d:  mov    0x8(%ebp),%eax
08476370 +0x2d10:  mov    %eax,-0x1f8(%ebp)
08476376 +0x2d16:  lea    -0x310(%ebp),%eax
0847637c +0x2d1c:  mov    %eax,(%esp)
0847637f +0x2d1f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476384 +0x2d24:  movl   $0xbd,0x4(%esp)
0847638c +0x2d2c:  mov    %eax,(%esp)
0847638f +0x2d2f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476394 +0x2d34:  mov    -0x1f8(%ebp),%eax
0847639a +0x2d3a:  mov    0xe(%eax),%eax
0847639d +0x2d3d:  mov    %eax,%ebx
0847639f +0x2d3f:  lea    -0x310(%ebp),%eax
084763a5 +0x2d45:  mov    %eax,(%esp)
084763a8 +0x2d48:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084763ad +0x2d4d:  mov    %ebx,0x4(%esp)
084763b1 +0x2d51:  mov    %eax,(%esp)
084763b4 +0x2d54:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084763b9 +0x2d59:  lea    -0x310(%ebp),%eax
084763bf +0x2d5f:  mov    %eax,(%esp)
084763c2 +0x2d62:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084763c7 +0x2d67:  movl   $0x31,0x8(%esp)
084763cf +0x2d6f:  mov    -0x1f8(%ebp),%edx
084763d5 +0x2d75:  mov    %edx,0x4(%esp)
084763d9 +0x2d79:  mov    %eax,(%esp)
084763dc +0x2d7c:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084763e1 +0x2d81:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084763e6 +0x2d86:  lea    -0x310(%ebp),%edx
084763ec +0x2d8c:  mov    %edx,0x8(%esp)
084763f0 +0x2d90:  movl   $0x1,0x4(%esp)
084763f8 +0x2d98:  mov    %eax,(%esp)
084763fb +0x2d9b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476400 +0x2da0:  jmp    0847abfb <+0x759b>
08476405 +0x2da5:  mov    0x8(%ebp),%eax
08476408 +0x2da8:  mov    %eax,-0x1f4(%ebp)
0847640e +0x2dae:  lea    -0x310(%ebp),%eax
08476414 +0x2db4:  mov    %eax,(%esp)
08476417 +0x2db7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847641c +0x2dbc:  movl   $0x92,0x4(%esp)
08476424 +0x2dc4:  mov    %eax,(%esp)
08476427 +0x2dc7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847642c +0x2dcc:  lea    -0x310(%ebp),%eax
08476432 +0x2dd2:  mov    %eax,(%esp)
08476435 +0x2dd5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847643a +0x2dda:  movl   $0xffffffff,0x4(%esp)
08476442 +0x2de2:  mov    %eax,(%esp)
08476445 +0x2de5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847644a +0x2dea:  lea    -0x310(%ebp),%eax
08476450 +0x2df0:  mov    %eax,(%esp)
08476453 +0x2df3:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476458 +0x2df8:  movl   $0x10b,0x8(%esp)
08476460 +0x2e00:  mov    -0x1f4(%ebp),%edx
08476466 +0x2e06:  mov    %edx,0x4(%esp)
0847646a +0x2e0a:  mov    %eax,(%esp)
0847646d +0x2e0d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476472 +0x2e12:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476477 +0x2e17:  lea    -0x310(%ebp),%edx
0847647d +0x2e1d:  mov    %edx,0x8(%esp)
08476481 +0x2e21:  movl   $0x1,0x4(%esp)
08476489 +0x2e29:  mov    %eax,(%esp)
0847648c +0x2e2c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476491 +0x2e31:  jmp    0847abfb <+0x759b>
08476496 +0x2e36:  mov    0x8(%ebp),%eax
08476499 +0x2e39:  mov    %eax,-0x1f0(%ebp)
0847649f +0x2e3f:  lea    -0x310(%ebp),%eax
084764a5 +0x2e45:  mov    %eax,(%esp)
084764a8 +0x2e48:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084764ad +0x2e4d:  movl   $0x94,0x4(%esp)
084764b5 +0x2e55:  mov    %eax,(%esp)
084764b8 +0x2e58:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084764bd +0x2e5d:  lea    -0x310(%ebp),%eax
084764c3 +0x2e63:  mov    %eax,(%esp)
084764c6 +0x2e66:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084764cb +0x2e6b:  movl   $0xffffffff,0x4(%esp)
084764d3 +0x2e73:  mov    %eax,(%esp)
084764d6 +0x2e76:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084764db +0x2e7b:  lea    -0x310(%ebp),%eax
084764e1 +0x2e81:  mov    %eax,(%esp)
084764e4 +0x2e84:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084764e9 +0x2e89:  movl   $0x30,0x8(%esp)
084764f1 +0x2e91:  mov    -0x1f0(%ebp),%edx
084764f7 +0x2e97:  mov    %edx,0x4(%esp)
084764fb +0x2e9b:  mov    %eax,(%esp)
084764fe +0x2e9e:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476503 +0x2ea3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476508 +0x2ea8:  lea    -0x310(%ebp),%edx
0847650e +0x2eae:  mov    %edx,0x8(%esp)
08476512 +0x2eb2:  movl   $0x1,0x4(%esp)
0847651a +0x2eba:  mov    %eax,(%esp)
0847651d +0x2ebd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476522 +0x2ec2:  jmp    0847abfb <+0x759b>
08476527 +0x2ec7:  mov    0x8(%ebp),%eax
0847652a +0x2eca:  mov    %eax,-0x1ec(%ebp)
08476530 +0x2ed0:  lea    -0x310(%ebp),%eax
08476536 +0x2ed6:  mov    %eax,(%esp)
08476539 +0x2ed9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847653e +0x2ede:  movl   $0xb7,0x4(%esp)
08476546 +0x2ee6:  mov    %eax,(%esp)
08476549 +0x2ee9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847654e +0x2eee:  lea    -0x310(%ebp),%eax
08476554 +0x2ef4:  mov    %eax,(%esp)
08476557 +0x2ef7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847655c +0x2efc:  movl   $0xffffffff,0x4(%esp)
08476564 +0x2f04:  mov    %eax,(%esp)
08476567 +0x2f07:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847656c +0x2f0c:  lea    -0x310(%ebp),%eax
08476572 +0x2f12:  mov    %eax,(%esp)
08476575 +0x2f15:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847657a +0x2f1a:  movl   $0x10a,0x8(%esp)
08476582 +0x2f22:  mov    -0x1ec(%ebp),%edx
08476588 +0x2f28:  mov    %edx,0x4(%esp)
0847658c +0x2f2c:  mov    %eax,(%esp)
0847658f +0x2f2f:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476594 +0x2f34:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476599 +0x2f39:  lea    -0x310(%ebp),%edx
0847659f +0x2f3f:  mov    %edx,0x8(%esp)
084765a3 +0x2f43:  movl   $0x1,0x4(%esp)
084765ab +0x2f4b:  mov    %eax,(%esp)
084765ae +0x2f4e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084765b3 +0x2f53:  jmp    0847abfb <+0x759b>
084765b8 +0x2f58:  mov    0x8(%ebp),%eax
084765bb +0x2f5b:  mov    %eax,-0x1e8(%ebp)
084765c1 +0x2f61:  lea    -0x310(%ebp),%eax
084765c7 +0x2f67:  mov    %eax,(%esp)
084765ca +0x2f6a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084765cf +0x2f6f:  movl   $0xb8,0x4(%esp)
084765d7 +0x2f77:  mov    %eax,(%esp)
084765da +0x2f7a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084765df +0x2f7f:  lea    -0x310(%ebp),%eax
084765e5 +0x2f85:  mov    %eax,(%esp)
084765e8 +0x2f88:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084765ed +0x2f8d:  movl   $0xffffffff,0x4(%esp)
084765f5 +0x2f95:  mov    %eax,(%esp)
084765f8 +0x2f98:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084765fd +0x2f9d:  lea    -0x310(%ebp),%eax
08476603 +0x2fa3:  mov    %eax,(%esp)
08476606 +0x2fa6:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847660b +0x2fab:  movl   $0x14,0x8(%esp)
08476613 +0x2fb3:  mov    -0x1e8(%ebp),%edx
08476619 +0x2fb9:  mov    %edx,0x4(%esp)
0847661d +0x2fbd:  mov    %eax,(%esp)
08476620 +0x2fc0:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476625 +0x2fc5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847662a +0x2fca:  lea    -0x310(%ebp),%edx
08476630 +0x2fd0:  mov    %edx,0x8(%esp)
08476634 +0x2fd4:  movl   $0x5,0x4(%esp)
0847663c +0x2fdc:  mov    %eax,(%esp)
0847663f +0x2fdf:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476644 +0x2fe4:  jmp    0847abfb <+0x759b>
08476649 +0x2fe9:  mov    0x8(%ebp),%eax
0847664c +0x2fec:  mov    %eax,-0x1e4(%ebp)
08476652 +0x2ff2:  lea    -0x310(%ebp),%eax
08476658 +0x2ff8:  mov    %eax,(%esp)
0847665b +0x2ffb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476660 +0x3000:  movl   $0xce,0x4(%esp)
08476668 +0x3008:  mov    %eax,(%esp)
0847666b +0x300b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476670 +0x3010:  lea    -0x310(%ebp),%eax
08476676 +0x3016:  mov    %eax,(%esp)
08476679 +0x3019:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847667e +0x301e:  movl   $0xffffffff,0x4(%esp)
08476686 +0x3026:  mov    %eax,(%esp)
08476689 +0x3029:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847668e +0x302e:  lea    -0x310(%ebp),%eax
08476694 +0x3034:  mov    %eax,(%esp)
08476697 +0x3037:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847669c +0x303c:  movl   $0x16,0x8(%esp)
084766a4 +0x3044:  mov    -0x1e4(%ebp),%edx
084766aa +0x304a:  mov    %edx,0x4(%esp)
084766ae +0x304e:  mov    %eax,(%esp)
084766b1 +0x3051:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084766b6 +0x3056:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084766bb +0x305b:  lea    -0x310(%ebp),%edx
084766c1 +0x3061:  mov    %edx,0x8(%esp)
084766c5 +0x3065:  movl   $0x1,0x4(%esp)
084766cd +0x306d:  mov    %eax,(%esp)
084766d0 +0x3070:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084766d5 +0x3075:  jmp    0847abfb <+0x759b>
084766da +0x307a:  mov    0x8(%ebp),%eax
084766dd +0x307d:  mov    %eax,-0x1e0(%ebp)
084766e3 +0x3083:  lea    -0x310(%ebp),%eax
084766e9 +0x3089:  mov    %eax,(%esp)
084766ec +0x308c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084766f1 +0x3091:  movl   $0xd3,0x4(%esp)
084766f9 +0x3099:  mov    %eax,(%esp)
084766fc +0x309c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476701 +0x30a1:  mov    -0x1e0(%ebp),%eax
08476707 +0x30a7:  mov    0xa(%eax),%eax
0847670a +0x30aa:  mov    %eax,%ebx
0847670c +0x30ac:  lea    -0x310(%ebp),%eax
08476712 +0x30b2:  mov    %eax,(%esp)
08476715 +0x30b5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847671a +0x30ba:  mov    %ebx,0x4(%esp)
0847671e +0x30be:  mov    %eax,(%esp)
08476721 +0x30c1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476726 +0x30c6:  lea    -0x310(%ebp),%eax
0847672c +0x30cc:  mov    %eax,(%esp)
0847672f +0x30cf:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476734 +0x30d4:  movl   $0x34,0x8(%esp)
0847673c +0x30dc:  mov    -0x1e0(%ebp),%edx
08476742 +0x30e2:  mov    %edx,0x4(%esp)
08476746 +0x30e6:  mov    %eax,(%esp)
08476749 +0x30e9:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847674e +0x30ee:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476753 +0x30f3:  lea    -0x310(%ebp),%edx
08476759 +0x30f9:  mov    %edx,0x8(%esp)
0847675d +0x30fd:  movl   $0x1,0x4(%esp)
08476765 +0x3105:  mov    %eax,(%esp)
08476768 +0x3108:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847676d +0x310d:  jmp    0847abfb <+0x759b>
08476772 +0x3112:  mov    0x8(%ebp),%eax
08476775 +0x3115:  mov    %eax,-0x1dc(%ebp)
0847677b +0x311b:  lea    -0x310(%ebp),%eax
08476781 +0x3121:  mov    %eax,(%esp)
08476784 +0x3124:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476789 +0x3129:  movl   $0xda,0x4(%esp)
08476791 +0x3131:  mov    %eax,(%esp)
08476794 +0x3134:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476799 +0x3139:  mov    -0x1dc(%ebp),%eax
0847679f +0x313f:  mov    0xe(%eax),%eax
084767a2 +0x3142:  mov    %eax,%ebx
084767a4 +0x3144:  lea    -0x310(%ebp),%eax
084767aa +0x314a:  mov    %eax,(%esp)
084767ad +0x314d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084767b2 +0x3152:  mov    %ebx,0x4(%esp)
084767b6 +0x3156:  mov    %eax,(%esp)
084767b9 +0x3159:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084767be +0x315e:  lea    -0x310(%ebp),%eax
084767c4 +0x3164:  mov    %eax,(%esp)
084767c7 +0x3167:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084767cc +0x316c:  movl   $0x13,0x8(%esp)
084767d4 +0x3174:  mov    -0x1dc(%ebp),%edx
084767da +0x317a:  mov    %edx,0x4(%esp)
084767de +0x317e:  mov    %eax,(%esp)
084767e1 +0x3181:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084767e6 +0x3186:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084767eb +0x318b:  lea    -0x310(%ebp),%edx
084767f1 +0x3191:  mov    %edx,0x8(%esp)
084767f5 +0x3195:  movl   $0x1,0x4(%esp)
084767fd +0x319d:  mov    %eax,(%esp)
08476800 +0x31a0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476805 +0x31a5:  jmp    0847abfb <+0x759b>
0847680a +0x31aa:  mov    0x8(%ebp),%eax
0847680d +0x31ad:  mov    %eax,-0x1d8(%ebp)
08476813 +0x31b3:  lea    -0x310(%ebp),%eax
08476819 +0x31b9:  mov    %eax,(%esp)
0847681c +0x31bc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476821 +0x31c1:  movl   $0xdb,0x4(%esp)
08476829 +0x31c9:  mov    %eax,(%esp)
0847682c +0x31cc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476831 +0x31d1:  mov    -0x1d8(%ebp),%eax
08476837 +0x31d7:  mov    0xe(%eax),%eax
0847683a +0x31da:  mov    %eax,%ebx
0847683c +0x31dc:  lea    -0x310(%ebp),%eax
08476842 +0x31e2:  mov    %eax,(%esp)
08476845 +0x31e5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847684a +0x31ea:  mov    %ebx,0x4(%esp)
0847684e +0x31ee:  mov    %eax,(%esp)
08476851 +0x31f1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476856 +0x31f6:  lea    -0x310(%ebp),%eax
0847685c +0x31fc:  mov    %eax,(%esp)
0847685f +0x31ff:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476864 +0x3204:  movl   $0x16,0x8(%esp)
0847686c +0x320c:  mov    -0x1d8(%ebp),%edx
08476872 +0x3212:  mov    %edx,0x4(%esp)
08476876 +0x3216:  mov    %eax,(%esp)
08476879 +0x3219:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847687e +0x321e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476883 +0x3223:  lea    -0x310(%ebp),%edx
08476889 +0x3229:  mov    %edx,0x8(%esp)
0847688d +0x322d:  movl   $0x1,0x4(%esp)
08476895 +0x3235:  mov    %eax,(%esp)
08476898 +0x3238:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847689d +0x323d:  jmp    0847abfb <+0x759b>
084768a2 +0x3242:  mov    0x8(%ebp),%eax
084768a5 +0x3245:  mov    %eax,-0x1d4(%ebp)
084768ab +0x324b:  lea    -0x310(%ebp),%eax
084768b1 +0x3251:  mov    %eax,(%esp)
084768b4 +0x3254:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084768b9 +0x3259:  movl   $0xdc,0x4(%esp)
084768c1 +0x3261:  mov    %eax,(%esp)
084768c4 +0x3264:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084768c9 +0x3269:  mov    -0x1d4(%ebp),%eax
084768cf +0x326f:  mov    0xe(%eax),%eax
084768d2 +0x3272:  mov    %eax,%ebx
084768d4 +0x3274:  lea    -0x310(%ebp),%eax
084768da +0x327a:  mov    %eax,(%esp)
084768dd +0x327d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084768e2 +0x3282:  mov    %ebx,0x4(%esp)
084768e6 +0x3286:  mov    %eax,(%esp)
084768e9 +0x3289:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084768ee +0x328e:  lea    -0x310(%ebp),%eax
084768f4 +0x3294:  mov    %eax,(%esp)
084768f7 +0x3297:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084768fc +0x329c:  movl   $0x47,0x8(%esp)
08476904 +0x32a4:  mov    -0x1d4(%ebp),%edx
0847690a +0x32aa:  mov    %edx,0x4(%esp)
0847690e +0x32ae:  mov    %eax,(%esp)
08476911 +0x32b1:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476916 +0x32b6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847691b +0x32bb:  lea    -0x310(%ebp),%edx
08476921 +0x32c1:  mov    %edx,0x8(%esp)
08476925 +0x32c5:  movl   $0x1,0x4(%esp)
0847692d +0x32cd:  mov    %eax,(%esp)
08476930 +0x32d0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476935 +0x32d5:  jmp    0847abfb <+0x759b>
0847693a +0x32da:  mov    0x8(%ebp),%eax
0847693d +0x32dd:  mov    %eax,-0x1d0(%ebp)
08476943 +0x32e3:  lea    -0x310(%ebp),%eax
08476949 +0x32e9:  mov    %eax,(%esp)
0847694c +0x32ec:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476951 +0x32f1:  movl   $0xdd,0x4(%esp)
08476959 +0x32f9:  mov    %eax,(%esp)
0847695c +0x32fc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476961 +0x3301:  mov    -0x1d0(%ebp),%eax
08476967 +0x3307:  mov    0xe(%eax),%eax
0847696a +0x330a:  mov    %eax,%ebx
0847696c +0x330c:  lea    -0x310(%ebp),%eax
08476972 +0x3312:  mov    %eax,(%esp)
08476975 +0x3315:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847697a +0x331a:  mov    %ebx,0x4(%esp)
0847697e +0x331e:  mov    %eax,(%esp)
08476981 +0x3321:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476986 +0x3326:  lea    -0x310(%ebp),%eax
0847698c +0x332c:  mov    %eax,(%esp)
0847698f +0x332f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476994 +0x3334:  movl   $0x16,0x8(%esp)
0847699c +0x333c:  mov    -0x1d0(%ebp),%edx
084769a2 +0x3342:  mov    %edx,0x4(%esp)
084769a6 +0x3346:  mov    %eax,(%esp)
084769a9 +0x3349:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084769ae +0x334e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084769b3 +0x3353:  lea    -0x310(%ebp),%edx
084769b9 +0x3359:  mov    %edx,0x8(%esp)
084769bd +0x335d:  movl   $0x1,0x4(%esp)
084769c5 +0x3365:  mov    %eax,(%esp)
084769c8 +0x3368:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084769cd +0x336d:  jmp    0847abfb <+0x759b>
084769d2 +0x3372:  mov    0x8(%ebp),%eax
084769d5 +0x3375:  mov    %eax,-0x1cc(%ebp)
084769db +0x337b:  lea    -0x310(%ebp),%eax
084769e1 +0x3381:  mov    %eax,(%esp)
084769e4 +0x3384:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084769e9 +0x3389:  movl   $0xde,0x4(%esp)
084769f1 +0x3391:  mov    %eax,(%esp)
084769f4 +0x3394:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084769f9 +0x3399:  mov    -0x1cc(%ebp),%eax
084769ff +0x339f:  mov    0xe(%eax),%eax
08476a02 +0x33a2:  mov    %eax,%ebx
08476a04 +0x33a4:  lea    -0x310(%ebp),%eax
08476a0a +0x33aa:  mov    %eax,(%esp)
08476a0d +0x33ad:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476a12 +0x33b2:  mov    %ebx,0x4(%esp)
08476a16 +0x33b6:  mov    %eax,(%esp)
08476a19 +0x33b9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476a1e +0x33be:  lea    -0x310(%ebp),%eax
08476a24 +0x33c4:  mov    %eax,(%esp)
08476a27 +0x33c7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476a2c +0x33cc:  movl   $0x34,0x8(%esp)
08476a34 +0x33d4:  mov    -0x1cc(%ebp),%edx
08476a3a +0x33da:  mov    %edx,0x4(%esp)
08476a3e +0x33de:  mov    %eax,(%esp)
08476a41 +0x33e1:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476a46 +0x33e6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476a4b +0x33eb:  lea    -0x310(%ebp),%edx
08476a51 +0x33f1:  mov    %edx,0x8(%esp)
08476a55 +0x33f5:  movl   $0x1,0x4(%esp)
08476a5d +0x33fd:  mov    %eax,(%esp)
08476a60 +0x3400:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476a65 +0x3405:  jmp    0847abfb <+0x759b>
08476a6a +0x340a:  mov    0x8(%ebp),%eax
08476a6d +0x340d:  mov    %eax,-0x1c8(%ebp)
08476a73 +0x3413:  lea    -0x310(%ebp),%eax
08476a79 +0x3419:  mov    %eax,(%esp)
08476a7c +0x341c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476a81 +0x3421:  movl   $0xe5,0x4(%esp)
08476a89 +0x3429:  mov    %eax,(%esp)
08476a8c +0x342c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476a91 +0x3431:  mov    -0x1c8(%ebp),%eax
08476a97 +0x3437:  mov    0xe(%eax),%eax
08476a9a +0x343a:  mov    %eax,%ebx
08476a9c +0x343c:  lea    -0x310(%ebp),%eax
08476aa2 +0x3442:  mov    %eax,(%esp)
08476aa5 +0x3445:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476aaa +0x344a:  mov    %ebx,0x4(%esp)
08476aae +0x344e:  mov    %eax,(%esp)
08476ab1 +0x3451:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476ab6 +0x3456:  lea    -0x310(%ebp),%eax
08476abc +0x345c:  mov    %eax,(%esp)
08476abf +0x345f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476ac4 +0x3464:  movl   $0x62,0x8(%esp)
08476acc +0x346c:  mov    -0x1c8(%ebp),%edx
08476ad2 +0x3472:  mov    %edx,0x4(%esp)
08476ad6 +0x3476:  mov    %eax,(%esp)
08476ad9 +0x3479:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476ade +0x347e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476ae3 +0x3483:  lea    -0x310(%ebp),%edx
08476ae9 +0x3489:  mov    %edx,0x8(%esp)
08476aed +0x348d:  movl   $0x1,0x4(%esp)
08476af5 +0x3495:  mov    %eax,(%esp)
08476af8 +0x3498:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476afd +0x349d:  jmp    0847abfb <+0x759b>
08476b02 +0x34a2:  lea    -0x310(%ebp),%eax
08476b08 +0x34a8:  mov    %eax,(%esp)
08476b0b +0x34ab:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476b10 +0x34b0:  movl   $0xe6,0x4(%esp)
08476b18 +0x34b8:  mov    %eax,(%esp)
08476b1b +0x34bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476b20 +0x34c0:  lea    -0x310(%ebp),%eax
08476b26 +0x34c6:  mov    %eax,(%esp)
08476b29 +0x34c9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476b2e +0x34ce:  movl   $0xffffffff,0x4(%esp)
08476b36 +0x34d6:  mov    %eax,(%esp)
08476b39 +0x34d9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476b3e +0x34de:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476b43 +0x34e3:  lea    -0x310(%ebp),%edx
08476b49 +0x34e9:  mov    %edx,0x8(%esp)
08476b4d +0x34ed:  movl   $0x1,0x4(%esp)
08476b55 +0x34f5:  mov    %eax,(%esp)
08476b58 +0x34f8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476b5d +0x34fd:  jmp    0847abfb <+0x759b>
08476b62 +0x3502:  mov    0x8(%ebp),%eax
08476b65 +0x3505:  mov    %eax,-0x1c4(%ebp)
08476b6b +0x350b:  lea    -0x310(%ebp),%eax
08476b71 +0x3511:  mov    %eax,(%esp)
08476b74 +0x3514:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476b79 +0x3519:  movl   $0xea,0x4(%esp)
08476b81 +0x3521:  mov    %eax,(%esp)
08476b84 +0x3524:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476b89 +0x3529:  mov    -0x1c4(%ebp),%eax
08476b8f +0x352f:  mov    0x14(%eax),%eax
08476b92 +0x3532:  mov    %eax,%ebx
08476b94 +0x3534:  lea    -0x310(%ebp),%eax
08476b9a +0x353a:  mov    %eax,(%esp)
08476b9d +0x353d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476ba2 +0x3542:  mov    %ebx,0x4(%esp)
08476ba6 +0x3546:  mov    %eax,(%esp)
08476ba9 +0x3549:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476bae +0x354e:  lea    -0x310(%ebp),%eax
08476bb4 +0x3554:  mov    %eax,(%esp)
08476bb7 +0x3557:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476bbc +0x355c:  movl   $0x52,0x8(%esp)
08476bc4 +0x3564:  mov    -0x1c4(%ebp),%edx
08476bca +0x356a:  mov    %edx,0x4(%esp)
08476bce +0x356e:  mov    %eax,(%esp)
08476bd1 +0x3571:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476bd6 +0x3576:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476bdb +0x357b:  lea    -0x310(%ebp),%edx
08476be1 +0x3581:  mov    %edx,0x8(%esp)
08476be5 +0x3585:  movl   $0x1,0x4(%esp)
08476bed +0x358d:  mov    %eax,(%esp)
08476bf0 +0x3590:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476bf5 +0x3595:  jmp    0847abfb <+0x759b>
08476bfa +0x359a:  mov    0x8(%ebp),%eax
08476bfd +0x359d:  mov    %eax,-0x1c0(%ebp)
08476c03 +0x35a3:  lea    -0x310(%ebp),%eax
08476c09 +0x35a9:  mov    %eax,(%esp)
08476c0c +0x35ac:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476c11 +0x35b1:  movl   $0xe7,0x4(%esp)
08476c19 +0x35b9:  mov    %eax,(%esp)
08476c1c +0x35bc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476c21 +0x35c1:  mov    -0x1c0(%ebp),%eax
08476c27 +0x35c7:  mov    0xe(%eax),%eax
08476c2a +0x35ca:  mov    %eax,%ebx
08476c2c +0x35cc:  lea    -0x310(%ebp),%eax
08476c32 +0x35d2:  mov    %eax,(%esp)
08476c35 +0x35d5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476c3a +0x35da:  mov    %ebx,0x4(%esp)
08476c3e +0x35de:  mov    %eax,(%esp)
08476c41 +0x35e1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476c46 +0x35e6:  lea    -0x310(%ebp),%eax
08476c4c +0x35ec:  mov    %eax,(%esp)
08476c4f +0x35ef:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476c54 +0x35f4:  movl   $0x30,0x8(%esp)
08476c5c +0x35fc:  mov    -0x1c0(%ebp),%edx
08476c62 +0x3602:  mov    %edx,0x4(%esp)
08476c66 +0x3606:  mov    %eax,(%esp)
08476c69 +0x3609:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476c6e +0x360e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476c73 +0x3613:  lea    -0x310(%ebp),%edx
08476c79 +0x3619:  mov    %edx,0x8(%esp)
08476c7d +0x361d:  movl   $0x1,0x4(%esp)
08476c85 +0x3625:  mov    %eax,(%esp)
08476c88 +0x3628:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476c8d +0x362d:  jmp    0847abfb <+0x759b>
08476c92 +0x3632:  mov    0x8(%ebp),%eax
08476c95 +0x3635:  mov    %eax,-0x1bc(%ebp)
08476c9b +0x363b:  lea    -0x310(%ebp),%eax
08476ca1 +0x3641:  mov    %eax,(%esp)
08476ca4 +0x3644:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476ca9 +0x3649:  movl   $0xe8,0x4(%esp)
08476cb1 +0x3651:  mov    %eax,(%esp)
08476cb4 +0x3654:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476cb9 +0x3659:  mov    -0x1bc(%ebp),%eax
08476cbf +0x365f:  mov    0xe(%eax),%eax
08476cc2 +0x3662:  mov    %eax,%ebx
08476cc4 +0x3664:  lea    -0x310(%ebp),%eax
08476cca +0x366a:  mov    %eax,(%esp)
08476ccd +0x366d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476cd2 +0x3672:  mov    %ebx,0x4(%esp)
08476cd6 +0x3676:  mov    %eax,(%esp)
08476cd9 +0x3679:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476cde +0x367e:  lea    -0x310(%ebp),%eax
08476ce4 +0x3684:  mov    %eax,(%esp)
08476ce7 +0x3687:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476cec +0x368c:  movl   $0x16,0x8(%esp)
08476cf4 +0x3694:  mov    -0x1bc(%ebp),%edx
08476cfa +0x369a:  mov    %edx,0x4(%esp)
08476cfe +0x369e:  mov    %eax,(%esp)
08476d01 +0x36a1:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476d06 +0x36a6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476d0b +0x36ab:  lea    -0x310(%ebp),%edx
08476d11 +0x36b1:  mov    %edx,0x8(%esp)
08476d15 +0x36b5:  movl   $0x1,0x4(%esp)
08476d1d +0x36bd:  mov    %eax,(%esp)
08476d20 +0x36c0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476d25 +0x36c5:  jmp    0847abfb <+0x759b>
08476d2a +0x36ca:  mov    0x8(%ebp),%eax
08476d2d +0x36cd:  mov    %eax,-0x1b8(%ebp)
08476d33 +0x36d3:  lea    -0x310(%ebp),%eax
08476d39 +0x36d9:  mov    %eax,(%esp)
08476d3c +0x36dc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476d41 +0x36e1:  movl   $0xe9,0x4(%esp)
08476d49 +0x36e9:  mov    %eax,(%esp)
08476d4c +0x36ec:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476d51 +0x36f1:  mov    -0x1b8(%ebp),%eax
08476d57 +0x36f7:  mov    0xe(%eax),%eax
08476d5a +0x36fa:  mov    %eax,%ebx
08476d5c +0x36fc:  lea    -0x310(%ebp),%eax
08476d62 +0x3702:  mov    %eax,(%esp)
08476d65 +0x3705:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476d6a +0x370a:  mov    %ebx,0x4(%esp)
08476d6e +0x370e:  mov    %eax,(%esp)
08476d71 +0x3711:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476d76 +0x3716:  lea    -0x310(%ebp),%eax
08476d7c +0x371c:  mov    %eax,(%esp)
08476d7f +0x371f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476d84 +0x3724:  movl   $0x12,0x8(%esp)
08476d8c +0x372c:  mov    -0x1b8(%ebp),%edx
08476d92 +0x3732:  mov    %edx,0x4(%esp)
08476d96 +0x3736:  mov    %eax,(%esp)
08476d99 +0x3739:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476d9e +0x373e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476da3 +0x3743:  lea    -0x310(%ebp),%edx
08476da9 +0x3749:  mov    %edx,0x8(%esp)
08476dad +0x374d:  movl   $0x1,0x4(%esp)
08476db5 +0x3755:  mov    %eax,(%esp)
08476db8 +0x3758:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476dbd +0x375d:  jmp    0847abfb <+0x759b>
08476dc2 +0x3762:  mov    0x8(%ebp),%eax
08476dc5 +0x3765:  mov    %eax,-0x1b4(%ebp)
08476dcb +0x376b:  lea    -0x310(%ebp),%eax
08476dd1 +0x3771:  mov    %eax,(%esp)
08476dd4 +0x3774:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476dd9 +0x3779:  movl   $0xed,0x4(%esp)
08476de1 +0x3781:  mov    %eax,(%esp)
08476de4 +0x3784:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476de9 +0x3789:  mov    -0x1b4(%ebp),%eax
08476def +0x378f:  mov    0xe(%eax),%eax
08476df2 +0x3792:  mov    %eax,%ebx
08476df4 +0x3794:  lea    -0x310(%ebp),%eax
08476dfa +0x379a:  mov    %eax,(%esp)
08476dfd +0x379d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476e02 +0x37a2:  mov    %ebx,0x4(%esp)
08476e06 +0x37a6:  mov    %eax,(%esp)
08476e09 +0x37a9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476e0e +0x37ae:  lea    -0x310(%ebp),%eax
08476e14 +0x37b4:  mov    %eax,(%esp)
08476e17 +0x37b7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476e1c +0x37bc:  movl   $0x2d,0x8(%esp)
08476e24 +0x37c4:  mov    -0x1b4(%ebp),%edx
08476e2a +0x37ca:  mov    %edx,0x4(%esp)
08476e2e +0x37ce:  mov    %eax,(%esp)
08476e31 +0x37d1:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476e36 +0x37d6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476e3b +0x37db:  lea    -0x310(%ebp),%edx
08476e41 +0x37e1:  mov    %edx,0x8(%esp)
08476e45 +0x37e5:  movl   $0x1,0x4(%esp)
08476e4d +0x37ed:  mov    %eax,(%esp)
08476e50 +0x37f0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476e55 +0x37f5:  jmp    0847abfb <+0x759b>
08476e5a +0x37fa:  mov    0x8(%ebp),%eax
08476e5d +0x37fd:  mov    %eax,-0x1b0(%ebp)
08476e63 +0x3803:  lea    -0x310(%ebp),%eax
08476e69 +0x3809:  mov    %eax,(%esp)
08476e6c +0x380c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476e71 +0x3811:  movl   $0x12a,0x4(%esp)
08476e79 +0x3819:  mov    %eax,(%esp)
08476e7c +0x381c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476e81 +0x3821:  lea    -0x310(%ebp),%eax
08476e87 +0x3827:  mov    %eax,(%esp)
08476e8a +0x382a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476e8f +0x382f:  movl   $0xffffffff,0x4(%esp)
08476e97 +0x3837:  mov    %eax,(%esp)
08476e9a +0x383a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476e9f +0x383f:  lea    -0x310(%ebp),%eax
08476ea5 +0x3845:  mov    %eax,(%esp)
08476ea8 +0x3848:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476ead +0x384d:  movl   $0x2e,0x8(%esp)
08476eb5 +0x3855:  mov    -0x1b0(%ebp),%edx
08476ebb +0x385b:  mov    %edx,0x4(%esp)
08476ebf +0x385f:  mov    %eax,(%esp)
08476ec2 +0x3862:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476ec7 +0x3867:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476ecc +0x386c:  lea    -0x310(%ebp),%edx
08476ed2 +0x3872:  mov    %edx,0x8(%esp)
08476ed6 +0x3876:  movl   $0x1,0x4(%esp)
08476ede +0x387e:  mov    %eax,(%esp)
08476ee1 +0x3881:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476ee6 +0x3886:  jmp    0847abfb <+0x759b>
08476eeb +0x388b:  mov    0x8(%ebp),%eax
08476eee +0x388e:  mov    %eax,-0x1ac(%ebp)
08476ef4 +0x3894:  mov    -0x1ac(%ebp),%eax
08476efa +0x389a:  movzbl 0xa(%eax),%eax
08476efe +0x389e:  test   %al,%al
08476f00 +0x38a0:  jne    08476f0c <+0x38ac>
08476f02 +0x38a2:  call   0842d0ae <_ZN29DB_ReloadAutoPunishRuleBackIP11makeRequestEv>  ; DB_ReloadAutoPunishRuleBackIP::makeRequest()
08476f07 +0x38a7:  jmp    0847abfb <+0x759b>
08476f0c +0x38ac:  call   0842d610 <_ZN31DB_ReloadAutoPunishRuleHackType11makeRequestEv>  ; DB_ReloadAutoPunishRuleHackType::makeRequest()
08476f11 +0x38b1:  jmp    0847abfb <+0x759b>
08476f16 +0x38b6:  mov    0x8(%ebp),%eax
08476f19 +0x38b9:  mov    %eax,-0x1a8(%ebp)
08476f1f +0x38bf:  lea    -0x310(%ebp),%eax
08476f25 +0x38c5:  mov    %eax,(%esp)
08476f28 +0x38c8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476f2d +0x38cd:  movl   $0x191,0x4(%esp)
08476f35 +0x38d5:  mov    %eax,(%esp)
08476f38 +0x38d8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476f3d +0x38dd:  lea    -0x310(%ebp),%eax
08476f43 +0x38e3:  mov    %eax,(%esp)
08476f46 +0x38e6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476f4b +0x38eb:  movl   $0xffffffff,0x4(%esp)
08476f53 +0x38f3:  mov    %eax,(%esp)
08476f56 +0x38f6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476f5b +0x38fb:  lea    -0x310(%ebp),%eax
08476f61 +0x3901:  mov    %eax,(%esp)
08476f64 +0x3904:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08476f69 +0x3909:  movl   $0xc,0x8(%esp)
08476f71 +0x3911:  mov    -0x1a8(%ebp),%edx
08476f77 +0x3917:  mov    %edx,0x4(%esp)
08476f7b +0x391b:  mov    %eax,(%esp)
08476f7e +0x391e:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08476f83 +0x3923:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08476f88 +0x3928:  lea    -0x310(%ebp),%edx
08476f8e +0x392e:  mov    %edx,0x8(%esp)
08476f92 +0x3932:  movl   $0x1,0x4(%esp)
08476f9a +0x393a:  mov    %eax,(%esp)
08476f9d +0x393d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08476fa2 +0x3942:  jmp    0847abfb <+0x759b>
08476fa7 +0x3947:  mov    0x8(%ebp),%eax
08476faa +0x394a:  mov    %eax,-0x1a4(%ebp)
08476fb0 +0x3950:  lea    -0x310(%ebp),%eax
08476fb6 +0x3956:  mov    %eax,(%esp)
08476fb9 +0x3959:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476fbe +0x395e:  movl   $0x123,0x4(%esp)
08476fc6 +0x3966:  mov    %eax,(%esp)
08476fc9 +0x3969:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476fce +0x396e:  mov    -0x1a4(%ebp),%eax
08476fd4 +0x3974:  mov    0x12(%eax),%eax
08476fd7 +0x3977:  mov    %eax,%ebx
08476fd9 +0x3979:  lea    -0x310(%ebp),%eax
08476fdf +0x397f:  mov    %eax,(%esp)
08476fe2 +0x3982:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08476fe7 +0x3987:  mov    %ebx,0x4(%esp)
08476feb +0x398b:  mov    %eax,(%esp)
08476fee +0x398e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08476ff3 +0x3993:  lea    -0x310(%ebp),%eax
08476ff9 +0x3999:  mov    %eax,(%esp)
08476ffc +0x399c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477001 +0x39a1:  movl   $0x2e,0x8(%esp)
08477009 +0x39a9:  mov    -0x1a4(%ebp),%edx
0847700f +0x39af:  mov    %edx,0x4(%esp)
08477013 +0x39b3:  mov    %eax,(%esp)
08477016 +0x39b6:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847701b +0x39bb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477020 +0x39c0:  lea    -0x310(%ebp),%edx
08477026 +0x39c6:  mov    %edx,0x8(%esp)
0847702a +0x39ca:  movl   $0x1,0x4(%esp)
08477032 +0x39d2:  mov    %eax,(%esp)
08477035 +0x39d5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847703a +0x39da:  jmp    0847abfb <+0x759b>
0847703f +0x39df:  mov    0x8(%ebp),%eax
08477042 +0x39e2:  mov    %eax,-0x1a0(%ebp)
08477048 +0x39e8:  lea    -0x310(%ebp),%eax
0847704e +0x39ee:  mov    %eax,(%esp)
08477051 +0x39f1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477056 +0x39f6:  movl   $0x124,0x4(%esp)
0847705e +0x39fe:  mov    %eax,(%esp)
08477061 +0x3a01:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477066 +0x3a06:  mov    -0x1a0(%ebp),%eax
0847706c +0x3a0c:  mov    0x12(%eax),%eax
0847706f +0x3a0f:  mov    %eax,%ebx
08477071 +0x3a11:  lea    -0x310(%ebp),%eax
08477077 +0x3a17:  mov    %eax,(%esp)
0847707a +0x3a1a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847707f +0x3a1f:  mov    %ebx,0x4(%esp)
08477083 +0x3a23:  mov    %eax,(%esp)
08477086 +0x3a26:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847708b +0x3a2b:  lea    -0x310(%ebp),%eax
08477091 +0x3a31:  mov    %eax,(%esp)
08477094 +0x3a34:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477099 +0x3a39:  movl   $0x2d,0x8(%esp)
084770a1 +0x3a41:  mov    -0x1a0(%ebp),%edx
084770a7 +0x3a47:  mov    %edx,0x4(%esp)
084770ab +0x3a4b:  mov    %eax,(%esp)
084770ae +0x3a4e:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084770b3 +0x3a53:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084770b8 +0x3a58:  lea    -0x310(%ebp),%edx
084770be +0x3a5e:  mov    %edx,0x8(%esp)
084770c2 +0x3a62:  movl   $0x1,0x4(%esp)
084770ca +0x3a6a:  mov    %eax,(%esp)
084770cd +0x3a6d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084770d2 +0x3a72:  jmp    0847abfb <+0x759b>
084770d7 +0x3a77:  mov    0x8(%ebp),%eax
084770da +0x3a7a:  mov    %eax,-0x19c(%ebp)
084770e0 +0x3a80:  lea    -0x310(%ebp),%eax
084770e6 +0x3a86:  mov    %eax,(%esp)
084770e9 +0x3a89:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084770ee +0x3a8e:  movl   $0x184,0x4(%esp)
084770f6 +0x3a96:  mov    %eax,(%esp)
084770f9 +0x3a99:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084770fe +0x3a9e:  mov    -0x19c(%ebp),%eax
08477104 +0x3aa4:  mov    0x12(%eax),%eax
08477107 +0x3aa7:  mov    %eax,%ebx
08477109 +0x3aa9:  lea    -0x310(%ebp),%eax
0847710f +0x3aaf:  mov    %eax,(%esp)
08477112 +0x3ab2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477117 +0x3ab7:  mov    %ebx,0x4(%esp)
0847711b +0x3abb:  mov    %eax,(%esp)
0847711e +0x3abe:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477123 +0x3ac3:  lea    -0x310(%ebp),%eax
08477129 +0x3ac9:  mov    %eax,(%esp)
0847712c +0x3acc:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477131 +0x3ad1:  movl   $0x16,0x8(%esp)
08477139 +0x3ad9:  mov    -0x19c(%ebp),%edx
0847713f +0x3adf:  mov    %edx,0x4(%esp)
08477143 +0x3ae3:  mov    %eax,(%esp)
08477146 +0x3ae6:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847714b +0x3aeb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477150 +0x3af0:  lea    -0x310(%ebp),%edx
08477156 +0x3af6:  mov    %edx,0x8(%esp)
0847715a +0x3afa:  movl   $0x1,0x4(%esp)
08477162 +0x3b02:  mov    %eax,(%esp)
08477165 +0x3b05:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847716a +0x3b0a:  jmp    0847abfb <+0x759b>
0847716f +0x3b0f:  mov    0x8(%ebp),%eax
08477172 +0x3b12:  mov    %eax,-0x198(%ebp)
08477178 +0x3b18:  lea    -0x310(%ebp),%eax
0847717e +0x3b1e:  mov    %eax,(%esp)
08477181 +0x3b21:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477186 +0x3b26:  movl   $0x125,0x4(%esp)
0847718e +0x3b2e:  mov    %eax,(%esp)
08477191 +0x3b31:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477196 +0x3b36:  lea    -0x310(%ebp),%eax
0847719c +0x3b3c:  mov    %eax,(%esp)
0847719f +0x3b3f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084771a4 +0x3b44:  movl   $0xffffffff,0x4(%esp)
084771ac +0x3b4c:  mov    %eax,(%esp)
084771af +0x3b4f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084771b4 +0x3b54:  lea    -0x310(%ebp),%eax
084771ba +0x3b5a:  mov    %eax,(%esp)
084771bd +0x3b5d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084771c2 +0x3b62:  movl   $0x3d,0x8(%esp)
084771ca +0x3b6a:  mov    -0x198(%ebp),%edx
084771d0 +0x3b70:  mov    %edx,0x4(%esp)
084771d4 +0x3b74:  mov    %eax,(%esp)
084771d7 +0x3b77:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084771dc +0x3b7c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084771e1 +0x3b81:  lea    -0x310(%ebp),%edx
084771e7 +0x3b87:  mov    %edx,0x8(%esp)
084771eb +0x3b8b:  movl   $0x1,0x4(%esp)
084771f3 +0x3b93:  mov    %eax,(%esp)
084771f6 +0x3b96:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084771fb +0x3b9b:  jmp    0847abfb <+0x759b>
08477200 +0x3ba0:  lea    -0x310(%ebp),%eax
08477206 +0x3ba6:  mov    %eax,(%esp)
08477209 +0x3ba9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847720e +0x3bae:  movl   $0x126,0x4(%esp)
08477216 +0x3bb6:  mov    %eax,(%esp)
08477219 +0x3bb9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847721e +0x3bbe:  lea    -0x310(%ebp),%eax
08477224 +0x3bc4:  mov    %eax,(%esp)
08477227 +0x3bc7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847722c +0x3bcc:  movl   $0xffffffff,0x4(%esp)
08477234 +0x3bd4:  mov    %eax,(%esp)
08477237 +0x3bd7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847723c +0x3bdc:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477241 +0x3be1:  lea    -0x310(%ebp),%edx
08477247 +0x3be7:  mov    %edx,0x8(%esp)
0847724b +0x3beb:  movl   $0x1,0x4(%esp)
08477253 +0x3bf3:  mov    %eax,(%esp)
08477256 +0x3bf6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847725b +0x3bfb:  jmp    0847abfb <+0x759b>
08477260 +0x3c00:  lea    -0x310(%ebp),%eax
08477266 +0x3c06:  mov    %eax,(%esp)
08477269 +0x3c09:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847726e +0x3c0e:  movl   $0x155,0x4(%esp)
08477276 +0x3c16:  mov    %eax,(%esp)
08477279 +0x3c19:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847727e +0x3c1e:  lea    -0x310(%ebp),%eax
08477284 +0x3c24:  mov    %eax,(%esp)
08477287 +0x3c27:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847728c +0x3c2c:  movl   $0xffffffff,0x4(%esp)
08477294 +0x3c34:  mov    %eax,(%esp)
08477297 +0x3c37:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847729c +0x3c3c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084772a1 +0x3c41:  lea    -0x310(%ebp),%edx
084772a7 +0x3c47:  mov    %edx,0x8(%esp)
084772ab +0x3c4b:  movl   $0x1,0x4(%esp)
084772b3 +0x3c53:  mov    %eax,(%esp)
084772b6 +0x3c56:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084772bb +0x3c5b:  jmp    0847abfb <+0x759b>
084772c0 +0x3c60:  mov    0x8(%ebp),%eax
084772c3 +0x3c63:  mov    %eax,-0x194(%ebp)
084772c9 +0x3c69:  lea    -0x310(%ebp),%eax
084772cf +0x3c6f:  mov    %eax,(%esp)
084772d2 +0x3c72:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084772d7 +0x3c77:  movl   $0x157,0x4(%esp)
084772df +0x3c7f:  mov    %eax,(%esp)
084772e2 +0x3c82:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084772e7 +0x3c87:  lea    -0x310(%ebp),%eax
084772ed +0x3c8d:  mov    %eax,(%esp)
084772f0 +0x3c90:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084772f5 +0x3c95:  movl   $0xffffffff,0x4(%esp)
084772fd +0x3c9d:  mov    %eax,(%esp)
08477300 +0x3ca0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477305 +0x3ca5:  mov    -0x194(%ebp),%eax
0847730b +0x3cab:  movzwl 0x2(%eax),%eax
0847730f +0x3caf:  movzwl %ax,%ebx
08477312 +0x3cb2:  lea    -0x310(%ebp),%eax
08477318 +0x3cb8:  mov    %eax,(%esp)
0847731b +0x3cbb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477320 +0x3cc0:  mov    %ebx,0x8(%esp)
08477324 +0x3cc4:  mov    -0x194(%ebp),%edx
0847732a +0x3cca:  mov    %edx,0x4(%esp)
0847732e +0x3cce:  mov    %eax,(%esp)
08477331 +0x3cd1:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477336 +0x3cd6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847733b +0x3cdb:  lea    -0x310(%ebp),%edx
08477341 +0x3ce1:  mov    %edx,0x8(%esp)
08477345 +0x3ce5:  movl   $0x1,0x4(%esp)
0847734d +0x3ced:  mov    %eax,(%esp)
08477350 +0x3cf0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477355 +0x3cf5:  jmp    0847abfb <+0x759b>
0847735a +0x3cfa:  mov    0x8(%ebp),%eax
0847735d +0x3cfd:  mov    %eax,-0x190(%ebp)
08477363 +0x3d03:  lea    -0x310(%ebp),%eax
08477369 +0x3d09:  mov    %eax,(%esp)
0847736c +0x3d0c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477371 +0x3d11:  movl   $0x17d,0x4(%esp)
08477379 +0x3d19:  mov    %eax,(%esp)
0847737c +0x3d1c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477381 +0x3d21:  lea    -0x310(%ebp),%eax
08477387 +0x3d27:  mov    %eax,(%esp)
0847738a +0x3d2a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847738f +0x3d2f:  movl   $0xffffffff,0x4(%esp)
08477397 +0x3d37:  mov    %eax,(%esp)
0847739a +0x3d3a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847739f +0x3d3f:  lea    -0x310(%ebp),%eax
084773a5 +0x3d45:  mov    %eax,(%esp)
084773a8 +0x3d48:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084773ad +0x3d4d:  movl   $0x4bd,0x8(%esp)
084773b5 +0x3d55:  mov    -0x190(%ebp),%edx
084773bb +0x3d5b:  mov    %edx,0x4(%esp)
084773bf +0x3d5f:  mov    %eax,(%esp)
084773c2 +0x3d62:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084773c7 +0x3d67:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084773cc +0x3d6c:  lea    -0x310(%ebp),%edx
084773d2 +0x3d72:  mov    %edx,0x8(%esp)
084773d6 +0x3d76:  movl   $0x1,0x4(%esp)
084773de +0x3d7e:  mov    %eax,(%esp)
084773e1 +0x3d81:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084773e6 +0x3d86:  jmp    0847abfb <+0x759b>
084773eb +0x3d8b:  mov    0x8(%ebp),%eax
084773ee +0x3d8e:  mov    %eax,-0x18c(%ebp)
084773f4 +0x3d94:  lea    -0x310(%ebp),%eax
084773fa +0x3d9a:  mov    %eax,(%esp)
084773fd +0x3d9d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477402 +0x3da2:  movl   $0xef,0x4(%esp)
0847740a +0x3daa:  mov    %eax,(%esp)
0847740d +0x3dad:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477412 +0x3db2:  mov    -0x18c(%ebp),%eax
08477418 +0x3db8:  mov    0xe(%eax),%eax
0847741b +0x3dbb:  mov    %eax,%ebx
0847741d +0x3dbd:  lea    -0x310(%ebp),%eax
08477423 +0x3dc3:  mov    %eax,(%esp)
08477426 +0x3dc6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847742b +0x3dcb:  mov    %ebx,0x4(%esp)
0847742f +0x3dcf:  mov    %eax,(%esp)
08477432 +0x3dd2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477437 +0x3dd7:  lea    -0x310(%ebp),%eax
0847743d +0x3ddd:  mov    %eax,(%esp)
08477440 +0x3de0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477445 +0x3de5:  movl   $0x26,0x8(%esp)
0847744d +0x3ded:  mov    -0x18c(%ebp),%edx
08477453 +0x3df3:  mov    %edx,0x4(%esp)
08477457 +0x3df7:  mov    %eax,(%esp)
0847745a +0x3dfa:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847745f +0x3dff:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477464 +0x3e04:  lea    -0x310(%ebp),%edx
0847746a +0x3e0a:  mov    %edx,0x8(%esp)
0847746e +0x3e0e:  movl   $0x1,0x4(%esp)
08477476 +0x3e16:  mov    %eax,(%esp)
08477479 +0x3e19:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847747e +0x3e1e:  jmp    0847abfb <+0x759b>
08477483 +0x3e23:  mov    0x8(%ebp),%eax
08477486 +0x3e26:  mov    %eax,-0x188(%ebp)
0847748c +0x3e2c:  lea    -0x310(%ebp),%eax
08477492 +0x3e32:  mov    %eax,(%esp)
08477495 +0x3e35:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847749a +0x3e3a:  movl   $0x133,0x4(%esp)
084774a2 +0x3e42:  mov    %eax,(%esp)
084774a5 +0x3e45:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084774aa +0x3e4a:  mov    -0x188(%ebp),%eax
084774b0 +0x3e50:  mov    0xe(%eax),%eax
084774b3 +0x3e53:  mov    %eax,%ebx
084774b5 +0x3e55:  lea    -0x310(%ebp),%eax
084774bb +0x3e5b:  mov    %eax,(%esp)
084774be +0x3e5e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084774c3 +0x3e63:  mov    %ebx,0x4(%esp)
084774c7 +0x3e67:  mov    %eax,(%esp)
084774ca +0x3e6a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084774cf +0x3e6f:  lea    -0x310(%ebp),%eax
084774d5 +0x3e75:  mov    %eax,(%esp)
084774d8 +0x3e78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084774dd +0x3e7d:  movl   $0x17f8,0x8(%esp)
084774e5 +0x3e85:  mov    -0x188(%ebp),%edx
084774eb +0x3e8b:  mov    %edx,0x4(%esp)
084774ef +0x3e8f:  mov    %eax,(%esp)
084774f2 +0x3e92:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084774f7 +0x3e97:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084774fc +0x3e9c:  lea    -0x310(%ebp),%edx
08477502 +0x3ea2:  mov    %edx,0x8(%esp)
08477506 +0x3ea6:  movl   $0x1,0x4(%esp)
0847750e +0x3eae:  mov    %eax,(%esp)
08477511 +0x3eb1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477516 +0x3eb6:  jmp    0847abfb <+0x759b>
0847751b +0x3ebb:  mov    0x8(%ebp),%eax
0847751e +0x3ebe:  mov    %eax,-0x184(%ebp)
08477524 +0x3ec4:  lea    -0x310(%ebp),%eax
0847752a +0x3eca:  mov    %eax,(%esp)
0847752d +0x3ecd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477532 +0x3ed2:  movl   $0x134,0x4(%esp)
0847753a +0x3eda:  mov    %eax,(%esp)
0847753d +0x3edd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477542 +0x3ee2:  lea    -0x310(%ebp),%eax
08477548 +0x3ee8:  mov    %eax,(%esp)
0847754b +0x3eeb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477550 +0x3ef0:  movl   $0xffffffff,0x4(%esp)
08477558 +0x3ef8:  mov    %eax,(%esp)
0847755b +0x3efb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477560 +0x3f00:  lea    -0x310(%ebp),%eax
08477566 +0x3f06:  mov    %eax,(%esp)
08477569 +0x3f09:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847756e +0x3f0e:  movl   $0x2a,0x8(%esp)
08477576 +0x3f16:  mov    -0x184(%ebp),%edx
0847757c +0x3f1c:  mov    %edx,0x4(%esp)
08477580 +0x3f20:  mov    %eax,(%esp)
08477583 +0x3f23:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477588 +0x3f28:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847758d +0x3f2d:  lea    -0x310(%ebp),%edx
08477593 +0x3f33:  mov    %edx,0x8(%esp)
08477597 +0x3f37:  movl   $0x1,0x4(%esp)
0847759f +0x3f3f:  mov    %eax,(%esp)
084775a2 +0x3f42:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084775a7 +0x3f47:  jmp    0847abfb <+0x759b>
084775ac +0x3f4c:  mov    0x8(%ebp),%eax
084775af +0x3f4f:  mov    %eax,-0x180(%ebp)
084775b5 +0x3f55:  lea    -0x310(%ebp),%eax
084775bb +0x3f5b:  mov    %eax,(%esp)
084775be +0x3f5e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084775c3 +0x3f63:  movl   $0x135,0x4(%esp)
084775cb +0x3f6b:  mov    %eax,(%esp)
084775ce +0x3f6e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084775d3 +0x3f73:  lea    -0x310(%ebp),%eax
084775d9 +0x3f79:  mov    %eax,(%esp)
084775dc +0x3f7c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084775e1 +0x3f81:  movl   $0xffffffff,0x4(%esp)
084775e9 +0x3f89:  mov    %eax,(%esp)
084775ec +0x3f8c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084775f1 +0x3f91:  lea    -0x310(%ebp),%eax
084775f7 +0x3f97:  mov    %eax,(%esp)
084775fa +0x3f9a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084775ff +0x3f9f:  movl   $0x80,0x8(%esp)
08477607 +0x3fa7:  mov    -0x180(%ebp),%edx
0847760d +0x3fad:  mov    %edx,0x4(%esp)
08477611 +0x3fb1:  mov    %eax,(%esp)
08477614 +0x3fb4:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477619 +0x3fb9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847761e +0x3fbe:  lea    -0x310(%ebp),%edx
08477624 +0x3fc4:  mov    %edx,0x8(%esp)
08477628 +0x3fc8:  movl   $0x2,0x4(%esp)
08477630 +0x3fd0:  mov    %eax,(%esp)
08477633 +0x3fd3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477638 +0x3fd8:  jmp    0847abfb <+0x759b>
0847763d +0x3fdd:  mov    0x8(%ebp),%eax
08477640 +0x3fe0:  mov    %eax,-0x17c(%ebp)
08477646 +0x3fe6:  lea    -0x310(%ebp),%eax
0847764c +0x3fec:  mov    %eax,(%esp)
0847764f +0x3fef:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477654 +0x3ff4:  movl   $0x160,0x4(%esp)
0847765c +0x3ffc:  mov    %eax,(%esp)
0847765f +0x3fff:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477664 +0x4004:  mov    -0x17c(%ebp),%eax
0847766a +0x400a:  mov    0xa(%eax),%ebx
0847766d +0x400d:  lea    -0x310(%ebp),%eax
08477673 +0x4013:  mov    %eax,(%esp)
08477676 +0x4016:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847767b +0x401b:  mov    %ebx,0x4(%esp)
0847767f +0x401f:  mov    %eax,(%esp)
08477682 +0x4022:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477687 +0x4027:  mov    -0x17c(%ebp),%eax
0847768d +0x402d:  movzwl 0x2(%eax),%eax
08477691 +0x4031:  movzwl %ax,%ebx
08477694 +0x4034:  lea    -0x310(%ebp),%eax
0847769a +0x403a:  mov    %eax,(%esp)
0847769d +0x403d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084776a2 +0x4042:  mov    %ebx,0x8(%esp)
084776a6 +0x4046:  mov    -0x17c(%ebp),%edx
084776ac +0x404c:  mov    %edx,0x4(%esp)
084776b0 +0x4050:  mov    %eax,(%esp)
084776b3 +0x4053:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084776b8 +0x4058:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084776bd +0x405d:  lea    -0x310(%ebp),%edx
084776c3 +0x4063:  mov    %edx,0x8(%esp)
084776c7 +0x4067:  movl   $0x1,0x4(%esp)
084776cf +0x406f:  mov    %eax,(%esp)
084776d2 +0x4072:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084776d7 +0x4077:  jmp    0847abfb <+0x759b>
084776dc +0x407c:  mov    0x8(%ebp),%eax
084776df +0x407f:  mov    %eax,-0x178(%ebp)
084776e5 +0x4085:  lea    -0x310(%ebp),%eax
084776eb +0x408b:  mov    %eax,(%esp)
084776ee +0x408e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084776f3 +0x4093:  movl   $0x161,0x4(%esp)
084776fb +0x409b:  mov    %eax,(%esp)
084776fe +0x409e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477703 +0x40a3:  mov    -0x178(%ebp),%eax
08477709 +0x40a9:  mov    0xa(%eax),%ebx
0847770c +0x40ac:  lea    -0x310(%ebp),%eax
08477712 +0x40b2:  mov    %eax,(%esp)
08477715 +0x40b5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847771a +0x40ba:  mov    %ebx,0x4(%esp)
0847771e +0x40be:  mov    %eax,(%esp)
08477721 +0x40c1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477726 +0x40c6:  mov    -0x178(%ebp),%eax
0847772c +0x40cc:  movzwl 0x2(%eax),%eax
08477730 +0x40d0:  movzwl %ax,%ebx
08477733 +0x40d3:  lea    -0x310(%ebp),%eax
08477739 +0x40d9:  mov    %eax,(%esp)
0847773c +0x40dc:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477741 +0x40e1:  mov    %ebx,0x8(%esp)
08477745 +0x40e5:  mov    -0x178(%ebp),%edx
0847774b +0x40eb:  mov    %edx,0x4(%esp)
0847774f +0x40ef:  mov    %eax,(%esp)
08477752 +0x40f2:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477757 +0x40f7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847775c +0x40fc:  lea    -0x310(%ebp),%edx
08477762 +0x4102:  mov    %edx,0x8(%esp)
08477766 +0x4106:  movl   $0x1,0x4(%esp)
0847776e +0x410e:  mov    %eax,(%esp)
08477771 +0x4111:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477776 +0x4116:  jmp    0847abfb <+0x759b>
0847777b +0x411b:  mov    0x8(%ebp),%eax
0847777e +0x411e:  mov    %eax,-0x174(%ebp)
08477784 +0x4124:  lea    -0x310(%ebp),%eax
0847778a +0x412a:  mov    %eax,(%esp)
0847778d +0x412d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477792 +0x4132:  movl   $0x162,0x4(%esp)
0847779a +0x413a:  mov    %eax,(%esp)
0847779d +0x413d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084777a2 +0x4142:  mov    -0x174(%ebp),%eax
084777a8 +0x4148:  mov    0xb(%eax),%ebx
084777ab +0x414b:  lea    -0x310(%ebp),%eax
084777b1 +0x4151:  mov    %eax,(%esp)
084777b4 +0x4154:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084777b9 +0x4159:  mov    %ebx,0x4(%esp)
084777bd +0x415d:  mov    %eax,(%esp)
084777c0 +0x4160:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084777c5 +0x4165:  mov    -0x174(%ebp),%eax
084777cb +0x416b:  movzwl 0x2(%eax),%eax
084777cf +0x416f:  movzwl %ax,%ebx
084777d2 +0x4172:  lea    -0x310(%ebp),%eax
084777d8 +0x4178:  mov    %eax,(%esp)
084777db +0x417b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084777e0 +0x4180:  mov    %ebx,0x8(%esp)
084777e4 +0x4184:  mov    -0x174(%ebp),%edx
084777ea +0x418a:  mov    %edx,0x4(%esp)
084777ee +0x418e:  mov    %eax,(%esp)
084777f1 +0x4191:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084777f6 +0x4196:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084777fb +0x419b:  lea    -0x310(%ebp),%edx
08477801 +0x41a1:  mov    %edx,0x8(%esp)
08477805 +0x41a5:  movl   $0x1,0x4(%esp)
0847780d +0x41ad:  mov    %eax,(%esp)
08477810 +0x41b0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477815 +0x41b5:  jmp    0847abfb <+0x759b>
0847781a +0x41ba:  mov    0x8(%ebp),%eax
0847781d +0x41bd:  mov    %eax,-0x170(%ebp)
08477823 +0x41c3:  lea    -0x310(%ebp),%eax
08477829 +0x41c9:  mov    %eax,(%esp)
0847782c +0x41cc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477831 +0x41d1:  movl   $0x174,0x4(%esp)
08477839 +0x41d9:  mov    %eax,(%esp)
0847783c +0x41dc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477841 +0x41e1:  lea    -0x310(%ebp),%eax
08477847 +0x41e7:  mov    %eax,(%esp)
0847784a +0x41ea:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847784f +0x41ef:  movl   $0xffffffff,0x4(%esp)
08477857 +0x41f7:  mov    %eax,(%esp)
0847785a +0x41fa:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847785f +0x41ff:  mov    -0x170(%ebp),%eax
08477865 +0x4205:  movzwl 0x2(%eax),%eax
08477869 +0x4209:  movzwl %ax,%ebx
0847786c +0x420c:  lea    -0x310(%ebp),%eax
08477872 +0x4212:  mov    %eax,(%esp)
08477875 +0x4215:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847787a +0x421a:  mov    %ebx,0x8(%esp)
0847787e +0x421e:  mov    -0x170(%ebp),%edx
08477884 +0x4224:  mov    %edx,0x4(%esp)
08477888 +0x4228:  mov    %eax,(%esp)
0847788b +0x422b:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477890 +0x4230:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477895 +0x4235:  lea    -0x310(%ebp),%edx
0847789b +0x423b:  mov    %edx,0x8(%esp)
0847789f +0x423f:  movl   $0x1,0x4(%esp)
084778a7 +0x4247:  mov    %eax,(%esp)
084778aa +0x424a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084778af +0x424f:  jmp    0847abfb <+0x759b>
084778b4 +0x4254:  mov    0x8(%ebp),%eax
084778b7 +0x4257:  mov    %eax,-0x16c(%ebp)
084778bd +0x425d:  lea    -0x310(%ebp),%eax
084778c3 +0x4263:  mov    %eax,(%esp)
084778c6 +0x4266:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084778cb +0x426b:  movl   $0x170,0x4(%esp)
084778d3 +0x4273:  mov    %eax,(%esp)
084778d6 +0x4276:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084778db +0x427b:  lea    -0x310(%ebp),%eax
084778e1 +0x4281:  mov    %eax,(%esp)
084778e4 +0x4284:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084778e9 +0x4289:  movl   $0xffffffff,0x4(%esp)
084778f1 +0x4291:  mov    %eax,(%esp)
084778f4 +0x4294:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084778f9 +0x4299:  mov    -0x16c(%ebp),%eax
084778ff +0x429f:  movzwl 0x2(%eax),%eax
08477903 +0x42a3:  movzwl %ax,%ebx
08477906 +0x42a6:  lea    -0x310(%ebp),%eax
0847790c +0x42ac:  mov    %eax,(%esp)
0847790f +0x42af:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477914 +0x42b4:  mov    %ebx,0x8(%esp)
08477918 +0x42b8:  mov    -0x16c(%ebp),%edx
0847791e +0x42be:  mov    %edx,0x4(%esp)
08477922 +0x42c2:  mov    %eax,(%esp)
08477925 +0x42c5:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847792a +0x42ca:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847792f +0x42cf:  lea    -0x310(%ebp),%edx
08477935 +0x42d5:  mov    %edx,0x8(%esp)
08477939 +0x42d9:  movl   $0x1,0x4(%esp)
08477941 +0x42e1:  mov    %eax,(%esp)
08477944 +0x42e4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477949 +0x42e9:  jmp    0847abfb <+0x759b>
0847794e +0x42ee:  mov    0x8(%ebp),%eax
08477951 +0x42f1:  mov    %eax,-0x168(%ebp)
08477957 +0x42f7:  lea    -0x310(%ebp),%eax
0847795d +0x42fd:  mov    %eax,(%esp)
08477960 +0x4300:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477965 +0x4305:  movl   $0x171,0x4(%esp)
0847796d +0x430d:  mov    %eax,(%esp)
08477970 +0x4310:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477975 +0x4315:  mov    -0x168(%ebp),%eax
0847797b +0x431b:  mov    0xa(%eax),%ebx
0847797e +0x431e:  lea    -0x310(%ebp),%eax
08477984 +0x4324:  mov    %eax,(%esp)
08477987 +0x4327:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847798c +0x432c:  mov    %ebx,0x4(%esp)
08477990 +0x4330:  mov    %eax,(%esp)
08477993 +0x4333:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477998 +0x4338:  mov    -0x168(%ebp),%eax
0847799e +0x433e:  movzwl 0x2(%eax),%eax
084779a2 +0x4342:  movzwl %ax,%ebx
084779a5 +0x4345:  lea    -0x310(%ebp),%eax
084779ab +0x434b:  mov    %eax,(%esp)
084779ae +0x434e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084779b3 +0x4353:  mov    %ebx,0x8(%esp)
084779b7 +0x4357:  mov    -0x168(%ebp),%edx
084779bd +0x435d:  mov    %edx,0x4(%esp)
084779c1 +0x4361:  mov    %eax,(%esp)
084779c4 +0x4364:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084779c9 +0x4369:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084779ce +0x436e:  lea    -0x310(%ebp),%edx
084779d4 +0x4374:  mov    %edx,0x8(%esp)
084779d8 +0x4378:  movl   $0x1,0x4(%esp)
084779e0 +0x4380:  mov    %eax,(%esp)
084779e3 +0x4383:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084779e8 +0x4388:  jmp    0847abfb <+0x759b>
084779ed +0x438d:  mov    0x8(%ebp),%eax
084779f0 +0x4390:  mov    %eax,-0x164(%ebp)
084779f6 +0x4396:  lea    -0x310(%ebp),%eax
084779fc +0x439c:  mov    %eax,(%esp)
084779ff +0x439f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477a04 +0x43a4:  movl   $0x172,0x4(%esp)
08477a0c +0x43ac:  mov    %eax,(%esp)
08477a0f +0x43af:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477a14 +0x43b4:  mov    -0x164(%ebp),%eax
08477a1a +0x43ba:  mov    0xa(%eax),%ebx
08477a1d +0x43bd:  lea    -0x310(%ebp),%eax
08477a23 +0x43c3:  mov    %eax,(%esp)
08477a26 +0x43c6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477a2b +0x43cb:  mov    %ebx,0x4(%esp)
08477a2f +0x43cf:  mov    %eax,(%esp)
08477a32 +0x43d2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477a37 +0x43d7:  mov    -0x164(%ebp),%eax
08477a3d +0x43dd:  movzwl 0x2(%eax),%eax
08477a41 +0x43e1:  movzwl %ax,%ebx
08477a44 +0x43e4:  lea    -0x310(%ebp),%eax
08477a4a +0x43ea:  mov    %eax,(%esp)
08477a4d +0x43ed:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477a52 +0x43f2:  mov    %ebx,0x8(%esp)
08477a56 +0x43f6:  mov    -0x164(%ebp),%edx
08477a5c +0x43fc:  mov    %edx,0x4(%esp)
08477a60 +0x4400:  mov    %eax,(%esp)
08477a63 +0x4403:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477a68 +0x4408:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477a6d +0x440d:  lea    -0x310(%ebp),%edx
08477a73 +0x4413:  mov    %edx,0x8(%esp)
08477a77 +0x4417:  movl   $0x1,0x4(%esp)
08477a7f +0x441f:  mov    %eax,(%esp)
08477a82 +0x4422:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477a87 +0x4427:  jmp    0847abfb <+0x759b>
08477a8c +0x442c:  mov    0x8(%ebp),%eax
08477a8f +0x442f:  mov    %eax,-0x160(%ebp)
08477a95 +0x4435:  lea    -0x310(%ebp),%eax
08477a9b +0x443b:  mov    %eax,(%esp)
08477a9e +0x443e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477aa3 +0x4443:  movl   $0x173,0x4(%esp)
08477aab +0x444b:  mov    %eax,(%esp)
08477aae +0x444e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477ab3 +0x4453:  mov    -0x160(%ebp),%eax
08477ab9 +0x4459:  mov    0xa(%eax),%eax
08477abc +0x445c:  mov    %eax,%ebx
08477abe +0x445e:  lea    -0x310(%ebp),%eax
08477ac4 +0x4464:  mov    %eax,(%esp)
08477ac7 +0x4467:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477acc +0x446c:  mov    %ebx,0x4(%esp)
08477ad0 +0x4470:  mov    %eax,(%esp)
08477ad3 +0x4473:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477ad8 +0x4478:  mov    -0x160(%ebp),%eax
08477ade +0x447e:  movzwl 0x2(%eax),%eax
08477ae2 +0x4482:  movzwl %ax,%ebx
08477ae5 +0x4485:  lea    -0x310(%ebp),%eax
08477aeb +0x448b:  mov    %eax,(%esp)
08477aee +0x448e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477af3 +0x4493:  mov    %ebx,0x8(%esp)
08477af7 +0x4497:  mov    -0x160(%ebp),%edx
08477afd +0x449d:  mov    %edx,0x4(%esp)
08477b01 +0x44a1:  mov    %eax,(%esp)
08477b04 +0x44a4:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477b09 +0x44a9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477b0e +0x44ae:  lea    -0x310(%ebp),%edx
08477b14 +0x44b4:  mov    %edx,0x8(%esp)
08477b18 +0x44b8:  movl   $0x1,0x4(%esp)
08477b20 +0x44c0:  mov    %eax,(%esp)
08477b23 +0x44c3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477b28 +0x44c8:  jmp    0847abfb <+0x759b>
08477b2d +0x44cd:  mov    0x8(%ebp),%eax
08477b30 +0x44d0:  mov    %eax,-0x15c(%ebp)
08477b36 +0x44d6:  lea    -0x310(%ebp),%eax
08477b3c +0x44dc:  mov    %eax,(%esp)
08477b3f +0x44df:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477b44 +0x44e4:  movl   $0x176,0x4(%esp)
08477b4c +0x44ec:  mov    %eax,(%esp)
08477b4f +0x44ef:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477b54 +0x44f4:  mov    -0x15c(%ebp),%eax
08477b5a +0x44fa:  mov    0xa(%eax),%eax
08477b5d +0x44fd:  mov    %eax,%ebx
08477b5f +0x44ff:  lea    -0x310(%ebp),%eax
08477b65 +0x4505:  mov    %eax,(%esp)
08477b68 +0x4508:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477b6d +0x450d:  mov    %ebx,0x4(%esp)
08477b71 +0x4511:  mov    %eax,(%esp)
08477b74 +0x4514:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477b79 +0x4519:  mov    -0x15c(%ebp),%eax
08477b7f +0x451f:  movzwl 0x2(%eax),%eax
08477b83 +0x4523:  movzwl %ax,%ebx
08477b86 +0x4526:  lea    -0x310(%ebp),%eax
08477b8c +0x452c:  mov    %eax,(%esp)
08477b8f +0x452f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477b94 +0x4534:  mov    %ebx,0x8(%esp)
08477b98 +0x4538:  mov    -0x15c(%ebp),%edx
08477b9e +0x453e:  mov    %edx,0x4(%esp)
08477ba2 +0x4542:  mov    %eax,(%esp)
08477ba5 +0x4545:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477baa +0x454a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477baf +0x454f:  lea    -0x310(%ebp),%edx
08477bb5 +0x4555:  mov    %edx,0x8(%esp)
08477bb9 +0x4559:  movl   $0x1,0x4(%esp)
08477bc1 +0x4561:  mov    %eax,(%esp)
08477bc4 +0x4564:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477bc9 +0x4569:  jmp    0847abfb <+0x759b>
08477bce +0x456e:  mov    0x8(%ebp),%eax
08477bd1 +0x4571:  mov    %eax,-0x158(%ebp)
08477bd7 +0x4577:  lea    -0x310(%ebp),%eax
08477bdd +0x457d:  mov    %eax,(%esp)
08477be0 +0x4580:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477be5 +0x4585:  movl   $0x17a,0x4(%esp)
08477bed +0x458d:  mov    %eax,(%esp)
08477bf0 +0x4590:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477bf5 +0x4595:  mov    -0x158(%ebp),%eax
08477bfb +0x459b:  mov    0xa(%eax),%ebx
08477bfe +0x459e:  lea    -0x310(%ebp),%eax
08477c04 +0x45a4:  mov    %eax,(%esp)
08477c07 +0x45a7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477c0c +0x45ac:  mov    %ebx,0x4(%esp)
08477c10 +0x45b0:  mov    %eax,(%esp)
08477c13 +0x45b3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477c18 +0x45b8:  mov    -0x158(%ebp),%eax
08477c1e +0x45be:  movzwl 0x2(%eax),%eax
08477c22 +0x45c2:  movzwl %ax,%ebx
08477c25 +0x45c5:  lea    -0x310(%ebp),%eax
08477c2b +0x45cb:  mov    %eax,(%esp)
08477c2e +0x45ce:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477c33 +0x45d3:  mov    %ebx,0x8(%esp)
08477c37 +0x45d7:  mov    -0x158(%ebp),%edx
08477c3d +0x45dd:  mov    %edx,0x4(%esp)
08477c41 +0x45e1:  mov    %eax,(%esp)
08477c44 +0x45e4:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477c49 +0x45e9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477c4e +0x45ee:  lea    -0x310(%ebp),%edx
08477c54 +0x45f4:  mov    %edx,0x8(%esp)
08477c58 +0x45f8:  movl   $0x1,0x4(%esp)
08477c60 +0x4600:  mov    %eax,(%esp)
08477c63 +0x4603:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477c68 +0x4608:  jmp    0847abfb <+0x759b>
08477c6d +0x460d:  mov    0x8(%ebp),%eax
08477c70 +0x4610:  mov    %eax,-0x154(%ebp)
08477c76 +0x4616:  lea    -0x310(%ebp),%eax
08477c7c +0x461c:  mov    %eax,(%esp)
08477c7f +0x461f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477c84 +0x4624:  movl   $0x17b,0x4(%esp)
08477c8c +0x462c:  mov    %eax,(%esp)
08477c8f +0x462f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477c94 +0x4634:  mov    -0x154(%ebp),%eax
08477c9a +0x463a:  mov    0xa(%eax),%ebx
08477c9d +0x463d:  lea    -0x310(%ebp),%eax
08477ca3 +0x4643:  mov    %eax,(%esp)
08477ca6 +0x4646:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477cab +0x464b:  mov    %ebx,0x4(%esp)
08477caf +0x464f:  mov    %eax,(%esp)
08477cb2 +0x4652:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477cb7 +0x4657:  mov    -0x154(%ebp),%eax
08477cbd +0x465d:  movzwl 0x2(%eax),%eax
08477cc1 +0x4661:  movzwl %ax,%ebx
08477cc4 +0x4664:  lea    -0x310(%ebp),%eax
08477cca +0x466a:  mov    %eax,(%esp)
08477ccd +0x466d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477cd2 +0x4672:  mov    %ebx,0x8(%esp)
08477cd6 +0x4676:  mov    -0x154(%ebp),%edx
08477cdc +0x467c:  mov    %edx,0x4(%esp)
08477ce0 +0x4680:  mov    %eax,(%esp)
08477ce3 +0x4683:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477ce8 +0x4688:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477ced +0x468d:  lea    -0x310(%ebp),%edx
08477cf3 +0x4693:  mov    %edx,0x8(%esp)
08477cf7 +0x4697:  movl   $0x1,0x4(%esp)
08477cff +0x469f:  mov    %eax,(%esp)
08477d02 +0x46a2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477d07 +0x46a7:  jmp    0847abfb <+0x759b>
08477d0c +0x46ac:  mov    0x8(%ebp),%eax
08477d0f +0x46af:  mov    %eax,-0x150(%ebp)
08477d15 +0x46b5:  lea    -0x310(%ebp),%eax
08477d1b +0x46bb:  mov    %eax,(%esp)
08477d1e +0x46be:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477d23 +0x46c3:  movl   $0x17e,0x4(%esp)
08477d2b +0x46cb:  mov    %eax,(%esp)
08477d2e +0x46ce:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477d33 +0x46d3:  mov    -0x150(%ebp),%eax
08477d39 +0x46d9:  mov    0xa(%eax),%ebx
08477d3c +0x46dc:  lea    -0x310(%ebp),%eax
08477d42 +0x46e2:  mov    %eax,(%esp)
08477d45 +0x46e5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477d4a +0x46ea:  mov    %ebx,0x4(%esp)
08477d4e +0x46ee:  mov    %eax,(%esp)
08477d51 +0x46f1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477d56 +0x46f6:  mov    -0x150(%ebp),%eax
08477d5c +0x46fc:  movzwl 0x2(%eax),%eax
08477d60 +0x4700:  movzwl %ax,%ebx
08477d63 +0x4703:  lea    -0x310(%ebp),%eax
08477d69 +0x4709:  mov    %eax,(%esp)
08477d6c +0x470c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477d71 +0x4711:  mov    %ebx,0x8(%esp)
08477d75 +0x4715:  mov    -0x150(%ebp),%edx
08477d7b +0x471b:  mov    %edx,0x4(%esp)
08477d7f +0x471f:  mov    %eax,(%esp)
08477d82 +0x4722:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477d87 +0x4727:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477d8c +0x472c:  lea    -0x310(%ebp),%edx
08477d92 +0x4732:  mov    %edx,0x8(%esp)
08477d96 +0x4736:  movl   $0x1,0x4(%esp)
08477d9e +0x473e:  mov    %eax,(%esp)
08477da1 +0x4741:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477da6 +0x4746:  jmp    0847abfb <+0x759b>
08477dab +0x474b:  mov    0x8(%ebp),%eax
08477dae +0x474e:  mov    %eax,-0x14c(%ebp)
08477db4 +0x4754:  mov    -0x14c(%ebp),%eax
08477dba +0x475a:  mov    0xa(%eax),%eax
08477dbd +0x475d:  mov    %eax,%edx
08477dbf +0x475f:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
08477dc4 +0x4764:  mov    %edx,0x4(%esp)
08477dc8 +0x4768:  mov    %eax,(%esp)
08477dcb +0x476b:  call   0847dd44 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x66>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x66
08477dd0 +0x4770:  mov    -0x14c(%ebp),%eax
08477dd6 +0x4776:  mov    0xa(%eax),%eax
08477dd9 +0x4779:  cmp    $0x1,%eax
08477ddc +0x477c:  je     08477de9 <+0x4789>
08477dde +0x477e:  cmp    $0x2,%eax
08477de1 +0x4781:  je     08477df8 <+0x4798>
08477de3 +0x4783:  test   %eax,%eax
08477de5 +0x4785:  je     08477df8 <+0x4798>
08477de7 +0x4787:  jmp    08477e05 <+0x47a5>
08477de9 +0x4789:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
08477dee +0x478e:  mov    %eax,(%esp)
08477df1 +0x4791:  call   0847dd1e <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x40>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x40
08477df6 +0x4796:  jmp    08477e05 <+0x47a5>
08477df8 +0x4798:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
08477dfd +0x479d:  mov    %eax,(%esp)
08477e00 +0x47a0:  call   0847dd2a <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x4c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x4c
08477e05 +0x47a5:  mov    -0x14c(%ebp),%eax
08477e0b +0x47ab:  mov    0xe(%eax),%edx
08477e0e +0x47ae:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
08477e13 +0x47b3:  mov    %edx,0x4(%esp)
08477e17 +0x47b7:  mov    %eax,(%esp)
08477e1a +0x47ba:  call   0847dd36 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x58>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x58
08477e1f +0x47bf:  mov    -0x14c(%ebp),%eax
08477e25 +0x47c5:  mov    0xe(%eax),%edx
08477e28 +0x47c8:  mov    -0x14c(%ebp),%eax
08477e2e +0x47ce:  mov    0xa(%eax),%eax
08477e31 +0x47d1:  mov    %edx,0x8(%esp)
08477e35 +0x47d5:  mov    %eax,0x4(%esp)
08477e39 +0x47d9:  movl   $"[Packet_Request_Revenge] isRevengeDungeonOpen : %d, DungeonClose_Remain_Time : %u\n",(%esp)
08477e40 +0x47e0:  call   0807db60 <_init+0x458>
08477e45 +0x47e5:  jmp    0847abfb <+0x759b>
08477e4a +0x47ea:  mov    0x8(%ebp),%eax
08477e4d +0x47ed:  mov    %eax,-0x148(%ebp)
08477e53 +0x47f3:  lea    -0x310(%ebp),%eax
08477e59 +0x47f9:  mov    %eax,(%esp)
08477e5c +0x47fc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477e61 +0x4801:  movl   $0x185,0x4(%esp)
08477e69 +0x4809:  mov    %eax,(%esp)
08477e6c +0x480c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477e71 +0x4811:  lea    -0x310(%ebp),%eax
08477e77 +0x4817:  mov    %eax,(%esp)
08477e7a +0x481a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477e7f +0x481f:  movl   $0xffffffff,0x4(%esp)
08477e87 +0x4827:  mov    %eax,(%esp)
08477e8a +0x482a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477e8f +0x482f:  mov    -0x148(%ebp),%eax
08477e95 +0x4835:  movzwl 0x2(%eax),%eax
08477e99 +0x4839:  movzwl %ax,%ebx
08477e9c +0x483c:  lea    -0x310(%ebp),%eax
08477ea2 +0x4842:  mov    %eax,(%esp)
08477ea5 +0x4845:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477eaa +0x484a:  mov    %ebx,0x8(%esp)
08477eae +0x484e:  mov    -0x148(%ebp),%edx
08477eb4 +0x4854:  mov    %edx,0x4(%esp)
08477eb8 +0x4858:  mov    %eax,(%esp)
08477ebb +0x485b:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477ec0 +0x4860:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477ec5 +0x4865:  lea    -0x310(%ebp),%edx
08477ecb +0x486b:  mov    %edx,0x8(%esp)
08477ecf +0x486f:  movl   $0x1,0x4(%esp)
08477ed7 +0x4877:  mov    %eax,(%esp)
08477eda +0x487a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477edf +0x487f:  jmp    0847abfb <+0x759b>
08477ee4 +0x4884:  mov    0x8(%ebp),%eax
08477ee7 +0x4887:  mov    %eax,-0x144(%ebp)
08477eed +0x488d:  lea    -0x310(%ebp),%eax
08477ef3 +0x4893:  mov    %eax,(%esp)
08477ef6 +0x4896:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477efb +0x489b:  movl   $0x186,0x4(%esp)
08477f03 +0x48a3:  mov    %eax,(%esp)
08477f06 +0x48a6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477f0b +0x48ab:  lea    -0x310(%ebp),%eax
08477f11 +0x48b1:  mov    %eax,(%esp)
08477f14 +0x48b4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477f19 +0x48b9:  movl   $0xffffffff,0x4(%esp)
08477f21 +0x48c1:  mov    %eax,(%esp)
08477f24 +0x48c4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477f29 +0x48c9:  mov    -0x144(%ebp),%eax
08477f2f +0x48cf:  movzwl 0x2(%eax),%eax
08477f33 +0x48d3:  movzwl %ax,%ebx
08477f36 +0x48d6:  lea    -0x310(%ebp),%eax
08477f3c +0x48dc:  mov    %eax,(%esp)
08477f3f +0x48df:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477f44 +0x48e4:  mov    %ebx,0x8(%esp)
08477f48 +0x48e8:  mov    -0x144(%ebp),%edx
08477f4e +0x48ee:  mov    %edx,0x4(%esp)
08477f52 +0x48f2:  mov    %eax,(%esp)
08477f55 +0x48f5:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477f5a +0x48fa:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08477f5f +0x48ff:  lea    -0x310(%ebp),%edx
08477f65 +0x4905:  mov    %edx,0x8(%esp)
08477f69 +0x4909:  movl   $0x1,0x4(%esp)
08477f71 +0x4911:  mov    %eax,(%esp)
08477f74 +0x4914:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08477f79 +0x4919:  jmp    0847abfb <+0x759b>
08477f7e +0x491e:  mov    0x8(%ebp),%eax
08477f81 +0x4921:  mov    %eax,-0x140(%ebp)
08477f87 +0x4927:  lea    -0x310(%ebp),%eax
08477f8d +0x492d:  mov    %eax,(%esp)
08477f90 +0x4930:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477f95 +0x4935:  movl   $0x188,0x4(%esp)
08477f9d +0x493d:  mov    %eax,(%esp)
08477fa0 +0x4940:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477fa5 +0x4945:  mov    -0x140(%ebp),%eax
08477fab +0x494b:  mov    0xa(%eax),%eax
08477fae +0x494e:  mov    %eax,%ebx
08477fb0 +0x4950:  lea    -0x310(%ebp),%eax
08477fb6 +0x4956:  mov    %eax,(%esp)
08477fb9 +0x4959:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08477fbe +0x495e:  mov    %ebx,0x4(%esp)
08477fc2 +0x4962:  mov    %eax,(%esp)
08477fc5 +0x4965:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08477fca +0x496a:  mov    -0x140(%ebp),%eax
08477fd0 +0x4970:  movzwl 0x2(%eax),%eax
08477fd4 +0x4974:  movzwl %ax,%ebx
08477fd7 +0x4977:  lea    -0x310(%ebp),%eax
08477fdd +0x497d:  mov    %eax,(%esp)
08477fe0 +0x4980:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08477fe5 +0x4985:  mov    %ebx,0x8(%esp)
08477fe9 +0x4989:  mov    -0x140(%ebp),%edx
08477fef +0x498f:  mov    %edx,0x4(%esp)
08477ff3 +0x4993:  mov    %eax,(%esp)
08477ff6 +0x4996:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08477ffb +0x499b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478000 +0x49a0:  lea    -0x310(%ebp),%edx
08478006 +0x49a6:  mov    %edx,0x8(%esp)
0847800a +0x49aa:  movl   $0x1,0x4(%esp)
08478012 +0x49b2:  mov    %eax,(%esp)
08478015 +0x49b5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847801a +0x49ba:  jmp    0847abfb <+0x759b>
0847801f +0x49bf:  mov    0x8(%ebp),%eax
08478022 +0x49c2:  mov    %eax,-0x13c(%ebp)
08478028 +0x49c8:  lea    -0x310(%ebp),%eax
0847802e +0x49ce:  mov    %eax,(%esp)
08478031 +0x49d1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478036 +0x49d6:  movl   $0x187,0x4(%esp)
0847803e +0x49de:  mov    %eax,(%esp)
08478041 +0x49e1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478046 +0x49e6:  lea    -0x310(%ebp),%eax
0847804c +0x49ec:  mov    %eax,(%esp)
0847804f +0x49ef:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478054 +0x49f4:  movl   $0xffffffff,0x4(%esp)
0847805c +0x49fc:  mov    %eax,(%esp)
0847805f +0x49ff:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478064 +0x4a04:  mov    -0x13c(%ebp),%eax
0847806a +0x4a0a:  movzwl 0x2(%eax),%eax
0847806e +0x4a0e:  movzwl %ax,%ebx
08478071 +0x4a11:  lea    -0x310(%ebp),%eax
08478077 +0x4a17:  mov    %eax,(%esp)
0847807a +0x4a1a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847807f +0x4a1f:  mov    %ebx,0x8(%esp)
08478083 +0x4a23:  mov    -0x13c(%ebp),%edx
08478089 +0x4a29:  mov    %edx,0x4(%esp)
0847808d +0x4a2d:  mov    %eax,(%esp)
08478090 +0x4a30:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478095 +0x4a35:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847809a +0x4a3a:  lea    -0x310(%ebp),%edx
084780a0 +0x4a40:  mov    %edx,0x8(%esp)
084780a4 +0x4a44:  movl   $0x1,0x4(%esp)
084780ac +0x4a4c:  mov    %eax,(%esp)
084780af +0x4a4f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084780b4 +0x4a54:  jmp    0847abfb <+0x759b>
084780b9 +0x4a59:  mov    0x8(%ebp),%eax
084780bc +0x4a5c:  mov    %eax,-0x138(%ebp)
084780c2 +0x4a62:  lea    -0x310(%ebp),%eax
084780c8 +0x4a68:  mov    %eax,(%esp)
084780cb +0x4a6b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084780d0 +0x4a70:  movl   $0x18e,0x4(%esp)
084780d8 +0x4a78:  mov    %eax,(%esp)
084780db +0x4a7b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084780e0 +0x4a80:  lea    -0x310(%ebp),%eax
084780e6 +0x4a86:  mov    %eax,(%esp)
084780e9 +0x4a89:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084780ee +0x4a8e:  movl   $0xffffffff,0x4(%esp)
084780f6 +0x4a96:  mov    %eax,(%esp)
084780f9 +0x4a99:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084780fe +0x4a9e:  lea    -0x310(%ebp),%eax
08478104 +0x4aa4:  mov    %eax,(%esp)
08478107 +0x4aa7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847810c +0x4aac:  movl   $0xa,0x8(%esp)
08478114 +0x4ab4:  mov    -0x138(%ebp),%edx
0847811a +0x4aba:  mov    %edx,0x4(%esp)
0847811e +0x4abe:  mov    %eax,(%esp)
08478121 +0x4ac1:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478126 +0x4ac6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847812b +0x4acb:  lea    -0x310(%ebp),%edx
08478131 +0x4ad1:  mov    %edx,0x8(%esp)
08478135 +0x4ad5:  movl   $0x1,0x4(%esp)
0847813d +0x4add:  mov    %eax,(%esp)
08478140 +0x4ae0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478145 +0x4ae5:  jmp    0847abfb <+0x759b>
0847814a +0x4aea:  mov    0x8(%ebp),%eax
0847814d +0x4aed:  mov    %eax,-0x134(%ebp)
08478153 +0x4af3:  lea    -0x310(%ebp),%eax
08478159 +0x4af9:  mov    %eax,(%esp)
0847815c +0x4afc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478161 +0x4b01:  movl   $0x198,0x4(%esp)
08478169 +0x4b09:  mov    %eax,(%esp)
0847816c +0x4b0c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478171 +0x4b11:  mov    -0x134(%ebp),%eax
08478177 +0x4b17:  mov    0xa(%eax),%ebx
0847817a +0x4b1a:  lea    -0x310(%ebp),%eax
08478180 +0x4b20:  mov    %eax,(%esp)
08478183 +0x4b23:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478188 +0x4b28:  mov    %ebx,0x4(%esp)
0847818c +0x4b2c:  mov    %eax,(%esp)
0847818f +0x4b2f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478194 +0x4b34:  lea    -0x310(%ebp),%eax
0847819a +0x4b3a:  mov    %eax,(%esp)
0847819d +0x4b3d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084781a2 +0x4b42:  movl   $0x17,0x8(%esp)
084781aa +0x4b4a:  mov    -0x134(%ebp),%edx
084781b0 +0x4b50:  mov    %edx,0x4(%esp)
084781b4 +0x4b54:  mov    %eax,(%esp)
084781b7 +0x4b57:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084781bc +0x4b5c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084781c1 +0x4b61:  lea    -0x310(%ebp),%edx
084781c7 +0x4b67:  mov    %edx,0x8(%esp)
084781cb +0x4b6b:  movl   $0x1,0x4(%esp)
084781d3 +0x4b73:  mov    %eax,(%esp)
084781d6 +0x4b76:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084781db +0x4b7b:  jmp    0847abfb <+0x759b>
084781e0 +0x4b80:  mov    0x8(%ebp),%eax
084781e3 +0x4b83:  mov    %eax,-0x130(%ebp)
084781e9 +0x4b89:  lea    -0x310(%ebp),%eax
084781ef +0x4b8f:  mov    %eax,(%esp)
084781f2 +0x4b92:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084781f7 +0x4b97:  movl   $0x199,0x4(%esp)
084781ff +0x4b9f:  mov    %eax,(%esp)
08478202 +0x4ba2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478207 +0x4ba7:  lea    -0x310(%ebp),%eax
0847820d +0x4bad:  mov    %eax,(%esp)
08478210 +0x4bb0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478215 +0x4bb5:  movl   $0xffffffff,0x4(%esp)
0847821d +0x4bbd:  mov    %eax,(%esp)
08478220 +0x4bc0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478225 +0x4bc5:  lea    -0x310(%ebp),%eax
0847822b +0x4bcb:  mov    %eax,(%esp)
0847822e +0x4bce:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478233 +0x4bd3:  movl   $0xa,0x8(%esp)
0847823b +0x4bdb:  mov    -0x130(%ebp),%edx
08478241 +0x4be1:  mov    %edx,0x4(%esp)
08478245 +0x4be5:  mov    %eax,(%esp)
08478248 +0x4be8:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847824d +0x4bed:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478252 +0x4bf2:  lea    -0x310(%ebp),%edx
08478258 +0x4bf8:  mov    %edx,0x8(%esp)
0847825c +0x4bfc:  movl   $0x1,0x4(%esp)
08478264 +0x4c04:  mov    %eax,(%esp)
08478267 +0x4c07:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847826c +0x4c0c:  jmp    0847abfb <+0x759b>
08478271 +0x4c11:  mov    0x8(%ebp),%eax
08478274 +0x4c14:  mov    %eax,-0x12c(%ebp)
0847827a +0x4c1a:  lea    -0x310(%ebp),%eax
08478280 +0x4c20:  mov    %eax,(%esp)
08478283 +0x4c23:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478288 +0x4c28:  movl   $0x1a0,0x4(%esp)
08478290 +0x4c30:  mov    %eax,(%esp)
08478293 +0x4c33:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478298 +0x4c38:  mov    -0x12c(%ebp),%eax
0847829e +0x4c3e:  mov    0xa(%eax),%ebx
084782a1 +0x4c41:  lea    -0x310(%ebp),%eax
084782a7 +0x4c47:  mov    %eax,(%esp)
084782aa +0x4c4a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084782af +0x4c4f:  mov    %ebx,0x4(%esp)
084782b3 +0x4c53:  mov    %eax,(%esp)
084782b6 +0x4c56:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084782bb +0x4c5b:  mov    -0x12c(%ebp),%eax
084782c1 +0x4c61:  movzwl 0x2(%eax),%eax
084782c5 +0x4c65:  movzwl %ax,%ebx
084782c8 +0x4c68:  lea    -0x310(%ebp),%eax
084782ce +0x4c6e:  mov    %eax,(%esp)
084782d1 +0x4c71:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084782d6 +0x4c76:  mov    %ebx,0x8(%esp)
084782da +0x4c7a:  mov    -0x12c(%ebp),%edx
084782e0 +0x4c80:  mov    %edx,0x4(%esp)
084782e4 +0x4c84:  mov    %eax,(%esp)
084782e7 +0x4c87:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084782ec +0x4c8c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084782f1 +0x4c91:  lea    -0x310(%ebp),%edx
084782f7 +0x4c97:  mov    %edx,0x8(%esp)
084782fb +0x4c9b:  movl   $0x1,0x4(%esp)
08478303 +0x4ca3:  mov    %eax,(%esp)
08478306 +0x4ca6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847830b +0x4cab:  jmp    0847abfb <+0x759b>
08478310 +0x4cb0:  mov    0x8(%ebp),%eax
08478313 +0x4cb3:  mov    %eax,-0x128(%ebp)
08478319 +0x4cb9:  lea    -0x310(%ebp),%eax
0847831f +0x4cbf:  mov    %eax,(%esp)
08478322 +0x4cc2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478327 +0x4cc7:  movl   $0x1a2,0x4(%esp)
0847832f +0x4ccf:  mov    %eax,(%esp)
08478332 +0x4cd2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478337 +0x4cd7:  mov    -0x128(%ebp),%eax
0847833d +0x4cdd:  mov    0xa(%eax),%ebx
08478340 +0x4ce0:  lea    -0x310(%ebp),%eax
08478346 +0x4ce6:  mov    %eax,(%esp)
08478349 +0x4ce9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847834e +0x4cee:  mov    %ebx,0x4(%esp)
08478352 +0x4cf2:  mov    %eax,(%esp)
08478355 +0x4cf5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847835a +0x4cfa:  mov    -0x128(%ebp),%eax
08478360 +0x4d00:  movzwl 0x2(%eax),%eax
08478364 +0x4d04:  movzwl %ax,%ebx
08478367 +0x4d07:  lea    -0x310(%ebp),%eax
0847836d +0x4d0d:  mov    %eax,(%esp)
08478370 +0x4d10:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478375 +0x4d15:  mov    %ebx,0x8(%esp)
08478379 +0x4d19:  mov    -0x128(%ebp),%edx
0847837f +0x4d1f:  mov    %edx,0x4(%esp)
08478383 +0x4d23:  mov    %eax,(%esp)
08478386 +0x4d26:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847838b +0x4d2b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478390 +0x4d30:  lea    -0x310(%ebp),%edx
08478396 +0x4d36:  mov    %edx,0x8(%esp)
0847839a +0x4d3a:  movl   $0x1,0x4(%esp)
084783a2 +0x4d42:  mov    %eax,(%esp)
084783a5 +0x4d45:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084783aa +0x4d4a:  jmp    0847abfb <+0x759b>
084783af +0x4d4f:  mov    0x8(%ebp),%eax
084783b2 +0x4d52:  mov    %eax,-0x124(%ebp)
084783b8 +0x4d58:  lea    -0x310(%ebp),%eax
084783be +0x4d5e:  mov    %eax,(%esp)
084783c1 +0x4d61:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084783c6 +0x4d66:  movl   $0x1aa,0x4(%esp)
084783ce +0x4d6e:  mov    %eax,(%esp)
084783d1 +0x4d71:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084783d6 +0x4d76:  mov    -0x124(%ebp),%eax
084783dc +0x4d7c:  mov    0xa(%eax),%ebx
084783df +0x4d7f:  lea    -0x310(%ebp),%eax
084783e5 +0x4d85:  mov    %eax,(%esp)
084783e8 +0x4d88:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084783ed +0x4d8d:  mov    %ebx,0x4(%esp)
084783f1 +0x4d91:  mov    %eax,(%esp)
084783f4 +0x4d94:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084783f9 +0x4d99:  mov    -0x124(%ebp),%eax
084783ff +0x4d9f:  movzwl 0x2(%eax),%eax
08478403 +0x4da3:  movzwl %ax,%ebx
08478406 +0x4da6:  lea    -0x310(%ebp),%eax
0847840c +0x4dac:  mov    %eax,(%esp)
0847840f +0x4daf:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478414 +0x4db4:  mov    %ebx,0x8(%esp)
08478418 +0x4db8:  mov    -0x124(%ebp),%edx
0847841e +0x4dbe:  mov    %edx,0x4(%esp)
08478422 +0x4dc2:  mov    %eax,(%esp)
08478425 +0x4dc5:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847842a +0x4dca:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847842f +0x4dcf:  lea    -0x310(%ebp),%edx
08478435 +0x4dd5:  mov    %edx,0x8(%esp)
08478439 +0x4dd9:  movl   $0x1,0x4(%esp)
08478441 +0x4de1:  mov    %eax,(%esp)
08478444 +0x4de4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478449 +0x4de9:  jmp    0847abfb <+0x759b>
0847844e +0x4dee:  mov    0x8(%ebp),%eax
08478451 +0x4df1:  mov    %eax,-0x120(%ebp)
08478457 +0x4df7:  lea    -0x310(%ebp),%eax
0847845d +0x4dfd:  mov    %eax,(%esp)
08478460 +0x4e00:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478465 +0x4e05:  movl   $0x1ab,0x4(%esp)
0847846d +0x4e0d:  mov    %eax,(%esp)
08478470 +0x4e10:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478475 +0x4e15:  mov    -0x120(%ebp),%eax
0847847b +0x4e1b:  mov    0xa(%eax),%ebx
0847847e +0x4e1e:  lea    -0x310(%ebp),%eax
08478484 +0x4e24:  mov    %eax,(%esp)
08478487 +0x4e27:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847848c +0x4e2c:  mov    %ebx,0x4(%esp)
08478490 +0x4e30:  mov    %eax,(%esp)
08478493 +0x4e33:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478498 +0x4e38:  mov    -0x120(%ebp),%eax
0847849e +0x4e3e:  movzwl 0x2(%eax),%eax
084784a2 +0x4e42:  movzwl %ax,%ebx
084784a5 +0x4e45:  lea    -0x310(%ebp),%eax
084784ab +0x4e4b:  mov    %eax,(%esp)
084784ae +0x4e4e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084784b3 +0x4e53:  mov    %ebx,0x8(%esp)
084784b7 +0x4e57:  mov    -0x120(%ebp),%edx
084784bd +0x4e5d:  mov    %edx,0x4(%esp)
084784c1 +0x4e61:  mov    %eax,(%esp)
084784c4 +0x4e64:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084784c9 +0x4e69:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084784ce +0x4e6e:  lea    -0x310(%ebp),%edx
084784d4 +0x4e74:  mov    %edx,0x8(%esp)
084784d8 +0x4e78:  movl   $0x1,0x4(%esp)
084784e0 +0x4e80:  mov    %eax,(%esp)
084784e3 +0x4e83:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084784e8 +0x4e88:  jmp    0847abfb <+0x759b>
084784ed +0x4e8d:  mov    0x8(%ebp),%eax
084784f0 +0x4e90:  mov    %eax,-0x11c(%ebp)
084784f6 +0x4e96:  lea    -0x310(%ebp),%eax
084784fc +0x4e9c:  mov    %eax,(%esp)
084784ff +0x4e9f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478504 +0x4ea4:  movl   $0x1ac,0x4(%esp)
0847850c +0x4eac:  mov    %eax,(%esp)
0847850f +0x4eaf:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478514 +0x4eb4:  mov    -0x11c(%ebp),%eax
0847851a +0x4eba:  mov    0xa(%eax),%ebx
0847851d +0x4ebd:  lea    -0x310(%ebp),%eax
08478523 +0x4ec3:  mov    %eax,(%esp)
08478526 +0x4ec6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847852b +0x4ecb:  mov    %ebx,0x4(%esp)
0847852f +0x4ecf:  mov    %eax,(%esp)
08478532 +0x4ed2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478537 +0x4ed7:  mov    -0x11c(%ebp),%eax
0847853d +0x4edd:  movzwl 0x2(%eax),%eax
08478541 +0x4ee1:  movzwl %ax,%ebx
08478544 +0x4ee4:  lea    -0x310(%ebp),%eax
0847854a +0x4eea:  mov    %eax,(%esp)
0847854d +0x4eed:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478552 +0x4ef2:  mov    %ebx,0x8(%esp)
08478556 +0x4ef6:  mov    -0x11c(%ebp),%edx
0847855c +0x4efc:  mov    %edx,0x4(%esp)
08478560 +0x4f00:  mov    %eax,(%esp)
08478563 +0x4f03:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478568 +0x4f08:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847856d +0x4f0d:  lea    -0x310(%ebp),%edx
08478573 +0x4f13:  mov    %edx,0x8(%esp)
08478577 +0x4f17:  movl   $0x1,0x4(%esp)
0847857f +0x4f1f:  mov    %eax,(%esp)
08478582 +0x4f22:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478587 +0x4f27:  jmp    0847abfb <+0x759b>
0847858c +0x4f2c:  mov    0x8(%ebp),%eax
0847858f +0x4f2f:  mov    %eax,-0x118(%ebp)
08478595 +0x4f35:  lea    -0x310(%ebp),%eax
0847859b +0x4f3b:  mov    %eax,(%esp)
0847859e +0x4f3e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084785a3 +0x4f43:  movl   $0x1ad,0x4(%esp)
084785ab +0x4f4b:  mov    %eax,(%esp)
084785ae +0x4f4e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084785b3 +0x4f53:  mov    -0x118(%ebp),%eax
084785b9 +0x4f59:  mov    0xa(%eax),%ebx
084785bc +0x4f5c:  lea    -0x310(%ebp),%eax
084785c2 +0x4f62:  mov    %eax,(%esp)
084785c5 +0x4f65:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084785ca +0x4f6a:  mov    %ebx,0x4(%esp)
084785ce +0x4f6e:  mov    %eax,(%esp)
084785d1 +0x4f71:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084785d6 +0x4f76:  mov    -0x118(%ebp),%eax
084785dc +0x4f7c:  movzwl 0x2(%eax),%eax
084785e0 +0x4f80:  movzwl %ax,%ebx
084785e3 +0x4f83:  lea    -0x310(%ebp),%eax
084785e9 +0x4f89:  mov    %eax,(%esp)
084785ec +0x4f8c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084785f1 +0x4f91:  mov    %ebx,0x8(%esp)
084785f5 +0x4f95:  mov    -0x118(%ebp),%edx
084785fb +0x4f9b:  mov    %edx,0x4(%esp)
084785ff +0x4f9f:  mov    %eax,(%esp)
08478602 +0x4fa2:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478607 +0x4fa7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847860c +0x4fac:  lea    -0x310(%ebp),%edx
08478612 +0x4fb2:  mov    %edx,0x8(%esp)
08478616 +0x4fb6:  movl   $0x1,0x4(%esp)
0847861e +0x4fbe:  mov    %eax,(%esp)
08478621 +0x4fc1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478626 +0x4fc6:  jmp    0847abfb <+0x759b>
0847862b +0x4fcb:  mov    0x8(%ebp),%eax
0847862e +0x4fce:  mov    %eax,-0x114(%ebp)
08478634 +0x4fd4:  lea    -0x310(%ebp),%eax
0847863a +0x4fda:  mov    %eax,(%esp)
0847863d +0x4fdd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478642 +0x4fe2:  movl   $0x1ae,0x4(%esp)
0847864a +0x4fea:  mov    %eax,(%esp)
0847864d +0x4fed:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478652 +0x4ff2:  mov    -0x114(%ebp),%eax
08478658 +0x4ff8:  mov    0xa(%eax),%ebx
0847865b +0x4ffb:  lea    -0x310(%ebp),%eax
08478661 +0x5001:  mov    %eax,(%esp)
08478664 +0x5004:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478669 +0x5009:  mov    %ebx,0x4(%esp)
0847866d +0x500d:  mov    %eax,(%esp)
08478670 +0x5010:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478675 +0x5015:  mov    -0x114(%ebp),%eax
0847867b +0x501b:  movzwl 0x2(%eax),%eax
0847867f +0x501f:  movzwl %ax,%ebx
08478682 +0x5022:  lea    -0x310(%ebp),%eax
08478688 +0x5028:  mov    %eax,(%esp)
0847868b +0x502b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478690 +0x5030:  mov    %ebx,0x8(%esp)
08478694 +0x5034:  mov    -0x114(%ebp),%edx
0847869a +0x503a:  mov    %edx,0x4(%esp)
0847869e +0x503e:  mov    %eax,(%esp)
084786a1 +0x5041:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084786a6 +0x5046:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084786ab +0x504b:  lea    -0x310(%ebp),%edx
084786b1 +0x5051:  mov    %edx,0x8(%esp)
084786b5 +0x5055:  movl   $0x1,0x4(%esp)
084786bd +0x505d:  mov    %eax,(%esp)
084786c0 +0x5060:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084786c5 +0x5065:  jmp    0847abfb <+0x759b>
084786ca +0x506a:  mov    0x8(%ebp),%eax
084786cd +0x506d:  mov    %eax,-0x110(%ebp)
084786d3 +0x5073:  lea    -0x310(%ebp),%eax
084786d9 +0x5079:  mov    %eax,(%esp)
084786dc +0x507c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084786e1 +0x5081:  movl   $0x1af,0x4(%esp)
084786e9 +0x5089:  mov    %eax,(%esp)
084786ec +0x508c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084786f1 +0x5091:  mov    -0x110(%ebp),%eax
084786f7 +0x5097:  mov    0xa(%eax),%ebx
084786fa +0x509a:  lea    -0x310(%ebp),%eax
08478700 +0x50a0:  mov    %eax,(%esp)
08478703 +0x50a3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478708 +0x50a8:  mov    %ebx,0x4(%esp)
0847870c +0x50ac:  mov    %eax,(%esp)
0847870f +0x50af:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478714 +0x50b4:  mov    -0x110(%ebp),%eax
0847871a +0x50ba:  movzwl 0x2(%eax),%eax
0847871e +0x50be:  movzwl %ax,%ebx
08478721 +0x50c1:  lea    -0x310(%ebp),%eax
08478727 +0x50c7:  mov    %eax,(%esp)
0847872a +0x50ca:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847872f +0x50cf:  mov    %ebx,0x8(%esp)
08478733 +0x50d3:  mov    -0x110(%ebp),%edx
08478739 +0x50d9:  mov    %edx,0x4(%esp)
0847873d +0x50dd:  mov    %eax,(%esp)
08478740 +0x50e0:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478745 +0x50e5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847874a +0x50ea:  lea    -0x310(%ebp),%edx
08478750 +0x50f0:  mov    %edx,0x8(%esp)
08478754 +0x50f4:  movl   $0x1,0x4(%esp)
0847875c +0x50fc:  mov    %eax,(%esp)
0847875f +0x50ff:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478764 +0x5104:  jmp    0847abfb <+0x759b>
08478769 +0x5109:  mov    0x8(%ebp),%eax
0847876c +0x510c:  mov    %eax,-0x10c(%ebp)
08478772 +0x5112:  lea    -0x310(%ebp),%eax
08478778 +0x5118:  mov    %eax,(%esp)
0847877b +0x511b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478780 +0x5120:  movl   $0x1b0,0x4(%esp)
08478788 +0x5128:  mov    %eax,(%esp)
0847878b +0x512b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478790 +0x5130:  mov    -0x10c(%ebp),%eax
08478796 +0x5136:  mov    0xa(%eax),%ebx
08478799 +0x5139:  lea    -0x310(%ebp),%eax
0847879f +0x513f:  mov    %eax,(%esp)
084787a2 +0x5142:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084787a7 +0x5147:  mov    %ebx,0x4(%esp)
084787ab +0x514b:  mov    %eax,(%esp)
084787ae +0x514e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084787b3 +0x5153:  mov    -0x10c(%ebp),%eax
084787b9 +0x5159:  movzwl 0x2(%eax),%eax
084787bd +0x515d:  movzwl %ax,%ebx
084787c0 +0x5160:  lea    -0x310(%ebp),%eax
084787c6 +0x5166:  mov    %eax,(%esp)
084787c9 +0x5169:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084787ce +0x516e:  mov    %ebx,0x8(%esp)
084787d2 +0x5172:  mov    -0x10c(%ebp),%edx
084787d8 +0x5178:  mov    %edx,0x4(%esp)
084787dc +0x517c:  mov    %eax,(%esp)
084787df +0x517f:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084787e4 +0x5184:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084787e9 +0x5189:  lea    -0x310(%ebp),%edx
084787ef +0x518f:  mov    %edx,0x8(%esp)
084787f3 +0x5193:  movl   $0x1,0x4(%esp)
084787fb +0x519b:  mov    %eax,(%esp)
084787fe +0x519e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478803 +0x51a3:  jmp    0847abfb <+0x759b>
08478808 +0x51a8:  mov    0x8(%ebp),%eax
0847880b +0x51ab:  mov    %eax,-0x108(%ebp)
08478811 +0x51b1:  lea    -0x310(%ebp),%eax
08478817 +0x51b7:  mov    %eax,(%esp)
0847881a +0x51ba:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847881f +0x51bf:  movl   $0x1b2,0x4(%esp)
08478827 +0x51c7:  mov    %eax,(%esp)
0847882a +0x51ca:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847882f +0x51cf:  mov    -0x108(%ebp),%eax
08478835 +0x51d5:  mov    0xa(%eax),%ebx
08478838 +0x51d8:  lea    -0x310(%ebp),%eax
0847883e +0x51de:  mov    %eax,(%esp)
08478841 +0x51e1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478846 +0x51e6:  mov    %ebx,0x4(%esp)
0847884a +0x51ea:  mov    %eax,(%esp)
0847884d +0x51ed:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478852 +0x51f2:  mov    -0x108(%ebp),%eax
08478858 +0x51f8:  movzwl 0x2(%eax),%eax
0847885c +0x51fc:  movzwl %ax,%ebx
0847885f +0x51ff:  lea    -0x310(%ebp),%eax
08478865 +0x5205:  mov    %eax,(%esp)
08478868 +0x5208:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847886d +0x520d:  mov    %ebx,0x8(%esp)
08478871 +0x5211:  mov    -0x108(%ebp),%edx
08478877 +0x5217:  mov    %edx,0x4(%esp)
0847887b +0x521b:  mov    %eax,(%esp)
0847887e +0x521e:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478883 +0x5223:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478888 +0x5228:  lea    -0x310(%ebp),%edx
0847888e +0x522e:  mov    %edx,0x8(%esp)
08478892 +0x5232:  movl   $0x1,0x4(%esp)
0847889a +0x523a:  mov    %eax,(%esp)
0847889d +0x523d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084788a2 +0x5242:  jmp    0847abfb <+0x759b>
084788a7 +0x5247:  mov    0x8(%ebp),%eax
084788aa +0x524a:  mov    %eax,-0x104(%ebp)
084788b0 +0x5250:  lea    -0x310(%ebp),%eax
084788b6 +0x5256:  mov    %eax,(%esp)
084788b9 +0x5259:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084788be +0x525e:  movl   $0x1b3,0x4(%esp)
084788c6 +0x5266:  mov    %eax,(%esp)
084788c9 +0x5269:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084788ce +0x526e:  mov    -0x104(%ebp),%eax
084788d4 +0x5274:  mov    0xf(%eax),%eax
084788d7 +0x5277:  mov    %eax,%ebx
084788d9 +0x5279:  lea    -0x310(%ebp),%eax
084788df +0x527f:  mov    %eax,(%esp)
084788e2 +0x5282:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084788e7 +0x5287:  mov    %ebx,0x4(%esp)
084788eb +0x528b:  mov    %eax,(%esp)
084788ee +0x528e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084788f3 +0x5293:  mov    -0x104(%ebp),%eax
084788f9 +0x5299:  movzwl 0x2(%eax),%eax
084788fd +0x529d:  movzwl %ax,%ebx
08478900 +0x52a0:  lea    -0x310(%ebp),%eax
08478906 +0x52a6:  mov    %eax,(%esp)
08478909 +0x52a9:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847890e +0x52ae:  mov    %ebx,0x8(%esp)
08478912 +0x52b2:  mov    -0x104(%ebp),%edx
08478918 +0x52b8:  mov    %edx,0x4(%esp)
0847891c +0x52bc:  mov    %eax,(%esp)
0847891f +0x52bf:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478924 +0x52c4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478929 +0x52c9:  lea    -0x310(%ebp),%edx
0847892f +0x52cf:  mov    %edx,0x8(%esp)
08478933 +0x52d3:  movl   $0x1,0x4(%esp)
0847893b +0x52db:  mov    %eax,(%esp)
0847893e +0x52de:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478943 +0x52e3:  jmp    0847abfb <+0x759b>
08478948 +0x52e8:  mov    0x8(%ebp),%eax
0847894b +0x52eb:  mov    %eax,-0x100(%ebp)
08478951 +0x52f1:  lea    -0x310(%ebp),%eax
08478957 +0x52f7:  mov    %eax,(%esp)
0847895a +0x52fa:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847895f +0x52ff:  movl   $0x1b4,0x4(%esp)
08478967 +0x5307:  mov    %eax,(%esp)
0847896a +0x530a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847896f +0x530f:  mov    -0x100(%ebp),%eax
08478975 +0x5315:  mov    0xf(%eax),%eax
08478978 +0x5318:  mov    %eax,%ebx
0847897a +0x531a:  lea    -0x310(%ebp),%eax
08478980 +0x5320:  mov    %eax,(%esp)
08478983 +0x5323:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478988 +0x5328:  mov    %ebx,0x4(%esp)
0847898c +0x532c:  mov    %eax,(%esp)
0847898f +0x532f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478994 +0x5334:  mov    -0x100(%ebp),%eax
0847899a +0x533a:  movzwl 0x2(%eax),%eax
0847899e +0x533e:  movzwl %ax,%ebx
084789a1 +0x5341:  lea    -0x310(%ebp),%eax
084789a7 +0x5347:  mov    %eax,(%esp)
084789aa +0x534a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084789af +0x534f:  mov    %ebx,0x8(%esp)
084789b3 +0x5353:  mov    -0x100(%ebp),%edx
084789b9 +0x5359:  mov    %edx,0x4(%esp)
084789bd +0x535d:  mov    %eax,(%esp)
084789c0 +0x5360:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084789c5 +0x5365:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084789ca +0x536a:  lea    -0x310(%ebp),%edx
084789d0 +0x5370:  mov    %edx,0x8(%esp)
084789d4 +0x5374:  movl   $0x1,0x4(%esp)
084789dc +0x537c:  mov    %eax,(%esp)
084789df +0x537f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084789e4 +0x5384:  jmp    0847abfb <+0x759b>
084789e9 +0x5389:  mov    0x8(%ebp),%eax
084789ec +0x538c:  mov    %eax,-0xfc(%ebp)
084789f2 +0x5392:  lea    -0x310(%ebp),%eax
084789f8 +0x5398:  mov    %eax,(%esp)
084789fb +0x539b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478a00 +0x53a0:  movl   $0x192,0x4(%esp)
08478a08 +0x53a8:  mov    %eax,(%esp)
08478a0b +0x53ab:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478a10 +0x53b0:  lea    -0x310(%ebp),%eax
08478a16 +0x53b6:  mov    %eax,(%esp)
08478a19 +0x53b9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478a1e +0x53be:  movl   $0xffffffff,0x4(%esp)
08478a26 +0x53c6:  mov    %eax,(%esp)
08478a29 +0x53c9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478a2e +0x53ce:  mov    -0xfc(%ebp),%eax
08478a34 +0x53d4:  movzwl 0x2(%eax),%eax
08478a38 +0x53d8:  movzwl %ax,%ebx
08478a3b +0x53db:  lea    -0x310(%ebp),%eax
08478a41 +0x53e1:  mov    %eax,(%esp)
08478a44 +0x53e4:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478a49 +0x53e9:  mov    %ebx,0x8(%esp)
08478a4d +0x53ed:  mov    -0xfc(%ebp),%edx
08478a53 +0x53f3:  mov    %edx,0x4(%esp)
08478a57 +0x53f7:  mov    %eax,(%esp)
08478a5a +0x53fa:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478a5f +0x53ff:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478a64 +0x5404:  lea    -0x310(%ebp),%edx
08478a6a +0x540a:  mov    %edx,0x8(%esp)
08478a6e +0x540e:  movl   $0x1,0x4(%esp)
08478a76 +0x5416:  mov    %eax,(%esp)
08478a79 +0x5419:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478a7e +0x541e:  jmp    0847abfb <+0x759b>
08478a83 +0x5423:  mov    0x8(%ebp),%eax
08478a86 +0x5426:  mov    %eax,-0xf8(%ebp)
08478a8c +0x542c:  lea    -0x310(%ebp),%eax
08478a92 +0x5432:  mov    %eax,(%esp)
08478a95 +0x5435:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478a9a +0x543a:  movl   $0x194,0x4(%esp)
08478aa2 +0x5442:  mov    %eax,(%esp)
08478aa5 +0x5445:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478aaa +0x544a:  lea    -0x310(%ebp),%eax
08478ab0 +0x5450:  mov    %eax,(%esp)
08478ab3 +0x5453:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478ab8 +0x5458:  movl   $0xffffffff,0x4(%esp)
08478ac0 +0x5460:  mov    %eax,(%esp)
08478ac3 +0x5463:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478ac8 +0x5468:  mov    -0xf8(%ebp),%eax
08478ace +0x546e:  movzwl 0x2(%eax),%eax
08478ad2 +0x5472:  movzwl %ax,%ebx
08478ad5 +0x5475:  lea    -0x310(%ebp),%eax
08478adb +0x547b:  mov    %eax,(%esp)
08478ade +0x547e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478ae3 +0x5483:  mov    %ebx,0x8(%esp)
08478ae7 +0x5487:  mov    -0xf8(%ebp),%edx
08478aed +0x548d:  mov    %edx,0x4(%esp)
08478af1 +0x5491:  mov    %eax,(%esp)
08478af4 +0x5494:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478af9 +0x5499:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478afe +0x549e:  lea    -0x310(%ebp),%edx
08478b04 +0x54a4:  mov    %edx,0x8(%esp)
08478b08 +0x54a8:  movl   $0x1,0x4(%esp)
08478b10 +0x54b0:  mov    %eax,(%esp)
08478b13 +0x54b3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478b18 +0x54b8:  jmp    0847abfb <+0x759b>
08478b1d +0x54bd:  mov    0x8(%ebp),%eax
08478b20 +0x54c0:  mov    %eax,-0xf4(%ebp)
08478b26 +0x54c6:  lea    -0x310(%ebp),%eax
08478b2c +0x54cc:  mov    %eax,(%esp)
08478b2f +0x54cf:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478b34 +0x54d4:  movl   $0x1b5,0x4(%esp)
08478b3c +0x54dc:  mov    %eax,(%esp)
08478b3f +0x54df:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478b44 +0x54e4:  lea    -0x310(%ebp),%eax
08478b4a +0x54ea:  mov    %eax,(%esp)
08478b4d +0x54ed:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478b52 +0x54f2:  movl   $0xffffffff,0x4(%esp)
08478b5a +0x54fa:  mov    %eax,(%esp)
08478b5d +0x54fd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478b62 +0x5502:  mov    -0xf4(%ebp),%eax
08478b68 +0x5508:  movzwl 0x2(%eax),%eax
08478b6c +0x550c:  movzwl %ax,%ebx
08478b6f +0x550f:  lea    -0x310(%ebp),%eax
08478b75 +0x5515:  mov    %eax,(%esp)
08478b78 +0x5518:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478b7d +0x551d:  mov    %ebx,0x8(%esp)
08478b81 +0x5521:  mov    -0xf4(%ebp),%edx
08478b87 +0x5527:  mov    %edx,0x4(%esp)
08478b8b +0x552b:  mov    %eax,(%esp)
08478b8e +0x552e:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478b93 +0x5533:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478b98 +0x5538:  lea    -0x310(%ebp),%edx
08478b9e +0x553e:  mov    %edx,0x8(%esp)
08478ba2 +0x5542:  movl   $0x1,0x4(%esp)
08478baa +0x554a:  mov    %eax,(%esp)
08478bad +0x554d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478bb2 +0x5552:  jmp    0847abfb <+0x759b>
08478bb7 +0x5557:  mov    0x8(%ebp),%eax
08478bba +0x555a:  mov    %eax,-0xf0(%ebp)
08478bc0 +0x5560:  lea    -0x310(%ebp),%eax
08478bc6 +0x5566:  mov    %eax,(%esp)
08478bc9 +0x5569:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478bce +0x556e:  movl   $0x1b9,0x4(%esp)
08478bd6 +0x5576:  mov    %eax,(%esp)
08478bd9 +0x5579:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478bde +0x557e:  lea    -0x310(%ebp),%eax
08478be4 +0x5584:  mov    %eax,(%esp)
08478be7 +0x5587:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478bec +0x558c:  movl   $0xffffffff,0x4(%esp)
08478bf4 +0x5594:  mov    %eax,(%esp)
08478bf7 +0x5597:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478bfc +0x559c:  mov    -0xf0(%ebp),%eax
08478c02 +0x55a2:  movzwl 0x2(%eax),%eax
08478c06 +0x55a6:  movzwl %ax,%ebx
08478c09 +0x55a9:  lea    -0x310(%ebp),%eax
08478c0f +0x55af:  mov    %eax,(%esp)
08478c12 +0x55b2:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478c17 +0x55b7:  mov    %ebx,0x8(%esp)
08478c1b +0x55bb:  mov    -0xf0(%ebp),%edx
08478c21 +0x55c1:  mov    %edx,0x4(%esp)
08478c25 +0x55c5:  mov    %eax,(%esp)
08478c28 +0x55c8:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478c2d +0x55cd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478c32 +0x55d2:  lea    -0x310(%ebp),%edx
08478c38 +0x55d8:  mov    %edx,0x8(%esp)
08478c3c +0x55dc:  movl   $0x1,0x4(%esp)
08478c44 +0x55e4:  mov    %eax,(%esp)
08478c47 +0x55e7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478c4c +0x55ec:  jmp    0847abfb <+0x759b>
08478c51 +0x55f1:  mov    0x8(%ebp),%eax
08478c54 +0x55f4:  mov    %eax,-0xec(%ebp)
08478c5a +0x55fa:  lea    -0x310(%ebp),%eax
08478c60 +0x5600:  mov    %eax,(%esp)
08478c63 +0x5603:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478c68 +0x5608:  movl   $0x1ba,0x4(%esp)
08478c70 +0x5610:  mov    %eax,(%esp)
08478c73 +0x5613:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478c78 +0x5618:  lea    -0x310(%ebp),%eax
08478c7e +0x561e:  mov    %eax,(%esp)
08478c81 +0x5621:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478c86 +0x5626:  movl   $0xffffffff,0x4(%esp)
08478c8e +0x562e:  mov    %eax,(%esp)
08478c91 +0x5631:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478c96 +0x5636:  mov    -0xec(%ebp),%eax
08478c9c +0x563c:  movzwl 0x2(%eax),%eax
08478ca0 +0x5640:  movzwl %ax,%ebx
08478ca3 +0x5643:  lea    -0x310(%ebp),%eax
08478ca9 +0x5649:  mov    %eax,(%esp)
08478cac +0x564c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478cb1 +0x5651:  mov    %ebx,0x8(%esp)
08478cb5 +0x5655:  mov    -0xec(%ebp),%edx
08478cbb +0x565b:  mov    %edx,0x4(%esp)
08478cbf +0x565f:  mov    %eax,(%esp)
08478cc2 +0x5662:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478cc7 +0x5667:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478ccc +0x566c:  lea    -0x310(%ebp),%edx
08478cd2 +0x5672:  mov    %edx,0x8(%esp)
08478cd6 +0x5676:  movl   $0x1,0x4(%esp)
08478cde +0x567e:  mov    %eax,(%esp)
08478ce1 +0x5681:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478ce6 +0x5686:  jmp    0847abfb <+0x759b>
08478ceb +0x568b:  mov    0x8(%ebp),%eax
08478cee +0x568e:  mov    %eax,-0xe8(%ebp)
08478cf4 +0x5694:  lea    -0x310(%ebp),%eax
08478cfa +0x569a:  mov    %eax,(%esp)
08478cfd +0x569d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478d02 +0x56a2:  movl   $0x1bb,0x4(%esp)
08478d0a +0x56aa:  mov    %eax,(%esp)
08478d0d +0x56ad:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478d12 +0x56b2:  lea    -0x310(%ebp),%eax
08478d18 +0x56b8:  mov    %eax,(%esp)
08478d1b +0x56bb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478d20 +0x56c0:  movl   $0xffffffff,0x4(%esp)
08478d28 +0x56c8:  mov    %eax,(%esp)
08478d2b +0x56cb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478d30 +0x56d0:  mov    -0xe8(%ebp),%eax
08478d36 +0x56d6:  movzwl 0x2(%eax),%eax
08478d3a +0x56da:  movzwl %ax,%ebx
08478d3d +0x56dd:  lea    -0x310(%ebp),%eax
08478d43 +0x56e3:  mov    %eax,(%esp)
08478d46 +0x56e6:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478d4b +0x56eb:  mov    %ebx,0x8(%esp)
08478d4f +0x56ef:  mov    -0xe8(%ebp),%edx
08478d55 +0x56f5:  mov    %edx,0x4(%esp)
08478d59 +0x56f9:  mov    %eax,(%esp)
08478d5c +0x56fc:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478d61 +0x5701:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478d66 +0x5706:  lea    -0x310(%ebp),%edx
08478d6c +0x570c:  mov    %edx,0x8(%esp)
08478d70 +0x5710:  movl   $0x1,0x4(%esp)
08478d78 +0x5718:  mov    %eax,(%esp)
08478d7b +0x571b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478d80 +0x5720:  jmp    0847abfb <+0x759b>
08478d85 +0x5725:  mov    0x8(%ebp),%eax
08478d88 +0x5728:  mov    %eax,-0xe4(%ebp)
08478d8e +0x572e:  lea    -0x310(%ebp),%eax
08478d94 +0x5734:  mov    %eax,(%esp)
08478d97 +0x5737:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478d9c +0x573c:  movl   $0x1bc,0x4(%esp)
08478da4 +0x5744:  mov    %eax,(%esp)
08478da7 +0x5747:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478dac +0x574c:  lea    -0x310(%ebp),%eax
08478db2 +0x5752:  mov    %eax,(%esp)
08478db5 +0x5755:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478dba +0x575a:  movl   $0xffffffff,0x4(%esp)
08478dc2 +0x5762:  mov    %eax,(%esp)
08478dc5 +0x5765:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478dca +0x576a:  mov    -0xe4(%ebp),%eax
08478dd0 +0x5770:  movzwl 0x2(%eax),%eax
08478dd4 +0x5774:  movzwl %ax,%ebx
08478dd7 +0x5777:  lea    -0x310(%ebp),%eax
08478ddd +0x577d:  mov    %eax,(%esp)
08478de0 +0x5780:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478de5 +0x5785:  mov    %ebx,0x8(%esp)
08478de9 +0x5789:  mov    -0xe4(%ebp),%edx
08478def +0x578f:  mov    %edx,0x4(%esp)
08478df3 +0x5793:  mov    %eax,(%esp)
08478df6 +0x5796:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478dfb +0x579b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478e00 +0x57a0:  lea    -0x310(%ebp),%edx
08478e06 +0x57a6:  mov    %edx,0x8(%esp)
08478e0a +0x57aa:  movl   $0x1,0x4(%esp)
08478e12 +0x57b2:  mov    %eax,(%esp)
08478e15 +0x57b5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478e1a +0x57ba:  jmp    0847abfb <+0x759b>
08478e1f +0x57bf:  mov    0x8(%ebp),%eax
08478e22 +0x57c2:  mov    %eax,-0xe0(%ebp)
08478e28 +0x57c8:  lea    -0x310(%ebp),%eax
08478e2e +0x57ce:  mov    %eax,(%esp)
08478e31 +0x57d1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478e36 +0x57d6:  movl   $0x1bd,0x4(%esp)
08478e3e +0x57de:  mov    %eax,(%esp)
08478e41 +0x57e1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478e46 +0x57e6:  mov    -0xe0(%ebp),%eax
08478e4c +0x57ec:  mov    0xa(%eax),%ebx
08478e4f +0x57ef:  lea    -0x310(%ebp),%eax
08478e55 +0x57f5:  mov    %eax,(%esp)
08478e58 +0x57f8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478e5d +0x57fd:  mov    %ebx,0x4(%esp)
08478e61 +0x5801:  mov    %eax,(%esp)
08478e64 +0x5804:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478e69 +0x5809:  mov    -0xe0(%ebp),%eax
08478e6f +0x580f:  movzwl 0x2(%eax),%eax
08478e73 +0x5813:  movzwl %ax,%ebx
08478e76 +0x5816:  lea    -0x310(%ebp),%eax
08478e7c +0x581c:  mov    %eax,(%esp)
08478e7f +0x581f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478e84 +0x5824:  mov    %ebx,0x8(%esp)
08478e88 +0x5828:  mov    -0xe0(%ebp),%edx
08478e8e +0x582e:  mov    %edx,0x4(%esp)
08478e92 +0x5832:  mov    %eax,(%esp)
08478e95 +0x5835:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478e9a +0x583a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478e9f +0x583f:  lea    -0x310(%ebp),%edx
08478ea5 +0x5845:  mov    %edx,0x8(%esp)
08478ea9 +0x5849:  movl   $0x1,0x4(%esp)
08478eb1 +0x5851:  mov    %eax,(%esp)
08478eb4 +0x5854:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478eb9 +0x5859:  jmp    0847abfb <+0x759b>
08478ebe +0x585e:  mov    0x8(%ebp),%eax
08478ec1 +0x5861:  mov    %eax,-0xdc(%ebp)
08478ec7 +0x5867:  lea    -0x310(%ebp),%eax
08478ecd +0x586d:  mov    %eax,(%esp)
08478ed0 +0x5870:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478ed5 +0x5875:  movl   $0x1be,0x4(%esp)
08478edd +0x587d:  mov    %eax,(%esp)
08478ee0 +0x5880:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478ee5 +0x5885:  mov    -0xdc(%ebp),%eax
08478eeb +0x588b:  mov    0xa(%eax),%ebx
08478eee +0x588e:  lea    -0x310(%ebp),%eax
08478ef4 +0x5894:  mov    %eax,(%esp)
08478ef7 +0x5897:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478efc +0x589c:  mov    %ebx,0x4(%esp)
08478f00 +0x58a0:  mov    %eax,(%esp)
08478f03 +0x58a3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478f08 +0x58a8:  mov    -0xdc(%ebp),%eax
08478f0e +0x58ae:  movzwl 0x2(%eax),%eax
08478f12 +0x58b2:  movzwl %ax,%ebx
08478f15 +0x58b5:  lea    -0x310(%ebp),%eax
08478f1b +0x58bb:  mov    %eax,(%esp)
08478f1e +0x58be:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478f23 +0x58c3:  mov    %ebx,0x8(%esp)
08478f27 +0x58c7:  mov    -0xdc(%ebp),%edx
08478f2d +0x58cd:  mov    %edx,0x4(%esp)
08478f31 +0x58d1:  mov    %eax,(%esp)
08478f34 +0x58d4:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478f39 +0x58d9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478f3e +0x58de:  lea    -0x310(%ebp),%edx
08478f44 +0x58e4:  mov    %edx,0x8(%esp)
08478f48 +0x58e8:  movl   $0x1,0x4(%esp)
08478f50 +0x58f0:  mov    %eax,(%esp)
08478f53 +0x58f3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478f58 +0x58f8:  jmp    0847abfb <+0x759b>
08478f5d +0x58fd:  mov    0x8(%ebp),%eax
08478f60 +0x5900:  mov    %eax,-0xd8(%ebp)
08478f66 +0x5906:  lea    -0x310(%ebp),%eax
08478f6c +0x590c:  mov    %eax,(%esp)
08478f6f +0x590f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478f74 +0x5914:  movl   $0x1bf,0x4(%esp)
08478f7c +0x591c:  mov    %eax,(%esp)
08478f7f +0x591f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478f84 +0x5924:  lea    -0x310(%ebp),%eax
08478f8a +0x592a:  mov    %eax,(%esp)
08478f8d +0x592d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08478f92 +0x5932:  movl   $0xffffffff,0x4(%esp)
08478f9a +0x593a:  mov    %eax,(%esp)
08478f9d +0x593d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08478fa2 +0x5942:  mov    -0xd8(%ebp),%eax
08478fa8 +0x5948:  movzwl 0x2(%eax),%eax
08478fac +0x594c:  movzwl %ax,%ebx
08478faf +0x594f:  lea    -0x310(%ebp),%eax
08478fb5 +0x5955:  mov    %eax,(%esp)
08478fb8 +0x5958:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08478fbd +0x595d:  mov    %ebx,0x8(%esp)
08478fc1 +0x5961:  mov    -0xd8(%ebp),%edx
08478fc7 +0x5967:  mov    %edx,0x4(%esp)
08478fcb +0x596b:  mov    %eax,(%esp)
08478fce +0x596e:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08478fd3 +0x5973:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08478fd8 +0x5978:  lea    -0x310(%ebp),%edx
08478fde +0x597e:  mov    %edx,0x8(%esp)
08478fe2 +0x5982:  movl   $0x1,0x4(%esp)
08478fea +0x598a:  mov    %eax,(%esp)
08478fed +0x598d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08478ff2 +0x5992:  jmp    0847abfb <+0x759b>
08478ff7 +0x5997:  mov    0x8(%ebp),%eax
08478ffa +0x599a:  mov    %eax,-0xd4(%ebp)
08479000 +0x59a0:  lea    -0x310(%ebp),%eax
08479006 +0x59a6:  mov    %eax,(%esp)
08479009 +0x59a9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847900e +0x59ae:  movl   $0x1c0,0x4(%esp)
08479016 +0x59b6:  mov    %eax,(%esp)
08479019 +0x59b9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847901e +0x59be:  lea    -0x310(%ebp),%eax
08479024 +0x59c4:  mov    %eax,(%esp)
08479027 +0x59c7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847902c +0x59cc:  movl   $0xffffffff,0x4(%esp)
08479034 +0x59d4:  mov    %eax,(%esp)
08479037 +0x59d7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847903c +0x59dc:  mov    -0xd4(%ebp),%eax
08479042 +0x59e2:  movzwl 0x2(%eax),%eax
08479046 +0x59e6:  movzwl %ax,%ebx
08479049 +0x59e9:  lea    -0x310(%ebp),%eax
0847904f +0x59ef:  mov    %eax,(%esp)
08479052 +0x59f2:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479057 +0x59f7:  mov    %ebx,0x8(%esp)
0847905b +0x59fb:  mov    -0xd4(%ebp),%edx
08479061 +0x5a01:  mov    %edx,0x4(%esp)
08479065 +0x5a05:  mov    %eax,(%esp)
08479068 +0x5a08:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847906d +0x5a0d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479072 +0x5a12:  lea    -0x310(%ebp),%edx
08479078 +0x5a18:  mov    %edx,0x8(%esp)
0847907c +0x5a1c:  movl   $0x1,0x4(%esp)
08479084 +0x5a24:  mov    %eax,(%esp)
08479087 +0x5a27:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847908c +0x5a2c:  jmp    0847abfb <+0x759b>
08479091 +0x5a31:  mov    0x8(%ebp),%eax
08479094 +0x5a34:  mov    %eax,-0xd0(%ebp)
0847909a +0x5a3a:  lea    -0x310(%ebp),%eax
084790a0 +0x5a40:  mov    %eax,(%esp)
084790a3 +0x5a43:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084790a8 +0x5a48:  movl   $0x1cd,0x4(%esp)
084790b0 +0x5a50:  mov    %eax,(%esp)
084790b3 +0x5a53:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084790b8 +0x5a58:  lea    -0x310(%ebp),%eax
084790be +0x5a5e:  mov    %eax,(%esp)
084790c1 +0x5a61:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084790c6 +0x5a66:  movl   $0xffffffff,0x4(%esp)
084790ce +0x5a6e:  mov    %eax,(%esp)
084790d1 +0x5a71:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084790d6 +0x5a76:  mov    -0xd0(%ebp),%eax
084790dc +0x5a7c:  movzwl 0x2(%eax),%eax
084790e0 +0x5a80:  movzwl %ax,%ebx
084790e3 +0x5a83:  lea    -0x310(%ebp),%eax
084790e9 +0x5a89:  mov    %eax,(%esp)
084790ec +0x5a8c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084790f1 +0x5a91:  mov    %ebx,0x8(%esp)
084790f5 +0x5a95:  mov    -0xd0(%ebp),%edx
084790fb +0x5a9b:  mov    %edx,0x4(%esp)
084790ff +0x5a9f:  mov    %eax,(%esp)
08479102 +0x5aa2:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479107 +0x5aa7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847910c +0x5aac:  lea    -0x310(%ebp),%edx
08479112 +0x5ab2:  mov    %edx,0x8(%esp)
08479116 +0x5ab6:  movl   $0x1,0x4(%esp)
0847911e +0x5abe:  mov    %eax,(%esp)
08479121 +0x5ac1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479126 +0x5ac6:  jmp    0847abfb <+0x759b>
0847912b +0x5acb:  mov    0x8(%ebp),%eax
0847912e +0x5ace:  mov    %eax,-0xcc(%ebp)
08479134 +0x5ad4:  lea    -0x310(%ebp),%eax
0847913a +0x5ada:  mov    %eax,(%esp)
0847913d +0x5add:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479142 +0x5ae2:  movl   $0x1cf,0x4(%esp)
0847914a +0x5aea:  mov    %eax,(%esp)
0847914d +0x5aed:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479152 +0x5af2:  lea    -0x310(%ebp),%eax
08479158 +0x5af8:  mov    %eax,(%esp)
0847915b +0x5afb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479160 +0x5b00:  movl   $0xffffffff,0x4(%esp)
08479168 +0x5b08:  mov    %eax,(%esp)
0847916b +0x5b0b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479170 +0x5b10:  mov    -0xcc(%ebp),%eax
08479176 +0x5b16:  movzwl 0x2(%eax),%eax
0847917a +0x5b1a:  movzwl %ax,%ebx
0847917d +0x5b1d:  lea    -0x310(%ebp),%eax
08479183 +0x5b23:  mov    %eax,(%esp)
08479186 +0x5b26:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847918b +0x5b2b:  mov    %ebx,0x8(%esp)
0847918f +0x5b2f:  mov    -0xcc(%ebp),%edx
08479195 +0x5b35:  mov    %edx,0x4(%esp)
08479199 +0x5b39:  mov    %eax,(%esp)
0847919c +0x5b3c:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084791a1 +0x5b41:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084791a6 +0x5b46:  lea    -0x310(%ebp),%edx
084791ac +0x5b4c:  mov    %edx,0x8(%esp)
084791b0 +0x5b50:  movl   $0x1,0x4(%esp)
084791b8 +0x5b58:  mov    %eax,(%esp)
084791bb +0x5b5b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084791c0 +0x5b60:  jmp    0847abfb <+0x759b>
084791c5 +0x5b65:  mov    0x8(%ebp),%eax
084791c8 +0x5b68:  mov    %eax,-0xc8(%ebp)
084791ce +0x5b6e:  lea    -0x310(%ebp),%eax
084791d4 +0x5b74:  mov    %eax,(%esp)
084791d7 +0x5b77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084791dc +0x5b7c:  movl   $0x1d1,0x4(%esp)
084791e4 +0x5b84:  mov    %eax,(%esp)
084791e7 +0x5b87:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084791ec +0x5b8c:  lea    -0x310(%ebp),%eax
084791f2 +0x5b92:  mov    %eax,(%esp)
084791f5 +0x5b95:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084791fa +0x5b9a:  movl   $0xffffffff,0x4(%esp)
08479202 +0x5ba2:  mov    %eax,(%esp)
08479205 +0x5ba5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847920a +0x5baa:  mov    -0xc8(%ebp),%eax
08479210 +0x5bb0:  movzwl 0x2(%eax),%eax
08479214 +0x5bb4:  movzwl %ax,%ebx
08479217 +0x5bb7:  lea    -0x310(%ebp),%eax
0847921d +0x5bbd:  mov    %eax,(%esp)
08479220 +0x5bc0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479225 +0x5bc5:  mov    %ebx,0x8(%esp)
08479229 +0x5bc9:  mov    -0xc8(%ebp),%edx
0847922f +0x5bcf:  mov    %edx,0x4(%esp)
08479233 +0x5bd3:  mov    %eax,(%esp)
08479236 +0x5bd6:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847923b +0x5bdb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479240 +0x5be0:  lea    -0x310(%ebp),%edx
08479246 +0x5be6:  mov    %edx,0x8(%esp)
0847924a +0x5bea:  movl   $0x1,0x4(%esp)
08479252 +0x5bf2:  mov    %eax,(%esp)
08479255 +0x5bf5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847925a +0x5bfa:  jmp    0847abfb <+0x759b>
0847925f +0x5bff:  mov    0x8(%ebp),%eax
08479262 +0x5c02:  mov    %eax,-0xc4(%ebp)
08479268 +0x5c08:  lea    -0x310(%ebp),%eax
0847926e +0x5c0e:  mov    %eax,(%esp)
08479271 +0x5c11:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479276 +0x5c16:  movl   $0xca,0x4(%esp)
0847927e +0x5c1e:  mov    %eax,(%esp)
08479281 +0x5c21:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479286 +0x5c26:  mov    -0xc4(%ebp),%eax
0847928c +0x5c2c:  mov    0xa(%eax),%ebx
0847928f +0x5c2f:  lea    -0x310(%ebp),%eax
08479295 +0x5c35:  mov    %eax,(%esp)
08479298 +0x5c38:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847929d +0x5c3d:  mov    %ebx,0x4(%esp)
084792a1 +0x5c41:  mov    %eax,(%esp)
084792a4 +0x5c44:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084792a9 +0x5c49:  lea    -0x310(%ebp),%eax
084792af +0x5c4f:  mov    %eax,(%esp)
084792b2 +0x5c52:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084792b7 +0x5c57:  movl   $0x15f,0x8(%esp)
084792bf +0x5c5f:  mov    -0xc4(%ebp),%edx
084792c5 +0x5c65:  mov    %edx,0x4(%esp)
084792c9 +0x5c69:  mov    %eax,(%esp)
084792cc +0x5c6c:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084792d1 +0x5c71:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084792d6 +0x5c76:  lea    -0x310(%ebp),%edx
084792dc +0x5c7c:  mov    %edx,0x8(%esp)
084792e0 +0x5c80:  movl   $0x1,0x4(%esp)
084792e8 +0x5c88:  mov    %eax,(%esp)
084792eb +0x5c8b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084792f0 +0x5c90:  jmp    0847abfb <+0x759b>
084792f5 +0x5c95:  mov    0x8(%ebp),%eax
084792f8 +0x5c98:  mov    %eax,-0xc0(%ebp)
084792fe +0x5c9e:  lea    -0x310(%ebp),%eax
08479304 +0x5ca4:  mov    %eax,(%esp)
08479307 +0x5ca7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847930c +0x5cac:  movl   $0x1d6,0x4(%esp)
08479314 +0x5cb4:  mov    %eax,(%esp)
08479317 +0x5cb7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847931c +0x5cbc:  mov    -0xc0(%ebp),%eax
08479322 +0x5cc2:  mov    0xe(%eax),%ebx
08479325 +0x5cc5:  lea    -0x310(%ebp),%eax
0847932b +0x5ccb:  mov    %eax,(%esp)
0847932e +0x5cce:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479333 +0x5cd3:  mov    %ebx,0x4(%esp)
08479337 +0x5cd7:  mov    %eax,(%esp)
0847933a +0x5cda:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847933f +0x5cdf:  mov    -0xc0(%ebp),%eax
08479345 +0x5ce5:  movzwl 0x2(%eax),%eax
08479349 +0x5ce9:  movzwl %ax,%ebx
0847934c +0x5cec:  lea    -0x310(%ebp),%eax
08479352 +0x5cf2:  mov    %eax,(%esp)
08479355 +0x5cf5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847935a +0x5cfa:  mov    %ebx,0x8(%esp)
0847935e +0x5cfe:  mov    -0xc0(%ebp),%edx
08479364 +0x5d04:  mov    %edx,0x4(%esp)
08479368 +0x5d08:  mov    %eax,(%esp)
0847936b +0x5d0b:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479370 +0x5d10:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479375 +0x5d15:  lea    -0x310(%ebp),%edx
0847937b +0x5d1b:  mov    %edx,0x8(%esp)
0847937f +0x5d1f:  movl   $0x1,0x4(%esp)
08479387 +0x5d27:  mov    %eax,(%esp)
0847938a +0x5d2a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847938f +0x5d2f:  jmp    0847abfb <+0x759b>
08479394 +0x5d34:  mov    0x8(%ebp),%eax
08479397 +0x5d37:  mov    %eax,-0xbc(%ebp)
0847939d +0x5d3d:  lea    -0x310(%ebp),%eax
084793a3 +0x5d43:  mov    %eax,(%esp)
084793a6 +0x5d46:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084793ab +0x5d4b:  movl   $0x1d7,0x4(%esp)
084793b3 +0x5d53:  mov    %eax,(%esp)
084793b6 +0x5d56:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084793bb +0x5d5b:  mov    -0xbc(%ebp),%eax
084793c1 +0x5d61:  mov    0xe(%eax),%ebx
084793c4 +0x5d64:  lea    -0x310(%ebp),%eax
084793ca +0x5d6a:  mov    %eax,(%esp)
084793cd +0x5d6d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084793d2 +0x5d72:  mov    %ebx,0x4(%esp)
084793d6 +0x5d76:  mov    %eax,(%esp)
084793d9 +0x5d79:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084793de +0x5d7e:  mov    -0xbc(%ebp),%eax
084793e4 +0x5d84:  movzwl 0x2(%eax),%eax
084793e8 +0x5d88:  movzwl %ax,%ebx
084793eb +0x5d8b:  lea    -0x310(%ebp),%eax
084793f1 +0x5d91:  mov    %eax,(%esp)
084793f4 +0x5d94:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084793f9 +0x5d99:  mov    %ebx,0x8(%esp)
084793fd +0x5d9d:  mov    -0xbc(%ebp),%edx
08479403 +0x5da3:  mov    %edx,0x4(%esp)
08479407 +0x5da7:  mov    %eax,(%esp)
0847940a +0x5daa:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847940f +0x5daf:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479414 +0x5db4:  lea    -0x310(%ebp),%edx
0847941a +0x5dba:  mov    %edx,0x8(%esp)
0847941e +0x5dbe:  movl   $0x1,0x4(%esp)
08479426 +0x5dc6:  mov    %eax,(%esp)
08479429 +0x5dc9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847942e +0x5dce:  jmp    0847abfb <+0x759b>
08479433 +0x5dd3:  mov    0x8(%ebp),%eax
08479436 +0x5dd6:  mov    %eax,-0xb8(%ebp)
0847943c +0x5ddc:  lea    -0x310(%ebp),%eax
08479442 +0x5de2:  mov    %eax,(%esp)
08479445 +0x5de5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847944a +0x5dea:  movl   $0x1d8,0x4(%esp)
08479452 +0x5df2:  mov    %eax,(%esp)
08479455 +0x5df5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847945a +0x5dfa:  mov    -0xb8(%ebp),%eax
08479460 +0x5e00:  mov    0xe(%eax),%ebx
08479463 +0x5e03:  lea    -0x310(%ebp),%eax
08479469 +0x5e09:  mov    %eax,(%esp)
0847946c +0x5e0c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479471 +0x5e11:  mov    %ebx,0x4(%esp)
08479475 +0x5e15:  mov    %eax,(%esp)
08479478 +0x5e18:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847947d +0x5e1d:  mov    -0xb8(%ebp),%eax
08479483 +0x5e23:  movzwl 0x2(%eax),%eax
08479487 +0x5e27:  movzwl %ax,%ebx
0847948a +0x5e2a:  lea    -0x310(%ebp),%eax
08479490 +0x5e30:  mov    %eax,(%esp)
08479493 +0x5e33:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479498 +0x5e38:  mov    %ebx,0x8(%esp)
0847949c +0x5e3c:  mov    -0xb8(%ebp),%edx
084794a2 +0x5e42:  mov    %edx,0x4(%esp)
084794a6 +0x5e46:  mov    %eax,(%esp)
084794a9 +0x5e49:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084794ae +0x5e4e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084794b3 +0x5e53:  lea    -0x310(%ebp),%edx
084794b9 +0x5e59:  mov    %edx,0x8(%esp)
084794bd +0x5e5d:  movl   $0x1,0x4(%esp)
084794c5 +0x5e65:  mov    %eax,(%esp)
084794c8 +0x5e68:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084794cd +0x5e6d:  jmp    0847abfb <+0x759b>
084794d2 +0x5e72:  mov    0x8(%ebp),%eax
084794d5 +0x5e75:  mov    %eax,-0xb4(%ebp)
084794db +0x5e7b:  lea    -0x310(%ebp),%eax
084794e1 +0x5e81:  mov    %eax,(%esp)
084794e4 +0x5e84:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084794e9 +0x5e89:  movl   $0x1d9,0x4(%esp)
084794f1 +0x5e91:  mov    %eax,(%esp)
084794f4 +0x5e94:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084794f9 +0x5e99:  mov    -0xb4(%ebp),%eax
084794ff +0x5e9f:  mov    0xe(%eax),%ebx
08479502 +0x5ea2:  lea    -0x310(%ebp),%eax
08479508 +0x5ea8:  mov    %eax,(%esp)
0847950b +0x5eab:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479510 +0x5eb0:  mov    %ebx,0x4(%esp)
08479514 +0x5eb4:  mov    %eax,(%esp)
08479517 +0x5eb7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847951c +0x5ebc:  mov    -0xb4(%ebp),%eax
08479522 +0x5ec2:  movzwl 0x2(%eax),%eax
08479526 +0x5ec6:  movzwl %ax,%ebx
08479529 +0x5ec9:  lea    -0x310(%ebp),%eax
0847952f +0x5ecf:  mov    %eax,(%esp)
08479532 +0x5ed2:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479537 +0x5ed7:  mov    %ebx,0x8(%esp)
0847953b +0x5edb:  mov    -0xb4(%ebp),%edx
08479541 +0x5ee1:  mov    %edx,0x4(%esp)
08479545 +0x5ee5:  mov    %eax,(%esp)
08479548 +0x5ee8:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847954d +0x5eed:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479552 +0x5ef2:  lea    -0x310(%ebp),%edx
08479558 +0x5ef8:  mov    %edx,0x8(%esp)
0847955c +0x5efc:  movl   $0x1,0x4(%esp)
08479564 +0x5f04:  mov    %eax,(%esp)
08479567 +0x5f07:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847956c +0x5f0c:  jmp    0847abfb <+0x759b>
08479571 +0x5f11:  mov    0x8(%ebp),%eax
08479574 +0x5f14:  mov    %eax,-0xb0(%ebp)
0847957a +0x5f1a:  lea    -0x310(%ebp),%eax
08479580 +0x5f20:  mov    %eax,(%esp)
08479583 +0x5f23:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479588 +0x5f28:  movl   $0x1da,0x4(%esp)
08479590 +0x5f30:  mov    %eax,(%esp)
08479593 +0x5f33:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479598 +0x5f38:  mov    -0xb0(%ebp),%eax
0847959e +0x5f3e:  mov    0xe(%eax),%ebx
084795a1 +0x5f41:  lea    -0x310(%ebp),%eax
084795a7 +0x5f47:  mov    %eax,(%esp)
084795aa +0x5f4a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084795af +0x5f4f:  mov    %ebx,0x4(%esp)
084795b3 +0x5f53:  mov    %eax,(%esp)
084795b6 +0x5f56:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084795bb +0x5f5b:  mov    -0xb0(%ebp),%eax
084795c1 +0x5f61:  movzwl 0x2(%eax),%eax
084795c5 +0x5f65:  movzwl %ax,%ebx
084795c8 +0x5f68:  lea    -0x310(%ebp),%eax
084795ce +0x5f6e:  mov    %eax,(%esp)
084795d1 +0x5f71:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084795d6 +0x5f76:  mov    %ebx,0x8(%esp)
084795da +0x5f7a:  mov    -0xb0(%ebp),%edx
084795e0 +0x5f80:  mov    %edx,0x4(%esp)
084795e4 +0x5f84:  mov    %eax,(%esp)
084795e7 +0x5f87:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084795ec +0x5f8c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084795f1 +0x5f91:  lea    -0x310(%ebp),%edx
084795f7 +0x5f97:  mov    %edx,0x8(%esp)
084795fb +0x5f9b:  movl   $0x1,0x4(%esp)
08479603 +0x5fa3:  mov    %eax,(%esp)
08479606 +0x5fa6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847960b +0x5fab:  jmp    0847abfb <+0x759b>
08479610 +0x5fb0:  mov    0x8(%ebp),%eax
08479613 +0x5fb3:  mov    %eax,-0xac(%ebp)
08479619 +0x5fb9:  lea    -0x310(%ebp),%eax
0847961f +0x5fbf:  mov    %eax,(%esp)
08479622 +0x5fc2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479627 +0x5fc7:  movl   $0x1db,0x4(%esp)
0847962f +0x5fcf:  mov    %eax,(%esp)
08479632 +0x5fd2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479637 +0x5fd7:  lea    -0x310(%ebp),%eax
0847963d +0x5fdd:  mov    %eax,(%esp)
08479640 +0x5fe0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479645 +0x5fe5:  movl   $0xffffffff,0x4(%esp)
0847964d +0x5fed:  mov    %eax,(%esp)
08479650 +0x5ff0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479655 +0x5ff5:  mov    -0xac(%ebp),%eax
0847965b +0x5ffb:  movzwl 0x2(%eax),%eax
0847965f +0x5fff:  movzwl %ax,%ebx
08479662 +0x6002:  lea    -0x310(%ebp),%eax
08479668 +0x6008:  mov    %eax,(%esp)
0847966b +0x600b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479670 +0x6010:  mov    %ebx,0x8(%esp)
08479674 +0x6014:  mov    -0xac(%ebp),%edx
0847967a +0x601a:  mov    %edx,0x4(%esp)
0847967e +0x601e:  mov    %eax,(%esp)
08479681 +0x6021:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479686 +0x6026:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847968b +0x602b:  lea    -0x310(%ebp),%edx
08479691 +0x6031:  mov    %edx,0x8(%esp)
08479695 +0x6035:  movl   $0x2,0x4(%esp)
0847969d +0x603d:  mov    %eax,(%esp)
084796a0 +0x6040:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084796a5 +0x6045:  jmp    0847abfb <+0x759b>
084796aa +0x604a:  mov    0x8(%ebp),%eax
084796ad +0x604d:  mov    %eax,-0xa8(%ebp)
084796b3 +0x6053:  lea    -0x310(%ebp),%eax
084796b9 +0x6059:  mov    %eax,(%esp)
084796bc +0x605c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084796c1 +0x6061:  movl   $0x1dc,0x4(%esp)
084796c9 +0x6069:  mov    %eax,(%esp)
084796cc +0x606c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084796d1 +0x6071:  lea    -0x310(%ebp),%eax
084796d7 +0x6077:  mov    %eax,(%esp)
084796da +0x607a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084796df +0x607f:  movl   $0xffffffff,0x4(%esp)
084796e7 +0x6087:  mov    %eax,(%esp)
084796ea +0x608a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084796ef +0x608f:  mov    -0xa8(%ebp),%eax
084796f5 +0x6095:  movzwl 0x2(%eax),%eax
084796f9 +0x6099:  movzwl %ax,%ebx
084796fc +0x609c:  lea    -0x310(%ebp),%eax
08479702 +0x60a2:  mov    %eax,(%esp)
08479705 +0x60a5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847970a +0x60aa:  mov    %ebx,0x8(%esp)
0847970e +0x60ae:  mov    -0xa8(%ebp),%edx
08479714 +0x60b4:  mov    %edx,0x4(%esp)
08479718 +0x60b8:  mov    %eax,(%esp)
0847971b +0x60bb:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479720 +0x60c0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479725 +0x60c5:  lea    -0x310(%ebp),%edx
0847972b +0x60cb:  mov    %edx,0x8(%esp)
0847972f +0x60cf:  movl   $0x2,0x4(%esp)
08479737 +0x60d7:  mov    %eax,(%esp)
0847973a +0x60da:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847973f +0x60df:  jmp    0847abfb <+0x759b>
08479744 +0x60e4:  mov    0x8(%ebp),%eax
08479747 +0x60e7:  mov    %eax,-0xa4(%ebp)
0847974d +0x60ed:  lea    -0x310(%ebp),%eax
08479753 +0x60f3:  mov    %eax,(%esp)
08479756 +0x60f6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847975b +0x60fb:  movl   $0x1dd,0x4(%esp)
08479763 +0x6103:  mov    %eax,(%esp)
08479766 +0x6106:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847976b +0x610b:  lea    -0x310(%ebp),%eax
08479771 +0x6111:  mov    %eax,(%esp)
08479774 +0x6114:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479779 +0x6119:  movl   $0xffffffff,0x4(%esp)
08479781 +0x6121:  mov    %eax,(%esp)
08479784 +0x6124:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479789 +0x6129:  mov    -0xa4(%ebp),%eax
0847978f +0x612f:  movzwl 0x2(%eax),%eax
08479793 +0x6133:  movzwl %ax,%ebx
08479796 +0x6136:  lea    -0x310(%ebp),%eax
0847979c +0x613c:  mov    %eax,(%esp)
0847979f +0x613f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084797a4 +0x6144:  mov    %ebx,0x8(%esp)
084797a8 +0x6148:  mov    -0xa4(%ebp),%edx
084797ae +0x614e:  mov    %edx,0x4(%esp)
084797b2 +0x6152:  mov    %eax,(%esp)
084797b5 +0x6155:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084797ba +0x615a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084797bf +0x615f:  lea    -0x310(%ebp),%edx
084797c5 +0x6165:  mov    %edx,0x8(%esp)
084797c9 +0x6169:  movl   $0x2,0x4(%esp)
084797d1 +0x6171:  mov    %eax,(%esp)
084797d4 +0x6174:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084797d9 +0x6179:  jmp    0847abfb <+0x759b>
084797de +0x617e:  mov    0x8(%ebp),%eax
084797e1 +0x6181:  mov    %eax,-0xa0(%ebp)
084797e7 +0x6187:  movl   $0xffffffff,0x8(%esp)
084797ef +0x618f:  movl   $0x2a,0x4(%esp)
084797f7 +0x6197:  lea    -0x310(%ebp),%eax
084797fd +0x619d:  mov    %eax,(%esp)
08479800 +0x61a0:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
08479805 +0x61a5:  mov    -0xa0(%ebp),%eax
0847980b +0x61ab:  movzwl 0x2(%eax),%eax
0847980f +0x61af:  movzwl %ax,%ebx
08479812 +0x61b2:  lea    -0x310(%ebp),%eax
08479818 +0x61b8:  mov    %eax,(%esp)
0847981b +0x61bb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479820 +0x61c0:  mov    %ebx,0x8(%esp)
08479824 +0x61c4:  mov    -0xa0(%ebp),%edx
0847982a +0x61ca:  mov    %edx,0x4(%esp)
0847982e +0x61ce:  mov    %eax,(%esp)
08479831 +0x61d1:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479836 +0x61d6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847983b +0x61db:  lea    -0x310(%ebp),%edx
08479841 +0x61e1:  mov    %edx,0x8(%esp)
08479845 +0x61e5:  movl   $0x1,0x4(%esp)
0847984d +0x61ed:  mov    %eax,(%esp)
08479850 +0x61f0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479855 +0x61f5:  jmp    0847abfb <+0x759b>
0847985a +0x61fa:  mov    0x8(%ebp),%eax
0847985d +0x61fd:  mov    %eax,-0x9c(%ebp)
08479863 +0x6203:  movl   $0xffffffff,0x8(%esp)
0847986b +0x620b:  movl   $0x2b,0x4(%esp)
08479873 +0x6213:  lea    -0x310(%ebp),%eax
08479879 +0x6219:  mov    %eax,(%esp)
0847987c +0x621c:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
08479881 +0x6221:  mov    -0x9c(%ebp),%eax
08479887 +0x6227:  movzwl 0x2(%eax),%eax
0847988b +0x622b:  movzwl %ax,%ebx
0847988e +0x622e:  lea    -0x310(%ebp),%eax
08479894 +0x6234:  mov    %eax,(%esp)
08479897 +0x6237:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847989c +0x623c:  mov    %ebx,0x8(%esp)
084798a0 +0x6240:  mov    -0x9c(%ebp),%edx
084798a6 +0x6246:  mov    %edx,0x4(%esp)
084798aa +0x624a:  mov    %eax,(%esp)
084798ad +0x624d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084798b2 +0x6252:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084798b7 +0x6257:  lea    -0x310(%ebp),%edx
084798bd +0x625d:  mov    %edx,0x8(%esp)
084798c1 +0x6261:  movl   $0x1,0x4(%esp)
084798c9 +0x6269:  mov    %eax,(%esp)
084798cc +0x626c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084798d1 +0x6271:  jmp    0847abfb <+0x759b>
084798d6 +0x6276:  mov    0x8(%ebp),%eax
084798d9 +0x6279:  mov    %eax,-0x98(%ebp)
084798df +0x627f:  lea    -0x310(%ebp),%eax
084798e5 +0x6285:  mov    %eax,(%esp)
084798e8 +0x6288:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084798ed +0x628d:  movl   $0x214,0x4(%esp)
084798f5 +0x6295:  mov    %eax,(%esp)
084798f8 +0x6298:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084798fd +0x629d:  mov    -0x98(%ebp),%eax
08479903 +0x62a3:  mov    0xf(%eax),%ebx
08479906 +0x62a6:  lea    -0x310(%ebp),%eax
0847990c +0x62ac:  mov    %eax,(%esp)
0847990f +0x62af:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479914 +0x62b4:  mov    %ebx,0x4(%esp)
08479918 +0x62b8:  mov    %eax,(%esp)
0847991b +0x62bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479920 +0x62c0:  mov    -0x98(%ebp),%eax
08479926 +0x62c6:  movzwl 0x2(%eax),%eax
0847992a +0x62ca:  movzwl %ax,%ebx
0847992d +0x62cd:  lea    -0x310(%ebp),%eax
08479933 +0x62d3:  mov    %eax,(%esp)
08479936 +0x62d6:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847993b +0x62db:  mov    %ebx,0x8(%esp)
0847993f +0x62df:  mov    -0x98(%ebp),%edx
08479945 +0x62e5:  mov    %edx,0x4(%esp)
08479949 +0x62e9:  mov    %eax,(%esp)
0847994c +0x62ec:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479951 +0x62f1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479956 +0x62f6:  lea    -0x310(%ebp),%edx
0847995c +0x62fc:  mov    %edx,0x8(%esp)
08479960 +0x6300:  movl   $0x1,0x4(%esp)
08479968 +0x6308:  mov    %eax,(%esp)
0847996b +0x630b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479970 +0x6310:  jmp    0847abfb <+0x759b>
08479975 +0x6315:  mov    0x8(%ebp),%eax
08479978 +0x6318:  mov    %eax,-0x94(%ebp)
0847997e +0x631e:  lea    -0x310(%ebp),%eax
08479984 +0x6324:  mov    %eax,(%esp)
08479987 +0x6327:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847998c +0x632c:  movl   $0x215,0x4(%esp)
08479994 +0x6334:  mov    %eax,(%esp)
08479997 +0x6337:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847999c +0x633c:  mov    -0x94(%ebp),%eax
084799a2 +0x6342:  mov    0x12(%eax),%ebx
084799a5 +0x6345:  lea    -0x310(%ebp),%eax
084799ab +0x634b:  mov    %eax,(%esp)
084799ae +0x634e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084799b3 +0x6353:  mov    %ebx,0x4(%esp)
084799b7 +0x6357:  mov    %eax,(%esp)
084799ba +0x635a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084799bf +0x635f:  mov    -0x94(%ebp),%eax
084799c5 +0x6365:  movzwl 0x2(%eax),%eax
084799c9 +0x6369:  movzwl %ax,%ebx
084799cc +0x636c:  lea    -0x310(%ebp),%eax
084799d2 +0x6372:  mov    %eax,(%esp)
084799d5 +0x6375:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084799da +0x637a:  mov    %ebx,0x8(%esp)
084799de +0x637e:  mov    -0x94(%ebp),%edx
084799e4 +0x6384:  mov    %edx,0x4(%esp)
084799e8 +0x6388:  mov    %eax,(%esp)
084799eb +0x638b:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084799f0 +0x6390:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084799f5 +0x6395:  lea    -0x310(%ebp),%edx
084799fb +0x639b:  mov    %edx,0x8(%esp)
084799ff +0x639f:  movl   $0x1,0x4(%esp)
08479a07 +0x63a7:  mov    %eax,(%esp)
08479a0a +0x63aa:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479a0f +0x63af:  jmp    0847abfb <+0x759b>
08479a14 +0x63b4:  mov    0x8(%ebp),%eax
08479a17 +0x63b7:  mov    %eax,-0x90(%ebp)
08479a1d +0x63bd:  lea    -0x310(%ebp),%eax
08479a23 +0x63c3:  mov    %eax,(%esp)
08479a26 +0x63c6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479a2b +0x63cb:  movl   $0x1f7,0x4(%esp)
08479a33 +0x63d3:  mov    %eax,(%esp)
08479a36 +0x63d6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479a3b +0x63db:  lea    -0x310(%ebp),%eax
08479a41 +0x63e1:  mov    %eax,(%esp)
08479a44 +0x63e4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479a49 +0x63e9:  movl   $0xffffffff,0x4(%esp)
08479a51 +0x63f1:  mov    %eax,(%esp)
08479a54 +0x63f4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479a59 +0x63f9:  mov    -0x90(%ebp),%eax
08479a5f +0x63ff:  movzwl 0x2(%eax),%eax
08479a63 +0x6403:  movzwl %ax,%ebx
08479a66 +0x6406:  lea    -0x310(%ebp),%eax
08479a6c +0x640c:  mov    %eax,(%esp)
08479a6f +0x640f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479a74 +0x6414:  mov    %ebx,0x8(%esp)
08479a78 +0x6418:  mov    -0x90(%ebp),%edx
08479a7e +0x641e:  mov    %edx,0x4(%esp)
08479a82 +0x6422:  mov    %eax,(%esp)
08479a85 +0x6425:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479a8a +0x642a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479a8f +0x642f:  lea    -0x310(%ebp),%edx
08479a95 +0x6435:  mov    %edx,0x8(%esp)
08479a99 +0x6439:  movl   $0x1,0x4(%esp)
08479aa1 +0x6441:  mov    %eax,(%esp)
08479aa4 +0x6444:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479aa9 +0x6449:  jmp    0847abfb <+0x759b>
08479aae +0x644e:  mov    0x8(%ebp),%eax
08479ab1 +0x6451:  mov    %eax,-0x8c(%ebp)
08479ab7 +0x6457:  lea    -0x310(%ebp),%eax
08479abd +0x645d:  mov    %eax,(%esp)
08479ac0 +0x6460:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479ac5 +0x6465:  movl   $0x1f8,0x4(%esp)
08479acd +0x646d:  mov    %eax,(%esp)
08479ad0 +0x6470:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479ad5 +0x6475:  lea    -0x310(%ebp),%eax
08479adb +0x647b:  mov    %eax,(%esp)
08479ade +0x647e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479ae3 +0x6483:  movl   $0xffffffff,0x4(%esp)
08479aeb +0x648b:  mov    %eax,(%esp)
08479aee +0x648e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479af3 +0x6493:  mov    -0x8c(%ebp),%eax
08479af9 +0x6499:  movzwl 0x2(%eax),%eax
08479afd +0x649d:  movzwl %ax,%ebx
08479b00 +0x64a0:  lea    -0x310(%ebp),%eax
08479b06 +0x64a6:  mov    %eax,(%esp)
08479b09 +0x64a9:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479b0e +0x64ae:  mov    %ebx,0x8(%esp)
08479b12 +0x64b2:  mov    -0x8c(%ebp),%edx
08479b18 +0x64b8:  mov    %edx,0x4(%esp)
08479b1c +0x64bc:  mov    %eax,(%esp)
08479b1f +0x64bf:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479b24 +0x64c4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479b29 +0x64c9:  lea    -0x310(%ebp),%edx
08479b2f +0x64cf:  mov    %edx,0x8(%esp)
08479b33 +0x64d3:  movl   $0x1,0x4(%esp)
08479b3b +0x64db:  mov    %eax,(%esp)
08479b3e +0x64de:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479b43 +0x64e3:  jmp    0847abfb <+0x759b>
08479b48 +0x64e8:  mov    0x8(%ebp),%eax
08479b4b +0x64eb:  mov    %eax,-0x88(%ebp)
08479b51 +0x64f1:  lea    -0x310(%ebp),%eax
08479b57 +0x64f7:  mov    %eax,(%esp)
08479b5a +0x64fa:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479b5f +0x64ff:  movl   $0x209,0x4(%esp)
08479b67 +0x6507:  mov    %eax,(%esp)
08479b6a +0x650a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479b6f +0x650f:  lea    -0x310(%ebp),%eax
08479b75 +0x6515:  mov    %eax,(%esp)
08479b78 +0x6518:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479b7d +0x651d:  movl   $0xffffffff,0x4(%esp)
08479b85 +0x6525:  mov    %eax,(%esp)
08479b88 +0x6528:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479b8d +0x652d:  mov    -0x88(%ebp),%eax
08479b93 +0x6533:  movzwl 0x2(%eax),%eax
08479b97 +0x6537:  movzwl %ax,%ebx
08479b9a +0x653a:  lea    -0x310(%ebp),%eax
08479ba0 +0x6540:  mov    %eax,(%esp)
08479ba3 +0x6543:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479ba8 +0x6548:  mov    %ebx,0x8(%esp)
08479bac +0x654c:  mov    -0x88(%ebp),%edx
08479bb2 +0x6552:  mov    %edx,0x4(%esp)
08479bb6 +0x6556:  mov    %eax,(%esp)
08479bb9 +0x6559:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479bbe +0x655e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479bc3 +0x6563:  lea    -0x310(%ebp),%edx
08479bc9 +0x6569:  mov    %edx,0x8(%esp)
08479bcd +0x656d:  movl   $0x1,0x4(%esp)
08479bd5 +0x6575:  mov    %eax,(%esp)
08479bd8 +0x6578:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479bdd +0x657d:  jmp    0847abfb <+0x759b>
08479be2 +0x6582:  mov    0x8(%ebp),%eax
08479be5 +0x6585:  mov    %eax,-0x84(%ebp)
08479beb +0x658b:  lea    -0x310(%ebp),%eax
08479bf1 +0x6591:  mov    %eax,(%esp)
08479bf4 +0x6594:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479bf9 +0x6599:  movl   $0x20a,0x4(%esp)
08479c01 +0x65a1:  mov    %eax,(%esp)
08479c04 +0x65a4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479c09 +0x65a9:  lea    -0x310(%ebp),%eax
08479c0f +0x65af:  mov    %eax,(%esp)
08479c12 +0x65b2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479c17 +0x65b7:  movl   $0xffffffff,0x4(%esp)
08479c1f +0x65bf:  mov    %eax,(%esp)
08479c22 +0x65c2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479c27 +0x65c7:  mov    -0x84(%ebp),%eax
08479c2d +0x65cd:  movzwl 0x2(%eax),%eax
08479c31 +0x65d1:  movzwl %ax,%ebx
08479c34 +0x65d4:  lea    -0x310(%ebp),%eax
08479c3a +0x65da:  mov    %eax,(%esp)
08479c3d +0x65dd:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479c42 +0x65e2:  mov    %ebx,0x8(%esp)
08479c46 +0x65e6:  mov    -0x84(%ebp),%edx
08479c4c +0x65ec:  mov    %edx,0x4(%esp)
08479c50 +0x65f0:  mov    %eax,(%esp)
08479c53 +0x65f3:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479c58 +0x65f8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479c5d +0x65fd:  lea    -0x310(%ebp),%edx
08479c63 +0x6603:  mov    %edx,0x8(%esp)
08479c67 +0x6607:  movl   $0x1,0x4(%esp)
08479c6f +0x660f:  mov    %eax,(%esp)
08479c72 +0x6612:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479c77 +0x6617:  jmp    0847abfb <+0x759b>
08479c7c +0x661c:  mov    0x8(%ebp),%eax
08479c7f +0x661f:  mov    %eax,-0x80(%ebp)
08479c82 +0x6622:  lea    -0x310(%ebp),%eax
08479c88 +0x6628:  mov    %eax,(%esp)
08479c8b +0x662b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479c90 +0x6630:  movl   $0x20b,0x4(%esp)
08479c98 +0x6638:  mov    %eax,(%esp)
08479c9b +0x663b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479ca0 +0x6640:  mov    -0x80(%ebp),%eax
08479ca3 +0x6643:  mov    0xa(%eax),%eax
08479ca6 +0x6646:  mov    %eax,%ebx
08479ca8 +0x6648:  lea    -0x310(%ebp),%eax
08479cae +0x664e:  mov    %eax,(%esp)
08479cb1 +0x6651:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479cb6 +0x6656:  mov    %ebx,0x4(%esp)
08479cba +0x665a:  mov    %eax,(%esp)
08479cbd +0x665d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479cc2 +0x6662:  mov    -0x80(%ebp),%eax
08479cc5 +0x6665:  movzwl 0x2(%eax),%eax
08479cc9 +0x6669:  movzwl %ax,%ebx
08479ccc +0x666c:  lea    -0x310(%ebp),%eax
08479cd2 +0x6672:  mov    %eax,(%esp)
08479cd5 +0x6675:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479cda +0x667a:  mov    %ebx,0x8(%esp)
08479cde +0x667e:  mov    -0x80(%ebp),%edx
08479ce1 +0x6681:  mov    %edx,0x4(%esp)
08479ce5 +0x6685:  mov    %eax,(%esp)
08479ce8 +0x6688:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479ced +0x668d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479cf2 +0x6692:  lea    -0x310(%ebp),%edx
08479cf8 +0x6698:  mov    %edx,0x8(%esp)
08479cfc +0x669c:  movl   $0x1,0x4(%esp)
08479d04 +0x66a4:  mov    %eax,(%esp)
08479d07 +0x66a7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479d0c +0x66ac:  jmp    0847abfb <+0x759b>
08479d11 +0x66b1:  mov    0x8(%ebp),%eax
08479d14 +0x66b4:  mov    %eax,-0x7c(%ebp)
08479d17 +0x66b7:  lea    -0x310(%ebp),%eax
08479d1d +0x66bd:  mov    %eax,(%esp)
08479d20 +0x66c0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479d25 +0x66c5:  movl   $0x210,0x4(%esp)
08479d2d +0x66cd:  mov    %eax,(%esp)
08479d30 +0x66d0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479d35 +0x66d5:  lea    -0x310(%ebp),%eax
08479d3b +0x66db:  mov    %eax,(%esp)
08479d3e +0x66de:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479d43 +0x66e3:  movl   $0xffffffff,0x4(%esp)
08479d4b +0x66eb:  mov    %eax,(%esp)
08479d4e +0x66ee:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479d53 +0x66f3:  mov    -0x7c(%ebp),%eax
08479d56 +0x66f6:  movzwl 0x2(%eax),%eax
08479d5a +0x66fa:  movzwl %ax,%ebx
08479d5d +0x66fd:  lea    -0x310(%ebp),%eax
08479d63 +0x6703:  mov    %eax,(%esp)
08479d66 +0x6706:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479d6b +0x670b:  mov    %ebx,0x8(%esp)
08479d6f +0x670f:  mov    -0x7c(%ebp),%edx
08479d72 +0x6712:  mov    %edx,0x4(%esp)
08479d76 +0x6716:  mov    %eax,(%esp)
08479d79 +0x6719:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479d7e +0x671e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479d83 +0x6723:  lea    -0x310(%ebp),%edx
08479d89 +0x6729:  mov    %edx,0x8(%esp)
08479d8d +0x672d:  movl   $0x1,0x4(%esp)
08479d95 +0x6735:  mov    %eax,(%esp)
08479d98 +0x6738:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479d9d +0x673d:  jmp    0847abfb <+0x759b>
08479da2 +0x6742:  mov    0x8(%ebp),%eax
08479da5 +0x6745:  mov    %eax,-0x78(%ebp)
08479da8 +0x6748:  lea    -0x310(%ebp),%eax
08479dae +0x674e:  mov    %eax,(%esp)
08479db1 +0x6751:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479db6 +0x6756:  movl   $0x211,0x4(%esp)
08479dbe +0x675e:  mov    %eax,(%esp)
08479dc1 +0x6761:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479dc6 +0x6766:  lea    -0x310(%ebp),%eax
08479dcc +0x676c:  mov    %eax,(%esp)
08479dcf +0x676f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479dd4 +0x6774:  movl   $0xffffffff,0x4(%esp)
08479ddc +0x677c:  mov    %eax,(%esp)
08479ddf +0x677f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479de4 +0x6784:  mov    -0x78(%ebp),%eax
08479de7 +0x6787:  movzwl 0x2(%eax),%eax
08479deb +0x678b:  movzwl %ax,%ebx
08479dee +0x678e:  lea    -0x310(%ebp),%eax
08479df4 +0x6794:  mov    %eax,(%esp)
08479df7 +0x6797:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479dfc +0x679c:  mov    %ebx,0x8(%esp)
08479e00 +0x67a0:  mov    -0x78(%ebp),%edx
08479e03 +0x67a3:  mov    %edx,0x4(%esp)
08479e07 +0x67a7:  mov    %eax,(%esp)
08479e0a +0x67aa:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479e0f +0x67af:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479e14 +0x67b4:  lea    -0x310(%ebp),%edx
08479e1a +0x67ba:  mov    %edx,0x8(%esp)
08479e1e +0x67be:  movl   $0x1,0x4(%esp)
08479e26 +0x67c6:  mov    %eax,(%esp)
08479e29 +0x67c9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479e2e +0x67ce:  jmp    0847abfb <+0x759b>
08479e33 +0x67d3:  mov    0x8(%ebp),%eax
08479e36 +0x67d6:  mov    %eax,-0x74(%ebp)
08479e39 +0x67d9:  lea    -0x310(%ebp),%eax
08479e3f +0x67df:  mov    %eax,(%esp)
08479e42 +0x67e2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479e47 +0x67e7:  movl   $0x212,0x4(%esp)
08479e4f +0x67ef:  mov    %eax,(%esp)
08479e52 +0x67f2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479e57 +0x67f7:  mov    -0x74(%ebp),%eax
08479e5a +0x67fa:  mov    0xe(%eax),%eax
08479e5d +0x67fd:  mov    %eax,%ebx
08479e5f +0x67ff:  lea    -0x310(%ebp),%eax
08479e65 +0x6805:  mov    %eax,(%esp)
08479e68 +0x6808:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479e6d +0x680d:  mov    %ebx,0x4(%esp)
08479e71 +0x6811:  mov    %eax,(%esp)
08479e74 +0x6814:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479e79 +0x6819:  mov    -0x74(%ebp),%eax
08479e7c +0x681c:  movzwl 0x2(%eax),%eax
08479e80 +0x6820:  movzwl %ax,%ebx
08479e83 +0x6823:  lea    -0x310(%ebp),%eax
08479e89 +0x6829:  mov    %eax,(%esp)
08479e8c +0x682c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479e91 +0x6831:  mov    %ebx,0x8(%esp)
08479e95 +0x6835:  mov    -0x74(%ebp),%edx
08479e98 +0x6838:  mov    %edx,0x4(%esp)
08479e9c +0x683c:  mov    %eax,(%esp)
08479e9f +0x683f:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479ea4 +0x6844:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479ea9 +0x6849:  lea    -0x310(%ebp),%edx
08479eaf +0x684f:  mov    %edx,0x8(%esp)
08479eb3 +0x6853:  movl   $0x1,0x4(%esp)
08479ebb +0x685b:  mov    %eax,(%esp)
08479ebe +0x685e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479ec3 +0x6863:  jmp    0847abfb <+0x759b>
08479ec8 +0x6868:  mov    0x8(%ebp),%eax
08479ecb +0x686b:  mov    %eax,-0x70(%ebp)
08479ece +0x686e:  lea    -0x310(%ebp),%eax
08479ed4 +0x6874:  mov    %eax,(%esp)
08479ed7 +0x6877:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479edc +0x687c:  movl   $0x21b,0x4(%esp)
08479ee4 +0x6884:  mov    %eax,(%esp)
08479ee7 +0x6887:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479eec +0x688c:  mov    -0x70(%ebp),%eax
08479eef +0x688f:  mov    0x12(%eax),%ebx
08479ef2 +0x6892:  lea    -0x310(%ebp),%eax
08479ef8 +0x6898:  mov    %eax,(%esp)
08479efb +0x689b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479f00 +0x68a0:  mov    %ebx,0x4(%esp)
08479f04 +0x68a4:  mov    %eax,(%esp)
08479f07 +0x68a7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479f0c +0x68ac:  mov    -0x70(%ebp),%eax
08479f0f +0x68af:  movzwl 0x2(%eax),%eax
08479f13 +0x68b3:  movzwl %ax,%ebx
08479f16 +0x68b6:  lea    -0x310(%ebp),%eax
08479f1c +0x68bc:  mov    %eax,(%esp)
08479f1f +0x68bf:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479f24 +0x68c4:  mov    %ebx,0x8(%esp)
08479f28 +0x68c8:  mov    -0x70(%ebp),%edx
08479f2b +0x68cb:  mov    %edx,0x4(%esp)
08479f2f +0x68cf:  mov    %eax,(%esp)
08479f32 +0x68d2:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479f37 +0x68d7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479f3c +0x68dc:  lea    -0x310(%ebp),%edx
08479f42 +0x68e2:  mov    %edx,0x8(%esp)
08479f46 +0x68e6:  movl   $0x1,0x4(%esp)
08479f4e +0x68ee:  mov    %eax,(%esp)
08479f51 +0x68f1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479f56 +0x68f6:  jmp    0847abfb <+0x759b>
08479f5b +0x68fb:  mov    0x8(%ebp),%eax
08479f5e +0x68fe:  mov    %eax,-0x6c(%ebp)
08479f61 +0x6901:  lea    -0x310(%ebp),%eax
08479f67 +0x6907:  mov    %eax,(%esp)
08479f6a +0x690a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479f6f +0x690f:  movl   $0x21d,0x4(%esp)
08479f77 +0x6917:  mov    %eax,(%esp)
08479f7a +0x691a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479f7f +0x691f:  mov    -0x6c(%ebp),%eax
08479f82 +0x6922:  mov    0xe(%eax),%ebx
08479f85 +0x6925:  lea    -0x310(%ebp),%eax
08479f8b +0x692b:  mov    %eax,(%esp)
08479f8e +0x692e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08479f93 +0x6933:  mov    %ebx,0x4(%esp)
08479f97 +0x6937:  mov    %eax,(%esp)
08479f9a +0x693a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08479f9f +0x693f:  mov    -0x6c(%ebp),%eax
08479fa2 +0x6942:  movzwl 0x2(%eax),%eax
08479fa6 +0x6946:  movzwl %ax,%ebx
08479fa9 +0x6949:  lea    -0x310(%ebp),%eax
08479faf +0x694f:  mov    %eax,(%esp)
08479fb2 +0x6952:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08479fb7 +0x6957:  mov    %ebx,0x8(%esp)
08479fbb +0x695b:  mov    -0x6c(%ebp),%edx
08479fbe +0x695e:  mov    %edx,0x4(%esp)
08479fc2 +0x6962:  mov    %eax,(%esp)
08479fc5 +0x6965:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08479fca +0x696a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08479fcf +0x696f:  lea    -0x310(%ebp),%edx
08479fd5 +0x6975:  mov    %edx,0x8(%esp)
08479fd9 +0x6979:  movl   $0x1,0x4(%esp)
08479fe1 +0x6981:  mov    %eax,(%esp)
08479fe4 +0x6984:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08479fe9 +0x6989:  jmp    0847abfb <+0x759b>
08479fee +0x698e:  mov    0x8(%ebp),%eax
08479ff1 +0x6991:  mov    %eax,-0x68(%ebp)
08479ff4 +0x6994:  lea    -0x310(%ebp),%eax
08479ffa +0x699a:  mov    %eax,(%esp)
08479ffd +0x699d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a002 +0x69a2:  movl   $0x21e,0x4(%esp)
0847a00a +0x69aa:  mov    %eax,(%esp)
0847a00d +0x69ad:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a012 +0x69b2:  mov    -0x68(%ebp),%eax
0847a015 +0x69b5:  mov    0xe(%eax),%ebx
0847a018 +0x69b8:  lea    -0x310(%ebp),%eax
0847a01e +0x69be:  mov    %eax,(%esp)
0847a021 +0x69c1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a026 +0x69c6:  mov    %ebx,0x4(%esp)
0847a02a +0x69ca:  mov    %eax,(%esp)
0847a02d +0x69cd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a032 +0x69d2:  mov    -0x68(%ebp),%eax
0847a035 +0x69d5:  movzwl 0x2(%eax),%eax
0847a039 +0x69d9:  movzwl %ax,%ebx
0847a03c +0x69dc:  lea    -0x310(%ebp),%eax
0847a042 +0x69e2:  mov    %eax,(%esp)
0847a045 +0x69e5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a04a +0x69ea:  mov    %ebx,0x8(%esp)
0847a04e +0x69ee:  mov    -0x68(%ebp),%edx
0847a051 +0x69f1:  mov    %edx,0x4(%esp)
0847a055 +0x69f5:  mov    %eax,(%esp)
0847a058 +0x69f8:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a05d +0x69fd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a062 +0x6a02:  lea    -0x310(%ebp),%edx
0847a068 +0x6a08:  mov    %edx,0x8(%esp)
0847a06c +0x6a0c:  movl   $0x1,0x4(%esp)
0847a074 +0x6a14:  mov    %eax,(%esp)
0847a077 +0x6a17:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a07c +0x6a1c:  jmp    0847abfb <+0x759b>
0847a081 +0x6a21:  mov    0x8(%ebp),%eax
0847a084 +0x6a24:  mov    %eax,-0x64(%ebp)
0847a087 +0x6a27:  lea    -0x310(%ebp),%eax
0847a08d +0x6a2d:  mov    %eax,(%esp)
0847a090 +0x6a30:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a095 +0x6a35:  movl   $0x2b6,0x4(%esp)
0847a09d +0x6a3d:  mov    %eax,(%esp)
0847a0a0 +0x6a40:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a0a5 +0x6a45:  mov    -0x64(%ebp),%eax
0847a0a8 +0x6a48:  mov    0xe(%eax),%eax
0847a0ab +0x6a4b:  test   %eax,%eax
0847a0ad +0x6a4d:  je     0847a0d3 <+0x6a73>
0847a0af +0x6a4f:  mov    -0x64(%ebp),%eax
0847a0b2 +0x6a52:  mov    0xe(%eax),%eax
0847a0b5 +0x6a55:  mov    %eax,%ebx
0847a0b7 +0x6a57:  lea    -0x310(%ebp),%eax
0847a0bd +0x6a5d:  mov    %eax,(%esp)
0847a0c0 +0x6a60:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a0c5 +0x6a65:  mov    %ebx,0x4(%esp)
0847a0c9 +0x6a69:  mov    %eax,(%esp)
0847a0cc +0x6a6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a0d1 +0x6a71:  jmp    0847a0f1 <+0x6a91>
0847a0d3 +0x6a73:  lea    -0x310(%ebp),%eax
0847a0d9 +0x6a79:  mov    %eax,(%esp)
0847a0dc +0x6a7c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a0e1 +0x6a81:  movl   $0xffffffff,0x4(%esp)
0847a0e9 +0x6a89:  mov    %eax,(%esp)
0847a0ec +0x6a8c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a0f1 +0x6a91:  mov    -0x64(%ebp),%eax
0847a0f4 +0x6a94:  movzwl 0x2(%eax),%eax
0847a0f8 +0x6a98:  movzwl %ax,%ebx
0847a0fb +0x6a9b:  lea    -0x310(%ebp),%eax
0847a101 +0x6aa1:  mov    %eax,(%esp)
0847a104 +0x6aa4:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a109 +0x6aa9:  mov    %ebx,0x8(%esp)
0847a10d +0x6aad:  mov    -0x64(%ebp),%edx
0847a110 +0x6ab0:  mov    %edx,0x4(%esp)
0847a114 +0x6ab4:  mov    %eax,(%esp)
0847a117 +0x6ab7:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a11c +0x6abc:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a121 +0x6ac1:  lea    -0x310(%ebp),%edx
0847a127 +0x6ac7:  mov    %edx,0x8(%esp)
0847a12b +0x6acb:  movl   $0x1,0x4(%esp)
0847a133 +0x6ad3:  mov    %eax,(%esp)
0847a136 +0x6ad6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a13b +0x6adb:  jmp    0847abfb <+0x759b>
0847a140 +0x6ae0:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
0847a145 +0x6ae5:  mov    %eax,(%esp)
0847a148 +0x6ae8:  call   084705be <_ZN17CHadesServerProxy15ConnTcpHadesSvrEv>  ; CHadesServerProxy::ConnTcpHadesSvr()
0847a14d +0x6aed:  jmp    0847abfb <+0x759b>
0847a152 +0x6af2:  mov    0x8(%ebp),%eax
0847a155 +0x6af5:  mov    %eax,-0x60(%ebp)
0847a158 +0x6af8:  lea    -0x310(%ebp),%eax
0847a15e +0x6afe:  mov    %eax,(%esp)
0847a161 +0x6b01:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a166 +0x6b06:  movl   $0x25b,0x4(%esp)
0847a16e +0x6b0e:  mov    %eax,(%esp)
0847a171 +0x6b11:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a176 +0x6b16:  mov    -0x60(%ebp),%eax
0847a179 +0x6b19:  mov    0xa(%eax),%eax
0847a17c +0x6b1c:  mov    %eax,%ebx
0847a17e +0x6b1e:  lea    -0x310(%ebp),%eax
0847a184 +0x6b24:  mov    %eax,(%esp)
0847a187 +0x6b27:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a18c +0x6b2c:  mov    %ebx,0x4(%esp)
0847a190 +0x6b30:  mov    %eax,(%esp)
0847a193 +0x6b33:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a198 +0x6b38:  mov    -0x60(%ebp),%eax
0847a19b +0x6b3b:  movzwl 0x2(%eax),%eax
0847a19f +0x6b3f:  movzwl %ax,%ebx
0847a1a2 +0x6b42:  lea    -0x310(%ebp),%eax
0847a1a8 +0x6b48:  mov    %eax,(%esp)
0847a1ab +0x6b4b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a1b0 +0x6b50:  mov    %ebx,0x8(%esp)
0847a1b4 +0x6b54:  mov    -0x60(%ebp),%edx
0847a1b7 +0x6b57:  mov    %edx,0x4(%esp)
0847a1bb +0x6b5b:  mov    %eax,(%esp)
0847a1be +0x6b5e:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a1c3 +0x6b63:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a1c8 +0x6b68:  lea    -0x310(%ebp),%edx
0847a1ce +0x6b6e:  mov    %edx,0x8(%esp)
0847a1d2 +0x6b72:  movl   $0x1,0x4(%esp)
0847a1da +0x6b7a:  mov    %eax,(%esp)
0847a1dd +0x6b7d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a1e2 +0x6b82:  jmp    0847abfb <+0x759b>
0847a1e7 +0x6b87:  mov    0x8(%ebp),%eax
0847a1ea +0x6b8a:  mov    %eax,-0x5c(%ebp)
0847a1ed +0x6b8d:  lea    -0x310(%ebp),%eax
0847a1f3 +0x6b93:  mov    %eax,(%esp)
0847a1f6 +0x6b96:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a1fb +0x6b9b:  movl   $0x260,0x4(%esp)
0847a203 +0x6ba3:  mov    %eax,(%esp)
0847a206 +0x6ba6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a20b +0x6bab:  lea    -0x310(%ebp),%eax
0847a211 +0x6bb1:  mov    %eax,(%esp)
0847a214 +0x6bb4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a219 +0x6bb9:  movl   $0xffffffff,0x4(%esp)
0847a221 +0x6bc1:  mov    %eax,(%esp)
0847a224 +0x6bc4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a229 +0x6bc9:  lea    -0x310(%ebp),%eax
0847a22f +0x6bcf:  mov    %eax,(%esp)
0847a232 +0x6bd2:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a237 +0x6bd7:  movl   $0x10e,0x8(%esp)
0847a23f +0x6bdf:  mov    -0x5c(%ebp),%edx
0847a242 +0x6be2:  mov    %edx,0x4(%esp)
0847a246 +0x6be6:  mov    %eax,(%esp)
0847a249 +0x6be9:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a24e +0x6bee:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a253 +0x6bf3:  lea    -0x310(%ebp),%edx
0847a259 +0x6bf9:  mov    %edx,0x8(%esp)
0847a25d +0x6bfd:  movl   $0x1,0x4(%esp)
0847a265 +0x6c05:  mov    %eax,(%esp)
0847a268 +0x6c08:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a26d +0x6c0d:  jmp    0847abfb <+0x759b>
0847a272 +0x6c12:  mov    0x8(%ebp),%eax
0847a275 +0x6c15:  mov    %eax,-0x58(%ebp)
0847a278 +0x6c18:  mov    -0x58(%ebp),%eax
0847a27b +0x6c1b:  mov    0xa(%eax),%eax
0847a27e +0x6c1e:  mov    %eax,(%esp)
0847a281 +0x6c21:  call   0854fd18 <_ZN10CSwitchLog15SetLogWriteFlagEi>  ; CSwitchLog::SetLogWriteFlag(int)
0847a286 +0x6c26:  jmp    0847abfb <+0x759b>
0847a28b +0x6c2b:  mov    0x8(%ebp),%eax
0847a28e +0x6c2e:  mov    %eax,-0x54(%ebp)
0847a291 +0x6c31:  lea    -0x310(%ebp),%eax
0847a297 +0x6c37:  mov    %eax,(%esp)
0847a29a +0x6c3a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a29f +0x6c3f:  movl   $0x274,0x4(%esp)
0847a2a7 +0x6c47:  mov    %eax,(%esp)
0847a2aa +0x6c4a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a2af +0x6c4f:  mov    -0x54(%ebp),%eax
0847a2b2 +0x6c52:  mov    0xa(%eax),%eax
0847a2b5 +0x6c55:  mov    %eax,%ebx
0847a2b7 +0x6c57:  lea    -0x310(%ebp),%eax
0847a2bd +0x6c5d:  mov    %eax,(%esp)
0847a2c0 +0x6c60:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a2c5 +0x6c65:  mov    %ebx,0x4(%esp)
0847a2c9 +0x6c69:  mov    %eax,(%esp)
0847a2cc +0x6c6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a2d1 +0x6c71:  mov    -0x54(%ebp),%eax
0847a2d4 +0x6c74:  movzwl 0x2(%eax),%eax
0847a2d8 +0x6c78:  movzwl %ax,%ebx
0847a2db +0x6c7b:  lea    -0x310(%ebp),%eax
0847a2e1 +0x6c81:  mov    %eax,(%esp)
0847a2e4 +0x6c84:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a2e9 +0x6c89:  mov    %ebx,0x8(%esp)
0847a2ed +0x6c8d:  mov    -0x54(%ebp),%edx
0847a2f0 +0x6c90:  mov    %edx,0x4(%esp)
0847a2f4 +0x6c94:  mov    %eax,(%esp)
0847a2f7 +0x6c97:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a2fc +0x6c9c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a301 +0x6ca1:  lea    -0x310(%ebp),%edx
0847a307 +0x6ca7:  mov    %edx,0x8(%esp)
0847a30b +0x6cab:  movl   $0x1,0x4(%esp)
0847a313 +0x6cb3:  mov    %eax,(%esp)
0847a316 +0x6cb6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a31b +0x6cbb:  movl   $0x5,0xc(%esp)
0847a323 +0x6cc3:  movl   $0xdbf,0x8(%esp)
0847a32b +0x6ccb:  movl   $&_ZZN21CDispatchServerPacket14dispatchPacketEPcE19__PRETTY_FUNCTION__,0x4(%esp)
0847a333 +0x6cd3:  lea    -0x2f8(%ebp),%eax
0847a339 +0x6cd9:  mov    %eax,(%esp)
0847a33c +0x6cdc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0847a341 +0x6ce1:  movl   $"TOD: bug random select",0x4(%esp)
0847a349 +0x6ce9:  lea    -0x2f8(%ebp),%eax
0847a34f +0x6cef:  mov    %eax,(%esp)
0847a352 +0x6cf2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0847a357 +0x6cf7:  jmp    0847abfb <+0x759b>
0847a35c +0x6cfc:  movl   $0x5,0xc(%esp)
0847a364 +0x6d04:  movl   $0xdcc,0x8(%esp)
0847a36c +0x6d0c:  movl   $&_ZZN21CDispatchServerPacket14dispatchPacketEPcE19__PRETTY_FUNCTION__,0x4(%esp)
0847a374 +0x6d14:  lea    -0x2e8(%ebp),%eax
0847a37a +0x6d1a:  mov    %eax,(%esp)
0847a37d +0x6d1d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0847a382 +0x6d22:  movl   $"TOD: bug reload",0x4(%esp)
0847a38a +0x6d2a:  lea    -0x2e8(%ebp),%eax
0847a390 +0x6d30:  mov    %eax,(%esp)
0847a393 +0x6d33:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0847a398 +0x6d38:  jmp    0847abfb <+0x759b>
0847a39d +0x6d3d:  mov    0x8(%ebp),%eax
0847a3a0 +0x6d40:  mov    %eax,-0x50(%ebp)
0847a3a3 +0x6d43:  lea    -0x310(%ebp),%eax
0847a3a9 +0x6d49:  mov    %eax,(%esp)
0847a3ac +0x6d4c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a3b1 +0x6d51:  movl   $0x2a5,0x4(%esp)
0847a3b9 +0x6d59:  mov    %eax,(%esp)
0847a3bc +0x6d5c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a3c1 +0x6d61:  mov    -0x50(%ebp),%eax
0847a3c4 +0x6d64:  mov    0xa(%eax),%ebx
0847a3c7 +0x6d67:  lea    -0x310(%ebp),%eax
0847a3cd +0x6d6d:  mov    %eax,(%esp)
0847a3d0 +0x6d70:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a3d5 +0x6d75:  mov    %ebx,0x4(%esp)
0847a3d9 +0x6d79:  mov    %eax,(%esp)
0847a3dc +0x6d7c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a3e1 +0x6d81:  mov    -0x50(%ebp),%eax
0847a3e4 +0x6d84:  movzwl 0x2(%eax),%eax
0847a3e8 +0x6d88:  movzwl %ax,%ebx
0847a3eb +0x6d8b:  lea    -0x310(%ebp),%eax
0847a3f1 +0x6d91:  mov    %eax,(%esp)
0847a3f4 +0x6d94:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a3f9 +0x6d99:  mov    %ebx,0x8(%esp)
0847a3fd +0x6d9d:  mov    -0x50(%ebp),%edx
0847a400 +0x6da0:  mov    %edx,0x4(%esp)
0847a404 +0x6da4:  mov    %eax,(%esp)
0847a407 +0x6da7:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a40c +0x6dac:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a411 +0x6db1:  lea    -0x310(%ebp),%edx
0847a417 +0x6db7:  mov    %edx,0x8(%esp)
0847a41b +0x6dbb:  movl   $0x1,0x4(%esp)
0847a423 +0x6dc3:  mov    %eax,(%esp)
0847a426 +0x6dc6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a42b +0x6dcb:  jmp    0847abfb <+0x759b>
0847a430 +0x6dd0:  mov    0x8(%ebp),%eax
0847a433 +0x6dd3:  mov    %eax,-0x4c(%ebp)
0847a436 +0x6dd6:  lea    -0x310(%ebp),%eax
0847a43c +0x6ddc:  mov    %eax,(%esp)
0847a43f +0x6ddf:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a444 +0x6de4:  movl   $0x2a6,0x4(%esp)
0847a44c +0x6dec:  mov    %eax,(%esp)
0847a44f +0x6def:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a454 +0x6df4:  mov    -0x4c(%ebp),%eax
0847a457 +0x6df7:  mov    0xf(%eax),%ebx
0847a45a +0x6dfa:  lea    -0x310(%ebp),%eax
0847a460 +0x6e00:  mov    %eax,(%esp)
0847a463 +0x6e03:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a468 +0x6e08:  mov    %ebx,0x4(%esp)
0847a46c +0x6e0c:  mov    %eax,(%esp)
0847a46f +0x6e0f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a474 +0x6e14:  mov    -0x4c(%ebp),%eax
0847a477 +0x6e17:  movzwl 0x2(%eax),%eax
0847a47b +0x6e1b:  movzwl %ax,%ebx
0847a47e +0x6e1e:  lea    -0x310(%ebp),%eax
0847a484 +0x6e24:  mov    %eax,(%esp)
0847a487 +0x6e27:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a48c +0x6e2c:  mov    %ebx,0x8(%esp)
0847a490 +0x6e30:  mov    -0x4c(%ebp),%edx
0847a493 +0x6e33:  mov    %edx,0x4(%esp)
0847a497 +0x6e37:  mov    %eax,(%esp)
0847a49a +0x6e3a:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a49f +0x6e3f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a4a4 +0x6e44:  lea    -0x310(%ebp),%edx
0847a4aa +0x6e4a:  mov    %edx,0x8(%esp)
0847a4ae +0x6e4e:  movl   $0x1,0x4(%esp)
0847a4b6 +0x6e56:  mov    %eax,(%esp)
0847a4b9 +0x6e59:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a4be +0x6e5e:  jmp    0847abfb <+0x759b>
0847a4c3 +0x6e63:  mov    0x8(%ebp),%eax
0847a4c6 +0x6e66:  mov    %eax,-0x48(%ebp)
0847a4c9 +0x6e69:  lea    -0x310(%ebp),%eax
0847a4cf +0x6e6f:  mov    %eax,(%esp)
0847a4d2 +0x6e72:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a4d7 +0x6e77:  movl   $0x2a7,0x4(%esp)
0847a4df +0x6e7f:  mov    %eax,(%esp)
0847a4e2 +0x6e82:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a4e7 +0x6e87:  mov    -0x48(%ebp),%eax
0847a4ea +0x6e8a:  mov    0xa(%eax),%ebx
0847a4ed +0x6e8d:  lea    -0x310(%ebp),%eax
0847a4f3 +0x6e93:  mov    %eax,(%esp)
0847a4f6 +0x6e96:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a4fb +0x6e9b:  mov    %ebx,0x4(%esp)
0847a4ff +0x6e9f:  mov    %eax,(%esp)
0847a502 +0x6ea2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a507 +0x6ea7:  mov    -0x48(%ebp),%eax
0847a50a +0x6eaa:  movzwl 0x2(%eax),%eax
0847a50e +0x6eae:  movzwl %ax,%ebx
0847a511 +0x6eb1:  lea    -0x310(%ebp),%eax
0847a517 +0x6eb7:  mov    %eax,(%esp)
0847a51a +0x6eba:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a51f +0x6ebf:  mov    %ebx,0x8(%esp)
0847a523 +0x6ec3:  mov    -0x48(%ebp),%edx
0847a526 +0x6ec6:  mov    %edx,0x4(%esp)
0847a52a +0x6eca:  mov    %eax,(%esp)
0847a52d +0x6ecd:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a532 +0x6ed2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a537 +0x6ed7:  lea    -0x310(%ebp),%edx
0847a53d +0x6edd:  mov    %edx,0x8(%esp)
0847a541 +0x6ee1:  movl   $0x1,0x4(%esp)
0847a549 +0x6ee9:  mov    %eax,(%esp)
0847a54c +0x6eec:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a551 +0x6ef1:  jmp    0847abfb <+0x759b>
0847a556 +0x6ef6:  mov    0x8(%ebp),%eax
0847a559 +0x6ef9:  mov    %eax,-0x44(%ebp)
0847a55c +0x6efc:  lea    -0x310(%ebp),%eax
0847a562 +0x6f02:  mov    %eax,(%esp)
0847a565 +0x6f05:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a56a +0x6f0a:  movl   $0x2a8,0x4(%esp)
0847a572 +0x6f12:  mov    %eax,(%esp)
0847a575 +0x6f15:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a57a +0x6f1a:  lea    -0x310(%ebp),%eax
0847a580 +0x6f20:  mov    %eax,(%esp)
0847a583 +0x6f23:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a588 +0x6f28:  movl   $0xffffffff,0x4(%esp)
0847a590 +0x6f30:  mov    %eax,(%esp)
0847a593 +0x6f33:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a598 +0x6f38:  mov    -0x44(%ebp),%eax
0847a59b +0x6f3b:  movzwl 0x2(%eax),%eax
0847a59f +0x6f3f:  movzwl %ax,%ebx
0847a5a2 +0x6f42:  lea    -0x310(%ebp),%eax
0847a5a8 +0x6f48:  mov    %eax,(%esp)
0847a5ab +0x6f4b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a5b0 +0x6f50:  mov    %ebx,0x8(%esp)
0847a5b4 +0x6f54:  mov    -0x44(%ebp),%edx
0847a5b7 +0x6f57:  mov    %edx,0x4(%esp)
0847a5bb +0x6f5b:  mov    %eax,(%esp)
0847a5be +0x6f5e:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a5c3 +0x6f63:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a5c8 +0x6f68:  lea    -0x310(%ebp),%edx
0847a5ce +0x6f6e:  mov    %edx,0x8(%esp)
0847a5d2 +0x6f72:  movl   $0x1,0x4(%esp)
0847a5da +0x6f7a:  mov    %eax,(%esp)
0847a5dd +0x6f7d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a5e2 +0x6f82:  jmp    0847abfb <+0x759b>
0847a5e7 +0x6f87:  mov    0x8(%ebp),%eax
0847a5ea +0x6f8a:  mov    %eax,-0x40(%ebp)
0847a5ed +0x6f8d:  lea    -0x310(%ebp),%eax
0847a5f3 +0x6f93:  mov    %eax,(%esp)
0847a5f6 +0x6f96:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a5fb +0x6f9b:  movl   $0x2c5,0x4(%esp)
0847a603 +0x6fa3:  mov    %eax,(%esp)
0847a606 +0x6fa6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a60b +0x6fab:  lea    -0x310(%ebp),%eax
0847a611 +0x6fb1:  mov    %eax,(%esp)
0847a614 +0x6fb4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a619 +0x6fb9:  movl   $0xffffffff,0x4(%esp)
0847a621 +0x6fc1:  mov    %eax,(%esp)
0847a624 +0x6fc4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a629 +0x6fc9:  mov    -0x40(%ebp),%eax
0847a62c +0x6fcc:  movzwl 0x2(%eax),%eax
0847a630 +0x6fd0:  movzwl %ax,%ebx
0847a633 +0x6fd3:  lea    -0x310(%ebp),%eax
0847a639 +0x6fd9:  mov    %eax,(%esp)
0847a63c +0x6fdc:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a641 +0x6fe1:  mov    %ebx,0x8(%esp)
0847a645 +0x6fe5:  mov    -0x40(%ebp),%edx
0847a648 +0x6fe8:  mov    %edx,0x4(%esp)
0847a64c +0x6fec:  mov    %eax,(%esp)
0847a64f +0x6fef:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a654 +0x6ff4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a659 +0x6ff9:  lea    -0x310(%ebp),%edx
0847a65f +0x6fff:  mov    %edx,0x8(%esp)
0847a663 +0x7003:  movl   $0x1,0x4(%esp)
0847a66b +0x700b:  mov    %eax,(%esp)
0847a66e +0x700e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a673 +0x7013:  jmp    0847abfb <+0x759b>
0847a678 +0x7018:  mov    0x8(%ebp),%eax
0847a67b +0x701b:  mov    %eax,-0x3c(%ebp)
0847a67e +0x701e:  lea    -0x310(%ebp),%eax
0847a684 +0x7024:  mov    %eax,(%esp)
0847a687 +0x7027:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a68c +0x702c:  movl   $0x2c6,0x4(%esp)
0847a694 +0x7034:  mov    %eax,(%esp)
0847a697 +0x7037:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a69c +0x703c:  mov    -0x3c(%ebp),%eax
0847a69f +0x703f:  mov    0xa(%eax),%ebx
0847a6a2 +0x7042:  lea    -0x310(%ebp),%eax
0847a6a8 +0x7048:  mov    %eax,(%esp)
0847a6ab +0x704b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a6b0 +0x7050:  mov    %ebx,0x4(%esp)
0847a6b4 +0x7054:  mov    %eax,(%esp)
0847a6b7 +0x7057:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a6bc +0x705c:  mov    -0x3c(%ebp),%eax
0847a6bf +0x705f:  movzwl 0x2(%eax),%eax
0847a6c3 +0x7063:  movzwl %ax,%ebx
0847a6c6 +0x7066:  lea    -0x310(%ebp),%eax
0847a6cc +0x706c:  mov    %eax,(%esp)
0847a6cf +0x706f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a6d4 +0x7074:  mov    %ebx,0x8(%esp)
0847a6d8 +0x7078:  mov    -0x3c(%ebp),%edx
0847a6db +0x707b:  mov    %edx,0x4(%esp)
0847a6df +0x707f:  mov    %eax,(%esp)
0847a6e2 +0x7082:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a6e7 +0x7087:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a6ec +0x708c:  lea    -0x310(%ebp),%edx
0847a6f2 +0x7092:  mov    %edx,0x8(%esp)
0847a6f6 +0x7096:  movl   $0x1,0x4(%esp)
0847a6fe +0x709e:  mov    %eax,(%esp)
0847a701 +0x70a1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a706 +0x70a6:  jmp    0847abfb <+0x759b>
0847a70b +0x70ab:  mov    0x8(%ebp),%eax
0847a70e +0x70ae:  mov    %eax,-0x38(%ebp)
0847a711 +0x70b1:  lea    -0x310(%ebp),%eax
0847a717 +0x70b7:  mov    %eax,(%esp)
0847a71a +0x70ba:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a71f +0x70bf:  movl   $0x2c7,0x4(%esp)
0847a727 +0x70c7:  mov    %eax,(%esp)
0847a72a +0x70ca:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a72f +0x70cf:  lea    -0x310(%ebp),%eax
0847a735 +0x70d5:  mov    %eax,(%esp)
0847a738 +0x70d8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a73d +0x70dd:  movl   $0xffffffff,0x4(%esp)
0847a745 +0x70e5:  mov    %eax,(%esp)
0847a748 +0x70e8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a74d +0x70ed:  mov    -0x38(%ebp),%eax
0847a750 +0x70f0:  movzwl 0x2(%eax),%eax
0847a754 +0x70f4:  movzwl %ax,%ebx
0847a757 +0x70f7:  lea    -0x310(%ebp),%eax
0847a75d +0x70fd:  mov    %eax,(%esp)
0847a760 +0x7100:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a765 +0x7105:  mov    %ebx,0x8(%esp)
0847a769 +0x7109:  mov    -0x38(%ebp),%edx
0847a76c +0x710c:  mov    %edx,0x4(%esp)
0847a770 +0x7110:  mov    %eax,(%esp)
0847a773 +0x7113:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a778 +0x7118:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a77d +0x711d:  lea    -0x310(%ebp),%edx
0847a783 +0x7123:  mov    %edx,0x8(%esp)
0847a787 +0x7127:  movl   $0x1,0x4(%esp)
0847a78f +0x712f:  mov    %eax,(%esp)
0847a792 +0x7132:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a797 +0x7137:  jmp    0847abfb <+0x759b>
0847a79c +0x713c:  mov    0x8(%ebp),%eax
0847a79f +0x713f:  mov    %eax,-0x34(%ebp)
0847a7a2 +0x7142:  lea    -0x310(%ebp),%eax
0847a7a8 +0x7148:  mov    %eax,(%esp)
0847a7ab +0x714b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a7b0 +0x7150:  movl   $0x2c8,0x4(%esp)
0847a7b8 +0x7158:  mov    %eax,(%esp)
0847a7bb +0x715b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a7c0 +0x7160:  lea    -0x310(%ebp),%eax
0847a7c6 +0x7166:  mov    %eax,(%esp)
0847a7c9 +0x7169:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a7ce +0x716e:  movl   $0xffffffff,0x4(%esp)
0847a7d6 +0x7176:  mov    %eax,(%esp)
0847a7d9 +0x7179:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a7de +0x717e:  mov    -0x34(%ebp),%eax
0847a7e1 +0x7181:  movzwl 0x2(%eax),%eax
0847a7e5 +0x7185:  movzwl %ax,%ebx
0847a7e8 +0x7188:  lea    -0x310(%ebp),%eax
0847a7ee +0x718e:  mov    %eax,(%esp)
0847a7f1 +0x7191:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a7f6 +0x7196:  mov    %ebx,0x8(%esp)
0847a7fa +0x719a:  mov    -0x34(%ebp),%edx
0847a7fd +0x719d:  mov    %edx,0x4(%esp)
0847a801 +0x71a1:  mov    %eax,(%esp)
0847a804 +0x71a4:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a809 +0x71a9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a80e +0x71ae:  lea    -0x310(%ebp),%edx
0847a814 +0x71b4:  mov    %edx,0x8(%esp)
0847a818 +0x71b8:  movl   $0x1,0x4(%esp)
0847a820 +0x71c0:  mov    %eax,(%esp)
0847a823 +0x71c3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a828 +0x71c8:  jmp    0847abfb <+0x759b>
0847a82d +0x71cd:  mov    0x8(%ebp),%eax
0847a830 +0x71d0:  mov    %eax,-0x30(%ebp)
0847a833 +0x71d3:  lea    -0x310(%ebp),%eax
0847a839 +0x71d9:  mov    %eax,(%esp)
0847a83c +0x71dc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a841 +0x71e1:  movl   $0x2ce,0x4(%esp)
0847a849 +0x71e9:  mov    %eax,(%esp)
0847a84c +0x71ec:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a851 +0x71f1:  mov    -0x30(%ebp),%eax
0847a854 +0x71f4:  mov    0xe(%eax),%ebx
0847a857 +0x71f7:  lea    -0x310(%ebp),%eax
0847a85d +0x71fd:  mov    %eax,(%esp)
0847a860 +0x7200:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a865 +0x7205:  mov    %ebx,0x4(%esp)
0847a869 +0x7209:  mov    %eax,(%esp)
0847a86c +0x720c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a871 +0x7211:  mov    -0x30(%ebp),%eax
0847a874 +0x7214:  movzwl 0x2(%eax),%eax
0847a878 +0x7218:  movzwl %ax,%ebx
0847a87b +0x721b:  lea    -0x310(%ebp),%eax
0847a881 +0x7221:  mov    %eax,(%esp)
0847a884 +0x7224:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a889 +0x7229:  mov    %ebx,0x8(%esp)
0847a88d +0x722d:  mov    -0x30(%ebp),%edx
0847a890 +0x7230:  mov    %edx,0x4(%esp)
0847a894 +0x7234:  mov    %eax,(%esp)
0847a897 +0x7237:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a89c +0x723c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a8a1 +0x7241:  lea    -0x310(%ebp),%edx
0847a8a7 +0x7247:  mov    %edx,0x8(%esp)
0847a8ab +0x724b:  movl   $0x1,0x4(%esp)
0847a8b3 +0x7253:  mov    %eax,(%esp)
0847a8b6 +0x7256:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a8bb +0x725b:  jmp    0847abfb <+0x759b>
0847a8c0 +0x7260:  mov    0x8(%ebp),%eax
0847a8c3 +0x7263:  mov    %eax,-0x2c(%ebp)
0847a8c6 +0x7266:  lea    -0x310(%ebp),%eax
0847a8cc +0x726c:  mov    %eax,(%esp)
0847a8cf +0x726f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a8d4 +0x7274:  movl   $0x2fb,0x4(%esp)
0847a8dc +0x727c:  mov    %eax,(%esp)
0847a8df +0x727f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a8e4 +0x7284:  mov    -0x2c(%ebp),%eax
0847a8e7 +0x7287:  mov    0xa(%eax),%eax
0847a8ea +0x728a:  mov    %eax,%ebx
0847a8ec +0x728c:  lea    -0x310(%ebp),%eax
0847a8f2 +0x7292:  mov    %eax,(%esp)
0847a8f5 +0x7295:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a8fa +0x729a:  mov    %ebx,0x4(%esp)
0847a8fe +0x729e:  mov    %eax,(%esp)
0847a901 +0x72a1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a906 +0x72a6:  mov    -0x2c(%ebp),%eax
0847a909 +0x72a9:  movzwl 0x2(%eax),%eax
0847a90d +0x72ad:  movzwl %ax,%ebx
0847a910 +0x72b0:  lea    -0x310(%ebp),%eax
0847a916 +0x72b6:  mov    %eax,(%esp)
0847a919 +0x72b9:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a91e +0x72be:  mov    %ebx,0x8(%esp)
0847a922 +0x72c2:  mov    -0x2c(%ebp),%edx
0847a925 +0x72c5:  mov    %edx,0x4(%esp)
0847a929 +0x72c9:  mov    %eax,(%esp)
0847a92c +0x72cc:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a931 +0x72d1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a936 +0x72d6:  lea    -0x310(%ebp),%edx
0847a93c +0x72dc:  mov    %edx,0x8(%esp)
0847a940 +0x72e0:  movl   $0x1,0x4(%esp)
0847a948 +0x72e8:  mov    %eax,(%esp)
0847a94b +0x72eb:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a950 +0x72f0:  jmp    0847abfb <+0x759b>
0847a955 +0x72f5:  mov    0x8(%ebp),%eax
0847a958 +0x72f8:  mov    %eax,-0x28(%ebp)
0847a95b +0x72fb:  lea    -0x310(%ebp),%eax
0847a961 +0x7301:  mov    %eax,(%esp)
0847a964 +0x7304:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a969 +0x7309:  movl   $0x2fc,0x4(%esp)
0847a971 +0x7311:  mov    %eax,(%esp)
0847a974 +0x7314:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a979 +0x7319:  lea    -0x310(%ebp),%eax
0847a97f +0x731f:  mov    %eax,(%esp)
0847a982 +0x7322:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a987 +0x7327:  movl   $0xffffffff,0x4(%esp)
0847a98f +0x732f:  mov    %eax,(%esp)
0847a992 +0x7332:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847a997 +0x7337:  mov    -0x28(%ebp),%eax
0847a99a +0x733a:  movzwl 0x2(%eax),%eax
0847a99e +0x733e:  movzwl %ax,%ebx
0847a9a1 +0x7341:  lea    -0x310(%ebp),%eax
0847a9a7 +0x7347:  mov    %eax,(%esp)
0847a9aa +0x734a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847a9af +0x734f:  mov    %ebx,0x8(%esp)
0847a9b3 +0x7353:  mov    -0x28(%ebp),%edx
0847a9b6 +0x7356:  mov    %edx,0x4(%esp)
0847a9ba +0x735a:  mov    %eax,(%esp)
0847a9bd +0x735d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847a9c2 +0x7362:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847a9c7 +0x7367:  lea    -0x310(%ebp),%edx
0847a9cd +0x736d:  mov    %edx,0x8(%esp)
0847a9d1 +0x7371:  movl   $0x1,0x4(%esp)
0847a9d9 +0x7379:  mov    %eax,(%esp)
0847a9dc +0x737c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847a9e1 +0x7381:  jmp    0847abfb <+0x759b>
0847a9e6 +0x7386:  mov    0x8(%ebp),%eax
0847a9e9 +0x7389:  mov    %eax,-0x24(%ebp)
0847a9ec +0x738c:  lea    -0x310(%ebp),%eax
0847a9f2 +0x7392:  mov    %eax,(%esp)
0847a9f5 +0x7395:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847a9fa +0x739a:  movl   $0x2fa,0x4(%esp)
0847aa02 +0x73a2:  mov    %eax,(%esp)
0847aa05 +0x73a5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847aa0a +0x73aa:  lea    -0x310(%ebp),%eax
0847aa10 +0x73b0:  mov    %eax,(%esp)
0847aa13 +0x73b3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847aa18 +0x73b8:  movl   $0xffffffff,0x4(%esp)
0847aa20 +0x73c0:  mov    %eax,(%esp)
0847aa23 +0x73c3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847aa28 +0x73c8:  mov    -0x24(%ebp),%eax
0847aa2b +0x73cb:  movzwl 0x2(%eax),%eax
0847aa2f +0x73cf:  movzwl %ax,%ebx
0847aa32 +0x73d2:  lea    -0x310(%ebp),%eax
0847aa38 +0x73d8:  mov    %eax,(%esp)
0847aa3b +0x73db:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847aa40 +0x73e0:  mov    %ebx,0x8(%esp)
0847aa44 +0x73e4:  mov    -0x24(%ebp),%edx
0847aa47 +0x73e7:  mov    %edx,0x4(%esp)
0847aa4b +0x73eb:  mov    %eax,(%esp)
0847aa4e +0x73ee:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847aa53 +0x73f3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847aa58 +0x73f8:  lea    -0x310(%ebp),%edx
0847aa5e +0x73fe:  mov    %edx,0x8(%esp)
0847aa62 +0x7402:  movl   $0x1,0x4(%esp)
0847aa6a +0x740a:  mov    %eax,(%esp)
0847aa6d +0x740d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847aa72 +0x7412:  jmp    0847abfb <+0x759b>
0847aa77 +0x7417:  mov    0x8(%ebp),%eax
0847aa7a +0x741a:  mov    %eax,-0x20(%ebp)
0847aa7d +0x741d:  lea    -0x310(%ebp),%eax
0847aa83 +0x7423:  mov    %eax,(%esp)
0847aa86 +0x7426:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847aa8b +0x742b:  movl   $0x302,0x4(%esp)
0847aa93 +0x7433:  mov    %eax,(%esp)
0847aa96 +0x7436:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847aa9b +0x743b:  lea    -0x310(%ebp),%eax
0847aaa1 +0x7441:  mov    %eax,(%esp)
0847aaa4 +0x7444:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847aaa9 +0x7449:  movl   $0xffffffff,0x4(%esp)
0847aab1 +0x7451:  mov    %eax,(%esp)
0847aab4 +0x7454:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847aab9 +0x7459:  mov    -0x20(%ebp),%eax
0847aabc +0x745c:  movzwl 0x2(%eax),%eax
0847aac0 +0x7460:  movzwl %ax,%ebx
0847aac3 +0x7463:  lea    -0x310(%ebp),%eax
0847aac9 +0x7469:  mov    %eax,(%esp)
0847aacc +0x746c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847aad1 +0x7471:  mov    %ebx,0x8(%esp)
0847aad5 +0x7475:  mov    -0x20(%ebp),%edx
0847aad8 +0x7478:  mov    %edx,0x4(%esp)
0847aadc +0x747c:  mov    %eax,(%esp)
0847aadf +0x747f:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847aae4 +0x7484:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847aae9 +0x7489:  lea    -0x310(%ebp),%edx
0847aaef +0x748f:  mov    %edx,0x8(%esp)
0847aaf3 +0x7493:  movl   $0x1,0x4(%esp)
0847aafb +0x749b:  mov    %eax,(%esp)
0847aafe +0x749e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847ab03 +0x74a3:  jmp    0847abfb <+0x759b>
0847ab08 +0x74a8:  mov    0x8(%ebp),%eax
0847ab0b +0x74ab:  mov    %eax,-0x1c(%ebp)
0847ab0e +0x74ae:  lea    -0x310(%ebp),%eax
0847ab14 +0x74b4:  mov    %eax,(%esp)
0847ab17 +0x74b7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847ab1c +0x74bc:  movl   $0x32f,0x4(%esp)
0847ab24 +0x74c4:  mov    %eax,(%esp)
0847ab27 +0x74c7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847ab2c +0x74cc:  lea    -0x310(%ebp),%eax
0847ab32 +0x74d2:  mov    %eax,(%esp)
0847ab35 +0x74d5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847ab3a +0x74da:  movl   $0xffffffff,0x4(%esp)
0847ab42 +0x74e2:  mov    %eax,(%esp)
0847ab45 +0x74e5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847ab4a +0x74ea:  mov    -0x1c(%ebp),%eax
0847ab4d +0x74ed:  movzwl 0x2(%eax),%eax
0847ab51 +0x74f1:  movzwl %ax,%ebx
0847ab54 +0x74f4:  lea    -0x310(%ebp),%eax
0847ab5a +0x74fa:  mov    %eax,(%esp)
0847ab5d +0x74fd:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0847ab62 +0x7502:  mov    %ebx,0x8(%esp)
0847ab66 +0x7506:  mov    -0x1c(%ebp),%edx
0847ab69 +0x7509:  mov    %edx,0x4(%esp)
0847ab6d +0x750d:  mov    %eax,(%esp)
0847ab70 +0x7510:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0847ab75 +0x7515:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847ab7a +0x751a:  lea    -0x310(%ebp),%edx
0847ab80 +0x7520:  mov    %edx,0x8(%esp)
0847ab84 +0x7524:  movl   $0x1,0x4(%esp)
0847ab8c +0x752c:  mov    %eax,(%esp)
0847ab8f +0x752f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847ab94 +0x7534:  jmp    0847abfb <+0x759b>
0847ab96 +0x7536:  call   08162679 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x8e7>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x8e7
0847ab9b +0x753b:  mov    %eax,(%esp)
0847ab9e +0x753e:  call   08170a46 <_ZN19RestrictGeolocation15initGeolocationEv>  ; RestrictGeolocation::initGeolocation()
0847aba3 +0x7543:  xor    $0x1,%eax
0847aba6 +0x7546:  test   %al,%al
0847aba8 +0x7548:  je     0847abfa <+0x759a>
0847abaa +0x754a:  movl   $"GEO IP TABLE RELOAD FAIL",0x10(%esp)
0847abb2 +0x7552:  movl   $0x1143,0xc(%esp)
0847abba +0x755a:  movl   $&_ZZN21CDispatchServerPacket14dispatchPacketEPcE19__PRETTY_FUNCTION__,0x8(%esp)
0847abc2 +0x7562:  movl   $"DispatchServerPacket.cpp",0x4(%esp)
0847abca +0x756a:  movl   $0x1,(%esp)
0847abd1 +0x7571:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0847abd6 +0x7576:  jmp    0847abfb <+0x759b>
0847abd8 +0x7578:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0847abdd +0x757d:  mov    %eax,(%esp)
0847abe0 +0x7580:  call   0816e7d6 <_ZN22ServiceRestrictManager10loadPolicyEv>  ; ServiceRestrictManager::loadPolicy()
0847abe5 +0x7585:  jmp    0847abfb <+0x759b>
0847abe7 +0x7587:  mov    $0x0,%ebx
0847abec +0x758c:  jmp    0847ac20 <+0x75c0>
0847abee +0x758e:  nop
0847abef +0x758f:  jmp    0847abfb <+0x759b>
0847abf1 +0x7591:  nop
0847abf2 +0x7592:  jmp    0847abfb <+0x759b>
0847abf4 +0x7594:  nop
0847abf5 +0x7595:  jmp    0847abfb <+0x759b>
0847abf7 +0x7597:  nop
0847abf8 +0x7598:  jmp    0847abfb <+0x759b>
0847abfa +0x759a:  nop
0847abfb +0x759b:  mov    $0x1,%ebx
0847ac00 +0x75a0:  jmp    0847ac20 <+0x75c0>
0847ac02 +0x75a2:  mov    %edx,%ebx
0847ac04 +0x75a4:  mov    %eax,%esi
0847ac06 +0x75a6:  lea    -0x310(%ebp),%eax
0847ac0c +0x75ac:  mov    %eax,(%esp)
0847ac0f +0x75af:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847ac14 +0x75b4:  mov    %esi,%eax
0847ac16 +0x75b6:  mov    %ebx,%edx
0847ac18 +0x75b8:  mov    %eax,(%esp)
0847ac1b +0x75bb:  call   08ae3750 <_Unwind_Resume>
0847ac20 +0x75c0:  lea    -0x310(%ebp),%eax
0847ac26 +0x75c6:  mov    %eax,(%esp)
0847ac29 +0x75c9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847ac2e +0x75ce:  mov    %ebx,%eax
0847ac30 +0x75d0:  add    $0x32c,%esp
0847ac36 +0x75d6:  pop    %ebx
0847ac37 +0x75d7:  pop    %esi
0847ac38 +0x75d8:  pop    %edi
0847ac39 +0x75d9:  pop    %ebp
0847ac3a +0x75da:  ret
0847ac3b +0x75db:  nop
```

## 反编译 C

```c
// CDispatchServerPacket::dispatchPacket @ 0x8473660

/* CDispatchServerPacket::dispatchPacket(char*) */

undefined4 CDispatchServerPacket::dispatchPacket(char *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  Stream *pSVar6;
  uint uVar7;
  CStreamGuard *pCVar8;
  RestrictGeolocation *this;
  undefined4 uVar9;
  CStreamGuard local_314 [8];
  cMyTrace local_30c [16];
  cMyTrace local_2fc [16];
  cMyTrace local_2ec [18];
  ushort local_2da;
  char *local_2d8;
  char *local_2d4;
  char *local_2d0;
  char *local_2cc;
  char *local_2c8;
  char *local_2c4;
  char *local_2c0;
  char *local_2bc;
  char *local_2b8;
  char *local_2b4;
  char *local_2b0;
  char *local_2ac;
  char *local_2a8;
  char *local_2a4;
  char *local_2a0;
  char *local_29c;
  char *local_298;
  char *local_294;
  char *local_290;
  char *local_28c;
  char *local_288;
  char *local_284;
  char *local_280;
  char *local_27c;
  char *local_278;
  char *local_274;
  char *local_270;
  char *local_26c;
  char *local_268;
  char *local_264;
  char *local_260;
  char *local_25c;
  char *local_258;
  char *local_254;
  char *local_250;
  char *local_24c;
  char *local_248;
  char *local_244;
  char *local_240;
  char *local_23c;
  char *local_238;
  char *local_234;
  char *local_230;
  char *local_22c;
  char *local_228;
  char *local_224;
  char *local_220;
  char *local_21c;
  char *local_218;
  char *local_214;
  char *local_210;
  char *local_20c;
  char *local_208;
  char *local_204;
  char *local_200;
  char *local_1fc;
  char *local_1f8;
  char *local_1f4;
  char *local_1f0;
  char *local_1ec;
  char *local_1e8;
  char *local_1e4;
  char *local_1e0;
  char *local_1dc;
  char *local_1d8;
  char *local_1d4;
  char *local_1d0;
  char *local_1cc;
  char *local_1c8;
  char *local_1c4;
  char *local_1c0;
  char *local_1bc;
  char *local_1b8;
  char *local_1b4;
  char *local_1b0;
  char *local_1ac;
  char *local_1a8;
  char *local_1a4;
  char *local_1a0;
  char *local_19c;
  char *local_198;
  char *local_194;
  char *local_190;
  char *local_18c;
  char *local_188;
  char *local_184;
  char *local_180;
  char *local_17c;
  char *local_178;
  char *local_174;
  char *local_170;
  char *local_16c;
  char *local_168;
  char *local_164;
  char *local_160;
  char *local_15c;
  char *local_158;
  char *local_154;
  char *local_150;
  char *local_14c;
  char *local_148;
  char *local_144;
  char *local_140;
  char *local_13c;
  char *local_138;
  char *local_134;
  char *local_130;
  char *local_12c;
  char *local_128;
  char *local_124;
  char *local_120;
  char *local_11c;
  char *local_118;
  char *local_114;
  char *local_110;
  char *local_10c;
  char *local_108;
  char *local_104;
  char *local_100;
  char *local_fc;
  char *local_f8;
  char *local_f4;
  char *local_f0;
  char *local_ec;
  char *local_e8;
  char *local_e4;
  char *local_e0;
  char *local_dc;
  char *local_d8;
  char *local_d4;
  char *local_d0;
  char *local_cc;
  char *local_c8;
  char *local_c4;
  char *local_c0;
  char *local_bc;
  char *local_b8;
  char *local_b4;
  char *local_b0;
  char *local_ac;
  char *local_a8;
  char *local_a4;
  char *local_a0;
  char *local_9c;
  char *local_98;
  char *local_94;
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  
  local_2da = *(short *)(param_1 + 2) + 8;
  CStreamGuard::CStreamGuard(local_314,true);
  if (local_2da < 0x1000) {
                    /* try { // try from 084736bb to 0847abe4 has its CatchHandler @ 0847ac02 */
    pSVar6 = (Stream *)
             SmallStreamPool::Acquire
                       (GlobalData::s_small_stream_pool,"DispatchServerPacket.cpp",0x36);
    CStreamGuard::Set(local_314,pSVar6);
  }
  else if ((local_2da < 0x1000) || (0x3fff < local_2da)) {
    pSVar6 = (Stream *)
             BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DispatchServerPacket.cpp",0x3e);
    CStreamGuard::Set(local_314,pSVar6);
  }
  else {
    pSVar6 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x3a);
    CStreamGuard::Set(local_314,pSVar6);
  }
  uVar7 = (uint)*(ushort *)param_1;
  if (uVar7 == 0x70f) {
    local_110 = param_1;
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,0x1b0);
    iVar2 = *(int *)(local_110 + 10);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,iVar2);
    uVar1 = *(ushort *)(local_110 + 2);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
    CStreamGuard::put_binary(pCVar8,local_110,(uint)uVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
  }
  else if (uVar7 < 0x710) {
    if (uVar7 == 0x44e) {
      local_214 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x55);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_214,0x12);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x44f) {
      if (uVar7 == 0x423) {
        local_27c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0xc6);
        iVar2 = *(int *)(local_27c + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_27c + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_27c,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x424) {
        if (uVar7 == 0x3fd) {
          local_294 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x56);
          iVar2 = *(int *)(local_294 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_294,0x5a);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x3fe) {
          if (uVar7 == 0x3f2) {
            local_2ac = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x46);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            uVar1 = *(ushort *)(local_2ac + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_2ac,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else if (uVar7 < 0x3f3) {
            if (uVar7 == 0x3ea) {
              local_2d4 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x42);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_2d4,0xb);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else if (uVar7 < 0x3eb) {
              if (uVar7 != 1000) goto LAB_0847abe7;
              local_2d8 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x41);
              iVar2 = *(int *)(local_2d8 + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_2d8,0x33);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else if (uVar7 == 0x3ee) {
              local_2cc = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x43);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_2cc,0xe);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x3ef) goto LAB_0847abe7;
              local_2b4 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x44);
              iVar2 = *(int *)(local_2b4 + 0xe);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_2b4,0x34);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (uVar7 == 0x3f8) {
            local_2c4 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x121);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_2c4,0xb);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else if (uVar7 < 0x3f9) {
            if (uVar7 == 0x3f3) {
              local_268 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x5e);
              iVar2 = *(int *)(local_268 + 0xf);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              uVar1 = *(ushort *)(local_268 + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_268,(uint)uVar1);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x3f7) goto LAB_0847abe7;
              local_1e8 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0xce);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_1e8,0x16);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (uVar7 == 0x3f9) {
            local_2d0 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x12d);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_2d0,10);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x3fc) goto LAB_0847abe7;
            local_288 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x59);
            iVar2 = *(int *)(local_288 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_288,0x12);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x407) {
          local_26c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x5d);
          iVar2 = *(int *)(local_26c + 0xb);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_26c,0x32);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x408) {
          if (uVar7 == 0x400) {
            local_284 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x5a);
            iVar2 = *(int *)(local_284 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            uVar1 = *(ushort *)(local_284 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_284,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else if (uVar7 < 0x401) {
            if (uVar7 == 0x3fe) {
              local_290 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x57);
              iVar2 = *(int *)(local_290 + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_290,0x55);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x3ff) goto LAB_0847abe7;
              local_28c = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x58);
              iVar2 = *(int *)(local_28c + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_28c,0x16);
              uVar9 = *(undefined4 *)(local_28c + 0x12);
              uVar3 = *(undefined4 *)(local_28c + 0xe);
              uVar4 = *(undefined4 *)(local_28c + 10);
              cMyTrace::cMyTrace(local_30c,
                                 "static bool CDispatchServerPacket::dispatchPacket(char*)",0x1a4,0)
              ;
              cMyTrace::operator()
                        (local_30c,
                         "[GUILD MARK CHANGE] Recv from guild server. (channel:%d, character:%u, guildkey:%u)"
                         ,uVar4,uVar3,uVar9);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (uVar7 == 0x401) {
            local_280 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x5b);
            iVar2 = *(int *)(local_280 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            uVar1 = *(ushort *)(local_280 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_280,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x406) goto LAB_0847abe7;
            local_270 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x5c);
            iVar2 = *(int *)(local_270 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_270,0x233f);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x40c) {
          local_2a0 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x62);
          iVar2 = *(int *)(local_2a0 + 0x29);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_2a0,0x2d);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x40d) {
          if (uVar7 == 0x40a) {
            local_298 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x60);
            iVar2 = *(int *)(local_298 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_298,0x139);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x40b) goto LAB_0847abe7;
            local_29c = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x61);
            iVar2 = *(int *)(local_29c + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_29c,0x16);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x40d) {
          local_264 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x5f);
          iVar2 = *(int *)(local_264 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_264,399);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x414) goto LAB_0847abe7;
          local_20c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x99);
          iVar2 = *(int *)(local_20c + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_20c,0x15c);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x437) {
        local_1d0 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0xde);
        iVar2 = *(int *)(local_1d0 + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_1d0,0x34);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x438) {
        if (uVar7 == 0x430) {
          local_258 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x65);
          iVar2 = *(int *)(local_258 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_258,0x3a);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x431) {
          if (uVar7 == 0x42c) {
            local_250 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xd7);
            iVar2 = *(int *)(local_250 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_250,0x13);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else if (uVar7 < 0x42d) {
            if (uVar7 == 0x424) {
              local_278 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,199);
              iVar2 = *(int *)(local_278 + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              uVar1 = *(ushort *)(local_278 + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_278,(uint)uVar1);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x428) goto LAB_0847abe7;
              local_274 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,200);
              iVar2 = *(int *)(local_274 + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              uVar1 = *(ushort *)(local_274 + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_274,(uint)uVar1);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (uVar7 == 0x42d) {
            local_260 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xd8);
            iVar2 = *(int *)(local_260 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_260,0x77);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x42f) goto LAB_0847abe7;
            local_25c = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,100);
            iVar2 = *(int *)(local_25c + 0xe);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_25c,0x16);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x434) {
          local_1dc = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xdb);
          iVar2 = *(int *)(local_1dc + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1dc,0x16);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x435) {
          if (uVar7 == 0x431) {
            local_254 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x66);
            iVar2 = *(int *)(local_254 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_254,0x2c);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x432) goto LAB_0847abe7;
            local_1e0 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xda);
            iVar2 = *(int *)(local_1e0 + 0xe);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1e0,0x13);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x435) {
          local_1d8 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xdc);
          iVar2 = *(int *)(local_1d8 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1d8,0x47);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x436) goto LAB_0847abe7;
          local_1d4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xdd);
          iVar2 = *(int *)(local_1d4 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1d4,0x16);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x444) {
        local_1a8 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x123);
        iVar2 = *(int *)(local_1a8 + 0x12);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_1a8,0x2e);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x445) {
        if (uVar7 == 0x43d) {
          local_1c4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xe7);
          iVar2 = *(int *)(local_1c4 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1c4,0x30);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x43e) {
          if (uVar7 == 0x439) {
            local_1c8 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xea);
            iVar2 = *(int *)(local_1c8 + 0x14);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1c8,0x52);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x43b) goto LAB_0847abe7;
            local_1c0 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xe8);
            iVar2 = *(int *)(local_1c0 + 0xe);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1c0,0x16);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x43e) {
          local_1bc = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xe9);
          iVar2 = *(int *)(local_1bc + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1bc,0x12);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x43f) goto LAB_0847abe7;
          local_1b8 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xed);
          iVar2 = *(int *)(local_1b8 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1b8,0x2d);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x447) {
        local_1a0 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x184);
        iVar2 = *(int *)(local_1a0 + 0x12);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_1a0,0x16);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x448) {
        if (uVar7 == 0x445) {
          local_1b4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x12a);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1b4,0x2e);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x446) goto LAB_0847abe7;
          local_1a4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x124);
          iVar2 = *(int *)(local_1a4 + 0x12);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1a4,0x2d);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x44c) {
        local_2a8 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x47);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_2a8,0xe);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x44d) goto LAB_0847abe7;
        local_2a4 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x4a);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_2a4,0x22);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x642) {
      local_204 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0xba);
      iVar2 = *(int *)(local_204 + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_204,0x13);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x643) {
      if (uVar7 == 0x4bf) {
        local_22c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x74);
        iVar2 = *(int *)(local_22c + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_22c + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_22c,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x4c0) {
        if (uVar7 == 0x4b9) {
          local_23c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x70);
          iVar2 = *(int *)(local_23c + 0xd);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_23c,0x39);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x4ba) {
          if (uVar7 == 0x4b6) {
            local_24c = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x6c);
            iVar2 = *(int *)(local_24c + 0xb);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_24c,0x38);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else if (uVar7 < 0x4b7) {
            if (uVar7 == 0x44f) {
              local_21c = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x85);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_21c,0x12);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x450) goto LAB_0847abe7;
              local_218 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x86);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_218,0xe);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (uVar7 == 0x4b7) {
            local_248 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x6d);
            iVar2 = *(int *)(local_248 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_248,0x31);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x4b8) goto LAB_0847abe7;
            local_244 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x6e);
            iVar2 = *(int *)(local_244 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_244,0x32);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x4bc) {
          local_234 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x72);
          iVar2 = *(int *)(local_234 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_234,0x31);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x4bd) {
          if (uVar7 == 0x4ba) {
            local_240 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x6f);
            iVar2 = *(int *)(local_240 + 0xd);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_240,0x39);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x4bb) goto LAB_0847abe7;
            local_238 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x71);
            iVar2 = *(int *)(local_238 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_238,0x31);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x4bd) {
          local_230 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x73);
          iVar2 = *(int *)(local_230 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_230,0x12);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x4be) goto LAB_0847abe7;
          local_228 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x75);
          iVar2 = *(int *)(local_228 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_228,0x1e1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x514) {
        local_210 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x82);
        iVar2 = *(int *)(local_210 + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_210,0x12);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x515) {
        if (uVar7 == 0x4cb) {
          local_1cc = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xe5);
          iVar2 = *(int *)(local_1cc + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1cc,0x62);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x4cc) {
          if (uVar7 == 0x4c0) {
            local_224 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x76);
            iVar2 = *(int *)(local_224 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_224,0x38);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x4c1) goto LAB_0847abe7;
            local_220 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x7a);
            iVar2 = *(int *)(local_220 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_220,0x12);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x4cf) {
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xe6);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x4d2) goto LAB_0847abe7;
          local_160 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x176);
          iVar2 = *(int *)(local_160 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_160 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_160,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x5dd) {
        local_2b8 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0xad);
        iVar2 = *(int *)(local_2b8 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_2b8,0x31);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x5de) {
        if (uVar7 == 0x546) {
          local_208 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xaa);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_208 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_208,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x5dc) goto LAB_0847abe7;
          local_2bc = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xac);
          iVar2 = *(int *)(local_2bc + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_2bc,0x31);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x5e0) {
        local_2c0 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0xab);
        iVar2 = *(int *)(local_2c0 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_2c0,0x19f);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x5e2) goto LAB_0847abe7;
        local_2b0 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0xae);
        iVar2 = *(int *)(local_2b0 + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_2b0,0x3b);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x6d8) {
      local_174 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x174);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_174 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_174,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x6d9) {
      if (uVar7 < 0x6ad) {
        if ((uVar7 < 0x6ab) && (uVar7 != 0x6a5)) {
          if (uVar7 < 0x6a6) {
            if (uVar7 == 0x672) {
              local_200 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0xbc);
              iVar2 = *(int *)(local_200 + 0xe);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_200,0x3b);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x674) goto LAB_0847abe7;
              local_1fc = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0xbd);
              iVar2 = *(int *)(local_1fc + 0xe);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_1fc,0x31);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (1 < uVar7 - 0x6a8) {
LAB_0847abe7:
            uVar9 = 0;
            goto LAB_0847ac20;
          }
        }
      }
      else if (uVar7 != 0x6af) {
        if (uVar7 < 0x6b0) {
          if (uVar7 != 0x6ae) goto LAB_0847abe7;
        }
        else if (uVar7 == 0x6b0) {
          local_158 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x17b);
          iVar2 = *(int *)(local_158 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_158 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_158,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x6b2) goto LAB_0847abe7;
          local_138 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x198);
          iVar2 = *(int *)(local_138 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_138,0x17);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
    }
    else if (uVar7 == 0x6ea) {
      local_134 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x199);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_134,10);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x6eb) {
      if (uVar7 == 0x6e0) {
        local_15c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x17a);
        iVar2 = *(int *)(local_15c + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_15c + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_15c,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x6e1) {
        if (uVar7 == 0x6dc) {
          local_16c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x171);
          iVar2 = *(int *)(local_16c + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_16c + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_16c,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x6de) goto LAB_0847abe7;
          local_168 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x172);
          iVar2 = *(int *)(local_168 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_168 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_168,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x6e2) {
        local_164 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x173);
        iVar2 = *(int *)(local_164 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_164 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_164,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x6e5) goto LAB_0847abe7;
        local_13c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x18e);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_13c,10);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x70c) {
      local_11c = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1ad);
      iVar2 = *(int *)(local_11c + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_11c + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_11c,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x70d) {
      if (uVar7 == 0x70a) {
        local_128 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1aa);
        iVar2 = *(int *)(local_128 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_128 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_128,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x70b) goto LAB_0847abe7;
        local_120 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1ac);
        iVar2 = *(int *)(local_120 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_120 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_120,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x70d) {
      local_118 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1ae);
      iVar2 = *(int *)(local_118 + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_118 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_118,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else {
      if (uVar7 != 0x70e) goto LAB_0847abe7;
      local_114 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1af);
      iVar2 = *(int *)(local_114 + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_114 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_114,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
  }
  else if (uVar7 == 0x1b5b) {
    local_c4 = param_1;
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,0x1d6);
    iVar2 = *(int *)(local_c4 + 0xe);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,iVar2);
    uVar1 = *(ushort *)(local_c4 + 2);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
    CStreamGuard::put_binary(pCVar8,local_c4,(uint)uVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
  }
  else if (uVar7 < 0x1b5c) {
    if (uVar7 == 0xfab) {
      local_180 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x160);
      iVar2 = *(int *)(local_180 + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_180 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_180,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0xfac) {
      if (uVar7 == 0xb57) {
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x155);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0xb58) {
        if (uVar7 == 0x9dd) {
          local_1f4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x94);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1f4,0x30);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x9de) {
          if (uVar7 == 0x76c) {
            local_1e4 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xd3);
            iVar2 = *(int *)(local_1e4 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1e4,0x34);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else if (uVar7 < 0x76d) {
            if (uVar7 == 0x712) {
              local_124 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x1ab);
              iVar2 = *(int *)(local_124 + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              uVar1 = *(ushort *)(local_124 + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_124,(uint)uVar1);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x713) goto LAB_0847abe7;
              local_10c = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x1b2);
              iVar2 = *(int *)(local_10c + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              uVar1 = *(ushort *)(local_10c + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_10c,(uint)uVar1);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (uVar7 == 0x9d3) {
            local_f8 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x1b5);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            uVar1 = *(ushort *)(local_f8 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_f8,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x9dc) goto LAB_0847abe7;
            local_1f8 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x92);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1f8,0x10b);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0xa8c) {
          local_19c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x125);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_19c,0x3d);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0xa8d) {
          if (uVar7 == 0x9de) {
            local_1ec = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xb8);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1ec,0x14);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_314);
          }
          else {
            if (uVar7 != 0x9e0) goto LAB_0847abe7;
            local_1f0 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xb7);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1f0,0x10a);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0xb54) {
          local_1b0 = param_1;
          if (param_1[10] == '\0') {
            DB_ReloadAutoPunishRuleBackIP::makeRequest();
          }
          else {
            DB_ReloadAutoPunishRuleHackType::makeRequest();
          }
        }
        else {
          if (uVar7 != 0xb55) goto LAB_0847abe7;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x126);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0xb64) {
        local_64 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x25b);
        iVar2 = *(int *)(local_64 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_64 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_64,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0xb65) {
        if (uVar7 == 0xb5f) {
          local_1ac = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x191);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1ac,0xc);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0xb60) {
          if (uVar7 == 0xb58) {
            local_198 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x157);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            uVar1 = *(ushort *)(local_198 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_198,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0xb5e) goto LAB_0847abe7;
            local_194 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x17d);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_194,0x4bd);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0xb60) {
          local_12c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1a2);
          iVar2 = *(int *)(local_12c + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_12c + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_12c,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0xb61) goto LAB_0847abe7;
          local_d4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1cd);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_d4 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_d4,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0xfa2) {
        local_18c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x133);
        iVar2 = *(int *)(local_18c + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_18c,0x17f8);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0xfa3) {
        if (uVar7 == 0xb65) {
          local_58 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x274);
          iVar2 = *(int *)(local_58 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_58 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_58,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
LAB_0847a31b:
          cMyTrace::cMyTrace(local_2fc,"static bool CDispatchServerPacket::dispatchPacket(char*)",
                             0xdbf,5);
          cMyTrace::operator()(local_2fc,"TOD: bug random select");
        }
        else {
          if (uVar7 != 0xc1c) goto LAB_0847abe7;
          local_190 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xef);
          iVar2 = *(int *)(local_190 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_190,0x26);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0xfa3) {
        local_188 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x134);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_188,0x2a);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0xfa5) goto LAB_0847abe7;
        local_184 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x135);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_184,0x80);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_314);
      }
    }
    else if (uVar7 == 0x1039) {
      local_100 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x192);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_100 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_100,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x103a) {
      if (uVar7 == 0xfe7) {
        CHadesServerProxy::ConnTcpHadesSvr(GlobalData::s_hades_proxy);
      }
      else if (uVar7 < 0xfe8) {
        if (uVar7 == 0xfae) {
          local_170 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x170);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_170 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_170,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0xfaf) {
          if (uVar7 == 0xfac) {
            local_17c = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x161);
            iVar2 = *(int *)(local_17c + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            uVar1 = *(ushort *)(local_17c + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_17c,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0xfad) goto LAB_0847abe7;
            local_178 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x162);
            iVar2 = *(int *)(local_178 + 0xb);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            uVar1 = *(ushort *)(local_178 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_178,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0xfaf) {
          local_154 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x17e);
          iVar2 = *(int *)(local_154 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_154 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_154,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0xfe6) goto LAB_0847abe7;
          local_68 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x2b6);
          if (*(int *)(local_68 + 0xe) == 0) {
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
          }
          else {
            iVar2 = *(int *)(local_68 + 0xe);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
          }
          uVar1 = *(ushort *)(local_68 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_68,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x1006) {
        local_140 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x187);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_140 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_140,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x1007) {
        if (uVar7 == 0x1004) {
          local_14c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x185);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_14c + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_14c,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x1005) goto LAB_0847abe7;
          local_148 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x186);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_148 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_148,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x100a) {
        local_144 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x188);
        iVar2 = *(int *)(local_144 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_144 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_144,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x100f) goto LAB_0847abe7;
        local_130 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1a0);
        iVar2 = *(int *)(local_130 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_130 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_130,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x1777) {
      local_e8 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1bc);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_e8 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_e8,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x1778) {
      if (uVar7 == 0x1774) {
        local_f0 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1ba);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_f0 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_f0,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x1775) {
        if (uVar7 == 0x103a) {
          local_fc = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x194);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_fc + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_fc,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x1773) goto LAB_0847abe7;
          local_f4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1b9);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_f4 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_f4,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x1775) {
        local_e0 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1be);
        iVar2 = *(int *)(local_e0 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_e0 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_e0,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x1776) goto LAB_0847abe7;
        local_ec = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1bb);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_ec + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_ec,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x177e) {
      local_d8 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1c0);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_d8 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_d8,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x177f) {
      if (uVar7 == 0x1778) {
        local_e4 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1bd);
        iVar2 = *(int *)(local_e4 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_e4 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_e4,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x177a) goto LAB_0847abe7;
        local_dc = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1bf);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_dc + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_dc,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x17c0) {
      local_d0 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1cf);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_d0 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_d0,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else {
      if (uVar7 != 0x17c2) goto LAB_0847abe7;
      local_cc = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1d1);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_cc + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_cc,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
  }
  else if (uVar7 == 0x2332) {
    local_104 = param_1;
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,0x1b4);
    iVar2 = *(int *)(local_104 + 0xf);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,iVar2);
    uVar1 = *(ushort *)(local_104 + 2);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
    CStreamGuard::put_binary(pCVar8,local_104,(uint)uVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
  }
  else if (uVar7 < 0x2333) {
    if (uVar7 == 0x1bbd) {
      local_9c = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x214);
      iVar2 = *(int *)(local_9c + 0xf);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_9c + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_9c,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x1bbe) {
      if (uVar7 == 0x1b64) {
        local_ac = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1dc);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_ac + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_ac,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_314);
      }
      else if (uVar7 < 0x1b65) {
        if (uVar7 == 0x1b61) {
          local_b8 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1d9);
          iVar2 = *(int *)(local_b8 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_b8 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_b8,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x1b62) {
          if (uVar7 == 0x1b5d) {
            local_c0 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x1d7);
            iVar2 = *(int *)(local_c0 + 0xe);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            uVar1 = *(ushort *)(local_c0 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_c0,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x1b5f) goto LAB_0847abe7;
            local_bc = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x1d8);
            iVar2 = *(int *)(local_bc + 0xe);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            uVar1 = *(ushort *)(local_bc + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_bc,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x1b62) {
          local_b4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1da);
          iVar2 = *(int *)(local_b4 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_b4 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_b4,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x1b63) goto LAB_0847abe7;
          local_b0 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1db);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_b0 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_b0,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_314);
        }
      }
      else if (uVar7 == 0x1b6a) {
        local_150 = param_1;
        village_attacked::CVillageMonsterMgr::SetRewardType
                  (GlobalData::s_villageMonsterMgr,*(undefined4 *)(param_1 + 10));
        iVar2 = *(int *)(local_150 + 10);
        if (iVar2 == 1) {
          village_attacked::CRevengeDungeon::OpenRevengeDungeon(GlobalData::s_revengeDungeonMgr);
        }
        else if ((iVar2 == 2) || (iVar2 == 0)) {
          village_attacked::CRevengeDungeon::CloseRevengeDungeon(GlobalData::s_revengeDungeonMgr);
        }
        village_attacked::CRevengeDungeon::SetCloseTime
                  (GlobalData::s_revengeDungeonMgr,*(uint *)(local_150 + 0xe));
        printf("[Packet_Request_Revenge] isRevengeDungeonOpen : %d, DungeonClose_Remain_Time : %u\n"
               ,*(undefined4 *)(local_150 + 10),*(undefined4 *)(local_150 + 0xe));
      }
      else if (uVar7 < 0x1b6b) {
        if (uVar7 == 0x1b65) {
          local_a8 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1dd);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_a8 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_a8,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_314);
        }
        else {
          if (uVar7 != 0x1b66) goto LAB_0847abe7;
          local_c8 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xca);
          iVar2 = *(int *)(local_c8 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_c8,0x15f);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x1b6c) {
        local_8c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x209);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_8c + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_8c,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x1b6d) goto LAB_0847abe7;
        local_88 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x20a);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_88 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_88,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x1f42) {
      local_90 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1f8);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_90 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_90,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x1f43) {
      if (uVar7 == 0x1bc7) {
        local_70 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x21d);
        iVar2 = *(int *)(local_70 + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_70 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_70,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x1bc8) {
        if (uVar7 == 0x1bc1) {
          local_98 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x215);
          iVar2 = *(int *)(local_98 + 0x12);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_98 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_98,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x1bc3) goto LAB_0847abe7;
          local_74 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x21b);
          iVar2 = *(int *)(local_74 + 0x12);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_74 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_74,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x1bc8) {
        local_6c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x21e);
        iVar2 = *(int *)(local_6c + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_6c + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_6c,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 8000) goto LAB_0847abe7;
        local_94 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1f7);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_94 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_94,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x1f4b) {
      local_7c = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x211);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_7c + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_7c,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x1f4c) {
      if (uVar7 == 0x1f45) {
        local_84 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x20b);
        iVar2 = *(int *)(local_84 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_84 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_84,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x1f4a) goto LAB_0847abe7;
        local_80 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x210);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_80 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_80,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x1f4c) {
      local_78 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x212);
      iVar2 = *(int *)(local_78 + 0xe);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_78 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_78,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else {
      if (uVar7 != 9000) goto LAB_0847abe7;
      local_108 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1b3);
      iVar2 = *(int *)(local_108 + 0xf);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_108 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_108,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
  }
  else if (uVar7 == 0x27dc) {
    local_38 = param_1;
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,0x2c8);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,-1);
    uVar1 = *(ushort *)(local_38 + 2);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
    CStreamGuard::put_binary(pCVar8,local_38,(uint)uVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
  }
  else if (uVar7 < 0x27dd) {
    if (uVar7 == 0x2719) {
      local_50 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2a6);
      iVar2 = *(int *)(local_50 + 0xf);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_50 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_50,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x271a) {
      if (uVar7 == 0x2713) {
        cMyTrace::cMyTrace(local_2ec,"static bool CDispatchServerPacket::dispatchPacket(char*)",
                           0xdcc,5);
        cMyTrace::operator()(local_2ec,"TOD: bug reload");
      }
      else if (uVar7 < 0x2714) {
        if (uVar7 != 0x2711) {
          if (uVar7 == 0x2712) goto LAB_0847a31b;
          goto LAB_0847abe7;
        }
        local_60 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x260);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_60,0x10e);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 == 0x2717) {
        local_5c = param_1;
        CSwitchLog::SetLogWriteFlag(*(int *)(param_1 + 10));
      }
      else {
        if (uVar7 != 0x2718) goto LAB_0847abe7;
        local_54 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x2a5);
        iVar2 = *(int *)(local_54 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_54 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_54,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x27d9) {
      local_44 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2c5);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_44 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_44,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x27da) {
      if (uVar7 == 0x271a) {
        local_4c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x2a7);
        iVar2 = *(int *)(local_4c + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_4c + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_4c,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x271b) goto LAB_0847abe7;
        local_48 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x2a8);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_48 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_48,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x27da) {
      local_40 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2c6);
      iVar2 = *(int *)(local_40 + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_40 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_40,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else {
      if (uVar7 != 0x27db) goto LAB_0847abe7;
      local_3c = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2c7);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_3c + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_3c,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
  }
  else if (uVar7 == 0x27f2) {
    local_24 = param_1;
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,0x302);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,-1);
    uVar1 = *(ushort *)(local_24 + 2);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
    CStreamGuard::put_binary(pCVar8,local_24,(uint)uVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
  }
  else if (uVar7 < 0x27f3) {
    if (uVar7 == 0x27e7) {
      local_28 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2fa);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_28 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_28,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x27e8) {
      if (uVar7 == 0x27df) {
        local_34 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x2ce);
        iVar2 = *(int *)(local_34 + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_34 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_34,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x27e2) goto LAB_0847abe7;
        local_2c8 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x2f7);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_2c8,10);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x27e8) {
      local_30 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2fb);
      iVar2 = *(int *)(local_30 + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_30 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_30,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else {
      if (uVar7 != 0x27e9) goto LAB_0847abe7;
      local_2c = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2fc);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_2c + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_2c,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
  }
  else if (uVar7 == 0x27fa) {
    local_a0 = param_1;
    ARAD::DISPATCHER::make_internal_stream_jpn(local_314,0x2b,0xffffffff);
    uVar1 = *(ushort *)(local_a0 + 2);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
    CStreamGuard::put_binary(pCVar8,local_a0,(uint)uVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
  }
  else if (uVar7 < 0x27fb) {
    if (uVar7 == 0x27f8) {
      local_20 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x32f);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_20 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_20,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else {
      if (uVar7 != 0x27f9) goto LAB_0847abe7;
      local_a4 = param_1;
      ARAD::DISPATCHER::make_internal_stream_jpn(local_314,0x2a,0xffffffff);
      uVar1 = *(ushort *)(local_a4 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_a4,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
  }
  else if (uVar7 == 0x27fe) {
    this = (RestrictGeolocation *)ARAD::Singleton<RestrictGeolocation>::Get();
    cVar5 = RestrictGeolocation::initGeolocation(this);
    if (cVar5 != '\x01') {
      LogManager::logFormat
                (1,"DispatchServerPacket.cpp",
                 "static bool CDispatchServerPacket::dispatchPacket(char*)",0x1143,
                 "GEO IP TABLE RELOAD FAIL");
    }
  }
  else {
    if (uVar7 != 0x27ff) goto LAB_0847abe7;
    ARAD::Singleton<ServiceRestrictManager>::Get();
    ServiceRestrictManager::loadPolicy();
  }
  uVar9 = 1;
LAB_0847ac20:
  CStreamGuard::~CStreamGuard(local_314);
  return uVar9;
}
```
