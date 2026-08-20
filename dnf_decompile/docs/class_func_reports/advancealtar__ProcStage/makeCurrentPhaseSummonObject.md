# makeCurrentPhaseSummonObject

`_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv`

`advancealtar::ProcStage::makeCurrentPhaseSummonObject()`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812eba8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812eba8  _ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv
#           advancealtar::ProcStage::makeCurrentPhaseSummonObject()
# range [0x0812eba8, 0x0812f0f9]
0812eba8 +0x000:  push   %ebp
0812eba9 +0x001:  mov    %esp,%ebp
0812ebab +0x003:  push   %esi
0812ebac +0x004:  push   %ebx
0812ebad +0x005:  sub    $0xb0,%esp
0812ebb3 +0x00b:  mov    0x8(%ebp),%eax
0812ebb6 +0x00e:  mov    0x90(%eax),%eax
0812ebbc +0x014:  test   %eax,%eax
0812ebbe +0x016:  jne    0812ebca <+0x22>
0812ebc0 +0x018:  mov    $0x0,%ebx
0812ebc5 +0x01d:  jmp    0812f0ed <+0x545>
0812ebca +0x022:  mov    0x8(%ebp),%eax
0812ebcd +0x025:  mov    0x90(%eax),%eax
0812ebd3 +0x02b:  mov    %eax,-0x3c(%ebp)
0812ebd6 +0x02e:  mov    0x8(%ebp),%eax
0812ebd9 +0x031:  mov    %eax,(%esp)
0812ebdc +0x034:  call   0812eb5a <_ZNK12advancealtar9ProcStage13isEndAllPhaseEv>  ; advancealtar::ProcStage::isEndAllPhase() const
0812ebe1 +0x039:  test   %al,%al
0812ebe3 +0x03b:  je     0812ebef <+0x47>
0812ebe5 +0x03d:  mov    $0x0,%ebx
0812ebea +0x042:  jmp    0812f0ed <+0x545>
0812ebef +0x047:  mov    0x8(%ebp),%eax
0812ebf2 +0x04a:  mov    0xc(%eax),%eax
0812ebf5 +0x04d:  mov    %eax,0x4(%esp)
0812ebf9 +0x051:  mov    -0x3c(%ebp),%eax
0812ebfc +0x054:  mov    %eax,(%esp)
0812ebff +0x057:  call   081359dc <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x15e3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x15e3
0812ec04 +0x05c:  mov    %eax,-0x38(%ebp)
0812ec07 +0x05f:  mov    0x8(%ebp),%eax
0812ec0a +0x062:  mov    0xc(%eax),%eax
0812ec0d +0x065:  lea    0x1(%eax),%edx
0812ec10 +0x068:  mov    0x8(%ebp),%eax
0812ec13 +0x06b:  mov    %edx,0xc(%eax)
0812ec16 +0x06e:  mov    0x8(%ebp),%eax
0812ec19 +0x071:  add    $0x18,%eax
0812ec1c +0x074:  mov    %eax,(%esp)
0812ec1f +0x077:  call   08134820 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x427>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x427
0812ec24 +0x07c:  mov    %eax,-0x34(%ebp)
0812ec27 +0x07f:  mov    -0x38(%ebp),%eax
0812ec2a +0x082:  mov    (%eax),%eax
0812ec2c +0x084:  mov    %eax,-0x30(%ebp)
0812ec2f +0x087:  mov    -0x30(%ebp),%eax
0812ec32 +0x08a:  mov    %eax,-0x2c(%ebp)
0812ec35 +0x08d:  mov    0x8(%ebp),%eax
0812ec38 +0x090:  mov    0x10(%eax),%eax
0812ec3b +0x093:  add    %eax,-0x30(%ebp)
0812ec3e +0x096:  mov    -0x38(%ebp),%eax
0812ec41 +0x099:  add    $0x8,%eax
0812ec44 +0x09c:  mov    %eax,-0x28(%ebp)
0812ec47 +0x09f:  lea    -0x78(%ebp),%eax
0812ec4a +0x0a2:  mov    -0x28(%ebp),%edx
0812ec4d +0x0a5:  mov    %edx,0x4(%esp)
0812ec51 +0x0a9:  mov    %eax,(%esp)
0812ec54 +0x0ac:  call   081359f6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x15fd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x15fd
0812ec59 +0x0b1:  sub    $0x4,%esp
0812ec5c +0x0b4:  lea    -0x7c(%ebp),%eax
0812ec5f +0x0b7:  mov    -0x28(%ebp),%edx
0812ec62 +0x0ba:  mov    %edx,0x4(%esp)
0812ec66 +0x0be:  mov    %eax,(%esp)
0812ec69 +0x0c1:  call   08135a22 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1629>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1629
0812ec6e +0x0c6:  sub    $0x4,%esp
0812ec71 +0x0c9:  lea    -0x80(%ebp),%eax
0812ec74 +0x0cc:  mov    -0x28(%ebp),%edx
0812ec77 +0x0cf:  mov    %edx,0x4(%esp)
0812ec7b +0x0d3:  mov    %eax,(%esp)
0812ec7e +0x0d6:  call   08135a22 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1629>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1629
0812ec83 +0x0db:  sub    $0x4,%esp
0812ec86 +0x0de:  jmp    0812ed2a <+0x182>
0812ec8b +0x0e3:  lea    -0x78(%ebp),%eax
0812ec8e +0x0e6:  mov    %eax,(%esp)
0812ec91 +0x0e9:  call   08135aae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x16b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x16b5
0812ec96 +0x0ee:  movzwl 0x8(%eax),%eax
0812ec9a +0x0f2:  cmp    $0xffff,%ax
0812ec9e +0x0f6:  jne    0812ecbc <+0x114>
0812eca0 +0x0f8:  lea    -0x78(%ebp),%eax
0812eca3 +0x0fb:  mov    %eax,(%esp)
0812eca6 +0x0fe:  call   08135aae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x16b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x16b5
0812ecab +0x103:  movzwl 0xa(%eax),%eax
0812ecaf +0x107:  cmp    $0xffff,%ax
0812ecb3 +0x10b:  jne    0812ecbc <+0x114>
0812ecb5 +0x10d:  mov    $0x1,%eax
0812ecba +0x112:  jmp    0812ecc1 <+0x119>
0812ecbc +0x114:  mov    $0x0,%eax
0812ecc1 +0x119:  test   %al,%al
0812ecc3 +0x11b:  je     0812eccd <+0x125>
0812ecc5 +0x11d:  mov    -0x78(%ebp),%eax
0812ecc8 +0x120:  mov    %eax,-0x80(%ebp)
0812eccb +0x123:  jmp    0812ed0d <+0x165>
0812eccd +0x125:  lea    -0x78(%ebp),%eax
0812ecd0 +0x128:  mov    %eax,(%esp)
0812ecd3 +0x12b:  call   08135aae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x16b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x16b5
0812ecd8 +0x130:  movzwl 0x8(%eax),%eax
0812ecdc +0x134:  cwtl
0812ecdd +0x135:  cmp    -0x34(%ebp),%eax
0812ece0 +0x138:  jg     0812ecfe <+0x156>
0812ece2 +0x13a:  lea    -0x78(%ebp),%eax
0812ece5 +0x13d:  mov    %eax,(%esp)
0812ece8 +0x140:  call   08135aae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x16b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x16b5
0812eced +0x145:  movzwl 0xa(%eax),%eax
0812ecf1 +0x149:  cwtl
0812ecf2 +0x14a:  cmp    -0x34(%ebp),%eax
0812ecf5 +0x14d:  jl     0812ecfe <+0x156>
0812ecf7 +0x14f:  mov    $0x1,%eax
0812ecfc +0x154:  jmp    0812ed03 <+0x15b>
0812ecfe +0x156:  mov    $0x0,%eax
0812ed03 +0x15b:  test   %al,%al
0812ed05 +0x15d:  je     0812ed0d <+0x165>
0812ed07 +0x15f:  mov    -0x78(%ebp),%eax
0812ed0a +0x162:  mov    %eax,-0x7c(%ebp)
0812ed0d +0x165:  lea    -0x70(%ebp),%eax
0812ed10 +0x168:  movl   $0x0,0x8(%esp)
0812ed18 +0x170:  lea    -0x78(%ebp),%edx
0812ed1b +0x173:  mov    %edx,0x4(%esp)
0812ed1f +0x177:  mov    %eax,(%esp)
0812ed22 +0x17a:  call   08135a7a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1681>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1681
0812ed27 +0x17f:  sub    $0x4,%esp
0812ed2a +0x182:  lea    -0x74(%ebp),%eax
0812ed2d +0x185:  mov    -0x28(%ebp),%edx
0812ed30 +0x188:  mov    %edx,0x4(%esp)
0812ed34 +0x18c:  mov    %eax,(%esp)
0812ed37 +0x18f:  call   08135a22 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1629>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1629
0812ed3c +0x194:  sub    $0x4,%esp
0812ed3f +0x197:  lea    -0x74(%ebp),%eax
0812ed42 +0x19a:  mov    %eax,0x4(%esp)
0812ed46 +0x19e:  lea    -0x78(%ebp),%eax
0812ed49 +0x1a1:  mov    %eax,(%esp)
0812ed4c +0x1a4:  call   08135a4e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1655>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1655
0812ed51 +0x1a9:  test   %al,%al
0812ed53 +0x1ab:  jne    0812ec8b <+0xe3>
0812ed59 +0x1b1:  lea    -0x6c(%ebp),%eax
0812ed5c +0x1b4:  mov    -0x28(%ebp),%edx
0812ed5f +0x1b7:  mov    %edx,0x4(%esp)
0812ed63 +0x1bb:  mov    %eax,(%esp)
0812ed66 +0x1be:  call   08135a22 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1629>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1629
0812ed6b +0x1c3:  sub    $0x4,%esp
0812ed6e +0x1c6:  lea    -0x6c(%ebp),%eax
0812ed71 +0x1c9:  mov    %eax,0x4(%esp)
0812ed75 +0x1cd:  lea    -0x7c(%ebp),%eax
0812ed78 +0x1d0:  mov    %eax,(%esp)
0812ed7b +0x1d3:  call   08135ab8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x16bf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x16bf
0812ed80 +0x1d8:  test   %al,%al
0812ed82 +0x1da:  je     0812ed8a <+0x1e2>
0812ed84 +0x1dc:  mov    -0x80(%ebp),%eax
0812ed87 +0x1df:  mov    %eax,-0x7c(%ebp)
0812ed8a +0x1e2:  lea    -0x68(%ebp),%eax
0812ed8d +0x1e5:  mov    -0x28(%ebp),%edx
0812ed90 +0x1e8:  mov    %edx,0x4(%esp)
0812ed94 +0x1ec:  mov    %eax,(%esp)
0812ed97 +0x1ef:  call   08135a22 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1629>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1629
0812ed9c +0x1f4:  sub    $0x4,%esp
0812ed9f +0x1f7:  lea    -0x68(%ebp),%eax
0812eda2 +0x1fa:  mov    %eax,0x4(%esp)
0812eda6 +0x1fe:  lea    -0x7c(%ebp),%eax
0812eda9 +0x201:  mov    %eax,(%esp)
0812edac +0x204:  call   08135ab8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x16bf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x16bf
0812edb1 +0x209:  test   %al,%al
0812edb3 +0x20b:  je     0812edbf <+0x217>
0812edb5 +0x20d:  mov    $0x0,%ebx
0812edba +0x212:  jmp    0812f0ed <+0x545>
0812edbf +0x217:  lea    -0x98(%ebp),%eax
0812edc5 +0x21d:  mov    %eax,(%esp)
0812edc8 +0x220:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
0812edcd +0x225:  movl   $0xffffffff,-0x24(%ebp)
0812edd4 +0x22c:  lea    -0x7c(%ebp),%eax
0812edd7 +0x22f:  mov    %eax,(%esp)
0812edda +0x232:  call   08135aae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x16b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x16b5
0812eddf +0x237:  mov    0x4(%eax),%eax
0812ede2 +0x23a:  mov    %eax,-0x20(%ebp)
0812ede5 +0x23d:  cmpl   $0x0,-0x20(%ebp)
0812ede9 +0x241:  je     0812f086 <+0x4de>
0812edef +0x247:  mov    -0x20(%ebp),%eax
0812edf2 +0x24a:  add    $0x4,%eax
0812edf5 +0x24d:  mov    %eax,-0x1c(%ebp)
0812edf8 +0x250:  lea    -0x9c(%ebp),%eax
0812edfe +0x256:  mov    -0x1c(%ebp),%edx
0812ee01 +0x259:  mov    %edx,0x4(%esp)
0812ee05 +0x25d:  mov    %eax,(%esp)
0812ee08 +0x260:  call   08135ae4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x16eb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x16eb
0812ee0d +0x265:  sub    $0x4,%esp
0812ee10 +0x268:  jmp    0812f054 <+0x4ac>
0812ee15 +0x26d:  mov    0x8(%ebp),%eax
0812ee18 +0x270:  mov    0x10(%eax),%eax
0812ee1b +0x273:  mov    %eax,-0x18(%ebp)
0812ee1e +0x276:  lea    -0x9c(%ebp),%eax
0812ee24 +0x27c:  mov    %eax,(%esp)
0812ee27 +0x27f:  call   08135b9c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17a3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17a3
0812ee2c +0x284:  mov    0x4(%eax),%eax
0812ee2f +0x287:  mov    %eax,-0x14(%ebp)
0812ee32 +0x28a:  cmpl   $0x0,-0x14(%ebp)
0812ee36 +0x28e:  je     0812f034 <+0x48c>
0812ee3c +0x294:  lea    -0x9c(%ebp),%eax
0812ee42 +0x29a:  mov    %eax,(%esp)
0812ee45 +0x29d:  call   08135b9c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17a3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17a3
0812ee4a +0x2a2:  mov    0x8(%eax),%eax
0812ee4d +0x2a5:  add    %eax,-0x18(%ebp)
0812ee50 +0x2a8:  jmp    0812f023 <+0x47b>
0812ee55 +0x2ad:  lea    -0x9c(%ebp),%eax
0812ee5b +0x2b3:  mov    %eax,(%esp)
0812ee5e +0x2b6:  call   08135b9c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17a3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17a3
0812ee63 +0x2bb:  movzbl 0x10(%eax),%eax
0812ee67 +0x2bf:  test   %al,%al
0812ee69 +0x2c1:  je     0812ef79 <+0x3d1>
0812ee6f +0x2c7:  mov    -0x14(%ebp),%eax
0812ee72 +0x2ca:  lea    0xc(%eax),%edx
0812ee75 +0x2cd:  lea    -0xa0(%ebp),%eax
0812ee7b +0x2d3:  mov    %edx,0x8(%esp)
0812ee7f +0x2d7:  lea    -0x98(%ebp),%edx
0812ee85 +0x2dd:  mov    %edx,0x4(%esp)
0812ee89 +0x2e1:  mov    %eax,(%esp)
0812ee8c +0x2e4:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0812ee91 +0x2e9:  sub    $0x4,%esp
0812ee94 +0x2ec:  lea    -0x60(%ebp),%eax
0812ee97 +0x2ef:  lea    -0x98(%ebp),%edx
0812ee9d +0x2f5:  mov    %edx,0x4(%esp)
0812eea1 +0x2f9:  mov    %eax,(%esp)
0812eea4 +0x2fc:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0812eea9 +0x301:  sub    $0x4,%esp
0812eeac +0x304:  lea    -0x60(%ebp),%eax
0812eeaf +0x307:  mov    %eax,0x4(%esp)
0812eeb3 +0x30b:  lea    -0xa0(%ebp),%eax
0812eeb9 +0x311:  mov    %eax,(%esp)
0812eebc +0x314:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
0812eec1 +0x319:  test   %al,%al
0812eec3 +0x31b:  je     0812ef1e <+0x376>
0812eec5 +0x31d:  movl   $0x1,-0x44(%ebp)
0812eecc +0x324:  mov    -0x14(%ebp),%eax
0812eecf +0x327:  lea    0xc(%eax),%ecx
0812eed2 +0x32a:  lea    -0x4c(%ebp),%eax
0812eed5 +0x32d:  lea    -0x44(%ebp),%edx
0812eed8 +0x330:  mov    %edx,0x8(%esp)
0812eedc +0x334:  mov    %ecx,0x4(%esp)
0812eee0 +0x338:  mov    %eax,(%esp)
0812eee3 +0x33b:  call   08135ba6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ad>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ad
0812eee8 +0x340:  sub    $0x4,%esp
0812eeeb +0x343:  lea    -0x4c(%ebp),%eax
0812eeee +0x346:  mov    %eax,0x4(%esp)
0812eef2 +0x34a:  lea    -0x54(%ebp),%eax
0812eef5 +0x34d:  mov    %eax,(%esp)
0812eef8 +0x350:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
0812eefd +0x355:  lea    -0x5c(%ebp),%eax
0812ef00 +0x358:  lea    -0x54(%ebp),%edx
0812ef03 +0x35b:  mov    %edx,0x8(%esp)
0812ef07 +0x35f:  lea    -0x98(%ebp),%edx
0812ef0d +0x365:  mov    %edx,0x4(%esp)
0812ef11 +0x369:  mov    %eax,(%esp)
0812ef14 +0x36c:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
0812ef19 +0x371:  sub    $0x4,%esp
0812ef1c +0x374:  jmp    0812ef79 <+0x3d1>
0812ef1e +0x376:  lea    -0xa0(%ebp),%eax
0812ef24 +0x37c:  mov    %eax,(%esp)
0812ef27 +0x37f:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0812ef2c +0x384:  add    $0x4,%eax
0812ef2f +0x387:  mov    %eax,-0xc(%ebp)
0812ef32 +0x38a:  mov    -0xc(%ebp),%eax
0812ef35 +0x38d:  mov    (%eax),%ebx
0812ef37 +0x38f:  lea    -0x9c(%ebp),%eax
0812ef3d +0x395:  mov    %eax,(%esp)
0812ef40 +0x398:  call   08135b9c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17a3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17a3
0812ef45 +0x39d:  movzwl 0x12(%eax),%eax
0812ef49 +0x3a1:  cwtl
0812ef4a +0x3a2:  cmp    %eax,%ebx
0812ef4c +0x3a4:  setge  %al
0812ef4f +0x3a7:  test   %al,%al
0812ef51 +0x3a9:  je     0812ef6c <+0x3c4>
0812ef53 +0x3ab:  lea    -0x9c(%ebp),%eax
0812ef59 +0x3b1:  mov    %eax,(%esp)
0812ef5c +0x3b4:  call   08135b9c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17a3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17a3
0812ef61 +0x3b9:  mov    0xc(%eax),%eax
0812ef64 +0x3bc:  add    %eax,-0x18(%ebp)
0812ef67 +0x3bf:  jmp    0812f023 <+0x47b>
0812ef6c +0x3c4:  mov    -0xc(%ebp),%eax
0812ef6f +0x3c7:  mov    (%eax),%eax
0812ef71 +0x3c9:  lea    0x1(%eax),%edx
0812ef74 +0x3cc:  mov    -0xc(%ebp),%eax
0812ef77 +0x3cf:  mov    %edx,(%eax)
0812ef79 +0x3d1:  movl   $0x38,(%esp)
0812ef80 +0x3d8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0812ef85 +0x3dd:  mov    %eax,%ebx
0812ef87 +0x3df:  mov    %ebx,%eax
0812ef89 +0x3e1:  mov    %eax,(%esp)
0812ef8c +0x3e4:  call   08134674 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x27b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x27b
0812ef91 +0x3e9:  mov    %ebx,-0x10(%ebp)
0812ef94 +0x3ec:  mov    -0x10(%ebp),%eax
0812ef97 +0x3ef:  mov    -0x18(%ebp),%edx
0812ef9a +0x3f2:  mov    %edx,(%eax)
0812ef9c +0x3f4:  mov    0x8(%ebp),%eax
0812ef9f +0x3f7:  movzwl 0x14(%eax),%eax
0812efa3 +0x3fb:  mov    -0x10(%ebp),%edx
0812efa6 +0x3fe:  mov    %ax,0x4(%edx)
0812efaa +0x402:  lea    0x1(%eax),%edx
0812efad +0x405:  mov    0x8(%ebp),%eax
0812efb0 +0x408:  mov    %dx,0x14(%eax)
0812efb4 +0x40c:  mov    -0x20(%ebp),%eax
0812efb7 +0x40f:  mov    (%eax),%edx
0812efb9 +0x411:  mov    -0x10(%ebp),%eax
0812efbc +0x414:  mov    %edx,0x8(%eax)
0812efbf +0x417:  mov    -0x10(%ebp),%eax
0812efc2 +0x41a:  movb   $0x0,0xc(%eax)
0812efc6 +0x41e:  mov    -0x10(%ebp),%eax
0812efc9 +0x421:  lea    0x14(%eax),%edx
0812efcc +0x424:  movl   $0x24,0x8(%esp)
0812efd4 +0x42c:  mov    -0x14(%ebp),%eax
0812efd7 +0x42f:  mov    %eax,0x4(%esp)
0812efdb +0x433:  mov    %edx,(%esp)
0812efde +0x436:  call   0807d8a0 <_init+0x198>
0812efe3 +0x43b:  mov    0x8(%ebp),%eax
0812efe6 +0x43e:  lea    0x18(%eax),%edx
0812efe9 +0x441:  mov    -0x10(%ebp),%eax
0812efec +0x444:  mov    %eax,0x4(%esp)
0812eff0 +0x448:  mov    %edx,(%esp)
0812eff3 +0x44b:  call   0812d540 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs18insertSummonObjectERNS_15_SummonObjectMsE>  ; advancealtar::ProcStage::ProcSummonObjectMs::insertSummonObject(advancealtar::_SummonObjectMs&)
0812eff8 +0x450:  lea    -0x9c(%ebp),%eax
0812effe +0x456:  mov    %eax,(%esp)
0812f001 +0x459:  call   08135b9c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17a3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17a3
0812f006 +0x45e:  mov    0xc(%eax),%eax
0812f009 +0x461:  add    %eax,-0x18(%ebp)
0812f00c +0x464:  cmpl   $0xffffffff,-0x24(%ebp)
0812f010 +0x468:  jne    0812f023 <+0x47b>
0812f012 +0x46a:  mov    0x8(%ebp),%eax
0812f015 +0x46d:  add    $0x18,%eax
0812f018 +0x470:  mov    %eax,(%esp)
0812f01b +0x473:  call   0812d5ba <_ZN12advancealtar9ProcStage18ProcSummonObjectMs22getLastInsertDataIndexEv>  ; advancealtar::ProcStage::ProcSummonObjectMs::getLastInsertDataIndex()
0812f020 +0x478:  mov    %eax,-0x24(%ebp)
0812f023 +0x47b:  mov    -0x18(%ebp),%eax
0812f026 +0x47e:  cmp    -0x30(%ebp),%eax
0812f029 +0x481:  setl   %al
0812f02c +0x484:  test   %al,%al
0812f02e +0x486:  jne    0812ee55 <+0x2ad>
0812f034 +0x48c:  lea    -0x40(%ebp),%eax
0812f037 +0x48f:  movl   $0x0,0x8(%esp)
0812f03f +0x497:  lea    -0x9c(%ebp),%edx
0812f045 +0x49d:  mov    %edx,0x4(%esp)
0812f049 +0x4a1:  mov    %eax,(%esp)
0812f04c +0x4a4:  call   08135b68 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x176f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x176f
0812f051 +0x4a9:  sub    $0x4,%esp
0812f054 +0x4ac:  lea    -0x64(%ebp),%eax
0812f057 +0x4af:  mov    -0x1c(%ebp),%edx
0812f05a +0x4b2:  mov    %edx,0x4(%esp)
0812f05e +0x4b6:  mov    %eax,(%esp)
0812f061 +0x4b9:  call   08135b10 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1717>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1717
0812f066 +0x4be:  sub    $0x4,%esp
0812f069 +0x4c1:  lea    -0x64(%ebp),%eax
0812f06c +0x4c4:  mov    %eax,0x4(%esp)
0812f070 +0x4c8:  lea    -0x9c(%ebp),%eax
0812f076 +0x4ce:  mov    %eax,(%esp)
0812f079 +0x4d1:  call   08135b3c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1743>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1743
0812f07e +0x4d6:  test   %al,%al
0812f080 +0x4d8:  jne    0812ee15 <+0x26d>
0812f086 +0x4de:  mov    0x8(%ebp),%eax
0812f089 +0x4e1:  lea    0x18(%eax),%edx
0812f08c +0x4e4:  mov    -0x24(%ebp),%eax
0812f08f +0x4e7:  mov    %eax,0x4(%esp)
0812f093 +0x4eb:  mov    %edx,(%esp)
0812f096 +0x4ee:  call   0812d5d0 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs24completePushSummonObjectEi>  ; advancealtar::ProcStage::ProcSummonObjectMs::completePushSummonObject(int)
0812f09b +0x4f3:  mov    0x8(%ebp),%eax
0812f09e +0x4f6:  mov    0x10(%eax),%eax
0812f0a1 +0x4f9:  mov    %eax,%edx
0812f0a3 +0x4fb:  add    -0x2c(%ebp),%edx
0812f0a6 +0x4fe:  mov    0x8(%ebp),%eax
0812f0a9 +0x501:  mov    %edx,0x10(%eax)
0812f0ac +0x504:  mov    0x8(%ebp),%eax
0812f0af +0x507:  add    $0x18,%eax
0812f0b2 +0x50a:  mov    %eax,(%esp)
0812f0b5 +0x50d:  call   0812d804 <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs8debugLogEv>  ; advancealtar::ProcStage::ProcSummonObjectMs::debugLog() const
0812f0ba +0x512:  mov    $0x1,%ebx
0812f0bf +0x517:  lea    -0x98(%ebp),%eax
0812f0c5 +0x51d:  mov    %eax,(%esp)
0812f0c8 +0x520:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0812f0cd +0x525:  jmp    0812f0ed <+0x545>
0812f0cf +0x527:  mov    %edx,%ebx
0812f0d1 +0x529:  mov    %eax,%esi
0812f0d3 +0x52b:  lea    -0x98(%ebp),%eax
0812f0d9 +0x531:  mov    %eax,(%esp)
0812f0dc +0x534:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0812f0e1 +0x539:  mov    %esi,%eax
0812f0e3 +0x53b:  mov    %ebx,%edx
0812f0e5 +0x53d:  mov    %eax,(%esp)
0812f0e8 +0x540:  call   08ae3750 <_Unwind_Resume>
0812f0ed +0x545:  mov    %ebx,%eax
0812f0ef +0x547:  lea    -0x8(%ebp),%esp
0812f0f2 +0x54a:  add    $0x0,%esp
0812f0f5 +0x54d:  pop    %ebx
0812f0f6 +0x54e:  pop    %esi
0812f0f7 +0x54f:  pop    %ebp
0812f0f8 +0x550:  ret
0812f0f9 +0x551:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::makeCurrentPhaseSummonObject @ 0x812eba8

