# GetDirectionByTeam

`_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM`

`global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to pvp_assault` | `0x082f027c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f027c  _GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM
#           global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)
# range [0x082f027c, 0x082f5a7f]
082f027c +0x0000:  push   %ebp
082f027d +0x0001:  mov    %esp,%ebp
082f027f +0x0003:  sub    $0x18,%esp
082f0282 +0x0006:  movl   $0xffff,0x4(%esp)
082f028a +0x000e:  movl   $0x1,(%esp)
082f0291 +0x0015:  call   082f023c <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082f0296 +0x001a:  leave
082f0297 +0x001b:  ret
082f0298 +0x001c:  push   %ebp
082f0299 +0x001d:  mov    %esp,%ebp
082f029b +0x001f:  mov    0x8(%ebp),%eax
082f029e +0x0022:  mov    (%eax),%eax
082f02a0 +0x0024:  cmp    0xc(%ebp),%eax
082f02a3 +0x0027:  jg     082f02de <+0x62>
082f02a5 +0x0029:  mov    0x8(%ebp),%eax
082f02a8 +0x002c:  mov    (%eax),%edx
082f02aa +0x002e:  mov    0x8(%ebp),%eax
082f02ad +0x0031:  mov    0x8(%eax),%eax
082f02b0 +0x0034:  lea    (%edx,%eax,1),%eax
082f02b3 +0x0037:  cmp    0xc(%ebp),%eax
082f02b6 +0x003a:  jl     082f02de <+0x62>
082f02b8 +0x003c:  mov    0x8(%ebp),%eax
082f02bb +0x003f:  mov    0x4(%eax),%eax
082f02be +0x0042:  cmp    0x10(%ebp),%eax
082f02c1 +0x0045:  jg     082f02de <+0x62>
082f02c3 +0x0047:  mov    0x8(%ebp),%eax
082f02c6 +0x004a:  mov    0x4(%eax),%edx
082f02c9 +0x004d:  mov    0x8(%ebp),%eax
082f02cc +0x0050:  mov    0xc(%eax),%eax
082f02cf +0x0053:  lea    (%edx,%eax,1),%eax
082f02d2 +0x0056:  cmp    0x10(%ebp),%eax
082f02d5 +0x0059:  jl     082f02de <+0x62>
082f02d7 +0x005b:  mov    $0x1,%eax
082f02dc +0x0060:  jmp    082f02e3 <+0x67>
082f02de +0x0062:  mov    $0x0,%eax
082f02e3 +0x0067:  pop    %ebp
082f02e4 +0x0068:  ret
082f02e5 +0x0069:  nop
082f02e6 +0x006a:  push   %ebp
082f02e7 +0x006b:  mov    %esp,%ebp
082f02e9 +0x006d:  mov    0x8(%ebp),%eax
082f02ec +0x0070:  mov    (%eax),%eax
082f02ee +0x0072:  add    0x1c(%ebp),%eax
082f02f1 +0x0075:  cmp    0xc(%ebp),%eax
082f02f4 +0x0078:  jle    082f0307 <+0x8b>
082f02f6 +0x007a:  mov    0x8(%ebp),%eax
082f02f9 +0x007d:  mov    (%eax),%eax
082f02fb +0x007f:  mov    %eax,%edx
082f02fd +0x0081:  add    0x1c(%ebp),%edx
082f0300 +0x0084:  mov    0x14(%ebp),%eax
082f0303 +0x0087:  mov    %edx,(%eax)
082f0305 +0x0089:  jmp    082f033f <+0xc3>
082f0307 +0x008b:  mov    0x8(%ebp),%eax
082f030a +0x008e:  mov    (%eax),%edx
082f030c +0x0090:  mov    0x8(%ebp),%eax
082f030f +0x0093:  mov    0x8(%eax),%eax
082f0312 +0x0096:  lea    (%edx,%eax,1),%eax
082f0315 +0x0099:  sub    0x1c(%ebp),%eax
082f0318 +0x009c:  cmp    0xc(%ebp),%eax
082f031b +0x009f:  jge    082f0337 <+0xbb>
082f031d +0x00a1:  mov    0x8(%ebp),%eax
082f0320 +0x00a4:  mov    (%eax),%edx
082f0322 +0x00a6:  mov    0x8(%ebp),%eax
082f0325 +0x00a9:  mov    0x8(%eax),%eax
082f0328 +0x00ac:  lea    (%edx,%eax,1),%eax
082f032b +0x00af:  mov    %eax,%edx
082f032d +0x00b1:  sub    0x1c(%ebp),%edx
082f0330 +0x00b4:  mov    0x14(%ebp),%eax
082f0333 +0x00b7:  mov    %edx,(%eax)
082f0335 +0x00b9:  jmp    082f033f <+0xc3>
082f0337 +0x00bb:  mov    0x14(%ebp),%eax
082f033a +0x00be:  mov    0xc(%ebp),%edx
082f033d +0x00c1:  mov    %edx,(%eax)
082f033f +0x00c3:  mov    0x8(%ebp),%eax
082f0342 +0x00c6:  mov    0x4(%eax),%eax
082f0345 +0x00c9:  add    0x1c(%ebp),%eax
082f0348 +0x00cc:  cmp    0x10(%ebp),%eax
082f034b +0x00cf:  jle    082f035f <+0xe3>
082f034d +0x00d1:  mov    0x8(%ebp),%eax
082f0350 +0x00d4:  mov    0x4(%eax),%eax
082f0353 +0x00d7:  mov    %eax,%edx
082f0355 +0x00d9:  add    0x1c(%ebp),%edx
082f0358 +0x00dc:  mov    0x18(%ebp),%eax
082f035b +0x00df:  mov    %edx,(%eax)
082f035d +0x00e1:  jmp    082f0399 <+0x11d>
082f035f +0x00e3:  mov    0x8(%ebp),%eax
082f0362 +0x00e6:  mov    0x4(%eax),%edx
082f0365 +0x00e9:  mov    0x8(%ebp),%eax
082f0368 +0x00ec:  mov    0xc(%eax),%eax
082f036b +0x00ef:  lea    (%edx,%eax,1),%eax
082f036e +0x00f2:  sub    0x1c(%ebp),%eax
082f0371 +0x00f5:  cmp    0x10(%ebp),%eax
082f0374 +0x00f8:  jge    082f0391 <+0x115>
082f0376 +0x00fa:  mov    0x8(%ebp),%eax
082f0379 +0x00fd:  mov    0x4(%eax),%edx
082f037c +0x0100:  mov    0x8(%ebp),%eax
082f037f +0x0103:  mov    0xc(%eax),%eax
082f0382 +0x0106:  lea    (%edx,%eax,1),%eax
082f0385 +0x0109:  mov    %eax,%edx
082f0387 +0x010b:  sub    0x1c(%ebp),%edx
082f038a +0x010e:  mov    0x18(%ebp),%eax
082f038d +0x0111:  mov    %edx,(%eax)
082f038f +0x0113:  jmp    082f0399 <+0x11d>
082f0391 +0x0115:  mov    0x18(%ebp),%eax
082f0394 +0x0118:  mov    0x10(%ebp),%edx
082f0397 +0x011b:  mov    %edx,(%eax)
082f0399 +0x011d:  mov    0x14(%ebp),%eax
082f039c +0x0120:  mov    (%eax),%eax
082f039e +0x0122:  cmp    0xc(%ebp),%eax
082f03a1 +0x0125:  jne    082f03b4 <+0x138>
082f03a3 +0x0127:  mov    0x18(%ebp),%eax
082f03a6 +0x012a:  mov    (%eax),%eax
082f03a8 +0x012c:  cmp    0x10(%ebp),%eax
082f03ab +0x012f:  jne    082f03b4 <+0x138>
082f03ad +0x0131:  mov    $0x1,%eax
082f03b2 +0x0136:  jmp    082f03b9 <+0x13d>
082f03b4 +0x0138:  mov    $0x0,%eax
082f03b9 +0x013d:  pop    %ebp
082f03ba +0x013e:  ret
082f03bb +0x013f:  nop
082f03bc +0x0140:  push   %ebp
082f03bd +0x0141:  mov    %esp,%ebp
082f03bf +0x0143:  sub    $0x18,%esp
082f03c2 +0x0146:  cmpl   $0xc8,0xc(%ebp)
082f03c9 +0x014d:  jg     082f03d1 <+0x155>
082f03cb +0x014f:  cmpl   $0x0,0xc(%ebp)
082f03cf +0x0153:  jg     082f03d8 <+0x15c>
082f03d1 +0x0155:  mov    $0x0,%eax
082f03d6 +0x015a:  jmp    082f03f5 <+0x179>
082f03d8 +0x015c:  mov    0xc(%ebp),%eax
082f03db +0x015f:  sub    $0x1,%eax
082f03de +0x0162:  mov    0x8(%ebp),%edx
082f03e1 +0x0165:  add    $0x588,%edx
082f03e7 +0x016b:  mov    %eax,0x4(%esp)
082f03eb +0x016f:  mov    %edx,(%esp)
082f03ee +0x0172:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
082f03f3 +0x0177:  mov    (%eax),%eax
082f03f5 +0x0179:  leave
082f03f6 +0x017a:  ret
082f03f7 +0x017b:  nop
082f03f8 +0x017c:  push   %ebp
082f03f9 +0x017d:  mov    %esp,%ebp
082f03fb +0x017f:  sub    $0x18,%esp
082f03fe +0x0182:  mov    0x8(%ebp),%eax
082f0401 +0x0185:  add    $0x594,%eax
082f0406 +0x018a:  mov    %eax,(%esp)
082f0409 +0x018d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082f040e +0x0192:  leave
082f040f +0x0193:  ret
082f0410 +0x0194:  push   %ebp
082f0411 +0x0195:  mov    %esp,%ebp
082f0413 +0x0197:  sub    $0x38,%esp
082f0416 +0x019a:  cmpl   $0x0,0xc(%ebp)
082f041a +0x019e:  jg     082f0423 <+0x1a7>
082f041c +0x01a0:  mov    $0x0,%eax
082f0421 +0x01a5:  jmp    082f0461 <+0x1e5>
082f0423 +0x01a7:  mov    0x8(%ebp),%eax
082f0426 +0x01aa:  add    $0x5a4,%eax
082f042b +0x01af:  mov    %eax,(%esp)
082f042e +0x01b2:  call   082f10ee <+0xe72>
082f0433 +0x01b7:  mov    %eax,-0xc(%ebp)
082f0436 +0x01ba:  mov    0xc(%ebp),%eax
082f0439 +0x01bd:  cmp    -0xc(%ebp),%eax
082f043c +0x01c0:  jle    082f0444 <+0x1c8>
082f043e +0x01c2:  mov    -0xc(%ebp),%eax
082f0441 +0x01c5:  mov    %eax,0xc(%ebp)
082f0444 +0x01c8:  mov    0xc(%ebp),%eax
082f0447 +0x01cb:  sub    $0x1,%eax
082f044a +0x01ce:  mov    0x8(%ebp),%edx
082f044d +0x01d1:  add    $0x5a4,%edx
082f0453 +0x01d7:  mov    %eax,0x4(%esp)
082f0457 +0x01db:  mov    %edx,(%esp)
082f045a +0x01de:  call   082f110a <+0xe8e>
082f045f +0x01e3:  mov    (%eax),%eax
082f0461 +0x01e5:  mov    %eax,-0x1c(%ebp)
082f0464 +0x01e8:  flds   -0x1c(%ebp)
082f0467 +0x01eb:  leave
082f0468 +0x01ec:  ret
082f0469 +0x01ed:  nop
082f046a +0x01ee:  push   %ebp
082f046b +0x01ef:  mov    %esp,%ebp
082f046d +0x01f1:  pop    %ebp
082f046e +0x01f2:  ret
082f046f +0x01f3:  nop
082f0470 +0x01f4:  push   %ebp
082f0471 +0x01f5:  mov    %esp,%ebp
082f0473 +0x01f7:  mov    0x8(%ebp),%eax
082f0476 +0x01fa:  mov    0xc(%ebp),%edx
082f0479 +0x01fd:  mov    %edx,(%eax)
082f047b +0x01ff:  mov    0x8(%ebp),%eax
082f047e +0x0202:  mov    0x10(%ebp),%edx
082f0481 +0x0205:  mov    %edx,0x4(%eax)
082f0484 +0x0208:  pop    %ebp
082f0485 +0x0209:  ret
082f0486 +0x020a:  push   %ebp
082f0487 +0x020b:  mov    %esp,%ebp
082f0489 +0x020d:  push   %ebx
082f048a +0x020e:  mov    0x8(%ebp),%eax
082f048d +0x0211:  mov    (%eax),%edx
082f048f +0x0213:  mov    0xc(%ebp),%eax
082f0492 +0x0216:  mov    (%eax),%eax
082f0494 +0x0218:  sub    %eax,%edx
082f0496 +0x021a:  mov    %edx,%eax
082f0498 +0x021c:  sar    $0x1f,%eax
082f049b +0x021f:  xor    %eax,%edx
082f049d +0x0221:  sub    %eax,%edx
082f049f +0x0223:  mov    0x8(%ebp),%eax
082f04a2 +0x0226:  mov    0x4(%eax),%ecx
082f04a5 +0x0229:  mov    0xc(%ebp),%eax
082f04a8 +0x022c:  mov    0x4(%eax),%eax
082f04ab +0x022f:  mov    %ecx,%ebx
082f04ad +0x0231:  sub    %eax,%ebx
082f04af +0x0233:  mov    %ebx,%eax
082f04b1 +0x0235:  mov    %eax,%ecx
082f04b3 +0x0237:  sar    $0x1f,%ecx
082f04b6 +0x023a:  xor    %ecx,%eax
082f04b8 +0x023c:  sub    %ecx,%eax
082f04ba +0x023e:  lea    (%edx,%eax,1),%eax
082f04bd +0x0241:  pop    %ebx
082f04be +0x0242:  pop    %ebp
082f04bf +0x0243:  ret
082f04c0 +0x0244:  push   %ebp
082f04c1 +0x0245:  mov    %esp,%ebp
082f04c3 +0x0247:  mov    0x8(%ebp),%eax
082f04c6 +0x024a:  mov    (%eax),%edx
082f04c8 +0x024c:  mov    0xc(%ebp),%eax
082f04cb +0x024f:  mov    (%eax),%eax
082f04cd +0x0251:  add    %eax,%edx
082f04cf +0x0253:  mov    0x8(%ebp),%eax
082f04d2 +0x0256:  mov    %edx,(%eax)
082f04d4 +0x0258:  mov    0x8(%ebp),%eax
082f04d7 +0x025b:  mov    0x4(%eax),%edx
082f04da +0x025e:  mov    0xc(%ebp),%eax
082f04dd +0x0261:  mov    0x4(%eax),%eax
082f04e0 +0x0264:  add    %eax,%edx
082f04e2 +0x0266:  mov    0x8(%ebp),%eax
082f04e5 +0x0269:  mov    %edx,0x4(%eax)
082f04e8 +0x026c:  pop    %ebp
082f04e9 +0x026d:  ret
082f04ea +0x026e:  push   %ebp
082f04eb +0x026f:  mov    %esp,%ebp
082f04ed +0x0271:  mov    0x8(%ebp),%eax
082f04f0 +0x0274:  mov    (%eax),%edx
082f04f2 +0x0276:  mov    0xc(%ebp),%eax
082f04f5 +0x0279:  mov    (%eax),%eax
082f04f7 +0x027b:  cmp    %eax,%edx
082f04f9 +0x027d:  jle    082f0502 <+0x286>
082f04fb +0x027f:  mov    $0x1,%eax
082f0500 +0x0284:  jmp    082f0507 <+0x28b>
082f0502 +0x0286:  mov    $0x0,%eax
082f0507 +0x028b:  pop    %ebp
082f0508 +0x028c:  ret
082f0509 +0x028d:  nop
082f050a +0x028e:  push   %ebp
082f050b +0x028f:  mov    %esp,%ebp
082f050d +0x0291:  mov    0x8(%ebp),%eax
082f0510 +0x0294:  mov    0xc(%eax),%edx
082f0513 +0x0297:  mov    0xc(%ebp),%eax
082f0516 +0x029a:  mov    %edx,(%eax)
082f0518 +0x029c:  mov    0x8(%ebp),%eax
082f051b +0x029f:  mov    0x10(%eax),%edx
082f051e +0x02a2:  mov    0x10(%ebp),%eax
082f0521 +0x02a5:  mov    %edx,(%eax)
082f0523 +0x02a7:  pop    %ebp
082f0524 +0x02a8:  ret
082f0525 +0x02a9:  nop
082f0526 +0x02aa:  push   %ebp
082f0527 +0x02ab:  mov    %esp,%ebp
082f0529 +0x02ad:  mov    0x8(%ebp),%eax
082f052c +0x02b0:  mov    0xc(%eax),%edx
082f052f +0x02b3:  mov    0xc(%ebp),%eax
082f0532 +0x02b6:  mov    %edx,(%eax)
082f0534 +0x02b8:  mov    0x8(%ebp),%eax
082f0537 +0x02bb:  mov    0x10(%eax),%edx
082f053a +0x02be:  mov    0x10(%ebp),%eax
082f053d +0x02c1:  mov    %edx,(%eax)
082f053f +0x02c3:  pop    %ebp
082f0540 +0x02c4:  ret
082f0541 +0x02c5:  nop
082f0542 +0x02c6:  push   %ebp
082f0543 +0x02c7:  mov    %esp,%ebp
082f0545 +0x02c9:  mov    0x8(%ebp),%eax
082f0548 +0x02cc:  mov    (%eax),%eax
082f054a +0x02ce:  pop    %ebp
082f054b +0x02cf:  ret
082f054c +0x02d0:  push   %ebp
082f054d +0x02d1:  mov    %esp,%ebp
082f054f +0x02d3:  mov    0x8(%ebp),%eax
082f0552 +0x02d6:  mov    (%eax),%eax
082f0554 +0x02d8:  test   %eax,%eax
082f0556 +0x02da:  sete   %al
082f0559 +0x02dd:  pop    %ebp
082f055a +0x02de:  ret
082f055b +0x02df:  nop
082f055c +0x02e0:  push   %ebp
082f055d +0x02e1:  mov    %esp,%ebp
082f055f +0x02e3:  sub    $0x18,%esp
082f0562 +0x02e6:  mov    0x8(%ebp),%eax
082f0565 +0x02e9:  mov    %eax,(%esp)
082f0568 +0x02ec:  call   082f054c <+0x2d0>
082f056d +0x02f1:  leave
082f056e +0x02f2:  ret
082f056f +0x02f3:  nop
082f0570 +0x02f4:  push   %ebp
082f0571 +0x02f5:  mov    %esp,%ebp
082f0573 +0x02f7:  mov    0x8(%ebp),%eax
082f0576 +0x02fa:  mov    0x4(%eax),%eax
082f0579 +0x02fd:  pop    %ebp
082f057a +0x02fe:  ret
082f057b +0x02ff:  nop
082f057c +0x0300:  push   %ebp
082f057d +0x0301:  mov    %esp,%ebp
082f057f +0x0303:  mov    0x8(%ebp),%eax
082f0582 +0x0306:  mov    0xc(%ebp),%edx
082f0585 +0x0309:  mov    %edx,0x8(%eax)
082f0588 +0x030c:  pop    %ebp
082f0589 +0x030d:  ret
082f058a +0x030e:  push   %ebp
082f058b +0x030f:  mov    %esp,%ebp
082f058d +0x0311:  mov    0x8(%ebp),%eax
082f0590 +0x0314:  mov    0x8(%eax),%eax
082f0593 +0x0317:  pop    %ebp
082f0594 +0x0318:  ret
082f0595 +0x0319:  nop
082f0596 +0x031a:  push   %ebp
082f0597 +0x031b:  mov    %esp,%ebp
082f0599 +0x031d:  sub    $0x4,%esp
082f059c +0x0320:  mov    0xc(%ebp),%eax
082f059f +0x0323:  mov    %al,-0x4(%ebp)
082f05a2 +0x0326:  mov    0x8(%ebp),%eax
082f05a5 +0x0329:  movzbl -0x4(%ebp),%edx
082f05a9 +0x032d:  mov    %dl,0x14(%eax)
082f05ac +0x0330:  leave
082f05ad +0x0331:  ret
082f05ae +0x0332:  push   %ebp
082f05af +0x0333:  mov    %esp,%ebp
082f05b1 +0x0335:  mov    0x8(%ebp),%eax
082f05b4 +0x0338:  movzbl 0x14(%eax),%eax
082f05b8 +0x033c:  pop    %ebp
082f05b9 +0x033d:  ret
082f05ba +0x033e:  push   %ebp
082f05bb +0x033f:  mov    %esp,%ebp
082f05bd +0x0341:  mov    0x8(%ebp),%eax
082f05c0 +0x0344:  movl   $0x0,(%eax)
082f05c6 +0x034a:  mov    0x8(%ebp),%eax
082f05c9 +0x034d:  movl   $0x0,0x4(%eax)
082f05d0 +0x0354:  mov    0x8(%ebp),%eax
082f05d3 +0x0357:  movl   $0x0,0x8(%eax)
082f05da +0x035e:  mov    0x8(%ebp),%eax
082f05dd +0x0361:  movl   $0x0,0xc(%eax)
082f05e4 +0x0368:  mov    0x8(%ebp),%eax
082f05e7 +0x036b:  movb   $0x0,0x14(%eax)
082f05eb +0x036f:  pop    %ebp
082f05ec +0x0370:  ret
082f05ed +0x0371:  nop
082f05ee +0x0372:  push   %ebp
082f05ef +0x0373:  mov    %esp,%ebp
082f05f1 +0x0375:  mov    0x8(%ebp),%eax
082f05f4 +0x0378:  movl   $0x0,(%eax)
082f05fa +0x037e:  pop    %ebp
082f05fb +0x037f:  ret
082f05fc +0x0380:  push   %ebp
082f05fd +0x0381:  mov    %esp,%ebp
082f05ff +0x0383:  mov    0x8(%ebp),%eax
082f0602 +0x0386:  mov    0xc(%ebp),%edx
082f0605 +0x0389:  mov    %edx,(%eax)
082f0607 +0x038b:  pop    %ebp
082f0608 +0x038c:  ret
082f0609 +0x038d:  nop
082f060a +0x038e:  push   %ebp
082f060b +0x038f:  mov    %esp,%ebp
082f060d +0x0391:  mov    0x8(%ebp),%eax
082f0610 +0x0394:  mov    (%eax),%eax
082f0612 +0x0396:  pop    %ebp
082f0613 +0x0397:  ret
082f0614 +0x0398:  push   %ebp
082f0615 +0x0399:  mov    %esp,%ebp
082f0617 +0x039b:  push   %esi
082f0618 +0x039c:  push   %ebx
082f0619 +0x039d:  sub    $0x10,%esp
082f061c +0x03a0:  mov    0x8(%ebp),%eax
082f061f +0x03a3:  mov    %eax,%ebx
082f0621 +0x03a5:  mov    $0x7,%esi
082f0626 +0x03aa:  jmp    082f0636 <+0x3ba>
082f0628 +0x03ac:  mov    %ebx,(%esp)
082f062b +0x03af:  call   082e661e <_ZN11pvp_assault10CAssaulterC1Ev>  ; pvp_assault::CAssaulter::CAssaulter()
082f0630 +0x03b4:  add    $0x20,%ebx
082f0633 +0x03b7:  sub    $0x1,%esi
082f0636 +0x03ba:  cmp    $0xffffffff,%esi
082f0639 +0x03bd:  setne  %al
082f063c +0x03c0:  test   %al,%al
082f063e +0x03c2:  jne    082f0628 <+0x3ac>
082f0640 +0x03c4:  mov    0x8(%ebp),%eax
082f0643 +0x03c7:  add    $0x110,%eax
082f0648 +0x03cc:  mov    %eax,(%esp)
082f064b +0x03cf:  call   082f046a <+0x1ee>
082f0650 +0x03d4:  mov    0x8(%ebp),%eax
082f0653 +0x03d7:  add    $0x12c,%eax
082f0658 +0x03dc:  mov    %eax,%ebx
082f065a +0x03de:  mov    $0x1,%esi
082f065f +0x03e3:  jmp    082f066f <+0x3f3>
082f0661 +0x03e5:  mov    %ebx,(%esp)
082f0664 +0x03e8:  call   082f05ee <+0x372>
082f0669 +0x03ed:  add    $0x4,%ebx
082f066c +0x03f0:  sub    $0x1,%esi
082f066f +0x03f3:  cmp    $0xffffffff,%esi
082f0672 +0x03f6:  setne  %al
082f0675 +0x03f9:  test   %al,%al
082f0677 +0x03fb:  jne    082f0661 <+0x3e5>
082f0679 +0x03fd:  add    $0x10,%esp
082f067c +0x0400:  pop    %ebx
082f067d +0x0401:  pop    %esi
082f067e +0x0402:  pop    %ebp
082f067f +0x0403:  ret
082f0680 +0x0404:  push   %ebp
082f0681 +0x0405:  mov    %esp,%ebp
082f0683 +0x0407:  mov    0x8(%ebp),%eax
082f0686 +0x040a:  mov    0x104(%eax),%eax
082f068c +0x0410:  pop    %ebp
082f068d +0x0411:  ret
082f068e +0x0412:  push   %ebp
082f068f +0x0413:  mov    %esp,%ebp
082f0691 +0x0415:  mov    0x8(%ebp),%eax
082f0694 +0x0418:  mov    0xc(%ebp),%edx
082f0697 +0x041b:  mov    %edx,0x104(%eax)
082f069d +0x0421:  pop    %ebp
082f069e +0x0422:  ret
082f069f +0x0423:  nop
082f06a0 +0x0424:  push   %ebp
082f06a1 +0x0425:  mov    %esp,%ebp
082f06a3 +0x0427:  mov    0x8(%ebp),%eax
082f06a6 +0x042a:  mov    0x108(%eax),%eax
082f06ac +0x0430:  pop    %ebp
082f06ad +0x0431:  ret
082f06ae +0x0432:  push   %ebp
082f06af +0x0433:  mov    %esp,%ebp
082f06b1 +0x0435:  mov    0x8(%ebp),%eax
082f06b4 +0x0438:  mov    0x118(%eax),%eax
082f06ba +0x043e:  cmp    0xc(%ebp),%eax
082f06bd +0x0441:  jne    082f06d4 <+0x458>
082f06bf +0x0443:  mov    0x8(%ebp),%eax
082f06c2 +0x0446:  mov    0x11c(%eax),%eax
082f06c8 +0x044c:  cmp    0x10(%ebp),%eax
082f06cb +0x044f:  jne    082f06d4 <+0x458>
082f06cd +0x0451:  mov    $0x1,%eax
082f06d2 +0x0456:  jmp    082f06d9 <+0x45d>
082f06d4 +0x0458:  mov    $0x0,%eax
082f06d9 +0x045d:  pop    %ebp
082f06da +0x045e:  ret
082f06db +0x045f:  nop
082f06dc +0x0460:  push   %ebp
082f06dd +0x0461:  mov    %esp,%ebp
082f06df +0x0463:  mov    0x8(%ebp),%eax
082f06e2 +0x0466:  mov    0x100(%eax),%eax
082f06e8 +0x046c:  pop    %ebp
082f06e9 +0x046d:  ret
082f06ea +0x046e:  push   %ebp
082f06eb +0x046f:  mov    %esp,%ebp
082f06ed +0x0471:  sub    $0x18,%esp
082f06f0 +0x0474:  mov    0x8(%ebp),%eax
082f06f3 +0x0477:  mov    %eax,(%esp)
082f06f6 +0x047a:  call   082e9142 <_ZN11pvp_assault13CAssaultPlace14_CheckPlayableEv>  ; pvp_assault::CAssaultPlace::_CheckPlayable()
082f06fb +0x047f:  leave
082f06fc +0x0480:  ret
082f06fd +0x0481:  nop
082f06fe +0x0482:  push   %ebp
082f06ff +0x0483:  mov    %esp,%ebp
082f0701 +0x0485:  mov    0x8(%ebp),%eax
082f0704 +0x0488:  mov    0x10c(%eax),%eax
082f070a +0x048e:  pop    %ebp
082f070b +0x048f:  ret
082f070c +0x0490:  push   %ebp
082f070d +0x0491:  mov    %esp,%ebp
082f070f +0x0493:  sub    $0x18,%esp
082f0712 +0x0496:  mov    0x8(%ebp),%eax
082f0715 +0x0499:  movl   $0x2d,0x8(%esp)
082f071d +0x04a1:  movl   $0x6a4,0x4(%esp)
082f0725 +0x04a9:  mov    %eax,(%esp)
082f0728 +0x04ac:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
082f072d +0x04b1:  mov    0x8(%ebp),%eax
082f0730 +0x04b4:  movb   $0x0,0xa(%eax)
082f0734 +0x04b8:  mov    0x8(%ebp),%eax
082f0737 +0x04bb:  movb   $0x0,0x2b(%eax)
082f073b +0x04bf:  mov    0x8(%ebp),%eax
082f073e +0x04c2:  movb   $0x0,0x2c(%eax)
082f0742 +0x04c6:  mov    0x8(%ebp),%eax
082f0745 +0x04c9:  add    $0xb,%eax
082f0748 +0x04cc:  movl   $0x10,0x8(%esp)
082f0750 +0x04d4:  movl   $0x0,0x4(%esp)
082f0758 +0x04dc:  mov    %eax,(%esp)
082f075b +0x04df:  call   0807dcc0 <_init+0x5b8>
082f0760 +0x04e4:  mov    0x8(%ebp),%eax
082f0763 +0x04e7:  add    $0x1b,%eax
082f0766 +0x04ea:  movl   $0x10,0x8(%esp)
082f076e +0x04f2:  movl   $0x0,0x4(%esp)
082f0776 +0x04fa:  mov    %eax,(%esp)
082f0779 +0x04fd:  call   0807dcc0 <_init+0x5b8>
082f077e +0x0502:  leave
082f077f +0x0503:  ret
082f0780 +0x0504:  push   %ebp
082f0781 +0x0505:  mov    %esp,%ebp
082f0783 +0x0507:  sub    $0x18,%esp
082f0786 +0x050a:  mov    0x8(%ebp),%eax
082f0789 +0x050d:  movl   $0x10e,0x8(%esp)
082f0791 +0x0515:  movl   $0x2711,0x4(%esp)
082f0799 +0x051d:  mov    %eax,(%esp)
082f079c +0x0520:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
082f07a1 +0x0525:  leave
082f07a2 +0x0526:  ret
082f07a3 +0x0527:  nop
082f07a4 +0x0528:  push   %ebp
082f07a5 +0x0529:  mov    %esp,%ebp
082f07a7 +0x052b:  sub    $0x10,%esp
082f07aa +0x052e:  movl   $0x0,-0x4(%ebp)
082f07b1 +0x0535:  jmp    082f07da <+0x55e>
082f07b3 +0x0537:  mov    -0x4(%ebp),%edx
082f07b6 +0x053a:  mov    0x8(%ebp),%ecx
082f07b9 +0x053d:  mov    %edx,%eax
082f07bb +0x053f:  add    %eax,%eax
082f07bd +0x0541:  add    %edx,%eax
082f07bf +0x0543:  shl    $0x3,%eax
082f07c2 +0x0546:  lea    (%ecx,%eax,1),%eax
082f07c5 +0x0549:  add    $0x78,%eax
082f07c8 +0x054c:  mov    (%eax),%eax
082f07ca +0x054e:  cmp    0xc(%ebp),%eax
082f07cd +0x0551:  jne    082f07d6 <+0x55a>
082f07cf +0x0553:  mov    $0x1,%eax
082f07d4 +0x0558:  jmp    082f07ea <+0x56e>
082f07d6 +0x055a:  addl   $0x1,-0x4(%ebp)
082f07da +0x055e:  cmpl   $0x3,-0x4(%ebp)
082f07de +0x0562:  setle  %al
082f07e1 +0x0565:  test   %al,%al
082f07e3 +0x0567:  jne    082f07b3 <+0x537>
082f07e5 +0x0569:  mov    $0x0,%eax
082f07ea +0x056e:  leave
082f07eb +0x056f:  ret
082f07ec +0x0570:  push   %ebp
082f07ed +0x0571:  mov    %esp,%ebp
082f07ef +0x0573:  mov    0x8(%ebp),%eax
082f07f2 +0x0576:  movzwl 0x29c(%eax),%eax
082f07f9 +0x057d:  pop    %ebp
082f07fa +0x057e:  ret
082f07fb +0x057f:  nop
082f07fc +0x0580:  push   %ebp
082f07fd +0x0581:  mov    %esp,%ebp
082f07ff +0x0583:  mov    0x8(%ebp),%eax
082f0802 +0x0586:  movzwl 0x29c(%eax),%eax
082f0809 +0x058d:  lea    0x1(%eax),%edx
082f080c +0x0590:  mov    0x8(%ebp),%eax
082f080f +0x0593:  mov    %dx,0x29c(%eax)
082f0816 +0x059a:  pop    %ebp
082f0817 +0x059b:  ret
082f0818 +0x059c:  push   %ebp
082f0819 +0x059d:  mov    %esp,%ebp
082f081b +0x059f:  mov    0x8(%ebp),%eax
082f081e +0x05a2:  movw   $0x0,0x29c(%eax)
082f0827 +0x05ab:  pop    %ebp
082f0828 +0x05ac:  ret
082f0829 +0x05ad:  nop
082f082a +0x05ae:  push   %ebp
082f082b +0x05af:  mov    %esp,%ebp
082f082d +0x05b1:  mov    0x8(%ebp),%eax
082f0830 +0x05b4:  mov    (%eax),%eax
082f0832 +0x05b6:  lea    0x1(%eax),%edx
082f0835 +0x05b9:  mov    0x8(%ebp),%eax
082f0838 +0x05bc:  mov    %edx,(%eax)
082f083a +0x05be:  pop    %ebp
082f083b +0x05bf:  ret
082f083c +0x05c0:  push   %ebp
082f083d +0x05c1:  mov    %esp,%ebp
082f083f +0x05c3:  mov    0x8(%ebp),%eax
082f0842 +0x05c6:  mov    0x4(%eax),%eax
082f0845 +0x05c9:  lea    0x1(%eax),%edx
082f0848 +0x05cc:  mov    0x8(%ebp),%eax
082f084b +0x05cf:  mov    %edx,0x4(%eax)
082f084e +0x05d2:  pop    %ebp
082f084f +0x05d3:  ret
082f0850 +0x05d4:  push   %ebp
082f0851 +0x05d5:  mov    %esp,%ebp
082f0853 +0x05d7:  mov    0x8(%ebp),%eax
082f0856 +0x05da:  mov    0x8(%eax),%eax
082f0859 +0x05dd:  lea    0x1(%eax),%edx
082f085c +0x05e0:  mov    0x8(%ebp),%eax
082f085f +0x05e3:  mov    %edx,0x8(%eax)
082f0862 +0x05e6:  pop    %ebp
082f0863 +0x05e7:  ret
082f0864 +0x05e8:  push   %ebp
082f0865 +0x05e9:  mov    %esp,%ebp
082f0867 +0x05eb:  mov    0x8(%ebp),%eax
082f086a +0x05ee:  mov    0x10(%eax),%eax
082f086d +0x05f1:  lea    0x1(%eax),%edx
082f0870 +0x05f4:  mov    0x8(%ebp),%eax
082f0873 +0x05f7:  mov    %edx,0x10(%eax)
082f0876 +0x05fa:  pop    %ebp
082f0877 +0x05fb:  ret
082f0878 +0x05fc:  push   %ebp
082f0879 +0x05fd:  mov    %esp,%ebp
082f087b +0x05ff:  mov    0x8(%ebp),%eax
082f087e +0x0602:  mov    0x18(%eax),%eax
082f0881 +0x0605:  lea    0x1(%eax),%edx
082f0884 +0x0608:  mov    0x8(%ebp),%eax
082f0887 +0x060b:  mov    %edx,0x18(%eax)
082f088a +0x060e:  pop    %ebp
082f088b +0x060f:  ret
082f088c +0x0610:  push   %ebp
082f088d +0x0611:  mov    %esp,%ebp
082f088f +0x0613:  mov    0x8(%ebp),%eax
082f0892 +0x0616:  mov    0x1c(%eax),%eax
082f0895 +0x0619:  lea    0x1(%eax),%edx
082f0898 +0x061c:  mov    0x8(%ebp),%eax
082f089b +0x061f:  mov    %edx,0x1c(%eax)
082f089e +0x0622:  pop    %ebp
082f089f +0x0623:  ret
082f08a0 +0x0624:  push   %ebp
082f08a1 +0x0625:  mov    %esp,%ebp
082f08a3 +0x0627:  mov    0x8(%ebp),%eax
082f08a6 +0x062a:  mov    0x20(%eax),%eax
082f08a9 +0x062d:  lea    0x1(%eax),%edx
082f08ac +0x0630:  mov    0x8(%ebp),%eax
082f08af +0x0633:  mov    %edx,0x20(%eax)
082f08b2 +0x0636:  pop    %ebp
082f08b3 +0x0637:  ret
082f08b4 +0x0638:  push   %ebp
082f08b5 +0x0639:  mov    %esp,%ebp
082f08b7 +0x063b:  mov    0x8(%ebp),%eax
082f08ba +0x063e:  mov    0x28(%eax),%eax
082f08bd +0x0641:  lea    0x1(%eax),%edx
082f08c0 +0x0644:  mov    0x8(%ebp),%eax
082f08c3 +0x0647:  mov    %edx,0x28(%eax)
082f08c6 +0x064a:  pop    %ebp
082f08c7 +0x064b:  ret
082f08c8 +0x064c:  push   %ebp
082f08c9 +0x064d:  mov    %esp,%ebp
082f08cb +0x064f:  mov    0x8(%ebp),%eax
082f08ce +0x0652:  mov    0x24(%eax),%eax
082f08d1 +0x0655:  lea    0x1(%eax),%edx
082f08d4 +0x0658:  mov    0x8(%ebp),%eax
082f08d7 +0x065b:  mov    %edx,0x24(%eax)
082f08da +0x065e:  pop    %ebp
082f08db +0x065f:  ret
082f08dc +0x0660:  push   %ebp
082f08dd +0x0661:  mov    %esp,%ebp
082f08df +0x0663:  mov    0x8(%ebp),%eax
082f08e2 +0x0666:  mov    0x34(%eax),%eax
082f08e5 +0x0669:  mov    %eax,%edx
082f08e7 +0x066b:  add    0xc(%ebp),%edx
082f08ea +0x066e:  mov    0x8(%ebp),%eax
082f08ed +0x0671:  mov    %edx,0x34(%eax)
082f08f0 +0x0674:  pop    %ebp
082f08f1 +0x0675:  ret
082f08f2 +0x0676:  push   %ebp
082f08f3 +0x0677:  mov    %esp,%ebp
082f08f5 +0x0679:  mov    0x8(%ebp),%eax
082f08f8 +0x067c:  mov    0x38(%eax),%eax
082f08fb +0x067f:  lea    0x1(%eax),%edx
082f08fe +0x0682:  mov    0x8(%ebp),%eax
082f0901 +0x0685:  mov    %edx,0x38(%eax)
082f0904 +0x0688:  pop    %ebp
082f0905 +0x0689:  ret
082f0906 +0x068a:  push   %ebp
082f0907 +0x068b:  mov    %esp,%ebp
082f0909 +0x068d:  mov    0x8(%ebp),%eax
082f090c +0x0690:  add    $0x1b4,%eax
082f0911 +0x0695:  pop    %ebp
082f0912 +0x0696:  ret
082f0913 +0x0697:  nop
082f0914 +0x0698:  push   %ebp
082f0915 +0x0699:  mov    %esp,%ebp
082f0917 +0x069b:  sub    $0x28,%esp
082f091a +0x069e:  mov    0xc(%ebp),%eax
082f091d +0x06a1:  mov    %al,-0xc(%ebp)
082f0920 +0x06a4:  mov    0x8(%ebp),%eax
082f0923 +0x06a7:  mov    %eax,(%esp)
082f0926 +0x06aa:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
082f092b +0x06af:  mov    0x8(%ebp),%eax
082f092e +0x06b2:  mov    0x10(%eax),%eax
082f0931 +0x06b5:  movzbl -0xc(%ebp),%edx
082f0935 +0x06b9:  mov    %dl,0x75(%eax)
082f0938 +0x06bc:  leave
082f0939 +0x06bd:  ret
082f093a +0x06be:  push   %ebp
082f093b +0x06bf:  mov    %esp,%ebp
082f093d +0x06c1:  sub    $0x4,%esp
082f0940 +0x06c4:  mov    0xc(%ebp),%eax
082f0943 +0x06c7:  mov    %al,-0x4(%ebp)
082f0946 +0x06ca:  mov    0x8(%ebp),%eax
082f0949 +0x06cd:  mov    0x10(%eax),%eax
082f094c +0x06d0:  test   %eax,%eax
082f094e +0x06d2:  je     082f095d <+0x6e1>
082f0950 +0x06d4:  mov    0x8(%ebp),%eax
082f0953 +0x06d7:  mov    0x10(%eax),%eax
082f0956 +0x06da:  movzbl -0x4(%ebp),%edx
082f095a +0x06de:  mov    %dl,0x76(%eax)
082f095d +0x06e1:  leave
082f095e +0x06e2:  ret
082f095f +0x06e3:  nop
082f0960 +0x06e4:  push   %ebp
082f0961 +0x06e5:  mov    %esp,%ebp
082f0963 +0x06e7:  mov    0x8(%ebp),%eax
082f0966 +0x06ea:  mov    0x10(%eax),%eax
082f0969 +0x06ed:  test   %eax,%eax
082f096b +0x06ef:  je     082f097b <+0x6ff>
082f096d +0x06f1:  mov    0x8(%ebp),%eax
082f0970 +0x06f4:  mov    0x10(%eax),%eax
082f0973 +0x06f7:  mov    0xe3c(%eax),%eax
082f0979 +0x06fd:  jmp    082f0980 <+0x704>
082f097b +0x06ff:  mov    $0x0,%eax
082f0980 +0x0704:  pop    %ebp
082f0981 +0x0705:  ret
082f0982 +0x0706:  push   %ebp
082f0983 +0x0707:  mov    %esp,%ebp
082f0985 +0x0709:  mov    0x8(%ebp),%eax
082f0988 +0x070c:  mov    0x10(%eax),%eax
082f098b +0x070f:  test   %eax,%eax
082f098d +0x0711:  je     082f099e <+0x722>
082f098f +0x0713:  mov    0x8(%ebp),%eax
082f0992 +0x0716:  mov    0x10(%eax),%eax
082f0995 +0x0719:  mov    0xc(%ebp),%edx
082f0998 +0x071c:  mov    %edx,0xe95(%eax)
082f099e +0x0722:  pop    %ebp
082f099f +0x0723:  ret
082f09a0 +0x0724:  push   %ebp
082f09a1 +0x0725:  mov    %esp,%ebp
082f09a3 +0x0727:  mov    0x8(%ebp),%eax
082f09a6 +0x072a:  mov    0x10(%eax),%eax
082f09a9 +0x072d:  test   %eax,%eax
082f09ab +0x072f:  je     082f09bc <+0x740>
082f09ad +0x0731:  mov    0x8(%ebp),%eax
082f09b0 +0x0734:  mov    0x10(%eax),%eax
082f09b3 +0x0737:  movzbl 0xe8f(%eax),%eax
082f09ba +0x073e:  jmp    082f09c1 <+0x745>
082f09bc +0x0740:  mov    $0x0,%eax
082f09c1 +0x0745:  pop    %ebp
082f09c2 +0x0746:  ret
082f09c3 +0x0747:  nop
082f09c4 +0x0748:  push   %ebp
082f09c5 +0x0749:  mov    %esp,%ebp
082f09c7 +0x074b:  sub    $0x4,%esp
082f09ca +0x074e:  mov    0xc(%ebp),%eax
082f09cd +0x0751:  mov    %ax,-0x4(%ebp)
082f09d1 +0x0755:  mov    0x8(%ebp),%eax
082f09d4 +0x0758:  mov    0x10(%eax),%eax
082f09d7 +0x075b:  test   %eax,%eax
082f09d9 +0x075d:  je     082f09ec <+0x770>
082f09db +0x075f:  mov    0x8(%ebp),%eax
082f09de +0x0762:  mov    0x10(%eax),%eax
082f09e1 +0x0765:  movzwl -0x4(%ebp),%edx
082f09e5 +0x0769:  mov    %dx,0xe8d(%eax)
082f09ec +0x0770:  leave
082f09ed +0x0771:  ret
082f09ee +0x0772:  push   %ebp
082f09ef +0x0773:  mov    %esp,%ebp
082f09f1 +0x0775:  mov    0x8(%ebp),%eax
082f09f4 +0x0778:  mov    0x10(%eax),%eax
082f09f7 +0x077b:  test   %eax,%eax
082f09f9 +0x077d:  je     082f0a0a <+0x78e>
082f09fb +0x077f:  mov    0x8(%ebp),%eax
082f09fe +0x0782:  mov    0x10(%eax),%eax
082f0a01 +0x0785:  movzwl 0xe8d(%eax),%eax
082f0a08 +0x078c:  jmp    082f0a0f <+0x793>
082f0a0a +0x078e:  mov    $0x0,%eax
082f0a0f +0x0793:  pop    %ebp
082f0a10 +0x0794:  ret
082f0a11 +0x0795:  nop
082f0a12 +0x0796:  push   %ebp
082f0a13 +0x0797:  mov    %esp,%ebp
082f0a15 +0x0799:  mov    0x8(%ebp),%eax
082f0a18 +0x079c:  mov    0x10(%eax),%eax
082f0a1b +0x079f:  test   %eax,%eax
082f0a1d +0x07a1:  je     082f0a2e <+0x7b2>
082f0a1f +0x07a3:  mov    0x8(%ebp),%eax
082f0a22 +0x07a6:  mov    0x10(%eax),%eax
082f0a25 +0x07a9:  movzwl 0x1229(%eax),%eax
082f0a2c +0x07b0:  jmp    082f0a33 <+0x7b7>
082f0a2e +0x07b2:  mov    $0x0,%eax
082f0a33 +0x07b7:  pop    %ebp
082f0a34 +0x07b8:  ret
082f0a35 +0x07b9:  nop
082f0a36 +0x07ba:  push   %ebp
082f0a37 +0x07bb:  mov    %esp,%ebp
082f0a39 +0x07bd:  mov    0x8(%ebp),%eax
082f0a3c +0x07c0:  mov    0x10(%eax),%eax
082f0a3f +0x07c3:  test   %eax,%eax
082f0a41 +0x07c5:  je     082f0a5a <+0x7de>
082f0a43 +0x07c7:  mov    0x8(%ebp),%eax
082f0a46 +0x07ca:  mov    0x10(%eax),%eax
082f0a49 +0x07cd:  movzwl 0x1229(%eax),%edx
082f0a50 +0x07d4:  add    $0x1,%edx
082f0a53 +0x07d7:  mov    %dx,0x1229(%eax)
082f0a5a +0x07de:  pop    %ebp
082f0a5b +0x07df:  ret
082f0a5c +0x07e0:  push   %ebp
082f0a5d +0x07e1:  mov    %esp,%ebp
082f0a5f +0x07e3:  mov    0x8(%ebp),%eax
082f0a62 +0x07e6:  mov    0x10(%eax),%eax
082f0a65 +0x07e9:  test   %eax,%eax
082f0a67 +0x07eb:  je     082f0a78 <+0x7fc>
082f0a69 +0x07ed:  mov    0x8(%ebp),%eax
082f0a6c +0x07f0:  mov    0x10(%eax),%eax
082f0a6f +0x07f3:  movw   $0x0,0x1229(%eax)
082f0a78 +0x07fc:  pop    %ebp
082f0a79 +0x07fd:  ret
082f0a7a +0x07fe:  push   %ebp
082f0a7b +0x07ff:  mov    %esp,%ebp
082f0a7d +0x0801:  mov    0x8(%ebp),%eax
082f0a80 +0x0804:  mov    0x10(%eax),%eax
082f0a83 +0x0807:  test   %eax,%eax
082f0a85 +0x0809:  je     082f0a96 <+0x81a>
082f0a87 +0x080b:  mov    0x8(%ebp),%eax
082f0a8a +0x080e:  mov    0x10(%eax),%eax
082f0a8d +0x0811:  mov    0xc(%ebp),%edx
082f0a90 +0x0814:  mov    %edx,0xe41(%eax)
082f0a96 +0x081a:  pop    %ebp
082f0a97 +0x081b:  ret
082f0a98 +0x081c:  push   %ebp
082f0a99 +0x081d:  mov    %esp,%ebp
082f0a9b +0x081f:  mov    0x8(%ebp),%eax
082f0a9e +0x0822:  mov    0x10(%eax),%eax
082f0aa1 +0x0825:  test   %eax,%eax
082f0aa3 +0x0827:  je     082f0ab4 <+0x838>
082f0aa5 +0x0829:  mov    0x8(%ebp),%eax
082f0aa8 +0x082c:  mov    0x10(%eax),%eax
082f0aab +0x082f:  mov    0xc(%ebp),%edx
082f0aae +0x0832:  mov    %edx,0xe45(%eax)
082f0ab4 +0x0838:  pop    %ebp
082f0ab5 +0x0839:  ret
082f0ab6 +0x083a:  push   %ebp
082f0ab7 +0x083b:  mov    %esp,%ebp
082f0ab9 +0x083d:  mov    0x8(%ebp),%eax
082f0abc +0x0840:  mov    0x10(%eax),%eax
082f0abf +0x0843:  test   %eax,%eax
082f0ac1 +0x0845:  je     082f0ad1 <+0x855>
082f0ac3 +0x0847:  mov    0x8(%ebp),%eax
082f0ac6 +0x084a:  mov    0x10(%eax),%eax
082f0ac9 +0x084d:  mov    0xe45(%eax),%eax
082f0acf +0x0853:  jmp    082f0ad6 <+0x85a>
082f0ad1 +0x0855:  mov    $0x0,%eax
082f0ad6 +0x085a:  pop    %ebp
082f0ad7 +0x085b:  ret
082f0ad8 +0x085c:  push   %ebp
082f0ad9 +0x085d:  mov    %esp,%ebp
082f0adb +0x085f:  mov    0x8(%ebp),%eax
082f0ade +0x0862:  mov    0x10(%eax),%eax
082f0ae1 +0x0865:  test   %eax,%eax
082f0ae3 +0x0867:  je     082f0af3 <+0x877>
082f0ae5 +0x0869:  mov    0x8(%ebp),%eax
082f0ae8 +0x086c:  mov    0x10(%eax),%eax
082f0aeb +0x086f:  mov    0xe49(%eax),%eax
082f0af1 +0x0875:  jmp    082f0af8 <+0x87c>
082f0af3 +0x0877:  mov    $0x0,%eax
082f0af8 +0x087c:  pop    %ebp
082f0af9 +0x087d:  ret
082f0afa +0x087e:  push   %ebp
082f0afb +0x087f:  mov    %esp,%ebp
082f0afd +0x0881:  mov    0x8(%ebp),%eax
082f0b00 +0x0884:  mov    0x10(%eax),%eax
082f0b03 +0x0887:  test   %eax,%eax
082f0b05 +0x0889:  je     082f0b15 <+0x899>
082f0b07 +0x088b:  mov    0x8(%ebp),%eax
082f0b0a +0x088e:  mov    0x10(%eax),%eax
082f0b0d +0x0891:  mov    0xe51(%eax),%eax
082f0b13 +0x0897:  jmp    082f0b1a <+0x89e>
082f0b15 +0x0899:  mov    $0x0,%eax
082f0b1a +0x089e:  pop    %ebp
082f0b1b +0x089f:  ret
082f0b1c +0x08a0:  push   %ebp
082f0b1d +0x08a1:  mov    %esp,%ebp
082f0b1f +0x08a3:  mov    0x8(%ebp),%eax
082f0b22 +0x08a6:  mov    0x10(%eax),%eax
082f0b25 +0x08a9:  test   %eax,%eax
082f0b27 +0x08ab:  je     082f0b37 <+0x8bb>
082f0b29 +0x08ad:  mov    0x8(%ebp),%eax
082f0b2c +0x08b0:  mov    0x10(%eax),%eax
082f0b2f +0x08b3:  mov    0xe55(%eax),%eax
082f0b35 +0x08b9:  jmp    082f0b3c <+0x8c0>
082f0b37 +0x08bb:  mov    $0x0,%eax
082f0b3c +0x08c0:  pop    %ebp
082f0b3d +0x08c1:  ret
082f0b3e +0x08c2:  push   %ebp
082f0b3f +0x08c3:  mov    %esp,%ebp
082f0b41 +0x08c5:  mov    0x8(%ebp),%eax
082f0b44 +0x08c8:  mov    0x10(%eax),%eax
082f0b47 +0x08cb:  test   %eax,%eax
082f0b49 +0x08cd:  je     082f0b59 <+0x8dd>
082f0b4b +0x08cf:  mov    0x8(%ebp),%eax
082f0b4e +0x08d2:  mov    0x10(%eax),%eax
082f0b51 +0x08d5:  mov    0xe59(%eax),%eax
082f0b57 +0x08db:  jmp    082f0b5e <+0x8e2>
082f0b59 +0x08dd:  mov    $0x0,%eax
082f0b5e +0x08e2:  pop    %ebp
082f0b5f +0x08e3:  ret
082f0b60 +0x08e4:  push   %ebp
082f0b61 +0x08e5:  mov    %esp,%ebp
082f0b63 +0x08e7:  sub    $0x4,%esp
082f0b66 +0x08ea:  mov    0xc(%ebp),%eax
082f0b69 +0x08ed:  mov    %al,-0x4(%ebp)
082f0b6c +0x08f0:  mov    0x8(%ebp),%eax
082f0b6f +0x08f3:  mov    0x10(%eax),%eax
082f0b72 +0x08f6:  test   %eax,%eax
082f0b74 +0x08f8:  je     082f0b86 <+0x90a>
082f0b76 +0x08fa:  mov    0x8(%ebp),%eax
082f0b79 +0x08fd:  mov    0x10(%eax),%eax
082f0b7c +0x0900:  movzbl -0x4(%ebp),%edx
082f0b80 +0x0904:  mov    %dl,0xe65(%eax)
082f0b86 +0x090a:  leave
082f0b87 +0x090b:  ret
082f0b88 +0x090c:  push   %ebp
082f0b89 +0x090d:  mov    %esp,%ebp
082f0b8b +0x090f:  mov    0x8(%ebp),%eax
082f0b8e +0x0912:  mov    0x10(%eax),%eax
082f0b91 +0x0915:  test   %eax,%eax
082f0b93 +0x0917:  je     082f0ba3 <+0x927>
082f0b95 +0x0919:  mov    0x8(%ebp),%eax
082f0b98 +0x091c:  mov    0x10(%eax),%eax
082f0b9b +0x091f:  mov    0xe5d(%eax),%eax
082f0ba1 +0x0925:  jmp    082f0ba8 <+0x92c>
082f0ba3 +0x0927:  mov    $0x0,%eax
082f0ba8 +0x092c:  pop    %ebp
082f0ba9 +0x092d:  ret
082f0baa +0x092e:  push   %ebp
082f0bab +0x092f:  mov    %esp,%ebp
082f0bad +0x0931:  mov    0x8(%ebp),%eax
082f0bb0 +0x0934:  mov    0x10(%eax),%eax
082f0bb3 +0x0937:  test   %eax,%eax
082f0bb5 +0x0939:  je     082f0bc6 <+0x94a>
082f0bb7 +0x093b:  mov    0x8(%ebp),%eax
082f0bba +0x093e:  mov    0x10(%eax),%eax
082f0bbd +0x0941:  mov    0xc(%ebp),%edx
082f0bc0 +0x0944:  mov    %edx,0xe51(%eax)
082f0bc6 +0x094a:  pop    %ebp
082f0bc7 +0x094b:  ret
082f0bc8 +0x094c:  push   %ebp
082f0bc9 +0x094d:  mov    %esp,%ebp
082f0bcb +0x094f:  mov    0x8(%ebp),%eax
082f0bce +0x0952:  mov    0x10(%eax),%eax
082f0bd1 +0x0955:  test   %eax,%eax
082f0bd3 +0x0957:  je     082f0be4 <+0x968>
082f0bd5 +0x0959:  mov    0x8(%ebp),%eax
082f0bd8 +0x095c:  mov    0x10(%eax),%eax
082f0bdb +0x095f:  mov    0xc(%ebp),%edx
082f0bde +0x0962:  mov    %edx,0xe55(%eax)
082f0be4 +0x0968:  pop    %ebp
082f0be5 +0x0969:  ret
082f0be6 +0x096a:  push   %ebp
082f0be7 +0x096b:  mov    %esp,%ebp
082f0be9 +0x096d:  mov    0x8(%ebp),%eax
082f0bec +0x0970:  mov    0x10(%eax),%eax
082f0bef +0x0973:  test   %eax,%eax
082f0bf1 +0x0975:  je     082f0c02 <+0x986>
082f0bf3 +0x0977:  mov    0x8(%ebp),%eax
082f0bf6 +0x097a:  mov    0x10(%eax),%eax
082f0bf9 +0x097d:  mov    0xc(%ebp),%edx
082f0bfc +0x0980:  mov    %edx,0xe59(%eax)
082f0c02 +0x0986:  pop    %ebp
082f0c03 +0x0987:  ret
082f0c04 +0x0988:  push   %ebp
082f0c05 +0x0989:  mov    %esp,%ebp
082f0c07 +0x098b:  sub    $0x18,%esp
082f0c0a +0x098e:  mov    0x8(%ebp),%eax
082f0c0d +0x0991:  mov    %eax,(%esp)
082f0c10 +0x0994:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
082f0c15 +0x0999:  mov    0x8(%ebp),%eax
082f0c18 +0x099c:  mov    0x10(%eax),%eax
082f0c1b +0x099f:  test   %eax,%eax
082f0c1d +0x09a1:  je     082f0c2e <+0x9b2>
082f0c1f +0x09a3:  mov    0x8(%ebp),%eax
082f0c22 +0x09a6:  mov    0x10(%eax),%eax
082f0c25 +0x09a9:  mov    0xc(%ebp),%edx
082f0c28 +0x09ac:  mov    %edx,0xe5d(%eax)
082f0c2e +0x09b2:  leave
082f0c2f +0x09b3:  ret
082f0c30 +0x09b4:  push   %ebp
082f0c31 +0x09b5:  mov    %esp,%ebp
082f0c33 +0x09b7:  sub    $0x28,%esp
082f0c36 +0x09ba:  mov    0xc(%ebp),%eax
082f0c39 +0x09bd:  mov    %al,-0xc(%ebp)
082f0c3c +0x09c0:  mov    0x8(%ebp),%eax
082f0c3f +0x09c3:  mov    0x10(%eax),%eax
082f0c42 +0x09c6:  test   %eax,%eax
082f0c44 +0x09c8:  je     082f0c61 <+0x9e5>
082f0c46 +0x09ca:  mov    0x8(%ebp),%eax
082f0c49 +0x09cd:  mov    %eax,(%esp)
082f0c4c +0x09d0:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
082f0c51 +0x09d5:  mov    0x8(%ebp),%eax
082f0c54 +0x09d8:  mov    0x10(%eax),%eax
082f0c57 +0x09db:  movzbl -0xc(%ebp),%edx
082f0c5b +0x09df:  mov    %dl,0xe66(%eax)
082f0c61 +0x09e5:  leave
082f0c62 +0x09e6:  ret
082f0c63 +0x09e7:  nop
082f0c64 +0x09e8:  push   %ebp
082f0c65 +0x09e9:  mov    %esp,%ebp
082f0c67 +0x09eb:  sub    $0x18,%esp
082f0c6a +0x09ee:  mov    0x8(%ebp),%eax
082f0c6d +0x09f1:  mov    %eax,(%esp)
082f0c70 +0x09f4:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
082f0c75 +0x09f9:  mov    0x8(%ebp),%eax
082f0c78 +0x09fc:  mov    %eax,(%esp)
082f0c7b +0x09ff:  call   082f0afa <+0x87e>
082f0c80 +0x0a04:  add    $0x1,%eax
082f0c83 +0x0a07:  mov    %eax,0x4(%esp)
082f0c87 +0x0a0b:  mov    0x8(%ebp),%eax
082f0c8a +0x0a0e:  mov    %eax,(%esp)
082f0c8d +0x0a11:  call   082f0baa <+0x92e>
082f0c92 +0x0a16:  leave
082f0c93 +0x0a17:  ret
082f0c94 +0x0a18:  push   %ebp
082f0c95 +0x0a19:  mov    %esp,%ebp
082f0c97 +0x0a1b:  sub    $0x18,%esp
082f0c9a +0x0a1e:  mov    0x8(%ebp),%eax
082f0c9d +0x0a21:  mov    %eax,(%esp)
082f0ca0 +0x0a24:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
082f0ca5 +0x0a29:  mov    0x8(%ebp),%eax
082f0ca8 +0x0a2c:  mov    %eax,(%esp)
082f0cab +0x0a2f:  call   082f0b1c <+0x8a0>
082f0cb0 +0x0a34:  add    $0x1,%eax
082f0cb3 +0x0a37:  mov    %eax,0x4(%esp)
082f0cb7 +0x0a3b:  mov    0x8(%ebp),%eax
082f0cba +0x0a3e:  mov    %eax,(%esp)
082f0cbd +0x0a41:  call   082f0bc8 <+0x94c>
082f0cc2 +0x0a46:  leave
082f0cc3 +0x0a47:  ret
082f0cc4 +0x0a48:  push   %ebp
082f0cc5 +0x0a49:  mov    %esp,%ebp
082f0cc7 +0x0a4b:  sub    $0x18,%esp
082f0cca +0x0a4e:  mov    0x8(%ebp),%eax
082f0ccd +0x0a51:  mov    %eax,(%esp)
082f0cd0 +0x0a54:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
082f0cd5 +0x0a59:  mov    0x8(%ebp),%eax
082f0cd8 +0x0a5c:  mov    %eax,(%esp)
082f0cdb +0x0a5f:  call   082f0b3e <+0x8c2>
082f0ce0 +0x0a64:  add    $0x1,%eax
082f0ce3 +0x0a67:  mov    %eax,0x4(%esp)
082f0ce7 +0x0a6b:  mov    0x8(%ebp),%eax
082f0cea +0x0a6e:  mov    %eax,(%esp)
082f0ced +0x0a71:  call   082f0be6 <+0x96a>
082f0cf2 +0x0a76:  leave
082f0cf3 +0x0a77:  ret
082f0cf4 +0x0a78:  push   %ebp
082f0cf5 +0x0a79:  mov    %esp,%ebp
082f0cf7 +0x0a7b:  sub    $0x18,%esp
082f0cfa +0x0a7e:  mov    0x8(%ebp),%eax
082f0cfd +0x0a81:  mov    %eax,(%esp)
082f0d00 +0x0a84:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
082f0d05 +0x0a89:  mov    0x8(%ebp),%eax
082f0d08 +0x0a8c:  mov    %eax,(%esp)
082f0d0b +0x0a8f:  call   082f0ab6 <+0x83a>
082f0d10 +0x0a94:  add    $0x1,%eax
082f0d13 +0x0a97:  mov    %eax,0x4(%esp)
082f0d17 +0x0a9b:  mov    0x8(%ebp),%eax
082f0d1a +0x0a9e:  mov    %eax,(%esp)
082f0d1d +0x0aa1:  call   082f0a98 <+0x81c>
082f0d22 +0x0aa6:  leave
082f0d23 +0x0aa7:  ret
082f0d24 +0x0aa8:  push   %ebp
082f0d25 +0x0aa9:  mov    %esp,%ebp
082f0d27 +0x0aab:  mov    0x8(%ebp),%eax
082f0d2a +0x0aae:  mov    0x10(%eax),%eax
082f0d2d +0x0ab1:  test   %eax,%eax
082f0d2f +0x0ab3:  je     082f0d78 <+0xafc>
082f0d31 +0x0ab5:  mov    0x8(%ebp),%eax
082f0d34 +0x0ab8:  mov    0x10(%eax),%eax
082f0d37 +0x0abb:  movzbl 0xe65(%eax),%eax
082f0d3e +0x0ac2:  test   %al,%al
082f0d40 +0x0ac4:  je     082f0d49 <+0xacd>
082f0d42 +0x0ac6:  mov    $0x6,%eax
082f0d47 +0x0acb:  jmp    082f0d7d <+0xb01>
082f0d49 +0x0acd:  mov    0x8(%ebp),%eax
082f0d4c +0x0ad0:  mov    0x10(%eax),%eax
082f0d4f +0x0ad3:  movzbl 0xe66(%eax),%eax
082f0d56 +0x0ada:  test   %al,%al
082f0d58 +0x0adc:  je     082f0d61 <+0xae5>
082f0d5a +0x0ade:  mov    $0x4,%eax
082f0d5f +0x0ae3:  jmp    082f0d7d <+0xb01>
082f0d61 +0x0ae5:  mov    0x8(%ebp),%eax
082f0d64 +0x0ae8:  mov    0x10(%eax),%eax
082f0d67 +0x0aeb:  mov    0xe41(%eax),%eax
082f0d6d +0x0af1:  test   %eax,%eax
082f0d6f +0x0af3:  je     082f0d78 <+0xafc>
082f0d71 +0x0af5:  mov    $0x5,%eax
082f0d76 +0x0afa:  jmp    082f0d7d <+0xb01>
082f0d78 +0x0afc:  mov    $0x0,%eax
082f0d7d +0x0b01:  pop    %ebp
082f0d7e +0x0b02:  ret
082f0d7f +0x0b03:  nop
082f0d80 +0x0b04:  push   %ebp
082f0d81 +0x0b05:  mov    %esp,%ebp
082f0d83 +0x0b07:  sub    $0x4,%esp
082f0d86 +0x0b0a:  mov    0xc(%ebp),%eax
082f0d89 +0x0b0d:  mov    %al,-0x4(%ebp)
082f0d8c +0x0b10:  mov    0x8(%ebp),%eax
082f0d8f +0x0b13:  mov    0x10(%eax),%eax
082f0d92 +0x0b16:  test   %eax,%eax
082f0d94 +0x0b18:  je     082f0da6 <+0xb2a>
082f0d96 +0x0b1a:  mov    0x8(%ebp),%eax
082f0d99 +0x0b1d:  mov    0x10(%eax),%eax
082f0d9c +0x0b20:  movzbl -0x4(%ebp),%edx
082f0da0 +0x0b24:  mov    %dl,0xe67(%eax)
082f0da6 +0x0b2a:  leave
082f0da7 +0x0b2b:  ret
082f0da8 +0x0b2c:  push   %ebp
082f0da9 +0x0b2d:  mov    %esp,%ebp
082f0dab +0x0b2f:  mov    0x8(%ebp),%eax
082f0dae +0x0b32:  mov    0x10(%eax),%eax
082f0db1 +0x0b35:  test   %eax,%eax
082f0db3 +0x0b37:  je     082f0dc4 <+0xb48>
082f0db5 +0x0b39:  mov    0x8(%ebp),%eax
082f0db8 +0x0b3c:  mov    0x10(%eax),%eax
082f0dbb +0x0b3f:  mov    0xc(%ebp),%edx
082f0dbe +0x0b42:  mov    %edx,0xe68(%eax)
082f0dc4 +0x0b48:  pop    %ebp
082f0dc5 +0x0b49:  ret
082f0dc6 +0x0b4a:  push   %ebp
082f0dc7 +0x0b4b:  mov    %esp,%ebp
082f0dc9 +0x0b4d:  sub    $0x18,%esp
082f0dcc +0x0b50:  mov    0x8(%ebp),%eax
082f0dcf +0x0b53:  mov    0x10(%eax),%eax
082f0dd2 +0x0b56:  test   %eax,%eax
082f0dd4 +0x0b58:  je     082f0df6 <+0xb7a>
082f0dd6 +0x0b5a:  mov    0x8(%ebp),%eax
082f0dd9 +0x0b5d:  mov    %eax,(%esp)
082f0ddc +0x0b60:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
082f0de1 +0x0b65:  mov    0x8(%ebp),%eax
082f0de4 +0x0b68:  mov    0x10(%eax),%eax
082f0de7 +0x0b6b:  mov    0x1221(%eax),%edx
082f0ded +0x0b71:  add    $0x1,%edx
082f0df0 +0x0b74:  mov    %edx,0x1221(%eax)
082f0df6 +0x0b7a:  leave
082f0df7 +0x0b7b:  ret
082f0df8 +0x0b7c:  push   %ebp
082f0df9 +0x0b7d:  mov    %esp,%ebp
082f0dfb +0x0b7f:  sub    $0x18,%esp
082f0dfe +0x0b82:  mov    0x8(%ebp),%eax
082f0e01 +0x0b85:  mov    0x10(%eax),%eax
082f0e04 +0x0b88:  test   %eax,%eax
082f0e06 +0x0b8a:  je     082f0e28 <+0xbac>
082f0e08 +0x0b8c:  mov    0x8(%ebp),%eax
082f0e0b +0x0b8f:  mov    %eax,(%esp)
082f0e0e +0x0b92:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
082f0e13 +0x0b97:  mov    0x8(%ebp),%eax
082f0e16 +0x0b9a:  mov    0x10(%eax),%eax
082f0e19 +0x0b9d:  mov    0x1225(%eax),%edx
082f0e1f +0x0ba3:  add    $0x1,%edx
082f0e22 +0x0ba6:  mov    %edx,0x1225(%eax)
082f0e28 +0x0bac:  leave
082f0e29 +0x0bad:  ret
082f0e2a +0x0bae:  push   %ebp
082f0e2b +0x0baf:  mov    %esp,%ebp
082f0e2d +0x0bb1:  sub    $0xc,%esp
082f0e30 +0x0bb4:  mov    0xc(%ebp),%ecx
082f0e33 +0x0bb7:  mov    0x10(%ebp),%edx
082f0e36 +0x0bba:  mov    0x14(%ebp),%eax
082f0e39 +0x0bbd:  mov    %cx,-0x4(%ebp)
082f0e3d +0x0bc1:  mov    %dx,-0x8(%ebp)
082f0e41 +0x0bc5:  mov    %al,-0xc(%ebp)
082f0e44 +0x0bc8:  mov    0x8(%ebp),%eax
082f0e47 +0x0bcb:  movzwl -0x4(%ebp),%edx
082f0e4b +0x0bcf:  mov    %dx,0x8cffc(%eax)
082f0e52 +0x0bd6:  mov    0x8(%ebp),%eax
082f0e55 +0x0bd9:  movzwl -0x8(%ebp),%edx
082f0e59 +0x0bdd:  mov    %dx,0x8cffe(%eax)
082f0e60 +0x0be4:  mov    0x8(%ebp),%eax
082f0e63 +0x0be7:  movzbl -0xc(%ebp),%edx
082f0e67 +0x0beb:  mov    %dl,0x8d000(%eax)
082f0e6d +0x0bf1:  leave
082f0e6e +0x0bf2:  ret
082f0e6f +0x0bf3:  nop
082f0e70 +0x0bf4:  push   %ebp
082f0e71 +0x0bf5:  mov    %esp,%ebp
082f0e73 +0x0bf7:  sub    $0x18,%esp
082f0e76 +0x0bfa:  mov    0x8(%ebp),%eax
082f0e79 +0x0bfd:  mov    0x8cfc4(%eax),%eax
082f0e7f +0x0c03:  cmp    $0x3,%eax
082f0e82 +0x0c06:  jg     082f0e94 <+0xc18>
082f0e84 +0x0c08:  mov    0x8(%ebp),%eax
082f0e87 +0x0c0b:  mov    %eax,(%esp)
082f0e8a +0x0c0e:  call   082f0d24 <+0xaa8>
082f0e8f +0x0c13:  jmp    082f0f33 <+0xcb7>
082f0e94 +0x0c18:  mov    0x8(%ebp),%eax
082f0e97 +0x0c1b:  mov    0x8cfc4(%eax),%eax
082f0e9d +0x0c21:  cmp    $0x5,%eax
082f0ea0 +0x0c24:  je     082f0eb0 <+0xc34>
082f0ea2 +0x0c26:  mov    0x8(%ebp),%eax
082f0ea5 +0x0c29:  mov    0x8cfc4(%eax),%eax
082f0eab +0x0c2f:  cmp    $0xa,%eax
082f0eae +0x0c32:  jne    082f0eb7 <+0xc3b>
082f0eb0 +0x0c34:  mov    $0x1,%eax
082f0eb5 +0x0c39:  jmp    082f0f33 <+0xcb7>
082f0eb7 +0x0c3b:  mov    0x8(%ebp),%eax
082f0eba +0x0c3e:  mov    0x8cfc4(%eax),%eax
082f0ec0 +0x0c44:  cmp    $0x8,%eax
082f0ec3 +0x0c47:  jne    082f0ecc <+0xc50>
082f0ec5 +0x0c49:  mov    $0x3,%eax
082f0eca +0x0c4e:  jmp    082f0f33 <+0xcb7>
082f0ecc +0x0c50:  mov    0x8(%ebp),%eax
082f0ecf +0x0c53:  mov    0x8cfc4(%eax),%eax
082f0ed5 +0x0c59:  cmp    $0x6,%eax
082f0ed8 +0x0c5c:  je     082f0ee8 <+0xc6c>
082f0eda +0x0c5e:  mov    0x8(%ebp),%eax
082f0edd +0x0c61:  mov    0x8cfc4(%eax),%eax
082f0ee3 +0x0c67:  cmp    $0x7,%eax
082f0ee6 +0x0c6a:  jne    082f0eef <+0xc73>
082f0ee8 +0x0c6c:  mov    $0x2,%eax
082f0eed +0x0c71:  jmp    082f0f33 <+0xcb7>
082f0eef +0x0c73:  mov    0x8(%ebp),%eax
082f0ef2 +0x0c76:  mov    0x8cfc4(%eax),%eax
082f0ef8 +0x0c7c:  cmp    $0xc,%eax
082f0efb +0x0c7f:  jne    082f0f04 <+0xc88>
082f0efd +0x0c81:  mov    $0x1,%eax
082f0f02 +0x0c86:  jmp    082f0f33 <+0xcb7>
082f0f04 +0x0c88:  mov    0x8(%ebp),%eax
082f0f07 +0x0c8b:  mov    0x8cfc4(%eax),%eax
082f0f0d +0x0c91:  cmp    $0xb,%eax
082f0f10 +0x0c94:  jne    082f0f19 <+0xc9d>
082f0f12 +0x0c96:  mov    $0x7,%eax
082f0f17 +0x0c9b:  jmp    082f0f33 <+0xcb7>
082f0f19 +0x0c9d:  mov    0x8(%ebp),%eax
082f0f1c +0x0ca0:  mov    0x8cfc4(%eax),%eax
082f0f22 +0x0ca6:  cmp    $0xc,%eax
082f0f25 +0x0ca9:  jne    082f0f2e <+0xcb2>
082f0f27 +0x0cab:  mov    $0x1,%eax
082f0f2c +0x0cb0:  jmp    082f0f33 <+0xcb7>
082f0f2e +0x0cb2:  mov    $0x0,%eax
082f0f33 +0x0cb7:  leave
082f0f34 +0x0cb8:  ret
082f0f35 +0x0cb9:  nop
082f0f36 +0x0cba:  push   %ebp
082f0f37 +0x0cbb:  mov    %esp,%ebp
082f0f39 +0x0cbd:  mov    0x8(%ebp),%eax
082f0f3c +0x0cc0:  mov    0x8e40c(%eax),%eax
082f0f42 +0x0cc6:  pop    %ebp
082f0f43 +0x0cc7:  ret
082f0f44 +0x0cc8:  push   %ebp
082f0f45 +0x0cc9:  mov    %esp,%ebp
082f0f47 +0x0ccb:  mov    0x8(%ebp),%eax
082f0f4a +0x0cce:  mov    0x4(%eax),%eax
082f0f4d +0x0cd1:  test   %eax,%eax
082f0f4f +0x0cd3:  setne  %al
082f0f52 +0x0cd6:  pop    %ebp
082f0f53 +0x0cd7:  ret
082f0f54 +0x0cd8:  push   %ebp
082f0f55 +0x0cd9:  mov    %esp,%ebp
082f0f57 +0x0cdb:  sub    $0x18,%esp
082f0f5a +0x0cde:  mov    0x8(%ebp),%eax
082f0f5d +0x0ce1:  mov    %eax,(%esp)
082f0f60 +0x0ce4:  call   082f111c <+0xea0>
082f0f65 +0x0ce9:  leave
082f0f66 +0x0cea:  ret
082f0f67 +0x0ceb:  nop
082f0f68 +0x0cec:  push   %ebp
082f0f69 +0x0ced:  mov    %esp,%ebp
082f0f6b +0x0cef:  sub    $0x18,%esp
082f0f6e +0x0cf2:  mov    0x8(%ebp),%eax
082f0f71 +0x0cf5:  mov    0xc(%ebp),%edx
082f0f74 +0x0cf8:  mov    %edx,0x4(%esp)
082f0f78 +0x0cfc:  mov    %eax,(%esp)
082f0f7b +0x0cff:  call   082f124a <+0xfce>
082f0f80 +0x0d04:  leave
082f0f81 +0x0d05:  ret
082f0f82 +0x0d06:  push   %ebp
082f0f83 +0x0d07:  mov    %esp,%ebp
082f0f85 +0x0d09:  sub    $0x18,%esp
082f0f88 +0x0d0c:  mov    0x8(%ebp),%eax
082f0f8b +0x0d0f:  mov    %eax,(%esp)
082f0f8e +0x0d12:  call   082f13fc <+0x1180>
082f0f93 +0x0d17:  leave
082f0f94 +0x0d18:  ret
082f0f95 +0x0d19:  nop
082f0f96 +0x0d1a:  push   %ebp
082f0f97 +0x0d1b:  mov    %esp,%ebp
082f0f99 +0x0d1d:  sub    $0x18,%esp
082f0f9c +0x0d20:  mov    0x8(%ebp),%eax
082f0f9f +0x0d23:  mov    %eax,(%esp)
082f0fa2 +0x0d26:  call   082f1462 <+0x11e6>
082f0fa7 +0x0d2b:  leave
082f0fa8 +0x0d2c:  ret
082f0fa9 +0x0d2d:  push   %ebp
082f0faa +0x0d2e:  mov    %esp,%ebp
082f0fac +0x0d30:  push   %edi
082f0fad +0x0d31:  push   %esi
082f0fae +0x0d32:  push   %ebx
082f0faf +0x0d33:  sub    $0x1c,%esp
082f0fb2 +0x0d36:  mov    $&_ZGVZN11pvp_assault30GetInstanceAssaultPlaceFactoryEvE8instance,%eax
082f0fb7 +0x0d3b:  movzbl (%eax),%eax
082f0fba +0x0d3e:  test   %al,%al
082f0fbc +0x0d40:  jne    082f102f <+0xdb3>
082f0fbe +0x0d42:  movl   $&_ZGVZN11pvp_assault30GetInstanceAssaultPlaceFactoryEvE8instance,(%esp)
082f0fc5 +0x0d49:  call   08725330 <__cxa_guard_acquire>
082f0fca +0x0d4e:  test   %eax,%eax
082f0fcc +0x0d50:  setne  %al
082f0fcf +0x0d53:  test   %al,%al
082f0fd1 +0x0d55:  je     082f102f <+0xdb3>
082f0fd3 +0x0d57:  mov    $0x0,%ebx
082f0fd8 +0x0d5c:  movl   $&_ZZN11pvp_assault30GetInstanceAssaultPlaceFactoryEvE8instance,(%esp)
082f0fdf +0x0d63:  call   082f0f96 <+0xd1a>
082f0fe4 +0x0d68:  movl   $&_ZGVZN11pvp_assault30GetInstanceAssaultPlaceFactoryEvE8instance,(%esp)
082f0feb +0x0d6f:  call   08725250 <__cxa_guard_release>
082f0ff0 +0x0d74:  mov    $&_ZN11pvp_assault20CAssaultPlaceFactoryD1Ev,%eax
082f0ff5 +0x0d79:  movl   $&__dso_handle,0x8(%esp)
082f0ffd +0x0d81:  movl   $&_ZZN11pvp_assault30GetInstanceAssaultPlaceFactoryEvE8instance,0x4(%esp)
082f1005 +0x0d89:  mov    %eax,(%esp)
082f1008 +0x0d8c:  call   0807ddd0 <_init+0x6c8>
082f100d +0x0d91:  jmp    082f102f <+0xdb3>
082f100f +0x0d93:  mov    %edx,%esi
082f1011 +0x0d95:  mov    %eax,%edi
082f1013 +0x0d97:  test   %bl,%bl
082f1015 +0x0d99:  jne    082f1023 <+0xda7>
082f1017 +0x0d9b:  movl   $&_ZGVZN11pvp_assault30GetInstanceAssaultPlaceFactoryEvE8instance,(%esp)
082f101e +0x0da2:  call   087252c0 <__cxa_guard_abort>
082f1023 +0x0da7:  mov    %edi,%eax
082f1025 +0x0da9:  mov    %esi,%edx
082f1027 +0x0dab:  mov    %eax,(%esp)
082f102a +0x0dae:  call   08ae3750 <_Unwind_Resume>
082f102f +0x0db3:  mov    $&_ZZN11pvp_assault30GetInstanceAssaultPlaceFactoryEvE8instance,%eax
082f1034 +0x0db8:  add    $0x1c,%esp
082f1037 +0x0dbb:  pop    %ebx
082f1038 +0x0dbc:  pop    %esi
082f1039 +0x0dbd:  pop    %edi
082f103a +0x0dbe:  pop    %ebp
082f103b +0x0dbf:  ret
082f103c +0x0dc0:  push   %ebp
082f103d +0x0dc1:  mov    %esp,%ebp
082f103f +0x0dc3:  sub    $0x18,%esp
082f1042 +0x0dc6:  mov    0x8(%ebp),%eax
082f1045 +0x0dc9:  add    $0x4,%eax
082f1048 +0x0dcc:  mov    %eax,(%esp)
082f104b +0x0dcf:  call   082f046a <+0x1ee>
082f1050 +0x0dd4:  leave
082f1051 +0x0dd5:  ret
082f1052 +0x0dd6:  push   %ebp
082f1053 +0x0dd7:  mov    %esp,%ebp
082f1055 +0x0dd9:  mov    0x8(%ebp),%eax
082f1058 +0x0ddc:  movl   $&_ZTVN11pvp_assault12CDispositionE+0x8,(%eax)
082f105e +0x0de2:  pop    %ebp
082f105f +0x0de3:  ret
082f1060 +0x0de4:  push   %ebp
082f1061 +0x0de5:  mov    %esp,%ebp
082f1063 +0x0de7:  sub    $0x18,%esp
082f1066 +0x0dea:  mov    0x8(%ebp),%eax
082f1069 +0x0ded:  mov    %eax,(%esp)
082f106c +0x0df0:  call   082f1a3a <+0x17be>
082f1071 +0x0df5:  leave
082f1072 +0x0df6:  ret
082f1073 +0x0df7:  nop
082f1074 +0x0df8:  push   %ebp
082f1075 +0x0df9:  mov    %esp,%ebp
082f1077 +0x0dfb:  sub    $0x18,%esp
082f107a +0x0dfe:  mov    0x8(%ebp),%eax
082f107d +0x0e01:  mov    %eax,(%esp)
082f1080 +0x0e04:  call   082f1a4e <+0x17d2>
082f1085 +0x0e09:  leave
082f1086 +0x0e0a:  ret
082f1087 +0x0e0b:  nop
082f1088 +0x0e0c:  push   %ebp
082f1089 +0x0e0d:  mov    %esp,%ebp
082f108b +0x0e0f:  sub    $0x18,%esp
082f108e +0x0e12:  mov    0x8(%ebp),%eax
082f1091 +0x0e15:  mov    %eax,(%esp)
082f1094 +0x0e18:  call   082f1aac <+0x1830>
082f1099 +0x0e1d:  leave
082f109a +0x0e1e:  ret
082f109b +0x0e1f:  nop
082f109c +0x0e20:  push   %ebp
082f109d +0x0e21:  mov    %esp,%ebp
082f109f +0x0e23:  sub    $0x18,%esp
082f10a2 +0x0e26:  mov    0x8(%ebp),%eax
082f10a5 +0x0e29:  mov    %eax,(%esp)
082f10a8 +0x0e2c:  call   082f1ac0 <+0x1844>
082f10ad +0x0e31:  leave
082f10ae +0x0e32:  ret
082f10af +0x0e33:  nop
082f10b0 +0x0e34:  push   %ebp
082f10b1 +0x0e35:  mov    %esp,%ebp
082f10b3 +0x0e37:  push   %ebx
082f10b4 +0x0e38:  sub    $0x14,%esp
082f10b7 +0x0e3b:  mov    0x8(%ebp),%eax
082f10ba +0x0e3e:  movl   $&_ZTVN11pvp_assault18CStaticDispositionE+0x8,(%eax)
082f10c0 +0x0e44:  mov    0x8(%ebp),%eax
082f10c3 +0x0e47:  add    $0x14,%eax
082f10c6 +0x0e4a:  test   %eax,%eax
082f10c8 +0x0e4c:  je     082f10e7 <+0xe6b>
082f10ca +0x0e4e:  mov    0x8(%ebp),%eax
082f10cd +0x0e51:  lea    0x2c(%eax),%ebx
082f10d0 +0x0e54:  mov    0x8(%ebp),%eax
082f10d3 +0x0e57:  add    $0x14,%eax
082f10d6 +0x0e5a:  cmp    %eax,%ebx
082f10d8 +0x0e5c:  je     082f10e7 <+0xe6b>
082f10da +0x0e5e:  sub    $0xc,%ebx
082f10dd +0x0e61:  mov    %ebx,(%esp)
082f10e0 +0x0e64:  call   082f109c <+0xe20>
082f10e5 +0x0e69:  jmp    082f10d0 <+0xe54>
082f10e7 +0x0e6b:  add    $0x14,%esp
082f10ea +0x0e6e:  pop    %ebx
082f10eb +0x0e6f:  pop    %ebp
082f10ec +0x0e70:  ret
082f10ed +0x0e71:  nop
082f10ee +0x0e72:  push   %ebp
082f10ef +0x0e73:  mov    %esp,%ebp
082f10f1 +0x0e75:  mov    0x8(%ebp),%eax
082f10f4 +0x0e78:  mov    0x4(%eax),%eax
082f10f7 +0x0e7b:  mov    %eax,%edx
082f10f9 +0x0e7d:  mov    0x8(%ebp),%eax
082f10fc +0x0e80:  mov    (%eax),%eax
082f10fe +0x0e82:  mov    %edx,%ecx
082f1100 +0x0e84:  sub    %eax,%ecx
082f1102 +0x0e86:  mov    %ecx,%eax
082f1104 +0x0e88:  sar    $0x2,%eax
082f1107 +0x0e8b:  pop    %ebp
082f1108 +0x0e8c:  ret
082f1109 +0x0e8d:  nop
082f110a +0x0e8e:  push   %ebp
082f110b +0x0e8f:  mov    %esp,%ebp
082f110d +0x0e91:  mov    0x8(%ebp),%eax
082f1110 +0x0e94:  mov    (%eax),%eax
082f1112 +0x0e96:  mov    0xc(%ebp),%edx
082f1115 +0x0e99:  shl    $0x2,%edx
082f1118 +0x0e9c:  add    %edx,%eax
082f111a +0x0e9e:  pop    %ebp
082f111b +0x0e9f:  ret
082f111c +0x0ea0:  push   %ebp
082f111d +0x0ea1:  mov    %esp,%ebp
082f111f +0x0ea3:  push   %ebx
082f1120 +0x0ea4:  sub    $0x44,%esp
082f1123 +0x0ea7:  mov    0x8(%ebp),%eax
082f1126 +0x0eaa:  add    $0x4,%eax
082f1129 +0x0ead:  mov    %eax,(%esp)
082f112c +0x0eb0:  call   082f1d92 <+0x1b16>
082f1131 +0x0eb5:  test   %al,%al
082f1133 +0x0eb7:  je     082f113f <+0xec3>
082f1135 +0x0eb9:  mov    $0x0,%eax
082f113a +0x0ebe:  jmp    082f1243 <+0xfc7>
082f113f +0x0ec3:  mov    0x8(%ebp),%eax
082f1142 +0x0ec6:  add    $0x4,%eax
082f1145 +0x0ec9:  mov    %eax,(%esp)
082f1148 +0x0ecc:  call   082f1da6 <+0x1b2a>
082f114d +0x0ed1:  mov    (%eax),%eax
082f114f +0x0ed3:  mov    %eax,-0xc(%ebp)
082f1152 +0x0ed6:  mov    0x8(%ebp),%eax
082f1155 +0x0ed9:  add    $0x4,%eax
082f1158 +0x0edc:  mov    %eax,(%esp)
082f115b +0x0edf:  call   082f1dba <+0x1b3e>
082f1160 +0x0ee4:  mov    -0xc(%ebp),%eax
082f1163 +0x0ee7:  mov    0x140(%eax),%eax
082f1169 +0x0eed:  cmp    $0x8f21,%eax
082f116e +0x0ef2:  je     082f11c4 <+0xf48>
082f1170 +0x0ef4:  mov    -0xc(%ebp),%eax
082f1173 +0x0ef7:  mov    0x140(%eax),%ebx
082f1179 +0x0efd:  movl   $0x0,0xc(%esp)
082f1181 +0x0f05:  movl   $0x89,0x8(%esp)
082f1189 +0x0f0d:  movl   $&_ZZN10StaticPoolIN11pvp_assault13CAssaultPlaceELi128EE7AcquireEvE12__FUNCTION__,0x4(%esp)
082f1191 +0x0f15:  lea    -0x2c(%ebp),%eax
082f1194 +0x0f18:  mov    %eax,(%esp)
082f1197 +0x0f1b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082f119c +0x0f20:  mov    -0xc(%ebp),%eax
082f119f +0x0f23:  mov    %eax,0xc(%esp)
082f11a3 +0x0f27:  mov    %ebx,0x8(%esp)
082f11a7 +0x0f2b:  movl   $"STATIC MEMORY_POOL Acquire error dummy(%x), node(%x)",0x4(%esp)
082f11af +0x0f33:  lea    -0x2c(%ebp),%eax
082f11b2 +0x0f36:  mov    %eax,(%esp)
082f11b5 +0x0f39:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082f11ba +0x0f3e:  mov    0x8(%ebp),%eax
082f11bd +0x0f41:  movl   $0x3,0x2c(%eax)
082f11c4 +0x0f48:  mov    -0xc(%ebp),%eax
082f11c7 +0x0f4b:  movzbl 0x144(%eax),%eax
082f11ce +0x0f52:  test   %al,%al
082f11d0 +0x0f54:  je     082f122a <+0xfae>
082f11d2 +0x0f56:  mov    -0xc(%ebp),%eax
082f11d5 +0x0f59:  movzbl 0x144(%eax),%eax
082f11dc +0x0f60:  movsbl %al,%ebx
082f11df +0x0f63:  movl   $0x0,0xc(%esp)
082f11e7 +0x0f6b:  movl   $0x8f,0x8(%esp)
082f11ef +0x0f73:  movl   $&_ZZN10StaticPoolIN11pvp_assault13CAssaultPlaceELi128EE7AcquireEvE12__FUNCTION__,0x4(%esp)
082f11f7 +0x0f7b:  lea    -0x1c(%ebp),%eax
082f11fa +0x0f7e:  mov    %eax,(%esp)
082f11fd +0x0f81:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082f1202 +0x0f86:  mov    -0xc(%ebp),%eax
082f1205 +0x0f89:  mov    %eax,0xc(%esp)
082f1209 +0x0f8d:  mov    %ebx,0x8(%esp)
082f120d +0x0f91:  movl   $"STATIC MEMORY_POOL Acquire error reference count(%d), node(%x)",0x4(%esp)
082f1215 +0x0f99:  lea    -0x1c(%ebp),%eax
082f1218 +0x0f9c:  mov    %eax,(%esp)
082f121b +0x0f9f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082f1220 +0x0fa4:  mov    0x8(%ebp),%eax
082f1223 +0x0fa7:  movl   $0x4,0x2c(%eax)
082f122a +0x0fae:  mov    -0xc(%ebp),%eax
082f122d +0x0fb1:  movzbl 0x144(%eax),%eax
082f1234 +0x0fb8:  lea    0x1(%eax),%edx
082f1237 +0x0fbb:  mov    -0xc(%ebp),%eax
082f123a +0x0fbe:  mov    %dl,0x144(%eax)
082f1240 +0x0fc4:  mov    -0xc(%ebp),%eax
082f1243 +0x0fc7:  add    $0x44,%esp
082f1246 +0x0fca:  pop    %ebx
082f1247 +0x0fcb:  pop    %ebp
082f1248 +0x0fcc:  ret
082f1249 +0x0fcd:  nop
082f124a +0x0fce:  push   %ebp
082f124b +0x0fcf:  mov    %esp,%ebp
082f124d +0x0fd1:  push   %esi
082f124e +0x0fd2:  push   %ebx
082f124f +0x0fd3:  sub    $0x50,%esp
082f1252 +0x0fd6:  cmpl   $0x0,0xc(%ebp)
082f1256 +0x0fda:  jne    082f129e <+0x1022>
082f1258 +0x0fdc:  movl   $0x5,0xc(%esp)
082f1260 +0x0fe4:  movl   $0xa0,0x8(%esp)
082f1268 +0x0fec:  movl   $&_ZZN10StaticPoolIN11pvp_assault13CAssaultPlaceELi128EE4FreeEPS1_E12__FUNCTION__,0x4(%esp)
082f1270 +0x0ff4:  lea    -0x38(%ebp),%eax
082f1273 +0x0ff7:  mov    %eax,(%esp)
082f1276 +0x0ffa:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082f127b +0x0fff:  movl   $0xa0,0xc(%esp)
082f1283 +0x1007:  movl   $&_ZZN10StaticPoolIN11pvp_assault13CAssaultPlaceELi128EE4FreeEPS1_E12__FUNCTION__,0x8(%esp)
082f128b +0x100f:  movl   $"[%s][%d]",0x4(%esp)
082f1293 +0x1017:  lea    -0x38(%ebp),%eax
082f1296 +0x101a:  mov    %eax,(%esp)
082f1299 +0x101d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082f129e +0x1022:  mov    0xc(%ebp),%eax
082f12a1 +0x1025:  mov    %eax,-0x3c(%ebp)
082f12a4 +0x1028:  mov    0x8(%ebp),%eax
082f12a7 +0x102b:  lea    0x4(%eax),%edx
082f12aa +0x102e:  lea    -0x3c(%ebp),%eax
082f12ad +0x1031:  mov    %eax,0x4(%esp)
082f12b1 +0x1035:  mov    %edx,(%esp)
082f12b4 +0x1038:  call   082f1dce <+0x1b52>
082f12b9 +0x103d:  mov    -0x3c(%ebp),%eax
082f12bc +0x1040:  mov    0x140(%eax),%eax
082f12c2 +0x1046:  cmp    $0x8f21,%eax
082f12c7 +0x104b:  je     082f131d <+0x10a1>
082f12c9 +0x104d:  mov    -0x3c(%ebp),%esi
082f12cc +0x1050:  mov    -0x3c(%ebp),%eax
082f12cf +0x1053:  mov    0x140(%eax),%ebx
082f12d5 +0x1059:  movl   $0x0,0xc(%esp)
082f12dd +0x1061:  movl   $0xaa,0x8(%esp)
082f12e5 +0x1069:  movl   $&_ZZN10StaticPoolIN11pvp_assault13CAssaultPlaceELi128EE4FreeEPS1_E12__FUNCTION__,0x4(%esp)
082f12ed +0x1071:  lea    -0x28(%ebp),%eax
082f12f0 +0x1074:  mov    %eax,(%esp)
082f12f3 +0x1077:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082f12f8 +0x107c:  mov    %esi,0xc(%esp)
082f12fc +0x1080:  mov    %ebx,0x8(%esp)
082f1300 +0x1084:  movl   $"STATIC MEMORY_POOL Free error dummy(%x), node(%x)",0x4(%esp)
082f1308 +0x108c:  lea    -0x28(%ebp),%eax
082f130b +0x108f:  mov    %eax,(%esp)
082f130e +0x1092:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082f1313 +0x1097:  mov    0x8(%ebp),%eax
082f1316 +0x109a:  movl   $0x5,0x2c(%eax)
082f131d +0x10a1:  mov    -0x3c(%ebp),%eax
082f1320 +0x10a4:  movzbl 0x144(%eax),%eax
082f1327 +0x10ab:  cmp    $0x1,%al
082f1329 +0x10ad:  je     082f1388 <+0x110c>
082f132b +0x10af:  mov    -0x3c(%ebp),%esi
082f132e +0x10b2:  mov    -0x3c(%ebp),%eax
082f1331 +0x10b5:  movzbl 0x144(%eax),%eax
082f1338 +0x10bc:  movsbl %al,%ebx
082f133b +0x10bf:  movl   $0x0,0xc(%esp)
082f1343 +0x10c7:  movl   $0xb0,0x8(%esp)
082f134b +0x10cf:  movl   $&_ZZN10StaticPoolIN11pvp_assault13CAssaultPlaceELi128EE4FreeEPS1_E12__FUNCTION__,0x4(%esp)
082f1353 +0x10d7:  lea    -0x18(%ebp),%eax
082f1356 +0x10da:  mov    %eax,(%esp)
082f1359 +0x10dd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082f135e +0x10e2:  mov    %esi,0xc(%esp)
082f1362 +0x10e6:  mov    %ebx,0x8(%esp)
082f1366 +0x10ea:  movl   $"STATIC MEMORY_POOL Free error reference count(%d), node(%x)",0x4(%esp)
082f136e +0x10f2:  lea    -0x18(%ebp),%eax
082f1371 +0x10f5:  mov    %eax,(%esp)
082f1374 +0x10f8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082f1379 +0x10fd:  mov    0x8(%ebp),%eax
082f137c +0x1100:  movl   $0x6,0x2c(%eax)
082f1383 +0x1107:  call   08108f9c <_Z14PrintBackTracev>  ; PrintBackTrace()
082f1388 +0x110c:  mov    -0x3c(%ebp),%eax
082f138b +0x110f:  movzbl 0x144(%eax),%edx
082f1392 +0x1116:  sub    $0x1,%edx
082f1395 +0x1119:  mov    %dl,0x144(%eax)
082f139b +0x111f:  add    $0x50,%esp
082f139e +0x1122:  pop    %ebx
082f139f +0x1123:  pop    %esi
082f13a0 +0x1124:  pop    %ebp
082f13a1 +0x1125:  ret
082f13a2 +0x1126:  push   %ebp
082f13a3 +0x1127:  mov    %esp,%ebp
082f13a5 +0x1129:  sub    $0x18,%esp
082f13a8 +0x112c:  mov    0x8(%ebp),%eax
082f13ab +0x112f:  mov    %eax,(%esp)
082f13ae +0x1132:  call   082f1de8 <+0x1b6c>
082f13b3 +0x1137:  leave
082f13b4 +0x1138:  ret
082f13b5 +0x1139:  nop
082f13b6 +0x113a:  push   %ebp
082f13b7 +0x113b:  mov    %esp,%ebp
082f13b9 +0x113d:  push   %ebx
082f13ba +0x113e:  sub    $0x4,%esp
082f13bd +0x1141:  mov    0x8(%ebp),%eax
082f13c0 +0x1144:  test   %eax,%eax
082f13c2 +0x1146:  je     082f13e1 <+0x1165>
082f13c4 +0x1148:  mov    0x8(%ebp),%eax
082f13c7 +0x114b:  lea    0x100(%eax),%ebx
082f13cd +0x1151:  mov    0x8(%ebp),%eax
082f13d0 +0x1154:  cmp    %eax,%ebx
082f13d2 +0x1156:  je     082f13e1 <+0x1165>
082f13d4 +0x1158:  sub    $0x20,%ebx
082f13d7 +0x115b:  mov    %ebx,(%esp)
082f13da +0x115e:  call   082e6636 <_ZN11pvp_assault10CAssaulterD1Ev>  ; pvp_assault::CAssaulter::~CAssaulter()
082f13df +0x1163:  jmp    082f13cd <+0x1151>
082f13e1 +0x1165:  add    $0x4,%esp
082f13e4 +0x1168:  pop    %ebx
082f13e5 +0x1169:  pop    %ebp
082f13e6 +0x116a:  ret
082f13e7 +0x116b:  nop
082f13e8 +0x116c:  push   %ebp
082f13e9 +0x116d:  mov    %esp,%ebp
082f13eb +0x116f:  sub    $0x18,%esp
082f13ee +0x1172:  mov    0x8(%ebp),%eax
082f13f1 +0x1175:  mov    %eax,(%esp)
082f13f4 +0x1178:  call   082f13b6 <+0x113a>
082f13f9 +0x117d:  leave
082f13fa +0x117e:  ret
082f13fb +0x117f:  nop
082f13fc +0x1180:  push   %ebp
082f13fd +0x1181:  mov    %esp,%ebp
082f13ff +0x1183:  push   %ebx
082f1400 +0x1184:  sub    $0x14,%esp
082f1403 +0x1187:  mov    0x8(%ebp),%eax
082f1406 +0x118a:  mov    (%eax),%eax
082f1408 +0x118c:  test   %eax,%eax
082f140a +0x118e:  je     082f144d <+0x11d1>
082f140c +0x1190:  mov    0x8(%ebp),%eax
082f140f +0x1193:  mov    (%eax),%edx
082f1411 +0x1195:  mov    0x8(%ebp),%eax
082f1414 +0x1198:  mov    (%eax),%eax
082f1416 +0x119a:  sub    $0x4,%eax
082f1419 +0x119d:  mov    (%eax),%eax
082f141b +0x119f:  imul   $0x148,%eax,%eax
082f1421 +0x11a5:  lea    (%edx,%eax,1),%ebx
082f1424 +0x11a8:  mov    0x8(%ebp),%eax
082f1427 +0x11ab:  mov    (%eax),%eax
082f1429 +0x11ad:  cmp    %eax,%ebx
082f142b +0x11af:  je     082f143d <+0x11c1>
082f142d +0x11b1:  sub    $0x148,%ebx
082f1433 +0x11b7:  mov    %ebx,(%esp)
082f1436 +0x11ba:  call   082f13e8 <+0x116c>
082f143b +0x11bf:  jmp    082f1424 <+0x11a8>
082f143d +0x11c1:  mov    0x8(%ebp),%eax
082f1440 +0x11c4:  mov    (%eax),%eax
082f1442 +0x11c6:  sub    $0x4,%eax
082f1445 +0x11c9:  mov    %eax,(%esp)
082f1448 +0x11cc:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
082f144d +0x11d1:  mov    0x8(%ebp),%eax
082f1450 +0x11d4:  add    $0x4,%eax
082f1453 +0x11d7:  mov    %eax,(%esp)
082f1456 +0x11da:  call   082f13a2 <+0x1126>
082f145b +0x11df:  add    $0x14,%esp
082f145e +0x11e2:  pop    %ebx
082f145f +0x11e3:  pop    %ebp
082f1460 +0x11e4:  ret
082f1461 +0x11e5:  nop
082f1462 +0x11e6:  push   %ebp
082f1463 +0x11e7:  mov    %esp,%ebp
082f1465 +0x11e9:  push   %edi
082f1466 +0x11ea:  push   %esi
082f1467 +0x11eb:  push   %ebx
082f1468 +0x11ec:  sub    $0x6c,%esp
082f146b +0x11ef:  lea    -0x58(%ebp),%eax
082f146e +0x11f2:  mov    %eax,(%esp)
082f1471 +0x11f5:  call   082f1e76 <+0x1bfa>
082f1476 +0x11fa:  mov    0x8(%ebp),%eax
082f1479 +0x11fd:  lea    0x4(%eax),%edx
082f147c +0x1200:  lea    -0x58(%ebp),%eax
082f147f +0x1203:  mov    %eax,0x4(%esp)
082f1483 +0x1207:  mov    %edx,(%esp)
082f1486 +0x120a:  call   082f1e8a <+0x1c0e>
082f148b +0x120f:  jmp    082f14a8 <+0x122c>
082f148d +0x1211:  mov    %edx,%ebx
082f148f +0x1213:  mov    %eax,%esi
082f1491 +0x1215:  lea    -0x58(%ebp),%eax
082f1494 +0x1218:  mov    %eax,(%esp)
082f1497 +0x121b:  call   082f1de8 <+0x1b6c>
082f149c +0x1220:  mov    %esi,%eax
082f149e +0x1222:  mov    %ebx,%edx
082f14a0 +0x1224:  mov    %eax,(%esp)
082f14a3 +0x1227:  call   08ae3750 <_Unwind_Resume>
082f14a8 +0x122c:  lea    -0x58(%ebp),%eax
082f14ab +0x122f:  mov    %eax,(%esp)
082f14ae +0x1232:  call   082f1de8 <+0x1b6c>
082f14b3 +0x1237:  movl   $0xa404,(%esp)
082f14ba +0x123e:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
082f14bf +0x1243:  mov    %eax,%ebx
082f14c1 +0x1245:  mov    %ebx,%eax
082f14c3 +0x1247:  movl   $0x80,(%eax)
082f14c9 +0x124d:  mov    %ebx,%eax
082f14cb +0x124f:  lea    0x4(%eax),%edi
082f14ce +0x1252:  mov    %edi,-0x64(%ebp)
082f14d1 +0x1255:  mov    $0x7f,%esi
082f14d6 +0x125a:  jmp    082f14ed <+0x1271>
082f14d8 +0x125c:  mov    -0x64(%ebp),%eax
082f14db +0x125f:  mov    %eax,(%esp)
082f14de +0x1262:  call   082f1eac <+0x1c30>
082f14e3 +0x1267:  addl   $0x148,-0x64(%ebp)
082f14ea +0x126e:  sub    $0x1,%esi
082f14ed +0x1271:  cmp    $0xffffffff,%esi
082f14f0 +0x1274:  setne  %al
082f14f3 +0x1277:  test   %al,%al
082f14f5 +0x1279:  jne    082f14d8 <+0x125c>
082f14f7 +0x127b:  jmp    082f1542 <+0x12c6>
082f14f9 +0x127d:  mov    %edx,-0x5c(%ebp)
082f14fc +0x1280:  mov    %eax,-0x60(%ebp)
082f14ff +0x1283:  test   %edi,%edi
082f1501 +0x1285:  je     082f1527 <+0x12ab>
082f1503 +0x1287:  mov    $0x7f,%eax
082f1508 +0x128c:  sub    %esi,%eax
082f150a +0x128e:  imul   $0x148,%eax,%eax
082f1510 +0x1294:  lea    (%edi,%eax,1),%esi
082f1513 +0x1297:  cmp    %edi,%esi
082f1515 +0x1299:  je     082f1527 <+0x12ab>
082f1517 +0x129b:  sub    $0x148,%esi
082f151d +0x12a1:  mov    %esi,(%esp)
082f1520 +0x12a4:  call   082f13e8 <+0x116c>
082f1525 +0x12a9:  jmp    082f1513 <+0x1297>
082f1527 +0x12ab:  mov    -0x60(%ebp),%eax
082f152a +0x12ae:  mov    -0x5c(%ebp),%edx
082f152d +0x12b1:  mov    %edx,%esi
082f152f +0x12b3:  mov    %eax,%edi
082f1531 +0x12b5:  mov    %ebx,(%esp)
082f1534 +0x12b8:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
082f1539 +0x12bd:  mov    %edi,%eax
082f153b +0x12bf:  mov    %esi,%edx
082f153d +0x12c1:  jmp    082f15ee <+0x1372>
082f1542 +0x12c6:  mov    %ebx,%eax
082f1544 +0x12c8:  lea    0x4(%eax),%edx
082f1547 +0x12cb:  mov    0x8(%ebp),%eax
082f154a +0x12ce:  mov    %edx,(%eax)
082f154c +0x12d0:  mov    0x8(%ebp),%eax
082f154f +0x12d3:  mov    (%eax),%eax
082f1551 +0x12d5:  test   %eax,%eax
082f1553 +0x12d7:  jne    082f159b <+0x131f>
082f1555 +0x12d9:  movl   $0x5,0xc(%esp)
082f155d +0x12e1:  movl   $0x6c,0x8(%esp)
082f1565 +0x12e9:  movl   $&_ZZN10StaticPoolIN11pvp_assault13CAssaultPlaceELi128EEC1EvE12__FUNCTION__,0x4(%esp)
082f156d +0x12f1:  lea    -0x30(%ebp),%eax
082f1570 +0x12f4:  mov    %eax,(%esp)
082f1573 +0x12f7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082f1578 +0x12fc:  movl   $0x6c,0xc(%esp)
082f1580 +0x1304:  movl   $&_ZZN10StaticPoolIN11pvp_assault13CAssaultPlaceELi128EEC1EvE12__FUNCTION__,0x8(%esp)
082f1588 +0x130c:  movl   $"[%s][%d]",0x4(%esp)
082f1590 +0x1314:  lea    -0x30(%ebp),%eax
082f1593 +0x1317:  mov    %eax,(%esp)
082f1596 +0x131a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082f159b +0x131f:  movl   $0x0,-0x1c(%ebp)
082f15a2 +0x1326:  jmp    082f15d1 <+0x1355>
082f15a4 +0x1328:  mov    0x8(%ebp),%eax
082f15a7 +0x132b:  mov    (%eax),%edx
082f15a9 +0x132d:  mov    -0x1c(%ebp),%eax
082f15ac +0x1330:  imul   $0x148,%eax,%eax
082f15b2 +0x1336:  lea    (%edx,%eax,1),%eax
082f15b5 +0x1339:  mov    %eax,-0x20(%ebp)
082f15b8 +0x133c:  mov    0x8(%ebp),%eax
082f15bb +0x133f:  lea    0x4(%eax),%edx
082f15be +0x1342:  lea    -0x20(%ebp),%eax
082f15c1 +0x1345:  mov    %eax,0x4(%esp)
082f15c5 +0x1349:  mov    %edx,(%esp)
082f15c8 +0x134c:  call   082f1ed6 <+0x1c5a>
082f15cd +0x1351:  addl   $0x1,-0x1c(%ebp)
082f15d1 +0x1355:  cmpl   $0x7f,-0x1c(%ebp)
082f15d5 +0x1359:  setle  %al
082f15d8 +0x135c:  test   %al,%al
082f15da +0x135e:  jne    082f15a4 <+0x1328>
082f15dc +0x1360:  mov    0x8(%ebp),%eax
082f15df +0x1363:  movl   $0x0,0x2c(%eax)
082f15e6 +0x136a:  add    $0x6c,%esp
082f15e9 +0x136d:  pop    %ebx
082f15ea +0x136e:  pop    %esi
082f15eb +0x136f:  pop    %edi
082f15ec +0x1370:  pop    %ebp
082f15ed +0x1371:  ret
082f15ee +0x1372:  mov    %edx,%ebx
082f15f0 +0x1374:  mov    %eax,%esi
082f15f2 +0x1376:  mov    0x8(%ebp),%eax
082f15f5 +0x1379:  add    $0x4,%eax
082f15f8 +0x137c:  mov    %eax,(%esp)
082f15fb +0x137f:  call   082f13a2 <+0x1126>
082f1600 +0x1384:  mov    %esi,%eax
082f1602 +0x1386:  mov    %ebx,%edx
082f1604 +0x1388:  mov    %eax,(%esp)
082f1607 +0x138b:  call   08ae3750 <_Unwind_Resume>
082f160c +0x1390:  push   %ebp
082f160d +0x1391:  mov    %esp,%ebp
082f160f +0x1393:  sub    $0x28,%esp
082f1612 +0x1396:  mov    0x8(%ebp),%eax
082f1615 +0x1399:  mov    0x4(%eax),%edx
082f1618 +0x139c:  mov    0x8(%ebp),%eax
082f161b +0x139f:  mov    0x8(%eax),%eax
082f161e +0x13a2:  cmp    %eax,%edx
082f1620 +0x13a4:  je     082f164f <+0x13d3>
082f1622 +0x13a6:  mov    0x8(%ebp),%eax
082f1625 +0x13a9:  mov    0x4(%eax),%edx
082f1628 +0x13ac:  mov    0x8(%ebp),%eax
082f162b +0x13af:  mov    0xc(%ebp),%ecx
082f162e +0x13b2:  mov    %ecx,0x8(%esp)
082f1632 +0x13b6:  mov    %edx,0x4(%esp)
082f1636 +0x13ba:  mov    %eax,(%esp)
082f1639 +0x13bd:  call   082f1f00 <+0x1c84>
082f163e +0x13c2:  mov    0x8(%ebp),%eax
082f1641 +0x13c5:  mov    0x4(%eax),%eax
082f1644 +0x13c8:  lea    0xc(%eax),%edx
082f1647 +0x13cb:  mov    0x8(%ebp),%eax
082f164a +0x13ce:  mov    %edx,0x4(%eax)
082f164d +0x13d1:  jmp    082f167d <+0x1401>
082f164f +0x13d3:  lea    -0xc(%ebp),%eax
082f1652 +0x13d6:  mov    0x8(%ebp),%edx
082f1655 +0x13d9:  mov    %edx,0x4(%esp)
082f1659 +0x13dd:  mov    %eax,(%esp)
082f165c +0x13e0:  call   082f1880 <+0x1604>
082f1661 +0x13e5:  sub    $0x4,%esp
082f1664 +0x13e8:  mov    0xc(%ebp),%eax
082f1667 +0x13eb:  mov    %eax,0x8(%esp)
082f166b +0x13ef:  mov    -0xc(%ebp),%eax
082f166e +0x13f2:  mov    %eax,0x4(%esp)
082f1672 +0x13f6:  mov    0x8(%ebp),%eax
082f1675 +0x13f9:  mov    %eax,(%esp)
082f1678 +0x13fc:  call   082f1f34 <+0x1cb8>
082f167d +0x1401:  leave
082f167e +0x1402:  ret
082f167f +0x1403:  nop
082f1680 +0x1404:  push   %ebp
082f1681 +0x1405:  mov    %esp,%ebp
082f1683 +0x1407:  mov    0x8(%ebp),%eax
082f1686 +0x140a:  mov    0x4(%eax),%eax
082f1689 +0x140d:  mov    %eax,%edx
082f168b +0x140f:  mov    0x8(%ebp),%eax
082f168e +0x1412:  mov    (%eax),%eax
082f1690 +0x1414:  mov    %edx,%ecx
082f1692 +0x1416:  sub    %eax,%ecx
082f1694 +0x1418:  mov    %ecx,%eax
082f1696 +0x141a:  sar    $0x2,%eax
082f1699 +0x141d:  imul   $0xaaaaaaab,%eax,%eax
082f169f +0x1423:  pop    %ebp
082f16a0 +0x1424:  ret
082f16a1 +0x1425:  nop
082f16a2 +0x1426:  push   %ebp
082f16a3 +0x1427:  mov    %esp,%ebp
082f16a5 +0x1429:  mov    0x8(%ebp),%eax
082f16a8 +0x142c:  mov    (%eax),%ecx
082f16aa +0x142e:  mov    0xc(%ebp),%edx
082f16ad +0x1431:  mov    %edx,%eax
082f16af +0x1433:  add    %eax,%eax
082f16b1 +0x1435:  add    %edx,%eax
082f16b3 +0x1437:  shl    $0x2,%eax
082f16b6 +0x143a:  lea    (%ecx,%eax,1),%eax
082f16b9 +0x143d:  pop    %ebp
082f16ba +0x143e:  ret
082f16bb +0x143f:  nop
082f16bc +0x1440:  push   %ebp
082f16bd +0x1441:  mov    %esp,%ebp
082f16bf +0x1443:  sub    $0x28,%esp
082f16c2 +0x1446:  mov    0x8(%ebp),%eax
082f16c5 +0x1449:  mov    0x4(%eax),%edx
082f16c8 +0x144c:  mov    0x8(%ebp),%eax
082f16cb +0x144f:  mov    0x8(%eax),%eax
082f16ce +0x1452:  cmp    %eax,%edx
082f16d0 +0x1454:  je     082f16ff <+0x1483>
082f16d2 +0x1456:  mov    0x8(%ebp),%eax
082f16d5 +0x1459:  mov    0x4(%eax),%edx
082f16d8 +0x145c:  mov    0x8(%ebp),%eax
082f16db +0x145f:  mov    0xc(%ebp),%ecx
082f16de +0x1462:  mov    %ecx,0x8(%esp)
082f16e2 +0x1466:  mov    %edx,0x4(%esp)
082f16e6 +0x146a:  mov    %eax,(%esp)
082f16e9 +0x146d:  call   082f220e <+0x1f92>
082f16ee +0x1472:  mov    0x8(%ebp),%eax
082f16f1 +0x1475:  mov    0x4(%eax),%eax
082f16f4 +0x1478:  lea    0x8(%eax),%edx
082f16f7 +0x147b:  mov    0x8(%ebp),%eax
082f16fa +0x147e:  mov    %edx,0x4(%eax)
082f16fd +0x1481:  jmp    082f172d <+0x14b1>
082f16ff +0x1483:  lea    -0xc(%ebp),%eax
082f1702 +0x1486:  mov    0x8(%ebp),%edx
082f1705 +0x1489:  mov    %edx,0x4(%esp)
082f1709 +0x148d:  mov    %eax,(%esp)
082f170c +0x1490:  call   082f1754 <+0x14d8>
082f1711 +0x1495:  sub    $0x4,%esp
082f1714 +0x1498:  mov    0xc(%ebp),%eax
082f1717 +0x149b:  mov    %eax,0x8(%esp)
082f171b +0x149f:  mov    -0xc(%ebp),%eax
082f171e +0x14a2:  mov    %eax,0x4(%esp)
082f1722 +0x14a6:  mov    0x8(%ebp),%eax
082f1725 +0x14a9:  mov    %eax,(%esp)
082f1728 +0x14ac:  call   082f223e <+0x1fc2>
082f172d +0x14b1:  leave
082f172e +0x14b2:  ret
082f172f +0x14b3:  nop
082f1730 +0x14b4:  push   %ebp
082f1731 +0x14b5:  mov    %esp,%ebp
082f1733 +0x14b7:  push   %ebx
082f1734 +0x14b8:  sub    $0x14,%esp
082f1737 +0x14bb:  mov    0x8(%ebp),%ebx
082f173a +0x14be:  mov    0xc(%ebp),%eax
082f173d +0x14c1:  mov    %eax,0x4(%esp)
082f1741 +0x14c5:  mov    %ebx,(%esp)
082f1744 +0x14c8:  call   082f24f6 <+0x227a>
082f1749 +0x14cd:  mov    %ebx,%eax
082f174b +0x14cf:  add    $0x14,%esp
082f174e +0x14d2:  pop    %ebx
082f174f +0x14d3:  pop    %ebp
082f1750 +0x14d4:  ret    $0x4
082f1753 +0x14d7:  nop
082f1754 +0x14d8:  push   %ebp
082f1755 +0x14d9:  mov    %esp,%ebp
082f1757 +0x14db:  push   %ebx
082f1758 +0x14dc:  sub    $0x14,%esp
082f175b +0x14df:  mov    0x8(%ebp),%ebx
082f175e +0x14e2:  mov    0xc(%ebp),%eax
082f1761 +0x14e5:  add    $0x4,%eax
082f1764 +0x14e8:  mov    %eax,0x4(%esp)
082f1768 +0x14ec:  mov    %ebx,(%esp)
082f176b +0x14ef:  call   082f24f6 <+0x227a>
082f1770 +0x14f4:  mov    %ebx,%eax
082f1772 +0x14f6:  add    $0x14,%esp
082f1775 +0x14f9:  pop    %ebx
082f1776 +0x14fa:  pop    %ebp
082f1777 +0x14fb:  ret    $0x4
082f177a +0x14fe:  push   %ebp
082f177b +0x14ff:  mov    %esp,%ebp
082f177d +0x1501:  push   %ebx
082f177e +0x1502:  sub    $0x14,%esp
082f1781 +0x1505:  mov    0x8(%ebp),%eax
082f1784 +0x1508:  mov    %eax,(%esp)
082f1787 +0x150b:  call   082f2506 <+0x228a>
082f178c +0x1510:  mov    (%eax),%ebx
082f178e +0x1512:  mov    0xc(%ebp),%eax
082f1791 +0x1515:  mov    %eax,(%esp)
082f1794 +0x1518:  call   082f2506 <+0x228a>
082f1799 +0x151d:  mov    (%eax),%eax
082f179b +0x151f:  cmp    %eax,%ebx
082f179d +0x1521:  setne  %al
082f17a0 +0x1524:  add    $0x14,%esp
082f17a3 +0x1527:  pop    %ebx
082f17a4 +0x1528:  pop    %ebp
082f17a5 +0x1529:  ret
082f17a6 +0x152a:  push   %ebp
082f17a7 +0x152b:  mov    %esp,%ebp
082f17a9 +0x152d:  mov    0x8(%ebp),%eax
082f17ac +0x1530:  mov    (%eax),%eax
082f17ae +0x1532:  lea    0x8(%eax),%edx
082f17b1 +0x1535:  mov    0x8(%ebp),%eax
082f17b4 +0x1538:  mov    %edx,(%eax)
082f17b6 +0x153a:  mov    0x8(%ebp),%eax
082f17b9 +0x153d:  pop    %ebp
082f17ba +0x153e:  ret
082f17bb +0x153f:  nop
082f17bc +0x1540:  push   %ebp
082f17bd +0x1541:  mov    %esp,%ebp
082f17bf +0x1543:  mov    0x8(%ebp),%eax
082f17c2 +0x1546:  mov    (%eax),%eax
082f17c4 +0x1548:  pop    %ebp
082f17c5 +0x1549:  ret
082f17c6 +0x154a:  push   %ebp
082f17c7 +0x154b:  mov    %esp,%ebp
082f17c9 +0x154d:  mov    0x8(%ebp),%eax
082f17cc +0x1550:  mov    0x4(%eax),%eax
082f17cf +0x1553:  mov    %eax,%edx
082f17d1 +0x1555:  mov    0x8(%ebp),%eax
082f17d4 +0x1558:  mov    (%eax),%eax
082f17d6 +0x155a:  mov    %edx,%ecx
082f17d8 +0x155c:  sub    %eax,%ecx
082f17da +0x155e:  mov    %ecx,%eax
082f17dc +0x1560:  sar    $0x2,%eax
082f17df +0x1563:  imul   $0xb6db6db7,%eax,%eax
082f17e5 +0x1569:  pop    %ebp
082f17e6 +0x156a:  ret
082f17e7 +0x156b:  nop
082f17e8 +0x156c:  push   %ebp
082f17e9 +0x156d:  mov    %esp,%ebp
082f17eb +0x156f:  sub    $0x18,%esp
082f17ee +0x1572:  mov    0xc(%ebp),%eax
082f17f1 +0x1575:  mov    %eax,0x4(%esp)
082f17f5 +0x1579:  mov    0x8(%ebp),%eax
082f17f8 +0x157c:  mov    %eax,(%esp)
082f17fb +0x157f:  call   082f250e <+0x2292>
082f1800 +0x1584:  mov    0xc(%ebp),%eax
082f1803 +0x1587:  mov    %eax,0x4(%esp)
082f1807 +0x158b:  mov    0x8(%ebp),%eax
082f180a +0x158e:  mov    %eax,(%esp)
082f180d +0x1591:  call   082f2538 <+0x22bc>
082f1812 +0x1596:  leave
082f1813 +0x1597:  ret
082f1814 +0x1598:  push   %ebp
082f1815 +0x1599:  mov    %esp,%ebp
082f1817 +0x159b:  mov    0x8(%ebp),%eax
082f181a +0x159e:  mov    0x4(%eax),%eax
082f181d +0x15a1:  mov    %eax,%edx
082f181f +0x15a3:  mov    0x8(%ebp),%eax
082f1822 +0x15a6:  mov    (%eax),%eax
082f1824 +0x15a8:  mov    %edx,%ecx
082f1826 +0x15aa:  sub    %eax,%ecx
082f1828 +0x15ac:  mov    %ecx,%eax
082f182a +0x15ae:  sar    $0x3,%eax
082f182d +0x15b1:  pop    %ebp
082f182e +0x15b2:  ret
082f182f +0x15b3:  nop
082f1830 +0x15b4:  push   %ebp
082f1831 +0x15b5:  mov    %esp,%ebp
082f1833 +0x15b7:  sub    $0x18,%esp
082f1836 +0x15ba:  mov    0xc(%ebp),%eax
082f1839 +0x15bd:  mov    %eax,0x4(%esp)
082f183d +0x15c1:  mov    0x8(%ebp),%eax
082f1840 +0x15c4:  mov    %eax,(%esp)
082f1843 +0x15c7:  call   082f255a <+0x22de>
082f1848 +0x15cc:  mov    0xc(%ebp),%eax
082f184b +0x15cf:  mov    %eax,0x4(%esp)
082f184f +0x15d3:  mov    0x8(%ebp),%eax
082f1852 +0x15d6:  mov    %eax,(%esp)
082f1855 +0x15d9:  call   082f2584 <+0x2308>
082f185a +0x15de:  leave
082f185b +0x15df:  ret
082f185c +0x15e0:  push   %ebp
082f185d +0x15e1:  mov    %esp,%ebp
082f185f +0x15e3:  push   %ebx
082f1860 +0x15e4:  sub    $0x14,%esp
082f1863 +0x15e7:  mov    0x8(%ebp),%ebx
082f1866 +0x15ea:  mov    0xc(%ebp),%eax
082f1869 +0x15ed:  mov    %eax,0x4(%esp)
082f186d +0x15f1:  mov    %ebx,(%esp)
082f1870 +0x15f4:  call   082f2596 <+0x231a>
082f1875 +0x15f9:  mov    %ebx,%eax
082f1877 +0x15fb:  add    $0x14,%esp
082f187a +0x15fe:  pop    %ebx
082f187b +0x15ff:  pop    %ebp
082f187c +0x1600:  ret    $0x4
082f187f +0x1603:  nop
082f1880 +0x1604:  push   %ebp
082f1881 +0x1605:  mov    %esp,%ebp
082f1883 +0x1607:  push   %ebx
082f1884 +0x1608:  sub    $0x14,%esp
082f1887 +0x160b:  mov    0x8(%ebp),%ebx
082f188a +0x160e:  mov    0xc(%ebp),%eax
082f188d +0x1611:  add    $0x4,%eax
082f1890 +0x1614:  mov    %eax,0x4(%esp)
082f1894 +0x1618:  mov    %ebx,(%esp)
082f1897 +0x161b:  call   082f2596 <+0x231a>
082f189c +0x1620:  mov    %ebx,%eax
082f189e +0x1622:  add    $0x14,%esp
082f18a1 +0x1625:  pop    %ebx
082f18a2 +0x1626:  pop    %ebp
082f18a3 +0x1627:  ret    $0x4
082f18a6 +0x162a:  push   %ebp
082f18a7 +0x162b:  mov    %esp,%ebp
082f18a9 +0x162d:  push   %ebx
082f18aa +0x162e:  sub    $0x14,%esp
082f18ad +0x1631:  mov    0x8(%ebp),%eax
082f18b0 +0x1634:  mov    %eax,(%esp)
082f18b3 +0x1637:  call   082f25a6 <+0x232a>
082f18b8 +0x163c:  mov    (%eax),%ebx
082f18ba +0x163e:  mov    0xc(%ebp),%eax
082f18bd +0x1641:  mov    %eax,(%esp)
082f18c0 +0x1644:  call   082f25a6 <+0x232a>
082f18c5 +0x1649:  mov    (%eax),%eax
082f18c7 +0x164b:  cmp    %eax,%ebx
082f18c9 +0x164d:  setne  %al
082f18cc +0x1650:  add    $0x14,%esp
082f18cf +0x1653:  pop    %ebx
082f18d0 +0x1654:  pop    %ebp
082f18d1 +0x1655:  ret
082f18d2 +0x1656:  push   %ebp
082f18d3 +0x1657:  mov    %esp,%ebp
082f18d5 +0x1659:  mov    0x8(%ebp),%eax
082f18d8 +0x165c:  mov    (%eax),%eax
082f18da +0x165e:  pop    %ebp
082f18db +0x165f:  ret
082f18dc +0x1660:  push   %ebp
082f18dd +0x1661:  mov    %esp,%ebp
082f18df +0x1663:  push   %ebx
082f18e0 +0x1664:  sub    $0x34,%esp
082f18e3 +0x1667:  mov    0x8(%ebp),%ebx
082f18e6 +0x166a:  lea    -0x24(%ebp),%eax
082f18e9 +0x166d:  mov    0xc(%ebp),%edx
082f18ec +0x1670:  mov    %edx,0x4(%esp)
082f18f0 +0x1674:  mov    %eax,(%esp)
082f18f3 +0x1677:  call   082f1880 <+0x1604>
082f18f8 +0x167c:  sub    $0x4,%esp
082f18fb +0x167f:  movl   $0x1,-0x1c(%ebp)
082f1902 +0x1686:  lea    -0x20(%ebp),%eax
082f1905 +0x1689:  lea    -0x1c(%ebp),%edx
082f1908 +0x168c:  mov    %edx,0x8(%esp)
082f190c +0x1690:  lea    0x10(%ebp),%edx
082f190f +0x1693:  mov    %edx,0x4(%esp)
082f1913 +0x1697:  mov    %eax,(%esp)
082f1916 +0x169a:  call   082f25ae <+0x2332>
082f191b +0x169f:  sub    $0x4,%esp
082f191e +0x16a2:  lea    -0x24(%ebp),%eax
082f1921 +0x16a5:  mov    %eax,0x4(%esp)
082f1925 +0x16a9:  lea    -0x20(%ebp),%eax
082f1928 +0x16ac:  mov    %eax,(%esp)
082f192b +0x16af:  call   082f18a6 <+0x162a>
082f1930 +0x16b4:  test   %al,%al
082f1932 +0x16b6:  je     082f198f <+0x1713>
082f1934 +0x16b8:  lea    -0x14(%ebp),%eax
082f1937 +0x16bb:  mov    0xc(%ebp),%edx
082f193a +0x16be:  mov    %edx,0x4(%esp)
082f193e +0x16c2:  mov    %eax,(%esp)
082f1941 +0x16c5:  call   082f1880 <+0x1604>
082f1946 +0x16ca:  sub    $0x4,%esp
082f1949 +0x16cd:  movl   $0x1,-0xc(%ebp)
082f1950 +0x16d4:  lea    -0x10(%ebp),%eax
082f1953 +0x16d7:  lea    -0xc(%ebp),%edx
082f1956 +0x16da:  mov    %edx,0x8(%esp)
082f195a +0x16de:  lea    0x10(%ebp),%edx
082f195d +0x16e1:  mov    %edx,0x4(%esp)
082f1961 +0x16e5:  mov    %eax,(%esp)
082f1964 +0x16e8:  call   082f25ae <+0x2332>
082f1969 +0x16ed:  sub    $0x4,%esp
082f196c +0x16f0:  lea    -0x18(%ebp),%eax
082f196f +0x16f3:  mov    0x10(%ebp),%edx
082f1972 +0x16f6:  mov    %edx,0xc(%esp)
082f1976 +0x16fa:  mov    -0x14(%ebp),%edx
082f1979 +0x16fd:  mov    %edx,0x8(%esp)
082f197d +0x1701:  mov    -0x10(%ebp),%edx
082f1980 +0x1704:  mov    %edx,0x4(%esp)
082f1984 +0x1708:  mov    %eax,(%esp)
082f1987 +0x170b:  call   082f25ec <+0x2370>
082f198c +0x1710:  sub    $0x4,%esp
082f198f +0x1713:  mov    0xc(%ebp),%eax
082f1992 +0x1716:  mov    0x4(%eax),%eax
082f1995 +0x1719:  lea    -0xc(%eax),%edx
082f1998 +0x171c:  mov    0xc(%ebp),%eax
082f199b +0x171f:  mov    %edx,0x4(%eax)
082f199e +0x1722:  mov    0xc(%ebp),%eax
082f19a1 +0x1725:  mov    0x4(%eax),%edx
082f19a4 +0x1728:  mov    0xc(%ebp),%eax
082f19a7 +0x172b:  mov    %edx,0x4(%esp)
082f19ab +0x172f:  mov    %eax,(%esp)
082f19ae +0x1732:  call   082f2650 <+0x23d4>
082f19b3 +0x1737:  mov    0x10(%ebp),%eax
082f19b6 +0x173a:  mov    %eax,(%ebx)
082f19b8 +0x173c:  mov    %ebx,%eax
082f19ba +0x173e:  mov    -0x4(%ebp),%ebx
082f19bd +0x1741:  leave
082f19be +0x1742:  ret    $0x4
082f19c1 +0x1745:  nop
082f19c2 +0x1746:  push   %ebp
082f19c3 +0x1747:  mov    %esp,%ebp
082f19c5 +0x1749:  mov    0x8(%ebp),%eax
082f19c8 +0x174c:  mov    (%eax),%eax
082f19ca +0x174e:  lea    0xc(%eax),%edx
082f19cd +0x1751:  mov    0x8(%ebp),%eax
082f19d0 +0x1754:  mov    %edx,(%eax)
082f19d2 +0x1756:  mov    0x8(%ebp),%eax
082f19d5 +0x1759:  pop    %ebp
082f19d6 +0x175a:  ret
082f19d7 +0x175b:  push   %ebp
082f19d8 +0x175c:  mov    %esp,%ebp
082f19da +0x175e:  sub    $0x18,%esp
082f19dd +0x1761:  lea    0xc(%ebp),%eax
082f19e0 +0x1764:  mov    %eax,0x4(%esp)
082f19e4 +0x1768:  lea    0x8(%ebp),%eax
082f19e7 +0x176b:  mov    %eax,(%esp)
082f19ea +0x176e:  call   082f18a6 <+0x162a>
082f19ef +0x1773:  test   %al,%al
082f19f1 +0x1775:  je     082f1a37 <+0x17bb>
082f19f3 +0x1777:  lea    0x8(%ebp),%eax
082f19f6 +0x177a:  mov    %eax,0x4(%esp)
082f19fa +0x177e:  lea    0xc(%ebp),%eax
082f19fd +0x1781:  mov    %eax,(%esp)
082f1a00 +0x1784:  call   082f2663 <+0x23e7>
082f1a05 +0x1789:  mov    %eax,(%esp)
082f1a08 +0x178c:  call   08134415 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1c>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1c
082f1a0d +0x1791:  add    %eax,%eax
082f1a0f +0x1793:  mov    %eax,0x8(%esp)
082f1a13 +0x1797:  mov    0xc(%ebp),%eax
082f1a16 +0x179a:  mov    %eax,0x4(%esp)
082f1a1a +0x179e:  mov    0x8(%ebp),%eax
082f1a1d +0x17a1:  mov    %eax,(%esp)
082f1a20 +0x17a4:  call   082f269b <+0x241f>
082f1a25 +0x17a9:  mov    0xc(%ebp),%eax
082f1a28 +0x17ac:  mov    %eax,0x4(%esp)
082f1a2c +0x17b0:  mov    0x8(%ebp),%eax
082f1a2f +0x17b3:  mov    %eax,(%esp)
082f1a32 +0x17b6:  call   082f27ee <+0x2572>
082f1a37 +0x17bb:  leave
082f1a38 +0x17bc:  ret
082f1a39 +0x17bd:  nop
082f1a3a +0x17be:  push   %ebp
082f1a3b +0x17bf:  mov    %esp,%ebp
082f1a3d +0x17c1:  sub    $0x18,%esp
082f1a40 +0x17c4:  mov    0x8(%ebp),%eax
082f1a43 +0x17c7:  mov    %eax,(%esp)
082f1a46 +0x17ca:  call   082f28a4 <+0x2628>
082f1a4b +0x17cf:  leave
082f1a4c +0x17d0:  ret
082f1a4d +0x17d1:  nop
082f1a4e +0x17d2:  push   %ebp
082f1a4f +0x17d3:  mov    %esp,%ebp
082f1a51 +0x17d5:  push   %esi
082f1a52 +0x17d6:  push   %ebx
082f1a53 +0x17d7:  sub    $0x10,%esp
082f1a56 +0x17da:  mov    0x8(%ebp),%eax
082f1a59 +0x17dd:  mov    %eax,(%esp)
082f1a5c +0x17e0:  call   082f2926 <+0x26aa>
082f1a61 +0x17e5:  mov    0x8(%ebp),%edx
082f1a64 +0x17e8:  mov    0x4(%edx),%ecx
082f1a67 +0x17eb:  mov    0x8(%ebp),%edx
082f1a6a +0x17ee:  mov    (%edx),%edx
082f1a6c +0x17f0:  mov    %eax,0x8(%esp)
082f1a70 +0x17f4:  mov    %ecx,0x4(%esp)
082f1a74 +0x17f8:  mov    %edx,(%esp)
082f1a77 +0x17fb:  call   082f292e <+0x26b2>
082f1a7c +0x1800:  jmp    082f1a99 <+0x181d>
082f1a7e +0x1802:  mov    %edx,%ebx
082f1a80 +0x1804:  mov    %eax,%esi
082f1a82 +0x1806:  mov    0x8(%ebp),%eax
082f1a85 +0x1809:  mov    %eax,(%esp)
082f1a88 +0x180c:  call   082f28b8 <+0x263c>
082f1a8d +0x1811:  mov    %esi,%eax
082f1a8f +0x1813:  mov    %ebx,%edx
082f1a91 +0x1815:  mov    %eax,(%esp)
082f1a94 +0x1818:  call   08ae3750 <_Unwind_Resume>
082f1a99 +0x181d:  mov    0x8(%ebp),%eax
082f1a9c +0x1820:  mov    %eax,(%esp)
082f1a9f +0x1823:  call   082f28b8 <+0x263c>
082f1aa4 +0x1828:  add    $0x10,%esp
082f1aa7 +0x182b:  pop    %ebx
082f1aa8 +0x182c:  pop    %esi
082f1aa9 +0x182d:  pop    %ebp
082f1aaa +0x182e:  ret
082f1aab +0x182f:  nop
082f1aac +0x1830:  push   %ebp
082f1aad +0x1831:  mov    %esp,%ebp
082f1aaf +0x1833:  sub    $0x18,%esp
082f1ab2 +0x1836:  mov    0x8(%ebp),%eax
082f1ab5 +0x1839:  mov    %eax,(%esp)
082f1ab8 +0x183c:  call   082f295c <+0x26e0>
082f1abd +0x1841:  leave
082f1abe +0x1842:  ret
082f1abf +0x1843:  nop
082f1ac0 +0x1844:  push   %ebp
082f1ac1 +0x1845:  mov    %esp,%ebp
082f1ac3 +0x1847:  push   %esi
082f1ac4 +0x1848:  push   %ebx
082f1ac5 +0x1849:  sub    $0x10,%esp
082f1ac8 +0x184c:  mov    0x8(%ebp),%eax
082f1acb +0x184f:  mov    %eax,(%esp)
082f1ace +0x1852:  call   082f29d8 <+0x275c>
082f1ad3 +0x1857:  mov    0x8(%ebp),%edx
082f1ad6 +0x185a:  mov    0x4(%edx),%ecx
082f1ad9 +0x185d:  mov    0x8(%ebp),%edx
082f1adc +0x1860:  mov    (%edx),%edx
082f1ade +0x1862:  mov    %eax,0x8(%esp)
082f1ae2 +0x1866:  mov    %ecx,0x4(%esp)
082f1ae6 +0x186a:  mov    %edx,(%esp)
082f1ae9 +0x186d:  call   082f29e0 <+0x2764>
082f1aee +0x1872:  jmp    082f1b0b <+0x188f>
082f1af0 +0x1874:  mov    %edx,%ebx
082f1af2 +0x1876:  mov    %eax,%esi
082f1af4 +0x1878:  mov    0x8(%ebp),%eax
082f1af7 +0x187b:  mov    %eax,(%esp)
082f1afa +0x187e:  call   082f2970 <+0x26f4>
082f1aff +0x1883:  mov    %esi,%eax
082f1b01 +0x1885:  mov    %ebx,%edx
082f1b03 +0x1887:  mov    %eax,(%esp)
082f1b06 +0x188a:  call   08ae3750 <_Unwind_Resume>
082f1b0b +0x188f:  mov    0x8(%ebp),%eax
082f1b0e +0x1892:  mov    %eax,(%esp)
082f1b11 +0x1895:  call   082f2970 <+0x26f4>
082f1b16 +0x189a:  add    $0x10,%esp
082f1b19 +0x189d:  pop    %ebx
082f1b1a +0x189e:  pop    %esi
082f1b1b +0x189f:  pop    %ebp
082f1b1c +0x18a0:  ret
082f1b1d +0x18a1:  nop
082f1b1e +0x18a2:  push   %ebp
082f1b1f +0x18a3:  mov    %esp,%ebp
082f1b21 +0x18a5:  sub    $0x18,%esp
082f1b24 +0x18a8:  mov    0x8(%ebp),%eax
082f1b27 +0x18ab:  mov    %eax,(%esp)
082f1b2a +0x18ae:  call   082f2a0e <+0x2792>
082f1b2f +0x18b3:  leave
082f1b30 +0x18b4:  ret
082f1b31 +0x18b5:  nop
082f1b32 +0x18b6:  push   %ebp
082f1b33 +0x18b7:  mov    %esp,%ebp
082f1b35 +0x18b9:  push   %esi
082f1b36 +0x18ba:  push   %ebx
082f1b37 +0x18bb:  sub    $0x10,%esp
082f1b3a +0x18be:  mov    0x8(%ebp),%eax
082f1b3d +0x18c1:  mov    %eax,(%esp)
082f1b40 +0x18c4:  call   082f2a8a <+0x280e>
082f1b45 +0x18c9:  mov    0x8(%ebp),%edx
082f1b48 +0x18cc:  mov    0x4(%edx),%ecx
082f1b4b +0x18cf:  mov    0x8(%ebp),%edx
082f1b4e +0x18d2:  mov    (%edx),%edx
082f1b50 +0x18d4:  mov    %eax,0x8(%esp)
082f1b54 +0x18d8:  mov    %ecx,0x4(%esp)
082f1b58 +0x18dc:  mov    %edx,(%esp)
082f1b5b +0x18df:  call   082f2a92 <+0x2816>
082f1b60 +0x18e4:  jmp    082f1b7d <+0x1901>
082f1b62 +0x18e6:  mov    %edx,%ebx
082f1b64 +0x18e8:  mov    %eax,%esi
082f1b66 +0x18ea:  mov    0x8(%ebp),%eax
082f1b69 +0x18ed:  mov    %eax,(%esp)
082f1b6c +0x18f0:  call   082f2a22 <+0x27a6>
082f1b71 +0x18f5:  mov    %esi,%eax
082f1b73 +0x18f7:  mov    %ebx,%edx
082f1b75 +0x18f9:  mov    %eax,(%esp)
082f1b78 +0x18fc:  call   08ae3750 <_Unwind_Resume>
082f1b7d +0x1901:  mov    0x8(%ebp),%eax
082f1b80 +0x1904:  mov    %eax,(%esp)
082f1b83 +0x1907:  call   082f2a22 <+0x27a6>
082f1b88 +0x190c:  add    $0x10,%esp
082f1b8b +0x190f:  pop    %ebx
082f1b8c +0x1910:  pop    %esi
082f1b8d +0x1911:  pop    %ebp
082f1b8e +0x1912:  ret
082f1b8f +0x1913:  nop
082f1b90 +0x1914:  push   %ebp
082f1b91 +0x1915:  mov    %esp,%ebp
082f1b93 +0x1917:  mov    0x8(%ebp),%eax
082f1b96 +0x191a:  mov    0x4(%eax),%eax
082f1b99 +0x191d:  mov    %eax,%edx
082f1b9b +0x191f:  mov    0x8(%ebp),%eax
082f1b9e +0x1922:  mov    (%eax),%eax
082f1ba0 +0x1924:  mov    %edx,%ecx
082f1ba2 +0x1926:  sub    %eax,%ecx
082f1ba4 +0x1928:  mov    %ecx,%eax
082f1ba6 +0x192a:  sar    $0x2,%eax
082f1ba9 +0x192d:  pop    %ebp
082f1baa +0x192e:  ret
082f1bab +0x192f:  nop
082f1bac +0x1930:  push   %ebp
082f1bad +0x1931:  mov    %esp,%ebp
082f1baf +0x1933:  sub    $0x18,%esp
082f1bb2 +0x1936:  mov    0xc(%ebp),%eax
082f1bb5 +0x1939:  mov    %eax,0x4(%esp)
082f1bb9 +0x193d:  mov    0x8(%ebp),%eax
082f1bbc +0x1940:  mov    %eax,(%esp)
082f1bbf +0x1943:  call   082f2aac <+0x2830>
082f1bc4 +0x1948:  mov    0xc(%ebp),%eax
082f1bc7 +0x194b:  mov    %eax,0x4(%esp)
082f1bcb +0x194f:  mov    0x8(%ebp),%eax
082f1bce +0x1952:  mov    %eax,(%esp)
082f1bd1 +0x1955:  call   082f2ad6 <+0x285a>
082f1bd6 +0x195a:  leave
082f1bd7 +0x195b:  ret
082f1bd8 +0x195c:  push   %ebp
082f1bd9 +0x195d:  mov    %esp,%ebp
082f1bdb +0x195f:  mov    0x8(%ebp),%eax
082f1bde +0x1962:  mov    0x6ee28(%eax),%eax
082f1be4 +0x1968:  pop    %ebp
082f1be5 +0x1969:  ret
082f1be6 +0x196a:  push   %ebp
082f1be7 +0x196b:  mov    %esp,%ebp
082f1be9 +0x196d:  mov    0x8(%ebp),%eax
082f1bec +0x1970:  mov    0x6ee0c(%eax),%eax
082f1bf2 +0x1976:  pop    %ebp
082f1bf3 +0x1977:  ret
082f1bf4 +0x1978:  push   %ebp
082f1bf5 +0x1979:  mov    %esp,%ebp
082f1bf7 +0x197b:  mov    0x8(%ebp),%eax
082f1bfa +0x197e:  movzwl 0x6ee20(%eax),%eax
082f1c01 +0x1985:  pop    %ebp
082f1c02 +0x1986:  ret
082f1c03 +0x1987:  nop
082f1c04 +0x1988:  push   %ebp
082f1c05 +0x1989:  mov    %esp,%ebp
082f1c07 +0x198b:  mov    0x8(%ebp),%eax
082f1c0a +0x198e:  mov    0x6ee24(%eax),%eax
082f1c10 +0x1994:  pop    %ebp
082f1c11 +0x1995:  ret
082f1c12 +0x1996:  push   %ebp
082f1c13 +0x1997:  mov    %esp,%ebp
082f1c15 +0x1999:  push   %ebx
082f1c16 +0x199a:  sub    $0x14,%esp
082f1c19 +0x199d:  mov    0x8(%ebp),%ebx
082f1c1c +0x19a0:  mov    0xc(%ebp),%eax
082f1c1f +0x19a3:  mov    %eax,0x4(%esp)
082f1c23 +0x19a7:  mov    %ebx,(%esp)
082f1c26 +0x19aa:  call   082f2ae8 <+0x286c>
082f1c2b +0x19af:  sub    $0x4,%esp
082f1c2e +0x19b2:  mov    %ebx,%eax
082f1c30 +0x19b4:  mov    -0x4(%ebp),%ebx
082f1c33 +0x19b7:  leave
082f1c34 +0x19b8:  ret    $0x4
082f1c37 +0x19bb:  nop
082f1c38 +0x19bc:  push   %ebp
082f1c39 +0x19bd:  mov    %esp,%ebp
082f1c3b +0x19bf:  push   %ebx
082f1c3c +0x19c0:  sub    $0x14,%esp
082f1c3f +0x19c3:  mov    0x8(%ebp),%ebx
082f1c42 +0x19c6:  mov    0xc(%ebp),%eax
082f1c45 +0x19c9:  mov    %eax,0x4(%esp)
082f1c49 +0x19cd:  mov    %ebx,(%esp)
082f1c4c +0x19d0:  call   082f2b0e <+0x2892>
082f1c51 +0x19d5:  sub    $0x4,%esp
082f1c54 +0x19d8:  mov    %ebx,%eax
082f1c56 +0x19da:  mov    -0x4(%ebp),%ebx
082f1c59 +0x19dd:  leave
082f1c5a +0x19de:  ret    $0x4
082f1c5d +0x19e1:  nop
082f1c5e +0x19e2:  push   %ebp
082f1c5f +0x19e3:  mov    %esp,%ebp
082f1c61 +0x19e5:  mov    0x8(%ebp),%eax
082f1c64 +0x19e8:  mov    (%eax),%edx
082f1c66 +0x19ea:  mov    0xc(%ebp),%eax
082f1c69 +0x19ed:  mov    (%eax),%eax
082f1c6b +0x19ef:  cmp    %eax,%edx
082f1c6d +0x19f1:  setne  %al
082f1c70 +0x19f4:  pop    %ebp
082f1c71 +0x19f5:  ret
082f1c72 +0x19f6:  push   %ebp
082f1c73 +0x19f7:  mov    %esp,%ebp
082f1c75 +0x19f9:  sub    $0x18,%esp
082f1c78 +0x19fc:  mov    0x8(%ebp),%eax
082f1c7b +0x19ff:  mov    (%eax),%eax
082f1c7d +0x1a01:  mov    %eax,(%esp)
082f1c80 +0x1a04:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
082f1c85 +0x1a09:  mov    0x8(%ebp),%edx
082f1c88 +0x1a0c:  mov    %eax,(%edx)
082f1c8a +0x1a0e:  mov    0x8(%ebp),%eax
082f1c8d +0x1a11:  leave
082f1c8e +0x1a12:  ret
082f1c8f +0x1a13:  nop
082f1c90 +0x1a14:  push   %ebp
082f1c91 +0x1a15:  mov    %esp,%ebp
082f1c93 +0x1a17:  mov    0x8(%ebp),%eax
082f1c96 +0x1a1a:  mov    (%eax),%eax
082f1c98 +0x1a1c:  add    $0x10,%eax
082f1c9b +0x1a1f:  pop    %ebp
082f1c9c +0x1a20:  ret
082f1c9d +0x1a21:  nop
082f1c9e +0x1a22:  push   %ebp
082f1c9f +0x1a23:  mov    %esp,%ebp
082f1ca1 +0x1a25:  push   %ebx
082f1ca2 +0x1a26:  sub    $0x14,%esp
082f1ca5 +0x1a29:  mov    0x8(%ebp),%ebx
082f1ca8 +0x1a2c:  mov    0xc(%ebp),%eax
082f1cab +0x1a2f:  mov    0x10(%ebp),%edx
082f1cae +0x1a32:  mov    %edx,0x8(%esp)
082f1cb2 +0x1a36:  mov    %eax,0x4(%esp)
082f1cb6 +0x1a3a:  mov    %ebx,(%esp)
082f1cb9 +0x1a3d:  call   082f2b34 <+0x28b8>
082f1cbe +0x1a42:  sub    $0x4,%esp
082f1cc1 +0x1a45:  mov    %ebx,%eax
082f1cc3 +0x1a47:  mov    -0x4(%ebp),%ebx
082f1cc6 +0x1a4a:  leave
082f1cc7 +0x1a4b:  ret    $0x4
082f1cca +0x1a4e:  push   %ebp
082f1ccb +0x1a4f:  mov    %esp,%ebp
082f1ccd +0x1a51:  mov    0x8(%ebp),%eax
082f1cd0 +0x1a54:  mov    (%eax),%edx
082f1cd2 +0x1a56:  mov    0xc(%ebp),%eax
082f1cd5 +0x1a59:  mov    (%eax),%eax
082f1cd7 +0x1a5b:  cmp    %eax,%edx
082f1cd9 +0x1a5d:  sete   %al
082f1cdc +0x1a60:  pop    %ebp
082f1cdd +0x1a61:  ret
082f1cde +0x1a62:  push   %ebp
082f1cdf +0x1a63:  mov    %esp,%ebp
082f1ce1 +0x1a65:  sub    $0x18,%esp
082f1ce4 +0x1a68:  mov    0x8(%ebp),%eax
082f1ce7 +0x1a6b:  mov    0xc(%ebp),%edx
082f1cea +0x1a6e:  mov    %edx,0x4(%esp)
082f1cee +0x1a72:  mov    %eax,(%esp)
082f1cf1 +0x1a75:  call   082f2bf2 <+0x2976>
082f1cf6 +0x1a7a:  leave
082f1cf7 +0x1a7b:  ret
082f1cf8 +0x1a7c:  push   %ebp
082f1cf9 +0x1a7d:  mov    %esp,%ebp
082f1cfb +0x1a7f:  push   %esi
082f1cfc +0x1a80:  push   %ebx
082f1cfd +0x1a81:  sub    $0x10,%esp
082f1d00 +0x1a84:  mov    0x8(%ebp),%esi
082f1d03 +0x1a87:  mov    0x10(%ebp),%eax
082f1d06 +0x1a8a:  mov    %eax,(%esp)
082f1d09 +0x1a8d:  call   082f2c33 <+0x29b7>
082f1d0e +0x1a92:  mov    %eax,%ebx
082f1d10 +0x1a94:  mov    0xc(%ebp),%eax
082f1d13 +0x1a97:  mov    %eax,(%esp)
082f1d16 +0x1a9a:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
082f1d1b +0x1a9f:  mov    %ebx,0x8(%esp)
082f1d1f +0x1aa3:  mov    %eax,0x4(%esp)
082f1d23 +0x1aa7:  mov    %esi,(%esp)
082f1d26 +0x1aaa:  call   082f2c3c <+0x29c0>
082f1d2b +0x1aaf:  mov    %esi,%eax
082f1d2d +0x1ab1:  add    $0x10,%esp
082f1d30 +0x1ab4:  pop    %ebx
082f1d31 +0x1ab5:  pop    %esi
082f1d32 +0x1ab6:  pop    %ebp
082f1d33 +0x1ab7:  ret    $0x4
082f1d36 +0x1aba:  push   %ebp
082f1d37 +0x1abb:  mov    %esp,%ebp
082f1d39 +0x1abd:  sub    $0x18,%esp
082f1d3c +0x1ac0:  mov    0xc(%ebp),%eax
082f1d3f +0x1ac3:  mov    %eax,(%esp)
082f1d42 +0x1ac6:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
082f1d47 +0x1acb:  mov    (%eax),%edx
082f1d49 +0x1acd:  mov    0x8(%ebp),%eax
082f1d4c +0x1ad0:  mov    %edx,(%eax)
082f1d4e +0x1ad2:  mov    0xc(%ebp),%eax
082f1d51 +0x1ad5:  add    $0x4,%eax
082f1d54 +0x1ad8:  mov    %eax,(%esp)
082f1d57 +0x1adb:  call   082f2c69 <+0x29ed>
082f1d5c +0x1ae0:  mov    (%eax),%edx
082f1d5e +0x1ae2:  mov    0x8(%ebp),%eax
082f1d61 +0x1ae5:  mov    %edx,0x4(%eax)
082f1d64 +0x1ae8:  leave
082f1d65 +0x1ae9:  ret
082f1d66 +0x1aea:  push   %ebp
082f1d67 +0x1aeb:  mov    %esp,%ebp
082f1d69 +0x1aed:  push   %ebx
082f1d6a +0x1aee:  sub    $0x14,%esp
082f1d6d +0x1af1:  mov    0x8(%ebp),%ebx
082f1d70 +0x1af4:  mov    0xc(%ebp),%eax
082f1d73 +0x1af7:  mov    0x10(%ebp),%edx
082f1d76 +0x1afa:  mov    %edx,0x8(%esp)
082f1d7a +0x1afe:  mov    %eax,0x4(%esp)
082f1d7e +0x1b02:  mov    %ebx,(%esp)
082f1d81 +0x1b05:  call   082f2c72 <+0x29f6>
082f1d86 +0x1b0a:  sub    $0x4,%esp
082f1d89 +0x1b0d:  mov    %ebx,%eax
082f1d8b +0x1b0f:  mov    -0x4(%ebp),%ebx
082f1d8e +0x1b12:  leave
082f1d8f +0x1b13:  ret    $0x4
082f1d92 +0x1b16:  push   %ebp
082f1d93 +0x1b17:  mov    %esp,%ebp
082f1d95 +0x1b19:  sub    $0x18,%esp
082f1d98 +0x1b1c:  mov    0x8(%ebp),%eax
082f1d9b +0x1b1f:  mov    %eax,(%esp)
082f1d9e +0x1b22:  call   082f2e42 <+0x2bc6>
082f1da3 +0x1b27:  leave
082f1da4 +0x1b28:  ret
082f1da5 +0x1b29:  nop
082f1da6 +0x1b2a:  push   %ebp
082f1da7 +0x1b2b:  mov    %esp,%ebp
082f1da9 +0x1b2d:  sub    $0x18,%esp
082f1dac +0x1b30:  mov    0x8(%ebp),%eax
082f1daf +0x1b33:  mov    %eax,(%esp)
082f1db2 +0x1b36:  call   082f2e62 <+0x2be6>
082f1db7 +0x1b3b:  leave
082f1db8 +0x1b3c:  ret
082f1db9 +0x1b3d:  nop
082f1dba +0x1b3e:  push   %ebp
082f1dbb +0x1b3f:  mov    %esp,%ebp
082f1dbd +0x1b41:  sub    $0x18,%esp
082f1dc0 +0x1b44:  mov    0x8(%ebp),%eax
082f1dc3 +0x1b47:  mov    %eax,(%esp)
082f1dc6 +0x1b4a:  call   082f2e8a <+0x2c0e>
082f1dcb +0x1b4f:  leave
082f1dcc +0x1b50:  ret
082f1dcd +0x1b51:  nop
082f1dce +0x1b52:  push   %ebp
082f1dcf +0x1b53:  mov    %esp,%ebp
082f1dd1 +0x1b55:  sub    $0x18,%esp
082f1dd4 +0x1b58:  mov    0x8(%ebp),%eax
082f1dd7 +0x1b5b:  mov    0xc(%ebp),%edx
082f1dda +0x1b5e:  mov    %edx,0x4(%esp)
082f1dde +0x1b62:  mov    %eax,(%esp)
082f1de1 +0x1b65:  call   082f2ed6 <+0x2c5a>
082f1de6 +0x1b6a:  leave
082f1de7 +0x1b6b:  ret
082f1de8 +0x1b6c:  push   %ebp
082f1de9 +0x1b6d:  mov    %esp,%ebp
082f1deb +0x1b6f:  push   %esi
082f1dec +0x1b70:  push   %ebx
082f1ded +0x1b71:  sub    $0x30,%esp
082f1df0 +0x1b74:  mov    0x8(%ebp),%eax
082f1df3 +0x1b77:  mov    %eax,(%esp)
082f1df6 +0x1b7a:  call   082f3018 <+0x2d9c>
082f1dfb +0x1b7f:  mov    %eax,%ebx
082f1dfd +0x1b81:  lea    -0x28(%ebp),%eax
082f1e00 +0x1b84:  mov    0x8(%ebp),%edx
082f1e03 +0x1b87:  mov    %edx,0x4(%esp)
082f1e07 +0x1b8b:  mov    %eax,(%esp)
082f1e0a +0x1b8e:  call   082f2fee <+0x2d72>
082f1e0f +0x1b93:  sub    $0x4,%esp
082f1e12 +0x1b96:  lea    -0x18(%ebp),%eax
082f1e15 +0x1b99:  mov    0x8(%ebp),%edx
082f1e18 +0x1b9c:  mov    %edx,0x4(%esp)
082f1e1c +0x1ba0:  mov    %eax,(%esp)
082f1e1f +0x1ba3:  call   082f2fc4 <+0x2d48>
082f1e24 +0x1ba8:  sub    $0x4,%esp
082f1e27 +0x1bab:  mov    %ebx,0xc(%esp)
082f1e2b +0x1baf:  lea    -0x28(%ebp),%eax
082f1e2e +0x1bb2:  mov    %eax,0x8(%esp)
082f1e32 +0x1bb6:  lea    -0x18(%ebp),%eax
082f1e35 +0x1bb9:  mov    %eax,0x4(%esp)
082f1e39 +0x1bbd:  mov    0x8(%ebp),%eax
082f1e3c +0x1bc0:  mov    %eax,(%esp)
082f1e3f +0x1bc3:  call   082f3054 <+0x2dd8>
082f1e44 +0x1bc8:  jmp    082f1e61 <+0x1be5>
082f1e46 +0x1bca:  mov    %edx,%ebx
082f1e48 +0x1bcc:  mov    %eax,%esi
082f1e4a +0x1bce:  mov    0x8(%ebp),%eax
082f1e4d +0x1bd1:  mov    %eax,(%esp)
082f1e50 +0x1bd4:  call   082f2f44 <+0x2cc8>
082f1e55 +0x1bd9:  mov    %esi,%eax
082f1e57 +0x1bdb:  mov    %ebx,%edx
082f1e59 +0x1bdd:  mov    %eax,(%esp)
082f1e5c +0x1be0:  call   08ae3750 <_Unwind_Resume>
082f1e61 +0x1be5:  mov    0x8(%ebp),%eax
082f1e64 +0x1be8:  mov    %eax,(%esp)
082f1e67 +0x1beb:  call   082f2f44 <+0x2cc8>
082f1e6c +0x1bf0:  lea    -0x8(%ebp),%esp
082f1e6f +0x1bf3:  add    $0x0,%esp
082f1e72 +0x1bf6:  pop    %ebx
082f1e73 +0x1bf7:  pop    %esi
082f1e74 +0x1bf8:  pop    %ebp
082f1e75 +0x1bf9:  ret
082f1e76 +0x1bfa:  push   %ebp
082f1e77 +0x1bfb:  mov    %esp,%ebp
082f1e79 +0x1bfd:  sub    $0x18,%esp
082f1e7c +0x1c00:  mov    0x8(%ebp),%eax
082f1e7f +0x1c03:  mov    %eax,(%esp)
082f1e82 +0x1c06:  call   082f305c <+0x2de0>
082f1e87 +0x1c0b:  leave
082f1e88 +0x1c0c:  ret
082f1e89 +0x1c0d:  nop
082f1e8a +0x1c0e:  push   %ebp
082f1e8b +0x1c0f:  mov    %esp,%ebp
082f1e8d +0x1c11:  sub    $0x18,%esp
082f1e90 +0x1c14:  mov    0xc(%ebp),%eax
082f1e93 +0x1c17:  mov    %eax,(%esp)
082f1e96 +0x1c1a:  call   082f30a6 <+0x2e2a>
082f1e9b +0x1c1f:  mov    0x8(%ebp),%edx
082f1e9e +0x1c22:  mov    %eax,0x4(%esp)
082f1ea2 +0x1c26:  mov    %edx,(%esp)
082f1ea5 +0x1c29:  call   082f30ae <+0x2e32>
082f1eaa +0x1c2e:  leave
082f1eab +0x1c2f:  ret
082f1eac +0x1c30:  push   %ebp
082f1ead +0x1c31:  mov    %esp,%ebp
082f1eaf +0x1c33:  sub    $0x18,%esp
082f1eb2 +0x1c36:  mov    0x8(%ebp),%eax
082f1eb5 +0x1c39:  mov    %eax,(%esp)
082f1eb8 +0x1c3c:  call   082f0614 <+0x398>
082f1ebd +0x1c41:  mov    0x8(%ebp),%eax
082f1ec0 +0x1c44:  movl   $0x8f21,0x140(%eax)
082f1eca +0x1c4e:  mov    0x8(%ebp),%eax
082f1ecd +0x1c51:  movb   $0x0,0x144(%eax)
082f1ed4 +0x1c58:  leave
082f1ed5 +0x1c59:  ret
082f1ed6 +0x1c5a:  push   %ebp
082f1ed7 +0x1c5b:  mov    %esp,%ebp
082f1ed9 +0x1c5d:  sub    $0x28,%esp
082f1edc +0x1c60:  mov    0xc(%ebp),%eax
082f1edf +0x1c63:  mov    %eax,(%esp)
082f1ee2 +0x1c66:  call   082f30d0 <+0x2e54>
082f1ee7 +0x1c6b:  mov    (%eax),%eax
082f1ee9 +0x1c6d:  mov    %eax,-0xc(%ebp)
082f1eec +0x1c70:  mov    0x8(%ebp),%eax
082f1eef +0x1c73:  lea    -0xc(%ebp),%edx
082f1ef2 +0x1c76:  mov    %edx,0x4(%esp)
082f1ef6 +0x1c7a:  mov    %eax,(%esp)
082f1ef9 +0x1c7d:  call   082f30d8 <+0x2e5c>
082f1efe +0x1c82:  leave
082f1eff +0x1c83:  ret
082f1f00 +0x1c84:  push   %ebp
082f1f01 +0x1c85:  mov    %esp,%ebp
082f1f03 +0x1c87:  sub    $0x18,%esp
082f1f06 +0x1c8a:  mov    0xc(%ebp),%eax
082f1f09 +0x1c8d:  mov    %eax,0x4(%esp)
082f1f0d +0x1c91:  movl   $0xc,(%esp)
082f1f14 +0x1c98:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f1f19 +0x1c9d:  mov    %eax,%edx
082f1f1b +0x1c9f:  test   %edx,%edx
082f1f1d +0x1ca1:  je     082f1f32 <+0x1cb6>
082f1f1f +0x1ca3:  mov    0x10(%ebp),%edx
082f1f22 +0x1ca6:  mov    (%edx),%ecx
082f1f24 +0x1ca8:  mov    %ecx,(%eax)
082f1f26 +0x1caa:  mov    0x4(%edx),%ecx
082f1f29 +0x1cad:  mov    %ecx,0x4(%eax)
082f1f2c +0x1cb0:  mov    0x8(%edx),%edx
082f1f2f +0x1cb3:  mov    %edx,0x8(%eax)
082f1f32 +0x1cb6:  leave
082f1f33 +0x1cb7:  ret
082f1f34 +0x1cb8:  push   %ebp
082f1f35 +0x1cb9:  mov    %esp,%ebp
082f1f37 +0x1cbb:  push   %esi
082f1f38 +0x1cbc:  push   %ebx
082f1f39 +0x1cbd:  sub    $0x30,%esp
082f1f3c +0x1cc0:  mov    0x8(%ebp),%eax
082f1f3f +0x1cc3:  mov    0x4(%eax),%edx
082f1f42 +0x1cc6:  mov    0x8(%ebp),%eax
082f1f45 +0x1cc9:  mov    0x8(%eax),%eax
082f1f48 +0x1ccc:  cmp    %eax,%edx
082f1f4a +0x1cce:  je     082f1fe5 <+0x1d69>
082f1f50 +0x1cd4:  mov    0x8(%ebp),%eax
082f1f53 +0x1cd7:  mov    0x4(%eax),%eax
082f1f56 +0x1cda:  sub    $0xc,%eax
082f1f59 +0x1cdd:  mov    %eax,(%esp)
082f1f5c +0x1ce0:  call   082f3102 <+0x2e86>
082f1f61 +0x1ce5:  mov    0x8(%ebp),%edx
082f1f64 +0x1ce8:  mov    0x4(%edx),%ecx
082f1f67 +0x1ceb:  mov    0x8(%ebp),%edx
082f1f6a +0x1cee:  mov    %eax,0x8(%esp)
082f1f6e +0x1cf2:  mov    %ecx,0x4(%esp)
082f1f72 +0x1cf6:  mov    %edx,(%esp)
082f1f75 +0x1cf9:  call   082f310a <+0x2e8e>
082f1f7a +0x1cfe:  mov    0x8(%ebp),%eax
082f1f7d +0x1d01:  mov    0x4(%eax),%eax
082f1f80 +0x1d04:  lea    0xc(%eax),%edx
082f1f83 +0x1d07:  mov    0x8(%ebp),%eax
082f1f86 +0x1d0a:  mov    %edx,0x4(%eax)
082f1f89 +0x1d0d:  mov    0x8(%ebp),%eax
082f1f8c +0x1d10:  mov    0x4(%eax),%eax
082f1f8f +0x1d13:  lea    -0xc(%eax),%esi
082f1f92 +0x1d16:  mov    0x8(%ebp),%eax
082f1f95 +0x1d19:  mov    0x4(%eax),%eax
082f1f98 +0x1d1c:  lea    -0x18(%eax),%ebx
082f1f9b +0x1d1f:  lea    0xc(%ebp),%eax
082f1f9e +0x1d22:  mov    %eax,(%esp)
082f1fa1 +0x1d25:  call   082f25a6 <+0x232a>
082f1fa6 +0x1d2a:  mov    (%eax),%eax
082f1fa8 +0x1d2c:  mov    %esi,0x8(%esp)
082f1fac +0x1d30:  mov    %ebx,0x4(%esp)
082f1fb0 +0x1d34:  mov    %eax,(%esp)
082f1fb3 +0x1d37:  call   082f314d <+0x2ed1>
082f1fb8 +0x1d3c:  lea    0xc(%ebp),%eax
082f1fbb +0x1d3f:  mov    %eax,(%esp)
082f1fbe +0x1d42:  call   082f18d2 <+0x1656>
082f1fc3 +0x1d47:  mov    %eax,%ebx
082f1fc5 +0x1d49:  mov    0x10(%ebp),%eax
082f1fc8 +0x1d4c:  mov    %eax,(%esp)
082f1fcb +0x1d4f:  call   082f3185 <+0x2f09>
082f1fd0 +0x1d54:  mov    (%eax),%edx
082f1fd2 +0x1d56:  mov    %edx,(%ebx)
082f1fd4 +0x1d58:  mov    0x4(%eax),%edx
082f1fd7 +0x1d5b:  mov    %edx,0x4(%ebx)
082f1fda +0x1d5e:  mov    0x8(%eax),%eax
082f1fdd +0x1d61:  mov    %eax,0x8(%ebx)
082f1fe0 +0x1d64:  jmp    082f2204 <+0x1f88>
082f1fe5 +0x1d69:  movl   $"vector::_M_insert_aux",0x8(%esp)
082f1fed +0x1d71:  movl   $0x1,0x4(%esp)
082f1ff5 +0x1d79:  mov    0x8(%ebp),%eax
082f1ff8 +0x1d7c:  mov    %eax,(%esp)
082f1ffb +0x1d7f:  call   082f318e <+0x2f12>
082f2000 +0x1d84:  mov    %eax,-0x18(%ebp)
082f2003 +0x1d87:  lea    -0x1c(%ebp),%eax
082f2006 +0x1d8a:  mov    0x8(%ebp),%edx
082f2009 +0x1d8d:  mov    %edx,0x4(%esp)
082f200d +0x1d91:  mov    %eax,(%esp)
082f2010 +0x1d94:  call   082f185c <+0x15e0>
082f2015 +0x1d99:  sub    $0x4,%esp
082f2018 +0x1d9c:  lea    -0x1c(%ebp),%eax
082f201b +0x1d9f:  mov    %eax,0x4(%esp)
082f201f +0x1da3:  lea    0xc(%ebp),%eax
082f2022 +0x1da6:  mov    %eax,(%esp)
082f2025 +0x1da9:  call   082f2663 <+0x23e7>
082f202a +0x1dae:  mov    %eax,-0x14(%ebp)
082f202d +0x1db1:  mov    0x8(%ebp),%eax
082f2030 +0x1db4:  mov    -0x18(%ebp),%edx
082f2033 +0x1db7:  mov    %edx,0x4(%esp)
082f2037 +0x1dbb:  mov    %eax,(%esp)
082f203a +0x1dbe:  call   082f3234 <+0x2fb8>
082f203f +0x1dc3:  mov    %eax,-0x10(%ebp)
082f2042 +0x1dc6:  mov    -0x10(%ebp),%eax
082f2045 +0x1dc9:  mov    %eax,-0xc(%ebp)
082f2048 +0x1dcc:  mov    0x10(%ebp),%eax
082f204b +0x1dcf:  mov    %eax,(%esp)
082f204e +0x1dd2:  call   082f3185 <+0x2f09>
082f2053 +0x1dd7:  mov    %eax,%ecx
082f2055 +0x1dd9:  mov    -0x14(%ebp),%edx
082f2058 +0x1ddc:  mov    %edx,%eax
082f205a +0x1dde:  add    %eax,%eax
082f205c +0x1de0:  add    %edx,%eax
082f205e +0x1de2:  shl    $0x2,%eax
082f2061 +0x1de5:  mov    %eax,%edx
082f2063 +0x1de7:  add    -0x10(%ebp),%edx
082f2066 +0x1dea:  mov    0x8(%ebp),%eax
082f2069 +0x1ded:  mov    %ecx,0x8(%esp)
082f206d +0x1df1:  mov    %edx,0x4(%esp)
082f2071 +0x1df5:  mov    %eax,(%esp)
082f2074 +0x1df8:  call   082f1f00 <+0x1c84>
082f2079 +0x1dfd:  movl   $0x0,-0xc(%ebp)
082f2080 +0x1e04:  mov    0x8(%ebp),%eax
082f2083 +0x1e07:  mov    %eax,(%esp)
082f2086 +0x1e0a:  call   082f2926 <+0x26aa>
082f208b +0x1e0f:  mov    %eax,%ebx
082f208d +0x1e11:  lea    0xc(%ebp),%eax
082f2090 +0x1e14:  mov    %eax,(%esp)
082f2093 +0x1e17:  call   082f25a6 <+0x232a>
082f2098 +0x1e1c:  mov    (%eax),%edx
082f209a +0x1e1e:  mov    0x8(%ebp),%eax
082f209d +0x1e21:  mov    (%eax),%eax
082f209f +0x1e23:  mov    %ebx,0xc(%esp)
082f20a3 +0x1e27:  mov    -0x10(%ebp),%ecx
082f20a6 +0x1e2a:  mov    %ecx,0x8(%esp)
082f20aa +0x1e2e:  mov    %edx,0x4(%esp)
082f20ae +0x1e32:  mov    %eax,(%esp)
082f20b1 +0x1e35:  call   082f3263 <+0x2fe7>
082f20b6 +0x1e3a:  mov    %eax,-0xc(%ebp)
082f20b9 +0x1e3d:  addl   $0xc,-0xc(%ebp)
082f20bd +0x1e41:  mov    0x8(%ebp),%eax
082f20c0 +0x1e44:  mov    %eax,(%esp)
082f20c3 +0x1e47:  call   082f2926 <+0x26aa>
082f20c8 +0x1e4c:  mov    %eax,%ebx
082f20ca +0x1e4e:  mov    0x8(%ebp),%eax
082f20cd +0x1e51:  mov    0x4(%eax),%esi
082f20d0 +0x1e54:  lea    0xc(%ebp),%eax
082f20d3 +0x1e57:  mov    %eax,(%esp)
082f20d6 +0x1e5a:  call   082f25a6 <+0x232a>
082f20db +0x1e5f:  mov    (%eax),%eax
082f20dd +0x1e61:  mov    %ebx,0xc(%esp)
082f20e1 +0x1e65:  mov    -0xc(%ebp),%edx
082f20e4 +0x1e68:  mov    %edx,0x8(%esp)
082f20e8 +0x1e6c:  mov    %esi,0x4(%esp)
082f20ec +0x1e70:  mov    %eax,(%esp)
082f20ef +0x1e73:  call   082f3263 <+0x2fe7>
082f20f4 +0x1e78:  mov    %eax,-0xc(%ebp)
082f20f7 +0x1e7b:  mov    0x8(%ebp),%eax
082f20fa +0x1e7e:  mov    %eax,(%esp)
082f20fd +0x1e81:  call   082f2926 <+0x26aa>
082f2102 +0x1e86:  mov    0x8(%ebp),%edx
082f2105 +0x1e89:  mov    0x4(%edx),%ecx
082f2108 +0x1e8c:  mov    0x8(%ebp),%edx
082f210b +0x1e8f:  mov    (%edx),%edx
082f210d +0x1e91:  mov    %eax,0x8(%esp)
082f2111 +0x1e95:  mov    %ecx,0x4(%esp)
082f2115 +0x1e99:  mov    %edx,(%esp)
082f2118 +0x1e9c:  call   082f292e <+0x26b2>
082f211d +0x1ea1:  mov    0x8(%ebp),%eax
082f2120 +0x1ea4:  mov    0x8(%eax),%eax
082f2123 +0x1ea7:  mov    %eax,%edx
082f2125 +0x1ea9:  mov    0x8(%ebp),%eax
082f2128 +0x1eac:  mov    (%eax),%eax
082f212a +0x1eae:  mov    %edx,%ecx
082f212c +0x1eb0:  sub    %eax,%ecx
082f212e +0x1eb2:  mov    %ecx,%eax
082f2130 +0x1eb4:  sar    $0x2,%eax
082f2133 +0x1eb7:  imul   $0xaaaaaaab,%eax,%eax
082f2139 +0x1ebd:  mov    %eax,%ecx
082f213b +0x1ebf:  mov    0x8(%ebp),%eax
082f213e +0x1ec2:  mov    (%eax),%edx
082f2140 +0x1ec4:  mov    0x8(%ebp),%eax
082f2143 +0x1ec7:  mov    %ecx,0x8(%esp)
082f2147 +0x1ecb:  mov    %edx,0x4(%esp)
082f214b +0x1ecf:  mov    %eax,(%esp)
082f214e +0x1ed2:  call   082f32b6 <+0x303a>
082f2153 +0x1ed7:  mov    0x8(%ebp),%eax
082f2156 +0x1eda:  mov    -0x10(%ebp),%edx
082f2159 +0x1edd:  mov    %edx,(%eax)
082f215b +0x1edf:  mov    0x8(%ebp),%eax
082f215e +0x1ee2:  mov    -0xc(%ebp),%edx
082f2161 +0x1ee5:  mov    %edx,0x4(%eax)
082f2164 +0x1ee8:  mov    -0x18(%ebp),%edx
082f2167 +0x1eeb:  mov    %edx,%eax
082f2169 +0x1eed:  add    %eax,%eax
082f216b +0x1eef:  add    %edx,%eax
082f216d +0x1ef1:  shl    $0x2,%eax
082f2170 +0x1ef4:  mov    %eax,%edx
082f2172 +0x1ef6:  add    -0x10(%ebp),%edx
082f2175 +0x1ef9:  mov    0x8(%ebp),%eax
082f2178 +0x1efc:  mov    %edx,0x8(%eax)
082f217b +0x1eff:  jmp    082f2204 <+0x1f88>
082f2180 +0x1f04:  mov    %eax,(%esp)
082f2183 +0x1f07:  call   08725ce0 <__cxa_begin_catch>
082f2188 +0x1f0c:  cmpl   $0x0,-0xc(%ebp)
082f218c +0x1f10:  jne    082f21b0 <+0x1f34>
082f218e +0x1f12:  mov    -0x14(%ebp),%edx
082f2191 +0x1f15:  mov    %edx,%eax
082f2193 +0x1f17:  add    %eax,%eax
082f2195 +0x1f19:  add    %edx,%eax
082f2197 +0x1f1b:  shl    $0x2,%eax
082f219a +0x1f1e:  mov    %eax,%edx
082f219c +0x1f20:  add    -0x10(%ebp),%edx
082f219f +0x1f23:  mov    0x8(%ebp),%eax
082f21a2 +0x1f26:  mov    %edx,0x4(%esp)
082f21a6 +0x1f2a:  mov    %eax,(%esp)
082f21a9 +0x1f2d:  call   082f2650 <+0x23d4>
082f21ae +0x1f32:  jmp    082f21d1 <+0x1f55>
082f21b0 +0x1f34:  mov    0x8(%ebp),%eax
082f21b3 +0x1f37:  mov    %eax,(%esp)
082f21b6 +0x1f3a:  call   082f2926 <+0x26aa>
082f21bb +0x1f3f:  mov    %eax,0x8(%esp)
082f21bf +0x1f43:  mov    -0xc(%ebp),%eax
082f21c2 +0x1f46:  mov    %eax,0x4(%esp)
082f21c6 +0x1f4a:  mov    -0x10(%ebp),%eax
082f21c9 +0x1f4d:  mov    %eax,(%esp)
082f21cc +0x1f50:  call   082f292e <+0x26b2>
082f21d1 +0x1f55:  mov    0x8(%ebp),%eax
082f21d4 +0x1f58:  mov    -0x18(%ebp),%edx
082f21d7 +0x1f5b:  mov    %edx,0x8(%esp)
082f21db +0x1f5f:  mov    -0x10(%ebp),%edx
082f21de +0x1f62:  mov    %edx,0x4(%esp)
082f21e2 +0x1f66:  mov    %eax,(%esp)
082f21e5 +0x1f69:  call   082f32b6 <+0x303a>
082f21ea +0x1f6e:  call   08724be0 <__cxa_rethrow>
082f21ef +0x1f73:  mov    %edx,%ebx
082f21f1 +0x1f75:  mov    %eax,%esi
082f21f3 +0x1f77:  call   08725c30 <__cxa_end_catch>
082f21f8 +0x1f7c:  mov    %esi,%eax
082f21fa +0x1f7e:  mov    %ebx,%edx
082f21fc +0x1f80:  mov    %eax,(%esp)
082f21ff +0x1f83:  call   08ae3750 <_Unwind_Resume>
082f2204 +0x1f88:  lea    -0x8(%ebp),%esp
082f2207 +0x1f8b:  add    $0x0,%esp
082f220a +0x1f8e:  pop    %ebx
082f220b +0x1f8f:  pop    %esi
082f220c +0x1f90:  pop    %ebp
082f220d +0x1f91:  ret
082f220e +0x1f92:  push   %ebp
082f220f +0x1f93:  mov    %esp,%ebp
082f2211 +0x1f95:  sub    $0x18,%esp
082f2214 +0x1f98:  mov    0xc(%ebp),%eax
082f2217 +0x1f9b:  mov    %eax,0x4(%esp)
082f221b +0x1f9f:  movl   $0x8,(%esp)
082f2222 +0x1fa6:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f2227 +0x1fab:  mov    %eax,%edx
082f2229 +0x1fad:  test   %edx,%edx
082f222b +0x1faf:  je     082f223c <+0x1fc0>
082f222d +0x1fb1:  mov    %eax,%ecx
082f222f +0x1fb3:  mov    0x10(%ebp),%eax
082f2232 +0x1fb6:  mov    0x4(%eax),%edx
082f2235 +0x1fb9:  mov    (%eax),%eax
082f2237 +0x1fbb:  mov    %eax,(%ecx)
082f2239 +0x1fbd:  mov    %edx,0x4(%ecx)
082f223c +0x1fc0:  leave
082f223d +0x1fc1:  ret
082f223e +0x1fc2:  push   %ebp
082f223f +0x1fc3:  mov    %esp,%ebp
082f2241 +0x1fc5:  push   %esi
082f2242 +0x1fc6:  push   %ebx
082f2243 +0x1fc7:  sub    $0x30,%esp
082f2246 +0x1fca:  mov    0x8(%ebp),%eax
082f2249 +0x1fcd:  mov    0x4(%eax),%edx
082f224c +0x1fd0:  mov    0x8(%ebp),%eax
082f224f +0x1fd3:  mov    0x8(%eax),%eax
082f2252 +0x1fd6:  cmp    %eax,%edx
082f2254 +0x1fd8:  je     082f22e9 <+0x206d>
082f225a +0x1fde:  mov    0x8(%ebp),%eax
082f225d +0x1fe1:  mov    0x4(%eax),%eax
082f2260 +0x1fe4:  sub    $0x8,%eax
082f2263 +0x1fe7:  mov    %eax,(%esp)
082f2266 +0x1fea:  call   082f32dd <+0x3061>
082f226b +0x1fef:  mov    0x8(%ebp),%edx
082f226e +0x1ff2:  mov    0x4(%edx),%ecx
082f2271 +0x1ff5:  mov    0x8(%ebp),%edx
082f2274 +0x1ff8:  mov    %eax,0x8(%esp)
082f2278 +0x1ffc:  mov    %ecx,0x4(%esp)
082f227c +0x2000:  mov    %edx,(%esp)
082f227f +0x2003:  call   082f32e6 <+0x306a>
082f2284 +0x2008:  mov    0x8(%ebp),%eax
082f2287 +0x200b:  mov    0x4(%eax),%eax
082f228a +0x200e:  lea    0x8(%eax),%edx
082f228d +0x2011:  mov    0x8(%ebp),%eax
082f2290 +0x2014:  mov    %edx,0x4(%eax)
082f2293 +0x2017:  mov    0x8(%ebp),%eax
082f2296 +0x201a:  mov    0x4(%eax),%eax
082f2299 +0x201d:  lea    -0x8(%eax),%esi
082f229c +0x2020:  mov    0x8(%ebp),%eax
082f229f +0x2023:  mov    0x4(%eax),%eax
082f22a2 +0x2026:  lea    -0x10(%eax),%ebx
082f22a5 +0x2029:  lea    0xc(%ebp),%eax
082f22a8 +0x202c:  mov    %eax,(%esp)
082f22ab +0x202f:  call   082f2506 <+0x228a>
082f22b0 +0x2034:  mov    (%eax),%eax
082f22b2 +0x2036:  mov    %esi,0x8(%esp)
082f22b6 +0x203a:  mov    %ebx,0x4(%esp)
082f22ba +0x203e:  mov    %eax,(%esp)
082f22bd +0x2041:  call   082f3325 <+0x30a9>
082f22c2 +0x2046:  lea    0xc(%ebp),%eax
082f22c5 +0x2049:  mov    %eax,(%esp)
082f22c8 +0x204c:  call   082f17bc <+0x1540>
082f22cd +0x2051:  mov    %eax,%ebx
082f22cf +0x2053:  mov    0x10(%ebp),%eax
082f22d2 +0x2056:  mov    %eax,(%esp)
082f22d5 +0x2059:  call   082f335d <+0x30e1>
082f22da +0x205e:  mov    0x4(%eax),%edx
082f22dd +0x2061:  mov    (%eax),%eax
082f22df +0x2063:  mov    %eax,(%ebx)
082f22e1 +0x2065:  mov    %edx,0x4(%ebx)
082f22e4 +0x2068:  jmp    082f24eb <+0x226f>
082f22e9 +0x206d:  movl   $"vector::_M_insert_aux",0x8(%esp)
082f22f1 +0x2075:  movl   $0x1,0x4(%esp)
082f22f9 +0x207d:  mov    0x8(%ebp),%eax
082f22fc +0x2080:  mov    %eax,(%esp)
082f22ff +0x2083:  call   082f3366 <+0x30ea>
082f2304 +0x2088:  mov    %eax,-0x18(%ebp)
082f2307 +0x208b:  lea    -0x1c(%ebp),%eax
082f230a +0x208e:  mov    0x8(%ebp),%edx
082f230d +0x2091:  mov    %edx,0x4(%esp)
082f2311 +0x2095:  mov    %eax,(%esp)
082f2314 +0x2098:  call   082f1730 <+0x14b4>
082f2319 +0x209d:  sub    $0x4,%esp
082f231c +0x20a0:  lea    -0x1c(%ebp),%eax
082f231f +0x20a3:  mov    %eax,0x4(%esp)
082f2323 +0x20a7:  lea    0xc(%ebp),%eax
082f2326 +0x20aa:  mov    %eax,(%esp)
082f2329 +0x20ad:  call   082f340b <+0x318f>
082f232e +0x20b2:  mov    %eax,-0x14(%ebp)
082f2331 +0x20b5:  mov    0x8(%ebp),%eax
082f2334 +0x20b8:  mov    -0x18(%ebp),%edx
082f2337 +0x20bb:  mov    %edx,0x4(%esp)
082f233b +0x20bf:  mov    %eax,(%esp)
082f233e +0x20c2:  call   082f343e <+0x31c2>
082f2343 +0x20c7:  mov    %eax,-0x10(%ebp)
082f2346 +0x20ca:  mov    -0x10(%ebp),%eax
082f2349 +0x20cd:  mov    %eax,-0xc(%ebp)
082f234c +0x20d0:  mov    0x10(%ebp),%eax
082f234f +0x20d3:  mov    %eax,(%esp)
082f2352 +0x20d6:  call   082f335d <+0x30e1>
082f2357 +0x20db:  mov    -0x14(%ebp),%edx
082f235a +0x20de:  shl    $0x3,%edx
082f235d +0x20e1:  mov    %edx,%ecx
082f235f +0x20e3:  add    -0x10(%ebp),%ecx
082f2362 +0x20e6:  mov    0x8(%ebp),%edx
082f2365 +0x20e9:  mov    %eax,0x8(%esp)
082f2369 +0x20ed:  mov    %ecx,0x4(%esp)
082f236d +0x20f1:  mov    %edx,(%esp)
082f2370 +0x20f4:  call   082f220e <+0x1f92>
082f2375 +0x20f9:  movl   $0x0,-0xc(%ebp)
082f237c +0x2100:  mov    0x8(%ebp),%eax
082f237f +0x2103:  mov    %eax,(%esp)
082f2382 +0x2106:  call   082f29d8 <+0x275c>
082f2387 +0x210b:  mov    %eax,%ebx
082f2389 +0x210d:  lea    0xc(%ebp),%eax
082f238c +0x2110:  mov    %eax,(%esp)
082f238f +0x2113:  call   082f2506 <+0x228a>
082f2394 +0x2118:  mov    (%eax),%edx
082f2396 +0x211a:  mov    0x8(%ebp),%eax
082f2399 +0x211d:  mov    (%eax),%eax
082f239b +0x211f:  mov    %ebx,0xc(%esp)
082f239f +0x2123:  mov    -0x10(%ebp),%ecx
082f23a2 +0x2126:  mov    %ecx,0x8(%esp)
082f23a6 +0x212a:  mov    %edx,0x4(%esp)
082f23aa +0x212e:  mov    %eax,(%esp)
082f23ad +0x2131:  call   082f346d <+0x31f1>
082f23b2 +0x2136:  mov    %eax,-0xc(%ebp)
082f23b5 +0x2139:  addl   $0x8,-0xc(%ebp)
082f23b9 +0x213d:  mov    0x8(%ebp),%eax
082f23bc +0x2140:  mov    %eax,(%esp)
082f23bf +0x2143:  call   082f29d8 <+0x275c>
082f23c4 +0x2148:  mov    %eax,%ebx
082f23c6 +0x214a:  mov    0x8(%ebp),%eax
082f23c9 +0x214d:  mov    0x4(%eax),%esi
082f23cc +0x2150:  lea    0xc(%ebp),%eax
082f23cf +0x2153:  mov    %eax,(%esp)
082f23d2 +0x2156:  call   082f2506 <+0x228a>
082f23d7 +0x215b:  mov    (%eax),%eax
082f23d9 +0x215d:  mov    %ebx,0xc(%esp)
082f23dd +0x2161:  mov    -0xc(%ebp),%edx
082f23e0 +0x2164:  mov    %edx,0x8(%esp)
082f23e4 +0x2168:  mov    %esi,0x4(%esp)
082f23e8 +0x216c:  mov    %eax,(%esp)
082f23eb +0x216f:  call   082f346d <+0x31f1>
082f23f0 +0x2174:  mov    %eax,-0xc(%ebp)
082f23f3 +0x2177:  mov    0x8(%ebp),%eax
082f23f6 +0x217a:  mov    %eax,(%esp)
082f23f9 +0x217d:  call   082f29d8 <+0x275c>
082f23fe +0x2182:  mov    0x8(%ebp),%edx
082f2401 +0x2185:  mov    0x4(%edx),%ecx
082f2404 +0x2188:  mov    0x8(%ebp),%edx
082f2407 +0x218b:  mov    (%edx),%edx
082f2409 +0x218d:  mov    %eax,0x8(%esp)
082f240d +0x2191:  mov    %ecx,0x4(%esp)
082f2411 +0x2195:  mov    %edx,(%esp)
082f2414 +0x2198:  call   082f29e0 <+0x2764>
082f2419 +0x219d:  mov    0x8(%ebp),%eax
082f241c +0x21a0:  mov    0x8(%eax),%eax
082f241f +0x21a3:  mov    %eax,%edx
082f2421 +0x21a5:  mov    0x8(%ebp),%eax
082f2424 +0x21a8:  mov    (%eax),%eax
082f2426 +0x21aa:  mov    %edx,%ecx
082f2428 +0x21ac:  sub    %eax,%ecx
082f242a +0x21ae:  mov    %ecx,%eax
082f242c +0x21b0:  sar    $0x3,%eax
082f242f +0x21b3:  mov    %eax,%ecx
082f2431 +0x21b5:  mov    0x8(%ebp),%eax
082f2434 +0x21b8:  mov    (%eax),%edx
082f2436 +0x21ba:  mov    0x8(%ebp),%eax
082f2439 +0x21bd:  mov    %ecx,0x8(%esp)
082f243d +0x21c1:  mov    %edx,0x4(%esp)
082f2441 +0x21c5:  mov    %eax,(%esp)
082f2444 +0x21c8:  call   082f34da <+0x325e>
082f2449 +0x21cd:  mov    0x8(%ebp),%eax
082f244c +0x21d0:  mov    -0x10(%ebp),%edx
082f244f +0x21d3:  mov    %edx,(%eax)
082f2451 +0x21d5:  mov    0x8(%ebp),%eax
082f2454 +0x21d8:  mov    -0xc(%ebp),%edx
082f2457 +0x21db:  mov    %edx,0x4(%eax)
082f245a +0x21de:  mov    -0x18(%ebp),%eax
082f245d +0x21e1:  shl    $0x3,%eax
082f2460 +0x21e4:  mov    %eax,%edx
082f2462 +0x21e6:  add    -0x10(%ebp),%edx
082f2465 +0x21e9:  mov    0x8(%ebp),%eax
082f2468 +0x21ec:  mov    %edx,0x8(%eax)
082f246b +0x21ef:  jmp    082f24eb <+0x226f>
082f246d +0x21f1:  mov    %eax,(%esp)
082f2470 +0x21f4:  call   08725ce0 <__cxa_begin_catch>
082f2475 +0x21f9:  cmpl   $0x0,-0xc(%ebp)
082f2479 +0x21fd:  jne    082f2497 <+0x221b>
082f247b +0x21ff:  mov    -0x14(%ebp),%eax
082f247e +0x2202:  shl    $0x3,%eax
082f2481 +0x2205:  mov    %eax,%edx
082f2483 +0x2207:  add    -0x10(%ebp),%edx
082f2486 +0x220a:  mov    0x8(%ebp),%eax
082f2489 +0x220d:  mov    %edx,0x4(%esp)
082f248d +0x2211:  mov    %eax,(%esp)
082f2490 +0x2214:  call   082f34c6 <+0x324a>
082f2495 +0x2219:  jmp    082f24b8 <+0x223c>
082f2497 +0x221b:  mov    0x8(%ebp),%eax
082f249a +0x221e:  mov    %eax,(%esp)
082f249d +0x2221:  call   082f29d8 <+0x275c>
082f24a2 +0x2226:  mov    %eax,0x8(%esp)
082f24a6 +0x222a:  mov    -0xc(%ebp),%eax
082f24a9 +0x222d:  mov    %eax,0x4(%esp)
082f24ad +0x2231:  mov    -0x10(%ebp),%eax
082f24b0 +0x2234:  mov    %eax,(%esp)
082f24b3 +0x2237:  call   082f29e0 <+0x2764>
082f24b8 +0x223c:  mov    0x8(%ebp),%eax
082f24bb +0x223f:  mov    -0x18(%ebp),%edx
082f24be +0x2242:  mov    %edx,0x8(%esp)
082f24c2 +0x2246:  mov    -0x10(%ebp),%edx
082f24c5 +0x2249:  mov    %edx,0x4(%esp)
082f24c9 +0x224d:  mov    %eax,(%esp)
082f24cc +0x2250:  call   082f34da <+0x325e>
082f24d1 +0x2255:  call   08724be0 <__cxa_rethrow>
082f24d6 +0x225a:  mov    %edx,%ebx
082f24d8 +0x225c:  mov    %eax,%esi
082f24da +0x225e:  call   08725c30 <__cxa_end_catch>
082f24df +0x2263:  mov    %esi,%eax
082f24e1 +0x2265:  mov    %ebx,%edx
082f24e3 +0x2267:  mov    %eax,(%esp)
082f24e6 +0x226a:  call   08ae3750 <_Unwind_Resume>
082f24eb +0x226f:  lea    -0x8(%ebp),%esp
082f24ee +0x2272:  add    $0x0,%esp
082f24f1 +0x2275:  pop    %ebx
082f24f2 +0x2276:  pop    %esi
082f24f3 +0x2277:  pop    %ebp
082f24f4 +0x2278:  ret
082f24f5 +0x2279:  nop
082f24f6 +0x227a:  push   %ebp
082f24f7 +0x227b:  mov    %esp,%ebp
082f24f9 +0x227d:  mov    0xc(%ebp),%eax
082f24fc +0x2280:  mov    (%eax),%edx
082f24fe +0x2282:  mov    0x8(%ebp),%eax
082f2501 +0x2285:  mov    %edx,(%eax)
082f2503 +0x2287:  pop    %ebp
082f2504 +0x2288:  ret
082f2505 +0x2289:  nop
082f2506 +0x228a:  push   %ebp
082f2507 +0x228b:  mov    %esp,%ebp
082f2509 +0x228d:  mov    0x8(%ebp),%eax
082f250c +0x2290:  pop    %ebp
082f250d +0x2291:  ret
082f250e +0x2292:  push   %ebp
082f250f +0x2293:  mov    %esp,%ebp
082f2511 +0x2295:  sub    $0x18,%esp
082f2514 +0x2298:  mov    0x8(%ebp),%eax
082f2517 +0x229b:  mov    %eax,(%esp)
082f251a +0x229e:  call   082f17c6 <+0x154a>
082f251f +0x22a3:  cmp    0xc(%ebp),%eax
082f2522 +0x22a6:  setbe  %al
082f2525 +0x22a9:  test   %al,%al
082f2527 +0x22ab:  je     082f2535 <+0x22b9>
082f2529 +0x22ad:  movl   $"vector::_M_range_check",(%esp)
082f2530 +0x22b4:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
082f2535 +0x22b9:  leave
082f2536 +0x22ba:  ret
082f2537 +0x22bb:  nop
082f2538 +0x22bc:  push   %ebp
082f2539 +0x22bd:  mov    %esp,%ebp
082f253b +0x22bf:  push   %ebx
082f253c +0x22c0:  mov    0x8(%ebp),%eax
082f253f +0x22c3:  mov    (%eax),%edx
082f2541 +0x22c5:  mov    0xc(%ebp),%eax
082f2544 +0x22c8:  shl    $0x2,%eax
082f2547 +0x22cb:  lea    0x0(,%eax,8),%ecx
082f254e +0x22d2:  mov    %ecx,%ebx
082f2550 +0x22d4:  sub    %eax,%ebx
082f2552 +0x22d6:  mov    %ebx,%eax
082f2554 +0x22d8:  lea    (%edx,%eax,1),%eax
082f2557 +0x22db:  pop    %ebx
082f2558 +0x22dc:  pop    %ebp
082f2559 +0x22dd:  ret
082f255a +0x22de:  push   %ebp
082f255b +0x22df:  mov    %esp,%ebp
082f255d +0x22e1:  sub    $0x18,%esp
082f2560 +0x22e4:  mov    0x8(%ebp),%eax
082f2563 +0x22e7:  mov    %eax,(%esp)
082f2566 +0x22ea:  call   082f1814 <+0x1598>
082f256b +0x22ef:  cmp    0xc(%ebp),%eax
082f256e +0x22f2:  setbe  %al
082f2571 +0x22f5:  test   %al,%al
082f2573 +0x22f7:  je     082f2581 <+0x2305>
082f2575 +0x22f9:  movl   $"vector::_M_range_check",(%esp)
082f257c +0x2300:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
082f2581 +0x2305:  leave
082f2582 +0x2306:  ret
082f2583 +0x2307:  nop
082f2584 +0x2308:  push   %ebp
082f2585 +0x2309:  mov    %esp,%ebp
082f2587 +0x230b:  mov    0x8(%ebp),%eax
082f258a +0x230e:  mov    (%eax),%eax
082f258c +0x2310:  mov    0xc(%ebp),%edx
082f258f +0x2313:  shl    $0x3,%edx
082f2592 +0x2316:  add    %edx,%eax
082f2594 +0x2318:  pop    %ebp
082f2595 +0x2319:  ret
082f2596 +0x231a:  push   %ebp
082f2597 +0x231b:  mov    %esp,%ebp
082f2599 +0x231d:  mov    0xc(%ebp),%eax
082f259c +0x2320:  mov    (%eax),%edx
082f259e +0x2322:  mov    0x8(%ebp),%eax
082f25a1 +0x2325:  mov    %edx,(%eax)
082f25a3 +0x2327:  pop    %ebp
082f25a4 +0x2328:  ret
082f25a5 +0x2329:  nop
082f25a6 +0x232a:  push   %ebp
082f25a7 +0x232b:  mov    %esp,%ebp
082f25a9 +0x232d:  mov    0x8(%ebp),%eax
082f25ac +0x2330:  pop    %ebp
082f25ad +0x2331:  ret
082f25ae +0x2332:  push   %ebp
082f25af +0x2333:  mov    %esp,%ebp
082f25b1 +0x2335:  push   %ebx
082f25b2 +0x2336:  sub    $0x24,%esp
082f25b5 +0x2339:  mov    0x8(%ebp),%ebx
082f25b8 +0x233c:  mov    0xc(%ebp),%eax
082f25bb +0x233f:  mov    (%eax),%ecx
082f25bd +0x2341:  mov    0x10(%ebp),%eax
082f25c0 +0x2344:  mov    (%eax),%eax
082f25c2 +0x2346:  mov    %eax,%edx
082f25c4 +0x2348:  mov    %edx,%eax
082f25c6 +0x234a:  add    %eax,%eax
082f25c8 +0x234c:  add    %edx,%eax
082f25ca +0x234e:  shl    $0x2,%eax
082f25cd +0x2351:  lea    (%ecx,%eax,1),%eax
082f25d0 +0x2354:  mov    %eax,-0xc(%ebp)
082f25d3 +0x2357:  lea    -0xc(%ebp),%eax
082f25d6 +0x235a:  mov    %eax,0x4(%esp)
082f25da +0x235e:  mov    %ebx,(%esp)
082f25dd +0x2361:  call   082f2596 <+0x231a>
082f25e2 +0x2366:  mov    %ebx,%eax
082f25e4 +0x2368:  add    $0x24,%esp
082f25e7 +0x236b:  pop    %ebx
082f25e8 +0x236c:  pop    %ebp
082f25e9 +0x236d:  ret    $0x4
082f25ec +0x2370:  push   %ebp
082f25ed +0x2371:  mov    %esp,%ebp
082f25ef +0x2373:  push   %ebx
082f25f0 +0x2374:  sub    $0x24,%esp
082f25f3 +0x2377:  mov    0x8(%ebp),%ebx
082f25f6 +0x237a:  lea    -0x10(%ebp),%eax
082f25f9 +0x237d:  mov    0x10(%ebp),%edx
082f25fc +0x2380:  mov    %edx,0x4(%esp)
082f2600 +0x2384:  mov    %eax,(%esp)
082f2603 +0x2387:  call   082f3501 <+0x3285>
082f2608 +0x238c:  sub    $0x4,%esp
082f260b +0x238f:  lea    -0xc(%ebp),%eax
082f260e +0x2392:  mov    0xc(%ebp),%edx
082f2611 +0x2395:  mov    %edx,0x4(%esp)
082f2615 +0x2399:  mov    %eax,(%esp)
082f2618 +0x239c:  call   082f3501 <+0x3285>
082f261d +0x23a1:  sub    $0x4,%esp
082f2620 +0x23a4:  mov    0x14(%ebp),%eax
082f2623 +0x23a7:  mov    %eax,0xc(%esp)
082f2627 +0x23ab:  mov    -0x10(%ebp),%eax
082f262a +0x23ae:  mov    %eax,0x8(%esp)
082f262e +0x23b2:  mov    -0xc(%ebp),%eax
082f2631 +0x23b5:  mov    %eax,0x4(%esp)
082f2635 +0x23b9:  mov    %ebx,(%esp)
082f2638 +0x23bc:  call   082f3510 <+0x3294>
082f263d +0x23c1:  sub    $0x4,%esp
082f2640 +0x23c4:  mov    %ebx,%eax
082f2642 +0x23c6:  mov    -0x4(%ebp),%ebx
082f2645 +0x23c9:  leave
082f2646 +0x23ca:  ret    $0x4
082f2649 +0x23cd:  nop
082f264a +0x23ce:  push   %ebp
082f264b +0x23cf:  mov    %esp,%ebp
082f264d +0x23d1:  pop    %ebp
082f264e +0x23d2:  ret
082f264f +0x23d3:  nop
082f2650 +0x23d4:  push   %ebp
082f2651 +0x23d5:  mov    %esp,%ebp
082f2653 +0x23d7:  sub    $0x18,%esp
082f2656 +0x23da:  mov    0xc(%ebp),%eax
082f2659 +0x23dd:  mov    %eax,(%esp)
082f265c +0x23e0:  call   082f264a <+0x23ce>
082f2661 +0x23e5:  leave
082f2662 +0x23e6:  ret
082f2663 +0x23e7:  push   %ebp
082f2664 +0x23e8:  mov    %esp,%ebp
082f2666 +0x23ea:  push   %ebx
082f2667 +0x23eb:  sub    $0x14,%esp
082f266a +0x23ee:  mov    0x8(%ebp),%eax
082f266d +0x23f1:  mov    %eax,(%esp)
082f2670 +0x23f4:  call   082f25a6 <+0x232a>
082f2675 +0x23f9:  mov    (%eax),%eax
082f2677 +0x23fb:  mov    %eax,%ebx
082f2679 +0x23fd:  mov    0xc(%ebp),%eax
082f267c +0x2400:  mov    %eax,(%esp)
082f267f +0x2403:  call   082f25a6 <+0x232a>
082f2684 +0x2408:  mov    (%eax),%eax
082f2686 +0x240a:  mov    %ebx,%edx
082f2688 +0x240c:  sub    %eax,%edx
082f268a +0x240e:  mov    %edx,%eax
082f268c +0x2410:  sar    $0x2,%eax
082f268f +0x2413:  imul   $0xaaaaaaab,%eax,%eax
082f2695 +0x2419:  add    $0x14,%esp
082f2698 +0x241c:  pop    %ebx
082f2699 +0x241d:  pop    %ebp
082f269a +0x241e:  ret
082f269b +0x241f:  push   %ebp
082f269c +0x2420:  mov    %esp,%ebp
082f269e +0x2422:  push   %esi
082f269f +0x2423:  push   %ebx
082f26a0 +0x2424:  sub    $0x40,%esp
082f26a3 +0x2427:  jmp    082f27c4 <+0x2548>
082f26a8 +0x242c:  cmpl   $0x0,0x10(%ebp)
082f26ac +0x2430:  jne    082f26cc <+0x2450>
082f26ae +0x2432:  mov    0xc(%ebp),%eax
082f26b1 +0x2435:  mov    %eax,0x8(%esp)
082f26b5 +0x2439:  mov    0xc(%ebp),%eax
082f26b8 +0x243c:  mov    %eax,0x4(%esp)
082f26bc +0x2440:  mov    0x8(%ebp),%eax
082f26bf +0x2443:  mov    %eax,(%esp)
082f26c2 +0x2446:  call   082f356f <+0x32f3>
082f26c7 +0x244b:  jmp    082f27e4 <+0x2568>
082f26cc +0x2450:  subl   $0x1,0x10(%ebp)
082f26d0 +0x2454:  movl   $0x1,-0x14(%ebp)
082f26d7 +0x245b:  lea    -0x18(%ebp),%eax
082f26da +0x245e:  lea    -0x14(%ebp),%edx
082f26dd +0x2461:  mov    %edx,0x8(%esp)
082f26e1 +0x2465:  lea    0xc(%ebp),%edx
082f26e4 +0x2468:  mov    %edx,0x4(%esp)
082f26e8 +0x246c:  mov    %eax,(%esp)
082f26eb +0x246f:  call   082f35a2 <+0x3326>
082f26f0 +0x2474:  sub    $0x4,%esp
082f26f3 +0x2477:  lea    -0x18(%ebp),%eax
082f26f6 +0x247a:  mov    %eax,(%esp)
082f26f9 +0x247d:  call   082f18d2 <+0x1656>
082f26fe +0x2482:  mov    %eax,%esi
082f2700 +0x2484:  lea    0x8(%ebp),%eax
082f2703 +0x2487:  mov    %eax,0x4(%esp)
082f2707 +0x248b:  lea    0xc(%ebp),%eax
082f270a +0x248e:  mov    %eax,(%esp)
082f270d +0x2491:  call   082f2663 <+0x23e7>
082f2712 +0x2496:  mov    %eax,%edx
082f2714 +0x2498:  shr    $0x1f,%edx
082f2717 +0x249b:  lea    (%edx,%eax,1),%eax
082f271a +0x249e:  sar    %eax
082f271c +0x24a0:  mov    %eax,-0xc(%ebp)
082f271f +0x24a3:  lea    -0x10(%ebp),%eax
082f2722 +0x24a6:  lea    -0xc(%ebp),%edx
082f2725 +0x24a9:  mov    %edx,0x8(%esp)
082f2729 +0x24ad:  lea    0x8(%ebp),%edx
082f272c +0x24b0:  mov    %edx,0x4(%esp)
082f2730 +0x24b4:  mov    %eax,(%esp)
082f2733 +0x24b7:  call   082f25ae <+0x2332>
082f2738 +0x24bc:  sub    $0x4,%esp
082f273b +0x24bf:  lea    -0x10(%ebp),%eax
082f273e +0x24c2:  mov    %eax,(%esp)
082f2741 +0x24c5:  call   082f18d2 <+0x1656>
082f2746 +0x24ca:  mov    %eax,%ebx
082f2748 +0x24cc:  lea    0x8(%ebp),%eax
082f274b +0x24cf:  mov    %eax,(%esp)
082f274e +0x24d2:  call   082f18d2 <+0x1656>
082f2753 +0x24d7:  mov    %esi,0x8(%esp)
082f2757 +0x24db:  mov    %ebx,0x4(%esp)
082f275b +0x24df:  mov    %eax,(%esp)
082f275e +0x24e2:  call   082f35e2 <+0x3366>
082f2763 +0x24e7:  mov    (%eax),%edx
082f2765 +0x24e9:  mov    %edx,-0x24(%ebp)
082f2768 +0x24ec:  mov    0x4(%eax),%edx
082f276b +0x24ef:  mov    %edx,-0x20(%ebp)
082f276e +0x24f2:  mov    0x8(%eax),%eax
082f2771 +0x24f5:  mov    %eax,-0x1c(%ebp)
082f2774 +0x24f8:  lea    -0x28(%ebp),%eax
082f2777 +0x24fb:  mov    -0x24(%ebp),%edx
082f277a +0x24fe:  mov    %edx,0xc(%esp)
082f277e +0x2502:  mov    -0x20(%ebp),%edx
082f2781 +0x2505:  mov    %edx,0x10(%esp)
082f2785 +0x2509:  mov    -0x1c(%ebp),%edx
082f2788 +0x250c:  mov    %edx,0x14(%esp)
082f278c +0x2510:  mov    0xc(%ebp),%edx
082f278f +0x2513:  mov    %edx,0x8(%esp)
082f2793 +0x2517:  mov    0x8(%ebp),%edx
082f2796 +0x251a:  mov    %edx,0x4(%esp)
082f279a +0x251e:  mov    %eax,(%esp)
082f279d +0x2521:  call   082f3674 <+0x33f8>
082f27a2 +0x2526:  sub    $0x4,%esp
082f27a5 +0x2529:  mov    0x10(%ebp),%eax
082f27a8 +0x252c:  mov    %eax,0x8(%esp)
082f27ac +0x2530:  mov    0xc(%ebp),%eax
082f27af +0x2533:  mov    %eax,0x4(%esp)
082f27b3 +0x2537:  mov    -0x28(%ebp),%eax
082f27b6 +0x253a:  mov    %eax,(%esp)
082f27b9 +0x253d:  call   082f269b <+0x241f>
082f27be +0x2542:  mov    -0x28(%ebp),%eax
082f27c1 +0x2545:  mov    %eax,0xc(%ebp)
082f27c4 +0x2548:  lea    0x8(%ebp),%edx
082f27c7 +0x254b:  mov    %edx,0x4(%esp)
082f27cb +0x254f:  lea    0xc(%ebp),%eax
082f27ce +0x2552:  mov    %eax,(%esp)
082f27d1 +0x2555:  call   082f2663 <+0x23e7>
082f27d6 +0x255a:  cmp    $0x10,%eax
082f27d9 +0x255d:  setg   %al
082f27dc +0x2560:  test   %al,%al
082f27de +0x2562:  jne    082f26a8 <+0x242c>
082f27e4 +0x2568:  lea    -0x8(%ebp),%esp
082f27e7 +0x256b:  add    $0x0,%esp
082f27ea +0x256e:  pop    %ebx
082f27eb +0x256f:  pop    %esi
082f27ec +0x2570:  pop    %ebp
082f27ed +0x2571:  ret
082f27ee +0x2572:  push   %ebp
082f27ef +0x2573:  mov    %esp,%ebp
082f27f1 +0x2575:  sub    $0x28,%esp
082f27f4 +0x2578:  lea    0x8(%ebp),%eax
082f27f7 +0x257b:  mov    %eax,0x4(%esp)
082f27fb +0x257f:  lea    0xc(%ebp),%eax
082f27fe +0x2582:  mov    %eax,(%esp)
082f2801 +0x2585:  call   082f2663 <+0x23e7>
082f2806 +0x258a:  cmp    $0x10,%eax
082f2809 +0x258d:  setg   %al
082f280c +0x2590:  test   %al,%al
082f280e +0x2592:  je     082f287c <+0x2600>
082f2810 +0x2594:  movl   $0x10,-0x14(%ebp)
082f2817 +0x259b:  lea    -0x18(%ebp),%eax
082f281a +0x259e:  lea    -0x14(%ebp),%edx
082f281d +0x25a1:  mov    %edx,0x8(%esp)
082f2821 +0x25a5:  lea    0x8(%ebp),%edx
082f2824 +0x25a8:  mov    %edx,0x4(%esp)
082f2828 +0x25ac:  mov    %eax,(%esp)
082f282b +0x25af:  call   082f25ae <+0x2332>
082f2830 +0x25b4:  sub    $0x4,%esp
082f2833 +0x25b7:  mov    -0x18(%ebp),%eax
082f2836 +0x25ba:  mov    %eax,0x4(%esp)
082f283a +0x25be:  mov    0x8(%ebp),%eax
082f283d +0x25c1:  mov    %eax,(%esp)
082f2840 +0x25c4:  call   082f372a <+0x34ae>
082f2845 +0x25c9:  movl   $0x10,-0xc(%ebp)
082f284c +0x25d0:  lea    -0x10(%ebp),%eax
082f284f +0x25d3:  lea    -0xc(%ebp),%edx
082f2852 +0x25d6:  mov    %edx,0x8(%esp)
082f2856 +0x25da:  lea    0x8(%ebp),%edx
082f2859 +0x25dd:  mov    %edx,0x4(%esp)
082f285d +0x25e1:  mov    %eax,(%esp)
082f2860 +0x25e4:  call   082f25ae <+0x2332>
082f2865 +0x25e9:  sub    $0x4,%esp
082f2868 +0x25ec:  mov    0xc(%ebp),%eax
082f286b +0x25ef:  mov    %eax,0x4(%esp)
082f286f +0x25f3:  mov    -0x10(%ebp),%eax
082f2872 +0x25f6:  mov    %eax,(%esp)
082f2875 +0x25f9:  call   082f385a <+0x35de>
082f287a +0x25fe:  jmp    082f288e <+0x2612>
082f287c +0x2600:  mov    0xc(%ebp),%eax
082f287f +0x2603:  mov    %eax,0x4(%esp)
082f2883 +0x2607:  mov    0x8(%ebp),%eax
082f2886 +0x260a:  mov    %eax,(%esp)
082f2889 +0x260d:  call   082f372a <+0x34ae>
082f288e +0x2612:  leave
082f288f +0x2613:  ret
082f2890 +0x2614:  push   %ebp
082f2891 +0x2615:  mov    %esp,%ebp
082f2893 +0x2617:  sub    $0x18,%esp
082f2896 +0x261a:  mov    0x8(%ebp),%eax
082f2899 +0x261d:  mov    %eax,(%esp)
082f289c +0x2620:  call   082f38f8 <+0x367c>
082f28a1 +0x2625:  leave
082f28a2 +0x2626:  ret
082f28a3 +0x2627:  nop
082f28a4 +0x2628:  push   %ebp
082f28a5 +0x2629:  mov    %esp,%ebp
082f28a7 +0x262b:  sub    $0x18,%esp
082f28aa +0x262e:  mov    0x8(%ebp),%eax
082f28ad +0x2631:  mov    %eax,(%esp)
082f28b0 +0x2634:  call   082f38c8 <+0x364c>
082f28b5 +0x2639:  leave
082f28b6 +0x263a:  ret
082f28b7 +0x263b:  nop
082f28b8 +0x263c:  push   %ebp
082f28b9 +0x263d:  mov    %esp,%ebp
082f28bb +0x263f:  push   %esi
082f28bc +0x2640:  push   %ebx
082f28bd +0x2641:  sub    $0x10,%esp
082f28c0 +0x2644:  mov    0x8(%ebp),%eax
082f28c3 +0x2647:  mov    0x8(%eax),%eax
082f28c6 +0x264a:  mov    %eax,%edx
082f28c8 +0x264c:  mov    0x8(%ebp),%eax
082f28cb +0x264f:  mov    (%eax),%eax
082f28cd +0x2651:  mov    %edx,%ecx
082f28cf +0x2653:  sub    %eax,%ecx
082f28d1 +0x2655:  mov    %ecx,%eax
082f28d3 +0x2657:  sar    $0x2,%eax
082f28d6 +0x265a:  imul   $0xaaaaaaab,%eax,%eax
082f28dc +0x2660:  mov    %eax,%edx
082f28de +0x2662:  mov    0x8(%ebp),%eax
082f28e1 +0x2665:  mov    (%eax),%eax
082f28e3 +0x2667:  mov    %edx,0x8(%esp)
082f28e7 +0x266b:  mov    %eax,0x4(%esp)
082f28eb +0x266f:  mov    0x8(%ebp),%eax
082f28ee +0x2672:  mov    %eax,(%esp)
082f28f1 +0x2675:  call   082f32b6 <+0x303a>
082f28f6 +0x267a:  jmp    082f2913 <+0x2697>
082f28f8 +0x267c:  mov    %edx,%ebx
082f28fa +0x267e:  mov    %eax,%esi
082f28fc +0x2680:  mov    0x8(%ebp),%eax
082f28ff +0x2683:  mov    %eax,(%esp)
082f2902 +0x2686:  call   082f2890 <+0x2614>
082f2907 +0x268b:  mov    %esi,%eax
082f2909 +0x268d:  mov    %ebx,%edx
082f290b +0x268f:  mov    %eax,(%esp)
082f290e +0x2692:  call   08ae3750 <_Unwind_Resume>
082f2913 +0x2697:  mov    0x8(%ebp),%eax
082f2916 +0x269a:  mov    %eax,(%esp)
082f2919 +0x269d:  call   082f2890 <+0x2614>
082f291e +0x26a2:  add    $0x10,%esp
082f2921 +0x26a5:  pop    %ebx
082f2922 +0x26a6:  pop    %esi
082f2923 +0x26a7:  pop    %ebp
082f2924 +0x26a8:  ret
082f2925 +0x26a9:  nop
082f2926 +0x26aa:  push   %ebp
082f2927 +0x26ab:  mov    %esp,%ebp
082f2929 +0x26ad:  mov    0x8(%ebp),%eax
082f292c +0x26b0:  pop    %ebp
082f292d +0x26b1:  ret
082f292e +0x26b2:  push   %ebp
082f292f +0x26b3:  mov    %esp,%ebp
082f2931 +0x26b5:  sub    $0x18,%esp
082f2934 +0x26b8:  mov    0xc(%ebp),%eax
082f2937 +0x26bb:  mov    %eax,0x4(%esp)
082f293b +0x26bf:  mov    0x8(%ebp),%eax
082f293e +0x26c2:  mov    %eax,(%esp)
082f2941 +0x26c5:  call   082f390b <+0x368f>
082f2946 +0x26ca:  leave
082f2947 +0x26cb:  ret
082f2948 +0x26cc:  push   %ebp
082f2949 +0x26cd:  mov    %esp,%ebp
082f294b +0x26cf:  sub    $0x18,%esp
082f294e +0x26d2:  mov    0x8(%ebp),%eax
082f2951 +0x26d5:  mov    %eax,(%esp)
082f2954 +0x26d8:  call   082f3956 <+0x36da>
082f2959 +0x26dd:  leave
082f295a +0x26de:  ret
082f295b +0x26df:  nop
082f295c +0x26e0:  push   %ebp
082f295d +0x26e1:  mov    %esp,%ebp
082f295f +0x26e3:  sub    $0x18,%esp
082f2962 +0x26e6:  mov    0x8(%ebp),%eax
082f2965 +0x26e9:  mov    %eax,(%esp)
082f2968 +0x26ec:  call   082f3926 <+0x36aa>
082f296d +0x26f1:  leave
082f296e +0x26f2:  ret
082f296f +0x26f3:  nop
082f2970 +0x26f4:  push   %ebp
082f2971 +0x26f5:  mov    %esp,%ebp
082f2973 +0x26f7:  push   %esi
082f2974 +0x26f8:  push   %ebx
082f2975 +0x26f9:  sub    $0x10,%esp
082f2978 +0x26fc:  mov    0x8(%ebp),%eax
082f297b +0x26ff:  mov    0x8(%eax),%eax
082f297e +0x2702:  mov    %eax,%edx
082f2980 +0x2704:  mov    0x8(%ebp),%eax
082f2983 +0x2707:  mov    (%eax),%eax
082f2985 +0x2709:  mov    %edx,%ecx
082f2987 +0x270b:  sub    %eax,%ecx
082f2989 +0x270d:  mov    %ecx,%eax
082f298b +0x270f:  sar    $0x3,%eax
082f298e +0x2712:  mov    %eax,%edx
082f2990 +0x2714:  mov    0x8(%ebp),%eax
082f2993 +0x2717:  mov    (%eax),%eax
082f2995 +0x2719:  mov    %edx,0x8(%esp)
082f2999 +0x271d:  mov    %eax,0x4(%esp)
082f299d +0x2721:  mov    0x8(%ebp),%eax
082f29a0 +0x2724:  mov    %eax,(%esp)
082f29a3 +0x2727:  call   082f34da <+0x325e>
082f29a8 +0x272c:  jmp    082f29c5 <+0x2749>
082f29aa +0x272e:  mov    %edx,%ebx
082f29ac +0x2730:  mov    %eax,%esi
082f29ae +0x2732:  mov    0x8(%ebp),%eax
082f29b1 +0x2735:  mov    %eax,(%esp)
082f29b4 +0x2738:  call   082f2948 <+0x26cc>
082f29b9 +0x273d:  mov    %esi,%eax
082f29bb +0x273f:  mov    %ebx,%edx
082f29bd +0x2741:  mov    %eax,(%esp)
082f29c0 +0x2744:  call   08ae3750 <_Unwind_Resume>
082f29c5 +0x2749:  mov    0x8(%ebp),%eax
082f29c8 +0x274c:  mov    %eax,(%esp)
082f29cb +0x274f:  call   082f2948 <+0x26cc>
082f29d0 +0x2754:  add    $0x10,%esp
082f29d3 +0x2757:  pop    %ebx
082f29d4 +0x2758:  pop    %esi
082f29d5 +0x2759:  pop    %ebp
082f29d6 +0x275a:  ret
082f29d7 +0x275b:  nop
082f29d8 +0x275c:  push   %ebp
082f29d9 +0x275d:  mov    %esp,%ebp
082f29db +0x275f:  mov    0x8(%ebp),%eax
082f29de +0x2762:  pop    %ebp
082f29df +0x2763:  ret
082f29e0 +0x2764:  push   %ebp
082f29e1 +0x2765:  mov    %esp,%ebp
082f29e3 +0x2767:  sub    $0x18,%esp
082f29e6 +0x276a:  mov    0xc(%ebp),%eax
082f29e9 +0x276d:  mov    %eax,0x4(%esp)
082f29ed +0x2771:  mov    0x8(%ebp),%eax
082f29f0 +0x2774:  mov    %eax,(%esp)
082f29f3 +0x2777:  call   082f3969 <+0x36ed>
082f29f8 +0x277c:  leave
082f29f9 +0x277d:  ret
082f29fa +0x277e:  push   %ebp
082f29fb +0x277f:  mov    %esp,%ebp
082f29fd +0x2781:  sub    $0x18,%esp
082f2a00 +0x2784:  mov    0x8(%ebp),%eax
082f2a03 +0x2787:  mov    %eax,(%esp)
082f2a06 +0x278a:  call   082c6ab0 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x189ab>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x189ab
082f2a0b +0x278f:  leave
082f2a0c +0x2790:  ret
082f2a0d +0x2791:  nop
082f2a0e +0x2792:  push   %ebp
082f2a0f +0x2793:  mov    %esp,%ebp
082f2a11 +0x2795:  sub    $0x18,%esp
082f2a14 +0x2798:  mov    0x8(%ebp),%eax
082f2a17 +0x279b:  mov    %eax,(%esp)
082f2a1a +0x279e:  call   082f3984 <+0x3708>
082f2a1f +0x27a3:  leave
082f2a20 +0x27a4:  ret
082f2a21 +0x27a5:  nop
082f2a22 +0x27a6:  push   %ebp
082f2a23 +0x27a7:  mov    %esp,%ebp
082f2a25 +0x27a9:  push   %esi
082f2a26 +0x27aa:  push   %ebx
082f2a27 +0x27ab:  sub    $0x10,%esp
082f2a2a +0x27ae:  mov    0x8(%ebp),%eax
082f2a2d +0x27b1:  mov    0x8(%eax),%eax
082f2a30 +0x27b4:  mov    %eax,%edx
082f2a32 +0x27b6:  mov    0x8(%ebp),%eax
082f2a35 +0x27b9:  mov    (%eax),%eax
082f2a37 +0x27bb:  mov    %edx,%ecx
082f2a39 +0x27bd:  sub    %eax,%ecx
082f2a3b +0x27bf:  mov    %ecx,%eax
082f2a3d +0x27c1:  sar    $0x2,%eax
082f2a40 +0x27c4:  mov    %eax,%edx
082f2a42 +0x27c6:  mov    0x8(%ebp),%eax
082f2a45 +0x27c9:  mov    (%eax),%eax
082f2a47 +0x27cb:  mov    %edx,0x8(%esp)
082f2a4b +0x27cf:  mov    %eax,0x4(%esp)
082f2a4f +0x27d3:  mov    0x8(%ebp),%eax
082f2a52 +0x27d6:  mov    %eax,(%esp)
082f2a55 +0x27d9:  call   082f39b4 <+0x3738>
082f2a5a +0x27de:  jmp    082f2a77 <+0x27fb>
082f2a5c +0x27e0:  mov    %edx,%ebx
082f2a5e +0x27e2:  mov    %eax,%esi
082f2a60 +0x27e4:  mov    0x8(%ebp),%eax
082f2a63 +0x27e7:  mov    %eax,(%esp)
082f2a66 +0x27ea:  call   082f29fa <+0x277e>
082f2a6b +0x27ef:  mov    %esi,%eax
082f2a6d +0x27f1:  mov    %ebx,%edx
082f2a6f +0x27f3:  mov    %eax,(%esp)
082f2a72 +0x27f6:  call   08ae3750 <_Unwind_Resume>
082f2a77 +0x27fb:  mov    0x8(%ebp),%eax
082f2a7a +0x27fe:  mov    %eax,(%esp)
082f2a7d +0x2801:  call   082f29fa <+0x277e>
082f2a82 +0x2806:  add    $0x10,%esp
082f2a85 +0x2809:  pop    %ebx
082f2a86 +0x280a:  pop    %esi
082f2a87 +0x280b:  pop    %ebp
082f2a88 +0x280c:  ret
082f2a89 +0x280d:  nop
082f2a8a +0x280e:  push   %ebp
082f2a8b +0x280f:  mov    %esp,%ebp
082f2a8d +0x2811:  mov    0x8(%ebp),%eax
082f2a90 +0x2814:  pop    %ebp
082f2a91 +0x2815:  ret
082f2a92 +0x2816:  push   %ebp
082f2a93 +0x2817:  mov    %esp,%ebp
082f2a95 +0x2819:  sub    $0x18,%esp
082f2a98 +0x281c:  mov    0xc(%ebp),%eax
082f2a9b +0x281f:  mov    %eax,0x4(%esp)
082f2a9f +0x2823:  mov    0x8(%ebp),%eax
082f2aa2 +0x2826:  mov    %eax,(%esp)
082f2aa5 +0x2829:  call   082f39db <+0x375f>
082f2aaa +0x282e:  leave
082f2aab +0x282f:  ret
082f2aac +0x2830:  push   %ebp
082f2aad +0x2831:  mov    %esp,%ebp
082f2aaf +0x2833:  sub    $0x18,%esp
082f2ab2 +0x2836:  mov    0x8(%ebp),%eax
082f2ab5 +0x2839:  mov    %eax,(%esp)
082f2ab8 +0x283c:  call   082f1b90 <+0x1914>
082f2abd +0x2841:  cmp    0xc(%ebp),%eax
082f2ac0 +0x2844:  setbe  %al
082f2ac3 +0x2847:  test   %al,%al
082f2ac5 +0x2849:  je     082f2ad3 <+0x2857>
082f2ac7 +0x284b:  movl   $"vector::_M_range_check",(%esp)
082f2ace +0x2852:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
082f2ad3 +0x2857:  leave
082f2ad4 +0x2858:  ret
082f2ad5 +0x2859:  nop
082f2ad6 +0x285a:  push   %ebp
082f2ad7 +0x285b:  mov    %esp,%ebp
082f2ad9 +0x285d:  mov    0x8(%ebp),%eax
082f2adc +0x2860:  mov    (%eax),%eax
082f2ade +0x2862:  mov    0xc(%ebp),%edx
082f2ae1 +0x2865:  shl    $0x2,%edx
082f2ae4 +0x2868:  add    %edx,%eax
082f2ae6 +0x286a:  pop    %ebp
082f2ae7 +0x286b:  ret
082f2ae8 +0x286c:  push   %ebp
082f2ae9 +0x286d:  mov    %esp,%ebp
082f2aeb +0x286f:  push   %ebx
082f2aec +0x2870:  sub    $0x14,%esp
082f2aef +0x2873:  mov    0x8(%ebp),%ebx
082f2af2 +0x2876:  mov    0xc(%ebp),%eax
082f2af5 +0x2879:  mov    0xc(%eax),%eax
082f2af8 +0x287c:  mov    %eax,0x4(%esp)
082f2afc +0x2880:  mov    %ebx,(%esp)
082f2aff +0x2883:  call   082f39f6 <+0x377a>
082f2b04 +0x2888:  mov    %ebx,%eax
082f2b06 +0x288a:  add    $0x14,%esp
082f2b09 +0x288d:  pop    %ebx
082f2b0a +0x288e:  pop    %ebp
082f2b0b +0x288f:  ret    $0x4
082f2b0e +0x2892:  push   %ebp
082f2b0f +0x2893:  mov    %esp,%ebp
082f2b11 +0x2895:  push   %ebx
082f2b12 +0x2896:  sub    $0x14,%esp
082f2b15 +0x2899:  mov    0x8(%ebp),%ebx
082f2b18 +0x289c:  mov    0xc(%ebp),%eax
082f2b1b +0x289f:  add    $0x4,%eax
082f2b1e +0x28a2:  mov    %eax,0x4(%esp)
082f2b22 +0x28a6:  mov    %ebx,(%esp)
082f2b25 +0x28a9:  call   082f39f6 <+0x377a>
082f2b2a +0x28ae:  mov    %ebx,%eax
082f2b2c +0x28b0:  add    $0x14,%esp
082f2b2f +0x28b3:  pop    %ebx
082f2b30 +0x28b4:  pop    %ebp
082f2b31 +0x28b5:  ret    $0x4
082f2b34 +0x28b8:  push   %ebp
082f2b35 +0x28b9:  mov    %esp,%ebp
082f2b37 +0x28bb:  push   %esi
082f2b38 +0x28bc:  push   %ebx
082f2b39 +0x28bd:  sub    $0x30,%esp
082f2b3c +0x28c0:  mov    0x8(%ebp),%ebx
082f2b3f +0x28c3:  mov    0xc(%ebp),%eax
082f2b42 +0x28c6:  mov    %eax,(%esp)
082f2b45 +0x28c9:  call   082f3a04 <+0x3788>
082f2b4a +0x28ce:  mov    %eax,%esi
082f2b4c +0x28d0:  mov    0xc(%ebp),%eax
082f2b4f +0x28d3:  mov    %eax,(%esp)
082f2b52 +0x28d6:  call   0823955e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xec08>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xec08
082f2b57 +0x28db:  lea    -0x10(%ebp),%edx
082f2b5a +0x28de:  mov    0x10(%ebp),%ecx
082f2b5d +0x28e1:  mov    %ecx,0x10(%esp)
082f2b61 +0x28e5:  mov    %esi,0xc(%esp)
082f2b65 +0x28e9:  mov    %eax,0x8(%esp)
082f2b69 +0x28ed:  mov    0xc(%ebp),%eax
082f2b6c +0x28f0:  mov    %eax,0x4(%esp)
082f2b70 +0x28f4:  mov    %edx,(%esp)
082f2b73 +0x28f7:  call   082f3a10 <+0x3794>
082f2b78 +0x28fc:  sub    $0x4,%esp
082f2b7b +0x28ff:  lea    -0xc(%ebp),%eax
082f2b7e +0x2902:  mov    0xc(%ebp),%edx
082f2b81 +0x2905:  mov    %edx,0x4(%esp)
082f2b85 +0x2909:  mov    %eax,(%esp)
082f2b88 +0x290c:  call   082f2b0e <+0x2892>
082f2b8d +0x2911:  sub    $0x4,%esp
082f2b90 +0x2914:  lea    -0xc(%ebp),%eax
082f2b93 +0x2917:  mov    %eax,0x4(%esp)
082f2b97 +0x291b:  lea    -0x10(%ebp),%eax
082f2b9a +0x291e:  mov    %eax,(%esp)
082f2b9d +0x2921:  call   082f1cca <+0x1a4e>
082f2ba2 +0x2926:  test   %al,%al
082f2ba4 +0x2928:  jne    082f2bcb <+0x294f>
082f2ba6 +0x292a:  mov    -0x10(%ebp),%eax
082f2ba9 +0x292d:  mov    %eax,(%esp)
082f2bac +0x2930:  call   082f3a8c <+0x3810>
082f2bb1 +0x2935:  mov    0xc(%ebp),%edx
082f2bb4 +0x2938:  mov    %eax,0x8(%esp)
082f2bb8 +0x293c:  mov    0x10(%ebp),%eax
082f2bbb +0x293f:  mov    %eax,0x4(%esp)
082f2bbf +0x2943:  mov    %edx,(%esp)
082f2bc2 +0x2946:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
082f2bc7 +0x294b:  test   %al,%al
082f2bc9 +0x294d:  je     082f2bdf <+0x2963>
082f2bcb +0x294f:  mov    0xc(%ebp),%eax
082f2bce +0x2952:  mov    %eax,0x4(%esp)
082f2bd2 +0x2956:  mov    %ebx,(%esp)
082f2bd5 +0x2959:  call   082f2b0e <+0x2892>
082f2bda +0x295e:  sub    $0x4,%esp
082f2bdd +0x2961:  jmp    082f2be4 <+0x2968>
082f2bdf +0x2963:  mov    -0x10(%ebp),%eax
082f2be2 +0x2966:  mov    %eax,(%ebx)
082f2be4 +0x2968:  mov    %ebx,%eax
082f2be6 +0x296a:  lea    -0x8(%ebp),%esp
082f2be9 +0x296d:  add    $0x0,%esp
082f2bec +0x2970:  pop    %ebx
082f2bed +0x2971:  pop    %esi
082f2bee +0x2972:  pop    %ebp
082f2bef +0x2973:  ret    $0x4
082f2bf2 +0x2976:  push   %ebp
082f2bf3 +0x2977:  mov    %esp,%ebp
082f2bf5 +0x2979:  sub    $0x28,%esp
082f2bf8 +0x297c:  mov    0x8(%ebp),%eax
082f2bfb +0x297f:  lea    0x4(%eax),%edx
082f2bfe +0x2982:  mov    0xc(%ebp),%eax
082f2c01 +0x2985:  mov    %edx,0x4(%esp)
082f2c05 +0x2989:  mov    %eax,(%esp)
082f2c08 +0x298c:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
082f2c0d +0x2991:  mov    %eax,-0xc(%ebp)
082f2c10 +0x2994:  mov    -0xc(%ebp),%eax
082f2c13 +0x2997:  mov    %eax,0x4(%esp)
082f2c17 +0x299b:  mov    0x8(%ebp),%eax
082f2c1a +0x299e:  mov    %eax,(%esp)
082f2c1d +0x29a1:  call   0823c892 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x7a10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x7a10
082f2c22 +0x29a6:  mov    0x8(%ebp),%eax
082f2c25 +0x29a9:  mov    0x14(%eax),%eax
082f2c28 +0x29ac:  lea    -0x1(%eax),%edx
082f2c2b +0x29af:  mov    0x8(%ebp),%eax
082f2c2e +0x29b2:  mov    %edx,0x14(%eax)
082f2c31 +0x29b5:  leave
082f2c32 +0x29b6:  ret
082f2c33 +0x29b7:  push   %ebp
082f2c34 +0x29b8:  mov    %esp,%ebp
082f2c36 +0x29ba:  mov    0x8(%ebp),%eax
082f2c39 +0x29bd:  pop    %ebp
082f2c3a +0x29be:  ret
082f2c3b +0x29bf:  nop
082f2c3c +0x29c0:  push   %ebp
082f2c3d +0x29c1:  mov    %esp,%ebp
082f2c3f +0x29c3:  sub    $0x18,%esp
082f2c42 +0x29c6:  mov    0xc(%ebp),%eax
082f2c45 +0x29c9:  mov    %eax,(%esp)
082f2c48 +0x29cc:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
082f2c4d +0x29d1:  mov    (%eax),%edx
082f2c4f +0x29d3:  mov    0x8(%ebp),%eax
082f2c52 +0x29d6:  mov    %edx,(%eax)
082f2c54 +0x29d8:  mov    0x10(%ebp),%eax
082f2c57 +0x29db:  mov    %eax,(%esp)
082f2c5a +0x29de:  call   082f2c33 <+0x29b7>
082f2c5f +0x29e3:  mov    (%eax),%edx
082f2c61 +0x29e5:  mov    0x8(%ebp),%eax
082f2c64 +0x29e8:  mov    %edx,0x4(%eax)
082f2c67 +0x29eb:  leave
082f2c68 +0x29ec:  ret
082f2c69 +0x29ed:  push   %ebp
082f2c6a +0x29ee:  mov    %esp,%ebp
082f2c6c +0x29f0:  mov    0x8(%ebp),%eax
082f2c6f +0x29f3:  pop    %ebp
082f2c70 +0x29f4:  ret
082f2c71 +0x29f5:  nop
082f2c72 +0x29f6:  push   %ebp
082f2c73 +0x29f7:  mov    %esp,%ebp
082f2c75 +0x29f9:  push   %esi
082f2c76 +0x29fa:  push   %ebx
082f2c77 +0x29fb:  sub    $0x50,%esp
082f2c7a +0x29fe:  mov    0x8(%ebp),%ebx
082f2c7d +0x2a01:  mov    0xc(%ebp),%eax
082f2c80 +0x2a04:  mov    %eax,(%esp)
082f2c83 +0x2a07:  call   0823955e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xec08>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xec08
082f2c88 +0x2a0c:  mov    %eax,-0x14(%ebp)
082f2c8b +0x2a0f:  mov    0xc(%ebp),%eax
082f2c8e +0x2a12:  mov    %eax,(%esp)
082f2c91 +0x2a15:  call   082f3a04 <+0x3788>
082f2c96 +0x2a1a:  mov    %eax,-0x10(%ebp)
082f2c99 +0x2a1d:  movb   $0x1,-0x9(%ebp)
082f2c9d +0x2a21:  jmp    082f2cfb <+0x2a7f>
082f2c9f +0x2a23:  mov    -0x14(%ebp),%eax
082f2ca2 +0x2a26:  mov    %eax,-0x10(%ebp)
082f2ca5 +0x2a29:  mov    -0x14(%ebp),%eax
082f2ca8 +0x2a2c:  mov    %eax,(%esp)
082f2cab +0x2a2f:  call   082f3ab6 <+0x383a>
082f2cb0 +0x2a34:  mov    %eax,%esi
082f2cb2 +0x2a36:  mov    0x10(%ebp),%eax
082f2cb5 +0x2a39:  mov    %eax,0x4(%esp)
082f2cb9 +0x2a3d:  lea    -0x2d(%ebp),%eax
082f2cbc +0x2a40:  mov    %eax,(%esp)
082f2cbf +0x2a43:  call   082f3aae <+0x3832>
082f2cc4 +0x2a48:  mov    0xc(%ebp),%edx
082f2cc7 +0x2a4b:  mov    %esi,0x8(%esp)
082f2ccb +0x2a4f:  mov    %eax,0x4(%esp)
082f2ccf +0x2a53:  mov    %edx,(%esp)
082f2cd2 +0x2a56:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
082f2cd7 +0x2a5b:  mov    %al,-0x9(%ebp)
082f2cda +0x2a5e:  cmpb   $0x0,-0x9(%ebp)
082f2cde +0x2a62:  je     082f2ced <+0x2a71>
082f2ce0 +0x2a64:  mov    -0x14(%ebp),%eax
082f2ce3 +0x2a67:  mov    %eax,(%esp)
082f2ce6 +0x2a6a:  call   0823c886 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x7a04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x7a04
082f2ceb +0x2a6f:  jmp    082f2cf8 <+0x2a7c>
082f2ced +0x2a71:  mov    -0x14(%ebp),%eax
082f2cf0 +0x2a74:  mov    %eax,(%esp)
082f2cf3 +0x2a77:  call   0823c87b <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x79f9>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x79f9
082f2cf8 +0x2a7c:  mov    %eax,-0x14(%ebp)
082f2cfb +0x2a7f:  cmpl   $0x0,-0x14(%ebp)
082f2cff +0x2a83:  setne  %al
082f2d02 +0x2a86:  test   %al,%al
082f2d04 +0x2a88:  jne    082f2c9f <+0x2a23>
082f2d06 +0x2a8a:  mov    -0x10(%ebp),%eax
082f2d09 +0x2a8d:  mov    %eax,0x4(%esp)
082f2d0d +0x2a91:  lea    -0x34(%ebp),%eax
082f2d10 +0x2a94:  mov    %eax,(%esp)
082f2d13 +0x2a97:  call   082f39f6 <+0x377a>
082f2d18 +0x2a9c:  cmpb   $0x0,-0x9(%ebp)
082f2d1c +0x2aa0:  je     082f2d9d <+0x2b21>
082f2d1e +0x2aa2:  lea    -0x2c(%ebp),%eax
082f2d21 +0x2aa5:  mov    0xc(%ebp),%edx
082f2d24 +0x2aa8:  mov    %edx,0x4(%esp)
082f2d28 +0x2aac:  mov    %eax,(%esp)
082f2d2b +0x2aaf:  call   082f2ae8 <+0x286c>
082f2d30 +0x2ab4:  sub    $0x4,%esp
082f2d33 +0x2ab7:  lea    -0x2c(%ebp),%eax
082f2d36 +0x2aba:  mov    %eax,0x4(%esp)
082f2d3a +0x2abe:  lea    -0x34(%ebp),%eax
082f2d3d +0x2ac1:  mov    %eax,(%esp)
082f2d40 +0x2ac4:  call   082f1cca <+0x1a4e>
082f2d45 +0x2ac9:  test   %al,%al
082f2d47 +0x2acb:  je     082f2d92 <+0x2b16>
082f2d49 +0x2acd:  movb   $0x1,-0x25(%ebp)
082f2d4d +0x2ad1:  mov    -0x10(%ebp),%ecx
082f2d50 +0x2ad4:  mov    -0x14(%ebp),%edx
082f2d53 +0x2ad7:  lea    -0x24(%ebp),%eax
082f2d56 +0x2ada:  mov    0x10(%ebp),%esi
082f2d59 +0x2add:  mov    %esi,0x10(%esp)
082f2d5d +0x2ae1:  mov    %ecx,0xc(%esp)
082f2d61 +0x2ae5:  mov    %edx,0x8(%esp)
082f2d65 +0x2ae9:  mov    0xc(%ebp),%edx
082f2d68 +0x2aec:  mov    %edx,0x4(%esp)
082f2d6c +0x2af0:  mov    %eax,(%esp)
082f2d6f +0x2af3:  call   082f3ad8 <+0x385c>
082f2d74 +0x2af8:  sub    $0x4,%esp
082f2d77 +0x2afb:  lea    -0x25(%ebp),%eax
082f2d7a +0x2afe:  mov    %eax,0x8(%esp)
082f2d7e +0x2b02:  lea    -0x24(%ebp),%eax
082f2d81 +0x2b05:  mov    %eax,0x4(%esp)
082f2d85 +0x2b09:  mov    %ebx,(%esp)
082f2d88 +0x2b0c:  call   082f3ba0 <+0x3924>
082f2d8d +0x2b11:  jmp    082f2e33 <+0x2bb7>
082f2d92 +0x2b16:  lea    -0x34(%ebp),%eax
082f2d95 +0x2b19:  mov    %eax,(%esp)
082f2d98 +0x2b1c:  call   082f3bce <+0x3952>
082f2d9d +0x2b21:  mov    0x10(%ebp),%eax
082f2da0 +0x2b24:  mov    %eax,0x4(%esp)
082f2da4 +0x2b28:  lea    -0x1e(%ebp),%eax
082f2da7 +0x2b2b:  mov    %eax,(%esp)
082f2daa +0x2b2e:  call   082f3aae <+0x3832>
082f2daf +0x2b33:  mov    %eax,%esi
082f2db1 +0x2b35:  mov    -0x34(%ebp),%eax
082f2db4 +0x2b38:  mov    %eax,(%esp)
082f2db7 +0x2b3b:  call   082f3a8c <+0x3810>
082f2dbc +0x2b40:  mov    0xc(%ebp),%edx
082f2dbf +0x2b43:  mov    %esi,0x8(%esp)
082f2dc3 +0x2b47:  mov    %eax,0x4(%esp)
082f2dc7 +0x2b4b:  mov    %edx,(%esp)
082f2dca +0x2b4e:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
082f2dcf +0x2b53:  test   %al,%al
082f2dd1 +0x2b55:  je     082f2e19 <+0x2b9d>
082f2dd3 +0x2b57:  movb   $0x1,-0x1d(%ebp)
082f2dd7 +0x2b5b:  mov    -0x10(%ebp),%ecx
082f2dda +0x2b5e:  mov    -0x14(%ebp),%edx
082f2ddd +0x2b61:  lea    -0x1c(%ebp),%eax
082f2de0 +0x2b64:  mov    0x10(%ebp),%esi
082f2de3 +0x2b67:  mov    %esi,0x10(%esp)
082f2de7 +0x2b6b:  mov    %ecx,0xc(%esp)
082f2deb +0x2b6f:  mov    %edx,0x8(%esp)
082f2def +0x2b73:  mov    0xc(%ebp),%edx
082f2df2 +0x2b76:  mov    %edx,0x4(%esp)
082f2df6 +0x2b7a:  mov    %eax,(%esp)
082f2df9 +0x2b7d:  call   082f3ad8 <+0x385c>
082f2dfe +0x2b82:  sub    $0x4,%esp
082f2e01 +0x2b85:  lea    -0x1d(%ebp),%eax
082f2e04 +0x2b88:  mov    %eax,0x8(%esp)
082f2e08 +0x2b8c:  lea    -0x1c(%ebp),%eax
082f2e0b +0x2b8f:  mov    %eax,0x4(%esp)
082f2e0f +0x2b93:  mov    %ebx,(%esp)
082f2e12 +0x2b96:  call   082f3ba0 <+0x3924>
082f2e17 +0x2b9b:  jmp    082f2e33 <+0x2bb7>
082f2e19 +0x2b9d:  movb   $0x0,-0x15(%ebp)
082f2e1d +0x2ba1:  lea    -0x15(%ebp),%eax
082f2e20 +0x2ba4:  mov    %eax,0x8(%esp)
082f2e24 +0x2ba8:  lea    -0x34(%ebp),%eax
082f2e27 +0x2bab:  mov    %eax,0x4(%esp)
082f2e2b +0x2baf:  mov    %ebx,(%esp)
082f2e2e +0x2bb2:  call   082f3bec <+0x3970>
082f2e33 +0x2bb7:  mov    %ebx,%eax
082f2e35 +0x2bb9:  lea    -0x8(%ebp),%esp
082f2e38 +0x2bbc:  add    $0x0,%esp
082f2e3b +0x2bbf:  pop    %ebx
082f2e3c +0x2bc0:  pop    %esi
082f2e3d +0x2bc1:  pop    %ebp
082f2e3e +0x2bc2:  ret    $0x4
082f2e41 +0x2bc5:  nop
082f2e42 +0x2bc6:  push   %ebp
082f2e43 +0x2bc7:  mov    %esp,%ebp
082f2e45 +0x2bc9:  sub    $0x18,%esp
082f2e48 +0x2bcc:  mov    0x8(%ebp),%eax
082f2e4b +0x2bcf:  lea    0x8(%eax),%edx
082f2e4e +0x2bd2:  mov    0x8(%ebp),%eax
082f2e51 +0x2bd5:  add    $0x18,%eax
082f2e54 +0x2bd8:  mov    %edx,0x4(%esp)
082f2e58 +0x2bdc:  mov    %eax,(%esp)
082f2e5b +0x2bdf:  call   082f3c1a <+0x399e>
082f2e60 +0x2be4:  leave
082f2e61 +0x2be5:  ret
082f2e62 +0x2be6:  push   %ebp
082f2e63 +0x2be7:  mov    %esp,%ebp
082f2e65 +0x2be9:  sub    $0x28,%esp
082f2e68 +0x2bec:  lea    -0x18(%ebp),%eax
082f2e6b +0x2bef:  mov    0x8(%ebp),%edx
082f2e6e +0x2bf2:  mov    %edx,0x4(%esp)
082f2e72 +0x2bf6:  mov    %eax,(%esp)
082f2e75 +0x2bf9:  call   082f2fc4 <+0x2d48>
082f2e7a +0x2bfe:  sub    $0x4,%esp
082f2e7d +0x2c01:  lea    -0x18(%ebp),%eax
082f2e80 +0x2c04:  mov    %eax,(%esp)
082f2e83 +0x2c07:  call   082f3c2e <+0x39b2>
082f2e88 +0x2c0c:  leave
082f2e89 +0x2c0d:  ret
082f2e8a +0x2c0e:  push   %ebp
082f2e8b +0x2c0f:  mov    %esp,%ebp
082f2e8d +0x2c11:  sub    $0x18,%esp
082f2e90 +0x2c14:  mov    0x8(%ebp),%eax
082f2e93 +0x2c17:  mov    0x8(%eax),%edx
082f2e96 +0x2c1a:  mov    0x8(%ebp),%eax
082f2e99 +0x2c1d:  mov    0x10(%eax),%eax
082f2e9c +0x2c20:  sub    $0x4,%eax
082f2e9f +0x2c23:  cmp    %eax,%edx
082f2ea1 +0x2c25:  je     082f2ec9 <+0x2c4d>
082f2ea3 +0x2c27:  mov    0x8(%ebp),%eax
082f2ea6 +0x2c2a:  mov    0x8(%eax),%edx
082f2ea9 +0x2c2d:  mov    0x8(%ebp),%eax
082f2eac +0x2c30:  mov    %edx,0x4(%esp)
082f2eb0 +0x2c34:  mov    %eax,(%esp)
082f2eb3 +0x2c37:  call   082f3c38 <+0x39bc>
082f2eb8 +0x2c3c:  mov    0x8(%ebp),%eax
082f2ebb +0x2c3f:  mov    0x8(%eax),%eax
082f2ebe +0x2c42:  lea    0x4(%eax),%edx
082f2ec1 +0x2c45:  mov    0x8(%ebp),%eax
082f2ec4 +0x2c48:  mov    %edx,0x8(%eax)
082f2ec7 +0x2c4b:  jmp    082f2ed4 <+0x2c58>
082f2ec9 +0x2c4d:  mov    0x8(%ebp),%eax
082f2ecc +0x2c50:  mov    %eax,(%esp)
082f2ecf +0x2c53:  call   082f3c3e <+0x39c2>
082f2ed4 +0x2c58:  leave
082f2ed5 +0x2c59:  ret
082f2ed6 +0x2c5a:  push   %ebp
082f2ed7 +0x2c5b:  mov    %esp,%ebp
082f2ed9 +0x2c5d:  sub    $0x18,%esp
082f2edc +0x2c60:  mov    0x8(%ebp),%eax
082f2edf +0x2c63:  mov    0x18(%eax),%edx
082f2ee2 +0x2c66:  mov    0x8(%ebp),%eax
082f2ee5 +0x2c69:  mov    0x20(%eax),%eax
082f2ee8 +0x2c6c:  sub    $0x4,%eax
082f2eeb +0x2c6f:  cmp    %eax,%edx
082f2eed +0x2c71:  je     082f2f1c <+0x2ca0>
082f2eef +0x2c73:  mov    0x8(%ebp),%eax
082f2ef2 +0x2c76:  mov    0x18(%eax),%edx
082f2ef5 +0x2c79:  mov    0x8(%ebp),%eax
082f2ef8 +0x2c7c:  mov    0xc(%ebp),%ecx
082f2efb +0x2c7f:  mov    %ecx,0x8(%esp)
082f2eff +0x2c83:  mov    %edx,0x4(%esp)
082f2f03 +0x2c87:  mov    %eax,(%esp)
082f2f06 +0x2c8a:  call   082f3c98 <+0x3a1c>
082f2f0b +0x2c8f:  mov    0x8(%ebp),%eax
082f2f0e +0x2c92:  mov    0x18(%eax),%eax
082f2f11 +0x2c95:  lea    0x4(%eax),%edx
082f2f14 +0x2c98:  mov    0x8(%ebp),%eax
082f2f17 +0x2c9b:  mov    %edx,0x18(%eax)
082f2f1a +0x2c9e:  jmp    082f2f2e <+0x2cb2>
082f2f1c +0x2ca0:  mov    0xc(%ebp),%eax
082f2f1f +0x2ca3:  mov    %eax,0x4(%esp)
082f2f23 +0x2ca7:  mov    0x8(%ebp),%eax
082f2f26 +0x2caa:  mov    %eax,(%esp)
082f2f29 +0x2cad:  call   082f3cc0 <+0x3a44>
082f2f2e +0x2cb2:  leave
082f2f2f +0x2cb3:  ret
082f2f30 +0x2cb4:  push   %ebp
082f2f31 +0x2cb5:  mov    %esp,%ebp
082f2f33 +0x2cb7:  sub    $0x18,%esp
082f2f36 +0x2cba:  mov    0x8(%ebp),%eax
082f2f39 +0x2cbd:  mov    %eax,(%esp)
082f2f3c +0x2cc0:  call   082f3d42 <+0x3ac6>
082f2f41 +0x2cc5:  leave
082f2f42 +0x2cc6:  ret
082f2f43 +0x2cc7:  nop
082f2f44 +0x2cc8:  push   %ebp
082f2f45 +0x2cc9:  mov    %esp,%ebp
082f2f47 +0x2ccb:  push   %esi
082f2f48 +0x2ccc:  push   %ebx
082f2f49 +0x2ccd:  sub    $0x10,%esp
082f2f4c +0x2cd0:  mov    0x8(%ebp),%eax
082f2f4f +0x2cd3:  mov    (%eax),%eax
082f2f51 +0x2cd5:  test   %eax,%eax
082f2f53 +0x2cd7:  je     082f2fb2 <+0x2d36>
082f2f55 +0x2cd9:  mov    0x8(%ebp),%eax
082f2f58 +0x2cdc:  mov    0x24(%eax),%eax
082f2f5b +0x2cdf:  lea    0x4(%eax),%edx
082f2f5e +0x2ce2:  mov    0x8(%ebp),%eax
082f2f61 +0x2ce5:  mov    0x14(%eax),%eax
082f2f64 +0x2ce8:  mov    %edx,0x8(%esp)
082f2f68 +0x2cec:  mov    %eax,0x4(%esp)
082f2f6c +0x2cf0:  mov    0x8(%ebp),%eax
082f2f6f +0x2cf3:  mov    %eax,(%esp)
082f2f72 +0x2cf6:  call   082f3d56 <+0x3ada>
082f2f77 +0x2cfb:  mov    0x8(%ebp),%eax
082f2f7a +0x2cfe:  mov    0x4(%eax),%edx
082f2f7d +0x2d01:  mov    0x8(%ebp),%eax
082f2f80 +0x2d04:  mov    (%eax),%eax
082f2f82 +0x2d06:  mov    %edx,0x8(%esp)
082f2f86 +0x2d0a:  mov    %eax,0x4(%esp)
082f2f8a +0x2d0e:  mov    0x8(%ebp),%eax
082f2f8d +0x2d11:  mov    %eax,(%esp)
082f2f90 +0x2d14:  call   082f3d8c <+0x3b10>
082f2f95 +0x2d19:  jmp    082f2fb2 <+0x2d36>
082f2f97 +0x2d1b:  mov    %edx,%ebx
082f2f99 +0x2d1d:  mov    %eax,%esi
082f2f9b +0x2d1f:  mov    0x8(%ebp),%eax
082f2f9e +0x2d22:  mov    %eax,(%esp)
082f2fa1 +0x2d25:  call   082f2f30 <+0x2cb4>
082f2fa6 +0x2d2a:  mov    %esi,%eax
082f2fa8 +0x2d2c:  mov    %ebx,%edx
082f2faa +0x2d2e:  mov    %eax,(%esp)
082f2fad +0x2d31:  call   08ae3750 <_Unwind_Resume>
082f2fb2 +0x2d36:  mov    0x8(%ebp),%eax
082f2fb5 +0x2d39:  mov    %eax,(%esp)
082f2fb8 +0x2d3c:  call   082f2f30 <+0x2cb4>
082f2fbd +0x2d41:  add    $0x10,%esp
082f2fc0 +0x2d44:  pop    %ebx
082f2fc1 +0x2d45:  pop    %esi
082f2fc2 +0x2d46:  pop    %ebp
082f2fc3 +0x2d47:  ret
082f2fc4 +0x2d48:  push   %ebp
082f2fc5 +0x2d49:  mov    %esp,%ebp
082f2fc7 +0x2d4b:  push   %ebx
082f2fc8 +0x2d4c:  sub    $0x14,%esp
082f2fcb +0x2d4f:  mov    0x8(%ebp),%ebx
082f2fce +0x2d52:  mov    %ebx,%eax
082f2fd0 +0x2d54:  mov    0xc(%ebp),%edx
082f2fd3 +0x2d57:  add    $0x8,%edx
082f2fd6 +0x2d5a:  mov    %edx,0x4(%esp)
082f2fda +0x2d5e:  mov    %eax,(%esp)
082f2fdd +0x2d61:  call   082f3020 <+0x2da4>
082f2fe2 +0x2d66:  mov    %ebx,%eax
082f2fe4 +0x2d68:  mov    %ebx,%eax
082f2fe6 +0x2d6a:  add    $0x14,%esp
082f2fe9 +0x2d6d:  pop    %ebx
082f2fea +0x2d6e:  pop    %ebp
082f2feb +0x2d6f:  ret    $0x4
082f2fee +0x2d72:  push   %ebp
082f2fef +0x2d73:  mov    %esp,%ebp
082f2ff1 +0x2d75:  push   %ebx
082f2ff2 +0x2d76:  sub    $0x14,%esp
082f2ff5 +0x2d79:  mov    0x8(%ebp),%ebx
082f2ff8 +0x2d7c:  mov    %ebx,%eax
082f2ffa +0x2d7e:  mov    0xc(%ebp),%edx
082f2ffd +0x2d81:  add    $0x18,%edx
082f3000 +0x2d84:  mov    %edx,0x4(%esp)
082f3004 +0x2d88:  mov    %eax,(%esp)
082f3007 +0x2d8b:  call   082f3020 <+0x2da4>
082f300c +0x2d90:  mov    %ebx,%eax
082f300e +0x2d92:  mov    %ebx,%eax
082f3010 +0x2d94:  add    $0x14,%esp
082f3013 +0x2d97:  pop    %ebx
082f3014 +0x2d98:  pop    %ebp
082f3015 +0x2d99:  ret    $0x4
082f3018 +0x2d9c:  push   %ebp
082f3019 +0x2d9d:  mov    %esp,%ebp
082f301b +0x2d9f:  mov    0x8(%ebp),%eax
082f301e +0x2da2:  pop    %ebp
082f301f +0x2da3:  ret
082f3020 +0x2da4:  push   %ebp
082f3021 +0x2da5:  mov    %esp,%ebp
082f3023 +0x2da7:  mov    0xc(%ebp),%eax
082f3026 +0x2daa:  mov    (%eax),%edx
082f3028 +0x2dac:  mov    0x8(%ebp),%eax
082f302b +0x2daf:  mov    %edx,(%eax)
082f302d +0x2db1:  mov    0xc(%ebp),%eax
082f3030 +0x2db4:  mov    0x4(%eax),%edx
082f3033 +0x2db7:  mov    0x8(%ebp),%eax
082f3036 +0x2dba:  mov    %edx,0x4(%eax)
082f3039 +0x2dbd:  mov    0xc(%ebp),%eax
082f303c +0x2dc0:  mov    0x8(%eax),%edx
082f303f +0x2dc3:  mov    0x8(%ebp),%eax
082f3042 +0x2dc6:  mov    %edx,0x8(%eax)
082f3045 +0x2dc9:  mov    0xc(%ebp),%eax
082f3048 +0x2dcc:  mov    0xc(%eax),%edx
082f304b +0x2dcf:  mov    0x8(%ebp),%eax
082f304e +0x2dd2:  mov    %edx,0xc(%eax)
082f3051 +0x2dd5:  pop    %ebp
082f3052 +0x2dd6:  ret
082f3053 +0x2dd7:  nop
082f3054 +0x2dd8:  push   %ebp
082f3055 +0x2dd9:  mov    %esp,%ebp
082f3057 +0x2ddb:  sub    $0x20,%esp
082f305a +0x2dde:  leave
082f305b +0x2ddf:  ret
082f305c +0x2de0:  push   %ebp
082f305d +0x2de1:  mov    %esp,%ebp
082f305f +0x2de3:  push   %esi
082f3060 +0x2de4:  push   %ebx
082f3061 +0x2de5:  sub    $0x10,%esp
082f3064 +0x2de8:  mov    0x8(%ebp),%eax
082f3067 +0x2deb:  mov    %eax,(%esp)
082f306a +0x2dee:  call   082f3dce <+0x3b52>
082f306f +0x2df3:  movl   $0x0,0x4(%esp)
082f3077 +0x2dfb:  mov    0x8(%ebp),%eax
082f307a +0x2dfe:  mov    %eax,(%esp)
082f307d +0x2e01:  call   082f3e10 <+0x3b94>
082f3082 +0x2e06:  jmp    082f309f <+0x2e23>
082f3084 +0x2e08:  mov    %edx,%ebx
082f3086 +0x2e0a:  mov    %eax,%esi
082f3088 +0x2e0c:  mov    0x8(%ebp),%eax
082f308b +0x2e0f:  mov    %eax,(%esp)
082f308e +0x2e12:  call   082f2f30 <+0x2cb4>
082f3093 +0x2e17:  mov    %esi,%eax
082f3095 +0x2e19:  mov    %ebx,%edx
082f3097 +0x2e1b:  mov    %eax,(%esp)
082f309a +0x2e1e:  call   08ae3750 <_Unwind_Resume>
082f309f +0x2e23:  add    $0x10,%esp
082f30a2 +0x2e26:  pop    %ebx
082f30a3 +0x2e27:  pop    %esi
082f30a4 +0x2e28:  pop    %ebp
082f30a5 +0x2e29:  ret
082f30a6 +0x2e2a:  push   %ebp
082f30a7 +0x2e2b:  mov    %esp,%ebp
082f30a9 +0x2e2d:  mov    0x8(%ebp),%eax
082f30ac +0x2e30:  pop    %ebp
082f30ad +0x2e31:  ret
082f30ae +0x2e32:  push   %ebp
082f30af +0x2e33:  mov    %esp,%ebp
082f30b1 +0x2e35:  sub    $0x18,%esp
082f30b4 +0x2e38:  mov    0xc(%ebp),%eax
082f30b7 +0x2e3b:  mov    %eax,(%esp)
082f30ba +0x2e3e:  call   082f3f7f <+0x3d03>
082f30bf +0x2e43:  mov    0x8(%ebp),%edx
082f30c2 +0x2e46:  mov    %eax,0x4(%esp)
082f30c6 +0x2e4a:  mov    %edx,(%esp)
082f30c9 +0x2e4d:  call   082f3f88 <+0x3d0c>
082f30ce +0x2e52:  leave
082f30cf +0x2e53:  ret
082f30d0 +0x2e54:  push   %ebp
082f30d1 +0x2e55:  mov    %esp,%ebp
082f30d3 +0x2e57:  mov    0x8(%ebp),%eax
082f30d6 +0x2e5a:  pop    %ebp
082f30d7 +0x2e5b:  ret
082f30d8 +0x2e5c:  push   %ebp
082f30d9 +0x2e5d:  mov    %esp,%ebp
082f30db +0x2e5f:  sub    $0x28,%esp
082f30de +0x2e62:  mov    0xc(%ebp),%eax
082f30e1 +0x2e65:  mov    %eax,(%esp)
082f30e4 +0x2e68:  call   082f30d0 <+0x2e54>
082f30e9 +0x2e6d:  mov    (%eax),%eax
082f30eb +0x2e6f:  mov    %eax,-0xc(%ebp)
082f30ee +0x2e72:  lea    -0xc(%ebp),%eax
082f30f1 +0x2e75:  mov    %eax,0x4(%esp)
082f30f5 +0x2e79:  mov    0x8(%ebp),%eax
082f30f8 +0x2e7c:  mov    %eax,(%esp)
082f30fb +0x2e7f:  call   082f4044 <+0x3dc8>
082f3100 +0x2e84:  leave
082f3101 +0x2e85:  ret
082f3102 +0x2e86:  push   %ebp
082f3103 +0x2e87:  mov    %esp,%ebp
082f3105 +0x2e89:  mov    0x8(%ebp),%eax
082f3108 +0x2e8c:  pop    %ebp
082f3109 +0x2e8d:  ret
082f310a +0x2e8e:  push   %ebp
082f310b +0x2e8f:  mov    %esp,%ebp
082f310d +0x2e91:  push   %ebx
082f310e +0x2e92:  sub    $0x14,%esp
082f3111 +0x2e95:  mov    0x10(%ebp),%eax
082f3114 +0x2e98:  mov    %eax,(%esp)
082f3117 +0x2e9b:  call   082f40be <+0x3e42>
082f311c +0x2ea0:  mov    %eax,%ebx
082f311e +0x2ea2:  mov    0xc(%ebp),%eax
082f3121 +0x2ea5:  mov    %eax,0x4(%esp)
082f3125 +0x2ea9:  movl   $0xc,(%esp)
082f312c +0x2eb0:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f3131 +0x2eb5:  mov    %eax,%edx
082f3133 +0x2eb7:  test   %edx,%edx
082f3135 +0x2eb9:  je     082f3147 <+0x2ecb>
082f3137 +0x2ebb:  mov    (%ebx),%edx
082f3139 +0x2ebd:  mov    %edx,(%eax)
082f313b +0x2ebf:  mov    0x4(%ebx),%edx
082f313e +0x2ec2:  mov    %edx,0x4(%eax)
082f3141 +0x2ec5:  mov    0x8(%ebx),%edx
082f3144 +0x2ec8:  mov    %edx,0x8(%eax)
082f3147 +0x2ecb:  add    $0x14,%esp
082f314a +0x2ece:  pop    %ebx
082f314b +0x2ecf:  pop    %ebp
082f314c +0x2ed0:  ret
082f314d +0x2ed1:  push   %ebp
082f314e +0x2ed2:  mov    %esp,%ebp
082f3150 +0x2ed4:  push   %ebx
082f3151 +0x2ed5:  sub    $0x14,%esp
082f3154 +0x2ed8:  mov    0xc(%ebp),%eax
082f3157 +0x2edb:  mov    %eax,(%esp)
082f315a +0x2ede:  call   082f40c6 <+0x3e4a>
082f315f +0x2ee3:  mov    %eax,%ebx
082f3161 +0x2ee5:  mov    0x8(%ebp),%eax
082f3164 +0x2ee8:  mov    %eax,(%esp)
082f3167 +0x2eeb:  call   082f40c6 <+0x3e4a>
082f316c +0x2ef0:  mov    0x10(%ebp),%edx
082f316f +0x2ef3:  mov    %edx,0x8(%esp)
082f3173 +0x2ef7:  mov    %ebx,0x4(%esp)
082f3177 +0x2efb:  mov    %eax,(%esp)
082f317a +0x2efe:  call   082f40ce <+0x3e52>
082f317f +0x2f03:  add    $0x14,%esp
082f3182 +0x2f06:  pop    %ebx
082f3183 +0x2f07:  pop    %ebp
082f3184 +0x2f08:  ret
082f3185 +0x2f09:  push   %ebp
082f3186 +0x2f0a:  mov    %esp,%ebp
082f3188 +0x2f0c:  mov    0x8(%ebp),%eax
082f318b +0x2f0f:  pop    %ebp
082f318c +0x2f10:  ret
082f318d +0x2f11:  nop
082f318e +0x2f12:  push   %ebp
082f318f +0x2f13:  mov    %esp,%ebp
082f3191 +0x2f15:  push   %ebx
082f3192 +0x2f16:  sub    $0x24,%esp
082f3195 +0x2f19:  mov    0x8(%ebp),%eax
082f3198 +0x2f1c:  mov    %eax,(%esp)
082f319b +0x2f1f:  call   082f4112 <+0x3e96>
082f31a0 +0x2f24:  mov    %eax,%ebx
082f31a2 +0x2f26:  mov    0x8(%ebp),%eax
082f31a5 +0x2f29:  mov    %eax,(%esp)
082f31a8 +0x2f2c:  call   082f1680 <+0x1404>
082f31ad +0x2f31:  mov    %ebx,%edx
082f31af +0x2f33:  sub    %eax,%edx
082f31b1 +0x2f35:  mov    0xc(%ebp),%eax
082f31b4 +0x2f38:  cmp    %eax,%edx
082f31b6 +0x2f3a:  setb   %al
082f31b9 +0x2f3d:  test   %al,%al
082f31bb +0x2f3f:  je     082f31c8 <+0x2f4c>
082f31bd +0x2f41:  mov    0x10(%ebp),%eax
082f31c0 +0x2f44:  mov    %eax,(%esp)
082f31c3 +0x2f47:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
082f31c8 +0x2f4c:  mov    0x8(%ebp),%eax
082f31cb +0x2f4f:  mov    %eax,(%esp)
082f31ce +0x2f52:  call   082f1680 <+0x1404>
082f31d3 +0x2f57:  mov    %eax,%ebx
082f31d5 +0x2f59:  mov    0x8(%ebp),%eax
082f31d8 +0x2f5c:  mov    %eax,(%esp)
082f31db +0x2f5f:  call   082f1680 <+0x1404>
082f31e0 +0x2f64:  mov    %eax,-0x10(%ebp)
082f31e3 +0x2f67:  lea    0xc(%ebp),%eax
082f31e6 +0x2f6a:  mov    %eax,0x4(%esp)
082f31ea +0x2f6e:  lea    -0x10(%ebp),%eax
082f31ed +0x2f71:  mov    %eax,(%esp)
082f31f0 +0x2f74:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
082f31f5 +0x2f79:  mov    (%eax),%eax
082f31f7 +0x2f7b:  lea    (%ebx,%eax,1),%eax
082f31fa +0x2f7e:  mov    %eax,-0xc(%ebp)
082f31fd +0x2f81:  mov    0x8(%ebp),%eax
082f3200 +0x2f84:  mov    %eax,(%esp)
082f3203 +0x2f87:  call   082f1680 <+0x1404>
082f3208 +0x2f8c:  cmp    -0xc(%ebp),%eax
082f320b +0x2f8f:  ja     082f321d <+0x2fa1>
082f320d +0x2f91:  mov    0x8(%ebp),%eax
082f3210 +0x2f94:  mov    %eax,(%esp)
082f3213 +0x2f97:  call   082f4112 <+0x3e96>
082f3218 +0x2f9c:  cmp    -0xc(%ebp),%eax
082f321b +0x2f9f:  jae    082f322a <+0x2fae>
082f321d +0x2fa1:  mov    0x8(%ebp),%eax
082f3220 +0x2fa4:  mov    %eax,(%esp)
082f3223 +0x2fa7:  call   082f4112 <+0x3e96>
082f3228 +0x2fac:  jmp    082f322d <+0x2fb1>
082f322a +0x2fae:  mov    -0xc(%ebp),%eax
082f322d +0x2fb1:  add    $0x24,%esp
082f3230 +0x2fb4:  pop    %ebx
082f3231 +0x2fb5:  pop    %ebp
082f3232 +0x2fb6:  ret
082f3233 +0x2fb7:  nop
082f3234 +0x2fb8:  push   %ebp
082f3235 +0x2fb9:  mov    %esp,%ebp
082f3237 +0x2fbb:  sub    $0x18,%esp
082f323a +0x2fbe:  cmpl   $0x0,0xc(%ebp)
082f323e +0x2fc2:  je     082f325c <+0x2fe0>
082f3240 +0x2fc4:  mov    0x8(%ebp),%eax
082f3243 +0x2fc7:  movl   $0x0,0x8(%esp)
082f324b +0x2fcf:  mov    0xc(%ebp),%edx
082f324e +0x2fd2:  mov    %edx,0x4(%esp)
082f3252 +0x2fd6:  mov    %eax,(%esp)
082f3255 +0x2fd9:  call   082f412e <+0x3eb2>
082f325a +0x2fde:  jmp    082f3261 <+0x2fe5>
082f325c +0x2fe0:  mov    $0x0,%eax
082f3261 +0x2fe5:  leave
082f3262 +0x2fe6:  ret
082f3263 +0x2fe7:  push   %ebp
082f3264 +0x2fe8:  mov    %esp,%ebp
082f3266 +0x2fea:  sub    $0x28,%esp
082f3269 +0x2fed:  lea    -0x10(%ebp),%eax
082f326c +0x2ff0:  lea    0xc(%ebp),%edx
082f326f +0x2ff3:  mov    %edx,0x4(%esp)
082f3273 +0x2ff7:  mov    %eax,(%esp)
082f3276 +0x2ffa:  call   082f416c <+0x3ef0>
082f327b +0x2fff:  sub    $0x4,%esp
082f327e +0x3002:  lea    -0xc(%ebp),%eax
082f3281 +0x3005:  lea    0x8(%ebp),%edx
082f3284 +0x3008:  mov    %edx,0x4(%esp)
082f3288 +0x300c:  mov    %eax,(%esp)
082f328b +0x300f:  call   082f416c <+0x3ef0>
082f3290 +0x3014:  sub    $0x4,%esp
082f3293 +0x3017:  mov    0x14(%ebp),%eax
082f3296 +0x301a:  mov    %eax,0xc(%esp)
082f329a +0x301e:  mov    0x10(%ebp),%eax
082f329d +0x3021:  mov    %eax,0x8(%esp)
082f32a1 +0x3025:  mov    -0x10(%ebp),%eax
082f32a4 +0x3028:  mov    %eax,0x4(%esp)
082f32a8 +0x302c:  mov    -0xc(%ebp),%eax
082f32ab +0x302f:  mov    %eax,(%esp)
082f32ae +0x3032:  call   082f4191 <+0x3f15>
082f32b3 +0x3037:  leave
082f32b4 +0x3038:  ret
082f32b5 +0x3039:  nop
082f32b6 +0x303a:  push   %ebp
082f32b7 +0x303b:  mov    %esp,%ebp
082f32b9 +0x303d:  sub    $0x18,%esp
082f32bc +0x3040:  cmpl   $0x0,0xc(%ebp)
082f32c0 +0x3044:  je     082f32db <+0x305f>
082f32c2 +0x3046:  mov    0x8(%ebp),%eax
082f32c5 +0x3049:  mov    0x10(%ebp),%edx
082f32c8 +0x304c:  mov    %edx,0x8(%esp)
082f32cc +0x3050:  mov    0xc(%ebp),%edx
082f32cf +0x3053:  mov    %edx,0x4(%esp)
082f32d3 +0x3057:  mov    %eax,(%esp)
082f32d6 +0x305a:  call   082f41b2 <+0x3f36>
082f32db +0x305f:  leave
082f32dc +0x3060:  ret
082f32dd +0x3061:  push   %ebp
082f32de +0x3062:  mov    %esp,%ebp
082f32e0 +0x3064:  mov    0x8(%ebp),%eax
082f32e3 +0x3067:  pop    %ebp
082f32e4 +0x3068:  ret
082f32e5 +0x3069:  nop
082f32e6 +0x306a:  push   %ebp
082f32e7 +0x306b:  mov    %esp,%ebp
082f32e9 +0x306d:  push   %ebx
082f32ea +0x306e:  sub    $0x14,%esp
082f32ed +0x3071:  mov    0x10(%ebp),%eax
082f32f0 +0x3074:  mov    %eax,(%esp)
082f32f3 +0x3077:  call   082f41c5 <+0x3f49>
082f32f8 +0x307c:  mov    %eax,%ebx
082f32fa +0x307e:  mov    0xc(%ebp),%eax
082f32fd +0x3081:  mov    %eax,0x4(%esp)
082f3301 +0x3085:  movl   $0x8,(%esp)
082f3308 +0x308c:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f330d +0x3091:  mov    %eax,%edx
082f330f +0x3093:  test   %edx,%edx
082f3311 +0x3095:  je     082f331f <+0x30a3>
082f3313 +0x3097:  mov    %eax,%ecx
082f3315 +0x3099:  mov    (%ebx),%eax
082f3317 +0x309b:  mov    0x4(%ebx),%edx
082f331a +0x309e:  mov    %eax,(%ecx)
082f331c +0x30a0:  mov    %edx,0x4(%ecx)
082f331f +0x30a3:  add    $0x14,%esp
082f3322 +0x30a6:  pop    %ebx
082f3323 +0x30a7:  pop    %ebp
082f3324 +0x30a8:  ret
082f3325 +0x30a9:  push   %ebp
082f3326 +0x30aa:  mov    %esp,%ebp
082f3328 +0x30ac:  push   %ebx
082f3329 +0x30ad:  sub    $0x14,%esp
082f332c +0x30b0:  mov    0xc(%ebp),%eax
082f332f +0x30b3:  mov    %eax,(%esp)
082f3332 +0x30b6:  call   082f41cd <+0x3f51>
082f3337 +0x30bb:  mov    %eax,%ebx
082f3339 +0x30bd:  mov    0x8(%ebp),%eax
082f333c +0x30c0:  mov    %eax,(%esp)
082f333f +0x30c3:  call   082f41cd <+0x3f51>
082f3344 +0x30c8:  mov    0x10(%ebp),%edx
082f3347 +0x30cb:  mov    %edx,0x8(%esp)
082f334b +0x30cf:  mov    %ebx,0x4(%esp)
082f334f +0x30d3:  mov    %eax,(%esp)
082f3352 +0x30d6:  call   082f41d5 <+0x3f59>
082f3357 +0x30db:  add    $0x14,%esp
082f335a +0x30de:  pop    %ebx
082f335b +0x30df:  pop    %ebp
082f335c +0x30e0:  ret
082f335d +0x30e1:  push   %ebp
082f335e +0x30e2:  mov    %esp,%ebp
082f3360 +0x30e4:  mov    0x8(%ebp),%eax
082f3363 +0x30e7:  pop    %ebp
082f3364 +0x30e8:  ret
082f3365 +0x30e9:  nop
082f3366 +0x30ea:  push   %ebp
082f3367 +0x30eb:  mov    %esp,%ebp
082f3369 +0x30ed:  push   %ebx
082f336a +0x30ee:  sub    $0x24,%esp
082f336d +0x30f1:  mov    0x8(%ebp),%eax
082f3370 +0x30f4:  mov    %eax,(%esp)
082f3373 +0x30f7:  call   082f421a <+0x3f9e>
082f3378 +0x30fc:  mov    %eax,%ebx
082f337a +0x30fe:  mov    0x8(%ebp),%eax
082f337d +0x3101:  mov    %eax,(%esp)
082f3380 +0x3104:  call   082f1814 <+0x1598>
082f3385 +0x3109:  mov    %ebx,%edx
082f3387 +0x310b:  sub    %eax,%edx
082f3389 +0x310d:  mov    0xc(%ebp),%eax
082f338c +0x3110:  cmp    %eax,%edx
082f338e +0x3112:  setb   %al
082f3391 +0x3115:  test   %al,%al
082f3393 +0x3117:  je     082f33a0 <+0x3124>
082f3395 +0x3119:  mov    0x10(%ebp),%eax
082f3398 +0x311c:  mov    %eax,(%esp)
082f339b +0x311f:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
082f33a0 +0x3124:  mov    0x8(%ebp),%eax
082f33a3 +0x3127:  mov    %eax,(%esp)
082f33a6 +0x312a:  call   082f1814 <+0x1598>
082f33ab +0x312f:  mov    %eax,%ebx
082f33ad +0x3131:  mov    0x8(%ebp),%eax
082f33b0 +0x3134:  mov    %eax,(%esp)
082f33b3 +0x3137:  call   082f1814 <+0x1598>
082f33b8 +0x313c:  mov    %eax,-0x10(%ebp)
082f33bb +0x313f:  lea    0xc(%ebp),%eax
082f33be +0x3142:  mov    %eax,0x4(%esp)
082f33c2 +0x3146:  lea    -0x10(%ebp),%eax
082f33c5 +0x3149:  mov    %eax,(%esp)
082f33c8 +0x314c:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
082f33cd +0x3151:  mov    (%eax),%eax
082f33cf +0x3153:  lea    (%ebx,%eax,1),%eax
082f33d2 +0x3156:  mov    %eax,-0xc(%ebp)
082f33d5 +0x3159:  mov    0x8(%ebp),%eax
082f33d8 +0x315c:  mov    %eax,(%esp)
082f33db +0x315f:  call   082f1814 <+0x1598>
082f33e0 +0x3164:  cmp    -0xc(%ebp),%eax
082f33e3 +0x3167:  ja     082f33f5 <+0x3179>
082f33e5 +0x3169:  mov    0x8(%ebp),%eax
082f33e8 +0x316c:  mov    %eax,(%esp)
082f33eb +0x316f:  call   082f421a <+0x3f9e>
082f33f0 +0x3174:  cmp    -0xc(%ebp),%eax
082f33f3 +0x3177:  jae    082f3402 <+0x3186>
082f33f5 +0x3179:  mov    0x8(%ebp),%eax
082f33f8 +0x317c:  mov    %eax,(%esp)
082f33fb +0x317f:  call   082f421a <+0x3f9e>
082f3400 +0x3184:  jmp    082f3405 <+0x3189>
082f3402 +0x3186:  mov    -0xc(%ebp),%eax
082f3405 +0x3189:  add    $0x24,%esp
082f3408 +0x318c:  pop    %ebx
082f3409 +0x318d:  pop    %ebp
082f340a +0x318e:  ret
082f340b +0x318f:  push   %ebp
082f340c +0x3190:  mov    %esp,%ebp
082f340e +0x3192:  push   %ebx
082f340f +0x3193:  sub    $0x14,%esp
082f3412 +0x3196:  mov    0x8(%ebp),%eax
082f3415 +0x3199:  mov    %eax,(%esp)
082f3418 +0x319c:  call   082f2506 <+0x228a>
082f341d +0x31a1:  mov    (%eax),%eax
082f341f +0x31a3:  mov    %eax,%ebx
082f3421 +0x31a5:  mov    0xc(%ebp),%eax
082f3424 +0x31a8:  mov    %eax,(%esp)
082f3427 +0x31ab:  call   082f2506 <+0x228a>
082f342c +0x31b0:  mov    (%eax),%eax
082f342e +0x31b2:  mov    %ebx,%edx
082f3430 +0x31b4:  sub    %eax,%edx
082f3432 +0x31b6:  mov    %edx,%eax
082f3434 +0x31b8:  sar    $0x3,%eax
082f3437 +0x31bb:  add    $0x14,%esp
082f343a +0x31be:  pop    %ebx
082f343b +0x31bf:  pop    %ebp
082f343c +0x31c0:  ret
082f343d +0x31c1:  nop
082f343e +0x31c2:  push   %ebp
082f343f +0x31c3:  mov    %esp,%ebp
082f3441 +0x31c5:  sub    $0x18,%esp
082f3444 +0x31c8:  cmpl   $0x0,0xc(%ebp)
082f3448 +0x31cc:  je     082f3466 <+0x31ea>
082f344a +0x31ce:  mov    0x8(%ebp),%eax
082f344d +0x31d1:  movl   $0x0,0x8(%esp)
082f3455 +0x31d9:  mov    0xc(%ebp),%edx
082f3458 +0x31dc:  mov    %edx,0x4(%esp)
082f345c +0x31e0:  mov    %eax,(%esp)
082f345f +0x31e3:  call   082f4236 <+0x3fba>
082f3464 +0x31e8:  jmp    082f346b <+0x31ef>
082f3466 +0x31ea:  mov    $0x0,%eax
082f346b +0x31ef:  leave
082f346c +0x31f0:  ret
082f346d +0x31f1:  push   %ebp
082f346e +0x31f2:  mov    %esp,%ebp
082f3470 +0x31f4:  sub    $0x28,%esp
082f3473 +0x31f7:  lea    -0x10(%ebp),%eax
082f3476 +0x31fa:  lea    0xc(%ebp),%edx
082f3479 +0x31fd:  mov    %edx,0x4(%esp)
082f347d +0x3201:  mov    %eax,(%esp)
082f3480 +0x3204:  call   082f426e <+0x3ff2>
082f3485 +0x3209:  sub    $0x4,%esp
082f3488 +0x320c:  lea    -0xc(%ebp),%eax
082f348b +0x320f:  lea    0x8(%ebp),%edx
082f348e +0x3212:  mov    %edx,0x4(%esp)
082f3492 +0x3216:  mov    %eax,(%esp)
082f3495 +0x3219:  call   082f426e <+0x3ff2>
082f349a +0x321e:  sub    $0x4,%esp
082f349d +0x3221:  mov    0x14(%ebp),%eax
082f34a0 +0x3224:  mov    %eax,0xc(%esp)
082f34a4 +0x3228:  mov    0x10(%ebp),%eax
082f34a7 +0x322b:  mov    %eax,0x8(%esp)
082f34ab +0x322f:  mov    -0x10(%ebp),%eax
082f34ae +0x3232:  mov    %eax,0x4(%esp)
082f34b2 +0x3236:  mov    -0xc(%ebp),%eax
082f34b5 +0x3239:  mov    %eax,(%esp)
082f34b8 +0x323c:  call   082f4293 <+0x4017>
082f34bd +0x3241:  leave
082f34be +0x3242:  ret
082f34bf +0x3243:  nop
082f34c0 +0x3244:  push   %ebp
082f34c1 +0x3245:  mov    %esp,%ebp
082f34c3 +0x3247:  pop    %ebp
082f34c4 +0x3248:  ret
082f34c5 +0x3249:  nop
082f34c6 +0x324a:  push   %ebp
082f34c7 +0x324b:  mov    %esp,%ebp
082f34c9 +0x324d:  sub    $0x18,%esp
082f34cc +0x3250:  mov    0xc(%ebp),%eax
082f34cf +0x3253:  mov    %eax,(%esp)
082f34d2 +0x3256:  call   082f34c0 <+0x3244>
082f34d7 +0x325b:  leave
082f34d8 +0x325c:  ret
082f34d9 +0x325d:  nop
082f34da +0x325e:  push   %ebp
082f34db +0x325f:  mov    %esp,%ebp
082f34dd +0x3261:  sub    $0x18,%esp
082f34e0 +0x3264:  cmpl   $0x0,0xc(%ebp)
082f34e4 +0x3268:  je     082f34ff <+0x3283>
082f34e6 +0x326a:  mov    0x8(%ebp),%eax
082f34e9 +0x326d:  mov    0x10(%ebp),%edx
082f34ec +0x3270:  mov    %edx,0x8(%esp)
082f34f0 +0x3274:  mov    0xc(%ebp),%edx
082f34f3 +0x3277:  mov    %edx,0x4(%esp)
082f34f7 +0x327b:  mov    %eax,(%esp)
082f34fa +0x327e:  call   082f42b4 <+0x4038>
082f34ff +0x3283:  leave
082f3500 +0x3284:  ret
082f3501 +0x3285:  push   %ebp
082f3502 +0x3286:  mov    %esp,%ebp
082f3504 +0x3288:  mov    0x8(%ebp),%eax
082f3507 +0x328b:  mov    0xc(%ebp),%edx
082f350a +0x328e:  mov    %edx,(%eax)
082f350c +0x3290:  pop    %ebp
082f350d +0x3291:  ret    $0x4
082f3510 +0x3294:  push   %ebp
082f3511 +0x3295:  mov    %esp,%ebp
082f3513 +0x3297:  push   %edi
082f3514 +0x3298:  push   %esi
082f3515 +0x3299:  push   %ebx
082f3516 +0x329a:  sub    $0x2c,%esp
082f3519 +0x329d:  mov    0x8(%ebp),%edi
082f351c +0x32a0:  mov    0x14(%ebp),%eax
082f351f +0x32a3:  mov    %eax,(%esp)
082f3522 +0x32a6:  call   082f42c7 <+0x404b>
082f3527 +0x32ab:  mov    %eax,%esi
082f3529 +0x32ad:  mov    0x10(%ebp),%eax
082f352c +0x32b0:  mov    %eax,(%esp)
082f352f +0x32b3:  call   082f42c7 <+0x404b>
082f3534 +0x32b8:  mov    %eax,%ebx
082f3536 +0x32ba:  mov    0xc(%ebp),%eax
082f3539 +0x32bd:  mov    %eax,(%esp)
082f353c +0x32c0:  call   082f42c7 <+0x404b>
082f3541 +0x32c5:  mov    %esi,0x8(%esp)
082f3545 +0x32c9:  mov    %ebx,0x4(%esp)
082f3549 +0x32cd:  mov    %eax,(%esp)
082f354c +0x32d0:  call   082f42dc <+0x4060>
082f3551 +0x32d5:  mov    %eax,-0x1c(%ebp)
082f3554 +0x32d8:  lea    -0x1c(%ebp),%eax
082f3557 +0x32db:  mov    %eax,0x4(%esp)
082f355b +0x32df:  mov    %edi,(%esp)
082f355e +0x32e2:  call   082f2596 <+0x231a>
082f3563 +0x32e7:  mov    %edi,%eax
082f3565 +0x32e9:  add    $0x2c,%esp
082f3568 +0x32ec:  pop    %ebx
082f3569 +0x32ed:  pop    %esi
082f356a +0x32ee:  pop    %edi
082f356b +0x32ef:  pop    %ebp
082f356c +0x32f0:  ret    $0x4
082f356f +0x32f3:  push   %ebp
082f3570 +0x32f4:  mov    %esp,%ebp
082f3572 +0x32f6:  sub    $0x18,%esp
082f3575 +0x32f9:  mov    0x10(%ebp),%eax
082f3578 +0x32fc:  mov    %eax,0x8(%esp)
082f357c +0x3300:  mov    0xc(%ebp),%eax
082f357f +0x3303:  mov    %eax,0x4(%esp)
082f3583 +0x3307:  mov    0x8(%ebp),%eax
082f3586 +0x330a:  mov    %eax,(%esp)
082f3589 +0x330d:  call   082f4301 <+0x4085>
082f358e +0x3312:  mov    0xc(%ebp),%eax
082f3591 +0x3315:  mov    %eax,0x4(%esp)
082f3595 +0x3319:  mov    0x8(%ebp),%eax
082f3598 +0x331c:  mov    %eax,(%esp)
082f359b +0x331f:  call   082f438a <+0x410e>
082f35a0 +0x3324:  leave
082f35a1 +0x3325:  ret
082f35a2 +0x3326:  push   %ebp
082f35a3 +0x3327:  mov    %esp,%ebp
082f35a5 +0x3329:  push   %ebx
082f35a6 +0x332a:  sub    $0x24,%esp
082f35a9 +0x332d:  mov    0x8(%ebp),%ebx
082f35ac +0x3330:  mov    0xc(%ebp),%eax
082f35af +0x3333:  mov    (%eax),%ecx
082f35b1 +0x3335:  mov    0x10(%ebp),%eax
082f35b4 +0x3338:  mov    (%eax),%eax
082f35b6 +0x333a:  mov    %eax,%edx
082f35b8 +0x333c:  mov    %edx,%eax
082f35ba +0x333e:  add    %eax,%eax
082f35bc +0x3340:  add    %edx,%eax
082f35be +0x3342:  shl    $0x2,%eax
082f35c1 +0x3345:  neg    %eax
082f35c3 +0x3347:  lea    (%ecx,%eax,1),%eax
082f35c6 +0x334a:  mov    %eax,-0xc(%ebp)
082f35c9 +0x334d:  lea    -0xc(%ebp),%eax
082f35cc +0x3350:  mov    %eax,0x4(%esp)
082f35d0 +0x3354:  mov    %ebx,(%esp)
082f35d3 +0x3357:  call   082f2596 <+0x231a>
082f35d8 +0x335c:  mov    %ebx,%eax
082f35da +0x335e:  add    $0x24,%esp
082f35dd +0x3361:  pop    %ebx
082f35de +0x3362:  pop    %ebp
082f35df +0x3363:  ret    $0x4
082f35e2 +0x3366:  push   %ebp
082f35e3 +0x3367:  mov    %esp,%ebp
082f35e5 +0x3369:  sub    $0x18,%esp
082f35e8 +0x336c:  mov    0xc(%ebp),%eax
082f35eb +0x336f:  mov    %eax,0x4(%esp)
082f35ef +0x3373:  mov    0x8(%ebp),%eax
082f35f2 +0x3376:  mov    %eax,(%esp)
082f35f5 +0x3379:  call   082f04ea <+0x26e>
082f35fa +0x337e:  test   %al,%al
082f35fc +0x3380:  je     082f3639 <+0x33bd>
082f35fe +0x3382:  mov    0x10(%ebp),%eax
082f3601 +0x3385:  mov    %eax,0x4(%esp)
082f3605 +0x3389:  mov    0xc(%ebp),%eax
082f3608 +0x338c:  mov    %eax,(%esp)
082f360b +0x338f:  call   082f04ea <+0x26e>
082f3610 +0x3394:  test   %al,%al
082f3612 +0x3396:  je     082f3619 <+0x339d>
082f3614 +0x3398:  mov    0xc(%ebp),%eax
082f3617 +0x339b:  jmp    082f3672 <+0x33f6>
082f3619 +0x339d:  mov    0x10(%ebp),%eax
082f361c +0x33a0:  mov    %eax,0x4(%esp)
082f3620 +0x33a4:  mov    0x8(%ebp),%eax
082f3623 +0x33a7:  mov    %eax,(%esp)
082f3626 +0x33aa:  call   082f04ea <+0x26e>
082f362b +0x33af:  test   %al,%al
082f362d +0x33b1:  je     082f3634 <+0x33b8>
082f362f +0x33b3:  mov    0x10(%ebp),%eax
082f3632 +0x33b6:  jmp    082f3672 <+0x33f6>
082f3634 +0x33b8:  mov    0x8(%ebp),%eax
082f3637 +0x33bb:  jmp    082f3672 <+0x33f6>
082f3639 +0x33bd:  mov    0x10(%ebp),%eax
082f363c +0x33c0:  mov    %eax,0x4(%esp)
082f3640 +0x33c4:  mov    0x8(%ebp),%eax
082f3643 +0x33c7:  mov    %eax,(%esp)
082f3646 +0x33ca:  call   082f04ea <+0x26e>
082f364b +0x33cf:  test   %al,%al
082f364d +0x33d1:  je     082f3654 <+0x33d8>
082f364f +0x33d3:  mov    0x8(%ebp),%eax
082f3652 +0x33d6:  jmp    082f3672 <+0x33f6>
082f3654 +0x33d8:  mov    0x10(%ebp),%eax
082f3657 +0x33db:  mov    %eax,0x4(%esp)
082f365b +0x33df:  mov    0xc(%ebp),%eax
082f365e +0x33e2:  mov    %eax,(%esp)
082f3661 +0x33e5:  call   082f04ea <+0x26e>
082f3666 +0x33ea:  test   %al,%al
082f3668 +0x33ec:  je     082f366f <+0x33f3>
082f366a +0x33ee:  mov    0x10(%ebp),%eax
082f366d +0x33f1:  jmp    082f3672 <+0x33f6>
082f366f +0x33f3:  mov    0xc(%ebp),%eax
082f3672 +0x33f6:  leave
082f3673 +0x33f7:  ret
082f3674 +0x33f8:  push   %ebp
082f3675 +0x33f9:  mov    %esp,%ebp
082f3677 +0x33fb:  push   %ebx
082f3678 +0x33fc:  sub    $0x14,%esp
082f367b +0x33ff:  mov    0x8(%ebp),%ebx
082f367e +0x3402:  jmp    082f368b <+0x340f>
082f3680 +0x3404:  lea    0xc(%ebp),%eax
082f3683 +0x3407:  mov    %eax,(%esp)
082f3686 +0x340a:  call   082f19c2 <+0x1746>
082f368b +0x340f:  lea    0xc(%ebp),%eax
082f368e +0x3412:  mov    %eax,(%esp)
082f3691 +0x3415:  call   082f18d2 <+0x1656>
082f3696 +0x341a:  lea    0x14(%ebp),%edx
082f3699 +0x341d:  mov    %edx,0x4(%esp)
082f369d +0x3421:  mov    %eax,(%esp)
082f36a0 +0x3424:  call   082f04ea <+0x26e>
082f36a5 +0x3429:  test   %al,%al
082f36a7 +0x342b:  jne    082f3680 <+0x3404>
082f36a9 +0x342d:  lea    0x10(%ebp),%eax
082f36ac +0x3430:  mov    %eax,(%esp)
082f36af +0x3433:  call   082f43d4 <+0x4158>
082f36b4 +0x3438:  jmp    082f36c1 <+0x3445>
082f36b6 +0x343a:  lea    0x10(%ebp),%eax
082f36b9 +0x343d:  mov    %eax,(%esp)
082f36bc +0x3440:  call   082f43d4 <+0x4158>
082f36c1 +0x3445:  lea    0x10(%ebp),%eax
082f36c4 +0x3448:  mov    %eax,(%esp)
082f36c7 +0x344b:  call   082f18d2 <+0x1656>
082f36cc +0x3450:  mov    %eax,0x4(%esp)
082f36d0 +0x3454:  lea    0x14(%ebp),%eax
082f36d3 +0x3457:  mov    %eax,(%esp)
082f36d6 +0x345a:  call   082f04ea <+0x26e>
082f36db +0x345f:  test   %al,%al
082f36dd +0x3461:  jne    082f36b6 <+0x343a>
082f36df +0x3463:  lea    0x10(%ebp),%eax
082f36e2 +0x3466:  mov    %eax,0x4(%esp)
082f36e6 +0x346a:  lea    0xc(%ebp),%eax
082f36e9 +0x346d:  mov    %eax,(%esp)
082f36ec +0x3470:  call   082f43e9 <+0x416d>
082f36f1 +0x3475:  xor    $0x1,%eax
082f36f4 +0x3478:  test   %al,%al
082f36f6 +0x347a:  je     082f3707 <+0x348b>
082f36f8 +0x347c:  mov    0xc(%ebp),%eax
082f36fb +0x347f:  mov    %eax,(%ebx)
082f36fd +0x3481:  mov    %ebx,%eax
082f36ff +0x3483:  add    $0x14,%esp
082f3702 +0x3486:  pop    %ebx
082f3703 +0x3487:  pop    %ebp
082f3704 +0x3488:  ret    $0x4
082f3707 +0x348b:  mov    0x10(%ebp),%eax
082f370a +0x348e:  mov    %eax,0x4(%esp)
082f370e +0x3492:  mov    0xc(%ebp),%eax
082f3711 +0x3495:  mov    %eax,(%esp)
082f3714 +0x3498:  call   082f4415 <+0x4199>
082f3719 +0x349d:  lea    0xc(%ebp),%eax
082f371c +0x34a0:  mov    %eax,(%esp)
082f371f +0x34a3:  call   082f19c2 <+0x1746>
082f3724 +0x34a8:  nop
082f3725 +0x34a9:  jmp    082f368b <+0x340f>
082f372a +0x34ae:  push   %ebp
082f372b +0x34af:  mov    %esp,%ebp
082f372d +0x34b1:  sub    $0x38,%esp
082f3730 +0x34b4:  lea    0xc(%ebp),%eax
082f3733 +0x34b7:  mov    %eax,0x4(%esp)
082f3737 +0x34bb:  lea    0x8(%ebp),%eax
082f373a +0x34be:  mov    %eax,(%esp)
082f373d +0x34c1:  call   082f442f <+0x41b3>
082f3742 +0x34c6:  test   %al,%al
082f3744 +0x34c8:  jne    082f3857 <+0x35db>
082f374a +0x34ce:  movl   $0x1,-0x18(%ebp)
082f3751 +0x34d5:  lea    -0x1c(%ebp),%eax
082f3754 +0x34d8:  lea    -0x18(%ebp),%edx
082f3757 +0x34db:  mov    %edx,0x8(%esp)
082f375b +0x34df:  lea    0x8(%ebp),%edx
082f375e +0x34e2:  mov    %edx,0x4(%esp)
082f3762 +0x34e6:  mov    %eax,(%esp)
082f3765 +0x34e9:  call   082f25ae <+0x2332>
082f376a +0x34ee:  sub    $0x4,%esp
082f376d +0x34f1:  jmp    082f383b <+0x35bf>
082f3772 +0x34f6:  lea    -0x1c(%ebp),%eax
082f3775 +0x34f9:  mov    %eax,(%esp)
082f3778 +0x34fc:  call   082f18d2 <+0x1656>
082f377d +0x3501:  mov    (%eax),%edx
082f377f +0x3503:  mov    %edx,-0x28(%ebp)
082f3782 +0x3506:  mov    0x4(%eax),%edx
082f3785 +0x3509:  mov    %edx,-0x24(%ebp)
082f3788 +0x350c:  mov    0x8(%eax),%eax
082f378b +0x350f:  mov    %eax,-0x20(%ebp)
082f378e +0x3512:  lea    0x8(%ebp),%eax
082f3791 +0x3515:  mov    %eax,(%esp)
082f3794 +0x3518:  call   082f18d2 <+0x1656>
082f3799 +0x351d:  mov    %eax,0x4(%esp)
082f379d +0x3521:  lea    -0x28(%ebp),%eax
082f37a0 +0x3524:  mov    %eax,(%esp)
082f37a3 +0x3527:  call   082f04ea <+0x26e>
082f37a8 +0x352c:  test   %al,%al
082f37aa +0x352e:  je     082f3810 <+0x3594>
082f37ac +0x3530:  movl   $0x1,-0xc(%ebp)
082f37b3 +0x3537:  lea    -0x10(%ebp),%eax
082f37b6 +0x353a:  lea    -0xc(%ebp),%edx
082f37b9 +0x353d:  mov    %edx,0x8(%esp)
082f37bd +0x3541:  lea    -0x1c(%ebp),%edx
082f37c0 +0x3544:  mov    %edx,0x4(%esp)
082f37c4 +0x3548:  mov    %eax,(%esp)
082f37c7 +0x354b:  call   082f25ae <+0x2332>
082f37cc +0x3550:  sub    $0x4,%esp
082f37cf +0x3553:  lea    -0x14(%ebp),%eax
082f37d2 +0x3556:  mov    -0x10(%ebp),%edx
082f37d5 +0x3559:  mov    %edx,0xc(%esp)
082f37d9 +0x355d:  mov    -0x1c(%ebp),%edx
082f37dc +0x3560:  mov    %edx,0x8(%esp)
082f37e0 +0x3564:  mov    0x8(%ebp),%edx
082f37e3 +0x3567:  mov    %edx,0x4(%esp)
082f37e7 +0x356b:  mov    %eax,(%esp)
082f37ea +0x356e:  call   082f445b <+0x41df>
082f37ef +0x3573:  sub    $0x4,%esp
082f37f2 +0x3576:  lea    0x8(%ebp),%edx
082f37f5 +0x3579:  mov    %edx,(%esp)
082f37f8 +0x357c:  call   082f18d2 <+0x1656>
082f37fd +0x3581:  mov    -0x28(%ebp),%edx
082f3800 +0x3584:  mov    %edx,(%eax)
082f3802 +0x3586:  mov    -0x24(%ebp),%edx
082f3805 +0x3589:  mov    %edx,0x4(%eax)
082f3808 +0x358c:  mov    -0x20(%ebp),%edx
082f380b +0x358f:  mov    %edx,0x8(%eax)
082f380e +0x3592:  jmp    082f3830 <+0x35b4>
082f3810 +0x3594:  mov    -0x28(%ebp),%eax
082f3813 +0x3597:  mov    %eax,0x4(%esp)
082f3817 +0x359b:  mov    -0x24(%ebp),%eax
082f381a +0x359e:  mov    %eax,0x8(%esp)
082f381e +0x35a2:  mov    -0x20(%ebp),%eax
082f3821 +0x35a5:  mov    %eax,0xc(%esp)
082f3825 +0x35a9:  mov    -0x1c(%ebp),%eax
082f3828 +0x35ac:  mov    %eax,(%esp)
082f382b +0x35af:  call   082f44b8 <+0x423c>
082f3830 +0x35b4:  lea    -0x1c(%ebp),%eax
082f3833 +0x35b7:  mov    %eax,(%esp)
082f3836 +0x35ba:  call   082f19c2 <+0x1746>
082f383b +0x35bf:  lea    0xc(%ebp),%eax
082f383e +0x35c2:  mov    %eax,0x4(%esp)
082f3842 +0x35c6:  lea    -0x1c(%ebp),%eax
082f3845 +0x35c9:  mov    %eax,(%esp)
082f3848 +0x35cc:  call   082f18a6 <+0x162a>
082f384d +0x35d1:  test   %al,%al
082f384f +0x35d3:  jne    082f3772 <+0x34f6>
082f3855 +0x35d9:  jmp    082f3858 <+0x35dc>
082f3857 +0x35db:  nop
082f3858 +0x35dc:  leave
082f3859 +0x35dd:  ret
082f385a +0x35de:  push   %ebp
082f385b +0x35df:  mov    %esp,%ebp
082f385d +0x35e1:  sub    $0x28,%esp
082f3860 +0x35e4:  mov    0x8(%ebp),%eax
082f3863 +0x35e7:  mov    %eax,-0x18(%ebp)
082f3866 +0x35ea:  jmp    082f38af <+0x3633>
082f3868 +0x35ec:  lea    -0x18(%ebp),%eax
082f386b +0x35ef:  mov    %eax,(%esp)
082f386e +0x35f2:  call   082f18d2 <+0x1656>
082f3873 +0x35f7:  mov    (%eax),%edx
082f3875 +0x35f9:  mov    %edx,-0x14(%ebp)
082f3878 +0x35fc:  mov    0x4(%eax),%edx
082f387b +0x35ff:  mov    %edx,-0x10(%ebp)
082f387e +0x3602:  mov    0x8(%eax),%eax
082f3881 +0x3605:  mov    %eax,-0xc(%ebp)
082f3884 +0x3608:  mov    -0x14(%ebp),%eax
082f3887 +0x360b:  mov    %eax,0x4(%esp)
082f388b +0x360f:  mov    -0x10(%ebp),%eax
082f388e +0x3612:  mov    %eax,0x8(%esp)
082f3892 +0x3616:  mov    -0xc(%ebp),%eax
082f3895 +0x3619:  mov    %eax,0xc(%esp)
082f3899 +0x361d:  mov    -0x18(%ebp),%eax
082f389c +0x3620:  mov    %eax,(%esp)
082f389f +0x3623:  call   082f44b8 <+0x423c>
082f38a4 +0x3628:  lea    -0x18(%ebp),%eax
082f38a7 +0x362b:  mov    %eax,(%esp)
082f38aa +0x362e:  call   082f19c2 <+0x1746>
082f38af +0x3633:  lea    0xc(%ebp),%eax
082f38b2 +0x3636:  mov    %eax,0x4(%esp)
082f38b6 +0x363a:  lea    -0x18(%ebp),%eax
082f38b9 +0x363d:  mov    %eax,(%esp)
082f38bc +0x3640:  call   082f18a6 <+0x162a>
082f38c1 +0x3645:  test   %al,%al
082f38c3 +0x3647:  jne    082f3868 <+0x35ec>
082f38c5 +0x3649:  leave
082f38c6 +0x364a:  ret
082f38c7 +0x364b:  nop
082f38c8 +0x364c:  push   %ebp
082f38c9 +0x364d:  mov    %esp,%ebp
082f38cb +0x364f:  sub    $0x18,%esp
082f38ce +0x3652:  mov    0x8(%ebp),%eax
082f38d1 +0x3655:  mov    %eax,(%esp)
082f38d4 +0x3658:  call   082f454c <+0x42d0>
082f38d9 +0x365d:  mov    0x8(%ebp),%eax
082f38dc +0x3660:  movl   $0x0,(%eax)
082f38e2 +0x3666:  mov    0x8(%ebp),%eax
082f38e5 +0x3669:  movl   $0x0,0x4(%eax)
082f38ec +0x3670:  mov    0x8(%ebp),%eax
082f38ef +0x3673:  movl   $0x0,0x8(%eax)
082f38f6 +0x367a:  leave
082f38f7 +0x367b:  ret
082f38f8 +0x367c:  push   %ebp
082f38f9 +0x367d:  mov    %esp,%ebp
082f38fb +0x367f:  sub    $0x18,%esp
082f38fe +0x3682:  mov    0x8(%ebp),%eax
082f3901 +0x3685:  mov    %eax,(%esp)
082f3904 +0x3688:  call   082f4560 <+0x42e4>
082f3909 +0x368d:  leave
082f390a +0x368e:  ret
082f390b +0x368f:  push   %ebp
082f390c +0x3690:  mov    %esp,%ebp
082f390e +0x3692:  sub    $0x18,%esp
082f3911 +0x3695:  mov    0xc(%ebp),%eax
082f3914 +0x3698:  mov    %eax,0x4(%esp)
082f3918 +0x369c:  mov    0x8(%ebp),%eax
082f391b +0x369f:  mov    %eax,(%esp)
082f391e +0x36a2:  call   082f4565 <+0x42e9>
082f3923 +0x36a7:  leave
082f3924 +0x36a8:  ret
082f3925 +0x36a9:  nop
082f3926 +0x36aa:  push   %ebp
082f3927 +0x36ab:  mov    %esp,%ebp
082f3929 +0x36ad:  sub    $0x18,%esp
082f392c +0x36b0:  mov    0x8(%ebp),%eax
082f392f +0x36b3:  mov    %eax,(%esp)
082f3932 +0x36b6:  call   082f456a <+0x42ee>
082f3937 +0x36bb:  mov    0x8(%ebp),%eax
082f393a +0x36be:  movl   $0x0,(%eax)
082f3940 +0x36c4:  mov    0x8(%ebp),%eax
082f3943 +0x36c7:  movl   $0x0,0x4(%eax)
082f394a +0x36ce:  mov    0x8(%ebp),%eax
082f394d +0x36d1:  movl   $0x0,0x8(%eax)
082f3954 +0x36d8:  leave
082f3955 +0x36d9:  ret
082f3956 +0x36da:  push   %ebp
082f3957 +0x36db:  mov    %esp,%ebp
082f3959 +0x36dd:  sub    $0x18,%esp
082f395c +0x36e0:  mov    0x8(%ebp),%eax
082f395f +0x36e3:  mov    %eax,(%esp)
082f3962 +0x36e6:  call   082f457e <+0x4302>
082f3967 +0x36eb:  leave
082f3968 +0x36ec:  ret
082f3969 +0x36ed:  push   %ebp
082f396a +0x36ee:  mov    %esp,%ebp
082f396c +0x36f0:  sub    $0x18,%esp
082f396f +0x36f3:  mov    0xc(%ebp),%eax
082f3972 +0x36f6:  mov    %eax,0x4(%esp)
082f3976 +0x36fa:  mov    0x8(%ebp),%eax
082f3979 +0x36fd:  mov    %eax,(%esp)
082f397c +0x3700:  call   082f4583 <+0x4307>
082f3981 +0x3705:  leave
082f3982 +0x3706:  ret
082f3983 +0x3707:  nop
082f3984 +0x3708:  push   %ebp
082f3985 +0x3709:  mov    %esp,%ebp
082f3987 +0x370b:  sub    $0x18,%esp
082f398a +0x370e:  mov    0x8(%ebp),%eax
082f398d +0x3711:  mov    %eax,(%esp)
082f3990 +0x3714:  call   082d12ee <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x231e9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x231e9
082f3995 +0x3719:  mov    0x8(%ebp),%eax
082f3998 +0x371c:  movl   $0x0,(%eax)
082f399e +0x3722:  mov    0x8(%ebp),%eax
082f39a1 +0x3725:  movl   $0x0,0x4(%eax)
082f39a8 +0x372c:  mov    0x8(%ebp),%eax
082f39ab +0x372f:  movl   $0x0,0x8(%eax)
082f39b2 +0x3736:  leave
082f39b3 +0x3737:  ret
082f39b4 +0x3738:  push   %ebp
082f39b5 +0x3739:  mov    %esp,%ebp
082f39b7 +0x373b:  sub    $0x18,%esp
082f39ba +0x373e:  cmpl   $0x0,0xc(%ebp)
082f39be +0x3742:  je     082f39d9 <+0x375d>
082f39c0 +0x3744:  mov    0x8(%ebp),%eax
082f39c3 +0x3747:  mov    0x10(%ebp),%edx
082f39c6 +0x374a:  mov    %edx,0x8(%esp)
082f39ca +0x374e:  mov    0xc(%ebp),%edx
082f39cd +0x3751:  mov    %edx,0x4(%esp)
082f39d1 +0x3755:  mov    %eax,(%esp)
082f39d4 +0x3758:  call   082db6e4 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x55db>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x55db
082f39d9 +0x375d:  leave
082f39da +0x375e:  ret
082f39db +0x375f:  push   %ebp
082f39dc +0x3760:  mov    %esp,%ebp
082f39de +0x3762:  sub    $0x18,%esp
082f39e1 +0x3765:  mov    0xc(%ebp),%eax
082f39e4 +0x3768:  mov    %eax,0x4(%esp)
082f39e8 +0x376c:  mov    0x8(%ebp),%eax
082f39eb +0x376f:  mov    %eax,(%esp)
082f39ee +0x3772:  call   082f4588 <+0x430c>
082f39f3 +0x3777:  leave
082f39f4 +0x3778:  ret
082f39f5 +0x3779:  nop
082f39f6 +0x377a:  push   %ebp
082f39f7 +0x377b:  mov    %esp,%ebp
082f39f9 +0x377d:  mov    0xc(%ebp),%edx
082f39fc +0x3780:  mov    0x8(%ebp),%eax
082f39ff +0x3783:  mov    %edx,(%eax)
082f3a01 +0x3785:  pop    %ebp
082f3a02 +0x3786:  ret
082f3a03 +0x3787:  nop
082f3a04 +0x3788:  push   %ebp
082f3a05 +0x3789:  mov    %esp,%ebp
082f3a07 +0x378b:  mov    0x8(%ebp),%eax
082f3a0a +0x378e:  add    $0x4,%eax
082f3a0d +0x3791:  pop    %ebp
082f3a0e +0x3792:  ret
082f3a0f +0x3793:  nop
082f3a10 +0x3794:  push   %ebp
082f3a11 +0x3795:  mov    %esp,%ebp
082f3a13 +0x3797:  push   %ebx
082f3a14 +0x3798:  sub    $0x14,%esp
082f3a17 +0x379b:  mov    0x8(%ebp),%ebx
082f3a1a +0x379e:  jmp    082f3a68 <+0x37ec>
082f3a1c +0x37a0:  mov    0x10(%ebp),%eax
082f3a1f +0x37a3:  mov    %eax,(%esp)
082f3a22 +0x37a6:  call   082f3ab6 <+0x383a>
082f3a27 +0x37ab:  mov    0xc(%ebp),%edx
082f3a2a +0x37ae:  mov    0x18(%ebp),%ecx
082f3a2d +0x37b1:  mov    %ecx,0x8(%esp)
082f3a31 +0x37b5:  mov    %eax,0x4(%esp)
082f3a35 +0x37b9:  mov    %edx,(%esp)
082f3a38 +0x37bc:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
082f3a3d +0x37c1:  xor    $0x1,%eax
082f3a40 +0x37c4:  test   %al,%al
082f3a42 +0x37c6:  je     082f3a5a <+0x37de>
082f3a44 +0x37c8:  mov    0x10(%ebp),%eax
082f3a47 +0x37cb:  mov    %eax,0x14(%ebp)
082f3a4a +0x37ce:  mov    0x10(%ebp),%eax
082f3a4d +0x37d1:  mov    %eax,(%esp)
082f3a50 +0x37d4:  call   0823c886 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x7a04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x7a04
082f3a55 +0x37d9:  mov    %eax,0x10(%ebp)
082f3a58 +0x37dc:  jmp    082f3a68 <+0x37ec>
082f3a5a +0x37de:  mov    0x10(%ebp),%eax
082f3a5d +0x37e1:  mov    %eax,(%esp)
082f3a60 +0x37e4:  call   0823c87b <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x79f9>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x79f9
082f3a65 +0x37e9:  mov    %eax,0x10(%ebp)
082f3a68 +0x37ec:  cmpl   $0x0,0x10(%ebp)
082f3a6c +0x37f0:  setne  %al
082f3a6f +0x37f3:  test   %al,%al
082f3a71 +0x37f5:  jne    082f3a1c <+0x37a0>
082f3a73 +0x37f7:  mov    0x14(%ebp),%eax
082f3a76 +0x37fa:  mov    %eax,0x4(%esp)
082f3a7a +0x37fe:  mov    %ebx,(%esp)
082f3a7d +0x3801:  call   082f39f6 <+0x377a>
082f3a82 +0x3806:  mov    %ebx,%eax
082f3a84 +0x3808:  add    $0x14,%esp
082f3a87 +0x380b:  pop    %ebx
082f3a88 +0x380c:  pop    %ebp
082f3a89 +0x380d:  ret    $0x4
082f3a8c +0x3810:  push   %ebp
082f3a8d +0x3811:  mov    %esp,%ebp
082f3a8f +0x3813:  sub    $0x28,%esp
082f3a92 +0x3816:  mov    0x8(%ebp),%eax
082f3a95 +0x3819:  mov    %eax,(%esp)
082f3a98 +0x381c:  call   082f458d <+0x4311>
082f3a9d +0x3821:  mov    %eax,0x4(%esp)
082f3aa1 +0x3825:  lea    -0x9(%ebp),%eax
082f3aa4 +0x3828:  mov    %eax,(%esp)
082f3aa7 +0x382b:  call   082f3aae <+0x3832>
082f3aac +0x3830:  leave
082f3aad +0x3831:  ret
082f3aae +0x3832:  push   %ebp
082f3aaf +0x3833:  mov    %esp,%ebp
082f3ab1 +0x3835:  mov    0xc(%ebp),%eax
082f3ab4 +0x3838:  pop    %ebp
082f3ab5 +0x3839:  ret
082f3ab6 +0x383a:  push   %ebp
082f3ab7 +0x383b:  mov    %esp,%ebp
082f3ab9 +0x383d:  sub    $0x28,%esp
082f3abc +0x3840:  mov    0x8(%ebp),%eax
082f3abf +0x3843:  mov    %eax,(%esp)
082f3ac2 +0x3846:  call   082f4598 <+0x431c>
082f3ac7 +0x384b:  mov    %eax,0x4(%esp)
082f3acb +0x384f:  lea    -0x9(%ebp),%eax
082f3ace +0x3852:  mov    %eax,(%esp)
082f3ad1 +0x3855:  call   082f3aae <+0x3832>
082f3ad6 +0x385a:  leave
082f3ad7 +0x385b:  ret
082f3ad8 +0x385c:  push   %ebp
082f3ad9 +0x385d:  mov    %esp,%ebp
082f3adb +0x385f:  push   %esi
082f3adc +0x3860:  push   %ebx
082f3add +0x3861:  sub    $0x20,%esp
082f3ae0 +0x3864:  mov    0x8(%ebp),%esi
082f3ae3 +0x3867:  cmpl   $0x0,0x10(%ebp)
082f3ae7 +0x386b:  jne    082f3b2f <+0x38b3>
082f3ae9 +0x386d:  mov    0xc(%ebp),%eax
082f3aec +0x3870:  mov    %eax,(%esp)
082f3aef +0x3873:  call   082f3a04 <+0x3788>
082f3af4 +0x3878:  cmp    0x14(%ebp),%eax
082f3af7 +0x387b:  je     082f3b2f <+0x38b3>
082f3af9 +0x387d:  mov    0x14(%ebp),%eax
082f3afc +0x3880:  mov    %eax,(%esp)
082f3aff +0x3883:  call   082f3a8c <+0x3810>
082f3b04 +0x3888:  mov    %eax,%ebx
082f3b06 +0x388a:  mov    0x18(%ebp),%eax
082f3b09 +0x388d:  mov    %eax,0x4(%esp)
082f3b0d +0x3891:  lea    -0xe(%ebp),%eax
082f3b10 +0x3894:  mov    %eax,(%esp)
082f3b13 +0x3897:  call   082f3aae <+0x3832>
082f3b18 +0x389c:  mov    0xc(%ebp),%edx
082f3b1b +0x389f:  mov    %ebx,0x8(%esp)
082f3b1f +0x38a3:  mov    %eax,0x4(%esp)
082f3b23 +0x38a7:  mov    %edx,(%esp)
082f3b26 +0x38aa:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
082f3b2b +0x38af:  test   %al,%al
082f3b2d +0x38b1:  je     082f3b36 <+0x38ba>
082f3b2f +0x38b3:  mov    $0x1,%eax
082f3b34 +0x38b8:  jmp    082f3b3b <+0x38bf>
082f3b36 +0x38ba:  mov    $0x0,%eax
082f3b3b +0x38bf:  mov    %al,-0xd(%ebp)
082f3b3e +0x38c2:  mov    0x18(%ebp),%eax
082f3b41 +0x38c5:  mov    %eax,0x4(%esp)
082f3b45 +0x38c9:  mov    0xc(%ebp),%eax
082f3b48 +0x38cc:  mov    %eax,(%esp)
082f3b4b +0x38cf:  call   082f45a4 <+0x4328>
082f3b50 +0x38d4:  mov    %eax,-0xc(%ebp)
082f3b53 +0x38d7:  mov    0xc(%ebp),%eax
082f3b56 +0x38da:  lea    0x4(%eax),%ecx
082f3b59 +0x38dd:  mov    -0xc(%ebp),%edx
082f3b5c +0x38e0:  movzbl -0xd(%ebp),%eax
082f3b60 +0x38e4:  mov    %ecx,0xc(%esp)
082f3b64 +0x38e8:  mov    0x14(%ebp),%ecx
082f3b67 +0x38eb:  mov    %ecx,0x8(%esp)
082f3b6b +0x38ef:  mov    %edx,0x4(%esp)
082f3b6f +0x38f3:  mov    %eax,(%esp)
082f3b72 +0x38f6:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
082f3b77 +0x38fb:  mov    0xc(%ebp),%eax
082f3b7a +0x38fe:  mov    0x14(%eax),%eax
082f3b7d +0x3901:  lea    0x1(%eax),%edx
082f3b80 +0x3904:  mov    0xc(%ebp),%eax
082f3b83 +0x3907:  mov    %edx,0x14(%eax)
082f3b86 +0x390a:  mov    -0xc(%ebp),%eax
082f3b89 +0x390d:  mov    %eax,0x4(%esp)
082f3b8d +0x3911:  mov    %esi,(%esp)
082f3b90 +0x3914:  call   082f39f6 <+0x377a>
082f3b95 +0x3919:  mov    %esi,%eax
082f3b97 +0x391b:  add    $0x20,%esp
082f3b9a +0x391e:  pop    %ebx
082f3b9b +0x391f:  pop    %esi
082f3b9c +0x3920:  pop    %ebp
082f3b9d +0x3921:  ret    $0x4
082f3ba0 +0x3924:  push   %ebp
082f3ba1 +0x3925:  mov    %esp,%ebp
082f3ba3 +0x3927:  sub    $0x18,%esp
082f3ba6 +0x392a:  mov    0xc(%ebp),%eax
082f3ba9 +0x392d:  mov    %eax,(%esp)
082f3bac +0x3930:  call   082f4625 <+0x43a9>
082f3bb1 +0x3935:  mov    0x8(%ebp),%edx
082f3bb4 +0x3938:  mov    (%eax),%eax
082f3bb6 +0x393a:  mov    %eax,(%edx)
082f3bb8 +0x393c:  mov    0x10(%ebp),%eax
082f3bbb +0x393f:  mov    %eax,(%esp)
082f3bbe +0x3942:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
082f3bc3 +0x3947:  movzbl (%eax),%edx
082f3bc6 +0x394a:  mov    0x8(%ebp),%eax
082f3bc9 +0x394d:  mov    %dl,0x4(%eax)
082f3bcc +0x3950:  leave
082f3bcd +0x3951:  ret
082f3bce +0x3952:  push   %ebp
082f3bcf +0x3953:  mov    %esp,%ebp
082f3bd1 +0x3955:  sub    $0x18,%esp
082f3bd4 +0x3958:  mov    0x8(%ebp),%eax
082f3bd7 +0x395b:  mov    (%eax),%eax
082f3bd9 +0x395d:  mov    %eax,(%esp)
082f3bdc +0x3960:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
082f3be1 +0x3965:  mov    0x8(%ebp),%edx
082f3be4 +0x3968:  mov    %eax,(%edx)
082f3be6 +0x396a:  mov    0x8(%ebp),%eax
082f3be9 +0x396d:  leave
082f3bea +0x396e:  ret
082f3beb +0x396f:  nop
082f3bec +0x3970:  push   %ebp
082f3bed +0x3971:  mov    %esp,%ebp
082f3bef +0x3973:  sub    $0x18,%esp
082f3bf2 +0x3976:  mov    0xc(%ebp),%eax
082f3bf5 +0x3979:  mov    %eax,(%esp)
082f3bf8 +0x397c:  call   082f462d <+0x43b1>
082f3bfd +0x3981:  mov    0x8(%ebp),%edx
082f3c00 +0x3984:  mov    (%eax),%eax
082f3c02 +0x3986:  mov    %eax,(%edx)
082f3c04 +0x3988:  mov    0x10(%ebp),%eax
082f3c07 +0x398b:  mov    %eax,(%esp)
082f3c0a +0x398e:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
082f3c0f +0x3993:  movzbl (%eax),%edx
082f3c12 +0x3996:  mov    0x8(%ebp),%eax
082f3c15 +0x3999:  mov    %dl,0x4(%eax)
082f3c18 +0x399c:  leave
082f3c19 +0x399d:  ret
082f3c1a +0x399e:  push   %ebp
082f3c1b +0x399f:  mov    %esp,%ebp
082f3c1d +0x39a1:  mov    0x8(%ebp),%eax
082f3c20 +0x39a4:  mov    (%eax),%edx
082f3c22 +0x39a6:  mov    0xc(%ebp),%eax
082f3c25 +0x39a9:  mov    (%eax),%eax
082f3c27 +0x39ab:  cmp    %eax,%edx
082f3c29 +0x39ad:  sete   %al
082f3c2c +0x39b0:  pop    %ebp
082f3c2d +0x39b1:  ret
082f3c2e +0x39b2:  push   %ebp
082f3c2f +0x39b3:  mov    %esp,%ebp
082f3c31 +0x39b5:  mov    0x8(%ebp),%eax
082f3c34 +0x39b8:  mov    (%eax),%eax
082f3c36 +0x39ba:  pop    %ebp
082f3c37 +0x39bb:  ret
082f3c38 +0x39bc:  push   %ebp
082f3c39 +0x39bd:  mov    %esp,%ebp
082f3c3b +0x39bf:  pop    %ebp
082f3c3c +0x39c0:  ret
082f3c3d +0x39c1:  nop
082f3c3e +0x39c2:  push   %ebp
082f3c3f +0x39c3:  mov    %esp,%ebp
082f3c41 +0x39c5:  sub    $0x18,%esp
082f3c44 +0x39c8:  mov    0x8(%ebp),%eax
082f3c47 +0x39cb:  mov    0x8(%eax),%edx
082f3c4a +0x39ce:  mov    0x8(%ebp),%eax
082f3c4d +0x39d1:  mov    %edx,0x4(%esp)
082f3c51 +0x39d5:  mov    %eax,(%esp)
082f3c54 +0x39d8:  call   082f3c38 <+0x39bc>
082f3c59 +0x39dd:  mov    0x8(%ebp),%eax
082f3c5c +0x39e0:  mov    0xc(%eax),%edx
082f3c5f +0x39e3:  mov    0x8(%ebp),%eax
082f3c62 +0x39e6:  mov    %edx,0x4(%esp)
082f3c66 +0x39ea:  mov    %eax,(%esp)
082f3c69 +0x39ed:  call   082f464a <+0x43ce>
082f3c6e +0x39f2:  mov    0x8(%ebp),%eax
082f3c71 +0x39f5:  mov    0x14(%eax),%eax
082f3c74 +0x39f8:  lea    0x4(%eax),%edx
082f3c77 +0x39fb:  mov    0x8(%ebp),%eax
082f3c7a +0x39fe:  add    $0x8,%eax
082f3c7d +0x3a01:  mov    %edx,0x4(%esp)
082f3c81 +0x3a05:  mov    %eax,(%esp)
082f3c84 +0x3a08:  call   082f4674 <+0x43f8>
082f3c89 +0x3a0d:  mov    0x8(%ebp),%eax
082f3c8c +0x3a10:  mov    0xc(%eax),%edx
082f3c8f +0x3a13:  mov    0x8(%ebp),%eax
082f3c92 +0x3a16:  mov    %edx,0x8(%eax)
082f3c95 +0x3a19:  leave
082f3c96 +0x3a1a:  ret
082f3c97 +0x3a1b:  nop
082f3c98 +0x3a1c:  push   %ebp
082f3c99 +0x3a1d:  mov    %esp,%ebp
082f3c9b +0x3a1f:  sub    $0x18,%esp
082f3c9e +0x3a22:  mov    0xc(%ebp),%eax
082f3ca1 +0x3a25:  mov    %eax,0x4(%esp)
082f3ca5 +0x3a29:  movl   $0x4,(%esp)
082f3cac +0x3a30:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f3cb1 +0x3a35:  mov    %eax,%edx
082f3cb3 +0x3a37:  test   %edx,%edx
082f3cb5 +0x3a39:  je     082f3cbe <+0x3a42>
082f3cb7 +0x3a3b:  mov    0x10(%ebp),%edx
082f3cba +0x3a3e:  mov    (%edx),%edx
082f3cbc +0x3a40:  mov    %edx,(%eax)
082f3cbe +0x3a42:  leave
082f3cbf +0x3a43:  ret
082f3cc0 +0x3a44:  push   %ebp
082f3cc1 +0x3a45:  mov    %esp,%ebp
082f3cc3 +0x3a47:  push   %ebx
082f3cc4 +0x3a48:  sub    $0x14,%esp
082f3cc7 +0x3a4b:  movl   $0x1,0x4(%esp)
082f3ccf +0x3a53:  mov    0x8(%ebp),%eax
082f3cd2 +0x3a56:  mov    %eax,(%esp)
082f3cd5 +0x3a59:  call   082f46ac <+0x4430>
082f3cda +0x3a5e:  mov    0x8(%ebp),%eax
082f3cdd +0x3a61:  mov    0x24(%eax),%eax
082f3ce0 +0x3a64:  lea    0x4(%eax),%ebx
082f3ce3 +0x3a67:  mov    0x8(%ebp),%eax
082f3ce6 +0x3a6a:  mov    %eax,(%esp)
082f3ce9 +0x3a6d:  call   082f4702 <+0x4486>
082f3cee +0x3a72:  mov    %eax,(%ebx)
082f3cf0 +0x3a74:  mov    0xc(%ebp),%eax
082f3cf3 +0x3a77:  mov    %eax,(%esp)
082f3cf6 +0x3a7a:  call   082f472d <+0x44b1>
082f3cfb +0x3a7f:  mov    0x8(%ebp),%edx
082f3cfe +0x3a82:  mov    0x18(%edx),%ecx
082f3d01 +0x3a85:  mov    0x8(%ebp),%edx
082f3d04 +0x3a88:  mov    %eax,0x8(%esp)
082f3d08 +0x3a8c:  mov    %ecx,0x4(%esp)
082f3d0c +0x3a90:  mov    %edx,(%esp)
082f3d0f +0x3a93:  call   082f3c98 <+0x3a1c>
082f3d14 +0x3a98:  mov    0x8(%ebp),%eax
082f3d17 +0x3a9b:  mov    0x24(%eax),%eax
082f3d1a +0x3a9e:  lea    0x4(%eax),%edx
082f3d1d +0x3aa1:  mov    0x8(%ebp),%eax
082f3d20 +0x3aa4:  add    $0x18,%eax
082f3d23 +0x3aa7:  mov    %edx,0x4(%esp)
082f3d27 +0x3aab:  mov    %eax,(%esp)
082f3d2a +0x3aae:  call   082f4674 <+0x43f8>
082f3d2f +0x3ab3:  mov    0x8(%ebp),%eax
082f3d32 +0x3ab6:  mov    0x1c(%eax),%edx
082f3d35 +0x3ab9:  mov    0x8(%ebp),%eax
082f3d38 +0x3abc:  mov    %edx,0x18(%eax)
082f3d3b +0x3abf:  add    $0x14,%esp
082f3d3e +0x3ac2:  pop    %ebx
082f3d3f +0x3ac3:  pop    %ebp
082f3d40 +0x3ac4:  ret
082f3d41 +0x3ac5:  nop
082f3d42 +0x3ac6:  push   %ebp
082f3d43 +0x3ac7:  mov    %esp,%ebp
082f3d45 +0x3ac9:  sub    $0x18,%esp
082f3d48 +0x3acc:  mov    0x8(%ebp),%eax
082f3d4b +0x3acf:  mov    %eax,(%esp)
082f3d4e +0x3ad2:  call   082f4736 <+0x44ba>
082f3d53 +0x3ad7:  leave
082f3d54 +0x3ad8:  ret
082f3d55 +0x3ad9:  nop
082f3d56 +0x3ada:  push   %ebp
082f3d57 +0x3adb:  mov    %esp,%ebp
082f3d59 +0x3add:  sub    $0x28,%esp
082f3d5c +0x3ae0:  mov    0xc(%ebp),%eax
082f3d5f +0x3ae3:  mov    %eax,-0xc(%ebp)
082f3d62 +0x3ae6:  jmp    082f3d7c <+0x3b00>
082f3d64 +0x3ae8:  mov    -0xc(%ebp),%eax
082f3d67 +0x3aeb:  mov    (%eax),%eax
082f3d69 +0x3aed:  mov    %eax,0x4(%esp)
082f3d6d +0x3af1:  mov    0x8(%ebp),%eax
082f3d70 +0x3af4:  mov    %eax,(%esp)
082f3d73 +0x3af7:  call   082f464a <+0x43ce>
082f3d78 +0x3afc:  addl   $0x4,-0xc(%ebp)
082f3d7c +0x3b00:  mov    -0xc(%ebp),%eax
082f3d7f +0x3b03:  cmp    0x10(%ebp),%eax
082f3d82 +0x3b06:  setb   %al
082f3d85 +0x3b09:  test   %al,%al
082f3d87 +0x3b0b:  jne    082f3d64 <+0x3ae8>
082f3d89 +0x3b0d:  leave
082f3d8a +0x3b0e:  ret
082f3d8b +0x3b0f:  nop
082f3d8c +0x3b10:  push   %ebp
082f3d8d +0x3b11:  mov    %esp,%ebp
082f3d8f +0x3b13:  sub    $0x28,%esp
082f3d92 +0x3b16:  lea    -0x9(%ebp),%eax
082f3d95 +0x3b19:  mov    0x8(%ebp),%edx
082f3d98 +0x3b1c:  mov    %edx,0x4(%esp)
082f3d9c +0x3b20:  mov    %eax,(%esp)
082f3d9f +0x3b23:  call   082f473c <+0x44c0>
082f3da4 +0x3b28:  sub    $0x4,%esp
082f3da7 +0x3b2b:  lea    -0x9(%ebp),%eax
082f3daa +0x3b2e:  mov    0x10(%ebp),%edx
082f3dad +0x3b31:  mov    %edx,0x8(%esp)
082f3db1 +0x3b35:  mov    0xc(%ebp),%edx
082f3db4 +0x3b38:  mov    %edx,0x4(%esp)
082f3db8 +0x3b3c:  mov    %eax,(%esp)
082f3dbb +0x3b3f:  call   082f4782 <+0x4506>
082f3dc0 +0x3b44:  lea    -0x9(%ebp),%eax
082f3dc3 +0x3b47:  mov    %eax,(%esp)
082f3dc6 +0x3b4a:  call   082f476e <+0x44f2>
082f3dcb +0x3b4f:  leave
082f3dcc +0x3b50:  ret
082f3dcd +0x3b51:  nop
082f3dce +0x3b52:  push   %ebp
082f3dcf +0x3b53:  mov    %esp,%ebp
082f3dd1 +0x3b55:  sub    $0x18,%esp
082f3dd4 +0x3b58:  mov    0x8(%ebp),%eax
082f3dd7 +0x3b5b:  mov    %eax,(%esp)
082f3dda +0x3b5e:  call   082f4796 <+0x451a>
082f3ddf +0x3b63:  mov    0x8(%ebp),%eax
082f3de2 +0x3b66:  movl   $0x0,(%eax)
082f3de8 +0x3b6c:  mov    0x8(%ebp),%eax
082f3deb +0x3b6f:  movl   $0x0,0x4(%eax)
082f3df2 +0x3b76:  mov    0x8(%ebp),%eax
082f3df5 +0x3b79:  add    $0x8,%eax
082f3df8 +0x3b7c:  mov    %eax,(%esp)
082f3dfb +0x3b7f:  call   082f47aa <+0x452e>
082f3e00 +0x3b84:  mov    0x8(%ebp),%eax
082f3e03 +0x3b87:  add    $0x18,%eax
082f3e06 +0x3b8a:  mov    %eax,(%esp)
082f3e09 +0x3b8d:  call   082f47aa <+0x452e>
082f3e0e +0x3b92:  leave
082f3e0f +0x3b93:  ret
082f3e10 +0x3b94:  push   %ebp
082f3e11 +0x3b95:  mov    %esp,%ebp
082f3e13 +0x3b97:  push   %esi
082f3e14 +0x3b98:  push   %ebx
082f3e15 +0x3b99:  sub    $0x40,%esp
082f3e18 +0x3b9c:  movl   $0x4,(%esp)
082f3e1f +0x3ba3:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
082f3e24 +0x3ba8:  mov    %eax,-0x2c(%ebp)
082f3e27 +0x3bab:  mov    0xc(%ebp),%eax
082f3e2a +0x3bae:  mov    $0x0,%edx
082f3e2f +0x3bb3:  divl   -0x2c(%ebp)
082f3e32 +0x3bb6:  add    $0x1,%eax
082f3e35 +0x3bb9:  mov    %eax,-0x14(%ebp)
082f3e38 +0x3bbc:  mov    -0x14(%ebp),%eax
082f3e3b +0x3bbf:  add    $0x2,%eax
082f3e3e +0x3bc2:  mov    %eax,-0x1c(%ebp)
082f3e41 +0x3bc5:  movl   $0x8,-0x18(%ebp)
082f3e48 +0x3bcc:  lea    -0x1c(%ebp),%eax
082f3e4b +0x3bcf:  mov    %eax,0x4(%esp)
082f3e4f +0x3bd3:  lea    -0x18(%ebp),%eax
082f3e52 +0x3bd6:  mov    %eax,(%esp)
082f3e55 +0x3bd9:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
082f3e5a +0x3bde:  mov    (%eax),%edx
082f3e5c +0x3be0:  mov    0x8(%ebp),%eax
082f3e5f +0x3be3:  mov    %edx,0x4(%eax)
082f3e62 +0x3be6:  mov    0x8(%ebp),%eax
082f3e65 +0x3be9:  mov    0x4(%eax),%eax
082f3e68 +0x3bec:  mov    %eax,0x4(%esp)
082f3e6c +0x3bf0:  mov    0x8(%ebp),%eax
082f3e6f +0x3bf3:  mov    %eax,(%esp)
082f3e72 +0x3bf6:  call   082f47d6 <+0x455a>
082f3e77 +0x3bfb:  mov    0x8(%ebp),%edx
082f3e7a +0x3bfe:  mov    %eax,(%edx)
082f3e7c +0x3c00:  mov    0x8(%ebp),%eax
082f3e7f +0x3c03:  mov    (%eax),%edx
082f3e81 +0x3c05:  mov    0x8(%ebp),%eax
082f3e84 +0x3c08:  mov    0x4(%eax),%eax
082f3e87 +0x3c0b:  sub    -0x14(%ebp),%eax
082f3e8a +0x3c0e:  shr    %eax
082f3e8c +0x3c10:  shl    $0x2,%eax
082f3e8f +0x3c13:  lea    (%edx,%eax,1),%eax
082f3e92 +0x3c16:  mov    %eax,-0x10(%ebp)
082f3e95 +0x3c19:  mov    -0x14(%ebp),%eax
082f3e98 +0x3c1c:  shl    $0x2,%eax
082f3e9b +0x3c1f:  add    -0x10(%ebp),%eax
082f3e9e +0x3c22:  mov    %eax,-0xc(%ebp)
082f3ea1 +0x3c25:  mov    -0xc(%ebp),%eax
082f3ea4 +0x3c28:  mov    %eax,0x8(%esp)
082f3ea8 +0x3c2c:  mov    -0x10(%ebp),%eax
082f3eab +0x3c2f:  mov    %eax,0x4(%esp)
082f3eaf +0x3c33:  mov    0x8(%ebp),%eax
082f3eb2 +0x3c36:  mov    %eax,(%esp)
082f3eb5 +0x3c39:  call   082f4842 <+0x45c6>
082f3eba +0x3c3e:  jmp    082f3f0f <+0x3c93>
082f3ebc +0x3c40:  mov    %eax,(%esp)
082f3ebf +0x3c43:  call   08725ce0 <__cxa_begin_catch>
082f3ec4 +0x3c48:  mov    0x8(%ebp),%eax
082f3ec7 +0x3c4b:  mov    0x4(%eax),%edx
082f3eca +0x3c4e:  mov    0x8(%ebp),%eax
082f3ecd +0x3c51:  mov    (%eax),%eax
082f3ecf +0x3c53:  mov    %edx,0x8(%esp)
082f3ed3 +0x3c57:  mov    %eax,0x4(%esp)
082f3ed7 +0x3c5b:  mov    0x8(%ebp),%eax
082f3eda +0x3c5e:  mov    %eax,(%esp)
082f3edd +0x3c61:  call   082f3d8c <+0x3b10>
082f3ee2 +0x3c66:  mov    0x8(%ebp),%eax
082f3ee5 +0x3c69:  movl   $0x0,(%eax)
082f3eeb +0x3c6f:  mov    0x8(%ebp),%eax
082f3eee +0x3c72:  movl   $0x0,0x4(%eax)
082f3ef5 +0x3c79:  call   08724be0 <__cxa_rethrow>
082f3efa +0x3c7e:  mov    %edx,%ebx
082f3efc +0x3c80:  mov    %eax,%esi
082f3efe +0x3c82:  call   08725c30 <__cxa_end_catch>
082f3f03 +0x3c87:  mov    %esi,%eax
082f3f05 +0x3c89:  mov    %ebx,%edx
082f3f07 +0x3c8b:  mov    %eax,(%esp)
082f3f0a +0x3c8e:  call   08ae3750 <_Unwind_Resume>
082f3f0f +0x3c93:  mov    0x8(%ebp),%eax
082f3f12 +0x3c96:  lea    0x8(%eax),%edx
082f3f15 +0x3c99:  mov    -0x10(%ebp),%eax
082f3f18 +0x3c9c:  mov    %eax,0x4(%esp)
082f3f1c +0x3ca0:  mov    %edx,(%esp)
082f3f1f +0x3ca3:  call   082f4674 <+0x43f8>
082f3f24 +0x3ca8:  mov    -0xc(%ebp),%eax
082f3f27 +0x3cab:  lea    -0x4(%eax),%edx
082f3f2a +0x3cae:  mov    0x8(%ebp),%eax
082f3f2d +0x3cb1:  add    $0x18,%eax
082f3f30 +0x3cb4:  mov    %edx,0x4(%esp)
082f3f34 +0x3cb8:  mov    %eax,(%esp)
082f3f37 +0x3cbb:  call   082f4674 <+0x43f8>
082f3f3c +0x3cc0:  mov    0x8(%ebp),%eax
082f3f3f +0x3cc3:  mov    0xc(%eax),%edx
082f3f42 +0x3cc6:  mov    0x8(%ebp),%eax
082f3f45 +0x3cc9:  mov    %edx,0x8(%eax)
082f3f48 +0x3ccc:  mov    0x8(%ebp),%eax
082f3f4b +0x3ccf:  mov    0x1c(%eax),%ebx
082f3f4e +0x3cd2:  movl   $0x4,(%esp)
082f3f55 +0x3cd9:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
082f3f5a +0x3cde:  mov    %eax,-0x2c(%ebp)
082f3f5d +0x3ce1:  mov    0xc(%ebp),%eax
082f3f60 +0x3ce4:  mov    $0x0,%edx
082f3f65 +0x3ce9:  divl   -0x2c(%ebp)
082f3f68 +0x3cec:  mov    %edx,%ecx
082f3f6a +0x3cee:  mov    %ecx,%eax
082f3f6c +0x3cf0:  shl    $0x2,%eax
082f3f6f +0x3cf3:  lea    (%ebx,%eax,1),%edx
082f3f72 +0x3cf6:  mov    0x8(%ebp),%eax
082f3f75 +0x3cf9:  mov    %edx,0x18(%eax)
082f3f78 +0x3cfc:  add    $0x40,%esp
082f3f7b +0x3cff:  pop    %ebx
082f3f7c +0x3d00:  pop    %esi
082f3f7d +0x3d01:  pop    %ebp
082f3f7e +0x3d02:  ret
082f3f7f +0x3d03:  push   %ebp
082f3f80 +0x3d04:  mov    %esp,%ebp
082f3f82 +0x3d06:  mov    0x8(%ebp),%eax
082f3f85 +0x3d09:  pop    %ebp
082f3f86 +0x3d0a:  ret
082f3f87 +0x3d0b:  nop
082f3f88 +0x3d0c:  push   %ebp
082f3f89 +0x3d0d:  mov    %esp,%ebp
082f3f8b +0x3d0f:  push   %esi
082f3f8c +0x3d10:  push   %ebx
082f3f8d +0x3d11:  sub    $0x10,%esp
082f3f90 +0x3d14:  mov    0xc(%ebp),%eax
082f3f93 +0x3d17:  mov    %eax,(%esp)
082f3f96 +0x3d1a:  call   082f3018 <+0x2d9c>
082f3f9b +0x3d1f:  mov    0x8(%ebp),%edx
082f3f9e +0x3d22:  mov    %eax,0x4(%esp)
082f3fa2 +0x3d26:  mov    %edx,(%esp)
082f3fa5 +0x3d29:  call   082f48b8 <+0x463c>
082f3faa +0x3d2e:  movl   $0x0,0x4(%esp)
082f3fb2 +0x3d36:  mov    0x8(%ebp),%eax
082f3fb5 +0x3d39:  mov    %eax,(%esp)
082f3fb8 +0x3d3c:  call   082f3e10 <+0x3b94>
082f3fbd +0x3d41:  mov    0xc(%ebp),%eax
082f3fc0 +0x3d44:  mov    (%eax),%eax
082f3fc2 +0x3d46:  test   %eax,%eax
082f3fc4 +0x3d48:  je     082f403d <+0x3dc1>
082f3fc6 +0x3d4a:  mov    0xc(%ebp),%eax
082f3fc9 +0x3d4d:  lea    0x8(%eax),%edx
082f3fcc +0x3d50:  mov    0x8(%ebp),%eax
082f3fcf +0x3d53:  add    $0x8,%eax
082f3fd2 +0x3d56:  mov    %edx,0x4(%esp)
082f3fd6 +0x3d5a:  mov    %eax,(%esp)
082f3fd9 +0x3d5d:  call   082f4901 <+0x4685>
082f3fde +0x3d62:  mov    0xc(%ebp),%eax
082f3fe1 +0x3d65:  lea    0x18(%eax),%edx
082f3fe4 +0x3d68:  mov    0x8(%ebp),%eax
082f3fe7 +0x3d6b:  add    $0x18,%eax
082f3fea +0x3d6e:  mov    %edx,0x4(%esp)
082f3fee +0x3d72:  mov    %eax,(%esp)
082f3ff1 +0x3d75:  call   082f4901 <+0x4685>
082f3ff6 +0x3d7a:  mov    0xc(%ebp),%edx
082f3ff9 +0x3d7d:  mov    0x8(%ebp),%eax
082f3ffc +0x3d80:  mov    %edx,0x4(%esp)
082f4000 +0x3d84:  mov    %eax,(%esp)
082f4003 +0x3d87:  call   082f496b <+0x46ef>
082f4008 +0x3d8c:  mov    0xc(%ebp),%eax
082f400b +0x3d8f:  lea    0x4(%eax),%edx
082f400e +0x3d92:  mov    0x8(%ebp),%eax
082f4011 +0x3d95:  add    $0x4,%eax
082f4014 +0x3d98:  mov    %edx,0x4(%esp)
082f4018 +0x3d9c:  mov    %eax,(%esp)
082f401b +0x3d9f:  call   081026b9 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x16db>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x16db
082f4020 +0x3da4:  jmp    082f403d <+0x3dc1>
082f4022 +0x3da6:  mov    %edx,%ebx
082f4024 +0x3da8:  mov    %eax,%esi
082f4026 +0x3daa:  mov    0x8(%ebp),%eax
082f4029 +0x3dad:  mov    %eax,(%esp)
082f402c +0x3db0:  call   082f2f30 <+0x2cb4>
082f4031 +0x3db5:  mov    %esi,%eax
082f4033 +0x3db7:  mov    %ebx,%edx
082f4035 +0x3db9:  mov    %eax,(%esp)
082f4038 +0x3dbc:  call   08ae3750 <_Unwind_Resume>
082f403d +0x3dc1:  add    $0x10,%esp
082f4040 +0x3dc4:  pop    %ebx
082f4041 +0x3dc5:  pop    %esi
082f4042 +0x3dc6:  pop    %ebp
082f4043 +0x3dc7:  ret
082f4044 +0x3dc8:  push   %ebp
082f4045 +0x3dc9:  mov    %esp,%ebp
082f4047 +0x3dcb:  sub    $0x28,%esp
082f404a +0x3dce:  mov    0x8(%ebp),%eax
082f404d +0x3dd1:  mov    0x18(%eax),%edx
082f4050 +0x3dd4:  mov    0x8(%ebp),%eax
082f4053 +0x3dd7:  mov    0x20(%eax),%eax
082f4056 +0x3dda:  sub    $0x4,%eax
082f4059 +0x3ddd:  cmp    %eax,%edx
082f405b +0x3ddf:  je     082f409a <+0x3e1e>
082f405d +0x3de1:  mov    0xc(%ebp),%eax
082f4060 +0x3de4:  mov    %eax,(%esp)
082f4063 +0x3de7:  call   082f49a7 <+0x472b>
082f4068 +0x3dec:  mov    (%eax),%eax
082f406a +0x3dee:  mov    %eax,-0x10(%ebp)
082f406d +0x3df1:  mov    0x8(%ebp),%eax
082f4070 +0x3df4:  mov    0x18(%eax),%edx
082f4073 +0x3df7:  mov    0x8(%ebp),%eax
082f4076 +0x3dfa:  lea    -0x10(%ebp),%ecx
082f4079 +0x3dfd:  mov    %ecx,0x8(%esp)
082f407d +0x3e01:  mov    %edx,0x4(%esp)
082f4081 +0x3e05:  mov    %eax,(%esp)
082f4084 +0x3e08:  call   082f49b0 <+0x4734>
082f4089 +0x3e0d:  mov    0x8(%ebp),%eax
082f408c +0x3e10:  mov    0x18(%eax),%eax
082f408f +0x3e13:  lea    0x4(%eax),%edx
082f4092 +0x3e16:  mov    0x8(%ebp),%eax
082f4095 +0x3e19:  mov    %edx,0x18(%eax)
082f4098 +0x3e1c:  jmp    082f40bc <+0x3e40>
082f409a +0x3e1e:  mov    0xc(%ebp),%eax
082f409d +0x3e21:  mov    %eax,(%esp)
082f40a0 +0x3e24:  call   082f49a7 <+0x472b>
082f40a5 +0x3e29:  mov    (%eax),%eax
082f40a7 +0x3e2b:  mov    %eax,-0xc(%ebp)
082f40aa +0x3e2e:  lea    -0xc(%ebp),%eax
082f40ad +0x3e31:  mov    %eax,0x4(%esp)
082f40b1 +0x3e35:  mov    0x8(%ebp),%eax
082f40b4 +0x3e38:  mov    %eax,(%esp)
082f40b7 +0x3e3b:  call   082f49e6 <+0x476a>
082f40bc +0x3e40:  leave
082f40bd +0x3e41:  ret
082f40be +0x3e42:  push   %ebp
082f40bf +0x3e43:  mov    %esp,%ebp
082f40c1 +0x3e45:  mov    0x8(%ebp),%eax
082f40c4 +0x3e48:  pop    %ebp
082f40c5 +0x3e49:  ret
082f40c6 +0x3e4a:  push   %ebp
082f40c7 +0x3e4b:  mov    %esp,%ebp
082f40c9 +0x3e4d:  mov    0x8(%ebp),%eax
082f40cc +0x3e50:  pop    %ebp
082f40cd +0x3e51:  ret
082f40ce +0x3e52:  push   %ebp
082f40cf +0x3e53:  mov    %esp,%ebp
082f40d1 +0x3e55:  push   %esi
082f40d2 +0x3e56:  push   %ebx
082f40d3 +0x3e57:  sub    $0x10,%esp
082f40d6 +0x3e5a:  mov    0x10(%ebp),%eax
082f40d9 +0x3e5d:  mov    %eax,(%esp)
082f40dc +0x3e60:  call   082f4a6f <+0x47f3>
082f40e1 +0x3e65:  mov    %eax,%esi
082f40e3 +0x3e67:  mov    0xc(%ebp),%eax
082f40e6 +0x3e6a:  mov    %eax,(%esp)
082f40e9 +0x3e6d:  call   082f4a6f <+0x47f3>
082f40ee +0x3e72:  mov    %eax,%ebx
082f40f0 +0x3e74:  mov    0x8(%ebp),%eax
082f40f3 +0x3e77:  mov    %eax,(%esp)
082f40f6 +0x3e7a:  call   082f4a6f <+0x47f3>
082f40fb +0x3e7f:  mov    %esi,0x8(%esp)
082f40ff +0x3e83:  mov    %ebx,0x4(%esp)
082f4103 +0x3e87:  mov    %eax,(%esp)
082f4106 +0x3e8a:  call   082f4a77 <+0x47fb>
082f410b +0x3e8f:  add    $0x10,%esp
082f410e +0x3e92:  pop    %ebx
082f410f +0x3e93:  pop    %esi
082f4110 +0x3e94:  pop    %ebp
082f4111 +0x3e95:  ret
082f4112 +0x3e96:  push   %ebp
082f4113 +0x3e97:  mov    %esp,%ebp
082f4115 +0x3e99:  sub    $0x18,%esp
082f4118 +0x3e9c:  mov    0x8(%ebp),%eax
082f411b +0x3e9f:  mov    %eax,(%esp)
082f411e +0x3ea2:  call   082f4a9c <+0x4820>
082f4123 +0x3ea7:  mov    %eax,(%esp)
082f4126 +0x3eaa:  call   082f4aa4 <+0x4828>
082f412b +0x3eaf:  leave
082f412c +0x3eb0:  ret
082f412d +0x3eb1:  nop
082f412e +0x3eb2:  push   %ebp
082f412f +0x3eb3:  mov    %esp,%ebp
082f4131 +0x3eb5:  sub    $0x18,%esp
082f4134 +0x3eb8:  mov    0x8(%ebp),%eax
082f4137 +0x3ebb:  mov    %eax,(%esp)
082f413a +0x3ebe:  call   082f4aa4 <+0x4828>
082f413f +0x3ec3:  cmp    0xc(%ebp),%eax
082f4142 +0x3ec6:  setb   %al
082f4145 +0x3ec9:  movzbl %al,%eax
082f4148 +0x3ecc:  test   %eax,%eax
082f414a +0x3ece:  setne  %al
082f414d +0x3ed1:  test   %al,%al
082f414f +0x3ed3:  je     082f4156 <+0x3eda>
082f4151 +0x3ed5:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
082f4156 +0x3eda:  mov    0xc(%ebp),%edx
082f4159 +0x3edd:  mov    %edx,%eax
082f415b +0x3edf:  add    %eax,%eax
082f415d +0x3ee1:  add    %edx,%eax
082f415f +0x3ee3:  shl    $0x2,%eax
082f4162 +0x3ee6:  mov    %eax,(%esp)
082f4165 +0x3ee9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082f416a +0x3eee:  leave
082f416b +0x3eef:  ret
082f416c +0x3ef0:  push   %ebp
082f416d +0x3ef1:  mov    %esp,%ebp
082f416f +0x3ef3:  push   %ebx
082f4170 +0x3ef4:  sub    $0x14,%esp
082f4173 +0x3ef7:  mov    0x8(%ebp),%ebx
082f4176 +0x3efa:  mov    0xc(%ebp),%eax
082f4179 +0x3efd:  mov    (%eax),%eax
082f417b +0x3eff:  mov    %eax,0x4(%esp)
082f417f +0x3f03:  mov    %ebx,(%esp)
082f4182 +0x3f06:  call   082f4aae <+0x4832>
082f4187 +0x3f0b:  mov    %ebx,%eax
082f4189 +0x3f0d:  add    $0x14,%esp
082f418c +0x3f10:  pop    %ebx
082f418d +0x3f11:  pop    %ebp
082f418e +0x3f12:  ret    $0x4
082f4191 +0x3f15:  push   %ebp
082f4192 +0x3f16:  mov    %esp,%ebp
082f4194 +0x3f18:  sub    $0x18,%esp
082f4197 +0x3f1b:  mov    0x10(%ebp),%eax
082f419a +0x3f1e:  mov    %eax,0x8(%esp)
082f419e +0x3f22:  mov    0xc(%ebp),%eax
082f41a1 +0x3f25:  mov    %eax,0x4(%esp)
082f41a5 +0x3f29:  mov    0x8(%ebp),%eax
082f41a8 +0x3f2c:  mov    %eax,(%esp)
082f41ab +0x3f2f:  call   082f4abb <+0x483f>
082f41b0 +0x3f34:  leave
082f41b1 +0x3f35:  ret
082f41b2 +0x3f36:  push   %ebp
082f41b3 +0x3f37:  mov    %esp,%ebp
082f41b5 +0x3f39:  sub    $0x18,%esp
082f41b8 +0x3f3c:  mov    0xc(%ebp),%eax
082f41bb +0x3f3f:  mov    %eax,(%esp)
082f41be +0x3f42:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082f41c3 +0x3f47:  leave
082f41c4 +0x3f48:  ret
082f41c5 +0x3f49:  push   %ebp
082f41c6 +0x3f4a:  mov    %esp,%ebp
082f41c8 +0x3f4c:  mov    0x8(%ebp),%eax
082f41cb +0x3f4f:  pop    %ebp
082f41cc +0x3f50:  ret
082f41cd +0x3f51:  push   %ebp
082f41ce +0x3f52:  mov    %esp,%ebp
082f41d0 +0x3f54:  mov    0x8(%ebp),%eax
082f41d3 +0x3f57:  pop    %ebp
082f41d4 +0x3f58:  ret
082f41d5 +0x3f59:  push   %ebp
082f41d6 +0x3f5a:  mov    %esp,%ebp
082f41d8 +0x3f5c:  push   %esi
082f41d9 +0x3f5d:  push   %ebx
082f41da +0x3f5e:  sub    $0x10,%esp
082f41dd +0x3f61:  mov    0x10(%ebp),%eax
082f41e0 +0x3f64:  mov    %eax,(%esp)
082f41e3 +0x3f67:  call   082f4adc <+0x4860>
082f41e8 +0x3f6c:  mov    %eax,%esi
082f41ea +0x3f6e:  mov    0xc(%ebp),%eax
082f41ed +0x3f71:  mov    %eax,(%esp)
082f41f0 +0x3f74:  call   082f4adc <+0x4860>
082f41f5 +0x3f79:  mov    %eax,%ebx
082f41f7 +0x3f7b:  mov    0x8(%ebp),%eax
082f41fa +0x3f7e:  mov    %eax,(%esp)
082f41fd +0x3f81:  call   082f4adc <+0x4860>
082f4202 +0x3f86:  mov    %esi,0x8(%esp)
082f4206 +0x3f8a:  mov    %ebx,0x4(%esp)
082f420a +0x3f8e:  mov    %eax,(%esp)
082f420d +0x3f91:  call   082f4ae4 <+0x4868>
082f4212 +0x3f96:  add    $0x10,%esp
082f4215 +0x3f99:  pop    %ebx
082f4216 +0x3f9a:  pop    %esi
082f4217 +0x3f9b:  pop    %ebp
082f4218 +0x3f9c:  ret
082f4219 +0x3f9d:  nop
082f421a +0x3f9e:  push   %ebp
082f421b +0x3f9f:  mov    %esp,%ebp
082f421d +0x3fa1:  sub    $0x18,%esp
082f4220 +0x3fa4:  mov    0x8(%ebp),%eax
082f4223 +0x3fa7:  mov    %eax,(%esp)
082f4226 +0x3faa:  call   082f4b0a <+0x488e>
082f422b +0x3faf:  mov    %eax,(%esp)
082f422e +0x3fb2:  call   082f4b12 <+0x4896>
082f4233 +0x3fb7:  leave
082f4234 +0x3fb8:  ret
082f4235 +0x3fb9:  nop
082f4236 +0x3fba:  push   %ebp
082f4237 +0x3fbb:  mov    %esp,%ebp
082f4239 +0x3fbd:  sub    $0x18,%esp
082f423c +0x3fc0:  mov    0x8(%ebp),%eax
082f423f +0x3fc3:  mov    %eax,(%esp)
082f4242 +0x3fc6:  call   082f4b12 <+0x4896>
082f4247 +0x3fcb:  cmp    0xc(%ebp),%eax
082f424a +0x3fce:  setb   %al
082f424d +0x3fd1:  movzbl %al,%eax
082f4250 +0x3fd4:  test   %eax,%eax
082f4252 +0x3fd6:  setne  %al
082f4255 +0x3fd9:  test   %al,%al
082f4257 +0x3fdb:  je     082f425e <+0x3fe2>
082f4259 +0x3fdd:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
082f425e +0x3fe2:  mov    0xc(%ebp),%eax
082f4261 +0x3fe5:  shl    $0x3,%eax
082f4264 +0x3fe8:  mov    %eax,(%esp)
082f4267 +0x3feb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082f426c +0x3ff0:  leave
082f426d +0x3ff1:  ret
082f426e +0x3ff2:  push   %ebp
082f426f +0x3ff3:  mov    %esp,%ebp
082f4271 +0x3ff5:  push   %ebx
082f4272 +0x3ff6:  sub    $0x14,%esp
082f4275 +0x3ff9:  mov    0x8(%ebp),%ebx
082f4278 +0x3ffc:  mov    0xc(%ebp),%eax
082f427b +0x3fff:  mov    (%eax),%eax
082f427d +0x4001:  mov    %eax,0x4(%esp)
082f4281 +0x4005:  mov    %ebx,(%esp)
082f4284 +0x4008:  call   082f4b1c <+0x48a0>
082f4289 +0x400d:  mov    %ebx,%eax
082f428b +0x400f:  add    $0x14,%esp
082f428e +0x4012:  pop    %ebx
082f428f +0x4013:  pop    %ebp
082f4290 +0x4014:  ret    $0x4
082f4293 +0x4017:  push   %ebp
082f4294 +0x4018:  mov    %esp,%ebp
082f4296 +0x401a:  sub    $0x18,%esp
082f4299 +0x401d:  mov    0x10(%ebp),%eax
082f429c +0x4020:  mov    %eax,0x8(%esp)
082f42a0 +0x4024:  mov    0xc(%ebp),%eax
082f42a3 +0x4027:  mov    %eax,0x4(%esp)
082f42a7 +0x402b:  mov    0x8(%ebp),%eax
082f42aa +0x402e:  mov    %eax,(%esp)
082f42ad +0x4031:  call   082f4b29 <+0x48ad>
082f42b2 +0x4036:  leave
082f42b3 +0x4037:  ret
082f42b4 +0x4038:  push   %ebp
082f42b5 +0x4039:  mov    %esp,%ebp
082f42b7 +0x403b:  sub    $0x18,%esp
082f42ba +0x403e:  mov    0xc(%ebp),%eax
082f42bd +0x4041:  mov    %eax,(%esp)
082f42c0 +0x4044:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082f42c5 +0x4049:  leave
082f42c6 +0x404a:  ret
082f42c7 +0x404b:  push   %ebp
082f42c8 +0x404c:  mov    %esp,%ebp
082f42ca +0x404e:  sub    $0x18,%esp
082f42cd +0x4051:  lea    0x8(%ebp),%eax
082f42d0 +0x4054:  mov    %eax,(%esp)
082f42d3 +0x4057:  call   082f25a6 <+0x232a>
082f42d8 +0x405c:  mov    (%eax),%eax
082f42da +0x405e:  leave
082f42db +0x405f:  ret
082f42dc +0x4060:  push   %ebp
082f42dd +0x4061:  mov    %esp,%ebp
082f42df +0x4063:  sub    $0x28,%esp
082f42e2 +0x4066:  movb   $0x0,-0x9(%ebp)
082f42e6 +0x406a:  mov    0x10(%ebp),%eax
082f42e9 +0x406d:  mov    %eax,0x8(%esp)
082f42ed +0x4071:  mov    0xc(%ebp),%eax
082f42f0 +0x4074:  mov    %eax,0x4(%esp)
082f42f4 +0x4078:  mov    0x8(%ebp),%eax
082f42f7 +0x407b:  mov    %eax,(%esp)
082f42fa +0x407e:  call   082f4b4a <+0x48ce>
082f42ff +0x4083:  leave
082f4300 +0x4084:  ret
082f4301 +0x4085:  push   %ebp
082f4302 +0x4086:  mov    %esp,%ebp
082f4304 +0x4088:  push   %ebx
082f4305 +0x4089:  sub    $0x24,%esp
082f4308 +0x408c:  mov    0xc(%ebp),%eax
082f430b +0x408f:  mov    %eax,0x4(%esp)
082f430f +0x4093:  mov    0x8(%ebp),%eax
082f4312 +0x4096:  mov    %eax,(%esp)
082f4315 +0x4099:  call   082f4ba4 <+0x4928>
082f431a +0x409e:  mov    0xc(%ebp),%eax
082f431d +0x40a1:  mov    %eax,-0xc(%ebp)
082f4320 +0x40a4:  jmp    082f436e <+0x40f2>
082f4322 +0x40a6:  lea    0x8(%ebp),%eax
082f4325 +0x40a9:  mov    %eax,(%esp)
082f4328 +0x40ac:  call   082f18d2 <+0x1656>
082f432d +0x40b1:  mov    %eax,%ebx
082f432f +0x40b3:  lea    -0xc(%ebp),%eax
082f4332 +0x40b6:  mov    %eax,(%esp)
082f4335 +0x40b9:  call   082f18d2 <+0x1656>
082f433a +0x40be:  mov    %ebx,0x4(%esp)
082f433e +0x40c2:  mov    %eax,(%esp)
082f4341 +0x40c5:  call   082f04ea <+0x26e>
082f4346 +0x40ca:  test   %al,%al
082f4348 +0x40cc:  je     082f4363 <+0x40e7>
082f434a +0x40ce:  mov    -0xc(%ebp),%eax
082f434d +0x40d1:  mov    %eax,0x8(%esp)
082f4351 +0x40d5:  mov    0xc(%ebp),%eax
082f4354 +0x40d8:  mov    %eax,0x4(%esp)
082f4358 +0x40dc:  mov    0x8(%ebp),%eax
082f435b +0x40df:  mov    %eax,(%esp)
082f435e +0x40e2:  call   082f4c85 <+0x4a09>
082f4363 +0x40e7:  lea    -0xc(%ebp),%eax
082f4366 +0x40ea:  mov    %eax,(%esp)
082f4369 +0x40ed:  call   082f19c2 <+0x1746>
082f436e +0x40f2:  lea    0x10(%ebp),%eax
082f4371 +0x40f5:  mov    %eax,0x4(%esp)
082f4375 +0x40f9:  lea    -0xc(%ebp),%eax
082f4378 +0x40fc:  mov    %eax,(%esp)
082f437b +0x40ff:  call   082f43e9 <+0x416d>
082f4380 +0x4104:  test   %al,%al
082f4382 +0x4106:  jne    082f4322 <+0x40a6>
082f4384 +0x4108:  add    $0x24,%esp
082f4387 +0x410b:  pop    %ebx
082f4388 +0x410c:  pop    %ebp
082f4389 +0x410d:  ret
082f438a +0x410e:  push   %ebp
082f438b +0x410f:  mov    %esp,%ebp
082f438d +0x4111:  sub    $0x18,%esp
082f4390 +0x4114:  jmp    082f43b6 <+0x413a>
082f4392 +0x4116:  lea    0xc(%ebp),%eax
082f4395 +0x4119:  mov    %eax,(%esp)
082f4398 +0x411c:  call   082f43d4 <+0x4158>
082f439d +0x4121:  mov    0xc(%ebp),%eax
082f43a0 +0x4124:  mov    %eax,0x8(%esp)
082f43a4 +0x4128:  mov    0xc(%ebp),%eax
082f43a7 +0x412b:  mov    %eax,0x4(%esp)
082f43ab +0x412f:  mov    0x8(%ebp),%eax
082f43ae +0x4132:  mov    %eax,(%esp)
082f43b1 +0x4135:  call   082f4c85 <+0x4a09>
082f43b6 +0x413a:  lea    0x8(%ebp),%eax
082f43b9 +0x413d:  mov    %eax,0x4(%esp)
082f43bd +0x4141:  lea    0xc(%ebp),%eax
082f43c0 +0x4144:  mov    %eax,(%esp)
082f43c3 +0x4147:  call   082f2663 <+0x23e7>
082f43c8 +0x414c:  cmp    $0x1,%eax
082f43cb +0x414f:  setg   %al
082f43ce +0x4152:  test   %al,%al
082f43d0 +0x4154:  jne    082f4392 <+0x4116>
082f43d2 +0x4156:  leave
082f43d3 +0x4157:  ret
082f43d4 +0x4158:  push   %ebp
082f43d5 +0x4159:  mov    %esp,%ebp
082f43d7 +0x415b:  mov    0x8(%ebp),%eax
082f43da +0x415e:  mov    (%eax),%eax
082f43dc +0x4160:  lea    -0xc(%eax),%edx
082f43df +0x4163:  mov    0x8(%ebp),%eax
082f43e2 +0x4166:  mov    %edx,(%eax)
082f43e4 +0x4168:  mov    0x8(%ebp),%eax
082f43e7 +0x416b:  pop    %ebp
082f43e8 +0x416c:  ret
082f43e9 +0x416d:  push   %ebp
082f43ea +0x416e:  mov    %esp,%ebp
082f43ec +0x4170:  push   %ebx
082f43ed +0x4171:  sub    $0x14,%esp
082f43f0 +0x4174:  mov    0x8(%ebp),%eax
082f43f3 +0x4177:  mov    %eax,(%esp)
082f43f6 +0x417a:  call   082f25a6 <+0x232a>
082f43fb +0x417f:  mov    (%eax),%ebx
082f43fd +0x4181:  mov    0xc(%ebp),%eax
082f4400 +0x4184:  mov    %eax,(%esp)
082f4403 +0x4187:  call   082f25a6 <+0x232a>
082f4408 +0x418c:  mov    (%eax),%eax
082f440a +0x418e:  cmp    %eax,%ebx
082f440c +0x4190:  setb   %al
082f440f +0x4193:  add    $0x14,%esp
082f4412 +0x4196:  pop    %ebx
082f4413 +0x4197:  pop    %ebp
082f4414 +0x4198:  ret
082f4415 +0x4199:  push   %ebp
082f4416 +0x419a:  mov    %esp,%ebp
082f4418 +0x419c:  sub    $0x18,%esp
082f441b +0x419f:  mov    0xc(%ebp),%eax
082f441e +0x41a2:  mov    %eax,0x4(%esp)
082f4422 +0x41a6:  mov    0x8(%ebp),%eax
082f4425 +0x41a9:  mov    %eax,(%esp)
082f4428 +0x41ac:  call   082f4d30 <+0x4ab4>
082f442d +0x41b1:  leave
082f442e +0x41b2:  ret
082f442f +0x41b3:  push   %ebp
082f4430 +0x41b4:  mov    %esp,%ebp
082f4432 +0x41b6:  push   %ebx
082f4433 +0x41b7:  sub    $0x14,%esp
082f4436 +0x41ba:  mov    0x8(%ebp),%eax
082f4439 +0x41bd:  mov    %eax,(%esp)
082f443c +0x41c0:  call   082f25a6 <+0x232a>
082f4441 +0x41c5:  mov    (%eax),%ebx
082f4443 +0x41c7:  mov    0xc(%ebp),%eax
082f4446 +0x41ca:  mov    %eax,(%esp)
082f4449 +0x41cd:  call   082f25a6 <+0x232a>
082f444e +0x41d2:  mov    (%eax),%eax
082f4450 +0x41d4:  cmp    %eax,%ebx
082f4452 +0x41d6:  sete   %al
082f4455 +0x41d9:  add    $0x14,%esp
082f4458 +0x41dc:  pop    %ebx
082f4459 +0x41dd:  pop    %ebp
082f445a +0x41de:  ret
082f445b +0x41df:  push   %ebp
082f445c +0x41e0:  mov    %esp,%ebp
082f445e +0x41e2:  push   %ebx
082f445f +0x41e3:  sub    $0x24,%esp
082f4462 +0x41e6:  mov    0x8(%ebp),%ebx
082f4465 +0x41e9:  lea    -0x10(%ebp),%eax
082f4468 +0x41ec:  mov    0x10(%ebp),%edx
082f446b +0x41ef:  mov    %edx,0x4(%esp)
082f446f +0x41f3:  mov    %eax,(%esp)
082f4472 +0x41f6:  call   082f3501 <+0x3285>
082f4477 +0x41fb:  sub    $0x4,%esp
082f447a +0x41fe:  lea    -0xc(%ebp),%eax
082f447d +0x4201:  mov    0xc(%ebp),%edx
082f4480 +0x4204:  mov    %edx,0x4(%esp)
082f4484 +0x4208:  mov    %eax,(%esp)
082f4487 +0x420b:  call   082f3501 <+0x3285>
082f448c +0x4210:  sub    $0x4,%esp
082f448f +0x4213:  mov    0x14(%ebp),%eax
082f4492 +0x4216:  mov    %eax,0xc(%esp)
082f4496 +0x421a:  mov    -0x10(%ebp),%eax
082f4499 +0x421d:  mov    %eax,0x8(%esp)
082f449d +0x4221:  mov    -0xc(%ebp),%eax
082f44a0 +0x4224:  mov    %eax,0x4(%esp)
082f44a4 +0x4228:  mov    %ebx,(%esp)
082f44a7 +0x422b:  call   082f4d61 <+0x4ae5>
082f44ac +0x4230:  sub    $0x4,%esp
082f44af +0x4233:  mov    %ebx,%eax
082f44b1 +0x4235:  mov    -0x4(%ebp),%ebx
082f44b4 +0x4238:  leave
082f44b5 +0x4239:  ret    $0x4
082f44b8 +0x423c:  push   %ebp
082f44b9 +0x423d:  mov    %esp,%ebp
082f44bb +0x423f:  push   %ebx
082f44bc +0x4240:  sub    $0x24,%esp
082f44bf +0x4243:  mov    0x8(%ebp),%eax
082f44c2 +0x4246:  mov    %eax,-0xc(%ebp)
082f44c5 +0x4249:  lea    -0xc(%ebp),%eax
082f44c8 +0x424c:  mov    %eax,(%esp)
082f44cb +0x424f:  call   082f43d4 <+0x4158>
082f44d0 +0x4254:  jmp    082f450b <+0x428f>
082f44d2 +0x4256:  lea    0x8(%ebp),%eax
082f44d5 +0x4259:  mov    %eax,(%esp)
082f44d8 +0x425c:  call   082f18d2 <+0x1656>
082f44dd +0x4261:  mov    %eax,%ebx
082f44df +0x4263:  lea    -0xc(%ebp),%eax
082f44e2 +0x4266:  mov    %eax,(%esp)
082f44e5 +0x4269:  call   082f18d2 <+0x1656>
082f44ea +0x426e:  mov    (%eax),%edx
082f44ec +0x4270:  mov    %edx,(%ebx)
082f44ee +0x4272:  mov    0x4(%eax),%edx
082f44f1 +0x4275:  mov    %edx,0x4(%ebx)
082f44f4 +0x4278:  mov    0x8(%eax),%eax
082f44f7 +0x427b:  mov    %eax,0x8(%ebx)
082f44fa +0x427e:  mov    -0xc(%ebp),%eax
082f44fd +0x4281:  mov    %eax,0x8(%ebp)
082f4500 +0x4284:  lea    -0xc(%ebp),%eax
082f4503 +0x4287:  mov    %eax,(%esp)
082f4506 +0x428a:  call   082f43d4 <+0x4158>
082f450b +0x428f:  lea    -0xc(%ebp),%eax
082f450e +0x4292:  mov    %eax,(%esp)
082f4511 +0x4295:  call   082f18d2 <+0x1656>
082f4516 +0x429a:  mov    %eax,0x4(%esp)
082f451a +0x429e:  lea    0xc(%ebp),%eax
082f451d +0x42a1:  mov    %eax,(%esp)
082f4520 +0x42a4:  call   082f04ea <+0x26e>
082f4525 +0x42a9:  test   %al,%al
082f4527 +0x42ab:  jne    082f44d2 <+0x4256>
082f4529 +0x42ad:  lea    0x8(%ebp),%eax
082f452c +0x42b0:  mov    %eax,(%esp)
082f452f +0x42b3:  call   082f18d2 <+0x1656>
082f4534 +0x42b8:  mov    0xc(%ebp),%edx
082f4537 +0x42bb:  mov    %edx,(%eax)
082f4539 +0x42bd:  mov    0x10(%ebp),%edx
082f453c +0x42c0:  mov    %edx,0x4(%eax)
082f453f +0x42c3:  mov    0x14(%ebp),%edx
082f4542 +0x42c6:  mov    %edx,0x8(%eax)
082f4545 +0x42c9:  add    $0x24,%esp
082f4548 +0x42cc:  pop    %ebx
082f4549 +0x42cd:  pop    %ebp
082f454a +0x42ce:  ret
082f454b +0x42cf:  nop
082f454c +0x42d0:  push   %ebp
082f454d +0x42d1:  mov    %esp,%ebp
082f454f +0x42d3:  sub    $0x18,%esp
082f4552 +0x42d6:  mov    0x8(%ebp),%eax
082f4555 +0x42d9:  mov    %eax,(%esp)
082f4558 +0x42dc:  call   082f4dc0 <+0x4b44>
082f455d +0x42e1:  leave
082f455e +0x42e2:  ret
082f455f +0x42e3:  nop
082f4560 +0x42e4:  push   %ebp
082f4561 +0x42e5:  mov    %esp,%ebp
082f4563 +0x42e7:  pop    %ebp
082f4564 +0x42e8:  ret
082f4565 +0x42e9:  push   %ebp
082f4566 +0x42ea:  mov    %esp,%ebp
082f4568 +0x42ec:  pop    %ebp
082f4569 +0x42ed:  ret
082f456a +0x42ee:  push   %ebp
082f456b +0x42ef:  mov    %esp,%ebp
082f456d +0x42f1:  sub    $0x18,%esp
082f4570 +0x42f4:  mov    0x8(%ebp),%eax
082f4573 +0x42f7:  mov    %eax,(%esp)
082f4576 +0x42fa:  call   082f4dc6 <+0x4b4a>
082f457b +0x42ff:  leave
082f457c +0x4300:  ret
082f457d +0x4301:  nop
082f457e +0x4302:  push   %ebp
082f457f +0x4303:  mov    %esp,%ebp
082f4581 +0x4305:  pop    %ebp
082f4582 +0x4306:  ret
082f4583 +0x4307:  push   %ebp
082f4584 +0x4308:  mov    %esp,%ebp
082f4586 +0x430a:  pop    %ebp
082f4587 +0x430b:  ret
082f4588 +0x430c:  push   %ebp
082f4589 +0x430d:  mov    %esp,%ebp
082f458b +0x430f:  pop    %ebp
082f458c +0x4310:  ret
082f458d +0x4311:  push   %ebp
082f458e +0x4312:  mov    %esp,%ebp
082f4590 +0x4314:  mov    0x8(%ebp),%eax
082f4593 +0x4317:  add    $0x10,%eax
082f4596 +0x431a:  pop    %ebp
082f4597 +0x431b:  ret
082f4598 +0x431c:  push   %ebp
082f4599 +0x431d:  mov    %esp,%ebp
082f459b +0x431f:  mov    0x8(%ebp),%eax
082f459e +0x4322:  add    $0x10,%eax
082f45a1 +0x4325:  pop    %ebp
082f45a2 +0x4326:  ret
082f45a3 +0x4327:  nop
082f45a4 +0x4328:  push   %ebp
082f45a5 +0x4329:  mov    %esp,%ebp
082f45a7 +0x432b:  push   %esi
082f45a8 +0x432c:  push   %ebx
082f45a9 +0x432d:  sub    $0x20,%esp
082f45ac +0x4330:  mov    0x8(%ebp),%eax
082f45af +0x4333:  mov    %eax,(%esp)
082f45b2 +0x4336:  call   082f4dcc <+0x4b50>
082f45b7 +0x433b:  mov    %eax,-0xc(%ebp)
082f45ba +0x433e:  mov    0xc(%ebp),%eax
082f45bd +0x4341:  mov    %eax,(%esp)
082f45c0 +0x4344:  call   082f4def <+0x4b73>
082f45c5 +0x4349:  mov    %eax,%ebx
082f45c7 +0x434b:  mov    0x8(%ebp),%eax
082f45ca +0x434e:  mov    %eax,(%esp)
082f45cd +0x4351:  call   0823e752 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x98d0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x98d0
082f45d2 +0x4356:  mov    %ebx,0x8(%esp)
082f45d6 +0x435a:  mov    -0xc(%ebp),%edx
082f45d9 +0x435d:  mov    %edx,0x4(%esp)
082f45dd +0x4361:  mov    %eax,(%esp)
082f45e0 +0x4364:  call   082f4df8 <+0x4b7c>
082f45e5 +0x4369:  jmp    082f461b <+0x439f>
082f45e7 +0x436b:  mov    %eax,(%esp)
082f45ea +0x436e:  call   08725ce0 <__cxa_begin_catch>
082f45ef +0x4373:  mov    -0xc(%ebp),%eax
082f45f2 +0x4376:  mov    %eax,0x4(%esp)
082f45f6 +0x437a:  mov    0x8(%ebp),%eax
082f45f9 +0x437d:  mov    %eax,(%esp)
082f45fc +0x4380:  call   0823e774 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x98f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x98f2
082f4601 +0x4385:  call   08724be0 <__cxa_rethrow>
082f4606 +0x438a:  mov    %edx,%ebx
082f4608 +0x438c:  mov    %eax,%esi
082f460a +0x438e:  call   08725c30 <__cxa_end_catch>
082f460f +0x4393:  mov    %esi,%eax
082f4611 +0x4395:  mov    %ebx,%edx
082f4613 +0x4397:  mov    %eax,(%esp)
082f4616 +0x439a:  call   08ae3750 <_Unwind_Resume>
082f461b +0x439f:  mov    -0xc(%ebp),%eax
082f461e +0x43a2:  add    $0x20,%esp
082f4621 +0x43a5:  pop    %ebx
082f4622 +0x43a6:  pop    %esi
082f4623 +0x43a7:  pop    %ebp
082f4624 +0x43a8:  ret
082f4625 +0x43a9:  push   %ebp
082f4626 +0x43aa:  mov    %esp,%ebp
082f4628 +0x43ac:  mov    0x8(%ebp),%eax
082f462b +0x43af:  pop    %ebp
082f462c +0x43b0:  ret
082f462d +0x43b1:  push   %ebp
082f462e +0x43b2:  mov    %esp,%ebp
082f4630 +0x43b4:  mov    0x8(%ebp),%eax
082f4633 +0x43b7:  pop    %ebp
082f4634 +0x43b8:  ret
082f4635 +0x43b9:  push   %ebp
082f4636 +0x43ba:  mov    %esp,%ebp
082f4638 +0x43bc:  sub    $0x18,%esp
082f463b +0x43bf:  movl   $0x4,(%esp)
082f4642 +0x43c6:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
082f4647 +0x43cb:  leave
082f4648 +0x43cc:  ret
082f4649 +0x43cd:  nop
082f464a +0x43ce:  push   %ebp
082f464b +0x43cf:  mov    %esp,%ebp
082f464d +0x43d1:  sub    $0x18,%esp
082f4650 +0x43d4:  movl   $0x4,(%esp)
082f4657 +0x43db:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
082f465c +0x43e0:  mov    0x8(%ebp),%edx
082f465f +0x43e3:  mov    %eax,0x8(%esp)
082f4663 +0x43e7:  mov    0xc(%ebp),%eax
082f4666 +0x43ea:  mov    %eax,0x4(%esp)
082f466a +0x43ee:  mov    %edx,(%esp)
082f466d +0x43f1:  call   082f4e38 <+0x4bbc>
082f4672 +0x43f6:  leave
082f4673 +0x43f7:  ret
082f4674 +0x43f8:  push   %ebp
082f4675 +0x43f9:  mov    %esp,%ebp
082f4677 +0x43fb:  push   %ebx
082f4678 +0x43fc:  sub    $0x4,%esp
082f467b +0x43ff:  mov    0x8(%ebp),%eax
082f467e +0x4402:  mov    0xc(%ebp),%edx
082f4681 +0x4405:  mov    %edx,0xc(%eax)
082f4684 +0x4408:  mov    0xc(%ebp),%eax
082f4687 +0x440b:  mov    (%eax),%edx
082f4689 +0x440d:  mov    0x8(%ebp),%eax
082f468c +0x4410:  mov    %edx,0x4(%eax)
082f468f +0x4413:  mov    0x8(%ebp),%eax
082f4692 +0x4416:  mov    0x4(%eax),%ebx
082f4695 +0x4419:  call   082f4635 <+0x43b9>
082f469a +0x441e:  shl    $0x2,%eax
082f469d +0x4421:  lea    (%ebx,%eax,1),%edx
082f46a0 +0x4424:  mov    0x8(%ebp),%eax
082f46a3 +0x4427:  mov    %edx,0x8(%eax)
082f46a6 +0x442a:  add    $0x4,%esp
082f46a9 +0x442d:  pop    %ebx
082f46aa +0x442e:  pop    %ebp
082f46ab +0x442f:  ret
082f46ac +0x4430:  push   %ebp
082f46ad +0x4431:  mov    %esp,%ebp
082f46af +0x4433:  push   %esi
082f46b0 +0x4434:  push   %ebx
082f46b1 +0x4435:  sub    $0x10,%esp
082f46b4 +0x4438:  mov    0xc(%ebp),%eax
082f46b7 +0x443b:  lea    0x1(%eax),%ebx
082f46ba +0x443e:  mov    0x8(%ebp),%eax
082f46bd +0x4441:  mov    0x4(%eax),%edx
082f46c0 +0x4444:  mov    0x8(%ebp),%eax
082f46c3 +0x4447:  mov    0x24(%eax),%eax
082f46c6 +0x444a:  mov    %eax,%ecx
082f46c8 +0x444c:  mov    0x8(%ebp),%eax
082f46cb +0x444f:  mov    (%eax),%eax
082f46cd +0x4451:  mov    %ecx,%esi
082f46cf +0x4453:  sub    %eax,%esi
082f46d1 +0x4455:  mov    %esi,%eax
082f46d3 +0x4457:  sar    $0x2,%eax
082f46d6 +0x445a:  mov    %edx,%ecx
082f46d8 +0x445c:  sub    %eax,%ecx
082f46da +0x445e:  mov    %ecx,%eax
082f46dc +0x4460:  cmp    %eax,%ebx
082f46de +0x4462:  jbe    082f46fa <+0x447e>
082f46e0 +0x4464:  movl   $0x0,0x8(%esp)
082f46e8 +0x446c:  mov    0xc(%ebp),%eax
082f46eb +0x446f:  mov    %eax,0x4(%esp)
082f46ef +0x4473:  mov    0x8(%ebp),%eax
082f46f2 +0x4476:  mov    %eax,(%esp)
082f46f5 +0x4479:  call   082f4e4c <+0x4bd0>
082f46fa +0x447e:  add    $0x10,%esp
082f46fd +0x4481:  pop    %ebx
082f46fe +0x4482:  pop    %esi
082f46ff +0x4483:  pop    %ebp
082f4700 +0x4484:  ret
082f4701 +0x4485:  nop
082f4702 +0x4486:  push   %ebp
082f4703 +0x4487:  mov    %esp,%ebp
082f4705 +0x4489:  sub    $0x18,%esp
082f4708 +0x448c:  movl   $0x4,(%esp)
082f470f +0x4493:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
082f4714 +0x4498:  mov    0x8(%ebp),%edx
082f4717 +0x449b:  movl   $0x0,0x8(%esp)
082f471f +0x44a3:  mov    %eax,0x4(%esp)
082f4723 +0x44a7:  mov    %edx,(%esp)
082f4726 +0x44aa:  call   082f501c <+0x4da0>
082f472b +0x44af:  leave
082f472c +0x44b0:  ret
082f472d +0x44b1:  push   %ebp
082f472e +0x44b2:  mov    %esp,%ebp
082f4730 +0x44b4:  mov    0x8(%ebp),%eax
082f4733 +0x44b7:  pop    %ebp
082f4734 +0x44b8:  ret
082f4735 +0x44b9:  nop
082f4736 +0x44ba:  push   %ebp
082f4737 +0x44bb:  mov    %esp,%ebp
082f4739 +0x44bd:  pop    %ebp
082f473a +0x44be:  ret
082f473b +0x44bf:  nop
082f473c +0x44c0:  push   %ebp
082f473d +0x44c1:  mov    %esp,%ebp
082f473f +0x44c3:  push   %esi
082f4740 +0x44c4:  push   %ebx
082f4741 +0x44c5:  sub    $0x10,%esp
082f4744 +0x44c8:  mov    0x8(%ebp),%ebx
082f4747 +0x44cb:  mov    %ebx,%esi
082f4749 +0x44cd:  mov    0xc(%ebp),%eax
082f474c +0x44d0:  mov    %eax,(%esp)
082f474f +0x44d3:  call   082f5054 <+0x4dd8>
082f4754 +0x44d8:  mov    %eax,0x4(%esp)
082f4758 +0x44dc:  mov    %esi,(%esp)
082f475b +0x44df:  call   082f505c <+0x4de0>
082f4760 +0x44e4:  mov    %ebx,%eax
082f4762 +0x44e6:  mov    %ebx,%eax
082f4764 +0x44e8:  add    $0x10,%esp
082f4767 +0x44eb:  pop    %ebx
082f4768 +0x44ec:  pop    %esi
082f4769 +0x44ed:  pop    %ebp
082f476a +0x44ee:  ret    $0x4
082f476d +0x44f1:  nop
082f476e +0x44f2:  push   %ebp
082f476f +0x44f3:  mov    %esp,%ebp
082f4771 +0x44f5:  sub    $0x18,%esp
082f4774 +0x44f8:  mov    0x8(%ebp),%eax
082f4777 +0x44fb:  mov    %eax,(%esp)
082f477a +0x44fe:  call   082f5070 <+0x4df4>
082f477f +0x4503:  leave
082f4780 +0x4504:  ret
082f4781 +0x4505:  nop
082f4782 +0x4506:  push   %ebp
082f4783 +0x4507:  mov    %esp,%ebp
082f4785 +0x4509:  sub    $0x18,%esp
082f4788 +0x450c:  mov    0xc(%ebp),%eax
082f478b +0x450f:  mov    %eax,(%esp)
082f478e +0x4512:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082f4793 +0x4517:  leave
082f4794 +0x4518:  ret
082f4795 +0x4519:  nop
082f4796 +0x451a:  push   %ebp
082f4797 +0x451b:  mov    %esp,%ebp
082f4799 +0x451d:  sub    $0x18,%esp
082f479c +0x4520:  mov    0x8(%ebp),%eax
082f479f +0x4523:  mov    %eax,(%esp)
082f47a2 +0x4526:  call   082f5076 <+0x4dfa>
082f47a7 +0x452b:  leave
082f47a8 +0x452c:  ret
082f47a9 +0x452d:  nop
082f47aa +0x452e:  push   %ebp
082f47ab +0x452f:  mov    %esp,%ebp
082f47ad +0x4531:  mov    0x8(%ebp),%eax
082f47b0 +0x4534:  movl   $0x0,(%eax)
082f47b6 +0x453a:  mov    0x8(%ebp),%eax
082f47b9 +0x453d:  movl   $0x0,0x4(%eax)
082f47c0 +0x4544:  mov    0x8(%ebp),%eax
082f47c3 +0x4547:  movl   $0x0,0x8(%eax)
082f47ca +0x454e:  mov    0x8(%ebp),%eax
082f47cd +0x4551:  movl   $0x0,0xc(%eax)
082f47d4 +0x4558:  pop    %ebp
082f47d5 +0x4559:  ret
082f47d6 +0x455a:  push   %ebp
082f47d7 +0x455b:  mov    %esp,%ebp
082f47d9 +0x455d:  push   %esi
082f47da +0x455e:  push   %ebx
082f47db +0x455f:  sub    $0x20,%esp
082f47de +0x4562:  lea    -0x9(%ebp),%eax
082f47e1 +0x4565:  mov    0x8(%ebp),%edx
082f47e4 +0x4568:  mov    %edx,0x4(%esp)
082f47e8 +0x456c:  mov    %eax,(%esp)
082f47eb +0x456f:  call   082f473c <+0x44c0>
082f47f0 +0x4574:  sub    $0x4,%esp
082f47f3 +0x4577:  lea    -0x9(%ebp),%eax
082f47f6 +0x457a:  movl   $0x0,0x8(%esp)
082f47fe +0x4582:  mov    0xc(%ebp),%edx
082f4801 +0x4585:  mov    %edx,0x4(%esp)
082f4805 +0x4589:  mov    %eax,(%esp)
082f4808 +0x458c:  call   082f507c <+0x4e00>
082f480d +0x4591:  mov    %eax,%ebx
082f480f +0x4593:  lea    -0x9(%ebp),%eax
082f4812 +0x4596:  mov    %eax,(%esp)
082f4815 +0x4599:  call   082f476e <+0x44f2>
082f481a +0x459e:  mov    %ebx,%eax
082f481c +0x45a0:  lea    -0x8(%ebp),%esp
082f481f +0x45a3:  add    $0x0,%esp
082f4822 +0x45a6:  pop    %ebx
082f4823 +0x45a7:  pop    %esi
082f4824 +0x45a8:  pop    %ebp
082f4825 +0x45a9:  ret
082f4826 +0x45aa:  mov    %edx,%ebx
082f4828 +0x45ac:  mov    %eax,%esi
082f482a +0x45ae:  lea    -0x9(%ebp),%eax
082f482d +0x45b1:  mov    %eax,(%esp)
082f4830 +0x45b4:  call   082f476e <+0x44f2>
082f4835 +0x45b9:  mov    %esi,%eax
082f4837 +0x45bb:  mov    %ebx,%edx
082f4839 +0x45bd:  mov    %eax,(%esp)
082f483c +0x45c0:  call   08ae3750 <_Unwind_Resume>
082f4841 +0x45c5:  nop
082f4842 +0x45c6:  push   %ebp
082f4843 +0x45c7:  mov    %esp,%ebp
082f4845 +0x45c9:  push   %esi
082f4846 +0x45ca:  push   %ebx
082f4847 +0x45cb:  sub    $0x20,%esp
082f484a +0x45ce:  mov    0xc(%ebp),%eax
082f484d +0x45d1:  mov    %eax,-0xc(%ebp)
082f4850 +0x45d4:  jmp    082f4866 <+0x45ea>
082f4852 +0x45d6:  mov    0x8(%ebp),%eax
082f4855 +0x45d9:  mov    %eax,(%esp)
082f4858 +0x45dc:  call   082f4702 <+0x4486>
082f485d +0x45e1:  mov    -0xc(%ebp),%edx
082f4860 +0x45e4:  mov    %eax,(%edx)
082f4862 +0x45e6:  addl   $0x4,-0xc(%ebp)
082f4866 +0x45ea:  mov    -0xc(%ebp),%eax
082f4869 +0x45ed:  cmp    0x10(%ebp),%eax
082f486c +0x45f0:  setb   %al
082f486f +0x45f3:  test   %al,%al
082f4871 +0x45f5:  jne    082f4852 <+0x45d6>
082f4873 +0x45f7:  jmp    082f48b0 <+0x4634>
082f4875 +0x45f9:  mov    %eax,(%esp)
082f4878 +0x45fc:  call   08725ce0 <__cxa_begin_catch>
082f487d +0x4601:  mov    -0xc(%ebp),%eax
082f4880 +0x4604:  mov    %eax,0x8(%esp)
082f4884 +0x4608:  mov    0xc(%ebp),%eax
082f4887 +0x460b:  mov    %eax,0x4(%esp)
082f488b +0x460f:  mov    0x8(%ebp),%eax
082f488e +0x4612:  mov    %eax,(%esp)
082f4891 +0x4615:  call   082f3d56 <+0x3ada>
082f4896 +0x461a:  call   08724be0 <__cxa_rethrow>
082f489b +0x461f:  mov    %edx,%ebx
082f489d +0x4621:  mov    %eax,%esi
082f489f +0x4623:  call   08725c30 <__cxa_end_catch>
082f48a4 +0x4628:  mov    %esi,%eax
082f48a6 +0x462a:  mov    %ebx,%edx
082f48a8 +0x462c:  mov    %eax,(%esp)
082f48ab +0x462f:  call   08ae3750 <_Unwind_Resume>
082f48b0 +0x4634:  add    $0x20,%esp
082f48b3 +0x4637:  pop    %ebx
082f48b4 +0x4638:  pop    %esi
082f48b5 +0x4639:  pop    %ebp
082f48b6 +0x463a:  ret
082f48b7 +0x463b:  nop
082f48b8 +0x463c:  push   %ebp
082f48b9 +0x463d:  mov    %esp,%ebp
082f48bb +0x463f:  sub    $0x18,%esp
082f48be +0x4642:  mov    0x8(%ebp),%eax
082f48c1 +0x4645:  mov    0xc(%ebp),%edx
082f48c4 +0x4648:  mov    %edx,0x4(%esp)
082f48c8 +0x464c:  mov    %eax,(%esp)
082f48cb +0x464f:  call   082f50b4 <+0x4e38>
082f48d0 +0x4654:  mov    0x8(%ebp),%eax
082f48d3 +0x4657:  movl   $0x0,(%eax)
082f48d9 +0x465d:  mov    0x8(%ebp),%eax
082f48dc +0x4660:  movl   $0x0,0x4(%eax)
082f48e3 +0x4667:  mov    0x8(%ebp),%eax
082f48e6 +0x466a:  add    $0x8,%eax
082f48e9 +0x466d:  mov    %eax,(%esp)
082f48ec +0x4670:  call   082f47aa <+0x452e>
082f48f1 +0x4675:  mov    0x8(%ebp),%eax
082f48f4 +0x4678:  add    $0x18,%eax
082f48f7 +0x467b:  mov    %eax,(%esp)
082f48fa +0x467e:  call   082f47aa <+0x452e>
082f48ff +0x4683:  leave
082f4900 +0x4684:  ret
082f4901 +0x4685:  push   %ebp
082f4902 +0x4686:  mov    %esp,%ebp
082f4904 +0x4688:  sub    $0x28,%esp
082f4907 +0x468b:  mov    0x8(%ebp),%eax
082f490a +0x468e:  mov    %eax,(%esp)
082f490d +0x4691:  call   082f50ce <+0x4e52>
082f4912 +0x4696:  mov    %eax,0x4(%esp)
082f4916 +0x469a:  lea    -0x18(%ebp),%eax
082f4919 +0x469d:  mov    %eax,(%esp)
082f491c +0x46a0:  call   082f3020 <+0x2da4>
082f4921 +0x46a5:  mov    0xc(%ebp),%eax
082f4924 +0x46a8:  mov    %eax,(%esp)
082f4927 +0x46ab:  call   082f50ce <+0x4e52>
082f492c +0x46b0:  mov    0x8(%ebp),%edx
082f492f +0x46b3:  mov    (%eax),%ecx
082f4931 +0x46b5:  mov    %ecx,(%edx)
082f4933 +0x46b7:  mov    0x4(%eax),%ecx
082f4936 +0x46ba:  mov    %ecx,0x4(%edx)
082f4939 +0x46bd:  mov    0x8(%eax),%ecx
082f493c +0x46c0:  mov    %ecx,0x8(%edx)
082f493f +0x46c3:  mov    0xc(%eax),%eax
082f4942 +0x46c6:  mov    %eax,0xc(%edx)
082f4945 +0x46c9:  lea    -0x18(%ebp),%eax
082f4948 +0x46cc:  mov    %eax,(%esp)
082f494b +0x46cf:  call   082f50ce <+0x4e52>
082f4950 +0x46d4:  mov    0xc(%ebp),%edx
082f4953 +0x46d7:  mov    (%eax),%ecx
082f4955 +0x46d9:  mov    %ecx,(%edx)
082f4957 +0x46db:  mov    0x4(%eax),%ecx
082f495a +0x46de:  mov    %ecx,0x4(%edx)
082f495d +0x46e1:  mov    0x8(%eax),%ecx
082f4960 +0x46e4:  mov    %ecx,0x8(%edx)
082f4963 +0x46e7:  mov    0xc(%eax),%eax
082f4966 +0x46ea:  mov    %eax,0xc(%edx)
082f4969 +0x46ed:  leave
082f496a +0x46ee:  ret
082f496b +0x46ef:  push   %ebp
082f496c +0x46f0:  mov    %esp,%ebp
082f496e +0x46f2:  sub    $0x28,%esp
082f4971 +0x46f5:  mov    0x8(%ebp),%eax
082f4974 +0x46f8:  mov    %eax,(%esp)
082f4977 +0x46fb:  call   082f50d6 <+0x4e5a>
082f497c +0x4700:  mov    (%eax),%eax
082f497e +0x4702:  mov    %eax,-0xc(%ebp)
082f4981 +0x4705:  mov    0xc(%ebp),%eax
082f4984 +0x4708:  mov    %eax,(%esp)
082f4987 +0x470b:  call   082f50d6 <+0x4e5a>
082f498c +0x4710:  mov    (%eax),%edx
082f498e +0x4712:  mov    0x8(%ebp),%eax
082f4991 +0x4715:  mov    %edx,(%eax)
082f4993 +0x4717:  lea    -0xc(%ebp),%eax
082f4996 +0x471a:  mov    %eax,(%esp)
082f4999 +0x471d:  call   082f50d6 <+0x4e5a>
082f499e +0x4722:  mov    (%eax),%edx
082f49a0 +0x4724:  mov    0xc(%ebp),%eax
082f49a3 +0x4727:  mov    %edx,(%eax)
082f49a5 +0x4729:  leave
082f49a6 +0x472a:  ret
082f49a7 +0x472b:  push   %ebp
082f49a8 +0x472c:  mov    %esp,%ebp
082f49aa +0x472e:  mov    0x8(%ebp),%eax
082f49ad +0x4731:  pop    %ebp
082f49ae +0x4732:  ret
082f49af +0x4733:  nop
082f49b0 +0x4734:  push   %ebp
082f49b1 +0x4735:  mov    %esp,%ebp
082f49b3 +0x4737:  push   %ebx
082f49b4 +0x4738:  sub    $0x14,%esp
082f49b7 +0x473b:  mov    0x10(%ebp),%eax
082f49ba +0x473e:  mov    %eax,(%esp)
082f49bd +0x4741:  call   082f49a7 <+0x472b>
082f49c2 +0x4746:  mov    (%eax),%ebx
082f49c4 +0x4748:  mov    0xc(%ebp),%eax
082f49c7 +0x474b:  mov    %eax,0x4(%esp)
082f49cb +0x474f:  movl   $0x4,(%esp)
082f49d2 +0x4756:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f49d7 +0x475b:  mov    %eax,%edx
082f49d9 +0x475d:  test   %edx,%edx
082f49db +0x475f:  je     082f49df <+0x4763>
082f49dd +0x4761:  mov    %ebx,(%eax)
082f49df +0x4763:  add    $0x14,%esp
082f49e2 +0x4766:  pop    %ebx
082f49e3 +0x4767:  pop    %ebp
082f49e4 +0x4768:  ret
082f49e5 +0x4769:  nop
082f49e6 +0x476a:  push   %ebp
082f49e7 +0x476b:  mov    %esp,%ebp
082f49e9 +0x476d:  push   %ebx
082f49ea +0x476e:  sub    $0x24,%esp
082f49ed +0x4771:  movl   $0x1,0x4(%esp)
082f49f5 +0x4779:  mov    0x8(%ebp),%eax
082f49f8 +0x477c:  mov    %eax,(%esp)
082f49fb +0x477f:  call   082f46ac <+0x4430>
082f4a00 +0x4784:  mov    0x8(%ebp),%eax
082f4a03 +0x4787:  mov    0x24(%eax),%eax
082f4a06 +0x478a:  lea    0x4(%eax),%ebx
082f4a09 +0x478d:  mov    0x8(%ebp),%eax
082f4a0c +0x4790:  mov    %eax,(%esp)
082f4a0f +0x4793:  call   082f4702 <+0x4486>
082f4a14 +0x4798:  mov    %eax,(%ebx)
082f4a16 +0x479a:  mov    0xc(%ebp),%eax
082f4a19 +0x479d:  mov    %eax,(%esp)
082f4a1c +0x47a0:  call   082f49a7 <+0x472b>
082f4a21 +0x47a5:  mov    (%eax),%eax
082f4a23 +0x47a7:  mov    %eax,-0xc(%ebp)
082f4a26 +0x47aa:  mov    0x8(%ebp),%eax
082f4a29 +0x47ad:  mov    0x18(%eax),%edx
082f4a2c +0x47b0:  mov    0x8(%ebp),%eax
082f4a2f +0x47b3:  lea    -0xc(%ebp),%ecx
082f4a32 +0x47b6:  mov    %ecx,0x8(%esp)
082f4a36 +0x47ba:  mov    %edx,0x4(%esp)
082f4a3a +0x47be:  mov    %eax,(%esp)
082f4a3d +0x47c1:  call   082f49b0 <+0x4734>
082f4a42 +0x47c6:  mov    0x8(%ebp),%eax
082f4a45 +0x47c9:  mov    0x24(%eax),%eax
082f4a48 +0x47cc:  lea    0x4(%eax),%edx
082f4a4b +0x47cf:  mov    0x8(%ebp),%eax
082f4a4e +0x47d2:  add    $0x18,%eax
082f4a51 +0x47d5:  mov    %edx,0x4(%esp)
082f4a55 +0x47d9:  mov    %eax,(%esp)
082f4a58 +0x47dc:  call   082f4674 <+0x43f8>
082f4a5d +0x47e1:  mov    0x8(%ebp),%eax
082f4a60 +0x47e4:  mov    0x1c(%eax),%edx
082f4a63 +0x47e7:  mov    0x8(%ebp),%eax
082f4a66 +0x47ea:  mov    %edx,0x18(%eax)
082f4a69 +0x47ed:  add    $0x24,%esp
082f4a6c +0x47f0:  pop    %ebx
082f4a6d +0x47f1:  pop    %ebp
082f4a6e +0x47f2:  ret
082f4a6f +0x47f3:  push   %ebp
082f4a70 +0x47f4:  mov    %esp,%ebp
082f4a72 +0x47f6:  mov    0x8(%ebp),%eax
082f4a75 +0x47f9:  pop    %ebp
082f4a76 +0x47fa:  ret
082f4a77 +0x47fb:  push   %ebp
082f4a78 +0x47fc:  mov    %esp,%ebp
082f4a7a +0x47fe:  sub    $0x28,%esp
082f4a7d +0x4801:  movb   $0x0,-0x9(%ebp)
082f4a81 +0x4805:  mov    0x10(%ebp),%eax
082f4a84 +0x4808:  mov    %eax,0x8(%esp)
082f4a88 +0x480c:  mov    0xc(%ebp),%eax
082f4a8b +0x480f:  mov    %eax,0x4(%esp)
082f4a8f +0x4813:  mov    0x8(%ebp),%eax
082f4a92 +0x4816:  mov    %eax,(%esp)
082f4a95 +0x4819:  call   082f50de <+0x4e62>
082f4a9a +0x481e:  leave
082f4a9b +0x481f:  ret
082f4a9c +0x4820:  push   %ebp
082f4a9d +0x4821:  mov    %esp,%ebp
082f4a9f +0x4823:  mov    0x8(%ebp),%eax
082f4aa2 +0x4826:  pop    %ebp
082f4aa3 +0x4827:  ret
082f4aa4 +0x4828:  push   %ebp
082f4aa5 +0x4829:  mov    %esp,%ebp
082f4aa7 +0x482b:  mov    $0x15555555,%eax
082f4aac +0x4830:  pop    %ebp
082f4aad +0x4831:  ret
082f4aae +0x4832:  push   %ebp
082f4aaf +0x4833:  mov    %esp,%ebp
082f4ab1 +0x4835:  mov    0x8(%ebp),%eax
082f4ab4 +0x4838:  mov    0xc(%ebp),%edx
082f4ab7 +0x483b:  mov    %edx,(%eax)
082f4ab9 +0x483d:  pop    %ebp
082f4aba +0x483e:  ret
082f4abb +0x483f:  push   %ebp
082f4abc +0x4840:  mov    %esp,%ebp
082f4abe +0x4842:  sub    $0x18,%esp
082f4ac1 +0x4845:  mov    0x10(%ebp),%eax
082f4ac4 +0x4848:  mov    %eax,0x8(%esp)
082f4ac8 +0x484c:  mov    0xc(%ebp),%eax
082f4acb +0x484f:  mov    %eax,0x4(%esp)
082f4acf +0x4853:  mov    0x8(%ebp),%eax
082f4ad2 +0x4856:  mov    %eax,(%esp)
082f4ad5 +0x4859:  call   082f513d <+0x4ec1>
082f4ada +0x485e:  leave
082f4adb +0x485f:  ret
082f4adc +0x4860:  push   %ebp
082f4add +0x4861:  mov    %esp,%ebp
082f4adf +0x4863:  mov    0x8(%ebp),%eax
082f4ae2 +0x4866:  pop    %ebp
082f4ae3 +0x4867:  ret
082f4ae4 +0x4868:  push   %ebp
082f4ae5 +0x4869:  mov    %esp,%ebp
082f4ae7 +0x486b:  sub    $0x28,%esp
082f4aea +0x486e:  movb   $0x0,-0x9(%ebp)
082f4aee +0x4872:  mov    0x10(%ebp),%eax
082f4af1 +0x4875:  mov    %eax,0x8(%esp)
082f4af5 +0x4879:  mov    0xc(%ebp),%eax
082f4af8 +0x487c:  mov    %eax,0x4(%esp)
082f4afc +0x4880:  mov    0x8(%ebp),%eax
082f4aff +0x4883:  mov    %eax,(%esp)
082f4b02 +0x4886:  call   082f51e6 <+0x4f6a>
082f4b07 +0x488b:  leave
082f4b08 +0x488c:  ret
082f4b09 +0x488d:  nop
082f4b0a +0x488e:  push   %ebp
082f4b0b +0x488f:  mov    %esp,%ebp
082f4b0d +0x4891:  mov    0x8(%ebp),%eax
082f4b10 +0x4894:  pop    %ebp
082f4b11 +0x4895:  ret
082f4b12 +0x4896:  push   %ebp
082f4b13 +0x4897:  mov    %esp,%ebp
082f4b15 +0x4899:  mov    $0x1fffffff,%eax
082f4b1a +0x489e:  pop    %ebp
082f4b1b +0x489f:  ret
082f4b1c +0x48a0:  push   %ebp
082f4b1d +0x48a1:  mov    %esp,%ebp
082f4b1f +0x48a3:  mov    0x8(%ebp),%eax
082f4b22 +0x48a6:  mov    0xc(%ebp),%edx
082f4b25 +0x48a9:  mov    %edx,(%eax)
082f4b27 +0x48ab:  pop    %ebp
082f4b28 +0x48ac:  ret
082f4b29 +0x48ad:  push   %ebp
082f4b2a +0x48ae:  mov    %esp,%ebp
082f4b2c +0x48b0:  sub    $0x18,%esp
082f4b2f +0x48b3:  mov    0x10(%ebp),%eax
082f4b32 +0x48b6:  mov    %eax,0x8(%esp)
082f4b36 +0x48ba:  mov    0xc(%ebp),%eax
082f4b39 +0x48bd:  mov    %eax,0x4(%esp)
082f4b3d +0x48c1:  mov    0x8(%ebp),%eax
082f4b40 +0x48c4:  mov    %eax,(%esp)
082f4b43 +0x48c7:  call   082f5239 <+0x4fbd>
082f4b48 +0x48cc:  leave
082f4b49 +0x48cd:  ret
082f4b4a +0x48ce:  push   %ebp
082f4b4b +0x48cf:  mov    %esp,%ebp
082f4b4d +0x48d1:  sub    $0x28,%esp
082f4b50 +0x48d4:  mov    0xc(%ebp),%edx
082f4b53 +0x48d7:  mov    0x8(%ebp),%eax
082f4b56 +0x48da:  mov    %edx,%ecx
082f4b58 +0x48dc:  sub    %eax,%ecx
082f4b5a +0x48de:  mov    %ecx,%eax
082f4b5c +0x48e0:  sar    $0x2,%eax
082f4b5f +0x48e3:  imul   $0xaaaaaaab,%eax,%eax
082f4b65 +0x48e9:  mov    %eax,-0xc(%ebp)
082f4b68 +0x48ec:  jmp    082f4b94 <+0x4918>
082f4b6a +0x48ee:  mov    0x8(%ebp),%eax
082f4b6d +0x48f1:  mov    %eax,(%esp)
082f4b70 +0x48f4:  call   082f3102 <+0x2e86>
082f4b75 +0x48f9:  mov    0x10(%ebp),%edx
082f4b78 +0x48fc:  mov    (%eax),%ecx
082f4b7a +0x48fe:  mov    %ecx,(%edx)
082f4b7c +0x4900:  mov    0x4(%eax),%ecx
082f4b7f +0x4903:  mov    %ecx,0x4(%edx)
082f4b82 +0x4906:  mov    0x8(%eax),%eax
082f4b85 +0x4909:  mov    %eax,0x8(%edx)
082f4b88 +0x490c:  addl   $0xc,0x8(%ebp)
082f4b8c +0x4910:  addl   $0xc,0x10(%ebp)
082f4b90 +0x4914:  subl   $0x1,-0xc(%ebp)
082f4b94 +0x4918:  cmpl   $0x0,-0xc(%ebp)
082f4b98 +0x491c:  setg   %al
082f4b9b +0x491f:  test   %al,%al
082f4b9d +0x4921:  jne    082f4b6a <+0x48ee>
082f4b9f +0x4923:  mov    0x10(%ebp),%eax
082f4ba2 +0x4926:  leave
082f4ba3 +0x4927:  ret
082f4ba4 +0x4928:  push   %ebp
082f4ba5 +0x4929:  mov    %esp,%ebp
082f4ba7 +0x492b:  sub    $0x48,%esp
082f4baa +0x492e:  lea    0x8(%ebp),%eax
082f4bad +0x4931:  mov    %eax,0x4(%esp)
082f4bb1 +0x4935:  lea    0xc(%ebp),%eax
082f4bb4 +0x4938:  mov    %eax,(%esp)
082f4bb7 +0x493b:  call   082f2663 <+0x23e7>
082f4bbc +0x4940:  cmp    $0x1,%eax
082f4bbf +0x4943:  setle  %al
082f4bc2 +0x4946:  test   %al,%al
082f4bc4 +0x4948:  jne    082f4c7f <+0x4a03>
082f4bca +0x494e:  lea    0x8(%ebp),%edx
082f4bcd +0x4951:  mov    %edx,0x4(%esp)
082f4bd1 +0x4955:  lea    0xc(%ebp),%eax
082f4bd4 +0x4958:  mov    %eax,(%esp)
082f4bd7 +0x495b:  call   082f2663 <+0x23e7>
082f4bdc +0x4960:  mov    %eax,-0xc(%ebp)
082f4bdf +0x4963:  mov    -0xc(%ebp),%eax
082f4be2 +0x4966:  sub    $0x2,%eax
082f4be5 +0x4969:  mov    %eax,%edx
082f4be7 +0x496b:  shr    $0x1f,%edx
082f4bea +0x496e:  lea    (%edx,%eax,1),%eax
082f4bed +0x4971:  sar    %eax
082f4bef +0x4973:  mov    %eax,-0x14(%ebp)
082f4bf2 +0x4976:  lea    -0x10(%ebp),%eax
082f4bf5 +0x4979:  lea    -0x14(%ebp),%edx
082f4bf8 +0x497c:  mov    %edx,0x8(%esp)
082f4bfc +0x4980:  lea    0x8(%ebp),%edx
082f4bff +0x4983:  mov    %edx,0x4(%esp)
082f4c03 +0x4987:  mov    %eax,(%esp)
082f4c06 +0x498a:  call   082f25ae <+0x2332>
082f4c0b +0x498f:  sub    $0x4,%esp
082f4c0e +0x4992:  lea    -0x10(%ebp),%eax
082f4c11 +0x4995:  mov    %eax,(%esp)
082f4c14 +0x4998:  call   082f18d2 <+0x1656>
082f4c19 +0x499d:  mov    %eax,(%esp)
082f4c1c +0x49a0:  call   082f3102 <+0x2e86>
082f4c21 +0x49a5:  mov    (%eax),%edx
082f4c23 +0x49a7:  mov    %edx,-0x20(%ebp)
082f4c26 +0x49aa:  mov    0x4(%eax),%edx
082f4c29 +0x49ad:  mov    %edx,-0x1c(%ebp)
082f4c2c +0x49b0:  mov    0x8(%eax),%eax
082f4c2f +0x49b3:  mov    %eax,-0x18(%ebp)
082f4c32 +0x49b6:  lea    -0x20(%ebp),%eax
082f4c35 +0x49b9:  mov    %eax,(%esp)
082f4c38 +0x49bc:  call   082f3102 <+0x2e86>
082f4c3d +0x49c1:  mov    -0x14(%ebp),%edx
082f4c40 +0x49c4:  mov    (%eax),%ecx
082f4c42 +0x49c6:  mov    %ecx,0xc(%esp)
082f4c46 +0x49ca:  mov    0x4(%eax),%ecx
082f4c49 +0x49cd:  mov    %ecx,0x10(%esp)
082f4c4d +0x49d1:  mov    0x8(%eax),%eax
082f4c50 +0x49d4:  mov    %eax,0x14(%esp)
082f4c54 +0x49d8:  mov    -0xc(%ebp),%eax
082f4c57 +0x49db:  mov    %eax,0x8(%esp)
082f4c5b +0x49df:  mov    %edx,0x4(%esp)
082f4c5f +0x49e3:  mov    0x8(%ebp),%eax
082f4c62 +0x49e6:  mov    %eax,(%esp)
082f4c65 +0x49e9:  call   082f52de <+0x5062>
082f4c6a +0x49ee:  mov    -0x14(%ebp),%eax
082f4c6d +0x49f1:  test   %eax,%eax
082f4c6f +0x49f3:  je     082f4c82 <+0x4a06>
082f4c71 +0x49f5:  mov    -0x14(%ebp),%eax
082f4c74 +0x49f8:  sub    $0x1,%eax
082f4c77 +0x49fb:  mov    %eax,-0x14(%ebp)
082f4c7a +0x49fe:  jmp    082f4bf2 <+0x4976>
082f4c7f +0x4a03:  nop
082f4c80 +0x4a04:  jmp    082f4c83 <+0x4a07>
082f4c82 +0x4a06:  nop
082f4c83 +0x4a07:  leave
082f4c84 +0x4a08:  ret
082f4c85 +0x4a09:  push   %ebp
082f4c86 +0x4a0a:  mov    %esp,%ebp
082f4c88 +0x4a0c:  push   %ebx
082f4c89 +0x4a0d:  sub    $0x34,%esp
082f4c8c +0x4a10:  lea    0x10(%ebp),%eax
082f4c8f +0x4a13:  mov    %eax,(%esp)
082f4c92 +0x4a16:  call   082f18d2 <+0x1656>
082f4c97 +0x4a1b:  mov    %eax,(%esp)
082f4c9a +0x4a1e:  call   082f3102 <+0x2e86>
082f4c9f +0x4a23:  mov    (%eax),%edx
082f4ca1 +0x4a25:  mov    %edx,-0x14(%ebp)
082f4ca4 +0x4a28:  mov    0x4(%eax),%edx
082f4ca7 +0x4a2b:  mov    %edx,-0x10(%ebp)
082f4caa +0x4a2e:  mov    0x8(%eax),%eax
082f4cad +0x4a31:  mov    %eax,-0xc(%ebp)
082f4cb0 +0x4a34:  lea    0x10(%ebp),%eax
082f4cb3 +0x4a37:  mov    %eax,(%esp)
082f4cb6 +0x4a3a:  call   082f18d2 <+0x1656>
082f4cbb +0x4a3f:  mov    %eax,%ebx
082f4cbd +0x4a41:  lea    0x8(%ebp),%eax
082f4cc0 +0x4a44:  mov    %eax,(%esp)
082f4cc3 +0x4a47:  call   082f18d2 <+0x1656>
082f4cc8 +0x4a4c:  mov    %eax,(%esp)
082f4ccb +0x4a4f:  call   082f3102 <+0x2e86>
082f4cd0 +0x4a54:  mov    (%eax),%edx
082f4cd2 +0x4a56:  mov    %edx,(%ebx)
082f4cd4 +0x4a58:  mov    0x4(%eax),%edx
082f4cd7 +0x4a5b:  mov    %edx,0x4(%ebx)
082f4cda +0x4a5e:  mov    0x8(%eax),%eax
082f4cdd +0x4a61:  mov    %eax,0x8(%ebx)
082f4ce0 +0x4a64:  lea    -0x14(%ebp),%eax
082f4ce3 +0x4a67:  mov    %eax,(%esp)
082f4ce6 +0x4a6a:  call   082f3102 <+0x2e86>
082f4ceb +0x4a6f:  mov    %eax,%ebx
082f4ced +0x4a71:  lea    0x8(%ebp),%eax
082f4cf0 +0x4a74:  mov    %eax,0x4(%esp)
082f4cf4 +0x4a78:  lea    0xc(%ebp),%eax
082f4cf7 +0x4a7b:  mov    %eax,(%esp)
082f4cfa +0x4a7e:  call   082f2663 <+0x23e7>
082f4cff +0x4a83:  mov    (%ebx),%edx
082f4d01 +0x4a85:  mov    %edx,0xc(%esp)
082f4d05 +0x4a89:  mov    0x4(%ebx),%edx
082f4d08 +0x4a8c:  mov    %edx,0x10(%esp)
082f4d0c +0x4a90:  mov    0x8(%ebx),%edx
082f4d0f +0x4a93:  mov    %edx,0x14(%esp)
082f4d13 +0x4a97:  mov    %eax,0x8(%esp)
082f4d17 +0x4a9b:  movl   $0x0,0x4(%esp)
082f4d1f +0x4aa3:  mov    0x8(%ebp),%eax
082f4d22 +0x4aa6:  mov    %eax,(%esp)
082f4d25 +0x4aa9:  call   082f52de <+0x5062>
082f4d2a +0x4aae:  add    $0x34,%esp
082f4d2d +0x4ab1:  pop    %ebx
082f4d2e +0x4ab2:  pop    %ebp
082f4d2f +0x4ab3:  ret
082f4d30 +0x4ab4:  push   %ebp
082f4d31 +0x4ab5:  mov    %esp,%ebp
082f4d33 +0x4ab7:  push   %ebx
082f4d34 +0x4ab8:  sub    $0x14,%esp
082f4d37 +0x4abb:  lea    0xc(%ebp),%eax
082f4d3a +0x4abe:  mov    %eax,(%esp)
082f4d3d +0x4ac1:  call   082f18d2 <+0x1656>
082f4d42 +0x4ac6:  mov    %eax,%ebx
082f4d44 +0x4ac8:  lea    0x8(%ebp),%eax
082f4d47 +0x4acb:  mov    %eax,(%esp)
082f4d4a +0x4ace:  call   082f18d2 <+0x1656>
082f4d4f +0x4ad3:  mov    %ebx,0x4(%esp)
082f4d53 +0x4ad7:  mov    %eax,(%esp)
082f4d56 +0x4ada:  call   082f54f0 <+0x5274>
082f4d5b +0x4adf:  add    $0x14,%esp
082f4d5e +0x4ae2:  pop    %ebx
082f4d5f +0x4ae3:  pop    %ebp
082f4d60 +0x4ae4:  ret
082f4d61 +0x4ae5:  push   %ebp
082f4d62 +0x4ae6:  mov    %esp,%ebp
082f4d64 +0x4ae8:  push   %edi
082f4d65 +0x4ae9:  push   %esi
082f4d66 +0x4aea:  push   %ebx
082f4d67 +0x4aeb:  sub    $0x2c,%esp
082f4d6a +0x4aee:  mov    0x8(%ebp),%edi
082f4d6d +0x4af1:  mov    0x14(%ebp),%eax
082f4d70 +0x4af4:  mov    %eax,(%esp)
082f4d73 +0x4af7:  call   082f42c7 <+0x404b>
082f4d78 +0x4afc:  mov    %eax,%esi
082f4d7a +0x4afe:  mov    0x10(%ebp),%eax
082f4d7d +0x4b01:  mov    %eax,(%esp)
082f4d80 +0x4b04:  call   082f42c7 <+0x404b>
082f4d85 +0x4b09:  mov    %eax,%ebx
082f4d87 +0x4b0b:  mov    0xc(%ebp),%eax
082f4d8a +0x4b0e:  mov    %eax,(%esp)
082f4d8d +0x4b11:  call   082f42c7 <+0x404b>
082f4d92 +0x4b16:  mov    %esi,0x8(%esp)
082f4d96 +0x4b1a:  mov    %ebx,0x4(%esp)
082f4d9a +0x4b1e:  mov    %eax,(%esp)
082f4d9d +0x4b21:  call   082f5550 <+0x52d4>
082f4da2 +0x4b26:  mov    %eax,-0x1c(%ebp)
082f4da5 +0x4b29:  lea    -0x1c(%ebp),%eax
082f4da8 +0x4b2c:  mov    %eax,0x4(%esp)
082f4dac +0x4b30:  mov    %edi,(%esp)
082f4daf +0x4b33:  call   082f2596 <+0x231a>
082f4db4 +0x4b38:  mov    %edi,%eax
082f4db6 +0x4b3a:  add    $0x2c,%esp
082f4db9 +0x4b3d:  pop    %ebx
082f4dba +0x4b3e:  pop    %esi
082f4dbb +0x4b3f:  pop    %edi
082f4dbc +0x4b40:  pop    %ebp
082f4dbd +0x4b41:  ret    $0x4
082f4dc0 +0x4b44:  push   %ebp
082f4dc1 +0x4b45:  mov    %esp,%ebp
082f4dc3 +0x4b47:  pop    %ebp
082f4dc4 +0x4b48:  ret
082f4dc5 +0x4b49:  nop
082f4dc6 +0x4b4a:  push   %ebp
082f4dc7 +0x4b4b:  mov    %esp,%ebp
082f4dc9 +0x4b4d:  pop    %ebp
082f4dca +0x4b4e:  ret
082f4dcb +0x4b4f:  nop
082f4dcc +0x4b50:  push   %ebp
082f4dcd +0x4b51:  mov    %esp,%ebp
082f4dcf +0x4b53:  sub    $0x18,%esp
082f4dd2 +0x4b56:  mov    0x8(%ebp),%eax
082f4dd5 +0x4b59:  movl   $0x0,0x8(%esp)
082f4ddd +0x4b61:  movl   $0x1,0x4(%esp)
082f4de5 +0x4b69:  mov    %eax,(%esp)
082f4de8 +0x4b6c:  call   082f5576 <+0x52fa>
082f4ded +0x4b71:  leave
082f4dee +0x4b72:  ret
082f4def +0x4b73:  push   %ebp
082f4df0 +0x4b74:  mov    %esp,%ebp
082f4df2 +0x4b76:  mov    0x8(%ebp),%eax
082f4df5 +0x4b79:  pop    %ebp
082f4df6 +0x4b7a:  ret
082f4df7 +0x4b7b:  nop
082f4df8 +0x4b7c:  push   %ebp
082f4df9 +0x4b7d:  mov    %esp,%ebp
082f4dfb +0x4b7f:  push   %ebx
082f4dfc +0x4b80:  sub    $0x14,%esp
082f4dff +0x4b83:  mov    0x10(%ebp),%eax
082f4e02 +0x4b86:  mov    %eax,(%esp)
082f4e05 +0x4b89:  call   082f4def <+0x4b73>
082f4e0a +0x4b8e:  mov    %eax,%ebx
082f4e0c +0x4b90:  mov    0xc(%ebp),%eax
082f4e0f +0x4b93:  mov    %eax,0x4(%esp)
082f4e13 +0x4b97:  movl   $0x18,(%esp)
082f4e1a +0x4b9e:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f4e1f +0x4ba3:  mov    %eax,%edx
082f4e21 +0x4ba5:  test   %edx,%edx
082f4e23 +0x4ba7:  je     082f4e31 <+0x4bb5>
082f4e25 +0x4ba9:  mov    %ebx,0x4(%esp)
082f4e29 +0x4bad:  mov    %eax,(%esp)
082f4e2c +0x4bb0:  call   082f55b4 <+0x5338>
082f4e31 +0x4bb5:  add    $0x14,%esp
082f4e34 +0x4bb8:  pop    %ebx
082f4e35 +0x4bb9:  pop    %ebp
082f4e36 +0x4bba:  ret
082f4e37 +0x4bbb:  nop
082f4e38 +0x4bbc:  push   %ebp
082f4e39 +0x4bbd:  mov    %esp,%ebp
082f4e3b +0x4bbf:  sub    $0x18,%esp
082f4e3e +0x4bc2:  mov    0xc(%ebp),%eax
082f4e41 +0x4bc5:  mov    %eax,(%esp)
082f4e44 +0x4bc8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082f4e49 +0x4bcd:  leave
082f4e4a +0x4bce:  ret
082f4e4b +0x4bcf:  nop
082f4e4c +0x4bd0:  push   %ebp
082f4e4d +0x4bd1:  mov    %esp,%ebp
082f4e4f +0x4bd3:  push   %ebx
082f4e50 +0x4bd4:  sub    $0x44,%esp
082f4e53 +0x4bd7:  mov    0x10(%ebp),%eax
082f4e56 +0x4bda:  mov    %al,-0x2c(%ebp)
082f4e59 +0x4bdd:  mov    0x8(%ebp),%eax
082f4e5c +0x4be0:  mov    0x24(%eax),%eax
082f4e5f +0x4be3:  mov    %eax,%edx
082f4e61 +0x4be5:  mov    0x8(%ebp),%eax
082f4e64 +0x4be8:  mov    0x14(%eax),%eax
082f4e67 +0x4beb:  mov    %edx,%ecx
082f4e69 +0x4bed:  sub    %eax,%ecx
082f4e6b +0x4bef:  mov    %ecx,%eax
082f4e6d +0x4bf1:  sar    $0x2,%eax
082f4e70 +0x4bf4:  add    $0x1,%eax
082f4e73 +0x4bf7:  mov    %eax,-0x1c(%ebp)
082f4e76 +0x4bfa:  mov    0xc(%ebp),%eax
082f4e79 +0x4bfd:  add    -0x1c(%ebp),%eax
082f4e7c +0x4c00:  mov    %eax,-0x18(%ebp)
082f4e7f +0x4c03:  mov    0x8(%ebp),%eax
082f4e82 +0x4c06:  mov    0x4(%eax),%eax
082f4e85 +0x4c09:  mov    -0x18(%ebp),%edx
082f4e88 +0x4c0c:  add    %edx,%edx
082f4e8a +0x4c0e:  cmp    %edx,%eax
082f4e8c +0x4c10:  jbe    082f4f26 <+0x4caa>
082f4e92 +0x4c16:  mov    0x8(%ebp),%eax
082f4e95 +0x4c19:  mov    (%eax),%edx
082f4e97 +0x4c1b:  mov    0x8(%ebp),%eax
082f4e9a +0x4c1e:  mov    0x4(%eax),%eax
082f4e9d +0x4c21:  sub    -0x18(%ebp),%eax
082f4ea0 +0x4c24:  shr    %eax
082f4ea2 +0x4c26:  lea    0x0(,%eax,4),%ecx
082f4ea9 +0x4c2d:  cmpb   $0x0,-0x2c(%ebp)
082f4ead +0x4c31:  je     082f4eb7 <+0x4c3b>
082f4eaf +0x4c33:  mov    0xc(%ebp),%eax
082f4eb2 +0x4c36:  shl    $0x2,%eax
082f4eb5 +0x4c39:  jmp    082f4ebc <+0x4c40>
082f4eb7 +0x4c3b:  mov    $0x0,%eax
082f4ebc +0x4c40:  lea    (%ecx,%eax,1),%eax
082f4ebf +0x4c43:  lea    (%edx,%eax,1),%eax
082f4ec2 +0x4c46:  mov    %eax,-0x14(%ebp)
082f4ec5 +0x4c49:  mov    0x8(%ebp),%eax
082f4ec8 +0x4c4c:  mov    0x14(%eax),%eax
082f4ecb +0x4c4f:  cmp    -0x14(%ebp),%eax
082f4ece +0x4c52:  jbe    082f4ef7 <+0x4c7b>
082f4ed0 +0x4c54:  mov    0x8(%ebp),%eax
082f4ed3 +0x4c57:  mov    0x24(%eax),%eax
082f4ed6 +0x4c5a:  lea    0x4(%eax),%ecx
082f4ed9 +0x4c5d:  mov    0x8(%ebp),%eax
082f4edc +0x4c60:  mov    0x14(%eax),%eax
082f4edf +0x4c63:  mov    -0x14(%ebp),%edx
082f4ee2 +0x4c66:  mov    %edx,0x8(%esp)
082f4ee6 +0x4c6a:  mov    %ecx,0x4(%esp)
082f4eea +0x4c6e:  mov    %eax,(%esp)
082f4eed +0x4c71:  call   082f55fc <+0x5380>
082f4ef2 +0x4c76:  jmp    082f4fe3 <+0x4d67>
082f4ef7 +0x4c7b:  mov    -0x1c(%ebp),%eax
082f4efa +0x4c7e:  shl    $0x2,%eax
082f4efd +0x4c81:  mov    %eax,%edx
082f4eff +0x4c83:  add    -0x14(%ebp),%edx
082f4f02 +0x4c86:  mov    0x8(%ebp),%eax
082f4f05 +0x4c89:  mov    0x24(%eax),%eax
082f4f08 +0x4c8c:  lea    0x4(%eax),%ecx
082f4f0b +0x4c8f:  mov    0x8(%ebp),%eax
082f4f0e +0x4c92:  mov    0x14(%eax),%eax
082f4f11 +0x4c95:  mov    %edx,0x8(%esp)
082f4f15 +0x4c99:  mov    %ecx,0x4(%esp)
082f4f19 +0x4c9d:  mov    %eax,(%esp)
082f4f1c +0x4ca0:  call   082f5634 <+0x53b8>
082f4f21 +0x4ca5:  jmp    082f4fe3 <+0x4d67>
082f4f26 +0x4caa:  mov    0x8(%ebp),%eax
082f4f29 +0x4cad:  mov    0x4(%eax),%ebx
082f4f2c +0x4cb0:  mov    0x8(%ebp),%eax
082f4f2f +0x4cb3:  lea    0x4(%eax),%edx
082f4f32 +0x4cb6:  lea    0xc(%ebp),%eax
082f4f35 +0x4cb9:  mov    %eax,0x4(%esp)
082f4f39 +0x4cbd:  mov    %edx,(%esp)
082f4f3c +0x4cc0:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
082f4f41 +0x4cc5:  mov    (%eax),%eax
082f4f43 +0x4cc7:  lea    (%ebx,%eax,1),%eax
082f4f46 +0x4cca:  add    $0x2,%eax
082f4f49 +0x4ccd:  mov    %eax,-0x10(%ebp)
082f4f4c +0x4cd0:  mov    0x8(%ebp),%eax
082f4f4f +0x4cd3:  mov    -0x10(%ebp),%edx
082f4f52 +0x4cd6:  mov    %edx,0x4(%esp)
082f4f56 +0x4cda:  mov    %eax,(%esp)
082f4f59 +0x4cdd:  call   082f47d6 <+0x455a>
082f4f5e +0x4ce2:  mov    %eax,-0xc(%ebp)
082f4f61 +0x4ce5:  mov    -0x18(%ebp),%eax
082f4f64 +0x4ce8:  mov    -0x10(%ebp),%edx
082f4f67 +0x4ceb:  mov    %edx,%ecx
082f4f69 +0x4ced:  sub    %eax,%ecx
082f4f6b +0x4cef:  mov    %ecx,%eax
082f4f6d +0x4cf1:  shr    %eax
082f4f6f +0x4cf3:  lea    0x0(,%eax,4),%edx
082f4f76 +0x4cfa:  cmpb   $0x0,-0x2c(%ebp)
082f4f7a +0x4cfe:  je     082f4f84 <+0x4d08>
082f4f7c +0x4d00:  mov    0xc(%ebp),%eax
082f4f7f +0x4d03:  shl    $0x2,%eax
082f4f82 +0x4d06:  jmp    082f4f89 <+0x4d0d>
082f4f84 +0x4d08:  mov    $0x0,%eax
082f4f89 +0x4d0d:  lea    (%edx,%eax,1),%eax
082f4f8c +0x4d10:  add    -0xc(%ebp),%eax
082f4f8f +0x4d13:  mov    %eax,-0x14(%ebp)
082f4f92 +0x4d16:  mov    0x8(%ebp),%eax
082f4f95 +0x4d19:  mov    0x24(%eax),%eax
082f4f98 +0x4d1c:  lea    0x4(%eax),%ecx
082f4f9b +0x4d1f:  mov    0x8(%ebp),%eax
082f4f9e +0x4d22:  mov    0x14(%eax),%eax
082f4fa1 +0x4d25:  mov    -0x14(%ebp),%edx
082f4fa4 +0x4d28:  mov    %edx,0x8(%esp)
082f4fa8 +0x4d2c:  mov    %ecx,0x4(%esp)
082f4fac +0x4d30:  mov    %eax,(%esp)
082f4faf +0x4d33:  call   082f55fc <+0x5380>
082f4fb4 +0x4d38:  mov    0x8(%ebp),%eax
082f4fb7 +0x4d3b:  mov    0x4(%eax),%ecx
082f4fba +0x4d3e:  mov    0x8(%ebp),%eax
082f4fbd +0x4d41:  mov    (%eax),%edx
082f4fbf +0x4d43:  mov    0x8(%ebp),%eax
082f4fc2 +0x4d46:  mov    %ecx,0x8(%esp)
082f4fc6 +0x4d4a:  mov    %edx,0x4(%esp)
082f4fca +0x4d4e:  mov    %eax,(%esp)
082f4fcd +0x4d51:  call   082f3d8c <+0x3b10>
082f4fd2 +0x4d56:  mov    0x8(%ebp),%eax
082f4fd5 +0x4d59:  mov    -0xc(%ebp),%edx
082f4fd8 +0x4d5c:  mov    %edx,(%eax)
082f4fda +0x4d5e:  mov    0x8(%ebp),%eax
082f4fdd +0x4d61:  mov    -0x10(%ebp),%edx
082f4fe0 +0x4d64:  mov    %edx,0x4(%eax)
082f4fe3 +0x4d67:  mov    0x8(%ebp),%eax
082f4fe6 +0x4d6a:  lea    0x8(%eax),%edx
082f4fe9 +0x4d6d:  mov    -0x14(%ebp),%eax
082f4fec +0x4d70:  mov    %eax,0x4(%esp)
082f4ff0 +0x4d74:  mov    %edx,(%esp)
082f4ff3 +0x4d77:  call   082f4674 <+0x43f8>
082f4ff8 +0x4d7c:  mov    -0x1c(%ebp),%eax
082f4ffb +0x4d7f:  sub    $0x1,%eax
082f4ffe +0x4d82:  shl    $0x2,%eax
082f5001 +0x4d85:  add    -0x14(%ebp),%eax
082f5004 +0x4d88:  mov    0x8(%ebp),%edx
082f5007 +0x4d8b:  add    $0x18,%edx
082f500a +0x4d8e:  mov    %eax,0x4(%esp)
082f500e +0x4d92:  mov    %edx,(%esp)
082f5011 +0x4d95:  call   082f4674 <+0x43f8>
082f5016 +0x4d9a:  add    $0x44,%esp
082f5019 +0x4d9d:  pop    %ebx
082f501a +0x4d9e:  pop    %ebp
082f501b +0x4d9f:  ret
082f501c +0x4da0:  push   %ebp
082f501d +0x4da1:  mov    %esp,%ebp
082f501f +0x4da3:  sub    $0x18,%esp
082f5022 +0x4da6:  mov    0x8(%ebp),%eax
082f5025 +0x4da9:  mov    %eax,(%esp)
082f5028 +0x4dac:  call   082f566c <+0x53f0>
082f502d +0x4db1:  cmp    0xc(%ebp),%eax
082f5030 +0x4db4:  setb   %al
082f5033 +0x4db7:  movzbl %al,%eax
082f5036 +0x4dba:  test   %eax,%eax
082f5038 +0x4dbc:  setne  %al
082f503b +0x4dbf:  test   %al,%al
082f503d +0x4dc1:  je     082f5044 <+0x4dc8>
082f503f +0x4dc3:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
082f5044 +0x4dc8:  mov    0xc(%ebp),%eax
082f5047 +0x4dcb:  shl    $0x2,%eax
082f504a +0x4dce:  mov    %eax,(%esp)
082f504d +0x4dd1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082f5052 +0x4dd6:  leave
082f5053 +0x4dd7:  ret
082f5054 +0x4dd8:  push   %ebp
082f5055 +0x4dd9:  mov    %esp,%ebp
082f5057 +0x4ddb:  mov    0x8(%ebp),%eax
082f505a +0x4dde:  pop    %ebp
082f505b +0x4ddf:  ret
082f505c +0x4de0:  push   %ebp
082f505d +0x4de1:  mov    %esp,%ebp
082f505f +0x4de3:  sub    $0x18,%esp
082f5062 +0x4de6:  mov    0x8(%ebp),%eax
082f5065 +0x4de9:  mov    %eax,(%esp)
082f5068 +0x4dec:  call   082f5676 <+0x53fa>
082f506d +0x4df1:  leave
082f506e +0x4df2:  ret
082f506f +0x4df3:  nop
082f5070 +0x4df4:  push   %ebp
082f5071 +0x4df5:  mov    %esp,%ebp
082f5073 +0x4df7:  pop    %ebp
082f5074 +0x4df8:  ret
082f5075 +0x4df9:  nop
082f5076 +0x4dfa:  push   %ebp
082f5077 +0x4dfb:  mov    %esp,%ebp
082f5079 +0x4dfd:  pop    %ebp
082f507a +0x4dfe:  ret
082f507b +0x4dff:  nop
082f507c +0x4e00:  push   %ebp
082f507d +0x4e01:  mov    %esp,%ebp
082f507f +0x4e03:  sub    $0x18,%esp
082f5082 +0x4e06:  mov    0x8(%ebp),%eax
082f5085 +0x4e09:  mov    %eax,(%esp)
082f5088 +0x4e0c:  call   082f567c <+0x5400>
082f508d +0x4e11:  cmp    0xc(%ebp),%eax
082f5090 +0x4e14:  setb   %al
082f5093 +0x4e17:  movzbl %al,%eax
082f5096 +0x4e1a:  test   %eax,%eax
082f5098 +0x4e1c:  setne  %al
082f509b +0x4e1f:  test   %al,%al
082f509d +0x4e21:  je     082f50a4 <+0x4e28>
082f509f +0x4e23:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
082f50a4 +0x4e28:  mov    0xc(%ebp),%eax
082f50a7 +0x4e2b:  shl    $0x2,%eax
082f50aa +0x4e2e:  mov    %eax,(%esp)
082f50ad +0x4e31:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082f50b2 +0x4e36:  leave
082f50b3 +0x4e37:  ret
082f50b4 +0x4e38:  push   %ebp
082f50b5 +0x4e39:  mov    %esp,%ebp
082f50b7 +0x4e3b:  sub    $0x18,%esp
082f50ba +0x4e3e:  mov    0xc(%ebp),%edx
082f50bd +0x4e41:  mov    0x8(%ebp),%eax
082f50c0 +0x4e44:  mov    %edx,0x4(%esp)
082f50c4 +0x4e48:  mov    %eax,(%esp)
082f50c7 +0x4e4b:  call   082f5686 <+0x540a>
082f50cc +0x4e50:  leave
082f50cd +0x4e51:  ret
082f50ce +0x4e52:  push   %ebp
082f50cf +0x4e53:  mov    %esp,%ebp
082f50d1 +0x4e55:  mov    0x8(%ebp),%eax
082f50d4 +0x4e58:  pop    %ebp
082f50d5 +0x4e59:  ret
082f50d6 +0x4e5a:  push   %ebp
082f50d7 +0x4e5b:  mov    %esp,%ebp
082f50d9 +0x4e5d:  mov    0x8(%ebp),%eax
082f50dc +0x4e60:  pop    %ebp
082f50dd +0x4e61:  ret
082f50de +0x4e62:  push   %ebp
082f50df +0x4e63:  mov    %esp,%ebp
082f50e1 +0x4e65:  push   %ebx
082f50e2 +0x4e66:  sub    $0x24,%esp
082f50e5 +0x4e69:  mov    0xc(%ebp),%edx
082f50e8 +0x4e6c:  mov    0x8(%ebp),%eax
082f50eb +0x4e6f:  mov    %edx,%ecx
082f50ed +0x4e71:  sub    %eax,%ecx
082f50ef +0x4e73:  mov    %ecx,%eax
082f50f1 +0x4e75:  sar    $0x2,%eax
082f50f4 +0x4e78:  imul   $0xaaaaaaab,%eax,%eax
082f50fa +0x4e7e:  mov    %eax,-0xc(%ebp)
082f50fd +0x4e81:  jmp    082f5129 <+0x4ead>
082f50ff +0x4e83:  subl   $0xc,0x10(%ebp)
082f5103 +0x4e87:  mov    0x10(%ebp),%ebx
082f5106 +0x4e8a:  subl   $0xc,0xc(%ebp)
082f510a +0x4e8e:  mov    0xc(%ebp),%eax
082f510d +0x4e91:  mov    %eax,(%esp)
082f5110 +0x4e94:  call   082f3102 <+0x2e86>
082f5115 +0x4e99:  mov    (%eax),%edx
082f5117 +0x4e9b:  mov    %edx,(%ebx)
082f5119 +0x4e9d:  mov    0x4(%eax),%edx
082f511c +0x4ea0:  mov    %edx,0x4(%ebx)
082f511f +0x4ea3:  mov    0x8(%eax),%eax
082f5122 +0x4ea6:  mov    %eax,0x8(%ebx)
082f5125 +0x4ea9:  subl   $0x1,-0xc(%ebp)
082f5129 +0x4ead:  cmpl   $0x0,-0xc(%ebp)
082f512d +0x4eb1:  setg   %al
082f5130 +0x4eb4:  test   %al,%al
082f5132 +0x4eb6:  jne    082f50ff <+0x4e83>
082f5134 +0x4eb8:  mov    0x10(%ebp),%eax
082f5137 +0x4ebb:  add    $0x24,%esp
082f513a +0x4ebe:  pop    %ebx
082f513b +0x4ebf:  pop    %ebp
082f513c +0x4ec0:  ret
082f513d +0x4ec1:  push   %ebp
082f513e +0x4ec2:  mov    %esp,%ebp
082f5140 +0x4ec4:  push   %esi
082f5141 +0x4ec5:  push   %ebx
082f5142 +0x4ec6:  sub    $0x20,%esp
082f5145 +0x4ec9:  mov    0x10(%ebp),%eax
082f5148 +0x4ecc:  mov    %eax,-0xc(%ebp)
082f514b +0x4ecf:  jmp    082f5192 <+0x4f16>
082f514d +0x4ed1:  lea    0x8(%ebp),%eax
082f5150 +0x4ed4:  mov    %eax,(%esp)
082f5153 +0x4ed7:  call   082f56be <+0x5442>
082f5158 +0x4edc:  mov    %eax,%ebx
082f515a +0x4ede:  mov    -0xc(%ebp),%eax
082f515d +0x4ee1:  mov    %eax,0x4(%esp)
082f5161 +0x4ee5:  movl   $0xc,(%esp)
082f5168 +0x4eec:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f516d +0x4ef1:  mov    %eax,%edx
082f516f +0x4ef3:  test   %edx,%edx
082f5171 +0x4ef5:  je     082f5183 <+0x4f07>
082f5173 +0x4ef7:  mov    (%ebx),%edx
082f5175 +0x4ef9:  mov    %edx,(%eax)
082f5177 +0x4efb:  mov    0x4(%ebx),%edx
082f517a +0x4efe:  mov    %edx,0x4(%eax)
082f517d +0x4f01:  mov    0x8(%ebx),%edx
082f5180 +0x4f04:  mov    %edx,0x8(%eax)
082f5183 +0x4f07:  lea    0x8(%ebp),%eax
082f5186 +0x4f0a:  mov    %eax,(%esp)
082f5189 +0x4f0d:  call   082f56a8 <+0x542c>
082f518e +0x4f12:  addl   $0xc,-0xc(%ebp)
082f5192 +0x4f16:  lea    0xc(%ebp),%eax
082f5195 +0x4f19:  mov    %eax,0x4(%esp)
082f5199 +0x4f1d:  lea    0x8(%ebp),%eax
082f519c +0x4f20:  mov    %eax,(%esp)
082f519f +0x4f23:  call   082f568b <+0x540f>
082f51a4 +0x4f28:  test   %al,%al
082f51a6 +0x4f2a:  jne    082f514d <+0x4ed1>
082f51a8 +0x4f2c:  mov    -0xc(%ebp),%eax
082f51ab +0x4f2f:  add    $0x20,%esp
082f51ae +0x4f32:  pop    %ebx
082f51af +0x4f33:  pop    %esi
082f51b0 +0x4f34:  pop    %ebp
082f51b1 +0x4f35:  ret
082f51b2 +0x4f36:  mov    %eax,(%esp)
082f51b5 +0x4f39:  call   08725ce0 <__cxa_begin_catch>
082f51ba +0x4f3e:  mov    -0xc(%ebp),%eax
082f51bd +0x4f41:  mov    %eax,0x4(%esp)
082f51c1 +0x4f45:  mov    0x10(%ebp),%eax
082f51c4 +0x4f48:  mov    %eax,(%esp)
082f51c7 +0x4f4b:  call   082f390b <+0x368f>
082f51cc +0x4f50:  call   08724be0 <__cxa_rethrow>
082f51d1 +0x4f55:  mov    %edx,%ebx
082f51d3 +0x4f57:  mov    %eax,%esi
082f51d5 +0x4f59:  call   08725c30 <__cxa_end_catch>
082f51da +0x4f5e:  mov    %esi,%eax
082f51dc +0x4f60:  mov    %ebx,%edx
082f51de +0x4f62:  mov    %eax,(%esp)
082f51e1 +0x4f65:  call   08ae3750 <_Unwind_Resume>
082f51e6 +0x4f6a:  push   %ebp
082f51e7 +0x4f6b:  mov    %esp,%ebp
082f51e9 +0x4f6d:  push   %ebx
082f51ea +0x4f6e:  sub    $0x24,%esp
082f51ed +0x4f71:  mov    0xc(%ebp),%edx
082f51f0 +0x4f74:  mov    0x8(%ebp),%eax
082f51f3 +0x4f77:  mov    %edx,%ecx
082f51f5 +0x4f79:  sub    %eax,%ecx
082f51f7 +0x4f7b:  mov    %ecx,%eax
082f51f9 +0x4f7d:  sar    $0x3,%eax
082f51fc +0x4f80:  mov    %eax,-0xc(%ebp)
082f51ff +0x4f83:  jmp    082f5225 <+0x4fa9>
082f5201 +0x4f85:  subl   $0x8,0x10(%ebp)
082f5205 +0x4f89:  mov    0x10(%ebp),%ebx
082f5208 +0x4f8c:  subl   $0x8,0xc(%ebp)
082f520c +0x4f90:  mov    0xc(%ebp),%eax
082f520f +0x4f93:  mov    %eax,(%esp)
082f5212 +0x4f96:  call   082f32dd <+0x3061>
082f5217 +0x4f9b:  mov    0x4(%eax),%edx
082f521a +0x4f9e:  mov    (%eax),%eax
082f521c +0x4fa0:  mov    %eax,(%ebx)
082f521e +0x4fa2:  mov    %edx,0x4(%ebx)
082f5221 +0x4fa5:  subl   $0x1,-0xc(%ebp)
082f5225 +0x4fa9:  cmpl   $0x0,-0xc(%ebp)
082f5229 +0x4fad:  setg   %al
082f522c +0x4fb0:  test   %al,%al
082f522e +0x4fb2:  jne    082f5201 <+0x4f85>
082f5230 +0x4fb4:  mov    0x10(%ebp),%eax
082f5233 +0x4fb7:  add    $0x24,%esp
082f5236 +0x4fba:  pop    %ebx
082f5237 +0x4fbb:  pop    %ebp
082f5238 +0x4fbc:  ret
082f5239 +0x4fbd:  push   %ebp
082f523a +0x4fbe:  mov    %esp,%ebp
082f523c +0x4fc0:  push   %esi
082f523d +0x4fc1:  push   %ebx
082f523e +0x4fc2:  sub    $0x20,%esp
082f5241 +0x4fc5:  mov    0x10(%ebp),%eax
082f5244 +0x4fc8:  mov    %eax,-0xc(%ebp)
082f5247 +0x4fcb:  jmp    082f528a <+0x500e>
082f5249 +0x4fcd:  lea    0x8(%ebp),%eax
082f524c +0x4fd0:  mov    %eax,(%esp)
082f524f +0x4fd3:  call   082f56fc <+0x5480>
082f5254 +0x4fd8:  mov    %eax,%ebx
082f5256 +0x4fda:  mov    -0xc(%ebp),%eax
082f5259 +0x4fdd:  mov    %eax,0x4(%esp)
082f525d +0x4fe1:  movl   $0x8,(%esp)
082f5264 +0x4fe8:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f5269 +0x4fed:  mov    %eax,%edx
082f526b +0x4fef:  test   %edx,%edx
082f526d +0x4ff1:  je     082f527b <+0x4fff>
082f526f +0x4ff3:  mov    %eax,%ecx
082f5271 +0x4ff5:  mov    (%ebx),%eax
082f5273 +0x4ff7:  mov    0x4(%ebx),%edx
082f5276 +0x4ffa:  mov    %eax,(%ecx)
082f5278 +0x4ffc:  mov    %edx,0x4(%ecx)
082f527b +0x4fff:  lea    0x8(%ebp),%eax
082f527e +0x5002:  mov    %eax,(%esp)
082f5281 +0x5005:  call   082f56e6 <+0x546a>
082f5286 +0x500a:  addl   $0x8,-0xc(%ebp)
082f528a +0x500e:  lea    0xc(%ebp),%eax
082f528d +0x5011:  mov    %eax,0x4(%esp)
082f5291 +0x5015:  lea    0x8(%ebp),%eax
082f5294 +0x5018:  mov    %eax,(%esp)
082f5297 +0x501b:  call   082f56c8 <+0x544c>
082f529c +0x5020:  test   %al,%al
082f529e +0x5022:  jne    082f5249 <+0x4fcd>
082f52a0 +0x5024:  mov    -0xc(%ebp),%eax
082f52a3 +0x5027:  add    $0x20,%esp
082f52a6 +0x502a:  pop    %ebx
082f52a7 +0x502b:  pop    %esi
082f52a8 +0x502c:  pop    %ebp
082f52a9 +0x502d:  ret
082f52aa +0x502e:  mov    %eax,(%esp)
082f52ad +0x5031:  call   08725ce0 <__cxa_begin_catch>
082f52b2 +0x5036:  mov    -0xc(%ebp),%eax
082f52b5 +0x5039:  mov    %eax,0x4(%esp)
082f52b9 +0x503d:  mov    0x10(%ebp),%eax
082f52bc +0x5040:  mov    %eax,(%esp)
082f52bf +0x5043:  call   082f3969 <+0x36ed>
082f52c4 +0x5048:  call   08724be0 <__cxa_rethrow>
082f52c9 +0x504d:  mov    %edx,%ebx
082f52cb +0x504f:  mov    %eax,%esi
082f52cd +0x5051:  call   08725c30 <__cxa_end_catch>
082f52d2 +0x5056:  mov    %esi,%eax
082f52d4 +0x5058:  mov    %ebx,%edx
082f52d6 +0x505a:  mov    %eax,(%esp)
082f52d9 +0x505d:  call   08ae3750 <_Unwind_Resume>
082f52de +0x5062:  push   %ebp
082f52df +0x5063:  mov    %esp,%ebp
082f52e1 +0x5065:  push   %ebx
082f52e2 +0x5066:  sub    $0x54,%esp
082f52e5 +0x5069:  mov    0xc(%ebp),%eax
082f52e8 +0x506c:  mov    %eax,-0xc(%ebp)
082f52eb +0x506f:  mov    0xc(%ebp),%eax
082f52ee +0x5072:  mov    %eax,-0x30(%ebp)
082f52f1 +0x5075:  jmp    082f53e1 <+0x5165>
082f52f6 +0x507a:  mov    -0x30(%ebp),%eax
082f52f9 +0x507d:  add    $0x1,%eax
082f52fc +0x5080:  add    %eax,%eax
082f52fe +0x5082:  mov    %eax,-0x30(%ebp)
082f5301 +0x5085:  mov    -0x30(%ebp),%eax
082f5304 +0x5088:  sub    $0x1,%eax
082f5307 +0x508b:  mov    %eax,-0x28(%ebp)
082f530a +0x508e:  lea    -0x2c(%ebp),%eax
082f530d +0x5091:  lea    -0x28(%ebp),%edx
082f5310 +0x5094:  mov    %edx,0x8(%esp)
082f5314 +0x5098:  lea    0x8(%ebp),%edx
082f5317 +0x509b:  mov    %edx,0x4(%esp)
082f531b +0x509f:  mov    %eax,(%esp)
082f531e +0x50a2:  call   082f25ae <+0x2332>
082f5323 +0x50a7:  sub    $0x4,%esp
082f5326 +0x50aa:  lea    -0x2c(%ebp),%eax
082f5329 +0x50ad:  mov    %eax,(%esp)
082f532c +0x50b0:  call   082f18d2 <+0x1656>
082f5331 +0x50b5:  mov    %eax,%ebx
082f5333 +0x50b7:  lea    -0x24(%ebp),%eax
082f5336 +0x50ba:  lea    -0x30(%ebp),%edx
082f5339 +0x50bd:  mov    %edx,0x8(%esp)
082f533d +0x50c1:  lea    0x8(%ebp),%edx
082f5340 +0x50c4:  mov    %edx,0x4(%esp)
082f5344 +0x50c8:  mov    %eax,(%esp)
082f5347 +0x50cb:  call   082f25ae <+0x2332>
082f534c +0x50d0:  sub    $0x4,%esp
082f534f +0x50d3:  lea    -0x24(%ebp),%eax
082f5352 +0x50d6:  mov    %eax,(%esp)
082f5355 +0x50d9:  call   082f18d2 <+0x1656>
082f535a +0x50de:  mov    %ebx,0x4(%esp)
082f535e +0x50e2:  mov    %eax,(%esp)
082f5361 +0x50e5:  call   082f04ea <+0x26e>
082f5366 +0x50ea:  test   %al,%al
082f5368 +0x50ec:  je     082f5373 <+0x50f7>
082f536a +0x50ee:  mov    -0x30(%ebp),%eax
082f536d +0x50f1:  sub    $0x1,%eax
082f5370 +0x50f4:  mov    %eax,-0x30(%ebp)
082f5373 +0x50f7:  lea    -0x20(%ebp),%eax
082f5376 +0x50fa:  lea    0xc(%ebp),%edx
082f5379 +0x50fd:  mov    %edx,0x8(%esp)
082f537d +0x5101:  lea    0x8(%ebp),%edx
082f5380 +0x5104:  mov    %edx,0x4(%esp)
082f5384 +0x5108:  mov    %eax,(%esp)
082f5387 +0x510b:  call   082f25ae <+0x2332>
082f538c +0x5110:  sub    $0x4,%esp
082f538f +0x5113:  lea    -0x20(%ebp),%eax
082f5392 +0x5116:  mov    %eax,(%esp)
082f5395 +0x5119:  call   082f18d2 <+0x1656>
082f539a +0x511e:  mov    %eax,%ebx
082f539c +0x5120:  lea    -0x1c(%ebp),%eax
082f539f +0x5123:  lea    -0x30(%ebp),%edx
082f53a2 +0x5126:  mov    %edx,0x8(%esp)
082f53a6 +0x512a:  lea    0x8(%ebp),%edx
082f53a9 +0x512d:  mov    %edx,0x4(%esp)
082f53ad +0x5131:  mov    %eax,(%esp)
082f53b0 +0x5134:  call   082f25ae <+0x2332>
082f53b5 +0x5139:  sub    $0x4,%esp
082f53b8 +0x513c:  lea    -0x1c(%ebp),%eax
082f53bb +0x513f:  mov    %eax,(%esp)
082f53be +0x5142:  call   082f18d2 <+0x1656>
082f53c3 +0x5147:  mov    %eax,(%esp)
082f53c6 +0x514a:  call   082f3102 <+0x2e86>
082f53cb +0x514f:  mov    (%eax),%edx
082f53cd +0x5151:  mov    %edx,(%ebx)
082f53cf +0x5153:  mov    0x4(%eax),%edx
082f53d2 +0x5156:  mov    %edx,0x4(%ebx)
082f53d5 +0x5159:  mov    0x8(%eax),%eax
082f53d8 +0x515c:  mov    %eax,0x8(%ebx)
082f53db +0x515f:  mov    -0x30(%ebp),%eax
082f53de +0x5162:  mov    %eax,0xc(%ebp)
082f53e1 +0x5165:  mov    0x10(%ebp),%eax
082f53e4 +0x5168:  sub    $0x1,%eax
082f53e7 +0x516b:  mov    %eax,%edx
082f53e9 +0x516d:  shr    $0x1f,%edx
082f53ec +0x5170:  lea    (%edx,%eax,1),%eax
082f53ef +0x5173:  sar    %eax
082f53f1 +0x5175:  mov    %eax,%edx
082f53f3 +0x5177:  mov    -0x30(%ebp),%eax
082f53f6 +0x517a:  cmp    %eax,%edx
082f53f8 +0x517c:  setg   %al
082f53fb +0x517f:  test   %al,%al
082f53fd +0x5181:  jne    082f52f6 <+0x507a>
082f5403 +0x5187:  mov    0x10(%ebp),%eax
082f5406 +0x518a:  and    $0x1,%eax
082f5409 +0x518d:  test   %eax,%eax
082f540b +0x518f:  jne    082f54b3 <+0x5237>
082f5411 +0x5195:  mov    0x10(%ebp),%eax
082f5414 +0x5198:  sub    $0x2,%eax
082f5417 +0x519b:  mov    %eax,%edx
082f5419 +0x519d:  shr    $0x1f,%edx
082f541c +0x51a0:  lea    (%edx,%eax,1),%eax
082f541f +0x51a3:  sar    %eax
082f5421 +0x51a5:  mov    %eax,%edx
082f5423 +0x51a7:  mov    -0x30(%ebp),%eax
082f5426 +0x51aa:  cmp    %eax,%edx
082f5428 +0x51ac:  jne    082f54b3 <+0x5237>
082f542e +0x51b2:  mov    -0x30(%ebp),%eax
082f5431 +0x51b5:  add    $0x1,%eax
082f5434 +0x51b8:  add    %eax,%eax
082f5436 +0x51ba:  mov    %eax,-0x30(%ebp)
082f5439 +0x51bd:  lea    -0x18(%ebp),%eax
082f543c +0x51c0:  lea    0xc(%ebp),%edx
082f543f +0x51c3:  mov    %edx,0x8(%esp)
082f5443 +0x51c7:  lea    0x8(%ebp),%edx
082f5446 +0x51ca:  mov    %edx,0x4(%esp)
082f544a +0x51ce:  mov    %eax,(%esp)
082f544d +0x51d1:  call   082f25ae <+0x2332>
082f5452 +0x51d6:  sub    $0x4,%esp
082f5455 +0x51d9:  lea    -0x18(%ebp),%eax
082f5458 +0x51dc:  mov    %eax,(%esp)
082f545b +0x51df:  call   082f18d2 <+0x1656>
082f5460 +0x51e4:  mov    %eax,%ebx
082f5462 +0x51e6:  mov    -0x30(%ebp),%eax
082f5465 +0x51e9:  sub    $0x1,%eax
082f5468 +0x51ec:  mov    %eax,-0x10(%ebp)
082f546b +0x51ef:  lea    -0x14(%ebp),%eax
082f546e +0x51f2:  lea    -0x10(%ebp),%edx
082f5471 +0x51f5:  mov    %edx,0x8(%esp)
082f5475 +0x51f9:  lea    0x8(%ebp),%edx
082f5478 +0x51fc:  mov    %edx,0x4(%esp)
082f547c +0x5200:  mov    %eax,(%esp)
082f547f +0x5203:  call   082f25ae <+0x2332>
082f5484 +0x5208:  sub    $0x4,%esp
082f5487 +0x520b:  lea    -0x14(%ebp),%eax
082f548a +0x520e:  mov    %eax,(%esp)
082f548d +0x5211:  call   082f18d2 <+0x1656>
082f5492 +0x5216:  mov    %eax,(%esp)
082f5495 +0x5219:  call   082f3102 <+0x2e86>
082f549a +0x521e:  mov    (%eax),%edx
082f549c +0x5220:  mov    %edx,(%ebx)
082f549e +0x5222:  mov    0x4(%eax),%edx
082f54a1 +0x5225:  mov    %edx,0x4(%ebx)
082f54a4 +0x5228:  mov    0x8(%eax),%eax
082f54a7 +0x522b:  mov    %eax,0x8(%ebx)
082f54aa +0x522e:  mov    -0x30(%ebp),%eax
082f54ad +0x5231:  sub    $0x1,%eax
082f54b0 +0x5234:  mov    %eax,0xc(%ebp)
082f54b3 +0x5237:  lea    0x14(%ebp),%eax
082f54b6 +0x523a:  mov    %eax,(%esp)
082f54b9 +0x523d:  call   082f3102 <+0x2e86>
082f54be +0x5242:  mov    0xc(%ebp),%edx
082f54c1 +0x5245:  mov    (%eax),%ecx
082f54c3 +0x5247:  mov    %ecx,0xc(%esp)
082f54c7 +0x524b:  mov    0x4(%eax),%ecx
082f54ca +0x524e:  mov    %ecx,0x10(%esp)
082f54ce +0x5252:  mov    0x8(%eax),%eax
082f54d1 +0x5255:  mov    %eax,0x14(%esp)
082f54d5 +0x5259:  mov    -0xc(%ebp),%eax
082f54d8 +0x525c:  mov    %eax,0x8(%esp)
082f54dc +0x5260:  mov    %edx,0x4(%esp)
082f54e0 +0x5264:  mov    0x8(%ebp),%eax
082f54e3 +0x5267:  mov    %eax,(%esp)
082f54e6 +0x526a:  call   082f5706 <+0x548a>
082f54eb +0x526f:  mov    -0x4(%ebp),%ebx
082f54ee +0x5272:  leave
082f54ef +0x5273:  ret
082f54f0 +0x5274:  push   %ebp
082f54f1 +0x5275:  mov    %esp,%ebp
082f54f3 +0x5277:  sub    $0x28,%esp
082f54f6 +0x527a:  mov    0x8(%ebp),%eax
082f54f9 +0x527d:  mov    %eax,(%esp)
082f54fc +0x5280:  call   082f3102 <+0x2e86>
082f5501 +0x5285:  mov    (%eax),%edx
082f5503 +0x5287:  mov    %edx,-0x14(%ebp)
082f5506 +0x528a:  mov    0x4(%eax),%edx
082f5509 +0x528d:  mov    %edx,-0x10(%ebp)
082f550c +0x5290:  mov    0x8(%eax),%eax
082f550f +0x5293:  mov    %eax,-0xc(%ebp)
082f5512 +0x5296:  mov    0xc(%ebp),%eax
082f5515 +0x5299:  mov    %eax,(%esp)
082f5518 +0x529c:  call   082f3102 <+0x2e86>
082f551d +0x52a1:  mov    0x8(%ebp),%edx
082f5520 +0x52a4:  mov    (%eax),%ecx
082f5522 +0x52a6:  mov    %ecx,(%edx)
082f5524 +0x52a8:  mov    0x4(%eax),%ecx
082f5527 +0x52ab:  mov    %ecx,0x4(%edx)
082f552a +0x52ae:  mov    0x8(%eax),%eax
082f552d +0x52b1:  mov    %eax,0x8(%edx)
082f5530 +0x52b4:  lea    -0x14(%ebp),%eax
082f5533 +0x52b7:  mov    %eax,(%esp)
082f5536 +0x52ba:  call   082f3102 <+0x2e86>
082f553b +0x52bf:  mov    0xc(%ebp),%edx
082f553e +0x52c2:  mov    (%eax),%ecx
082f5540 +0x52c4:  mov    %ecx,(%edx)
082f5542 +0x52c6:  mov    0x4(%eax),%ecx
082f5545 +0x52c9:  mov    %ecx,0x4(%edx)
082f5548 +0x52cc:  mov    0x8(%eax),%eax
082f554b +0x52cf:  mov    %eax,0x8(%edx)
082f554e +0x52d2:  leave
082f554f +0x52d3:  ret
082f5550 +0x52d4:  push   %ebp
082f5551 +0x52d5:  mov    %esp,%ebp
082f5553 +0x52d7:  sub    $0x28,%esp
082f5556 +0x52da:  movb   $0x0,-0x9(%ebp)
082f555a +0x52de:  mov    0x10(%ebp),%eax
082f555d +0x52e1:  mov    %eax,0x8(%esp)
082f5561 +0x52e5:  mov    0xc(%ebp),%eax
082f5564 +0x52e8:  mov    %eax,0x4(%esp)
082f5568 +0x52ec:  mov    0x8(%ebp),%eax
082f556b +0x52ef:  mov    %eax,(%esp)
082f556e +0x52f2:  call   082f5845 <+0x55c9>
082f5573 +0x52f7:  leave
082f5574 +0x52f8:  ret
082f5575 +0x52f9:  nop
082f5576 +0x52fa:  push   %ebp
082f5577 +0x52fb:  mov    %esp,%ebp
082f5579 +0x52fd:  sub    $0x18,%esp
082f557c +0x5300:  mov    0x8(%ebp),%eax
082f557f +0x5303:  mov    %eax,(%esp)
082f5582 +0x5306:  call   082f5898 <+0x561c>
082f5587 +0x530b:  cmp    0xc(%ebp),%eax
082f558a +0x530e:  setb   %al
082f558d +0x5311:  movzbl %al,%eax
082f5590 +0x5314:  test   %eax,%eax
082f5592 +0x5316:  setne  %al
082f5595 +0x5319:  test   %al,%al
082f5597 +0x531b:  je     082f559e <+0x5322>
082f5599 +0x531d:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
082f559e +0x5322:  mov    0xc(%ebp),%edx
082f55a1 +0x5325:  mov    %edx,%eax
082f55a3 +0x5327:  add    %eax,%eax
082f55a5 +0x5329:  add    %edx,%eax
082f55a7 +0x532b:  shl    $0x3,%eax
082f55aa +0x532e:  mov    %eax,(%esp)
082f55ad +0x5331:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082f55b2 +0x5336:  leave
082f55b3 +0x5337:  ret
082f55b4 +0x5338:  push   %ebp
082f55b5 +0x5339:  mov    %esp,%ebp
082f55b7 +0x533b:  sub    $0x18,%esp
082f55ba +0x533e:  mov    0x8(%ebp),%eax
082f55bd +0x5341:  movl   $0x0,(%eax)
082f55c3 +0x5347:  mov    0x8(%ebp),%eax
082f55c6 +0x534a:  movl   $0x0,0x4(%eax)
082f55cd +0x5351:  mov    0x8(%ebp),%eax
082f55d0 +0x5354:  movl   $0x0,0x8(%eax)
082f55d7 +0x535b:  mov    0x8(%ebp),%eax
082f55da +0x535e:  movl   $0x0,0xc(%eax)
082f55e1 +0x5365:  mov    0xc(%ebp),%eax
082f55e4 +0x5368:  mov    %eax,(%esp)
082f55e7 +0x536b:  call   082f4def <+0x4b73>
082f55ec +0x5370:  mov    0x8(%ebp),%ecx
082f55ef +0x5373:  mov    0x4(%eax),%edx
082f55f2 +0x5376:  mov    (%eax),%eax
082f55f4 +0x5378:  mov    %eax,0x10(%ecx)
082f55f7 +0x537b:  mov    %edx,0x14(%ecx)
082f55fa +0x537e:  leave
082f55fb +0x537f:  ret
082f55fc +0x5380:  push   %ebp
082f55fd +0x5381:  mov    %esp,%ebp
082f55ff +0x5383:  push   %ebx
082f5600 +0x5384:  sub    $0x14,%esp
082f5603 +0x5387:  mov    0xc(%ebp),%eax
082f5606 +0x538a:  mov    %eax,(%esp)
082f5609 +0x538d:  call   082f58a2 <+0x5626>
082f560e +0x5392:  mov    %eax,%ebx
082f5610 +0x5394:  mov    0x8(%ebp),%eax
082f5613 +0x5397:  mov    %eax,(%esp)
082f5616 +0x539a:  call   082f58a2 <+0x5626>
082f561b +0x539f:  mov    0x10(%ebp),%edx
082f561e +0x53a2:  mov    %edx,0x8(%esp)
082f5622 +0x53a6:  mov    %ebx,0x4(%esp)
082f5626 +0x53aa:  mov    %eax,(%esp)
082f5629 +0x53ad:  call   082f58aa <+0x562e>
082f562e +0x53b2:  add    $0x14,%esp
082f5631 +0x53b5:  pop    %ebx
082f5632 +0x53b6:  pop    %ebp
082f5633 +0x53b7:  ret
082f5634 +0x53b8:  push   %ebp
082f5635 +0x53b9:  mov    %esp,%ebp
082f5637 +0x53bb:  push   %ebx
082f5638 +0x53bc:  sub    $0x14,%esp
082f563b +0x53bf:  mov    0xc(%ebp),%eax
082f563e +0x53c2:  mov    %eax,(%esp)
082f5641 +0x53c5:  call   082f58a2 <+0x5626>
082f5646 +0x53ca:  mov    %eax,%ebx
082f5648 +0x53cc:  mov    0x8(%ebp),%eax
082f564b +0x53cf:  mov    %eax,(%esp)
082f564e +0x53d2:  call   082f58a2 <+0x5626>
082f5653 +0x53d7:  mov    0x10(%ebp),%edx
082f5656 +0x53da:  mov    %edx,0x8(%esp)
082f565a +0x53de:  mov    %ebx,0x4(%esp)
082f565e +0x53e2:  mov    %eax,(%esp)
082f5661 +0x53e5:  call   082f58ee <+0x5672>
082f5666 +0x53ea:  add    $0x14,%esp
082f5669 +0x53ed:  pop    %ebx
082f566a +0x53ee:  pop    %ebp
082f566b +0x53ef:  ret
082f566c +0x53f0:  push   %ebp
082f566d +0x53f1:  mov    %esp,%ebp
082f566f +0x53f3:  mov    $0x3fffffff,%eax
082f5674 +0x53f8:  pop    %ebp
082f5675 +0x53f9:  ret
082f5676 +0x53fa:  push   %ebp
082f5677 +0x53fb:  mov    %esp,%ebp
082f5679 +0x53fd:  pop    %ebp
082f567a +0x53fe:  ret
082f567b +0x53ff:  nop
082f567c +0x5400:  push   %ebp
082f567d +0x5401:  mov    %esp,%ebp
082f567f +0x5403:  mov    $0x3fffffff,%eax
082f5684 +0x5408:  pop    %ebp
082f5685 +0x5409:  ret
082f5686 +0x540a:  push   %ebp
082f5687 +0x540b:  mov    %esp,%ebp
082f5689 +0x540d:  pop    %ebp
082f568a +0x540e:  ret
082f568b +0x540f:  push   %ebp
082f568c +0x5410:  mov    %esp,%ebp
082f568e +0x5412:  sub    $0x18,%esp
082f5691 +0x5415:  mov    0xc(%ebp),%eax
082f5694 +0x5418:  mov    %eax,0x4(%esp)
082f5698 +0x541c:  mov    0x8(%ebp),%eax
082f569b +0x541f:  mov    %eax,(%esp)
082f569e +0x5422:  call   082f5932 <+0x56b6>
082f56a3 +0x5427:  xor    $0x1,%eax
082f56a6 +0x542a:  leave
082f56a7 +0x542b:  ret
082f56a8 +0x542c:  push   %ebp
082f56a9 +0x542d:  mov    %esp,%ebp
082f56ab +0x542f:  mov    0x8(%ebp),%eax
082f56ae +0x5432:  mov    (%eax),%eax
082f56b0 +0x5434:  lea    0xc(%eax),%edx
082f56b3 +0x5437:  mov    0x8(%ebp),%eax
082f56b6 +0x543a:  mov    %edx,(%eax)
082f56b8 +0x543c:  mov    0x8(%ebp),%eax
082f56bb +0x543f:  pop    %ebp
082f56bc +0x5440:  ret
082f56bd +0x5441:  nop
082f56be +0x5442:  push   %ebp
082f56bf +0x5443:  mov    %esp,%ebp
082f56c1 +0x5445:  mov    0x8(%ebp),%eax
082f56c4 +0x5448:  mov    (%eax),%eax
082f56c6 +0x544a:  pop    %ebp
082f56c7 +0x544b:  ret
082f56c8 +0x544c:  push   %ebp
082f56c9 +0x544d:  mov    %esp,%ebp
082f56cb +0x544f:  sub    $0x18,%esp
082f56ce +0x5452:  mov    0xc(%ebp),%eax
082f56d1 +0x5455:  mov    %eax,0x4(%esp)
082f56d5 +0x5459:  mov    0x8(%ebp),%eax
082f56d8 +0x545c:  mov    %eax,(%esp)
082f56db +0x545f:  call   082f595c <+0x56e0>
082f56e0 +0x5464:  xor    $0x1,%eax
082f56e3 +0x5467:  leave
082f56e4 +0x5468:  ret
082f56e5 +0x5469:  nop
082f56e6 +0x546a:  push   %ebp
082f56e7 +0x546b:  mov    %esp,%ebp
082f56e9 +0x546d:  mov    0x8(%ebp),%eax
082f56ec +0x5470:  mov    (%eax),%eax
082f56ee +0x5472:  lea    0x8(%eax),%edx
082f56f1 +0x5475:  mov    0x8(%ebp),%eax
082f56f4 +0x5478:  mov    %edx,(%eax)
082f56f6 +0x547a:  mov    0x8(%ebp),%eax
082f56f9 +0x547d:  pop    %ebp
082f56fa +0x547e:  ret
082f56fb +0x547f:  nop
082f56fc +0x5480:  push   %ebp
082f56fd +0x5481:  mov    %esp,%ebp
082f56ff +0x5483:  mov    0x8(%ebp),%eax
082f5702 +0x5486:  mov    (%eax),%eax
082f5704 +0x5488:  pop    %ebp
082f5705 +0x5489:  ret
082f5706 +0x548a:  push   %ebp
082f5707 +0x548b:  mov    %esp,%ebp
082f5709 +0x548d:  push   %ebx
082f570a +0x548e:  sub    $0x34,%esp
082f570d +0x5491:  mov    0xc(%ebp),%eax
082f5710 +0x5494:  sub    $0x1,%eax
082f5713 +0x5497:  mov    %eax,%edx
082f5715 +0x5499:  shr    $0x1f,%edx
082f5718 +0x549c:  lea    (%edx,%eax,1),%eax
082f571b +0x549f:  sar    %eax
082f571d +0x54a1:  mov    %eax,-0x1c(%ebp)
082f5720 +0x54a4:  jmp    082f57a6 <+0x552a>
082f5725 +0x54a9:  lea    -0x14(%ebp),%eax
082f5728 +0x54ac:  lea    0xc(%ebp),%edx
082f572b +0x54af:  mov    %edx,0x8(%esp)
082f572f +0x54b3:  lea    0x8(%ebp),%edx
082f5732 +0x54b6:  mov    %edx,0x4(%esp)
082f5736 +0x54ba:  mov    %eax,(%esp)
082f5739 +0x54bd:  call   082f25ae <+0x2332>
082f573e +0x54c2:  sub    $0x4,%esp
082f5741 +0x54c5:  lea    -0x14(%ebp),%eax
082f5744 +0x54c8:  mov    %eax,(%esp)
082f5747 +0x54cb:  call   082f18d2 <+0x1656>
082f574c +0x54d0:  mov    %eax,%ebx
082f574e +0x54d2:  lea    -0x10(%ebp),%eax
082f5751 +0x54d5:  lea    -0x1c(%ebp),%edx
082f5754 +0x54d8:  mov    %edx,0x8(%esp)
082f5758 +0x54dc:  lea    0x8(%ebp),%edx
082f575b +0x54df:  mov    %edx,0x4(%esp)
082f575f +0x54e3:  mov    %eax,(%esp)
082f5762 +0x54e6:  call   082f25ae <+0x2332>
082f5767 +0x54eb:  sub    $0x4,%esp
082f576a +0x54ee:  lea    -0x10(%ebp),%eax
082f576d +0x54f1:  mov    %eax,(%esp)
082f5770 +0x54f4:  call   082f18d2 <+0x1656>
082f5775 +0x54f9:  mov    %eax,(%esp)
082f5778 +0x54fc:  call   082f3102 <+0x2e86>
082f577d +0x5501:  mov    (%eax),%edx
082f577f +0x5503:  mov    %edx,(%ebx)
082f5781 +0x5505:  mov    0x4(%eax),%edx
082f5784 +0x5508:  mov    %edx,0x4(%ebx)
082f5787 +0x550b:  mov    0x8(%eax),%eax
082f578a +0x550e:  mov    %eax,0x8(%ebx)
082f578d +0x5511:  mov    -0x1c(%ebp),%eax
082f5790 +0x5514:  mov    %eax,0xc(%ebp)
082f5793 +0x5517:  mov    0xc(%ebp),%eax
082f5796 +0x551a:  sub    $0x1,%eax
082f5799 +0x551d:  mov    %eax,%edx
082f579b +0x551f:  shr    $0x1f,%edx
082f579e +0x5522:  lea    (%edx,%eax,1),%eax
082f57a1 +0x5525:  sar    %eax
082f57a3 +0x5527:  mov    %eax,-0x1c(%ebp)
082f57a6 +0x552a:  mov    0xc(%ebp),%eax
082f57a9 +0x552d:  cmp    0x10(%ebp),%eax
082f57ac +0x5530:  jle    082f57ef <+0x5573>
082f57ae +0x5532:  lea    -0x18(%ebp),%eax
082f57b1 +0x5535:  lea    -0x1c(%ebp),%edx
082f57b4 +0x5538:  mov    %edx,0x8(%esp)
082f57b8 +0x553c:  lea    0x8(%ebp),%edx
082f57bb +0x553f:  mov    %edx,0x4(%esp)
082f57bf +0x5543:  mov    %eax,(%esp)
082f57c2 +0x5546:  call   082f25ae <+0x2332>
082f57c7 +0x554b:  sub    $0x4,%esp
082f57ca +0x554e:  lea    -0x18(%ebp),%eax
082f57cd +0x5551:  mov    %eax,(%esp)
082f57d0 +0x5554:  call   082f18d2 <+0x1656>
082f57d5 +0x5559:  lea    0x14(%ebp),%edx
082f57d8 +0x555c:  mov    %edx,0x4(%esp)
082f57dc +0x5560:  mov    %eax,(%esp)
082f57df +0x5563:  call   082f04ea <+0x26e>
082f57e4 +0x5568:  test   %al,%al
082f57e6 +0x556a:  je     082f57ef <+0x5573>
082f57e8 +0x556c:  mov    $0x1,%eax
082f57ed +0x5571:  jmp    082f57f4 <+0x5578>
082f57ef +0x5573:  mov    $0x0,%eax
082f57f4 +0x5578:  test   %al,%al
082f57f6 +0x557a:  jne    082f5725 <+0x54a9>
082f57fc +0x5580:  lea    -0xc(%ebp),%eax
082f57ff +0x5583:  lea    0xc(%ebp),%edx
082f5802 +0x5586:  mov    %edx,0x8(%esp)
082f5806 +0x558a:  lea    0x8(%ebp),%edx
082f5809 +0x558d:  mov    %edx,0x4(%esp)
082f580d +0x5591:  mov    %eax,(%esp)
082f5810 +0x5594:  call   082f25ae <+0x2332>
082f5815 +0x5599:  sub    $0x4,%esp
082f5818 +0x559c:  lea    -0xc(%ebp),%eax
082f581b +0x559f:  mov    %eax,(%esp)
082f581e +0x55a2:  call   082f18d2 <+0x1656>
082f5823 +0x55a7:  mov    %eax,%ebx
082f5825 +0x55a9:  lea    0x14(%ebp),%eax
082f5828 +0x55ac:  mov    %eax,(%esp)
082f582b +0x55af:  call   082f3102 <+0x2e86>
082f5830 +0x55b4:  mov    (%eax),%edx
082f5832 +0x55b6:  mov    %edx,(%ebx)
082f5834 +0x55b8:  mov    0x4(%eax),%edx
082f5837 +0x55bb:  mov    %edx,0x4(%ebx)
082f583a +0x55be:  mov    0x8(%eax),%eax
082f583d +0x55c1:  mov    %eax,0x8(%ebx)
082f5840 +0x55c4:  mov    -0x4(%ebp),%ebx
082f5843 +0x55c7:  leave
082f5844 +0x55c8:  ret
082f5845 +0x55c9:  push   %ebp
082f5846 +0x55ca:  mov    %esp,%ebp
082f5848 +0x55cc:  sub    $0x10,%esp
082f584b +0x55cf:  mov    0xc(%ebp),%edx
082f584e +0x55d2:  mov    0x8(%ebp),%eax
082f5851 +0x55d5:  mov    %edx,%ecx
082f5853 +0x55d7:  sub    %eax,%ecx
082f5855 +0x55d9:  mov    %ecx,%eax
082f5857 +0x55db:  sar    $0x2,%eax
082f585a +0x55de:  imul   $0xaaaaaaab,%eax,%eax
082f5860 +0x55e4:  mov    %eax,-0x4(%ebp)
082f5863 +0x55e7:  jmp    082f5887 <+0x560b>
082f5865 +0x55e9:  subl   $0xc,0x10(%ebp)
082f5869 +0x55ed:  mov    0x10(%ebp),%eax
082f586c +0x55f0:  subl   $0xc,0xc(%ebp)
082f5870 +0x55f4:  mov    0xc(%ebp),%edx
082f5873 +0x55f7:  mov    (%edx),%ecx
082f5875 +0x55f9:  mov    %ecx,(%eax)
082f5877 +0x55fb:  mov    0x4(%edx),%ecx
082f587a +0x55fe:  mov    %ecx,0x4(%eax)
082f587d +0x5601:  mov    0x8(%edx),%edx
082f5880 +0x5604:  mov    %edx,0x8(%eax)
082f5883 +0x5607:  subl   $0x1,-0x4(%ebp)
082f5887 +0x560b:  cmpl   $0x0,-0x4(%ebp)
082f588b +0x560f:  setg   %al
082f588e +0x5612:  test   %al,%al
082f5890 +0x5614:  jne    082f5865 <+0x55e9>
082f5892 +0x5616:  mov    0x10(%ebp),%eax
082f5895 +0x5619:  leave
082f5896 +0x561a:  ret
082f5897 +0x561b:  nop
082f5898 +0x561c:  push   %ebp
082f5899 +0x561d:  mov    %esp,%ebp
082f589b +0x561f:  mov    $0xaaaaaaa,%eax
082f58a0 +0x5624:  pop    %ebp
082f58a1 +0x5625:  ret
082f58a2 +0x5626:  push   %ebp
082f58a3 +0x5627:  mov    %esp,%ebp
082f58a5 +0x5629:  mov    0x8(%ebp),%eax
082f58a8 +0x562c:  pop    %ebp
082f58a9 +0x562d:  ret
082f58aa +0x562e:  push   %ebp
082f58ab +0x562f:  mov    %esp,%ebp
082f58ad +0x5631:  push   %esi
082f58ae +0x5632:  push   %ebx
082f58af +0x5633:  sub    $0x10,%esp
082f58b2 +0x5636:  mov    0x10(%ebp),%eax
082f58b5 +0x5639:  mov    %eax,(%esp)
082f58b8 +0x563c:  call   082f5986 <+0x570a>
082f58bd +0x5641:  mov    %eax,%esi
082f58bf +0x5643:  mov    0xc(%ebp),%eax
082f58c2 +0x5646:  mov    %eax,(%esp)
082f58c5 +0x5649:  call   082f5986 <+0x570a>
082f58ca +0x564e:  mov    %eax,%ebx
082f58cc +0x5650:  mov    0x8(%ebp),%eax
082f58cf +0x5653:  mov    %eax,(%esp)
082f58d2 +0x5656:  call   082f5986 <+0x570a>
082f58d7 +0x565b:  mov    %esi,0x8(%esp)
082f58db +0x565f:  mov    %ebx,0x4(%esp)
082f58df +0x5663:  mov    %eax,(%esp)
082f58e2 +0x5666:  call   082f598e <+0x5712>
082f58e7 +0x566b:  add    $0x10,%esp
082f58ea +0x566e:  pop    %ebx
082f58eb +0x566f:  pop    %esi
082f58ec +0x5670:  pop    %ebp
082f58ed +0x5671:  ret
082f58ee +0x5672:  push   %ebp
082f58ef +0x5673:  mov    %esp,%ebp
082f58f1 +0x5675:  push   %esi
082f58f2 +0x5676:  push   %ebx
082f58f3 +0x5677:  sub    $0x10,%esp
082f58f6 +0x567a:  mov    0x10(%ebp),%eax
082f58f9 +0x567d:  mov    %eax,(%esp)
082f58fc +0x5680:  call   082f5986 <+0x570a>
082f5901 +0x5685:  mov    %eax,%esi
082f5903 +0x5687:  mov    0xc(%ebp),%eax
082f5906 +0x568a:  mov    %eax,(%esp)
082f5909 +0x568d:  call   082f5986 <+0x570a>
082f590e +0x5692:  mov    %eax,%ebx
082f5910 +0x5694:  mov    0x8(%ebp),%eax
082f5913 +0x5697:  mov    %eax,(%esp)
082f5916 +0x569a:  call   082f5986 <+0x570a>
082f591b +0x569f:  mov    %esi,0x8(%esp)
082f591f +0x56a3:  mov    %ebx,0x4(%esp)
082f5923 +0x56a7:  mov    %eax,(%esp)
082f5926 +0x56aa:  call   082f59b3 <+0x5737>
082f592b +0x56af:  add    $0x10,%esp
082f592e +0x56b2:  pop    %ebx
082f592f +0x56b3:  pop    %esi
082f5930 +0x56b4:  pop    %ebp
082f5931 +0x56b5:  ret
082f5932 +0x56b6:  push   %ebp
082f5933 +0x56b7:  mov    %esp,%ebp
082f5935 +0x56b9:  push   %ebx
082f5936 +0x56ba:  sub    $0x14,%esp
082f5939 +0x56bd:  mov    0x8(%ebp),%eax
082f593c +0x56c0:  mov    %eax,(%esp)
082f593f +0x56c3:  call   082f59d8 <+0x575c>
082f5944 +0x56c8:  mov    %eax,%ebx
082f5946 +0x56ca:  mov    0xc(%ebp),%eax
082f5949 +0x56cd:  mov    %eax,(%esp)
082f594c +0x56d0:  call   082f59d8 <+0x575c>
082f5951 +0x56d5:  cmp    %eax,%ebx
082f5953 +0x56d7:  sete   %al
082f5956 +0x56da:  add    $0x14,%esp
082f5959 +0x56dd:  pop    %ebx
082f595a +0x56de:  pop    %ebp
082f595b +0x56df:  ret
082f595c +0x56e0:  push   %ebp
082f595d +0x56e1:  mov    %esp,%ebp
082f595f +0x56e3:  push   %ebx
082f5960 +0x56e4:  sub    $0x14,%esp
082f5963 +0x56e7:  mov    0x8(%ebp),%eax
082f5966 +0x56ea:  mov    %eax,(%esp)
082f5969 +0x56ed:  call   082f59e2 <+0x5766>
082f596e +0x56f2:  mov    %eax,%ebx
082f5970 +0x56f4:  mov    0xc(%ebp),%eax
082f5973 +0x56f7:  mov    %eax,(%esp)
082f5976 +0x56fa:  call   082f59e2 <+0x5766>
082f597b +0x56ff:  cmp    %eax,%ebx
082f597d +0x5701:  sete   %al
082f5980 +0x5704:  add    $0x14,%esp
082f5983 +0x5707:  pop    %ebx
082f5984 +0x5708:  pop    %ebp
082f5985 +0x5709:  ret
082f5986 +0x570a:  push   %ebp
082f5987 +0x570b:  mov    %esp,%ebp
082f5989 +0x570d:  mov    0x8(%ebp),%eax
082f598c +0x5710:  pop    %ebp
082f598d +0x5711:  ret
082f598e +0x5712:  push   %ebp
082f598f +0x5713:  mov    %esp,%ebp
082f5991 +0x5715:  sub    $0x28,%esp
082f5994 +0x5718:  movb   $0x1,-0x9(%ebp)
082f5998 +0x571c:  mov    0x10(%ebp),%eax
082f599b +0x571f:  mov    %eax,0x8(%esp)
082f599f +0x5723:  mov    0xc(%ebp),%eax
082f59a2 +0x5726:  mov    %eax,0x4(%esp)
082f59a6 +0x572a:  mov    0x8(%ebp),%eax
082f59a9 +0x572d:  mov    %eax,(%esp)
082f59ac +0x5730:  call   082f59ec <+0x5770>
082f59b1 +0x5735:  leave
082f59b2 +0x5736:  ret
082f59b3 +0x5737:  push   %ebp
082f59b4 +0x5738:  mov    %esp,%ebp
082f59b6 +0x573a:  sub    $0x28,%esp
082f59b9 +0x573d:  movb   $0x1,-0x9(%ebp)
082f59bd +0x5741:  mov    0x10(%ebp),%eax
082f59c0 +0x5744:  mov    %eax,0x8(%esp)
082f59c4 +0x5748:  mov    0xc(%ebp),%eax
082f59c7 +0x574b:  mov    %eax,0x4(%esp)
082f59cb +0x574f:  mov    0x8(%ebp),%eax
082f59ce +0x5752:  mov    %eax,(%esp)
082f59d1 +0x5755:  call   082f5a31 <+0x57b5>
082f59d6 +0x575a:  leave
082f59d7 +0x575b:  ret
082f59d8 +0x575c:  push   %ebp
082f59d9 +0x575d:  mov    %esp,%ebp
082f59db +0x575f:  mov    0x8(%ebp),%eax
082f59de +0x5762:  mov    (%eax),%eax
082f59e0 +0x5764:  pop    %ebp
082f59e1 +0x5765:  ret
082f59e2 +0x5766:  push   %ebp
082f59e3 +0x5767:  mov    %esp,%ebp
082f59e5 +0x5769:  mov    0x8(%ebp),%eax
082f59e8 +0x576c:  mov    (%eax),%eax
082f59ea +0x576e:  pop    %ebp
082f59eb +0x576f:  ret
082f59ec +0x5770:  push   %ebp
082f59ed +0x5771:  mov    %esp,%ebp
082f59ef +0x5773:  sub    $0x18,%esp
082f59f2 +0x5776:  mov    0xc(%ebp),%edx
082f59f5 +0x5779:  mov    0x8(%ebp),%eax
082f59f8 +0x577c:  mov    %edx,%ecx
082f59fa +0x577e:  sub    %eax,%ecx
082f59fc +0x5780:  mov    %ecx,%eax
082f59fe +0x5782:  sar    $0x2,%eax
082f5a01 +0x5785:  shl    $0x2,%eax
082f5a04 +0x5788:  mov    %eax,0x8(%esp)
082f5a08 +0x578c:  mov    0x8(%ebp),%eax
082f5a0b +0x578f:  mov    %eax,0x4(%esp)
082f5a0f +0x5793:  mov    0x10(%ebp),%eax
082f5a12 +0x5796:  mov    %eax,(%esp)
082f5a15 +0x5799:  call   0807d880 <_init+0x178>
082f5a1a +0x579e:  mov    0xc(%ebp),%edx
082f5a1d +0x57a1:  mov    0x8(%ebp),%eax
082f5a20 +0x57a4:  mov    %edx,%ecx
082f5a22 +0x57a6:  sub    %eax,%ecx
082f5a24 +0x57a8:  mov    %ecx,%eax
082f5a26 +0x57aa:  sar    $0x2,%eax
082f5a29 +0x57ad:  shl    $0x2,%eax
082f5a2c +0x57b0:  add    0x10(%ebp),%eax
082f5a2f +0x57b3:  leave
082f5a30 +0x57b4:  ret
082f5a31 +0x57b5:  push   %ebp
082f5a32 +0x57b6:  mov    %esp,%ebp
082f5a34 +0x57b8:  sub    $0x28,%esp
082f5a37 +0x57bb:  mov    0xc(%ebp),%edx
082f5a3a +0x57be:  mov    0x8(%ebp),%eax
082f5a3d +0x57c1:  mov    %edx,%ecx
082f5a3f +0x57c3:  sub    %eax,%ecx
082f5a41 +0x57c5:  mov    %ecx,%eax
082f5a43 +0x57c7:  sar    $0x2,%eax
082f5a46 +0x57ca:  mov    %eax,-0xc(%ebp)
082f5a49 +0x57cd:  mov    -0xc(%ebp),%eax
082f5a4c +0x57d0:  lea    0x0(,%eax,4),%edx
082f5a53 +0x57d7:  mov    -0xc(%ebp),%eax
082f5a56 +0x57da:  shl    $0x2,%eax
082f5a59 +0x57dd:  neg    %eax
082f5a5b +0x57df:  add    0x10(%ebp),%eax
082f5a5e +0x57e2:  mov    %edx,0x8(%esp)
082f5a62 +0x57e6:  mov    0x8(%ebp),%edx
082f5a65 +0x57e9:  mov    %edx,0x4(%esp)
082f5a69 +0x57ed:  mov    %eax,(%esp)
082f5a6c +0x57f0:  call   0807d880 <_init+0x178>
082f5a71 +0x57f5:  mov    -0xc(%ebp),%eax
082f5a74 +0x57f8:  shl    $0x2,%eax
082f5a77 +0x57fb:  neg    %eax
082f5a79 +0x57fd:  add    0x10(%ebp),%eax
082f5a7c +0x5800:  leave
082f5a7d +0x5801:  ret
082f5a7e +0x5802:  nop
082f5a7f +0x5803:  nop
```

## 反编译 C

```c
// <global>::global @ 0x82f027c

/* pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM) */

void pvp_assault::_GLOBAL__I_GetDirectionByTeam(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
