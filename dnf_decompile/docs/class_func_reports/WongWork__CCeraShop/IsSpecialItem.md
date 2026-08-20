# IsSpecialItem

`_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb`

`WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08324a1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08324a1e  _ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb
#           WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
# range [0x08324a1e, 0x08325853]
08324a1e +0x000:  push   %ebp
08324a1f +0x001:  mov    %esp,%ebp
08324a21 +0x003:  sub    $0x28,%esp
08324a24 +0x006:  mov    0xc(%ebp),%eax
08324a27 +0x009:  cmp    $0x334,%eax
08324a2c +0x00e:  je     0832543f <+0xa21>
08324a32 +0x014:  cmp    $0x334,%eax
08324a37 +0x019:  jg     08324c46 <+0x228>
08324a3d +0x01f:  cmp    $0x2d,%eax
08324a40 +0x022:  je     08325258 <+0x83a>
08324a46 +0x028:  cmp    $0x2d,%eax
08324a49 +0x02b:  jg     08324b44 <+0x126>
08324a4f +0x031:  cmp    $0x16,%eax
08324a52 +0x034:  je     08325031 <+0x613>
08324a58 +0x03a:  cmp    $0x16,%eax
08324a5b +0x03d:  jg     08324ac7 <+0xa9>
08324a5d +0x03f:  cmp    $0x10,%eax
08324a60 +0x042:  je     08324f95 <+0x577>
08324a66 +0x048:  cmp    $0x10,%eax
08324a69 +0x04b:  jg     08324a9e <+0x80>
08324a6b +0x04d:  cmp    $0x6,%eax
08324a6e +0x050:  je     08324ef4 <+0x4d6>
08324a74 +0x056:  cmp    $0x6,%eax
08324a77 +0x059:  jg     08324a87 <+0x69>
08324a79 +0x05b:  cmp    $0x5,%eax
08324a7c +0x05e:  je     08324ec6 <+0x4a8>
08324a82 +0x064:  jmp    0832572b <+0xd0d>
08324a87 +0x069:  cmp    $0x9,%eax
08324a8a +0x06c:  je     08324f67 <+0x549>
08324a90 +0x072:  cmp    $0xb,%eax
08324a93 +0x075:  je     08324f7e <+0x560>
08324a99 +0x07b:  jmp    0832572b <+0xd0d>
08324a9e +0x080:  cmp    $0x12,%eax
08324aa1 +0x083:  je     08324fda <+0x5bc>
08324aa7 +0x089:  cmp    $0x12,%eax
08324aaa +0x08c:  jl     08324fc3 <+0x5a5>
08324ab0 +0x092:  cmp    $0x13,%eax
08324ab3 +0x095:  je     08324ff7 <+0x5d9>
08324ab9 +0x09b:  cmp    $0x14,%eax
08324abc +0x09e:  je     08325014 <+0x5f6>
08324ac2 +0x0a4:  jmp    0832572b <+0xd0d>
08324ac7 +0x0a9:  cmp    $0x20,%eax
08324aca +0x0ac:  je     083250c2 <+0x6a4>
08324ad0 +0x0b2:  cmp    $0x20,%eax
08324ad3 +0x0b5:  jg     08324b08 <+0xea>
08324ad5 +0x0b7:  cmp    $0x1d,%eax
08324ad8 +0x0ba:  je     083251e4 <+0x7c6>
08324ade +0x0c0:  cmp    $0x1d,%eax
08324ae1 +0x0c3:  jg     08324af1 <+0xd3>
08324ae3 +0x0c5:  cmp    $0x17,%eax
08324ae6 +0x0c8:  je     0832504e <+0x630>
08324aec +0x0ce:  jmp    0832572b <+0xd0d>
08324af1 +0x0d3:  cmp    $0x1e,%eax
08324af4 +0x0d6:  je     08325088 <+0x66a>
08324afa +0x0dc:  cmp    $0x1f,%eax
08324afd +0x0df:  je     083250a5 <+0x687>
08324b03 +0x0e5:  jmp    0832572b <+0xd0d>
08324b08 +0x0ea:  cmp    $0x23,%eax
08324b0b +0x0ed:  je     08325119 <+0x6fb>
08324b11 +0x0f3:  cmp    $0x23,%eax
08324b14 +0x0f6:  jg     08324b2d <+0x10f>
08324b16 +0x0f8:  cmp    $0x21,%eax
08324b19 +0x0fb:  je     083250df <+0x6c1>
08324b1f +0x101:  cmp    $0x22,%eax
08324b22 +0x104:  je     083250fc <+0x6de>
08324b28 +0x10a:  jmp    0832572b <+0xd0d>
08324b2d +0x10f:  cmp    $0x2b,%eax
08324b30 +0x112:  je     0832521e <+0x800>
08324b36 +0x118:  cmp    $0x2c,%eax
08324b39 +0x11b:  je     0832523b <+0x81d>
08324b3f +0x121:  jmp    0832572b <+0xd0d>
08324b44 +0x126:  cmp    $0xc2,%eax
08324b49 +0x12b:  je     0832535d <+0x93f>
08324b4f +0x131:  cmp    $0xc2,%eax
08324b54 +0x136:  jg     08324bbb <+0x19d>
08324b56 +0x138:  cmp    $0x3e,%eax
08324b59 +0x13b:  jg     08324b84 <+0x166>
08324b5b +0x13d:  cmp    $0x39,%eax
08324b5e +0x140:  jge    08324edd <+0x4bf>
08324b64 +0x146:  cmp    $0x2f,%eax
08324b67 +0x149:  je     08325292 <+0x874>
08324b6d +0x14f:  cmp    $0x2f,%eax
08324b70 +0x152:  jl     08325275 <+0x857>
08324b76 +0x158:  cmp    $0x32,%eax
08324b79 +0x15b:  je     08324edd <+0x4bf>
08324b7f +0x161:  jmp    0832572b <+0xd0d>
08324b84 +0x166:  cmp    $0x6e,%eax
08324b87 +0x169:  je     08324eaf <+0x491>
08324b8d +0x16f:  cmp    $0x6e,%eax
08324b90 +0x172:  jg     08324ba0 <+0x182>
08324b92 +0x174:  cmp    $0x44,%eax
08324b95 +0x177:  je     08324f50 <+0x532>
08324b9b +0x17d:  jmp    0832572b <+0xd0d>
08324ba0 +0x182:  cmp    $0x89,%eax
08324ba5 +0x187:  je     0832518d <+0x76f>
08324bab +0x18d:  cmp    $0xc1,%eax
08324bb0 +0x192:  je     083251c7 <+0x7a9>
08324bb6 +0x198:  jmp    0832572b <+0xd0d>
08324bbb +0x19d:  cmp    $0xc8,%eax
08324bc0 +0x1a2:  je     083252cc <+0x8ae>
08324bc6 +0x1a8:  cmp    $0xc8,%eax
08324bcb +0x1ad:  jg     08324bfe <+0x1e0>
08324bcd +0x1af:  cmp    $0xc4,%eax
08324bd2 +0x1b4:  je     0832537a <+0x95c>
08324bd8 +0x1ba:  cmp    $0xc4,%eax
08324bdd +0x1bf:  jl     083253d1 <+0x9b3>
08324be3 +0x1c5:  cmp    $0xc5,%eax
08324be8 +0x1ca:  je     083253b4 <+0x996>
08324bee +0x1d0:  cmp    $0xc6,%eax
08324bf3 +0x1d5:  je     083253e8 <+0x9ca>
08324bf9 +0x1db:  jmp    0832572b <+0xd0d>
08324bfe +0x1e0:  cmp    $0x2e6,%eax
08324c03 +0x1e5:  je     083252af <+0x891>
08324c09 +0x1eb:  cmp    $0x2e6,%eax
08324c0e +0x1f0:  jg     08324c2b <+0x20d>
08324c10 +0x1f2:  cmp    $0x2d0,%eax
08324c15 +0x1f7:  je     08325397 <+0x979>
08324c1b +0x1fd:  cmp    $0x2e5,%eax
08324c20 +0x202:  je     08325136 <+0x718>
08324c26 +0x208:  jmp    0832572b <+0xd0d>
08324c2b +0x20d:  cmp    $0x2e7,%eax
08324c30 +0x212:  je     08325405 <+0x9e7>
08324c36 +0x218:  cmp    $0x2e8,%eax
08324c3b +0x21d:  je     08325422 <+0xa04>
08324c41 +0x223:  jmp    0832572b <+0xd0d>
08324c46 +0x228:  cmp    $0x2898c0,%eax
08324c4b +0x22d:  je     083255b2 <+0xb94>
08324c51 +0x233:  cmp    $0x2898c0,%eax
08324c56 +0x238:  jg     08324d82 <+0x364>
08324c5c +0x23e:  cmp    $0x2897c2,%eax
08324c61 +0x243:  je     08325479 <+0xa5b>
08324c67 +0x249:  cmp    $0x2897c2,%eax
08324c6c +0x24e:  jg     08324cf3 <+0x2d5>
08324c72 +0x254:  cmp    $0x2896d2,%eax
08324c77 +0x259:  je     08325170 <+0x752>
08324c7d +0x25f:  cmp    $0x2896d2,%eax
08324c82 +0x264:  jg     08324cc1 <+0x2a3>
08324c84 +0x266:  cmp    $0x398,%eax
08324c89 +0x26b:  je     0832545c <+0xa3e>
08324c8f +0x271:  cmp    $0x398,%eax
08324c94 +0x276:  jg     08324ca6 <+0x288>
08324c96 +0x278:  cmp    $0x335,%eax
08324c9b +0x27d:  je     083254ed <+0xacf>
08324ca1 +0x283:  jmp    0832572b <+0xd0d>
08324ca6 +0x288:  cmp    $0x2896ac,%eax
08324cab +0x28d:  je     08325153 <+0x735>
08324cb1 +0x293:  cmp    $0x2896ad,%eax
08324cb6 +0x298:  je     083252e9 <+0x8cb>
08324cbc +0x29e:  jmp    0832572b <+0xd0d>
08324cc1 +0x2a3:  cmp    $0x28978c,%eax
08324cc6 +0x2a8:  jg     08324ce3 <+0x2c5>
08324cc8 +0x2aa:  cmp    $0x28978b,%eax
08324ccd +0x2af:  jge    08324edd <+0x4bf>
08324cd3 +0x2b5:  cmp    $0x2896d3,%eax
08324cd8 +0x2ba:  je     08325306 <+0x8e8>
08324cde +0x2c0:  jmp    0832572b <+0xd0d>
08324ce3 +0x2c5:  cmp    $0x28978f,%eax
08324ce8 +0x2ca:  je     08324f22 <+0x504>
08324cee +0x2d0:  jmp    0832572b <+0xd0d>
08324cf3 +0x2d5:  cmp    $0x289832,%eax
08324cf8 +0x2da:  je     083254d0 <+0xab2>
08324cfe +0x2e0:  cmp    $0x289832,%eax
08324d03 +0x2e5:  jg     08324d3a <+0x31c>
08324d05 +0x2e7:  cmp    $0x289806,%eax
08324d0a +0x2ec:  je     08325496 <+0xa78>
08324d10 +0x2f2:  cmp    $0x289806,%eax
08324d15 +0x2f7:  jg     08324d2a <+0x30c>
08324d17 +0x2f9:  sub    $0x2897c8,%eax
08324d1c +0x2fe:  cmp    $0x1,%eax
08324d1f +0x301:  ja     0832572b <+0xd0d>
08324d25 +0x307:  jmp    08324f0b <+0x4ed>
08324d2a +0x30c:  cmp    $0x289831,%eax
08324d2f +0x311:  je     083254b3 <+0xa95>
08324d35 +0x317:  jmp    0832572b <+0xd0d>
08324d3a +0x31c:  cmp    $0x28983a,%eax
08324d3f +0x321:  je     08325521 <+0xb03>
08324d45 +0x327:  cmp    $0x28983a,%eax
08324d4a +0x32c:  jg     08324d67 <+0x349>
08324d4c +0x32e:  cmp    $0x289838,%eax
08324d51 +0x333:  je     0832555b <+0xb3d>
08324d57 +0x339:  cmp    $0x289839,%eax
08324d5c +0x33e:  je     08325504 <+0xae6>
08324d62 +0x344:  jmp    0832572b <+0xd0d>
08324d67 +0x349:  cmp    $0x28983b,%eax
08324d6c +0x34e:  je     0832553e <+0xb20>
08324d72 +0x354:  cmp    $0x2898bf,%eax
08324d77 +0x359:  je     08325595 <+0xb77>
08324d7d +0x35f:  jmp    0832572b <+0xd0d>
08324d82 +0x364:  cmp    $0x28d172,%eax
08324d87 +0x369:  je     083251aa <+0x78c>
08324d8d +0x36f:  cmp    $0x28d172,%eax
08324d92 +0x374:  jg     08324e18 <+0x3fa>
08324d98 +0x37a:  cmp    $0x28beba,%eax
08324d9d +0x37f:  je     08325340 <+0x922>
08324da3 +0x385:  cmp    $0x28beba,%eax
08324da8 +0x38a:  jg     08324ddb <+0x3bd>
08324daa +0x38c:  cmp    $0x2898c2,%eax
08324daf +0x391:  je     083255ec <+0xbce>
08324db5 +0x397:  cmp    $0x2898c2,%eax
08324dba +0x39c:  jl     083255cf <+0xbb1>
08324dc0 +0x3a2:  cmp    $0x28995f,%eax
08324dc5 +0x3a7:  je     08325578 <+0xb5a>
08324dcb +0x3ad:  cmp    $0x28bdb9,%eax
08324dd0 +0x3b2:  je     08324f39 <+0x51b>
08324dd6 +0x3b8:  jmp    0832572b <+0xd0d>
08324ddb +0x3bd:  cmp    $0x28d152,%eax
08324de0 +0x3c2:  je     08325201 <+0x7e3>
08324de6 +0x3c8:  cmp    $0x28d152,%eax
08324deb +0x3cd:  jg     08324dfd <+0x3df>
08324ded +0x3cf:  cmp    $0x28d151,%eax
08324df2 +0x3d4:  je     0832506b <+0x64d>
08324df8 +0x3da:  jmp    0832572b <+0xd0d>
08324dfd +0x3df:  cmp    $0x28d154,%eax
08324e02 +0x3e4:  je     08325323 <+0x905>
08324e08 +0x3ea:  cmp    $0x28d171,%eax
08324e0d +0x3ef:  je     08324fac <+0x58e>
08324e13 +0x3f5:  jmp    0832572b <+0xd0d>
08324e18 +0x3fa:  cmp    $0x989807,%eax
08324e1d +0x3ff:  je     08325609 <+0xbeb>
08324e23 +0x405:  cmp    $0x989807,%eax
08324e28 +0x40a:  jg     08324e67 <+0x449>
08324e2a +0x40c:  cmp    $0x989804,%eax
08324e2f +0x411:  je     08325626 <+0xc08>
08324e35 +0x417:  cmp    $0x989804,%eax
08324e3a +0x41c:  jg     08324e4c <+0x42e>
08324e3c +0x41e:  cmp    $0x989803,%eax
08324e41 +0x423:  je     0832567d <+0xc5f>
08324e47 +0x429:  jmp    0832572b <+0xd0d>
08324e4c +0x42e:  cmp    $0x989805,%eax
08324e51 +0x433:  je     08325643 <+0xc25>
08324e57 +0x439:  cmp    $0x989806,%eax
08324e5c +0x43e:  je     08325660 <+0xc42>
08324e62 +0x444:  jmp    0832572b <+0xd0d>
08324e67 +0x449:  cmp    $0x2920915f,%eax
08324e6c +0x44e:  je     083256d4 <+0xcb6>
08324e72 +0x454:  cmp    $0x2920915f,%eax
08324e77 +0x459:  jg     08324e94 <+0x476>
08324e79 +0x45b:  cmp    $0x2920915d,%eax
08324e7e +0x460:  je     0832569a <+0xc7c>
08324e84 +0x466:  cmp    $0x2920915e,%eax
08324e89 +0x46b:  je     083256b7 <+0xc99>
08324e8f +0x471:  jmp    0832572b <+0xd0d>
08324e94 +0x476:  cmp    $0x29209160,%eax
08324e99 +0x47b:  je     083256f1 <+0xcd3>
08324e9f +0x481:  cmp    $0x29209161,%eax
08324ea4 +0x486:  je     0832570e <+0xcf0>
08324eaa +0x48c:  jmp    0832572b <+0xd0d>
08324eaf +0x491:  mov    0x10(%ebp),%eax
08324eb2 +0x494:  movl   $0x1,(%eax)
08324eb8 +0x49a:  mov    0x14(%ebp),%eax
08324ebb +0x49d:  movl   $0x28,(%eax)
08324ec1 +0x4a3:  jmp    0832584d <+0xe2f>
08324ec6 +0x4a8:  mov    0x10(%ebp),%eax
08324ec9 +0x4ab:  movl   $0x1,(%eax)
08324ecf +0x4b1:  mov    0x14(%ebp),%eax
08324ed2 +0x4b4:  movl   $0x18,(%eax)
08324ed8 +0x4ba:  jmp    0832584d <+0xe2f>
08324edd +0x4bf:  mov    0x10(%ebp),%eax
08324ee0 +0x4c2:  movl   $0x7,(%eax)
08324ee6 +0x4c8:  mov    0x14(%ebp),%eax
08324ee9 +0x4cb:  movl   $0x10,(%eax)
08324eef +0x4d1:  jmp    0832584d <+0xe2f>
08324ef4 +0x4d6:  mov    0x10(%ebp),%eax
08324ef7 +0x4d9:  movl   $0x1,(%eax)
08324efd +0x4df:  mov    0x14(%ebp),%eax
08324f00 +0x4e2:  movl   $0x98,(%eax)
08324f06 +0x4e8:  jmp    0832584d <+0xe2f>
08324f0b +0x4ed:  mov    0x10(%ebp),%eax
08324f0e +0x4f0:  movl   $0xb,(%eax)
08324f14 +0x4f6:  mov    0x14(%ebp),%eax
08324f17 +0x4f9:  movl   $0x8,(%eax)
08324f1d +0x4ff:  jmp    0832584d <+0xe2f>
08324f22 +0x504:  mov    0x10(%ebp),%eax
08324f25 +0x507:  movl   $0x8,(%eax)
08324f2b +0x50d:  mov    0x14(%ebp),%eax
08324f2e +0x510:  movl   $0x1,(%eax)
08324f34 +0x516:  jmp    0832584d <+0xe2f>
08324f39 +0x51b:  mov    0x10(%ebp),%eax
08324f3c +0x51e:  movl   $0x1,(%eax)
08324f42 +0x524:  mov    0x14(%ebp),%eax
08324f45 +0x527:  movl   $0x28,(%eax)
08324f4b +0x52d:  jmp    0832584d <+0xe2f>
08324f50 +0x532:  mov    0x10(%ebp),%eax
08324f53 +0x535:  movl   $0x1,(%eax)
08324f59 +0x53b:  mov    0x14(%ebp),%eax
08324f5c +0x53e:  movl   $0x48,(%eax)
08324f62 +0x544:  jmp    0832584d <+0xe2f>
08324f67 +0x549:  mov    0x10(%ebp),%eax
08324f6a +0x54c:  movl   $0x2,(%eax)
08324f70 +0x552:  mov    0x14(%ebp),%eax
08324f73 +0x555:  movl   $0x1,(%eax)
08324f79 +0x55b:  jmp    0832584d <+0xe2f>
08324f7e +0x560:  mov    0x10(%ebp),%eax
08324f81 +0x563:  movl   $0x2,(%eax)
08324f87 +0x569:  mov    0x14(%ebp),%eax
08324f8a +0x56c:  movl   $0x3,(%eax)
08324f90 +0x572:  jmp    0832584d <+0xe2f>
08324f95 +0x577:  mov    0x10(%ebp),%eax
08324f98 +0x57a:  movl   $0x4,(%eax)
08324f9e +0x580:  mov    0x14(%ebp),%eax
08324fa1 +0x583:  movl   $0x8,(%eax)
08324fa7 +0x589:  jmp    0832584d <+0xe2f>
08324fac +0x58e:  mov    0x10(%ebp),%eax
08324faf +0x591:  movl   $0x4,(%eax)
08324fb5 +0x597:  mov    0x14(%ebp),%eax
08324fb8 +0x59a:  movl   $0x2a,(%eax)
08324fbe +0x5a0:  jmp    0832584d <+0xe2f>
08324fc3 +0x5a5:  mov    0x10(%ebp),%eax
08324fc6 +0x5a8:  movl   $0x3,(%eax)
08324fcc +0x5ae:  mov    0x14(%ebp),%eax
08324fcf +0x5b1:  movl   $0x7,(%eax)
08324fd5 +0x5b7:  jmp    0832584d <+0xe2f>
08324fda +0x5bc:  mov    0x10(%ebp),%eax
08324fdd +0x5bf:  movl   $0x2,(%eax)
08324fe3 +0x5c5:  mov    0x14(%ebp),%eax
08324fe6 +0x5c8:  movl   $0x9,(%eax)
08324fec +0x5ce:  mov    0x18(%ebp),%eax
08324fef +0x5d1:  movb   $0x1,(%eax)
08324ff2 +0x5d4:  jmp    0832584d <+0xe2f>
08324ff7 +0x5d9:  mov    0x10(%ebp),%eax
08324ffa +0x5dc:  movl   $0x2,(%eax)
08325000 +0x5e2:  mov    0x14(%ebp),%eax
08325003 +0x5e5:  movl   $0xa,(%eax)
08325009 +0x5eb:  mov    0x18(%ebp),%eax
0832500c +0x5ee:  movb   $0x1,(%eax)
0832500f +0x5f1:  jmp    0832584d <+0xe2f>
08325014 +0x5f6:  mov    0x10(%ebp),%eax
08325017 +0x5f9:  movl   $0x2,(%eax)
0832501d +0x5ff:  mov    0x14(%ebp),%eax
08325020 +0x602:  movl   $0xb,(%eax)
08325026 +0x608:  mov    0x18(%ebp),%eax
08325029 +0x60b:  movb   $0x1,(%eax)
0832502c +0x60e:  jmp    0832584d <+0xe2f>
08325031 +0x613:  mov    0x10(%ebp),%eax
08325034 +0x616:  movl   $0x2,(%eax)
0832503a +0x61c:  mov    0x14(%ebp),%eax
0832503d +0x61f:  movl   $0xd,(%eax)
08325043 +0x625:  mov    0x18(%ebp),%eax
08325046 +0x628:  movb   $0x0,(%eax)
08325049 +0x62b:  jmp    0832584d <+0xe2f>
0832504e +0x630:  mov    0x10(%ebp),%eax
08325051 +0x633:  movl   $0x2,(%eax)
08325057 +0x639:  mov    0x14(%ebp),%eax
0832505a +0x63c:  movl   $0xe,(%eax)
08325060 +0x642:  mov    0x18(%ebp),%eax
08325063 +0x645:  movb   $0x0,(%eax)
08325066 +0x648:  jmp    0832584d <+0xe2f>
0832506b +0x64d:  mov    0x10(%ebp),%eax
0832506e +0x650:  movl   $0x2,(%eax)
08325074 +0x656:  mov    0x14(%ebp),%eax
08325077 +0x659:  movl   $0x11,(%eax)
0832507d +0x65f:  mov    0x18(%ebp),%eax
08325080 +0x662:  movb   $0x1,(%eax)
08325083 +0x665:  jmp    0832584d <+0xe2f>
08325088 +0x66a:  mov    0x10(%ebp),%eax
0832508b +0x66d:  movl   $0x2,(%eax)
08325091 +0x673:  mov    0x14(%ebp),%eax
08325094 +0x676:  movl   $0x11,(%eax)
0832509a +0x67c:  mov    0x18(%ebp),%eax
0832509d +0x67f:  movb   $0x1,(%eax)
083250a0 +0x682:  jmp    0832584d <+0xe2f>
083250a5 +0x687:  mov    0x10(%ebp),%eax
083250a8 +0x68a:  movl   $0x2,(%eax)
083250ae +0x690:  mov    0x14(%ebp),%eax
083250b1 +0x693:  movl   $0x12,(%eax)
083250b7 +0x699:  mov    0x18(%ebp),%eax
083250ba +0x69c:  movb   $0x1,(%eax)
083250bd +0x69f:  jmp    0832584d <+0xe2f>
083250c2 +0x6a4:  mov    0x10(%ebp),%eax
083250c5 +0x6a7:  movl   $0x2,(%eax)
083250cb +0x6ad:  mov    0x14(%ebp),%eax
083250ce +0x6b0:  movl   $0x13,(%eax)
083250d4 +0x6b6:  mov    0x18(%ebp),%eax
083250d7 +0x6b9:  movb   $0x1,(%eax)
083250da +0x6bc:  jmp    0832584d <+0xe2f>
083250df +0x6c1:  mov    0x10(%ebp),%eax
083250e2 +0x6c4:  movl   $0x2,(%eax)
083250e8 +0x6ca:  mov    0x14(%ebp),%eax
083250eb +0x6cd:  movl   $0x14,(%eax)
083250f1 +0x6d3:  mov    0x18(%ebp),%eax
083250f4 +0x6d6:  movb   $0x1,(%eax)
083250f7 +0x6d9:  jmp    0832584d <+0xe2f>
083250fc +0x6de:  mov    0x10(%ebp),%eax
083250ff +0x6e1:  movl   $0x2,(%eax)
08325105 +0x6e7:  mov    0x14(%ebp),%eax
08325108 +0x6ea:  movl   $0x15,(%eax)
0832510e +0x6f0:  mov    0x18(%ebp),%eax
08325111 +0x6f3:  movb   $0x1,(%eax)
08325114 +0x6f6:  jmp    0832584d <+0xe2f>
08325119 +0x6fb:  mov    0x10(%ebp),%eax
0832511c +0x6fe:  movl   $0x2,(%eax)
08325122 +0x704:  mov    0x14(%ebp),%eax
08325125 +0x707:  movl   $0x16,(%eax)
0832512b +0x70d:  mov    0x18(%ebp),%eax
0832512e +0x710:  movb   $0x1,(%eax)
08325131 +0x713:  jmp    0832584d <+0xe2f>
08325136 +0x718:  mov    0x10(%ebp),%eax
08325139 +0x71b:  movl   $0x2,(%eax)
0832513f +0x721:  mov    0x14(%ebp),%eax
08325142 +0x724:  movl   $0x24,(%eax)
08325148 +0x72a:  mov    0x18(%ebp),%eax
0832514b +0x72d:  movb   $0x1,(%eax)
0832514e +0x730:  jmp    0832584d <+0xe2f>
08325153 +0x735:  mov    0x10(%ebp),%eax
08325156 +0x738:  movl   $0x2,(%eax)
0832515c +0x73e:  mov    0x14(%ebp),%eax
0832515f +0x741:  movl   $0x2d,(%eax)
08325165 +0x747:  mov    0x18(%ebp),%eax
08325168 +0x74a:  movb   $0x1,(%eax)
0832516b +0x74d:  jmp    0832584d <+0xe2f>
08325170 +0x752:  mov    0x10(%ebp),%eax
08325173 +0x755:  movl   $0x2,(%eax)
08325179 +0x75b:  mov    0x14(%ebp),%eax
0832517c +0x75e:  movl   $0x2f,(%eax)
08325182 +0x764:  mov    0x18(%ebp),%eax
08325185 +0x767:  movb   $0x1,(%eax)
08325188 +0x76a:  jmp    0832584d <+0xe2f>
0832518d +0x76f:  mov    0x10(%ebp),%eax
08325190 +0x772:  movl   $0x2,(%eax)
08325196 +0x778:  mov    0x14(%ebp),%eax
08325199 +0x77b:  movl   $0x1d,(%eax)
0832519f +0x781:  mov    0x18(%ebp),%eax
083251a2 +0x784:  movb   $0x1,(%eax)
083251a5 +0x787:  jmp    0832584d <+0xe2f>
083251aa +0x78c:  mov    0x10(%ebp),%eax
083251ad +0x78f:  movl   $0x2,(%eax)
083251b3 +0x795:  mov    0x14(%ebp),%eax
083251b6 +0x798:  movl   $0x2b,(%eax)
083251bc +0x79e:  mov    0x18(%ebp),%eax
083251bf +0x7a1:  movb   $0x1,(%eax)
083251c2 +0x7a4:  jmp    0832584d <+0xe2f>
083251c7 +0x7a9:  mov    0x10(%ebp),%eax
083251ca +0x7ac:  movl   $0x2,(%eax)
083251d0 +0x7b2:  mov    0x14(%ebp),%eax
083251d3 +0x7b5:  movl   $0x1e,(%eax)
083251d9 +0x7bb:  mov    0x18(%ebp),%eax
083251dc +0x7be:  movb   $0x1,(%eax)
083251df +0x7c1:  jmp    0832584d <+0xe2f>
083251e4 +0x7c6:  mov    0x10(%ebp),%eax
083251e7 +0x7c9:  movl   $0x2,(%eax)
083251ed +0x7cf:  mov    0x14(%ebp),%eax
083251f0 +0x7d2:  movl   $0x10,(%eax)
083251f6 +0x7d8:  mov    0x18(%ebp),%eax
083251f9 +0x7db:  movb   $0x0,(%eax)
083251fc +0x7de:  jmp    0832584d <+0xe2f>
08325201 +0x7e3:  mov    0x10(%ebp),%eax
08325204 +0x7e6:  movl   $0x2,(%eax)
0832520a +0x7ec:  mov    0x14(%ebp),%eax
0832520d +0x7ef:  movl   $0x17,(%eax)
08325213 +0x7f5:  mov    0x18(%ebp),%eax
08325216 +0x7f8:  movb   $0x1,(%eax)
08325219 +0x7fb:  jmp    0832584d <+0xe2f>
0832521e +0x800:  mov    0x10(%ebp),%eax
08325221 +0x803:  movl   $0x2,(%eax)
08325227 +0x809:  mov    0x14(%ebp),%eax
0832522a +0x80c:  movl   $0x17,(%eax)
08325230 +0x812:  mov    0x18(%ebp),%eax
08325233 +0x815:  movb   $0x1,(%eax)
08325236 +0x818:  jmp    0832584d <+0xe2f>
0832523b +0x81d:  mov    0x10(%ebp),%eax
0832523e +0x820:  movl   $0x2,(%eax)
08325244 +0x826:  mov    0x14(%ebp),%eax
08325247 +0x829:  movl   $0x18,(%eax)
0832524d +0x82f:  mov    0x18(%ebp),%eax
08325250 +0x832:  movb   $0x1,(%eax)
08325253 +0x835:  jmp    0832584d <+0xe2f>
08325258 +0x83a:  mov    0x10(%ebp),%eax
0832525b +0x83d:  movl   $0x2,(%eax)
08325261 +0x843:  mov    0x14(%ebp),%eax
08325264 +0x846:  movl   $0x19,(%eax)
0832526a +0x84c:  mov    0x18(%ebp),%eax
0832526d +0x84f:  movb   $0x1,(%eax)
08325270 +0x852:  jmp    0832584d <+0xe2f>
08325275 +0x857:  mov    0x10(%ebp),%eax
08325278 +0x85a:  movl   $0x2,(%eax)
0832527e +0x860:  mov    0x14(%ebp),%eax
08325281 +0x863:  movl   $0x1a,(%eax)
08325287 +0x869:  mov    0x18(%ebp),%eax
0832528a +0x86c:  movb   $0x1,(%eax)
0832528d +0x86f:  jmp    0832584d <+0xe2f>
08325292 +0x874:  mov    0x10(%ebp),%eax
08325295 +0x877:  movl   $0x2,(%eax)
0832529b +0x87d:  mov    0x14(%ebp),%eax
0832529e +0x880:  movl   $0x1b,(%eax)
083252a4 +0x886:  mov    0x18(%ebp),%eax
083252a7 +0x889:  movb   $0x1,(%eax)
083252aa +0x88c:  jmp    0832584d <+0xe2f>
083252af +0x891:  mov    0x10(%ebp),%eax
083252b2 +0x894:  movl   $0x2,(%eax)
083252b8 +0x89a:  mov    0x14(%ebp),%eax
083252bb +0x89d:  movl   $0x25,(%eax)
083252c1 +0x8a3:  mov    0x18(%ebp),%eax
083252c4 +0x8a6:  movb   $0x1,(%eax)
083252c7 +0x8a9:  jmp    0832584d <+0xe2f>
083252cc +0x8ae:  mov    0x10(%ebp),%eax
083252cf +0x8b1:  movl   $0x2,(%eax)
083252d5 +0x8b7:  mov    0x14(%ebp),%eax
083252d8 +0x8ba:  movl   $0x28,(%eax)
083252de +0x8c0:  mov    0x18(%ebp),%eax
083252e1 +0x8c3:  movb   $0x1,(%eax)
083252e4 +0x8c6:  jmp    0832584d <+0xe2f>
083252e9 +0x8cb:  mov    0x10(%ebp),%eax
083252ec +0x8ce:  movl   $0x2,(%eax)
083252f2 +0x8d4:  mov    0x14(%ebp),%eax
083252f5 +0x8d7:  movl   $0x2e,(%eax)
083252fb +0x8dd:  mov    0x18(%ebp),%eax
083252fe +0x8e0:  movb   $0x1,(%eax)
08325301 +0x8e3:  jmp    0832584d <+0xe2f>
08325306 +0x8e8:  mov    0x10(%ebp),%eax
08325309 +0x8eb:  movl   $0x2,(%eax)
0832530f +0x8f1:  mov    0x14(%ebp),%eax
08325312 +0x8f4:  movl   $0x30,(%eax)
08325318 +0x8fa:  mov    0x18(%ebp),%eax
0832531b +0x8fd:  movb   $0x1,(%eax)
0832531e +0x900:  jmp    0832584d <+0xe2f>
08325323 +0x905:  mov    0x10(%ebp),%eax
08325326 +0x908:  movl   $0x2,(%eax)
0832532c +0x90e:  mov    0x14(%ebp),%eax
0832532f +0x911:  movl   $0x1f,(%eax)
08325335 +0x917:  mov    0x18(%ebp),%eax
08325338 +0x91a:  movb   $0x1,(%eax)
0832533b +0x91d:  jmp    0832584d <+0xe2f>
08325340 +0x922:  mov    0x10(%ebp),%eax
08325343 +0x925:  movl   $0x2,(%eax)
08325349 +0x92b:  mov    0x14(%ebp),%eax
0832534c +0x92e:  movl   $0x46,(%eax)
08325352 +0x934:  mov    0x18(%ebp),%eax
08325355 +0x937:  movb   $0x1,(%eax)
08325358 +0x93a:  jmp    0832584d <+0xe2f>
0832535d +0x93f:  mov    0x10(%ebp),%eax
08325360 +0x942:  movl   $0x2,(%eax)
08325366 +0x948:  mov    0x14(%ebp),%eax
08325369 +0x94b:  movl   $0x1f,(%eax)
0832536f +0x951:  mov    0x18(%ebp),%eax
08325372 +0x954:  movb   $0x1,(%eax)
08325375 +0x957:  jmp    0832584d <+0xe2f>
0832537a +0x95c:  mov    0x10(%ebp),%eax
0832537d +0x95f:  movl   $0x2,(%eax)
08325383 +0x965:  mov    0x14(%ebp),%eax
08325386 +0x968:  movl   $0x20,(%eax)
0832538c +0x96e:  mov    0x18(%ebp),%eax
0832538f +0x971:  movb   $0x1,(%eax)
08325392 +0x974:  jmp    0832584d <+0xe2f>
08325397 +0x979:  mov    0x10(%ebp),%eax
0832539a +0x97c:  movl   $0x2,(%eax)
083253a0 +0x982:  mov    0x14(%ebp),%eax
083253a3 +0x985:  movl   $0x23,(%eax)
083253a9 +0x98b:  mov    0x18(%ebp),%eax
083253ac +0x98e:  movb   $0x1,(%eax)
083253af +0x991:  jmp    0832584d <+0xe2f>
083253b4 +0x996:  mov    0x10(%ebp),%eax
083253b7 +0x999:  movl   $0x2,(%eax)
083253bd +0x99f:  mov    0x14(%ebp),%eax
083253c0 +0x9a2:  movl   $0x21,(%eax)
083253c6 +0x9a8:  mov    0x18(%ebp),%eax
083253c9 +0x9ab:  movb   $0x1,(%eax)
083253cc +0x9ae:  jmp    0832584d <+0xe2f>
083253d1 +0x9b3:  mov    0x10(%ebp),%eax
083253d4 +0x9b6:  movl   $0x9,(%eax)
083253da +0x9bc:  mov    0x14(%ebp),%eax
083253dd +0x9bf:  movl   $0x0,(%eax)
083253e3 +0x9c5:  jmp    0832584d <+0xe2f>
083253e8 +0x9ca:  mov    0x10(%ebp),%eax
083253eb +0x9cd:  movl   $0x2,(%eax)
083253f1 +0x9d3:  mov    0x14(%ebp),%eax
083253f4 +0x9d6:  movl   $0x21,(%eax)
083253fa +0x9dc:  mov    0x18(%ebp),%eax
083253fd +0x9df:  movb   $0x1,(%eax)
08325400 +0x9e2:  jmp    0832584d <+0xe2f>
08325405 +0x9e7:  mov    0x10(%ebp),%eax
08325408 +0x9ea:  movl   $0x2,(%eax)
0832540e +0x9f0:  mov    0x14(%ebp),%eax
08325411 +0x9f3:  movl   $0x26,(%eax)
08325417 +0x9f9:  mov    0x18(%ebp),%eax
0832541a +0x9fc:  movb   $0x1,(%eax)
0832541d +0x9ff:  jmp    0832584d <+0xe2f>
08325422 +0xa04:  mov    0x10(%ebp),%eax
08325425 +0xa07:  movl   $0x2,(%eax)
0832542b +0xa0d:  mov    0x14(%ebp),%eax
0832542e +0xa10:  movl   $0x27,(%eax)
08325434 +0xa16:  mov    0x18(%ebp),%eax
08325437 +0xa19:  movb   $0x1,(%eax)
0832543a +0xa1c:  jmp    0832584d <+0xe2f>
0832543f +0xa21:  mov    0x10(%ebp),%eax
08325442 +0xa24:  movl   $0x2,(%eax)
08325448 +0xa2a:  mov    0x14(%ebp),%eax
0832544b +0xa2d:  movl   $0x29,(%eax)
08325451 +0xa33:  mov    0x18(%ebp),%eax
08325454 +0xa36:  movb   $0x1,(%eax)
08325457 +0xa39:  jmp    0832584d <+0xe2f>
0832545c +0xa3e:  mov    0x10(%ebp),%eax
0832545f +0xa41:  movl   $0x2,(%eax)
08325465 +0xa47:  mov    0x14(%ebp),%eax
08325468 +0xa4a:  movl   $0x2c,(%eax)
0832546e +0xa50:  mov    0x18(%ebp),%eax
08325471 +0xa53:  movb   $0x1,(%eax)
08325474 +0xa56:  jmp    0832584d <+0xe2f>
08325479 +0xa5b:  mov    0x10(%ebp),%eax
0832547c +0xa5e:  movl   $0x2,(%eax)
08325482 +0xa64:  mov    0x14(%ebp),%eax
08325485 +0xa67:  movl   $0x21,(%eax)
0832548b +0xa6d:  mov    0x18(%ebp),%eax
0832548e +0xa70:  movb   $0x1,(%eax)
08325491 +0xa73:  jmp    0832584d <+0xe2f>
08325496 +0xa78:  mov    0x10(%ebp),%eax
08325499 +0xa7b:  movl   $0x2,(%eax)
0832549f +0xa81:  mov    0x14(%ebp),%eax
083254a2 +0xa84:  movl   $0x21,(%eax)
083254a8 +0xa8a:  mov    0x18(%ebp),%eax
083254ab +0xa8d:  movb   $0x1,(%eax)
083254ae +0xa90:  jmp    0832584d <+0xe2f>
083254b3 +0xa95:  mov    0x10(%ebp),%eax
083254b6 +0xa98:  movl   $0x2,(%eax)
083254bc +0xa9e:  mov    0x14(%ebp),%eax
083254bf +0xaa1:  movl   $0x23,(%eax)
083254c5 +0xaa7:  mov    0x18(%ebp),%eax
083254c8 +0xaaa:  movb   $0x1,(%eax)
083254cb +0xaad:  jmp    0832584d <+0xe2f>
083254d0 +0xab2:  mov    0x10(%ebp),%eax
083254d3 +0xab5:  movl   $0x2,(%eax)
083254d9 +0xabb:  mov    0x14(%ebp),%eax
083254dc +0xabe:  movl   $0x26,(%eax)
083254e2 +0xac4:  mov    0x18(%ebp),%eax
083254e5 +0xac7:  movb   $0x1,(%eax)
083254e8 +0xaca:  jmp    0832584d <+0xe2f>
083254ed +0xacf:  mov    0x10(%ebp),%eax
083254f0 +0xad2:  movl   $0xa,(%eax)
083254f6 +0xad8:  mov    0x14(%ebp),%eax
083254f9 +0xadb:  movl   $0x0,(%eax)
083254ff +0xae1:  jmp    0832584d <+0xe2f>
08325504 +0xae6:  mov    0x10(%ebp),%eax
08325507 +0xae9:  movl   $0x2,(%eax)
0832550d +0xaef:  mov    0x14(%ebp),%eax
08325510 +0xaf2:  movl   $0x4c,(%eax)
08325516 +0xaf8:  mov    0x18(%ebp),%eax
08325519 +0xafb:  movb   $0x1,(%eax)
0832551c +0xafe:  jmp    0832584d <+0xe2f>
08325521 +0xb03:  mov    0x10(%ebp),%eax
08325524 +0xb06:  movl   $0x2,(%eax)
0832552a +0xb0c:  mov    0x14(%ebp),%eax
0832552d +0xb0f:  movl   $0x4d,(%eax)
08325533 +0xb15:  mov    0x18(%ebp),%eax
08325536 +0xb18:  movb   $0x1,(%eax)
08325539 +0xb1b:  jmp    0832584d <+0xe2f>
0832553e +0xb20:  mov    0x10(%ebp),%eax
08325541 +0xb23:  movl   $0x2,(%eax)
08325547 +0xb29:  mov    0x14(%ebp),%eax
0832554a +0xb2c:  movl   $0x4e,(%eax)
08325550 +0xb32:  mov    0x18(%ebp),%eax
08325553 +0xb35:  movb   $0x1,(%eax)
08325556 +0xb38:  jmp    0832584d <+0xe2f>
0832555b +0xb3d:  mov    0x10(%ebp),%eax
0832555e +0xb40:  movl   $0x2,(%eax)
08325564 +0xb46:  mov    0x14(%ebp),%eax
08325567 +0xb49:  movl   $0x4f,(%eax)
0832556d +0xb4f:  mov    0x18(%ebp),%eax
08325570 +0xb52:  movb   $0x1,(%eax)
08325573 +0xb55:  jmp    0832584d <+0xe2f>
08325578 +0xb5a:  mov    0x10(%ebp),%eax
0832557b +0xb5d:  movl   $0x2,(%eax)
08325581 +0xb63:  mov    0x14(%ebp),%eax
08325584 +0xb66:  movl   $0x4f,(%eax)
0832558a +0xb6c:  mov    0x18(%ebp),%eax
0832558d +0xb6f:  movb   $0x1,(%eax)
08325590 +0xb72:  jmp    0832584d <+0xe2f>
08325595 +0xb77:  mov    0x10(%ebp),%eax
08325598 +0xb7a:  movl   $0x2,(%eax)
0832559e +0xb80:  mov    0x14(%ebp),%eax
083255a1 +0xb83:  movl   $0x50,(%eax)
083255a7 +0xb89:  mov    0x18(%ebp),%eax
083255aa +0xb8c:  movb   $0x1,(%eax)
083255ad +0xb8f:  jmp    0832584d <+0xe2f>
083255b2 +0xb94:  mov    0x10(%ebp),%eax
083255b5 +0xb97:  movl   $0x2,(%eax)
083255bb +0xb9d:  mov    0x14(%ebp),%eax
083255be +0xba0:  movl   $0x53,(%eax)
083255c4 +0xba6:  mov    0x18(%ebp),%eax
083255c7 +0xba9:  movb   $0x1,(%eax)
083255ca +0xbac:  jmp    0832584d <+0xe2f>
083255cf +0xbb1:  mov    0x10(%ebp),%eax
083255d2 +0xbb4:  movl   $0x2,(%eax)
083255d8 +0xbba:  mov    0x14(%ebp),%eax
083255db +0xbbd:  movl   $0x54,(%eax)
083255e1 +0xbc3:  mov    0x18(%ebp),%eax
083255e4 +0xbc6:  movb   $0x1,(%eax)
083255e7 +0xbc9:  jmp    0832584d <+0xe2f>
083255ec +0xbce:  mov    0x10(%ebp),%eax
083255ef +0xbd1:  movl   $0x2,(%eax)
083255f5 +0xbd7:  mov    0x14(%ebp),%eax
083255f8 +0xbda:  movl   $0x57,(%eax)
083255fe +0xbe0:  mov    0x18(%ebp),%eax
08325601 +0xbe3:  movb   $0x1,(%eax)
08325604 +0xbe6:  jmp    0832584d <+0xe2f>
08325609 +0xbeb:  mov    0x10(%ebp),%eax
0832560c +0xbee:  movl   $0x2,(%eax)
08325612 +0xbf4:  mov    0x14(%ebp),%eax
08325615 +0xbf7:  movl   $0x5d,(%eax)
0832561b +0xbfd:  mov    0x18(%ebp),%eax
0832561e +0xc00:  movb   $0x1,(%eax)
08325621 +0xc03:  jmp    0832584d <+0xe2f>
08325626 +0xc08:  mov    0x10(%ebp),%eax
08325629 +0xc0b:  movl   $0x2,(%eax)
0832562f +0xc11:  mov    0x14(%ebp),%eax
08325632 +0xc14:  movl   $0x59,(%eax)
08325638 +0xc1a:  mov    0x18(%ebp),%eax
0832563b +0xc1d:  movb   $0x1,(%eax)
0832563e +0xc20:  jmp    0832584d <+0xe2f>
08325643 +0xc25:  mov    0x10(%ebp),%eax
08325646 +0xc28:  movl   $0x2,(%eax)
0832564c +0xc2e:  mov    0x14(%ebp),%eax
0832564f +0xc31:  movl   $0x5a,(%eax)
08325655 +0xc37:  mov    0x18(%ebp),%eax
08325658 +0xc3a:  movb   $0x1,(%eax)
0832565b +0xc3d:  jmp    0832584d <+0xe2f>
08325660 +0xc42:  mov    0x10(%ebp),%eax
08325663 +0xc45:  movl   $0x2,(%eax)
08325669 +0xc4b:  mov    0x14(%ebp),%eax
0832566c +0xc4e:  movl   $0x5b,(%eax)
08325672 +0xc54:  mov    0x18(%ebp),%eax
08325675 +0xc57:  movb   $0x1,(%eax)
08325678 +0xc5a:  jmp    0832584d <+0xe2f>
0832567d +0xc5f:  mov    0x10(%ebp),%eax
08325680 +0xc62:  movl   $0x2,(%eax)
08325686 +0xc68:  mov    0x14(%ebp),%eax
08325689 +0xc6b:  movl   $0x5c,(%eax)
0832568f +0xc71:  mov    0x18(%ebp),%eax
08325692 +0xc74:  movb   $0x1,(%eax)
08325695 +0xc77:  jmp    0832584d <+0xe2f>
0832569a +0xc7c:  mov    0x10(%ebp),%eax
0832569d +0xc7f:  movl   $0xd,(%eax)
083256a3 +0xc85:  mov    0x14(%ebp),%eax
083256a6 +0xc88:  movl   $0xa,(%eax)
083256ac +0xc8e:  mov    0x18(%ebp),%eax
083256af +0xc91:  movb   $0x1,(%eax)
083256b2 +0xc94:  jmp    0832584d <+0xe2f>
083256b7 +0xc99:  mov    0x10(%ebp),%eax
083256ba +0xc9c:  movl   $0xd,(%eax)
083256c0 +0xca2:  mov    0x14(%ebp),%eax
083256c3 +0xca5:  movl   $0x32,(%eax)
083256c9 +0xcab:  mov    0x18(%ebp),%eax
083256cc +0xcae:  movb   $0x1,(%eax)
083256cf +0xcb1:  jmp    0832584d <+0xe2f>
083256d4 +0xcb6:  mov    0x10(%ebp),%eax
083256d7 +0xcb9:  movl   $0xd,(%eax)
083256dd +0xcbf:  mov    0x14(%ebp),%eax
083256e0 +0xcc2:  movl   $0x64,(%eax)
083256e6 +0xcc8:  mov    0x18(%ebp),%eax
083256e9 +0xccb:  movb   $0x1,(%eax)
083256ec +0xcce:  jmp    0832584d <+0xe2f>
083256f1 +0xcd3:  mov    0x10(%ebp),%eax
083256f4 +0xcd6:  movl   $0xd,(%eax)
083256fa +0xcdc:  mov    0x14(%ebp),%eax
083256fd +0xcdf:  movl   $0x1f4,(%eax)
08325703 +0xce5:  mov    0x18(%ebp),%eax
08325706 +0xce8:  movb   $0x1,(%eax)
08325709 +0xceb:  jmp    0832584d <+0xe2f>
0832570e +0xcf0:  mov    0x10(%ebp),%eax
08325711 +0xcf3:  movl   $0xd,(%eax)
08325717 +0xcf9:  mov    0x14(%ebp),%eax
0832571a +0xcfc:  movl   $0x3e8,(%eax)
08325720 +0xd02:  mov    0x18(%ebp),%eax
08325723 +0xd05:  movb   $0x1,(%eax)
08325726 +0xd08:  jmp    0832584d <+0xe2f>
0832572b +0xd0d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08325730 +0xd12:  mov    0xc(%ebp),%edx
08325733 +0xd15:  mov    %edx,0x4(%esp)
08325737 +0xd19:  mov    %eax,(%esp)
0832573a +0xd1c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0832573f +0xd21:  mov    %eax,-0xc(%ebp)
08325742 +0xd24:  cmpl   $0x0,-0xc(%ebp)
08325746 +0xd28:  je     0832575e <+0xd40>
08325748 +0xd2a:  mov    -0xc(%ebp),%eax
0832574b +0xd2d:  mov    %eax,(%esp)
0832574e +0xd30:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08325753 +0xd35:  test   %al,%al
08325755 +0xd37:  je     0832575e <+0xd40>
08325757 +0xd39:  mov    $0x1,%eax
0832575c +0xd3e:  jmp    08325763 <+0xd45>
0832575e +0xd40:  mov    $0x0,%eax
08325763 +0xd45:  test   %al,%al
08325765 +0xd47:  je     08325846 <+0xe28>
0832576b +0xd4d:  mov    -0xc(%ebp),%eax
0832576e +0xd50:  mov    (%eax),%eax
08325770 +0xd52:  add    $0xc,%eax
08325773 +0xd55:  mov    (%eax),%edx
08325775 +0xd57:  mov    -0xc(%ebp),%eax
08325778 +0xd5a:  mov    %eax,(%esp)
0832577b +0xd5d:  call   *%edx
0832577d +0xd5f:  cmp    $0x26,%eax
08325780 +0xd62:  sete   %al
08325783 +0xd65:  test   %al,%al
08325785 +0xd67:  je     08325791 <+0xd73>
08325787 +0xd69:  mov    $0x0,%eax
0832578c +0xd6e:  jmp    08325852 <+0xe34>
08325791 +0xd73:  mov    -0xc(%ebp),%eax
08325794 +0xd76:  mov    (%eax),%eax
08325796 +0xd78:  add    $0xc,%eax
08325799 +0xd7b:  mov    (%eax),%edx
0832579b +0xd7d:  mov    -0xc(%ebp),%eax
0832579e +0xd80:  mov    %eax,(%esp)
083257a1 +0xd83:  call   *%edx
083257a3 +0xd85:  cmp    $0xe,%eax
083257a6 +0xd88:  sete   %al
083257a9 +0xd8b:  test   %al,%al
083257ab +0xd8d:  je     083257c6 <+0xda8>
083257ad +0xd8f:  mov    0x10(%ebp),%eax
083257b0 +0xd92:  movl   $0x5,(%eax)
083257b6 +0xd98:  mov    0x18(%ebp),%eax
083257b9 +0xd9b:  movb   $0x1,(%eax)
083257bc +0xd9e:  mov    $0x1,%eax
083257c1 +0xda3:  jmp    08325852 <+0xe34>
083257c6 +0xda8:  mov    -0xc(%ebp),%eax
083257c9 +0xdab:  mov    (%eax),%eax
083257cb +0xdad:  add    $0xc,%eax
083257ce +0xdb0:  mov    (%eax),%edx
083257d0 +0xdb2:  mov    -0xc(%ebp),%eax
083257d3 +0xdb5:  mov    %eax,(%esp)
083257d6 +0xdb8:  call   *%edx
083257d8 +0xdba:  cmp    $0xf,%eax
083257db +0xdbd:  je     083257f4 <+0xdd6>
083257dd +0xdbf:  mov    -0xc(%ebp),%eax
083257e0 +0xdc2:  mov    (%eax),%eax
083257e2 +0xdc4:  add    $0xc,%eax
083257e5 +0xdc7:  mov    (%eax),%edx
083257e7 +0xdc9:  mov    -0xc(%ebp),%eax
083257ea +0xdcc:  mov    %eax,(%esp)
083257ed +0xdcf:  call   *%edx
083257ef +0xdd1:  cmp    $0x10,%eax
083257f2 +0xdd4:  jne    083257fb <+0xddd>
083257f4 +0xdd6:  mov    $0x1,%eax
083257f9 +0xddb:  jmp    08325800 <+0xde2>
083257fb +0xddd:  mov    $0x0,%eax
08325800 +0xde2:  test   %al,%al
08325802 +0xde4:  je     0832581a <+0xdfc>
08325804 +0xde6:  mov    0x10(%ebp),%eax
08325807 +0xde9:  movl   $0x6,(%eax)
0832580d +0xdef:  mov    0x18(%ebp),%eax
08325810 +0xdf2:  movb   $0x1,(%eax)
08325813 +0xdf5:  mov    $0x1,%eax
08325818 +0xdfa:  jmp    08325852 <+0xe34>
0832581a +0xdfc:  mov    -0xc(%ebp),%eax
0832581d +0xdff:  mov    (%eax),%eax
0832581f +0xe01:  add    $0xc,%eax
08325822 +0xe04:  mov    (%eax),%edx
08325824 +0xe06:  mov    -0xc(%ebp),%eax
08325827 +0xe09:  mov    %eax,(%esp)
0832582a +0xe0c:  call   *%edx
0832582c +0xe0e:  cmp    $0x22,%eax
0832582f +0xe11:  sete   %al
08325832 +0xe14:  test   %al,%al
08325834 +0xe16:  je     08325846 <+0xe28>
08325836 +0xe18:  mov    0x10(%ebp),%eax
08325839 +0xe1b:  movl   $0xc,(%eax)
0832583f +0xe21:  mov    $0x1,%eax
08325844 +0xe26:  jmp    08325852 <+0xe34>
08325846 +0xe28:  mov    $0x0,%eax
0832584b +0xe2d:  jmp    08325852 <+0xe34>
0832584d +0xe2f:  mov    $0x1,%eax
08325852 +0xe34:  leave
08325853 +0xe35:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::IsSpecialItem @ 0x8324a1e

/* WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&) */

undefined4 __thiscall
WongWork::CCeraShop::IsSpecialItem
          (CCeraShop *this,int param_1,int *param_2,int *param_3,bool *param_4)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  CItem *this_01;
  int iVar3;
  
  if (param_1 == 0x334) {
    *param_2 = 2;
    *param_3 = 0x29;
    *param_4 = true;
    return 1;
  }
  if (param_1 < 0x335) {
    if (param_1 == 0x2d) {
      *param_2 = 2;
      *param_3 = 0x19;
      *param_4 = true;
      return 1;
    }
    if (param_1 < 0x2e) {
      if (param_1 == 0x16) {
        *param_2 = 2;
        *param_3 = 0xd;
        *param_4 = false;
        return 1;
      }
      if (param_1 < 0x17) {
        if (param_1 == 0x10) {
          *param_2 = 4;
          *param_3 = 8;
          return 1;
        }
        if (param_1 < 0x11) {
          if (param_1 == 6) {
            *param_2 = 1;
            *param_3 = 0x98;
            return 1;
          }
          if (param_1 < 7) {
            if (param_1 == 5) {
              *param_2 = 1;
              *param_3 = 0x18;
              return 1;
            }
          }
          else {
            if (param_1 == 9) {
              *param_2 = 2;
              *param_3 = 1;
              return 1;
            }
            if (param_1 == 0xb) {
              *param_2 = 2;
              *param_3 = 3;
              return 1;
            }
          }
        }
        else {
          if (param_1 == 0x12) {
            *param_2 = 2;
            *param_3 = 9;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x12) {
            *param_2 = 3;
            *param_3 = 7;
            return 1;
          }
          if (param_1 == 0x13) {
            *param_2 = 2;
            *param_3 = 10;
            *param_4 = true;
            return 1;
          }
          if (param_1 == 0x14) {
            *param_2 = 2;
            *param_3 = 0xb;
            *param_4 = true;
            return 1;
          }
        }
      }
      else {
        if (param_1 == 0x20) {
          *param_2 = 2;
          *param_3 = 0x13;
          *param_4 = true;
          return 1;
        }
        if (param_1 < 0x21) {
          if (param_1 == 0x1d) {
            *param_2 = 2;
            *param_3 = 0x10;
            *param_4 = false;
            return 1;
          }
          if (param_1 < 0x1e) {
            if (param_1 == 0x17) {
              *param_2 = 2;
              *param_3 = 0xe;
              *param_4 = false;
              return 1;
            }
          }
          else {
            if (param_1 == 0x1e) {
              *param_2 = 2;
              *param_3 = 0x11;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x1f) {
              *param_2 = 2;
              *param_3 = 0x12;
              *param_4 = true;
              return 1;
            }
          }
        }
        else {
          if (param_1 == 0x23) {
            *param_2 = 2;
            *param_3 = 0x16;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x24) {
            if (param_1 == 0x21) {
              *param_2 = 2;
              *param_3 = 0x14;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x22) {
              *param_2 = 2;
              *param_3 = 0x15;
              *param_4 = true;
              return 1;
            }
          }
          else {
            if (param_1 == 0x2b) {
              *param_2 = 2;
              *param_3 = 0x17;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x2c) {
              *param_2 = 2;
              *param_3 = 0x18;
              *param_4 = true;
              return 1;
            }
          }
        }
      }
    }
    else {
      if (param_1 == 0xc2) {
        *param_2 = 2;
        *param_3 = 0x1f;
        *param_4 = true;
        return 1;
      }
      if (param_1 < 0xc3) {
        if (param_1 < 0x3f) {
          if (param_1 < 0x39) {
            if (param_1 == 0x2f) {
              *param_2 = 2;
              *param_3 = 0x1b;
              *param_4 = true;
              return 1;
            }
            if (param_1 < 0x2f) {
              *param_2 = 2;
              *param_3 = 0x1a;
              *param_4 = true;
              return 1;
            }
            if (param_1 != 0x32) goto LAB_0832572b;
          }
LAB_08324edd:
          *param_2 = 7;
          *param_3 = 0x10;
          return 1;
        }
        if (param_1 == 0x6e) {
          *param_2 = 1;
          *param_3 = 0x28;
          return 1;
        }
        if (param_1 < 0x6f) {
          if (param_1 == 0x44) {
            *param_2 = 1;
            *param_3 = 0x48;
            return 1;
          }
        }
        else {
          if (param_1 == 0x89) {
            *param_2 = 2;
            *param_3 = 0x1d;
            *param_4 = true;
            return 1;
          }
          if (param_1 == 0xc1) {
            *param_2 = 2;
            *param_3 = 0x1e;
            *param_4 = true;
            return 1;
          }
        }
      }
      else {
        if (param_1 == 200) {
          *param_2 = 2;
          *param_3 = 0x28;
          *param_4 = true;
          return 1;
        }
        if (param_1 < 0xc9) {
          if (param_1 == 0xc4) {
            *param_2 = 2;
            *param_3 = 0x20;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0xc4) {
            *param_2 = 9;
            *param_3 = 0;
            return 1;
          }
          if (param_1 == 0xc5) {
            *param_2 = 2;
            *param_3 = 0x21;
            *param_4 = true;
            return 1;
          }
          if (param_1 == 0xc6) {
            *param_2 = 2;
            *param_3 = 0x21;
            *param_4 = true;
            return 1;
          }
        }
        else {
          if (param_1 == 0x2e6) {
            *param_2 = 2;
            *param_3 = 0x25;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x2e7) {
            if (param_1 == 0x2d0) {
              *param_2 = 2;
              *param_3 = 0x23;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x2e5) {
              *param_2 = 2;
              *param_3 = 0x24;
              *param_4 = true;
              return 1;
            }
          }
          else {
            if (param_1 == 0x2e7) {
              *param_2 = 2;
              *param_3 = 0x26;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x2e8) {
              *param_2 = 2;
              *param_3 = 0x27;
              *param_4 = true;
              return 1;
            }
          }
        }
      }
    }
  }
  else {
    if (param_1 == 0x2898c0) {
      *param_2 = 2;
      *param_3 = 0x53;
      *param_4 = true;
      return 1;
    }
    if (param_1 < 0x2898c1) {
      if (param_1 == 0x2897c2) {
        *param_2 = 2;
        *param_3 = 0x21;
        *param_4 = true;
        return 1;
      }
      if (param_1 < 0x2897c3) {
        if (param_1 == 0x2896d2) {
          *param_2 = 2;
          *param_3 = 0x2f;
          *param_4 = true;
          return 1;
        }
        if (param_1 < 0x2896d3) {
          if (param_1 == 0x398) {
            *param_2 = 2;
            *param_3 = 0x2c;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x399) {
            if (param_1 == 0x335) {
              *param_2 = 10;
              *param_3 = 0;
              return 1;
            }
          }
          else {
            if (param_1 == 0x2896ac) {
              *param_2 = 2;
              *param_3 = 0x2d;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x2896ad) {
              *param_2 = 2;
              *param_3 = 0x2e;
              *param_4 = true;
              return 1;
            }
          }
        }
        else if (param_1 < 0x28978d) {
          if (0x28978a < param_1) goto LAB_08324edd;
          if (param_1 == 0x2896d3) {
            *param_2 = 2;
            *param_3 = 0x30;
            *param_4 = true;
            return 1;
          }
        }
        else if (param_1 == 0x28978f) {
          *param_2 = 8;
          *param_3 = 1;
          return 1;
        }
      }
      else {
        if (param_1 == 0x289832) {
          *param_2 = 2;
          *param_3 = 0x26;
          *param_4 = true;
          return 1;
        }
        if (param_1 < 0x289833) {
          if (param_1 == 0x289806) {
            *param_2 = 2;
            *param_3 = 0x21;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x289807) {
            if (param_1 - 0x2897c8U < 2) {
              *param_2 = 0xb;
              *param_3 = 8;
              return 1;
            }
          }
          else if (param_1 == 0x289831) {
            *param_2 = 2;
            *param_3 = 0x23;
            *param_4 = true;
            return 1;
          }
        }
        else {
          if (param_1 == 0x28983a) {
            *param_2 = 2;
            *param_3 = 0x4d;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x28983b) {
            if (param_1 == 0x289838) {
              *param_2 = 2;
              *param_3 = 0x4f;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x289839) {
              *param_2 = 2;
              *param_3 = 0x4c;
              *param_4 = true;
              return 1;
            }
          }
          else {
            if (param_1 == 0x28983b) {
              *param_2 = 2;
              *param_3 = 0x4e;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x2898bf) {
              *param_2 = 2;
              *param_3 = 0x50;
              *param_4 = true;
              return 1;
            }
          }
        }
      }
    }
    else {
      if (param_1 == 0x28d172) {
        *param_2 = 2;
        *param_3 = 0x2b;
        *param_4 = true;
        return 1;
      }
      if (param_1 < 0x28d173) {
        if (param_1 == 0x28beba) {
          *param_2 = 2;
          *param_3 = 0x46;
          *param_4 = true;
          return 1;
        }
        if (param_1 < 0x28bebb) {
          if (param_1 == 0x2898c2) {
            *param_2 = 2;
            *param_3 = 0x57;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x2898c2) {
            *param_2 = 2;
            *param_3 = 0x54;
            *param_4 = true;
            return 1;
          }
          if (param_1 == 0x28995f) {
            *param_2 = 2;
            *param_3 = 0x4f;
            *param_4 = true;
            return 1;
          }
          if (param_1 == 0x28bdb9) {
            *param_2 = 1;
            *param_3 = 0x28;
            return 1;
          }
        }
        else {
          if (param_1 == 0x28d152) {
            *param_2 = 2;
            *param_3 = 0x17;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x28d153) {
            if (param_1 == 0x28d151) {
              *param_2 = 2;
              *param_3 = 0x11;
              *param_4 = true;
              return 1;
            }
          }
          else {
            if (param_1 == 0x28d154) {
              *param_2 = 2;
              *param_3 = 0x1f;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x28d171) {
              *param_2 = 4;
              *param_3 = 0x2a;
              return 1;
            }
          }
        }
      }
      else {
        if (param_1 == 0x989807) {
          *param_2 = 2;
          *param_3 = 0x5d;
          *param_4 = true;
          return 1;
        }
        if (param_1 < 0x989808) {
          if (param_1 == 0x989804) {
            *param_2 = 2;
            *param_3 = 0x59;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x989805) {
            if (param_1 == 0x989803) {
              *param_2 = 2;
              *param_3 = 0x5c;
              *param_4 = true;
              return 1;
            }
          }
          else {
            if (param_1 == 0x989805) {
              *param_2 = 2;
              *param_3 = 0x5a;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x989806) {
              *param_2 = 2;
              *param_3 = 0x5b;
              *param_4 = true;
              return 1;
            }
          }
        }
        else {
          if (param_1 == 0x2920915f) {
            *param_2 = 0xd;
            *param_3 = 100;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x29209160) {
            if (param_1 == 0x2920915d) {
              *param_2 = 0xd;
              *param_3 = 10;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x2920915e) {
              *param_2 = 0xd;
              *param_3 = 0x32;
              *param_4 = true;
              return 1;
            }
          }
          else {
            if (param_1 == 0x29209160) {
              *param_2 = 0xd;
              *param_3 = 500;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x29209161) {
              *param_2 = 0xd;
              *param_3 = 1000;
              *param_4 = true;
              return 1;
            }
          }
        }
      }
    }
  }
LAB_0832572b:
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
  if ((this_01 == (CItem *)0x0) || (cVar2 = CItem::is_stackable(this_01), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
    if (iVar3 == 0x26) {
      return 0;
    }
    iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
    if (iVar3 == 0xe) {
      *param_2 = 5;
      *param_4 = true;
      return 1;
    }
    iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
    if ((iVar3 == 0xf) || (iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01), iVar3 == 0x10)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *param_2 = 6;
      *param_4 = true;
      return 1;
    }
    iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
    if (iVar3 == 0x22) {
      *param_2 = 0xc;
      return 1;
    }
  }
  return 0;
}
```
