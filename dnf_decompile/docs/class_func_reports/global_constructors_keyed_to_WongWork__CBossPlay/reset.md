# reset

`_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv`

`global constructors keyed to WongWork::CBossPlay::reset()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CBossPlay` | `0x0814a261` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814a261  _GLOBAL__I__ZN8WongWork9CBossPlay5resetEv
#           global constructors keyed to WongWork::CBossPlay::reset()
# range [0x0814a261, 0x0814bcf7]
0814a261 +0x0000:  push   %ebp
0814a262 +0x0001:  mov    %esp,%ebp
0814a264 +0x0003:  sub    $0x18,%esp
0814a267 +0x0006:  movl   $0xffff,0x4(%esp)
0814a26f +0x000e:  movl   $0x1,(%esp)
0814a276 +0x0015:  call   0814a221 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0814a27b +0x001a:  leave
0814a27c +0x001b:  ret
0814a27d +0x001c:  nop
0814a27e +0x001d:  push   %ebp
0814a27f +0x001e:  mov    %esp,%ebp
0814a281 +0x0020:  mov    0x8(%ebp),%eax
0814a284 +0x0023:  mov    0xc(%ebp),%edx
0814a287 +0x0026:  mov    %edx,(%eax)
0814a289 +0x0028:  mov    0x8(%ebp),%eax
0814a28c +0x002b:  mov    0x10(%ebp),%edx
0814a28f +0x002e:  mov    %edx,0x4(%eax)
0814a292 +0x0031:  pop    %ebp
0814a293 +0x0032:  ret
0814a294 +0x0033:  push   %ebp
0814a295 +0x0034:  mov    %esp,%ebp
0814a297 +0x0036:  mov    0x8(%ebp),%eax
0814a29a +0x0039:  mov    (%eax),%eax
0814a29c +0x003b:  mov    (%eax),%edx
0814a29e +0x003d:  mov    0x8(%ebp),%eax
0814a2a1 +0x0040:  mov    0x4(%eax),%eax
0814a2a4 +0x0043:  and    %edx,%eax
0814a2a6 +0x0045:  test   %eax,%eax
0814a2a8 +0x0047:  setne  %al
0814a2ab +0x004a:  pop    %ebp
0814a2ac +0x004b:  ret
0814a2ad +0x004c:  nop
0814a2ae +0x004d:  push   %ebp
0814a2af +0x004e:  mov    %esp,%ebp
0814a2b1 +0x0050:  sub    $0x4,%esp
0814a2b4 +0x0053:  mov    0xc(%ebp),%eax
0814a2b7 +0x0056:  mov    %al,-0x4(%ebp)
0814a2ba +0x0059:  cmpb   $0x0,-0x4(%ebp)
0814a2be +0x005d:  je     0814a2d8 <+0x77>
0814a2c0 +0x005f:  mov    0x8(%ebp),%eax
0814a2c3 +0x0062:  mov    (%eax),%eax
0814a2c5 +0x0064:  mov    0x8(%ebp),%edx
0814a2c8 +0x0067:  mov    (%edx),%edx
0814a2ca +0x0069:  mov    (%edx),%ecx
0814a2cc +0x006b:  mov    0x8(%ebp),%edx
0814a2cf +0x006e:  mov    0x4(%edx),%edx
0814a2d2 +0x0071:  or     %ecx,%edx
0814a2d4 +0x0073:  mov    %edx,(%eax)
0814a2d6 +0x0075:  jmp    0814a2f0 <+0x8f>
0814a2d8 +0x0077:  mov    0x8(%ebp),%eax
0814a2db +0x007a:  mov    (%eax),%eax
0814a2dd +0x007c:  mov    0x8(%ebp),%edx
0814a2e0 +0x007f:  mov    (%edx),%edx
0814a2e2 +0x0081:  mov    (%edx),%ecx
0814a2e4 +0x0083:  mov    0x8(%ebp),%edx
0814a2e7 +0x0086:  mov    0x4(%edx),%edx
0814a2ea +0x0089:  not    %edx
0814a2ec +0x008b:  and    %ecx,%edx
0814a2ee +0x008d:  mov    %edx,(%eax)
0814a2f0 +0x008f:  mov    0x8(%ebp),%eax
0814a2f3 +0x0092:  leave
0814a2f4 +0x0093:  ret
0814a2f5 +0x0094:  nop
0814a2f6 +0x0095:  push   %ebp
0814a2f7 +0x0096:  mov    %esp,%ebp
0814a2f9 +0x0098:  sub    $0x18,%esp
0814a2fc +0x009b:  mov    0xc(%ebp),%eax
0814a2ff +0x009e:  mov    %eax,(%esp)
0814a302 +0x00a1:  call   0814a294 <+0x33>
0814a307 +0x00a6:  movzbl %al,%eax
0814a30a +0x00a9:  mov    %eax,0x4(%esp)
0814a30e +0x00ad:  mov    0x8(%ebp),%eax
0814a311 +0x00b0:  mov    %eax,(%esp)
0814a314 +0x00b3:  call   0814a2ae <+0x4d>
0814a319 +0x00b8:  leave
0814a31a +0x00b9:  ret
0814a31b +0x00ba:  nop
0814a31c +0x00bb:  push   %ebp
0814a31d +0x00bc:  mov    %esp,%ebp
0814a31f +0x00be:  pop    %ebp
0814a320 +0x00bf:  ret
0814a321 +0x00c0:  nop
0814a322 +0x00c1:  push   %ebp
0814a323 +0x00c2:  mov    %esp,%ebp
0814a325 +0x00c4:  sub    $0x18,%esp
0814a328 +0x00c7:  mov    0x8(%ebp),%eax
0814a32b +0x00ca:  mov    %eax,(%esp)
0814a32e +0x00cd:  call   0814a31c <+0xbb>
0814a333 +0x00d2:  mov    0x8(%ebp),%eax
0814a336 +0x00d5:  mov    0xc(%ebp),%edx
0814a339 +0x00d8:  mov    %edx,(%eax)
0814a33b +0x00da:  mov    0x8(%ebp),%eax
0814a33e +0x00dd:  mov    0x10(%ebp),%edx
0814a341 +0x00e0:  mov    %edx,0x4(%eax)
0814a344 +0x00e3:  leave
0814a345 +0x00e4:  ret
0814a346 +0x00e5:  push   %ebp
0814a347 +0x00e6:  mov    %esp,%ebp
0814a349 +0x00e8:  mov    0x8(%ebp),%eax
0814a34c +0x00eb:  mov    0x4(%eax),%eax
0814a34f +0x00ee:  cmp    $0x1f,%eax
0814a352 +0x00f1:  sete   %dl
0814a355 +0x00f4:  lea    0x1(%eax),%ecx
0814a358 +0x00f7:  mov    0x8(%ebp),%eax
0814a35b +0x00fa:  mov    %ecx,0x4(%eax)
0814a35e +0x00fd:  test   %dl,%dl
0814a360 +0x00ff:  je     0814a379 <+0x118>
0814a362 +0x0101:  mov    0x8(%ebp),%eax
0814a365 +0x0104:  movl   $0x0,0x4(%eax)
0814a36c +0x010b:  mov    0x8(%ebp),%eax
0814a36f +0x010e:  mov    (%eax),%eax
0814a371 +0x0110:  lea    0x4(%eax),%edx
0814a374 +0x0113:  mov    0x8(%ebp),%eax
0814a377 +0x0116:  mov    %edx,(%eax)
0814a379 +0x0118:  pop    %ebp
0814a37a +0x0119:  ret
0814a37b +0x011a:  nop
0814a37c +0x011b:  push   %ebp
0814a37d +0x011c:  mov    %esp,%ebp
0814a37f +0x011e:  mov    0x8(%ebp),%eax
0814a382 +0x0121:  mov    0x4(%eax),%eax
0814a385 +0x0124:  test   %eax,%eax
0814a387 +0x0126:  sete   %dl
0814a38a +0x0129:  lea    -0x1(%eax),%ecx
0814a38d +0x012c:  mov    0x8(%ebp),%eax
0814a390 +0x012f:  mov    %ecx,0x4(%eax)
0814a393 +0x0132:  test   %dl,%dl
0814a395 +0x0134:  je     0814a3ae <+0x14d>
0814a397 +0x0136:  mov    0x8(%ebp),%eax
0814a39a +0x0139:  movl   $0x1f,0x4(%eax)
0814a3a1 +0x0140:  mov    0x8(%ebp),%eax
0814a3a4 +0x0143:  mov    (%eax),%eax
0814a3a6 +0x0145:  lea    -0x4(%eax),%edx
0814a3a9 +0x0148:  mov    0x8(%ebp),%eax
0814a3ac +0x014b:  mov    %edx,(%eax)
0814a3ae +0x014d:  pop    %ebp
0814a3af +0x014e:  ret
0814a3b0 +0x014f:  push   %ebp
0814a3b1 +0x0150:  mov    %esp,%ebp
0814a3b3 +0x0152:  sub    $0x10,%esp
0814a3b6 +0x0155:  mov    0x8(%ebp),%eax
0814a3b9 +0x0158:  mov    0x4(%eax),%edx
0814a3bc +0x015b:  mov    0xc(%ebp),%eax
0814a3bf +0x015e:  lea    (%edx,%eax,1),%eax
0814a3c2 +0x0161:  mov    %eax,-0x4(%ebp)
0814a3c5 +0x0164:  mov    0x8(%ebp),%eax
0814a3c8 +0x0167:  mov    (%eax),%edx
0814a3ca +0x0169:  mov    -0x4(%ebp),%eax
0814a3cd +0x016c:  mov    %eax,%ecx
0814a3cf +0x016e:  sar    $0x1f,%ecx
0814a3d2 +0x0171:  shr    $0x1b,%ecx
0814a3d5 +0x0174:  lea    (%ecx,%eax,1),%eax
0814a3d8 +0x0177:  sar    $0x5,%eax
0814a3db +0x017a:  shl    $0x2,%eax
0814a3de +0x017d:  add    %eax,%edx
0814a3e0 +0x017f:  mov    0x8(%ebp),%eax
0814a3e3 +0x0182:  mov    %edx,(%eax)
0814a3e5 +0x0184:  mov    -0x4(%ebp),%eax
0814a3e8 +0x0187:  mov    %eax,%edx
0814a3ea +0x0189:  sar    $0x1f,%edx
0814a3ed +0x018c:  shr    $0x1b,%edx
0814a3f0 +0x018f:  add    %edx,%eax
0814a3f2 +0x0191:  and    $0x1f,%eax
0814a3f5 +0x0194:  sub    %edx,%eax
0814a3f7 +0x0196:  mov    %eax,-0x4(%ebp)
0814a3fa +0x0199:  cmpl   $0x0,-0x4(%ebp)
0814a3fe +0x019d:  jns    0814a411 <+0x1b0>
0814a400 +0x019f:  addl   $0x20,-0x4(%ebp)
0814a404 +0x01a3:  mov    0x8(%ebp),%eax
0814a407 +0x01a6:  mov    (%eax),%eax
0814a409 +0x01a8:  lea    -0x4(%eax),%edx
0814a40c +0x01ab:  mov    0x8(%ebp),%eax
0814a40f +0x01ae:  mov    %edx,(%eax)
0814a411 +0x01b0:  mov    -0x4(%ebp),%edx
0814a414 +0x01b3:  mov    0x8(%ebp),%eax
0814a417 +0x01b6:  mov    %edx,0x4(%eax)
0814a41a +0x01b9:  leave
0814a41b +0x01ba:  ret
0814a41c +0x01bb:  push   %ebp
0814a41d +0x01bc:  mov    %esp,%ebp
0814a41f +0x01be:  mov    0x8(%ebp),%eax
0814a422 +0x01c1:  mov    (%eax),%eax
0814a424 +0x01c3:  mov    %eax,%edx
0814a426 +0x01c5:  mov    0xc(%ebp),%eax
0814a429 +0x01c8:  mov    (%eax),%eax
0814a42b +0x01ca:  mov    %edx,%ecx
0814a42d +0x01cc:  sub    %eax,%ecx
0814a42f +0x01ce:  mov    %ecx,%eax
0814a431 +0x01d0:  sar    $0x2,%eax
0814a434 +0x01d3:  shl    $0x5,%eax
0814a437 +0x01d6:  mov    %eax,%edx
0814a439 +0x01d8:  mov    0x8(%ebp),%eax
0814a43c +0x01db:  mov    0x4(%eax),%eax
0814a43f +0x01de:  add    %eax,%edx
0814a441 +0x01e0:  mov    0xc(%ebp),%eax
0814a444 +0x01e3:  mov    0x4(%eax),%eax
0814a447 +0x01e6:  mov    %edx,%ecx
0814a449 +0x01e8:  sub    %eax,%ecx
0814a44b +0x01ea:  mov    %ecx,%eax
0814a44d +0x01ec:  pop    %ebp
0814a44e +0x01ed:  ret
0814a44f +0x01ee:  nop
0814a450 +0x01ef:  push   %ebp
0814a451 +0x01f0:  mov    %esp,%ebp
0814a453 +0x01f2:  sub    $0x18,%esp
0814a456 +0x01f5:  mov    0x8(%ebp),%eax
0814a459 +0x01f8:  movl   $0x0,0x8(%esp)
0814a461 +0x0200:  movl   $0x0,0x4(%esp)
0814a469 +0x0208:  mov    %eax,(%esp)
0814a46c +0x020b:  call   0814a322 <+0xc1>
0814a471 +0x0210:  leave
0814a472 +0x0211:  ret
0814a473 +0x0212:  nop
0814a474 +0x0213:  push   %ebp
0814a475 +0x0214:  mov    %esp,%ebp
0814a477 +0x0216:  sub    $0x18,%esp
0814a47a +0x0219:  mov    0x8(%ebp),%eax
0814a47d +0x021c:  mov    0x10(%ebp),%edx
0814a480 +0x021f:  mov    %edx,0x8(%esp)
0814a484 +0x0223:  mov    0xc(%ebp),%edx
0814a487 +0x0226:  mov    %edx,0x4(%esp)
0814a48b +0x022a:  mov    %eax,(%esp)
0814a48e +0x022d:  call   0814a322 <+0xc1>
0814a493 +0x0232:  leave
0814a494 +0x0233:  ret
0814a495 +0x0234:  nop
0814a496 +0x0235:  push   %ebp
0814a497 +0x0236:  mov    %esp,%ebp
0814a499 +0x0238:  push   %ebx
0814a49a +0x0239:  sub    $0x14,%esp
0814a49d +0x023c:  mov    0x8(%ebp),%ebx
0814a4a0 +0x023f:  mov    0xc(%ebp),%eax
0814a4a3 +0x0242:  mov    0x4(%eax),%eax
0814a4a6 +0x0245:  mov    $0x1,%edx
0814a4ab +0x024a:  mov    %eax,%ecx
0814a4ad +0x024c:  shl    %cl,%edx
0814a4af +0x024e:  mov    0xc(%ebp),%eax
0814a4b2 +0x0251:  mov    (%eax),%eax
0814a4b4 +0x0253:  mov    %edx,0x8(%esp)
0814a4b8 +0x0257:  mov    %eax,0x4(%esp)
0814a4bc +0x025b:  mov    %ebx,(%esp)
0814a4bf +0x025e:  call   0814a27e <+0x1d>
0814a4c4 +0x0263:  mov    %ebx,%eax
0814a4c6 +0x0265:  add    $0x14,%esp
0814a4c9 +0x0268:  pop    %ebx
0814a4ca +0x0269:  pop    %ebp
0814a4cb +0x026a:  ret    $0x4
0814a4ce +0x026d:  push   %ebp
0814a4cf +0x026e:  mov    %esp,%ebp
0814a4d1 +0x0270:  sub    $0x18,%esp
0814a4d4 +0x0273:  mov    0x8(%ebp),%eax
0814a4d7 +0x0276:  mov    %eax,(%esp)
0814a4da +0x0279:  call   0814a346 <+0xe5>
0814a4df +0x027e:  mov    0x8(%ebp),%eax
0814a4e2 +0x0281:  leave
0814a4e3 +0x0282:  ret
0814a4e4 +0x0283:  push   %ebp
0814a4e5 +0x0284:  mov    %esp,%ebp
0814a4e7 +0x0286:  push   %ebx
0814a4e8 +0x0287:  sub    $0x14,%esp
0814a4eb +0x028a:  mov    0x8(%ebp),%ebx
0814a4ee +0x028d:  mov    0xc(%ebp),%eax
0814a4f1 +0x0290:  movl   $0x8,0x8(%esp)
0814a4f9 +0x0298:  mov    %eax,0x4(%esp)
0814a4fd +0x029c:  mov    %ebx,(%esp)
0814a500 +0x029f:  call   0807d880 <_init+0x178>
0814a505 +0x02a4:  mov    0xc(%ebp),%eax
0814a508 +0x02a7:  mov    %eax,(%esp)
0814a50b +0x02aa:  call   0814a346 <+0xe5>
0814a510 +0x02af:  mov    %ebx,%eax
0814a512 +0x02b1:  add    $0x14,%esp
0814a515 +0x02b4:  pop    %ebx
0814a516 +0x02b5:  pop    %ebp
0814a517 +0x02b6:  ret    $0x4
0814a51a +0x02b9:  push   %ebp
0814a51b +0x02ba:  mov    %esp,%ebp
0814a51d +0x02bc:  sub    $0x18,%esp
0814a520 +0x02bf:  mov    0x8(%ebp),%eax
0814a523 +0x02c2:  mov    %eax,(%esp)
0814a526 +0x02c5:  call   0814a37c <+0x11b>
0814a52b +0x02ca:  mov    0x8(%ebp),%eax
0814a52e +0x02cd:  leave
0814a52f +0x02ce:  ret
0814a530 +0x02cf:  push   %ebp
0814a531 +0x02d0:  mov    %esp,%ebp
0814a533 +0x02d2:  sub    $0x18,%esp
0814a536 +0x02d5:  mov    0x8(%ebp),%eax
0814a539 +0x02d8:  mov    0xc(%ebp),%edx
0814a53c +0x02db:  mov    %edx,0x4(%esp)
0814a540 +0x02df:  mov    %eax,(%esp)
0814a543 +0x02e2:  call   0814a3b0 <+0x14f>
0814a548 +0x02e7:  mov    0x8(%ebp),%eax
0814a54b +0x02ea:  leave
0814a54c +0x02eb:  ret
0814a54d +0x02ec:  nop
0814a54e +0x02ed:  push   %ebp
0814a54f +0x02ee:  mov    %esp,%ebp
0814a551 +0x02f0:  push   %ebx
0814a552 +0x02f1:  sub    $0x24,%esp
0814a555 +0x02f4:  mov    0x8(%ebp),%ebx
0814a558 +0x02f7:  mov    0xc(%ebp),%eax
0814a55b +0x02fa:  mov    0x4(%eax),%edx
0814a55e +0x02fd:  mov    (%eax),%eax
0814a560 +0x02ff:  mov    %eax,-0x10(%ebp)
0814a563 +0x0302:  mov    %edx,-0xc(%ebp)
0814a566 +0x0305:  mov    0x10(%ebp),%eax
0814a569 +0x0308:  mov    %eax,0x4(%esp)
0814a56d +0x030c:  lea    -0x10(%ebp),%eax
0814a570 +0x030f:  mov    %eax,(%esp)
0814a573 +0x0312:  call   0814a530 <+0x2cf>
0814a578 +0x0317:  movl   $0x8,0x8(%esp)
0814a580 +0x031f:  mov    %eax,0x4(%esp)
0814a584 +0x0323:  mov    %ebx,(%esp)
0814a587 +0x0326:  call   0807d880 <_init+0x178>
0814a58c +0x032b:  mov    %ebx,%eax
0814a58e +0x032d:  add    $0x24,%esp
0814a591 +0x0330:  pop    %ebx
0814a592 +0x0331:  pop    %ebp
0814a593 +0x0332:  ret    $0x4
0814a596 +0x0335:  push   %ebp
0814a597 +0x0336:  mov    %esp,%ebp
0814a599 +0x0338:  sub    $0x18,%esp
0814a59c +0x033b:  mov    0x8(%ebp),%eax
0814a59f +0x033e:  mov    0x10(%ebp),%edx
0814a5a2 +0x0341:  mov    %edx,0x8(%esp)
0814a5a6 +0x0345:  mov    0xc(%ebp),%edx
0814a5a9 +0x0348:  mov    %edx,0x4(%esp)
0814a5ad +0x034c:  mov    %eax,(%esp)
0814a5b0 +0x034f:  call   0814a322 <+0xc1>
0814a5b5 +0x0354:  leave
0814a5b6 +0x0355:  ret
0814a5b7 +0x0356:  nop
0814a5b8 +0x0357:  push   %ebp
0814a5b9 +0x0358:  mov    %esp,%ebp
0814a5bb +0x035a:  sub    $0x18,%esp
0814a5be +0x035d:  mov    0xc(%ebp),%eax
0814a5c1 +0x0360:  mov    0x4(%eax),%ecx
0814a5c4 +0x0363:  mov    0xc(%ebp),%eax
0814a5c7 +0x0366:  mov    (%eax),%edx
0814a5c9 +0x0368:  mov    0x8(%ebp),%eax
0814a5cc +0x036b:  mov    %ecx,0x8(%esp)
0814a5d0 +0x036f:  mov    %edx,0x4(%esp)
0814a5d4 +0x0373:  mov    %eax,(%esp)
0814a5d7 +0x0376:  call   0814a322 <+0xc1>
0814a5dc +0x037b:  leave
0814a5dd +0x037c:  ret
0814a5de +0x037d:  push   %ebp
0814a5df +0x037e:  mov    %esp,%ebp
0814a5e1 +0x0380:  sub    $0x28,%esp
0814a5e4 +0x0383:  mov    0x8(%ebp),%eax
0814a5e7 +0x0386:  mov    0x4(%eax),%eax
0814a5ea +0x0389:  mov    $0x1,%edx
0814a5ef +0x038e:  mov    %eax,%ecx
0814a5f1 +0x0390:  shl    %cl,%edx
0814a5f3 +0x0392:  mov    0x8(%ebp),%eax
0814a5f6 +0x0395:  mov    (%eax),%eax
0814a5f8 +0x0397:  mov    %edx,0x8(%esp)
0814a5fc +0x039b:  mov    %eax,0x4(%esp)
0814a600 +0x039f:  lea    -0x10(%ebp),%eax
0814a603 +0x03a2:  mov    %eax,(%esp)
0814a606 +0x03a5:  call   0814a27e <+0x1d>
0814a60b +0x03aa:  lea    -0x10(%ebp),%eax
0814a60e +0x03ad:  mov    %eax,(%esp)
0814a611 +0x03b0:  call   0814a294 <+0x33>
0814a616 +0x03b5:  leave
0814a617 +0x03b6:  ret
0814a618 +0x03b7:  push   %ebp
0814a619 +0x03b8:  mov    %esp,%ebp
0814a61b +0x03ba:  sub    $0x18,%esp
0814a61e +0x03bd:  mov    0x8(%ebp),%eax
0814a621 +0x03c0:  mov    %eax,(%esp)
0814a624 +0x03c3:  call   0814a346 <+0xe5>
0814a629 +0x03c8:  mov    0x8(%ebp),%eax
0814a62c +0x03cb:  leave
0814a62d +0x03cc:  ret
0814a62e +0x03cd:  push   %ebp
0814a62f +0x03ce:  mov    %esp,%ebp
0814a631 +0x03d0:  mov    0xc(%ebp),%eax
0814a634 +0x03d3:  movzbl (%eax),%edx
0814a637 +0x03d6:  mov    0x8(%ebp),%eax
0814a63a +0x03d9:  mov    %dl,(%eax)
0814a63c +0x03db:  mov    0xc(%ebp),%eax
0814a63f +0x03de:  movzbl 0x1(%eax),%edx
0814a643 +0x03e2:  mov    0x8(%ebp),%eax
0814a646 +0x03e5:  mov    %dl,0x1(%eax)
0814a649 +0x03e8:  mov    0xc(%ebp),%eax
0814a64c +0x03eb:  mov    0x2(%eax),%edx
0814a64f +0x03ee:  mov    0x8(%ebp),%eax
0814a652 +0x03f1:  mov    %edx,0x2(%eax)
0814a655 +0x03f4:  mov    0xc(%ebp),%eax
0814a658 +0x03f7:  mov    0x7(%eax),%edx
0814a65b +0x03fa:  mov    0x8(%ebp),%eax
0814a65e +0x03fd:  mov    %edx,0x7(%eax)
0814a661 +0x0400:  mov    0xc(%ebp),%eax
0814a664 +0x0403:  movzwl 0xb(%eax),%edx
0814a668 +0x0407:  mov    0x8(%ebp),%eax
0814a66b +0x040a:  mov    %dx,0xb(%eax)
0814a66f +0x040e:  mov    0xc(%ebp),%eax
0814a672 +0x0411:  movzbl 0x6(%eax),%edx
0814a676 +0x0415:  mov    0x8(%ebp),%eax
0814a679 +0x0418:  mov    %dl,0x6(%eax)
0814a67c +0x041b:  mov    0xc(%ebp),%eax
0814a67f +0x041e:  mov    0xd(%eax),%edx
0814a682 +0x0421:  mov    0x8(%ebp),%eax
0814a685 +0x0424:  mov    %edx,0xd(%eax)
0814a688 +0x0427:  mov    0x8(%ebp),%eax
0814a68b +0x042a:  mov    0xc(%ebp),%edx
0814a68e +0x042d:  mov    0x11(%edx),%edx
0814a691 +0x0430:  mov    %edx,0x11(%eax)
0814a694 +0x0433:  mov    0x8(%ebp),%eax
0814a697 +0x0436:  mov    0xc(%ebp),%edx
0814a69a +0x0439:  mov    0x1f(%edx),%ecx
0814a69d +0x043c:  mov    %ecx,0x1f(%eax)
0814a6a0 +0x043f:  mov    0x23(%edx),%ecx
0814a6a3 +0x0442:  mov    %ecx,0x23(%eax)
0814a6a6 +0x0445:  mov    0x27(%edx),%ecx
0814a6a9 +0x0448:  mov    %ecx,0x27(%eax)
0814a6ac +0x044b:  mov    0x2b(%edx),%ecx
0814a6af +0x044e:  mov    %ecx,0x2b(%eax)
0814a6b2 +0x0451:  mov    0x2f(%edx),%edx
0814a6b5 +0x0454:  mov    %edx,0x2f(%eax)
0814a6b8 +0x0457:  mov    0x8(%ebp),%eax
0814a6bb +0x045a:  mov    0xc(%ebp),%edx
0814a6be +0x045d:  movzbl 0x33(%edx),%edx
0814a6c2 +0x0461:  mov    %dl,0x33(%eax)
0814a6c5 +0x0464:  mov    0x8(%ebp),%eax
0814a6c8 +0x0467:  mov    0xc(%ebp),%edx
0814a6cb +0x046a:  mov    0x34(%edx),%ecx
0814a6ce +0x046d:  mov    %ecx,0x34(%eax)
0814a6d1 +0x0470:  mov    0x38(%edx),%ecx
0814a6d4 +0x0473:  mov    %ecx,0x38(%eax)
0814a6d7 +0x0476:  movzbl 0x3c(%edx),%edx
0814a6db +0x047a:  mov    %dl,0x3c(%eax)
0814a6de +0x047d:  pop    %ebp
0814a6df +0x047e:  ret
0814a6e0 +0x047f:  push   %ebp
0814a6e1 +0x0480:  mov    %esp,%ebp
0814a6e3 +0x0482:  mov    &_ZN12CServerEvent10m_nExpRateE,%eax
0814a6e8 +0x0487:  pop    %ebp
0814a6e9 +0x0488:  ret
0814a6ea +0x0489:  push   %ebp
0814a6eb +0x048a:  mov    %esp,%ebp
0814a6ed +0x048c:  mov    0x8(%ebp),%eax
0814a6f0 +0x048f:  mov    0x8cc0(%eax),%eax
0814a6f6 +0x0495:  pop    %ebp
0814a6f7 +0x0496:  ret
0814a6f8 +0x0497:  push   %ebp
0814a6f9 +0x0498:  mov    %esp,%ebp
0814a6fb +0x049a:  mov    0x8(%ebp),%eax
0814a6fe +0x049d:  add    $0xb3f4,%eax
0814a703 +0x04a2:  pop    %ebp
0814a704 +0x04a3:  ret
0814a705 +0x04a4:  nop
0814a706 +0x04a5:  push   %ebp
0814a707 +0x04a6:  mov    %esp,%ebp
0814a709 +0x04a8:  push   %esi
0814a70a +0x04a9:  push   %ebx
0814a70b +0x04aa:  sub    $0x10,%esp
0814a70e +0x04ad:  mov    0x8(%ebp),%eax
0814a711 +0x04b0:  add    $0x8,%eax
0814a714 +0x04b3:  mov    %eax,(%esp)
0814a717 +0x04b6:  call   0814ab92 <+0x931>
0814a71c +0x04bb:  mov    0x8(%ebp),%eax
0814a71f +0x04be:  movl   $0x64,(%eax)
0814a725 +0x04c4:  mov    0x8(%ebp),%eax
0814a728 +0x04c7:  mov    $0x0,%edx
0814a72d +0x04cc:  mov    %edx,0x4(%eax)
0814a730 +0x04cf:  mov    0x8(%ebp),%eax
0814a733 +0x04d2:  add    $0x8,%eax
0814a736 +0x04d5:  mov    %eax,(%esp)
0814a739 +0x04d8:  call   0814abba <+0x959>
0814a73e +0x04dd:  mov    0x8(%ebp),%eax
0814a741 +0x04e0:  add    $0x8,%eax
0814a744 +0x04e3:  movl   $0x0,0x4(%esp)
0814a74c +0x04eb:  mov    %eax,(%esp)
0814a74f +0x04ee:  call   0814abf0 <+0x98f>
0814a754 +0x04f3:  mov    0x8(%ebp),%eax
0814a757 +0x04f6:  add    $0x8,%eax
0814a75a +0x04f9:  movl   $0x0,0x4(%esp)
0814a762 +0x0501:  mov    %eax,(%esp)
0814a765 +0x0504:  call   0814abf0 <+0x98f>
0814a76a +0x0509:  mov    0x8(%ebp),%eax
0814a76d +0x050c:  mov    $0x3f800000,%edx
0814a772 +0x0511:  mov    %edx,0x1c(%eax)
0814a775 +0x0514:  mov    0x8(%ebp),%eax
0814a778 +0x0517:  movl   $0x0,0x20(%eax)
0814a77f +0x051e:  mov    0x8(%ebp),%eax
0814a782 +0x0521:  movb   $0x0,0x24(%eax)
0814a786 +0x0525:  mov    0x8(%ebp),%eax
0814a789 +0x0528:  movb   $0x0,0x25(%eax)
0814a78d +0x052c:  mov    0x8(%ebp),%eax
0814a790 +0x052f:  movl   $0xb,0x28(%eax)
0814a797 +0x0536:  mov    0x8(%ebp),%eax
0814a79a +0x0539:  movl   $0x0,0x2c(%eax)
0814a7a1 +0x0540:  mov    0x8(%ebp),%eax
0814a7a4 +0x0543:  movl   $0x0,0x30(%eax)
0814a7ab +0x054a:  add    $0x10,%esp
0814a7ae +0x054d:  pop    %ebx
0814a7af +0x054e:  pop    %esi
0814a7b0 +0x054f:  pop    %ebp
0814a7b1 +0x0550:  ret
0814a7b2 +0x0551:  mov    %edx,%ebx
0814a7b4 +0x0553:  mov    %eax,%esi
0814a7b6 +0x0555:  mov    0x8(%ebp),%eax
0814a7b9 +0x0558:  add    $0x8,%eax
0814a7bc +0x055b:  mov    %eax,(%esp)
0814a7bf +0x055e:  call   0814aba6 <+0x945>
0814a7c4 +0x0563:  mov    %esi,%eax
0814a7c6 +0x0565:  mov    %ebx,%edx
0814a7c8 +0x0567:  mov    %eax,(%esp)
0814a7cb +0x056a:  call   08ae3750 <_Unwind_Resume>
0814a7d0 +0x056f:  push   %ebp
0814a7d1 +0x0570:  mov    %esp,%ebp
0814a7d3 +0x0572:  mov    0xc(%ebp),%edx
0814a7d6 +0x0575:  mov    0x8(%ebp),%eax
0814a7d9 +0x0578:  add    $0xf0,%edx
0814a7df +0x057e:  mov    (%eax,%edx,4),%eax
0814a7e2 +0x0581:  pop    %ebp
0814a7e3 +0x0582:  ret
0814a7e4 +0x0583:  push   %ebp
0814a7e5 +0x0584:  mov    %esp,%ebp
0814a7e7 +0x0586:  sub    $0x4,%esp
0814a7ea +0x0589:  mov    0x10(%ebp),%eax
0814a7ed +0x058c:  mov    %al,-0x4(%ebp)
0814a7f0 +0x058f:  mov    0xc(%ebp),%eax
0814a7f3 +0x0592:  mov    0x8(%ebp),%edx
0814a7f6 +0x0595:  movzbl -0x4(%ebp),%ecx
0814a7fa +0x0599:  mov    %cl,0xd(%edx,%eax,1)
0814a7fe +0x059d:  leave
0814a7ff +0x059e:  ret
0814a800 +0x059f:  push   %ebp
0814a801 +0x05a0:  mov    %esp,%ebp
0814a803 +0x05a2:  mov    0x8(%ebp),%eax
0814a806 +0x05a5:  movl   $0x0,(%eax)
0814a80c +0x05ab:  mov    0x8(%ebp),%eax
0814a80f +0x05ae:  movl   $0x0,0x4(%eax)
0814a816 +0x05b5:  mov    0x8(%ebp),%eax
0814a819 +0x05b8:  movl   $0x0,0x8(%eax)
0814a820 +0x05bf:  mov    0x8(%ebp),%eax
0814a823 +0x05c2:  movl   $0x0,0xc(%eax)
0814a82a +0x05c9:  mov    0x8(%ebp),%eax
0814a82d +0x05cc:  movl   $0x0,0x10(%eax)
0814a834 +0x05d3:  mov    0x8(%ebp),%eax
0814a837 +0x05d6:  movl   $0x0,0x14(%eax)
0814a83e +0x05dd:  mov    0x8(%ebp),%eax
0814a841 +0x05e0:  movl   $0x0,0x18(%eax)
0814a848 +0x05e7:  mov    0x8(%ebp),%eax
0814a84b +0x05ea:  movl   $0x0,0x1c(%eax)
0814a852 +0x05f1:  mov    0x8(%ebp),%eax
0814a855 +0x05f4:  movl   $0x0,0x20(%eax)
0814a85c +0x05fb:  mov    0x8(%ebp),%eax
0814a85f +0x05fe:  movl   $0x0,0x24(%eax)
0814a866 +0x0605:  mov    0x8(%ebp),%eax
0814a869 +0x0608:  movl   $0x0,0x28(%eax)
0814a870 +0x060f:  mov    0x8(%ebp),%eax
0814a873 +0x0612:  movl   $0x0,0x2c(%eax)
0814a87a +0x0619:  mov    0x8(%ebp),%eax
0814a87d +0x061c:  movl   $0x0,0x30(%eax)
0814a884 +0x0623:  mov    0x8(%ebp),%eax
0814a887 +0x0626:  movl   $0x0,0x34(%eax)
0814a88e +0x062d:  mov    0x8(%ebp),%eax
0814a891 +0x0630:  movl   $0x0,0x38(%eax)
0814a898 +0x0637:  mov    0x8(%ebp),%eax
0814a89b +0x063a:  movl   $0x0,0x3c(%eax)
0814a8a2 +0x0641:  mov    0x8(%ebp),%eax
0814a8a5 +0x0644:  movl   $0x0,0x40(%eax)
0814a8ac +0x064b:  mov    0x8(%ebp),%eax
0814a8af +0x064e:  movl   $0x0,0x44(%eax)
0814a8b6 +0x0655:  pop    %ebp
0814a8b7 +0x0656:  ret
0814a8b8 +0x0657:  push   %ebp
0814a8b9 +0x0658:  mov    %esp,%ebp
0814a8bb +0x065a:  mov    0x8(%ebp),%eax
0814a8be +0x065d:  mov    $0x0,%edx
0814a8c3 +0x0662:  mov    %edx,(%eax)
0814a8c5 +0x0664:  mov    0x8(%ebp),%eax
0814a8c8 +0x0667:  mov    $0x0,%edx
0814a8cd +0x066c:  mov    %edx,0x4(%eax)
0814a8d0 +0x066f:  mov    0x8(%ebp),%eax
0814a8d3 +0x0672:  mov    $0x0,%edx
0814a8d8 +0x0677:  mov    %edx,0x8(%eax)
0814a8db +0x067a:  mov    0x8(%ebp),%eax
0814a8de +0x067d:  mov    $0x0,%edx
0814a8e3 +0x0682:  mov    %edx,0xc(%eax)
0814a8e6 +0x0685:  mov    0x8(%ebp),%eax
0814a8e9 +0x0688:  mov    $0x0,%edx
0814a8ee +0x068d:  mov    %edx,0x10(%eax)
0814a8f1 +0x0690:  mov    0x8(%ebp),%eax
0814a8f4 +0x0693:  mov    $0x0,%edx
0814a8f9 +0x0698:  mov    %edx,0x14(%eax)
0814a8fc +0x069b:  mov    0x8(%ebp),%eax
0814a8ff +0x069e:  mov    $0x0,%edx
0814a904 +0x06a3:  mov    %edx,0x18(%eax)
0814a907 +0x06a6:  mov    0x8(%ebp),%eax
0814a90a +0x06a9:  movl   $0x0,0x1c(%eax)
0814a911 +0x06b0:  mov    0x8(%ebp),%eax
0814a914 +0x06b3:  mov    $0x0,%edx
0814a919 +0x06b8:  mov    %edx,0x20(%eax)
0814a91c +0x06bb:  mov    0x8(%ebp),%eax
0814a91f +0x06be:  mov    $0x0,%edx
0814a924 +0x06c3:  mov    %edx,0x24(%eax)
0814a927 +0x06c6:  mov    0x8(%ebp),%eax
0814a92a +0x06c9:  mov    $0x0,%edx
0814a92f +0x06ce:  mov    %edx,0x28(%eax)
0814a932 +0x06d1:  mov    0x8(%ebp),%eax
0814a935 +0x06d4:  mov    $0x0,%edx
0814a93a +0x06d9:  mov    %edx,0x2c(%eax)
0814a93d +0x06dc:  mov    0x8(%ebp),%eax
0814a940 +0x06df:  mov    $0x0,%edx
0814a945 +0x06e4:  mov    %edx,0x30(%eax)
0814a948 +0x06e7:  mov    0x8(%ebp),%eax
0814a94b +0x06ea:  mov    $0x0,%edx
0814a950 +0x06ef:  mov    %edx,0x34(%eax)
0814a953 +0x06f2:  mov    0x8(%ebp),%eax
0814a956 +0x06f5:  mov    $0x0,%edx
0814a95b +0x06fa:  mov    %edx,0x3c(%eax)
0814a95e +0x06fd:  mov    0x8(%ebp),%eax
0814a961 +0x0700:  mov    $0x0,%edx
0814a966 +0x0705:  mov    %edx,0x38(%eax)
0814a969 +0x0708:  mov    0x8(%ebp),%eax
0814a96c +0x070b:  mov    $0x0,%edx
0814a971 +0x0710:  mov    %edx,0x48(%eax)
0814a974 +0x0713:  mov    0x8(%ebp),%eax
0814a977 +0x0716:  mov    $0x0,%edx
0814a97c +0x071b:  mov    %edx,0x40(%eax)
0814a97f +0x071e:  mov    0x8(%ebp),%eax
0814a982 +0x0721:  mov    $0x0,%edx
0814a987 +0x0726:  mov    %edx,0x44(%eax)
0814a98a +0x0729:  mov    0x8(%ebp),%eax
0814a98d +0x072c:  movl   $0x0,0x4c(%eax)
0814a994 +0x0733:  mov    0x8(%ebp),%eax
0814a997 +0x0736:  movl   $0x0,0x50(%eax)
0814a99e +0x073d:  mov    0x8(%ebp),%eax
0814a9a1 +0x0740:  movb   $0x0,0x54(%eax)
0814a9a5 +0x0744:  mov    0x8(%ebp),%eax
0814a9a8 +0x0747:  movb   $0x0,0x55(%eax)
0814a9ac +0x074b:  mov    0x8(%ebp),%eax
0814a9af +0x074e:  movl   $0xffffffff,0x58(%eax)
0814a9b6 +0x0755:  mov    0x8(%ebp),%eax
0814a9b9 +0x0758:  movl   $0xffffffff,0x5c(%eax)
0814a9c0 +0x075f:  pop    %ebp
0814a9c1 +0x0760:  ret
0814a9c2 +0x0761:  push   %ebp
0814a9c3 +0x0762:  mov    %esp,%ebp
0814a9c5 +0x0764:  sub    $0x28,%esp
0814a9c8 +0x0767:  mov    0x8(%ebp),%eax
0814a9cb +0x076a:  mov    %eax,(%esp)
0814a9ce +0x076d:  call   085acfde <_ZN6CParty15CalcAvatarBonusEv>  ; CParty::CalcAvatarBonus()
0814a9d3 +0x0772:  fstps  -0xc(%ebp)
0814a9d6 +0x0775:  mov    -0xc(%ebp),%eax
0814a9d9 +0x0778:  mov    %eax,-0xc(%ebp)
0814a9dc +0x077b:  flds   -0xc(%ebp)
0814a9df +0x077e:  leave
0814a9e0 +0x077f:  ret
0814a9e1 +0x0780:  nop
0814a9e2 +0x0781:  push   %ebp
0814a9e3 +0x0782:  mov    %esp,%ebp
0814a9e5 +0x0784:  sub    $0x28,%esp
0814a9e8 +0x0787:  mov    0xc(%ebp),%eax
0814a9eb +0x078a:  mov    %eax,0x4(%esp)
0814a9ef +0x078e:  mov    0x8(%ebp),%eax
0814a9f2 +0x0791:  mov    %eax,(%esp)
0814a9f5 +0x0794:  call   085ad084 <_ZN6CParty17CalcCreatureBonusEP5CUser>  ; CParty::CalcCreatureBonus(CUser*)
0814a9fa +0x0799:  fstps  -0xc(%ebp)
0814a9fd +0x079c:  mov    -0xc(%ebp),%eax
0814aa00 +0x079f:  mov    %eax,-0xc(%ebp)
0814aa03 +0x07a2:  flds   -0xc(%ebp)
0814aa06 +0x07a5:  leave
0814aa07 +0x07a6:  ret
0814aa08 +0x07a7:  push   %ebp
0814aa09 +0x07a8:  mov    %esp,%ebp
0814aa0b +0x07aa:  mov    0x8(%ebp),%eax
0814aa0e +0x07ad:  mov    0x858(%eax),%eax
0814aa14 +0x07b3:  pop    %ebp
0814aa15 +0x07b4:  ret
0814aa16 +0x07b5:  push   %ebp
0814aa17 +0x07b6:  mov    %esp,%ebp
0814aa19 +0x07b8:  mov    0x8(%ebp),%eax
0814aa1c +0x07bb:  movw   $0x0,(%eax)
0814aa21 +0x07c0:  mov    0x8(%ebp),%eax
0814aa24 +0x07c3:  movw   $0x0,0x2(%eax)
0814aa2a +0x07c9:  mov    0x8(%ebp),%eax
0814aa2d +0x07cc:  movl   $0x0,0x8(%eax)
0814aa34 +0x07d3:  mov    0x8(%ebp),%eax
0814aa37 +0x07d6:  movb   $0x0,0xc(%eax)
0814aa3b +0x07da:  mov    0x8(%ebp),%eax
0814aa3e +0x07dd:  movl   $0x0,0x10(%eax)
0814aa45 +0x07e4:  mov    0x8(%ebp),%eax
0814aa48 +0x07e7:  movl   $0x0,0x14(%eax)
0814aa4f +0x07ee:  pop    %ebp
0814aa50 +0x07ef:  ret
0814aa51 +0x07f0:  nop
0814aa52 +0x07f1:  push   %ebp
0814aa53 +0x07f2:  mov    %esp,%ebp
0814aa55 +0x07f4:  mov    0x8(%ebp),%eax
0814aa58 +0x07f7:  movb   $0x1,0x7(%eax)
0814aa5c +0x07fb:  pop    %ebp
0814aa5d +0x07fc:  ret
0814aa5e +0x07fd:  push   %ebp
0814aa5f +0x07fe:  mov    %esp,%ebp
0814aa61 +0x0800:  sub    $0x18,%esp
0814aa64 +0x0803:  mov    0x8(%ebp),%eax
0814aa67 +0x0806:  mov    %eax,(%esp)
0814aa6a +0x0809:  call   0814aa52 <+0x7f1>
0814aa6f +0x080e:  mov    0x8(%ebp),%eax
0814aa72 +0x0811:  add    $0x858d4,%eax
0814aa77 +0x0816:  leave
0814aa78 +0x0817:  ret
0814aa79 +0x0818:  nop
0814aa7a +0x0819:  push   %ebp
0814aa7b +0x081a:  mov    %esp,%ebp
0814aa7d +0x081c:  mov    0x8(%ebp),%eax
0814aa80 +0x081f:  mov    0xc(%ebp),%edx
0814aa83 +0x0822:  mov    %edx,0x8d1dc(%eax)
0814aa89 +0x0828:  pop    %ebp
0814aa8a +0x0829:  ret
0814aa8b +0x082a:  nop
0814aa8c +0x082b:  push   %ebp
0814aa8d +0x082c:  mov    %esp,%ebp
0814aa8f +0x082e:  mov    0x8(%ebp),%eax
0814aa92 +0x0831:  mov    0x8d1dc(%eax),%eax
0814aa98 +0x0837:  pop    %ebp
0814aa99 +0x0838:  ret
0814aa9a +0x0839:  push   %ebp
0814aa9b +0x083a:  mov    %esp,%ebp
0814aa9d +0x083c:  mov    0x8(%ebp),%eax
0814aaa0 +0x083f:  mov    0xc(%ebp),%edx
0814aaa3 +0x0842:  mov    %edx,0x8d1e0(%eax)
0814aaa9 +0x0848:  pop    %ebp
0814aaaa +0x0849:  ret
0814aaab +0x084a:  nop
0814aaac +0x084b:  push   %ebp
0814aaad +0x084c:  mov    %esp,%ebp
0814aaaf +0x084e:  sub    $0x4,%esp
0814aab2 +0x0851:  mov    0xc(%ebp),%eax
0814aab5 +0x0854:  mov    %ax,-0x4(%ebp)
0814aab9 +0x0858:  mov    0x8(%ebp),%eax
0814aabc +0x085b:  movzwl -0x4(%ebp),%edx
0814aac0 +0x085f:  mov    %dx,0x8d010(%eax)
0814aac7 +0x0866:  leave
0814aac8 +0x0867:  ret
0814aac9 +0x0868:  nop
0814aaca +0x0869:  push   %ebp
0814aacb +0x086a:  mov    %esp,%ebp
0814aacd +0x086c:  mov    0x8(%ebp),%eax
0814aad0 +0x086f:  mov    0x1b0(%eax),%eax
0814aad6 +0x0875:  pop    %ebp
0814aad7 +0x0876:  ret
0814aad8 +0x0877:  push   %ebp
0814aad9 +0x0878:  mov    %esp,%ebp
0814aadb +0x087a:  mov    0x8(%ebp),%eax
0814aade +0x087d:  mov    0xc(%eax),%eax
0814aae1 +0x0880:  pop    %ebp
0814aae2 +0x0881:  ret
0814aae3 +0x0882:  nop
0814aae4 +0x0883:  push   %ebp
0814aae5 +0x0884:  mov    %esp,%ebp
0814aae7 +0x0886:  mov    0x8(%ebp),%eax
0814aaea +0x0889:  mov    0xc(%eax),%eax
0814aaed +0x088c:  pop    %ebp
0814aaee +0x088d:  ret
0814aaef +0x088e:  nop
0814aaf0 +0x088f:  push   %ebp
0814aaf1 +0x0890:  mov    %esp,%ebp
0814aaf3 +0x0892:  sub    $0x18,%esp
0814aaf6 +0x0895:  mov    0x8(%ebp),%eax
0814aaf9 +0x0898:  add    $0x8,%eax
0814aafc +0x089b:  mov    %eax,(%esp)
0814aaff +0x089e:  call   0814aba6 <+0x945>
0814ab04 +0x08a3:  leave
0814ab05 +0x08a4:  ret
0814ab06 +0x08a5:  push   %ebp
0814ab07 +0x08a6:  mov    %esp,%ebp
0814ab09 +0x08a8:  push   %esi
0814ab0a +0x08a9:  push   %ebx
0814ab0b +0x08aa:  sub    $0x10,%esp
0814ab0e +0x08ad:  mov    0x8(%ebp),%eax
0814ab11 +0x08b0:  mov    %eax,(%esp)
0814ab14 +0x08b3:  call   0814ac92 <+0xa31>
0814ab19 +0x08b8:  mov    0x8(%ebp),%eax
0814ab1c +0x08bb:  add    $0xc,%eax
0814ab1f +0x08be:  mov    %eax,(%esp)
0814ab22 +0x08c1:  call   08550884 <_ZN10CLuckPointC1Ev>  ; CLuckPoint::CLuckPoint()
0814ab27 +0x08c6:  jmp    0814ab44 <+0x8e3>
0814ab29 +0x08c8:  mov    %edx,%ebx
0814ab2b +0x08ca:  mov    %eax,%esi
0814ab2d +0x08cc:  mov    0x8(%ebp),%eax
0814ab30 +0x08cf:  mov    %eax,(%esp)
0814ab33 +0x08d2:  call   0814aca6 <+0xa45>
0814ab38 +0x08d7:  mov    %esi,%eax
0814ab3a +0x08d9:  mov    %ebx,%edx
0814ab3c +0x08db:  mov    %eax,(%esp)
0814ab3f +0x08de:  call   08ae3750 <_Unwind_Resume>
0814ab44 +0x08e3:  add    $0x10,%esp
0814ab47 +0x08e6:  pop    %ebx
0814ab48 +0x08e7:  pop    %esi
0814ab49 +0x08e8:  pop    %ebp
0814ab4a +0x08e9:  ret
0814ab4b +0x08ea:  nop
0814ab4c +0x08eb:  push   %ebp
0814ab4d +0x08ec:  mov    %esp,%ebp
0814ab4f +0x08ee:  push   %esi
0814ab50 +0x08ef:  push   %ebx
0814ab51 +0x08f0:  sub    $0x10,%esp
0814ab54 +0x08f3:  mov    0x8(%ebp),%eax
0814ab57 +0x08f6:  add    $0xc,%eax
0814ab5a +0x08f9:  mov    %eax,(%esp)
0814ab5d +0x08fc:  call   085508ec <_ZN10CLuckPointD1Ev>  ; CLuckPoint::~CLuckPoint()
0814ab62 +0x0901:  jmp    0814ab7f <+0x91e>
0814ab64 +0x0903:  mov    %edx,%ebx
0814ab66 +0x0905:  mov    %eax,%esi
0814ab68 +0x0907:  mov    0x8(%ebp),%eax
0814ab6b +0x090a:  mov    %eax,(%esp)
0814ab6e +0x090d:  call   0814aca6 <+0xa45>
0814ab73 +0x0912:  mov    %esi,%eax
0814ab75 +0x0914:  mov    %ebx,%edx
0814ab77 +0x0916:  mov    %eax,(%esp)
0814ab7a +0x0919:  call   08ae3750 <_Unwind_Resume>
0814ab7f +0x091e:  mov    0x8(%ebp),%eax
0814ab82 +0x0921:  mov    %eax,(%esp)
0814ab85 +0x0924:  call   0814aca6 <+0xa45>
0814ab8a +0x0929:  add    $0x10,%esp
0814ab8d +0x092c:  pop    %ebx
0814ab8e +0x092d:  pop    %esi
0814ab8f +0x092e:  pop    %ebp
0814ab90 +0x092f:  ret
0814ab91 +0x0930:  nop
0814ab92 +0x0931:  push   %ebp
0814ab93 +0x0932:  mov    %esp,%ebp
0814ab95 +0x0934:  sub    $0x18,%esp
0814ab98 +0x0937:  mov    0x8(%ebp),%eax
0814ab9b +0x093a:  mov    %eax,(%esp)
0814ab9e +0x093d:  call   0814ad92 <+0xb31>
0814aba3 +0x0942:  leave
0814aba4 +0x0943:  ret
0814aba5 +0x0944:  nop
0814aba6 +0x0945:  push   %ebp
0814aba7 +0x0946:  mov    %esp,%ebp
0814aba9 +0x0948:  sub    $0x18,%esp
0814abac +0x094b:  mov    0x8(%ebp),%eax
0814abaf +0x094e:  mov    %eax,(%esp)
0814abb2 +0x0951:  call   0814ada6 <+0xb45>
0814abb7 +0x0956:  leave
0814abb8 +0x0957:  ret
0814abb9 +0x0958:  nop
0814abba +0x0959:  push   %ebp
0814abbb +0x095a:  mov    %esp,%ebp
0814abbd +0x095c:  sub    $0x28,%esp
0814abc0 +0x095f:  lea    -0x10(%ebp),%eax
0814abc3 +0x0962:  mov    0x8(%ebp),%edx
0814abc6 +0x0965:  mov    %edx,0x4(%esp)
0814abca +0x0969:  mov    %eax,(%esp)
0814abcd +0x096c:  call   0814adfc <+0xb9b>
0814abd2 +0x0971:  sub    $0x4,%esp
0814abd5 +0x0974:  mov    -0x10(%ebp),%eax
0814abd8 +0x0977:  mov    -0xc(%ebp),%edx
0814abdb +0x097a:  mov    %eax,0x4(%esp)
0814abdf +0x097e:  mov    %edx,0x8(%esp)
0814abe3 +0x0982:  mov    0x8(%ebp),%eax
0814abe6 +0x0985:  mov    %eax,(%esp)
0814abe9 +0x0988:  call   0814ade8 <+0xb87>
0814abee +0x098d:  leave
0814abef +0x098e:  ret
0814abf0 +0x098f:  push   %ebp
0814abf1 +0x0990:  mov    %esp,%ebp
0814abf3 +0x0992:  push   %ebx
0814abf4 +0x0993:  sub    $0x44,%esp
0814abf7 +0x0996:  mov    0xc(%ebp),%eax
0814abfa +0x0999:  mov    %al,-0x2c(%ebp)
0814abfd +0x099c:  mov    0x8(%ebp),%eax
0814ac00 +0x099f:  mov    0x8(%eax),%edx
0814ac03 +0x09a2:  mov    0x8(%ebp),%eax
0814ac06 +0x09a5:  mov    0x10(%eax),%eax
0814ac09 +0x09a8:  cmp    %eax,%edx
0814ac0b +0x09aa:  je     0814ac57 <+0x9f6>
0814ac0d +0x09ac:  movzbl -0x2c(%ebp),%ebx
0814ac11 +0x09b0:  mov    0x8(%ebp),%eax
0814ac14 +0x09b3:  lea    0x8(%eax),%edx
0814ac17 +0x09b6:  lea    -0x18(%ebp),%eax
0814ac1a +0x09b9:  movl   $0x0,0x8(%esp)
0814ac22 +0x09c1:  mov    %edx,0x4(%esp)
0814ac26 +0x09c5:  mov    %eax,(%esp)
0814ac29 +0x09c8:  call   0814a4e4 <+0x283>
0814ac2e +0x09cd:  sub    $0x4,%esp
0814ac31 +0x09d0:  lea    -0x20(%ebp),%eax
0814ac34 +0x09d3:  lea    -0x18(%ebp),%edx
0814ac37 +0x09d6:  mov    %edx,0x4(%esp)
0814ac3b +0x09da:  mov    %eax,(%esp)
0814ac3e +0x09dd:  call   0814a496 <+0x235>
0814ac43 +0x09e2:  sub    $0x4,%esp
0814ac46 +0x09e5:  mov    %ebx,0x4(%esp)
0814ac4a +0x09e9:  lea    -0x20(%ebp),%eax
0814ac4d +0x09ec:  mov    %eax,(%esp)
0814ac50 +0x09ef:  call   0814a2ae <+0x4d>
0814ac55 +0x09f4:  jmp    0814ac8d <+0xa2c>
0814ac57 +0x09f6:  movzbl -0x2c(%ebp),%ebx
0814ac5b +0x09fa:  lea    -0x10(%ebp),%eax
0814ac5e +0x09fd:  mov    0x8(%ebp),%edx
0814ac61 +0x0a00:  mov    %edx,0x4(%esp)
0814ac65 +0x0a04:  mov    %eax,(%esp)
0814ac68 +0x0a07:  call   0814b08e <+0xe2d>
0814ac6d +0x0a0c:  sub    $0x4,%esp
0814ac70 +0x0a0f:  mov    %ebx,0xc(%esp)
0814ac74 +0x0a13:  mov    -0x10(%ebp),%eax
0814ac77 +0x0a16:  mov    -0xc(%ebp),%edx
0814ac7a +0x0a19:  mov    %eax,0x4(%esp)
0814ac7e +0x0a1d:  mov    %edx,0x8(%esp)
0814ac82 +0x0a21:  mov    0x8(%ebp),%eax
0814ac85 +0x0a24:  mov    %eax,(%esp)
0814ac88 +0x0a27:  call   0814ae16 <+0xbb5>
0814ac8d +0x0a2c:  mov    -0x4(%ebp),%ebx
0814ac90 +0x0a2f:  leave
0814ac91 +0x0a30:  ret
0814ac92 +0x0a31:  push   %ebp
0814ac93 +0x0a32:  mov    %esp,%ebp
0814ac95 +0x0a34:  sub    $0x18,%esp
0814ac98 +0x0a37:  mov    0x8(%ebp),%eax
0814ac9b +0x0a3a:  mov    %eax,(%esp)
0814ac9e +0x0a3d:  call   0814b0bc <+0xe5b>
0814aca3 +0x0a42:  leave
0814aca4 +0x0a43:  ret
0814aca5 +0x0a44:  nop
0814aca6 +0x0a45:  push   %ebp
0814aca7 +0x0a46:  mov    %esp,%ebp
0814aca9 +0x0a48:  push   %esi
0814acaa +0x0a49:  push   %ebx
0814acab +0x0a4a:  sub    $0x10,%esp
0814acae +0x0a4d:  mov    0x8(%ebp),%eax
0814acb1 +0x0a50:  mov    %eax,(%esp)
0814acb4 +0x0a53:  call   0814b13a <+0xed9>
0814acb9 +0x0a58:  mov    0x8(%ebp),%edx
0814acbc +0x0a5b:  mov    0x4(%edx),%ecx
0814acbf +0x0a5e:  mov    0x8(%ebp),%edx
0814acc2 +0x0a61:  mov    (%edx),%edx
0814acc4 +0x0a63:  mov    %eax,0x8(%esp)
0814acc8 +0x0a67:  mov    %ecx,0x4(%esp)
0814accc +0x0a6b:  mov    %edx,(%esp)
0814accf +0x0a6e:  call   0814b142 <+0xee1>
0814acd4 +0x0a73:  jmp    0814acf1 <+0xa90>
0814acd6 +0x0a75:  mov    %edx,%ebx
0814acd8 +0x0a77:  mov    %eax,%esi
0814acda +0x0a79:  mov    0x8(%ebp),%eax
0814acdd +0x0a7c:  mov    %eax,(%esp)
0814ace0 +0x0a7f:  call   0814b0d0 <+0xe6f>
0814ace5 +0x0a84:  mov    %esi,%eax
0814ace7 +0x0a86:  mov    %ebx,%edx
0814ace9 +0x0a88:  mov    %eax,(%esp)
0814acec +0x0a8b:  call   08ae3750 <_Unwind_Resume>
0814acf1 +0x0a90:  mov    0x8(%ebp),%eax
0814acf4 +0x0a93:  mov    %eax,(%esp)
0814acf7 +0x0a96:  call   0814b0d0 <+0xe6f>
0814acfc +0x0a9b:  add    $0x10,%esp
0814acff +0x0a9e:  pop    %ebx
0814ad00 +0x0a9f:  pop    %esi
0814ad01 +0x0aa0:  pop    %ebp
0814ad02 +0x0aa1:  ret
0814ad03 +0x0aa2:  nop
0814ad04 +0x0aa3:  push   %ebp
0814ad05 +0x0aa4:  mov    %esp,%ebp
0814ad07 +0x0aa6:  push   %ebx
0814ad08 +0x0aa7:  sub    $0x14,%esp
0814ad0b +0x0aaa:  mov    0x8(%ebp),%ebx
0814ad0e +0x0aad:  mov    0xc(%ebp),%eax
0814ad11 +0x0ab0:  mov    %eax,0x4(%esp)
0814ad15 +0x0ab4:  mov    %ebx,(%esp)
0814ad18 +0x0ab7:  call   0814b15c <+0xefb>
0814ad1d +0x0abc:  mov    %ebx,%eax
0814ad1f +0x0abe:  add    $0x14,%esp
0814ad22 +0x0ac1:  pop    %ebx
0814ad23 +0x0ac2:  pop    %ebp
0814ad24 +0x0ac3:  ret    $0x4
0814ad27 +0x0ac6:  nop
0814ad28 +0x0ac7:  push   %ebp
0814ad29 +0x0ac8:  mov    %esp,%ebp
0814ad2b +0x0aca:  mov    0x8(%ebp),%eax
0814ad2e +0x0acd:  mov    (%eax),%eax
0814ad30 +0x0acf:  pop    %ebp
0814ad31 +0x0ad0:  ret
0814ad32 +0x0ad1:  push   %ebp
0814ad33 +0x0ad2:  mov    %esp,%ebp
0814ad35 +0x0ad4:  sub    $0x28,%esp
0814ad38 +0x0ad7:  lea    -0x10(%ebp),%eax
0814ad3b +0x0ada:  mov    0x8(%ebp),%edx
0814ad3e +0x0add:  mov    %edx,0x4(%esp)
0814ad42 +0x0ae1:  mov    %eax,(%esp)
0814ad45 +0x0ae4:  call   0814b16c <+0xf0b>
0814ad4a +0x0ae9:  sub    $0x4,%esp
0814ad4d +0x0aec:  lea    -0xc(%ebp),%eax
0814ad50 +0x0aef:  mov    0x8(%ebp),%edx
0814ad53 +0x0af2:  mov    %edx,0x4(%esp)
0814ad57 +0x0af6:  mov    %eax,(%esp)
0814ad5a +0x0af9:  call   0814b198 <+0xf37>
0814ad5f +0x0afe:  sub    $0x4,%esp
0814ad62 +0x0b01:  lea    -0x10(%ebp),%eax
0814ad65 +0x0b04:  mov    %eax,0x4(%esp)
0814ad69 +0x0b08:  lea    -0xc(%ebp),%eax
0814ad6c +0x0b0b:  mov    %eax,(%esp)
0814ad6f +0x0b0e:  call   0814b1c3 <+0xf62>
0814ad74 +0x0b13:  leave
0814ad75 +0x0b14:  ret
0814ad76 +0x0b15:  push   %ebp
0814ad77 +0x0b16:  mov    %esp,%ebp
0814ad79 +0x0b18:  mov    0x8(%ebp),%eax
0814ad7c +0x0b1b:  pop    %ebp
0814ad7d +0x0b1c:  ret
0814ad7e +0x0b1d:  push   %ebp
0814ad7f +0x0b1e:  mov    %esp,%ebp
0814ad81 +0x0b20:  sub    $0x18,%esp
0814ad84 +0x0b23:  mov    0x8(%ebp),%eax
0814ad87 +0x0b26:  mov    %eax,(%esp)
0814ad8a +0x0b29:  call   080f5c9c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0xc4d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0xc4d
0814ad8f +0x0b2e:  leave
0814ad90 +0x0b2f:  ret
0814ad91 +0x0b30:  nop
0814ad92 +0x0b31:  push   %ebp
0814ad93 +0x0b32:  mov    %esp,%ebp
0814ad95 +0x0b34:  sub    $0x18,%esp
0814ad98 +0x0b37:  mov    0x8(%ebp),%eax
0814ad9b +0x0b3a:  mov    %eax,(%esp)
0814ad9e +0x0b3d:  call   0814b1f0 <+0xf8f>
0814ada3 +0x0b42:  leave
0814ada4 +0x0b43:  ret
0814ada5 +0x0b44:  nop
0814ada6 +0x0b45:  push   %ebp
0814ada7 +0x0b46:  mov    %esp,%ebp
0814ada9 +0x0b48:  push   %esi
0814adaa +0x0b49:  push   %ebx
0814adab +0x0b4a:  sub    $0x10,%esp
0814adae +0x0b4d:  mov    0x8(%ebp),%eax
0814adb1 +0x0b50:  mov    %eax,(%esp)
0814adb4 +0x0b53:  call   0814b226 <+0xfc5>
0814adb9 +0x0b58:  jmp    0814add6 <+0xb75>
0814adbb +0x0b5a:  mov    %edx,%ebx
0814adbd +0x0b5c:  mov    %eax,%esi
0814adbf +0x0b5e:  mov    0x8(%ebp),%eax
0814adc2 +0x0b61:  mov    %eax,(%esp)
0814adc5 +0x0b64:  call   0814ad7e <+0xb1d>
0814adca +0x0b69:  mov    %esi,%eax
0814adcc +0x0b6b:  mov    %ebx,%edx
0814adce +0x0b6d:  mov    %eax,(%esp)
0814add1 +0x0b70:  call   08ae3750 <_Unwind_Resume>
0814add6 +0x0b75:  mov    0x8(%ebp),%eax
0814add9 +0x0b78:  mov    %eax,(%esp)
0814addc +0x0b7b:  call   0814ad7e <+0xb1d>
0814ade1 +0x0b80:  add    $0x10,%esp
0814ade4 +0x0b83:  pop    %ebx
0814ade5 +0x0b84:  pop    %esi
0814ade6 +0x0b85:  pop    %ebp
0814ade7 +0x0b86:  ret
0814ade8 +0x0b87:  push   %ebp
0814ade9 +0x0b88:  mov    %esp,%ebp
0814adeb +0x0b8a:  mov    0x8(%ebp),%ecx
0814adee +0x0b8d:  mov    0xc(%ebp),%eax
0814adf1 +0x0b90:  mov    0x10(%ebp),%edx
0814adf4 +0x0b93:  mov    %eax,0x8(%ecx)
0814adf7 +0x0b96:  mov    %edx,0xc(%ecx)
0814adfa +0x0b99:  pop    %ebp
0814adfb +0x0b9a:  ret
0814adfc +0x0b9b:  push   %ebp
0814adfd +0x0b9c:  mov    %esp,%ebp
0814adff +0x0b9e:  mov    0x8(%ebp),%ecx
0814ae02 +0x0ba1:  mov    0xc(%ebp),%eax
0814ae05 +0x0ba4:  mov    0x4(%eax),%edx
0814ae08 +0x0ba7:  mov    (%eax),%eax
0814ae0a +0x0ba9:  mov    %eax,(%ecx)
0814ae0c +0x0bab:  mov    %edx,0x4(%ecx)
0814ae0f +0x0bae:  mov    %ecx,%eax
0814ae11 +0x0bb0:  pop    %ebp
0814ae12 +0x0bb1:  ret    $0x4
0814ae15 +0x0bb4:  nop
0814ae16 +0x0bb5:  push   %ebp
0814ae17 +0x0bb6:  mov    %esp,%ebp
0814ae19 +0x0bb8:  push   %ebx
0814ae1a +0x0bb9:  sub    $0xa4,%esp
0814ae20 +0x0bbf:  mov    0x14(%ebp),%eax
0814ae23 +0x0bc2:  mov    %al,-0x7c(%ebp)
0814ae26 +0x0bc5:  mov    0x8(%ebp),%eax
0814ae29 +0x0bc8:  mov    0x8(%eax),%edx
0814ae2c +0x0bcb:  mov    0x8(%ebp),%eax
0814ae2f +0x0bce:  mov    0x10(%eax),%eax
0814ae32 +0x0bd1:  cmp    %eax,%edx
0814ae34 +0x0bd3:  je     0814aed0 <+0xc6f>
0814ae3a +0x0bd9:  mov    0x8(%ebp),%eax
0814ae3d +0x0bdc:  lea    0x8(%eax),%edx
0814ae40 +0x0bdf:  lea    -0x60(%ebp),%eax
0814ae43 +0x0be2:  movl   $0x1,0x8(%esp)
0814ae4b +0x0bea:  mov    %edx,0x4(%esp)
0814ae4f +0x0bee:  mov    %eax,(%esp)
0814ae52 +0x0bf1:  call   0814a54e <+0x2ed>
0814ae57 +0x0bf6:  sub    $0x4,%esp
0814ae5a +0x0bf9:  lea    -0x68(%ebp),%ecx
0814ae5d +0x0bfc:  mov    -0x60(%ebp),%eax
0814ae60 +0x0bff:  mov    -0x5c(%ebp),%edx
0814ae63 +0x0c02:  mov    %eax,0x14(%esp)
0814ae67 +0x0c06:  mov    %edx,0x18(%esp)
0814ae6b +0x0c0a:  mov    0x8(%ebp),%eax
0814ae6e +0x0c0d:  mov    0xc(%eax),%edx
0814ae71 +0x0c10:  mov    0x8(%eax),%eax
0814ae74 +0x0c13:  mov    %eax,0xc(%esp)
0814ae78 +0x0c17:  mov    %edx,0x10(%esp)
0814ae7c +0x0c1b:  mov    0xc(%ebp),%eax
0814ae7f +0x0c1e:  mov    0x10(%ebp),%edx
0814ae82 +0x0c21:  mov    %eax,0x4(%esp)
0814ae86 +0x0c25:  mov    %edx,0x8(%esp)
0814ae8a +0x0c29:  mov    %ecx,(%esp)
0814ae8d +0x0c2c:  call   0814b267 <+0x1006>
0814ae92 +0x0c31:  sub    $0x4,%esp
0814ae95 +0x0c34:  movzbl -0x7c(%ebp),%ebx
0814ae99 +0x0c38:  lea    -0x58(%ebp),%eax
0814ae9c +0x0c3b:  lea    0xc(%ebp),%edx
0814ae9f +0x0c3e:  mov    %edx,0x4(%esp)
0814aea3 +0x0c42:  mov    %eax,(%esp)
0814aea6 +0x0c45:  call   0814a496 <+0x235>
0814aeab +0x0c4a:  sub    $0x4,%esp
0814aeae +0x0c4d:  mov    %ebx,0x4(%esp)
0814aeb2 +0x0c51:  lea    -0x58(%ebp),%eax
0814aeb5 +0x0c54:  mov    %eax,(%esp)
0814aeb8 +0x0c57:  call   0814a2ae <+0x4d>
0814aebd +0x0c5c:  mov    0x8(%ebp),%eax
0814aec0 +0x0c5f:  add    $0x8,%eax
0814aec3 +0x0c62:  mov    %eax,(%esp)
0814aec6 +0x0c65:  call   0814a4ce <+0x26d>
0814aecb +0x0c6a:  jmp    0814b089 <+0xe28>
0814aed0 +0x0c6f:  movl   $"vector<bool>::_M_insert_aux",0x8(%esp)
0814aed8 +0x0c77:  movl   $0x1,0x4(%esp)
0814aee0 +0x0c7f:  mov    0x8(%ebp),%eax
0814aee3 +0x0c82:  mov    %eax,(%esp)
0814aee6 +0x0c85:  call   0814b2e8 <+0x1087>
0814aeeb +0x0c8a:  mov    %eax,-0x10(%ebp)
0814aeee +0x0c8d:  mov    0x8(%ebp),%eax
0814aef1 +0x0c90:  mov    -0x10(%ebp),%edx
0814aef4 +0x0c93:  mov    %edx,0x4(%esp)
0814aef8 +0x0c97:  mov    %eax,(%esp)
0814aefb +0x0c9a:  call   0814b38e <+0x112d>
0814af00 +0x0c9f:  mov    %eax,-0xc(%ebp)
0814af03 +0x0ca2:  movl   $0x0,0x8(%esp)
0814af0b +0x0caa:  mov    -0xc(%ebp),%eax
0814af0e +0x0cad:  mov    %eax,0x4(%esp)
0814af12 +0x0cb1:  lea    -0x50(%ebp),%eax
0814af15 +0x0cb4:  mov    %eax,(%esp)
0814af18 +0x0cb7:  call   0814a474 <+0x213>
0814af1d +0x0cbc:  lea    0xc(%ebp),%eax
0814af20 +0x0cbf:  mov    %eax,0x4(%esp)
0814af24 +0x0cc3:  lea    -0x48(%ebp),%eax
0814af27 +0x0cc6:  mov    %eax,(%esp)
0814af2a +0x0cc9:  call   0814a5b8 <+0x357>
0814af2f +0x0cce:  lea    -0x38(%ebp),%eax
0814af32 +0x0cd1:  mov    0x8(%ebp),%edx
0814af35 +0x0cd4:  mov    %edx,0x4(%esp)
0814af39 +0x0cd8:  mov    %eax,(%esp)
0814af3c +0x0cdb:  call   0814adfc <+0xb9b>
0814af41 +0x0ce0:  sub    $0x4,%esp
0814af44 +0x0ce3:  lea    -0x38(%ebp),%eax
0814af47 +0x0ce6:  mov    %eax,0x4(%esp)
0814af4b +0x0cea:  lea    -0x40(%ebp),%eax
0814af4e +0x0ced:  mov    %eax,(%esp)
0814af51 +0x0cf0:  call   0814a5b8 <+0x357>
0814af56 +0x0cf5:  lea    -0x70(%ebp),%ecx
0814af59 +0x0cf8:  mov    -0x50(%ebp),%eax
0814af5c +0x0cfb:  mov    -0x4c(%ebp),%edx
0814af5f +0x0cfe:  mov    %eax,0x18(%esp)
0814af63 +0x0d02:  mov    %edx,0x1c(%esp)
0814af67 +0x0d06:  mov    -0x48(%ebp),%eax
0814af6a +0x0d09:  mov    -0x44(%ebp),%edx
0814af6d +0x0d0c:  mov    %eax,0x10(%esp)
0814af71 +0x0d10:  mov    %edx,0x14(%esp)
0814af75 +0x0d14:  mov    -0x40(%ebp),%eax
0814af78 +0x0d17:  mov    -0x3c(%ebp),%edx
0814af7b +0x0d1a:  mov    %eax,0x8(%esp)
0814af7f +0x0d1e:  mov    %edx,0xc(%esp)
0814af83 +0x0d22:  mov    0x8(%ebp),%eax
0814af86 +0x0d25:  mov    %eax,0x4(%esp)
0814af8a +0x0d29:  mov    %ecx,(%esp)
0814af8d +0x0d2c:  call   0814b3b8 <+0x1157>
0814af92 +0x0d31:  sub    $0x4,%esp
0814af95 +0x0d34:  movzbl -0x7c(%ebp),%ebx
0814af99 +0x0d38:  lea    -0x28(%ebp),%eax
0814af9c +0x0d3b:  movl   $0x0,0x8(%esp)
0814afa4 +0x0d43:  lea    -0x70(%ebp),%edx
0814afa7 +0x0d46:  mov    %edx,0x4(%esp)
0814afab +0x0d4a:  mov    %eax,(%esp)
0814afae +0x0d4d:  call   0814a4e4 <+0x283>
0814afb3 +0x0d52:  sub    $0x4,%esp
0814afb6 +0x0d55:  lea    -0x30(%ebp),%eax
0814afb9 +0x0d58:  lea    -0x28(%ebp),%edx
0814afbc +0x0d5b:  mov    %edx,0x4(%esp)
0814afc0 +0x0d5f:  mov    %eax,(%esp)
0814afc3 +0x0d62:  call   0814a496 <+0x235>
0814afc8 +0x0d67:  sub    $0x4,%esp
0814afcb +0x0d6a:  mov    %ebx,0x4(%esp)
0814afcf +0x0d6e:  lea    -0x30(%ebp),%eax
0814afd2 +0x0d71:  mov    %eax,(%esp)
0814afd5 +0x0d74:  call   0814a2ae <+0x4d>
0814afda +0x0d79:  lea    -0x20(%ebp),%eax
0814afdd +0x0d7c:  mov    0x8(%ebp),%edx
0814afe0 +0x0d7f:  mov    %edx,0x4(%esp)
0814afe4 +0x0d83:  mov    %eax,(%esp)
0814afe7 +0x0d86:  call   0814b08e <+0xe2d>
0814afec +0x0d8b:  sub    $0x4,%esp
0814afef +0x0d8e:  mov    0x8(%ebp),%ebx
0814aff2 +0x0d91:  lea    -0x88(%ebp),%ecx
0814aff8 +0x0d97:  mov    -0x70(%ebp),%eax
0814affb +0x0d9a:  mov    -0x6c(%ebp),%edx
0814affe +0x0d9d:  mov    %eax,0x14(%esp)
0814b002 +0x0da1:  mov    %edx,0x18(%esp)
0814b006 +0x0da5:  mov    -0x20(%ebp),%eax
0814b009 +0x0da8:  mov    -0x1c(%ebp),%edx
0814b00c +0x0dab:  mov    %eax,0xc(%esp)
0814b010 +0x0daf:  mov    %edx,0x10(%esp)
0814b014 +0x0db3:  mov    0xc(%ebp),%eax
0814b017 +0x0db6:  mov    0x10(%ebp),%edx
0814b01a +0x0db9:  mov    %eax,0x4(%esp)
0814b01e +0x0dbd:  mov    %edx,0x8(%esp)
0814b022 +0x0dc1:  mov    %ecx,(%esp)
0814b025 +0x0dc4:  call   0814b450 <+0x11ef>
0814b02a +0x0dc9:  sub    $0x4,%esp
0814b02d +0x0dcc:  mov    -0x88(%ebp),%eax
0814b033 +0x0dd2:  mov    -0x84(%ebp),%edx
0814b039 +0x0dd8:  mov    %eax,0x8(%ebx)
0814b03c +0x0ddb:  mov    %edx,0xc(%ebx)
0814b03f +0x0dde:  mov    0x8(%ebp),%eax
0814b042 +0x0de1:  mov    %eax,(%esp)
0814b045 +0x0de4:  call   0814b226 <+0xfc5>
0814b04a +0x0de9:  mov    -0x10(%ebp),%eax
0814b04d +0x0dec:  add    $0x1f,%eax
0814b050 +0x0def:  shr    $0x5,%eax
0814b053 +0x0df2:  shl    $0x2,%eax
0814b056 +0x0df5:  mov    %eax,%edx
0814b058 +0x0df7:  add    -0xc(%ebp),%edx
0814b05b +0x0dfa:  mov    0x8(%ebp),%eax
0814b05e +0x0dfd:  mov    %edx,0x10(%eax)
0814b061 +0x0e00:  movl   $0x0,0x8(%esp)
0814b069 +0x0e08:  mov    -0xc(%ebp),%eax
0814b06c +0x0e0b:  mov    %eax,0x4(%esp)
0814b070 +0x0e0f:  lea    -0x18(%ebp),%eax
0814b073 +0x0e12:  mov    %eax,(%esp)
0814b076 +0x0e15:  call   0814a474 <+0x213>
0814b07b +0x0e1a:  mov    0x8(%ebp),%ecx
0814b07e +0x0e1d:  mov    -0x18(%ebp),%eax
0814b081 +0x0e20:  mov    -0x14(%ebp),%edx
0814b084 +0x0e23:  mov    %eax,(%ecx)
0814b086 +0x0e25:  mov    %edx,0x4(%ecx)
0814b089 +0x0e28:  mov    -0x4(%ebp),%ebx
0814b08c +0x0e2b:  leave
0814b08d +0x0e2c:  ret
0814b08e +0x0e2d:  push   %ebp
0814b08f +0x0e2e:  mov    %esp,%ebp
0814b091 +0x0e30:  mov    0x8(%ebp),%ecx
0814b094 +0x0e33:  mov    0xc(%ebp),%eax
0814b097 +0x0e36:  mov    0xc(%eax),%edx
0814b09a +0x0e39:  mov    0x8(%eax),%eax
0814b09d +0x0e3c:  mov    %eax,(%ecx)
0814b09f +0x0e3e:  mov    %edx,0x4(%ecx)
0814b0a2 +0x0e41:  mov    %ecx,%eax
0814b0a4 +0x0e43:  pop    %ebp
0814b0a5 +0x0e44:  ret    $0x4
0814b0a8 +0x0e47:  push   %ebp
0814b0a9 +0x0e48:  mov    %esp,%ebp
0814b0ab +0x0e4a:  sub    $0x18,%esp
0814b0ae +0x0e4d:  mov    0x8(%ebp),%eax
0814b0b1 +0x0e50:  mov    %eax,(%esp)
0814b0b4 +0x0e53:  call   0814b500 <+0x129f>
0814b0b9 +0x0e58:  leave
0814b0ba +0x0e59:  ret
0814b0bb +0x0e5a:  nop
0814b0bc +0x0e5b:  push   %ebp
0814b0bd +0x0e5c:  mov    %esp,%ebp
0814b0bf +0x0e5e:  sub    $0x18,%esp
0814b0c2 +0x0e61:  mov    0x8(%ebp),%eax
0814b0c5 +0x0e64:  mov    %eax,(%esp)
0814b0c8 +0x0e67:  call   0814b4d0 <+0x126f>
0814b0cd +0x0e6c:  leave
0814b0ce +0x0e6d:  ret
0814b0cf +0x0e6e:  nop
0814b0d0 +0x0e6f:  push   %ebp
0814b0d1 +0x0e70:  mov    %esp,%ebp
0814b0d3 +0x0e72:  push   %esi
0814b0d4 +0x0e73:  push   %ebx
0814b0d5 +0x0e74:  sub    $0x10,%esp
0814b0d8 +0x0e77:  mov    0x8(%ebp),%eax
0814b0db +0x0e7a:  mov    0x8(%eax),%eax
0814b0de +0x0e7d:  mov    %eax,%edx
0814b0e0 +0x0e7f:  mov    0x8(%ebp),%eax
0814b0e3 +0x0e82:  mov    (%eax),%eax
0814b0e5 +0x0e84:  mov    %edx,%ecx
0814b0e7 +0x0e86:  sub    %eax,%ecx
0814b0e9 +0x0e88:  mov    %ecx,%eax
0814b0eb +0x0e8a:  imul   $0xc10c9715,%eax,%eax
0814b0f1 +0x0e90:  mov    %eax,%edx
0814b0f3 +0x0e92:  mov    0x8(%ebp),%eax
0814b0f6 +0x0e95:  mov    (%eax),%eax
0814b0f8 +0x0e97:  mov    %edx,0x8(%esp)
0814b0fc +0x0e9b:  mov    %eax,0x4(%esp)
0814b100 +0x0e9f:  mov    0x8(%ebp),%eax
0814b103 +0x0ea2:  mov    %eax,(%esp)
0814b106 +0x0ea5:  call   0814b514 <+0x12b3>
0814b10b +0x0eaa:  jmp    0814b128 <+0xec7>
0814b10d +0x0eac:  mov    %edx,%ebx
0814b10f +0x0eae:  mov    %eax,%esi
0814b111 +0x0eb0:  mov    0x8(%ebp),%eax
0814b114 +0x0eb3:  mov    %eax,(%esp)
0814b117 +0x0eb6:  call   0814b0a8 <+0xe47>
0814b11c +0x0ebb:  mov    %esi,%eax
0814b11e +0x0ebd:  mov    %ebx,%edx
0814b120 +0x0ebf:  mov    %eax,(%esp)
0814b123 +0x0ec2:  call   08ae3750 <_Unwind_Resume>
0814b128 +0x0ec7:  mov    0x8(%ebp),%eax
0814b12b +0x0eca:  mov    %eax,(%esp)
0814b12e +0x0ecd:  call   0814b0a8 <+0xe47>
0814b133 +0x0ed2:  add    $0x10,%esp
0814b136 +0x0ed5:  pop    %ebx
0814b137 +0x0ed6:  pop    %esi
0814b138 +0x0ed7:  pop    %ebp
0814b139 +0x0ed8:  ret
0814b13a +0x0ed9:  push   %ebp
0814b13b +0x0eda:  mov    %esp,%ebp
0814b13d +0x0edc:  mov    0x8(%ebp),%eax
0814b140 +0x0edf:  pop    %ebp
0814b141 +0x0ee0:  ret
0814b142 +0x0ee1:  push   %ebp
0814b143 +0x0ee2:  mov    %esp,%ebp
0814b145 +0x0ee4:  sub    $0x18,%esp
0814b148 +0x0ee7:  mov    0xc(%ebp),%eax
0814b14b +0x0eea:  mov    %eax,0x4(%esp)
0814b14f +0x0eee:  mov    0x8(%ebp),%eax
0814b152 +0x0ef1:  mov    %eax,(%esp)
0814b155 +0x0ef4:  call   0814b53b <+0x12da>
0814b15a +0x0ef9:  leave
0814b15b +0x0efa:  ret
0814b15c +0x0efb:  push   %ebp
0814b15d +0x0efc:  mov    %esp,%ebp
0814b15f +0x0efe:  mov    0xc(%ebp),%eax
0814b162 +0x0f01:  mov    (%eax),%edx
0814b164 +0x0f03:  mov    0x8(%ebp),%eax
0814b167 +0x0f06:  mov    %edx,(%eax)
0814b169 +0x0f08:  pop    %ebp
0814b16a +0x0f09:  ret
0814b16b +0x0f0a:  nop
0814b16c +0x0f0b:  push   %ebp
0814b16d +0x0f0c:  mov    %esp,%ebp
0814b16f +0x0f0e:  push   %ebx
0814b170 +0x0f0f:  sub    $0x24,%esp
0814b173 +0x0f12:  mov    0x8(%ebp),%ebx
0814b176 +0x0f15:  mov    0xc(%ebp),%eax
0814b179 +0x0f18:  mov    0x4(%eax),%eax
0814b17c +0x0f1b:  mov    %eax,-0xc(%ebp)
0814b17f +0x0f1e:  lea    -0xc(%ebp),%eax
0814b182 +0x0f21:  mov    %eax,0x4(%esp)
0814b186 +0x0f25:  mov    %ebx,(%esp)
0814b189 +0x0f28:  call   0814b556 <+0x12f5>
0814b18e +0x0f2d:  mov    %ebx,%eax
0814b190 +0x0f2f:  add    $0x24,%esp
0814b193 +0x0f32:  pop    %ebx
0814b194 +0x0f33:  pop    %ebp
0814b195 +0x0f34:  ret    $0x4
0814b198 +0x0f37:  push   %ebp
0814b199 +0x0f38:  mov    %esp,%ebp
0814b19b +0x0f3a:  push   %ebx
0814b19c +0x0f3b:  sub    $0x24,%esp
0814b19f +0x0f3e:  mov    0x8(%ebp),%ebx
0814b1a2 +0x0f41:  mov    0xc(%ebp),%eax
0814b1a5 +0x0f44:  mov    (%eax),%eax
0814b1a7 +0x0f46:  mov    %eax,-0xc(%ebp)
0814b1aa +0x0f49:  lea    -0xc(%ebp),%eax
0814b1ad +0x0f4c:  mov    %eax,0x4(%esp)
0814b1b1 +0x0f50:  mov    %ebx,(%esp)
0814b1b4 +0x0f53:  call   0814b556 <+0x12f5>
0814b1b9 +0x0f58:  mov    %ebx,%eax
0814b1bb +0x0f5a:  add    $0x24,%esp
0814b1be +0x0f5d:  pop    %ebx
0814b1bf +0x0f5e:  pop    %ebp
0814b1c0 +0x0f5f:  ret    $0x4
0814b1c3 +0x0f62:  push   %ebp
0814b1c4 +0x0f63:  mov    %esp,%ebp
0814b1c6 +0x0f65:  push   %ebx
0814b1c7 +0x0f66:  sub    $0x14,%esp
0814b1ca +0x0f69:  mov    0x8(%ebp),%eax
0814b1cd +0x0f6c:  mov    %eax,(%esp)
0814b1d0 +0x0f6f:  call   0814b566 <+0x1305>
0814b1d5 +0x0f74:  mov    (%eax),%ebx
0814b1d7 +0x0f76:  mov    0xc(%ebp),%eax
0814b1da +0x0f79:  mov    %eax,(%esp)
0814b1dd +0x0f7c:  call   0814b566 <+0x1305>
0814b1e2 +0x0f81:  mov    (%eax),%eax
0814b1e4 +0x0f83:  cmp    %eax,%ebx
0814b1e6 +0x0f85:  sete   %al
0814b1e9 +0x0f88:  add    $0x14,%esp
0814b1ec +0x0f8b:  pop    %ebx
0814b1ed +0x0f8c:  pop    %ebp
0814b1ee +0x0f8d:  ret
0814b1ef +0x0f8e:  nop
0814b1f0 +0x0f8f:  push   %ebp
0814b1f1 +0x0f90:  mov    %esp,%ebp
0814b1f3 +0x0f92:  sub    $0x18,%esp
0814b1f6 +0x0f95:  mov    0x8(%ebp),%eax
0814b1f9 +0x0f98:  mov    %eax,(%esp)
0814b1fc +0x0f9b:  call   080f603e <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0xfef>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0xfef
0814b201 +0x0fa0:  mov    0x8(%ebp),%eax
0814b204 +0x0fa3:  mov    %eax,(%esp)
0814b207 +0x0fa6:  call   0814a450 <+0x1ef>
0814b20c +0x0fab:  mov    0x8(%ebp),%eax
0814b20f +0x0fae:  add    $0x8,%eax
0814b212 +0x0fb1:  mov    %eax,(%esp)
0814b215 +0x0fb4:  call   0814a450 <+0x1ef>
0814b21a +0x0fb9:  mov    0x8(%ebp),%eax
0814b21d +0x0fbc:  movl   $0x0,0x10(%eax)
0814b224 +0x0fc3:  leave
0814b225 +0x0fc4:  ret
0814b226 +0x0fc5:  push   %ebp
0814b227 +0x0fc6:  mov    %esp,%ebp
0814b229 +0x0fc8:  sub    $0x18,%esp
0814b22c +0x0fcb:  mov    0x8(%ebp),%eax
0814b22f +0x0fce:  mov    (%eax),%eax
0814b231 +0x0fd0:  test   %eax,%eax
0814b233 +0x0fd2:  je     0814b265 <+0x1004>
0814b235 +0x0fd4:  mov    0x8(%ebp),%eax
0814b238 +0x0fd7:  mov    0x10(%eax),%eax
0814b23b +0x0fda:  mov    %eax,%edx
0814b23d +0x0fdc:  mov    0x8(%ebp),%eax
0814b240 +0x0fdf:  mov    (%eax),%eax
0814b242 +0x0fe1:  mov    %edx,%ecx
0814b244 +0x0fe3:  sub    %eax,%ecx
0814b246 +0x0fe5:  mov    %ecx,%eax
0814b248 +0x0fe7:  sar    $0x2,%eax
0814b24b +0x0fea:  mov    %eax,%ecx
0814b24d +0x0fec:  mov    0x8(%ebp),%eax
0814b250 +0x0fef:  mov    (%eax),%edx
0814b252 +0x0ff1:  mov    0x8(%ebp),%eax
0814b255 +0x0ff4:  mov    %ecx,0x8(%esp)
0814b259 +0x0ff8:  mov    %edx,0x4(%esp)
0814b25d +0x0ffc:  mov    %eax,(%esp)
0814b260 +0x0fff:  call   080f6058 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1009>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1009
0814b265 +0x1004:  leave
0814b266 +0x1005:  ret
0814b267 +0x1006:  push   %ebp
0814b268 +0x1007:  mov    %esp,%ebp
0814b26a +0x1009:  push   %ebx
0814b26b +0x100a:  sub    $0x34,%esp
0814b26e +0x100d:  mov    0x8(%ebp),%ebx
0814b271 +0x1010:  lea    -0x18(%ebp),%ecx
0814b274 +0x1013:  mov    0x14(%ebp),%eax
0814b277 +0x1016:  mov    0x18(%ebp),%edx
0814b27a +0x1019:  mov    %eax,0x4(%esp)
0814b27e +0x101d:  mov    %edx,0x8(%esp)
0814b282 +0x1021:  mov    %ecx,(%esp)
0814b285 +0x1024:  call   0814b56e <+0x130d>
0814b28a +0x1029:  sub    $0x4,%esp
0814b28d +0x102c:  lea    -0x10(%ebp),%ecx
0814b290 +0x102f:  mov    0xc(%ebp),%eax
0814b293 +0x1032:  mov    0x10(%ebp),%edx
0814b296 +0x1035:  mov    %eax,0x4(%esp)
0814b29a +0x1039:  mov    %edx,0x8(%esp)
0814b29e +0x103d:  mov    %ecx,(%esp)
0814b2a1 +0x1040:  call   0814b56e <+0x130d>
0814b2a6 +0x1045:  sub    $0x4,%esp
0814b2a9 +0x1048:  mov    0x1c(%ebp),%eax
0814b2ac +0x104b:  mov    0x20(%ebp),%edx
0814b2af +0x104e:  mov    %eax,0x14(%esp)
0814b2b3 +0x1052:  mov    %edx,0x18(%esp)
0814b2b7 +0x1056:  mov    -0x18(%ebp),%eax
0814b2ba +0x1059:  mov    -0x14(%ebp),%edx
0814b2bd +0x105c:  mov    %eax,0xc(%esp)
0814b2c1 +0x1060:  mov    %edx,0x10(%esp)
0814b2c5 +0x1064:  mov    -0x10(%ebp),%eax
0814b2c8 +0x1067:  mov    -0xc(%ebp),%edx
0814b2cb +0x106a:  mov    %eax,0x4(%esp)
0814b2cf +0x106e:  mov    %edx,0x8(%esp)
0814b2d3 +0x1072:  mov    %ebx,(%esp)
0814b2d6 +0x1075:  call   0814b585 <+0x1324>
0814b2db +0x107a:  sub    $0x4,%esp
0814b2de +0x107d:  mov    %ebx,%eax
0814b2e0 +0x107f:  mov    -0x4(%ebp),%ebx
0814b2e3 +0x1082:  leave
0814b2e4 +0x1083:  ret    $0x4
0814b2e7 +0x1086:  nop
0814b2e8 +0x1087:  push   %ebp
0814b2e9 +0x1088:  mov    %esp,%ebp
0814b2eb +0x108a:  push   %ebx
0814b2ec +0x108b:  sub    $0x24,%esp
0814b2ef +0x108e:  mov    0x8(%ebp),%eax
0814b2f2 +0x1091:  mov    %eax,(%esp)
0814b2f5 +0x1094:  call   0814b666 <+0x1405>
0814b2fa +0x1099:  mov    %eax,%ebx
0814b2fc +0x109b:  mov    0x8(%ebp),%eax
0814b2ff +0x109e:  mov    %eax,(%esp)
0814b302 +0x10a1:  call   0814b622 <+0x13c1>
0814b307 +0x10a6:  mov    %ebx,%edx
0814b309 +0x10a8:  sub    %eax,%edx
0814b30b +0x10aa:  mov    0xc(%ebp),%eax
0814b30e +0x10ad:  cmp    %eax,%edx
0814b310 +0x10af:  setb   %al
0814b313 +0x10b2:  test   %al,%al
0814b315 +0x10b4:  je     0814b322 <+0x10c1>
0814b317 +0x10b6:  mov    0x10(%ebp),%eax
0814b31a +0x10b9:  mov    %eax,(%esp)
0814b31d +0x10bc:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0814b322 +0x10c1:  mov    0x8(%ebp),%eax
0814b325 +0x10c4:  mov    %eax,(%esp)
0814b328 +0x10c7:  call   0814b622 <+0x13c1>
0814b32d +0x10cc:  mov    %eax,%ebx
0814b32f +0x10ce:  mov    0x8(%ebp),%eax
0814b332 +0x10d1:  mov    %eax,(%esp)
0814b335 +0x10d4:  call   0814b622 <+0x13c1>
0814b33a +0x10d9:  mov    %eax,-0x10(%ebp)
0814b33d +0x10dc:  lea    0xc(%ebp),%eax
0814b340 +0x10df:  mov    %eax,0x4(%esp)
0814b344 +0x10e3:  lea    -0x10(%ebp),%eax
0814b347 +0x10e6:  mov    %eax,(%esp)
0814b34a +0x10e9:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0814b34f +0x10ee:  mov    (%eax),%eax
0814b351 +0x10f0:  lea    (%ebx,%eax,1),%eax
0814b354 +0x10f3:  mov    %eax,-0xc(%ebp)
0814b357 +0x10f6:  mov    0x8(%ebp),%eax
0814b35a +0x10f9:  mov    %eax,(%esp)
0814b35d +0x10fc:  call   0814b622 <+0x13c1>
0814b362 +0x1101:  cmp    -0xc(%ebp),%eax
0814b365 +0x1104:  ja     0814b377 <+0x1116>
0814b367 +0x1106:  mov    0x8(%ebp),%eax
0814b36a +0x1109:  mov    %eax,(%esp)
0814b36d +0x110c:  call   0814b666 <+0x1405>
0814b372 +0x1111:  cmp    -0xc(%ebp),%eax
0814b375 +0x1114:  jae    0814b384 <+0x1123>
0814b377 +0x1116:  mov    0x8(%ebp),%eax
0814b37a +0x1119:  mov    %eax,(%esp)
0814b37d +0x111c:  call   0814b666 <+0x1405>
0814b382 +0x1121:  jmp    0814b387 <+0x1126>
0814b384 +0x1123:  mov    -0xc(%ebp),%eax
0814b387 +0x1126:  add    $0x24,%esp
0814b38a +0x1129:  pop    %ebx
0814b38b +0x112a:  pop    %ebp
0814b38c +0x112b:  ret
0814b38d +0x112c:  nop
0814b38e +0x112d:  push   %ebp
0814b38f +0x112e:  mov    %esp,%ebp
0814b391 +0x1130:  sub    $0x18,%esp
0814b394 +0x1133:  mov    0xc(%ebp),%eax
0814b397 +0x1136:  add    $0x1f,%eax
0814b39a +0x1139:  mov    %eax,%edx
0814b39c +0x113b:  shr    $0x5,%edx
0814b39f +0x113e:  mov    0x8(%ebp),%eax
0814b3a2 +0x1141:  movl   $0x0,0x8(%esp)
0814b3aa +0x1149:  mov    %edx,0x4(%esp)
0814b3ae +0x114d:  mov    %eax,(%esp)
0814b3b1 +0x1150:  call   0814b6a2 <+0x1441>
0814b3b6 +0x1155:  leave
0814b3b7 +0x1156:  ret
0814b3b8 +0x1157:  push   %ebp
0814b3b9 +0x1158:  mov    %esp,%ebp
0814b3bb +0x115a:  push   %ebx
0814b3bc +0x115b:  sub    $0x44,%esp
0814b3bf +0x115e:  mov    0x8(%ebp),%ebx
0814b3c2 +0x1161:  mov    0x20(%ebp),%ecx
0814b3c5 +0x1164:  mov    0x18(%ebp),%edx
0814b3c8 +0x1167:  mov    0x10(%ebp),%eax
0814b3cb +0x116a:  mov    %ecx,0x8(%esp)
0814b3cf +0x116e:  mov    %edx,0x4(%esp)
0814b3d3 +0x1172:  mov    %eax,(%esp)
0814b3d6 +0x1175:  call   0814b6da <+0x1479>
0814b3db +0x117a:  mov    %eax,-0xc(%ebp)
0814b3de +0x117d:  movl   $0x0,0x8(%esp)
0814b3e6 +0x1185:  mov    -0xc(%ebp),%eax
0814b3e9 +0x1188:  mov    %eax,0x4(%esp)
0814b3ed +0x118c:  lea    -0x1c(%ebp),%eax
0814b3f0 +0x118f:  mov    %eax,(%esp)
0814b3f3 +0x1192:  call   0814a474 <+0x213>
0814b3f8 +0x1197:  mov    0x18(%ebp),%eax
0814b3fb +0x119a:  movl   $0x0,0x8(%esp)
0814b403 +0x11a2:  mov    %eax,0x4(%esp)
0814b407 +0x11a6:  lea    -0x14(%ebp),%eax
0814b40a +0x11a9:  mov    %eax,(%esp)
0814b40d +0x11ac:  call   0814a596 <+0x335>
0814b412 +0x11b1:  mov    -0x1c(%ebp),%eax
0814b415 +0x11b4:  mov    -0x18(%ebp),%edx
0814b418 +0x11b7:  mov    %eax,0x14(%esp)
0814b41c +0x11bb:  mov    %edx,0x18(%esp)
0814b420 +0x11bf:  mov    0x18(%ebp),%eax
0814b423 +0x11c2:  mov    0x1c(%ebp),%edx
0814b426 +0x11c5:  mov    %eax,0xc(%esp)
0814b42a +0x11c9:  mov    %edx,0x10(%esp)
0814b42e +0x11cd:  mov    -0x14(%ebp),%eax
0814b431 +0x11d0:  mov    -0x10(%ebp),%edx
0814b434 +0x11d3:  mov    %eax,0x4(%esp)
0814b438 +0x11d7:  mov    %edx,0x8(%esp)
0814b43c +0x11db:  mov    %ebx,(%esp)
0814b43f +0x11de:  call   0814b712 <+0x14b1>
0814b444 +0x11e3:  sub    $0x4,%esp
0814b447 +0x11e6:  mov    %ebx,%eax
0814b449 +0x11e8:  mov    -0x4(%ebp),%ebx
0814b44c +0x11eb:  leave
0814b44d +0x11ec:  ret    $0x4
0814b450 +0x11ef:  push   %ebp
0814b451 +0x11f0:  mov    %esp,%ebp
0814b453 +0x11f2:  push   %ebx
0814b454 +0x11f3:  sub    $0x34,%esp
0814b457 +0x11f6:  mov    0x8(%ebp),%ebx
0814b45a +0x11f9:  lea    -0x18(%ebp),%ecx
0814b45d +0x11fc:  mov    0x14(%ebp),%eax
0814b460 +0x11ff:  mov    0x18(%ebp),%edx
0814b463 +0x1202:  mov    %eax,0x4(%esp)
0814b467 +0x1206:  mov    %edx,0x8(%esp)
0814b46b +0x120a:  mov    %ecx,(%esp)
0814b46e +0x120d:  call   0814b56e <+0x130d>
0814b473 +0x1212:  sub    $0x4,%esp
0814b476 +0x1215:  lea    -0x10(%ebp),%ecx
0814b479 +0x1218:  mov    0xc(%ebp),%eax
0814b47c +0x121b:  mov    0x10(%ebp),%edx
0814b47f +0x121e:  mov    %eax,0x4(%esp)
0814b483 +0x1222:  mov    %edx,0x8(%esp)
0814b487 +0x1226:  mov    %ecx,(%esp)
0814b48a +0x1229:  call   0814b56e <+0x130d>
0814b48f +0x122e:  sub    $0x4,%esp
0814b492 +0x1231:  mov    0x1c(%ebp),%eax
0814b495 +0x1234:  mov    0x20(%ebp),%edx
0814b498 +0x1237:  mov    %eax,0x14(%esp)
0814b49c +0x123b:  mov    %edx,0x18(%esp)
0814b4a0 +0x123f:  mov    -0x18(%ebp),%eax
0814b4a3 +0x1242:  mov    -0x14(%ebp),%edx
0814b4a6 +0x1245:  mov    %eax,0xc(%esp)
0814b4aa +0x1249:  mov    %edx,0x10(%esp)
0814b4ae +0x124d:  mov    -0x10(%ebp),%eax
0814b4b1 +0x1250:  mov    -0xc(%ebp),%edx
0814b4b4 +0x1253:  mov    %eax,0x4(%esp)
0814b4b8 +0x1257:  mov    %edx,0x8(%esp)
0814b4bc +0x125b:  mov    %ebx,(%esp)
0814b4bf +0x125e:  call   0814b792 <+0x1531>
0814b4c4 +0x1263:  sub    $0x4,%esp
0814b4c7 +0x1266:  mov    %ebx,%eax
0814b4c9 +0x1268:  mov    -0x4(%ebp),%ebx
0814b4cc +0x126b:  leave
0814b4cd +0x126c:  ret    $0x4
0814b4d0 +0x126f:  push   %ebp
0814b4d1 +0x1270:  mov    %esp,%ebp
0814b4d3 +0x1272:  sub    $0x18,%esp
0814b4d6 +0x1275:  mov    0x8(%ebp),%eax
0814b4d9 +0x1278:  mov    %eax,(%esp)
0814b4dc +0x127b:  call   0814b82e <+0x15cd>
0814b4e1 +0x1280:  mov    0x8(%ebp),%eax
0814b4e4 +0x1283:  movl   $0x0,(%eax)
0814b4ea +0x1289:  mov    0x8(%ebp),%eax
0814b4ed +0x128c:  movl   $0x0,0x4(%eax)
0814b4f4 +0x1293:  mov    0x8(%ebp),%eax
0814b4f7 +0x1296:  movl   $0x0,0x8(%eax)
0814b4fe +0x129d:  leave
0814b4ff +0x129e:  ret
0814b500 +0x129f:  push   %ebp
0814b501 +0x12a0:  mov    %esp,%ebp
0814b503 +0x12a2:  sub    $0x18,%esp
0814b506 +0x12a5:  mov    0x8(%ebp),%eax
0814b509 +0x12a8:  mov    %eax,(%esp)
0814b50c +0x12ab:  call   0814b842 <+0x15e1>
0814b511 +0x12b0:  leave
0814b512 +0x12b1:  ret
0814b513 +0x12b2:  nop
0814b514 +0x12b3:  push   %ebp
0814b515 +0x12b4:  mov    %esp,%ebp
0814b517 +0x12b6:  sub    $0x18,%esp
0814b51a +0x12b9:  cmpl   $0x0,0xc(%ebp)
0814b51e +0x12bd:  je     0814b539 <+0x12d8>
0814b520 +0x12bf:  mov    0x8(%ebp),%eax
0814b523 +0x12c2:  mov    0x10(%ebp),%edx
0814b526 +0x12c5:  mov    %edx,0x8(%esp)
0814b52a +0x12c9:  mov    0xc(%ebp),%edx
0814b52d +0x12cc:  mov    %edx,0x4(%esp)
0814b531 +0x12d0:  mov    %eax,(%esp)
0814b534 +0x12d3:  call   0814b848 <+0x15e7>
0814b539 +0x12d8:  leave
0814b53a +0x12d9:  ret
0814b53b +0x12da:  push   %ebp
0814b53c +0x12db:  mov    %esp,%ebp
0814b53e +0x12dd:  sub    $0x18,%esp
0814b541 +0x12e0:  mov    0xc(%ebp),%eax
0814b544 +0x12e3:  mov    %eax,0x4(%esp)
0814b548 +0x12e7:  mov    0x8(%ebp),%eax
0814b54b +0x12ea:  mov    %eax,(%esp)
0814b54e +0x12ed:  call   0814b85b <+0x15fa>
0814b553 +0x12f2:  leave
0814b554 +0x12f3:  ret
0814b555 +0x12f4:  nop
0814b556 +0x12f5:  push   %ebp
0814b557 +0x12f6:  mov    %esp,%ebp
0814b559 +0x12f8:  mov    0xc(%ebp),%eax
0814b55c +0x12fb:  mov    (%eax),%edx
0814b55e +0x12fd:  mov    0x8(%ebp),%eax
0814b561 +0x1300:  mov    %edx,(%eax)
0814b563 +0x1302:  pop    %ebp
0814b564 +0x1303:  ret
0814b565 +0x1304:  nop
0814b566 +0x1305:  push   %ebp
0814b567 +0x1306:  mov    %esp,%ebp
0814b569 +0x1308:  mov    0x8(%ebp),%eax
0814b56c +0x130b:  pop    %ebp
0814b56d +0x130c:  ret
0814b56e +0x130d:  push   %ebp
0814b56f +0x130e:  mov    %esp,%ebp
0814b571 +0x1310:  mov    0x8(%ebp),%ecx
0814b574 +0x1313:  mov    0xc(%ebp),%eax
0814b577 +0x1316:  mov    0x10(%ebp),%edx
0814b57a +0x1319:  mov    %eax,(%ecx)
0814b57c +0x131b:  mov    %edx,0x4(%ecx)
0814b57f +0x131e:  mov    %ecx,%eax
0814b581 +0x1320:  pop    %ebp
0814b582 +0x1321:  ret    $0x4
0814b585 +0x1324:  push   %ebp
0814b586 +0x1325:  mov    %esp,%ebp
0814b588 +0x1327:  push   %ebx
0814b589 +0x1328:  sub    $0x44,%esp
0814b58c +0x132b:  mov    0x8(%ebp),%ebx
0814b58f +0x132e:  lea    -0x20(%ebp),%ecx
0814b592 +0x1331:  mov    0x1c(%ebp),%eax
0814b595 +0x1334:  mov    0x20(%ebp),%edx
0814b598 +0x1337:  mov    %eax,0x4(%esp)
0814b59c +0x133b:  mov    %edx,0x8(%esp)
0814b5a0 +0x133f:  mov    %ecx,(%esp)
0814b5a3 +0x1342:  call   0814b860 <+0x15ff>
0814b5a8 +0x1347:  sub    $0x4,%esp
0814b5ab +0x134a:  lea    -0x18(%ebp),%ecx
0814b5ae +0x134d:  mov    0x14(%ebp),%eax
0814b5b1 +0x1350:  mov    0x18(%ebp),%edx
0814b5b4 +0x1353:  mov    %eax,0x4(%esp)
0814b5b8 +0x1357:  mov    %edx,0x8(%esp)
0814b5bc +0x135b:  mov    %ecx,(%esp)
0814b5bf +0x135e:  call   0814b860 <+0x15ff>
0814b5c4 +0x1363:  sub    $0x4,%esp
0814b5c7 +0x1366:  lea    -0x10(%ebp),%ecx
0814b5ca +0x1369:  mov    0xc(%ebp),%eax
0814b5cd +0x136c:  mov    0x10(%ebp),%edx
0814b5d0 +0x136f:  mov    %eax,0x4(%esp)
0814b5d4 +0x1373:  mov    %edx,0x8(%esp)
0814b5d8 +0x1377:  mov    %ecx,(%esp)
0814b5db +0x137a:  call   0814b860 <+0x15ff>
0814b5e0 +0x137f:  sub    $0x4,%esp
0814b5e3 +0x1382:  mov    -0x20(%ebp),%eax
0814b5e6 +0x1385:  mov    -0x1c(%ebp),%edx
0814b5e9 +0x1388:  mov    %eax,0x14(%esp)
0814b5ed +0x138c:  mov    %edx,0x18(%esp)
0814b5f1 +0x1390:  mov    -0x18(%ebp),%eax
0814b5f4 +0x1393:  mov    -0x14(%ebp),%edx
0814b5f7 +0x1396:  mov    %eax,0xc(%esp)
0814b5fb +0x139a:  mov    %edx,0x10(%esp)
0814b5ff +0x139e:  mov    -0x10(%ebp),%eax
0814b602 +0x13a1:  mov    -0xc(%ebp),%edx
0814b605 +0x13a4:  mov    %eax,0x4(%esp)
0814b609 +0x13a8:  mov    %edx,0x8(%esp)
0814b60d +0x13ac:  mov    %ebx,(%esp)
0814b610 +0x13af:  call   0814b877 <+0x1616>
0814b615 +0x13b4:  sub    $0x4,%esp
0814b618 +0x13b7:  mov    %ebx,%eax
0814b61a +0x13b9:  mov    -0x4(%ebp),%ebx
0814b61d +0x13bc:  leave
0814b61e +0x13bd:  ret    $0x4
0814b621 +0x13c0:  nop
0814b622 +0x13c1:  push   %ebp
0814b623 +0x13c2:  mov    %esp,%ebp
0814b625 +0x13c4:  sub    $0x28,%esp
0814b628 +0x13c7:  lea    -0x18(%ebp),%eax
0814b62b +0x13ca:  mov    0x8(%ebp),%edx
0814b62e +0x13cd:  mov    %edx,0x4(%esp)
0814b632 +0x13d1:  mov    %eax,(%esp)
0814b635 +0x13d4:  call   0814b8c4 <+0x1663>
0814b63a +0x13d9:  sub    $0x4,%esp
0814b63d +0x13dc:  lea    -0x10(%ebp),%eax
0814b640 +0x13df:  mov    0x8(%ebp),%edx
0814b643 +0x13e2:  mov    %edx,0x4(%esp)
0814b647 +0x13e6:  mov    %eax,(%esp)
0814b64a +0x13e9:  call   0814b8e8 <+0x1687>
0814b64f +0x13ee:  sub    $0x4,%esp
0814b652 +0x13f1:  lea    -0x18(%ebp),%eax
0814b655 +0x13f4:  mov    %eax,0x4(%esp)
0814b659 +0x13f8:  lea    -0x10(%ebp),%eax
0814b65c +0x13fb:  mov    %eax,(%esp)
0814b65f +0x13fe:  call   0814a41c <+0x1bb>
0814b664 +0x1403:  leave
0814b665 +0x1404:  ret
0814b666 +0x1405:  push   %ebp
0814b667 +0x1406:  mov    %esp,%ebp
0814b669 +0x1408:  sub    $0x28,%esp
0814b66c +0x140b:  movl   $0x7fffffe0,-0x10(%ebp)
0814b673 +0x1412:  mov    0x8(%ebp),%eax
0814b676 +0x1415:  mov    %eax,(%esp)
0814b679 +0x1418:  call   0814b90e <+0x16ad>
0814b67e +0x141d:  mov    %eax,(%esp)
0814b681 +0x1420:  call   0814b916 <+0x16b5>
0814b686 +0x1425:  mov    %eax,-0xc(%ebp)
0814b689 +0x1428:  cmpl   $0x3ffffff,-0xc(%ebp)
0814b690 +0x142f:  ja     0814b69a <+0x1439>
0814b692 +0x1431:  mov    -0xc(%ebp),%eax
0814b695 +0x1434:  shl    $0x5,%eax
0814b698 +0x1437:  jmp    0814b69f <+0x143e>
0814b69a +0x1439:  mov    $0x7fffffe0,%eax
0814b69f +0x143e:  leave
0814b6a0 +0x143f:  ret
0814b6a1 +0x1440:  nop
0814b6a2 +0x1441:  push   %ebp
0814b6a3 +0x1442:  mov    %esp,%ebp
0814b6a5 +0x1444:  sub    $0x18,%esp
0814b6a8 +0x1447:  mov    0x8(%ebp),%eax
0814b6ab +0x144a:  mov    %eax,(%esp)
0814b6ae +0x144d:  call   0814b916 <+0x16b5>
0814b6b3 +0x1452:  cmp    0xc(%ebp),%eax
0814b6b6 +0x1455:  setb   %al
0814b6b9 +0x1458:  movzbl %al,%eax
0814b6bc +0x145b:  test   %eax,%eax
0814b6be +0x145d:  setne  %al
0814b6c1 +0x1460:  test   %al,%al
0814b6c3 +0x1462:  je     0814b6ca <+0x1469>
0814b6c5 +0x1464:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0814b6ca +0x1469:  mov    0xc(%ebp),%eax
0814b6cd +0x146c:  shl    $0x2,%eax
0814b6d0 +0x146f:  mov    %eax,(%esp)
0814b6d3 +0x1472:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0814b6d8 +0x1477:  leave
0814b6d9 +0x1478:  ret
0814b6da +0x1479:  push   %ebp
0814b6db +0x147a:  mov    %esp,%ebp
0814b6dd +0x147c:  push   %ebx
0814b6de +0x147d:  sub    $0x14,%esp
0814b6e1 +0x1480:  mov    0xc(%ebp),%eax
0814b6e4 +0x1483:  mov    %eax,(%esp)
0814b6e7 +0x1486:  call   0814b920 <+0x16bf>
0814b6ec +0x148b:  mov    %eax,%ebx
0814b6ee +0x148d:  mov    0x8(%ebp),%eax
0814b6f1 +0x1490:  mov    %eax,(%esp)
0814b6f4 +0x1493:  call   0814b920 <+0x16bf>
0814b6f9 +0x1498:  mov    0x10(%ebp),%edx
0814b6fc +0x149b:  mov    %edx,0x8(%esp)
0814b700 +0x149f:  mov    %ebx,0x4(%esp)
0814b704 +0x14a3:  mov    %eax,(%esp)
0814b707 +0x14a6:  call   0814b928 <+0x16c7>
0814b70c +0x14ab:  add    $0x14,%esp
0814b70f +0x14ae:  pop    %ebx
0814b710 +0x14af:  pop    %ebp
0814b711 +0x14b0:  ret
0814b712 +0x14b1:  push   %ebp
0814b713 +0x14b2:  mov    %esp,%ebp
0814b715 +0x14b4:  push   %ebx
0814b716 +0x14b5:  sub    $0x34,%esp
0814b719 +0x14b8:  mov    0x8(%ebp),%ebx
0814b71c +0x14bb:  lea    -0x18(%ebp),%ecx
0814b71f +0x14be:  mov    0x14(%ebp),%eax
0814b722 +0x14c1:  mov    0x18(%ebp),%edx
0814b725 +0x14c4:  mov    %eax,0x4(%esp)
0814b729 +0x14c8:  mov    %edx,0x8(%esp)
0814b72d +0x14cc:  mov    %ecx,(%esp)
0814b730 +0x14cf:  call   0814b96c <+0x170b>
0814b735 +0x14d4:  sub    $0x4,%esp
0814b738 +0x14d7:  lea    -0x10(%ebp),%ecx
0814b73b +0x14da:  mov    0xc(%ebp),%eax
0814b73e +0x14dd:  mov    0x10(%ebp),%edx
0814b741 +0x14e0:  mov    %eax,0x4(%esp)
0814b745 +0x14e4:  mov    %edx,0x8(%esp)
0814b749 +0x14e8:  mov    %ecx,(%esp)
0814b74c +0x14eb:  call   0814b96c <+0x170b>
0814b751 +0x14f0:  sub    $0x4,%esp
0814b754 +0x14f3:  mov    0x1c(%ebp),%eax
0814b757 +0x14f6:  mov    0x20(%ebp),%edx
0814b75a +0x14f9:  mov    %eax,0x14(%esp)
0814b75e +0x14fd:  mov    %edx,0x18(%esp)
0814b762 +0x1501:  mov    -0x18(%ebp),%eax
0814b765 +0x1504:  mov    -0x14(%ebp),%edx
0814b768 +0x1507:  mov    %eax,0xc(%esp)
0814b76c +0x150b:  mov    %edx,0x10(%esp)
0814b770 +0x150f:  mov    -0x10(%ebp),%eax
0814b773 +0x1512:  mov    -0xc(%ebp),%edx
0814b776 +0x1515:  mov    %eax,0x4(%esp)
0814b77a +0x1519:  mov    %edx,0x8(%esp)
0814b77e +0x151d:  mov    %ebx,(%esp)
0814b781 +0x1520:  call   0814b983 <+0x1722>
0814b786 +0x1525:  sub    $0x4,%esp
0814b789 +0x1528:  mov    %ebx,%eax
0814b78b +0x152a:  mov    -0x4(%ebp),%ebx
0814b78e +0x152d:  leave
0814b78f +0x152e:  ret    $0x4
0814b792 +0x1531:  push   %ebp
0814b793 +0x1532:  mov    %esp,%ebp
0814b795 +0x1534:  push   %ebx
0814b796 +0x1535:  sub    $0x44,%esp
0814b799 +0x1538:  mov    0x8(%ebp),%ebx
0814b79c +0x153b:  lea    -0x20(%ebp),%ecx
0814b79f +0x153e:  mov    0x1c(%ebp),%eax
0814b7a2 +0x1541:  mov    0x20(%ebp),%edx
0814b7a5 +0x1544:  mov    %eax,0x4(%esp)
0814b7a9 +0x1548:  mov    %edx,0x8(%esp)
0814b7ad +0x154c:  mov    %ecx,(%esp)
0814b7b0 +0x154f:  call   0814b860 <+0x15ff>
0814b7b5 +0x1554:  sub    $0x4,%esp
0814b7b8 +0x1557:  lea    -0x18(%ebp),%ecx
0814b7bb +0x155a:  mov    0x14(%ebp),%eax
0814b7be +0x155d:  mov    0x18(%ebp),%edx
0814b7c1 +0x1560:  mov    %eax,0x4(%esp)
0814b7c5 +0x1564:  mov    %edx,0x8(%esp)
0814b7c9 +0x1568:  mov    %ecx,(%esp)
0814b7cc +0x156b:  call   0814b860 <+0x15ff>
0814b7d1 +0x1570:  sub    $0x4,%esp
0814b7d4 +0x1573:  lea    -0x10(%ebp),%ecx
0814b7d7 +0x1576:  mov    0xc(%ebp),%eax
0814b7da +0x1579:  mov    0x10(%ebp),%edx
0814b7dd +0x157c:  mov    %eax,0x4(%esp)
0814b7e1 +0x1580:  mov    %edx,0x8(%esp)
0814b7e5 +0x1584:  mov    %ecx,(%esp)
0814b7e8 +0x1587:  call   0814b860 <+0x15ff>
0814b7ed +0x158c:  sub    $0x4,%esp
0814b7f0 +0x158f:  mov    -0x20(%ebp),%eax
0814b7f3 +0x1592:  mov    -0x1c(%ebp),%edx
0814b7f6 +0x1595:  mov    %eax,0x14(%esp)
0814b7fa +0x1599:  mov    %edx,0x18(%esp)
0814b7fe +0x159d:  mov    -0x18(%ebp),%eax
0814b801 +0x15a0:  mov    -0x14(%ebp),%edx
0814b804 +0x15a3:  mov    %eax,0xc(%esp)
0814b808 +0x15a7:  mov    %edx,0x10(%esp)
0814b80c +0x15ab:  mov    -0x10(%ebp),%eax
0814b80f +0x15ae:  mov    -0xc(%ebp),%edx
0814b812 +0x15b1:  mov    %eax,0x4(%esp)
0814b816 +0x15b5:  mov    %edx,0x8(%esp)
0814b81a +0x15b9:  mov    %ebx,(%esp)
0814b81d +0x15bc:  call   0814ba1f <+0x17be>
0814b822 +0x15c1:  sub    $0x4,%esp
0814b825 +0x15c4:  mov    %ebx,%eax
0814b827 +0x15c6:  mov    -0x4(%ebp),%ebx
0814b82a +0x15c9:  leave
0814b82b +0x15ca:  ret    $0x4
0814b82e +0x15cd:  push   %ebp
0814b82f +0x15ce:  mov    %esp,%ebp
0814b831 +0x15d0:  sub    $0x18,%esp
0814b834 +0x15d3:  mov    0x8(%ebp),%eax
0814b837 +0x15d6:  mov    %eax,(%esp)
0814b83a +0x15d9:  call   0814ba6c <+0x180b>
0814b83f +0x15de:  leave
0814b840 +0x15df:  ret
0814b841 +0x15e0:  nop
0814b842 +0x15e1:  push   %ebp
0814b843 +0x15e2:  mov    %esp,%ebp
0814b845 +0x15e4:  pop    %ebp
0814b846 +0x15e5:  ret
0814b847 +0x15e6:  nop
0814b848 +0x15e7:  push   %ebp
0814b849 +0x15e8:  mov    %esp,%ebp
0814b84b +0x15ea:  sub    $0x18,%esp
0814b84e +0x15ed:  mov    0xc(%ebp),%eax
0814b851 +0x15f0:  mov    %eax,(%esp)
0814b854 +0x15f3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0814b859 +0x15f8:  leave
0814b85a +0x15f9:  ret
0814b85b +0x15fa:  push   %ebp
0814b85c +0x15fb:  mov    %esp,%ebp
0814b85e +0x15fd:  pop    %ebp
0814b85f +0x15fe:  ret
0814b860 +0x15ff:  push   %ebp
0814b861 +0x1600:  mov    %esp,%ebp
0814b863 +0x1602:  mov    0x8(%ebp),%ecx
0814b866 +0x1605:  mov    0xc(%ebp),%eax
0814b869 +0x1608:  mov    0x10(%ebp),%edx
0814b86c +0x160b:  mov    %eax,(%ecx)
0814b86e +0x160d:  mov    %edx,0x4(%ecx)
0814b871 +0x1610:  mov    %ecx,%eax
0814b873 +0x1612:  pop    %ebp
0814b874 +0x1613:  ret    $0x4
0814b877 +0x1616:  push   %ebp
0814b878 +0x1617:  mov    %esp,%ebp
0814b87a +0x1619:  push   %ebx
0814b87b +0x161a:  sub    $0x34,%esp
0814b87e +0x161d:  mov    0x8(%ebp),%ebx
0814b881 +0x1620:  movb   $0x0,-0x9(%ebp)
0814b885 +0x1624:  mov    0x1c(%ebp),%eax
0814b888 +0x1627:  mov    0x20(%ebp),%edx
0814b88b +0x162a:  mov    %eax,0x14(%esp)
0814b88f +0x162e:  mov    %edx,0x18(%esp)
0814b893 +0x1632:  mov    0x14(%ebp),%eax
0814b896 +0x1635:  mov    0x18(%ebp),%edx
0814b899 +0x1638:  mov    %eax,0xc(%esp)
0814b89d +0x163c:  mov    %edx,0x10(%esp)
0814b8a1 +0x1640:  mov    0xc(%ebp),%eax
0814b8a4 +0x1643:  mov    0x10(%ebp),%edx
0814b8a7 +0x1646:  mov    %eax,0x4(%esp)
0814b8ab +0x164a:  mov    %edx,0x8(%esp)
0814b8af +0x164e:  mov    %ebx,(%esp)
0814b8b2 +0x1651:  call   0814ba71 <+0x1810>
0814b8b7 +0x1656:  sub    $0x4,%esp
0814b8ba +0x1659:  mov    %ebx,%eax
0814b8bc +0x165b:  mov    -0x4(%ebp),%ebx
0814b8bf +0x165e:  leave
0814b8c0 +0x165f:  ret    $0x4
0814b8c3 +0x1662:  nop
0814b8c4 +0x1663:  push   %ebp
0814b8c5 +0x1664:  mov    %esp,%ebp
0814b8c7 +0x1666:  push   %ebx
0814b8c8 +0x1667:  sub    $0x14,%esp
0814b8cb +0x166a:  mov    0x8(%ebp),%ebx
0814b8ce +0x166d:  mov    0xc(%ebp),%eax
0814b8d1 +0x1670:  mov    %eax,0x4(%esp)
0814b8d5 +0x1674:  mov    %ebx,(%esp)
0814b8d8 +0x1677:  call   0814a5b8 <+0x357>
0814b8dd +0x167c:  mov    %ebx,%eax
0814b8df +0x167e:  add    $0x14,%esp
0814b8e2 +0x1681:  pop    %ebx
0814b8e3 +0x1682:  pop    %ebp
0814b8e4 +0x1683:  ret    $0x4
0814b8e7 +0x1686:  nop
0814b8e8 +0x1687:  push   %ebp
0814b8e9 +0x1688:  mov    %esp,%ebp
0814b8eb +0x168a:  push   %ebx
0814b8ec +0x168b:  sub    $0x14,%esp
0814b8ef +0x168e:  mov    0x8(%ebp),%ebx
0814b8f2 +0x1691:  mov    0xc(%ebp),%eax
0814b8f5 +0x1694:  add    $0x8,%eax
0814b8f8 +0x1697:  mov    %eax,0x4(%esp)
0814b8fc +0x169b:  mov    %ebx,(%esp)
0814b8ff +0x169e:  call   0814a5b8 <+0x357>
0814b904 +0x16a3:  mov    %ebx,%eax
0814b906 +0x16a5:  add    $0x14,%esp
0814b909 +0x16a8:  pop    %ebx
0814b90a +0x16a9:  pop    %ebp
0814b90b +0x16aa:  ret    $0x4
0814b90e +0x16ad:  push   %ebp
0814b90f +0x16ae:  mov    %esp,%ebp
0814b911 +0x16b0:  mov    0x8(%ebp),%eax
0814b914 +0x16b3:  pop    %ebp
0814b915 +0x16b4:  ret
0814b916 +0x16b5:  push   %ebp
0814b917 +0x16b6:  mov    %esp,%ebp
0814b919 +0x16b8:  mov    $0x3fffffff,%eax
0814b91e +0x16bd:  pop    %ebp
0814b91f +0x16be:  ret
0814b920 +0x16bf:  push   %ebp
0814b921 +0x16c0:  mov    %esp,%ebp
0814b923 +0x16c2:  mov    0x8(%ebp),%eax
0814b926 +0x16c5:  pop    %ebp
0814b927 +0x16c6:  ret
0814b928 +0x16c7:  push   %ebp
0814b929 +0x16c8:  mov    %esp,%ebp
0814b92b +0x16ca:  push   %esi
0814b92c +0x16cb:  push   %ebx
0814b92d +0x16cc:  sub    $0x10,%esp
0814b930 +0x16cf:  mov    0x10(%ebp),%eax
0814b933 +0x16d2:  mov    %eax,(%esp)
0814b936 +0x16d5:  call   0814ad76 <+0xb15>
0814b93b +0x16da:  mov    %eax,%esi
0814b93d +0x16dc:  mov    0xc(%ebp),%eax
0814b940 +0x16df:  mov    %eax,(%esp)
0814b943 +0x16e2:  call   0814ad76 <+0xb15>
0814b948 +0x16e7:  mov    %eax,%ebx
0814b94a +0x16e9:  mov    0x8(%ebp),%eax
0814b94d +0x16ec:  mov    %eax,(%esp)
0814b950 +0x16ef:  call   0814ad76 <+0xb15>
0814b955 +0x16f4:  mov    %esi,0x8(%esp)
0814b959 +0x16f8:  mov    %ebx,0x4(%esp)
0814b95d +0x16fc:  mov    %eax,(%esp)
0814b960 +0x16ff:  call   0814bb01 <+0x18a0>
0814b965 +0x1704:  add    $0x10,%esp
0814b968 +0x1707:  pop    %ebx
0814b969 +0x1708:  pop    %esi
0814b96a +0x1709:  pop    %ebp
0814b96b +0x170a:  ret
0814b96c +0x170b:  push   %ebp
0814b96d +0x170c:  mov    %esp,%ebp
0814b96f +0x170e:  mov    0x8(%ebp),%ecx
0814b972 +0x1711:  mov    0xc(%ebp),%eax
0814b975 +0x1714:  mov    0x10(%ebp),%edx
0814b978 +0x1717:  mov    %eax,(%ecx)
0814b97a +0x1719:  mov    %edx,0x4(%ecx)
0814b97d +0x171c:  mov    %ecx,%eax
0814b97f +0x171e:  pop    %ebp
0814b980 +0x171f:  ret    $0x4
0814b983 +0x1722:  push   %ebp
0814b984 +0x1723:  mov    %esp,%ebp
0814b986 +0x1725:  push   %ebx
0814b987 +0x1726:  sub    $0x44,%esp
0814b98a +0x1729:  mov    0x8(%ebp),%ebx
0814b98d +0x172c:  lea    -0x20(%ebp),%ecx
0814b990 +0x172f:  mov    0x1c(%ebp),%eax
0814b993 +0x1732:  mov    0x20(%ebp),%edx
0814b996 +0x1735:  mov    %eax,0x4(%esp)
0814b99a +0x1739:  mov    %edx,0x8(%esp)
0814b99e +0x173d:  mov    %ecx,(%esp)
0814b9a1 +0x1740:  call   0814b860 <+0x15ff>
0814b9a6 +0x1745:  sub    $0x4,%esp
0814b9a9 +0x1748:  lea    -0x18(%ebp),%ecx
0814b9ac +0x174b:  mov    0x14(%ebp),%eax
0814b9af +0x174e:  mov    0x18(%ebp),%edx
0814b9b2 +0x1751:  mov    %eax,0x4(%esp)
0814b9b6 +0x1755:  mov    %edx,0x8(%esp)
0814b9ba +0x1759:  mov    %ecx,(%esp)
0814b9bd +0x175c:  call   0814bb26 <+0x18c5>
0814b9c2 +0x1761:  sub    $0x4,%esp
0814b9c5 +0x1764:  lea    -0x10(%ebp),%ecx
0814b9c8 +0x1767:  mov    0xc(%ebp),%eax
0814b9cb +0x176a:  mov    0x10(%ebp),%edx
0814b9ce +0x176d:  mov    %eax,0x4(%esp)
0814b9d2 +0x1771:  mov    %edx,0x8(%esp)
0814b9d6 +0x1775:  mov    %ecx,(%esp)
0814b9d9 +0x1778:  call   0814bb26 <+0x18c5>
0814b9de +0x177d:  sub    $0x4,%esp
0814b9e1 +0x1780:  mov    -0x20(%ebp),%eax
0814b9e4 +0x1783:  mov    -0x1c(%ebp),%edx
0814b9e7 +0x1786:  mov    %eax,0x14(%esp)
0814b9eb +0x178a:  mov    %edx,0x18(%esp)
0814b9ef +0x178e:  mov    -0x18(%ebp),%eax
0814b9f2 +0x1791:  mov    -0x14(%ebp),%edx
0814b9f5 +0x1794:  mov    %eax,0xc(%esp)
0814b9f9 +0x1798:  mov    %edx,0x10(%esp)
0814b9fd +0x179c:  mov    -0x10(%ebp),%eax
0814ba00 +0x179f:  mov    -0xc(%ebp),%edx
0814ba03 +0x17a2:  mov    %eax,0x4(%esp)
0814ba07 +0x17a6:  mov    %edx,0x8(%esp)
0814ba0b +0x17aa:  mov    %ebx,(%esp)
0814ba0e +0x17ad:  call   0814bb3d <+0x18dc>
0814ba13 +0x17b2:  sub    $0x4,%esp
0814ba16 +0x17b5:  mov    %ebx,%eax
0814ba18 +0x17b7:  mov    -0x4(%ebp),%ebx
0814ba1b +0x17ba:  leave
0814ba1c +0x17bb:  ret    $0x4
0814ba1f +0x17be:  push   %ebp
0814ba20 +0x17bf:  mov    %esp,%ebp
0814ba22 +0x17c1:  push   %ebx
0814ba23 +0x17c2:  sub    $0x34,%esp
0814ba26 +0x17c5:  mov    0x8(%ebp),%ebx
0814ba29 +0x17c8:  movb   $0x0,-0x9(%ebp)
0814ba2d +0x17cc:  mov    0x1c(%ebp),%eax
0814ba30 +0x17cf:  mov    0x20(%ebp),%edx
0814ba33 +0x17d2:  mov    %eax,0x14(%esp)
0814ba37 +0x17d6:  mov    %edx,0x18(%esp)
0814ba3b +0x17da:  mov    0x14(%ebp),%eax
0814ba3e +0x17dd:  mov    0x18(%ebp),%edx
0814ba41 +0x17e0:  mov    %eax,0xc(%esp)
0814ba45 +0x17e4:  mov    %edx,0x10(%esp)
0814ba49 +0x17e8:  mov    0xc(%ebp),%eax
0814ba4c +0x17eb:  mov    0x10(%ebp),%edx
0814ba4f +0x17ee:  mov    %eax,0x4(%esp)
0814ba53 +0x17f2:  mov    %edx,0x8(%esp)
0814ba57 +0x17f6:  mov    %ebx,(%esp)
0814ba5a +0x17f9:  call   0814bb89 <+0x1928>
0814ba5f +0x17fe:  sub    $0x4,%esp
0814ba62 +0x1801:  mov    %ebx,%eax
0814ba64 +0x1803:  mov    -0x4(%ebp),%ebx
0814ba67 +0x1806:  leave
0814ba68 +0x1807:  ret    $0x4
0814ba6b +0x180a:  nop
0814ba6c +0x180b:  push   %ebp
0814ba6d +0x180c:  mov    %esp,%ebp
0814ba6f +0x180e:  pop    %ebp
0814ba70 +0x180f:  ret
0814ba71 +0x1810:  push   %ebp
0814ba72 +0x1811:  mov    %esp,%ebp
0814ba74 +0x1813:  push   %ebx
0814ba75 +0x1814:  sub    $0x34,%esp
0814ba78 +0x1817:  mov    0x8(%ebp),%ebx
0814ba7b +0x181a:  lea    0xc(%ebp),%eax
0814ba7e +0x181d:  mov    %eax,0x4(%esp)
0814ba82 +0x1821:  lea    0x14(%ebp),%eax
0814ba85 +0x1824:  mov    %eax,(%esp)
0814ba88 +0x1827:  call   0814a41c <+0x1bb>
0814ba8d +0x182c:  mov    %eax,-0xc(%ebp)
0814ba90 +0x182f:  jmp    0814bae2 <+0x1881>
0814ba92 +0x1831:  lea    0x14(%ebp),%eax
0814ba95 +0x1834:  mov    %eax,(%esp)
0814ba98 +0x1837:  call   0814a51a <+0x2b9>
0814ba9d +0x183c:  lea    -0x1c(%ebp),%edx
0814baa0 +0x183f:  mov    %eax,0x4(%esp)
0814baa4 +0x1843:  mov    %edx,(%esp)
0814baa7 +0x1846:  call   0814a496 <+0x235>
0814baac +0x184b:  sub    $0x4,%esp
0814baaf +0x184e:  lea    0x1c(%ebp),%eax
0814bab2 +0x1851:  mov    %eax,(%esp)
0814bab5 +0x1854:  call   0814a51a <+0x2b9>
0814baba +0x1859:  lea    -0x14(%ebp),%edx
0814babd +0x185c:  mov    %eax,0x4(%esp)
0814bac1 +0x1860:  mov    %edx,(%esp)
0814bac4 +0x1863:  call   0814a496 <+0x235>
0814bac9 +0x1868:  sub    $0x4,%esp
0814bacc +0x186b:  lea    -0x1c(%ebp),%eax
0814bacf +0x186e:  mov    %eax,0x4(%esp)
0814bad3 +0x1872:  lea    -0x14(%ebp),%eax
0814bad6 +0x1875:  mov    %eax,(%esp)
0814bad9 +0x1878:  call   0814a2f6 <+0x95>
0814bade +0x187d:  subl   $0x1,-0xc(%ebp)
0814bae2 +0x1881:  cmpl   $0x0,-0xc(%ebp)
0814bae6 +0x1885:  setg   %al
0814bae9 +0x1888:  test   %al,%al
0814baeb +0x188a:  jne    0814ba92 <+0x1831>
0814baed +0x188c:  mov    0x1c(%ebp),%eax
0814baf0 +0x188f:  mov    0x20(%ebp),%edx
0814baf3 +0x1892:  mov    %eax,(%ebx)
0814baf5 +0x1894:  mov    %edx,0x4(%ebx)
0814baf8 +0x1897:  mov    %ebx,%eax
0814bafa +0x1899:  mov    -0x4(%ebp),%ebx
0814bafd +0x189c:  leave
0814bafe +0x189d:  ret    $0x4
0814bb01 +0x18a0:  push   %ebp
0814bb02 +0x18a1:  mov    %esp,%ebp
0814bb04 +0x18a3:  sub    $0x28,%esp
0814bb07 +0x18a6:  movb   $0x1,-0x9(%ebp)
0814bb0b +0x18aa:  mov    0x10(%ebp),%eax
0814bb0e +0x18ad:  mov    %eax,0x8(%esp)
0814bb12 +0x18b1:  mov    0xc(%ebp),%eax
0814bb15 +0x18b4:  mov    %eax,0x4(%esp)
0814bb19 +0x18b8:  mov    0x8(%ebp),%eax
0814bb1c +0x18bb:  mov    %eax,(%esp)
0814bb1f +0x18be:  call   0814bc1f <+0x19be>
0814bb24 +0x18c3:  leave
0814bb25 +0x18c4:  ret
0814bb26 +0x18c5:  push   %ebp
0814bb27 +0x18c6:  mov    %esp,%ebp
0814bb29 +0x18c8:  mov    0x8(%ebp),%ecx
0814bb2c +0x18cb:  mov    0xc(%ebp),%eax
0814bb2f +0x18ce:  mov    0x10(%ebp),%edx
0814bb32 +0x18d1:  mov    %eax,(%ecx)
0814bb34 +0x18d3:  mov    %edx,0x4(%ecx)
0814bb37 +0x18d6:  mov    %ecx,%eax
0814bb39 +0x18d8:  pop    %ebp
0814bb3a +0x18d9:  ret    $0x4
0814bb3d +0x18dc:  push   %ebp
0814bb3e +0x18dd:  mov    %esp,%ebp
0814bb40 +0x18df:  push   %ebx
0814bb41 +0x18e0:  sub    $0x34,%esp
0814bb44 +0x18e3:  mov    0x8(%ebp),%ebx
0814bb47 +0x18e6:  movb   $0x0,-0x9(%ebp)
0814bb4b +0x18ea:  mov    0x1c(%ebp),%eax
0814bb4e +0x18ed:  mov    0x20(%ebp),%edx
0814bb51 +0x18f0:  mov    %eax,0x14(%esp)
0814bb55 +0x18f4:  mov    %edx,0x18(%esp)
0814bb59 +0x18f8:  mov    0x14(%ebp),%eax
0814bb5c +0x18fb:  mov    0x18(%ebp),%edx
0814bb5f +0x18fe:  mov    %eax,0xc(%esp)
0814bb63 +0x1902:  mov    %edx,0x10(%esp)
0814bb67 +0x1906:  mov    0xc(%ebp),%eax
0814bb6a +0x1909:  mov    0x10(%ebp),%edx
0814bb6d +0x190c:  mov    %eax,0x4(%esp)
0814bb71 +0x1910:  mov    %edx,0x8(%esp)
0814bb75 +0x1914:  mov    %ebx,(%esp)
0814bb78 +0x1917:  call   0814bc64 <+0x1a03>
0814bb7d +0x191c:  sub    $0x4,%esp
0814bb80 +0x191f:  mov    %ebx,%eax
0814bb82 +0x1921:  mov    -0x4(%ebp),%ebx
0814bb85 +0x1924:  leave
0814bb86 +0x1925:  ret    $0x4
0814bb89 +0x1928:  push   %ebp
0814bb8a +0x1929:  mov    %esp,%ebp
0814bb8c +0x192b:  push   %ebx
0814bb8d +0x192c:  sub    $0x34,%esp
0814bb90 +0x192f:  mov    0x8(%ebp),%ebx
0814bb93 +0x1932:  lea    0xc(%ebp),%eax
0814bb96 +0x1935:  mov    %eax,0x4(%esp)
0814bb9a +0x1939:  lea    0x14(%ebp),%eax
0814bb9d +0x193c:  mov    %eax,(%esp)
0814bba0 +0x193f:  call   0814a41c <+0x1bb>
0814bba5 +0x1944:  mov    %eax,-0xc(%ebp)
0814bba8 +0x1947:  jmp    0814bc00 <+0x199f>
0814bbaa +0x1949:  lea    -0x1c(%ebp),%eax
0814bbad +0x194c:  lea    0xc(%ebp),%edx
0814bbb0 +0x194f:  mov    %edx,0x4(%esp)
0814bbb4 +0x1953:  mov    %eax,(%esp)
0814bbb7 +0x1956:  call   0814a496 <+0x235>
0814bbbc +0x195b:  sub    $0x4,%esp
0814bbbf +0x195e:  lea    -0x14(%ebp),%eax
0814bbc2 +0x1961:  lea    0x1c(%ebp),%edx
0814bbc5 +0x1964:  mov    %edx,0x4(%esp)
0814bbc9 +0x1968:  mov    %eax,(%esp)
0814bbcc +0x196b:  call   0814a496 <+0x235>
0814bbd1 +0x1970:  sub    $0x4,%esp
0814bbd4 +0x1973:  lea    -0x1c(%ebp),%eax
0814bbd7 +0x1976:  mov    %eax,0x4(%esp)
0814bbdb +0x197a:  lea    -0x14(%ebp),%eax
0814bbde +0x197d:  mov    %eax,(%esp)
0814bbe1 +0x1980:  call   0814a2f6 <+0x95>
0814bbe6 +0x1985:  lea    0xc(%ebp),%eax
0814bbe9 +0x1988:  mov    %eax,(%esp)
0814bbec +0x198b:  call   0814a4ce <+0x26d>
0814bbf1 +0x1990:  lea    0x1c(%ebp),%eax
0814bbf4 +0x1993:  mov    %eax,(%esp)
0814bbf7 +0x1996:  call   0814a4ce <+0x26d>
0814bbfc +0x199b:  subl   $0x1,-0xc(%ebp)
0814bc00 +0x199f:  cmpl   $0x0,-0xc(%ebp)
0814bc04 +0x19a3:  setg   %al
0814bc07 +0x19a6:  test   %al,%al
0814bc09 +0x19a8:  jne    0814bbaa <+0x1949>
0814bc0b +0x19aa:  mov    0x1c(%ebp),%eax
0814bc0e +0x19ad:  mov    0x20(%ebp),%edx
0814bc11 +0x19b0:  mov    %eax,(%ebx)
0814bc13 +0x19b2:  mov    %edx,0x4(%ebx)
0814bc16 +0x19b5:  mov    %ebx,%eax
0814bc18 +0x19b7:  mov    -0x4(%ebp),%ebx
0814bc1b +0x19ba:  leave
0814bc1c +0x19bb:  ret    $0x4
0814bc1f +0x19be:  push   %ebp
0814bc20 +0x19bf:  mov    %esp,%ebp
0814bc22 +0x19c1:  sub    $0x18,%esp
0814bc25 +0x19c4:  mov    0xc(%ebp),%edx
0814bc28 +0x19c7:  mov    0x8(%ebp),%eax
0814bc2b +0x19ca:  mov    %edx,%ecx
0814bc2d +0x19cc:  sub    %eax,%ecx
0814bc2f +0x19ce:  mov    %ecx,%eax
0814bc31 +0x19d0:  sar    $0x2,%eax
0814bc34 +0x19d3:  shl    $0x2,%eax
0814bc37 +0x19d6:  mov    %eax,0x8(%esp)
0814bc3b +0x19da:  mov    0x8(%ebp),%eax
0814bc3e +0x19dd:  mov    %eax,0x4(%esp)
0814bc42 +0x19e1:  mov    0x10(%ebp),%eax
0814bc45 +0x19e4:  mov    %eax,(%esp)
0814bc48 +0x19e7:  call   0807d880 <_init+0x178>
0814bc4d +0x19ec:  mov    0xc(%ebp),%edx
0814bc50 +0x19ef:  mov    0x8(%ebp),%eax
0814bc53 +0x19f2:  mov    %edx,%ecx
0814bc55 +0x19f4:  sub    %eax,%ecx
0814bc57 +0x19f6:  mov    %ecx,%eax
0814bc59 +0x19f8:  sar    $0x2,%eax
0814bc5c +0x19fb:  shl    $0x2,%eax
0814bc5f +0x19fe:  add    0x10(%ebp),%eax
0814bc62 +0x1a01:  leave
0814bc63 +0x1a02:  ret
0814bc64 +0x1a03:  push   %ebp
0814bc65 +0x1a04:  mov    %esp,%ebp
0814bc67 +0x1a06:  push   %esi
0814bc68 +0x1a07:  push   %ebx
0814bc69 +0x1a08:  sub    $0x20,%esp
0814bc6c +0x1a0b:  mov    0x8(%ebp),%ebx
0814bc6f +0x1a0e:  lea    0xc(%ebp),%eax
0814bc72 +0x1a11:  mov    %eax,0x4(%esp)
0814bc76 +0x1a15:  lea    0x14(%ebp),%eax
0814bc79 +0x1a18:  mov    %eax,(%esp)
0814bc7c +0x1a1b:  call   0814a41c <+0x1bb>
0814bc81 +0x1a20:  mov    %eax,-0xc(%ebp)
0814bc84 +0x1a23:  jmp    0814bcd2 <+0x1a71>
0814bc86 +0x1a25:  lea    0xc(%ebp),%eax
0814bc89 +0x1a28:  mov    %eax,(%esp)
0814bc8c +0x1a2b:  call   0814a5de <+0x37d>
0814bc91 +0x1a30:  movzbl %al,%esi
0814bc94 +0x1a33:  lea    -0x14(%ebp),%eax
0814bc97 +0x1a36:  lea    0x1c(%ebp),%edx
0814bc9a +0x1a39:  mov    %edx,0x4(%esp)
0814bc9e +0x1a3d:  mov    %eax,(%esp)
0814bca1 +0x1a40:  call   0814a496 <+0x235>
0814bca6 +0x1a45:  sub    $0x4,%esp
0814bca9 +0x1a48:  mov    %esi,0x4(%esp)
0814bcad +0x1a4c:  lea    -0x14(%ebp),%eax
0814bcb0 +0x1a4f:  mov    %eax,(%esp)
0814bcb3 +0x1a52:  call   0814a2ae <+0x4d>
0814bcb8 +0x1a57:  lea    0xc(%ebp),%eax
0814bcbb +0x1a5a:  mov    %eax,(%esp)
0814bcbe +0x1a5d:  call   0814a618 <+0x3b7>
0814bcc3 +0x1a62:  lea    0x1c(%ebp),%eax
0814bcc6 +0x1a65:  mov    %eax,(%esp)
0814bcc9 +0x1a68:  call   0814a4ce <+0x26d>
0814bcce +0x1a6d:  subl   $0x1,-0xc(%ebp)
0814bcd2 +0x1a71:  cmpl   $0x0,-0xc(%ebp)
0814bcd6 +0x1a75:  setg   %al
0814bcd9 +0x1a78:  test   %al,%al
0814bcdb +0x1a7a:  jne    0814bc86 <+0x1a25>
0814bcdd +0x1a7c:  mov    0x1c(%ebp),%eax
0814bce0 +0x1a7f:  mov    0x20(%ebp),%edx
0814bce3 +0x1a82:  mov    %eax,(%ebx)
0814bce5 +0x1a84:  mov    %edx,0x4(%ebx)
0814bce8 +0x1a87:  mov    %ebx,%eax
0814bcea +0x1a89:  lea    -0x8(%ebp),%esp
0814bced +0x1a8c:  add    $0x0,%esp
0814bcf0 +0x1a8f:  pop    %ebx
0814bcf1 +0x1a90:  pop    %esi
0814bcf2 +0x1a91:  pop    %ebp
0814bcf3 +0x1a92:  ret    $0x4
0814bcf6 +0x1a95:  nop
0814bcf7 +0x1a96:  nop
```

## 反编译 C

```c
// <global>::global @ 0x814a261

/* WongWork::CBossPlay::reset() */

void WongWork::CBossPlay::_GLOBAL__I_reset(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
