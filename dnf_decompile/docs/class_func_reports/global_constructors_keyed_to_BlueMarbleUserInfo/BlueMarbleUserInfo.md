# BlueMarbleUserInfo

`_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev`

`global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to BlueMarbleUserInfo` | `0x080d9e63` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d9e63  _GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev
#           global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()
# range [0x080d9e63, 0x080dc45b]
080d9e63 +0x0000:  push   %ebp
080d9e64 +0x0001:  mov    %esp,%ebp
080d9e66 +0x0003:  sub    $0x18,%esp
080d9e69 +0x0006:  movl   $0xffff,0x4(%esp)
080d9e71 +0x000e:  movl   $0x1,(%esp)
080d9e78 +0x0015:  call   080d9e23 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080d9e7d +0x001a:  leave
080d9e7e +0x001b:  ret
080d9e7f +0x001c:  nop
080d9e80 +0x001d:  push   %ebp
080d9e81 +0x001e:  mov    %esp,%ebp
080d9e83 +0x0020:  sub    $0x18,%esp
080d9e86 +0x0023:  mov    0x8(%ebp),%eax
080d9e89 +0x0026:  lea    0x4(%eax),%edx
080d9e8c +0x0029:  mov    0xc(%ebp),%eax
080d9e8f +0x002c:  mov    %eax,0x8(%esp)
080d9e93 +0x0030:  mov    %edx,0x4(%esp)
080d9e97 +0x0034:  mov    0x8(%ebp),%eax
080d9e9a +0x0037:  mov    %eax,(%esp)
080d9e9d +0x003a:  call   0858c9c8 <_ZN9PacketBuf9put_shortERii>  ; PacketBuf::put_short(int&, int)
080d9ea2 +0x003f:  leave
080d9ea3 +0x0040:  ret
080d9ea4 +0x0041:  push   %ebp
080d9ea5 +0x0042:  mov    %esp,%ebp
080d9ea7 +0x0044:  sub    $0x18,%esp
080d9eaa +0x0047:  mov    0x8(%ebp),%eax
080d9ead +0x004a:  mov    (%eax),%eax
080d9eaf +0x004c:  mov    0xc(%ebp),%edx
080d9eb2 +0x004f:  mov    %edx,0x4(%esp)
080d9eb6 +0x0053:  mov    %eax,(%esp)
080d9eb9 +0x0056:  call   080d9e80 <+0x1d>
080d9ebe +0x005b:  leave
080d9ebf +0x005c:  ret
080d9ec0 +0x005d:  push   %ebp
080d9ec1 +0x005e:  mov    %esp,%ebp
080d9ec3 +0x0060:  mov    0x8(%ebp),%eax
080d9ec6 +0x0063:  movl   $0x1,(%eax)
080d9ecc +0x0069:  mov    0x8(%ebp),%eax
080d9ecf +0x006c:  movl   $0x1,0x4(%eax)
080d9ed6 +0x0073:  mov    0x8(%ebp),%eax
080d9ed9 +0x0076:  movl   $0x1,0x8(%eax)
080d9ee0 +0x007d:  pop    %ebp
080d9ee1 +0x007e:  ret
080d9ee2 +0x007f:  push   %ebp
080d9ee3 +0x0080:  mov    %esp,%ebp
080d9ee5 +0x0082:  mov    0x8(%ebp),%eax
080d9ee8 +0x0085:  movl   $0x1,(%eax)
080d9eee +0x008b:  mov    0x8(%ebp),%eax
080d9ef1 +0x008e:  movl   $0x1,0x4(%eax)
080d9ef8 +0x0095:  mov    0x8(%ebp),%eax
080d9efb +0x0098:  movl   $0x1,0x8(%eax)
080d9f02 +0x009f:  pop    %ebp
080d9f03 +0x00a0:  ret
080d9f04 +0x00a1:  push   %ebp
080d9f05 +0x00a2:  mov    %esp,%ebp
080d9f07 +0x00a4:  mov    0x8(%ebp),%eax
080d9f0a +0x00a7:  movl   $0x0,(%eax)
080d9f10 +0x00ad:  mov    0x8(%ebp),%eax
080d9f13 +0x00b0:  movl   $0x0,0x4(%eax)
080d9f1a +0x00b7:  pop    %ebp
080d9f1b +0x00b8:  ret
080d9f1c +0x00b9:  push   %ebp
080d9f1d +0x00ba:  mov    %esp,%ebp
080d9f1f +0x00bc:  mov    0x8(%ebp),%eax
080d9f22 +0x00bf:  movl   $0x0,(%eax)
080d9f28 +0x00c5:  mov    0x8(%ebp),%eax
080d9f2b +0x00c8:  movl   $0x0,0x4(%eax)
080d9f32 +0x00cf:  pop    %ebp
080d9f33 +0x00d0:  ret
080d9f34 +0x00d1:  push   %ebp
080d9f35 +0x00d2:  mov    %esp,%ebp
080d9f37 +0x00d4:  sub    $0x18,%esp
080d9f3a +0x00d7:  mov    0x8(%ebp),%eax
080d9f3d +0x00da:  mov    %eax,(%esp)
080d9f40 +0x00dd:  call   080da404 <+0x5a1>
080d9f45 +0x00e2:  leave
080d9f46 +0x00e3:  ret
080d9f47 +0x00e4:  nop
080d9f48 +0x00e5:  push   %ebp
080d9f49 +0x00e6:  mov    %esp,%ebp
080d9f4b +0x00e8:  sub    $0x18,%esp
080d9f4e +0x00eb:  mov    0x8(%ebp),%eax
080d9f51 +0x00ee:  mov    %eax,(%esp)
080d9f54 +0x00f1:  call   080da0e6 <+0x283>
080d9f59 +0x00f6:  leave
080d9f5a +0x00f7:  ret
080d9f5b +0x00f8:  nop
080d9f5c +0x00f9:  push   %ebp
080d9f5d +0x00fa:  mov    %esp,%ebp
080d9f5f +0x00fc:  push   %edi
080d9f60 +0x00fd:  push   %esi
080d9f61 +0x00fe:  push   %ebx
080d9f62 +0x00ff:  sub    $0x2c,%esp
080d9f65 +0x0102:  movl   $0x12bd6aa,0x4(%esp)
080d9f6d +0x010a:  mov    0x8(%ebp),%eax
080d9f70 +0x010d:  mov    %eax,(%esp)
080d9f73 +0x0110:  call   080cbb44 <_GLOBAL__I__ZN10BingoEventC2Ev+0x991>  ; global constructors keyed to BingoEvent::BingoEvent()+0x991
080d9f78 +0x0115:  mov    $0x1,%ebx
080d9f7d +0x011a:  mov    $0x0,%edi
080d9f82 +0x011f:  mov    0x10(%ebp),%eax
080d9f85 +0x0122:  cmp    $0x270,%eax
080d9f8a +0x0127:  jae    080d9f91 <+0x12e>
080d9f8c +0x0129:  mov    $0x270,%eax
080d9f91 +0x012e:  mov    %eax,%esi
080d9f93 +0x0130:  jmp    080da02f <+0x1cc>
080d9f98 +0x0135:  mov    %ebx,-0x24(%ebp)
080d9f9b +0x0138:  mov    %ebx,%edx
080d9f9d +0x013a:  mov    0x8(%ebp),%eax
080d9fa0 +0x013d:  mov    (%eax,%edx,4),%eax
080d9fa3 +0x0140:  mov    %eax,-0x20(%ebp)
080d9fa6 +0x0143:  lea    -0x1(%ebx),%edx
080d9fa9 +0x0146:  mov    0x8(%ebp),%eax
080d9fac +0x0149:  mov    (%eax,%edx,4),%ecx
080d9faf +0x014c:  lea    -0x1(%ebx),%edx
080d9fb2 +0x014f:  mov    0x8(%ebp),%eax
080d9fb5 +0x0152:  mov    (%eax,%edx,4),%eax
080d9fb8 +0x0155:  shr    $0x1e,%eax
080d9fbb +0x0158:  xor    %ecx,%eax
080d9fbd +0x015a:  imul   $0x19660d,%eax,%eax
080d9fc3 +0x0160:  mov    -0x20(%ebp),%edx
080d9fc6 +0x0163:  xor    %eax,%edx
080d9fc8 +0x0165:  mov    0x8(%ebp),%eax
080d9fcb +0x0168:  mov    -0x24(%ebp),%ecx
080d9fce +0x016b:  mov    %edx,(%eax,%ecx,4)
080d9fd1 +0x016e:  mov    %ebx,%edx
080d9fd3 +0x0170:  mov    %ebx,%ecx
080d9fd5 +0x0172:  mov    0x8(%ebp),%eax
080d9fd8 +0x0175:  mov    (%eax,%ecx,4),%ecx
080d9fdb +0x0178:  lea    0x0(,%edi,4),%eax
080d9fe2 +0x017f:  add    0xc(%ebp),%eax
080d9fe5 +0x0182:  mov    (%eax),%eax
080d9fe7 +0x0184:  add    %edi,%eax
080d9fe9 +0x0186:  add    %eax,%ecx
080d9feb +0x0188:  mov    0x8(%ebp),%eax
080d9fee +0x018b:  mov    %ecx,(%eax,%edx,4)
080d9ff1 +0x018e:  mov    %ebx,%edx
080d9ff3 +0x0190:  mov    %ebx,%ecx
080d9ff5 +0x0192:  mov    0x8(%ebp),%eax
080d9ff8 +0x0195:  mov    (%eax,%ecx,4),%ecx
080d9ffb +0x0198:  mov    0x8(%ebp),%eax
080d9ffe +0x019b:  mov    %ecx,(%eax,%edx,4)
080da001 +0x019e:  add    $0x1,%ebx
080da004 +0x01a1:  add    $0x1,%edi
080da007 +0x01a4:  cmp    $0x26f,%ebx
080da00d +0x01aa:  jle    080da022 <+0x1bf>
080da00f +0x01ac:  mov    0x8(%ebp),%eax
080da012 +0x01af:  mov    0x9bc(%eax),%edx
080da018 +0x01b5:  mov    0x8(%ebp),%eax
080da01b +0x01b8:  mov    %edx,(%eax)
080da01d +0x01ba:  mov    $0x1,%ebx
080da022 +0x01bf:  cmp    0x10(%ebp),%edi
080da025 +0x01c2:  jb     080da02c <+0x1c9>
080da027 +0x01c4:  mov    $0x0,%edi
080da02c +0x01c9:  sub    $0x1,%esi
080da02f +0x01cc:  test   %esi,%esi
080da031 +0x01ce:  setne  %al
080da034 +0x01d1:  test   %al,%al
080da036 +0x01d3:  jne    080d9f98 <+0x135>
080da03c +0x01d9:  mov    $0x26f,%esi
080da041 +0x01de:  jmp    080da0bd <+0x25a>
080da043 +0x01e0:  mov    %ebx,%ecx
080da045 +0x01e2:  mov    %ebx,%edx
080da047 +0x01e4:  mov    0x8(%ebp),%eax
080da04a +0x01e7:  mov    (%eax,%edx,4),%edi
080da04d +0x01ea:  lea    -0x1(%ebx),%edx
080da050 +0x01ed:  mov    0x8(%ebp),%eax
080da053 +0x01f0:  mov    (%eax,%edx,4),%eax
080da056 +0x01f3:  mov    %eax,-0x1c(%ebp)
080da059 +0x01f6:  lea    -0x1(%ebx),%edx
080da05c +0x01f9:  mov    0x8(%ebp),%eax
080da05f +0x01fc:  mov    (%eax,%edx,4),%eax
080da062 +0x01ff:  shr    $0x1e,%eax
080da065 +0x0202:  xor    -0x1c(%ebp),%eax
080da068 +0x0205:  imul   $0x5d588b65,%eax,%eax
080da06e +0x020b:  mov    %edi,%edx
080da070 +0x020d:  xor    %eax,%edx
080da072 +0x020f:  mov    0x8(%ebp),%eax
080da075 +0x0212:  mov    %edx,(%eax,%ecx,4)
080da078 +0x0215:  mov    %ebx,%edx
080da07a +0x0217:  mov    %ebx,%ecx
080da07c +0x0219:  mov    0x8(%ebp),%eax
080da07f +0x021c:  mov    (%eax,%ecx,4),%ecx
080da082 +0x021f:  mov    %ebx,%eax
080da084 +0x0221:  sub    %eax,%ecx
080da086 +0x0223:  mov    0x8(%ebp),%eax
080da089 +0x0226:  mov    %ecx,(%eax,%edx,4)
080da08c +0x0229:  mov    %ebx,%edx
080da08e +0x022b:  mov    %ebx,%ecx
080da090 +0x022d:  mov    0x8(%ebp),%eax
080da093 +0x0230:  mov    (%eax,%ecx,4),%ecx
080da096 +0x0233:  mov    0x8(%ebp),%eax
080da099 +0x0236:  mov    %ecx,(%eax,%edx,4)
080da09c +0x0239:  add    $0x1,%ebx
080da09f +0x023c:  cmp    $0x26f,%ebx
080da0a5 +0x0242:  jle    080da0ba <+0x257>
080da0a7 +0x0244:  mov    0x8(%ebp),%eax
080da0aa +0x0247:  mov    0x9bc(%eax),%edx
080da0b0 +0x024d:  mov    0x8(%ebp),%eax
080da0b3 +0x0250:  mov    %edx,(%eax)
080da0b5 +0x0252:  mov    $0x1,%ebx
080da0ba +0x0257:  sub    $0x1,%esi
080da0bd +0x025a:  test   %esi,%esi
080da0bf +0x025c:  setne  %al
080da0c2 +0x025f:  test   %al,%al
080da0c4 +0x0261:  jne    080da043 <+0x1e0>
080da0ca +0x0267:  mov    0x8(%ebp),%eax
080da0cd +0x026a:  movl   $0x80000000,(%eax)
080da0d3 +0x0270:  mov    0x8(%ebp),%eax
080da0d6 +0x0273:  mov    %eax,(%esp)
080da0d9 +0x0276:  call   080cbb90 <_GLOBAL__I__ZN10BingoEventC2Ev+0x9dd>  ; global constructors keyed to BingoEvent::BingoEvent()+0x9dd
080da0de +0x027b:  add    $0x2c,%esp
080da0e1 +0x027e:  pop    %ebx
080da0e2 +0x027f:  pop    %esi
080da0e3 +0x0280:  pop    %edi
080da0e4 +0x0281:  pop    %ebp
080da0e5 +0x0282:  ret
080da0e6 +0x0283:  push   %ebp
080da0e7 +0x0284:  mov    %esp,%ebp
080da0e9 +0x0286:  push   %edi
080da0ea +0x0287:  push   %esi
080da0eb +0x0288:  push   %ebx
080da0ec +0x0289:  sub    $0x9ec,%esp
080da0f2 +0x028f:  movl   $"rb",0x4(%esp)
080da0fa +0x0297:  movl   $"/dev/urandom",(%esp)
080da101 +0x029e:  call   0807e770 <_init+0x1068>
080da106 +0x02a3:  mov    %eax,-0x1c(%ebp)
080da109 +0x02a6:  cmpl   $0x0,-0x1c(%ebp)
080da10d +0x02aa:  je     080da19c <+0x339>
080da113 +0x02b0:  lea    -0x9dc(%ebp),%edi
080da119 +0x02b6:  mov    $0x270,%esi
080da11e +0x02bb:  mov    $0x1,%ebx
080da123 +0x02c0:  jmp    080da14e <+0x2eb>
080da125 +0x02c2:  mov    %edi,%eax
080da127 +0x02c4:  add    $0x4,%edi
080da12a +0x02c7:  mov    -0x1c(%ebp),%edx
080da12d +0x02ca:  mov    %edx,0xc(%esp)
080da131 +0x02ce:  movl   $0x1,0x8(%esp)
080da139 +0x02d6:  movl   $0x4,0x4(%esp)
080da141 +0x02de:  mov    %eax,(%esp)
080da144 +0x02e1:  call   0807dd50 <_init+0x648>
080da149 +0x02e6:  test   %eax,%eax
080da14b +0x02e8:  setne  %bl
080da14e +0x02eb:  test   %bl,%bl
080da150 +0x02ed:  je     080da165 <+0x302>
080da152 +0x02ef:  test   %esi,%esi
080da154 +0x02f1:  setne  %al
080da157 +0x02f4:  sub    $0x1,%esi
080da15a +0x02f7:  test   %al,%al
080da15c +0x02f9:  je     080da165 <+0x302>
080da15e +0x02fb:  mov    $0x1,%eax
080da163 +0x0300:  jmp    080da16a <+0x307>
080da165 +0x0302:  mov    $0x0,%eax
080da16a +0x0307:  test   %al,%al
080da16c +0x0309:  jne    080da125 <+0x2c2>
080da16e +0x030b:  mov    -0x1c(%ebp),%eax
080da171 +0x030e:  mov    %eax,(%esp)
080da174 +0x0311:  call   0807dea0 <_init+0x798>
080da179 +0x0316:  test   %bl,%bl
080da17b +0x0318:  je     080da19c <+0x339>
080da17d +0x031a:  movl   $0x270,0x8(%esp)
080da185 +0x0322:  lea    -0x9dc(%ebp),%eax
080da18b +0x0328:  mov    %eax,0x4(%esp)
080da18f +0x032c:  mov    0x8(%ebp),%eax
080da192 +0x032f:  mov    %eax,(%esp)
080da195 +0x0332:  call   080d9f5c <+0xf9>
080da19a +0x0337:  jmp    080da1ca <+0x367>
080da19c +0x0339:  call   0807de30 <_init+0x728>
080da1a1 +0x033e:  mov    %eax,%ebx
080da1a3 +0x0340:  movl   $0x0,(%esp)
080da1aa +0x0347:  call   0807d750 <_init+0x48>
080da1af +0x034c:  mov    %ebx,0x4(%esp)
080da1b3 +0x0350:  mov    %eax,(%esp)
080da1b6 +0x0353:  call   080da1d6 <+0x373>
080da1bb +0x0358:  mov    %eax,0x4(%esp)
080da1bf +0x035c:  mov    0x8(%ebp),%eax
080da1c2 +0x035f:  mov    %eax,(%esp)
080da1c5 +0x0362:  call   080cbb1e <_GLOBAL__I__ZN10BingoEventC2Ev+0x96b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x96b
080da1ca +0x0367:  add    $0x9ec,%esp
080da1d0 +0x036d:  pop    %ebx
080da1d1 +0x036e:  pop    %esi
080da1d2 +0x036f:  pop    %edi
080da1d3 +0x0370:  pop    %ebp
080da1d4 +0x0371:  ret
080da1d5 +0x0372:  nop
080da1d6 +0x0373:  push   %ebp
080da1d7 +0x0374:  mov    %esp,%ebp
080da1d9 +0x0376:  sub    $0x20,%esp
080da1dc +0x0379:  movl   $0x0,-0x14(%ebp)
080da1e3 +0x0380:  lea    0x8(%ebp),%eax
080da1e6 +0x0383:  mov    %eax,-0x10(%ebp)
080da1e9 +0x0386:  movl   $0x0,-0x8(%ebp)
080da1f0 +0x038d:  jmp    080da215 <+0x3b2>
080da1f2 +0x038f:  mov    -0x14(%ebp),%edx
080da1f5 +0x0392:  mov    %edx,%eax
080da1f7 +0x0394:  shl    $0x8,%eax
080da1fa +0x0397:  add    %edx,%eax
080da1fc +0x0399:  mov    %eax,-0x14(%ebp)
080da1ff +0x039c:  mov    -0x8(%ebp),%eax
080da202 +0x039f:  mov    -0x10(%ebp),%edx
080da205 +0x03a2:  lea    (%edx,%eax,1),%eax
080da208 +0x03a5:  movzbl (%eax),%eax
080da20b +0x03a8:  movzbl %al,%eax
080da20e +0x03ab:  add    %eax,-0x14(%ebp)
080da211 +0x03ae:  addl   $0x1,-0x8(%ebp)
080da215 +0x03b2:  cmpl   $0x3,-0x8(%ebp)
080da219 +0x03b6:  setbe  %al
080da21c +0x03b9:  test   %al,%al
080da21e +0x03bb:  jne    080da1f2 <+0x38f>
080da220 +0x03bd:  movl   $0x0,-0xc(%ebp)
080da227 +0x03c4:  lea    0xc(%ebp),%eax
080da22a +0x03c7:  mov    %eax,-0x10(%ebp)
080da22d +0x03ca:  movl   $0x0,-0x4(%ebp)
080da234 +0x03d1:  jmp    080da259 <+0x3f6>
080da236 +0x03d3:  mov    -0xc(%ebp),%edx
080da239 +0x03d6:  mov    %edx,%eax
080da23b +0x03d8:  shl    $0x8,%eax
080da23e +0x03db:  add    %edx,%eax
080da240 +0x03dd:  mov    %eax,-0xc(%ebp)
080da243 +0x03e0:  mov    -0x4(%ebp),%eax
080da246 +0x03e3:  mov    -0x10(%ebp),%edx
080da249 +0x03e6:  lea    (%edx,%eax,1),%eax
080da24c +0x03e9:  movzbl (%eax),%eax
080da24f +0x03ec:  movzbl %al,%eax
080da252 +0x03ef:  add    %eax,-0xc(%ebp)
080da255 +0x03f2:  addl   $0x1,-0x4(%ebp)
080da259 +0x03f6:  cmpl   $0x3,-0x4(%ebp)
080da25d +0x03fa:  setbe  %al
080da260 +0x03fd:  test   %al,%al
080da262 +0x03ff:  jne    080da236 <+0x3d3>
080da264 +0x0401:  mov    &_ZZN7CMTRand4hashEllE6differ,%eax
080da269 +0x0406:  mov    %eax,%edx
080da26b +0x0408:  add    -0x14(%ebp),%edx
080da26e +0x040b:  xor    -0xc(%ebp),%edx
080da271 +0x040e:  add    $0x1,%eax
080da274 +0x0411:  mov    %eax,&_ZZN7CMTRand4hashEllE6differ
080da279 +0x0416:  mov    %edx,%eax
080da27b +0x0418:  leave
080da27c +0x0419:  ret
080da27d +0x041a:  nop
080da27e +0x041b:  push   %ebp
080da27f +0x041c:  mov    %esp,%ebp
080da281 +0x041e:  mov    0x8(%ebp),%eax
080da284 +0x0421:  mov    0x10(%eax),%eax
080da287 +0x0424:  add    $0xda,%eax
080da28c +0x0429:  pop    %ebp
080da28d +0x042a:  ret
080da28e +0x042b:  push   %ebp
080da28f +0x042c:  mov    %esp,%ebp
080da291 +0x042e:  sub    $0x18,%esp
080da294 +0x0431:  mov    0x8(%ebp),%eax
080da297 +0x0434:  mov    %eax,(%esp)
080da29a +0x0437:  call   080da2ac <+0x449>
080da29f +0x043c:  mov    0x8(%ebp),%eax
080da2a2 +0x043f:  mov    0x10(%eax),%eax
080da2a5 +0x0442:  add    $0xda,%eax
080da2aa +0x0447:  leave
080da2ab +0x0448:  ret
080da2ac +0x0449:  push   %ebp
080da2ad +0x044a:  mov    %esp,%ebp
080da2af +0x044c:  mov    0x8(%ebp),%eax
080da2b2 +0x044f:  movb   $0x1,0x4(%eax)
080da2b6 +0x0453:  pop    %ebp
080da2b7 +0x0454:  ret
080da2b8 +0x0455:  push   %ebp
080da2b9 +0x0456:  mov    %esp,%ebp
080da2bb +0x0458:  mov    0x8(%ebp),%eax
080da2be +0x045b:  mov    0x10(%eax),%eax
080da2c1 +0x045e:  test   %eax,%eax
080da2c3 +0x0460:  je     080da2d2 <+0x46f>
080da2c5 +0x0462:  mov    0x8(%ebp),%eax
080da2c8 +0x0465:  mov    0x10(%eax),%eax
080da2cb +0x0468:  movzwl 0x27(%eax),%eax
080da2cf +0x046c:  cwtl
080da2d0 +0x046d:  jmp    080da2d7 <+0x474>
080da2d2 +0x046f:  mov    $0x0,%eax
080da2d7 +0x0474:  pop    %ebp
080da2d8 +0x0475:  ret
080da2d9 +0x0476:  nop
080da2da +0x0477:  push   %ebp
080da2db +0x0478:  mov    %esp,%ebp
080da2dd +0x047a:  mov    0x8(%ebp),%eax
080da2e0 +0x047d:  mov    0x10(%eax),%eax
080da2e3 +0x0480:  test   %eax,%eax
080da2e5 +0x0482:  je     080da2f6 <+0x493>
080da2e7 +0x0484:  mov    0x8(%ebp),%eax
080da2ea +0x0487:  mov    0x10(%eax),%eax
080da2ed +0x048a:  movzbl 0xe66(%eax),%eax
080da2f4 +0x0491:  jmp    080da2fb <+0x498>
080da2f6 +0x0493:  mov    $0x0,%eax
080da2fb +0x0498:  pop    %ebp
080da2fc +0x0499:  ret
080da2fd +0x049a:  nop
080da2fe +0x049b:  push   %ebp
080da2ff +0x049c:  mov    %esp,%ebp
080da301 +0x049e:  mov    0x8(%ebp),%eax
080da304 +0x04a1:  movzwl 0x8d002(%eax),%eax
080da30b +0x04a8:  not    %eax
080da30d +0x04aa:  shr    $0xf,%ax
080da311 +0x04ae:  pop    %ebp
080da312 +0x04af:  ret
080da313 +0x04b0:  nop
080da314 +0x04b1:  push   %ebp
080da315 +0x04b2:  mov    %esp,%ebp
080da317 +0x04b4:  mov    0x8(%ebp),%eax
080da31a +0x04b7:  movzwl 0x8d004(%eax),%eax
080da321 +0x04be:  not    %eax
080da323 +0x04c0:  shr    $0xf,%ax
080da327 +0x04c4:  pop    %ebp
080da328 +0x04c5:  ret
080da329 +0x04c6:  nop
080da32a +0x04c7:  push   %ebp
080da32b +0x04c8:  mov    %esp,%ebp
080da32d +0x04ca:  mov    0x8(%ebp),%eax
080da330 +0x04cd:  movzwl 0x8d00c(%eax),%eax
080da337 +0x04d4:  not    %eax
080da339 +0x04d6:  shr    $0xf,%ax
080da33d +0x04da:  pop    %ebp
080da33e +0x04db:  ret
080da33f +0x04dc:  nop
080da340 +0x04dd:  push   %ebp
080da341 +0x04de:  mov    %esp,%ebp
080da343 +0x04e0:  sub    $0x4,%esp
080da346 +0x04e3:  mov    0xc(%ebp),%eax
080da349 +0x04e6:  mov    %ax,-0x4(%ebp)
080da34d +0x04ea:  mov    0x8(%ebp),%eax
080da350 +0x04ed:  movzwl -0x4(%ebp),%edx
080da354 +0x04f1:  mov    %dx,0x8d00c(%eax)
080da35b +0x04f8:  leave
080da35c +0x04f9:  ret
080da35d +0x04fa:  nop
080da35e +0x04fb:  push   %ebp
080da35f +0x04fc:  mov    %esp,%ebp
080da361 +0x04fe:  mov    0x8(%ebp),%eax
080da364 +0x0501:  movzwl 0x8d00c(%eax),%eax
080da36b +0x0508:  pop    %ebp
080da36c +0x0509:  ret
080da36d +0x050a:  nop
080da36e +0x050b:  push   %ebp
080da36f +0x050c:  mov    %esp,%ebp
080da371 +0x050e:  mov    0x8(%ebp),%eax
080da374 +0x0511:  mov    0x704ac(%eax),%eax
080da37a +0x0517:  pop    %ebp
080da37b +0x0518:  ret
080da37c +0x0519:  push   %ebp
080da37d +0x051a:  mov    %esp,%ebp
080da37f +0x051c:  mov    0x8(%ebp),%eax
080da382 +0x051f:  movzwl 0x704a8(%eax),%eax
080da389 +0x0526:  pop    %ebp
080da38a +0x0527:  ret
080da38b +0x0528:  nop
080da38c +0x0529:  push   %ebp
080da38d +0x052a:  mov    %esp,%ebp
080da38f +0x052c:  mov    0x8(%ebp),%eax
080da392 +0x052f:  mov    0x8cfc4(%eax),%eax
080da398 +0x0535:  pop    %ebp
080da399 +0x0536:  ret
080da39a +0x0537:  push   %ebp
080da39b +0x0538:  mov    %esp,%ebp
080da39d +0x053a:  mov    0x8(%ebp),%eax
080da3a0 +0x053d:  add    $0x3a2,%eax
080da3a5 +0x0542:  pop    %ebp
080da3a6 +0x0543:  ret
080da3a7 +0x0544:  push   %ebp
080da3a8 +0x0545:  mov    %esp,%ebp
080da3aa +0x0547:  sub    $0x8,%esp
080da3ad +0x054a:  call   080da4bb <+0x658>
080da3b2 +0x054f:  leave
080da3b3 +0x0550:  ret
080da3b4 +0x0551:  push   %ebp
080da3b5 +0x0552:  mov    %esp,%ebp
080da3b7 +0x0554:  sub    $0x18,%esp
080da3ba +0x0557:  mov    0x8(%ebp),%eax
080da3bd +0x055a:  mov    %eax,(%esp)
080da3c0 +0x055d:  call   080da636 <+0x7d3>
080da3c5 +0x0562:  leave
080da3c6 +0x0563:  ret
080da3c7 +0x0564:  nop
080da3c8 +0x0565:  push   %ebp
080da3c9 +0x0566:  mov    %esp,%ebp
080da3cb +0x0568:  mov    0x8(%ebp),%eax
080da3ce +0x056b:  mov    (%eax),%edx
080da3d0 +0x056d:  mov    0xc(%ebp),%eax
080da3d3 +0x0570:  mov    (%eax),%eax
080da3d5 +0x0572:  cmp    %eax,%edx
080da3d7 +0x0574:  setne  %al
080da3da +0x0577:  pop    %ebp
080da3db +0x0578:  ret
080da3dc +0x0579:  push   %ebp
080da3dd +0x057a:  mov    %esp,%ebp
080da3df +0x057c:  sub    $0x18,%esp
080da3e2 +0x057f:  mov    0x8(%ebp),%eax
080da3e5 +0x0582:  mov    %eax,(%esp)
080da3e8 +0x0585:  call   080da880 <+0xa1d>
080da3ed +0x058a:  leave
080da3ee +0x058b:  ret
080da3ef +0x058c:  nop
080da3f0 +0x058d:  push   %ebp
080da3f1 +0x058e:  mov    %esp,%ebp
080da3f3 +0x0590:  sub    $0x18,%esp
080da3f6 +0x0593:  mov    0x8(%ebp),%eax
080da3f9 +0x0596:  mov    %eax,(%esp)
080da3fc +0x0599:  call   080da894 <+0xa31>
080da401 +0x059e:  leave
080da402 +0x059f:  ret
080da403 +0x05a0:  nop
080da404 +0x05a1:  push   %ebp
080da405 +0x05a2:  mov    %esp,%ebp
080da407 +0x05a4:  push   %esi
080da408 +0x05a5:  push   %ebx
080da409 +0x05a6:  sub    $0x10,%esp
080da40c +0x05a9:  mov    0x8(%ebp),%eax
080da40f +0x05ac:  mov    %eax,(%esp)
080da412 +0x05af:  call   080da8fe <+0xa9b>
080da417 +0x05b4:  mov    %eax,0x4(%esp)
080da41b +0x05b8:  mov    0x8(%ebp),%eax
080da41e +0x05bb:  mov    %eax,(%esp)
080da421 +0x05be:  call   080da8a8 <+0xa45>
080da426 +0x05c3:  jmp    080da443 <+0x5e0>
080da428 +0x05c5:  mov    %edx,%ebx
080da42a +0x05c7:  mov    %eax,%esi
080da42c +0x05c9:  mov    0x8(%ebp),%eax
080da42f +0x05cc:  mov    %eax,(%esp)
080da432 +0x05cf:  call   080da3f0 <+0x58d>
080da437 +0x05d4:  mov    %esi,%eax
080da439 +0x05d6:  mov    %ebx,%edx
080da43b +0x05d8:  mov    %eax,(%esp)
080da43e +0x05db:  call   08ae3750 <_Unwind_Resume>
080da443 +0x05e0:  mov    0x8(%ebp),%eax
080da446 +0x05e3:  mov    %eax,(%esp)
080da449 +0x05e6:  call   080da3f0 <+0x58d>
080da44e +0x05eb:  add    $0x10,%esp
080da451 +0x05ee:  pop    %ebx
080da452 +0x05ef:  pop    %esi
080da453 +0x05f0:  pop    %ebp
080da454 +0x05f1:  ret
080da455 +0x05f2:  nop
080da456 +0x05f3:  push   %ebp
080da457 +0x05f4:  mov    %esp,%ebp
080da459 +0x05f6:  sub    $0x18,%esp
080da45c +0x05f9:  mov    0x8(%ebp),%eax
080da45f +0x05fc:  mov    %eax,(%esp)
080da462 +0x05ff:  call   080da90a <+0xaa7>
080da467 +0x0604:  leave
080da468 +0x0605:  ret
080da469 +0x0606:  nop
080da46a +0x0607:  push   %ebp
080da46b +0x0608:  mov    %esp,%ebp
080da46d +0x060a:  push   %ebx
080da46e +0x060b:  sub    $0x14,%esp
080da471 +0x060e:  mov    0x8(%ebp),%ebx
080da474 +0x0611:  mov    0xc(%ebp),%eax
080da477 +0x0614:  mov    0x10(%ebp),%edx
080da47a +0x0617:  mov    %edx,0x8(%esp)
080da47e +0x061b:  mov    %eax,0x4(%esp)
080da482 +0x061f:  mov    %ebx,(%esp)
080da485 +0x0622:  call   080da980 <+0xb1d>
080da48a +0x0627:  sub    $0x4,%esp
080da48d +0x062a:  mov    %ebx,%eax
080da48f +0x062c:  mov    -0x4(%ebp),%ebx
080da492 +0x062f:  leave
080da493 +0x0630:  ret    $0x4
080da496 +0x0633:  push   %ebp
080da497 +0x0634:  mov    %esp,%ebp
080da499 +0x0636:  push   %ebx
080da49a +0x0637:  sub    $0x14,%esp
080da49d +0x063a:  mov    0x8(%ebp),%ebx
080da4a0 +0x063d:  mov    0xc(%ebp),%eax
080da4a3 +0x0640:  mov    %eax,0x4(%esp)
080da4a7 +0x0644:  mov    %ebx,(%esp)
080da4aa +0x0647:  call   080daa3e <+0xbdb>
080da4af +0x064c:  sub    $0x4,%esp
080da4b2 +0x064f:  mov    %ebx,%eax
080da4b4 +0x0651:  mov    -0x4(%ebp),%ebx
080da4b7 +0x0654:  leave
080da4b8 +0x0655:  ret    $0x4
080da4bb +0x0658:  push   %ebp
080da4bc +0x0659:  mov    %esp,%ebp
080da4be +0x065b:  sub    $0x8,%esp
080da4c1 +0x065e:  call   080daa64 <+0xc01>
080da4c6 +0x0663:  mov    &_ZN14GlobalInstanceI9GameWorldE3m_pE,%eax
080da4cb +0x0668:  leave
080da4cc +0x0669:  ret
080da4cd +0x066a:  nop
080da4ce +0x066b:  push   %ebp
080da4cf +0x066c:  mov    %esp,%ebp
080da4d1 +0x066e:  mov    0x8(%ebp),%eax
080da4d4 +0x0671:  mov    (%eax),%ecx
080da4d6 +0x0673:  mov    0xc(%ebp),%edx
080da4d9 +0x0676:  mov    %edx,%eax
080da4db +0x0678:  shl    $0x2,%eax
080da4de +0x067b:  add    %edx,%eax
080da4e0 +0x067d:  shl    $0x3,%eax
080da4e3 +0x0680:  lea    (%ecx,%eax,1),%eax
080da4e6 +0x0683:  pop    %ebp
080da4e7 +0x0684:  ret
080da4e8 +0x0685:  push   %ebp
080da4e9 +0x0686:  mov    %esp,%ebp
080da4eb +0x0688:  mov    0x8(%ebp),%eax
080da4ee +0x068b:  mov    0x4(%eax),%eax
080da4f1 +0x068e:  mov    %eax,%edx
080da4f3 +0x0690:  mov    0x8(%ebp),%eax
080da4f6 +0x0693:  mov    (%eax),%eax
080da4f8 +0x0695:  mov    %edx,%ecx
080da4fa +0x0697:  sub    %eax,%ecx
080da4fc +0x0699:  mov    %ecx,%eax
080da4fe +0x069b:  sar    $0x2,%eax
080da501 +0x069e:  pop    %ebp
080da502 +0x069f:  ret
080da503 +0x06a0:  nop
080da504 +0x06a1:  push   %ebp
080da505 +0x06a2:  mov    %esp,%ebp
080da507 +0x06a4:  mov    0x8(%ebp),%eax
080da50a +0x06a7:  mov    (%eax),%ecx
080da50c +0x06a9:  mov    0xc(%ebp),%edx
080da50f +0x06ac:  mov    %edx,%eax
080da511 +0x06ae:  shl    $0x2,%eax
080da514 +0x06b1:  add    %edx,%eax
080da516 +0x06b3:  shl    $0x3,%eax
080da519 +0x06b6:  lea    (%ecx,%eax,1),%eax
080da51c +0x06b9:  pop    %ebp
080da51d +0x06ba:  ret
080da51e +0x06bb:  push   %ebp
080da51f +0x06bc:  mov    %esp,%ebp
080da521 +0x06be:  sub    $0x18,%esp
080da524 +0x06c1:  mov    0x8(%ebp),%eax
080da527 +0x06c4:  mov    %eax,(%esp)
080da52a +0x06c7:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
080da52f +0x06cc:  mov    0xc(%ebp),%eax
080da532 +0x06cf:  mov    %eax,0x4(%esp)
080da536 +0x06d3:  mov    0x8(%ebp),%eax
080da539 +0x06d6:  mov    %eax,(%esp)
080da53c +0x06d9:  call   080daac4 <+0xc61>
080da541 +0x06de:  mov    0x8(%ebp),%eax
080da544 +0x06e1:  leave
080da545 +0x06e2:  ret
080da546 +0x06e3:  push   %ebp
080da547 +0x06e4:  mov    %esp,%ebp
080da549 +0x06e6:  mov    0x8(%ebp),%eax
080da54c +0x06e9:  mov    0x4(%eax),%eax
080da54f +0x06ec:  mov    %eax,%edx
080da551 +0x06ee:  mov    0x8(%ebp),%eax
080da554 +0x06f1:  mov    (%eax),%eax
080da556 +0x06f3:  mov    %edx,%ecx
080da558 +0x06f5:  sub    %eax,%ecx
080da55a +0x06f7:  mov    %ecx,%eax
080da55c +0x06f9:  sar    $0x3,%eax
080da55f +0x06fc:  pop    %ebp
080da560 +0x06fd:  ret
080da561 +0x06fe:  nop
080da562 +0x06ff:  push   %ebp
080da563 +0x0700:  mov    %esp,%ebp
080da565 +0x0702:  mov    0x8(%ebp),%eax
080da568 +0x0705:  mov    (%eax),%eax
080da56a +0x0707:  mov    0xc(%ebp),%edx
080da56d +0x070a:  shl    $0x3,%edx
080da570 +0x070d:  add    %edx,%eax
080da572 +0x070f:  pop    %ebp
080da573 +0x0710:  ret
080da574 +0x0711:  push   %ebp
080da575 +0x0712:  mov    %esp,%ebp
080da577 +0x0714:  push   %ebx
080da578 +0x0715:  sub    $0x24,%esp
080da57b +0x0718:  mov    0x8(%ebp),%ebx
080da57e +0x071b:  mov    0xc(%ebp),%edx
080da581 +0x071e:  lea    -0xc(%ebp),%eax
080da584 +0x0721:  mov    0x10(%ebp),%ecx
080da587 +0x0724:  mov    %ecx,0x8(%esp)
080da58b +0x0728:  mov    %edx,0x4(%esp)
080da58f +0x072c:  mov    %eax,(%esp)
080da592 +0x072f:  call   080dab38 <+0xcd5>
080da597 +0x0734:  sub    $0x4,%esp
080da59a +0x0737:  lea    -0xc(%ebp),%eax
080da59d +0x073a:  mov    %eax,0x4(%esp)
080da5a1 +0x073e:  mov    %ebx,(%esp)
080da5a4 +0x0741:  call   080dabf6 <+0xd93>
080da5a9 +0x0746:  mov    %ebx,%eax
080da5ab +0x0748:  mov    -0x4(%ebp),%ebx
080da5ae +0x074b:  leave
080da5af +0x074c:  ret    $0x4
080da5b2 +0x074f:  push   %ebp
080da5b3 +0x0750:  mov    %esp,%ebp
080da5b5 +0x0752:  mov    0x8(%ebp),%eax
080da5b8 +0x0755:  mov    (%eax),%edx
080da5ba +0x0757:  mov    0xc(%ebp),%eax
080da5bd +0x075a:  mov    (%eax),%eax
080da5bf +0x075c:  cmp    %eax,%edx
080da5c1 +0x075e:  sete   %al
080da5c4 +0x0761:  pop    %ebp
080da5c5 +0x0762:  ret
080da5c6 +0x0763:  push   %ebp
080da5c7 +0x0764:  mov    %esp,%ebp
080da5c9 +0x0766:  push   %ebx
080da5ca +0x0767:  sub    $0x24,%esp
080da5cd +0x076a:  mov    0x8(%ebp),%ebx
080da5d0 +0x076d:  mov    0xc(%ebp),%edx
080da5d3 +0x0770:  lea    -0x10(%ebp),%eax
080da5d6 +0x0773:  mov    0x10(%ebp),%ecx
080da5d9 +0x0776:  mov    %ecx,0x8(%esp)
080da5dd +0x077a:  mov    %edx,0x4(%esp)
080da5e1 +0x077e:  mov    %eax,(%esp)
080da5e4 +0x0781:  call   080dac06 <+0xda3>
080da5e9 +0x0786:  sub    $0x4,%esp
080da5ec +0x0789:  lea    -0x10(%ebp),%eax
080da5ef +0x078c:  add    $0x4,%eax
080da5f2 +0x078f:  mov    %eax,0x8(%esp)
080da5f6 +0x0793:  lea    -0x10(%ebp),%eax
080da5f9 +0x0796:  mov    %eax,0x4(%esp)
080da5fd +0x079a:  mov    %ebx,(%esp)
080da600 +0x079d:  call   080dadd6 <+0xf73>
080da605 +0x07a2:  mov    %ebx,%eax
080da607 +0x07a4:  mov    -0x4(%ebp),%ebx
080da60a +0x07a7:  leave
080da60b +0x07a8:  ret    $0x4
080da60e +0x07ab:  push   %ebp
080da60f +0x07ac:  mov    %esp,%ebp
080da611 +0x07ae:  sub    $0x18,%esp
080da614 +0x07b1:  mov    0x8(%ebp),%eax
080da617 +0x07b4:  mov    %eax,(%esp)
080da61a +0x07b7:  call   080dae0c <+0xfa9>
080da61f +0x07bc:  leave
080da620 +0x07bd:  ret
080da621 +0x07be:  nop
080da622 +0x07bf:  push   %ebp
080da623 +0x07c0:  mov    %esp,%ebp
080da625 +0x07c2:  sub    $0x18,%esp
080da628 +0x07c5:  mov    0x8(%ebp),%eax
080da62b +0x07c8:  mov    %eax,(%esp)
080da62e +0x07cb:  call   080c706c <_GLOBAL__I_g_ServerString_+0x5d7>  ; global constructors keyed to g_ServerString_+0x5d7
080da633 +0x07d0:  leave
080da634 +0x07d1:  ret
080da635 +0x07d2:  nop
080da636 +0x07d3:  push   %ebp
080da637 +0x07d4:  mov    %esp,%ebp
080da639 +0x07d6:  push   %esi
080da63a +0x07d7:  push   %ebx
080da63b +0x07d8:  sub    $0x10,%esp
080da63e +0x07db:  mov    0x8(%ebp),%eax
080da641 +0x07de:  mov    %eax,(%esp)
080da644 +0x07e1:  call   080dae76 <+0x1013>
080da649 +0x07e6:  mov    %eax,0x4(%esp)
080da64d +0x07ea:  mov    0x8(%ebp),%eax
080da650 +0x07ed:  mov    %eax,(%esp)
080da653 +0x07f0:  call   080dae20 <+0xfbd>
080da658 +0x07f5:  jmp    080da675 <+0x812>
080da65a +0x07f7:  mov    %edx,%ebx
080da65c +0x07f9:  mov    %eax,%esi
080da65e +0x07fb:  mov    0x8(%ebp),%eax
080da661 +0x07fe:  mov    %eax,(%esp)
080da664 +0x0801:  call   080da622 <+0x7bf>
080da669 +0x0806:  mov    %esi,%eax
080da66b +0x0808:  mov    %ebx,%edx
080da66d +0x080a:  mov    %eax,(%esp)
080da670 +0x080d:  call   08ae3750 <_Unwind_Resume>
080da675 +0x0812:  mov    0x8(%ebp),%eax
080da678 +0x0815:  mov    %eax,(%esp)
080da67b +0x0818:  call   080da622 <+0x7bf>
080da680 +0x081d:  add    $0x10,%esp
080da683 +0x0820:  pop    %ebx
080da684 +0x0821:  pop    %esi
080da685 +0x0822:  pop    %ebp
080da686 +0x0823:  ret
080da687 +0x0824:  push   %ebp
080da688 +0x0825:  mov    %esp,%ebp
080da68a +0x0827:  push   %esi
080da68b +0x0828:  push   %ebx
080da68c +0x0829:  sub    $0x20,%esp
080da68f +0x082c:  mov    0x8(%ebp),%esi
080da692 +0x082f:  mov    0x10(%ebp),%eax
080da695 +0x0832:  mov    %eax,(%esp)
080da698 +0x0835:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
080da69d +0x083a:  mov    %eax,%ebx
080da69f +0x083c:  mov    0xc(%ebp),%eax
080da6a2 +0x083f:  mov    %eax,(%esp)
080da6a5 +0x0842:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
080da6aa +0x0847:  mov    (%eax),%eax
080da6ac +0x0849:  mov    %eax,-0xc(%ebp)
080da6af +0x084c:  mov    %ebx,0x8(%esp)
080da6b3 +0x0850:  lea    -0xc(%ebp),%eax
080da6b6 +0x0853:  mov    %eax,0x4(%esp)
080da6ba +0x0857:  mov    %esi,(%esp)
080da6bd +0x085a:  call   080dae82 <+0x101f>
080da6c2 +0x085f:  mov    %esi,%eax
080da6c4 +0x0861:  add    $0x20,%esp
080da6c7 +0x0864:  pop    %ebx
080da6c8 +0x0865:  pop    %esi
080da6c9 +0x0866:  pop    %ebp
080da6ca +0x0867:  ret    $0x4
080da6cd +0x086a:  nop
080da6ce +0x086b:  push   %ebp
080da6cf +0x086c:  mov    %esp,%ebp
080da6d1 +0x086e:  push   %ebx
080da6d2 +0x086f:  sub    $0x14,%esp
080da6d5 +0x0872:  mov    0x8(%ebp),%ebx
080da6d8 +0x0875:  mov    0xc(%ebp),%eax
080da6db +0x0878:  mov    0x10(%ebp),%edx
080da6de +0x087b:  mov    %edx,0x8(%esp)
080da6e2 +0x087f:  mov    %eax,0x4(%esp)
080da6e6 +0x0883:  mov    %ebx,(%esp)
080da6e9 +0x0886:  call   080daeb0 <+0x104d>
080da6ee +0x088b:  sub    $0x4,%esp
080da6f1 +0x088e:  mov    %ebx,%eax
080da6f3 +0x0890:  mov    -0x4(%ebp),%ebx
080da6f6 +0x0893:  leave
080da6f7 +0x0894:  ret    $0x4
080da6fa +0x0897:  push   %ebp
080da6fb +0x0898:  mov    %esp,%ebp
080da6fd +0x089a:  push   %ebx
080da6fe +0x089b:  sub    $0x14,%esp
080da701 +0x089e:  mov    0x8(%ebp),%ebx
080da704 +0x08a1:  mov    0xc(%ebp),%eax
080da707 +0x08a4:  mov    %eax,0x4(%esp)
080da70b +0x08a8:  mov    %ebx,(%esp)
080da70e +0x08ab:  call   080daf70 <+0x110d>
080da713 +0x08b0:  sub    $0x4,%esp
080da716 +0x08b3:  mov    %ebx,%eax
080da718 +0x08b5:  mov    -0x4(%ebp),%ebx
080da71b +0x08b8:  leave
080da71c +0x08b9:  ret    $0x4
080da71f +0x08bc:  nop
080da720 +0x08bd:  push   %ebp
080da721 +0x08be:  mov    %esp,%ebp
080da723 +0x08c0:  push   %ebx
080da724 +0x08c1:  sub    $0x14,%esp
080da727 +0x08c4:  mov    0x8(%ebp),%ebx
080da72a +0x08c7:  mov    0xc(%ebp),%eax
080da72d +0x08ca:  mov    %eax,0x4(%esp)
080da731 +0x08ce:  mov    %ebx,(%esp)
080da734 +0x08d1:  call   080daf96 <+0x1133>
080da739 +0x08d6:  sub    $0x4,%esp
080da73c +0x08d9:  mov    %ebx,%eax
080da73e +0x08db:  mov    -0x4(%ebp),%ebx
080da741 +0x08de:  leave
080da742 +0x08df:  ret    $0x4
080da745 +0x08e2:  nop
080da746 +0x08e3:  push   %ebp
080da747 +0x08e4:  mov    %esp,%ebp
080da749 +0x08e6:  sub    $0x18,%esp
080da74c +0x08e9:  mov    0x8(%ebp),%eax
080da74f +0x08ec:  mov    (%eax),%eax
080da751 +0x08ee:  mov    %eax,(%esp)
080da754 +0x08f1:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
080da759 +0x08f6:  mov    0x8(%ebp),%edx
080da75c +0x08f9:  mov    %eax,(%edx)
080da75e +0x08fb:  mov    0x8(%ebp),%eax
080da761 +0x08fe:  leave
080da762 +0x08ff:  ret
080da763 +0x0900:  nop
080da764 +0x0901:  push   %ebp
080da765 +0x0902:  mov    %esp,%ebp
080da767 +0x0904:  mov    0x8(%ebp),%eax
080da76a +0x0907:  mov    (%eax),%eax
080da76c +0x0909:  mov    0xc(%ebp),%edx
080da76f +0x090c:  shl    $0x3,%edx
080da772 +0x090f:  add    %edx,%eax
080da774 +0x0911:  pop    %ebp
080da775 +0x0912:  ret
080da776 +0x0913:  push   %ebp
080da777 +0x0914:  mov    %esp,%ebp
080da779 +0x0916:  sub    $0x18,%esp
080da77c +0x0919:  mov    0x8(%ebp),%eax
080da77f +0x091c:  mov    %eax,(%esp)
080da782 +0x091f:  call   080dafd0 <+0x116d>
080da787 +0x0924:  leave
080da788 +0x0925:  ret
080da789 +0x0926:  nop
080da78a +0x0927:  push   %ebp
080da78b +0x0928:  mov    %esp,%ebp
080da78d +0x092a:  push   %esi
080da78e +0x092b:  push   %ebx
080da78f +0x092c:  sub    $0x10,%esp
080da792 +0x092f:  mov    0x8(%ebp),%eax
080da795 +0x0932:  mov    %eax,(%esp)
080da798 +0x0935:  call   080db052 <+0x11ef>
080da79d +0x093a:  mov    0x8(%ebp),%edx
080da7a0 +0x093d:  mov    0x4(%edx),%ecx
080da7a3 +0x0940:  mov    0x8(%ebp),%edx
080da7a6 +0x0943:  mov    (%edx),%edx
080da7a8 +0x0945:  mov    %eax,0x8(%esp)
080da7ac +0x0949:  mov    %ecx,0x4(%esp)
080da7b0 +0x094d:  mov    %edx,(%esp)
080da7b3 +0x0950:  call   080db05a <+0x11f7>
080da7b8 +0x0955:  jmp    080da7d5 <+0x972>
080da7ba +0x0957:  mov    %edx,%ebx
080da7bc +0x0959:  mov    %eax,%esi
080da7be +0x095b:  mov    0x8(%ebp),%eax
080da7c1 +0x095e:  mov    %eax,(%esp)
080da7c4 +0x0961:  call   080dafe4 <+0x1181>
080da7c9 +0x0966:  mov    %esi,%eax
080da7cb +0x0968:  mov    %ebx,%edx
080da7cd +0x096a:  mov    %eax,(%esp)
080da7d0 +0x096d:  call   08ae3750 <_Unwind_Resume>
080da7d5 +0x0972:  mov    0x8(%ebp),%eax
080da7d8 +0x0975:  mov    %eax,(%esp)
080da7db +0x0978:  call   080dafe4 <+0x1181>
080da7e0 +0x097d:  add    $0x10,%esp
080da7e3 +0x0980:  pop    %ebx
080da7e4 +0x0981:  pop    %esi
080da7e5 +0x0982:  pop    %ebp
080da7e6 +0x0983:  ret
080da7e7 +0x0984:  nop
080da7e8 +0x0985:  push   %ebp
080da7e9 +0x0986:  mov    %esp,%ebp
080da7eb +0x0988:  sub    $0x18,%esp
080da7ee +0x098b:  mov    0x8(%ebp),%eax
080da7f1 +0x098e:  mov    (%eax),%eax
080da7f3 +0x0990:  mov    %eax,0x4(%esp)
080da7f7 +0x0994:  mov    0x8(%ebp),%eax
080da7fa +0x0997:  mov    %eax,(%esp)
080da7fd +0x099a:  call   080db074 <+0x1211>
080da802 +0x099f:  leave
080da803 +0x09a0:  ret
080da804 +0x09a1:  push   %ebp
080da805 +0x09a2:  mov    %esp,%ebp
080da807 +0x09a4:  sub    $0x28,%esp
080da80a +0x09a7:  mov    0x8(%ebp),%eax
080da80d +0x09aa:  mov    0x4(%eax),%edx
080da810 +0x09ad:  mov    0x8(%ebp),%eax
080da813 +0x09b0:  mov    0x8(%eax),%eax
080da816 +0x09b3:  cmp    %eax,%edx
080da818 +0x09b5:  je     080da847 <+0x9e4>
080da81a +0x09b7:  mov    0x8(%ebp),%eax
080da81d +0x09ba:  mov    0x4(%eax),%edx
080da820 +0x09bd:  mov    0x8(%ebp),%eax
080da823 +0x09c0:  mov    0xc(%ebp),%ecx
080da826 +0x09c3:  mov    %ecx,0x8(%esp)
080da82a +0x09c7:  mov    %edx,0x4(%esp)
080da82e +0x09cb:  mov    %eax,(%esp)
080da831 +0x09ce:  call   080db0aa <+0x1247>
080da836 +0x09d3:  mov    0x8(%ebp),%eax
080da839 +0x09d6:  mov    0x4(%eax),%eax
080da83c +0x09d9:  lea    0x28(%eax),%edx
080da83f +0x09dc:  mov    0x8(%ebp),%eax
080da842 +0x09df:  mov    %edx,0x4(%eax)
080da845 +0x09e2:  jmp    080da875 <+0xa12>
080da847 +0x09e4:  lea    -0xc(%ebp),%eax
080da84a +0x09e7:  mov    0x8(%ebp),%edx
080da84d +0x09ea:  mov    %edx,0x4(%esp)
080da851 +0x09ee:  mov    %eax,(%esp)
080da854 +0x09f1:  call   080db108 <+0x12a5>
080da859 +0x09f6:  sub    $0x4,%esp
080da85c +0x09f9:  mov    0xc(%ebp),%eax
080da85f +0x09fc:  mov    %eax,0x8(%esp)
080da863 +0x0a00:  mov    -0xc(%ebp),%eax
080da866 +0x0a03:  mov    %eax,0x4(%esp)
080da86a +0x0a07:  mov    0x8(%ebp),%eax
080da86d +0x0a0a:  mov    %eax,(%esp)
080da870 +0x0a0d:  call   080db12e <+0x12cb>
080da875 +0x0a12:  leave
080da876 +0x0a13:  ret
080da877 +0x0a14:  push   %ebp
080da878 +0x0a15:  mov    %esp,%ebp
080da87a +0x0a17:  mov    0x8(%ebp),%eax
080da87d +0x0a1a:  pop    %ebp
080da87e +0x0a1b:  ret
080da87f +0x0a1c:  nop
080da880 +0x0a1d:  push   %ebp
080da881 +0x0a1e:  mov    %esp,%ebp
080da883 +0x0a20:  sub    $0x18,%esp
080da886 +0x0a23:  mov    0x8(%ebp),%eax
080da889 +0x0a26:  mov    %eax,(%esp)
080da88c +0x0a29:  call   080db436 <+0x15d3>
080da891 +0x0a2e:  leave
080da892 +0x0a2f:  ret
080da893 +0x0a30:  nop
080da894 +0x0a31:  push   %ebp
080da895 +0x0a32:  mov    %esp,%ebp
080da897 +0x0a34:  sub    $0x18,%esp
080da89a +0x0a37:  mov    0x8(%ebp),%eax
080da89d +0x0a3a:  mov    %eax,(%esp)
080da8a0 +0x0a3d:  call   080db486 <+0x1623>
080da8a5 +0x0a42:  leave
080da8a6 +0x0a43:  ret
080da8a7 +0x0a44:  nop
080da8a8 +0x0a45:  push   %ebp
080da8a9 +0x0a46:  mov    %esp,%ebp
080da8ab +0x0a48:  sub    $0x28,%esp
080da8ae +0x0a4b:  jmp    080da8f0 <+0xa8d>
080da8b0 +0x0a4d:  mov    0xc(%ebp),%eax
080da8b3 +0x0a50:  mov    %eax,(%esp)
080da8b6 +0x0a53:  call   080db48b <+0x1628>
080da8bb +0x0a58:  mov    %eax,0x4(%esp)
080da8bf +0x0a5c:  mov    0x8(%ebp),%eax
080da8c2 +0x0a5f:  mov    %eax,(%esp)
080da8c5 +0x0a62:  call   080da8a8 <+0xa45>
080da8ca +0x0a67:  mov    0xc(%ebp),%eax
080da8cd +0x0a6a:  mov    %eax,(%esp)
080da8d0 +0x0a6d:  call   080db496 <+0x1633>
080da8d5 +0x0a72:  mov    %eax,-0xc(%ebp)
080da8d8 +0x0a75:  mov    0xc(%ebp),%eax
080da8db +0x0a78:  mov    %eax,0x4(%esp)
080da8df +0x0a7c:  mov    0x8(%ebp),%eax
080da8e2 +0x0a7f:  mov    %eax,(%esp)
080da8e5 +0x0a82:  call   080db4a2 <+0x163f>
080da8ea +0x0a87:  mov    -0xc(%ebp),%eax
080da8ed +0x0a8a:  mov    %eax,0xc(%ebp)
080da8f0 +0x0a8d:  cmpl   $0x0,0xc(%ebp)
080da8f4 +0x0a91:  setne  %al
080da8f7 +0x0a94:  test   %al,%al
080da8f9 +0x0a96:  jne    080da8b0 <+0xa4d>
080da8fb +0x0a98:  leave
080da8fc +0x0a99:  ret
080da8fd +0x0a9a:  nop
080da8fe +0x0a9b:  push   %ebp
080da8ff +0x0a9c:  mov    %esp,%ebp
080da901 +0x0a9e:  mov    0x8(%ebp),%eax
080da904 +0x0aa1:  mov    0x8(%eax),%eax
080da907 +0x0aa4:  pop    %ebp
080da908 +0x0aa5:  ret
080da909 +0x0aa6:  nop
080da90a +0x0aa7:  push   %ebp
080da90b +0x0aa8:  mov    %esp,%ebp
080da90d +0x0aaa:  push   %ebx
080da90e +0x0aab:  sub    $0x14,%esp
080da911 +0x0aae:  mov    0x8(%ebp),%eax
080da914 +0x0ab1:  mov    %eax,(%esp)
080da917 +0x0ab4:  call   080da8fe <+0xa9b>
080da91c +0x0ab9:  mov    %eax,0x4(%esp)
080da920 +0x0abd:  mov    0x8(%ebp),%eax
080da923 +0x0ac0:  mov    %eax,(%esp)
080da926 +0x0ac3:  call   080da8a8 <+0xa45>
080da92b +0x0ac8:  mov    0x8(%ebp),%eax
080da92e +0x0acb:  mov    %eax,(%esp)
080da931 +0x0ace:  call   080db4e2 <+0x167f>
080da936 +0x0ad3:  mov    %eax,%ebx
080da938 +0x0ad5:  mov    0x8(%ebp),%eax
080da93b +0x0ad8:  mov    %eax,(%esp)
080da93e +0x0adb:  call   080db4d6 <+0x1673>
080da943 +0x0ae0:  mov    %eax,(%ebx)
080da945 +0x0ae2:  mov    0x8(%ebp),%eax
080da948 +0x0ae5:  mov    %eax,(%esp)
080da94b +0x0ae8:  call   080db4ee <+0x168b>
080da950 +0x0aed:  movl   $0x0,(%eax)
080da956 +0x0af3:  mov    0x8(%ebp),%eax
080da959 +0x0af6:  mov    %eax,(%esp)
080da95c +0x0af9:  call   080db4fa <+0x1697>
080da961 +0x0afe:  mov    %eax,%ebx
080da963 +0x0b00:  mov    0x8(%ebp),%eax
080da966 +0x0b03:  mov    %eax,(%esp)
080da969 +0x0b06:  call   080db4d6 <+0x1673>
080da96e +0x0b0b:  mov    %eax,(%ebx)
080da970 +0x0b0d:  mov    0x8(%ebp),%eax
080da973 +0x0b10:  movl   $0x0,0x14(%eax)
080da97a +0x0b17:  add    $0x14,%esp
080da97d +0x0b1a:  pop    %ebx
080da97e +0x0b1b:  pop    %ebp
080da97f +0x0b1c:  ret
080da980 +0x0b1d:  push   %ebp
080da981 +0x0b1e:  mov    %esp,%ebp
080da983 +0x0b20:  push   %esi
080da984 +0x0b21:  push   %ebx
080da985 +0x0b22:  sub    $0x30,%esp
080da988 +0x0b25:  mov    0x8(%ebp),%ebx
080da98b +0x0b28:  mov    0xc(%ebp),%eax
080da98e +0x0b2b:  mov    %eax,(%esp)
080da991 +0x0b2e:  call   080db51a <+0x16b7>
080da996 +0x0b33:  mov    %eax,%esi
080da998 +0x0b35:  mov    0xc(%ebp),%eax
080da99b +0x0b38:  mov    %eax,(%esp)
080da99e +0x0b3b:  call   080db50e <+0x16ab>
080da9a3 +0x0b40:  lea    -0x10(%ebp),%edx
080da9a6 +0x0b43:  mov    0x10(%ebp),%ecx
080da9a9 +0x0b46:  mov    %ecx,0x10(%esp)
080da9ad +0x0b4a:  mov    %esi,0xc(%esp)
080da9b1 +0x0b4e:  mov    %eax,0x8(%esp)
080da9b5 +0x0b52:  mov    0xc(%ebp),%eax
080da9b8 +0x0b55:  mov    %eax,0x4(%esp)
080da9bc +0x0b59:  mov    %edx,(%esp)
080da9bf +0x0b5c:  call   080db526 <+0x16c3>
080da9c4 +0x0b61:  sub    $0x4,%esp
080da9c7 +0x0b64:  lea    -0xc(%ebp),%eax
080da9ca +0x0b67:  mov    0xc(%ebp),%edx
080da9cd +0x0b6a:  mov    %edx,0x4(%esp)
080da9d1 +0x0b6e:  mov    %eax,(%esp)
080da9d4 +0x0b71:  call   080daa3e <+0xbdb>
080da9d9 +0x0b76:  sub    $0x4,%esp
080da9dc +0x0b79:  lea    -0xc(%ebp),%eax
080da9df +0x0b7c:  mov    %eax,0x4(%esp)
080da9e3 +0x0b80:  lea    -0x10(%ebp),%eax
080da9e6 +0x0b83:  mov    %eax,(%esp)
080da9e9 +0x0b86:  call   080da5b2 <+0x74f>
080da9ee +0x0b8b:  test   %al,%al
080da9f0 +0x0b8d:  jne    080daa17 <+0xbb4>
080da9f2 +0x0b8f:  mov    -0x10(%ebp),%eax
080da9f5 +0x0b92:  mov    %eax,(%esp)
080da9f8 +0x0b95:  call   080db5a2 <+0x173f>
080da9fd +0x0b9a:  mov    0xc(%ebp),%edx
080daa00 +0x0b9d:  mov    %eax,0x8(%esp)
080daa04 +0x0ba1:  mov    0x10(%ebp),%eax
080daa07 +0x0ba4:  mov    %eax,0x4(%esp)
080daa0b +0x0ba8:  mov    %edx,(%esp)
080daa0e +0x0bab:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080daa13 +0x0bb0:  test   %al,%al
080daa15 +0x0bb2:  je     080daa2b <+0xbc8>
080daa17 +0x0bb4:  mov    0xc(%ebp),%eax
080daa1a +0x0bb7:  mov    %eax,0x4(%esp)
080daa1e +0x0bbb:  mov    %ebx,(%esp)
080daa21 +0x0bbe:  call   080daa3e <+0xbdb>
080daa26 +0x0bc3:  sub    $0x4,%esp
080daa29 +0x0bc6:  jmp    080daa30 <+0xbcd>
080daa2b +0x0bc8:  mov    -0x10(%ebp),%eax
080daa2e +0x0bcb:  mov    %eax,(%ebx)
080daa30 +0x0bcd:  mov    %ebx,%eax
080daa32 +0x0bcf:  lea    -0x8(%ebp),%esp
080daa35 +0x0bd2:  add    $0x0,%esp
080daa38 +0x0bd5:  pop    %ebx
080daa39 +0x0bd6:  pop    %esi
080daa3a +0x0bd7:  pop    %ebp
080daa3b +0x0bd8:  ret    $0x4
080daa3e +0x0bdb:  push   %ebp
080daa3f +0x0bdc:  mov    %esp,%ebp
080daa41 +0x0bde:  push   %ebx
080daa42 +0x0bdf:  sub    $0x14,%esp
080daa45 +0x0be2:  mov    0x8(%ebp),%ebx
080daa48 +0x0be5:  mov    0xc(%ebp),%eax
080daa4b +0x0be8:  add    $0x4,%eax
080daa4e +0x0beb:  mov    %eax,0x4(%esp)
080daa52 +0x0bef:  mov    %ebx,(%esp)
080daa55 +0x0bf2:  call   080db5c4 <+0x1761>
080daa5a +0x0bf7:  mov    %ebx,%eax
080daa5c +0x0bf9:  add    $0x14,%esp
080daa5f +0x0bfc:  pop    %ebx
080daa60 +0x0bfd:  pop    %ebp
080daa61 +0x0bfe:  ret    $0x4
080daa64 +0x0c01:  push   %ebp
080daa65 +0x0c02:  mov    %esp,%ebp
080daa67 +0x0c04:  push   %edi
080daa68 +0x0c05:  push   %esi
080daa69 +0x0c06:  push   %ebx
080daa6a +0x0c07:  sub    $0x1c,%esp
080daa6d +0x0c0a:  mov    &_ZN14GlobalInstanceI9GameWorldE3m_pE,%eax
080daa72 +0x0c0f:  test   %eax,%eax
080daa74 +0x0c11:  jne    080daaba <+0xc57>
080daa76 +0x0c13:  mov    &_ZN14GlobalInstanceI9GameWorldE3m_pE,%eax
080daa7b +0x0c18:  test   %eax,%eax
080daa7d +0x0c1a:  jne    080daabb <+0xc58>
080daa7f +0x0c1c:  movl   $0x1b0,(%esp)
080daa86 +0x0c23:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080daa8b +0x0c28:  mov    %eax,%ebx
080daa8d +0x0c2a:  mov    %ebx,%eax
080daa8f +0x0c2c:  mov    %eax,(%esp)
080daa92 +0x0c2f:  call   086c3d4a <_ZN9GameWorldC1Ev>  ; GameWorld::GameWorld()
080daa97 +0x0c34:  jmp    080daab1 <+0xc4e>
080daa99 +0x0c36:  mov    %edx,%esi
080daa9b +0x0c38:  mov    %eax,%edi
080daa9d +0x0c3a:  mov    %ebx,(%esp)
080daaa0 +0x0c3d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080daaa5 +0x0c42:  mov    %edi,%eax
080daaa7 +0x0c44:  mov    %esi,%edx
080daaa9 +0x0c46:  mov    %eax,(%esp)
080daaac +0x0c49:  call   08ae3750 <_Unwind_Resume>
080daab1 +0x0c4e:  mov    %ebx,%eax
080daab3 +0x0c50:  mov    %eax,&_ZN14GlobalInstanceI9GameWorldE3m_pE
080daab8 +0x0c55:  jmp    080daabb <+0xc58>
080daaba +0x0c57:  nop
080daabb +0x0c58:  add    $0x1c,%esp
080daabe +0x0c5b:  pop    %ebx
080daabf +0x0c5c:  pop    %esi
080daac0 +0x0c5d:  pop    %edi
080daac1 +0x0c5e:  pop    %ebp
080daac2 +0x0c5f:  ret
080daac3 +0x0c60:  nop
080daac4 +0x0c61:  push   %ebp
080daac5 +0x0c62:  mov    %esp,%ebp
080daac7 +0x0c64:  push   %ebx
080daac8 +0x0c65:  sub    $0x14,%esp
080daacb +0x0c68:  mov    0xc(%ebp),%edx
080daace +0x0c6b:  mov    0x8(%ebp),%eax
080daad1 +0x0c6e:  mov    %edx,0x4(%esp)
080daad5 +0x0c72:  mov    %eax,(%esp)
080daad8 +0x0c75:  call   080db5d1 <+0x176e>
080daadd +0x0c7a:  mov    0xc(%ebp),%eax
080daae0 +0x0c7d:  lea    0x4(%eax),%edx
080daae3 +0x0c80:  mov    0x8(%ebp),%eax
080daae6 +0x0c83:  add    $0x4,%eax
080daae9 +0x0c86:  mov    %edx,0x4(%esp)
080daaed +0x0c8a:  mov    %eax,(%esp)
080daaf0 +0x0c8d:  call   080db5d1 <+0x176e>
080daaf5 +0x0c92:  mov    0xc(%ebp),%eax
080daaf8 +0x0c95:  lea    0x8(%eax),%edx
080daafb +0x0c98:  mov    0x8(%ebp),%eax
080daafe +0x0c9b:  add    $0x8,%eax
080dab01 +0x0c9e:  mov    %edx,0x4(%esp)
080dab05 +0x0ca2:  mov    %eax,(%esp)
080dab08 +0x0ca5:  call   080db5d1 <+0x176e>
080dab0d +0x0caa:  mov    0xc(%ebp),%eax
080dab10 +0x0cad:  mov    %eax,(%esp)
080dab13 +0x0cb0:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080dab18 +0x0cb5:  mov    %eax,%ebx
080dab1a +0x0cb7:  mov    0x8(%ebp),%eax
080dab1d +0x0cba:  mov    %eax,(%esp)
080dab20 +0x0cbd:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080dab25 +0x0cc2:  mov    %ebx,0x4(%esp)
080dab29 +0x0cc6:  mov    %eax,(%esp)
080dab2c +0x0cc9:  call   080db60d <+0x17aa>
080dab31 +0x0cce:  add    $0x14,%esp
080dab34 +0x0cd1:  pop    %ebx
080dab35 +0x0cd2:  pop    %ebp
080dab36 +0x0cd3:  ret
080dab37 +0x0cd4:  nop
080dab38 +0x0cd5:  push   %ebp
080dab39 +0x0cd6:  mov    %esp,%ebp
080dab3b +0x0cd8:  push   %esi
080dab3c +0x0cd9:  push   %ebx
080dab3d +0x0cda:  sub    $0x30,%esp
080dab40 +0x0cdd:  mov    0x8(%ebp),%ebx
080dab43 +0x0ce0:  mov    0xc(%ebp),%eax
080dab46 +0x0ce3:  mov    %eax,(%esp)
080dab49 +0x0ce6:  call   080db4d6 <+0x1673>
080dab4e +0x0ceb:  mov    %eax,%esi
080dab50 +0x0ced:  mov    0xc(%ebp),%eax
080dab53 +0x0cf0:  mov    %eax,(%esp)
080dab56 +0x0cf3:  call   080da8fe <+0xa9b>
080dab5b +0x0cf8:  lea    -0x10(%ebp),%edx
080dab5e +0x0cfb:  mov    0x10(%ebp),%ecx
080dab61 +0x0cfe:  mov    %ecx,0x10(%esp)
080dab65 +0x0d02:  mov    %esi,0xc(%esp)
080dab69 +0x0d06:  mov    %eax,0x8(%esp)
080dab6d +0x0d0a:  mov    0xc(%ebp),%eax
080dab70 +0x0d0d:  mov    %eax,0x4(%esp)
080dab74 +0x0d11:  mov    %edx,(%esp)
080dab77 +0x0d14:  call   080db612 <+0x17af>
080dab7c +0x0d19:  sub    $0x4,%esp
080dab7f +0x0d1c:  lea    -0xc(%ebp),%eax
080dab82 +0x0d1f:  mov    0xc(%ebp),%edx
080dab85 +0x0d22:  mov    %edx,0x4(%esp)
080dab89 +0x0d26:  mov    %eax,(%esp)
080dab8c +0x0d29:  call   080db68e <+0x182b>
080dab91 +0x0d2e:  sub    $0x4,%esp
080dab94 +0x0d31:  lea    -0xc(%ebp),%eax
080dab97 +0x0d34:  mov    %eax,0x4(%esp)
080dab9b +0x0d38:  lea    -0x10(%ebp),%eax
080dab9e +0x0d3b:  mov    %eax,(%esp)
080daba1 +0x0d3e:  call   080db6b4 <+0x1851>
080daba6 +0x0d43:  test   %al,%al
080daba8 +0x0d45:  jne    080dabcf <+0xd6c>
080dabaa +0x0d47:  mov    -0x10(%ebp),%eax
080dabad +0x0d4a:  mov    %eax,(%esp)
080dabb0 +0x0d4d:  call   080db5a2 <+0x173f>
080dabb5 +0x0d52:  mov    0xc(%ebp),%edx
080dabb8 +0x0d55:  mov    %eax,0x8(%esp)
080dabbc +0x0d59:  mov    0x10(%ebp),%eax
080dabbf +0x0d5c:  mov    %eax,0x4(%esp)
080dabc3 +0x0d60:  mov    %edx,(%esp)
080dabc6 +0x0d63:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080dabcb +0x0d68:  test   %al,%al
080dabcd +0x0d6a:  je     080dabe3 <+0xd80>
080dabcf +0x0d6c:  mov    0xc(%ebp),%eax
080dabd2 +0x0d6f:  mov    %eax,0x4(%esp)
080dabd6 +0x0d73:  mov    %ebx,(%esp)
080dabd9 +0x0d76:  call   080db68e <+0x182b>
080dabde +0x0d7b:  sub    $0x4,%esp
080dabe1 +0x0d7e:  jmp    080dabe8 <+0xd85>
080dabe3 +0x0d80:  mov    -0x10(%ebp),%eax
080dabe6 +0x0d83:  mov    %eax,(%ebx)
080dabe8 +0x0d85:  mov    %ebx,%eax
080dabea +0x0d87:  lea    -0x8(%ebp),%esp
080dabed +0x0d8a:  add    $0x0,%esp
080dabf0 +0x0d8d:  pop    %ebx
080dabf1 +0x0d8e:  pop    %esi
080dabf2 +0x0d8f:  pop    %ebp
080dabf3 +0x0d90:  ret    $0x4
080dabf6 +0x0d93:  push   %ebp
080dabf7 +0x0d94:  mov    %esp,%ebp
080dabf9 +0x0d96:  mov    0xc(%ebp),%eax
080dabfc +0x0d99:  mov    (%eax),%edx
080dabfe +0x0d9b:  mov    0x8(%ebp),%eax
080dac01 +0x0d9e:  mov    %edx,(%eax)
080dac03 +0x0da0:  pop    %ebp
080dac04 +0x0da1:  ret
080dac05 +0x0da2:  nop
080dac06 +0x0da3:  push   %ebp
080dac07 +0x0da4:  mov    %esp,%ebp
080dac09 +0x0da6:  push   %esi
080dac0a +0x0da7:  push   %ebx
080dac0b +0x0da8:  sub    $0x50,%esp
080dac0e +0x0dab:  mov    0x8(%ebp),%ebx
080dac11 +0x0dae:  mov    0xc(%ebp),%eax
080dac14 +0x0db1:  mov    %eax,(%esp)
080dac17 +0x0db4:  call   080da8fe <+0xa9b>
080dac1c +0x0db9:  mov    %eax,-0x14(%ebp)
080dac1f +0x0dbc:  mov    0xc(%ebp),%eax
080dac22 +0x0dbf:  mov    %eax,(%esp)
080dac25 +0x0dc2:  call   080db4d6 <+0x1673>
080dac2a +0x0dc7:  mov    %eax,-0x10(%ebp)
080dac2d +0x0dca:  movb   $0x1,-0x9(%ebp)
080dac31 +0x0dce:  jmp    080dac8f <+0xe2c>
080dac33 +0x0dd0:  mov    -0x14(%ebp),%eax
080dac36 +0x0dd3:  mov    %eax,-0x10(%ebp)
080dac39 +0x0dd6:  mov    -0x14(%ebp),%eax
080dac3c +0x0dd9:  mov    %eax,(%esp)
080dac3f +0x0ddc:  call   080db6d0 <+0x186d>
080dac44 +0x0de1:  mov    %eax,%esi
080dac46 +0x0de3:  mov    0x10(%ebp),%eax
080dac49 +0x0de6:  mov    %eax,0x4(%esp)
080dac4d +0x0dea:  lea    -0x2d(%ebp),%eax
080dac50 +0x0ded:  mov    %eax,(%esp)
080dac53 +0x0df0:  call   080db6c8 <+0x1865>
080dac58 +0x0df5:  mov    0xc(%ebp),%edx
080dac5b +0x0df8:  mov    %esi,0x8(%esp)
080dac5f +0x0dfc:  mov    %eax,0x4(%esp)
080dac63 +0x0e00:  mov    %edx,(%esp)
080dac66 +0x0e03:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080dac6b +0x0e08:  mov    %al,-0x9(%ebp)
080dac6e +0x0e0b:  cmpb   $0x0,-0x9(%ebp)
080dac72 +0x0e0f:  je     080dac81 <+0xe1e>
080dac74 +0x0e11:  mov    -0x14(%ebp),%eax
080dac77 +0x0e14:  mov    %eax,(%esp)
080dac7a +0x0e17:  call   080db496 <+0x1633>
080dac7f +0x0e1c:  jmp    080dac8c <+0xe29>
080dac81 +0x0e1e:  mov    -0x14(%ebp),%eax
080dac84 +0x0e21:  mov    %eax,(%esp)
080dac87 +0x0e24:  call   080db48b <+0x1628>
080dac8c +0x0e29:  mov    %eax,-0x14(%ebp)
080dac8f +0x0e2c:  cmpl   $0x0,-0x14(%ebp)
080dac93 +0x0e30:  setne  %al
080dac96 +0x0e33:  test   %al,%al
080dac98 +0x0e35:  jne    080dac33 <+0xdd0>
080dac9a +0x0e37:  mov    -0x10(%ebp),%eax
080dac9d +0x0e3a:  mov    %eax,0x4(%esp)
080daca1 +0x0e3e:  lea    -0x34(%ebp),%eax
080daca4 +0x0e41:  mov    %eax,(%esp)
080daca7 +0x0e44:  call   080db6f2 <+0x188f>
080dacac +0x0e49:  cmpb   $0x0,-0x9(%ebp)
080dacb0 +0x0e4d:  je     080dad31 <+0xece>
080dacb2 +0x0e4f:  lea    -0x2c(%ebp),%eax
080dacb5 +0x0e52:  mov    0xc(%ebp),%edx
080dacb8 +0x0e55:  mov    %edx,0x4(%esp)
080dacbc +0x0e59:  mov    %eax,(%esp)
080dacbf +0x0e5c:  call   080db700 <+0x189d>
080dacc4 +0x0e61:  sub    $0x4,%esp
080dacc7 +0x0e64:  lea    -0x2c(%ebp),%eax
080dacca +0x0e67:  mov    %eax,0x4(%esp)
080dacce +0x0e6b:  lea    -0x34(%ebp),%eax
080dacd1 +0x0e6e:  mov    %eax,(%esp)
080dacd4 +0x0e71:  call   080db6b4 <+0x1851>
080dacd9 +0x0e76:  test   %al,%al
080dacdb +0x0e78:  je     080dad26 <+0xec3>
080dacdd +0x0e7a:  movb   $0x1,-0x25(%ebp)
080dace1 +0x0e7e:  mov    -0x10(%ebp),%ecx
080dace4 +0x0e81:  mov    -0x14(%ebp),%edx
080dace7 +0x0e84:  lea    -0x24(%ebp),%eax
080dacea +0x0e87:  mov    0x10(%ebp),%esi
080daced +0x0e8a:  mov    %esi,0x10(%esp)
080dacf1 +0x0e8e:  mov    %ecx,0xc(%esp)
080dacf5 +0x0e92:  mov    %edx,0x8(%esp)
080dacf9 +0x0e96:  mov    0xc(%ebp),%edx
080dacfc +0x0e99:  mov    %edx,0x4(%esp)
080dad00 +0x0e9d:  mov    %eax,(%esp)
080dad03 +0x0ea0:  call   080db726 <+0x18c3>
080dad08 +0x0ea5:  sub    $0x4,%esp
080dad0b +0x0ea8:  lea    -0x25(%ebp),%eax
080dad0e +0x0eab:  mov    %eax,0x8(%esp)
080dad12 +0x0eaf:  lea    -0x24(%ebp),%eax
080dad15 +0x0eb2:  mov    %eax,0x4(%esp)
080dad19 +0x0eb6:  mov    %ebx,(%esp)
080dad1c +0x0eb9:  call   080db7ee <+0x198b>
080dad21 +0x0ebe:  jmp    080dadc7 <+0xf64>
080dad26 +0x0ec3:  lea    -0x34(%ebp),%eax
080dad29 +0x0ec6:  mov    %eax,(%esp)
080dad2c +0x0ec9:  call   080db81c <+0x19b9>
080dad31 +0x0ece:  mov    0x10(%ebp),%eax
080dad34 +0x0ed1:  mov    %eax,0x4(%esp)
080dad38 +0x0ed5:  lea    -0x1e(%ebp),%eax
080dad3b +0x0ed8:  mov    %eax,(%esp)
080dad3e +0x0edb:  call   080db6c8 <+0x1865>
080dad43 +0x0ee0:  mov    %eax,%esi
080dad45 +0x0ee2:  mov    -0x34(%ebp),%eax
080dad48 +0x0ee5:  mov    %eax,(%esp)
080dad4b +0x0ee8:  call   080db5a2 <+0x173f>
080dad50 +0x0eed:  mov    0xc(%ebp),%edx
080dad53 +0x0ef0:  mov    %esi,0x8(%esp)
080dad57 +0x0ef4:  mov    %eax,0x4(%esp)
080dad5b +0x0ef8:  mov    %edx,(%esp)
080dad5e +0x0efb:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080dad63 +0x0f00:  test   %al,%al
080dad65 +0x0f02:  je     080dadad <+0xf4a>
080dad67 +0x0f04:  movb   $0x1,-0x1d(%ebp)
080dad6b +0x0f08:  mov    -0x10(%ebp),%ecx
080dad6e +0x0f0b:  mov    -0x14(%ebp),%edx
080dad71 +0x0f0e:  lea    -0x1c(%ebp),%eax
080dad74 +0x0f11:  mov    0x10(%ebp),%esi
080dad77 +0x0f14:  mov    %esi,0x10(%esp)
080dad7b +0x0f18:  mov    %ecx,0xc(%esp)
080dad7f +0x0f1c:  mov    %edx,0x8(%esp)
080dad83 +0x0f20:  mov    0xc(%ebp),%edx
080dad86 +0x0f23:  mov    %edx,0x4(%esp)
080dad8a +0x0f27:  mov    %eax,(%esp)
080dad8d +0x0f2a:  call   080db726 <+0x18c3>
080dad92 +0x0f2f:  sub    $0x4,%esp
080dad95 +0x0f32:  lea    -0x1d(%ebp),%eax
080dad98 +0x0f35:  mov    %eax,0x8(%esp)
080dad9c +0x0f39:  lea    -0x1c(%ebp),%eax
080dad9f +0x0f3c:  mov    %eax,0x4(%esp)
080dada3 +0x0f40:  mov    %ebx,(%esp)
080dada6 +0x0f43:  call   080db7ee <+0x198b>
080dadab +0x0f48:  jmp    080dadc7 <+0xf64>
080dadad +0x0f4a:  movb   $0x0,-0x15(%ebp)
080dadb1 +0x0f4e:  lea    -0x15(%ebp),%eax
080dadb4 +0x0f51:  mov    %eax,0x8(%esp)
080dadb8 +0x0f55:  lea    -0x34(%ebp),%eax
080dadbb +0x0f58:  mov    %eax,0x4(%esp)
080dadbf +0x0f5c:  mov    %ebx,(%esp)
080dadc2 +0x0f5f:  call   080db83a <+0x19d7>
080dadc7 +0x0f64:  mov    %ebx,%eax
080dadc9 +0x0f66:  lea    -0x8(%ebp),%esp
080dadcc +0x0f69:  add    $0x0,%esp
080dadcf +0x0f6c:  pop    %ebx
080dadd0 +0x0f6d:  pop    %esi
080dadd1 +0x0f6e:  pop    %ebp
080dadd2 +0x0f6f:  ret    $0x4
080dadd5 +0x0f72:  nop
080dadd6 +0x0f73:  push   %ebp
080dadd7 +0x0f74:  mov    %esp,%ebp
080dadd9 +0x0f76:  sub    $0x18,%esp
080daddc +0x0f79:  mov    0xc(%ebp),%eax
080daddf +0x0f7c:  mov    %eax,(%esp)
080dade2 +0x0f7f:  call   080db868 <+0x1a05>
080dade7 +0x0f84:  mov    0x8(%ebp),%edx
080dadea +0x0f87:  mov    %eax,0x4(%esp)
080dadee +0x0f8b:  mov    %edx,(%esp)
080dadf1 +0x0f8e:  call   080dabf6 <+0xd93>
080dadf6 +0x0f93:  mov    0x10(%ebp),%eax
080dadf9 +0x0f96:  mov    %eax,(%esp)
080dadfc +0x0f99:  call   080db505 <+0x16a2>
080dae01 +0x0f9e:  movzbl (%eax),%edx
080dae04 +0x0fa1:  mov    0x8(%ebp),%eax
080dae07 +0x0fa4:  mov    %dl,0x4(%eax)
080dae0a +0x0fa7:  leave
080dae0b +0x0fa8:  ret
080dae0c +0x0fa9:  push   %ebp
080dae0d +0x0faa:  mov    %esp,%ebp
080dae0f +0x0fac:  sub    $0x18,%esp
080dae12 +0x0faf:  mov    0x8(%ebp),%eax
080dae15 +0x0fb2:  mov    %eax,(%esp)
080dae18 +0x0fb5:  call   080db870 <+0x1a0d>
080dae1d +0x0fba:  leave
080dae1e +0x0fbb:  ret
080dae1f +0x0fbc:  nop
080dae20 +0x0fbd:  push   %ebp
080dae21 +0x0fbe:  mov    %esp,%ebp
080dae23 +0x0fc0:  sub    $0x28,%esp
080dae26 +0x0fc3:  jmp    080dae68 <+0x1005>
080dae28 +0x0fc5:  mov    0xc(%ebp),%eax
080dae2b +0x0fc8:  mov    %eax,(%esp)
080dae2e +0x0fcb:  call   080db8c0 <+0x1a5d>
080dae33 +0x0fd0:  mov    %eax,0x4(%esp)
080dae37 +0x0fd4:  mov    0x8(%ebp),%eax
080dae3a +0x0fd7:  mov    %eax,(%esp)
080dae3d +0x0fda:  call   080dae20 <+0xfbd>
080dae42 +0x0fdf:  mov    0xc(%ebp),%eax
080dae45 +0x0fe2:  mov    %eax,(%esp)
080dae48 +0x0fe5:  call   080db8cb <+0x1a68>
080dae4d +0x0fea:  mov    %eax,-0xc(%ebp)
080dae50 +0x0fed:  mov    0xc(%ebp),%eax
080dae53 +0x0ff0:  mov    %eax,0x4(%esp)
080dae57 +0x0ff4:  mov    0x8(%ebp),%eax
080dae5a +0x0ff7:  mov    %eax,(%esp)
080dae5d +0x0ffa:  call   080db8d6 <+0x1a73>
080dae62 +0x0fff:  mov    -0xc(%ebp),%eax
080dae65 +0x1002:  mov    %eax,0xc(%ebp)
080dae68 +0x1005:  cmpl   $0x0,0xc(%ebp)
080dae6c +0x1009:  setne  %al
080dae6f +0x100c:  test   %al,%al
080dae71 +0x100e:  jne    080dae28 <+0xfc5>
080dae73 +0x1010:  leave
080dae74 +0x1011:  ret
080dae75 +0x1012:  nop
080dae76 +0x1013:  push   %ebp
080dae77 +0x1014:  mov    %esp,%ebp
080dae79 +0x1016:  mov    0x8(%ebp),%eax
080dae7c +0x1019:  mov    0x8(%eax),%eax
080dae7f +0x101c:  pop    %ebp
080dae80 +0x101d:  ret
080dae81 +0x101e:  nop
080dae82 +0x101f:  push   %ebp
080dae83 +0x1020:  mov    %esp,%ebp
080dae85 +0x1022:  sub    $0x18,%esp
080dae88 +0x1025:  mov    0xc(%ebp),%eax
080dae8b +0x1028:  mov    %eax,(%esp)
080dae8e +0x102b:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
080dae93 +0x1030:  mov    (%eax),%edx
080dae95 +0x1032:  mov    0x8(%ebp),%eax
080dae98 +0x1035:  mov    %edx,(%eax)
080dae9a +0x1037:  mov    0x10(%ebp),%eax
080dae9d +0x103a:  mov    %eax,(%esp)
080daea0 +0x103d:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
080daea5 +0x1042:  mov    (%eax),%edx
080daea7 +0x1044:  mov    0x8(%ebp),%eax
080daeaa +0x1047:  mov    %edx,0x4(%eax)
080daead +0x104a:  leave
080daeae +0x104b:  ret
080daeaf +0x104c:  nop
080daeb0 +0x104d:  push   %ebp
080daeb1 +0x104e:  mov    %esp,%ebp
080daeb3 +0x1050:  push   %esi
080daeb4 +0x1051:  push   %ebx
080daeb5 +0x1052:  sub    $0x30,%esp
080daeb8 +0x1055:  mov    0x8(%ebp),%esi
080daebb +0x1058:  mov    0xc(%ebp),%eax
080daebe +0x105b:  mov    %eax,(%esp)
080daec1 +0x105e:  call   080dae76 <+0x1013>
080daec6 +0x1063:  mov    %eax,-0x10(%ebp)
080daec9 +0x1066:  mov    0xc(%ebp),%eax
080daecc +0x1069:  mov    %eax,(%esp)
080daecf +0x106c:  call   080db90a <+0x1aa7>
080daed4 +0x1071:  mov    %eax,-0xc(%ebp)
080daed7 +0x1074:  jmp    080daf30 <+0x10cd>
080daed9 +0x1076:  mov    -0x10(%ebp),%eax
080daedc +0x1079:  mov    %eax,-0xc(%ebp)
080daedf +0x107c:  mov    -0x10(%ebp),%eax
080daee2 +0x107f:  mov    %eax,(%esp)
080daee5 +0x1082:  call   080db915 <+0x1ab2>
080daeea +0x1087:  mov    %eax,%ebx
080daeec +0x1089:  mov    0x10(%ebp),%eax
080daeef +0x108c:  mov    %eax,0x4(%esp)
080daef3 +0x1090:  lea    -0x11(%ebp),%eax
080daef6 +0x1093:  mov    %eax,(%esp)
080daef9 +0x1096:  call   080c7892 <_GLOBAL__I_g_ServerString_+0xdfd>  ; global constructors keyed to g_ServerString_+0xdfd
080daefe +0x109b:  mov    0xc(%ebp),%edx
080daf01 +0x109e:  mov    %ebx,0x8(%esp)
080daf05 +0x10a2:  mov    %eax,0x4(%esp)
080daf09 +0x10a6:  mov    %edx,(%esp)
080daf0c +0x10a9:  call   080db938 <+0x1ad5>
080daf11 +0x10ae:  test   %al,%al
080daf13 +0x10b0:  je     080daf22 <+0x10bf>
080daf15 +0x10b2:  mov    -0x10(%ebp),%eax
080daf18 +0x10b5:  mov    %eax,(%esp)
080daf1b +0x10b8:  call   080db8cb <+0x1a68>
080daf20 +0x10bd:  jmp    080daf2d <+0x10ca>
080daf22 +0x10bf:  mov    -0x10(%ebp),%eax
080daf25 +0x10c2:  mov    %eax,(%esp)
080daf28 +0x10c5:  call   080db8c0 <+0x1a5d>
080daf2d +0x10ca:  mov    %eax,-0x10(%ebp)
080daf30 +0x10cd:  cmpl   $0x0,-0x10(%ebp)
080daf34 +0x10d1:  setne  %al
080daf37 +0x10d4:  test   %al,%al
080daf39 +0x10d6:  jne    080daed9 <+0x1076>
080daf3b +0x10d8:  mov    -0xc(%ebp),%edx
080daf3e +0x10db:  mov    -0x10(%ebp),%eax
080daf41 +0x10de:  mov    0x10(%ebp),%ecx
080daf44 +0x10e1:  mov    %ecx,0x10(%esp)
080daf48 +0x10e5:  mov    %edx,0xc(%esp)
080daf4c +0x10e9:  mov    %eax,0x8(%esp)
080daf50 +0x10ed:  mov    0xc(%ebp),%eax
080daf53 +0x10f0:  mov    %eax,0x4(%esp)
080daf57 +0x10f4:  mov    %esi,(%esp)
080daf5a +0x10f7:  call   080db94c <+0x1ae9>
080daf5f +0x10fc:  sub    $0x4,%esp
080daf62 +0x10ff:  mov    %esi,%eax
080daf64 +0x1101:  lea    -0x8(%ebp),%esp
080daf67 +0x1104:  add    $0x0,%esp
080daf6a +0x1107:  pop    %ebx
080daf6b +0x1108:  pop    %esi
080daf6c +0x1109:  pop    %ebp
080daf6d +0x110a:  ret    $0x4
080daf70 +0x110d:  push   %ebp
080daf71 +0x110e:  mov    %esp,%ebp
080daf73 +0x1110:  push   %ebx
080daf74 +0x1111:  sub    $0x14,%esp
080daf77 +0x1114:  mov    0x8(%ebp),%ebx
080daf7a +0x1117:  mov    0xc(%ebp),%eax
080daf7d +0x111a:  mov    0xc(%eax),%eax
080daf80 +0x111d:  mov    %eax,0x4(%esp)
080daf84 +0x1121:  mov    %ebx,(%esp)
080daf87 +0x1124:  call   080c78bc <_GLOBAL__I_g_ServerString_+0xe27>  ; global constructors keyed to g_ServerString_+0xe27
080daf8c +0x1129:  mov    %ebx,%eax
080daf8e +0x112b:  add    $0x14,%esp
080daf91 +0x112e:  pop    %ebx
080daf92 +0x112f:  pop    %ebp
080daf93 +0x1130:  ret    $0x4
080daf96 +0x1133:  push   %ebp
080daf97 +0x1134:  mov    %esp,%ebp
080daf99 +0x1136:  push   %ebx
080daf9a +0x1137:  sub    $0x14,%esp
080daf9d +0x113a:  mov    0x8(%ebp),%ebx
080dafa0 +0x113d:  mov    0xc(%ebp),%eax
080dafa3 +0x1140:  add    $0x4,%eax
080dafa6 +0x1143:  mov    %eax,0x4(%esp)
080dafaa +0x1147:  mov    %ebx,(%esp)
080dafad +0x114a:  call   080c78bc <_GLOBAL__I_g_ServerString_+0xe27>  ; global constructors keyed to g_ServerString_+0xe27
080dafb2 +0x114f:  mov    %ebx,%eax
080dafb4 +0x1151:  add    $0x14,%esp
080dafb7 +0x1154:  pop    %ebx
080dafb8 +0x1155:  pop    %ebp
080dafb9 +0x1156:  ret    $0x4
080dafbc +0x1159:  push   %ebp
080dafbd +0x115a:  mov    %esp,%ebp
080dafbf +0x115c:  sub    $0x18,%esp
080dafc2 +0x115f:  mov    0x8(%ebp),%eax
080dafc5 +0x1162:  mov    %eax,(%esp)
080dafc8 +0x1165:  call   080dba44 <+0x1be1>
080dafcd +0x116a:  leave
080dafce +0x116b:  ret
080dafcf +0x116c:  nop
080dafd0 +0x116d:  push   %ebp
080dafd1 +0x116e:  mov    %esp,%ebp
080dafd3 +0x1170:  sub    $0x18,%esp
080dafd6 +0x1173:  mov    0x8(%ebp),%eax
080dafd9 +0x1176:  mov    %eax,(%esp)
080dafdc +0x1179:  call   080dba14 <+0x1bb1>
080dafe1 +0x117e:  leave
080dafe2 +0x117f:  ret
080dafe3 +0x1180:  nop
080dafe4 +0x1181:  push   %ebp
080dafe5 +0x1182:  mov    %esp,%ebp
080dafe7 +0x1184:  push   %esi
080dafe8 +0x1185:  push   %ebx
080dafe9 +0x1186:  sub    $0x10,%esp
080dafec +0x1189:  mov    0x8(%ebp),%eax
080dafef +0x118c:  mov    0x8(%eax),%eax
080daff2 +0x118f:  mov    %eax,%edx
080daff4 +0x1191:  mov    0x8(%ebp),%eax
080daff7 +0x1194:  mov    (%eax),%eax
080daff9 +0x1196:  mov    %edx,%ecx
080daffb +0x1198:  sub    %eax,%ecx
080daffd +0x119a:  mov    %ecx,%eax
080dafff +0x119c:  sar    $0x3,%eax
080db002 +0x119f:  imul   $0xcccccccd,%eax,%eax
080db008 +0x11a5:  mov    %eax,%edx
080db00a +0x11a7:  mov    0x8(%ebp),%eax
080db00d +0x11aa:  mov    (%eax),%eax
080db00f +0x11ac:  mov    %edx,0x8(%esp)
080db013 +0x11b0:  mov    %eax,0x4(%esp)
080db017 +0x11b4:  mov    0x8(%ebp),%eax
080db01a +0x11b7:  mov    %eax,(%esp)
080db01d +0x11ba:  call   080dba58 <+0x1bf5>
080db022 +0x11bf:  jmp    080db03f <+0x11dc>
080db024 +0x11c1:  mov    %edx,%ebx
080db026 +0x11c3:  mov    %eax,%esi
080db028 +0x11c5:  mov    0x8(%ebp),%eax
080db02b +0x11c8:  mov    %eax,(%esp)
080db02e +0x11cb:  call   080dafbc <+0x1159>
080db033 +0x11d0:  mov    %esi,%eax
080db035 +0x11d2:  mov    %ebx,%edx
080db037 +0x11d4:  mov    %eax,(%esp)
080db03a +0x11d7:  call   08ae3750 <_Unwind_Resume>
080db03f +0x11dc:  mov    0x8(%ebp),%eax
080db042 +0x11df:  mov    %eax,(%esp)
080db045 +0x11e2:  call   080dafbc <+0x1159>
080db04a +0x11e7:  add    $0x10,%esp
080db04d +0x11ea:  pop    %ebx
080db04e +0x11eb:  pop    %esi
080db04f +0x11ec:  pop    %ebp
080db050 +0x11ed:  ret
080db051 +0x11ee:  nop
080db052 +0x11ef:  push   %ebp
080db053 +0x11f0:  mov    %esp,%ebp
080db055 +0x11f2:  mov    0x8(%ebp),%eax
080db058 +0x11f5:  pop    %ebp
080db059 +0x11f6:  ret
080db05a +0x11f7:  push   %ebp
080db05b +0x11f8:  mov    %esp,%ebp
080db05d +0x11fa:  sub    $0x18,%esp
080db060 +0x11fd:  mov    0xc(%ebp),%eax
080db063 +0x1200:  mov    %eax,0x4(%esp)
080db067 +0x1204:  mov    0x8(%ebp),%eax
080db06a +0x1207:  mov    %eax,(%esp)
080db06d +0x120a:  call   080dba7f <+0x1c1c>
080db072 +0x120f:  leave
080db073 +0x1210:  ret
080db074 +0x1211:  push   %ebp
080db075 +0x1212:  mov    %esp,%ebp
080db077 +0x1214:  sub    $0x18,%esp
080db07a +0x1217:  mov    0x8(%ebp),%eax
080db07d +0x121a:  mov    %eax,(%esp)
080db080 +0x121d:  call   080db052 <+0x11ef>
080db085 +0x1222:  mov    0x8(%ebp),%edx
080db088 +0x1225:  mov    0x4(%edx),%edx
080db08b +0x1228:  mov    %eax,0x8(%esp)
080db08f +0x122c:  mov    %edx,0x4(%esp)
080db093 +0x1230:  mov    0xc(%ebp),%eax
080db096 +0x1233:  mov    %eax,(%esp)
080db099 +0x1236:  call   080db05a <+0x11f7>
080db09e +0x123b:  mov    0x8(%ebp),%eax
080db0a1 +0x123e:  mov    0xc(%ebp),%edx
080db0a4 +0x1241:  mov    %edx,0x4(%eax)
080db0a7 +0x1244:  leave
080db0a8 +0x1245:  ret
080db0a9 +0x1246:  nop
080db0aa +0x1247:  push   %ebp
080db0ab +0x1248:  mov    %esp,%ebp
080db0ad +0x124a:  sub    $0x18,%esp
080db0b0 +0x124d:  mov    0xc(%ebp),%eax
080db0b3 +0x1250:  mov    %eax,0x4(%esp)
080db0b7 +0x1254:  movl   $0x28,(%esp)
080db0be +0x125b:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080db0c3 +0x1260:  mov    %eax,%edx
080db0c5 +0x1262:  test   %edx,%edx
080db0c7 +0x1264:  je     080db106 <+0x12a3>
080db0c9 +0x1266:  mov    0x10(%ebp),%edx
080db0cc +0x1269:  mov    (%edx),%ecx
080db0ce +0x126b:  mov    %ecx,(%eax)
080db0d0 +0x126d:  mov    0x4(%edx),%ecx
080db0d3 +0x1270:  mov    %ecx,0x4(%eax)
080db0d6 +0x1273:  mov    0x8(%edx),%ecx
080db0d9 +0x1276:  mov    %ecx,0x8(%eax)
080db0dc +0x1279:  mov    0xc(%edx),%ecx
080db0df +0x127c:  mov    %ecx,0xc(%eax)
080db0e2 +0x127f:  mov    0x10(%edx),%ecx
080db0e5 +0x1282:  mov    %ecx,0x10(%eax)
080db0e8 +0x1285:  mov    0x14(%edx),%ecx
080db0eb +0x1288:  mov    %ecx,0x14(%eax)
080db0ee +0x128b:  mov    0x18(%edx),%ecx
080db0f1 +0x128e:  mov    %ecx,0x18(%eax)
080db0f4 +0x1291:  mov    0x1c(%edx),%ecx
080db0f7 +0x1294:  mov    %ecx,0x1c(%eax)
080db0fa +0x1297:  mov    0x20(%edx),%ecx
080db0fd +0x129a:  mov    %ecx,0x20(%eax)
080db100 +0x129d:  mov    0x24(%edx),%edx
080db103 +0x12a0:  mov    %edx,0x24(%eax)
080db106 +0x12a3:  leave
080db107 +0x12a4:  ret
080db108 +0x12a5:  push   %ebp
080db109 +0x12a6:  mov    %esp,%ebp
080db10b +0x12a8:  push   %ebx
080db10c +0x12a9:  sub    $0x14,%esp
080db10f +0x12ac:  mov    0x8(%ebp),%ebx
080db112 +0x12af:  mov    0xc(%ebp),%eax
080db115 +0x12b2:  add    $0x4,%eax
080db118 +0x12b5:  mov    %eax,0x4(%esp)
080db11c +0x12b9:  mov    %ebx,(%esp)
080db11f +0x12bc:  call   080dba9a <+0x1c37>
080db124 +0x12c1:  mov    %ebx,%eax
080db126 +0x12c3:  add    $0x14,%esp
080db129 +0x12c6:  pop    %ebx
080db12a +0x12c7:  pop    %ebp
080db12b +0x12c8:  ret    $0x4
080db12e +0x12cb:  push   %ebp
080db12f +0x12cc:  mov    %esp,%ebp
080db131 +0x12ce:  push   %esi
080db132 +0x12cf:  push   %ebx
080db133 +0x12d0:  sub    $0x30,%esp
080db136 +0x12d3:  mov    0x8(%ebp),%eax
080db139 +0x12d6:  mov    0x4(%eax),%edx
080db13c +0x12d9:  mov    0x8(%ebp),%eax
080db13f +0x12dc:  mov    0x8(%eax),%eax
080db142 +0x12df:  cmp    %eax,%edx
080db144 +0x12e1:  je     080db209 <+0x13a6>
080db14a +0x12e7:  mov    0x8(%ebp),%eax
080db14d +0x12ea:  mov    0x4(%eax),%eax
080db150 +0x12ed:  sub    $0x28,%eax
080db153 +0x12f0:  mov    %eax,(%esp)
080db156 +0x12f3:  call   080dbaa9 <+0x1c46>
080db15b +0x12f8:  mov    0x8(%ebp),%edx
080db15e +0x12fb:  mov    0x4(%edx),%ecx
080db161 +0x12fe:  mov    0x8(%ebp),%edx
080db164 +0x1301:  mov    %eax,0x8(%esp)
080db168 +0x1305:  mov    %ecx,0x4(%esp)
080db16c +0x1309:  mov    %edx,(%esp)
080db16f +0x130c:  call   080dbab2 <+0x1c4f>
080db174 +0x1311:  mov    0x8(%ebp),%eax
080db177 +0x1314:  mov    0x4(%eax),%eax
080db17a +0x1317:  lea    0x28(%eax),%edx
080db17d +0x131a:  mov    0x8(%ebp),%eax
080db180 +0x131d:  mov    %edx,0x4(%eax)
080db183 +0x1320:  mov    0x8(%ebp),%eax
080db186 +0x1323:  mov    0x4(%eax),%eax
080db189 +0x1326:  lea    -0x28(%eax),%esi
080db18c +0x1329:  mov    0x8(%ebp),%eax
080db18f +0x132c:  mov    0x4(%eax),%eax
080db192 +0x132f:  lea    -0x50(%eax),%ebx
080db195 +0x1332:  lea    0xc(%ebp),%eax
080db198 +0x1335:  mov    %eax,(%esp)
080db19b +0x1338:  call   080dbb20 <+0x1cbd>
080db1a0 +0x133d:  mov    (%eax),%eax
080db1a2 +0x133f:  mov    %esi,0x8(%esp)
080db1a6 +0x1343:  mov    %ebx,0x4(%esp)
080db1aa +0x1347:  mov    %eax,(%esp)
080db1ad +0x134a:  call   080dbb28 <+0x1cc5>
080db1b2 +0x134f:  lea    0xc(%ebp),%eax
080db1b5 +0x1352:  mov    %eax,(%esp)
080db1b8 +0x1355:  call   080dbb68 <+0x1d05>
080db1bd +0x135a:  mov    %eax,%ebx
080db1bf +0x135c:  mov    0x10(%ebp),%eax
080db1c2 +0x135f:  mov    %eax,(%esp)
080db1c5 +0x1362:  call   080dbb60 <+0x1cfd>
080db1ca +0x1367:  mov    (%eax),%edx
080db1cc +0x1369:  mov    %edx,(%ebx)
080db1ce +0x136b:  mov    0x4(%eax),%edx
080db1d1 +0x136e:  mov    %edx,0x4(%ebx)
080db1d4 +0x1371:  mov    0x8(%eax),%edx
080db1d7 +0x1374:  mov    %edx,0x8(%ebx)
080db1da +0x1377:  mov    0xc(%eax),%edx
080db1dd +0x137a:  mov    %edx,0xc(%ebx)
080db1e0 +0x137d:  mov    0x10(%eax),%edx
080db1e3 +0x1380:  mov    %edx,0x10(%ebx)
080db1e6 +0x1383:  mov    0x14(%eax),%edx
080db1e9 +0x1386:  mov    %edx,0x14(%ebx)
080db1ec +0x1389:  mov    0x18(%eax),%edx
080db1ef +0x138c:  mov    %edx,0x18(%ebx)
080db1f2 +0x138f:  mov    0x1c(%eax),%edx
080db1f5 +0x1392:  mov    %edx,0x1c(%ebx)
080db1f8 +0x1395:  mov    0x20(%eax),%edx
080db1fb +0x1398:  mov    %edx,0x20(%ebx)
080db1fe +0x139b:  mov    0x24(%eax),%eax
080db201 +0x139e:  mov    %eax,0x24(%ebx)
080db204 +0x13a1:  jmp    080db42b <+0x15c8>
080db209 +0x13a6:  movl   $"vector::_M_insert_aux",0x8(%esp)
080db211 +0x13ae:  movl   $0x1,0x4(%esp)
080db219 +0x13b6:  mov    0x8(%ebp),%eax
080db21c +0x13b9:  mov    %eax,(%esp)
080db21f +0x13bc:  call   080dbb72 <+0x1d0f>
080db224 +0x13c1:  mov    %eax,-0x18(%ebp)
080db227 +0x13c4:  lea    -0x1c(%ebp),%eax
080db22a +0x13c7:  mov    0x8(%ebp),%edx
080db22d +0x13ca:  mov    %edx,0x4(%esp)
080db231 +0x13ce:  mov    %eax,(%esp)
080db234 +0x13d1:  call   080dbc18 <+0x1db5>
080db239 +0x13d6:  sub    $0x4,%esp
080db23c +0x13d9:  lea    -0x1c(%ebp),%eax
080db23f +0x13dc:  mov    %eax,0x4(%esp)
080db243 +0x13e0:  lea    0xc(%ebp),%eax
080db246 +0x13e3:  mov    %eax,(%esp)
080db249 +0x13e6:  call   080dbc3b <+0x1dd8>
080db24e +0x13eb:  mov    %eax,-0x14(%ebp)
080db251 +0x13ee:  mov    0x8(%ebp),%eax
080db254 +0x13f1:  mov    -0x18(%ebp),%edx
080db257 +0x13f4:  mov    %edx,0x4(%esp)
080db25b +0x13f8:  mov    %eax,(%esp)
080db25e +0x13fb:  call   080dbc74 <+0x1e11>
080db263 +0x1400:  mov    %eax,-0x10(%ebp)
080db266 +0x1403:  mov    -0x10(%ebp),%eax
080db269 +0x1406:  mov    %eax,-0xc(%ebp)
080db26c +0x1409:  mov    0x10(%ebp),%eax
080db26f +0x140c:  mov    %eax,(%esp)
080db272 +0x140f:  call   080dbb60 <+0x1cfd>
080db277 +0x1414:  mov    %eax,%ecx
080db279 +0x1416:  mov    -0x14(%ebp),%edx
080db27c +0x1419:  mov    %edx,%eax
080db27e +0x141b:  shl    $0x2,%eax
080db281 +0x141e:  add    %edx,%eax
080db283 +0x1420:  shl    $0x3,%eax
080db286 +0x1423:  mov    %eax,%edx
080db288 +0x1425:  add    -0x10(%ebp),%edx
080db28b +0x1428:  mov    0x8(%ebp),%eax
080db28e +0x142b:  mov    %ecx,0x8(%esp)
080db292 +0x142f:  mov    %edx,0x4(%esp)
080db296 +0x1433:  mov    %eax,(%esp)
080db299 +0x1436:  call   080db0aa <+0x1247>
080db29e +0x143b:  movl   $0x0,-0xc(%ebp)
080db2a5 +0x1442:  mov    0x8(%ebp),%eax
080db2a8 +0x1445:  mov    %eax,(%esp)
080db2ab +0x1448:  call   080db052 <+0x11ef>
080db2b0 +0x144d:  mov    %eax,%ebx
080db2b2 +0x144f:  lea    0xc(%ebp),%eax
080db2b5 +0x1452:  mov    %eax,(%esp)
080db2b8 +0x1455:  call   080dbb20 <+0x1cbd>
080db2bd +0x145a:  mov    (%eax),%edx
080db2bf +0x145c:  mov    0x8(%ebp),%eax
080db2c2 +0x145f:  mov    (%eax),%eax
080db2c4 +0x1461:  mov    %ebx,0xc(%esp)
080db2c8 +0x1465:  mov    -0x10(%ebp),%ecx
080db2cb +0x1468:  mov    %ecx,0x8(%esp)
080db2cf +0x146c:  mov    %edx,0x4(%esp)
080db2d3 +0x1470:  mov    %eax,(%esp)
080db2d6 +0x1473:  call   080dbca3 <+0x1e40>
080db2db +0x1478:  mov    %eax,-0xc(%ebp)
080db2de +0x147b:  addl   $0x28,-0xc(%ebp)
080db2e2 +0x147f:  mov    0x8(%ebp),%eax
080db2e5 +0x1482:  mov    %eax,(%esp)
080db2e8 +0x1485:  call   080db052 <+0x11ef>
080db2ed +0x148a:  mov    %eax,%ebx
080db2ef +0x148c:  mov    0x8(%ebp),%eax
080db2f2 +0x148f:  mov    0x4(%eax),%esi
080db2f5 +0x1492:  lea    0xc(%ebp),%eax
080db2f8 +0x1495:  mov    %eax,(%esp)
080db2fb +0x1498:  call   080dbb20 <+0x1cbd>
080db300 +0x149d:  mov    (%eax),%eax
080db302 +0x149f:  mov    %ebx,0xc(%esp)
080db306 +0x14a3:  mov    -0xc(%ebp),%edx
080db309 +0x14a6:  mov    %edx,0x8(%esp)
080db30d +0x14aa:  mov    %esi,0x4(%esp)
080db311 +0x14ae:  mov    %eax,(%esp)
080db314 +0x14b1:  call   080dbca3 <+0x1e40>
080db319 +0x14b6:  mov    %eax,-0xc(%ebp)
080db31c +0x14b9:  mov    0x8(%ebp),%eax
080db31f +0x14bc:  mov    %eax,(%esp)
080db322 +0x14bf:  call   080db052 <+0x11ef>
080db327 +0x14c4:  mov    0x8(%ebp),%edx
080db32a +0x14c7:  mov    0x4(%edx),%ecx
080db32d +0x14ca:  mov    0x8(%ebp),%edx
080db330 +0x14cd:  mov    (%edx),%edx
080db332 +0x14cf:  mov    %eax,0x8(%esp)
080db336 +0x14d3:  mov    %ecx,0x4(%esp)
080db33a +0x14d7:  mov    %edx,(%esp)
080db33d +0x14da:  call   080db05a <+0x11f7>
080db342 +0x14df:  mov    0x8(%ebp),%eax
080db345 +0x14e2:  mov    0x8(%eax),%eax
080db348 +0x14e5:  mov    %eax,%edx
080db34a +0x14e7:  mov    0x8(%ebp),%eax
080db34d +0x14ea:  mov    (%eax),%eax
080db34f +0x14ec:  mov    %edx,%ecx
080db351 +0x14ee:  sub    %eax,%ecx
080db353 +0x14f0:  mov    %ecx,%eax
080db355 +0x14f2:  sar    $0x3,%eax
080db358 +0x14f5:  imul   $0xcccccccd,%eax,%eax
080db35e +0x14fb:  mov    %eax,%ecx
080db360 +0x14fd:  mov    0x8(%ebp),%eax
080db363 +0x1500:  mov    (%eax),%edx
080db365 +0x1502:  mov    0x8(%ebp),%eax
080db368 +0x1505:  mov    %ecx,0x8(%esp)
080db36c +0x1509:  mov    %edx,0x4(%esp)
080db370 +0x150d:  mov    %eax,(%esp)
080db373 +0x1510:  call   080dba58 <+0x1bf5>
080db378 +0x1515:  mov    0x8(%ebp),%eax
080db37b +0x1518:  mov    -0x10(%ebp),%edx
080db37e +0x151b:  mov    %edx,(%eax)
080db380 +0x151d:  mov    0x8(%ebp),%eax
080db383 +0x1520:  mov    -0xc(%ebp),%edx
080db386 +0x1523:  mov    %edx,0x4(%eax)
080db389 +0x1526:  mov    -0x18(%ebp),%edx
080db38c +0x1529:  mov    %edx,%eax
080db38e +0x152b:  shl    $0x2,%eax
080db391 +0x152e:  add    %edx,%eax
080db393 +0x1530:  shl    $0x3,%eax
080db396 +0x1533:  mov    %eax,%edx
080db398 +0x1535:  add    -0x10(%ebp),%edx
080db39b +0x1538:  mov    0x8(%ebp),%eax
080db39e +0x153b:  mov    %edx,0x8(%eax)
080db3a1 +0x153e:  jmp    080db42b <+0x15c8>
080db3a6 +0x1543:  mov    %eax,(%esp)
080db3a9 +0x1546:  call   08725ce0 <__cxa_begin_catch>
080db3ae +0x154b:  cmpl   $0x0,-0xc(%ebp)
080db3b2 +0x154f:  jne    080db3d7 <+0x1574>
080db3b4 +0x1551:  mov    -0x14(%ebp),%edx
080db3b7 +0x1554:  mov    %edx,%eax
080db3b9 +0x1556:  shl    $0x2,%eax
080db3bc +0x1559:  add    %edx,%eax
080db3be +0x155b:  shl    $0x3,%eax
080db3c1 +0x155e:  mov    %eax,%edx
080db3c3 +0x1560:  add    -0x10(%ebp),%edx
080db3c6 +0x1563:  mov    0x8(%ebp),%eax
080db3c9 +0x1566:  mov    %edx,0x4(%esp)
080db3cd +0x156a:  mov    %eax,(%esp)
080db3d0 +0x156d:  call   080dbcf6 <+0x1e93>
080db3d5 +0x1572:  jmp    080db3f8 <+0x1595>
080db3d7 +0x1574:  mov    0x8(%ebp),%eax
080db3da +0x1577:  mov    %eax,(%esp)
080db3dd +0x157a:  call   080db052 <+0x11ef>
080db3e2 +0x157f:  mov    %eax,0x8(%esp)
080db3e6 +0x1583:  mov    -0xc(%ebp),%eax
080db3e9 +0x1586:  mov    %eax,0x4(%esp)
080db3ed +0x158a:  mov    -0x10(%ebp),%eax
080db3f0 +0x158d:  mov    %eax,(%esp)
080db3f3 +0x1590:  call   080db05a <+0x11f7>
080db3f8 +0x1595:  mov    0x8(%ebp),%eax
080db3fb +0x1598:  mov    -0x18(%ebp),%edx
080db3fe +0x159b:  mov    %edx,0x8(%esp)
080db402 +0x159f:  mov    -0x10(%ebp),%edx
080db405 +0x15a2:  mov    %edx,0x4(%esp)
080db409 +0x15a6:  mov    %eax,(%esp)
080db40c +0x15a9:  call   080dba58 <+0x1bf5>
080db411 +0x15ae:  call   08724be0 <__cxa_rethrow>
080db416 +0x15b3:  mov    %edx,%ebx
080db418 +0x15b5:  mov    %eax,%esi
080db41a +0x15b7:  call   08725c30 <__cxa_end_catch>
080db41f +0x15bc:  mov    %esi,%eax
080db421 +0x15be:  mov    %ebx,%edx
080db423 +0x15c0:  mov    %eax,(%esp)
080db426 +0x15c3:  call   08ae3750 <_Unwind_Resume>
080db42b +0x15c8:  lea    -0x8(%ebp),%esp
080db42e +0x15cb:  add    $0x0,%esp
080db431 +0x15ce:  pop    %ebx
080db432 +0x15cf:  pop    %esi
080db433 +0x15d0:  pop    %ebp
080db434 +0x15d1:  ret
080db435 +0x15d2:  nop
080db436 +0x15d3:  push   %ebp
080db437 +0x15d4:  mov    %esp,%ebp
080db439 +0x15d6:  sub    $0x18,%esp
080db43c +0x15d9:  mov    0x8(%ebp),%eax
080db43f +0x15dc:  mov    %eax,(%esp)
080db442 +0x15df:  call   080dbd0a <+0x1ea7>
080db447 +0x15e4:  mov    0x8(%ebp),%eax
080db44a +0x15e7:  movl   $0x0,0x4(%eax)
080db451 +0x15ee:  mov    0x8(%ebp),%eax
080db454 +0x15f1:  movl   $0x0,0x8(%eax)
080db45b +0x15f8:  mov    0x8(%ebp),%eax
080db45e +0x15fb:  movl   $0x0,0xc(%eax)
080db465 +0x1602:  mov    0x8(%ebp),%eax
080db468 +0x1605:  movl   $0x0,0x10(%eax)
080db46f +0x160c:  mov    0x8(%ebp),%eax
080db472 +0x160f:  movl   $0x0,0x14(%eax)
080db479 +0x1616:  mov    0x8(%ebp),%eax
080db47c +0x1619:  mov    %eax,(%esp)
080db47f +0x161c:  call   080dbd1e <+0x1ebb>
080db484 +0x1621:  leave
080db485 +0x1622:  ret
080db486 +0x1623:  push   %ebp
080db487 +0x1624:  mov    %esp,%ebp
080db489 +0x1626:  pop    %ebp
080db48a +0x1627:  ret
080db48b +0x1628:  push   %ebp
080db48c +0x1629:  mov    %esp,%ebp
080db48e +0x162b:  mov    0x8(%ebp),%eax
080db491 +0x162e:  mov    0xc(%eax),%eax
080db494 +0x1631:  pop    %ebp
080db495 +0x1632:  ret
080db496 +0x1633:  push   %ebp
080db497 +0x1634:  mov    %esp,%ebp
080db499 +0x1636:  mov    0x8(%ebp),%eax
080db49c +0x1639:  mov    0x8(%eax),%eax
080db49f +0x163c:  pop    %ebp
080db4a0 +0x163d:  ret
080db4a1 +0x163e:  nop
080db4a2 +0x163f:  push   %ebp
080db4a3 +0x1640:  mov    %esp,%ebp
080db4a5 +0x1642:  sub    $0x18,%esp
080db4a8 +0x1645:  mov    0x8(%ebp),%eax
080db4ab +0x1648:  mov    %eax,(%esp)
080db4ae +0x164b:  call   080dbd50 <+0x1eed>
080db4b3 +0x1650:  mov    0xc(%ebp),%edx
080db4b6 +0x1653:  mov    %edx,0x4(%esp)
080db4ba +0x1657:  mov    %eax,(%esp)
080db4bd +0x165a:  call   080dbd5e <+0x1efb>
080db4c2 +0x165f:  mov    0xc(%ebp),%eax
080db4c5 +0x1662:  mov    %eax,0x4(%esp)
080db4c9 +0x1666:  mov    0x8(%ebp),%eax
080db4cc +0x1669:  mov    %eax,(%esp)
080db4cf +0x166c:  call   080dbd72 <+0x1f0f>
080db4d4 +0x1671:  leave
080db4d5 +0x1672:  ret
080db4d6 +0x1673:  push   %ebp
080db4d7 +0x1674:  mov    %esp,%ebp
080db4d9 +0x1676:  mov    0x8(%ebp),%eax
080db4dc +0x1679:  add    $0x4,%eax
080db4df +0x167c:  pop    %ebp
080db4e0 +0x167d:  ret
080db4e1 +0x167e:  nop
080db4e2 +0x167f:  push   %ebp
080db4e3 +0x1680:  mov    %esp,%ebp
080db4e5 +0x1682:  mov    0x8(%ebp),%eax
080db4e8 +0x1685:  add    $0xc,%eax
080db4eb +0x1688:  pop    %ebp
080db4ec +0x1689:  ret
080db4ed +0x168a:  nop
080db4ee +0x168b:  push   %ebp
080db4ef +0x168c:  mov    %esp,%ebp
080db4f1 +0x168e:  mov    0x8(%ebp),%eax
080db4f4 +0x1691:  add    $0x8,%eax
080db4f7 +0x1694:  pop    %ebp
080db4f8 +0x1695:  ret
080db4f9 +0x1696:  nop
080db4fa +0x1697:  push   %ebp
080db4fb +0x1698:  mov    %esp,%ebp
080db4fd +0x169a:  mov    0x8(%ebp),%eax
080db500 +0x169d:  add    $0x10,%eax
080db503 +0x16a0:  pop    %ebp
080db504 +0x16a1:  ret
080db505 +0x16a2:  push   %ebp
080db506 +0x16a3:  mov    %esp,%ebp
080db508 +0x16a5:  mov    0x8(%ebp),%eax
080db50b +0x16a8:  pop    %ebp
080db50c +0x16a9:  ret
080db50d +0x16aa:  nop
080db50e +0x16ab:  push   %ebp
080db50f +0x16ac:  mov    %esp,%ebp
080db511 +0x16ae:  mov    0x8(%ebp),%eax
080db514 +0x16b1:  mov    0x8(%eax),%eax
080db517 +0x16b4:  pop    %ebp
080db518 +0x16b5:  ret
080db519 +0x16b6:  nop
080db51a +0x16b7:  push   %ebp
080db51b +0x16b8:  mov    %esp,%ebp
080db51d +0x16ba:  mov    0x8(%ebp),%eax
080db520 +0x16bd:  add    $0x4,%eax
080db523 +0x16c0:  pop    %ebp
080db524 +0x16c1:  ret
080db525 +0x16c2:  nop
080db526 +0x16c3:  push   %ebp
080db527 +0x16c4:  mov    %esp,%ebp
080db529 +0x16c6:  push   %ebx
080db52a +0x16c7:  sub    $0x14,%esp
080db52d +0x16ca:  mov    0x8(%ebp),%ebx
080db530 +0x16cd:  jmp    080db57e <+0x171b>
080db532 +0x16cf:  mov    0x10(%ebp),%eax
080db535 +0x16d2:  mov    %eax,(%esp)
080db538 +0x16d5:  call   080db6d0 <+0x186d>
080db53d +0x16da:  mov    0xc(%ebp),%edx
080db540 +0x16dd:  mov    0x18(%ebp),%ecx
080db543 +0x16e0:  mov    %ecx,0x8(%esp)
080db547 +0x16e4:  mov    %eax,0x4(%esp)
080db54b +0x16e8:  mov    %edx,(%esp)
080db54e +0x16eb:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080db553 +0x16f0:  xor    $0x1,%eax
080db556 +0x16f3:  test   %al,%al
080db558 +0x16f5:  je     080db570 <+0x170d>
080db55a +0x16f7:  mov    0x10(%ebp),%eax
080db55d +0x16fa:  mov    %eax,0x14(%ebp)
080db560 +0x16fd:  mov    0x10(%ebp),%eax
080db563 +0x1700:  mov    %eax,(%esp)
080db566 +0x1703:  call   080dbd94 <+0x1f31>
080db56b +0x1708:  mov    %eax,0x10(%ebp)
080db56e +0x170b:  jmp    080db57e <+0x171b>
080db570 +0x170d:  mov    0x10(%ebp),%eax
080db573 +0x1710:  mov    %eax,(%esp)
080db576 +0x1713:  call   080dbd9f <+0x1f3c>
080db57b +0x1718:  mov    %eax,0x10(%ebp)
080db57e +0x171b:  cmpl   $0x0,0x10(%ebp)
080db582 +0x171f:  setne  %al
080db585 +0x1722:  test   %al,%al
080db587 +0x1724:  jne    080db532 <+0x16cf>
080db589 +0x1726:  mov    0x14(%ebp),%eax
080db58c +0x1729:  mov    %eax,0x4(%esp)
080db590 +0x172d:  mov    %ebx,(%esp)
080db593 +0x1730:  call   080db5c4 <+0x1761>
080db598 +0x1735:  mov    %ebx,%eax
080db59a +0x1737:  add    $0x14,%esp
080db59d +0x173a:  pop    %ebx
080db59e +0x173b:  pop    %ebp
080db59f +0x173c:  ret    $0x4
080db5a2 +0x173f:  push   %ebp
080db5a3 +0x1740:  mov    %esp,%ebp
080db5a5 +0x1742:  sub    $0x28,%esp
080db5a8 +0x1745:  mov    0x8(%ebp),%eax
080db5ab +0x1748:  mov    %eax,(%esp)
080db5ae +0x174b:  call   080dbdaa <+0x1f47>
080db5b3 +0x1750:  mov    %eax,0x4(%esp)
080db5b7 +0x1754:  lea    -0x9(%ebp),%eax
080db5ba +0x1757:  mov    %eax,(%esp)
080db5bd +0x175a:  call   080db6c8 <+0x1865>
080db5c2 +0x175f:  leave
080db5c3 +0x1760:  ret
080db5c4 +0x1761:  push   %ebp
080db5c5 +0x1762:  mov    %esp,%ebp
080db5c7 +0x1764:  mov    0xc(%ebp),%edx
080db5ca +0x1767:  mov    0x8(%ebp),%eax
080db5cd +0x176a:  mov    %edx,(%eax)
080db5cf +0x176c:  pop    %ebp
080db5d0 +0x176d:  ret
080db5d1 +0x176e:  push   %ebp
080db5d2 +0x176f:  mov    %esp,%ebp
080db5d4 +0x1771:  sub    $0x28,%esp
080db5d7 +0x1774:  mov    0x8(%ebp),%eax
080db5da +0x1777:  mov    %eax,(%esp)
080db5dd +0x177a:  call   080dbdb5 <+0x1f52>
080db5e2 +0x177f:  mov    (%eax),%eax
080db5e4 +0x1781:  mov    %eax,-0xc(%ebp)
080db5e7 +0x1784:  mov    0xc(%ebp),%eax
080db5ea +0x1787:  mov    %eax,(%esp)
080db5ed +0x178a:  call   080dbdb5 <+0x1f52>
080db5f2 +0x178f:  mov    (%eax),%edx
080db5f4 +0x1791:  mov    0x8(%ebp),%eax
080db5f7 +0x1794:  mov    %edx,(%eax)
080db5f9 +0x1796:  lea    -0xc(%ebp),%eax
080db5fc +0x1799:  mov    %eax,(%esp)
080db5ff +0x179c:  call   080dbdb5 <+0x1f52>
080db604 +0x17a1:  mov    (%eax),%edx
080db606 +0x17a3:  mov    0xc(%ebp),%eax
080db609 +0x17a6:  mov    %edx,(%eax)
080db60b +0x17a8:  leave
080db60c +0x17a9:  ret
080db60d +0x17aa:  push   %ebp
080db60e +0x17ab:  mov    %esp,%ebp
080db610 +0x17ad:  pop    %ebp
080db611 +0x17ae:  ret
080db612 +0x17af:  push   %ebp
080db613 +0x17b0:  mov    %esp,%ebp
080db615 +0x17b2:  push   %ebx
080db616 +0x17b3:  sub    $0x14,%esp
080db619 +0x17b6:  mov    0x8(%ebp),%ebx
080db61c +0x17b9:  jmp    080db66a <+0x1807>
080db61e +0x17bb:  mov    0x10(%ebp),%eax
080db621 +0x17be:  mov    %eax,(%esp)
080db624 +0x17c1:  call   080db6d0 <+0x186d>
080db629 +0x17c6:  mov    0xc(%ebp),%edx
080db62c +0x17c9:  mov    0x18(%ebp),%ecx
080db62f +0x17cc:  mov    %ecx,0x8(%esp)
080db633 +0x17d0:  mov    %eax,0x4(%esp)
080db637 +0x17d4:  mov    %edx,(%esp)
080db63a +0x17d7:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080db63f +0x17dc:  xor    $0x1,%eax
080db642 +0x17df:  test   %al,%al
080db644 +0x17e1:  je     080db65c <+0x17f9>
080db646 +0x17e3:  mov    0x10(%ebp),%eax
080db649 +0x17e6:  mov    %eax,0x14(%ebp)
080db64c +0x17e9:  mov    0x10(%ebp),%eax
080db64f +0x17ec:  mov    %eax,(%esp)
080db652 +0x17ef:  call   080db496 <+0x1633>
080db657 +0x17f4:  mov    %eax,0x10(%ebp)
080db65a +0x17f7:  jmp    080db66a <+0x1807>
080db65c +0x17f9:  mov    0x10(%ebp),%eax
080db65f +0x17fc:  mov    %eax,(%esp)
080db662 +0x17ff:  call   080db48b <+0x1628>
080db667 +0x1804:  mov    %eax,0x10(%ebp)
080db66a +0x1807:  cmpl   $0x0,0x10(%ebp)
080db66e +0x180b:  setne  %al
080db671 +0x180e:  test   %al,%al
080db673 +0x1810:  jne    080db61e <+0x17bb>
080db675 +0x1812:  mov    0x14(%ebp),%eax
080db678 +0x1815:  mov    %eax,0x4(%esp)
080db67c +0x1819:  mov    %ebx,(%esp)
080db67f +0x181c:  call   080db6f2 <+0x188f>
080db684 +0x1821:  mov    %ebx,%eax
080db686 +0x1823:  add    $0x14,%esp
080db689 +0x1826:  pop    %ebx
080db68a +0x1827:  pop    %ebp
080db68b +0x1828:  ret    $0x4
080db68e +0x182b:  push   %ebp
080db68f +0x182c:  mov    %esp,%ebp
080db691 +0x182e:  push   %ebx
080db692 +0x182f:  sub    $0x14,%esp
080db695 +0x1832:  mov    0x8(%ebp),%ebx
080db698 +0x1835:  mov    0xc(%ebp),%eax
080db69b +0x1838:  add    $0x4,%eax
080db69e +0x183b:  mov    %eax,0x4(%esp)
080db6a2 +0x183f:  mov    %ebx,(%esp)
080db6a5 +0x1842:  call   080db6f2 <+0x188f>
080db6aa +0x1847:  mov    %ebx,%eax
080db6ac +0x1849:  add    $0x14,%esp
080db6af +0x184c:  pop    %ebx
080db6b0 +0x184d:  pop    %ebp
080db6b1 +0x184e:  ret    $0x4
080db6b4 +0x1851:  push   %ebp
080db6b5 +0x1852:  mov    %esp,%ebp
080db6b7 +0x1854:  mov    0x8(%ebp),%eax
080db6ba +0x1857:  mov    (%eax),%edx
080db6bc +0x1859:  mov    0xc(%ebp),%eax
080db6bf +0x185c:  mov    (%eax),%eax
080db6c1 +0x185e:  cmp    %eax,%edx
080db6c3 +0x1860:  sete   %al
080db6c6 +0x1863:  pop    %ebp
080db6c7 +0x1864:  ret
080db6c8 +0x1865:  push   %ebp
080db6c9 +0x1866:  mov    %esp,%ebp
080db6cb +0x1868:  mov    0xc(%ebp),%eax
080db6ce +0x186b:  pop    %ebp
080db6cf +0x186c:  ret
080db6d0 +0x186d:  push   %ebp
080db6d1 +0x186e:  mov    %esp,%ebp
080db6d3 +0x1870:  sub    $0x28,%esp
080db6d6 +0x1873:  mov    0x8(%ebp),%eax
080db6d9 +0x1876:  mov    %eax,(%esp)
080db6dc +0x1879:  call   080dbdbd <+0x1f5a>
080db6e1 +0x187e:  mov    %eax,0x4(%esp)
080db6e5 +0x1882:  lea    -0x9(%ebp),%eax
080db6e8 +0x1885:  mov    %eax,(%esp)
080db6eb +0x1888:  call   080db6c8 <+0x1865>
080db6f0 +0x188d:  leave
080db6f1 +0x188e:  ret
080db6f2 +0x188f:  push   %ebp
080db6f3 +0x1890:  mov    %esp,%ebp
080db6f5 +0x1892:  mov    0xc(%ebp),%edx
080db6f8 +0x1895:  mov    0x8(%ebp),%eax
080db6fb +0x1898:  mov    %edx,(%eax)
080db6fd +0x189a:  pop    %ebp
080db6fe +0x189b:  ret
080db6ff +0x189c:  nop
080db700 +0x189d:  push   %ebp
080db701 +0x189e:  mov    %esp,%ebp
080db703 +0x18a0:  push   %ebx
080db704 +0x18a1:  sub    $0x14,%esp
080db707 +0x18a4:  mov    0x8(%ebp),%ebx
080db70a +0x18a7:  mov    0xc(%ebp),%eax
080db70d +0x18aa:  mov    0xc(%eax),%eax
080db710 +0x18ad:  mov    %eax,0x4(%esp)
080db714 +0x18b1:  mov    %ebx,(%esp)
080db717 +0x18b4:  call   080db6f2 <+0x188f>
080db71c +0x18b9:  mov    %ebx,%eax
080db71e +0x18bb:  add    $0x14,%esp
080db721 +0x18be:  pop    %ebx
080db722 +0x18bf:  pop    %ebp
080db723 +0x18c0:  ret    $0x4
080db726 +0x18c3:  push   %ebp
080db727 +0x18c4:  mov    %esp,%ebp
080db729 +0x18c6:  push   %esi
080db72a +0x18c7:  push   %ebx
080db72b +0x18c8:  sub    $0x20,%esp
080db72e +0x18cb:  mov    0x8(%ebp),%esi
080db731 +0x18ce:  cmpl   $0x0,0x10(%ebp)
080db735 +0x18d2:  jne    080db77d <+0x191a>
080db737 +0x18d4:  mov    0xc(%ebp),%eax
080db73a +0x18d7:  mov    %eax,(%esp)
080db73d +0x18da:  call   080db4d6 <+0x1673>
080db742 +0x18df:  cmp    0x14(%ebp),%eax
080db745 +0x18e2:  je     080db77d <+0x191a>
080db747 +0x18e4:  mov    0x14(%ebp),%eax
080db74a +0x18e7:  mov    %eax,(%esp)
080db74d +0x18ea:  call   080db5a2 <+0x173f>
080db752 +0x18ef:  mov    %eax,%ebx
080db754 +0x18f1:  mov    0x18(%ebp),%eax
080db757 +0x18f4:  mov    %eax,0x4(%esp)
080db75b +0x18f8:  lea    -0xe(%ebp),%eax
080db75e +0x18fb:  mov    %eax,(%esp)
080db761 +0x18fe:  call   080db6c8 <+0x1865>
080db766 +0x1903:  mov    0xc(%ebp),%edx
080db769 +0x1906:  mov    %ebx,0x8(%esp)
080db76d +0x190a:  mov    %eax,0x4(%esp)
080db771 +0x190e:  mov    %edx,(%esp)
080db774 +0x1911:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080db779 +0x1916:  test   %al,%al
080db77b +0x1918:  je     080db784 <+0x1921>
080db77d +0x191a:  mov    $0x1,%eax
080db782 +0x191f:  jmp    080db789 <+0x1926>
080db784 +0x1921:  mov    $0x0,%eax
080db789 +0x1926:  mov    %al,-0xd(%ebp)
080db78c +0x1929:  mov    0x18(%ebp),%eax
080db78f +0x192c:  mov    %eax,0x4(%esp)
080db793 +0x1930:  mov    0xc(%ebp),%eax
080db796 +0x1933:  mov    %eax,(%esp)
080db799 +0x1936:  call   080dbdc8 <+0x1f65>
080db79e +0x193b:  mov    %eax,-0xc(%ebp)
080db7a1 +0x193e:  mov    0xc(%ebp),%eax
080db7a4 +0x1941:  lea    0x4(%eax),%ecx
080db7a7 +0x1944:  mov    -0xc(%ebp),%edx
080db7aa +0x1947:  movzbl -0xd(%ebp),%eax
080db7ae +0x194b:  mov    %ecx,0xc(%esp)
080db7b2 +0x194f:  mov    0x14(%ebp),%ecx
080db7b5 +0x1952:  mov    %ecx,0x8(%esp)
080db7b9 +0x1956:  mov    %edx,0x4(%esp)
080db7bd +0x195a:  mov    %eax,(%esp)
080db7c0 +0x195d:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
080db7c5 +0x1962:  mov    0xc(%ebp),%eax
080db7c8 +0x1965:  mov    0x14(%eax),%eax
080db7cb +0x1968:  lea    0x1(%eax),%edx
080db7ce +0x196b:  mov    0xc(%ebp),%eax
080db7d1 +0x196e:  mov    %edx,0x14(%eax)
080db7d4 +0x1971:  mov    -0xc(%ebp),%eax
080db7d7 +0x1974:  mov    %eax,0x4(%esp)
080db7db +0x1978:  mov    %esi,(%esp)
080db7de +0x197b:  call   080db6f2 <+0x188f>
080db7e3 +0x1980:  mov    %esi,%eax
080db7e5 +0x1982:  add    $0x20,%esp
080db7e8 +0x1985:  pop    %ebx
080db7e9 +0x1986:  pop    %esi
080db7ea +0x1987:  pop    %ebp
080db7eb +0x1988:  ret    $0x4
080db7ee +0x198b:  push   %ebp
080db7ef +0x198c:  mov    %esp,%ebp
080db7f1 +0x198e:  sub    $0x18,%esp
080db7f4 +0x1991:  mov    0xc(%ebp),%eax
080db7f7 +0x1994:  mov    %eax,(%esp)
080db7fa +0x1997:  call   080dbe49 <+0x1fe6>
080db7ff +0x199c:  mov    0x8(%ebp),%edx
080db802 +0x199f:  mov    (%eax),%eax
080db804 +0x19a1:  mov    %eax,(%edx)
080db806 +0x19a3:  mov    0x10(%ebp),%eax
080db809 +0x19a6:  mov    %eax,(%esp)
080db80c +0x19a9:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
080db811 +0x19ae:  movzbl (%eax),%edx
080db814 +0x19b1:  mov    0x8(%ebp),%eax
080db817 +0x19b4:  mov    %dl,0x4(%eax)
080db81a +0x19b7:  leave
080db81b +0x19b8:  ret
080db81c +0x19b9:  push   %ebp
080db81d +0x19ba:  mov    %esp,%ebp
080db81f +0x19bc:  sub    $0x18,%esp
080db822 +0x19bf:  mov    0x8(%ebp),%eax
080db825 +0x19c2:  mov    (%eax),%eax
080db827 +0x19c4:  mov    %eax,(%esp)
080db82a +0x19c7:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
080db82f +0x19cc:  mov    0x8(%ebp),%edx
080db832 +0x19cf:  mov    %eax,(%edx)
080db834 +0x19d1:  mov    0x8(%ebp),%eax
080db837 +0x19d4:  leave
080db838 +0x19d5:  ret
080db839 +0x19d6:  nop
080db83a +0x19d7:  push   %ebp
080db83b +0x19d8:  mov    %esp,%ebp
080db83d +0x19da:  sub    $0x18,%esp
080db840 +0x19dd:  mov    0xc(%ebp),%eax
080db843 +0x19e0:  mov    %eax,(%esp)
080db846 +0x19e3:  call   080db868 <+0x1a05>
080db84b +0x19e8:  mov    0x8(%ebp),%edx
080db84e +0x19eb:  mov    (%eax),%eax
080db850 +0x19ed:  mov    %eax,(%edx)
080db852 +0x19ef:  mov    0x10(%ebp),%eax
080db855 +0x19f2:  mov    %eax,(%esp)
080db858 +0x19f5:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
080db85d +0x19fa:  movzbl (%eax),%edx
080db860 +0x19fd:  mov    0x8(%ebp),%eax
080db863 +0x1a00:  mov    %dl,0x4(%eax)
080db866 +0x1a03:  leave
080db867 +0x1a04:  ret
080db868 +0x1a05:  push   %ebp
080db869 +0x1a06:  mov    %esp,%ebp
080db86b +0x1a08:  mov    0x8(%ebp),%eax
080db86e +0x1a0b:  pop    %ebp
080db86f +0x1a0c:  ret
080db870 +0x1a0d:  push   %ebp
080db871 +0x1a0e:  mov    %esp,%ebp
080db873 +0x1a10:  sub    $0x18,%esp
080db876 +0x1a13:  mov    0x8(%ebp),%eax
080db879 +0x1a16:  mov    %eax,(%esp)
080db87c +0x1a19:  call   080c7e06 <_GLOBAL__I_g_ServerString_+0x1371>  ; global constructors keyed to g_ServerString_+0x1371
080db881 +0x1a1e:  mov    0x8(%ebp),%eax
080db884 +0x1a21:  movl   $0x0,0x4(%eax)
080db88b +0x1a28:  mov    0x8(%ebp),%eax
080db88e +0x1a2b:  movl   $0x0,0x8(%eax)
080db895 +0x1a32:  mov    0x8(%ebp),%eax
080db898 +0x1a35:  movl   $0x0,0xc(%eax)
080db89f +0x1a3c:  mov    0x8(%ebp),%eax
080db8a2 +0x1a3f:  movl   $0x0,0x10(%eax)
080db8a9 +0x1a46:  mov    0x8(%ebp),%eax
080db8ac +0x1a49:  movl   $0x0,0x14(%eax)
080db8b3 +0x1a50:  mov    0x8(%ebp),%eax
080db8b6 +0x1a53:  mov    %eax,(%esp)
080db8b9 +0x1a56:  call   080dbe52 <+0x1fef>
080db8be +0x1a5b:  leave
080db8bf +0x1a5c:  ret
080db8c0 +0x1a5d:  push   %ebp
080db8c1 +0x1a5e:  mov    %esp,%ebp
080db8c3 +0x1a60:  mov    0x8(%ebp),%eax
080db8c6 +0x1a63:  mov    0xc(%eax),%eax
080db8c9 +0x1a66:  pop    %ebp
080db8ca +0x1a67:  ret
080db8cb +0x1a68:  push   %ebp
080db8cc +0x1a69:  mov    %esp,%ebp
080db8ce +0x1a6b:  mov    0x8(%ebp),%eax
080db8d1 +0x1a6e:  mov    0x8(%eax),%eax
080db8d4 +0x1a71:  pop    %ebp
080db8d5 +0x1a72:  ret
080db8d6 +0x1a73:  push   %ebp
080db8d7 +0x1a74:  mov    %esp,%ebp
080db8d9 +0x1a76:  sub    $0x18,%esp
080db8dc +0x1a79:  mov    0x8(%ebp),%eax
080db8df +0x1a7c:  mov    %eax,(%esp)
080db8e2 +0x1a7f:  call   080dbe84 <+0x2021>
080db8e7 +0x1a84:  mov    0xc(%ebp),%edx
080db8ea +0x1a87:  mov    %edx,0x4(%esp)
080db8ee +0x1a8b:  mov    %eax,(%esp)
080db8f1 +0x1a8e:  call   080c7e5a <_GLOBAL__I_g_ServerString_+0x13c5>  ; global constructors keyed to g_ServerString_+0x13c5
080db8f6 +0x1a93:  mov    0xc(%ebp),%eax
080db8f9 +0x1a96:  mov    %eax,0x4(%esp)
080db8fd +0x1a9a:  mov    0x8(%ebp),%eax
080db900 +0x1a9d:  mov    %eax,(%esp)
080db903 +0x1aa0:  call   080dbe8c <+0x2029>
080db908 +0x1aa5:  leave
080db909 +0x1aa6:  ret
080db90a +0x1aa7:  push   %ebp
080db90b +0x1aa8:  mov    %esp,%ebp
080db90d +0x1aaa:  mov    0x8(%ebp),%eax
080db910 +0x1aad:  add    $0x4,%eax
080db913 +0x1ab0:  pop    %ebp
080db914 +0x1ab1:  ret
080db915 +0x1ab2:  push   %ebp
080db916 +0x1ab3:  mov    %esp,%ebp
080db918 +0x1ab5:  sub    $0x28,%esp
080db91b +0x1ab8:  mov    0x8(%ebp),%eax
080db91e +0x1abb:  mov    %eax,(%esp)
080db921 +0x1abe:  call   080dbeae <+0x204b>
080db926 +0x1ac3:  mov    %eax,0x4(%esp)
080db92a +0x1ac7:  lea    -0x9(%ebp),%eax
080db92d +0x1aca:  mov    %eax,(%esp)
080db930 +0x1acd:  call   080c7892 <_GLOBAL__I_g_ServerString_+0xdfd>  ; global constructors keyed to g_ServerString_+0xdfd
080db935 +0x1ad2:  leave
080db936 +0x1ad3:  ret
080db937 +0x1ad4:  nop
080db938 +0x1ad5:  push   %ebp
080db939 +0x1ad6:  mov    %esp,%ebp
080db93b +0x1ad8:  mov    0xc(%ebp),%eax
080db93e +0x1adb:  mov    (%eax),%edx
080db940 +0x1add:  mov    0x10(%ebp),%eax
080db943 +0x1ae0:  mov    (%eax),%eax
080db945 +0x1ae2:  cmp    %eax,%edx
080db947 +0x1ae4:  setg   %al
080db94a +0x1ae7:  pop    %ebp
080db94b +0x1ae8:  ret
080db94c +0x1ae9:  push   %ebp
080db94d +0x1aea:  mov    %esp,%ebp
080db94f +0x1aec:  push   %esi
080db950 +0x1aed:  push   %ebx
080db951 +0x1aee:  sub    $0x20,%esp
080db954 +0x1af1:  mov    0x8(%ebp),%esi
080db957 +0x1af4:  cmpl   $0x0,0x10(%ebp)
080db95b +0x1af8:  jne    080db9a3 <+0x1b40>
080db95d +0x1afa:  mov    0xc(%ebp),%eax
080db960 +0x1afd:  mov    %eax,(%esp)
080db963 +0x1b00:  call   080db90a <+0x1aa7>
080db968 +0x1b05:  cmp    0x14(%ebp),%eax
080db96b +0x1b08:  je     080db9a3 <+0x1b40>
080db96d +0x1b0a:  mov    0x14(%ebp),%eax
080db970 +0x1b0d:  mov    %eax,(%esp)
080db973 +0x1b10:  call   080dbeb9 <+0x2056>
080db978 +0x1b15:  mov    %eax,%ebx
080db97a +0x1b17:  mov    0x18(%ebp),%eax
080db97d +0x1b1a:  mov    %eax,0x4(%esp)
080db981 +0x1b1e:  lea    -0xe(%ebp),%eax
080db984 +0x1b21:  mov    %eax,(%esp)
080db987 +0x1b24:  call   080c7892 <_GLOBAL__I_g_ServerString_+0xdfd>  ; global constructors keyed to g_ServerString_+0xdfd
080db98c +0x1b29:  mov    0xc(%ebp),%edx
080db98f +0x1b2c:  mov    %ebx,0x8(%esp)
080db993 +0x1b30:  mov    %eax,0x4(%esp)
080db997 +0x1b34:  mov    %edx,(%esp)
080db99a +0x1b37:  call   080db938 <+0x1ad5>
080db99f +0x1b3c:  test   %al,%al
080db9a1 +0x1b3e:  je     080db9aa <+0x1b47>
080db9a3 +0x1b40:  mov    $0x1,%eax
080db9a8 +0x1b45:  jmp    080db9af <+0x1b4c>
080db9aa +0x1b47:  mov    $0x0,%eax
080db9af +0x1b4c:  mov    %al,-0xd(%ebp)
080db9b2 +0x1b4f:  mov    0x18(%ebp),%eax
080db9b5 +0x1b52:  mov    %eax,0x4(%esp)
080db9b9 +0x1b56:  mov    0xc(%ebp),%eax
080db9bc +0x1b59:  mov    %eax,(%esp)
080db9bf +0x1b5c:  call   080dbedc <+0x2079>
080db9c4 +0x1b61:  mov    %eax,-0xc(%ebp)
080db9c7 +0x1b64:  mov    0xc(%ebp),%eax
080db9ca +0x1b67:  lea    0x4(%eax),%ecx
080db9cd +0x1b6a:  mov    -0xc(%ebp),%edx
080db9d0 +0x1b6d:  movzbl -0xd(%ebp),%eax
080db9d4 +0x1b71:  mov    %ecx,0xc(%esp)
080db9d8 +0x1b75:  mov    0x14(%ebp),%ecx
080db9db +0x1b78:  mov    %ecx,0x8(%esp)
080db9df +0x1b7c:  mov    %edx,0x4(%esp)
080db9e3 +0x1b80:  mov    %eax,(%esp)
080db9e6 +0x1b83:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
080db9eb +0x1b88:  mov    0xc(%ebp),%eax
080db9ee +0x1b8b:  mov    0x14(%eax),%eax
080db9f1 +0x1b8e:  lea    0x1(%eax),%edx
080db9f4 +0x1b91:  mov    0xc(%ebp),%eax
080db9f7 +0x1b94:  mov    %edx,0x14(%eax)
080db9fa +0x1b97:  mov    -0xc(%ebp),%eax
080db9fd +0x1b9a:  mov    %eax,0x4(%esp)
080dba01 +0x1b9e:  mov    %esi,(%esp)
080dba04 +0x1ba1:  call   080c78bc <_GLOBAL__I_g_ServerString_+0xe27>  ; global constructors keyed to g_ServerString_+0xe27
080dba09 +0x1ba6:  mov    %esi,%eax
080dba0b +0x1ba8:  add    $0x20,%esp
080dba0e +0x1bab:  pop    %ebx
080dba0f +0x1bac:  pop    %esi
080dba10 +0x1bad:  pop    %ebp
080dba11 +0x1bae:  ret    $0x4
080dba14 +0x1bb1:  push   %ebp
080dba15 +0x1bb2:  mov    %esp,%ebp
080dba17 +0x1bb4:  sub    $0x18,%esp
080dba1a +0x1bb7:  mov    0x8(%ebp),%eax
080dba1d +0x1bba:  mov    %eax,(%esp)
080dba20 +0x1bbd:  call   080dbf5e <+0x20fb>
080dba25 +0x1bc2:  mov    0x8(%ebp),%eax
080dba28 +0x1bc5:  movl   $0x0,(%eax)
080dba2e +0x1bcb:  mov    0x8(%ebp),%eax
080dba31 +0x1bce:  movl   $0x0,0x4(%eax)
080dba38 +0x1bd5:  mov    0x8(%ebp),%eax
080dba3b +0x1bd8:  movl   $0x0,0x8(%eax)
080dba42 +0x1bdf:  leave
080dba43 +0x1be0:  ret
080dba44 +0x1be1:  push   %ebp
080dba45 +0x1be2:  mov    %esp,%ebp
080dba47 +0x1be4:  sub    $0x18,%esp
080dba4a +0x1be7:  mov    0x8(%ebp),%eax
080dba4d +0x1bea:  mov    %eax,(%esp)
080dba50 +0x1bed:  call   080dbf72 <+0x210f>
080dba55 +0x1bf2:  leave
080dba56 +0x1bf3:  ret
080dba57 +0x1bf4:  nop
080dba58 +0x1bf5:  push   %ebp
080dba59 +0x1bf6:  mov    %esp,%ebp
080dba5b +0x1bf8:  sub    $0x18,%esp
080dba5e +0x1bfb:  cmpl   $0x0,0xc(%ebp)
080dba62 +0x1bff:  je     080dba7d <+0x1c1a>
080dba64 +0x1c01:  mov    0x8(%ebp),%eax
080dba67 +0x1c04:  mov    0x10(%ebp),%edx
080dba6a +0x1c07:  mov    %edx,0x8(%esp)
080dba6e +0x1c0b:  mov    0xc(%ebp),%edx
080dba71 +0x1c0e:  mov    %edx,0x4(%esp)
080dba75 +0x1c12:  mov    %eax,(%esp)
080dba78 +0x1c15:  call   080dbf78 <+0x2115>
080dba7d +0x1c1a:  leave
080dba7e +0x1c1b:  ret
080dba7f +0x1c1c:  push   %ebp
080dba80 +0x1c1d:  mov    %esp,%ebp
080dba82 +0x1c1f:  sub    $0x18,%esp
080dba85 +0x1c22:  mov    0xc(%ebp),%eax
080dba88 +0x1c25:  mov    %eax,0x4(%esp)
080dba8c +0x1c29:  mov    0x8(%ebp),%eax
080dba8f +0x1c2c:  mov    %eax,(%esp)
080dba92 +0x1c2f:  call   080dbf8b <+0x2128>
080dba97 +0x1c34:  leave
080dba98 +0x1c35:  ret
080dba99 +0x1c36:  nop
080dba9a +0x1c37:  push   %ebp
080dba9b +0x1c38:  mov    %esp,%ebp
080dba9d +0x1c3a:  mov    0xc(%ebp),%eax
080dbaa0 +0x1c3d:  mov    (%eax),%edx
080dbaa2 +0x1c3f:  mov    0x8(%ebp),%eax
080dbaa5 +0x1c42:  mov    %edx,(%eax)
080dbaa7 +0x1c44:  pop    %ebp
080dbaa8 +0x1c45:  ret
080dbaa9 +0x1c46:  push   %ebp
080dbaaa +0x1c47:  mov    %esp,%ebp
080dbaac +0x1c49:  mov    0x8(%ebp),%eax
080dbaaf +0x1c4c:  pop    %ebp
080dbab0 +0x1c4d:  ret
080dbab1 +0x1c4e:  nop
080dbab2 +0x1c4f:  push   %ebp
080dbab3 +0x1c50:  mov    %esp,%ebp
080dbab5 +0x1c52:  push   %ebx
080dbab6 +0x1c53:  sub    $0x14,%esp
080dbab9 +0x1c56:  mov    0x10(%ebp),%eax
080dbabc +0x1c59:  mov    %eax,(%esp)
080dbabf +0x1c5c:  call   080dbfb1 <+0x214e>
080dbac4 +0x1c61:  mov    %eax,%ebx
080dbac6 +0x1c63:  mov    0xc(%ebp),%eax
080dbac9 +0x1c66:  mov    %eax,0x4(%esp)
080dbacd +0x1c6a:  movl   $0x28,(%esp)
080dbad4 +0x1c71:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080dbad9 +0x1c76:  mov    %eax,%edx
080dbadb +0x1c78:  test   %edx,%edx
080dbadd +0x1c7a:  je     080dbb19 <+0x1cb6>
080dbadf +0x1c7c:  mov    (%ebx),%edx
080dbae1 +0x1c7e:  mov    %edx,(%eax)
080dbae3 +0x1c80:  mov    0x4(%ebx),%edx
080dbae6 +0x1c83:  mov    %edx,0x4(%eax)
080dbae9 +0x1c86:  mov    0x8(%ebx),%edx
080dbaec +0x1c89:  mov    %edx,0x8(%eax)
080dbaef +0x1c8c:  mov    0xc(%ebx),%edx
080dbaf2 +0x1c8f:  mov    %edx,0xc(%eax)
080dbaf5 +0x1c92:  mov    0x10(%ebx),%edx
080dbaf8 +0x1c95:  mov    %edx,0x10(%eax)
080dbafb +0x1c98:  mov    0x14(%ebx),%edx
080dbafe +0x1c9b:  mov    %edx,0x14(%eax)
080dbb01 +0x1c9e:  mov    0x18(%ebx),%edx
080dbb04 +0x1ca1:  mov    %edx,0x18(%eax)
080dbb07 +0x1ca4:  mov    0x1c(%ebx),%edx
080dbb0a +0x1ca7:  mov    %edx,0x1c(%eax)
080dbb0d +0x1caa:  mov    0x20(%ebx),%edx
080dbb10 +0x1cad:  mov    %edx,0x20(%eax)
080dbb13 +0x1cb0:  mov    0x24(%ebx),%edx
080dbb16 +0x1cb3:  mov    %edx,0x24(%eax)
080dbb19 +0x1cb6:  add    $0x14,%esp
080dbb1c +0x1cb9:  pop    %ebx
080dbb1d +0x1cba:  pop    %ebp
080dbb1e +0x1cbb:  ret
080dbb1f +0x1cbc:  nop
080dbb20 +0x1cbd:  push   %ebp
080dbb21 +0x1cbe:  mov    %esp,%ebp
080dbb23 +0x1cc0:  mov    0x8(%ebp),%eax
080dbb26 +0x1cc3:  pop    %ebp
080dbb27 +0x1cc4:  ret
080dbb28 +0x1cc5:  push   %ebp
080dbb29 +0x1cc6:  mov    %esp,%ebp
080dbb2b +0x1cc8:  push   %ebx
080dbb2c +0x1cc9:  sub    $0x14,%esp
080dbb2f +0x1ccc:  mov    0xc(%ebp),%eax
080dbb32 +0x1ccf:  mov    %eax,(%esp)
080dbb35 +0x1cd2:  call   080dbfb9 <+0x2156>
080dbb3a +0x1cd7:  mov    %eax,%ebx
080dbb3c +0x1cd9:  mov    0x8(%ebp),%eax
080dbb3f +0x1cdc:  mov    %eax,(%esp)
080dbb42 +0x1cdf:  call   080dbfb9 <+0x2156>
080dbb47 +0x1ce4:  mov    0x10(%ebp),%edx
080dbb4a +0x1ce7:  mov    %edx,0x8(%esp)
080dbb4e +0x1ceb:  mov    %ebx,0x4(%esp)
080dbb52 +0x1cef:  mov    %eax,(%esp)
080dbb55 +0x1cf2:  call   080dbfc1 <+0x215e>
080dbb5a +0x1cf7:  add    $0x14,%esp
080dbb5d +0x1cfa:  pop    %ebx
080dbb5e +0x1cfb:  pop    %ebp
080dbb5f +0x1cfc:  ret
080dbb60 +0x1cfd:  push   %ebp
080dbb61 +0x1cfe:  mov    %esp,%ebp
080dbb63 +0x1d00:  mov    0x8(%ebp),%eax
080dbb66 +0x1d03:  pop    %ebp
080dbb67 +0x1d04:  ret
080dbb68 +0x1d05:  push   %ebp
080dbb69 +0x1d06:  mov    %esp,%ebp
080dbb6b +0x1d08:  mov    0x8(%ebp),%eax
080dbb6e +0x1d0b:  mov    (%eax),%eax
080dbb70 +0x1d0d:  pop    %ebp
080dbb71 +0x1d0e:  ret
080dbb72 +0x1d0f:  push   %ebp
080dbb73 +0x1d10:  mov    %esp,%ebp
080dbb75 +0x1d12:  push   %ebx
080dbb76 +0x1d13:  sub    $0x24,%esp
080dbb79 +0x1d16:  mov    0x8(%ebp),%eax
080dbb7c +0x1d19:  mov    %eax,(%esp)
080dbb7f +0x1d1c:  call   080dc028 <+0x21c5>
080dbb84 +0x1d21:  mov    %eax,%ebx
080dbb86 +0x1d23:  mov    0x8(%ebp),%eax
080dbb89 +0x1d26:  mov    %eax,(%esp)
080dbb8c +0x1d29:  call   080dc006 <+0x21a3>
080dbb91 +0x1d2e:  mov    %ebx,%edx
080dbb93 +0x1d30:  sub    %eax,%edx
080dbb95 +0x1d32:  mov    0xc(%ebp),%eax
080dbb98 +0x1d35:  cmp    %eax,%edx
080dbb9a +0x1d37:  setb   %al
080dbb9d +0x1d3a:  test   %al,%al
080dbb9f +0x1d3c:  je     080dbbac <+0x1d49>
080dbba1 +0x1d3e:  mov    0x10(%ebp),%eax
080dbba4 +0x1d41:  mov    %eax,(%esp)
080dbba7 +0x1d44:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
080dbbac +0x1d49:  mov    0x8(%ebp),%eax
080dbbaf +0x1d4c:  mov    %eax,(%esp)
080dbbb2 +0x1d4f:  call   080dc006 <+0x21a3>
080dbbb7 +0x1d54:  mov    %eax,%ebx
080dbbb9 +0x1d56:  mov    0x8(%ebp),%eax
080dbbbc +0x1d59:  mov    %eax,(%esp)
080dbbbf +0x1d5c:  call   080dc006 <+0x21a3>
080dbbc4 +0x1d61:  mov    %eax,-0x10(%ebp)
080dbbc7 +0x1d64:  lea    0xc(%ebp),%eax
080dbbca +0x1d67:  mov    %eax,0x4(%esp)
080dbbce +0x1d6b:  lea    -0x10(%ebp),%eax
080dbbd1 +0x1d6e:  mov    %eax,(%esp)
080dbbd4 +0x1d71:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
080dbbd9 +0x1d76:  mov    (%eax),%eax
080dbbdb +0x1d78:  lea    (%ebx,%eax,1),%eax
080dbbde +0x1d7b:  mov    %eax,-0xc(%ebp)
080dbbe1 +0x1d7e:  mov    0x8(%ebp),%eax
080dbbe4 +0x1d81:  mov    %eax,(%esp)
080dbbe7 +0x1d84:  call   080dc006 <+0x21a3>
080dbbec +0x1d89:  cmp    -0xc(%ebp),%eax
080dbbef +0x1d8c:  ja     080dbc01 <+0x1d9e>
080dbbf1 +0x1d8e:  mov    0x8(%ebp),%eax
080dbbf4 +0x1d91:  mov    %eax,(%esp)
080dbbf7 +0x1d94:  call   080dc028 <+0x21c5>
080dbbfc +0x1d99:  cmp    -0xc(%ebp),%eax
080dbbff +0x1d9c:  jae    080dbc0e <+0x1dab>
080dbc01 +0x1d9e:  mov    0x8(%ebp),%eax
080dbc04 +0x1da1:  mov    %eax,(%esp)
080dbc07 +0x1da4:  call   080dc028 <+0x21c5>
080dbc0c +0x1da9:  jmp    080dbc11 <+0x1dae>
080dbc0e +0x1dab:  mov    -0xc(%ebp),%eax
080dbc11 +0x1dae:  add    $0x24,%esp
080dbc14 +0x1db1:  pop    %ebx
080dbc15 +0x1db2:  pop    %ebp
080dbc16 +0x1db3:  ret
080dbc17 +0x1db4:  nop
080dbc18 +0x1db5:  push   %ebp
080dbc19 +0x1db6:  mov    %esp,%ebp
080dbc1b +0x1db8:  push   %ebx
080dbc1c +0x1db9:  sub    $0x14,%esp
080dbc1f +0x1dbc:  mov    0x8(%ebp),%ebx
080dbc22 +0x1dbf:  mov    0xc(%ebp),%eax
080dbc25 +0x1dc2:  mov    %eax,0x4(%esp)
080dbc29 +0x1dc6:  mov    %ebx,(%esp)
080dbc2c +0x1dc9:  call   080dba9a <+0x1c37>
080dbc31 +0x1dce:  mov    %ebx,%eax
080dbc33 +0x1dd0:  add    $0x14,%esp
080dbc36 +0x1dd3:  pop    %ebx
080dbc37 +0x1dd4:  pop    %ebp
080dbc38 +0x1dd5:  ret    $0x4
080dbc3b +0x1dd8:  push   %ebp
080dbc3c +0x1dd9:  mov    %esp,%ebp
080dbc3e +0x1ddb:  push   %ebx
080dbc3f +0x1ddc:  sub    $0x14,%esp
080dbc42 +0x1ddf:  mov    0x8(%ebp),%eax
080dbc45 +0x1de2:  mov    %eax,(%esp)
080dbc48 +0x1de5:  call   080dbb20 <+0x1cbd>
080dbc4d +0x1dea:  mov    (%eax),%eax
080dbc4f +0x1dec:  mov    %eax,%ebx
080dbc51 +0x1dee:  mov    0xc(%ebp),%eax
080dbc54 +0x1df1:  mov    %eax,(%esp)
080dbc57 +0x1df4:  call   080dbb20 <+0x1cbd>
080dbc5c +0x1df9:  mov    (%eax),%eax
080dbc5e +0x1dfb:  mov    %ebx,%edx
080dbc60 +0x1dfd:  sub    %eax,%edx
080dbc62 +0x1dff:  mov    %edx,%eax
080dbc64 +0x1e01:  sar    $0x3,%eax
080dbc67 +0x1e04:  imul   $0xcccccccd,%eax,%eax
080dbc6d +0x1e0a:  add    $0x14,%esp
080dbc70 +0x1e0d:  pop    %ebx
080dbc71 +0x1e0e:  pop    %ebp
080dbc72 +0x1e0f:  ret
080dbc73 +0x1e10:  nop
080dbc74 +0x1e11:  push   %ebp
080dbc75 +0x1e12:  mov    %esp,%ebp
080dbc77 +0x1e14:  sub    $0x18,%esp
080dbc7a +0x1e17:  cmpl   $0x0,0xc(%ebp)
080dbc7e +0x1e1b:  je     080dbc9c <+0x1e39>
080dbc80 +0x1e1d:  mov    0x8(%ebp),%eax
080dbc83 +0x1e20:  movl   $0x0,0x8(%esp)
080dbc8b +0x1e28:  mov    0xc(%ebp),%edx
080dbc8e +0x1e2b:  mov    %edx,0x4(%esp)
080dbc92 +0x1e2f:  mov    %eax,(%esp)
080dbc95 +0x1e32:  call   080dc044 <+0x21e1>
080dbc9a +0x1e37:  jmp    080dbca1 <+0x1e3e>
080dbc9c +0x1e39:  mov    $0x0,%eax
080dbca1 +0x1e3e:  leave
080dbca2 +0x1e3f:  ret
080dbca3 +0x1e40:  push   %ebp
080dbca4 +0x1e41:  mov    %esp,%ebp
080dbca6 +0x1e43:  sub    $0x28,%esp
080dbca9 +0x1e46:  lea    -0x10(%ebp),%eax
080dbcac +0x1e49:  lea    0xc(%ebp),%edx
080dbcaf +0x1e4c:  mov    %edx,0x4(%esp)
080dbcb3 +0x1e50:  mov    %eax,(%esp)
080dbcb6 +0x1e53:  call   080dc083 <+0x2220>
080dbcbb +0x1e58:  sub    $0x4,%esp
080dbcbe +0x1e5b:  lea    -0xc(%ebp),%eax
080dbcc1 +0x1e5e:  lea    0x8(%ebp),%edx
080dbcc4 +0x1e61:  mov    %edx,0x4(%esp)
080dbcc8 +0x1e65:  mov    %eax,(%esp)
080dbccb +0x1e68:  call   080dc083 <+0x2220>
080dbcd0 +0x1e6d:  sub    $0x4,%esp
080dbcd3 +0x1e70:  mov    0x14(%ebp),%eax
080dbcd6 +0x1e73:  mov    %eax,0xc(%esp)
080dbcda +0x1e77:  mov    0x10(%ebp),%eax
080dbcdd +0x1e7a:  mov    %eax,0x8(%esp)
080dbce1 +0x1e7e:  mov    -0x10(%ebp),%eax
080dbce4 +0x1e81:  mov    %eax,0x4(%esp)
080dbce8 +0x1e85:  mov    -0xc(%ebp),%eax
080dbceb +0x1e88:  mov    %eax,(%esp)
080dbcee +0x1e8b:  call   080dc0a8 <+0x2245>
080dbcf3 +0x1e90:  leave
080dbcf4 +0x1e91:  ret
080dbcf5 +0x1e92:  nop
080dbcf6 +0x1e93:  push   %ebp
080dbcf7 +0x1e94:  mov    %esp,%ebp
080dbcf9 +0x1e96:  sub    $0x4,%esp
080dbcfc +0x1e99:  mov    0xc(%ebp),%eax
080dbcff +0x1e9c:  mov    %eax,(%esp)
080dbd02 +0x1e9f:  call   080d6b02 <_ZN18BlueMarbleUserInfoD1Ev>  ; BlueMarbleUserInfo::~BlueMarbleUserInfo()
080dbd07 +0x1ea4:  leave
080dbd08 +0x1ea5:  ret
080dbd09 +0x1ea6:  nop
080dbd0a +0x1ea7:  push   %ebp
080dbd0b +0x1ea8:  mov    %esp,%ebp
080dbd0d +0x1eaa:  sub    $0x18,%esp
080dbd10 +0x1ead:  mov    0x8(%ebp),%eax
080dbd13 +0x1eb0:  mov    %eax,(%esp)
080dbd16 +0x1eb3:  call   080dc0ca <+0x2267>
080dbd1b +0x1eb8:  leave
080dbd1c +0x1eb9:  ret
080dbd1d +0x1eba:  nop
080dbd1e +0x1ebb:  push   %ebp
080dbd1f +0x1ebc:  mov    %esp,%ebp
080dbd21 +0x1ebe:  mov    0x8(%ebp),%eax
080dbd24 +0x1ec1:  movl   $0x0,0x4(%eax)
080dbd2b +0x1ec8:  mov    0x8(%ebp),%eax
080dbd2e +0x1ecb:  movl   $0x0,0x8(%eax)
080dbd35 +0x1ed2:  mov    0x8(%ebp),%eax
080dbd38 +0x1ed5:  lea    0x4(%eax),%edx
080dbd3b +0x1ed8:  mov    0x8(%ebp),%eax
080dbd3e +0x1edb:  mov    %edx,0xc(%eax)
080dbd41 +0x1ede:  mov    0x8(%ebp),%eax
080dbd44 +0x1ee1:  lea    0x4(%eax),%edx
080dbd47 +0x1ee4:  mov    0x8(%ebp),%eax
080dbd4a +0x1ee7:  mov    %edx,0x10(%eax)
080dbd4d +0x1eea:  pop    %ebp
080dbd4e +0x1eeb:  ret
080dbd4f +0x1eec:  nop
080dbd50 +0x1eed:  push   %ebp
080dbd51 +0x1eee:  mov    %esp,%ebp
080dbd53 +0x1ef0:  mov    0x8(%ebp),%eax
080dbd56 +0x1ef3:  pop    %ebp
080dbd57 +0x1ef4:  ret
080dbd58 +0x1ef5:  push   %ebp
080dbd59 +0x1ef6:  mov    %esp,%ebp
080dbd5b +0x1ef8:  pop    %ebp
080dbd5c +0x1ef9:  ret
080dbd5d +0x1efa:  nop
080dbd5e +0x1efb:  push   %ebp
080dbd5f +0x1efc:  mov    %esp,%ebp
080dbd61 +0x1efe:  sub    $0x18,%esp
080dbd64 +0x1f01:  mov    0xc(%ebp),%eax
080dbd67 +0x1f04:  mov    %eax,(%esp)
080dbd6a +0x1f07:  call   080dbd58 <+0x1ef5>
080dbd6f +0x1f0c:  leave
080dbd70 +0x1f0d:  ret
080dbd71 +0x1f0e:  nop
080dbd72 +0x1f0f:  push   %ebp
080dbd73 +0x1f10:  mov    %esp,%ebp
080dbd75 +0x1f12:  sub    $0x18,%esp
080dbd78 +0x1f15:  mov    0x8(%ebp),%eax
080dbd7b +0x1f18:  movl   $0x1,0x8(%esp)
080dbd83 +0x1f20:  mov    0xc(%ebp),%edx
080dbd86 +0x1f23:  mov    %edx,0x4(%esp)
080dbd8a +0x1f27:  mov    %eax,(%esp)
080dbd8d +0x1f2a:  call   080dc0d0 <+0x226d>
080dbd92 +0x1f2f:  leave
080dbd93 +0x1f30:  ret
080dbd94 +0x1f31:  push   %ebp
080dbd95 +0x1f32:  mov    %esp,%ebp
080dbd97 +0x1f34:  mov    0x8(%ebp),%eax
080dbd9a +0x1f37:  mov    0x8(%eax),%eax
080dbd9d +0x1f3a:  pop    %ebp
080dbd9e +0x1f3b:  ret
080dbd9f +0x1f3c:  push   %ebp
080dbda0 +0x1f3d:  mov    %esp,%ebp
080dbda2 +0x1f3f:  mov    0x8(%ebp),%eax
080dbda5 +0x1f42:  mov    0xc(%eax),%eax
080dbda8 +0x1f45:  pop    %ebp
080dbda9 +0x1f46:  ret
080dbdaa +0x1f47:  push   %ebp
080dbdab +0x1f48:  mov    %esp,%ebp
080dbdad +0x1f4a:  mov    0x8(%ebp),%eax
080dbdb0 +0x1f4d:  add    $0x10,%eax
080dbdb3 +0x1f50:  pop    %ebp
080dbdb4 +0x1f51:  ret
080dbdb5 +0x1f52:  push   %ebp
080dbdb6 +0x1f53:  mov    %esp,%ebp
080dbdb8 +0x1f55:  mov    0x8(%ebp),%eax
080dbdbb +0x1f58:  pop    %ebp
080dbdbc +0x1f59:  ret
080dbdbd +0x1f5a:  push   %ebp
080dbdbe +0x1f5b:  mov    %esp,%ebp
080dbdc0 +0x1f5d:  mov    0x8(%ebp),%eax
080dbdc3 +0x1f60:  add    $0x10,%eax
080dbdc6 +0x1f63:  pop    %ebp
080dbdc7 +0x1f64:  ret
080dbdc8 +0x1f65:  push   %ebp
080dbdc9 +0x1f66:  mov    %esp,%ebp
080dbdcb +0x1f68:  push   %esi
080dbdcc +0x1f69:  push   %ebx
080dbdcd +0x1f6a:  sub    $0x20,%esp
080dbdd0 +0x1f6d:  mov    0x8(%ebp),%eax
080dbdd3 +0x1f70:  mov    %eax,(%esp)
080dbdd6 +0x1f73:  call   080dc0e4 <+0x2281>
080dbddb +0x1f78:  mov    %eax,-0xc(%ebp)
080dbdde +0x1f7b:  mov    0xc(%ebp),%eax
080dbde1 +0x1f7e:  mov    %eax,(%esp)
080dbde4 +0x1f81:  call   080da877 <+0xa14>
080dbde9 +0x1f86:  mov    %eax,%ebx
080dbdeb +0x1f88:  mov    0x8(%ebp),%eax
080dbdee +0x1f8b:  mov    %eax,(%esp)
080dbdf1 +0x1f8e:  call   080dbd50 <+0x1eed>
080dbdf6 +0x1f93:  mov    %ebx,0x8(%esp)
080dbdfa +0x1f97:  mov    -0xc(%ebp),%edx
080dbdfd +0x1f9a:  mov    %edx,0x4(%esp)
080dbe01 +0x1f9e:  mov    %eax,(%esp)
080dbe04 +0x1fa1:  call   080dc108 <+0x22a5>
080dbe09 +0x1fa6:  jmp    080dbe3f <+0x1fdc>
080dbe0b +0x1fa8:  mov    %eax,(%esp)
080dbe0e +0x1fab:  call   08725ce0 <__cxa_begin_catch>
080dbe13 +0x1fb0:  mov    -0xc(%ebp),%eax
080dbe16 +0x1fb3:  mov    %eax,0x4(%esp)
080dbe1a +0x1fb7:  mov    0x8(%ebp),%eax
080dbe1d +0x1fba:  mov    %eax,(%esp)
080dbe20 +0x1fbd:  call   080dbd72 <+0x1f0f>
080dbe25 +0x1fc2:  call   08724be0 <__cxa_rethrow>
080dbe2a +0x1fc7:  mov    %edx,%ebx
080dbe2c +0x1fc9:  mov    %eax,%esi
080dbe2e +0x1fcb:  call   08725c30 <__cxa_end_catch>
080dbe33 +0x1fd0:  mov    %esi,%eax
080dbe35 +0x1fd2:  mov    %ebx,%edx
080dbe37 +0x1fd4:  mov    %eax,(%esp)
080dbe3a +0x1fd7:  call   08ae3750 <_Unwind_Resume>
080dbe3f +0x1fdc:  mov    -0xc(%ebp),%eax
080dbe42 +0x1fdf:  add    $0x20,%esp
080dbe45 +0x1fe2:  pop    %ebx
080dbe46 +0x1fe3:  pop    %esi
080dbe47 +0x1fe4:  pop    %ebp
080dbe48 +0x1fe5:  ret
080dbe49 +0x1fe6:  push   %ebp
080dbe4a +0x1fe7:  mov    %esp,%ebp
080dbe4c +0x1fe9:  mov    0x8(%ebp),%eax
080dbe4f +0x1fec:  pop    %ebp
080dbe50 +0x1fed:  ret
080dbe51 +0x1fee:  nop
080dbe52 +0x1fef:  push   %ebp
080dbe53 +0x1ff0:  mov    %esp,%ebp
080dbe55 +0x1ff2:  mov    0x8(%ebp),%eax
080dbe58 +0x1ff5:  movl   $0x0,0x4(%eax)
080dbe5f +0x1ffc:  mov    0x8(%ebp),%eax
080dbe62 +0x1fff:  movl   $0x0,0x8(%eax)
080dbe69 +0x2006:  mov    0x8(%ebp),%eax
080dbe6c +0x2009:  lea    0x4(%eax),%edx
080dbe6f +0x200c:  mov    0x8(%ebp),%eax
080dbe72 +0x200f:  mov    %edx,0xc(%eax)
080dbe75 +0x2012:  mov    0x8(%ebp),%eax
080dbe78 +0x2015:  lea    0x4(%eax),%edx
080dbe7b +0x2018:  mov    0x8(%ebp),%eax
080dbe7e +0x201b:  mov    %edx,0x10(%eax)
080dbe81 +0x201e:  pop    %ebp
080dbe82 +0x201f:  ret
080dbe83 +0x2020:  nop
080dbe84 +0x2021:  push   %ebp
080dbe85 +0x2022:  mov    %esp,%ebp
080dbe87 +0x2024:  mov    0x8(%ebp),%eax
080dbe8a +0x2027:  pop    %ebp
080dbe8b +0x2028:  ret
080dbe8c +0x2029:  push   %ebp
080dbe8d +0x202a:  mov    %esp,%ebp
080dbe8f +0x202c:  sub    $0x18,%esp
080dbe92 +0x202f:  mov    0x8(%ebp),%eax
080dbe95 +0x2032:  movl   $0x1,0x8(%esp)
080dbe9d +0x203a:  mov    0xc(%ebp),%edx
080dbea0 +0x203d:  mov    %edx,0x4(%esp)
080dbea4 +0x2041:  mov    %eax,(%esp)
080dbea7 +0x2044:  call   080c8016 <_GLOBAL__I_g_ServerString_+0x1581>  ; global constructors keyed to g_ServerString_+0x1581
080dbeac +0x2049:  leave
080dbead +0x204a:  ret
080dbeae +0x204b:  push   %ebp
080dbeaf +0x204c:  mov    %esp,%ebp
080dbeb1 +0x204e:  mov    0x8(%ebp),%eax
080dbeb4 +0x2051:  add    $0x10,%eax
080dbeb7 +0x2054:  pop    %ebp
080dbeb8 +0x2055:  ret
080dbeb9 +0x2056:  push   %ebp
080dbeba +0x2057:  mov    %esp,%ebp
080dbebc +0x2059:  sub    $0x28,%esp
080dbebf +0x205c:  mov    0x8(%ebp),%eax
080dbec2 +0x205f:  mov    %eax,(%esp)
080dbec5 +0x2062:  call   080dc147 <+0x22e4>
080dbeca +0x2067:  mov    %eax,0x4(%esp)
080dbece +0x206b:  lea    -0x9(%ebp),%eax
080dbed1 +0x206e:  mov    %eax,(%esp)
080dbed4 +0x2071:  call   080c7892 <_GLOBAL__I_g_ServerString_+0xdfd>  ; global constructors keyed to g_ServerString_+0xdfd
080dbed9 +0x2076:  leave
080dbeda +0x2077:  ret
080dbedb +0x2078:  nop
080dbedc +0x2079:  push   %ebp
080dbedd +0x207a:  mov    %esp,%ebp
080dbedf +0x207c:  push   %esi
080dbee0 +0x207d:  push   %ebx
080dbee1 +0x207e:  sub    $0x20,%esp
080dbee4 +0x2081:  mov    0x8(%ebp),%eax
080dbee7 +0x2084:  mov    %eax,(%esp)
080dbeea +0x2087:  call   080dc152 <+0x22ef>
080dbeef +0x208c:  mov    %eax,-0xc(%ebp)
080dbef2 +0x208f:  mov    0xc(%ebp),%eax
080dbef5 +0x2092:  mov    %eax,(%esp)
080dbef8 +0x2095:  call   080c804d <_GLOBAL__I_g_ServerString_+0x15b8>  ; global constructors keyed to g_ServerString_+0x15b8
080dbefd +0x209a:  mov    %eax,%ebx
080dbeff +0x209c:  mov    0x8(%ebp),%eax
080dbf02 +0x209f:  mov    %eax,(%esp)
080dbf05 +0x20a2:  call   080dbe84 <+0x2021>
080dbf0a +0x20a7:  mov    %ebx,0x8(%esp)
080dbf0e +0x20ab:  mov    -0xc(%ebp),%edx
080dbf11 +0x20ae:  mov    %edx,0x4(%esp)
080dbf15 +0x20b2:  mov    %eax,(%esp)
080dbf18 +0x20b5:  call   080c8056 <_GLOBAL__I_g_ServerString_+0x15c1>  ; global constructors keyed to g_ServerString_+0x15c1
080dbf1d +0x20ba:  jmp    080dbf53 <+0x20f0>
080dbf1f +0x20bc:  mov    %eax,(%esp)
080dbf22 +0x20bf:  call   08725ce0 <__cxa_begin_catch>
080dbf27 +0x20c4:  mov    -0xc(%ebp),%eax
080dbf2a +0x20c7:  mov    %eax,0x4(%esp)
080dbf2e +0x20cb:  mov    0x8(%ebp),%eax
080dbf31 +0x20ce:  mov    %eax,(%esp)
080dbf34 +0x20d1:  call   080dbe8c <+0x2029>
080dbf39 +0x20d6:  call   08724be0 <__cxa_rethrow>
080dbf3e +0x20db:  mov    %edx,%ebx
080dbf40 +0x20dd:  mov    %eax,%esi
080dbf42 +0x20df:  call   08725c30 <__cxa_end_catch>
080dbf47 +0x20e4:  mov    %esi,%eax
080dbf49 +0x20e6:  mov    %ebx,%edx
080dbf4b +0x20e8:  mov    %eax,(%esp)
080dbf4e +0x20eb:  call   08ae3750 <_Unwind_Resume>
080dbf53 +0x20f0:  mov    -0xc(%ebp),%eax
080dbf56 +0x20f3:  add    $0x20,%esp
080dbf59 +0x20f6:  pop    %ebx
080dbf5a +0x20f7:  pop    %esi
080dbf5b +0x20f8:  pop    %ebp
080dbf5c +0x20f9:  ret
080dbf5d +0x20fa:  nop
080dbf5e +0x20fb:  push   %ebp
080dbf5f +0x20fc:  mov    %esp,%ebp
080dbf61 +0x20fe:  sub    $0x18,%esp
080dbf64 +0x2101:  mov    0x8(%ebp),%eax
080dbf67 +0x2104:  mov    %eax,(%esp)
080dbf6a +0x2107:  call   080dc176 <+0x2313>
080dbf6f +0x210c:  leave
080dbf70 +0x210d:  ret
080dbf71 +0x210e:  nop
080dbf72 +0x210f:  push   %ebp
080dbf73 +0x2110:  mov    %esp,%ebp
080dbf75 +0x2112:  pop    %ebp
080dbf76 +0x2113:  ret
080dbf77 +0x2114:  nop
080dbf78 +0x2115:  push   %ebp
080dbf79 +0x2116:  mov    %esp,%ebp
080dbf7b +0x2118:  sub    $0x18,%esp
080dbf7e +0x211b:  mov    0xc(%ebp),%eax
080dbf81 +0x211e:  mov    %eax,(%esp)
080dbf84 +0x2121:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080dbf89 +0x2126:  leave
080dbf8a +0x2127:  ret
080dbf8b +0x2128:  push   %ebp
080dbf8c +0x2129:  mov    %esp,%ebp
080dbf8e +0x212b:  sub    $0x18,%esp
080dbf91 +0x212e:  jmp    080dbfa2 <+0x213f>
080dbf93 +0x2130:  mov    0x8(%ebp),%eax
080dbf96 +0x2133:  mov    %eax,(%esp)
080dbf99 +0x2136:  call   080dc17b <+0x2318>
080dbf9e +0x213b:  addl   $0x28,0x8(%ebp)
080dbfa2 +0x213f:  mov    0x8(%ebp),%eax
080dbfa5 +0x2142:  cmp    0xc(%ebp),%eax
080dbfa8 +0x2145:  setne  %al
080dbfab +0x2148:  test   %al,%al
080dbfad +0x214a:  jne    080dbf93 <+0x2130>
080dbfaf +0x214c:  leave
080dbfb0 +0x214d:  ret
080dbfb1 +0x214e:  push   %ebp
080dbfb2 +0x214f:  mov    %esp,%ebp
080dbfb4 +0x2151:  mov    0x8(%ebp),%eax
080dbfb7 +0x2154:  pop    %ebp
080dbfb8 +0x2155:  ret
080dbfb9 +0x2156:  push   %ebp
080dbfba +0x2157:  mov    %esp,%ebp
080dbfbc +0x2159:  mov    0x8(%ebp),%eax
080dbfbf +0x215c:  pop    %ebp
080dbfc0 +0x215d:  ret
080dbfc1 +0x215e:  push   %ebp
080dbfc2 +0x215f:  mov    %esp,%ebp
080dbfc4 +0x2161:  push   %esi
080dbfc5 +0x2162:  push   %ebx
080dbfc6 +0x2163:  sub    $0x10,%esp
080dbfc9 +0x2166:  mov    0x10(%ebp),%eax
080dbfcc +0x2169:  mov    %eax,(%esp)
080dbfcf +0x216c:  call   080dc18e <+0x232b>
080dbfd4 +0x2171:  mov    %eax,%esi
080dbfd6 +0x2173:  mov    0xc(%ebp),%eax
080dbfd9 +0x2176:  mov    %eax,(%esp)
080dbfdc +0x2179:  call   080dc18e <+0x232b>
080dbfe1 +0x217e:  mov    %eax,%ebx
080dbfe3 +0x2180:  mov    0x8(%ebp),%eax
080dbfe6 +0x2183:  mov    %eax,(%esp)
080dbfe9 +0x2186:  call   080dc18e <+0x232b>
080dbfee +0x218b:  mov    %esi,0x8(%esp)
080dbff2 +0x218f:  mov    %ebx,0x4(%esp)
080dbff6 +0x2193:  mov    %eax,(%esp)
080dbff9 +0x2196:  call   080dc196 <+0x2333>
080dbffe +0x219b:  add    $0x10,%esp
080dc001 +0x219e:  pop    %ebx
080dc002 +0x219f:  pop    %esi
080dc003 +0x21a0:  pop    %ebp
080dc004 +0x21a1:  ret
080dc005 +0x21a2:  nop
080dc006 +0x21a3:  push   %ebp
080dc007 +0x21a4:  mov    %esp,%ebp
080dc009 +0x21a6:  mov    0x8(%ebp),%eax
080dc00c +0x21a9:  mov    0x4(%eax),%eax
080dc00f +0x21ac:  mov    %eax,%edx
080dc011 +0x21ae:  mov    0x8(%ebp),%eax
080dc014 +0x21b1:  mov    (%eax),%eax
080dc016 +0x21b3:  mov    %edx,%ecx
080dc018 +0x21b5:  sub    %eax,%ecx
080dc01a +0x21b7:  mov    %ecx,%eax
080dc01c +0x21b9:  sar    $0x3,%eax
080dc01f +0x21bc:  imul   $0xcccccccd,%eax,%eax
080dc025 +0x21c2:  pop    %ebp
080dc026 +0x21c3:  ret
080dc027 +0x21c4:  nop
080dc028 +0x21c5:  push   %ebp
080dc029 +0x21c6:  mov    %esp,%ebp
080dc02b +0x21c8:  sub    $0x18,%esp
080dc02e +0x21cb:  mov    0x8(%ebp),%eax
080dc031 +0x21ce:  mov    %eax,(%esp)
080dc034 +0x21d1:  call   080dc1bc <+0x2359>
080dc039 +0x21d6:  mov    %eax,(%esp)
080dc03c +0x21d9:  call   080dc1c4 <+0x2361>
080dc041 +0x21de:  leave
080dc042 +0x21df:  ret
080dc043 +0x21e0:  nop
080dc044 +0x21e1:  push   %ebp
080dc045 +0x21e2:  mov    %esp,%ebp
080dc047 +0x21e4:  sub    $0x18,%esp
080dc04a +0x21e7:  mov    0x8(%ebp),%eax
080dc04d +0x21ea:  mov    %eax,(%esp)
080dc050 +0x21ed:  call   080dc1c4 <+0x2361>
080dc055 +0x21f2:  cmp    0xc(%ebp),%eax
080dc058 +0x21f5:  setb   %al
080dc05b +0x21f8:  movzbl %al,%eax
080dc05e +0x21fb:  test   %eax,%eax
080dc060 +0x21fd:  setne  %al
080dc063 +0x2200:  test   %al,%al
080dc065 +0x2202:  je     080dc06c <+0x2209>
080dc067 +0x2204:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
080dc06c +0x2209:  mov    0xc(%ebp),%edx
080dc06f +0x220c:  mov    %edx,%eax
080dc071 +0x220e:  shl    $0x2,%eax
080dc074 +0x2211:  add    %edx,%eax
080dc076 +0x2213:  shl    $0x3,%eax
080dc079 +0x2216:  mov    %eax,(%esp)
080dc07c +0x2219:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080dc081 +0x221e:  leave
080dc082 +0x221f:  ret
080dc083 +0x2220:  push   %ebp
080dc084 +0x2221:  mov    %esp,%ebp
080dc086 +0x2223:  push   %ebx
080dc087 +0x2224:  sub    $0x14,%esp
080dc08a +0x2227:  mov    0x8(%ebp),%ebx
080dc08d +0x222a:  mov    0xc(%ebp),%eax
080dc090 +0x222d:  mov    (%eax),%eax
080dc092 +0x222f:  mov    %eax,0x4(%esp)
080dc096 +0x2233:  mov    %ebx,(%esp)
080dc099 +0x2236:  call   080dc1ce <+0x236b>
080dc09e +0x223b:  mov    %ebx,%eax
080dc0a0 +0x223d:  add    $0x14,%esp
080dc0a3 +0x2240:  pop    %ebx
080dc0a4 +0x2241:  pop    %ebp
080dc0a5 +0x2242:  ret    $0x4
080dc0a8 +0x2245:  push   %ebp
080dc0a9 +0x2246:  mov    %esp,%ebp
080dc0ab +0x2248:  sub    $0x18,%esp
080dc0ae +0x224b:  mov    0x10(%ebp),%eax
080dc0b1 +0x224e:  mov    %eax,0x8(%esp)
080dc0b5 +0x2252:  mov    0xc(%ebp),%eax
080dc0b8 +0x2255:  mov    %eax,0x4(%esp)
080dc0bc +0x2259:  mov    0x8(%ebp),%eax
080dc0bf +0x225c:  mov    %eax,(%esp)
080dc0c2 +0x225f:  call   080dc1db <+0x2378>
080dc0c7 +0x2264:  leave
080dc0c8 +0x2265:  ret
080dc0c9 +0x2266:  nop
080dc0ca +0x2267:  push   %ebp
080dc0cb +0x2268:  mov    %esp,%ebp
080dc0cd +0x226a:  pop    %ebp
080dc0ce +0x226b:  ret
080dc0cf +0x226c:  nop
080dc0d0 +0x226d:  push   %ebp
080dc0d1 +0x226e:  mov    %esp,%ebp
080dc0d3 +0x2270:  sub    $0x18,%esp
080dc0d6 +0x2273:  mov    0xc(%ebp),%eax
080dc0d9 +0x2276:  mov    %eax,(%esp)
080dc0dc +0x2279:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080dc0e1 +0x227e:  leave
080dc0e2 +0x227f:  ret
080dc0e3 +0x2280:  nop
080dc0e4 +0x2281:  push   %ebp
080dc0e5 +0x2282:  mov    %esp,%ebp
080dc0e7 +0x2284:  sub    $0x18,%esp
080dc0ea +0x2287:  mov    0x8(%ebp),%eax
080dc0ed +0x228a:  movl   $0x0,0x8(%esp)
080dc0f5 +0x2292:  movl   $0x1,0x4(%esp)
080dc0fd +0x229a:  mov    %eax,(%esp)
080dc100 +0x229d:  call   080dc1fc <+0x2399>
080dc105 +0x22a2:  leave
080dc106 +0x22a3:  ret
080dc107 +0x22a4:  nop
080dc108 +0x22a5:  push   %ebp
080dc109 +0x22a6:  mov    %esp,%ebp
080dc10b +0x22a8:  push   %ebx
080dc10c +0x22a9:  sub    $0x14,%esp
080dc10f +0x22ac:  mov    0x10(%ebp),%eax
080dc112 +0x22af:  mov    %eax,(%esp)
080dc115 +0x22b2:  call   080da877 <+0xa14>
080dc11a +0x22b7:  mov    %eax,%ebx
080dc11c +0x22b9:  mov    0xc(%ebp),%eax
080dc11f +0x22bc:  mov    %eax,0x4(%esp)
080dc123 +0x22c0:  movl   $0x14,(%esp)
080dc12a +0x22c7:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080dc12f +0x22cc:  mov    %eax,%edx
080dc131 +0x22ce:  test   %edx,%edx
080dc133 +0x22d0:  je     080dc141 <+0x22de>
080dc135 +0x22d2:  mov    %ebx,0x4(%esp)
080dc139 +0x22d6:  mov    %eax,(%esp)
080dc13c +0x22d9:  call   080dc23c <+0x23d9>
080dc141 +0x22de:  add    $0x14,%esp
080dc144 +0x22e1:  pop    %ebx
080dc145 +0x22e2:  pop    %ebp
080dc146 +0x22e3:  ret
080dc147 +0x22e4:  push   %ebp
080dc148 +0x22e5:  mov    %esp,%ebp
080dc14a +0x22e7:  mov    0x8(%ebp),%eax
080dc14d +0x22ea:  add    $0x10,%eax
080dc150 +0x22ed:  pop    %ebp
080dc151 +0x22ee:  ret
080dc152 +0x22ef:  push   %ebp
080dc153 +0x22f0:  mov    %esp,%ebp
080dc155 +0x22f2:  sub    $0x18,%esp
080dc158 +0x22f5:  mov    0x8(%ebp),%eax
080dc15b +0x22f8:  movl   $0x0,0x8(%esp)
080dc163 +0x2300:  movl   $0x1,0x4(%esp)
080dc16b +0x2308:  mov    %eax,(%esp)
080dc16e +0x230b:  call   080c812a <_GLOBAL__I_g_ServerString_+0x1695>  ; global constructors keyed to g_ServerString_+0x1695
080dc173 +0x2310:  leave
080dc174 +0x2311:  ret
080dc175 +0x2312:  nop
080dc176 +0x2313:  push   %ebp
080dc177 +0x2314:  mov    %esp,%ebp
080dc179 +0x2316:  pop    %ebp
080dc17a +0x2317:  ret
080dc17b +0x2318:  push   %ebp
080dc17c +0x2319:  mov    %esp,%ebp
080dc17e +0x231b:  sub    $0x4,%esp
080dc181 +0x231e:  mov    0x8(%ebp),%eax
080dc184 +0x2321:  mov    %eax,(%esp)
080dc187 +0x2324:  call   080d6b02 <_ZN18BlueMarbleUserInfoD1Ev>  ; BlueMarbleUserInfo::~BlueMarbleUserInfo()
080dc18c +0x2329:  leave
080dc18d +0x232a:  ret
080dc18e +0x232b:  push   %ebp
080dc18f +0x232c:  mov    %esp,%ebp
080dc191 +0x232e:  mov    0x8(%ebp),%eax
080dc194 +0x2331:  pop    %ebp
080dc195 +0x2332:  ret
080dc196 +0x2333:  push   %ebp
080dc197 +0x2334:  mov    %esp,%ebp
080dc199 +0x2336:  sub    $0x28,%esp
080dc19c +0x2339:  movb   $0x0,-0x9(%ebp)
080dc1a0 +0x233d:  mov    0x10(%ebp),%eax
080dc1a3 +0x2340:  mov    %eax,0x8(%esp)
080dc1a7 +0x2344:  mov    0xc(%ebp),%eax
080dc1aa +0x2347:  mov    %eax,0x4(%esp)
080dc1ae +0x234b:  mov    0x8(%ebp),%eax
080dc1b1 +0x234e:  mov    %eax,(%esp)
080dc1b4 +0x2351:  call   080dc27e <+0x241b>
080dc1b9 +0x2356:  leave
080dc1ba +0x2357:  ret
080dc1bb +0x2358:  nop
080dc1bc +0x2359:  push   %ebp
080dc1bd +0x235a:  mov    %esp,%ebp
080dc1bf +0x235c:  mov    0x8(%ebp),%eax
080dc1c2 +0x235f:  pop    %ebp
080dc1c3 +0x2360:  ret
080dc1c4 +0x2361:  push   %ebp
080dc1c5 +0x2362:  mov    %esp,%ebp
080dc1c7 +0x2364:  mov    $0x6666666,%eax
080dc1cc +0x2369:  pop    %ebp
080dc1cd +0x236a:  ret
080dc1ce +0x236b:  push   %ebp
080dc1cf +0x236c:  mov    %esp,%ebp
080dc1d1 +0x236e:  mov    0x8(%ebp),%eax
080dc1d4 +0x2371:  mov    0xc(%ebp),%edx
080dc1d7 +0x2374:  mov    %edx,(%eax)
080dc1d9 +0x2376:  pop    %ebp
080dc1da +0x2377:  ret
080dc1db +0x2378:  push   %ebp
080dc1dc +0x2379:  mov    %esp,%ebp
080dc1de +0x237b:  sub    $0x18,%esp
080dc1e1 +0x237e:  mov    0x10(%ebp),%eax
080dc1e4 +0x2381:  mov    %eax,0x8(%esp)
080dc1e8 +0x2385:  mov    0xc(%ebp),%eax
080dc1eb +0x2388:  mov    %eax,0x4(%esp)
080dc1ef +0x238c:  mov    0x8(%ebp),%eax
080dc1f2 +0x238f:  mov    %eax,(%esp)
080dc1f5 +0x2392:  call   080dc307 <+0x24a4>
080dc1fa +0x2397:  leave
080dc1fb +0x2398:  ret
080dc1fc +0x2399:  push   %ebp
080dc1fd +0x239a:  mov    %esp,%ebp
080dc1ff +0x239c:  sub    $0x18,%esp
080dc202 +0x239f:  mov    0x8(%ebp),%eax
080dc205 +0x23a2:  mov    %eax,(%esp)
080dc208 +0x23a5:  call   080dc3de <+0x257b>
080dc20d +0x23aa:  cmp    0xc(%ebp),%eax
080dc210 +0x23ad:  setb   %al
080dc213 +0x23b0:  movzbl %al,%eax
080dc216 +0x23b3:  test   %eax,%eax
080dc218 +0x23b5:  setne  %al
080dc21b +0x23b8:  test   %al,%al
080dc21d +0x23ba:  je     080dc224 <+0x23c1>
080dc21f +0x23bc:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
080dc224 +0x23c1:  mov    0xc(%ebp),%edx
080dc227 +0x23c4:  mov    %edx,%eax
080dc229 +0x23c6:  shl    $0x2,%eax
080dc22c +0x23c9:  add    %edx,%eax
080dc22e +0x23cb:  shl    $0x2,%eax
080dc231 +0x23ce:  mov    %eax,(%esp)
080dc234 +0x23d1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080dc239 +0x23d6:  leave
080dc23a +0x23d7:  ret
080dc23b +0x23d8:  nop
080dc23c +0x23d9:  push   %ebp
080dc23d +0x23da:  mov    %esp,%ebp
080dc23f +0x23dc:  sub    $0x18,%esp
080dc242 +0x23df:  mov    0x8(%ebp),%eax
080dc245 +0x23e2:  movl   $0x0,(%eax)
080dc24b +0x23e8:  mov    0x8(%ebp),%eax
080dc24e +0x23eb:  movl   $0x0,0x4(%eax)
080dc255 +0x23f2:  mov    0x8(%ebp),%eax
080dc258 +0x23f5:  movl   $0x0,0x8(%eax)
080dc25f +0x23fc:  mov    0x8(%ebp),%eax
080dc262 +0x23ff:  movl   $0x0,0xc(%eax)
080dc269 +0x2406:  mov    0xc(%ebp),%eax
080dc26c +0x2409:  mov    %eax,(%esp)
080dc26f +0x240c:  call   080da877 <+0xa14>
080dc274 +0x2411:  mov    (%eax),%edx
080dc276 +0x2413:  mov    0x8(%ebp),%eax
080dc279 +0x2416:  mov    %edx,0x10(%eax)
080dc27c +0x2419:  leave
080dc27d +0x241a:  ret
080dc27e +0x241b:  push   %ebp
080dc27f +0x241c:  mov    %esp,%ebp
080dc281 +0x241e:  push   %ebx
080dc282 +0x241f:  sub    $0x24,%esp
080dc285 +0x2422:  mov    0xc(%ebp),%edx
080dc288 +0x2425:  mov    0x8(%ebp),%eax
080dc28b +0x2428:  mov    %edx,%ecx
080dc28d +0x242a:  sub    %eax,%ecx
080dc28f +0x242c:  mov    %ecx,%eax
080dc291 +0x242e:  sar    $0x3,%eax
080dc294 +0x2431:  imul   $0xcccccccd,%eax,%eax
080dc29a +0x2437:  mov    %eax,-0xc(%ebp)
080dc29d +0x243a:  jmp    080dc2f3 <+0x2490>
080dc29f +0x243c:  subl   $0x28,0x10(%ebp)
080dc2a3 +0x2440:  mov    0x10(%ebp),%ebx
080dc2a6 +0x2443:  subl   $0x28,0xc(%ebp)
080dc2aa +0x2447:  mov    0xc(%ebp),%eax
080dc2ad +0x244a:  mov    %eax,(%esp)
080dc2b0 +0x244d:  call   080dbaa9 <+0x1c46>
080dc2b5 +0x2452:  mov    (%eax),%edx
080dc2b7 +0x2454:  mov    %edx,(%ebx)
080dc2b9 +0x2456:  mov    0x4(%eax),%edx
080dc2bc +0x2459:  mov    %edx,0x4(%ebx)
080dc2bf +0x245c:  mov    0x8(%eax),%edx
080dc2c2 +0x245f:  mov    %edx,0x8(%ebx)
080dc2c5 +0x2462:  mov    0xc(%eax),%edx
080dc2c8 +0x2465:  mov    %edx,0xc(%ebx)
080dc2cb +0x2468:  mov    0x10(%eax),%edx
080dc2ce +0x246b:  mov    %edx,0x10(%ebx)
080dc2d1 +0x246e:  mov    0x14(%eax),%edx
080dc2d4 +0x2471:  mov    %edx,0x14(%ebx)
080dc2d7 +0x2474:  mov    0x18(%eax),%edx
080dc2da +0x2477:  mov    %edx,0x18(%ebx)
080dc2dd +0x247a:  mov    0x1c(%eax),%edx
080dc2e0 +0x247d:  mov    %edx,0x1c(%ebx)
080dc2e3 +0x2480:  mov    0x20(%eax),%edx
080dc2e6 +0x2483:  mov    %edx,0x20(%ebx)
080dc2e9 +0x2486:  mov    0x24(%eax),%eax
080dc2ec +0x2489:  mov    %eax,0x24(%ebx)
080dc2ef +0x248c:  subl   $0x1,-0xc(%ebp)
080dc2f3 +0x2490:  cmpl   $0x0,-0xc(%ebp)
080dc2f7 +0x2494:  setg   %al
080dc2fa +0x2497:  test   %al,%al
080dc2fc +0x2499:  jne    080dc29f <+0x243c>
080dc2fe +0x249b:  mov    0x10(%ebp),%eax
080dc301 +0x249e:  add    $0x24,%esp
080dc304 +0x24a1:  pop    %ebx
080dc305 +0x24a2:  pop    %ebp
080dc306 +0x24a3:  ret
080dc307 +0x24a4:  push   %ebp
080dc308 +0x24a5:  mov    %esp,%ebp
080dc30a +0x24a7:  push   %esi
080dc30b +0x24a8:  push   %ebx
080dc30c +0x24a9:  sub    $0x20,%esp
080dc30f +0x24ac:  mov    0x10(%ebp),%eax
080dc312 +0x24af:  mov    %eax,-0xc(%ebp)
080dc315 +0x24b2:  jmp    080dc386 <+0x2523>
080dc317 +0x24b4:  lea    0x8(%ebp),%eax
080dc31a +0x24b7:  mov    %eax,(%esp)
080dc31d +0x24ba:  call   080dc41c <+0x25b9>
080dc322 +0x24bf:  mov    %eax,%ebx
080dc324 +0x24c1:  mov    -0xc(%ebp),%eax
080dc327 +0x24c4:  mov    %eax,0x4(%esp)
080dc32b +0x24c8:  movl   $0x28,(%esp)
080dc332 +0x24cf:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080dc337 +0x24d4:  mov    %eax,%edx
080dc339 +0x24d6:  test   %edx,%edx
080dc33b +0x24d8:  je     080dc377 <+0x2514>
080dc33d +0x24da:  mov    (%ebx),%edx
080dc33f +0x24dc:  mov    %edx,(%eax)
080dc341 +0x24de:  mov    0x4(%ebx),%edx
080dc344 +0x24e1:  mov    %edx,0x4(%eax)
080dc347 +0x24e4:  mov    0x8(%ebx),%edx
080dc34a +0x24e7:  mov    %edx,0x8(%eax)
080dc34d +0x24ea:  mov    0xc(%ebx),%edx
080dc350 +0x24ed:  mov    %edx,0xc(%eax)
080dc353 +0x24f0:  mov    0x10(%ebx),%edx
080dc356 +0x24f3:  mov    %edx,0x10(%eax)
080dc359 +0x24f6:  mov    0x14(%ebx),%edx
080dc35c +0x24f9:  mov    %edx,0x14(%eax)
080dc35f +0x24fc:  mov    0x18(%ebx),%edx
080dc362 +0x24ff:  mov    %edx,0x18(%eax)
080dc365 +0x2502:  mov    0x1c(%ebx),%edx
080dc368 +0x2505:  mov    %edx,0x1c(%eax)
080dc36b +0x2508:  mov    0x20(%ebx),%edx
080dc36e +0x250b:  mov    %edx,0x20(%eax)
080dc371 +0x250e:  mov    0x24(%ebx),%edx
080dc374 +0x2511:  mov    %edx,0x24(%eax)
080dc377 +0x2514:  lea    0x8(%ebp),%eax
080dc37a +0x2517:  mov    %eax,(%esp)
080dc37d +0x251a:  call   080dc406 <+0x25a3>
080dc382 +0x251f:  addl   $0x28,-0xc(%ebp)
080dc386 +0x2523:  lea    0xc(%ebp),%eax
080dc389 +0x2526:  mov    %eax,0x4(%esp)
080dc38d +0x252a:  lea    0x8(%ebp),%eax
080dc390 +0x252d:  mov    %eax,(%esp)
080dc393 +0x2530:  call   080dc3e8 <+0x2585>
080dc398 +0x2535:  test   %al,%al
080dc39a +0x2537:  jne    080dc317 <+0x24b4>
080dc3a0 +0x253d:  mov    -0xc(%ebp),%eax
080dc3a3 +0x2540:  add    $0x20,%esp
080dc3a6 +0x2543:  pop    %ebx
080dc3a7 +0x2544:  pop    %esi
080dc3a8 +0x2545:  pop    %ebp
080dc3a9 +0x2546:  ret
080dc3aa +0x2547:  mov    %eax,(%esp)
080dc3ad +0x254a:  call   08725ce0 <__cxa_begin_catch>
080dc3b2 +0x254f:  mov    -0xc(%ebp),%eax
080dc3b5 +0x2552:  mov    %eax,0x4(%esp)
080dc3b9 +0x2556:  mov    0x10(%ebp),%eax
080dc3bc +0x2559:  mov    %eax,(%esp)
080dc3bf +0x255c:  call   080dba7f <+0x1c1c>
080dc3c4 +0x2561:  call   08724be0 <__cxa_rethrow>
080dc3c9 +0x2566:  mov    %edx,%ebx
080dc3cb +0x2568:  mov    %eax,%esi
080dc3cd +0x256a:  call   08725c30 <__cxa_end_catch>
080dc3d2 +0x256f:  mov    %esi,%eax
080dc3d4 +0x2571:  mov    %ebx,%edx
080dc3d6 +0x2573:  mov    %eax,(%esp)
080dc3d9 +0x2576:  call   08ae3750 <_Unwind_Resume>
080dc3de +0x257b:  push   %ebp
080dc3df +0x257c:  mov    %esp,%ebp
080dc3e1 +0x257e:  mov    $0xccccccc,%eax
080dc3e6 +0x2583:  pop    %ebp
080dc3e7 +0x2584:  ret
080dc3e8 +0x2585:  push   %ebp
080dc3e9 +0x2586:  mov    %esp,%ebp
080dc3eb +0x2588:  sub    $0x18,%esp
080dc3ee +0x258b:  mov    0xc(%ebp),%eax
080dc3f1 +0x258e:  mov    %eax,0x4(%esp)
080dc3f5 +0x2592:  mov    0x8(%ebp),%eax
080dc3f8 +0x2595:  mov    %eax,(%esp)
080dc3fb +0x2598:  call   080dc426 <+0x25c3>
080dc400 +0x259d:  xor    $0x1,%eax
080dc403 +0x25a0:  leave
080dc404 +0x25a1:  ret
080dc405 +0x25a2:  nop
080dc406 +0x25a3:  push   %ebp
080dc407 +0x25a4:  mov    %esp,%ebp
080dc409 +0x25a6:  mov    0x8(%ebp),%eax
080dc40c +0x25a9:  mov    (%eax),%eax
080dc40e +0x25ab:  lea    0x28(%eax),%edx
080dc411 +0x25ae:  mov    0x8(%ebp),%eax
080dc414 +0x25b1:  mov    %edx,(%eax)
080dc416 +0x25b3:  mov    0x8(%ebp),%eax
080dc419 +0x25b6:  pop    %ebp
080dc41a +0x25b7:  ret
080dc41b +0x25b8:  nop
080dc41c +0x25b9:  push   %ebp
080dc41d +0x25ba:  mov    %esp,%ebp
080dc41f +0x25bc:  mov    0x8(%ebp),%eax
080dc422 +0x25bf:  mov    (%eax),%eax
080dc424 +0x25c1:  pop    %ebp
080dc425 +0x25c2:  ret
080dc426 +0x25c3:  push   %ebp
080dc427 +0x25c4:  mov    %esp,%ebp
080dc429 +0x25c6:  push   %ebx
080dc42a +0x25c7:  sub    $0x14,%esp
080dc42d +0x25ca:  mov    0x8(%ebp),%eax
080dc430 +0x25cd:  mov    %eax,(%esp)
080dc433 +0x25d0:  call   080dc450 <+0x25ed>
080dc438 +0x25d5:  mov    %eax,%ebx
080dc43a +0x25d7:  mov    0xc(%ebp),%eax
080dc43d +0x25da:  mov    %eax,(%esp)
080dc440 +0x25dd:  call   080dc450 <+0x25ed>
080dc445 +0x25e2:  cmp    %eax,%ebx
080dc447 +0x25e4:  sete   %al
080dc44a +0x25e7:  add    $0x14,%esp
080dc44d +0x25ea:  pop    %ebx
080dc44e +0x25eb:  pop    %ebp
080dc44f +0x25ec:  ret
080dc450 +0x25ed:  push   %ebp
080dc451 +0x25ee:  mov    %esp,%ebp
080dc453 +0x25f0:  mov    0x8(%ebp),%eax
080dc456 +0x25f3:  mov    (%eax),%eax
080dc458 +0x25f5:  pop    %ebp
080dc459 +0x25f6:  ret
080dc45a +0x25f7:  nop
080dc45b +0x25f8:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80d9e63

/* BlueMarbleUserInfo::BlueMarbleUserInfo() */

void BlueMarbleUserInfo::_GLOBAL__I_BlueMarbleUserInfo(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
