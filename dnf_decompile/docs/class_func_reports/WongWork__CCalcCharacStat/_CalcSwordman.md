# _CalcSwordman

`_ZN8WongWork15CCalcCharacStat13_CalcSwordmanEP15_Additioal_infoii`

`WongWork::CCalcCharacStat::_CalcSwordman(_Additioal_info*, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCalcCharacStat` | `0x0831ed6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831ed6c  _ZN8WongWork15CCalcCharacStat13_CalcSwordmanEP15_Additioal_infoii
#           WongWork::CCalcCharacStat::_CalcSwordman(_Additioal_info*, int, int)
# range [0x0831ed6c, 0x0831f281]
0831ed6c +0x000:  push   %ebp
0831ed6d +0x001:  mov    %esp,%ebp
0831ed6f +0x003:  cmpl   $0x4,0xc(%ebp)
0831ed73 +0x007:  ja     0831f27c <+0x510>
0831ed79 +0x00d:  mov    0xc(%ebp),%eax
0831ed7c +0x010:  shl    $0x2,%eax
0831ed7f +0x013:  mov    &data#59db5a65(.rodata)(%eax),%eax
0831ed85 +0x019:  jmp    *%eax
0831ed87 +0x01b:  mov    0x10(%ebp),%eax
0831ed8a +0x01e:  sub    $0x1,%eax
0831ed8d +0x021:  imul   $0x20d,%eax,%eax
0831ed93 +0x027:  add    $0x5dc,%eax
0831ed98 +0x02c:  mov    %eax,%edx
0831ed9a +0x02e:  mov    0x8(%ebp),%eax
0831ed9d +0x031:  mov    %edx,(%eax)
0831ed9f +0x033:  mov    0x10(%ebp),%eax
0831eda2 +0x036:  sub    $0x1,%eax
0831eda5 +0x039:  imul   $0xaf,%eax,%eax
0831edab +0x03f:  add    $0x5dc,%eax
0831edb0 +0x044:  mov    %eax,%edx
0831edb2 +0x046:  mov    0x8(%ebp),%eax
0831edb5 +0x049:  mov    %edx,0x4(%eax)
0831edb8 +0x04c:  mov    0x10(%ebp),%eax
0831edbb +0x04f:  sub    $0x1,%eax
0831edbe +0x052:  add    %eax,%eax
0831edc0 +0x054:  mov    %eax,%edx
0831edc2 +0x056:  shl    $0x4,%edx
0831edc5 +0x059:  mov    %edx,%ecx
0831edc7 +0x05b:  sub    %ax,%cx
0831edca +0x05e:  mov    %ecx,%eax
0831edcc +0x060:  lea    0x32(%eax),%edx
0831edcf +0x063:  mov    0x8(%ebp),%eax
0831edd2 +0x066:  mov    %dx,0x8(%eax)
0831edd6 +0x06a:  mov    0x10(%ebp),%eax
0831edd9 +0x06d:  sub    $0x1,%eax
0831eddc +0x070:  add    %eax,%eax
0831edde +0x072:  mov    %eax,%edx
0831ede0 +0x074:  shl    $0x4,%edx
0831ede3 +0x077:  mov    %edx,%ecx
0831ede5 +0x079:  sub    %ax,%cx
0831ede8 +0x07c:  mov    %ecx,%eax
0831edea +0x07e:  lea    0x32(%eax),%edx
0831eded +0x081:  mov    0x8(%ebp),%eax
0831edf0 +0x084:  mov    %dx,0xa(%eax)
0831edf4 +0x088:  mov    0x10(%ebp),%eax
0831edf7 +0x08b:  sub    $0x1,%eax
0831edfa +0x08e:  mov    %eax,%edx
0831edfc +0x090:  mov    %edx,%eax
0831edfe +0x092:  shl    $0x2,%eax
0831ee01 +0x095:  add    %edx,%eax
0831ee03 +0x097:  lea    0x0(,%eax,8),%edx
0831ee0a +0x09e:  mov    %edx,%ecx
0831ee0c +0x0a0:  sub    %ax,%cx
0831ee0f +0x0a3:  mov    %ecx,%eax
0831ee11 +0x0a5:  lea    0x3c(%eax),%edx
0831ee14 +0x0a8:  mov    0x8(%ebp),%eax
0831ee17 +0x0ab:  mov    %dx,0xc(%eax)
0831ee1b +0x0af:  mov    0x10(%ebp),%eax
0831ee1e +0x0b2:  sub    $0x1,%eax
0831ee21 +0x0b5:  mov    %eax,%edx
0831ee23 +0x0b7:  mov    %edx,%eax
0831ee25 +0x0b9:  shl    $0x2,%eax
0831ee28 +0x0bc:  add    %edx,%eax
0831ee2a +0x0be:  lea    0x0(,%eax,4),%edx
0831ee31 +0x0c5:  add    %edx,%eax
0831ee33 +0x0c7:  lea    0x32(%eax),%edx
0831ee36 +0x0ca:  mov    0x8(%ebp),%eax
0831ee39 +0x0cd:  mov    %dx,0xe(%eax)
0831ee3d +0x0d1:  mov    0x10(%ebp),%eax
0831ee40 +0x0d4:  sub    $0x1,%eax
0831ee43 +0x0d7:  imul   $0xbb8,%eax,%eax
0831ee49 +0x0dd:  lea    0x61a80(%eax),%edx
0831ee4f +0x0e3:  mov    0x8(%ebp),%eax
0831ee52 +0x0e6:  mov    %edx,0x3a(%eax)
0831ee55 +0x0e9:  mov    0x10(%ebp),%eax
0831ee58 +0x0ec:  sub    $0x1,%eax
0831ee5b +0x0ef:  mov    %eax,%edx
0831ee5d +0x0f1:  mov    %edx,%eax
0831ee5f +0x0f3:  shl    $0x2,%eax
0831ee62 +0x0f6:  add    %edx,%eax
0831ee64 +0x0f8:  shl    $0x2,%eax
0831ee67 +0x0fb:  add    $0x1770,%ax
0831ee6b +0x0ff:  mov    %eax,%edx
0831ee6d +0x101:  mov    0x8(%ebp),%eax
0831ee70 +0x104:  mov    %dx,0x4a(%eax)
0831ee74 +0x108:  jmp    0831f27c <+0x510>
0831ee79 +0x10d:  mov    0x10(%ebp),%eax
0831ee7c +0x110:  imul   $0x190,%eax,%eax
0831ee82 +0x116:  add    $0xc99,%eax
0831ee87 +0x11b:  mov    %eax,%edx
0831ee89 +0x11d:  mov    0x8(%ebp),%eax
0831ee8c +0x120:  mov    %edx,(%eax)
0831ee8e +0x122:  mov    0x10(%ebp),%eax
0831ee91 +0x125:  imul   $0x12c,%eax,%eax
0831ee97 +0x12b:  sub    $0x39d,%eax
0831ee9c +0x130:  mov    %eax,%edx
0831ee9e +0x132:  mov    0x8(%ebp),%eax
0831eea1 +0x135:  mov    %edx,0x4(%eax)
0831eea4 +0x138:  mov    0x10(%ebp),%eax
0831eea7 +0x13b:  mov    %eax,%edx
0831eea9 +0x13d:  mov    %edx,%eax
0831eeab +0x13f:  shl    $0x2,%eax
0831eeae +0x142:  add    %edx,%eax
0831eeb0 +0x144:  lea    0x0(,%eax,8),%edx
0831eeb7 +0x14b:  mov    %edx,%ecx
0831eeb9 +0x14d:  sub    %ax,%cx
0831eebc +0x150:  mov    %ecx,%eax
0831eebe +0x152:  lea    -0x46(%eax),%edx
0831eec1 +0x155:  mov    0x8(%ebp),%eax
0831eec4 +0x158:  mov    %dx,0x8(%eax)
0831eec8 +0x15c:  mov    0x10(%ebp),%eax
0831eecb +0x15f:  add    %eax,%eax
0831eecd +0x161:  mov    %eax,%edx
0831eecf +0x163:  shl    $0x4,%edx
0831eed2 +0x166:  mov    %edx,%ecx
0831eed4 +0x168:  sub    %ax,%cx
0831eed7 +0x16b:  mov    %ecx,%eax
0831eed9 +0x16d:  lea    0x14(%eax),%edx
0831eedc +0x170:  mov    0x8(%ebp),%eax
0831eedf +0x173:  mov    %dx,0xa(%eax)
0831eee3 +0x177:  mov    0x10(%ebp),%eax
0831eee6 +0x17a:  add    %eax,%eax
0831eee8 +0x17c:  mov    %eax,%edx
0831eeea +0x17e:  shl    $0x4,%edx
0831eeed +0x181:  mov    %edx,%ecx
0831eeef +0x183:  sub    %ax,%cx
0831eef2 +0x186:  mov    %ecx,%eax
0831eef4 +0x188:  lea    0x73(%eax),%edx
0831eef7 +0x18b:  mov    0x8(%ebp),%eax
0831eefa +0x18e:  mov    %dx,0xc(%eax)
0831eefe +0x192:  mov    0x10(%ebp),%eax
0831ef01 +0x195:  add    $0x1,%eax
0831ef04 +0x198:  mov    %eax,%edx
0831ef06 +0x19a:  mov    %edx,%eax
0831ef08 +0x19c:  shl    $0x2,%eax
0831ef0b +0x19f:  add    %edx,%eax
0831ef0d +0x1a1:  lea    0x0(,%eax,4),%edx
0831ef14 +0x1a8:  lea    (%eax,%edx,1),%edx
0831ef17 +0x1ab:  mov    0x8(%ebp),%eax
0831ef1a +0x1ae:  mov    %dx,0xe(%eax)
0831ef1e +0x1b2:  mov    0x10(%ebp),%eax
0831ef21 +0x1b5:  sub    $0x1,%eax
0831ef24 +0x1b8:  imul   $0xbb8,%eax,%eax
0831ef2a +0x1be:  lea    0x61a80(%eax),%edx
0831ef30 +0x1c4:  mov    0x8(%ebp),%eax
0831ef33 +0x1c7:  mov    %edx,0x3a(%eax)
0831ef36 +0x1ca:  mov    0x10(%ebp),%eax
0831ef39 +0x1cd:  mov    %eax,%edx
0831ef3b +0x1cf:  mov    %edx,%eax
0831ef3d +0x1d1:  shl    $0x2,%eax
0831ef40 +0x1d4:  add    %edx,%eax
0831ef42 +0x1d6:  add    %eax,%eax
0831ef44 +0x1d8:  lea    0x2080(%eax),%edx
0831ef4a +0x1de:  mov    0x8(%ebp),%eax
0831ef4d +0x1e1:  mov    %dx,0x46(%eax)
0831ef51 +0x1e5:  mov    0x10(%ebp),%eax
0831ef54 +0x1e8:  add    %eax,%eax
0831ef56 +0x1ea:  mov    %eax,%edx
0831ef58 +0x1ec:  shl    $0x4,%edx
0831ef5b +0x1ef:  mov    %edx,%ecx
0831ef5d +0x1f1:  sub    %ax,%cx
0831ef60 +0x1f4:  mov    %ecx,%eax
0831ef62 +0x1f6:  add    $0x16a8,%ax
0831ef66 +0x1fa:  mov    %eax,%edx
0831ef68 +0x1fc:  mov    0x8(%ebp),%eax
0831ef6b +0x1ff:  mov    %dx,0x4a(%eax)
0831ef6f +0x203:  jmp    0831f27c <+0x510>
0831ef74 +0x208:  mov    0x10(%ebp),%eax
0831ef77 +0x20b:  imul   $0x15e,%eax,%eax
0831ef7d +0x211:  add    $0x101d,%eax
0831ef82 +0x216:  mov    %eax,%edx
0831ef84 +0x218:  mov    0x8(%ebp),%eax
0831ef87 +0x21b:  mov    %edx,(%eax)
0831ef89 +0x21d:  mov    0x10(%ebp),%eax
0831ef8c +0x220:  imul   $0x15e,%eax,%eax
0831ef92 +0x226:  sub    $0x721,%eax
0831ef97 +0x22b:  mov    %eax,%edx
0831ef99 +0x22d:  mov    0x8(%ebp),%eax
0831ef9c +0x230:  mov    %edx,0x4(%eax)
0831ef9f +0x233:  mov    0x10(%ebp),%eax
0831efa2 +0x236:  mov    %eax,%edx
0831efa4 +0x238:  mov    %edx,%eax
0831efa6 +0x23a:  shl    $0x2,%eax
0831efa9 +0x23d:  add    %edx,%eax
0831efab +0x23f:  shl    $0x2,%eax
0831efae +0x242:  lea    0xc8(%eax),%edx
0831efb4 +0x248:  mov    0x8(%ebp),%eax
0831efb7 +0x24b:  mov    %dx,0x8(%eax)
0831efbb +0x24f:  mov    0x10(%ebp),%eax
0831efbe +0x252:  mov    %eax,%edx
0831efc0 +0x254:  mov    %edx,%eax
0831efc2 +0x256:  shl    $0x2,%eax
0831efc5 +0x259:  add    %edx,%eax
0831efc7 +0x25b:  shl    $0x2,%eax
0831efca +0x25e:  lea    0xc8(%eax),%edx
0831efd0 +0x264:  mov    0x8(%ebp),%eax
0831efd3 +0x267:  mov    %dx,0xa(%eax)
0831efd7 +0x26b:  mov    0x10(%ebp),%eax
0831efda +0x26e:  mov    %eax,%edx
0831efdc +0x270:  mov    %edx,%eax
0831efde +0x272:  shl    $0x2,%eax
0831efe1 +0x275:  add    %edx,%eax
0831efe3 +0x277:  shl    $0x3,%eax
0831efe6 +0x27a:  lea    -0x41(%eax),%edx
0831efe9 +0x27d:  mov    0x8(%ebp),%eax
0831efec +0x280:  mov    %dx,0xc(%eax)
0831eff0 +0x284:  mov    0x10(%ebp),%eax
0831eff3 +0x287:  mov    %eax,%edx
0831eff5 +0x289:  mov    %edx,%eax
0831eff7 +0x28b:  shl    $0x2,%eax
0831effa +0x28e:  add    %edx,%eax
0831effc +0x290:  shl    $0x3,%eax
0831efff +0x293:  lea    -0xf5(%eax),%edx
0831f005 +0x299:  mov    0x8(%ebp),%eax
0831f008 +0x29c:  mov    %dx,0xe(%eax)
0831f00c +0x2a0:  mov    0x10(%ebp),%eax
0831f00f +0x2a3:  add    $0x7,%eax
0831f012 +0x2a6:  shl    $0x3,%eax
0831f015 +0x2a9:  mov    %eax,%edx
0831f017 +0x2ab:  mov    0x8(%ebp),%eax
0831f01a +0x2ae:  mov    %dx,0x14(%eax)
0831f01e +0x2b2:  mov    0x10(%ebp),%eax
0831f021 +0x2b5:  sub    $0x1,%eax
0831f024 +0x2b8:  imul   $0xbb8,%eax,%eax
0831f02a +0x2be:  lea    0x61a80(%eax),%edx
0831f030 +0x2c4:  mov    0x8(%ebp),%eax
0831f033 +0x2c7:  mov    %edx,0x3a(%eax)
0831f036 +0x2ca:  mov    0x10(%ebp),%eax
0831f039 +0x2cd:  mov    %eax,%edx
0831f03b +0x2cf:  mov    %edx,%eax
0831f03d +0x2d1:  shl    $0x2,%eax
0831f040 +0x2d4:  add    %edx,%eax
0831f042 +0x2d6:  shl    $0x2,%eax
0831f045 +0x2d9:  sub    $0xd2,%ax
0831f049 +0x2dd:  mov    %eax,%edx
0831f04b +0x2df:  mov    0x8(%ebp),%eax
0831f04e +0x2e2:  mov    %dx,0x40(%eax)
0831f052 +0x2e6:  mov    0x10(%ebp),%eax
0831f055 +0x2e9:  mov    %eax,%edx
0831f057 +0x2eb:  mov    %edx,%eax
0831f059 +0x2ed:  shl    $0x2,%eax
0831f05c +0x2f0:  add    %edx,%eax
0831f05e +0x2f2:  shl    $0x2,%eax
0831f061 +0x2f5:  lea    0x19f0(%eax),%edx
0831f067 +0x2fb:  mov    0x8(%ebp),%eax
0831f06a +0x2fe:  mov    %dx,0x48(%eax)
0831f06e +0x302:  mov    0x10(%ebp),%eax
0831f071 +0x305:  mov    %eax,%edx
0831f073 +0x307:  mov    %edx,%eax
0831f075 +0x309:  shl    $0x2,%eax
0831f078 +0x30c:  add    %edx,%eax
0831f07a +0x30e:  add    %eax,%eax
0831f07c +0x310:  add    $0x1810,%ax
0831f080 +0x314:  mov    %eax,%edx
0831f082 +0x316:  mov    0x8(%ebp),%eax
0831f085 +0x319:  mov    %dx,0x4a(%eax)
0831f089 +0x31d:  jmp    0831f27c <+0x510>
0831f08e +0x322:  mov    0x10(%ebp),%eax
0831f091 +0x325:  imul   $0x226,%eax,%eax
0831f097 +0x32b:  add    $0x20d,%eax
0831f09c +0x330:  mov    %eax,%edx
0831f09e +0x332:  mov    0x8(%ebp),%eax
0831f0a1 +0x335:  mov    %edx,(%eax)
0831f0a3 +0x337:  mov    0x10(%ebp),%eax
0831f0a6 +0x33a:  imul   $0x96,%eax,%eax
0831f0ac +0x340:  add    $0x6ef,%eax
0831f0b1 +0x345:  mov    %eax,%edx
0831f0b3 +0x347:  mov    0x8(%ebp),%eax
0831f0b6 +0x34a:  mov    %edx,0x4(%eax)
0831f0b9 +0x34d:  mov    0x10(%ebp),%eax
0831f0bc +0x350:  mov    %eax,%edx
0831f0be +0x352:  mov    %edx,%eax
0831f0c0 +0x354:  shl    $0x2,%eax
0831f0c3 +0x357:  add    %edx,%eax
0831f0c5 +0x359:  shl    $0x3,%eax
0831f0c8 +0x35c:  lea    -0xa0(%eax),%edx
0831f0ce +0x362:  mov    0x8(%ebp),%eax
0831f0d1 +0x365:  mov    %dx,0x8(%eax)
0831f0d5 +0x369:  mov    0x10(%ebp),%eax
0831f0d8 +0x36c:  mov    %eax,%edx
0831f0da +0x36e:  mov    %edx,%eax
0831f0dc +0x370:  add    %eax,%eax
0831f0de +0x372:  add    %edx,%eax
0831f0e0 +0x374:  mov    %eax,%edx
0831f0e2 +0x376:  shl    $0x4,%edx
0831f0e5 +0x379:  mov    %edx,%ecx
0831f0e7 +0x37b:  sub    %ax,%cx
0831f0ea +0x37e:  mov    %ecx,%eax
0831f0ec +0x380:  lea    -0xfa(%eax),%edx
0831f0f2 +0x386:  mov    0x8(%ebp),%eax
0831f0f5 +0x389:  mov    %dx,0xa(%eax)
0831f0f9 +0x38d:  mov    0x10(%ebp),%eax
0831f0fc +0x390:  mov    %eax,%edx
0831f0fe +0x392:  mov    %edx,%eax
0831f100 +0x394:  shl    $0x4,%eax
0831f103 +0x397:  sub    %dx,%ax
0831f106 +0x39a:  lea    0x181(%eax),%edx
0831f10c +0x3a0:  mov    0x8(%ebp),%eax
0831f10f +0x3a3:  mov    %dx,0xc(%eax)
0831f113 +0x3a7:  mov    0x10(%ebp),%eax
0831f116 +0x3aa:  mov    %eax,%edx
0831f118 +0x3ac:  mov    %edx,%eax
0831f11a +0x3ae:  shl    $0x2,%eax
0831f11d +0x3b1:  add    %edx,%eax
0831f11f +0x3b3:  shl    $0x2,%eax
0831f122 +0x3b6:  lea    0x73(%eax),%edx
0831f125 +0x3b9:  mov    0x8(%ebp),%eax
0831f128 +0x3bc:  mov    %dx,0xe(%eax)
0831f12c +0x3c0:  mov    0x10(%ebp),%eax
0831f12f +0x3c3:  sub    $0x1,%eax
0831f132 +0x3c6:  imul   $0xbb8,%eax,%eax
0831f138 +0x3cc:  lea    0x61a80(%eax),%edx
0831f13e +0x3d2:  mov    0x8(%ebp),%eax
0831f141 +0x3d5:  mov    %edx,0x3a(%eax)
0831f144 +0x3d8:  mov    0x10(%ebp),%edx
0831f147 +0x3db:  mov    %edx,%eax
0831f149 +0x3dd:  shl    $0x2,%eax
0831f14c +0x3e0:  add    %edx,%eax
0831f14e +0x3e2:  add    %eax,%eax
0831f150 +0x3e4:  add    $0x2080,%eax
0831f155 +0x3e9:  mov    %eax,%edx
0831f157 +0x3eb:  mov    0x8(%ebp),%eax
0831f15a +0x3ee:  mov    %edx,0x42(%eax)
0831f15d +0x3f1:  mov    0x10(%ebp),%eax
0831f160 +0x3f4:  mov    %eax,%edx
0831f162 +0x3f6:  mov    %edx,%eax
0831f164 +0x3f8:  shl    $0x2,%eax
0831f167 +0x3fb:  add    %edx,%eax
0831f169 +0x3fd:  shl    $0x3,%eax
0831f16c +0x400:  add    $0x15f4,%ax
0831f170 +0x404:  mov    %eax,%edx
0831f172 +0x406:  mov    0x8(%ebp),%eax
0831f175 +0x409:  mov    %dx,0x4a(%eax)
0831f179 +0x40d:  jmp    0831f27c <+0x510>
0831f17e +0x412:  mov    0x10(%ebp),%eax
0831f181 +0x415:  imul   $0x20d,%eax,%eax
0831f187 +0x41b:  add    $0x3cf,%eax
0831f18c +0x420:  mov    %eax,%edx
0831f18e +0x422:  mov    0x8(%ebp),%eax
0831f191 +0x425:  mov    %edx,(%eax)
0831f193 +0x427:  mov    0x10(%ebp),%eax
0831f196 +0x42a:  imul   $0xaf,%eax,%eax
0831f19c +0x430:  add    $0x52d,%eax
0831f1a1 +0x435:  mov    %eax,%edx
0831f1a3 +0x437:  mov    0x8(%ebp),%eax
0831f1a6 +0x43a:  mov    %edx,0x4(%eax)
0831f1a9 +0x43d:  mov    0x10(%ebp),%eax
0831f1ac +0x440:  add    %eax,%eax
0831f1ae +0x442:  mov    %eax,%edx
0831f1b0 +0x444:  shl    $0x4,%edx
0831f1b3 +0x447:  mov    %edx,%ecx
0831f1b5 +0x449:  sub    %ax,%cx
0831f1b8 +0x44c:  mov    %ecx,%eax
0831f1ba +0x44e:  lea    0x14(%eax),%edx
0831f1bd +0x451:  mov    0x8(%ebp),%eax
0831f1c0 +0x454:  mov    %dx,0x8(%eax)
0831f1c4 +0x458:  mov    0x10(%ebp),%eax
0831f1c7 +0x45b:  add    %eax,%eax
0831f1c9 +0x45d:  mov    %eax,%edx
0831f1cb +0x45f:  shl    $0x4,%edx
0831f1ce +0x462:  mov    %edx,%ecx
0831f1d0 +0x464:  sub    %ax,%cx
0831f1d3 +0x467:  mov    %ecx,%eax
0831f1d5 +0x469:  lea    0x14(%eax),%edx
0831f1d8 +0x46c:  mov    0x8(%ebp),%eax
0831f1db +0x46f:  mov    %dx,0xa(%eax)
0831f1df +0x473:  mov    0x10(%ebp),%eax
0831f1e2 +0x476:  add    %eax,%eax
0831f1e4 +0x478:  mov    %eax,%edx
0831f1e6 +0x47a:  shl    $0x4,%edx
0831f1e9 +0x47d:  mov    %edx,%ecx
0831f1eb +0x47f:  sub    %ax,%cx
0831f1ee +0x482:  mov    %ecx,%eax
0831f1f0 +0x484:  lea    0x73(%eax),%edx
0831f1f3 +0x487:  mov    0x8(%ebp),%eax
0831f1f6 +0x48a:  mov    %dx,0xc(%eax)
0831f1fa +0x48e:  mov    0x10(%ebp),%eax
0831f1fd +0x491:  add    %eax,%eax
0831f1ff +0x493:  mov    %eax,%edx
0831f201 +0x495:  shl    $0x4,%edx
0831f204 +0x498:  mov    %edx,%ecx
0831f206 +0x49a:  sub    %ax,%cx
0831f209 +0x49d:  mov    %ecx,%eax
0831f20b +0x49f:  lea    -0x41(%eax),%edx
0831f20e +0x4a2:  mov    0x8(%ebp),%eax
0831f211 +0x4a5:  mov    %dx,0xe(%eax)
0831f215 +0x4a9:  mov    0x10(%ebp),%eax
0831f218 +0x4ac:  sub    $0x1,%eax
0831f21b +0x4af:  imul   $0xbb8,%eax,%eax
0831f221 +0x4b5:  lea    0x61a80(%eax),%edx
0831f227 +0x4bb:  mov    0x8(%ebp),%eax
0831f22a +0x4be:  mov    %edx,0x3a(%eax)
0831f22d +0x4c1:  mov    0x10(%ebp),%eax
0831f230 +0x4c4:  mov    %eax,%edx
0831f232 +0x4c6:  mov    %edx,%eax
0831f234 +0x4c8:  shl    $0x2,%eax
0831f237 +0x4cb:  add    %edx,%eax
0831f239 +0x4cd:  add    $0x3c,%eax
0831f23c +0x4d0:  mov    %eax,%edx
0831f23e +0x4d2:  mov    0x8(%ebp),%eax
0831f241 +0x4d5:  mov    %dx,0x40(%eax)
0831f245 +0x4d9:  mov    0x10(%ebp),%eax
0831f248 +0x4dc:  mov    %eax,%edx
0831f24a +0x4de:  mov    %edx,%eax
0831f24c +0x4e0:  shl    $0x2,%eax
0831f24f +0x4e3:  add    %edx,%eax
0831f251 +0x4e5:  add    %eax,%eax
0831f253 +0x4e7:  lea    0x1aa4(%eax),%edx
0831f259 +0x4ed:  mov    0x8(%ebp),%eax
0831f25c +0x4f0:  mov    %dx,0x48(%eax)
0831f260 +0x4f4:  mov    0x10(%ebp),%eax
0831f263 +0x4f7:  mov    %eax,%edx
0831f265 +0x4f9:  mov    %edx,%eax
0831f267 +0x4fb:  shl    $0x2,%eax
0831f26a +0x4fe:  add    %edx,%eax
0831f26c +0x500:  shl    $0x2,%eax
0831f26f +0x503:  add    $0x1608,%ax
0831f273 +0x507:  mov    %eax,%edx
0831f275 +0x509:  mov    0x8(%ebp),%eax
0831f278 +0x50c:  mov    %dx,0x4a(%eax)
0831f27c +0x510:  mov    0x8(%ebp),%eax
0831f27f +0x513:  pop    %ebp
0831f280 +0x514:  ret
0831f281 +0x515:  nop
```

