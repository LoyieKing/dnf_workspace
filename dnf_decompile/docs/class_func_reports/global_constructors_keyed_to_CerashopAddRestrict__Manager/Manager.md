# Manager

`_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev`

`global constructors keyed to CerashopAddRestrict::Manager::Manager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CerashopAddRestrict::Manager` | `0x080e225a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e225a  _GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev
#           global constructors keyed to CerashopAddRestrict::Manager::Manager()
# range [0x080e225a, 0x080e477b]
080e225a +0x0000:  push   %ebp
080e225b +0x0001:  mov    %esp,%ebp
080e225d +0x0003:  sub    $0x18,%esp
080e2260 +0x0006:  movl   $0xffff,0x4(%esp)
080e2268 +0x000e:  movl   $0x1,(%esp)
080e226f +0x0015:  call   080e221a <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080e2274 +0x001a:  leave
080e2275 +0x001b:  ret
080e2276 +0x001c:  push   %ebp
080e2277 +0x001d:  mov    %esp,%ebp
080e2279 +0x001f:  sub    $0x18,%esp
080e227c +0x0022:  mov    0x8(%ebp),%eax
080e227f +0x0025:  mov    (%eax),%eax
080e2281 +0x0027:  mov    0xc(%ebp),%edx
080e2284 +0x002a:  mov    %edx,0x4(%esp)
080e2288 +0x002e:  mov    %eax,(%esp)
080e228b +0x0031:  call   0861c242 <_ZN6StreamlsEl>  ; Stream::operator<<(long)
080e2290 +0x0036:  leave
080e2291 +0x0037:  ret
080e2292 +0x0038:  push   %ebp
080e2293 +0x0039:  mov    %esp,%ebp
080e2295 +0x003b:  sub    $0x18,%esp
080e2298 +0x003e:  mov    0x8(%ebp),%eax
080e229b +0x0041:  mov    (%eax),%eax
080e229d +0x0043:  mov    0xc(%ebp),%edx
080e22a0 +0x0046:  mov    %edx,0x4(%esp)
080e22a4 +0x004a:  mov    %eax,(%esp)
080e22a7 +0x004d:  call   0861c3b8 <_ZN6StreamlsEj>  ; Stream::operator<<(unsigned int)
080e22ac +0x0052:  leave
080e22ad +0x0053:  ret
080e22ae +0x0054:  push   %ebp
080e22af +0x0055:  mov    %esp,%ebp
080e22b1 +0x0057:  sub    $0x18,%esp
080e22b4 +0x005a:  mov    0x10(%ebp),%eax
080e22b7 +0x005d:  mov    %eax,0x8(%esp)
080e22bb +0x0061:  mov    0xc(%ebp),%eax
080e22be +0x0064:  mov    %eax,0x4(%esp)
080e22c2 +0x0068:  mov    0x8(%ebp),%eax
080e22c5 +0x006b:  mov    %eax,(%esp)
080e22c8 +0x006e:  call   080e22f2 <+0x98>
080e22cd +0x0073:  leave
080e22ce +0x0074:  ret
080e22cf +0x0075:  nop
080e22d0 +0x0076:  push   %ebp
080e22d1 +0x0077:  mov    %esp,%ebp
080e22d3 +0x0079:  cmpl   $0x0,0xc(%ebp)
080e22d7 +0x007d:  js     080e22e4 <+0x8a>
080e22d9 +0x007f:  mov    0x8(%ebp),%eax
080e22dc +0x0082:  mov    0x18(%eax),%eax
080e22df +0x0085:  cmp    0xc(%ebp),%eax
080e22e2 +0x0088:  jg     080e22eb <+0x91>
080e22e4 +0x008a:  mov    $0x0,%eax
080e22e9 +0x008f:  jmp    080e22f0 <+0x96>
080e22eb +0x0091:  mov    $0x1,%eax
080e22f0 +0x0096:  pop    %ebp
080e22f1 +0x0097:  ret
080e22f2 +0x0098:  push   %ebp
080e22f3 +0x0099:  mov    %esp,%ebp
080e22f5 +0x009b:  sub    $0x28,%esp
080e22f8 +0x009e:  mov    0x8(%ebp),%eax
080e22fb +0x00a1:  mov    0xc(%eax),%eax
080e22fe +0x00a4:  test   %eax,%eax
080e2300 +0x00a6:  je     080e231b <+0xc1>
080e2302 +0x00a8:  mov    0xc(%ebp),%eax
080e2305 +0x00ab:  mov    %eax,0x4(%esp)
080e2309 +0x00af:  mov    0x8(%ebp),%eax
080e230c +0x00b2:  mov    %eax,(%esp)
080e230f +0x00b5:  call   080e22d0 <+0x76>
080e2314 +0x00ba:  xor    $0x1,%eax
080e2317 +0x00bd:  test   %al,%al
080e2319 +0x00bf:  je     080e2322 <+0xc8>
080e231b +0x00c1:  mov    $0x1,%eax
080e2320 +0x00c6:  jmp    080e2327 <+0xcd>
080e2322 +0x00c8:  mov    $0x0,%eax
080e2327 +0x00cd:  test   %al,%al
080e2329 +0x00cf:  je     080e2332 <+0xd8>
080e232b +0x00d1:  mov    $0x0,%eax
080e2330 +0x00d6:  jmp    080e236a <+0x110>
080e2332 +0x00d8:  mov    0x8(%ebp),%eax
080e2335 +0x00db:  mov    0xc(%eax),%eax
080e2338 +0x00de:  mov    0xc(%ebp),%edx
080e233b +0x00e1:  shl    $0x2,%edx
080e233e +0x00e4:  add    %edx,%eax
080e2340 +0x00e6:  mov    (%eax),%eax
080e2342 +0x00e8:  movl   $0xa,0x8(%esp)
080e234a +0x00f0:  movl   $0x0,0x4(%esp)
080e2352 +0x00f8:  mov    %eax,(%esp)
080e2355 +0x00fb:  call   0807dc60 <_init+0x558>
080e235a +0x0100:  mov    %eax,-0xc(%ebp)
080e235d +0x0103:  mov    0x10(%ebp),%eax
080e2360 +0x0106:  mov    -0xc(%ebp),%edx
080e2363 +0x0109:  mov    %edx,(%eax)
080e2365 +0x010b:  mov    $0x1,%eax
080e236a +0x0110:  leave
080e236b +0x0111:  ret
080e236c +0x0112:  push   %ebp
080e236d +0x0113:  mov    %esp,%ebp
080e236f +0x0115:  mov    0x8(%ebp),%eax
080e2372 +0x0118:  mov    0x14(%eax),%eax
080e2375 +0x011b:  pop    %ebp
080e2376 +0x011c:  ret
080e2377 +0x011d:  nop
080e2378 +0x011e:  push   %ebp
080e2379 +0x011f:  mov    %esp,%ebp
080e237b +0x0121:  sub    $0x18,%esp
080e237e +0x0124:  mov    0x8(%ebp),%eax
080e2381 +0x0127:  movl   $&_ZTV12DBDispatcher+0x8,(%eax)
080e2387 +0x012d:  mov    $0x0,%eax
080e238c +0x0132:  test   %al,%al
080e238e +0x0134:  je     080e239b <+0x141>
080e2390 +0x0136:  mov    0x8(%ebp),%eax
080e2393 +0x0139:  mov    %eax,(%esp)
080e2396 +0x013c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e239b +0x0141:  leave
080e239c +0x0142:  ret
080e239d +0x0143:  nop
080e239e +0x0144:  push   %ebp
080e239f +0x0145:  mov    %esp,%ebp
080e23a1 +0x0147:  sub    $0x18,%esp
080e23a4 +0x014a:  mov    0x8(%ebp),%eax
080e23a7 +0x014d:  mov    %eax,(%esp)
080e23aa +0x0150:  call   080e2378 <+0x11e>
080e23af +0x0155:  mov    0x8(%ebp),%eax
080e23b2 +0x0158:  mov    %eax,(%esp)
080e23b5 +0x015b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e23ba +0x0160:  leave
080e23bb +0x0161:  ret
080e23bc +0x0162:  push   %ebp
080e23bd +0x0163:  mov    %esp,%ebp
080e23bf +0x0165:  sub    $0x18,%esp
080e23c2 +0x0168:  mov    0x8(%ebp),%eax
080e23c5 +0x016b:  movl   $&_ZTV14ISigDispatcher+0x8,(%eax)
080e23cb +0x0171:  mov    $0x0,%eax
080e23d0 +0x0176:  test   %al,%al
080e23d2 +0x0178:  je     080e23df <+0x185>
080e23d4 +0x017a:  mov    0x8(%ebp),%eax
080e23d7 +0x017d:  mov    %eax,(%esp)
080e23da +0x0180:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e23df +0x0185:  leave
080e23e0 +0x0186:  ret
080e23e1 +0x0187:  nop
080e23e2 +0x0188:  push   %ebp
080e23e3 +0x0189:  mov    %esp,%ebp
080e23e5 +0x018b:  sub    $0x18,%esp
080e23e8 +0x018e:  mov    0x8(%ebp),%eax
080e23eb +0x0191:  mov    %eax,(%esp)
080e23ee +0x0194:  call   080e23bc <+0x162>
080e23f3 +0x0199:  mov    0x8(%ebp),%eax
080e23f6 +0x019c:  mov    %eax,(%esp)
080e23f9 +0x019f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e23fe +0x01a4:  leave
080e23ff +0x01a5:  ret
080e2400 +0x01a6:  push   %ebp
080e2401 +0x01a7:  mov    %esp,%ebp
080e2403 +0x01a9:  sub    $0x18,%esp
080e2406 +0x01ac:  mov    0x8(%ebp),%eax
080e2409 +0x01af:  mov    %eax,(%esp)
080e240c +0x01b2:  call   080e259e <+0x344>
080e2411 +0x01b7:  leave
080e2412 +0x01b8:  ret
080e2413 +0x01b9:  nop
080e2414 +0x01ba:  push   %ebp
080e2415 +0x01bb:  mov    %esp,%ebp
080e2417 +0x01bd:  sub    $0x18,%esp
080e241a +0x01c0:  mov    0x8(%ebp),%eax
080e241d +0x01c3:  mov    %eax,(%esp)
080e2420 +0x01c6:  call   080e2576 <+0x31c>
080e2425 +0x01cb:  leave
080e2426 +0x01cc:  ret
080e2427 +0x01cd:  nop
080e2428 +0x01ce:  push   %ebp
080e2429 +0x01cf:  mov    %esp,%ebp
080e242b +0x01d1:  sub    $0x18,%esp
080e242e +0x01d4:  mov    0x8(%ebp),%eax
080e2431 +0x01d7:  mov    %eax,(%esp)
080e2434 +0x01da:  call   080e2400 <+0x1a6>
080e2439 +0x01df:  leave
080e243a +0x01e0:  ret
080e243b +0x01e1:  nop
080e243c +0x01e2:  push   %ebp
080e243d +0x01e3:  mov    %esp,%ebp
080e243f +0x01e5:  mov    0x8(%ebp),%eax
080e2442 +0x01e8:  movl   $0x0,(%eax)
080e2448 +0x01ee:  mov    0x8(%ebp),%eax
080e244b +0x01f1:  movl   $0x0,0x4(%eax)
080e2452 +0x01f8:  pop    %ebp
080e2453 +0x01f9:  ret
080e2454 +0x01fa:  push   %ebp
080e2455 +0x01fb:  mov    %esp,%ebp
080e2457 +0x01fd:  mov    0x8(%ebp),%eax
080e245a +0x0200:  movl   $&_ZTVN4ARAD15ScriptInterfaceE+0x8,(%eax)
080e2460 +0x0206:  pop    %ebp
080e2461 +0x0207:  ret
080e2462 +0x0208:  push   %ebp
080e2463 +0x0209:  mov    %esp,%ebp
080e2465 +0x020b:  mov    0x8(%ebp),%eax
080e2468 +0x020e:  mov    0x4(%eax),%eax
080e246b +0x0211:  mov    %eax,%edx
080e246d +0x0213:  mov    0x8(%ebp),%eax
080e2470 +0x0216:  mov    (%eax),%eax
080e2472 +0x0218:  mov    %edx,%ecx
080e2474 +0x021a:  sub    %eax,%ecx
080e2476 +0x021c:  mov    %ecx,%eax
080e2478 +0x021e:  sar    $0x2,%eax
080e247b +0x0221:  pop    %ebp
080e247c +0x0222:  ret
080e247d +0x0223:  nop
080e247e +0x0224:  push   %ebp
080e247f +0x0225:  mov    %esp,%ebp
080e2481 +0x0227:  sub    $0x18,%esp
080e2484 +0x022a:  mov    0x8(%ebp),%eax
080e2487 +0x022d:  mov    %eax,(%esp)
080e248a +0x0230:  call   080e2962 <+0x708>
080e248f +0x0235:  leave
080e2490 +0x0236:  ret
080e2491 +0x0237:  nop
080e2492 +0x0238:  push   %ebp
080e2493 +0x0239:  mov    %esp,%ebp
080e2495 +0x023b:  push   %esi
080e2496 +0x023c:  push   %ebx
080e2497 +0x023d:  sub    $0x10,%esp
080e249a +0x0240:  mov    0x8(%ebp),%eax
080e249d +0x0243:  mov    %eax,(%esp)
080e24a0 +0x0246:  call   080e29de <+0x784>
080e24a5 +0x024b:  mov    0x8(%ebp),%edx
080e24a8 +0x024e:  mov    0x4(%edx),%ecx
080e24ab +0x0251:  mov    0x8(%ebp),%edx
080e24ae +0x0254:  mov    (%edx),%edx
080e24b0 +0x0256:  mov    %eax,0x8(%esp)
080e24b4 +0x025a:  mov    %ecx,0x4(%esp)
080e24b8 +0x025e:  mov    %edx,(%esp)
080e24bb +0x0261:  call   080e29e6 <+0x78c>
080e24c0 +0x0266:  jmp    080e24dd <+0x283>
080e24c2 +0x0268:  mov    %edx,%ebx
080e24c4 +0x026a:  mov    %eax,%esi
080e24c6 +0x026c:  mov    0x8(%ebp),%eax
080e24c9 +0x026f:  mov    %eax,(%esp)
080e24cc +0x0272:  call   080e2976 <+0x71c>
080e24d1 +0x0277:  mov    %esi,%eax
080e24d3 +0x0279:  mov    %ebx,%edx
080e24d5 +0x027b:  mov    %eax,(%esp)
080e24d8 +0x027e:  call   08ae3750 <_Unwind_Resume>
080e24dd +0x0283:  mov    0x8(%ebp),%eax
080e24e0 +0x0286:  mov    %eax,(%esp)
080e24e3 +0x0289:  call   080e2976 <+0x71c>
080e24e8 +0x028e:  add    $0x10,%esp
080e24eb +0x0291:  pop    %ebx
080e24ec +0x0292:  pop    %esi
080e24ed +0x0293:  pop    %ebp
080e24ee +0x0294:  ret
080e24ef +0x0295:  nop
080e24f0 +0x0296:  push   %ebp
080e24f1 +0x0297:  mov    %esp,%ebp
080e24f3 +0x0299:  sub    $0x28,%esp
080e24f6 +0x029c:  mov    0x8(%ebp),%eax
080e24f9 +0x029f:  mov    0x4(%eax),%edx
080e24fc +0x02a2:  mov    0x8(%ebp),%eax
080e24ff +0x02a5:  mov    0x8(%eax),%eax
080e2502 +0x02a8:  cmp    %eax,%edx
080e2504 +0x02aa:  je     080e2533 <+0x2d9>
080e2506 +0x02ac:  mov    0x8(%ebp),%eax
080e2509 +0x02af:  mov    0x4(%eax),%edx
080e250c +0x02b2:  mov    0x8(%ebp),%eax
080e250f +0x02b5:  mov    0xc(%ebp),%ecx
080e2512 +0x02b8:  mov    %ecx,0x8(%esp)
080e2516 +0x02bc:  mov    %edx,0x4(%esp)
080e251a +0x02c0:  mov    %eax,(%esp)
080e251d +0x02c3:  call   080e2a62 <+0x808>
080e2522 +0x02c8:  mov    0x8(%ebp),%eax
080e2525 +0x02cb:  mov    0x4(%eax),%eax
080e2528 +0x02ce:  lea    0x4(%eax),%edx
080e252b +0x02d1:  mov    0x8(%ebp),%eax
080e252e +0x02d4:  mov    %edx,0x4(%eax)
080e2531 +0x02d7:  jmp    080e2561 <+0x307>
080e2533 +0x02d9:  lea    -0xc(%ebp),%eax
080e2536 +0x02dc:  mov    0x8(%ebp),%edx
080e2539 +0x02df:  mov    %edx,0x4(%esp)
080e253d +0x02e3:  mov    %eax,(%esp)
080e2540 +0x02e6:  call   080e2a8a <+0x830>
080e2545 +0x02eb:  sub    $0x4,%esp
080e2548 +0x02ee:  mov    0xc(%ebp),%eax
080e254b +0x02f1:  mov    %eax,0x8(%esp)
080e254f +0x02f5:  mov    -0xc(%ebp),%eax
080e2552 +0x02f8:  mov    %eax,0x4(%esp)
080e2556 +0x02fc:  mov    0x8(%ebp),%eax
080e2559 +0x02ff:  mov    %eax,(%esp)
080e255c +0x0302:  call   080e2ab0 <+0x856>
080e2561 +0x0307:  leave
080e2562 +0x0308:  ret
080e2563 +0x0309:  nop
080e2564 +0x030a:  push   %ebp
080e2565 +0x030b:  mov    %esp,%ebp
080e2567 +0x030d:  mov    0x8(%ebp),%eax
080e256a +0x0310:  mov    (%eax),%eax
080e256c +0x0312:  mov    0xc(%ebp),%edx
080e256f +0x0315:  shl    $0x2,%edx
080e2572 +0x0318:  add    %edx,%eax
080e2574 +0x031a:  pop    %ebp
080e2575 +0x031b:  ret
080e2576 +0x031c:  push   %ebp
080e2577 +0x031d:  mov    %esp,%ebp
080e2579 +0x031f:  sub    $0x18,%esp
080e257c +0x0322:  mov    0x8(%ebp),%eax
080e257f +0x0325:  mov    %eax,(%esp)
080e2582 +0x0328:  call   080e2d82 <+0xb28>
080e2587 +0x032d:  leave
080e2588 +0x032e:  ret
080e2589 +0x032f:  nop
080e258a +0x0330:  push   %ebp
080e258b +0x0331:  mov    %esp,%ebp
080e258d +0x0333:  sub    $0x18,%esp
080e2590 +0x0336:  mov    0x8(%ebp),%eax
080e2593 +0x0339:  mov    %eax,(%esp)
080e2596 +0x033c:  call   080e2d96 <+0xb3c>
080e259b +0x0341:  leave
080e259c +0x0342:  ret
080e259d +0x0343:  nop
080e259e +0x0344:  push   %ebp
080e259f +0x0345:  mov    %esp,%ebp
080e25a1 +0x0347:  push   %esi
080e25a2 +0x0348:  push   %ebx
080e25a3 +0x0349:  sub    $0x10,%esp
080e25a6 +0x034c:  mov    0x8(%ebp),%eax
080e25a9 +0x034f:  mov    %eax,(%esp)
080e25ac +0x0352:  call   080e2e00 <+0xba6>
080e25b1 +0x0357:  mov    %eax,0x4(%esp)
080e25b5 +0x035b:  mov    0x8(%ebp),%eax
080e25b8 +0x035e:  mov    %eax,(%esp)
080e25bb +0x0361:  call   080e2daa <+0xb50>
080e25c0 +0x0366:  jmp    080e25dd <+0x383>
080e25c2 +0x0368:  mov    %edx,%ebx
080e25c4 +0x036a:  mov    %eax,%esi
080e25c6 +0x036c:  mov    0x8(%ebp),%eax
080e25c9 +0x036f:  mov    %eax,(%esp)
080e25cc +0x0372:  call   080e258a <+0x330>
080e25d1 +0x0377:  mov    %esi,%eax
080e25d3 +0x0379:  mov    %ebx,%edx
080e25d5 +0x037b:  mov    %eax,(%esp)
080e25d8 +0x037e:  call   08ae3750 <_Unwind_Resume>
080e25dd +0x0383:  mov    0x8(%ebp),%eax
080e25e0 +0x0386:  mov    %eax,(%esp)
080e25e3 +0x0389:  call   080e258a <+0x330>
080e25e8 +0x038e:  add    $0x10,%esp
080e25eb +0x0391:  pop    %ebx
080e25ec +0x0392:  pop    %esi
080e25ed +0x0393:  pop    %ebp
080e25ee +0x0394:  ret
080e25ef +0x0395:  nop
080e25f0 +0x0396:  push   %ebp
080e25f1 +0x0397:  mov    %esp,%ebp
080e25f3 +0x0399:  pop    %ebp
080e25f4 +0x039a:  ret
080e25f5 +0x039b:  nop
080e25f6 +0x039c:  push   %ebp
080e25f7 +0x039d:  mov    %esp,%ebp
080e25f9 +0x039f:  push   %ebx
080e25fa +0x03a0:  sub    $0x14,%esp
080e25fd +0x03a3:  mov    0x8(%ebp),%ebx
080e2600 +0x03a6:  mov    0xc(%ebp),%eax
080e2603 +0x03a9:  mov    0x10(%ebp),%edx
080e2606 +0x03ac:  mov    %edx,0x8(%esp)
080e260a +0x03b0:  mov    %eax,0x4(%esp)
080e260e +0x03b4:  mov    %ebx,(%esp)
080e2611 +0x03b7:  call   080e2e6e <+0xc14>
080e2616 +0x03bc:  sub    $0x4,%esp
080e2619 +0x03bf:  mov    %ebx,%eax
080e261b +0x03c1:  mov    -0x4(%ebp),%ebx
080e261e +0x03c4:  leave
080e261f +0x03c5:  ret    $0x4
080e2622 +0x03c8:  push   %ebp
080e2623 +0x03c9:  mov    %esp,%ebp
080e2625 +0x03cb:  push   %ebx
080e2626 +0x03cc:  sub    $0x14,%esp
080e2629 +0x03cf:  mov    0x8(%ebp),%ebx
080e262c +0x03d2:  mov    0xc(%ebp),%eax
080e262f +0x03d5:  mov    %eax,0x4(%esp)
080e2633 +0x03d9:  mov    %ebx,(%esp)
080e2636 +0x03dc:  call   080e2f2c <+0xcd2>
080e263b +0x03e1:  sub    $0x4,%esp
080e263e +0x03e4:  mov    %ebx,%eax
080e2640 +0x03e6:  mov    -0x4(%ebp),%ebx
080e2643 +0x03e9:  leave
080e2644 +0x03ea:  ret    $0x4
080e2647 +0x03ed:  nop
080e2648 +0x03ee:  push   %ebp
080e2649 +0x03ef:  mov    %esp,%ebp
080e264b +0x03f1:  mov    0x8(%ebp),%eax
080e264e +0x03f4:  mov    (%eax),%edx
080e2650 +0x03f6:  mov    0xc(%ebp),%eax
080e2653 +0x03f9:  mov    (%eax),%eax
080e2655 +0x03fb:  cmp    %eax,%edx
080e2657 +0x03fd:  sete   %al
080e265a +0x0400:  pop    %ebp
080e265b +0x0401:  ret
080e265c +0x0402:  push   %ebp
080e265d +0x0403:  mov    %esp,%ebp
080e265f +0x0405:  sub    $0x18,%esp
080e2662 +0x0408:  mov    0xc(%ebp),%eax
080e2665 +0x040b:  mov    %eax,(%esp)
080e2668 +0x040e:  call   080e2d79 <+0xb1f>
080e266d +0x0413:  mov    (%eax),%edx
080e266f +0x0415:  mov    0x8(%ebp),%eax
080e2672 +0x0418:  mov    %edx,(%eax)
080e2674 +0x041a:  mov    0x10(%ebp),%eax
080e2677 +0x041d:  mov    %eax,(%esp)
080e267a +0x0420:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
080e267f +0x0425:  mov    (%eax),%eax
080e2681 +0x0427:  mov    %eax,%edx
080e2683 +0x0429:  mov    0x8(%ebp),%eax
080e2686 +0x042c:  mov    %edx,0x4(%eax)
080e2689 +0x042f:  leave
080e268a +0x0430:  ret
080e268b +0x0431:  nop
080e268c +0x0432:  push   %ebp
080e268d +0x0433:  mov    %esp,%ebp
080e268f +0x0435:  push   %ebx
080e2690 +0x0436:  sub    $0x14,%esp
080e2693 +0x0439:  mov    0x8(%ebp),%ebx
080e2696 +0x043c:  mov    0xc(%ebp),%eax
080e2699 +0x043f:  mov    0x10(%ebp),%edx
080e269c +0x0442:  mov    %edx,0x8(%esp)
080e26a0 +0x0446:  mov    %eax,0x4(%esp)
080e26a4 +0x044a:  mov    %ebx,(%esp)
080e26a7 +0x044d:  call   080e2f52 <+0xcf8>
080e26ac +0x0452:  sub    $0x4,%esp
080e26af +0x0455:  mov    %ebx,%eax
080e26b1 +0x0457:  mov    -0x4(%ebp),%ebx
080e26b4 +0x045a:  leave
080e26b5 +0x045b:  ret    $0x4
080e26b8 +0x045e:  push   %ebp
080e26b9 +0x045f:  mov    %esp,%ebp
080e26bb +0x0461:  mov    0x8(%ebp),%eax
080e26be +0x0464:  mov    (%eax),%eax
080e26c0 +0x0466:  add    $0x10,%eax
080e26c3 +0x0469:  pop    %ebp
080e26c4 +0x046a:  ret
080e26c5 +0x046b:  nop
080e26c6 +0x046c:  push   %ebp
080e26c7 +0x046d:  mov    %esp,%ebp
080e26c9 +0x046f:  push   %ebx
080e26ca +0x0470:  sub    $0x14,%esp
080e26cd +0x0473:  mov    0x8(%ebp),%ebx
080e26d0 +0x0476:  mov    0xc(%ebp),%eax
080e26d3 +0x0479:  mov    0x10(%ebp),%edx
080e26d6 +0x047c:  mov    %edx,0x8(%esp)
080e26da +0x0480:  mov    %eax,0x4(%esp)
080e26de +0x0484:  mov    %ebx,(%esp)
080e26e1 +0x0487:  call   080e3122 <+0xec8>
080e26e6 +0x048c:  sub    $0x4,%esp
080e26e9 +0x048f:  mov    %ebx,%eax
080e26eb +0x0491:  mov    -0x4(%ebp),%ebx
080e26ee +0x0494:  leave
080e26ef +0x0495:  ret    $0x4
080e26f2 +0x0498:  push   %ebp
080e26f3 +0x0499:  mov    %esp,%ebp
080e26f5 +0x049b:  push   %ebx
080e26f6 +0x049c:  sub    $0x14,%esp
080e26f9 +0x049f:  mov    0x8(%ebp),%ebx
080e26fc +0x04a2:  mov    0xc(%ebp),%eax
080e26ff +0x04a5:  mov    %eax,0x4(%esp)
080e2703 +0x04a9:  mov    %ebx,(%esp)
080e2706 +0x04ac:  call   080e31e0 <+0xf86>
080e270b +0x04b1:  sub    $0x4,%esp
080e270e +0x04b4:  mov    %ebx,%eax
080e2710 +0x04b6:  mov    -0x4(%ebp),%ebx
080e2713 +0x04b9:  leave
080e2714 +0x04ba:  ret    $0x4
080e2717 +0x04bd:  nop
080e2718 +0x04be:  push   %ebp
080e2719 +0x04bf:  mov    %esp,%ebp
080e271b +0x04c1:  mov    0x8(%ebp),%eax
080e271e +0x04c4:  mov    (%eax),%edx
080e2720 +0x04c6:  mov    0xc(%ebp),%eax
080e2723 +0x04c9:  mov    (%eax),%eax
080e2725 +0x04cb:  cmp    %eax,%edx
080e2727 +0x04cd:  setne  %al
080e272a +0x04d0:  pop    %ebp
080e272b +0x04d1:  ret
080e272c +0x04d2:  push   %ebp
080e272d +0x04d3:  mov    %esp,%ebp
080e272f +0x04d5:  mov    0x8(%ebp),%eax
080e2732 +0x04d8:  mov    (%eax),%eax
080e2734 +0x04da:  add    $0x10,%eax
080e2737 +0x04dd:  pop    %ebp
080e2738 +0x04de:  ret
080e2739 +0x04df:  nop
080e273a +0x04e0:  push   %ebp
080e273b +0x04e1:  mov    %esp,%ebp
080e273d +0x04e3:  sub    $0x18,%esp
080e2740 +0x04e6:  mov    0x8(%ebp),%eax
080e2743 +0x04e9:  mov    %eax,(%esp)
080e2746 +0x04ec:  call   080e3206 <+0xfac>
080e274b +0x04f1:  leave
080e274c +0x04f2:  ret
080e274d +0x04f3:  push   %ebp
080e274e +0x04f4:  mov    %esp,%ebp
080e2750 +0x04f6:  push   %edi
080e2751 +0x04f7:  push   %esi
080e2752 +0x04f8:  push   %ebx
080e2753 +0x04f9:  sub    $0x1c,%esp
080e2756 +0x04fc:  mov    $&_ZGVZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEE3GetEvE3obj,%eax
080e275b +0x0501:  movzbl (%eax),%eax
080e275e +0x0504:  test   %al,%al
080e2760 +0x0506:  jne    080e27d3 <+0x579>
080e2762 +0x0508:  movl   $&_ZGVZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEE3GetEvE3obj,(%esp)
080e2769 +0x050f:  call   08725330 <__cxa_guard_acquire>
080e276e +0x0514:  test   %eax,%eax
080e2770 +0x0516:  setne  %al
080e2773 +0x0519:  test   %al,%al
080e2775 +0x051b:  je     080e27d3 <+0x579>
080e2777 +0x051d:  mov    $0x0,%ebx
080e277c +0x0522:  movl   $&_ZZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEE3GetEvE3obj,(%esp)
080e2783 +0x0529:  call   080e09bc <_ZN19CerashopAddRestrict7ManagerC1Ev>  ; CerashopAddRestrict::Manager::Manager()
080e2788 +0x052e:  movl   $&_ZGVZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEE3GetEvE3obj,(%esp)
080e278f +0x0535:  call   08725250 <__cxa_guard_release>
080e2794 +0x053a:  mov    $&_ZN19CerashopAddRestrict7ManagerD1Ev,%eax
080e2799 +0x053f:  movl   $&__dso_handle,0x8(%esp)
080e27a1 +0x0547:  movl   $&_ZZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEE3GetEvE3obj,0x4(%esp)
080e27a9 +0x054f:  mov    %eax,(%esp)
080e27ac +0x0552:  call   0807ddd0 <_init+0x6c8>
080e27b1 +0x0557:  jmp    080e27d3 <+0x579>
080e27b3 +0x0559:  mov    %edx,%esi
080e27b5 +0x055b:  mov    %eax,%edi
080e27b7 +0x055d:  test   %bl,%bl
080e27b9 +0x055f:  jne    080e27c7 <+0x56d>
080e27bb +0x0561:  movl   $&_ZGVZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEE3GetEvE3obj,(%esp)
080e27c2 +0x0568:  call   087252c0 <__cxa_guard_abort>
080e27c7 +0x056d:  mov    %edi,%eax
080e27c9 +0x056f:  mov    %esi,%edx
080e27cb +0x0571:  mov    %eax,(%esp)
080e27ce +0x0574:  call   08ae3750 <_Unwind_Resume>
080e27d3 +0x0579:  mov    $&_ZZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEE3GetEvE3obj,%eax
080e27d8 +0x057e:  add    $0x1c,%esp
080e27db +0x0581:  pop    %ebx
080e27dc +0x0582:  pop    %esi
080e27dd +0x0583:  pop    %edi
080e27de +0x0584:  pop    %ebp
080e27df +0x0585:  ret
080e27e0 +0x0586:  push   %ebp
080e27e1 +0x0587:  mov    %esp,%ebp
080e27e3 +0x0589:  sub    $0x18,%esp
080e27e6 +0x058c:  mov    0x8(%ebp),%eax
080e27e9 +0x058f:  mov    %eax,(%esp)
080e27ec +0x0592:  call   080e327c <+0x1022>
080e27f1 +0x0597:  leave
080e27f2 +0x0598:  ret
080e27f3 +0x0599:  nop
080e27f4 +0x059a:  push   %ebp
080e27f5 +0x059b:  mov    %esp,%ebp
080e27f7 +0x059d:  push   %ebx
080e27f8 +0x059e:  sub    $0x14,%esp
080e27fb +0x05a1:  mov    0x8(%ebp),%ebx
080e27fe +0x05a4:  mov    0xc(%ebp),%eax
080e2801 +0x05a7:  mov    %eax,0x4(%esp)
080e2805 +0x05ab:  mov    %ebx,(%esp)
080e2808 +0x05ae:  call   080e32f2 <+0x1098>
080e280d +0x05b3:  sub    $0x4,%esp
080e2810 +0x05b6:  mov    %ebx,%eax
080e2812 +0x05b8:  mov    -0x4(%ebp),%ebx
080e2815 +0x05bb:  leave
080e2816 +0x05bc:  ret    $0x4
080e2819 +0x05bf:  nop
080e281a +0x05c0:  push   %ebp
080e281b +0x05c1:  mov    %esp,%ebp
080e281d +0x05c3:  push   %ebx
080e281e +0x05c4:  sub    $0x14,%esp
080e2821 +0x05c7:  mov    0x8(%ebp),%ebx
080e2824 +0x05ca:  mov    0xc(%ebp),%eax
080e2827 +0x05cd:  movl   $0x4,0x8(%esp)
080e282f +0x05d5:  mov    %eax,0x4(%esp)
080e2833 +0x05d9:  mov    %ebx,(%esp)
080e2836 +0x05dc:  call   0807d880 <_init+0x178>
080e283b +0x05e1:  mov    0xc(%ebp),%eax
080e283e +0x05e4:  mov    (%eax),%eax
080e2840 +0x05e6:  mov    %eax,(%esp)
080e2843 +0x05e9:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
080e2848 +0x05ee:  mov    0xc(%ebp),%edx
080e284b +0x05f1:  mov    %eax,(%edx)
080e284d +0x05f3:  mov    %ebx,%eax
080e284f +0x05f5:  add    $0x14,%esp
080e2852 +0x05f8:  pop    %ebx
080e2853 +0x05f9:  pop    %ebp
080e2854 +0x05fa:  ret    $0x4
080e2857 +0x05fd:  nop
080e2858 +0x05fe:  push   %ebp
080e2859 +0x05ff:  mov    %esp,%ebp
080e285b +0x0601:  sub    $0x18,%esp
080e285e +0x0604:  mov    0x8(%ebp),%eax
080e2861 +0x0607:  mov    %eax,(%esp)
080e2864 +0x060a:  call   080e3318 <+0x10be>
080e2869 +0x060f:  leave
080e286a +0x0610:  ret
080e286b +0x0611:  nop
080e286c +0x0612:  push   %ebp
080e286d +0x0613:  mov    %esp,%ebp
080e286f +0x0615:  sub    $0x28,%esp
080e2872 +0x0618:  lea    -0x10(%ebp),%eax
080e2875 +0x061b:  mov    0x8(%ebp),%edx
080e2878 +0x061e:  mov    %edx,0x4(%esp)
080e287c +0x0622:  mov    %eax,(%esp)
080e287f +0x0625:  call   080e3324 <+0x10ca>
080e2884 +0x062a:  sub    $0x4,%esp
080e2887 +0x062d:  lea    -0xc(%ebp),%eax
080e288a +0x0630:  mov    0x8(%ebp),%edx
080e288d +0x0633:  mov    %edx,0x4(%esp)
080e2891 +0x0637:  mov    %eax,(%esp)
080e2894 +0x063a:  call   080e3350 <+0x10f6>
080e2899 +0x063f:  sub    $0x4,%esp
080e289c +0x0642:  lea    -0x10(%ebp),%eax
080e289f +0x0645:  mov    %eax,0x4(%esp)
080e28a3 +0x0649:  lea    -0xc(%ebp),%eax
080e28a6 +0x064c:  mov    %eax,(%esp)
080e28a9 +0x064f:  call   080e337b <+0x1121>
080e28ae +0x0654:  leave
080e28af +0x0655:  ret
080e28b0 +0x0656:  push   %ebp
080e28b1 +0x0657:  mov    %esp,%ebp
080e28b3 +0x0659:  sub    $0x18,%esp
080e28b6 +0x065c:  mov    0xc(%ebp),%eax
080e28b9 +0x065f:  mov    %eax,(%esp)
080e28bc +0x0662:  call   080e2d79 <+0xb1f>
080e28c1 +0x0667:  mov    (%eax),%edx
080e28c3 +0x0669:  mov    0x8(%ebp),%eax
080e28c6 +0x066c:  mov    %edx,(%eax)
080e28c8 +0x066e:  mov    0x10(%ebp),%eax
080e28cb +0x0671:  mov    %eax,(%esp)
080e28ce +0x0674:  call   080e33a7 <+0x114d>
080e28d3 +0x0679:  mov    (%eax),%edx
080e28d5 +0x067b:  mov    0x8(%ebp),%eax
080e28d8 +0x067e:  mov    %edx,0x4(%eax)
080e28db +0x0681:  leave
080e28dc +0x0682:  ret
080e28dd +0x0683:  nop
080e28de +0x0684:  push   %ebp
080e28df +0x0685:  mov    %esp,%ebp
080e28e1 +0x0687:  push   %ebx
080e28e2 +0x0688:  sub    $0x14,%esp
080e28e5 +0x068b:  mov    0x8(%ebp),%ebx
080e28e8 +0x068e:  mov    0xc(%ebp),%eax
080e28eb +0x0691:  mov    0x10(%ebp),%edx
080e28ee +0x0694:  mov    %edx,0x8(%esp)
080e28f2 +0x0698:  mov    %eax,0x4(%esp)
080e28f6 +0x069c:  mov    %ebx,(%esp)
080e28f9 +0x069f:  call   080e33b0 <+0x1156>
080e28fe +0x06a4:  sub    $0x4,%esp
080e2901 +0x06a7:  mov    %ebx,%eax
080e2903 +0x06a9:  mov    -0x4(%ebp),%ebx
080e2906 +0x06ac:  leave
080e2907 +0x06ad:  ret    $0x4
080e290a +0x06b0:  push   %ebp
080e290b +0x06b1:  mov    %esp,%ebp
080e290d +0x06b3:  mov    0x8(%ebp),%eax
080e2910 +0x06b6:  mov    (%eax),%edx
080e2912 +0x06b8:  mov    0xc(%ebp),%eax
080e2915 +0x06bb:  mov    (%eax),%eax
080e2917 +0x06bd:  cmp    %eax,%edx
080e2919 +0x06bf:  setne  %al
080e291c +0x06c2:  pop    %ebp
080e291d +0x06c3:  ret
080e291e +0x06c4:  push   %ebp
080e291f +0x06c5:  mov    %esp,%ebp
080e2921 +0x06c7:  sub    $0x18,%esp
080e2924 +0x06ca:  mov    0x8(%ebp),%eax
080e2927 +0x06cd:  mov    0xc(%ebp),%edx
080e292a +0x06d0:  mov    %edx,0x4(%esp)
080e292e +0x06d4:  mov    %eax,(%esp)
080e2931 +0x06d7:  call   080e3580 <+0x1326>
080e2936 +0x06dc:  leave
080e2937 +0x06dd:  ret
080e2938 +0x06de:  push   %ebp
080e2939 +0x06df:  mov    %esp,%ebp
080e293b +0x06e1:  sub    $0x18,%esp
080e293e +0x06e4:  mov    0x8(%ebp),%eax
080e2941 +0x06e7:  mov    (%eax),%eax
080e2943 +0x06e9:  mov    %eax,(%esp)
080e2946 +0x06ec:  call   080e35c2 <+0x1368>
080e294b +0x06f1:  leave
080e294c +0x06f2:  ret
080e294d +0x06f3:  nop
080e294e +0x06f4:  push   %ebp
080e294f +0x06f5:  mov    %esp,%ebp
080e2951 +0x06f7:  sub    $0x18,%esp
080e2954 +0x06fa:  mov    0x8(%ebp),%eax
080e2957 +0x06fd:  mov    %eax,(%esp)
080e295a +0x0700:  call   080e365c <+0x1402>
080e295f +0x0705:  leave
080e2960 +0x0706:  ret
080e2961 +0x0707:  nop
080e2962 +0x0708:  push   %ebp
080e2963 +0x0709:  mov    %esp,%ebp
080e2965 +0x070b:  sub    $0x18,%esp
080e2968 +0x070e:  mov    0x8(%ebp),%eax
080e296b +0x0711:  mov    %eax,(%esp)
080e296e +0x0714:  call   080e362c <+0x13d2>
080e2973 +0x0719:  leave
080e2974 +0x071a:  ret
080e2975 +0x071b:  nop
080e2976 +0x071c:  push   %ebp
080e2977 +0x071d:  mov    %esp,%ebp
080e2979 +0x071f:  push   %esi
080e297a +0x0720:  push   %ebx
080e297b +0x0721:  sub    $0x10,%esp
080e297e +0x0724:  mov    0x8(%ebp),%eax
080e2981 +0x0727:  mov    0x8(%eax),%eax
080e2984 +0x072a:  mov    %eax,%edx
080e2986 +0x072c:  mov    0x8(%ebp),%eax
080e2989 +0x072f:  mov    (%eax),%eax
080e298b +0x0731:  mov    %edx,%ecx
080e298d +0x0733:  sub    %eax,%ecx
080e298f +0x0735:  mov    %ecx,%eax
080e2991 +0x0737:  sar    $0x2,%eax
080e2994 +0x073a:  mov    %eax,%edx
080e2996 +0x073c:  mov    0x8(%ebp),%eax
080e2999 +0x073f:  mov    (%eax),%eax
080e299b +0x0741:  mov    %edx,0x8(%esp)
080e299f +0x0745:  mov    %eax,0x4(%esp)
080e29a3 +0x0749:  mov    0x8(%ebp),%eax
080e29a6 +0x074c:  mov    %eax,(%esp)
080e29a9 +0x074f:  call   080e3670 <+0x1416>
080e29ae +0x0754:  jmp    080e29cb <+0x771>
080e29b0 +0x0756:  mov    %edx,%ebx
080e29b2 +0x0758:  mov    %eax,%esi
080e29b4 +0x075a:  mov    0x8(%ebp),%eax
080e29b7 +0x075d:  mov    %eax,(%esp)
080e29ba +0x0760:  call   080e294e <+0x6f4>
080e29bf +0x0765:  mov    %esi,%eax
080e29c1 +0x0767:  mov    %ebx,%edx
080e29c3 +0x0769:  mov    %eax,(%esp)
080e29c6 +0x076c:  call   08ae3750 <_Unwind_Resume>
080e29cb +0x0771:  mov    0x8(%ebp),%eax
080e29ce +0x0774:  mov    %eax,(%esp)
080e29d1 +0x0777:  call   080e294e <+0x6f4>
080e29d6 +0x077c:  add    $0x10,%esp
080e29d9 +0x077f:  pop    %ebx
080e29da +0x0780:  pop    %esi
080e29db +0x0781:  pop    %ebp
080e29dc +0x0782:  ret
080e29dd +0x0783:  nop
080e29de +0x0784:  push   %ebp
080e29df +0x0785:  mov    %esp,%ebp
080e29e1 +0x0787:  mov    0x8(%ebp),%eax
080e29e4 +0x078a:  pop    %ebp
080e29e5 +0x078b:  ret
080e29e6 +0x078c:  push   %ebp
080e29e7 +0x078d:  mov    %esp,%ebp
080e29e9 +0x078f:  sub    $0x18,%esp
080e29ec +0x0792:  mov    0xc(%ebp),%eax
080e29ef +0x0795:  mov    %eax,0x4(%esp)
080e29f3 +0x0799:  mov    0x8(%ebp),%eax
080e29f6 +0x079c:  mov    %eax,(%esp)
080e29f9 +0x079f:  call   080e3697 <+0x143d>
080e29fe +0x07a4:  leave
080e29ff +0x07a5:  ret
080e2a00 +0x07a6:  push   %ebp
080e2a01 +0x07a7:  mov    %esp,%ebp
080e2a03 +0x07a9:  sub    $0x28,%esp
080e2a06 +0x07ac:  jmp    080e2a48 <+0x7ee>
080e2a08 +0x07ae:  mov    0xc(%ebp),%eax
080e2a0b +0x07b1:  mov    %eax,(%esp)
080e2a0e +0x07b4:  call   080e36b1 <+0x1457>
080e2a13 +0x07b9:  mov    %eax,0x4(%esp)
080e2a17 +0x07bd:  mov    0x8(%ebp),%eax
080e2a1a +0x07c0:  mov    %eax,(%esp)
080e2a1d +0x07c3:  call   080e2a00 <+0x7a6>
080e2a22 +0x07c8:  mov    0xc(%ebp),%eax
080e2a25 +0x07cb:  mov    %eax,(%esp)
080e2a28 +0x07ce:  call   080e36bc <+0x1462>
080e2a2d +0x07d3:  mov    %eax,-0xc(%ebp)
080e2a30 +0x07d6:  mov    0xc(%ebp),%eax
080e2a33 +0x07d9:  mov    %eax,0x4(%esp)
080e2a37 +0x07dd:  mov    0x8(%ebp),%eax
080e2a3a +0x07e0:  mov    %eax,(%esp)
080e2a3d +0x07e3:  call   080e36c8 <+0x146e>
080e2a42 +0x07e8:  mov    -0xc(%ebp),%eax
080e2a45 +0x07eb:  mov    %eax,0xc(%ebp)
080e2a48 +0x07ee:  cmpl   $0x0,0xc(%ebp)
080e2a4c +0x07f2:  setne  %al
080e2a4f +0x07f5:  test   %al,%al
080e2a51 +0x07f7:  jne    080e2a08 <+0x7ae>
080e2a53 +0x07f9:  leave
080e2a54 +0x07fa:  ret
080e2a55 +0x07fb:  nop
080e2a56 +0x07fc:  push   %ebp
080e2a57 +0x07fd:  mov    %esp,%ebp
080e2a59 +0x07ff:  mov    0x8(%ebp),%eax
080e2a5c +0x0802:  mov    0x8(%eax),%eax
080e2a5f +0x0805:  pop    %ebp
080e2a60 +0x0806:  ret
080e2a61 +0x0807:  nop
080e2a62 +0x0808:  push   %ebp
080e2a63 +0x0809:  mov    %esp,%ebp
080e2a65 +0x080b:  sub    $0x18,%esp
080e2a68 +0x080e:  mov    0xc(%ebp),%eax
080e2a6b +0x0811:  mov    %eax,0x4(%esp)
080e2a6f +0x0815:  movl   $0x4,(%esp)
080e2a76 +0x081c:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080e2a7b +0x0821:  mov    %eax,%edx
080e2a7d +0x0823:  test   %edx,%edx
080e2a7f +0x0825:  je     080e2a88 <+0x82e>
080e2a81 +0x0827:  mov    0x10(%ebp),%edx
080e2a84 +0x082a:  mov    (%edx),%edx
080e2a86 +0x082c:  mov    %edx,(%eax)
080e2a88 +0x082e:  leave
080e2a89 +0x082f:  ret
080e2a8a +0x0830:  push   %ebp
080e2a8b +0x0831:  mov    %esp,%ebp
080e2a8d +0x0833:  push   %ebx
080e2a8e +0x0834:  sub    $0x14,%esp
080e2a91 +0x0837:  mov    0x8(%ebp),%ebx
080e2a94 +0x083a:  mov    0xc(%ebp),%eax
080e2a97 +0x083d:  add    $0x4,%eax
080e2a9a +0x0840:  mov    %eax,0x4(%esp)
080e2a9e +0x0844:  mov    %ebx,(%esp)
080e2aa1 +0x0847:  call   080e3710 <+0x14b6>
080e2aa6 +0x084c:  mov    %ebx,%eax
080e2aa8 +0x084e:  add    $0x14,%esp
080e2aab +0x0851:  pop    %ebx
080e2aac +0x0852:  pop    %ebp
080e2aad +0x0853:  ret    $0x4
080e2ab0 +0x0856:  push   %ebp
080e2ab1 +0x0857:  mov    %esp,%ebp
080e2ab3 +0x0859:  push   %esi
080e2ab4 +0x085a:  push   %ebx
080e2ab5 +0x085b:  sub    $0x30,%esp
080e2ab8 +0x085e:  mov    0x8(%ebp),%eax
080e2abb +0x0861:  mov    0x4(%eax),%edx
080e2abe +0x0864:  mov    0x8(%ebp),%eax
080e2ac1 +0x0867:  mov    0x8(%eax),%eax
080e2ac4 +0x086a:  cmp    %eax,%edx
080e2ac6 +0x086c:  je     080e2b5d <+0x903>
080e2acc +0x0872:  mov    0x8(%ebp),%eax
080e2acf +0x0875:  mov    0x4(%eax),%eax
080e2ad2 +0x0878:  sub    $0x4,%eax
080e2ad5 +0x087b:  mov    %eax,(%esp)
080e2ad8 +0x087e:  call   080e2d71 <+0xb17>
080e2add +0x0883:  mov    (%eax),%eax
080e2adf +0x0885:  mov    %eax,-0x20(%ebp)
080e2ae2 +0x0888:  mov    0x8(%ebp),%eax
080e2ae5 +0x088b:  mov    0x4(%eax),%edx
080e2ae8 +0x088e:  mov    0x8(%ebp),%eax
080e2aeb +0x0891:  lea    -0x20(%ebp),%ecx
080e2aee +0x0894:  mov    %ecx,0x8(%esp)
080e2af2 +0x0898:  mov    %edx,0x4(%esp)
080e2af6 +0x089c:  mov    %eax,(%esp)
080e2af9 +0x089f:  call   080e3720 <+0x14c6>
080e2afe +0x08a4:  mov    0x8(%ebp),%eax
080e2b01 +0x08a7:  mov    0x4(%eax),%eax
080e2b04 +0x08aa:  lea    0x4(%eax),%edx
080e2b07 +0x08ad:  mov    0x8(%ebp),%eax
080e2b0a +0x08b0:  mov    %edx,0x4(%eax)
080e2b0d +0x08b3:  mov    0x8(%ebp),%eax
080e2b10 +0x08b6:  mov    0x4(%eax),%eax
080e2b13 +0x08b9:  lea    -0x4(%eax),%esi
080e2b16 +0x08bc:  mov    0x8(%ebp),%eax
080e2b19 +0x08bf:  mov    0x4(%eax),%eax
080e2b1c +0x08c2:  lea    -0x8(%eax),%ebx
080e2b1f +0x08c5:  lea    0xc(%ebp),%eax
080e2b22 +0x08c8:  mov    %eax,(%esp)
080e2b25 +0x08cb:  call   080e3756 <+0x14fc>
080e2b2a +0x08d0:  mov    (%eax),%eax
080e2b2c +0x08d2:  mov    %esi,0x8(%esp)
080e2b30 +0x08d6:  mov    %ebx,0x4(%esp)
080e2b34 +0x08da:  mov    %eax,(%esp)
080e2b37 +0x08dd:  call   080e375e <+0x1504>
080e2b3c +0x08e2:  lea    0xc(%ebp),%eax
080e2b3f +0x08e5:  mov    %eax,(%esp)
080e2b42 +0x08e8:  call   080e379e <+0x1544>
080e2b47 +0x08ed:  mov    %eax,%ebx
080e2b49 +0x08ef:  mov    0x10(%ebp),%eax
080e2b4c +0x08f2:  mov    %eax,(%esp)
080e2b4f +0x08f5:  call   080e3796 <+0x153c>
080e2b54 +0x08fa:  mov    (%eax),%eax
080e2b56 +0x08fc:  mov    %eax,(%ebx)
080e2b58 +0x08fe:  jmp    080e2d5f <+0xb05>
080e2b5d +0x0903:  movl   $"vector::_M_insert_aux",0x8(%esp)
080e2b65 +0x090b:  movl   $0x1,0x4(%esp)
080e2b6d +0x0913:  mov    0x8(%ebp),%eax
080e2b70 +0x0916:  mov    %eax,(%esp)
080e2b73 +0x0919:  call   080e37a8 <+0x154e>
080e2b78 +0x091e:  mov    %eax,-0x18(%ebp)
080e2b7b +0x0921:  lea    -0x1c(%ebp),%eax
080e2b7e +0x0924:  mov    0x8(%ebp),%edx
080e2b81 +0x0927:  mov    %edx,0x4(%esp)
080e2b85 +0x092b:  mov    %eax,(%esp)
080e2b88 +0x092e:  call   080e384e <+0x15f4>
080e2b8d +0x0933:  sub    $0x4,%esp
080e2b90 +0x0936:  lea    -0x1c(%ebp),%eax
080e2b93 +0x0939:  mov    %eax,0x4(%esp)
080e2b97 +0x093d:  lea    0xc(%ebp),%eax
080e2b9a +0x0940:  mov    %eax,(%esp)
080e2b9d +0x0943:  call   080e3871 <+0x1617>
080e2ba2 +0x0948:  mov    %eax,-0x14(%ebp)
080e2ba5 +0x094b:  mov    0x8(%ebp),%eax
080e2ba8 +0x094e:  mov    -0x18(%ebp),%edx
080e2bab +0x0951:  mov    %edx,0x4(%esp)
080e2baf +0x0955:  mov    %eax,(%esp)
080e2bb2 +0x0958:  call   080e38a4 <+0x164a>
080e2bb7 +0x095d:  mov    %eax,-0x10(%ebp)
080e2bba +0x0960:  mov    -0x10(%ebp),%eax
080e2bbd +0x0963:  mov    %eax,-0xc(%ebp)
080e2bc0 +0x0966:  mov    0x10(%ebp),%eax
080e2bc3 +0x0969:  mov    %eax,(%esp)
080e2bc6 +0x096c:  call   080e3796 <+0x153c>
080e2bcb +0x0971:  mov    -0x14(%ebp),%edx
080e2bce +0x0974:  shl    $0x2,%edx
080e2bd1 +0x0977:  mov    %edx,%ecx
080e2bd3 +0x0979:  add    -0x10(%ebp),%ecx
080e2bd6 +0x097c:  mov    0x8(%ebp),%edx
080e2bd9 +0x097f:  mov    %eax,0x8(%esp)
080e2bdd +0x0983:  mov    %ecx,0x4(%esp)
080e2be1 +0x0987:  mov    %edx,(%esp)
080e2be4 +0x098a:  call   080e2a62 <+0x808>
080e2be9 +0x098f:  movl   $0x0,-0xc(%ebp)
080e2bf0 +0x0996:  mov    0x8(%ebp),%eax
080e2bf3 +0x0999:  mov    %eax,(%esp)
080e2bf6 +0x099c:  call   080e29de <+0x784>
080e2bfb +0x09a1:  mov    %eax,%ebx
080e2bfd +0x09a3:  lea    0xc(%ebp),%eax
080e2c00 +0x09a6:  mov    %eax,(%esp)
080e2c03 +0x09a9:  call   080e3756 <+0x14fc>
080e2c08 +0x09ae:  mov    (%eax),%edx
080e2c0a +0x09b0:  mov    0x8(%ebp),%eax
080e2c0d +0x09b3:  mov    (%eax),%eax
080e2c0f +0x09b5:  mov    %ebx,0xc(%esp)
080e2c13 +0x09b9:  mov    -0x10(%ebp),%ecx
080e2c16 +0x09bc:  mov    %ecx,0x8(%esp)
080e2c1a +0x09c0:  mov    %edx,0x4(%esp)
080e2c1e +0x09c4:  mov    %eax,(%esp)
080e2c21 +0x09c7:  call   080e38d3 <+0x1679>
080e2c26 +0x09cc:  mov    %eax,-0xc(%ebp)
080e2c29 +0x09cf:  addl   $0x4,-0xc(%ebp)
080e2c2d +0x09d3:  mov    0x8(%ebp),%eax
080e2c30 +0x09d6:  mov    %eax,(%esp)
080e2c33 +0x09d9:  call   080e29de <+0x784>
080e2c38 +0x09de:  mov    %eax,%ebx
080e2c3a +0x09e0:  mov    0x8(%ebp),%eax
080e2c3d +0x09e3:  mov    0x4(%eax),%esi
080e2c40 +0x09e6:  lea    0xc(%ebp),%eax
080e2c43 +0x09e9:  mov    %eax,(%esp)
080e2c46 +0x09ec:  call   080e3756 <+0x14fc>
080e2c4b +0x09f1:  mov    (%eax),%eax
080e2c4d +0x09f3:  mov    %ebx,0xc(%esp)
080e2c51 +0x09f7:  mov    -0xc(%ebp),%edx
080e2c54 +0x09fa:  mov    %edx,0x8(%esp)
080e2c58 +0x09fe:  mov    %esi,0x4(%esp)
080e2c5c +0x0a02:  mov    %eax,(%esp)
080e2c5f +0x0a05:  call   080e38d3 <+0x1679>
080e2c64 +0x0a0a:  mov    %eax,-0xc(%ebp)
080e2c67 +0x0a0d:  mov    0x8(%ebp),%eax
080e2c6a +0x0a10:  mov    %eax,(%esp)
080e2c6d +0x0a13:  call   080e29de <+0x784>
080e2c72 +0x0a18:  mov    0x8(%ebp),%edx
080e2c75 +0x0a1b:  mov    0x4(%edx),%ecx
080e2c78 +0x0a1e:  mov    0x8(%ebp),%edx
080e2c7b +0x0a21:  mov    (%edx),%edx
080e2c7d +0x0a23:  mov    %eax,0x8(%esp)
080e2c81 +0x0a27:  mov    %ecx,0x4(%esp)
080e2c85 +0x0a2b:  mov    %edx,(%esp)
080e2c88 +0x0a2e:  call   080e29e6 <+0x78c>
080e2c8d +0x0a33:  mov    0x8(%ebp),%eax
080e2c90 +0x0a36:  mov    0x8(%eax),%eax
080e2c93 +0x0a39:  mov    %eax,%edx
080e2c95 +0x0a3b:  mov    0x8(%ebp),%eax
080e2c98 +0x0a3e:  mov    (%eax),%eax
080e2c9a +0x0a40:  mov    %edx,%ecx
080e2c9c +0x0a42:  sub    %eax,%ecx
080e2c9e +0x0a44:  mov    %ecx,%eax
080e2ca0 +0x0a46:  sar    $0x2,%eax
080e2ca3 +0x0a49:  mov    %eax,%ecx
080e2ca5 +0x0a4b:  mov    0x8(%ebp),%eax
080e2ca8 +0x0a4e:  mov    (%eax),%edx
080e2caa +0x0a50:  mov    0x8(%ebp),%eax
080e2cad +0x0a53:  mov    %ecx,0x8(%esp)
080e2cb1 +0x0a57:  mov    %edx,0x4(%esp)
080e2cb5 +0x0a5b:  mov    %eax,(%esp)
080e2cb8 +0x0a5e:  call   080e3670 <+0x1416>
080e2cbd +0x0a63:  mov    0x8(%ebp),%eax
080e2cc0 +0x0a66:  mov    -0x10(%ebp),%edx
080e2cc3 +0x0a69:  mov    %edx,(%eax)
080e2cc5 +0x0a6b:  mov    0x8(%ebp),%eax
080e2cc8 +0x0a6e:  mov    -0xc(%ebp),%edx
080e2ccb +0x0a71:  mov    %edx,0x4(%eax)
080e2cce +0x0a74:  mov    -0x18(%ebp),%eax
080e2cd1 +0x0a77:  shl    $0x2,%eax
080e2cd4 +0x0a7a:  mov    %eax,%edx
080e2cd6 +0x0a7c:  add    -0x10(%ebp),%edx
080e2cd9 +0x0a7f:  mov    0x8(%ebp),%eax
080e2cdc +0x0a82:  mov    %edx,0x8(%eax)
080e2cdf +0x0a85:  jmp    080e2d5f <+0xb05>
080e2ce1 +0x0a87:  mov    %eax,(%esp)
080e2ce4 +0x0a8a:  call   08725ce0 <__cxa_begin_catch>
080e2ce9 +0x0a8f:  cmpl   $0x0,-0xc(%ebp)
080e2ced +0x0a93:  jne    080e2d0b <+0xab1>
080e2cef +0x0a95:  mov    -0x14(%ebp),%eax
080e2cf2 +0x0a98:  shl    $0x2,%eax
080e2cf5 +0x0a9b:  mov    %eax,%edx
080e2cf7 +0x0a9d:  add    -0x10(%ebp),%edx
080e2cfa +0x0aa0:  mov    0x8(%ebp),%eax
080e2cfd +0x0aa3:  mov    %edx,0x4(%esp)
080e2d01 +0x0aa7:  mov    %eax,(%esp)
080e2d04 +0x0aaa:  call   080e3926 <+0x16cc>
080e2d09 +0x0aaf:  jmp    080e2d2c <+0xad2>
080e2d0b +0x0ab1:  mov    0x8(%ebp),%eax
080e2d0e +0x0ab4:  mov    %eax,(%esp)
080e2d11 +0x0ab7:  call   080e29de <+0x784>
080e2d16 +0x0abc:  mov    %eax,0x8(%esp)
080e2d1a +0x0ac0:  mov    -0xc(%ebp),%eax
080e2d1d +0x0ac3:  mov    %eax,0x4(%esp)
080e2d21 +0x0ac7:  mov    -0x10(%ebp),%eax
080e2d24 +0x0aca:  mov    %eax,(%esp)
080e2d27 +0x0acd:  call   080e29e6 <+0x78c>
080e2d2c +0x0ad2:  mov    0x8(%ebp),%eax
080e2d2f +0x0ad5:  mov    -0x18(%ebp),%edx
080e2d32 +0x0ad8:  mov    %edx,0x8(%esp)
080e2d36 +0x0adc:  mov    -0x10(%ebp),%edx
080e2d39 +0x0adf:  mov    %edx,0x4(%esp)
080e2d3d +0x0ae3:  mov    %eax,(%esp)
080e2d40 +0x0ae6:  call   080e3670 <+0x1416>
080e2d45 +0x0aeb:  call   08724be0 <__cxa_rethrow>
080e2d4a +0x0af0:  mov    %edx,%ebx
080e2d4c +0x0af2:  mov    %eax,%esi
080e2d4e +0x0af4:  call   08725c30 <__cxa_end_catch>
080e2d53 +0x0af9:  mov    %esi,%eax
080e2d55 +0x0afb:  mov    %ebx,%edx
080e2d57 +0x0afd:  mov    %eax,(%esp)
080e2d5a +0x0b00:  call   08ae3750 <_Unwind_Resume>
080e2d5f +0x0b05:  lea    -0x8(%ebp),%esp
080e2d62 +0x0b08:  add    $0x0,%esp
080e2d65 +0x0b0b:  pop    %ebx
080e2d66 +0x0b0c:  pop    %esi
080e2d67 +0x0b0d:  pop    %ebp
080e2d68 +0x0b0e:  ret
080e2d69 +0x0b0f:  push   %ebp
080e2d6a +0x0b10:  mov    %esp,%ebp
080e2d6c +0x0b12:  mov    0x8(%ebp),%eax
080e2d6f +0x0b15:  pop    %ebp
080e2d70 +0x0b16:  ret
080e2d71 +0x0b17:  push   %ebp
080e2d72 +0x0b18:  mov    %esp,%ebp
080e2d74 +0x0b1a:  mov    0x8(%ebp),%eax
080e2d77 +0x0b1d:  pop    %ebp
080e2d78 +0x0b1e:  ret
080e2d79 +0x0b1f:  push   %ebp
080e2d7a +0x0b20:  mov    %esp,%ebp
080e2d7c +0x0b22:  mov    0x8(%ebp),%eax
080e2d7f +0x0b25:  pop    %ebp
080e2d80 +0x0b26:  ret
080e2d81 +0x0b27:  nop
080e2d82 +0x0b28:  push   %ebp
080e2d83 +0x0b29:  mov    %esp,%ebp
080e2d85 +0x0b2b:  sub    $0x18,%esp
080e2d88 +0x0b2e:  mov    0x8(%ebp),%eax
080e2d8b +0x0b31:  mov    %eax,(%esp)
080e2d8e +0x0b34:  call   080e392c <+0x16d2>
080e2d93 +0x0b39:  leave
080e2d94 +0x0b3a:  ret
080e2d95 +0x0b3b:  nop
080e2d96 +0x0b3c:  push   %ebp
080e2d97 +0x0b3d:  mov    %esp,%ebp
080e2d99 +0x0b3f:  sub    $0x18,%esp
080e2d9c +0x0b42:  mov    0x8(%ebp),%eax
080e2d9f +0x0b45:  mov    %eax,(%esp)
080e2da2 +0x0b48:  call   080e397c <+0x1722>
080e2da7 +0x0b4d:  leave
080e2da8 +0x0b4e:  ret
080e2da9 +0x0b4f:  nop
080e2daa +0x0b50:  push   %ebp
080e2dab +0x0b51:  mov    %esp,%ebp
080e2dad +0x0b53:  sub    $0x28,%esp
080e2db0 +0x0b56:  jmp    080e2df2 <+0xb98>
080e2db2 +0x0b58:  mov    0xc(%ebp),%eax
080e2db5 +0x0b5b:  mov    %eax,(%esp)
080e2db8 +0x0b5e:  call   080e3981 <+0x1727>
080e2dbd +0x0b63:  mov    %eax,0x4(%esp)
080e2dc1 +0x0b67:  mov    0x8(%ebp),%eax
080e2dc4 +0x0b6a:  mov    %eax,(%esp)
080e2dc7 +0x0b6d:  call   080e2daa <+0xb50>
080e2dcc +0x0b72:  mov    0xc(%ebp),%eax
080e2dcf +0x0b75:  mov    %eax,(%esp)
080e2dd2 +0x0b78:  call   080e398c <+0x1732>
080e2dd7 +0x0b7d:  mov    %eax,-0xc(%ebp)
080e2dda +0x0b80:  mov    0xc(%ebp),%eax
080e2ddd +0x0b83:  mov    %eax,0x4(%esp)
080e2de1 +0x0b87:  mov    0x8(%ebp),%eax
080e2de4 +0x0b8a:  mov    %eax,(%esp)
080e2de7 +0x0b8d:  call   080e3998 <+0x173e>
080e2dec +0x0b92:  mov    -0xc(%ebp),%eax
080e2def +0x0b95:  mov    %eax,0xc(%ebp)
080e2df2 +0x0b98:  cmpl   $0x0,0xc(%ebp)
080e2df6 +0x0b9c:  setne  %al
080e2df9 +0x0b9f:  test   %al,%al
080e2dfb +0x0ba1:  jne    080e2db2 <+0xb58>
080e2dfd +0x0ba3:  leave
080e2dfe +0x0ba4:  ret
080e2dff +0x0ba5:  nop
080e2e00 +0x0ba6:  push   %ebp
080e2e01 +0x0ba7:  mov    %esp,%ebp
080e2e03 +0x0ba9:  mov    0x8(%ebp),%eax
080e2e06 +0x0bac:  mov    0x8(%eax),%eax
080e2e09 +0x0baf:  pop    %ebp
080e2e0a +0x0bb0:  ret
080e2e0b +0x0bb1:  nop
080e2e0c +0x0bb2:  push   %ebp
080e2e0d +0x0bb3:  mov    %esp,%ebp
080e2e0f +0x0bb5:  sub    $0x28,%esp
080e2e12 +0x0bb8:  jmp    080e2e54 <+0xbfa>
080e2e14 +0x0bba:  mov    0xc(%ebp),%eax
080e2e17 +0x0bbd:  mov    %eax,(%esp)
080e2e1a +0x0bc0:  call   080e39cc <+0x1772>
080e2e1f +0x0bc5:  mov    %eax,0x4(%esp)
080e2e23 +0x0bc9:  mov    0x8(%ebp),%eax
080e2e26 +0x0bcc:  mov    %eax,(%esp)
080e2e29 +0x0bcf:  call   080e2e0c <+0xbb2>
080e2e2e +0x0bd4:  mov    0xc(%ebp),%eax
080e2e31 +0x0bd7:  mov    %eax,(%esp)
080e2e34 +0x0bda:  call   080e39d7 <+0x177d>
080e2e39 +0x0bdf:  mov    %eax,-0xc(%ebp)
080e2e3c +0x0be2:  mov    0xc(%ebp),%eax
080e2e3f +0x0be5:  mov    %eax,0x4(%esp)
080e2e43 +0x0be9:  mov    0x8(%ebp),%eax
080e2e46 +0x0bec:  mov    %eax,(%esp)
080e2e49 +0x0bef:  call   080e39e2 <+0x1788>
080e2e4e +0x0bf4:  mov    -0xc(%ebp),%eax
080e2e51 +0x0bf7:  mov    %eax,0xc(%ebp)
080e2e54 +0x0bfa:  cmpl   $0x0,0xc(%ebp)
080e2e58 +0x0bfe:  setne  %al
080e2e5b +0x0c01:  test   %al,%al
080e2e5d +0x0c03:  jne    080e2e14 <+0xbba>
080e2e5f +0x0c05:  leave
080e2e60 +0x0c06:  ret
080e2e61 +0x0c07:  nop
080e2e62 +0x0c08:  push   %ebp
080e2e63 +0x0c09:  mov    %esp,%ebp
080e2e65 +0x0c0b:  mov    0x8(%ebp),%eax
080e2e68 +0x0c0e:  mov    0x8(%eax),%eax
080e2e6b +0x0c11:  pop    %ebp
080e2e6c +0x0c12:  ret
080e2e6d +0x0c13:  nop
080e2e6e +0x0c14:  push   %ebp
080e2e6f +0x0c15:  mov    %esp,%ebp
080e2e71 +0x0c17:  push   %esi
080e2e72 +0x0c18:  push   %ebx
080e2e73 +0x0c19:  sub    $0x30,%esp
080e2e76 +0x0c1c:  mov    0x8(%ebp),%ebx
080e2e79 +0x0c1f:  mov    0xc(%ebp),%eax
080e2e7c +0x0c22:  mov    %eax,(%esp)
080e2e7f +0x0c25:  call   080e3a16 <+0x17bc>
080e2e84 +0x0c2a:  mov    %eax,%esi
080e2e86 +0x0c2c:  mov    0xc(%ebp),%eax
080e2e89 +0x0c2f:  mov    %eax,(%esp)
080e2e8c +0x0c32:  call   080e2a56 <+0x7fc>
080e2e91 +0x0c37:  lea    -0x10(%ebp),%edx
080e2e94 +0x0c3a:  mov    0x10(%ebp),%ecx
080e2e97 +0x0c3d:  mov    %ecx,0x10(%esp)
080e2e9b +0x0c41:  mov    %esi,0xc(%esp)
080e2e9f +0x0c45:  mov    %eax,0x8(%esp)
080e2ea3 +0x0c49:  mov    0xc(%ebp),%eax
080e2ea6 +0x0c4c:  mov    %eax,0x4(%esp)
080e2eaa +0x0c50:  mov    %edx,(%esp)
080e2ead +0x0c53:  call   080e3a22 <+0x17c8>
080e2eb2 +0x0c58:  sub    $0x4,%esp
080e2eb5 +0x0c5b:  lea    -0xc(%ebp),%eax
080e2eb8 +0x0c5e:  mov    0xc(%ebp),%edx
080e2ebb +0x0c61:  mov    %edx,0x4(%esp)
080e2ebf +0x0c65:  mov    %eax,(%esp)
080e2ec2 +0x0c68:  call   080e2f2c <+0xcd2>
080e2ec7 +0x0c6d:  sub    $0x4,%esp
080e2eca +0x0c70:  lea    -0xc(%ebp),%eax
080e2ecd +0x0c73:  mov    %eax,0x4(%esp)
080e2ed1 +0x0c77:  lea    -0x10(%ebp),%eax
080e2ed4 +0x0c7a:  mov    %eax,(%esp)
080e2ed7 +0x0c7d:  call   080e2648 <+0x3ee>
080e2edc +0x0c82:  test   %al,%al
080e2ede +0x0c84:  jne    080e2f05 <+0xcab>
080e2ee0 +0x0c86:  mov    -0x10(%ebp),%eax
080e2ee3 +0x0c89:  mov    %eax,(%esp)
080e2ee6 +0x0c8c:  call   080e3a9e <+0x1844>
080e2eeb +0x0c91:  mov    0xc(%ebp),%edx
080e2eee +0x0c94:  mov    %eax,0x8(%esp)
080e2ef2 +0x0c98:  mov    0x10(%ebp),%eax
080e2ef5 +0x0c9b:  mov    %eax,0x4(%esp)
080e2ef9 +0x0c9f:  mov    %edx,(%esp)
080e2efc +0x0ca2:  call   080e36fc <+0x14a2>
080e2f01 +0x0ca7:  test   %al,%al
080e2f03 +0x0ca9:  je     080e2f19 <+0xcbf>
080e2f05 +0x0cab:  mov    0xc(%ebp),%eax
080e2f08 +0x0cae:  mov    %eax,0x4(%esp)
080e2f0c +0x0cb2:  mov    %ebx,(%esp)
080e2f0f +0x0cb5:  call   080e2f2c <+0xcd2>
080e2f14 +0x0cba:  sub    $0x4,%esp
080e2f17 +0x0cbd:  jmp    080e2f1e <+0xcc4>
080e2f19 +0x0cbf:  mov    -0x10(%ebp),%eax
080e2f1c +0x0cc2:  mov    %eax,(%ebx)
080e2f1e +0x0cc4:  mov    %ebx,%eax
080e2f20 +0x0cc6:  lea    -0x8(%ebp),%esp
080e2f23 +0x0cc9:  add    $0x0,%esp
080e2f26 +0x0ccc:  pop    %ebx
080e2f27 +0x0ccd:  pop    %esi
080e2f28 +0x0cce:  pop    %ebp
080e2f29 +0x0ccf:  ret    $0x4
080e2f2c +0x0cd2:  push   %ebp
080e2f2d +0x0cd3:  mov    %esp,%ebp
080e2f2f +0x0cd5:  push   %ebx
080e2f30 +0x0cd6:  sub    $0x14,%esp
080e2f33 +0x0cd9:  mov    0x8(%ebp),%ebx
080e2f36 +0x0cdc:  mov    0xc(%ebp),%eax
080e2f39 +0x0cdf:  add    $0x4,%eax
080e2f3c +0x0ce2:  mov    %eax,0x4(%esp)
080e2f40 +0x0ce6:  mov    %ebx,(%esp)
080e2f43 +0x0ce9:  call   080e3ac0 <+0x1866>
080e2f48 +0x0cee:  mov    %ebx,%eax
080e2f4a +0x0cf0:  add    $0x14,%esp
080e2f4d +0x0cf3:  pop    %ebx
080e2f4e +0x0cf4:  pop    %ebp
080e2f4f +0x0cf5:  ret    $0x4
080e2f52 +0x0cf8:  push   %ebp
080e2f53 +0x0cf9:  mov    %esp,%ebp
080e2f55 +0x0cfb:  push   %esi
080e2f56 +0x0cfc:  push   %ebx
080e2f57 +0x0cfd:  sub    $0x50,%esp
080e2f5a +0x0d00:  mov    0x8(%ebp),%ebx
080e2f5d +0x0d03:  mov    0xc(%ebp),%eax
080e2f60 +0x0d06:  mov    %eax,(%esp)
080e2f63 +0x0d09:  call   080e2a56 <+0x7fc>
080e2f68 +0x0d0e:  mov    %eax,-0x14(%ebp)
080e2f6b +0x0d11:  mov    0xc(%ebp),%eax
080e2f6e +0x0d14:  mov    %eax,(%esp)
080e2f71 +0x0d17:  call   080e3a16 <+0x17bc>
080e2f76 +0x0d1c:  mov    %eax,-0x10(%ebp)
080e2f79 +0x0d1f:  movb   $0x1,-0x9(%ebp)
080e2f7d +0x0d23:  jmp    080e2fdb <+0xd81>
080e2f7f +0x0d25:  mov    -0x14(%ebp),%eax
080e2f82 +0x0d28:  mov    %eax,-0x10(%ebp)
080e2f85 +0x0d2b:  mov    -0x14(%ebp),%eax
080e2f88 +0x0d2e:  mov    %eax,(%esp)
080e2f8b +0x0d31:  call   080e3ad6 <+0x187c>
080e2f90 +0x0d36:  mov    %eax,%esi
080e2f92 +0x0d38:  mov    0x10(%ebp),%eax
080e2f95 +0x0d3b:  mov    %eax,0x4(%esp)
080e2f99 +0x0d3f:  lea    -0x2d(%ebp),%eax
080e2f9c +0x0d42:  mov    %eax,(%esp)
080e2f9f +0x0d45:  call   080e3ace <+0x1874>
080e2fa4 +0x0d4a:  mov    0xc(%ebp),%edx
080e2fa7 +0x0d4d:  mov    %esi,0x8(%esp)
080e2fab +0x0d51:  mov    %eax,0x4(%esp)
080e2faf +0x0d55:  mov    %edx,(%esp)
080e2fb2 +0x0d58:  call   080e36fc <+0x14a2>
080e2fb7 +0x0d5d:  mov    %al,-0x9(%ebp)
080e2fba +0x0d60:  cmpb   $0x0,-0x9(%ebp)
080e2fbe +0x0d64:  je     080e2fcd <+0xd73>
080e2fc0 +0x0d66:  mov    -0x14(%ebp),%eax
080e2fc3 +0x0d69:  mov    %eax,(%esp)
080e2fc6 +0x0d6c:  call   080e36bc <+0x1462>
080e2fcb +0x0d71:  jmp    080e2fd8 <+0xd7e>
080e2fcd +0x0d73:  mov    -0x14(%ebp),%eax
080e2fd0 +0x0d76:  mov    %eax,(%esp)
080e2fd3 +0x0d79:  call   080e36b1 <+0x1457>
080e2fd8 +0x0d7e:  mov    %eax,-0x14(%ebp)
080e2fdb +0x0d81:  cmpl   $0x0,-0x14(%ebp)
080e2fdf +0x0d85:  setne  %al
080e2fe2 +0x0d88:  test   %al,%al
080e2fe4 +0x0d8a:  jne    080e2f7f <+0xd25>
080e2fe6 +0x0d8c:  mov    -0x10(%ebp),%eax
080e2fe9 +0x0d8f:  mov    %eax,0x4(%esp)
080e2fed +0x0d93:  lea    -0x34(%ebp),%eax
080e2ff0 +0x0d96:  mov    %eax,(%esp)
080e2ff3 +0x0d99:  call   080e3ac0 <+0x1866>
080e2ff8 +0x0d9e:  cmpb   $0x0,-0x9(%ebp)
080e2ffc +0x0da2:  je     080e307d <+0xe23>
080e2ffe +0x0da4:  lea    -0x2c(%ebp),%eax
080e3001 +0x0da7:  mov    0xc(%ebp),%edx
080e3004 +0x0daa:  mov    %edx,0x4(%esp)
080e3008 +0x0dae:  mov    %eax,(%esp)
080e300b +0x0db1:  call   080e3af8 <+0x189e>
080e3010 +0x0db6:  sub    $0x4,%esp
080e3013 +0x0db9:  lea    -0x2c(%ebp),%eax
080e3016 +0x0dbc:  mov    %eax,0x4(%esp)
080e301a +0x0dc0:  lea    -0x34(%ebp),%eax
080e301d +0x0dc3:  mov    %eax,(%esp)
080e3020 +0x0dc6:  call   080e2648 <+0x3ee>
080e3025 +0x0dcb:  test   %al,%al
080e3027 +0x0dcd:  je     080e3072 <+0xe18>
080e3029 +0x0dcf:  movb   $0x1,-0x25(%ebp)
080e302d +0x0dd3:  mov    -0x10(%ebp),%ecx
080e3030 +0x0dd6:  mov    -0x14(%ebp),%edx
080e3033 +0x0dd9:  lea    -0x24(%ebp),%eax
080e3036 +0x0ddc:  mov    0x10(%ebp),%esi
080e3039 +0x0ddf:  mov    %esi,0x10(%esp)
080e303d +0x0de3:  mov    %ecx,0xc(%esp)
080e3041 +0x0de7:  mov    %edx,0x8(%esp)
080e3045 +0x0deb:  mov    0xc(%ebp),%edx
080e3048 +0x0dee:  mov    %edx,0x4(%esp)
080e304c +0x0df2:  mov    %eax,(%esp)
080e304f +0x0df5:  call   080e3b1e <+0x18c4>
080e3054 +0x0dfa:  sub    $0x4,%esp
080e3057 +0x0dfd:  lea    -0x25(%ebp),%eax
080e305a +0x0e00:  mov    %eax,0x8(%esp)
080e305e +0x0e04:  lea    -0x24(%ebp),%eax
080e3061 +0x0e07:  mov    %eax,0x4(%esp)
080e3065 +0x0e0b:  mov    %ebx,(%esp)
080e3068 +0x0e0e:  call   080e3be6 <+0x198c>
080e306d +0x0e13:  jmp    080e3113 <+0xeb9>
080e3072 +0x0e18:  lea    -0x34(%ebp),%eax
080e3075 +0x0e1b:  mov    %eax,(%esp)
080e3078 +0x0e1e:  call   080e3c14 <+0x19ba>
080e307d +0x0e23:  mov    0x10(%ebp),%eax
080e3080 +0x0e26:  mov    %eax,0x4(%esp)
080e3084 +0x0e2a:  lea    -0x1e(%ebp),%eax
080e3087 +0x0e2d:  mov    %eax,(%esp)
080e308a +0x0e30:  call   080e3ace <+0x1874>
080e308f +0x0e35:  mov    %eax,%esi
080e3091 +0x0e37:  mov    -0x34(%ebp),%eax
080e3094 +0x0e3a:  mov    %eax,(%esp)
080e3097 +0x0e3d:  call   080e3a9e <+0x1844>
080e309c +0x0e42:  mov    0xc(%ebp),%edx
080e309f +0x0e45:  mov    %esi,0x8(%esp)
080e30a3 +0x0e49:  mov    %eax,0x4(%esp)
080e30a7 +0x0e4d:  mov    %edx,(%esp)
080e30aa +0x0e50:  call   080e36fc <+0x14a2>
080e30af +0x0e55:  test   %al,%al
080e30b1 +0x0e57:  je     080e30f9 <+0xe9f>
080e30b3 +0x0e59:  movb   $0x1,-0x1d(%ebp)
080e30b7 +0x0e5d:  mov    -0x10(%ebp),%ecx
080e30ba +0x0e60:  mov    -0x14(%ebp),%edx
080e30bd +0x0e63:  lea    -0x1c(%ebp),%eax
080e30c0 +0x0e66:  mov    0x10(%ebp),%esi
080e30c3 +0x0e69:  mov    %esi,0x10(%esp)
080e30c7 +0x0e6d:  mov    %ecx,0xc(%esp)
080e30cb +0x0e71:  mov    %edx,0x8(%esp)
080e30cf +0x0e75:  mov    0xc(%ebp),%edx
080e30d2 +0x0e78:  mov    %edx,0x4(%esp)
080e30d6 +0x0e7c:  mov    %eax,(%esp)
080e30d9 +0x0e7f:  call   080e3b1e <+0x18c4>
080e30de +0x0e84:  sub    $0x4,%esp
080e30e1 +0x0e87:  lea    -0x1d(%ebp),%eax
080e30e4 +0x0e8a:  mov    %eax,0x8(%esp)
080e30e8 +0x0e8e:  lea    -0x1c(%ebp),%eax
080e30eb +0x0e91:  mov    %eax,0x4(%esp)
080e30ef +0x0e95:  mov    %ebx,(%esp)
080e30f2 +0x0e98:  call   080e3be6 <+0x198c>
080e30f7 +0x0e9d:  jmp    080e3113 <+0xeb9>
080e30f9 +0x0e9f:  movb   $0x0,-0x15(%ebp)
080e30fd +0x0ea3:  lea    -0x15(%ebp),%eax
080e3100 +0x0ea6:  mov    %eax,0x8(%esp)
080e3104 +0x0eaa:  lea    -0x34(%ebp),%eax
080e3107 +0x0ead:  mov    %eax,0x4(%esp)
080e310b +0x0eb1:  mov    %ebx,(%esp)
080e310e +0x0eb4:  call   080e3c32 <+0x19d8>
080e3113 +0x0eb9:  mov    %ebx,%eax
080e3115 +0x0ebb:  lea    -0x8(%ebp),%esp
080e3118 +0x0ebe:  add    $0x0,%esp
080e311b +0x0ec1:  pop    %ebx
080e311c +0x0ec2:  pop    %esi
080e311d +0x0ec3:  pop    %ebp
080e311e +0x0ec4:  ret    $0x4
080e3121 +0x0ec7:  nop
080e3122 +0x0ec8:  push   %ebp
080e3123 +0x0ec9:  mov    %esp,%ebp
080e3125 +0x0ecb:  push   %esi
080e3126 +0x0ecc:  push   %ebx
080e3127 +0x0ecd:  sub    $0x30,%esp
080e312a +0x0ed0:  mov    0x8(%ebp),%ebx
080e312d +0x0ed3:  mov    0xc(%ebp),%eax
080e3130 +0x0ed6:  mov    %eax,(%esp)
080e3133 +0x0ed9:  call   080e3c60 <+0x1a06>
080e3138 +0x0ede:  mov    %eax,%esi
080e313a +0x0ee0:  mov    0xc(%ebp),%eax
080e313d +0x0ee3:  mov    %eax,(%esp)
080e3140 +0x0ee6:  call   080e2e62 <+0xc08>
080e3145 +0x0eeb:  lea    -0x10(%ebp),%edx
080e3148 +0x0eee:  mov    0x10(%ebp),%ecx
080e314b +0x0ef1:  mov    %ecx,0x10(%esp)
080e314f +0x0ef5:  mov    %esi,0xc(%esp)
080e3153 +0x0ef9:  mov    %eax,0x8(%esp)
080e3157 +0x0efd:  mov    0xc(%ebp),%eax
080e315a +0x0f00:  mov    %eax,0x4(%esp)
080e315e +0x0f04:  mov    %edx,(%esp)
080e3161 +0x0f07:  call   080e3c6c <+0x1a12>
080e3166 +0x0f0c:  sub    $0x4,%esp
080e3169 +0x0f0f:  lea    -0xc(%ebp),%eax
080e316c +0x0f12:  mov    0xc(%ebp),%edx
080e316f +0x0f15:  mov    %edx,0x4(%esp)
080e3173 +0x0f19:  mov    %eax,(%esp)
080e3176 +0x0f1c:  call   080e31e0 <+0xf86>
080e317b +0x0f21:  sub    $0x4,%esp
080e317e +0x0f24:  lea    -0xc(%ebp),%eax
080e3181 +0x0f27:  mov    %eax,0x4(%esp)
080e3185 +0x0f2b:  lea    -0x10(%ebp),%eax
080e3188 +0x0f2e:  mov    %eax,(%esp)
080e318b +0x0f31:  call   080e3d0a <+0x1ab0>
080e3190 +0x0f36:  test   %al,%al
080e3192 +0x0f38:  jne    080e31b9 <+0xf5f>
080e3194 +0x0f3a:  mov    -0x10(%ebp),%eax
080e3197 +0x0f3d:  mov    %eax,(%esp)
080e319a +0x0f40:  call   080e3ce8 <+0x1a8e>
080e319f +0x0f45:  mov    0xc(%ebp),%edx
080e31a2 +0x0f48:  mov    %eax,0x8(%esp)
080e31a6 +0x0f4c:  mov    0x10(%ebp),%eax
080e31a9 +0x0f4f:  mov    %eax,0x4(%esp)
080e31ad +0x0f53:  mov    %edx,(%esp)
080e31b0 +0x0f56:  call   080e36fc <+0x14a2>
080e31b5 +0x0f5b:  test   %al,%al
080e31b7 +0x0f5d:  je     080e31cd <+0xf73>
080e31b9 +0x0f5f:  mov    0xc(%ebp),%eax
080e31bc +0x0f62:  mov    %eax,0x4(%esp)
080e31c0 +0x0f66:  mov    %ebx,(%esp)
080e31c3 +0x0f69:  call   080e31e0 <+0xf86>
080e31c8 +0x0f6e:  sub    $0x4,%esp
080e31cb +0x0f71:  jmp    080e31d2 <+0xf78>
080e31cd +0x0f73:  mov    -0x10(%ebp),%eax
080e31d0 +0x0f76:  mov    %eax,(%ebx)
080e31d2 +0x0f78:  mov    %ebx,%eax
080e31d4 +0x0f7a:  lea    -0x8(%ebp),%esp
080e31d7 +0x0f7d:  add    $0x0,%esp
080e31da +0x0f80:  pop    %ebx
080e31db +0x0f81:  pop    %esi
080e31dc +0x0f82:  pop    %ebp
080e31dd +0x0f83:  ret    $0x4
080e31e0 +0x0f86:  push   %ebp
080e31e1 +0x0f87:  mov    %esp,%ebp
080e31e3 +0x0f89:  push   %ebx
080e31e4 +0x0f8a:  sub    $0x14,%esp
080e31e7 +0x0f8d:  mov    0x8(%ebp),%ebx
080e31ea +0x0f90:  mov    0xc(%ebp),%eax
080e31ed +0x0f93:  add    $0x4,%eax
080e31f0 +0x0f96:  mov    %eax,0x4(%esp)
080e31f4 +0x0f9a:  mov    %ebx,(%esp)
080e31f7 +0x0f9d:  call   080e3d1e <+0x1ac4>
080e31fc +0x0fa2:  mov    %ebx,%eax
080e31fe +0x0fa4:  add    $0x14,%esp
080e3201 +0x0fa7:  pop    %ebx
080e3202 +0x0fa8:  pop    %ebp
080e3203 +0x0fa9:  ret    $0x4
080e3206 +0x0fac:  push   %ebp
080e3207 +0x0fad:  mov    %esp,%ebp
080e3209 +0x0faf:  push   %ebx
080e320a +0x0fb0:  sub    $0x14,%esp
080e320d +0x0fb3:  mov    0x8(%ebp),%eax
080e3210 +0x0fb6:  mov    %eax,(%esp)
080e3213 +0x0fb9:  call   080e2a56 <+0x7fc>
080e3218 +0x0fbe:  mov    %eax,0x4(%esp)
080e321c +0x0fc2:  mov    0x8(%ebp),%eax
080e321f +0x0fc5:  mov    %eax,(%esp)
080e3222 +0x0fc8:  call   080e2a00 <+0x7a6>
080e3227 +0x0fcd:  mov    0x8(%ebp),%eax
080e322a +0x0fd0:  mov    %eax,(%esp)
080e322d +0x0fd3:  call   080e3d2c <+0x1ad2>
080e3232 +0x0fd8:  mov    %eax,%ebx
080e3234 +0x0fda:  mov    0x8(%ebp),%eax
080e3237 +0x0fdd:  mov    %eax,(%esp)
080e323a +0x0fe0:  call   080e3a16 <+0x17bc>
080e323f +0x0fe5:  mov    %eax,(%ebx)
080e3241 +0x0fe7:  mov    0x8(%ebp),%eax
080e3244 +0x0fea:  mov    %eax,(%esp)
080e3247 +0x0fed:  call   080e3d38 <+0x1ade>
080e324c +0x0ff2:  movl   $0x0,(%eax)
080e3252 +0x0ff8:  mov    0x8(%ebp),%eax
080e3255 +0x0ffb:  mov    %eax,(%esp)
080e3258 +0x0ffe:  call   080e3d44 <+0x1aea>
080e325d +0x1003:  mov    %eax,%ebx
080e325f +0x1005:  mov    0x8(%ebp),%eax
080e3262 +0x1008:  mov    %eax,(%esp)
080e3265 +0x100b:  call   080e3a16 <+0x17bc>
080e326a +0x1010:  mov    %eax,(%ebx)
080e326c +0x1012:  mov    0x8(%ebp),%eax
080e326f +0x1015:  movl   $0x0,0x14(%eax)
080e3276 +0x101c:  add    $0x14,%esp
080e3279 +0x101f:  pop    %ebx
080e327a +0x1020:  pop    %ebp
080e327b +0x1021:  ret
080e327c +0x1022:  push   %ebp
080e327d +0x1023:  mov    %esp,%ebp
080e327f +0x1025:  push   %ebx
080e3280 +0x1026:  sub    $0x14,%esp
080e3283 +0x1029:  mov    0x8(%ebp),%eax
080e3286 +0x102c:  mov    %eax,(%esp)
080e3289 +0x102f:  call   080e2e62 <+0xc08>
080e328e +0x1034:  mov    %eax,0x4(%esp)
080e3292 +0x1038:  mov    0x8(%ebp),%eax
080e3295 +0x103b:  mov    %eax,(%esp)
080e3298 +0x103e:  call   080e2e0c <+0xbb2>
080e329d +0x1043:  mov    0x8(%ebp),%eax
080e32a0 +0x1046:  mov    %eax,(%esp)
080e32a3 +0x1049:  call   080e3d50 <+0x1af6>
080e32a8 +0x104e:  mov    %eax,%ebx
080e32aa +0x1050:  mov    0x8(%ebp),%eax
080e32ad +0x1053:  mov    %eax,(%esp)
080e32b0 +0x1056:  call   080e3c60 <+0x1a06>
080e32b5 +0x105b:  mov    %eax,(%ebx)
080e32b7 +0x105d:  mov    0x8(%ebp),%eax
080e32ba +0x1060:  mov    %eax,(%esp)
080e32bd +0x1063:  call   080e3d5c <+0x1b02>
080e32c2 +0x1068:  movl   $0x0,(%eax)
080e32c8 +0x106e:  mov    0x8(%ebp),%eax
080e32cb +0x1071:  mov    %eax,(%esp)
080e32ce +0x1074:  call   080e3d68 <+0x1b0e>
080e32d3 +0x1079:  mov    %eax,%ebx
080e32d5 +0x107b:  mov    0x8(%ebp),%eax
080e32d8 +0x107e:  mov    %eax,(%esp)
080e32db +0x1081:  call   080e3c60 <+0x1a06>
080e32e0 +0x1086:  mov    %eax,(%ebx)
080e32e2 +0x1088:  mov    0x8(%ebp),%eax
080e32e5 +0x108b:  movl   $0x0,0x14(%eax)
080e32ec +0x1092:  add    $0x14,%esp
080e32ef +0x1095:  pop    %ebx
080e32f0 +0x1096:  pop    %ebp
080e32f1 +0x1097:  ret
080e32f2 +0x1098:  push   %ebp
080e32f3 +0x1099:  mov    %esp,%ebp
080e32f5 +0x109b:  push   %ebx
080e32f6 +0x109c:  sub    $0x14,%esp
080e32f9 +0x109f:  mov    0x8(%ebp),%ebx
080e32fc +0x10a2:  mov    0xc(%ebp),%eax
080e32ff +0x10a5:  mov    0xc(%eax),%eax
080e3302 +0x10a8:  mov    %eax,0x4(%esp)
080e3306 +0x10ac:  mov    %ebx,(%esp)
080e3309 +0x10af:  call   080e3d1e <+0x1ac4>
080e330e +0x10b4:  mov    %ebx,%eax
080e3310 +0x10b6:  add    $0x14,%esp
080e3313 +0x10b9:  pop    %ebx
080e3314 +0x10ba:  pop    %ebp
080e3315 +0x10bb:  ret    $0x4
080e3318 +0x10be:  push   %ebp
080e3319 +0x10bf:  mov    %esp,%ebp
080e331b +0x10c1:  mov    0x8(%ebp),%eax
080e331e +0x10c4:  mov    0x14(%eax),%eax
080e3321 +0x10c7:  pop    %ebp
080e3322 +0x10c8:  ret
080e3323 +0x10c9:  nop
080e3324 +0x10ca:  push   %ebp
080e3325 +0x10cb:  mov    %esp,%ebp
080e3327 +0x10cd:  push   %ebx
080e3328 +0x10ce:  sub    $0x24,%esp
080e332b +0x10d1:  mov    0x8(%ebp),%ebx
080e332e +0x10d4:  mov    0xc(%ebp),%eax
080e3331 +0x10d7:  mov    0x4(%eax),%eax
080e3334 +0x10da:  mov    %eax,-0xc(%ebp)
080e3337 +0x10dd:  lea    -0xc(%ebp),%eax
080e333a +0x10e0:  mov    %eax,0x4(%esp)
080e333e +0x10e4:  mov    %ebx,(%esp)
080e3341 +0x10e7:  call   080e3d74 <+0x1b1a>
080e3346 +0x10ec:  mov    %ebx,%eax
080e3348 +0x10ee:  add    $0x24,%esp
080e334b +0x10f1:  pop    %ebx
080e334c +0x10f2:  pop    %ebp
080e334d +0x10f3:  ret    $0x4
080e3350 +0x10f6:  push   %ebp
080e3351 +0x10f7:  mov    %esp,%ebp
080e3353 +0x10f9:  push   %ebx
080e3354 +0x10fa:  sub    $0x24,%esp
080e3357 +0x10fd:  mov    0x8(%ebp),%ebx
080e335a +0x1100:  mov    0xc(%ebp),%eax
080e335d +0x1103:  mov    (%eax),%eax
080e335f +0x1105:  mov    %eax,-0xc(%ebp)
080e3362 +0x1108:  lea    -0xc(%ebp),%eax
080e3365 +0x110b:  mov    %eax,0x4(%esp)
080e3369 +0x110f:  mov    %ebx,(%esp)
080e336c +0x1112:  call   080e3d74 <+0x1b1a>
080e3371 +0x1117:  mov    %ebx,%eax
080e3373 +0x1119:  add    $0x24,%esp
080e3376 +0x111c:  pop    %ebx
080e3377 +0x111d:  pop    %ebp
080e3378 +0x111e:  ret    $0x4
080e337b +0x1121:  push   %ebp
080e337c +0x1122:  mov    %esp,%ebp
080e337e +0x1124:  push   %ebx
080e337f +0x1125:  sub    $0x14,%esp
080e3382 +0x1128:  mov    0x8(%ebp),%eax
080e3385 +0x112b:  mov    %eax,(%esp)
080e3388 +0x112e:  call   080e3d84 <+0x1b2a>
080e338d +0x1133:  mov    (%eax),%ebx
080e338f +0x1135:  mov    0xc(%ebp),%eax
080e3392 +0x1138:  mov    %eax,(%esp)
080e3395 +0x113b:  call   080e3d84 <+0x1b2a>
080e339a +0x1140:  mov    (%eax),%eax
080e339c +0x1142:  cmp    %eax,%ebx
080e339e +0x1144:  sete   %al
080e33a1 +0x1147:  add    $0x14,%esp
080e33a4 +0x114a:  pop    %ebx
080e33a5 +0x114b:  pop    %ebp
080e33a6 +0x114c:  ret
080e33a7 +0x114d:  push   %ebp
080e33a8 +0x114e:  mov    %esp,%ebp
080e33aa +0x1150:  mov    0x8(%ebp),%eax
080e33ad +0x1153:  pop    %ebp
080e33ae +0x1154:  ret
080e33af +0x1155:  nop
080e33b0 +0x1156:  push   %ebp
080e33b1 +0x1157:  mov    %esp,%ebp
080e33b3 +0x1159:  push   %esi
080e33b4 +0x115a:  push   %ebx
080e33b5 +0x115b:  sub    $0x50,%esp
080e33b8 +0x115e:  mov    0x8(%ebp),%ebx
080e33bb +0x1161:  mov    0xc(%ebp),%eax
080e33be +0x1164:  mov    %eax,(%esp)
080e33c1 +0x1167:  call   080e2e62 <+0xc08>
080e33c6 +0x116c:  mov    %eax,-0x14(%ebp)
080e33c9 +0x116f:  mov    0xc(%ebp),%eax
080e33cc +0x1172:  mov    %eax,(%esp)
080e33cf +0x1175:  call   080e3c60 <+0x1a06>
080e33d4 +0x117a:  mov    %eax,-0x10(%ebp)
080e33d7 +0x117d:  movb   $0x1,-0x9(%ebp)
080e33db +0x1181:  jmp    080e3439 <+0x11df>
080e33dd +0x1183:  mov    -0x14(%ebp),%eax
080e33e0 +0x1186:  mov    %eax,-0x10(%ebp)
080e33e3 +0x1189:  mov    -0x14(%ebp),%eax
080e33e6 +0x118c:  mov    %eax,(%esp)
080e33e9 +0x118f:  call   080e3d94 <+0x1b3a>
080e33ee +0x1194:  mov    %eax,%esi
080e33f0 +0x1196:  mov    0x10(%ebp),%eax
080e33f3 +0x1199:  mov    %eax,0x4(%esp)
080e33f7 +0x119d:  lea    -0x2d(%ebp),%eax
080e33fa +0x11a0:  mov    %eax,(%esp)
080e33fd +0x11a3:  call   080e3d8c <+0x1b32>
080e3402 +0x11a8:  mov    0xc(%ebp),%edx
080e3405 +0x11ab:  mov    %esi,0x8(%esp)
080e3409 +0x11af:  mov    %eax,0x4(%esp)
080e340d +0x11b3:  mov    %edx,(%esp)
080e3410 +0x11b6:  call   080e36fc <+0x14a2>
080e3415 +0x11bb:  mov    %al,-0x9(%ebp)
080e3418 +0x11be:  cmpb   $0x0,-0x9(%ebp)
080e341c +0x11c2:  je     080e342b <+0x11d1>
080e341e +0x11c4:  mov    -0x14(%ebp),%eax
080e3421 +0x11c7:  mov    %eax,(%esp)
080e3424 +0x11ca:  call   080e39d7 <+0x177d>
080e3429 +0x11cf:  jmp    080e3436 <+0x11dc>
080e342b +0x11d1:  mov    -0x14(%ebp),%eax
080e342e +0x11d4:  mov    %eax,(%esp)
080e3431 +0x11d7:  call   080e39cc <+0x1772>
080e3436 +0x11dc:  mov    %eax,-0x14(%ebp)
080e3439 +0x11df:  cmpl   $0x0,-0x14(%ebp)
080e343d +0x11e3:  setne  %al
080e3440 +0x11e6:  test   %al,%al
080e3442 +0x11e8:  jne    080e33dd <+0x1183>
080e3444 +0x11ea:  mov    -0x10(%ebp),%eax
080e3447 +0x11ed:  mov    %eax,0x4(%esp)
080e344b +0x11f1:  lea    -0x34(%ebp),%eax
080e344e +0x11f4:  mov    %eax,(%esp)
080e3451 +0x11f7:  call   080e3d1e <+0x1ac4>
080e3456 +0x11fc:  cmpb   $0x0,-0x9(%ebp)
080e345a +0x1200:  je     080e34db <+0x1281>
080e345c +0x1202:  lea    -0x2c(%ebp),%eax
080e345f +0x1205:  mov    0xc(%ebp),%edx
080e3462 +0x1208:  mov    %edx,0x4(%esp)
080e3466 +0x120c:  mov    %eax,(%esp)
080e3469 +0x120f:  call   080e32f2 <+0x1098>
080e346e +0x1214:  sub    $0x4,%esp
080e3471 +0x1217:  lea    -0x2c(%ebp),%eax
080e3474 +0x121a:  mov    %eax,0x4(%esp)
080e3478 +0x121e:  lea    -0x34(%ebp),%eax
080e347b +0x1221:  mov    %eax,(%esp)
080e347e +0x1224:  call   080e3d0a <+0x1ab0>
080e3483 +0x1229:  test   %al,%al
080e3485 +0x122b:  je     080e34d0 <+0x1276>
080e3487 +0x122d:  movb   $0x1,-0x25(%ebp)
080e348b +0x1231:  mov    -0x10(%ebp),%ecx
080e348e +0x1234:  mov    -0x14(%ebp),%edx
080e3491 +0x1237:  lea    -0x24(%ebp),%eax
080e3494 +0x123a:  mov    0x10(%ebp),%esi
080e3497 +0x123d:  mov    %esi,0x10(%esp)
080e349b +0x1241:  mov    %ecx,0xc(%esp)
080e349f +0x1245:  mov    %edx,0x8(%esp)
080e34a3 +0x1249:  mov    0xc(%ebp),%edx
080e34a6 +0x124c:  mov    %edx,0x4(%esp)
080e34aa +0x1250:  mov    %eax,(%esp)
080e34ad +0x1253:  call   080e3db6 <+0x1b5c>
080e34b2 +0x1258:  sub    $0x4,%esp
080e34b5 +0x125b:  lea    -0x25(%ebp),%eax
080e34b8 +0x125e:  mov    %eax,0x8(%esp)
080e34bc +0x1262:  lea    -0x24(%ebp),%eax
080e34bf +0x1265:  mov    %eax,0x4(%esp)
080e34c3 +0x1269:  mov    %ebx,(%esp)
080e34c6 +0x126c:  call   080e3e7e <+0x1c24>
080e34cb +0x1271:  jmp    080e3571 <+0x1317>
080e34d0 +0x1276:  lea    -0x34(%ebp),%eax
080e34d3 +0x1279:  mov    %eax,(%esp)
080e34d6 +0x127c:  call   080e3eac <+0x1c52>
080e34db +0x1281:  mov    0x10(%ebp),%eax
080e34de +0x1284:  mov    %eax,0x4(%esp)
080e34e2 +0x1288:  lea    -0x1e(%ebp),%eax
080e34e5 +0x128b:  mov    %eax,(%esp)
080e34e8 +0x128e:  call   080e3d8c <+0x1b32>
080e34ed +0x1293:  mov    %eax,%esi
080e34ef +0x1295:  mov    -0x34(%ebp),%eax
080e34f2 +0x1298:  mov    %eax,(%esp)
080e34f5 +0x129b:  call   080e3ce8 <+0x1a8e>
080e34fa +0x12a0:  mov    0xc(%ebp),%edx
080e34fd +0x12a3:  mov    %esi,0x8(%esp)
080e3501 +0x12a7:  mov    %eax,0x4(%esp)
080e3505 +0x12ab:  mov    %edx,(%esp)
080e3508 +0x12ae:  call   080e36fc <+0x14a2>
080e350d +0x12b3:  test   %al,%al
080e350f +0x12b5:  je     080e3557 <+0x12fd>
080e3511 +0x12b7:  movb   $0x1,-0x1d(%ebp)
080e3515 +0x12bb:  mov    -0x10(%ebp),%ecx
080e3518 +0x12be:  mov    -0x14(%ebp),%edx
080e351b +0x12c1:  lea    -0x1c(%ebp),%eax
080e351e +0x12c4:  mov    0x10(%ebp),%esi
080e3521 +0x12c7:  mov    %esi,0x10(%esp)
080e3525 +0x12cb:  mov    %ecx,0xc(%esp)
080e3529 +0x12cf:  mov    %edx,0x8(%esp)
080e352d +0x12d3:  mov    0xc(%ebp),%edx
080e3530 +0x12d6:  mov    %edx,0x4(%esp)
080e3534 +0x12da:  mov    %eax,(%esp)
080e3537 +0x12dd:  call   080e3db6 <+0x1b5c>
080e353c +0x12e2:  sub    $0x4,%esp
080e353f +0x12e5:  lea    -0x1d(%ebp),%eax
080e3542 +0x12e8:  mov    %eax,0x8(%esp)
080e3546 +0x12ec:  lea    -0x1c(%ebp),%eax
080e3549 +0x12ef:  mov    %eax,0x4(%esp)
080e354d +0x12f3:  mov    %ebx,(%esp)
080e3550 +0x12f6:  call   080e3e7e <+0x1c24>
080e3555 +0x12fb:  jmp    080e3571 <+0x1317>
080e3557 +0x12fd:  movb   $0x0,-0x15(%ebp)
080e355b +0x1301:  lea    -0x15(%ebp),%eax
080e355e +0x1304:  mov    %eax,0x8(%esp)
080e3562 +0x1308:  lea    -0x34(%ebp),%eax
080e3565 +0x130b:  mov    %eax,0x4(%esp)
080e3569 +0x130f:  mov    %ebx,(%esp)
080e356c +0x1312:  call   080e3eca <+0x1c70>
080e3571 +0x1317:  mov    %ebx,%eax
080e3573 +0x1319:  lea    -0x8(%ebp),%esp
080e3576 +0x131c:  add    $0x0,%esp
080e3579 +0x131f:  pop    %ebx
080e357a +0x1320:  pop    %esi
080e357b +0x1321:  pop    %ebp
080e357c +0x1322:  ret    $0x4
080e357f +0x1325:  nop
080e3580 +0x1326:  push   %ebp
080e3581 +0x1327:  mov    %esp,%ebp
080e3583 +0x1329:  sub    $0x28,%esp
080e3586 +0x132c:  mov    0x8(%ebp),%eax
080e3589 +0x132f:  lea    0x4(%eax),%edx
080e358c +0x1332:  mov    0xc(%ebp),%eax
080e358f +0x1335:  mov    %edx,0x4(%esp)
080e3593 +0x1339:  mov    %eax,(%esp)
080e3596 +0x133c:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
080e359b +0x1341:  mov    %eax,-0xc(%ebp)
080e359e +0x1344:  mov    -0xc(%ebp),%eax
080e35a1 +0x1347:  mov    %eax,0x4(%esp)
080e35a5 +0x134b:  mov    0x8(%ebp),%eax
080e35a8 +0x134e:  mov    %eax,(%esp)
080e35ab +0x1351:  call   080e36c8 <+0x146e>
080e35b0 +0x1356:  mov    0x8(%ebp),%eax
080e35b3 +0x1359:  mov    0x14(%eax),%eax
080e35b6 +0x135c:  lea    -0x1(%eax),%edx
080e35b9 +0x135f:  mov    0x8(%ebp),%eax
080e35bc +0x1362:  mov    %edx,0x14(%eax)
080e35bf +0x1365:  leave
080e35c0 +0x1366:  ret
080e35c1 +0x1367:  nop
080e35c2 +0x1368:  push   %ebp
080e35c3 +0x1369:  mov    %esp,%ebp
080e35c5 +0x136b:  sub    $0x28,%esp
080e35c8 +0x136e:  jmp    080e35e6 <+0x138c>
080e35ca +0x1370:  mov    0x8(%ebp),%eax
080e35cd +0x1373:  mov    %eax,(%esp)
080e35d0 +0x1376:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
080e35d5 +0x137b:  add    %eax,%eax
080e35d7 +0x137d:  mov    %eax,0x4(%esp)
080e35db +0x1381:  mov    0x8(%ebp),%eax
080e35de +0x1384:  mov    %eax,(%esp)
080e35e1 +0x1387:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
080e35e6 +0x138c:  movl   $0x80,0x4(%esp)
080e35ee +0x1394:  mov    0x8(%ebp),%eax
080e35f1 +0x1397:  mov    %eax,(%esp)
080e35f4 +0x139a:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
080e35f9 +0x139f:  xor    $0x1,%eax
080e35fc +0x13a2:  test   %al,%al
080e35fe +0x13a4:  jne    080e35ca <+0x1370>
080e3600 +0x13a6:  mov    0x8(%ebp),%eax
080e3603 +0x13a9:  mov    0x8(%eax),%eax
080e3606 +0x13ac:  mov    %eax,%edx
080e3608 +0x13ae:  mov    0x8(%ebp),%eax
080e360b +0x13b1:  mov    0xc(%eax),%eax
080e360e +0x13b4:  lea    (%edx,%eax,1),%eax
080e3611 +0x13b7:  mov    %eax,-0xc(%ebp)
080e3614 +0x13ba:  movl   $0x80,0x4(%esp)
080e361c +0x13c2:  mov    0x8(%ebp),%eax
080e361f +0x13c5:  mov    %eax,(%esp)
080e3622 +0x13c8:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
080e3627 +0x13cd:  mov    -0xc(%ebp),%eax
080e362a +0x13d0:  leave
080e362b +0x13d1:  ret
080e362c +0x13d2:  push   %ebp
080e362d +0x13d3:  mov    %esp,%ebp
080e362f +0x13d5:  sub    $0x18,%esp
080e3632 +0x13d8:  mov    0x8(%ebp),%eax
080e3635 +0x13db:  mov    %eax,(%esp)
080e3638 +0x13de:  call   080e3ef8 <+0x1c9e>
080e363d +0x13e3:  mov    0x8(%ebp),%eax
080e3640 +0x13e6:  movl   $0x0,(%eax)
080e3646 +0x13ec:  mov    0x8(%ebp),%eax
080e3649 +0x13ef:  movl   $0x0,0x4(%eax)
080e3650 +0x13f6:  mov    0x8(%ebp),%eax
080e3653 +0x13f9:  movl   $0x0,0x8(%eax)
080e365a +0x1400:  leave
080e365b +0x1401:  ret
080e365c +0x1402:  push   %ebp
080e365d +0x1403:  mov    %esp,%ebp
080e365f +0x1405:  sub    $0x18,%esp
080e3662 +0x1408:  mov    0x8(%ebp),%eax
080e3665 +0x140b:  mov    %eax,(%esp)
080e3668 +0x140e:  call   080e3f0c <+0x1cb2>
080e366d +0x1413:  leave
080e366e +0x1414:  ret
080e366f +0x1415:  nop
080e3670 +0x1416:  push   %ebp
080e3671 +0x1417:  mov    %esp,%ebp
080e3673 +0x1419:  sub    $0x18,%esp
080e3676 +0x141c:  cmpl   $0x0,0xc(%ebp)
080e367a +0x1420:  je     080e3695 <+0x143b>
080e367c +0x1422:  mov    0x8(%ebp),%eax
080e367f +0x1425:  mov    0x10(%ebp),%edx
080e3682 +0x1428:  mov    %edx,0x8(%esp)
080e3686 +0x142c:  mov    0xc(%ebp),%edx
080e3689 +0x142f:  mov    %edx,0x4(%esp)
080e368d +0x1433:  mov    %eax,(%esp)
080e3690 +0x1436:  call   080e3f12 <+0x1cb8>
080e3695 +0x143b:  leave
080e3696 +0x143c:  ret
080e3697 +0x143d:  push   %ebp
080e3698 +0x143e:  mov    %esp,%ebp
080e369a +0x1440:  sub    $0x18,%esp
080e369d +0x1443:  mov    0xc(%ebp),%eax
080e36a0 +0x1446:  mov    %eax,0x4(%esp)
080e36a4 +0x144a:  mov    0x8(%ebp),%eax
080e36a7 +0x144d:  mov    %eax,(%esp)
080e36aa +0x1450:  call   080e3f25 <+0x1ccb>
080e36af +0x1455:  leave
080e36b0 +0x1456:  ret
080e36b1 +0x1457:  push   %ebp
080e36b2 +0x1458:  mov    %esp,%ebp
080e36b4 +0x145a:  mov    0x8(%ebp),%eax
080e36b7 +0x145d:  mov    0xc(%eax),%eax
080e36ba +0x1460:  pop    %ebp
080e36bb +0x1461:  ret
080e36bc +0x1462:  push   %ebp
080e36bd +0x1463:  mov    %esp,%ebp
080e36bf +0x1465:  mov    0x8(%ebp),%eax
080e36c2 +0x1468:  mov    0x8(%eax),%eax
080e36c5 +0x146b:  pop    %ebp
080e36c6 +0x146c:  ret
080e36c7 +0x146d:  nop
080e36c8 +0x146e:  push   %ebp
080e36c9 +0x146f:  mov    %esp,%ebp
080e36cb +0x1471:  sub    $0x18,%esp
080e36ce +0x1474:  mov    0x8(%ebp),%eax
080e36d1 +0x1477:  mov    %eax,(%esp)
080e36d4 +0x147a:  call   080e3f2a <+0x1cd0>
080e36d9 +0x147f:  mov    0xc(%ebp),%edx
080e36dc +0x1482:  mov    %edx,0x4(%esp)
080e36e0 +0x1486:  mov    %eax,(%esp)
080e36e3 +0x1489:  call   080e3f38 <+0x1cde>
080e36e8 +0x148e:  mov    0xc(%ebp),%eax
080e36eb +0x1491:  mov    %eax,0x4(%esp)
080e36ef +0x1495:  mov    0x8(%ebp),%eax
080e36f2 +0x1498:  mov    %eax,(%esp)
080e36f5 +0x149b:  call   080e3f4c <+0x1cf2>
080e36fa +0x14a0:  leave
080e36fb +0x14a1:  ret
080e36fc +0x14a2:  push   %ebp
080e36fd +0x14a3:  mov    %esp,%ebp
080e36ff +0x14a5:  mov    0xc(%ebp),%eax
080e3702 +0x14a8:  mov    (%eax),%edx
080e3704 +0x14aa:  mov    0x10(%ebp),%eax
080e3707 +0x14ad:  mov    (%eax),%eax
080e3709 +0x14af:  cmp    %eax,%edx
080e370b +0x14b1:  setb   %al
080e370e +0x14b4:  pop    %ebp
080e370f +0x14b5:  ret
080e3710 +0x14b6:  push   %ebp
080e3711 +0x14b7:  mov    %esp,%ebp
080e3713 +0x14b9:  mov    0xc(%ebp),%eax
080e3716 +0x14bc:  mov    (%eax),%edx
080e3718 +0x14be:  mov    0x8(%ebp),%eax
080e371b +0x14c1:  mov    %edx,(%eax)
080e371d +0x14c3:  pop    %ebp
080e371e +0x14c4:  ret
080e371f +0x14c5:  nop
080e3720 +0x14c6:  push   %ebp
080e3721 +0x14c7:  mov    %esp,%ebp
080e3723 +0x14c9:  push   %ebx
080e3724 +0x14ca:  sub    $0x14,%esp
080e3727 +0x14cd:  mov    0x10(%ebp),%eax
080e372a +0x14d0:  mov    %eax,(%esp)
080e372d +0x14d3:  call   080e2d69 <+0xb0f>
080e3732 +0x14d8:  mov    (%eax),%ebx
080e3734 +0x14da:  mov    0xc(%ebp),%eax
080e3737 +0x14dd:  mov    %eax,0x4(%esp)
080e373b +0x14e1:  movl   $0x4,(%esp)
080e3742 +0x14e8:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080e3747 +0x14ed:  mov    %eax,%edx
080e3749 +0x14ef:  test   %edx,%edx
080e374b +0x14f1:  je     080e374f <+0x14f5>
080e374d +0x14f3:  mov    %ebx,(%eax)
080e374f +0x14f5:  add    $0x14,%esp
080e3752 +0x14f8:  pop    %ebx
080e3753 +0x14f9:  pop    %ebp
080e3754 +0x14fa:  ret
080e3755 +0x14fb:  nop
080e3756 +0x14fc:  push   %ebp
080e3757 +0x14fd:  mov    %esp,%ebp
080e3759 +0x14ff:  mov    0x8(%ebp),%eax
080e375c +0x1502:  pop    %ebp
080e375d +0x1503:  ret
080e375e +0x1504:  push   %ebp
080e375f +0x1505:  mov    %esp,%ebp
080e3761 +0x1507:  push   %ebx
080e3762 +0x1508:  sub    $0x14,%esp
080e3765 +0x150b:  mov    0xc(%ebp),%eax
080e3768 +0x150e:  mov    %eax,(%esp)
080e376b +0x1511:  call   080e3f6e <+0x1d14>
080e3770 +0x1516:  mov    %eax,%ebx
080e3772 +0x1518:  mov    0x8(%ebp),%eax
080e3775 +0x151b:  mov    %eax,(%esp)
080e3778 +0x151e:  call   080e3f6e <+0x1d14>
080e377d +0x1523:  mov    0x10(%ebp),%edx
080e3780 +0x1526:  mov    %edx,0x8(%esp)
080e3784 +0x152a:  mov    %ebx,0x4(%esp)
080e3788 +0x152e:  mov    %eax,(%esp)
080e378b +0x1531:  call   080e3f76 <+0x1d1c>
080e3790 +0x1536:  add    $0x14,%esp
080e3793 +0x1539:  pop    %ebx
080e3794 +0x153a:  pop    %ebp
080e3795 +0x153b:  ret
080e3796 +0x153c:  push   %ebp
080e3797 +0x153d:  mov    %esp,%ebp
080e3799 +0x153f:  mov    0x8(%ebp),%eax
080e379c +0x1542:  pop    %ebp
080e379d +0x1543:  ret
080e379e +0x1544:  push   %ebp
080e379f +0x1545:  mov    %esp,%ebp
080e37a1 +0x1547:  mov    0x8(%ebp),%eax
080e37a4 +0x154a:  mov    (%eax),%eax
080e37a6 +0x154c:  pop    %ebp
080e37a7 +0x154d:  ret
080e37a8 +0x154e:  push   %ebp
080e37a9 +0x154f:  mov    %esp,%ebp
080e37ab +0x1551:  push   %ebx
080e37ac +0x1552:  sub    $0x24,%esp
080e37af +0x1555:  mov    0x8(%ebp),%eax
080e37b2 +0x1558:  mov    %eax,(%esp)
080e37b5 +0x155b:  call   080e3fba <+0x1d60>
080e37ba +0x1560:  mov    %eax,%ebx
080e37bc +0x1562:  mov    0x8(%ebp),%eax
080e37bf +0x1565:  mov    %eax,(%esp)
080e37c2 +0x1568:  call   080e2462 <+0x208>
080e37c7 +0x156d:  mov    %ebx,%edx
080e37c9 +0x156f:  sub    %eax,%edx
080e37cb +0x1571:  mov    0xc(%ebp),%eax
080e37ce +0x1574:  cmp    %eax,%edx
080e37d0 +0x1576:  setb   %al
080e37d3 +0x1579:  test   %al,%al
080e37d5 +0x157b:  je     080e37e2 <+0x1588>
080e37d7 +0x157d:  mov    0x10(%ebp),%eax
080e37da +0x1580:  mov    %eax,(%esp)
080e37dd +0x1583:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
080e37e2 +0x1588:  mov    0x8(%ebp),%eax
080e37e5 +0x158b:  mov    %eax,(%esp)
080e37e8 +0x158e:  call   080e2462 <+0x208>
080e37ed +0x1593:  mov    %eax,%ebx
080e37ef +0x1595:  mov    0x8(%ebp),%eax
080e37f2 +0x1598:  mov    %eax,(%esp)
080e37f5 +0x159b:  call   080e2462 <+0x208>
080e37fa +0x15a0:  mov    %eax,-0x10(%ebp)
080e37fd +0x15a3:  lea    0xc(%ebp),%eax
080e3800 +0x15a6:  mov    %eax,0x4(%esp)
080e3804 +0x15aa:  lea    -0x10(%ebp),%eax
080e3807 +0x15ad:  mov    %eax,(%esp)
080e380a +0x15b0:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
080e380f +0x15b5:  mov    (%eax),%eax
080e3811 +0x15b7:  lea    (%ebx,%eax,1),%eax
080e3814 +0x15ba:  mov    %eax,-0xc(%ebp)
080e3817 +0x15bd:  mov    0x8(%ebp),%eax
080e381a +0x15c0:  mov    %eax,(%esp)
080e381d +0x15c3:  call   080e2462 <+0x208>
080e3822 +0x15c8:  cmp    -0xc(%ebp),%eax
080e3825 +0x15cb:  ja     080e3837 <+0x15dd>
080e3827 +0x15cd:  mov    0x8(%ebp),%eax
080e382a +0x15d0:  mov    %eax,(%esp)
080e382d +0x15d3:  call   080e3fba <+0x1d60>
080e3832 +0x15d8:  cmp    -0xc(%ebp),%eax
080e3835 +0x15db:  jae    080e3844 <+0x15ea>
080e3837 +0x15dd:  mov    0x8(%ebp),%eax
080e383a +0x15e0:  mov    %eax,(%esp)
080e383d +0x15e3:  call   080e3fba <+0x1d60>
080e3842 +0x15e8:  jmp    080e3847 <+0x15ed>
080e3844 +0x15ea:  mov    -0xc(%ebp),%eax
080e3847 +0x15ed:  add    $0x24,%esp
080e384a +0x15f0:  pop    %ebx
080e384b +0x15f1:  pop    %ebp
080e384c +0x15f2:  ret
080e384d +0x15f3:  nop
080e384e +0x15f4:  push   %ebp
080e384f +0x15f5:  mov    %esp,%ebp
080e3851 +0x15f7:  push   %ebx
080e3852 +0x15f8:  sub    $0x14,%esp
080e3855 +0x15fb:  mov    0x8(%ebp),%ebx
080e3858 +0x15fe:  mov    0xc(%ebp),%eax
080e385b +0x1601:  mov    %eax,0x4(%esp)
080e385f +0x1605:  mov    %ebx,(%esp)
080e3862 +0x1608:  call   080e3710 <+0x14b6>
080e3867 +0x160d:  mov    %ebx,%eax
080e3869 +0x160f:  add    $0x14,%esp
080e386c +0x1612:  pop    %ebx
080e386d +0x1613:  pop    %ebp
080e386e +0x1614:  ret    $0x4
080e3871 +0x1617:  push   %ebp
080e3872 +0x1618:  mov    %esp,%ebp
080e3874 +0x161a:  push   %ebx
080e3875 +0x161b:  sub    $0x14,%esp
080e3878 +0x161e:  mov    0x8(%ebp),%eax
080e387b +0x1621:  mov    %eax,(%esp)
080e387e +0x1624:  call   080e3756 <+0x14fc>
080e3883 +0x1629:  mov    (%eax),%eax
080e3885 +0x162b:  mov    %eax,%ebx
080e3887 +0x162d:  mov    0xc(%ebp),%eax
080e388a +0x1630:  mov    %eax,(%esp)
080e388d +0x1633:  call   080e3756 <+0x14fc>
080e3892 +0x1638:  mov    (%eax),%eax
080e3894 +0x163a:  mov    %ebx,%edx
080e3896 +0x163c:  sub    %eax,%edx
080e3898 +0x163e:  mov    %edx,%eax
080e389a +0x1640:  sar    $0x2,%eax
080e389d +0x1643:  add    $0x14,%esp
080e38a0 +0x1646:  pop    %ebx
080e38a1 +0x1647:  pop    %ebp
080e38a2 +0x1648:  ret
080e38a3 +0x1649:  nop
080e38a4 +0x164a:  push   %ebp
080e38a5 +0x164b:  mov    %esp,%ebp
080e38a7 +0x164d:  sub    $0x18,%esp
080e38aa +0x1650:  cmpl   $0x0,0xc(%ebp)
080e38ae +0x1654:  je     080e38cc <+0x1672>
080e38b0 +0x1656:  mov    0x8(%ebp),%eax
080e38b3 +0x1659:  movl   $0x0,0x8(%esp)
080e38bb +0x1661:  mov    0xc(%ebp),%edx
080e38be +0x1664:  mov    %edx,0x4(%esp)
080e38c2 +0x1668:  mov    %eax,(%esp)
080e38c5 +0x166b:  call   080e3fd6 <+0x1d7c>
080e38ca +0x1670:  jmp    080e38d1 <+0x1677>
080e38cc +0x1672:  mov    $0x0,%eax
080e38d1 +0x1677:  leave
080e38d2 +0x1678:  ret
080e38d3 +0x1679:  push   %ebp
080e38d4 +0x167a:  mov    %esp,%ebp
080e38d6 +0x167c:  sub    $0x28,%esp
080e38d9 +0x167f:  lea    -0x10(%ebp),%eax
080e38dc +0x1682:  lea    0xc(%ebp),%edx
080e38df +0x1685:  mov    %edx,0x4(%esp)
080e38e3 +0x1689:  mov    %eax,(%esp)
080e38e6 +0x168c:  call   080e400e <+0x1db4>
080e38eb +0x1691:  sub    $0x4,%esp
080e38ee +0x1694:  lea    -0xc(%ebp),%eax
080e38f1 +0x1697:  lea    0x8(%ebp),%edx
080e38f4 +0x169a:  mov    %edx,0x4(%esp)
080e38f8 +0x169e:  mov    %eax,(%esp)
080e38fb +0x16a1:  call   080e400e <+0x1db4>
080e3900 +0x16a6:  sub    $0x4,%esp
080e3903 +0x16a9:  mov    0x14(%ebp),%eax
080e3906 +0x16ac:  mov    %eax,0xc(%esp)
080e390a +0x16b0:  mov    0x10(%ebp),%eax
080e390d +0x16b3:  mov    %eax,0x8(%esp)
080e3911 +0x16b7:  mov    -0x10(%ebp),%eax
080e3914 +0x16ba:  mov    %eax,0x4(%esp)
080e3918 +0x16be:  mov    -0xc(%ebp),%eax
080e391b +0x16c1:  mov    %eax,(%esp)
080e391e +0x16c4:  call   080e4033 <+0x1dd9>
080e3923 +0x16c9:  leave
080e3924 +0x16ca:  ret
080e3925 +0x16cb:  nop
080e3926 +0x16cc:  push   %ebp
080e3927 +0x16cd:  mov    %esp,%ebp
080e3929 +0x16cf:  pop    %ebp
080e392a +0x16d0:  ret
080e392b +0x16d1:  nop
080e392c +0x16d2:  push   %ebp
080e392d +0x16d3:  mov    %esp,%ebp
080e392f +0x16d5:  sub    $0x18,%esp
080e3932 +0x16d8:  mov    0x8(%ebp),%eax
080e3935 +0x16db:  mov    %eax,(%esp)
080e3938 +0x16de:  call   080e4054 <+0x1dfa>
080e393d +0x16e3:  mov    0x8(%ebp),%eax
080e3940 +0x16e6:  movl   $0x0,0x4(%eax)
080e3947 +0x16ed:  mov    0x8(%ebp),%eax
080e394a +0x16f0:  movl   $0x0,0x8(%eax)
080e3951 +0x16f7:  mov    0x8(%ebp),%eax
080e3954 +0x16fa:  movl   $0x0,0xc(%eax)
080e395b +0x1701:  mov    0x8(%ebp),%eax
080e395e +0x1704:  movl   $0x0,0x10(%eax)
080e3965 +0x170b:  mov    0x8(%ebp),%eax
080e3968 +0x170e:  movl   $0x0,0x14(%eax)
080e396f +0x1715:  mov    0x8(%ebp),%eax
080e3972 +0x1718:  mov    %eax,(%esp)
080e3975 +0x171b:  call   080e4068 <+0x1e0e>
080e397a +0x1720:  leave
080e397b +0x1721:  ret
080e397c +0x1722:  push   %ebp
080e397d +0x1723:  mov    %esp,%ebp
080e397f +0x1725:  pop    %ebp
080e3980 +0x1726:  ret
080e3981 +0x1727:  push   %ebp
080e3982 +0x1728:  mov    %esp,%ebp
080e3984 +0x172a:  mov    0x8(%ebp),%eax
080e3987 +0x172d:  mov    0xc(%eax),%eax
080e398a +0x1730:  pop    %ebp
080e398b +0x1731:  ret
080e398c +0x1732:  push   %ebp
080e398d +0x1733:  mov    %esp,%ebp
080e398f +0x1735:  mov    0x8(%ebp),%eax
080e3992 +0x1738:  mov    0x8(%eax),%eax
080e3995 +0x173b:  pop    %ebp
080e3996 +0x173c:  ret
080e3997 +0x173d:  nop
080e3998 +0x173e:  push   %ebp
080e3999 +0x173f:  mov    %esp,%ebp
080e399b +0x1741:  sub    $0x18,%esp
080e399e +0x1744:  mov    0x8(%ebp),%eax
080e39a1 +0x1747:  mov    %eax,(%esp)
080e39a4 +0x174a:  call   080e409a <+0x1e40>
080e39a9 +0x174f:  mov    0xc(%ebp),%edx
080e39ac +0x1752:  mov    %edx,0x4(%esp)
080e39b0 +0x1756:  mov    %eax,(%esp)
080e39b3 +0x1759:  call   080e40a8 <+0x1e4e>
080e39b8 +0x175e:  mov    0xc(%ebp),%eax
080e39bb +0x1761:  mov    %eax,0x4(%esp)
080e39bf +0x1765:  mov    0x8(%ebp),%eax
080e39c2 +0x1768:  mov    %eax,(%esp)
080e39c5 +0x176b:  call   080e40bc <+0x1e62>
080e39ca +0x1770:  leave
080e39cb +0x1771:  ret
080e39cc +0x1772:  push   %ebp
080e39cd +0x1773:  mov    %esp,%ebp
080e39cf +0x1775:  mov    0x8(%ebp),%eax
080e39d2 +0x1778:  mov    0xc(%eax),%eax
080e39d5 +0x177b:  pop    %ebp
080e39d6 +0x177c:  ret
080e39d7 +0x177d:  push   %ebp
080e39d8 +0x177e:  mov    %esp,%ebp
080e39da +0x1780:  mov    0x8(%ebp),%eax
080e39dd +0x1783:  mov    0x8(%eax),%eax
080e39e0 +0x1786:  pop    %ebp
080e39e1 +0x1787:  ret
080e39e2 +0x1788:  push   %ebp
080e39e3 +0x1789:  mov    %esp,%ebp
080e39e5 +0x178b:  sub    $0x18,%esp
080e39e8 +0x178e:  mov    0x8(%ebp),%eax
080e39eb +0x1791:  mov    %eax,(%esp)
080e39ee +0x1794:  call   080e40de <+0x1e84>
080e39f3 +0x1799:  mov    0xc(%ebp),%edx
080e39f6 +0x179c:  mov    %edx,0x4(%esp)
080e39fa +0x17a0:  mov    %eax,(%esp)
080e39fd +0x17a3:  call   080e40ec <+0x1e92>
080e3a02 +0x17a8:  mov    0xc(%ebp),%eax
080e3a05 +0x17ab:  mov    %eax,0x4(%esp)
080e3a09 +0x17af:  mov    0x8(%ebp),%eax
080e3a0c +0x17b2:  mov    %eax,(%esp)
080e3a0f +0x17b5:  call   080e4100 <+0x1ea6>
080e3a14 +0x17ba:  leave
080e3a15 +0x17bb:  ret
080e3a16 +0x17bc:  push   %ebp
080e3a17 +0x17bd:  mov    %esp,%ebp
080e3a19 +0x17bf:  mov    0x8(%ebp),%eax
080e3a1c +0x17c2:  add    $0x4,%eax
080e3a1f +0x17c5:  pop    %ebp
080e3a20 +0x17c6:  ret
080e3a21 +0x17c7:  nop
080e3a22 +0x17c8:  push   %ebp
080e3a23 +0x17c9:  mov    %esp,%ebp
080e3a25 +0x17cb:  push   %ebx
080e3a26 +0x17cc:  sub    $0x14,%esp
080e3a29 +0x17cf:  mov    0x8(%ebp),%ebx
080e3a2c +0x17d2:  jmp    080e3a7a <+0x1820>
080e3a2e +0x17d4:  mov    0x10(%ebp),%eax
080e3a31 +0x17d7:  mov    %eax,(%esp)
080e3a34 +0x17da:  call   080e3ad6 <+0x187c>
080e3a39 +0x17df:  mov    0xc(%ebp),%edx
080e3a3c +0x17e2:  mov    0x18(%ebp),%ecx
080e3a3f +0x17e5:  mov    %ecx,0x8(%esp)
080e3a43 +0x17e9:  mov    %eax,0x4(%esp)
080e3a47 +0x17ed:  mov    %edx,(%esp)
080e3a4a +0x17f0:  call   080e36fc <+0x14a2>
080e3a4f +0x17f5:  xor    $0x1,%eax
080e3a52 +0x17f8:  test   %al,%al
080e3a54 +0x17fa:  je     080e3a6c <+0x1812>
080e3a56 +0x17fc:  mov    0x10(%ebp),%eax
080e3a59 +0x17ff:  mov    %eax,0x14(%ebp)
080e3a5c +0x1802:  mov    0x10(%ebp),%eax
080e3a5f +0x1805:  mov    %eax,(%esp)
080e3a62 +0x1808:  call   080e36bc <+0x1462>
080e3a67 +0x180d:  mov    %eax,0x10(%ebp)
080e3a6a +0x1810:  jmp    080e3a7a <+0x1820>
080e3a6c +0x1812:  mov    0x10(%ebp),%eax
080e3a6f +0x1815:  mov    %eax,(%esp)
080e3a72 +0x1818:  call   080e36b1 <+0x1457>
080e3a77 +0x181d:  mov    %eax,0x10(%ebp)
080e3a7a +0x1820:  cmpl   $0x0,0x10(%ebp)
080e3a7e +0x1824:  setne  %al
080e3a81 +0x1827:  test   %al,%al
080e3a83 +0x1829:  jne    080e3a2e <+0x17d4>
080e3a85 +0x182b:  mov    0x14(%ebp),%eax
080e3a88 +0x182e:  mov    %eax,0x4(%esp)
080e3a8c +0x1832:  mov    %ebx,(%esp)
080e3a8f +0x1835:  call   080e3ac0 <+0x1866>
080e3a94 +0x183a:  mov    %ebx,%eax
080e3a96 +0x183c:  add    $0x14,%esp
080e3a99 +0x183f:  pop    %ebx
080e3a9a +0x1840:  pop    %ebp
080e3a9b +0x1841:  ret    $0x4
080e3a9e +0x1844:  push   %ebp
080e3a9f +0x1845:  mov    %esp,%ebp
080e3aa1 +0x1847:  sub    $0x28,%esp
080e3aa4 +0x184a:  mov    0x8(%ebp),%eax
080e3aa7 +0x184d:  mov    %eax,(%esp)
080e3aaa +0x1850:  call   080e4122 <+0x1ec8>
080e3aaf +0x1855:  mov    %eax,0x4(%esp)
080e3ab3 +0x1859:  lea    -0x9(%ebp),%eax
080e3ab6 +0x185c:  mov    %eax,(%esp)
080e3ab9 +0x185f:  call   080e3ace <+0x1874>
080e3abe +0x1864:  leave
080e3abf +0x1865:  ret
080e3ac0 +0x1866:  push   %ebp
080e3ac1 +0x1867:  mov    %esp,%ebp
080e3ac3 +0x1869:  mov    0xc(%ebp),%edx
080e3ac6 +0x186c:  mov    0x8(%ebp),%eax
080e3ac9 +0x186f:  mov    %edx,(%eax)
080e3acb +0x1871:  pop    %ebp
080e3acc +0x1872:  ret
080e3acd +0x1873:  nop
080e3ace +0x1874:  push   %ebp
080e3acf +0x1875:  mov    %esp,%ebp
080e3ad1 +0x1877:  mov    0xc(%ebp),%eax
080e3ad4 +0x187a:  pop    %ebp
080e3ad5 +0x187b:  ret
080e3ad6 +0x187c:  push   %ebp
080e3ad7 +0x187d:  mov    %esp,%ebp
080e3ad9 +0x187f:  sub    $0x28,%esp
080e3adc +0x1882:  mov    0x8(%ebp),%eax
080e3adf +0x1885:  mov    %eax,(%esp)
080e3ae2 +0x1888:  call   080e412d <+0x1ed3>
080e3ae7 +0x188d:  mov    %eax,0x4(%esp)
080e3aeb +0x1891:  lea    -0x9(%ebp),%eax
080e3aee +0x1894:  mov    %eax,(%esp)
080e3af1 +0x1897:  call   080e3ace <+0x1874>
080e3af6 +0x189c:  leave
080e3af7 +0x189d:  ret
080e3af8 +0x189e:  push   %ebp
080e3af9 +0x189f:  mov    %esp,%ebp
080e3afb +0x18a1:  push   %ebx
080e3afc +0x18a2:  sub    $0x14,%esp
080e3aff +0x18a5:  mov    0x8(%ebp),%ebx
080e3b02 +0x18a8:  mov    0xc(%ebp),%eax
080e3b05 +0x18ab:  mov    0xc(%eax),%eax
080e3b08 +0x18ae:  mov    %eax,0x4(%esp)
080e3b0c +0x18b2:  mov    %ebx,(%esp)
080e3b0f +0x18b5:  call   080e3ac0 <+0x1866>
080e3b14 +0x18ba:  mov    %ebx,%eax
080e3b16 +0x18bc:  add    $0x14,%esp
080e3b19 +0x18bf:  pop    %ebx
080e3b1a +0x18c0:  pop    %ebp
080e3b1b +0x18c1:  ret    $0x4
080e3b1e +0x18c4:  push   %ebp
080e3b1f +0x18c5:  mov    %esp,%ebp
080e3b21 +0x18c7:  push   %esi
080e3b22 +0x18c8:  push   %ebx
080e3b23 +0x18c9:  sub    $0x20,%esp
080e3b26 +0x18cc:  mov    0x8(%ebp),%esi
080e3b29 +0x18cf:  cmpl   $0x0,0x10(%ebp)
080e3b2d +0x18d3:  jne    080e3b75 <+0x191b>
080e3b2f +0x18d5:  mov    0xc(%ebp),%eax
080e3b32 +0x18d8:  mov    %eax,(%esp)
080e3b35 +0x18db:  call   080e3a16 <+0x17bc>
080e3b3a +0x18e0:  cmp    0x14(%ebp),%eax
080e3b3d +0x18e3:  je     080e3b75 <+0x191b>
080e3b3f +0x18e5:  mov    0x14(%ebp),%eax
080e3b42 +0x18e8:  mov    %eax,(%esp)
080e3b45 +0x18eb:  call   080e3a9e <+0x1844>
080e3b4a +0x18f0:  mov    %eax,%ebx
080e3b4c +0x18f2:  mov    0x18(%ebp),%eax
080e3b4f +0x18f5:  mov    %eax,0x4(%esp)
080e3b53 +0x18f9:  lea    -0xe(%ebp),%eax
080e3b56 +0x18fc:  mov    %eax,(%esp)
080e3b59 +0x18ff:  call   080e3ace <+0x1874>
080e3b5e +0x1904:  mov    0xc(%ebp),%edx
080e3b61 +0x1907:  mov    %ebx,0x8(%esp)
080e3b65 +0x190b:  mov    %eax,0x4(%esp)
080e3b69 +0x190f:  mov    %edx,(%esp)
080e3b6c +0x1912:  call   080e36fc <+0x14a2>
080e3b71 +0x1917:  test   %al,%al
080e3b73 +0x1919:  je     080e3b7c <+0x1922>
080e3b75 +0x191b:  mov    $0x1,%eax
080e3b7a +0x1920:  jmp    080e3b81 <+0x1927>
080e3b7c +0x1922:  mov    $0x0,%eax
080e3b81 +0x1927:  mov    %al,-0xd(%ebp)
080e3b84 +0x192a:  mov    0x18(%ebp),%eax
080e3b87 +0x192d:  mov    %eax,0x4(%esp)
080e3b8b +0x1931:  mov    0xc(%ebp),%eax
080e3b8e +0x1934:  mov    %eax,(%esp)
080e3b91 +0x1937:  call   080e4138 <+0x1ede>
080e3b96 +0x193c:  mov    %eax,-0xc(%ebp)
080e3b99 +0x193f:  mov    0xc(%ebp),%eax
080e3b9c +0x1942:  lea    0x4(%eax),%ecx
080e3b9f +0x1945:  mov    -0xc(%ebp),%edx
080e3ba2 +0x1948:  movzbl -0xd(%ebp),%eax
080e3ba6 +0x194c:  mov    %ecx,0xc(%esp)
080e3baa +0x1950:  mov    0x14(%ebp),%ecx
080e3bad +0x1953:  mov    %ecx,0x8(%esp)
080e3bb1 +0x1957:  mov    %edx,0x4(%esp)
080e3bb5 +0x195b:  mov    %eax,(%esp)
080e3bb8 +0x195e:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
080e3bbd +0x1963:  mov    0xc(%ebp),%eax
080e3bc0 +0x1966:  mov    0x14(%eax),%eax
080e3bc3 +0x1969:  lea    0x1(%eax),%edx
080e3bc6 +0x196c:  mov    0xc(%ebp),%eax
080e3bc9 +0x196f:  mov    %edx,0x14(%eax)
080e3bcc +0x1972:  mov    -0xc(%ebp),%eax
080e3bcf +0x1975:  mov    %eax,0x4(%esp)
080e3bd3 +0x1979:  mov    %esi,(%esp)
080e3bd6 +0x197c:  call   080e3ac0 <+0x1866>
080e3bdb +0x1981:  mov    %esi,%eax
080e3bdd +0x1983:  add    $0x20,%esp
080e3be0 +0x1986:  pop    %ebx
080e3be1 +0x1987:  pop    %esi
080e3be2 +0x1988:  pop    %ebp
080e3be3 +0x1989:  ret    $0x4
080e3be6 +0x198c:  push   %ebp
080e3be7 +0x198d:  mov    %esp,%ebp
080e3be9 +0x198f:  sub    $0x18,%esp
080e3bec +0x1992:  mov    0xc(%ebp),%eax
080e3bef +0x1995:  mov    %eax,(%esp)
080e3bf2 +0x1998:  call   080e41b9 <+0x1f5f>
080e3bf7 +0x199d:  mov    0x8(%ebp),%edx
080e3bfa +0x19a0:  mov    (%eax),%eax
080e3bfc +0x19a2:  mov    %eax,(%edx)
080e3bfe +0x19a4:  mov    0x10(%ebp),%eax
080e3c01 +0x19a7:  mov    %eax,(%esp)
080e3c04 +0x19aa:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
080e3c09 +0x19af:  movzbl (%eax),%edx
080e3c0c +0x19b2:  mov    0x8(%ebp),%eax
080e3c0f +0x19b5:  mov    %dl,0x4(%eax)
080e3c12 +0x19b8:  leave
080e3c13 +0x19b9:  ret
080e3c14 +0x19ba:  push   %ebp
080e3c15 +0x19bb:  mov    %esp,%ebp
080e3c17 +0x19bd:  sub    $0x18,%esp
080e3c1a +0x19c0:  mov    0x8(%ebp),%eax
080e3c1d +0x19c3:  mov    (%eax),%eax
080e3c1f +0x19c5:  mov    %eax,(%esp)
080e3c22 +0x19c8:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
080e3c27 +0x19cd:  mov    0x8(%ebp),%edx
080e3c2a +0x19d0:  mov    %eax,(%edx)
080e3c2c +0x19d2:  mov    0x8(%ebp),%eax
080e3c2f +0x19d5:  leave
080e3c30 +0x19d6:  ret
080e3c31 +0x19d7:  nop
080e3c32 +0x19d8:  push   %ebp
080e3c33 +0x19d9:  mov    %esp,%ebp
080e3c35 +0x19db:  sub    $0x18,%esp
080e3c38 +0x19de:  mov    0xc(%ebp),%eax
080e3c3b +0x19e1:  mov    %eax,(%esp)
080e3c3e +0x19e4:  call   080e41c1 <+0x1f67>
080e3c43 +0x19e9:  mov    0x8(%ebp),%edx
080e3c46 +0x19ec:  mov    (%eax),%eax
080e3c48 +0x19ee:  mov    %eax,(%edx)
080e3c4a +0x19f0:  mov    0x10(%ebp),%eax
080e3c4d +0x19f3:  mov    %eax,(%esp)
080e3c50 +0x19f6:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
080e3c55 +0x19fb:  movzbl (%eax),%edx
080e3c58 +0x19fe:  mov    0x8(%ebp),%eax
080e3c5b +0x1a01:  mov    %dl,0x4(%eax)
080e3c5e +0x1a04:  leave
080e3c5f +0x1a05:  ret
080e3c60 +0x1a06:  push   %ebp
080e3c61 +0x1a07:  mov    %esp,%ebp
080e3c63 +0x1a09:  mov    0x8(%ebp),%eax
080e3c66 +0x1a0c:  add    $0x4,%eax
080e3c69 +0x1a0f:  pop    %ebp
080e3c6a +0x1a10:  ret
080e3c6b +0x1a11:  nop
080e3c6c +0x1a12:  push   %ebp
080e3c6d +0x1a13:  mov    %esp,%ebp
080e3c6f +0x1a15:  push   %ebx
080e3c70 +0x1a16:  sub    $0x14,%esp
080e3c73 +0x1a19:  mov    0x8(%ebp),%ebx
080e3c76 +0x1a1c:  jmp    080e3cc4 <+0x1a6a>
080e3c78 +0x1a1e:  mov    0x10(%ebp),%eax
080e3c7b +0x1a21:  mov    %eax,(%esp)
080e3c7e +0x1a24:  call   080e3d94 <+0x1b3a>
080e3c83 +0x1a29:  mov    0xc(%ebp),%edx
080e3c86 +0x1a2c:  mov    0x18(%ebp),%ecx
080e3c89 +0x1a2f:  mov    %ecx,0x8(%esp)
080e3c8d +0x1a33:  mov    %eax,0x4(%esp)
080e3c91 +0x1a37:  mov    %edx,(%esp)
080e3c94 +0x1a3a:  call   080e36fc <+0x14a2>
080e3c99 +0x1a3f:  xor    $0x1,%eax
080e3c9c +0x1a42:  test   %al,%al
080e3c9e +0x1a44:  je     080e3cb6 <+0x1a5c>
080e3ca0 +0x1a46:  mov    0x10(%ebp),%eax
080e3ca3 +0x1a49:  mov    %eax,0x14(%ebp)
080e3ca6 +0x1a4c:  mov    0x10(%ebp),%eax
080e3ca9 +0x1a4f:  mov    %eax,(%esp)
080e3cac +0x1a52:  call   080e39d7 <+0x177d>
080e3cb1 +0x1a57:  mov    %eax,0x10(%ebp)
080e3cb4 +0x1a5a:  jmp    080e3cc4 <+0x1a6a>
080e3cb6 +0x1a5c:  mov    0x10(%ebp),%eax
080e3cb9 +0x1a5f:  mov    %eax,(%esp)
080e3cbc +0x1a62:  call   080e39cc <+0x1772>
080e3cc1 +0x1a67:  mov    %eax,0x10(%ebp)
080e3cc4 +0x1a6a:  cmpl   $0x0,0x10(%ebp)
080e3cc8 +0x1a6e:  setne  %al
080e3ccb +0x1a71:  test   %al,%al
080e3ccd +0x1a73:  jne    080e3c78 <+0x1a1e>
080e3ccf +0x1a75:  mov    0x14(%ebp),%eax
080e3cd2 +0x1a78:  mov    %eax,0x4(%esp)
080e3cd6 +0x1a7c:  mov    %ebx,(%esp)
080e3cd9 +0x1a7f:  call   080e3d1e <+0x1ac4>
080e3cde +0x1a84:  mov    %ebx,%eax
080e3ce0 +0x1a86:  add    $0x14,%esp
080e3ce3 +0x1a89:  pop    %ebx
080e3ce4 +0x1a8a:  pop    %ebp
080e3ce5 +0x1a8b:  ret    $0x4
080e3ce8 +0x1a8e:  push   %ebp
080e3ce9 +0x1a8f:  mov    %esp,%ebp
080e3ceb +0x1a91:  sub    $0x28,%esp
080e3cee +0x1a94:  mov    0x8(%ebp),%eax
080e3cf1 +0x1a97:  mov    %eax,(%esp)
080e3cf4 +0x1a9a:  call   080e41c9 <+0x1f6f>
080e3cf9 +0x1a9f:  mov    %eax,0x4(%esp)
080e3cfd +0x1aa3:  lea    -0x9(%ebp),%eax
080e3d00 +0x1aa6:  mov    %eax,(%esp)
080e3d03 +0x1aa9:  call   080e3d8c <+0x1b32>
080e3d08 +0x1aae:  leave
080e3d09 +0x1aaf:  ret
080e3d0a +0x1ab0:  push   %ebp
080e3d0b +0x1ab1:  mov    %esp,%ebp
080e3d0d +0x1ab3:  mov    0x8(%ebp),%eax
080e3d10 +0x1ab6:  mov    (%eax),%edx
080e3d12 +0x1ab8:  mov    0xc(%ebp),%eax
080e3d15 +0x1abb:  mov    (%eax),%eax
080e3d17 +0x1abd:  cmp    %eax,%edx
080e3d19 +0x1abf:  sete   %al
080e3d1c +0x1ac2:  pop    %ebp
080e3d1d +0x1ac3:  ret
080e3d1e +0x1ac4:  push   %ebp
080e3d1f +0x1ac5:  mov    %esp,%ebp
080e3d21 +0x1ac7:  mov    0xc(%ebp),%edx
080e3d24 +0x1aca:  mov    0x8(%ebp),%eax
080e3d27 +0x1acd:  mov    %edx,(%eax)
080e3d29 +0x1acf:  pop    %ebp
080e3d2a +0x1ad0:  ret
080e3d2b +0x1ad1:  nop
080e3d2c +0x1ad2:  push   %ebp
080e3d2d +0x1ad3:  mov    %esp,%ebp
080e3d2f +0x1ad5:  mov    0x8(%ebp),%eax
080e3d32 +0x1ad8:  add    $0xc,%eax
080e3d35 +0x1adb:  pop    %ebp
080e3d36 +0x1adc:  ret
080e3d37 +0x1add:  nop
080e3d38 +0x1ade:  push   %ebp
080e3d39 +0x1adf:  mov    %esp,%ebp
080e3d3b +0x1ae1:  mov    0x8(%ebp),%eax
080e3d3e +0x1ae4:  add    $0x8,%eax
080e3d41 +0x1ae7:  pop    %ebp
080e3d42 +0x1ae8:  ret
080e3d43 +0x1ae9:  nop
080e3d44 +0x1aea:  push   %ebp
080e3d45 +0x1aeb:  mov    %esp,%ebp
080e3d47 +0x1aed:  mov    0x8(%ebp),%eax
080e3d4a +0x1af0:  add    $0x10,%eax
080e3d4d +0x1af3:  pop    %ebp
080e3d4e +0x1af4:  ret
080e3d4f +0x1af5:  nop
080e3d50 +0x1af6:  push   %ebp
080e3d51 +0x1af7:  mov    %esp,%ebp
080e3d53 +0x1af9:  mov    0x8(%ebp),%eax
080e3d56 +0x1afc:  add    $0xc,%eax
080e3d59 +0x1aff:  pop    %ebp
080e3d5a +0x1b00:  ret
080e3d5b +0x1b01:  nop
080e3d5c +0x1b02:  push   %ebp
080e3d5d +0x1b03:  mov    %esp,%ebp
080e3d5f +0x1b05:  mov    0x8(%ebp),%eax
080e3d62 +0x1b08:  add    $0x8,%eax
080e3d65 +0x1b0b:  pop    %ebp
080e3d66 +0x1b0c:  ret
080e3d67 +0x1b0d:  nop
080e3d68 +0x1b0e:  push   %ebp
080e3d69 +0x1b0f:  mov    %esp,%ebp
080e3d6b +0x1b11:  mov    0x8(%ebp),%eax
080e3d6e +0x1b14:  add    $0x10,%eax
080e3d71 +0x1b17:  pop    %ebp
080e3d72 +0x1b18:  ret
080e3d73 +0x1b19:  nop
080e3d74 +0x1b1a:  push   %ebp
080e3d75 +0x1b1b:  mov    %esp,%ebp
080e3d77 +0x1b1d:  mov    0xc(%ebp),%eax
080e3d7a +0x1b20:  mov    (%eax),%edx
080e3d7c +0x1b22:  mov    0x8(%ebp),%eax
080e3d7f +0x1b25:  mov    %edx,(%eax)
080e3d81 +0x1b27:  pop    %ebp
080e3d82 +0x1b28:  ret
080e3d83 +0x1b29:  nop
080e3d84 +0x1b2a:  push   %ebp
080e3d85 +0x1b2b:  mov    %esp,%ebp
080e3d87 +0x1b2d:  mov    0x8(%ebp),%eax
080e3d8a +0x1b30:  pop    %ebp
080e3d8b +0x1b31:  ret
080e3d8c +0x1b32:  push   %ebp
080e3d8d +0x1b33:  mov    %esp,%ebp
080e3d8f +0x1b35:  mov    0xc(%ebp),%eax
080e3d92 +0x1b38:  pop    %ebp
080e3d93 +0x1b39:  ret
080e3d94 +0x1b3a:  push   %ebp
080e3d95 +0x1b3b:  mov    %esp,%ebp
080e3d97 +0x1b3d:  sub    $0x28,%esp
080e3d9a +0x1b40:  mov    0x8(%ebp),%eax
080e3d9d +0x1b43:  mov    %eax,(%esp)
080e3da0 +0x1b46:  call   080e41d4 <+0x1f7a>
080e3da5 +0x1b4b:  mov    %eax,0x4(%esp)
080e3da9 +0x1b4f:  lea    -0x9(%ebp),%eax
080e3dac +0x1b52:  mov    %eax,(%esp)
080e3daf +0x1b55:  call   080e3d8c <+0x1b32>
080e3db4 +0x1b5a:  leave
080e3db5 +0x1b5b:  ret
080e3db6 +0x1b5c:  push   %ebp
080e3db7 +0x1b5d:  mov    %esp,%ebp
080e3db9 +0x1b5f:  push   %esi
080e3dba +0x1b60:  push   %ebx
080e3dbb +0x1b61:  sub    $0x20,%esp
080e3dbe +0x1b64:  mov    0x8(%ebp),%esi
080e3dc1 +0x1b67:  cmpl   $0x0,0x10(%ebp)
080e3dc5 +0x1b6b:  jne    080e3e0d <+0x1bb3>
080e3dc7 +0x1b6d:  mov    0xc(%ebp),%eax
080e3dca +0x1b70:  mov    %eax,(%esp)
080e3dcd +0x1b73:  call   080e3c60 <+0x1a06>
080e3dd2 +0x1b78:  cmp    0x14(%ebp),%eax
080e3dd5 +0x1b7b:  je     080e3e0d <+0x1bb3>
080e3dd7 +0x1b7d:  mov    0x14(%ebp),%eax
080e3dda +0x1b80:  mov    %eax,(%esp)
080e3ddd +0x1b83:  call   080e3ce8 <+0x1a8e>
080e3de2 +0x1b88:  mov    %eax,%ebx
080e3de4 +0x1b8a:  mov    0x18(%ebp),%eax
080e3de7 +0x1b8d:  mov    %eax,0x4(%esp)
080e3deb +0x1b91:  lea    -0xe(%ebp),%eax
080e3dee +0x1b94:  mov    %eax,(%esp)
080e3df1 +0x1b97:  call   080e3d8c <+0x1b32>
080e3df6 +0x1b9c:  mov    0xc(%ebp),%edx
080e3df9 +0x1b9f:  mov    %ebx,0x8(%esp)
080e3dfd +0x1ba3:  mov    %eax,0x4(%esp)
080e3e01 +0x1ba7:  mov    %edx,(%esp)
080e3e04 +0x1baa:  call   080e36fc <+0x14a2>
080e3e09 +0x1baf:  test   %al,%al
080e3e0b +0x1bb1:  je     080e3e14 <+0x1bba>
080e3e0d +0x1bb3:  mov    $0x1,%eax
080e3e12 +0x1bb8:  jmp    080e3e19 <+0x1bbf>
080e3e14 +0x1bba:  mov    $0x0,%eax
080e3e19 +0x1bbf:  mov    %al,-0xd(%ebp)
080e3e1c +0x1bc2:  mov    0x18(%ebp),%eax
080e3e1f +0x1bc5:  mov    %eax,0x4(%esp)
080e3e23 +0x1bc9:  mov    0xc(%ebp),%eax
080e3e26 +0x1bcc:  mov    %eax,(%esp)
080e3e29 +0x1bcf:  call   080e41e0 <+0x1f86>
080e3e2e +0x1bd4:  mov    %eax,-0xc(%ebp)
080e3e31 +0x1bd7:  mov    0xc(%ebp),%eax
080e3e34 +0x1bda:  lea    0x4(%eax),%ecx
080e3e37 +0x1bdd:  mov    -0xc(%ebp),%edx
080e3e3a +0x1be0:  movzbl -0xd(%ebp),%eax
080e3e3e +0x1be4:  mov    %ecx,0xc(%esp)
080e3e42 +0x1be8:  mov    0x14(%ebp),%ecx
080e3e45 +0x1beb:  mov    %ecx,0x8(%esp)
080e3e49 +0x1bef:  mov    %edx,0x4(%esp)
080e3e4d +0x1bf3:  mov    %eax,(%esp)
080e3e50 +0x1bf6:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
080e3e55 +0x1bfb:  mov    0xc(%ebp),%eax
080e3e58 +0x1bfe:  mov    0x14(%eax),%eax
080e3e5b +0x1c01:  lea    0x1(%eax),%edx
080e3e5e +0x1c04:  mov    0xc(%ebp),%eax
080e3e61 +0x1c07:  mov    %edx,0x14(%eax)
080e3e64 +0x1c0a:  mov    -0xc(%ebp),%eax
080e3e67 +0x1c0d:  mov    %eax,0x4(%esp)
080e3e6b +0x1c11:  mov    %esi,(%esp)
080e3e6e +0x1c14:  call   080e3d1e <+0x1ac4>
080e3e73 +0x1c19:  mov    %esi,%eax
080e3e75 +0x1c1b:  add    $0x20,%esp
080e3e78 +0x1c1e:  pop    %ebx
080e3e79 +0x1c1f:  pop    %esi
080e3e7a +0x1c20:  pop    %ebp
080e3e7b +0x1c21:  ret    $0x4
080e3e7e +0x1c24:  push   %ebp
080e3e7f +0x1c25:  mov    %esp,%ebp
080e3e81 +0x1c27:  sub    $0x18,%esp
080e3e84 +0x1c2a:  mov    0xc(%ebp),%eax
080e3e87 +0x1c2d:  mov    %eax,(%esp)
080e3e8a +0x1c30:  call   080e4261 <+0x2007>
080e3e8f +0x1c35:  mov    0x8(%ebp),%edx
080e3e92 +0x1c38:  mov    (%eax),%eax
080e3e94 +0x1c3a:  mov    %eax,(%edx)
080e3e96 +0x1c3c:  mov    0x10(%ebp),%eax
080e3e99 +0x1c3f:  mov    %eax,(%esp)
080e3e9c +0x1c42:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
080e3ea1 +0x1c47:  movzbl (%eax),%edx
080e3ea4 +0x1c4a:  mov    0x8(%ebp),%eax
080e3ea7 +0x1c4d:  mov    %dl,0x4(%eax)
080e3eaa +0x1c50:  leave
080e3eab +0x1c51:  ret
080e3eac +0x1c52:  push   %ebp
080e3ead +0x1c53:  mov    %esp,%ebp
080e3eaf +0x1c55:  sub    $0x18,%esp
080e3eb2 +0x1c58:  mov    0x8(%ebp),%eax
080e3eb5 +0x1c5b:  mov    (%eax),%eax
080e3eb7 +0x1c5d:  mov    %eax,(%esp)
080e3eba +0x1c60:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
080e3ebf +0x1c65:  mov    0x8(%ebp),%edx
080e3ec2 +0x1c68:  mov    %eax,(%edx)
080e3ec4 +0x1c6a:  mov    0x8(%ebp),%eax
080e3ec7 +0x1c6d:  leave
080e3ec8 +0x1c6e:  ret
080e3ec9 +0x1c6f:  nop
080e3eca +0x1c70:  push   %ebp
080e3ecb +0x1c71:  mov    %esp,%ebp
080e3ecd +0x1c73:  sub    $0x18,%esp
080e3ed0 +0x1c76:  mov    0xc(%ebp),%eax
080e3ed3 +0x1c79:  mov    %eax,(%esp)
080e3ed6 +0x1c7c:  call   080e4269 <+0x200f>
080e3edb +0x1c81:  mov    0x8(%ebp),%edx
080e3ede +0x1c84:  mov    (%eax),%eax
080e3ee0 +0x1c86:  mov    %eax,(%edx)
080e3ee2 +0x1c88:  mov    0x10(%ebp),%eax
080e3ee5 +0x1c8b:  mov    %eax,(%esp)
080e3ee8 +0x1c8e:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
080e3eed +0x1c93:  movzbl (%eax),%edx
080e3ef0 +0x1c96:  mov    0x8(%ebp),%eax
080e3ef3 +0x1c99:  mov    %dl,0x4(%eax)
080e3ef6 +0x1c9c:  leave
080e3ef7 +0x1c9d:  ret
080e3ef8 +0x1c9e:  push   %ebp
080e3ef9 +0x1c9f:  mov    %esp,%ebp
080e3efb +0x1ca1:  sub    $0x18,%esp
080e3efe +0x1ca4:  mov    0x8(%ebp),%eax
080e3f01 +0x1ca7:  mov    %eax,(%esp)
080e3f04 +0x1caa:  call   080e4272 <+0x2018>
080e3f09 +0x1caf:  leave
080e3f0a +0x1cb0:  ret
080e3f0b +0x1cb1:  nop
080e3f0c +0x1cb2:  push   %ebp
080e3f0d +0x1cb3:  mov    %esp,%ebp
080e3f0f +0x1cb5:  pop    %ebp
080e3f10 +0x1cb6:  ret
080e3f11 +0x1cb7:  nop
080e3f12 +0x1cb8:  push   %ebp
080e3f13 +0x1cb9:  mov    %esp,%ebp
080e3f15 +0x1cbb:  sub    $0x18,%esp
080e3f18 +0x1cbe:  mov    0xc(%ebp),%eax
080e3f1b +0x1cc1:  mov    %eax,(%esp)
080e3f1e +0x1cc4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e3f23 +0x1cc9:  leave
080e3f24 +0x1cca:  ret
080e3f25 +0x1ccb:  push   %ebp
080e3f26 +0x1ccc:  mov    %esp,%ebp
080e3f28 +0x1cce:  pop    %ebp
080e3f29 +0x1ccf:  ret
080e3f2a +0x1cd0:  push   %ebp
080e3f2b +0x1cd1:  mov    %esp,%ebp
080e3f2d +0x1cd3:  mov    0x8(%ebp),%eax
080e3f30 +0x1cd6:  pop    %ebp
080e3f31 +0x1cd7:  ret
080e3f32 +0x1cd8:  push   %ebp
080e3f33 +0x1cd9:  mov    %esp,%ebp
080e3f35 +0x1cdb:  pop    %ebp
080e3f36 +0x1cdc:  ret
080e3f37 +0x1cdd:  nop
080e3f38 +0x1cde:  push   %ebp
080e3f39 +0x1cdf:  mov    %esp,%ebp
080e3f3b +0x1ce1:  sub    $0x18,%esp
080e3f3e +0x1ce4:  mov    0xc(%ebp),%eax
080e3f41 +0x1ce7:  mov    %eax,(%esp)
080e3f44 +0x1cea:  call   080e3f32 <+0x1cd8>
080e3f49 +0x1cef:  leave
080e3f4a +0x1cf0:  ret
080e3f4b +0x1cf1:  nop
080e3f4c +0x1cf2:  push   %ebp
080e3f4d +0x1cf3:  mov    %esp,%ebp
080e3f4f +0x1cf5:  sub    $0x18,%esp
080e3f52 +0x1cf8:  mov    0x8(%ebp),%eax
080e3f55 +0x1cfb:  movl   $0x1,0x8(%esp)
080e3f5d +0x1d03:  mov    0xc(%ebp),%edx
080e3f60 +0x1d06:  mov    %edx,0x4(%esp)
080e3f64 +0x1d0a:  mov    %eax,(%esp)
080e3f67 +0x1d0d:  call   080e4278 <+0x201e>
080e3f6c +0x1d12:  leave
080e3f6d +0x1d13:  ret
080e3f6e +0x1d14:  push   %ebp
080e3f6f +0x1d15:  mov    %esp,%ebp
080e3f71 +0x1d17:  mov    0x8(%ebp),%eax
080e3f74 +0x1d1a:  pop    %ebp
080e3f75 +0x1d1b:  ret
080e3f76 +0x1d1c:  push   %ebp
080e3f77 +0x1d1d:  mov    %esp,%ebp
080e3f79 +0x1d1f:  push   %esi
080e3f7a +0x1d20:  push   %ebx
080e3f7b +0x1d21:  sub    $0x10,%esp
080e3f7e +0x1d24:  mov    0x10(%ebp),%eax
080e3f81 +0x1d27:  mov    %eax,(%esp)
080e3f84 +0x1d2a:  call   080e428b <+0x2031>
080e3f89 +0x1d2f:  mov    %eax,%esi
080e3f8b +0x1d31:  mov    0xc(%ebp),%eax
080e3f8e +0x1d34:  mov    %eax,(%esp)
080e3f91 +0x1d37:  call   080e428b <+0x2031>
080e3f96 +0x1d3c:  mov    %eax,%ebx
080e3f98 +0x1d3e:  mov    0x8(%ebp),%eax
080e3f9b +0x1d41:  mov    %eax,(%esp)
080e3f9e +0x1d44:  call   080e428b <+0x2031>
080e3fa3 +0x1d49:  mov    %esi,0x8(%esp)
080e3fa7 +0x1d4d:  mov    %ebx,0x4(%esp)
080e3fab +0x1d51:  mov    %eax,(%esp)
080e3fae +0x1d54:  call   080e4293 <+0x2039>
080e3fb3 +0x1d59:  add    $0x10,%esp
080e3fb6 +0x1d5c:  pop    %ebx
080e3fb7 +0x1d5d:  pop    %esi
080e3fb8 +0x1d5e:  pop    %ebp
080e3fb9 +0x1d5f:  ret
080e3fba +0x1d60:  push   %ebp
080e3fbb +0x1d61:  mov    %esp,%ebp
080e3fbd +0x1d63:  sub    $0x18,%esp
080e3fc0 +0x1d66:  mov    0x8(%ebp),%eax
080e3fc3 +0x1d69:  mov    %eax,(%esp)
080e3fc6 +0x1d6c:  call   080e42b8 <+0x205e>
080e3fcb +0x1d71:  mov    %eax,(%esp)
080e3fce +0x1d74:  call   080e42c0 <+0x2066>
080e3fd3 +0x1d79:  leave
080e3fd4 +0x1d7a:  ret
080e3fd5 +0x1d7b:  nop
080e3fd6 +0x1d7c:  push   %ebp
080e3fd7 +0x1d7d:  mov    %esp,%ebp
080e3fd9 +0x1d7f:  sub    $0x18,%esp
080e3fdc +0x1d82:  mov    0x8(%ebp),%eax
080e3fdf +0x1d85:  mov    %eax,(%esp)
080e3fe2 +0x1d88:  call   080e42c0 <+0x2066>
080e3fe7 +0x1d8d:  cmp    0xc(%ebp),%eax
080e3fea +0x1d90:  setb   %al
080e3fed +0x1d93:  movzbl %al,%eax
080e3ff0 +0x1d96:  test   %eax,%eax
080e3ff2 +0x1d98:  setne  %al
080e3ff5 +0x1d9b:  test   %al,%al
080e3ff7 +0x1d9d:  je     080e3ffe <+0x1da4>
080e3ff9 +0x1d9f:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
080e3ffe +0x1da4:  mov    0xc(%ebp),%eax
080e4001 +0x1da7:  shl    $0x2,%eax
080e4004 +0x1daa:  mov    %eax,(%esp)
080e4007 +0x1dad:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080e400c +0x1db2:  leave
080e400d +0x1db3:  ret
080e400e +0x1db4:  push   %ebp
080e400f +0x1db5:  mov    %esp,%ebp
080e4011 +0x1db7:  push   %ebx
080e4012 +0x1db8:  sub    $0x14,%esp
080e4015 +0x1dbb:  mov    0x8(%ebp),%ebx
080e4018 +0x1dbe:  mov    0xc(%ebp),%eax
080e401b +0x1dc1:  mov    (%eax),%eax
080e401d +0x1dc3:  mov    %eax,0x4(%esp)
080e4021 +0x1dc7:  mov    %ebx,(%esp)
080e4024 +0x1dca:  call   080e42ca <+0x2070>
080e4029 +0x1dcf:  mov    %ebx,%eax
080e402b +0x1dd1:  add    $0x14,%esp
080e402e +0x1dd4:  pop    %ebx
080e402f +0x1dd5:  pop    %ebp
080e4030 +0x1dd6:  ret    $0x4
080e4033 +0x1dd9:  push   %ebp
080e4034 +0x1dda:  mov    %esp,%ebp
080e4036 +0x1ddc:  sub    $0x18,%esp
080e4039 +0x1ddf:  mov    0x10(%ebp),%eax
080e403c +0x1de2:  mov    %eax,0x8(%esp)
080e4040 +0x1de6:  mov    0xc(%ebp),%eax
080e4043 +0x1de9:  mov    %eax,0x4(%esp)
080e4047 +0x1ded:  mov    0x8(%ebp),%eax
080e404a +0x1df0:  mov    %eax,(%esp)
080e404d +0x1df3:  call   080e42d7 <+0x207d>
080e4052 +0x1df8:  leave
080e4053 +0x1df9:  ret
080e4054 +0x1dfa:  push   %ebp
080e4055 +0x1dfb:  mov    %esp,%ebp
080e4057 +0x1dfd:  sub    $0x18,%esp
080e405a +0x1e00:  mov    0x8(%ebp),%eax
080e405d +0x1e03:  mov    %eax,(%esp)
080e4060 +0x1e06:  call   080e42f8 <+0x209e>
080e4065 +0x1e0b:  leave
080e4066 +0x1e0c:  ret
080e4067 +0x1e0d:  nop
080e4068 +0x1e0e:  push   %ebp
080e4069 +0x1e0f:  mov    %esp,%ebp
080e406b +0x1e11:  mov    0x8(%ebp),%eax
080e406e +0x1e14:  movl   $0x0,0x4(%eax)
080e4075 +0x1e1b:  mov    0x8(%ebp),%eax
080e4078 +0x1e1e:  movl   $0x0,0x8(%eax)
080e407f +0x1e25:  mov    0x8(%ebp),%eax
080e4082 +0x1e28:  lea    0x4(%eax),%edx
080e4085 +0x1e2b:  mov    0x8(%ebp),%eax
080e4088 +0x1e2e:  mov    %edx,0xc(%eax)
080e408b +0x1e31:  mov    0x8(%ebp),%eax
080e408e +0x1e34:  lea    0x4(%eax),%edx
080e4091 +0x1e37:  mov    0x8(%ebp),%eax
080e4094 +0x1e3a:  mov    %edx,0x10(%eax)
080e4097 +0x1e3d:  pop    %ebp
080e4098 +0x1e3e:  ret
080e4099 +0x1e3f:  nop
080e409a +0x1e40:  push   %ebp
080e409b +0x1e41:  mov    %esp,%ebp
080e409d +0x1e43:  mov    0x8(%ebp),%eax
080e40a0 +0x1e46:  pop    %ebp
080e40a1 +0x1e47:  ret
080e40a2 +0x1e48:  push   %ebp
080e40a3 +0x1e49:  mov    %esp,%ebp
080e40a5 +0x1e4b:  pop    %ebp
080e40a6 +0x1e4c:  ret
080e40a7 +0x1e4d:  nop
080e40a8 +0x1e4e:  push   %ebp
080e40a9 +0x1e4f:  mov    %esp,%ebp
080e40ab +0x1e51:  sub    $0x18,%esp
080e40ae +0x1e54:  mov    0xc(%ebp),%eax
080e40b1 +0x1e57:  mov    %eax,(%esp)
080e40b4 +0x1e5a:  call   080e40a2 <+0x1e48>
080e40b9 +0x1e5f:  leave
080e40ba +0x1e60:  ret
080e40bb +0x1e61:  nop
080e40bc +0x1e62:  push   %ebp
080e40bd +0x1e63:  mov    %esp,%ebp
080e40bf +0x1e65:  sub    $0x18,%esp
080e40c2 +0x1e68:  mov    0x8(%ebp),%eax
080e40c5 +0x1e6b:  movl   $0x1,0x8(%esp)
080e40cd +0x1e73:  mov    0xc(%ebp),%edx
080e40d0 +0x1e76:  mov    %edx,0x4(%esp)
080e40d4 +0x1e7a:  mov    %eax,(%esp)
080e40d7 +0x1e7d:  call   080e42fe <+0x20a4>
080e40dc +0x1e82:  leave
080e40dd +0x1e83:  ret
080e40de +0x1e84:  push   %ebp
080e40df +0x1e85:  mov    %esp,%ebp
080e40e1 +0x1e87:  mov    0x8(%ebp),%eax
080e40e4 +0x1e8a:  pop    %ebp
080e40e5 +0x1e8b:  ret
080e40e6 +0x1e8c:  push   %ebp
080e40e7 +0x1e8d:  mov    %esp,%ebp
080e40e9 +0x1e8f:  pop    %ebp
080e40ea +0x1e90:  ret
080e40eb +0x1e91:  nop
080e40ec +0x1e92:  push   %ebp
080e40ed +0x1e93:  mov    %esp,%ebp
080e40ef +0x1e95:  sub    $0x18,%esp
080e40f2 +0x1e98:  mov    0xc(%ebp),%eax
080e40f5 +0x1e9b:  mov    %eax,(%esp)
080e40f8 +0x1e9e:  call   080e40e6 <+0x1e8c>
080e40fd +0x1ea3:  leave
080e40fe +0x1ea4:  ret
080e40ff +0x1ea5:  nop
080e4100 +0x1ea6:  push   %ebp
080e4101 +0x1ea7:  mov    %esp,%ebp
080e4103 +0x1ea9:  sub    $0x18,%esp
080e4106 +0x1eac:  mov    0x8(%ebp),%eax
080e4109 +0x1eaf:  movl   $0x1,0x8(%esp)
080e4111 +0x1eb7:  mov    0xc(%ebp),%edx
080e4114 +0x1eba:  mov    %edx,0x4(%esp)
080e4118 +0x1ebe:  mov    %eax,(%esp)
080e411b +0x1ec1:  call   080e4312 <+0x20b8>
080e4120 +0x1ec6:  leave
080e4121 +0x1ec7:  ret
080e4122 +0x1ec8:  push   %ebp
080e4123 +0x1ec9:  mov    %esp,%ebp
080e4125 +0x1ecb:  mov    0x8(%ebp),%eax
080e4128 +0x1ece:  add    $0x10,%eax
080e412b +0x1ed1:  pop    %ebp
080e412c +0x1ed2:  ret
080e412d +0x1ed3:  push   %ebp
080e412e +0x1ed4:  mov    %esp,%ebp
080e4130 +0x1ed6:  mov    0x8(%ebp),%eax
080e4133 +0x1ed9:  add    $0x10,%eax
080e4136 +0x1edc:  pop    %ebp
080e4137 +0x1edd:  ret
080e4138 +0x1ede:  push   %ebp
080e4139 +0x1edf:  mov    %esp,%ebp
080e413b +0x1ee1:  push   %esi
080e413c +0x1ee2:  push   %ebx
080e413d +0x1ee3:  sub    $0x20,%esp
080e4140 +0x1ee6:  mov    0x8(%ebp),%eax
080e4143 +0x1ee9:  mov    %eax,(%esp)
080e4146 +0x1eec:  call   080e4326 <+0x20cc>
080e414b +0x1ef1:  mov    %eax,-0xc(%ebp)
080e414e +0x1ef4:  mov    0xc(%ebp),%eax
080e4151 +0x1ef7:  mov    %eax,(%esp)
080e4154 +0x1efa:  call   080e4349 <+0x20ef>
080e4159 +0x1eff:  mov    %eax,%ebx
080e415b +0x1f01:  mov    0x8(%ebp),%eax
080e415e +0x1f04:  mov    %eax,(%esp)
080e4161 +0x1f07:  call   080e3f2a <+0x1cd0>
080e4166 +0x1f0c:  mov    %ebx,0x8(%esp)
080e416a +0x1f10:  mov    -0xc(%ebp),%edx
080e416d +0x1f13:  mov    %edx,0x4(%esp)
080e4171 +0x1f17:  mov    %eax,(%esp)
080e4174 +0x1f1a:  call   080e4352 <+0x20f8>
080e4179 +0x1f1f:  jmp    080e41af <+0x1f55>
080e417b +0x1f21:  mov    %eax,(%esp)
080e417e +0x1f24:  call   08725ce0 <__cxa_begin_catch>
080e4183 +0x1f29:  mov    -0xc(%ebp),%eax
080e4186 +0x1f2c:  mov    %eax,0x4(%esp)
080e418a +0x1f30:  mov    0x8(%ebp),%eax
080e418d +0x1f33:  mov    %eax,(%esp)
080e4190 +0x1f36:  call   080e3f4c <+0x1cf2>
080e4195 +0x1f3b:  call   08724be0 <__cxa_rethrow>
080e419a +0x1f40:  mov    %edx,%ebx
080e419c +0x1f42:  mov    %eax,%esi
080e419e +0x1f44:  call   08725c30 <__cxa_end_catch>
080e41a3 +0x1f49:  mov    %esi,%eax
080e41a5 +0x1f4b:  mov    %ebx,%edx
080e41a7 +0x1f4d:  mov    %eax,(%esp)
080e41aa +0x1f50:  call   08ae3750 <_Unwind_Resume>
080e41af +0x1f55:  mov    -0xc(%ebp),%eax
080e41b2 +0x1f58:  add    $0x20,%esp
080e41b5 +0x1f5b:  pop    %ebx
080e41b6 +0x1f5c:  pop    %esi
080e41b7 +0x1f5d:  pop    %ebp
080e41b8 +0x1f5e:  ret
080e41b9 +0x1f5f:  push   %ebp
080e41ba +0x1f60:  mov    %esp,%ebp
080e41bc +0x1f62:  mov    0x8(%ebp),%eax
080e41bf +0x1f65:  pop    %ebp
080e41c0 +0x1f66:  ret
080e41c1 +0x1f67:  push   %ebp
080e41c2 +0x1f68:  mov    %esp,%ebp
080e41c4 +0x1f6a:  mov    0x8(%ebp),%eax
080e41c7 +0x1f6d:  pop    %ebp
080e41c8 +0x1f6e:  ret
080e41c9 +0x1f6f:  push   %ebp
080e41ca +0x1f70:  mov    %esp,%ebp
080e41cc +0x1f72:  mov    0x8(%ebp),%eax
080e41cf +0x1f75:  add    $0x10,%eax
080e41d2 +0x1f78:  pop    %ebp
080e41d3 +0x1f79:  ret
080e41d4 +0x1f7a:  push   %ebp
080e41d5 +0x1f7b:  mov    %esp,%ebp
080e41d7 +0x1f7d:  mov    0x8(%ebp),%eax
080e41da +0x1f80:  add    $0x10,%eax
080e41dd +0x1f83:  pop    %ebp
080e41de +0x1f84:  ret
080e41df +0x1f85:  nop
080e41e0 +0x1f86:  push   %ebp
080e41e1 +0x1f87:  mov    %esp,%ebp
080e41e3 +0x1f89:  push   %esi
080e41e4 +0x1f8a:  push   %ebx
080e41e5 +0x1f8b:  sub    $0x20,%esp
080e41e8 +0x1f8e:  mov    0x8(%ebp),%eax
080e41eb +0x1f91:  mov    %eax,(%esp)
080e41ee +0x1f94:  call   080e4392 <+0x2138>
080e41f3 +0x1f99:  mov    %eax,-0xc(%ebp)
080e41f6 +0x1f9c:  mov    0xc(%ebp),%eax
080e41f9 +0x1f9f:  mov    %eax,(%esp)
080e41fc +0x1fa2:  call   080e43b5 <+0x215b>
080e4201 +0x1fa7:  mov    %eax,%ebx
080e4203 +0x1fa9:  mov    0x8(%ebp),%eax
080e4206 +0x1fac:  mov    %eax,(%esp)
080e4209 +0x1faf:  call   080e40de <+0x1e84>
080e420e +0x1fb4:  mov    %ebx,0x8(%esp)
080e4212 +0x1fb8:  mov    -0xc(%ebp),%edx
080e4215 +0x1fbb:  mov    %edx,0x4(%esp)
080e4219 +0x1fbf:  mov    %eax,(%esp)
080e421c +0x1fc2:  call   080e43be <+0x2164>
080e4221 +0x1fc7:  jmp    080e4257 <+0x1ffd>
080e4223 +0x1fc9:  mov    %eax,(%esp)
080e4226 +0x1fcc:  call   08725ce0 <__cxa_begin_catch>
080e422b +0x1fd1:  mov    -0xc(%ebp),%eax
080e422e +0x1fd4:  mov    %eax,0x4(%esp)
080e4232 +0x1fd8:  mov    0x8(%ebp),%eax
080e4235 +0x1fdb:  mov    %eax,(%esp)
080e4238 +0x1fde:  call   080e4100 <+0x1ea6>
080e423d +0x1fe3:  call   08724be0 <__cxa_rethrow>
080e4242 +0x1fe8:  mov    %edx,%ebx
080e4244 +0x1fea:  mov    %eax,%esi
080e4246 +0x1fec:  call   08725c30 <__cxa_end_catch>
080e424b +0x1ff1:  mov    %esi,%eax
080e424d +0x1ff3:  mov    %ebx,%edx
080e424f +0x1ff5:  mov    %eax,(%esp)
080e4252 +0x1ff8:  call   08ae3750 <_Unwind_Resume>
080e4257 +0x1ffd:  mov    -0xc(%ebp),%eax
080e425a +0x2000:  add    $0x20,%esp
080e425d +0x2003:  pop    %ebx
080e425e +0x2004:  pop    %esi
080e425f +0x2005:  pop    %ebp
080e4260 +0x2006:  ret
080e4261 +0x2007:  push   %ebp
080e4262 +0x2008:  mov    %esp,%ebp
080e4264 +0x200a:  mov    0x8(%ebp),%eax
080e4267 +0x200d:  pop    %ebp
080e4268 +0x200e:  ret
080e4269 +0x200f:  push   %ebp
080e426a +0x2010:  mov    %esp,%ebp
080e426c +0x2012:  mov    0x8(%ebp),%eax
080e426f +0x2015:  pop    %ebp
080e4270 +0x2016:  ret
080e4271 +0x2017:  nop
080e4272 +0x2018:  push   %ebp
080e4273 +0x2019:  mov    %esp,%ebp
080e4275 +0x201b:  pop    %ebp
080e4276 +0x201c:  ret
080e4277 +0x201d:  nop
080e4278 +0x201e:  push   %ebp
080e4279 +0x201f:  mov    %esp,%ebp
080e427b +0x2021:  sub    $0x18,%esp
080e427e +0x2024:  mov    0xc(%ebp),%eax
080e4281 +0x2027:  mov    %eax,(%esp)
080e4284 +0x202a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e4289 +0x202f:  leave
080e428a +0x2030:  ret
080e428b +0x2031:  push   %ebp
080e428c +0x2032:  mov    %esp,%ebp
080e428e +0x2034:  mov    0x8(%ebp),%eax
080e4291 +0x2037:  pop    %ebp
080e4292 +0x2038:  ret
080e4293 +0x2039:  push   %ebp
080e4294 +0x203a:  mov    %esp,%ebp
080e4296 +0x203c:  sub    $0x28,%esp
080e4299 +0x203f:  movb   $0x1,-0x9(%ebp)
080e429d +0x2043:  mov    0x10(%ebp),%eax
080e42a0 +0x2046:  mov    %eax,0x8(%esp)
080e42a4 +0x204a:  mov    0xc(%ebp),%eax
080e42a7 +0x204d:  mov    %eax,0x4(%esp)
080e42ab +0x2051:  mov    0x8(%ebp),%eax
080e42ae +0x2054:  mov    %eax,(%esp)
080e42b1 +0x2057:  call   080e43fd <+0x21a3>
080e42b6 +0x205c:  leave
080e42b7 +0x205d:  ret
080e42b8 +0x205e:  push   %ebp
080e42b9 +0x205f:  mov    %esp,%ebp
080e42bb +0x2061:  mov    0x8(%ebp),%eax
080e42be +0x2064:  pop    %ebp
080e42bf +0x2065:  ret
080e42c0 +0x2066:  push   %ebp
080e42c1 +0x2067:  mov    %esp,%ebp
080e42c3 +0x2069:  mov    $0x3fffffff,%eax
080e42c8 +0x206e:  pop    %ebp
080e42c9 +0x206f:  ret
080e42ca +0x2070:  push   %ebp
080e42cb +0x2071:  mov    %esp,%ebp
080e42cd +0x2073:  mov    0x8(%ebp),%eax
080e42d0 +0x2076:  mov    0xc(%ebp),%edx
080e42d3 +0x2079:  mov    %edx,(%eax)
080e42d5 +0x207b:  pop    %ebp
080e42d6 +0x207c:  ret
080e42d7 +0x207d:  push   %ebp
080e42d8 +0x207e:  mov    %esp,%ebp
080e42da +0x2080:  sub    $0x18,%esp
080e42dd +0x2083:  mov    0x10(%ebp),%eax
080e42e0 +0x2086:  mov    %eax,0x8(%esp)
080e42e4 +0x208a:  mov    0xc(%ebp),%eax
080e42e7 +0x208d:  mov    %eax,0x4(%esp)
080e42eb +0x2091:  mov    0x8(%ebp),%eax
080e42ee +0x2094:  mov    %eax,(%esp)
080e42f1 +0x2097:  call   080e444a <+0x21f0>
080e42f6 +0x209c:  leave
080e42f7 +0x209d:  ret
080e42f8 +0x209e:  push   %ebp
080e42f9 +0x209f:  mov    %esp,%ebp
080e42fb +0x20a1:  pop    %ebp
080e42fc +0x20a2:  ret
080e42fd +0x20a3:  nop
080e42fe +0x20a4:  push   %ebp
080e42ff +0x20a5:  mov    %esp,%ebp
080e4301 +0x20a7:  sub    $0x18,%esp
080e4304 +0x20aa:  mov    0xc(%ebp),%eax
080e4307 +0x20ad:  mov    %eax,(%esp)
080e430a +0x20b0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e430f +0x20b5:  leave
080e4310 +0x20b6:  ret
080e4311 +0x20b7:  nop
080e4312 +0x20b8:  push   %ebp
080e4313 +0x20b9:  mov    %esp,%ebp
080e4315 +0x20bb:  sub    $0x18,%esp
080e4318 +0x20be:  mov    0xc(%ebp),%eax
080e431b +0x20c1:  mov    %eax,(%esp)
080e431e +0x20c4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e4323 +0x20c9:  leave
080e4324 +0x20ca:  ret
080e4325 +0x20cb:  nop
080e4326 +0x20cc:  push   %ebp
080e4327 +0x20cd:  mov    %esp,%ebp
080e4329 +0x20cf:  sub    $0x18,%esp
080e432c +0x20d2:  mov    0x8(%ebp),%eax
080e432f +0x20d5:  movl   $0x0,0x8(%esp)
080e4337 +0x20dd:  movl   $0x1,0x4(%esp)
080e433f +0x20e5:  mov    %eax,(%esp)
080e4342 +0x20e8:  call   080e446c <+0x2212>
080e4347 +0x20ed:  leave
080e4348 +0x20ee:  ret
080e4349 +0x20ef:  push   %ebp
080e434a +0x20f0:  mov    %esp,%ebp
080e434c +0x20f2:  mov    0x8(%ebp),%eax
080e434f +0x20f5:  pop    %ebp
080e4350 +0x20f6:  ret
080e4351 +0x20f7:  nop
080e4352 +0x20f8:  push   %ebp
080e4353 +0x20f9:  mov    %esp,%ebp
080e4355 +0x20fb:  push   %ebx
080e4356 +0x20fc:  sub    $0x14,%esp
080e4359 +0x20ff:  mov    0x10(%ebp),%eax
080e435c +0x2102:  mov    %eax,(%esp)
080e435f +0x2105:  call   080e4349 <+0x20ef>
080e4364 +0x210a:  mov    %eax,%ebx
080e4366 +0x210c:  mov    0xc(%ebp),%eax
080e4369 +0x210f:  mov    %eax,0x4(%esp)
080e436d +0x2113:  movl   $0x18,(%esp)
080e4374 +0x211a:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080e4379 +0x211f:  mov    %eax,%edx
080e437b +0x2121:  test   %edx,%edx
080e437d +0x2123:  je     080e438b <+0x2131>
080e437f +0x2125:  mov    %ebx,0x4(%esp)
080e4383 +0x2129:  mov    %eax,(%esp)
080e4386 +0x212c:  call   080e44aa <+0x2250>
080e438b +0x2131:  add    $0x14,%esp
080e438e +0x2134:  pop    %ebx
080e438f +0x2135:  pop    %ebp
080e4390 +0x2136:  ret
080e4391 +0x2137:  nop
080e4392 +0x2138:  push   %ebp
080e4393 +0x2139:  mov    %esp,%ebp
080e4395 +0x213b:  sub    $0x18,%esp
080e4398 +0x213e:  mov    0x8(%ebp),%eax
080e439b +0x2141:  movl   $0x0,0x8(%esp)
080e43a3 +0x2149:  movl   $0x1,0x4(%esp)
080e43ab +0x2151:  mov    %eax,(%esp)
080e43ae +0x2154:  call   080e44f2 <+0x2298>
080e43b3 +0x2159:  leave
080e43b4 +0x215a:  ret
080e43b5 +0x215b:  push   %ebp
080e43b6 +0x215c:  mov    %esp,%ebp
080e43b8 +0x215e:  mov    0x8(%ebp),%eax
080e43bb +0x2161:  pop    %ebp
080e43bc +0x2162:  ret
080e43bd +0x2163:  nop
080e43be +0x2164:  push   %ebp
080e43bf +0x2165:  mov    %esp,%ebp
080e43c1 +0x2167:  push   %ebx
080e43c2 +0x2168:  sub    $0x14,%esp
080e43c5 +0x216b:  mov    0x10(%ebp),%eax
080e43c8 +0x216e:  mov    %eax,(%esp)
080e43cb +0x2171:  call   080e43b5 <+0x215b>
080e43d0 +0x2176:  mov    %eax,%ebx
080e43d2 +0x2178:  mov    0xc(%ebp),%eax
080e43d5 +0x217b:  mov    %eax,0x4(%esp)
080e43d9 +0x217f:  movl   $0x18,(%esp)
080e43e0 +0x2186:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080e43e5 +0x218b:  mov    %eax,%edx
080e43e7 +0x218d:  test   %edx,%edx
080e43e9 +0x218f:  je     080e43f7 <+0x219d>
080e43eb +0x2191:  mov    %ebx,0x4(%esp)
080e43ef +0x2195:  mov    %eax,(%esp)
080e43f2 +0x2198:  call   080e4530 <+0x22d6>
080e43f7 +0x219d:  add    $0x14,%esp
080e43fa +0x21a0:  pop    %ebx
080e43fb +0x21a1:  pop    %ebp
080e43fc +0x21a2:  ret
080e43fd +0x21a3:  push   %ebp
080e43fe +0x21a4:  mov    %esp,%ebp
080e4400 +0x21a6:  sub    $0x28,%esp
080e4403 +0x21a9:  mov    0xc(%ebp),%edx
080e4406 +0x21ac:  mov    0x8(%ebp),%eax
080e4409 +0x21af:  mov    %edx,%ecx
080e440b +0x21b1:  sub    %eax,%ecx
080e440d +0x21b3:  mov    %ecx,%eax
080e440f +0x21b5:  sar    $0x2,%eax
080e4412 +0x21b8:  mov    %eax,-0xc(%ebp)
080e4415 +0x21bb:  mov    -0xc(%ebp),%eax
080e4418 +0x21be:  lea    0x0(,%eax,4),%edx
080e441f +0x21c5:  mov    -0xc(%ebp),%eax
080e4422 +0x21c8:  shl    $0x2,%eax
080e4425 +0x21cb:  neg    %eax
080e4427 +0x21cd:  add    0x10(%ebp),%eax
080e442a +0x21d0:  mov    %edx,0x8(%esp)
080e442e +0x21d4:  mov    0x8(%ebp),%edx
080e4431 +0x21d7:  mov    %edx,0x4(%esp)
080e4435 +0x21db:  mov    %eax,(%esp)
080e4438 +0x21de:  call   0807d880 <_init+0x178>
080e443d +0x21e3:  mov    -0xc(%ebp),%eax
080e4440 +0x21e6:  shl    $0x2,%eax
080e4443 +0x21e9:  neg    %eax
080e4445 +0x21eb:  add    0x10(%ebp),%eax
080e4448 +0x21ee:  leave
080e4449 +0x21ef:  ret
080e444a +0x21f0:  push   %ebp
080e444b +0x21f1:  mov    %esp,%ebp
080e444d +0x21f3:  sub    $0x18,%esp
080e4450 +0x21f6:  mov    0x10(%ebp),%eax
080e4453 +0x21f9:  mov    %eax,0x8(%esp)
080e4457 +0x21fd:  mov    0xc(%ebp),%eax
080e445a +0x2200:  mov    %eax,0x4(%esp)
080e445e +0x2204:  mov    0x8(%ebp),%eax
080e4461 +0x2207:  mov    %eax,(%esp)
080e4464 +0x220a:  call   080e4578 <+0x231e>
080e4469 +0x220f:  leave
080e446a +0x2210:  ret
080e446b +0x2211:  nop
080e446c +0x2212:  push   %ebp
080e446d +0x2213:  mov    %esp,%ebp
080e446f +0x2215:  sub    $0x18,%esp
080e4472 +0x2218:  mov    0x8(%ebp),%eax
080e4475 +0x221b:  mov    %eax,(%esp)
080e4478 +0x221e:  call   080e45b0 <+0x2356>
080e447d +0x2223:  cmp    0xc(%ebp),%eax
080e4480 +0x2226:  setb   %al
080e4483 +0x2229:  movzbl %al,%eax
080e4486 +0x222c:  test   %eax,%eax
080e4488 +0x222e:  setne  %al
080e448b +0x2231:  test   %al,%al
080e448d +0x2233:  je     080e4494 <+0x223a>
080e448f +0x2235:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
080e4494 +0x223a:  mov    0xc(%ebp),%edx
080e4497 +0x223d:  mov    %edx,%eax
080e4499 +0x223f:  add    %eax,%eax
080e449b +0x2241:  add    %edx,%eax
080e449d +0x2243:  shl    $0x3,%eax
080e44a0 +0x2246:  mov    %eax,(%esp)
080e44a3 +0x2249:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080e44a8 +0x224e:  leave
080e44a9 +0x224f:  ret
080e44aa +0x2250:  push   %ebp
080e44ab +0x2251:  mov    %esp,%ebp
080e44ad +0x2253:  sub    $0x18,%esp
080e44b0 +0x2256:  mov    0x8(%ebp),%eax
080e44b3 +0x2259:  movl   $0x0,(%eax)
080e44b9 +0x225f:  mov    0x8(%ebp),%eax
080e44bc +0x2262:  movl   $0x0,0x4(%eax)
080e44c3 +0x2269:  mov    0x8(%ebp),%eax
080e44c6 +0x226c:  movl   $0x0,0x8(%eax)
080e44cd +0x2273:  mov    0x8(%ebp),%eax
080e44d0 +0x2276:  movl   $0x0,0xc(%eax)
080e44d7 +0x227d:  mov    0xc(%ebp),%eax
080e44da +0x2280:  mov    %eax,(%esp)
080e44dd +0x2283:  call   080e4349 <+0x20ef>
080e44e2 +0x2288:  mov    0x8(%ebp),%ecx
080e44e5 +0x228b:  mov    0x4(%eax),%edx
080e44e8 +0x228e:  mov    (%eax),%eax
080e44ea +0x2290:  mov    %eax,0x10(%ecx)
080e44ed +0x2293:  mov    %edx,0x14(%ecx)
080e44f0 +0x2296:  leave
080e44f1 +0x2297:  ret
080e44f2 +0x2298:  push   %ebp
080e44f3 +0x2299:  mov    %esp,%ebp
080e44f5 +0x229b:  sub    $0x18,%esp
080e44f8 +0x229e:  mov    0x8(%ebp),%eax
080e44fb +0x22a1:  mov    %eax,(%esp)
080e44fe +0x22a4:  call   080e45ba <+0x2360>
080e4503 +0x22a9:  cmp    0xc(%ebp),%eax
080e4506 +0x22ac:  setb   %al
080e4509 +0x22af:  movzbl %al,%eax
080e450c +0x22b2:  test   %eax,%eax
080e450e +0x22b4:  setne  %al
080e4511 +0x22b7:  test   %al,%al
080e4513 +0x22b9:  je     080e451a <+0x22c0>
080e4515 +0x22bb:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
080e451a +0x22c0:  mov    0xc(%ebp),%edx
080e451d +0x22c3:  mov    %edx,%eax
080e451f +0x22c5:  add    %eax,%eax
080e4521 +0x22c7:  add    %edx,%eax
080e4523 +0x22c9:  shl    $0x3,%eax
080e4526 +0x22cc:  mov    %eax,(%esp)
080e4529 +0x22cf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080e452e +0x22d4:  leave
080e452f +0x22d5:  ret
080e4530 +0x22d6:  push   %ebp
080e4531 +0x22d7:  mov    %esp,%ebp
080e4533 +0x22d9:  sub    $0x18,%esp
080e4536 +0x22dc:  mov    0x8(%ebp),%eax
080e4539 +0x22df:  movl   $0x0,(%eax)
080e453f +0x22e5:  mov    0x8(%ebp),%eax
080e4542 +0x22e8:  movl   $0x0,0x4(%eax)
080e4549 +0x22ef:  mov    0x8(%ebp),%eax
080e454c +0x22f2:  movl   $0x0,0x8(%eax)
080e4553 +0x22f9:  mov    0x8(%ebp),%eax
080e4556 +0x22fc:  movl   $0x0,0xc(%eax)
080e455d +0x2303:  mov    0xc(%ebp),%eax
080e4560 +0x2306:  mov    %eax,(%esp)
080e4563 +0x2309:  call   080e43b5 <+0x215b>
080e4568 +0x230e:  mov    0x8(%ebp),%ecx
080e456b +0x2311:  mov    0x4(%eax),%edx
080e456e +0x2314:  mov    (%eax),%eax
080e4570 +0x2316:  mov    %eax,0x10(%ecx)
080e4573 +0x2319:  mov    %edx,0x14(%ecx)
080e4576 +0x231c:  leave
080e4577 +0x231d:  ret
080e4578 +0x231e:  push   %ebp
080e4579 +0x231f:  mov    %esp,%ebp
080e457b +0x2321:  push   %ebx
080e457c +0x2322:  sub    $0x14,%esp
080e457f +0x2325:  mov    0xc(%ebp),%eax
080e4582 +0x2328:  mov    %eax,(%esp)
080e4585 +0x232b:  call   080e45c4 <+0x236a>
080e458a +0x2330:  mov    %eax,%ebx
080e458c +0x2332:  mov    0x8(%ebp),%eax
080e458f +0x2335:  mov    %eax,(%esp)
080e4592 +0x2338:  call   080e45c4 <+0x236a>
080e4597 +0x233d:  mov    0x10(%ebp),%edx
080e459a +0x2340:  mov    %edx,0x8(%esp)
080e459e +0x2344:  mov    %ebx,0x4(%esp)
080e45a2 +0x2348:  mov    %eax,(%esp)
080e45a5 +0x234b:  call   080e45d7 <+0x237d>
080e45aa +0x2350:  add    $0x14,%esp
080e45ad +0x2353:  pop    %ebx
080e45ae +0x2354:  pop    %ebp
080e45af +0x2355:  ret
080e45b0 +0x2356:  push   %ebp
080e45b1 +0x2357:  mov    %esp,%ebp
080e45b3 +0x2359:  mov    $0xaaaaaaa,%eax
080e45b8 +0x235e:  pop    %ebp
080e45b9 +0x235f:  ret
080e45ba +0x2360:  push   %ebp
080e45bb +0x2361:  mov    %esp,%ebp
080e45bd +0x2363:  mov    $0xaaaaaaa,%eax
080e45c2 +0x2368:  pop    %ebp
080e45c3 +0x2369:  ret
080e45c4 +0x236a:  push   %ebp
080e45c5 +0x236b:  mov    %esp,%ebp
080e45c7 +0x236d:  sub    $0x18,%esp
080e45ca +0x2370:  lea    0x8(%ebp),%eax
080e45cd +0x2373:  mov    %eax,(%esp)
080e45d0 +0x2376:  call   080e461c <+0x23c2>
080e45d5 +0x237b:  leave
080e45d6 +0x237c:  ret
080e45d7 +0x237d:  push   %ebp
080e45d8 +0x237e:  mov    %esp,%ebp
080e45da +0x2380:  push   %esi
080e45db +0x2381:  push   %ebx
080e45dc +0x2382:  sub    $0x10,%esp
080e45df +0x2385:  mov    0x10(%ebp),%eax
080e45e2 +0x2388:  mov    %eax,(%esp)
080e45e5 +0x238b:  call   080e428b <+0x2031>
080e45ea +0x2390:  mov    %eax,%esi
080e45ec +0x2392:  mov    0xc(%ebp),%eax
080e45ef +0x2395:  mov    %eax,(%esp)
080e45f2 +0x2398:  call   080e428b <+0x2031>
080e45f7 +0x239d:  mov    %eax,%ebx
080e45f9 +0x239f:  mov    0x8(%ebp),%eax
080e45fc +0x23a2:  mov    %eax,(%esp)
080e45ff +0x23a5:  call   080e428b <+0x2031>
080e4604 +0x23aa:  mov    %esi,0x8(%esp)
080e4608 +0x23ae:  mov    %ebx,0x4(%esp)
080e460c +0x23b2:  mov    %eax,(%esp)
080e460f +0x23b5:  call   080e4626 <+0x23cc>
080e4614 +0x23ba:  add    $0x10,%esp
080e4617 +0x23bd:  pop    %ebx
080e4618 +0x23be:  pop    %esi
080e4619 +0x23bf:  pop    %ebp
080e461a +0x23c0:  ret
080e461b +0x23c1:  nop
080e461c +0x23c2:  push   %ebp
080e461d +0x23c3:  mov    %esp,%ebp
080e461f +0x23c5:  mov    0x8(%ebp),%eax
080e4622 +0x23c8:  mov    (%eax),%eax
080e4624 +0x23ca:  pop    %ebp
080e4625 +0x23cb:  ret
080e4626 +0x23cc:  push   %ebp
080e4627 +0x23cd:  mov    %esp,%ebp
080e4629 +0x23cf:  sub    $0x28,%esp
080e462c +0x23d2:  movb   $0x1,-0x9(%ebp)
080e4630 +0x23d6:  mov    0x10(%ebp),%eax
080e4633 +0x23d9:  mov    %eax,0x8(%esp)
080e4637 +0x23dd:  mov    0xc(%ebp),%eax
080e463a +0x23e0:  mov    %eax,0x4(%esp)
080e463e +0x23e4:  mov    0x8(%ebp),%eax
080e4641 +0x23e7:  mov    %eax,(%esp)
080e4644 +0x23ea:  call   080e464b <+0x23f1>
080e4649 +0x23ef:  leave
080e464a +0x23f0:  ret
080e464b +0x23f1:  push   %ebp
080e464c +0x23f2:  mov    %esp,%ebp
080e464e +0x23f4:  sub    $0x18,%esp
080e4651 +0x23f7:  mov    0xc(%ebp),%edx
080e4654 +0x23fa:  mov    0x8(%ebp),%eax
080e4657 +0x23fd:  mov    %edx,%ecx
080e4659 +0x23ff:  sub    %eax,%ecx
080e465b +0x2401:  mov    %ecx,%eax
080e465d +0x2403:  sar    $0x2,%eax
080e4660 +0x2406:  shl    $0x2,%eax
080e4663 +0x2409:  mov    %eax,0x8(%esp)
080e4667 +0x240d:  mov    0x8(%ebp),%eax
080e466a +0x2410:  mov    %eax,0x4(%esp)
080e466e +0x2414:  mov    0x10(%ebp),%eax
080e4671 +0x2417:  mov    %eax,(%esp)
080e4674 +0x241a:  call   0807d880 <_init+0x178>
080e4679 +0x241f:  mov    0xc(%ebp),%edx
080e467c +0x2422:  mov    0x8(%ebp),%eax
080e467f +0x2425:  mov    %edx,%ecx
080e4681 +0x2427:  sub    %eax,%ecx
080e4683 +0x2429:  mov    %ecx,%eax
080e4685 +0x242b:  sar    $0x2,%eax
080e4688 +0x242e:  shl    $0x2,%eax
080e468b +0x2431:  add    0x10(%ebp),%eax
080e468e +0x2434:  leave
080e468f +0x2435:  ret
080e4690 +0x2436:  push   %ebp
080e4691 +0x2437:  mov    %esp,%ebp
080e4693 +0x2439:  sub    $0x18,%esp
080e4696 +0x243c:  mov    0x8(%ebp),%eax
080e4699 +0x243f:  movl   $&_ZTV33Inter_LoadCerashopAddRestrictType+0x8,(%eax)
080e469f +0x2445:  mov    0x8(%ebp),%eax
080e46a2 +0x2448:  mov    %eax,(%esp)
080e46a5 +0x244b:  call   080e23bc <+0x162>
080e46aa +0x2450:  mov    $0x0,%eax
080e46af +0x2455:  test   %al,%al
080e46b1 +0x2457:  je     080e46be <+0x2464>
080e46b3 +0x2459:  mov    0x8(%ebp),%eax
080e46b6 +0x245c:  mov    %eax,(%esp)
080e46b9 +0x245f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e46be +0x2464:  leave
080e46bf +0x2465:  ret
080e46c0 +0x2466:  push   %ebp
080e46c1 +0x2467:  mov    %esp,%ebp
080e46c3 +0x2469:  sub    $0x18,%esp
080e46c6 +0x246c:  mov    0x8(%ebp),%eax
080e46c9 +0x246f:  mov    %eax,(%esp)
080e46cc +0x2472:  call   080e4690 <+0x2436>
080e46d1 +0x2477:  mov    0x8(%ebp),%eax
080e46d4 +0x247a:  mov    %eax,(%esp)
080e46d7 +0x247d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e46dc +0x2482:  leave
080e46dd +0x2483:  ret
080e46de +0x2484:  push   %ebp
080e46df +0x2485:  mov    %esp,%ebp
080e46e1 +0x2487:  sub    $0x18,%esp
080e46e4 +0x248a:  mov    0x8(%ebp),%eax
080e46e7 +0x248d:  movl   $&_ZTV30DB_LoadCerashopAddRestrictType+0x8,(%eax)
080e46ed +0x2493:  mov    0x8(%ebp),%eax
080e46f0 +0x2496:  mov    %eax,(%esp)
080e46f3 +0x2499:  call   080e2378 <+0x11e>
080e46f8 +0x249e:  mov    $0x0,%eax
080e46fd +0x24a3:  test   %al,%al
080e46ff +0x24a5:  je     080e470c <+0x24b2>
080e4701 +0x24a7:  mov    0x8(%ebp),%eax
080e4704 +0x24aa:  mov    %eax,(%esp)
080e4707 +0x24ad:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e470c +0x24b2:  leave
080e470d +0x24b3:  ret
080e470e +0x24b4:  push   %ebp
080e470f +0x24b5:  mov    %esp,%ebp
080e4711 +0x24b7:  sub    $0x18,%esp
080e4714 +0x24ba:  mov    0x8(%ebp),%eax
080e4717 +0x24bd:  mov    %eax,(%esp)
080e471a +0x24c0:  call   080e46de <+0x2484>
080e471f +0x24c5:  mov    0x8(%ebp),%eax
080e4722 +0x24c8:  mov    %eax,(%esp)
080e4725 +0x24cb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e472a +0x24d0:  leave
080e472b +0x24d1:  ret
080e472c +0x24d2:  push   %ebp
080e472d +0x24d3:  mov    %esp,%ebp
080e472f +0x24d5:  sub    $0x18,%esp
080e4732 +0x24d8:  mov    0x8(%ebp),%eax
080e4735 +0x24db:  movl   $&_ZTV30DB_SaveCerashopAddRestrictType+0x8,(%eax)
080e473b +0x24e1:  mov    0x8(%ebp),%eax
080e473e +0x24e4:  mov    %eax,(%esp)
080e4741 +0x24e7:  call   080e2378 <+0x11e>
080e4746 +0x24ec:  mov    $0x0,%eax
080e474b +0x24f1:  test   %al,%al
080e474d +0x24f3:  je     080e475a <+0x2500>
080e474f +0x24f5:  mov    0x8(%ebp),%eax
080e4752 +0x24f8:  mov    %eax,(%esp)
080e4755 +0x24fb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e475a +0x2500:  leave
080e475b +0x2501:  ret
080e475c +0x2502:  push   %ebp
080e475d +0x2503:  mov    %esp,%ebp
080e475f +0x2505:  sub    $0x18,%esp
080e4762 +0x2508:  mov    0x8(%ebp),%eax
080e4765 +0x250b:  mov    %eax,(%esp)
080e4768 +0x250e:  call   080e472c <+0x24d2>
080e476d +0x2513:  mov    0x8(%ebp),%eax
080e4770 +0x2516:  mov    %eax,(%esp)
080e4773 +0x2519:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e4778 +0x251e:  leave
080e4779 +0x251f:  ret
080e477a +0x2520:  nop
080e477b +0x2521:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80e225a

/* CerashopAddRestrict::Manager::Manager() */

void CerashopAddRestrict::Manager::_GLOBAL__I_Manager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
