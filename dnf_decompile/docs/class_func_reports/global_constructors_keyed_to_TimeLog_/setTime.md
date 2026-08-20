# setTime

`_GLOBAL__I__ZN8TimeLog_7setTimeEv`

`global constructors keyed to TimeLog_::setTime()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to TimeLog_` | `0x0854ff45` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854ff45  _GLOBAL__I__ZN8TimeLog_7setTimeEv
#           global constructors keyed to TimeLog_::setTime()
# range [0x0854ff45, 0x085503af]
0854ff45 +0x000:  push   %ebp
0854ff46 +0x001:  mov    %esp,%ebp
0854ff48 +0x003:  sub    $0x18,%esp
0854ff4b +0x006:  movl   $0xffff,0x4(%esp)
0854ff53 +0x00e:  movl   $0x1,(%esp)
0854ff5a +0x015:  call   0854fef9 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0854ff5f +0x01a:  leave
0854ff60 +0x01b:  ret
0854ff61 +0x01c:  nop
0854ff62 +0x01d:  push   %ebp
0854ff63 +0x01e:  mov    %esp,%ebp
0854ff65 +0x020:  mov    0x8(%ebp),%eax
0854ff68 +0x023:  movzbl 0x3(%eax),%edx
0854ff6c +0x027:  mov    0xc(%ebp),%eax
0854ff6f +0x02a:  movzbl 0x3(%eax),%eax
0854ff73 +0x02e:  cmp    %al,%dl
0854ff75 +0x030:  setne  %al
0854ff78 +0x033:  pop    %ebp
0854ff79 +0x034:  ret
0854ff7a +0x035:  push   %ebp
0854ff7b +0x036:  mov    %esp,%ebp
0854ff7d +0x038:  sub    $0x10,%esp
0854ff80 +0x03b:  movl   $0x0,-0x4(%ebp)
0854ff87 +0x042:  jmp    0854ff97 <+0x52>
0854ff89 +0x044:  mov    -0x4(%ebp),%eax
0854ff8c +0x047:  mov    0x8(%ebp),%edx
0854ff8f +0x04a:  movb   $0x0,(%edx,%eax,1)
0854ff93 +0x04e:  addl   $0x1,-0x4(%ebp)
0854ff97 +0x052:  cmpl   $0x0,-0x4(%ebp)
0854ff9b +0x056:  setle  %al
0854ff9e +0x059:  test   %al,%al
0854ffa0 +0x05b:  jne    0854ff89 <+0x44>
0854ffa2 +0x05d:  leave
0854ffa3 +0x05e:  ret
0854ffa4 +0x05f:  push   %ebp
0854ffa5 +0x060:  mov    %esp,%ebp
0854ffa7 +0x062:  sub    $0x18,%esp
0854ffaa +0x065:  mov    0x8(%ebp),%eax
0854ffad +0x068:  add    $0x4,%eax
0854ffb0 +0x06b:  mov    %eax,(%esp)
0854ffb3 +0x06e:  call   08550012 <+0xcd>
0854ffb8 +0x073:  leave
0854ffb9 +0x074:  ret
0854ffba +0x075:  push   %ebp
0854ffbb +0x076:  mov    %esp,%ebp
0854ffbd +0x078:  sub    $0x18,%esp
0854ffc0 +0x07b:  mov    0x8(%ebp),%eax
0854ffc3 +0x07e:  mov    %eax,(%esp)
0854ffc6 +0x081:  call   0854ffa4 <+0x5f>
0854ffcb +0x086:  leave
0854ffcc +0x087:  ret
0854ffcd +0x088:  nop
0854ffce +0x089:  push   %ebp
0854ffcf +0x08a:  mov    %esp,%ebp
0854ffd1 +0x08c:  sub    $0x18,%esp
0854ffd4 +0x08f:  mov    0x8(%ebp),%eax
0854ffd7 +0x092:  add    $0x4,%eax
0854ffda +0x095:  mov    %eax,(%esp)
0854ffdd +0x098:  call   08550012 <+0xcd>
0854ffe2 +0x09d:  leave
0854ffe3 +0x09e:  ret
0854ffe4 +0x09f:  push   %ebp
0854ffe5 +0x0a0:  mov    %esp,%ebp
0854ffe7 +0x0a2:  sub    $0x18,%esp
0854ffea +0x0a5:  mov    0x8(%ebp),%eax
0854ffed +0x0a8:  mov    %eax,(%esp)
0854fff0 +0x0ab:  call   0854ffce <+0x89>
0854fff5 +0x0b0:  leave
0854fff6 +0x0b1:  ret
0854fff7 +0x0b2:  nop
0854fff8 +0x0b3:  push   %ebp
0854fff9 +0x0b4:  mov    %esp,%ebp
0854fffb +0x0b6:  sub    $0x18,%esp
0854fffe +0x0b9:  mov    0x8(%ebp),%eax
08550001 +0x0bc:  mov    0xc(%ebp),%edx
08550004 +0x0bf:  mov    %edx,0x4(%esp)
08550008 +0x0c3:  mov    %eax,(%esp)
0855000b +0x0c6:  call   0855004a <+0x105>
08550010 +0x0cb:  leave
08550011 +0x0cc:  ret
08550012 +0x0cd:  push   %ebp
08550013 +0x0ce:  mov    %esp,%ebp
08550015 +0x0d0:  sub    $0x18,%esp
08550018 +0x0d3:  mov    0x8(%ebp),%eax
0855001b +0x0d6:  mov    (%eax),%eax
0855001d +0x0d8:  test   %eax,%eax
0855001f +0x0da:  je     0855002e <+0xe9>
08550021 +0x0dc:  mov    0x8(%ebp),%eax
08550024 +0x0df:  mov    (%eax),%eax
08550026 +0x0e1:  mov    %eax,(%esp)
08550029 +0x0e4:  call   0855008c <+0x147>
0855002e +0x0e9:  leave
0855002f +0x0ea:  ret
08550030 +0x0eb:  push   %ebp
08550031 +0x0ec:  mov    %esp,%ebp
08550033 +0x0ee:  sub    $0x18,%esp
08550036 +0x0f1:  mov    0xc(%ebp),%edx
08550039 +0x0f4:  mov    0x8(%ebp),%eax
0855003c +0x0f7:  mov    %edx,0x4(%esp)
08550040 +0x0fb:  mov    %eax,(%esp)
08550043 +0x0fe:  call   085500f8 <+0x1b3>
08550048 +0x103:  leave
08550049 +0x104:  ret
0855004a +0x105:  push   %ebp
0855004b +0x106:  mov    %esp,%ebp
0855004d +0x108:  sub    $0x18,%esp
08550050 +0x10b:  mov    0x8(%ebp),%eax
08550053 +0x10e:  mov    0xc(%ebp),%edx
08550056 +0x111:  mov    %edx,(%eax)
08550058 +0x113:  mov    0x8(%ebp),%eax
0855005b +0x116:  lea    0x4(%eax),%edx
0855005e +0x119:  mov    0xc(%ebp),%eax
08550061 +0x11c:  mov    %eax,0x4(%esp)
08550065 +0x120:  mov    %edx,(%esp)
08550068 +0x123:  call   08550172 <+0x22d>
0855006d +0x128:  mov    0x8(%ebp),%eax
08550070 +0x12b:  lea    0x4(%eax),%edx
08550073 +0x12e:  mov    0xc(%ebp),%eax
08550076 +0x131:  mov    %eax,0x8(%esp)
0855007a +0x135:  mov    0xc(%ebp),%eax
0855007d +0x138:  mov    %eax,0x4(%esp)
08550081 +0x13c:  mov    %edx,(%esp)
08550084 +0x13f:  call   08550202 <+0x2bd>
08550089 +0x144:  leave
0855008a +0x145:  ret
0855008b +0x146:  nop
0855008c +0x147:  push   %ebp
0855008d +0x148:  mov    %esp,%ebp
0855008f +0x14a:  sub    $0x18,%esp
08550092 +0x14d:  mov    0x8(%ebp),%eax
08550095 +0x150:  add    $0x4,%eax
08550098 +0x153:  movl   $0xffffffff,0x4(%esp)
085500a0 +0x15b:  mov    %eax,(%esp)
085500a3 +0x15e:  call   0854e19b <_ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii>  ; __gnu_cxx::__exchange_and_add_dispatch(int*, int)
085500a8 +0x163:  cmp    $0x1,%eax
085500ab +0x166:  sete   %al
085500ae +0x169:  test   %al,%al
085500b0 +0x16b:  je     085500f6 <+0x1b1>
085500b2 +0x16d:  mov    0x8(%ebp),%eax
085500b5 +0x170:  mov    (%eax),%eax
085500b7 +0x172:  add    $0x8,%eax
085500ba +0x175:  mov    (%eax),%edx
085500bc +0x177:  mov    0x8(%ebp),%eax
085500bf +0x17a:  mov    %eax,(%esp)
085500c2 +0x17d:  call   *%edx
085500c4 +0x17f:  mov    0x8(%ebp),%eax
085500c7 +0x182:  add    $0x8,%eax
085500ca +0x185:  movl   $0xffffffff,0x4(%esp)
085500d2 +0x18d:  mov    %eax,(%esp)
085500d5 +0x190:  call   0854e19b <_ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii>  ; __gnu_cxx::__exchange_and_add_dispatch(int*, int)
085500da +0x195:  cmp    $0x1,%eax
085500dd +0x198:  sete   %al
085500e0 +0x19b:  test   %al,%al
085500e2 +0x19d:  je     085500f6 <+0x1b1>
085500e4 +0x19f:  mov    0x8(%ebp),%eax
085500e7 +0x1a2:  mov    (%eax),%eax
085500e9 +0x1a4:  add    $0xc,%eax
085500ec +0x1a7:  mov    (%eax),%edx
085500ee +0x1a9:  mov    0x8(%ebp),%eax
085500f1 +0x1ac:  mov    %eax,(%esp)
085500f4 +0x1af:  call   *%edx
085500f6 +0x1b1:  leave
085500f7 +0x1b2:  ret
085500f8 +0x1b3:  push   %ebp
085500f9 +0x1b4:  mov    %esp,%ebp
085500fb +0x1b6:  sub    $0x18,%esp
085500fe +0x1b9:  mov    0xc(%ebp),%eax
08550101 +0x1bc:  mov    (%eax),%eax
08550103 +0x1be:  mov    %eax,%edx
08550105 +0x1c0:  mov    0x8(%ebp),%eax
08550108 +0x1c3:  mov    %edx,(%eax)
0855010a +0x1c5:  mov    0xc(%ebp),%eax
0855010d +0x1c8:  lea    0x4(%eax),%edx
08550110 +0x1cb:  mov    0x8(%ebp),%eax
08550113 +0x1ce:  add    $0x4,%eax
08550116 +0x1d1:  mov    %edx,0x4(%esp)
0855011a +0x1d5:  mov    %eax,(%esp)
0855011d +0x1d8:  call   08550228 <+0x2e3>
08550122 +0x1dd:  leave
08550123 +0x1de:  ret
08550124 +0x1df:  push   %ebp
08550125 +0x1e0:  mov    %esp,%ebp
08550127 +0x1e2:  sub    $0x18,%esp
0855012a +0x1e5:  mov    0x8(%ebp),%eax
0855012d +0x1e8:  movl   $&_ZTV14LwServerWriter+0x8,(%eax)
08550133 +0x1ee:  mov    0x8(%ebp),%eax
08550136 +0x1f1:  mov    %eax,(%esp)
08550139 +0x1f4:  call   08ad399e <_ZN9LogWriterD1Ev>  ; LogWriter::~LogWriter()
0855013e +0x1f9:  mov    $0x0,%eax
08550143 +0x1fe:  test   %al,%al
08550145 +0x200:  je     08550152 <+0x20d>
08550147 +0x202:  mov    0x8(%ebp),%eax
0855014a +0x205:  mov    %eax,(%esp)
0855014d +0x208:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08550152 +0x20d:  leave
08550153 +0x20e:  ret
08550154 +0x20f:  push   %ebp
08550155 +0x210:  mov    %esp,%ebp
08550157 +0x212:  sub    $0x18,%esp
0855015a +0x215:  mov    0x8(%ebp),%eax
0855015d +0x218:  mov    %eax,(%esp)
08550160 +0x21b:  call   08550124 <+0x1df>
08550165 +0x220:  mov    0x8(%ebp),%eax
08550168 +0x223:  mov    %eax,(%esp)
0855016b +0x226:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08550170 +0x22b:  leave
08550171 +0x22c:  ret
08550172 +0x22d:  push   %ebp
08550173 +0x22e:  mov    %esp,%ebp
08550175 +0x230:  push   %edi
08550176 +0x231:  push   %esi
08550177 +0x232:  push   %ebx
08550178 +0x233:  sub    $0x1c,%esp
0855017b +0x236:  mov    0x8(%ebp),%eax
0855017e +0x239:  movl   $0x0,(%eax)
08550184 +0x23f:  movl   $0x10,(%esp)
0855018b +0x246:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08550190 +0x24b:  mov    %eax,%ebx
08550192 +0x24d:  mov    %ebx,%eax
08550194 +0x24f:  mov    0xc(%ebp),%edx
08550197 +0x252:  mov    %edx,0x4(%esp)
0855019b +0x256:  mov    %eax,(%esp)
0855019e +0x259:  call   08550250 <+0x30b>
085501a3 +0x25e:  jmp    085501b7 <+0x272>
085501a5 +0x260:  mov    %edx,%esi
085501a7 +0x262:  mov    %eax,%edi
085501a9 +0x264:  mov    %ebx,(%esp)
085501ac +0x267:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085501b1 +0x26c:  mov    %edi,%eax
085501b3 +0x26e:  mov    %esi,%edx
085501b5 +0x270:  jmp    085501c8 <+0x283>
085501b7 +0x272:  mov    %ebx,%eax
085501b9 +0x274:  mov    %eax,%edx
085501bb +0x276:  mov    0x8(%ebp),%eax
085501be +0x279:  mov    %edx,(%eax)
085501c0 +0x27b:  add    $0x1c,%esp
085501c3 +0x27e:  pop    %ebx
085501c4 +0x27f:  pop    %esi
085501c5 +0x280:  pop    %edi
085501c6 +0x281:  pop    %ebp
085501c7 +0x282:  ret
085501c8 +0x283:  mov    %eax,(%esp)
085501cb +0x286:  call   08725ce0 <__cxa_begin_catch>
085501d0 +0x28b:  cmpl   $0x0,0xc(%ebp)
085501d4 +0x28f:  je     085501e8 <+0x2a3>
085501d6 +0x291:  mov    0xc(%ebp),%eax
085501d9 +0x294:  mov    (%eax),%eax
085501db +0x296:  add    $0x4,%eax
085501de +0x299:  mov    (%eax),%edx
085501e0 +0x29b:  mov    0xc(%ebp),%eax
085501e3 +0x29e:  mov    %eax,(%esp)
085501e6 +0x2a1:  call   *%edx
085501e8 +0x2a3:  call   08724be0 <__cxa_rethrow>
085501ed +0x2a8:  mov    %edx,%ebx
085501ef +0x2aa:  mov    %eax,%esi
085501f1 +0x2ac:  call   08725c30 <__cxa_end_catch>
085501f6 +0x2b1:  mov    %esi,%eax
085501f8 +0x2b3:  mov    %ebx,%edx
085501fa +0x2b5:  mov    %eax,(%esp)
085501fd +0x2b8:  call   08ae3750 <_Unwind_Resume>
08550202 +0x2bd:  push   %ebp
08550203 +0x2be:  mov    %esp,%ebp
08550205 +0x2c0:  pop    %ebp
08550206 +0x2c1:  ret
08550207 +0x2c2:  nop
08550208 +0x2c3:  push   %ebp
08550209 +0x2c4:  mov    %esp,%ebp
0855020b +0x2c6:  sub    $0x18,%esp
0855020e +0x2c9:  cmpl   $0x0,0x8(%ebp)
08550212 +0x2cd:  je     08550226 <+0x2e1>
08550214 +0x2cf:  mov    0x8(%ebp),%eax
08550217 +0x2d2:  mov    (%eax),%eax
08550219 +0x2d4:  add    $0x4,%eax
0855021c +0x2d7:  mov    (%eax),%edx
0855021e +0x2d9:  mov    0x8(%ebp),%eax
08550221 +0x2dc:  mov    %eax,(%esp)
08550224 +0x2df:  call   *%edx
08550226 +0x2e1:  leave
08550227 +0x2e2:  ret
08550228 +0x2e3:  push   %ebp
08550229 +0x2e4:  mov    %esp,%ebp
0855022b +0x2e6:  sub    $0x18,%esp
0855022e +0x2e9:  mov    0xc(%ebp),%eax
08550231 +0x2ec:  mov    (%eax),%edx
08550233 +0x2ee:  mov    0x8(%ebp),%eax
08550236 +0x2f1:  mov    %edx,(%eax)
08550238 +0x2f3:  mov    0x8(%ebp),%eax
0855023b +0x2f6:  mov    (%eax),%eax
0855023d +0x2f8:  test   %eax,%eax
0855023f +0x2fa:  je     0855024e <+0x309>
08550241 +0x2fc:  mov    0x8(%ebp),%eax
08550244 +0x2ff:  mov    (%eax),%eax
08550246 +0x301:  mov    %eax,(%esp)
08550249 +0x304:  call   085502ba <+0x375>
0855024e +0x309:  leave
0855024f +0x30a:  ret
08550250 +0x30b:  push   %ebp
08550251 +0x30c:  mov    %esp,%ebp
08550253 +0x30e:  sub    $0x18,%esp
08550256 +0x311:  mov    0x8(%ebp),%eax
08550259 +0x314:  mov    %eax,(%esp)
0855025c +0x317:  call   085502de <+0x399>
08550261 +0x31c:  mov    0x8(%ebp),%eax
08550264 +0x31f:  movl   $&_ZTVSt15_Sp_counted_ptrIP14LwServerWriterLN9__gnu_cxx12_Lock_policyE2EE+0x8,(%eax)
0855026a +0x325:  mov    0x8(%ebp),%eax
0855026d +0x328:  mov    0xc(%ebp),%edx
08550270 +0x32b:  mov    %edx,0xc(%eax)
08550273 +0x32e:  leave
08550274 +0x32f:  ret
08550275 +0x330:  nop
08550276 +0x331:  push   %ebp
08550277 +0x332:  mov    %esp,%ebp
08550279 +0x334:  sub    $0x18,%esp
0855027c +0x337:  mov    0x8(%ebp),%eax
0855027f +0x33a:  movl   $&_ZTVSt16_Sp_counted_baseILN9__gnu_cxx12_Lock_policyE2EE+0x8,(%eax)
08550285 +0x340:  mov    $0x0,%eax
0855028a +0x345:  test   %al,%al
0855028c +0x347:  je     08550299 <+0x354>
0855028e +0x349:  mov    0x8(%ebp),%eax
08550291 +0x34c:  mov    %eax,(%esp)
08550294 +0x34f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08550299 +0x354:  leave
0855029a +0x355:  ret
0855029b +0x356:  nop
0855029c +0x357:  push   %ebp
0855029d +0x358:  mov    %esp,%ebp
0855029f +0x35a:  sub    $0x18,%esp
085502a2 +0x35d:  mov    0x8(%ebp),%eax
085502a5 +0x360:  mov    %eax,(%esp)
085502a8 +0x363:  call   08550276 <+0x331>
085502ad +0x368:  mov    0x8(%ebp),%eax
085502b0 +0x36b:  mov    %eax,(%esp)
085502b3 +0x36e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085502b8 +0x373:  leave
085502b9 +0x374:  ret
085502ba +0x375:  push   %ebp
085502bb +0x376:  mov    %esp,%ebp
085502bd +0x378:  sub    $0x8,%esp
085502c0 +0x37b:  mov    0x8(%ebp),%eax
085502c3 +0x37e:  add    $0x4,%eax
085502c6 +0x381:  movl   $0x1,0x4(%esp)
085502ce +0x389:  mov    %eax,(%esp)
085502d1 +0x38c:  call   0854e1d7 <_ZN9__gnu_cxxL21__atomic_add_dispatchEPii>  ; __gnu_cxx::__atomic_add_dispatch(int*, int)
085502d6 +0x391:  leave
085502d7 +0x392:  ret
085502d8 +0x393:  push   %ebp
085502d9 +0x394:  mov    %esp,%ebp
085502db +0x396:  pop    %ebp
085502dc +0x397:  ret
085502dd +0x398:  nop
085502de +0x399:  push   %ebp
085502df +0x39a:  mov    %esp,%ebp
085502e1 +0x39c:  sub    $0x18,%esp
085502e4 +0x39f:  mov    0x8(%ebp),%eax
085502e7 +0x3a2:  mov    %eax,(%esp)
085502ea +0x3a5:  call   085502d8 <+0x393>
085502ef +0x3aa:  mov    0x8(%ebp),%eax
085502f2 +0x3ad:  movl   $&_ZTVSt16_Sp_counted_baseILN9__gnu_cxx12_Lock_policyE2EE+0x8,(%eax)
085502f8 +0x3b3:  mov    0x8(%ebp),%eax
085502fb +0x3b6:  movl   $0x1,0x4(%eax)
08550302 +0x3bd:  mov    0x8(%ebp),%eax
08550305 +0x3c0:  movl   $0x1,0x8(%eax)
0855030c +0x3c7:  leave
0855030d +0x3c8:  ret
0855030e +0x3c9:  push   %ebp
0855030f +0x3ca:  mov    %esp,%ebp
08550311 +0x3cc:  sub    $0x18,%esp
08550314 +0x3cf:  mov    0x8(%ebp),%eax
08550317 +0x3d2:  movl   $&_ZTVSt15_Sp_counted_ptrIP14LwServerWriterLN9__gnu_cxx12_Lock_policyE2EE+0x8,(%eax)
0855031d +0x3d8:  mov    0x8(%ebp),%eax
08550320 +0x3db:  mov    %eax,(%esp)
08550323 +0x3de:  call   08550276 <+0x331>
08550328 +0x3e3:  mov    $0x0,%eax
0855032d +0x3e8:  test   %al,%al
0855032f +0x3ea:  je     0855033c <+0x3f7>
08550331 +0x3ec:  mov    0x8(%ebp),%eax
08550334 +0x3ef:  mov    %eax,(%esp)
08550337 +0x3f2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0855033c +0x3f7:  leave
0855033d +0x3f8:  ret
0855033e +0x3f9:  push   %ebp
0855033f +0x3fa:  mov    %esp,%ebp
08550341 +0x3fc:  sub    $0x18,%esp
08550344 +0x3ff:  mov    0x8(%ebp),%eax
08550347 +0x402:  mov    %eax,(%esp)
0855034a +0x405:  call   0855030e <+0x3c9>
0855034f +0x40a:  mov    0x8(%ebp),%eax
08550352 +0x40d:  mov    %eax,(%esp)
08550355 +0x410:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0855035a +0x415:  leave
0855035b +0x416:  ret
0855035c +0x417:  push   %ebp
0855035d +0x418:  mov    %esp,%ebp
0855035f +0x41a:  sub    $0x18,%esp
08550362 +0x41d:  mov    0x8(%ebp),%eax
08550365 +0x420:  mov    0xc(%eax),%eax
08550368 +0x423:  test   %eax,%eax
0855036a +0x425:  je     08550384 <+0x43f>
0855036c +0x427:  mov    0x8(%ebp),%eax
0855036f +0x42a:  mov    0xc(%eax),%eax
08550372 +0x42d:  mov    (%eax),%eax
08550374 +0x42f:  add    $0x4,%eax
08550377 +0x432:  mov    (%eax),%edx
08550379 +0x434:  mov    0x8(%ebp),%eax
0855037c +0x437:  mov    0xc(%eax),%eax
0855037f +0x43a:  mov    %eax,(%esp)
08550382 +0x43d:  call   *%edx
08550384 +0x43f:  leave
08550385 +0x440:  ret
08550386 +0x441:  push   %ebp
08550387 +0x442:  mov    %esp,%ebp
08550389 +0x444:  sub    $0x18,%esp
0855038c +0x447:  cmpl   $0x0,0x8(%ebp)
08550390 +0x44b:  je     085503a4 <+0x45f>
08550392 +0x44d:  mov    0x8(%ebp),%eax
08550395 +0x450:  mov    (%eax),%eax
08550397 +0x452:  add    $0x4,%eax
0855039a +0x455:  mov    (%eax),%edx
0855039c +0x457:  mov    0x8(%ebp),%eax
0855039f +0x45a:  mov    %eax,(%esp)
085503a2 +0x45d:  call   *%edx
085503a4 +0x45f:  leave
085503a5 +0x460:  ret
085503a6 +0x461:  push   %ebp
085503a7 +0x462:  mov    %esp,%ebp
085503a9 +0x464:  mov    $0x0,%eax
085503ae +0x469:  pop    %ebp
085503af +0x46a:  ret
```

## 反编译 C

```c
// <global>::global @ 0x854ff45

/* TimeLog_::setTime() */

void TimeLog_::_GLOBAL__I_setTime(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