## 反编译 C

```c
// WongWork::CCalcCharacStat::_CalcSwordman @ 0x831ed6c

/* WongWork::CCalcCharacStat::_CalcSwordman(_Additioal_info*, int, int) */

_Additioal_info *
WongWork::CCalcCharacStat::_CalcSwordman(_Additioal_info *param_1,int param_2,int param_3)

{
  short sVar1;
  
  sVar1 = (short)param_3;
  switch(param_2) {
  case 0:
    *(int *)param_1 = (param_3 + -1) * 0x20d + 0x5dc;
    *(int *)(param_1 + 4) = (param_3 + -1) * 0xaf + 0x5dc;
    *(short *)(param_1 + 8) = (sVar1 + -1) * 0x1e + 0x32;
    *(short *)(param_1 + 10) = (sVar1 + -1) * 0x1e + 0x32;
    *(short *)(param_1 + 0xc) = (sVar1 + -1) * 0x23 + 0x3c;
    *(short *)(param_1 + 0xe) = (sVar1 + -1) * 0x19 + 0x32;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 400000;
    *(short *)(param_1 + 0x4a) = (sVar1 + -1) * 0x14 + 6000;
    break;
  case 1:
    *(int *)param_1 = param_3 * 400 + 0xc99;
    *(int *)(param_1 + 4) = param_3 * 300 + -0x39d;
    *(short *)(param_1 + 8) = sVar1 * 0x23 + -0x46;
    *(short *)(param_1 + 10) = (short)(param_3 << 5) + sVar1 * -2 + 0x14;
    *(short *)(param_1 + 0xc) = (short)(param_3 << 5) + sVar1 * -2 + 0x73;
    *(short *)(param_1 + 0xe) = (sVar1 + 1) * 0x19;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 400000;
    *(short *)(param_1 + 0x46) = sVar1 * 10 + 0x2080;
    *(short *)(param_1 + 0x4a) = (short)(param_3 << 5) + sVar1 * -2 + 0x16a8;
    break;
  case 2:
    *(int *)param_1 = param_3 * 0x15e + 0x101d;
    *(int *)(param_1 + 4) = param_3 * 0x15e + -0x721;
    *(short *)(param_1 + 8) = ((short)(param_3 << 2) + sVar1) * 4 + 200;
    *(short *)(param_1 + 10) = ((short)(param_3 << 2) + sVar1) * 4 + 200;
    *(short *)(param_1 + 0xc) = ((short)(param_3 << 2) + sVar1) * 8 + -0x41;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 8 + -0xf5;
    *(short *)(param_1 + 0x14) = (sVar1 + 7) * 8;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 400000;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 4 + -0xd2;
    *(short *)(param_1 + 0x48) = ((short)(param_3 << 2) + sVar1) * 4 + 0x19f0;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 2 + 0x1810;
    break;
  case 3:
    *(int *)param_1 = param_3 * 0x226 + 0x20d;
    *(int *)(param_1 + 4) = param_3 * 0x96 + 0x6ef;
    *(short *)(param_1 + 8) = ((short)(param_3 << 2) + sVar1) * 8 + -0xa0;
    *(short *)(param_1 + 10) = sVar1 * 0x2d + -0xfa;
    *(short *)(param_1 + 0xc) = ((short)(param_3 << 4) - sVar1) + 0x181;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 4 + 0x73;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 400000;
    *(int *)(param_1 + 0x42) = param_3 * 10 + 0x2080;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 8 + 0x15f4;
    break;
  case 4:
    *(int *)param_1 = param_3 * 0x20d + 0x3cf;
    *(int *)(param_1 + 4) = param_3 * 0xaf + 0x52d;
    *(short *)(param_1 + 8) = (short)(param_3 << 5) + sVar1 * -2 + 0x14;
    *(short *)(param_1 + 10) = (short)(param_3 << 5) + sVar1 * -2 + 0x14;
    *(short *)(param_1 + 0xc) = (short)(param_3 << 5) + sVar1 * -2 + 0x73;
    *(short *)(param_1 + 0xe) = (short)(param_3 << 5) + sVar1 * -2 + -0x41;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 3000 + 400000;
    *(short *)(param_1 + 0x40) = (short)(param_3 << 2) + sVar1 + 0x3c;
    *(short *)(param_1 + 0x48) = sVar1 * 10 + 0x1aa4;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 4 + 0x1608;
  }
  return param_1;
}
```
