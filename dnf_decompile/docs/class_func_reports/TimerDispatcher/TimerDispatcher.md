# TimerDispatcher

`_ZN15TimerDispatcherC1Ev`

`TimerDispatcher::TimerDispatcher()`

| 类 | 地址 |
|---|---|
| `TimerDispatcher` | `0x0863120a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863120a  _ZN15TimerDispatcherC1Ev
#           TimerDispatcher::TimerDispatcher()
# range [0x0863120a, 0x0863298d]
0863120a +0x0000:  push   %ebp
0863120b +0x0001:  mov    %esp,%ebp
0863120d +0x0003:  push   %edi
0863120e +0x0004:  push   %esi
0863120f +0x0005:  push   %ebx
08631210 +0x0006:  sub    $0x2c,%esp
08631213 +0x0009:  movl   $0x0,-0x1c(%ebp)
0863121a +0x0010:  jmp    0863122d <+0x23>
0863121c +0x0012:  mov    -0x1c(%ebp),%edx
0863121f +0x0015:  mov    0x8(%ebp),%eax
08631222 +0x0018:  movl   $0x0,(%eax,%edx,4)
08631229 +0x001f:  addl   $0x1,-0x1c(%ebp)
0863122d +0x0023:  cmpl   $0xae,-0x1c(%ebp)
08631234 +0x002a:  setle  %al
08631237 +0x002d:  test   %al,%al
08631239 +0x002f:  jne    0863121c <+0x12>
0863123b +0x0031:  movl   $0x4,(%esp)
08631242 +0x0038:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631247 +0x003d:  mov    %eax,%ebx
08631249 +0x003f:  mov    %ebx,%eax
0863124b +0x0041:  mov    %eax,(%esp)
0863124e +0x0044:  call   0863c186 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x697>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x697
08631253 +0x0049:  mov    %ebx,%eax
08631255 +0x004b:  mov    %eax,%edx
08631257 +0x004d:  mov    0x8(%ebp),%eax
0863125a +0x0050:  mov    %edx,(%eax)
0863125c +0x0052:  movl   $0x4,(%esp)
08631263 +0x0059:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631268 +0x005e:  mov    %eax,%ebx
0863126a +0x0060:  mov    %ebx,%eax
0863126c +0x0062:  mov    %eax,(%esp)
0863126f +0x0065:  call   0863c1a2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x6b3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x6b3
08631274 +0x006a:  mov    %ebx,%eax
08631276 +0x006c:  mov    %eax,%edx
08631278 +0x006e:  mov    0x8(%ebp),%eax
0863127b +0x0071:  mov    %edx,0x4(%eax)
0863127e +0x0074:  movl   $0x4,(%esp)
08631285 +0x007b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863128a +0x0080:  mov    %eax,%ebx
0863128c +0x0082:  mov    %ebx,%eax
0863128e +0x0084:  mov    %eax,(%esp)
08631291 +0x0087:  call   0863c1be <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x6cf>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x6cf
08631296 +0x008c:  mov    %ebx,%eax
08631298 +0x008e:  mov    %eax,%edx
0863129a +0x0090:  mov    0x8(%ebp),%eax
0863129d +0x0093:  mov    %edx,0x8(%eax)
086312a0 +0x0096:  movl   $0x4,(%esp)
086312a7 +0x009d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086312ac +0x00a2:  mov    %eax,%ebx
086312ae +0x00a4:  mov    %ebx,%eax
086312b0 +0x00a6:  mov    %eax,(%esp)
086312b3 +0x00a9:  call   0863c1da <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x6eb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x6eb
086312b8 +0x00ae:  mov    %ebx,%eax
086312ba +0x00b0:  mov    %eax,%edx
086312bc +0x00b2:  mov    0x8(%ebp),%eax
086312bf +0x00b5:  mov    %edx,0x2c(%eax)
086312c2 +0x00b8:  movl   $0x4,(%esp)
086312c9 +0x00bf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086312ce +0x00c4:  mov    %eax,%ebx
086312d0 +0x00c6:  mov    %ebx,%eax
086312d2 +0x00c8:  mov    %eax,(%esp)
086312d5 +0x00cb:  call   0863c1f6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x707>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x707
086312da +0x00d0:  mov    %ebx,%eax
086312dc +0x00d2:  mov    %eax,%edx
086312de +0x00d4:  mov    0x8(%ebp),%eax
086312e1 +0x00d7:  mov    %edx,0x30(%eax)
086312e4 +0x00da:  movl   $0x4,(%esp)
086312eb +0x00e1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086312f0 +0x00e6:  mov    %eax,%ebx
086312f2 +0x00e8:  mov    %ebx,%eax
086312f4 +0x00ea:  mov    %eax,(%esp)
086312f7 +0x00ed:  call   0863c212 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x723>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x723
086312fc +0x00f2:  mov    %ebx,%eax
086312fe +0x00f4:  mov    %eax,%edx
08631300 +0x00f6:  mov    0x8(%ebp),%eax
08631303 +0x00f9:  mov    %edx,0x34(%eax)
08631306 +0x00fc:  movl   $0x4,(%esp)
0863130d +0x0103:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631312 +0x0108:  mov    %eax,%ebx
08631314 +0x010a:  mov    %ebx,%eax
08631316 +0x010c:  mov    %eax,(%esp)
08631319 +0x010f:  call   0863c22e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x73f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x73f
0863131e +0x0114:  mov    %ebx,%eax
08631320 +0x0116:  mov    %eax,%edx
08631322 +0x0118:  mov    0x8(%ebp),%eax
08631325 +0x011b:  mov    %edx,0x38(%eax)
08631328 +0x011e:  movl   $0x4,(%esp)
0863132f +0x0125:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631334 +0x012a:  mov    %eax,%ebx
08631336 +0x012c:  mov    %ebx,%eax
08631338 +0x012e:  mov    %eax,(%esp)
0863133b +0x0131:  call   0863c24a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x75b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x75b
08631340 +0x0136:  mov    %ebx,%eax
08631342 +0x0138:  mov    %eax,%edx
08631344 +0x013a:  mov    0x8(%ebp),%eax
08631347 +0x013d:  mov    %edx,0x3c(%eax)
0863134a +0x0140:  movl   $0x4,(%esp)
08631351 +0x0147:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631356 +0x014c:  mov    %eax,%ebx
08631358 +0x014e:  mov    %ebx,%eax
0863135a +0x0150:  mov    %eax,(%esp)
0863135d +0x0153:  call   0863c266 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x777>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x777
08631362 +0x0158:  mov    %ebx,%eax
08631364 +0x015a:  mov    %eax,%edx
08631366 +0x015c:  mov    0x8(%ebp),%eax
08631369 +0x015f:  mov    %edx,0xc4(%eax)
0863136f +0x0165:  movl   $0x4,(%esp)
08631376 +0x016c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863137b +0x0171:  mov    %eax,%ebx
0863137d +0x0173:  mov    %ebx,%eax
0863137f +0x0175:  mov    %eax,(%esp)
08631382 +0x0178:  call   0863bba8 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xb9>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xb9
08631387 +0x017d:  mov    %ebx,%eax
08631389 +0x017f:  mov    %eax,%edx
0863138b +0x0181:  mov    0x8(%ebp),%eax
0863138e +0x0184:  mov    %edx,0x140(%eax)
08631394 +0x018a:  movl   $0x4,(%esp)
0863139b +0x0191:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086313a0 +0x0196:  mov    %eax,%ebx
086313a2 +0x0198:  mov    %ebx,%eax
086313a4 +0x019a:  mov    %eax,(%esp)
086313a7 +0x019d:  call   0863bb3e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x4f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x4f
086313ac +0x01a2:  mov    %ebx,%eax
086313ae +0x01a4:  mov    %eax,%edx
086313b0 +0x01a6:  mov    0x8(%ebp),%eax
086313b3 +0x01a9:  mov    %edx,0x144(%eax)
086313b9 +0x01af:  movl   $0x4,(%esp)
086313c0 +0x01b6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086313c5 +0x01bb:  mov    %eax,%ebx
086313c7 +0x01bd:  mov    %ebx,%eax
086313c9 +0x01bf:  mov    %eax,(%esp)
086313cc +0x01c2:  call   0863c282 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x793>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x793
086313d1 +0x01c7:  mov    %ebx,%eax
086313d3 +0x01c9:  mov    %eax,%edx
086313d5 +0x01cb:  mov    0x8(%ebp),%eax
086313d8 +0x01ce:  mov    %edx,0x148(%eax)
086313de +0x01d4:  movl   $0x4,(%esp)
086313e5 +0x01db:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086313ea +0x01e0:  mov    %eax,%ebx
086313ec +0x01e2:  mov    %ebx,%eax
086313ee +0x01e4:  mov    %eax,(%esp)
086313f1 +0x01e7:  call   0863c29e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x7af>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x7af
086313f6 +0x01ec:  mov    %ebx,%eax
086313f8 +0x01ee:  mov    %eax,%edx
086313fa +0x01f0:  mov    0x8(%ebp),%eax
086313fd +0x01f3:  mov    %edx,0x40(%eax)
08631400 +0x01f6:  movl   $0x4,(%esp)
08631407 +0x01fd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863140c +0x0202:  mov    %eax,%ebx
0863140e +0x0204:  mov    %ebx,%eax
08631410 +0x0206:  mov    %eax,(%esp)
08631413 +0x0209:  call   0863c2ba <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x7cb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x7cb
08631418 +0x020e:  mov    %ebx,%eax
0863141a +0x0210:  mov    %eax,%edx
0863141c +0x0212:  mov    0x8(%ebp),%eax
0863141f +0x0215:  mov    %edx,0x44(%eax)
08631422 +0x0218:  movl   $0x4,(%esp)
08631429 +0x021f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863142e +0x0224:  mov    %eax,%ebx
08631430 +0x0226:  mov    %ebx,%eax
08631432 +0x0228:  mov    %eax,(%esp)
08631435 +0x022b:  call   0863c2d6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x7e7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x7e7
0863143a +0x0230:  mov    %ebx,%eax
0863143c +0x0232:  mov    %eax,%edx
0863143e +0x0234:  mov    0x8(%ebp),%eax
08631441 +0x0237:  mov    %edx,0x48(%eax)
08631444 +0x023a:  movl   $0x4,(%esp)
0863144b +0x0241:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631450 +0x0246:  mov    %eax,%ebx
08631452 +0x0248:  mov    %ebx,%eax
08631454 +0x024a:  mov    %eax,(%esp)
08631457 +0x024d:  call   0863c2f2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x803>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x803
0863145c +0x0252:  mov    %ebx,%eax
0863145e +0x0254:  mov    %eax,%edx
08631460 +0x0256:  mov    0x8(%ebp),%eax
08631463 +0x0259:  mov    %edx,0x4c(%eax)
08631466 +0x025c:  movl   $0x4,(%esp)
0863146d +0x0263:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631472 +0x0268:  mov    %eax,%ebx
08631474 +0x026a:  mov    %ebx,%eax
08631476 +0x026c:  mov    %eax,(%esp)
08631479 +0x026f:  call   0863c30e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x81f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x81f
0863147e +0x0274:  mov    %ebx,%eax
08631480 +0x0276:  mov    %eax,%edx
08631482 +0x0278:  mov    0x8(%ebp),%eax
08631485 +0x027b:  mov    %edx,0x10(%eax)
08631488 +0x027e:  movl   $0x4,(%esp)
0863148f +0x0285:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631494 +0x028a:  mov    %eax,%ebx
08631496 +0x028c:  mov    %ebx,%eax
08631498 +0x028e:  mov    %eax,(%esp)
0863149b +0x0291:  call   0863c32a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x83b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x83b
086314a0 +0x0296:  mov    %ebx,%eax
086314a2 +0x0298:  mov    %eax,%edx
086314a4 +0x029a:  mov    0x8(%ebp),%eax
086314a7 +0x029d:  mov    %edx,0x14(%eax)
086314aa +0x02a0:  movl   $0x4,(%esp)
086314b1 +0x02a7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086314b6 +0x02ac:  mov    %eax,%ebx
086314b8 +0x02ae:  mov    %ebx,%eax
086314ba +0x02b0:  mov    %eax,(%esp)
086314bd +0x02b3:  call   0863c346 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x857>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x857
086314c2 +0x02b8:  mov    %ebx,%eax
086314c4 +0x02ba:  mov    %eax,%edx
086314c6 +0x02bc:  mov    0x8(%ebp),%eax
086314c9 +0x02bf:  mov    %edx,0x18(%eax)
086314cc +0x02c2:  movl   $0x4,(%esp)
086314d3 +0x02c9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086314d8 +0x02ce:  mov    %eax,%ebx
086314da +0x02d0:  mov    %ebx,%eax
086314dc +0x02d2:  mov    %eax,(%esp)
086314df +0x02d5:  call   0863c362 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x873>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x873
086314e4 +0x02da:  mov    %ebx,%eax
086314e6 +0x02dc:  mov    %eax,%edx
086314e8 +0x02de:  mov    0x8(%ebp),%eax
086314eb +0x02e1:  mov    %edx,0x1c(%eax)
086314ee +0x02e4:  movl   $0x4,(%esp)
086314f5 +0x02eb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086314fa +0x02f0:  mov    %eax,%ebx
086314fc +0x02f2:  mov    %ebx,%eax
086314fe +0x02f4:  mov    %eax,(%esp)
08631501 +0x02f7:  call   0863c37e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x88f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x88f
08631506 +0x02fc:  mov    %ebx,%eax
08631508 +0x02fe:  mov    %eax,%edx
0863150a +0x0300:  mov    0x8(%ebp),%eax
0863150d +0x0303:  mov    %edx,0x50(%eax)
08631510 +0x0306:  movl   $0x4,(%esp)
08631517 +0x030d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863151c +0x0312:  mov    %eax,%ebx
0863151e +0x0314:  mov    %ebx,%eax
08631520 +0x0316:  mov    %eax,(%esp)
08631523 +0x0319:  call   0863c39a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x8ab>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x8ab
08631528 +0x031e:  mov    %ebx,%eax
0863152a +0x0320:  mov    %eax,%edx
0863152c +0x0322:  mov    0x8(%ebp),%eax
0863152f +0x0325:  mov    %edx,0x54(%eax)
08631532 +0x0328:  movl   $0x4,(%esp)
08631539 +0x032f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863153e +0x0334:  mov    %eax,%ebx
08631540 +0x0336:  mov    %ebx,%eax
08631542 +0x0338:  mov    %eax,(%esp)
08631545 +0x033b:  call   0863c3b6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x8c7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x8c7
0863154a +0x0340:  mov    %ebx,%eax
0863154c +0x0342:  mov    %eax,%edx
0863154e +0x0344:  mov    0x8(%ebp),%eax
08631551 +0x0347:  mov    %edx,0x104(%eax)
08631557 +0x034d:  movl   $0x4,(%esp)
0863155e +0x0354:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631563 +0x0359:  mov    %eax,%ebx
08631565 +0x035b:  mov    %ebx,%eax
08631567 +0x035d:  mov    %eax,(%esp)
0863156a +0x0360:  call   0863c3d2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x8e3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x8e3
0863156f +0x0365:  mov    %ebx,%eax
08631571 +0x0367:  mov    %eax,%edx
08631573 +0x0369:  mov    0x8(%ebp),%eax
08631576 +0x036c:  mov    %edx,0x108(%eax)
0863157c +0x0372:  movl   $0x4,(%esp)
08631583 +0x0379:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631588 +0x037e:  mov    %eax,%ebx
0863158a +0x0380:  mov    %ebx,%eax
0863158c +0x0382:  mov    %eax,(%esp)
0863158f +0x0385:  call   0863c3ee <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x8ff>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x8ff
08631594 +0x038a:  mov    %ebx,%eax
08631596 +0x038c:  mov    %eax,%edx
08631598 +0x038e:  mov    0x8(%ebp),%eax
0863159b +0x0391:  mov    %edx,0x10c(%eax)
086315a1 +0x0397:  movl   $0x4,(%esp)
086315a8 +0x039e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086315ad +0x03a3:  mov    %eax,%ebx
086315af +0x03a5:  mov    %ebx,%eax
086315b1 +0x03a7:  mov    %eax,(%esp)
086315b4 +0x03aa:  call   0863c40a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x91b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x91b
086315b9 +0x03af:  mov    %ebx,%eax
086315bb +0x03b1:  mov    %eax,%edx
086315bd +0x03b3:  mov    0x8(%ebp),%eax
086315c0 +0x03b6:  mov    %edx,0x110(%eax)
086315c6 +0x03bc:  movl   $0x4,(%esp)
086315cd +0x03c3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086315d2 +0x03c8:  mov    %eax,%ebx
086315d4 +0x03ca:  mov    %ebx,%eax
086315d6 +0x03cc:  mov    %eax,(%esp)
086315d9 +0x03cf:  call   0863c426 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x937>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x937
086315de +0x03d4:  mov    %ebx,%eax
086315e0 +0x03d6:  mov    %eax,%edx
086315e2 +0x03d8:  mov    0x8(%ebp),%eax
086315e5 +0x03db:  mov    %edx,0x114(%eax)
086315eb +0x03e1:  movl   $0x4,(%esp)
086315f2 +0x03e8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086315f7 +0x03ed:  mov    %eax,%ebx
086315f9 +0x03ef:  mov    %ebx,%eax
086315fb +0x03f1:  mov    %eax,(%esp)
086315fe +0x03f4:  call   0863c442 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x953>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x953
08631603 +0x03f9:  mov    %ebx,%eax
08631605 +0x03fb:  mov    %eax,%edx
08631607 +0x03fd:  mov    0x8(%ebp),%eax
0863160a +0x0400:  mov    %edx,0x118(%eax)
08631610 +0x0406:  movl   $0x4,(%esp)
08631617 +0x040d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863161c +0x0412:  mov    %eax,%ebx
0863161e +0x0414:  mov    %ebx,%eax
08631620 +0x0416:  mov    %eax,(%esp)
08631623 +0x0419:  call   0863c45e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x96f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x96f
08631628 +0x041e:  mov    %ebx,%eax
0863162a +0x0420:  mov    %eax,%edx
0863162c +0x0422:  mov    0x8(%ebp),%eax
0863162f +0x0425:  mov    %edx,0x11c(%eax)
08631635 +0x042b:  movl   $0x4,(%esp)
0863163c +0x0432:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631641 +0x0437:  mov    %eax,%ebx
08631643 +0x0439:  mov    %ebx,%eax
08631645 +0x043b:  mov    %eax,(%esp)
08631648 +0x043e:  call   0863c47a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x98b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x98b
0863164d +0x0443:  mov    %ebx,%eax
0863164f +0x0445:  mov    %eax,%edx
08631651 +0x0447:  mov    0x8(%ebp),%eax
08631654 +0x044a:  mov    %edx,0x58(%eax)
08631657 +0x044d:  movl   $0x4,(%esp)
0863165e +0x0454:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631663 +0x0459:  mov    %eax,%ebx
08631665 +0x045b:  mov    %ebx,%eax
08631667 +0x045d:  mov    %eax,(%esp)
0863166a +0x0460:  call   0863c496 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x9a7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x9a7
0863166f +0x0465:  mov    %ebx,%eax
08631671 +0x0467:  mov    %eax,%edx
08631673 +0x0469:  mov    0x8(%ebp),%eax
08631676 +0x046c:  mov    %edx,0x5c(%eax)
08631679 +0x046f:  movl   $0x4,(%esp)
08631680 +0x0476:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631685 +0x047b:  mov    %eax,%ebx
08631687 +0x047d:  mov    %ebx,%eax
08631689 +0x047f:  mov    %eax,(%esp)
0863168c +0x0482:  call   0863c4b2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x9c3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x9c3
08631691 +0x0487:  mov    %ebx,%eax
08631693 +0x0489:  mov    %eax,%edx
08631695 +0x048b:  mov    0x8(%ebp),%eax
08631698 +0x048e:  mov    %edx,0x60(%eax)
0863169b +0x0491:  movl   $0x4,(%esp)
086316a2 +0x0498:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086316a7 +0x049d:  mov    %eax,%ebx
086316a9 +0x049f:  mov    %ebx,%eax
086316ab +0x04a1:  mov    %eax,(%esp)
086316ae +0x04a4:  call   0863c4ce <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x9df>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x9df
086316b3 +0x04a9:  mov    %ebx,%eax
086316b5 +0x04ab:  mov    %eax,%edx
086316b7 +0x04ad:  mov    0x8(%ebp),%eax
086316ba +0x04b0:  mov    %edx,0x64(%eax)
086316bd +0x04b3:  movl   $0x4,(%esp)
086316c4 +0x04ba:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086316c9 +0x04bf:  mov    %eax,%ebx
086316cb +0x04c1:  mov    %ebx,%eax
086316cd +0x04c3:  mov    %eax,(%esp)
086316d0 +0x04c6:  call   0863c4ea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x9fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x9fb
086316d5 +0x04cb:  mov    %ebx,%eax
086316d7 +0x04cd:  mov    %eax,%edx
086316d9 +0x04cf:  mov    0x8(%ebp),%eax
086316dc +0x04d2:  mov    %edx,0x68(%eax)
086316df +0x04d5:  movl   $0x4,(%esp)
086316e6 +0x04dc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086316eb +0x04e1:  mov    %eax,%ebx
086316ed +0x04e3:  mov    %ebx,%eax
086316ef +0x04e5:  mov    %eax,(%esp)
086316f2 +0x04e8:  call   0863c506 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xa17>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xa17
086316f7 +0x04ed:  mov    %ebx,%eax
086316f9 +0x04ef:  mov    %eax,%edx
086316fb +0x04f1:  mov    0x8(%ebp),%eax
086316fe +0x04f4:  mov    %edx,0x6c(%eax)
08631701 +0x04f7:  movl   $0x4,(%esp)
08631708 +0x04fe:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863170d +0x0503:  mov    %eax,%ebx
0863170f +0x0505:  mov    %ebx,%eax
08631711 +0x0507:  mov    %eax,(%esp)
08631714 +0x050a:  call   0863c522 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xa33>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xa33
08631719 +0x050f:  mov    %ebx,%eax
0863171b +0x0511:  mov    %eax,%edx
0863171d +0x0513:  mov    0x8(%ebp),%eax
08631720 +0x0516:  mov    %edx,0x70(%eax)
08631723 +0x0519:  movl   $0x4,(%esp)
0863172a +0x0520:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863172f +0x0525:  mov    %eax,%ebx
08631731 +0x0527:  mov    %ebx,%eax
08631733 +0x0529:  mov    %eax,(%esp)
08631736 +0x052c:  call   0863c53e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xa4f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xa4f
0863173b +0x0531:  mov    %ebx,%eax
0863173d +0x0533:  mov    %eax,%edx
0863173f +0x0535:  mov    0x8(%ebp),%eax
08631742 +0x0538:  mov    %edx,0x74(%eax)
08631745 +0x053b:  movl   $0x4,(%esp)
0863174c +0x0542:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631751 +0x0547:  mov    %eax,%ebx
08631753 +0x0549:  mov    %ebx,%eax
08631755 +0x054b:  mov    %eax,(%esp)
08631758 +0x054e:  call   0863c55a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xa6b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xa6b
0863175d +0x0553:  mov    %ebx,%eax
0863175f +0x0555:  mov    %eax,%edx
08631761 +0x0557:  mov    0x8(%ebp),%eax
08631764 +0x055a:  mov    %edx,0x78(%eax)
08631767 +0x055d:  movl   $0x4,(%esp)
0863176e +0x0564:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631773 +0x0569:  mov    %eax,%ebx
08631775 +0x056b:  mov    %ebx,%eax
08631777 +0x056d:  mov    %eax,(%esp)
0863177a +0x0570:  call   0863c576 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xa87>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xa87
0863177f +0x0575:  mov    %ebx,%eax
08631781 +0x0577:  mov    %eax,%edx
08631783 +0x0579:  mov    0x8(%ebp),%eax
08631786 +0x057c:  mov    %edx,0x7c(%eax)
08631789 +0x057f:  movl   $0x4,(%esp)
08631790 +0x0586:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631795 +0x058b:  mov    %eax,%ebx
08631797 +0x058d:  mov    %ebx,%eax
08631799 +0x058f:  mov    %eax,(%esp)
0863179c +0x0592:  call   0863c592 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xaa3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xaa3
086317a1 +0x0597:  mov    %ebx,%eax
086317a3 +0x0599:  mov    %eax,%edx
086317a5 +0x059b:  mov    0x8(%ebp),%eax
086317a8 +0x059e:  mov    %edx,0x80(%eax)
086317ae +0x05a4:  movl   $0x4,(%esp)
086317b5 +0x05ab:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086317ba +0x05b0:  mov    %eax,%ebx
086317bc +0x05b2:  mov    %ebx,%eax
086317be +0x05b4:  mov    %eax,(%esp)
086317c1 +0x05b7:  call   0863c5ae <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xabf>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xabf
086317c6 +0x05bc:  mov    %ebx,%eax
086317c8 +0x05be:  mov    %eax,%edx
086317ca +0x05c0:  mov    0x8(%ebp),%eax
086317cd +0x05c3:  mov    %edx,0x84(%eax)
086317d3 +0x05c9:  movl   $0x4,(%esp)
086317da +0x05d0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086317df +0x05d5:  mov    %eax,%ebx
086317e1 +0x05d7:  mov    %ebx,%eax
086317e3 +0x05d9:  mov    %eax,(%esp)
086317e6 +0x05dc:  call   0863c5ca <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xadb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xadb
086317eb +0x05e1:  mov    %ebx,%eax
086317ed +0x05e3:  mov    %eax,%edx
086317ef +0x05e5:  mov    0x8(%ebp),%eax
086317f2 +0x05e8:  mov    %edx,0x88(%eax)
086317f8 +0x05ee:  movl   $0x4,(%esp)
086317ff +0x05f5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631804 +0x05fa:  mov    %eax,%ebx
08631806 +0x05fc:  mov    %ebx,%eax
08631808 +0x05fe:  mov    %eax,(%esp)
0863180b +0x0601:  call   0863c5ca <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xadb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xadb
08631810 +0x0606:  mov    %ebx,%eax
08631812 +0x0608:  mov    %eax,%edx
08631814 +0x060a:  mov    0x8(%ebp),%eax
08631817 +0x060d:  mov    %edx,0x8c(%eax)
0863181d +0x0613:  movl   $0x4,(%esp)
08631824 +0x061a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631829 +0x061f:  mov    %eax,%ebx
0863182b +0x0621:  mov    %ebx,%eax
0863182d +0x0623:  mov    %eax,(%esp)
08631830 +0x0626:  call   0863c5ca <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xadb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xadb
08631835 +0x062b:  mov    %ebx,%eax
08631837 +0x062d:  mov    %eax,%edx
08631839 +0x062f:  mov    0x8(%ebp),%eax
0863183c +0x0632:  mov    %edx,0x90(%eax)
08631842 +0x0638:  movl   $0x4,(%esp)
08631849 +0x063f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863184e +0x0644:  mov    %eax,%ebx
08631850 +0x0646:  mov    %ebx,%eax
08631852 +0x0648:  mov    %eax,(%esp)
08631855 +0x064b:  call   0863c5ca <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xadb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xadb
0863185a +0x0650:  mov    %ebx,%eax
0863185c +0x0652:  mov    %eax,%edx
0863185e +0x0654:  mov    0x8(%ebp),%eax
08631861 +0x0657:  mov    %edx,0x94(%eax)
08631867 +0x065d:  movl   $0x4,(%esp)
0863186e +0x0664:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631873 +0x0669:  mov    %eax,%ebx
08631875 +0x066b:  mov    %ebx,%eax
08631877 +0x066d:  mov    %eax,(%esp)
0863187a +0x0670:  call   0863c5e6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xaf7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xaf7
0863187f +0x0675:  mov    %ebx,%eax
08631881 +0x0677:  mov    %eax,%edx
08631883 +0x0679:  mov    0x8(%ebp),%eax
08631886 +0x067c:  mov    %edx,0x98(%eax)
0863188c +0x0682:  movl   $0x4,(%esp)
08631893 +0x0689:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631898 +0x068e:  mov    %eax,%ebx
0863189a +0x0690:  mov    %ebx,%eax
0863189c +0x0692:  mov    %eax,(%esp)
0863189f +0x0695:  call   0863c602 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xb13>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xb13
086318a4 +0x069a:  mov    %ebx,%eax
086318a6 +0x069c:  mov    %eax,%edx
086318a8 +0x069e:  mov    0x8(%ebp),%eax
086318ab +0x06a1:  mov    %edx,0x14c(%eax)
086318b1 +0x06a7:  movl   $0x4,(%esp)
086318b8 +0x06ae:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086318bd +0x06b3:  mov    %eax,%ebx
086318bf +0x06b5:  mov    %ebx,%eax
086318c1 +0x06b7:  mov    %eax,(%esp)
086318c4 +0x06ba:  call   0863c61e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xb2f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xb2f
086318c9 +0x06bf:  mov    %ebx,%eax
086318cb +0x06c1:  mov    %eax,%edx
086318cd +0x06c3:  mov    0x8(%ebp),%eax
086318d0 +0x06c6:  mov    %edx,0x150(%eax)
086318d6 +0x06cc:  movl   $0x4,(%esp)
086318dd +0x06d3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086318e2 +0x06d8:  mov    %eax,%ebx
086318e4 +0x06da:  mov    %ebx,%eax
086318e6 +0x06dc:  mov    %eax,(%esp)
086318e9 +0x06df:  call   0863c63a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xb4b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xb4b
086318ee +0x06e4:  mov    %ebx,%eax
086318f0 +0x06e6:  mov    %eax,%edx
086318f2 +0x06e8:  mov    0x8(%ebp),%eax
086318f5 +0x06eb:  mov    %edx,0x154(%eax)
086318fb +0x06f1:  movl   $0x4,(%esp)
08631902 +0x06f8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631907 +0x06fd:  mov    %eax,%ebx
08631909 +0x06ff:  mov    %ebx,%eax
0863190b +0x0701:  mov    %eax,(%esp)
0863190e +0x0704:  call   0863c656 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xb67>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xb67
08631913 +0x0709:  mov    %ebx,%eax
08631915 +0x070b:  mov    %eax,%edx
08631917 +0x070d:  mov    0x8(%ebp),%eax
0863191a +0x0710:  mov    %edx,0x158(%eax)
08631920 +0x0716:  movl   $0x4,(%esp)
08631927 +0x071d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863192c +0x0722:  mov    %eax,%ebx
0863192e +0x0724:  mov    %ebx,%eax
08631930 +0x0726:  mov    %eax,(%esp)
08631933 +0x0729:  call   0863c672 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xb83>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xb83
08631938 +0x072e:  mov    %ebx,%eax
0863193a +0x0730:  mov    %eax,%edx
0863193c +0x0732:  mov    0x8(%ebp),%eax
0863193f +0x0735:  mov    %edx,0x160(%eax)
08631945 +0x073b:  movl   $0x4,(%esp)
0863194c +0x0742:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631951 +0x0747:  mov    %eax,%ebx
08631953 +0x0749:  mov    %ebx,%eax
08631955 +0x074b:  mov    %eax,(%esp)
08631958 +0x074e:  call   0863c68e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xb9f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xb9f
0863195d +0x0753:  mov    %ebx,%eax
0863195f +0x0755:  mov    %eax,%edx
08631961 +0x0757:  mov    0x8(%ebp),%eax
08631964 +0x075a:  mov    %edx,0x164(%eax)
0863196a +0x0760:  movl   $0x4,(%esp)
08631971 +0x0767:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631976 +0x076c:  mov    %eax,%ebx
08631978 +0x076e:  mov    %ebx,%eax
0863197a +0x0770:  mov    %eax,(%esp)
0863197d +0x0773:  call   0863c6aa <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xbbb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xbbb
08631982 +0x0778:  mov    %ebx,%eax
08631984 +0x077a:  mov    %eax,%edx
08631986 +0x077c:  mov    0x8(%ebp),%eax
08631989 +0x077f:  mov    %edx,0x168(%eax)
0863198f +0x0785:  movl   $0x4,(%esp)
08631996 +0x078c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863199b +0x0791:  mov    %eax,%ebx
0863199d +0x0793:  mov    %ebx,%eax
0863199f +0x0795:  mov    %eax,(%esp)
086319a2 +0x0798:  call   0863c6c6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xbd7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xbd7
086319a7 +0x079d:  mov    %ebx,%eax
086319a9 +0x079f:  mov    %eax,%edx
086319ab +0x07a1:  mov    0x8(%ebp),%eax
086319ae +0x07a4:  mov    %edx,0x16c(%eax)
086319b4 +0x07aa:  movl   $0x4,(%esp)
086319bb +0x07b1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086319c0 +0x07b6:  mov    %eax,%ebx
086319c2 +0x07b8:  mov    %ebx,%eax
086319c4 +0x07ba:  mov    %eax,(%esp)
086319c7 +0x07bd:  call   0863c6e2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xbf3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xbf3
086319cc +0x07c2:  mov    %ebx,%eax
086319ce +0x07c4:  mov    %eax,%edx
086319d0 +0x07c6:  mov    0x8(%ebp),%eax
086319d3 +0x07c9:  mov    %edx,0x20(%eax)
086319d6 +0x07cc:  movl   $0x4,(%esp)
086319dd +0x07d3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086319e2 +0x07d8:  mov    %eax,%ebx
086319e4 +0x07da:  mov    %ebx,%eax
086319e6 +0x07dc:  mov    %eax,(%esp)
086319e9 +0x07df:  call   0863c6fe <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xc0f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xc0f
086319ee +0x07e4:  mov    %ebx,%eax
086319f0 +0x07e6:  mov    %eax,%edx
086319f2 +0x07e8:  mov    0x8(%ebp),%eax
086319f5 +0x07eb:  mov    %edx,0x170(%eax)
086319fb +0x07f1:  movl   $0x4,(%esp)
08631a02 +0x07f8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631a07 +0x07fd:  mov    %eax,%ebx
08631a09 +0x07ff:  mov    %ebx,%eax
08631a0b +0x0801:  mov    %eax,(%esp)
08631a0e +0x0804:  call   0863c71a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xc2b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xc2b
08631a13 +0x0809:  mov    %ebx,%eax
08631a15 +0x080b:  mov    %eax,%edx
08631a17 +0x080d:  mov    0x8(%ebp),%eax
08631a1a +0x0810:  mov    %edx,0x174(%eax)
08631a20 +0x0816:  movl   $0x4,(%esp)
08631a27 +0x081d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631a2c +0x0822:  mov    %eax,%ebx
08631a2e +0x0824:  mov    %ebx,%eax
08631a30 +0x0826:  mov    %eax,(%esp)
08631a33 +0x0829:  call   0863c736 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xc47>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xc47
08631a38 +0x082e:  mov    %ebx,%eax
08631a3a +0x0830:  mov    %eax,%edx
08631a3c +0x0832:  mov    0x8(%ebp),%eax
08631a3f +0x0835:  mov    %edx,0x178(%eax)
08631a45 +0x083b:  movl   $0x4,(%esp)
08631a4c +0x0842:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631a51 +0x0847:  mov    %eax,%ebx
08631a53 +0x0849:  mov    %ebx,%eax
08631a55 +0x084b:  mov    %eax,(%esp)
08631a58 +0x084e:  call   0863c752 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xc63>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xc63
08631a5d +0x0853:  mov    %ebx,%eax
08631a5f +0x0855:  mov    %eax,%edx
08631a61 +0x0857:  mov    0x8(%ebp),%eax
08631a64 +0x085a:  mov    %edx,0x17c(%eax)
08631a6a +0x0860:  movl   $0x4,(%esp)
08631a71 +0x0867:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631a76 +0x086c:  mov    %eax,%ebx
08631a78 +0x086e:  mov    %ebx,%eax
08631a7a +0x0870:  mov    %eax,(%esp)
08631a7d +0x0873:  call   0863c76e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xc7f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xc7f
08631a82 +0x0878:  mov    %ebx,%eax
08631a84 +0x087a:  mov    %eax,%edx
08631a86 +0x087c:  mov    0x8(%ebp),%eax
08631a89 +0x087f:  mov    %edx,0x180(%eax)
08631a8f +0x0885:  movl   $0x4,(%esp)
08631a96 +0x088c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631a9b +0x0891:  mov    %eax,%ebx
08631a9d +0x0893:  mov    %ebx,%eax
08631a9f +0x0895:  mov    %eax,(%esp)
08631aa2 +0x0898:  call   0863c78a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xc9b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xc9b
08631aa7 +0x089d:  mov    %ebx,%eax
08631aa9 +0x089f:  mov    %eax,%edx
08631aab +0x08a1:  mov    0x8(%ebp),%eax
08631aae +0x08a4:  mov    %edx,0x184(%eax)
08631ab4 +0x08aa:  movl   $0x4,(%esp)
08631abb +0x08b1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631ac0 +0x08b6:  mov    %eax,%ebx
08631ac2 +0x08b8:  mov    %ebx,%eax
08631ac4 +0x08ba:  mov    %eax,(%esp)
08631ac7 +0x08bd:  call   0863c7a6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xcb7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xcb7
08631acc +0x08c2:  mov    %ebx,%eax
08631ace +0x08c4:  mov    %eax,%edx
08631ad0 +0x08c6:  mov    0x8(%ebp),%eax
08631ad3 +0x08c9:  mov    %edx,0x188(%eax)
08631ad9 +0x08cf:  movl   $0x4,(%esp)
08631ae0 +0x08d6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631ae5 +0x08db:  mov    %eax,%ebx
08631ae7 +0x08dd:  mov    %ebx,%eax
08631ae9 +0x08df:  mov    %eax,(%esp)
08631aec +0x08e2:  call   0863c7c2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xcd3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xcd3
08631af1 +0x08e7:  mov    %ebx,%eax
08631af3 +0x08e9:  mov    %eax,%edx
08631af5 +0x08eb:  mov    0x8(%ebp),%eax
08631af8 +0x08ee:  mov    %edx,0xa4(%eax)
08631afe +0x08f4:  movl   $0x4,(%esp)
08631b05 +0x08fb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631b0a +0x0900:  mov    %eax,%ebx
08631b0c +0x0902:  mov    %ebx,%eax
08631b0e +0x0904:  mov    %eax,(%esp)
08631b11 +0x0907:  call   0863c7de <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xcef>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xcef
08631b16 +0x090c:  mov    %ebx,%eax
08631b18 +0x090e:  mov    %eax,%edx
08631b1a +0x0910:  mov    0x8(%ebp),%eax
08631b1d +0x0913:  mov    %edx,0x18c(%eax)
08631b23 +0x0919:  movl   $0x4,(%esp)
08631b2a +0x0920:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631b2f +0x0925:  mov    %eax,%ebx
08631b31 +0x0927:  mov    %ebx,%eax
08631b33 +0x0929:  mov    %eax,(%esp)
08631b36 +0x092c:  call   0863c7fa <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xd0b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xd0b
08631b3b +0x0931:  mov    %ebx,%eax
08631b3d +0x0933:  mov    %eax,%edx
08631b3f +0x0935:  mov    0x8(%ebp),%eax
08631b42 +0x0938:  mov    %edx,0x190(%eax)
08631b48 +0x093e:  movl   $0x4,(%esp)
08631b4f +0x0945:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631b54 +0x094a:  mov    %eax,%ebx
08631b56 +0x094c:  mov    %ebx,%eax
08631b58 +0x094e:  mov    %eax,(%esp)
08631b5b +0x0951:  call   0863c816 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xd27>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xd27
08631b60 +0x0956:  mov    %ebx,%eax
08631b62 +0x0958:  mov    %eax,%edx
08631b64 +0x095a:  mov    0x8(%ebp),%eax
08631b67 +0x095d:  mov    %edx,0x194(%eax)
08631b6d +0x0963:  movl   $0x4,(%esp)
08631b74 +0x096a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631b79 +0x096f:  mov    %eax,%ebx
08631b7b +0x0971:  mov    %ebx,%eax
08631b7d +0x0973:  mov    %eax,(%esp)
08631b80 +0x0976:  call   0863c832 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xd43>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xd43
08631b85 +0x097b:  mov    %ebx,%eax
08631b87 +0x097d:  mov    %eax,%edx
08631b89 +0x097f:  mov    0x8(%ebp),%eax
08631b8c +0x0982:  mov    %edx,0xcc(%eax)
08631b92 +0x0988:  movl   $0x4,(%esp)
08631b99 +0x098f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631b9e +0x0994:  mov    %eax,%ebx
08631ba0 +0x0996:  mov    %ebx,%eax
08631ba2 +0x0998:  mov    %eax,(%esp)
08631ba5 +0x099b:  call   0863c84e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xd5f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xd5f
08631baa +0x09a0:  mov    %ebx,%eax
08631bac +0x09a2:  mov    %eax,%edx
08631bae +0x09a4:  mov    0x8(%ebp),%eax
08631bb1 +0x09a7:  mov    %edx,0xd0(%eax)
08631bb7 +0x09ad:  movl   $0x4,(%esp)
08631bbe +0x09b4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631bc3 +0x09b9:  mov    %eax,%ebx
08631bc5 +0x09bb:  mov    %ebx,%eax
08631bc7 +0x09bd:  mov    %eax,(%esp)
08631bca +0x09c0:  call   0863c86a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xd7b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xd7b
08631bcf +0x09c5:  mov    %ebx,%eax
08631bd1 +0x09c7:  mov    %eax,%edx
08631bd3 +0x09c9:  mov    0x8(%ebp),%eax
08631bd6 +0x09cc:  mov    %edx,0xd4(%eax)
08631bdc +0x09d2:  movl   $0x4,(%esp)
08631be3 +0x09d9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631be8 +0x09de:  mov    %eax,%ebx
08631bea +0x09e0:  mov    %ebx,%eax
08631bec +0x09e2:  mov    %eax,(%esp)
08631bef +0x09e5:  call   0863c886 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xd97>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xd97
08631bf4 +0x09ea:  mov    %ebx,%eax
08631bf6 +0x09ec:  mov    %eax,%edx
08631bf8 +0x09ee:  mov    0x8(%ebp),%eax
08631bfb +0x09f1:  mov    %edx,0xd8(%eax)
08631c01 +0x09f7:  movl   $0x4,(%esp)
08631c08 +0x09fe:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631c0d +0x0a03:  mov    %eax,%ebx
08631c0f +0x0a05:  mov    %ebx,%eax
08631c11 +0x0a07:  mov    %eax,(%esp)
08631c14 +0x0a0a:  call   0863c8a2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xdb3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xdb3
08631c19 +0x0a0f:  mov    %ebx,%eax
08631c1b +0x0a11:  mov    %eax,%edx
08631c1d +0x0a13:  mov    0x8(%ebp),%eax
08631c20 +0x0a16:  mov    %edx,0xdc(%eax)
08631c26 +0x0a1c:  movl   $0x4,(%esp)
08631c2d +0x0a23:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631c32 +0x0a28:  mov    %eax,%ebx
08631c34 +0x0a2a:  mov    %ebx,%eax
08631c36 +0x0a2c:  mov    %eax,(%esp)
08631c39 +0x0a2f:  call   0863c8be <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xdcf>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xdcf
08631c3e +0x0a34:  mov    %ebx,%eax
08631c40 +0x0a36:  mov    %eax,%edx
08631c42 +0x0a38:  mov    0x8(%ebp),%eax
08631c45 +0x0a3b:  mov    %edx,0xe0(%eax)
08631c4b +0x0a41:  movl   $0x4,(%esp)
08631c52 +0x0a48:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631c57 +0x0a4d:  mov    %eax,%ebx
08631c59 +0x0a4f:  mov    %ebx,%eax
08631c5b +0x0a51:  mov    %eax,(%esp)
08631c5e +0x0a54:  call   0863c8da <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xdeb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xdeb
08631c63 +0x0a59:  mov    %ebx,%eax
08631c65 +0x0a5b:  mov    %eax,%edx
08631c67 +0x0a5d:  mov    0x8(%ebp),%eax
08631c6a +0x0a60:  mov    %edx,0xe4(%eax)
08631c70 +0x0a66:  movl   $0x4,(%esp)
08631c77 +0x0a6d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631c7c +0x0a72:  mov    %eax,%ebx
08631c7e +0x0a74:  mov    %ebx,%eax
08631c80 +0x0a76:  mov    %eax,(%esp)
08631c83 +0x0a79:  call   0863c8f6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xe07>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xe07
08631c88 +0x0a7e:  mov    %ebx,%eax
08631c8a +0x0a80:  mov    %eax,%edx
08631c8c +0x0a82:  mov    0x8(%ebp),%eax
08631c8f +0x0a85:  mov    %edx,0xe8(%eax)
08631c95 +0x0a8b:  movl   $0x4,(%esp)
08631c9c +0x0a92:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631ca1 +0x0a97:  mov    %eax,%ebx
08631ca3 +0x0a99:  mov    %ebx,%eax
08631ca5 +0x0a9b:  mov    %eax,(%esp)
08631ca8 +0x0a9e:  call   0863c912 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xe23>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xe23
08631cad +0x0aa3:  mov    %ebx,%eax
08631caf +0x0aa5:  mov    %eax,%edx
08631cb1 +0x0aa7:  mov    0x8(%ebp),%eax
08631cb4 +0x0aaa:  mov    %edx,0x198(%eax)
08631cba +0x0ab0:  movl   $0x4,(%esp)
08631cc1 +0x0ab7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631cc6 +0x0abc:  mov    %eax,%ebx
08631cc8 +0x0abe:  mov    %ebx,%eax
08631cca +0x0ac0:  mov    %eax,(%esp)
08631ccd +0x0ac3:  call   0863c92e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xe3f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xe3f
08631cd2 +0x0ac8:  mov    %ebx,%eax
08631cd4 +0x0aca:  mov    %eax,%edx
08631cd6 +0x0acc:  mov    0x8(%ebp),%eax
08631cd9 +0x0acf:  mov    %edx,0x19c(%eax)
08631cdf +0x0ad5:  movl   $0x4,(%esp)
08631ce6 +0x0adc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631ceb +0x0ae1:  mov    %eax,%ebx
08631ced +0x0ae3:  mov    %ebx,%eax
08631cef +0x0ae5:  mov    %eax,(%esp)
08631cf2 +0x0ae8:  call   0863c94a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xe5b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xe5b
08631cf7 +0x0aed:  mov    %ebx,%eax
08631cf9 +0x0aef:  mov    %eax,%edx
08631cfb +0x0af1:  mov    0x8(%ebp),%eax
08631cfe +0x0af4:  mov    %edx,0x1a0(%eax)
08631d04 +0x0afa:  movl   $0x4,(%esp)
08631d0b +0x0b01:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631d10 +0x0b06:  mov    %eax,%ebx
08631d12 +0x0b08:  mov    %ebx,%eax
08631d14 +0x0b0a:  mov    %eax,(%esp)
08631d17 +0x0b0d:  call   0863c966 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xe77>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xe77
08631d1c +0x0b12:  mov    %ebx,%eax
08631d1e +0x0b14:  mov    %eax,%edx
08631d20 +0x0b16:  mov    0x8(%ebp),%eax
08631d23 +0x0b19:  mov    %edx,0x1a4(%eax)
08631d29 +0x0b1f:  movl   $0x4,(%esp)
08631d30 +0x0b26:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631d35 +0x0b2b:  mov    %eax,%ebx
08631d37 +0x0b2d:  mov    %ebx,%eax
08631d39 +0x0b2f:  mov    %eax,(%esp)
08631d3c +0x0b32:  call   0863c982 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xe93>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xe93
08631d41 +0x0b37:  mov    %ebx,%eax
08631d43 +0x0b39:  mov    %eax,%edx
08631d45 +0x0b3b:  mov    0x8(%ebp),%eax
08631d48 +0x0b3e:  mov    %edx,0x1a8(%eax)
08631d4e +0x0b44:  movl   $0x4,(%esp)
08631d55 +0x0b4b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631d5a +0x0b50:  mov    %eax,%ebx
08631d5c +0x0b52:  mov    %ebx,%eax
08631d5e +0x0b54:  mov    %eax,(%esp)
08631d61 +0x0b57:  call   0863c99e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xeaf>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xeaf
08631d66 +0x0b5c:  mov    %ebx,%eax
08631d68 +0x0b5e:  mov    %eax,%edx
08631d6a +0x0b60:  mov    0x8(%ebp),%eax
08631d6d +0x0b63:  mov    %edx,0xf0(%eax)
08631d73 +0x0b69:  movl   $0x4,(%esp)
08631d7a +0x0b70:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631d7f +0x0b75:  mov    %eax,%ebx
08631d81 +0x0b77:  mov    %ebx,%eax
08631d83 +0x0b79:  mov    %eax,(%esp)
08631d86 +0x0b7c:  call   0863c9ba <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xecb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xecb
08631d8b +0x0b81:  mov    %ebx,%eax
08631d8d +0x0b83:  mov    %eax,%edx
08631d8f +0x0b85:  mov    0x8(%ebp),%eax
08631d92 +0x0b88:  mov    %edx,0xf4(%eax)
08631d98 +0x0b8e:  movl   $0x4,(%esp)
08631d9f +0x0b95:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631da4 +0x0b9a:  mov    %eax,%ebx
08631da6 +0x0b9c:  mov    %ebx,%eax
08631da8 +0x0b9e:  mov    %eax,(%esp)
08631dab +0x0ba1:  call   0863c9d6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xee7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xee7
08631db0 +0x0ba6:  mov    %ebx,%eax
08631db2 +0x0ba8:  mov    %eax,%edx
08631db4 +0x0baa:  mov    0x8(%ebp),%eax
08631db7 +0x0bad:  mov    %edx,0x24(%eax)
08631dba +0x0bb0:  movl   $0x4,(%esp)
08631dc1 +0x0bb7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631dc6 +0x0bbc:  mov    %eax,%ebx
08631dc8 +0x0bbe:  mov    %ebx,%eax
08631dca +0x0bc0:  mov    %eax,(%esp)
08631dcd +0x0bc3:  call   0863c9f2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xf03>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xf03
08631dd2 +0x0bc8:  mov    %ebx,%eax
08631dd4 +0x0bca:  mov    %eax,%edx
08631dd6 +0x0bcc:  mov    0x8(%ebp),%eax
08631dd9 +0x0bcf:  mov    %edx,0x1ac(%eax)
08631ddf +0x0bd5:  movl   $0x4,(%esp)
08631de6 +0x0bdc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631deb +0x0be1:  mov    %eax,%ebx
08631ded +0x0be3:  mov    %ebx,%eax
08631def +0x0be5:  mov    %eax,(%esp)
08631df2 +0x0be8:  call   0863ca0e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xf1f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xf1f
08631df7 +0x0bed:  mov    %ebx,%eax
08631df9 +0x0bef:  mov    %eax,%edx
08631dfb +0x0bf1:  mov    0x8(%ebp),%eax
08631dfe +0x0bf4:  mov    %edx,0x1b0(%eax)
08631e04 +0x0bfa:  movl   $0x4,(%esp)
08631e0b +0x0c01:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631e10 +0x0c06:  mov    %eax,%ebx
08631e12 +0x0c08:  mov    %ebx,%eax
08631e14 +0x0c0a:  mov    %eax,(%esp)
08631e17 +0x0c0d:  call   0863ca2a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xf3b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xf3b
08631e1c +0x0c12:  mov    %ebx,%eax
08631e1e +0x0c14:  mov    %eax,%edx
08631e20 +0x0c16:  mov    0x8(%ebp),%eax
08631e23 +0x0c19:  mov    %edx,0x1b4(%eax)
08631e29 +0x0c1f:  movl   $0x4,(%esp)
08631e30 +0x0c26:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631e35 +0x0c2b:  mov    %eax,%ebx
08631e37 +0x0c2d:  mov    %ebx,%eax
08631e39 +0x0c2f:  mov    %eax,(%esp)
08631e3c +0x0c32:  call   0863ca46 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xf57>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xf57
08631e41 +0x0c37:  mov    %ebx,%eax
08631e43 +0x0c39:  mov    %eax,%edx
08631e45 +0x0c3b:  mov    0x8(%ebp),%eax
08631e48 +0x0c3e:  mov    %edx,0x1b8(%eax)
08631e4e +0x0c44:  movl   $0x4,(%esp)
08631e55 +0x0c4b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631e5a +0x0c50:  mov    %eax,%ebx
08631e5c +0x0c52:  mov    %ebx,%eax
08631e5e +0x0c54:  mov    %eax,(%esp)
08631e61 +0x0c57:  call   0863ca62 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xf73>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xf73
08631e66 +0x0c5c:  mov    %ebx,%eax
08631e68 +0x0c5e:  mov    %eax,%edx
08631e6a +0x0c60:  mov    0x8(%ebp),%eax
08631e6d +0x0c63:  mov    %edx,0x1bc(%eax)
08631e73 +0x0c69:  movl   $0x4,(%esp)
08631e7a +0x0c70:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631e7f +0x0c75:  mov    %eax,%ebx
08631e81 +0x0c77:  mov    %ebx,%eax
08631e83 +0x0c79:  mov    %eax,(%esp)
08631e86 +0x0c7c:  call   0863ca7e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xf8f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xf8f
08631e8b +0x0c81:  mov    %ebx,%eax
08631e8d +0x0c83:  mov    %eax,%edx
08631e8f +0x0c85:  mov    0x8(%ebp),%eax
08631e92 +0x0c88:  mov    %edx,0x1c0(%eax)
08631e98 +0x0c8e:  movl   $0x4,(%esp)
08631e9f +0x0c95:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631ea4 +0x0c9a:  mov    %eax,%ebx
08631ea6 +0x0c9c:  mov    %ebx,%eax
08631ea8 +0x0c9e:  mov    %eax,(%esp)
08631eab +0x0ca1:  call   0863ca9a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xfab>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xfab
08631eb0 +0x0ca6:  mov    %ebx,%eax
08631eb2 +0x0ca8:  mov    %eax,%edx
08631eb4 +0x0caa:  mov    0x8(%ebp),%eax
08631eb7 +0x0cad:  mov    %edx,0x1c4(%eax)
08631ebd +0x0cb3:  movl   $0x4,(%esp)
08631ec4 +0x0cba:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631ec9 +0x0cbf:  mov    %eax,%ebx
08631ecb +0x0cc1:  mov    %ebx,%eax
08631ecd +0x0cc3:  mov    %eax,(%esp)
08631ed0 +0x0cc6:  call   0863cab6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xfc7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xfc7
08631ed5 +0x0ccb:  mov    %ebx,%eax
08631ed7 +0x0ccd:  mov    %eax,%edx
08631ed9 +0x0ccf:  mov    0x8(%ebp),%eax
08631edc +0x0cd2:  mov    %edx,0xa8(%eax)
08631ee2 +0x0cd8:  movl   $0x4,(%esp)
08631ee9 +0x0cdf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631eee +0x0ce4:  mov    %eax,%ebx
08631ef0 +0x0ce6:  mov    %ebx,%eax
08631ef2 +0x0ce8:  mov    %eax,(%esp)
08631ef5 +0x0ceb:  call   0863cad2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xfe3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xfe3
08631efa +0x0cf0:  mov    %ebx,%eax
08631efc +0x0cf2:  mov    %eax,%edx
08631efe +0x0cf4:  mov    0x8(%ebp),%eax
08631f01 +0x0cf7:  mov    %edx,0x1c8(%eax)
08631f07 +0x0cfd:  movl   $0x4,(%esp)
08631f0e +0x0d04:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631f13 +0x0d09:  mov    %eax,%ebx
08631f15 +0x0d0b:  mov    %ebx,%eax
08631f17 +0x0d0d:  mov    %eax,(%esp)
08631f1a +0x0d10:  call   0863caee <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xfff>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xfff
08631f1f +0x0d15:  mov    %ebx,%eax
08631f21 +0x0d17:  mov    %eax,%edx
08631f23 +0x0d19:  mov    0x8(%ebp),%eax
08631f26 +0x0d1c:  mov    %edx,0x124(%eax)
08631f2c +0x0d22:  movl   $0x4,(%esp)
08631f33 +0x0d29:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631f38 +0x0d2e:  mov    %eax,%ebx
08631f3a +0x0d30:  mov    %ebx,%eax
08631f3c +0x0d32:  mov    %eax,(%esp)
08631f3f +0x0d35:  call   0863caee <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xfff>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xfff
08631f44 +0x0d3a:  mov    %ebx,%eax
08631f46 +0x0d3c:  mov    %eax,%edx
08631f48 +0x0d3e:  mov    0x8(%ebp),%eax
08631f4b +0x0d41:  mov    %edx,0x12c(%eax)
08631f51 +0x0d47:  movl   $0x4,(%esp)
08631f58 +0x0d4e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631f5d +0x0d53:  mov    %eax,%ebx
08631f5f +0x0d55:  mov    %ebx,%eax
08631f61 +0x0d57:  mov    %eax,(%esp)
08631f64 +0x0d5a:  call   0863caee <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xfff>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xfff
08631f69 +0x0d5f:  mov    %ebx,%eax
08631f6b +0x0d61:  mov    %eax,%edx
08631f6d +0x0d63:  mov    0x8(%ebp),%eax
08631f70 +0x0d66:  mov    %edx,0x130(%eax)
08631f76 +0x0d6c:  movl   $0x4,(%esp)
08631f7d +0x0d73:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631f82 +0x0d78:  mov    %eax,%ebx
08631f84 +0x0d7a:  mov    %ebx,%eax
08631f86 +0x0d7c:  mov    %eax,(%esp)
08631f89 +0x0d7f:  call   0863caee <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xfff>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xfff
08631f8e +0x0d84:  mov    %ebx,%eax
08631f90 +0x0d86:  mov    %eax,%edx
08631f92 +0x0d88:  mov    0x8(%ebp),%eax
08631f95 +0x0d8b:  mov    %edx,0x134(%eax)
08631f9b +0x0d91:  movl   $0x4,(%esp)
08631fa2 +0x0d98:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631fa7 +0x0d9d:  mov    %eax,%ebx
08631fa9 +0x0d9f:  mov    %ebx,%eax
08631fab +0x0da1:  mov    %eax,(%esp)
08631fae +0x0da4:  call   0863caee <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xfff>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xfff
08631fb3 +0x0da9:  mov    %ebx,%eax
08631fb5 +0x0dab:  mov    %eax,%edx
08631fb7 +0x0dad:  mov    0x8(%ebp),%eax
08631fba +0x0db0:  mov    %edx,0x138(%eax)
08631fc0 +0x0db6:  movl   $0x4,(%esp)
08631fc7 +0x0dbd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631fcc +0x0dc2:  mov    %eax,%ebx
08631fce +0x0dc4:  mov    %ebx,%eax
08631fd0 +0x0dc6:  mov    %eax,(%esp)
08631fd3 +0x0dc9:  call   0863caee <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0xfff>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0xfff
08631fd8 +0x0dce:  mov    %ebx,%eax
08631fda +0x0dd0:  mov    %eax,%edx
08631fdc +0x0dd2:  mov    0x8(%ebp),%eax
08631fdf +0x0dd5:  mov    %edx,0x128(%eax)
08631fe5 +0x0ddb:  movl   $0x4,(%esp)
08631fec +0x0de2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08631ff1 +0x0de7:  mov    %eax,%ebx
08631ff3 +0x0de9:  mov    %ebx,%eax
08631ff5 +0x0deb:  mov    %eax,(%esp)
08631ff8 +0x0dee:  call   0863cb0a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x101b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x101b
08631ffd +0x0df3:  mov    %ebx,%eax
08631fff +0x0df5:  mov    %eax,%edx
08632001 +0x0df7:  mov    0x8(%ebp),%eax
08632004 +0x0dfa:  mov    %edx,0x1cc(%eax)
0863200a +0x0e00:  movl   $0x4,(%esp)
08632011 +0x0e07:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632016 +0x0e0c:  mov    %eax,%ebx
08632018 +0x0e0e:  mov    %ebx,%eax
0863201a +0x0e10:  mov    %eax,(%esp)
0863201d +0x0e13:  call   0863cb26 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1037>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1037
08632022 +0x0e18:  mov    %ebx,%eax
08632024 +0x0e1a:  mov    %eax,%edx
08632026 +0x0e1c:  mov    0x8(%ebp),%eax
08632029 +0x0e1f:  mov    %edx,0x15c(%eax)
0863202f +0x0e25:  movl   $0x4,(%esp)
08632036 +0x0e2c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863203b +0x0e31:  mov    %eax,%ebx
0863203d +0x0e33:  mov    %ebx,%eax
0863203f +0x0e35:  mov    %eax,(%esp)
08632042 +0x0e38:  call   0863cb42 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1053>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1053
08632047 +0x0e3d:  mov    %ebx,%eax
08632049 +0x0e3f:  mov    %eax,%edx
0863204b +0x0e41:  mov    0x8(%ebp),%eax
0863204e +0x0e44:  mov    %edx,0x1d8(%eax)
08632054 +0x0e4a:  movl   $0x4,(%esp)
0863205b +0x0e51:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632060 +0x0e56:  mov    %eax,%ebx
08632062 +0x0e58:  mov    %ebx,%eax
08632064 +0x0e5a:  mov    %eax,(%esp)
08632067 +0x0e5d:  call   0863cb5e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x106f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x106f
0863206c +0x0e62:  mov    %ebx,%eax
0863206e +0x0e64:  mov    %eax,%edx
08632070 +0x0e66:  mov    0x8(%ebp),%eax
08632073 +0x0e69:  mov    %edx,0x1e4(%eax)
08632079 +0x0e6f:  movl   $0x4,(%esp)
08632080 +0x0e76:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632085 +0x0e7b:  mov    %eax,%ebx
08632087 +0x0e7d:  mov    %ebx,%eax
08632089 +0x0e7f:  mov    %eax,(%esp)
0863208c +0x0e82:  call   0863cb7a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x108b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x108b
08632091 +0x0e87:  mov    %ebx,%eax
08632093 +0x0e89:  mov    %eax,%edx
08632095 +0x0e8b:  mov    0x8(%ebp),%eax
08632098 +0x0e8e:  mov    %edx,0x1dc(%eax)
0863209e +0x0e94:  movl   $0x4,(%esp)
086320a5 +0x0e9b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086320aa +0x0ea0:  mov    %eax,%ebx
086320ac +0x0ea2:  mov    %ebx,%eax
086320ae +0x0ea4:  mov    %eax,(%esp)
086320b1 +0x0ea7:  call   0863cb96 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x10a7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x10a7
086320b6 +0x0eac:  mov    %ebx,%eax
086320b8 +0x0eae:  mov    %eax,%edx
086320ba +0x0eb0:  mov    0x8(%ebp),%eax
086320bd +0x0eb3:  mov    %edx,0x1e0(%eax)
086320c3 +0x0eb9:  movl   $0x4,(%esp)
086320ca +0x0ec0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086320cf +0x0ec5:  mov    %eax,%ebx
086320d1 +0x0ec7:  mov    %ebx,%eax
086320d3 +0x0ec9:  mov    %eax,(%esp)
086320d6 +0x0ecc:  call   0863cbb2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x10c3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x10c3
086320db +0x0ed1:  mov    %ebx,%eax
086320dd +0x0ed3:  mov    %eax,%edx
086320df +0x0ed5:  mov    0x8(%ebp),%eax
086320e2 +0x0ed8:  mov    %edx,0x28(%eax)
086320e5 +0x0edb:  movl   $0x4,(%esp)
086320ec +0x0ee2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086320f1 +0x0ee7:  mov    %eax,%ebx
086320f3 +0x0ee9:  mov    %ebx,%eax
086320f5 +0x0eeb:  mov    %eax,(%esp)
086320f8 +0x0eee:  call   0863cbce <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x10df>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x10df
086320fd +0x0ef3:  mov    %ebx,%eax
086320ff +0x0ef5:  mov    %eax,%edx
08632101 +0x0ef7:  mov    0x8(%ebp),%eax
08632104 +0x0efa:  mov    %edx,0x1e8(%eax)
0863210a +0x0f00:  movl   $0x4,(%esp)
08632111 +0x0f07:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632116 +0x0f0c:  mov    %eax,%ebx
08632118 +0x0f0e:  mov    %ebx,%eax
0863211a +0x0f10:  mov    %eax,(%esp)
0863211d +0x0f13:  call   0863cbea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x10fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x10fb
08632122 +0x0f18:  mov    %ebx,%eax
08632124 +0x0f1a:  mov    %eax,%edx
08632126 +0x0f1c:  mov    0x8(%ebp),%eax
08632129 +0x0f1f:  mov    %edx,0x1f8(%eax)
0863212f +0x0f25:  movl   $0x4,(%esp)
08632136 +0x0f2c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863213b +0x0f31:  mov    %eax,%ebx
0863213d +0x0f33:  mov    %ebx,%eax
0863213f +0x0f35:  mov    %eax,(%esp)
08632142 +0x0f38:  call   0863cbea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x10fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x10fb
08632147 +0x0f3d:  mov    %ebx,%eax
08632149 +0x0f3f:  mov    %eax,%edx
0863214b +0x0f41:  mov    0x8(%ebp),%eax
0863214e +0x0f44:  mov    %edx,0x1fc(%eax)
08632154 +0x0f4a:  movl   $0x4,(%esp)
0863215b +0x0f51:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632160 +0x0f56:  mov    %eax,%ebx
08632162 +0x0f58:  mov    %ebx,%eax
08632164 +0x0f5a:  mov    %eax,(%esp)
08632167 +0x0f5d:  call   0863cc06 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1117>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1117
0863216c +0x0f62:  mov    %ebx,%eax
0863216e +0x0f64:  mov    %eax,%edx
08632170 +0x0f66:  mov    0x8(%ebp),%eax
08632173 +0x0f69:  mov    %edx,0x1d0(%eax)
08632179 +0x0f6f:  movl   $0x4,(%esp)
08632180 +0x0f76:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632185 +0x0f7b:  mov    %eax,%ebx
08632187 +0x0f7d:  mov    %ebx,%eax
08632189 +0x0f7f:  mov    %eax,(%esp)
0863218c +0x0f82:  call   0863cc22 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1133>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1133
08632191 +0x0f87:  mov    %ebx,%eax
08632193 +0x0f89:  mov    %eax,%edx
08632195 +0x0f8b:  mov    0x8(%ebp),%eax
08632198 +0x0f8e:  mov    %edx,0xa0(%eax)
0863219e +0x0f94:  movl   $0x4,(%esp)
086321a5 +0x0f9b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086321aa +0x0fa0:  mov    %eax,%ebx
086321ac +0x0fa2:  mov    %ebx,%eax
086321ae +0x0fa4:  mov    %eax,(%esp)
086321b1 +0x0fa7:  call   0863cc3e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x114f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x114f
086321b6 +0x0fac:  mov    %ebx,%eax
086321b8 +0x0fae:  mov    %eax,%edx
086321ba +0x0fb0:  mov    0x8(%ebp),%eax
086321bd +0x0fb3:  mov    %edx,0x1ec(%eax)
086321c3 +0x0fb9:  movl   $0x1c,(%esp)
086321ca +0x0fc0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086321cf +0x0fc5:  mov    %eax,%ebx
086321d1 +0x0fc7:  mov    %ebx,%eax
086321d3 +0x0fc9:  mov    %eax,(%esp)
086321d6 +0x0fcc:  call   0863cc5a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x116b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x116b
086321db +0x0fd1:  jmp    086321f5 <+0xfeb>
086321dd +0x0fd3:  mov    %edx,%esi
086321df +0x0fd5:  mov    %eax,%edi
086321e1 +0x0fd7:  mov    %ebx,(%esp)
086321e4 +0x0fda:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086321e9 +0x0fdf:  mov    %edi,%eax
086321eb +0x0fe1:  mov    %esi,%edx
086321ed +0x0fe3:  mov    %eax,(%esp)
086321f0 +0x0fe6:  call   08ae3750 <_Unwind_Resume>
086321f5 +0x0feb:  mov    %ebx,%eax
086321f7 +0x0fed:  mov    %eax,%edx
086321f9 +0x0fef:  mov    0x8(%ebp),%eax
086321fc +0x0ff2:  mov    %edx,0x1f0(%eax)
08632202 +0x0ff8:  movl   $0x4,(%esp)
08632209 +0x0fff:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863220e +0x1004:  mov    %eax,%ebx
08632210 +0x1006:  mov    %ebx,%eax
08632212 +0x1008:  mov    %eax,(%esp)
08632215 +0x100b:  call   0863bc12 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x123>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x123
0863221a +0x1010:  mov    %ebx,%eax
0863221c +0x1012:  mov    %eax,%edx
0863221e +0x1014:  mov    0x8(%ebp),%eax
08632221 +0x1017:  mov    %edx,0x1f4(%eax)
08632227 +0x101d:  movl   $0x4,(%esp)
0863222e +0x1024:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632233 +0x1029:  mov    %eax,%ebx
08632235 +0x102b:  mov    %ebx,%eax
08632237 +0x102d:  mov    %eax,(%esp)
0863223a +0x1030:  call   0863ccce <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x11df>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x11df
0863223f +0x1035:  mov    %ebx,%eax
08632241 +0x1037:  mov    %eax,%edx
08632243 +0x1039:  mov    0x8(%ebp),%eax
08632246 +0x103c:  mov    %edx,0x200(%eax)
0863224c +0x1042:  movl   $0x4,(%esp)
08632253 +0x1049:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632258 +0x104e:  mov    %eax,%ebx
0863225a +0x1050:  mov    %ebx,%eax
0863225c +0x1052:  mov    %eax,(%esp)
0863225f +0x1055:  call   0863ccea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x11fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x11fb
08632264 +0x105a:  mov    %ebx,%eax
08632266 +0x105c:  mov    %eax,%edx
08632268 +0x105e:  mov    0x8(%ebp),%eax
0863226b +0x1061:  mov    %edx,0x204(%eax)
08632271 +0x1067:  movl   $0x4,(%esp)
08632278 +0x106e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863227d +0x1073:  mov    %eax,%ebx
0863227f +0x1075:  mov    %ebx,%eax
08632281 +0x1077:  mov    %eax,(%esp)
08632284 +0x107a:  call   0863cd06 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1217>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1217
08632289 +0x107f:  mov    %ebx,%eax
0863228b +0x1081:  mov    %eax,%edx
0863228d +0x1083:  mov    0x8(%ebp),%eax
08632290 +0x1086:  mov    %edx,0x25c(%eax)
08632296 +0x108c:  movl   $0x4,(%esp)
0863229d +0x1093:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086322a2 +0x1098:  mov    %eax,%ebx
086322a4 +0x109a:  mov    %ebx,%eax
086322a6 +0x109c:  mov    %eax,(%esp)
086322a9 +0x109f:  call   0863cd22 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1233>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1233
086322ae +0x10a4:  mov    %ebx,%eax
086322b0 +0x10a6:  mov    %eax,%edx
086322b2 +0x10a8:  mov    0x8(%ebp),%eax
086322b5 +0x10ab:  mov    %edx,0x208(%eax)
086322bb +0x10b1:  movl   $0x4,(%esp)
086322c2 +0x10b8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086322c7 +0x10bd:  mov    %eax,%ebx
086322c9 +0x10bf:  mov    %ebx,%eax
086322cb +0x10c1:  mov    %eax,(%esp)
086322ce +0x10c4:  call   0863cd3e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x124f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x124f
086322d3 +0x10c9:  mov    %ebx,%eax
086322d5 +0x10cb:  mov    %eax,%edx
086322d7 +0x10cd:  mov    0x8(%ebp),%eax
086322da +0x10d0:  mov    %edx,0x210(%eax)
086322e0 +0x10d6:  movl   $0x4,(%esp)
086322e7 +0x10dd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086322ec +0x10e2:  mov    %eax,%ebx
086322ee +0x10e4:  mov    %ebx,%eax
086322f0 +0x10e6:  mov    %eax,(%esp)
086322f3 +0x10e9:  call   0863cd5a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x126b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x126b
086322f8 +0x10ee:  mov    %ebx,%eax
086322fa +0x10f0:  mov    %eax,%edx
086322fc +0x10f2:  mov    0x8(%ebp),%eax
086322ff +0x10f5:  mov    %edx,0x214(%eax)
08632305 +0x10fb:  movl   $0x4,(%esp)
0863230c +0x1102:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632311 +0x1107:  mov    %eax,%ebx
08632313 +0x1109:  mov    %ebx,%eax
08632315 +0x110b:  mov    %eax,(%esp)
08632318 +0x110e:  call   0863cd76 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1287>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1287
0863231d +0x1113:  mov    %ebx,%eax
0863231f +0x1115:  mov    %eax,%edx
08632321 +0x1117:  mov    0x8(%ebp),%eax
08632324 +0x111a:  mov    %edx,0x218(%eax)
0863232a +0x1120:  movl   $0x4,(%esp)
08632331 +0x1127:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632336 +0x112c:  mov    %eax,%ebx
08632338 +0x112e:  mov    %ebx,%eax
0863233a +0x1130:  mov    %eax,(%esp)
0863233d +0x1133:  call   0863cd92 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x12a3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x12a3
08632342 +0x1138:  mov    %ebx,%eax
08632344 +0x113a:  mov    %eax,%edx
08632346 +0x113c:  mov    0x8(%ebp),%eax
08632349 +0x113f:  mov    %edx,0x21c(%eax)
0863234f +0x1145:  movl   $0x4,(%esp)
08632356 +0x114c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863235b +0x1151:  mov    %eax,%ebx
0863235d +0x1153:  mov    %ebx,%eax
0863235f +0x1155:  mov    %eax,(%esp)
08632362 +0x1158:  call   0863cdae <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x12bf>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x12bf
08632367 +0x115d:  mov    %ebx,%eax
08632369 +0x115f:  mov    %eax,%edx
0863236b +0x1161:  mov    0x8(%ebp),%eax
0863236e +0x1164:  mov    %edx,0x9c(%eax)
08632374 +0x116a:  movl   $0x4,(%esp)
0863237b +0x1171:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632380 +0x1176:  mov    %eax,%ebx
08632382 +0x1178:  mov    %ebx,%eax
08632384 +0x117a:  mov    %eax,(%esp)
08632387 +0x117d:  call   0863cdca <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x12db>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x12db
0863238c +0x1182:  mov    %ebx,%eax
0863238e +0x1184:  mov    %eax,%edx
08632390 +0x1186:  mov    0x8(%ebp),%eax
08632393 +0x1189:  mov    %edx,0x220(%eax)
08632399 +0x118f:  movl   $0x4,(%esp)
086323a0 +0x1196:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086323a5 +0x119b:  mov    %eax,%ebx
086323a7 +0x119d:  mov    %ebx,%eax
086323a9 +0x119f:  mov    %eax,(%esp)
086323ac +0x11a2:  call   0863cde6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x12f7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x12f7
086323b1 +0x11a7:  mov    %ebx,%eax
086323b3 +0x11a9:  mov    %eax,%edx
086323b5 +0x11ab:  mov    0x8(%ebp),%eax
086323b8 +0x11ae:  mov    %edx,0x224(%eax)
086323be +0x11b4:  movl   $0x4,(%esp)
086323c5 +0x11bb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086323ca +0x11c0:  mov    %eax,%ebx
086323cc +0x11c2:  mov    %ebx,%eax
086323ce +0x11c4:  mov    %eax,(%esp)
086323d1 +0x11c7:  call   0863ce02 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1313>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1313
086323d6 +0x11cc:  mov    %ebx,%eax
086323d8 +0x11ce:  mov    %eax,%edx
086323da +0x11d0:  mov    0x8(%ebp),%eax
086323dd +0x11d3:  mov    %edx,0x228(%eax)
086323e3 +0x11d9:  movl   $0x4,(%esp)
086323ea +0x11e0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086323ef +0x11e5:  mov    %eax,%ebx
086323f1 +0x11e7:  mov    %ebx,%eax
086323f3 +0x11e9:  mov    %eax,(%esp)
086323f6 +0x11ec:  call   0863ce1e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x132f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x132f
086323fb +0x11f1:  mov    %ebx,%eax
086323fd +0x11f3:  mov    %eax,%edx
086323ff +0x11f5:  mov    0x8(%ebp),%eax
08632402 +0x11f8:  mov    %edx,0x230(%eax)
08632408 +0x11fe:  movl   $0x4,(%esp)
0863240f +0x1205:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632414 +0x120a:  mov    %eax,%ebx
08632416 +0x120c:  mov    %ebx,%eax
08632418 +0x120e:  mov    %eax,(%esp)
0863241b +0x1211:  call   0863ce3a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x134b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x134b
08632420 +0x1216:  mov    %ebx,%eax
08632422 +0x1218:  mov    %eax,%edx
08632424 +0x121a:  mov    0x8(%ebp),%eax
08632427 +0x121d:  mov    %edx,0x234(%eax)
0863242d +0x1223:  movl   $0x4,(%esp)
08632434 +0x122a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632439 +0x122f:  mov    %eax,%ebx
0863243b +0x1231:  mov    %ebx,%eax
0863243d +0x1233:  mov    %eax,(%esp)
08632440 +0x1236:  call   0863ce56 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1367>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1367
08632445 +0x123b:  mov    %ebx,%eax
08632447 +0x123d:  mov    %eax,%edx
08632449 +0x123f:  mov    0x8(%ebp),%eax
0863244c +0x1242:  mov    %edx,0x22c(%eax)
08632452 +0x1248:  movl   $0x4,(%esp)
08632459 +0x124f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863245e +0x1254:  mov    %eax,%ebx
08632460 +0x1256:  mov    %ebx,%eax
08632462 +0x1258:  mov    %eax,(%esp)
08632465 +0x125b:  call   0863ce72 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1383>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1383
0863246a +0x1260:  mov    %ebx,%eax
0863246c +0x1262:  mov    %eax,%edx
0863246e +0x1264:  mov    0x8(%ebp),%eax
08632471 +0x1267:  mov    %edx,0x238(%eax)
08632477 +0x126d:  movl   $0x4,(%esp)
0863247e +0x1274:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632483 +0x1279:  mov    %eax,%ebx
08632485 +0x127b:  mov    %ebx,%eax
08632487 +0x127d:  mov    %eax,(%esp)
0863248a +0x1280:  call   0863ce8e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x139f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x139f
0863248f +0x1285:  mov    %ebx,%eax
08632491 +0x1287:  mov    %eax,%edx
08632493 +0x1289:  mov    0x8(%ebp),%eax
08632496 +0x128c:  mov    %edx,0x23c(%eax)
0863249c +0x1292:  movl   $0x4,(%esp)
086324a3 +0x1299:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086324a8 +0x129e:  mov    %eax,%ebx
086324aa +0x12a0:  mov    %ebx,%eax
086324ac +0x12a2:  mov    %eax,(%esp)
086324af +0x12a5:  call   0863ceaa <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x13bb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x13bb
086324b4 +0x12aa:  mov    %ebx,%eax
086324b6 +0x12ac:  mov    %eax,%edx
086324b8 +0x12ae:  mov    0x8(%ebp),%eax
086324bb +0x12b1:  mov    %edx,0x240(%eax)
086324c1 +0x12b7:  movl   $0x4,(%esp)
086324c8 +0x12be:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086324cd +0x12c3:  mov    %eax,%ebx
086324cf +0x12c5:  mov    %ebx,%eax
086324d1 +0x12c7:  mov    %eax,(%esp)
086324d4 +0x12ca:  call   0863cec6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x13d7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x13d7
086324d9 +0x12cf:  mov    %ebx,%eax
086324db +0x12d1:  mov    %eax,%edx
086324dd +0x12d3:  mov    0x8(%ebp),%eax
086324e0 +0x12d6:  mov    %edx,0x244(%eax)
086324e6 +0x12dc:  movl   $0x4,(%esp)
086324ed +0x12e3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086324f2 +0x12e8:  mov    %eax,%ebx
086324f4 +0x12ea:  mov    %ebx,%eax
086324f6 +0x12ec:  mov    %eax,(%esp)
086324f9 +0x12ef:  call   0863cee2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x13f3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x13f3
086324fe +0x12f4:  mov    %ebx,%eax
08632500 +0x12f6:  mov    %eax,%edx
08632502 +0x12f8:  mov    0x8(%ebp),%eax
08632505 +0x12fb:  mov    %edx,0xec(%eax)
0863250b +0x1301:  movl   $0x4,(%esp)
08632512 +0x1308:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632517 +0x130d:  mov    %eax,%ebx
08632519 +0x130f:  mov    %ebx,%eax
0863251b +0x1311:  mov    %eax,(%esp)
0863251e +0x1314:  call   0863cefe <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x140f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x140f
08632523 +0x1319:  mov    %ebx,%eax
08632525 +0x131b:  mov    %eax,%edx
08632527 +0x131d:  mov    0x8(%ebp),%eax
0863252a +0x1320:  mov    %edx,0xac(%eax)
08632530 +0x1326:  movl   $0x4,(%esp)
08632537 +0x132d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863253c +0x1332:  mov    %eax,%ebx
0863253e +0x1334:  mov    %ebx,%eax
08632540 +0x1336:  mov    %eax,(%esp)
08632543 +0x1339:  call   0863cf1a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x142b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x142b
08632548 +0x133e:  mov    %ebx,%eax
0863254a +0x1340:  mov    %eax,%edx
0863254c +0x1342:  mov    0x8(%ebp),%eax
0863254f +0x1345:  mov    %edx,0x248(%eax)
08632555 +0x134b:  movl   $0x4,(%esp)
0863255c +0x1352:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632561 +0x1357:  mov    %eax,%ebx
08632563 +0x1359:  mov    %ebx,%eax
08632565 +0x135b:  mov    %eax,(%esp)
08632568 +0x135e:  call   0863cf36 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1447>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1447
0863256d +0x1363:  mov    %ebx,%eax
0863256f +0x1365:  mov    %eax,%edx
08632571 +0x1367:  mov    0x8(%ebp),%eax
08632574 +0x136a:  mov    %edx,0x24c(%eax)
0863257a +0x1370:  movl   $0x4,(%esp)
08632581 +0x1377:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632586 +0x137c:  mov    %eax,%ebx
08632588 +0x137e:  mov    %ebx,%eax
0863258a +0x1380:  mov    %eax,(%esp)
0863258d +0x1383:  call   0863cf52 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1463>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1463
08632592 +0x1388:  mov    %ebx,%eax
08632594 +0x138a:  mov    %eax,%edx
08632596 +0x138c:  mov    0x8(%ebp),%eax
08632599 +0x138f:  mov    %edx,0x250(%eax)
0863259f +0x1395:  movl   $0x4,(%esp)
086325a6 +0x139c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086325ab +0x13a1:  mov    %eax,%ebx
086325ad +0x13a3:  mov    %ebx,%eax
086325af +0x13a5:  mov    %eax,(%esp)
086325b2 +0x13a8:  call   0863cf6e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x147f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x147f
086325b7 +0x13ad:  mov    %ebx,%eax
086325b9 +0x13af:  mov    %eax,%edx
086325bb +0x13b1:  mov    0x8(%ebp),%eax
086325be +0x13b4:  mov    %edx,0xf8(%eax)
086325c4 +0x13ba:  movl   $0x4,(%esp)
086325cb +0x13c1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086325d0 +0x13c6:  mov    %eax,%ebx
086325d2 +0x13c8:  mov    %ebx,%eax
086325d4 +0x13ca:  mov    %eax,(%esp)
086325d7 +0x13cd:  call   0863cf8a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x149b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x149b
086325dc +0x13d2:  mov    %ebx,%eax
086325de +0x13d4:  mov    %eax,%edx
086325e0 +0x13d6:  mov    0x8(%ebp),%eax
086325e3 +0x13d9:  mov    %edx,0x254(%eax)
086325e9 +0x13df:  movl   $0x4,(%esp)
086325f0 +0x13e6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086325f5 +0x13eb:  mov    %eax,%ebx
086325f7 +0x13ed:  mov    %ebx,%eax
086325f9 +0x13ef:  mov    %eax,(%esp)
086325fc +0x13f2:  call   0863cfa6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x14b7>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x14b7
08632601 +0x13f7:  mov    %ebx,%eax
08632603 +0x13f9:  mov    %eax,%edx
08632605 +0x13fb:  mov    0x8(%ebp),%eax
08632608 +0x13fe:  mov    %edx,0x258(%eax)
0863260e +0x1404:  movl   $0x4,(%esp)
08632615 +0x140b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863261a +0x1410:  mov    %eax,%ebx
0863261c +0x1412:  mov    %ebx,%eax
0863261e +0x1414:  mov    %eax,(%esp)
08632621 +0x1417:  call   0863cfc2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x14d3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x14d3
08632626 +0x141c:  mov    %ebx,%eax
08632628 +0x141e:  mov    %eax,%edx
0863262a +0x1420:  mov    0x8(%ebp),%eax
0863262d +0x1423:  mov    %edx,0xb0(%eax)
08632633 +0x1429:  movl   $0x4,(%esp)
0863263a +0x1430:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863263f +0x1435:  mov    %eax,%ebx
08632641 +0x1437:  mov    %ebx,%eax
08632643 +0x1439:  mov    %eax,(%esp)
08632646 +0x143c:  call   0863cfde <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x14ef>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x14ef
0863264b +0x1441:  mov    %ebx,%eax
0863264d +0x1443:  mov    %eax,%edx
0863264f +0x1445:  mov    0x8(%ebp),%eax
08632652 +0x1448:  mov    %edx,0x264(%eax)
08632658 +0x144e:  movl   $0x4,(%esp)
0863265f +0x1455:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632664 +0x145a:  mov    %eax,%ebx
08632666 +0x145c:  mov    %ebx,%eax
08632668 +0x145e:  mov    %eax,(%esp)
0863266b +0x1461:  call   0863cffa <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x150b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x150b
08632670 +0x1466:  mov    %ebx,%eax
08632672 +0x1468:  mov    %eax,%edx
08632674 +0x146a:  mov    0x8(%ebp),%eax
08632677 +0x146d:  mov    %edx,0x268(%eax)
0863267d +0x1473:  movl   $0x4,(%esp)
08632684 +0x147a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632689 +0x147f:  mov    %eax,%ebx
0863268b +0x1481:  mov    %ebx,%eax
0863268d +0x1483:  mov    %eax,(%esp)
08632690 +0x1486:  call   0863d016 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1527>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1527
08632695 +0x148b:  mov    %ebx,%eax
08632697 +0x148d:  mov    %eax,%edx
08632699 +0x148f:  mov    0x8(%ebp),%eax
0863269c +0x1492:  mov    %edx,0x26c(%eax)
086326a2 +0x1498:  movl   $0x4,(%esp)
086326a9 +0x149f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086326ae +0x14a4:  mov    %eax,%ebx
086326b0 +0x14a6:  mov    %ebx,%eax
086326b2 +0x14a8:  mov    %eax,(%esp)
086326b5 +0x14ab:  call   0863d032 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1543>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1543
086326ba +0x14b0:  mov    %ebx,%eax
086326bc +0x14b2:  mov    %eax,%edx
086326be +0x14b4:  mov    0x8(%ebp),%eax
086326c1 +0x14b7:  mov    %edx,0x270(%eax)
086326c7 +0x14bd:  movl   $0x4,(%esp)
086326ce +0x14c4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086326d3 +0x14c9:  mov    %eax,%ebx
086326d5 +0x14cb:  mov    %ebx,%eax
086326d7 +0x14cd:  mov    %eax,(%esp)
086326da +0x14d0:  call   0863d04e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x155f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x155f
086326df +0x14d5:  mov    %ebx,%eax
086326e1 +0x14d7:  mov    %eax,%edx
086326e3 +0x14d9:  mov    0x8(%ebp),%eax
086326e6 +0x14dc:  mov    %edx,0x278(%eax)
086326ec +0x14e2:  movl   $0x4,(%esp)
086326f3 +0x14e9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086326f8 +0x14ee:  mov    %eax,%ebx
086326fa +0x14f0:  mov    %ebx,%eax
086326fc +0x14f2:  mov    %eax,(%esp)
086326ff +0x14f5:  call   0863d06a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x157b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x157b
08632704 +0x14fa:  mov    %ebx,%eax
08632706 +0x14fc:  mov    %eax,%edx
08632708 +0x14fe:  mov    0x8(%ebp),%eax
0863270b +0x1501:  mov    %edx,0xb4(%eax)
08632711 +0x1507:  movl   $0x4,(%esp)
08632718 +0x150e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863271d +0x1513:  mov    %eax,%ebx
0863271f +0x1515:  mov    %ebx,%eax
08632721 +0x1517:  mov    %eax,(%esp)
08632724 +0x151a:  call   0863d086 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1597>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1597
08632729 +0x151f:  mov    %ebx,%eax
0863272b +0x1521:  mov    %eax,%edx
0863272d +0x1523:  mov    0x8(%ebp),%eax
08632730 +0x1526:  mov    %edx,0x280(%eax)
08632736 +0x152c:  movl   $0x4,(%esp)
0863273d +0x1533:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632742 +0x1538:  mov    %eax,%ebx
08632744 +0x153a:  mov    %ebx,%eax
08632746 +0x153c:  mov    %eax,(%esp)
08632749 +0x153f:  call   0863d0a2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x15b3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x15b3
0863274e +0x1544:  mov    %ebx,%eax
08632750 +0x1546:  mov    %eax,%edx
08632752 +0x1548:  mov    0x8(%ebp),%eax
08632755 +0x154b:  mov    %edx,0x284(%eax)
0863275b +0x1551:  movl   $0x4,(%esp)
08632762 +0x1558:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632767 +0x155d:  mov    %eax,%ebx
08632769 +0x155f:  mov    %ebx,%eax
0863276b +0x1561:  mov    %eax,(%esp)
0863276e +0x1564:  call   0863d0be <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x15cf>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x15cf
08632773 +0x1569:  mov    %ebx,%eax
08632775 +0x156b:  mov    %eax,%edx
08632777 +0x156d:  mov    0x8(%ebp),%eax
0863277a +0x1570:  mov    %edx,0xb8(%eax)
08632780 +0x1576:  movl   $0x4,(%esp)
08632787 +0x157d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863278c +0x1582:  mov    %eax,%ebx
0863278e +0x1584:  mov    %ebx,%eax
08632790 +0x1586:  mov    %eax,(%esp)
08632793 +0x1589:  call   0863d0da <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x15eb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x15eb
08632798 +0x158e:  mov    %ebx,%eax
0863279a +0x1590:  mov    %eax,%edx
0863279c +0x1592:  mov    0x8(%ebp),%eax
0863279f +0x1595:  mov    %edx,0xbc(%eax)
086327a5 +0x159b:  movl   $0x4,(%esp)
086327ac +0x15a2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086327b1 +0x15a7:  mov    %eax,%ebx
086327b3 +0x15a9:  mov    %ebx,%eax
086327b5 +0x15ab:  mov    %eax,(%esp)
086327b8 +0x15ae:  call   0863d0f6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1607>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1607
086327bd +0x15b3:  mov    %ebx,%eax
086327bf +0x15b5:  mov    %eax,%edx
086327c1 +0x15b7:  mov    0x8(%ebp),%eax
086327c4 +0x15ba:  mov    %edx,0x28c(%eax)
086327ca +0x15c0:  movl   $0x4,(%esp)
086327d1 +0x15c7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086327d6 +0x15cc:  mov    %eax,%ebx
086327d8 +0x15ce:  mov    %ebx,%eax
086327da +0x15d0:  mov    %eax,(%esp)
086327dd +0x15d3:  call   0863d0f6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1607>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1607
086327e2 +0x15d8:  mov    %ebx,%eax
086327e4 +0x15da:  mov    %eax,%edx
086327e6 +0x15dc:  mov    0x8(%ebp),%eax
086327e9 +0x15df:  mov    %edx,0x290(%eax)
086327ef +0x15e5:  movl   $0x4,(%esp)
086327f6 +0x15ec:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086327fb +0x15f1:  mov    %eax,%ebx
086327fd +0x15f3:  mov    %ebx,%eax
086327ff +0x15f5:  mov    %eax,(%esp)
08632802 +0x15f8:  call   0863d0f6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1607>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1607
08632807 +0x15fd:  mov    %ebx,%eax
08632809 +0x15ff:  mov    %eax,%edx
0863280b +0x1601:  mov    0x8(%ebp),%eax
0863280e +0x1604:  mov    %edx,0x294(%eax)
08632814 +0x160a:  movl   $0x8,(%esp)
0863281b +0x1611:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632820 +0x1616:  mov    %eax,%ebx
08632822 +0x1618:  mov    %ebx,%eax
08632824 +0x161a:  mov    %eax,(%esp)
08632827 +0x161d:  call   0863bc2e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x13f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x13f
0863282c +0x1622:  mov    %ebx,%eax
0863282e +0x1624:  mov    %eax,%edx
08632830 +0x1626:  mov    0x8(%ebp),%eax
08632833 +0x1629:  mov    %edx,0x288(%eax)
08632839 +0x162f:  movl   $0x4,(%esp)
08632840 +0x1636:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632845 +0x163b:  mov    %eax,%ebx
08632847 +0x163d:  mov    %ebx,%eax
08632849 +0x163f:  mov    %eax,(%esp)
0863284c +0x1642:  call   0863d112 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1623>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1623
08632851 +0x1647:  mov    %ebx,%eax
08632853 +0x1649:  mov    %eax,%edx
08632855 +0x164b:  mov    0x8(%ebp),%eax
08632858 +0x164e:  mov    %edx,0x298(%eax)
0863285e +0x1654:  movl   $0x4,(%esp)
08632865 +0x165b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863286a +0x1660:  mov    %eax,%ebx
0863286c +0x1662:  mov    %ebx,%eax
0863286e +0x1664:  mov    %eax,(%esp)
08632871 +0x1667:  call   0863d12e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x163f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x163f
08632876 +0x166c:  mov    %ebx,%eax
08632878 +0x166e:  mov    %eax,%edx
0863287a +0x1670:  mov    0x8(%ebp),%eax
0863287d +0x1673:  mov    %edx,0x29c(%eax)
08632883 +0x1679:  movl   $0x4,(%esp)
0863288a +0x1680:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863288f +0x1685:  mov    %eax,%ebx
08632891 +0x1687:  mov    %ebx,%eax
08632893 +0x1689:  mov    %eax,(%esp)
08632896 +0x168c:  call   0863d12e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x163f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x163f
0863289b +0x1691:  mov    %ebx,%eax
0863289d +0x1693:  mov    %eax,%edx
0863289f +0x1695:  mov    0x8(%ebp),%eax
086328a2 +0x1698:  mov    %edx,0x2a0(%eax)
086328a8 +0x169e:  movl   $0x4,(%esp)
086328af +0x16a5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086328b4 +0x16aa:  mov    %eax,%ebx
086328b6 +0x16ac:  mov    %ebx,%eax
086328b8 +0x16ae:  mov    %eax,(%esp)
086328bb +0x16b1:  call   0863d12e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x163f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x163f
086328c0 +0x16b6:  mov    %ebx,%eax
086328c2 +0x16b8:  mov    %eax,%edx
086328c4 +0x16ba:  mov    0x8(%ebp),%eax
086328c7 +0x16bd:  mov    %edx,0x2a4(%eax)
086328cd +0x16c3:  movl   $0x4,(%esp)
086328d4 +0x16ca:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086328d9 +0x16cf:  mov    %eax,%ebx
086328db +0x16d1:  mov    %ebx,%eax
086328dd +0x16d3:  mov    %eax,(%esp)
086328e0 +0x16d6:  call   0863d12e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x163f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x163f
086328e5 +0x16db:  mov    %ebx,%eax
086328e7 +0x16dd:  mov    %eax,%edx
086328e9 +0x16df:  mov    0x8(%ebp),%eax
086328ec +0x16e2:  mov    %edx,0x2a8(%eax)
086328f2 +0x16e8:  movl   $0x4,(%esp)
086328f9 +0x16ef:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086328fe +0x16f4:  mov    %eax,%ebx
08632900 +0x16f6:  mov    %ebx,%eax
08632902 +0x16f8:  mov    %eax,(%esp)
08632905 +0x16fb:  call   0863bc54 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x165>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x165
0863290a +0x1700:  mov    %ebx,%eax
0863290c +0x1702:  mov    %eax,%edx
0863290e +0x1704:  mov    0x8(%ebp),%eax
08632911 +0x1707:  mov    %edx,0x2ac(%eax)
08632917 +0x170d:  movl   $0x4,(%esp)
0863291e +0x1714:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632923 +0x1719:  mov    %eax,%ebx
08632925 +0x171b:  mov    %ebx,%eax
08632927 +0x171d:  mov    %eax,(%esp)
0863292a +0x1720:  call   0863d14a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x165b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x165b
0863292f +0x1725:  mov    %ebx,%eax
08632931 +0x1727:  mov    %eax,%edx
08632933 +0x1729:  mov    0x8(%ebp),%eax
08632936 +0x172c:  mov    %edx,0x2b0(%eax)
0863293c +0x1732:  movl   $0x4,(%esp)
08632943 +0x1739:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08632948 +0x173e:  mov    %eax,%ebx
0863294a +0x1740:  mov    %ebx,%eax
0863294c +0x1742:  mov    %eax,(%esp)
0863294f +0x1745:  call   0863d166 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1677>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1677
08632954 +0x174a:  mov    %ebx,%eax
08632956 +0x174c:  mov    %eax,%edx
08632958 +0x174e:  mov    0x8(%ebp),%eax
0863295b +0x1751:  mov    %edx,0x2b4(%eax)
08632961 +0x1757:  movl   $0x4,(%esp)
08632968 +0x175e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863296d +0x1763:  mov    %eax,%ebx
0863296f +0x1765:  mov    %ebx,%eax
08632971 +0x1767:  mov    %eax,(%esp)
08632974 +0x176a:  call   0863d182 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1693>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1693
08632979 +0x176f:  mov    %ebx,%eax
0863297b +0x1771:  mov    %eax,%edx
0863297d +0x1773:  mov    0x8(%ebp),%eax
08632980 +0x1776:  mov    %edx,0x2b8(%eax)
08632986 +0x177c:  add    $0x2c,%esp
08632989 +0x177f:  pop    %ebx
0863298a +0x1780:  pop    %esi
0863298b +0x1781:  pop    %edi
0863298c +0x1782:  pop    %ebp
0863298d +0x1783:  ret
```

