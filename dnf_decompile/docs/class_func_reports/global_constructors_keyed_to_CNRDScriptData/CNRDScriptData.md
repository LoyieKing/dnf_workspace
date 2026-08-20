# CNRDScriptData

`_GLOBAL__I__ZN14CNRDScriptDataC2Ev`

`global constructors keyed to CNRDScriptData::CNRDScriptData()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CNRDScriptData` | `0x0807ffda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0807ffda  _GLOBAL__I__ZN14CNRDScriptDataC2Ev
#           global constructors keyed to CNRDScriptData::CNRDScriptData()
# range [0x0807ffda, 0x08083c4b]
0807ffda +0x0000:  push   %ebp
0807ffdb +0x0001:  mov    %esp,%ebp
0807ffdd +0x0003:  sub    $0x18,%esp
0807ffe0 +0x0006:  movl   $0xffff,0x4(%esp)
0807ffe8 +0x000e:  movl   $0x1,(%esp)
0807ffef +0x0015:  call   0807ff9a <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0807fff4 +0x001a:  leave
0807fff5 +0x001b:  ret
0807fff6 +0x001c:  push   %ebp
0807fff7 +0x001d:  mov    %esp,%ebp
0807fff9 +0x001f:  pop    %ebp
0807fffa +0x0020:  ret
0807fffb +0x0021:  nop
0807fffc +0x0022:  push   %ebp
0807fffd +0x0023:  mov    %esp,%ebp
0807ffff +0x0025:  mov    0x8(%ebp),%eax
08080002 +0x0028:  mov    (%eax),%eax
08080004 +0x002a:  pop    %ebp
08080005 +0x002b:  ret
08080006 +0x002c:  push   %ebp
08080007 +0x002d:  mov    %esp,%ebp
08080009 +0x002f:  mov    0xc(%ebp),%eax
0808000c +0x0032:  mov    $0x0,%edx
08080011 +0x0037:  divl   0x10(%ebp)
08080014 +0x003a:  mov    %edx,%eax
08080016 +0x003c:  pop    %ebp
08080017 +0x003d:  ret
08080018 +0x003e:  push   %ebp
08080019 +0x003f:  mov    %esp,%ebp
0808001b +0x0041:  mov    0x8(%ebp),%eax
0808001e +0x0044:  mov    0xc(%ebp),%edx
08080021 +0x0047:  mov    %edx,(%eax)
08080023 +0x0049:  mov    0x8(%ebp),%eax
08080026 +0x004c:  mov    $0x40000000,%edx
0808002b +0x0051:  mov    %edx,0x4(%eax)
0808002e +0x0054:  mov    0x8(%ebp),%eax
08080031 +0x0057:  movl   $0x0,0x8(%eax)
08080038 +0x005e:  pop    %ebp
08080039 +0x005f:  ret
0808003a +0x0060:  push   %ebp
0808003b +0x0061:  mov    %esp,%ebp
0808003d +0x0063:  sub    $0x38,%esp
08080040 +0x0066:  lea    0xc(%ebp),%eax
08080043 +0x0069:  mov    %eax,0x8(%esp)
08080047 +0x006d:  movl   $"����",0x4(%esp)
0808004f +0x0075:  movl   $&_ZNSt8__detail12__prime_listE,(%esp)
08080056 +0x007c:  call   08080511 <+0x537>
0808005b +0x0081:  mov    %eax,-0xc(%ebp)
0808005e +0x0084:  mov    -0xc(%ebp),%eax
08080061 +0x0087:  mov    (%eax),%eax
08080063 +0x0089:  mov    $0x0,%edx
08080068 +0x008e:  mov    %eax,-0x20(%ebp)
0808006b +0x0091:  mov    %edx,-0x1c(%ebp)
0808006e +0x0094:  fildll -0x20(%ebp)
08080071 +0x0097:  mov    0x8(%ebp),%eax
08080074 +0x009a:  flds   (%eax)
08080076 +0x009c:  fmulp  %st,%st(1)
08080078 +0x009e:  fstpl  (%esp)
0808007b +0x00a1:  call   0807e3c0 <_init+0xcb8>
08080080 +0x00a6:  fnstcw -0x22(%ebp)
08080083 +0x00a9:  movzwl -0x22(%ebp),%eax
08080087 +0x00ad:  mov    $0xc,%ah
08080089 +0x00af:  mov    %ax,-0x24(%ebp)
0808008d +0x00b3:  fldcw  -0x24(%ebp)
08080090 +0x00b6:  fistpll -0x20(%ebp)
08080093 +0x00b9:  fldcw  -0x22(%ebp)
08080096 +0x00bc:  mov    -0x20(%ebp),%eax
08080099 +0x00bf:  mov    -0x1c(%ebp),%edx
0808009c +0x00c2:  mov    %eax,%edx
0808009e +0x00c4:  mov    0x8(%ebp),%eax
080800a1 +0x00c7:  mov    %edx,0x8(%eax)
080800a4 +0x00ca:  mov    -0xc(%ebp),%eax
080800a7 +0x00cd:  mov    (%eax),%eax
080800a9 +0x00cf:  leave
080800aa +0x00d0:  ret
080800ab +0x00d1:  nop
080800ac +0x00d2:  push   %ebp
080800ad +0x00d3:  mov    %esp,%ebp
080800af +0x00d5:  push   %ebx
080800b0 +0x00d6:  sub    $0x64,%esp
080800b3 +0x00d9:  mov    0x8(%ebp),%ebx
080800b6 +0x00dc:  mov    0x18(%ebp),%eax
080800b9 +0x00df:  mov    0x14(%ebp),%edx
080800bc +0x00e2:  add    %eax,%edx
080800be +0x00e4:  mov    0xc(%ebp),%eax
080800c1 +0x00e7:  mov    0x8(%eax),%eax
080800c4 +0x00ea:  cmp    %eax,%edx
080800c6 +0x00ec:  jbe    08080267 <+0x28d>
080800cc +0x00f2:  mov    0x18(%ebp),%eax
080800cf +0x00f5:  mov    $0x0,%edx
080800d4 +0x00fa:  mov    %eax,-0x50(%ebp)
080800d7 +0x00fd:  mov    %edx,-0x4c(%ebp)
080800da +0x0100:  fildll -0x50(%ebp)
080800dd +0x0103:  mov    0x14(%ebp),%eax
080800e0 +0x0106:  mov    $0x0,%edx
080800e5 +0x010b:  mov    %eax,-0x50(%ebp)
080800e8 +0x010e:  mov    %edx,-0x4c(%ebp)
080800eb +0x0111:  fildll -0x50(%ebp)
080800ee +0x0114:  faddp  %st,%st(1)
080800f0 +0x0116:  mov    0xc(%ebp),%eax
080800f3 +0x0119:  flds   (%eax)
080800f5 +0x011b:  fdivrp %st,%st(1)
080800f7 +0x011d:  fstps  -0x40(%ebp)
080800fa +0x0120:  mov    0x10(%ebp),%eax
080800fd +0x0123:  mov    $0x0,%edx
08080102 +0x0128:  mov    %eax,-0x50(%ebp)
08080105 +0x012b:  mov    %edx,-0x4c(%ebp)
08080108 +0x012e:  fildll -0x50(%ebp)
0808010b +0x0131:  flds   -0x40(%ebp)
0808010e +0x0134:  fucompp
08080110 +0x0136:  fnstsw %ax
08080112 +0x0138:  test   $0x45,%ah
08080115 +0x013b:  sete   %al
08080118 +0x013e:  test   %al,%al
0808011a +0x0140:  je     080801eb <+0x211>
08080120 +0x0146:  mov    0xc(%ebp),%eax
08080123 +0x0149:  flds   0x4(%eax)
08080126 +0x014c:  mov    0x10(%ebp),%eax
08080129 +0x014f:  mov    $0x0,%edx
0808012e +0x0154:  mov    %eax,-0x50(%ebp)
08080131 +0x0157:  mov    %edx,-0x4c(%ebp)
08080134 +0x015a:  fildll -0x50(%ebp)
08080137 +0x015d:  fmulp  %st,%st(1)
08080139 +0x015f:  fstps  -0x3c(%ebp)
0808013c +0x0162:  lea    -0x3c(%ebp),%eax
0808013f +0x0165:  mov    %eax,0x4(%esp)
08080143 +0x0169:  lea    -0x40(%ebp),%eax
08080146 +0x016c:  mov    %eax,(%esp)
08080149 +0x016f:  call   08080609 <+0x62f>
0808014e +0x0174:  mov    (%eax),%eax
08080150 +0x0176:  mov    %eax,-0x40(%ebp)
08080153 +0x0179:  lea    -0x40(%ebp),%eax
08080156 +0x017c:  mov    %eax,0x8(%esp)
0808015a +0x0180:  movl   $"����",0x4(%esp)
08080162 +0x0188:  movl   $&_ZNSt8__detail12__prime_listE,(%esp)
08080169 +0x018f:  call   08080581 <+0x5a7>
0808016e +0x0194:  mov    %eax,-0xc(%ebp)
08080171 +0x0197:  mov    -0xc(%ebp),%eax
08080174 +0x019a:  mov    (%eax),%eax
08080176 +0x019c:  mov    $0x0,%edx
0808017b +0x01a1:  mov    %eax,-0x50(%ebp)
0808017e +0x01a4:  mov    %edx,-0x4c(%ebp)
08080181 +0x01a7:  fildll -0x50(%ebp)
08080184 +0x01aa:  mov    0xc(%ebp),%eax
08080187 +0x01ad:  flds   (%eax)
08080189 +0x01af:  fmulp  %st,%st(1)
0808018b +0x01b1:  fstpl  (%esp)
0808018e +0x01b4:  call   0807e3c0 <_init+0xcb8>
08080193 +0x01b9:  fnstcw -0x52(%ebp)
08080196 +0x01bc:  movzwl -0x52(%ebp),%eax
0808019a +0x01c0:  mov    $0xc,%ah
0808019c +0x01c2:  mov    %ax,-0x54(%ebp)
080801a0 +0x01c6:  fldcw  -0x54(%ebp)
080801a3 +0x01c9:  fistpll -0x50(%ebp)
080801a6 +0x01cc:  fldcw  -0x52(%ebp)
080801a9 +0x01cf:  mov    -0x50(%ebp),%eax
080801ac +0x01d2:  mov    -0x4c(%ebp),%edx
080801af +0x01d5:  mov    %eax,%edx
080801b1 +0x01d7:  mov    0xc(%ebp),%eax
080801b4 +0x01da:  mov    %edx,0x8(%eax)
080801b7 +0x01dd:  movb   $0x1,-0x2d(%ebp)
080801bb +0x01e1:  lea    -0x38(%ebp),%eax
080801be +0x01e4:  mov    -0xc(%ebp),%edx
080801c1 +0x01e7:  mov    %edx,0x8(%esp)
080801c5 +0x01eb:  lea    -0x2d(%ebp),%edx
080801c8 +0x01ee:  mov    %edx,0x4(%esp)
080801cc +0x01f2:  mov    %eax,(%esp)
080801cf +0x01f5:  call   0808062e <+0x654>
080801d4 +0x01fa:  sub    $0x4,%esp
080801d7 +0x01fd:  lea    -0x38(%ebp),%eax
080801da +0x0200:  mov    %eax,0x4(%esp)
080801de +0x0204:  mov    %ebx,(%esp)
080801e1 +0x0207:  call   08080676 <+0x69c>
080801e6 +0x020c:  jmp    0808029d <+0x2c3>
080801eb +0x0211:  mov    0x10(%ebp),%eax
080801ee +0x0214:  mov    $0x0,%edx
080801f3 +0x0219:  mov    %eax,-0x50(%ebp)
080801f6 +0x021c:  mov    %edx,-0x4c(%ebp)
080801f9 +0x021f:  fildll -0x50(%ebp)
080801fc +0x0222:  mov    0xc(%ebp),%eax
080801ff +0x0225:  flds   (%eax)
08080201 +0x0227:  fmulp  %st,%st(1)
08080203 +0x0229:  fstpl  (%esp)
08080206 +0x022c:  call   0807e3c0 <_init+0xcb8>
0808020b +0x0231:  fnstcw -0x52(%ebp)
0808020e +0x0234:  movzwl -0x52(%ebp),%eax
08080212 +0x0238:  mov    $0xc,%ah
08080214 +0x023a:  mov    %ax,-0x54(%ebp)
08080218 +0x023e:  fldcw  -0x54(%ebp)
0808021b +0x0241:  fistpll -0x50(%ebp)
0808021e +0x0244:  fldcw  -0x52(%ebp)
08080221 +0x0247:  mov    -0x50(%ebp),%eax
08080224 +0x024a:  mov    -0x4c(%ebp),%edx
08080227 +0x024d:  mov    %eax,%edx
08080229 +0x024f:  mov    0xc(%ebp),%eax
0808022c +0x0252:  mov    %edx,0x8(%eax)
0808022f +0x0255:  movl   $0x0,-0x24(%ebp)
08080236 +0x025c:  movb   $0x0,-0x1d(%ebp)
0808023a +0x0260:  lea    -0x2c(%ebp),%eax
0808023d +0x0263:  lea    -0x24(%ebp),%edx
08080240 +0x0266:  mov    %edx,0x8(%esp)
08080244 +0x026a:  lea    -0x1d(%ebp),%edx
08080247 +0x026d:  mov    %edx,0x4(%esp)
0808024b +0x0271:  mov    %eax,(%esp)
0808024e +0x0274:  call   080806a7 <+0x6cd>
08080253 +0x0279:  sub    $0x4,%esp
08080256 +0x027c:  lea    -0x2c(%ebp),%eax
08080259 +0x027f:  mov    %eax,0x4(%esp)
0808025d +0x0283:  mov    %ebx,(%esp)
08080260 +0x0286:  call   080806f2 <+0x718>
08080265 +0x028b:  jmp    0808029d <+0x2c3>
08080267 +0x028d:  movl   $0x0,-0x14(%ebp)
0808026e +0x0294:  movb   $0x0,-0xd(%ebp)
08080272 +0x0298:  lea    -0x1c(%ebp),%eax
08080275 +0x029b:  lea    -0x14(%ebp),%edx
08080278 +0x029e:  mov    %edx,0x8(%esp)
0808027c +0x02a2:  lea    -0xd(%ebp),%edx
0808027f +0x02a5:  mov    %edx,0x4(%esp)
08080283 +0x02a9:  mov    %eax,(%esp)
08080286 +0x02ac:  call   080806a7 <+0x6cd>
0808028b +0x02b1:  sub    $0x4,%esp
0808028e +0x02b4:  lea    -0x1c(%ebp),%eax
08080291 +0x02b7:  mov    %eax,0x4(%esp)
08080295 +0x02bb:  mov    %ebx,(%esp)
08080298 +0x02be:  call   080806f2 <+0x718>
0808029d +0x02c3:  mov    %ebx,%eax
0808029f +0x02c5:  mov    -0x4(%ebp),%ebx
080802a2 +0x02c8:  leave
080802a3 +0x02c9:  ret    $0x4
080802a6 +0x02cc:  push   %ebp
080802a7 +0x02cd:  mov    %esp,%ebp
080802a9 +0x02cf:  sub    $0x10,%esp
080802ac +0x02d2:  movl   $0x0,-0x8(%ebp)
080802b3 +0x02d9:  mov    0xc(%ebp),%eax
080802b6 +0x02dc:  movzbl (%eax),%eax
080802b9 +0x02df:  mov    %al,-0x1(%ebp)
080802bc +0x02e2:  addl   $0x1,0xc(%ebp)
080802c0 +0x02e6:  cmpb   $0x0,-0x1(%ebp)
080802c4 +0x02ea:  je     080802e8 <+0x30e>
080802c6 +0x02ec:  mov    -0x8(%ebp),%eax
080802c9 +0x02ef:  mov    %eax,%edx
080802cb +0x02f1:  shl    $0x6,%edx
080802ce +0x02f4:  mov    -0x8(%ebp),%eax
080802d1 +0x02f7:  shl    $0x10,%eax
080802d4 +0x02fa:  lea    (%edx,%eax,1),%eax
080802d7 +0x02fd:  mov    %eax,%edx
080802d9 +0x02ff:  sub    -0x8(%ebp),%edx
080802dc +0x0302:  movsbl -0x1(%ebp),%eax
080802e0 +0x0306:  lea    (%edx,%eax,1),%eax
080802e3 +0x0309:  mov    %eax,-0x8(%ebp)
080802e6 +0x030c:  jmp    080802b3 <+0x2d9>
080802e8 +0x030e:  mov    -0x8(%ebp),%eax
080802eb +0x0311:  leave
080802ec +0x0312:  ret
080802ed +0x0313:  nop
080802ee +0x0314:  push   %ebp
080802ef +0x0315:  mov    %esp,%ebp
080802f1 +0x0317:  sub    $0x18,%esp
080802f4 +0x031a:  mov    0xc(%ebp),%eax
080802f7 +0x031d:  cmp    0x10(%ebp),%eax
080802fa +0x0320:  je     08080312 <+0x338>
080802fc +0x0322:  mov    0x10(%ebp),%eax
080802ff +0x0325:  mov    %eax,0x4(%esp)
08080303 +0x0329:  mov    0xc(%ebp),%eax
08080306 +0x032c:  mov    %eax,(%esp)
08080309 +0x032f:  call   0807e4e0 <_init+0xdd8>
0808030e +0x0334:  test   %eax,%eax
08080310 +0x0336:  jne    08080319 <+0x33f>
08080312 +0x0338:  mov    $0x1,%eax
08080317 +0x033d:  jmp    0808031e <+0x344>
08080319 +0x033f:  mov    $0x0,%eax
0808031e +0x0344:  leave
0808031f +0x0345:  ret
08080320 +0x0346:  push   %ebp
08080321 +0x0347:  mov    %esp,%ebp
08080323 +0x0349:  sub    $0x18,%esp
08080326 +0x034c:  mov    0x8(%ebp),%eax
08080329 +0x034f:  mov    %eax,(%esp)
0808032c +0x0352:  call   0808077e <+0x7a4>
08080331 +0x0357:  leave
08080332 +0x0358:  ret
08080333 +0x0359:  nop
08080334 +0x035a:  push   %ebp
08080335 +0x035b:  mov    %esp,%ebp
08080337 +0x035d:  sub    $0x18,%esp
0808033a +0x0360:  mov    0x8(%ebp),%eax
0808033d +0x0363:  mov    %eax,(%esp)
08080340 +0x0366:  call   08080320 <+0x346>
08080345 +0x036b:  leave
08080346 +0x036c:  ret
08080347 +0x036d:  nop
08080348 +0x036e:  push   %ebp
08080349 +0x036f:  mov    %esp,%ebp
0808034b +0x0371:  push   %esi
0808034c +0x0372:  push   %ebx
0808034d +0x0373:  sub    $0x30,%esp
08080350 +0x0376:  lea    -0xb(%ebp),%eax
08080353 +0x0379:  mov    %eax,(%esp)
08080356 +0x037c:  call   08080726 <+0x74c>
0808035b +0x0381:  mov    0x8(%ebp),%eax
0808035e +0x0384:  lea    -0xb(%ebp),%edx
08080361 +0x0387:  mov    %edx,0x10(%esp)
08080365 +0x038b:  lea    -0xa(%ebp),%edx
08080368 +0x038e:  mov    %edx,0xc(%esp)
0808036c +0x0392:  lea    -0x9(%ebp),%edx
0808036f +0x0395:  mov    %edx,0x8(%esp)
08080373 +0x0399:  movl   $0xa,0x4(%esp)
0808037b +0x03a1:  mov    %eax,(%esp)
0808037e +0x03a4:  call   0808074e <+0x774>
08080383 +0x03a9:  jmp    080803a0 <+0x3c6>
08080385 +0x03ab:  mov    %edx,%ebx
08080387 +0x03ad:  mov    %eax,%esi
08080389 +0x03af:  lea    -0xb(%ebp),%eax
0808038c +0x03b2:  mov    %eax,(%esp)
0808038f +0x03b5:  call   0808073a <+0x760>
08080394 +0x03ba:  mov    %esi,%eax
08080396 +0x03bc:  mov    %ebx,%edx
08080398 +0x03be:  mov    %eax,(%esp)
0808039b +0x03c1:  call   08ae3750 <_Unwind_Resume>
080803a0 +0x03c6:  lea    -0xb(%ebp),%eax
080803a3 +0x03c9:  mov    %eax,(%esp)
080803a6 +0x03cc:  call   0808073a <+0x760>
080803ab +0x03d1:  add    $0x30,%esp
080803ae +0x03d4:  pop    %ebx
080803af +0x03d5:  pop    %esi
080803b0 +0x03d6:  pop    %ebp
080803b1 +0x03d7:  ret
080803b2 +0x03d8:  push   %ebp
080803b3 +0x03d9:  mov    %esp,%ebp
080803b5 +0x03db:  sub    $0x18,%esp
080803b8 +0x03de:  mov    0x8(%ebp),%eax
080803bb +0x03e1:  mov    %eax,(%esp)
080803be +0x03e4:  call   08080334 <+0x35a>
080803c3 +0x03e9:  leave
080803c4 +0x03ea:  ret
080803c5 +0x03eb:  nop
080803c6 +0x03ec:  push   %ebp
080803c7 +0x03ed:  mov    %esp,%ebp
080803c9 +0x03ef:  sub    $0x18,%esp
080803cc +0x03f2:  mov    0x8(%ebp),%eax
080803cf +0x03f5:  mov    %eax,(%esp)
080803d2 +0x03f8:  call   0808083e <+0x864>
080803d7 +0x03fd:  leave
080803d8 +0x03fe:  ret
080803d9 +0x03ff:  nop
080803da +0x0400:  push   %ebp
080803db +0x0401:  mov    %esp,%ebp
080803dd +0x0403:  sub    $0x18,%esp
080803e0 +0x0406:  mov    0x8(%ebp),%eax
080803e3 +0x0409:  mov    %eax,(%esp)
080803e6 +0x040c:  call   080803c6 <+0x3ec>
080803eb +0x0411:  leave
080803ec +0x0412:  ret
080803ed +0x0413:  nop
080803ee +0x0414:  push   %ebp
080803ef +0x0415:  mov    %esp,%ebp
080803f1 +0x0417:  push   %esi
080803f2 +0x0418:  push   %ebx
080803f3 +0x0419:  sub    $0x30,%esp
080803f6 +0x041c:  lea    -0xb(%ebp),%eax
080803f9 +0x041f:  mov    %eax,(%esp)
080803fc +0x0422:  call   080807e6 <+0x80c>
08080401 +0x0427:  mov    0x8(%ebp),%eax
08080404 +0x042a:  lea    -0xb(%ebp),%edx
08080407 +0x042d:  mov    %edx,0x10(%esp)
0808040b +0x0431:  lea    -0xa(%ebp),%edx
0808040e +0x0434:  mov    %edx,0xc(%esp)
08080412 +0x0438:  lea    -0x9(%ebp),%edx
08080415 +0x043b:  mov    %edx,0x8(%esp)
08080419 +0x043f:  movl   $0xa,0x4(%esp)
08080421 +0x0447:  mov    %eax,(%esp)
08080424 +0x044a:  call   0808080e <+0x834>
08080429 +0x044f:  jmp    08080446 <+0x46c>
0808042b +0x0451:  mov    %edx,%ebx
0808042d +0x0453:  mov    %eax,%esi
0808042f +0x0455:  lea    -0xb(%ebp),%eax
08080432 +0x0458:  mov    %eax,(%esp)
08080435 +0x045b:  call   080807fa <+0x820>
0808043a +0x0460:  mov    %esi,%eax
0808043c +0x0462:  mov    %ebx,%edx
0808043e +0x0464:  mov    %eax,(%esp)
08080441 +0x0467:  call   08ae3750 <_Unwind_Resume>
08080446 +0x046c:  lea    -0xb(%ebp),%eax
08080449 +0x046f:  mov    %eax,(%esp)
0808044c +0x0472:  call   080807fa <+0x820>
08080451 +0x0477:  add    $0x30,%esp
08080454 +0x047a:  pop    %ebx
08080455 +0x047b:  pop    %esi
08080456 +0x047c:  pop    %ebp
08080457 +0x047d:  ret
08080458 +0x047e:  push   %ebp
08080459 +0x047f:  mov    %esp,%ebp
0808045b +0x0481:  sub    $0x18,%esp
0808045e +0x0484:  mov    0x8(%ebp),%eax
08080461 +0x0487:  mov    %eax,(%esp)
08080464 +0x048a:  call   080803da <+0x400>
08080469 +0x048f:  leave
0808046a +0x0490:  ret
0808046b +0x0491:  nop
0808046c +0x0492:  push   %ebp
0808046d +0x0493:  mov    %esp,%ebp
0808046f +0x0495:  sub    $0x18,%esp
08080472 +0x0498:  mov    0x8(%ebp),%eax
08080475 +0x049b:  mov    %eax,(%esp)
08080478 +0x049e:  call   080808fe <+0x924>
0808047d +0x04a3:  leave
0808047e +0x04a4:  ret
0808047f +0x04a5:  nop
08080480 +0x04a6:  push   %ebp
08080481 +0x04a7:  mov    %esp,%ebp
08080483 +0x04a9:  sub    $0x18,%esp
08080486 +0x04ac:  mov    0x8(%ebp),%eax
08080489 +0x04af:  mov    %eax,(%esp)
0808048c +0x04b2:  call   0808046c <+0x492>
08080491 +0x04b7:  leave
08080492 +0x04b8:  ret
08080493 +0x04b9:  nop
08080494 +0x04ba:  push   %ebp
08080495 +0x04bb:  mov    %esp,%ebp
08080497 +0x04bd:  push   %esi
08080498 +0x04be:  push   %ebx
08080499 +0x04bf:  sub    $0x30,%esp
0808049c +0x04c2:  lea    -0xb(%ebp),%eax
0808049f +0x04c5:  mov    %eax,(%esp)
080804a2 +0x04c8:  call   080808a6 <+0x8cc>
080804a7 +0x04cd:  mov    0x8(%ebp),%eax
080804aa +0x04d0:  lea    -0xb(%ebp),%edx
080804ad +0x04d3:  mov    %edx,0x10(%esp)
080804b1 +0x04d7:  lea    -0xa(%ebp),%edx
080804b4 +0x04da:  mov    %edx,0xc(%esp)
080804b8 +0x04de:  lea    -0x9(%ebp),%edx
080804bb +0x04e1:  mov    %edx,0x8(%esp)
080804bf +0x04e5:  movl   $0xa,0x4(%esp)
080804c7 +0x04ed:  mov    %eax,(%esp)
080804ca +0x04f0:  call   080808ce <+0x8f4>
080804cf +0x04f5:  jmp    080804ec <+0x512>
080804d1 +0x04f7:  mov    %edx,%ebx
080804d3 +0x04f9:  mov    %eax,%esi
080804d5 +0x04fb:  lea    -0xb(%ebp),%eax
080804d8 +0x04fe:  mov    %eax,(%esp)
080804db +0x0501:  call   080808ba <+0x8e0>
080804e0 +0x0506:  mov    %esi,%eax
080804e2 +0x0508:  mov    %ebx,%edx
080804e4 +0x050a:  mov    %eax,(%esp)
080804e7 +0x050d:  call   08ae3750 <_Unwind_Resume>
080804ec +0x0512:  lea    -0xb(%ebp),%eax
080804ef +0x0515:  mov    %eax,(%esp)
080804f2 +0x0518:  call   080808ba <+0x8e0>
080804f7 +0x051d:  add    $0x30,%esp
080804fa +0x0520:  pop    %ebx
080804fb +0x0521:  pop    %esi
080804fc +0x0522:  pop    %ebp
080804fd +0x0523:  ret
080804fe +0x0524:  push   %ebp
080804ff +0x0525:  mov    %esp,%ebp
08080501 +0x0527:  sub    $0x18,%esp
08080504 +0x052a:  mov    0x8(%ebp),%eax
08080507 +0x052d:  mov    %eax,(%esp)
0808050a +0x0530:  call   08080480 <+0x4a6>
0808050f +0x0535:  leave
08080510 +0x0536:  ret
08080511 +0x0537:  push   %ebp
08080512 +0x0538:  mov    %esp,%ebp
08080514 +0x053a:  sub    $0x10,%esp
08080517 +0x053d:  mov    0xc(%ebp),%edx
0808051a +0x0540:  mov    0x8(%ebp),%eax
0808051d +0x0543:  mov    %edx,%ecx
0808051f +0x0545:  sub    %eax,%ecx
08080521 +0x0547:  mov    %ecx,%eax
08080523 +0x0549:  sar    $0x2,%eax
08080526 +0x054c:  mov    %eax,-0xc(%ebp)
08080529 +0x054f:  jmp    08080571 <+0x597>
0808052b +0x0551:  mov    -0xc(%ebp),%eax
0808052e +0x0554:  sar    %eax
08080530 +0x0556:  mov    %eax,-0x8(%ebp)
08080533 +0x0559:  mov    -0x8(%ebp),%eax
08080536 +0x055c:  shl    $0x2,%eax
08080539 +0x055f:  add    0x8(%ebp),%eax
0808053c +0x0562:  mov    %eax,-0x4(%ebp)
0808053f +0x0565:  mov    -0x4(%ebp),%eax
08080542 +0x0568:  mov    (%eax),%edx
08080544 +0x056a:  mov    0x10(%ebp),%eax
08080547 +0x056d:  mov    (%eax),%eax
08080549 +0x056f:  cmp    %eax,%edx
0808054b +0x0571:  jae    0808056b <+0x591>
0808054d +0x0573:  mov    -0x4(%ebp),%eax
08080550 +0x0576:  mov    %eax,0x8(%ebp)
08080553 +0x0579:  addl   $0x4,0x8(%ebp)
08080557 +0x057d:  mov    -0x8(%ebp),%eax
0808055a +0x0580:  mov    -0xc(%ebp),%edx
0808055d +0x0583:  mov    %edx,%ecx
0808055f +0x0585:  sub    %eax,%ecx
08080561 +0x0587:  mov    %ecx,%eax
08080563 +0x0589:  sub    $0x1,%eax
08080566 +0x058c:  mov    %eax,-0xc(%ebp)
08080569 +0x058f:  jmp    08080571 <+0x597>
0808056b +0x0591:  mov    -0x8(%ebp),%eax
0808056e +0x0594:  mov    %eax,-0xc(%ebp)
08080571 +0x0597:  cmpl   $0x0,-0xc(%ebp)
08080575 +0x059b:  setg   %al
08080578 +0x059e:  test   %al,%al
0808057a +0x05a0:  jne    0808052b <+0x551>
0808057c +0x05a2:  mov    0x8(%ebp),%eax
0808057f +0x05a5:  leave
08080580 +0x05a6:  ret
08080581 +0x05a7:  push   %ebp
08080582 +0x05a8:  mov    %esp,%ebp
08080584 +0x05aa:  sub    $0x18,%esp
08080587 +0x05ad:  mov    0xc(%ebp),%edx
0808058a +0x05b0:  mov    0x8(%ebp),%eax
0808058d +0x05b3:  mov    %edx,%ecx
0808058f +0x05b5:  sub    %eax,%ecx
08080591 +0x05b7:  mov    %ecx,%eax
08080593 +0x05b9:  sar    $0x2,%eax
08080596 +0x05bc:  mov    %eax,-0xc(%ebp)
08080599 +0x05bf:  jmp    080805f9 <+0x61f>
0808059b +0x05c1:  mov    -0xc(%ebp),%eax
0808059e +0x05c4:  sar    %eax
080805a0 +0x05c6:  mov    %eax,-0x8(%ebp)
080805a3 +0x05c9:  mov    -0x8(%ebp),%eax
080805a6 +0x05cc:  shl    $0x2,%eax
080805a9 +0x05cf:  add    0x8(%ebp),%eax
080805ac +0x05d2:  mov    %eax,-0x4(%ebp)
080805af +0x05d5:  mov    -0x4(%ebp),%eax
080805b2 +0x05d8:  mov    (%eax),%eax
080805b4 +0x05da:  mov    $0x0,%edx
080805b9 +0x05df:  mov    %eax,-0x18(%ebp)
080805bc +0x05e2:  mov    %edx,-0x14(%ebp)
080805bf +0x05e5:  fildll -0x18(%ebp)
080805c2 +0x05e8:  mov    0x10(%ebp),%eax
080805c5 +0x05eb:  flds   (%eax)
080805c7 +0x05ed:  fucompp
080805c9 +0x05ef:  fnstsw %ax
080805cb +0x05f1:  test   $0x45,%ah
080805ce +0x05f4:  sete   %al
080805d1 +0x05f7:  test   %al,%al
080805d3 +0x05f9:  je     080805f3 <+0x619>
080805d5 +0x05fb:  mov    -0x4(%ebp),%eax
080805d8 +0x05fe:  mov    %eax,0x8(%ebp)
080805db +0x0601:  addl   $0x4,0x8(%ebp)
080805df +0x0605:  mov    -0x8(%ebp),%eax
080805e2 +0x0608:  mov    -0xc(%ebp),%edx
080805e5 +0x060b:  mov    %edx,%ecx
080805e7 +0x060d:  sub    %eax,%ecx
080805e9 +0x060f:  mov    %ecx,%eax
080805eb +0x0611:  sub    $0x1,%eax
080805ee +0x0614:  mov    %eax,-0xc(%ebp)
080805f1 +0x0617:  jmp    080805f9 <+0x61f>
080805f3 +0x0619:  mov    -0x8(%ebp),%eax
080805f6 +0x061c:  mov    %eax,-0xc(%ebp)
080805f9 +0x061f:  cmpl   $0x0,-0xc(%ebp)
080805fd +0x0623:  setg   %al
08080600 +0x0626:  test   %al,%al
08080602 +0x0628:  jne    0808059b <+0x5c1>
08080604 +0x062a:  mov    0x8(%ebp),%eax
08080607 +0x062d:  leave
08080608 +0x062e:  ret
08080609 +0x062f:  push   %ebp
0808060a +0x0630:  mov    %esp,%ebp
0808060c +0x0632:  mov    0x8(%ebp),%eax
0808060f +0x0635:  flds   (%eax)
08080611 +0x0637:  mov    0xc(%ebp),%eax
08080614 +0x063a:  flds   (%eax)
08080616 +0x063c:  fucompp
08080618 +0x063e:  fnstsw %ax
0808061a +0x0640:  test   $0x45,%ah
0808061d +0x0643:  sete   %al
08080620 +0x0646:  test   %al,%al
08080622 +0x0648:  je     08080629 <+0x64f>
08080624 +0x064a:  mov    0xc(%ebp),%eax
08080627 +0x064d:  jmp    0808062c <+0x652>
08080629 +0x064f:  mov    0x8(%ebp),%eax
0808062c +0x0652:  pop    %ebp
0808062d +0x0653:  ret
0808062e +0x0654:  push   %ebp
0808062f +0x0655:  mov    %esp,%ebp
08080631 +0x0657:  push   %esi
08080632 +0x0658:  push   %ebx
08080633 +0x0659:  sub    $0x20,%esp
08080636 +0x065c:  mov    0x8(%ebp),%esi
08080639 +0x065f:  mov    0x10(%ebp),%eax
0808063c +0x0662:  mov    %eax,(%esp)
0808063f +0x0665:  call   08080fae <+0xfd4>
08080644 +0x066a:  mov    %eax,%ebx
08080646 +0x066c:  mov    0xc(%ebp),%eax
08080649 +0x066f:  mov    %eax,(%esp)
0808064c +0x0672:  call   08080fa6 <+0xfcc>
08080651 +0x0677:  movzbl (%eax),%eax
08080654 +0x067a:  mov    %al,-0x9(%ebp)
08080657 +0x067d:  mov    %ebx,0x8(%esp)
0808065b +0x0681:  lea    -0x9(%ebp),%eax
0808065e +0x0684:  mov    %eax,0x4(%esp)
08080662 +0x0688:  mov    %esi,(%esp)
08080665 +0x068b:  call   08080fb6 <+0xfdc>
0808066a +0x0690:  mov    %esi,%eax
0808066c +0x0692:  add    $0x20,%esp
0808066f +0x0695:  pop    %ebx
08080670 +0x0696:  pop    %esi
08080671 +0x0697:  pop    %ebp
08080672 +0x0698:  ret    $0x4
08080675 +0x069b:  nop
08080676 +0x069c:  push   %ebp
08080677 +0x069d:  mov    %esp,%ebp
08080679 +0x069f:  sub    $0x18,%esp
0808067c +0x06a2:  mov    0xc(%ebp),%eax
0808067f +0x06a5:  mov    %eax,(%esp)
08080682 +0x06a8:  call   08080fe4 <+0x100a>
08080687 +0x06ad:  movzbl (%eax),%edx
0808068a +0x06b0:  mov    0x8(%ebp),%eax
0808068d +0x06b3:  mov    %dl,(%eax)
0808068f +0x06b5:  mov    0xc(%ebp),%eax
08080692 +0x06b8:  add    $0x4,%eax
08080695 +0x06bb:  mov    %eax,(%esp)
08080698 +0x06be:  call   08080fec <+0x1012>
0808069d +0x06c3:  mov    (%eax),%edx
0808069f +0x06c5:  mov    0x8(%ebp),%eax
080806a2 +0x06c8:  mov    %edx,0x4(%eax)
080806a5 +0x06cb:  leave
080806a6 +0x06cc:  ret
080806a7 +0x06cd:  push   %ebp
080806a8 +0x06ce:  mov    %esp,%ebp
080806aa +0x06d0:  push   %ebx
080806ab +0x06d1:  sub    $0x24,%esp
080806ae +0x06d4:  mov    0x8(%ebp),%ebx
080806b1 +0x06d7:  mov    0x10(%ebp),%eax
080806b4 +0x06da:  mov    %eax,(%esp)
080806b7 +0x06dd:  call   08080ff4 <+0x101a>
080806bc +0x06e2:  mov    (%eax),%eax
080806be +0x06e4:  mov    %eax,-0x10(%ebp)
080806c1 +0x06e7:  mov    0xc(%ebp),%eax
080806c4 +0x06ea:  mov    %eax,(%esp)
080806c7 +0x06ed:  call   08080fa6 <+0xfcc>
080806cc +0x06f2:  movzbl (%eax),%eax
080806cf +0x06f5:  mov    %al,-0x9(%ebp)
080806d2 +0x06f8:  lea    -0x10(%ebp),%eax
080806d5 +0x06fb:  mov    %eax,0x8(%esp)
080806d9 +0x06ff:  lea    -0x9(%ebp),%eax
080806dc +0x0702:  mov    %eax,0x4(%esp)
080806e0 +0x0706:  mov    %ebx,(%esp)
080806e3 +0x0709:  call   08080ffc <+0x1022>
080806e8 +0x070e:  mov    %ebx,%eax
080806ea +0x0710:  add    $0x24,%esp
080806ed +0x0713:  pop    %ebx
080806ee +0x0714:  pop    %ebp
080806ef +0x0715:  ret    $0x4
080806f2 +0x0718:  push   %ebp
080806f3 +0x0719:  mov    %esp,%ebp
080806f5 +0x071b:  sub    $0x18,%esp
080806f8 +0x071e:  mov    0xc(%ebp),%eax
080806fb +0x0721:  mov    %eax,(%esp)
080806fe +0x0724:  call   08080fe4 <+0x100a>
08080703 +0x0729:  movzbl (%eax),%edx
08080706 +0x072c:  mov    0x8(%ebp),%eax
08080709 +0x072f:  mov    %dl,(%eax)
0808070b +0x0731:  mov    0xc(%ebp),%eax
0808070e +0x0734:  add    $0x4,%eax
08080711 +0x0737:  mov    %eax,(%esp)
08080714 +0x073a:  call   0808102a <+0x1050>
08080719 +0x073f:  mov    (%eax),%eax
0808071b +0x0741:  mov    %eax,%edx
0808071d +0x0743:  mov    0x8(%ebp),%eax
08080720 +0x0746:  mov    %edx,0x4(%eax)
08080723 +0x0749:  leave
08080724 +0x074a:  ret
08080725 +0x074b:  nop
08080726 +0x074c:  push   %ebp
08080727 +0x074d:  mov    %esp,%ebp
08080729 +0x074f:  sub    $0x18,%esp
0808072c +0x0752:  mov    0x8(%ebp),%eax
0808072f +0x0755:  mov    %eax,(%esp)
08080732 +0x0758:  call   08081032 <+0x1058>
08080737 +0x075d:  leave
08080738 +0x075e:  ret
08080739 +0x075f:  nop
0808073a +0x0760:  push   %ebp
0808073b +0x0761:  mov    %esp,%ebp
0808073d +0x0763:  sub    $0x18,%esp
08080740 +0x0766:  mov    0x8(%ebp),%eax
08080743 +0x0769:  mov    %eax,(%esp)
08080746 +0x076c:  call   08081038 <+0x105e>
0808074b +0x0771:  leave
0808074c +0x0772:  ret
0808074d +0x0773:  nop
0808074e +0x0774:  push   %ebp
0808074f +0x0775:  mov    %esp,%ebp
08080751 +0x0777:  sub    $0x28,%esp
08080754 +0x077a:  mov    0x8(%ebp),%eax
08080757 +0x077d:  mov    0x18(%ebp),%edx
0808075a +0x0780:  mov    %edx,0x10(%esp)
0808075e +0x0784:  mov    0x14(%ebp),%edx
08080761 +0x0787:  mov    %edx,0xc(%esp)
08080765 +0x078b:  mov    0x10(%ebp),%edx
08080768 +0x078e:  mov    %edx,0x8(%esp)
0808076c +0x0792:  mov    0xc(%ebp),%edx
0808076f +0x0795:  mov    %edx,0x4(%esp)
08080773 +0x0799:  mov    %eax,(%esp)
08080776 +0x079c:  call   0808103e <+0x1064>
0808077b +0x07a1:  leave
0808077c +0x07a2:  ret
0808077d +0x07a3:  nop
0808077e +0x07a4:  push   %ebp
0808077f +0x07a5:  mov    %esp,%ebp
08080781 +0x07a7:  push   %esi
08080782 +0x07a8:  push   %ebx
08080783 +0x07a9:  sub    $0x10,%esp
08080786 +0x07ac:  mov    0x8(%ebp),%eax
08080789 +0x07af:  mov    %eax,(%esp)
0808078c +0x07b2:  call   08081096 <+0x10bc>
08080791 +0x07b7:  mov    0x8(%ebp),%eax
08080794 +0x07ba:  mov    0xc(%eax),%edx
08080797 +0x07bd:  mov    0x8(%ebp),%eax
0808079a +0x07c0:  mov    0x8(%eax),%eax
0808079d +0x07c3:  mov    %edx,0x8(%esp)
080807a1 +0x07c7:  mov    %eax,0x4(%esp)
080807a5 +0x07cb:  mov    0x8(%ebp),%eax
080807a8 +0x07ce:  mov    %eax,(%esp)
080807ab +0x07d1:  call   080810c8 <+0x10ee>
080807b0 +0x07d6:  jmp    080807d0 <+0x7f6>
080807b2 +0x07d8:  mov    %edx,%ebx
080807b4 +0x07da:  mov    %eax,%esi
080807b6 +0x07dc:  mov    0x8(%ebp),%eax
080807b9 +0x07df:  add    $0x4,%eax
080807bc +0x07e2:  mov    %eax,(%esp)
080807bf +0x07e5:  call   08081082 <+0x10a8>
080807c4 +0x07ea:  mov    %esi,%eax
080807c6 +0x07ec:  mov    %ebx,%edx
080807c8 +0x07ee:  mov    %eax,(%esp)
080807cb +0x07f1:  call   08ae3750 <_Unwind_Resume>
080807d0 +0x07f6:  mov    0x8(%ebp),%eax
080807d3 +0x07f9:  add    $0x4,%eax
080807d6 +0x07fc:  mov    %eax,(%esp)
080807d9 +0x07ff:  call   08081082 <+0x10a8>
080807de +0x0804:  add    $0x10,%esp
080807e1 +0x0807:  pop    %ebx
080807e2 +0x0808:  pop    %esi
080807e3 +0x0809:  pop    %ebp
080807e4 +0x080a:  ret
080807e5 +0x080b:  nop
080807e6 +0x080c:  push   %ebp
080807e7 +0x080d:  mov    %esp,%ebp
080807e9 +0x080f:  sub    $0x18,%esp
080807ec +0x0812:  mov    0x8(%ebp),%eax
080807ef +0x0815:  mov    %eax,(%esp)
080807f2 +0x0818:  call   0808110c <+0x1132>
080807f7 +0x081d:  leave
080807f8 +0x081e:  ret
080807f9 +0x081f:  nop
080807fa +0x0820:  push   %ebp
080807fb +0x0821:  mov    %esp,%ebp
080807fd +0x0823:  sub    $0x18,%esp
08080800 +0x0826:  mov    0x8(%ebp),%eax
08080803 +0x0829:  mov    %eax,(%esp)
08080806 +0x082c:  call   08081112 <+0x1138>
0808080b +0x0831:  leave
0808080c +0x0832:  ret
0808080d +0x0833:  nop
0808080e +0x0834:  push   %ebp
0808080f +0x0835:  mov    %esp,%ebp
08080811 +0x0837:  sub    $0x28,%esp
08080814 +0x083a:  mov    0x8(%ebp),%eax
08080817 +0x083d:  mov    0x18(%ebp),%edx
0808081a +0x0840:  mov    %edx,0x10(%esp)
0808081e +0x0844:  mov    0x14(%ebp),%edx
08080821 +0x0847:  mov    %edx,0xc(%esp)
08080825 +0x084b:  mov    0x10(%ebp),%edx
08080828 +0x084e:  mov    %edx,0x8(%esp)
0808082c +0x0852:  mov    0xc(%ebp),%edx
0808082f +0x0855:  mov    %edx,0x4(%esp)
08080833 +0x0859:  mov    %eax,(%esp)
08080836 +0x085c:  call   08081118 <+0x113e>
0808083b +0x0861:  leave
0808083c +0x0862:  ret
0808083d +0x0863:  nop
0808083e +0x0864:  push   %ebp
0808083f +0x0865:  mov    %esp,%ebp
08080841 +0x0867:  push   %esi
08080842 +0x0868:  push   %ebx
08080843 +0x0869:  sub    $0x10,%esp
08080846 +0x086c:  mov    0x8(%ebp),%eax
08080849 +0x086f:  mov    %eax,(%esp)
0808084c +0x0872:  call   08081170 <+0x1196>
08080851 +0x0877:  mov    0x8(%ebp),%eax
08080854 +0x087a:  mov    0xc(%eax),%edx
08080857 +0x087d:  mov    0x8(%ebp),%eax
0808085a +0x0880:  mov    0x8(%eax),%eax
0808085d +0x0883:  mov    %edx,0x8(%esp)
08080861 +0x0887:  mov    %eax,0x4(%esp)
08080865 +0x088b:  mov    0x8(%ebp),%eax
08080868 +0x088e:  mov    %eax,(%esp)
0808086b +0x0891:  call   080811a2 <+0x11c8>
08080870 +0x0896:  jmp    08080890 <+0x8b6>
08080872 +0x0898:  mov    %edx,%ebx
08080874 +0x089a:  mov    %eax,%esi
08080876 +0x089c:  mov    0x8(%ebp),%eax
08080879 +0x089f:  add    $0x4,%eax
0808087c +0x08a2:  mov    %eax,(%esp)
0808087f +0x08a5:  call   0808115c <+0x1182>
08080884 +0x08aa:  mov    %esi,%eax
08080886 +0x08ac:  mov    %ebx,%edx
08080888 +0x08ae:  mov    %eax,(%esp)
0808088b +0x08b1:  call   08ae3750 <_Unwind_Resume>
08080890 +0x08b6:  mov    0x8(%ebp),%eax
08080893 +0x08b9:  add    $0x4,%eax
08080896 +0x08bc:  mov    %eax,(%esp)
08080899 +0x08bf:  call   0808115c <+0x1182>
0808089e +0x08c4:  add    $0x10,%esp
080808a1 +0x08c7:  pop    %ebx
080808a2 +0x08c8:  pop    %esi
080808a3 +0x08c9:  pop    %ebp
080808a4 +0x08ca:  ret
080808a5 +0x08cb:  nop
080808a6 +0x08cc:  push   %ebp
080808a7 +0x08cd:  mov    %esp,%ebp
080808a9 +0x08cf:  sub    $0x18,%esp
080808ac +0x08d2:  mov    0x8(%ebp),%eax
080808af +0x08d5:  mov    %eax,(%esp)
080808b2 +0x08d8:  call   080811e6 <+0x120c>
080808b7 +0x08dd:  leave
080808b8 +0x08de:  ret
080808b9 +0x08df:  nop
080808ba +0x08e0:  push   %ebp
080808bb +0x08e1:  mov    %esp,%ebp
080808bd +0x08e3:  sub    $0x18,%esp
080808c0 +0x08e6:  mov    0x8(%ebp),%eax
080808c3 +0x08e9:  mov    %eax,(%esp)
080808c6 +0x08ec:  call   080811ec <+0x1212>
080808cb +0x08f1:  leave
080808cc +0x08f2:  ret
080808cd +0x08f3:  nop
080808ce +0x08f4:  push   %ebp
080808cf +0x08f5:  mov    %esp,%ebp
080808d1 +0x08f7:  sub    $0x28,%esp
080808d4 +0x08fa:  mov    0x8(%ebp),%eax
080808d7 +0x08fd:  mov    0x18(%ebp),%edx
080808da +0x0900:  mov    %edx,0x10(%esp)
080808de +0x0904:  mov    0x14(%ebp),%edx
080808e1 +0x0907:  mov    %edx,0xc(%esp)
080808e5 +0x090b:  mov    0x10(%ebp),%edx
080808e8 +0x090e:  mov    %edx,0x8(%esp)
080808ec +0x0912:  mov    0xc(%ebp),%edx
080808ef +0x0915:  mov    %edx,0x4(%esp)
080808f3 +0x0919:  mov    %eax,(%esp)
080808f6 +0x091c:  call   080811f2 <+0x1218>
080808fb +0x0921:  leave
080808fc +0x0922:  ret
080808fd +0x0923:  nop
080808fe +0x0924:  push   %ebp
080808ff +0x0925:  mov    %esp,%ebp
08080901 +0x0927:  push   %esi
08080902 +0x0928:  push   %ebx
08080903 +0x0929:  sub    $0x10,%esp
08080906 +0x092c:  mov    0x8(%ebp),%eax
08080909 +0x092f:  mov    %eax,(%esp)
0808090c +0x0932:  call   0808124a <+0x1270>
08080911 +0x0937:  mov    0x8(%ebp),%eax
08080914 +0x093a:  mov    0xc(%eax),%edx
08080917 +0x093d:  mov    0x8(%ebp),%eax
0808091a +0x0940:  mov    0x8(%eax),%eax
0808091d +0x0943:  mov    %edx,0x8(%esp)
08080921 +0x0947:  mov    %eax,0x4(%esp)
08080925 +0x094b:  mov    0x8(%ebp),%eax
08080928 +0x094e:  mov    %eax,(%esp)
0808092b +0x0951:  call   0808127c <+0x12a2>
08080930 +0x0956:  jmp    08080950 <+0x976>
08080932 +0x0958:  mov    %edx,%ebx
08080934 +0x095a:  mov    %eax,%esi
08080936 +0x095c:  mov    0x8(%ebp),%eax
08080939 +0x095f:  add    $0x4,%eax
0808093c +0x0962:  mov    %eax,(%esp)
0808093f +0x0965:  call   08081236 <+0x125c>
08080944 +0x096a:  mov    %esi,%eax
08080946 +0x096c:  mov    %ebx,%edx
08080948 +0x096e:  mov    %eax,(%esp)
0808094b +0x0971:  call   08ae3750 <_Unwind_Resume>
08080950 +0x0976:  mov    0x8(%ebp),%eax
08080953 +0x0979:  add    $0x4,%eax
08080956 +0x097c:  mov    %eax,(%esp)
08080959 +0x097f:  call   08081236 <+0x125c>
0808095e +0x0984:  add    $0x10,%esp
08080961 +0x0987:  pop    %ebx
08080962 +0x0988:  pop    %esi
08080963 +0x0989:  pop    %ebp
08080964 +0x098a:  ret
08080965 +0x098b:  nop
08080966 +0x098c:  push   %ebp
08080967 +0x098d:  mov    %esp,%ebp
08080969 +0x098f:  sub    $0x18,%esp
0808096c +0x0992:  mov    0x8(%ebp),%eax
0808096f +0x0995:  mov    %eax,(%esp)
08080972 +0x0998:  call   08081096 <+0x10bc>
08080977 +0x099d:  leave
08080978 +0x099e:  ret
08080979 +0x099f:  nop
0808097a +0x09a0:  push   %ebp
0808097b +0x09a1:  mov    %esp,%ebp
0808097d +0x09a3:  sub    $0x18,%esp
08080980 +0x09a6:  mov    0x8(%ebp),%eax
08080983 +0x09a9:  mov    %eax,(%esp)
08080986 +0x09ac:  call   08081170 <+0x1196>
0808098b +0x09b1:  leave
0808098c +0x09b2:  ret
0808098d +0x09b3:  nop
0808098e +0x09b4:  push   %ebp
0808098f +0x09b5:  mov    %esp,%ebp
08080991 +0x09b7:  sub    $0x18,%esp
08080994 +0x09ba:  mov    0x8(%ebp),%eax
08080997 +0x09bd:  mov    %eax,(%esp)
0808099a +0x09c0:  call   0808124a <+0x1270>
0808099f +0x09c5:  leave
080809a0 +0x09c6:  ret
080809a1 +0x09c7:  push   %ebp
080809a2 +0x09c8:  mov    %esp,%ebp
080809a4 +0x09ca:  sub    $0x18,%esp
080809a7 +0x09cd:  mov    0xc(%ebp),%eax
080809aa +0x09d0:  mov    %eax,0x4(%esp)
080809ae +0x09d4:  mov    0x8(%ebp),%eax
080809b1 +0x09d7:  mov    %eax,(%esp)
080809b4 +0x09da:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
080809b9 +0x09df:  test   %eax,%eax
080809bb +0x09e1:  sete   %al
080809be +0x09e4:  leave
080809bf +0x09e5:  ret
080809c0 +0x09e6:  push   %ebp
080809c1 +0x09e7:  mov    %esp,%ebp
080809c3 +0x09e9:  sub    $0x18,%esp
080809c6 +0x09ec:  mov    0x8(%ebp),%eax
080809c9 +0x09ef:  mov    %eax,(%esp)
080809cc +0x09f2:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
080809d1 +0x09f7:  leave
080809d2 +0x09f8:  ret
080809d3 +0x09f9:  nop
080809d4 +0x09fa:  push   %ebp
080809d5 +0x09fb:  mov    %esp,%ebp
080809d7 +0x09fd:  sub    $0x18,%esp
080809da +0x0a00:  mov    0x8(%ebp),%eax
080809dd +0x0a03:  mov    %eax,(%esp)
080809e0 +0x0a06:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
080809e5 +0x0a0b:  leave
080809e6 +0x0a0c:  ret
080809e7 +0x0a0d:  nop
080809e8 +0x0a0e:  push   %ebp
080809e9 +0x0a0f:  mov    %esp,%ebp
080809eb +0x0a11:  sub    $0x18,%esp
080809ee +0x0a14:  mov    0x8(%ebp),%eax
080809f1 +0x0a17:  add    $0x4,%eax
080809f4 +0x0a1a:  mov    %eax,(%esp)
080809f7 +0x0a1d:  call   080809d4 <+0x9fa>
080809fc +0x0a22:  leave
080809fd +0x0a23:  ret
080809fe +0x0a24:  push   %ebp
080809ff +0x0a25:  mov    %esp,%ebp
08080a01 +0x0a27:  push   %esi
08080a02 +0x0a28:  push   %ebx
08080a03 +0x0a29:  sub    $0x40,%esp
08080a06 +0x0a2c:  mov    0x8(%ebp),%ebx
08080a09 +0x0a2f:  mov    0xc(%ebp),%edx
08080a0c +0x0a32:  lea    -0x2c(%ebp),%eax
08080a0f +0x0a35:  lea    0x10(%ebp),%ecx
08080a12 +0x0a38:  mov    %ecx,0x8(%esp)
08080a16 +0x0a3c:  mov    %edx,0x4(%esp)
08080a1a +0x0a40:  mov    %eax,(%esp)
08080a1d +0x0a43:  call   080812c0 <+0x12e6>
08080a22 +0x0a48:  sub    $0x4,%esp
08080a25 +0x0a4b:  mov    0xc(%ebp),%edx
08080a28 +0x0a4e:  lea    -0x24(%ebp),%eax
08080a2b +0x0a51:  mov    %edx,0x4(%esp)
08080a2f +0x0a55:  mov    %eax,(%esp)
08080a32 +0x0a58:  call   0808137a <+0x13a0>
08080a37 +0x0a5d:  sub    $0x4,%esp
08080a3a +0x0a60:  lea    -0x24(%ebp),%eax
08080a3d +0x0a63:  mov    %eax,0x4(%esp)
08080a41 +0x0a67:  lea    -0x2c(%ebp),%eax
08080a44 +0x0a6a:  mov    %eax,(%esp)
08080a47 +0x0a6d:  call   080813ac <+0x13d2>
08080a4c +0x0a72:  test   %al,%al
08080a4e +0x0a74:  je     08080a72 <+0xa98>
08080a50 +0x0a76:  movb   $0x0,-0x19(%ebp)
08080a54 +0x0a7a:  lea    -0x19(%ebp),%eax
08080a57 +0x0a7d:  mov    %eax,0x8(%esp)
08080a5b +0x0a81:  lea    -0x2c(%ebp),%eax
08080a5e +0x0a84:  mov    %eax,0x4(%esp)
08080a62 +0x0a88:  mov    %ebx,(%esp)
08080a65 +0x0a8b:  call   080813c0 <+0x13e6>
08080a6a +0x0a90:  sub    $0x4,%esp
08080a6d +0x0a93:  jmp    08080b1f <+0xb45>
08080a72 +0x0a98:  lea    -0x34(%ebp),%eax
08080a75 +0x0a9b:  mov    %eax,(%esp)
08080a78 +0x0a9e:  call   080809c0 <+0x9e6>
08080a7d +0x0aa3:  mov    0x10(%ebp),%eax
08080a80 +0x0aa6:  mov    %eax,0x4(%esp)
08080a84 +0x0aaa:  lea    -0x34(%ebp),%eax
08080a87 +0x0aad:  mov    %eax,(%esp)
08080a8a +0x0ab0:  call   08ad70c0 <_ZN10CharStringaSEPKc>  ; CharString::operator=(char const*)
08080a8f +0x0ab5:  mov    0x14(%ebp),%eax
08080a92 +0x0ab8:  mov    (%eax),%eax
08080a94 +0x0aba:  mov    %eax,-0x30(%ebp)
08080a97 +0x0abd:  lea    -0x34(%ebp),%eax
08080a9a +0x0ac0:  mov    %eax,(%esp)
08080a9d +0x0ac3:  call   0807fffc <+0x22>
08080aa2 +0x0ac8:  mov    %eax,-0xc(%ebp)
08080aa5 +0x0acb:  lea    -0x34(%ebp),%eax
08080aa8 +0x0ace:  mov    %eax,0x8(%esp)
08080aac +0x0ad2:  lea    -0xc(%ebp),%eax
08080aaf +0x0ad5:  mov    %eax,0x4(%esp)
08080ab3 +0x0ad9:  lea    -0x18(%ebp),%eax
08080ab6 +0x0adc:  mov    %eax,(%esp)
08080ab9 +0x0adf:  call   0808142a <+0x1450>
08080abe +0x0ae4:  mov    0xc(%ebp),%eax
08080ac1 +0x0ae7:  lea    -0x18(%ebp),%edx
08080ac4 +0x0aea:  mov    %edx,0x8(%esp)
08080ac8 +0x0aee:  mov    %eax,0x4(%esp)
08080acc +0x0af2:  mov    %ebx,(%esp)
08080acf +0x0af5:  call   08081462 <+0x1488>
08080ad4 +0x0afa:  sub    $0x4,%esp
08080ad7 +0x0afd:  lea    -0x18(%ebp),%eax
08080ada +0x0b00:  mov    %eax,(%esp)
08080add +0x0b03:  call   080809e8 <+0xa0e>
08080ae2 +0x0b08:  jmp    08080b14 <+0xb3a>
08080ae4 +0x0b0a:  mov    %edx,%ebx
08080ae6 +0x0b0c:  mov    %eax,%esi
08080ae8 +0x0b0e:  lea    -0x18(%ebp),%eax
08080aeb +0x0b11:  mov    %eax,(%esp)
08080aee +0x0b14:  call   080809e8 <+0xa0e>
08080af3 +0x0b19:  mov    %esi,%eax
08080af5 +0x0b1b:  mov    %ebx,%edx
08080af7 +0x0b1d:  jmp    08080af9 <+0xb1f>
08080af9 +0x0b1f:  mov    %edx,%ebx
08080afb +0x0b21:  mov    %eax,%esi
08080afd +0x0b23:  lea    -0x34(%ebp),%eax
08080b00 +0x0b26:  mov    %eax,(%esp)
08080b03 +0x0b29:  call   080809d4 <+0x9fa>
08080b08 +0x0b2e:  mov    %esi,%eax
08080b0a +0x0b30:  mov    %ebx,%edx
08080b0c +0x0b32:  mov    %eax,(%esp)
08080b0f +0x0b35:  call   08ae3750 <_Unwind_Resume>
08080b14 +0x0b3a:  lea    -0x34(%ebp),%eax
08080b17 +0x0b3d:  mov    %eax,(%esp)
08080b1a +0x0b40:  call   080809d4 <+0x9fa>
08080b1f +0x0b45:  mov    %ebx,%eax
08080b21 +0x0b47:  lea    -0x8(%ebp),%esp
08080b24 +0x0b4a:  add    $0x0,%esp
08080b27 +0x0b4d:  pop    %ebx
08080b28 +0x0b4e:  pop    %esi
08080b29 +0x0b4f:  pop    %ebp
08080b2a +0x0b50:  ret    $0x4
08080b2d +0x0b53:  nop
08080b2e +0x0b54:  push   %ebp
08080b2f +0x0b55:  mov    %esp,%ebp
08080b31 +0x0b57:  sub    $0x18,%esp
08080b34 +0x0b5a:  mov    0x8(%ebp),%eax
08080b37 +0x0b5d:  mov    %eax,(%esp)
08080b3a +0x0b60:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08080b3f +0x0b65:  leave
08080b40 +0x0b66:  ret
08080b41 +0x0b67:  nop
08080b42 +0x0b68:  push   %ebp
08080b43 +0x0b69:  mov    %esp,%ebp
08080b45 +0x0b6b:  sub    $0x18,%esp
08080b48 +0x0b6e:  mov    0x8(%ebp),%eax
08080b4b +0x0b71:  mov    %eax,(%esp)
08080b4e +0x0b74:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08080b53 +0x0b79:  leave
08080b54 +0x0b7a:  ret
08080b55 +0x0b7b:  nop
08080b56 +0x0b7c:  push   %ebp
08080b57 +0x0b7d:  mov    %esp,%ebp
08080b59 +0x0b7f:  sub    $0x18,%esp
08080b5c +0x0b82:  mov    0x8(%ebp),%eax
08080b5f +0x0b85:  add    $0x4,%eax
08080b62 +0x0b88:  mov    %eax,(%esp)
08080b65 +0x0b8b:  call   08080b42 <+0xb68>
08080b6a +0x0b90:  leave
08080b6b +0x0b91:  ret
08080b6c +0x0b92:  push   %ebp
08080b6d +0x0b93:  mov    %esp,%ebp
08080b6f +0x0b95:  push   %esi
08080b70 +0x0b96:  push   %ebx
08080b71 +0x0b97:  sub    $0x40,%esp
08080b74 +0x0b9a:  mov    0x8(%ebp),%ebx
08080b77 +0x0b9d:  mov    0xc(%ebp),%edx
08080b7a +0x0ba0:  lea    -0x2c(%ebp),%eax
08080b7d +0x0ba3:  lea    0x10(%ebp),%ecx
08080b80 +0x0ba6:  mov    %ecx,0x8(%esp)
08080b84 +0x0baa:  mov    %edx,0x4(%esp)
08080b88 +0x0bae:  mov    %eax,(%esp)
08080b8b +0x0bb1:  call   08081492 <+0x14b8>
08080b90 +0x0bb6:  sub    $0x4,%esp
08080b93 +0x0bb9:  mov    0xc(%ebp),%edx
08080b96 +0x0bbc:  lea    -0x24(%ebp),%eax
08080b99 +0x0bbf:  mov    %edx,0x4(%esp)
08080b9d +0x0bc3:  mov    %eax,(%esp)
08080ba0 +0x0bc6:  call   0808154c <+0x1572>
08080ba5 +0x0bcb:  sub    $0x4,%esp
08080ba8 +0x0bce:  lea    -0x24(%ebp),%eax
08080bab +0x0bd1:  mov    %eax,0x4(%esp)
08080baf +0x0bd5:  lea    -0x2c(%ebp),%eax
08080bb2 +0x0bd8:  mov    %eax,(%esp)
08080bb5 +0x0bdb:  call   0808157e <+0x15a4>
08080bba +0x0be0:  test   %al,%al
08080bbc +0x0be2:  je     08080be0 <+0xc06>
08080bbe +0x0be4:  movb   $0x0,-0x19(%ebp)
08080bc2 +0x0be8:  lea    -0x19(%ebp),%eax
08080bc5 +0x0beb:  mov    %eax,0x8(%esp)
08080bc9 +0x0bef:  lea    -0x2c(%ebp),%eax
08080bcc +0x0bf2:  mov    %eax,0x4(%esp)
08080bd0 +0x0bf6:  mov    %ebx,(%esp)
08080bd3 +0x0bf9:  call   08081592 <+0x15b8>
08080bd8 +0x0bfe:  sub    $0x4,%esp
08080bdb +0x0c01:  jmp    08080c8d <+0xcb3>
08080be0 +0x0c06:  lea    -0x34(%ebp),%eax
08080be3 +0x0c09:  mov    %eax,(%esp)
08080be6 +0x0c0c:  call   08080b2e <+0xb54>
08080beb +0x0c11:  mov    0x10(%ebp),%eax
08080bee +0x0c14:  mov    %eax,0x4(%esp)
08080bf2 +0x0c18:  lea    -0x34(%ebp),%eax
08080bf5 +0x0c1b:  mov    %eax,(%esp)
08080bf8 +0x0c1e:  call   08ad70c0 <_ZN10CharStringaSEPKc>  ; CharString::operator=(char const*)
08080bfd +0x0c23:  mov    0x14(%ebp),%eax
08080c00 +0x0c26:  mov    (%eax),%eax
08080c02 +0x0c28:  mov    %eax,-0x30(%ebp)
08080c05 +0x0c2b:  lea    -0x34(%ebp),%eax
08080c08 +0x0c2e:  mov    %eax,(%esp)
08080c0b +0x0c31:  call   0807fffc <+0x22>
08080c10 +0x0c36:  mov    %eax,-0xc(%ebp)
08080c13 +0x0c39:  lea    -0x34(%ebp),%eax
08080c16 +0x0c3c:  mov    %eax,0x8(%esp)
08080c1a +0x0c40:  lea    -0xc(%ebp),%eax
08080c1d +0x0c43:  mov    %eax,0x4(%esp)
08080c21 +0x0c47:  lea    -0x18(%ebp),%eax
08080c24 +0x0c4a:  mov    %eax,(%esp)
08080c27 +0x0c4d:  call   080815fc <+0x1622>
08080c2c +0x0c52:  mov    0xc(%ebp),%eax
08080c2f +0x0c55:  lea    -0x18(%ebp),%edx
08080c32 +0x0c58:  mov    %edx,0x8(%esp)
08080c36 +0x0c5c:  mov    %eax,0x4(%esp)
08080c3a +0x0c60:  mov    %ebx,(%esp)
08080c3d +0x0c63:  call   08081634 <+0x165a>
08080c42 +0x0c68:  sub    $0x4,%esp
08080c45 +0x0c6b:  lea    -0x18(%ebp),%eax
08080c48 +0x0c6e:  mov    %eax,(%esp)
08080c4b +0x0c71:  call   08080b56 <+0xb7c>
08080c50 +0x0c76:  jmp    08080c82 <+0xca8>
08080c52 +0x0c78:  mov    %edx,%ebx
08080c54 +0x0c7a:  mov    %eax,%esi
08080c56 +0x0c7c:  lea    -0x18(%ebp),%eax
08080c59 +0x0c7f:  mov    %eax,(%esp)
08080c5c +0x0c82:  call   08080b56 <+0xb7c>
08080c61 +0x0c87:  mov    %esi,%eax
08080c63 +0x0c89:  mov    %ebx,%edx
08080c65 +0x0c8b:  jmp    08080c67 <+0xc8d>
08080c67 +0x0c8d:  mov    %edx,%ebx
08080c69 +0x0c8f:  mov    %eax,%esi
08080c6b +0x0c91:  lea    -0x34(%ebp),%eax
08080c6e +0x0c94:  mov    %eax,(%esp)
08080c71 +0x0c97:  call   08080b42 <+0xb68>
08080c76 +0x0c9c:  mov    %esi,%eax
08080c78 +0x0c9e:  mov    %ebx,%edx
08080c7a +0x0ca0:  mov    %eax,(%esp)
08080c7d +0x0ca3:  call   08ae3750 <_Unwind_Resume>
08080c82 +0x0ca8:  lea    -0x34(%ebp),%eax
08080c85 +0x0cab:  mov    %eax,(%esp)
08080c88 +0x0cae:  call   08080b42 <+0xb68>
08080c8d +0x0cb3:  mov    %ebx,%eax
08080c8f +0x0cb5:  lea    -0x8(%ebp),%esp
08080c92 +0x0cb8:  add    $0x0,%esp
08080c95 +0x0cbb:  pop    %ebx
08080c96 +0x0cbc:  pop    %esi
08080c97 +0x0cbd:  pop    %ebp
08080c98 +0x0cbe:  ret    $0x4
08080c9b +0x0cc1:  nop
08080c9c +0x0cc2:  push   %ebp
08080c9d +0x0cc3:  mov    %esp,%ebp
08080c9f +0x0cc5:  push   %esi
08080ca0 +0x0cc6:  push   %ebx
08080ca1 +0x0cc7:  sub    $0x10,%esp
08080ca4 +0x0cca:  mov    0x8(%ebp),%eax
08080ca7 +0x0ccd:  mov    %eax,(%esp)
08080caa +0x0cd0:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08080caf +0x0cd5:  mov    0x8(%ebp),%eax
08080cb2 +0x0cd8:  add    $0x4,%eax
08080cb5 +0x0cdb:  mov    %eax,(%esp)
08080cb8 +0x0cde:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08080cbd +0x0ce3:  jmp    08080cda <+0xd00>
08080cbf +0x0ce5:  mov    %edx,%ebx
08080cc1 +0x0ce7:  mov    %eax,%esi
08080cc3 +0x0ce9:  mov    0x8(%ebp),%eax
08080cc6 +0x0cec:  mov    %eax,(%esp)
08080cc9 +0x0cef:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08080cce +0x0cf4:  mov    %esi,%eax
08080cd0 +0x0cf6:  mov    %ebx,%edx
08080cd2 +0x0cf8:  mov    %eax,(%esp)
08080cd5 +0x0cfb:  call   08ae3750 <_Unwind_Resume>
08080cda +0x0d00:  add    $0x10,%esp
08080cdd +0x0d03:  pop    %ebx
08080cde +0x0d04:  pop    %esi
08080cdf +0x0d05:  pop    %ebp
08080ce0 +0x0d06:  ret
08080ce1 +0x0d07:  nop
08080ce2 +0x0d08:  push   %ebp
08080ce3 +0x0d09:  mov    %esp,%ebp
08080ce5 +0x0d0b:  push   %esi
08080ce6 +0x0d0c:  push   %ebx
08080ce7 +0x0d0d:  sub    $0x10,%esp
08080cea +0x0d10:  mov    0x8(%ebp),%eax
08080ced +0x0d13:  add    $0x4,%eax
08080cf0 +0x0d16:  mov    %eax,(%esp)
08080cf3 +0x0d19:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08080cf8 +0x0d1e:  jmp    08080d15 <+0xd3b>
08080cfa +0x0d20:  mov    %edx,%ebx
08080cfc +0x0d22:  mov    %eax,%esi
08080cfe +0x0d24:  mov    0x8(%ebp),%eax
08080d01 +0x0d27:  mov    %eax,(%esp)
08080d04 +0x0d2a:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08080d09 +0x0d2f:  mov    %esi,%eax
08080d0b +0x0d31:  mov    %ebx,%edx
08080d0d +0x0d33:  mov    %eax,(%esp)
08080d10 +0x0d36:  call   08ae3750 <_Unwind_Resume>
08080d15 +0x0d3b:  mov    0x8(%ebp),%eax
08080d18 +0x0d3e:  mov    %eax,(%esp)
08080d1b +0x0d41:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08080d20 +0x0d46:  add    $0x10,%esp
08080d23 +0x0d49:  pop    %ebx
08080d24 +0x0d4a:  pop    %esi
08080d25 +0x0d4b:  pop    %ebp
08080d26 +0x0d4c:  ret
08080d27 +0x0d4d:  nop
08080d28 +0x0d4e:  push   %ebp
08080d29 +0x0d4f:  mov    %esp,%ebp
08080d2b +0x0d51:  sub    $0x18,%esp
08080d2e +0x0d54:  mov    0x8(%ebp),%eax
08080d31 +0x0d57:  add    $0x4,%eax
08080d34 +0x0d5a:  mov    %eax,(%esp)
08080d37 +0x0d5d:  call   08080ce2 <+0xd08>
08080d3c +0x0d62:  leave
08080d3d +0x0d63:  ret
08080d3e +0x0d64:  push   %ebp
08080d3f +0x0d65:  mov    %esp,%ebp
08080d41 +0x0d67:  push   %esi
08080d42 +0x0d68:  push   %ebx
08080d43 +0x0d69:  sub    $0x40,%esp
08080d46 +0x0d6c:  mov    0x8(%ebp),%ebx
08080d49 +0x0d6f:  mov    0xc(%ebp),%edx
08080d4c +0x0d72:  lea    -0x2c(%ebp),%eax
08080d4f +0x0d75:  lea    0x10(%ebp),%ecx
08080d52 +0x0d78:  mov    %ecx,0x8(%esp)
08080d56 +0x0d7c:  mov    %edx,0x4(%esp)
08080d5a +0x0d80:  mov    %eax,(%esp)
08080d5d +0x0d83:  call   08081664 <+0x168a>
08080d62 +0x0d88:  sub    $0x4,%esp
08080d65 +0x0d8b:  mov    0xc(%ebp),%edx
08080d68 +0x0d8e:  lea    -0x24(%ebp),%eax
08080d6b +0x0d91:  mov    %edx,0x4(%esp)
08080d6f +0x0d95:  mov    %eax,(%esp)
08080d72 +0x0d98:  call   0808171e <+0x1744>
08080d77 +0x0d9d:  sub    $0x4,%esp
08080d7a +0x0da0:  lea    -0x24(%ebp),%eax
08080d7d +0x0da3:  mov    %eax,0x4(%esp)
08080d81 +0x0da7:  lea    -0x2c(%ebp),%eax
08080d84 +0x0daa:  mov    %eax,(%esp)
08080d87 +0x0dad:  call   08081750 <+0x1776>
08080d8c +0x0db2:  test   %al,%al
08080d8e +0x0db4:  je     08080db2 <+0xdd8>
08080d90 +0x0db6:  movb   $0x0,-0x19(%ebp)
08080d94 +0x0dba:  lea    -0x19(%ebp),%eax
08080d97 +0x0dbd:  mov    %eax,0x8(%esp)
08080d9b +0x0dc1:  lea    -0x2c(%ebp),%eax
08080d9e +0x0dc4:  mov    %eax,0x4(%esp)
08080da2 +0x0dc8:  mov    %ebx,(%esp)
08080da5 +0x0dcb:  call   08081764 <+0x178a>
08080daa +0x0dd0:  sub    $0x4,%esp
08080dad +0x0dd3:  jmp    08080e6c <+0xe92>
08080db2 +0x0dd8:  lea    -0x34(%ebp),%eax
08080db5 +0x0ddb:  mov    %eax,(%esp)
08080db8 +0x0dde:  call   08080c9c <+0xcc2>
08080dbd +0x0de3:  mov    0x10(%ebp),%eax
08080dc0 +0x0de6:  mov    %eax,0x4(%esp)
08080dc4 +0x0dea:  lea    -0x34(%ebp),%eax
08080dc7 +0x0ded:  mov    %eax,(%esp)
08080dca +0x0df0:  call   08ad70c0 <_ZN10CharStringaSEPKc>  ; CharString::operator=(char const*)
08080dcf +0x0df5:  mov    0x14(%ebp),%eax
08080dd2 +0x0df8:  mov    %eax,0x4(%esp)
08080dd6 +0x0dfc:  lea    -0x34(%ebp),%eax
08080dd9 +0x0dff:  add    $0x4,%eax
08080ddc +0x0e02:  mov    %eax,(%esp)
08080ddf +0x0e05:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08080de4 +0x0e0a:  lea    -0x34(%ebp),%eax
08080de7 +0x0e0d:  mov    %eax,(%esp)
08080dea +0x0e10:  call   0807fffc <+0x22>
08080def +0x0e15:  mov    %eax,-0xc(%ebp)
08080df2 +0x0e18:  lea    -0x34(%ebp),%eax
08080df5 +0x0e1b:  mov    %eax,0x8(%esp)
08080df9 +0x0e1f:  lea    -0xc(%ebp),%eax
08080dfc +0x0e22:  mov    %eax,0x4(%esp)
08080e00 +0x0e26:  lea    -0x18(%ebp),%eax
08080e03 +0x0e29:  mov    %eax,(%esp)
08080e06 +0x0e2c:  call   080817fe <+0x1824>
08080e0b +0x0e31:  mov    0xc(%ebp),%eax
08080e0e +0x0e34:  lea    -0x18(%ebp),%edx
08080e11 +0x0e37:  mov    %edx,0x8(%esp)
08080e15 +0x0e3b:  mov    %eax,0x4(%esp)
08080e19 +0x0e3f:  mov    %ebx,(%esp)
08080e1c +0x0e42:  call   08081836 <+0x185c>
08080e21 +0x0e47:  sub    $0x4,%esp
08080e24 +0x0e4a:  lea    -0x18(%ebp),%eax
08080e27 +0x0e4d:  mov    %eax,(%esp)
08080e2a +0x0e50:  call   08080d28 <+0xd4e>
08080e2f +0x0e55:  jmp    08080e61 <+0xe87>
08080e31 +0x0e57:  mov    %edx,%ebx
08080e33 +0x0e59:  mov    %eax,%esi
08080e35 +0x0e5b:  lea    -0x18(%ebp),%eax
08080e38 +0x0e5e:  mov    %eax,(%esp)
08080e3b +0x0e61:  call   08080d28 <+0xd4e>
08080e40 +0x0e66:  mov    %esi,%eax
08080e42 +0x0e68:  mov    %ebx,%edx
08080e44 +0x0e6a:  jmp    08080e46 <+0xe6c>
08080e46 +0x0e6c:  mov    %edx,%ebx
08080e48 +0x0e6e:  mov    %eax,%esi
08080e4a +0x0e70:  lea    -0x34(%ebp),%eax
08080e4d +0x0e73:  mov    %eax,(%esp)
08080e50 +0x0e76:  call   08080ce2 <+0xd08>
08080e55 +0x0e7b:  mov    %esi,%eax
08080e57 +0x0e7d:  mov    %ebx,%edx
08080e59 +0x0e7f:  mov    %eax,(%esp)
08080e5c +0x0e82:  call   08ae3750 <_Unwind_Resume>
08080e61 +0x0e87:  lea    -0x34(%ebp),%eax
08080e64 +0x0e8a:  mov    %eax,(%esp)
08080e67 +0x0e8d:  call   08080ce2 <+0xd08>
08080e6c +0x0e92:  mov    %ebx,%eax
08080e6e +0x0e94:  lea    -0x8(%ebp),%esp
08080e71 +0x0e97:  add    $0x0,%esp
08080e74 +0x0e9a:  pop    %ebx
08080e75 +0x0e9b:  pop    %esi
08080e76 +0x0e9c:  pop    %ebp
08080e77 +0x0e9d:  ret    $0x4
08080e7a +0x0ea0:  push   %ebp
08080e7b +0x0ea1:  mov    %esp,%ebp
08080e7d +0x0ea3:  sub    $0x28,%esp
08080e80 +0x0ea6:  mov    0x8(%ebp),%edx
08080e83 +0x0ea9:  lea    -0x18(%ebp),%eax
08080e86 +0x0eac:  lea    0xc(%ebp),%ecx
08080e89 +0x0eaf:  mov    %ecx,0x8(%esp)
08080e8d +0x0eb3:  mov    %edx,0x4(%esp)
08080e91 +0x0eb7:  mov    %eax,(%esp)
08080e94 +0x0eba:  call   08081866 <+0x188c>
08080e99 +0x0ebf:  sub    $0x4,%esp
08080e9c +0x0ec2:  mov    0x8(%ebp),%edx
08080e9f +0x0ec5:  lea    -0x10(%ebp),%eax
08080ea2 +0x0ec8:  mov    %edx,0x4(%esp)
08080ea6 +0x0ecc:  mov    %eax,(%esp)
08080ea9 +0x0ecf:  call   0808192a <+0x1950>
08080eae +0x0ed4:  sub    $0x4,%esp
08080eb1 +0x0ed7:  lea    -0x10(%ebp),%eax
08080eb4 +0x0eda:  mov    %eax,0x4(%esp)
08080eb8 +0x0ede:  lea    -0x18(%ebp),%eax
08080ebb +0x0ee1:  mov    %eax,(%esp)
08080ebe +0x0ee4:  call   080813ac <+0x13d2>
08080ec3 +0x0ee9:  test   %al,%al
08080ec5 +0x0eeb:  je     08080ed7 <+0xefd>
08080ec7 +0x0eed:  lea    -0x18(%ebp),%eax
08080eca +0x0ef0:  mov    %eax,(%esp)
08080ecd +0x0ef3:  call   08081920 <+0x1946>
08080ed2 +0x0ef8:  add    $0x8,%eax
08080ed5 +0x0efb:  jmp    08080edc <+0xf02>
08080ed7 +0x0efd:  mov    $0x0,%eax
08080edc +0x0f02:  leave
08080edd +0x0f03:  ret
08080ede +0x0f04:  push   %ebp
08080edf +0x0f05:  mov    %esp,%ebp
08080ee1 +0x0f07:  sub    $0x28,%esp
08080ee4 +0x0f0a:  mov    0x8(%ebp),%edx
08080ee7 +0x0f0d:  lea    -0x18(%ebp),%eax
08080eea +0x0f10:  lea    0xc(%ebp),%ecx
08080eed +0x0f13:  mov    %ecx,0x8(%esp)
08080ef1 +0x0f17:  mov    %edx,0x4(%esp)
08080ef5 +0x0f1b:  mov    %eax,(%esp)
08080ef8 +0x0f1e:  call   0808195c <+0x1982>
08080efd +0x0f23:  sub    $0x4,%esp
08080f00 +0x0f26:  mov    0x8(%ebp),%edx
08080f03 +0x0f29:  lea    -0x10(%ebp),%eax
08080f06 +0x0f2c:  mov    %edx,0x4(%esp)
08080f0a +0x0f30:  mov    %eax,(%esp)
08080f0d +0x0f33:  call   08081a20 <+0x1a46>
08080f12 +0x0f38:  sub    $0x4,%esp
08080f15 +0x0f3b:  lea    -0x10(%ebp),%eax
08080f18 +0x0f3e:  mov    %eax,0x4(%esp)
08080f1c +0x0f42:  lea    -0x18(%ebp),%eax
08080f1f +0x0f45:  mov    %eax,(%esp)
08080f22 +0x0f48:  call   0808157e <+0x15a4>
08080f27 +0x0f4d:  test   %al,%al
08080f29 +0x0f4f:  je     08080f3b <+0xf61>
08080f2b +0x0f51:  lea    -0x18(%ebp),%eax
08080f2e +0x0f54:  mov    %eax,(%esp)
08080f31 +0x0f57:  call   08081a16 <+0x1a3c>
08080f36 +0x0f5c:  add    $0x8,%eax
08080f39 +0x0f5f:  jmp    08080f40 <+0xf66>
08080f3b +0x0f61:  mov    $0x0,%eax
08080f40 +0x0f66:  leave
08080f41 +0x0f67:  ret
08080f42 +0x0f68:  push   %ebp
08080f43 +0x0f69:  mov    %esp,%ebp
08080f45 +0x0f6b:  sub    $0x28,%esp
08080f48 +0x0f6e:  mov    0x8(%ebp),%edx
08080f4b +0x0f71:  lea    -0x18(%ebp),%eax
08080f4e +0x0f74:  lea    0xc(%ebp),%ecx
08080f51 +0x0f77:  mov    %ecx,0x8(%esp)
08080f55 +0x0f7b:  mov    %edx,0x4(%esp)
08080f59 +0x0f7f:  mov    %eax,(%esp)
08080f5c +0x0f82:  call   08081a52 <+0x1a78>
08080f61 +0x0f87:  sub    $0x4,%esp
08080f64 +0x0f8a:  mov    0x8(%ebp),%edx
08080f67 +0x0f8d:  lea    -0x10(%ebp),%eax
08080f6a +0x0f90:  mov    %edx,0x4(%esp)
08080f6e +0x0f94:  mov    %eax,(%esp)
08080f71 +0x0f97:  call   08081b16 <+0x1b3c>
08080f76 +0x0f9c:  sub    $0x4,%esp
08080f79 +0x0f9f:  lea    -0x10(%ebp),%eax
08080f7c +0x0fa2:  mov    %eax,0x4(%esp)
08080f80 +0x0fa6:  lea    -0x18(%ebp),%eax
08080f83 +0x0fa9:  mov    %eax,(%esp)
08080f86 +0x0fac:  call   08081750 <+0x1776>
08080f8b +0x0fb1:  test   %al,%al
08080f8d +0x0fb3:  je     08080f9f <+0xfc5>
08080f8f +0x0fb5:  lea    -0x18(%ebp),%eax
08080f92 +0x0fb8:  mov    %eax,(%esp)
08080f95 +0x0fbb:  call   08081b0c <+0x1b32>
08080f9a +0x0fc0:  add    $0x8,%eax
08080f9d +0x0fc3:  jmp    08080fa4 <+0xfca>
08080f9f +0x0fc5:  mov    $0x0,%eax
08080fa4 +0x0fca:  leave
08080fa5 +0x0fcb:  ret
08080fa6 +0x0fcc:  push   %ebp
08080fa7 +0x0fcd:  mov    %esp,%ebp
08080fa9 +0x0fcf:  mov    0x8(%ebp),%eax
08080fac +0x0fd2:  pop    %ebp
08080fad +0x0fd3:  ret
08080fae +0x0fd4:  push   %ebp
08080faf +0x0fd5:  mov    %esp,%ebp
08080fb1 +0x0fd7:  mov    0x8(%ebp),%eax
08080fb4 +0x0fda:  pop    %ebp
08080fb5 +0x0fdb:  ret
08080fb6 +0x0fdc:  push   %ebp
08080fb7 +0x0fdd:  mov    %esp,%ebp
08080fb9 +0x0fdf:  sub    $0x18,%esp
08080fbc +0x0fe2:  mov    0xc(%ebp),%eax
08080fbf +0x0fe5:  mov    %eax,(%esp)
08080fc2 +0x0fe8:  call   08080fa6 <+0xfcc>
08080fc7 +0x0fed:  movzbl (%eax),%edx
08080fca +0x0ff0:  mov    0x8(%ebp),%eax
08080fcd +0x0ff3:  mov    %dl,(%eax)
08080fcf +0x0ff5:  mov    0x10(%ebp),%eax
08080fd2 +0x0ff8:  mov    %eax,(%esp)
08080fd5 +0x0ffb:  call   08080fae <+0xfd4>
08080fda +0x1000:  mov    (%eax),%edx
08080fdc +0x1002:  mov    0x8(%ebp),%eax
08080fdf +0x1005:  mov    %edx,0x4(%eax)
08080fe2 +0x1008:  leave
08080fe3 +0x1009:  ret
08080fe4 +0x100a:  push   %ebp
08080fe5 +0x100b:  mov    %esp,%ebp
08080fe7 +0x100d:  mov    0x8(%ebp),%eax
08080fea +0x1010:  pop    %ebp
08080feb +0x1011:  ret
08080fec +0x1012:  push   %ebp
08080fed +0x1013:  mov    %esp,%ebp
08080fef +0x1015:  mov    0x8(%ebp),%eax
08080ff2 +0x1018:  pop    %ebp
08080ff3 +0x1019:  ret
08080ff4 +0x101a:  push   %ebp
08080ff5 +0x101b:  mov    %esp,%ebp
08080ff7 +0x101d:  mov    0x8(%ebp),%eax
08080ffa +0x1020:  pop    %ebp
08080ffb +0x1021:  ret
08080ffc +0x1022:  push   %ebp
08080ffd +0x1023:  mov    %esp,%ebp
08080fff +0x1025:  sub    $0x18,%esp
08081002 +0x1028:  mov    0xc(%ebp),%eax
08081005 +0x102b:  mov    %eax,(%esp)
08081008 +0x102e:  call   08080fa6 <+0xfcc>
0808100d +0x1033:  movzbl (%eax),%edx
08081010 +0x1036:  mov    0x8(%ebp),%eax
08081013 +0x1039:  mov    %dl,(%eax)
08081015 +0x103b:  mov    0x10(%ebp),%eax
08081018 +0x103e:  mov    %eax,(%esp)
0808101b +0x1041:  call   08080ff4 <+0x101a>
08081020 +0x1046:  mov    (%eax),%edx
08081022 +0x1048:  mov    0x8(%ebp),%eax
08081025 +0x104b:  mov    %edx,0x4(%eax)
08081028 +0x104e:  leave
08081029 +0x104f:  ret
0808102a +0x1050:  push   %ebp
0808102b +0x1051:  mov    %esp,%ebp
0808102d +0x1053:  mov    0x8(%ebp),%eax
08081030 +0x1056:  pop    %ebp
08081031 +0x1057:  ret
08081032 +0x1058:  push   %ebp
08081033 +0x1059:  mov    %esp,%ebp
08081035 +0x105b:  pop    %ebp
08081036 +0x105c:  ret
08081037 +0x105d:  nop
08081038 +0x105e:  push   %ebp
08081039 +0x105f:  mov    %esp,%ebp
0808103b +0x1061:  pop    %ebp
0808103c +0x1062:  ret
0808103d +0x1063:  nop
0808103e +0x1064:  push   %ebp
0808103f +0x1065:  mov    %esp,%ebp
08081041 +0x1067:  sub    $0x38,%esp
08081044 +0x106a:  mov    0x8(%ebp),%eax
08081047 +0x106d:  mov    0x18(%ebp),%edx
0808104a +0x1070:  mov    %edx,0x1c(%esp)
0808104e +0x1074:  lea    -0xb(%ebp),%edx
08081051 +0x1077:  mov    %edx,0x18(%esp)
08081055 +0x107b:  mov    0x14(%ebp),%edx
08081058 +0x107e:  mov    %edx,0x14(%esp)
0808105c +0x1082:  lea    -0xa(%ebp),%edx
0808105f +0x1085:  mov    %edx,0x10(%esp)
08081063 +0x1089:  lea    -0x9(%ebp),%edx
08081066 +0x108c:  mov    %edx,0xc(%esp)
0808106a +0x1090:  mov    0x10(%ebp),%edx
0808106d +0x1093:  mov    %edx,0x8(%esp)
08081071 +0x1097:  mov    0xc(%ebp),%edx
08081074 +0x109a:  mov    %edx,0x4(%esp)
08081078 +0x109e:  mov    %eax,(%esp)
0808107b +0x10a1:  call   08081b48 <+0x1b6e>
08081080 +0x10a6:  leave
08081081 +0x10a7:  ret
08081082 +0x10a8:  push   %ebp
08081083 +0x10a9:  mov    %esp,%ebp
08081085 +0x10ab:  sub    $0x18,%esp
08081088 +0x10ae:  mov    0x8(%ebp),%eax
0808108b +0x10b1:  mov    %eax,(%esp)
0808108e +0x10b4:  call   08081c1a <+0x1c40>
08081093 +0x10b9:  leave
08081094 +0x10ba:  ret
08081095 +0x10bb:  nop
08081096 +0x10bc:  push   %ebp
08081097 +0x10bd:  mov    %esp,%ebp
08081099 +0x10bf:  sub    $0x18,%esp
0808109c +0x10c2:  mov    0x8(%ebp),%eax
0808109f +0x10c5:  mov    0xc(%eax),%edx
080810a2 +0x10c8:  mov    0x8(%ebp),%eax
080810a5 +0x10cb:  mov    0x8(%eax),%eax
080810a8 +0x10ce:  mov    %edx,0x8(%esp)
080810ac +0x10d2:  mov    %eax,0x4(%esp)
080810b0 +0x10d6:  mov    0x8(%ebp),%eax
080810b3 +0x10d9:  mov    %eax,(%esp)
080810b6 +0x10dc:  call   08081c20 <+0x1c46>
080810bb +0x10e1:  mov    0x8(%ebp),%eax
080810be +0x10e4:  movl   $0x0,0x10(%eax)
080810c5 +0x10eb:  leave
080810c6 +0x10ec:  ret
080810c7 +0x10ed:  nop
080810c8 +0x10ee:  push   %ebp
080810c9 +0x10ef:  mov    %esp,%ebp
080810cb +0x10f1:  sub    $0x28,%esp
080810ce +0x10f4:  mov    0x8(%ebp),%eax
080810d1 +0x10f7:  add    $0x4,%eax
080810d4 +0x10fa:  mov    %eax,0x4(%esp)
080810d8 +0x10fe:  lea    -0x9(%ebp),%eax
080810db +0x1101:  mov    %eax,(%esp)
080810de +0x1104:  call   08081c8e <+0x1cb4>
080810e3 +0x1109:  mov    0x10(%ebp),%eax
080810e6 +0x110c:  lea    0x1(%eax),%edx
080810e9 +0x110f:  lea    -0x9(%ebp),%eax
080810ec +0x1112:  mov    %edx,0x8(%esp)
080810f0 +0x1116:  mov    0xc(%ebp),%edx
080810f3 +0x1119:  mov    %edx,0x4(%esp)
080810f7 +0x111d:  mov    %eax,(%esp)
080810fa +0x1120:  call   08081cb6 <+0x1cdc>
080810ff +0x1125:  lea    -0x9(%ebp),%eax
08081102 +0x1128:  mov    %eax,(%esp)
08081105 +0x112b:  call   08081ca2 <+0x1cc8>
0808110a +0x1130:  leave
0808110b +0x1131:  ret
0808110c +0x1132:  push   %ebp
0808110d +0x1133:  mov    %esp,%ebp
0808110f +0x1135:  pop    %ebp
08081110 +0x1136:  ret
08081111 +0x1137:  nop
08081112 +0x1138:  push   %ebp
08081113 +0x1139:  mov    %esp,%ebp
08081115 +0x113b:  pop    %ebp
08081116 +0x113c:  ret
08081117 +0x113d:  nop
08081118 +0x113e:  push   %ebp
08081119 +0x113f:  mov    %esp,%ebp
0808111b +0x1141:  sub    $0x38,%esp
0808111e +0x1144:  mov    0x8(%ebp),%eax
08081121 +0x1147:  mov    0x18(%ebp),%edx
08081124 +0x114a:  mov    %edx,0x1c(%esp)
08081128 +0x114e:  lea    -0xb(%ebp),%edx
0808112b +0x1151:  mov    %edx,0x18(%esp)
0808112f +0x1155:  mov    0x14(%ebp),%edx
08081132 +0x1158:  mov    %edx,0x14(%esp)
08081136 +0x115c:  lea    -0xa(%ebp),%edx
08081139 +0x115f:  mov    %edx,0x10(%esp)
0808113d +0x1163:  lea    -0x9(%ebp),%edx
08081140 +0x1166:  mov    %edx,0xc(%esp)
08081144 +0x116a:  mov    0x10(%ebp),%edx
08081147 +0x116d:  mov    %edx,0x8(%esp)
0808114b +0x1171:  mov    0xc(%ebp),%edx
0808114e +0x1174:  mov    %edx,0x4(%esp)
08081152 +0x1178:  mov    %eax,(%esp)
08081155 +0x117b:  call   08081cca <+0x1cf0>
0808115a +0x1180:  leave
0808115b +0x1181:  ret
0808115c +0x1182:  push   %ebp
0808115d +0x1183:  mov    %esp,%ebp
0808115f +0x1185:  sub    $0x18,%esp
08081162 +0x1188:  mov    0x8(%ebp),%eax
08081165 +0x118b:  mov    %eax,(%esp)
08081168 +0x118e:  call   08081d9c <+0x1dc2>
0808116d +0x1193:  leave
0808116e +0x1194:  ret
0808116f +0x1195:  nop
08081170 +0x1196:  push   %ebp
08081171 +0x1197:  mov    %esp,%ebp
08081173 +0x1199:  sub    $0x18,%esp
08081176 +0x119c:  mov    0x8(%ebp),%eax
08081179 +0x119f:  mov    0xc(%eax),%edx
0808117c +0x11a2:  mov    0x8(%ebp),%eax
0808117f +0x11a5:  mov    0x8(%eax),%eax
08081182 +0x11a8:  mov    %edx,0x8(%esp)
08081186 +0x11ac:  mov    %eax,0x4(%esp)
0808118a +0x11b0:  mov    0x8(%ebp),%eax
0808118d +0x11b3:  mov    %eax,(%esp)
08081190 +0x11b6:  call   08081da2 <+0x1dc8>
08081195 +0x11bb:  mov    0x8(%ebp),%eax
08081198 +0x11be:  movl   $0x0,0x10(%eax)
0808119f +0x11c5:  leave
080811a0 +0x11c6:  ret
080811a1 +0x11c7:  nop
080811a2 +0x11c8:  push   %ebp
080811a3 +0x11c9:  mov    %esp,%ebp
080811a5 +0x11cb:  sub    $0x28,%esp
080811a8 +0x11ce:  mov    0x8(%ebp),%eax
080811ab +0x11d1:  add    $0x4,%eax
080811ae +0x11d4:  mov    %eax,0x4(%esp)
080811b2 +0x11d8:  lea    -0x9(%ebp),%eax
080811b5 +0x11db:  mov    %eax,(%esp)
080811b8 +0x11de:  call   08081e10 <+0x1e36>
080811bd +0x11e3:  mov    0x10(%ebp),%eax
080811c0 +0x11e6:  lea    0x1(%eax),%edx
080811c3 +0x11e9:  lea    -0x9(%ebp),%eax
080811c6 +0x11ec:  mov    %edx,0x8(%esp)
080811ca +0x11f0:  mov    0xc(%ebp),%edx
080811cd +0x11f3:  mov    %edx,0x4(%esp)
080811d1 +0x11f7:  mov    %eax,(%esp)
080811d4 +0x11fa:  call   08081e38 <+0x1e5e>
080811d9 +0x11ff:  lea    -0x9(%ebp),%eax
080811dc +0x1202:  mov    %eax,(%esp)
080811df +0x1205:  call   08081e24 <+0x1e4a>
080811e4 +0x120a:  leave
080811e5 +0x120b:  ret
080811e6 +0x120c:  push   %ebp
080811e7 +0x120d:  mov    %esp,%ebp
080811e9 +0x120f:  pop    %ebp
080811ea +0x1210:  ret
080811eb +0x1211:  nop
080811ec +0x1212:  push   %ebp
080811ed +0x1213:  mov    %esp,%ebp
080811ef +0x1215:  pop    %ebp
080811f0 +0x1216:  ret
080811f1 +0x1217:  nop
080811f2 +0x1218:  push   %ebp
080811f3 +0x1219:  mov    %esp,%ebp
080811f5 +0x121b:  sub    $0x38,%esp
080811f8 +0x121e:  mov    0x8(%ebp),%eax
080811fb +0x1221:  mov    0x18(%ebp),%edx
080811fe +0x1224:  mov    %edx,0x1c(%esp)
08081202 +0x1228:  lea    -0xb(%ebp),%edx
08081205 +0x122b:  mov    %edx,0x18(%esp)
08081209 +0x122f:  mov    0x14(%ebp),%edx
0808120c +0x1232:  mov    %edx,0x14(%esp)
08081210 +0x1236:  lea    -0xa(%ebp),%edx
08081213 +0x1239:  mov    %edx,0x10(%esp)
08081217 +0x123d:  lea    -0x9(%ebp),%edx
0808121a +0x1240:  mov    %edx,0xc(%esp)
0808121e +0x1244:  mov    0x10(%ebp),%edx
08081221 +0x1247:  mov    %edx,0x8(%esp)
08081225 +0x124b:  mov    0xc(%ebp),%edx
08081228 +0x124e:  mov    %edx,0x4(%esp)
0808122c +0x1252:  mov    %eax,(%esp)
0808122f +0x1255:  call   08081e4c <+0x1e72>
08081234 +0x125a:  leave
08081235 +0x125b:  ret
08081236 +0x125c:  push   %ebp
08081237 +0x125d:  mov    %esp,%ebp
08081239 +0x125f:  sub    $0x18,%esp
0808123c +0x1262:  mov    0x8(%ebp),%eax
0808123f +0x1265:  mov    %eax,(%esp)
08081242 +0x1268:  call   08081f1e <+0x1f44>
08081247 +0x126d:  leave
08081248 +0x126e:  ret
08081249 +0x126f:  nop
0808124a +0x1270:  push   %ebp
0808124b +0x1271:  mov    %esp,%ebp
0808124d +0x1273:  sub    $0x18,%esp
08081250 +0x1276:  mov    0x8(%ebp),%eax
08081253 +0x1279:  mov    0xc(%eax),%edx
08081256 +0x127c:  mov    0x8(%ebp),%eax
08081259 +0x127f:  mov    0x8(%eax),%eax
0808125c +0x1282:  mov    %edx,0x8(%esp)
08081260 +0x1286:  mov    %eax,0x4(%esp)
08081264 +0x128a:  mov    0x8(%ebp),%eax
08081267 +0x128d:  mov    %eax,(%esp)
0808126a +0x1290:  call   08081f24 <+0x1f4a>
0808126f +0x1295:  mov    0x8(%ebp),%eax
08081272 +0x1298:  movl   $0x0,0x10(%eax)
08081279 +0x129f:  leave
0808127a +0x12a0:  ret
0808127b +0x12a1:  nop
0808127c +0x12a2:  push   %ebp
0808127d +0x12a3:  mov    %esp,%ebp
0808127f +0x12a5:  sub    $0x28,%esp
08081282 +0x12a8:  mov    0x8(%ebp),%eax
08081285 +0x12ab:  add    $0x4,%eax
08081288 +0x12ae:  mov    %eax,0x4(%esp)
0808128c +0x12b2:  lea    -0x9(%ebp),%eax
0808128f +0x12b5:  mov    %eax,(%esp)
08081292 +0x12b8:  call   08081f92 <+0x1fb8>
08081297 +0x12bd:  mov    0x10(%ebp),%eax
0808129a +0x12c0:  lea    0x1(%eax),%edx
0808129d +0x12c3:  lea    -0x9(%ebp),%eax
080812a0 +0x12c6:  mov    %edx,0x8(%esp)
080812a4 +0x12ca:  mov    0xc(%ebp),%edx
080812a7 +0x12cd:  mov    %edx,0x4(%esp)
080812ab +0x12d1:  mov    %eax,(%esp)
080812ae +0x12d4:  call   08081fba <+0x1fe0>
080812b3 +0x12d9:  lea    -0x9(%ebp),%eax
080812b6 +0x12dc:  mov    %eax,(%esp)
080812b9 +0x12df:  call   08081fa6 <+0x1fcc>
080812be +0x12e4:  leave
080812bf +0x12e5:  ret
080812c0 +0x12e6:  push   %ebp
080812c1 +0x12e7:  mov    %esp,%ebp
080812c3 +0x12e9:  push   %ebx
080812c4 +0x12ea:  sub    $0x24,%esp
080812c7 +0x12ed:  mov    0x8(%ebp),%ebx
080812ca +0x12f0:  mov    0xc(%ebp),%eax
080812cd +0x12f3:  mov    0x10(%ebp),%edx
080812d0 +0x12f6:  mov    %edx,0x4(%esp)
080812d4 +0x12fa:  mov    %eax,(%esp)
080812d7 +0x12fd:  call   08081fce <+0x1ff4>
080812dc +0x1302:  mov    %eax,-0x14(%ebp)
080812df +0x1305:  mov    0xc(%ebp),%eax
080812e2 +0x1308:  mov    0xc(%eax),%edx
080812e5 +0x130b:  mov    0xc(%ebp),%eax
080812e8 +0x130e:  mov    %edx,0xc(%esp)
080812ec +0x1312:  mov    -0x14(%ebp),%edx
080812ef +0x1315:  mov    %edx,0x8(%esp)
080812f3 +0x1319:  mov    0x10(%ebp),%edx
080812f6 +0x131c:  mov    %edx,0x4(%esp)
080812fa +0x1320:  mov    %eax,(%esp)
080812fd +0x1323:  call   08081fee <+0x2014>
08081302 +0x1328:  mov    %eax,-0x10(%ebp)
08081305 +0x132b:  mov    0xc(%ebp),%eax
08081308 +0x132e:  mov    0x8(%eax),%eax
0808130b +0x1331:  mov    -0x10(%ebp),%edx
0808130e +0x1334:  shl    $0x2,%edx
08081311 +0x1337:  add    %edx,%eax
08081313 +0x1339:  mov    (%eax),%eax
08081315 +0x133b:  mov    -0x14(%ebp),%edx
08081318 +0x133e:  mov    %edx,0xc(%esp)
0808131c +0x1342:  mov    0x10(%ebp),%edx
0808131f +0x1345:  mov    %edx,0x8(%esp)
08081323 +0x1349:  mov    %eax,0x4(%esp)
08081327 +0x134d:  mov    0xc(%ebp),%eax
0808132a +0x1350:  mov    %eax,(%esp)
0808132d +0x1353:  call   08082012 <+0x2038>
08081332 +0x1358:  mov    %eax,-0xc(%ebp)
08081335 +0x135b:  cmpl   $0x0,-0xc(%ebp)
08081339 +0x135f:  je     0808135e <+0x1384>
0808133b +0x1361:  mov    0xc(%ebp),%eax
0808133e +0x1364:  mov    0x8(%eax),%eax
08081341 +0x1367:  mov    -0x10(%ebp),%edx
08081344 +0x136a:  shl    $0x2,%edx
08081347 +0x136d:  add    %edx,%eax
08081349 +0x136f:  mov    %eax,0x8(%esp)
0808134d +0x1373:  mov    -0xc(%ebp),%eax
08081350 +0x1376:  mov    %eax,0x4(%esp)
08081354 +0x137a:  mov    %ebx,(%esp)
08081357 +0x137d:  call   0808205e <+0x2084>
0808135c +0x1382:  jmp    08081370 <+0x1396>
0808135e +0x1384:  mov    0xc(%ebp),%eax
08081361 +0x1387:  mov    %eax,0x4(%esp)
08081365 +0x138b:  mov    %ebx,(%esp)
08081368 +0x138e:  call   0808137a <+0x13a0>
0808136d +0x1393:  sub    $0x4,%esp
08081370 +0x1396:  mov    %ebx,%eax
08081372 +0x1398:  mov    -0x4(%ebp),%ebx
08081375 +0x139b:  leave
08081376 +0x139c:  ret    $0x4
08081379 +0x139f:  nop
0808137a +0x13a0:  push   %ebp
0808137b +0x13a1:  mov    %esp,%ebp
0808137d +0x13a3:  push   %ebx
0808137e +0x13a4:  sub    $0x14,%esp
08081381 +0x13a7:  mov    0x8(%ebp),%ebx
08081384 +0x13aa:  mov    0xc(%ebp),%eax
08081387 +0x13ad:  mov    0x8(%eax),%edx
0808138a +0x13b0:  mov    0xc(%ebp),%eax
0808138d +0x13b3:  mov    0xc(%eax),%eax
08081390 +0x13b6:  shl    $0x2,%eax
08081393 +0x13b9:  lea    (%edx,%eax,1),%eax
08081396 +0x13bc:  mov    %eax,0x4(%esp)
0808139a +0x13c0:  mov    %ebx,(%esp)
0808139d +0x13c3:  call   08082080 <+0x20a6>
080813a2 +0x13c8:  mov    %ebx,%eax
080813a4 +0x13ca:  add    $0x14,%esp
080813a7 +0x13cd:  pop    %ebx
080813a8 +0x13ce:  pop    %ebp
080813a9 +0x13cf:  ret    $0x4
080813ac +0x13d2:  push   %ebp
080813ad +0x13d3:  mov    %esp,%ebp
080813af +0x13d5:  mov    0x8(%ebp),%eax
080813b2 +0x13d8:  mov    (%eax),%edx
080813b4 +0x13da:  mov    0xc(%ebp),%eax
080813b7 +0x13dd:  mov    (%eax),%eax
080813b9 +0x13df:  cmp    %eax,%edx
080813bb +0x13e1:  setne  %al
080813be +0x13e4:  pop    %ebp
080813bf +0x13e5:  ret
080813c0 +0x13e6:  push   %ebp
080813c1 +0x13e7:  mov    %esp,%ebp
080813c3 +0x13e9:  push   %ebx
080813c4 +0x13ea:  sub    $0x24,%esp
080813c7 +0x13ed:  mov    0x8(%ebp),%ebx
080813ca +0x13f0:  mov    0x10(%ebp),%eax
080813cd +0x13f3:  mov    %eax,(%esp)
080813d0 +0x13f6:  call   08080fa6 <+0xfcc>
080813d5 +0x13fb:  movzbl (%eax),%eax
080813d8 +0x13fe:  mov    %al,-0x9(%ebp)
080813db +0x1401:  mov    0xc(%ebp),%eax
080813de +0x1404:  mov    %eax,(%esp)
080813e1 +0x1407:  call   080820a3 <+0x20c9>
080813e6 +0x140c:  lea    -0x9(%ebp),%edx
080813e9 +0x140f:  mov    %edx,0x8(%esp)
080813ed +0x1413:  mov    %eax,0x4(%esp)
080813f1 +0x1417:  mov    %ebx,(%esp)
080813f4 +0x141a:  call   080820ac <+0x20d2>
080813f9 +0x141f:  mov    %ebx,%eax
080813fb +0x1421:  add    $0x24,%esp
080813fe +0x1424:  pop    %ebx
080813ff +0x1425:  pop    %ebp
08081400 +0x1426:  ret    $0x4
08081403 +0x1429:  nop
08081404 +0x142a:  push   %ebp
08081405 +0x142b:  mov    %esp,%ebp
08081407 +0x142d:  sub    $0x18,%esp
0808140a +0x1430:  mov    0xc(%ebp),%edx
0808140d +0x1433:  mov    0x8(%ebp),%eax
08081410 +0x1436:  mov    %edx,0x4(%esp)
08081414 +0x143a:  mov    %eax,(%esp)
08081417 +0x143d:  call   08ad69c6 <_ZN10CharStringC1ERKS_>  ; CharString::CharString(CharString const&)
0808141c +0x1442:  mov    0xc(%ebp),%eax
0808141f +0x1445:  mov    0x4(%eax),%edx
08081422 +0x1448:  mov    0x8(%ebp),%eax
08081425 +0x144b:  mov    %edx,0x4(%eax)
08081428 +0x144e:  leave
08081429 +0x144f:  ret
0808142a +0x1450:  push   %ebp
0808142b +0x1451:  mov    %esp,%ebp
0808142d +0x1453:  sub    $0x18,%esp
08081430 +0x1456:  mov    0xc(%ebp),%eax
08081433 +0x1459:  mov    %eax,(%esp)
08081436 +0x145c:  call   080820e0 <+0x2106>
0808143b +0x1461:  mov    (%eax),%edx
0808143d +0x1463:  mov    0x8(%ebp),%eax
08081440 +0x1466:  mov    %edx,(%eax)
08081442 +0x1468:  mov    0x10(%ebp),%eax
08081445 +0x146b:  mov    %eax,(%esp)
08081448 +0x146e:  call   080820e8 <+0x210e>
0808144d +0x1473:  mov    0x8(%ebp),%edx
08081450 +0x1476:  add    $0x4,%edx
08081453 +0x1479:  mov    %eax,0x4(%esp)
08081457 +0x147d:  mov    %edx,(%esp)
0808145a +0x1480:  call   08081404 <+0x142a>
0808145f +0x1485:  leave
08081460 +0x1486:  ret
08081461 +0x1487:  nop
08081462 +0x1488:  push   %ebp
08081463 +0x1489:  mov    %esp,%ebp
08081465 +0x148b:  push   %ebx
08081466 +0x148c:  sub    $0x14,%esp
08081469 +0x148f:  mov    0x8(%ebp),%ebx
0808146c +0x1492:  mov    %al,0xc(%esp)
08081470 +0x1496:  mov    0x10(%ebp),%eax
08081473 +0x1499:  mov    %eax,0x8(%esp)
08081477 +0x149d:  mov    0xc(%ebp),%eax
0808147a +0x14a0:  mov    %eax,0x4(%esp)
0808147e +0x14a4:  mov    %ebx,(%esp)
08081481 +0x14a7:  call   080820f0 <+0x2116>
08081486 +0x14ac:  sub    $0x4,%esp
08081489 +0x14af:  mov    %ebx,%eax
0808148b +0x14b1:  mov    -0x4(%ebp),%ebx
0808148e +0x14b4:  leave
0808148f +0x14b5:  ret    $0x4
08081492 +0x14b8:  push   %ebp
08081493 +0x14b9:  mov    %esp,%ebp
08081495 +0x14bb:  push   %ebx
08081496 +0x14bc:  sub    $0x24,%esp
08081499 +0x14bf:  mov    0x8(%ebp),%ebx
0808149c +0x14c2:  mov    0xc(%ebp),%eax
0808149f +0x14c5:  mov    0x10(%ebp),%edx
080814a2 +0x14c8:  mov    %edx,0x4(%esp)
080814a6 +0x14cc:  mov    %eax,(%esp)
080814a9 +0x14cf:  call   08082214 <+0x223a>
080814ae +0x14d4:  mov    %eax,-0x14(%ebp)
080814b1 +0x14d7:  mov    0xc(%ebp),%eax
080814b4 +0x14da:  mov    0xc(%eax),%edx
080814b7 +0x14dd:  mov    0xc(%ebp),%eax
080814ba +0x14e0:  mov    %edx,0xc(%esp)
080814be +0x14e4:  mov    -0x14(%ebp),%edx
080814c1 +0x14e7:  mov    %edx,0x8(%esp)
080814c5 +0x14eb:  mov    0x10(%ebp),%edx
080814c8 +0x14ee:  mov    %edx,0x4(%esp)
080814cc +0x14f2:  mov    %eax,(%esp)
080814cf +0x14f5:  call   08082234 <+0x225a>
080814d4 +0x14fa:  mov    %eax,-0x10(%ebp)
080814d7 +0x14fd:  mov    0xc(%ebp),%eax
080814da +0x1500:  mov    0x8(%eax),%eax
080814dd +0x1503:  mov    -0x10(%ebp),%edx
080814e0 +0x1506:  shl    $0x2,%edx
080814e3 +0x1509:  add    %edx,%eax
080814e5 +0x150b:  mov    (%eax),%eax
080814e7 +0x150d:  mov    -0x14(%ebp),%edx
080814ea +0x1510:  mov    %edx,0xc(%esp)
080814ee +0x1514:  mov    0x10(%ebp),%edx
080814f1 +0x1517:  mov    %edx,0x8(%esp)
080814f5 +0x151b:  mov    %eax,0x4(%esp)
080814f9 +0x151f:  mov    0xc(%ebp),%eax
080814fc +0x1522:  mov    %eax,(%esp)
080814ff +0x1525:  call   08082258 <+0x227e>
08081504 +0x152a:  mov    %eax,-0xc(%ebp)
08081507 +0x152d:  cmpl   $0x0,-0xc(%ebp)
0808150b +0x1531:  je     08081530 <+0x1556>
0808150d +0x1533:  mov    0xc(%ebp),%eax
08081510 +0x1536:  mov    0x8(%eax),%eax
08081513 +0x1539:  mov    -0x10(%ebp),%edx
08081516 +0x153c:  shl    $0x2,%edx
08081519 +0x153f:  add    %edx,%eax
0808151b +0x1541:  mov    %eax,0x8(%esp)
0808151f +0x1545:  mov    -0xc(%ebp),%eax
08081522 +0x1548:  mov    %eax,0x4(%esp)
08081526 +0x154c:  mov    %ebx,(%esp)
08081529 +0x154f:  call   080822a4 <+0x22ca>
0808152e +0x1554:  jmp    08081542 <+0x1568>
08081530 +0x1556:  mov    0xc(%ebp),%eax
08081533 +0x1559:  mov    %eax,0x4(%esp)
08081537 +0x155d:  mov    %ebx,(%esp)
0808153a +0x1560:  call   0808154c <+0x1572>
0808153f +0x1565:  sub    $0x4,%esp
08081542 +0x1568:  mov    %ebx,%eax
08081544 +0x156a:  mov    -0x4(%ebp),%ebx
08081547 +0x156d:  leave
08081548 +0x156e:  ret    $0x4
0808154b +0x1571:  nop
0808154c +0x1572:  push   %ebp
0808154d +0x1573:  mov    %esp,%ebp
0808154f +0x1575:  push   %ebx
08081550 +0x1576:  sub    $0x14,%esp
08081553 +0x1579:  mov    0x8(%ebp),%ebx
08081556 +0x157c:  mov    0xc(%ebp),%eax
08081559 +0x157f:  mov    0x8(%eax),%edx
0808155c +0x1582:  mov    0xc(%ebp),%eax
0808155f +0x1585:  mov    0xc(%eax),%eax
08081562 +0x1588:  shl    $0x2,%eax
08081565 +0x158b:  lea    (%edx,%eax,1),%eax
08081568 +0x158e:  mov    %eax,0x4(%esp)
0808156c +0x1592:  mov    %ebx,(%esp)
0808156f +0x1595:  call   080822c6 <+0x22ec>
08081574 +0x159a:  mov    %ebx,%eax
08081576 +0x159c:  add    $0x14,%esp
08081579 +0x159f:  pop    %ebx
0808157a +0x15a0:  pop    %ebp
0808157b +0x15a1:  ret    $0x4
0808157e +0x15a4:  push   %ebp
0808157f +0x15a5:  mov    %esp,%ebp
08081581 +0x15a7:  mov    0x8(%ebp),%eax
08081584 +0x15aa:  mov    (%eax),%edx
08081586 +0x15ac:  mov    0xc(%ebp),%eax
08081589 +0x15af:  mov    (%eax),%eax
0808158b +0x15b1:  cmp    %eax,%edx
0808158d +0x15b3:  setne  %al
08081590 +0x15b6:  pop    %ebp
08081591 +0x15b7:  ret
08081592 +0x15b8:  push   %ebp
08081593 +0x15b9:  mov    %esp,%ebp
08081595 +0x15bb:  push   %ebx
08081596 +0x15bc:  sub    $0x24,%esp
08081599 +0x15bf:  mov    0x8(%ebp),%ebx
0808159c +0x15c2:  mov    0x10(%ebp),%eax
0808159f +0x15c5:  mov    %eax,(%esp)
080815a2 +0x15c8:  call   08080fa6 <+0xfcc>
080815a7 +0x15cd:  movzbl (%eax),%eax
080815aa +0x15d0:  mov    %al,-0x9(%ebp)
080815ad +0x15d3:  mov    0xc(%ebp),%eax
080815b0 +0x15d6:  mov    %eax,(%esp)
080815b3 +0x15d9:  call   080822e9 <+0x230f>
080815b8 +0x15de:  lea    -0x9(%ebp),%edx
080815bb +0x15e1:  mov    %edx,0x8(%esp)
080815bf +0x15e5:  mov    %eax,0x4(%esp)
080815c3 +0x15e9:  mov    %ebx,(%esp)
080815c6 +0x15ec:  call   080822f2 <+0x2318>
080815cb +0x15f1:  mov    %ebx,%eax
080815cd +0x15f3:  add    $0x24,%esp
080815d0 +0x15f6:  pop    %ebx
080815d1 +0x15f7:  pop    %ebp
080815d2 +0x15f8:  ret    $0x4
080815d5 +0x15fb:  nop
080815d6 +0x15fc:  push   %ebp
080815d7 +0x15fd:  mov    %esp,%ebp
080815d9 +0x15ff:  sub    $0x18,%esp
080815dc +0x1602:  mov    0xc(%ebp),%edx
080815df +0x1605:  mov    0x8(%ebp),%eax
080815e2 +0x1608:  mov    %edx,0x4(%esp)
080815e6 +0x160c:  mov    %eax,(%esp)
080815e9 +0x160f:  call   08ad69c6 <_ZN10CharStringC1ERKS_>  ; CharString::CharString(CharString const&)
080815ee +0x1614:  mov    0xc(%ebp),%eax
080815f1 +0x1617:  mov    0x4(%eax),%edx
080815f4 +0x161a:  mov    0x8(%ebp),%eax
080815f7 +0x161d:  mov    %edx,0x4(%eax)
080815fa +0x1620:  leave
080815fb +0x1621:  ret
080815fc +0x1622:  push   %ebp
080815fd +0x1623:  mov    %esp,%ebp
080815ff +0x1625:  sub    $0x18,%esp
08081602 +0x1628:  mov    0xc(%ebp),%eax
08081605 +0x162b:  mov    %eax,(%esp)
08081608 +0x162e:  call   080820e0 <+0x2106>
0808160d +0x1633:  mov    (%eax),%edx
0808160f +0x1635:  mov    0x8(%ebp),%eax
08081612 +0x1638:  mov    %edx,(%eax)
08081614 +0x163a:  mov    0x10(%ebp),%eax
08081617 +0x163d:  mov    %eax,(%esp)
0808161a +0x1640:  call   08082326 <+0x234c>
0808161f +0x1645:  mov    0x8(%ebp),%edx
08081622 +0x1648:  add    $0x4,%edx
08081625 +0x164b:  mov    %eax,0x4(%esp)
08081629 +0x164f:  mov    %edx,(%esp)
0808162c +0x1652:  call   080815d6 <+0x15fc>
08081631 +0x1657:  leave
08081632 +0x1658:  ret
08081633 +0x1659:  nop
08081634 +0x165a:  push   %ebp
08081635 +0x165b:  mov    %esp,%ebp
08081637 +0x165d:  push   %ebx
08081638 +0x165e:  sub    $0x14,%esp
0808163b +0x1661:  mov    0x8(%ebp),%ebx
0808163e +0x1664:  mov    %al,0xc(%esp)
08081642 +0x1668:  mov    0x10(%ebp),%eax
08081645 +0x166b:  mov    %eax,0x8(%esp)
08081649 +0x166f:  mov    0xc(%ebp),%eax
0808164c +0x1672:  mov    %eax,0x4(%esp)
08081650 +0x1676:  mov    %ebx,(%esp)
08081653 +0x1679:  call   0808232e <+0x2354>
08081658 +0x167e:  sub    $0x4,%esp
0808165b +0x1681:  mov    %ebx,%eax
0808165d +0x1683:  mov    -0x4(%ebp),%ebx
08081660 +0x1686:  leave
08081661 +0x1687:  ret    $0x4
08081664 +0x168a:  push   %ebp
08081665 +0x168b:  mov    %esp,%ebp
08081667 +0x168d:  push   %ebx
08081668 +0x168e:  sub    $0x24,%esp
0808166b +0x1691:  mov    0x8(%ebp),%ebx
0808166e +0x1694:  mov    0xc(%ebp),%eax
08081671 +0x1697:  mov    0x10(%ebp),%edx
08081674 +0x169a:  mov    %edx,0x4(%esp)
08081678 +0x169e:  mov    %eax,(%esp)
0808167b +0x16a1:  call   08082452 <+0x2478>
08081680 +0x16a6:  mov    %eax,-0x14(%ebp)
08081683 +0x16a9:  mov    0xc(%ebp),%eax
08081686 +0x16ac:  mov    0xc(%eax),%edx
08081689 +0x16af:  mov    0xc(%ebp),%eax
0808168c +0x16b2:  mov    %edx,0xc(%esp)
08081690 +0x16b6:  mov    -0x14(%ebp),%edx
08081693 +0x16b9:  mov    %edx,0x8(%esp)
08081697 +0x16bd:  mov    0x10(%ebp),%edx
0808169a +0x16c0:  mov    %edx,0x4(%esp)
0808169e +0x16c4:  mov    %eax,(%esp)
080816a1 +0x16c7:  call   08082472 <+0x2498>
080816a6 +0x16cc:  mov    %eax,-0x10(%ebp)
080816a9 +0x16cf:  mov    0xc(%ebp),%eax
080816ac +0x16d2:  mov    0x8(%eax),%eax
080816af +0x16d5:  mov    -0x10(%ebp),%edx
080816b2 +0x16d8:  shl    $0x2,%edx
080816b5 +0x16db:  add    %edx,%eax
080816b7 +0x16dd:  mov    (%eax),%eax
080816b9 +0x16df:  mov    -0x14(%ebp),%edx
080816bc +0x16e2:  mov    %edx,0xc(%esp)
080816c0 +0x16e6:  mov    0x10(%ebp),%edx
080816c3 +0x16e9:  mov    %edx,0x8(%esp)
080816c7 +0x16ed:  mov    %eax,0x4(%esp)
080816cb +0x16f1:  mov    0xc(%ebp),%eax
080816ce +0x16f4:  mov    %eax,(%esp)
080816d1 +0x16f7:  call   08082496 <+0x24bc>
080816d6 +0x16fc:  mov    %eax,-0xc(%ebp)
080816d9 +0x16ff:  cmpl   $0x0,-0xc(%ebp)
080816dd +0x1703:  je     08081702 <+0x1728>
080816df +0x1705:  mov    0xc(%ebp),%eax
080816e2 +0x1708:  mov    0x8(%eax),%eax
080816e5 +0x170b:  mov    -0x10(%ebp),%edx
080816e8 +0x170e:  shl    $0x2,%edx
080816eb +0x1711:  add    %edx,%eax
080816ed +0x1713:  mov    %eax,0x8(%esp)
080816f1 +0x1717:  mov    -0xc(%ebp),%eax
080816f4 +0x171a:  mov    %eax,0x4(%esp)
080816f8 +0x171e:  mov    %ebx,(%esp)
080816fb +0x1721:  call   080824e2 <+0x2508>
08081700 +0x1726:  jmp    08081714 <+0x173a>
08081702 +0x1728:  mov    0xc(%ebp),%eax
08081705 +0x172b:  mov    %eax,0x4(%esp)
08081709 +0x172f:  mov    %ebx,(%esp)
0808170c +0x1732:  call   0808171e <+0x1744>
08081711 +0x1737:  sub    $0x4,%esp
08081714 +0x173a:  mov    %ebx,%eax
08081716 +0x173c:  mov    -0x4(%ebp),%ebx
08081719 +0x173f:  leave
0808171a +0x1740:  ret    $0x4
0808171d +0x1743:  nop
0808171e +0x1744:  push   %ebp
0808171f +0x1745:  mov    %esp,%ebp
08081721 +0x1747:  push   %ebx
08081722 +0x1748:  sub    $0x14,%esp
08081725 +0x174b:  mov    0x8(%ebp),%ebx
08081728 +0x174e:  mov    0xc(%ebp),%eax
0808172b +0x1751:  mov    0x8(%eax),%edx
0808172e +0x1754:  mov    0xc(%ebp),%eax
08081731 +0x1757:  mov    0xc(%eax),%eax
08081734 +0x175a:  shl    $0x2,%eax
08081737 +0x175d:  lea    (%edx,%eax,1),%eax
0808173a +0x1760:  mov    %eax,0x4(%esp)
0808173e +0x1764:  mov    %ebx,(%esp)
08081741 +0x1767:  call   08082504 <+0x252a>
08081746 +0x176c:  mov    %ebx,%eax
08081748 +0x176e:  add    $0x14,%esp
0808174b +0x1771:  pop    %ebx
0808174c +0x1772:  pop    %ebp
0808174d +0x1773:  ret    $0x4
08081750 +0x1776:  push   %ebp
08081751 +0x1777:  mov    %esp,%ebp
08081753 +0x1779:  mov    0x8(%ebp),%eax
08081756 +0x177c:  mov    (%eax),%edx
08081758 +0x177e:  mov    0xc(%ebp),%eax
0808175b +0x1781:  mov    (%eax),%eax
0808175d +0x1783:  cmp    %eax,%edx
0808175f +0x1785:  setne  %al
08081762 +0x1788:  pop    %ebp
08081763 +0x1789:  ret
08081764 +0x178a:  push   %ebp
08081765 +0x178b:  mov    %esp,%ebp
08081767 +0x178d:  push   %ebx
08081768 +0x178e:  sub    $0x24,%esp
0808176b +0x1791:  mov    0x8(%ebp),%ebx
0808176e +0x1794:  mov    0x10(%ebp),%eax
08081771 +0x1797:  mov    %eax,(%esp)
08081774 +0x179a:  call   08080fa6 <+0xfcc>
08081779 +0x179f:  movzbl (%eax),%eax
0808177c +0x17a2:  mov    %al,-0x9(%ebp)
0808177f +0x17a5:  mov    0xc(%ebp),%eax
08081782 +0x17a8:  mov    %eax,(%esp)
08081785 +0x17ab:  call   08082527 <+0x254d>
0808178a +0x17b0:  lea    -0x9(%ebp),%edx
0808178d +0x17b3:  mov    %edx,0x8(%esp)
08081791 +0x17b7:  mov    %eax,0x4(%esp)
08081795 +0x17bb:  mov    %ebx,(%esp)
08081798 +0x17be:  call   08082530 <+0x2556>
0808179d +0x17c3:  mov    %ebx,%eax
0808179f +0x17c5:  add    $0x24,%esp
080817a2 +0x17c8:  pop    %ebx
080817a3 +0x17c9:  pop    %ebp
080817a4 +0x17ca:  ret    $0x4
080817a7 +0x17cd:  nop
080817a8 +0x17ce:  push   %ebp
080817a9 +0x17cf:  mov    %esp,%ebp
080817ab +0x17d1:  push   %esi
080817ac +0x17d2:  push   %ebx
080817ad +0x17d3:  sub    $0x10,%esp
080817b0 +0x17d6:  mov    0xc(%ebp),%edx
080817b3 +0x17d9:  mov    0x8(%ebp),%eax
080817b6 +0x17dc:  mov    %edx,0x4(%esp)
080817ba +0x17e0:  mov    %eax,(%esp)
080817bd +0x17e3:  call   08ad69c6 <_ZN10CharStringC1ERKS_>  ; CharString::CharString(CharString const&)
080817c2 +0x17e8:  mov    0xc(%ebp),%eax
080817c5 +0x17eb:  lea    0x4(%eax),%edx
080817c8 +0x17ee:  mov    0x8(%ebp),%eax
080817cb +0x17f1:  add    $0x4,%eax
080817ce +0x17f4:  mov    %edx,0x4(%esp)
080817d2 +0x17f8:  mov    %eax,(%esp)
080817d5 +0x17fb:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
080817da +0x1800:  jmp    080817f7 <+0x181d>
080817dc +0x1802:  mov    %edx,%ebx
080817de +0x1804:  mov    %eax,%esi
080817e0 +0x1806:  mov    0x8(%ebp),%eax
080817e3 +0x1809:  mov    %eax,(%esp)
080817e6 +0x180c:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
080817eb +0x1811:  mov    %esi,%eax
080817ed +0x1813:  mov    %ebx,%edx
080817ef +0x1815:  mov    %eax,(%esp)
080817f2 +0x1818:  call   08ae3750 <_Unwind_Resume>
080817f7 +0x181d:  add    $0x10,%esp
080817fa +0x1820:  pop    %ebx
080817fb +0x1821:  pop    %esi
080817fc +0x1822:  pop    %ebp
080817fd +0x1823:  ret
080817fe +0x1824:  push   %ebp
080817ff +0x1825:  mov    %esp,%ebp
08081801 +0x1827:  sub    $0x18,%esp
08081804 +0x182a:  mov    0xc(%ebp),%eax
08081807 +0x182d:  mov    %eax,(%esp)
0808180a +0x1830:  call   080820e0 <+0x2106>
0808180f +0x1835:  mov    (%eax),%edx
08081811 +0x1837:  mov    0x8(%ebp),%eax
08081814 +0x183a:  mov    %edx,(%eax)
08081816 +0x183c:  mov    0x10(%ebp),%eax
08081819 +0x183f:  mov    %eax,(%esp)
0808181c +0x1842:  call   08082564 <+0x258a>
08081821 +0x1847:  mov    0x8(%ebp),%edx
08081824 +0x184a:  add    $0x4,%edx
08081827 +0x184d:  mov    %eax,0x4(%esp)
0808182b +0x1851:  mov    %edx,(%esp)
0808182e +0x1854:  call   080817a8 <+0x17ce>
08081833 +0x1859:  leave
08081834 +0x185a:  ret
08081835 +0x185b:  nop
08081836 +0x185c:  push   %ebp
08081837 +0x185d:  mov    %esp,%ebp
08081839 +0x185f:  push   %ebx
0808183a +0x1860:  sub    $0x14,%esp
0808183d +0x1863:  mov    0x8(%ebp),%ebx
08081840 +0x1866:  mov    %al,0xc(%esp)
08081844 +0x186a:  mov    0x10(%ebp),%eax
08081847 +0x186d:  mov    %eax,0x8(%esp)
0808184b +0x1871:  mov    0xc(%ebp),%eax
0808184e +0x1874:  mov    %eax,0x4(%esp)
08081852 +0x1878:  mov    %ebx,(%esp)
08081855 +0x187b:  call   0808256c <+0x2592>
0808185a +0x1880:  sub    $0x4,%esp
0808185d +0x1883:  mov    %ebx,%eax
0808185f +0x1885:  mov    -0x4(%ebp),%ebx
08081862 +0x1888:  leave
08081863 +0x1889:  ret    $0x4
08081866 +0x188c:  push   %ebp
08081867 +0x188d:  mov    %esp,%ebp
08081869 +0x188f:  push   %ebx
0808186a +0x1890:  sub    $0x24,%esp
0808186d +0x1893:  mov    0x8(%ebp),%ebx
08081870 +0x1896:  mov    0xc(%ebp),%eax
08081873 +0x1899:  mov    0x10(%ebp),%edx
08081876 +0x189c:  mov    %edx,0x4(%esp)
0808187a +0x18a0:  mov    %eax,(%esp)
0808187d +0x18a3:  call   08081fce <+0x1ff4>
08081882 +0x18a8:  mov    %eax,-0x14(%ebp)
08081885 +0x18ab:  mov    0xc(%ebp),%eax
08081888 +0x18ae:  mov    0xc(%eax),%edx
0808188b +0x18b1:  mov    0xc(%ebp),%eax
0808188e +0x18b4:  mov    %edx,0xc(%esp)
08081892 +0x18b8:  mov    -0x14(%ebp),%edx
08081895 +0x18bb:  mov    %edx,0x8(%esp)
08081899 +0x18bf:  mov    0x10(%ebp),%edx
0808189c +0x18c2:  mov    %edx,0x4(%esp)
080818a0 +0x18c6:  mov    %eax,(%esp)
080818a3 +0x18c9:  call   08081fee <+0x2014>
080818a8 +0x18ce:  mov    %eax,-0x10(%ebp)
080818ab +0x18d1:  mov    0xc(%ebp),%eax
080818ae +0x18d4:  mov    0x8(%eax),%eax
080818b1 +0x18d7:  mov    -0x10(%ebp),%edx
080818b4 +0x18da:  shl    $0x2,%edx
080818b7 +0x18dd:  add    %edx,%eax
080818b9 +0x18df:  mov    (%eax),%eax
080818bb +0x18e1:  mov    -0x14(%ebp),%edx
080818be +0x18e4:  mov    %edx,0xc(%esp)
080818c2 +0x18e8:  mov    0x10(%ebp),%edx
080818c5 +0x18eb:  mov    %edx,0x8(%esp)
080818c9 +0x18ef:  mov    %eax,0x4(%esp)
080818cd +0x18f3:  mov    0xc(%ebp),%eax
080818d0 +0x18f6:  mov    %eax,(%esp)
080818d3 +0x18f9:  call   08082012 <+0x2038>
080818d8 +0x18fe:  mov    %eax,-0xc(%ebp)
080818db +0x1901:  cmpl   $0x0,-0xc(%ebp)
080818df +0x1905:  je     08081904 <+0x192a>
080818e1 +0x1907:  mov    0xc(%ebp),%eax
080818e4 +0x190a:  mov    0x8(%eax),%eax
080818e7 +0x190d:  mov    -0x10(%ebp),%edx
080818ea +0x1910:  shl    $0x2,%edx
080818ed +0x1913:  add    %edx,%eax
080818ef +0x1915:  mov    %eax,0x8(%esp)
080818f3 +0x1919:  mov    -0xc(%ebp),%eax
080818f6 +0x191c:  mov    %eax,0x4(%esp)
080818fa +0x1920:  mov    %ebx,(%esp)
080818fd +0x1923:  call   08082690 <+0x26b6>
08081902 +0x1928:  jmp    08081916 <+0x193c>
08081904 +0x192a:  mov    0xc(%ebp),%eax
08081907 +0x192d:  mov    %eax,0x4(%esp)
0808190b +0x1931:  mov    %ebx,(%esp)
0808190e +0x1934:  call   0808192a <+0x1950>
08081913 +0x1939:  sub    $0x4,%esp
08081916 +0x193c:  mov    %ebx,%eax
08081918 +0x193e:  mov    -0x4(%ebp),%ebx
0808191b +0x1941:  leave
0808191c +0x1942:  ret    $0x4
0808191f +0x1945:  nop
08081920 +0x1946:  push   %ebp
08081921 +0x1947:  mov    %esp,%ebp
08081923 +0x1949:  mov    0x8(%ebp),%eax
08081926 +0x194c:  mov    (%eax),%eax
08081928 +0x194e:  pop    %ebp
08081929 +0x194f:  ret
0808192a +0x1950:  push   %ebp
0808192b +0x1951:  mov    %esp,%ebp
0808192d +0x1953:  push   %ebx
0808192e +0x1954:  sub    $0x14,%esp
08081931 +0x1957:  mov    0x8(%ebp),%ebx
08081934 +0x195a:  mov    0xc(%ebp),%eax
08081937 +0x195d:  mov    0x8(%eax),%edx
0808193a +0x1960:  mov    0xc(%ebp),%eax
0808193d +0x1963:  mov    0xc(%eax),%eax
08081940 +0x1966:  shl    $0x2,%eax
08081943 +0x1969:  lea    (%edx,%eax,1),%eax
08081946 +0x196c:  mov    %eax,0x4(%esp)
0808194a +0x1970:  mov    %ebx,(%esp)
0808194d +0x1973:  call   080826b2 <+0x26d8>
08081952 +0x1978:  mov    %ebx,%eax
08081954 +0x197a:  add    $0x14,%esp
08081957 +0x197d:  pop    %ebx
08081958 +0x197e:  pop    %ebp
08081959 +0x197f:  ret    $0x4
0808195c +0x1982:  push   %ebp
0808195d +0x1983:  mov    %esp,%ebp
0808195f +0x1985:  push   %ebx
08081960 +0x1986:  sub    $0x24,%esp
08081963 +0x1989:  mov    0x8(%ebp),%ebx
08081966 +0x198c:  mov    0xc(%ebp),%eax
08081969 +0x198f:  mov    0x10(%ebp),%edx
0808196c +0x1992:  mov    %edx,0x4(%esp)
08081970 +0x1996:  mov    %eax,(%esp)
08081973 +0x1999:  call   08082214 <+0x223a>
08081978 +0x199e:  mov    %eax,-0x14(%ebp)
0808197b +0x19a1:  mov    0xc(%ebp),%eax
0808197e +0x19a4:  mov    0xc(%eax),%edx
08081981 +0x19a7:  mov    0xc(%ebp),%eax
08081984 +0x19aa:  mov    %edx,0xc(%esp)
08081988 +0x19ae:  mov    -0x14(%ebp),%edx
0808198b +0x19b1:  mov    %edx,0x8(%esp)
0808198f +0x19b5:  mov    0x10(%ebp),%edx
08081992 +0x19b8:  mov    %edx,0x4(%esp)
08081996 +0x19bc:  mov    %eax,(%esp)
08081999 +0x19bf:  call   08082234 <+0x225a>
0808199e +0x19c4:  mov    %eax,-0x10(%ebp)
080819a1 +0x19c7:  mov    0xc(%ebp),%eax
080819a4 +0x19ca:  mov    0x8(%eax),%eax
080819a7 +0x19cd:  mov    -0x10(%ebp),%edx
080819aa +0x19d0:  shl    $0x2,%edx
080819ad +0x19d3:  add    %edx,%eax
080819af +0x19d5:  mov    (%eax),%eax
080819b1 +0x19d7:  mov    -0x14(%ebp),%edx
080819b4 +0x19da:  mov    %edx,0xc(%esp)
080819b8 +0x19de:  mov    0x10(%ebp),%edx
080819bb +0x19e1:  mov    %edx,0x8(%esp)
080819bf +0x19e5:  mov    %eax,0x4(%esp)
080819c3 +0x19e9:  mov    0xc(%ebp),%eax
080819c6 +0x19ec:  mov    %eax,(%esp)
080819c9 +0x19ef:  call   08082258 <+0x227e>
080819ce +0x19f4:  mov    %eax,-0xc(%ebp)
080819d1 +0x19f7:  cmpl   $0x0,-0xc(%ebp)
080819d5 +0x19fb:  je     080819fa <+0x1a20>
080819d7 +0x19fd:  mov    0xc(%ebp),%eax
080819da +0x1a00:  mov    0x8(%eax),%eax
080819dd +0x1a03:  mov    -0x10(%ebp),%edx
080819e0 +0x1a06:  shl    $0x2,%edx
080819e3 +0x1a09:  add    %edx,%eax
080819e5 +0x1a0b:  mov    %eax,0x8(%esp)
080819e9 +0x1a0f:  mov    -0xc(%ebp),%eax
080819ec +0x1a12:  mov    %eax,0x4(%esp)
080819f0 +0x1a16:  mov    %ebx,(%esp)
080819f3 +0x1a19:  call   080826d6 <+0x26fc>
080819f8 +0x1a1e:  jmp    08081a0c <+0x1a32>
080819fa +0x1a20:  mov    0xc(%ebp),%eax
080819fd +0x1a23:  mov    %eax,0x4(%esp)
08081a01 +0x1a27:  mov    %ebx,(%esp)
08081a04 +0x1a2a:  call   08081a20 <+0x1a46>
08081a09 +0x1a2f:  sub    $0x4,%esp
08081a0c +0x1a32:  mov    %ebx,%eax
08081a0e +0x1a34:  mov    -0x4(%ebp),%ebx
08081a11 +0x1a37:  leave
08081a12 +0x1a38:  ret    $0x4
08081a15 +0x1a3b:  nop
08081a16 +0x1a3c:  push   %ebp
08081a17 +0x1a3d:  mov    %esp,%ebp
08081a19 +0x1a3f:  mov    0x8(%ebp),%eax
08081a1c +0x1a42:  mov    (%eax),%eax
08081a1e +0x1a44:  pop    %ebp
08081a1f +0x1a45:  ret
08081a20 +0x1a46:  push   %ebp
08081a21 +0x1a47:  mov    %esp,%ebp
08081a23 +0x1a49:  push   %ebx
08081a24 +0x1a4a:  sub    $0x14,%esp
08081a27 +0x1a4d:  mov    0x8(%ebp),%ebx
08081a2a +0x1a50:  mov    0xc(%ebp),%eax
08081a2d +0x1a53:  mov    0x8(%eax),%edx
08081a30 +0x1a56:  mov    0xc(%ebp),%eax
08081a33 +0x1a59:  mov    0xc(%eax),%eax
08081a36 +0x1a5c:  shl    $0x2,%eax
08081a39 +0x1a5f:  lea    (%edx,%eax,1),%eax
08081a3c +0x1a62:  mov    %eax,0x4(%esp)
08081a40 +0x1a66:  mov    %ebx,(%esp)
08081a43 +0x1a69:  call   080826f8 <+0x271e>
08081a48 +0x1a6e:  mov    %ebx,%eax
08081a4a +0x1a70:  add    $0x14,%esp
08081a4d +0x1a73:  pop    %ebx
08081a4e +0x1a74:  pop    %ebp
08081a4f +0x1a75:  ret    $0x4
08081a52 +0x1a78:  push   %ebp
08081a53 +0x1a79:  mov    %esp,%ebp
08081a55 +0x1a7b:  push   %ebx
08081a56 +0x1a7c:  sub    $0x24,%esp
08081a59 +0x1a7f:  mov    0x8(%ebp),%ebx
08081a5c +0x1a82:  mov    0xc(%ebp),%eax
08081a5f +0x1a85:  mov    0x10(%ebp),%edx
08081a62 +0x1a88:  mov    %edx,0x4(%esp)
08081a66 +0x1a8c:  mov    %eax,(%esp)
08081a69 +0x1a8f:  call   08082452 <+0x2478>
08081a6e +0x1a94:  mov    %eax,-0x14(%ebp)
08081a71 +0x1a97:  mov    0xc(%ebp),%eax
08081a74 +0x1a9a:  mov    0xc(%eax),%edx
08081a77 +0x1a9d:  mov    0xc(%ebp),%eax
08081a7a +0x1aa0:  mov    %edx,0xc(%esp)
08081a7e +0x1aa4:  mov    -0x14(%ebp),%edx
08081a81 +0x1aa7:  mov    %edx,0x8(%esp)
08081a85 +0x1aab:  mov    0x10(%ebp),%edx
08081a88 +0x1aae:  mov    %edx,0x4(%esp)
08081a8c +0x1ab2:  mov    %eax,(%esp)
08081a8f +0x1ab5:  call   08082472 <+0x2498>
08081a94 +0x1aba:  mov    %eax,-0x10(%ebp)
08081a97 +0x1abd:  mov    0xc(%ebp),%eax
08081a9a +0x1ac0:  mov    0x8(%eax),%eax
08081a9d +0x1ac3:  mov    -0x10(%ebp),%edx
08081aa0 +0x1ac6:  shl    $0x2,%edx
08081aa3 +0x1ac9:  add    %edx,%eax
08081aa5 +0x1acb:  mov    (%eax),%eax
08081aa7 +0x1acd:  mov    -0x14(%ebp),%edx
08081aaa +0x1ad0:  mov    %edx,0xc(%esp)
08081aae +0x1ad4:  mov    0x10(%ebp),%edx
08081ab1 +0x1ad7:  mov    %edx,0x8(%esp)
08081ab5 +0x1adb:  mov    %eax,0x4(%esp)
08081ab9 +0x1adf:  mov    0xc(%ebp),%eax
08081abc +0x1ae2:  mov    %eax,(%esp)
08081abf +0x1ae5:  call   08082496 <+0x24bc>
08081ac4 +0x1aea:  mov    %eax,-0xc(%ebp)
08081ac7 +0x1aed:  cmpl   $0x0,-0xc(%ebp)
08081acb +0x1af1:  je     08081af0 <+0x1b16>
08081acd +0x1af3:  mov    0xc(%ebp),%eax
08081ad0 +0x1af6:  mov    0x8(%eax),%eax
08081ad3 +0x1af9:  mov    -0x10(%ebp),%edx
08081ad6 +0x1afc:  shl    $0x2,%edx
08081ad9 +0x1aff:  add    %edx,%eax
08081adb +0x1b01:  mov    %eax,0x8(%esp)
08081adf +0x1b05:  mov    -0xc(%ebp),%eax
08081ae2 +0x1b08:  mov    %eax,0x4(%esp)
08081ae6 +0x1b0c:  mov    %ebx,(%esp)
08081ae9 +0x1b0f:  call   0808271c <+0x2742>
08081aee +0x1b14:  jmp    08081b02 <+0x1b28>
08081af0 +0x1b16:  mov    0xc(%ebp),%eax
08081af3 +0x1b19:  mov    %eax,0x4(%esp)
08081af7 +0x1b1d:  mov    %ebx,(%esp)
08081afa +0x1b20:  call   08081b16 <+0x1b3c>
08081aff +0x1b25:  sub    $0x4,%esp
08081b02 +0x1b28:  mov    %ebx,%eax
08081b04 +0x1b2a:  mov    -0x4(%ebp),%ebx
08081b07 +0x1b2d:  leave
08081b08 +0x1b2e:  ret    $0x4
08081b0b +0x1b31:  nop
08081b0c +0x1b32:  push   %ebp
08081b0d +0x1b33:  mov    %esp,%ebp
08081b0f +0x1b35:  mov    0x8(%ebp),%eax
08081b12 +0x1b38:  mov    (%eax),%eax
08081b14 +0x1b3a:  pop    %ebp
08081b15 +0x1b3b:  ret
08081b16 +0x1b3c:  push   %ebp
08081b17 +0x1b3d:  mov    %esp,%ebp
08081b19 +0x1b3f:  push   %ebx
08081b1a +0x1b40:  sub    $0x14,%esp
08081b1d +0x1b43:  mov    0x8(%ebp),%ebx
08081b20 +0x1b46:  mov    0xc(%ebp),%eax
08081b23 +0x1b49:  mov    0x8(%eax),%edx
08081b26 +0x1b4c:  mov    0xc(%ebp),%eax
08081b29 +0x1b4f:  mov    0xc(%eax),%eax
08081b2c +0x1b52:  shl    $0x2,%eax
08081b2f +0x1b55:  lea    (%edx,%eax,1),%eax
08081b32 +0x1b58:  mov    %eax,0x4(%esp)
08081b36 +0x1b5c:  mov    %ebx,(%esp)
08081b39 +0x1b5f:  call   0808273e <+0x2764>
08081b3e +0x1b64:  mov    %ebx,%eax
08081b40 +0x1b66:  add    $0x14,%esp
08081b43 +0x1b69:  pop    %ebx
08081b44 +0x1b6a:  pop    %ebp
08081b45 +0x1b6b:  ret    $0x4
08081b48 +0x1b6e:  push   %ebp
08081b49 +0x1b6f:  mov    %esp,%ebp
08081b4b +0x1b71:  push   %esi
08081b4c +0x1b72:  push   %ebx
08081b4d +0x1b73:  sub    $0x20,%esp
08081b50 +0x1b76:  mov    0x8(%ebp),%eax
08081b53 +0x1b79:  mov    0x18(%ebp),%edx
08081b56 +0x1b7c:  mov    %edx,0x14(%esp)
08081b5a +0x1b80:  mov    0x14(%ebp),%edx
08081b5d +0x1b83:  mov    %edx,0x10(%esp)
08081b61 +0x1b87:  mov    0x10(%ebp),%edx
08081b64 +0x1b8a:  mov    %edx,0xc(%esp)
08081b68 +0x1b8e:  mov    0x1c(%ebp),%edx
08081b6b +0x1b91:  mov    %edx,0x8(%esp)
08081b6f +0x1b95:  mov    0x20(%ebp),%edx
08081b72 +0x1b98:  mov    %edx,0x4(%esp)
08081b76 +0x1b9c:  mov    %eax,(%esp)
08081b79 +0x1b9f:  call   08082762 <+0x2788>
08081b7e +0x1ba4:  mov    0x8(%ebp),%eax
08081b81 +0x1ba7:  lea    0x4(%eax),%edx
08081b84 +0x1baa:  mov    0x24(%ebp),%eax
08081b87 +0x1bad:  mov    %eax,0x4(%esp)
08081b8b +0x1bb1:  mov    %edx,(%esp)
08081b8e +0x1bb4:  call   08082768 <+0x278e>
08081b93 +0x1bb9:  mov    0x8(%ebp),%eax
08081b96 +0x1bbc:  movl   $0x0,0xc(%eax)
08081b9d +0x1bc3:  mov    0x8(%ebp),%eax
08081ba0 +0x1bc6:  movl   $0x0,0x10(%eax)
08081ba7 +0x1bcd:  mov    0x8(%ebp),%eax
08081baa +0x1bd0:  lea    0x14(%eax),%edx
08081bad +0x1bd3:  mov    $0x3f800000,%eax
08081bb2 +0x1bd8:  mov    %eax,0x4(%esp)
08081bb6 +0x1bdc:  mov    %edx,(%esp)
08081bb9 +0x1bdf:  call   08080018 <+0x3e>
08081bbe +0x1be4:  mov    0x8(%ebp),%eax
08081bc1 +0x1be7:  lea    0x14(%eax),%edx
08081bc4 +0x1bea:  mov    0xc(%ebp),%eax
08081bc7 +0x1bed:  mov    %eax,0x4(%esp)
08081bcb +0x1bf1:  mov    %edx,(%esp)
08081bce +0x1bf4:  call   0808003a <+0x60>
08081bd3 +0x1bf9:  mov    0x8(%ebp),%edx
08081bd6 +0x1bfc:  mov    %eax,0xc(%edx)
08081bd9 +0x1bff:  mov    0x8(%ebp),%eax
08081bdc +0x1c02:  mov    0xc(%eax),%eax
08081bdf +0x1c05:  mov    %eax,0x4(%esp)
08081be3 +0x1c09:  mov    0x8(%ebp),%eax
08081be6 +0x1c0c:  mov    %eax,(%esp)
08081be9 +0x1c0f:  call   0808277c <+0x27a2>
08081bee +0x1c14:  mov    0x8(%ebp),%edx
08081bf1 +0x1c17:  mov    %eax,0x8(%edx)
08081bf4 +0x1c1a:  add    $0x20,%esp
08081bf7 +0x1c1d:  pop    %ebx
08081bf8 +0x1c1e:  pop    %esi
08081bf9 +0x1c1f:  pop    %ebp
08081bfa +0x1c20:  ret
08081bfb +0x1c21:  mov    %edx,%ebx
08081bfd +0x1c23:  mov    %eax,%esi
08081bff +0x1c25:  mov    0x8(%ebp),%eax
08081c02 +0x1c28:  add    $0x4,%eax
08081c05 +0x1c2b:  mov    %eax,(%esp)
08081c08 +0x1c2e:  call   08081082 <+0x10a8>
08081c0d +0x1c33:  mov    %esi,%eax
08081c0f +0x1c35:  mov    %ebx,%edx
08081c11 +0x1c37:  mov    %eax,(%esp)
08081c14 +0x1c3a:  call   08ae3750 <_Unwind_Resume>
08081c19 +0x1c3f:  nop
08081c1a +0x1c40:  push   %ebp
08081c1b +0x1c41:  mov    %esp,%ebp
08081c1d +0x1c43:  pop    %ebp
08081c1e +0x1c44:  ret
08081c1f +0x1c45:  nop
08081c20 +0x1c46:  push   %ebp
08081c21 +0x1c47:  mov    %esp,%ebp
08081c23 +0x1c49:  sub    $0x28,%esp
08081c26 +0x1c4c:  movl   $0x0,-0x14(%ebp)
08081c2d +0x1c53:  jmp    08081c7e <+0x1ca4>
08081c2f +0x1c55:  mov    -0x14(%ebp),%eax
08081c32 +0x1c58:  shl    $0x2,%eax
08081c35 +0x1c5b:  add    0xc(%ebp),%eax
08081c38 +0x1c5e:  mov    (%eax),%eax
08081c3a +0x1c60:  mov    %eax,-0x10(%ebp)
08081c3d +0x1c63:  jmp    08081c60 <+0x1c86>
08081c3f +0x1c65:  mov    -0x10(%ebp),%eax
08081c42 +0x1c68:  mov    %eax,-0xc(%ebp)
08081c45 +0x1c6b:  mov    -0x10(%ebp),%eax
08081c48 +0x1c6e:  mov    0xc(%eax),%eax
08081c4b +0x1c71:  mov    %eax,-0x10(%ebp)
08081c4e +0x1c74:  mov    -0xc(%ebp),%eax
08081c51 +0x1c77:  mov    %eax,0x4(%esp)
08081c55 +0x1c7b:  mov    0x8(%ebp),%eax
08081c58 +0x1c7e:  mov    %eax,(%esp)
08081c5b +0x1c81:  call   08082820 <+0x2846>
08081c60 +0x1c86:  cmpl   $0x0,-0x10(%ebp)
08081c64 +0x1c8a:  setne  %al
08081c67 +0x1c8d:  test   %al,%al
08081c69 +0x1c8f:  jne    08081c3f <+0x1c65>
08081c6b +0x1c91:  mov    -0x14(%ebp),%eax
08081c6e +0x1c94:  shl    $0x2,%eax
08081c71 +0x1c97:  add    0xc(%ebp),%eax
08081c74 +0x1c9a:  movl   $0x0,(%eax)
08081c7a +0x1ca0:  addl   $0x1,-0x14(%ebp)
08081c7e +0x1ca4:  mov    -0x14(%ebp),%eax
08081c81 +0x1ca7:  cmp    0x10(%ebp),%eax
08081c84 +0x1caa:  setb   %al
08081c87 +0x1cad:  test   %al,%al
08081c89 +0x1caf:  jne    08081c2f <+0x1c55>
08081c8b +0x1cb1:  leave
08081c8c +0x1cb2:  ret
08081c8d +0x1cb3:  nop
08081c8e +0x1cb4:  push   %ebp
08081c8f +0x1cb5:  mov    %esp,%ebp
08081c91 +0x1cb7:  sub    $0x18,%esp
08081c94 +0x1cba:  mov    0x8(%ebp),%eax
08081c97 +0x1cbd:  mov    %eax,(%esp)
08081c9a +0x1cc0:  call   0808285a <+0x2880>
08081c9f +0x1cc5:  leave
08081ca0 +0x1cc6:  ret
08081ca1 +0x1cc7:  nop
08081ca2 +0x1cc8:  push   %ebp
08081ca3 +0x1cc9:  mov    %esp,%ebp
08081ca5 +0x1ccb:  sub    $0x18,%esp
08081ca8 +0x1cce:  mov    0x8(%ebp),%eax
08081cab +0x1cd1:  mov    %eax,(%esp)
08081cae +0x1cd4:  call   08082860 <+0x2886>
08081cb3 +0x1cd9:  leave
08081cb4 +0x1cda:  ret
08081cb5 +0x1cdb:  nop
08081cb6 +0x1cdc:  push   %ebp
08081cb7 +0x1cdd:  mov    %esp,%ebp
08081cb9 +0x1cdf:  sub    $0x18,%esp
08081cbc +0x1ce2:  mov    0xc(%ebp),%eax
08081cbf +0x1ce5:  mov    %eax,(%esp)
08081cc2 +0x1ce8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08081cc7 +0x1ced:  leave
08081cc8 +0x1cee:  ret
08081cc9 +0x1cef:  nop
08081cca +0x1cf0:  push   %ebp
08081ccb +0x1cf1:  mov    %esp,%ebp
08081ccd +0x1cf3:  push   %esi
08081cce +0x1cf4:  push   %ebx
08081ccf +0x1cf5:  sub    $0x20,%esp
08081cd2 +0x1cf8:  mov    0x8(%ebp),%eax
08081cd5 +0x1cfb:  mov    0x18(%ebp),%edx
08081cd8 +0x1cfe:  mov    %edx,0x14(%esp)
08081cdc +0x1d02:  mov    0x14(%ebp),%edx
08081cdf +0x1d05:  mov    %edx,0x10(%esp)
08081ce3 +0x1d09:  mov    0x10(%ebp),%edx
08081ce6 +0x1d0c:  mov    %edx,0xc(%esp)
08081cea +0x1d10:  mov    0x1c(%ebp),%edx
08081ced +0x1d13:  mov    %edx,0x8(%esp)
08081cf1 +0x1d17:  mov    0x20(%ebp),%edx
08081cf4 +0x1d1a:  mov    %edx,0x4(%esp)
08081cf8 +0x1d1e:  mov    %eax,(%esp)
08081cfb +0x1d21:  call   08082866 <+0x288c>
08081d00 +0x1d26:  mov    0x8(%ebp),%eax
08081d03 +0x1d29:  lea    0x4(%eax),%edx
08081d06 +0x1d2c:  mov    0x24(%ebp),%eax
08081d09 +0x1d2f:  mov    %eax,0x4(%esp)
08081d0d +0x1d33:  mov    %edx,(%esp)
08081d10 +0x1d36:  call   0808286c <+0x2892>
08081d15 +0x1d3b:  mov    0x8(%ebp),%eax
08081d18 +0x1d3e:  movl   $0x0,0xc(%eax)
08081d1f +0x1d45:  mov    0x8(%ebp),%eax
08081d22 +0x1d48:  movl   $0x0,0x10(%eax)
08081d29 +0x1d4f:  mov    0x8(%ebp),%eax
08081d2c +0x1d52:  lea    0x14(%eax),%edx
08081d2f +0x1d55:  mov    $0x3f800000,%eax
08081d34 +0x1d5a:  mov    %eax,0x4(%esp)
08081d38 +0x1d5e:  mov    %edx,(%esp)
08081d3b +0x1d61:  call   08080018 <+0x3e>
08081d40 +0x1d66:  mov    0x8(%ebp),%eax
08081d43 +0x1d69:  lea    0x14(%eax),%edx
08081d46 +0x1d6c:  mov    0xc(%ebp),%eax
08081d49 +0x1d6f:  mov    %eax,0x4(%esp)
08081d4d +0x1d73:  mov    %edx,(%esp)
08081d50 +0x1d76:  call   0808003a <+0x60>
08081d55 +0x1d7b:  mov    0x8(%ebp),%edx
08081d58 +0x1d7e:  mov    %eax,0xc(%edx)
08081d5b +0x1d81:  mov    0x8(%ebp),%eax
08081d5e +0x1d84:  mov    0xc(%eax),%eax
08081d61 +0x1d87:  mov    %eax,0x4(%esp)
08081d65 +0x1d8b:  mov    0x8(%ebp),%eax
08081d68 +0x1d8e:  mov    %eax,(%esp)
08081d6b +0x1d91:  call   08082880 <+0x28a6>
08081d70 +0x1d96:  mov    0x8(%ebp),%edx
08081d73 +0x1d99:  mov    %eax,0x8(%edx)
08081d76 +0x1d9c:  add    $0x20,%esp
08081d79 +0x1d9f:  pop    %ebx
08081d7a +0x1da0:  pop    %esi
08081d7b +0x1da1:  pop    %ebp
08081d7c +0x1da2:  ret
08081d7d +0x1da3:  mov    %edx,%ebx
08081d7f +0x1da5:  mov    %eax,%esi
08081d81 +0x1da7:  mov    0x8(%ebp),%eax
08081d84 +0x1daa:  add    $0x4,%eax
08081d87 +0x1dad:  mov    %eax,(%esp)
08081d8a +0x1db0:  call   0808115c <+0x1182>
08081d8f +0x1db5:  mov    %esi,%eax
08081d91 +0x1db7:  mov    %ebx,%edx
08081d93 +0x1db9:  mov    %eax,(%esp)
08081d96 +0x1dbc:  call   08ae3750 <_Unwind_Resume>
08081d9b +0x1dc1:  nop
08081d9c +0x1dc2:  push   %ebp
08081d9d +0x1dc3:  mov    %esp,%ebp
08081d9f +0x1dc5:  pop    %ebp
08081da0 +0x1dc6:  ret
08081da1 +0x1dc7:  nop
08081da2 +0x1dc8:  push   %ebp
08081da3 +0x1dc9:  mov    %esp,%ebp
08081da5 +0x1dcb:  sub    $0x28,%esp
08081da8 +0x1dce:  movl   $0x0,-0x14(%ebp)
08081daf +0x1dd5:  jmp    08081e00 <+0x1e26>
08081db1 +0x1dd7:  mov    -0x14(%ebp),%eax
08081db4 +0x1dda:  shl    $0x2,%eax
08081db7 +0x1ddd:  add    0xc(%ebp),%eax
08081dba +0x1de0:  mov    (%eax),%eax
08081dbc +0x1de2:  mov    %eax,-0x10(%ebp)
08081dbf +0x1de5:  jmp    08081de2 <+0x1e08>
08081dc1 +0x1de7:  mov    -0x10(%ebp),%eax
08081dc4 +0x1dea:  mov    %eax,-0xc(%ebp)
08081dc7 +0x1ded:  mov    -0x10(%ebp),%eax
08081dca +0x1df0:  mov    0xc(%eax),%eax
08081dcd +0x1df3:  mov    %eax,-0x10(%ebp)
08081dd0 +0x1df6:  mov    -0xc(%ebp),%eax
08081dd3 +0x1df9:  mov    %eax,0x4(%esp)
08081dd7 +0x1dfd:  mov    0x8(%ebp),%eax
08081dda +0x1e00:  mov    %eax,(%esp)
08081ddd +0x1e03:  call   08082924 <+0x294a>
08081de2 +0x1e08:  cmpl   $0x0,-0x10(%ebp)
08081de6 +0x1e0c:  setne  %al
08081de9 +0x1e0f:  test   %al,%al
08081deb +0x1e11:  jne    08081dc1 <+0x1de7>
08081ded +0x1e13:  mov    -0x14(%ebp),%eax
08081df0 +0x1e16:  shl    $0x2,%eax
08081df3 +0x1e19:  add    0xc(%ebp),%eax
08081df6 +0x1e1c:  movl   $0x0,(%eax)
08081dfc +0x1e22:  addl   $0x1,-0x14(%ebp)
08081e00 +0x1e26:  mov    -0x14(%ebp),%eax
08081e03 +0x1e29:  cmp    0x10(%ebp),%eax
08081e06 +0x1e2c:  setb   %al
08081e09 +0x1e2f:  test   %al,%al
08081e0b +0x1e31:  jne    08081db1 <+0x1dd7>
08081e0d +0x1e33:  leave
08081e0e +0x1e34:  ret
08081e0f +0x1e35:  nop
08081e10 +0x1e36:  push   %ebp
08081e11 +0x1e37:  mov    %esp,%ebp
08081e13 +0x1e39:  sub    $0x18,%esp
08081e16 +0x1e3c:  mov    0x8(%ebp),%eax
08081e19 +0x1e3f:  mov    %eax,(%esp)
08081e1c +0x1e42:  call   0808295e <+0x2984>
08081e21 +0x1e47:  leave
08081e22 +0x1e48:  ret
08081e23 +0x1e49:  nop
08081e24 +0x1e4a:  push   %ebp
08081e25 +0x1e4b:  mov    %esp,%ebp
08081e27 +0x1e4d:  sub    $0x18,%esp
08081e2a +0x1e50:  mov    0x8(%ebp),%eax
08081e2d +0x1e53:  mov    %eax,(%esp)
08081e30 +0x1e56:  call   08082964 <+0x298a>
08081e35 +0x1e5b:  leave
08081e36 +0x1e5c:  ret
08081e37 +0x1e5d:  nop
08081e38 +0x1e5e:  push   %ebp
08081e39 +0x1e5f:  mov    %esp,%ebp
08081e3b +0x1e61:  sub    $0x18,%esp
08081e3e +0x1e64:  mov    0xc(%ebp),%eax
08081e41 +0x1e67:  mov    %eax,(%esp)
08081e44 +0x1e6a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08081e49 +0x1e6f:  leave
08081e4a +0x1e70:  ret
08081e4b +0x1e71:  nop
08081e4c +0x1e72:  push   %ebp
08081e4d +0x1e73:  mov    %esp,%ebp
08081e4f +0x1e75:  push   %esi
08081e50 +0x1e76:  push   %ebx
08081e51 +0x1e77:  sub    $0x20,%esp
08081e54 +0x1e7a:  mov    0x8(%ebp),%eax
08081e57 +0x1e7d:  mov    0x18(%ebp),%edx
08081e5a +0x1e80:  mov    %edx,0x14(%esp)
08081e5e +0x1e84:  mov    0x14(%ebp),%edx
08081e61 +0x1e87:  mov    %edx,0x10(%esp)
08081e65 +0x1e8b:  mov    0x10(%ebp),%edx
08081e68 +0x1e8e:  mov    %edx,0xc(%esp)
08081e6c +0x1e92:  mov    0x1c(%ebp),%edx
08081e6f +0x1e95:  mov    %edx,0x8(%esp)
08081e73 +0x1e99:  mov    0x20(%ebp),%edx
08081e76 +0x1e9c:  mov    %edx,0x4(%esp)
08081e7a +0x1ea0:  mov    %eax,(%esp)
08081e7d +0x1ea3:  call   0808296a <+0x2990>
08081e82 +0x1ea8:  mov    0x8(%ebp),%eax
08081e85 +0x1eab:  lea    0x4(%eax),%edx
08081e88 +0x1eae:  mov    0x24(%ebp),%eax
08081e8b +0x1eb1:  mov    %eax,0x4(%esp)
08081e8f +0x1eb5:  mov    %edx,(%esp)
08081e92 +0x1eb8:  call   08082970 <+0x2996>
08081e97 +0x1ebd:  mov    0x8(%ebp),%eax
08081e9a +0x1ec0:  movl   $0x0,0xc(%eax)
08081ea1 +0x1ec7:  mov    0x8(%ebp),%eax
08081ea4 +0x1eca:  movl   $0x0,0x10(%eax)
08081eab +0x1ed1:  mov    0x8(%ebp),%eax
08081eae +0x1ed4:  lea    0x14(%eax),%edx
08081eb1 +0x1ed7:  mov    $0x3f800000,%eax
08081eb6 +0x1edc:  mov    %eax,0x4(%esp)
08081eba +0x1ee0:  mov    %edx,(%esp)
08081ebd +0x1ee3:  call   08080018 <+0x3e>
08081ec2 +0x1ee8:  mov    0x8(%ebp),%eax
08081ec5 +0x1eeb:  lea    0x14(%eax),%edx
08081ec8 +0x1eee:  mov    0xc(%ebp),%eax
08081ecb +0x1ef1:  mov    %eax,0x4(%esp)
08081ecf +0x1ef5:  mov    %edx,(%esp)
08081ed2 +0x1ef8:  call   0808003a <+0x60>
08081ed7 +0x1efd:  mov    0x8(%ebp),%edx
08081eda +0x1f00:  mov    %eax,0xc(%edx)
08081edd +0x1f03:  mov    0x8(%ebp),%eax
08081ee0 +0x1f06:  mov    0xc(%eax),%eax
08081ee3 +0x1f09:  mov    %eax,0x4(%esp)
08081ee7 +0x1f0d:  mov    0x8(%ebp),%eax
08081eea +0x1f10:  mov    %eax,(%esp)
08081eed +0x1f13:  call   08082984 <+0x29aa>
08081ef2 +0x1f18:  mov    0x8(%ebp),%edx
08081ef5 +0x1f1b:  mov    %eax,0x8(%edx)
08081ef8 +0x1f1e:  add    $0x20,%esp
08081efb +0x1f21:  pop    %ebx
08081efc +0x1f22:  pop    %esi
08081efd +0x1f23:  pop    %ebp
08081efe +0x1f24:  ret
08081eff +0x1f25:  mov    %edx,%ebx
08081f01 +0x1f27:  mov    %eax,%esi
08081f03 +0x1f29:  mov    0x8(%ebp),%eax
08081f06 +0x1f2c:  add    $0x4,%eax
08081f09 +0x1f2f:  mov    %eax,(%esp)
08081f0c +0x1f32:  call   08081236 <+0x125c>
08081f11 +0x1f37:  mov    %esi,%eax
08081f13 +0x1f39:  mov    %ebx,%edx
08081f15 +0x1f3b:  mov    %eax,(%esp)
08081f18 +0x1f3e:  call   08ae3750 <_Unwind_Resume>
08081f1d +0x1f43:  nop
08081f1e +0x1f44:  push   %ebp
08081f1f +0x1f45:  mov    %esp,%ebp
08081f21 +0x1f47:  pop    %ebp
08081f22 +0x1f48:  ret
08081f23 +0x1f49:  nop
08081f24 +0x1f4a:  push   %ebp
08081f25 +0x1f4b:  mov    %esp,%ebp
08081f27 +0x1f4d:  sub    $0x28,%esp
08081f2a +0x1f50:  movl   $0x0,-0x14(%ebp)
08081f31 +0x1f57:  jmp    08081f82 <+0x1fa8>
08081f33 +0x1f59:  mov    -0x14(%ebp),%eax
08081f36 +0x1f5c:  shl    $0x2,%eax
08081f39 +0x1f5f:  add    0xc(%ebp),%eax
08081f3c +0x1f62:  mov    (%eax),%eax
08081f3e +0x1f64:  mov    %eax,-0x10(%ebp)
08081f41 +0x1f67:  jmp    08081f64 <+0x1f8a>
08081f43 +0x1f69:  mov    -0x10(%ebp),%eax
08081f46 +0x1f6c:  mov    %eax,-0xc(%ebp)
08081f49 +0x1f6f:  mov    -0x10(%ebp),%eax
08081f4c +0x1f72:  mov    0xc(%eax),%eax
08081f4f +0x1f75:  mov    %eax,-0x10(%ebp)
08081f52 +0x1f78:  mov    -0xc(%ebp),%eax
08081f55 +0x1f7b:  mov    %eax,0x4(%esp)
08081f59 +0x1f7f:  mov    0x8(%ebp),%eax
08081f5c +0x1f82:  mov    %eax,(%esp)
08081f5f +0x1f85:  call   08082a28 <+0x2a4e>
08081f64 +0x1f8a:  cmpl   $0x0,-0x10(%ebp)
08081f68 +0x1f8e:  setne  %al
08081f6b +0x1f91:  test   %al,%al
08081f6d +0x1f93:  jne    08081f43 <+0x1f69>
08081f6f +0x1f95:  mov    -0x14(%ebp),%eax
08081f72 +0x1f98:  shl    $0x2,%eax
08081f75 +0x1f9b:  add    0xc(%ebp),%eax
08081f78 +0x1f9e:  movl   $0x0,(%eax)
08081f7e +0x1fa4:  addl   $0x1,-0x14(%ebp)
08081f82 +0x1fa8:  mov    -0x14(%ebp),%eax
08081f85 +0x1fab:  cmp    0x10(%ebp),%eax
08081f88 +0x1fae:  setb   %al
08081f8b +0x1fb1:  test   %al,%al
08081f8d +0x1fb3:  jne    08081f33 <+0x1f59>
08081f8f +0x1fb5:  leave
08081f90 +0x1fb6:  ret
08081f91 +0x1fb7:  nop
08081f92 +0x1fb8:  push   %ebp
08081f93 +0x1fb9:  mov    %esp,%ebp
08081f95 +0x1fbb:  sub    $0x18,%esp
08081f98 +0x1fbe:  mov    0x8(%ebp),%eax
08081f9b +0x1fc1:  mov    %eax,(%esp)
08081f9e +0x1fc4:  call   08082a62 <+0x2a88>
08081fa3 +0x1fc9:  leave
08081fa4 +0x1fca:  ret
08081fa5 +0x1fcb:  nop
08081fa6 +0x1fcc:  push   %ebp
08081fa7 +0x1fcd:  mov    %esp,%ebp
08081fa9 +0x1fcf:  sub    $0x18,%esp
08081fac +0x1fd2:  mov    0x8(%ebp),%eax
08081faf +0x1fd5:  mov    %eax,(%esp)
08081fb2 +0x1fd8:  call   08082a68 <+0x2a8e>
08081fb7 +0x1fdd:  leave
08081fb8 +0x1fde:  ret
08081fb9 +0x1fdf:  nop
08081fba +0x1fe0:  push   %ebp
08081fbb +0x1fe1:  mov    %esp,%ebp
08081fbd +0x1fe3:  sub    $0x18,%esp
08081fc0 +0x1fe6:  mov    0xc(%ebp),%eax
08081fc3 +0x1fe9:  mov    %eax,(%esp)
08081fc6 +0x1fec:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08081fcb +0x1ff1:  leave
08081fcc +0x1ff2:  ret
08081fcd +0x1ff3:  nop
08081fce +0x1ff4:  push   %ebp
08081fcf +0x1ff5:  mov    %esp,%ebp
08081fd1 +0x1ff7:  sub    $0x18,%esp
08081fd4 +0x1ffa:  mov    0xc(%ebp),%eax
08081fd7 +0x1ffd:  mov    (%eax),%eax
08081fd9 +0x1fff:  mov    0x8(%ebp),%edx
08081fdc +0x2002:  add    $0x2,%edx
08081fdf +0x2005:  mov    %eax,0x4(%esp)
08081fe3 +0x2009:  mov    %edx,(%esp)
08081fe6 +0x200c:  call   080802a6 <+0x2cc>
08081feb +0x2011:  leave
08081fec +0x2012:  ret
08081fed +0x2013:  nop
08081fee +0x2014:  push   %ebp
08081fef +0x2015:  mov    %esp,%ebp
08081ff1 +0x2017:  sub    $0x18,%esp
08081ff4 +0x201a:  mov    0x8(%ebp),%eax
08081ff7 +0x201d:  lea    0x3(%eax),%edx
08081ffa +0x2020:  mov    0x14(%ebp),%eax
08081ffd +0x2023:  mov    %eax,0x8(%esp)
08082001 +0x2027:  mov    0x10(%ebp),%eax
08082004 +0x202a:  mov    %eax,0x4(%esp)
08082008 +0x202e:  mov    %edx,(%esp)
0808200b +0x2031:  call   08080006 <+0x2c>
08082010 +0x2036:  leave
08082011 +0x2037:  ret
08082012 +0x2038:  push   %ebp
08082013 +0x2039:  mov    %esp,%ebp
08082015 +0x203b:  sub    $0x18,%esp
08082018 +0x203e:  jmp    0808204c <+0x2072>
0808201a +0x2040:  mov    0x8(%ebp),%eax
0808201d +0x2043:  mov    0xc(%ebp),%edx
08082020 +0x2046:  mov    %edx,0xc(%esp)
08082024 +0x204a:  mov    0x14(%ebp),%edx
08082027 +0x204d:  mov    %edx,0x8(%esp)
0808202b +0x2051:  mov    0x10(%ebp),%edx
0808202e +0x2054:  mov    %edx,0x4(%esp)
08082032 +0x2058:  mov    %eax,(%esp)
08082035 +0x205b:  call   08082a6e <+0x2a94>
0808203a +0x2060:  test   %al,%al
0808203c +0x2062:  je     08082043 <+0x2069>
0808203e +0x2064:  mov    0xc(%ebp),%eax
08082041 +0x2067:  jmp    0808205c <+0x2082>
08082043 +0x2069:  mov    0xc(%ebp),%eax
08082046 +0x206c:  mov    0xc(%eax),%eax
08082049 +0x206f:  mov    %eax,0xc(%ebp)
0808204c +0x2072:  cmpl   $0x0,0xc(%ebp)
08082050 +0x2076:  setne  %al
08082053 +0x2079:  test   %al,%al
08082055 +0x207b:  jne    0808201a <+0x2040>
08082057 +0x207d:  mov    $0x0,%eax
0808205c +0x2082:  leave
0808205d +0x2083:  ret
0808205e +0x2084:  push   %ebp
0808205f +0x2085:  mov    %esp,%ebp
08082061 +0x2087:  sub    $0x18,%esp
08082064 +0x208a:  mov    0x8(%ebp),%eax
08082067 +0x208d:  mov    0x10(%ebp),%edx
0808206a +0x2090:  mov    %edx,0x8(%esp)
0808206e +0x2094:  mov    0xc(%ebp),%edx
08082071 +0x2097:  mov    %edx,0x4(%esp)
08082075 +0x209b:  mov    %eax,(%esp)
08082078 +0x209e:  call   08082aa6 <+0x2acc>
0808207d +0x20a3:  leave
0808207e +0x20a4:  ret
0808207f +0x20a5:  nop
08082080 +0x20a6:  push   %ebp
08082081 +0x20a7:  mov    %esp,%ebp
08082083 +0x20a9:  sub    $0x18,%esp
08082086 +0x20ac:  mov    0xc(%ebp),%eax
08082089 +0x20af:  mov    (%eax),%edx
0808208b +0x20b1:  mov    0x8(%ebp),%eax
0808208e +0x20b4:  mov    0xc(%ebp),%ecx
08082091 +0x20b7:  mov    %ecx,0x8(%esp)
08082095 +0x20bb:  mov    %edx,0x4(%esp)
08082099 +0x20bf:  mov    %eax,(%esp)
0808209c +0x20c2:  call   08082aa6 <+0x2acc>
080820a1 +0x20c7:  leave
080820a2 +0x20c8:  ret
080820a3 +0x20c9:  push   %ebp
080820a4 +0x20ca:  mov    %esp,%ebp
080820a6 +0x20cc:  mov    0x8(%ebp),%eax
080820a9 +0x20cf:  pop    %ebp
080820aa +0x20d0:  ret
080820ab +0x20d1:  nop
080820ac +0x20d2:  push   %ebp
080820ad +0x20d3:  mov    %esp,%ebp
080820af +0x20d5:  sub    $0x18,%esp
080820b2 +0x20d8:  mov    0xc(%ebp),%eax
080820b5 +0x20db:  mov    %eax,(%esp)
080820b8 +0x20de:  call   080820a3 <+0x20c9>
080820bd +0x20e3:  mov    0x8(%ebp),%ecx
080820c0 +0x20e6:  mov    0x4(%eax),%edx
080820c3 +0x20e9:  mov    (%eax),%eax
080820c5 +0x20eb:  mov    %eax,(%ecx)
080820c7 +0x20ed:  mov    %edx,0x4(%ecx)
080820ca +0x20f0:  mov    0x10(%ebp),%eax
080820cd +0x20f3:  mov    %eax,(%esp)
080820d0 +0x20f6:  call   08080fa6 <+0xfcc>
080820d5 +0x20fb:  movzbl (%eax),%edx
080820d8 +0x20fe:  mov    0x8(%ebp),%eax
080820db +0x2101:  mov    %dl,0x8(%eax)
080820de +0x2104:  leave
080820df +0x2105:  ret
080820e0 +0x2106:  push   %ebp
080820e1 +0x2107:  mov    %esp,%ebp
080820e3 +0x2109:  mov    0x8(%ebp),%eax
080820e6 +0x210c:  pop    %ebp
080820e7 +0x210d:  ret
080820e8 +0x210e:  push   %ebp
080820e9 +0x210f:  mov    %esp,%ebp
080820eb +0x2111:  mov    0x8(%ebp),%eax
080820ee +0x2114:  pop    %ebp
080820ef +0x2115:  ret
080820f0 +0x2116:  push   %ebp
080820f1 +0x2117:  mov    %esp,%ebp
080820f3 +0x2119:  push   %ebx
080820f4 +0x211a:  sub    $0x54,%esp
080820f7 +0x211d:  mov    0x8(%ebp),%ebx
080820fa +0x2120:  mov    0xc(%ebp),%eax
080820fd +0x2123:  mov    0x10(%ebp),%edx
08082100 +0x2126:  mov    %edx,0x4(%esp)
08082104 +0x212a:  mov    %eax,(%esp)
08082107 +0x212d:  call   08082abc <+0x2ae2>
0808210c +0x2132:  mov    %eax,-0x18(%ebp)
0808210f +0x2135:  mov    0xc(%ebp),%eax
08082112 +0x2138:  mov    -0x18(%ebp),%edx
08082115 +0x213b:  mov    %edx,0x4(%esp)
08082119 +0x213f:  mov    %eax,(%esp)
0808211c +0x2142:  call   08081fce <+0x1ff4>
08082121 +0x2147:  mov    %eax,-0x14(%ebp)
08082124 +0x214a:  mov    0xc(%ebp),%eax
08082127 +0x214d:  mov    0xc(%eax),%edx
0808212a +0x2150:  mov    0xc(%ebp),%eax
0808212d +0x2153:  mov    %edx,0xc(%esp)
08082131 +0x2157:  mov    -0x14(%ebp),%edx
08082134 +0x215a:  mov    %edx,0x8(%esp)
08082138 +0x215e:  mov    -0x18(%ebp),%edx
0808213b +0x2161:  mov    %edx,0x4(%esp)
0808213f +0x2165:  mov    %eax,(%esp)
08082142 +0x2168:  call   08081fee <+0x2014>
08082147 +0x216d:  mov    %eax,-0x10(%ebp)
0808214a +0x2170:  mov    0xc(%ebp),%eax
0808214d +0x2173:  mov    0x8(%eax),%eax
08082150 +0x2176:  mov    -0x10(%ebp),%edx
08082153 +0x2179:  shl    $0x2,%edx
08082156 +0x217c:  add    %edx,%eax
08082158 +0x217e:  mov    (%eax),%eax
0808215a +0x2180:  mov    -0x14(%ebp),%edx
0808215d +0x2183:  mov    %edx,0xc(%esp)
08082161 +0x2187:  mov    -0x18(%ebp),%edx
08082164 +0x218a:  mov    %edx,0x8(%esp)
08082168 +0x218e:  mov    %eax,0x4(%esp)
0808216c +0x2192:  mov    0xc(%ebp),%eax
0808216f +0x2195:  mov    %eax,(%esp)
08082172 +0x2198:  call   08082012 <+0x2038>
08082177 +0x219d:  mov    %eax,-0xc(%ebp)
0808217a +0x21a0:  cmpl   $0x0,-0xc(%ebp)
0808217e +0x21a4:  je     080821c3 <+0x21e9>
08082180 +0x21a6:  movb   $0x0,-0x2d(%ebp)
08082184 +0x21aa:  mov    0xc(%ebp),%eax
08082187 +0x21ad:  mov    0x8(%eax),%eax
0808218a +0x21b0:  mov    -0x10(%ebp),%edx
0808218d +0x21b3:  shl    $0x2,%edx
08082190 +0x21b6:  add    %edx,%eax
08082192 +0x21b8:  mov    %eax,0x8(%esp)
08082196 +0x21bc:  mov    -0xc(%ebp),%eax
08082199 +0x21bf:  mov    %eax,0x4(%esp)
0808219d +0x21c3:  lea    -0x2c(%ebp),%eax
080821a0 +0x21c6:  mov    %eax,(%esp)
080821a3 +0x21c9:  call   0808205e <+0x2084>
080821a8 +0x21ce:  lea    -0x2d(%ebp),%eax
080821ab +0x21d1:  mov    %eax,0x8(%esp)
080821af +0x21d5:  lea    -0x2c(%ebp),%eax
080821b2 +0x21d8:  mov    %eax,0x4(%esp)
080821b6 +0x21dc:  mov    %ebx,(%esp)
080821b9 +0x21df:  call   08082ac4 <+0x2aea>
080821be +0x21e4:  sub    $0x4,%esp
080821c1 +0x21e7:  jmp    0808220a <+0x2230>
080821c3 +0x21e9:  movb   $0x1,-0x21(%ebp)
080821c7 +0x21ed:  lea    -0x20(%ebp),%eax
080821ca +0x21f0:  mov    -0x14(%ebp),%edx
080821cd +0x21f3:  mov    %edx,0x10(%esp)
080821d1 +0x21f7:  mov    -0x10(%ebp),%edx
080821d4 +0x21fa:  mov    %edx,0xc(%esp)
080821d8 +0x21fe:  mov    0x10(%ebp),%edx
080821db +0x2201:  mov    %edx,0x8(%esp)
080821df +0x2205:  mov    0xc(%ebp),%edx
080821e2 +0x2208:  mov    %edx,0x4(%esp)
080821e6 +0x220c:  mov    %eax,(%esp)
080821e9 +0x220f:  call   08082b08 <+0x2b2e>
080821ee +0x2214:  sub    $0x4,%esp
080821f1 +0x2217:  lea    -0x21(%ebp),%eax
080821f4 +0x221a:  mov    %eax,0x8(%esp)
080821f8 +0x221e:  lea    -0x20(%ebp),%eax
080821fb +0x2221:  mov    %eax,0x4(%esp)
080821ff +0x2225:  mov    %ebx,(%esp)
08082202 +0x2228:  call   08082ac4 <+0x2aea>
08082207 +0x222d:  sub    $0x4,%esp
0808220a +0x2230:  mov    %ebx,%eax
0808220c +0x2232:  mov    -0x4(%ebp),%ebx
0808220f +0x2235:  leave
08082210 +0x2236:  ret    $0x4
08082213 +0x2239:  nop
08082214 +0x223a:  push   %ebp
08082215 +0x223b:  mov    %esp,%ebp
08082217 +0x223d:  sub    $0x18,%esp
0808221a +0x2240:  mov    0xc(%ebp),%eax
0808221d +0x2243:  mov    (%eax),%eax
0808221f +0x2245:  mov    0x8(%ebp),%edx
08082222 +0x2248:  add    $0x2,%edx
08082225 +0x224b:  mov    %eax,0x4(%esp)
08082229 +0x224f:  mov    %edx,(%esp)
0808222c +0x2252:  call   080802a6 <+0x2cc>
08082231 +0x2257:  leave
08082232 +0x2258:  ret
08082233 +0x2259:  nop
08082234 +0x225a:  push   %ebp
08082235 +0x225b:  mov    %esp,%ebp
08082237 +0x225d:  sub    $0x18,%esp
0808223a +0x2260:  mov    0x8(%ebp),%eax
0808223d +0x2263:  lea    0x3(%eax),%edx
08082240 +0x2266:  mov    0x14(%ebp),%eax
08082243 +0x2269:  mov    %eax,0x8(%esp)
08082247 +0x226d:  mov    0x10(%ebp),%eax
0808224a +0x2270:  mov    %eax,0x4(%esp)
0808224e +0x2274:  mov    %edx,(%esp)
08082251 +0x2277:  call   08080006 <+0x2c>
08082256 +0x227c:  leave
08082257 +0x227d:  ret
08082258 +0x227e:  push   %ebp
08082259 +0x227f:  mov    %esp,%ebp
0808225b +0x2281:  sub    $0x18,%esp
0808225e +0x2284:  jmp    08082292 <+0x22b8>
08082260 +0x2286:  mov    0x8(%ebp),%eax
08082263 +0x2289:  mov    0xc(%ebp),%edx
08082266 +0x228c:  mov    %edx,0xc(%esp)
0808226a +0x2290:  mov    0x14(%ebp),%edx
0808226d +0x2293:  mov    %edx,0x8(%esp)
08082271 +0x2297:  mov    0x10(%ebp),%edx
08082274 +0x229a:  mov    %edx,0x4(%esp)
08082278 +0x229e:  mov    %eax,(%esp)
0808227b +0x22a1:  call   08082c64 <+0x2c8a>
08082280 +0x22a6:  test   %al,%al
08082282 +0x22a8:  je     08082289 <+0x22af>
08082284 +0x22aa:  mov    0xc(%ebp),%eax
08082287 +0x22ad:  jmp    080822a2 <+0x22c8>
08082289 +0x22af:  mov    0xc(%ebp),%eax
0808228c +0x22b2:  mov    0xc(%eax),%eax
0808228f +0x22b5:  mov    %eax,0xc(%ebp)
08082292 +0x22b8:  cmpl   $0x0,0xc(%ebp)
08082296 +0x22bc:  setne  %al
08082299 +0x22bf:  test   %al,%al
0808229b +0x22c1:  jne    08082260 <+0x2286>
0808229d +0x22c3:  mov    $0x0,%eax
080822a2 +0x22c8:  leave
080822a3 +0x22c9:  ret
080822a4 +0x22ca:  push   %ebp
080822a5 +0x22cb:  mov    %esp,%ebp
080822a7 +0x22cd:  sub    $0x18,%esp
080822aa +0x22d0:  mov    0x8(%ebp),%eax
080822ad +0x22d3:  mov    0x10(%ebp),%edx
080822b0 +0x22d6:  mov    %edx,0x8(%esp)
080822b4 +0x22da:  mov    0xc(%ebp),%edx
080822b7 +0x22dd:  mov    %edx,0x4(%esp)
080822bb +0x22e1:  mov    %eax,(%esp)
080822be +0x22e4:  call   08082c9c <+0x2cc2>
080822c3 +0x22e9:  leave
080822c4 +0x22ea:  ret
080822c5 +0x22eb:  nop
080822c6 +0x22ec:  push   %ebp
080822c7 +0x22ed:  mov    %esp,%ebp
080822c9 +0x22ef:  sub    $0x18,%esp
080822cc +0x22f2:  mov    0xc(%ebp),%eax
080822cf +0x22f5:  mov    (%eax),%edx
080822d1 +0x22f7:  mov    0x8(%ebp),%eax
080822d4 +0x22fa:  mov    0xc(%ebp),%ecx
080822d7 +0x22fd:  mov    %ecx,0x8(%esp)
080822db +0x2301:  mov    %edx,0x4(%esp)
080822df +0x2305:  mov    %eax,(%esp)
080822e2 +0x2308:  call   08082c9c <+0x2cc2>
080822e7 +0x230d:  leave
080822e8 +0x230e:  ret
080822e9 +0x230f:  push   %ebp
080822ea +0x2310:  mov    %esp,%ebp
080822ec +0x2312:  mov    0x8(%ebp),%eax
080822ef +0x2315:  pop    %ebp
080822f0 +0x2316:  ret
080822f1 +0x2317:  nop
080822f2 +0x2318:  push   %ebp
080822f3 +0x2319:  mov    %esp,%ebp
080822f5 +0x231b:  sub    $0x18,%esp
080822f8 +0x231e:  mov    0xc(%ebp),%eax
080822fb +0x2321:  mov    %eax,(%esp)
080822fe +0x2324:  call   080822e9 <+0x230f>
08082303 +0x2329:  mov    0x8(%ebp),%ecx
08082306 +0x232c:  mov    0x4(%eax),%edx
08082309 +0x232f:  mov    (%eax),%eax
0808230b +0x2331:  mov    %eax,(%ecx)
0808230d +0x2333:  mov    %edx,0x4(%ecx)
08082310 +0x2336:  mov    0x10(%ebp),%eax
08082313 +0x2339:  mov    %eax,(%esp)
08082316 +0x233c:  call   08080fa6 <+0xfcc>
0808231b +0x2341:  movzbl (%eax),%edx
0808231e +0x2344:  mov    0x8(%ebp),%eax
08082321 +0x2347:  mov    %dl,0x8(%eax)
08082324 +0x234a:  leave
08082325 +0x234b:  ret
08082326 +0x234c:  push   %ebp
08082327 +0x234d:  mov    %esp,%ebp
08082329 +0x234f:  mov    0x8(%ebp),%eax
0808232c +0x2352:  pop    %ebp
0808232d +0x2353:  ret
0808232e +0x2354:  push   %ebp
0808232f +0x2355:  mov    %esp,%ebp
08082331 +0x2357:  push   %ebx
08082332 +0x2358:  sub    $0x54,%esp
08082335 +0x235b:  mov    0x8(%ebp),%ebx
08082338 +0x235e:  mov    0xc(%ebp),%eax
0808233b +0x2361:  mov    0x10(%ebp),%edx
0808233e +0x2364:  mov    %edx,0x4(%esp)
08082342 +0x2368:  mov    %eax,(%esp)
08082345 +0x236b:  call   08082cb2 <+0x2cd8>
0808234a +0x2370:  mov    %eax,-0x18(%ebp)
0808234d +0x2373:  mov    0xc(%ebp),%eax
08082350 +0x2376:  mov    -0x18(%ebp),%edx
08082353 +0x2379:  mov    %edx,0x4(%esp)
08082357 +0x237d:  mov    %eax,(%esp)
0808235a +0x2380:  call   08082214 <+0x223a>
0808235f +0x2385:  mov    %eax,-0x14(%ebp)
08082362 +0x2388:  mov    0xc(%ebp),%eax
08082365 +0x238b:  mov    0xc(%eax),%edx
08082368 +0x238e:  mov    0xc(%ebp),%eax
0808236b +0x2391:  mov    %edx,0xc(%esp)
0808236f +0x2395:  mov    -0x14(%ebp),%edx
08082372 +0x2398:  mov    %edx,0x8(%esp)
08082376 +0x239c:  mov    -0x18(%ebp),%edx
08082379 +0x239f:  mov    %edx,0x4(%esp)
0808237d +0x23a3:  mov    %eax,(%esp)
08082380 +0x23a6:  call   08082234 <+0x225a>
08082385 +0x23ab:  mov    %eax,-0x10(%ebp)
08082388 +0x23ae:  mov    0xc(%ebp),%eax
0808238b +0x23b1:  mov    0x8(%eax),%eax
0808238e +0x23b4:  mov    -0x10(%ebp),%edx
08082391 +0x23b7:  shl    $0x2,%edx
08082394 +0x23ba:  add    %edx,%eax
08082396 +0x23bc:  mov    (%eax),%eax
08082398 +0x23be:  mov    -0x14(%ebp),%edx
0808239b +0x23c1:  mov    %edx,0xc(%esp)
0808239f +0x23c5:  mov    -0x18(%ebp),%edx
080823a2 +0x23c8:  mov    %edx,0x8(%esp)
080823a6 +0x23cc:  mov    %eax,0x4(%esp)
080823aa +0x23d0:  mov    0xc(%ebp),%eax
080823ad +0x23d3:  mov    %eax,(%esp)
080823b0 +0x23d6:  call   08082258 <+0x227e>
080823b5 +0x23db:  mov    %eax,-0xc(%ebp)
080823b8 +0x23de:  cmpl   $0x0,-0xc(%ebp)
080823bc +0x23e2:  je     08082401 <+0x2427>
080823be +0x23e4:  movb   $0x0,-0x2d(%ebp)
080823c2 +0x23e8:  mov    0xc(%ebp),%eax
080823c5 +0x23eb:  mov    0x8(%eax),%eax
080823c8 +0x23ee:  mov    -0x10(%ebp),%edx
080823cb +0x23f1:  shl    $0x2,%edx
080823ce +0x23f4:  add    %edx,%eax
080823d0 +0x23f6:  mov    %eax,0x8(%esp)
080823d4 +0x23fa:  mov    -0xc(%ebp),%eax
080823d7 +0x23fd:  mov    %eax,0x4(%esp)
080823db +0x2401:  lea    -0x2c(%ebp),%eax
080823de +0x2404:  mov    %eax,(%esp)
080823e1 +0x2407:  call   080822a4 <+0x22ca>
080823e6 +0x240c:  lea    -0x2d(%ebp),%eax
080823e9 +0x240f:  mov    %eax,0x8(%esp)
080823ed +0x2413:  lea    -0x2c(%ebp),%eax
080823f0 +0x2416:  mov    %eax,0x4(%esp)
080823f4 +0x241a:  mov    %ebx,(%esp)
080823f7 +0x241d:  call   08082cba <+0x2ce0>
080823fc +0x2422:  sub    $0x4,%esp
080823ff +0x2425:  jmp    08082448 <+0x246e>
08082401 +0x2427:  movb   $0x1,-0x21(%ebp)
08082405 +0x242b:  lea    -0x20(%ebp),%eax
08082408 +0x242e:  mov    -0x14(%ebp),%edx
0808240b +0x2431:  mov    %edx,0x10(%esp)
0808240f +0x2435:  mov    -0x10(%ebp),%edx
08082412 +0x2438:  mov    %edx,0xc(%esp)
08082416 +0x243c:  mov    0x10(%ebp),%edx
08082419 +0x243f:  mov    %edx,0x8(%esp)
0808241d +0x2443:  mov    0xc(%ebp),%edx
08082420 +0x2446:  mov    %edx,0x4(%esp)
08082424 +0x244a:  mov    %eax,(%esp)
08082427 +0x244d:  call   08082cfe <+0x2d24>
0808242c +0x2452:  sub    $0x4,%esp
0808242f +0x2455:  lea    -0x21(%ebp),%eax
08082432 +0x2458:  mov    %eax,0x8(%esp)
08082436 +0x245c:  lea    -0x20(%ebp),%eax
08082439 +0x245f:  mov    %eax,0x4(%esp)
0808243d +0x2463:  mov    %ebx,(%esp)
08082440 +0x2466:  call   08082cba <+0x2ce0>
08082445 +0x246b:  sub    $0x4,%esp
08082448 +0x246e:  mov    %ebx,%eax
0808244a +0x2470:  mov    -0x4(%ebp),%ebx
0808244d +0x2473:  leave
0808244e +0x2474:  ret    $0x4
08082451 +0x2477:  nop
08082452 +0x2478:  push   %ebp
08082453 +0x2479:  mov    %esp,%ebp
08082455 +0x247b:  sub    $0x18,%esp
08082458 +0x247e:  mov    0xc(%ebp),%eax
0808245b +0x2481:  mov    (%eax),%eax
0808245d +0x2483:  mov    0x8(%ebp),%edx
08082460 +0x2486:  add    $0x2,%edx
08082463 +0x2489:  mov    %eax,0x4(%esp)
08082467 +0x248d:  mov    %edx,(%esp)
0808246a +0x2490:  call   080802a6 <+0x2cc>
0808246f +0x2495:  leave
08082470 +0x2496:  ret
08082471 +0x2497:  nop
08082472 +0x2498:  push   %ebp
08082473 +0x2499:  mov    %esp,%ebp
08082475 +0x249b:  sub    $0x18,%esp
08082478 +0x249e:  mov    0x8(%ebp),%eax
0808247b +0x24a1:  lea    0x3(%eax),%edx
0808247e +0x24a4:  mov    0x14(%ebp),%eax
08082481 +0x24a7:  mov    %eax,0x8(%esp)
08082485 +0x24ab:  mov    0x10(%ebp),%eax
08082488 +0x24ae:  mov    %eax,0x4(%esp)
0808248c +0x24b2:  mov    %edx,(%esp)
0808248f +0x24b5:  call   08080006 <+0x2c>
08082494 +0x24ba:  leave
08082495 +0x24bb:  ret
08082496 +0x24bc:  push   %ebp
08082497 +0x24bd:  mov    %esp,%ebp
08082499 +0x24bf:  sub    $0x18,%esp
0808249c +0x24c2:  jmp    080824d0 <+0x24f6>
0808249e +0x24c4:  mov    0x8(%ebp),%eax
080824a1 +0x24c7:  mov    0xc(%ebp),%edx
080824a4 +0x24ca:  mov    %edx,0xc(%esp)
080824a8 +0x24ce:  mov    0x14(%ebp),%edx
080824ab +0x24d1:  mov    %edx,0x8(%esp)
080824af +0x24d5:  mov    0x10(%ebp),%edx
080824b2 +0x24d8:  mov    %edx,0x4(%esp)
080824b6 +0x24dc:  mov    %eax,(%esp)
080824b9 +0x24df:  call   08082e5a <+0x2e80>
080824be +0x24e4:  test   %al,%al
080824c0 +0x24e6:  je     080824c7 <+0x24ed>
080824c2 +0x24e8:  mov    0xc(%ebp),%eax
080824c5 +0x24eb:  jmp    080824e0 <+0x2506>
080824c7 +0x24ed:  mov    0xc(%ebp),%eax
080824ca +0x24f0:  mov    0xc(%eax),%eax
080824cd +0x24f3:  mov    %eax,0xc(%ebp)
080824d0 +0x24f6:  cmpl   $0x0,0xc(%ebp)
080824d4 +0x24fa:  setne  %al
080824d7 +0x24fd:  test   %al,%al
080824d9 +0x24ff:  jne    0808249e <+0x24c4>
080824db +0x2501:  mov    $0x0,%eax
080824e0 +0x2506:  leave
080824e1 +0x2507:  ret
080824e2 +0x2508:  push   %ebp
080824e3 +0x2509:  mov    %esp,%ebp
080824e5 +0x250b:  sub    $0x18,%esp
080824e8 +0x250e:  mov    0x8(%ebp),%eax
080824eb +0x2511:  mov    0x10(%ebp),%edx
080824ee +0x2514:  mov    %edx,0x8(%esp)
080824f2 +0x2518:  mov    0xc(%ebp),%edx
080824f5 +0x251b:  mov    %edx,0x4(%esp)
080824f9 +0x251f:  mov    %eax,(%esp)
080824fc +0x2522:  call   08082e92 <+0x2eb8>
08082501 +0x2527:  leave
08082502 +0x2528:  ret
08082503 +0x2529:  nop
08082504 +0x252a:  push   %ebp
08082505 +0x252b:  mov    %esp,%ebp
08082507 +0x252d:  sub    $0x18,%esp
0808250a +0x2530:  mov    0xc(%ebp),%eax
0808250d +0x2533:  mov    (%eax),%edx
0808250f +0x2535:  mov    0x8(%ebp),%eax
08082512 +0x2538:  mov    0xc(%ebp),%ecx
08082515 +0x253b:  mov    %ecx,0x8(%esp)
08082519 +0x253f:  mov    %edx,0x4(%esp)
0808251d +0x2543:  mov    %eax,(%esp)
08082520 +0x2546:  call   08082e92 <+0x2eb8>
08082525 +0x254b:  leave
08082526 +0x254c:  ret
08082527 +0x254d:  push   %ebp
08082528 +0x254e:  mov    %esp,%ebp
0808252a +0x2550:  mov    0x8(%ebp),%eax
0808252d +0x2553:  pop    %ebp
0808252e +0x2554:  ret
0808252f +0x2555:  nop
08082530 +0x2556:  push   %ebp
08082531 +0x2557:  mov    %esp,%ebp
08082533 +0x2559:  sub    $0x18,%esp
08082536 +0x255c:  mov    0xc(%ebp),%eax
08082539 +0x255f:  mov    %eax,(%esp)
0808253c +0x2562:  call   08082527 <+0x254d>
08082541 +0x2567:  mov    0x8(%ebp),%ecx
08082544 +0x256a:  mov    0x4(%eax),%edx
08082547 +0x256d:  mov    (%eax),%eax
08082549 +0x256f:  mov    %eax,(%ecx)
0808254b +0x2571:  mov    %edx,0x4(%ecx)
0808254e +0x2574:  mov    0x10(%ebp),%eax
08082551 +0x2577:  mov    %eax,(%esp)
08082554 +0x257a:  call   08080fa6 <+0xfcc>
08082559 +0x257f:  movzbl (%eax),%edx
0808255c +0x2582:  mov    0x8(%ebp),%eax
0808255f +0x2585:  mov    %dl,0x8(%eax)
08082562 +0x2588:  leave
08082563 +0x2589:  ret
08082564 +0x258a:  push   %ebp
08082565 +0x258b:  mov    %esp,%ebp
08082567 +0x258d:  mov    0x8(%ebp),%eax
0808256a +0x2590:  pop    %ebp
0808256b +0x2591:  ret
0808256c +0x2592:  push   %ebp
0808256d +0x2593:  mov    %esp,%ebp
0808256f +0x2595:  push   %ebx
08082570 +0x2596:  sub    $0x54,%esp
08082573 +0x2599:  mov    0x8(%ebp),%ebx
08082576 +0x259c:  mov    0xc(%ebp),%eax
08082579 +0x259f:  mov    0x10(%ebp),%edx
0808257c +0x25a2:  mov    %edx,0x4(%esp)
08082580 +0x25a6:  mov    %eax,(%esp)
08082583 +0x25a9:  call   08082ea8 <+0x2ece>
08082588 +0x25ae:  mov    %eax,-0x18(%ebp)
0808258b +0x25b1:  mov    0xc(%ebp),%eax
0808258e +0x25b4:  mov    -0x18(%ebp),%edx
08082591 +0x25b7:  mov    %edx,0x4(%esp)
08082595 +0x25bb:  mov    %eax,(%esp)
08082598 +0x25be:  call   08082452 <+0x2478>
0808259d +0x25c3:  mov    %eax,-0x14(%ebp)
080825a0 +0x25c6:  mov    0xc(%ebp),%eax
080825a3 +0x25c9:  mov    0xc(%eax),%edx
080825a6 +0x25cc:  mov    0xc(%ebp),%eax
080825a9 +0x25cf:  mov    %edx,0xc(%esp)
080825ad +0x25d3:  mov    -0x14(%ebp),%edx
080825b0 +0x25d6:  mov    %edx,0x8(%esp)
080825b4 +0x25da:  mov    -0x18(%ebp),%edx
080825b7 +0x25dd:  mov    %edx,0x4(%esp)
080825bb +0x25e1:  mov    %eax,(%esp)
080825be +0x25e4:  call   08082472 <+0x2498>
080825c3 +0x25e9:  mov    %eax,-0x10(%ebp)
080825c6 +0x25ec:  mov    0xc(%ebp),%eax
080825c9 +0x25ef:  mov    0x8(%eax),%eax
080825cc +0x25f2:  mov    -0x10(%ebp),%edx
080825cf +0x25f5:  shl    $0x2,%edx
080825d2 +0x25f8:  add    %edx,%eax
080825d4 +0x25fa:  mov    (%eax),%eax
080825d6 +0x25fc:  mov    -0x14(%ebp),%edx
080825d9 +0x25ff:  mov    %edx,0xc(%esp)
080825dd +0x2603:  mov    -0x18(%ebp),%edx
080825e0 +0x2606:  mov    %edx,0x8(%esp)
080825e4 +0x260a:  mov    %eax,0x4(%esp)
080825e8 +0x260e:  mov    0xc(%ebp),%eax
080825eb +0x2611:  mov    %eax,(%esp)
080825ee +0x2614:  call   08082496 <+0x24bc>
080825f3 +0x2619:  mov    %eax,-0xc(%ebp)
080825f6 +0x261c:  cmpl   $0x0,-0xc(%ebp)
080825fa +0x2620:  je     0808263f <+0x2665>
080825fc +0x2622:  movb   $0x0,-0x2d(%ebp)
08082600 +0x2626:  mov    0xc(%ebp),%eax
08082603 +0x2629:  mov    0x8(%eax),%eax
08082606 +0x262c:  mov    -0x10(%ebp),%edx
08082609 +0x262f:  shl    $0x2,%edx
0808260c +0x2632:  add    %edx,%eax
0808260e +0x2634:  mov    %eax,0x8(%esp)
08082612 +0x2638:  mov    -0xc(%ebp),%eax
08082615 +0x263b:  mov    %eax,0x4(%esp)
08082619 +0x263f:  lea    -0x2c(%ebp),%eax
0808261c +0x2642:  mov    %eax,(%esp)
0808261f +0x2645:  call   080824e2 <+0x2508>
08082624 +0x264a:  lea    -0x2d(%ebp),%eax
08082627 +0x264d:  mov    %eax,0x8(%esp)
0808262b +0x2651:  lea    -0x2c(%ebp),%eax
0808262e +0x2654:  mov    %eax,0x4(%esp)
08082632 +0x2658:  mov    %ebx,(%esp)
08082635 +0x265b:  call   08082eb0 <+0x2ed6>
0808263a +0x2660:  sub    $0x4,%esp
0808263d +0x2663:  jmp    08082686 <+0x26ac>
0808263f +0x2665:  movb   $0x1,-0x21(%ebp)
08082643 +0x2669:  lea    -0x20(%ebp),%eax
08082646 +0x266c:  mov    -0x14(%ebp),%edx
08082649 +0x266f:  mov    %edx,0x10(%esp)
0808264d +0x2673:  mov    -0x10(%ebp),%edx
08082650 +0x2676:  mov    %edx,0xc(%esp)
08082654 +0x267a:  mov    0x10(%ebp),%edx
08082657 +0x267d:  mov    %edx,0x8(%esp)
0808265b +0x2681:  mov    0xc(%ebp),%edx
0808265e +0x2684:  mov    %edx,0x4(%esp)
08082662 +0x2688:  mov    %eax,(%esp)
08082665 +0x268b:  call   08082ef4 <+0x2f1a>
0808266a +0x2690:  sub    $0x4,%esp
0808266d +0x2693:  lea    -0x21(%ebp),%eax
08082670 +0x2696:  mov    %eax,0x8(%esp)
08082674 +0x269a:  lea    -0x20(%ebp),%eax
08082677 +0x269d:  mov    %eax,0x4(%esp)
0808267b +0x26a1:  mov    %ebx,(%esp)
0808267e +0x26a4:  call   08082eb0 <+0x2ed6>
08082683 +0x26a9:  sub    $0x4,%esp
08082686 +0x26ac:  mov    %ebx,%eax
08082688 +0x26ae:  mov    -0x4(%ebp),%ebx
0808268b +0x26b1:  leave
0808268c +0x26b2:  ret    $0x4
0808268f +0x26b5:  nop
08082690 +0x26b6:  push   %ebp
08082691 +0x26b7:  mov    %esp,%ebp
08082693 +0x26b9:  sub    $0x18,%esp
08082696 +0x26bc:  mov    0x8(%ebp),%eax
08082699 +0x26bf:  mov    0x10(%ebp),%edx
0808269c +0x26c2:  mov    %edx,0x8(%esp)
080826a0 +0x26c6:  mov    0xc(%ebp),%edx
080826a3 +0x26c9:  mov    %edx,0x4(%esp)
080826a7 +0x26cd:  mov    %eax,(%esp)
080826aa +0x26d0:  call   08082aa6 <+0x2acc>
080826af +0x26d5:  leave
080826b0 +0x26d6:  ret
080826b1 +0x26d7:  nop
080826b2 +0x26d8:  push   %ebp
080826b3 +0x26d9:  mov    %esp,%ebp
080826b5 +0x26db:  sub    $0x18,%esp
080826b8 +0x26de:  mov    0xc(%ebp),%eax
080826bb +0x26e1:  mov    (%eax),%edx
080826bd +0x26e3:  mov    0x8(%ebp),%eax
080826c0 +0x26e6:  mov    0xc(%ebp),%ecx
080826c3 +0x26e9:  mov    %ecx,0x8(%esp)
080826c7 +0x26ed:  mov    %edx,0x4(%esp)
080826cb +0x26f1:  mov    %eax,(%esp)
080826ce +0x26f4:  call   08082aa6 <+0x2acc>
080826d3 +0x26f9:  leave
080826d4 +0x26fa:  ret
080826d5 +0x26fb:  nop
080826d6 +0x26fc:  push   %ebp
080826d7 +0x26fd:  mov    %esp,%ebp
080826d9 +0x26ff:  sub    $0x18,%esp
080826dc +0x2702:  mov    0x8(%ebp),%eax
080826df +0x2705:  mov    0x10(%ebp),%edx
080826e2 +0x2708:  mov    %edx,0x8(%esp)
080826e6 +0x270c:  mov    0xc(%ebp),%edx
080826e9 +0x270f:  mov    %edx,0x4(%esp)
080826ed +0x2713:  mov    %eax,(%esp)
080826f0 +0x2716:  call   08082c9c <+0x2cc2>
080826f5 +0x271b:  leave
080826f6 +0x271c:  ret
080826f7 +0x271d:  nop
080826f8 +0x271e:  push   %ebp
080826f9 +0x271f:  mov    %esp,%ebp
080826fb +0x2721:  sub    $0x18,%esp
080826fe +0x2724:  mov    0xc(%ebp),%eax
08082701 +0x2727:  mov    (%eax),%edx
08082703 +0x2729:  mov    0x8(%ebp),%eax
08082706 +0x272c:  mov    0xc(%ebp),%ecx
08082709 +0x272f:  mov    %ecx,0x8(%esp)
0808270d +0x2733:  mov    %edx,0x4(%esp)
08082711 +0x2737:  mov    %eax,(%esp)
08082714 +0x273a:  call   08082c9c <+0x2cc2>
08082719 +0x273f:  leave
0808271a +0x2740:  ret
0808271b +0x2741:  nop
0808271c +0x2742:  push   %ebp
0808271d +0x2743:  mov    %esp,%ebp
0808271f +0x2745:  sub    $0x18,%esp
08082722 +0x2748:  mov    0x8(%ebp),%eax
08082725 +0x274b:  mov    0x10(%ebp),%edx
08082728 +0x274e:  mov    %edx,0x8(%esp)
0808272c +0x2752:  mov    0xc(%ebp),%edx
0808272f +0x2755:  mov    %edx,0x4(%esp)
08082733 +0x2759:  mov    %eax,(%esp)
08082736 +0x275c:  call   08082e92 <+0x2eb8>
0808273b +0x2761:  leave
0808273c +0x2762:  ret
0808273d +0x2763:  nop
0808273e +0x2764:  push   %ebp
0808273f +0x2765:  mov    %esp,%ebp
08082741 +0x2767:  sub    $0x18,%esp
08082744 +0x276a:  mov    0xc(%ebp),%eax
08082747 +0x276d:  mov    (%eax),%edx
08082749 +0x276f:  mov    0x8(%ebp),%eax
0808274c +0x2772:  mov    0xc(%ebp),%ecx
0808274f +0x2775:  mov    %ecx,0x8(%esp)
08082753 +0x2779:  mov    %edx,0x4(%esp)
08082757 +0x277d:  mov    %eax,(%esp)
0808275a +0x2780:  call   08082e92 <+0x2eb8>
0808275f +0x2785:  leave
08082760 +0x2786:  ret
08082761 +0x2787:  nop
08082762 +0x2788:  push   %ebp
08082763 +0x2789:  mov    %esp,%ebp
08082765 +0x278b:  pop    %ebp
08082766 +0x278c:  ret
08082767 +0x278d:  nop
08082768 +0x278e:  push   %ebp
08082769 +0x278f:  mov    %esp,%ebp
0808276b +0x2791:  sub    $0x18,%esp
0808276e +0x2794:  mov    0x8(%ebp),%eax
08082771 +0x2797:  mov    %eax,(%esp)
08082774 +0x279a:  call   08083050 <+0x3076>
08082779 +0x279f:  leave
0808277a +0x27a0:  ret
0808277b +0x27a1:  nop
0808277c +0x27a2:  push   %ebp
0808277d +0x27a3:  mov    %esp,%ebp
0808277f +0x27a5:  push   %esi
08082780 +0x27a6:  push   %ebx
08082781 +0x27a7:  sub    $0x20,%esp
08082784 +0x27aa:  mov    0x8(%ebp),%eax
08082787 +0x27ad:  add    $0x4,%eax
0808278a +0x27b0:  mov    %eax,0x4(%esp)
0808278e +0x27b4:  lea    -0x11(%ebp),%eax
08082791 +0x27b7:  mov    %eax,(%esp)
08082794 +0x27ba:  call   08081c8e <+0x1cb4>
08082799 +0x27bf:  mov    0xc(%ebp),%eax
0808279c +0x27c2:  lea    0x1(%eax),%edx
0808279f +0x27c5:  lea    -0x11(%ebp),%eax
080827a2 +0x27c8:  movl   $0x0,0x8(%esp)
080827aa +0x27d0:  mov    %edx,0x4(%esp)
080827ae +0x27d4:  mov    %eax,(%esp)
080827b1 +0x27d7:  call   08083056 <+0x307c>
080827b6 +0x27dc:  mov    %eax,-0xc(%ebp)
080827b9 +0x27df:  movl   $0x0,-0x10(%ebp)
080827c0 +0x27e6:  mov    0xc(%ebp),%eax
080827c3 +0x27e9:  shl    $0x2,%eax
080827c6 +0x27ec:  add    -0xc(%ebp),%eax
080827c9 +0x27ef:  lea    -0x10(%ebp),%edx
080827cc +0x27f2:  mov    %edx,0x8(%esp)
080827d0 +0x27f6:  mov    %eax,0x4(%esp)
080827d4 +0x27fa:  mov    -0xc(%ebp),%eax
080827d7 +0x27fd:  mov    %eax,(%esp)
080827da +0x2800:  call   0808308e <+0x30b4>
080827df +0x2805:  mov    0xc(%ebp),%eax
080827e2 +0x2808:  shl    $0x2,%eax
080827e5 +0x280b:  add    -0xc(%ebp),%eax
080827e8 +0x280e:  movl   $0x1000,(%eax)
080827ee +0x2814:  mov    -0xc(%ebp),%ebx
080827f1 +0x2817:  lea    -0x11(%ebp),%eax
080827f4 +0x281a:  mov    %eax,(%esp)
080827f7 +0x281d:  call   08081ca2 <+0x1cc8>
080827fc +0x2822:  mov    %ebx,%eax
080827fe +0x2824:  add    $0x20,%esp
08082801 +0x2827:  pop    %ebx
08082802 +0x2828:  pop    %esi
08082803 +0x2829:  pop    %ebp
08082804 +0x282a:  ret
08082805 +0x282b:  mov    %edx,%ebx
08082807 +0x282d:  mov    %eax,%esi
08082809 +0x282f:  lea    -0x11(%ebp),%eax
0808280c +0x2832:  mov    %eax,(%esp)
0808280f +0x2835:  call   08081ca2 <+0x1cc8>
08082814 +0x283a:  mov    %esi,%eax
08082816 +0x283c:  mov    %ebx,%edx
08082818 +0x283e:  mov    %eax,(%esp)
0808281b +0x2841:  call   08ae3750 <_Unwind_Resume>
08082820 +0x2846:  push   %ebp
08082821 +0x2847:  mov    %esp,%ebp
08082823 +0x2849:  sub    $0x18,%esp
08082826 +0x284c:  mov    0x8(%ebp),%eax
08082829 +0x284f:  add    $0x4,%eax
0808282c +0x2852:  mov    0xc(%ebp),%edx
0808282f +0x2855:  mov    %edx,0x4(%esp)
08082833 +0x2859:  mov    %eax,(%esp)
08082836 +0x285c:  call   080830da <+0x3100>
0808283b +0x2861:  mov    0x8(%ebp),%eax
0808283e +0x2864:  add    $0x4,%eax
08082841 +0x2867:  movl   $0x1,0x8(%esp)
08082849 +0x286f:  mov    0xc(%ebp),%edx
0808284c +0x2872:  mov    %edx,0x4(%esp)
08082850 +0x2876:  mov    %eax,(%esp)
08082853 +0x2879:  call   080830ee <+0x3114>
08082858 +0x287e:  leave
08082859 +0x287f:  ret
0808285a +0x2880:  push   %ebp
0808285b +0x2881:  mov    %esp,%ebp
0808285d +0x2883:  pop    %ebp
0808285e +0x2884:  ret
0808285f +0x2885:  nop
08082860 +0x2886:  push   %ebp
08082861 +0x2887:  mov    %esp,%ebp
08082863 +0x2889:  pop    %ebp
08082864 +0x288a:  ret
08082865 +0x288b:  nop
08082866 +0x288c:  push   %ebp
08082867 +0x288d:  mov    %esp,%ebp
08082869 +0x288f:  pop    %ebp
0808286a +0x2890:  ret
0808286b +0x2891:  nop
0808286c +0x2892:  push   %ebp
0808286d +0x2893:  mov    %esp,%ebp
0808286f +0x2895:  sub    $0x18,%esp
08082872 +0x2898:  mov    0x8(%ebp),%eax
08082875 +0x289b:  mov    %eax,(%esp)
08082878 +0x289e:  call   08083102 <+0x3128>
0808287d +0x28a3:  leave
0808287e +0x28a4:  ret
0808287f +0x28a5:  nop
08082880 +0x28a6:  push   %ebp
08082881 +0x28a7:  mov    %esp,%ebp
08082883 +0x28a9:  push   %esi
08082884 +0x28aa:  push   %ebx
08082885 +0x28ab:  sub    $0x20,%esp
08082888 +0x28ae:  mov    0x8(%ebp),%eax
0808288b +0x28b1:  add    $0x4,%eax
0808288e +0x28b4:  mov    %eax,0x4(%esp)
08082892 +0x28b8:  lea    -0x11(%ebp),%eax
08082895 +0x28bb:  mov    %eax,(%esp)
08082898 +0x28be:  call   08081e10 <+0x1e36>
0808289d +0x28c3:  mov    0xc(%ebp),%eax
080828a0 +0x28c6:  lea    0x1(%eax),%edx
080828a3 +0x28c9:  lea    -0x11(%ebp),%eax
080828a6 +0x28cc:  movl   $0x0,0x8(%esp)
080828ae +0x28d4:  mov    %edx,0x4(%esp)
080828b2 +0x28d8:  mov    %eax,(%esp)
080828b5 +0x28db:  call   08083108 <+0x312e>
080828ba +0x28e0:  mov    %eax,-0xc(%ebp)
080828bd +0x28e3:  movl   $0x0,-0x10(%ebp)
080828c4 +0x28ea:  mov    0xc(%ebp),%eax
080828c7 +0x28ed:  shl    $0x2,%eax
080828ca +0x28f0:  add    -0xc(%ebp),%eax
080828cd +0x28f3:  lea    -0x10(%ebp),%edx
080828d0 +0x28f6:  mov    %edx,0x8(%esp)
080828d4 +0x28fa:  mov    %eax,0x4(%esp)
080828d8 +0x28fe:  mov    -0xc(%ebp),%eax
080828db +0x2901:  mov    %eax,(%esp)
080828de +0x2904:  call   08083140 <+0x3166>
080828e3 +0x2909:  mov    0xc(%ebp),%eax
080828e6 +0x290c:  shl    $0x2,%eax
080828e9 +0x290f:  add    -0xc(%ebp),%eax
080828ec +0x2912:  movl   $0x1000,(%eax)
080828f2 +0x2918:  mov    -0xc(%ebp),%ebx
080828f5 +0x291b:  lea    -0x11(%ebp),%eax
080828f8 +0x291e:  mov    %eax,(%esp)
080828fb +0x2921:  call   08081e24 <+0x1e4a>
08082900 +0x2926:  mov    %ebx,%eax
08082902 +0x2928:  add    $0x20,%esp
08082905 +0x292b:  pop    %ebx
08082906 +0x292c:  pop    %esi
08082907 +0x292d:  pop    %ebp
08082908 +0x292e:  ret
08082909 +0x292f:  mov    %edx,%ebx
0808290b +0x2931:  mov    %eax,%esi
0808290d +0x2933:  lea    -0x11(%ebp),%eax
08082910 +0x2936:  mov    %eax,(%esp)
08082913 +0x2939:  call   08081e24 <+0x1e4a>
08082918 +0x293e:  mov    %esi,%eax
0808291a +0x2940:  mov    %ebx,%edx
0808291c +0x2942:  mov    %eax,(%esp)
0808291f +0x2945:  call   08ae3750 <_Unwind_Resume>
08082924 +0x294a:  push   %ebp
08082925 +0x294b:  mov    %esp,%ebp
08082927 +0x294d:  sub    $0x18,%esp
0808292a +0x2950:  mov    0x8(%ebp),%eax
0808292d +0x2953:  add    $0x4,%eax
08082930 +0x2956:  mov    0xc(%ebp),%edx
08082933 +0x2959:  mov    %edx,0x4(%esp)
08082937 +0x295d:  mov    %eax,(%esp)
0808293a +0x2960:  call   0808318c <+0x31b2>
0808293f +0x2965:  mov    0x8(%ebp),%eax
08082942 +0x2968:  add    $0x4,%eax
08082945 +0x296b:  movl   $0x1,0x8(%esp)
0808294d +0x2973:  mov    0xc(%ebp),%edx
08082950 +0x2976:  mov    %edx,0x4(%esp)
08082954 +0x297a:  mov    %eax,(%esp)
08082957 +0x297d:  call   080831a0 <+0x31c6>
0808295c +0x2982:  leave
0808295d +0x2983:  ret
0808295e +0x2984:  push   %ebp
0808295f +0x2985:  mov    %esp,%ebp
08082961 +0x2987:  pop    %ebp
08082962 +0x2988:  ret
08082963 +0x2989:  nop
08082964 +0x298a:  push   %ebp
08082965 +0x298b:  mov    %esp,%ebp
08082967 +0x298d:  pop    %ebp
08082968 +0x298e:  ret
08082969 +0x298f:  nop
0808296a +0x2990:  push   %ebp
0808296b +0x2991:  mov    %esp,%ebp
0808296d +0x2993:  pop    %ebp
0808296e +0x2994:  ret
0808296f +0x2995:  nop
08082970 +0x2996:  push   %ebp
08082971 +0x2997:  mov    %esp,%ebp
08082973 +0x2999:  sub    $0x18,%esp
08082976 +0x299c:  mov    0x8(%ebp),%eax
08082979 +0x299f:  mov    %eax,(%esp)
0808297c +0x29a2:  call   080831b4 <+0x31da>
08082981 +0x29a7:  leave
08082982 +0x29a8:  ret
08082983 +0x29a9:  nop
08082984 +0x29aa:  push   %ebp
08082985 +0x29ab:  mov    %esp,%ebp
08082987 +0x29ad:  push   %esi
08082988 +0x29ae:  push   %ebx
08082989 +0x29af:  sub    $0x20,%esp
0808298c +0x29b2:  mov    0x8(%ebp),%eax
0808298f +0x29b5:  add    $0x4,%eax
08082992 +0x29b8:  mov    %eax,0x4(%esp)
08082996 +0x29bc:  lea    -0x11(%ebp),%eax
08082999 +0x29bf:  mov    %eax,(%esp)
0808299c +0x29c2:  call   08081f92 <+0x1fb8>
080829a1 +0x29c7:  mov    0xc(%ebp),%eax
080829a4 +0x29ca:  lea    0x1(%eax),%edx
080829a7 +0x29cd:  lea    -0x11(%ebp),%eax
080829aa +0x29d0:  movl   $0x0,0x8(%esp)
080829b2 +0x29d8:  mov    %edx,0x4(%esp)
080829b6 +0x29dc:  mov    %eax,(%esp)
080829b9 +0x29df:  call   080831ba <+0x31e0>
080829be +0x29e4:  mov    %eax,-0xc(%ebp)
080829c1 +0x29e7:  movl   $0x0,-0x10(%ebp)
080829c8 +0x29ee:  mov    0xc(%ebp),%eax
080829cb +0x29f1:  shl    $0x2,%eax
080829ce +0x29f4:  add    -0xc(%ebp),%eax
080829d1 +0x29f7:  lea    -0x10(%ebp),%edx
080829d4 +0x29fa:  mov    %edx,0x8(%esp)
080829d8 +0x29fe:  mov    %eax,0x4(%esp)
080829dc +0x2a02:  mov    -0xc(%ebp),%eax
080829df +0x2a05:  mov    %eax,(%esp)
080829e2 +0x2a08:  call   080831f2 <+0x3218>
080829e7 +0x2a0d:  mov    0xc(%ebp),%eax
080829ea +0x2a10:  shl    $0x2,%eax
080829ed +0x2a13:  add    -0xc(%ebp),%eax
080829f0 +0x2a16:  movl   $0x1000,(%eax)
080829f6 +0x2a1c:  mov    -0xc(%ebp),%ebx
080829f9 +0x2a1f:  lea    -0x11(%ebp),%eax
080829fc +0x2a22:  mov    %eax,(%esp)
080829ff +0x2a25:  call   08081fa6 <+0x1fcc>
08082a04 +0x2a2a:  mov    %ebx,%eax
08082a06 +0x2a2c:  add    $0x20,%esp
08082a09 +0x2a2f:  pop    %ebx
08082a0a +0x2a30:  pop    %esi
08082a0b +0x2a31:  pop    %ebp
08082a0c +0x2a32:  ret
08082a0d +0x2a33:  mov    %edx,%ebx
08082a0f +0x2a35:  mov    %eax,%esi
08082a11 +0x2a37:  lea    -0x11(%ebp),%eax
08082a14 +0x2a3a:  mov    %eax,(%esp)
08082a17 +0x2a3d:  call   08081fa6 <+0x1fcc>
08082a1c +0x2a42:  mov    %esi,%eax
08082a1e +0x2a44:  mov    %ebx,%edx
08082a20 +0x2a46:  mov    %eax,(%esp)
08082a23 +0x2a49:  call   08ae3750 <_Unwind_Resume>
08082a28 +0x2a4e:  push   %ebp
08082a29 +0x2a4f:  mov    %esp,%ebp
08082a2b +0x2a51:  sub    $0x18,%esp
08082a2e +0x2a54:  mov    0x8(%ebp),%eax
08082a31 +0x2a57:  add    $0x4,%eax
08082a34 +0x2a5a:  mov    0xc(%ebp),%edx
08082a37 +0x2a5d:  mov    %edx,0x4(%esp)
08082a3b +0x2a61:  mov    %eax,(%esp)
08082a3e +0x2a64:  call   0808323e <+0x3264>
08082a43 +0x2a69:  mov    0x8(%ebp),%eax
08082a46 +0x2a6c:  add    $0x4,%eax
08082a49 +0x2a6f:  movl   $0x1,0x8(%esp)
08082a51 +0x2a77:  mov    0xc(%ebp),%edx
08082a54 +0x2a7a:  mov    %edx,0x4(%esp)
08082a58 +0x2a7e:  mov    %eax,(%esp)
08082a5b +0x2a81:  call   08083252 <+0x3278>
08082a60 +0x2a86:  leave
08082a61 +0x2a87:  ret
08082a62 +0x2a88:  push   %ebp
08082a63 +0x2a89:  mov    %esp,%ebp
08082a65 +0x2a8b:  pop    %ebp
08082a66 +0x2a8c:  ret
08082a67 +0x2a8d:  nop
08082a68 +0x2a8e:  push   %ebp
08082a69 +0x2a8f:  mov    %esp,%ebp
08082a6b +0x2a91:  pop    %ebp
08082a6c +0x2a92:  ret
08082a6d +0x2a93:  nop
08082a6e +0x2a94:  push   %ebp
08082a6f +0x2a95:  mov    %esp,%ebp
08082a71 +0x2a97:  sub    $0x18,%esp
08082a74 +0x2a9a:  mov    0x14(%ebp),%edx
08082a77 +0x2a9d:  mov    0x8(%ebp),%eax
08082a7a +0x2aa0:  mov    %edx,0x4(%esp)
08082a7e +0x2aa4:  mov    %eax,(%esp)
08082a81 +0x2aa7:  call   08083266 <+0x328c>
08082a86 +0x2aac:  mov    (%eax),%edx
08082a88 +0x2aae:  mov    0xc(%ebp),%eax
08082a8b +0x2ab1:  mov    (%eax),%eax
08082a8d +0x2ab3:  mov    0x8(%ebp),%ecx
08082a90 +0x2ab6:  add    $0x1,%ecx
08082a93 +0x2ab9:  mov    %edx,0x8(%esp)
08082a97 +0x2abd:  mov    %eax,0x4(%esp)
08082a9b +0x2ac1:  mov    %ecx,(%esp)
08082a9e +0x2ac4:  call   080802ee <+0x314>
08082aa3 +0x2ac9:  leave
08082aa4 +0x2aca:  ret
08082aa5 +0x2acb:  nop
08082aa6 +0x2acc:  push   %ebp
08082aa7 +0x2acd:  mov    %esp,%ebp
08082aa9 +0x2acf:  mov    0x8(%ebp),%eax
08082aac +0x2ad2:  mov    0xc(%ebp),%edx
08082aaf +0x2ad5:  mov    %edx,(%eax)
08082ab1 +0x2ad7:  mov    0x8(%ebp),%eax
08082ab4 +0x2ada:  mov    0x10(%ebp),%edx
08082ab7 +0x2add:  mov    %edx,0x4(%eax)
08082aba +0x2ae0:  pop    %ebp
08082abb +0x2ae1:  ret
08082abc +0x2ae2:  push   %ebp
08082abd +0x2ae3:  mov    %esp,%ebp
08082abf +0x2ae5:  mov    0xc(%ebp),%eax
08082ac2 +0x2ae8:  pop    %ebp
08082ac3 +0x2ae9:  ret
08082ac4 +0x2aea:  push   %ebp
08082ac5 +0x2aeb:  mov    %esp,%ebp
08082ac7 +0x2aed:  push   %ebx
08082ac8 +0x2aee:  sub    $0x24,%esp
08082acb +0x2af1:  mov    0x8(%ebp),%ebx
08082ace +0x2af4:  mov    0x10(%ebp),%eax
08082ad1 +0x2af7:  mov    %eax,(%esp)
08082ad4 +0x2afa:  call   08080fa6 <+0xfcc>
08082ad9 +0x2aff:  movzbl (%eax),%eax
08082adc +0x2b02:  mov    %al,-0x9(%ebp)
08082adf +0x2b05:  mov    0xc(%ebp),%eax
08082ae2 +0x2b08:  mov    %eax,(%esp)
08082ae5 +0x2b0b:  call   0808326e <+0x3294>
08082aea +0x2b10:  lea    -0x9(%ebp),%edx
08082aed +0x2b13:  mov    %edx,0x8(%esp)
08082af1 +0x2b17:  mov    %eax,0x4(%esp)
08082af5 +0x2b1b:  mov    %ebx,(%esp)
08082af8 +0x2b1e:  call   08083276 <+0x329c>
08082afd +0x2b23:  mov    %ebx,%eax
08082aff +0x2b25:  add    $0x24,%esp
08082b02 +0x2b28:  pop    %ebx
08082b03 +0x2b29:  pop    %ebp
08082b04 +0x2b2a:  ret    $0x4
08082b07 +0x2b2d:  nop
08082b08 +0x2b2e:  push   %ebp
08082b09 +0x2b2f:  mov    %esp,%ebp
08082b0b +0x2b31:  push   %esi
08082b0c +0x2b32:  push   %ebx
08082b0d +0x2b33:  sub    $0x30,%esp
08082b10 +0x2b36:  mov    0x8(%ebp),%ebx
08082b13 +0x2b39:  mov    0xc(%ebp),%eax
08082b16 +0x2b3c:  mov    0x10(%eax),%ecx
08082b19 +0x2b3f:  mov    0xc(%ebp),%eax
08082b1c +0x2b42:  mov    0xc(%eax),%edx
08082b1f +0x2b45:  mov    0xc(%ebp),%eax
08082b22 +0x2b48:  lea    0x14(%eax),%esi
08082b25 +0x2b4b:  lea    -0x18(%ebp),%eax
08082b28 +0x2b4e:  movl   $0x1,0x10(%esp)
08082b30 +0x2b56:  mov    %ecx,0xc(%esp)
08082b34 +0x2b5a:  mov    %edx,0x8(%esp)
08082b38 +0x2b5e:  mov    %esi,0x4(%esp)
08082b3c +0x2b62:  mov    %eax,(%esp)
08082b3f +0x2b65:  call   080800ac <+0xd2>
08082b44 +0x2b6a:  sub    $0x4,%esp
08082b47 +0x2b6d:  mov    0x10(%ebp),%eax
08082b4a +0x2b70:  mov    %eax,0x4(%esp)
08082b4e +0x2b74:  mov    0xc(%ebp),%eax
08082b51 +0x2b77:  mov    %eax,(%esp)
08082b54 +0x2b7a:  call   080832aa <+0x32d0>
08082b59 +0x2b7f:  mov    %eax,-0x10(%ebp)
08082b5c +0x2b82:  movzbl -0x18(%ebp),%eax
08082b60 +0x2b86:  test   %al,%al
08082b62 +0x2b88:  je     08082bae <+0x2bd4>
08082b64 +0x2b8a:  mov    0xc(%ebp),%eax
08082b67 +0x2b8d:  mov    0x10(%ebp),%edx
08082b6a +0x2b90:  mov    %edx,0x4(%esp)
08082b6e +0x2b94:  mov    %eax,(%esp)
08082b71 +0x2b97:  call   08082abc <+0x2ae2>
08082b76 +0x2b9c:  mov    %eax,-0xc(%ebp)
08082b79 +0x2b9f:  mov    -0x14(%ebp),%edx
08082b7c +0x2ba2:  mov    0xc(%ebp),%eax
08082b7f +0x2ba5:  mov    %edx,0xc(%esp)
08082b83 +0x2ba9:  mov    0x18(%ebp),%edx
08082b86 +0x2bac:  mov    %edx,0x8(%esp)
08082b8a +0x2bb0:  mov    -0xc(%ebp),%edx
08082b8d +0x2bb3:  mov    %edx,0x4(%esp)
08082b91 +0x2bb7:  mov    %eax,(%esp)
08082b94 +0x2bba:  call   08081fee <+0x2014>
08082b99 +0x2bbf:  mov    %eax,0x14(%ebp)
08082b9c +0x2bc2:  mov    -0x14(%ebp),%eax
08082b9f +0x2bc5:  mov    %eax,0x4(%esp)
08082ba3 +0x2bc9:  mov    0xc(%ebp),%eax
08082ba6 +0x2bcc:  mov    %eax,(%esp)
08082ba9 +0x2bcf:  call   08083342 <+0x3368>
08082bae +0x2bd4:  mov    0xc(%ebp),%eax
08082bb1 +0x2bd7:  mov    0x8(%eax),%eax
08082bb4 +0x2bda:  mov    0x14(%ebp),%edx
08082bb7 +0x2bdd:  shl    $0x2,%edx
08082bba +0x2be0:  add    %edx,%eax
08082bbc +0x2be2:  mov    (%eax),%edx
08082bbe +0x2be4:  mov    -0x10(%ebp),%eax
08082bc1 +0x2be7:  mov    %edx,0xc(%eax)
08082bc4 +0x2bea:  mov    0xc(%ebp),%eax
08082bc7 +0x2bed:  mov    0x18(%ebp),%edx
08082bca +0x2bf0:  mov    %edx,0x8(%esp)
08082bce +0x2bf4:  mov    -0x10(%ebp),%edx
08082bd1 +0x2bf7:  mov    %edx,0x4(%esp)
08082bd5 +0x2bfb:  mov    %eax,(%esp)
08082bd8 +0x2bfe:  call   0808341e <+0x3444>
08082bdd +0x2c03:  mov    0xc(%ebp),%eax
08082be0 +0x2c06:  mov    0x8(%eax),%eax
08082be3 +0x2c09:  mov    0x14(%ebp),%edx
08082be6 +0x2c0c:  shl    $0x2,%edx
08082be9 +0x2c0f:  lea    (%eax,%edx,1),%edx
08082bec +0x2c12:  mov    -0x10(%ebp),%eax
08082bef +0x2c15:  mov    %eax,(%edx)
08082bf1 +0x2c17:  mov    0xc(%ebp),%eax
08082bf4 +0x2c1a:  mov    0x10(%eax),%eax
08082bf7 +0x2c1d:  lea    0x1(%eax),%edx
08082bfa +0x2c20:  mov    0xc(%ebp),%eax
08082bfd +0x2c23:  mov    %edx,0x10(%eax)
08082c00 +0x2c26:  mov    0xc(%ebp),%eax
08082c03 +0x2c29:  mov    0x8(%eax),%eax
08082c06 +0x2c2c:  mov    0x14(%ebp),%edx
08082c09 +0x2c2f:  shl    $0x2,%edx
08082c0c +0x2c32:  add    %edx,%eax
08082c0e +0x2c34:  mov    %eax,0x8(%esp)
08082c12 +0x2c38:  mov    -0x10(%ebp),%eax
08082c15 +0x2c3b:  mov    %eax,0x4(%esp)
08082c19 +0x2c3f:  mov    %ebx,(%esp)
08082c1c +0x2c42:  call   0808205e <+0x2084>
08082c21 +0x2c47:  mov    %ebx,%eax
08082c23 +0x2c49:  lea    -0x8(%ebp),%esp
08082c26 +0x2c4c:  add    $0x0,%esp
08082c29 +0x2c4f:  pop    %ebx
08082c2a +0x2c50:  pop    %esi
08082c2b +0x2c51:  pop    %ebp
08082c2c +0x2c52:  ret    $0x4
08082c2f +0x2c55:  mov    %eax,(%esp)
08082c32 +0x2c58:  call   08725ce0 <__cxa_begin_catch>
08082c37 +0x2c5d:  mov    -0x10(%ebp),%eax
08082c3a +0x2c60:  mov    %eax,0x4(%esp)
08082c3e +0x2c64:  mov    0xc(%ebp),%eax
08082c41 +0x2c67:  mov    %eax,(%esp)
08082c44 +0x2c6a:  call   08082820 <+0x2846>
08082c49 +0x2c6f:  call   08724be0 <__cxa_rethrow>
08082c4e +0x2c74:  mov    %edx,%ebx
08082c50 +0x2c76:  mov    %eax,%esi
08082c52 +0x2c78:  call   08725c30 <__cxa_end_catch>
08082c57 +0x2c7d:  mov    %esi,%eax
08082c59 +0x2c7f:  mov    %ebx,%edx
08082c5b +0x2c81:  mov    %eax,(%esp)
08082c5e +0x2c84:  call   08ae3750 <_Unwind_Resume>
08082c63 +0x2c89:  nop
08082c64 +0x2c8a:  push   %ebp
08082c65 +0x2c8b:  mov    %esp,%ebp
08082c67 +0x2c8d:  sub    $0x18,%esp
08082c6a +0x2c90:  mov    0x14(%ebp),%edx
08082c6d +0x2c93:  mov    0x8(%ebp),%eax
08082c70 +0x2c96:  mov    %edx,0x4(%esp)
08082c74 +0x2c9a:  mov    %eax,(%esp)
08082c77 +0x2c9d:  call   08083424 <+0x344a>
08082c7c +0x2ca2:  mov    (%eax),%edx
08082c7e +0x2ca4:  mov    0xc(%ebp),%eax
08082c81 +0x2ca7:  mov    (%eax),%eax
08082c83 +0x2ca9:  mov    0x8(%ebp),%ecx
08082c86 +0x2cac:  add    $0x1,%ecx
08082c89 +0x2caf:  mov    %edx,0x8(%esp)
08082c8d +0x2cb3:  mov    %eax,0x4(%esp)
08082c91 +0x2cb7:  mov    %ecx,(%esp)
08082c94 +0x2cba:  call   080802ee <+0x314>
08082c99 +0x2cbf:  leave
08082c9a +0x2cc0:  ret
08082c9b +0x2cc1:  nop
08082c9c +0x2cc2:  push   %ebp
08082c9d +0x2cc3:  mov    %esp,%ebp
08082c9f +0x2cc5:  mov    0x8(%ebp),%eax
08082ca2 +0x2cc8:  mov    0xc(%ebp),%edx
08082ca5 +0x2ccb:  mov    %edx,(%eax)
08082ca7 +0x2ccd:  mov    0x8(%ebp),%eax
08082caa +0x2cd0:  mov    0x10(%ebp),%edx
08082cad +0x2cd3:  mov    %edx,0x4(%eax)
08082cb0 +0x2cd6:  pop    %ebp
08082cb1 +0x2cd7:  ret
08082cb2 +0x2cd8:  push   %ebp
08082cb3 +0x2cd9:  mov    %esp,%ebp
08082cb5 +0x2cdb:  mov    0xc(%ebp),%eax
08082cb8 +0x2cde:  pop    %ebp
08082cb9 +0x2cdf:  ret
08082cba +0x2ce0:  push   %ebp
08082cbb +0x2ce1:  mov    %esp,%ebp
08082cbd +0x2ce3:  push   %ebx
08082cbe +0x2ce4:  sub    $0x24,%esp
08082cc1 +0x2ce7:  mov    0x8(%ebp),%ebx
08082cc4 +0x2cea:  mov    0x10(%ebp),%eax
08082cc7 +0x2ced:  mov    %eax,(%esp)
08082cca +0x2cf0:  call   08080fa6 <+0xfcc>
08082ccf +0x2cf5:  movzbl (%eax),%eax
08082cd2 +0x2cf8:  mov    %al,-0x9(%ebp)
08082cd5 +0x2cfb:  mov    0xc(%ebp),%eax
08082cd8 +0x2cfe:  mov    %eax,(%esp)
08082cdb +0x2d01:  call   0808342c <+0x3452>
08082ce0 +0x2d06:  lea    -0x9(%ebp),%edx
08082ce3 +0x2d09:  mov    %edx,0x8(%esp)
08082ce7 +0x2d0d:  mov    %eax,0x4(%esp)
08082ceb +0x2d11:  mov    %ebx,(%esp)
08082cee +0x2d14:  call   08083434 <+0x345a>
08082cf3 +0x2d19:  mov    %ebx,%eax
08082cf5 +0x2d1b:  add    $0x24,%esp
08082cf8 +0x2d1e:  pop    %ebx
08082cf9 +0x2d1f:  pop    %ebp
08082cfa +0x2d20:  ret    $0x4
08082cfd +0x2d23:  nop
08082cfe +0x2d24:  push   %ebp
08082cff +0x2d25:  mov    %esp,%ebp
08082d01 +0x2d27:  push   %esi
08082d02 +0x2d28:  push   %ebx
08082d03 +0x2d29:  sub    $0x30,%esp
08082d06 +0x2d2c:  mov    0x8(%ebp),%ebx
08082d09 +0x2d2f:  mov    0xc(%ebp),%eax
08082d0c +0x2d32:  mov    0x10(%eax),%ecx
08082d0f +0x2d35:  mov    0xc(%ebp),%eax
08082d12 +0x2d38:  mov    0xc(%eax),%edx
08082d15 +0x2d3b:  mov    0xc(%ebp),%eax
08082d18 +0x2d3e:  lea    0x14(%eax),%esi
08082d1b +0x2d41:  lea    -0x18(%ebp),%eax
08082d1e +0x2d44:  movl   $0x1,0x10(%esp)
08082d26 +0x2d4c:  mov    %ecx,0xc(%esp)
08082d2a +0x2d50:  mov    %edx,0x8(%esp)
08082d2e +0x2d54:  mov    %esi,0x4(%esp)
08082d32 +0x2d58:  mov    %eax,(%esp)
08082d35 +0x2d5b:  call   080800ac <+0xd2>
08082d3a +0x2d60:  sub    $0x4,%esp
08082d3d +0x2d63:  mov    0x10(%ebp),%eax
08082d40 +0x2d66:  mov    %eax,0x4(%esp)
08082d44 +0x2d6a:  mov    0xc(%ebp),%eax
08082d47 +0x2d6d:  mov    %eax,(%esp)
08082d4a +0x2d70:  call   08083468 <+0x348e>
08082d4f +0x2d75:  mov    %eax,-0x10(%ebp)
08082d52 +0x2d78:  movzbl -0x18(%ebp),%eax
08082d56 +0x2d7c:  test   %al,%al
08082d58 +0x2d7e:  je     08082da4 <+0x2dca>
08082d5a +0x2d80:  mov    0xc(%ebp),%eax
08082d5d +0x2d83:  mov    0x10(%ebp),%edx
08082d60 +0x2d86:  mov    %edx,0x4(%esp)
08082d64 +0x2d8a:  mov    %eax,(%esp)
08082d67 +0x2d8d:  call   08082cb2 <+0x2cd8>
08082d6c +0x2d92:  mov    %eax,-0xc(%ebp)
08082d6f +0x2d95:  mov    -0x14(%ebp),%edx
08082d72 +0x2d98:  mov    0xc(%ebp),%eax
08082d75 +0x2d9b:  mov    %edx,0xc(%esp)
08082d79 +0x2d9f:  mov    0x18(%ebp),%edx
08082d7c +0x2da2:  mov    %edx,0x8(%esp)
08082d80 +0x2da6:  mov    -0xc(%ebp),%edx
08082d83 +0x2da9:  mov    %edx,0x4(%esp)
08082d87 +0x2dad:  mov    %eax,(%esp)
08082d8a +0x2db0:  call   08082234 <+0x225a>
08082d8f +0x2db5:  mov    %eax,0x14(%ebp)
08082d92 +0x2db8:  mov    -0x14(%ebp),%eax
08082d95 +0x2dbb:  mov    %eax,0x4(%esp)
08082d99 +0x2dbf:  mov    0xc(%ebp),%eax
08082d9c +0x2dc2:  mov    %eax,(%esp)
08082d9f +0x2dc5:  call   08083500 <+0x3526>
08082da4 +0x2dca:  mov    0xc(%ebp),%eax
08082da7 +0x2dcd:  mov    0x8(%eax),%eax
08082daa +0x2dd0:  mov    0x14(%ebp),%edx
08082dad +0x2dd3:  shl    $0x2,%edx
08082db0 +0x2dd6:  add    %edx,%eax
08082db2 +0x2dd8:  mov    (%eax),%edx
08082db4 +0x2dda:  mov    -0x10(%ebp),%eax
08082db7 +0x2ddd:  mov    %edx,0xc(%eax)
08082dba +0x2de0:  mov    0xc(%ebp),%eax
08082dbd +0x2de3:  mov    0x18(%ebp),%edx
08082dc0 +0x2de6:  mov    %edx,0x8(%esp)
08082dc4 +0x2dea:  mov    -0x10(%ebp),%edx
08082dc7 +0x2ded:  mov    %edx,0x4(%esp)
08082dcb +0x2df1:  mov    %eax,(%esp)
08082dce +0x2df4:  call   080835dc <+0x3602>
08082dd3 +0x2df9:  mov    0xc(%ebp),%eax
08082dd6 +0x2dfc:  mov    0x8(%eax),%eax
08082dd9 +0x2dff:  mov    0x14(%ebp),%edx
08082ddc +0x2e02:  shl    $0x2,%edx
08082ddf +0x2e05:  lea    (%eax,%edx,1),%edx
08082de2 +0x2e08:  mov    -0x10(%ebp),%eax
08082de5 +0x2e0b:  mov    %eax,(%edx)
08082de7 +0x2e0d:  mov    0xc(%ebp),%eax
08082dea +0x2e10:  mov    0x10(%eax),%eax
08082ded +0x2e13:  lea    0x1(%eax),%edx
08082df0 +0x2e16:  mov    0xc(%ebp),%eax
08082df3 +0x2e19:  mov    %edx,0x10(%eax)
08082df6 +0x2e1c:  mov    0xc(%ebp),%eax
08082df9 +0x2e1f:  mov    0x8(%eax),%eax
08082dfc +0x2e22:  mov    0x14(%ebp),%edx
08082dff +0x2e25:  shl    $0x2,%edx
08082e02 +0x2e28:  add    %edx,%eax
08082e04 +0x2e2a:  mov    %eax,0x8(%esp)
08082e08 +0x2e2e:  mov    -0x10(%ebp),%eax
08082e0b +0x2e31:  mov    %eax,0x4(%esp)
08082e0f +0x2e35:  mov    %ebx,(%esp)
08082e12 +0x2e38:  call   080822a4 <+0x22ca>
08082e17 +0x2e3d:  mov    %ebx,%eax
08082e19 +0x2e3f:  lea    -0x8(%ebp),%esp
08082e1c +0x2e42:  add    $0x0,%esp
08082e1f +0x2e45:  pop    %ebx
08082e20 +0x2e46:  pop    %esi
08082e21 +0x2e47:  pop    %ebp
08082e22 +0x2e48:  ret    $0x4
08082e25 +0x2e4b:  mov    %eax,(%esp)
08082e28 +0x2e4e:  call   08725ce0 <__cxa_begin_catch>
08082e2d +0x2e53:  mov    -0x10(%ebp),%eax
08082e30 +0x2e56:  mov    %eax,0x4(%esp)
08082e34 +0x2e5a:  mov    0xc(%ebp),%eax
08082e37 +0x2e5d:  mov    %eax,(%esp)
08082e3a +0x2e60:  call   08082924 <+0x294a>
08082e3f +0x2e65:  call   08724be0 <__cxa_rethrow>
08082e44 +0x2e6a:  mov    %edx,%ebx
08082e46 +0x2e6c:  mov    %eax,%esi
08082e48 +0x2e6e:  call   08725c30 <__cxa_end_catch>
08082e4d +0x2e73:  mov    %esi,%eax
08082e4f +0x2e75:  mov    %ebx,%edx
08082e51 +0x2e77:  mov    %eax,(%esp)
08082e54 +0x2e7a:  call   08ae3750 <_Unwind_Resume>
08082e59 +0x2e7f:  nop
08082e5a +0x2e80:  push   %ebp
08082e5b +0x2e81:  mov    %esp,%ebp
08082e5d +0x2e83:  sub    $0x18,%esp
08082e60 +0x2e86:  mov    0x14(%ebp),%edx
08082e63 +0x2e89:  mov    0x8(%ebp),%eax
08082e66 +0x2e8c:  mov    %edx,0x4(%esp)
08082e6a +0x2e90:  mov    %eax,(%esp)
08082e6d +0x2e93:  call   080835e2 <+0x3608>
08082e72 +0x2e98:  mov    (%eax),%edx
08082e74 +0x2e9a:  mov    0xc(%ebp),%eax
08082e77 +0x2e9d:  mov    (%eax),%eax
08082e79 +0x2e9f:  mov    0x8(%ebp),%ecx
08082e7c +0x2ea2:  add    $0x1,%ecx
08082e7f +0x2ea5:  mov    %edx,0x8(%esp)
08082e83 +0x2ea9:  mov    %eax,0x4(%esp)
08082e87 +0x2ead:  mov    %ecx,(%esp)
08082e8a +0x2eb0:  call   080802ee <+0x314>
08082e8f +0x2eb5:  leave
08082e90 +0x2eb6:  ret
08082e91 +0x2eb7:  nop
08082e92 +0x2eb8:  push   %ebp
08082e93 +0x2eb9:  mov    %esp,%ebp
08082e95 +0x2ebb:  mov    0x8(%ebp),%eax
08082e98 +0x2ebe:  mov    0xc(%ebp),%edx
08082e9b +0x2ec1:  mov    %edx,(%eax)
08082e9d +0x2ec3:  mov    0x8(%ebp),%eax
08082ea0 +0x2ec6:  mov    0x10(%ebp),%edx
08082ea3 +0x2ec9:  mov    %edx,0x4(%eax)
08082ea6 +0x2ecc:  pop    %ebp
08082ea7 +0x2ecd:  ret
08082ea8 +0x2ece:  push   %ebp
08082ea9 +0x2ecf:  mov    %esp,%ebp
08082eab +0x2ed1:  mov    0xc(%ebp),%eax
08082eae +0x2ed4:  pop    %ebp
08082eaf +0x2ed5:  ret
08082eb0 +0x2ed6:  push   %ebp
08082eb1 +0x2ed7:  mov    %esp,%ebp
08082eb3 +0x2ed9:  push   %ebx
08082eb4 +0x2eda:  sub    $0x24,%esp
08082eb7 +0x2edd:  mov    0x8(%ebp),%ebx
08082eba +0x2ee0:  mov    0x10(%ebp),%eax
08082ebd +0x2ee3:  mov    %eax,(%esp)
08082ec0 +0x2ee6:  call   08080fa6 <+0xfcc>
08082ec5 +0x2eeb:  movzbl (%eax),%eax
08082ec8 +0x2eee:  mov    %al,-0x9(%ebp)
08082ecb +0x2ef1:  mov    0xc(%ebp),%eax
08082ece +0x2ef4:  mov    %eax,(%esp)
08082ed1 +0x2ef7:  call   080835ea <+0x3610>
08082ed6 +0x2efc:  lea    -0x9(%ebp),%edx
08082ed9 +0x2eff:  mov    %edx,0x8(%esp)
08082edd +0x2f03:  mov    %eax,0x4(%esp)
08082ee1 +0x2f07:  mov    %ebx,(%esp)
08082ee4 +0x2f0a:  call   080835f2 <+0x3618>
08082ee9 +0x2f0f:  mov    %ebx,%eax
08082eeb +0x2f11:  add    $0x24,%esp
08082eee +0x2f14:  pop    %ebx
08082eef +0x2f15:  pop    %ebp
08082ef0 +0x2f16:  ret    $0x4
08082ef3 +0x2f19:  nop
08082ef4 +0x2f1a:  push   %ebp
08082ef5 +0x2f1b:  mov    %esp,%ebp
08082ef7 +0x2f1d:  push   %esi
08082ef8 +0x2f1e:  push   %ebx
08082ef9 +0x2f1f:  sub    $0x30,%esp
08082efc +0x2f22:  mov    0x8(%ebp),%ebx
08082eff +0x2f25:  mov    0xc(%ebp),%eax
08082f02 +0x2f28:  mov    0x10(%eax),%ecx
08082f05 +0x2f2b:  mov    0xc(%ebp),%eax
08082f08 +0x2f2e:  mov    0xc(%eax),%edx
08082f0b +0x2f31:  mov    0xc(%ebp),%eax
08082f0e +0x2f34:  lea    0x14(%eax),%esi
08082f11 +0x2f37:  lea    -0x18(%ebp),%eax
08082f14 +0x2f3a:  movl   $0x1,0x10(%esp)
08082f1c +0x2f42:  mov    %ecx,0xc(%esp)
08082f20 +0x2f46:  mov    %edx,0x8(%esp)
08082f24 +0x2f4a:  mov    %esi,0x4(%esp)
08082f28 +0x2f4e:  mov    %eax,(%esp)
08082f2b +0x2f51:  call   080800ac <+0xd2>
08082f30 +0x2f56:  sub    $0x4,%esp
08082f33 +0x2f59:  mov    0x10(%ebp),%eax
08082f36 +0x2f5c:  mov    %eax,0x4(%esp)
08082f3a +0x2f60:  mov    0xc(%ebp),%eax
08082f3d +0x2f63:  mov    %eax,(%esp)
08082f40 +0x2f66:  call   08083626 <+0x364c>
08082f45 +0x2f6b:  mov    %eax,-0x10(%ebp)
08082f48 +0x2f6e:  movzbl -0x18(%ebp),%eax
08082f4c +0x2f72:  test   %al,%al
08082f4e +0x2f74:  je     08082f9a <+0x2fc0>
08082f50 +0x2f76:  mov    0xc(%ebp),%eax
08082f53 +0x2f79:  mov    0x10(%ebp),%edx
08082f56 +0x2f7c:  mov    %edx,0x4(%esp)
08082f5a +0x2f80:  mov    %eax,(%esp)
08082f5d +0x2f83:  call   08082ea8 <+0x2ece>
08082f62 +0x2f88:  mov    %eax,-0xc(%ebp)
08082f65 +0x2f8b:  mov    -0x14(%ebp),%edx
08082f68 +0x2f8e:  mov    0xc(%ebp),%eax
08082f6b +0x2f91:  mov    %edx,0xc(%esp)
08082f6f +0x2f95:  mov    0x18(%ebp),%edx
08082f72 +0x2f98:  mov    %edx,0x8(%esp)
08082f76 +0x2f9c:  mov    -0xc(%ebp),%edx
08082f79 +0x2f9f:  mov    %edx,0x4(%esp)
08082f7d +0x2fa3:  mov    %eax,(%esp)
08082f80 +0x2fa6:  call   08082472 <+0x2498>
08082f85 +0x2fab:  mov    %eax,0x14(%ebp)
08082f88 +0x2fae:  mov    -0x14(%ebp),%eax
08082f8b +0x2fb1:  mov    %eax,0x4(%esp)
08082f8f +0x2fb5:  mov    0xc(%ebp),%eax
08082f92 +0x2fb8:  mov    %eax,(%esp)
08082f95 +0x2fbb:  call   080836be <+0x36e4>
08082f9a +0x2fc0:  mov    0xc(%ebp),%eax
08082f9d +0x2fc3:  mov    0x8(%eax),%eax
08082fa0 +0x2fc6:  mov    0x14(%ebp),%edx
08082fa3 +0x2fc9:  shl    $0x2,%edx
08082fa6 +0x2fcc:  add    %edx,%eax
08082fa8 +0x2fce:  mov    (%eax),%edx
08082faa +0x2fd0:  mov    -0x10(%ebp),%eax
08082fad +0x2fd3:  mov    %edx,0xc(%eax)
08082fb0 +0x2fd6:  mov    0xc(%ebp),%eax
08082fb3 +0x2fd9:  mov    0x18(%ebp),%edx
08082fb6 +0x2fdc:  mov    %edx,0x8(%esp)
08082fba +0x2fe0:  mov    -0x10(%ebp),%edx
08082fbd +0x2fe3:  mov    %edx,0x4(%esp)
08082fc1 +0x2fe7:  mov    %eax,(%esp)
08082fc4 +0x2fea:  call   0808379a <+0x37c0>
08082fc9 +0x2fef:  mov    0xc(%ebp),%eax
08082fcc +0x2ff2:  mov    0x8(%eax),%eax
08082fcf +0x2ff5:  mov    0x14(%ebp),%edx
08082fd2 +0x2ff8:  shl    $0x2,%edx
08082fd5 +0x2ffb:  lea    (%eax,%edx,1),%edx
08082fd8 +0x2ffe:  mov    -0x10(%ebp),%eax
08082fdb +0x3001:  mov    %eax,(%edx)
08082fdd +0x3003:  mov    0xc(%ebp),%eax
08082fe0 +0x3006:  mov    0x10(%eax),%eax
08082fe3 +0x3009:  lea    0x1(%eax),%edx
08082fe6 +0x300c:  mov    0xc(%ebp),%eax
08082fe9 +0x300f:  mov    %edx,0x10(%eax)
08082fec +0x3012:  mov    0xc(%ebp),%eax
08082fef +0x3015:  mov    0x8(%eax),%eax
08082ff2 +0x3018:  mov    0x14(%ebp),%edx
08082ff5 +0x301b:  shl    $0x2,%edx
08082ff8 +0x301e:  add    %edx,%eax
08082ffa +0x3020:  mov    %eax,0x8(%esp)
08082ffe +0x3024:  mov    -0x10(%ebp),%eax
08083001 +0x3027:  mov    %eax,0x4(%esp)
08083005 +0x302b:  mov    %ebx,(%esp)
08083008 +0x302e:  call   080824e2 <+0x2508>
0808300d +0x3033:  mov    %ebx,%eax
0808300f +0x3035:  lea    -0x8(%ebp),%esp
08083012 +0x3038:  add    $0x0,%esp
08083015 +0x303b:  pop    %ebx
08083016 +0x303c:  pop    %esi
08083017 +0x303d:  pop    %ebp
08083018 +0x303e:  ret    $0x4
0808301b +0x3041:  mov    %eax,(%esp)
0808301e +0x3044:  call   08725ce0 <__cxa_begin_catch>
08083023 +0x3049:  mov    -0x10(%ebp),%eax
08083026 +0x304c:  mov    %eax,0x4(%esp)
0808302a +0x3050:  mov    0xc(%ebp),%eax
0808302d +0x3053:  mov    %eax,(%esp)
08083030 +0x3056:  call   08082a28 <+0x2a4e>
08083035 +0x305b:  call   08724be0 <__cxa_rethrow>
0808303a +0x3060:  mov    %edx,%ebx
0808303c +0x3062:  mov    %eax,%esi
0808303e +0x3064:  call   08725c30 <__cxa_end_catch>
08083043 +0x3069:  mov    %esi,%eax
08083045 +0x306b:  mov    %ebx,%edx
08083047 +0x306d:  mov    %eax,(%esp)
0808304a +0x3070:  call   08ae3750 <_Unwind_Resume>
0808304f +0x3075:  nop
08083050 +0x3076:  push   %ebp
08083051 +0x3077:  mov    %esp,%ebp
08083053 +0x3079:  pop    %ebp
08083054 +0x307a:  ret
08083055 +0x307b:  nop
08083056 +0x307c:  push   %ebp
08083057 +0x307d:  mov    %esp,%ebp
08083059 +0x307f:  sub    $0x18,%esp
0808305c +0x3082:  mov    0x8(%ebp),%eax
0808305f +0x3085:  mov    %eax,(%esp)
08083062 +0x3088:  call   080837a0 <+0x37c6>
08083067 +0x308d:  cmp    0xc(%ebp),%eax
0808306a +0x3090:  setb   %al
0808306d +0x3093:  movzbl %al,%eax
08083070 +0x3096:  test   %eax,%eax
08083072 +0x3098:  setne  %al
08083075 +0x309b:  test   %al,%al
08083077 +0x309d:  je     0808307e <+0x30a4>
08083079 +0x309f:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0808307e +0x30a4:  mov    0xc(%ebp),%eax
08083081 +0x30a7:  shl    $0x2,%eax
08083084 +0x30aa:  mov    %eax,(%esp)
08083087 +0x30ad:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0808308c +0x30b2:  leave
0808308d +0x30b3:  ret
0808308e +0x30b4:  push   %ebp
0808308f +0x30b5:  mov    %esp,%ebp
08083091 +0x30b7:  push   %ebx
08083092 +0x30b8:  sub    $0x14,%esp
08083095 +0x30bb:  mov    0xc(%ebp),%eax
08083098 +0x30be:  mov    %eax,(%esp)
0808309b +0x30c1:  call   080837aa <+0x37d0>
080830a0 +0x30c6:  mov    %eax,%ebx
080830a2 +0x30c8:  mov    0x8(%ebp),%eax
080830a5 +0x30cb:  mov    %eax,(%esp)
080830a8 +0x30ce:  call   080837aa <+0x37d0>
080830ad +0x30d3:  mov    0x10(%ebp),%edx
080830b0 +0x30d6:  mov    %edx,0x8(%esp)
080830b4 +0x30da:  mov    %ebx,0x4(%esp)
080830b8 +0x30de:  mov    %eax,(%esp)
080830bb +0x30e1:  call   080837b2 <+0x37d8>
080830c0 +0x30e6:  add    $0x14,%esp
080830c3 +0x30e9:  pop    %ebx
080830c4 +0x30ea:  pop    %ebp
080830c5 +0x30eb:  ret
080830c6 +0x30ec:  push   %ebp
080830c7 +0x30ed:  mov    %esp,%ebp
080830c9 +0x30ef:  sub    $0x18,%esp
080830cc +0x30f2:  mov    0x8(%ebp),%eax
080830cf +0x30f5:  mov    %eax,(%esp)
080830d2 +0x30f8:  call   080809e8 <+0xa0e>
080830d7 +0x30fd:  leave
080830d8 +0x30fe:  ret
080830d9 +0x30ff:  nop
080830da +0x3100:  push   %ebp
080830db +0x3101:  mov    %esp,%ebp
080830dd +0x3103:  sub    $0x18,%esp
080830e0 +0x3106:  mov    0xc(%ebp),%eax
080830e3 +0x3109:  mov    %eax,(%esp)
080830e6 +0x310c:  call   080830c6 <+0x30ec>
080830eb +0x3111:  leave
080830ec +0x3112:  ret
080830ed +0x3113:  nop
080830ee +0x3114:  push   %ebp
080830ef +0x3115:  mov    %esp,%ebp
080830f1 +0x3117:  sub    $0x18,%esp
080830f4 +0x311a:  mov    0xc(%ebp),%eax
080830f7 +0x311d:  mov    %eax,(%esp)
080830fa +0x3120:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080830ff +0x3125:  leave
08083100 +0x3126:  ret
08083101 +0x3127:  nop
08083102 +0x3128:  push   %ebp
08083103 +0x3129:  mov    %esp,%ebp
08083105 +0x312b:  pop    %ebp
08083106 +0x312c:  ret
08083107 +0x312d:  nop
08083108 +0x312e:  push   %ebp
08083109 +0x312f:  mov    %esp,%ebp
0808310b +0x3131:  sub    $0x18,%esp
0808310e +0x3134:  mov    0x8(%ebp),%eax
08083111 +0x3137:  mov    %eax,(%esp)
08083114 +0x313a:  call   080837de <+0x3804>
08083119 +0x313f:  cmp    0xc(%ebp),%eax
0808311c +0x3142:  setb   %al
0808311f +0x3145:  movzbl %al,%eax
08083122 +0x3148:  test   %eax,%eax
08083124 +0x314a:  setne  %al
08083127 +0x314d:  test   %al,%al
08083129 +0x314f:  je     08083130 <+0x3156>
0808312b +0x3151:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08083130 +0x3156:  mov    0xc(%ebp),%eax
08083133 +0x3159:  shl    $0x2,%eax
08083136 +0x315c:  mov    %eax,(%esp)
08083139 +0x315f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0808313e +0x3164:  leave
0808313f +0x3165:  ret
08083140 +0x3166:  push   %ebp
08083141 +0x3167:  mov    %esp,%ebp
08083143 +0x3169:  push   %ebx
08083144 +0x316a:  sub    $0x14,%esp
08083147 +0x316d:  mov    0xc(%ebp),%eax
0808314a +0x3170:  mov    %eax,(%esp)
0808314d +0x3173:  call   080837e8 <+0x380e>
08083152 +0x3178:  mov    %eax,%ebx
08083154 +0x317a:  mov    0x8(%ebp),%eax
08083157 +0x317d:  mov    %eax,(%esp)
0808315a +0x3180:  call   080837e8 <+0x380e>
0808315f +0x3185:  mov    0x10(%ebp),%edx
08083162 +0x3188:  mov    %edx,0x8(%esp)
08083166 +0x318c:  mov    %ebx,0x4(%esp)
0808316a +0x3190:  mov    %eax,(%esp)
0808316d +0x3193:  call   080837f0 <+0x3816>
08083172 +0x3198:  add    $0x14,%esp
08083175 +0x319b:  pop    %ebx
08083176 +0x319c:  pop    %ebp
08083177 +0x319d:  ret
08083178 +0x319e:  push   %ebp
08083179 +0x319f:  mov    %esp,%ebp
0808317b +0x31a1:  sub    $0x18,%esp
0808317e +0x31a4:  mov    0x8(%ebp),%eax
08083181 +0x31a7:  mov    %eax,(%esp)
08083184 +0x31aa:  call   08080b56 <+0xb7c>
08083189 +0x31af:  leave
0808318a +0x31b0:  ret
0808318b +0x31b1:  nop
0808318c +0x31b2:  push   %ebp
0808318d +0x31b3:  mov    %esp,%ebp
0808318f +0x31b5:  sub    $0x18,%esp
08083192 +0x31b8:  mov    0xc(%ebp),%eax
08083195 +0x31bb:  mov    %eax,(%esp)
08083198 +0x31be:  call   08083178 <+0x319e>
0808319d +0x31c3:  leave
0808319e +0x31c4:  ret
0808319f +0x31c5:  nop
080831a0 +0x31c6:  push   %ebp
080831a1 +0x31c7:  mov    %esp,%ebp
080831a3 +0x31c9:  sub    $0x18,%esp
080831a6 +0x31cc:  mov    0xc(%ebp),%eax
080831a9 +0x31cf:  mov    %eax,(%esp)
080831ac +0x31d2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080831b1 +0x31d7:  leave
080831b2 +0x31d8:  ret
080831b3 +0x31d9:  nop
080831b4 +0x31da:  push   %ebp
080831b5 +0x31db:  mov    %esp,%ebp
080831b7 +0x31dd:  pop    %ebp
080831b8 +0x31de:  ret
080831b9 +0x31df:  nop
080831ba +0x31e0:  push   %ebp
080831bb +0x31e1:  mov    %esp,%ebp
080831bd +0x31e3:  sub    $0x18,%esp
080831c0 +0x31e6:  mov    0x8(%ebp),%eax
080831c3 +0x31e9:  mov    %eax,(%esp)
080831c6 +0x31ec:  call   0808381c <+0x3842>
080831cb +0x31f1:  cmp    0xc(%ebp),%eax
080831ce +0x31f4:  setb   %al
080831d1 +0x31f7:  movzbl %al,%eax
080831d4 +0x31fa:  test   %eax,%eax
080831d6 +0x31fc:  setne  %al
080831d9 +0x31ff:  test   %al,%al
080831db +0x3201:  je     080831e2 <+0x3208>
080831dd +0x3203:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
080831e2 +0x3208:  mov    0xc(%ebp),%eax
080831e5 +0x320b:  shl    $0x2,%eax
080831e8 +0x320e:  mov    %eax,(%esp)
080831eb +0x3211:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080831f0 +0x3216:  leave
080831f1 +0x3217:  ret
080831f2 +0x3218:  push   %ebp
080831f3 +0x3219:  mov    %esp,%ebp
080831f5 +0x321b:  push   %ebx
080831f6 +0x321c:  sub    $0x14,%esp
080831f9 +0x321f:  mov    0xc(%ebp),%eax
080831fc +0x3222:  mov    %eax,(%esp)
080831ff +0x3225:  call   08083826 <+0x384c>
08083204 +0x322a:  mov    %eax,%ebx
08083206 +0x322c:  mov    0x8(%ebp),%eax
08083209 +0x322f:  mov    %eax,(%esp)
0808320c +0x3232:  call   08083826 <+0x384c>
08083211 +0x3237:  mov    0x10(%ebp),%edx
08083214 +0x323a:  mov    %edx,0x8(%esp)
08083218 +0x323e:  mov    %ebx,0x4(%esp)
0808321c +0x3242:  mov    %eax,(%esp)
0808321f +0x3245:  call   0808382e <+0x3854>
08083224 +0x324a:  add    $0x14,%esp
08083227 +0x324d:  pop    %ebx
08083228 +0x324e:  pop    %ebp
08083229 +0x324f:  ret
0808322a +0x3250:  push   %ebp
0808322b +0x3251:  mov    %esp,%ebp
0808322d +0x3253:  sub    $0x18,%esp
08083230 +0x3256:  mov    0x8(%ebp),%eax
08083233 +0x3259:  mov    %eax,(%esp)
08083236 +0x325c:  call   08080d28 <+0xd4e>
0808323b +0x3261:  leave
0808323c +0x3262:  ret
0808323d +0x3263:  nop
0808323e +0x3264:  push   %ebp
0808323f +0x3265:  mov    %esp,%ebp
08083241 +0x3267:  sub    $0x18,%esp
08083244 +0x326a:  mov    0xc(%ebp),%eax
08083247 +0x326d:  mov    %eax,(%esp)
0808324a +0x3270:  call   0808322a <+0x3250>
0808324f +0x3275:  leave
08083250 +0x3276:  ret
08083251 +0x3277:  nop
08083252 +0x3278:  push   %ebp
08083253 +0x3279:  mov    %esp,%ebp
08083255 +0x327b:  sub    $0x18,%esp
08083258 +0x327e:  mov    0xc(%ebp),%eax
0808325b +0x3281:  mov    %eax,(%esp)
0808325e +0x3284:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08083263 +0x3289:  leave
08083264 +0x328a:  ret
08083265 +0x328b:  nop
08083266 +0x328c:  push   %ebp
08083267 +0x328d:  mov    %esp,%ebp
08083269 +0x328f:  mov    0xc(%ebp),%eax
0808326c +0x3292:  pop    %ebp
0808326d +0x3293:  ret
0808326e +0x3294:  push   %ebp
0808326f +0x3295:  mov    %esp,%ebp
08083271 +0x3297:  mov    0x8(%ebp),%eax
08083274 +0x329a:  pop    %ebp
08083275 +0x329b:  ret
08083276 +0x329c:  push   %ebp
08083277 +0x329d:  mov    %esp,%ebp
08083279 +0x329f:  sub    $0x18,%esp
0808327c +0x32a2:  mov    0xc(%ebp),%eax
0808327f +0x32a5:  mov    %eax,(%esp)
08083282 +0x32a8:  call   0808326e <+0x3294>
08083287 +0x32ad:  mov    0x8(%ebp),%ecx
0808328a +0x32b0:  mov    0x4(%eax),%edx
0808328d +0x32b3:  mov    (%eax),%eax
0808328f +0x32b5:  mov    %eax,(%ecx)
08083291 +0x32b7:  mov    %edx,0x4(%ecx)
08083294 +0x32ba:  mov    0x10(%ebp),%eax
08083297 +0x32bd:  mov    %eax,(%esp)
0808329a +0x32c0:  call   08080fa6 <+0xfcc>
0808329f +0x32c5:  movzbl (%eax),%edx
080832a2 +0x32c8:  mov    0x8(%ebp),%eax
080832a5 +0x32cb:  mov    %dl,0x8(%eax)
080832a8 +0x32ce:  leave
080832a9 +0x32cf:  ret
080832aa +0x32d0:  push   %ebp
080832ab +0x32d1:  mov    %esp,%ebp
080832ad +0x32d3:  push   %esi
080832ae +0x32d4:  push   %ebx
080832af +0x32d5:  sub    $0x20,%esp
080832b2 +0x32d8:  mov    0x8(%ebp),%eax
080832b5 +0x32db:  add    $0x4,%eax
080832b8 +0x32de:  movl   $0x0,0x8(%esp)
080832c0 +0x32e6:  movl   $0x1,0x4(%esp)
080832c8 +0x32ee:  mov    %eax,(%esp)
080832cb +0x32f1:  call   0808385a <+0x3880>
080832d0 +0x32f6:  mov    %eax,-0xc(%ebp)
080832d3 +0x32f9:  mov    0x8(%ebp),%eax
080832d6 +0x32fc:  add    $0x4,%eax
080832d9 +0x32ff:  mov    0xc(%ebp),%edx
080832dc +0x3302:  mov    %edx,0x8(%esp)
080832e0 +0x3306:  mov    -0xc(%ebp),%edx
080832e3 +0x3309:  mov    %edx,0x4(%esp)
080832e7 +0x330d:  mov    %eax,(%esp)
080832ea +0x3310:  call   08083892 <+0x38b8>
080832ef +0x3315:  mov    -0xc(%ebp),%eax
080832f2 +0x3318:  movl   $0x0,0xc(%eax)
080832f9 +0x331f:  mov    -0xc(%ebp),%eax
080832fc +0x3322:  add    $0x20,%esp
080832ff +0x3325:  pop    %ebx
08083300 +0x3326:  pop    %esi
08083301 +0x3327:  pop    %ebp
08083302 +0x3328:  ret
08083303 +0x3329:  mov    %eax,(%esp)
08083306 +0x332c:  call   08725ce0 <__cxa_begin_catch>
0808330b +0x3331:  mov    0x8(%ebp),%eax
0808330e +0x3334:  add    $0x4,%eax
08083311 +0x3337:  movl   $0x1,0x8(%esp)
08083319 +0x333f:  mov    -0xc(%ebp),%edx
0808331c +0x3342:  mov    %edx,0x4(%esp)
08083320 +0x3346:  mov    %eax,(%esp)
08083323 +0x3349:  call   080830ee <+0x3114>
08083328 +0x334e:  call   08724be0 <__cxa_rethrow>
0808332d +0x3353:  mov    %edx,%ebx
0808332f +0x3355:  mov    %eax,%esi
08083331 +0x3357:  call   08725c30 <__cxa_end_catch>
08083336 +0x335c:  mov    %esi,%eax
08083338 +0x335e:  mov    %ebx,%edx
0808333a +0x3360:  mov    %eax,(%esp)
0808333d +0x3363:  call   08ae3750 <_Unwind_Resume>
08083342 +0x3368:  push   %ebp
08083343 +0x3369:  mov    %esp,%ebp
08083345 +0x336b:  sub    $0x28,%esp
08083348 +0x336e:  mov    0xc(%ebp),%eax
0808334b +0x3371:  mov    %eax,0x4(%esp)
0808334f +0x3375:  mov    0x8(%ebp),%eax
08083352 +0x3378:  mov    %eax,(%esp)
08083355 +0x337b:  call   0808277c <+0x27a2>
0808335a +0x3380:  mov    %eax,-0x18(%ebp)
0808335d +0x3383:  movl   $0x0,-0x14(%ebp)
08083364 +0x338a:  jmp    080833d7 <+0x33fd>
08083366 +0x338c:  mov    0x8(%ebp),%eax
08083369 +0x338f:  mov    0x8(%eax),%eax
0808336c +0x3392:  mov    -0x14(%ebp),%edx
0808336f +0x3395:  shl    $0x2,%edx
08083372 +0x3398:  add    %edx,%eax
08083374 +0x339a:  mov    (%eax),%eax
08083376 +0x339c:  mov    %eax,-0x10(%ebp)
08083379 +0x339f:  cmpl   $0x0,-0x10(%ebp)
0808337d +0x33a3:  je     080833d3 <+0x33f9>
0808337f +0x33a5:  mov    0x8(%ebp),%eax
08083382 +0x33a8:  mov    0xc(%ebp),%edx
08083385 +0x33ab:  mov    %edx,0x8(%esp)
08083389 +0x33af:  mov    -0x10(%ebp),%edx
0808338c +0x33b2:  mov    %edx,0x4(%esp)
08083390 +0x33b6:  mov    %eax,(%esp)
08083393 +0x33b9:  call   080838fa <+0x3920>
08083398 +0x33be:  mov    %eax,-0xc(%ebp)
0808339b +0x33c1:  mov    0x8(%ebp),%eax
0808339e +0x33c4:  mov    0x8(%eax),%eax
080833a1 +0x33c7:  mov    -0x14(%ebp),%edx
080833a4 +0x33ca:  shl    $0x2,%edx
080833a7 +0x33cd:  lea    (%eax,%edx,1),%edx
080833aa +0x33d0:  mov    -0x10(%ebp),%eax
080833ad +0x33d3:  mov    0xc(%eax),%eax
080833b0 +0x33d6:  mov    %eax,(%edx)
080833b2 +0x33d8:  mov    -0xc(%ebp),%eax
080833b5 +0x33db:  shl    $0x2,%eax
080833b8 +0x33de:  add    -0x18(%ebp),%eax
080833bb +0x33e1:  mov    (%eax),%edx
080833bd +0x33e3:  mov    -0x10(%ebp),%eax
080833c0 +0x33e6:  mov    %edx,0xc(%eax)
080833c3 +0x33e9:  mov    -0xc(%ebp),%eax
080833c6 +0x33ec:  shl    $0x2,%eax
080833c9 +0x33ef:  add    -0x18(%ebp),%eax
080833cc +0x33f2:  mov    -0x10(%ebp),%edx
080833cf +0x33f5:  mov    %edx,(%eax)
080833d1 +0x33f7:  jmp    08083366 <+0x338c>
080833d3 +0x33f9:  addl   $0x1,-0x14(%ebp)
080833d7 +0x33fd:  mov    0x8(%ebp),%eax
080833da +0x3400:  mov    0xc(%eax),%eax
080833dd +0x3403:  cmp    -0x14(%ebp),%eax
080833e0 +0x3406:  seta   %al
080833e3 +0x3409:  test   %al,%al
080833e5 +0x340b:  jne    08083366 <+0x338c>
080833eb +0x3411:  mov    0x8(%ebp),%eax
080833ee +0x3414:  mov    0xc(%eax),%edx
080833f1 +0x3417:  mov    0x8(%ebp),%eax
080833f4 +0x341a:  mov    0x8(%eax),%eax
080833f7 +0x341d:  mov    %edx,0x8(%esp)
080833fb +0x3421:  mov    %eax,0x4(%esp)
080833ff +0x3425:  mov    0x8(%ebp),%eax
08083402 +0x3428:  mov    %eax,(%esp)
08083405 +0x342b:  call   080810c8 <+0x10ee>
0808340a +0x3430:  mov    0x8(%ebp),%eax
0808340d +0x3433:  mov    0xc(%ebp),%edx
08083410 +0x3436:  mov    %edx,0xc(%eax)
08083413 +0x3439:  mov    0x8(%ebp),%eax
08083416 +0x343c:  mov    -0x18(%ebp),%edx
08083419 +0x343f:  mov    %edx,0x8(%eax)
0808341c +0x3442:  leave
0808341d +0x3443:  ret
0808341e +0x3444:  push   %ebp
0808341f +0x3445:  mov    %esp,%ebp
08083421 +0x3447:  pop    %ebp
08083422 +0x3448:  ret
08083423 +0x3449:  nop
08083424 +0x344a:  push   %ebp
08083425 +0x344b:  mov    %esp,%ebp
08083427 +0x344d:  mov    0xc(%ebp),%eax
0808342a +0x3450:  pop    %ebp
0808342b +0x3451:  ret
0808342c +0x3452:  push   %ebp
0808342d +0x3453:  mov    %esp,%ebp
0808342f +0x3455:  mov    0x8(%ebp),%eax
08083432 +0x3458:  pop    %ebp
08083433 +0x3459:  ret
08083434 +0x345a:  push   %ebp
08083435 +0x345b:  mov    %esp,%ebp
08083437 +0x345d:  sub    $0x18,%esp
0808343a +0x3460:  mov    0xc(%ebp),%eax
0808343d +0x3463:  mov    %eax,(%esp)
08083440 +0x3466:  call   0808342c <+0x3452>
08083445 +0x346b:  mov    0x8(%ebp),%ecx
08083448 +0x346e:  mov    0x4(%eax),%edx
0808344b +0x3471:  mov    (%eax),%eax
0808344d +0x3473:  mov    %eax,(%ecx)
0808344f +0x3475:  mov    %edx,0x4(%ecx)
08083452 +0x3478:  mov    0x10(%ebp),%eax
08083455 +0x347b:  mov    %eax,(%esp)
08083458 +0x347e:  call   08080fa6 <+0xfcc>
0808345d +0x3483:  movzbl (%eax),%edx
08083460 +0x3486:  mov    0x8(%ebp),%eax
08083463 +0x3489:  mov    %dl,0x8(%eax)
08083466 +0x348c:  leave
08083467 +0x348d:  ret
08083468 +0x348e:  push   %ebp
08083469 +0x348f:  mov    %esp,%ebp
0808346b +0x3491:  push   %esi
0808346c +0x3492:  push   %ebx
0808346d +0x3493:  sub    $0x20,%esp
08083470 +0x3496:  mov    0x8(%ebp),%eax
08083473 +0x3499:  add    $0x4,%eax
08083476 +0x349c:  movl   $0x0,0x8(%esp)
0808347e +0x34a4:  movl   $0x1,0x4(%esp)
08083486 +0x34ac:  mov    %eax,(%esp)
08083489 +0x34af:  call   08083942 <+0x3968>
0808348e +0x34b4:  mov    %eax,-0xc(%ebp)
08083491 +0x34b7:  mov    0x8(%ebp),%eax
08083494 +0x34ba:  add    $0x4,%eax
08083497 +0x34bd:  mov    0xc(%ebp),%edx
0808349a +0x34c0:  mov    %edx,0x8(%esp)
0808349e +0x34c4:  mov    -0xc(%ebp),%edx
080834a1 +0x34c7:  mov    %edx,0x4(%esp)
080834a5 +0x34cb:  mov    %eax,(%esp)
080834a8 +0x34ce:  call   0808397a <+0x39a0>
080834ad +0x34d3:  mov    -0xc(%ebp),%eax
080834b0 +0x34d6:  movl   $0x0,0xc(%eax)
080834b7 +0x34dd:  mov    -0xc(%ebp),%eax
080834ba +0x34e0:  add    $0x20,%esp
080834bd +0x34e3:  pop    %ebx
080834be +0x34e4:  pop    %esi
080834bf +0x34e5:  pop    %ebp
080834c0 +0x34e6:  ret
080834c1 +0x34e7:  mov    %eax,(%esp)
080834c4 +0x34ea:  call   08725ce0 <__cxa_begin_catch>
080834c9 +0x34ef:  mov    0x8(%ebp),%eax
080834cc +0x34f2:  add    $0x4,%eax
080834cf +0x34f5:  movl   $0x1,0x8(%esp)
080834d7 +0x34fd:  mov    -0xc(%ebp),%edx
080834da +0x3500:  mov    %edx,0x4(%esp)
080834de +0x3504:  mov    %eax,(%esp)
080834e1 +0x3507:  call   080831a0 <+0x31c6>
080834e6 +0x350c:  call   08724be0 <__cxa_rethrow>
080834eb +0x3511:  mov    %edx,%ebx
080834ed +0x3513:  mov    %eax,%esi
080834ef +0x3515:  call   08725c30 <__cxa_end_catch>
080834f4 +0x351a:  mov    %esi,%eax
080834f6 +0x351c:  mov    %ebx,%edx
080834f8 +0x351e:  mov    %eax,(%esp)
080834fb +0x3521:  call   08ae3750 <_Unwind_Resume>
08083500 +0x3526:  push   %ebp
08083501 +0x3527:  mov    %esp,%ebp
08083503 +0x3529:  sub    $0x28,%esp
08083506 +0x352c:  mov    0xc(%ebp),%eax
08083509 +0x352f:  mov    %eax,0x4(%esp)
0808350d +0x3533:  mov    0x8(%ebp),%eax
08083510 +0x3536:  mov    %eax,(%esp)
08083513 +0x3539:  call   08082880 <+0x28a6>
08083518 +0x353e:  mov    %eax,-0x18(%ebp)
0808351b +0x3541:  movl   $0x0,-0x14(%ebp)
08083522 +0x3548:  jmp    08083595 <+0x35bb>
08083524 +0x354a:  mov    0x8(%ebp),%eax
08083527 +0x354d:  mov    0x8(%eax),%eax
0808352a +0x3550:  mov    -0x14(%ebp),%edx
0808352d +0x3553:  shl    $0x2,%edx
08083530 +0x3556:  add    %edx,%eax
08083532 +0x3558:  mov    (%eax),%eax
08083534 +0x355a:  mov    %eax,-0x10(%ebp)
08083537 +0x355d:  cmpl   $0x0,-0x10(%ebp)
0808353b +0x3561:  je     08083591 <+0x35b7>
0808353d +0x3563:  mov    0x8(%ebp),%eax
08083540 +0x3566:  mov    0xc(%ebp),%edx
08083543 +0x3569:  mov    %edx,0x8(%esp)
08083547 +0x356d:  mov    -0x10(%ebp),%edx
0808354a +0x3570:  mov    %edx,0x4(%esp)
0808354e +0x3574:  mov    %eax,(%esp)
08083551 +0x3577:  call   080839e2 <+0x3a08>
08083556 +0x357c:  mov    %eax,-0xc(%ebp)
08083559 +0x357f:  mov    0x8(%ebp),%eax
0808355c +0x3582:  mov    0x8(%eax),%eax
0808355f +0x3585:  mov    -0x14(%ebp),%edx
08083562 +0x3588:  shl    $0x2,%edx
08083565 +0x358b:  lea    (%eax,%edx,1),%edx
08083568 +0x358e:  mov    -0x10(%ebp),%eax
0808356b +0x3591:  mov    0xc(%eax),%eax
0808356e +0x3594:  mov    %eax,(%edx)
08083570 +0x3596:  mov    -0xc(%ebp),%eax
08083573 +0x3599:  shl    $0x2,%eax
08083576 +0x359c:  add    -0x18(%ebp),%eax
08083579 +0x359f:  mov    (%eax),%edx
0808357b +0x35a1:  mov    -0x10(%ebp),%eax
0808357e +0x35a4:  mov    %edx,0xc(%eax)
08083581 +0x35a7:  mov    -0xc(%ebp),%eax
08083584 +0x35aa:  shl    $0x2,%eax
08083587 +0x35ad:  add    -0x18(%ebp),%eax
0808358a +0x35b0:  mov    -0x10(%ebp),%edx
0808358d +0x35b3:  mov    %edx,(%eax)
0808358f +0x35b5:  jmp    08083524 <+0x354a>
08083591 +0x35b7:  addl   $0x1,-0x14(%ebp)
08083595 +0x35bb:  mov    0x8(%ebp),%eax
08083598 +0x35be:  mov    0xc(%eax),%eax
0808359b +0x35c1:  cmp    -0x14(%ebp),%eax
0808359e +0x35c4:  seta   %al
080835a1 +0x35c7:  test   %al,%al
080835a3 +0x35c9:  jne    08083524 <+0x354a>
080835a9 +0x35cf:  mov    0x8(%ebp),%eax
080835ac +0x35d2:  mov    0xc(%eax),%edx
080835af +0x35d5:  mov    0x8(%ebp),%eax
080835b2 +0x35d8:  mov    0x8(%eax),%eax
080835b5 +0x35db:  mov    %edx,0x8(%esp)
080835b9 +0x35df:  mov    %eax,0x4(%esp)
080835bd +0x35e3:  mov    0x8(%ebp),%eax
080835c0 +0x35e6:  mov    %eax,(%esp)
080835c3 +0x35e9:  call   080811a2 <+0x11c8>
080835c8 +0x35ee:  mov    0x8(%ebp),%eax
080835cb +0x35f1:  mov    0xc(%ebp),%edx
080835ce +0x35f4:  mov    %edx,0xc(%eax)
080835d1 +0x35f7:  mov    0x8(%ebp),%eax
080835d4 +0x35fa:  mov    -0x18(%ebp),%edx
080835d7 +0x35fd:  mov    %edx,0x8(%eax)
080835da +0x3600:  leave
080835db +0x3601:  ret
080835dc +0x3602:  push   %ebp
080835dd +0x3603:  mov    %esp,%ebp
080835df +0x3605:  pop    %ebp
080835e0 +0x3606:  ret
080835e1 +0x3607:  nop
080835e2 +0x3608:  push   %ebp
080835e3 +0x3609:  mov    %esp,%ebp
080835e5 +0x360b:  mov    0xc(%ebp),%eax
080835e8 +0x360e:  pop    %ebp
080835e9 +0x360f:  ret
080835ea +0x3610:  push   %ebp
080835eb +0x3611:  mov    %esp,%ebp
080835ed +0x3613:  mov    0x8(%ebp),%eax
080835f0 +0x3616:  pop    %ebp
080835f1 +0x3617:  ret
080835f2 +0x3618:  push   %ebp
080835f3 +0x3619:  mov    %esp,%ebp
080835f5 +0x361b:  sub    $0x18,%esp
080835f8 +0x361e:  mov    0xc(%ebp),%eax
080835fb +0x3621:  mov    %eax,(%esp)
080835fe +0x3624:  call   080835ea <+0x3610>
08083603 +0x3629:  mov    0x8(%ebp),%ecx
08083606 +0x362c:  mov    0x4(%eax),%edx
08083609 +0x362f:  mov    (%eax),%eax
0808360b +0x3631:  mov    %eax,(%ecx)
0808360d +0x3633:  mov    %edx,0x4(%ecx)
08083610 +0x3636:  mov    0x10(%ebp),%eax
08083613 +0x3639:  mov    %eax,(%esp)
08083616 +0x363c:  call   08080fa6 <+0xfcc>
0808361b +0x3641:  movzbl (%eax),%edx
0808361e +0x3644:  mov    0x8(%ebp),%eax
08083621 +0x3647:  mov    %dl,0x8(%eax)
08083624 +0x364a:  leave
08083625 +0x364b:  ret
08083626 +0x364c:  push   %ebp
08083627 +0x364d:  mov    %esp,%ebp
08083629 +0x364f:  push   %esi
0808362a +0x3650:  push   %ebx
0808362b +0x3651:  sub    $0x20,%esp
0808362e +0x3654:  mov    0x8(%ebp),%eax
08083631 +0x3657:  add    $0x4,%eax
08083634 +0x365a:  movl   $0x0,0x8(%esp)
0808363c +0x3662:  movl   $0x1,0x4(%esp)
08083644 +0x366a:  mov    %eax,(%esp)
08083647 +0x366d:  call   08083a2a <+0x3a50>
0808364c +0x3672:  mov    %eax,-0xc(%ebp)
0808364f +0x3675:  mov    0x8(%ebp),%eax
08083652 +0x3678:  add    $0x4,%eax
08083655 +0x367b:  mov    0xc(%ebp),%edx
08083658 +0x367e:  mov    %edx,0x8(%esp)
0808365c +0x3682:  mov    -0xc(%ebp),%edx
0808365f +0x3685:  mov    %edx,0x4(%esp)
08083663 +0x3689:  mov    %eax,(%esp)
08083666 +0x368c:  call   08083a62 <+0x3a88>
0808366b +0x3691:  mov    -0xc(%ebp),%eax
0808366e +0x3694:  movl   $0x0,0xc(%eax)
08083675 +0x369b:  mov    -0xc(%ebp),%eax
08083678 +0x369e:  add    $0x20,%esp
0808367b +0x36a1:  pop    %ebx
0808367c +0x36a2:  pop    %esi
0808367d +0x36a3:  pop    %ebp
0808367e +0x36a4:  ret
0808367f +0x36a5:  mov    %eax,(%esp)
08083682 +0x36a8:  call   08725ce0 <__cxa_begin_catch>
08083687 +0x36ad:  mov    0x8(%ebp),%eax
0808368a +0x36b0:  add    $0x4,%eax
0808368d +0x36b3:  movl   $0x1,0x8(%esp)
08083695 +0x36bb:  mov    -0xc(%ebp),%edx
08083698 +0x36be:  mov    %edx,0x4(%esp)
0808369c +0x36c2:  mov    %eax,(%esp)
0808369f +0x36c5:  call   08083252 <+0x3278>
080836a4 +0x36ca:  call   08724be0 <__cxa_rethrow>
080836a9 +0x36cf:  mov    %edx,%ebx
080836ab +0x36d1:  mov    %eax,%esi
080836ad +0x36d3:  call   08725c30 <__cxa_end_catch>
080836b2 +0x36d8:  mov    %esi,%eax
080836b4 +0x36da:  mov    %ebx,%edx
080836b6 +0x36dc:  mov    %eax,(%esp)
080836b9 +0x36df:  call   08ae3750 <_Unwind_Resume>
080836be +0x36e4:  push   %ebp
080836bf +0x36e5:  mov    %esp,%ebp
080836c1 +0x36e7:  sub    $0x28,%esp
080836c4 +0x36ea:  mov    0xc(%ebp),%eax
080836c7 +0x36ed:  mov    %eax,0x4(%esp)
080836cb +0x36f1:  mov    0x8(%ebp),%eax
080836ce +0x36f4:  mov    %eax,(%esp)
080836d1 +0x36f7:  call   08082984 <+0x29aa>
080836d6 +0x36fc:  mov    %eax,-0x18(%ebp)
080836d9 +0x36ff:  movl   $0x0,-0x14(%ebp)
080836e0 +0x3706:  jmp    08083753 <+0x3779>
080836e2 +0x3708:  mov    0x8(%ebp),%eax
080836e5 +0x370b:  mov    0x8(%eax),%eax
080836e8 +0x370e:  mov    -0x14(%ebp),%edx
080836eb +0x3711:  shl    $0x2,%edx
080836ee +0x3714:  add    %edx,%eax
080836f0 +0x3716:  mov    (%eax),%eax
080836f2 +0x3718:  mov    %eax,-0x10(%ebp)
080836f5 +0x371b:  cmpl   $0x0,-0x10(%ebp)
080836f9 +0x371f:  je     0808374f <+0x3775>
080836fb +0x3721:  mov    0x8(%ebp),%eax
080836fe +0x3724:  mov    0xc(%ebp),%edx
08083701 +0x3727:  mov    %edx,0x8(%esp)
08083705 +0x372b:  mov    -0x10(%ebp),%edx
08083708 +0x372e:  mov    %edx,0x4(%esp)
0808370c +0x3732:  mov    %eax,(%esp)
0808370f +0x3735:  call   08083aca <+0x3af0>
08083714 +0x373a:  mov    %eax,-0xc(%ebp)
08083717 +0x373d:  mov    0x8(%ebp),%eax
0808371a +0x3740:  mov    0x8(%eax),%eax
0808371d +0x3743:  mov    -0x14(%ebp),%edx
08083720 +0x3746:  shl    $0x2,%edx
08083723 +0x3749:  lea    (%eax,%edx,1),%edx
08083726 +0x374c:  mov    -0x10(%ebp),%eax
08083729 +0x374f:  mov    0xc(%eax),%eax
0808372c +0x3752:  mov    %eax,(%edx)
0808372e +0x3754:  mov    -0xc(%ebp),%eax
08083731 +0x3757:  shl    $0x2,%eax
08083734 +0x375a:  add    -0x18(%ebp),%eax
08083737 +0x375d:  mov    (%eax),%edx
08083739 +0x375f:  mov    -0x10(%ebp),%eax
0808373c +0x3762:  mov    %edx,0xc(%eax)
0808373f +0x3765:  mov    -0xc(%ebp),%eax
08083742 +0x3768:  shl    $0x2,%eax
08083745 +0x376b:  add    -0x18(%ebp),%eax
08083748 +0x376e:  mov    -0x10(%ebp),%edx
0808374b +0x3771:  mov    %edx,(%eax)
0808374d +0x3773:  jmp    080836e2 <+0x3708>
0808374f +0x3775:  addl   $0x1,-0x14(%ebp)
08083753 +0x3779:  mov    0x8(%ebp),%eax
08083756 +0x377c:  mov    0xc(%eax),%eax
08083759 +0x377f:  cmp    -0x14(%ebp),%eax
0808375c +0x3782:  seta   %al
0808375f +0x3785:  test   %al,%al
08083761 +0x3787:  jne    080836e2 <+0x3708>
08083767 +0x378d:  mov    0x8(%ebp),%eax
0808376a +0x3790:  mov    0xc(%eax),%edx
0808376d +0x3793:  mov    0x8(%ebp),%eax
08083770 +0x3796:  mov    0x8(%eax),%eax
08083773 +0x3799:  mov    %edx,0x8(%esp)
08083777 +0x379d:  mov    %eax,0x4(%esp)
0808377b +0x37a1:  mov    0x8(%ebp),%eax
0808377e +0x37a4:  mov    %eax,(%esp)
08083781 +0x37a7:  call   0808127c <+0x12a2>
08083786 +0x37ac:  mov    0x8(%ebp),%eax
08083789 +0x37af:  mov    0xc(%ebp),%edx
0808378c +0x37b2:  mov    %edx,0xc(%eax)
0808378f +0x37b5:  mov    0x8(%ebp),%eax
08083792 +0x37b8:  mov    -0x18(%ebp),%edx
08083795 +0x37bb:  mov    %edx,0x8(%eax)
08083798 +0x37be:  leave
08083799 +0x37bf:  ret
0808379a +0x37c0:  push   %ebp
0808379b +0x37c1:  mov    %esp,%ebp
0808379d +0x37c3:  pop    %ebp
0808379e +0x37c4:  ret
0808379f +0x37c5:  nop
080837a0 +0x37c6:  push   %ebp
080837a1 +0x37c7:  mov    %esp,%ebp
080837a3 +0x37c9:  mov    $0x3fffffff,%eax
080837a8 +0x37ce:  pop    %ebp
080837a9 +0x37cf:  ret
080837aa +0x37d0:  push   %ebp
080837ab +0x37d1:  mov    %esp,%ebp
080837ad +0x37d3:  mov    0x8(%ebp),%eax
080837b0 +0x37d6:  pop    %ebp
080837b1 +0x37d7:  ret
080837b2 +0x37d8:  push   %ebp
080837b3 +0x37d9:  mov    %esp,%ebp
080837b5 +0x37db:  sub    $0x10,%esp
080837b8 +0x37de:  mov    0x10(%ebp),%eax
080837bb +0x37e1:  mov    (%eax),%eax
080837bd +0x37e3:  mov    %eax,-0x4(%ebp)
080837c0 +0x37e6:  jmp    080837ce <+0x37f4>
080837c2 +0x37e8:  mov    0x8(%ebp),%eax
080837c5 +0x37eb:  mov    -0x4(%ebp),%edx
080837c8 +0x37ee:  mov    %edx,(%eax)
080837ca +0x37f0:  addl   $0x4,0x8(%ebp)
080837ce +0x37f4:  mov    0x8(%ebp),%eax
080837d1 +0x37f7:  cmp    0xc(%ebp),%eax
080837d4 +0x37fa:  setne  %al
080837d7 +0x37fd:  test   %al,%al
080837d9 +0x37ff:  jne    080837c2 <+0x37e8>
080837db +0x3801:  leave
080837dc +0x3802:  ret
080837dd +0x3803:  nop
080837de +0x3804:  push   %ebp
080837df +0x3805:  mov    %esp,%ebp
080837e1 +0x3807:  mov    $0x3fffffff,%eax
080837e6 +0x380c:  pop    %ebp
080837e7 +0x380d:  ret
080837e8 +0x380e:  push   %ebp
080837e9 +0x380f:  mov    %esp,%ebp
080837eb +0x3811:  mov    0x8(%ebp),%eax
080837ee +0x3814:  pop    %ebp
080837ef +0x3815:  ret
080837f0 +0x3816:  push   %ebp
080837f1 +0x3817:  mov    %esp,%ebp
080837f3 +0x3819:  sub    $0x10,%esp
080837f6 +0x381c:  mov    0x10(%ebp),%eax
080837f9 +0x381f:  mov    (%eax),%eax
080837fb +0x3821:  mov    %eax,-0x4(%ebp)
080837fe +0x3824:  jmp    0808380c <+0x3832>
08083800 +0x3826:  mov    0x8(%ebp),%eax
08083803 +0x3829:  mov    -0x4(%ebp),%edx
08083806 +0x382c:  mov    %edx,(%eax)
08083808 +0x382e:  addl   $0x4,0x8(%ebp)
0808380c +0x3832:  mov    0x8(%ebp),%eax
0808380f +0x3835:  cmp    0xc(%ebp),%eax
08083812 +0x3838:  setne  %al
08083815 +0x383b:  test   %al,%al
08083817 +0x383d:  jne    08083800 <+0x3826>
08083819 +0x383f:  leave
0808381a +0x3840:  ret
0808381b +0x3841:  nop
0808381c +0x3842:  push   %ebp
0808381d +0x3843:  mov    %esp,%ebp
0808381f +0x3845:  mov    $0x3fffffff,%eax
08083824 +0x384a:  pop    %ebp
08083825 +0x384b:  ret
08083826 +0x384c:  push   %ebp
08083827 +0x384d:  mov    %esp,%ebp
08083829 +0x384f:  mov    0x8(%ebp),%eax
0808382c +0x3852:  pop    %ebp
0808382d +0x3853:  ret
0808382e +0x3854:  push   %ebp
0808382f +0x3855:  mov    %esp,%ebp
08083831 +0x3857:  sub    $0x10,%esp
08083834 +0x385a:  mov    0x10(%ebp),%eax
08083837 +0x385d:  mov    (%eax),%eax
08083839 +0x385f:  mov    %eax,-0x4(%ebp)
0808383c +0x3862:  jmp    0808384a <+0x3870>
0808383e +0x3864:  mov    0x8(%ebp),%eax
08083841 +0x3867:  mov    -0x4(%ebp),%edx
08083844 +0x386a:  mov    %edx,(%eax)
08083846 +0x386c:  addl   $0x4,0x8(%ebp)
0808384a +0x3870:  mov    0x8(%ebp),%eax
0808384d +0x3873:  cmp    0xc(%ebp),%eax
08083850 +0x3876:  setne  %al
08083853 +0x3879:  test   %al,%al
08083855 +0x387b:  jne    0808383e <+0x3864>
08083857 +0x387d:  leave
08083858 +0x387e:  ret
08083859 +0x387f:  nop
0808385a +0x3880:  push   %ebp
0808385b +0x3881:  mov    %esp,%ebp
0808385d +0x3883:  sub    $0x18,%esp
08083860 +0x3886:  mov    0x8(%ebp),%eax
08083863 +0x3889:  mov    %eax,(%esp)
08083866 +0x388c:  call   08083b12 <+0x3b38>
0808386b +0x3891:  cmp    0xc(%ebp),%eax
0808386e +0x3894:  setb   %al
08083871 +0x3897:  movzbl %al,%eax
08083874 +0x389a:  test   %eax,%eax
08083876 +0x389c:  setne  %al
08083879 +0x389f:  test   %al,%al
0808387b +0x38a1:  je     08083882 <+0x38a8>
0808387d +0x38a3:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08083882 +0x38a8:  mov    0xc(%ebp),%eax
08083885 +0x38ab:  shl    $0x4,%eax
08083888 +0x38ae:  mov    %eax,(%esp)
0808388b +0x38b1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08083890 +0x38b6:  leave
08083891 +0x38b7:  ret
08083892 +0x38b8:  push   %ebp
08083893 +0x38b9:  mov    %esp,%ebp
08083895 +0x38bb:  push   %edi
08083896 +0x38bc:  push   %esi
08083897 +0x38bd:  push   %ebx
08083898 +0x38be:  sub    $0x2c,%esp
0808389b +0x38c1:  mov    0x10(%ebp),%eax
0808389e +0x38c4:  mov    %eax,(%esp)
080838a1 +0x38c7:  call   08083b1c <+0x3b42>
080838a6 +0x38cc:  mov    %eax,%edi
080838a8 +0x38ce:  mov    0xc(%ebp),%esi
080838ab +0x38d1:  mov    %esi,0x4(%esp)
080838af +0x38d5:  movl   $0x10,(%esp)
080838b6 +0x38dc:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080838bb +0x38e1:  mov    %eax,%ebx
080838bd +0x38e3:  mov    %ebx,%eax
080838bf +0x38e5:  test   %eax,%eax
080838c1 +0x38e7:  je     080838f1 <+0x3917>
080838c3 +0x38e9:  mov    %ebx,%eax
080838c5 +0x38eb:  mov    %edi,0x4(%esp)
080838c9 +0x38ef:  mov    %eax,(%esp)
080838cc +0x38f2:  call   08083b4e <+0x3b74>
080838d1 +0x38f7:  jmp    080838f1 <+0x3917>
080838d3 +0x38f9:  mov    %edx,%edi
080838d5 +0x38fb:  mov    %eax,-0x1c(%ebp)
080838d8 +0x38fe:  mov    %esi,0x4(%esp)
080838dc +0x3902:  mov    %ebx,(%esp)
080838df +0x3905:  call   0807fff6 <+0x1c>
080838e4 +0x390a:  mov    -0x1c(%ebp),%eax
080838e7 +0x390d:  mov    %edi,%edx
080838e9 +0x390f:  mov    %eax,(%esp)
080838ec +0x3912:  call   08ae3750 <_Unwind_Resume>
080838f1 +0x3917:  add    $0x2c,%esp
080838f4 +0x391a:  pop    %ebx
080838f5 +0x391b:  pop    %esi
080838f6 +0x391c:  pop    %edi
080838f7 +0x391d:  pop    %ebp
080838f8 +0x391e:  ret
080838f9 +0x391f:  nop
080838fa +0x3920:  push   %ebp
080838fb +0x3921:  mov    %esp,%ebp
080838fd +0x3923:  sub    $0x18,%esp
08083900 +0x3926:  mov    0xc(%ebp),%edx
08083903 +0x3929:  mov    0x8(%ebp),%eax
08083906 +0x392c:  mov    %edx,0x4(%esp)
0808390a +0x3930:  mov    %eax,(%esp)
0808390d +0x3933:  call   08082abc <+0x2ae2>
08083912 +0x3938:  mov    (%eax),%eax
08083914 +0x393a:  mov    0x8(%ebp),%edx
08083917 +0x393d:  add    $0x2,%edx
0808391a +0x3940:  mov    %eax,0x4(%esp)
0808391e +0x3944:  mov    %edx,(%esp)
08083921 +0x3947:  call   080802a6 <+0x2cc>
08083926 +0x394c:  mov    0x8(%ebp),%edx
08083929 +0x394f:  lea    0x3(%edx),%ecx
0808392c +0x3952:  mov    0x10(%ebp),%edx
0808392f +0x3955:  mov    %edx,0x8(%esp)
08083933 +0x3959:  mov    %eax,0x4(%esp)
08083937 +0x395d:  mov    %ecx,(%esp)
0808393a +0x3960:  call   08080006 <+0x2c>
0808393f +0x3965:  leave
08083940 +0x3966:  ret
08083941 +0x3967:  nop
08083942 +0x3968:  push   %ebp
08083943 +0x3969:  mov    %esp,%ebp
08083945 +0x396b:  sub    $0x18,%esp
08083948 +0x396e:  mov    0x8(%ebp),%eax
0808394b +0x3971:  mov    %eax,(%esp)
0808394e +0x3974:  call   08083b7a <+0x3ba0>
08083953 +0x3979:  cmp    0xc(%ebp),%eax
08083956 +0x397c:  setb   %al
08083959 +0x397f:  movzbl %al,%eax
0808395c +0x3982:  test   %eax,%eax
0808395e +0x3984:  setne  %al
08083961 +0x3987:  test   %al,%al
08083963 +0x3989:  je     0808396a <+0x3990>
08083965 +0x398b:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0808396a +0x3990:  mov    0xc(%ebp),%eax
0808396d +0x3993:  shl    $0x4,%eax
08083970 +0x3996:  mov    %eax,(%esp)
08083973 +0x3999:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08083978 +0x399e:  leave
08083979 +0x399f:  ret
0808397a +0x39a0:  push   %ebp
0808397b +0x39a1:  mov    %esp,%ebp
0808397d +0x39a3:  push   %edi
0808397e +0x39a4:  push   %esi
0808397f +0x39a5:  push   %ebx
08083980 +0x39a6:  sub    $0x2c,%esp
08083983 +0x39a9:  mov    0x10(%ebp),%eax
08083986 +0x39ac:  mov    %eax,(%esp)
08083989 +0x39af:  call   08083b84 <+0x3baa>
0808398e +0x39b4:  mov    %eax,%edi
08083990 +0x39b6:  mov    0xc(%ebp),%esi
08083993 +0x39b9:  mov    %esi,0x4(%esp)
08083997 +0x39bd:  movl   $0x10,(%esp)
0808399e +0x39c4:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080839a3 +0x39c9:  mov    %eax,%ebx
080839a5 +0x39cb:  mov    %ebx,%eax
080839a7 +0x39cd:  test   %eax,%eax
080839a9 +0x39cf:  je     080839d9 <+0x39ff>
080839ab +0x39d1:  mov    %ebx,%eax
080839ad +0x39d3:  mov    %edi,0x4(%esp)
080839b1 +0x39d7:  mov    %eax,(%esp)
080839b4 +0x39da:  call   08083bb6 <+0x3bdc>
080839b9 +0x39df:  jmp    080839d9 <+0x39ff>
080839bb +0x39e1:  mov    %edx,%edi
080839bd +0x39e3:  mov    %eax,-0x1c(%ebp)
080839c0 +0x39e6:  mov    %esi,0x4(%esp)
080839c4 +0x39ea:  mov    %ebx,(%esp)
080839c7 +0x39ed:  call   0807fff6 <+0x1c>
080839cc +0x39f2:  mov    -0x1c(%ebp),%eax
080839cf +0x39f5:  mov    %edi,%edx
080839d1 +0x39f7:  mov    %eax,(%esp)
080839d4 +0x39fa:  call   08ae3750 <_Unwind_Resume>
080839d9 +0x39ff:  add    $0x2c,%esp
080839dc +0x3a02:  pop    %ebx
080839dd +0x3a03:  pop    %esi
080839de +0x3a04:  pop    %edi
080839df +0x3a05:  pop    %ebp
080839e0 +0x3a06:  ret
080839e1 +0x3a07:  nop
080839e2 +0x3a08:  push   %ebp
080839e3 +0x3a09:  mov    %esp,%ebp
080839e5 +0x3a0b:  sub    $0x18,%esp
080839e8 +0x3a0e:  mov    0xc(%ebp),%edx
080839eb +0x3a11:  mov    0x8(%ebp),%eax
080839ee +0x3a14:  mov    %edx,0x4(%esp)
080839f2 +0x3a18:  mov    %eax,(%esp)
080839f5 +0x3a1b:  call   08082cb2 <+0x2cd8>
080839fa +0x3a20:  mov    (%eax),%eax
080839fc +0x3a22:  mov    0x8(%ebp),%edx
080839ff +0x3a25:  add    $0x2,%edx
08083a02 +0x3a28:  mov    %eax,0x4(%esp)
08083a06 +0x3a2c:  mov    %edx,(%esp)
08083a09 +0x3a2f:  call   080802a6 <+0x2cc>
08083a0e +0x3a34:  mov    0x8(%ebp),%edx
08083a11 +0x3a37:  lea    0x3(%edx),%ecx
08083a14 +0x3a3a:  mov    0x10(%ebp),%edx
08083a17 +0x3a3d:  mov    %edx,0x8(%esp)
08083a1b +0x3a41:  mov    %eax,0x4(%esp)
08083a1f +0x3a45:  mov    %ecx,(%esp)
08083a22 +0x3a48:  call   08080006 <+0x2c>
08083a27 +0x3a4d:  leave
08083a28 +0x3a4e:  ret
08083a29 +0x3a4f:  nop
08083a2a +0x3a50:  push   %ebp
08083a2b +0x3a51:  mov    %esp,%ebp
08083a2d +0x3a53:  sub    $0x18,%esp
08083a30 +0x3a56:  mov    0x8(%ebp),%eax
08083a33 +0x3a59:  mov    %eax,(%esp)
08083a36 +0x3a5c:  call   08083be2 <+0x3c08>
08083a3b +0x3a61:  cmp    0xc(%ebp),%eax
08083a3e +0x3a64:  setb   %al
08083a41 +0x3a67:  movzbl %al,%eax
08083a44 +0x3a6a:  test   %eax,%eax
08083a46 +0x3a6c:  setne  %al
08083a49 +0x3a6f:  test   %al,%al
08083a4b +0x3a71:  je     08083a52 <+0x3a78>
08083a4d +0x3a73:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08083a52 +0x3a78:  mov    0xc(%ebp),%eax
08083a55 +0x3a7b:  shl    $0x4,%eax
08083a58 +0x3a7e:  mov    %eax,(%esp)
08083a5b +0x3a81:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08083a60 +0x3a86:  leave
08083a61 +0x3a87:  ret
08083a62 +0x3a88:  push   %ebp
08083a63 +0x3a89:  mov    %esp,%ebp
08083a65 +0x3a8b:  push   %edi
08083a66 +0x3a8c:  push   %esi
08083a67 +0x3a8d:  push   %ebx
08083a68 +0x3a8e:  sub    $0x2c,%esp
08083a6b +0x3a91:  mov    0x10(%ebp),%eax
08083a6e +0x3a94:  mov    %eax,(%esp)
08083a71 +0x3a97:  call   08083bec <+0x3c12>
08083a76 +0x3a9c:  mov    %eax,%edi
08083a78 +0x3a9e:  mov    0xc(%ebp),%esi
08083a7b +0x3aa1:  mov    %esi,0x4(%esp)
08083a7f +0x3aa5:  movl   $0x10,(%esp)
08083a86 +0x3aac:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08083a8b +0x3ab1:  mov    %eax,%ebx
08083a8d +0x3ab3:  mov    %ebx,%eax
08083a8f +0x3ab5:  test   %eax,%eax
08083a91 +0x3ab7:  je     08083ac1 <+0x3ae7>
08083a93 +0x3ab9:  mov    %ebx,%eax
08083a95 +0x3abb:  mov    %edi,0x4(%esp)
08083a99 +0x3abf:  mov    %eax,(%esp)
08083a9c +0x3ac2:  call   08083c1e <+0x3c44>
08083aa1 +0x3ac7:  jmp    08083ac1 <+0x3ae7>
08083aa3 +0x3ac9:  mov    %edx,%edi
08083aa5 +0x3acb:  mov    %eax,-0x1c(%ebp)
08083aa8 +0x3ace:  mov    %esi,0x4(%esp)
08083aac +0x3ad2:  mov    %ebx,(%esp)
08083aaf +0x3ad5:  call   0807fff6 <+0x1c>
08083ab4 +0x3ada:  mov    -0x1c(%ebp),%eax
08083ab7 +0x3add:  mov    %edi,%edx
08083ab9 +0x3adf:  mov    %eax,(%esp)
08083abc +0x3ae2:  call   08ae3750 <_Unwind_Resume>
08083ac1 +0x3ae7:  add    $0x2c,%esp
08083ac4 +0x3aea:  pop    %ebx
08083ac5 +0x3aeb:  pop    %esi
08083ac6 +0x3aec:  pop    %edi
08083ac7 +0x3aed:  pop    %ebp
08083ac8 +0x3aee:  ret
08083ac9 +0x3aef:  nop
08083aca +0x3af0:  push   %ebp
08083acb +0x3af1:  mov    %esp,%ebp
08083acd +0x3af3:  sub    $0x18,%esp
08083ad0 +0x3af6:  mov    0xc(%ebp),%edx
08083ad3 +0x3af9:  mov    0x8(%ebp),%eax
08083ad6 +0x3afc:  mov    %edx,0x4(%esp)
08083ada +0x3b00:  mov    %eax,(%esp)
08083add +0x3b03:  call   08082ea8 <+0x2ece>
08083ae2 +0x3b08:  mov    (%eax),%eax
08083ae4 +0x3b0a:  mov    0x8(%ebp),%edx
08083ae7 +0x3b0d:  add    $0x2,%edx
08083aea +0x3b10:  mov    %eax,0x4(%esp)
08083aee +0x3b14:  mov    %edx,(%esp)
08083af1 +0x3b17:  call   080802a6 <+0x2cc>
08083af6 +0x3b1c:  mov    0x8(%ebp),%edx
08083af9 +0x3b1f:  lea    0x3(%edx),%ecx
08083afc +0x3b22:  mov    0x10(%ebp),%edx
08083aff +0x3b25:  mov    %edx,0x8(%esp)
08083b03 +0x3b29:  mov    %eax,0x4(%esp)
08083b07 +0x3b2d:  mov    %ecx,(%esp)
08083b0a +0x3b30:  call   08080006 <+0x2c>
08083b0f +0x3b35:  leave
08083b10 +0x3b36:  ret
08083b11 +0x3b37:  nop
08083b12 +0x3b38:  push   %ebp
08083b13 +0x3b39:  mov    %esp,%ebp
08083b15 +0x3b3b:  mov    $0xfffffff,%eax
08083b1a +0x3b40:  pop    %ebp
08083b1b +0x3b41:  ret
08083b1c +0x3b42:  push   %ebp
08083b1d +0x3b43:  mov    %esp,%ebp
08083b1f +0x3b45:  mov    0x8(%ebp),%eax
08083b22 +0x3b48:  pop    %ebp
08083b23 +0x3b49:  ret
08083b24 +0x3b4a:  push   %ebp
08083b25 +0x3b4b:  mov    %esp,%ebp
08083b27 +0x3b4d:  sub    $0x18,%esp
08083b2a +0x3b50:  mov    0xc(%ebp),%eax
08083b2d +0x3b53:  mov    (%eax),%edx
08083b2f +0x3b55:  mov    0x8(%ebp),%eax
08083b32 +0x3b58:  mov    %edx,(%eax)
08083b34 +0x3b5a:  mov    0xc(%ebp),%eax
08083b37 +0x3b5d:  lea    0x4(%eax),%edx
08083b3a +0x3b60:  mov    0x8(%ebp),%eax
08083b3d +0x3b63:  add    $0x4,%eax
08083b40 +0x3b66:  mov    %edx,0x4(%esp)
08083b44 +0x3b6a:  mov    %eax,(%esp)
08083b47 +0x3b6d:  call   08081404 <+0x142a>
08083b4c +0x3b72:  leave
08083b4d +0x3b73:  ret
08083b4e +0x3b74:  push   %ebp
08083b4f +0x3b75:  mov    %esp,%ebp
08083b51 +0x3b77:  sub    $0x18,%esp
08083b54 +0x3b7a:  mov    0xc(%ebp),%eax
08083b57 +0x3b7d:  mov    %eax,(%esp)
08083b5a +0x3b80:  call   08083b1c <+0x3b42>
08083b5f +0x3b85:  mov    0x8(%ebp),%edx
08083b62 +0x3b88:  mov    %eax,0x4(%esp)
08083b66 +0x3b8c:  mov    %edx,(%esp)
08083b69 +0x3b8f:  call   08083b24 <+0x3b4a>
08083b6e +0x3b94:  mov    0x8(%ebp),%eax
08083b71 +0x3b97:  movl   $0x0,0xc(%eax)
08083b78 +0x3b9e:  leave
08083b79 +0x3b9f:  ret
08083b7a +0x3ba0:  push   %ebp
08083b7b +0x3ba1:  mov    %esp,%ebp
08083b7d +0x3ba3:  mov    $0xfffffff,%eax
08083b82 +0x3ba8:  pop    %ebp
08083b83 +0x3ba9:  ret
08083b84 +0x3baa:  push   %ebp
08083b85 +0x3bab:  mov    %esp,%ebp
08083b87 +0x3bad:  mov    0x8(%ebp),%eax
08083b8a +0x3bb0:  pop    %ebp
08083b8b +0x3bb1:  ret
08083b8c +0x3bb2:  push   %ebp
08083b8d +0x3bb3:  mov    %esp,%ebp
08083b8f +0x3bb5:  sub    $0x18,%esp
08083b92 +0x3bb8:  mov    0xc(%ebp),%eax
08083b95 +0x3bbb:  mov    (%eax),%edx
08083b97 +0x3bbd:  mov    0x8(%ebp),%eax
08083b9a +0x3bc0:  mov    %edx,(%eax)
08083b9c +0x3bc2:  mov    0xc(%ebp),%eax
08083b9f +0x3bc5:  lea    0x4(%eax),%edx
08083ba2 +0x3bc8:  mov    0x8(%ebp),%eax
08083ba5 +0x3bcb:  add    $0x4,%eax
08083ba8 +0x3bce:  mov    %edx,0x4(%esp)
08083bac +0x3bd2:  mov    %eax,(%esp)
08083baf +0x3bd5:  call   080815d6 <+0x15fc>
08083bb4 +0x3bda:  leave
08083bb5 +0x3bdb:  ret
08083bb6 +0x3bdc:  push   %ebp
08083bb7 +0x3bdd:  mov    %esp,%ebp
08083bb9 +0x3bdf:  sub    $0x18,%esp
08083bbc +0x3be2:  mov    0xc(%ebp),%eax
08083bbf +0x3be5:  mov    %eax,(%esp)
08083bc2 +0x3be8:  call   08083b84 <+0x3baa>
08083bc7 +0x3bed:  mov    0x8(%ebp),%edx
08083bca +0x3bf0:  mov    %eax,0x4(%esp)
08083bce +0x3bf4:  mov    %edx,(%esp)
08083bd1 +0x3bf7:  call   08083b8c <+0x3bb2>
08083bd6 +0x3bfc:  mov    0x8(%ebp),%eax
08083bd9 +0x3bff:  movl   $0x0,0xc(%eax)
08083be0 +0x3c06:  leave
08083be1 +0x3c07:  ret
08083be2 +0x3c08:  push   %ebp
08083be3 +0x3c09:  mov    %esp,%ebp
08083be5 +0x3c0b:  mov    $0xfffffff,%eax
08083bea +0x3c10:  pop    %ebp
08083beb +0x3c11:  ret
08083bec +0x3c12:  push   %ebp
08083bed +0x3c13:  mov    %esp,%ebp
08083bef +0x3c15:  mov    0x8(%ebp),%eax
08083bf2 +0x3c18:  pop    %ebp
08083bf3 +0x3c19:  ret
08083bf4 +0x3c1a:  push   %ebp
08083bf5 +0x3c1b:  mov    %esp,%ebp
08083bf7 +0x3c1d:  sub    $0x18,%esp
08083bfa +0x3c20:  mov    0xc(%ebp),%eax
08083bfd +0x3c23:  mov    (%eax),%edx
08083bff +0x3c25:  mov    0x8(%ebp),%eax
08083c02 +0x3c28:  mov    %edx,(%eax)
08083c04 +0x3c2a:  mov    0xc(%ebp),%eax
08083c07 +0x3c2d:  lea    0x4(%eax),%edx
08083c0a +0x3c30:  mov    0x8(%ebp),%eax
08083c0d +0x3c33:  add    $0x4,%eax
08083c10 +0x3c36:  mov    %edx,0x4(%esp)
08083c14 +0x3c3a:  mov    %eax,(%esp)
08083c17 +0x3c3d:  call   080817a8 <+0x17ce>
08083c1c +0x3c42:  leave
08083c1d +0x3c43:  ret
08083c1e +0x3c44:  push   %ebp
08083c1f +0x3c45:  mov    %esp,%ebp
08083c21 +0x3c47:  sub    $0x18,%esp
08083c24 +0x3c4a:  mov    0xc(%ebp),%eax
08083c27 +0x3c4d:  mov    %eax,(%esp)
08083c2a +0x3c50:  call   08083bec <+0x3c12>
08083c2f +0x3c55:  mov    0x8(%ebp),%edx
08083c32 +0x3c58:  mov    %eax,0x4(%esp)
08083c36 +0x3c5c:  mov    %edx,(%esp)
08083c39 +0x3c5f:  call   08083bf4 <+0x3c1a>
08083c3e +0x3c64:  mov    0x8(%ebp),%eax
08083c41 +0x3c67:  movl   $0x0,0xc(%eax)
08083c48 +0x3c6e:  leave
08083c49 +0x3c6f:  ret
08083c4a +0x3c70:  nop
08083c4b +0x3c71:  nop
```

## 反编译 C

```c
// <global>::global @ 0x807ffda

/* CNRDScriptData::CNRDScriptData() */

void CNRDScriptData::_GLOBAL__I_CNRDScriptData(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
