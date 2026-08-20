# CLocalChinaErrorDispatcher

`_GLOBAL__I__ZN26CLocalChinaErrorDispatcherC2Ev`

`global constructors keyed to CLocalChinaErrorDispatcher::CLocalChinaErrorDispatcher()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CLocalChinaErrorDispatcher` | `0x0812b130` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812b130  _GLOBAL__I__ZN26CLocalChinaErrorDispatcherC2Ev
#           global constructors keyed to CLocalChinaErrorDispatcher::CLocalChinaErrorDispatcher()
# range [0x0812b130, 0x0812bc5f]
0812b130 +0x000:  push   %ebp
0812b131 +0x001:  mov    %esp,%ebp
0812b133 +0x003:  sub    $0x18,%esp
0812b136 +0x006:  movl   $0xffff,0x4(%esp)
0812b13e +0x00e:  movl   $0x1,(%esp)
0812b145 +0x015:  call   0812b0f0 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0812b14a +0x01a:  leave
0812b14b +0x01b:  ret
0812b14c +0x01c:  push   %ebp
0812b14d +0x01d:  mov    %esp,%ebp
0812b14f +0x01f:  push   %ebx
0812b150 +0x020:  sub    $0x10,%esp
0812b153 +0x023:  mov    0xc(%ebp),%ebx
0812b156 +0x026:  mov    0x10(%ebp),%ecx
0812b159 +0x029:  mov    0x14(%ebp),%edx
0812b15c +0x02c:  mov    0x18(%ebp),%eax
0812b15f +0x02f:  mov    %bl,-0x8(%ebp)
0812b162 +0x032:  mov    %cl,-0xc(%ebp)
0812b165 +0x035:  mov    %dl,-0x10(%ebp)
0812b168 +0x038:  mov    %al,-0x14(%ebp)
0812b16b +0x03b:  mov    0x8(%ebp),%eax
0812b16e +0x03e:  movzbl -0x8(%ebp),%edx
0812b172 +0x042:  mov    %dl,(%eax)
0812b174 +0x044:  mov    0x8(%ebp),%eax
0812b177 +0x047:  movzbl -0xc(%ebp),%edx
0812b17b +0x04b:  mov    %dl,0x1(%eax)
0812b17e +0x04e:  mov    0x8(%ebp),%eax
0812b181 +0x051:  movzbl -0x10(%ebp),%edx
0812b185 +0x055:  mov    %dl,0x2(%eax)
0812b188 +0x058:  mov    0x8(%ebp),%eax
0812b18b +0x05b:  movzbl -0x14(%ebp),%edx
0812b18f +0x05f:  mov    %dl,0x3(%eax)
0812b192 +0x062:  add    $0x10,%esp
0812b195 +0x065:  pop    %ebx
0812b196 +0x066:  pop    %ebp
0812b197 +0x067:  ret
0812b198 +0x068:  push   %ebp
0812b199 +0x069:  mov    %esp,%ebp
0812b19b +0x06b:  sub    $0x18,%esp
0812b19e +0x06e:  mov    0x8(%ebp),%eax
0812b1a1 +0x071:  mov    %eax,(%esp)
0812b1a4 +0x074:  call   0812b1c0 <+0x90>
0812b1a9 +0x079:  leave
0812b1aa +0x07a:  ret
0812b1ab +0x07b:  nop
0812b1ac +0x07c:  push   %ebp
0812b1ad +0x07d:  mov    %esp,%ebp
0812b1af +0x07f:  sub    $0x18,%esp
0812b1b2 +0x082:  mov    0x8(%ebp),%eax
0812b1b5 +0x085:  mov    %eax,(%esp)
0812b1b8 +0x088:  call   0812b33c <+0x20c>
0812b1bd +0x08d:  leave
0812b1be +0x08e:  ret
0812b1bf +0x08f:  nop
0812b1c0 +0x090:  push   %ebp
0812b1c1 +0x091:  mov    %esp,%ebp
0812b1c3 +0x093:  push   %esi
0812b1c4 +0x094:  push   %ebx
0812b1c5 +0x095:  sub    $0x10,%esp
0812b1c8 +0x098:  mov    0x8(%ebp),%eax
0812b1cb +0x09b:  mov    %eax,(%esp)
0812b1ce +0x09e:  call   0812b3a6 <+0x276>
0812b1d3 +0x0a3:  mov    %eax,0x4(%esp)
0812b1d7 +0x0a7:  mov    0x8(%ebp),%eax
0812b1da +0x0aa:  mov    %eax,(%esp)
0812b1dd +0x0ad:  call   0812b350 <+0x220>
0812b1e2 +0x0b2:  jmp    0812b1ff <+0xcf>
0812b1e4 +0x0b4:  mov    %edx,%ebx
0812b1e6 +0x0b6:  mov    %eax,%esi
0812b1e8 +0x0b8:  mov    0x8(%ebp),%eax
0812b1eb +0x0bb:  mov    %eax,(%esp)
0812b1ee +0x0be:  call   0812b1ac <+0x7c>
0812b1f3 +0x0c3:  mov    %esi,%eax
0812b1f5 +0x0c5:  mov    %ebx,%edx
0812b1f7 +0x0c7:  mov    %eax,(%esp)
0812b1fa +0x0ca:  call   08ae3750 <_Unwind_Resume>
0812b1ff +0x0cf:  mov    0x8(%ebp),%eax
0812b202 +0x0d2:  mov    %eax,(%esp)
0812b205 +0x0d5:  call   0812b1ac <+0x7c>
0812b20a +0x0da:  add    $0x10,%esp
0812b20d +0x0dd:  pop    %ebx
0812b20e +0x0de:  pop    %esi
0812b20f +0x0df:  pop    %ebp
0812b210 +0x0e0:  ret
0812b211 +0x0e1:  nop
0812b212 +0x0e2:  push   %ebp
0812b213 +0x0e3:  mov    %esp,%ebp
0812b215 +0x0e5:  sub    $0x18,%esp
0812b218 +0x0e8:  mov    0x8(%ebp),%eax
0812b21b +0x0eb:  mov    %eax,(%esp)
0812b21e +0x0ee:  call   0812b3b2 <+0x282>
0812b223 +0x0f3:  leave
0812b224 +0x0f4:  ret
0812b225 +0x0f5:  push   %ebp
0812b226 +0x0f6:  mov    %esp,%ebp
0812b228 +0x0f8:  push   %esi
0812b229 +0x0f9:  push   %ebx
0812b22a +0x0fa:  sub    $0x20,%esp
0812b22d +0x0fd:  mov    0x8(%ebp),%esi
0812b230 +0x100:  mov    0x10(%ebp),%eax
0812b233 +0x103:  mov    %eax,(%esp)
0812b236 +0x106:  call   0812b3cd <+0x29d>
0812b23b +0x10b:  mov    %eax,%ebx
0812b23d +0x10d:  mov    0xc(%ebp),%eax
0812b240 +0x110:  mov    %eax,(%esp)
0812b243 +0x113:  call   0812b3c5 <+0x295>
0812b248 +0x118:  mov    (%eax),%eax
0812b24a +0x11a:  mov    %eax,-0xc(%ebp)
0812b24d +0x11d:  mov    %ebx,0x8(%esp)
0812b251 +0x121:  lea    -0xc(%ebp),%eax
0812b254 +0x124:  mov    %eax,0x4(%esp)
0812b258 +0x128:  mov    %esi,(%esp)
0812b25b +0x12b:  call   0812b3d6 <+0x2a6>
0812b260 +0x130:  mov    %esi,%eax
0812b262 +0x132:  add    $0x20,%esp
0812b265 +0x135:  pop    %ebx
0812b266 +0x136:  pop    %esi
0812b267 +0x137:  pop    %ebp
0812b268 +0x138:  ret    $0x4
0812b26b +0x13b:  nop
0812b26c +0x13c:  push   %ebp
0812b26d +0x13d:  mov    %esp,%ebp
0812b26f +0x13f:  sub    $0x18,%esp
0812b272 +0x142:  mov    0xc(%ebp),%eax
0812b275 +0x145:  mov    %eax,(%esp)
0812b278 +0x148:  call   0812b403 <+0x2d3>
0812b27d +0x14d:  mov    (%eax),%edx
0812b27f +0x14f:  mov    0x8(%ebp),%eax
0812b282 +0x152:  mov    %edx,(%eax)
0812b284 +0x154:  mov    0xc(%ebp),%eax
0812b287 +0x157:  add    $0x4,%eax
0812b28a +0x15a:  mov    %eax,(%esp)
0812b28d +0x15d:  call   0812b40b <+0x2db>
0812b292 +0x162:  mov    0x8(%ebp),%edx
0812b295 +0x165:  mov    (%eax),%eax
0812b297 +0x167:  mov    %eax,0x4(%edx)
0812b29a +0x16a:  leave
0812b29b +0x16b:  ret
0812b29c +0x16c:  push   %ebp
0812b29d +0x16d:  mov    %esp,%ebp
0812b29f +0x16f:  push   %ebx
0812b2a0 +0x170:  sub    $0x14,%esp
0812b2a3 +0x173:  mov    0x8(%ebp),%ebx
0812b2a6 +0x176:  mov    0xc(%ebp),%eax
0812b2a9 +0x179:  mov    0x10(%ebp),%edx
0812b2ac +0x17c:  mov    %edx,0x8(%esp)
0812b2b0 +0x180:  mov    %eax,0x4(%esp)
0812b2b4 +0x184:  mov    %ebx,(%esp)
0812b2b7 +0x187:  call   0812b414 <+0x2e4>
0812b2bc +0x18c:  sub    $0x4,%esp
0812b2bf +0x18f:  mov    %ebx,%eax
0812b2c1 +0x191:  mov    -0x4(%ebp),%ebx
0812b2c4 +0x194:  leave
0812b2c5 +0x195:  ret    $0x4
0812b2c8 +0x198:  push   %ebp
0812b2c9 +0x199:  mov    %esp,%ebp
0812b2cb +0x19b:  push   %ebx
0812b2cc +0x19c:  sub    $0x14,%esp
0812b2cf +0x19f:  mov    0x8(%ebp),%ebx
0812b2d2 +0x1a2:  mov    0xc(%ebp),%eax
0812b2d5 +0x1a5:  mov    0x10(%ebp),%edx
0812b2d8 +0x1a8:  mov    %edx,0x8(%esp)
0812b2dc +0x1ac:  mov    %eax,0x4(%esp)
0812b2e0 +0x1b0:  mov    %ebx,(%esp)
0812b2e3 +0x1b3:  call   0812b5e4 <+0x4b4>
0812b2e8 +0x1b8:  sub    $0x4,%esp
0812b2eb +0x1bb:  mov    %ebx,%eax
0812b2ed +0x1bd:  mov    -0x4(%ebp),%ebx
0812b2f0 +0x1c0:  leave
0812b2f1 +0x1c1:  ret    $0x4
0812b2f4 +0x1c4:  push   %ebp
0812b2f5 +0x1c5:  mov    %esp,%ebp
0812b2f7 +0x1c7:  push   %ebx
0812b2f8 +0x1c8:  sub    $0x14,%esp
0812b2fb +0x1cb:  mov    0x8(%ebp),%ebx
0812b2fe +0x1ce:  mov    0xc(%ebp),%eax
0812b301 +0x1d1:  mov    %eax,0x4(%esp)
0812b305 +0x1d5:  mov    %ebx,(%esp)
0812b308 +0x1d8:  call   0812b6a2 <+0x572>
0812b30d +0x1dd:  sub    $0x4,%esp
0812b310 +0x1e0:  mov    %ebx,%eax
0812b312 +0x1e2:  mov    -0x4(%ebp),%ebx
0812b315 +0x1e5:  leave
0812b316 +0x1e6:  ret    $0x4
0812b319 +0x1e9:  nop
0812b31a +0x1ea:  push   %ebp
0812b31b +0x1eb:  mov    %esp,%ebp
0812b31d +0x1ed:  mov    0x8(%ebp),%eax
0812b320 +0x1f0:  mov    (%eax),%edx
0812b322 +0x1f2:  mov    0xc(%ebp),%eax
0812b325 +0x1f5:  mov    (%eax),%eax
0812b327 +0x1f7:  cmp    %eax,%edx
0812b329 +0x1f9:  sete   %al
0812b32c +0x1fc:  pop    %ebp
0812b32d +0x1fd:  ret
0812b32e +0x1fe:  push   %ebp
0812b32f +0x1ff:  mov    %esp,%ebp
0812b331 +0x201:  mov    0x8(%ebp),%eax
0812b334 +0x204:  mov    (%eax),%eax
0812b336 +0x206:  add    $0x10,%eax
0812b339 +0x209:  pop    %ebp
0812b33a +0x20a:  ret
0812b33b +0x20b:  nop
0812b33c +0x20c:  push   %ebp
0812b33d +0x20d:  mov    %esp,%ebp
0812b33f +0x20f:  sub    $0x18,%esp
0812b342 +0x212:  mov    0x8(%ebp),%eax
0812b345 +0x215:  mov    %eax,(%esp)
0812b348 +0x218:  call   0812b6c8 <+0x598>
0812b34d +0x21d:  leave
0812b34e +0x21e:  ret
0812b34f +0x21f:  nop
0812b350 +0x220:  push   %ebp
0812b351 +0x221:  mov    %esp,%ebp
0812b353 +0x223:  sub    $0x28,%esp
0812b356 +0x226:  jmp    0812b398 <+0x268>
0812b358 +0x228:  mov    0xc(%ebp),%eax
0812b35b +0x22b:  mov    %eax,(%esp)
0812b35e +0x22e:  call   0812b6cd <+0x59d>
0812b363 +0x233:  mov    %eax,0x4(%esp)
0812b367 +0x237:  mov    0x8(%ebp),%eax
0812b36a +0x23a:  mov    %eax,(%esp)
0812b36d +0x23d:  call   0812b350 <+0x220>
0812b372 +0x242:  mov    0xc(%ebp),%eax
0812b375 +0x245:  mov    %eax,(%esp)
0812b378 +0x248:  call   0812b6d8 <+0x5a8>
0812b37d +0x24d:  mov    %eax,-0xc(%ebp)
0812b380 +0x250:  mov    0xc(%ebp),%eax
0812b383 +0x253:  mov    %eax,0x4(%esp)
0812b387 +0x257:  mov    0x8(%ebp),%eax
0812b38a +0x25a:  mov    %eax,(%esp)
0812b38d +0x25d:  call   0812b6e4 <+0x5b4>
0812b392 +0x262:  mov    -0xc(%ebp),%eax
0812b395 +0x265:  mov    %eax,0xc(%ebp)
0812b398 +0x268:  cmpl   $0x0,0xc(%ebp)
0812b39c +0x26c:  setne  %al
0812b39f +0x26f:  test   %al,%al
0812b3a1 +0x271:  jne    0812b358 <+0x228>
0812b3a3 +0x273:  leave
0812b3a4 +0x274:  ret
0812b3a5 +0x275:  nop
0812b3a6 +0x276:  push   %ebp
0812b3a7 +0x277:  mov    %esp,%ebp
0812b3a9 +0x279:  mov    0x8(%ebp),%eax
0812b3ac +0x27c:  mov    0x8(%eax),%eax
0812b3af +0x27f:  pop    %ebp
0812b3b0 +0x280:  ret
0812b3b1 +0x281:  nop
0812b3b2 +0x282:  push   %ebp
0812b3b3 +0x283:  mov    %esp,%ebp
0812b3b5 +0x285:  sub    $0x18,%esp
0812b3b8 +0x288:  mov    0x8(%ebp),%eax
0812b3bb +0x28b:  mov    %eax,(%esp)
0812b3be +0x28e:  call   0812b718 <+0x5e8>
0812b3c3 +0x293:  leave
0812b3c4 +0x294:  ret
0812b3c5 +0x295:  push   %ebp
0812b3c6 +0x296:  mov    %esp,%ebp
0812b3c8 +0x298:  mov    0x8(%ebp),%eax
0812b3cb +0x29b:  pop    %ebp
0812b3cc +0x29c:  ret
0812b3cd +0x29d:  push   %ebp
0812b3ce +0x29e:  mov    %esp,%ebp
0812b3d0 +0x2a0:  mov    0x8(%ebp),%eax
0812b3d3 +0x2a3:  pop    %ebp
0812b3d4 +0x2a4:  ret
0812b3d5 +0x2a5:  nop
0812b3d6 +0x2a6:  push   %ebp
0812b3d7 +0x2a7:  mov    %esp,%ebp
0812b3d9 +0x2a9:  sub    $0x18,%esp
0812b3dc +0x2ac:  mov    0xc(%ebp),%eax
0812b3df +0x2af:  mov    %eax,(%esp)
0812b3e2 +0x2b2:  call   0812b3c5 <+0x295>
0812b3e7 +0x2b7:  mov    (%eax),%edx
0812b3e9 +0x2b9:  mov    0x8(%ebp),%eax
0812b3ec +0x2bc:  mov    %edx,(%eax)
0812b3ee +0x2be:  mov    0x10(%ebp),%eax
0812b3f1 +0x2c1:  mov    %eax,(%esp)
0812b3f4 +0x2c4:  call   0812b3cd <+0x29d>
0812b3f9 +0x2c9:  mov    0x8(%ebp),%edx
0812b3fc +0x2cc:  mov    (%eax),%eax
0812b3fe +0x2ce:  mov    %eax,0x4(%edx)
0812b401 +0x2d1:  leave
0812b402 +0x2d2:  ret
0812b403 +0x2d3:  push   %ebp
0812b404 +0x2d4:  mov    %esp,%ebp
0812b406 +0x2d6:  mov    0x8(%ebp),%eax
0812b409 +0x2d9:  pop    %ebp
0812b40a +0x2da:  ret
0812b40b +0x2db:  push   %ebp
0812b40c +0x2dc:  mov    %esp,%ebp
0812b40e +0x2de:  mov    0x8(%ebp),%eax
0812b411 +0x2e1:  pop    %ebp
0812b412 +0x2e2:  ret
0812b413 +0x2e3:  nop
0812b414 +0x2e4:  push   %ebp
0812b415 +0x2e5:  mov    %esp,%ebp
0812b417 +0x2e7:  push   %esi
0812b418 +0x2e8:  push   %ebx
0812b419 +0x2e9:  sub    $0x50,%esp
0812b41c +0x2ec:  mov    0x8(%ebp),%ebx
0812b41f +0x2ef:  mov    0xc(%ebp),%eax
0812b422 +0x2f2:  mov    %eax,(%esp)
0812b425 +0x2f5:  call   0812b3a6 <+0x276>
0812b42a +0x2fa:  mov    %eax,-0x14(%ebp)
0812b42d +0x2fd:  mov    0xc(%ebp),%eax
0812b430 +0x300:  mov    %eax,(%esp)
0812b433 +0x303:  call   0812b768 <+0x638>
0812b438 +0x308:  mov    %eax,-0x10(%ebp)
0812b43b +0x30b:  movb   $0x1,-0x9(%ebp)
0812b43f +0x30f:  jmp    0812b49d <+0x36d>
0812b441 +0x311:  mov    -0x14(%ebp),%eax
0812b444 +0x314:  mov    %eax,-0x10(%ebp)
0812b447 +0x317:  mov    -0x14(%ebp),%eax
0812b44a +0x31a:  mov    %eax,(%esp)
0812b44d +0x31d:  call   0812b77c <+0x64c>
0812b452 +0x322:  mov    %eax,%esi
0812b454 +0x324:  mov    0x10(%ebp),%eax
0812b457 +0x327:  mov    %eax,0x4(%esp)
0812b45b +0x32b:  lea    -0x2d(%ebp),%eax
0812b45e +0x32e:  mov    %eax,(%esp)
0812b461 +0x331:  call   0812b774 <+0x644>
0812b466 +0x336:  mov    0xc(%ebp),%edx
0812b469 +0x339:  mov    %esi,0x8(%esp)
0812b46d +0x33d:  mov    %eax,0x4(%esp)
0812b471 +0x341:  mov    %edx,(%esp)
0812b474 +0x344:  call   0812b79e <+0x66e>
0812b479 +0x349:  mov    %al,-0x9(%ebp)
0812b47c +0x34c:  cmpb   $0x0,-0x9(%ebp)
0812b480 +0x350:  je     0812b48f <+0x35f>
0812b482 +0x352:  mov    -0x14(%ebp),%eax
0812b485 +0x355:  mov    %eax,(%esp)
0812b488 +0x358:  call   0812b6d8 <+0x5a8>
0812b48d +0x35d:  jmp    0812b49a <+0x36a>
0812b48f +0x35f:  mov    -0x14(%ebp),%eax
0812b492 +0x362:  mov    %eax,(%esp)
0812b495 +0x365:  call   0812b6cd <+0x59d>
0812b49a +0x36a:  mov    %eax,-0x14(%ebp)
0812b49d +0x36d:  cmpl   $0x0,-0x14(%ebp)
0812b4a1 +0x371:  setne  %al
0812b4a4 +0x374:  test   %al,%al
0812b4a6 +0x376:  jne    0812b441 <+0x311>
0812b4a8 +0x378:  mov    -0x10(%ebp),%eax
0812b4ab +0x37b:  mov    %eax,0x4(%esp)
0812b4af +0x37f:  lea    -0x34(%ebp),%eax
0812b4b2 +0x382:  mov    %eax,(%esp)
0812b4b5 +0x385:  call   0812b7b4 <+0x684>
0812b4ba +0x38a:  cmpb   $0x0,-0x9(%ebp)
0812b4be +0x38e:  je     0812b53f <+0x40f>
0812b4c0 +0x390:  lea    -0x2c(%ebp),%eax
0812b4c3 +0x393:  mov    0xc(%ebp),%edx
0812b4c6 +0x396:  mov    %edx,0x4(%esp)
0812b4ca +0x39a:  mov    %eax,(%esp)
0812b4cd +0x39d:  call   0812b7c2 <+0x692>
0812b4d2 +0x3a2:  sub    $0x4,%esp
0812b4d5 +0x3a5:  lea    -0x2c(%ebp),%eax
0812b4d8 +0x3a8:  mov    %eax,0x4(%esp)
0812b4dc +0x3ac:  lea    -0x34(%ebp),%eax
0812b4df +0x3af:  mov    %eax,(%esp)
0812b4e2 +0x3b2:  call   0812b7e8 <+0x6b8>
0812b4e7 +0x3b7:  test   %al,%al
0812b4e9 +0x3b9:  je     0812b534 <+0x404>
0812b4eb +0x3bb:  movb   $0x1,-0x25(%ebp)
0812b4ef +0x3bf:  mov    -0x10(%ebp),%ecx
0812b4f2 +0x3c2:  mov    -0x14(%ebp),%edx
0812b4f5 +0x3c5:  lea    -0x24(%ebp),%eax
0812b4f8 +0x3c8:  mov    0x10(%ebp),%esi
0812b4fb +0x3cb:  mov    %esi,0x10(%esp)
0812b4ff +0x3cf:  mov    %ecx,0xc(%esp)
0812b503 +0x3d3:  mov    %edx,0x8(%esp)
0812b507 +0x3d7:  mov    0xc(%ebp),%edx
0812b50a +0x3da:  mov    %edx,0x4(%esp)
0812b50e +0x3de:  mov    %eax,(%esp)
0812b511 +0x3e1:  call   0812b7fc <+0x6cc>
0812b516 +0x3e6:  sub    $0x4,%esp
0812b519 +0x3e9:  lea    -0x25(%ebp),%eax
0812b51c +0x3ec:  mov    %eax,0x8(%esp)
0812b520 +0x3f0:  lea    -0x24(%ebp),%eax
0812b523 +0x3f3:  mov    %eax,0x4(%esp)
0812b527 +0x3f7:  mov    %ebx,(%esp)
0812b52a +0x3fa:  call   0812b8c4 <+0x794>
0812b52f +0x3ff:  jmp    0812b5d5 <+0x4a5>
0812b534 +0x404:  lea    -0x34(%ebp),%eax
0812b537 +0x407:  mov    %eax,(%esp)
0812b53a +0x40a:  call   0812b8f2 <+0x7c2>
0812b53f +0x40f:  mov    0x10(%ebp),%eax
0812b542 +0x412:  mov    %eax,0x4(%esp)
0812b546 +0x416:  lea    -0x1e(%ebp),%eax
0812b549 +0x419:  mov    %eax,(%esp)
0812b54c +0x41c:  call   0812b774 <+0x644>
0812b551 +0x421:  mov    %eax,%esi
0812b553 +0x423:  mov    -0x34(%ebp),%eax
0812b556 +0x426:  mov    %eax,(%esp)
0812b559 +0x429:  call   0812b90f <+0x7df>
0812b55e +0x42e:  mov    0xc(%ebp),%edx
0812b561 +0x431:  mov    %esi,0x8(%esp)
0812b565 +0x435:  mov    %eax,0x4(%esp)
0812b569 +0x439:  mov    %edx,(%esp)
0812b56c +0x43c:  call   0812b79e <+0x66e>
0812b571 +0x441:  test   %al,%al
0812b573 +0x443:  je     0812b5bb <+0x48b>
0812b575 +0x445:  movb   $0x1,-0x1d(%ebp)
0812b579 +0x449:  mov    -0x10(%ebp),%ecx
0812b57c +0x44c:  mov    -0x14(%ebp),%edx
0812b57f +0x44f:  lea    -0x1c(%ebp),%eax
0812b582 +0x452:  mov    0x10(%ebp),%esi
0812b585 +0x455:  mov    %esi,0x10(%esp)
0812b589 +0x459:  mov    %ecx,0xc(%esp)
0812b58d +0x45d:  mov    %edx,0x8(%esp)
0812b591 +0x461:  mov    0xc(%ebp),%edx
0812b594 +0x464:  mov    %edx,0x4(%esp)
0812b598 +0x468:  mov    %eax,(%esp)
0812b59b +0x46b:  call   0812b7fc <+0x6cc>
0812b5a0 +0x470:  sub    $0x4,%esp
0812b5a3 +0x473:  lea    -0x1d(%ebp),%eax
0812b5a6 +0x476:  mov    %eax,0x8(%esp)
0812b5aa +0x47a:  lea    -0x1c(%ebp),%eax
0812b5ad +0x47d:  mov    %eax,0x4(%esp)
0812b5b1 +0x481:  mov    %ebx,(%esp)
0812b5b4 +0x484:  call   0812b8c4 <+0x794>
0812b5b9 +0x489:  jmp    0812b5d5 <+0x4a5>
0812b5bb +0x48b:  movb   $0x0,-0x15(%ebp)
0812b5bf +0x48f:  lea    -0x15(%ebp),%eax
0812b5c2 +0x492:  mov    %eax,0x8(%esp)
0812b5c6 +0x496:  lea    -0x34(%ebp),%eax
0812b5c9 +0x499:  mov    %eax,0x4(%esp)
0812b5cd +0x49d:  mov    %ebx,(%esp)
0812b5d0 +0x4a0:  call   0812b932 <+0x802>
0812b5d5 +0x4a5:  mov    %ebx,%eax
0812b5d7 +0x4a7:  lea    -0x8(%ebp),%esp
0812b5da +0x4aa:  add    $0x0,%esp
0812b5dd +0x4ad:  pop    %ebx
0812b5de +0x4ae:  pop    %esi
0812b5df +0x4af:  pop    %ebp
0812b5e0 +0x4b0:  ret    $0x4
0812b5e3 +0x4b3:  nop
0812b5e4 +0x4b4:  push   %ebp
0812b5e5 +0x4b5:  mov    %esp,%ebp
0812b5e7 +0x4b7:  push   %esi
0812b5e8 +0x4b8:  push   %ebx
0812b5e9 +0x4b9:  sub    $0x30,%esp
0812b5ec +0x4bc:  mov    0x8(%ebp),%ebx
0812b5ef +0x4bf:  mov    0xc(%ebp),%eax
0812b5f2 +0x4c2:  mov    %eax,(%esp)
0812b5f5 +0x4c5:  call   0812b96c <+0x83c>
0812b5fa +0x4ca:  mov    %eax,%esi
0812b5fc +0x4cc:  mov    0xc(%ebp),%eax
0812b5ff +0x4cf:  mov    %eax,(%esp)
0812b602 +0x4d2:  call   0812b960 <+0x830>
0812b607 +0x4d7:  lea    -0x10(%ebp),%edx
0812b60a +0x4da:  mov    0x10(%ebp),%ecx
0812b60d +0x4dd:  mov    %ecx,0x10(%esp)
0812b611 +0x4e1:  mov    %esi,0xc(%esp)
0812b615 +0x4e5:  mov    %eax,0x8(%esp)
0812b619 +0x4e9:  mov    0xc(%ebp),%eax
0812b61c +0x4ec:  mov    %eax,0x4(%esp)
0812b620 +0x4f0:  mov    %edx,(%esp)
0812b623 +0x4f3:  call   0812b978 <+0x848>
0812b628 +0x4f8:  sub    $0x4,%esp
0812b62b +0x4fb:  lea    -0xc(%ebp),%eax
0812b62e +0x4fe:  mov    0xc(%ebp),%edx
0812b631 +0x501:  mov    %edx,0x4(%esp)
0812b635 +0x505:  mov    %eax,(%esp)
0812b638 +0x508:  call   0812b6a2 <+0x572>
0812b63d +0x50d:  sub    $0x4,%esp
0812b640 +0x510:  lea    -0xc(%ebp),%eax
0812b643 +0x513:  mov    %eax,0x4(%esp)
0812b647 +0x517:  lea    -0x10(%ebp),%eax
0812b64a +0x51a:  mov    %eax,(%esp)
0812b64d +0x51d:  call   0812b31a <+0x1ea>
0812b652 +0x522:  test   %al,%al
0812b654 +0x524:  jne    0812b67b <+0x54b>
0812b656 +0x526:  mov    -0x10(%ebp),%eax
0812b659 +0x529:  mov    %eax,(%esp)
0812b65c +0x52c:  call   0812b90f <+0x7df>
0812b661 +0x531:  mov    0xc(%ebp),%edx
0812b664 +0x534:  mov    %eax,0x8(%esp)
0812b668 +0x538:  mov    0x10(%ebp),%eax
0812b66b +0x53b:  mov    %eax,0x4(%esp)
0812b66f +0x53f:  mov    %edx,(%esp)
0812b672 +0x542:  call   0812b79e <+0x66e>
0812b677 +0x547:  test   %al,%al
0812b679 +0x549:  je     0812b68f <+0x55f>
0812b67b +0x54b:  mov    0xc(%ebp),%eax
0812b67e +0x54e:  mov    %eax,0x4(%esp)
0812b682 +0x552:  mov    %ebx,(%esp)
0812b685 +0x555:  call   0812b6a2 <+0x572>
0812b68a +0x55a:  sub    $0x4,%esp
0812b68d +0x55d:  jmp    0812b694 <+0x564>
0812b68f +0x55f:  mov    -0x10(%ebp),%eax
0812b692 +0x562:  mov    %eax,(%ebx)
0812b694 +0x564:  mov    %ebx,%eax
0812b696 +0x566:  lea    -0x8(%ebp),%esp
0812b699 +0x569:  add    $0x0,%esp
0812b69c +0x56c:  pop    %ebx
0812b69d +0x56d:  pop    %esi
0812b69e +0x56e:  pop    %ebp
0812b69f +0x56f:  ret    $0x4
0812b6a2 +0x572:  push   %ebp
0812b6a3 +0x573:  mov    %esp,%ebp
0812b6a5 +0x575:  push   %ebx
0812b6a6 +0x576:  sub    $0x14,%esp
0812b6a9 +0x579:  mov    0x8(%ebp),%ebx
0812b6ac +0x57c:  mov    0xc(%ebp),%eax
0812b6af +0x57f:  add    $0x4,%eax
0812b6b2 +0x582:  mov    %eax,0x4(%esp)
0812b6b6 +0x586:  mov    %ebx,(%esp)
0812b6b9 +0x589:  call   0812b9f4 <+0x8c4>
0812b6be +0x58e:  mov    %ebx,%eax
0812b6c0 +0x590:  add    $0x14,%esp
0812b6c3 +0x593:  pop    %ebx
0812b6c4 +0x594:  pop    %ebp
0812b6c5 +0x595:  ret    $0x4
0812b6c8 +0x598:  push   %ebp
0812b6c9 +0x599:  mov    %esp,%ebp
0812b6cb +0x59b:  pop    %ebp
0812b6cc +0x59c:  ret
0812b6cd +0x59d:  push   %ebp
0812b6ce +0x59e:  mov    %esp,%ebp
0812b6d0 +0x5a0:  mov    0x8(%ebp),%eax
0812b6d3 +0x5a3:  mov    0xc(%eax),%eax
0812b6d6 +0x5a6:  pop    %ebp
0812b6d7 +0x5a7:  ret
0812b6d8 +0x5a8:  push   %ebp
0812b6d9 +0x5a9:  mov    %esp,%ebp
0812b6db +0x5ab:  mov    0x8(%ebp),%eax
0812b6de +0x5ae:  mov    0x8(%eax),%eax
0812b6e1 +0x5b1:  pop    %ebp
0812b6e2 +0x5b2:  ret
0812b6e3 +0x5b3:  nop
0812b6e4 +0x5b4:  push   %ebp
0812b6e5 +0x5b5:  mov    %esp,%ebp
0812b6e7 +0x5b7:  sub    $0x18,%esp
0812b6ea +0x5ba:  mov    0x8(%ebp),%eax
0812b6ed +0x5bd:  mov    %eax,(%esp)
0812b6f0 +0x5c0:  call   0812ba02 <+0x8d2>
0812b6f5 +0x5c5:  mov    0xc(%ebp),%edx
0812b6f8 +0x5c8:  mov    %edx,0x4(%esp)
0812b6fc +0x5cc:  mov    %eax,(%esp)
0812b6ff +0x5cf:  call   0812ba10 <+0x8e0>
0812b704 +0x5d4:  mov    0xc(%ebp),%eax
0812b707 +0x5d7:  mov    %eax,0x4(%esp)
0812b70b +0x5db:  mov    0x8(%ebp),%eax
0812b70e +0x5de:  mov    %eax,(%esp)
0812b711 +0x5e1:  call   0812ba24 <+0x8f4>
0812b716 +0x5e6:  leave
0812b717 +0x5e7:  ret
0812b718 +0x5e8:  push   %ebp
0812b719 +0x5e9:  mov    %esp,%ebp
0812b71b +0x5eb:  sub    $0x18,%esp
0812b71e +0x5ee:  mov    0x8(%ebp),%eax
0812b721 +0x5f1:  mov    %eax,(%esp)
0812b724 +0x5f4:  call   0812ba46 <+0x916>
0812b729 +0x5f9:  mov    0x8(%ebp),%eax
0812b72c +0x5fc:  movl   $0x0,0x4(%eax)
0812b733 +0x603:  mov    0x8(%ebp),%eax
0812b736 +0x606:  movl   $0x0,0x8(%eax)
0812b73d +0x60d:  mov    0x8(%ebp),%eax
0812b740 +0x610:  movl   $0x0,0xc(%eax)
0812b747 +0x617:  mov    0x8(%ebp),%eax
0812b74a +0x61a:  movl   $0x0,0x10(%eax)
0812b751 +0x621:  mov    0x8(%ebp),%eax
0812b754 +0x624:  movl   $0x0,0x14(%eax)
0812b75b +0x62b:  mov    0x8(%ebp),%eax
0812b75e +0x62e:  mov    %eax,(%esp)
0812b761 +0x631:  call   0812ba5a <+0x92a>
0812b766 +0x636:  leave
0812b767 +0x637:  ret
0812b768 +0x638:  push   %ebp
0812b769 +0x639:  mov    %esp,%ebp
0812b76b +0x63b:  mov    0x8(%ebp),%eax
0812b76e +0x63e:  add    $0x4,%eax
0812b771 +0x641:  pop    %ebp
0812b772 +0x642:  ret
0812b773 +0x643:  nop
0812b774 +0x644:  push   %ebp
0812b775 +0x645:  mov    %esp,%ebp
0812b777 +0x647:  mov    0xc(%ebp),%eax
0812b77a +0x64a:  pop    %ebp
0812b77b +0x64b:  ret
0812b77c +0x64c:  push   %ebp
0812b77d +0x64d:  mov    %esp,%ebp
0812b77f +0x64f:  sub    $0x28,%esp
0812b782 +0x652:  mov    0x8(%ebp),%eax
0812b785 +0x655:  mov    %eax,(%esp)
0812b788 +0x658:  call   0812ba8b <+0x95b>
0812b78d +0x65d:  mov    %eax,0x4(%esp)
0812b791 +0x661:  lea    -0x9(%ebp),%eax
0812b794 +0x664:  mov    %eax,(%esp)
0812b797 +0x667:  call   0812b774 <+0x644>
0812b79c +0x66c:  leave
0812b79d +0x66d:  ret
0812b79e +0x66e:  push   %ebp
0812b79f +0x66f:  mov    %esp,%ebp
0812b7a1 +0x671:  mov    0xc(%ebp),%eax
0812b7a4 +0x674:  mov    (%eax),%eax
0812b7a6 +0x676:  mov    %eax,%edx
0812b7a8 +0x678:  mov    0x10(%ebp),%eax
0812b7ab +0x67b:  mov    (%eax),%eax
0812b7ad +0x67d:  cmp    %eax,%edx
0812b7af +0x67f:  setl   %al
0812b7b2 +0x682:  pop    %ebp
0812b7b3 +0x683:  ret
0812b7b4 +0x684:  push   %ebp
0812b7b5 +0x685:  mov    %esp,%ebp
0812b7b7 +0x687:  mov    0xc(%ebp),%edx
0812b7ba +0x68a:  mov    0x8(%ebp),%eax
0812b7bd +0x68d:  mov    %edx,(%eax)
0812b7bf +0x68f:  pop    %ebp
0812b7c0 +0x690:  ret
0812b7c1 +0x691:  nop
0812b7c2 +0x692:  push   %ebp
0812b7c3 +0x693:  mov    %esp,%ebp
0812b7c5 +0x695:  push   %ebx
0812b7c6 +0x696:  sub    $0x14,%esp
0812b7c9 +0x699:  mov    0x8(%ebp),%ebx
0812b7cc +0x69c:  mov    0xc(%ebp),%eax
0812b7cf +0x69f:  mov    0xc(%eax),%eax
0812b7d2 +0x6a2:  mov    %eax,0x4(%esp)
0812b7d6 +0x6a6:  mov    %ebx,(%esp)
0812b7d9 +0x6a9:  call   0812b7b4 <+0x684>
0812b7de +0x6ae:  mov    %ebx,%eax
0812b7e0 +0x6b0:  add    $0x14,%esp
0812b7e3 +0x6b3:  pop    %ebx
0812b7e4 +0x6b4:  pop    %ebp
0812b7e5 +0x6b5:  ret    $0x4
0812b7e8 +0x6b8:  push   %ebp
0812b7e9 +0x6b9:  mov    %esp,%ebp
0812b7eb +0x6bb:  mov    0x8(%ebp),%eax
0812b7ee +0x6be:  mov    (%eax),%edx
0812b7f0 +0x6c0:  mov    0xc(%ebp),%eax
0812b7f3 +0x6c3:  mov    (%eax),%eax
0812b7f5 +0x6c5:  cmp    %eax,%edx
0812b7f7 +0x6c7:  sete   %al
0812b7fa +0x6ca:  pop    %ebp
0812b7fb +0x6cb:  ret
0812b7fc +0x6cc:  push   %ebp
0812b7fd +0x6cd:  mov    %esp,%ebp
0812b7ff +0x6cf:  push   %esi
0812b800 +0x6d0:  push   %ebx
0812b801 +0x6d1:  sub    $0x20,%esp
0812b804 +0x6d4:  mov    0x8(%ebp),%esi
0812b807 +0x6d7:  cmpl   $0x0,0x10(%ebp)
0812b80b +0x6db:  jne    0812b853 <+0x723>
0812b80d +0x6dd:  mov    0xc(%ebp),%eax
0812b810 +0x6e0:  mov    %eax,(%esp)
0812b813 +0x6e3:  call   0812b768 <+0x638>
0812b818 +0x6e8:  cmp    0x14(%ebp),%eax
0812b81b +0x6eb:  je     0812b853 <+0x723>
0812b81d +0x6ed:  mov    0x14(%ebp),%eax
0812b820 +0x6f0:  mov    %eax,(%esp)
0812b823 +0x6f3:  call   0812b90f <+0x7df>
0812b828 +0x6f8:  mov    %eax,%ebx
0812b82a +0x6fa:  mov    0x18(%ebp),%eax
0812b82d +0x6fd:  mov    %eax,0x4(%esp)
0812b831 +0x701:  lea    -0xe(%ebp),%eax
0812b834 +0x704:  mov    %eax,(%esp)
0812b837 +0x707:  call   0812b774 <+0x644>
0812b83c +0x70c:  mov    0xc(%ebp),%edx
0812b83f +0x70f:  mov    %ebx,0x8(%esp)
0812b843 +0x713:  mov    %eax,0x4(%esp)
0812b847 +0x717:  mov    %edx,(%esp)
0812b84a +0x71a:  call   0812b79e <+0x66e>
0812b84f +0x71f:  test   %al,%al
0812b851 +0x721:  je     0812b85a <+0x72a>
0812b853 +0x723:  mov    $0x1,%eax
0812b858 +0x728:  jmp    0812b85f <+0x72f>
0812b85a +0x72a:  mov    $0x0,%eax
0812b85f +0x72f:  mov    %al,-0xd(%ebp)
0812b862 +0x732:  mov    0x18(%ebp),%eax
0812b865 +0x735:  mov    %eax,0x4(%esp)
0812b869 +0x739:  mov    0xc(%ebp),%eax
0812b86c +0x73c:  mov    %eax,(%esp)
0812b86f +0x73f:  call   0812ba96 <+0x966>
0812b874 +0x744:  mov    %eax,-0xc(%ebp)
0812b877 +0x747:  mov    0xc(%ebp),%eax
0812b87a +0x74a:  lea    0x4(%eax),%ecx
0812b87d +0x74d:  mov    -0xc(%ebp),%edx
0812b880 +0x750:  movzbl -0xd(%ebp),%eax
0812b884 +0x754:  mov    %ecx,0xc(%esp)
0812b888 +0x758:  mov    0x14(%ebp),%ecx
0812b88b +0x75b:  mov    %ecx,0x8(%esp)
0812b88f +0x75f:  mov    %edx,0x4(%esp)
0812b893 +0x763:  mov    %eax,(%esp)
0812b896 +0x766:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0812b89b +0x76b:  mov    0xc(%ebp),%eax
0812b89e +0x76e:  mov    0x14(%eax),%eax
0812b8a1 +0x771:  lea    0x1(%eax),%edx
0812b8a4 +0x774:  mov    0xc(%ebp),%eax
0812b8a7 +0x777:  mov    %edx,0x14(%eax)
0812b8aa +0x77a:  mov    -0xc(%ebp),%eax
0812b8ad +0x77d:  mov    %eax,0x4(%esp)
0812b8b1 +0x781:  mov    %esi,(%esp)
0812b8b4 +0x784:  call   0812b7b4 <+0x684>
0812b8b9 +0x789:  mov    %esi,%eax
0812b8bb +0x78b:  add    $0x20,%esp
0812b8be +0x78e:  pop    %ebx
0812b8bf +0x78f:  pop    %esi
0812b8c0 +0x790:  pop    %ebp
0812b8c1 +0x791:  ret    $0x4
0812b8c4 +0x794:  push   %ebp
0812b8c5 +0x795:  mov    %esp,%ebp
0812b8c7 +0x797:  sub    $0x18,%esp
0812b8ca +0x79a:  mov    0xc(%ebp),%eax
0812b8cd +0x79d:  mov    %eax,(%esp)
0812b8d0 +0x7a0:  call   0812bb17 <+0x9e7>
0812b8d5 +0x7a5:  mov    0x8(%ebp),%edx
0812b8d8 +0x7a8:  mov    (%eax),%eax
0812b8da +0x7aa:  mov    %eax,(%edx)
0812b8dc +0x7ac:  mov    0x10(%ebp),%eax
0812b8df +0x7af:  mov    %eax,(%esp)
0812b8e2 +0x7b2:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0812b8e7 +0x7b7:  movzbl (%eax),%edx
0812b8ea +0x7ba:  mov    0x8(%ebp),%eax
0812b8ed +0x7bd:  mov    %dl,0x4(%eax)
0812b8f0 +0x7c0:  leave
0812b8f1 +0x7c1:  ret
0812b8f2 +0x7c2:  push   %ebp
0812b8f3 +0x7c3:  mov    %esp,%ebp
0812b8f5 +0x7c5:  sub    $0x18,%esp
0812b8f8 +0x7c8:  mov    0x8(%ebp),%eax
0812b8fb +0x7cb:  mov    (%eax),%eax
0812b8fd +0x7cd:  mov    %eax,(%esp)
0812b900 +0x7d0:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
0812b905 +0x7d5:  mov    0x8(%ebp),%edx
0812b908 +0x7d8:  mov    %eax,(%edx)
0812b90a +0x7da:  mov    0x8(%ebp),%eax
0812b90d +0x7dd:  leave
0812b90e +0x7de:  ret
0812b90f +0x7df:  push   %ebp
0812b910 +0x7e0:  mov    %esp,%ebp
0812b912 +0x7e2:  sub    $0x28,%esp
0812b915 +0x7e5:  mov    0x8(%ebp),%eax
0812b918 +0x7e8:  mov    %eax,(%esp)
0812b91b +0x7eb:  call   0812bb1f <+0x9ef>
0812b920 +0x7f0:  mov    %eax,0x4(%esp)
0812b924 +0x7f4:  lea    -0x9(%ebp),%eax
0812b927 +0x7f7:  mov    %eax,(%esp)
0812b92a +0x7fa:  call   0812b774 <+0x644>
0812b92f +0x7ff:  leave
0812b930 +0x800:  ret
0812b931 +0x801:  nop
0812b932 +0x802:  push   %ebp
0812b933 +0x803:  mov    %esp,%ebp
0812b935 +0x805:  sub    $0x18,%esp
0812b938 +0x808:  mov    0xc(%ebp),%eax
0812b93b +0x80b:  mov    %eax,(%esp)
0812b93e +0x80e:  call   0812bb2a <+0x9fa>
0812b943 +0x813:  mov    0x8(%ebp),%edx
0812b946 +0x816:  mov    (%eax),%eax
0812b948 +0x818:  mov    %eax,(%edx)
0812b94a +0x81a:  mov    0x10(%ebp),%eax
0812b94d +0x81d:  mov    %eax,(%esp)
0812b950 +0x820:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0812b955 +0x825:  movzbl (%eax),%edx
0812b958 +0x828:  mov    0x8(%ebp),%eax
0812b95b +0x82b:  mov    %dl,0x4(%eax)
0812b95e +0x82e:  leave
0812b95f +0x82f:  ret
0812b960 +0x830:  push   %ebp
0812b961 +0x831:  mov    %esp,%ebp
0812b963 +0x833:  mov    0x8(%ebp),%eax
0812b966 +0x836:  mov    0x8(%eax),%eax
0812b969 +0x839:  pop    %ebp
0812b96a +0x83a:  ret
0812b96b +0x83b:  nop
0812b96c +0x83c:  push   %ebp
0812b96d +0x83d:  mov    %esp,%ebp
0812b96f +0x83f:  mov    0x8(%ebp),%eax
0812b972 +0x842:  add    $0x4,%eax
0812b975 +0x845:  pop    %ebp
0812b976 +0x846:  ret
0812b977 +0x847:  nop
0812b978 +0x848:  push   %ebp
0812b979 +0x849:  mov    %esp,%ebp
0812b97b +0x84b:  push   %ebx
0812b97c +0x84c:  sub    $0x14,%esp
0812b97f +0x84f:  mov    0x8(%ebp),%ebx
0812b982 +0x852:  jmp    0812b9d0 <+0x8a0>
0812b984 +0x854:  mov    0x10(%ebp),%eax
0812b987 +0x857:  mov    %eax,(%esp)
0812b98a +0x85a:  call   0812b77c <+0x64c>
0812b98f +0x85f:  mov    0xc(%ebp),%edx
0812b992 +0x862:  mov    0x18(%ebp),%ecx
0812b995 +0x865:  mov    %ecx,0x8(%esp)
0812b999 +0x869:  mov    %eax,0x4(%esp)
0812b99d +0x86d:  mov    %edx,(%esp)
0812b9a0 +0x870:  call   0812b79e <+0x66e>
0812b9a5 +0x875:  xor    $0x1,%eax
0812b9a8 +0x878:  test   %al,%al
0812b9aa +0x87a:  je     0812b9c2 <+0x892>
0812b9ac +0x87c:  mov    0x10(%ebp),%eax
0812b9af +0x87f:  mov    %eax,0x14(%ebp)
0812b9b2 +0x882:  mov    0x10(%ebp),%eax
0812b9b5 +0x885:  mov    %eax,(%esp)
0812b9b8 +0x888:  call   0812bb32 <+0xa02>
0812b9bd +0x88d:  mov    %eax,0x10(%ebp)
0812b9c0 +0x890:  jmp    0812b9d0 <+0x8a0>
0812b9c2 +0x892:  mov    0x10(%ebp),%eax
0812b9c5 +0x895:  mov    %eax,(%esp)
0812b9c8 +0x898:  call   0812bb3d <+0xa0d>
0812b9cd +0x89d:  mov    %eax,0x10(%ebp)
0812b9d0 +0x8a0:  cmpl   $0x0,0x10(%ebp)
0812b9d4 +0x8a4:  setne  %al
0812b9d7 +0x8a7:  test   %al,%al
0812b9d9 +0x8a9:  jne    0812b984 <+0x854>
0812b9db +0x8ab:  mov    0x14(%ebp),%eax
0812b9de +0x8ae:  mov    %eax,0x4(%esp)
0812b9e2 +0x8b2:  mov    %ebx,(%esp)
0812b9e5 +0x8b5:  call   0812b9f4 <+0x8c4>
0812b9ea +0x8ba:  mov    %ebx,%eax
0812b9ec +0x8bc:  add    $0x14,%esp
0812b9ef +0x8bf:  pop    %ebx
0812b9f0 +0x8c0:  pop    %ebp
0812b9f1 +0x8c1:  ret    $0x4
0812b9f4 +0x8c4:  push   %ebp
0812b9f5 +0x8c5:  mov    %esp,%ebp
0812b9f7 +0x8c7:  mov    0xc(%ebp),%edx
0812b9fa +0x8ca:  mov    0x8(%ebp),%eax
0812b9fd +0x8cd:  mov    %edx,(%eax)
0812b9ff +0x8cf:  pop    %ebp
0812ba00 +0x8d0:  ret
0812ba01 +0x8d1:  nop
0812ba02 +0x8d2:  push   %ebp
0812ba03 +0x8d3:  mov    %esp,%ebp
0812ba05 +0x8d5:  mov    0x8(%ebp),%eax
0812ba08 +0x8d8:  pop    %ebp
0812ba09 +0x8d9:  ret
0812ba0a +0x8da:  push   %ebp
0812ba0b +0x8db:  mov    %esp,%ebp
0812ba0d +0x8dd:  pop    %ebp
0812ba0e +0x8de:  ret
0812ba0f +0x8df:  nop
0812ba10 +0x8e0:  push   %ebp
0812ba11 +0x8e1:  mov    %esp,%ebp
0812ba13 +0x8e3:  sub    $0x18,%esp
0812ba16 +0x8e6:  mov    0xc(%ebp),%eax
0812ba19 +0x8e9:  mov    %eax,(%esp)
0812ba1c +0x8ec:  call   0812ba0a <+0x8da>
0812ba21 +0x8f1:  leave
0812ba22 +0x8f2:  ret
0812ba23 +0x8f3:  nop
0812ba24 +0x8f4:  push   %ebp
0812ba25 +0x8f5:  mov    %esp,%ebp
0812ba27 +0x8f7:  sub    $0x18,%esp
0812ba2a +0x8fa:  mov    0x8(%ebp),%eax
0812ba2d +0x8fd:  movl   $0x1,0x8(%esp)
0812ba35 +0x905:  mov    0xc(%ebp),%edx
0812ba38 +0x908:  mov    %edx,0x4(%esp)
0812ba3c +0x90c:  mov    %eax,(%esp)
0812ba3f +0x90f:  call   0812bb48 <+0xa18>
0812ba44 +0x914:  leave
0812ba45 +0x915:  ret
0812ba46 +0x916:  push   %ebp
0812ba47 +0x917:  mov    %esp,%ebp
0812ba49 +0x919:  sub    $0x18,%esp
0812ba4c +0x91c:  mov    0x8(%ebp),%eax
0812ba4f +0x91f:  mov    %eax,(%esp)
0812ba52 +0x922:  call   0812bb5c <+0xa2c>
0812ba57 +0x927:  leave
0812ba58 +0x928:  ret
0812ba59 +0x929:  nop
0812ba5a +0x92a:  push   %ebp
0812ba5b +0x92b:  mov    %esp,%ebp
0812ba5d +0x92d:  mov    0x8(%ebp),%eax
0812ba60 +0x930:  movl   $0x0,0x4(%eax)
0812ba67 +0x937:  mov    0x8(%ebp),%eax
0812ba6a +0x93a:  movl   $0x0,0x8(%eax)
0812ba71 +0x941:  mov    0x8(%ebp),%eax
0812ba74 +0x944:  lea    0x4(%eax),%edx
0812ba77 +0x947:  mov    0x8(%ebp),%eax
0812ba7a +0x94a:  mov    %edx,0xc(%eax)
0812ba7d +0x94d:  mov    0x8(%ebp),%eax
0812ba80 +0x950:  lea    0x4(%eax),%edx
0812ba83 +0x953:  mov    0x8(%ebp),%eax
0812ba86 +0x956:  mov    %edx,0x10(%eax)
0812ba89 +0x959:  pop    %ebp
0812ba8a +0x95a:  ret
0812ba8b +0x95b:  push   %ebp
0812ba8c +0x95c:  mov    %esp,%ebp
0812ba8e +0x95e:  mov    0x8(%ebp),%eax
0812ba91 +0x961:  add    $0x10,%eax
0812ba94 +0x964:  pop    %ebp
0812ba95 +0x965:  ret
0812ba96 +0x966:  push   %ebp
0812ba97 +0x967:  mov    %esp,%ebp
0812ba99 +0x969:  push   %esi
0812ba9a +0x96a:  push   %ebx
0812ba9b +0x96b:  sub    $0x20,%esp
0812ba9e +0x96e:  mov    0x8(%ebp),%eax
0812baa1 +0x971:  mov    %eax,(%esp)
0812baa4 +0x974:  call   0812bb62 <+0xa32>
0812baa9 +0x979:  mov    %eax,-0xc(%ebp)
0812baac +0x97c:  mov    0xc(%ebp),%eax
0812baaf +0x97f:  mov    %eax,(%esp)
0812bab2 +0x982:  call   0812bb85 <+0xa55>
0812bab7 +0x987:  mov    %eax,%ebx
0812bab9 +0x989:  mov    0x8(%ebp),%eax
0812babc +0x98c:  mov    %eax,(%esp)
0812babf +0x98f:  call   0812ba02 <+0x8d2>
0812bac4 +0x994:  mov    %ebx,0x8(%esp)
0812bac8 +0x998:  mov    -0xc(%ebp),%edx
0812bacb +0x99b:  mov    %edx,0x4(%esp)
0812bacf +0x99f:  mov    %eax,(%esp)
0812bad2 +0x9a2:  call   0812bb8e <+0xa5e>
0812bad7 +0x9a7:  jmp    0812bb0d <+0x9dd>
0812bad9 +0x9a9:  mov    %eax,(%esp)
0812badc +0x9ac:  call   08725ce0 <__cxa_begin_catch>
0812bae1 +0x9b1:  mov    -0xc(%ebp),%eax
0812bae4 +0x9b4:  mov    %eax,0x4(%esp)
0812bae8 +0x9b8:  mov    0x8(%ebp),%eax
0812baeb +0x9bb:  mov    %eax,(%esp)
0812baee +0x9be:  call   0812ba24 <+0x8f4>
0812baf3 +0x9c3:  call   08724be0 <__cxa_rethrow>
0812baf8 +0x9c8:  mov    %edx,%ebx
0812bafa +0x9ca:  mov    %eax,%esi
0812bafc +0x9cc:  call   08725c30 <__cxa_end_catch>
0812bb01 +0x9d1:  mov    %esi,%eax
0812bb03 +0x9d3:  mov    %ebx,%edx
0812bb05 +0x9d5:  mov    %eax,(%esp)
0812bb08 +0x9d8:  call   08ae3750 <_Unwind_Resume>
0812bb0d +0x9dd:  mov    -0xc(%ebp),%eax
0812bb10 +0x9e0:  add    $0x20,%esp
0812bb13 +0x9e3:  pop    %ebx
0812bb14 +0x9e4:  pop    %esi
0812bb15 +0x9e5:  pop    %ebp
0812bb16 +0x9e6:  ret
0812bb17 +0x9e7:  push   %ebp
0812bb18 +0x9e8:  mov    %esp,%ebp
0812bb1a +0x9ea:  mov    0x8(%ebp),%eax
0812bb1d +0x9ed:  pop    %ebp
0812bb1e +0x9ee:  ret
0812bb1f +0x9ef:  push   %ebp
0812bb20 +0x9f0:  mov    %esp,%ebp
0812bb22 +0x9f2:  mov    0x8(%ebp),%eax
0812bb25 +0x9f5:  add    $0x10,%eax
0812bb28 +0x9f8:  pop    %ebp
0812bb29 +0x9f9:  ret
0812bb2a +0x9fa:  push   %ebp
0812bb2b +0x9fb:  mov    %esp,%ebp
0812bb2d +0x9fd:  mov    0x8(%ebp),%eax
0812bb30 +0xa00:  pop    %ebp
0812bb31 +0xa01:  ret
0812bb32 +0xa02:  push   %ebp
0812bb33 +0xa03:  mov    %esp,%ebp
0812bb35 +0xa05:  mov    0x8(%ebp),%eax
0812bb38 +0xa08:  mov    0x8(%eax),%eax
0812bb3b +0xa0b:  pop    %ebp
0812bb3c +0xa0c:  ret
0812bb3d +0xa0d:  push   %ebp
0812bb3e +0xa0e:  mov    %esp,%ebp
0812bb40 +0xa10:  mov    0x8(%ebp),%eax
0812bb43 +0xa13:  mov    0xc(%eax),%eax
0812bb46 +0xa16:  pop    %ebp
0812bb47 +0xa17:  ret
0812bb48 +0xa18:  push   %ebp
0812bb49 +0xa19:  mov    %esp,%ebp
0812bb4b +0xa1b:  sub    $0x18,%esp
0812bb4e +0xa1e:  mov    0xc(%ebp),%eax
0812bb51 +0xa21:  mov    %eax,(%esp)
0812bb54 +0xa24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812bb59 +0xa29:  leave
0812bb5a +0xa2a:  ret
0812bb5b +0xa2b:  nop
0812bb5c +0xa2c:  push   %ebp
0812bb5d +0xa2d:  mov    %esp,%ebp
0812bb5f +0xa2f:  pop    %ebp
0812bb60 +0xa30:  ret
0812bb61 +0xa31:  nop
0812bb62 +0xa32:  push   %ebp
0812bb63 +0xa33:  mov    %esp,%ebp
0812bb65 +0xa35:  sub    $0x18,%esp
0812bb68 +0xa38:  mov    0x8(%ebp),%eax
0812bb6b +0xa3b:  movl   $0x0,0x8(%esp)
0812bb73 +0xa43:  movl   $0x1,0x4(%esp)
0812bb7b +0xa4b:  mov    %eax,(%esp)
0812bb7e +0xa4e:  call   0812bbce <+0xa9e>
0812bb83 +0xa53:  leave
0812bb84 +0xa54:  ret
0812bb85 +0xa55:  push   %ebp
0812bb86 +0xa56:  mov    %esp,%ebp
0812bb88 +0xa58:  mov    0x8(%ebp),%eax
0812bb8b +0xa5b:  pop    %ebp
0812bb8c +0xa5c:  ret
0812bb8d +0xa5d:  nop
0812bb8e +0xa5e:  push   %ebp
0812bb8f +0xa5f:  mov    %esp,%ebp
0812bb91 +0xa61:  push   %ebx
0812bb92 +0xa62:  sub    $0x14,%esp
0812bb95 +0xa65:  mov    0x10(%ebp),%eax
0812bb98 +0xa68:  mov    %eax,(%esp)
0812bb9b +0xa6b:  call   0812bb85 <+0xa55>
0812bba0 +0xa70:  mov    %eax,%ebx
0812bba2 +0xa72:  mov    0xc(%ebp),%eax
0812bba5 +0xa75:  mov    %eax,0x4(%esp)
0812bba9 +0xa79:  movl   $0x18,(%esp)
0812bbb0 +0xa80:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0812bbb5 +0xa85:  mov    %eax,%edx
0812bbb7 +0xa87:  test   %edx,%edx
0812bbb9 +0xa89:  je     0812bbc7 <+0xa97>
0812bbbb +0xa8b:  mov    %ebx,0x4(%esp)
0812bbbf +0xa8f:  mov    %eax,(%esp)
0812bbc2 +0xa92:  call   0812bc0c <+0xadc>
0812bbc7 +0xa97:  add    $0x14,%esp
0812bbca +0xa9a:  pop    %ebx
0812bbcb +0xa9b:  pop    %ebp
0812bbcc +0xa9c:  ret
0812bbcd +0xa9d:  nop
0812bbce +0xa9e:  push   %ebp
0812bbcf +0xa9f:  mov    %esp,%ebp
0812bbd1 +0xaa1:  sub    $0x18,%esp
0812bbd4 +0xaa4:  mov    0x8(%ebp),%eax
0812bbd7 +0xaa7:  mov    %eax,(%esp)
0812bbda +0xaaa:  call   0812bc54 <+0xb24>
0812bbdf +0xaaf:  cmp    0xc(%ebp),%eax
0812bbe2 +0xab2:  setb   %al
0812bbe5 +0xab5:  movzbl %al,%eax
0812bbe8 +0xab8:  test   %eax,%eax
0812bbea +0xaba:  setne  %al
0812bbed +0xabd:  test   %al,%al
0812bbef +0xabf:  je     0812bbf6 <+0xac6>
0812bbf1 +0xac1:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0812bbf6 +0xac6:  mov    0xc(%ebp),%edx
0812bbf9 +0xac9:  mov    %edx,%eax
0812bbfb +0xacb:  add    %eax,%eax
0812bbfd +0xacd:  add    %edx,%eax
0812bbff +0xacf:  shl    $0x3,%eax
0812bc02 +0xad2:  mov    %eax,(%esp)
0812bc05 +0xad5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0812bc0a +0xada:  leave
0812bc0b +0xadb:  ret
0812bc0c +0xadc:  push   %ebp
0812bc0d +0xadd:  mov    %esp,%ebp
0812bc0f +0xadf:  sub    $0x18,%esp
0812bc12 +0xae2:  mov    0x8(%ebp),%eax
0812bc15 +0xae5:  movl   $0x0,(%eax)
0812bc1b +0xaeb:  mov    0x8(%ebp),%eax
0812bc1e +0xaee:  movl   $0x0,0x4(%eax)
0812bc25 +0xaf5:  mov    0x8(%ebp),%eax
0812bc28 +0xaf8:  movl   $0x0,0x8(%eax)
0812bc2f +0xaff:  mov    0x8(%ebp),%eax
0812bc32 +0xb02:  movl   $0x0,0xc(%eax)
0812bc39 +0xb09:  mov    0xc(%ebp),%eax
0812bc3c +0xb0c:  mov    %eax,(%esp)
0812bc3f +0xb0f:  call   0812bb85 <+0xa55>
0812bc44 +0xb14:  mov    0x8(%ebp),%ecx
0812bc47 +0xb17:  mov    0x4(%eax),%edx
0812bc4a +0xb1a:  mov    (%eax),%eax
0812bc4c +0xb1c:  mov    %eax,0x10(%ecx)
0812bc4f +0xb1f:  mov    %edx,0x14(%ecx)
0812bc52 +0xb22:  leave
0812bc53 +0xb23:  ret
0812bc54 +0xb24:  push   %ebp
0812bc55 +0xb25:  mov    %esp,%ebp
0812bc57 +0xb27:  mov    $0xaaaaaaa,%eax
0812bc5c +0xb2c:  pop    %ebp
0812bc5d +0xb2d:  ret
0812bc5e +0xb2e:  nop
0812bc5f +0xb2f:  nop
```

## 反编译 C

```c
// <global>::global @ 0x812b130

/* CLocalChinaErrorDispatcher::CLocalChinaErrorDispatcher() */

void CLocalChinaErrorDispatcher::_GLOBAL__I_CLocalChinaErrorDispatcher(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