## 反编译 C

```c
// TimerDispatcher::TimerDispatcher @ 0x863120a

/* TimerDispatcher::TimerDispatcher() */

void __thiscall TimerDispatcher::TimerDispatcher(TimerDispatcher *this)

{
  TimerCheckConn *this_00;
  TimerDBUpdate *this_01;
  TimerStamina *this_02;
  TimerMapLoading *this_03;
  TimerSetResult *this_04;
  TimerDungeonClear *this_05;
  TimerDungeonFail *this_06;
  TimerPartyWalkOutLackUser *this_07;
  TimerPVPWalkOutLackUser *this_08;
  TimerFatigueReset *this_09;
  TimerAvatarExpire *this_10;
  TimerStatisticsLog *this_11;
  TimerCardSelect *this_12;
  TimerClearDungeonReward *this_13;
  TimerClearDungeonScoreScoll *this_14;
  TimerClearDungeonCardSelectRight *this_15;
  TimerPremiumServiceOver *this_16;
  TimerPremiumServiceUpdate *this_17;
  TimerPremiumServiceStart *this_18;
  TimerCheckPaidPCRoomTerm *this_19;
  TimerEPLPReturnVillage *this_20;
  TimerEPLPCommandWait *this_21;
  TimerWarRoomWaitCount *this_22;
  TimerWarRoomReadyLockCount *this_23;
  TimerWarRoomBattlePauseCount *this_24;
  TimerWarRoomResultCount *this_25;
  TImerWarRoomTimeBomb *this_26;
  TimerWarRoomCheckFail *this_27;
  TimerWarRoomChangeHost *this_28;
  TimerBloodSmallRoundRegister *this_29;
  TimerBloodPhaseRegister0 *this_30;
  TimerBloodPhaseRegister1 *this_31;
  TimerBloodPhaseRegister2 *this_32;
  TimerBloodPhaseRegister3 *this_33;
  TimerBloodPhaseRegister4 *this_34;
  TimerBloodPhaseRegister5 *this_35;
  TimerBloodPhaseRegister6 *this_36;
  TimerBloodPhaseRegister7 *this_37;
  TimerBloodPhaseRegister8 *this_38;
  TimerBloodPhaseRegister9 *this_39;
  TimerBloodCrazyMonster *this_40;
  TimerBloodDungeonClearReward *pTVar1;
  TimerUltimateNextRoundStart *this_41;
  TimerEventChristmas *this_42;
  TimerStatisticsDetailChannelInfo *this_43;
  TimerStatisticLevel *this_44;
  TimerScheduleOneHour *this_45;
  TimerSaveLogGamechannel *this_46;
  TimerQueryCounter *this_47;
  TimerNatType *this_48;
  TimerNatTypeUser *this_49;
  TimerCheckMailTimeOut *this_50;
  TimerCreature *this_51;
  TimerForbidChat *this_52;
  TimerForbidMove *this_53;
  TimerScheduleFiveMinPerUser *this_54;
  TimerScheduleTenMinPerUser *this_55;
  TimerQueueSizeLog *this_56;
  TimerScheduleGuildWarEnd *this_57;
  TimerSetPlayResult *this_58;
  TimerStartRelayBattle *this_59;
  TimerBossDieTimeout *this_60;
  TimerEventCoinRefill *this_61;
  TimerPvPDieUserRevive0 *this_62;
  TimerPvPDieUserRevive1 *this_63;
  TimerPvPDieUserRevive2 *this_64;
  TimerPvPDieUserRevive3 *this_65;
  TimerPvPDieUserRevive4 *this_66;
  TimerPvPDieUserRevive5 *this_67;
  TimerPvPDieUserRevive6 *this_68;
  TimerPvPDieUserRevive7 *this_69;
  TimerDungeonDataStatistic *this_70;
  TimerNotResponseUserTimeout *this_71;
  TimerLightServerNotice *this_72;
  TimerInsertUserPlayTime *this_73;
  TimerCheckForcedDisconnect *this_74;
  TimerCheckPvPRoomUser *this_75;
  TimerCheckRecvPvpEndResult *this_76;
  TimerCheckHumanCertifyTimeout *this_77;
  TimerUpdateItemGenerateStatistics *this_78;
  TimerUpdatePvPGrade *this_79;
  TimerDetectDisconnect *this_80;
  TimerCompleteLoadAssaultTimeout *this_81;
  TimerConnectP2PAssaultTimeout *this_82;
  TimerEndAssault *this_83;
  TimerCloseAssault *this_84;
  TimerCompleteLoadAfterAssaultTimeout *this_85;
  TimerConnectP2PAfterAssaultTimeout *this_86;
  TimerDeathTower *pTVar2;
  TimerDeathTowerTopRankerReload *this_87;
  TimerScheduleTenSecond *this_88;
  TimerFinishItemEffect *this_89;
  TimerStartMatching *this_90;
  TimerGlobalEffectItemBegin *this_91;
  TimerGlobalEffectItemTimeout *this_92;
  TimerVendingMachineItemNotify *this_93;
  TimerConnectMonitorServer *this_94;
  TimerAssaultSuperPowerState *pTVar3;
  TimerNPCMoodChange *this_95;
  TimerElevatorDungeon *this_96;
  TimerRefreshPowerWarProcessInfo *this_97;
  TimerGeneratePowerUp *this_98;
  TimerGeneratePowerUpNotiTime *this_99;
  TimerCheckPowerWarAbuser *this_x00100;
  TimerSetPunishUser *this_x00101;
  TimerSetTradePunishUser *this_x00102;
  TimerRevivalCharac *this_x00103;
  TimerRequestExit *this_x00104;
  TimerVillageMonsterUpdateRate *this_x00105;
  TimerVillageMonsterRegen *this_x00106;
  TimerStartVillageAttacked *this_x00107;
  TimerVillageAttackedPlayTimeout *this_x00108;
  TimerItemUnlockWaiting *this_x00109;
  TimerUpdateCompoundEmblemStatics *this_x00110;
  TimerStartExpEventAfterVillageAttack *this_x00111;
  Timer_Security_NonClient_CheckResponse *this_x00112;
  Timer_Midnight *this_x00113;
  TimerEndPowerWarVictoriousReward *this_x00114;
  Timer_TenMinuteSchedule *this_x00115;
  Timer_UpdateOnlinePreliminaryTeam *this_x00116;
  Timer_SecretShopStatistic *this_x00117;
  Timer_DailySchedule *this_x00118;
  Timer_ConnectP2PPvPTimeout *this_x00119;
  Timer_RoutingItemWait *this_x00120;
  Timer_PcRoomAuthRetry *this_x00121;
  Timer_DungeonInoutOpenTime *this_x00122;
  Timer_DungeonInoutCloseTime *this_x00123;
  Timer_FairPvPRematch *this_x00124;
  Timer_ReturnUserTimeout *this_x00125;
  Timer_HadesHeartBeat *this_x00126;
  Timer_TOD_Send_ClearReward *this_x00127;
  Timer_OneADayItemShop *this_x00128;
  Timer_Schedule_MidNight *this_x00129;
  Timer_Send_Ontime_Reward *this_x00130;
  Timer_EventManagement *this_x00131;
  Timer_QuickPartyWaitingPartyMatching *this_x00132;
  Timer_QuickPartyWaitingStartGame *this_x00133;
  Timer_AssaultGhostTimer *this_x00134;
  Timer_GenerateCaptchaData *this_x00135;
  Timer_TournamentDugeonClearStateNotiReward *this_x00136;
  Timer_TournametDungeonClearStateSelect *this_x00137;
  Timer_TowerOnTime *pTVar4;
  Timer_NoticeEmergencyPatchMessage *this_x00138;
  Timer_MainTick *this_x00139;
  Timer_StageControl *pTVar5;
  Timer_DungeonStatisticEntrance_Hour *this_x00140;
  Timer_RefreshServerState *this_x00141;
  Timer_StayTimeEvent *this_x00142;
  Timer_CreateDnfDbLoad *this_x00143;
  int local_20;
  
  for (local_20 = 0; local_20 < 0xaf; local_20 = local_20 + 1) {
    *(undefined4 *)(this + local_20 * 4) = 0;
  }
  this_00 = operator_new(4);
  TimerCheckConn::TimerCheckConn(this_00);
  *(TimerCheckConn **)this = this_00;
  this_01 = operator_new(4);
  TimerDBUpdate::TimerDBUpdate(this_01);
  *(TimerDBUpdate **)(this + 4) = this_01;
  this_02 = operator_new(4);
  TimerStamina::TimerStamina(this_02);
  *(TimerStamina **)(this + 8) = this_02;
  this_03 = operator_new(4);
  TimerMapLoading::TimerMapLoading(this_03);
  *(TimerMapLoading **)(this + 0x2c) = this_03;
  this_04 = operator_new(4);
  TimerSetResult::TimerSetResult(this_04);
  *(TimerSetResult **)(this + 0x30) = this_04;
  this_05 = operator_new(4);
  TimerDungeonClear::TimerDungeonClear(this_05);
  *(TimerDungeonClear **)(this + 0x34) = this_05;
  this_06 = operator_new(4);
  TimerDungeonFail::TimerDungeonFail(this_06);
  *(TimerDungeonFail **)(this + 0x38) = this_06;
  this_07 = operator_new(4);
  TimerPartyWalkOutLackUser::TimerPartyWalkOutLackUser(this_07);
  *(TimerPartyWalkOutLackUser **)(this + 0x3c) = this_07;
  this_08 = operator_new(4);
  TimerPVPWalkOutLackUser::TimerPVPWalkOutLackUser(this_08);
  *(TimerPVPWalkOutLackUser **)(this + 0xc4) = this_08;
  this_09 = operator_new(4);
  TimerFatigueReset::TimerFatigueReset(this_09);
  *(TimerFatigueReset **)(this + 0x140) = this_09;
  this_10 = operator_new(4);
  TimerAvatarExpire::TimerAvatarExpire(this_10);
  *(TimerAvatarExpire **)(this + 0x144) = this_10;
  this_11 = operator_new(4);
  TimerStatisticsLog::TimerStatisticsLog(this_11);
  *(TimerStatisticsLog **)(this + 0x148) = this_11;
  this_12 = operator_new(4);
  TimerCardSelect::TimerCardSelect(this_12);
  *(TimerCardSelect **)(this + 0x40) = this_12;
  this_13 = operator_new(4);
  TimerClearDungeonReward::TimerClearDungeonReward(this_13);
  *(TimerClearDungeonReward **)(this + 0x44) = this_13;
  this_14 = operator_new(4);
  TimerClearDungeonScoreScoll::TimerClearDungeonScoreScoll(this_14);
  *(TimerClearDungeonScoreScoll **)(this + 0x48) = this_14;
  this_15 = operator_new(4);
  TimerClearDungeonCardSelectRight::TimerClearDungeonCardSelectRight(this_15);
  *(TimerClearDungeonCardSelectRight **)(this + 0x4c) = this_15;
  this_16 = operator_new(4);
  TimerPremiumServiceOver::TimerPremiumServiceOver(this_16);
  *(TimerPremiumServiceOver **)(this + 0x10) = this_16;
  this_17 = operator_new(4);
  TimerPremiumServiceUpdate::TimerPremiumServiceUpdate(this_17);
  *(TimerPremiumServiceUpdate **)(this + 0x14) = this_17;
  this_18 = operator_new(4);
  TimerPremiumServiceStart::TimerPremiumServiceStart(this_18);
  *(TimerPremiumServiceStart **)(this + 0x18) = this_18;
  this_19 = operator_new(4);
  TimerCheckPaidPCRoomTerm::TimerCheckPaidPCRoomTerm(this_19);
  *(TimerCheckPaidPCRoomTerm **)(this + 0x1c) = this_19;
  this_20 = operator_new(4);
  TimerEPLPReturnVillage::TimerEPLPReturnVillage(this_20);
  *(TimerEPLPReturnVillage **)(this + 0x50) = this_20;
  this_21 = operator_new(4);
  TimerEPLPCommandWait::TimerEPLPCommandWait(this_21);
  *(TimerEPLPCommandWait **)(this + 0x54) = this_21;
  this_22 = operator_new(4);
  TimerWarRoomWaitCount::TimerWarRoomWaitCount(this_22);
  *(TimerWarRoomWaitCount **)(this + 0x104) = this_22;
  this_23 = operator_new(4);
  TimerWarRoomReadyLockCount::TimerWarRoomReadyLockCount(this_23);
  *(TimerWarRoomReadyLockCount **)(this + 0x108) = this_23;
  this_24 = operator_new(4);
  TimerWarRoomBattlePauseCount::TimerWarRoomBattlePauseCount(this_24);
  *(TimerWarRoomBattlePauseCount **)(this + 0x10c) = this_24;
  this_25 = operator_new(4);
  TimerWarRoomResultCount::TimerWarRoomResultCount(this_25);
  *(TimerWarRoomResultCount **)(this + 0x110) = this_25;
  this_26 = operator_new(4);
  TImerWarRoomTimeBomb::TImerWarRoomTimeBomb(this_26);
  *(TImerWarRoomTimeBomb **)(this + 0x114) = this_26;
  this_27 = operator_new(4);
  TimerWarRoomCheckFail::TimerWarRoomCheckFail(this_27);
  *(TimerWarRoomCheckFail **)(this + 0x118) = this_27;
  this_28 = operator_new(4);
  TimerWarRoomChangeHost::TimerWarRoomChangeHost(this_28);
  *(TimerWarRoomChangeHost **)(this + 0x11c) = this_28;
  this_29 = operator_new(4);
  TimerBloodSmallRoundRegister::TimerBloodSmallRoundRegister(this_29);
  *(TimerBloodSmallRoundRegister **)(this + 0x58) = this_29;
  this_30 = operator_new(4);
  TimerBloodPhaseRegister0::TimerBloodPhaseRegister0(this_30);
  *(TimerBloodPhaseRegister0 **)(this + 0x5c) = this_30;
  this_31 = operator_new(4);
  TimerBloodPhaseRegister1::TimerBloodPhaseRegister1(this_31);
  *(TimerBloodPhaseRegister1 **)(this + 0x60) = this_31;
  this_32 = operator_new(4);
  TimerBloodPhaseRegister2::TimerBloodPhaseRegister2(this_32);
  *(TimerBloodPhaseRegister2 **)(this + 100) = this_32;
  this_33 = operator_new(4);
  TimerBloodPhaseRegister3::TimerBloodPhaseRegister3(this_33);
  *(TimerBloodPhaseRegister3 **)(this + 0x68) = this_33;
  this_34 = operator_new(4);
  TimerBloodPhaseRegister4::TimerBloodPhaseRegister4(this_34);
  *(TimerBloodPhaseRegister4 **)(this + 0x6c) = this_34;
  this_35 = operator_new(4);
  TimerBloodPhaseRegister5::TimerBloodPhaseRegister5(this_35);
  *(TimerBloodPhaseRegister5 **)(this + 0x70) = this_35;
  this_36 = operator_new(4);
  TimerBloodPhaseRegister6::TimerBloodPhaseRegister6(this_36);
  *(TimerBloodPhaseRegister6 **)(this + 0x74) = this_36;
  this_37 = operator_new(4);
  TimerBloodPhaseRegister7::TimerBloodPhaseRegister7(this_37);
  *(TimerBloodPhaseRegister7 **)(this + 0x78) = this_37;
  this_38 = operator_new(4);
  TimerBloodPhaseRegister8::TimerBloodPhaseRegister8(this_38);
  *(TimerBloodPhaseRegister8 **)(this + 0x7c) = this_38;
  this_39 = operator_new(4);
  TimerBloodPhaseRegister9::TimerBloodPhaseRegister9(this_39);
  *(TimerBloodPhaseRegister9 **)(this + 0x80) = this_39;
  this_40 = operator_new(4);
  TimerBloodCrazyMonster::TimerBloodCrazyMonster(this_40);
  *(TimerBloodCrazyMonster **)(this + 0x84) = this_40;
  pTVar1 = operator_new(4);
  TimerBloodDungeonClearReward::TimerBloodDungeonClearReward(pTVar1);
  *(TimerBloodDungeonClearReward **)(this + 0x88) = pTVar1;
  pTVar1 = operator_new(4);
  TimerBloodDungeonClearReward::TimerBloodDungeonClearReward(pTVar1);
  *(TimerBloodDungeonClearReward **)(this + 0x8c) = pTVar1;
  pTVar1 = operator_new(4);
  TimerBloodDungeonClearReward::TimerBloodDungeonClearReward(pTVar1);
  *(TimerBloodDungeonClearReward **)(this + 0x90) = pTVar1;
  pTVar1 = operator_new(4);
  TimerBloodDungeonClearReward::TimerBloodDungeonClearReward(pTVar1);
  *(TimerBloodDungeonClearReward **)(this + 0x94) = pTVar1;
  this_41 = operator_new(4);
  TimerUltimateNextRoundStart::TimerUltimateNextRoundStart(this_41);
  *(TimerUltimateNextRoundStart **)(this + 0x98) = this_41;
  this_42 = operator_new(4);
  TimerEventChristmas::TimerEventChristmas(this_42);
  *(TimerEventChristmas **)(this + 0x14c) = this_42;
  this_43 = operator_new(4);
  TimerStatisticsDetailChannelInfo::TimerStatisticsDetailChannelInfo(this_43);
  *(TimerStatisticsDetailChannelInfo **)(this + 0x150) = this_43;
  this_44 = operator_new(4);
  TimerStatisticLevel::TimerStatisticLevel(this_44);
  *(TimerStatisticLevel **)(this + 0x154) = this_44;
  this_45 = operator_new(4);
  TimerScheduleOneHour::TimerScheduleOneHour(this_45);
  *(TimerScheduleOneHour **)(this + 0x158) = this_45;
  this_46 = operator_new(4);
  TimerSaveLogGamechannel::TimerSaveLogGamechannel(this_46);
  *(TimerSaveLogGamechannel **)(this + 0x160) = this_46;
  this_47 = operator_new(4);
  TimerQueryCounter::TimerQueryCounter(this_47);
  *(TimerQueryCounter **)(this + 0x164) = this_47;
  this_48 = operator_new(4);
  TimerNatType::TimerNatType(this_48);
  *(TimerNatType **)(this + 0x168) = this_48;
  this_49 = operator_new(4);
  TimerNatTypeUser::TimerNatTypeUser(this_49);
  *(TimerNatTypeUser **)(this + 0x16c) = this_49;
  this_50 = operator_new(4);
  TimerCheckMailTimeOut::TimerCheckMailTimeOut(this_50);
  *(TimerCheckMailTimeOut **)(this + 0x20) = this_50;
  this_51 = operator_new(4);
  TimerCreature::TimerCreature(this_51);
  *(TimerCreature **)(this + 0x170) = this_51;
  this_52 = operator_new(4);
  TimerForbidChat::TimerForbidChat(this_52);
  *(TimerForbidChat **)(this + 0x174) = this_52;
  this_53 = operator_new(4);
  TimerForbidMove::TimerForbidMove(this_53);
  *(TimerForbidMove **)(this + 0x178) = this_53;
  this_54 = operator_new(4);
  TimerScheduleFiveMinPerUser::TimerScheduleFiveMinPerUser(this_54);
  *(TimerScheduleFiveMinPerUser **)(this + 0x17c) = this_54;
  this_55 = operator_new(4);
  TimerScheduleTenMinPerUser::TimerScheduleTenMinPerUser(this_55);
  *(TimerScheduleTenMinPerUser **)(this + 0x180) = this_55;
  this_56 = operator_new(4);
  TimerQueueSizeLog::TimerQueueSizeLog(this_56);
  *(TimerQueueSizeLog **)(this + 0x184) = this_56;
  this_57 = operator_new(4);
  TimerScheduleGuildWarEnd::TimerScheduleGuildWarEnd(this_57);
  *(TimerScheduleGuildWarEnd **)(this + 0x188) = this_57;
  this_58 = operator_new(4);
  TimerSetPlayResult::TimerSetPlayResult(this_58);
  *(TimerSetPlayResult **)(this + 0xa4) = this_58;
  this_59 = operator_new(4);
  TimerStartRelayBattle::TimerStartRelayBattle(this_59);
  *(TimerStartRelayBattle **)(this + 0x18c) = this_59;
  this_60 = operator_new(4);
  TimerBossDieTimeout::TimerBossDieTimeout(this_60);
  *(TimerBossDieTimeout **)(this + 400) = this_60;
  this_61 = operator_new(4);
  TimerEventCoinRefill::TimerEventCoinRefill(this_61);
  *(TimerEventCoinRefill **)(this + 0x194) = this_61;
  this_62 = operator_new(4);
  TimerPvPDieUserRevive0::TimerPvPDieUserRevive0(this_62);
  *(TimerPvPDieUserRevive0 **)(this + 0xcc) = this_62;
  this_63 = operator_new(4);
  TimerPvPDieUserRevive1::TimerPvPDieUserRevive1(this_63);
  *(TimerPvPDieUserRevive1 **)(this + 0xd0) = this_63;
  this_64 = operator_new(4);
  TimerPvPDieUserRevive2::TimerPvPDieUserRevive2(this_64);
  *(TimerPvPDieUserRevive2 **)(this + 0xd4) = this_64;
  this_65 = operator_new(4);
  TimerPvPDieUserRevive3::TimerPvPDieUserRevive3(this_65);
  *(TimerPvPDieUserRevive3 **)(this + 0xd8) = this_65;
  this_66 = operator_new(4);
  TimerPvPDieUserRevive4::TimerPvPDieUserRevive4(this_66);
  *(TimerPvPDieUserRevive4 **)(this + 0xdc) = this_66;
  this_67 = operator_new(4);
  TimerPvPDieUserRevive5::TimerPvPDieUserRevive5(this_67);
  *(TimerPvPDieUserRevive5 **)(this + 0xe0) = this_67;
  this_68 = operator_new(4);
  TimerPvPDieUserRevive6::TimerPvPDieUserRevive6(this_68);
  *(TimerPvPDieUserRevive6 **)(this + 0xe4) = this_68;
  this_69 = operator_new(4);
  TimerPvPDieUserRevive7::TimerPvPDieUserRevive7(this_69);
  *(TimerPvPDieUserRevive7 **)(this + 0xe8) = this_69;
  this_70 = operator_new(4);
  TimerDungeonDataStatistic::TimerDungeonDataStatistic(this_70);
  *(TimerDungeonDataStatistic **)(this + 0x198) = this_70;
  this_71 = operator_new(4);
  TimerNotResponseUserTimeout::TimerNotResponseUserTimeout(this_71);
  *(TimerNotResponseUserTimeout **)(this + 0x19c) = this_71;
  this_72 = operator_new(4);
  TimerLightServerNotice::TimerLightServerNotice(this_72);
  *(TimerLightServerNotice **)(this + 0x1a0) = this_72;
  this_73 = operator_new(4);
  TimerInsertUserPlayTime::TimerInsertUserPlayTime(this_73);
  *(TimerInsertUserPlayTime **)(this + 0x1a4) = this_73;
  this_74 = operator_new(4);
  TimerCheckForcedDisconnect::TimerCheckForcedDisconnect(this_74);
  *(TimerCheckForcedDisconnect **)(this + 0x1a8) = this_74;
  this_75 = operator_new(4);
  TimerCheckPvPRoomUser::TimerCheckPvPRoomUser(this_75);
  *(TimerCheckPvPRoomUser **)(this + 0xf0) = this_75;
  this_76 = operator_new(4);
  TimerCheckRecvPvpEndResult::TimerCheckRecvPvpEndResult(this_76);
  *(TimerCheckRecvPvpEndResult **)(this + 0xf4) = this_76;
  this_77 = operator_new(4);
  TimerCheckHumanCertifyTimeout::TimerCheckHumanCertifyTimeout(this_77);
  *(TimerCheckHumanCertifyTimeout **)(this + 0x24) = this_77;
  this_78 = operator_new(4);
  TimerUpdateItemGenerateStatistics::TimerUpdateItemGenerateStatistics(this_78);
  *(TimerUpdateItemGenerateStatistics **)(this + 0x1ac) = this_78;
  this_79 = operator_new(4);
  TimerUpdatePvPGrade::TimerUpdatePvPGrade(this_79);
  *(TimerUpdatePvPGrade **)(this + 0x1b0) = this_79;
  this_80 = operator_new(4);
  TimerDetectDisconnect::TimerDetectDisconnect(this_80);
  *(TimerDetectDisconnect **)(this + 0x1b4) = this_80;
  this_81 = operator_new(4);
  TimerCompleteLoadAssaultTimeout::TimerCompleteLoadAssaultTimeout(this_81);
  *(TimerCompleteLoadAssaultTimeout **)(this + 0x1b8) = this_81;
  this_82 = operator_new(4);
  TimerConnectP2PAssaultTimeout::TimerConnectP2PAssaultTimeout(this_82);
  *(TimerConnectP2PAssaultTimeout **)(this + 0x1bc) = this_82;
  this_83 = operator_new(4);
  TimerEndAssault::TimerEndAssault(this_83);
  *(TimerEndAssault **)(this + 0x1c0) = this_83;
  this_84 = operator_new(4);
  TimerCloseAssault::TimerCloseAssault(this_84);
  *(TimerCloseAssault **)(this + 0x1c4) = this_84;
  this_85 = operator_new(4);
  TimerCompleteLoadAfterAssaultTimeout::TimerCompleteLoadAfterAssaultTimeout(this_85);
  *(TimerCompleteLoadAfterAssaultTimeout **)(this + 0xa8) = this_85;
  this_86 = operator_new(4);
  TimerConnectP2PAfterAssaultTimeout::TimerConnectP2PAfterAssaultTimeout(this_86);
  *(TimerConnectP2PAfterAssaultTimeout **)(this + 0x1c8) = this_86;
  pTVar2 = operator_new(4);
  TimerDeathTower::TimerDeathTower(pTVar2);
  *(TimerDeathTower **)(this + 0x124) = pTVar2;
  pTVar2 = operator_new(4);
  TimerDeathTower::TimerDeathTower(pTVar2);
  *(TimerDeathTower **)(this + 300) = pTVar2;
  pTVar2 = operator_new(4);
  TimerDeathTower::TimerDeathTower(pTVar2);
  *(TimerDeathTower **)(this + 0x130) = pTVar2;
  pTVar2 = operator_new(4);
  TimerDeathTower::TimerDeathTower(pTVar2);
  *(TimerDeathTower **)(this + 0x134) = pTVar2;
  pTVar2 = operator_new(4);
  TimerDeathTower::TimerDeathTower(pTVar2);
  *(TimerDeathTower **)(this + 0x138) = pTVar2;
  pTVar2 = operator_new(4);
  TimerDeathTower::TimerDeathTower(pTVar2);
  *(TimerDeathTower **)(this + 0x128) = pTVar2;
  this_87 = operator_new(4);
  TimerDeathTowerTopRankerReload::TimerDeathTowerTopRankerReload(this_87);
  *(TimerDeathTowerTopRankerReload **)(this + 0x1cc) = this_87;
  this_88 = operator_new(4);
  TimerScheduleTenSecond::TimerScheduleTenSecond(this_88);
  *(TimerScheduleTenSecond **)(this + 0x15c) = this_88;
  this_89 = operator_new(4);
  TimerFinishItemEffect::TimerFinishItemEffect(this_89);
  *(TimerFinishItemEffect **)(this + 0x1d8) = this_89;
  this_90 = operator_new(4);
  TimerStartMatching::TimerStartMatching(this_90);
  *(TimerStartMatching **)(this + 0x1e4) = this_90;
  this_91 = operator_new(4);
  TimerGlobalEffectItemBegin::TimerGlobalEffectItemBegin(this_91);
  *(TimerGlobalEffectItemBegin **)(this + 0x1dc) = this_91;
  this_92 = operator_new(4);
  TimerGlobalEffectItemTimeout::TimerGlobalEffectItemTimeout(this_92);
  *(TimerGlobalEffectItemTimeout **)(this + 0x1e0) = this_92;
  this_93 = operator_new(4);
  TimerVendingMachineItemNotify::TimerVendingMachineItemNotify(this_93);
  *(TimerVendingMachineItemNotify **)(this + 0x28) = this_93;
  this_94 = operator_new(4);
  TimerConnectMonitorServer::TimerConnectMonitorServer(this_94);
  *(TimerConnectMonitorServer **)(this + 0x1e8) = this_94;
  pTVar3 = operator_new(4);
  TimerAssaultSuperPowerState::TimerAssaultSuperPowerState(pTVar3);
  *(TimerAssaultSuperPowerState **)(this + 0x1f8) = pTVar3;
  pTVar3 = operator_new(4);
  TimerAssaultSuperPowerState::TimerAssaultSuperPowerState(pTVar3);
  *(TimerAssaultSuperPowerState **)(this + 0x1fc) = pTVar3;
  this_95 = operator_new(4);
  TimerNPCMoodChange::TimerNPCMoodChange(this_95);
  *(TimerNPCMoodChange **)(this + 0x1d0) = this_95;
  this_96 = operator_new(4);
  TimerElevatorDungeon::TimerElevatorDungeon(this_96);
  *(TimerElevatorDungeon **)(this + 0xa0) = this_96;
  this_97 = operator_new(4);
  TimerRefreshPowerWarProcessInfo::TimerRefreshPowerWarProcessInfo(this_97);
  *(TimerRefreshPowerWarProcessInfo **)(this + 0x1ec) = this_97;
  this_98 = operator_new(0x1c);
                    /* try { // try from 086321d6 to 086321da has its CatchHandler @ 086321dd */
  TimerGeneratePowerUp::TimerGeneratePowerUp(this_98);
  *(TimerGeneratePowerUp **)(this + 0x1f0) = this_98;
  this_99 = operator_new(4);
  TimerGeneratePowerUpNotiTime::TimerGeneratePowerUpNotiTime(this_99);
  *(TimerGeneratePowerUpNotiTime **)(this + 500) = this_99;
  this_x00100 = operator_new(4);
  TimerCheckPowerWarAbuser::TimerCheckPowerWarAbuser(this_x00100);
  *(TimerCheckPowerWarAbuser **)(this + 0x200) = this_x00100;
  this_x00101 = operator_new(4);
  TimerSetPunishUser::TimerSetPunishUser(this_x00101);
  *(TimerSetPunishUser **)(this + 0x204) = this_x00101;
  this_x00102 = operator_new(4);
  TimerSetTradePunishUser::TimerSetTradePunishUser(this_x00102);
  *(TimerSetTradePunishUser **)(this + 0x25c) = this_x00102;
  this_x00103 = operator_new(4);
  TimerRevivalCharac::TimerRevivalCharac(this_x00103);
  *(TimerRevivalCharac **)(this + 0x208) = this_x00103;
  this_x00104 = operator_new(4);
  TimerRequestExit::TimerRequestExit(this_x00104);
  *(TimerRequestExit **)(this + 0x210) = this_x00104;
  this_x00105 = operator_new(4);
  TimerVillageMonsterUpdateRate::TimerVillageMonsterUpdateRate(this_x00105);
  *(TimerVillageMonsterUpdateRate **)(this + 0x214) = this_x00105;
  this_x00106 = operator_new(4);
  TimerVillageMonsterRegen::TimerVillageMonsterRegen(this_x00106);
  *(TimerVillageMonsterRegen **)(this + 0x218) = this_x00106;
  this_x00107 = operator_new(4);
  TimerStartVillageAttacked::TimerStartVillageAttacked(this_x00107);
  *(TimerStartVillageAttacked **)(this + 0x21c) = this_x00107;
  this_x00108 = operator_new(4);
  TimerVillageAttackedPlayTimeout::TimerVillageAttackedPlayTimeout(this_x00108);
  *(TimerVillageAttackedPlayTimeout **)(this + 0x9c) = this_x00108;
  this_x00109 = operator_new(4);
  TimerItemUnlockWaiting::TimerItemUnlockWaiting(this_x00109);
  *(TimerItemUnlockWaiting **)(this + 0x220) = this_x00109;
  this_x00110 = operator_new(4);
  TimerUpdateCompoundEmblemStatics::TimerUpdateCompoundEmblemStatics(this_x00110);
  *(TimerUpdateCompoundEmblemStatics **)(this + 0x224) = this_x00110;
  this_x00111 = operator_new(4);
  TimerStartExpEventAfterVillageAttack::TimerStartExpEventAfterVillageAttack(this_x00111);
  *(TimerStartExpEventAfterVillageAttack **)(this + 0x228) = this_x00111;
  this_x00112 = operator_new(4);
  Timer_Security_NonClient_CheckResponse::Timer_Security_NonClient_CheckResponse(this_x00112);
  *(Timer_Security_NonClient_CheckResponse **)(this + 0x230) = this_x00112;
  this_x00113 = operator_new(4);
  Timer_Midnight::Timer_Midnight(this_x00113);
  *(Timer_Midnight **)(this + 0x234) = this_x00113;
  this_x00114 = operator_new(4);
  TimerEndPowerWarVictoriousReward::TimerEndPowerWarVictoriousReward(this_x00114);
  *(TimerEndPowerWarVictoriousReward **)(this + 0x22c) = this_x00114;
  this_x00115 = operator_new(4);
  Timer_TenMinuteSchedule::Timer_TenMinuteSchedule(this_x00115);
  *(Timer_TenMinuteSchedule **)(this + 0x238) = this_x00115;
  this_x00116 = operator_new(4);
  Timer_UpdateOnlinePreliminaryTeam::Timer_UpdateOnlinePreliminaryTeam(this_x00116);
  *(Timer_UpdateOnlinePreliminaryTeam **)(this + 0x23c) = this_x00116;
  this_x00117 = operator_new(4);
  Timer_SecretShopStatistic::Timer_SecretShopStatistic(this_x00117);
  *(Timer_SecretShopStatistic **)(this + 0x240) = this_x00117;
  this_x00118 = operator_new(4);
  Timer_DailySchedule::Timer_DailySchedule(this_x00118);
  *(Timer_DailySchedule **)(this + 0x244) = this_x00118;
  this_x00119 = operator_new(4);
  Timer_ConnectP2PPvPTimeout::Timer_ConnectP2PPvPTimeout(this_x00119);
  *(Timer_ConnectP2PPvPTimeout **)(this + 0xec) = this_x00119;
  this_x00120 = operator_new(4);
  Timer_RoutingItemWait::Timer_RoutingItemWait(this_x00120);
  *(Timer_RoutingItemWait **)(this + 0xac) = this_x00120;
  this_x00121 = operator_new(4);
  Timer_PcRoomAuthRetry::Timer_PcRoomAuthRetry(this_x00121);
  *(Timer_PcRoomAuthRetry **)(this + 0x248) = this_x00121;
  this_x00122 = operator_new(4);
  Timer_DungeonInoutOpenTime::Timer_DungeonInoutOpenTime(this_x00122);
  *(Timer_DungeonInoutOpenTime **)(this + 0x24c) = this_x00122;
  this_x00123 = operator_new(4);
  Timer_DungeonInoutCloseTime::Timer_DungeonInoutCloseTime(this_x00123);
  *(Timer_DungeonInoutCloseTime **)(this + 0x250) = this_x00123;
  this_x00124 = operator_new(4);
  Timer_FairPvPRematch::Timer_FairPvPRematch(this_x00124);
  *(Timer_FairPvPRematch **)(this + 0xf8) = this_x00124;
  this_x00125 = operator_new(4);
  Timer_ReturnUserTimeout::Timer_ReturnUserTimeout(this_x00125);
  *(Timer_ReturnUserTimeout **)(this + 0x254) = this_x00125;
  this_x00126 = operator_new(4);
  Timer_HadesHeartBeat::Timer_HadesHeartBeat(this_x00126);
  *(Timer_HadesHeartBeat **)(this + 600) = this_x00126;
  this_x00127 = operator_new(4);
  Timer_TOD_Send_ClearReward::Timer_TOD_Send_ClearReward(this_x00127);
  *(Timer_TOD_Send_ClearReward **)(this + 0xb0) = this_x00127;
  this_x00128 = operator_new(4);
  Timer_OneADayItemShop::Timer_OneADayItemShop(this_x00128);
  *(Timer_OneADayItemShop **)(this + 0x264) = this_x00128;
  this_x00129 = operator_new(4);
  Timer_Schedule_MidNight::Timer_Schedule_MidNight(this_x00129);
  *(Timer_Schedule_MidNight **)(this + 0x268) = this_x00129;
  this_x00130 = operator_new(4);
  Timer_Send_Ontime_Reward::Timer_Send_Ontime_Reward(this_x00130);
  *(Timer_Send_Ontime_Reward **)(this + 0x26c) = this_x00130;
  this_x00131 = operator_new(4);
  Timer_EventManagement::Timer_EventManagement(this_x00131);
  *(Timer_EventManagement **)(this + 0x270) = this_x00131;
  this_x00132 = operator_new(4);
  Timer_QuickPartyWaitingPartyMatching::Timer_QuickPartyWaitingPartyMatching(this_x00132);
  *(Timer_QuickPartyWaitingPartyMatching **)(this + 0x278) = this_x00132;
  this_x00133 = operator_new(4);
  Timer_QuickPartyWaitingStartGame::Timer_QuickPartyWaitingStartGame(this_x00133);
  *(Timer_QuickPartyWaitingStartGame **)(this + 0xb4) = this_x00133;
  this_x00134 = operator_new(4);
  Timer_AssaultGhostTimer::Timer_AssaultGhostTimer(this_x00134);
  *(Timer_AssaultGhostTimer **)(this + 0x280) = this_x00134;
  this_x00135 = operator_new(4);
  Timer_GenerateCaptchaData::Timer_GenerateCaptchaData(this_x00135);
  *(Timer_GenerateCaptchaData **)(this + 0x284) = this_x00135;
  this_x00136 = operator_new(4);
  Timer_TournamentDugeonClearStateNotiReward::Timer_TournamentDugeonClearStateNotiReward
            (this_x00136);
  *(Timer_TournamentDugeonClearStateNotiReward **)(this + 0xb8) = this_x00136;
  this_x00137 = operator_new(4);
  Timer_TournametDungeonClearStateSelect::Timer_TournametDungeonClearStateSelect(this_x00137);
  *(Timer_TournametDungeonClearStateSelect **)(this + 0xbc) = this_x00137;
  pTVar4 = operator_new(4);
  Timer_TowerOnTime::Timer_TowerOnTime(pTVar4);
  *(Timer_TowerOnTime **)(this + 0x28c) = pTVar4;
  pTVar4 = operator_new(4);
  Timer_TowerOnTime::Timer_TowerOnTime(pTVar4);
  *(Timer_TowerOnTime **)(this + 0x290) = pTVar4;
  pTVar4 = operator_new(4);
  Timer_TowerOnTime::Timer_TowerOnTime(pTVar4);
  *(Timer_TowerOnTime **)(this + 0x294) = pTVar4;
  this_x00138 = operator_new(8);
  Timer_NoticeEmergencyPatchMessage::Timer_NoticeEmergencyPatchMessage(this_x00138);
  *(Timer_NoticeEmergencyPatchMessage **)(this + 0x288) = this_x00138;
  this_x00139 = operator_new(4);
  advancealtar::Timer_MainTick::Timer_MainTick(this_x00139);
  *(Timer_MainTick **)(this + 0x298) = this_x00139;
  pTVar5 = operator_new(4);
  advancealtar::Timer_StageControl::Timer_StageControl(pTVar5);
  *(Timer_StageControl **)(this + 0x29c) = pTVar5;
  pTVar5 = operator_new(4);
  advancealtar::Timer_StageControl::Timer_StageControl(pTVar5);
  *(Timer_StageControl **)(this + 0x2a0) = pTVar5;
  pTVar5 = operator_new(4);
  advancealtar::Timer_StageControl::Timer_StageControl(pTVar5);
  *(Timer_StageControl **)(this + 0x2a4) = pTVar5;
  pTVar5 = operator_new(4);
  advancealtar::Timer_StageControl::Timer_StageControl(pTVar5);
  *(Timer_StageControl **)(this + 0x2a8) = pTVar5;
  this_x00140 = operator_new(4);
  Timer_DungeonStatisticEntrance_Hour::Timer_DungeonStatisticEntrance_Hour(this_x00140);
  *(Timer_DungeonStatisticEntrance_Hour **)(this + 0x2ac) = this_x00140;
  this_x00141 = operator_new(4);
  Timer_RefreshServerState::Timer_RefreshServerState(this_x00141);
  *(Timer_RefreshServerState **)(this + 0x2b0) = this_x00141;
  this_x00142 = operator_new(4);
  Timer_StayTimeEvent::Timer_StayTimeEvent(this_x00142);
  *(Timer_StayTimeEvent **)(this + 0x2b4) = this_x00142;
  this_x00143 = operator_new(4);
  Timer_CreateDnfDbLoad::Timer_CreateDnfDbLoad(this_x00143);
  *(Timer_CreateDnfDbLoad **)(this + 0x2b8) = this_x00143;
  return;
}
```