/* advancealtar::ProcStage::makeCurrentPhaseSummonObject() */

undefined4 __thiscall advancealtar::ProcStage::makeCurrentPhaseSummonObject(ProcStage *this)

{
  short sVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  _SummonObjectMs *this_00;
  undefined4 uVar6;
  _Rb_tree_iterator<std::pair<int_const,int>> local_a4 [4];
  __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
  local_a0 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_9c [24];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  __normal_iterator local_78 [4];
  __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
  local_74 [4];
  __normal_iterator local_70 [4];
  __normal_iterator local_6c [4];
  __normal_iterator local_68 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_64 [4];
  pair local_60 [8];
  pair<int_const,int> local_58 [8];
  int local_50 [2];
  undefined4 local_48;
  __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
  local_44 [4];
  vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  void *local_18;
  _SummonObjectMs *local_14;
  int *local_10;
  
  if (*(int *)(this + 0x90) == 0) {
    uVar6 = 0;
  }
  else {
    local_40 = *(vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> **)(this + 0x90);
    cVar2 = isEndAllPhase(this);
    if (cVar2 == '\0') {
      local_3c = (int *)std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::
                        operator[](local_40,*(uint *)(this + 0xc));
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
      local_38 = ProcSummonObjectMs::getAliveMonsterCount((ProcSummonObjectMs *)(this + 0x18));
      local_30 = *local_3c;
      local_34 = local_30 + *(int *)(this + 0x10);
      local_2c = local_3c + 2;
      std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::begin();
      std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::end();
      std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::end();
      while( true ) {
        std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::end();
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_7c,local_78);
        if (!bVar3) break;
        iVar4 = __gnu_cxx::
                __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                ::operator->((__normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                              *)&local_7c);
        if (*(short *)(iVar4 + 8) == -1) {
          iVar4 = __gnu_cxx::
                  __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                  ::operator->((__normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                                *)&local_7c);
          if (*(short *)(iVar4 + 10) != -1) goto LAB_0812ecbc;
          bVar3 = true;
        }
        else {
LAB_0812ecbc:
          bVar3 = false;
        }
        if (bVar3) {
          local_84 = local_7c;
        }
        else {
          iVar4 = __gnu_cxx::
                  __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                  ::operator->((__normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                                *)&local_7c);
          if (local_38 < *(short *)(iVar4 + 8)) {
LAB_0812ecfe:
            bVar3 = false;
          }
          else {
            iVar4 = __gnu_cxx::
                    __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                    ::operator->((__normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                                  *)&local_7c);
            if (*(short *)(iVar4 + 10) < local_38) goto LAB_0812ecfe;
            bVar3 = true;
          }
          if (bVar3) {
            local_80 = local_7c;
          }
        }
        __gnu_cxx::
        __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
        ::operator++(local_74,(int)&local_7c);
      }
      std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::end();
      bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_80,local_70);
      if (bVar3) {
        local_80 = local_84;
      }
      std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::end();
      bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_80,local_6c);
      if (bVar3) {
        uVar6 = 0;
      }
      else {
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_9c);
        local_28 = -1;
        iVar4 = __gnu_cxx::
                __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                ::operator->((__normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                              *)&local_80);
        local_24 = *(undefined4 **)(iVar4 + 4);
        if (local_24 != (undefined4 *)0x0) {
          local_20 = local_24 + 1;
                    /* try { // try from 0812ee08 to 0812f0b9 has its CatchHandler @ 0812f0cf */
          std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>::begin();
          while( true ) {
            std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>::end();
            bVar3 = __gnu_cxx::operator!=(local_a0,local_68);
            if (!bVar3) break;
            local_1c = *(int *)(this + 0x10);
            iVar4 = __gnu_cxx::
                    __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
                    ::operator->(local_a0);
            local_18 = *(void **)(iVar4 + 4);
            if (local_18 != (void *)0x0) {
              iVar4 = __gnu_cxx::
                      __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
                      ::operator->(local_a0);
              local_1c = local_1c + *(int *)(iVar4 + 8);
              while (local_1c < local_34) {
                iVar4 = __gnu_cxx::
                        __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
                        ::operator->(local_a0);
                if (*(char *)(iVar4 + 0x10) == '\0') {
LAB_0812ef79:
                  this_00 = operator_new(0x38);
                  _SummonObjectMs::_SummonObjectMs(this_00);
                  *(int *)this_00 = local_1c;
                  sVar1 = *(short *)(this + 0x14);
                  *(short *)(this_00 + 4) = sVar1;
                  *(short *)(this + 0x14) = sVar1 + 1;
                  *(undefined4 *)(this_00 + 8) = *local_24;
                  this_00[0xc] = (_SummonObjectMs)0x0;
                  local_14 = this_00;
                  memcpy(this_00 + 0x14,local_18,0x24);
                  ProcSummonObjectMs::insertSummonObject
                            ((ProcSummonObjectMs *)(this + 0x18),local_14);
                  iVar4 = __gnu_cxx::
                          __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
                          ::operator->(local_a0);
                  local_1c = local_1c + *(int *)(iVar4 + 0xc);
                  if (local_28 == -1) {
                    local_28 = ProcSummonObjectMs::getLastInsertDataIndex
                                         ((ProcSummonObjectMs *)(this + 0x18));
                  }
                }
                else {
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                            ((int *)local_a4);
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                            (local_64);
                  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                                    (local_a4,(_Rb_tree_iterator *)local_64);
                  if (cVar2 != '\0') {
                    local_48 = 1;
                    std::make_pair<int_const&,int>(local_50,(int *)((int)local_18 + 0xc));
                    std::pair<int_const,int>::pair<int,int>(local_58,(pair *)local_50);
                    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                    insert(local_60);
                    goto LAB_0812ef79;
                  }
                  iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_a4);
                  local_10 = (int *)(iVar4 + 4);
                  iVar4 = *local_10;
                  iVar5 = __gnu_cxx::
                          __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
                          ::operator->(local_a0);
                  if (iVar4 < *(short *)(iVar5 + 0x12)) {
                    *local_10 = *local_10 + 1;
                    goto LAB_0812ef79;
                  }
                  iVar4 = __gnu_cxx::
                          __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
                          ::operator->(local_a0);
                  local_1c = local_1c + *(int *)(iVar4 + 0xc);
                }
              }
            }
            __gnu_cxx::
            __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
            ::operator++(local_44,(int)local_a0);
          }
        }
        ProcSummonObjectMs::completePushSummonObject((ProcSummonObjectMs *)(this + 0x18),local_28);
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + local_30;
        ProcSummonObjectMs::debugLog();
        uVar6 = 1;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_9c);
      }
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}
```
