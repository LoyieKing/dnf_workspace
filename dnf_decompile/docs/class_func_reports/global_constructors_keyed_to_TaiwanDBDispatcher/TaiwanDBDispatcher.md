# TaiwanDBDispatcher

`_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev`

`global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to TaiwanDBDispatcher` | `0x0815dd8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815dd8c  _GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev
#           global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()
# range [0x0815dd8c, 0x081601bb]
0815dd8c +0x0000:  push   %ebp
0815dd8d +0x0001:  mov    %esp,%ebp
0815dd8f +0x0003:  sub    $0x18,%esp
0815dd92 +0x0006:  movl   $0xffff,0x4(%esp)
0815dd9a +0x000e:  movl   $0x1,(%esp)
0815dda1 +0x0015:  call   0815dd4c <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0815dda6 +0x001a:  leave
0815dda7 +0x001b:  ret
0815dda8 +0x001c:  push   %ebp
0815dda9 +0x001d:  mov    %esp,%ebp
0815ddab +0x001f:  sub    $0x18,%esp
0815ddae +0x0022:  mov    0x8(%ebp),%eax
0815ddb1 +0x0025:  movl   $0x0,(%eax)
0815ddb7 +0x002b:  mov    0x8(%ebp),%eax
0815ddba +0x002e:  movl   $0x0,0x4(%eax)
0815ddc1 +0x0035:  mov    0x8(%ebp),%eax
0815ddc4 +0x0038:  add    $0x8,%eax
0815ddc7 +0x003b:  movl   $0x1194,0x8(%esp)
0815ddcf +0x0043:  movl   $0x0,0x4(%esp)
0815ddd7 +0x004b:  mov    %eax,(%esp)
0815ddda +0x004e:  call   0807dcc0 <_init+0x5b8>
0815dddf +0x0053:  mov    0x8(%ebp),%eax
0815dde2 +0x0056:  add    $0x119c,%eax
0815dde7 +0x005b:  movl   $0x64,0x8(%esp)
0815ddef +0x0063:  movl   $0x0,0x4(%esp)
0815ddf7 +0x006b:  mov    %eax,(%esp)
0815ddfa +0x006e:  call   0807dcc0 <_init+0x5b8>
0815ddff +0x0073:  leave
0815de00 +0x0074:  ret
0815de01 +0x0075:  nop
0815de02 +0x0076:  push   %ebp
0815de03 +0x0077:  mov    %esp,%ebp
0815de05 +0x0079:  sub    $0x4,%esp
0815de08 +0x007c:  mov    0x14(%ebp),%eax
0815de0b +0x007f:  mov    %al,-0x4(%ebp)
0815de0e +0x0082:  mov    0x8(%ebp),%eax
0815de11 +0x0085:  mov    0xc(%ebp),%edx
0815de14 +0x0088:  mov    %edx,(%eax)
0815de16 +0x008a:  mov    0x10(%ebp),%eax
0815de19 +0x008d:  mov    0x8(%ebp),%edx
0815de1c +0x0090:  movzbl -0x4(%ebp),%ecx
0815de20 +0x0094:  mov    %cl,0x119c(%edx,%eax,1)
0815de27 +0x009b:  mov    0x8(%ebp),%eax
0815de2a +0x009e:  mov    0x4(%eax),%eax
0815de2d +0x00a1:  lea    0x1(%eax),%edx
0815de30 +0x00a4:  mov    0x8(%ebp),%eax
0815de33 +0x00a7:  mov    %edx,0x4(%eax)
0815de36 +0x00aa:  leave
0815de37 +0x00ab:  ret
0815de38 +0x00ac:  push   %ebp
0815de39 +0x00ad:  mov    %esp,%ebp
0815de3b +0x00af:  sub    $0x18,%esp
0815de3e +0x00b2:  mov    0xc(%ebp),%eax
0815de41 +0x00b5:  mov    (%eax),%edx
0815de43 +0x00b7:  mov    0x8(%ebp),%eax
0815de46 +0x00ba:  mov    %edx,(%eax)
0815de48 +0x00bc:  mov    0xc(%ebp),%eax
0815de4b +0x00bf:  mov    0x4(%eax),%edx
0815de4e +0x00c2:  mov    0x8(%ebp),%eax
0815de51 +0x00c5:  mov    %edx,0x4(%eax)
0815de54 +0x00c8:  mov    0xc(%ebp),%eax
0815de57 +0x00cb:  lea    0x8(%eax),%edx
0815de5a +0x00ce:  mov    0x8(%ebp),%eax
0815de5d +0x00d1:  add    $0x8,%eax
0815de60 +0x00d4:  movl   $0x1194,0x8(%esp)
0815de68 +0x00dc:  mov    %edx,0x4(%esp)
0815de6c +0x00e0:  mov    %eax,(%esp)
0815de6f +0x00e3:  call   0807d8a0 <_init+0x198>
0815de74 +0x00e8:  mov    0xc(%ebp),%eax
0815de77 +0x00eb:  lea    0x119c(%eax),%edx
0815de7d +0x00f1:  mov    0x8(%ebp),%eax
0815de80 +0x00f4:  add    $0x119c,%eax
0815de85 +0x00f9:  movl   $0x64,0x8(%esp)
0815de8d +0x0101:  mov    %edx,0x4(%esp)
0815de91 +0x0105:  mov    %eax,(%esp)
0815de94 +0x0108:  call   0807d8a0 <_init+0x198>
0815de99 +0x010d:  leave
0815de9a +0x010e:  ret
0815de9b +0x010f:  nop
0815de9c +0x0110:  push   %ebp
0815de9d +0x0111:  mov    %esp,%ebp
0815de9f +0x0113:  sub    $0x18,%esp
0815dea2 +0x0116:  mov    0x8(%ebp),%eax
0815dea5 +0x0119:  movl   $0x0,(%eax)
0815deab +0x011f:  mov    0x8(%ebp),%eax
0815deae +0x0122:  add    $0x4,%eax
0815deb1 +0x0125:  movl   $0x2d0,0x8(%esp)
0815deb9 +0x012d:  movl   $0x0,0x4(%esp)
0815dec1 +0x0135:  mov    %eax,(%esp)
0815dec4 +0x0138:  call   0807dcc0 <_init+0x5b8>
0815dec9 +0x013d:  leave
0815deca +0x013e:  ret
0815decb +0x013f:  nop
0815decc +0x0140:  push   %ebp
0815decd +0x0141:  mov    %esp,%ebp
0815decf +0x0143:  sub    $0x18,%esp
0815ded2 +0x0146:  mov    0x8(%ebp),%eax
0815ded5 +0x0149:  mov    (%eax),%eax
0815ded7 +0x014b:  shl    $0x4,%eax
0815deda +0x014e:  add    0x8(%ebp),%eax
0815dedd +0x0151:  add    $0x4,%eax
0815dee0 +0x0154:  movl   $0xf,0x8(%esp)
0815dee8 +0x015c:  mov    0xc(%ebp),%edx
0815deeb +0x015f:  mov    %edx,0x4(%esp)
0815deef +0x0163:  mov    %eax,(%esp)
0815def2 +0x0166:  call   0807d8d0 <_init+0x1c8>
0815def7 +0x016b:  mov    0x8(%ebp),%eax
0815defa +0x016e:  mov    (%eax),%eax
0815defc +0x0170:  lea    0x1(%eax),%edx
0815deff +0x0173:  mov    0x8(%ebp),%eax
0815df02 +0x0176:  mov    %edx,(%eax)
0815df04 +0x0178:  leave
0815df05 +0x0179:  ret
0815df06 +0x017a:  push   %ebp
0815df07 +0x017b:  mov    %esp,%ebp
0815df09 +0x017d:  sub    $0x18,%esp
0815df0c +0x0180:  mov    0xc(%ebp),%eax
0815df0f +0x0183:  mov    (%eax),%edx
0815df11 +0x0185:  mov    0x8(%ebp),%eax
0815df14 +0x0188:  mov    %edx,(%eax)
0815df16 +0x018a:  mov    0xc(%ebp),%eax
0815df19 +0x018d:  lea    0x4(%eax),%edx
0815df1c +0x0190:  mov    0x8(%ebp),%eax
0815df1f +0x0193:  add    $0x4,%eax
0815df22 +0x0196:  movl   $0x2d0,0x8(%esp)
0815df2a +0x019e:  mov    %edx,0x4(%esp)
0815df2e +0x01a2:  mov    %eax,(%esp)
0815df31 +0x01a5:  call   0807d8a0 <_init+0x198>
0815df36 +0x01aa:  leave
0815df37 +0x01ab:  ret
0815df38 +0x01ac:  push   %ebp
0815df39 +0x01ad:  mov    %esp,%ebp
0815df3b +0x01af:  mov    0x8(%ebp),%eax
0815df3e +0x01b2:  movl   $0x0,(%eax)
0815df44 +0x01b8:  mov    0x8(%ebp),%eax
0815df47 +0x01bb:  movl   $0x0,0x4(%eax)
0815df4e +0x01c2:  pop    %ebp
0815df4f +0x01c3:  ret
0815df50 +0x01c4:  push   %ebp
0815df51 +0x01c5:  mov    %esp,%ebp
0815df53 +0x01c7:  mov    0x8(%ebp),%eax
0815df56 +0x01ca:  mov    0xc(%ebp),%edx
0815df59 +0x01cd:  mov    %edx,(%eax)
0815df5b +0x01cf:  mov    0x8(%ebp),%eax
0815df5e +0x01d2:  mov    0x10(%ebp),%edx
0815df61 +0x01d5:  mov    %edx,0x4(%eax)
0815df64 +0x01d8:  pop    %ebp
0815df65 +0x01d9:  ret
0815df66 +0x01da:  push   %ebp
0815df67 +0x01db:  mov    %esp,%ebp
0815df69 +0x01dd:  mov    0x8(%ebp),%eax
0815df6c +0x01e0:  movl   $&_ZTV27TaiwanInterfaceDBDispatcher+0x8,(%eax)
0815df72 +0x01e6:  mov    0x8(%ebp),%eax
0815df75 +0x01e9:  mov    0xc(%ebp),%edx
0815df78 +0x01ec:  mov    %edx,0x4(%eax)
0815df7b +0x01ef:  pop    %ebp
0815df7c +0x01f0:  ret
0815df7d +0x01f1:  nop
0815df7e +0x01f2:  push   %ebp
0815df7f +0x01f3:  mov    %esp,%ebp
0815df81 +0x01f5:  sub    $0x18,%esp
0815df84 +0x01f8:  mov    0x8(%ebp),%eax
0815df87 +0x01fb:  movl   $&_ZTV27TaiwanInterfaceDBDispatcher+0x8,(%eax)
0815df8d +0x0201:  mov    $0x0,%eax
0815df92 +0x0206:  test   %al,%al
0815df94 +0x0208:  je     0815dfa1 <+0x215>
0815df96 +0x020a:  mov    0x8(%ebp),%eax
0815df99 +0x020d:  mov    %eax,(%esp)
0815df9c +0x0210:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815dfa1 +0x0215:  leave
0815dfa2 +0x0216:  ret
0815dfa3 +0x0217:  nop
0815dfa4 +0x0218:  push   %ebp
0815dfa5 +0x0219:  mov    %esp,%ebp
0815dfa7 +0x021b:  sub    $0x18,%esp
0815dfaa +0x021e:  mov    0x8(%ebp),%eax
0815dfad +0x0221:  mov    %eax,(%esp)
0815dfb0 +0x0224:  call   0815df7e <+0x1f2>
0815dfb5 +0x0229:  mov    0x8(%ebp),%eax
0815dfb8 +0x022c:  mov    %eax,(%esp)
0815dfbb +0x022f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815dfc0 +0x0234:  leave
0815dfc1 +0x0235:  ret
0815dfc2 +0x0236:  push   %ebp
0815dfc3 +0x0237:  mov    %esp,%ebp
0815dfc5 +0x0239:  mov    0x8(%ebp),%eax
0815dfc8 +0x023c:  mov    0x4(%eax),%eax
0815dfcb +0x023f:  pop    %ebp
0815dfcc +0x0240:  ret
0815dfcd +0x0241:  nop
0815dfce +0x0242:  push   %ebp
0815dfcf +0x0243:  mov    %esp,%ebp
0815dfd1 +0x0245:  sub    $0x18,%esp
0815dfd4 +0x0248:  mov    0xc(%ebp),%eax
0815dfd7 +0x024b:  mov    0x4(%eax),%eax
0815dfda +0x024e:  test   %eax,%eax
0815dfdc +0x0250:  je     0815dff6 <+0x26a>
0815dfde +0x0252:  mov    0xc(%ebp),%eax
0815dfe1 +0x0255:  mov    0x4(%eax),%eax
0815dfe4 +0x0258:  mov    (%eax),%eax
0815dfe6 +0x025a:  add    $0x4,%eax
0815dfe9 +0x025d:  mov    (%eax),%edx
0815dfeb +0x025f:  mov    0xc(%ebp),%eax
0815dfee +0x0262:  mov    0x4(%eax),%eax
0815dff1 +0x0265:  mov    %eax,(%esp)
0815dff4 +0x0268:  call   *%edx
0815dff6 +0x026a:  leave
0815dff7 +0x026b:  ret
0815dff8 +0x026c:  push   %ebp
0815dff9 +0x026d:  mov    %esp,%ebp
0815dffb +0x026f:  sub    $0x18,%esp
0815dffe +0x0272:  mov    0x8(%ebp),%eax
0815e001 +0x0275:  movl   $0x1,0x4(%esp)
0815e009 +0x027d:  mov    %eax,(%esp)
0815e00c +0x0280:  call   0815df66 <+0x1da>
0815e011 +0x0285:  mov    0x8(%ebp),%eax
0815e014 +0x0288:  movl   $&_ZTV25LoadServiceRestrictPolicy+0x8,(%eax)
0815e01a +0x028e:  leave
0815e01b +0x028f:  ret
0815e01c +0x0290:  push   %ebp
0815e01d +0x0291:  mov    %esp,%ebp
0815e01f +0x0293:  sub    $0x18,%esp
0815e022 +0x0296:  mov    0x8(%ebp),%eax
0815e025 +0x0299:  movl   $&_ZTV25LoadServiceRestrictPolicy+0x8,(%eax)
0815e02b +0x029f:  mov    0x8(%ebp),%eax
0815e02e +0x02a2:  mov    %eax,(%esp)
0815e031 +0x02a5:  call   0815df7e <+0x1f2>
0815e036 +0x02aa:  mov    $0x0,%eax
0815e03b +0x02af:  test   %al,%al
0815e03d +0x02b1:  je     0815e04a <+0x2be>
0815e03f +0x02b3:  mov    0x8(%ebp),%eax
0815e042 +0x02b6:  mov    %eax,(%esp)
0815e045 +0x02b9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e04a +0x02be:  leave
0815e04b +0x02bf:  ret
0815e04c +0x02c0:  push   %ebp
0815e04d +0x02c1:  mov    %esp,%ebp
0815e04f +0x02c3:  sub    $0x18,%esp
0815e052 +0x02c6:  mov    0x8(%ebp),%eax
0815e055 +0x02c9:  mov    %eax,(%esp)
0815e058 +0x02cc:  call   0815e01c <+0x290>
0815e05d +0x02d1:  mov    0x8(%ebp),%eax
0815e060 +0x02d4:  mov    %eax,(%esp)
0815e063 +0x02d7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e068 +0x02dc:  leave
0815e069 +0x02dd:  ret
0815e06a +0x02de:  push   %ebp
0815e06b +0x02df:  mov    %esp,%ebp
0815e06d +0x02e1:  sub    $0x18,%esp
0815e070 +0x02e4:  mov    0x8(%ebp),%eax
0815e073 +0x02e7:  movl   $0x2,0x4(%esp)
0815e07b +0x02ef:  mov    %eax,(%esp)
0815e07e +0x02f2:  call   0815df66 <+0x1da>
0815e083 +0x02f7:  mov    0x8(%ebp),%eax
0815e086 +0x02fa:  movl   $&_ZTV25SaveServiceRestrictPolicy+0x8,(%eax)
0815e08c +0x0300:  leave
0815e08d +0x0301:  ret
0815e08e +0x0302:  push   %ebp
0815e08f +0x0303:  mov    %esp,%ebp
0815e091 +0x0305:  sub    $0x18,%esp
0815e094 +0x0308:  mov    0x8(%ebp),%eax
0815e097 +0x030b:  movl   $&_ZTV25SaveServiceRestrictPolicy+0x8,(%eax)
0815e09d +0x0311:  mov    0x8(%ebp),%eax
0815e0a0 +0x0314:  mov    %eax,(%esp)
0815e0a3 +0x0317:  call   0815df7e <+0x1f2>
0815e0a8 +0x031c:  mov    $0x0,%eax
0815e0ad +0x0321:  test   %al,%al
0815e0af +0x0323:  je     0815e0bc <+0x330>
0815e0b1 +0x0325:  mov    0x8(%ebp),%eax
0815e0b4 +0x0328:  mov    %eax,(%esp)
0815e0b7 +0x032b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e0bc +0x0330:  leave
0815e0bd +0x0331:  ret
0815e0be +0x0332:  push   %ebp
0815e0bf +0x0333:  mov    %esp,%ebp
0815e0c1 +0x0335:  sub    $0x18,%esp
0815e0c4 +0x0338:  mov    0x8(%ebp),%eax
0815e0c7 +0x033b:  mov    %eax,(%esp)
0815e0ca +0x033e:  call   0815e08e <+0x302>
0815e0cf +0x0343:  mov    0x8(%ebp),%eax
0815e0d2 +0x0346:  mov    %eax,(%esp)
0815e0d5 +0x0349:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e0da +0x034e:  leave
0815e0db +0x034f:  ret
0815e0dc +0x0350:  push   %ebp
0815e0dd +0x0351:  mov    %esp,%ebp
0815e0df +0x0353:  sub    $0x18,%esp
0815e0e2 +0x0356:  mov    0x8(%ebp),%eax
0815e0e5 +0x0359:  movl   $0x4,0x4(%esp)
0815e0ed +0x0361:  mov    %eax,(%esp)
0815e0f0 +0x0364:  call   0815df66 <+0x1da>
0815e0f5 +0x0369:  mov    0x8(%ebp),%eax
0815e0f8 +0x036c:  movl   $&_ZTV15LoadGeolocation+0x8,(%eax)
0815e0fe +0x0372:  leave
0815e0ff +0x0373:  ret
0815e100 +0x0374:  push   %ebp
0815e101 +0x0375:  mov    %esp,%ebp
0815e103 +0x0377:  sub    $0x18,%esp
0815e106 +0x037a:  mov    0x8(%ebp),%eax
0815e109 +0x037d:  movl   $&_ZTV15LoadGeolocation+0x8,(%eax)
0815e10f +0x0383:  mov    0x8(%ebp),%eax
0815e112 +0x0386:  mov    %eax,(%esp)
0815e115 +0x0389:  call   0815df7e <+0x1f2>
0815e11a +0x038e:  mov    $0x0,%eax
0815e11f +0x0393:  test   %al,%al
0815e121 +0x0395:  je     0815e12e <+0x3a2>
0815e123 +0x0397:  mov    0x8(%ebp),%eax
0815e126 +0x039a:  mov    %eax,(%esp)
0815e129 +0x039d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e12e +0x03a2:  leave
0815e12f +0x03a3:  ret
0815e130 +0x03a4:  push   %ebp
0815e131 +0x03a5:  mov    %esp,%ebp
0815e133 +0x03a7:  sub    $0x18,%esp
0815e136 +0x03aa:  mov    0x8(%ebp),%eax
0815e139 +0x03ad:  mov    %eax,(%esp)
0815e13c +0x03b0:  call   0815e100 <+0x374>
0815e141 +0x03b5:  mov    0x8(%ebp),%eax
0815e144 +0x03b8:  mov    %eax,(%esp)
0815e147 +0x03bb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e14c +0x03c0:  leave
0815e14d +0x03c1:  ret
0815e14e +0x03c2:  push   %ebp
0815e14f +0x03c3:  mov    %esp,%ebp
0815e151 +0x03c5:  sub    $0x18,%esp
0815e154 +0x03c8:  mov    0x8(%ebp),%eax
0815e157 +0x03cb:  movl   $0x5,0x4(%esp)
0815e15f +0x03d3:  mov    %eax,(%esp)
0815e162 +0x03d6:  call   0815df66 <+0x1da>
0815e167 +0x03db:  mov    0x8(%ebp),%eax
0815e16a +0x03de:  movl   $&_ZTV18CheckStayTimeEvent+0x8,(%eax)
0815e170 +0x03e4:  leave
0815e171 +0x03e5:  ret
0815e172 +0x03e6:  push   %ebp
0815e173 +0x03e7:  mov    %esp,%ebp
0815e175 +0x03e9:  sub    $0x18,%esp
0815e178 +0x03ec:  mov    0x8(%ebp),%eax
0815e17b +0x03ef:  movl   $&_ZTV18CheckStayTimeEvent+0x8,(%eax)
0815e181 +0x03f5:  mov    0x8(%ebp),%eax
0815e184 +0x03f8:  mov    %eax,(%esp)
0815e187 +0x03fb:  call   0815df7e <+0x1f2>
0815e18c +0x0400:  mov    $0x0,%eax
0815e191 +0x0405:  test   %al,%al
0815e193 +0x0407:  je     0815e1a0 <+0x414>
0815e195 +0x0409:  mov    0x8(%ebp),%eax
0815e198 +0x040c:  mov    %eax,(%esp)
0815e19b +0x040f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e1a0 +0x0414:  leave
0815e1a1 +0x0415:  ret
0815e1a2 +0x0416:  push   %ebp
0815e1a3 +0x0417:  mov    %esp,%ebp
0815e1a5 +0x0419:  sub    $0x18,%esp
0815e1a8 +0x041c:  mov    0x8(%ebp),%eax
0815e1ab +0x041f:  mov    %eax,(%esp)
0815e1ae +0x0422:  call   0815e172 <+0x3e6>
0815e1b3 +0x0427:  mov    0x8(%ebp),%eax
0815e1b6 +0x042a:  mov    %eax,(%esp)
0815e1b9 +0x042d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e1be +0x0432:  leave
0815e1bf +0x0433:  ret
0815e1c0 +0x0434:  push   %ebp
0815e1c1 +0x0435:  mov    %esp,%ebp
0815e1c3 +0x0437:  sub    $0x18,%esp
0815e1c6 +0x043a:  mov    0x8(%ebp),%eax
0815e1c9 +0x043d:  movl   $0x7,0x4(%esp)
0815e1d1 +0x0445:  mov    %eax,(%esp)
0815e1d4 +0x0448:  call   0815df66 <+0x1da>
0815e1d9 +0x044d:  mov    0x8(%ebp),%eax
0815e1dc +0x0450:  movl   $&_ZTV18ResetStayTimeEvent+0x8,(%eax)
0815e1e2 +0x0456:  leave
0815e1e3 +0x0457:  ret
0815e1e4 +0x0458:  push   %ebp
0815e1e5 +0x0459:  mov    %esp,%ebp
0815e1e7 +0x045b:  sub    $0x18,%esp
0815e1ea +0x045e:  mov    0x8(%ebp),%eax
0815e1ed +0x0461:  movl   $&_ZTV18ResetStayTimeEvent+0x8,(%eax)
0815e1f3 +0x0467:  mov    0x8(%ebp),%eax
0815e1f6 +0x046a:  mov    %eax,(%esp)
0815e1f9 +0x046d:  call   0815df7e <+0x1f2>
0815e1fe +0x0472:  mov    $0x0,%eax
0815e203 +0x0477:  test   %al,%al
0815e205 +0x0479:  je     0815e212 <+0x486>
0815e207 +0x047b:  mov    0x8(%ebp),%eax
0815e20a +0x047e:  mov    %eax,(%esp)
0815e20d +0x0481:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e212 +0x0486:  leave
0815e213 +0x0487:  ret
0815e214 +0x0488:  push   %ebp
0815e215 +0x0489:  mov    %esp,%ebp
0815e217 +0x048b:  sub    $0x18,%esp
0815e21a +0x048e:  mov    0x8(%ebp),%eax
0815e21d +0x0491:  mov    %eax,(%esp)
0815e220 +0x0494:  call   0815e1e4 <+0x458>
0815e225 +0x0499:  mov    0x8(%ebp),%eax
0815e228 +0x049c:  mov    %eax,(%esp)
0815e22b +0x049f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e230 +0x04a4:  leave
0815e231 +0x04a5:  ret
0815e232 +0x04a6:  push   %ebp
0815e233 +0x04a7:  mov    %esp,%ebp
0815e235 +0x04a9:  sub    $0x18,%esp
0815e238 +0x04ac:  mov    0x8(%ebp),%eax
0815e23b +0x04af:  movl   $0x8,0x4(%esp)
0815e243 +0x04b7:  mov    %eax,(%esp)
0815e246 +0x04ba:  call   0815df66 <+0x1da>
0815e24b +0x04bf:  mov    0x8(%ebp),%eax
0815e24e +0x04c2:  movl   $&_ZTV16DBUpdateExitTime+0x8,(%eax)
0815e254 +0x04c8:  leave
0815e255 +0x04c9:  ret
0815e256 +0x04ca:  push   %ebp
0815e257 +0x04cb:  mov    %esp,%ebp
0815e259 +0x04cd:  sub    $0x18,%esp
0815e25c +0x04d0:  mov    0x8(%ebp),%eax
0815e25f +0x04d3:  movl   $&_ZTV16DBUpdateExitTime+0x8,(%eax)
0815e265 +0x04d9:  mov    0x8(%ebp),%eax
0815e268 +0x04dc:  mov    %eax,(%esp)
0815e26b +0x04df:  call   0815df7e <+0x1f2>
0815e270 +0x04e4:  mov    $0x0,%eax
0815e275 +0x04e9:  test   %al,%al
0815e277 +0x04eb:  je     0815e284 <+0x4f8>
0815e279 +0x04ed:  mov    0x8(%ebp),%eax
0815e27c +0x04f0:  mov    %eax,(%esp)
0815e27f +0x04f3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e284 +0x04f8:  leave
0815e285 +0x04f9:  ret
0815e286 +0x04fa:  push   %ebp
0815e287 +0x04fb:  mov    %esp,%ebp
0815e289 +0x04fd:  sub    $0x18,%esp
0815e28c +0x0500:  mov    0x8(%ebp),%eax
0815e28f +0x0503:  mov    %eax,(%esp)
0815e292 +0x0506:  call   0815e256 <+0x4ca>
0815e297 +0x050b:  mov    0x8(%ebp),%eax
0815e29a +0x050e:  mov    %eax,(%esp)
0815e29d +0x0511:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e2a2 +0x0516:  leave
0815e2a3 +0x0517:  ret
0815e2a4 +0x0518:  push   %ebp
0815e2a5 +0x0519:  mov    %esp,%ebp
0815e2a7 +0x051b:  sub    $0x18,%esp
0815e2aa +0x051e:  mov    0x8(%ebp),%eax
0815e2ad +0x0521:  movl   $0x9,0x4(%esp)
0815e2b5 +0x0529:  mov    %eax,(%esp)
0815e2b8 +0x052c:  call   0815df66 <+0x1da>
0815e2bd +0x0531:  mov    0x8(%ebp),%eax
0815e2c0 +0x0534:  movl   $&_ZTV26DBSelectCreateDnfEventInfo+0x8,(%eax)
0815e2c6 +0x053a:  leave
0815e2c7 +0x053b:  ret
0815e2c8 +0x053c:  push   %ebp
0815e2c9 +0x053d:  mov    %esp,%ebp
0815e2cb +0x053f:  sub    $0x18,%esp
0815e2ce +0x0542:  mov    0x8(%ebp),%eax
0815e2d1 +0x0545:  movl   $&_ZTV26DBSelectCreateDnfEventInfo+0x8,(%eax)
0815e2d7 +0x054b:  mov    0x8(%ebp),%eax
0815e2da +0x054e:  mov    %eax,(%esp)
0815e2dd +0x0551:  call   0815df7e <+0x1f2>
0815e2e2 +0x0556:  mov    $0x0,%eax
0815e2e7 +0x055b:  test   %al,%al
0815e2e9 +0x055d:  je     0815e2f6 <+0x56a>
0815e2eb +0x055f:  mov    0x8(%ebp),%eax
0815e2ee +0x0562:  mov    %eax,(%esp)
0815e2f1 +0x0565:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e2f6 +0x056a:  leave
0815e2f7 +0x056b:  ret
0815e2f8 +0x056c:  push   %ebp
0815e2f9 +0x056d:  mov    %esp,%ebp
0815e2fb +0x056f:  sub    $0x18,%esp
0815e2fe +0x0572:  mov    0x8(%ebp),%eax
0815e301 +0x0575:  mov    %eax,(%esp)
0815e304 +0x0578:  call   0815e2c8 <+0x53c>
0815e309 +0x057d:  mov    0x8(%ebp),%eax
0815e30c +0x0580:  mov    %eax,(%esp)
0815e30f +0x0583:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e314 +0x0588:  leave
0815e315 +0x0589:  ret
0815e316 +0x058a:  push   %ebp
0815e317 +0x058b:  mov    %esp,%ebp
0815e319 +0x058d:  sub    $0x18,%esp
0815e31c +0x0590:  mov    0x8(%ebp),%eax
0815e31f +0x0593:  movl   $0xa,0x4(%esp)
0815e327 +0x059b:  mov    %eax,(%esp)
0815e32a +0x059e:  call   0815df66 <+0x1da>
0815e32f +0x05a3:  mov    0x8(%ebp),%eax
0815e332 +0x05a6:  movl   $&_ZTV25DBSelectCreateDnfUserInfo+0x8,(%eax)
0815e338 +0x05ac:  leave
0815e339 +0x05ad:  ret
0815e33a +0x05ae:  push   %ebp
0815e33b +0x05af:  mov    %esp,%ebp
0815e33d +0x05b1:  sub    $0x18,%esp
0815e340 +0x05b4:  mov    0x8(%ebp),%eax
0815e343 +0x05b7:  movl   $&_ZTV25DBSelectCreateDnfUserInfo+0x8,(%eax)
0815e349 +0x05bd:  mov    0x8(%ebp),%eax
0815e34c +0x05c0:  mov    %eax,(%esp)
0815e34f +0x05c3:  call   0815df7e <+0x1f2>
0815e354 +0x05c8:  mov    $0x0,%eax
0815e359 +0x05cd:  test   %al,%al
0815e35b +0x05cf:  je     0815e368 <+0x5dc>
0815e35d +0x05d1:  mov    0x8(%ebp),%eax
0815e360 +0x05d4:  mov    %eax,(%esp)
0815e363 +0x05d7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e368 +0x05dc:  leave
0815e369 +0x05dd:  ret
0815e36a +0x05de:  push   %ebp
0815e36b +0x05df:  mov    %esp,%ebp
0815e36d +0x05e1:  sub    $0x18,%esp
0815e370 +0x05e4:  mov    0x8(%ebp),%eax
0815e373 +0x05e7:  mov    %eax,(%esp)
0815e376 +0x05ea:  call   0815e33a <+0x5ae>
0815e37b +0x05ef:  mov    0x8(%ebp),%eax
0815e37e +0x05f2:  mov    %eax,(%esp)
0815e381 +0x05f5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e386 +0x05fa:  leave
0815e387 +0x05fb:  ret
0815e388 +0x05fc:  push   %ebp
0815e389 +0x05fd:  mov    %esp,%ebp
0815e38b +0x05ff:  sub    $0x18,%esp
0815e38e +0x0602:  mov    0x8(%ebp),%eax
0815e391 +0x0605:  movl   $0xb,0x4(%esp)
0815e399 +0x060d:  mov    %eax,(%esp)
0815e39c +0x0610:  call   0815df66 <+0x1da>
0815e3a1 +0x0615:  mov    0x8(%ebp),%eax
0815e3a4 +0x0618:  movl   $&_ZTV25DBInsertCreateDnfUserInfo+0x8,(%eax)
0815e3aa +0x061e:  leave
0815e3ab +0x061f:  ret
0815e3ac +0x0620:  push   %ebp
0815e3ad +0x0621:  mov    %esp,%ebp
0815e3af +0x0623:  sub    $0x18,%esp
0815e3b2 +0x0626:  mov    0x8(%ebp),%eax
0815e3b5 +0x0629:  movl   $&_ZTV25DBInsertCreateDnfUserInfo+0x8,(%eax)
0815e3bb +0x062f:  mov    0x8(%ebp),%eax
0815e3be +0x0632:  mov    %eax,(%esp)
0815e3c1 +0x0635:  call   0815df7e <+0x1f2>
0815e3c6 +0x063a:  mov    $0x0,%eax
0815e3cb +0x063f:  test   %al,%al
0815e3cd +0x0641:  je     0815e3da <+0x64e>
0815e3cf +0x0643:  mov    0x8(%ebp),%eax
0815e3d2 +0x0646:  mov    %eax,(%esp)
0815e3d5 +0x0649:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e3da +0x064e:  leave
0815e3db +0x064f:  ret
0815e3dc +0x0650:  push   %ebp
0815e3dd +0x0651:  mov    %esp,%ebp
0815e3df +0x0653:  sub    $0x18,%esp
0815e3e2 +0x0656:  mov    0x8(%ebp),%eax
0815e3e5 +0x0659:  mov    %eax,(%esp)
0815e3e8 +0x065c:  call   0815e3ac <+0x620>
0815e3ed +0x0661:  mov    0x8(%ebp),%eax
0815e3f0 +0x0664:  mov    %eax,(%esp)
0815e3f3 +0x0667:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e3f8 +0x066c:  leave
0815e3f9 +0x066d:  ret
0815e3fa +0x066e:  push   %ebp
0815e3fb +0x066f:  mov    %esp,%ebp
0815e3fd +0x0671:  sub    $0x18,%esp
0815e400 +0x0674:  mov    0x8(%ebp),%eax
0815e403 +0x0677:  movl   $0xc,0x4(%esp)
0815e40b +0x067f:  mov    %eax,(%esp)
0815e40e +0x0682:  call   0815df66 <+0x1da>
0815e413 +0x0687:  mov    0x8(%ebp),%eax
0815e416 +0x068a:  movl   $&_ZTV26DBSelectMobileAuthRewardTw+0x8,(%eax)
0815e41c +0x0690:  leave
0815e41d +0x0691:  ret
0815e41e +0x0692:  push   %ebp
0815e41f +0x0693:  mov    %esp,%ebp
0815e421 +0x0695:  sub    $0x18,%esp
0815e424 +0x0698:  mov    0x8(%ebp),%eax
0815e427 +0x069b:  movl   $&_ZTV26DBSelectMobileAuthRewardTw+0x8,(%eax)
0815e42d +0x06a1:  mov    0x8(%ebp),%eax
0815e430 +0x06a4:  mov    %eax,(%esp)
0815e433 +0x06a7:  call   0815df7e <+0x1f2>
0815e438 +0x06ac:  mov    $0x0,%eax
0815e43d +0x06b1:  test   %al,%al
0815e43f +0x06b3:  je     0815e44c <+0x6c0>
0815e441 +0x06b5:  mov    0x8(%ebp),%eax
0815e444 +0x06b8:  mov    %eax,(%esp)
0815e447 +0x06bb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e44c +0x06c0:  leave
0815e44d +0x06c1:  ret
0815e44e +0x06c2:  push   %ebp
0815e44f +0x06c3:  mov    %esp,%ebp
0815e451 +0x06c5:  sub    $0x18,%esp
0815e454 +0x06c8:  mov    0x8(%ebp),%eax
0815e457 +0x06cb:  mov    %eax,(%esp)
0815e45a +0x06ce:  call   0815e41e <+0x692>
0815e45f +0x06d3:  mov    0x8(%ebp),%eax
0815e462 +0x06d6:  mov    %eax,(%esp)
0815e465 +0x06d9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e46a +0x06de:  leave
0815e46b +0x06df:  ret
0815e46c +0x06e0:  push   %ebp
0815e46d +0x06e1:  mov    %esp,%ebp
0815e46f +0x06e3:  sub    $0x18,%esp
0815e472 +0x06e6:  mov    0x8(%ebp),%eax
0815e475 +0x06e9:  movl   $0xd,0x4(%esp)
0815e47d +0x06f1:  mov    %eax,(%esp)
0815e480 +0x06f4:  call   0815df66 <+0x1da>
0815e485 +0x06f9:  mov    0x8(%ebp),%eax
0815e488 +0x06fc:  movl   $&_ZTV25DBSelectPcroomDailyReward+0x8,(%eax)
0815e48e +0x0702:  leave
0815e48f +0x0703:  ret
0815e490 +0x0704:  push   %ebp
0815e491 +0x0705:  mov    %esp,%ebp
0815e493 +0x0707:  sub    $0x18,%esp
0815e496 +0x070a:  mov    0x8(%ebp),%eax
0815e499 +0x070d:  movl   $&_ZTV25DBSelectPcroomDailyReward+0x8,(%eax)
0815e49f +0x0713:  mov    0x8(%ebp),%eax
0815e4a2 +0x0716:  mov    %eax,(%esp)
0815e4a5 +0x0719:  call   0815df7e <+0x1f2>
0815e4aa +0x071e:  mov    $0x0,%eax
0815e4af +0x0723:  test   %al,%al
0815e4b1 +0x0725:  je     0815e4be <+0x732>
0815e4b3 +0x0727:  mov    0x8(%ebp),%eax
0815e4b6 +0x072a:  mov    %eax,(%esp)
0815e4b9 +0x072d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e4be +0x0732:  leave
0815e4bf +0x0733:  ret
0815e4c0 +0x0734:  push   %ebp
0815e4c1 +0x0735:  mov    %esp,%ebp
0815e4c3 +0x0737:  sub    $0x18,%esp
0815e4c6 +0x073a:  mov    0x8(%ebp),%eax
0815e4c9 +0x073d:  mov    %eax,(%esp)
0815e4cc +0x0740:  call   0815e490 <+0x704>
0815e4d1 +0x0745:  mov    0x8(%ebp),%eax
0815e4d4 +0x0748:  mov    %eax,(%esp)
0815e4d7 +0x074b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e4dc +0x0750:  leave
0815e4dd +0x0751:  ret
0815e4de +0x0752:  push   %ebp
0815e4df +0x0753:  mov    %esp,%ebp
0815e4e1 +0x0755:  sub    $0x18,%esp
0815e4e4 +0x0758:  mov    0x8(%ebp),%eax
0815e4e7 +0x075b:  movl   $0xe,0x4(%esp)
0815e4ef +0x0763:  mov    %eax,(%esp)
0815e4f2 +0x0766:  call   0815df66 <+0x1da>
0815e4f7 +0x076b:  mov    0x8(%ebp),%eax
0815e4fa +0x076e:  movl   $&_ZTV25DBUpdatePcroomDailyReward+0x8,(%eax)
0815e500 +0x0774:  leave
0815e501 +0x0775:  ret
0815e502 +0x0776:  push   %ebp
0815e503 +0x0777:  mov    %esp,%ebp
0815e505 +0x0779:  sub    $0x18,%esp
0815e508 +0x077c:  mov    0x8(%ebp),%eax
0815e50b +0x077f:  movl   $&_ZTV25DBUpdatePcroomDailyReward+0x8,(%eax)
0815e511 +0x0785:  mov    0x8(%ebp),%eax
0815e514 +0x0788:  mov    %eax,(%esp)
0815e517 +0x078b:  call   0815df7e <+0x1f2>
0815e51c +0x0790:  mov    $0x0,%eax
0815e521 +0x0795:  test   %al,%al
0815e523 +0x0797:  je     0815e530 <+0x7a4>
0815e525 +0x0799:  mov    0x8(%ebp),%eax
0815e528 +0x079c:  mov    %eax,(%esp)
0815e52b +0x079f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e530 +0x07a4:  leave
0815e531 +0x07a5:  ret
0815e532 +0x07a6:  push   %ebp
0815e533 +0x07a7:  mov    %esp,%ebp
0815e535 +0x07a9:  sub    $0x18,%esp
0815e538 +0x07ac:  mov    0x8(%ebp),%eax
0815e53b +0x07af:  mov    %eax,(%esp)
0815e53e +0x07b2:  call   0815e502 <+0x776>
0815e543 +0x07b7:  mov    0x8(%ebp),%eax
0815e546 +0x07ba:  mov    %eax,(%esp)
0815e549 +0x07bd:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e54e +0x07c2:  leave
0815e54f +0x07c3:  ret
0815e550 +0x07c4:  push   %ebp
0815e551 +0x07c5:  mov    %esp,%ebp
0815e553 +0x07c7:  sub    $0x18,%esp
0815e556 +0x07ca:  mov    0x8(%ebp),%eax
0815e559 +0x07cd:  movl   $0x10,0x4(%esp)
0815e561 +0x07d5:  mov    %eax,(%esp)
0815e564 +0x07d8:  call   0815df66 <+0x1da>
0815e569 +0x07dd:  mov    0x8(%ebp),%eax
0815e56c +0x07e0:  movl   $&_ZTV26DBInsertGiveBoxEventReward+0x8,(%eax)
0815e572 +0x07e6:  leave
0815e573 +0x07e7:  ret
0815e574 +0x07e8:  push   %ebp
0815e575 +0x07e9:  mov    %esp,%ebp
0815e577 +0x07eb:  sub    $0x18,%esp
0815e57a +0x07ee:  mov    0x8(%ebp),%eax
0815e57d +0x07f1:  movl   $&_ZTV26DBInsertGiveBoxEventReward+0x8,(%eax)
0815e583 +0x07f7:  mov    0x8(%ebp),%eax
0815e586 +0x07fa:  mov    %eax,(%esp)
0815e589 +0x07fd:  call   0815df7e <+0x1f2>
0815e58e +0x0802:  mov    $0x0,%eax
0815e593 +0x0807:  test   %al,%al
0815e595 +0x0809:  je     0815e5a2 <+0x816>
0815e597 +0x080b:  mov    0x8(%ebp),%eax
0815e59a +0x080e:  mov    %eax,(%esp)
0815e59d +0x0811:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e5a2 +0x0816:  leave
0815e5a3 +0x0817:  ret
0815e5a4 +0x0818:  push   %ebp
0815e5a5 +0x0819:  mov    %esp,%ebp
0815e5a7 +0x081b:  sub    $0x18,%esp
0815e5aa +0x081e:  mov    0x8(%ebp),%eax
0815e5ad +0x0821:  mov    %eax,(%esp)
0815e5b0 +0x0824:  call   0815e574 <+0x7e8>
0815e5b5 +0x0829:  mov    0x8(%ebp),%eax
0815e5b8 +0x082c:  mov    %eax,(%esp)
0815e5bb +0x082f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e5c0 +0x0834:  leave
0815e5c1 +0x0835:  ret
0815e5c2 +0x0836:  push   %ebp
0815e5c3 +0x0837:  mov    %esp,%ebp
0815e5c5 +0x0839:  sub    $0x18,%esp
0815e5c8 +0x083c:  mov    0x8(%ebp),%eax
0815e5cb +0x083f:  movl   $0x12,0x4(%esp)
0815e5d3 +0x0847:  mov    %eax,(%esp)
0815e5d6 +0x084a:  call   0815df66 <+0x1da>
0815e5db +0x084f:  mov    0x8(%ebp),%eax
0815e5de +0x0852:  movl   $&_ZTV26DBLoadHeroMissionEventData+0x8,(%eax)
0815e5e4 +0x0858:  leave
0815e5e5 +0x0859:  ret
0815e5e6 +0x085a:  push   %ebp
0815e5e7 +0x085b:  mov    %esp,%ebp
0815e5e9 +0x085d:  sub    $0x18,%esp
0815e5ec +0x0860:  mov    0x8(%ebp),%eax
0815e5ef +0x0863:  movl   $&_ZTV26DBLoadHeroMissionEventData+0x8,(%eax)
0815e5f5 +0x0869:  mov    0x8(%ebp),%eax
0815e5f8 +0x086c:  mov    %eax,(%esp)
0815e5fb +0x086f:  call   0815df7e <+0x1f2>
0815e600 +0x0874:  mov    $0x0,%eax
0815e605 +0x0879:  test   %al,%al
0815e607 +0x087b:  je     0815e614 <+0x888>
0815e609 +0x087d:  mov    0x8(%ebp),%eax
0815e60c +0x0880:  mov    %eax,(%esp)
0815e60f +0x0883:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e614 +0x0888:  leave
0815e615 +0x0889:  ret
0815e616 +0x088a:  push   %ebp
0815e617 +0x088b:  mov    %esp,%ebp
0815e619 +0x088d:  sub    $0x18,%esp
0815e61c +0x0890:  mov    0x8(%ebp),%eax
0815e61f +0x0893:  mov    %eax,(%esp)
0815e622 +0x0896:  call   0815e5e6 <+0x85a>
0815e627 +0x089b:  mov    0x8(%ebp),%eax
0815e62a +0x089e:  mov    %eax,(%esp)
0815e62d +0x08a1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e632 +0x08a6:  leave
0815e633 +0x08a7:  ret
0815e634 +0x08a8:  push   %ebp
0815e635 +0x08a9:  mov    %esp,%ebp
0815e637 +0x08ab:  sub    $0x18,%esp
0815e63a +0x08ae:  mov    0x8(%ebp),%eax
0815e63d +0x08b1:  movl   $0x11,0x4(%esp)
0815e645 +0x08b9:  mov    %eax,(%esp)
0815e648 +0x08bc:  call   0815df66 <+0x1da>
0815e64d +0x08c1:  mov    0x8(%ebp),%eax
0815e650 +0x08c4:  movl   $&_ZTV26DBSaveHeroMissionEventData+0x8,(%eax)
0815e656 +0x08ca:  leave
0815e657 +0x08cb:  ret
0815e658 +0x08cc:  push   %ebp
0815e659 +0x08cd:  mov    %esp,%ebp
0815e65b +0x08cf:  sub    $0x18,%esp
0815e65e +0x08d2:  mov    0x8(%ebp),%eax
0815e661 +0x08d5:  movl   $&_ZTV26DBSaveHeroMissionEventData+0x8,(%eax)
0815e667 +0x08db:  mov    0x8(%ebp),%eax
0815e66a +0x08de:  mov    %eax,(%esp)
0815e66d +0x08e1:  call   0815df7e <+0x1f2>
0815e672 +0x08e6:  mov    $0x0,%eax
0815e677 +0x08eb:  test   %al,%al
0815e679 +0x08ed:  je     0815e686 <+0x8fa>
0815e67b +0x08ef:  mov    0x8(%ebp),%eax
0815e67e +0x08f2:  mov    %eax,(%esp)
0815e681 +0x08f5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e686 +0x08fa:  leave
0815e687 +0x08fb:  ret
0815e688 +0x08fc:  push   %ebp
0815e689 +0x08fd:  mov    %esp,%ebp
0815e68b +0x08ff:  sub    $0x18,%esp
0815e68e +0x0902:  mov    0x8(%ebp),%eax
0815e691 +0x0905:  mov    %eax,(%esp)
0815e694 +0x0908:  call   0815e658 <+0x8cc>
0815e699 +0x090d:  mov    0x8(%ebp),%eax
0815e69c +0x0910:  mov    %eax,(%esp)
0815e69f +0x0913:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815e6a4 +0x0918:  leave
0815e6a5 +0x0919:  ret
0815e6a6 +0x091a:  push   %ebp
0815e6a7 +0x091b:  mov    %esp,%ebp
0815e6a9 +0x091d:  sub    $0x18,%esp
0815e6ac +0x0920:  mov    0x8(%ebp),%eax
0815e6af +0x0923:  mov    0xc(%eax),%eax
0815e6b2 +0x0926:  test   %eax,%eax
0815e6b4 +0x0928:  je     0815e6cf <+0x943>
0815e6b6 +0x092a:  mov    0xc(%ebp),%eax
0815e6b9 +0x092d:  mov    %eax,0x4(%esp)
0815e6bd +0x0931:  mov    0x8(%ebp),%eax
0815e6c0 +0x0934:  mov    %eax,(%esp)
0815e6c3 +0x0937:  call   080e22d0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x76>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x76
0815e6c8 +0x093c:  xor    $0x1,%eax
0815e6cb +0x093f:  test   %al,%al
0815e6cd +0x0941:  je     0815e6d6 <+0x94a>
0815e6cf +0x0943:  mov    $0x1,%eax
0815e6d4 +0x0948:  jmp    0815e6db <+0x94f>
0815e6d6 +0x094a:  mov    $0x0,%eax
0815e6db +0x094f:  test   %al,%al
0815e6dd +0x0951:  je     0815e6e6 <+0x95a>
0815e6df +0x0953:  mov    $0x0,%eax
0815e6e4 +0x0958:  jmp    0815e703 <+0x977>
0815e6e6 +0x095a:  mov    0x8(%ebp),%eax
0815e6e9 +0x095d:  mov    0xc(%eax),%eax
0815e6ec +0x0960:  mov    0xc(%ebp),%edx
0815e6ef +0x0963:  shl    $0x2,%edx
0815e6f2 +0x0966:  add    %edx,%eax
0815e6f4 +0x0968:  mov    (%eax),%eax
0815e6f6 +0x096a:  movzbl (%eax),%edx
0815e6f9 +0x096d:  mov    0x10(%ebp),%eax
0815e6fc +0x0970:  mov    %dl,(%eax)
0815e6fe +0x0972:  mov    $0x1,%eax
0815e703 +0x0977:  leave
0815e704 +0x0978:  ret
0815e705 +0x0979:  nop
0815e706 +0x097a:  push   %ebp
0815e707 +0x097b:  mov    %esp,%ebp
0815e709 +0x097d:  sub    $0x18,%esp
0815e70c +0x0980:  mov    0x8(%ebp),%eax
0815e70f +0x0983:  mov    %eax,(%esp)
0815e712 +0x0986:  call   0815e742 <+0x9b6>
0815e717 +0x098b:  leave
0815e718 +0x098c:  ret
0815e719 +0x098d:  nop
0815e71a +0x098e:  push   %ebp
0815e71b +0x098f:  mov    %esp,%ebp
0815e71d +0x0991:  sub    $0x18,%esp
0815e720 +0x0994:  mov    0x8(%ebp),%eax
0815e723 +0x0997:  mov    %eax,(%esp)
0815e726 +0x099a:  call   0815ee30 <+0x10a4>
0815e72b +0x099f:  leave
0815e72c +0x09a0:  ret
0815e72d +0x09a1:  nop
0815e72e +0x09a2:  push   %ebp
0815e72f +0x09a3:  mov    %esp,%ebp
0815e731 +0x09a5:  sub    $0x18,%esp
0815e734 +0x09a8:  mov    0x8(%ebp),%eax
0815e737 +0x09ab:  mov    %eax,(%esp)
0815e73a +0x09ae:  call   0815ee44 <+0x10b8>
0815e73f +0x09b3:  leave
0815e740 +0x09b4:  ret
0815e741 +0x09b5:  nop
0815e742 +0x09b6:  push   %ebp
0815e743 +0x09b7:  mov    %esp,%ebp
0815e745 +0x09b9:  push   %esi
0815e746 +0x09ba:  push   %ebx
0815e747 +0x09bb:  sub    $0x10,%esp
0815e74a +0x09be:  mov    0x8(%ebp),%eax
0815e74d +0x09c1:  mov    %eax,(%esp)
0815e750 +0x09c4:  call   0815eeae <+0x1122>
0815e755 +0x09c9:  mov    %eax,0x4(%esp)
0815e759 +0x09cd:  mov    0x8(%ebp),%eax
0815e75c +0x09d0:  mov    %eax,(%esp)
0815e75f +0x09d3:  call   0815ee58 <+0x10cc>
0815e764 +0x09d8:  jmp    0815e781 <+0x9f5>
0815e766 +0x09da:  mov    %edx,%ebx
0815e768 +0x09dc:  mov    %eax,%esi
0815e76a +0x09de:  mov    0x8(%ebp),%eax
0815e76d +0x09e1:  mov    %eax,(%esp)
0815e770 +0x09e4:  call   0815e72e <+0x9a2>
0815e775 +0x09e9:  mov    %esi,%eax
0815e777 +0x09eb:  mov    %ebx,%edx
0815e779 +0x09ed:  mov    %eax,(%esp)
0815e77c +0x09f0:  call   08ae3750 <_Unwind_Resume>
0815e781 +0x09f5:  mov    0x8(%ebp),%eax
0815e784 +0x09f8:  mov    %eax,(%esp)
0815e787 +0x09fb:  call   0815e72e <+0x9a2>
0815e78c +0x0a00:  add    $0x10,%esp
0815e78f +0x0a03:  pop    %ebx
0815e790 +0x0a04:  pop    %esi
0815e791 +0x0a05:  pop    %ebp
0815e792 +0x0a06:  ret
0815e793 +0x0a07:  nop
0815e794 +0x0a08:  push   %ebp
0815e795 +0x0a09:  mov    %esp,%ebp
0815e797 +0x0a0b:  sub    $0x18,%esp
0815e79a +0x0a0e:  mov    0x8(%ebp),%eax
0815e79d +0x0a11:  mov    %eax,(%esp)
0815e7a0 +0x0a14:  call   0815eeba <+0x112e>
0815e7a5 +0x0a19:  leave
0815e7a6 +0x0a1a:  ret
0815e7a7 +0x0a1b:  nop
0815e7a8 +0x0a1c:  push   %ebp
0815e7a9 +0x0a1d:  mov    %esp,%ebp
0815e7ab +0x0a1f:  push   %ebx
0815e7ac +0x0a20:  sub    $0x14,%esp
0815e7af +0x0a23:  mov    0x8(%ebp),%ebx
0815e7b2 +0x0a26:  mov    0xc(%ebp),%eax
0815e7b5 +0x0a29:  mov    %eax,0x4(%esp)
0815e7b9 +0x0a2d:  mov    %ebx,(%esp)
0815e7bc +0x0a30:  call   0815ef30 <+0x11a4>
0815e7c1 +0x0a35:  sub    $0x4,%esp
0815e7c4 +0x0a38:  mov    %ebx,%eax
0815e7c6 +0x0a3a:  mov    -0x4(%ebp),%ebx
0815e7c9 +0x0a3d:  leave
0815e7ca +0x0a3e:  ret    $0x4
0815e7cd +0x0a41:  nop
0815e7ce +0x0a42:  push   %ebp
0815e7cf +0x0a43:  mov    %esp,%ebp
0815e7d1 +0x0a45:  push   %ebx
0815e7d2 +0x0a46:  sub    $0x14,%esp
0815e7d5 +0x0a49:  mov    0x8(%ebp),%ebx
0815e7d8 +0x0a4c:  mov    0xc(%ebp),%eax
0815e7db +0x0a4f:  mov    %eax,0x4(%esp)
0815e7df +0x0a53:  mov    %ebx,(%esp)
0815e7e2 +0x0a56:  call   0815ef56 <+0x11ca>
0815e7e7 +0x0a5b:  sub    $0x4,%esp
0815e7ea +0x0a5e:  mov    %ebx,%eax
0815e7ec +0x0a60:  mov    -0x4(%ebp),%ebx
0815e7ef +0x0a63:  leave
0815e7f0 +0x0a64:  ret    $0x4
0815e7f3 +0x0a67:  push   %ebp
0815e7f4 +0x0a68:  mov    %esp,%ebp
0815e7f6 +0x0a6a:  push   %ebx
0815e7f7 +0x0a6b:  sub    $0x14,%esp
0815e7fa +0x0a6e:  mov    0x8(%ebp),%ebx
0815e7fd +0x0a71:  jmp    0815e824 <+0xa98>
0815e7ff +0x0a73:  lea    0xc(%ebp),%eax
0815e802 +0x0a76:  mov    %eax,(%esp)
0815e805 +0x0a79:  call   0815ef9a <+0x120e>
0815e80a +0x0a7e:  mov    %eax,0x4(%esp)
0815e80e +0x0a82:  lea    0x14(%ebp),%eax
0815e811 +0x0a85:  mov    %eax,(%esp)
0815e814 +0x0a88:  call   0815dfce <+0x242>
0815e819 +0x0a8d:  lea    0xc(%ebp),%eax
0815e81c +0x0a90:  mov    %eax,(%esp)
0815e81f +0x0a93:  call   0815ef7c <+0x11f0>
0815e824 +0x0a98:  lea    0x10(%ebp),%eax
0815e827 +0x0a9b:  mov    %eax,0x4(%esp)
0815e82b +0x0a9f:  lea    0xc(%ebp),%eax
0815e82e +0x0aa2:  mov    %eax,(%esp)
0815e831 +0x0aa5:  call   0815e870 <+0xae4>
0815e836 +0x0aaa:  test   %al,%al
0815e838 +0x0aac:  jne    0815e7ff <+0xa73>
0815e83a +0x0aae:  mov    %ebx,%eax
0815e83c +0x0ab0:  add    $0x14,%esp
0815e83f +0x0ab3:  pop    %ebx
0815e840 +0x0ab4:  pop    %ebp
0815e841 +0x0ab5:  ret    $0x4
0815e844 +0x0ab8:  push   %ebp
0815e845 +0x0ab9:  mov    %esp,%ebp
0815e847 +0x0abb:  push   %ebx
0815e848 +0x0abc:  sub    $0x14,%esp
0815e84b +0x0abf:  mov    0x8(%ebp),%ebx
0815e84e +0x0ac2:  mov    0xc(%ebp),%eax
0815e851 +0x0ac5:  mov    0x10(%ebp),%edx
0815e854 +0x0ac8:  mov    %edx,0x8(%esp)
0815e858 +0x0acc:  mov    %eax,0x4(%esp)
0815e85c +0x0ad0:  mov    %ebx,(%esp)
0815e85f +0x0ad3:  call   0815efa8 <+0x121c>
0815e864 +0x0ad8:  sub    $0x4,%esp
0815e867 +0x0adb:  mov    %ebx,%eax
0815e869 +0x0add:  mov    -0x4(%ebp),%ebx
0815e86c +0x0ae0:  leave
0815e86d +0x0ae1:  ret    $0x4
0815e870 +0x0ae4:  push   %ebp
0815e871 +0x0ae5:  mov    %esp,%ebp
0815e873 +0x0ae7:  mov    0x8(%ebp),%eax
0815e876 +0x0aea:  mov    (%eax),%edx
0815e878 +0x0aec:  mov    0xc(%ebp),%eax
0815e87b +0x0aef:  mov    (%eax),%eax
0815e87d +0x0af1:  cmp    %eax,%edx
0815e87f +0x0af3:  setne  %al
0815e882 +0x0af6:  pop    %ebp
0815e883 +0x0af7:  ret
0815e884 +0x0af8:  push   %ebp
0815e885 +0x0af9:  mov    %esp,%ebp
0815e887 +0x0afb:  mov    0x8(%ebp),%eax
0815e88a +0x0afe:  mov    (%eax),%eax
0815e88c +0x0b00:  add    $0x10,%eax
0815e88f +0x0b03:  pop    %ebp
0815e890 +0x0b04:  ret
0815e891 +0x0b05:  nop
0815e892 +0x0b06:  push   %ebp
0815e893 +0x0b07:  mov    %esp,%ebp
0815e895 +0x0b09:  push   %ebx
0815e896 +0x0b0a:  sub    $0x44,%esp
0815e899 +0x0b0d:  lea    -0x20(%ebp),%eax
0815e89c +0x0b10:  mov    0xc(%ebp),%edx
0815e89f +0x0b13:  mov    %edx,0x8(%esp)
0815e8a3 +0x0b17:  mov    0x8(%ebp),%edx
0815e8a6 +0x0b1a:  mov    %edx,0x4(%esp)
0815e8aa +0x0b1e:  mov    %eax,(%esp)
0815e8ad +0x0b21:  call   0815f066 <+0x12da>
0815e8b2 +0x0b26:  sub    $0x4,%esp
0815e8b5 +0x0b29:  lea    -0x1c(%ebp),%eax
0815e8b8 +0x0b2c:  mov    0x8(%ebp),%edx
0815e8bb +0x0b2f:  mov    %edx,0x4(%esp)
0815e8bf +0x0b33:  mov    %eax,(%esp)
0815e8c2 +0x0b36:  call   0815e7ce <+0xa42>
0815e8c7 +0x0b3b:  sub    $0x4,%esp
0815e8ca +0x0b3e:  lea    -0x1c(%ebp),%eax
0815e8cd +0x0b41:  mov    %eax,0x4(%esp)
0815e8d1 +0x0b45:  lea    -0x20(%ebp),%eax
0815e8d4 +0x0b48:  mov    %eax,(%esp)
0815e8d7 +0x0b4b:  call   0815f0ce <+0x1342>
0815e8dc +0x0b50:  test   %al,%al
0815e8de +0x0b52:  jne    0815e91c <+0xb90>
0815e8e0 +0x0b54:  lea    -0x20(%ebp),%eax
0815e8e3 +0x0b57:  mov    %eax,(%esp)
0815e8e6 +0x0b5a:  call   0815ef9a <+0x120e>
0815e8eb +0x0b5f:  mov    %eax,%ebx
0815e8ed +0x0b61:  lea    -0x15(%ebp),%eax
0815e8f0 +0x0b64:  mov    0x8(%ebp),%edx
0815e8f3 +0x0b67:  mov    %edx,0x4(%esp)
0815e8f7 +0x0b6b:  mov    %eax,(%esp)
0815e8fa +0x0b6e:  call   0815f092 <+0x1306>
0815e8ff +0x0b73:  sub    $0x4,%esp
0815e902 +0x0b76:  mov    %ebx,0x8(%esp)
0815e906 +0x0b7a:  mov    0xc(%ebp),%eax
0815e909 +0x0b7d:  mov    %eax,0x4(%esp)
0815e90d +0x0b81:  lea    -0x15(%ebp),%eax
0815e910 +0x0b84:  mov    %eax,(%esp)
0815e913 +0x0b87:  call   0815f0b8 <+0x132c>
0815e918 +0x0b8c:  test   %al,%al
0815e91a +0x0b8e:  je     0815e923 <+0xb97>
0815e91c +0x0b90:  mov    $0x1,%eax
0815e921 +0x0b95:  jmp    0815e928 <+0xb9c>
0815e923 +0x0b97:  mov    $0x0,%eax
0815e928 +0x0b9c:  test   %al,%al
0815e92a +0x0b9e:  je     0815e975 <+0xbe9>
0815e92c +0x0ba0:  movl   $0x0,-0xc(%ebp)
0815e933 +0x0ba7:  lea    -0xc(%ebp),%eax
0815e936 +0x0baa:  mov    %eax,0x8(%esp)
0815e93a +0x0bae:  mov    0xc(%ebp),%eax
0815e93d +0x0bb1:  mov    %eax,0x4(%esp)
0815e941 +0x0bb5:  lea    -0x14(%ebp),%eax
0815e944 +0x0bb8:  mov    %eax,(%esp)
0815e947 +0x0bbb:  call   0815f0e2 <+0x1356>
0815e94c +0x0bc0:  lea    -0x2c(%ebp),%eax
0815e94f +0x0bc3:  lea    -0x14(%ebp),%edx
0815e952 +0x0bc6:  mov    %edx,0xc(%esp)
0815e956 +0x0bca:  mov    -0x20(%ebp),%edx
0815e959 +0x0bcd:  mov    %edx,0x8(%esp)
0815e95d +0x0bd1:  mov    0x8(%ebp),%edx
0815e960 +0x0bd4:  mov    %edx,0x4(%esp)
0815e964 +0x0bd8:  mov    %eax,(%esp)
0815e967 +0x0bdb:  call   0815f110 <+0x1384>
0815e96c +0x0be0:  sub    $0x4,%esp
0815e96f +0x0be3:  mov    -0x2c(%ebp),%eax
0815e972 +0x0be6:  mov    %eax,-0x20(%ebp)
0815e975 +0x0be9:  lea    -0x20(%ebp),%eax
0815e978 +0x0bec:  mov    %eax,(%esp)
0815e97b +0x0bef:  call   0815ef9a <+0x120e>
0815e980 +0x0bf4:  add    $0x4,%eax
0815e983 +0x0bf7:  mov    -0x4(%ebp),%ebx
0815e986 +0x0bfa:  leave
0815e987 +0x0bfb:  ret
0815e988 +0x0bfc:  push   %ebp
0815e989 +0x0bfd:  mov    %esp,%ebp
0815e98b +0x0bff:  sub    $0x18,%esp
0815e98e +0x0c02:  mov    0x8(%ebp),%eax
0815e991 +0x0c05:  mov    0xc(%ebp),%edx
0815e994 +0x0c08:  mov    %edx,0x4(%esp)
0815e998 +0x0c0c:  mov    %eax,(%esp)
0815e99b +0x0c0f:  call   0815f156 <+0x13ca>
0815e9a0 +0x0c14:  leave
0815e9a1 +0x0c15:  ret
0815e9a2 +0x0c16:  push   %ebp
0815e9a3 +0x0c17:  mov    %esp,%ebp
0815e9a5 +0x0c19:  sub    $0x18,%esp
0815e9a8 +0x0c1c:  mov    0x8(%ebp),%eax
0815e9ab +0x0c1f:  mov    (%eax),%eax
0815e9ad +0x0c21:  mov    %eax,(%esp)
0815e9b0 +0x0c24:  call   0815f198 <+0x140c>
0815e9b5 +0x0c29:  leave
0815e9b6 +0x0c2a:  ret
0815e9b7 +0x0c2b:  nop
0815e9b8 +0x0c2c:  push   %ebp
0815e9b9 +0x0c2d:  mov    %esp,%ebp
0815e9bb +0x0c2f:  sub    $0x28,%esp
0815e9be +0x0c32:  movl   $0x1200,0x4(%esp)
0815e9c6 +0x0c3a:  mov    0x8(%ebp),%eax
0815e9c9 +0x0c3d:  mov    %eax,(%esp)
0815e9cc +0x0c40:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0815e9d1 +0x0c45:  xor    $0x1,%eax
0815e9d4 +0x0c48:  test   %al,%al
0815e9d6 +0x0c4a:  je     0815e9df <+0xc53>
0815e9d8 +0x0c4c:  mov    $0x0,%eax
0815e9dd +0x0c51:  jmp    0815ea09 <+0xc7d>
0815e9df +0x0c53:  mov    0x8(%ebp),%eax
0815e9e2 +0x0c56:  mov    0x8(%eax),%eax
0815e9e5 +0x0c59:  mov    %eax,%edx
0815e9e7 +0x0c5b:  mov    0x8(%ebp),%eax
0815e9ea +0x0c5e:  mov    0x10(%eax),%eax
0815e9ed +0x0c61:  lea    (%edx,%eax,1),%eax
0815e9f0 +0x0c64:  mov    %eax,-0xc(%ebp)
0815e9f3 +0x0c67:  movl   $0x1200,0x4(%esp)
0815e9fb +0x0c6f:  mov    0x8(%ebp),%eax
0815e9fe +0x0c72:  mov    %eax,(%esp)
0815ea01 +0x0c75:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0815ea06 +0x0c7a:  mov    -0xc(%ebp),%eax
0815ea09 +0x0c7d:  leave
0815ea0a +0x0c7e:  ret
0815ea0b +0x0c7f:  nop
0815ea0c +0x0c80:  push   %ebp
0815ea0d +0x0c81:  mov    %esp,%ebp
0815ea0f +0x0c83:  sub    $0x18,%esp
0815ea12 +0x0c86:  mov    0x8(%ebp),%eax
0815ea15 +0x0c89:  mov    (%eax),%eax
0815ea17 +0x0c8b:  mov    %eax,(%esp)
0815ea1a +0x0c8e:  call   0815f202 <+0x1476>
0815ea1f +0x0c93:  leave
0815ea20 +0x0c94:  ret
0815ea21 +0x0c95:  nop
0815ea22 +0x0c96:  push   %ebp
0815ea23 +0x0c97:  mov    %esp,%ebp
0815ea25 +0x0c99:  sub    $0x28,%esp
0815ea28 +0x0c9c:  movl   $0x4,0x4(%esp)
0815ea30 +0x0ca4:  mov    0x8(%ebp),%eax
0815ea33 +0x0ca7:  mov    %eax,(%esp)
0815ea36 +0x0caa:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0815ea3b +0x0caf:  xor    $0x1,%eax
0815ea3e +0x0cb2:  test   %al,%al
0815ea40 +0x0cb4:  je     0815ea49 <+0xcbd>
0815ea42 +0x0cb6:  mov    $0x0,%eax
0815ea47 +0x0cbb:  jmp    0815ea73 <+0xce7>
0815ea49 +0x0cbd:  mov    0x8(%ebp),%eax
0815ea4c +0x0cc0:  mov    0x8(%eax),%eax
0815ea4f +0x0cc3:  mov    %eax,%edx
0815ea51 +0x0cc5:  mov    0x8(%ebp),%eax
0815ea54 +0x0cc8:  mov    0x10(%eax),%eax
0815ea57 +0x0ccb:  lea    (%edx,%eax,1),%eax
0815ea5a +0x0cce:  mov    %eax,-0xc(%ebp)
0815ea5d +0x0cd1:  movl   $0x4,0x4(%esp)
0815ea65 +0x0cd9:  mov    0x8(%ebp),%eax
0815ea68 +0x0cdc:  mov    %eax,(%esp)
0815ea6b +0x0cdf:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0815ea70 +0x0ce4:  mov    -0xc(%ebp),%eax
0815ea73 +0x0ce7:  leave
0815ea74 +0x0ce8:  ret
0815ea75 +0x0ce9:  nop
0815ea76 +0x0cea:  push   %ebp
0815ea77 +0x0ceb:  mov    %esp,%ebp
0815ea79 +0x0ced:  sub    $0x18,%esp
0815ea7c +0x0cf0:  mov    0x8(%ebp),%eax
0815ea7f +0x0cf3:  mov    (%eax),%eax
0815ea81 +0x0cf5:  mov    %eax,(%esp)
0815ea84 +0x0cf8:  call   0815f26c <+0x14e0>
0815ea89 +0x0cfd:  leave
0815ea8a +0x0cfe:  ret
0815ea8b +0x0cff:  nop
0815ea8c +0x0d00:  push   %ebp
0815ea8d +0x0d01:  mov    %esp,%ebp
0815ea8f +0x0d03:  sub    $0x18,%esp
0815ea92 +0x0d06:  mov    0x8(%ebp),%eax
0815ea95 +0x0d09:  mov    (%eax),%eax
0815ea97 +0x0d0b:  mov    %eax,(%esp)
0815ea9a +0x0d0e:  call   0815f2d6 <+0x154a>
0815ea9f +0x0d13:  leave
0815eaa0 +0x0d14:  ret
0815eaa1 +0x0d15:  nop
0815eaa2 +0x0d16:  push   %ebp
0815eaa3 +0x0d17:  mov    %esp,%ebp
0815eaa5 +0x0d19:  sub    $0x28,%esp
0815eaa8 +0x0d1c:  movl   $0x8,0x4(%esp)
0815eab0 +0x0d24:  mov    0x8(%ebp),%eax
0815eab3 +0x0d27:  mov    %eax,(%esp)
0815eab6 +0x0d2a:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0815eabb +0x0d2f:  xor    $0x1,%eax
0815eabe +0x0d32:  test   %al,%al
0815eac0 +0x0d34:  je     0815eac9 <+0xd3d>
0815eac2 +0x0d36:  mov    $0x0,%eax
0815eac7 +0x0d3b:  jmp    0815eaf3 <+0xd67>
0815eac9 +0x0d3d:  mov    0x8(%ebp),%eax
0815eacc +0x0d40:  mov    0x8(%eax),%eax
0815eacf +0x0d43:  mov    %eax,%edx
0815ead1 +0x0d45:  mov    0x8(%ebp),%eax
0815ead4 +0x0d48:  mov    0x10(%eax),%eax
0815ead7 +0x0d4b:  lea    (%edx,%eax,1),%eax
0815eada +0x0d4e:  mov    %eax,-0xc(%ebp)
0815eadd +0x0d51:  movl   $0x8,0x4(%esp)
0815eae5 +0x0d59:  mov    0x8(%ebp),%eax
0815eae8 +0x0d5c:  mov    %eax,(%esp)
0815eaeb +0x0d5f:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0815eaf0 +0x0d64:  mov    -0xc(%ebp),%eax
0815eaf3 +0x0d67:  leave
0815eaf4 +0x0d68:  ret
0815eaf5 +0x0d69:  nop
0815eaf6 +0x0d6a:  push   %ebp
0815eaf7 +0x0d6b:  mov    %esp,%ebp
0815eaf9 +0x0d6d:  sub    $0x18,%esp
0815eafc +0x0d70:  mov    0x8(%ebp),%eax
0815eaff +0x0d73:  mov    (%eax),%eax
0815eb01 +0x0d75:  mov    %eax,(%esp)
0815eb04 +0x0d78:  call   0815f340 <+0x15b4>
0815eb09 +0x0d7d:  leave
0815eb0a +0x0d7e:  ret
0815eb0b +0x0d7f:  nop
0815eb0c +0x0d80:  push   %ebp
0815eb0d +0x0d81:  mov    %esp,%ebp
0815eb0f +0x0d83:  sub    $0x28,%esp
0815eb12 +0x0d86:  movl   $0x4,0x4(%esp)
0815eb1a +0x0d8e:  mov    0x8(%ebp),%eax
0815eb1d +0x0d91:  mov    %eax,(%esp)
0815eb20 +0x0d94:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0815eb25 +0x0d99:  xor    $0x1,%eax
0815eb28 +0x0d9c:  test   %al,%al
0815eb2a +0x0d9e:  je     0815eb33 <+0xda7>
0815eb2c +0x0da0:  mov    $0x0,%eax
0815eb31 +0x0da5:  jmp    0815eb5d <+0xdd1>
0815eb33 +0x0da7:  mov    0x8(%ebp),%eax
0815eb36 +0x0daa:  mov    0x8(%eax),%eax
0815eb39 +0x0dad:  mov    %eax,%edx
0815eb3b +0x0daf:  mov    0x8(%ebp),%eax
0815eb3e +0x0db2:  mov    0x10(%eax),%eax
0815eb41 +0x0db5:  lea    (%edx,%eax,1),%eax
0815eb44 +0x0db8:  mov    %eax,-0xc(%ebp)
0815eb47 +0x0dbb:  movl   $0x4,0x4(%esp)
0815eb4f +0x0dc3:  mov    0x8(%ebp),%eax
0815eb52 +0x0dc6:  mov    %eax,(%esp)
0815eb55 +0x0dc9:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0815eb5a +0x0dce:  mov    -0xc(%ebp),%eax
0815eb5d +0x0dd1:  leave
0815eb5e +0x0dd2:  ret
0815eb5f +0x0dd3:  nop
0815eb60 +0x0dd4:  push   %ebp
0815eb61 +0x0dd5:  mov    %esp,%ebp
0815eb63 +0x0dd7:  sub    $0x18,%esp
0815eb66 +0x0dda:  mov    0x8(%ebp),%eax
0815eb69 +0x0ddd:  mov    (%eax),%eax
0815eb6b +0x0ddf:  mov    %eax,(%esp)
0815eb6e +0x0de2:  call   0815f3aa <+0x161e>
0815eb73 +0x0de7:  leave
0815eb74 +0x0de8:  ret
0815eb75 +0x0de9:  nop
0815eb76 +0x0dea:  push   %ebp
0815eb77 +0x0deb:  mov    %esp,%ebp
0815eb79 +0x0ded:  sub    $0x28,%esp
0815eb7c +0x0df0:  movl   $0x4,0x4(%esp)
0815eb84 +0x0df8:  mov    0x8(%ebp),%eax
0815eb87 +0x0dfb:  mov    %eax,(%esp)
0815eb8a +0x0dfe:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0815eb8f +0x0e03:  xor    $0x1,%eax
0815eb92 +0x0e06:  test   %al,%al
0815eb94 +0x0e08:  je     0815eb9d <+0xe11>
0815eb96 +0x0e0a:  mov    $0x0,%eax
0815eb9b +0x0e0f:  jmp    0815ebc7 <+0xe3b>
0815eb9d +0x0e11:  mov    0x8(%ebp),%eax
0815eba0 +0x0e14:  mov    0x8(%eax),%eax
0815eba3 +0x0e17:  mov    %eax,%edx
0815eba5 +0x0e19:  mov    0x8(%ebp),%eax
0815eba8 +0x0e1c:  mov    0x10(%eax),%eax
0815ebab +0x0e1f:  lea    (%edx,%eax,1),%eax
0815ebae +0x0e22:  mov    %eax,-0xc(%ebp)
0815ebb1 +0x0e25:  movl   $0x4,0x4(%esp)
0815ebb9 +0x0e2d:  mov    0x8(%ebp),%eax
0815ebbc +0x0e30:  mov    %eax,(%esp)
0815ebbf +0x0e33:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0815ebc4 +0x0e38:  mov    -0xc(%ebp),%eax
0815ebc7 +0x0e3b:  leave
0815ebc8 +0x0e3c:  ret
0815ebc9 +0x0e3d:  nop
0815ebca +0x0e3e:  push   %ebp
0815ebcb +0x0e3f:  mov    %esp,%ebp
0815ebcd +0x0e41:  sub    $0x18,%esp
0815ebd0 +0x0e44:  mov    0x8(%ebp),%eax
0815ebd3 +0x0e47:  mov    (%eax),%eax
0815ebd5 +0x0e49:  mov    %eax,(%esp)
0815ebd8 +0x0e4c:  call   0815f414 <+0x1688>
0815ebdd +0x0e51:  leave
0815ebde +0x0e52:  ret
0815ebdf +0x0e53:  nop
0815ebe0 +0x0e54:  push   %ebp
0815ebe1 +0x0e55:  mov    %esp,%ebp
0815ebe3 +0x0e57:  sub    $0x28,%esp
0815ebe6 +0x0e5a:  movl   $0x4,0x4(%esp)
0815ebee +0x0e62:  mov    0x8(%ebp),%eax
0815ebf1 +0x0e65:  mov    %eax,(%esp)
0815ebf4 +0x0e68:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0815ebf9 +0x0e6d:  xor    $0x1,%eax
0815ebfc +0x0e70:  test   %al,%al
0815ebfe +0x0e72:  je     0815ec07 <+0xe7b>
0815ec00 +0x0e74:  mov    $0x0,%eax
0815ec05 +0x0e79:  jmp    0815ec31 <+0xea5>
0815ec07 +0x0e7b:  mov    0x8(%ebp),%eax
0815ec0a +0x0e7e:  mov    0x8(%eax),%eax
0815ec0d +0x0e81:  mov    %eax,%edx
0815ec0f +0x0e83:  mov    0x8(%ebp),%eax
0815ec12 +0x0e86:  mov    0x10(%eax),%eax
0815ec15 +0x0e89:  lea    (%edx,%eax,1),%eax
0815ec18 +0x0e8c:  mov    %eax,-0xc(%ebp)
0815ec1b +0x0e8f:  movl   $0x4,0x4(%esp)
0815ec23 +0x0e97:  mov    0x8(%ebp),%eax
0815ec26 +0x0e9a:  mov    %eax,(%esp)
0815ec29 +0x0e9d:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0815ec2e +0x0ea2:  mov    -0xc(%ebp),%eax
0815ec31 +0x0ea5:  leave
0815ec32 +0x0ea6:  ret
0815ec33 +0x0ea7:  nop
0815ec34 +0x0ea8:  push   %ebp
0815ec35 +0x0ea9:  mov    %esp,%ebp
0815ec37 +0x0eab:  sub    $0x18,%esp
0815ec3a +0x0eae:  mov    0x8(%ebp),%eax
0815ec3d +0x0eb1:  mov    (%eax),%eax
0815ec3f +0x0eb3:  mov    %eax,(%esp)
0815ec42 +0x0eb6:  call   0815f47e <+0x16f2>
0815ec47 +0x0ebb:  leave
0815ec48 +0x0ebc:  ret
0815ec49 +0x0ebd:  nop
0815ec4a +0x0ebe:  push   %ebp
0815ec4b +0x0ebf:  mov    %esp,%ebp
0815ec4d +0x0ec1:  sub    $0x28,%esp
0815ec50 +0x0ec4:  movl   $0x4,0x4(%esp)
0815ec58 +0x0ecc:  mov    0x8(%ebp),%eax
0815ec5b +0x0ecf:  mov    %eax,(%esp)
0815ec5e +0x0ed2:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0815ec63 +0x0ed7:  xor    $0x1,%eax
0815ec66 +0x0eda:  test   %al,%al
0815ec68 +0x0edc:  je     0815ec71 <+0xee5>
0815ec6a +0x0ede:  mov    $0x0,%eax
0815ec6f +0x0ee3:  jmp    0815ec9b <+0xf0f>
0815ec71 +0x0ee5:  mov    0x8(%ebp),%eax
0815ec74 +0x0ee8:  mov    0x8(%eax),%eax
0815ec77 +0x0eeb:  mov    %eax,%edx
0815ec79 +0x0eed:  mov    0x8(%ebp),%eax
0815ec7c +0x0ef0:  mov    0x10(%eax),%eax
0815ec7f +0x0ef3:  lea    (%edx,%eax,1),%eax
0815ec82 +0x0ef6:  mov    %eax,-0xc(%ebp)
0815ec85 +0x0ef9:  movl   $0x4,0x4(%esp)
0815ec8d +0x0f01:  mov    0x8(%ebp),%eax
0815ec90 +0x0f04:  mov    %eax,(%esp)
0815ec93 +0x0f07:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0815ec98 +0x0f0c:  mov    -0xc(%ebp),%eax
0815ec9b +0x0f0f:  leave
0815ec9c +0x0f10:  ret
0815ec9d +0x0f11:  nop
0815ec9e +0x0f12:  push   %ebp
0815ec9f +0x0f13:  mov    %esp,%ebp
0815eca1 +0x0f15:  sub    $0x18,%esp
0815eca4 +0x0f18:  mov    0x8(%ebp),%eax
0815eca7 +0x0f1b:  mov    (%eax),%eax
0815eca9 +0x0f1d:  mov    %eax,(%esp)
0815ecac +0x0f20:  call   0815f4e8 <+0x175c>
0815ecb1 +0x0f25:  leave
0815ecb2 +0x0f26:  ret
0815ecb3 +0x0f27:  nop
0815ecb4 +0x0f28:  push   %ebp
0815ecb5 +0x0f29:  mov    %esp,%ebp
0815ecb7 +0x0f2b:  sub    $0x28,%esp
0815ecba +0x0f2e:  movl   $0x8,0x4(%esp)
0815ecc2 +0x0f36:  mov    0x8(%ebp),%eax
0815ecc5 +0x0f39:  mov    %eax,(%esp)
0815ecc8 +0x0f3c:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0815eccd +0x0f41:  xor    $0x1,%eax
0815ecd0 +0x0f44:  test   %al,%al
0815ecd2 +0x0f46:  je     0815ecdb <+0xf4f>
0815ecd4 +0x0f48:  mov    $0x0,%eax
0815ecd9 +0x0f4d:  jmp    0815ed05 <+0xf79>
0815ecdb +0x0f4f:  mov    0x8(%ebp),%eax
0815ecde +0x0f52:  mov    0x8(%eax),%eax
0815ece1 +0x0f55:  mov    %eax,%edx
0815ece3 +0x0f57:  mov    0x8(%ebp),%eax
0815ece6 +0x0f5a:  mov    0x10(%eax),%eax
0815ece9 +0x0f5d:  lea    (%edx,%eax,1),%eax
0815ecec +0x0f60:  mov    %eax,-0xc(%ebp)
0815ecef +0x0f63:  movl   $0x8,0x4(%esp)
0815ecf7 +0x0f6b:  mov    0x8(%ebp),%eax
0815ecfa +0x0f6e:  mov    %eax,(%esp)
0815ecfd +0x0f71:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0815ed02 +0x0f76:  mov    -0xc(%ebp),%eax
0815ed05 +0x0f79:  leave
0815ed06 +0x0f7a:  ret
0815ed07 +0x0f7b:  nop
0815ed08 +0x0f7c:  push   %ebp
0815ed09 +0x0f7d:  mov    %esp,%ebp
0815ed0b +0x0f7f:  sub    $0x18,%esp
0815ed0e +0x0f82:  mov    0x8(%ebp),%eax
0815ed11 +0x0f85:  mov    (%eax),%eax
0815ed13 +0x0f87:  mov    %eax,(%esp)
0815ed16 +0x0f8a:  call   0815f552 <+0x17c6>
0815ed1b +0x0f8f:  leave
0815ed1c +0x0f90:  ret
0815ed1d +0x0f91:  nop
0815ed1e +0x0f92:  push   %ebp
0815ed1f +0x0f93:  mov    %esp,%ebp
0815ed21 +0x0f95:  sub    $0x28,%esp
0815ed24 +0x0f98:  movl   $0x8,0x4(%esp)
0815ed2c +0x0fa0:  mov    0x8(%ebp),%eax
0815ed2f +0x0fa3:  mov    %eax,(%esp)
0815ed32 +0x0fa6:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0815ed37 +0x0fab:  xor    $0x1,%eax
0815ed3a +0x0fae:  test   %al,%al
0815ed3c +0x0fb0:  je     0815ed45 <+0xfb9>
0815ed3e +0x0fb2:  mov    $0x0,%eax
0815ed43 +0x0fb7:  jmp    0815ed6f <+0xfe3>
0815ed45 +0x0fb9:  mov    0x8(%ebp),%eax
0815ed48 +0x0fbc:  mov    0x8(%eax),%eax
0815ed4b +0x0fbf:  mov    %eax,%edx
0815ed4d +0x0fc1:  mov    0x8(%ebp),%eax
0815ed50 +0x0fc4:  mov    0x10(%eax),%eax
0815ed53 +0x0fc7:  lea    (%edx,%eax,1),%eax
0815ed56 +0x0fca:  mov    %eax,-0xc(%ebp)
0815ed59 +0x0fcd:  movl   $0x8,0x4(%esp)
0815ed61 +0x0fd5:  mov    0x8(%ebp),%eax
0815ed64 +0x0fd8:  mov    %eax,(%esp)
0815ed67 +0x0fdb:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0815ed6c +0x0fe0:  mov    -0xc(%ebp),%eax
0815ed6f +0x0fe3:  leave
0815ed70 +0x0fe4:  ret
0815ed71 +0x0fe5:  nop
0815ed72 +0x0fe6:  push   %ebp
0815ed73 +0x0fe7:  mov    %esp,%ebp
0815ed75 +0x0fe9:  sub    $0x28,%esp
0815ed78 +0x0fec:  movl   $0x104,0x4(%esp)
0815ed80 +0x0ff4:  mov    0x8(%ebp),%eax
0815ed83 +0x0ff7:  mov    %eax,(%esp)
0815ed86 +0x0ffa:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0815ed8b +0x0fff:  xor    $0x1,%eax
0815ed8e +0x1002:  test   %al,%al
0815ed90 +0x1004:  je     0815ed99 <+0x100d>
0815ed92 +0x1006:  mov    $0x0,%eax
0815ed97 +0x100b:  jmp    0815edc3 <+0x1037>
0815ed99 +0x100d:  mov    0x8(%ebp),%eax
0815ed9c +0x1010:  mov    0x8(%eax),%eax
0815ed9f +0x1013:  mov    %eax,%edx
0815eda1 +0x1015:  mov    0x8(%ebp),%eax
0815eda4 +0x1018:  mov    0x10(%eax),%eax
0815eda7 +0x101b:  lea    (%edx,%eax,1),%eax
0815edaa +0x101e:  mov    %eax,-0xc(%ebp)
0815edad +0x1021:  movl   $0x104,0x4(%esp)
0815edb5 +0x1029:  mov    0x8(%ebp),%eax
0815edb8 +0x102c:  mov    %eax,(%esp)
0815edbb +0x102f:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0815edc0 +0x1034:  mov    -0xc(%ebp),%eax
0815edc3 +0x1037:  leave
0815edc4 +0x1038:  ret
0815edc5 +0x1039:  nop
0815edc6 +0x103a:  push   %ebp
0815edc7 +0x103b:  mov    %esp,%ebp
0815edc9 +0x103d:  sub    $0x18,%esp
0815edcc +0x1040:  mov    0x8(%ebp),%eax
0815edcf +0x1043:  mov    (%eax),%eax
0815edd1 +0x1045:  mov    %eax,(%esp)
0815edd4 +0x1048:  call   0815f5bc <+0x1830>
0815edd9 +0x104d:  leave
0815edda +0x104e:  ret
0815eddb +0x104f:  nop
0815eddc +0x1050:  push   %ebp
0815eddd +0x1051:  mov    %esp,%ebp
0815eddf +0x1053:  sub    $0x28,%esp
0815ede2 +0x1056:  movl   $0x104,0x4(%esp)
0815edea +0x105e:  mov    0x8(%ebp),%eax
0815eded +0x1061:  mov    %eax,(%esp)
0815edf0 +0x1064:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0815edf5 +0x1069:  xor    $0x1,%eax
0815edf8 +0x106c:  test   %al,%al
0815edfa +0x106e:  je     0815ee03 <+0x1077>
0815edfc +0x1070:  mov    $0x0,%eax
0815ee01 +0x1075:  jmp    0815ee2d <+0x10a1>
0815ee03 +0x1077:  mov    0x8(%ebp),%eax
0815ee06 +0x107a:  mov    0x8(%eax),%eax
0815ee09 +0x107d:  mov    %eax,%edx
0815ee0b +0x107f:  mov    0x8(%ebp),%eax
0815ee0e +0x1082:  mov    0x10(%eax),%eax
0815ee11 +0x1085:  lea    (%edx,%eax,1),%eax
0815ee14 +0x1088:  mov    %eax,-0xc(%ebp)
0815ee17 +0x108b:  movl   $0x104,0x4(%esp)
0815ee1f +0x1093:  mov    0x8(%ebp),%eax
0815ee22 +0x1096:  mov    %eax,(%esp)
0815ee25 +0x1099:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0815ee2a +0x109e:  mov    -0xc(%ebp),%eax
0815ee2d +0x10a1:  leave
0815ee2e +0x10a2:  ret
0815ee2f +0x10a3:  nop
0815ee30 +0x10a4:  push   %ebp
0815ee31 +0x10a5:  mov    %esp,%ebp
0815ee33 +0x10a7:  sub    $0x18,%esp
0815ee36 +0x10aa:  mov    0x8(%ebp),%eax
0815ee39 +0x10ad:  mov    %eax,(%esp)
0815ee3c +0x10b0:  call   0815f626 <+0x189a>
0815ee41 +0x10b5:  leave
0815ee42 +0x10b6:  ret
0815ee43 +0x10b7:  nop
0815ee44 +0x10b8:  push   %ebp
0815ee45 +0x10b9:  mov    %esp,%ebp
0815ee47 +0x10bb:  sub    $0x18,%esp
0815ee4a +0x10be:  mov    0x8(%ebp),%eax
0815ee4d +0x10c1:  mov    %eax,(%esp)
0815ee50 +0x10c4:  call   0815f676 <+0x18ea>
0815ee55 +0x10c9:  leave
0815ee56 +0x10ca:  ret
0815ee57 +0x10cb:  nop
0815ee58 +0x10cc:  push   %ebp
0815ee59 +0x10cd:  mov    %esp,%ebp
0815ee5b +0x10cf:  sub    $0x28,%esp
0815ee5e +0x10d2:  jmp    0815eea0 <+0x1114>
0815ee60 +0x10d4:  mov    0xc(%ebp),%eax
0815ee63 +0x10d7:  mov    %eax,(%esp)
0815ee66 +0x10da:  call   0815f67b <+0x18ef>
0815ee6b +0x10df:  mov    %eax,0x4(%esp)
0815ee6f +0x10e3:  mov    0x8(%ebp),%eax
0815ee72 +0x10e6:  mov    %eax,(%esp)
0815ee75 +0x10e9:  call   0815ee58 <+0x10cc>
0815ee7a +0x10ee:  mov    0xc(%ebp),%eax
0815ee7d +0x10f1:  mov    %eax,(%esp)
0815ee80 +0x10f4:  call   0815f686 <+0x18fa>
0815ee85 +0x10f9:  mov    %eax,-0xc(%ebp)
0815ee88 +0x10fc:  mov    0xc(%ebp),%eax
0815ee8b +0x10ff:  mov    %eax,0x4(%esp)
0815ee8f +0x1103:  mov    0x8(%ebp),%eax
0815ee92 +0x1106:  mov    %eax,(%esp)
0815ee95 +0x1109:  call   0815f692 <+0x1906>
0815ee9a +0x110e:  mov    -0xc(%ebp),%eax
0815ee9d +0x1111:  mov    %eax,0xc(%ebp)
0815eea0 +0x1114:  cmpl   $0x0,0xc(%ebp)
0815eea4 +0x1118:  setne  %al
0815eea7 +0x111b:  test   %al,%al
0815eea9 +0x111d:  jne    0815ee60 <+0x10d4>
0815eeab +0x111f:  leave
0815eeac +0x1120:  ret
0815eead +0x1121:  nop
0815eeae +0x1122:  push   %ebp
0815eeaf +0x1123:  mov    %esp,%ebp
0815eeb1 +0x1125:  mov    0x8(%ebp),%eax
0815eeb4 +0x1128:  mov    0x8(%eax),%eax
0815eeb7 +0x112b:  pop    %ebp
0815eeb8 +0x112c:  ret
0815eeb9 +0x112d:  nop
0815eeba +0x112e:  push   %ebp
0815eebb +0x112f:  mov    %esp,%ebp
0815eebd +0x1131:  push   %ebx
0815eebe +0x1132:  sub    $0x14,%esp
0815eec1 +0x1135:  mov    0x8(%ebp),%eax
0815eec4 +0x1138:  mov    %eax,(%esp)
0815eec7 +0x113b:  call   0815eeae <+0x1122>
0815eecc +0x1140:  mov    %eax,0x4(%esp)
0815eed0 +0x1144:  mov    0x8(%ebp),%eax
0815eed3 +0x1147:  mov    %eax,(%esp)
0815eed6 +0x114a:  call   0815ee58 <+0x10cc>
0815eedb +0x114f:  mov    0x8(%ebp),%eax
0815eede +0x1152:  mov    %eax,(%esp)
0815eee1 +0x1155:  call   0815f6d2 <+0x1946>
0815eee6 +0x115a:  mov    %eax,%ebx
0815eee8 +0x115c:  mov    0x8(%ebp),%eax
0815eeeb +0x115f:  mov    %eax,(%esp)
0815eeee +0x1162:  call   0815f6c6 <+0x193a>
0815eef3 +0x1167:  mov    %eax,(%ebx)
0815eef5 +0x1169:  mov    0x8(%ebp),%eax
0815eef8 +0x116c:  mov    %eax,(%esp)
0815eefb +0x116f:  call   0815f6de <+0x1952>
0815ef00 +0x1174:  movl   $0x0,(%eax)
0815ef06 +0x117a:  mov    0x8(%ebp),%eax
0815ef09 +0x117d:  mov    %eax,(%esp)
0815ef0c +0x1180:  call   0815f6ea <+0x195e>
0815ef11 +0x1185:  mov    %eax,%ebx
0815ef13 +0x1187:  mov    0x8(%ebp),%eax
0815ef16 +0x118a:  mov    %eax,(%esp)
0815ef19 +0x118d:  call   0815f6c6 <+0x193a>
0815ef1e +0x1192:  mov    %eax,(%ebx)
0815ef20 +0x1194:  mov    0x8(%ebp),%eax
0815ef23 +0x1197:  movl   $0x0,0x14(%eax)
0815ef2a +0x119e:  add    $0x14,%esp
0815ef2d +0x11a1:  pop    %ebx
0815ef2e +0x11a2:  pop    %ebp
0815ef2f +0x11a3:  ret
0815ef30 +0x11a4:  push   %ebp
0815ef31 +0x11a5:  mov    %esp,%ebp
0815ef33 +0x11a7:  push   %ebx
0815ef34 +0x11a8:  sub    $0x14,%esp
0815ef37 +0x11ab:  mov    0x8(%ebp),%ebx
0815ef3a +0x11ae:  mov    0xc(%ebp),%eax
0815ef3d +0x11b1:  mov    0xc(%eax),%eax
0815ef40 +0x11b4:  mov    %eax,0x4(%esp)
0815ef44 +0x11b8:  mov    %ebx,(%esp)
0815ef47 +0x11bb:  call   0815f6f6 <+0x196a>
0815ef4c +0x11c0:  mov    %ebx,%eax
0815ef4e +0x11c2:  add    $0x14,%esp
0815ef51 +0x11c5:  pop    %ebx
0815ef52 +0x11c6:  pop    %ebp
0815ef53 +0x11c7:  ret    $0x4
0815ef56 +0x11ca:  push   %ebp
0815ef57 +0x11cb:  mov    %esp,%ebp
0815ef59 +0x11cd:  push   %ebx
0815ef5a +0x11ce:  sub    $0x14,%esp
0815ef5d +0x11d1:  mov    0x8(%ebp),%ebx
0815ef60 +0x11d4:  mov    0xc(%ebp),%eax
0815ef63 +0x11d7:  add    $0x4,%eax
0815ef66 +0x11da:  mov    %eax,0x4(%esp)
0815ef6a +0x11de:  mov    %ebx,(%esp)
0815ef6d +0x11e1:  call   0815f6f6 <+0x196a>
0815ef72 +0x11e6:  mov    %ebx,%eax
0815ef74 +0x11e8:  add    $0x14,%esp
0815ef77 +0x11eb:  pop    %ebx
0815ef78 +0x11ec:  pop    %ebp
0815ef79 +0x11ed:  ret    $0x4
0815ef7c +0x11f0:  push   %ebp
0815ef7d +0x11f1:  mov    %esp,%ebp
0815ef7f +0x11f3:  sub    $0x18,%esp
0815ef82 +0x11f6:  mov    0x8(%ebp),%eax
0815ef85 +0x11f9:  mov    (%eax),%eax
0815ef87 +0x11fb:  mov    %eax,(%esp)
0815ef8a +0x11fe:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
0815ef8f +0x1203:  mov    0x8(%ebp),%edx
0815ef92 +0x1206:  mov    %eax,(%edx)
0815ef94 +0x1208:  mov    0x8(%ebp),%eax
0815ef97 +0x120b:  leave
0815ef98 +0x120c:  ret
0815ef99 +0x120d:  nop
0815ef9a +0x120e:  push   %ebp
0815ef9b +0x120f:  mov    %esp,%ebp
0815ef9d +0x1211:  mov    0x8(%ebp),%eax
0815efa0 +0x1214:  mov    (%eax),%eax
0815efa2 +0x1216:  add    $0x10,%eax
0815efa5 +0x1219:  pop    %ebp
0815efa6 +0x121a:  ret
0815efa7 +0x121b:  nop
0815efa8 +0x121c:  push   %ebp
0815efa9 +0x121d:  mov    %esp,%ebp
0815efab +0x121f:  push   %esi
0815efac +0x1220:  push   %ebx
0815efad +0x1221:  sub    $0x30,%esp
0815efb0 +0x1224:  mov    0x8(%ebp),%ebx
0815efb3 +0x1227:  mov    0xc(%ebp),%eax
0815efb6 +0x122a:  mov    %eax,(%esp)
0815efb9 +0x122d:  call   0815f6c6 <+0x193a>
0815efbe +0x1232:  mov    %eax,%esi
0815efc0 +0x1234:  mov    0xc(%ebp),%eax
0815efc3 +0x1237:  mov    %eax,(%esp)
0815efc6 +0x123a:  call   0815eeae <+0x1122>
0815efcb +0x123f:  lea    -0x10(%ebp),%edx
0815efce +0x1242:  mov    0x10(%ebp),%ecx
0815efd1 +0x1245:  mov    %ecx,0x10(%esp)
0815efd5 +0x1249:  mov    %esi,0xc(%esp)
0815efd9 +0x124d:  mov    %eax,0x8(%esp)
0815efdd +0x1251:  mov    0xc(%ebp),%eax
0815efe0 +0x1254:  mov    %eax,0x4(%esp)
0815efe4 +0x1258:  mov    %edx,(%esp)
0815efe7 +0x125b:  call   0815f704 <+0x1978>
0815efec +0x1260:  sub    $0x4,%esp
0815efef +0x1263:  lea    -0xc(%ebp),%eax
0815eff2 +0x1266:  mov    0xc(%ebp),%edx
0815eff5 +0x1269:  mov    %edx,0x4(%esp)
0815eff9 +0x126d:  mov    %eax,(%esp)
0815effc +0x1270:  call   0815ef56 <+0x11ca>
0815f001 +0x1275:  sub    $0x4,%esp
0815f004 +0x1278:  lea    -0xc(%ebp),%eax
0815f007 +0x127b:  mov    %eax,0x4(%esp)
0815f00b +0x127f:  lea    -0x10(%ebp),%eax
0815f00e +0x1282:  mov    %eax,(%esp)
0815f011 +0x1285:  call   0815f0ce <+0x1342>
0815f016 +0x128a:  test   %al,%al
0815f018 +0x128c:  jne    0815f03f <+0x12b3>
0815f01a +0x128e:  mov    -0x10(%ebp),%eax
0815f01d +0x1291:  mov    %eax,(%esp)
0815f020 +0x1294:  call   0815f780 <+0x19f4>
0815f025 +0x1299:  mov    0xc(%ebp),%edx
0815f028 +0x129c:  mov    %eax,0x8(%esp)
0815f02c +0x12a0:  mov    0x10(%ebp),%eax
0815f02f +0x12a3:  mov    %eax,0x4(%esp)
0815f033 +0x12a7:  mov    %edx,(%esp)
0815f036 +0x12aa:  call   0815f0b8 <+0x132c>
0815f03b +0x12af:  test   %al,%al
0815f03d +0x12b1:  je     0815f053 <+0x12c7>
0815f03f +0x12b3:  mov    0xc(%ebp),%eax
0815f042 +0x12b6:  mov    %eax,0x4(%esp)
0815f046 +0x12ba:  mov    %ebx,(%esp)
0815f049 +0x12bd:  call   0815ef56 <+0x11ca>
0815f04e +0x12c2:  sub    $0x4,%esp
0815f051 +0x12c5:  jmp    0815f058 <+0x12cc>
0815f053 +0x12c7:  mov    -0x10(%ebp),%eax
0815f056 +0x12ca:  mov    %eax,(%ebx)
0815f058 +0x12cc:  mov    %ebx,%eax
0815f05a +0x12ce:  lea    -0x8(%ebp),%esp
0815f05d +0x12d1:  add    $0x0,%esp
0815f060 +0x12d4:  pop    %ebx
0815f061 +0x12d5:  pop    %esi
0815f062 +0x12d6:  pop    %ebp
0815f063 +0x12d7:  ret    $0x4
0815f066 +0x12da:  push   %ebp
0815f067 +0x12db:  mov    %esp,%ebp
0815f069 +0x12dd:  push   %ebx
0815f06a +0x12de:  sub    $0x14,%esp
0815f06d +0x12e1:  mov    0x8(%ebp),%ebx
0815f070 +0x12e4:  mov    0xc(%ebp),%eax
0815f073 +0x12e7:  mov    0x10(%ebp),%edx
0815f076 +0x12ea:  mov    %edx,0x8(%esp)
0815f07a +0x12ee:  mov    %eax,0x4(%esp)
0815f07e +0x12f2:  mov    %ebx,(%esp)
0815f081 +0x12f5:  call   0815f7a2 <+0x1a16>
0815f086 +0x12fa:  sub    $0x4,%esp
0815f089 +0x12fd:  mov    %ebx,%eax
0815f08b +0x12ff:  mov    -0x4(%ebp),%ebx
0815f08e +0x1302:  leave
0815f08f +0x1303:  ret    $0x4
0815f092 +0x1306:  push   %ebp
0815f093 +0x1307:  mov    %esp,%ebp
0815f095 +0x1309:  push   %ebx
0815f096 +0x130a:  sub    $0x14,%esp
0815f099 +0x130d:  mov    0x8(%ebp),%ebx
0815f09c +0x1310:  mov    0xc(%ebp),%eax
0815f09f +0x1313:  mov    %eax,0x4(%esp)
0815f0a3 +0x1317:  mov    %ebx,(%esp)
0815f0a6 +0x131a:  call   0815f7f4 <+0x1a68>
0815f0ab +0x131f:  sub    $0x4,%esp
0815f0ae +0x1322:  mov    %ebx,%eax
0815f0b0 +0x1324:  mov    -0x4(%ebp),%ebx
0815f0b3 +0x1327:  leave
0815f0b4 +0x1328:  ret    $0x4
0815f0b7 +0x132b:  nop
0815f0b8 +0x132c:  push   %ebp
0815f0b9 +0x132d:  mov    %esp,%ebp
0815f0bb +0x132f:  mov    0xc(%ebp),%eax
0815f0be +0x1332:  mov    (%eax),%eax
0815f0c0 +0x1334:  mov    %eax,%edx
0815f0c2 +0x1336:  mov    0x10(%ebp),%eax
0815f0c5 +0x1339:  mov    (%eax),%eax
0815f0c7 +0x133b:  cmp    %eax,%edx
0815f0c9 +0x133d:  setl   %al
0815f0cc +0x1340:  pop    %ebp
0815f0cd +0x1341:  ret
0815f0ce +0x1342:  push   %ebp
0815f0cf +0x1343:  mov    %esp,%ebp
0815f0d1 +0x1345:  mov    0x8(%ebp),%eax
0815f0d4 +0x1348:  mov    (%eax),%edx
0815f0d6 +0x134a:  mov    0xc(%ebp),%eax
0815f0d9 +0x134d:  mov    (%eax),%eax
0815f0db +0x134f:  cmp    %eax,%edx
0815f0dd +0x1351:  sete   %al
0815f0e0 +0x1354:  pop    %ebp
0815f0e1 +0x1355:  ret
0815f0e2 +0x1356:  push   %ebp
0815f0e3 +0x1357:  mov    %esp,%ebp
0815f0e5 +0x1359:  sub    $0x18,%esp
0815f0e8 +0x135c:  mov    0xc(%ebp),%eax
0815f0eb +0x135f:  mov    %eax,(%esp)
0815f0ee +0x1362:  call   0815f7fe <+0x1a72>
0815f0f3 +0x1367:  mov    (%eax),%edx
0815f0f5 +0x1369:  mov    0x8(%ebp),%eax
0815f0f8 +0x136c:  mov    %edx,(%eax)
0815f0fa +0x136e:  mov    0x10(%ebp),%eax
0815f0fd +0x1371:  mov    %eax,(%esp)
0815f100 +0x1374:  call   0815f806 <+0x1a7a>
0815f105 +0x1379:  mov    (%eax),%edx
0815f107 +0x137b:  mov    0x8(%ebp),%eax
0815f10a +0x137e:  mov    %edx,0x4(%eax)
0815f10d +0x1381:  leave
0815f10e +0x1382:  ret
0815f10f +0x1383:  nop
0815f110 +0x1384:  push   %ebp
0815f111 +0x1385:  mov    %esp,%ebp
0815f113 +0x1387:  push   %ebx
0815f114 +0x1388:  sub    $0x24,%esp
0815f117 +0x138b:  mov    0x8(%ebp),%ebx
0815f11a +0x138e:  lea    0x10(%ebp),%eax
0815f11d +0x1391:  mov    %eax,0x4(%esp)
0815f121 +0x1395:  lea    -0xc(%ebp),%eax
0815f124 +0x1398:  mov    %eax,(%esp)
0815f127 +0x139b:  call   0815f80e <+0x1a82>
0815f12c +0x13a0:  mov    0xc(%ebp),%eax
0815f12f +0x13a3:  mov    0x14(%ebp),%edx
0815f132 +0x13a6:  mov    %edx,0xc(%esp)
0815f136 +0x13aa:  mov    -0xc(%ebp),%edx
0815f139 +0x13ad:  mov    %edx,0x8(%esp)
0815f13d +0x13b1:  mov    %eax,0x4(%esp)
0815f141 +0x13b5:  mov    %ebx,(%esp)
0815f144 +0x13b8:  call   0815f81e <+0x1a92>
0815f149 +0x13bd:  sub    $0x4,%esp
0815f14c +0x13c0:  mov    %ebx,%eax
0815f14e +0x13c2:  mov    -0x4(%ebp),%ebx
0815f151 +0x13c5:  leave
0815f152 +0x13c6:  ret    $0x4
0815f155 +0x13c9:  nop
0815f156 +0x13ca:  push   %ebp
0815f157 +0x13cb:  mov    %esp,%ebp
0815f159 +0x13cd:  sub    $0x28,%esp
0815f15c +0x13d0:  mov    0x8(%ebp),%eax
0815f15f +0x13d3:  lea    0x4(%eax),%edx
0815f162 +0x13d6:  mov    0xc(%ebp),%eax
0815f165 +0x13d9:  mov    %edx,0x4(%esp)
0815f169 +0x13dd:  mov    %eax,(%esp)
0815f16c +0x13e0:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0815f171 +0x13e5:  mov    %eax,-0xc(%ebp)
0815f174 +0x13e8:  mov    -0xc(%ebp),%eax
0815f177 +0x13eb:  mov    %eax,0x4(%esp)
0815f17b +0x13ef:  mov    0x8(%ebp),%eax
0815f17e +0x13f2:  mov    %eax,(%esp)
0815f181 +0x13f5:  call   0815f692 <+0x1906>
0815f186 +0x13fa:  mov    0x8(%ebp),%eax
0815f189 +0x13fd:  mov    0x14(%eax),%eax
0815f18c +0x1400:  lea    -0x1(%eax),%edx
0815f18f +0x1403:  mov    0x8(%ebp),%eax
0815f192 +0x1406:  mov    %edx,0x14(%eax)
0815f195 +0x1409:  leave
0815f196 +0x140a:  ret
0815f197 +0x140b:  nop
0815f198 +0x140c:  push   %ebp
0815f199 +0x140d:  mov    %esp,%ebp
0815f19b +0x140f:  sub    $0x28,%esp
0815f19e +0x1412:  jmp    0815f1bc <+0x1430>
0815f1a0 +0x1414:  mov    0x8(%ebp),%eax
0815f1a3 +0x1417:  mov    %eax,(%esp)
0815f1a6 +0x141a:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0815f1ab +0x141f:  add    %eax,%eax
0815f1ad +0x1421:  mov    %eax,0x4(%esp)
0815f1b1 +0x1425:  mov    0x8(%ebp),%eax
0815f1b4 +0x1428:  mov    %eax,(%esp)
0815f1b7 +0x142b:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0815f1bc +0x1430:  movl   $0x1200,0x4(%esp)
0815f1c4 +0x1438:  mov    0x8(%ebp),%eax
0815f1c7 +0x143b:  mov    %eax,(%esp)
0815f1ca +0x143e:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0815f1cf +0x1443:  xor    $0x1,%eax
0815f1d2 +0x1446:  test   %al,%al
0815f1d4 +0x1448:  jne    0815f1a0 <+0x1414>
0815f1d6 +0x144a:  mov    0x8(%ebp),%eax
0815f1d9 +0x144d:  mov    0x8(%eax),%eax
0815f1dc +0x1450:  mov    %eax,%edx
0815f1de +0x1452:  mov    0x8(%ebp),%eax
0815f1e1 +0x1455:  mov    0xc(%eax),%eax
0815f1e4 +0x1458:  lea    (%edx,%eax,1),%eax
0815f1e7 +0x145b:  mov    %eax,-0xc(%ebp)
0815f1ea +0x145e:  movl   $0x1200,0x4(%esp)
0815f1f2 +0x1466:  mov    0x8(%ebp),%eax
0815f1f5 +0x1469:  mov    %eax,(%esp)
0815f1f8 +0x146c:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0815f1fd +0x1471:  mov    -0xc(%ebp),%eax
0815f200 +0x1474:  leave
0815f201 +0x1475:  ret
0815f202 +0x1476:  push   %ebp
0815f203 +0x1477:  mov    %esp,%ebp
0815f205 +0x1479:  sub    $0x28,%esp
0815f208 +0x147c:  jmp    0815f226 <+0x149a>
0815f20a +0x147e:  mov    0x8(%ebp),%eax
0815f20d +0x1481:  mov    %eax,(%esp)
0815f210 +0x1484:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0815f215 +0x1489:  add    %eax,%eax
0815f217 +0x148b:  mov    %eax,0x4(%esp)
0815f21b +0x148f:  mov    0x8(%ebp),%eax
0815f21e +0x1492:  mov    %eax,(%esp)
0815f221 +0x1495:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0815f226 +0x149a:  movl   $0x2d4,0x4(%esp)
0815f22e +0x14a2:  mov    0x8(%ebp),%eax
0815f231 +0x14a5:  mov    %eax,(%esp)
0815f234 +0x14a8:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0815f239 +0x14ad:  xor    $0x1,%eax
0815f23c +0x14b0:  test   %al,%al
0815f23e +0x14b2:  jne    0815f20a <+0x147e>
0815f240 +0x14b4:  mov    0x8(%ebp),%eax
0815f243 +0x14b7:  mov    0x8(%eax),%eax
0815f246 +0x14ba:  mov    %eax,%edx
0815f248 +0x14bc:  mov    0x8(%ebp),%eax
0815f24b +0x14bf:  mov    0xc(%eax),%eax
0815f24e +0x14c2:  lea    (%edx,%eax,1),%eax
0815f251 +0x14c5:  mov    %eax,-0xc(%ebp)
0815f254 +0x14c8:  movl   $0x2d4,0x4(%esp)
0815f25c +0x14d0:  mov    0x8(%ebp),%eax
0815f25f +0x14d3:  mov    %eax,(%esp)
0815f262 +0x14d6:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0815f267 +0x14db:  mov    -0xc(%ebp),%eax
0815f26a +0x14de:  leave
0815f26b +0x14df:  ret
0815f26c +0x14e0:  push   %ebp
0815f26d +0x14e1:  mov    %esp,%ebp
0815f26f +0x14e3:  sub    $0x28,%esp
0815f272 +0x14e6:  jmp    0815f290 <+0x1504>
0815f274 +0x14e8:  mov    0x8(%ebp),%eax
0815f277 +0x14eb:  mov    %eax,(%esp)
0815f27a +0x14ee:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0815f27f +0x14f3:  add    %eax,%eax
0815f281 +0x14f5:  mov    %eax,0x4(%esp)
0815f285 +0x14f9:  mov    0x8(%ebp),%eax
0815f288 +0x14fc:  mov    %eax,(%esp)
0815f28b +0x14ff:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0815f290 +0x1504:  movl   $0x4,0x4(%esp)
0815f298 +0x150c:  mov    0x8(%ebp),%eax
0815f29b +0x150f:  mov    %eax,(%esp)
0815f29e +0x1512:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0815f2a3 +0x1517:  xor    $0x1,%eax
0815f2a6 +0x151a:  test   %al,%al
0815f2a8 +0x151c:  jne    0815f274 <+0x14e8>
0815f2aa +0x151e:  mov    0x8(%ebp),%eax
0815f2ad +0x1521:  mov    0x8(%eax),%eax
0815f2b0 +0x1524:  mov    %eax,%edx
0815f2b2 +0x1526:  mov    0x8(%ebp),%eax
0815f2b5 +0x1529:  mov    0xc(%eax),%eax
0815f2b8 +0x152c:  lea    (%edx,%eax,1),%eax
0815f2bb +0x152f:  mov    %eax,-0xc(%ebp)
0815f2be +0x1532:  movl   $0x4,0x4(%esp)
0815f2c6 +0x153a:  mov    0x8(%ebp),%eax
0815f2c9 +0x153d:  mov    %eax,(%esp)
0815f2cc +0x1540:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0815f2d1 +0x1545:  mov    -0xc(%ebp),%eax
0815f2d4 +0x1548:  leave
0815f2d5 +0x1549:  ret
0815f2d6 +0x154a:  push   %ebp
0815f2d7 +0x154b:  mov    %esp,%ebp
0815f2d9 +0x154d:  sub    $0x28,%esp
0815f2dc +0x1550:  jmp    0815f2fa <+0x156e>
0815f2de +0x1552:  mov    0x8(%ebp),%eax
0815f2e1 +0x1555:  mov    %eax,(%esp)
0815f2e4 +0x1558:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0815f2e9 +0x155d:  add    %eax,%eax
0815f2eb +0x155f:  mov    %eax,0x4(%esp)
0815f2ef +0x1563:  mov    0x8(%ebp),%eax
0815f2f2 +0x1566:  mov    %eax,(%esp)
0815f2f5 +0x1569:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0815f2fa +0x156e:  movl   $0x8,0x4(%esp)
0815f302 +0x1576:  mov    0x8(%ebp),%eax
0815f305 +0x1579:  mov    %eax,(%esp)
0815f308 +0x157c:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0815f30d +0x1581:  xor    $0x1,%eax
0815f310 +0x1584:  test   %al,%al
0815f312 +0x1586:  jne    0815f2de <+0x1552>
0815f314 +0x1588:  mov    0x8(%ebp),%eax
0815f317 +0x158b:  mov    0x8(%eax),%eax
0815f31a +0x158e:  mov    %eax,%edx
0815f31c +0x1590:  mov    0x8(%ebp),%eax
0815f31f +0x1593:  mov    0xc(%eax),%eax
0815f322 +0x1596:  lea    (%edx,%eax,1),%eax
0815f325 +0x1599:  mov    %eax,-0xc(%ebp)
0815f328 +0x159c:  movl   $0x8,0x4(%esp)
0815f330 +0x15a4:  mov    0x8(%ebp),%eax
0815f333 +0x15a7:  mov    %eax,(%esp)
0815f336 +0x15aa:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0815f33b +0x15af:  mov    -0xc(%ebp),%eax
0815f33e +0x15b2:  leave
0815f33f +0x15b3:  ret
0815f340 +0x15b4:  push   %ebp
0815f341 +0x15b5:  mov    %esp,%ebp
0815f343 +0x15b7:  sub    $0x28,%esp
0815f346 +0x15ba:  jmp    0815f364 <+0x15d8>
0815f348 +0x15bc:  mov    0x8(%ebp),%eax
0815f34b +0x15bf:  mov    %eax,(%esp)
0815f34e +0x15c2:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0815f353 +0x15c7:  add    %eax,%eax
0815f355 +0x15c9:  mov    %eax,0x4(%esp)
0815f359 +0x15cd:  mov    0x8(%ebp),%eax
0815f35c +0x15d0:  mov    %eax,(%esp)
0815f35f +0x15d3:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0815f364 +0x15d8:  movl   $0x4,0x4(%esp)
0815f36c +0x15e0:  mov    0x8(%ebp),%eax
0815f36f +0x15e3:  mov    %eax,(%esp)
0815f372 +0x15e6:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0815f377 +0x15eb:  xor    $0x1,%eax
0815f37a +0x15ee:  test   %al,%al
0815f37c +0x15f0:  jne    0815f348 <+0x15bc>
0815f37e +0x15f2:  mov    0x8(%ebp),%eax
0815f381 +0x15f5:  mov    0x8(%eax),%eax
0815f384 +0x15f8:  mov    %eax,%edx
0815f386 +0x15fa:  mov    0x8(%ebp),%eax
0815f389 +0x15fd:  mov    0xc(%eax),%eax
0815f38c +0x1600:  lea    (%edx,%eax,1),%eax
0815f38f +0x1603:  mov    %eax,-0xc(%ebp)
0815f392 +0x1606:  movl   $0x4,0x4(%esp)
0815f39a +0x160e:  mov    0x8(%ebp),%eax
0815f39d +0x1611:  mov    %eax,(%esp)
0815f3a0 +0x1614:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0815f3a5 +0x1619:  mov    -0xc(%ebp),%eax
0815f3a8 +0x161c:  leave
0815f3a9 +0x161d:  ret
0815f3aa +0x161e:  push   %ebp
0815f3ab +0x161f:  mov    %esp,%ebp
0815f3ad +0x1621:  sub    $0x28,%esp
0815f3b0 +0x1624:  jmp    0815f3ce <+0x1642>
0815f3b2 +0x1626:  mov    0x8(%ebp),%eax
0815f3b5 +0x1629:  mov    %eax,(%esp)
0815f3b8 +0x162c:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0815f3bd +0x1631:  add    %eax,%eax
0815f3bf +0x1633:  mov    %eax,0x4(%esp)
0815f3c3 +0x1637:  mov    0x8(%ebp),%eax
0815f3c6 +0x163a:  mov    %eax,(%esp)
0815f3c9 +0x163d:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0815f3ce +0x1642:  movl   $0x4,0x4(%esp)
0815f3d6 +0x164a:  mov    0x8(%ebp),%eax
0815f3d9 +0x164d:  mov    %eax,(%esp)
0815f3dc +0x1650:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0815f3e1 +0x1655:  xor    $0x1,%eax
0815f3e4 +0x1658:  test   %al,%al
0815f3e6 +0x165a:  jne    0815f3b2 <+0x1626>
0815f3e8 +0x165c:  mov    0x8(%ebp),%eax
0815f3eb +0x165f:  mov    0x8(%eax),%eax
0815f3ee +0x1662:  mov    %eax,%edx
0815f3f0 +0x1664:  mov    0x8(%ebp),%eax
0815f3f3 +0x1667:  mov    0xc(%eax),%eax
0815f3f6 +0x166a:  lea    (%edx,%eax,1),%eax
0815f3f9 +0x166d:  mov    %eax,-0xc(%ebp)
0815f3fc +0x1670:  movl   $0x4,0x4(%esp)
0815f404 +0x1678:  mov    0x8(%ebp),%eax
0815f407 +0x167b:  mov    %eax,(%esp)
0815f40a +0x167e:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0815f40f +0x1683:  mov    -0xc(%ebp),%eax
0815f412 +0x1686:  leave
0815f413 +0x1687:  ret
0815f414 +0x1688:  push   %ebp
0815f415 +0x1689:  mov    %esp,%ebp
0815f417 +0x168b:  sub    $0x28,%esp
0815f41a +0x168e:  jmp    0815f438 <+0x16ac>
0815f41c +0x1690:  mov    0x8(%ebp),%eax
0815f41f +0x1693:  mov    %eax,(%esp)
0815f422 +0x1696:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0815f427 +0x169b:  add    %eax,%eax
0815f429 +0x169d:  mov    %eax,0x4(%esp)
0815f42d +0x16a1:  mov    0x8(%ebp),%eax
0815f430 +0x16a4:  mov    %eax,(%esp)
0815f433 +0x16a7:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0815f438 +0x16ac:  movl   $0x4,0x4(%esp)
0815f440 +0x16b4:  mov    0x8(%ebp),%eax
0815f443 +0x16b7:  mov    %eax,(%esp)
0815f446 +0x16ba:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0815f44b +0x16bf:  xor    $0x1,%eax
0815f44e +0x16c2:  test   %al,%al
0815f450 +0x16c4:  jne    0815f41c <+0x1690>
0815f452 +0x16c6:  mov    0x8(%ebp),%eax
0815f455 +0x16c9:  mov    0x8(%eax),%eax
0815f458 +0x16cc:  mov    %eax,%edx
0815f45a +0x16ce:  mov    0x8(%ebp),%eax
0815f45d +0x16d1:  mov    0xc(%eax),%eax
0815f460 +0x16d4:  lea    (%edx,%eax,1),%eax
0815f463 +0x16d7:  mov    %eax,-0xc(%ebp)
0815f466 +0x16da:  movl   $0x4,0x4(%esp)
0815f46e +0x16e2:  mov    0x8(%ebp),%eax
0815f471 +0x16e5:  mov    %eax,(%esp)
0815f474 +0x16e8:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0815f479 +0x16ed:  mov    -0xc(%ebp),%eax
0815f47c +0x16f0:  leave
0815f47d +0x16f1:  ret
0815f47e +0x16f2:  push   %ebp
0815f47f +0x16f3:  mov    %esp,%ebp
0815f481 +0x16f5:  sub    $0x28,%esp
0815f484 +0x16f8:  jmp    0815f4a2 <+0x1716>
0815f486 +0x16fa:  mov    0x8(%ebp),%eax
0815f489 +0x16fd:  mov    %eax,(%esp)
0815f48c +0x1700:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0815f491 +0x1705:  add    %eax,%eax
0815f493 +0x1707:  mov    %eax,0x4(%esp)
0815f497 +0x170b:  mov    0x8(%ebp),%eax
0815f49a +0x170e:  mov    %eax,(%esp)
0815f49d +0x1711:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0815f4a2 +0x1716:  movl   $0x4,0x4(%esp)
0815f4aa +0x171e:  mov    0x8(%ebp),%eax
0815f4ad +0x1721:  mov    %eax,(%esp)
0815f4b0 +0x1724:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0815f4b5 +0x1729:  xor    $0x1,%eax
0815f4b8 +0x172c:  test   %al,%al
0815f4ba +0x172e:  jne    0815f486 <+0x16fa>
0815f4bc +0x1730:  mov    0x8(%ebp),%eax
0815f4bf +0x1733:  mov    0x8(%eax),%eax
0815f4c2 +0x1736:  mov    %eax,%edx
0815f4c4 +0x1738:  mov    0x8(%ebp),%eax
0815f4c7 +0x173b:  mov    0xc(%eax),%eax
0815f4ca +0x173e:  lea    (%edx,%eax,1),%eax
0815f4cd +0x1741:  mov    %eax,-0xc(%ebp)
0815f4d0 +0x1744:  movl   $0x4,0x4(%esp)
0815f4d8 +0x174c:  mov    0x8(%ebp),%eax
0815f4db +0x174f:  mov    %eax,(%esp)
0815f4de +0x1752:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0815f4e3 +0x1757:  mov    -0xc(%ebp),%eax
0815f4e6 +0x175a:  leave
0815f4e7 +0x175b:  ret
0815f4e8 +0x175c:  push   %ebp
0815f4e9 +0x175d:  mov    %esp,%ebp
0815f4eb +0x175f:  sub    $0x28,%esp
0815f4ee +0x1762:  jmp    0815f50c <+0x1780>
0815f4f0 +0x1764:  mov    0x8(%ebp),%eax
0815f4f3 +0x1767:  mov    %eax,(%esp)
0815f4f6 +0x176a:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0815f4fb +0x176f:  add    %eax,%eax
0815f4fd +0x1771:  mov    %eax,0x4(%esp)
0815f501 +0x1775:  mov    0x8(%ebp),%eax
0815f504 +0x1778:  mov    %eax,(%esp)
0815f507 +0x177b:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0815f50c +0x1780:  movl   $0x8,0x4(%esp)
0815f514 +0x1788:  mov    0x8(%ebp),%eax
0815f517 +0x178b:  mov    %eax,(%esp)
0815f51a +0x178e:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0815f51f +0x1793:  xor    $0x1,%eax
0815f522 +0x1796:  test   %al,%al
0815f524 +0x1798:  jne    0815f4f0 <+0x1764>
0815f526 +0x179a:  mov    0x8(%ebp),%eax
0815f529 +0x179d:  mov    0x8(%eax),%eax
0815f52c +0x17a0:  mov    %eax,%edx
0815f52e +0x17a2:  mov    0x8(%ebp),%eax
0815f531 +0x17a5:  mov    0xc(%eax),%eax
0815f534 +0x17a8:  lea    (%edx,%eax,1),%eax
0815f537 +0x17ab:  mov    %eax,-0xc(%ebp)
0815f53a +0x17ae:  movl   $0x8,0x4(%esp)
0815f542 +0x17b6:  mov    0x8(%ebp),%eax
0815f545 +0x17b9:  mov    %eax,(%esp)
0815f548 +0x17bc:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0815f54d +0x17c1:  mov    -0xc(%ebp),%eax
0815f550 +0x17c4:  leave
0815f551 +0x17c5:  ret
0815f552 +0x17c6:  push   %ebp
0815f553 +0x17c7:  mov    %esp,%ebp
0815f555 +0x17c9:  sub    $0x28,%esp
0815f558 +0x17cc:  jmp    0815f576 <+0x17ea>
0815f55a +0x17ce:  mov    0x8(%ebp),%eax
0815f55d +0x17d1:  mov    %eax,(%esp)
0815f560 +0x17d4:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0815f565 +0x17d9:  add    %eax,%eax
0815f567 +0x17db:  mov    %eax,0x4(%esp)
0815f56b +0x17df:  mov    0x8(%ebp),%eax
0815f56e +0x17e2:  mov    %eax,(%esp)
0815f571 +0x17e5:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0815f576 +0x17ea:  movl   $0x8,0x4(%esp)
0815f57e +0x17f2:  mov    0x8(%ebp),%eax
0815f581 +0x17f5:  mov    %eax,(%esp)
0815f584 +0x17f8:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0815f589 +0x17fd:  xor    $0x1,%eax
0815f58c +0x1800:  test   %al,%al
0815f58e +0x1802:  jne    0815f55a <+0x17ce>
0815f590 +0x1804:  mov    0x8(%ebp),%eax
0815f593 +0x1807:  mov    0x8(%eax),%eax
0815f596 +0x180a:  mov    %eax,%edx
0815f598 +0x180c:  mov    0x8(%ebp),%eax
0815f59b +0x180f:  mov    0xc(%eax),%eax
0815f59e +0x1812:  lea    (%edx,%eax,1),%eax
0815f5a1 +0x1815:  mov    %eax,-0xc(%ebp)
0815f5a4 +0x1818:  movl   $0x8,0x4(%esp)
0815f5ac +0x1820:  mov    0x8(%ebp),%eax
0815f5af +0x1823:  mov    %eax,(%esp)
0815f5b2 +0x1826:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0815f5b7 +0x182b:  mov    -0xc(%ebp),%eax
0815f5ba +0x182e:  leave
0815f5bb +0x182f:  ret
0815f5bc +0x1830:  push   %ebp
0815f5bd +0x1831:  mov    %esp,%ebp
0815f5bf +0x1833:  sub    $0x28,%esp
0815f5c2 +0x1836:  jmp    0815f5e0 <+0x1854>
0815f5c4 +0x1838:  mov    0x8(%ebp),%eax
0815f5c7 +0x183b:  mov    %eax,(%esp)
0815f5ca +0x183e:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0815f5cf +0x1843:  add    %eax,%eax
0815f5d1 +0x1845:  mov    %eax,0x4(%esp)
0815f5d5 +0x1849:  mov    0x8(%ebp),%eax
0815f5d8 +0x184c:  mov    %eax,(%esp)
0815f5db +0x184f:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0815f5e0 +0x1854:  movl   $0x104,0x4(%esp)
0815f5e8 +0x185c:  mov    0x8(%ebp),%eax
0815f5eb +0x185f:  mov    %eax,(%esp)
0815f5ee +0x1862:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0815f5f3 +0x1867:  xor    $0x1,%eax
0815f5f6 +0x186a:  test   %al,%al
0815f5f8 +0x186c:  jne    0815f5c4 <+0x1838>
0815f5fa +0x186e:  mov    0x8(%ebp),%eax
0815f5fd +0x1871:  mov    0x8(%eax),%eax
0815f600 +0x1874:  mov    %eax,%edx
0815f602 +0x1876:  mov    0x8(%ebp),%eax
0815f605 +0x1879:  mov    0xc(%eax),%eax
0815f608 +0x187c:  lea    (%edx,%eax,1),%eax
0815f60b +0x187f:  mov    %eax,-0xc(%ebp)
0815f60e +0x1882:  movl   $0x104,0x4(%esp)
0815f616 +0x188a:  mov    0x8(%ebp),%eax
0815f619 +0x188d:  mov    %eax,(%esp)
0815f61c +0x1890:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0815f621 +0x1895:  mov    -0xc(%ebp),%eax
0815f624 +0x1898:  leave
0815f625 +0x1899:  ret
0815f626 +0x189a:  push   %ebp
0815f627 +0x189b:  mov    %esp,%ebp
0815f629 +0x189d:  sub    $0x18,%esp
0815f62c +0x18a0:  mov    0x8(%ebp),%eax
0815f62f +0x18a3:  mov    %eax,(%esp)
0815f632 +0x18a6:  call   0815fbe4 <+0x1e58>
0815f637 +0x18ab:  mov    0x8(%ebp),%eax
0815f63a +0x18ae:  movl   $0x0,0x4(%eax)
0815f641 +0x18b5:  mov    0x8(%ebp),%eax
0815f644 +0x18b8:  movl   $0x0,0x8(%eax)
0815f64b +0x18bf:  mov    0x8(%ebp),%eax
0815f64e +0x18c2:  movl   $0x0,0xc(%eax)
0815f655 +0x18c9:  mov    0x8(%ebp),%eax
0815f658 +0x18cc:  movl   $0x0,0x10(%eax)
0815f65f +0x18d3:  mov    0x8(%ebp),%eax
0815f662 +0x18d6:  movl   $0x0,0x14(%eax)
0815f669 +0x18dd:  mov    0x8(%ebp),%eax
0815f66c +0x18e0:  mov    %eax,(%esp)
0815f66f +0x18e3:  call   0815fbf8 <+0x1e6c>
0815f674 +0x18e8:  leave
0815f675 +0x18e9:  ret
0815f676 +0x18ea:  push   %ebp
0815f677 +0x18eb:  mov    %esp,%ebp
0815f679 +0x18ed:  pop    %ebp
0815f67a +0x18ee:  ret
0815f67b +0x18ef:  push   %ebp
0815f67c +0x18f0:  mov    %esp,%ebp
0815f67e +0x18f2:  mov    0x8(%ebp),%eax
0815f681 +0x18f5:  mov    0xc(%eax),%eax
0815f684 +0x18f8:  pop    %ebp
0815f685 +0x18f9:  ret
0815f686 +0x18fa:  push   %ebp
0815f687 +0x18fb:  mov    %esp,%ebp
0815f689 +0x18fd:  mov    0x8(%ebp),%eax
0815f68c +0x1900:  mov    0x8(%eax),%eax
0815f68f +0x1903:  pop    %ebp
0815f690 +0x1904:  ret
0815f691 +0x1905:  nop
0815f692 +0x1906:  push   %ebp
0815f693 +0x1907:  mov    %esp,%ebp
0815f695 +0x1909:  sub    $0x18,%esp
0815f698 +0x190c:  mov    0x8(%ebp),%eax
0815f69b +0x190f:  mov    %eax,(%esp)
0815f69e +0x1912:  call   0815fc2a <+0x1e9e>
0815f6a3 +0x1917:  mov    0xc(%ebp),%edx
0815f6a6 +0x191a:  mov    %edx,0x4(%esp)
0815f6aa +0x191e:  mov    %eax,(%esp)
0815f6ad +0x1921:  call   0815fc38 <+0x1eac>
0815f6b2 +0x1926:  mov    0xc(%ebp),%eax
0815f6b5 +0x1929:  mov    %eax,0x4(%esp)
0815f6b9 +0x192d:  mov    0x8(%ebp),%eax
0815f6bc +0x1930:  mov    %eax,(%esp)
0815f6bf +0x1933:  call   0815fc4c <+0x1ec0>
0815f6c4 +0x1938:  leave
0815f6c5 +0x1939:  ret
0815f6c6 +0x193a:  push   %ebp
0815f6c7 +0x193b:  mov    %esp,%ebp
0815f6c9 +0x193d:  mov    0x8(%ebp),%eax
0815f6cc +0x1940:  add    $0x4,%eax
0815f6cf +0x1943:  pop    %ebp
0815f6d0 +0x1944:  ret
0815f6d1 +0x1945:  nop
0815f6d2 +0x1946:  push   %ebp
0815f6d3 +0x1947:  mov    %esp,%ebp
0815f6d5 +0x1949:  mov    0x8(%ebp),%eax
0815f6d8 +0x194c:  add    $0xc,%eax
0815f6db +0x194f:  pop    %ebp
0815f6dc +0x1950:  ret
0815f6dd +0x1951:  nop
0815f6de +0x1952:  push   %ebp
0815f6df +0x1953:  mov    %esp,%ebp
0815f6e1 +0x1955:  mov    0x8(%ebp),%eax
0815f6e4 +0x1958:  add    $0x8,%eax
0815f6e7 +0x195b:  pop    %ebp
0815f6e8 +0x195c:  ret
0815f6e9 +0x195d:  nop
0815f6ea +0x195e:  push   %ebp
0815f6eb +0x195f:  mov    %esp,%ebp
0815f6ed +0x1961:  mov    0x8(%ebp),%eax
0815f6f0 +0x1964:  add    $0x10,%eax
0815f6f3 +0x1967:  pop    %ebp
0815f6f4 +0x1968:  ret
0815f6f5 +0x1969:  nop
0815f6f6 +0x196a:  push   %ebp
0815f6f7 +0x196b:  mov    %esp,%ebp
0815f6f9 +0x196d:  mov    0xc(%ebp),%edx
0815f6fc +0x1970:  mov    0x8(%ebp),%eax
0815f6ff +0x1973:  mov    %edx,(%eax)
0815f701 +0x1975:  pop    %ebp
0815f702 +0x1976:  ret
0815f703 +0x1977:  nop
0815f704 +0x1978:  push   %ebp
0815f705 +0x1979:  mov    %esp,%ebp
0815f707 +0x197b:  push   %ebx
0815f708 +0x197c:  sub    $0x14,%esp
0815f70b +0x197f:  mov    0x8(%ebp),%ebx
0815f70e +0x1982:  jmp    0815f75c <+0x19d0>
0815f710 +0x1984:  mov    0x10(%ebp),%eax
0815f713 +0x1987:  mov    %eax,(%esp)
0815f716 +0x198a:  call   0815fc6e <+0x1ee2>
0815f71b +0x198f:  mov    0xc(%ebp),%edx
0815f71e +0x1992:  mov    0x18(%ebp),%ecx
0815f721 +0x1995:  mov    %ecx,0x8(%esp)
0815f725 +0x1999:  mov    %eax,0x4(%esp)
0815f729 +0x199d:  mov    %edx,(%esp)
0815f72c +0x19a0:  call   0815f0b8 <+0x132c>
0815f731 +0x19a5:  xor    $0x1,%eax
0815f734 +0x19a8:  test   %al,%al
0815f736 +0x19aa:  je     0815f74e <+0x19c2>
0815f738 +0x19ac:  mov    0x10(%ebp),%eax
0815f73b +0x19af:  mov    %eax,0x14(%ebp)
0815f73e +0x19b2:  mov    0x10(%ebp),%eax
0815f741 +0x19b5:  mov    %eax,(%esp)
0815f744 +0x19b8:  call   0815f686 <+0x18fa>
0815f749 +0x19bd:  mov    %eax,0x10(%ebp)
0815f74c +0x19c0:  jmp    0815f75c <+0x19d0>
0815f74e +0x19c2:  mov    0x10(%ebp),%eax
0815f751 +0x19c5:  mov    %eax,(%esp)
0815f754 +0x19c8:  call   0815f67b <+0x18ef>
0815f759 +0x19cd:  mov    %eax,0x10(%ebp)
0815f75c +0x19d0:  cmpl   $0x0,0x10(%ebp)
0815f760 +0x19d4:  setne  %al
0815f763 +0x19d7:  test   %al,%al
0815f765 +0x19d9:  jne    0815f710 <+0x1984>
0815f767 +0x19db:  mov    0x14(%ebp),%eax
0815f76a +0x19de:  mov    %eax,0x4(%esp)
0815f76e +0x19e2:  mov    %ebx,(%esp)
0815f771 +0x19e5:  call   0815f6f6 <+0x196a>
0815f776 +0x19ea:  mov    %ebx,%eax
0815f778 +0x19ec:  add    $0x14,%esp
0815f77b +0x19ef:  pop    %ebx
0815f77c +0x19f0:  pop    %ebp
0815f77d +0x19f1:  ret    $0x4
0815f780 +0x19f4:  push   %ebp
0815f781 +0x19f5:  mov    %esp,%ebp
0815f783 +0x19f7:  sub    $0x28,%esp
0815f786 +0x19fa:  mov    0x8(%ebp),%eax
0815f789 +0x19fd:  mov    %eax,(%esp)
0815f78c +0x1a00:  call   0815fc90 <+0x1f04>
0815f791 +0x1a05:  mov    %eax,0x4(%esp)
0815f795 +0x1a09:  lea    -0x9(%ebp),%eax
0815f798 +0x1a0c:  mov    %eax,(%esp)
0815f79b +0x1a0f:  call   0815fc9c <+0x1f10>
0815f7a0 +0x1a14:  leave
0815f7a1 +0x1a15:  ret
0815f7a2 +0x1a16:  push   %ebp
0815f7a3 +0x1a17:  mov    %esp,%ebp
0815f7a5 +0x1a19:  push   %esi
0815f7a6 +0x1a1a:  push   %ebx
0815f7a7 +0x1a1b:  sub    $0x20,%esp
0815f7aa +0x1a1e:  mov    0x8(%ebp),%esi
0815f7ad +0x1a21:  mov    0xc(%ebp),%eax
0815f7b0 +0x1a24:  mov    %eax,(%esp)
0815f7b3 +0x1a27:  call   0815f6c6 <+0x193a>
0815f7b8 +0x1a2c:  mov    %eax,%ebx
0815f7ba +0x1a2e:  mov    0xc(%ebp),%eax
0815f7bd +0x1a31:  mov    %eax,(%esp)
0815f7c0 +0x1a34:  call   0815eeae <+0x1122>
0815f7c5 +0x1a39:  mov    0x10(%ebp),%edx
0815f7c8 +0x1a3c:  mov    %edx,0x10(%esp)
0815f7cc +0x1a40:  mov    %ebx,0xc(%esp)
0815f7d0 +0x1a44:  mov    %eax,0x8(%esp)
0815f7d4 +0x1a48:  mov    0xc(%ebp),%eax
0815f7d7 +0x1a4b:  mov    %eax,0x4(%esp)
0815f7db +0x1a4f:  mov    %esi,(%esp)
0815f7de +0x1a52:  call   0815f704 <+0x1978>
0815f7e3 +0x1a57:  sub    $0x4,%esp
0815f7e6 +0x1a5a:  mov    %esi,%eax
0815f7e8 +0x1a5c:  lea    -0x8(%ebp),%esp
0815f7eb +0x1a5f:  add    $0x0,%esp
0815f7ee +0x1a62:  pop    %ebx
0815f7ef +0x1a63:  pop    %esi
0815f7f0 +0x1a64:  pop    %ebp
0815f7f1 +0x1a65:  ret    $0x4
0815f7f4 +0x1a68:  push   %ebp
0815f7f5 +0x1a69:  mov    %esp,%ebp
0815f7f7 +0x1a6b:  mov    0x8(%ebp),%eax
0815f7fa +0x1a6e:  pop    %ebp
0815f7fb +0x1a6f:  ret    $0x4
0815f7fe +0x1a72:  push   %ebp
0815f7ff +0x1a73:  mov    %esp,%ebp
0815f801 +0x1a75:  mov    0x8(%ebp),%eax
0815f804 +0x1a78:  pop    %ebp
0815f805 +0x1a79:  ret
0815f806 +0x1a7a:  push   %ebp
0815f807 +0x1a7b:  mov    %esp,%ebp
0815f809 +0x1a7d:  mov    0x8(%ebp),%eax
0815f80c +0x1a80:  pop    %ebp
0815f80d +0x1a81:  ret
0815f80e +0x1a82:  push   %ebp
0815f80f +0x1a83:  mov    %esp,%ebp
0815f811 +0x1a85:  mov    0xc(%ebp),%eax
0815f814 +0x1a88:  mov    (%eax),%edx
0815f816 +0x1a8a:  mov    0x8(%ebp),%eax
0815f819 +0x1a8d:  mov    %edx,(%eax)
0815f81b +0x1a8f:  pop    %ebp
0815f81c +0x1a90:  ret
0815f81d +0x1a91:  nop
0815f81e +0x1a92:  push   %ebp
0815f81f +0x1a93:  mov    %esp,%ebp
0815f821 +0x1a95:  push   %esi
0815f822 +0x1a96:  push   %ebx
0815f823 +0x1a97:  sub    $0x50,%esp
0815f826 +0x1a9a:  mov    0x8(%ebp),%ebx
0815f829 +0x1a9d:  mov    0x10(%ebp),%esi
0815f82c +0x1aa0:  mov    0xc(%ebp),%eax
0815f82f +0x1aa3:  mov    %eax,(%esp)
0815f832 +0x1aa6:  call   0815f6c6 <+0x193a>
0815f837 +0x1aab:  cmp    %eax,%esi
0815f839 +0x1aad:  sete   %al
0815f83c +0x1ab0:  test   %al,%al
0815f83e +0x1ab2:  je     0815f900 <+0x1b74>
0815f844 +0x1ab8:  mov    0xc(%ebp),%eax
0815f847 +0x1abb:  mov    %eax,(%esp)
0815f84a +0x1abe:  call   0815fca4 <+0x1f18>
0815f84f +0x1ac3:  test   %eax,%eax
0815f851 +0x1ac5:  je     0815f89a <+0x1b0e>
0815f853 +0x1ac7:  mov    0x14(%ebp),%eax
0815f856 +0x1aca:  mov    %eax,0x4(%esp)
0815f85a +0x1ace:  lea    -0x29(%ebp),%eax
0815f85d +0x1ad1:  mov    %eax,(%esp)
0815f860 +0x1ad4:  call   0815fc9c <+0x1f10>
0815f865 +0x1ad9:  mov    %eax,%esi
0815f867 +0x1adb:  mov    0xc(%ebp),%eax
0815f86a +0x1ade:  mov    %eax,(%esp)
0815f86d +0x1ae1:  call   0815f6ea <+0x195e>
0815f872 +0x1ae6:  mov    (%eax),%eax
0815f874 +0x1ae8:  mov    %eax,(%esp)
0815f877 +0x1aeb:  call   0815f780 <+0x19f4>
0815f87c +0x1af0:  mov    0xc(%ebp),%edx
0815f87f +0x1af3:  mov    %esi,0x8(%esp)
0815f883 +0x1af7:  mov    %eax,0x4(%esp)
0815f887 +0x1afb:  mov    %edx,(%esp)
0815f88a +0x1afe:  call   0815f0b8 <+0x132c>
0815f88f +0x1b03:  test   %al,%al
0815f891 +0x1b05:  je     0815f89a <+0x1b0e>
0815f893 +0x1b07:  mov    $0x1,%eax
0815f898 +0x1b0c:  jmp    0815f89f <+0x1b13>
0815f89a +0x1b0e:  mov    $0x0,%eax
0815f89f +0x1b13:  test   %al,%al
0815f8a1 +0x1b15:  je     0815f8da <+0x1b4e>
0815f8a3 +0x1b17:  mov    0xc(%ebp),%eax
0815f8a6 +0x1b1a:  mov    %eax,(%esp)
0815f8a9 +0x1b1d:  call   0815f6ea <+0x195e>
0815f8ae +0x1b22:  mov    (%eax),%eax
0815f8b0 +0x1b24:  mov    0x14(%ebp),%edx
0815f8b3 +0x1b27:  mov    %edx,0x10(%esp)
0815f8b7 +0x1b2b:  mov    %eax,0xc(%esp)
0815f8bb +0x1b2f:  movl   $0x0,0x8(%esp)
0815f8c3 +0x1b37:  mov    0xc(%ebp),%eax
0815f8c6 +0x1b3a:  mov    %eax,0x4(%esp)
0815f8ca +0x1b3e:  mov    %ebx,(%esp)
0815f8cd +0x1b41:  call   0815fcb0 <+0x1f24>
0815f8d2 +0x1b46:  sub    $0x4,%esp
0815f8d5 +0x1b49:  jmp    0815fbd5 <+0x1e49>
0815f8da +0x1b4e:  lea    -0x28(%ebp),%eax
0815f8dd +0x1b51:  mov    0x14(%ebp),%edx
0815f8e0 +0x1b54:  mov    %edx,0x8(%esp)
0815f8e4 +0x1b58:  mov    0xc(%ebp),%edx
0815f8e7 +0x1b5b:  mov    %edx,0x4(%esp)
0815f8eb +0x1b5f:  mov    %eax,(%esp)
0815f8ee +0x1b62:  call   0815fd78 <+0x1fec>
0815f8f3 +0x1b67:  sub    $0x4,%esp
0815f8f6 +0x1b6a:  mov    -0x28(%ebp),%eax
0815f8f9 +0x1b6d:  mov    %eax,(%ebx)
0815f8fb +0x1b6f:  jmp    0815fbd5 <+0x1e49>
0815f900 +0x1b74:  mov    0x10(%ebp),%eax
0815f903 +0x1b77:  mov    %eax,(%esp)
0815f906 +0x1b7a:  call   0815f780 <+0x19f4>
0815f90b +0x1b7f:  mov    %eax,%esi
0815f90d +0x1b81:  mov    0x14(%ebp),%eax
0815f910 +0x1b84:  mov    %eax,0x4(%esp)
0815f914 +0x1b88:  lea    -0x1e(%ebp),%eax
0815f917 +0x1b8b:  mov    %eax,(%esp)
0815f91a +0x1b8e:  call   0815fc9c <+0x1f10>
0815f91f +0x1b93:  mov    0xc(%ebp),%edx
0815f922 +0x1b96:  mov    %esi,0x8(%esp)
0815f926 +0x1b9a:  mov    %eax,0x4(%esp)
0815f92a +0x1b9e:  mov    %edx,(%esp)
0815f92d +0x1ba1:  call   0815f0b8 <+0x132c>
0815f932 +0x1ba6:  test   %al,%al
0815f934 +0x1ba8:  je     0815fa6c <+0x1ce0>
0815f93a +0x1bae:  mov    0x10(%ebp),%eax
0815f93d +0x1bb1:  mov    %eax,-0x30(%ebp)
0815f940 +0x1bb4:  mov    0x10(%ebp),%esi
0815f943 +0x1bb7:  mov    0xc(%ebp),%eax
0815f946 +0x1bba:  mov    %eax,(%esp)
0815f949 +0x1bbd:  call   0815f6d2 <+0x1946>
0815f94e +0x1bc2:  mov    (%eax),%eax
0815f950 +0x1bc4:  cmp    %eax,%esi
0815f952 +0x1bc6:  sete   %al
0815f955 +0x1bc9:  test   %al,%al
0815f957 +0x1bcb:  je     0815f999 <+0x1c0d>
0815f959 +0x1bcd:  mov    0xc(%ebp),%eax
0815f95c +0x1bd0:  mov    %eax,(%esp)
0815f95f +0x1bd3:  call   0815f6d2 <+0x1946>
0815f964 +0x1bd8:  mov    (%eax),%esi
0815f966 +0x1bda:  mov    0xc(%ebp),%eax
0815f969 +0x1bdd:  mov    %eax,(%esp)
0815f96c +0x1be0:  call   0815f6d2 <+0x1946>
0815f971 +0x1be5:  mov    (%eax),%eax
0815f973 +0x1be7:  mov    0x14(%ebp),%edx
0815f976 +0x1bea:  mov    %edx,0x10(%esp)
0815f97a +0x1bee:  mov    %esi,0xc(%esp)
0815f97e +0x1bf2:  mov    %eax,0x8(%esp)
0815f982 +0x1bf6:  mov    0xc(%ebp),%eax
0815f985 +0x1bf9:  mov    %eax,0x4(%esp)
0815f989 +0x1bfd:  mov    %ebx,(%esp)
0815f98c +0x1c00:  call   0815fcb0 <+0x1f24>
0815f991 +0x1c05:  sub    $0x4,%esp
0815f994 +0x1c08:  jmp    0815fbd5 <+0x1e49>
0815f999 +0x1c0d:  mov    0x14(%ebp),%eax
0815f99c +0x1c10:  mov    %eax,0x4(%esp)
0815f9a0 +0x1c14:  lea    -0x1d(%ebp),%eax
0815f9a3 +0x1c17:  mov    %eax,(%esp)
0815f9a6 +0x1c1a:  call   0815fc9c <+0x1f10>
0815f9ab +0x1c1f:  mov    %eax,%esi
0815f9ad +0x1c21:  lea    -0x30(%ebp),%eax
0815f9b0 +0x1c24:  mov    %eax,(%esp)
0815f9b3 +0x1c27:  call   0815ff48 <+0x21bc>
0815f9b8 +0x1c2c:  mov    (%eax),%eax
0815f9ba +0x1c2e:  mov    %eax,(%esp)
0815f9bd +0x1c31:  call   0815f780 <+0x19f4>
0815f9c2 +0x1c36:  mov    0xc(%ebp),%edx
0815f9c5 +0x1c39:  mov    %esi,0x8(%esp)
0815f9c9 +0x1c3d:  mov    %eax,0x4(%esp)
0815f9cd +0x1c41:  mov    %edx,(%esp)
0815f9d0 +0x1c44:  call   0815f0b8 <+0x132c>
0815f9d5 +0x1c49:  test   %al,%al
0815f9d7 +0x1c4b:  je     0815fa46 <+0x1cba>
0815f9d9 +0x1c4d:  mov    -0x30(%ebp),%eax
0815f9dc +0x1c50:  mov    %eax,(%esp)
0815f9df +0x1c53:  call   0815ff65 <+0x21d9>
0815f9e4 +0x1c58:  test   %eax,%eax
0815f9e6 +0x1c5a:  sete   %al
0815f9e9 +0x1c5d:  test   %al,%al
0815f9eb +0x1c5f:  je     0815fa1a <+0x1c8e>
0815f9ed +0x1c61:  mov    -0x30(%ebp),%eax
0815f9f0 +0x1c64:  mov    0x14(%ebp),%edx
0815f9f3 +0x1c67:  mov    %edx,0x10(%esp)
0815f9f7 +0x1c6b:  mov    %eax,0xc(%esp)
0815f9fb +0x1c6f:  movl   $0x0,0x8(%esp)
0815fa03 +0x1c77:  mov    0xc(%ebp),%eax
0815fa06 +0x1c7a:  mov    %eax,0x4(%esp)
0815fa0a +0x1c7e:  mov    %ebx,(%esp)
0815fa0d +0x1c81:  call   0815fcb0 <+0x1f24>
0815fa12 +0x1c86:  sub    $0x4,%esp
0815fa15 +0x1c89:  jmp    0815fbd5 <+0x1e49>
0815fa1a +0x1c8e:  mov    0x10(%ebp),%edx
0815fa1d +0x1c91:  mov    0x10(%ebp),%eax
0815fa20 +0x1c94:  mov    0x14(%ebp),%ecx
0815fa23 +0x1c97:  mov    %ecx,0x10(%esp)
0815fa27 +0x1c9b:  mov    %edx,0xc(%esp)
0815fa2b +0x1c9f:  mov    %eax,0x8(%esp)
0815fa2f +0x1ca3:  mov    0xc(%ebp),%eax
0815fa32 +0x1ca6:  mov    %eax,0x4(%esp)
0815fa36 +0x1caa:  mov    %ebx,(%esp)
0815fa39 +0x1cad:  call   0815fcb0 <+0x1f24>
0815fa3e +0x1cb2:  sub    $0x4,%esp
0815fa41 +0x1cb5:  jmp    0815fbd5 <+0x1e49>
0815fa46 +0x1cba:  lea    -0x1c(%ebp),%eax
0815fa49 +0x1cbd:  mov    0x14(%ebp),%edx
0815fa4c +0x1cc0:  mov    %edx,0x8(%esp)
0815fa50 +0x1cc4:  mov    0xc(%ebp),%edx
0815fa53 +0x1cc7:  mov    %edx,0x4(%esp)
0815fa57 +0x1ccb:  mov    %eax,(%esp)
0815fa5a +0x1cce:  call   0815fd78 <+0x1fec>
0815fa5f +0x1cd3:  sub    $0x4,%esp
0815fa62 +0x1cd6:  mov    -0x1c(%ebp),%eax
0815fa65 +0x1cd9:  mov    %eax,(%ebx)
0815fa67 +0x1cdb:  jmp    0815fbd5 <+0x1e49>
0815fa6c +0x1ce0:  mov    0x14(%ebp),%eax
0815fa6f +0x1ce3:  mov    %eax,0x4(%esp)
0815fa73 +0x1ce7:  lea    -0x12(%ebp),%eax
0815fa76 +0x1cea:  mov    %eax,(%esp)
0815fa79 +0x1ced:  call   0815fc9c <+0x1f10>
0815fa7e +0x1cf2:  mov    %eax,%esi
0815fa80 +0x1cf4:  mov    0x10(%ebp),%eax
0815fa83 +0x1cf7:  mov    %eax,(%esp)
0815fa86 +0x1cfa:  call   0815f780 <+0x19f4>
0815fa8b +0x1cff:  mov    0xc(%ebp),%edx
0815fa8e +0x1d02:  mov    %esi,0x8(%esp)
0815fa92 +0x1d06:  mov    %eax,0x4(%esp)
0815fa96 +0x1d0a:  mov    %edx,(%esp)
0815fa99 +0x1d0d:  call   0815f0b8 <+0x132c>
0815fa9e +0x1d12:  test   %al,%al
0815faa0 +0x1d14:  je     0815fbc6 <+0x1e3a>
0815faa6 +0x1d1a:  mov    0x10(%ebp),%eax
0815faa9 +0x1d1d:  mov    %eax,-0x34(%ebp)
0815faac +0x1d20:  mov    0x10(%ebp),%esi
0815faaf +0x1d23:  mov    0xc(%ebp),%eax
0815fab2 +0x1d26:  mov    %eax,(%esp)
0815fab5 +0x1d29:  call   0815f6ea <+0x195e>
0815faba +0x1d2e:  mov    (%eax),%eax
0815fabc +0x1d30:  cmp    %eax,%esi
0815fabe +0x1d32:  sete   %al
0815fac1 +0x1d35:  test   %al,%al
0815fac3 +0x1d37:  je     0815fafc <+0x1d70>
0815fac5 +0x1d39:  mov    0xc(%ebp),%eax
0815fac8 +0x1d3c:  mov    %eax,(%esp)
0815facb +0x1d3f:  call   0815f6ea <+0x195e>
0815fad0 +0x1d44:  mov    (%eax),%eax
0815fad2 +0x1d46:  mov    0x14(%ebp),%edx
0815fad5 +0x1d49:  mov    %edx,0x10(%esp)
0815fad9 +0x1d4d:  mov    %eax,0xc(%esp)
0815fadd +0x1d51:  movl   $0x0,0x8(%esp)
0815fae5 +0x1d59:  mov    0xc(%ebp),%eax
0815fae8 +0x1d5c:  mov    %eax,0x4(%esp)
0815faec +0x1d60:  mov    %ebx,(%esp)
0815faef +0x1d63:  call   0815fcb0 <+0x1f24>
0815faf4 +0x1d68:  sub    $0x4,%esp
0815faf7 +0x1d6b:  jmp    0815fbd5 <+0x1e49>
0815fafc +0x1d70:  lea    -0x34(%ebp),%eax
0815faff +0x1d73:  mov    %eax,(%esp)
0815fb02 +0x1d76:  call   0815ff70 <+0x21e4>
0815fb07 +0x1d7b:  mov    (%eax),%eax
0815fb09 +0x1d7d:  mov    %eax,(%esp)
0815fb0c +0x1d80:  call   0815f780 <+0x19f4>
0815fb11 +0x1d85:  mov    %eax,%esi
0815fb13 +0x1d87:  mov    0x14(%ebp),%eax
0815fb16 +0x1d8a:  mov    %eax,0x4(%esp)
0815fb1a +0x1d8e:  lea    -0x11(%ebp),%eax
0815fb1d +0x1d91:  mov    %eax,(%esp)
0815fb20 +0x1d94:  call   0815fc9c <+0x1f10>
0815fb25 +0x1d99:  mov    0xc(%ebp),%edx
0815fb28 +0x1d9c:  mov    %esi,0x8(%esp)
0815fb2c +0x1da0:  mov    %eax,0x4(%esp)
0815fb30 +0x1da4:  mov    %edx,(%esp)
0815fb33 +0x1da7:  call   0815f0b8 <+0x132c>
0815fb38 +0x1dac:  test   %al,%al
0815fb3a +0x1dae:  je     0815fba3 <+0x1e17>
0815fb3c +0x1db0:  mov    0x10(%ebp),%eax
0815fb3f +0x1db3:  mov    %eax,(%esp)
0815fb42 +0x1db6:  call   0815ff65 <+0x21d9>
0815fb47 +0x1dbb:  test   %eax,%eax
0815fb49 +0x1dbd:  sete   %al
0815fb4c +0x1dc0:  test   %al,%al
0815fb4e +0x1dc2:  je     0815fb7a <+0x1dee>
0815fb50 +0x1dc4:  mov    0x10(%ebp),%eax
0815fb53 +0x1dc7:  mov    0x14(%ebp),%edx
0815fb56 +0x1dca:  mov    %edx,0x10(%esp)
0815fb5a +0x1dce:  mov    %eax,0xc(%esp)
0815fb5e +0x1dd2:  movl   $0x0,0x8(%esp)
0815fb66 +0x1dda:  mov    0xc(%ebp),%eax
0815fb69 +0x1ddd:  mov    %eax,0x4(%esp)
0815fb6d +0x1de1:  mov    %ebx,(%esp)
0815fb70 +0x1de4:  call   0815fcb0 <+0x1f24>
0815fb75 +0x1de9:  sub    $0x4,%esp
0815fb78 +0x1dec:  jmp    0815fbd5 <+0x1e49>
0815fb7a +0x1dee:  mov    -0x34(%ebp),%edx
0815fb7d +0x1df1:  mov    -0x34(%ebp),%eax
0815fb80 +0x1df4:  mov    0x14(%ebp),%ecx
0815fb83 +0x1df7:  mov    %ecx,0x10(%esp)
0815fb87 +0x1dfb:  mov    %edx,0xc(%esp)
0815fb8b +0x1dff:  mov    %eax,0x8(%esp)
0815fb8f +0x1e03:  mov    0xc(%ebp),%eax
0815fb92 +0x1e06:  mov    %eax,0x4(%esp)
0815fb96 +0x1e0a:  mov    %ebx,(%esp)
0815fb99 +0x1e0d:  call   0815fcb0 <+0x1f24>
0815fb9e +0x1e12:  sub    $0x4,%esp
0815fba1 +0x1e15:  jmp    0815fbd5 <+0x1e49>
0815fba3 +0x1e17:  lea    -0x10(%ebp),%eax
0815fba6 +0x1e1a:  mov    0x14(%ebp),%edx
0815fba9 +0x1e1d:  mov    %edx,0x8(%esp)
0815fbad +0x1e21:  mov    0xc(%ebp),%edx
0815fbb0 +0x1e24:  mov    %edx,0x4(%esp)
0815fbb4 +0x1e28:  mov    %eax,(%esp)
0815fbb7 +0x1e2b:  call   0815fd78 <+0x1fec>
0815fbbc +0x1e30:  sub    $0x4,%esp
0815fbbf +0x1e33:  mov    -0x10(%ebp),%eax
0815fbc2 +0x1e36:  mov    %eax,(%ebx)
0815fbc4 +0x1e38:  jmp    0815fbd5 <+0x1e49>
0815fbc6 +0x1e3a:  mov    0x10(%ebp),%eax
0815fbc9 +0x1e3d:  mov    %eax,0x4(%esp)
0815fbcd +0x1e41:  mov    %ebx,(%esp)
0815fbd0 +0x1e44:  call   0815f6f6 <+0x196a>
0815fbd5 +0x1e49:  mov    %ebx,%eax
0815fbd7 +0x1e4b:  lea    -0x8(%ebp),%esp
0815fbda +0x1e4e:  add    $0x0,%esp
0815fbdd +0x1e51:  pop    %ebx
0815fbde +0x1e52:  pop    %esi
0815fbdf +0x1e53:  pop    %ebp
0815fbe0 +0x1e54:  ret    $0x4
0815fbe3 +0x1e57:  nop
0815fbe4 +0x1e58:  push   %ebp
0815fbe5 +0x1e59:  mov    %esp,%ebp
0815fbe7 +0x1e5b:  sub    $0x18,%esp
0815fbea +0x1e5e:  mov    0x8(%ebp),%eax
0815fbed +0x1e61:  mov    %eax,(%esp)
0815fbf0 +0x1e64:  call   0815ff8e <+0x2202>
0815fbf5 +0x1e69:  leave
0815fbf6 +0x1e6a:  ret
0815fbf7 +0x1e6b:  nop
0815fbf8 +0x1e6c:  push   %ebp
0815fbf9 +0x1e6d:  mov    %esp,%ebp
0815fbfb +0x1e6f:  mov    0x8(%ebp),%eax
0815fbfe +0x1e72:  movl   $0x0,0x4(%eax)
0815fc05 +0x1e79:  mov    0x8(%ebp),%eax
0815fc08 +0x1e7c:  movl   $0x0,0x8(%eax)
0815fc0f +0x1e83:  mov    0x8(%ebp),%eax
0815fc12 +0x1e86:  lea    0x4(%eax),%edx
0815fc15 +0x1e89:  mov    0x8(%ebp),%eax
0815fc18 +0x1e8c:  mov    %edx,0xc(%eax)
0815fc1b +0x1e8f:  mov    0x8(%ebp),%eax
0815fc1e +0x1e92:  lea    0x4(%eax),%edx
0815fc21 +0x1e95:  mov    0x8(%ebp),%eax
0815fc24 +0x1e98:  mov    %edx,0x10(%eax)
0815fc27 +0x1e9b:  pop    %ebp
0815fc28 +0x1e9c:  ret
0815fc29 +0x1e9d:  nop
0815fc2a +0x1e9e:  push   %ebp
0815fc2b +0x1e9f:  mov    %esp,%ebp
0815fc2d +0x1ea1:  mov    0x8(%ebp),%eax
0815fc30 +0x1ea4:  pop    %ebp
0815fc31 +0x1ea5:  ret
0815fc32 +0x1ea6:  push   %ebp
0815fc33 +0x1ea7:  mov    %esp,%ebp
0815fc35 +0x1ea9:  pop    %ebp
0815fc36 +0x1eaa:  ret
0815fc37 +0x1eab:  nop
0815fc38 +0x1eac:  push   %ebp
0815fc39 +0x1ead:  mov    %esp,%ebp
0815fc3b +0x1eaf:  sub    $0x18,%esp
0815fc3e +0x1eb2:  mov    0xc(%ebp),%eax
0815fc41 +0x1eb5:  mov    %eax,(%esp)
0815fc44 +0x1eb8:  call   0815fc32 <+0x1ea6>
0815fc49 +0x1ebd:  leave
0815fc4a +0x1ebe:  ret
0815fc4b +0x1ebf:  nop
0815fc4c +0x1ec0:  push   %ebp
0815fc4d +0x1ec1:  mov    %esp,%ebp
0815fc4f +0x1ec3:  sub    $0x18,%esp
0815fc52 +0x1ec6:  mov    0x8(%ebp),%eax
0815fc55 +0x1ec9:  movl   $0x1,0x8(%esp)
0815fc5d +0x1ed1:  mov    0xc(%ebp),%edx
0815fc60 +0x1ed4:  mov    %edx,0x4(%esp)
0815fc64 +0x1ed8:  mov    %eax,(%esp)
0815fc67 +0x1edb:  call   0815ff94 <+0x2208>
0815fc6c +0x1ee0:  leave
0815fc6d +0x1ee1:  ret
0815fc6e +0x1ee2:  push   %ebp
0815fc6f +0x1ee3:  mov    %esp,%ebp
0815fc71 +0x1ee5:  sub    $0x28,%esp
0815fc74 +0x1ee8:  mov    0x8(%ebp),%eax
0815fc77 +0x1eeb:  mov    %eax,(%esp)
0815fc7a +0x1eee:  call   0815ffa7 <+0x221b>
0815fc7f +0x1ef3:  mov    %eax,0x4(%esp)
0815fc83 +0x1ef7:  lea    -0x9(%ebp),%eax
0815fc86 +0x1efa:  mov    %eax,(%esp)
0815fc89 +0x1efd:  call   0815fc9c <+0x1f10>
0815fc8e +0x1f02:  leave
0815fc8f +0x1f03:  ret
0815fc90 +0x1f04:  push   %ebp
0815fc91 +0x1f05:  mov    %esp,%ebp
0815fc93 +0x1f07:  mov    0x8(%ebp),%eax
0815fc96 +0x1f0a:  add    $0x10,%eax
0815fc99 +0x1f0d:  pop    %ebp
0815fc9a +0x1f0e:  ret
0815fc9b +0x1f0f:  nop
0815fc9c +0x1f10:  push   %ebp
0815fc9d +0x1f11:  mov    %esp,%ebp
0815fc9f +0x1f13:  mov    0xc(%ebp),%eax
0815fca2 +0x1f16:  pop    %ebp
0815fca3 +0x1f17:  ret
0815fca4 +0x1f18:  push   %ebp
0815fca5 +0x1f19:  mov    %esp,%ebp
0815fca7 +0x1f1b:  mov    0x8(%ebp),%eax
0815fcaa +0x1f1e:  mov    0x14(%eax),%eax
0815fcad +0x1f21:  pop    %ebp
0815fcae +0x1f22:  ret
0815fcaf +0x1f23:  nop
0815fcb0 +0x1f24:  push   %ebp
0815fcb1 +0x1f25:  mov    %esp,%ebp
0815fcb3 +0x1f27:  push   %esi
0815fcb4 +0x1f28:  push   %ebx
0815fcb5 +0x1f29:  sub    $0x20,%esp
0815fcb8 +0x1f2c:  mov    0x8(%ebp),%esi
0815fcbb +0x1f2f:  cmpl   $0x0,0x10(%ebp)
0815fcbf +0x1f33:  jne    0815fd07 <+0x1f7b>
0815fcc1 +0x1f35:  mov    0xc(%ebp),%eax
0815fcc4 +0x1f38:  mov    %eax,(%esp)
0815fcc7 +0x1f3b:  call   0815f6c6 <+0x193a>
0815fccc +0x1f40:  cmp    0x14(%ebp),%eax
0815fccf +0x1f43:  je     0815fd07 <+0x1f7b>
0815fcd1 +0x1f45:  mov    0x14(%ebp),%eax
0815fcd4 +0x1f48:  mov    %eax,(%esp)
0815fcd7 +0x1f4b:  call   0815f780 <+0x19f4>
0815fcdc +0x1f50:  mov    %eax,%ebx
0815fcde +0x1f52:  mov    0x18(%ebp),%eax
0815fce1 +0x1f55:  mov    %eax,0x4(%esp)
0815fce5 +0x1f59:  lea    -0xe(%ebp),%eax
0815fce8 +0x1f5c:  mov    %eax,(%esp)
0815fceb +0x1f5f:  call   0815fc9c <+0x1f10>
0815fcf0 +0x1f64:  mov    0xc(%ebp),%edx
0815fcf3 +0x1f67:  mov    %ebx,0x8(%esp)
0815fcf7 +0x1f6b:  mov    %eax,0x4(%esp)
0815fcfb +0x1f6f:  mov    %edx,(%esp)
0815fcfe +0x1f72:  call   0815f0b8 <+0x132c>
0815fd03 +0x1f77:  test   %al,%al
0815fd05 +0x1f79:  je     0815fd0e <+0x1f82>
0815fd07 +0x1f7b:  mov    $0x1,%eax
0815fd0c +0x1f80:  jmp    0815fd13 <+0x1f87>
0815fd0e +0x1f82:  mov    $0x0,%eax
0815fd13 +0x1f87:  mov    %al,-0xd(%ebp)
0815fd16 +0x1f8a:  mov    0x18(%ebp),%eax
0815fd19 +0x1f8d:  mov    %eax,0x4(%esp)
0815fd1d +0x1f91:  mov    0xc(%ebp),%eax
0815fd20 +0x1f94:  mov    %eax,(%esp)
0815fd23 +0x1f97:  call   0815ffb2 <+0x2226>
0815fd28 +0x1f9c:  mov    %eax,-0xc(%ebp)
0815fd2b +0x1f9f:  mov    0xc(%ebp),%eax
0815fd2e +0x1fa2:  lea    0x4(%eax),%ecx
0815fd31 +0x1fa5:  mov    -0xc(%ebp),%edx
0815fd34 +0x1fa8:  movzbl -0xd(%ebp),%eax
0815fd38 +0x1fac:  mov    %ecx,0xc(%esp)
0815fd3c +0x1fb0:  mov    0x14(%ebp),%ecx
0815fd3f +0x1fb3:  mov    %ecx,0x8(%esp)
0815fd43 +0x1fb7:  mov    %edx,0x4(%esp)
0815fd47 +0x1fbb:  mov    %eax,(%esp)
0815fd4a +0x1fbe:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0815fd4f +0x1fc3:  mov    0xc(%ebp),%eax
0815fd52 +0x1fc6:  mov    0x14(%eax),%eax
0815fd55 +0x1fc9:  lea    0x1(%eax),%edx
0815fd58 +0x1fcc:  mov    0xc(%ebp),%eax
0815fd5b +0x1fcf:  mov    %edx,0x14(%eax)
0815fd5e +0x1fd2:  mov    -0xc(%ebp),%eax
0815fd61 +0x1fd5:  mov    %eax,0x4(%esp)
0815fd65 +0x1fd9:  mov    %esi,(%esp)
0815fd68 +0x1fdc:  call   0815f6f6 <+0x196a>
0815fd6d +0x1fe1:  mov    %esi,%eax
0815fd6f +0x1fe3:  add    $0x20,%esp
0815fd72 +0x1fe6:  pop    %ebx
0815fd73 +0x1fe7:  pop    %esi
0815fd74 +0x1fe8:  pop    %ebp
0815fd75 +0x1fe9:  ret    $0x4
0815fd78 +0x1fec:  push   %ebp
0815fd79 +0x1fed:  mov    %esp,%ebp
0815fd7b +0x1fef:  push   %esi
0815fd7c +0x1ff0:  push   %ebx
0815fd7d +0x1ff1:  sub    $0x50,%esp
0815fd80 +0x1ff4:  mov    0x8(%ebp),%ebx
0815fd83 +0x1ff7:  mov    0xc(%ebp),%eax
0815fd86 +0x1ffa:  mov    %eax,(%esp)
0815fd89 +0x1ffd:  call   0815eeae <+0x1122>
0815fd8e +0x2002:  mov    %eax,-0x14(%ebp)
0815fd91 +0x2005:  mov    0xc(%ebp),%eax
0815fd94 +0x2008:  mov    %eax,(%esp)
0815fd97 +0x200b:  call   0815f6c6 <+0x193a>
0815fd9c +0x2010:  mov    %eax,-0x10(%ebp)
0815fd9f +0x2013:  movb   $0x1,-0x9(%ebp)
0815fda3 +0x2017:  jmp    0815fe01 <+0x2075>
0815fda5 +0x2019:  mov    -0x14(%ebp),%eax
0815fda8 +0x201c:  mov    %eax,-0x10(%ebp)
0815fdab +0x201f:  mov    -0x14(%ebp),%eax
0815fdae +0x2022:  mov    %eax,(%esp)
0815fdb1 +0x2025:  call   0815fc6e <+0x1ee2>
0815fdb6 +0x202a:  mov    %eax,%esi
0815fdb8 +0x202c:  mov    0x10(%ebp),%eax
0815fdbb +0x202f:  mov    %eax,0x4(%esp)
0815fdbf +0x2033:  lea    -0x2d(%ebp),%eax
0815fdc2 +0x2036:  mov    %eax,(%esp)
0815fdc5 +0x2039:  call   0815fc9c <+0x1f10>
0815fdca +0x203e:  mov    0xc(%ebp),%edx
0815fdcd +0x2041:  mov    %esi,0x8(%esp)
0815fdd1 +0x2045:  mov    %eax,0x4(%esp)
0815fdd5 +0x2049:  mov    %edx,(%esp)
0815fdd8 +0x204c:  call   0815f0b8 <+0x132c>
0815fddd +0x2051:  mov    %al,-0x9(%ebp)
0815fde0 +0x2054:  cmpb   $0x0,-0x9(%ebp)
0815fde4 +0x2058:  je     0815fdf3 <+0x2067>
0815fde6 +0x205a:  mov    -0x14(%ebp),%eax
0815fde9 +0x205d:  mov    %eax,(%esp)
0815fdec +0x2060:  call   0815f686 <+0x18fa>
0815fdf1 +0x2065:  jmp    0815fdfe <+0x2072>
0815fdf3 +0x2067:  mov    -0x14(%ebp),%eax
0815fdf6 +0x206a:  mov    %eax,(%esp)
0815fdf9 +0x206d:  call   0815f67b <+0x18ef>
0815fdfe +0x2072:  mov    %eax,-0x14(%ebp)
0815fe01 +0x2075:  cmpl   $0x0,-0x14(%ebp)
0815fe05 +0x2079:  setne  %al
0815fe08 +0x207c:  test   %al,%al
0815fe0a +0x207e:  jne    0815fda5 <+0x2019>
0815fe0c +0x2080:  mov    -0x10(%ebp),%eax
0815fe0f +0x2083:  mov    %eax,0x4(%esp)
0815fe13 +0x2087:  lea    -0x34(%ebp),%eax
0815fe16 +0x208a:  mov    %eax,(%esp)
0815fe19 +0x208d:  call   0815f6f6 <+0x196a>
0815fe1e +0x2092:  cmpb   $0x0,-0x9(%ebp)
0815fe22 +0x2096:  je     0815fea3 <+0x2117>
0815fe24 +0x2098:  lea    -0x2c(%ebp),%eax
0815fe27 +0x209b:  mov    0xc(%ebp),%edx
0815fe2a +0x209e:  mov    %edx,0x4(%esp)
0815fe2e +0x20a2:  mov    %eax,(%esp)
0815fe31 +0x20a5:  call   0815ef30 <+0x11a4>
0815fe36 +0x20aa:  sub    $0x4,%esp
0815fe39 +0x20ad:  lea    -0x2c(%ebp),%eax
0815fe3c +0x20b0:  mov    %eax,0x4(%esp)
0815fe40 +0x20b4:  lea    -0x34(%ebp),%eax
0815fe43 +0x20b7:  mov    %eax,(%esp)
0815fe46 +0x20ba:  call   0815f0ce <+0x1342>
0815fe4b +0x20bf:  test   %al,%al
0815fe4d +0x20c1:  je     0815fe98 <+0x210c>
0815fe4f +0x20c3:  movb   $0x1,-0x25(%ebp)
0815fe53 +0x20c7:  mov    -0x10(%ebp),%ecx
0815fe56 +0x20ca:  mov    -0x14(%ebp),%edx
0815fe59 +0x20cd:  lea    -0x24(%ebp),%eax
0815fe5c +0x20d0:  mov    0x10(%ebp),%esi
0815fe5f +0x20d3:  mov    %esi,0x10(%esp)
0815fe63 +0x20d7:  mov    %ecx,0xc(%esp)
0815fe67 +0x20db:  mov    %edx,0x8(%esp)
0815fe6b +0x20df:  mov    0xc(%ebp),%edx
0815fe6e +0x20e2:  mov    %edx,0x4(%esp)
0815fe72 +0x20e6:  mov    %eax,(%esp)
0815fe75 +0x20e9:  call   0815fcb0 <+0x1f24>
0815fe7a +0x20ee:  sub    $0x4,%esp
0815fe7d +0x20f1:  lea    -0x25(%ebp),%eax
0815fe80 +0x20f4:  mov    %eax,0x8(%esp)
0815fe84 +0x20f8:  lea    -0x24(%ebp),%eax
0815fe87 +0x20fb:  mov    %eax,0x4(%esp)
0815fe8b +0x20ff:  mov    %ebx,(%esp)
0815fe8e +0x2102:  call   08160034 <+0x22a8>
0815fe93 +0x2107:  jmp    0815ff39 <+0x21ad>
0815fe98 +0x210c:  lea    -0x34(%ebp),%eax
0815fe9b +0x210f:  mov    %eax,(%esp)
0815fe9e +0x2112:  call   08160062 <+0x22d6>
0815fea3 +0x2117:  mov    0x10(%ebp),%eax
0815fea6 +0x211a:  mov    %eax,0x4(%esp)
0815feaa +0x211e:  lea    -0x1e(%ebp),%eax
0815fead +0x2121:  mov    %eax,(%esp)
0815feb0 +0x2124:  call   0815fc9c <+0x1f10>
0815feb5 +0x2129:  mov    %eax,%esi
0815feb7 +0x212b:  mov    -0x34(%ebp),%eax
0815feba +0x212e:  mov    %eax,(%esp)
0815febd +0x2131:  call   0815f780 <+0x19f4>
0815fec2 +0x2136:  mov    0xc(%ebp),%edx
0815fec5 +0x2139:  mov    %esi,0x8(%esp)
0815fec9 +0x213d:  mov    %eax,0x4(%esp)
0815fecd +0x2141:  mov    %edx,(%esp)
0815fed0 +0x2144:  call   0815f0b8 <+0x132c>
0815fed5 +0x2149:  test   %al,%al
0815fed7 +0x214b:  je     0815ff1f <+0x2193>
0815fed9 +0x214d:  movb   $0x1,-0x1d(%ebp)
0815fedd +0x2151:  mov    -0x10(%ebp),%ecx
0815fee0 +0x2154:  mov    -0x14(%ebp),%edx
0815fee3 +0x2157:  lea    -0x1c(%ebp),%eax
0815fee6 +0x215a:  mov    0x10(%ebp),%esi
0815fee9 +0x215d:  mov    %esi,0x10(%esp)
0815feed +0x2161:  mov    %ecx,0xc(%esp)
0815fef1 +0x2165:  mov    %edx,0x8(%esp)
0815fef5 +0x2169:  mov    0xc(%ebp),%edx
0815fef8 +0x216c:  mov    %edx,0x4(%esp)
0815fefc +0x2170:  mov    %eax,(%esp)
0815feff +0x2173:  call   0815fcb0 <+0x1f24>
0815ff04 +0x2178:  sub    $0x4,%esp
0815ff07 +0x217b:  lea    -0x1d(%ebp),%eax
0815ff0a +0x217e:  mov    %eax,0x8(%esp)
0815ff0e +0x2182:  lea    -0x1c(%ebp),%eax
0815ff11 +0x2185:  mov    %eax,0x4(%esp)
0815ff15 +0x2189:  mov    %ebx,(%esp)
0815ff18 +0x218c:  call   08160034 <+0x22a8>
0815ff1d +0x2191:  jmp    0815ff39 <+0x21ad>
0815ff1f +0x2193:  movb   $0x0,-0x15(%ebp)
0815ff23 +0x2197:  lea    -0x15(%ebp),%eax
0815ff26 +0x219a:  mov    %eax,0x8(%esp)
0815ff2a +0x219e:  lea    -0x34(%ebp),%eax
0815ff2d +0x21a1:  mov    %eax,0x4(%esp)
0815ff31 +0x21a5:  mov    %ebx,(%esp)
0815ff34 +0x21a8:  call   08160080 <+0x22f4>
0815ff39 +0x21ad:  mov    %ebx,%eax
0815ff3b +0x21af:  lea    -0x8(%ebp),%esp
0815ff3e +0x21b2:  add    $0x0,%esp
0815ff41 +0x21b5:  pop    %ebx
0815ff42 +0x21b6:  pop    %esi
0815ff43 +0x21b7:  pop    %ebp
0815ff44 +0x21b8:  ret    $0x4
0815ff47 +0x21bb:  nop
0815ff48 +0x21bc:  push   %ebp
0815ff49 +0x21bd:  mov    %esp,%ebp
0815ff4b +0x21bf:  sub    $0x18,%esp
0815ff4e +0x21c2:  mov    0x8(%ebp),%eax
0815ff51 +0x21c5:  mov    (%eax),%eax
0815ff53 +0x21c7:  mov    %eax,(%esp)
0815ff56 +0x21ca:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
0815ff5b +0x21cf:  mov    0x8(%ebp),%edx
0815ff5e +0x21d2:  mov    %eax,(%edx)
0815ff60 +0x21d4:  mov    0x8(%ebp),%eax
0815ff63 +0x21d7:  leave
0815ff64 +0x21d8:  ret
0815ff65 +0x21d9:  push   %ebp
0815ff66 +0x21da:  mov    %esp,%ebp
0815ff68 +0x21dc:  mov    0x8(%ebp),%eax
0815ff6b +0x21df:  mov    0xc(%eax),%eax
0815ff6e +0x21e2:  pop    %ebp
0815ff6f +0x21e3:  ret
0815ff70 +0x21e4:  push   %ebp
0815ff71 +0x21e5:  mov    %esp,%ebp
0815ff73 +0x21e7:  sub    $0x18,%esp
0815ff76 +0x21ea:  mov    0x8(%ebp),%eax
0815ff79 +0x21ed:  mov    (%eax),%eax
0815ff7b +0x21ef:  mov    %eax,(%esp)
0815ff7e +0x21f2:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
0815ff83 +0x21f7:  mov    0x8(%ebp),%edx
0815ff86 +0x21fa:  mov    %eax,(%edx)
0815ff88 +0x21fc:  mov    0x8(%ebp),%eax
0815ff8b +0x21ff:  leave
0815ff8c +0x2200:  ret
0815ff8d +0x2201:  nop
0815ff8e +0x2202:  push   %ebp
0815ff8f +0x2203:  mov    %esp,%ebp
0815ff91 +0x2205:  pop    %ebp
0815ff92 +0x2206:  ret
0815ff93 +0x2207:  nop
0815ff94 +0x2208:  push   %ebp
0815ff95 +0x2209:  mov    %esp,%ebp
0815ff97 +0x220b:  sub    $0x18,%esp
0815ff9a +0x220e:  mov    0xc(%ebp),%eax
0815ff9d +0x2211:  mov    %eax,(%esp)
0815ffa0 +0x2214:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0815ffa5 +0x2219:  leave
0815ffa6 +0x221a:  ret
0815ffa7 +0x221b:  push   %ebp
0815ffa8 +0x221c:  mov    %esp,%ebp
0815ffaa +0x221e:  mov    0x8(%ebp),%eax
0815ffad +0x2221:  add    $0x10,%eax
0815ffb0 +0x2224:  pop    %ebp
0815ffb1 +0x2225:  ret
0815ffb2 +0x2226:  push   %ebp
0815ffb3 +0x2227:  mov    %esp,%ebp
0815ffb5 +0x2229:  push   %esi
0815ffb6 +0x222a:  push   %ebx
0815ffb7 +0x222b:  sub    $0x20,%esp
0815ffba +0x222e:  mov    0x8(%ebp),%eax
0815ffbd +0x2231:  mov    %eax,(%esp)
0815ffc0 +0x2234:  call   081600ae <+0x2322>
0815ffc5 +0x2239:  mov    %eax,-0xc(%ebp)
0815ffc8 +0x223c:  mov    0xc(%ebp),%eax
0815ffcb +0x223f:  mov    %eax,(%esp)
0815ffce +0x2242:  call   081600d1 <+0x2345>
0815ffd3 +0x2247:  mov    %eax,%ebx
0815ffd5 +0x2249:  mov    0x8(%ebp),%eax
0815ffd8 +0x224c:  mov    %eax,(%esp)
0815ffdb +0x224f:  call   0815fc2a <+0x1e9e>
0815ffe0 +0x2254:  mov    %ebx,0x8(%esp)
0815ffe4 +0x2258:  mov    -0xc(%ebp),%edx
0815ffe7 +0x225b:  mov    %edx,0x4(%esp)
0815ffeb +0x225f:  mov    %eax,(%esp)
0815ffee +0x2262:  call   081600da <+0x234e>
0815fff3 +0x2267:  jmp    08160029 <+0x229d>
0815fff5 +0x2269:  mov    %eax,(%esp)
0815fff8 +0x226c:  call   08725ce0 <__cxa_begin_catch>
0815fffd +0x2271:  mov    -0xc(%ebp),%eax
08160000 +0x2274:  mov    %eax,0x4(%esp)
08160004 +0x2278:  mov    0x8(%ebp),%eax
08160007 +0x227b:  mov    %eax,(%esp)
0816000a +0x227e:  call   0815fc4c <+0x1ec0>
0816000f +0x2283:  call   08724be0 <__cxa_rethrow>
08160014 +0x2288:  mov    %edx,%ebx
08160016 +0x228a:  mov    %eax,%esi
08160018 +0x228c:  call   08725c30 <__cxa_end_catch>
0816001d +0x2291:  mov    %esi,%eax
0816001f +0x2293:  mov    %ebx,%edx
08160021 +0x2295:  mov    %eax,(%esp)
08160024 +0x2298:  call   08ae3750 <_Unwind_Resume>
08160029 +0x229d:  mov    -0xc(%ebp),%eax
0816002c +0x22a0:  add    $0x20,%esp
0816002f +0x22a3:  pop    %ebx
08160030 +0x22a4:  pop    %esi
08160031 +0x22a5:  pop    %ebp
08160032 +0x22a6:  ret
08160033 +0x22a7:  nop
08160034 +0x22a8:  push   %ebp
08160035 +0x22a9:  mov    %esp,%ebp
08160037 +0x22ab:  sub    $0x18,%esp
0816003a +0x22ae:  mov    0xc(%ebp),%eax
0816003d +0x22b1:  mov    %eax,(%esp)
08160040 +0x22b4:  call   08160119 <+0x238d>
08160045 +0x22b9:  mov    0x8(%ebp),%edx
08160048 +0x22bc:  mov    (%eax),%eax
0816004a +0x22be:  mov    %eax,(%edx)
0816004c +0x22c0:  mov    0x10(%ebp),%eax
0816004f +0x22c3:  mov    %eax,(%esp)
08160052 +0x22c6:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08160057 +0x22cb:  movzbl (%eax),%edx
0816005a +0x22ce:  mov    0x8(%ebp),%eax
0816005d +0x22d1:  mov    %dl,0x4(%eax)
08160060 +0x22d4:  leave
08160061 +0x22d5:  ret
08160062 +0x22d6:  push   %ebp
08160063 +0x22d7:  mov    %esp,%ebp
08160065 +0x22d9:  sub    $0x18,%esp
08160068 +0x22dc:  mov    0x8(%ebp),%eax
0816006b +0x22df:  mov    (%eax),%eax
0816006d +0x22e1:  mov    %eax,(%esp)
08160070 +0x22e4:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08160075 +0x22e9:  mov    0x8(%ebp),%edx
08160078 +0x22ec:  mov    %eax,(%edx)
0816007a +0x22ee:  mov    0x8(%ebp),%eax
0816007d +0x22f1:  leave
0816007e +0x22f2:  ret
0816007f +0x22f3:  nop
08160080 +0x22f4:  push   %ebp
08160081 +0x22f5:  mov    %esp,%ebp
08160083 +0x22f7:  sub    $0x18,%esp
08160086 +0x22fa:  mov    0xc(%ebp),%eax
08160089 +0x22fd:  mov    %eax,(%esp)
0816008c +0x2300:  call   08160121 <+0x2395>
08160091 +0x2305:  mov    0x8(%ebp),%edx
08160094 +0x2308:  mov    (%eax),%eax
08160096 +0x230a:  mov    %eax,(%edx)
08160098 +0x230c:  mov    0x10(%ebp),%eax
0816009b +0x230f:  mov    %eax,(%esp)
0816009e +0x2312:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081600a3 +0x2317:  movzbl (%eax),%edx
081600a6 +0x231a:  mov    0x8(%ebp),%eax
081600a9 +0x231d:  mov    %dl,0x4(%eax)
081600ac +0x2320:  leave
081600ad +0x2321:  ret
081600ae +0x2322:  push   %ebp
081600af +0x2323:  mov    %esp,%ebp
081600b1 +0x2325:  sub    $0x18,%esp
081600b4 +0x2328:  mov    0x8(%ebp),%eax
081600b7 +0x232b:  movl   $0x0,0x8(%esp)
081600bf +0x2333:  movl   $0x1,0x4(%esp)
081600c7 +0x233b:  mov    %eax,(%esp)
081600ca +0x233e:  call   0816012a <+0x239e>
081600cf +0x2343:  leave
081600d0 +0x2344:  ret
081600d1 +0x2345:  push   %ebp
081600d2 +0x2346:  mov    %esp,%ebp
081600d4 +0x2348:  mov    0x8(%ebp),%eax
081600d7 +0x234b:  pop    %ebp
081600d8 +0x234c:  ret
081600d9 +0x234d:  nop
081600da +0x234e:  push   %ebp
081600db +0x234f:  mov    %esp,%ebp
081600dd +0x2351:  push   %ebx
081600de +0x2352:  sub    $0x14,%esp
081600e1 +0x2355:  mov    0x10(%ebp),%eax
081600e4 +0x2358:  mov    %eax,(%esp)
081600e7 +0x235b:  call   081600d1 <+0x2345>
081600ec +0x2360:  mov    %eax,%ebx
081600ee +0x2362:  mov    0xc(%ebp),%eax
081600f1 +0x2365:  mov    %eax,0x4(%esp)
081600f5 +0x2369:  movl   $0x18,(%esp)
081600fc +0x2370:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08160101 +0x2375:  mov    %eax,%edx
08160103 +0x2377:  test   %edx,%edx
08160105 +0x2379:  je     08160113 <+0x2387>
08160107 +0x237b:  mov    %ebx,0x4(%esp)
0816010b +0x237f:  mov    %eax,(%esp)
0816010e +0x2382:  call   08160168 <+0x23dc>
08160113 +0x2387:  add    $0x14,%esp
08160116 +0x238a:  pop    %ebx
08160117 +0x238b:  pop    %ebp
08160118 +0x238c:  ret
08160119 +0x238d:  push   %ebp
0816011a +0x238e:  mov    %esp,%ebp
0816011c +0x2390:  mov    0x8(%ebp),%eax
0816011f +0x2393:  pop    %ebp
08160120 +0x2394:  ret
08160121 +0x2395:  push   %ebp
08160122 +0x2396:  mov    %esp,%ebp
08160124 +0x2398:  mov    0x8(%ebp),%eax
08160127 +0x239b:  pop    %ebp
08160128 +0x239c:  ret
08160129 +0x239d:  nop
0816012a +0x239e:  push   %ebp
0816012b +0x239f:  mov    %esp,%ebp
0816012d +0x23a1:  sub    $0x18,%esp
08160130 +0x23a4:  mov    0x8(%ebp),%eax
08160133 +0x23a7:  mov    %eax,(%esp)
08160136 +0x23aa:  call   081601b0 <+0x2424>
0816013b +0x23af:  cmp    0xc(%ebp),%eax
0816013e +0x23b2:  setb   %al
08160141 +0x23b5:  movzbl %al,%eax
08160144 +0x23b8:  test   %eax,%eax
08160146 +0x23ba:  setne  %al
08160149 +0x23bd:  test   %al,%al
0816014b +0x23bf:  je     08160152 <+0x23c6>
0816014d +0x23c1:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08160152 +0x23c6:  mov    0xc(%ebp),%edx
08160155 +0x23c9:  mov    %edx,%eax
08160157 +0x23cb:  add    %eax,%eax
08160159 +0x23cd:  add    %edx,%eax
0816015b +0x23cf:  shl    $0x3,%eax
0816015e +0x23d2:  mov    %eax,(%esp)
08160161 +0x23d5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08160166 +0x23da:  leave
08160167 +0x23db:  ret
08160168 +0x23dc:  push   %ebp
08160169 +0x23dd:  mov    %esp,%ebp
0816016b +0x23df:  sub    $0x18,%esp
0816016e +0x23e2:  mov    0x8(%ebp),%eax
08160171 +0x23e5:  movl   $0x0,(%eax)
08160177 +0x23eb:  mov    0x8(%ebp),%eax
0816017a +0x23ee:  movl   $0x0,0x4(%eax)
08160181 +0x23f5:  mov    0x8(%ebp),%eax
08160184 +0x23f8:  movl   $0x0,0x8(%eax)
0816018b +0x23ff:  mov    0x8(%ebp),%eax
0816018e +0x2402:  movl   $0x0,0xc(%eax)
08160195 +0x2409:  mov    0xc(%ebp),%eax
08160198 +0x240c:  mov    %eax,(%esp)
0816019b +0x240f:  call   081600d1 <+0x2345>
081601a0 +0x2414:  mov    0x8(%ebp),%ecx
081601a3 +0x2417:  mov    0x4(%eax),%edx
081601a6 +0x241a:  mov    (%eax),%eax
081601a8 +0x241c:  mov    %eax,0x10(%ecx)
081601ab +0x241f:  mov    %edx,0x14(%ecx)
081601ae +0x2422:  leave
081601af +0x2423:  ret
081601b0 +0x2424:  push   %ebp
081601b1 +0x2425:  mov    %esp,%ebp
081601b3 +0x2427:  mov    $0xaaaaaaa,%eax
081601b8 +0x242c:  pop    %ebp
081601b9 +0x242d:  ret
081601ba +0x242e:  nop
081601bb +0x242f:  nop
```

## 反编译 C

```c
// <global>::global @ 0x815dd8c

/* TaiwanDBDispatcher::TaiwanDBDispatcher() */

void TaiwanDBDispatcher::_GLOBAL__I_TaiwanDBDispatcher(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
