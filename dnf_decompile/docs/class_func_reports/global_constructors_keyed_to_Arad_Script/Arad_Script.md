# Arad_Script

`_GLOBAL__I__ZN11Arad_ScriptC2Ev`

`global constructors keyed to Arad_Script::Arad_Script()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Arad_Script` | `0x0817cbb9` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817cbb9  _GLOBAL__I__ZN11Arad_ScriptC2Ev
#           global constructors keyed to Arad_Script::Arad_Script()
# range [0x0817cbb9, 0x0817dd0b]
0817cbb9 +0x0000:  push   %ebp
0817cbba +0x0001:  mov    %esp,%ebp
0817cbbc +0x0003:  sub    $0x18,%esp
0817cbbf +0x0006:  movl   $0xffff,0x4(%esp)
0817cbc7 +0x000e:  movl   $0x1,(%esp)
0817cbce +0x0015:  call   0817cb79 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0817cbd3 +0x001a:  leave
0817cbd4 +0x001b:  ret
0817cbd5 +0x001c:  nop
0817cbd6 +0x001d:  push   %ebp
0817cbd7 +0x001e:  mov    %esp,%ebp
0817cbd9 +0x0020:  sub    $0x18,%esp
0817cbdc +0x0023:  mov    0x8(%ebp),%eax
0817cbdf +0x0026:  mov    %eax,(%esp)
0817cbe2 +0x0029:  call   0817cc12 <+0x59>
0817cbe7 +0x002e:  leave
0817cbe8 +0x002f:  ret
0817cbe9 +0x0030:  nop
0817cbea +0x0031:  push   %ebp
0817cbeb +0x0032:  mov    %esp,%ebp
0817cbed +0x0034:  sub    $0x18,%esp
0817cbf0 +0x0037:  mov    0x8(%ebp),%eax
0817cbf3 +0x003a:  mov    %eax,(%esp)
0817cbf6 +0x003d:  call   0817ce24 <+0x26b>
0817cbfb +0x0042:  leave
0817cbfc +0x0043:  ret
0817cbfd +0x0044:  nop
0817cbfe +0x0045:  push   %ebp
0817cbff +0x0046:  mov    %esp,%ebp
0817cc01 +0x0048:  sub    $0x18,%esp
0817cc04 +0x004b:  mov    0x8(%ebp),%eax
0817cc07 +0x004e:  mov    %eax,(%esp)
0817cc0a +0x0051:  call   0817ce38 <+0x27f>
0817cc0f +0x0056:  leave
0817cc10 +0x0057:  ret
0817cc11 +0x0058:  nop
0817cc12 +0x0059:  push   %ebp
0817cc13 +0x005a:  mov    %esp,%ebp
0817cc15 +0x005c:  push   %esi
0817cc16 +0x005d:  push   %ebx
0817cc17 +0x005e:  sub    $0x10,%esp
0817cc1a +0x0061:  mov    0x8(%ebp),%eax
0817cc1d +0x0064:  mov    %eax,(%esp)
0817cc20 +0x0067:  call   0817cea2 <+0x2e9>
0817cc25 +0x006c:  mov    %eax,0x4(%esp)
0817cc29 +0x0070:  mov    0x8(%ebp),%eax
0817cc2c +0x0073:  mov    %eax,(%esp)
0817cc2f +0x0076:  call   0817ce4c <+0x293>
0817cc34 +0x007b:  jmp    0817cc51 <+0x98>
0817cc36 +0x007d:  mov    %edx,%ebx
0817cc38 +0x007f:  mov    %eax,%esi
0817cc3a +0x0081:  mov    0x8(%ebp),%eax
0817cc3d +0x0084:  mov    %eax,(%esp)
0817cc40 +0x0087:  call   0817cbfe <+0x45>
0817cc45 +0x008c:  mov    %esi,%eax
0817cc47 +0x008e:  mov    %ebx,%edx
0817cc49 +0x0090:  mov    %eax,(%esp)
0817cc4c +0x0093:  call   08ae3750 <_Unwind_Resume>
0817cc51 +0x0098:  mov    0x8(%ebp),%eax
0817cc54 +0x009b:  mov    %eax,(%esp)
0817cc57 +0x009e:  call   0817cbfe <+0x45>
0817cc5c +0x00a3:  add    $0x10,%esp
0817cc5f +0x00a6:  pop    %ebx
0817cc60 +0x00a7:  pop    %esi
0817cc61 +0x00a8:  pop    %ebp
0817cc62 +0x00a9:  ret
0817cc63 +0x00aa:  nop
0817cc64 +0x00ab:  push   %ebp
0817cc65 +0x00ac:  mov    %esp,%ebp
0817cc67 +0x00ae:  sub    $0x18,%esp
0817cc6a +0x00b1:  mov    0x8(%ebp),%eax
0817cc6d +0x00b4:  mov    %eax,(%esp)
0817cc70 +0x00b7:  call   0817ceae <+0x2f5>
0817cc75 +0x00bc:  leave
0817cc76 +0x00bd:  ret
0817cc77 +0x00be:  nop
0817cc78 +0x00bf:  push   %ebp
0817cc79 +0x00c0:  mov    %esp,%ebp
0817cc7b +0x00c2:  sub    $0x18,%esp
0817cc7e +0x00c5:  mov    0x8(%ebp),%eax
0817cc81 +0x00c8:  mov    %eax,(%esp)
0817cc84 +0x00cb:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817cc89 +0x00d0:  leave
0817cc8a +0x00d1:  ret
0817cc8b +0x00d2:  nop
0817cc8c +0x00d3:  push   %ebp
0817cc8d +0x00d4:  mov    %esp,%ebp
0817cc8f +0x00d6:  push   %esi
0817cc90 +0x00d7:  push   %ebx
0817cc91 +0x00d8:  sub    $0x40,%esp
0817cc94 +0x00db:  lea    -0x20(%ebp),%eax
0817cc97 +0x00de:  mov    0xc(%ebp),%edx
0817cc9a +0x00e1:  mov    %edx,0x8(%esp)
0817cc9e +0x00e5:  mov    0x8(%ebp),%edx
0817cca1 +0x00e8:  mov    %edx,0x4(%esp)
0817cca5 +0x00ec:  mov    %eax,(%esp)
0817cca8 +0x00ef:  call   0817cf24 <+0x36b>
0817ccad +0x00f4:  sub    $0x4,%esp
0817ccb0 +0x00f7:  lea    -0x1c(%ebp),%eax
0817ccb3 +0x00fa:  mov    0x8(%ebp),%edx
0817ccb6 +0x00fd:  mov    %edx,0x4(%esp)
0817ccba +0x0101:  mov    %eax,(%esp)
0817ccbd +0x0104:  call   0817cddc <+0x223>
0817ccc2 +0x0109:  sub    $0x4,%esp
0817ccc5 +0x010c:  lea    -0x1c(%ebp),%eax
0817ccc8 +0x010f:  mov    %eax,0x4(%esp)
0817cccc +0x0113:  lea    -0x20(%ebp),%eax
0817cccf +0x0116:  mov    %eax,(%esp)
0817ccd2 +0x0119:  call   0817cf84 <+0x3cb>
0817ccd7 +0x011e:  test   %al,%al
0817ccd9 +0x0120:  jne    0817cd17 <+0x15e>
0817ccdb +0x0122:  lea    -0x20(%ebp),%eax
0817ccde +0x0125:  mov    %eax,(%esp)
0817cce1 +0x0128:  call   0817cf76 <+0x3bd>
0817cce6 +0x012d:  mov    %eax,%ebx
0817cce8 +0x012f:  lea    -0x15(%ebp),%eax
0817cceb +0x0132:  mov    0x8(%ebp),%edx
0817ccee +0x0135:  mov    %edx,0x4(%esp)
0817ccf2 +0x0139:  mov    %eax,(%esp)
0817ccf5 +0x013c:  call   0817cf50 <+0x397>
0817ccfa +0x0141:  sub    $0x4,%esp
0817ccfd +0x0144:  mov    %ebx,0x8(%esp)
0817cd01 +0x0148:  mov    0xc(%ebp),%eax
0817cd04 +0x014b:  mov    %eax,0x4(%esp)
0817cd08 +0x014f:  lea    -0x15(%ebp),%eax
0817cd0b +0x0152:  mov    %eax,(%esp)
0817cd0e +0x0155:  call   080d4a60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x98ad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x98ad
0817cd13 +0x015a:  test   %al,%al
0817cd15 +0x015c:  je     0817cd1e <+0x165>
0817cd17 +0x015e:  mov    $0x1,%eax
0817cd1c +0x0163:  jmp    0817cd23 <+0x16a>
0817cd1e +0x0165:  mov    $0x0,%eax
0817cd23 +0x016a:  test   %al,%al
0817cd25 +0x016c:  je     0817cd98 <+0x1df>
0817cd27 +0x016e:  movl   $0x0,-0xc(%ebp)
0817cd2e +0x0175:  lea    -0xc(%ebp),%eax
0817cd31 +0x0178:  mov    %eax,0x8(%esp)
0817cd35 +0x017c:  mov    0xc(%ebp),%eax
0817cd38 +0x017f:  mov    %eax,0x4(%esp)
0817cd3c +0x0183:  lea    -0x14(%ebp),%eax
0817cd3f +0x0186:  mov    %eax,(%esp)
0817cd42 +0x0189:  call   0817cf98 <+0x3df>
0817cd47 +0x018e:  lea    -0x2c(%ebp),%eax
0817cd4a +0x0191:  lea    -0x14(%ebp),%edx
0817cd4d +0x0194:  mov    %edx,0xc(%esp)
0817cd51 +0x0198:  mov    -0x20(%ebp),%edx
0817cd54 +0x019b:  mov    %edx,0x8(%esp)
0817cd58 +0x019f:  mov    0x8(%ebp),%edx
0817cd5b +0x01a2:  mov    %edx,0x4(%esp)
0817cd5f +0x01a6:  mov    %eax,(%esp)
0817cd62 +0x01a9:  call   0817cfce <+0x415>
0817cd67 +0x01ae:  sub    $0x4,%esp
0817cd6a +0x01b1:  mov    -0x2c(%ebp),%eax
0817cd6d +0x01b4:  mov    %eax,-0x20(%ebp)
0817cd70 +0x01b7:  lea    -0x14(%ebp),%eax
0817cd73 +0x01ba:  mov    %eax,(%esp)
0817cd76 +0x01bd:  call   0817cc78 <+0xbf>
0817cd7b +0x01c2:  jmp    0817cd98 <+0x1df>
0817cd7d +0x01c4:  mov    %edx,%ebx
0817cd7f +0x01c6:  mov    %eax,%esi
0817cd81 +0x01c8:  lea    -0x14(%ebp),%eax
0817cd84 +0x01cb:  mov    %eax,(%esp)
0817cd87 +0x01ce:  call   0817cc78 <+0xbf>
0817cd8c +0x01d3:  mov    %esi,%eax
0817cd8e +0x01d5:  mov    %ebx,%edx
0817cd90 +0x01d7:  mov    %eax,(%esp)
0817cd93 +0x01da:  call   08ae3750 <_Unwind_Resume>
0817cd98 +0x01df:  lea    -0x20(%ebp),%eax
0817cd9b +0x01e2:  mov    %eax,(%esp)
0817cd9e +0x01e5:  call   0817cf76 <+0x3bd>
0817cda3 +0x01ea:  add    $0x4,%eax
0817cda6 +0x01ed:  lea    -0x8(%ebp),%esp
0817cda9 +0x01f0:  add    $0x0,%esp
0817cdac +0x01f3:  pop    %ebx
0817cdad +0x01f4:  pop    %esi
0817cdae +0x01f5:  pop    %ebp
0817cdaf +0x01f6:  ret
0817cdb0 +0x01f7:  push   %ebp
0817cdb1 +0x01f8:  mov    %esp,%ebp
0817cdb3 +0x01fa:  push   %ebx
0817cdb4 +0x01fb:  sub    $0x14,%esp
0817cdb7 +0x01fe:  mov    0x8(%ebp),%ebx
0817cdba +0x0201:  mov    0xc(%ebp),%eax
0817cdbd +0x0204:  mov    0x10(%ebp),%edx
0817cdc0 +0x0207:  mov    %edx,0x8(%esp)
0817cdc4 +0x020b:  mov    %eax,0x4(%esp)
0817cdc8 +0x020f:  mov    %ebx,(%esp)
0817cdcb +0x0212:  call   0817d014 <+0x45b>
0817cdd0 +0x0217:  sub    $0x4,%esp
0817cdd3 +0x021a:  mov    %ebx,%eax
0817cdd5 +0x021c:  mov    -0x4(%ebp),%ebx
0817cdd8 +0x021f:  leave
0817cdd9 +0x0220:  ret    $0x4
0817cddc +0x0223:  push   %ebp
0817cddd +0x0224:  mov    %esp,%ebp
0817cddf +0x0226:  push   %ebx
0817cde0 +0x0227:  sub    $0x14,%esp
0817cde3 +0x022a:  mov    0x8(%ebp),%ebx
0817cde6 +0x022d:  mov    0xc(%ebp),%eax
0817cde9 +0x0230:  mov    %eax,0x4(%esp)
0817cded +0x0234:  mov    %ebx,(%esp)
0817cdf0 +0x0237:  call   0817d0d2 <+0x519>
0817cdf5 +0x023c:  sub    $0x4,%esp
0817cdf8 +0x023f:  mov    %ebx,%eax
0817cdfa +0x0241:  mov    -0x4(%ebp),%ebx
0817cdfd +0x0244:  leave
0817cdfe +0x0245:  ret    $0x4
0817ce01 +0x0248:  nop
0817ce02 +0x0249:  push   %ebp
0817ce03 +0x024a:  mov    %esp,%ebp
0817ce05 +0x024c:  mov    0x8(%ebp),%eax
0817ce08 +0x024f:  mov    (%eax),%edx
0817ce0a +0x0251:  mov    0xc(%ebp),%eax
0817ce0d +0x0254:  mov    (%eax),%eax
0817ce0f +0x0256:  cmp    %eax,%edx
0817ce11 +0x0258:  setne  %al
0817ce14 +0x025b:  pop    %ebp
0817ce15 +0x025c:  ret
0817ce16 +0x025d:  push   %ebp
0817ce17 +0x025e:  mov    %esp,%ebp
0817ce19 +0x0260:  mov    0x8(%ebp),%eax
0817ce1c +0x0263:  mov    (%eax),%eax
0817ce1e +0x0265:  add    $0x10,%eax
0817ce21 +0x0268:  pop    %ebp
0817ce22 +0x0269:  ret
0817ce23 +0x026a:  nop
0817ce24 +0x026b:  push   %ebp
0817ce25 +0x026c:  mov    %esp,%ebp
0817ce27 +0x026e:  sub    $0x18,%esp
0817ce2a +0x0271:  mov    0x8(%ebp),%eax
0817ce2d +0x0274:  mov    %eax,(%esp)
0817ce30 +0x0277:  call   0817d0f8 <+0x53f>
0817ce35 +0x027c:  leave
0817ce36 +0x027d:  ret
0817ce37 +0x027e:  nop
0817ce38 +0x027f:  push   %ebp
0817ce39 +0x0280:  mov    %esp,%ebp
0817ce3b +0x0282:  sub    $0x18,%esp
0817ce3e +0x0285:  mov    0x8(%ebp),%eax
0817ce41 +0x0288:  mov    %eax,(%esp)
0817ce44 +0x028b:  call   0817d148 <+0x58f>
0817ce49 +0x0290:  leave
0817ce4a +0x0291:  ret
0817ce4b +0x0292:  nop
0817ce4c +0x0293:  push   %ebp
0817ce4d +0x0294:  mov    %esp,%ebp
0817ce4f +0x0296:  sub    $0x28,%esp
0817ce52 +0x0299:  jmp    0817ce94 <+0x2db>
0817ce54 +0x029b:  mov    0xc(%ebp),%eax
0817ce57 +0x029e:  mov    %eax,(%esp)
0817ce5a +0x02a1:  call   0817d14d <+0x594>
0817ce5f +0x02a6:  mov    %eax,0x4(%esp)
0817ce63 +0x02aa:  mov    0x8(%ebp),%eax
0817ce66 +0x02ad:  mov    %eax,(%esp)
0817ce69 +0x02b0:  call   0817ce4c <+0x293>
0817ce6e +0x02b5:  mov    0xc(%ebp),%eax
0817ce71 +0x02b8:  mov    %eax,(%esp)
0817ce74 +0x02bb:  call   0817d158 <+0x59f>
0817ce79 +0x02c0:  mov    %eax,-0xc(%ebp)
0817ce7c +0x02c3:  mov    0xc(%ebp),%eax
0817ce7f +0x02c6:  mov    %eax,0x4(%esp)
0817ce83 +0x02ca:  mov    0x8(%ebp),%eax
0817ce86 +0x02cd:  mov    %eax,(%esp)
0817ce89 +0x02d0:  call   0817d164 <+0x5ab>
0817ce8e +0x02d5:  mov    -0xc(%ebp),%eax
0817ce91 +0x02d8:  mov    %eax,0xc(%ebp)
0817ce94 +0x02db:  cmpl   $0x0,0xc(%ebp)
0817ce98 +0x02df:  setne  %al
0817ce9b +0x02e2:  test   %al,%al
0817ce9d +0x02e4:  jne    0817ce54 <+0x29b>
0817ce9f +0x02e6:  leave
0817cea0 +0x02e7:  ret
0817cea1 +0x02e8:  nop
0817cea2 +0x02e9:  push   %ebp
0817cea3 +0x02ea:  mov    %esp,%ebp
0817cea5 +0x02ec:  mov    0x8(%ebp),%eax
0817cea8 +0x02ef:  mov    0x8(%eax),%eax
0817ceab +0x02f2:  pop    %ebp
0817ceac +0x02f3:  ret
0817cead +0x02f4:  nop
0817ceae +0x02f5:  push   %ebp
0817ceaf +0x02f6:  mov    %esp,%ebp
0817ceb1 +0x02f8:  push   %ebx
0817ceb2 +0x02f9:  sub    $0x14,%esp
0817ceb5 +0x02fc:  mov    0x8(%ebp),%eax
0817ceb8 +0x02ff:  mov    %eax,(%esp)
0817cebb +0x0302:  call   0817cea2 <+0x2e9>
0817cec0 +0x0307:  mov    %eax,0x4(%esp)
0817cec4 +0x030b:  mov    0x8(%ebp),%eax
0817cec7 +0x030e:  mov    %eax,(%esp)
0817ceca +0x0311:  call   0817ce4c <+0x293>
0817cecf +0x0316:  mov    0x8(%ebp),%eax
0817ced2 +0x0319:  mov    %eax,(%esp)
0817ced5 +0x031c:  call   0817d1a4 <+0x5eb>
0817ceda +0x0321:  mov    %eax,%ebx
0817cedc +0x0323:  mov    0x8(%ebp),%eax
0817cedf +0x0326:  mov    %eax,(%esp)
0817cee2 +0x0329:  call   0817d198 <+0x5df>
0817cee7 +0x032e:  mov    %eax,(%ebx)
0817cee9 +0x0330:  mov    0x8(%ebp),%eax
0817ceec +0x0333:  mov    %eax,(%esp)
0817ceef +0x0336:  call   0817d1b0 <+0x5f7>
0817cef4 +0x033b:  movl   $0x0,(%eax)
0817cefa +0x0341:  mov    0x8(%ebp),%eax
0817cefd +0x0344:  mov    %eax,(%esp)
0817cf00 +0x0347:  call   0817d1bc <+0x603>
0817cf05 +0x034c:  mov    %eax,%ebx
0817cf07 +0x034e:  mov    0x8(%ebp),%eax
0817cf0a +0x0351:  mov    %eax,(%esp)
0817cf0d +0x0354:  call   0817d198 <+0x5df>
0817cf12 +0x0359:  mov    %eax,(%ebx)
0817cf14 +0x035b:  mov    0x8(%ebp),%eax
0817cf17 +0x035e:  movl   $0x0,0x14(%eax)
0817cf1e +0x0365:  add    $0x14,%esp
0817cf21 +0x0368:  pop    %ebx
0817cf22 +0x0369:  pop    %ebp
0817cf23 +0x036a:  ret
0817cf24 +0x036b:  push   %ebp
0817cf25 +0x036c:  mov    %esp,%ebp
0817cf27 +0x036e:  push   %ebx
0817cf28 +0x036f:  sub    $0x14,%esp
0817cf2b +0x0372:  mov    0x8(%ebp),%ebx
0817cf2e +0x0375:  mov    0xc(%ebp),%eax
0817cf31 +0x0378:  mov    0x10(%ebp),%edx
0817cf34 +0x037b:  mov    %edx,0x8(%esp)
0817cf38 +0x037f:  mov    %eax,0x4(%esp)
0817cf3c +0x0383:  mov    %ebx,(%esp)
0817cf3f +0x0386:  call   0817d1c8 <+0x60f>
0817cf44 +0x038b:  sub    $0x4,%esp
0817cf47 +0x038e:  mov    %ebx,%eax
0817cf49 +0x0390:  mov    -0x4(%ebp),%ebx
0817cf4c +0x0393:  leave
0817cf4d +0x0394:  ret    $0x4
0817cf50 +0x0397:  push   %ebp
0817cf51 +0x0398:  mov    %esp,%ebp
0817cf53 +0x039a:  push   %ebx
0817cf54 +0x039b:  sub    $0x14,%esp
0817cf57 +0x039e:  mov    0x8(%ebp),%ebx
0817cf5a +0x03a1:  mov    0xc(%ebp),%eax
0817cf5d +0x03a4:  mov    %eax,0x4(%esp)
0817cf61 +0x03a8:  mov    %ebx,(%esp)
0817cf64 +0x03ab:  call   0817d21a <+0x661>
0817cf69 +0x03b0:  sub    $0x4,%esp
0817cf6c +0x03b3:  mov    %ebx,%eax
0817cf6e +0x03b5:  mov    -0x4(%ebp),%ebx
0817cf71 +0x03b8:  leave
0817cf72 +0x03b9:  ret    $0x4
0817cf75 +0x03bc:  nop
0817cf76 +0x03bd:  push   %ebp
0817cf77 +0x03be:  mov    %esp,%ebp
0817cf79 +0x03c0:  mov    0x8(%ebp),%eax
0817cf7c +0x03c3:  mov    (%eax),%eax
0817cf7e +0x03c5:  add    $0x10,%eax
0817cf81 +0x03c8:  pop    %ebp
0817cf82 +0x03c9:  ret
0817cf83 +0x03ca:  nop
0817cf84 +0x03cb:  push   %ebp
0817cf85 +0x03cc:  mov    %esp,%ebp
0817cf87 +0x03ce:  mov    0x8(%ebp),%eax
0817cf8a +0x03d1:  mov    (%eax),%edx
0817cf8c +0x03d3:  mov    0xc(%ebp),%eax
0817cf8f +0x03d6:  mov    (%eax),%eax
0817cf91 +0x03d8:  cmp    %eax,%edx
0817cf93 +0x03da:  sete   %al
0817cf96 +0x03dd:  pop    %ebp
0817cf97 +0x03de:  ret
0817cf98 +0x03df:  push   %ebp
0817cf99 +0x03e0:  mov    %esp,%ebp
0817cf9b +0x03e2:  sub    $0x18,%esp
0817cf9e +0x03e5:  mov    0xc(%ebp),%eax
0817cfa1 +0x03e8:  mov    %eax,(%esp)
0817cfa4 +0x03eb:  call   0817d224 <+0x66b>
0817cfa9 +0x03f0:  mov    0x8(%ebp),%edx
0817cfac +0x03f3:  mov    %eax,0x4(%esp)
0817cfb0 +0x03f7:  mov    %edx,(%esp)
0817cfb3 +0x03fa:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0817cfb8 +0x03ff:  mov    0x10(%ebp),%eax
0817cfbb +0x0402:  mov    %eax,(%esp)
0817cfbe +0x0405:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
0817cfc3 +0x040a:  mov    (%eax),%edx
0817cfc5 +0x040c:  mov    0x8(%ebp),%eax
0817cfc8 +0x040f:  mov    %edx,0x4(%eax)
0817cfcb +0x0412:  leave
0817cfcc +0x0413:  ret
0817cfcd +0x0414:  nop
0817cfce +0x0415:  push   %ebp
0817cfcf +0x0416:  mov    %esp,%ebp
0817cfd1 +0x0418:  push   %ebx
0817cfd2 +0x0419:  sub    $0x24,%esp
0817cfd5 +0x041c:  mov    0x8(%ebp),%ebx
0817cfd8 +0x041f:  lea    0x10(%ebp),%eax
0817cfdb +0x0422:  mov    %eax,0x4(%esp)
0817cfdf +0x0426:  lea    -0xc(%ebp),%eax
0817cfe2 +0x0429:  mov    %eax,(%esp)
0817cfe5 +0x042c:  call   0817d22c <+0x673>
0817cfea +0x0431:  mov    0xc(%ebp),%eax
0817cfed +0x0434:  mov    0x14(%ebp),%edx
0817cff0 +0x0437:  mov    %edx,0xc(%esp)
0817cff4 +0x043b:  mov    -0xc(%ebp),%edx
0817cff7 +0x043e:  mov    %edx,0x8(%esp)
0817cffb +0x0442:  mov    %eax,0x4(%esp)
0817cfff +0x0446:  mov    %ebx,(%esp)
0817d002 +0x0449:  call   0817d23c <+0x683>
0817d007 +0x044e:  sub    $0x4,%esp
0817d00a +0x0451:  mov    %ebx,%eax
0817d00c +0x0453:  mov    -0x4(%ebp),%ebx
0817d00f +0x0456:  leave
0817d010 +0x0457:  ret    $0x4
0817d013 +0x045a:  nop
0817d014 +0x045b:  push   %ebp
0817d015 +0x045c:  mov    %esp,%ebp
0817d017 +0x045e:  push   %esi
0817d018 +0x045f:  push   %ebx
0817d019 +0x0460:  sub    $0x30,%esp
0817d01c +0x0463:  mov    0x8(%ebp),%ebx
0817d01f +0x0466:  mov    0xc(%ebp),%eax
0817d022 +0x0469:  mov    %eax,(%esp)
0817d025 +0x046c:  call   0817d198 <+0x5df>
0817d02a +0x0471:  mov    %eax,%esi
0817d02c +0x0473:  mov    0xc(%ebp),%eax
0817d02f +0x0476:  mov    %eax,(%esp)
0817d032 +0x0479:  call   0817cea2 <+0x2e9>
0817d037 +0x047e:  lea    -0x10(%ebp),%edx
0817d03a +0x0481:  mov    0x10(%ebp),%ecx
0817d03d +0x0484:  mov    %ecx,0x10(%esp)
0817d041 +0x0488:  mov    %esi,0xc(%esp)
0817d045 +0x048c:  mov    %eax,0x8(%esp)
0817d049 +0x0490:  mov    0xc(%ebp),%eax
0817d04c +0x0493:  mov    %eax,0x4(%esp)
0817d050 +0x0497:  mov    %edx,(%esp)
0817d053 +0x049a:  call   0817d602 <+0xa49>
0817d058 +0x049f:  sub    $0x4,%esp
0817d05b +0x04a2:  lea    -0xc(%ebp),%eax
0817d05e +0x04a5:  mov    0xc(%ebp),%edx
0817d061 +0x04a8:  mov    %edx,0x4(%esp)
0817d065 +0x04ac:  mov    %eax,(%esp)
0817d068 +0x04af:  call   0817d0d2 <+0x519>
0817d06d +0x04b4:  sub    $0x4,%esp
0817d070 +0x04b7:  lea    -0xc(%ebp),%eax
0817d073 +0x04ba:  mov    %eax,0x4(%esp)
0817d077 +0x04be:  lea    -0x10(%ebp),%eax
0817d07a +0x04c1:  mov    %eax,(%esp)
0817d07d +0x04c4:  call   0817cf84 <+0x3cb>
0817d082 +0x04c9:  test   %al,%al
0817d084 +0x04cb:  jne    0817d0ab <+0x4f2>
0817d086 +0x04cd:  mov    -0x10(%ebp),%eax
0817d089 +0x04d0:  mov    %eax,(%esp)
0817d08c +0x04d3:  call   0817d67e <+0xac5>
0817d091 +0x04d8:  mov    0xc(%ebp),%edx
0817d094 +0x04db:  mov    %eax,0x8(%esp)
0817d098 +0x04df:  mov    0x10(%ebp),%eax
0817d09b +0x04e2:  mov    %eax,0x4(%esp)
0817d09f +0x04e6:  mov    %edx,(%esp)
0817d0a2 +0x04e9:  call   080d4a60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x98ad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x98ad
0817d0a7 +0x04ee:  test   %al,%al
0817d0a9 +0x04f0:  je     0817d0bf <+0x506>
0817d0ab +0x04f2:  mov    0xc(%ebp),%eax
0817d0ae +0x04f5:  mov    %eax,0x4(%esp)
0817d0b2 +0x04f9:  mov    %ebx,(%esp)
0817d0b5 +0x04fc:  call   0817d0d2 <+0x519>
0817d0ba +0x0501:  sub    $0x4,%esp
0817d0bd +0x0504:  jmp    0817d0c4 <+0x50b>
0817d0bf +0x0506:  mov    -0x10(%ebp),%eax
0817d0c2 +0x0509:  mov    %eax,(%ebx)
0817d0c4 +0x050b:  mov    %ebx,%eax
0817d0c6 +0x050d:  lea    -0x8(%ebp),%esp
0817d0c9 +0x0510:  add    $0x0,%esp
0817d0cc +0x0513:  pop    %ebx
0817d0cd +0x0514:  pop    %esi
0817d0ce +0x0515:  pop    %ebp
0817d0cf +0x0516:  ret    $0x4
0817d0d2 +0x0519:  push   %ebp
0817d0d3 +0x051a:  mov    %esp,%ebp
0817d0d5 +0x051c:  push   %ebx
0817d0d6 +0x051d:  sub    $0x14,%esp
0817d0d9 +0x0520:  mov    0x8(%ebp),%ebx
0817d0dc +0x0523:  mov    0xc(%ebp),%eax
0817d0df +0x0526:  add    $0x4,%eax
0817d0e2 +0x0529:  mov    %eax,0x4(%esp)
0817d0e6 +0x052d:  mov    %ebx,(%esp)
0817d0e9 +0x0530:  call   0817d6a0 <+0xae7>
0817d0ee +0x0535:  mov    %ebx,%eax
0817d0f0 +0x0537:  add    $0x14,%esp
0817d0f3 +0x053a:  pop    %ebx
0817d0f4 +0x053b:  pop    %ebp
0817d0f5 +0x053c:  ret    $0x4
0817d0f8 +0x053f:  push   %ebp
0817d0f9 +0x0540:  mov    %esp,%ebp
0817d0fb +0x0542:  sub    $0x18,%esp
0817d0fe +0x0545:  mov    0x8(%ebp),%eax
0817d101 +0x0548:  mov    %eax,(%esp)
0817d104 +0x054b:  call   0817d6ae <+0xaf5>
0817d109 +0x0550:  mov    0x8(%ebp),%eax
0817d10c +0x0553:  movl   $0x0,0x4(%eax)
0817d113 +0x055a:  mov    0x8(%ebp),%eax
0817d116 +0x055d:  movl   $0x0,0x8(%eax)
0817d11d +0x0564:  mov    0x8(%ebp),%eax
0817d120 +0x0567:  movl   $0x0,0xc(%eax)
0817d127 +0x056e:  mov    0x8(%ebp),%eax
0817d12a +0x0571:  movl   $0x0,0x10(%eax)
0817d131 +0x0578:  mov    0x8(%ebp),%eax
0817d134 +0x057b:  movl   $0x0,0x14(%eax)
0817d13b +0x0582:  mov    0x8(%ebp),%eax
0817d13e +0x0585:  mov    %eax,(%esp)
0817d141 +0x0588:  call   0817d6c2 <+0xb09>
0817d146 +0x058d:  leave
0817d147 +0x058e:  ret
0817d148 +0x058f:  push   %ebp
0817d149 +0x0590:  mov    %esp,%ebp
0817d14b +0x0592:  pop    %ebp
0817d14c +0x0593:  ret
0817d14d +0x0594:  push   %ebp
0817d14e +0x0595:  mov    %esp,%ebp
0817d150 +0x0597:  mov    0x8(%ebp),%eax
0817d153 +0x059a:  mov    0xc(%eax),%eax
0817d156 +0x059d:  pop    %ebp
0817d157 +0x059e:  ret
0817d158 +0x059f:  push   %ebp
0817d159 +0x05a0:  mov    %esp,%ebp
0817d15b +0x05a2:  mov    0x8(%ebp),%eax
0817d15e +0x05a5:  mov    0x8(%eax),%eax
0817d161 +0x05a8:  pop    %ebp
0817d162 +0x05a9:  ret
0817d163 +0x05aa:  nop
0817d164 +0x05ab:  push   %ebp
0817d165 +0x05ac:  mov    %esp,%ebp
0817d167 +0x05ae:  sub    $0x18,%esp
0817d16a +0x05b1:  mov    0x8(%ebp),%eax
0817d16d +0x05b4:  mov    %eax,(%esp)
0817d170 +0x05b7:  call   0817d6f4 <+0xb3b>
0817d175 +0x05bc:  mov    0xc(%ebp),%edx
0817d178 +0x05bf:  mov    %edx,0x4(%esp)
0817d17c +0x05c3:  mov    %eax,(%esp)
0817d17f +0x05c6:  call   0817d712 <+0xb59>
0817d184 +0x05cb:  mov    0xc(%ebp),%eax
0817d187 +0x05ce:  mov    %eax,0x4(%esp)
0817d18b +0x05d2:  mov    0x8(%ebp),%eax
0817d18e +0x05d5:  mov    %eax,(%esp)
0817d191 +0x05d8:  call   0817d726 <+0xb6d>
0817d196 +0x05dd:  leave
0817d197 +0x05de:  ret
0817d198 +0x05df:  push   %ebp
0817d199 +0x05e0:  mov    %esp,%ebp
0817d19b +0x05e2:  mov    0x8(%ebp),%eax
0817d19e +0x05e5:  add    $0x4,%eax
0817d1a1 +0x05e8:  pop    %ebp
0817d1a2 +0x05e9:  ret
0817d1a3 +0x05ea:  nop
0817d1a4 +0x05eb:  push   %ebp
0817d1a5 +0x05ec:  mov    %esp,%ebp
0817d1a7 +0x05ee:  mov    0x8(%ebp),%eax
0817d1aa +0x05f1:  add    $0xc,%eax
0817d1ad +0x05f4:  pop    %ebp
0817d1ae +0x05f5:  ret
0817d1af +0x05f6:  nop
0817d1b0 +0x05f7:  push   %ebp
0817d1b1 +0x05f8:  mov    %esp,%ebp
0817d1b3 +0x05fa:  mov    0x8(%ebp),%eax
0817d1b6 +0x05fd:  add    $0x8,%eax
0817d1b9 +0x0600:  pop    %ebp
0817d1ba +0x0601:  ret
0817d1bb +0x0602:  nop
0817d1bc +0x0603:  push   %ebp
0817d1bd +0x0604:  mov    %esp,%ebp
0817d1bf +0x0606:  mov    0x8(%ebp),%eax
0817d1c2 +0x0609:  add    $0x10,%eax
0817d1c5 +0x060c:  pop    %ebp
0817d1c6 +0x060d:  ret
0817d1c7 +0x060e:  nop
0817d1c8 +0x060f:  push   %ebp
0817d1c9 +0x0610:  mov    %esp,%ebp
0817d1cb +0x0612:  push   %esi
0817d1cc +0x0613:  push   %ebx
0817d1cd +0x0614:  sub    $0x20,%esp
0817d1d0 +0x0617:  mov    0x8(%ebp),%esi
0817d1d3 +0x061a:  mov    0xc(%ebp),%eax
0817d1d6 +0x061d:  mov    %eax,(%esp)
0817d1d9 +0x0620:  call   0817d198 <+0x5df>
0817d1de +0x0625:  mov    %eax,%ebx
0817d1e0 +0x0627:  mov    0xc(%ebp),%eax
0817d1e3 +0x062a:  mov    %eax,(%esp)
0817d1e6 +0x062d:  call   0817cea2 <+0x2e9>
0817d1eb +0x0632:  mov    0x10(%ebp),%edx
0817d1ee +0x0635:  mov    %edx,0x10(%esp)
0817d1f2 +0x0639:  mov    %ebx,0xc(%esp)
0817d1f6 +0x063d:  mov    %eax,0x8(%esp)
0817d1fa +0x0641:  mov    0xc(%ebp),%eax
0817d1fd +0x0644:  mov    %eax,0x4(%esp)
0817d201 +0x0648:  mov    %esi,(%esp)
0817d204 +0x064b:  call   0817d602 <+0xa49>
0817d209 +0x0650:  sub    $0x4,%esp
0817d20c +0x0653:  mov    %esi,%eax
0817d20e +0x0655:  lea    -0x8(%ebp),%esp
0817d211 +0x0658:  add    $0x0,%esp
0817d214 +0x065b:  pop    %ebx
0817d215 +0x065c:  pop    %esi
0817d216 +0x065d:  pop    %ebp
0817d217 +0x065e:  ret    $0x4
0817d21a +0x0661:  push   %ebp
0817d21b +0x0662:  mov    %esp,%ebp
0817d21d +0x0664:  mov    0x8(%ebp),%eax
0817d220 +0x0667:  pop    %ebp
0817d221 +0x0668:  ret    $0x4
0817d224 +0x066b:  push   %ebp
0817d225 +0x066c:  mov    %esp,%ebp
0817d227 +0x066e:  mov    0x8(%ebp),%eax
0817d22a +0x0671:  pop    %ebp
0817d22b +0x0672:  ret
0817d22c +0x0673:  push   %ebp
0817d22d +0x0674:  mov    %esp,%ebp
0817d22f +0x0676:  mov    0xc(%ebp),%eax
0817d232 +0x0679:  mov    (%eax),%edx
0817d234 +0x067b:  mov    0x8(%ebp),%eax
0817d237 +0x067e:  mov    %edx,(%eax)
0817d239 +0x0680:  pop    %ebp
0817d23a +0x0681:  ret
0817d23b +0x0682:  nop
0817d23c +0x0683:  push   %ebp
0817d23d +0x0684:  mov    %esp,%ebp
0817d23f +0x0686:  push   %esi
0817d240 +0x0687:  push   %ebx
0817d241 +0x0688:  sub    $0x50,%esp
0817d244 +0x068b:  mov    0x8(%ebp),%ebx
0817d247 +0x068e:  mov    0x10(%ebp),%esi
0817d24a +0x0691:  mov    0xc(%ebp),%eax
0817d24d +0x0694:  mov    %eax,(%esp)
0817d250 +0x0697:  call   0817d198 <+0x5df>
0817d255 +0x069c:  cmp    %eax,%esi
0817d257 +0x069e:  sete   %al
0817d25a +0x06a1:  test   %al,%al
0817d25c +0x06a3:  je     0817d31e <+0x765>
0817d262 +0x06a9:  mov    0xc(%ebp),%eax
0817d265 +0x06ac:  mov    %eax,(%esp)
0817d268 +0x06af:  call   0817d750 <+0xb97>
0817d26d +0x06b4:  test   %eax,%eax
0817d26f +0x06b6:  je     0817d2b8 <+0x6ff>
0817d271 +0x06b8:  mov    0x14(%ebp),%eax
0817d274 +0x06bb:  mov    %eax,0x4(%esp)
0817d278 +0x06bf:  lea    -0x29(%ebp),%eax
0817d27b +0x06c2:  mov    %eax,(%esp)
0817d27e +0x06c5:  call   0817d748 <+0xb8f>
0817d283 +0x06ca:  mov    %eax,%esi
0817d285 +0x06cc:  mov    0xc(%ebp),%eax
0817d288 +0x06cf:  mov    %eax,(%esp)
0817d28b +0x06d2:  call   0817d1bc <+0x603>
0817d290 +0x06d7:  mov    (%eax),%eax
0817d292 +0x06d9:  mov    %eax,(%esp)
0817d295 +0x06dc:  call   0817d67e <+0xac5>
0817d29a +0x06e1:  mov    0xc(%ebp),%edx
0817d29d +0x06e4:  mov    %esi,0x8(%esp)
0817d2a1 +0x06e8:  mov    %eax,0x4(%esp)
0817d2a5 +0x06ec:  mov    %edx,(%esp)
0817d2a8 +0x06ef:  call   080d4a60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x98ad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x98ad
0817d2ad +0x06f4:  test   %al,%al
0817d2af +0x06f6:  je     0817d2b8 <+0x6ff>
0817d2b1 +0x06f8:  mov    $0x1,%eax
0817d2b6 +0x06fd:  jmp    0817d2bd <+0x704>
0817d2b8 +0x06ff:  mov    $0x0,%eax
0817d2bd +0x0704:  test   %al,%al
0817d2bf +0x0706:  je     0817d2f8 <+0x73f>
0817d2c1 +0x0708:  mov    0xc(%ebp),%eax
0817d2c4 +0x070b:  mov    %eax,(%esp)
0817d2c7 +0x070e:  call   0817d1bc <+0x603>
0817d2cc +0x0713:  mov    (%eax),%eax
0817d2ce +0x0715:  mov    0x14(%ebp),%edx
0817d2d1 +0x0718:  mov    %edx,0x10(%esp)
0817d2d5 +0x071c:  mov    %eax,0xc(%esp)
0817d2d9 +0x0720:  movl   $0x0,0x8(%esp)
0817d2e1 +0x0728:  mov    0xc(%ebp),%eax
0817d2e4 +0x072b:  mov    %eax,0x4(%esp)
0817d2e8 +0x072f:  mov    %ebx,(%esp)
0817d2eb +0x0732:  call   0817d75c <+0xba3>
0817d2f0 +0x0737:  sub    $0x4,%esp
0817d2f3 +0x073a:  jmp    0817d5f3 <+0xa3a>
0817d2f8 +0x073f:  lea    -0x28(%ebp),%eax
0817d2fb +0x0742:  mov    0x14(%ebp),%edx
0817d2fe +0x0745:  mov    %edx,0x8(%esp)
0817d302 +0x0749:  mov    0xc(%ebp),%edx
0817d305 +0x074c:  mov    %edx,0x4(%esp)
0817d309 +0x0750:  mov    %eax,(%esp)
0817d30c +0x0753:  call   0817d824 <+0xc6b>
0817d311 +0x0758:  sub    $0x4,%esp
0817d314 +0x075b:  mov    -0x28(%ebp),%eax
0817d317 +0x075e:  mov    %eax,(%ebx)
0817d319 +0x0760:  jmp    0817d5f3 <+0xa3a>
0817d31e +0x0765:  mov    0x10(%ebp),%eax
0817d321 +0x0768:  mov    %eax,(%esp)
0817d324 +0x076b:  call   0817d67e <+0xac5>
0817d329 +0x0770:  mov    %eax,%esi
0817d32b +0x0772:  mov    0x14(%ebp),%eax
0817d32e +0x0775:  mov    %eax,0x4(%esp)
0817d332 +0x0779:  lea    -0x1e(%ebp),%eax
0817d335 +0x077c:  mov    %eax,(%esp)
0817d338 +0x077f:  call   0817d748 <+0xb8f>
0817d33d +0x0784:  mov    0xc(%ebp),%edx
0817d340 +0x0787:  mov    %esi,0x8(%esp)
0817d344 +0x078b:  mov    %eax,0x4(%esp)
0817d348 +0x078f:  mov    %edx,(%esp)
0817d34b +0x0792:  call   080d4a60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x98ad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x98ad
0817d350 +0x0797:  test   %al,%al
0817d352 +0x0799:  je     0817d48a <+0x8d1>
0817d358 +0x079f:  mov    0x10(%ebp),%eax
0817d35b +0x07a2:  mov    %eax,-0x30(%ebp)
0817d35e +0x07a5:  mov    0x10(%ebp),%esi
0817d361 +0x07a8:  mov    0xc(%ebp),%eax
0817d364 +0x07ab:  mov    %eax,(%esp)
0817d367 +0x07ae:  call   0817d1a4 <+0x5eb>
0817d36c +0x07b3:  mov    (%eax),%eax
0817d36e +0x07b5:  cmp    %eax,%esi
0817d370 +0x07b7:  sete   %al
0817d373 +0x07ba:  test   %al,%al
0817d375 +0x07bc:  je     0817d3b7 <+0x7fe>
0817d377 +0x07be:  mov    0xc(%ebp),%eax
0817d37a +0x07c1:  mov    %eax,(%esp)
0817d37d +0x07c4:  call   0817d1a4 <+0x5eb>
0817d382 +0x07c9:  mov    (%eax),%esi
0817d384 +0x07cb:  mov    0xc(%ebp),%eax
0817d387 +0x07ce:  mov    %eax,(%esp)
0817d38a +0x07d1:  call   0817d1a4 <+0x5eb>
0817d38f +0x07d6:  mov    (%eax),%eax
0817d391 +0x07d8:  mov    0x14(%ebp),%edx
0817d394 +0x07db:  mov    %edx,0x10(%esp)
0817d398 +0x07df:  mov    %esi,0xc(%esp)
0817d39c +0x07e3:  mov    %eax,0x8(%esp)
0817d3a0 +0x07e7:  mov    0xc(%ebp),%eax
0817d3a3 +0x07ea:  mov    %eax,0x4(%esp)
0817d3a7 +0x07ee:  mov    %ebx,(%esp)
0817d3aa +0x07f1:  call   0817d75c <+0xba3>
0817d3af +0x07f6:  sub    $0x4,%esp
0817d3b2 +0x07f9:  jmp    0817d5f3 <+0xa3a>
0817d3b7 +0x07fe:  mov    0x14(%ebp),%eax
0817d3ba +0x0801:  mov    %eax,0x4(%esp)
0817d3be +0x0805:  lea    -0x1d(%ebp),%eax
0817d3c1 +0x0808:  mov    %eax,(%esp)
0817d3c4 +0x080b:  call   0817d748 <+0xb8f>
0817d3c9 +0x0810:  mov    %eax,%esi
0817d3cb +0x0812:  lea    -0x30(%ebp),%eax
0817d3ce +0x0815:  mov    %eax,(%esp)
0817d3d1 +0x0818:  call   0817d9f4 <+0xe3b>
0817d3d6 +0x081d:  mov    (%eax),%eax
0817d3d8 +0x081f:  mov    %eax,(%esp)
0817d3db +0x0822:  call   0817d67e <+0xac5>
0817d3e0 +0x0827:  mov    0xc(%ebp),%edx
0817d3e3 +0x082a:  mov    %esi,0x8(%esp)
0817d3e7 +0x082e:  mov    %eax,0x4(%esp)
0817d3eb +0x0832:  mov    %edx,(%esp)
0817d3ee +0x0835:  call   080d4a60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x98ad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x98ad
0817d3f3 +0x083a:  test   %al,%al
0817d3f5 +0x083c:  je     0817d464 <+0x8ab>
0817d3f7 +0x083e:  mov    -0x30(%ebp),%eax
0817d3fa +0x0841:  mov    %eax,(%esp)
0817d3fd +0x0844:  call   0817da11 <+0xe58>
0817d402 +0x0849:  test   %eax,%eax
0817d404 +0x084b:  sete   %al
0817d407 +0x084e:  test   %al,%al
0817d409 +0x0850:  je     0817d438 <+0x87f>
0817d40b +0x0852:  mov    -0x30(%ebp),%eax
0817d40e +0x0855:  mov    0x14(%ebp),%edx
0817d411 +0x0858:  mov    %edx,0x10(%esp)
0817d415 +0x085c:  mov    %eax,0xc(%esp)
0817d419 +0x0860:  movl   $0x0,0x8(%esp)
0817d421 +0x0868:  mov    0xc(%ebp),%eax
0817d424 +0x086b:  mov    %eax,0x4(%esp)
0817d428 +0x086f:  mov    %ebx,(%esp)
0817d42b +0x0872:  call   0817d75c <+0xba3>
0817d430 +0x0877:  sub    $0x4,%esp
0817d433 +0x087a:  jmp    0817d5f3 <+0xa3a>
0817d438 +0x087f:  mov    0x10(%ebp),%edx
0817d43b +0x0882:  mov    0x10(%ebp),%eax
0817d43e +0x0885:  mov    0x14(%ebp),%ecx
0817d441 +0x0888:  mov    %ecx,0x10(%esp)
0817d445 +0x088c:  mov    %edx,0xc(%esp)
0817d449 +0x0890:  mov    %eax,0x8(%esp)
0817d44d +0x0894:  mov    0xc(%ebp),%eax
0817d450 +0x0897:  mov    %eax,0x4(%esp)
0817d454 +0x089b:  mov    %ebx,(%esp)
0817d457 +0x089e:  call   0817d75c <+0xba3>
0817d45c +0x08a3:  sub    $0x4,%esp
0817d45f +0x08a6:  jmp    0817d5f3 <+0xa3a>
0817d464 +0x08ab:  lea    -0x1c(%ebp),%eax
0817d467 +0x08ae:  mov    0x14(%ebp),%edx
0817d46a +0x08b1:  mov    %edx,0x8(%esp)
0817d46e +0x08b5:  mov    0xc(%ebp),%edx
0817d471 +0x08b8:  mov    %edx,0x4(%esp)
0817d475 +0x08bc:  mov    %eax,(%esp)
0817d478 +0x08bf:  call   0817d824 <+0xc6b>
0817d47d +0x08c4:  sub    $0x4,%esp
0817d480 +0x08c7:  mov    -0x1c(%ebp),%eax
0817d483 +0x08ca:  mov    %eax,(%ebx)
0817d485 +0x08cc:  jmp    0817d5f3 <+0xa3a>
0817d48a +0x08d1:  mov    0x14(%ebp),%eax
0817d48d +0x08d4:  mov    %eax,0x4(%esp)
0817d491 +0x08d8:  lea    -0x12(%ebp),%eax
0817d494 +0x08db:  mov    %eax,(%esp)
0817d497 +0x08de:  call   0817d748 <+0xb8f>
0817d49c +0x08e3:  mov    %eax,%esi
0817d49e +0x08e5:  mov    0x10(%ebp),%eax
0817d4a1 +0x08e8:  mov    %eax,(%esp)
0817d4a4 +0x08eb:  call   0817d67e <+0xac5>
0817d4a9 +0x08f0:  mov    0xc(%ebp),%edx
0817d4ac +0x08f3:  mov    %esi,0x8(%esp)
0817d4b0 +0x08f7:  mov    %eax,0x4(%esp)
0817d4b4 +0x08fb:  mov    %edx,(%esp)
0817d4b7 +0x08fe:  call   080d4a60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x98ad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x98ad
0817d4bc +0x0903:  test   %al,%al
0817d4be +0x0905:  je     0817d5e4 <+0xa2b>
0817d4c4 +0x090b:  mov    0x10(%ebp),%eax
0817d4c7 +0x090e:  mov    %eax,-0x34(%ebp)
0817d4ca +0x0911:  mov    0x10(%ebp),%esi
0817d4cd +0x0914:  mov    0xc(%ebp),%eax
0817d4d0 +0x0917:  mov    %eax,(%esp)
0817d4d3 +0x091a:  call   0817d1bc <+0x603>
0817d4d8 +0x091f:  mov    (%eax),%eax
0817d4da +0x0921:  cmp    %eax,%esi
0817d4dc +0x0923:  sete   %al
0817d4df +0x0926:  test   %al,%al
0817d4e1 +0x0928:  je     0817d51a <+0x961>
0817d4e3 +0x092a:  mov    0xc(%ebp),%eax
0817d4e6 +0x092d:  mov    %eax,(%esp)
0817d4e9 +0x0930:  call   0817d1bc <+0x603>
0817d4ee +0x0935:  mov    (%eax),%eax
0817d4f0 +0x0937:  mov    0x14(%ebp),%edx
0817d4f3 +0x093a:  mov    %edx,0x10(%esp)
0817d4f7 +0x093e:  mov    %eax,0xc(%esp)
0817d4fb +0x0942:  movl   $0x0,0x8(%esp)
0817d503 +0x094a:  mov    0xc(%ebp),%eax
0817d506 +0x094d:  mov    %eax,0x4(%esp)
0817d50a +0x0951:  mov    %ebx,(%esp)
0817d50d +0x0954:  call   0817d75c <+0xba3>
0817d512 +0x0959:  sub    $0x4,%esp
0817d515 +0x095c:  jmp    0817d5f3 <+0xa3a>
0817d51a +0x0961:  lea    -0x34(%ebp),%eax
0817d51d +0x0964:  mov    %eax,(%esp)
0817d520 +0x0967:  call   0817da1c <+0xe63>
0817d525 +0x096c:  mov    (%eax),%eax
0817d527 +0x096e:  mov    %eax,(%esp)
0817d52a +0x0971:  call   0817d67e <+0xac5>
0817d52f +0x0976:  mov    %eax,%esi
0817d531 +0x0978:  mov    0x14(%ebp),%eax
0817d534 +0x097b:  mov    %eax,0x4(%esp)
0817d538 +0x097f:  lea    -0x11(%ebp),%eax
0817d53b +0x0982:  mov    %eax,(%esp)
0817d53e +0x0985:  call   0817d748 <+0xb8f>
0817d543 +0x098a:  mov    0xc(%ebp),%edx
0817d546 +0x098d:  mov    %esi,0x8(%esp)
0817d54a +0x0991:  mov    %eax,0x4(%esp)
0817d54e +0x0995:  mov    %edx,(%esp)
0817d551 +0x0998:  call   080d4a60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x98ad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x98ad
0817d556 +0x099d:  test   %al,%al
0817d558 +0x099f:  je     0817d5c1 <+0xa08>
0817d55a +0x09a1:  mov    0x10(%ebp),%eax
0817d55d +0x09a4:  mov    %eax,(%esp)
0817d560 +0x09a7:  call   0817da11 <+0xe58>
0817d565 +0x09ac:  test   %eax,%eax
0817d567 +0x09ae:  sete   %al
0817d56a +0x09b1:  test   %al,%al
0817d56c +0x09b3:  je     0817d598 <+0x9df>
0817d56e +0x09b5:  mov    0x10(%ebp),%eax
0817d571 +0x09b8:  mov    0x14(%ebp),%edx
0817d574 +0x09bb:  mov    %edx,0x10(%esp)
0817d578 +0x09bf:  mov    %eax,0xc(%esp)
0817d57c +0x09c3:  movl   $0x0,0x8(%esp)
0817d584 +0x09cb:  mov    0xc(%ebp),%eax
0817d587 +0x09ce:  mov    %eax,0x4(%esp)
0817d58b +0x09d2:  mov    %ebx,(%esp)
0817d58e +0x09d5:  call   0817d75c <+0xba3>
0817d593 +0x09da:  sub    $0x4,%esp
0817d596 +0x09dd:  jmp    0817d5f3 <+0xa3a>
0817d598 +0x09df:  mov    -0x34(%ebp),%edx
0817d59b +0x09e2:  mov    -0x34(%ebp),%eax
0817d59e +0x09e5:  mov    0x14(%ebp),%ecx
0817d5a1 +0x09e8:  mov    %ecx,0x10(%esp)
0817d5a5 +0x09ec:  mov    %edx,0xc(%esp)
0817d5a9 +0x09f0:  mov    %eax,0x8(%esp)
0817d5ad +0x09f4:  mov    0xc(%ebp),%eax
0817d5b0 +0x09f7:  mov    %eax,0x4(%esp)
0817d5b4 +0x09fb:  mov    %ebx,(%esp)
0817d5b7 +0x09fe:  call   0817d75c <+0xba3>
0817d5bc +0x0a03:  sub    $0x4,%esp
0817d5bf +0x0a06:  jmp    0817d5f3 <+0xa3a>
0817d5c1 +0x0a08:  lea    -0x10(%ebp),%eax
0817d5c4 +0x0a0b:  mov    0x14(%ebp),%edx
0817d5c7 +0x0a0e:  mov    %edx,0x8(%esp)
0817d5cb +0x0a12:  mov    0xc(%ebp),%edx
0817d5ce +0x0a15:  mov    %edx,0x4(%esp)
0817d5d2 +0x0a19:  mov    %eax,(%esp)
0817d5d5 +0x0a1c:  call   0817d824 <+0xc6b>
0817d5da +0x0a21:  sub    $0x4,%esp
0817d5dd +0x0a24:  mov    -0x10(%ebp),%eax
0817d5e0 +0x0a27:  mov    %eax,(%ebx)
0817d5e2 +0x0a29:  jmp    0817d5f3 <+0xa3a>
0817d5e4 +0x0a2b:  mov    0x10(%ebp),%eax
0817d5e7 +0x0a2e:  mov    %eax,0x4(%esp)
0817d5eb +0x0a32:  mov    %ebx,(%esp)
0817d5ee +0x0a35:  call   0817d6a0 <+0xae7>
0817d5f3 +0x0a3a:  mov    %ebx,%eax
0817d5f5 +0x0a3c:  lea    -0x8(%ebp),%esp
0817d5f8 +0x0a3f:  add    $0x0,%esp
0817d5fb +0x0a42:  pop    %ebx
0817d5fc +0x0a43:  pop    %esi
0817d5fd +0x0a44:  pop    %ebp
0817d5fe +0x0a45:  ret    $0x4
0817d601 +0x0a48:  nop
0817d602 +0x0a49:  push   %ebp
0817d603 +0x0a4a:  mov    %esp,%ebp
0817d605 +0x0a4c:  push   %ebx
0817d606 +0x0a4d:  sub    $0x14,%esp
0817d609 +0x0a50:  mov    0x8(%ebp),%ebx
0817d60c +0x0a53:  jmp    0817d65a <+0xaa1>
0817d60e +0x0a55:  mov    0x10(%ebp),%eax
0817d611 +0x0a58:  mov    %eax,(%esp)
0817d614 +0x0a5b:  call   0817da39 <+0xe80>
0817d619 +0x0a60:  mov    0xc(%ebp),%edx
0817d61c +0x0a63:  mov    0x18(%ebp),%ecx
0817d61f +0x0a66:  mov    %ecx,0x8(%esp)
0817d623 +0x0a6a:  mov    %eax,0x4(%esp)
0817d627 +0x0a6e:  mov    %edx,(%esp)
0817d62a +0x0a71:  call   080d4a60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x98ad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x98ad
0817d62f +0x0a76:  xor    $0x1,%eax
0817d632 +0x0a79:  test   %al,%al
0817d634 +0x0a7b:  je     0817d64c <+0xa93>
0817d636 +0x0a7d:  mov    0x10(%ebp),%eax
0817d639 +0x0a80:  mov    %eax,0x14(%ebp)
0817d63c +0x0a83:  mov    0x10(%ebp),%eax
0817d63f +0x0a86:  mov    %eax,(%esp)
0817d642 +0x0a89:  call   0817d158 <+0x59f>
0817d647 +0x0a8e:  mov    %eax,0x10(%ebp)
0817d64a +0x0a91:  jmp    0817d65a <+0xaa1>
0817d64c +0x0a93:  mov    0x10(%ebp),%eax
0817d64f +0x0a96:  mov    %eax,(%esp)
0817d652 +0x0a99:  call   0817d14d <+0x594>
0817d657 +0x0a9e:  mov    %eax,0x10(%ebp)
0817d65a +0x0aa1:  cmpl   $0x0,0x10(%ebp)
0817d65e +0x0aa5:  setne  %al
0817d661 +0x0aa8:  test   %al,%al
0817d663 +0x0aaa:  jne    0817d60e <+0xa55>
0817d665 +0x0aac:  mov    0x14(%ebp),%eax
0817d668 +0x0aaf:  mov    %eax,0x4(%esp)
0817d66c +0x0ab3:  mov    %ebx,(%esp)
0817d66f +0x0ab6:  call   0817d6a0 <+0xae7>
0817d674 +0x0abb:  mov    %ebx,%eax
0817d676 +0x0abd:  add    $0x14,%esp
0817d679 +0x0ac0:  pop    %ebx
0817d67a +0x0ac1:  pop    %ebp
0817d67b +0x0ac2:  ret    $0x4
0817d67e +0x0ac5:  push   %ebp
0817d67f +0x0ac6:  mov    %esp,%ebp
0817d681 +0x0ac8:  sub    $0x28,%esp
0817d684 +0x0acb:  mov    0x8(%ebp),%eax
0817d687 +0x0ace:  mov    %eax,(%esp)
0817d68a +0x0ad1:  call   0817da5b <+0xea2>
0817d68f +0x0ad6:  mov    %eax,0x4(%esp)
0817d693 +0x0ada:  lea    -0x9(%ebp),%eax
0817d696 +0x0add:  mov    %eax,(%esp)
0817d699 +0x0ae0:  call   0817d748 <+0xb8f>
0817d69e +0x0ae5:  leave
0817d69f +0x0ae6:  ret
0817d6a0 +0x0ae7:  push   %ebp
0817d6a1 +0x0ae8:  mov    %esp,%ebp
0817d6a3 +0x0aea:  mov    0xc(%ebp),%edx
0817d6a6 +0x0aed:  mov    0x8(%ebp),%eax
0817d6a9 +0x0af0:  mov    %edx,(%eax)
0817d6ab +0x0af2:  pop    %ebp
0817d6ac +0x0af3:  ret
0817d6ad +0x0af4:  nop
0817d6ae +0x0af5:  push   %ebp
0817d6af +0x0af6:  mov    %esp,%ebp
0817d6b1 +0x0af8:  sub    $0x18,%esp
0817d6b4 +0x0afb:  mov    0x8(%ebp),%eax
0817d6b7 +0x0afe:  mov    %eax,(%esp)
0817d6ba +0x0b01:  call   0817da66 <+0xead>
0817d6bf +0x0b06:  leave
0817d6c0 +0x0b07:  ret
0817d6c1 +0x0b08:  nop
0817d6c2 +0x0b09:  push   %ebp
0817d6c3 +0x0b0a:  mov    %esp,%ebp
0817d6c5 +0x0b0c:  mov    0x8(%ebp),%eax
0817d6c8 +0x0b0f:  movl   $0x0,0x4(%eax)
0817d6cf +0x0b16:  mov    0x8(%ebp),%eax
0817d6d2 +0x0b19:  movl   $0x0,0x8(%eax)
0817d6d9 +0x0b20:  mov    0x8(%ebp),%eax
0817d6dc +0x0b23:  lea    0x4(%eax),%edx
0817d6df +0x0b26:  mov    0x8(%ebp),%eax
0817d6e2 +0x0b29:  mov    %edx,0xc(%eax)
0817d6e5 +0x0b2c:  mov    0x8(%ebp),%eax
0817d6e8 +0x0b2f:  lea    0x4(%eax),%edx
0817d6eb +0x0b32:  mov    0x8(%ebp),%eax
0817d6ee +0x0b35:  mov    %edx,0x10(%eax)
0817d6f1 +0x0b38:  pop    %ebp
0817d6f2 +0x0b39:  ret
0817d6f3 +0x0b3a:  nop
0817d6f4 +0x0b3b:  push   %ebp
0817d6f5 +0x0b3c:  mov    %esp,%ebp
0817d6f7 +0x0b3e:  mov    0x8(%ebp),%eax
0817d6fa +0x0b41:  pop    %ebp
0817d6fb +0x0b42:  ret
0817d6fc +0x0b43:  push   %ebp
0817d6fd +0x0b44:  mov    %esp,%ebp
0817d6ff +0x0b46:  sub    $0x18,%esp
0817d702 +0x0b49:  mov    0x8(%ebp),%eax
0817d705 +0x0b4c:  add    $0x10,%eax
0817d708 +0x0b4f:  mov    %eax,(%esp)
0817d70b +0x0b52:  call   0817cc78 <+0xbf>
0817d710 +0x0b57:  leave
0817d711 +0x0b58:  ret
0817d712 +0x0b59:  push   %ebp
0817d713 +0x0b5a:  mov    %esp,%ebp
0817d715 +0x0b5c:  sub    $0x18,%esp
0817d718 +0x0b5f:  mov    0xc(%ebp),%eax
0817d71b +0x0b62:  mov    %eax,(%esp)
0817d71e +0x0b65:  call   0817d6fc <+0xb43>
0817d723 +0x0b6a:  leave
0817d724 +0x0b6b:  ret
0817d725 +0x0b6c:  nop
0817d726 +0x0b6d:  push   %ebp
0817d727 +0x0b6e:  mov    %esp,%ebp
0817d729 +0x0b70:  sub    $0x18,%esp
0817d72c +0x0b73:  mov    0x8(%ebp),%eax
0817d72f +0x0b76:  movl   $0x1,0x8(%esp)
0817d737 +0x0b7e:  mov    0xc(%ebp),%edx
0817d73a +0x0b81:  mov    %edx,0x4(%esp)
0817d73e +0x0b85:  mov    %eax,(%esp)
0817d741 +0x0b88:  call   0817da6c <+0xeb3>
0817d746 +0x0b8d:  leave
0817d747 +0x0b8e:  ret
0817d748 +0x0b8f:  push   %ebp
0817d749 +0x0b90:  mov    %esp,%ebp
0817d74b +0x0b92:  mov    0xc(%ebp),%eax
0817d74e +0x0b95:  pop    %ebp
0817d74f +0x0b96:  ret
0817d750 +0x0b97:  push   %ebp
0817d751 +0x0b98:  mov    %esp,%ebp
0817d753 +0x0b9a:  mov    0x8(%ebp),%eax
0817d756 +0x0b9d:  mov    0x14(%eax),%eax
0817d759 +0x0ba0:  pop    %ebp
0817d75a +0x0ba1:  ret
0817d75b +0x0ba2:  nop
0817d75c +0x0ba3:  push   %ebp
0817d75d +0x0ba4:  mov    %esp,%ebp
0817d75f +0x0ba6:  push   %esi
0817d760 +0x0ba7:  push   %ebx
0817d761 +0x0ba8:  sub    $0x20,%esp
0817d764 +0x0bab:  mov    0x8(%ebp),%esi
0817d767 +0x0bae:  cmpl   $0x0,0x10(%ebp)
0817d76b +0x0bb2:  jne    0817d7b3 <+0xbfa>
0817d76d +0x0bb4:  mov    0xc(%ebp),%eax
0817d770 +0x0bb7:  mov    %eax,(%esp)
0817d773 +0x0bba:  call   0817d198 <+0x5df>
0817d778 +0x0bbf:  cmp    0x14(%ebp),%eax
0817d77b +0x0bc2:  je     0817d7b3 <+0xbfa>
0817d77d +0x0bc4:  mov    0x14(%ebp),%eax
0817d780 +0x0bc7:  mov    %eax,(%esp)
0817d783 +0x0bca:  call   0817d67e <+0xac5>
0817d788 +0x0bcf:  mov    %eax,%ebx
0817d78a +0x0bd1:  mov    0x18(%ebp),%eax
0817d78d +0x0bd4:  mov    %eax,0x4(%esp)
0817d791 +0x0bd8:  lea    -0xe(%ebp),%eax
0817d794 +0x0bdb:  mov    %eax,(%esp)
0817d797 +0x0bde:  call   0817d748 <+0xb8f>
0817d79c +0x0be3:  mov    0xc(%ebp),%edx
0817d79f +0x0be6:  mov    %ebx,0x8(%esp)
0817d7a3 +0x0bea:  mov    %eax,0x4(%esp)
0817d7a7 +0x0bee:  mov    %edx,(%esp)
0817d7aa +0x0bf1:  call   080d4a60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x98ad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x98ad
0817d7af +0x0bf6:  test   %al,%al
0817d7b1 +0x0bf8:  je     0817d7ba <+0xc01>
0817d7b3 +0x0bfa:  mov    $0x1,%eax
0817d7b8 +0x0bff:  jmp    0817d7bf <+0xc06>
0817d7ba +0x0c01:  mov    $0x0,%eax
0817d7bf +0x0c06:  mov    %al,-0xd(%ebp)
0817d7c2 +0x0c09:  mov    0x18(%ebp),%eax
0817d7c5 +0x0c0c:  mov    %eax,0x4(%esp)
0817d7c9 +0x0c10:  mov    0xc(%ebp),%eax
0817d7cc +0x0c13:  mov    %eax,(%esp)
0817d7cf +0x0c16:  call   0817da80 <+0xec7>
0817d7d4 +0x0c1b:  mov    %eax,-0xc(%ebp)
0817d7d7 +0x0c1e:  mov    0xc(%ebp),%eax
0817d7da +0x0c21:  lea    0x4(%eax),%ecx
0817d7dd +0x0c24:  mov    -0xc(%ebp),%edx
0817d7e0 +0x0c27:  movzbl -0xd(%ebp),%eax
0817d7e4 +0x0c2b:  mov    %ecx,0xc(%esp)
0817d7e8 +0x0c2f:  mov    0x14(%ebp),%ecx
0817d7eb +0x0c32:  mov    %ecx,0x8(%esp)
0817d7ef +0x0c36:  mov    %edx,0x4(%esp)
0817d7f3 +0x0c3a:  mov    %eax,(%esp)
0817d7f6 +0x0c3d:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0817d7fb +0x0c42:  mov    0xc(%ebp),%eax
0817d7fe +0x0c45:  mov    0x14(%eax),%eax
0817d801 +0x0c48:  lea    0x1(%eax),%edx
0817d804 +0x0c4b:  mov    0xc(%ebp),%eax
0817d807 +0x0c4e:  mov    %edx,0x14(%eax)
0817d80a +0x0c51:  mov    -0xc(%ebp),%eax
0817d80d +0x0c54:  mov    %eax,0x4(%esp)
0817d811 +0x0c58:  mov    %esi,(%esp)
0817d814 +0x0c5b:  call   0817d6a0 <+0xae7>
0817d819 +0x0c60:  mov    %esi,%eax
0817d81b +0x0c62:  add    $0x20,%esp
0817d81e +0x0c65:  pop    %ebx
0817d81f +0x0c66:  pop    %esi
0817d820 +0x0c67:  pop    %ebp
0817d821 +0x0c68:  ret    $0x4
0817d824 +0x0c6b:  push   %ebp
0817d825 +0x0c6c:  mov    %esp,%ebp
0817d827 +0x0c6e:  push   %esi
0817d828 +0x0c6f:  push   %ebx
0817d829 +0x0c70:  sub    $0x50,%esp
0817d82c +0x0c73:  mov    0x8(%ebp),%ebx
0817d82f +0x0c76:  mov    0xc(%ebp),%eax
0817d832 +0x0c79:  mov    %eax,(%esp)
0817d835 +0x0c7c:  call   0817cea2 <+0x2e9>
0817d83a +0x0c81:  mov    %eax,-0x14(%ebp)
0817d83d +0x0c84:  mov    0xc(%ebp),%eax
0817d840 +0x0c87:  mov    %eax,(%esp)
0817d843 +0x0c8a:  call   0817d198 <+0x5df>
0817d848 +0x0c8f:  mov    %eax,-0x10(%ebp)
0817d84b +0x0c92:  movb   $0x1,-0x9(%ebp)
0817d84f +0x0c96:  jmp    0817d8ad <+0xcf4>
0817d851 +0x0c98:  mov    -0x14(%ebp),%eax
0817d854 +0x0c9b:  mov    %eax,-0x10(%ebp)
0817d857 +0x0c9e:  mov    -0x14(%ebp),%eax
0817d85a +0x0ca1:  mov    %eax,(%esp)
0817d85d +0x0ca4:  call   0817da39 <+0xe80>
0817d862 +0x0ca9:  mov    %eax,%esi
0817d864 +0x0cab:  mov    0x10(%ebp),%eax
0817d867 +0x0cae:  mov    %eax,0x4(%esp)
0817d86b +0x0cb2:  lea    -0x2d(%ebp),%eax
0817d86e +0x0cb5:  mov    %eax,(%esp)
0817d871 +0x0cb8:  call   0817d748 <+0xb8f>
0817d876 +0x0cbd:  mov    0xc(%ebp),%edx
0817d879 +0x0cc0:  mov    %esi,0x8(%esp)
0817d87d +0x0cc4:  mov    %eax,0x4(%esp)
0817d881 +0x0cc8:  mov    %edx,(%esp)
0817d884 +0x0ccb:  call   080d4a60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x98ad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x98ad
0817d889 +0x0cd0:  mov    %al,-0x9(%ebp)
0817d88c +0x0cd3:  cmpb   $0x0,-0x9(%ebp)
0817d890 +0x0cd7:  je     0817d89f <+0xce6>
0817d892 +0x0cd9:  mov    -0x14(%ebp),%eax
0817d895 +0x0cdc:  mov    %eax,(%esp)
0817d898 +0x0cdf:  call   0817d158 <+0x59f>
0817d89d +0x0ce4:  jmp    0817d8aa <+0xcf1>
0817d89f +0x0ce6:  mov    -0x14(%ebp),%eax
0817d8a2 +0x0ce9:  mov    %eax,(%esp)
0817d8a5 +0x0cec:  call   0817d14d <+0x594>
0817d8aa +0x0cf1:  mov    %eax,-0x14(%ebp)
0817d8ad +0x0cf4:  cmpl   $0x0,-0x14(%ebp)
0817d8b1 +0x0cf8:  setne  %al
0817d8b4 +0x0cfb:  test   %al,%al
0817d8b6 +0x0cfd:  jne    0817d851 <+0xc98>
0817d8b8 +0x0cff:  mov    -0x10(%ebp),%eax
0817d8bb +0x0d02:  mov    %eax,0x4(%esp)
0817d8bf +0x0d06:  lea    -0x34(%ebp),%eax
0817d8c2 +0x0d09:  mov    %eax,(%esp)
0817d8c5 +0x0d0c:  call   0817d6a0 <+0xae7>
0817d8ca +0x0d11:  cmpb   $0x0,-0x9(%ebp)
0817d8ce +0x0d15:  je     0817d94f <+0xd96>
0817d8d0 +0x0d17:  lea    -0x2c(%ebp),%eax
0817d8d3 +0x0d1a:  mov    0xc(%ebp),%edx
0817d8d6 +0x0d1d:  mov    %edx,0x4(%esp)
0817d8da +0x0d21:  mov    %eax,(%esp)
0817d8dd +0x0d24:  call   0817db02 <+0xf49>
0817d8e2 +0x0d29:  sub    $0x4,%esp
0817d8e5 +0x0d2c:  lea    -0x2c(%ebp),%eax
0817d8e8 +0x0d2f:  mov    %eax,0x4(%esp)
0817d8ec +0x0d33:  lea    -0x34(%ebp),%eax
0817d8ef +0x0d36:  mov    %eax,(%esp)
0817d8f2 +0x0d39:  call   0817cf84 <+0x3cb>
0817d8f7 +0x0d3e:  test   %al,%al
0817d8f9 +0x0d40:  je     0817d944 <+0xd8b>
0817d8fb +0x0d42:  movb   $0x1,-0x25(%ebp)
0817d8ff +0x0d46:  mov    -0x10(%ebp),%ecx
0817d902 +0x0d49:  mov    -0x14(%ebp),%edx
0817d905 +0x0d4c:  lea    -0x24(%ebp),%eax
0817d908 +0x0d4f:  mov    0x10(%ebp),%esi
0817d90b +0x0d52:  mov    %esi,0x10(%esp)
0817d90f +0x0d56:  mov    %ecx,0xc(%esp)
0817d913 +0x0d5a:  mov    %edx,0x8(%esp)
0817d917 +0x0d5e:  mov    0xc(%ebp),%edx
0817d91a +0x0d61:  mov    %edx,0x4(%esp)
0817d91e +0x0d65:  mov    %eax,(%esp)
0817d921 +0x0d68:  call   0817d75c <+0xba3>
0817d926 +0x0d6d:  sub    $0x4,%esp
0817d929 +0x0d70:  lea    -0x25(%ebp),%eax
0817d92c +0x0d73:  mov    %eax,0x8(%esp)
0817d930 +0x0d77:  lea    -0x24(%ebp),%eax
0817d933 +0x0d7a:  mov    %eax,0x4(%esp)
0817d937 +0x0d7e:  mov    %ebx,(%esp)
0817d93a +0x0d81:  call   0817db28 <+0xf6f>
0817d93f +0x0d86:  jmp    0817d9e5 <+0xe2c>
0817d944 +0x0d8b:  lea    -0x34(%ebp),%eax
0817d947 +0x0d8e:  mov    %eax,(%esp)
0817d94a +0x0d91:  call   0817db56 <+0xf9d>
0817d94f +0x0d96:  mov    0x10(%ebp),%eax
0817d952 +0x0d99:  mov    %eax,0x4(%esp)
0817d956 +0x0d9d:  lea    -0x1e(%ebp),%eax
0817d959 +0x0da0:  mov    %eax,(%esp)
0817d95c +0x0da3:  call   0817d748 <+0xb8f>
0817d961 +0x0da8:  mov    %eax,%esi
0817d963 +0x0daa:  mov    -0x34(%ebp),%eax
0817d966 +0x0dad:  mov    %eax,(%esp)
0817d969 +0x0db0:  call   0817d67e <+0xac5>
0817d96e +0x0db5:  mov    0xc(%ebp),%edx
0817d971 +0x0db8:  mov    %esi,0x8(%esp)
0817d975 +0x0dbc:  mov    %eax,0x4(%esp)
0817d979 +0x0dc0:  mov    %edx,(%esp)
0817d97c +0x0dc3:  call   080d4a60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x98ad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x98ad
0817d981 +0x0dc8:  test   %al,%al
0817d983 +0x0dca:  je     0817d9cb <+0xe12>
0817d985 +0x0dcc:  movb   $0x1,-0x1d(%ebp)
0817d989 +0x0dd0:  mov    -0x10(%ebp),%ecx
0817d98c +0x0dd3:  mov    -0x14(%ebp),%edx
0817d98f +0x0dd6:  lea    -0x1c(%ebp),%eax
0817d992 +0x0dd9:  mov    0x10(%ebp),%esi
0817d995 +0x0ddc:  mov    %esi,0x10(%esp)
0817d999 +0x0de0:  mov    %ecx,0xc(%esp)
0817d99d +0x0de4:  mov    %edx,0x8(%esp)
0817d9a1 +0x0de8:  mov    0xc(%ebp),%edx
0817d9a4 +0x0deb:  mov    %edx,0x4(%esp)
0817d9a8 +0x0def:  mov    %eax,(%esp)
0817d9ab +0x0df2:  call   0817d75c <+0xba3>
0817d9b0 +0x0df7:  sub    $0x4,%esp
0817d9b3 +0x0dfa:  lea    -0x1d(%ebp),%eax
0817d9b6 +0x0dfd:  mov    %eax,0x8(%esp)
0817d9ba +0x0e01:  lea    -0x1c(%ebp),%eax
0817d9bd +0x0e04:  mov    %eax,0x4(%esp)
0817d9c1 +0x0e08:  mov    %ebx,(%esp)
0817d9c4 +0x0e0b:  call   0817db28 <+0xf6f>
0817d9c9 +0x0e10:  jmp    0817d9e5 <+0xe2c>
0817d9cb +0x0e12:  movb   $0x0,-0x15(%ebp)
0817d9cf +0x0e16:  lea    -0x15(%ebp),%eax
0817d9d2 +0x0e19:  mov    %eax,0x8(%esp)
0817d9d6 +0x0e1d:  lea    -0x34(%ebp),%eax
0817d9d9 +0x0e20:  mov    %eax,0x4(%esp)
0817d9dd +0x0e24:  mov    %ebx,(%esp)
0817d9e0 +0x0e27:  call   0817db74 <+0xfbb>
0817d9e5 +0x0e2c:  mov    %ebx,%eax
0817d9e7 +0x0e2e:  lea    -0x8(%ebp),%esp
0817d9ea +0x0e31:  add    $0x0,%esp
0817d9ed +0x0e34:  pop    %ebx
0817d9ee +0x0e35:  pop    %esi
0817d9ef +0x0e36:  pop    %ebp
0817d9f0 +0x0e37:  ret    $0x4
0817d9f3 +0x0e3a:  nop
0817d9f4 +0x0e3b:  push   %ebp
0817d9f5 +0x0e3c:  mov    %esp,%ebp
0817d9f7 +0x0e3e:  sub    $0x18,%esp
0817d9fa +0x0e41:  mov    0x8(%ebp),%eax
0817d9fd +0x0e44:  mov    (%eax),%eax
0817d9ff +0x0e46:  mov    %eax,(%esp)
0817da02 +0x0e49:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
0817da07 +0x0e4e:  mov    0x8(%ebp),%edx
0817da0a +0x0e51:  mov    %eax,(%edx)
0817da0c +0x0e53:  mov    0x8(%ebp),%eax
0817da0f +0x0e56:  leave
0817da10 +0x0e57:  ret
0817da11 +0x0e58:  push   %ebp
0817da12 +0x0e59:  mov    %esp,%ebp
0817da14 +0x0e5b:  mov    0x8(%ebp),%eax
0817da17 +0x0e5e:  mov    0xc(%eax),%eax
0817da1a +0x0e61:  pop    %ebp
0817da1b +0x0e62:  ret
0817da1c +0x0e63:  push   %ebp
0817da1d +0x0e64:  mov    %esp,%ebp
0817da1f +0x0e66:  sub    $0x18,%esp
0817da22 +0x0e69:  mov    0x8(%ebp),%eax
0817da25 +0x0e6c:  mov    (%eax),%eax
0817da27 +0x0e6e:  mov    %eax,(%esp)
0817da2a +0x0e71:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
0817da2f +0x0e76:  mov    0x8(%ebp),%edx
0817da32 +0x0e79:  mov    %eax,(%edx)
0817da34 +0x0e7b:  mov    0x8(%ebp),%eax
0817da37 +0x0e7e:  leave
0817da38 +0x0e7f:  ret
0817da39 +0x0e80:  push   %ebp
0817da3a +0x0e81:  mov    %esp,%ebp
0817da3c +0x0e83:  sub    $0x28,%esp
0817da3f +0x0e86:  mov    0x8(%ebp),%eax
0817da42 +0x0e89:  mov    %eax,(%esp)
0817da45 +0x0e8c:  call   0817dba2 <+0xfe9>
0817da4a +0x0e91:  mov    %eax,0x4(%esp)
0817da4e +0x0e95:  lea    -0x9(%ebp),%eax
0817da51 +0x0e98:  mov    %eax,(%esp)
0817da54 +0x0e9b:  call   0817d748 <+0xb8f>
0817da59 +0x0ea0:  leave
0817da5a +0x0ea1:  ret
0817da5b +0x0ea2:  push   %ebp
0817da5c +0x0ea3:  mov    %esp,%ebp
0817da5e +0x0ea5:  mov    0x8(%ebp),%eax
0817da61 +0x0ea8:  add    $0x10,%eax
0817da64 +0x0eab:  pop    %ebp
0817da65 +0x0eac:  ret
0817da66 +0x0ead:  push   %ebp
0817da67 +0x0eae:  mov    %esp,%ebp
0817da69 +0x0eb0:  pop    %ebp
0817da6a +0x0eb1:  ret
0817da6b +0x0eb2:  nop
0817da6c +0x0eb3:  push   %ebp
0817da6d +0x0eb4:  mov    %esp,%ebp
0817da6f +0x0eb6:  sub    $0x18,%esp
0817da72 +0x0eb9:  mov    0xc(%ebp),%eax
0817da75 +0x0ebc:  mov    %eax,(%esp)
0817da78 +0x0ebf:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0817da7d +0x0ec4:  leave
0817da7e +0x0ec5:  ret
0817da7f +0x0ec6:  nop
0817da80 +0x0ec7:  push   %ebp
0817da81 +0x0ec8:  mov    %esp,%ebp
0817da83 +0x0eca:  push   %esi
0817da84 +0x0ecb:  push   %ebx
0817da85 +0x0ecc:  sub    $0x20,%esp
0817da88 +0x0ecf:  mov    0x8(%ebp),%eax
0817da8b +0x0ed2:  mov    %eax,(%esp)
0817da8e +0x0ed5:  call   0817dbae <+0xff5>
0817da93 +0x0eda:  mov    %eax,-0xc(%ebp)
0817da96 +0x0edd:  mov    0xc(%ebp),%eax
0817da99 +0x0ee0:  mov    %eax,(%esp)
0817da9c +0x0ee3:  call   0817dbd1 <+0x1018>
0817daa1 +0x0ee8:  mov    %eax,%ebx
0817daa3 +0x0eea:  mov    0x8(%ebp),%eax
0817daa6 +0x0eed:  mov    %eax,(%esp)
0817daa9 +0x0ef0:  call   0817d6f4 <+0xb3b>
0817daae +0x0ef5:  mov    %ebx,0x8(%esp)
0817dab2 +0x0ef9:  mov    -0xc(%ebp),%edx
0817dab5 +0x0efc:  mov    %edx,0x4(%esp)
0817dab9 +0x0f00:  mov    %eax,(%esp)
0817dabc +0x0f03:  call   0817dbda <+0x1021>
0817dac1 +0x0f08:  jmp    0817daf7 <+0xf3e>
0817dac3 +0x0f0a:  mov    %eax,(%esp)
0817dac6 +0x0f0d:  call   08725ce0 <__cxa_begin_catch>
0817dacb +0x0f12:  mov    -0xc(%ebp),%eax
0817dace +0x0f15:  mov    %eax,0x4(%esp)
0817dad2 +0x0f19:  mov    0x8(%ebp),%eax
0817dad5 +0x0f1c:  mov    %eax,(%esp)
0817dad8 +0x0f1f:  call   0817d726 <+0xb6d>
0817dadd +0x0f24:  call   08724be0 <__cxa_rethrow>
0817dae2 +0x0f29:  mov    %edx,%ebx
0817dae4 +0x0f2b:  mov    %eax,%esi
0817dae6 +0x0f2d:  call   08725c30 <__cxa_end_catch>
0817daeb +0x0f32:  mov    %esi,%eax
0817daed +0x0f34:  mov    %ebx,%edx
0817daef +0x0f36:  mov    %eax,(%esp)
0817daf2 +0x0f39:  call   08ae3750 <_Unwind_Resume>
0817daf7 +0x0f3e:  mov    -0xc(%ebp),%eax
0817dafa +0x0f41:  add    $0x20,%esp
0817dafd +0x0f44:  pop    %ebx
0817dafe +0x0f45:  pop    %esi
0817daff +0x0f46:  pop    %ebp
0817db00 +0x0f47:  ret
0817db01 +0x0f48:  nop
0817db02 +0x0f49:  push   %ebp
0817db03 +0x0f4a:  mov    %esp,%ebp
0817db05 +0x0f4c:  push   %ebx
0817db06 +0x0f4d:  sub    $0x14,%esp
0817db09 +0x0f50:  mov    0x8(%ebp),%ebx
0817db0c +0x0f53:  mov    0xc(%ebp),%eax
0817db0f +0x0f56:  mov    0xc(%eax),%eax
0817db12 +0x0f59:  mov    %eax,0x4(%esp)
0817db16 +0x0f5d:  mov    %ebx,(%esp)
0817db19 +0x0f60:  call   0817d6a0 <+0xae7>
0817db1e +0x0f65:  mov    %ebx,%eax
0817db20 +0x0f67:  add    $0x14,%esp
0817db23 +0x0f6a:  pop    %ebx
0817db24 +0x0f6b:  pop    %ebp
0817db25 +0x0f6c:  ret    $0x4
0817db28 +0x0f6f:  push   %ebp
0817db29 +0x0f70:  mov    %esp,%ebp
0817db2b +0x0f72:  sub    $0x18,%esp
0817db2e +0x0f75:  mov    0xc(%ebp),%eax
0817db31 +0x0f78:  mov    %eax,(%esp)
0817db34 +0x0f7b:  call   0817dc41 <+0x1088>
0817db39 +0x0f80:  mov    0x8(%ebp),%edx
0817db3c +0x0f83:  mov    (%eax),%eax
0817db3e +0x0f85:  mov    %eax,(%edx)
0817db40 +0x0f87:  mov    0x10(%ebp),%eax
0817db43 +0x0f8a:  mov    %eax,(%esp)
0817db46 +0x0f8d:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0817db4b +0x0f92:  movzbl (%eax),%edx
0817db4e +0x0f95:  mov    0x8(%ebp),%eax
0817db51 +0x0f98:  mov    %dl,0x4(%eax)
0817db54 +0x0f9b:  leave
0817db55 +0x0f9c:  ret
0817db56 +0x0f9d:  push   %ebp
0817db57 +0x0f9e:  mov    %esp,%ebp
0817db59 +0x0fa0:  sub    $0x18,%esp
0817db5c +0x0fa3:  mov    0x8(%ebp),%eax
0817db5f +0x0fa6:  mov    (%eax),%eax
0817db61 +0x0fa8:  mov    %eax,(%esp)
0817db64 +0x0fab:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
0817db69 +0x0fb0:  mov    0x8(%ebp),%edx
0817db6c +0x0fb3:  mov    %eax,(%edx)
0817db6e +0x0fb5:  mov    0x8(%ebp),%eax
0817db71 +0x0fb8:  leave
0817db72 +0x0fb9:  ret
0817db73 +0x0fba:  nop
0817db74 +0x0fbb:  push   %ebp
0817db75 +0x0fbc:  mov    %esp,%ebp
0817db77 +0x0fbe:  sub    $0x18,%esp
0817db7a +0x0fc1:  mov    0xc(%ebp),%eax
0817db7d +0x0fc4:  mov    %eax,(%esp)
0817db80 +0x0fc7:  call   0817dc49 <+0x1090>
0817db85 +0x0fcc:  mov    0x8(%ebp),%edx
0817db88 +0x0fcf:  mov    (%eax),%eax
0817db8a +0x0fd1:  mov    %eax,(%edx)
0817db8c +0x0fd3:  mov    0x10(%ebp),%eax
0817db8f +0x0fd6:  mov    %eax,(%esp)
0817db92 +0x0fd9:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0817db97 +0x0fde:  movzbl (%eax),%edx
0817db9a +0x0fe1:  mov    0x8(%ebp),%eax
0817db9d +0x0fe4:  mov    %dl,0x4(%eax)
0817dba0 +0x0fe7:  leave
0817dba1 +0x0fe8:  ret
0817dba2 +0x0fe9:  push   %ebp
0817dba3 +0x0fea:  mov    %esp,%ebp
0817dba5 +0x0fec:  mov    0x8(%ebp),%eax
0817dba8 +0x0fef:  add    $0x10,%eax
0817dbab +0x0ff2:  pop    %ebp
0817dbac +0x0ff3:  ret
0817dbad +0x0ff4:  nop
0817dbae +0x0ff5:  push   %ebp
0817dbaf +0x0ff6:  mov    %esp,%ebp
0817dbb1 +0x0ff8:  sub    $0x18,%esp
0817dbb4 +0x0ffb:  mov    0x8(%ebp),%eax
0817dbb7 +0x0ffe:  movl   $0x0,0x8(%esp)
0817dbbf +0x1006:  movl   $0x1,0x4(%esp)
0817dbc7 +0x100e:  mov    %eax,(%esp)
0817dbca +0x1011:  call   0817dc52 <+0x1099>
0817dbcf +0x1016:  leave
0817dbd0 +0x1017:  ret
0817dbd1 +0x1018:  push   %ebp
0817dbd2 +0x1019:  mov    %esp,%ebp
0817dbd4 +0x101b:  mov    0x8(%ebp),%eax
0817dbd7 +0x101e:  pop    %ebp
0817dbd8 +0x101f:  ret
0817dbd9 +0x1020:  nop
0817dbda +0x1021:  push   %ebp
0817dbdb +0x1022:  mov    %esp,%ebp
0817dbdd +0x1024:  push   %edi
0817dbde +0x1025:  push   %esi
0817dbdf +0x1026:  push   %ebx
0817dbe0 +0x1027:  sub    $0x2c,%esp
0817dbe3 +0x102a:  mov    0x10(%ebp),%eax
0817dbe6 +0x102d:  mov    %eax,(%esp)
0817dbe9 +0x1030:  call   0817dbd1 <+0x1018>
0817dbee +0x1035:  mov    %eax,%edi
0817dbf0 +0x1037:  mov    0xc(%ebp),%esi
0817dbf3 +0x103a:  mov    %esi,0x4(%esp)
0817dbf7 +0x103e:  movl   $0x18,(%esp)
0817dbfe +0x1045:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0817dc03 +0x104a:  mov    %eax,%ebx
0817dc05 +0x104c:  mov    %ebx,%eax
0817dc07 +0x104e:  test   %eax,%eax
0817dc09 +0x1050:  je     0817dc39 <+0x1080>
0817dc0b +0x1052:  mov    %ebx,%eax
0817dc0d +0x1054:  mov    %edi,0x4(%esp)
0817dc11 +0x1058:  mov    %eax,(%esp)
0817dc14 +0x105b:  call   0817dcb6 <+0x10fd>
0817dc19 +0x1060:  jmp    0817dc39 <+0x1080>
0817dc1b +0x1062:  mov    %edx,%edi
0817dc1d +0x1064:  mov    %eax,-0x1c(%ebp)
0817dc20 +0x1067:  mov    %esi,0x4(%esp)
0817dc24 +0x106b:  mov    %ebx,(%esp)
0817dc27 +0x106e:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
0817dc2c +0x1073:  mov    -0x1c(%ebp),%eax
0817dc2f +0x1076:  mov    %edi,%edx
0817dc31 +0x1078:  mov    %eax,(%esp)
0817dc34 +0x107b:  call   08ae3750 <_Unwind_Resume>
0817dc39 +0x1080:  add    $0x2c,%esp
0817dc3c +0x1083:  pop    %ebx
0817dc3d +0x1084:  pop    %esi
0817dc3e +0x1085:  pop    %edi
0817dc3f +0x1086:  pop    %ebp
0817dc40 +0x1087:  ret
0817dc41 +0x1088:  push   %ebp
0817dc42 +0x1089:  mov    %esp,%ebp
0817dc44 +0x108b:  mov    0x8(%ebp),%eax
0817dc47 +0x108e:  pop    %ebp
0817dc48 +0x108f:  ret
0817dc49 +0x1090:  push   %ebp
0817dc4a +0x1091:  mov    %esp,%ebp
0817dc4c +0x1093:  mov    0x8(%ebp),%eax
0817dc4f +0x1096:  pop    %ebp
0817dc50 +0x1097:  ret
0817dc51 +0x1098:  nop
0817dc52 +0x1099:  push   %ebp
0817dc53 +0x109a:  mov    %esp,%ebp
0817dc55 +0x109c:  sub    $0x18,%esp
0817dc58 +0x109f:  mov    0x8(%ebp),%eax
0817dc5b +0x10a2:  mov    %eax,(%esp)
0817dc5e +0x10a5:  call   0817dd02 <+0x1149>
0817dc63 +0x10aa:  cmp    0xc(%ebp),%eax
0817dc66 +0x10ad:  setb   %al
0817dc69 +0x10b0:  movzbl %al,%eax
0817dc6c +0x10b3:  test   %eax,%eax
0817dc6e +0x10b5:  setne  %al
0817dc71 +0x10b8:  test   %al,%al
0817dc73 +0x10ba:  je     0817dc7a <+0x10c1>
0817dc75 +0x10bc:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0817dc7a +0x10c1:  mov    0xc(%ebp),%edx
0817dc7d +0x10c4:  mov    %edx,%eax
0817dc7f +0x10c6:  add    %eax,%eax
0817dc81 +0x10c8:  add    %edx,%eax
0817dc83 +0x10ca:  shl    $0x3,%eax
0817dc86 +0x10cd:  mov    %eax,(%esp)
0817dc89 +0x10d0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0817dc8e +0x10d5:  leave
0817dc8f +0x10d6:  ret
0817dc90 +0x10d7:  push   %ebp
0817dc91 +0x10d8:  mov    %esp,%ebp
0817dc93 +0x10da:  sub    $0x18,%esp
0817dc96 +0x10dd:  mov    0xc(%ebp),%edx
0817dc99 +0x10e0:  mov    0x8(%ebp),%eax
0817dc9c +0x10e3:  mov    %edx,0x4(%esp)
0817dca0 +0x10e7:  mov    %eax,(%esp)
0817dca3 +0x10ea:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0817dca8 +0x10ef:  mov    0xc(%ebp),%eax
0817dcab +0x10f2:  mov    0x4(%eax),%edx
0817dcae +0x10f5:  mov    0x8(%ebp),%eax
0817dcb1 +0x10f8:  mov    %edx,0x4(%eax)
0817dcb4 +0x10fb:  leave
0817dcb5 +0x10fc:  ret
0817dcb6 +0x10fd:  push   %ebp
0817dcb7 +0x10fe:  mov    %esp,%ebp
0817dcb9 +0x1100:  sub    $0x18,%esp
0817dcbc +0x1103:  mov    0x8(%ebp),%eax
0817dcbf +0x1106:  movl   $0x0,(%eax)
0817dcc5 +0x110c:  mov    0x8(%ebp),%eax
0817dcc8 +0x110f:  movl   $0x0,0x4(%eax)
0817dccf +0x1116:  mov    0x8(%ebp),%eax
0817dcd2 +0x1119:  movl   $0x0,0x8(%eax)
0817dcd9 +0x1120:  mov    0x8(%ebp),%eax
0817dcdc +0x1123:  movl   $0x0,0xc(%eax)
0817dce3 +0x112a:  mov    0xc(%ebp),%eax
0817dce6 +0x112d:  mov    %eax,(%esp)
0817dce9 +0x1130:  call   0817dbd1 <+0x1018>
0817dcee +0x1135:  mov    0x8(%ebp),%edx
0817dcf1 +0x1138:  add    $0x10,%edx
0817dcf4 +0x113b:  mov    %eax,0x4(%esp)
0817dcf8 +0x113f:  mov    %edx,(%esp)
0817dcfb +0x1142:  call   0817dc90 <+0x10d7>
0817dd00 +0x1147:  leave
0817dd01 +0x1148:  ret
0817dd02 +0x1149:  push   %ebp
0817dd03 +0x114a:  mov    %esp,%ebp
0817dd05 +0x114c:  mov    $0xaaaaaaa,%eax
0817dd0a +0x1151:  pop    %ebp
0817dd0b +0x1152:  ret
```

## 反编译 C

```c
// <global>::global @ 0x817cbb9

/* Arad_Script::Arad_Script() */

void Arad_Script::_GLOBAL__I_Arad_Script(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
