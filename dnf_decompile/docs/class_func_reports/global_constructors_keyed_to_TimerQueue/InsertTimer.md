# InsertTimer

`_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry`

`global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to TimerQueue` | `0x0863baef` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863baef  _GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry
#           global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)
# range [0x0863baef, 0x08641027]
0863baef +0x0000:  push   %ebp
0863baf0 +0x0001:  mov    %esp,%ebp
0863baf2 +0x0003:  sub    $0x18,%esp
0863baf5 +0x0006:  movl   $0xffff,0x4(%esp)
0863bafd +0x000e:  movl   $0x1,(%esp)
0863bb04 +0x0015:  call   0863baaf <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0863bb09 +0x001a:  leave
0863bb0a +0x001b:  ret
0863bb0b +0x001c:  push   %ebp
0863bb0c +0x001d:  mov    %esp,%ebp
0863bb0e +0x001f:  push   %ebx
0863bb0f +0x0020:  mov    0x8(%ebp),%eax
0863bb12 +0x0023:  mov    %eax,%edx
0863bb14 +0x0025:  sar    $0x1f,%edx
0863bb17 +0x0028:  imul   $0x3e8,%edx,%ecx
0863bb1d +0x002e:  imul   $0x0,%eax,%ebx
0863bb20 +0x0031:  add    %ebx,%ecx
0863bb22 +0x0033:  mov    $0x3e8,%ebx
0863bb27 +0x0038:  mul    %ebx
0863bb29 +0x003a:  add    %edx,%ecx
0863bb2b +0x003c:  mov    %ecx,%edx
0863bb2d +0x003e:  pop    %ebx
0863bb2e +0x003f:  pop    %ebp
0863bb2f +0x0040:  ret
0863bb30 +0x0041:  push   %ebp
0863bb31 +0x0042:  mov    %esp,%ebp
0863bb33 +0x0044:  mov    0x8(%ebp),%eax
0863bb36 +0x0047:  movl   $&_ZTV8TimerSig+0x8,(%eax)
0863bb3c +0x004d:  pop    %ebp
0863bb3d +0x004e:  ret
0863bb3e +0x004f:  push   %ebp
0863bb3f +0x0050:  mov    %esp,%ebp
0863bb41 +0x0052:  sub    $0x18,%esp
0863bb44 +0x0055:  mov    0x8(%ebp),%eax
0863bb47 +0x0058:  mov    %eax,(%esp)
0863bb4a +0x005b:  call   0863bb30 <+0x41>
0863bb4f +0x0060:  mov    0x8(%ebp),%eax
0863bb52 +0x0063:  movl   $&_ZTV17TimerAvatarExpire+0x8,(%eax)
0863bb58 +0x0069:  leave
0863bb59 +0x006a:  ret
0863bb5a +0x006b:  push   %ebp
0863bb5b +0x006c:  mov    %esp,%ebp
0863bb5d +0x006e:  sub    $0x18,%esp
0863bb60 +0x0071:  mov    0x8(%ebp),%eax
0863bb63 +0x0074:  movl   $&_ZTV17TimerAvatarExpire+0x8,(%eax)
0863bb69 +0x007a:  mov    0x8(%ebp),%eax
0863bb6c +0x007d:  mov    %eax,(%esp)
0863bb6f +0x0080:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863bb74 +0x0085:  mov    $0x0,%eax
0863bb79 +0x008a:  test   %al,%al
0863bb7b +0x008c:  je     0863bb88 <+0x99>
0863bb7d +0x008e:  mov    0x8(%ebp),%eax
0863bb80 +0x0091:  mov    %eax,(%esp)
0863bb83 +0x0094:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863bb88 +0x0099:  leave
0863bb89 +0x009a:  ret
0863bb8a +0x009b:  push   %ebp
0863bb8b +0x009c:  mov    %esp,%ebp
0863bb8d +0x009e:  sub    $0x18,%esp
0863bb90 +0x00a1:  mov    0x8(%ebp),%eax
0863bb93 +0x00a4:  mov    %eax,(%esp)
0863bb96 +0x00a7:  call   0863bb5a <+0x6b>
0863bb9b +0x00ac:  mov    0x8(%ebp),%eax
0863bb9e +0x00af:  mov    %eax,(%esp)
0863bba1 +0x00b2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863bba6 +0x00b7:  leave
0863bba7 +0x00b8:  ret
0863bba8 +0x00b9:  push   %ebp
0863bba9 +0x00ba:  mov    %esp,%ebp
0863bbab +0x00bc:  sub    $0x18,%esp
0863bbae +0x00bf:  mov    0x8(%ebp),%eax
0863bbb1 +0x00c2:  mov    %eax,(%esp)
0863bbb4 +0x00c5:  call   0863bb30 <+0x41>
0863bbb9 +0x00ca:  mov    0x8(%ebp),%eax
0863bbbc +0x00cd:  movl   $&_ZTV17TimerFatigueReset+0x8,(%eax)
0863bbc2 +0x00d3:  leave
0863bbc3 +0x00d4:  ret
0863bbc4 +0x00d5:  push   %ebp
0863bbc5 +0x00d6:  mov    %esp,%ebp
0863bbc7 +0x00d8:  sub    $0x18,%esp
0863bbca +0x00db:  mov    0x8(%ebp),%eax
0863bbcd +0x00de:  movl   $&_ZTV17TimerFatigueReset+0x8,(%eax)
0863bbd3 +0x00e4:  mov    0x8(%ebp),%eax
0863bbd6 +0x00e7:  mov    %eax,(%esp)
0863bbd9 +0x00ea:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863bbde +0x00ef:  mov    $0x0,%eax
0863bbe3 +0x00f4:  test   %al,%al
0863bbe5 +0x00f6:  je     0863bbf2 <+0x103>
0863bbe7 +0x00f8:  mov    0x8(%ebp),%eax
0863bbea +0x00fb:  mov    %eax,(%esp)
0863bbed +0x00fe:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863bbf2 +0x0103:  leave
0863bbf3 +0x0104:  ret
0863bbf4 +0x0105:  push   %ebp
0863bbf5 +0x0106:  mov    %esp,%ebp
0863bbf7 +0x0108:  sub    $0x18,%esp
0863bbfa +0x010b:  mov    0x8(%ebp),%eax
0863bbfd +0x010e:  mov    %eax,(%esp)
0863bc00 +0x0111:  call   0863bbc4 <+0xd5>
0863bc05 +0x0116:  mov    0x8(%ebp),%eax
0863bc08 +0x0119:  mov    %eax,(%esp)
0863bc0b +0x011c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863bc10 +0x0121:  leave
0863bc11 +0x0122:  ret
0863bc12 +0x0123:  push   %ebp
0863bc13 +0x0124:  mov    %esp,%ebp
0863bc15 +0x0126:  sub    $0x18,%esp
0863bc18 +0x0129:  mov    0x8(%ebp),%eax
0863bc1b +0x012c:  mov    %eax,(%esp)
0863bc1e +0x012f:  call   0863bb30 <+0x41>
0863bc23 +0x0134:  mov    0x8(%ebp),%eax
0863bc26 +0x0137:  movl   $&_ZTV28TimerGeneratePowerUpNotiTime+0x8,(%eax)
0863bc2c +0x013d:  leave
0863bc2d +0x013e:  ret
0863bc2e +0x013f:  push   %ebp
0863bc2f +0x0140:  mov    %esp,%ebp
0863bc31 +0x0142:  sub    $0x18,%esp
0863bc34 +0x0145:  mov    0x8(%ebp),%eax
0863bc37 +0x0148:  mov    %eax,(%esp)
0863bc3a +0x014b:  call   0863bb30 <+0x41>
0863bc3f +0x0150:  mov    0x8(%ebp),%eax
0863bc42 +0x0153:  movl   $&_ZTV33Timer_NoticeEmergencyPatchMessage+0x8,(%eax)
0863bc48 +0x0159:  mov    0x8(%ebp),%eax
0863bc4b +0x015c:  movl   $0xa,0x4(%eax)
0863bc52 +0x0163:  leave
0863bc53 +0x0164:  ret
0863bc54 +0x0165:  push   %ebp
0863bc55 +0x0166:  mov    %esp,%ebp
0863bc57 +0x0168:  sub    $0x18,%esp
0863bc5a +0x016b:  mov    0x8(%ebp),%eax
0863bc5d +0x016e:  mov    %eax,(%esp)
0863bc60 +0x0171:  call   0863bb30 <+0x41>
0863bc65 +0x0176:  mov    0x8(%ebp),%eax
0863bc68 +0x0179:  movl   $&_ZTV35Timer_DungeonStatisticEntrance_Hour+0x8,(%eax)
0863bc6e +0x017f:  leave
0863bc6f +0x0180:  ret
0863bc70 +0x0181:  push   %ebp
0863bc71 +0x0182:  mov    %esp,%ebp
0863bc73 +0x0184:  mov    &_ZN12CServerEvent10m_nExpRateE,%eax
0863bc78 +0x0189:  sub    0x8(%ebp),%eax
0863bc7b +0x018c:  mov    %eax,&_ZN12CServerEvent10m_nExpRateE
0863bc80 +0x0191:  mov    &_ZN12CServerEvent10m_nExpRateE,%eax
0863bc85 +0x0196:  pop    %ebp
0863bc86 +0x0197:  ret
0863bc87 +0x0198:  push   %ebp
0863bc88 +0x0199:  mov    %esp,%ebp
0863bc8a +0x019b:  mov    0x8(%ebp),%eax
0863bc8d +0x019e:  movl   $0x0,&_ZN12CServerEvent11m_nCurEventE(,%eax,4)
0863bc98 +0x01a9:  mov    0x8(%ebp),%eax
0863bc9b +0x01ac:  movl   $0x0,&_ZN12CServerEvent19m_nCurEventIntervalE(,%eax,4)
0863bca6 +0x01b7:  pop    %ebp
0863bca7 +0x01b8:  ret
0863bca8 +0x01b9:  push   %ebp
0863bca9 +0x01ba:  mov    %esp,%ebp
0863bcab +0x01bc:  mov    0x8(%ebp),%eax
0863bcae +0x01bf:  mov    0x70(%eax),%eax
0863bcb1 +0x01c2:  pop    %ebp
0863bcb2 +0x01c3:  ret
0863bcb3 +0x01c4:  nop
0863bcb4 +0x01c5:  push   %ebp
0863bcb5 +0x01c6:  mov    %esp,%ebp
0863bcb7 +0x01c8:  mov    0xc(%ebp),%eax
0863bcba +0x01cb:  lea    -0x30(%eax),%edx
0863bcbd +0x01ce:  mov    0x8(%ebp),%eax
0863bcc0 +0x01d1:  add    $0x88,%edx
0863bcc6 +0x01d7:  mov    0xc(%eax,%edx,4),%eax
0863bcca +0x01db:  pop    %ebp
0863bccb +0x01dc:  ret
0863bccc +0x01dd:  push   %ebp
0863bccd +0x01de:  mov    %esp,%ebp
0863bccf +0x01e0:  mov    0xc(%ebp),%eax
0863bcd2 +0x01e3:  lea    -0x30(%eax),%edx
0863bcd5 +0x01e6:  mov    0x8(%ebp),%eax
0863bcd8 +0x01e9:  add    $0x88,%edx
0863bcde +0x01ef:  mov    0xc(%eax,%edx,4),%eax
0863bce2 +0x01f3:  cmp    0x10(%ebp),%eax
0863bce5 +0x01f6:  sete   %al
0863bce8 +0x01f9:  pop    %ebp
0863bce9 +0x01fa:  ret
0863bcea +0x01fb:  push   %ebp
0863bceb +0x01fc:  mov    %esp,%ebp
0863bced +0x01fe:  mov    0xc(%ebp),%edx
0863bcf0 +0x0201:  mov    0x8(%ebp),%eax
0863bcf3 +0x0204:  mov    (%eax,%edx,4),%eax
0863bcf6 +0x0207:  pop    %ebp
0863bcf7 +0x0208:  ret
0863bcf8 +0x0209:  push   %ebp
0863bcf9 +0x020a:  mov    %esp,%ebp
0863bcfb +0x020c:  sub    $0x10,%esp
0863bcfe +0x020f:  movl   $0x0,-0x8(%ebp)
0863bd05 +0x0216:  movl   $0x0,-0x4(%ebp)
0863bd0c +0x021d:  jmp    0863bd1e <+0x22f>
0863bd0e +0x021f:  mov    -0x4(%ebp),%edx
0863bd11 +0x0222:  mov    0x8(%ebp),%eax
0863bd14 +0x0225:  mov    (%eax,%edx,4),%eax
0863bd17 +0x0228:  add    %eax,-0x8(%ebp)
0863bd1a +0x022b:  addl   $0x1,-0x4(%ebp)
0863bd1e +0x022f:  cmpl   $0x6,-0x4(%ebp)
0863bd22 +0x0233:  setle  %al
0863bd25 +0x0236:  test   %al,%al
0863bd27 +0x0238:  jne    0863bd0e <+0x21f>
0863bd29 +0x023a:  mov    -0x8(%ebp),%eax
0863bd2c +0x023d:  leave
0863bd2d +0x023e:  ret
0863bd2e +0x023f:  push   %ebp
0863bd2f +0x0240:  mov    %esp,%ebp
0863bd31 +0x0242:  sub    $0x10,%esp
0863bd34 +0x0245:  movl   $0x0,-0x4(%ebp)
0863bd3b +0x024c:  jmp    0863bd4e <+0x25f>
0863bd3d +0x024e:  mov    -0x4(%ebp),%edx
0863bd40 +0x0251:  mov    0x8(%ebp),%eax
0863bd43 +0x0254:  movl   $0x0,(%eax,%edx,4)
0863bd4a +0x025b:  addl   $0x1,-0x4(%ebp)
0863bd4e +0x025f:  cmpl   $0x6,-0x4(%ebp)
0863bd52 +0x0263:  setle  %al
0863bd55 +0x0266:  test   %al,%al
0863bd57 +0x0268:  jne    0863bd3d <+0x24e>
0863bd59 +0x026a:  leave
0863bd5a +0x026b:  ret
0863bd5b +0x026c:  nop
0863bd5c +0x026d:  push   %ebp
0863bd5d +0x026e:  mov    %esp,%ebp
0863bd5f +0x0270:  mov    0x8(%ebp),%eax
0863bd62 +0x0273:  mov    0x848(%eax),%edx
0863bd68 +0x0279:  mov    0x8(%ebp),%eax
0863bd6b +0x027c:  mov    0x84c(%eax),%eax
0863bd71 +0x0282:  lea    (%edx,%eax,1),%eax
0863bd74 +0x0285:  pop    %ebp
0863bd75 +0x0286:  ret
0863bd76 +0x0287:  push   %ebp
0863bd77 +0x0288:  mov    %esp,%ebp
0863bd79 +0x028a:  mov    0x8(%ebp),%eax
0863bd7c +0x028d:  movl   $0x0,(%eax)
0863bd82 +0x0293:  pop    %ebp
0863bd83 +0x0294:  ret
0863bd84 +0x0295:  push   %ebp
0863bd85 +0x0296:  mov    %esp,%ebp
0863bd87 +0x0298:  mov    0x8(%ebp),%eax
0863bd8a +0x029b:  mov    0xc(%ebp),%edx
0863bd8d +0x029e:  mov    %edx,(%eax)
0863bd8f +0x02a0:  pop    %ebp
0863bd90 +0x02a1:  ret
0863bd91 +0x02a2:  nop
0863bd92 +0x02a3:  push   %ebp
0863bd93 +0x02a4:  mov    %esp,%ebp
0863bd95 +0x02a6:  mov    0xc(%ebp),%eax
0863bd98 +0x02a9:  lea    -0x3f(%eax),%edx
0863bd9b +0x02ac:  mov    0x8(%ebp),%eax
0863bd9e +0x02af:  add    $0x58,%edx
0863bda1 +0x02b2:  mov    (%eax,%edx,4),%eax
0863bda4 +0x02b5:  cmp    0x10(%ebp),%eax
0863bda7 +0x02b8:  sete   %al
0863bdaa +0x02bb:  pop    %ebp
0863bdab +0x02bc:  ret
0863bdac +0x02bd:  push   %ebp
0863bdad +0x02be:  mov    %esp,%ebp
0863bdaf +0x02c0:  mov    0x8(%ebp),%eax
0863bdb2 +0x02c3:  mov    0x1c(%eax),%eax
0863bdb5 +0x02c6:  pop    %ebp
0863bdb6 +0x02c7:  ret
0863bdb7 +0x02c8:  nop
0863bdb8 +0x02c9:  push   %ebp
0863bdb9 +0x02ca:  mov    %esp,%ebp
0863bdbb +0x02cc:  mov    0x8(%ebp),%eax
0863bdbe +0x02cf:  mov    0x20(%eax),%eax
0863bdc1 +0x02d2:  pop    %ebp
0863bdc2 +0x02d3:  ret
0863bdc3 +0x02d4:  nop
0863bdc4 +0x02d5:  push   %ebp
0863bdc5 +0x02d6:  mov    %esp,%ebp
0863bdc7 +0x02d8:  mov    0x8(%ebp),%eax
0863bdca +0x02db:  movzbl 0x4(%eax),%eax
0863bdce +0x02df:  pop    %ebp
0863bdcf +0x02e0:  ret
0863bdd0 +0x02e1:  push   %ebp
0863bdd1 +0x02e2:  mov    %esp,%ebp
0863bdd3 +0x02e4:  mov    0x8(%ebp),%eax
0863bdd6 +0x02e7:  mov    0x10(%eax),%eax
0863bdd9 +0x02ea:  test   %eax,%eax
0863bddb +0x02ec:  je     0863bdeb <+0x2fc>
0863bddd +0x02ee:  mov    0x8(%ebp),%eax
0863bde0 +0x02f1:  mov    0x10(%eax),%eax
0863bde3 +0x02f4:  mov    0xe75(%eax),%eax
0863bde9 +0x02fa:  jmp    0863bdf0 <+0x301>
0863bdeb +0x02fc:  mov    $0x0,%eax
0863bdf0 +0x0301:  pop    %ebp
0863bdf1 +0x0302:  ret
0863bdf2 +0x0303:  push   %ebp
0863bdf3 +0x0304:  mov    %esp,%ebp
0863bdf5 +0x0306:  mov    0x8(%ebp),%eax
0863bdf8 +0x0309:  mov    0x10(%eax),%eax
0863bdfb +0x030c:  test   %eax,%eax
0863bdfd +0x030e:  je     0863be1a <+0x32b>
0863bdff +0x0310:  mov    0x8(%ebp),%eax
0863be02 +0x0313:  mov    0x10(%eax),%eax
0863be05 +0x0316:  mov    0x8(%ebp),%edx
0863be08 +0x0319:  mov    0x10(%edx),%edx
0863be0b +0x031c:  mov    0xe75(%edx),%edx
0863be11 +0x0322:  add    $0x1,%edx
0863be14 +0x0325:  mov    %edx,0xe75(%eax)
0863be1a +0x032b:  pop    %ebp
0863be1b +0x032c:  ret
0863be1c +0x032d:  push   %ebp
0863be1d +0x032e:  mov    %esp,%ebp
0863be1f +0x0330:  sub    $0x4,%esp
0863be22 +0x0333:  mov    0xc(%ebp),%eax
0863be25 +0x0336:  mov    %al,-0x4(%ebp)
0863be28 +0x0339:  mov    0x8(%ebp),%eax
0863be2b +0x033c:  mov    0x10(%eax),%eax
0863be2e +0x033f:  test   %eax,%eax
0863be30 +0x0341:  je     0863be51 <+0x362>
0863be32 +0x0343:  mov    0x8(%ebp),%eax
0863be35 +0x0346:  mov    0x10(%eax),%eax
0863be38 +0x0349:  movzbl -0x4(%ebp),%edx
0863be3c +0x034d:  mov    %dl,0xee4(%eax)
0863be42 +0x0353:  mov    0x8(%ebp),%eax
0863be45 +0x0356:  mov    0x10(%eax),%eax
0863be48 +0x0359:  mov    0x10(%ebp),%edx
0863be4b +0x035c:  mov    %edx,0xee5(%eax)
0863be51 +0x0362:  leave
0863be52 +0x0363:  ret
0863be53 +0x0364:  nop
0863be54 +0x0365:  push   %ebp
0863be55 +0x0366:  mov    %esp,%ebp
0863be57 +0x0368:  mov    0x8(%ebp),%eax
0863be5a +0x036b:  movzbl 0x8cef1(%eax),%eax
0863be61 +0x0372:  pop    %ebp
0863be62 +0x0373:  ret
0863be63 +0x0374:  nop
0863be64 +0x0375:  push   %ebp
0863be65 +0x0376:  mov    %esp,%ebp
0863be67 +0x0378:  mov    0x8(%ebp),%eax
0863be6a +0x037b:  movzbl 0x8d253(%eax),%eax
0863be71 +0x0382:  pop    %ebp
0863be72 +0x0383:  ret
0863be73 +0x0384:  nop
0863be74 +0x0385:  push   %ebp
0863be75 +0x0386:  mov    %esp,%ebp
0863be77 +0x0388:  mov    0x8(%ebp),%eax
0863be7a +0x038b:  mov    0x8cfd0(%eax),%eax
0863be80 +0x0391:  pop    %ebp
0863be81 +0x0392:  ret
0863be82 +0x0393:  push   %ebp
0863be83 +0x0394:  mov    %esp,%ebp
0863be85 +0x0396:  mov    0x8(%ebp),%eax
0863be88 +0x0399:  mov    0xc(%ebp),%edx
0863be8b +0x039c:  mov    %edx,0x8cfd4(%eax)
0863be91 +0x03a2:  pop    %ebp
0863be92 +0x03a3:  ret
0863be93 +0x03a4:  nop
0863be94 +0x03a5:  push   %ebp
0863be95 +0x03a6:  mov    %esp,%ebp
0863be97 +0x03a8:  mov    0x8(%ebp),%eax
0863be9a +0x03ab:  add    $0x7121c,%eax
0863be9f +0x03b0:  pop    %ebp
0863bea0 +0x03b1:  ret
0863bea1 +0x03b2:  nop
0863bea2 +0x03b3:  push   %ebp
0863bea3 +0x03b4:  mov    %esp,%ebp
0863bea5 +0x03b6:  sub    $0x18,%esp
0863bea8 +0x03b9:  mov    0x8(%ebp),%eax
0863beab +0x03bc:  add    $0x7121c,%eax
0863beb0 +0x03c1:  mov    %eax,(%esp)
0863beb3 +0x03c4:  call   0863bd5c <+0x26d>
0863beb8 +0x03c9:  test   %eax,%eax
0863beba +0x03cb:  setne  %al
0863bebd +0x03ce:  leave
0863bebe +0x03cf:  ret
0863bebf +0x03d0:  nop
0863bec0 +0x03d1:  push   %ebp
0863bec1 +0x03d2:  mov    %esp,%ebp
0863bec3 +0x03d4:  mov    0x8(%ebp),%eax
0863bec6 +0x03d7:  mov    0x71ba4(%eax),%eax
0863becc +0x03dd:  pop    %ebp
0863becd +0x03de:  ret
0863bece +0x03df:  push   %ebp
0863becf +0x03e0:  mov    %esp,%ebp
0863bed1 +0x03e2:  sub    $0x28,%esp
0863bed4 +0x03e5:  movl   $0x0,-0xc(%ebp)
0863bedb +0x03ec:  jmp    0863bf24 <+0x435>
0863bedd +0x03ee:  mov    -0xc(%ebp),%eax
0863bee0 +0x03f1:  mov    0x8(%ebp),%edx
0863bee3 +0x03f4:  add    $0x796e8,%edx
0863bee9 +0x03fa:  mov    %eax,0x4(%esp)
0863beed +0x03fe:  mov    %edx,(%esp)
0863bef0 +0x0401:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0863bef5 +0x0406:  mov    (%eax),%edx
0863bef7 +0x0408:  mov    0xc(%ebp),%eax
0863befa +0x040b:  cmp    %eax,%edx
0863befc +0x040d:  sete   %al
0863beff +0x0410:  test   %al,%al
0863bf01 +0x0412:  je     0863bf20 <+0x431>
0863bf03 +0x0414:  mov    -0xc(%ebp),%eax
0863bf06 +0x0417:  mov    0x8(%ebp),%edx
0863bf09 +0x041a:  add    $0x796e8,%edx
0863bf0f +0x0420:  mov    %eax,0x4(%esp)
0863bf13 +0x0424:  mov    %edx,(%esp)
0863bf16 +0x0427:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0863bf1b +0x042c:  add    $0x4,%eax
0863bf1e +0x042f:  jmp    0863bf43 <+0x454>
0863bf20 +0x0431:  addl   $0x1,-0xc(%ebp)
0863bf24 +0x0435:  mov    0x8(%ebp),%eax
0863bf27 +0x0438:  add    $0x796e8,%eax
0863bf2c +0x043d:  mov    %eax,(%esp)
0863bf2f +0x0440:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0863bf34 +0x0445:  cmp    -0xc(%ebp),%eax
0863bf37 +0x0448:  setg   %al
0863bf3a +0x044b:  test   %al,%al
0863bf3c +0x044d:  jne    0863bedd <+0x3ee>
0863bf3e +0x044f:  mov    $0x0,%eax
0863bf43 +0x0454:  leave
0863bf44 +0x0455:  ret
0863bf45 +0x0456:  nop
0863bf46 +0x0457:  push   %ebp
0863bf47 +0x0458:  mov    %esp,%ebp
0863bf49 +0x045a:  mov    0x8(%ebp),%eax
0863bf4c +0x045d:  movzwl 0x8cfc8(%eax),%eax
0863bf53 +0x0464:  lea    0x1(%eax),%edx
0863bf56 +0x0467:  mov    0x8(%ebp),%eax
0863bf59 +0x046a:  mov    %dx,0x8cfc8(%eax)
0863bf60 +0x0471:  pop    %ebp
0863bf61 +0x0472:  ret
0863bf62 +0x0473:  push   %ebp
0863bf63 +0x0474:  mov    %esp,%ebp
0863bf65 +0x0476:  mov    0x8(%ebp),%eax
0863bf68 +0x0479:  movzwl 0x8cfc8(%eax),%eax
0863bf6f +0x0480:  pop    %ebp
0863bf70 +0x0481:  ret
0863bf71 +0x0482:  nop
0863bf72 +0x0483:  push   %ebp
0863bf73 +0x0484:  mov    %esp,%ebp
0863bf75 +0x0486:  mov    0x8(%ebp),%eax
0863bf78 +0x0489:  movzbl 0x8e3ed(%eax),%eax
0863bf7f +0x0490:  pop    %ebp
0863bf80 +0x0491:  ret
0863bf81 +0x0492:  nop
0863bf82 +0x0493:  push   %ebp
0863bf83 +0x0494:  mov    %esp,%ebp
0863bf85 +0x0496:  mov    0x8(%ebp),%eax
0863bf88 +0x0499:  mov    0x8e0f8(%eax),%eax
0863bf8e +0x049f:  pop    %ebp
0863bf8f +0x04a0:  ret
0863bf90 +0x04a1:  push   %ebp
0863bf91 +0x04a2:  mov    %esp,%ebp
0863bf93 +0x04a4:  mov    0x8(%ebp),%eax
0863bf96 +0x04a7:  movzbl 0x8e408(%eax),%eax
0863bf9d +0x04ae:  pop    %ebp
0863bf9e +0x04af:  ret
0863bf9f +0x04b0:  nop
0863bfa0 +0x04b1:  push   %ebp
0863bfa1 +0x04b2:  mov    %esp,%ebp
0863bfa3 +0x04b4:  mov    0x8(%ebp),%eax
0863bfa6 +0x04b7:  movzbl 0x8e951(%eax),%eax
0863bfad +0x04be:  pop    %ebp
0863bfae +0x04bf:  ret
0863bfaf +0x04c0:  nop
0863bfb0 +0x04c1:  push   %ebp
0863bfb1 +0x04c2:  mov    %esp,%ebp
0863bfb3 +0x04c4:  mov    0x8(%ebp),%eax
0863bfb6 +0x04c7:  mov    (%eax),%eax
0863bfb8 +0x04c9:  pop    %ebp
0863bfb9 +0x04ca:  ret
0863bfba +0x04cb:  push   %ebp
0863bfbb +0x04cc:  mov    %esp,%ebp
0863bfbd +0x04ce:  mov    0x8(%ebp),%eax
0863bfc0 +0x04d1:  mov    0x4(%eax),%eax
0863bfc3 +0x04d4:  pop    %ebp
0863bfc4 +0x04d5:  ret
0863bfc5 +0x04d6:  nop
0863bfc6 +0x04d7:  push   %ebp
0863bfc7 +0x04d8:  mov    %esp,%ebp
0863bfc9 +0x04da:  mov    0x8(%ebp),%eax
0863bfcc +0x04dd:  mov    0x8(%eax),%eax
0863bfcf +0x04e0:  pop    %ebp
0863bfd0 +0x04e1:  ret
0863bfd1 +0x04e2:  nop
0863bfd2 +0x04e3:  push   %ebp
0863bfd3 +0x04e4:  mov    %esp,%ebp
0863bfd5 +0x04e6:  mov    0x8(%ebp),%eax
0863bfd8 +0x04e9:  mov    0xc(%eax),%eax
0863bfdb +0x04ec:  pop    %ebp
0863bfdc +0x04ed:  ret
0863bfdd +0x04ee:  nop
0863bfde +0x04ef:  push   %ebp
0863bfdf +0x04f0:  mov    %esp,%ebp
0863bfe1 +0x04f2:  mov    0x8(%ebp),%eax
0863bfe4 +0x04f5:  mov    0x10(%eax),%eax
0863bfe7 +0x04f8:  pop    %ebp
0863bfe8 +0x04f9:  ret
0863bfe9 +0x04fa:  nop
0863bfea +0x04fb:  push   %ebp
0863bfeb +0x04fc:  mov    %esp,%ebp
0863bfed +0x04fe:  mov    0x8(%ebp),%eax
0863bff0 +0x0501:  mov    0x14(%eax),%eax
0863bff3 +0x0504:  pop    %ebp
0863bff4 +0x0505:  ret
0863bff5 +0x0506:  nop
0863bff6 +0x0507:  push   %ebp
0863bff7 +0x0508:  mov    %esp,%ebp
0863bff9 +0x050a:  mov    0x8(%ebp),%eax
0863bffc +0x050d:  add    $0x2,%eax
0863bfff +0x0510:  pop    %ebp
0863c000 +0x0511:  ret
0863c001 +0x0512:  nop
0863c002 +0x0513:  push   %ebp
0863c003 +0x0514:  mov    %esp,%ebp
0863c005 +0x0516:  mov    0x8(%ebp),%eax
0863c008 +0x0519:  mov    0xc(%ebp),%edx
0863c00b +0x051c:  mov    %edx,(%eax)
0863c00d +0x051e:  mov    0x8(%ebp),%eax
0863c010 +0x0521:  mov    0x10(%ebp),%edx
0863c013 +0x0524:  mov    %edx,0x4(%eax)
0863c016 +0x0527:  pop    %ebp
0863c017 +0x0528:  ret
0863c018 +0x0529:  push   %ebp
0863c019 +0x052a:  mov    %esp,%ebp
0863c01b +0x052c:  push   %esi
0863c01c +0x052d:  push   %ebx
0863c01d +0x052e:  sub    $0x30,%esp
0863c020 +0x0531:  cmpl   $0x0,0xc(%ebp)
0863c024 +0x0535:  je     0863c17a <+0x68b>
0863c02a +0x053b:  mov    0x8(%ebp),%eax
0863c02d +0x053e:  mov    0x4(%eax),%ebx
0863c030 +0x0541:  mov    0xc(%ebp),%eax
0863c033 +0x0544:  mov    %eax,(%esp)
0863c036 +0x0547:  call   0863bec0 <+0x3d1>
0863c03b +0x054c:  mov    %ebx,%edx
0863c03d +0x054e:  sub    %eax,%edx
0863c03f +0x0550:  mov    %edx,%eax
0863c041 +0x0552:  mov    %eax,-0x10(%ebp)
0863c044 +0x0555:  mov    0x8(%ebp),%eax
0863c047 +0x0558:  mov    (%eax),%eax
0863c049 +0x055a:  cmp    -0x10(%ebp),%eax
0863c04c +0x055d:  jg     0863c17d <+0x68e>
0863c052 +0x0563:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0863c057 +0x0568:  movl   $0x1e,0x8(%esp)
0863c05f +0x0570:  movl   $"localtaiwan/Event/EventStayTimeCharacter.h",0x4(%esp)
0863c067 +0x0578:  mov    %eax,(%esp)
0863c06a +0x057b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0863c06f +0x0580:  movl   $0x1,0x8(%esp)
0863c077 +0x0588:  mov    %eax,0x4(%esp)
0863c07b +0x058c:  lea    -0x28(%ebp),%eax
0863c07e +0x058f:  mov    %eax,(%esp)
0863c081 +0x0592:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0863c086 +0x0597:  mov    0xc(%ebp),%eax
0863c089 +0x059a:  mov    %eax,(%esp)
0863c08c +0x059d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0863c091 +0x05a2:  mov    %eax,0x8(%esp)
0863c095 +0x05a6:  movl   $0x5,0x4(%esp)
0863c09d +0x05ae:  lea    -0x28(%ebp),%eax
0863c0a0 +0x05b1:  mov    %eax,(%esp)
0863c0a3 +0x05b4:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0863c0a8 +0x05b9:  lea    -0x28(%ebp),%eax
0863c0ab +0x05bc:  mov    %eax,(%esp)
0863c0ae +0x05bf:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0863c0b3 +0x05c4:  mov    %eax,(%esp)
0863c0b6 +0x05c7:  call   0815ea76 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xcea>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xcea
0863c0bb +0x05cc:  mov    %eax,-0xc(%ebp)
0863c0be +0x05cf:  cmpl   $0x0,-0xc(%ebp)
0863c0c2 +0x05d3:  je     0863c16d <+0x67e>
0863c0c8 +0x05d9:  mov    0xc(%ebp),%eax
0863c0cb +0x05dc:  mov    %eax,(%esp)
0863c0ce +0x05df:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0863c0d3 +0x05e4:  mov    %eax,%ebx
0863c0d5 +0x05e6:  movl   $0x0,0xc(%esp)
0863c0dd +0x05ee:  movl   $0x24,0x8(%esp)
0863c0e5 +0x05f6:  movl   $&_ZZN14CEventStayTime17RewardGoGoFighterclEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0863c0ed +0x05fe:  lea    -0x20(%ebp),%eax
0863c0f0 +0x0601:  mov    %eax,(%esp)
0863c0f3 +0x0604:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863c0f8 +0x0609:  mov    %ebx,0x8(%esp)
0863c0fc +0x060d:  movl   $"[Taiwan, Event] GoGoFighter try reward mid. (%u)",0x4(%esp)
0863c104 +0x0615:  lea    -0x20(%ebp),%eax
0863c107 +0x0618:  mov    %eax,(%esp)
0863c10a +0x061b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863c10f +0x0620:  mov    -0xc(%ebp),%eax
0863c112 +0x0623:  mov    %eax,(%esp)
0863c115 +0x0626:  call   0863bd76 <+0x287>
0863c11a +0x062b:  mov    0xc(%ebp),%eax
0863c11d +0x062e:  mov    %eax,(%esp)
0863c120 +0x0631:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0863c125 +0x0636:  mov    %eax,0x4(%esp)
0863c129 +0x063a:  mov    -0xc(%ebp),%eax
0863c12c +0x063d:  mov    %eax,(%esp)
0863c12f +0x0640:  call   0863bd84 <+0x295>
0863c134 +0x0645:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0863c139 +0x064a:  lea    -0x28(%ebp),%edx
0863c13c +0x064d:  mov    %edx,0x8(%esp)
0863c140 +0x0651:  movl   $0x2,0x4(%esp)
0863c148 +0x0659:  mov    %eax,(%esp)
0863c14b +0x065c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0863c150 +0x0661:  jmp    0863c16d <+0x67e>
0863c152 +0x0663:  mov    %edx,%ebx
0863c154 +0x0665:  mov    %eax,%esi
0863c156 +0x0667:  lea    -0x28(%ebp),%eax
0863c159 +0x066a:  mov    %eax,(%esp)
0863c15c +0x066d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0863c161 +0x0672:  mov    %esi,%eax
0863c163 +0x0674:  mov    %ebx,%edx
0863c165 +0x0676:  mov    %eax,(%esp)
0863c168 +0x0679:  call   08ae3750 <_Unwind_Resume>
0863c16d +0x067e:  lea    -0x28(%ebp),%eax
0863c170 +0x0681:  mov    %eax,(%esp)
0863c173 +0x0684:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0863c178 +0x0689:  jmp    0863c17e <+0x68f>
0863c17a +0x068b:  nop
0863c17b +0x068c:  jmp    0863c17e <+0x68f>
0863c17d +0x068e:  nop
0863c17e +0x068f:  add    $0x30,%esp
0863c181 +0x0692:  pop    %ebx
0863c182 +0x0693:  pop    %esi
0863c183 +0x0694:  pop    %ebp
0863c184 +0x0695:  ret
0863c185 +0x0696:  nop
0863c186 +0x0697:  push   %ebp
0863c187 +0x0698:  mov    %esp,%ebp
0863c189 +0x069a:  sub    $0x18,%esp
0863c18c +0x069d:  mov    0x8(%ebp),%eax
0863c18f +0x06a0:  mov    %eax,(%esp)
0863c192 +0x06a3:  call   0863bb30 <+0x41>
0863c197 +0x06a8:  mov    0x8(%ebp),%eax
0863c19a +0x06ab:  movl   $&_ZTV14TimerCheckConn+0x8,(%eax)
0863c1a0 +0x06b1:  leave
0863c1a1 +0x06b2:  ret
0863c1a2 +0x06b3:  push   %ebp
0863c1a3 +0x06b4:  mov    %esp,%ebp
0863c1a5 +0x06b6:  sub    $0x18,%esp
0863c1a8 +0x06b9:  mov    0x8(%ebp),%eax
0863c1ab +0x06bc:  mov    %eax,(%esp)
0863c1ae +0x06bf:  call   0863bb30 <+0x41>
0863c1b3 +0x06c4:  mov    0x8(%ebp),%eax
0863c1b6 +0x06c7:  movl   $&_ZTV13TimerDBUpdate+0x8,(%eax)
0863c1bc +0x06cd:  leave
0863c1bd +0x06ce:  ret
0863c1be +0x06cf:  push   %ebp
0863c1bf +0x06d0:  mov    %esp,%ebp
0863c1c1 +0x06d2:  sub    $0x18,%esp
0863c1c4 +0x06d5:  mov    0x8(%ebp),%eax
0863c1c7 +0x06d8:  mov    %eax,(%esp)
0863c1ca +0x06db:  call   0863bb30 <+0x41>
0863c1cf +0x06e0:  mov    0x8(%ebp),%eax
0863c1d2 +0x06e3:  movl   $&_ZTV12TimerStamina+0x8,(%eax)
0863c1d8 +0x06e9:  leave
0863c1d9 +0x06ea:  ret
0863c1da +0x06eb:  push   %ebp
0863c1db +0x06ec:  mov    %esp,%ebp
0863c1dd +0x06ee:  sub    $0x18,%esp
0863c1e0 +0x06f1:  mov    0x8(%ebp),%eax
0863c1e3 +0x06f4:  mov    %eax,(%esp)
0863c1e6 +0x06f7:  call   0863bb30 <+0x41>
0863c1eb +0x06fc:  mov    0x8(%ebp),%eax
0863c1ee +0x06ff:  movl   $&_ZTV15TimerMapLoading+0x8,(%eax)
0863c1f4 +0x0705:  leave
0863c1f5 +0x0706:  ret
0863c1f6 +0x0707:  push   %ebp
0863c1f7 +0x0708:  mov    %esp,%ebp
0863c1f9 +0x070a:  sub    $0x18,%esp
0863c1fc +0x070d:  mov    0x8(%ebp),%eax
0863c1ff +0x0710:  mov    %eax,(%esp)
0863c202 +0x0713:  call   0863bb30 <+0x41>
0863c207 +0x0718:  mov    0x8(%ebp),%eax
0863c20a +0x071b:  movl   $&_ZTV14TimerSetResult+0x8,(%eax)
0863c210 +0x0721:  leave
0863c211 +0x0722:  ret
0863c212 +0x0723:  push   %ebp
0863c213 +0x0724:  mov    %esp,%ebp
0863c215 +0x0726:  sub    $0x18,%esp
0863c218 +0x0729:  mov    0x8(%ebp),%eax
0863c21b +0x072c:  mov    %eax,(%esp)
0863c21e +0x072f:  call   0863bb30 <+0x41>
0863c223 +0x0734:  mov    0x8(%ebp),%eax
0863c226 +0x0737:  movl   $&_ZTV17TimerDungeonClear+0x8,(%eax)
0863c22c +0x073d:  leave
0863c22d +0x073e:  ret
0863c22e +0x073f:  push   %ebp
0863c22f +0x0740:  mov    %esp,%ebp
0863c231 +0x0742:  sub    $0x18,%esp
0863c234 +0x0745:  mov    0x8(%ebp),%eax
0863c237 +0x0748:  mov    %eax,(%esp)
0863c23a +0x074b:  call   0863bb30 <+0x41>
0863c23f +0x0750:  mov    0x8(%ebp),%eax
0863c242 +0x0753:  movl   $&_ZTV16TimerDungeonFail+0x8,(%eax)
0863c248 +0x0759:  leave
0863c249 +0x075a:  ret
0863c24a +0x075b:  push   %ebp
0863c24b +0x075c:  mov    %esp,%ebp
0863c24d +0x075e:  sub    $0x18,%esp
0863c250 +0x0761:  mov    0x8(%ebp),%eax
0863c253 +0x0764:  mov    %eax,(%esp)
0863c256 +0x0767:  call   0863bb30 <+0x41>
0863c25b +0x076c:  mov    0x8(%ebp),%eax
0863c25e +0x076f:  movl   $&_ZTV25TimerPartyWalkOutLackUser+0x8,(%eax)
0863c264 +0x0775:  leave
0863c265 +0x0776:  ret
0863c266 +0x0777:  push   %ebp
0863c267 +0x0778:  mov    %esp,%ebp
0863c269 +0x077a:  sub    $0x18,%esp
0863c26c +0x077d:  mov    0x8(%ebp),%eax
0863c26f +0x0780:  mov    %eax,(%esp)
0863c272 +0x0783:  call   0863bb30 <+0x41>
0863c277 +0x0788:  mov    0x8(%ebp),%eax
0863c27a +0x078b:  movl   $&_ZTV23TimerPVPWalkOutLackUser+0x8,(%eax)
0863c280 +0x0791:  leave
0863c281 +0x0792:  ret
0863c282 +0x0793:  push   %ebp
0863c283 +0x0794:  mov    %esp,%ebp
0863c285 +0x0796:  sub    $0x18,%esp
0863c288 +0x0799:  mov    0x8(%ebp),%eax
0863c28b +0x079c:  mov    %eax,(%esp)
0863c28e +0x079f:  call   0863bb30 <+0x41>
0863c293 +0x07a4:  mov    0x8(%ebp),%eax
0863c296 +0x07a7:  movl   $&_ZTV18TimerStatisticsLog+0x8,(%eax)
0863c29c +0x07ad:  leave
0863c29d +0x07ae:  ret
0863c29e +0x07af:  push   %ebp
0863c29f +0x07b0:  mov    %esp,%ebp
0863c2a1 +0x07b2:  sub    $0x18,%esp
0863c2a4 +0x07b5:  mov    0x8(%ebp),%eax
0863c2a7 +0x07b8:  mov    %eax,(%esp)
0863c2aa +0x07bb:  call   0863bb30 <+0x41>
0863c2af +0x07c0:  mov    0x8(%ebp),%eax
0863c2b2 +0x07c3:  movl   $&_ZTV15TimerCardSelect+0x8,(%eax)
0863c2b8 +0x07c9:  leave
0863c2b9 +0x07ca:  ret
0863c2ba +0x07cb:  push   %ebp
0863c2bb +0x07cc:  mov    %esp,%ebp
0863c2bd +0x07ce:  sub    $0x18,%esp
0863c2c0 +0x07d1:  mov    0x8(%ebp),%eax
0863c2c3 +0x07d4:  mov    %eax,(%esp)
0863c2c6 +0x07d7:  call   0863bb30 <+0x41>
0863c2cb +0x07dc:  mov    0x8(%ebp),%eax
0863c2ce +0x07df:  movl   $&_ZTV23TimerClearDungeonReward+0x8,(%eax)
0863c2d4 +0x07e5:  leave
0863c2d5 +0x07e6:  ret
0863c2d6 +0x07e7:  push   %ebp
0863c2d7 +0x07e8:  mov    %esp,%ebp
0863c2d9 +0x07ea:  sub    $0x18,%esp
0863c2dc +0x07ed:  mov    0x8(%ebp),%eax
0863c2df +0x07f0:  mov    %eax,(%esp)
0863c2e2 +0x07f3:  call   0863bb30 <+0x41>
0863c2e7 +0x07f8:  mov    0x8(%ebp),%eax
0863c2ea +0x07fb:  movl   $&_ZTV27TimerClearDungeonScoreScoll+0x8,(%eax)
0863c2f0 +0x0801:  leave
0863c2f1 +0x0802:  ret
0863c2f2 +0x0803:  push   %ebp
0863c2f3 +0x0804:  mov    %esp,%ebp
0863c2f5 +0x0806:  sub    $0x18,%esp
0863c2f8 +0x0809:  mov    0x8(%ebp),%eax
0863c2fb +0x080c:  mov    %eax,(%esp)
0863c2fe +0x080f:  call   0863bb30 <+0x41>
0863c303 +0x0814:  mov    0x8(%ebp),%eax
0863c306 +0x0817:  movl   $&_ZTV32TimerClearDungeonCardSelectRight+0x8,(%eax)
0863c30c +0x081d:  leave
0863c30d +0x081e:  ret
0863c30e +0x081f:  push   %ebp
0863c30f +0x0820:  mov    %esp,%ebp
0863c311 +0x0822:  sub    $0x18,%esp
0863c314 +0x0825:  mov    0x8(%ebp),%eax
0863c317 +0x0828:  mov    %eax,(%esp)
0863c31a +0x082b:  call   0863bb30 <+0x41>
0863c31f +0x0830:  mov    0x8(%ebp),%eax
0863c322 +0x0833:  movl   $&_ZTV23TimerPremiumServiceOver+0x8,(%eax)
0863c328 +0x0839:  leave
0863c329 +0x083a:  ret
0863c32a +0x083b:  push   %ebp
0863c32b +0x083c:  mov    %esp,%ebp
0863c32d +0x083e:  sub    $0x18,%esp
0863c330 +0x0841:  mov    0x8(%ebp),%eax
0863c333 +0x0844:  mov    %eax,(%esp)
0863c336 +0x0847:  call   0863bb30 <+0x41>
0863c33b +0x084c:  mov    0x8(%ebp),%eax
0863c33e +0x084f:  movl   $&_ZTV25TimerPremiumServiceUpdate+0x8,(%eax)
0863c344 +0x0855:  leave
0863c345 +0x0856:  ret
0863c346 +0x0857:  push   %ebp
0863c347 +0x0858:  mov    %esp,%ebp
0863c349 +0x085a:  sub    $0x18,%esp
0863c34c +0x085d:  mov    0x8(%ebp),%eax
0863c34f +0x0860:  mov    %eax,(%esp)
0863c352 +0x0863:  call   0863bb30 <+0x41>
0863c357 +0x0868:  mov    0x8(%ebp),%eax
0863c35a +0x086b:  movl   $&_ZTV24TimerPremiumServiceStart+0x8,(%eax)
0863c360 +0x0871:  leave
0863c361 +0x0872:  ret
0863c362 +0x0873:  push   %ebp
0863c363 +0x0874:  mov    %esp,%ebp
0863c365 +0x0876:  sub    $0x18,%esp
0863c368 +0x0879:  mov    0x8(%ebp),%eax
0863c36b +0x087c:  mov    %eax,(%esp)
0863c36e +0x087f:  call   0863bb30 <+0x41>
0863c373 +0x0884:  mov    0x8(%ebp),%eax
0863c376 +0x0887:  movl   $&_ZTV24TimerCheckPaidPCRoomTerm+0x8,(%eax)
0863c37c +0x088d:  leave
0863c37d +0x088e:  ret
0863c37e +0x088f:  push   %ebp
0863c37f +0x0890:  mov    %esp,%ebp
0863c381 +0x0892:  sub    $0x18,%esp
0863c384 +0x0895:  mov    0x8(%ebp),%eax
0863c387 +0x0898:  mov    %eax,(%esp)
0863c38a +0x089b:  call   0863bb30 <+0x41>
0863c38f +0x08a0:  mov    0x8(%ebp),%eax
0863c392 +0x08a3:  movl   $&_ZTV22TimerEPLPReturnVillage+0x8,(%eax)
0863c398 +0x08a9:  leave
0863c399 +0x08aa:  ret
0863c39a +0x08ab:  push   %ebp
0863c39b +0x08ac:  mov    %esp,%ebp
0863c39d +0x08ae:  sub    $0x18,%esp
0863c3a0 +0x08b1:  mov    0x8(%ebp),%eax
0863c3a3 +0x08b4:  mov    %eax,(%esp)
0863c3a6 +0x08b7:  call   0863bb30 <+0x41>
0863c3ab +0x08bc:  mov    0x8(%ebp),%eax
0863c3ae +0x08bf:  movl   $&_ZTV20TimerEPLPCommandWait+0x8,(%eax)
0863c3b4 +0x08c5:  leave
0863c3b5 +0x08c6:  ret
0863c3b6 +0x08c7:  push   %ebp
0863c3b7 +0x08c8:  mov    %esp,%ebp
0863c3b9 +0x08ca:  sub    $0x18,%esp
0863c3bc +0x08cd:  mov    0x8(%ebp),%eax
0863c3bf +0x08d0:  mov    %eax,(%esp)
0863c3c2 +0x08d3:  call   0863bb30 <+0x41>
0863c3c7 +0x08d8:  mov    0x8(%ebp),%eax
0863c3ca +0x08db:  movl   $&_ZTV21TimerWarRoomWaitCount+0x8,(%eax)
0863c3d0 +0x08e1:  leave
0863c3d1 +0x08e2:  ret
0863c3d2 +0x08e3:  push   %ebp
0863c3d3 +0x08e4:  mov    %esp,%ebp
0863c3d5 +0x08e6:  sub    $0x18,%esp
0863c3d8 +0x08e9:  mov    0x8(%ebp),%eax
0863c3db +0x08ec:  mov    %eax,(%esp)
0863c3de +0x08ef:  call   0863bb30 <+0x41>
0863c3e3 +0x08f4:  mov    0x8(%ebp),%eax
0863c3e6 +0x08f7:  movl   $&_ZTV26TimerWarRoomReadyLockCount+0x8,(%eax)
0863c3ec +0x08fd:  leave
0863c3ed +0x08fe:  ret
0863c3ee +0x08ff:  push   %ebp
0863c3ef +0x0900:  mov    %esp,%ebp
0863c3f1 +0x0902:  sub    $0x18,%esp
0863c3f4 +0x0905:  mov    0x8(%ebp),%eax
0863c3f7 +0x0908:  mov    %eax,(%esp)
0863c3fa +0x090b:  call   0863bb30 <+0x41>
0863c3ff +0x0910:  mov    0x8(%ebp),%eax
0863c402 +0x0913:  movl   $&_ZTV28TimerWarRoomBattlePauseCount+0x8,(%eax)
0863c408 +0x0919:  leave
0863c409 +0x091a:  ret
0863c40a +0x091b:  push   %ebp
0863c40b +0x091c:  mov    %esp,%ebp
0863c40d +0x091e:  sub    $0x18,%esp
0863c410 +0x0921:  mov    0x8(%ebp),%eax
0863c413 +0x0924:  mov    %eax,(%esp)
0863c416 +0x0927:  call   0863bb30 <+0x41>
0863c41b +0x092c:  mov    0x8(%ebp),%eax
0863c41e +0x092f:  movl   $&_ZTV23TimerWarRoomResultCount+0x8,(%eax)
0863c424 +0x0935:  leave
0863c425 +0x0936:  ret
0863c426 +0x0937:  push   %ebp
0863c427 +0x0938:  mov    %esp,%ebp
0863c429 +0x093a:  sub    $0x18,%esp
0863c42c +0x093d:  mov    0x8(%ebp),%eax
0863c42f +0x0940:  mov    %eax,(%esp)
0863c432 +0x0943:  call   0863bb30 <+0x41>
0863c437 +0x0948:  mov    0x8(%ebp),%eax
0863c43a +0x094b:  movl   $&_ZTV20TImerWarRoomTimeBomb+0x8,(%eax)
0863c440 +0x0951:  leave
0863c441 +0x0952:  ret
0863c442 +0x0953:  push   %ebp
0863c443 +0x0954:  mov    %esp,%ebp
0863c445 +0x0956:  sub    $0x18,%esp
0863c448 +0x0959:  mov    0x8(%ebp),%eax
0863c44b +0x095c:  mov    %eax,(%esp)
0863c44e +0x095f:  call   0863bb30 <+0x41>
0863c453 +0x0964:  mov    0x8(%ebp),%eax
0863c456 +0x0967:  movl   $&_ZTV21TimerWarRoomCheckFail+0x8,(%eax)
0863c45c +0x096d:  leave
0863c45d +0x096e:  ret
0863c45e +0x096f:  push   %ebp
0863c45f +0x0970:  mov    %esp,%ebp
0863c461 +0x0972:  sub    $0x18,%esp
0863c464 +0x0975:  mov    0x8(%ebp),%eax
0863c467 +0x0978:  mov    %eax,(%esp)
0863c46a +0x097b:  call   0863bb30 <+0x41>
0863c46f +0x0980:  mov    0x8(%ebp),%eax
0863c472 +0x0983:  movl   $&_ZTV22TimerWarRoomChangeHost+0x8,(%eax)
0863c478 +0x0989:  leave
0863c479 +0x098a:  ret
0863c47a +0x098b:  push   %ebp
0863c47b +0x098c:  mov    %esp,%ebp
0863c47d +0x098e:  sub    $0x18,%esp
0863c480 +0x0991:  mov    0x8(%ebp),%eax
0863c483 +0x0994:  mov    %eax,(%esp)
0863c486 +0x0997:  call   0863bb30 <+0x41>
0863c48b +0x099c:  mov    0x8(%ebp),%eax
0863c48e +0x099f:  movl   $&_ZTV28TimerBloodSmallRoundRegister+0x8,(%eax)
0863c494 +0x09a5:  leave
0863c495 +0x09a6:  ret
0863c496 +0x09a7:  push   %ebp
0863c497 +0x09a8:  mov    %esp,%ebp
0863c499 +0x09aa:  sub    $0x18,%esp
0863c49c +0x09ad:  mov    0x8(%ebp),%eax
0863c49f +0x09b0:  mov    %eax,(%esp)
0863c4a2 +0x09b3:  call   0863bb30 <+0x41>
0863c4a7 +0x09b8:  mov    0x8(%ebp),%eax
0863c4aa +0x09bb:  movl   $&_ZTV24TimerBloodPhaseRegister0+0x8,(%eax)
0863c4b0 +0x09c1:  leave
0863c4b1 +0x09c2:  ret
0863c4b2 +0x09c3:  push   %ebp
0863c4b3 +0x09c4:  mov    %esp,%ebp
0863c4b5 +0x09c6:  sub    $0x18,%esp
0863c4b8 +0x09c9:  mov    0x8(%ebp),%eax
0863c4bb +0x09cc:  mov    %eax,(%esp)
0863c4be +0x09cf:  call   0863bb30 <+0x41>
0863c4c3 +0x09d4:  mov    0x8(%ebp),%eax
0863c4c6 +0x09d7:  movl   $&_ZTV24TimerBloodPhaseRegister1+0x8,(%eax)
0863c4cc +0x09dd:  leave
0863c4cd +0x09de:  ret
0863c4ce +0x09df:  push   %ebp
0863c4cf +0x09e0:  mov    %esp,%ebp
0863c4d1 +0x09e2:  sub    $0x18,%esp
0863c4d4 +0x09e5:  mov    0x8(%ebp),%eax
0863c4d7 +0x09e8:  mov    %eax,(%esp)
0863c4da +0x09eb:  call   0863bb30 <+0x41>
0863c4df +0x09f0:  mov    0x8(%ebp),%eax
0863c4e2 +0x09f3:  movl   $&_ZTV24TimerBloodPhaseRegister2+0x8,(%eax)
0863c4e8 +0x09f9:  leave
0863c4e9 +0x09fa:  ret
0863c4ea +0x09fb:  push   %ebp
0863c4eb +0x09fc:  mov    %esp,%ebp
0863c4ed +0x09fe:  sub    $0x18,%esp
0863c4f0 +0x0a01:  mov    0x8(%ebp),%eax
0863c4f3 +0x0a04:  mov    %eax,(%esp)
0863c4f6 +0x0a07:  call   0863bb30 <+0x41>
0863c4fb +0x0a0c:  mov    0x8(%ebp),%eax
0863c4fe +0x0a0f:  movl   $&_ZTV24TimerBloodPhaseRegister3+0x8,(%eax)
0863c504 +0x0a15:  leave
0863c505 +0x0a16:  ret
0863c506 +0x0a17:  push   %ebp
0863c507 +0x0a18:  mov    %esp,%ebp
0863c509 +0x0a1a:  sub    $0x18,%esp
0863c50c +0x0a1d:  mov    0x8(%ebp),%eax
0863c50f +0x0a20:  mov    %eax,(%esp)
0863c512 +0x0a23:  call   0863bb30 <+0x41>
0863c517 +0x0a28:  mov    0x8(%ebp),%eax
0863c51a +0x0a2b:  movl   $&_ZTV24TimerBloodPhaseRegister4+0x8,(%eax)
0863c520 +0x0a31:  leave
0863c521 +0x0a32:  ret
0863c522 +0x0a33:  push   %ebp
0863c523 +0x0a34:  mov    %esp,%ebp
0863c525 +0x0a36:  sub    $0x18,%esp
0863c528 +0x0a39:  mov    0x8(%ebp),%eax
0863c52b +0x0a3c:  mov    %eax,(%esp)
0863c52e +0x0a3f:  call   0863bb30 <+0x41>
0863c533 +0x0a44:  mov    0x8(%ebp),%eax
0863c536 +0x0a47:  movl   $&_ZTV24TimerBloodPhaseRegister5+0x8,(%eax)
0863c53c +0x0a4d:  leave
0863c53d +0x0a4e:  ret
0863c53e +0x0a4f:  push   %ebp
0863c53f +0x0a50:  mov    %esp,%ebp
0863c541 +0x0a52:  sub    $0x18,%esp
0863c544 +0x0a55:  mov    0x8(%ebp),%eax
0863c547 +0x0a58:  mov    %eax,(%esp)
0863c54a +0x0a5b:  call   0863bb30 <+0x41>
0863c54f +0x0a60:  mov    0x8(%ebp),%eax
0863c552 +0x0a63:  movl   $&_ZTV24TimerBloodPhaseRegister6+0x8,(%eax)
0863c558 +0x0a69:  leave
0863c559 +0x0a6a:  ret
0863c55a +0x0a6b:  push   %ebp
0863c55b +0x0a6c:  mov    %esp,%ebp
0863c55d +0x0a6e:  sub    $0x18,%esp
0863c560 +0x0a71:  mov    0x8(%ebp),%eax
0863c563 +0x0a74:  mov    %eax,(%esp)
0863c566 +0x0a77:  call   0863bb30 <+0x41>
0863c56b +0x0a7c:  mov    0x8(%ebp),%eax
0863c56e +0x0a7f:  movl   $&_ZTV24TimerBloodPhaseRegister7+0x8,(%eax)
0863c574 +0x0a85:  leave
0863c575 +0x0a86:  ret
0863c576 +0x0a87:  push   %ebp
0863c577 +0x0a88:  mov    %esp,%ebp
0863c579 +0x0a8a:  sub    $0x18,%esp
0863c57c +0x0a8d:  mov    0x8(%ebp),%eax
0863c57f +0x0a90:  mov    %eax,(%esp)
0863c582 +0x0a93:  call   0863bb30 <+0x41>
0863c587 +0x0a98:  mov    0x8(%ebp),%eax
0863c58a +0x0a9b:  movl   $&_ZTV24TimerBloodPhaseRegister8+0x8,(%eax)
0863c590 +0x0aa1:  leave
0863c591 +0x0aa2:  ret
0863c592 +0x0aa3:  push   %ebp
0863c593 +0x0aa4:  mov    %esp,%ebp
0863c595 +0x0aa6:  sub    $0x18,%esp
0863c598 +0x0aa9:  mov    0x8(%ebp),%eax
0863c59b +0x0aac:  mov    %eax,(%esp)
0863c59e +0x0aaf:  call   0863bb30 <+0x41>
0863c5a3 +0x0ab4:  mov    0x8(%ebp),%eax
0863c5a6 +0x0ab7:  movl   $&_ZTV24TimerBloodPhaseRegister9+0x8,(%eax)
0863c5ac +0x0abd:  leave
0863c5ad +0x0abe:  ret
0863c5ae +0x0abf:  push   %ebp
0863c5af +0x0ac0:  mov    %esp,%ebp
0863c5b1 +0x0ac2:  sub    $0x18,%esp
0863c5b4 +0x0ac5:  mov    0x8(%ebp),%eax
0863c5b7 +0x0ac8:  mov    %eax,(%esp)
0863c5ba +0x0acb:  call   0863bb30 <+0x41>
0863c5bf +0x0ad0:  mov    0x8(%ebp),%eax
0863c5c2 +0x0ad3:  movl   $&_ZTV22TimerBloodCrazyMonster+0x8,(%eax)
0863c5c8 +0x0ad9:  leave
0863c5c9 +0x0ada:  ret
0863c5ca +0x0adb:  push   %ebp
0863c5cb +0x0adc:  mov    %esp,%ebp
0863c5cd +0x0ade:  sub    $0x18,%esp
0863c5d0 +0x0ae1:  mov    0x8(%ebp),%eax
0863c5d3 +0x0ae4:  mov    %eax,(%esp)
0863c5d6 +0x0ae7:  call   0863bb30 <+0x41>
0863c5db +0x0aec:  mov    0x8(%ebp),%eax
0863c5de +0x0aef:  movl   $&_ZTV28TimerBloodDungeonClearReward+0x8,(%eax)
0863c5e4 +0x0af5:  leave
0863c5e5 +0x0af6:  ret
0863c5e6 +0x0af7:  push   %ebp
0863c5e7 +0x0af8:  mov    %esp,%ebp
0863c5e9 +0x0afa:  sub    $0x18,%esp
0863c5ec +0x0afd:  mov    0x8(%ebp),%eax
0863c5ef +0x0b00:  mov    %eax,(%esp)
0863c5f2 +0x0b03:  call   0863bb30 <+0x41>
0863c5f7 +0x0b08:  mov    0x8(%ebp),%eax
0863c5fa +0x0b0b:  movl   $&_ZTV27TimerUltimateNextRoundStart+0x8,(%eax)
0863c600 +0x0b11:  leave
0863c601 +0x0b12:  ret
0863c602 +0x0b13:  push   %ebp
0863c603 +0x0b14:  mov    %esp,%ebp
0863c605 +0x0b16:  sub    $0x18,%esp
0863c608 +0x0b19:  mov    0x8(%ebp),%eax
0863c60b +0x0b1c:  mov    %eax,(%esp)
0863c60e +0x0b1f:  call   0863bb30 <+0x41>
0863c613 +0x0b24:  mov    0x8(%ebp),%eax
0863c616 +0x0b27:  movl   $&_ZTV19TimerEventChristmas+0x8,(%eax)
0863c61c +0x0b2d:  leave
0863c61d +0x0b2e:  ret
0863c61e +0x0b2f:  push   %ebp
0863c61f +0x0b30:  mov    %esp,%ebp
0863c621 +0x0b32:  sub    $0x18,%esp
0863c624 +0x0b35:  mov    0x8(%ebp),%eax
0863c627 +0x0b38:  mov    %eax,(%esp)
0863c62a +0x0b3b:  call   0863bb30 <+0x41>
0863c62f +0x0b40:  mov    0x8(%ebp),%eax
0863c632 +0x0b43:  movl   $&_ZTV32TimerStatisticsDetailChannelInfo+0x8,(%eax)
0863c638 +0x0b49:  leave
0863c639 +0x0b4a:  ret
0863c63a +0x0b4b:  push   %ebp
0863c63b +0x0b4c:  mov    %esp,%ebp
0863c63d +0x0b4e:  sub    $0x18,%esp
0863c640 +0x0b51:  mov    0x8(%ebp),%eax
0863c643 +0x0b54:  mov    %eax,(%esp)
0863c646 +0x0b57:  call   0863bb30 <+0x41>
0863c64b +0x0b5c:  mov    0x8(%ebp),%eax
0863c64e +0x0b5f:  movl   $&_ZTV19TimerStatisticLevel+0x8,(%eax)
0863c654 +0x0b65:  leave
0863c655 +0x0b66:  ret
0863c656 +0x0b67:  push   %ebp
0863c657 +0x0b68:  mov    %esp,%ebp
0863c659 +0x0b6a:  sub    $0x18,%esp
0863c65c +0x0b6d:  mov    0x8(%ebp),%eax
0863c65f +0x0b70:  mov    %eax,(%esp)
0863c662 +0x0b73:  call   0863bb30 <+0x41>
0863c667 +0x0b78:  mov    0x8(%ebp),%eax
0863c66a +0x0b7b:  movl   $&_ZTV20TimerScheduleOneHour+0x8,(%eax)
0863c670 +0x0b81:  leave
0863c671 +0x0b82:  ret
0863c672 +0x0b83:  push   %ebp
0863c673 +0x0b84:  mov    %esp,%ebp
0863c675 +0x0b86:  sub    $0x18,%esp
0863c678 +0x0b89:  mov    0x8(%ebp),%eax
0863c67b +0x0b8c:  mov    %eax,(%esp)
0863c67e +0x0b8f:  call   0863bb30 <+0x41>
0863c683 +0x0b94:  mov    0x8(%ebp),%eax
0863c686 +0x0b97:  movl   $&_ZTV23TimerSaveLogGamechannel+0x8,(%eax)
0863c68c +0x0b9d:  leave
0863c68d +0x0b9e:  ret
0863c68e +0x0b9f:  push   %ebp
0863c68f +0x0ba0:  mov    %esp,%ebp
0863c691 +0x0ba2:  sub    $0x18,%esp
0863c694 +0x0ba5:  mov    0x8(%ebp),%eax
0863c697 +0x0ba8:  mov    %eax,(%esp)
0863c69a +0x0bab:  call   0863bb30 <+0x41>
0863c69f +0x0bb0:  mov    0x8(%ebp),%eax
0863c6a2 +0x0bb3:  movl   $&_ZTV17TimerQueryCounter+0x8,(%eax)
0863c6a8 +0x0bb9:  leave
0863c6a9 +0x0bba:  ret
0863c6aa +0x0bbb:  push   %ebp
0863c6ab +0x0bbc:  mov    %esp,%ebp
0863c6ad +0x0bbe:  sub    $0x18,%esp
0863c6b0 +0x0bc1:  mov    0x8(%ebp),%eax
0863c6b3 +0x0bc4:  mov    %eax,(%esp)
0863c6b6 +0x0bc7:  call   0863bb30 <+0x41>
0863c6bb +0x0bcc:  mov    0x8(%ebp),%eax
0863c6be +0x0bcf:  movl   $&_ZTV12TimerNatType+0x8,(%eax)
0863c6c4 +0x0bd5:  leave
0863c6c5 +0x0bd6:  ret
0863c6c6 +0x0bd7:  push   %ebp
0863c6c7 +0x0bd8:  mov    %esp,%ebp
0863c6c9 +0x0bda:  sub    $0x18,%esp
0863c6cc +0x0bdd:  mov    0x8(%ebp),%eax
0863c6cf +0x0be0:  mov    %eax,(%esp)
0863c6d2 +0x0be3:  call   0863bb30 <+0x41>
0863c6d7 +0x0be8:  mov    0x8(%ebp),%eax
0863c6da +0x0beb:  movl   $&_ZTV16TimerNatTypeUser+0x8,(%eax)
0863c6e0 +0x0bf1:  leave
0863c6e1 +0x0bf2:  ret
0863c6e2 +0x0bf3:  push   %ebp
0863c6e3 +0x0bf4:  mov    %esp,%ebp
0863c6e5 +0x0bf6:  sub    $0x18,%esp
0863c6e8 +0x0bf9:  mov    0x8(%ebp),%eax
0863c6eb +0x0bfc:  mov    %eax,(%esp)
0863c6ee +0x0bff:  call   0863bb30 <+0x41>
0863c6f3 +0x0c04:  mov    0x8(%ebp),%eax
0863c6f6 +0x0c07:  movl   $&_ZTV21TimerCheckMailTimeOut+0x8,(%eax)
0863c6fc +0x0c0d:  leave
0863c6fd +0x0c0e:  ret
0863c6fe +0x0c0f:  push   %ebp
0863c6ff +0x0c10:  mov    %esp,%ebp
0863c701 +0x0c12:  sub    $0x18,%esp
0863c704 +0x0c15:  mov    0x8(%ebp),%eax
0863c707 +0x0c18:  mov    %eax,(%esp)
0863c70a +0x0c1b:  call   0863bb30 <+0x41>
0863c70f +0x0c20:  mov    0x8(%ebp),%eax
0863c712 +0x0c23:  movl   $&_ZTV13TimerCreature+0x8,(%eax)
0863c718 +0x0c29:  leave
0863c719 +0x0c2a:  ret
0863c71a +0x0c2b:  push   %ebp
0863c71b +0x0c2c:  mov    %esp,%ebp
0863c71d +0x0c2e:  sub    $0x18,%esp
0863c720 +0x0c31:  mov    0x8(%ebp),%eax
0863c723 +0x0c34:  mov    %eax,(%esp)
0863c726 +0x0c37:  call   0863bb30 <+0x41>
0863c72b +0x0c3c:  mov    0x8(%ebp),%eax
0863c72e +0x0c3f:  movl   $&_ZTV15TimerForbidChat+0x8,(%eax)
0863c734 +0x0c45:  leave
0863c735 +0x0c46:  ret
0863c736 +0x0c47:  push   %ebp
0863c737 +0x0c48:  mov    %esp,%ebp
0863c739 +0x0c4a:  sub    $0x18,%esp
0863c73c +0x0c4d:  mov    0x8(%ebp),%eax
0863c73f +0x0c50:  mov    %eax,(%esp)
0863c742 +0x0c53:  call   0863bb30 <+0x41>
0863c747 +0x0c58:  mov    0x8(%ebp),%eax
0863c74a +0x0c5b:  movl   $&_ZTV15TimerForbidMove+0x8,(%eax)
0863c750 +0x0c61:  leave
0863c751 +0x0c62:  ret
0863c752 +0x0c63:  push   %ebp
0863c753 +0x0c64:  mov    %esp,%ebp
0863c755 +0x0c66:  sub    $0x18,%esp
0863c758 +0x0c69:  mov    0x8(%ebp),%eax
0863c75b +0x0c6c:  mov    %eax,(%esp)
0863c75e +0x0c6f:  call   0863bb30 <+0x41>
0863c763 +0x0c74:  mov    0x8(%ebp),%eax
0863c766 +0x0c77:  movl   $&_ZTV27TimerScheduleFiveMinPerUser+0x8,(%eax)
0863c76c +0x0c7d:  leave
0863c76d +0x0c7e:  ret
0863c76e +0x0c7f:  push   %ebp
0863c76f +0x0c80:  mov    %esp,%ebp
0863c771 +0x0c82:  sub    $0x18,%esp
0863c774 +0x0c85:  mov    0x8(%ebp),%eax
0863c777 +0x0c88:  mov    %eax,(%esp)
0863c77a +0x0c8b:  call   0863bb30 <+0x41>
0863c77f +0x0c90:  mov    0x8(%ebp),%eax
0863c782 +0x0c93:  movl   $&_ZTV26TimerScheduleTenMinPerUser+0x8,(%eax)
0863c788 +0x0c99:  leave
0863c789 +0x0c9a:  ret
0863c78a +0x0c9b:  push   %ebp
0863c78b +0x0c9c:  mov    %esp,%ebp
0863c78d +0x0c9e:  sub    $0x18,%esp
0863c790 +0x0ca1:  mov    0x8(%ebp),%eax
0863c793 +0x0ca4:  mov    %eax,(%esp)
0863c796 +0x0ca7:  call   0863bb30 <+0x41>
0863c79b +0x0cac:  mov    0x8(%ebp),%eax
0863c79e +0x0caf:  movl   $&_ZTV17TimerQueueSizeLog+0x8,(%eax)
0863c7a4 +0x0cb5:  leave
0863c7a5 +0x0cb6:  ret
0863c7a6 +0x0cb7:  push   %ebp
0863c7a7 +0x0cb8:  mov    %esp,%ebp
0863c7a9 +0x0cba:  sub    $0x18,%esp
0863c7ac +0x0cbd:  mov    0x8(%ebp),%eax
0863c7af +0x0cc0:  mov    %eax,(%esp)
0863c7b2 +0x0cc3:  call   0863bb30 <+0x41>
0863c7b7 +0x0cc8:  mov    0x8(%ebp),%eax
0863c7ba +0x0ccb:  movl   $&_ZTV24TimerScheduleGuildWarEnd+0x8,(%eax)
0863c7c0 +0x0cd1:  leave
0863c7c1 +0x0cd2:  ret
0863c7c2 +0x0cd3:  push   %ebp
0863c7c3 +0x0cd4:  mov    %esp,%ebp
0863c7c5 +0x0cd6:  sub    $0x18,%esp
0863c7c8 +0x0cd9:  mov    0x8(%ebp),%eax
0863c7cb +0x0cdc:  mov    %eax,(%esp)
0863c7ce +0x0cdf:  call   0863bb30 <+0x41>
0863c7d3 +0x0ce4:  mov    0x8(%ebp),%eax
0863c7d6 +0x0ce7:  movl   $&_ZTV18TimerSetPlayResult+0x8,(%eax)
0863c7dc +0x0ced:  leave
0863c7dd +0x0cee:  ret
0863c7de +0x0cef:  push   %ebp
0863c7df +0x0cf0:  mov    %esp,%ebp
0863c7e1 +0x0cf2:  sub    $0x18,%esp
0863c7e4 +0x0cf5:  mov    0x8(%ebp),%eax
0863c7e7 +0x0cf8:  mov    %eax,(%esp)
0863c7ea +0x0cfb:  call   0863bb30 <+0x41>
0863c7ef +0x0d00:  mov    0x8(%ebp),%eax
0863c7f2 +0x0d03:  movl   $&_ZTV21TimerStartRelayBattle+0x8,(%eax)
0863c7f8 +0x0d09:  leave
0863c7f9 +0x0d0a:  ret
0863c7fa +0x0d0b:  push   %ebp
0863c7fb +0x0d0c:  mov    %esp,%ebp
0863c7fd +0x0d0e:  sub    $0x18,%esp
0863c800 +0x0d11:  mov    0x8(%ebp),%eax
0863c803 +0x0d14:  mov    %eax,(%esp)
0863c806 +0x0d17:  call   0863bb30 <+0x41>
0863c80b +0x0d1c:  mov    0x8(%ebp),%eax
0863c80e +0x0d1f:  movl   $&_ZTV19TimerBossDieTimeout+0x8,(%eax)
0863c814 +0x0d25:  leave
0863c815 +0x0d26:  ret
0863c816 +0x0d27:  push   %ebp
0863c817 +0x0d28:  mov    %esp,%ebp
0863c819 +0x0d2a:  sub    $0x18,%esp
0863c81c +0x0d2d:  mov    0x8(%ebp),%eax
0863c81f +0x0d30:  mov    %eax,(%esp)
0863c822 +0x0d33:  call   0863bb30 <+0x41>
0863c827 +0x0d38:  mov    0x8(%ebp),%eax
0863c82a +0x0d3b:  movl   $&_ZTV20TimerEventCoinRefill+0x8,(%eax)
0863c830 +0x0d41:  leave
0863c831 +0x0d42:  ret
0863c832 +0x0d43:  push   %ebp
0863c833 +0x0d44:  mov    %esp,%ebp
0863c835 +0x0d46:  sub    $0x18,%esp
0863c838 +0x0d49:  mov    0x8(%ebp),%eax
0863c83b +0x0d4c:  mov    %eax,(%esp)
0863c83e +0x0d4f:  call   0863bb30 <+0x41>
0863c843 +0x0d54:  mov    0x8(%ebp),%eax
0863c846 +0x0d57:  movl   $&_ZTV22TimerPvPDieUserRevive0+0x8,(%eax)
0863c84c +0x0d5d:  leave
0863c84d +0x0d5e:  ret
0863c84e +0x0d5f:  push   %ebp
0863c84f +0x0d60:  mov    %esp,%ebp
0863c851 +0x0d62:  sub    $0x18,%esp
0863c854 +0x0d65:  mov    0x8(%ebp),%eax
0863c857 +0x0d68:  mov    %eax,(%esp)
0863c85a +0x0d6b:  call   0863bb30 <+0x41>
0863c85f +0x0d70:  mov    0x8(%ebp),%eax
0863c862 +0x0d73:  movl   $&_ZTV22TimerPvPDieUserRevive1+0x8,(%eax)
0863c868 +0x0d79:  leave
0863c869 +0x0d7a:  ret
0863c86a +0x0d7b:  push   %ebp
0863c86b +0x0d7c:  mov    %esp,%ebp
0863c86d +0x0d7e:  sub    $0x18,%esp
0863c870 +0x0d81:  mov    0x8(%ebp),%eax
0863c873 +0x0d84:  mov    %eax,(%esp)
0863c876 +0x0d87:  call   0863bb30 <+0x41>
0863c87b +0x0d8c:  mov    0x8(%ebp),%eax
0863c87e +0x0d8f:  movl   $&_ZTV22TimerPvPDieUserRevive2+0x8,(%eax)
0863c884 +0x0d95:  leave
0863c885 +0x0d96:  ret
0863c886 +0x0d97:  push   %ebp
0863c887 +0x0d98:  mov    %esp,%ebp
0863c889 +0x0d9a:  sub    $0x18,%esp
0863c88c +0x0d9d:  mov    0x8(%ebp),%eax
0863c88f +0x0da0:  mov    %eax,(%esp)
0863c892 +0x0da3:  call   0863bb30 <+0x41>
0863c897 +0x0da8:  mov    0x8(%ebp),%eax
0863c89a +0x0dab:  movl   $&_ZTV22TimerPvPDieUserRevive3+0x8,(%eax)
0863c8a0 +0x0db1:  leave
0863c8a1 +0x0db2:  ret
0863c8a2 +0x0db3:  push   %ebp
0863c8a3 +0x0db4:  mov    %esp,%ebp
0863c8a5 +0x0db6:  sub    $0x18,%esp
0863c8a8 +0x0db9:  mov    0x8(%ebp),%eax
0863c8ab +0x0dbc:  mov    %eax,(%esp)
0863c8ae +0x0dbf:  call   0863bb30 <+0x41>
0863c8b3 +0x0dc4:  mov    0x8(%ebp),%eax
0863c8b6 +0x0dc7:  movl   $&_ZTV22TimerPvPDieUserRevive4+0x8,(%eax)
0863c8bc +0x0dcd:  leave
0863c8bd +0x0dce:  ret
0863c8be +0x0dcf:  push   %ebp
0863c8bf +0x0dd0:  mov    %esp,%ebp
0863c8c1 +0x0dd2:  sub    $0x18,%esp
0863c8c4 +0x0dd5:  mov    0x8(%ebp),%eax
0863c8c7 +0x0dd8:  mov    %eax,(%esp)
0863c8ca +0x0ddb:  call   0863bb30 <+0x41>
0863c8cf +0x0de0:  mov    0x8(%ebp),%eax
0863c8d2 +0x0de3:  movl   $&_ZTV22TimerPvPDieUserRevive5+0x8,(%eax)
0863c8d8 +0x0de9:  leave
0863c8d9 +0x0dea:  ret
0863c8da +0x0deb:  push   %ebp
0863c8db +0x0dec:  mov    %esp,%ebp
0863c8dd +0x0dee:  sub    $0x18,%esp
0863c8e0 +0x0df1:  mov    0x8(%ebp),%eax
0863c8e3 +0x0df4:  mov    %eax,(%esp)
0863c8e6 +0x0df7:  call   0863bb30 <+0x41>
0863c8eb +0x0dfc:  mov    0x8(%ebp),%eax
0863c8ee +0x0dff:  movl   $&_ZTV22TimerPvPDieUserRevive6+0x8,(%eax)
0863c8f4 +0x0e05:  leave
0863c8f5 +0x0e06:  ret
0863c8f6 +0x0e07:  push   %ebp
0863c8f7 +0x0e08:  mov    %esp,%ebp
0863c8f9 +0x0e0a:  sub    $0x18,%esp
0863c8fc +0x0e0d:  mov    0x8(%ebp),%eax
0863c8ff +0x0e10:  mov    %eax,(%esp)
0863c902 +0x0e13:  call   0863bb30 <+0x41>
0863c907 +0x0e18:  mov    0x8(%ebp),%eax
0863c90a +0x0e1b:  movl   $&_ZTV22TimerPvPDieUserRevive7+0x8,(%eax)
0863c910 +0x0e21:  leave
0863c911 +0x0e22:  ret
0863c912 +0x0e23:  push   %ebp
0863c913 +0x0e24:  mov    %esp,%ebp
0863c915 +0x0e26:  sub    $0x18,%esp
0863c918 +0x0e29:  mov    0x8(%ebp),%eax
0863c91b +0x0e2c:  mov    %eax,(%esp)
0863c91e +0x0e2f:  call   0863bb30 <+0x41>
0863c923 +0x0e34:  mov    0x8(%ebp),%eax
0863c926 +0x0e37:  movl   $&_ZTV25TimerDungeonDataStatistic+0x8,(%eax)
0863c92c +0x0e3d:  leave
0863c92d +0x0e3e:  ret
0863c92e +0x0e3f:  push   %ebp
0863c92f +0x0e40:  mov    %esp,%ebp
0863c931 +0x0e42:  sub    $0x18,%esp
0863c934 +0x0e45:  mov    0x8(%ebp),%eax
0863c937 +0x0e48:  mov    %eax,(%esp)
0863c93a +0x0e4b:  call   0863bb30 <+0x41>
0863c93f +0x0e50:  mov    0x8(%ebp),%eax
0863c942 +0x0e53:  movl   $&_ZTV27TimerNotResponseUserTimeout+0x8,(%eax)
0863c948 +0x0e59:  leave
0863c949 +0x0e5a:  ret
0863c94a +0x0e5b:  push   %ebp
0863c94b +0x0e5c:  mov    %esp,%ebp
0863c94d +0x0e5e:  sub    $0x18,%esp
0863c950 +0x0e61:  mov    0x8(%ebp),%eax
0863c953 +0x0e64:  mov    %eax,(%esp)
0863c956 +0x0e67:  call   0863bb30 <+0x41>
0863c95b +0x0e6c:  mov    0x8(%ebp),%eax
0863c95e +0x0e6f:  movl   $&_ZTV22TimerLightServerNotice+0x8,(%eax)
0863c964 +0x0e75:  leave
0863c965 +0x0e76:  ret
0863c966 +0x0e77:  push   %ebp
0863c967 +0x0e78:  mov    %esp,%ebp
0863c969 +0x0e7a:  sub    $0x18,%esp
0863c96c +0x0e7d:  mov    0x8(%ebp),%eax
0863c96f +0x0e80:  mov    %eax,(%esp)
0863c972 +0x0e83:  call   0863bb30 <+0x41>
0863c977 +0x0e88:  mov    0x8(%ebp),%eax
0863c97a +0x0e8b:  movl   $&_ZTV23TimerInsertUserPlayTime+0x8,(%eax)
0863c980 +0x0e91:  leave
0863c981 +0x0e92:  ret
0863c982 +0x0e93:  push   %ebp
0863c983 +0x0e94:  mov    %esp,%ebp
0863c985 +0x0e96:  sub    $0x18,%esp
0863c988 +0x0e99:  mov    0x8(%ebp),%eax
0863c98b +0x0e9c:  mov    %eax,(%esp)
0863c98e +0x0e9f:  call   0863bb30 <+0x41>
0863c993 +0x0ea4:  mov    0x8(%ebp),%eax
0863c996 +0x0ea7:  movl   $&_ZTV26TimerCheckForcedDisconnect+0x8,(%eax)
0863c99c +0x0ead:  leave
0863c99d +0x0eae:  ret
0863c99e +0x0eaf:  push   %ebp
0863c99f +0x0eb0:  mov    %esp,%ebp
0863c9a1 +0x0eb2:  sub    $0x18,%esp
0863c9a4 +0x0eb5:  mov    0x8(%ebp),%eax
0863c9a7 +0x0eb8:  mov    %eax,(%esp)
0863c9aa +0x0ebb:  call   0863bb30 <+0x41>
0863c9af +0x0ec0:  mov    0x8(%ebp),%eax
0863c9b2 +0x0ec3:  movl   $&_ZTV21TimerCheckPvPRoomUser+0x8,(%eax)
0863c9b8 +0x0ec9:  leave
0863c9b9 +0x0eca:  ret
0863c9ba +0x0ecb:  push   %ebp
0863c9bb +0x0ecc:  mov    %esp,%ebp
0863c9bd +0x0ece:  sub    $0x18,%esp
0863c9c0 +0x0ed1:  mov    0x8(%ebp),%eax
0863c9c3 +0x0ed4:  mov    %eax,(%esp)
0863c9c6 +0x0ed7:  call   0863bb30 <+0x41>
0863c9cb +0x0edc:  mov    0x8(%ebp),%eax
0863c9ce +0x0edf:  movl   $&_ZTV26TimerCheckRecvPvpEndResult+0x8,(%eax)
0863c9d4 +0x0ee5:  leave
0863c9d5 +0x0ee6:  ret
0863c9d6 +0x0ee7:  push   %ebp
0863c9d7 +0x0ee8:  mov    %esp,%ebp
0863c9d9 +0x0eea:  sub    $0x18,%esp
0863c9dc +0x0eed:  mov    0x8(%ebp),%eax
0863c9df +0x0ef0:  mov    %eax,(%esp)
0863c9e2 +0x0ef3:  call   0863bb30 <+0x41>
0863c9e7 +0x0ef8:  mov    0x8(%ebp),%eax
0863c9ea +0x0efb:  movl   $&_ZTV29TimerCheckHumanCertifyTimeout+0x8,(%eax)
0863c9f0 +0x0f01:  leave
0863c9f1 +0x0f02:  ret
0863c9f2 +0x0f03:  push   %ebp
0863c9f3 +0x0f04:  mov    %esp,%ebp
0863c9f5 +0x0f06:  sub    $0x18,%esp
0863c9f8 +0x0f09:  mov    0x8(%ebp),%eax
0863c9fb +0x0f0c:  mov    %eax,(%esp)
0863c9fe +0x0f0f:  call   0863bb30 <+0x41>
0863ca03 +0x0f14:  mov    0x8(%ebp),%eax
0863ca06 +0x0f17:  movl   $&_ZTV33TimerUpdateItemGenerateStatistics+0x8,(%eax)
0863ca0c +0x0f1d:  leave
0863ca0d +0x0f1e:  ret
0863ca0e +0x0f1f:  push   %ebp
0863ca0f +0x0f20:  mov    %esp,%ebp
0863ca11 +0x0f22:  sub    $0x18,%esp
0863ca14 +0x0f25:  mov    0x8(%ebp),%eax
0863ca17 +0x0f28:  mov    %eax,(%esp)
0863ca1a +0x0f2b:  call   0863bb30 <+0x41>
0863ca1f +0x0f30:  mov    0x8(%ebp),%eax
0863ca22 +0x0f33:  movl   $&_ZTV19TimerUpdatePvPGrade+0x8,(%eax)
0863ca28 +0x0f39:  leave
0863ca29 +0x0f3a:  ret
0863ca2a +0x0f3b:  push   %ebp
0863ca2b +0x0f3c:  mov    %esp,%ebp
0863ca2d +0x0f3e:  sub    $0x18,%esp
0863ca30 +0x0f41:  mov    0x8(%ebp),%eax
0863ca33 +0x0f44:  mov    %eax,(%esp)
0863ca36 +0x0f47:  call   0863bb30 <+0x41>
0863ca3b +0x0f4c:  mov    0x8(%ebp),%eax
0863ca3e +0x0f4f:  movl   $&_ZTV21TimerDetectDisconnect+0x8,(%eax)
0863ca44 +0x0f55:  leave
0863ca45 +0x0f56:  ret
0863ca46 +0x0f57:  push   %ebp
0863ca47 +0x0f58:  mov    %esp,%ebp
0863ca49 +0x0f5a:  sub    $0x18,%esp
0863ca4c +0x0f5d:  mov    0x8(%ebp),%eax
0863ca4f +0x0f60:  mov    %eax,(%esp)
0863ca52 +0x0f63:  call   0863bb30 <+0x41>
0863ca57 +0x0f68:  mov    0x8(%ebp),%eax
0863ca5a +0x0f6b:  movl   $&_ZTV31TimerCompleteLoadAssaultTimeout+0x8,(%eax)
0863ca60 +0x0f71:  leave
0863ca61 +0x0f72:  ret
0863ca62 +0x0f73:  push   %ebp
0863ca63 +0x0f74:  mov    %esp,%ebp
0863ca65 +0x0f76:  sub    $0x18,%esp
0863ca68 +0x0f79:  mov    0x8(%ebp),%eax
0863ca6b +0x0f7c:  mov    %eax,(%esp)
0863ca6e +0x0f7f:  call   0863bb30 <+0x41>
0863ca73 +0x0f84:  mov    0x8(%ebp),%eax
0863ca76 +0x0f87:  movl   $&_ZTV29TimerConnectP2PAssaultTimeout+0x8,(%eax)
0863ca7c +0x0f8d:  leave
0863ca7d +0x0f8e:  ret
0863ca7e +0x0f8f:  push   %ebp
0863ca7f +0x0f90:  mov    %esp,%ebp
0863ca81 +0x0f92:  sub    $0x18,%esp
0863ca84 +0x0f95:  mov    0x8(%ebp),%eax
0863ca87 +0x0f98:  mov    %eax,(%esp)
0863ca8a +0x0f9b:  call   0863bb30 <+0x41>
0863ca8f +0x0fa0:  mov    0x8(%ebp),%eax
0863ca92 +0x0fa3:  movl   $&_ZTV15TimerEndAssault+0x8,(%eax)
0863ca98 +0x0fa9:  leave
0863ca99 +0x0faa:  ret
0863ca9a +0x0fab:  push   %ebp
0863ca9b +0x0fac:  mov    %esp,%ebp
0863ca9d +0x0fae:  sub    $0x18,%esp
0863caa0 +0x0fb1:  mov    0x8(%ebp),%eax
0863caa3 +0x0fb4:  mov    %eax,(%esp)
0863caa6 +0x0fb7:  call   0863bb30 <+0x41>
0863caab +0x0fbc:  mov    0x8(%ebp),%eax
0863caae +0x0fbf:  movl   $&_ZTV17TimerCloseAssault+0x8,(%eax)
0863cab4 +0x0fc5:  leave
0863cab5 +0x0fc6:  ret
0863cab6 +0x0fc7:  push   %ebp
0863cab7 +0x0fc8:  mov    %esp,%ebp
0863cab9 +0x0fca:  sub    $0x18,%esp
0863cabc +0x0fcd:  mov    0x8(%ebp),%eax
0863cabf +0x0fd0:  mov    %eax,(%esp)
0863cac2 +0x0fd3:  call   0863bb30 <+0x41>
0863cac7 +0x0fd8:  mov    0x8(%ebp),%eax
0863caca +0x0fdb:  movl   $&_ZTV36TimerCompleteLoadAfterAssaultTimeout+0x8,(%eax)
0863cad0 +0x0fe1:  leave
0863cad1 +0x0fe2:  ret
0863cad2 +0x0fe3:  push   %ebp
0863cad3 +0x0fe4:  mov    %esp,%ebp
0863cad5 +0x0fe6:  sub    $0x18,%esp
0863cad8 +0x0fe9:  mov    0x8(%ebp),%eax
0863cadb +0x0fec:  mov    %eax,(%esp)
0863cade +0x0fef:  call   0863bb30 <+0x41>
0863cae3 +0x0ff4:  mov    0x8(%ebp),%eax
0863cae6 +0x0ff7:  movl   $&_ZTV34TimerConnectP2PAfterAssaultTimeout+0x8,(%eax)
0863caec +0x0ffd:  leave
0863caed +0x0ffe:  ret
0863caee +0x0fff:  push   %ebp
0863caef +0x1000:  mov    %esp,%ebp
0863caf1 +0x1002:  sub    $0x18,%esp
0863caf4 +0x1005:  mov    0x8(%ebp),%eax
0863caf7 +0x1008:  mov    %eax,(%esp)
0863cafa +0x100b:  call   0863bb30 <+0x41>
0863caff +0x1010:  mov    0x8(%ebp),%eax
0863cb02 +0x1013:  movl   $&_ZTV15TimerDeathTower+0x8,(%eax)
0863cb08 +0x1019:  leave
0863cb09 +0x101a:  ret
0863cb0a +0x101b:  push   %ebp
0863cb0b +0x101c:  mov    %esp,%ebp
0863cb0d +0x101e:  sub    $0x18,%esp
0863cb10 +0x1021:  mov    0x8(%ebp),%eax
0863cb13 +0x1024:  mov    %eax,(%esp)
0863cb16 +0x1027:  call   0863bb30 <+0x41>
0863cb1b +0x102c:  mov    0x8(%ebp),%eax
0863cb1e +0x102f:  movl   $&_ZTV30TimerDeathTowerTopRankerReload+0x8,(%eax)
0863cb24 +0x1035:  leave
0863cb25 +0x1036:  ret
0863cb26 +0x1037:  push   %ebp
0863cb27 +0x1038:  mov    %esp,%ebp
0863cb29 +0x103a:  sub    $0x18,%esp
0863cb2c +0x103d:  mov    0x8(%ebp),%eax
0863cb2f +0x1040:  mov    %eax,(%esp)
0863cb32 +0x1043:  call   0863bb30 <+0x41>
0863cb37 +0x1048:  mov    0x8(%ebp),%eax
0863cb3a +0x104b:  movl   $&_ZTV22TimerScheduleTenSecond+0x8,(%eax)
0863cb40 +0x1051:  leave
0863cb41 +0x1052:  ret
0863cb42 +0x1053:  push   %ebp
0863cb43 +0x1054:  mov    %esp,%ebp
0863cb45 +0x1056:  sub    $0x18,%esp
0863cb48 +0x1059:  mov    0x8(%ebp),%eax
0863cb4b +0x105c:  mov    %eax,(%esp)
0863cb4e +0x105f:  call   0863bb30 <+0x41>
0863cb53 +0x1064:  mov    0x8(%ebp),%eax
0863cb56 +0x1067:  movl   $&_ZTV21TimerFinishItemEffect+0x8,(%eax)
0863cb5c +0x106d:  leave
0863cb5d +0x106e:  ret
0863cb5e +0x106f:  push   %ebp
0863cb5f +0x1070:  mov    %esp,%ebp
0863cb61 +0x1072:  sub    $0x18,%esp
0863cb64 +0x1075:  mov    0x8(%ebp),%eax
0863cb67 +0x1078:  mov    %eax,(%esp)
0863cb6a +0x107b:  call   0863bb30 <+0x41>
0863cb6f +0x1080:  mov    0x8(%ebp),%eax
0863cb72 +0x1083:  movl   $&_ZTV18TimerStartMatching+0x8,(%eax)
0863cb78 +0x1089:  leave
0863cb79 +0x108a:  ret
0863cb7a +0x108b:  push   %ebp
0863cb7b +0x108c:  mov    %esp,%ebp
0863cb7d +0x108e:  sub    $0x18,%esp
0863cb80 +0x1091:  mov    0x8(%ebp),%eax
0863cb83 +0x1094:  mov    %eax,(%esp)
0863cb86 +0x1097:  call   0863bb30 <+0x41>
0863cb8b +0x109c:  mov    0x8(%ebp),%eax
0863cb8e +0x109f:  movl   $&_ZTV26TimerGlobalEffectItemBegin+0x8,(%eax)
0863cb94 +0x10a5:  leave
0863cb95 +0x10a6:  ret
0863cb96 +0x10a7:  push   %ebp
0863cb97 +0x10a8:  mov    %esp,%ebp
0863cb99 +0x10aa:  sub    $0x18,%esp
0863cb9c +0x10ad:  mov    0x8(%ebp),%eax
0863cb9f +0x10b0:  mov    %eax,(%esp)
0863cba2 +0x10b3:  call   0863bb30 <+0x41>
0863cba7 +0x10b8:  mov    0x8(%ebp),%eax
0863cbaa +0x10bb:  movl   $&_ZTV28TimerGlobalEffectItemTimeout+0x8,(%eax)
0863cbb0 +0x10c1:  leave
0863cbb1 +0x10c2:  ret
0863cbb2 +0x10c3:  push   %ebp
0863cbb3 +0x10c4:  mov    %esp,%ebp
0863cbb5 +0x10c6:  sub    $0x18,%esp
0863cbb8 +0x10c9:  mov    0x8(%ebp),%eax
0863cbbb +0x10cc:  mov    %eax,(%esp)
0863cbbe +0x10cf:  call   0863bb30 <+0x41>
0863cbc3 +0x10d4:  mov    0x8(%ebp),%eax
0863cbc6 +0x10d7:  movl   $&_ZTV29TimerVendingMachineItemNotify+0x8,(%eax)
0863cbcc +0x10dd:  leave
0863cbcd +0x10de:  ret
0863cbce +0x10df:  push   %ebp
0863cbcf +0x10e0:  mov    %esp,%ebp
0863cbd1 +0x10e2:  sub    $0x18,%esp
0863cbd4 +0x10e5:  mov    0x8(%ebp),%eax
0863cbd7 +0x10e8:  mov    %eax,(%esp)
0863cbda +0x10eb:  call   0863bb30 <+0x41>
0863cbdf +0x10f0:  mov    0x8(%ebp),%eax
0863cbe2 +0x10f3:  movl   $&_ZTV25TimerConnectMonitorServer+0x8,(%eax)
0863cbe8 +0x10f9:  leave
0863cbe9 +0x10fa:  ret
0863cbea +0x10fb:  push   %ebp
0863cbeb +0x10fc:  mov    %esp,%ebp
0863cbed +0x10fe:  sub    $0x18,%esp
0863cbf0 +0x1101:  mov    0x8(%ebp),%eax
0863cbf3 +0x1104:  mov    %eax,(%esp)
0863cbf6 +0x1107:  call   0863bb30 <+0x41>
0863cbfb +0x110c:  mov    0x8(%ebp),%eax
0863cbfe +0x110f:  movl   $&_ZTV27TimerAssaultSuperPowerState+0x8,(%eax)
0863cc04 +0x1115:  leave
0863cc05 +0x1116:  ret
0863cc06 +0x1117:  push   %ebp
0863cc07 +0x1118:  mov    %esp,%ebp
0863cc09 +0x111a:  sub    $0x18,%esp
0863cc0c +0x111d:  mov    0x8(%ebp),%eax
0863cc0f +0x1120:  mov    %eax,(%esp)
0863cc12 +0x1123:  call   0863bb30 <+0x41>
0863cc17 +0x1128:  mov    0x8(%ebp),%eax
0863cc1a +0x112b:  movl   $&_ZTV18TimerNPCMoodChange+0x8,(%eax)
0863cc20 +0x1131:  leave
0863cc21 +0x1132:  ret
0863cc22 +0x1133:  push   %ebp
0863cc23 +0x1134:  mov    %esp,%ebp
0863cc25 +0x1136:  sub    $0x18,%esp
0863cc28 +0x1139:  mov    0x8(%ebp),%eax
0863cc2b +0x113c:  mov    %eax,(%esp)
0863cc2e +0x113f:  call   0863bb30 <+0x41>
0863cc33 +0x1144:  mov    0x8(%ebp),%eax
0863cc36 +0x1147:  movl   $&_ZTV20TimerElevatorDungeon+0x8,(%eax)
0863cc3c +0x114d:  leave
0863cc3d +0x114e:  ret
0863cc3e +0x114f:  push   %ebp
0863cc3f +0x1150:  mov    %esp,%ebp
0863cc41 +0x1152:  sub    $0x18,%esp
0863cc44 +0x1155:  mov    0x8(%ebp),%eax
0863cc47 +0x1158:  mov    %eax,(%esp)
0863cc4a +0x115b:  call   0863bb30 <+0x41>
0863cc4f +0x1160:  mov    0x8(%ebp),%eax
0863cc52 +0x1163:  movl   $&_ZTV31TimerRefreshPowerWarProcessInfo+0x8,(%eax)
0863cc58 +0x1169:  leave
0863cc59 +0x116a:  ret
0863cc5a +0x116b:  push   %ebp
0863cc5b +0x116c:  mov    %esp,%ebp
0863cc5d +0x116e:  push   %esi
0863cc5e +0x116f:  push   %ebx
0863cc5f +0x1170:  sub    $0x10,%esp
0863cc62 +0x1173:  mov    0x8(%ebp),%eax
0863cc65 +0x1176:  mov    %eax,(%esp)
0863cc68 +0x1179:  call   0863bb30 <+0x41>
0863cc6d +0x117e:  mov    0x8(%ebp),%eax
0863cc70 +0x1181:  movl   $&_ZTV20TimerGeneratePowerUp+0x8,(%eax)
0863cc76 +0x1187:  mov    0x8(%ebp),%eax
0863cc79 +0x118a:  add    $0x4,%eax
0863cc7c +0x118d:  mov    %eax,(%esp)
0863cc7f +0x1190:  call   082f1b1e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18a2>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18a2
0863cc84 +0x1195:  mov    0x8(%ebp),%eax
0863cc87 +0x1198:  add    $0x10,%eax
0863cc8a +0x119b:  mov    %eax,(%esp)
0863cc8d +0x119e:  call   082f1b1e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18a2>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18a2
0863cc92 +0x11a3:  jmp    0863ccc7 <+0x11d8>
0863cc94 +0x11a5:  mov    %edx,%ebx
0863cc96 +0x11a7:  mov    %eax,%esi
0863cc98 +0x11a9:  mov    0x8(%ebp),%eax
0863cc9b +0x11ac:  add    $0x4,%eax
0863cc9e +0x11af:  mov    %eax,(%esp)
0863cca1 +0x11b2:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
0863cca6 +0x11b7:  mov    %esi,%eax
0863cca8 +0x11b9:  mov    %ebx,%edx
0863ccaa +0x11bb:  jmp    0863ccac <+0x11bd>
0863ccac +0x11bd:  mov    %edx,%ebx
0863ccae +0x11bf:  mov    %eax,%esi
0863ccb0 +0x11c1:  mov    0x8(%ebp),%eax
0863ccb3 +0x11c4:  mov    %eax,(%esp)
0863ccb6 +0x11c7:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ccbb +0x11cc:  mov    %esi,%eax
0863ccbd +0x11ce:  mov    %ebx,%edx
0863ccbf +0x11d0:  mov    %eax,(%esp)
0863ccc2 +0x11d3:  call   08ae3750 <_Unwind_Resume>
0863ccc7 +0x11d8:  add    $0x10,%esp
0863ccca +0x11db:  pop    %ebx
0863cccb +0x11dc:  pop    %esi
0863cccc +0x11dd:  pop    %ebp
0863cccd +0x11de:  ret
0863ccce +0x11df:  push   %ebp
0863cccf +0x11e0:  mov    %esp,%ebp
0863ccd1 +0x11e2:  sub    $0x18,%esp
0863ccd4 +0x11e5:  mov    0x8(%ebp),%eax
0863ccd7 +0x11e8:  mov    %eax,(%esp)
0863ccda +0x11eb:  call   0863bb30 <+0x41>
0863ccdf +0x11f0:  mov    0x8(%ebp),%eax
0863cce2 +0x11f3:  movl   $&_ZTV24TimerCheckPowerWarAbuser+0x8,(%eax)
0863cce8 +0x11f9:  leave
0863cce9 +0x11fa:  ret
0863ccea +0x11fb:  push   %ebp
0863cceb +0x11fc:  mov    %esp,%ebp
0863cced +0x11fe:  sub    $0x18,%esp
0863ccf0 +0x1201:  mov    0x8(%ebp),%eax
0863ccf3 +0x1204:  mov    %eax,(%esp)
0863ccf6 +0x1207:  call   0863bb30 <+0x41>
0863ccfb +0x120c:  mov    0x8(%ebp),%eax
0863ccfe +0x120f:  movl   $&_ZTV18TimerSetPunishUser+0x8,(%eax)
0863cd04 +0x1215:  leave
0863cd05 +0x1216:  ret
0863cd06 +0x1217:  push   %ebp
0863cd07 +0x1218:  mov    %esp,%ebp
0863cd09 +0x121a:  sub    $0x18,%esp
0863cd0c +0x121d:  mov    0x8(%ebp),%eax
0863cd0f +0x1220:  mov    %eax,(%esp)
0863cd12 +0x1223:  call   0863bb30 <+0x41>
0863cd17 +0x1228:  mov    0x8(%ebp),%eax
0863cd1a +0x122b:  movl   $&_ZTV23TimerSetTradePunishUser+0x8,(%eax)
0863cd20 +0x1231:  leave
0863cd21 +0x1232:  ret
0863cd22 +0x1233:  push   %ebp
0863cd23 +0x1234:  mov    %esp,%ebp
0863cd25 +0x1236:  sub    $0x18,%esp
0863cd28 +0x1239:  mov    0x8(%ebp),%eax
0863cd2b +0x123c:  mov    %eax,(%esp)
0863cd2e +0x123f:  call   0863bb30 <+0x41>
0863cd33 +0x1244:  mov    0x8(%ebp),%eax
0863cd36 +0x1247:  movl   $&_ZTV18TimerRevivalCharac+0x8,(%eax)
0863cd3c +0x124d:  leave
0863cd3d +0x124e:  ret
0863cd3e +0x124f:  push   %ebp
0863cd3f +0x1250:  mov    %esp,%ebp
0863cd41 +0x1252:  sub    $0x18,%esp
0863cd44 +0x1255:  mov    0x8(%ebp),%eax
0863cd47 +0x1258:  mov    %eax,(%esp)
0863cd4a +0x125b:  call   0863bb30 <+0x41>
0863cd4f +0x1260:  mov    0x8(%ebp),%eax
0863cd52 +0x1263:  movl   $&_ZTV16TimerRequestExit+0x8,(%eax)
0863cd58 +0x1269:  leave
0863cd59 +0x126a:  ret
0863cd5a +0x126b:  push   %ebp
0863cd5b +0x126c:  mov    %esp,%ebp
0863cd5d +0x126e:  sub    $0x18,%esp
0863cd60 +0x1271:  mov    0x8(%ebp),%eax
0863cd63 +0x1274:  mov    %eax,(%esp)
0863cd66 +0x1277:  call   0863bb30 <+0x41>
0863cd6b +0x127c:  mov    0x8(%ebp),%eax
0863cd6e +0x127f:  movl   $&_ZTV29TimerVillageMonsterUpdateRate+0x8,(%eax)
0863cd74 +0x1285:  leave
0863cd75 +0x1286:  ret
0863cd76 +0x1287:  push   %ebp
0863cd77 +0x1288:  mov    %esp,%ebp
0863cd79 +0x128a:  sub    $0x18,%esp
0863cd7c +0x128d:  mov    0x8(%ebp),%eax
0863cd7f +0x1290:  mov    %eax,(%esp)
0863cd82 +0x1293:  call   0863bb30 <+0x41>
0863cd87 +0x1298:  mov    0x8(%ebp),%eax
0863cd8a +0x129b:  movl   $&_ZTV24TimerVillageMonsterRegen+0x8,(%eax)
0863cd90 +0x12a1:  leave
0863cd91 +0x12a2:  ret
0863cd92 +0x12a3:  push   %ebp
0863cd93 +0x12a4:  mov    %esp,%ebp
0863cd95 +0x12a6:  sub    $0x18,%esp
0863cd98 +0x12a9:  mov    0x8(%ebp),%eax
0863cd9b +0x12ac:  mov    %eax,(%esp)
0863cd9e +0x12af:  call   0863bb30 <+0x41>
0863cda3 +0x12b4:  mov    0x8(%ebp),%eax
0863cda6 +0x12b7:  movl   $&_ZTV25TimerStartVillageAttacked+0x8,(%eax)
0863cdac +0x12bd:  leave
0863cdad +0x12be:  ret
0863cdae +0x12bf:  push   %ebp
0863cdaf +0x12c0:  mov    %esp,%ebp
0863cdb1 +0x12c2:  sub    $0x18,%esp
0863cdb4 +0x12c5:  mov    0x8(%ebp),%eax
0863cdb7 +0x12c8:  mov    %eax,(%esp)
0863cdba +0x12cb:  call   0863bb30 <+0x41>
0863cdbf +0x12d0:  mov    0x8(%ebp),%eax
0863cdc2 +0x12d3:  movl   $&_ZTV31TimerVillageAttackedPlayTimeout+0x8,(%eax)
0863cdc8 +0x12d9:  leave
0863cdc9 +0x12da:  ret
0863cdca +0x12db:  push   %ebp
0863cdcb +0x12dc:  mov    %esp,%ebp
0863cdcd +0x12de:  sub    $0x18,%esp
0863cdd0 +0x12e1:  mov    0x8(%ebp),%eax
0863cdd3 +0x12e4:  mov    %eax,(%esp)
0863cdd6 +0x12e7:  call   0863bb30 <+0x41>
0863cddb +0x12ec:  mov    0x8(%ebp),%eax
0863cdde +0x12ef:  movl   $&_ZTV22TimerItemUnlockWaiting+0x8,(%eax)
0863cde4 +0x12f5:  leave
0863cde5 +0x12f6:  ret
0863cde6 +0x12f7:  push   %ebp
0863cde7 +0x12f8:  mov    %esp,%ebp
0863cde9 +0x12fa:  sub    $0x18,%esp
0863cdec +0x12fd:  mov    0x8(%ebp),%eax
0863cdef +0x1300:  mov    %eax,(%esp)
0863cdf2 +0x1303:  call   0863bb30 <+0x41>
0863cdf7 +0x1308:  mov    0x8(%ebp),%eax
0863cdfa +0x130b:  movl   $&_ZTV32TimerUpdateCompoundEmblemStatics+0x8,(%eax)
0863ce00 +0x1311:  leave
0863ce01 +0x1312:  ret
0863ce02 +0x1313:  push   %ebp
0863ce03 +0x1314:  mov    %esp,%ebp
0863ce05 +0x1316:  sub    $0x18,%esp
0863ce08 +0x1319:  mov    0x8(%ebp),%eax
0863ce0b +0x131c:  mov    %eax,(%esp)
0863ce0e +0x131f:  call   0863bb30 <+0x41>
0863ce13 +0x1324:  mov    0x8(%ebp),%eax
0863ce16 +0x1327:  movl   $&_ZTV36TimerStartExpEventAfterVillageAttack+0x8,(%eax)
0863ce1c +0x132d:  leave
0863ce1d +0x132e:  ret
0863ce1e +0x132f:  push   %ebp
0863ce1f +0x1330:  mov    %esp,%ebp
0863ce21 +0x1332:  sub    $0x18,%esp
0863ce24 +0x1335:  mov    0x8(%ebp),%eax
0863ce27 +0x1338:  mov    %eax,(%esp)
0863ce2a +0x133b:  call   0863bb30 <+0x41>
0863ce2f +0x1340:  mov    0x8(%ebp),%eax
0863ce32 +0x1343:  movl   $&_ZTV38Timer_Security_NonClient_CheckResponse+0x8,(%eax)
0863ce38 +0x1349:  leave
0863ce39 +0x134a:  ret
0863ce3a +0x134b:  push   %ebp
0863ce3b +0x134c:  mov    %esp,%ebp
0863ce3d +0x134e:  sub    $0x18,%esp
0863ce40 +0x1351:  mov    0x8(%ebp),%eax
0863ce43 +0x1354:  mov    %eax,(%esp)
0863ce46 +0x1357:  call   0863bb30 <+0x41>
0863ce4b +0x135c:  mov    0x8(%ebp),%eax
0863ce4e +0x135f:  movl   $&_ZTV14Timer_Midnight+0x8,(%eax)
0863ce54 +0x1365:  leave
0863ce55 +0x1366:  ret
0863ce56 +0x1367:  push   %ebp
0863ce57 +0x1368:  mov    %esp,%ebp
0863ce59 +0x136a:  sub    $0x18,%esp
0863ce5c +0x136d:  mov    0x8(%ebp),%eax
0863ce5f +0x1370:  mov    %eax,(%esp)
0863ce62 +0x1373:  call   0863bb30 <+0x41>
0863ce67 +0x1378:  mov    0x8(%ebp),%eax
0863ce6a +0x137b:  movl   $&_ZTV32TimerEndPowerWarVictoriousReward+0x8,(%eax)
0863ce70 +0x1381:  leave
0863ce71 +0x1382:  ret
0863ce72 +0x1383:  push   %ebp
0863ce73 +0x1384:  mov    %esp,%ebp
0863ce75 +0x1386:  sub    $0x18,%esp
0863ce78 +0x1389:  mov    0x8(%ebp),%eax
0863ce7b +0x138c:  mov    %eax,(%esp)
0863ce7e +0x138f:  call   0863bb30 <+0x41>
0863ce83 +0x1394:  mov    0x8(%ebp),%eax
0863ce86 +0x1397:  movl   $&_ZTV23Timer_TenMinuteSchedule+0x8,(%eax)
0863ce8c +0x139d:  leave
0863ce8d +0x139e:  ret
0863ce8e +0x139f:  push   %ebp
0863ce8f +0x13a0:  mov    %esp,%ebp
0863ce91 +0x13a2:  sub    $0x18,%esp
0863ce94 +0x13a5:  mov    0x8(%ebp),%eax
0863ce97 +0x13a8:  mov    %eax,(%esp)
0863ce9a +0x13ab:  call   0863bb30 <+0x41>
0863ce9f +0x13b0:  mov    0x8(%ebp),%eax
0863cea2 +0x13b3:  movl   $&_ZTV33Timer_UpdateOnlinePreliminaryTeam+0x8,(%eax)
0863cea8 +0x13b9:  leave
0863cea9 +0x13ba:  ret
0863ceaa +0x13bb:  push   %ebp
0863ceab +0x13bc:  mov    %esp,%ebp
0863cead +0x13be:  sub    $0x18,%esp
0863ceb0 +0x13c1:  mov    0x8(%ebp),%eax
0863ceb3 +0x13c4:  mov    %eax,(%esp)
0863ceb6 +0x13c7:  call   0863bb30 <+0x41>
0863cebb +0x13cc:  mov    0x8(%ebp),%eax
0863cebe +0x13cf:  movl   $&_ZTV25Timer_SecretShopStatistic+0x8,(%eax)
0863cec4 +0x13d5:  leave
0863cec5 +0x13d6:  ret
0863cec6 +0x13d7:  push   %ebp
0863cec7 +0x13d8:  mov    %esp,%ebp
0863cec9 +0x13da:  sub    $0x18,%esp
0863cecc +0x13dd:  mov    0x8(%ebp),%eax
0863cecf +0x13e0:  mov    %eax,(%esp)
0863ced2 +0x13e3:  call   0863bb30 <+0x41>
0863ced7 +0x13e8:  mov    0x8(%ebp),%eax
0863ceda +0x13eb:  movl   $&_ZTV19Timer_DailySchedule+0x8,(%eax)
0863cee0 +0x13f1:  leave
0863cee1 +0x13f2:  ret
0863cee2 +0x13f3:  push   %ebp
0863cee3 +0x13f4:  mov    %esp,%ebp
0863cee5 +0x13f6:  sub    $0x18,%esp
0863cee8 +0x13f9:  mov    0x8(%ebp),%eax
0863ceeb +0x13fc:  mov    %eax,(%esp)
0863ceee +0x13ff:  call   0863bb30 <+0x41>
0863cef3 +0x1404:  mov    0x8(%ebp),%eax
0863cef6 +0x1407:  movl   $&_ZTV26Timer_ConnectP2PPvPTimeout+0x8,(%eax)
0863cefc +0x140d:  leave
0863cefd +0x140e:  ret
0863cefe +0x140f:  push   %ebp
0863ceff +0x1410:  mov    %esp,%ebp
0863cf01 +0x1412:  sub    $0x18,%esp
0863cf04 +0x1415:  mov    0x8(%ebp),%eax
0863cf07 +0x1418:  mov    %eax,(%esp)
0863cf0a +0x141b:  call   0863bb30 <+0x41>
0863cf0f +0x1420:  mov    0x8(%ebp),%eax
0863cf12 +0x1423:  movl   $&_ZTV21Timer_RoutingItemWait+0x8,(%eax)
0863cf18 +0x1429:  leave
0863cf19 +0x142a:  ret
0863cf1a +0x142b:  push   %ebp
0863cf1b +0x142c:  mov    %esp,%ebp
0863cf1d +0x142e:  sub    $0x18,%esp
0863cf20 +0x1431:  mov    0x8(%ebp),%eax
0863cf23 +0x1434:  mov    %eax,(%esp)
0863cf26 +0x1437:  call   0863bb30 <+0x41>
0863cf2b +0x143c:  mov    0x8(%ebp),%eax
0863cf2e +0x143f:  movl   $&_ZTV21Timer_PcRoomAuthRetry+0x8,(%eax)
0863cf34 +0x1445:  leave
0863cf35 +0x1446:  ret
0863cf36 +0x1447:  push   %ebp
0863cf37 +0x1448:  mov    %esp,%ebp
0863cf39 +0x144a:  sub    $0x18,%esp
0863cf3c +0x144d:  mov    0x8(%ebp),%eax
0863cf3f +0x1450:  mov    %eax,(%esp)
0863cf42 +0x1453:  call   0863bb30 <+0x41>
0863cf47 +0x1458:  mov    0x8(%ebp),%eax
0863cf4a +0x145b:  movl   $&_ZTV26Timer_DungeonInoutOpenTime+0x8,(%eax)
0863cf50 +0x1461:  leave
0863cf51 +0x1462:  ret
0863cf52 +0x1463:  push   %ebp
0863cf53 +0x1464:  mov    %esp,%ebp
0863cf55 +0x1466:  sub    $0x18,%esp
0863cf58 +0x1469:  mov    0x8(%ebp),%eax
0863cf5b +0x146c:  mov    %eax,(%esp)
0863cf5e +0x146f:  call   0863bb30 <+0x41>
0863cf63 +0x1474:  mov    0x8(%ebp),%eax
0863cf66 +0x1477:  movl   $&_ZTV27Timer_DungeonInoutCloseTime+0x8,(%eax)
0863cf6c +0x147d:  leave
0863cf6d +0x147e:  ret
0863cf6e +0x147f:  push   %ebp
0863cf6f +0x1480:  mov    %esp,%ebp
0863cf71 +0x1482:  sub    $0x18,%esp
0863cf74 +0x1485:  mov    0x8(%ebp),%eax
0863cf77 +0x1488:  mov    %eax,(%esp)
0863cf7a +0x148b:  call   0863bb30 <+0x41>
0863cf7f +0x1490:  mov    0x8(%ebp),%eax
0863cf82 +0x1493:  movl   $&_ZTV20Timer_FairPvPRematch+0x8,(%eax)
0863cf88 +0x1499:  leave
0863cf89 +0x149a:  ret
0863cf8a +0x149b:  push   %ebp
0863cf8b +0x149c:  mov    %esp,%ebp
0863cf8d +0x149e:  sub    $0x18,%esp
0863cf90 +0x14a1:  mov    0x8(%ebp),%eax
0863cf93 +0x14a4:  mov    %eax,(%esp)
0863cf96 +0x14a7:  call   0863bb30 <+0x41>
0863cf9b +0x14ac:  mov    0x8(%ebp),%eax
0863cf9e +0x14af:  movl   $&_ZTV23Timer_ReturnUserTimeout+0x8,(%eax)
0863cfa4 +0x14b5:  leave
0863cfa5 +0x14b6:  ret
0863cfa6 +0x14b7:  push   %ebp
0863cfa7 +0x14b8:  mov    %esp,%ebp
0863cfa9 +0x14ba:  sub    $0x18,%esp
0863cfac +0x14bd:  mov    0x8(%ebp),%eax
0863cfaf +0x14c0:  mov    %eax,(%esp)
0863cfb2 +0x14c3:  call   0863bb30 <+0x41>
0863cfb7 +0x14c8:  mov    0x8(%ebp),%eax
0863cfba +0x14cb:  movl   $&_ZTV20Timer_HadesHeartBeat+0x8,(%eax)
0863cfc0 +0x14d1:  leave
0863cfc1 +0x14d2:  ret
0863cfc2 +0x14d3:  push   %ebp
0863cfc3 +0x14d4:  mov    %esp,%ebp
0863cfc5 +0x14d6:  sub    $0x18,%esp
0863cfc8 +0x14d9:  mov    0x8(%ebp),%eax
0863cfcb +0x14dc:  mov    %eax,(%esp)
0863cfce +0x14df:  call   0863bb30 <+0x41>
0863cfd3 +0x14e4:  mov    0x8(%ebp),%eax
0863cfd6 +0x14e7:  movl   $&_ZTV26Timer_TOD_Send_ClearReward+0x8,(%eax)
0863cfdc +0x14ed:  leave
0863cfdd +0x14ee:  ret
0863cfde +0x14ef:  push   %ebp
0863cfdf +0x14f0:  mov    %esp,%ebp
0863cfe1 +0x14f2:  sub    $0x18,%esp
0863cfe4 +0x14f5:  mov    0x8(%ebp),%eax
0863cfe7 +0x14f8:  mov    %eax,(%esp)
0863cfea +0x14fb:  call   0863bb30 <+0x41>
0863cfef +0x1500:  mov    0x8(%ebp),%eax
0863cff2 +0x1503:  movl   $&_ZTV21Timer_OneADayItemShop+0x8,(%eax)
0863cff8 +0x1509:  leave
0863cff9 +0x150a:  ret
0863cffa +0x150b:  push   %ebp
0863cffb +0x150c:  mov    %esp,%ebp
0863cffd +0x150e:  sub    $0x18,%esp
0863d000 +0x1511:  mov    0x8(%ebp),%eax
0863d003 +0x1514:  mov    %eax,(%esp)
0863d006 +0x1517:  call   0863bb30 <+0x41>
0863d00b +0x151c:  mov    0x8(%ebp),%eax
0863d00e +0x151f:  movl   $&_ZTV23Timer_Schedule_MidNight+0x8,(%eax)
0863d014 +0x1525:  leave
0863d015 +0x1526:  ret
0863d016 +0x1527:  push   %ebp
0863d017 +0x1528:  mov    %esp,%ebp
0863d019 +0x152a:  sub    $0x18,%esp
0863d01c +0x152d:  mov    0x8(%ebp),%eax
0863d01f +0x1530:  mov    %eax,(%esp)
0863d022 +0x1533:  call   0863bb30 <+0x41>
0863d027 +0x1538:  mov    0x8(%ebp),%eax
0863d02a +0x153b:  movl   $&_ZTV24Timer_Send_Ontime_Reward+0x8,(%eax)
0863d030 +0x1541:  leave
0863d031 +0x1542:  ret
0863d032 +0x1543:  push   %ebp
0863d033 +0x1544:  mov    %esp,%ebp
0863d035 +0x1546:  sub    $0x18,%esp
0863d038 +0x1549:  mov    0x8(%ebp),%eax
0863d03b +0x154c:  mov    %eax,(%esp)
0863d03e +0x154f:  call   0863bb30 <+0x41>
0863d043 +0x1554:  mov    0x8(%ebp),%eax
0863d046 +0x1557:  movl   $&_ZTV21Timer_EventManagement+0x8,(%eax)
0863d04c +0x155d:  leave
0863d04d +0x155e:  ret
0863d04e +0x155f:  push   %ebp
0863d04f +0x1560:  mov    %esp,%ebp
0863d051 +0x1562:  sub    $0x18,%esp
0863d054 +0x1565:  mov    0x8(%ebp),%eax
0863d057 +0x1568:  mov    %eax,(%esp)
0863d05a +0x156b:  call   0863bb30 <+0x41>
0863d05f +0x1570:  mov    0x8(%ebp),%eax
0863d062 +0x1573:  movl   $&_ZTV36Timer_QuickPartyWaitingPartyMatching+0x8,(%eax)
0863d068 +0x1579:  leave
0863d069 +0x157a:  ret
0863d06a +0x157b:  push   %ebp
0863d06b +0x157c:  mov    %esp,%ebp
0863d06d +0x157e:  sub    $0x18,%esp
0863d070 +0x1581:  mov    0x8(%ebp),%eax
0863d073 +0x1584:  mov    %eax,(%esp)
0863d076 +0x1587:  call   0863bb30 <+0x41>
0863d07b +0x158c:  mov    0x8(%ebp),%eax
0863d07e +0x158f:  movl   $&_ZTV32Timer_QuickPartyWaitingStartGame+0x8,(%eax)
0863d084 +0x1595:  leave
0863d085 +0x1596:  ret
0863d086 +0x1597:  push   %ebp
0863d087 +0x1598:  mov    %esp,%ebp
0863d089 +0x159a:  sub    $0x18,%esp
0863d08c +0x159d:  mov    0x8(%ebp),%eax
0863d08f +0x15a0:  mov    %eax,(%esp)
0863d092 +0x15a3:  call   0863bb30 <+0x41>
0863d097 +0x15a8:  mov    0x8(%ebp),%eax
0863d09a +0x15ab:  movl   $&_ZTV23Timer_AssaultGhostTimer+0x8,(%eax)
0863d0a0 +0x15b1:  leave
0863d0a1 +0x15b2:  ret
0863d0a2 +0x15b3:  push   %ebp
0863d0a3 +0x15b4:  mov    %esp,%ebp
0863d0a5 +0x15b6:  sub    $0x18,%esp
0863d0a8 +0x15b9:  mov    0x8(%ebp),%eax
0863d0ab +0x15bc:  mov    %eax,(%esp)
0863d0ae +0x15bf:  call   0863bb30 <+0x41>
0863d0b3 +0x15c4:  mov    0x8(%ebp),%eax
0863d0b6 +0x15c7:  movl   $&_ZTV25Timer_GenerateCaptchaData+0x8,(%eax)
0863d0bc +0x15cd:  leave
0863d0bd +0x15ce:  ret
0863d0be +0x15cf:  push   %ebp
0863d0bf +0x15d0:  mov    %esp,%ebp
0863d0c1 +0x15d2:  sub    $0x18,%esp
0863d0c4 +0x15d5:  mov    0x8(%ebp),%eax
0863d0c7 +0x15d8:  mov    %eax,(%esp)
0863d0ca +0x15db:  call   0863bb30 <+0x41>
0863d0cf +0x15e0:  mov    0x8(%ebp),%eax
0863d0d2 +0x15e3:  movl   $&_ZTV42Timer_TournamentDugeonClearStateNotiReward+0x8,(%eax)
0863d0d8 +0x15e9:  leave
0863d0d9 +0x15ea:  ret
0863d0da +0x15eb:  push   %ebp
0863d0db +0x15ec:  mov    %esp,%ebp
0863d0dd +0x15ee:  sub    $0x18,%esp
0863d0e0 +0x15f1:  mov    0x8(%ebp),%eax
0863d0e3 +0x15f4:  mov    %eax,(%esp)
0863d0e6 +0x15f7:  call   0863bb30 <+0x41>
0863d0eb +0x15fc:  mov    0x8(%ebp),%eax
0863d0ee +0x15ff:  movl   $&_ZTV38Timer_TournametDungeonClearStateSelect+0x8,(%eax)
0863d0f4 +0x1605:  leave
0863d0f5 +0x1606:  ret
0863d0f6 +0x1607:  push   %ebp
0863d0f7 +0x1608:  mov    %esp,%ebp
0863d0f9 +0x160a:  sub    $0x18,%esp
0863d0fc +0x160d:  mov    0x8(%ebp),%eax
0863d0ff +0x1610:  mov    %eax,(%esp)
0863d102 +0x1613:  call   0863bb30 <+0x41>
0863d107 +0x1618:  mov    0x8(%ebp),%eax
0863d10a +0x161b:  movl   $&_ZTV17Timer_TowerOnTime+0x8,(%eax)
0863d110 +0x1621:  leave
0863d111 +0x1622:  ret
0863d112 +0x1623:  push   %ebp
0863d113 +0x1624:  mov    %esp,%ebp
0863d115 +0x1626:  sub    $0x18,%esp
0863d118 +0x1629:  mov    0x8(%ebp),%eax
0863d11b +0x162c:  mov    %eax,(%esp)
0863d11e +0x162f:  call   0863bb30 <+0x41>
0863d123 +0x1634:  mov    0x8(%ebp),%eax
0863d126 +0x1637:  movl   $&_ZTVN12advancealtar14Timer_MainTickE+0x8,(%eax)
0863d12c +0x163d:  leave
0863d12d +0x163e:  ret
0863d12e +0x163f:  push   %ebp
0863d12f +0x1640:  mov    %esp,%ebp
0863d131 +0x1642:  sub    $0x18,%esp
0863d134 +0x1645:  mov    0x8(%ebp),%eax
0863d137 +0x1648:  mov    %eax,(%esp)
0863d13a +0x164b:  call   0863bb30 <+0x41>
0863d13f +0x1650:  mov    0x8(%ebp),%eax
0863d142 +0x1653:  movl   $&_ZTVN12advancealtar18Timer_StageControlE+0x8,(%eax)
0863d148 +0x1659:  leave
0863d149 +0x165a:  ret
0863d14a +0x165b:  push   %ebp
0863d14b +0x165c:  mov    %esp,%ebp
0863d14d +0x165e:  sub    $0x18,%esp
0863d150 +0x1661:  mov    0x8(%ebp),%eax
0863d153 +0x1664:  mov    %eax,(%esp)
0863d156 +0x1667:  call   0863bb30 <+0x41>
0863d15b +0x166c:  mov    0x8(%ebp),%eax
0863d15e +0x166f:  movl   $&_ZTV24Timer_RefreshServerState+0x8,(%eax)
0863d164 +0x1675:  leave
0863d165 +0x1676:  ret
0863d166 +0x1677:  push   %ebp
0863d167 +0x1678:  mov    %esp,%ebp
0863d169 +0x167a:  sub    $0x18,%esp
0863d16c +0x167d:  mov    0x8(%ebp),%eax
0863d16f +0x1680:  mov    %eax,(%esp)
0863d172 +0x1683:  call   0863bb30 <+0x41>
0863d177 +0x1688:  mov    0x8(%ebp),%eax
0863d17a +0x168b:  movl   $&_ZTV19Timer_StayTimeEvent+0x8,(%eax)
0863d180 +0x1691:  leave
0863d181 +0x1692:  ret
0863d182 +0x1693:  push   %ebp
0863d183 +0x1694:  mov    %esp,%ebp
0863d185 +0x1696:  sub    $0x18,%esp
0863d188 +0x1699:  mov    0x8(%ebp),%eax
0863d18b +0x169c:  mov    %eax,(%esp)
0863d18e +0x169f:  call   0863bb30 <+0x41>
0863d193 +0x16a4:  mov    0x8(%ebp),%eax
0863d196 +0x16a7:  movl   $&_ZTV21Timer_CreateDnfDbLoad+0x8,(%eax)
0863d19c +0x16ad:  leave
0863d19d +0x16ae:  ret
0863d19e +0x16af:  push   %ebp
0863d19f +0x16b0:  mov    %esp,%ebp
0863d1a1 +0x16b2:  push   %ebx
0863d1a2 +0x16b3:  sub    $0x24,%esp
0863d1a5 +0x16b6:  mov    0x8(%ebp),%eax
0863d1a8 +0x16b9:  mov    0xc(%ebp),%edx
0863d1ab +0x16bc:  mov    %edx,0x4(%esp)
0863d1af +0x16c0:  mov    %eax,(%esp)
0863d1b2 +0x16c3:  call   0863d458 <+0x1969>
0863d1b7 +0x16c8:  mov    0x8(%ebp),%edx
0863d1ba +0x16cb:  lea    -0x10(%ebp),%eax
0863d1bd +0x16ce:  mov    %edx,0x4(%esp)
0863d1c1 +0x16d2:  mov    %eax,(%esp)
0863d1c4 +0x16d5:  call   080f669e <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x38b>  ; global constructors keyed to GameserverDemonManagerInstance()+0x38b
0863d1c9 +0x16da:  sub    $0x4,%esp
0863d1cc +0x16dd:  mov    0x8(%ebp),%edx
0863d1cf +0x16e0:  lea    -0xc(%ebp),%eax
0863d1d2 +0x16e3:  mov    %edx,0x4(%esp)
0863d1d6 +0x16e7:  mov    %eax,(%esp)
0863d1d9 +0x16ea:  call   080f667a <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x367>  ; global constructors keyed to GameserverDemonManagerInstance()+0x367
0863d1de +0x16ef:  sub    $0x4,%esp
0863d1e1 +0x16f2:  mov    %bl,0x8(%esp)
0863d1e5 +0x16f6:  mov    -0x10(%ebp),%eax
0863d1e8 +0x16f9:  mov    %eax,0x4(%esp)
0863d1ec +0x16fd:  mov    -0xc(%ebp),%eax
0863d1ef +0x1700:  mov    %eax,(%esp)
0863d1f2 +0x1703:  call   0863d4cb <+0x19dc>
0863d1f7 +0x1708:  mov    -0x4(%ebp),%ebx
0863d1fa +0x170b:  leave
0863d1fb +0x170c:  ret
0863d1fc +0x170d:  push   %ebp
0863d1fd +0x170e:  mov    %esp,%ebp
0863d1ff +0x1710:  sub    $0x18,%esp
0863d202 +0x1713:  mov    0x8(%ebp),%eax
0863d205 +0x1716:  mov    %eax,(%esp)
0863d208 +0x1719:  call   0863d5ac <+0x1abd>
0863d20d +0x171e:  leave
0863d20e +0x171f:  ret
0863d20f +0x1720:  nop
0863d210 +0x1721:  push   %ebp
0863d211 +0x1722:  mov    %esp,%ebp
0863d213 +0x1724:  sub    $0x18,%esp
0863d216 +0x1727:  mov    0x8(%ebp),%eax
0863d219 +0x172a:  mov    %eax,(%esp)
0863d21c +0x172d:  call   0863d5f0 <+0x1b01>
0863d221 +0x1732:  leave
0863d222 +0x1733:  ret
0863d223 +0x1734:  nop
0863d224 +0x1735:  push   %ebp
0863d225 +0x1736:  mov    %esp,%ebp
0863d227 +0x1738:  push   %ebx
0863d228 +0x1739:  sub    $0x24,%esp
0863d22b +0x173c:  mov    0x8(%ebp),%edx
0863d22e +0x173f:  lea    -0x10(%ebp),%eax
0863d231 +0x1742:  mov    %edx,0x4(%esp)
0863d235 +0x1746:  mov    %eax,(%esp)
0863d238 +0x1749:  call   080f669e <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x38b>  ; global constructors keyed to GameserverDemonManagerInstance()+0x38b
0863d23d +0x174e:  sub    $0x4,%esp
0863d240 +0x1751:  mov    0x8(%ebp),%edx
0863d243 +0x1754:  lea    -0xc(%ebp),%eax
0863d246 +0x1757:  mov    %edx,0x4(%esp)
0863d24a +0x175b:  mov    %eax,(%esp)
0863d24d +0x175e:  call   080f667a <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x367>  ; global constructors keyed to GameserverDemonManagerInstance()+0x367
0863d252 +0x1763:  sub    $0x4,%esp
0863d255 +0x1766:  mov    %bl,0x8(%esp)
0863d259 +0x176a:  mov    -0x10(%ebp),%eax
0863d25c +0x176d:  mov    %eax,0x4(%esp)
0863d260 +0x1771:  mov    -0xc(%ebp),%eax
0863d263 +0x1774:  mov    %eax,(%esp)
0863d266 +0x1777:  call   0863d618 <+0x1b29>
0863d26b +0x177c:  mov    0x8(%ebp),%eax
0863d26e +0x177f:  mov    %eax,(%esp)
0863d271 +0x1782:  call   0863d64e <+0x1b5f>
0863d276 +0x1787:  mov    -0x4(%ebp),%ebx
0863d279 +0x178a:  leave
0863d27a +0x178b:  ret
0863d27b +0x178c:  nop
0863d27c +0x178d:  push   %ebp
0863d27d +0x178e:  mov    %esp,%ebp
0863d27f +0x1790:  sub    $0x18,%esp
0863d282 +0x1793:  mov    0x8(%ebp),%eax
0863d285 +0x1796:  mov    (%eax),%eax
0863d287 +0x1798:  mov    %eax,(%esp)
0863d28a +0x179b:  call   0863d67a <+0x1b8b>
0863d28f +0x17a0:  leave
0863d290 +0x17a1:  ret
0863d291 +0x17a2:  nop
0863d292 +0x17a3:  push   %ebp
0863d293 +0x17a4:  mov    %esp,%ebp
0863d295 +0x17a6:  mov    0x8(%ebp),%eax
0863d298 +0x17a9:  mov    (%eax),%ecx
0863d29a +0x17ab:  mov    0xc(%ebp),%edx
0863d29d +0x17ae:  mov    %edx,%eax
0863d29f +0x17b0:  add    %eax,%eax
0863d2a1 +0x17b2:  add    %edx,%eax
0863d2a3 +0x17b4:  shl    $0x2,%eax
0863d2a6 +0x17b7:  lea    (%ecx,%eax,1),%eax
0863d2a9 +0x17ba:  pop    %ebp
0863d2aa +0x17bb:  ret
0863d2ab +0x17bc:  nop
0863d2ac +0x17bd:  push   %ebp
0863d2ad +0x17be:  mov    %esp,%ebp
0863d2af +0x17c0:  mov    0x8(%ebp),%eax
0863d2b2 +0x17c3:  mov    (%eax),%edx
0863d2b4 +0x17c5:  mov    0xc(%ebp),%eax
0863d2b7 +0x17c8:  mov    (%eax),%eax
0863d2b9 +0x17ca:  cmp    %eax,%edx
0863d2bb +0x17cc:  setne  %al
0863d2be +0x17cf:  pop    %ebp
0863d2bf +0x17d0:  ret
0863d2c0 +0x17d1:  push   %ebp
0863d2c1 +0x17d2:  mov    %esp,%ebp
0863d2c3 +0x17d4:  mov    0x8(%ebp),%eax
0863d2c6 +0x17d7:  mov    0x4(%eax),%eax
0863d2c9 +0x17da:  mov    %eax,%edx
0863d2cb +0x17dc:  mov    0x8(%ebp),%eax
0863d2ce +0x17df:  mov    (%eax),%eax
0863d2d0 +0x17e1:  mov    %edx,%ecx
0863d2d2 +0x17e3:  sub    %eax,%ecx
0863d2d4 +0x17e5:  mov    %ecx,%eax
0863d2d6 +0x17e7:  sar    $0x3,%eax
0863d2d9 +0x17ea:  pop    %ebp
0863d2da +0x17eb:  ret
0863d2db +0x17ec:  nop
0863d2dc +0x17ed:  push   %ebp
0863d2dd +0x17ee:  mov    %esp,%ebp
0863d2df +0x17f0:  mov    0x8(%ebp),%eax
0863d2e2 +0x17f3:  mov    (%eax),%eax
0863d2e4 +0x17f5:  mov    0xc(%ebp),%edx
0863d2e7 +0x17f8:  shl    $0x3,%edx
0863d2ea +0x17fb:  add    %edx,%eax
0863d2ec +0x17fd:  pop    %ebp
0863d2ed +0x17fe:  ret
0863d2ee +0x17ff:  push   %ebp
0863d2ef +0x1800:  mov    %esp,%ebp
0863d2f1 +0x1802:  sub    $0x18,%esp
0863d2f4 +0x1805:  mov    0x8(%ebp),%eax
0863d2f7 +0x1808:  mov    (%eax),%eax
0863d2f9 +0x180a:  mov    %eax,(%esp)
0863d2fc +0x180d:  call   0863d6e4 <+0x1bf5>
0863d301 +0x1812:  leave
0863d302 +0x1813:  ret
0863d303 +0x1814:  nop
0863d304 +0x1815:  push   %ebp
0863d305 +0x1816:  mov    %esp,%ebp
0863d307 +0x1818:  push   %ebx
0863d308 +0x1819:  sub    $0x14,%esp
0863d30b +0x181c:  mov    0x8(%ebp),%ebx
0863d30e +0x181f:  mov    0xc(%ebp),%eax
0863d311 +0x1822:  mov    0x10(%ebp),%edx
0863d314 +0x1825:  mov    %edx,0x8(%esp)
0863d318 +0x1829:  mov    %eax,0x4(%esp)
0863d31c +0x182d:  mov    %ebx,(%esp)
0863d31f +0x1830:  call   0863d74e <+0x1c5f>
0863d324 +0x1835:  sub    $0x4,%esp
0863d327 +0x1838:  mov    %ebx,%eax
0863d329 +0x183a:  mov    -0x4(%ebp),%ebx
0863d32c +0x183d:  leave
0863d32d +0x183e:  ret    $0x4
0863d330 +0x1841:  push   %ebp
0863d331 +0x1842:  mov    %esp,%ebp
0863d333 +0x1844:  push   %ebx
0863d334 +0x1845:  sub    $0x14,%esp
0863d337 +0x1848:  mov    0x8(%ebp),%ebx
0863d33a +0x184b:  mov    0xc(%ebp),%eax
0863d33d +0x184e:  mov    %eax,0x4(%esp)
0863d341 +0x1852:  mov    %ebx,(%esp)
0863d344 +0x1855:  call   0863d80c <+0x1d1d>
0863d349 +0x185a:  sub    $0x4,%esp
0863d34c +0x185d:  mov    %ebx,%eax
0863d34e +0x185f:  mov    -0x4(%ebp),%ebx
0863d351 +0x1862:  leave
0863d352 +0x1863:  ret    $0x4
0863d355 +0x1866:  nop
0863d356 +0x1867:  push   %ebp
0863d357 +0x1868:  mov    %esp,%ebp
0863d359 +0x186a:  mov    0x8(%ebp),%eax
0863d35c +0x186d:  mov    (%eax),%edx
0863d35e +0x186f:  mov    0xc(%ebp),%eax
0863d361 +0x1872:  mov    (%eax),%eax
0863d363 +0x1874:  cmp    %eax,%edx
0863d365 +0x1876:  setne  %al
0863d368 +0x1879:  pop    %ebp
0863d369 +0x187a:  ret
0863d36a +0x187b:  push   %ebp
0863d36b +0x187c:  mov    %esp,%ebp
0863d36d +0x187e:  mov    0x8(%ebp),%eax
0863d370 +0x1881:  mov    (%eax),%eax
0863d372 +0x1883:  add    $0x10,%eax
0863d375 +0x1886:  pop    %ebp
0863d376 +0x1887:  ret
0863d377 +0x1888:  nop
0863d378 +0x1889:  push   %ebp
0863d379 +0x188a:  mov    %esp,%ebp
0863d37b +0x188c:  push   %ebx
0863d37c +0x188d:  sub    $0x14,%esp
0863d37f +0x1890:  mov    0x8(%ebp),%ebx
0863d382 +0x1893:  mov    0xc(%ebp),%eax
0863d385 +0x1896:  mov    %eax,0x4(%esp)
0863d389 +0x189a:  mov    %ebx,(%esp)
0863d38c +0x189d:  call   0863d832 <+0x1d43>
0863d391 +0x18a2:  sub    $0x4,%esp
0863d394 +0x18a5:  mov    %ebx,%eax
0863d396 +0x18a7:  mov    -0x4(%ebp),%ebx
0863d399 +0x18aa:  leave
0863d39a +0x18ab:  ret    $0x4
0863d39d +0x18ae:  nop
0863d39e +0x18af:  push   %ebp
0863d39f +0x18b0:  mov    %esp,%ebp
0863d3a1 +0x18b2:  sub    $0x18,%esp
0863d3a4 +0x18b5:  mov    0x8(%ebp),%eax
0863d3a7 +0x18b8:  mov    (%eax),%eax
0863d3a9 +0x18ba:  mov    %eax,(%esp)
0863d3ac +0x18bd:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
0863d3b1 +0x18c2:  mov    0x8(%ebp),%edx
0863d3b4 +0x18c5:  mov    %eax,(%edx)
0863d3b6 +0x18c7:  mov    0x8(%ebp),%eax
0863d3b9 +0x18ca:  leave
0863d3ba +0x18cb:  ret
0863d3bb +0x18cc:  nop
0863d3bc +0x18cd:  push   %ebp
0863d3bd +0x18ce:  mov    %esp,%ebp
0863d3bf +0x18d0:  sub    $0x28,%esp
0863d3c2 +0x18d3:  mov    0x8(%ebp),%eax
0863d3c5 +0x18d6:  lea    0x134(%eax),%edx
0863d3cb +0x18dc:  lea    -0x14(%ebp),%eax
0863d3ce +0x18df:  mov    %edx,0x4(%esp)
0863d3d2 +0x18e3:  mov    %eax,(%esp)
0863d3d5 +0x18e6:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
0863d3da +0x18eb:  sub    $0x4,%esp
0863d3dd +0x18ee:  jmp    0863d425 <+0x1936>
0863d3df +0x18f0:  lea    -0x14(%ebp),%eax
0863d3e2 +0x18f3:  mov    %eax,(%esp)
0863d3e5 +0x18f6:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
0863d3ea +0x18fb:  mov    0x4(%eax),%eax
0863d3ed +0x18fe:  mov    %eax,-0xc(%ebp)
0863d3f0 +0x1901:  mov    -0xc(%ebp),%eax
0863d3f3 +0x1904:  mov    %eax,(%esp)
0863d3f6 +0x1907:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0863d3fb +0x190c:  cmp    $0x2,%eax
0863d3fe +0x190f:  setle  %al
0863d401 +0x1912:  test   %al,%al
0863d403 +0x1914:  jne    0863d419 <+0x192a>
0863d405 +0x1916:  mov    -0xc(%ebp),%eax
0863d408 +0x1919:  mov    %eax,0x4(%esp)
0863d40c +0x191d:  lea    0xc(%ebp),%eax
0863d40f +0x1920:  mov    %eax,(%esp)
0863d412 +0x1923:  call   0863c018 <+0x529>
0863d417 +0x1928:  jmp    0863d41a <+0x192b>
0863d419 +0x192a:  nop
0863d41a +0x192b:  lea    -0x14(%ebp),%eax
0863d41d +0x192e:  mov    %eax,(%esp)
0863d420 +0x1931:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
0863d425 +0x1936:  mov    0x8(%ebp),%eax
0863d428 +0x1939:  lea    0x134(%eax),%edx
0863d42e +0x193f:  lea    -0x10(%ebp),%eax
0863d431 +0x1942:  mov    %edx,0x4(%esp)
0863d435 +0x1946:  mov    %eax,(%esp)
0863d438 +0x1949:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
0863d43d +0x194e:  sub    $0x4,%esp
0863d440 +0x1951:  lea    -0x10(%ebp),%eax
0863d443 +0x1954:  mov    %eax,0x4(%esp)
0863d447 +0x1958:  lea    -0x14(%ebp),%eax
0863d44a +0x195b:  mov    %eax,(%esp)
0863d44d +0x195e:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
0863d452 +0x1963:  test   %al,%al
0863d454 +0x1965:  jne    0863d3df <+0x18f0>
0863d456 +0x1967:  leave
0863d457 +0x1968:  ret
0863d458 +0x1969:  push   %ebp
0863d459 +0x196a:  mov    %esp,%ebp
0863d45b +0x196c:  sub    $0x28,%esp
0863d45e +0x196f:  mov    0x8(%ebp),%eax
0863d461 +0x1972:  mov    0x4(%eax),%edx
0863d464 +0x1975:  mov    0x8(%ebp),%eax
0863d467 +0x1978:  mov    0x8(%eax),%eax
0863d46a +0x197b:  cmp    %eax,%edx
0863d46c +0x197d:  je     0863d49b <+0x19ac>
0863d46e +0x197f:  mov    0x8(%ebp),%eax
0863d471 +0x1982:  mov    0x4(%eax),%edx
0863d474 +0x1985:  mov    0x8(%ebp),%eax
0863d477 +0x1988:  mov    0xc(%ebp),%ecx
0863d47a +0x198b:  mov    %ecx,0x8(%esp)
0863d47e +0x198f:  mov    %edx,0x4(%esp)
0863d482 +0x1993:  mov    %eax,(%esp)
0863d485 +0x1996:  call   0863d858 <+0x1d69>
0863d48a +0x199b:  mov    0x8(%ebp),%eax
0863d48d +0x199e:  mov    0x4(%eax),%eax
0863d490 +0x19a1:  lea    0x1c(%eax),%edx
0863d493 +0x19a4:  mov    0x8(%ebp),%eax
0863d496 +0x19a7:  mov    %edx,0x4(%eax)
0863d499 +0x19aa:  jmp    0863d4c9 <+0x19da>
0863d49b +0x19ac:  lea    -0xc(%ebp),%eax
0863d49e +0x19af:  mov    0x8(%ebp),%edx
0863d4a1 +0x19b2:  mov    %edx,0x4(%esp)
0863d4a5 +0x19b6:  mov    %eax,(%esp)
0863d4a8 +0x19b9:  call   080f669e <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x38b>  ; global constructors keyed to GameserverDemonManagerInstance()+0x38b
0863d4ad +0x19be:  sub    $0x4,%esp
0863d4b0 +0x19c1:  mov    0xc(%ebp),%eax
0863d4b3 +0x19c4:  mov    %eax,0x8(%esp)
0863d4b7 +0x19c8:  mov    -0xc(%ebp),%eax
0863d4ba +0x19cb:  mov    %eax,0x4(%esp)
0863d4be +0x19cf:  mov    0x8(%ebp),%eax
0863d4c1 +0x19d2:  mov    %eax,(%esp)
0863d4c4 +0x19d5:  call   0863d8a4 <+0x1db5>
0863d4c9 +0x19da:  leave
0863d4ca +0x19db:  ret
0863d4cb +0x19dc:  push   %ebp
0863d4cc +0x19dd:  mov    %esp,%ebp
0863d4ce +0x19df:  push   %esi
0863d4cf +0x19e0:  push   %ebx
0863d4d0 +0x19e1:  sub    $0x60,%esp
0863d4d3 +0x19e4:  movl   $0x1,-0xc(%ebp)
0863d4da +0x19eb:  lea    -0x10(%ebp),%eax
0863d4dd +0x19ee:  lea    -0xc(%ebp),%edx
0863d4e0 +0x19f1:  mov    %edx,0x8(%esp)
0863d4e4 +0x19f5:  lea    0xc(%ebp),%edx
0863d4e7 +0x19f8:  mov    %edx,0x4(%esp)
0863d4eb +0x19fc:  mov    %eax,(%esp)
0863d4ee +0x19ff:  call   0863dbac <+0x20bd>
0863d4f3 +0x1a04:  sub    $0x4,%esp
0863d4f6 +0x1a07:  lea    -0x10(%ebp),%eax
0863d4f9 +0x1a0a:  mov    %eax,(%esp)
0863d4fc +0x1a0d:  call   080f69be <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6ab>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6ab
0863d501 +0x1a12:  mov    %eax,(%esp)
0863d504 +0x1a15:  call   080f69c8 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6b5>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6b5
0863d509 +0x1a1a:  mov    (%eax),%edx
0863d50b +0x1a1c:  mov    %edx,-0x2c(%ebp)
0863d50e +0x1a1f:  mov    0x4(%eax),%edx
0863d511 +0x1a22:  mov    %edx,-0x28(%ebp)
0863d514 +0x1a25:  mov    0x8(%eax),%edx
0863d517 +0x1a28:  mov    %edx,-0x24(%ebp)
0863d51a +0x1a2b:  mov    0xc(%eax),%edx
0863d51d +0x1a2e:  mov    %edx,-0x20(%ebp)
0863d520 +0x1a31:  mov    0x10(%eax),%edx
0863d523 +0x1a34:  mov    %edx,-0x1c(%ebp)
0863d526 +0x1a37:  mov    0x14(%eax),%edx
0863d529 +0x1a3a:  mov    %edx,-0x18(%ebp)
0863d52c +0x1a3d:  mov    0x18(%eax),%eax
0863d52f +0x1a40:  mov    %eax,-0x14(%ebp)
0863d532 +0x1a43:  lea    -0x2c(%ebp),%eax
0863d535 +0x1a46:  mov    %eax,(%esp)
0863d538 +0x1a49:  call   080f69c8 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6b5>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6b5
0863d53d +0x1a4e:  mov    %eax,%ebx
0863d53f +0x1a50:  lea    0x8(%ebp),%eax
0863d542 +0x1a53:  mov    %eax,0x4(%esp)
0863d546 +0x1a57:  lea    0xc(%ebp),%eax
0863d549 +0x1a5a:  mov    %eax,(%esp)
0863d54c +0x1a5d:  call   080f693f <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x62c>  ; global constructors keyed to GameserverDemonManagerInstance()+0x62c
0863d551 +0x1a62:  lea    -0x1(%eax),%edx
0863d554 +0x1a65:  mov    %esi,%eax
0863d556 +0x1a67:  mov    %al,0x28(%esp)
0863d55a +0x1a6b:  mov    (%ebx),%eax
0863d55c +0x1a6d:  mov    %eax,0xc(%esp)
0863d560 +0x1a71:  mov    0x4(%ebx),%eax
0863d563 +0x1a74:  mov    %eax,0x10(%esp)
0863d567 +0x1a78:  mov    0x8(%ebx),%eax
0863d56a +0x1a7b:  mov    %eax,0x14(%esp)
0863d56e +0x1a7f:  mov    0xc(%ebx),%eax
0863d571 +0x1a82:  mov    %eax,0x18(%esp)
0863d575 +0x1a86:  mov    0x10(%ebx),%eax
0863d578 +0x1a89:  mov    %eax,0x1c(%esp)
0863d57c +0x1a8d:  mov    0x14(%ebx),%eax
0863d57f +0x1a90:  mov    %eax,0x20(%esp)
0863d583 +0x1a94:  mov    0x18(%ebx),%eax
0863d586 +0x1a97:  mov    %eax,0x24(%esp)
0863d58a +0x1a9b:  movl   $0x0,0x8(%esp)
0863d592 +0x1aa3:  mov    %edx,0x4(%esp)
0863d596 +0x1aa7:  mov    0x8(%ebp),%eax
0863d599 +0x1aaa:  mov    %eax,(%esp)
0863d59c +0x1aad:  call   080f6cce <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x9bb>  ; global constructors keyed to GameserverDemonManagerInstance()+0x9bb
0863d5a1 +0x1ab2:  lea    -0x8(%ebp),%esp
0863d5a4 +0x1ab5:  add    $0x0,%esp
0863d5a7 +0x1ab8:  pop    %ebx
0863d5a8 +0x1ab9:  pop    %esi
0863d5a9 +0x1aba:  pop    %ebp
0863d5aa +0x1abb:  ret
0863d5ab +0x1abc:  nop
0863d5ac +0x1abd:  push   %ebp
0863d5ad +0x1abe:  mov    %esp,%ebp
0863d5af +0x1ac0:  sub    $0x28,%esp
0863d5b2 +0x1ac3:  lea    -0x10(%ebp),%eax
0863d5b5 +0x1ac6:  mov    0x8(%ebp),%edx
0863d5b8 +0x1ac9:  mov    %edx,0x4(%esp)
0863d5bc +0x1acd:  mov    %eax,(%esp)
0863d5bf +0x1ad0:  call   0863dbf4 <+0x2105>
0863d5c4 +0x1ad5:  sub    $0x4,%esp
0863d5c7 +0x1ad8:  lea    -0xc(%ebp),%eax
0863d5ca +0x1adb:  mov    0x8(%ebp),%edx
0863d5cd +0x1ade:  mov    %edx,0x4(%esp)
0863d5d1 +0x1ae2:  mov    %eax,(%esp)
0863d5d4 +0x1ae5:  call   0863dc20 <+0x2131>
0863d5d9 +0x1aea:  sub    $0x4,%esp
0863d5dc +0x1aed:  lea    -0x10(%ebp),%eax
0863d5df +0x1af0:  mov    %eax,0x4(%esp)
0863d5e3 +0x1af4:  lea    -0xc(%ebp),%eax
0863d5e6 +0x1af7:  mov    %eax,(%esp)
0863d5e9 +0x1afa:  call   0863dc4b <+0x215c>
0863d5ee +0x1aff:  leave
0863d5ef +0x1b00:  ret
0863d5f0 +0x1b01:  push   %ebp
0863d5f1 +0x1b02:  mov    %esp,%ebp
0863d5f3 +0x1b04:  sub    $0x28,%esp
0863d5f6 +0x1b07:  lea    -0xc(%ebp),%eax
0863d5f9 +0x1b0a:  mov    0x8(%ebp),%edx
0863d5fc +0x1b0d:  mov    %edx,0x4(%esp)
0863d600 +0x1b11:  mov    %eax,(%esp)
0863d603 +0x1b14:  call   0863dc20 <+0x2131>
0863d608 +0x1b19:  sub    $0x4,%esp
0863d60b +0x1b1c:  lea    -0xc(%ebp),%eax
0863d60e +0x1b1f:  mov    %eax,(%esp)
0863d611 +0x1b22:  call   0863dc78 <+0x2189>
0863d616 +0x1b27:  leave
0863d617 +0x1b28:  ret
0863d618 +0x1b29:  push   %ebp
0863d619 +0x1b2a:  mov    %esp,%ebp
0863d61b +0x1b2c:  push   %ebx
0863d61c +0x1b2d:  sub    $0x14,%esp
0863d61f +0x1b30:  lea    0xc(%ebp),%eax
0863d622 +0x1b33:  mov    %eax,(%esp)
0863d625 +0x1b36:  call   0863dc82 <+0x2193>
0863d62a +0x1b3b:  mov    %bl,0xc(%esp)
0863d62e +0x1b3f:  mov    0xc(%ebp),%eax
0863d631 +0x1b42:  mov    %eax,0x8(%esp)
0863d635 +0x1b46:  mov    0xc(%ebp),%eax
0863d638 +0x1b49:  mov    %eax,0x4(%esp)
0863d63c +0x1b4d:  mov    0x8(%ebp),%eax
0863d63f +0x1b50:  mov    %eax,(%esp)
0863d642 +0x1b53:  call   0863dc97 <+0x21a8>
0863d647 +0x1b58:  add    $0x14,%esp
0863d64a +0x1b5b:  pop    %ebx
0863d64b +0x1b5c:  pop    %ebp
0863d64c +0x1b5d:  ret
0863d64d +0x1b5e:  nop
0863d64e +0x1b5f:  push   %ebp
0863d64f +0x1b60:  mov    %esp,%ebp
0863d651 +0x1b62:  sub    $0x18,%esp
0863d654 +0x1b65:  mov    0x8(%ebp),%eax
0863d657 +0x1b68:  mov    0x4(%eax),%eax
0863d65a +0x1b6b:  lea    -0x1c(%eax),%edx
0863d65d +0x1b6e:  mov    0x8(%ebp),%eax
0863d660 +0x1b71:  mov    %edx,0x4(%eax)
0863d663 +0x1b74:  mov    0x8(%ebp),%eax
0863d666 +0x1b77:  mov    0x4(%eax),%edx
0863d669 +0x1b7a:  mov    0x8(%ebp),%eax
0863d66c +0x1b7d:  mov    %edx,0x4(%esp)
0863d670 +0x1b81:  mov    %eax,(%esp)
0863d673 +0x1b84:  call   0863dd9c <+0x22ad>
0863d678 +0x1b89:  leave
0863d679 +0x1b8a:  ret
0863d67a +0x1b8b:  push   %ebp
0863d67b +0x1b8c:  mov    %esp,%ebp
0863d67d +0x1b8e:  sub    $0x28,%esp
0863d680 +0x1b91:  jmp    0863d69e <+0x1baf>
0863d682 +0x1b93:  mov    0x8(%ebp),%eax
0863d685 +0x1b96:  mov    %eax,(%esp)
0863d688 +0x1b99:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0863d68d +0x1b9e:  add    %eax,%eax
0863d68f +0x1ba0:  mov    %eax,0x4(%esp)
0863d693 +0x1ba4:  mov    0x8(%ebp),%eax
0863d696 +0x1ba7:  mov    %eax,(%esp)
0863d699 +0x1baa:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0863d69e +0x1baf:  movl   $0x80,0x4(%esp)
0863d6a6 +0x1bb7:  mov    0x8(%ebp),%eax
0863d6a9 +0x1bba:  mov    %eax,(%esp)
0863d6ac +0x1bbd:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0863d6b1 +0x1bc2:  xor    $0x1,%eax
0863d6b4 +0x1bc5:  test   %al,%al
0863d6b6 +0x1bc7:  jne    0863d682 <+0x1b93>
0863d6b8 +0x1bc9:  mov    0x8(%ebp),%eax
0863d6bb +0x1bcc:  mov    0x8(%eax),%eax
0863d6be +0x1bcf:  mov    %eax,%edx
0863d6c0 +0x1bd1:  mov    0x8(%ebp),%eax
0863d6c3 +0x1bd4:  mov    0xc(%eax),%eax
0863d6c6 +0x1bd7:  lea    (%edx,%eax,1),%eax
0863d6c9 +0x1bda:  mov    %eax,-0xc(%ebp)
0863d6cc +0x1bdd:  movl   $0x80,0x4(%esp)
0863d6d4 +0x1be5:  mov    0x8(%ebp),%eax
0863d6d7 +0x1be8:  mov    %eax,(%esp)
0863d6da +0x1beb:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0863d6df +0x1bf0:  mov    -0xc(%ebp),%eax
0863d6e2 +0x1bf3:  leave
0863d6e3 +0x1bf4:  ret
0863d6e4 +0x1bf5:  push   %ebp
0863d6e5 +0x1bf6:  mov    %esp,%ebp
0863d6e7 +0x1bf8:  sub    $0x28,%esp
0863d6ea +0x1bfb:  jmp    0863d708 <+0x1c19>
0863d6ec +0x1bfd:  mov    0x8(%ebp),%eax
0863d6ef +0x1c00:  mov    %eax,(%esp)
0863d6f2 +0x1c03:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0863d6f7 +0x1c08:  add    %eax,%eax
0863d6f9 +0x1c0a:  mov    %eax,0x4(%esp)
0863d6fd +0x1c0e:  mov    0x8(%ebp),%eax
0863d700 +0x1c11:  mov    %eax,(%esp)
0863d703 +0x1c14:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0863d708 +0x1c19:  movl   $0xb,0x4(%esp)
0863d710 +0x1c21:  mov    0x8(%ebp),%eax
0863d713 +0x1c24:  mov    %eax,(%esp)
0863d716 +0x1c27:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0863d71b +0x1c2c:  xor    $0x1,%eax
0863d71e +0x1c2f:  test   %al,%al
0863d720 +0x1c31:  jne    0863d6ec <+0x1bfd>
0863d722 +0x1c33:  mov    0x8(%ebp),%eax
0863d725 +0x1c36:  mov    0x8(%eax),%eax
0863d728 +0x1c39:  mov    %eax,%edx
0863d72a +0x1c3b:  mov    0x8(%ebp),%eax
0863d72d +0x1c3e:  mov    0xc(%eax),%eax
0863d730 +0x1c41:  lea    (%edx,%eax,1),%eax
0863d733 +0x1c44:  mov    %eax,-0xc(%ebp)
0863d736 +0x1c47:  movl   $0xb,0x4(%esp)
0863d73e +0x1c4f:  mov    0x8(%ebp),%eax
0863d741 +0x1c52:  mov    %eax,(%esp)
0863d744 +0x1c55:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0863d749 +0x1c5a:  mov    -0xc(%ebp),%eax
0863d74c +0x1c5d:  leave
0863d74d +0x1c5e:  ret
0863d74e +0x1c5f:  push   %ebp
0863d74f +0x1c60:  mov    %esp,%ebp
0863d751 +0x1c62:  push   %esi
0863d752 +0x1c63:  push   %ebx
0863d753 +0x1c64:  sub    $0x30,%esp
0863d756 +0x1c67:  mov    0x8(%ebp),%ebx
0863d759 +0x1c6a:  mov    0xc(%ebp),%eax
0863d75c +0x1c6d:  mov    %eax,(%esp)
0863d75f +0x1c70:  call   083b7b6e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x51b3a>  ; global constructors keyed to CServerEvent::m_nExpRate+0x51b3a
0863d764 +0x1c75:  mov    %eax,%esi
0863d766 +0x1c77:  mov    0xc(%ebp),%eax
0863d769 +0x1c7a:  mov    %eax,(%esp)
0863d76c +0x1c7d:  call   0839c792 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x422e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x422e
0863d771 +0x1c82:  lea    -0x10(%ebp),%edx
0863d774 +0x1c85:  mov    0x10(%ebp),%ecx
0863d777 +0x1c88:  mov    %ecx,0x10(%esp)
0863d77b +0x1c8c:  mov    %esi,0xc(%esp)
0863d77f +0x1c90:  mov    %eax,0x8(%esp)
0863d783 +0x1c94:  mov    0xc(%ebp),%eax
0863d786 +0x1c97:  mov    %eax,0x4(%esp)
0863d78a +0x1c9b:  mov    %edx,(%esp)
0863d78d +0x1c9e:  call   0863ddb0 <+0x22c1>
0863d792 +0x1ca3:  sub    $0x4,%esp
0863d795 +0x1ca6:  lea    -0xc(%ebp),%eax
0863d798 +0x1ca9:  mov    0xc(%ebp),%edx
0863d79b +0x1cac:  mov    %edx,0x4(%esp)
0863d79f +0x1cb0:  mov    %eax,(%esp)
0863d7a2 +0x1cb3:  call   0863d80c <+0x1d1d>
0863d7a7 +0x1cb8:  sub    $0x4,%esp
0863d7aa +0x1cbb:  lea    -0xc(%ebp),%eax
0863d7ad +0x1cbe:  mov    %eax,0x4(%esp)
0863d7b1 +0x1cc2:  lea    -0x10(%ebp),%eax
0863d7b4 +0x1cc5:  mov    %eax,(%esp)
0863d7b7 +0x1cc8:  call   0863de4e <+0x235f>
0863d7bc +0x1ccd:  test   %al,%al
0863d7be +0x1ccf:  jne    0863d7e5 <+0x1cf6>
0863d7c0 +0x1cd1:  mov    -0x10(%ebp),%eax
0863d7c3 +0x1cd4:  mov    %eax,(%esp)
0863d7c6 +0x1cd7:  call   0863de2c <+0x233d>
0863d7cb +0x1cdc:  mov    0xc(%ebp),%edx
0863d7ce +0x1cdf:  mov    %eax,0x8(%esp)
0863d7d2 +0x1ce3:  mov    0x10(%ebp),%eax
0863d7d5 +0x1ce6:  mov    %eax,0x4(%esp)
0863d7d9 +0x1cea:  mov    %edx,(%esp)
0863d7dc +0x1ced:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0863d7e1 +0x1cf2:  test   %al,%al
0863d7e3 +0x1cf4:  je     0863d7f9 <+0x1d0a>
0863d7e5 +0x1cf6:  mov    0xc(%ebp),%eax
0863d7e8 +0x1cf9:  mov    %eax,0x4(%esp)
0863d7ec +0x1cfd:  mov    %ebx,(%esp)
0863d7ef +0x1d00:  call   0863d80c <+0x1d1d>
0863d7f4 +0x1d05:  sub    $0x4,%esp
0863d7f7 +0x1d08:  jmp    0863d7fe <+0x1d0f>
0863d7f9 +0x1d0a:  mov    -0x10(%ebp),%eax
0863d7fc +0x1d0d:  mov    %eax,(%ebx)
0863d7fe +0x1d0f:  mov    %ebx,%eax
0863d800 +0x1d11:  lea    -0x8(%ebp),%esp
0863d803 +0x1d14:  add    $0x0,%esp
0863d806 +0x1d17:  pop    %ebx
0863d807 +0x1d18:  pop    %esi
0863d808 +0x1d19:  pop    %ebp
0863d809 +0x1d1a:  ret    $0x4
0863d80c +0x1d1d:  push   %ebp
0863d80d +0x1d1e:  mov    %esp,%ebp
0863d80f +0x1d20:  push   %ebx
0863d810 +0x1d21:  sub    $0x14,%esp
0863d813 +0x1d24:  mov    0x8(%ebp),%ebx
0863d816 +0x1d27:  mov    0xc(%ebp),%eax
0863d819 +0x1d2a:  add    $0x4,%eax
0863d81c +0x1d2d:  mov    %eax,0x4(%esp)
0863d820 +0x1d31:  mov    %ebx,(%esp)
0863d823 +0x1d34:  call   0863de62 <+0x2373>
0863d828 +0x1d39:  mov    %ebx,%eax
0863d82a +0x1d3b:  add    $0x14,%esp
0863d82d +0x1d3e:  pop    %ebx
0863d82e +0x1d3f:  pop    %ebp
0863d82f +0x1d40:  ret    $0x4
0863d832 +0x1d43:  push   %ebp
0863d833 +0x1d44:  mov    %esp,%ebp
0863d835 +0x1d46:  push   %ebx
0863d836 +0x1d47:  sub    $0x14,%esp
0863d839 +0x1d4a:  mov    0x8(%ebp),%ebx
0863d83c +0x1d4d:  mov    0xc(%ebp),%eax
0863d83f +0x1d50:  mov    0xc(%eax),%eax
0863d842 +0x1d53:  mov    %eax,0x4(%esp)
0863d846 +0x1d57:  mov    %ebx,(%esp)
0863d849 +0x1d5a:  call   0863de62 <+0x2373>
0863d84e +0x1d5f:  mov    %ebx,%eax
0863d850 +0x1d61:  add    $0x14,%esp
0863d853 +0x1d64:  pop    %ebx
0863d854 +0x1d65:  pop    %ebp
0863d855 +0x1d66:  ret    $0x4
0863d858 +0x1d69:  push   %ebp
0863d859 +0x1d6a:  mov    %esp,%ebp
0863d85b +0x1d6c:  sub    $0x18,%esp
0863d85e +0x1d6f:  mov    0xc(%ebp),%eax
0863d861 +0x1d72:  mov    %eax,0x4(%esp)
0863d865 +0x1d76:  movl   $0x1c,(%esp)
0863d86c +0x1d7d:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0863d871 +0x1d82:  mov    %eax,%edx
0863d873 +0x1d84:  test   %edx,%edx
0863d875 +0x1d86:  je     0863d8a2 <+0x1db3>
0863d877 +0x1d88:  mov    0x10(%ebp),%edx
0863d87a +0x1d8b:  mov    (%edx),%ecx
0863d87c +0x1d8d:  mov    %ecx,(%eax)
0863d87e +0x1d8f:  mov    0x4(%edx),%ecx
0863d881 +0x1d92:  mov    %ecx,0x4(%eax)
0863d884 +0x1d95:  mov    0x8(%edx),%ecx
0863d887 +0x1d98:  mov    %ecx,0x8(%eax)
0863d88a +0x1d9b:  mov    0xc(%edx),%ecx
0863d88d +0x1d9e:  mov    %ecx,0xc(%eax)
0863d890 +0x1da1:  mov    0x10(%edx),%ecx
0863d893 +0x1da4:  mov    %ecx,0x10(%eax)
0863d896 +0x1da7:  mov    0x14(%edx),%ecx
0863d899 +0x1daa:  mov    %ecx,0x14(%eax)
0863d89c +0x1dad:  mov    0x18(%edx),%edx
0863d89f +0x1db0:  mov    %edx,0x18(%eax)
0863d8a2 +0x1db3:  leave
0863d8a3 +0x1db4:  ret
0863d8a4 +0x1db5:  push   %ebp
0863d8a5 +0x1db6:  mov    %esp,%ebp
0863d8a7 +0x1db8:  push   %esi
0863d8a8 +0x1db9:  push   %ebx
0863d8a9 +0x1dba:  sub    $0x30,%esp
0863d8ac +0x1dbd:  mov    0x8(%ebp),%eax
0863d8af +0x1dc0:  mov    0x4(%eax),%edx
0863d8b2 +0x1dc3:  mov    0x8(%ebp),%eax
0863d8b5 +0x1dc6:  mov    0x8(%eax),%eax
0863d8b8 +0x1dc9:  cmp    %eax,%edx
0863d8ba +0x1dcb:  je     0863d96d <+0x1e7e>
0863d8c0 +0x1dd1:  mov    0x8(%ebp),%eax
0863d8c3 +0x1dd4:  mov    0x4(%eax),%eax
0863d8c6 +0x1dd7:  sub    $0x1c,%eax
0863d8c9 +0x1dda:  mov    %eax,(%esp)
0863d8cc +0x1ddd:  call   080f69c8 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6b5>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6b5
0863d8d1 +0x1de2:  mov    0x8(%ebp),%edx
0863d8d4 +0x1de5:  mov    0x4(%edx),%ecx
0863d8d7 +0x1de8:  mov    0x8(%ebp),%edx
0863d8da +0x1deb:  mov    %eax,0x8(%esp)
0863d8de +0x1def:  mov    %ecx,0x4(%esp)
0863d8e2 +0x1df3:  mov    %edx,(%esp)
0863d8e5 +0x1df6:  call   0863de70 <+0x2381>
0863d8ea +0x1dfb:  mov    0x8(%ebp),%eax
0863d8ed +0x1dfe:  mov    0x4(%eax),%eax
0863d8f0 +0x1e01:  lea    0x1c(%eax),%edx
0863d8f3 +0x1e04:  mov    0x8(%ebp),%eax
0863d8f6 +0x1e07:  mov    %edx,0x4(%eax)
0863d8f9 +0x1e0a:  mov    0x8(%ebp),%eax
0863d8fc +0x1e0d:  mov    0x4(%eax),%eax
0863d8ff +0x1e10:  lea    -0x1c(%eax),%esi
0863d902 +0x1e13:  mov    0x8(%ebp),%eax
0863d905 +0x1e16:  mov    0x4(%eax),%eax
0863d908 +0x1e19:  lea    -0x38(%eax),%ebx
0863d90b +0x1e1c:  lea    0xc(%ebp),%eax
0863d90e +0x1e1f:  mov    %eax,(%esp)
0863d911 +0x1e22:  call   080f6cac <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x999>  ; global constructors keyed to GameserverDemonManagerInstance()+0x999
0863d916 +0x1e27:  mov    (%eax),%eax
0863d918 +0x1e29:  mov    %esi,0x8(%esp)
0863d91c +0x1e2d:  mov    %ebx,0x4(%esp)
0863d920 +0x1e31:  mov    %eax,(%esp)
0863d923 +0x1e34:  call   0863decb <+0x23dc>
0863d928 +0x1e39:  lea    0xc(%ebp),%eax
0863d92b +0x1e3c:  mov    %eax,(%esp)
0863d92e +0x1e3f:  call   080f69be <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6ab>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6ab
0863d933 +0x1e44:  mov    %eax,%ebx
0863d935 +0x1e46:  mov    0x10(%ebp),%eax
0863d938 +0x1e49:  mov    %eax,(%esp)
0863d93b +0x1e4c:  call   0863df03 <+0x2414>
0863d940 +0x1e51:  mov    (%eax),%edx
0863d942 +0x1e53:  mov    %edx,(%ebx)
0863d944 +0x1e55:  mov    0x4(%eax),%edx
0863d947 +0x1e58:  mov    %edx,0x4(%ebx)
0863d94a +0x1e5b:  mov    0x8(%eax),%edx
0863d94d +0x1e5e:  mov    %edx,0x8(%ebx)
0863d950 +0x1e61:  mov    0xc(%eax),%edx
0863d953 +0x1e64:  mov    %edx,0xc(%ebx)
0863d956 +0x1e67:  mov    0x10(%eax),%edx
0863d959 +0x1e6a:  mov    %edx,0x10(%ebx)
0863d95c +0x1e6d:  mov    0x14(%eax),%edx
0863d95f +0x1e70:  mov    %edx,0x14(%ebx)
0863d962 +0x1e73:  mov    0x18(%eax),%eax
0863d965 +0x1e76:  mov    %eax,0x18(%ebx)
0863d968 +0x1e79:  jmp    0863dba1 <+0x20b2>
0863d96d +0x1e7e:  movl   $"vector::_M_insert_aux",0x8(%esp)
0863d975 +0x1e86:  movl   $0x1,0x4(%esp)
0863d97d +0x1e8e:  mov    0x8(%ebp),%eax
0863d980 +0x1e91:  mov    %eax,(%esp)
0863d983 +0x1e94:  call   0863df0c <+0x241d>
0863d988 +0x1e99:  mov    %eax,-0x18(%ebp)
0863d98b +0x1e9c:  lea    -0x1c(%ebp),%eax
0863d98e +0x1e9f:  mov    0x8(%ebp),%edx
0863d991 +0x1ea2:  mov    %edx,0x4(%esp)
0863d995 +0x1ea6:  mov    %eax,(%esp)
0863d998 +0x1ea9:  call   080f667a <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x367>  ; global constructors keyed to GameserverDemonManagerInstance()+0x367
0863d99d +0x1eae:  sub    $0x4,%esp
0863d9a0 +0x1eb1:  lea    -0x1c(%ebp),%eax
0863d9a3 +0x1eb4:  mov    %eax,0x4(%esp)
0863d9a7 +0x1eb8:  lea    0xc(%ebp),%eax
0863d9aa +0x1ebb:  mov    %eax,(%esp)
0863d9ad +0x1ebe:  call   080f693f <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x62c>  ; global constructors keyed to GameserverDemonManagerInstance()+0x62c
0863d9b2 +0x1ec3:  mov    %eax,-0x14(%ebp)
0863d9b5 +0x1ec6:  mov    0x8(%ebp),%eax
0863d9b8 +0x1ec9:  mov    -0x18(%ebp),%edx
0863d9bb +0x1ecc:  mov    %edx,0x4(%esp)
0863d9bf +0x1ed0:  mov    %eax,(%esp)
0863d9c2 +0x1ed3:  call   0863dfb2 <+0x24c3>
0863d9c7 +0x1ed8:  mov    %eax,-0x10(%ebp)
0863d9ca +0x1edb:  mov    -0x10(%ebp),%eax
0863d9cd +0x1ede:  mov    %eax,-0xc(%ebp)
0863d9d0 +0x1ee1:  mov    0x10(%ebp),%eax
0863d9d3 +0x1ee4:  mov    %eax,(%esp)
0863d9d6 +0x1ee7:  call   0863df03 <+0x2414>
0863d9db +0x1eec:  mov    %eax,%edx
0863d9dd +0x1eee:  mov    -0x14(%ebp),%eax
0863d9e0 +0x1ef1:  shl    $0x2,%eax
0863d9e3 +0x1ef4:  lea    0x0(,%eax,8),%ecx
0863d9ea +0x1efb:  mov    %ecx,%ebx
0863d9ec +0x1efd:  sub    %eax,%ebx
0863d9ee +0x1eff:  mov    %ebx,%eax
0863d9f0 +0x1f01:  mov    %eax,%ecx
0863d9f2 +0x1f03:  add    -0x10(%ebp),%ecx
0863d9f5 +0x1f06:  mov    0x8(%ebp),%eax
0863d9f8 +0x1f09:  mov    %edx,0x8(%esp)
0863d9fc +0x1f0d:  mov    %ecx,0x4(%esp)
0863da00 +0x1f11:  mov    %eax,(%esp)
0863da03 +0x1f14:  call   0863d858 <+0x1d69>
0863da08 +0x1f19:  movl   $0x0,-0xc(%ebp)
0863da0f +0x1f20:  mov    0x8(%ebp),%eax
0863da12 +0x1f23:  mov    %eax,(%esp)
0863da15 +0x1f26:  call   080f662e <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x31b>  ; global constructors keyed to GameserverDemonManagerInstance()+0x31b
0863da1a +0x1f2b:  mov    %eax,%ebx
0863da1c +0x1f2d:  lea    0xc(%ebp),%eax
0863da1f +0x1f30:  mov    %eax,(%esp)
0863da22 +0x1f33:  call   080f6cac <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x999>  ; global constructors keyed to GameserverDemonManagerInstance()+0x999
0863da27 +0x1f38:  mov    (%eax),%edx
0863da29 +0x1f3a:  mov    0x8(%ebp),%eax
0863da2c +0x1f3d:  mov    (%eax),%eax
0863da2e +0x1f3f:  mov    %ebx,0xc(%esp)
0863da32 +0x1f43:  mov    -0x10(%ebp),%ecx
0863da35 +0x1f46:  mov    %ecx,0x8(%esp)
0863da39 +0x1f4a:  mov    %edx,0x4(%esp)
0863da3d +0x1f4e:  mov    %eax,(%esp)
0863da40 +0x1f51:  call   0863dfe1 <+0x24f2>
0863da45 +0x1f56:  mov    %eax,-0xc(%ebp)
0863da48 +0x1f59:  addl   $0x1c,-0xc(%ebp)
0863da4c +0x1f5d:  mov    0x8(%ebp),%eax
0863da4f +0x1f60:  mov    %eax,(%esp)
0863da52 +0x1f63:  call   080f662e <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x31b>  ; global constructors keyed to GameserverDemonManagerInstance()+0x31b
0863da57 +0x1f68:  mov    %eax,%ebx
0863da59 +0x1f6a:  mov    0x8(%ebp),%eax
0863da5c +0x1f6d:  mov    0x4(%eax),%esi
0863da5f +0x1f70:  lea    0xc(%ebp),%eax
0863da62 +0x1f73:  mov    %eax,(%esp)
0863da65 +0x1f76:  call   080f6cac <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x999>  ; global constructors keyed to GameserverDemonManagerInstance()+0x999
0863da6a +0x1f7b:  mov    (%eax),%eax
0863da6c +0x1f7d:  mov    %ebx,0xc(%esp)
0863da70 +0x1f81:  mov    -0xc(%ebp),%edx
0863da73 +0x1f84:  mov    %edx,0x8(%esp)
0863da77 +0x1f88:  mov    %esi,0x4(%esp)
0863da7b +0x1f8c:  mov    %eax,(%esp)
0863da7e +0x1f8f:  call   0863dfe1 <+0x24f2>
0863da83 +0x1f94:  mov    %eax,-0xc(%ebp)
0863da86 +0x1f97:  mov    0x8(%ebp),%eax
0863da89 +0x1f9a:  mov    %eax,(%esp)
0863da8c +0x1f9d:  call   080f662e <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x31b>  ; global constructors keyed to GameserverDemonManagerInstance()+0x31b
0863da91 +0x1fa2:  mov    0x8(%ebp),%edx
0863da94 +0x1fa5:  mov    0x4(%edx),%ecx
0863da97 +0x1fa8:  mov    0x8(%ebp),%edx
0863da9a +0x1fab:  mov    (%edx),%edx
0863da9c +0x1fad:  mov    %eax,0x8(%esp)
0863daa0 +0x1fb1:  mov    %ecx,0x4(%esp)
0863daa4 +0x1fb5:  mov    %edx,(%esp)
0863daa7 +0x1fb8:  call   080f6636 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x323>  ; global constructors keyed to GameserverDemonManagerInstance()+0x323
0863daac +0x1fbd:  mov    0x8(%ebp),%eax
0863daaf +0x1fc0:  mov    0x8(%eax),%eax
0863dab2 +0x1fc3:  mov    %eax,%edx
0863dab4 +0x1fc5:  mov    0x8(%ebp),%eax
0863dab7 +0x1fc8:  mov    (%eax),%eax
0863dab9 +0x1fca:  mov    %edx,%ecx
0863dabb +0x1fcc:  sub    %eax,%ecx
0863dabd +0x1fce:  mov    %ecx,%eax
0863dabf +0x1fd0:  sar    $0x2,%eax
0863dac2 +0x1fd3:  imul   $0xb6db6db7,%eax,%eax
0863dac8 +0x1fd9:  mov    %eax,%ecx
0863daca +0x1fdb:  mov    0x8(%ebp),%eax
0863dacd +0x1fde:  mov    (%eax),%edx
0863dacf +0x1fe0:  mov    0x8(%ebp),%eax
0863dad2 +0x1fe3:  mov    %ecx,0x8(%esp)
0863dad6 +0x1fe7:  mov    %edx,0x4(%esp)
0863dada +0x1feb:  mov    %eax,(%esp)
0863dadd +0x1fee:  call   080f6884 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x571>  ; global constructors keyed to GameserverDemonManagerInstance()+0x571
0863dae2 +0x1ff3:  mov    0x8(%ebp),%eax
0863dae5 +0x1ff6:  mov    -0x10(%ebp),%edx
0863dae8 +0x1ff9:  mov    %edx,(%eax)
0863daea +0x1ffb:  mov    0x8(%ebp),%eax
0863daed +0x1ffe:  mov    -0xc(%ebp),%edx
0863daf0 +0x2001:  mov    %edx,0x4(%eax)
0863daf3 +0x2004:  mov    -0x18(%ebp),%eax
0863daf6 +0x2007:  shl    $0x2,%eax
0863daf9 +0x200a:  lea    0x0(,%eax,8),%edx
0863db00 +0x2011:  mov    %edx,%ebx
0863db02 +0x2013:  sub    %eax,%ebx
0863db04 +0x2015:  mov    %ebx,%eax
0863db06 +0x2017:  mov    %eax,%edx
0863db08 +0x2019:  add    -0x10(%ebp),%edx
0863db0b +0x201c:  mov    0x8(%ebp),%eax
0863db0e +0x201f:  mov    %edx,0x8(%eax)
0863db11 +0x2022:  jmp    0863dba1 <+0x20b2>
0863db16 +0x2027:  mov    %eax,(%esp)
0863db19 +0x202a:  call   08725ce0 <__cxa_begin_catch>
0863db1e +0x202f:  cmpl   $0x0,-0xc(%ebp)
0863db22 +0x2033:  jne    0863db4d <+0x205e>
0863db24 +0x2035:  mov    -0x14(%ebp),%eax
0863db27 +0x2038:  shl    $0x2,%eax
0863db2a +0x203b:  lea    0x0(,%eax,8),%edx
0863db31 +0x2042:  mov    %edx,%ecx
0863db33 +0x2044:  sub    %eax,%ecx
0863db35 +0x2046:  mov    %ecx,%eax
0863db37 +0x2048:  mov    %eax,%edx
0863db39 +0x204a:  add    -0x10(%ebp),%edx
0863db3c +0x204d:  mov    0x8(%ebp),%eax
0863db3f +0x2050:  mov    %edx,0x4(%esp)
0863db43 +0x2054:  mov    %eax,(%esp)
0863db46 +0x2057:  call   0863dd9c <+0x22ad>
0863db4b +0x205c:  jmp    0863db6e <+0x207f>
0863db4d +0x205e:  mov    0x8(%ebp),%eax
0863db50 +0x2061:  mov    %eax,(%esp)
0863db53 +0x2064:  call   080f662e <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x31b>  ; global constructors keyed to GameserverDemonManagerInstance()+0x31b
0863db58 +0x2069:  mov    %eax,0x8(%esp)
0863db5c +0x206d:  mov    -0xc(%ebp),%eax
0863db5f +0x2070:  mov    %eax,0x4(%esp)
0863db63 +0x2074:  mov    -0x10(%ebp),%eax
0863db66 +0x2077:  mov    %eax,(%esp)
0863db69 +0x207a:  call   080f6636 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x323>  ; global constructors keyed to GameserverDemonManagerInstance()+0x323
0863db6e +0x207f:  mov    0x8(%ebp),%eax
0863db71 +0x2082:  mov    -0x18(%ebp),%edx
0863db74 +0x2085:  mov    %edx,0x8(%esp)
0863db78 +0x2089:  mov    -0x10(%ebp),%edx
0863db7b +0x208c:  mov    %edx,0x4(%esp)
0863db7f +0x2090:  mov    %eax,(%esp)
0863db82 +0x2093:  call   080f6884 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x571>  ; global constructors keyed to GameserverDemonManagerInstance()+0x571
0863db87 +0x2098:  call   08724be0 <__cxa_rethrow>
0863db8c +0x209d:  mov    %edx,%ebx
0863db8e +0x209f:  mov    %eax,%esi
0863db90 +0x20a1:  call   08725c30 <__cxa_end_catch>
0863db95 +0x20a6:  mov    %esi,%eax
0863db97 +0x20a8:  mov    %ebx,%edx
0863db99 +0x20aa:  mov    %eax,(%esp)
0863db9c +0x20ad:  call   08ae3750 <_Unwind_Resume>
0863dba1 +0x20b2:  lea    -0x8(%ebp),%esp
0863dba4 +0x20b5:  add    $0x0,%esp
0863dba7 +0x20b8:  pop    %ebx
0863dba8 +0x20b9:  pop    %esi
0863dba9 +0x20ba:  pop    %ebp
0863dbaa +0x20bb:  ret
0863dbab +0x20bc:  nop
0863dbac +0x20bd:  push   %ebp
0863dbad +0x20be:  mov    %esp,%ebp
0863dbaf +0x20c0:  push   %esi
0863dbb0 +0x20c1:  push   %ebx
0863dbb1 +0x20c2:  sub    $0x20,%esp
0863dbb4 +0x20c5:  mov    0x8(%ebp),%ebx
0863dbb7 +0x20c8:  mov    0xc(%ebp),%eax
0863dbba +0x20cb:  mov    (%eax),%edx
0863dbbc +0x20cd:  mov    0x10(%ebp),%eax
0863dbbf +0x20d0:  mov    (%eax),%eax
0863dbc1 +0x20d2:  shl    $0x2,%eax
0863dbc4 +0x20d5:  lea    0x0(,%eax,8),%ecx
0863dbcb +0x20dc:  mov    %ecx,%esi
0863dbcd +0x20de:  sub    %eax,%esi
0863dbcf +0x20e0:  mov    %esi,%eax
0863dbd1 +0x20e2:  neg    %eax
0863dbd3 +0x20e4:  lea    (%edx,%eax,1),%eax
0863dbd6 +0x20e7:  mov    %eax,-0xc(%ebp)
0863dbd9 +0x20ea:  lea    -0xc(%ebp),%eax
0863dbdc +0x20ed:  mov    %eax,0x4(%esp)
0863dbe0 +0x20f1:  mov    %ebx,(%esp)
0863dbe3 +0x20f4:  call   080f6930 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x61d>  ; global constructors keyed to GameserverDemonManagerInstance()+0x61d
0863dbe8 +0x20f9:  mov    %ebx,%eax
0863dbea +0x20fb:  add    $0x20,%esp
0863dbed +0x20fe:  pop    %ebx
0863dbee +0x20ff:  pop    %esi
0863dbef +0x2100:  pop    %ebp
0863dbf0 +0x2101:  ret    $0x4
0863dbf3 +0x2104:  nop
0863dbf4 +0x2105:  push   %ebp
0863dbf5 +0x2106:  mov    %esp,%ebp
0863dbf7 +0x2108:  push   %ebx
0863dbf8 +0x2109:  sub    $0x24,%esp
0863dbfb +0x210c:  mov    0x8(%ebp),%ebx
0863dbfe +0x210f:  mov    0xc(%ebp),%eax
0863dc01 +0x2112:  mov    0x4(%eax),%eax
0863dc04 +0x2115:  mov    %eax,-0xc(%ebp)
0863dc07 +0x2118:  lea    -0xc(%ebp),%eax
0863dc0a +0x211b:  mov    %eax,0x4(%esp)
0863dc0e +0x211f:  mov    %ebx,(%esp)
0863dc11 +0x2122:  call   0863e034 <+0x2545>
0863dc16 +0x2127:  mov    %ebx,%eax
0863dc18 +0x2129:  add    $0x24,%esp
0863dc1b +0x212c:  pop    %ebx
0863dc1c +0x212d:  pop    %ebp
0863dc1d +0x212e:  ret    $0x4
0863dc20 +0x2131:  push   %ebp
0863dc21 +0x2132:  mov    %esp,%ebp
0863dc23 +0x2134:  push   %ebx
0863dc24 +0x2135:  sub    $0x24,%esp
0863dc27 +0x2138:  mov    0x8(%ebp),%ebx
0863dc2a +0x213b:  mov    0xc(%ebp),%eax
0863dc2d +0x213e:  mov    (%eax),%eax
0863dc2f +0x2140:  mov    %eax,-0xc(%ebp)
0863dc32 +0x2143:  lea    -0xc(%ebp),%eax
0863dc35 +0x2146:  mov    %eax,0x4(%esp)
0863dc39 +0x214a:  mov    %ebx,(%esp)
0863dc3c +0x214d:  call   0863e034 <+0x2545>
0863dc41 +0x2152:  mov    %ebx,%eax
0863dc43 +0x2154:  add    $0x24,%esp
0863dc46 +0x2157:  pop    %ebx
0863dc47 +0x2158:  pop    %ebp
0863dc48 +0x2159:  ret    $0x4
0863dc4b +0x215c:  push   %ebp
0863dc4c +0x215d:  mov    %esp,%ebp
0863dc4e +0x215f:  push   %ebx
0863dc4f +0x2160:  sub    $0x14,%esp
0863dc52 +0x2163:  mov    0x8(%ebp),%eax
0863dc55 +0x2166:  mov    %eax,(%esp)
0863dc58 +0x2169:  call   0863e044 <+0x2555>
0863dc5d +0x216e:  mov    (%eax),%ebx
0863dc5f +0x2170:  mov    0xc(%ebp),%eax
0863dc62 +0x2173:  mov    %eax,(%esp)
0863dc65 +0x2176:  call   0863e044 <+0x2555>
0863dc6a +0x217b:  mov    (%eax),%eax
0863dc6c +0x217d:  cmp    %eax,%ebx
0863dc6e +0x217f:  sete   %al
0863dc71 +0x2182:  add    $0x14,%esp
0863dc74 +0x2185:  pop    %ebx
0863dc75 +0x2186:  pop    %ebp
0863dc76 +0x2187:  ret
0863dc77 +0x2188:  nop
0863dc78 +0x2189:  push   %ebp
0863dc79 +0x218a:  mov    %esp,%ebp
0863dc7b +0x218c:  mov    0x8(%ebp),%eax
0863dc7e +0x218f:  mov    (%eax),%eax
0863dc80 +0x2191:  pop    %ebp
0863dc81 +0x2192:  ret
0863dc82 +0x2193:  push   %ebp
0863dc83 +0x2194:  mov    %esp,%ebp
0863dc85 +0x2196:  mov    0x8(%ebp),%eax
0863dc88 +0x2199:  mov    (%eax),%eax
0863dc8a +0x219b:  lea    -0x1c(%eax),%edx
0863dc8d +0x219e:  mov    0x8(%ebp),%eax
0863dc90 +0x21a1:  mov    %edx,(%eax)
0863dc92 +0x21a3:  mov    0x8(%ebp),%eax
0863dc95 +0x21a6:  pop    %ebp
0863dc96 +0x21a7:  ret
0863dc97 +0x21a8:  push   %ebp
0863dc98 +0x21a9:  mov    %esp,%ebp
0863dc9a +0x21ab:  push   %esi
0863dc9b +0x21ac:  push   %ebx
0863dc9c +0x21ad:  sub    $0x50,%esp
0863dc9f +0x21b0:  lea    0x10(%ebp),%eax
0863dca2 +0x21b3:  mov    %eax,(%esp)
0863dca5 +0x21b6:  call   080f69be <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6ab>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6ab
0863dcaa +0x21bb:  mov    %eax,(%esp)
0863dcad +0x21be:  call   080f69c8 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6b5>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6b5
0863dcb2 +0x21c3:  mov    (%eax),%edx
0863dcb4 +0x21c5:  mov    %edx,-0x24(%ebp)
0863dcb7 +0x21c8:  mov    0x4(%eax),%edx
0863dcba +0x21cb:  mov    %edx,-0x20(%ebp)
0863dcbd +0x21ce:  mov    0x8(%eax),%edx
0863dcc0 +0x21d1:  mov    %edx,-0x1c(%ebp)
0863dcc3 +0x21d4:  mov    0xc(%eax),%edx
0863dcc6 +0x21d7:  mov    %edx,-0x18(%ebp)
0863dcc9 +0x21da:  mov    0x10(%eax),%edx
0863dccc +0x21dd:  mov    %edx,-0x14(%ebp)
0863dccf +0x21e0:  mov    0x14(%eax),%edx
0863dcd2 +0x21e3:  mov    %edx,-0x10(%ebp)
0863dcd5 +0x21e6:  mov    0x18(%eax),%eax
0863dcd8 +0x21e9:  mov    %eax,-0xc(%ebp)
0863dcdb +0x21ec:  lea    0x10(%ebp),%eax
0863dcde +0x21ef:  mov    %eax,(%esp)
0863dce1 +0x21f2:  call   080f69be <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6ab>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6ab
0863dce6 +0x21f7:  mov    %eax,%ebx
0863dce8 +0x21f9:  lea    0x8(%ebp),%eax
0863dceb +0x21fc:  mov    %eax,(%esp)
0863dcee +0x21ff:  call   080f69be <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6ab>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6ab
0863dcf3 +0x2204:  mov    %eax,(%esp)
0863dcf6 +0x2207:  call   080f69c8 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6b5>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6b5
0863dcfb +0x220c:  mov    (%eax),%edx
0863dcfd +0x220e:  mov    %edx,(%ebx)
0863dcff +0x2210:  mov    0x4(%eax),%edx
0863dd02 +0x2213:  mov    %edx,0x4(%ebx)
0863dd05 +0x2216:  mov    0x8(%eax),%edx
0863dd08 +0x2219:  mov    %edx,0x8(%ebx)
0863dd0b +0x221c:  mov    0xc(%eax),%edx
0863dd0e +0x221f:  mov    %edx,0xc(%ebx)
0863dd11 +0x2222:  mov    0x10(%eax),%edx
0863dd14 +0x2225:  mov    %edx,0x10(%ebx)
0863dd17 +0x2228:  mov    0x14(%eax),%edx
0863dd1a +0x222b:  mov    %edx,0x14(%ebx)
0863dd1d +0x222e:  mov    0x18(%eax),%eax
0863dd20 +0x2231:  mov    %eax,0x18(%ebx)
0863dd23 +0x2234:  lea    -0x24(%ebp),%eax
0863dd26 +0x2237:  mov    %eax,(%esp)
0863dd29 +0x223a:  call   080f69c8 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6b5>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6b5
0863dd2e +0x223f:  mov    %eax,%ebx
0863dd30 +0x2241:  lea    0x8(%ebp),%edx
0863dd33 +0x2244:  mov    %edx,0x4(%esp)
0863dd37 +0x2248:  lea    0xc(%ebp),%eax
0863dd3a +0x224b:  mov    %eax,(%esp)
0863dd3d +0x224e:  call   080f693f <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x62c>  ; global constructors keyed to GameserverDemonManagerInstance()+0x62c
0863dd42 +0x2253:  mov    %esi,%edx
0863dd44 +0x2255:  mov    %dl,0x28(%esp)
0863dd48 +0x2259:  mov    (%ebx),%edx
0863dd4a +0x225b:  mov    %edx,0xc(%esp)
0863dd4e +0x225f:  mov    0x4(%ebx),%edx
0863dd51 +0x2262:  mov    %edx,0x10(%esp)
0863dd55 +0x2266:  mov    0x8(%ebx),%edx
0863dd58 +0x2269:  mov    %edx,0x14(%esp)
0863dd5c +0x226d:  mov    0xc(%ebx),%edx
0863dd5f +0x2270:  mov    %edx,0x18(%esp)
0863dd63 +0x2274:  mov    0x10(%ebx),%edx
0863dd66 +0x2277:  mov    %edx,0x1c(%esp)
0863dd6a +0x227b:  mov    0x14(%ebx),%edx
0863dd6d +0x227e:  mov    %edx,0x20(%esp)
0863dd71 +0x2282:  mov    0x18(%ebx),%edx
0863dd74 +0x2285:  mov    %edx,0x24(%esp)
0863dd78 +0x2289:  mov    %eax,0x8(%esp)
0863dd7c +0x228d:  movl   $0x0,0x4(%esp)
0863dd84 +0x2295:  mov    0x8(%ebp),%eax
0863dd87 +0x2298:  mov    %eax,(%esp)
0863dd8a +0x229b:  call   080f69d0 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6bd>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6bd
0863dd8f +0x22a0:  add    $0x50,%esp
0863dd92 +0x22a3:  pop    %ebx
0863dd93 +0x22a4:  pop    %esi
0863dd94 +0x22a5:  pop    %ebp
0863dd95 +0x22a6:  ret
0863dd96 +0x22a7:  push   %ebp
0863dd97 +0x22a8:  mov    %esp,%ebp
0863dd99 +0x22aa:  pop    %ebp
0863dd9a +0x22ab:  ret
0863dd9b +0x22ac:  nop
0863dd9c +0x22ad:  push   %ebp
0863dd9d +0x22ae:  mov    %esp,%ebp
0863dd9f +0x22b0:  sub    $0x18,%esp
0863dda2 +0x22b3:  mov    0xc(%ebp),%eax
0863dda5 +0x22b6:  mov    %eax,(%esp)
0863dda8 +0x22b9:  call   0863dd96 <+0x22a7>
0863ddad +0x22be:  leave
0863ddae +0x22bf:  ret
0863ddaf +0x22c0:  nop
0863ddb0 +0x22c1:  push   %ebp
0863ddb1 +0x22c2:  mov    %esp,%ebp
0863ddb3 +0x22c4:  push   %ebx
0863ddb4 +0x22c5:  sub    $0x14,%esp
0863ddb7 +0x22c8:  mov    0x8(%ebp),%ebx
0863ddba +0x22cb:  jmp    0863de08 <+0x2319>
0863ddbc +0x22cd:  mov    0x10(%ebp),%eax
0863ddbf +0x22d0:  mov    %eax,(%esp)
0863ddc2 +0x22d3:  call   0863e04c <+0x255d>
0863ddc7 +0x22d8:  mov    0xc(%ebp),%edx
0863ddca +0x22db:  mov    0x18(%ebp),%ecx
0863ddcd +0x22de:  mov    %ecx,0x8(%esp)
0863ddd1 +0x22e2:  mov    %eax,0x4(%esp)
0863ddd5 +0x22e6:  mov    %edx,(%esp)
0863ddd8 +0x22e9:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0863dddd +0x22ee:  xor    $0x1,%eax
0863dde0 +0x22f1:  test   %al,%al
0863dde2 +0x22f3:  je     0863ddfa <+0x230b>
0863dde4 +0x22f5:  mov    0x10(%ebp),%eax
0863dde7 +0x22f8:  mov    %eax,0x14(%ebp)
0863ddea +0x22fb:  mov    0x10(%ebp),%eax
0863dded +0x22fe:  mov    %eax,(%esp)
0863ddf0 +0x2301:  call   083b7f00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x51ecc>  ; global constructors keyed to CServerEvent::m_nExpRate+0x51ecc
0863ddf5 +0x2306:  mov    %eax,0x10(%ebp)
0863ddf8 +0x2309:  jmp    0863de08 <+0x2319>
0863ddfa +0x230b:  mov    0x10(%ebp),%eax
0863ddfd +0x230e:  mov    %eax,(%esp)
0863de00 +0x2311:  call   083b7ef5 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x51ec1>  ; global constructors keyed to CServerEvent::m_nExpRate+0x51ec1
0863de05 +0x2316:  mov    %eax,0x10(%ebp)
0863de08 +0x2319:  cmpl   $0x0,0x10(%ebp)
0863de0c +0x231d:  setne  %al
0863de0f +0x2320:  test   %al,%al
0863de11 +0x2322:  jne    0863ddbc <+0x22cd>
0863de13 +0x2324:  mov    0x14(%ebp),%eax
0863de16 +0x2327:  mov    %eax,0x4(%esp)
0863de1a +0x232b:  mov    %ebx,(%esp)
0863de1d +0x232e:  call   0863de62 <+0x2373>
0863de22 +0x2333:  mov    %ebx,%eax
0863de24 +0x2335:  add    $0x14,%esp
0863de27 +0x2338:  pop    %ebx
0863de28 +0x2339:  pop    %ebp
0863de29 +0x233a:  ret    $0x4
0863de2c +0x233d:  push   %ebp
0863de2d +0x233e:  mov    %esp,%ebp
0863de2f +0x2340:  sub    $0x28,%esp
0863de32 +0x2343:  mov    0x8(%ebp),%eax
0863de35 +0x2346:  mov    %eax,(%esp)
0863de38 +0x2349:  call   0863e06e <+0x257f>
0863de3d +0x234e:  mov    %eax,0x4(%esp)
0863de41 +0x2352:  lea    -0x9(%ebp),%eax
0863de44 +0x2355:  mov    %eax,(%esp)
0863de47 +0x2358:  call   0863e07a <+0x258b>
0863de4c +0x235d:  leave
0863de4d +0x235e:  ret
0863de4e +0x235f:  push   %ebp
0863de4f +0x2360:  mov    %esp,%ebp
0863de51 +0x2362:  mov    0x8(%ebp),%eax
0863de54 +0x2365:  mov    (%eax),%edx
0863de56 +0x2367:  mov    0xc(%ebp),%eax
0863de59 +0x236a:  mov    (%eax),%eax
0863de5b +0x236c:  cmp    %eax,%edx
0863de5d +0x236e:  sete   %al
0863de60 +0x2371:  pop    %ebp
0863de61 +0x2372:  ret
0863de62 +0x2373:  push   %ebp
0863de63 +0x2374:  mov    %esp,%ebp
0863de65 +0x2376:  mov    0xc(%ebp),%edx
0863de68 +0x2379:  mov    0x8(%ebp),%eax
0863de6b +0x237c:  mov    %edx,(%eax)
0863de6d +0x237e:  pop    %ebp
0863de6e +0x237f:  ret
0863de6f +0x2380:  nop
0863de70 +0x2381:  push   %ebp
0863de71 +0x2382:  mov    %esp,%ebp
0863de73 +0x2384:  push   %ebx
0863de74 +0x2385:  sub    $0x14,%esp
0863de77 +0x2388:  mov    0x10(%ebp),%eax
0863de7a +0x238b:  mov    %eax,(%esp)
0863de7d +0x238e:  call   0863e082 <+0x2593>
0863de82 +0x2393:  mov    %eax,%ebx
0863de84 +0x2395:  mov    0xc(%ebp),%eax
0863de87 +0x2398:  mov    %eax,0x4(%esp)
0863de8b +0x239c:  movl   $0x1c,(%esp)
0863de92 +0x23a3:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0863de97 +0x23a8:  mov    %eax,%edx
0863de99 +0x23aa:  test   %edx,%edx
0863de9b +0x23ac:  je     0863dec5 <+0x23d6>
0863de9d +0x23ae:  mov    (%ebx),%edx
0863de9f +0x23b0:  mov    %edx,(%eax)
0863dea1 +0x23b2:  mov    0x4(%ebx),%edx
0863dea4 +0x23b5:  mov    %edx,0x4(%eax)
0863dea7 +0x23b8:  mov    0x8(%ebx),%edx
0863deaa +0x23bb:  mov    %edx,0x8(%eax)
0863dead +0x23be:  mov    0xc(%ebx),%edx
0863deb0 +0x23c1:  mov    %edx,0xc(%eax)
0863deb3 +0x23c4:  mov    0x10(%ebx),%edx
0863deb6 +0x23c7:  mov    %edx,0x10(%eax)
0863deb9 +0x23ca:  mov    0x14(%ebx),%edx
0863debc +0x23cd:  mov    %edx,0x14(%eax)
0863debf +0x23d0:  mov    0x18(%ebx),%edx
0863dec2 +0x23d3:  mov    %edx,0x18(%eax)
0863dec5 +0x23d6:  add    $0x14,%esp
0863dec8 +0x23d9:  pop    %ebx
0863dec9 +0x23da:  pop    %ebp
0863deca +0x23db:  ret
0863decb +0x23dc:  push   %ebp
0863decc +0x23dd:  mov    %esp,%ebp
0863dece +0x23df:  push   %ebx
0863decf +0x23e0:  sub    $0x14,%esp
0863ded2 +0x23e3:  mov    0xc(%ebp),%eax
0863ded5 +0x23e6:  mov    %eax,(%esp)
0863ded8 +0x23e9:  call   0863e08a <+0x259b>
0863dedd +0x23ee:  mov    %eax,%ebx
0863dedf +0x23f0:  mov    0x8(%ebp),%eax
0863dee2 +0x23f3:  mov    %eax,(%esp)
0863dee5 +0x23f6:  call   0863e08a <+0x259b>
0863deea +0x23fb:  mov    0x10(%ebp),%edx
0863deed +0x23fe:  mov    %edx,0x8(%esp)
0863def1 +0x2402:  mov    %ebx,0x4(%esp)
0863def5 +0x2406:  mov    %eax,(%esp)
0863def8 +0x2409:  call   0863e092 <+0x25a3>
0863defd +0x240e:  add    $0x14,%esp
0863df00 +0x2411:  pop    %ebx
0863df01 +0x2412:  pop    %ebp
0863df02 +0x2413:  ret
0863df03 +0x2414:  push   %ebp
0863df04 +0x2415:  mov    %esp,%ebp
0863df06 +0x2417:  mov    0x8(%ebp),%eax
0863df09 +0x241a:  pop    %ebp
0863df0a +0x241b:  ret
0863df0b +0x241c:  nop
0863df0c +0x241d:  push   %ebp
0863df0d +0x241e:  mov    %esp,%ebp
0863df0f +0x2420:  push   %ebx
0863df10 +0x2421:  sub    $0x24,%esp
0863df13 +0x2424:  mov    0x8(%ebp),%eax
0863df16 +0x2427:  mov    %eax,(%esp)
0863df19 +0x242a:  call   0863e0d6 <+0x25e7>
0863df1e +0x242f:  mov    %eax,%ebx
0863df20 +0x2431:  mov    0x8(%ebp),%eax
0863df23 +0x2434:  mov    %eax,(%esp)
0863df26 +0x2437:  call   0847e962 <_GLOBAL__I__ZN14DispatchThreadC2Ev+0x122>  ; global constructors keyed to DispatchThread::DispatchThread()+0x122
0863df2b +0x243c:  mov    %ebx,%edx
0863df2d +0x243e:  sub    %eax,%edx
0863df2f +0x2440:  mov    0xc(%ebp),%eax
0863df32 +0x2443:  cmp    %eax,%edx
0863df34 +0x2445:  setb   %al
0863df37 +0x2448:  test   %al,%al
0863df39 +0x244a:  je     0863df46 <+0x2457>
0863df3b +0x244c:  mov    0x10(%ebp),%eax
0863df3e +0x244f:  mov    %eax,(%esp)
0863df41 +0x2452:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0863df46 +0x2457:  mov    0x8(%ebp),%eax
0863df49 +0x245a:  mov    %eax,(%esp)
0863df4c +0x245d:  call   0847e962 <_GLOBAL__I__ZN14DispatchThreadC2Ev+0x122>  ; global constructors keyed to DispatchThread::DispatchThread()+0x122
0863df51 +0x2462:  mov    %eax,%ebx
0863df53 +0x2464:  mov    0x8(%ebp),%eax
0863df56 +0x2467:  mov    %eax,(%esp)
0863df59 +0x246a:  call   0847e962 <_GLOBAL__I__ZN14DispatchThreadC2Ev+0x122>  ; global constructors keyed to DispatchThread::DispatchThread()+0x122
0863df5e +0x246f:  mov    %eax,-0x10(%ebp)
0863df61 +0x2472:  lea    0xc(%ebp),%eax
0863df64 +0x2475:  mov    %eax,0x4(%esp)
0863df68 +0x2479:  lea    -0x10(%ebp),%eax
0863df6b +0x247c:  mov    %eax,(%esp)
0863df6e +0x247f:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0863df73 +0x2484:  mov    (%eax),%eax
0863df75 +0x2486:  lea    (%ebx,%eax,1),%eax
0863df78 +0x2489:  mov    %eax,-0xc(%ebp)
0863df7b +0x248c:  mov    0x8(%ebp),%eax
0863df7e +0x248f:  mov    %eax,(%esp)
0863df81 +0x2492:  call   0847e962 <_GLOBAL__I__ZN14DispatchThreadC2Ev+0x122>  ; global constructors keyed to DispatchThread::DispatchThread()+0x122
0863df86 +0x2497:  cmp    -0xc(%ebp),%eax
0863df89 +0x249a:  ja     0863df9b <+0x24ac>
0863df8b +0x249c:  mov    0x8(%ebp),%eax
0863df8e +0x249f:  mov    %eax,(%esp)
0863df91 +0x24a2:  call   0863e0d6 <+0x25e7>
0863df96 +0x24a7:  cmp    -0xc(%ebp),%eax
0863df99 +0x24aa:  jae    0863dfa8 <+0x24b9>
0863df9b +0x24ac:  mov    0x8(%ebp),%eax
0863df9e +0x24af:  mov    %eax,(%esp)
0863dfa1 +0x24b2:  call   0863e0d6 <+0x25e7>
0863dfa6 +0x24b7:  jmp    0863dfab <+0x24bc>
0863dfa8 +0x24b9:  mov    -0xc(%ebp),%eax
0863dfab +0x24bc:  add    $0x24,%esp
0863dfae +0x24bf:  pop    %ebx
0863dfaf +0x24c0:  pop    %ebp
0863dfb0 +0x24c1:  ret
0863dfb1 +0x24c2:  nop
0863dfb2 +0x24c3:  push   %ebp
0863dfb3 +0x24c4:  mov    %esp,%ebp
0863dfb5 +0x24c6:  sub    $0x18,%esp
0863dfb8 +0x24c9:  cmpl   $0x0,0xc(%ebp)
0863dfbc +0x24cd:  je     0863dfda <+0x24eb>
0863dfbe +0x24cf:  mov    0x8(%ebp),%eax
0863dfc1 +0x24d2:  movl   $0x0,0x8(%esp)
0863dfc9 +0x24da:  mov    0xc(%ebp),%edx
0863dfcc +0x24dd:  mov    %edx,0x4(%esp)
0863dfd0 +0x24e1:  mov    %eax,(%esp)
0863dfd3 +0x24e4:  call   0863e0f2 <+0x2603>
0863dfd8 +0x24e9:  jmp    0863dfdf <+0x24f0>
0863dfda +0x24eb:  mov    $0x0,%eax
0863dfdf +0x24f0:  leave
0863dfe0 +0x24f1:  ret
0863dfe1 +0x24f2:  push   %ebp
0863dfe2 +0x24f3:  mov    %esp,%ebp
0863dfe4 +0x24f5:  sub    $0x28,%esp
0863dfe7 +0x24f8:  lea    -0x10(%ebp),%eax
0863dfea +0x24fb:  lea    0xc(%ebp),%edx
0863dfed +0x24fe:  mov    %edx,0x4(%esp)
0863dff1 +0x2502:  mov    %eax,(%esp)
0863dff4 +0x2505:  call   0863e137 <+0x2648>
0863dff9 +0x250a:  sub    $0x4,%esp
0863dffc +0x250d:  lea    -0xc(%ebp),%eax
0863dfff +0x2510:  lea    0x8(%ebp),%edx
0863e002 +0x2513:  mov    %edx,0x4(%esp)
0863e006 +0x2517:  mov    %eax,(%esp)
0863e009 +0x251a:  call   0863e137 <+0x2648>
0863e00e +0x251f:  sub    $0x4,%esp
0863e011 +0x2522:  mov    0x14(%ebp),%eax
0863e014 +0x2525:  mov    %eax,0xc(%esp)
0863e018 +0x2529:  mov    0x10(%ebp),%eax
0863e01b +0x252c:  mov    %eax,0x8(%esp)
0863e01f +0x2530:  mov    -0x10(%ebp),%eax
0863e022 +0x2533:  mov    %eax,0x4(%esp)
0863e026 +0x2537:  mov    -0xc(%ebp),%eax
0863e029 +0x253a:  mov    %eax,(%esp)
0863e02c +0x253d:  call   0863e15c <+0x266d>
0863e031 +0x2542:  leave
0863e032 +0x2543:  ret
0863e033 +0x2544:  nop
0863e034 +0x2545:  push   %ebp
0863e035 +0x2546:  mov    %esp,%ebp
0863e037 +0x2548:  mov    0xc(%ebp),%eax
0863e03a +0x254b:  mov    (%eax),%edx
0863e03c +0x254d:  mov    0x8(%ebp),%eax
0863e03f +0x2550:  mov    %edx,(%eax)
0863e041 +0x2552:  pop    %ebp
0863e042 +0x2553:  ret
0863e043 +0x2554:  nop
0863e044 +0x2555:  push   %ebp
0863e045 +0x2556:  mov    %esp,%ebp
0863e047 +0x2558:  mov    0x8(%ebp),%eax
0863e04a +0x255b:  pop    %ebp
0863e04b +0x255c:  ret
0863e04c +0x255d:  push   %ebp
0863e04d +0x255e:  mov    %esp,%ebp
0863e04f +0x2560:  sub    $0x28,%esp
0863e052 +0x2563:  mov    0x8(%ebp),%eax
0863e055 +0x2566:  mov    %eax,(%esp)
0863e058 +0x2569:  call   0863e17d <+0x268e>
0863e05d +0x256e:  mov    %eax,0x4(%esp)
0863e061 +0x2572:  lea    -0x9(%ebp),%eax
0863e064 +0x2575:  mov    %eax,(%esp)
0863e067 +0x2578:  call   0863e07a <+0x258b>
0863e06c +0x257d:  leave
0863e06d +0x257e:  ret
0863e06e +0x257f:  push   %ebp
0863e06f +0x2580:  mov    %esp,%ebp
0863e071 +0x2582:  mov    0x8(%ebp),%eax
0863e074 +0x2585:  add    $0x10,%eax
0863e077 +0x2588:  pop    %ebp
0863e078 +0x2589:  ret
0863e079 +0x258a:  nop
0863e07a +0x258b:  push   %ebp
0863e07b +0x258c:  mov    %esp,%ebp
0863e07d +0x258e:  mov    0xc(%ebp),%eax
0863e080 +0x2591:  pop    %ebp
0863e081 +0x2592:  ret
0863e082 +0x2593:  push   %ebp
0863e083 +0x2594:  mov    %esp,%ebp
0863e085 +0x2596:  mov    0x8(%ebp),%eax
0863e088 +0x2599:  pop    %ebp
0863e089 +0x259a:  ret
0863e08a +0x259b:  push   %ebp
0863e08b +0x259c:  mov    %esp,%ebp
0863e08d +0x259e:  mov    0x8(%ebp),%eax
0863e090 +0x25a1:  pop    %ebp
0863e091 +0x25a2:  ret
0863e092 +0x25a3:  push   %ebp
0863e093 +0x25a4:  mov    %esp,%ebp
0863e095 +0x25a6:  push   %esi
0863e096 +0x25a7:  push   %ebx
0863e097 +0x25a8:  sub    $0x10,%esp
0863e09a +0x25ab:  mov    0x10(%ebp),%eax
0863e09d +0x25ae:  mov    %eax,(%esp)
0863e0a0 +0x25b1:  call   0863e188 <+0x2699>
0863e0a5 +0x25b6:  mov    %eax,%esi
0863e0a7 +0x25b8:  mov    0xc(%ebp),%eax
0863e0aa +0x25bb:  mov    %eax,(%esp)
0863e0ad +0x25be:  call   0863e188 <+0x2699>
0863e0b2 +0x25c3:  mov    %eax,%ebx
0863e0b4 +0x25c5:  mov    0x8(%ebp),%eax
0863e0b7 +0x25c8:  mov    %eax,(%esp)
0863e0ba +0x25cb:  call   0863e188 <+0x2699>
0863e0bf +0x25d0:  mov    %esi,0x8(%esp)
0863e0c3 +0x25d4:  mov    %ebx,0x4(%esp)
0863e0c7 +0x25d8:  mov    %eax,(%esp)
0863e0ca +0x25db:  call   0863e190 <+0x26a1>
0863e0cf +0x25e0:  add    $0x10,%esp
0863e0d2 +0x25e3:  pop    %ebx
0863e0d3 +0x25e4:  pop    %esi
0863e0d4 +0x25e5:  pop    %ebp
0863e0d5 +0x25e6:  ret
0863e0d6 +0x25e7:  push   %ebp
0863e0d7 +0x25e8:  mov    %esp,%ebp
0863e0d9 +0x25ea:  sub    $0x18,%esp
0863e0dc +0x25ed:  mov    0x8(%ebp),%eax
0863e0df +0x25f0:  mov    %eax,(%esp)
0863e0e2 +0x25f3:  call   0863e1b6 <+0x26c7>
0863e0e7 +0x25f8:  mov    %eax,(%esp)
0863e0ea +0x25fb:  call   0863e1be <+0x26cf>
0863e0ef +0x2600:  leave
0863e0f0 +0x2601:  ret
0863e0f1 +0x2602:  nop
0863e0f2 +0x2603:  push   %ebp
0863e0f3 +0x2604:  mov    %esp,%ebp
0863e0f5 +0x2606:  sub    $0x18,%esp
0863e0f8 +0x2609:  mov    0x8(%ebp),%eax
0863e0fb +0x260c:  mov    %eax,(%esp)
0863e0fe +0x260f:  call   0863e1be <+0x26cf>
0863e103 +0x2614:  cmp    0xc(%ebp),%eax
0863e106 +0x2617:  setb   %al
0863e109 +0x261a:  movzbl %al,%eax
0863e10c +0x261d:  test   %eax,%eax
0863e10e +0x261f:  setne  %al
0863e111 +0x2622:  test   %al,%al
0863e113 +0x2624:  je     0863e11a <+0x262b>
0863e115 +0x2626:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0863e11a +0x262b:  mov    0xc(%ebp),%eax
0863e11d +0x262e:  shl    $0x2,%eax
0863e120 +0x2631:  lea    0x0(,%eax,8),%edx
0863e127 +0x2638:  mov    %edx,%ecx
0863e129 +0x263a:  sub    %eax,%ecx
0863e12b +0x263c:  mov    %ecx,%eax
0863e12d +0x263e:  mov    %eax,(%esp)
0863e130 +0x2641:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863e135 +0x2646:  leave
0863e136 +0x2647:  ret
0863e137 +0x2648:  push   %ebp
0863e138 +0x2649:  mov    %esp,%ebp
0863e13a +0x264b:  push   %ebx
0863e13b +0x264c:  sub    $0x14,%esp
0863e13e +0x264f:  mov    0x8(%ebp),%ebx
0863e141 +0x2652:  mov    0xc(%ebp),%eax
0863e144 +0x2655:  mov    (%eax),%eax
0863e146 +0x2657:  mov    %eax,0x4(%esp)
0863e14a +0x265b:  mov    %ebx,(%esp)
0863e14d +0x265e:  call   0863e1c8 <+0x26d9>
0863e152 +0x2663:  mov    %ebx,%eax
0863e154 +0x2665:  add    $0x14,%esp
0863e157 +0x2668:  pop    %ebx
0863e158 +0x2669:  pop    %ebp
0863e159 +0x266a:  ret    $0x4
0863e15c +0x266d:  push   %ebp
0863e15d +0x266e:  mov    %esp,%ebp
0863e15f +0x2670:  sub    $0x18,%esp
0863e162 +0x2673:  mov    0x10(%ebp),%eax
0863e165 +0x2676:  mov    %eax,0x8(%esp)
0863e169 +0x267a:  mov    0xc(%ebp),%eax
0863e16c +0x267d:  mov    %eax,0x4(%esp)
0863e170 +0x2681:  mov    0x8(%ebp),%eax
0863e173 +0x2684:  mov    %eax,(%esp)
0863e176 +0x2687:  call   0863e1d5 <+0x26e6>
0863e17b +0x268c:  leave
0863e17c +0x268d:  ret
0863e17d +0x268e:  push   %ebp
0863e17e +0x268f:  mov    %esp,%ebp
0863e180 +0x2691:  mov    0x8(%ebp),%eax
0863e183 +0x2694:  add    $0x10,%eax
0863e186 +0x2697:  pop    %ebp
0863e187 +0x2698:  ret
0863e188 +0x2699:  push   %ebp
0863e189 +0x269a:  mov    %esp,%ebp
0863e18b +0x269c:  mov    0x8(%ebp),%eax
0863e18e +0x269f:  pop    %ebp
0863e18f +0x26a0:  ret
0863e190 +0x26a1:  push   %ebp
0863e191 +0x26a2:  mov    %esp,%ebp
0863e193 +0x26a4:  sub    $0x28,%esp
0863e196 +0x26a7:  movb   $0x0,-0x9(%ebp)
0863e19a +0x26ab:  mov    0x10(%ebp),%eax
0863e19d +0x26ae:  mov    %eax,0x8(%esp)
0863e1a1 +0x26b2:  mov    0xc(%ebp),%eax
0863e1a4 +0x26b5:  mov    %eax,0x4(%esp)
0863e1a8 +0x26b9:  mov    0x8(%ebp),%eax
0863e1ab +0x26bc:  mov    %eax,(%esp)
0863e1ae +0x26bf:  call   0863e1f6 <+0x2707>
0863e1b3 +0x26c4:  leave
0863e1b4 +0x26c5:  ret
0863e1b5 +0x26c6:  nop
0863e1b6 +0x26c7:  push   %ebp
0863e1b7 +0x26c8:  mov    %esp,%ebp
0863e1b9 +0x26ca:  mov    0x8(%ebp),%eax
0863e1bc +0x26cd:  pop    %ebp
0863e1bd +0x26ce:  ret
0863e1be +0x26cf:  push   %ebp
0863e1bf +0x26d0:  mov    %esp,%ebp
0863e1c1 +0x26d2:  mov    $"}p�.",%eax
0863e1c6 +0x26d7:  pop    %ebp
0863e1c7 +0x26d8:  ret
0863e1c8 +0x26d9:  push   %ebp
0863e1c9 +0x26da:  mov    %esp,%ebp
0863e1cb +0x26dc:  mov    0x8(%ebp),%eax
0863e1ce +0x26df:  mov    0xc(%ebp),%edx
0863e1d1 +0x26e2:  mov    %edx,(%eax)
0863e1d3 +0x26e4:  pop    %ebp
0863e1d4 +0x26e5:  ret
0863e1d5 +0x26e6:  push   %ebp
0863e1d6 +0x26e7:  mov    %esp,%ebp
0863e1d8 +0x26e9:  sub    $0x18,%esp
0863e1db +0x26ec:  mov    0x10(%ebp),%eax
0863e1de +0x26ef:  mov    %eax,0x8(%esp)
0863e1e2 +0x26f3:  mov    0xc(%ebp),%eax
0863e1e5 +0x26f6:  mov    %eax,0x4(%esp)
0863e1e9 +0x26fa:  mov    0x8(%ebp),%eax
0863e1ec +0x26fd:  mov    %eax,(%esp)
0863e1ef +0x2700:  call   0863e26d <+0x277e>
0863e1f4 +0x2705:  leave
0863e1f5 +0x2706:  ret
0863e1f6 +0x2707:  push   %ebp
0863e1f7 +0x2708:  mov    %esp,%ebp
0863e1f9 +0x270a:  push   %ebx
0863e1fa +0x270b:  sub    $0x24,%esp
0863e1fd +0x270e:  mov    0xc(%ebp),%edx
0863e200 +0x2711:  mov    0x8(%ebp),%eax
0863e203 +0x2714:  mov    %edx,%ecx
0863e205 +0x2716:  sub    %eax,%ecx
0863e207 +0x2718:  mov    %ecx,%eax
0863e209 +0x271a:  sar    $0x2,%eax
0863e20c +0x271d:  imul   $0xb6db6db7,%eax,%eax
0863e212 +0x2723:  mov    %eax,-0xc(%ebp)
0863e215 +0x2726:  jmp    0863e259 <+0x276a>
0863e217 +0x2728:  subl   $0x1c,0x10(%ebp)
0863e21b +0x272c:  mov    0x10(%ebp),%ebx
0863e21e +0x272f:  subl   $0x1c,0xc(%ebp)
0863e222 +0x2733:  mov    0xc(%ebp),%eax
0863e225 +0x2736:  mov    %eax,(%esp)
0863e228 +0x2739:  call   080f69c8 <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x6b5>  ; global constructors keyed to GameserverDemonManagerInstance()+0x6b5
0863e22d +0x273e:  mov    (%eax),%edx
0863e22f +0x2740:  mov    %edx,(%ebx)
0863e231 +0x2742:  mov    0x4(%eax),%edx
0863e234 +0x2745:  mov    %edx,0x4(%ebx)
0863e237 +0x2748:  mov    0x8(%eax),%edx
0863e23a +0x274b:  mov    %edx,0x8(%ebx)
0863e23d +0x274e:  mov    0xc(%eax),%edx
0863e240 +0x2751:  mov    %edx,0xc(%ebx)
0863e243 +0x2754:  mov    0x10(%eax),%edx
0863e246 +0x2757:  mov    %edx,0x10(%ebx)
0863e249 +0x275a:  mov    0x14(%eax),%edx
0863e24c +0x275d:  mov    %edx,0x14(%ebx)
0863e24f +0x2760:  mov    0x18(%eax),%eax
0863e252 +0x2763:  mov    %eax,0x18(%ebx)
0863e255 +0x2766:  subl   $0x1,-0xc(%ebp)
0863e259 +0x276a:  cmpl   $0x0,-0xc(%ebp)
0863e25d +0x276e:  setg   %al
0863e260 +0x2771:  test   %al,%al
0863e262 +0x2773:  jne    0863e217 <+0x2728>
0863e264 +0x2775:  mov    0x10(%ebp),%eax
0863e267 +0x2778:  add    $0x24,%esp
0863e26a +0x277b:  pop    %ebx
0863e26b +0x277c:  pop    %ebp
0863e26c +0x277d:  ret
0863e26d +0x277e:  push   %ebp
0863e26e +0x277f:  mov    %esp,%ebp
0863e270 +0x2781:  push   %esi
0863e271 +0x2782:  push   %ebx
0863e272 +0x2783:  sub    $0x20,%esp
0863e275 +0x2786:  mov    0x10(%ebp),%eax
0863e278 +0x2789:  mov    %eax,-0xc(%ebp)
0863e27b +0x278c:  jmp    0863e2da <+0x27eb>
0863e27d +0x278e:  lea    0x8(%ebp),%eax
0863e280 +0x2791:  mov    %eax,(%esp)
0863e283 +0x2794:  call   0863e362 <+0x2873>
0863e288 +0x2799:  mov    %eax,%ebx
0863e28a +0x279b:  mov    -0xc(%ebp),%eax
0863e28d +0x279e:  mov    %eax,0x4(%esp)
0863e291 +0x27a2:  movl   $0x1c,(%esp)
0863e298 +0x27a9:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0863e29d +0x27ae:  mov    %eax,%edx
0863e29f +0x27b0:  test   %edx,%edx
0863e2a1 +0x27b2:  je     0863e2cb <+0x27dc>
0863e2a3 +0x27b4:  mov    (%ebx),%edx
0863e2a5 +0x27b6:  mov    %edx,(%eax)
0863e2a7 +0x27b8:  mov    0x4(%ebx),%edx
0863e2aa +0x27bb:  mov    %edx,0x4(%eax)
0863e2ad +0x27be:  mov    0x8(%ebx),%edx
0863e2b0 +0x27c1:  mov    %edx,0x8(%eax)
0863e2b3 +0x27c4:  mov    0xc(%ebx),%edx
0863e2b6 +0x27c7:  mov    %edx,0xc(%eax)
0863e2b9 +0x27ca:  mov    0x10(%ebx),%edx
0863e2bc +0x27cd:  mov    %edx,0x10(%eax)
0863e2bf +0x27d0:  mov    0x14(%ebx),%edx
0863e2c2 +0x27d3:  mov    %edx,0x14(%eax)
0863e2c5 +0x27d6:  mov    0x18(%ebx),%edx
0863e2c8 +0x27d9:  mov    %edx,0x18(%eax)
0863e2cb +0x27dc:  lea    0x8(%ebp),%eax
0863e2ce +0x27df:  mov    %eax,(%esp)
0863e2d1 +0x27e2:  call   0863e34c <+0x285d>
0863e2d6 +0x27e7:  addl   $0x1c,-0xc(%ebp)
0863e2da +0x27eb:  lea    0xc(%ebp),%eax
0863e2dd +0x27ee:  mov    %eax,0x4(%esp)
0863e2e1 +0x27f2:  lea    0x8(%ebp),%eax
0863e2e4 +0x27f5:  mov    %eax,(%esp)
0863e2e7 +0x27f8:  call   0863e32e <+0x283f>
0863e2ec +0x27fd:  test   %al,%al
0863e2ee +0x27ff:  jne    0863e27d <+0x278e>
0863e2f0 +0x2801:  mov    -0xc(%ebp),%eax
0863e2f3 +0x2804:  add    $0x20,%esp
0863e2f6 +0x2807:  pop    %ebx
0863e2f7 +0x2808:  pop    %esi
0863e2f8 +0x2809:  pop    %ebp
0863e2f9 +0x280a:  ret
0863e2fa +0x280b:  mov    %eax,(%esp)
0863e2fd +0x280e:  call   08725ce0 <__cxa_begin_catch>
0863e302 +0x2813:  mov    -0xc(%ebp),%eax
0863e305 +0x2816:  mov    %eax,0x4(%esp)
0863e309 +0x281a:  mov    0x10(%ebp),%eax
0863e30c +0x281d:  mov    %eax,(%esp)
0863e30f +0x2820:  call   080f68ab <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x598>  ; global constructors keyed to GameserverDemonManagerInstance()+0x598
0863e314 +0x2825:  call   08724be0 <__cxa_rethrow>
0863e319 +0x282a:  mov    %edx,%ebx
0863e31b +0x282c:  mov    %eax,%esi
0863e31d +0x282e:  call   08725c30 <__cxa_end_catch>
0863e322 +0x2833:  mov    %esi,%eax
0863e324 +0x2835:  mov    %ebx,%edx
0863e326 +0x2837:  mov    %eax,(%esp)
0863e329 +0x283a:  call   08ae3750 <_Unwind_Resume>
0863e32e +0x283f:  push   %ebp
0863e32f +0x2840:  mov    %esp,%ebp
0863e331 +0x2842:  sub    $0x18,%esp
0863e334 +0x2845:  mov    0xc(%ebp),%eax
0863e337 +0x2848:  mov    %eax,0x4(%esp)
0863e33b +0x284c:  mov    0x8(%ebp),%eax
0863e33e +0x284f:  mov    %eax,(%esp)
0863e341 +0x2852:  call   0863e36c <+0x287d>
0863e346 +0x2857:  xor    $0x1,%eax
0863e349 +0x285a:  leave
0863e34a +0x285b:  ret
0863e34b +0x285c:  nop
0863e34c +0x285d:  push   %ebp
0863e34d +0x285e:  mov    %esp,%ebp
0863e34f +0x2860:  mov    0x8(%ebp),%eax
0863e352 +0x2863:  mov    (%eax),%eax
0863e354 +0x2865:  lea    0x1c(%eax),%edx
0863e357 +0x2868:  mov    0x8(%ebp),%eax
0863e35a +0x286b:  mov    %edx,(%eax)
0863e35c +0x286d:  mov    0x8(%ebp),%eax
0863e35f +0x2870:  pop    %ebp
0863e360 +0x2871:  ret
0863e361 +0x2872:  nop
0863e362 +0x2873:  push   %ebp
0863e363 +0x2874:  mov    %esp,%ebp
0863e365 +0x2876:  mov    0x8(%ebp),%eax
0863e368 +0x2879:  mov    (%eax),%eax
0863e36a +0x287b:  pop    %ebp
0863e36b +0x287c:  ret
0863e36c +0x287d:  push   %ebp
0863e36d +0x287e:  mov    %esp,%ebp
0863e36f +0x2880:  push   %ebx
0863e370 +0x2881:  sub    $0x14,%esp
0863e373 +0x2884:  mov    0x8(%ebp),%eax
0863e376 +0x2887:  mov    %eax,(%esp)
0863e379 +0x288a:  call   0863e396 <+0x28a7>
0863e37e +0x288f:  mov    %eax,%ebx
0863e380 +0x2891:  mov    0xc(%ebp),%eax
0863e383 +0x2894:  mov    %eax,(%esp)
0863e386 +0x2897:  call   0863e396 <+0x28a7>
0863e38b +0x289c:  cmp    %eax,%ebx
0863e38d +0x289e:  sete   %al
0863e390 +0x28a1:  add    $0x14,%esp
0863e393 +0x28a4:  pop    %ebx
0863e394 +0x28a5:  pop    %ebp
0863e395 +0x28a6:  ret
0863e396 +0x28a7:  push   %ebp
0863e397 +0x28a8:  mov    %esp,%ebp
0863e399 +0x28aa:  mov    0x8(%ebp),%eax
0863e39c +0x28ad:  mov    (%eax),%eax
0863e39e +0x28af:  pop    %ebp
0863e39f +0x28b0:  ret
0863e3a0 +0x28b1:  push   %ebp
0863e3a1 +0x28b2:  mov    %esp,%ebp
0863e3a3 +0x28b4:  sub    $0x18,%esp
0863e3a6 +0x28b7:  mov    0x8(%ebp),%eax
0863e3a9 +0x28ba:  movl   $&_ZTV21Timer_CreateDnfDbLoad+0x8,(%eax)
0863e3af +0x28c0:  mov    0x8(%ebp),%eax
0863e3b2 +0x28c3:  mov    %eax,(%esp)
0863e3b5 +0x28c6:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e3ba +0x28cb:  mov    $0x0,%eax
0863e3bf +0x28d0:  test   %al,%al
0863e3c1 +0x28d2:  je     0863e3ce <+0x28df>
0863e3c3 +0x28d4:  mov    0x8(%ebp),%eax
0863e3c6 +0x28d7:  mov    %eax,(%esp)
0863e3c9 +0x28da:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e3ce +0x28df:  leave
0863e3cf +0x28e0:  ret
0863e3d0 +0x28e1:  push   %ebp
0863e3d1 +0x28e2:  mov    %esp,%ebp
0863e3d3 +0x28e4:  sub    $0x18,%esp
0863e3d6 +0x28e7:  mov    0x8(%ebp),%eax
0863e3d9 +0x28ea:  mov    %eax,(%esp)
0863e3dc +0x28ed:  call   0863e3a0 <+0x28b1>
0863e3e1 +0x28f2:  mov    0x8(%ebp),%eax
0863e3e4 +0x28f5:  mov    %eax,(%esp)
0863e3e7 +0x28f8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e3ec +0x28fd:  leave
0863e3ed +0x28fe:  ret
0863e3ee +0x28ff:  push   %ebp
0863e3ef +0x2900:  mov    %esp,%ebp
0863e3f1 +0x2902:  sub    $0x18,%esp
0863e3f4 +0x2905:  mov    0x8(%ebp),%eax
0863e3f7 +0x2908:  movl   $&_ZTV35Timer_DungeonStatisticEntrance_Hour+0x8,(%eax)
0863e3fd +0x290e:  mov    0x8(%ebp),%eax
0863e400 +0x2911:  mov    %eax,(%esp)
0863e403 +0x2914:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e408 +0x2919:  mov    $0x0,%eax
0863e40d +0x291e:  test   %al,%al
0863e40f +0x2920:  je     0863e41c <+0x292d>
0863e411 +0x2922:  mov    0x8(%ebp),%eax
0863e414 +0x2925:  mov    %eax,(%esp)
0863e417 +0x2928:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e41c +0x292d:  leave
0863e41d +0x292e:  ret
0863e41e +0x292f:  push   %ebp
0863e41f +0x2930:  mov    %esp,%ebp
0863e421 +0x2932:  sub    $0x18,%esp
0863e424 +0x2935:  mov    0x8(%ebp),%eax
0863e427 +0x2938:  mov    %eax,(%esp)
0863e42a +0x293b:  call   0863e3ee <+0x28ff>
0863e42f +0x2940:  mov    0x8(%ebp),%eax
0863e432 +0x2943:  mov    %eax,(%esp)
0863e435 +0x2946:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e43a +0x294b:  leave
0863e43b +0x294c:  ret
0863e43c +0x294d:  push   %ebp
0863e43d +0x294e:  mov    %esp,%ebp
0863e43f +0x2950:  sub    $0x18,%esp
0863e442 +0x2953:  mov    0x8(%ebp),%eax
0863e445 +0x2956:  movl   $&_ZTV19Timer_StayTimeEvent+0x8,(%eax)
0863e44b +0x295c:  mov    0x8(%ebp),%eax
0863e44e +0x295f:  mov    %eax,(%esp)
0863e451 +0x2962:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e456 +0x2967:  mov    $0x0,%eax
0863e45b +0x296c:  test   %al,%al
0863e45d +0x296e:  je     0863e46a <+0x297b>
0863e45f +0x2970:  mov    0x8(%ebp),%eax
0863e462 +0x2973:  mov    %eax,(%esp)
0863e465 +0x2976:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e46a +0x297b:  leave
0863e46b +0x297c:  ret
0863e46c +0x297d:  push   %ebp
0863e46d +0x297e:  mov    %esp,%ebp
0863e46f +0x2980:  sub    $0x18,%esp
0863e472 +0x2983:  mov    0x8(%ebp),%eax
0863e475 +0x2986:  mov    %eax,(%esp)
0863e478 +0x2989:  call   0863e43c <+0x294d>
0863e47d +0x298e:  mov    0x8(%ebp),%eax
0863e480 +0x2991:  mov    %eax,(%esp)
0863e483 +0x2994:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e488 +0x2999:  leave
0863e489 +0x299a:  ret
0863e48a +0x299b:  push   %ebp
0863e48b +0x299c:  mov    %esp,%ebp
0863e48d +0x299e:  sub    $0x18,%esp
0863e490 +0x29a1:  mov    0x8(%ebp),%eax
0863e493 +0x29a4:  movl   $&_ZTV24Timer_RefreshServerState+0x8,(%eax)
0863e499 +0x29aa:  mov    0x8(%ebp),%eax
0863e49c +0x29ad:  mov    %eax,(%esp)
0863e49f +0x29b0:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e4a4 +0x29b5:  mov    $0x0,%eax
0863e4a9 +0x29ba:  test   %al,%al
0863e4ab +0x29bc:  je     0863e4b8 <+0x29c9>
0863e4ad +0x29be:  mov    0x8(%ebp),%eax
0863e4b0 +0x29c1:  mov    %eax,(%esp)
0863e4b3 +0x29c4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e4b8 +0x29c9:  leave
0863e4b9 +0x29ca:  ret
0863e4ba +0x29cb:  push   %ebp
0863e4bb +0x29cc:  mov    %esp,%ebp
0863e4bd +0x29ce:  sub    $0x18,%esp
0863e4c0 +0x29d1:  mov    0x8(%ebp),%eax
0863e4c3 +0x29d4:  mov    %eax,(%esp)
0863e4c6 +0x29d7:  call   0863e48a <+0x299b>
0863e4cb +0x29dc:  mov    0x8(%ebp),%eax
0863e4ce +0x29df:  mov    %eax,(%esp)
0863e4d1 +0x29e2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e4d6 +0x29e7:  leave
0863e4d7 +0x29e8:  ret
0863e4d8 +0x29e9:  push   %ebp
0863e4d9 +0x29ea:  mov    %esp,%ebp
0863e4db +0x29ec:  sub    $0x18,%esp
0863e4de +0x29ef:  mov    0x8(%ebp),%eax
0863e4e1 +0x29f2:  movl   $&_ZTV17Timer_TowerOnTime+0x8,(%eax)
0863e4e7 +0x29f8:  mov    0x8(%ebp),%eax
0863e4ea +0x29fb:  mov    %eax,(%esp)
0863e4ed +0x29fe:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e4f2 +0x2a03:  mov    $0x0,%eax
0863e4f7 +0x2a08:  test   %al,%al
0863e4f9 +0x2a0a:  je     0863e506 <+0x2a17>
0863e4fb +0x2a0c:  mov    0x8(%ebp),%eax
0863e4fe +0x2a0f:  mov    %eax,(%esp)
0863e501 +0x2a12:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e506 +0x2a17:  leave
0863e507 +0x2a18:  ret
0863e508 +0x2a19:  push   %ebp
0863e509 +0x2a1a:  mov    %esp,%ebp
0863e50b +0x2a1c:  sub    $0x18,%esp
0863e50e +0x2a1f:  mov    0x8(%ebp),%eax
0863e511 +0x2a22:  mov    %eax,(%esp)
0863e514 +0x2a25:  call   0863e4d8 <+0x29e9>
0863e519 +0x2a2a:  mov    0x8(%ebp),%eax
0863e51c +0x2a2d:  mov    %eax,(%esp)
0863e51f +0x2a30:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e524 +0x2a35:  leave
0863e525 +0x2a36:  ret
0863e526 +0x2a37:  push   %ebp
0863e527 +0x2a38:  mov    %esp,%ebp
0863e529 +0x2a3a:  sub    $0x18,%esp
0863e52c +0x2a3d:  mov    0x8(%ebp),%eax
0863e52f +0x2a40:  movl   $&_ZTV33Timer_NoticeEmergencyPatchMessage+0x8,(%eax)
0863e535 +0x2a46:  mov    0x8(%ebp),%eax
0863e538 +0x2a49:  mov    %eax,(%esp)
0863e53b +0x2a4c:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e540 +0x2a51:  mov    $0x0,%eax
0863e545 +0x2a56:  test   %al,%al
0863e547 +0x2a58:  je     0863e554 <+0x2a65>
0863e549 +0x2a5a:  mov    0x8(%ebp),%eax
0863e54c +0x2a5d:  mov    %eax,(%esp)
0863e54f +0x2a60:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e554 +0x2a65:  leave
0863e555 +0x2a66:  ret
0863e556 +0x2a67:  push   %ebp
0863e557 +0x2a68:  mov    %esp,%ebp
0863e559 +0x2a6a:  sub    $0x18,%esp
0863e55c +0x2a6d:  mov    0x8(%ebp),%eax
0863e55f +0x2a70:  mov    %eax,(%esp)
0863e562 +0x2a73:  call   0863e526 <+0x2a37>
0863e567 +0x2a78:  mov    0x8(%ebp),%eax
0863e56a +0x2a7b:  mov    %eax,(%esp)
0863e56d +0x2a7e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e572 +0x2a83:  leave
0863e573 +0x2a84:  ret
0863e574 +0x2a85:  push   %ebp
0863e575 +0x2a86:  mov    %esp,%ebp
0863e577 +0x2a88:  sub    $0x18,%esp
0863e57a +0x2a8b:  mov    0x8(%ebp),%eax
0863e57d +0x2a8e:  movl   $&_ZTV38Timer_TournametDungeonClearStateSelect+0x8,(%eax)
0863e583 +0x2a94:  mov    0x8(%ebp),%eax
0863e586 +0x2a97:  mov    %eax,(%esp)
0863e589 +0x2a9a:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e58e +0x2a9f:  mov    $0x0,%eax
0863e593 +0x2aa4:  test   %al,%al
0863e595 +0x2aa6:  je     0863e5a2 <+0x2ab3>
0863e597 +0x2aa8:  mov    0x8(%ebp),%eax
0863e59a +0x2aab:  mov    %eax,(%esp)
0863e59d +0x2aae:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e5a2 +0x2ab3:  leave
0863e5a3 +0x2ab4:  ret
0863e5a4 +0x2ab5:  push   %ebp
0863e5a5 +0x2ab6:  mov    %esp,%ebp
0863e5a7 +0x2ab8:  sub    $0x18,%esp
0863e5aa +0x2abb:  mov    0x8(%ebp),%eax
0863e5ad +0x2abe:  mov    %eax,(%esp)
0863e5b0 +0x2ac1:  call   0863e574 <+0x2a85>
0863e5b5 +0x2ac6:  mov    0x8(%ebp),%eax
0863e5b8 +0x2ac9:  mov    %eax,(%esp)
0863e5bb +0x2acc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e5c0 +0x2ad1:  leave
0863e5c1 +0x2ad2:  ret
0863e5c2 +0x2ad3:  push   %ebp
0863e5c3 +0x2ad4:  mov    %esp,%ebp
0863e5c5 +0x2ad6:  sub    $0x18,%esp
0863e5c8 +0x2ad9:  mov    0x8(%ebp),%eax
0863e5cb +0x2adc:  movl   $&_ZTV42Timer_TournamentDugeonClearStateNotiReward+0x8,(%eax)
0863e5d1 +0x2ae2:  mov    0x8(%ebp),%eax
0863e5d4 +0x2ae5:  mov    %eax,(%esp)
0863e5d7 +0x2ae8:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e5dc +0x2aed:  mov    $0x0,%eax
0863e5e1 +0x2af2:  test   %al,%al
0863e5e3 +0x2af4:  je     0863e5f0 <+0x2b01>
0863e5e5 +0x2af6:  mov    0x8(%ebp),%eax
0863e5e8 +0x2af9:  mov    %eax,(%esp)
0863e5eb +0x2afc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e5f0 +0x2b01:  leave
0863e5f1 +0x2b02:  ret
0863e5f2 +0x2b03:  push   %ebp
0863e5f3 +0x2b04:  mov    %esp,%ebp
0863e5f5 +0x2b06:  sub    $0x18,%esp
0863e5f8 +0x2b09:  mov    0x8(%ebp),%eax
0863e5fb +0x2b0c:  mov    %eax,(%esp)
0863e5fe +0x2b0f:  call   0863e5c2 <+0x2ad3>
0863e603 +0x2b14:  mov    0x8(%ebp),%eax
0863e606 +0x2b17:  mov    %eax,(%esp)
0863e609 +0x2b1a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e60e +0x2b1f:  leave
0863e60f +0x2b20:  ret
0863e610 +0x2b21:  push   %ebp
0863e611 +0x2b22:  mov    %esp,%ebp
0863e613 +0x2b24:  sub    $0x18,%esp
0863e616 +0x2b27:  mov    0x8(%ebp),%eax
0863e619 +0x2b2a:  movl   $&_ZTV25Timer_GenerateCaptchaData+0x8,(%eax)
0863e61f +0x2b30:  mov    0x8(%ebp),%eax
0863e622 +0x2b33:  mov    %eax,(%esp)
0863e625 +0x2b36:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e62a +0x2b3b:  mov    $0x0,%eax
0863e62f +0x2b40:  test   %al,%al
0863e631 +0x2b42:  je     0863e63e <+0x2b4f>
0863e633 +0x2b44:  mov    0x8(%ebp),%eax
0863e636 +0x2b47:  mov    %eax,(%esp)
0863e639 +0x2b4a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e63e +0x2b4f:  leave
0863e63f +0x2b50:  ret
0863e640 +0x2b51:  push   %ebp
0863e641 +0x2b52:  mov    %esp,%ebp
0863e643 +0x2b54:  sub    $0x18,%esp
0863e646 +0x2b57:  mov    0x8(%ebp),%eax
0863e649 +0x2b5a:  mov    %eax,(%esp)
0863e64c +0x2b5d:  call   0863e610 <+0x2b21>
0863e651 +0x2b62:  mov    0x8(%ebp),%eax
0863e654 +0x2b65:  mov    %eax,(%esp)
0863e657 +0x2b68:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e65c +0x2b6d:  leave
0863e65d +0x2b6e:  ret
0863e65e +0x2b6f:  push   %ebp
0863e65f +0x2b70:  mov    %esp,%ebp
0863e661 +0x2b72:  sub    $0x18,%esp
0863e664 +0x2b75:  mov    0x8(%ebp),%eax
0863e667 +0x2b78:  movl   $&_ZTV23Timer_AssaultGhostTimer+0x8,(%eax)
0863e66d +0x2b7e:  mov    0x8(%ebp),%eax
0863e670 +0x2b81:  mov    %eax,(%esp)
0863e673 +0x2b84:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e678 +0x2b89:  mov    $0x0,%eax
0863e67d +0x2b8e:  test   %al,%al
0863e67f +0x2b90:  je     0863e68c <+0x2b9d>
0863e681 +0x2b92:  mov    0x8(%ebp),%eax
0863e684 +0x2b95:  mov    %eax,(%esp)
0863e687 +0x2b98:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e68c +0x2b9d:  leave
0863e68d +0x2b9e:  ret
0863e68e +0x2b9f:  push   %ebp
0863e68f +0x2ba0:  mov    %esp,%ebp
0863e691 +0x2ba2:  sub    $0x18,%esp
0863e694 +0x2ba5:  mov    0x8(%ebp),%eax
0863e697 +0x2ba8:  mov    %eax,(%esp)
0863e69a +0x2bab:  call   0863e65e <+0x2b6f>
0863e69f +0x2bb0:  mov    0x8(%ebp),%eax
0863e6a2 +0x2bb3:  mov    %eax,(%esp)
0863e6a5 +0x2bb6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e6aa +0x2bbb:  leave
0863e6ab +0x2bbc:  ret
0863e6ac +0x2bbd:  push   %ebp
0863e6ad +0x2bbe:  mov    %esp,%ebp
0863e6af +0x2bc0:  sub    $0x18,%esp
0863e6b2 +0x2bc3:  mov    0x8(%ebp),%eax
0863e6b5 +0x2bc6:  movl   $&_ZTV32Timer_QuickPartyWaitingStartGame+0x8,(%eax)
0863e6bb +0x2bcc:  mov    0x8(%ebp),%eax
0863e6be +0x2bcf:  mov    %eax,(%esp)
0863e6c1 +0x2bd2:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e6c6 +0x2bd7:  mov    $0x0,%eax
0863e6cb +0x2bdc:  test   %al,%al
0863e6cd +0x2bde:  je     0863e6da <+0x2beb>
0863e6cf +0x2be0:  mov    0x8(%ebp),%eax
0863e6d2 +0x2be3:  mov    %eax,(%esp)
0863e6d5 +0x2be6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e6da +0x2beb:  leave
0863e6db +0x2bec:  ret
0863e6dc +0x2bed:  push   %ebp
0863e6dd +0x2bee:  mov    %esp,%ebp
0863e6df +0x2bf0:  sub    $0x18,%esp
0863e6e2 +0x2bf3:  mov    0x8(%ebp),%eax
0863e6e5 +0x2bf6:  mov    %eax,(%esp)
0863e6e8 +0x2bf9:  call   0863e6ac <+0x2bbd>
0863e6ed +0x2bfe:  mov    0x8(%ebp),%eax
0863e6f0 +0x2c01:  mov    %eax,(%esp)
0863e6f3 +0x2c04:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e6f8 +0x2c09:  leave
0863e6f9 +0x2c0a:  ret
0863e6fa +0x2c0b:  push   %ebp
0863e6fb +0x2c0c:  mov    %esp,%ebp
0863e6fd +0x2c0e:  sub    $0x18,%esp
0863e700 +0x2c11:  mov    0x8(%ebp),%eax
0863e703 +0x2c14:  movl   $&_ZTV36Timer_QuickPartyWaitingPartyMatching+0x8,(%eax)
0863e709 +0x2c1a:  mov    0x8(%ebp),%eax
0863e70c +0x2c1d:  mov    %eax,(%esp)
0863e70f +0x2c20:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e714 +0x2c25:  mov    $0x0,%eax
0863e719 +0x2c2a:  test   %al,%al
0863e71b +0x2c2c:  je     0863e728 <+0x2c39>
0863e71d +0x2c2e:  mov    0x8(%ebp),%eax
0863e720 +0x2c31:  mov    %eax,(%esp)
0863e723 +0x2c34:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e728 +0x2c39:  leave
0863e729 +0x2c3a:  ret
0863e72a +0x2c3b:  push   %ebp
0863e72b +0x2c3c:  mov    %esp,%ebp
0863e72d +0x2c3e:  sub    $0x18,%esp
0863e730 +0x2c41:  mov    0x8(%ebp),%eax
0863e733 +0x2c44:  mov    %eax,(%esp)
0863e736 +0x2c47:  call   0863e6fa <+0x2c0b>
0863e73b +0x2c4c:  mov    0x8(%ebp),%eax
0863e73e +0x2c4f:  mov    %eax,(%esp)
0863e741 +0x2c52:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e746 +0x2c57:  leave
0863e747 +0x2c58:  ret
0863e748 +0x2c59:  push   %ebp
0863e749 +0x2c5a:  mov    %esp,%ebp
0863e74b +0x2c5c:  sub    $0x18,%esp
0863e74e +0x2c5f:  mov    0x8(%ebp),%eax
0863e751 +0x2c62:  movl   $&_ZTV21Timer_EventManagement+0x8,(%eax)
0863e757 +0x2c68:  mov    0x8(%ebp),%eax
0863e75a +0x2c6b:  mov    %eax,(%esp)
0863e75d +0x2c6e:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e762 +0x2c73:  mov    $0x0,%eax
0863e767 +0x2c78:  test   %al,%al
0863e769 +0x2c7a:  je     0863e776 <+0x2c87>
0863e76b +0x2c7c:  mov    0x8(%ebp),%eax
0863e76e +0x2c7f:  mov    %eax,(%esp)
0863e771 +0x2c82:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e776 +0x2c87:  leave
0863e777 +0x2c88:  ret
0863e778 +0x2c89:  push   %ebp
0863e779 +0x2c8a:  mov    %esp,%ebp
0863e77b +0x2c8c:  sub    $0x18,%esp
0863e77e +0x2c8f:  mov    0x8(%ebp),%eax
0863e781 +0x2c92:  mov    %eax,(%esp)
0863e784 +0x2c95:  call   0863e748 <+0x2c59>
0863e789 +0x2c9a:  mov    0x8(%ebp),%eax
0863e78c +0x2c9d:  mov    %eax,(%esp)
0863e78f +0x2ca0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e794 +0x2ca5:  leave
0863e795 +0x2ca6:  ret
0863e796 +0x2ca7:  push   %ebp
0863e797 +0x2ca8:  mov    %esp,%ebp
0863e799 +0x2caa:  sub    $0x18,%esp
0863e79c +0x2cad:  mov    0x8(%ebp),%eax
0863e79f +0x2cb0:  movl   $&_ZTV24Timer_Send_Ontime_Reward+0x8,(%eax)
0863e7a5 +0x2cb6:  mov    0x8(%ebp),%eax
0863e7a8 +0x2cb9:  mov    %eax,(%esp)
0863e7ab +0x2cbc:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e7b0 +0x2cc1:  mov    $0x0,%eax
0863e7b5 +0x2cc6:  test   %al,%al
0863e7b7 +0x2cc8:  je     0863e7c4 <+0x2cd5>
0863e7b9 +0x2cca:  mov    0x8(%ebp),%eax
0863e7bc +0x2ccd:  mov    %eax,(%esp)
0863e7bf +0x2cd0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e7c4 +0x2cd5:  leave
0863e7c5 +0x2cd6:  ret
0863e7c6 +0x2cd7:  push   %ebp
0863e7c7 +0x2cd8:  mov    %esp,%ebp
0863e7c9 +0x2cda:  sub    $0x18,%esp
0863e7cc +0x2cdd:  mov    0x8(%ebp),%eax
0863e7cf +0x2ce0:  mov    %eax,(%esp)
0863e7d2 +0x2ce3:  call   0863e796 <+0x2ca7>
0863e7d7 +0x2ce8:  mov    0x8(%ebp),%eax
0863e7da +0x2ceb:  mov    %eax,(%esp)
0863e7dd +0x2cee:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e7e2 +0x2cf3:  leave
0863e7e3 +0x2cf4:  ret
0863e7e4 +0x2cf5:  push   %ebp
0863e7e5 +0x2cf6:  mov    %esp,%ebp
0863e7e7 +0x2cf8:  sub    $0x18,%esp
0863e7ea +0x2cfb:  mov    0x8(%ebp),%eax
0863e7ed +0x2cfe:  movl   $&_ZTV23Timer_Schedule_MidNight+0x8,(%eax)
0863e7f3 +0x2d04:  mov    0x8(%ebp),%eax
0863e7f6 +0x2d07:  mov    %eax,(%esp)
0863e7f9 +0x2d0a:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e7fe +0x2d0f:  mov    $0x0,%eax
0863e803 +0x2d14:  test   %al,%al
0863e805 +0x2d16:  je     0863e812 <+0x2d23>
0863e807 +0x2d18:  mov    0x8(%ebp),%eax
0863e80a +0x2d1b:  mov    %eax,(%esp)
0863e80d +0x2d1e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e812 +0x2d23:  leave
0863e813 +0x2d24:  ret
0863e814 +0x2d25:  push   %ebp
0863e815 +0x2d26:  mov    %esp,%ebp
0863e817 +0x2d28:  sub    $0x18,%esp
0863e81a +0x2d2b:  mov    0x8(%ebp),%eax
0863e81d +0x2d2e:  mov    %eax,(%esp)
0863e820 +0x2d31:  call   0863e7e4 <+0x2cf5>
0863e825 +0x2d36:  mov    0x8(%ebp),%eax
0863e828 +0x2d39:  mov    %eax,(%esp)
0863e82b +0x2d3c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e830 +0x2d41:  leave
0863e831 +0x2d42:  ret
0863e832 +0x2d43:  push   %ebp
0863e833 +0x2d44:  mov    %esp,%ebp
0863e835 +0x2d46:  sub    $0x18,%esp
0863e838 +0x2d49:  mov    0x8(%ebp),%eax
0863e83b +0x2d4c:  movl   $&_ZTV21Timer_OneADayItemShop+0x8,(%eax)
0863e841 +0x2d52:  mov    0x8(%ebp),%eax
0863e844 +0x2d55:  mov    %eax,(%esp)
0863e847 +0x2d58:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e84c +0x2d5d:  mov    $0x0,%eax
0863e851 +0x2d62:  test   %al,%al
0863e853 +0x2d64:  je     0863e860 <+0x2d71>
0863e855 +0x2d66:  mov    0x8(%ebp),%eax
0863e858 +0x2d69:  mov    %eax,(%esp)
0863e85b +0x2d6c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e860 +0x2d71:  leave
0863e861 +0x2d72:  ret
0863e862 +0x2d73:  push   %ebp
0863e863 +0x2d74:  mov    %esp,%ebp
0863e865 +0x2d76:  sub    $0x18,%esp
0863e868 +0x2d79:  mov    0x8(%ebp),%eax
0863e86b +0x2d7c:  mov    %eax,(%esp)
0863e86e +0x2d7f:  call   0863e832 <+0x2d43>
0863e873 +0x2d84:  mov    0x8(%ebp),%eax
0863e876 +0x2d87:  mov    %eax,(%esp)
0863e879 +0x2d8a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e87e +0x2d8f:  leave
0863e87f +0x2d90:  ret
0863e880 +0x2d91:  push   %ebp
0863e881 +0x2d92:  mov    %esp,%ebp
0863e883 +0x2d94:  sub    $0x18,%esp
0863e886 +0x2d97:  mov    0x8(%ebp),%eax
0863e889 +0x2d9a:  movl   $&_ZTV26Timer_TOD_Send_ClearReward+0x8,(%eax)
0863e88f +0x2da0:  mov    0x8(%ebp),%eax
0863e892 +0x2da3:  mov    %eax,(%esp)
0863e895 +0x2da6:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e89a +0x2dab:  mov    $0x0,%eax
0863e89f +0x2db0:  test   %al,%al
0863e8a1 +0x2db2:  je     0863e8ae <+0x2dbf>
0863e8a3 +0x2db4:  mov    0x8(%ebp),%eax
0863e8a6 +0x2db7:  mov    %eax,(%esp)
0863e8a9 +0x2dba:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e8ae +0x2dbf:  leave
0863e8af +0x2dc0:  ret
0863e8b0 +0x2dc1:  push   %ebp
0863e8b1 +0x2dc2:  mov    %esp,%ebp
0863e8b3 +0x2dc4:  sub    $0x18,%esp
0863e8b6 +0x2dc7:  mov    0x8(%ebp),%eax
0863e8b9 +0x2dca:  mov    %eax,(%esp)
0863e8bc +0x2dcd:  call   0863e880 <+0x2d91>
0863e8c1 +0x2dd2:  mov    0x8(%ebp),%eax
0863e8c4 +0x2dd5:  mov    %eax,(%esp)
0863e8c7 +0x2dd8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e8cc +0x2ddd:  leave
0863e8cd +0x2dde:  ret
0863e8ce +0x2ddf:  push   %ebp
0863e8cf +0x2de0:  mov    %esp,%ebp
0863e8d1 +0x2de2:  sub    $0x18,%esp
0863e8d4 +0x2de5:  mov    0x8(%ebp),%eax
0863e8d7 +0x2de8:  movl   $&_ZTV23Timer_CheckAuctionReady+0x8,(%eax)
0863e8dd +0x2dee:  mov    0x8(%ebp),%eax
0863e8e0 +0x2df1:  mov    %eax,(%esp)
0863e8e3 +0x2df4:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e8e8 +0x2df9:  mov    $0x0,%eax
0863e8ed +0x2dfe:  test   %al,%al
0863e8ef +0x2e00:  je     0863e8fc <+0x2e0d>
0863e8f1 +0x2e02:  mov    0x8(%ebp),%eax
0863e8f4 +0x2e05:  mov    %eax,(%esp)
0863e8f7 +0x2e08:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e8fc +0x2e0d:  leave
0863e8fd +0x2e0e:  ret
0863e8fe +0x2e0f:  push   %ebp
0863e8ff +0x2e10:  mov    %esp,%ebp
0863e901 +0x2e12:  sub    $0x18,%esp
0863e904 +0x2e15:  mov    0x8(%ebp),%eax
0863e907 +0x2e18:  mov    %eax,(%esp)
0863e90a +0x2e1b:  call   0863e8ce <+0x2ddf>
0863e90f +0x2e20:  mov    0x8(%ebp),%eax
0863e912 +0x2e23:  mov    %eax,(%esp)
0863e915 +0x2e26:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e91a +0x2e2b:  leave
0863e91b +0x2e2c:  ret
0863e91c +0x2e2d:  push   %ebp
0863e91d +0x2e2e:  mov    %esp,%ebp
0863e91f +0x2e30:  sub    $0x18,%esp
0863e922 +0x2e33:  mov    0x8(%ebp),%eax
0863e925 +0x2e36:  movl   $&_ZTV20Timer_HadesHeartBeat+0x8,(%eax)
0863e92b +0x2e3c:  mov    0x8(%ebp),%eax
0863e92e +0x2e3f:  mov    %eax,(%esp)
0863e931 +0x2e42:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e936 +0x2e47:  mov    $0x0,%eax
0863e93b +0x2e4c:  test   %al,%al
0863e93d +0x2e4e:  je     0863e94a <+0x2e5b>
0863e93f +0x2e50:  mov    0x8(%ebp),%eax
0863e942 +0x2e53:  mov    %eax,(%esp)
0863e945 +0x2e56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e94a +0x2e5b:  leave
0863e94b +0x2e5c:  ret
0863e94c +0x2e5d:  push   %ebp
0863e94d +0x2e5e:  mov    %esp,%ebp
0863e94f +0x2e60:  sub    $0x18,%esp
0863e952 +0x2e63:  mov    0x8(%ebp),%eax
0863e955 +0x2e66:  mov    %eax,(%esp)
0863e958 +0x2e69:  call   0863e91c <+0x2e2d>
0863e95d +0x2e6e:  mov    0x8(%ebp),%eax
0863e960 +0x2e71:  mov    %eax,(%esp)
0863e963 +0x2e74:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e968 +0x2e79:  leave
0863e969 +0x2e7a:  ret
0863e96a +0x2e7b:  push   %ebp
0863e96b +0x2e7c:  mov    %esp,%ebp
0863e96d +0x2e7e:  sub    $0x18,%esp
0863e970 +0x2e81:  mov    0x8(%ebp),%eax
0863e973 +0x2e84:  movl   $&_ZTV23Timer_ReturnUserTimeout+0x8,(%eax)
0863e979 +0x2e8a:  mov    0x8(%ebp),%eax
0863e97c +0x2e8d:  mov    %eax,(%esp)
0863e97f +0x2e90:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e984 +0x2e95:  mov    $0x0,%eax
0863e989 +0x2e9a:  test   %al,%al
0863e98b +0x2e9c:  je     0863e998 <+0x2ea9>
0863e98d +0x2e9e:  mov    0x8(%ebp),%eax
0863e990 +0x2ea1:  mov    %eax,(%esp)
0863e993 +0x2ea4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e998 +0x2ea9:  leave
0863e999 +0x2eaa:  ret
0863e99a +0x2eab:  push   %ebp
0863e99b +0x2eac:  mov    %esp,%ebp
0863e99d +0x2eae:  sub    $0x18,%esp
0863e9a0 +0x2eb1:  mov    0x8(%ebp),%eax
0863e9a3 +0x2eb4:  mov    %eax,(%esp)
0863e9a6 +0x2eb7:  call   0863e96a <+0x2e7b>
0863e9ab +0x2ebc:  mov    0x8(%ebp),%eax
0863e9ae +0x2ebf:  mov    %eax,(%esp)
0863e9b1 +0x2ec2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e9b6 +0x2ec7:  leave
0863e9b7 +0x2ec8:  ret
0863e9b8 +0x2ec9:  push   %ebp
0863e9b9 +0x2eca:  mov    %esp,%ebp
0863e9bb +0x2ecc:  sub    $0x18,%esp
0863e9be +0x2ecf:  mov    0x8(%ebp),%eax
0863e9c1 +0x2ed2:  movl   $&_ZTV20Timer_FairPvPRematch+0x8,(%eax)
0863e9c7 +0x2ed8:  mov    0x8(%ebp),%eax
0863e9ca +0x2edb:  mov    %eax,(%esp)
0863e9cd +0x2ede:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863e9d2 +0x2ee3:  mov    $0x0,%eax
0863e9d7 +0x2ee8:  test   %al,%al
0863e9d9 +0x2eea:  je     0863e9e6 <+0x2ef7>
0863e9db +0x2eec:  mov    0x8(%ebp),%eax
0863e9de +0x2eef:  mov    %eax,(%esp)
0863e9e1 +0x2ef2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863e9e6 +0x2ef7:  leave
0863e9e7 +0x2ef8:  ret
0863e9e8 +0x2ef9:  push   %ebp
0863e9e9 +0x2efa:  mov    %esp,%ebp
0863e9eb +0x2efc:  sub    $0x18,%esp
0863e9ee +0x2eff:  mov    0x8(%ebp),%eax
0863e9f1 +0x2f02:  mov    %eax,(%esp)
0863e9f4 +0x2f05:  call   0863e9b8 <+0x2ec9>
0863e9f9 +0x2f0a:  mov    0x8(%ebp),%eax
0863e9fc +0x2f0d:  mov    %eax,(%esp)
0863e9ff +0x2f10:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ea04 +0x2f15:  leave
0863ea05 +0x2f16:  ret
0863ea06 +0x2f17:  push   %ebp
0863ea07 +0x2f18:  mov    %esp,%ebp
0863ea09 +0x2f1a:  sub    $0x18,%esp
0863ea0c +0x2f1d:  mov    0x8(%ebp),%eax
0863ea0f +0x2f20:  movl   $&_ZTV27Timer_DungeonInoutCloseTime+0x8,(%eax)
0863ea15 +0x2f26:  mov    0x8(%ebp),%eax
0863ea18 +0x2f29:  mov    %eax,(%esp)
0863ea1b +0x2f2c:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ea20 +0x2f31:  mov    $0x0,%eax
0863ea25 +0x2f36:  test   %al,%al
0863ea27 +0x2f38:  je     0863ea34 <+0x2f45>
0863ea29 +0x2f3a:  mov    0x8(%ebp),%eax
0863ea2c +0x2f3d:  mov    %eax,(%esp)
0863ea2f +0x2f40:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ea34 +0x2f45:  leave
0863ea35 +0x2f46:  ret
0863ea36 +0x2f47:  push   %ebp
0863ea37 +0x2f48:  mov    %esp,%ebp
0863ea39 +0x2f4a:  sub    $0x18,%esp
0863ea3c +0x2f4d:  mov    0x8(%ebp),%eax
0863ea3f +0x2f50:  mov    %eax,(%esp)
0863ea42 +0x2f53:  call   0863ea06 <+0x2f17>
0863ea47 +0x2f58:  mov    0x8(%ebp),%eax
0863ea4a +0x2f5b:  mov    %eax,(%esp)
0863ea4d +0x2f5e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ea52 +0x2f63:  leave
0863ea53 +0x2f64:  ret
0863ea54 +0x2f65:  push   %ebp
0863ea55 +0x2f66:  mov    %esp,%ebp
0863ea57 +0x2f68:  sub    $0x18,%esp
0863ea5a +0x2f6b:  mov    0x8(%ebp),%eax
0863ea5d +0x2f6e:  movl   $&_ZTV26Timer_DungeonInoutOpenTime+0x8,(%eax)
0863ea63 +0x2f74:  mov    0x8(%ebp),%eax
0863ea66 +0x2f77:  mov    %eax,(%esp)
0863ea69 +0x2f7a:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ea6e +0x2f7f:  mov    $0x0,%eax
0863ea73 +0x2f84:  test   %al,%al
0863ea75 +0x2f86:  je     0863ea82 <+0x2f93>
0863ea77 +0x2f88:  mov    0x8(%ebp),%eax
0863ea7a +0x2f8b:  mov    %eax,(%esp)
0863ea7d +0x2f8e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ea82 +0x2f93:  leave
0863ea83 +0x2f94:  ret
0863ea84 +0x2f95:  push   %ebp
0863ea85 +0x2f96:  mov    %esp,%ebp
0863ea87 +0x2f98:  sub    $0x18,%esp
0863ea8a +0x2f9b:  mov    0x8(%ebp),%eax
0863ea8d +0x2f9e:  mov    %eax,(%esp)
0863ea90 +0x2fa1:  call   0863ea54 <+0x2f65>
0863ea95 +0x2fa6:  mov    0x8(%ebp),%eax
0863ea98 +0x2fa9:  mov    %eax,(%esp)
0863ea9b +0x2fac:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863eaa0 +0x2fb1:  leave
0863eaa1 +0x2fb2:  ret
0863eaa2 +0x2fb3:  push   %ebp
0863eaa3 +0x2fb4:  mov    %esp,%ebp
0863eaa5 +0x2fb6:  sub    $0x18,%esp
0863eaa8 +0x2fb9:  mov    0x8(%ebp),%eax
0863eaab +0x2fbc:  movl   $&_ZTV21Timer_PcRoomAuthRetry+0x8,(%eax)
0863eab1 +0x2fc2:  mov    0x8(%ebp),%eax
0863eab4 +0x2fc5:  mov    %eax,(%esp)
0863eab7 +0x2fc8:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863eabc +0x2fcd:  mov    $0x0,%eax
0863eac1 +0x2fd2:  test   %al,%al
0863eac3 +0x2fd4:  je     0863ead0 <+0x2fe1>
0863eac5 +0x2fd6:  mov    0x8(%ebp),%eax
0863eac8 +0x2fd9:  mov    %eax,(%esp)
0863eacb +0x2fdc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ead0 +0x2fe1:  leave
0863ead1 +0x2fe2:  ret
0863ead2 +0x2fe3:  push   %ebp
0863ead3 +0x2fe4:  mov    %esp,%ebp
0863ead5 +0x2fe6:  sub    $0x18,%esp
0863ead8 +0x2fe9:  mov    0x8(%ebp),%eax
0863eadb +0x2fec:  mov    %eax,(%esp)
0863eade +0x2fef:  call   0863eaa2 <+0x2fb3>
0863eae3 +0x2ff4:  mov    0x8(%ebp),%eax
0863eae6 +0x2ff7:  mov    %eax,(%esp)
0863eae9 +0x2ffa:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863eaee +0x2fff:  leave
0863eaef +0x3000:  ret
0863eaf0 +0x3001:  push   %ebp
0863eaf1 +0x3002:  mov    %esp,%ebp
0863eaf3 +0x3004:  sub    $0x18,%esp
0863eaf6 +0x3007:  mov    0x8(%ebp),%eax
0863eaf9 +0x300a:  movl   $&_ZTV21Timer_RoutingItemWait+0x8,(%eax)
0863eaff +0x3010:  mov    0x8(%ebp),%eax
0863eb02 +0x3013:  mov    %eax,(%esp)
0863eb05 +0x3016:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863eb0a +0x301b:  mov    $0x0,%eax
0863eb0f +0x3020:  test   %al,%al
0863eb11 +0x3022:  je     0863eb1e <+0x302f>
0863eb13 +0x3024:  mov    0x8(%ebp),%eax
0863eb16 +0x3027:  mov    %eax,(%esp)
0863eb19 +0x302a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863eb1e +0x302f:  leave
0863eb1f +0x3030:  ret
0863eb20 +0x3031:  push   %ebp
0863eb21 +0x3032:  mov    %esp,%ebp
0863eb23 +0x3034:  sub    $0x18,%esp
0863eb26 +0x3037:  mov    0x8(%ebp),%eax
0863eb29 +0x303a:  mov    %eax,(%esp)
0863eb2c +0x303d:  call   0863eaf0 <+0x3001>
0863eb31 +0x3042:  mov    0x8(%ebp),%eax
0863eb34 +0x3045:  mov    %eax,(%esp)
0863eb37 +0x3048:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863eb3c +0x304d:  leave
0863eb3d +0x304e:  ret
0863eb3e +0x304f:  push   %ebp
0863eb3f +0x3050:  mov    %esp,%ebp
0863eb41 +0x3052:  sub    $0x18,%esp
0863eb44 +0x3055:  mov    0x8(%ebp),%eax
0863eb47 +0x3058:  movl   $&_ZTV26Timer_ConnectP2PPvPTimeout+0x8,(%eax)
0863eb4d +0x305e:  mov    0x8(%ebp),%eax
0863eb50 +0x3061:  mov    %eax,(%esp)
0863eb53 +0x3064:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863eb58 +0x3069:  mov    $0x0,%eax
0863eb5d +0x306e:  test   %al,%al
0863eb5f +0x3070:  je     0863eb6c <+0x307d>
0863eb61 +0x3072:  mov    0x8(%ebp),%eax
0863eb64 +0x3075:  mov    %eax,(%esp)
0863eb67 +0x3078:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863eb6c +0x307d:  leave
0863eb6d +0x307e:  ret
0863eb6e +0x307f:  push   %ebp
0863eb6f +0x3080:  mov    %esp,%ebp
0863eb71 +0x3082:  sub    $0x18,%esp
0863eb74 +0x3085:  mov    0x8(%ebp),%eax
0863eb77 +0x3088:  mov    %eax,(%esp)
0863eb7a +0x308b:  call   0863eb3e <+0x304f>
0863eb7f +0x3090:  mov    0x8(%ebp),%eax
0863eb82 +0x3093:  mov    %eax,(%esp)
0863eb85 +0x3096:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863eb8a +0x309b:  leave
0863eb8b +0x309c:  ret
0863eb8c +0x309d:  push   %ebp
0863eb8d +0x309e:  mov    %esp,%ebp
0863eb8f +0x30a0:  sub    $0x18,%esp
0863eb92 +0x30a3:  mov    0x8(%ebp),%eax
0863eb95 +0x30a6:  movl   $&_ZTV25Timer_SecretShopStatistic+0x8,(%eax)
0863eb9b +0x30ac:  mov    0x8(%ebp),%eax
0863eb9e +0x30af:  mov    %eax,(%esp)
0863eba1 +0x30b2:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863eba6 +0x30b7:  mov    $0x0,%eax
0863ebab +0x30bc:  test   %al,%al
0863ebad +0x30be:  je     0863ebba <+0x30cb>
0863ebaf +0x30c0:  mov    0x8(%ebp),%eax
0863ebb2 +0x30c3:  mov    %eax,(%esp)
0863ebb5 +0x30c6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ebba +0x30cb:  leave
0863ebbb +0x30cc:  ret
0863ebbc +0x30cd:  push   %ebp
0863ebbd +0x30ce:  mov    %esp,%ebp
0863ebbf +0x30d0:  sub    $0x18,%esp
0863ebc2 +0x30d3:  mov    0x8(%ebp),%eax
0863ebc5 +0x30d6:  mov    %eax,(%esp)
0863ebc8 +0x30d9:  call   0863eb8c <+0x309d>
0863ebcd +0x30de:  mov    0x8(%ebp),%eax
0863ebd0 +0x30e1:  mov    %eax,(%esp)
0863ebd3 +0x30e4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ebd8 +0x30e9:  leave
0863ebd9 +0x30ea:  ret
0863ebda +0x30eb:  push   %ebp
0863ebdb +0x30ec:  mov    %esp,%ebp
0863ebdd +0x30ee:  sub    $0x18,%esp
0863ebe0 +0x30f1:  mov    0x8(%ebp),%eax
0863ebe3 +0x30f4:  movl   $&_ZTV33Timer_UpdateOnlinePreliminaryTeam+0x8,(%eax)
0863ebe9 +0x30fa:  mov    0x8(%ebp),%eax
0863ebec +0x30fd:  mov    %eax,(%esp)
0863ebef +0x3100:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ebf4 +0x3105:  mov    $0x0,%eax
0863ebf9 +0x310a:  test   %al,%al
0863ebfb +0x310c:  je     0863ec08 <+0x3119>
0863ebfd +0x310e:  mov    0x8(%ebp),%eax
0863ec00 +0x3111:  mov    %eax,(%esp)
0863ec03 +0x3114:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ec08 +0x3119:  leave
0863ec09 +0x311a:  ret
0863ec0a +0x311b:  push   %ebp
0863ec0b +0x311c:  mov    %esp,%ebp
0863ec0d +0x311e:  sub    $0x18,%esp
0863ec10 +0x3121:  mov    0x8(%ebp),%eax
0863ec13 +0x3124:  mov    %eax,(%esp)
0863ec16 +0x3127:  call   0863ebda <+0x30eb>
0863ec1b +0x312c:  mov    0x8(%ebp),%eax
0863ec1e +0x312f:  mov    %eax,(%esp)
0863ec21 +0x3132:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ec26 +0x3137:  leave
0863ec27 +0x3138:  ret
0863ec28 +0x3139:  push   %ebp
0863ec29 +0x313a:  mov    %esp,%ebp
0863ec2b +0x313c:  sub    $0x18,%esp
0863ec2e +0x313f:  mov    0x8(%ebp),%eax
0863ec31 +0x3142:  movl   $&_ZTV23Timer_TenMinuteSchedule+0x8,(%eax)
0863ec37 +0x3148:  mov    0x8(%ebp),%eax
0863ec3a +0x314b:  mov    %eax,(%esp)
0863ec3d +0x314e:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ec42 +0x3153:  mov    $0x0,%eax
0863ec47 +0x3158:  test   %al,%al
0863ec49 +0x315a:  je     0863ec56 <+0x3167>
0863ec4b +0x315c:  mov    0x8(%ebp),%eax
0863ec4e +0x315f:  mov    %eax,(%esp)
0863ec51 +0x3162:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ec56 +0x3167:  leave
0863ec57 +0x3168:  ret
0863ec58 +0x3169:  push   %ebp
0863ec59 +0x316a:  mov    %esp,%ebp
0863ec5b +0x316c:  sub    $0x18,%esp
0863ec5e +0x316f:  mov    0x8(%ebp),%eax
0863ec61 +0x3172:  mov    %eax,(%esp)
0863ec64 +0x3175:  call   0863ec28 <+0x3139>
0863ec69 +0x317a:  mov    0x8(%ebp),%eax
0863ec6c +0x317d:  mov    %eax,(%esp)
0863ec6f +0x3180:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ec74 +0x3185:  leave
0863ec75 +0x3186:  ret
0863ec76 +0x3187:  push   %ebp
0863ec77 +0x3188:  mov    %esp,%ebp
0863ec79 +0x318a:  sub    $0x18,%esp
0863ec7c +0x318d:  mov    0x8(%ebp),%eax
0863ec7f +0x3190:  movl   $&_ZTV14Timer_Midnight+0x8,(%eax)
0863ec85 +0x3196:  mov    0x8(%ebp),%eax
0863ec88 +0x3199:  mov    %eax,(%esp)
0863ec8b +0x319c:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ec90 +0x31a1:  mov    $0x0,%eax
0863ec95 +0x31a6:  test   %al,%al
0863ec97 +0x31a8:  je     0863eca4 <+0x31b5>
0863ec99 +0x31aa:  mov    0x8(%ebp),%eax
0863ec9c +0x31ad:  mov    %eax,(%esp)
0863ec9f +0x31b0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863eca4 +0x31b5:  leave
0863eca5 +0x31b6:  ret
0863eca6 +0x31b7:  push   %ebp
0863eca7 +0x31b8:  mov    %esp,%ebp
0863eca9 +0x31ba:  sub    $0x18,%esp
0863ecac +0x31bd:  mov    0x8(%ebp),%eax
0863ecaf +0x31c0:  mov    %eax,(%esp)
0863ecb2 +0x31c3:  call   0863ec76 <+0x3187>
0863ecb7 +0x31c8:  mov    0x8(%ebp),%eax
0863ecba +0x31cb:  mov    %eax,(%esp)
0863ecbd +0x31ce:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ecc2 +0x31d3:  leave
0863ecc3 +0x31d4:  ret
0863ecc4 +0x31d5:  push   %ebp
0863ecc5 +0x31d6:  mov    %esp,%ebp
0863ecc7 +0x31d8:  sub    $0x18,%esp
0863ecca +0x31db:  mov    0x8(%ebp),%eax
0863eccd +0x31de:  movl   $&_ZTV38Timer_Security_NonClient_CheckResponse+0x8,(%eax)
0863ecd3 +0x31e4:  mov    0x8(%ebp),%eax
0863ecd6 +0x31e7:  mov    %eax,(%esp)
0863ecd9 +0x31ea:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ecde +0x31ef:  mov    $0x0,%eax
0863ece3 +0x31f4:  test   %al,%al
0863ece5 +0x31f6:  je     0863ecf2 <+0x3203>
0863ece7 +0x31f8:  mov    0x8(%ebp),%eax
0863ecea +0x31fb:  mov    %eax,(%esp)
0863eced +0x31fe:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ecf2 +0x3203:  leave
0863ecf3 +0x3204:  ret
0863ecf4 +0x3205:  push   %ebp
0863ecf5 +0x3206:  mov    %esp,%ebp
0863ecf7 +0x3208:  sub    $0x18,%esp
0863ecfa +0x320b:  mov    0x8(%ebp),%eax
0863ecfd +0x320e:  mov    %eax,(%esp)
0863ed00 +0x3211:  call   0863ecc4 <+0x31d5>
0863ed05 +0x3216:  mov    0x8(%ebp),%eax
0863ed08 +0x3219:  mov    %eax,(%esp)
0863ed0b +0x321c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ed10 +0x3221:  leave
0863ed11 +0x3222:  ret
0863ed12 +0x3223:  push   %ebp
0863ed13 +0x3224:  mov    %esp,%ebp
0863ed15 +0x3226:  sub    $0x18,%esp
0863ed18 +0x3229:  mov    0x8(%ebp),%eax
0863ed1b +0x322c:  movl   $&_ZTV32TimerEndPowerWarVictoriousReward+0x8,(%eax)
0863ed21 +0x3232:  mov    0x8(%ebp),%eax
0863ed24 +0x3235:  mov    %eax,(%esp)
0863ed27 +0x3238:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ed2c +0x323d:  mov    $0x0,%eax
0863ed31 +0x3242:  test   %al,%al
0863ed33 +0x3244:  je     0863ed40 <+0x3251>
0863ed35 +0x3246:  mov    0x8(%ebp),%eax
0863ed38 +0x3249:  mov    %eax,(%esp)
0863ed3b +0x324c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ed40 +0x3251:  leave
0863ed41 +0x3252:  ret
0863ed42 +0x3253:  push   %ebp
0863ed43 +0x3254:  mov    %esp,%ebp
0863ed45 +0x3256:  sub    $0x18,%esp
0863ed48 +0x3259:  mov    0x8(%ebp),%eax
0863ed4b +0x325c:  mov    %eax,(%esp)
0863ed4e +0x325f:  call   0863ed12 <+0x3223>
0863ed53 +0x3264:  mov    0x8(%ebp),%eax
0863ed56 +0x3267:  mov    %eax,(%esp)
0863ed59 +0x326a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ed5e +0x326f:  leave
0863ed5f +0x3270:  ret
0863ed60 +0x3271:  push   %ebp
0863ed61 +0x3272:  mov    %esp,%ebp
0863ed63 +0x3274:  sub    $0x18,%esp
0863ed66 +0x3277:  mov    0x8(%ebp),%eax
0863ed69 +0x327a:  movl   $&_ZTV36TimerStartExpEventAfterVillageAttack+0x8,(%eax)
0863ed6f +0x3280:  mov    0x8(%ebp),%eax
0863ed72 +0x3283:  mov    %eax,(%esp)
0863ed75 +0x3286:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ed7a +0x328b:  mov    $0x0,%eax
0863ed7f +0x3290:  test   %al,%al
0863ed81 +0x3292:  je     0863ed8e <+0x329f>
0863ed83 +0x3294:  mov    0x8(%ebp),%eax
0863ed86 +0x3297:  mov    %eax,(%esp)
0863ed89 +0x329a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ed8e +0x329f:  leave
0863ed8f +0x32a0:  ret
0863ed90 +0x32a1:  push   %ebp
0863ed91 +0x32a2:  mov    %esp,%ebp
0863ed93 +0x32a4:  sub    $0x18,%esp
0863ed96 +0x32a7:  mov    0x8(%ebp),%eax
0863ed99 +0x32aa:  mov    %eax,(%esp)
0863ed9c +0x32ad:  call   0863ed60 <+0x3271>
0863eda1 +0x32b2:  mov    0x8(%ebp),%eax
0863eda4 +0x32b5:  mov    %eax,(%esp)
0863eda7 +0x32b8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863edac +0x32bd:  leave
0863edad +0x32be:  ret
0863edae +0x32bf:  push   %ebp
0863edaf +0x32c0:  mov    %esp,%ebp
0863edb1 +0x32c2:  sub    $0x18,%esp
0863edb4 +0x32c5:  mov    0x8(%ebp),%eax
0863edb7 +0x32c8:  movl   $&_ZTV32TimerUpdateCompoundEmblemStatics+0x8,(%eax)
0863edbd +0x32ce:  mov    0x8(%ebp),%eax
0863edc0 +0x32d1:  mov    %eax,(%esp)
0863edc3 +0x32d4:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863edc8 +0x32d9:  mov    $0x0,%eax
0863edcd +0x32de:  test   %al,%al
0863edcf +0x32e0:  je     0863eddc <+0x32ed>
0863edd1 +0x32e2:  mov    0x8(%ebp),%eax
0863edd4 +0x32e5:  mov    %eax,(%esp)
0863edd7 +0x32e8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863eddc +0x32ed:  leave
0863eddd +0x32ee:  ret
0863edde +0x32ef:  push   %ebp
0863eddf +0x32f0:  mov    %esp,%ebp
0863ede1 +0x32f2:  sub    $0x18,%esp
0863ede4 +0x32f5:  mov    0x8(%ebp),%eax
0863ede7 +0x32f8:  mov    %eax,(%esp)
0863edea +0x32fb:  call   0863edae <+0x32bf>
0863edef +0x3300:  mov    0x8(%ebp),%eax
0863edf2 +0x3303:  mov    %eax,(%esp)
0863edf5 +0x3306:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863edfa +0x330b:  leave
0863edfb +0x330c:  ret
0863edfc +0x330d:  push   %ebp
0863edfd +0x330e:  mov    %esp,%ebp
0863edff +0x3310:  sub    $0x18,%esp
0863ee02 +0x3313:  mov    0x8(%ebp),%eax
0863ee05 +0x3316:  movl   $&_ZTV22TimerItemUnlockWaiting+0x8,(%eax)
0863ee0b +0x331c:  mov    0x8(%ebp),%eax
0863ee0e +0x331f:  mov    %eax,(%esp)
0863ee11 +0x3322:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ee16 +0x3327:  mov    $0x0,%eax
0863ee1b +0x332c:  test   %al,%al
0863ee1d +0x332e:  je     0863ee2a <+0x333b>
0863ee1f +0x3330:  mov    0x8(%ebp),%eax
0863ee22 +0x3333:  mov    %eax,(%esp)
0863ee25 +0x3336:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ee2a +0x333b:  leave
0863ee2b +0x333c:  ret
0863ee2c +0x333d:  push   %ebp
0863ee2d +0x333e:  mov    %esp,%ebp
0863ee2f +0x3340:  sub    $0x18,%esp
0863ee32 +0x3343:  mov    0x8(%ebp),%eax
0863ee35 +0x3346:  mov    %eax,(%esp)
0863ee38 +0x3349:  call   0863edfc <+0x330d>
0863ee3d +0x334e:  mov    0x8(%ebp),%eax
0863ee40 +0x3351:  mov    %eax,(%esp)
0863ee43 +0x3354:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ee48 +0x3359:  leave
0863ee49 +0x335a:  ret
0863ee4a +0x335b:  push   %ebp
0863ee4b +0x335c:  mov    %esp,%ebp
0863ee4d +0x335e:  sub    $0x18,%esp
0863ee50 +0x3361:  mov    0x8(%ebp),%eax
0863ee53 +0x3364:  movl   $&_ZTV31TimerVillageAttackedPlayTimeout+0x8,(%eax)
0863ee59 +0x336a:  mov    0x8(%ebp),%eax
0863ee5c +0x336d:  mov    %eax,(%esp)
0863ee5f +0x3370:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ee64 +0x3375:  mov    $0x0,%eax
0863ee69 +0x337a:  test   %al,%al
0863ee6b +0x337c:  je     0863ee78 <+0x3389>
0863ee6d +0x337e:  mov    0x8(%ebp),%eax
0863ee70 +0x3381:  mov    %eax,(%esp)
0863ee73 +0x3384:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ee78 +0x3389:  leave
0863ee79 +0x338a:  ret
0863ee7a +0x338b:  push   %ebp
0863ee7b +0x338c:  mov    %esp,%ebp
0863ee7d +0x338e:  sub    $0x18,%esp
0863ee80 +0x3391:  mov    0x8(%ebp),%eax
0863ee83 +0x3394:  mov    %eax,(%esp)
0863ee86 +0x3397:  call   0863ee4a <+0x335b>
0863ee8b +0x339c:  mov    0x8(%ebp),%eax
0863ee8e +0x339f:  mov    %eax,(%esp)
0863ee91 +0x33a2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ee96 +0x33a7:  leave
0863ee97 +0x33a8:  ret
0863ee98 +0x33a9:  push   %ebp
0863ee99 +0x33aa:  mov    %esp,%ebp
0863ee9b +0x33ac:  sub    $0x18,%esp
0863ee9e +0x33af:  mov    0x8(%ebp),%eax
0863eea1 +0x33b2:  movl   $&_ZTV25TimerStartVillageAttacked+0x8,(%eax)
0863eea7 +0x33b8:  mov    0x8(%ebp),%eax
0863eeaa +0x33bb:  mov    %eax,(%esp)
0863eead +0x33be:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863eeb2 +0x33c3:  mov    $0x0,%eax
0863eeb7 +0x33c8:  test   %al,%al
0863eeb9 +0x33ca:  je     0863eec6 <+0x33d7>
0863eebb +0x33cc:  mov    0x8(%ebp),%eax
0863eebe +0x33cf:  mov    %eax,(%esp)
0863eec1 +0x33d2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863eec6 +0x33d7:  leave
0863eec7 +0x33d8:  ret
0863eec8 +0x33d9:  push   %ebp
0863eec9 +0x33da:  mov    %esp,%ebp
0863eecb +0x33dc:  sub    $0x18,%esp
0863eece +0x33df:  mov    0x8(%ebp),%eax
0863eed1 +0x33e2:  mov    %eax,(%esp)
0863eed4 +0x33e5:  call   0863ee98 <+0x33a9>
0863eed9 +0x33ea:  mov    0x8(%ebp),%eax
0863eedc +0x33ed:  mov    %eax,(%esp)
0863eedf +0x33f0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863eee4 +0x33f5:  leave
0863eee5 +0x33f6:  ret
0863eee6 +0x33f7:  push   %ebp
0863eee7 +0x33f8:  mov    %esp,%ebp
0863eee9 +0x33fa:  sub    $0x18,%esp
0863eeec +0x33fd:  mov    0x8(%ebp),%eax
0863eeef +0x3400:  movl   $&_ZTV24TimerVillageMonsterRegen+0x8,(%eax)
0863eef5 +0x3406:  mov    0x8(%ebp),%eax
0863eef8 +0x3409:  mov    %eax,(%esp)
0863eefb +0x340c:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ef00 +0x3411:  mov    $0x0,%eax
0863ef05 +0x3416:  test   %al,%al
0863ef07 +0x3418:  je     0863ef14 <+0x3425>
0863ef09 +0x341a:  mov    0x8(%ebp),%eax
0863ef0c +0x341d:  mov    %eax,(%esp)
0863ef0f +0x3420:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ef14 +0x3425:  leave
0863ef15 +0x3426:  ret
0863ef16 +0x3427:  push   %ebp
0863ef17 +0x3428:  mov    %esp,%ebp
0863ef19 +0x342a:  sub    $0x18,%esp
0863ef1c +0x342d:  mov    0x8(%ebp),%eax
0863ef1f +0x3430:  mov    %eax,(%esp)
0863ef22 +0x3433:  call   0863eee6 <+0x33f7>
0863ef27 +0x3438:  mov    0x8(%ebp),%eax
0863ef2a +0x343b:  mov    %eax,(%esp)
0863ef2d +0x343e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ef32 +0x3443:  leave
0863ef33 +0x3444:  ret
0863ef34 +0x3445:  push   %ebp
0863ef35 +0x3446:  mov    %esp,%ebp
0863ef37 +0x3448:  sub    $0x18,%esp
0863ef3a +0x344b:  mov    0x8(%ebp),%eax
0863ef3d +0x344e:  movl   $&_ZTV29TimerVillageMonsterUpdateRate+0x8,(%eax)
0863ef43 +0x3454:  mov    0x8(%ebp),%eax
0863ef46 +0x3457:  mov    %eax,(%esp)
0863ef49 +0x345a:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ef4e +0x345f:  mov    $0x0,%eax
0863ef53 +0x3464:  test   %al,%al
0863ef55 +0x3466:  je     0863ef62 <+0x3473>
0863ef57 +0x3468:  mov    0x8(%ebp),%eax
0863ef5a +0x346b:  mov    %eax,(%esp)
0863ef5d +0x346e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ef62 +0x3473:  leave
0863ef63 +0x3474:  ret
0863ef64 +0x3475:  push   %ebp
0863ef65 +0x3476:  mov    %esp,%ebp
0863ef67 +0x3478:  sub    $0x18,%esp
0863ef6a +0x347b:  mov    0x8(%ebp),%eax
0863ef6d +0x347e:  mov    %eax,(%esp)
0863ef70 +0x3481:  call   0863ef34 <+0x3445>
0863ef75 +0x3486:  mov    0x8(%ebp),%eax
0863ef78 +0x3489:  mov    %eax,(%esp)
0863ef7b +0x348c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ef80 +0x3491:  leave
0863ef81 +0x3492:  ret
0863ef82 +0x3493:  push   %ebp
0863ef83 +0x3494:  mov    %esp,%ebp
0863ef85 +0x3496:  sub    $0x18,%esp
0863ef88 +0x3499:  mov    0x8(%ebp),%eax
0863ef8b +0x349c:  movl   $&_ZTV16TimerRequestExit+0x8,(%eax)
0863ef91 +0x34a2:  mov    0x8(%ebp),%eax
0863ef94 +0x34a5:  mov    %eax,(%esp)
0863ef97 +0x34a8:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ef9c +0x34ad:  mov    $0x0,%eax
0863efa1 +0x34b2:  test   %al,%al
0863efa3 +0x34b4:  je     0863efb0 <+0x34c1>
0863efa5 +0x34b6:  mov    0x8(%ebp),%eax
0863efa8 +0x34b9:  mov    %eax,(%esp)
0863efab +0x34bc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863efb0 +0x34c1:  leave
0863efb1 +0x34c2:  ret
0863efb2 +0x34c3:  push   %ebp
0863efb3 +0x34c4:  mov    %esp,%ebp
0863efb5 +0x34c6:  sub    $0x18,%esp
0863efb8 +0x34c9:  mov    0x8(%ebp),%eax
0863efbb +0x34cc:  mov    %eax,(%esp)
0863efbe +0x34cf:  call   0863ef82 <+0x3493>
0863efc3 +0x34d4:  mov    0x8(%ebp),%eax
0863efc6 +0x34d7:  mov    %eax,(%esp)
0863efc9 +0x34da:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863efce +0x34df:  leave
0863efcf +0x34e0:  ret
0863efd0 +0x34e1:  push   %ebp
0863efd1 +0x34e2:  mov    %esp,%ebp
0863efd3 +0x34e4:  sub    $0x18,%esp
0863efd6 +0x34e7:  mov    0x8(%ebp),%eax
0863efd9 +0x34ea:  movl   $&_ZTV18TimerRevivalCharac+0x8,(%eax)
0863efdf +0x34f0:  mov    0x8(%ebp),%eax
0863efe2 +0x34f3:  mov    %eax,(%esp)
0863efe5 +0x34f6:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863efea +0x34fb:  mov    $0x0,%eax
0863efef +0x3500:  test   %al,%al
0863eff1 +0x3502:  je     0863effe <+0x350f>
0863eff3 +0x3504:  mov    0x8(%ebp),%eax
0863eff6 +0x3507:  mov    %eax,(%esp)
0863eff9 +0x350a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863effe +0x350f:  leave
0863efff +0x3510:  ret
0863f000 +0x3511:  push   %ebp
0863f001 +0x3512:  mov    %esp,%ebp
0863f003 +0x3514:  sub    $0x18,%esp
0863f006 +0x3517:  mov    0x8(%ebp),%eax
0863f009 +0x351a:  mov    %eax,(%esp)
0863f00c +0x351d:  call   0863efd0 <+0x34e1>
0863f011 +0x3522:  mov    0x8(%ebp),%eax
0863f014 +0x3525:  mov    %eax,(%esp)
0863f017 +0x3528:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f01c +0x352d:  leave
0863f01d +0x352e:  ret
0863f01e +0x352f:  push   %ebp
0863f01f +0x3530:  mov    %esp,%ebp
0863f021 +0x3532:  sub    $0x18,%esp
0863f024 +0x3535:  mov    0x8(%ebp),%eax
0863f027 +0x3538:  movl   $&_ZTV27TimerUltimateNextRoundStart+0x8,(%eax)
0863f02d +0x353e:  mov    0x8(%ebp),%eax
0863f030 +0x3541:  mov    %eax,(%esp)
0863f033 +0x3544:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f038 +0x3549:  mov    $0x0,%eax
0863f03d +0x354e:  test   %al,%al
0863f03f +0x3550:  je     0863f04c <+0x355d>
0863f041 +0x3552:  mov    0x8(%ebp),%eax
0863f044 +0x3555:  mov    %eax,(%esp)
0863f047 +0x3558:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f04c +0x355d:  leave
0863f04d +0x355e:  ret
0863f04e +0x355f:  push   %ebp
0863f04f +0x3560:  mov    %esp,%ebp
0863f051 +0x3562:  sub    $0x18,%esp
0863f054 +0x3565:  mov    0x8(%ebp),%eax
0863f057 +0x3568:  mov    %eax,(%esp)
0863f05a +0x356b:  call   0863f01e <+0x352f>
0863f05f +0x3570:  mov    0x8(%ebp),%eax
0863f062 +0x3573:  mov    %eax,(%esp)
0863f065 +0x3576:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f06a +0x357b:  leave
0863f06b +0x357c:  ret
0863f06c +0x357d:  push   %ebp
0863f06d +0x357e:  mov    %esp,%ebp
0863f06f +0x3580:  sub    $0x18,%esp
0863f072 +0x3583:  mov    0x8(%ebp),%eax
0863f075 +0x3586:  movl   $&_ZTV28TimerBloodDungeonClearReward+0x8,(%eax)
0863f07b +0x358c:  mov    0x8(%ebp),%eax
0863f07e +0x358f:  mov    %eax,(%esp)
0863f081 +0x3592:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f086 +0x3597:  mov    $0x0,%eax
0863f08b +0x359c:  test   %al,%al
0863f08d +0x359e:  je     0863f09a <+0x35ab>
0863f08f +0x35a0:  mov    0x8(%ebp),%eax
0863f092 +0x35a3:  mov    %eax,(%esp)
0863f095 +0x35a6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f09a +0x35ab:  leave
0863f09b +0x35ac:  ret
0863f09c +0x35ad:  push   %ebp
0863f09d +0x35ae:  mov    %esp,%ebp
0863f09f +0x35b0:  sub    $0x18,%esp
0863f0a2 +0x35b3:  mov    0x8(%ebp),%eax
0863f0a5 +0x35b6:  mov    %eax,(%esp)
0863f0a8 +0x35b9:  call   0863f06c <+0x357d>
0863f0ad +0x35be:  mov    0x8(%ebp),%eax
0863f0b0 +0x35c1:  mov    %eax,(%esp)
0863f0b3 +0x35c4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f0b8 +0x35c9:  leave
0863f0b9 +0x35ca:  ret
0863f0ba +0x35cb:  push   %ebp
0863f0bb +0x35cc:  mov    %esp,%ebp
0863f0bd +0x35ce:  sub    $0x18,%esp
0863f0c0 +0x35d1:  mov    0x8(%ebp),%eax
0863f0c3 +0x35d4:  movl   $&_ZTV23TimerSetTradePunishUser+0x8,(%eax)
0863f0c9 +0x35da:  mov    0x8(%ebp),%eax
0863f0cc +0x35dd:  mov    %eax,(%esp)
0863f0cf +0x35e0:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f0d4 +0x35e5:  mov    $0x0,%eax
0863f0d9 +0x35ea:  test   %al,%al
0863f0db +0x35ec:  je     0863f0e8 <+0x35f9>
0863f0dd +0x35ee:  mov    0x8(%ebp),%eax
0863f0e0 +0x35f1:  mov    %eax,(%esp)
0863f0e3 +0x35f4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f0e8 +0x35f9:  leave
0863f0e9 +0x35fa:  ret
0863f0ea +0x35fb:  push   %ebp
0863f0eb +0x35fc:  mov    %esp,%ebp
0863f0ed +0x35fe:  sub    $0x18,%esp
0863f0f0 +0x3601:  mov    0x8(%ebp),%eax
0863f0f3 +0x3604:  mov    %eax,(%esp)
0863f0f6 +0x3607:  call   0863f0ba <+0x35cb>
0863f0fb +0x360c:  mov    0x8(%ebp),%eax
0863f0fe +0x360f:  mov    %eax,(%esp)
0863f101 +0x3612:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f106 +0x3617:  leave
0863f107 +0x3618:  ret
0863f108 +0x3619:  push   %ebp
0863f109 +0x361a:  mov    %esp,%ebp
0863f10b +0x361c:  sub    $0x18,%esp
0863f10e +0x361f:  mov    0x8(%ebp),%eax
0863f111 +0x3622:  movl   $&_ZTV18TimerSetPunishUser+0x8,(%eax)
0863f117 +0x3628:  mov    0x8(%ebp),%eax
0863f11a +0x362b:  mov    %eax,(%esp)
0863f11d +0x362e:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f122 +0x3633:  mov    $0x0,%eax
0863f127 +0x3638:  test   %al,%al
0863f129 +0x363a:  je     0863f136 <+0x3647>
0863f12b +0x363c:  mov    0x8(%ebp),%eax
0863f12e +0x363f:  mov    %eax,(%esp)
0863f131 +0x3642:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f136 +0x3647:  leave
0863f137 +0x3648:  ret
0863f138 +0x3649:  push   %ebp
0863f139 +0x364a:  mov    %esp,%ebp
0863f13b +0x364c:  sub    $0x18,%esp
0863f13e +0x364f:  mov    0x8(%ebp),%eax
0863f141 +0x3652:  mov    %eax,(%esp)
0863f144 +0x3655:  call   0863f108 <+0x3619>
0863f149 +0x365a:  mov    0x8(%ebp),%eax
0863f14c +0x365d:  mov    %eax,(%esp)
0863f14f +0x3660:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f154 +0x3665:  leave
0863f155 +0x3666:  ret
0863f156 +0x3667:  push   %ebp
0863f157 +0x3668:  mov    %esp,%ebp
0863f159 +0x366a:  push   %esi
0863f15a +0x366b:  push   %ebx
0863f15b +0x366c:  sub    $0x10,%esp
0863f15e +0x366f:  mov    0x8(%ebp),%eax
0863f161 +0x3672:  movl   $&_ZTV20TimerGeneratePowerUp+0x8,(%eax)
0863f167 +0x3678:  mov    0x8(%ebp),%eax
0863f16a +0x367b:  add    $0x10,%eax
0863f16d +0x367e:  mov    %eax,(%esp)
0863f170 +0x3681:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
0863f175 +0x3686:  jmp    0863f18f <+0x36a0>
0863f177 +0x3688:  mov    %edx,%ebx
0863f179 +0x368a:  mov    %eax,%esi
0863f17b +0x368c:  mov    0x8(%ebp),%eax
0863f17e +0x368f:  add    $0x4,%eax
0863f181 +0x3692:  mov    %eax,(%esp)
0863f184 +0x3695:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
0863f189 +0x369a:  mov    %esi,%eax
0863f18b +0x369c:  mov    %ebx,%edx
0863f18d +0x369e:  jmp    0863f19f <+0x36b0>
0863f18f +0x36a0:  mov    0x8(%ebp),%eax
0863f192 +0x36a3:  add    $0x4,%eax
0863f195 +0x36a6:  mov    %eax,(%esp)
0863f198 +0x36a9:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
0863f19d +0x36ae:  jmp    0863f1ba <+0x36cb>
0863f19f +0x36b0:  mov    %edx,%ebx
0863f1a1 +0x36b2:  mov    %eax,%esi
0863f1a3 +0x36b4:  mov    0x8(%ebp),%eax
0863f1a6 +0x36b7:  mov    %eax,(%esp)
0863f1a9 +0x36ba:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f1ae +0x36bf:  mov    %esi,%eax
0863f1b0 +0x36c1:  mov    %ebx,%edx
0863f1b2 +0x36c3:  mov    %eax,(%esp)
0863f1b5 +0x36c6:  call   08ae3750 <_Unwind_Resume>
0863f1ba +0x36cb:  mov    0x8(%ebp),%eax
0863f1bd +0x36ce:  mov    %eax,(%esp)
0863f1c0 +0x36d1:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f1c5 +0x36d6:  mov    $0x0,%eax
0863f1ca +0x36db:  test   %al,%al
0863f1cc +0x36dd:  je     0863f1d9 <+0x36ea>
0863f1ce +0x36df:  mov    0x8(%ebp),%eax
0863f1d1 +0x36e2:  mov    %eax,(%esp)
0863f1d4 +0x36e5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f1d9 +0x36ea:  add    $0x10,%esp
0863f1dc +0x36ed:  pop    %ebx
0863f1dd +0x36ee:  pop    %esi
0863f1de +0x36ef:  pop    %ebp
0863f1df +0x36f0:  ret
0863f1e0 +0x36f1:  push   %ebp
0863f1e1 +0x36f2:  mov    %esp,%ebp
0863f1e3 +0x36f4:  sub    $0x18,%esp
0863f1e6 +0x36f7:  mov    0x8(%ebp),%eax
0863f1e9 +0x36fa:  mov    %eax,(%esp)
0863f1ec +0x36fd:  call   0863f156 <+0x3667>
0863f1f1 +0x3702:  mov    0x8(%ebp),%eax
0863f1f4 +0x3705:  mov    %eax,(%esp)
0863f1f7 +0x3708:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f1fc +0x370d:  leave
0863f1fd +0x370e:  ret
0863f1fe +0x370f:  push   %ebp
0863f1ff +0x3710:  mov    %esp,%ebp
0863f201 +0x3712:  sub    $0x18,%esp
0863f204 +0x3715:  mov    0x8(%ebp),%eax
0863f207 +0x3718:  movl   $&_ZTV28TimerGeneratePowerUpNotiTime+0x8,(%eax)
0863f20d +0x371e:  mov    0x8(%ebp),%eax
0863f210 +0x3721:  mov    %eax,(%esp)
0863f213 +0x3724:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f218 +0x3729:  mov    $0x0,%eax
0863f21d +0x372e:  test   %al,%al
0863f21f +0x3730:  je     0863f22c <+0x373d>
0863f221 +0x3732:  mov    0x8(%ebp),%eax
0863f224 +0x3735:  mov    %eax,(%esp)
0863f227 +0x3738:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f22c +0x373d:  leave
0863f22d +0x373e:  ret
0863f22e +0x373f:  push   %ebp
0863f22f +0x3740:  mov    %esp,%ebp
0863f231 +0x3742:  sub    $0x18,%esp
0863f234 +0x3745:  mov    0x8(%ebp),%eax
0863f237 +0x3748:  mov    %eax,(%esp)
0863f23a +0x374b:  call   0863f1fe <+0x370f>
0863f23f +0x3750:  mov    0x8(%ebp),%eax
0863f242 +0x3753:  mov    %eax,(%esp)
0863f245 +0x3756:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f24a +0x375b:  leave
0863f24b +0x375c:  ret
0863f24c +0x375d:  push   %ebp
0863f24d +0x375e:  mov    %esp,%ebp
0863f24f +0x3760:  sub    $0x18,%esp
0863f252 +0x3763:  mov    0x8(%ebp),%eax
0863f255 +0x3766:  movl   $&_ZTV31TimerRefreshPowerWarProcessInfo+0x8,(%eax)
0863f25b +0x376c:  mov    0x8(%ebp),%eax
0863f25e +0x376f:  mov    %eax,(%esp)
0863f261 +0x3772:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f266 +0x3777:  mov    $0x0,%eax
0863f26b +0x377c:  test   %al,%al
0863f26d +0x377e:  je     0863f27a <+0x378b>
0863f26f +0x3780:  mov    0x8(%ebp),%eax
0863f272 +0x3783:  mov    %eax,(%esp)
0863f275 +0x3786:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f27a +0x378b:  leave
0863f27b +0x378c:  ret
0863f27c +0x378d:  push   %ebp
0863f27d +0x378e:  mov    %esp,%ebp
0863f27f +0x3790:  sub    $0x18,%esp
0863f282 +0x3793:  mov    0x8(%ebp),%eax
0863f285 +0x3796:  mov    %eax,(%esp)
0863f288 +0x3799:  call   0863f24c <+0x375d>
0863f28d +0x379e:  mov    0x8(%ebp),%eax
0863f290 +0x37a1:  mov    %eax,(%esp)
0863f293 +0x37a4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f298 +0x37a9:  leave
0863f299 +0x37aa:  ret
0863f29a +0x37ab:  push   %ebp
0863f29b +0x37ac:  mov    %esp,%ebp
0863f29d +0x37ae:  sub    $0x18,%esp
0863f2a0 +0x37b1:  mov    0x8(%ebp),%eax
0863f2a3 +0x37b4:  movl   $&_ZTV24TimerCheckPowerWarAbuser+0x8,(%eax)
0863f2a9 +0x37ba:  mov    0x8(%ebp),%eax
0863f2ac +0x37bd:  mov    %eax,(%esp)
0863f2af +0x37c0:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f2b4 +0x37c5:  mov    $0x0,%eax
0863f2b9 +0x37ca:  test   %al,%al
0863f2bb +0x37cc:  je     0863f2c8 <+0x37d9>
0863f2bd +0x37ce:  mov    0x8(%ebp),%eax
0863f2c0 +0x37d1:  mov    %eax,(%esp)
0863f2c3 +0x37d4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f2c8 +0x37d9:  leave
0863f2c9 +0x37da:  ret
0863f2ca +0x37db:  push   %ebp
0863f2cb +0x37dc:  mov    %esp,%ebp
0863f2cd +0x37de:  sub    $0x18,%esp
0863f2d0 +0x37e1:  mov    0x8(%ebp),%eax
0863f2d3 +0x37e4:  mov    %eax,(%esp)
0863f2d6 +0x37e7:  call   0863f29a <+0x37ab>
0863f2db +0x37ec:  mov    0x8(%ebp),%eax
0863f2de +0x37ef:  mov    %eax,(%esp)
0863f2e1 +0x37f2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f2e6 +0x37f7:  leave
0863f2e7 +0x37f8:  ret
0863f2e8 +0x37f9:  push   %ebp
0863f2e9 +0x37fa:  mov    %esp,%ebp
0863f2eb +0x37fc:  sub    $0x18,%esp
0863f2ee +0x37ff:  mov    0x8(%ebp),%eax
0863f2f1 +0x3802:  movl   $&_ZTV20TimerElevatorDungeon+0x8,(%eax)
0863f2f7 +0x3808:  mov    0x8(%ebp),%eax
0863f2fa +0x380b:  mov    %eax,(%esp)
0863f2fd +0x380e:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f302 +0x3813:  mov    $0x0,%eax
0863f307 +0x3818:  test   %al,%al
0863f309 +0x381a:  je     0863f316 <+0x3827>
0863f30b +0x381c:  mov    0x8(%ebp),%eax
0863f30e +0x381f:  mov    %eax,(%esp)
0863f311 +0x3822:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f316 +0x3827:  leave
0863f317 +0x3828:  ret
0863f318 +0x3829:  push   %ebp
0863f319 +0x382a:  mov    %esp,%ebp
0863f31b +0x382c:  sub    $0x18,%esp
0863f31e +0x382f:  mov    0x8(%ebp),%eax
0863f321 +0x3832:  mov    %eax,(%esp)
0863f324 +0x3835:  call   0863f2e8 <+0x37f9>
0863f329 +0x383a:  mov    0x8(%ebp),%eax
0863f32c +0x383d:  mov    %eax,(%esp)
0863f32f +0x3840:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f334 +0x3845:  leave
0863f335 +0x3846:  ret
0863f336 +0x3847:  push   %ebp
0863f337 +0x3848:  mov    %esp,%ebp
0863f339 +0x384a:  sub    $0x18,%esp
0863f33c +0x384d:  mov    0x8(%ebp),%eax
0863f33f +0x3850:  movl   $&_ZTV18TimerNPCMoodChange+0x8,(%eax)
0863f345 +0x3856:  mov    0x8(%ebp),%eax
0863f348 +0x3859:  mov    %eax,(%esp)
0863f34b +0x385c:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f350 +0x3861:  mov    $0x0,%eax
0863f355 +0x3866:  test   %al,%al
0863f357 +0x3868:  je     0863f364 <+0x3875>
0863f359 +0x386a:  mov    0x8(%ebp),%eax
0863f35c +0x386d:  mov    %eax,(%esp)
0863f35f +0x3870:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f364 +0x3875:  leave
0863f365 +0x3876:  ret
0863f366 +0x3877:  push   %ebp
0863f367 +0x3878:  mov    %esp,%ebp
0863f369 +0x387a:  sub    $0x18,%esp
0863f36c +0x387d:  mov    0x8(%ebp),%eax
0863f36f +0x3880:  mov    %eax,(%esp)
0863f372 +0x3883:  call   0863f336 <+0x3847>
0863f377 +0x3888:  mov    0x8(%ebp),%eax
0863f37a +0x388b:  mov    %eax,(%esp)
0863f37d +0x388e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f382 +0x3893:  leave
0863f383 +0x3894:  ret
0863f384 +0x3895:  push   %ebp
0863f385 +0x3896:  mov    %esp,%ebp
0863f387 +0x3898:  sub    $0x18,%esp
0863f38a +0x389b:  mov    0x8(%ebp),%eax
0863f38d +0x389e:  movl   $&_ZTV25TimerConnectMonitorServer+0x8,(%eax)
0863f393 +0x38a4:  mov    0x8(%ebp),%eax
0863f396 +0x38a7:  mov    %eax,(%esp)
0863f399 +0x38aa:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f39e +0x38af:  mov    $0x0,%eax
0863f3a3 +0x38b4:  test   %al,%al
0863f3a5 +0x38b6:  je     0863f3b2 <+0x38c3>
0863f3a7 +0x38b8:  mov    0x8(%ebp),%eax
0863f3aa +0x38bb:  mov    %eax,(%esp)
0863f3ad +0x38be:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f3b2 +0x38c3:  leave
0863f3b3 +0x38c4:  ret
0863f3b4 +0x38c5:  push   %ebp
0863f3b5 +0x38c6:  mov    %esp,%ebp
0863f3b7 +0x38c8:  sub    $0x18,%esp
0863f3ba +0x38cb:  mov    0x8(%ebp),%eax
0863f3bd +0x38ce:  mov    %eax,(%esp)
0863f3c0 +0x38d1:  call   0863f384 <+0x3895>
0863f3c5 +0x38d6:  mov    0x8(%ebp),%eax
0863f3c8 +0x38d9:  mov    %eax,(%esp)
0863f3cb +0x38dc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f3d0 +0x38e1:  leave
0863f3d1 +0x38e2:  ret
0863f3d2 +0x38e3:  push   %ebp
0863f3d3 +0x38e4:  mov    %esp,%ebp
0863f3d5 +0x38e6:  sub    $0x18,%esp
0863f3d8 +0x38e9:  mov    0x8(%ebp),%eax
0863f3db +0x38ec:  movl   $&_ZTV29TimerVendingMachineItemNotify+0x8,(%eax)
0863f3e1 +0x38f2:  mov    0x8(%ebp),%eax
0863f3e4 +0x38f5:  mov    %eax,(%esp)
0863f3e7 +0x38f8:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f3ec +0x38fd:  mov    $0x0,%eax
0863f3f1 +0x3902:  test   %al,%al
0863f3f3 +0x3904:  je     0863f400 <+0x3911>
0863f3f5 +0x3906:  mov    0x8(%ebp),%eax
0863f3f8 +0x3909:  mov    %eax,(%esp)
0863f3fb +0x390c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f400 +0x3911:  leave
0863f401 +0x3912:  ret
0863f402 +0x3913:  push   %ebp
0863f403 +0x3914:  mov    %esp,%ebp
0863f405 +0x3916:  sub    $0x18,%esp
0863f408 +0x3919:  mov    0x8(%ebp),%eax
0863f40b +0x391c:  mov    %eax,(%esp)
0863f40e +0x391f:  call   0863f3d2 <+0x38e3>
0863f413 +0x3924:  mov    0x8(%ebp),%eax
0863f416 +0x3927:  mov    %eax,(%esp)
0863f419 +0x392a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f41e +0x392f:  leave
0863f41f +0x3930:  ret
0863f420 +0x3931:  push   %ebp
0863f421 +0x3932:  mov    %esp,%ebp
0863f423 +0x3934:  sub    $0x18,%esp
0863f426 +0x3937:  mov    0x8(%ebp),%eax
0863f429 +0x393a:  movl   $&_ZTV28TimerGlobalEffectItemTimeout+0x8,(%eax)
0863f42f +0x3940:  mov    0x8(%ebp),%eax
0863f432 +0x3943:  mov    %eax,(%esp)
0863f435 +0x3946:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f43a +0x394b:  mov    $0x0,%eax
0863f43f +0x3950:  test   %al,%al
0863f441 +0x3952:  je     0863f44e <+0x395f>
0863f443 +0x3954:  mov    0x8(%ebp),%eax
0863f446 +0x3957:  mov    %eax,(%esp)
0863f449 +0x395a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f44e +0x395f:  leave
0863f44f +0x3960:  ret
0863f450 +0x3961:  push   %ebp
0863f451 +0x3962:  mov    %esp,%ebp
0863f453 +0x3964:  sub    $0x18,%esp
0863f456 +0x3967:  mov    0x8(%ebp),%eax
0863f459 +0x396a:  mov    %eax,(%esp)
0863f45c +0x396d:  call   0863f420 <+0x3931>
0863f461 +0x3972:  mov    0x8(%ebp),%eax
0863f464 +0x3975:  mov    %eax,(%esp)
0863f467 +0x3978:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f46c +0x397d:  leave
0863f46d +0x397e:  ret
0863f46e +0x397f:  push   %ebp
0863f46f +0x3980:  mov    %esp,%ebp
0863f471 +0x3982:  sub    $0x18,%esp
0863f474 +0x3985:  mov    0x8(%ebp),%eax
0863f477 +0x3988:  movl   $&_ZTV26TimerGlobalEffectItemBegin+0x8,(%eax)
0863f47d +0x398e:  mov    0x8(%ebp),%eax
0863f480 +0x3991:  mov    %eax,(%esp)
0863f483 +0x3994:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f488 +0x3999:  mov    $0x0,%eax
0863f48d +0x399e:  test   %al,%al
0863f48f +0x39a0:  je     0863f49c <+0x39ad>
0863f491 +0x39a2:  mov    0x8(%ebp),%eax
0863f494 +0x39a5:  mov    %eax,(%esp)
0863f497 +0x39a8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f49c +0x39ad:  leave
0863f49d +0x39ae:  ret
0863f49e +0x39af:  push   %ebp
0863f49f +0x39b0:  mov    %esp,%ebp
0863f4a1 +0x39b2:  sub    $0x18,%esp
0863f4a4 +0x39b5:  mov    0x8(%ebp),%eax
0863f4a7 +0x39b8:  mov    %eax,(%esp)
0863f4aa +0x39bb:  call   0863f46e <+0x397f>
0863f4af +0x39c0:  mov    0x8(%ebp),%eax
0863f4b2 +0x39c3:  mov    %eax,(%esp)
0863f4b5 +0x39c6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f4ba +0x39cb:  leave
0863f4bb +0x39cc:  ret
0863f4bc +0x39cd:  push   %ebp
0863f4bd +0x39ce:  mov    %esp,%ebp
0863f4bf +0x39d0:  sub    $0x18,%esp
0863f4c2 +0x39d3:  mov    0x8(%ebp),%eax
0863f4c5 +0x39d6:  movl   $&_ZTV18TimerStartMatching+0x8,(%eax)
0863f4cb +0x39dc:  mov    0x8(%ebp),%eax
0863f4ce +0x39df:  mov    %eax,(%esp)
0863f4d1 +0x39e2:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f4d6 +0x39e7:  mov    $0x0,%eax
0863f4db +0x39ec:  test   %al,%al
0863f4dd +0x39ee:  je     0863f4ea <+0x39fb>
0863f4df +0x39f0:  mov    0x8(%ebp),%eax
0863f4e2 +0x39f3:  mov    %eax,(%esp)
0863f4e5 +0x39f6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f4ea +0x39fb:  leave
0863f4eb +0x39fc:  ret
0863f4ec +0x39fd:  push   %ebp
0863f4ed +0x39fe:  mov    %esp,%ebp
0863f4ef +0x3a00:  sub    $0x18,%esp
0863f4f2 +0x3a03:  mov    0x8(%ebp),%eax
0863f4f5 +0x3a06:  mov    %eax,(%esp)
0863f4f8 +0x3a09:  call   0863f4bc <+0x39cd>
0863f4fd +0x3a0e:  mov    0x8(%ebp),%eax
0863f500 +0x3a11:  mov    %eax,(%esp)
0863f503 +0x3a14:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f508 +0x3a19:  leave
0863f509 +0x3a1a:  ret
0863f50a +0x3a1b:  push   %ebp
0863f50b +0x3a1c:  mov    %esp,%ebp
0863f50d +0x3a1e:  sub    $0x18,%esp
0863f510 +0x3a21:  mov    0x8(%ebp),%eax
0863f513 +0x3a24:  movl   $&_ZTV21TimerFinishItemEffect+0x8,(%eax)
0863f519 +0x3a2a:  mov    0x8(%ebp),%eax
0863f51c +0x3a2d:  mov    %eax,(%esp)
0863f51f +0x3a30:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f524 +0x3a35:  mov    $0x0,%eax
0863f529 +0x3a3a:  test   %al,%al
0863f52b +0x3a3c:  je     0863f538 <+0x3a49>
0863f52d +0x3a3e:  mov    0x8(%ebp),%eax
0863f530 +0x3a41:  mov    %eax,(%esp)
0863f533 +0x3a44:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f538 +0x3a49:  leave
0863f539 +0x3a4a:  ret
0863f53a +0x3a4b:  push   %ebp
0863f53b +0x3a4c:  mov    %esp,%ebp
0863f53d +0x3a4e:  sub    $0x18,%esp
0863f540 +0x3a51:  mov    0x8(%ebp),%eax
0863f543 +0x3a54:  mov    %eax,(%esp)
0863f546 +0x3a57:  call   0863f50a <+0x3a1b>
0863f54b +0x3a5c:  mov    0x8(%ebp),%eax
0863f54e +0x3a5f:  mov    %eax,(%esp)
0863f551 +0x3a62:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f556 +0x3a67:  leave
0863f557 +0x3a68:  ret
0863f558 +0x3a69:  push   %ebp
0863f559 +0x3a6a:  mov    %esp,%ebp
0863f55b +0x3a6c:  sub    $0x18,%esp
0863f55e +0x3a6f:  mov    0x8(%ebp),%eax
0863f561 +0x3a72:  movl   $&_ZTV22TimerScheduleTenSecond+0x8,(%eax)
0863f567 +0x3a78:  mov    0x8(%ebp),%eax
0863f56a +0x3a7b:  mov    %eax,(%esp)
0863f56d +0x3a7e:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f572 +0x3a83:  mov    $0x0,%eax
0863f577 +0x3a88:  test   %al,%al
0863f579 +0x3a8a:  je     0863f586 <+0x3a97>
0863f57b +0x3a8c:  mov    0x8(%ebp),%eax
0863f57e +0x3a8f:  mov    %eax,(%esp)
0863f581 +0x3a92:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f586 +0x3a97:  leave
0863f587 +0x3a98:  ret
0863f588 +0x3a99:  push   %ebp
0863f589 +0x3a9a:  mov    %esp,%ebp
0863f58b +0x3a9c:  sub    $0x18,%esp
0863f58e +0x3a9f:  mov    0x8(%ebp),%eax
0863f591 +0x3aa2:  mov    %eax,(%esp)
0863f594 +0x3aa5:  call   0863f558 <+0x3a69>
0863f599 +0x3aaa:  mov    0x8(%ebp),%eax
0863f59c +0x3aad:  mov    %eax,(%esp)
0863f59f +0x3ab0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f5a4 +0x3ab5:  leave
0863f5a5 +0x3ab6:  ret
0863f5a6 +0x3ab7:  push   %ebp
0863f5a7 +0x3ab8:  mov    %esp,%ebp
0863f5a9 +0x3aba:  sub    $0x18,%esp
0863f5ac +0x3abd:  mov    0x8(%ebp),%eax
0863f5af +0x3ac0:  movl   $&_ZTV30TimerDeathTowerTopRankerReload+0x8,(%eax)
0863f5b5 +0x3ac6:  mov    0x8(%ebp),%eax
0863f5b8 +0x3ac9:  mov    %eax,(%esp)
0863f5bb +0x3acc:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f5c0 +0x3ad1:  mov    $0x0,%eax
0863f5c5 +0x3ad6:  test   %al,%al
0863f5c7 +0x3ad8:  je     0863f5d4 <+0x3ae5>
0863f5c9 +0x3ada:  mov    0x8(%ebp),%eax
0863f5cc +0x3add:  mov    %eax,(%esp)
0863f5cf +0x3ae0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f5d4 +0x3ae5:  leave
0863f5d5 +0x3ae6:  ret
0863f5d6 +0x3ae7:  push   %ebp
0863f5d7 +0x3ae8:  mov    %esp,%ebp
0863f5d9 +0x3aea:  sub    $0x18,%esp
0863f5dc +0x3aed:  mov    0x8(%ebp),%eax
0863f5df +0x3af0:  mov    %eax,(%esp)
0863f5e2 +0x3af3:  call   0863f5a6 <+0x3ab7>
0863f5e7 +0x3af8:  mov    0x8(%ebp),%eax
0863f5ea +0x3afb:  mov    %eax,(%esp)
0863f5ed +0x3afe:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f5f2 +0x3b03:  leave
0863f5f3 +0x3b04:  ret
0863f5f4 +0x3b05:  push   %ebp
0863f5f5 +0x3b06:  mov    %esp,%ebp
0863f5f7 +0x3b08:  sub    $0x18,%esp
0863f5fa +0x3b0b:  mov    0x8(%ebp),%eax
0863f5fd +0x3b0e:  movl   $&_ZTV15TimerDeathTower+0x8,(%eax)
0863f603 +0x3b14:  mov    0x8(%ebp),%eax
0863f606 +0x3b17:  mov    %eax,(%esp)
0863f609 +0x3b1a:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f60e +0x3b1f:  mov    $0x0,%eax
0863f613 +0x3b24:  test   %al,%al
0863f615 +0x3b26:  je     0863f622 <+0x3b33>
0863f617 +0x3b28:  mov    0x8(%ebp),%eax
0863f61a +0x3b2b:  mov    %eax,(%esp)
0863f61d +0x3b2e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f622 +0x3b33:  leave
0863f623 +0x3b34:  ret
0863f624 +0x3b35:  push   %ebp
0863f625 +0x3b36:  mov    %esp,%ebp
0863f627 +0x3b38:  sub    $0x18,%esp
0863f62a +0x3b3b:  mov    0x8(%ebp),%eax
0863f62d +0x3b3e:  mov    %eax,(%esp)
0863f630 +0x3b41:  call   0863f5f4 <+0x3b05>
0863f635 +0x3b46:  mov    0x8(%ebp),%eax
0863f638 +0x3b49:  mov    %eax,(%esp)
0863f63b +0x3b4c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f640 +0x3b51:  leave
0863f641 +0x3b52:  ret
0863f642 +0x3b53:  push   %ebp
0863f643 +0x3b54:  mov    %esp,%ebp
0863f645 +0x3b56:  sub    $0x18,%esp
0863f648 +0x3b59:  mov    0x8(%ebp),%eax
0863f64b +0x3b5c:  movl   $&_ZTV34TimerConnectP2PAfterAssaultTimeout+0x8,(%eax)
0863f651 +0x3b62:  mov    0x8(%ebp),%eax
0863f654 +0x3b65:  mov    %eax,(%esp)
0863f657 +0x3b68:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f65c +0x3b6d:  mov    $0x0,%eax
0863f661 +0x3b72:  test   %al,%al
0863f663 +0x3b74:  je     0863f670 <+0x3b81>
0863f665 +0x3b76:  mov    0x8(%ebp),%eax
0863f668 +0x3b79:  mov    %eax,(%esp)
0863f66b +0x3b7c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f670 +0x3b81:  leave
0863f671 +0x3b82:  ret
0863f672 +0x3b83:  push   %ebp
0863f673 +0x3b84:  mov    %esp,%ebp
0863f675 +0x3b86:  sub    $0x18,%esp
0863f678 +0x3b89:  mov    0x8(%ebp),%eax
0863f67b +0x3b8c:  mov    %eax,(%esp)
0863f67e +0x3b8f:  call   0863f642 <+0x3b53>
0863f683 +0x3b94:  mov    0x8(%ebp),%eax
0863f686 +0x3b97:  mov    %eax,(%esp)
0863f689 +0x3b9a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f68e +0x3b9f:  leave
0863f68f +0x3ba0:  ret
0863f690 +0x3ba1:  push   %ebp
0863f691 +0x3ba2:  mov    %esp,%ebp
0863f693 +0x3ba4:  sub    $0x18,%esp
0863f696 +0x3ba7:  mov    0x8(%ebp),%eax
0863f699 +0x3baa:  movl   $&_ZTV36TimerCompleteLoadAfterAssaultTimeout+0x8,(%eax)
0863f69f +0x3bb0:  mov    0x8(%ebp),%eax
0863f6a2 +0x3bb3:  mov    %eax,(%esp)
0863f6a5 +0x3bb6:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f6aa +0x3bbb:  mov    $0x0,%eax
0863f6af +0x3bc0:  test   %al,%al
0863f6b1 +0x3bc2:  je     0863f6be <+0x3bcf>
0863f6b3 +0x3bc4:  mov    0x8(%ebp),%eax
0863f6b6 +0x3bc7:  mov    %eax,(%esp)
0863f6b9 +0x3bca:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f6be +0x3bcf:  leave
0863f6bf +0x3bd0:  ret
0863f6c0 +0x3bd1:  push   %ebp
0863f6c1 +0x3bd2:  mov    %esp,%ebp
0863f6c3 +0x3bd4:  sub    $0x18,%esp
0863f6c6 +0x3bd7:  mov    0x8(%ebp),%eax
0863f6c9 +0x3bda:  mov    %eax,(%esp)
0863f6cc +0x3bdd:  call   0863f690 <+0x3ba1>
0863f6d1 +0x3be2:  mov    0x8(%ebp),%eax
0863f6d4 +0x3be5:  mov    %eax,(%esp)
0863f6d7 +0x3be8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f6dc +0x3bed:  leave
0863f6dd +0x3bee:  ret
0863f6de +0x3bef:  push   %ebp
0863f6df +0x3bf0:  mov    %esp,%ebp
0863f6e1 +0x3bf2:  sub    $0x18,%esp
0863f6e4 +0x3bf5:  mov    0x8(%ebp),%eax
0863f6e7 +0x3bf8:  movl   $&_ZTV17TimerCloseAssault+0x8,(%eax)
0863f6ed +0x3bfe:  mov    0x8(%ebp),%eax
0863f6f0 +0x3c01:  mov    %eax,(%esp)
0863f6f3 +0x3c04:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f6f8 +0x3c09:  mov    $0x0,%eax
0863f6fd +0x3c0e:  test   %al,%al
0863f6ff +0x3c10:  je     0863f70c <+0x3c1d>
0863f701 +0x3c12:  mov    0x8(%ebp),%eax
0863f704 +0x3c15:  mov    %eax,(%esp)
0863f707 +0x3c18:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f70c +0x3c1d:  leave
0863f70d +0x3c1e:  ret
0863f70e +0x3c1f:  push   %ebp
0863f70f +0x3c20:  mov    %esp,%ebp
0863f711 +0x3c22:  sub    $0x18,%esp
0863f714 +0x3c25:  mov    0x8(%ebp),%eax
0863f717 +0x3c28:  mov    %eax,(%esp)
0863f71a +0x3c2b:  call   0863f6de <+0x3bef>
0863f71f +0x3c30:  mov    0x8(%ebp),%eax
0863f722 +0x3c33:  mov    %eax,(%esp)
0863f725 +0x3c36:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f72a +0x3c3b:  leave
0863f72b +0x3c3c:  ret
0863f72c +0x3c3d:  push   %ebp
0863f72d +0x3c3e:  mov    %esp,%ebp
0863f72f +0x3c40:  sub    $0x18,%esp
0863f732 +0x3c43:  mov    0x8(%ebp),%eax
0863f735 +0x3c46:  movl   $&_ZTV15TimerEndAssault+0x8,(%eax)
0863f73b +0x3c4c:  mov    0x8(%ebp),%eax
0863f73e +0x3c4f:  mov    %eax,(%esp)
0863f741 +0x3c52:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f746 +0x3c57:  mov    $0x0,%eax
0863f74b +0x3c5c:  test   %al,%al
0863f74d +0x3c5e:  je     0863f75a <+0x3c6b>
0863f74f +0x3c60:  mov    0x8(%ebp),%eax
0863f752 +0x3c63:  mov    %eax,(%esp)
0863f755 +0x3c66:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f75a +0x3c6b:  leave
0863f75b +0x3c6c:  ret
0863f75c +0x3c6d:  push   %ebp
0863f75d +0x3c6e:  mov    %esp,%ebp
0863f75f +0x3c70:  sub    $0x18,%esp
0863f762 +0x3c73:  mov    0x8(%ebp),%eax
0863f765 +0x3c76:  mov    %eax,(%esp)
0863f768 +0x3c79:  call   0863f72c <+0x3c3d>
0863f76d +0x3c7e:  mov    0x8(%ebp),%eax
0863f770 +0x3c81:  mov    %eax,(%esp)
0863f773 +0x3c84:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f778 +0x3c89:  leave
0863f779 +0x3c8a:  ret
0863f77a +0x3c8b:  push   %ebp
0863f77b +0x3c8c:  mov    %esp,%ebp
0863f77d +0x3c8e:  sub    $0x18,%esp
0863f780 +0x3c91:  mov    0x8(%ebp),%eax
0863f783 +0x3c94:  movl   $&_ZTV29TimerConnectP2PAssaultTimeout+0x8,(%eax)
0863f789 +0x3c9a:  mov    0x8(%ebp),%eax
0863f78c +0x3c9d:  mov    %eax,(%esp)
0863f78f +0x3ca0:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f794 +0x3ca5:  mov    $0x0,%eax
0863f799 +0x3caa:  test   %al,%al
0863f79b +0x3cac:  je     0863f7a8 <+0x3cb9>
0863f79d +0x3cae:  mov    0x8(%ebp),%eax
0863f7a0 +0x3cb1:  mov    %eax,(%esp)
0863f7a3 +0x3cb4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f7a8 +0x3cb9:  leave
0863f7a9 +0x3cba:  ret
0863f7aa +0x3cbb:  push   %ebp
0863f7ab +0x3cbc:  mov    %esp,%ebp
0863f7ad +0x3cbe:  sub    $0x18,%esp
0863f7b0 +0x3cc1:  mov    0x8(%ebp),%eax
0863f7b3 +0x3cc4:  mov    %eax,(%esp)
0863f7b6 +0x3cc7:  call   0863f77a <+0x3c8b>
0863f7bb +0x3ccc:  mov    0x8(%ebp),%eax
0863f7be +0x3ccf:  mov    %eax,(%esp)
0863f7c1 +0x3cd2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f7c6 +0x3cd7:  leave
0863f7c7 +0x3cd8:  ret
0863f7c8 +0x3cd9:  push   %ebp
0863f7c9 +0x3cda:  mov    %esp,%ebp
0863f7cb +0x3cdc:  sub    $0x18,%esp
0863f7ce +0x3cdf:  mov    0x8(%ebp),%eax
0863f7d1 +0x3ce2:  movl   $&_ZTV31TimerCompleteLoadAssaultTimeout+0x8,(%eax)
0863f7d7 +0x3ce8:  mov    0x8(%ebp),%eax
0863f7da +0x3ceb:  mov    %eax,(%esp)
0863f7dd +0x3cee:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f7e2 +0x3cf3:  mov    $0x0,%eax
0863f7e7 +0x3cf8:  test   %al,%al
0863f7e9 +0x3cfa:  je     0863f7f6 <+0x3d07>
0863f7eb +0x3cfc:  mov    0x8(%ebp),%eax
0863f7ee +0x3cff:  mov    %eax,(%esp)
0863f7f1 +0x3d02:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f7f6 +0x3d07:  leave
0863f7f7 +0x3d08:  ret
0863f7f8 +0x3d09:  push   %ebp
0863f7f9 +0x3d0a:  mov    %esp,%ebp
0863f7fb +0x3d0c:  sub    $0x18,%esp
0863f7fe +0x3d0f:  mov    0x8(%ebp),%eax
0863f801 +0x3d12:  mov    %eax,(%esp)
0863f804 +0x3d15:  call   0863f7c8 <+0x3cd9>
0863f809 +0x3d1a:  mov    0x8(%ebp),%eax
0863f80c +0x3d1d:  mov    %eax,(%esp)
0863f80f +0x3d20:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f814 +0x3d25:  leave
0863f815 +0x3d26:  ret
0863f816 +0x3d27:  push   %ebp
0863f817 +0x3d28:  mov    %esp,%ebp
0863f819 +0x3d2a:  sub    $0x18,%esp
0863f81c +0x3d2d:  mov    0x8(%ebp),%eax
0863f81f +0x3d30:  movl   $&_ZTV21TimerDetectDisconnect+0x8,(%eax)
0863f825 +0x3d36:  mov    0x8(%ebp),%eax
0863f828 +0x3d39:  mov    %eax,(%esp)
0863f82b +0x3d3c:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f830 +0x3d41:  mov    $0x0,%eax
0863f835 +0x3d46:  test   %al,%al
0863f837 +0x3d48:  je     0863f844 <+0x3d55>
0863f839 +0x3d4a:  mov    0x8(%ebp),%eax
0863f83c +0x3d4d:  mov    %eax,(%esp)
0863f83f +0x3d50:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f844 +0x3d55:  leave
0863f845 +0x3d56:  ret
0863f846 +0x3d57:  push   %ebp
0863f847 +0x3d58:  mov    %esp,%ebp
0863f849 +0x3d5a:  sub    $0x18,%esp
0863f84c +0x3d5d:  mov    0x8(%ebp),%eax
0863f84f +0x3d60:  mov    %eax,(%esp)
0863f852 +0x3d63:  call   0863f816 <+0x3d27>
0863f857 +0x3d68:  mov    0x8(%ebp),%eax
0863f85a +0x3d6b:  mov    %eax,(%esp)
0863f85d +0x3d6e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f862 +0x3d73:  leave
0863f863 +0x3d74:  ret
0863f864 +0x3d75:  push   %ebp
0863f865 +0x3d76:  mov    %esp,%ebp
0863f867 +0x3d78:  sub    $0x18,%esp
0863f86a +0x3d7b:  mov    0x8(%ebp),%eax
0863f86d +0x3d7e:  movl   $&_ZTV19TimerUpdatePvPGrade+0x8,(%eax)
0863f873 +0x3d84:  mov    0x8(%ebp),%eax
0863f876 +0x3d87:  mov    %eax,(%esp)
0863f879 +0x3d8a:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f87e +0x3d8f:  mov    $0x0,%eax
0863f883 +0x3d94:  test   %al,%al
0863f885 +0x3d96:  je     0863f892 <+0x3da3>
0863f887 +0x3d98:  mov    0x8(%ebp),%eax
0863f88a +0x3d9b:  mov    %eax,(%esp)
0863f88d +0x3d9e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f892 +0x3da3:  leave
0863f893 +0x3da4:  ret
0863f894 +0x3da5:  push   %ebp
0863f895 +0x3da6:  mov    %esp,%ebp
0863f897 +0x3da8:  sub    $0x18,%esp
0863f89a +0x3dab:  mov    0x8(%ebp),%eax
0863f89d +0x3dae:  mov    %eax,(%esp)
0863f8a0 +0x3db1:  call   0863f864 <+0x3d75>
0863f8a5 +0x3db6:  mov    0x8(%ebp),%eax
0863f8a8 +0x3db9:  mov    %eax,(%esp)
0863f8ab +0x3dbc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f8b0 +0x3dc1:  leave
0863f8b1 +0x3dc2:  ret
0863f8b2 +0x3dc3:  push   %ebp
0863f8b3 +0x3dc4:  mov    %esp,%ebp
0863f8b5 +0x3dc6:  sub    $0x18,%esp
0863f8b8 +0x3dc9:  mov    0x8(%ebp),%eax
0863f8bb +0x3dcc:  movl   $&_ZTV33TimerUpdateItemGenerateStatistics+0x8,(%eax)
0863f8c1 +0x3dd2:  mov    0x8(%ebp),%eax
0863f8c4 +0x3dd5:  mov    %eax,(%esp)
0863f8c7 +0x3dd8:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f8cc +0x3ddd:  mov    $0x0,%eax
0863f8d1 +0x3de2:  test   %al,%al
0863f8d3 +0x3de4:  je     0863f8e0 <+0x3df1>
0863f8d5 +0x3de6:  mov    0x8(%ebp),%eax
0863f8d8 +0x3de9:  mov    %eax,(%esp)
0863f8db +0x3dec:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f8e0 +0x3df1:  leave
0863f8e1 +0x3df2:  ret
0863f8e2 +0x3df3:  push   %ebp
0863f8e3 +0x3df4:  mov    %esp,%ebp
0863f8e5 +0x3df6:  sub    $0x18,%esp
0863f8e8 +0x3df9:  mov    0x8(%ebp),%eax
0863f8eb +0x3dfc:  mov    %eax,(%esp)
0863f8ee +0x3dff:  call   0863f8b2 <+0x3dc3>
0863f8f3 +0x3e04:  mov    0x8(%ebp),%eax
0863f8f6 +0x3e07:  mov    %eax,(%esp)
0863f8f9 +0x3e0a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f8fe +0x3e0f:  leave
0863f8ff +0x3e10:  ret
0863f900 +0x3e11:  push   %ebp
0863f901 +0x3e12:  mov    %esp,%ebp
0863f903 +0x3e14:  sub    $0x18,%esp
0863f906 +0x3e17:  mov    0x8(%ebp),%eax
0863f909 +0x3e1a:  movl   $&_ZTV29TimerCheckHumanCertifyTimeout+0x8,(%eax)
0863f90f +0x3e20:  mov    0x8(%ebp),%eax
0863f912 +0x3e23:  mov    %eax,(%esp)
0863f915 +0x3e26:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f91a +0x3e2b:  mov    $0x0,%eax
0863f91f +0x3e30:  test   %al,%al
0863f921 +0x3e32:  je     0863f92e <+0x3e3f>
0863f923 +0x3e34:  mov    0x8(%ebp),%eax
0863f926 +0x3e37:  mov    %eax,(%esp)
0863f929 +0x3e3a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f92e +0x3e3f:  leave
0863f92f +0x3e40:  ret
0863f930 +0x3e41:  push   %ebp
0863f931 +0x3e42:  mov    %esp,%ebp
0863f933 +0x3e44:  sub    $0x18,%esp
0863f936 +0x3e47:  mov    0x8(%ebp),%eax
0863f939 +0x3e4a:  mov    %eax,(%esp)
0863f93c +0x3e4d:  call   0863f900 <+0x3e11>
0863f941 +0x3e52:  mov    0x8(%ebp),%eax
0863f944 +0x3e55:  mov    %eax,(%esp)
0863f947 +0x3e58:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f94c +0x3e5d:  leave
0863f94d +0x3e5e:  ret
0863f94e +0x3e5f:  push   %ebp
0863f94f +0x3e60:  mov    %esp,%ebp
0863f951 +0x3e62:  sub    $0x18,%esp
0863f954 +0x3e65:  mov    0x8(%ebp),%eax
0863f957 +0x3e68:  movl   $&_ZTV26TimerCheckRecvPvpEndResult+0x8,(%eax)
0863f95d +0x3e6e:  mov    0x8(%ebp),%eax
0863f960 +0x3e71:  mov    %eax,(%esp)
0863f963 +0x3e74:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f968 +0x3e79:  mov    $0x0,%eax
0863f96d +0x3e7e:  test   %al,%al
0863f96f +0x3e80:  je     0863f97c <+0x3e8d>
0863f971 +0x3e82:  mov    0x8(%ebp),%eax
0863f974 +0x3e85:  mov    %eax,(%esp)
0863f977 +0x3e88:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f97c +0x3e8d:  leave
0863f97d +0x3e8e:  ret
0863f97e +0x3e8f:  push   %ebp
0863f97f +0x3e90:  mov    %esp,%ebp
0863f981 +0x3e92:  sub    $0x18,%esp
0863f984 +0x3e95:  mov    0x8(%ebp),%eax
0863f987 +0x3e98:  mov    %eax,(%esp)
0863f98a +0x3e9b:  call   0863f94e <+0x3e5f>
0863f98f +0x3ea0:  mov    0x8(%ebp),%eax
0863f992 +0x3ea3:  mov    %eax,(%esp)
0863f995 +0x3ea6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f99a +0x3eab:  leave
0863f99b +0x3eac:  ret
0863f99c +0x3ead:  push   %ebp
0863f99d +0x3eae:  mov    %esp,%ebp
0863f99f +0x3eb0:  sub    $0x18,%esp
0863f9a2 +0x3eb3:  mov    0x8(%ebp),%eax
0863f9a5 +0x3eb6:  movl   $&_ZTV21TimerCheckPvPRoomUser+0x8,(%eax)
0863f9ab +0x3ebc:  mov    0x8(%ebp),%eax
0863f9ae +0x3ebf:  mov    %eax,(%esp)
0863f9b1 +0x3ec2:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863f9b6 +0x3ec7:  mov    $0x0,%eax
0863f9bb +0x3ecc:  test   %al,%al
0863f9bd +0x3ece:  je     0863f9ca <+0x3edb>
0863f9bf +0x3ed0:  mov    0x8(%ebp),%eax
0863f9c2 +0x3ed3:  mov    %eax,(%esp)
0863f9c5 +0x3ed6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f9ca +0x3edb:  leave
0863f9cb +0x3edc:  ret
0863f9cc +0x3edd:  push   %ebp
0863f9cd +0x3ede:  mov    %esp,%ebp
0863f9cf +0x3ee0:  sub    $0x18,%esp
0863f9d2 +0x3ee3:  mov    0x8(%ebp),%eax
0863f9d5 +0x3ee6:  mov    %eax,(%esp)
0863f9d8 +0x3ee9:  call   0863f99c <+0x3ead>
0863f9dd +0x3eee:  mov    0x8(%ebp),%eax
0863f9e0 +0x3ef1:  mov    %eax,(%esp)
0863f9e3 +0x3ef4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863f9e8 +0x3ef9:  leave
0863f9e9 +0x3efa:  ret
0863f9ea +0x3efb:  push   %ebp
0863f9eb +0x3efc:  mov    %esp,%ebp
0863f9ed +0x3efe:  sub    $0x18,%esp
0863f9f0 +0x3f01:  mov    0x8(%ebp),%eax
0863f9f3 +0x3f04:  movl   $&_ZTV26TimerCheckForcedDisconnect+0x8,(%eax)
0863f9f9 +0x3f0a:  mov    0x8(%ebp),%eax
0863f9fc +0x3f0d:  mov    %eax,(%esp)
0863f9ff +0x3f10:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fa04 +0x3f15:  mov    $0x0,%eax
0863fa09 +0x3f1a:  test   %al,%al
0863fa0b +0x3f1c:  je     0863fa18 <+0x3f29>
0863fa0d +0x3f1e:  mov    0x8(%ebp),%eax
0863fa10 +0x3f21:  mov    %eax,(%esp)
0863fa13 +0x3f24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fa18 +0x3f29:  leave
0863fa19 +0x3f2a:  ret
0863fa1a +0x3f2b:  push   %ebp
0863fa1b +0x3f2c:  mov    %esp,%ebp
0863fa1d +0x3f2e:  sub    $0x18,%esp
0863fa20 +0x3f31:  mov    0x8(%ebp),%eax
0863fa23 +0x3f34:  mov    %eax,(%esp)
0863fa26 +0x3f37:  call   0863f9ea <+0x3efb>
0863fa2b +0x3f3c:  mov    0x8(%ebp),%eax
0863fa2e +0x3f3f:  mov    %eax,(%esp)
0863fa31 +0x3f42:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fa36 +0x3f47:  leave
0863fa37 +0x3f48:  ret
0863fa38 +0x3f49:  push   %ebp
0863fa39 +0x3f4a:  mov    %esp,%ebp
0863fa3b +0x3f4c:  sub    $0x18,%esp
0863fa3e +0x3f4f:  mov    0x8(%ebp),%eax
0863fa41 +0x3f52:  movl   $&_ZTV23TimerInsertUserPlayTime+0x8,(%eax)
0863fa47 +0x3f58:  mov    0x8(%ebp),%eax
0863fa4a +0x3f5b:  mov    %eax,(%esp)
0863fa4d +0x3f5e:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fa52 +0x3f63:  mov    $0x0,%eax
0863fa57 +0x3f68:  test   %al,%al
0863fa59 +0x3f6a:  je     0863fa66 <+0x3f77>
0863fa5b +0x3f6c:  mov    0x8(%ebp),%eax
0863fa5e +0x3f6f:  mov    %eax,(%esp)
0863fa61 +0x3f72:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fa66 +0x3f77:  leave
0863fa67 +0x3f78:  ret
0863fa68 +0x3f79:  push   %ebp
0863fa69 +0x3f7a:  mov    %esp,%ebp
0863fa6b +0x3f7c:  sub    $0x18,%esp
0863fa6e +0x3f7f:  mov    0x8(%ebp),%eax
0863fa71 +0x3f82:  mov    %eax,(%esp)
0863fa74 +0x3f85:  call   0863fa38 <+0x3f49>
0863fa79 +0x3f8a:  mov    0x8(%ebp),%eax
0863fa7c +0x3f8d:  mov    %eax,(%esp)
0863fa7f +0x3f90:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fa84 +0x3f95:  leave
0863fa85 +0x3f96:  ret
0863fa86 +0x3f97:  push   %ebp
0863fa87 +0x3f98:  mov    %esp,%ebp
0863fa89 +0x3f9a:  sub    $0x18,%esp
0863fa8c +0x3f9d:  mov    0x8(%ebp),%eax
0863fa8f +0x3fa0:  movl   $&_ZTV22TimerLightServerNotice+0x8,(%eax)
0863fa95 +0x3fa6:  mov    0x8(%ebp),%eax
0863fa98 +0x3fa9:  mov    %eax,(%esp)
0863fa9b +0x3fac:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863faa0 +0x3fb1:  mov    $0x0,%eax
0863faa5 +0x3fb6:  test   %al,%al
0863faa7 +0x3fb8:  je     0863fab4 <+0x3fc5>
0863faa9 +0x3fba:  mov    0x8(%ebp),%eax
0863faac +0x3fbd:  mov    %eax,(%esp)
0863faaf +0x3fc0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fab4 +0x3fc5:  leave
0863fab5 +0x3fc6:  ret
0863fab6 +0x3fc7:  push   %ebp
0863fab7 +0x3fc8:  mov    %esp,%ebp
0863fab9 +0x3fca:  sub    $0x18,%esp
0863fabc +0x3fcd:  mov    0x8(%ebp),%eax
0863fabf +0x3fd0:  mov    %eax,(%esp)
0863fac2 +0x3fd3:  call   0863fa86 <+0x3f97>
0863fac7 +0x3fd8:  mov    0x8(%ebp),%eax
0863faca +0x3fdb:  mov    %eax,(%esp)
0863facd +0x3fde:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fad2 +0x3fe3:  leave
0863fad3 +0x3fe4:  ret
0863fad4 +0x3fe5:  push   %ebp
0863fad5 +0x3fe6:  mov    %esp,%ebp
0863fad7 +0x3fe8:  sub    $0x18,%esp
0863fada +0x3feb:  mov    0x8(%ebp),%eax
0863fadd +0x3fee:  movl   $&_ZTV27TimerNotResponseUserTimeout+0x8,(%eax)
0863fae3 +0x3ff4:  mov    0x8(%ebp),%eax
0863fae6 +0x3ff7:  mov    %eax,(%esp)
0863fae9 +0x3ffa:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863faee +0x3fff:  mov    $0x0,%eax
0863faf3 +0x4004:  test   %al,%al
0863faf5 +0x4006:  je     0863fb02 <+0x4013>
0863faf7 +0x4008:  mov    0x8(%ebp),%eax
0863fafa +0x400b:  mov    %eax,(%esp)
0863fafd +0x400e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fb02 +0x4013:  leave
0863fb03 +0x4014:  ret
0863fb04 +0x4015:  push   %ebp
0863fb05 +0x4016:  mov    %esp,%ebp
0863fb07 +0x4018:  sub    $0x18,%esp
0863fb0a +0x401b:  mov    0x8(%ebp),%eax
0863fb0d +0x401e:  mov    %eax,(%esp)
0863fb10 +0x4021:  call   0863fad4 <+0x3fe5>
0863fb15 +0x4026:  mov    0x8(%ebp),%eax
0863fb18 +0x4029:  mov    %eax,(%esp)
0863fb1b +0x402c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fb20 +0x4031:  leave
0863fb21 +0x4032:  ret
0863fb22 +0x4033:  push   %ebp
0863fb23 +0x4034:  mov    %esp,%ebp
0863fb25 +0x4036:  sub    $0x18,%esp
0863fb28 +0x4039:  mov    0x8(%ebp),%eax
0863fb2b +0x403c:  movl   $&_ZTV25TimerDungeonDataStatistic+0x8,(%eax)
0863fb31 +0x4042:  mov    0x8(%ebp),%eax
0863fb34 +0x4045:  mov    %eax,(%esp)
0863fb37 +0x4048:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fb3c +0x404d:  mov    $0x0,%eax
0863fb41 +0x4052:  test   %al,%al
0863fb43 +0x4054:  je     0863fb50 <+0x4061>
0863fb45 +0x4056:  mov    0x8(%ebp),%eax
0863fb48 +0x4059:  mov    %eax,(%esp)
0863fb4b +0x405c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fb50 +0x4061:  leave
0863fb51 +0x4062:  ret
0863fb52 +0x4063:  push   %ebp
0863fb53 +0x4064:  mov    %esp,%ebp
0863fb55 +0x4066:  sub    $0x18,%esp
0863fb58 +0x4069:  mov    0x8(%ebp),%eax
0863fb5b +0x406c:  mov    %eax,(%esp)
0863fb5e +0x406f:  call   0863fb22 <+0x4033>
0863fb63 +0x4074:  mov    0x8(%ebp),%eax
0863fb66 +0x4077:  mov    %eax,(%esp)
0863fb69 +0x407a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fb6e +0x407f:  leave
0863fb6f +0x4080:  ret
0863fb70 +0x4081:  push   %ebp
0863fb71 +0x4082:  mov    %esp,%ebp
0863fb73 +0x4084:  sub    $0x18,%esp
0863fb76 +0x4087:  mov    0x8(%ebp),%eax
0863fb79 +0x408a:  movl   $&_ZTV22TimerPvPDieUserRevive7+0x8,(%eax)
0863fb7f +0x4090:  mov    0x8(%ebp),%eax
0863fb82 +0x4093:  mov    %eax,(%esp)
0863fb85 +0x4096:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fb8a +0x409b:  mov    $0x0,%eax
0863fb8f +0x40a0:  test   %al,%al
0863fb91 +0x40a2:  je     0863fb9e <+0x40af>
0863fb93 +0x40a4:  mov    0x8(%ebp),%eax
0863fb96 +0x40a7:  mov    %eax,(%esp)
0863fb99 +0x40aa:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fb9e +0x40af:  leave
0863fb9f +0x40b0:  ret
0863fba0 +0x40b1:  push   %ebp
0863fba1 +0x40b2:  mov    %esp,%ebp
0863fba3 +0x40b4:  sub    $0x18,%esp
0863fba6 +0x40b7:  mov    0x8(%ebp),%eax
0863fba9 +0x40ba:  mov    %eax,(%esp)
0863fbac +0x40bd:  call   0863fb70 <+0x4081>
0863fbb1 +0x40c2:  mov    0x8(%ebp),%eax
0863fbb4 +0x40c5:  mov    %eax,(%esp)
0863fbb7 +0x40c8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fbbc +0x40cd:  leave
0863fbbd +0x40ce:  ret
0863fbbe +0x40cf:  push   %ebp
0863fbbf +0x40d0:  mov    %esp,%ebp
0863fbc1 +0x40d2:  sub    $0x18,%esp
0863fbc4 +0x40d5:  mov    0x8(%ebp),%eax
0863fbc7 +0x40d8:  movl   $&_ZTV22TimerPvPDieUserRevive6+0x8,(%eax)
0863fbcd +0x40de:  mov    0x8(%ebp),%eax
0863fbd0 +0x40e1:  mov    %eax,(%esp)
0863fbd3 +0x40e4:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fbd8 +0x40e9:  mov    $0x0,%eax
0863fbdd +0x40ee:  test   %al,%al
0863fbdf +0x40f0:  je     0863fbec <+0x40fd>
0863fbe1 +0x40f2:  mov    0x8(%ebp),%eax
0863fbe4 +0x40f5:  mov    %eax,(%esp)
0863fbe7 +0x40f8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fbec +0x40fd:  leave
0863fbed +0x40fe:  ret
0863fbee +0x40ff:  push   %ebp
0863fbef +0x4100:  mov    %esp,%ebp
0863fbf1 +0x4102:  sub    $0x18,%esp
0863fbf4 +0x4105:  mov    0x8(%ebp),%eax
0863fbf7 +0x4108:  mov    %eax,(%esp)
0863fbfa +0x410b:  call   0863fbbe <+0x40cf>
0863fbff +0x4110:  mov    0x8(%ebp),%eax
0863fc02 +0x4113:  mov    %eax,(%esp)
0863fc05 +0x4116:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fc0a +0x411b:  leave
0863fc0b +0x411c:  ret
0863fc0c +0x411d:  push   %ebp
0863fc0d +0x411e:  mov    %esp,%ebp
0863fc0f +0x4120:  sub    $0x18,%esp
0863fc12 +0x4123:  mov    0x8(%ebp),%eax
0863fc15 +0x4126:  movl   $&_ZTV22TimerPvPDieUserRevive5+0x8,(%eax)
0863fc1b +0x412c:  mov    0x8(%ebp),%eax
0863fc1e +0x412f:  mov    %eax,(%esp)
0863fc21 +0x4132:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fc26 +0x4137:  mov    $0x0,%eax
0863fc2b +0x413c:  test   %al,%al
0863fc2d +0x413e:  je     0863fc3a <+0x414b>
0863fc2f +0x4140:  mov    0x8(%ebp),%eax
0863fc32 +0x4143:  mov    %eax,(%esp)
0863fc35 +0x4146:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fc3a +0x414b:  leave
0863fc3b +0x414c:  ret
0863fc3c +0x414d:  push   %ebp
0863fc3d +0x414e:  mov    %esp,%ebp
0863fc3f +0x4150:  sub    $0x18,%esp
0863fc42 +0x4153:  mov    0x8(%ebp),%eax
0863fc45 +0x4156:  mov    %eax,(%esp)
0863fc48 +0x4159:  call   0863fc0c <+0x411d>
0863fc4d +0x415e:  mov    0x8(%ebp),%eax
0863fc50 +0x4161:  mov    %eax,(%esp)
0863fc53 +0x4164:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fc58 +0x4169:  leave
0863fc59 +0x416a:  ret
0863fc5a +0x416b:  push   %ebp
0863fc5b +0x416c:  mov    %esp,%ebp
0863fc5d +0x416e:  sub    $0x18,%esp
0863fc60 +0x4171:  mov    0x8(%ebp),%eax
0863fc63 +0x4174:  movl   $&_ZTV22TimerPvPDieUserRevive4+0x8,(%eax)
0863fc69 +0x417a:  mov    0x8(%ebp),%eax
0863fc6c +0x417d:  mov    %eax,(%esp)
0863fc6f +0x4180:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fc74 +0x4185:  mov    $0x0,%eax
0863fc79 +0x418a:  test   %al,%al
0863fc7b +0x418c:  je     0863fc88 <+0x4199>
0863fc7d +0x418e:  mov    0x8(%ebp),%eax
0863fc80 +0x4191:  mov    %eax,(%esp)
0863fc83 +0x4194:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fc88 +0x4199:  leave
0863fc89 +0x419a:  ret
0863fc8a +0x419b:  push   %ebp
0863fc8b +0x419c:  mov    %esp,%ebp
0863fc8d +0x419e:  sub    $0x18,%esp
0863fc90 +0x41a1:  mov    0x8(%ebp),%eax
0863fc93 +0x41a4:  mov    %eax,(%esp)
0863fc96 +0x41a7:  call   0863fc5a <+0x416b>
0863fc9b +0x41ac:  mov    0x8(%ebp),%eax
0863fc9e +0x41af:  mov    %eax,(%esp)
0863fca1 +0x41b2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fca6 +0x41b7:  leave
0863fca7 +0x41b8:  ret
0863fca8 +0x41b9:  push   %ebp
0863fca9 +0x41ba:  mov    %esp,%ebp
0863fcab +0x41bc:  sub    $0x18,%esp
0863fcae +0x41bf:  mov    0x8(%ebp),%eax
0863fcb1 +0x41c2:  movl   $&_ZTV22TimerPvPDieUserRevive3+0x8,(%eax)
0863fcb7 +0x41c8:  mov    0x8(%ebp),%eax
0863fcba +0x41cb:  mov    %eax,(%esp)
0863fcbd +0x41ce:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fcc2 +0x41d3:  mov    $0x0,%eax
0863fcc7 +0x41d8:  test   %al,%al
0863fcc9 +0x41da:  je     0863fcd6 <+0x41e7>
0863fccb +0x41dc:  mov    0x8(%ebp),%eax
0863fcce +0x41df:  mov    %eax,(%esp)
0863fcd1 +0x41e2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fcd6 +0x41e7:  leave
0863fcd7 +0x41e8:  ret
0863fcd8 +0x41e9:  push   %ebp
0863fcd9 +0x41ea:  mov    %esp,%ebp
0863fcdb +0x41ec:  sub    $0x18,%esp
0863fcde +0x41ef:  mov    0x8(%ebp),%eax
0863fce1 +0x41f2:  mov    %eax,(%esp)
0863fce4 +0x41f5:  call   0863fca8 <+0x41b9>
0863fce9 +0x41fa:  mov    0x8(%ebp),%eax
0863fcec +0x41fd:  mov    %eax,(%esp)
0863fcef +0x4200:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fcf4 +0x4205:  leave
0863fcf5 +0x4206:  ret
0863fcf6 +0x4207:  push   %ebp
0863fcf7 +0x4208:  mov    %esp,%ebp
0863fcf9 +0x420a:  sub    $0x18,%esp
0863fcfc +0x420d:  mov    0x8(%ebp),%eax
0863fcff +0x4210:  movl   $&_ZTV22TimerPvPDieUserRevive2+0x8,(%eax)
0863fd05 +0x4216:  mov    0x8(%ebp),%eax
0863fd08 +0x4219:  mov    %eax,(%esp)
0863fd0b +0x421c:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fd10 +0x4221:  mov    $0x0,%eax
0863fd15 +0x4226:  test   %al,%al
0863fd17 +0x4228:  je     0863fd24 <+0x4235>
0863fd19 +0x422a:  mov    0x8(%ebp),%eax
0863fd1c +0x422d:  mov    %eax,(%esp)
0863fd1f +0x4230:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fd24 +0x4235:  leave
0863fd25 +0x4236:  ret
0863fd26 +0x4237:  push   %ebp
0863fd27 +0x4238:  mov    %esp,%ebp
0863fd29 +0x423a:  sub    $0x18,%esp
0863fd2c +0x423d:  mov    0x8(%ebp),%eax
0863fd2f +0x4240:  mov    %eax,(%esp)
0863fd32 +0x4243:  call   0863fcf6 <+0x4207>
0863fd37 +0x4248:  mov    0x8(%ebp),%eax
0863fd3a +0x424b:  mov    %eax,(%esp)
0863fd3d +0x424e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fd42 +0x4253:  leave
0863fd43 +0x4254:  ret
0863fd44 +0x4255:  push   %ebp
0863fd45 +0x4256:  mov    %esp,%ebp
0863fd47 +0x4258:  sub    $0x18,%esp
0863fd4a +0x425b:  mov    0x8(%ebp),%eax
0863fd4d +0x425e:  movl   $&_ZTV22TimerPvPDieUserRevive1+0x8,(%eax)
0863fd53 +0x4264:  mov    0x8(%ebp),%eax
0863fd56 +0x4267:  mov    %eax,(%esp)
0863fd59 +0x426a:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fd5e +0x426f:  mov    $0x0,%eax
0863fd63 +0x4274:  test   %al,%al
0863fd65 +0x4276:  je     0863fd72 <+0x4283>
0863fd67 +0x4278:  mov    0x8(%ebp),%eax
0863fd6a +0x427b:  mov    %eax,(%esp)
0863fd6d +0x427e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fd72 +0x4283:  leave
0863fd73 +0x4284:  ret
0863fd74 +0x4285:  push   %ebp
0863fd75 +0x4286:  mov    %esp,%ebp
0863fd77 +0x4288:  sub    $0x18,%esp
0863fd7a +0x428b:  mov    0x8(%ebp),%eax
0863fd7d +0x428e:  mov    %eax,(%esp)
0863fd80 +0x4291:  call   0863fd44 <+0x4255>
0863fd85 +0x4296:  mov    0x8(%ebp),%eax
0863fd88 +0x4299:  mov    %eax,(%esp)
0863fd8b +0x429c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fd90 +0x42a1:  leave
0863fd91 +0x42a2:  ret
0863fd92 +0x42a3:  push   %ebp
0863fd93 +0x42a4:  mov    %esp,%ebp
0863fd95 +0x42a6:  sub    $0x18,%esp
0863fd98 +0x42a9:  mov    0x8(%ebp),%eax
0863fd9b +0x42ac:  movl   $&_ZTV22TimerPvPDieUserRevive0+0x8,(%eax)
0863fda1 +0x42b2:  mov    0x8(%ebp),%eax
0863fda4 +0x42b5:  mov    %eax,(%esp)
0863fda7 +0x42b8:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fdac +0x42bd:  mov    $0x0,%eax
0863fdb1 +0x42c2:  test   %al,%al
0863fdb3 +0x42c4:  je     0863fdc0 <+0x42d1>
0863fdb5 +0x42c6:  mov    0x8(%ebp),%eax
0863fdb8 +0x42c9:  mov    %eax,(%esp)
0863fdbb +0x42cc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fdc0 +0x42d1:  leave
0863fdc1 +0x42d2:  ret
0863fdc2 +0x42d3:  push   %ebp
0863fdc3 +0x42d4:  mov    %esp,%ebp
0863fdc5 +0x42d6:  sub    $0x18,%esp
0863fdc8 +0x42d9:  mov    0x8(%ebp),%eax
0863fdcb +0x42dc:  mov    %eax,(%esp)
0863fdce +0x42df:  call   0863fd92 <+0x42a3>
0863fdd3 +0x42e4:  mov    0x8(%ebp),%eax
0863fdd6 +0x42e7:  mov    %eax,(%esp)
0863fdd9 +0x42ea:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fdde +0x42ef:  leave
0863fddf +0x42f0:  ret
0863fde0 +0x42f1:  push   %ebp
0863fde1 +0x42f2:  mov    %esp,%ebp
0863fde3 +0x42f4:  sub    $0x18,%esp
0863fde6 +0x42f7:  mov    0x8(%ebp),%eax
0863fde9 +0x42fa:  movl   $&_ZTV20TimerEventCoinRefill+0x8,(%eax)
0863fdef +0x4300:  mov    0x8(%ebp),%eax
0863fdf2 +0x4303:  mov    %eax,(%esp)
0863fdf5 +0x4306:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fdfa +0x430b:  mov    $0x0,%eax
0863fdff +0x4310:  test   %al,%al
0863fe01 +0x4312:  je     0863fe0e <+0x431f>
0863fe03 +0x4314:  mov    0x8(%ebp),%eax
0863fe06 +0x4317:  mov    %eax,(%esp)
0863fe09 +0x431a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fe0e +0x431f:  leave
0863fe0f +0x4320:  ret
0863fe10 +0x4321:  push   %ebp
0863fe11 +0x4322:  mov    %esp,%ebp
0863fe13 +0x4324:  sub    $0x18,%esp
0863fe16 +0x4327:  mov    0x8(%ebp),%eax
0863fe19 +0x432a:  mov    %eax,(%esp)
0863fe1c +0x432d:  call   0863fde0 <+0x42f1>
0863fe21 +0x4332:  mov    0x8(%ebp),%eax
0863fe24 +0x4335:  mov    %eax,(%esp)
0863fe27 +0x4338:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fe2c +0x433d:  leave
0863fe2d +0x433e:  ret
0863fe2e +0x433f:  push   %ebp
0863fe2f +0x4340:  mov    %esp,%ebp
0863fe31 +0x4342:  sub    $0x18,%esp
0863fe34 +0x4345:  mov    0x8(%ebp),%eax
0863fe37 +0x4348:  movl   $&_ZTV19TimerBossDieTimeout+0x8,(%eax)
0863fe3d +0x434e:  mov    0x8(%ebp),%eax
0863fe40 +0x4351:  mov    %eax,(%esp)
0863fe43 +0x4354:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fe48 +0x4359:  mov    $0x0,%eax
0863fe4d +0x435e:  test   %al,%al
0863fe4f +0x4360:  je     0863fe5c <+0x436d>
0863fe51 +0x4362:  mov    0x8(%ebp),%eax
0863fe54 +0x4365:  mov    %eax,(%esp)
0863fe57 +0x4368:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fe5c +0x436d:  leave
0863fe5d +0x436e:  ret
0863fe5e +0x436f:  push   %ebp
0863fe5f +0x4370:  mov    %esp,%ebp
0863fe61 +0x4372:  sub    $0x18,%esp
0863fe64 +0x4375:  mov    0x8(%ebp),%eax
0863fe67 +0x4378:  mov    %eax,(%esp)
0863fe6a +0x437b:  call   0863fe2e <+0x433f>
0863fe6f +0x4380:  mov    0x8(%ebp),%eax
0863fe72 +0x4383:  mov    %eax,(%esp)
0863fe75 +0x4386:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fe7a +0x438b:  leave
0863fe7b +0x438c:  ret
0863fe7c +0x438d:  push   %ebp
0863fe7d +0x438e:  mov    %esp,%ebp
0863fe7f +0x4390:  sub    $0x18,%esp
0863fe82 +0x4393:  mov    0x8(%ebp),%eax
0863fe85 +0x4396:  movl   $&_ZTV21TimerStartRelayBattle+0x8,(%eax)
0863fe8b +0x439c:  mov    0x8(%ebp),%eax
0863fe8e +0x439f:  mov    %eax,(%esp)
0863fe91 +0x43a2:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fe96 +0x43a7:  mov    $0x0,%eax
0863fe9b +0x43ac:  test   %al,%al
0863fe9d +0x43ae:  je     0863feaa <+0x43bb>
0863fe9f +0x43b0:  mov    0x8(%ebp),%eax
0863fea2 +0x43b3:  mov    %eax,(%esp)
0863fea5 +0x43b6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863feaa +0x43bb:  leave
0863feab +0x43bc:  ret
0863feac +0x43bd:  push   %ebp
0863fead +0x43be:  mov    %esp,%ebp
0863feaf +0x43c0:  sub    $0x18,%esp
0863feb2 +0x43c3:  mov    0x8(%ebp),%eax
0863feb5 +0x43c6:  mov    %eax,(%esp)
0863feb8 +0x43c9:  call   0863fe7c <+0x438d>
0863febd +0x43ce:  mov    0x8(%ebp),%eax
0863fec0 +0x43d1:  mov    %eax,(%esp)
0863fec3 +0x43d4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fec8 +0x43d9:  leave
0863fec9 +0x43da:  ret
0863feca +0x43db:  push   %ebp
0863fecb +0x43dc:  mov    %esp,%ebp
0863fecd +0x43de:  sub    $0x18,%esp
0863fed0 +0x43e1:  mov    0x8(%ebp),%eax
0863fed3 +0x43e4:  movl   $&_ZTV18TimerSetPlayResult+0x8,(%eax)
0863fed9 +0x43ea:  mov    0x8(%ebp),%eax
0863fedc +0x43ed:  mov    %eax,(%esp)
0863fedf +0x43f0:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863fee4 +0x43f5:  mov    $0x0,%eax
0863fee9 +0x43fa:  test   %al,%al
0863feeb +0x43fc:  je     0863fef8 <+0x4409>
0863feed +0x43fe:  mov    0x8(%ebp),%eax
0863fef0 +0x4401:  mov    %eax,(%esp)
0863fef3 +0x4404:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863fef8 +0x4409:  leave
0863fef9 +0x440a:  ret
0863fefa +0x440b:  push   %ebp
0863fefb +0x440c:  mov    %esp,%ebp
0863fefd +0x440e:  sub    $0x18,%esp
0863ff00 +0x4411:  mov    0x8(%ebp),%eax
0863ff03 +0x4414:  mov    %eax,(%esp)
0863ff06 +0x4417:  call   0863feca <+0x43db>
0863ff0b +0x441c:  mov    0x8(%ebp),%eax
0863ff0e +0x441f:  mov    %eax,(%esp)
0863ff11 +0x4422:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ff16 +0x4427:  leave
0863ff17 +0x4428:  ret
0863ff18 +0x4429:  push   %ebp
0863ff19 +0x442a:  mov    %esp,%ebp
0863ff1b +0x442c:  sub    $0x18,%esp
0863ff1e +0x442f:  mov    0x8(%ebp),%eax
0863ff21 +0x4432:  movl   $&_ZTV17TimerQueueSizeLog+0x8,(%eax)
0863ff27 +0x4438:  mov    0x8(%ebp),%eax
0863ff2a +0x443b:  mov    %eax,(%esp)
0863ff2d +0x443e:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ff32 +0x4443:  mov    $0x0,%eax
0863ff37 +0x4448:  test   %al,%al
0863ff39 +0x444a:  je     0863ff46 <+0x4457>
0863ff3b +0x444c:  mov    0x8(%ebp),%eax
0863ff3e +0x444f:  mov    %eax,(%esp)
0863ff41 +0x4452:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ff46 +0x4457:  leave
0863ff47 +0x4458:  ret
0863ff48 +0x4459:  push   %ebp
0863ff49 +0x445a:  mov    %esp,%ebp
0863ff4b +0x445c:  sub    $0x18,%esp
0863ff4e +0x445f:  mov    0x8(%ebp),%eax
0863ff51 +0x4462:  mov    %eax,(%esp)
0863ff54 +0x4465:  call   0863ff18 <+0x4429>
0863ff59 +0x446a:  mov    0x8(%ebp),%eax
0863ff5c +0x446d:  mov    %eax,(%esp)
0863ff5f +0x4470:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ff64 +0x4475:  leave
0863ff65 +0x4476:  ret
0863ff66 +0x4477:  push   %ebp
0863ff67 +0x4478:  mov    %esp,%ebp
0863ff69 +0x447a:  sub    $0x18,%esp
0863ff6c +0x447d:  mov    0x8(%ebp),%eax
0863ff6f +0x4480:  movl   $&_ZTV15TimerForbidMove+0x8,(%eax)
0863ff75 +0x4486:  mov    0x8(%ebp),%eax
0863ff78 +0x4489:  mov    %eax,(%esp)
0863ff7b +0x448c:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ff80 +0x4491:  mov    $0x0,%eax
0863ff85 +0x4496:  test   %al,%al
0863ff87 +0x4498:  je     0863ff94 <+0x44a5>
0863ff89 +0x449a:  mov    0x8(%ebp),%eax
0863ff8c +0x449d:  mov    %eax,(%esp)
0863ff8f +0x44a0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ff94 +0x44a5:  leave
0863ff95 +0x44a6:  ret
0863ff96 +0x44a7:  push   %ebp
0863ff97 +0x44a8:  mov    %esp,%ebp
0863ff99 +0x44aa:  sub    $0x18,%esp
0863ff9c +0x44ad:  mov    0x8(%ebp),%eax
0863ff9f +0x44b0:  mov    %eax,(%esp)
0863ffa2 +0x44b3:  call   0863ff66 <+0x4477>
0863ffa7 +0x44b8:  mov    0x8(%ebp),%eax
0863ffaa +0x44bb:  mov    %eax,(%esp)
0863ffad +0x44be:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ffb2 +0x44c3:  leave
0863ffb3 +0x44c4:  ret
0863ffb4 +0x44c5:  push   %ebp
0863ffb5 +0x44c6:  mov    %esp,%ebp
0863ffb7 +0x44c8:  sub    $0x18,%esp
0863ffba +0x44cb:  mov    0x8(%ebp),%eax
0863ffbd +0x44ce:  movl   $&_ZTV15TimerForbidChat+0x8,(%eax)
0863ffc3 +0x44d4:  mov    0x8(%ebp),%eax
0863ffc6 +0x44d7:  mov    %eax,(%esp)
0863ffc9 +0x44da:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0863ffce +0x44df:  mov    $0x0,%eax
0863ffd3 +0x44e4:  test   %al,%al
0863ffd5 +0x44e6:  je     0863ffe2 <+0x44f3>
0863ffd7 +0x44e8:  mov    0x8(%ebp),%eax
0863ffda +0x44eb:  mov    %eax,(%esp)
0863ffdd +0x44ee:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0863ffe2 +0x44f3:  leave
0863ffe3 +0x44f4:  ret
0863ffe4 +0x44f5:  push   %ebp
0863ffe5 +0x44f6:  mov    %esp,%ebp
0863ffe7 +0x44f8:  sub    $0x18,%esp
0863ffea +0x44fb:  mov    0x8(%ebp),%eax
0863ffed +0x44fe:  mov    %eax,(%esp)
0863fff0 +0x4501:  call   0863ffb4 <+0x44c5>
0863fff5 +0x4506:  mov    0x8(%ebp),%eax
0863fff8 +0x4509:  mov    %eax,(%esp)
0863fffb +0x450c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640000 +0x4511:  leave
08640001 +0x4512:  ret
08640002 +0x4513:  push   %ebp
08640003 +0x4514:  mov    %esp,%ebp
08640005 +0x4516:  sub    $0x18,%esp
08640008 +0x4519:  mov    0x8(%ebp),%eax
0864000b +0x451c:  movl   $&_ZTV13TimerCreature+0x8,(%eax)
08640011 +0x4522:  mov    0x8(%ebp),%eax
08640014 +0x4525:  mov    %eax,(%esp)
08640017 +0x4528:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0864001c +0x452d:  mov    $0x0,%eax
08640021 +0x4532:  test   %al,%al
08640023 +0x4534:  je     08640030 <+0x4541>
08640025 +0x4536:  mov    0x8(%ebp),%eax
08640028 +0x4539:  mov    %eax,(%esp)
0864002b +0x453c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640030 +0x4541:  leave
08640031 +0x4542:  ret
08640032 +0x4543:  push   %ebp
08640033 +0x4544:  mov    %esp,%ebp
08640035 +0x4546:  sub    $0x18,%esp
08640038 +0x4549:  mov    0x8(%ebp),%eax
0864003b +0x454c:  mov    %eax,(%esp)
0864003e +0x454f:  call   08640002 <+0x4513>
08640043 +0x4554:  mov    0x8(%ebp),%eax
08640046 +0x4557:  mov    %eax,(%esp)
08640049 +0x455a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864004e +0x455f:  leave
0864004f +0x4560:  ret
08640050 +0x4561:  push   %ebp
08640051 +0x4562:  mov    %esp,%ebp
08640053 +0x4564:  sub    $0x18,%esp
08640056 +0x4567:  mov    0x8(%ebp),%eax
08640059 +0x456a:  movl   $&_ZTV21TimerCheckMailTimeOut+0x8,(%eax)
0864005f +0x4570:  mov    0x8(%ebp),%eax
08640062 +0x4573:  mov    %eax,(%esp)
08640065 +0x4576:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0864006a +0x457b:  mov    $0x0,%eax
0864006f +0x4580:  test   %al,%al
08640071 +0x4582:  je     0864007e <+0x458f>
08640073 +0x4584:  mov    0x8(%ebp),%eax
08640076 +0x4587:  mov    %eax,(%esp)
08640079 +0x458a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864007e +0x458f:  leave
0864007f +0x4590:  ret
08640080 +0x4591:  push   %ebp
08640081 +0x4592:  mov    %esp,%ebp
08640083 +0x4594:  sub    $0x18,%esp
08640086 +0x4597:  mov    0x8(%ebp),%eax
08640089 +0x459a:  mov    %eax,(%esp)
0864008c +0x459d:  call   08640050 <+0x4561>
08640091 +0x45a2:  mov    0x8(%ebp),%eax
08640094 +0x45a5:  mov    %eax,(%esp)
08640097 +0x45a8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864009c +0x45ad:  leave
0864009d +0x45ae:  ret
0864009e +0x45af:  push   %ebp
0864009f +0x45b0:  mov    %esp,%ebp
086400a1 +0x45b2:  sub    $0x18,%esp
086400a4 +0x45b5:  mov    0x8(%ebp),%eax
086400a7 +0x45b8:  movl   $&_ZTV16TimerNatTypeUser+0x8,(%eax)
086400ad +0x45be:  mov    0x8(%ebp),%eax
086400b0 +0x45c1:  mov    %eax,(%esp)
086400b3 +0x45c4:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086400b8 +0x45c9:  mov    $0x0,%eax
086400bd +0x45ce:  test   %al,%al
086400bf +0x45d0:  je     086400cc <+0x45dd>
086400c1 +0x45d2:  mov    0x8(%ebp),%eax
086400c4 +0x45d5:  mov    %eax,(%esp)
086400c7 +0x45d8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086400cc +0x45dd:  leave
086400cd +0x45de:  ret
086400ce +0x45df:  push   %ebp
086400cf +0x45e0:  mov    %esp,%ebp
086400d1 +0x45e2:  sub    $0x18,%esp
086400d4 +0x45e5:  mov    0x8(%ebp),%eax
086400d7 +0x45e8:  mov    %eax,(%esp)
086400da +0x45eb:  call   0864009e <+0x45af>
086400df +0x45f0:  mov    0x8(%ebp),%eax
086400e2 +0x45f3:  mov    %eax,(%esp)
086400e5 +0x45f6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086400ea +0x45fb:  leave
086400eb +0x45fc:  ret
086400ec +0x45fd:  push   %ebp
086400ed +0x45fe:  mov    %esp,%ebp
086400ef +0x4600:  sub    $0x18,%esp
086400f2 +0x4603:  mov    0x8(%ebp),%eax
086400f5 +0x4606:  movl   $&_ZTV12TimerNatType+0x8,(%eax)
086400fb +0x460c:  mov    0x8(%ebp),%eax
086400fe +0x460f:  mov    %eax,(%esp)
08640101 +0x4612:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640106 +0x4617:  mov    $0x0,%eax
0864010b +0x461c:  test   %al,%al
0864010d +0x461e:  je     0864011a <+0x462b>
0864010f +0x4620:  mov    0x8(%ebp),%eax
08640112 +0x4623:  mov    %eax,(%esp)
08640115 +0x4626:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864011a +0x462b:  leave
0864011b +0x462c:  ret
0864011c +0x462d:  push   %ebp
0864011d +0x462e:  mov    %esp,%ebp
0864011f +0x4630:  sub    $0x18,%esp
08640122 +0x4633:  mov    0x8(%ebp),%eax
08640125 +0x4636:  mov    %eax,(%esp)
08640128 +0x4639:  call   086400ec <+0x45fd>
0864012d +0x463e:  mov    0x8(%ebp),%eax
08640130 +0x4641:  mov    %eax,(%esp)
08640133 +0x4644:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640138 +0x4649:  leave
08640139 +0x464a:  ret
0864013a +0x464b:  push   %ebp
0864013b +0x464c:  mov    %esp,%ebp
0864013d +0x464e:  sub    $0x18,%esp
08640140 +0x4651:  mov    0x8(%ebp),%eax
08640143 +0x4654:  movl   $&_ZTV17TimerQueryCounter+0x8,(%eax)
08640149 +0x465a:  mov    0x8(%ebp),%eax
0864014c +0x465d:  mov    %eax,(%esp)
0864014f +0x4660:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640154 +0x4665:  mov    $0x0,%eax
08640159 +0x466a:  test   %al,%al
0864015b +0x466c:  je     08640168 <+0x4679>
0864015d +0x466e:  mov    0x8(%ebp),%eax
08640160 +0x4671:  mov    %eax,(%esp)
08640163 +0x4674:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640168 +0x4679:  leave
08640169 +0x467a:  ret
0864016a +0x467b:  push   %ebp
0864016b +0x467c:  mov    %esp,%ebp
0864016d +0x467e:  sub    $0x18,%esp
08640170 +0x4681:  mov    0x8(%ebp),%eax
08640173 +0x4684:  mov    %eax,(%esp)
08640176 +0x4687:  call   0864013a <+0x464b>
0864017b +0x468c:  mov    0x8(%ebp),%eax
0864017e +0x468f:  mov    %eax,(%esp)
08640181 +0x4692:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640186 +0x4697:  leave
08640187 +0x4698:  ret
08640188 +0x4699:  push   %ebp
08640189 +0x469a:  mov    %esp,%ebp
0864018b +0x469c:  sub    $0x18,%esp
0864018e +0x469f:  mov    0x8(%ebp),%eax
08640191 +0x46a2:  movl   $&_ZTV23TimerSaveLogGamechannel+0x8,(%eax)
08640197 +0x46a8:  mov    0x8(%ebp),%eax
0864019a +0x46ab:  mov    %eax,(%esp)
0864019d +0x46ae:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086401a2 +0x46b3:  mov    $0x0,%eax
086401a7 +0x46b8:  test   %al,%al
086401a9 +0x46ba:  je     086401b6 <+0x46c7>
086401ab +0x46bc:  mov    0x8(%ebp),%eax
086401ae +0x46bf:  mov    %eax,(%esp)
086401b1 +0x46c2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086401b6 +0x46c7:  leave
086401b7 +0x46c8:  ret
086401b8 +0x46c9:  push   %ebp
086401b9 +0x46ca:  mov    %esp,%ebp
086401bb +0x46cc:  sub    $0x18,%esp
086401be +0x46cf:  mov    0x8(%ebp),%eax
086401c1 +0x46d2:  mov    %eax,(%esp)
086401c4 +0x46d5:  call   08640188 <+0x4699>
086401c9 +0x46da:  mov    0x8(%ebp),%eax
086401cc +0x46dd:  mov    %eax,(%esp)
086401cf +0x46e0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086401d4 +0x46e5:  leave
086401d5 +0x46e6:  ret
086401d6 +0x46e7:  push   %ebp
086401d7 +0x46e8:  mov    %esp,%ebp
086401d9 +0x46ea:  sub    $0x18,%esp
086401dc +0x46ed:  mov    0x8(%ebp),%eax
086401df +0x46f0:  movl   $&_ZTV19TimerStatisticLevel+0x8,(%eax)
086401e5 +0x46f6:  mov    0x8(%ebp),%eax
086401e8 +0x46f9:  mov    %eax,(%esp)
086401eb +0x46fc:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086401f0 +0x4701:  mov    $0x0,%eax
086401f5 +0x4706:  test   %al,%al
086401f7 +0x4708:  je     08640204 <+0x4715>
086401f9 +0x470a:  mov    0x8(%ebp),%eax
086401fc +0x470d:  mov    %eax,(%esp)
086401ff +0x4710:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640204 +0x4715:  leave
08640205 +0x4716:  ret
08640206 +0x4717:  push   %ebp
08640207 +0x4718:  mov    %esp,%ebp
08640209 +0x471a:  sub    $0x18,%esp
0864020c +0x471d:  mov    0x8(%ebp),%eax
0864020f +0x4720:  mov    %eax,(%esp)
08640212 +0x4723:  call   086401d6 <+0x46e7>
08640217 +0x4728:  mov    0x8(%ebp),%eax
0864021a +0x472b:  mov    %eax,(%esp)
0864021d +0x472e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640222 +0x4733:  leave
08640223 +0x4734:  ret
08640224 +0x4735:  push   %ebp
08640225 +0x4736:  mov    %esp,%ebp
08640227 +0x4738:  sub    $0x18,%esp
0864022a +0x473b:  mov    0x8(%ebp),%eax
0864022d +0x473e:  movl   $&_ZTV32TimerStatisticsDetailChannelInfo+0x8,(%eax)
08640233 +0x4744:  mov    0x8(%ebp),%eax
08640236 +0x4747:  mov    %eax,(%esp)
08640239 +0x474a:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0864023e +0x474f:  mov    $0x0,%eax
08640243 +0x4754:  test   %al,%al
08640245 +0x4756:  je     08640252 <+0x4763>
08640247 +0x4758:  mov    0x8(%ebp),%eax
0864024a +0x475b:  mov    %eax,(%esp)
0864024d +0x475e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640252 +0x4763:  leave
08640253 +0x4764:  ret
08640254 +0x4765:  push   %ebp
08640255 +0x4766:  mov    %esp,%ebp
08640257 +0x4768:  sub    $0x18,%esp
0864025a +0x476b:  mov    0x8(%ebp),%eax
0864025d +0x476e:  mov    %eax,(%esp)
08640260 +0x4771:  call   08640224 <+0x4735>
08640265 +0x4776:  mov    0x8(%ebp),%eax
08640268 +0x4779:  mov    %eax,(%esp)
0864026b +0x477c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640270 +0x4781:  leave
08640271 +0x4782:  ret
08640272 +0x4783:  push   %ebp
08640273 +0x4784:  mov    %esp,%ebp
08640275 +0x4786:  sub    $0x18,%esp
08640278 +0x4789:  mov    0x8(%ebp),%eax
0864027b +0x478c:  movl   $&_ZTV19TimerEventChristmas+0x8,(%eax)
08640281 +0x4792:  mov    0x8(%ebp),%eax
08640284 +0x4795:  mov    %eax,(%esp)
08640287 +0x4798:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0864028c +0x479d:  mov    $0x0,%eax
08640291 +0x47a2:  test   %al,%al
08640293 +0x47a4:  je     086402a0 <+0x47b1>
08640295 +0x47a6:  mov    0x8(%ebp),%eax
08640298 +0x47a9:  mov    %eax,(%esp)
0864029b +0x47ac:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086402a0 +0x47b1:  leave
086402a1 +0x47b2:  ret
086402a2 +0x47b3:  push   %ebp
086402a3 +0x47b4:  mov    %esp,%ebp
086402a5 +0x47b6:  sub    $0x18,%esp
086402a8 +0x47b9:  mov    0x8(%ebp),%eax
086402ab +0x47bc:  mov    %eax,(%esp)
086402ae +0x47bf:  call   08640272 <+0x4783>
086402b3 +0x47c4:  mov    0x8(%ebp),%eax
086402b6 +0x47c7:  mov    %eax,(%esp)
086402b9 +0x47ca:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086402be +0x47cf:  leave
086402bf +0x47d0:  ret
086402c0 +0x47d1:  push   %ebp
086402c1 +0x47d2:  mov    %esp,%ebp
086402c3 +0x47d4:  sub    $0x18,%esp
086402c6 +0x47d7:  mov    0x8(%ebp),%eax
086402c9 +0x47da:  movl   $&_ZTV22TimerBloodCrazyMonster+0x8,(%eax)
086402cf +0x47e0:  mov    0x8(%ebp),%eax
086402d2 +0x47e3:  mov    %eax,(%esp)
086402d5 +0x47e6:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086402da +0x47eb:  mov    $0x0,%eax
086402df +0x47f0:  test   %al,%al
086402e1 +0x47f2:  je     086402ee <+0x47ff>
086402e3 +0x47f4:  mov    0x8(%ebp),%eax
086402e6 +0x47f7:  mov    %eax,(%esp)
086402e9 +0x47fa:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086402ee +0x47ff:  leave
086402ef +0x4800:  ret
086402f0 +0x4801:  push   %ebp
086402f1 +0x4802:  mov    %esp,%ebp
086402f3 +0x4804:  sub    $0x18,%esp
086402f6 +0x4807:  mov    0x8(%ebp),%eax
086402f9 +0x480a:  mov    %eax,(%esp)
086402fc +0x480d:  call   086402c0 <+0x47d1>
08640301 +0x4812:  mov    0x8(%ebp),%eax
08640304 +0x4815:  mov    %eax,(%esp)
08640307 +0x4818:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864030c +0x481d:  leave
0864030d +0x481e:  ret
0864030e +0x481f:  push   %ebp
0864030f +0x4820:  mov    %esp,%ebp
08640311 +0x4822:  sub    $0x18,%esp
08640314 +0x4825:  mov    0x8(%ebp),%eax
08640317 +0x4828:  movl   $&_ZTV24TimerBloodPhaseRegister9+0x8,(%eax)
0864031d +0x482e:  mov    0x8(%ebp),%eax
08640320 +0x4831:  mov    %eax,(%esp)
08640323 +0x4834:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640328 +0x4839:  mov    $0x0,%eax
0864032d +0x483e:  test   %al,%al
0864032f +0x4840:  je     0864033c <+0x484d>
08640331 +0x4842:  mov    0x8(%ebp),%eax
08640334 +0x4845:  mov    %eax,(%esp)
08640337 +0x4848:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864033c +0x484d:  leave
0864033d +0x484e:  ret
0864033e +0x484f:  push   %ebp
0864033f +0x4850:  mov    %esp,%ebp
08640341 +0x4852:  sub    $0x18,%esp
08640344 +0x4855:  mov    0x8(%ebp),%eax
08640347 +0x4858:  mov    %eax,(%esp)
0864034a +0x485b:  call   0864030e <+0x481f>
0864034f +0x4860:  mov    0x8(%ebp),%eax
08640352 +0x4863:  mov    %eax,(%esp)
08640355 +0x4866:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864035a +0x486b:  leave
0864035b +0x486c:  ret
0864035c +0x486d:  push   %ebp
0864035d +0x486e:  mov    %esp,%ebp
0864035f +0x4870:  sub    $0x18,%esp
08640362 +0x4873:  mov    0x8(%ebp),%eax
08640365 +0x4876:  movl   $&_ZTV24TimerBloodPhaseRegister8+0x8,(%eax)
0864036b +0x487c:  mov    0x8(%ebp),%eax
0864036e +0x487f:  mov    %eax,(%esp)
08640371 +0x4882:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640376 +0x4887:  mov    $0x0,%eax
0864037b +0x488c:  test   %al,%al
0864037d +0x488e:  je     0864038a <+0x489b>
0864037f +0x4890:  mov    0x8(%ebp),%eax
08640382 +0x4893:  mov    %eax,(%esp)
08640385 +0x4896:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864038a +0x489b:  leave
0864038b +0x489c:  ret
0864038c +0x489d:  push   %ebp
0864038d +0x489e:  mov    %esp,%ebp
0864038f +0x48a0:  sub    $0x18,%esp
08640392 +0x48a3:  mov    0x8(%ebp),%eax
08640395 +0x48a6:  mov    %eax,(%esp)
08640398 +0x48a9:  call   0864035c <+0x486d>
0864039d +0x48ae:  mov    0x8(%ebp),%eax
086403a0 +0x48b1:  mov    %eax,(%esp)
086403a3 +0x48b4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086403a8 +0x48b9:  leave
086403a9 +0x48ba:  ret
086403aa +0x48bb:  push   %ebp
086403ab +0x48bc:  mov    %esp,%ebp
086403ad +0x48be:  sub    $0x18,%esp
086403b0 +0x48c1:  mov    0x8(%ebp),%eax
086403b3 +0x48c4:  movl   $&_ZTV24TimerBloodPhaseRegister7+0x8,(%eax)
086403b9 +0x48ca:  mov    0x8(%ebp),%eax
086403bc +0x48cd:  mov    %eax,(%esp)
086403bf +0x48d0:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086403c4 +0x48d5:  mov    $0x0,%eax
086403c9 +0x48da:  test   %al,%al
086403cb +0x48dc:  je     086403d8 <+0x48e9>
086403cd +0x48de:  mov    0x8(%ebp),%eax
086403d0 +0x48e1:  mov    %eax,(%esp)
086403d3 +0x48e4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086403d8 +0x48e9:  leave
086403d9 +0x48ea:  ret
086403da +0x48eb:  push   %ebp
086403db +0x48ec:  mov    %esp,%ebp
086403dd +0x48ee:  sub    $0x18,%esp
086403e0 +0x48f1:  mov    0x8(%ebp),%eax
086403e3 +0x48f4:  mov    %eax,(%esp)
086403e6 +0x48f7:  call   086403aa <+0x48bb>
086403eb +0x48fc:  mov    0x8(%ebp),%eax
086403ee +0x48ff:  mov    %eax,(%esp)
086403f1 +0x4902:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086403f6 +0x4907:  leave
086403f7 +0x4908:  ret
086403f8 +0x4909:  push   %ebp
086403f9 +0x490a:  mov    %esp,%ebp
086403fb +0x490c:  sub    $0x18,%esp
086403fe +0x490f:  mov    0x8(%ebp),%eax
08640401 +0x4912:  movl   $&_ZTV24TimerBloodPhaseRegister6+0x8,(%eax)
08640407 +0x4918:  mov    0x8(%ebp),%eax
0864040a +0x491b:  mov    %eax,(%esp)
0864040d +0x491e:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640412 +0x4923:  mov    $0x0,%eax
08640417 +0x4928:  test   %al,%al
08640419 +0x492a:  je     08640426 <+0x4937>
0864041b +0x492c:  mov    0x8(%ebp),%eax
0864041e +0x492f:  mov    %eax,(%esp)
08640421 +0x4932:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640426 +0x4937:  leave
08640427 +0x4938:  ret
08640428 +0x4939:  push   %ebp
08640429 +0x493a:  mov    %esp,%ebp
0864042b +0x493c:  sub    $0x18,%esp
0864042e +0x493f:  mov    0x8(%ebp),%eax
08640431 +0x4942:  mov    %eax,(%esp)
08640434 +0x4945:  call   086403f8 <+0x4909>
08640439 +0x494a:  mov    0x8(%ebp),%eax
0864043c +0x494d:  mov    %eax,(%esp)
0864043f +0x4950:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640444 +0x4955:  leave
08640445 +0x4956:  ret
08640446 +0x4957:  push   %ebp
08640447 +0x4958:  mov    %esp,%ebp
08640449 +0x495a:  sub    $0x18,%esp
0864044c +0x495d:  mov    0x8(%ebp),%eax
0864044f +0x4960:  movl   $&_ZTV24TimerBloodPhaseRegister5+0x8,(%eax)
08640455 +0x4966:  mov    0x8(%ebp),%eax
08640458 +0x4969:  mov    %eax,(%esp)
0864045b +0x496c:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640460 +0x4971:  mov    $0x0,%eax
08640465 +0x4976:  test   %al,%al
08640467 +0x4978:  je     08640474 <+0x4985>
08640469 +0x497a:  mov    0x8(%ebp),%eax
0864046c +0x497d:  mov    %eax,(%esp)
0864046f +0x4980:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640474 +0x4985:  leave
08640475 +0x4986:  ret
08640476 +0x4987:  push   %ebp
08640477 +0x4988:  mov    %esp,%ebp
08640479 +0x498a:  sub    $0x18,%esp
0864047c +0x498d:  mov    0x8(%ebp),%eax
0864047f +0x4990:  mov    %eax,(%esp)
08640482 +0x4993:  call   08640446 <+0x4957>
08640487 +0x4998:  mov    0x8(%ebp),%eax
0864048a +0x499b:  mov    %eax,(%esp)
0864048d +0x499e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640492 +0x49a3:  leave
08640493 +0x49a4:  ret
08640494 +0x49a5:  push   %ebp
08640495 +0x49a6:  mov    %esp,%ebp
08640497 +0x49a8:  sub    $0x18,%esp
0864049a +0x49ab:  mov    0x8(%ebp),%eax
0864049d +0x49ae:  movl   $&_ZTV24TimerBloodPhaseRegister4+0x8,(%eax)
086404a3 +0x49b4:  mov    0x8(%ebp),%eax
086404a6 +0x49b7:  mov    %eax,(%esp)
086404a9 +0x49ba:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086404ae +0x49bf:  mov    $0x0,%eax
086404b3 +0x49c4:  test   %al,%al
086404b5 +0x49c6:  je     086404c2 <+0x49d3>
086404b7 +0x49c8:  mov    0x8(%ebp),%eax
086404ba +0x49cb:  mov    %eax,(%esp)
086404bd +0x49ce:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086404c2 +0x49d3:  leave
086404c3 +0x49d4:  ret
086404c4 +0x49d5:  push   %ebp
086404c5 +0x49d6:  mov    %esp,%ebp
086404c7 +0x49d8:  sub    $0x18,%esp
086404ca +0x49db:  mov    0x8(%ebp),%eax
086404cd +0x49de:  mov    %eax,(%esp)
086404d0 +0x49e1:  call   08640494 <+0x49a5>
086404d5 +0x49e6:  mov    0x8(%ebp),%eax
086404d8 +0x49e9:  mov    %eax,(%esp)
086404db +0x49ec:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086404e0 +0x49f1:  leave
086404e1 +0x49f2:  ret
086404e2 +0x49f3:  push   %ebp
086404e3 +0x49f4:  mov    %esp,%ebp
086404e5 +0x49f6:  sub    $0x18,%esp
086404e8 +0x49f9:  mov    0x8(%ebp),%eax
086404eb +0x49fc:  movl   $&_ZTV24TimerBloodPhaseRegister3+0x8,(%eax)
086404f1 +0x4a02:  mov    0x8(%ebp),%eax
086404f4 +0x4a05:  mov    %eax,(%esp)
086404f7 +0x4a08:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086404fc +0x4a0d:  mov    $0x0,%eax
08640501 +0x4a12:  test   %al,%al
08640503 +0x4a14:  je     08640510 <+0x4a21>
08640505 +0x4a16:  mov    0x8(%ebp),%eax
08640508 +0x4a19:  mov    %eax,(%esp)
0864050b +0x4a1c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640510 +0x4a21:  leave
08640511 +0x4a22:  ret
08640512 +0x4a23:  push   %ebp
08640513 +0x4a24:  mov    %esp,%ebp
08640515 +0x4a26:  sub    $0x18,%esp
08640518 +0x4a29:  mov    0x8(%ebp),%eax
0864051b +0x4a2c:  mov    %eax,(%esp)
0864051e +0x4a2f:  call   086404e2 <+0x49f3>
08640523 +0x4a34:  mov    0x8(%ebp),%eax
08640526 +0x4a37:  mov    %eax,(%esp)
08640529 +0x4a3a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864052e +0x4a3f:  leave
0864052f +0x4a40:  ret
08640530 +0x4a41:  push   %ebp
08640531 +0x4a42:  mov    %esp,%ebp
08640533 +0x4a44:  sub    $0x18,%esp
08640536 +0x4a47:  mov    0x8(%ebp),%eax
08640539 +0x4a4a:  movl   $&_ZTV24TimerBloodPhaseRegister2+0x8,(%eax)
0864053f +0x4a50:  mov    0x8(%ebp),%eax
08640542 +0x4a53:  mov    %eax,(%esp)
08640545 +0x4a56:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0864054a +0x4a5b:  mov    $0x0,%eax
0864054f +0x4a60:  test   %al,%al
08640551 +0x4a62:  je     0864055e <+0x4a6f>
08640553 +0x4a64:  mov    0x8(%ebp),%eax
08640556 +0x4a67:  mov    %eax,(%esp)
08640559 +0x4a6a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864055e +0x4a6f:  leave
0864055f +0x4a70:  ret
08640560 +0x4a71:  push   %ebp
08640561 +0x4a72:  mov    %esp,%ebp
08640563 +0x4a74:  sub    $0x18,%esp
08640566 +0x4a77:  mov    0x8(%ebp),%eax
08640569 +0x4a7a:  mov    %eax,(%esp)
0864056c +0x4a7d:  call   08640530 <+0x4a41>
08640571 +0x4a82:  mov    0x8(%ebp),%eax
08640574 +0x4a85:  mov    %eax,(%esp)
08640577 +0x4a88:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864057c +0x4a8d:  leave
0864057d +0x4a8e:  ret
0864057e +0x4a8f:  push   %ebp
0864057f +0x4a90:  mov    %esp,%ebp
08640581 +0x4a92:  sub    $0x18,%esp
08640584 +0x4a95:  mov    0x8(%ebp),%eax
08640587 +0x4a98:  movl   $&_ZTV24TimerBloodPhaseRegister1+0x8,(%eax)
0864058d +0x4a9e:  mov    0x8(%ebp),%eax
08640590 +0x4aa1:  mov    %eax,(%esp)
08640593 +0x4aa4:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640598 +0x4aa9:  mov    $0x0,%eax
0864059d +0x4aae:  test   %al,%al
0864059f +0x4ab0:  je     086405ac <+0x4abd>
086405a1 +0x4ab2:  mov    0x8(%ebp),%eax
086405a4 +0x4ab5:  mov    %eax,(%esp)
086405a7 +0x4ab8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086405ac +0x4abd:  leave
086405ad +0x4abe:  ret
086405ae +0x4abf:  push   %ebp
086405af +0x4ac0:  mov    %esp,%ebp
086405b1 +0x4ac2:  sub    $0x18,%esp
086405b4 +0x4ac5:  mov    0x8(%ebp),%eax
086405b7 +0x4ac8:  mov    %eax,(%esp)
086405ba +0x4acb:  call   0864057e <+0x4a8f>
086405bf +0x4ad0:  mov    0x8(%ebp),%eax
086405c2 +0x4ad3:  mov    %eax,(%esp)
086405c5 +0x4ad6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086405ca +0x4adb:  leave
086405cb +0x4adc:  ret
086405cc +0x4add:  push   %ebp
086405cd +0x4ade:  mov    %esp,%ebp
086405cf +0x4ae0:  sub    $0x18,%esp
086405d2 +0x4ae3:  mov    0x8(%ebp),%eax
086405d5 +0x4ae6:  movl   $&_ZTV24TimerBloodPhaseRegister0+0x8,(%eax)
086405db +0x4aec:  mov    0x8(%ebp),%eax
086405de +0x4aef:  mov    %eax,(%esp)
086405e1 +0x4af2:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086405e6 +0x4af7:  mov    $0x0,%eax
086405eb +0x4afc:  test   %al,%al
086405ed +0x4afe:  je     086405fa <+0x4b0b>
086405ef +0x4b00:  mov    0x8(%ebp),%eax
086405f2 +0x4b03:  mov    %eax,(%esp)
086405f5 +0x4b06:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086405fa +0x4b0b:  leave
086405fb +0x4b0c:  ret
086405fc +0x4b0d:  push   %ebp
086405fd +0x4b0e:  mov    %esp,%ebp
086405ff +0x4b10:  sub    $0x18,%esp
08640602 +0x4b13:  mov    0x8(%ebp),%eax
08640605 +0x4b16:  mov    %eax,(%esp)
08640608 +0x4b19:  call   086405cc <+0x4add>
0864060d +0x4b1e:  mov    0x8(%ebp),%eax
08640610 +0x4b21:  mov    %eax,(%esp)
08640613 +0x4b24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640618 +0x4b29:  leave
08640619 +0x4b2a:  ret
0864061a +0x4b2b:  push   %ebp
0864061b +0x4b2c:  mov    %esp,%ebp
0864061d +0x4b2e:  sub    $0x18,%esp
08640620 +0x4b31:  mov    0x8(%ebp),%eax
08640623 +0x4b34:  movl   $&_ZTV28TimerBloodSmallRoundRegister+0x8,(%eax)
08640629 +0x4b3a:  mov    0x8(%ebp),%eax
0864062c +0x4b3d:  mov    %eax,(%esp)
0864062f +0x4b40:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640634 +0x4b45:  mov    $0x0,%eax
08640639 +0x4b4a:  test   %al,%al
0864063b +0x4b4c:  je     08640648 <+0x4b59>
0864063d +0x4b4e:  mov    0x8(%ebp),%eax
08640640 +0x4b51:  mov    %eax,(%esp)
08640643 +0x4b54:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640648 +0x4b59:  leave
08640649 +0x4b5a:  ret
0864064a +0x4b5b:  push   %ebp
0864064b +0x4b5c:  mov    %esp,%ebp
0864064d +0x4b5e:  sub    $0x18,%esp
08640650 +0x4b61:  mov    0x8(%ebp),%eax
08640653 +0x4b64:  mov    %eax,(%esp)
08640656 +0x4b67:  call   0864061a <+0x4b2b>
0864065b +0x4b6c:  mov    0x8(%ebp),%eax
0864065e +0x4b6f:  mov    %eax,(%esp)
08640661 +0x4b72:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640666 +0x4b77:  leave
08640667 +0x4b78:  ret
08640668 +0x4b79:  push   %ebp
08640669 +0x4b7a:  mov    %esp,%ebp
0864066b +0x4b7c:  sub    $0x18,%esp
0864066e +0x4b7f:  mov    0x8(%ebp),%eax
08640671 +0x4b82:  movl   $&_ZTV22TimerWarRoomChangeHost+0x8,(%eax)
08640677 +0x4b88:  mov    0x8(%ebp),%eax
0864067a +0x4b8b:  mov    %eax,(%esp)
0864067d +0x4b8e:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640682 +0x4b93:  mov    $0x0,%eax
08640687 +0x4b98:  test   %al,%al
08640689 +0x4b9a:  je     08640696 <+0x4ba7>
0864068b +0x4b9c:  mov    0x8(%ebp),%eax
0864068e +0x4b9f:  mov    %eax,(%esp)
08640691 +0x4ba2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640696 +0x4ba7:  leave
08640697 +0x4ba8:  ret
08640698 +0x4ba9:  push   %ebp
08640699 +0x4baa:  mov    %esp,%ebp
0864069b +0x4bac:  sub    $0x18,%esp
0864069e +0x4baf:  mov    0x8(%ebp),%eax
086406a1 +0x4bb2:  mov    %eax,(%esp)
086406a4 +0x4bb5:  call   08640668 <+0x4b79>
086406a9 +0x4bba:  mov    0x8(%ebp),%eax
086406ac +0x4bbd:  mov    %eax,(%esp)
086406af +0x4bc0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086406b4 +0x4bc5:  leave
086406b5 +0x4bc6:  ret
086406b6 +0x4bc7:  push   %ebp
086406b7 +0x4bc8:  mov    %esp,%ebp
086406b9 +0x4bca:  sub    $0x18,%esp
086406bc +0x4bcd:  mov    0x8(%ebp),%eax
086406bf +0x4bd0:  movl   $&_ZTV21TimerWarRoomCheckFail+0x8,(%eax)
086406c5 +0x4bd6:  mov    0x8(%ebp),%eax
086406c8 +0x4bd9:  mov    %eax,(%esp)
086406cb +0x4bdc:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086406d0 +0x4be1:  mov    $0x0,%eax
086406d5 +0x4be6:  test   %al,%al
086406d7 +0x4be8:  je     086406e4 <+0x4bf5>
086406d9 +0x4bea:  mov    0x8(%ebp),%eax
086406dc +0x4bed:  mov    %eax,(%esp)
086406df +0x4bf0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086406e4 +0x4bf5:  leave
086406e5 +0x4bf6:  ret
086406e6 +0x4bf7:  push   %ebp
086406e7 +0x4bf8:  mov    %esp,%ebp
086406e9 +0x4bfa:  sub    $0x18,%esp
086406ec +0x4bfd:  mov    0x8(%ebp),%eax
086406ef +0x4c00:  mov    %eax,(%esp)
086406f2 +0x4c03:  call   086406b6 <+0x4bc7>
086406f7 +0x4c08:  mov    0x8(%ebp),%eax
086406fa +0x4c0b:  mov    %eax,(%esp)
086406fd +0x4c0e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640702 +0x4c13:  leave
08640703 +0x4c14:  ret
08640704 +0x4c15:  push   %ebp
08640705 +0x4c16:  mov    %esp,%ebp
08640707 +0x4c18:  sub    $0x18,%esp
0864070a +0x4c1b:  mov    0x8(%ebp),%eax
0864070d +0x4c1e:  movl   $&_ZTV20TImerWarRoomTimeBomb+0x8,(%eax)
08640713 +0x4c24:  mov    0x8(%ebp),%eax
08640716 +0x4c27:  mov    %eax,(%esp)
08640719 +0x4c2a:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0864071e +0x4c2f:  mov    $0x0,%eax
08640723 +0x4c34:  test   %al,%al
08640725 +0x4c36:  je     08640732 <+0x4c43>
08640727 +0x4c38:  mov    0x8(%ebp),%eax
0864072a +0x4c3b:  mov    %eax,(%esp)
0864072d +0x4c3e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640732 +0x4c43:  leave
08640733 +0x4c44:  ret
08640734 +0x4c45:  push   %ebp
08640735 +0x4c46:  mov    %esp,%ebp
08640737 +0x4c48:  sub    $0x18,%esp
0864073a +0x4c4b:  mov    0x8(%ebp),%eax
0864073d +0x4c4e:  mov    %eax,(%esp)
08640740 +0x4c51:  call   08640704 <+0x4c15>
08640745 +0x4c56:  mov    0x8(%ebp),%eax
08640748 +0x4c59:  mov    %eax,(%esp)
0864074b +0x4c5c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640750 +0x4c61:  leave
08640751 +0x4c62:  ret
08640752 +0x4c63:  push   %ebp
08640753 +0x4c64:  mov    %esp,%ebp
08640755 +0x4c66:  sub    $0x18,%esp
08640758 +0x4c69:  mov    0x8(%ebp),%eax
0864075b +0x4c6c:  movl   $&_ZTV23TimerWarRoomResultCount+0x8,(%eax)
08640761 +0x4c72:  mov    0x8(%ebp),%eax
08640764 +0x4c75:  mov    %eax,(%esp)
08640767 +0x4c78:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0864076c +0x4c7d:  mov    $0x0,%eax
08640771 +0x4c82:  test   %al,%al
08640773 +0x4c84:  je     08640780 <+0x4c91>
08640775 +0x4c86:  mov    0x8(%ebp),%eax
08640778 +0x4c89:  mov    %eax,(%esp)
0864077b +0x4c8c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640780 +0x4c91:  leave
08640781 +0x4c92:  ret
08640782 +0x4c93:  push   %ebp
08640783 +0x4c94:  mov    %esp,%ebp
08640785 +0x4c96:  sub    $0x18,%esp
08640788 +0x4c99:  mov    0x8(%ebp),%eax
0864078b +0x4c9c:  mov    %eax,(%esp)
0864078e +0x4c9f:  call   08640752 <+0x4c63>
08640793 +0x4ca4:  mov    0x8(%ebp),%eax
08640796 +0x4ca7:  mov    %eax,(%esp)
08640799 +0x4caa:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864079e +0x4caf:  leave
0864079f +0x4cb0:  ret
086407a0 +0x4cb1:  push   %ebp
086407a1 +0x4cb2:  mov    %esp,%ebp
086407a3 +0x4cb4:  sub    $0x18,%esp
086407a6 +0x4cb7:  mov    0x8(%ebp),%eax
086407a9 +0x4cba:  movl   $&_ZTV28TimerWarRoomBattlePauseCount+0x8,(%eax)
086407af +0x4cc0:  mov    0x8(%ebp),%eax
086407b2 +0x4cc3:  mov    %eax,(%esp)
086407b5 +0x4cc6:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086407ba +0x4ccb:  mov    $0x0,%eax
086407bf +0x4cd0:  test   %al,%al
086407c1 +0x4cd2:  je     086407ce <+0x4cdf>
086407c3 +0x4cd4:  mov    0x8(%ebp),%eax
086407c6 +0x4cd7:  mov    %eax,(%esp)
086407c9 +0x4cda:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086407ce +0x4cdf:  leave
086407cf +0x4ce0:  ret
086407d0 +0x4ce1:  push   %ebp
086407d1 +0x4ce2:  mov    %esp,%ebp
086407d3 +0x4ce4:  sub    $0x18,%esp
086407d6 +0x4ce7:  mov    0x8(%ebp),%eax
086407d9 +0x4cea:  mov    %eax,(%esp)
086407dc +0x4ced:  call   086407a0 <+0x4cb1>
086407e1 +0x4cf2:  mov    0x8(%ebp),%eax
086407e4 +0x4cf5:  mov    %eax,(%esp)
086407e7 +0x4cf8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086407ec +0x4cfd:  leave
086407ed +0x4cfe:  ret
086407ee +0x4cff:  push   %ebp
086407ef +0x4d00:  mov    %esp,%ebp
086407f1 +0x4d02:  sub    $0x18,%esp
086407f4 +0x4d05:  mov    0x8(%ebp),%eax
086407f7 +0x4d08:  movl   $&_ZTV26TimerWarRoomReadyLockCount+0x8,(%eax)
086407fd +0x4d0e:  mov    0x8(%ebp),%eax
08640800 +0x4d11:  mov    %eax,(%esp)
08640803 +0x4d14:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640808 +0x4d19:  mov    $0x0,%eax
0864080d +0x4d1e:  test   %al,%al
0864080f +0x4d20:  je     0864081c <+0x4d2d>
08640811 +0x4d22:  mov    0x8(%ebp),%eax
08640814 +0x4d25:  mov    %eax,(%esp)
08640817 +0x4d28:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864081c +0x4d2d:  leave
0864081d +0x4d2e:  ret
0864081e +0x4d2f:  push   %ebp
0864081f +0x4d30:  mov    %esp,%ebp
08640821 +0x4d32:  sub    $0x18,%esp
08640824 +0x4d35:  mov    0x8(%ebp),%eax
08640827 +0x4d38:  mov    %eax,(%esp)
0864082a +0x4d3b:  call   086407ee <+0x4cff>
0864082f +0x4d40:  mov    0x8(%ebp),%eax
08640832 +0x4d43:  mov    %eax,(%esp)
08640835 +0x4d46:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864083a +0x4d4b:  leave
0864083b +0x4d4c:  ret
0864083c +0x4d4d:  push   %ebp
0864083d +0x4d4e:  mov    %esp,%ebp
0864083f +0x4d50:  sub    $0x18,%esp
08640842 +0x4d53:  mov    0x8(%ebp),%eax
08640845 +0x4d56:  movl   $&_ZTV21TimerWarRoomWaitCount+0x8,(%eax)
0864084b +0x4d5c:  mov    0x8(%ebp),%eax
0864084e +0x4d5f:  mov    %eax,(%esp)
08640851 +0x4d62:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640856 +0x4d67:  mov    $0x0,%eax
0864085b +0x4d6c:  test   %al,%al
0864085d +0x4d6e:  je     0864086a <+0x4d7b>
0864085f +0x4d70:  mov    0x8(%ebp),%eax
08640862 +0x4d73:  mov    %eax,(%esp)
08640865 +0x4d76:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864086a +0x4d7b:  leave
0864086b +0x4d7c:  ret
0864086c +0x4d7d:  push   %ebp
0864086d +0x4d7e:  mov    %esp,%ebp
0864086f +0x4d80:  sub    $0x18,%esp
08640872 +0x4d83:  mov    0x8(%ebp),%eax
08640875 +0x4d86:  mov    %eax,(%esp)
08640878 +0x4d89:  call   0864083c <+0x4d4d>
0864087d +0x4d8e:  mov    0x8(%ebp),%eax
08640880 +0x4d91:  mov    %eax,(%esp)
08640883 +0x4d94:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640888 +0x4d99:  leave
08640889 +0x4d9a:  ret
0864088a +0x4d9b:  push   %ebp
0864088b +0x4d9c:  mov    %esp,%ebp
0864088d +0x4d9e:  sub    $0x18,%esp
08640890 +0x4da1:  mov    0x8(%ebp),%eax
08640893 +0x4da4:  movl   $&_ZTV20TimerEPLPCommandWait+0x8,(%eax)
08640899 +0x4daa:  mov    0x8(%ebp),%eax
0864089c +0x4dad:  mov    %eax,(%esp)
0864089f +0x4db0:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086408a4 +0x4db5:  mov    $0x0,%eax
086408a9 +0x4dba:  test   %al,%al
086408ab +0x4dbc:  je     086408b8 <+0x4dc9>
086408ad +0x4dbe:  mov    0x8(%ebp),%eax
086408b0 +0x4dc1:  mov    %eax,(%esp)
086408b3 +0x4dc4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086408b8 +0x4dc9:  leave
086408b9 +0x4dca:  ret
086408ba +0x4dcb:  push   %ebp
086408bb +0x4dcc:  mov    %esp,%ebp
086408bd +0x4dce:  sub    $0x18,%esp
086408c0 +0x4dd1:  mov    0x8(%ebp),%eax
086408c3 +0x4dd4:  mov    %eax,(%esp)
086408c6 +0x4dd7:  call   0864088a <+0x4d9b>
086408cb +0x4ddc:  mov    0x8(%ebp),%eax
086408ce +0x4ddf:  mov    %eax,(%esp)
086408d1 +0x4de2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086408d6 +0x4de7:  leave
086408d7 +0x4de8:  ret
086408d8 +0x4de9:  push   %ebp
086408d9 +0x4dea:  mov    %esp,%ebp
086408db +0x4dec:  sub    $0x18,%esp
086408de +0x4def:  mov    0x8(%ebp),%eax
086408e1 +0x4df2:  movl   $&_ZTV22TimerEPLPReturnVillage+0x8,(%eax)
086408e7 +0x4df8:  mov    0x8(%ebp),%eax
086408ea +0x4dfb:  mov    %eax,(%esp)
086408ed +0x4dfe:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086408f2 +0x4e03:  mov    $0x0,%eax
086408f7 +0x4e08:  test   %al,%al
086408f9 +0x4e0a:  je     08640906 <+0x4e17>
086408fb +0x4e0c:  mov    0x8(%ebp),%eax
086408fe +0x4e0f:  mov    %eax,(%esp)
08640901 +0x4e12:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640906 +0x4e17:  leave
08640907 +0x4e18:  ret
08640908 +0x4e19:  push   %ebp
08640909 +0x4e1a:  mov    %esp,%ebp
0864090b +0x4e1c:  sub    $0x18,%esp
0864090e +0x4e1f:  mov    0x8(%ebp),%eax
08640911 +0x4e22:  mov    %eax,(%esp)
08640914 +0x4e25:  call   086408d8 <+0x4de9>
08640919 +0x4e2a:  mov    0x8(%ebp),%eax
0864091c +0x4e2d:  mov    %eax,(%esp)
0864091f +0x4e30:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640924 +0x4e35:  leave
08640925 +0x4e36:  ret
08640926 +0x4e37:  push   %ebp
08640927 +0x4e38:  mov    %esp,%ebp
08640929 +0x4e3a:  sub    $0x18,%esp
0864092c +0x4e3d:  mov    0x8(%ebp),%eax
0864092f +0x4e40:  movl   $&_ZTV24TimerCheckPaidPCRoomTerm+0x8,(%eax)
08640935 +0x4e46:  mov    0x8(%ebp),%eax
08640938 +0x4e49:  mov    %eax,(%esp)
0864093b +0x4e4c:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640940 +0x4e51:  mov    $0x0,%eax
08640945 +0x4e56:  test   %al,%al
08640947 +0x4e58:  je     08640954 <+0x4e65>
08640949 +0x4e5a:  mov    0x8(%ebp),%eax
0864094c +0x4e5d:  mov    %eax,(%esp)
0864094f +0x4e60:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640954 +0x4e65:  leave
08640955 +0x4e66:  ret
08640956 +0x4e67:  push   %ebp
08640957 +0x4e68:  mov    %esp,%ebp
08640959 +0x4e6a:  sub    $0x18,%esp
0864095c +0x4e6d:  mov    0x8(%ebp),%eax
0864095f +0x4e70:  mov    %eax,(%esp)
08640962 +0x4e73:  call   08640926 <+0x4e37>
08640967 +0x4e78:  mov    0x8(%ebp),%eax
0864096a +0x4e7b:  mov    %eax,(%esp)
0864096d +0x4e7e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640972 +0x4e83:  leave
08640973 +0x4e84:  ret
08640974 +0x4e85:  push   %ebp
08640975 +0x4e86:  mov    %esp,%ebp
08640977 +0x4e88:  sub    $0x18,%esp
0864097a +0x4e8b:  mov    0x8(%ebp),%eax
0864097d +0x4e8e:  movl   $&_ZTV24TimerPremiumServiceStart+0x8,(%eax)
08640983 +0x4e94:  mov    0x8(%ebp),%eax
08640986 +0x4e97:  mov    %eax,(%esp)
08640989 +0x4e9a:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
0864098e +0x4e9f:  mov    $0x0,%eax
08640993 +0x4ea4:  test   %al,%al
08640995 +0x4ea6:  je     086409a2 <+0x4eb3>
08640997 +0x4ea8:  mov    0x8(%ebp),%eax
0864099a +0x4eab:  mov    %eax,(%esp)
0864099d +0x4eae:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086409a2 +0x4eb3:  leave
086409a3 +0x4eb4:  ret
086409a4 +0x4eb5:  push   %ebp
086409a5 +0x4eb6:  mov    %esp,%ebp
086409a7 +0x4eb8:  sub    $0x18,%esp
086409aa +0x4ebb:  mov    0x8(%ebp),%eax
086409ad +0x4ebe:  mov    %eax,(%esp)
086409b0 +0x4ec1:  call   08640974 <+0x4e85>
086409b5 +0x4ec6:  mov    0x8(%ebp),%eax
086409b8 +0x4ec9:  mov    %eax,(%esp)
086409bb +0x4ecc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086409c0 +0x4ed1:  leave
086409c1 +0x4ed2:  ret
086409c2 +0x4ed3:  push   %ebp
086409c3 +0x4ed4:  mov    %esp,%ebp
086409c5 +0x4ed6:  sub    $0x18,%esp
086409c8 +0x4ed9:  mov    0x8(%ebp),%eax
086409cb +0x4edc:  movl   $&_ZTV25TimerPremiumServiceUpdate+0x8,(%eax)
086409d1 +0x4ee2:  mov    0x8(%ebp),%eax
086409d4 +0x4ee5:  mov    %eax,(%esp)
086409d7 +0x4ee8:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
086409dc +0x4eed:  mov    $0x0,%eax
086409e1 +0x4ef2:  test   %al,%al
086409e3 +0x4ef4:  je     086409f0 <+0x4f01>
086409e5 +0x4ef6:  mov    0x8(%ebp),%eax
086409e8 +0x4ef9:  mov    %eax,(%esp)
086409eb +0x4efc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086409f0 +0x4f01:  leave
086409f1 +0x4f02:  ret
086409f2 +0x4f03:  push   %ebp
086409f3 +0x4f04:  mov    %esp,%ebp
086409f5 +0x4f06:  sub    $0x18,%esp
086409f8 +0x4f09:  mov    0x8(%ebp),%eax
086409fb +0x4f0c:  mov    %eax,(%esp)
086409fe +0x4f0f:  call   086409c2 <+0x4ed3>
08640a03 +0x4f14:  mov    0x8(%ebp),%eax
08640a06 +0x4f17:  mov    %eax,(%esp)
08640a09 +0x4f1a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640a0e +0x4f1f:  leave
08640a0f +0x4f20:  ret
08640a10 +0x4f21:  push   %ebp
08640a11 +0x4f22:  mov    %esp,%ebp
08640a13 +0x4f24:  sub    $0x18,%esp
08640a16 +0x4f27:  mov    0x8(%ebp),%eax
08640a19 +0x4f2a:  movl   $&_ZTV23TimerPremiumServiceOver+0x8,(%eax)
08640a1f +0x4f30:  mov    0x8(%ebp),%eax
08640a22 +0x4f33:  mov    %eax,(%esp)
08640a25 +0x4f36:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640a2a +0x4f3b:  mov    $0x0,%eax
08640a2f +0x4f40:  test   %al,%al
08640a31 +0x4f42:  je     08640a3e <+0x4f4f>
08640a33 +0x4f44:  mov    0x8(%ebp),%eax
08640a36 +0x4f47:  mov    %eax,(%esp)
08640a39 +0x4f4a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640a3e +0x4f4f:  leave
08640a3f +0x4f50:  ret
08640a40 +0x4f51:  push   %ebp
08640a41 +0x4f52:  mov    %esp,%ebp
08640a43 +0x4f54:  sub    $0x18,%esp
08640a46 +0x4f57:  mov    0x8(%ebp),%eax
08640a49 +0x4f5a:  mov    %eax,(%esp)
08640a4c +0x4f5d:  call   08640a10 <+0x4f21>
08640a51 +0x4f62:  mov    0x8(%ebp),%eax
08640a54 +0x4f65:  mov    %eax,(%esp)
08640a57 +0x4f68:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640a5c +0x4f6d:  leave
08640a5d +0x4f6e:  ret
08640a5e +0x4f6f:  push   %ebp
08640a5f +0x4f70:  mov    %esp,%ebp
08640a61 +0x4f72:  sub    $0x18,%esp
08640a64 +0x4f75:  mov    0x8(%ebp),%eax
08640a67 +0x4f78:  movl   $&_ZTV32TimerClearDungeonCardSelectRight+0x8,(%eax)
08640a6d +0x4f7e:  mov    0x8(%ebp),%eax
08640a70 +0x4f81:  mov    %eax,(%esp)
08640a73 +0x4f84:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640a78 +0x4f89:  mov    $0x0,%eax
08640a7d +0x4f8e:  test   %al,%al
08640a7f +0x4f90:  je     08640a8c <+0x4f9d>
08640a81 +0x4f92:  mov    0x8(%ebp),%eax
08640a84 +0x4f95:  mov    %eax,(%esp)
08640a87 +0x4f98:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640a8c +0x4f9d:  leave
08640a8d +0x4f9e:  ret
08640a8e +0x4f9f:  push   %ebp
08640a8f +0x4fa0:  mov    %esp,%ebp
08640a91 +0x4fa2:  sub    $0x18,%esp
08640a94 +0x4fa5:  mov    0x8(%ebp),%eax
08640a97 +0x4fa8:  mov    %eax,(%esp)
08640a9a +0x4fab:  call   08640a5e <+0x4f6f>
08640a9f +0x4fb0:  mov    0x8(%ebp),%eax
08640aa2 +0x4fb3:  mov    %eax,(%esp)
08640aa5 +0x4fb6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640aaa +0x4fbb:  leave
08640aab +0x4fbc:  ret
08640aac +0x4fbd:  push   %ebp
08640aad +0x4fbe:  mov    %esp,%ebp
08640aaf +0x4fc0:  sub    $0x18,%esp
08640ab2 +0x4fc3:  mov    0x8(%ebp),%eax
08640ab5 +0x4fc6:  movl   $&_ZTV27TimerClearDungeonScoreScoll+0x8,(%eax)
08640abb +0x4fcc:  mov    0x8(%ebp),%eax
08640abe +0x4fcf:  mov    %eax,(%esp)
08640ac1 +0x4fd2:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640ac6 +0x4fd7:  mov    $0x0,%eax
08640acb +0x4fdc:  test   %al,%al
08640acd +0x4fde:  je     08640ada <+0x4feb>
08640acf +0x4fe0:  mov    0x8(%ebp),%eax
08640ad2 +0x4fe3:  mov    %eax,(%esp)
08640ad5 +0x4fe6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640ada +0x4feb:  leave
08640adb +0x4fec:  ret
08640adc +0x4fed:  push   %ebp
08640add +0x4fee:  mov    %esp,%ebp
08640adf +0x4ff0:  sub    $0x18,%esp
08640ae2 +0x4ff3:  mov    0x8(%ebp),%eax
08640ae5 +0x4ff6:  mov    %eax,(%esp)
08640ae8 +0x4ff9:  call   08640aac <+0x4fbd>
08640aed +0x4ffe:  mov    0x8(%ebp),%eax
08640af0 +0x5001:  mov    %eax,(%esp)
08640af3 +0x5004:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640af8 +0x5009:  leave
08640af9 +0x500a:  ret
08640afa +0x500b:  push   %ebp
08640afb +0x500c:  mov    %esp,%ebp
08640afd +0x500e:  sub    $0x18,%esp
08640b00 +0x5011:  mov    0x8(%ebp),%eax
08640b03 +0x5014:  movl   $&_ZTV23TimerClearDungeonReward+0x8,(%eax)
08640b09 +0x501a:  mov    0x8(%ebp),%eax
08640b0c +0x501d:  mov    %eax,(%esp)
08640b0f +0x5020:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640b14 +0x5025:  mov    $0x0,%eax
08640b19 +0x502a:  test   %al,%al
08640b1b +0x502c:  je     08640b28 <+0x5039>
08640b1d +0x502e:  mov    0x8(%ebp),%eax
08640b20 +0x5031:  mov    %eax,(%esp)
08640b23 +0x5034:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640b28 +0x5039:  leave
08640b29 +0x503a:  ret
08640b2a +0x503b:  push   %ebp
08640b2b +0x503c:  mov    %esp,%ebp
08640b2d +0x503e:  sub    $0x18,%esp
08640b30 +0x5041:  mov    0x8(%ebp),%eax
08640b33 +0x5044:  mov    %eax,(%esp)
08640b36 +0x5047:  call   08640afa <+0x500b>
08640b3b +0x504c:  mov    0x8(%ebp),%eax
08640b3e +0x504f:  mov    %eax,(%esp)
08640b41 +0x5052:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640b46 +0x5057:  leave
08640b47 +0x5058:  ret
08640b48 +0x5059:  push   %ebp
08640b49 +0x505a:  mov    %esp,%ebp
08640b4b +0x505c:  sub    $0x18,%esp
08640b4e +0x505f:  mov    0x8(%ebp),%eax
08640b51 +0x5062:  movl   $&_ZTV15TimerCardSelect+0x8,(%eax)
08640b57 +0x5068:  mov    0x8(%ebp),%eax
08640b5a +0x506b:  mov    %eax,(%esp)
08640b5d +0x506e:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640b62 +0x5073:  mov    $0x0,%eax
08640b67 +0x5078:  test   %al,%al
08640b69 +0x507a:  je     08640b76 <+0x5087>
08640b6b +0x507c:  mov    0x8(%ebp),%eax
08640b6e +0x507f:  mov    %eax,(%esp)
08640b71 +0x5082:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640b76 +0x5087:  leave
08640b77 +0x5088:  ret
08640b78 +0x5089:  push   %ebp
08640b79 +0x508a:  mov    %esp,%ebp
08640b7b +0x508c:  sub    $0x18,%esp
08640b7e +0x508f:  mov    0x8(%ebp),%eax
08640b81 +0x5092:  mov    %eax,(%esp)
08640b84 +0x5095:  call   08640b48 <+0x5059>
08640b89 +0x509a:  mov    0x8(%ebp),%eax
08640b8c +0x509d:  mov    %eax,(%esp)
08640b8f +0x50a0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640b94 +0x50a5:  leave
08640b95 +0x50a6:  ret
08640b96 +0x50a7:  push   %ebp
08640b97 +0x50a8:  mov    %esp,%ebp
08640b99 +0x50aa:  sub    $0x18,%esp
08640b9c +0x50ad:  mov    0x8(%ebp),%eax
08640b9f +0x50b0:  movl   $&_ZTV26TimerScheduleTenMinPerUser+0x8,(%eax)
08640ba5 +0x50b6:  mov    0x8(%ebp),%eax
08640ba8 +0x50b9:  mov    %eax,(%esp)
08640bab +0x50bc:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640bb0 +0x50c1:  mov    $0x0,%eax
08640bb5 +0x50c6:  test   %al,%al
08640bb7 +0x50c8:  je     08640bc4 <+0x50d5>
08640bb9 +0x50ca:  mov    0x8(%ebp),%eax
08640bbc +0x50cd:  mov    %eax,(%esp)
08640bbf +0x50d0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640bc4 +0x50d5:  leave
08640bc5 +0x50d6:  ret
08640bc6 +0x50d7:  push   %ebp
08640bc7 +0x50d8:  mov    %esp,%ebp
08640bc9 +0x50da:  sub    $0x18,%esp
08640bcc +0x50dd:  mov    0x8(%ebp),%eax
08640bcf +0x50e0:  mov    %eax,(%esp)
08640bd2 +0x50e3:  call   08640b96 <+0x50a7>
08640bd7 +0x50e8:  mov    0x8(%ebp),%eax
08640bda +0x50eb:  mov    %eax,(%esp)
08640bdd +0x50ee:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640be2 +0x50f3:  leave
08640be3 +0x50f4:  ret
08640be4 +0x50f5:  push   %ebp
08640be5 +0x50f6:  mov    %esp,%ebp
08640be7 +0x50f8:  sub    $0x18,%esp
08640bea +0x50fb:  mov    0x8(%ebp),%eax
08640bed +0x50fe:  movl   $&_ZTV27TimerScheduleFiveMinPerUser+0x8,(%eax)
08640bf3 +0x5104:  mov    0x8(%ebp),%eax
08640bf6 +0x5107:  mov    %eax,(%esp)
08640bf9 +0x510a:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640bfe +0x510f:  mov    $0x0,%eax
08640c03 +0x5114:  test   %al,%al
08640c05 +0x5116:  je     08640c12 <+0x5123>
08640c07 +0x5118:  mov    0x8(%ebp),%eax
08640c0a +0x511b:  mov    %eax,(%esp)
08640c0d +0x511e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640c12 +0x5123:  leave
08640c13 +0x5124:  ret
08640c14 +0x5125:  push   %ebp
08640c15 +0x5126:  mov    %esp,%ebp
08640c17 +0x5128:  sub    $0x18,%esp
08640c1a +0x512b:  mov    0x8(%ebp),%eax
08640c1d +0x512e:  mov    %eax,(%esp)
08640c20 +0x5131:  call   08640be4 <+0x50f5>
08640c25 +0x5136:  mov    0x8(%ebp),%eax
08640c28 +0x5139:  mov    %eax,(%esp)
08640c2b +0x513c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640c30 +0x5141:  leave
08640c31 +0x5142:  ret
08640c32 +0x5143:  push   %ebp
08640c33 +0x5144:  mov    %esp,%ebp
08640c35 +0x5146:  sub    $0x18,%esp
08640c38 +0x5149:  mov    0x8(%ebp),%eax
08640c3b +0x514c:  movl   $&_ZTV27TimerAssaultSuperPowerState+0x8,(%eax)
08640c41 +0x5152:  mov    0x8(%ebp),%eax
08640c44 +0x5155:  mov    %eax,(%esp)
08640c47 +0x5158:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640c4c +0x515d:  mov    $0x0,%eax
08640c51 +0x5162:  test   %al,%al
08640c53 +0x5164:  je     08640c60 <+0x5171>
08640c55 +0x5166:  mov    0x8(%ebp),%eax
08640c58 +0x5169:  mov    %eax,(%esp)
08640c5b +0x516c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640c60 +0x5171:  leave
08640c61 +0x5172:  ret
08640c62 +0x5173:  push   %ebp
08640c63 +0x5174:  mov    %esp,%ebp
08640c65 +0x5176:  sub    $0x18,%esp
08640c68 +0x5179:  mov    0x8(%ebp),%eax
08640c6b +0x517c:  mov    %eax,(%esp)
08640c6e +0x517f:  call   08640c32 <+0x5143>
08640c73 +0x5184:  mov    0x8(%ebp),%eax
08640c76 +0x5187:  mov    %eax,(%esp)
08640c79 +0x518a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640c7e +0x518f:  leave
08640c7f +0x5190:  ret
08640c80 +0x5191:  push   %ebp
08640c81 +0x5192:  mov    %esp,%ebp
08640c83 +0x5194:  sub    $0x18,%esp
08640c86 +0x5197:  mov    0x8(%ebp),%eax
08640c89 +0x519a:  movl   $&_ZTV20TimerScheduleOneHour+0x8,(%eax)
08640c8f +0x51a0:  mov    0x8(%ebp),%eax
08640c92 +0x51a3:  mov    %eax,(%esp)
08640c95 +0x51a6:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640c9a +0x51ab:  mov    $0x0,%eax
08640c9f +0x51b0:  test   %al,%al
08640ca1 +0x51b2:  je     08640cae <+0x51bf>
08640ca3 +0x51b4:  mov    0x8(%ebp),%eax
08640ca6 +0x51b7:  mov    %eax,(%esp)
08640ca9 +0x51ba:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640cae +0x51bf:  leave
08640caf +0x51c0:  ret
08640cb0 +0x51c1:  push   %ebp
08640cb1 +0x51c2:  mov    %esp,%ebp
08640cb3 +0x51c4:  sub    $0x18,%esp
08640cb6 +0x51c7:  mov    0x8(%ebp),%eax
08640cb9 +0x51ca:  mov    %eax,(%esp)
08640cbc +0x51cd:  call   08640c80 <+0x5191>
08640cc1 +0x51d2:  mov    0x8(%ebp),%eax
08640cc4 +0x51d5:  mov    %eax,(%esp)
08640cc7 +0x51d8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640ccc +0x51dd:  leave
08640ccd +0x51de:  ret
08640cce +0x51df:  push   %ebp
08640ccf +0x51e0:  mov    %esp,%ebp
08640cd1 +0x51e2:  sub    $0x18,%esp
08640cd4 +0x51e5:  mov    0x8(%ebp),%eax
08640cd7 +0x51e8:  movl   $&_ZTV18TimerStatisticsLog+0x8,(%eax)
08640cdd +0x51ee:  mov    0x8(%ebp),%eax
08640ce0 +0x51f1:  mov    %eax,(%esp)
08640ce3 +0x51f4:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640ce8 +0x51f9:  mov    $0x0,%eax
08640ced +0x51fe:  test   %al,%al
08640cef +0x5200:  je     08640cfc <+0x520d>
08640cf1 +0x5202:  mov    0x8(%ebp),%eax
08640cf4 +0x5205:  mov    %eax,(%esp)
08640cf7 +0x5208:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640cfc +0x520d:  leave
08640cfd +0x520e:  ret
08640cfe +0x520f:  push   %ebp
08640cff +0x5210:  mov    %esp,%ebp
08640d01 +0x5212:  sub    $0x18,%esp
08640d04 +0x5215:  mov    0x8(%ebp),%eax
08640d07 +0x5218:  mov    %eax,(%esp)
08640d0a +0x521b:  call   08640cce <+0x51df>
08640d0f +0x5220:  mov    0x8(%ebp),%eax
08640d12 +0x5223:  mov    %eax,(%esp)
08640d15 +0x5226:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640d1a +0x522b:  leave
08640d1b +0x522c:  ret
08640d1c +0x522d:  push   %ebp
08640d1d +0x522e:  mov    %esp,%ebp
08640d1f +0x5230:  sub    $0x18,%esp
08640d22 +0x5233:  mov    0x8(%ebp),%eax
08640d25 +0x5236:  movl   $&_ZTV23TimerPVPWalkOutLackUser+0x8,(%eax)
08640d2b +0x523c:  mov    0x8(%ebp),%eax
08640d2e +0x523f:  mov    %eax,(%esp)
08640d31 +0x5242:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640d36 +0x5247:  mov    $0x0,%eax
08640d3b +0x524c:  test   %al,%al
08640d3d +0x524e:  je     08640d4a <+0x525b>
08640d3f +0x5250:  mov    0x8(%ebp),%eax
08640d42 +0x5253:  mov    %eax,(%esp)
08640d45 +0x5256:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640d4a +0x525b:  leave
08640d4b +0x525c:  ret
08640d4c +0x525d:  push   %ebp
08640d4d +0x525e:  mov    %esp,%ebp
08640d4f +0x5260:  sub    $0x18,%esp
08640d52 +0x5263:  mov    0x8(%ebp),%eax
08640d55 +0x5266:  mov    %eax,(%esp)
08640d58 +0x5269:  call   08640d1c <+0x522d>
08640d5d +0x526e:  mov    0x8(%ebp),%eax
08640d60 +0x5271:  mov    %eax,(%esp)
08640d63 +0x5274:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640d68 +0x5279:  leave
08640d69 +0x527a:  ret
08640d6a +0x527b:  push   %ebp
08640d6b +0x527c:  mov    %esp,%ebp
08640d6d +0x527e:  sub    $0x18,%esp
08640d70 +0x5281:  mov    0x8(%ebp),%eax
08640d73 +0x5284:  movl   $&_ZTV25TimerPartyWalkOutLackUser+0x8,(%eax)
08640d79 +0x528a:  mov    0x8(%ebp),%eax
08640d7c +0x528d:  mov    %eax,(%esp)
08640d7f +0x5290:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640d84 +0x5295:  mov    $0x0,%eax
08640d89 +0x529a:  test   %al,%al
08640d8b +0x529c:  je     08640d98 <+0x52a9>
08640d8d +0x529e:  mov    0x8(%ebp),%eax
08640d90 +0x52a1:  mov    %eax,(%esp)
08640d93 +0x52a4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640d98 +0x52a9:  leave
08640d99 +0x52aa:  ret
08640d9a +0x52ab:  push   %ebp
08640d9b +0x52ac:  mov    %esp,%ebp
08640d9d +0x52ae:  sub    $0x18,%esp
08640da0 +0x52b1:  mov    0x8(%ebp),%eax
08640da3 +0x52b4:  mov    %eax,(%esp)
08640da6 +0x52b7:  call   08640d6a <+0x527b>
08640dab +0x52bc:  mov    0x8(%ebp),%eax
08640dae +0x52bf:  mov    %eax,(%esp)
08640db1 +0x52c2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640db6 +0x52c7:  leave
08640db7 +0x52c8:  ret
08640db8 +0x52c9:  push   %ebp
08640db9 +0x52ca:  mov    %esp,%ebp
08640dbb +0x52cc:  sub    $0x18,%esp
08640dbe +0x52cf:  mov    0x8(%ebp),%eax
08640dc1 +0x52d2:  movl   $&_ZTV12TimerStamina+0x8,(%eax)
08640dc7 +0x52d8:  mov    0x8(%ebp),%eax
08640dca +0x52db:  mov    %eax,(%esp)
08640dcd +0x52de:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640dd2 +0x52e3:  mov    $0x0,%eax
08640dd7 +0x52e8:  test   %al,%al
08640dd9 +0x52ea:  je     08640de6 <+0x52f7>
08640ddb +0x52ec:  mov    0x8(%ebp),%eax
08640dde +0x52ef:  mov    %eax,(%esp)
08640de1 +0x52f2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640de6 +0x52f7:  leave
08640de7 +0x52f8:  ret
08640de8 +0x52f9:  push   %ebp
08640de9 +0x52fa:  mov    %esp,%ebp
08640deb +0x52fc:  sub    $0x18,%esp
08640dee +0x52ff:  mov    0x8(%ebp),%eax
08640df1 +0x5302:  mov    %eax,(%esp)
08640df4 +0x5305:  call   08640db8 <+0x52c9>
08640df9 +0x530a:  mov    0x8(%ebp),%eax
08640dfc +0x530d:  mov    %eax,(%esp)
08640dff +0x5310:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640e04 +0x5315:  leave
08640e05 +0x5316:  ret
08640e06 +0x5317:  push   %ebp
08640e07 +0x5318:  mov    %esp,%ebp
08640e09 +0x531a:  sub    $0x18,%esp
08640e0c +0x531d:  mov    0x8(%ebp),%eax
08640e0f +0x5320:  movl   $&_ZTV14TimerSetResult+0x8,(%eax)
08640e15 +0x5326:  mov    0x8(%ebp),%eax
08640e18 +0x5329:  mov    %eax,(%esp)
08640e1b +0x532c:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640e20 +0x5331:  mov    $0x0,%eax
08640e25 +0x5336:  test   %al,%al
08640e27 +0x5338:  je     08640e34 <+0x5345>
08640e29 +0x533a:  mov    0x8(%ebp),%eax
08640e2c +0x533d:  mov    %eax,(%esp)
08640e2f +0x5340:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640e34 +0x5345:  leave
08640e35 +0x5346:  ret
08640e36 +0x5347:  push   %ebp
08640e37 +0x5348:  mov    %esp,%ebp
08640e39 +0x534a:  sub    $0x18,%esp
08640e3c +0x534d:  mov    0x8(%ebp),%eax
08640e3f +0x5350:  mov    %eax,(%esp)
08640e42 +0x5353:  call   08640e06 <+0x5317>
08640e47 +0x5358:  mov    0x8(%ebp),%eax
08640e4a +0x535b:  mov    %eax,(%esp)
08640e4d +0x535e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640e52 +0x5363:  leave
08640e53 +0x5364:  ret
08640e54 +0x5365:  push   %ebp
08640e55 +0x5366:  mov    %esp,%ebp
08640e57 +0x5368:  sub    $0x18,%esp
08640e5a +0x536b:  mov    0x8(%ebp),%eax
08640e5d +0x536e:  movl   $&_ZTV15TimerMapLoading+0x8,(%eax)
08640e63 +0x5374:  mov    0x8(%ebp),%eax
08640e66 +0x5377:  mov    %eax,(%esp)
08640e69 +0x537a:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640e6e +0x537f:  mov    $0x0,%eax
08640e73 +0x5384:  test   %al,%al
08640e75 +0x5386:  je     08640e82 <+0x5393>
08640e77 +0x5388:  mov    0x8(%ebp),%eax
08640e7a +0x538b:  mov    %eax,(%esp)
08640e7d +0x538e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640e82 +0x5393:  leave
08640e83 +0x5394:  ret
08640e84 +0x5395:  push   %ebp
08640e85 +0x5396:  mov    %esp,%ebp
08640e87 +0x5398:  sub    $0x18,%esp
08640e8a +0x539b:  mov    0x8(%ebp),%eax
08640e8d +0x539e:  mov    %eax,(%esp)
08640e90 +0x53a1:  call   08640e54 <+0x5365>
08640e95 +0x53a6:  mov    0x8(%ebp),%eax
08640e98 +0x53a9:  mov    %eax,(%esp)
08640e9b +0x53ac:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640ea0 +0x53b1:  leave
08640ea1 +0x53b2:  ret
08640ea2 +0x53b3:  push   %ebp
08640ea3 +0x53b4:  mov    %esp,%ebp
08640ea5 +0x53b6:  sub    $0x18,%esp
08640ea8 +0x53b9:  mov    0x8(%ebp),%eax
08640eab +0x53bc:  movl   $&_ZTV24TimerScheduleGuildWarEnd+0x8,(%eax)
08640eb1 +0x53c2:  mov    0x8(%ebp),%eax
08640eb4 +0x53c5:  mov    %eax,(%esp)
08640eb7 +0x53c8:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640ebc +0x53cd:  mov    $0x0,%eax
08640ec1 +0x53d2:  test   %al,%al
08640ec3 +0x53d4:  je     08640ed0 <+0x53e1>
08640ec5 +0x53d6:  mov    0x8(%ebp),%eax
08640ec8 +0x53d9:  mov    %eax,(%esp)
08640ecb +0x53dc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640ed0 +0x53e1:  leave
08640ed1 +0x53e2:  ret
08640ed2 +0x53e3:  push   %ebp
08640ed3 +0x53e4:  mov    %esp,%ebp
08640ed5 +0x53e6:  sub    $0x18,%esp
08640ed8 +0x53e9:  mov    0x8(%ebp),%eax
08640edb +0x53ec:  mov    %eax,(%esp)
08640ede +0x53ef:  call   08640ea2 <+0x53b3>
08640ee3 +0x53f4:  mov    0x8(%ebp),%eax
08640ee6 +0x53f7:  mov    %eax,(%esp)
08640ee9 +0x53fa:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640eee +0x53ff:  leave
08640eef +0x5400:  ret
08640ef0 +0x5401:  push   %ebp
08640ef1 +0x5402:  mov    %esp,%ebp
08640ef3 +0x5404:  sub    $0x18,%esp
08640ef6 +0x5407:  mov    0x8(%ebp),%eax
08640ef9 +0x540a:  movl   $&_ZTV16TimerDungeonFail+0x8,(%eax)
08640eff +0x5410:  mov    0x8(%ebp),%eax
08640f02 +0x5413:  mov    %eax,(%esp)
08640f05 +0x5416:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640f0a +0x541b:  mov    $0x0,%eax
08640f0f +0x5420:  test   %al,%al
08640f11 +0x5422:  je     08640f1e <+0x542f>
08640f13 +0x5424:  mov    0x8(%ebp),%eax
08640f16 +0x5427:  mov    %eax,(%esp)
08640f19 +0x542a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640f1e +0x542f:  leave
08640f1f +0x5430:  ret
08640f20 +0x5431:  push   %ebp
08640f21 +0x5432:  mov    %esp,%ebp
08640f23 +0x5434:  sub    $0x18,%esp
08640f26 +0x5437:  mov    0x8(%ebp),%eax
08640f29 +0x543a:  mov    %eax,(%esp)
08640f2c +0x543d:  call   08640ef0 <+0x5401>
08640f31 +0x5442:  mov    0x8(%ebp),%eax
08640f34 +0x5445:  mov    %eax,(%esp)
08640f37 +0x5448:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640f3c +0x544d:  leave
08640f3d +0x544e:  ret
08640f3e +0x544f:  push   %ebp
08640f3f +0x5450:  mov    %esp,%ebp
08640f41 +0x5452:  sub    $0x18,%esp
08640f44 +0x5455:  mov    0x8(%ebp),%eax
08640f47 +0x5458:  movl   $&_ZTV17TimerDungeonClear+0x8,(%eax)
08640f4d +0x545e:  mov    0x8(%ebp),%eax
08640f50 +0x5461:  mov    %eax,(%esp)
08640f53 +0x5464:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640f58 +0x5469:  mov    $0x0,%eax
08640f5d +0x546e:  test   %al,%al
08640f5f +0x5470:  je     08640f6c <+0x547d>
08640f61 +0x5472:  mov    0x8(%ebp),%eax
08640f64 +0x5475:  mov    %eax,(%esp)
08640f67 +0x5478:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640f6c +0x547d:  leave
08640f6d +0x547e:  ret
08640f6e +0x547f:  push   %ebp
08640f6f +0x5480:  mov    %esp,%ebp
08640f71 +0x5482:  sub    $0x18,%esp
08640f74 +0x5485:  mov    0x8(%ebp),%eax
08640f77 +0x5488:  mov    %eax,(%esp)
08640f7a +0x548b:  call   08640f3e <+0x544f>
08640f7f +0x5490:  mov    0x8(%ebp),%eax
08640f82 +0x5493:  mov    %eax,(%esp)
08640f85 +0x5496:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640f8a +0x549b:  leave
08640f8b +0x549c:  ret
08640f8c +0x549d:  push   %ebp
08640f8d +0x549e:  mov    %esp,%ebp
08640f8f +0x54a0:  sub    $0x18,%esp
08640f92 +0x54a3:  mov    0x8(%ebp),%eax
08640f95 +0x54a6:  movl   $&_ZTV13TimerDBUpdate+0x8,(%eax)
08640f9b +0x54ac:  mov    0x8(%ebp),%eax
08640f9e +0x54af:  mov    %eax,(%esp)
08640fa1 +0x54b2:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640fa6 +0x54b7:  mov    $0x0,%eax
08640fab +0x54bc:  test   %al,%al
08640fad +0x54be:  je     08640fba <+0x54cb>
08640faf +0x54c0:  mov    0x8(%ebp),%eax
08640fb2 +0x54c3:  mov    %eax,(%esp)
08640fb5 +0x54c6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640fba +0x54cb:  leave
08640fbb +0x54cc:  ret
08640fbc +0x54cd:  push   %ebp
08640fbd +0x54ce:  mov    %esp,%ebp
08640fbf +0x54d0:  sub    $0x18,%esp
08640fc2 +0x54d3:  mov    0x8(%ebp),%eax
08640fc5 +0x54d6:  mov    %eax,(%esp)
08640fc8 +0x54d9:  call   08640f8c <+0x549d>
08640fcd +0x54de:  mov    0x8(%ebp),%eax
08640fd0 +0x54e1:  mov    %eax,(%esp)
08640fd3 +0x54e4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08640fd8 +0x54e9:  leave
08640fd9 +0x54ea:  ret
08640fda +0x54eb:  push   %ebp
08640fdb +0x54ec:  mov    %esp,%ebp
08640fdd +0x54ee:  sub    $0x18,%esp
08640fe0 +0x54f1:  mov    0x8(%ebp),%eax
08640fe3 +0x54f4:  movl   $&_ZTV14TimerCheckConn+0x8,(%eax)
08640fe9 +0x54fa:  mov    0x8(%ebp),%eax
08640fec +0x54fd:  mov    %eax,(%esp)
08640fef +0x5500:  call   0812c9e2 <_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij+0x1d>  ; global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)+0x1d
08640ff4 +0x5505:  mov    $0x0,%eax
08640ff9 +0x550a:  test   %al,%al
08640ffb +0x550c:  je     08641008 <+0x5519>
08640ffd +0x550e:  mov    0x8(%ebp),%eax
08641000 +0x5511:  mov    %eax,(%esp)
08641003 +0x5514:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08641008 +0x5519:  leave
08641009 +0x551a:  ret
0864100a +0x551b:  push   %ebp
0864100b +0x551c:  mov    %esp,%ebp
0864100d +0x551e:  sub    $0x18,%esp
08641010 +0x5521:  mov    0x8(%ebp),%eax
08641013 +0x5524:  mov    %eax,(%esp)
08641016 +0x5527:  call   08640fda <+0x54eb>
0864101b +0x552c:  mov    0x8(%ebp),%eax
0864101e +0x552f:  mov    %eax,(%esp)
08641021 +0x5532:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08641026 +0x5537:  leave
08641027 +0x5538:  ret
```

## 反编译 C

```c
// <global>::global @ 0x863baef

/* TimerQueue::InsertTimer(TimerEntry&) */

void TimerQueue::_GLOBAL__I_InsertTimer(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
