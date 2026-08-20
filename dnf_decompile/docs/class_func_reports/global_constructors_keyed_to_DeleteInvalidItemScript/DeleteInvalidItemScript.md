# DeleteInvalidItemScript

`_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev`

`global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to DeleteInvalidItemScript` | `0x08ac21ef` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac21ef  _GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev
#           global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()
# range [0x08ac21ef, 0x08ac2d57]
08ac21ef +0x000:  push   %ebp
08ac21f0 +0x001:  mov    %esp,%ebp
08ac21f2 +0x003:  sub    $0x18,%esp
08ac21f5 +0x006:  movl   $0xffff,0x4(%esp)
08ac21fd +0x00e:  movl   $0x1,(%esp)
08ac2204 +0x015:  call   08ac21af <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08ac2209 +0x01a:  leave
08ac220a +0x01b:  ret
08ac220b +0x01c:  nop
08ac220c +0x01d:  push   %ebp
08ac220d +0x01e:  mov    %esp,%ebp
08ac220f +0x020:  sub    $0x18,%esp
08ac2212 +0x023:  mov    0x8(%ebp),%eax
08ac2215 +0x026:  mov    %eax,(%esp)
08ac2218 +0x029:  call   08ac2220 <+0x31>
08ac221d +0x02e:  leave
08ac221e +0x02f:  ret
08ac221f +0x030:  nop
08ac2220 +0x031:  push   %ebp
08ac2221 +0x032:  mov    %esp,%ebp
08ac2223 +0x034:  mov    0x8(%ebp),%eax
08ac2226 +0x037:  movl   $0x0,(%eax)
08ac222c +0x03d:  mov    0x8(%ebp),%eax
08ac222f +0x040:  movl   $0x0,0x4(%eax)
08ac2236 +0x047:  mov    0x8(%ebp),%eax
08ac2239 +0x04a:  movl   $0x0,0x8(%eax)
08ac2240 +0x051:  pop    %ebp
08ac2241 +0x052:  ret
08ac2242 +0x053:  push   %ebp
08ac2243 +0x054:  mov    %esp,%ebp
08ac2245 +0x056:  sub    $0x18,%esp
08ac2248 +0x059:  mov    0x8(%ebp),%eax
08ac224b +0x05c:  mov    %eax,(%esp)
08ac224e +0x05f:  call   08ac227e <+0x8f>
08ac2253 +0x064:  leave
08ac2254 +0x065:  ret
08ac2255 +0x066:  nop
08ac2256 +0x067:  push   %ebp
08ac2257 +0x068:  mov    %esp,%ebp
08ac2259 +0x06a:  sub    $0x18,%esp
08ac225c +0x06d:  mov    0x8(%ebp),%eax
08ac225f +0x070:  mov    %eax,(%esp)
08ac2262 +0x073:  call   08ac23fe <+0x20f>
08ac2267 +0x078:  leave
08ac2268 +0x079:  ret
08ac2269 +0x07a:  nop
08ac226a +0x07b:  push   %ebp
08ac226b +0x07c:  mov    %esp,%ebp
08ac226d +0x07e:  sub    $0x18,%esp
08ac2270 +0x081:  mov    0x8(%ebp),%eax
08ac2273 +0x084:  mov    %eax,(%esp)
08ac2276 +0x087:  call   08ac2412 <+0x223>
08ac227b +0x08c:  leave
08ac227c +0x08d:  ret
08ac227d +0x08e:  nop
08ac227e +0x08f:  push   %ebp
08ac227f +0x090:  mov    %esp,%ebp
08ac2281 +0x092:  push   %esi
08ac2282 +0x093:  push   %ebx
08ac2283 +0x094:  sub    $0x10,%esp
08ac2286 +0x097:  mov    0x8(%ebp),%eax
08ac2289 +0x09a:  mov    %eax,(%esp)
08ac228c +0x09d:  call   08ac247c <+0x28d>
08ac2291 +0x0a2:  mov    %eax,0x4(%esp)
08ac2295 +0x0a6:  mov    0x8(%ebp),%eax
08ac2298 +0x0a9:  mov    %eax,(%esp)
08ac229b +0x0ac:  call   08ac2426 <+0x237>
08ac22a0 +0x0b1:  jmp    08ac22bd <+0xce>
08ac22a2 +0x0b3:  mov    %edx,%ebx
08ac22a4 +0x0b5:  mov    %eax,%esi
08ac22a6 +0x0b7:  mov    0x8(%ebp),%eax
08ac22a9 +0x0ba:  mov    %eax,(%esp)
08ac22ac +0x0bd:  call   08ac226a <+0x7b>
08ac22b1 +0x0c2:  mov    %esi,%eax
08ac22b3 +0x0c4:  mov    %ebx,%edx
08ac22b5 +0x0c6:  mov    %eax,(%esp)
08ac22b8 +0x0c9:  call   08ae3750 <_Unwind_Resume>
08ac22bd +0x0ce:  mov    0x8(%ebp),%eax
08ac22c0 +0x0d1:  mov    %eax,(%esp)
08ac22c3 +0x0d4:  call   08ac226a <+0x7b>
08ac22c8 +0x0d9:  add    $0x10,%esp
08ac22cb +0x0dc:  pop    %ebx
08ac22cc +0x0dd:  pop    %esi
08ac22cd +0x0de:  pop    %ebp
08ac22ce +0x0df:  ret
08ac22cf +0x0e0:  push   %ebp
08ac22d0 +0x0e1:  mov    %esp,%ebp
08ac22d2 +0x0e3:  push   %esi
08ac22d3 +0x0e4:  push   %ebx
08ac22d4 +0x0e5:  sub    $0x10,%esp
08ac22d7 +0x0e8:  mov    0x8(%ebp),%esi
08ac22da +0x0eb:  mov    0x10(%ebp),%eax
08ac22dd +0x0ee:  mov    %eax,(%esp)
08ac22e0 +0x0f1:  call   08ac2487 <+0x298>
08ac22e5 +0x0f6:  mov    %eax,%ebx
08ac22e7 +0x0f8:  mov    0xc(%ebp),%eax
08ac22ea +0x0fb:  mov    %eax,(%esp)
08ac22ed +0x0fe:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
08ac22f2 +0x103:  mov    %ebx,0x8(%esp)
08ac22f6 +0x107:  mov    %eax,0x4(%esp)
08ac22fa +0x10b:  mov    %esi,(%esp)
08ac22fd +0x10e:  call   08ac2490 <+0x2a1>
08ac2302 +0x113:  mov    %esi,%eax
08ac2304 +0x115:  add    $0x10,%esp
08ac2307 +0x118:  pop    %ebx
08ac2308 +0x119:  pop    %esi
08ac2309 +0x11a:  pop    %ebp
08ac230a +0x11b:  ret    $0x4
08ac230d +0x11e:  nop
08ac230e +0x11f:  push   %ebp
08ac230f +0x120:  mov    %esp,%ebp
08ac2311 +0x122:  sub    $0x18,%esp
08ac2314 +0x125:  mov    0xc(%ebp),%eax
08ac2317 +0x128:  mov    %eax,(%esp)
08ac231a +0x12b:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
08ac231f +0x130:  mov    (%eax),%edx
08ac2321 +0x132:  mov    0x8(%ebp),%eax
08ac2324 +0x135:  mov    %edx,(%eax)
08ac2326 +0x137:  mov    0xc(%ebp),%eax
08ac2329 +0x13a:  add    $0x4,%eax
08ac232c +0x13d:  mov    %eax,(%esp)
08ac232f +0x140:  call   08ac24c9 <+0x2da>
08ac2334 +0x145:  mov    0x8(%ebp),%edx
08ac2337 +0x148:  mov    (%eax),%ecx
08ac2339 +0x14a:  mov    %ecx,0x4(%edx)
08ac233c +0x14d:  mov    0x4(%eax),%ecx
08ac233f +0x150:  mov    %ecx,0x8(%edx)
08ac2342 +0x153:  mov    0x8(%eax),%eax
08ac2345 +0x156:  mov    %eax,0xc(%edx)
08ac2348 +0x159:  leave
08ac2349 +0x15a:  ret
08ac234a +0x15b:  push   %ebp
08ac234b +0x15c:  mov    %esp,%ebp
08ac234d +0x15e:  push   %ebx
08ac234e +0x15f:  sub    $0x14,%esp
08ac2351 +0x162:  mov    0x8(%ebp),%ebx
08ac2354 +0x165:  mov    0xc(%ebp),%eax
08ac2357 +0x168:  mov    0x10(%ebp),%edx
08ac235a +0x16b:  mov    %edx,0x8(%esp)
08ac235e +0x16f:  mov    %eax,0x4(%esp)
08ac2362 +0x173:  mov    %ebx,(%esp)
08ac2365 +0x176:  call   08ac24d2 <+0x2e3>
08ac236a +0x17b:  sub    $0x4,%esp
08ac236d +0x17e:  mov    %ebx,%eax
08ac236f +0x180:  mov    -0x4(%ebp),%ebx
08ac2372 +0x183:  leave
08ac2373 +0x184:  ret    $0x4
08ac2376 +0x187:  push   %ebp
08ac2377 +0x188:  mov    %esp,%ebp
08ac2379 +0x18a:  sub    $0x18,%esp
08ac237c +0x18d:  mov    0x8(%ebp),%eax
08ac237f +0x190:  mov    %eax,(%esp)
08ac2382 +0x193:  call   08ac26a2 <+0x4b3>
08ac2387 +0x198:  leave
08ac2388 +0x199:  ret
08ac2389 +0x19a:  nop
08ac238a +0x19b:  push   %ebp
08ac238b +0x19c:  mov    %esp,%ebp
08ac238d +0x19e:  push   %ebx
08ac238e +0x19f:  sub    $0x14,%esp
08ac2391 +0x1a2:  mov    0x8(%ebp),%ebx
08ac2394 +0x1a5:  mov    0xc(%ebp),%eax
08ac2397 +0x1a8:  mov    0x10(%ebp),%edx
08ac239a +0x1ab:  mov    %edx,0x8(%esp)
08ac239e +0x1af:  mov    %eax,0x4(%esp)
08ac23a2 +0x1b3:  mov    %ebx,(%esp)
08ac23a5 +0x1b6:  call   08ac2718 <+0x529>
08ac23aa +0x1bb:  sub    $0x4,%esp
08ac23ad +0x1be:  mov    %ebx,%eax
08ac23af +0x1c0:  mov    -0x4(%ebp),%ebx
08ac23b2 +0x1c3:  leave
08ac23b3 +0x1c4:  ret    $0x4
08ac23b6 +0x1c7:  push   %ebp
08ac23b7 +0x1c8:  mov    %esp,%ebp
08ac23b9 +0x1ca:  push   %ebx
08ac23ba +0x1cb:  sub    $0x14,%esp
08ac23bd +0x1ce:  mov    0x8(%ebp),%ebx
08ac23c0 +0x1d1:  mov    0xc(%ebp),%eax
08ac23c3 +0x1d4:  mov    %eax,0x4(%esp)
08ac23c7 +0x1d8:  mov    %ebx,(%esp)
08ac23ca +0x1db:  call   08ac27d6 <+0x5e7>
08ac23cf +0x1e0:  sub    $0x4,%esp
08ac23d2 +0x1e3:  mov    %ebx,%eax
08ac23d4 +0x1e5:  mov    -0x4(%ebp),%ebx
08ac23d7 +0x1e8:  leave
08ac23d8 +0x1e9:  ret    $0x4
08ac23db +0x1ec:  nop
08ac23dc +0x1ed:  push   %ebp
08ac23dd +0x1ee:  mov    %esp,%ebp
08ac23df +0x1f0:  mov    0x8(%ebp),%eax
08ac23e2 +0x1f3:  mov    (%eax),%edx
08ac23e4 +0x1f5:  mov    0xc(%ebp),%eax
08ac23e7 +0x1f8:  mov    (%eax),%eax
08ac23e9 +0x1fa:  cmp    %eax,%edx
08ac23eb +0x1fc:  sete   %al
08ac23ee +0x1ff:  pop    %ebp
08ac23ef +0x200:  ret
08ac23f0 +0x201:  push   %ebp
08ac23f1 +0x202:  mov    %esp,%ebp
08ac23f3 +0x204:  mov    0x8(%ebp),%eax
08ac23f6 +0x207:  mov    (%eax),%eax
08ac23f8 +0x209:  add    $0x10,%eax
08ac23fb +0x20c:  pop    %ebp
08ac23fc +0x20d:  ret
08ac23fd +0x20e:  nop
08ac23fe +0x20f:  push   %ebp
08ac23ff +0x210:  mov    %esp,%ebp
08ac2401 +0x212:  sub    $0x18,%esp
08ac2404 +0x215:  mov    0x8(%ebp),%eax
08ac2407 +0x218:  mov    %eax,(%esp)
08ac240a +0x21b:  call   08ac27fc <+0x60d>
08ac240f +0x220:  leave
08ac2410 +0x221:  ret
08ac2411 +0x222:  nop
08ac2412 +0x223:  push   %ebp
08ac2413 +0x224:  mov    %esp,%ebp
08ac2415 +0x226:  sub    $0x18,%esp
08ac2418 +0x229:  mov    0x8(%ebp),%eax
08ac241b +0x22c:  mov    %eax,(%esp)
08ac241e +0x22f:  call   08ac284c <+0x65d>
08ac2423 +0x234:  leave
08ac2424 +0x235:  ret
08ac2425 +0x236:  nop
08ac2426 +0x237:  push   %ebp
08ac2427 +0x238:  mov    %esp,%ebp
08ac2429 +0x23a:  sub    $0x28,%esp
08ac242c +0x23d:  jmp    08ac246e <+0x27f>
08ac242e +0x23f:  mov    0xc(%ebp),%eax
08ac2431 +0x242:  mov    %eax,(%esp)
08ac2434 +0x245:  call   08ac2851 <+0x662>
08ac2439 +0x24a:  mov    %eax,0x4(%esp)
08ac243d +0x24e:  mov    0x8(%ebp),%eax
08ac2440 +0x251:  mov    %eax,(%esp)
08ac2443 +0x254:  call   08ac2426 <+0x237>
08ac2448 +0x259:  mov    0xc(%ebp),%eax
08ac244b +0x25c:  mov    %eax,(%esp)
08ac244e +0x25f:  call   08ac285c <+0x66d>
08ac2453 +0x264:  mov    %eax,-0xc(%ebp)
08ac2456 +0x267:  mov    0xc(%ebp),%eax
08ac2459 +0x26a:  mov    %eax,0x4(%esp)
08ac245d +0x26e:  mov    0x8(%ebp),%eax
08ac2460 +0x271:  mov    %eax,(%esp)
08ac2463 +0x274:  call   08ac2868 <+0x679>
08ac2468 +0x279:  mov    -0xc(%ebp),%eax
08ac246b +0x27c:  mov    %eax,0xc(%ebp)
08ac246e +0x27f:  cmpl   $0x0,0xc(%ebp)
08ac2472 +0x283:  setne  %al
08ac2475 +0x286:  test   %al,%al
08ac2477 +0x288:  jne    08ac242e <+0x23f>
08ac2479 +0x28a:  leave
08ac247a +0x28b:  ret
08ac247b +0x28c:  nop
08ac247c +0x28d:  push   %ebp
08ac247d +0x28e:  mov    %esp,%ebp
08ac247f +0x290:  mov    0x8(%ebp),%eax
08ac2482 +0x293:  mov    0x8(%eax),%eax
08ac2485 +0x296:  pop    %ebp
08ac2486 +0x297:  ret
08ac2487 +0x298:  push   %ebp
08ac2488 +0x299:  mov    %esp,%ebp
08ac248a +0x29b:  mov    0x8(%ebp),%eax
08ac248d +0x29e:  pop    %ebp
08ac248e +0x29f:  ret
08ac248f +0x2a0:  nop
08ac2490 +0x2a1:  push   %ebp
08ac2491 +0x2a2:  mov    %esp,%ebp
08ac2493 +0x2a4:  sub    $0x18,%esp
08ac2496 +0x2a7:  mov    0xc(%ebp),%eax
08ac2499 +0x2aa:  mov    %eax,(%esp)
08ac249c +0x2ad:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
08ac24a1 +0x2b2:  mov    (%eax),%edx
08ac24a3 +0x2b4:  mov    0x8(%ebp),%eax
08ac24a6 +0x2b7:  mov    %edx,(%eax)
08ac24a8 +0x2b9:  mov    0x10(%ebp),%eax
08ac24ab +0x2bc:  mov    %eax,(%esp)
08ac24ae +0x2bf:  call   08ac2487 <+0x298>
08ac24b3 +0x2c4:  mov    0x8(%ebp),%edx
08ac24b6 +0x2c7:  mov    (%eax),%ecx
08ac24b8 +0x2c9:  mov    %ecx,0x4(%edx)
08ac24bb +0x2cc:  mov    0x4(%eax),%ecx
08ac24be +0x2cf:  mov    %ecx,0x8(%edx)
08ac24c1 +0x2d2:  mov    0x8(%eax),%eax
08ac24c4 +0x2d5:  mov    %eax,0xc(%edx)
08ac24c7 +0x2d8:  leave
08ac24c8 +0x2d9:  ret
08ac24c9 +0x2da:  push   %ebp
08ac24ca +0x2db:  mov    %esp,%ebp
08ac24cc +0x2dd:  mov    0x8(%ebp),%eax
08ac24cf +0x2e0:  pop    %ebp
08ac24d0 +0x2e1:  ret
08ac24d1 +0x2e2:  nop
08ac24d2 +0x2e3:  push   %ebp
08ac24d3 +0x2e4:  mov    %esp,%ebp
08ac24d5 +0x2e6:  push   %esi
08ac24d6 +0x2e7:  push   %ebx
08ac24d7 +0x2e8:  sub    $0x50,%esp
08ac24da +0x2eb:  mov    0x8(%ebp),%ebx
08ac24dd +0x2ee:  mov    0xc(%ebp),%eax
08ac24e0 +0x2f1:  mov    %eax,(%esp)
08ac24e3 +0x2f4:  call   08ac247c <+0x28d>
08ac24e8 +0x2f9:  mov    %eax,-0x14(%ebp)
08ac24eb +0x2fc:  mov    0xc(%ebp),%eax
08ac24ee +0x2ff:  mov    %eax,(%esp)
08ac24f1 +0x302:  call   08ac289c <+0x6ad>
08ac24f6 +0x307:  mov    %eax,-0x10(%ebp)
08ac24f9 +0x30a:  movb   $0x1,-0x9(%ebp)
08ac24fd +0x30e:  jmp    08ac255b <+0x36c>
08ac24ff +0x310:  mov    -0x14(%ebp),%eax
08ac2502 +0x313:  mov    %eax,-0x10(%ebp)
08ac2505 +0x316:  mov    -0x14(%ebp),%eax
08ac2508 +0x319:  mov    %eax,(%esp)
08ac250b +0x31c:  call   08ac28b0 <+0x6c1>
08ac2510 +0x321:  mov    %eax,%esi
08ac2512 +0x323:  mov    0x10(%ebp),%eax
08ac2515 +0x326:  mov    %eax,0x4(%esp)
08ac2519 +0x32a:  lea    -0x2d(%ebp),%eax
08ac251c +0x32d:  mov    %eax,(%esp)
08ac251f +0x330:  call   08ac28a8 <+0x6b9>
08ac2524 +0x335:  mov    0xc(%ebp),%edx
08ac2527 +0x338:  mov    %esi,0x8(%esp)
08ac252b +0x33c:  mov    %eax,0x4(%esp)
08ac252f +0x340:  mov    %edx,(%esp)
08ac2532 +0x343:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08ac2537 +0x348:  mov    %al,-0x9(%ebp)
08ac253a +0x34b:  cmpb   $0x0,-0x9(%ebp)
08ac253e +0x34f:  je     08ac254d <+0x35e>
08ac2540 +0x351:  mov    -0x14(%ebp),%eax
08ac2543 +0x354:  mov    %eax,(%esp)
08ac2546 +0x357:  call   08ac285c <+0x66d>
08ac254b +0x35c:  jmp    08ac2558 <+0x369>
08ac254d +0x35e:  mov    -0x14(%ebp),%eax
08ac2550 +0x361:  mov    %eax,(%esp)
08ac2553 +0x364:  call   08ac2851 <+0x662>
08ac2558 +0x369:  mov    %eax,-0x14(%ebp)
08ac255b +0x36c:  cmpl   $0x0,-0x14(%ebp)
08ac255f +0x370:  setne  %al
08ac2562 +0x373:  test   %al,%al
08ac2564 +0x375:  jne    08ac24ff <+0x310>
08ac2566 +0x377:  mov    -0x10(%ebp),%eax
08ac2569 +0x37a:  mov    %eax,0x4(%esp)
08ac256d +0x37e:  lea    -0x34(%ebp),%eax
08ac2570 +0x381:  mov    %eax,(%esp)
08ac2573 +0x384:  call   08ac28d2 <+0x6e3>
08ac2578 +0x389:  cmpb   $0x0,-0x9(%ebp)
08ac257c +0x38d:  je     08ac25fd <+0x40e>
08ac257e +0x38f:  lea    -0x2c(%ebp),%eax
08ac2581 +0x392:  mov    0xc(%ebp),%edx
08ac2584 +0x395:  mov    %edx,0x4(%esp)
08ac2588 +0x399:  mov    %eax,(%esp)
08ac258b +0x39c:  call   08ac28e0 <+0x6f1>
08ac2590 +0x3a1:  sub    $0x4,%esp
08ac2593 +0x3a4:  lea    -0x2c(%ebp),%eax
08ac2596 +0x3a7:  mov    %eax,0x4(%esp)
08ac259a +0x3ab:  lea    -0x34(%ebp),%eax
08ac259d +0x3ae:  mov    %eax,(%esp)
08ac25a0 +0x3b1:  call   08ac23dc <+0x1ed>
08ac25a5 +0x3b6:  test   %al,%al
08ac25a7 +0x3b8:  je     08ac25f2 <+0x403>
08ac25a9 +0x3ba:  movb   $0x1,-0x25(%ebp)
08ac25ad +0x3be:  mov    -0x10(%ebp),%ecx
08ac25b0 +0x3c1:  mov    -0x14(%ebp),%edx
08ac25b3 +0x3c4:  lea    -0x24(%ebp),%eax
08ac25b6 +0x3c7:  mov    0x10(%ebp),%esi
08ac25b9 +0x3ca:  mov    %esi,0x10(%esp)
08ac25bd +0x3ce:  mov    %ecx,0xc(%esp)
08ac25c1 +0x3d2:  mov    %edx,0x8(%esp)
08ac25c5 +0x3d6:  mov    0xc(%ebp),%edx
08ac25c8 +0x3d9:  mov    %edx,0x4(%esp)
08ac25cc +0x3dd:  mov    %eax,(%esp)
08ac25cf +0x3e0:  call   08ac2906 <+0x717>
08ac25d4 +0x3e5:  sub    $0x4,%esp
08ac25d7 +0x3e8:  lea    -0x25(%ebp),%eax
08ac25da +0x3eb:  mov    %eax,0x8(%esp)
08ac25de +0x3ef:  lea    -0x24(%ebp),%eax
08ac25e1 +0x3f2:  mov    %eax,0x4(%esp)
08ac25e5 +0x3f6:  mov    %ebx,(%esp)
08ac25e8 +0x3f9:  call   08ac29ce <+0x7df>
08ac25ed +0x3fe:  jmp    08ac2693 <+0x4a4>
08ac25f2 +0x403:  lea    -0x34(%ebp),%eax
08ac25f5 +0x406:  mov    %eax,(%esp)
08ac25f8 +0x409:  call   08ac29fc <+0x80d>
08ac25fd +0x40e:  mov    0x10(%ebp),%eax
08ac2600 +0x411:  mov    %eax,0x4(%esp)
08ac2604 +0x415:  lea    -0x1e(%ebp),%eax
08ac2607 +0x418:  mov    %eax,(%esp)
08ac260a +0x41b:  call   08ac28a8 <+0x6b9>
08ac260f +0x420:  mov    %eax,%esi
08ac2611 +0x422:  mov    -0x34(%ebp),%eax
08ac2614 +0x425:  mov    %eax,(%esp)
08ac2617 +0x428:  call   08ac2a19 <+0x82a>
08ac261c +0x42d:  mov    0xc(%ebp),%edx
08ac261f +0x430:  mov    %esi,0x8(%esp)
08ac2623 +0x434:  mov    %eax,0x4(%esp)
08ac2627 +0x438:  mov    %edx,(%esp)
08ac262a +0x43b:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08ac262f +0x440:  test   %al,%al
08ac2631 +0x442:  je     08ac2679 <+0x48a>
08ac2633 +0x444:  movb   $0x1,-0x1d(%ebp)
08ac2637 +0x448:  mov    -0x10(%ebp),%ecx
08ac263a +0x44b:  mov    -0x14(%ebp),%edx
08ac263d +0x44e:  lea    -0x1c(%ebp),%eax
08ac2640 +0x451:  mov    0x10(%ebp),%esi
08ac2643 +0x454:  mov    %esi,0x10(%esp)
08ac2647 +0x458:  mov    %ecx,0xc(%esp)
08ac264b +0x45c:  mov    %edx,0x8(%esp)
08ac264f +0x460:  mov    0xc(%ebp),%edx
08ac2652 +0x463:  mov    %edx,0x4(%esp)
08ac2656 +0x467:  mov    %eax,(%esp)
08ac2659 +0x46a:  call   08ac2906 <+0x717>
08ac265e +0x46f:  sub    $0x4,%esp
08ac2661 +0x472:  lea    -0x1d(%ebp),%eax
08ac2664 +0x475:  mov    %eax,0x8(%esp)
08ac2668 +0x479:  lea    -0x1c(%ebp),%eax
08ac266b +0x47c:  mov    %eax,0x4(%esp)
08ac266f +0x480:  mov    %ebx,(%esp)
08ac2672 +0x483:  call   08ac29ce <+0x7df>
08ac2677 +0x488:  jmp    08ac2693 <+0x4a4>
08ac2679 +0x48a:  movb   $0x0,-0x15(%ebp)
08ac267d +0x48e:  lea    -0x15(%ebp),%eax
08ac2680 +0x491:  mov    %eax,0x8(%esp)
08ac2684 +0x495:  lea    -0x34(%ebp),%eax
08ac2687 +0x498:  mov    %eax,0x4(%esp)
08ac268b +0x49c:  mov    %ebx,(%esp)
08ac268e +0x49f:  call   08ac2a3c <+0x84d>
08ac2693 +0x4a4:  mov    %ebx,%eax
08ac2695 +0x4a6:  lea    -0x8(%ebp),%esp
08ac2698 +0x4a9:  add    $0x0,%esp
08ac269b +0x4ac:  pop    %ebx
08ac269c +0x4ad:  pop    %esi
08ac269d +0x4ae:  pop    %ebp
08ac269e +0x4af:  ret    $0x4
08ac26a1 +0x4b2:  nop
08ac26a2 +0x4b3:  push   %ebp
08ac26a3 +0x4b4:  mov    %esp,%ebp
08ac26a5 +0x4b6:  push   %ebx
08ac26a6 +0x4b7:  sub    $0x14,%esp
08ac26a9 +0x4ba:  mov    0x8(%ebp),%eax
08ac26ac +0x4bd:  mov    %eax,(%esp)
08ac26af +0x4c0:  call   08ac247c <+0x28d>
08ac26b4 +0x4c5:  mov    %eax,0x4(%esp)
08ac26b8 +0x4c9:  mov    0x8(%ebp),%eax
08ac26bb +0x4cc:  mov    %eax,(%esp)
08ac26be +0x4cf:  call   08ac2426 <+0x237>
08ac26c3 +0x4d4:  mov    0x8(%ebp),%eax
08ac26c6 +0x4d7:  mov    %eax,(%esp)
08ac26c9 +0x4da:  call   08ac2a6a <+0x87b>
08ac26ce +0x4df:  mov    %eax,%ebx
08ac26d0 +0x4e1:  mov    0x8(%ebp),%eax
08ac26d3 +0x4e4:  mov    %eax,(%esp)
08ac26d6 +0x4e7:  call   08ac289c <+0x6ad>
08ac26db +0x4ec:  mov    %eax,(%ebx)
08ac26dd +0x4ee:  mov    0x8(%ebp),%eax
08ac26e0 +0x4f1:  mov    %eax,(%esp)
08ac26e3 +0x4f4:  call   08ac2a76 <+0x887>
08ac26e8 +0x4f9:  movl   $0x0,(%eax)
08ac26ee +0x4ff:  mov    0x8(%ebp),%eax
08ac26f1 +0x502:  mov    %eax,(%esp)
08ac26f4 +0x505:  call   08ac2a82 <+0x893>
08ac26f9 +0x50a:  mov    %eax,%ebx
08ac26fb +0x50c:  mov    0x8(%ebp),%eax
08ac26fe +0x50f:  mov    %eax,(%esp)
08ac2701 +0x512:  call   08ac289c <+0x6ad>
08ac2706 +0x517:  mov    %eax,(%ebx)
08ac2708 +0x519:  mov    0x8(%ebp),%eax
08ac270b +0x51c:  movl   $0x0,0x14(%eax)
08ac2712 +0x523:  add    $0x14,%esp
08ac2715 +0x526:  pop    %ebx
08ac2716 +0x527:  pop    %ebp
08ac2717 +0x528:  ret
08ac2718 +0x529:  push   %ebp
08ac2719 +0x52a:  mov    %esp,%ebp
08ac271b +0x52c:  push   %esi
08ac271c +0x52d:  push   %ebx
08ac271d +0x52e:  sub    $0x30,%esp
08ac2720 +0x531:  mov    0x8(%ebp),%ebx
08ac2723 +0x534:  mov    0xc(%ebp),%eax
08ac2726 +0x537:  mov    %eax,(%esp)
08ac2729 +0x53a:  call   08ac289c <+0x6ad>
08ac272e +0x53f:  mov    %eax,%esi
08ac2730 +0x541:  mov    0xc(%ebp),%eax
08ac2733 +0x544:  mov    %eax,(%esp)
08ac2736 +0x547:  call   08ac247c <+0x28d>
08ac273b +0x54c:  lea    -0x10(%ebp),%edx
08ac273e +0x54f:  mov    0x10(%ebp),%ecx
08ac2741 +0x552:  mov    %ecx,0x10(%esp)
08ac2745 +0x556:  mov    %esi,0xc(%esp)
08ac2749 +0x55a:  mov    %eax,0x8(%esp)
08ac274d +0x55e:  mov    0xc(%ebp),%eax
08ac2750 +0x561:  mov    %eax,0x4(%esp)
08ac2754 +0x565:  mov    %edx,(%esp)
08ac2757 +0x568:  call   08ac2a8e <+0x89f>
08ac275c +0x56d:  sub    $0x4,%esp
08ac275f +0x570:  lea    -0xc(%ebp),%eax
08ac2762 +0x573:  mov    0xc(%ebp),%edx
08ac2765 +0x576:  mov    %edx,0x4(%esp)
08ac2769 +0x57a:  mov    %eax,(%esp)
08ac276c +0x57d:  call   08ac27d6 <+0x5e7>
08ac2771 +0x582:  sub    $0x4,%esp
08ac2774 +0x585:  lea    -0xc(%ebp),%eax
08ac2777 +0x588:  mov    %eax,0x4(%esp)
08ac277b +0x58c:  lea    -0x10(%ebp),%eax
08ac277e +0x58f:  mov    %eax,(%esp)
08ac2781 +0x592:  call   08ac23dc <+0x1ed>
08ac2786 +0x597:  test   %al,%al
08ac2788 +0x599:  jne    08ac27af <+0x5c0>
08ac278a +0x59b:  mov    -0x10(%ebp),%eax
08ac278d +0x59e:  mov    %eax,(%esp)
08ac2790 +0x5a1:  call   08ac2a19 <+0x82a>
08ac2795 +0x5a6:  mov    0xc(%ebp),%edx
08ac2798 +0x5a9:  mov    %eax,0x8(%esp)
08ac279c +0x5ad:  mov    0x10(%ebp),%eax
08ac279f +0x5b0:  mov    %eax,0x4(%esp)
08ac27a3 +0x5b4:  mov    %edx,(%esp)
08ac27a6 +0x5b7:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08ac27ab +0x5bc:  test   %al,%al
08ac27ad +0x5be:  je     08ac27c3 <+0x5d4>
08ac27af +0x5c0:  mov    0xc(%ebp),%eax
08ac27b2 +0x5c3:  mov    %eax,0x4(%esp)
08ac27b6 +0x5c7:  mov    %ebx,(%esp)
08ac27b9 +0x5ca:  call   08ac27d6 <+0x5e7>
08ac27be +0x5cf:  sub    $0x4,%esp
08ac27c1 +0x5d2:  jmp    08ac27c8 <+0x5d9>
08ac27c3 +0x5d4:  mov    -0x10(%ebp),%eax
08ac27c6 +0x5d7:  mov    %eax,(%ebx)
08ac27c8 +0x5d9:  mov    %ebx,%eax
08ac27ca +0x5db:  lea    -0x8(%ebp),%esp
08ac27cd +0x5de:  add    $0x0,%esp
08ac27d0 +0x5e1:  pop    %ebx
08ac27d1 +0x5e2:  pop    %esi
08ac27d2 +0x5e3:  pop    %ebp
08ac27d3 +0x5e4:  ret    $0x4
08ac27d6 +0x5e7:  push   %ebp
08ac27d7 +0x5e8:  mov    %esp,%ebp
08ac27d9 +0x5ea:  push   %ebx
08ac27da +0x5eb:  sub    $0x14,%esp
08ac27dd +0x5ee:  mov    0x8(%ebp),%ebx
08ac27e0 +0x5f1:  mov    0xc(%ebp),%eax
08ac27e3 +0x5f4:  add    $0x4,%eax
08ac27e6 +0x5f7:  mov    %eax,0x4(%esp)
08ac27ea +0x5fb:  mov    %ebx,(%esp)
08ac27ed +0x5fe:  call   08ac28d2 <+0x6e3>
08ac27f2 +0x603:  mov    %ebx,%eax
08ac27f4 +0x605:  add    $0x14,%esp
08ac27f7 +0x608:  pop    %ebx
08ac27f8 +0x609:  pop    %ebp
08ac27f9 +0x60a:  ret    $0x4
08ac27fc +0x60d:  push   %ebp
08ac27fd +0x60e:  mov    %esp,%ebp
08ac27ff +0x610:  sub    $0x18,%esp
08ac2802 +0x613:  mov    0x8(%ebp),%eax
08ac2805 +0x616:  mov    %eax,(%esp)
08ac2808 +0x619:  call   08ac2b0a <+0x91b>
08ac280d +0x61e:  mov    0x8(%ebp),%eax
08ac2810 +0x621:  movl   $0x0,0x4(%eax)
08ac2817 +0x628:  mov    0x8(%ebp),%eax
08ac281a +0x62b:  movl   $0x0,0x8(%eax)
08ac2821 +0x632:  mov    0x8(%ebp),%eax
08ac2824 +0x635:  movl   $0x0,0xc(%eax)
08ac282b +0x63c:  mov    0x8(%ebp),%eax
08ac282e +0x63f:  movl   $0x0,0x10(%eax)
08ac2835 +0x646:  mov    0x8(%ebp),%eax
08ac2838 +0x649:  movl   $0x0,0x14(%eax)
08ac283f +0x650:  mov    0x8(%ebp),%eax
08ac2842 +0x653:  mov    %eax,(%esp)
08ac2845 +0x656:  call   08ac2b1e <+0x92f>
08ac284a +0x65b:  leave
08ac284b +0x65c:  ret
08ac284c +0x65d:  push   %ebp
08ac284d +0x65e:  mov    %esp,%ebp
08ac284f +0x660:  pop    %ebp
08ac2850 +0x661:  ret
08ac2851 +0x662:  push   %ebp
08ac2852 +0x663:  mov    %esp,%ebp
08ac2854 +0x665:  mov    0x8(%ebp),%eax
08ac2857 +0x668:  mov    0xc(%eax),%eax
08ac285a +0x66b:  pop    %ebp
08ac285b +0x66c:  ret
08ac285c +0x66d:  push   %ebp
08ac285d +0x66e:  mov    %esp,%ebp
08ac285f +0x670:  mov    0x8(%ebp),%eax
08ac2862 +0x673:  mov    0x8(%eax),%eax
08ac2865 +0x676:  pop    %ebp
08ac2866 +0x677:  ret
08ac2867 +0x678:  nop
08ac2868 +0x679:  push   %ebp
08ac2869 +0x67a:  mov    %esp,%ebp
08ac286b +0x67c:  sub    $0x18,%esp
08ac286e +0x67f:  mov    0x8(%ebp),%eax
08ac2871 +0x682:  mov    %eax,(%esp)
08ac2874 +0x685:  call   08ac2b50 <+0x961>
08ac2879 +0x68a:  mov    0xc(%ebp),%edx
08ac287c +0x68d:  mov    %edx,0x4(%esp)
08ac2880 +0x691:  mov    %eax,(%esp)
08ac2883 +0x694:  call   08ac2b5e <+0x96f>
08ac2888 +0x699:  mov    0xc(%ebp),%eax
08ac288b +0x69c:  mov    %eax,0x4(%esp)
08ac288f +0x6a0:  mov    0x8(%ebp),%eax
08ac2892 +0x6a3:  mov    %eax,(%esp)
08ac2895 +0x6a6:  call   08ac2b72 <+0x983>
08ac289a +0x6ab:  leave
08ac289b +0x6ac:  ret
08ac289c +0x6ad:  push   %ebp
08ac289d +0x6ae:  mov    %esp,%ebp
08ac289f +0x6b0:  mov    0x8(%ebp),%eax
08ac28a2 +0x6b3:  add    $0x4,%eax
08ac28a5 +0x6b6:  pop    %ebp
08ac28a6 +0x6b7:  ret
08ac28a7 +0x6b8:  nop
08ac28a8 +0x6b9:  push   %ebp
08ac28a9 +0x6ba:  mov    %esp,%ebp
08ac28ab +0x6bc:  mov    0xc(%ebp),%eax
08ac28ae +0x6bf:  pop    %ebp
08ac28af +0x6c0:  ret
08ac28b0 +0x6c1:  push   %ebp
08ac28b1 +0x6c2:  mov    %esp,%ebp
08ac28b3 +0x6c4:  sub    $0x28,%esp
08ac28b6 +0x6c7:  mov    0x8(%ebp),%eax
08ac28b9 +0x6ca:  mov    %eax,(%esp)
08ac28bc +0x6cd:  call   08ac2b94 <+0x9a5>
08ac28c1 +0x6d2:  mov    %eax,0x4(%esp)
08ac28c5 +0x6d6:  lea    -0x9(%ebp),%eax
08ac28c8 +0x6d9:  mov    %eax,(%esp)
08ac28cb +0x6dc:  call   08ac28a8 <+0x6b9>
08ac28d0 +0x6e1:  leave
08ac28d1 +0x6e2:  ret
08ac28d2 +0x6e3:  push   %ebp
08ac28d3 +0x6e4:  mov    %esp,%ebp
08ac28d5 +0x6e6:  mov    0xc(%ebp),%edx
08ac28d8 +0x6e9:  mov    0x8(%ebp),%eax
08ac28db +0x6ec:  mov    %edx,(%eax)
08ac28dd +0x6ee:  pop    %ebp
08ac28de +0x6ef:  ret
08ac28df +0x6f0:  nop
08ac28e0 +0x6f1:  push   %ebp
08ac28e1 +0x6f2:  mov    %esp,%ebp
08ac28e3 +0x6f4:  push   %ebx
08ac28e4 +0x6f5:  sub    $0x14,%esp
08ac28e7 +0x6f8:  mov    0x8(%ebp),%ebx
08ac28ea +0x6fb:  mov    0xc(%ebp),%eax
08ac28ed +0x6fe:  mov    0xc(%eax),%eax
08ac28f0 +0x701:  mov    %eax,0x4(%esp)
08ac28f4 +0x705:  mov    %ebx,(%esp)
08ac28f7 +0x708:  call   08ac28d2 <+0x6e3>
08ac28fc +0x70d:  mov    %ebx,%eax
08ac28fe +0x70f:  add    $0x14,%esp
08ac2901 +0x712:  pop    %ebx
08ac2902 +0x713:  pop    %ebp
08ac2903 +0x714:  ret    $0x4
08ac2906 +0x717:  push   %ebp
08ac2907 +0x718:  mov    %esp,%ebp
08ac2909 +0x71a:  push   %esi
08ac290a +0x71b:  push   %ebx
08ac290b +0x71c:  sub    $0x20,%esp
08ac290e +0x71f:  mov    0x8(%ebp),%esi
08ac2911 +0x722:  cmpl   $0x0,0x10(%ebp)
08ac2915 +0x726:  jne    08ac295d <+0x76e>
08ac2917 +0x728:  mov    0xc(%ebp),%eax
08ac291a +0x72b:  mov    %eax,(%esp)
08ac291d +0x72e:  call   08ac289c <+0x6ad>
08ac2922 +0x733:  cmp    0x14(%ebp),%eax
08ac2925 +0x736:  je     08ac295d <+0x76e>
08ac2927 +0x738:  mov    0x14(%ebp),%eax
08ac292a +0x73b:  mov    %eax,(%esp)
08ac292d +0x73e:  call   08ac2a19 <+0x82a>
08ac2932 +0x743:  mov    %eax,%ebx
08ac2934 +0x745:  mov    0x18(%ebp),%eax
08ac2937 +0x748:  mov    %eax,0x4(%esp)
08ac293b +0x74c:  lea    -0xe(%ebp),%eax
08ac293e +0x74f:  mov    %eax,(%esp)
08ac2941 +0x752:  call   08ac28a8 <+0x6b9>
08ac2946 +0x757:  mov    0xc(%ebp),%edx
08ac2949 +0x75a:  mov    %ebx,0x8(%esp)
08ac294d +0x75e:  mov    %eax,0x4(%esp)
08ac2951 +0x762:  mov    %edx,(%esp)
08ac2954 +0x765:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08ac2959 +0x76a:  test   %al,%al
08ac295b +0x76c:  je     08ac2964 <+0x775>
08ac295d +0x76e:  mov    $0x1,%eax
08ac2962 +0x773:  jmp    08ac2969 <+0x77a>
08ac2964 +0x775:  mov    $0x0,%eax
08ac2969 +0x77a:  mov    %al,-0xd(%ebp)
08ac296c +0x77d:  mov    0x18(%ebp),%eax
08ac296f +0x780:  mov    %eax,0x4(%esp)
08ac2973 +0x784:  mov    0xc(%ebp),%eax
08ac2976 +0x787:  mov    %eax,(%esp)
08ac2979 +0x78a:  call   08ac2ba0 <+0x9b1>
08ac297e +0x78f:  mov    %eax,-0xc(%ebp)
08ac2981 +0x792:  mov    0xc(%ebp),%eax
08ac2984 +0x795:  lea    0x4(%eax),%ecx
08ac2987 +0x798:  mov    -0xc(%ebp),%edx
08ac298a +0x79b:  movzbl -0xd(%ebp),%eax
08ac298e +0x79f:  mov    %ecx,0xc(%esp)
08ac2992 +0x7a3:  mov    0x14(%ebp),%ecx
08ac2995 +0x7a6:  mov    %ecx,0x8(%esp)
08ac2999 +0x7aa:  mov    %edx,0x4(%esp)
08ac299d +0x7ae:  mov    %eax,(%esp)
08ac29a0 +0x7b1:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08ac29a5 +0x7b6:  mov    0xc(%ebp),%eax
08ac29a8 +0x7b9:  mov    0x14(%eax),%eax
08ac29ab +0x7bc:  lea    0x1(%eax),%edx
08ac29ae +0x7bf:  mov    0xc(%ebp),%eax
08ac29b1 +0x7c2:  mov    %edx,0x14(%eax)
08ac29b4 +0x7c5:  mov    -0xc(%ebp),%eax
08ac29b7 +0x7c8:  mov    %eax,0x4(%esp)
08ac29bb +0x7cc:  mov    %esi,(%esp)
08ac29be +0x7cf:  call   08ac28d2 <+0x6e3>
08ac29c3 +0x7d4:  mov    %esi,%eax
08ac29c5 +0x7d6:  add    $0x20,%esp
08ac29c8 +0x7d9:  pop    %ebx
08ac29c9 +0x7da:  pop    %esi
08ac29ca +0x7db:  pop    %ebp
08ac29cb +0x7dc:  ret    $0x4
08ac29ce +0x7df:  push   %ebp
08ac29cf +0x7e0:  mov    %esp,%ebp
08ac29d1 +0x7e2:  sub    $0x18,%esp
08ac29d4 +0x7e5:  mov    0xc(%ebp),%eax
08ac29d7 +0x7e8:  mov    %eax,(%esp)
08ac29da +0x7eb:  call   08ac2c21 <+0xa32>
08ac29df +0x7f0:  mov    0x8(%ebp),%edx
08ac29e2 +0x7f3:  mov    (%eax),%eax
08ac29e4 +0x7f5:  mov    %eax,(%edx)
08ac29e6 +0x7f7:  mov    0x10(%ebp),%eax
08ac29e9 +0x7fa:  mov    %eax,(%esp)
08ac29ec +0x7fd:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08ac29f1 +0x802:  movzbl (%eax),%edx
08ac29f4 +0x805:  mov    0x8(%ebp),%eax
08ac29f7 +0x808:  mov    %dl,0x4(%eax)
08ac29fa +0x80b:  leave
08ac29fb +0x80c:  ret
08ac29fc +0x80d:  push   %ebp
08ac29fd +0x80e:  mov    %esp,%ebp
08ac29ff +0x810:  sub    $0x18,%esp
08ac2a02 +0x813:  mov    0x8(%ebp),%eax
08ac2a05 +0x816:  mov    (%eax),%eax
08ac2a07 +0x818:  mov    %eax,(%esp)
08ac2a0a +0x81b:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08ac2a0f +0x820:  mov    0x8(%ebp),%edx
08ac2a12 +0x823:  mov    %eax,(%edx)
08ac2a14 +0x825:  mov    0x8(%ebp),%eax
08ac2a17 +0x828:  leave
08ac2a18 +0x829:  ret
08ac2a19 +0x82a:  push   %ebp
08ac2a1a +0x82b:  mov    %esp,%ebp
08ac2a1c +0x82d:  sub    $0x28,%esp
08ac2a1f +0x830:  mov    0x8(%ebp),%eax
08ac2a22 +0x833:  mov    %eax,(%esp)
08ac2a25 +0x836:  call   08ac2c29 <+0xa3a>
08ac2a2a +0x83b:  mov    %eax,0x4(%esp)
08ac2a2e +0x83f:  lea    -0x9(%ebp),%eax
08ac2a31 +0x842:  mov    %eax,(%esp)
08ac2a34 +0x845:  call   08ac28a8 <+0x6b9>
08ac2a39 +0x84a:  leave
08ac2a3a +0x84b:  ret
08ac2a3b +0x84c:  nop
08ac2a3c +0x84d:  push   %ebp
08ac2a3d +0x84e:  mov    %esp,%ebp
08ac2a3f +0x850:  sub    $0x18,%esp
08ac2a42 +0x853:  mov    0xc(%ebp),%eax
08ac2a45 +0x856:  mov    %eax,(%esp)
08ac2a48 +0x859:  call   08ac2c34 <+0xa45>
08ac2a4d +0x85e:  mov    0x8(%ebp),%edx
08ac2a50 +0x861:  mov    (%eax),%eax
08ac2a52 +0x863:  mov    %eax,(%edx)
08ac2a54 +0x865:  mov    0x10(%ebp),%eax
08ac2a57 +0x868:  mov    %eax,(%esp)
08ac2a5a +0x86b:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08ac2a5f +0x870:  movzbl (%eax),%edx
08ac2a62 +0x873:  mov    0x8(%ebp),%eax
08ac2a65 +0x876:  mov    %dl,0x4(%eax)
08ac2a68 +0x879:  leave
08ac2a69 +0x87a:  ret
08ac2a6a +0x87b:  push   %ebp
08ac2a6b +0x87c:  mov    %esp,%ebp
08ac2a6d +0x87e:  mov    0x8(%ebp),%eax
08ac2a70 +0x881:  add    $0xc,%eax
08ac2a73 +0x884:  pop    %ebp
08ac2a74 +0x885:  ret
08ac2a75 +0x886:  nop
08ac2a76 +0x887:  push   %ebp
08ac2a77 +0x888:  mov    %esp,%ebp
08ac2a79 +0x88a:  mov    0x8(%ebp),%eax
08ac2a7c +0x88d:  add    $0x8,%eax
08ac2a7f +0x890:  pop    %ebp
08ac2a80 +0x891:  ret
08ac2a81 +0x892:  nop
08ac2a82 +0x893:  push   %ebp
08ac2a83 +0x894:  mov    %esp,%ebp
08ac2a85 +0x896:  mov    0x8(%ebp),%eax
08ac2a88 +0x899:  add    $0x10,%eax
08ac2a8b +0x89c:  pop    %ebp
08ac2a8c +0x89d:  ret
08ac2a8d +0x89e:  nop
08ac2a8e +0x89f:  push   %ebp
08ac2a8f +0x8a0:  mov    %esp,%ebp
08ac2a91 +0x8a2:  push   %ebx
08ac2a92 +0x8a3:  sub    $0x14,%esp
08ac2a95 +0x8a6:  mov    0x8(%ebp),%ebx
08ac2a98 +0x8a9:  jmp    08ac2ae6 <+0x8f7>
08ac2a9a +0x8ab:  mov    0x10(%ebp),%eax
08ac2a9d +0x8ae:  mov    %eax,(%esp)
08ac2aa0 +0x8b1:  call   08ac28b0 <+0x6c1>
08ac2aa5 +0x8b6:  mov    0xc(%ebp),%edx
08ac2aa8 +0x8b9:  mov    0x18(%ebp),%ecx
08ac2aab +0x8bc:  mov    %ecx,0x8(%esp)
08ac2aaf +0x8c0:  mov    %eax,0x4(%esp)
08ac2ab3 +0x8c4:  mov    %edx,(%esp)
08ac2ab6 +0x8c7:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08ac2abb +0x8cc:  xor    $0x1,%eax
08ac2abe +0x8cf:  test   %al,%al
08ac2ac0 +0x8d1:  je     08ac2ad8 <+0x8e9>
08ac2ac2 +0x8d3:  mov    0x10(%ebp),%eax
08ac2ac5 +0x8d6:  mov    %eax,0x14(%ebp)
08ac2ac8 +0x8d9:  mov    0x10(%ebp),%eax
08ac2acb +0x8dc:  mov    %eax,(%esp)
08ac2ace +0x8df:  call   08ac285c <+0x66d>
08ac2ad3 +0x8e4:  mov    %eax,0x10(%ebp)
08ac2ad6 +0x8e7:  jmp    08ac2ae6 <+0x8f7>
08ac2ad8 +0x8e9:  mov    0x10(%ebp),%eax
08ac2adb +0x8ec:  mov    %eax,(%esp)
08ac2ade +0x8ef:  call   08ac2851 <+0x662>
08ac2ae3 +0x8f4:  mov    %eax,0x10(%ebp)
08ac2ae6 +0x8f7:  cmpl   $0x0,0x10(%ebp)
08ac2aea +0x8fb:  setne  %al
08ac2aed +0x8fe:  test   %al,%al
08ac2aef +0x900:  jne    08ac2a9a <+0x8ab>
08ac2af1 +0x902:  mov    0x14(%ebp),%eax
08ac2af4 +0x905:  mov    %eax,0x4(%esp)
08ac2af8 +0x909:  mov    %ebx,(%esp)
08ac2afb +0x90c:  call   08ac28d2 <+0x6e3>
08ac2b00 +0x911:  mov    %ebx,%eax
08ac2b02 +0x913:  add    $0x14,%esp
08ac2b05 +0x916:  pop    %ebx
08ac2b06 +0x917:  pop    %ebp
08ac2b07 +0x918:  ret    $0x4
08ac2b0a +0x91b:  push   %ebp
08ac2b0b +0x91c:  mov    %esp,%ebp
08ac2b0d +0x91e:  sub    $0x18,%esp
08ac2b10 +0x921:  mov    0x8(%ebp),%eax
08ac2b13 +0x924:  mov    %eax,(%esp)
08ac2b16 +0x927:  call   08ac2c3c <+0xa4d>
08ac2b1b +0x92c:  leave
08ac2b1c +0x92d:  ret
08ac2b1d +0x92e:  nop
08ac2b1e +0x92f:  push   %ebp
08ac2b1f +0x930:  mov    %esp,%ebp
08ac2b21 +0x932:  mov    0x8(%ebp),%eax
08ac2b24 +0x935:  movl   $0x0,0x4(%eax)
08ac2b2b +0x93c:  mov    0x8(%ebp),%eax
08ac2b2e +0x93f:  movl   $0x0,0x8(%eax)
08ac2b35 +0x946:  mov    0x8(%ebp),%eax
08ac2b38 +0x949:  lea    0x4(%eax),%edx
08ac2b3b +0x94c:  mov    0x8(%ebp),%eax
08ac2b3e +0x94f:  mov    %edx,0xc(%eax)
08ac2b41 +0x952:  mov    0x8(%ebp),%eax
08ac2b44 +0x955:  lea    0x4(%eax),%edx
08ac2b47 +0x958:  mov    0x8(%ebp),%eax
08ac2b4a +0x95b:  mov    %edx,0x10(%eax)
08ac2b4d +0x95e:  pop    %ebp
08ac2b4e +0x95f:  ret
08ac2b4f +0x960:  nop
08ac2b50 +0x961:  push   %ebp
08ac2b51 +0x962:  mov    %esp,%ebp
08ac2b53 +0x964:  mov    0x8(%ebp),%eax
08ac2b56 +0x967:  pop    %ebp
08ac2b57 +0x968:  ret
08ac2b58 +0x969:  push   %ebp
08ac2b59 +0x96a:  mov    %esp,%ebp
08ac2b5b +0x96c:  pop    %ebp
08ac2b5c +0x96d:  ret
08ac2b5d +0x96e:  nop
08ac2b5e +0x96f:  push   %ebp
08ac2b5f +0x970:  mov    %esp,%ebp
08ac2b61 +0x972:  sub    $0x18,%esp
08ac2b64 +0x975:  mov    0xc(%ebp),%eax
08ac2b67 +0x978:  mov    %eax,(%esp)
08ac2b6a +0x97b:  call   08ac2b58 <+0x969>
08ac2b6f +0x980:  leave
08ac2b70 +0x981:  ret
08ac2b71 +0x982:  nop
08ac2b72 +0x983:  push   %ebp
08ac2b73 +0x984:  mov    %esp,%ebp
08ac2b75 +0x986:  sub    $0x18,%esp
08ac2b78 +0x989:  mov    0x8(%ebp),%eax
08ac2b7b +0x98c:  movl   $0x1,0x8(%esp)
08ac2b83 +0x994:  mov    0xc(%ebp),%edx
08ac2b86 +0x997:  mov    %edx,0x4(%esp)
08ac2b8a +0x99b:  mov    %eax,(%esp)
08ac2b8d +0x99e:  call   08ac2c42 <+0xa53>
08ac2b92 +0x9a3:  leave
08ac2b93 +0x9a4:  ret
08ac2b94 +0x9a5:  push   %ebp
08ac2b95 +0x9a6:  mov    %esp,%ebp
08ac2b97 +0x9a8:  mov    0x8(%ebp),%eax
08ac2b9a +0x9ab:  add    $0x10,%eax
08ac2b9d +0x9ae:  pop    %ebp
08ac2b9e +0x9af:  ret
08ac2b9f +0x9b0:  nop
08ac2ba0 +0x9b1:  push   %ebp
08ac2ba1 +0x9b2:  mov    %esp,%ebp
08ac2ba3 +0x9b4:  push   %esi
08ac2ba4 +0x9b5:  push   %ebx
08ac2ba5 +0x9b6:  sub    $0x20,%esp
08ac2ba8 +0x9b9:  mov    0x8(%ebp),%eax
08ac2bab +0x9bc:  mov    %eax,(%esp)
08ac2bae +0x9bf:  call   08ac2c56 <+0xa67>
08ac2bb3 +0x9c4:  mov    %eax,-0xc(%ebp)
08ac2bb6 +0x9c7:  mov    0xc(%ebp),%eax
08ac2bb9 +0x9ca:  mov    %eax,(%esp)
08ac2bbc +0x9cd:  call   08ac2c79 <+0xa8a>
08ac2bc1 +0x9d2:  mov    %eax,%ebx
08ac2bc3 +0x9d4:  mov    0x8(%ebp),%eax
08ac2bc6 +0x9d7:  mov    %eax,(%esp)
08ac2bc9 +0x9da:  call   08ac2b50 <+0x961>
08ac2bce +0x9df:  mov    %ebx,0x8(%esp)
08ac2bd2 +0x9e3:  mov    -0xc(%ebp),%edx
08ac2bd5 +0x9e6:  mov    %edx,0x4(%esp)
08ac2bd9 +0x9ea:  mov    %eax,(%esp)
08ac2bdc +0x9ed:  call   08ac2c82 <+0xa93>
08ac2be1 +0x9f2:  jmp    08ac2c17 <+0xa28>
08ac2be3 +0x9f4:  mov    %eax,(%esp)
08ac2be6 +0x9f7:  call   08725ce0 <__cxa_begin_catch>
08ac2beb +0x9fc:  mov    -0xc(%ebp),%eax
08ac2bee +0x9ff:  mov    %eax,0x4(%esp)
08ac2bf2 +0xa03:  mov    0x8(%ebp),%eax
08ac2bf5 +0xa06:  mov    %eax,(%esp)
08ac2bf8 +0xa09:  call   08ac2b72 <+0x983>
08ac2bfd +0xa0e:  call   08724be0 <__cxa_rethrow>
08ac2c02 +0xa13:  mov    %edx,%ebx
08ac2c04 +0xa15:  mov    %eax,%esi
08ac2c06 +0xa17:  call   08725c30 <__cxa_end_catch>
08ac2c0b +0xa1c:  mov    %esi,%eax
08ac2c0d +0xa1e:  mov    %ebx,%edx
08ac2c0f +0xa20:  mov    %eax,(%esp)
08ac2c12 +0xa23:  call   08ae3750 <_Unwind_Resume>
08ac2c17 +0xa28:  mov    -0xc(%ebp),%eax
08ac2c1a +0xa2b:  add    $0x20,%esp
08ac2c1d +0xa2e:  pop    %ebx
08ac2c1e +0xa2f:  pop    %esi
08ac2c1f +0xa30:  pop    %ebp
08ac2c20 +0xa31:  ret
08ac2c21 +0xa32:  push   %ebp
08ac2c22 +0xa33:  mov    %esp,%ebp
08ac2c24 +0xa35:  mov    0x8(%ebp),%eax
08ac2c27 +0xa38:  pop    %ebp
08ac2c28 +0xa39:  ret
08ac2c29 +0xa3a:  push   %ebp
08ac2c2a +0xa3b:  mov    %esp,%ebp
08ac2c2c +0xa3d:  mov    0x8(%ebp),%eax
08ac2c2f +0xa40:  add    $0x10,%eax
08ac2c32 +0xa43:  pop    %ebp
08ac2c33 +0xa44:  ret
08ac2c34 +0xa45:  push   %ebp
08ac2c35 +0xa46:  mov    %esp,%ebp
08ac2c37 +0xa48:  mov    0x8(%ebp),%eax
08ac2c3a +0xa4b:  pop    %ebp
08ac2c3b +0xa4c:  ret
08ac2c3c +0xa4d:  push   %ebp
08ac2c3d +0xa4e:  mov    %esp,%ebp
08ac2c3f +0xa50:  pop    %ebp
08ac2c40 +0xa51:  ret
08ac2c41 +0xa52:  nop
08ac2c42 +0xa53:  push   %ebp
08ac2c43 +0xa54:  mov    %esp,%ebp
08ac2c45 +0xa56:  sub    $0x18,%esp
08ac2c48 +0xa59:  mov    0xc(%ebp),%eax
08ac2c4b +0xa5c:  mov    %eax,(%esp)
08ac2c4e +0xa5f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ac2c53 +0xa64:  leave
08ac2c54 +0xa65:  ret
08ac2c55 +0xa66:  nop
08ac2c56 +0xa67:  push   %ebp
08ac2c57 +0xa68:  mov    %esp,%ebp
08ac2c59 +0xa6a:  sub    $0x18,%esp
08ac2c5c +0xa6d:  mov    0x8(%ebp),%eax
08ac2c5f +0xa70:  movl   $0x0,0x8(%esp)
08ac2c67 +0xa78:  movl   $0x1,0x4(%esp)
08ac2c6f +0xa80:  mov    %eax,(%esp)
08ac2c72 +0xa83:  call   08ac2cc2 <+0xad3>
08ac2c77 +0xa88:  leave
08ac2c78 +0xa89:  ret
08ac2c79 +0xa8a:  push   %ebp
08ac2c7a +0xa8b:  mov    %esp,%ebp
08ac2c7c +0xa8d:  mov    0x8(%ebp),%eax
08ac2c7f +0xa90:  pop    %ebp
08ac2c80 +0xa91:  ret
08ac2c81 +0xa92:  nop
08ac2c82 +0xa93:  push   %ebp
08ac2c83 +0xa94:  mov    %esp,%ebp
08ac2c85 +0xa96:  push   %ebx
08ac2c86 +0xa97:  sub    $0x14,%esp
08ac2c89 +0xa9a:  mov    0x10(%ebp),%eax
08ac2c8c +0xa9d:  mov    %eax,(%esp)
08ac2c8f +0xaa0:  call   08ac2c79 <+0xa8a>
08ac2c94 +0xaa5:  mov    %eax,%ebx
08ac2c96 +0xaa7:  mov    0xc(%ebp),%eax
08ac2c99 +0xaaa:  mov    %eax,0x4(%esp)
08ac2c9d +0xaae:  movl   $0x20,(%esp)
08ac2ca4 +0xab5:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08ac2ca9 +0xaba:  mov    %eax,%edx
08ac2cab +0xabc:  test   %edx,%edx
08ac2cad +0xabe:  je     08ac2cbb <+0xacc>
08ac2caf +0xac0:  mov    %ebx,0x4(%esp)
08ac2cb3 +0xac4:  mov    %eax,(%esp)
08ac2cb6 +0xac7:  call   08ac2cfa <+0xb0b>
08ac2cbb +0xacc:  add    $0x14,%esp
08ac2cbe +0xacf:  pop    %ebx
08ac2cbf +0xad0:  pop    %ebp
08ac2cc0 +0xad1:  ret
08ac2cc1 +0xad2:  nop
08ac2cc2 +0xad3:  push   %ebp
08ac2cc3 +0xad4:  mov    %esp,%ebp
08ac2cc5 +0xad6:  sub    $0x18,%esp
08ac2cc8 +0xad9:  mov    0x8(%ebp),%eax
08ac2ccb +0xadc:  mov    %eax,(%esp)
08ac2cce +0xadf:  call   08ac2d4e <+0xb5f>
08ac2cd3 +0xae4:  cmp    0xc(%ebp),%eax
08ac2cd6 +0xae7:  setb   %al
08ac2cd9 +0xaea:  movzbl %al,%eax
08ac2cdc +0xaed:  test   %eax,%eax
08ac2cde +0xaef:  setne  %al
08ac2ce1 +0xaf2:  test   %al,%al
08ac2ce3 +0xaf4:  je     08ac2cea <+0xafb>
08ac2ce5 +0xaf6:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08ac2cea +0xafb:  mov    0xc(%ebp),%eax
08ac2ced +0xafe:  shl    $0x5,%eax
08ac2cf0 +0xb01:  mov    %eax,(%esp)
08ac2cf3 +0xb04:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ac2cf8 +0xb09:  leave
08ac2cf9 +0xb0a:  ret
08ac2cfa +0xb0b:  push   %ebp
08ac2cfb +0xb0c:  mov    %esp,%ebp
08ac2cfd +0xb0e:  sub    $0x18,%esp
08ac2d00 +0xb11:  mov    0x8(%ebp),%eax
08ac2d03 +0xb14:  movl   $0x0,(%eax)
08ac2d09 +0xb1a:  mov    0x8(%ebp),%eax
08ac2d0c +0xb1d:  movl   $0x0,0x4(%eax)
08ac2d13 +0xb24:  mov    0x8(%ebp),%eax
08ac2d16 +0xb27:  movl   $0x0,0x8(%eax)
08ac2d1d +0xb2e:  mov    0x8(%ebp),%eax
08ac2d20 +0xb31:  movl   $0x0,0xc(%eax)
08ac2d27 +0xb38:  mov    0xc(%ebp),%eax
08ac2d2a +0xb3b:  mov    %eax,(%esp)
08ac2d2d +0xb3e:  call   08ac2c79 <+0xa8a>
08ac2d32 +0xb43:  mov    0x8(%ebp),%edx
08ac2d35 +0xb46:  mov    (%eax),%ecx
08ac2d37 +0xb48:  mov    %ecx,0x10(%edx)
08ac2d3a +0xb4b:  mov    0x4(%eax),%ecx
08ac2d3d +0xb4e:  mov    %ecx,0x14(%edx)
08ac2d40 +0xb51:  mov    0x8(%eax),%ecx
08ac2d43 +0xb54:  mov    %ecx,0x18(%edx)
08ac2d46 +0xb57:  mov    0xc(%eax),%eax
08ac2d49 +0xb5a:  mov    %eax,0x1c(%edx)
08ac2d4c +0xb5d:  leave
08ac2d4d +0xb5e:  ret
08ac2d4e +0xb5f:  push   %ebp
08ac2d4f +0xb60:  mov    %esp,%ebp
08ac2d51 +0xb62:  mov    $0x7ffffff,%eax
08ac2d56 +0xb67:  pop    %ebp
08ac2d57 +0xb68:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8ac21ef

/* DeleteInvalidItemScript::DeleteInvalidItemScript() */

void DeleteInvalidItemScript::_GLOBAL__I_DeleteInvalidItemScript(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
