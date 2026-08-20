# Arad_StatisticsEventItemList

`_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev`

`global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::Arad_StatisticsEventItemList` | `0x0819d16f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819d16f  _GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev
#           global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()
# range [0x0819d16f, 0x0819dc17]
0819d16f +0x000:  push   %ebp
0819d170 +0x001:  mov    %esp,%ebp
0819d172 +0x003:  sub    $0x18,%esp
0819d175 +0x006:  movl   $0xffff,0x4(%esp)
0819d17d +0x00e:  movl   $0x1,(%esp)
0819d184 +0x015:  call   0819d12f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0819d189 +0x01a:  leave
0819d18a +0x01b:  ret
0819d18b +0x01c:  nop
0819d18c +0x01d:  push   %ebp
0819d18d +0x01e:  mov    %esp,%ebp
0819d18f +0x020:  sub    $0x28,%esp
0819d192 +0x023:  mov    0xc(%ebp),%eax
0819d195 +0x026:  mov    %eax,(%esp)
0819d198 +0x029:  call   08080fec <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1012>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1012
0819d19d +0x02e:  mov    (%eax),%eax
0819d19f +0x030:  mov    %eax,-0xc(%ebp)
0819d1a2 +0x033:  lea    -0xc(%ebp),%eax
0819d1a5 +0x036:  mov    %eax,0x4(%esp)
0819d1a9 +0x03a:  mov    0x8(%ebp),%eax
0819d1ac +0x03d:  mov    %eax,(%esp)
0819d1af +0x040:  call   0819d280 <+0x111>
0819d1b4 +0x045:  leave
0819d1b5 +0x046:  ret
0819d1b6 +0x047:  push   %ebp
0819d1b7 +0x048:  mov    %esp,%ebp
0819d1b9 +0x04a:  push   %ebx
0819d1ba +0x04b:  sub    $0x14,%esp
0819d1bd +0x04e:  mov    0x8(%ebp),%ebx
0819d1c0 +0x051:  mov    0xc(%ebp),%eax
0819d1c3 +0x054:  mov    %eax,0x4(%esp)
0819d1c7 +0x058:  mov    %ebx,(%esp)
0819d1ca +0x05b:  call   0819d314 <+0x1a5>
0819d1cf +0x060:  mov    %ebx,%eax
0819d1d1 +0x062:  add    $0x14,%esp
0819d1d4 +0x065:  pop    %ebx
0819d1d5 +0x066:  pop    %ebp
0819d1d6 +0x067:  ret    $0x4
0819d1d9 +0x06a:  nop
0819d1da +0x06b:  push   %ebp
0819d1db +0x06c:  mov    %esp,%ebp
0819d1dd +0x06e:  push   %ebx
0819d1de +0x06f:  sub    $0x14,%esp
0819d1e1 +0x072:  mov    0x8(%ebp),%ebx
0819d1e4 +0x075:  mov    0xc(%ebp),%eax
0819d1e7 +0x078:  add    $0x4,%eax
0819d1ea +0x07b:  mov    %eax,0x4(%esp)
0819d1ee +0x07f:  mov    %ebx,(%esp)
0819d1f1 +0x082:  call   0819d314 <+0x1a5>
0819d1f6 +0x087:  mov    %ebx,%eax
0819d1f8 +0x089:  add    $0x14,%esp
0819d1fb +0x08c:  pop    %ebx
0819d1fc +0x08d:  pop    %ebp
0819d1fd +0x08e:  ret    $0x4
0819d200 +0x091:  push   %ebp
0819d201 +0x092:  mov    %esp,%ebp
0819d203 +0x094:  push   %esi
0819d204 +0x095:  push   %ebx
0819d205 +0x096:  sub    $0x30,%esp
0819d208 +0x099:  mov    0x8(%ebp),%ebx
0819d20b +0x09c:  lea    -0x9(%ebp),%eax
0819d20e +0x09f:  lea    0xc(%ebp),%edx
0819d211 +0x0a2:  mov    %edx,0x4(%esp)
0819d215 +0x0a6:  mov    %eax,(%esp)
0819d218 +0x0a9:  call   0819d323 <+0x1b4>
0819d21d +0x0ae:  sub    $0x4,%esp
0819d220 +0x0b1:  mov    %esi,%eax
0819d222 +0x0b3:  mov    %al,0x10(%esp)
0819d226 +0x0b7:  mov    0x14(%ebp),%eax
0819d229 +0x0ba:  mov    %eax,0xc(%esp)
0819d22d +0x0be:  mov    0x10(%ebp),%eax
0819d230 +0x0c1:  mov    %eax,0x8(%esp)
0819d234 +0x0c5:  mov    0xc(%ebp),%eax
0819d237 +0x0c8:  mov    %eax,0x4(%esp)
0819d23b +0x0cc:  mov    %ebx,(%esp)
0819d23e +0x0cf:  call   0819d32d <+0x1be>
0819d243 +0x0d4:  sub    $0x4,%esp
0819d246 +0x0d7:  mov    %ebx,%eax
0819d248 +0x0d9:  lea    -0x8(%ebp),%esp
0819d24b +0x0dc:  add    $0x0,%esp
0819d24e +0x0df:  pop    %ebx
0819d24f +0x0e0:  pop    %esi
0819d250 +0x0e1:  pop    %ebp
0819d251 +0x0e2:  ret    $0x4
0819d254 +0x0e5:  push   %ebp
0819d255 +0x0e6:  mov    %esp,%ebp
0819d257 +0x0e8:  push   %ebx
0819d258 +0x0e9:  sub    $0x14,%esp
0819d25b +0x0ec:  mov    0x8(%ebp),%eax
0819d25e +0x0ef:  mov    %eax,(%esp)
0819d261 +0x0f2:  call   0819d4e4 <+0x375>
0819d266 +0x0f7:  mov    (%eax),%ebx
0819d268 +0x0f9:  mov    0xc(%ebp),%eax
0819d26b +0x0fc:  mov    %eax,(%esp)
0819d26e +0x0ff:  call   0819d4e4 <+0x375>
0819d273 +0x104:  mov    (%eax),%eax
0819d275 +0x106:  cmp    %eax,%ebx
0819d277 +0x108:  setne  %al
0819d27a +0x10b:  add    $0x14,%esp
0819d27d +0x10e:  pop    %ebx
0819d27e +0x10f:  pop    %ebp
0819d27f +0x110:  ret
0819d280 +0x111:  push   %ebp
0819d281 +0x112:  mov    %esp,%ebp
0819d283 +0x114:  sub    $0x28,%esp
0819d286 +0x117:  mov    0x8(%ebp),%eax
0819d289 +0x11a:  mov    0x4(%eax),%edx
0819d28c +0x11d:  mov    0x8(%ebp),%eax
0819d28f +0x120:  mov    0x8(%eax),%eax
0819d292 +0x123:  cmp    %eax,%edx
0819d294 +0x125:  je     0819d2d3 <+0x164>
0819d296 +0x127:  mov    0xc(%ebp),%eax
0819d299 +0x12a:  mov    %eax,(%esp)
0819d29c +0x12d:  call   0819d4ec <+0x37d>
0819d2a1 +0x132:  mov    (%eax),%eax
0819d2a3 +0x134:  mov    %eax,-0x14(%ebp)
0819d2a6 +0x137:  mov    0x8(%ebp),%eax
0819d2a9 +0x13a:  mov    0x4(%eax),%edx
0819d2ac +0x13d:  mov    0x8(%ebp),%eax
0819d2af +0x140:  lea    -0x14(%ebp),%ecx
0819d2b2 +0x143:  mov    %ecx,0x8(%esp)
0819d2b6 +0x147:  mov    %edx,0x4(%esp)
0819d2ba +0x14b:  mov    %eax,(%esp)
0819d2bd +0x14e:  call   0819d4f4 <+0x385>
0819d2c2 +0x153:  mov    0x8(%ebp),%eax
0819d2c5 +0x156:  mov    0x4(%eax),%eax
0819d2c8 +0x159:  lea    0x4(%eax),%edx
0819d2cb +0x15c:  mov    0x8(%ebp),%eax
0819d2ce +0x15f:  mov    %edx,0x4(%eax)
0819d2d1 +0x162:  jmp    0819d311 <+0x1a2>
0819d2d3 +0x164:  mov    0xc(%ebp),%eax
0819d2d6 +0x167:  mov    %eax,(%esp)
0819d2d9 +0x16a:  call   0819d4ec <+0x37d>
0819d2de +0x16f:  mov    (%eax),%eax
0819d2e0 +0x171:  mov    %eax,-0x10(%ebp)
0819d2e3 +0x174:  lea    -0xc(%ebp),%eax
0819d2e6 +0x177:  mov    0x8(%ebp),%edx
0819d2e9 +0x17a:  mov    %edx,0x4(%esp)
0819d2ed +0x17e:  mov    %eax,(%esp)
0819d2f0 +0x181:  call   0819d1da <+0x6b>
0819d2f5 +0x186:  sub    $0x4,%esp
0819d2f8 +0x189:  lea    -0x10(%ebp),%eax
0819d2fb +0x18c:  mov    %eax,0x8(%esp)
0819d2ff +0x190:  mov    -0xc(%ebp),%eax
0819d302 +0x193:  mov    %eax,0x4(%esp)
0819d306 +0x197:  mov    0x8(%ebp),%eax
0819d309 +0x19a:  mov    %eax,(%esp)
0819d30c +0x19d:  call   0819d52a <+0x3bb>
0819d311 +0x1a2:  leave
0819d312 +0x1a3:  ret
0819d313 +0x1a4:  nop
0819d314 +0x1a5:  push   %ebp
0819d315 +0x1a6:  mov    %esp,%ebp
0819d317 +0x1a8:  mov    0xc(%ebp),%eax
0819d31a +0x1ab:  mov    (%eax),%edx
0819d31c +0x1ad:  mov    0x8(%ebp),%eax
0819d31f +0x1b0:  mov    %edx,(%eax)
0819d321 +0x1b2:  pop    %ebp
0819d322 +0x1b3:  ret
0819d323 +0x1b4:  push   %ebp
0819d324 +0x1b5:  mov    %esp,%ebp
0819d326 +0x1b7:  mov    0x8(%ebp),%eax
0819d329 +0x1ba:  pop    %ebp
0819d32a +0x1bb:  ret    $0x4
0819d32d +0x1be:  push   %ebp
0819d32e +0x1bf:  mov    %esp,%ebp
0819d330 +0x1c1:  push   %ebx
0819d331 +0x1c2:  sub    $0x24,%esp
0819d334 +0x1c5:  mov    0x8(%ebp),%ebx
0819d337 +0x1c8:  lea    0xc(%ebp),%eax
0819d33a +0x1cb:  mov    %eax,0x4(%esp)
0819d33e +0x1cf:  lea    0x10(%ebp),%eax
0819d341 +0x1d2:  mov    %eax,(%esp)
0819d344 +0x1d5:  call   0819d7eb <+0x67c>
0819d349 +0x1da:  sar    $0x2,%eax
0819d34c +0x1dd:  mov    %eax,-0xc(%ebp)
0819d34f +0x1e0:  jmp    0819d418 <+0x2a9>
0819d354 +0x1e5:  lea    0xc(%ebp),%eax
0819d357 +0x1e8:  mov    %eax,(%esp)
0819d35a +0x1eb:  call   0819d81e <+0x6af>
0819d35f +0x1f0:  mov    (%eax),%edx
0819d361 +0x1f2:  mov    0x14(%ebp),%eax
0819d364 +0x1f5:  mov    (%eax),%eax
0819d366 +0x1f7:  cmp    %eax,%edx
0819d368 +0x1f9:  sete   %al
0819d36b +0x1fc:  test   %al,%al
0819d36d +0x1fe:  je     0819d379 <+0x20a>
0819d36f +0x200:  mov    0xc(%ebp),%eax
0819d372 +0x203:  mov    %eax,(%ebx)
0819d374 +0x205:  jmp    0819d4d9 <+0x36a>
0819d379 +0x20a:  lea    0xc(%ebp),%eax
0819d37c +0x20d:  mov    %eax,(%esp)
0819d37f +0x210:  call   0819d828 <+0x6b9>
0819d384 +0x215:  lea    0xc(%ebp),%eax
0819d387 +0x218:  mov    %eax,(%esp)
0819d38a +0x21b:  call   0819d81e <+0x6af>
0819d38f +0x220:  mov    (%eax),%edx
0819d391 +0x222:  mov    0x14(%ebp),%eax
0819d394 +0x225:  mov    (%eax),%eax
0819d396 +0x227:  cmp    %eax,%edx
0819d398 +0x229:  sete   %al
0819d39b +0x22c:  test   %al,%al
0819d39d +0x22e:  je     0819d3a9 <+0x23a>
0819d39f +0x230:  mov    0xc(%ebp),%eax
0819d3a2 +0x233:  mov    %eax,(%ebx)
0819d3a4 +0x235:  jmp    0819d4d9 <+0x36a>
0819d3a9 +0x23a:  lea    0xc(%ebp),%eax
0819d3ac +0x23d:  mov    %eax,(%esp)
0819d3af +0x240:  call   0819d828 <+0x6b9>
0819d3b4 +0x245:  lea    0xc(%ebp),%eax
0819d3b7 +0x248:  mov    %eax,(%esp)
0819d3ba +0x24b:  call   0819d81e <+0x6af>
0819d3bf +0x250:  mov    (%eax),%edx
0819d3c1 +0x252:  mov    0x14(%ebp),%eax
0819d3c4 +0x255:  mov    (%eax),%eax
0819d3c6 +0x257:  cmp    %eax,%edx
0819d3c8 +0x259:  sete   %al
0819d3cb +0x25c:  test   %al,%al
0819d3cd +0x25e:  je     0819d3d9 <+0x26a>
0819d3cf +0x260:  mov    0xc(%ebp),%eax
0819d3d2 +0x263:  mov    %eax,(%ebx)
0819d3d4 +0x265:  jmp    0819d4d9 <+0x36a>
0819d3d9 +0x26a:  lea    0xc(%ebp),%eax
0819d3dc +0x26d:  mov    %eax,(%esp)
0819d3df +0x270:  call   0819d828 <+0x6b9>
0819d3e4 +0x275:  lea    0xc(%ebp),%eax
0819d3e7 +0x278:  mov    %eax,(%esp)
0819d3ea +0x27b:  call   0819d81e <+0x6af>
0819d3ef +0x280:  mov    (%eax),%edx
0819d3f1 +0x282:  mov    0x14(%ebp),%eax
0819d3f4 +0x285:  mov    (%eax),%eax
0819d3f6 +0x287:  cmp    %eax,%edx
0819d3f8 +0x289:  sete   %al
0819d3fb +0x28c:  test   %al,%al
0819d3fd +0x28e:  je     0819d409 <+0x29a>
0819d3ff +0x290:  mov    0xc(%ebp),%eax
0819d402 +0x293:  mov    %eax,(%ebx)
0819d404 +0x295:  jmp    0819d4d9 <+0x36a>
0819d409 +0x29a:  lea    0xc(%ebp),%eax
0819d40c +0x29d:  mov    %eax,(%esp)
0819d40f +0x2a0:  call   0819d828 <+0x6b9>
0819d414 +0x2a5:  subl   $0x1,-0xc(%ebp)
0819d418 +0x2a9:  cmpl   $0x0,-0xc(%ebp)
0819d41c +0x2ad:  setg   %al
0819d41f +0x2b0:  test   %al,%al
0819d421 +0x2b2:  jne    0819d354 <+0x1e5>
0819d427 +0x2b8:  lea    0xc(%ebp),%eax
0819d42a +0x2bb:  mov    %eax,0x4(%esp)
0819d42e +0x2bf:  lea    0x10(%ebp),%eax
0819d431 +0x2c2:  mov    %eax,(%esp)
0819d434 +0x2c5:  call   0819d7eb <+0x67c>
0819d439 +0x2ca:  cmp    $0x2,%eax
0819d43c +0x2cd:  je     0819d47a <+0x30b>
0819d43e +0x2cf:  cmp    $0x3,%eax
0819d441 +0x2d2:  je     0819d44d <+0x2de>
0819d443 +0x2d4:  cmp    $0x1,%eax
0819d446 +0x2d7:  je     0819d4a7 <+0x338>
0819d448 +0x2d9:  jmp    0819d4d4 <+0x365>
0819d44d +0x2de:  lea    0xc(%ebp),%eax
0819d450 +0x2e1:  mov    %eax,(%esp)
0819d453 +0x2e4:  call   0819d81e <+0x6af>
0819d458 +0x2e9:  mov    (%eax),%edx
0819d45a +0x2eb:  mov    0x14(%ebp),%eax
0819d45d +0x2ee:  mov    (%eax),%eax
0819d45f +0x2f0:  cmp    %eax,%edx
0819d461 +0x2f2:  sete   %al
0819d464 +0x2f5:  test   %al,%al
0819d466 +0x2f7:  je     0819d46f <+0x300>
0819d468 +0x2f9:  mov    0xc(%ebp),%eax
0819d46b +0x2fc:  mov    %eax,(%ebx)
0819d46d +0x2fe:  jmp    0819d4d9 <+0x36a>
0819d46f +0x300:  lea    0xc(%ebp),%eax
0819d472 +0x303:  mov    %eax,(%esp)
0819d475 +0x306:  call   0819d828 <+0x6b9>
0819d47a +0x30b:  lea    0xc(%ebp),%eax
0819d47d +0x30e:  mov    %eax,(%esp)
0819d480 +0x311:  call   0819d81e <+0x6af>
0819d485 +0x316:  mov    (%eax),%edx
0819d487 +0x318:  mov    0x14(%ebp),%eax
0819d48a +0x31b:  mov    (%eax),%eax
0819d48c +0x31d:  cmp    %eax,%edx
0819d48e +0x31f:  sete   %al
0819d491 +0x322:  test   %al,%al
0819d493 +0x324:  je     0819d49c <+0x32d>
0819d495 +0x326:  mov    0xc(%ebp),%eax
0819d498 +0x329:  mov    %eax,(%ebx)
0819d49a +0x32b:  jmp    0819d4d9 <+0x36a>
0819d49c +0x32d:  lea    0xc(%ebp),%eax
0819d49f +0x330:  mov    %eax,(%esp)
0819d4a2 +0x333:  call   0819d828 <+0x6b9>
0819d4a7 +0x338:  lea    0xc(%ebp),%eax
0819d4aa +0x33b:  mov    %eax,(%esp)
0819d4ad +0x33e:  call   0819d81e <+0x6af>
0819d4b2 +0x343:  mov    (%eax),%edx
0819d4b4 +0x345:  mov    0x14(%ebp),%eax
0819d4b7 +0x348:  mov    (%eax),%eax
0819d4b9 +0x34a:  cmp    %eax,%edx
0819d4bb +0x34c:  sete   %al
0819d4be +0x34f:  test   %al,%al
0819d4c0 +0x351:  je     0819d4c9 <+0x35a>
0819d4c2 +0x353:  mov    0xc(%ebp),%eax
0819d4c5 +0x356:  mov    %eax,(%ebx)
0819d4c7 +0x358:  jmp    0819d4d9 <+0x36a>
0819d4c9 +0x35a:  lea    0xc(%ebp),%eax
0819d4cc +0x35d:  mov    %eax,(%esp)
0819d4cf +0x360:  call   0819d828 <+0x6b9>
0819d4d4 +0x365:  mov    0x10(%ebp),%eax
0819d4d7 +0x368:  mov    %eax,(%ebx)
0819d4d9 +0x36a:  mov    %ebx,%eax
0819d4db +0x36c:  add    $0x24,%esp
0819d4de +0x36f:  pop    %ebx
0819d4df +0x370:  pop    %ebp
0819d4e0 +0x371:  ret    $0x4
0819d4e3 +0x374:  nop
0819d4e4 +0x375:  push   %ebp
0819d4e5 +0x376:  mov    %esp,%ebp
0819d4e7 +0x378:  mov    0x8(%ebp),%eax
0819d4ea +0x37b:  pop    %ebp
0819d4eb +0x37c:  ret
0819d4ec +0x37d:  push   %ebp
0819d4ed +0x37e:  mov    %esp,%ebp
0819d4ef +0x380:  mov    0x8(%ebp),%eax
0819d4f2 +0x383:  pop    %ebp
0819d4f3 +0x384:  ret
0819d4f4 +0x385:  push   %ebp
0819d4f5 +0x386:  mov    %esp,%ebp
0819d4f7 +0x388:  push   %ebx
0819d4f8 +0x389:  sub    $0x14,%esp
0819d4fb +0x38c:  mov    0x10(%ebp),%eax
0819d4fe +0x38f:  mov    %eax,(%esp)
0819d501 +0x392:  call   0819d4ec <+0x37d>
0819d506 +0x397:  mov    (%eax),%ebx
0819d508 +0x399:  mov    0xc(%ebp),%eax
0819d50b +0x39c:  mov    %eax,0x4(%esp)
0819d50f +0x3a0:  movl   $0x4,(%esp)
0819d516 +0x3a7:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0819d51b +0x3ac:  mov    %eax,%edx
0819d51d +0x3ae:  test   %edx,%edx
0819d51f +0x3b0:  je     0819d523 <+0x3b4>
0819d521 +0x3b2:  mov    %ebx,(%eax)
0819d523 +0x3b4:  add    $0x14,%esp
0819d526 +0x3b7:  pop    %ebx
0819d527 +0x3b8:  pop    %ebp
0819d528 +0x3b9:  ret
0819d529 +0x3ba:  nop
0819d52a +0x3bb:  push   %ebp
0819d52b +0x3bc:  mov    %esp,%ebp
0819d52d +0x3be:  push   %esi
0819d52e +0x3bf:  push   %ebx
0819d52f +0x3c0:  sub    $0x30,%esp
0819d532 +0x3c3:  mov    0x8(%ebp),%eax
0819d535 +0x3c6:  mov    0x4(%eax),%edx
0819d538 +0x3c9:  mov    0x8(%ebp),%eax
0819d53b +0x3cc:  mov    0x8(%eax),%eax
0819d53e +0x3cf:  cmp    %eax,%edx
0819d540 +0x3d1:  je     0819d5d7 <+0x468>
0819d546 +0x3d7:  mov    0x8(%ebp),%eax
0819d549 +0x3da:  mov    0x4(%eax),%eax
0819d54c +0x3dd:  sub    $0x4,%eax
0819d54f +0x3e0:  mov    %eax,(%esp)
0819d552 +0x3e3:  call   08080fec <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1012>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1012
0819d557 +0x3e8:  mov    (%eax),%eax
0819d559 +0x3ea:  mov    %eax,-0x24(%ebp)
0819d55c +0x3ed:  mov    0x8(%ebp),%eax
0819d55f +0x3f0:  mov    0x4(%eax),%edx
0819d562 +0x3f3:  mov    0x8(%ebp),%eax
0819d565 +0x3f6:  lea    -0x24(%ebp),%ecx
0819d568 +0x3f9:  mov    %ecx,0x8(%esp)
0819d56c +0x3fd:  mov    %edx,0x4(%esp)
0819d570 +0x401:  mov    %eax,(%esp)
0819d573 +0x404:  call   0819d4f4 <+0x385>
0819d578 +0x409:  mov    0x8(%ebp),%eax
0819d57b +0x40c:  mov    0x4(%eax),%eax
0819d57e +0x40f:  lea    0x4(%eax),%edx
0819d581 +0x412:  mov    0x8(%ebp),%eax
0819d584 +0x415:  mov    %edx,0x4(%eax)
0819d587 +0x418:  mov    0x8(%ebp),%eax
0819d58a +0x41b:  mov    0x4(%eax),%eax
0819d58d +0x41e:  lea    -0x4(%eax),%esi
0819d590 +0x421:  mov    0x8(%ebp),%eax
0819d593 +0x424:  mov    0x4(%eax),%eax
0819d596 +0x427:  lea    -0x8(%eax),%ebx
0819d599 +0x42a:  lea    0xc(%ebp),%eax
0819d59c +0x42d:  mov    %eax,(%esp)
0819d59f +0x430:  call   0819d4e4 <+0x375>
0819d5a4 +0x435:  mov    (%eax),%eax
0819d5a6 +0x437:  mov    %esi,0x8(%esp)
0819d5aa +0x43b:  mov    %ebx,0x4(%esp)
0819d5ae +0x43f:  mov    %eax,(%esp)
0819d5b1 +0x442:  call   0819d83d <+0x6ce>
0819d5b6 +0x447:  lea    0xc(%ebp),%eax
0819d5b9 +0x44a:  mov    %eax,(%esp)
0819d5bc +0x44d:  call   0819d81e <+0x6af>
0819d5c1 +0x452:  mov    %eax,%ebx
0819d5c3 +0x454:  mov    0x10(%ebp),%eax
0819d5c6 +0x457:  mov    %eax,(%esp)
0819d5c9 +0x45a:  call   0819d4ec <+0x37d>
0819d5ce +0x45f:  mov    (%eax),%eax
0819d5d0 +0x461:  mov    %eax,(%ebx)
0819d5d2 +0x463:  jmp    0819d7e1 <+0x672>
0819d5d7 +0x468:  movl   $"vector::_M_insert_aux",0x8(%esp)
0819d5df +0x470:  movl   $0x1,0x4(%esp)
0819d5e7 +0x478:  mov    0x8(%ebp),%eax
0819d5ea +0x47b:  mov    %eax,(%esp)
0819d5ed +0x47e:  call   0819d876 <+0x707>
0819d5f2 +0x483:  mov    %eax,-0x18(%ebp)
0819d5f5 +0x486:  lea    -0x20(%ebp),%eax
0819d5f8 +0x489:  mov    0x8(%ebp),%edx
0819d5fb +0x48c:  mov    %edx,0x4(%esp)
0819d5ff +0x490:  mov    %eax,(%esp)
0819d602 +0x493:  call   0819d1b6 <+0x47>
0819d607 +0x498:  sub    $0x4,%esp
0819d60a +0x49b:  lea    -0x20(%ebp),%eax
0819d60d +0x49e:  mov    %eax,0x4(%esp)
0819d611 +0x4a2:  lea    0xc(%ebp),%eax
0819d614 +0x4a5:  mov    %eax,(%esp)
0819d617 +0x4a8:  call   0819d7eb <+0x67c>
0819d61c +0x4ad:  mov    %eax,-0x14(%ebp)
0819d61f +0x4b0:  mov    0x8(%ebp),%eax
0819d622 +0x4b3:  mov    -0x18(%ebp),%edx
0819d625 +0x4b6:  mov    %edx,0x4(%esp)
0819d629 +0x4ba:  mov    %eax,(%esp)
0819d62c +0x4bd:  call   0819d91c <+0x7ad>
0819d631 +0x4c2:  mov    %eax,-0x10(%ebp)
0819d634 +0x4c5:  mov    -0x10(%ebp),%eax
0819d637 +0x4c8:  mov    %eax,-0xc(%ebp)
0819d63a +0x4cb:  mov    0x10(%ebp),%eax
0819d63d +0x4ce:  mov    %eax,(%esp)
0819d640 +0x4d1:  call   0819d4ec <+0x37d>
0819d645 +0x4d6:  mov    (%eax),%eax
0819d647 +0x4d8:  mov    %eax,-0x1c(%ebp)
0819d64a +0x4db:  mov    -0x14(%ebp),%eax
0819d64d +0x4de:  shl    $0x2,%eax
0819d650 +0x4e1:  mov    %eax,%edx
0819d652 +0x4e3:  add    -0x10(%ebp),%edx
0819d655 +0x4e6:  mov    0x8(%ebp),%eax
0819d658 +0x4e9:  lea    -0x1c(%ebp),%ecx
0819d65b +0x4ec:  mov    %ecx,0x8(%esp)
0819d65f +0x4f0:  mov    %edx,0x4(%esp)
0819d663 +0x4f4:  mov    %eax,(%esp)
0819d666 +0x4f7:  call   0819d4f4 <+0x385>
0819d66b +0x4fc:  movl   $0x0,-0xc(%ebp)
0819d672 +0x503:  mov    0x8(%ebp),%eax
0819d675 +0x506:  mov    %eax,(%esp)
0819d678 +0x509:  call   080f583a <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x7eb>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x7eb
0819d67d +0x50e:  mov    %eax,%ebx
0819d67f +0x510:  lea    0xc(%ebp),%eax
0819d682 +0x513:  mov    %eax,(%esp)
0819d685 +0x516:  call   0819d4e4 <+0x375>
0819d68a +0x51b:  mov    (%eax),%edx
0819d68c +0x51d:  mov    0x8(%ebp),%eax
0819d68f +0x520:  mov    (%eax),%eax
0819d691 +0x522:  mov    %ebx,0xc(%esp)
0819d695 +0x526:  mov    -0x10(%ebp),%ecx
0819d698 +0x529:  mov    %ecx,0x8(%esp)
0819d69c +0x52d:  mov    %edx,0x4(%esp)
0819d6a0 +0x531:  mov    %eax,(%esp)
0819d6a3 +0x534:  call   0819d94b <+0x7dc>
0819d6a8 +0x539:  mov    %eax,-0xc(%ebp)
0819d6ab +0x53c:  addl   $0x4,-0xc(%ebp)
0819d6af +0x540:  mov    0x8(%ebp),%eax
0819d6b2 +0x543:  mov    %eax,(%esp)
0819d6b5 +0x546:  call   080f583a <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x7eb>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x7eb
0819d6ba +0x54b:  mov    %eax,%ebx
0819d6bc +0x54d:  mov    0x8(%ebp),%eax
0819d6bf +0x550:  mov    0x4(%eax),%esi
0819d6c2 +0x553:  lea    0xc(%ebp),%eax
0819d6c5 +0x556:  mov    %eax,(%esp)
0819d6c8 +0x559:  call   0819d4e4 <+0x375>
0819d6cd +0x55e:  mov    (%eax),%eax
0819d6cf +0x560:  mov    %ebx,0xc(%esp)
0819d6d3 +0x564:  mov    -0xc(%ebp),%edx
0819d6d6 +0x567:  mov    %edx,0x8(%esp)
0819d6da +0x56b:  mov    %esi,0x4(%esp)
0819d6de +0x56f:  mov    %eax,(%esp)
0819d6e1 +0x572:  call   0819d94b <+0x7dc>
0819d6e6 +0x577:  mov    %eax,-0xc(%ebp)
0819d6e9 +0x57a:  mov    0x8(%ebp),%eax
0819d6ec +0x57d:  mov    %eax,(%esp)
0819d6ef +0x580:  call   080f583a <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x7eb>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x7eb
0819d6f4 +0x585:  mov    0x8(%ebp),%edx
0819d6f7 +0x588:  mov    0x4(%edx),%ecx
0819d6fa +0x58b:  mov    0x8(%ebp),%edx
0819d6fd +0x58e:  mov    (%edx),%edx
0819d6ff +0x590:  mov    %eax,0x8(%esp)
0819d703 +0x594:  mov    %ecx,0x4(%esp)
0819d707 +0x598:  mov    %edx,(%esp)
0819d70a +0x59b:  call   080f5842 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x7f3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x7f3
0819d70f +0x5a0:  mov    0x8(%ebp),%eax
0819d712 +0x5a3:  mov    0x8(%eax),%eax
0819d715 +0x5a6:  mov    %eax,%edx
0819d717 +0x5a8:  mov    0x8(%ebp),%eax
0819d71a +0x5ab:  mov    (%eax),%eax
0819d71c +0x5ad:  mov    %edx,%ecx
0819d71e +0x5af:  sub    %eax,%ecx
0819d720 +0x5b1:  mov    %ecx,%eax
0819d722 +0x5b3:  sar    $0x2,%eax
0819d725 +0x5b6:  mov    %eax,%ecx
0819d727 +0x5b8:  mov    0x8(%ebp),%eax
0819d72a +0x5bb:  mov    (%eax),%edx
0819d72c +0x5bd:  mov    0x8(%ebp),%eax
0819d72f +0x5c0:  mov    %ecx,0x8(%esp)
0819d733 +0x5c4:  mov    %edx,0x4(%esp)
0819d737 +0x5c8:  mov    %eax,(%esp)
0819d73a +0x5cb:  call   080f5cb0 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0xc61>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0xc61
0819d73f +0x5d0:  mov    0x8(%ebp),%eax
0819d742 +0x5d3:  mov    -0x10(%ebp),%edx
0819d745 +0x5d6:  mov    %edx,(%eax)
0819d747 +0x5d8:  mov    0x8(%ebp),%eax
0819d74a +0x5db:  mov    -0xc(%ebp),%edx
0819d74d +0x5de:  mov    %edx,0x4(%eax)
0819d750 +0x5e1:  mov    -0x18(%ebp),%eax
0819d753 +0x5e4:  shl    $0x2,%eax
0819d756 +0x5e7:  mov    %eax,%edx
0819d758 +0x5e9:  add    -0x10(%ebp),%edx
0819d75b +0x5ec:  mov    0x8(%ebp),%eax
0819d75e +0x5ef:  mov    %edx,0x8(%eax)
0819d761 +0x5f2:  jmp    0819d7e1 <+0x672>
0819d763 +0x5f4:  mov    %eax,(%esp)
0819d766 +0x5f7:  call   08725ce0 <__cxa_begin_catch>
0819d76b +0x5fc:  cmpl   $0x0,-0xc(%ebp)
0819d76f +0x600:  jne    0819d78d <+0x61e>
0819d771 +0x602:  mov    -0x14(%ebp),%eax
0819d774 +0x605:  shl    $0x2,%eax
0819d777 +0x608:  mov    %eax,%edx
0819d779 +0x60a:  add    -0x10(%ebp),%edx
0819d77c +0x60d:  mov    0x8(%ebp),%eax
0819d77f +0x610:  mov    %edx,0x4(%esp)
0819d783 +0x614:  mov    %eax,(%esp)
0819d786 +0x617:  call   0819d99e <+0x82f>
0819d78b +0x61c:  jmp    0819d7ae <+0x63f>
0819d78d +0x61e:  mov    0x8(%ebp),%eax
0819d790 +0x621:  mov    %eax,(%esp)
0819d793 +0x624:  call   080f583a <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x7eb>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x7eb
0819d798 +0x629:  mov    %eax,0x8(%esp)
0819d79c +0x62d:  mov    -0xc(%ebp),%eax
0819d79f +0x630:  mov    %eax,0x4(%esp)
0819d7a3 +0x634:  mov    -0x10(%ebp),%eax
0819d7a6 +0x637:  mov    %eax,(%esp)
0819d7a9 +0x63a:  call   080f5842 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x7f3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x7f3
0819d7ae +0x63f:  mov    0x8(%ebp),%eax
0819d7b1 +0x642:  mov    -0x18(%ebp),%edx
0819d7b4 +0x645:  mov    %edx,0x8(%esp)
0819d7b8 +0x649:  mov    -0x10(%ebp),%edx
0819d7bb +0x64c:  mov    %edx,0x4(%esp)
0819d7bf +0x650:  mov    %eax,(%esp)
0819d7c2 +0x653:  call   080f5cb0 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0xc61>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0xc61
0819d7c7 +0x658:  call   08724be0 <__cxa_rethrow>
0819d7cc +0x65d:  mov    %edx,%ebx
0819d7ce +0x65f:  mov    %eax,%esi
0819d7d0 +0x661:  call   08725c30 <__cxa_end_catch>
0819d7d5 +0x666:  mov    %esi,%eax
0819d7d7 +0x668:  mov    %ebx,%edx
0819d7d9 +0x66a:  mov    %eax,(%esp)
0819d7dc +0x66d:  call   08ae3750 <_Unwind_Resume>
0819d7e1 +0x672:  lea    -0x8(%ebp),%esp
0819d7e4 +0x675:  add    $0x0,%esp
0819d7e7 +0x678:  pop    %ebx
0819d7e8 +0x679:  pop    %esi
0819d7e9 +0x67a:  pop    %ebp
0819d7ea +0x67b:  ret
0819d7eb +0x67c:  push   %ebp
0819d7ec +0x67d:  mov    %esp,%ebp
0819d7ee +0x67f:  push   %ebx
0819d7ef +0x680:  sub    $0x14,%esp
0819d7f2 +0x683:  mov    0x8(%ebp),%eax
0819d7f5 +0x686:  mov    %eax,(%esp)
0819d7f8 +0x689:  call   0819d4e4 <+0x375>
0819d7fd +0x68e:  mov    (%eax),%eax
0819d7ff +0x690:  mov    %eax,%ebx
0819d801 +0x692:  mov    0xc(%ebp),%eax
0819d804 +0x695:  mov    %eax,(%esp)
0819d807 +0x698:  call   0819d4e4 <+0x375>
0819d80c +0x69d:  mov    (%eax),%eax
0819d80e +0x69f:  mov    %ebx,%edx
0819d810 +0x6a1:  sub    %eax,%edx
0819d812 +0x6a3:  mov    %edx,%eax
0819d814 +0x6a5:  sar    $0x2,%eax
0819d817 +0x6a8:  add    $0x14,%esp
0819d81a +0x6ab:  pop    %ebx
0819d81b +0x6ac:  pop    %ebp
0819d81c +0x6ad:  ret
0819d81d +0x6ae:  nop
0819d81e +0x6af:  push   %ebp
0819d81f +0x6b0:  mov    %esp,%ebp
0819d821 +0x6b2:  mov    0x8(%ebp),%eax
0819d824 +0x6b5:  mov    (%eax),%eax
0819d826 +0x6b7:  pop    %ebp
0819d827 +0x6b8:  ret
0819d828 +0x6b9:  push   %ebp
0819d829 +0x6ba:  mov    %esp,%ebp
0819d82b +0x6bc:  mov    0x8(%ebp),%eax
0819d82e +0x6bf:  mov    (%eax),%eax
0819d830 +0x6c1:  lea    0x4(%eax),%edx
0819d833 +0x6c4:  mov    0x8(%ebp),%eax
0819d836 +0x6c7:  mov    %edx,(%eax)
0819d838 +0x6c9:  mov    0x8(%ebp),%eax
0819d83b +0x6cc:  pop    %ebp
0819d83c +0x6cd:  ret
0819d83d +0x6ce:  push   %ebp
0819d83e +0x6cf:  mov    %esp,%ebp
0819d840 +0x6d1:  push   %ebx
0819d841 +0x6d2:  sub    $0x14,%esp
0819d844 +0x6d5:  mov    0xc(%ebp),%eax
0819d847 +0x6d8:  mov    %eax,(%esp)
0819d84a +0x6db:  call   0814b920 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x16bf>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x16bf
0819d84f +0x6e0:  mov    %eax,%ebx
0819d851 +0x6e2:  mov    0x8(%ebp),%eax
0819d854 +0x6e5:  mov    %eax,(%esp)
0819d857 +0x6e8:  call   0814b920 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x16bf>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x16bf
0819d85c +0x6ed:  mov    0x10(%ebp),%edx
0819d85f +0x6f0:  mov    %edx,0x8(%esp)
0819d863 +0x6f4:  mov    %ebx,0x4(%esp)
0819d867 +0x6f8:  mov    %eax,(%esp)
0819d86a +0x6fb:  call   0819d9a3 <+0x834>
0819d86f +0x700:  add    $0x14,%esp
0819d872 +0x703:  pop    %ebx
0819d873 +0x704:  pop    %ebp
0819d874 +0x705:  ret
0819d875 +0x706:  nop
0819d876 +0x707:  push   %ebp
0819d877 +0x708:  mov    %esp,%ebp
0819d879 +0x70a:  push   %ebx
0819d87a +0x70b:  sub    $0x24,%esp
0819d87d +0x70e:  mov    0x8(%ebp),%eax
0819d880 +0x711:  mov    %eax,(%esp)
0819d883 +0x714:  call   0819d9e8 <+0x879>
0819d888 +0x719:  mov    %eax,%ebx
0819d88a +0x71b:  mov    0x8(%ebp),%eax
0819d88d +0x71e:  mov    %eax,(%esp)
0819d890 +0x721:  call   080f5604 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5b5>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5b5
0819d895 +0x726:  mov    %ebx,%edx
0819d897 +0x728:  sub    %eax,%edx
0819d899 +0x72a:  mov    0xc(%ebp),%eax
0819d89c +0x72d:  cmp    %eax,%edx
0819d89e +0x72f:  setb   %al
0819d8a1 +0x732:  test   %al,%al
0819d8a3 +0x734:  je     0819d8b0 <+0x741>
0819d8a5 +0x736:  mov    0x10(%ebp),%eax
0819d8a8 +0x739:  mov    %eax,(%esp)
0819d8ab +0x73c:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0819d8b0 +0x741:  mov    0x8(%ebp),%eax
0819d8b3 +0x744:  mov    %eax,(%esp)
0819d8b6 +0x747:  call   080f5604 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5b5>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5b5
0819d8bb +0x74c:  mov    %eax,%ebx
0819d8bd +0x74e:  mov    0x8(%ebp),%eax
0819d8c0 +0x751:  mov    %eax,(%esp)
0819d8c3 +0x754:  call   080f5604 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5b5>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5b5
0819d8c8 +0x759:  mov    %eax,-0x10(%ebp)
0819d8cb +0x75c:  lea    0xc(%ebp),%eax
0819d8ce +0x75f:  mov    %eax,0x4(%esp)
0819d8d2 +0x763:  lea    -0x10(%ebp),%eax
0819d8d5 +0x766:  mov    %eax,(%esp)
0819d8d8 +0x769:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0819d8dd +0x76e:  mov    (%eax),%eax
0819d8df +0x770:  lea    (%ebx,%eax,1),%eax
0819d8e2 +0x773:  mov    %eax,-0xc(%ebp)
0819d8e5 +0x776:  mov    0x8(%ebp),%eax
0819d8e8 +0x779:  mov    %eax,(%esp)
0819d8eb +0x77c:  call   080f5604 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5b5>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5b5
0819d8f0 +0x781:  cmp    -0xc(%ebp),%eax
0819d8f3 +0x784:  ja     0819d905 <+0x796>
0819d8f5 +0x786:  mov    0x8(%ebp),%eax
0819d8f8 +0x789:  mov    %eax,(%esp)
0819d8fb +0x78c:  call   0819d9e8 <+0x879>
0819d900 +0x791:  cmp    -0xc(%ebp),%eax
0819d903 +0x794:  jae    0819d912 <+0x7a3>
0819d905 +0x796:  mov    0x8(%ebp),%eax
0819d908 +0x799:  mov    %eax,(%esp)
0819d90b +0x79c:  call   0819d9e8 <+0x879>
0819d910 +0x7a1:  jmp    0819d915 <+0x7a6>
0819d912 +0x7a3:  mov    -0xc(%ebp),%eax
0819d915 +0x7a6:  add    $0x24,%esp
0819d918 +0x7a9:  pop    %ebx
0819d919 +0x7aa:  pop    %ebp
0819d91a +0x7ab:  ret
0819d91b +0x7ac:  nop
0819d91c +0x7ad:  push   %ebp
0819d91d +0x7ae:  mov    %esp,%ebp
0819d91f +0x7b0:  sub    $0x18,%esp
0819d922 +0x7b3:  cmpl   $0x0,0xc(%ebp)
0819d926 +0x7b7:  je     0819d944 <+0x7d5>
0819d928 +0x7b9:  mov    0x8(%ebp),%eax
0819d92b +0x7bc:  movl   $0x0,0x8(%esp)
0819d933 +0x7c4:  mov    0xc(%ebp),%edx
0819d936 +0x7c7:  mov    %edx,0x4(%esp)
0819d93a +0x7cb:  mov    %eax,(%esp)
0819d93d +0x7ce:  call   0814b6a2 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x1441>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x1441
0819d942 +0x7d3:  jmp    0819d949 <+0x7da>
0819d944 +0x7d5:  mov    $0x0,%eax
0819d949 +0x7da:  leave
0819d94a +0x7db:  ret
0819d94b +0x7dc:  push   %ebp
0819d94c +0x7dd:  mov    %esp,%ebp
0819d94e +0x7df:  sub    $0x28,%esp
0819d951 +0x7e2:  lea    -0x10(%ebp),%eax
0819d954 +0x7e5:  lea    0xc(%ebp),%edx
0819d957 +0x7e8:  mov    %edx,0x4(%esp)
0819d95b +0x7ec:  mov    %eax,(%esp)
0819d95e +0x7ef:  call   0819da03 <+0x894>
0819d963 +0x7f4:  sub    $0x4,%esp
0819d966 +0x7f7:  lea    -0xc(%ebp),%eax
0819d969 +0x7fa:  lea    0x8(%ebp),%edx
0819d96c +0x7fd:  mov    %edx,0x4(%esp)
0819d970 +0x801:  mov    %eax,(%esp)
0819d973 +0x804:  call   0819da03 <+0x894>
0819d978 +0x809:  sub    $0x4,%esp
0819d97b +0x80c:  mov    0x14(%ebp),%eax
0819d97e +0x80f:  mov    %eax,0xc(%esp)
0819d982 +0x813:  mov    0x10(%ebp),%eax
0819d985 +0x816:  mov    %eax,0x8(%esp)
0819d989 +0x81a:  mov    -0x10(%ebp),%eax
0819d98c +0x81d:  mov    %eax,0x4(%esp)
0819d990 +0x821:  mov    -0xc(%ebp),%eax
0819d993 +0x824:  mov    %eax,(%esp)
0819d996 +0x827:  call   0819da28 <+0x8b9>
0819d99b +0x82c:  leave
0819d99c +0x82d:  ret
0819d99d +0x82e:  nop
0819d99e +0x82f:  push   %ebp
0819d99f +0x830:  mov    %esp,%ebp
0819d9a1 +0x832:  pop    %ebp
0819d9a2 +0x833:  ret
0819d9a3 +0x834:  push   %ebp
0819d9a4 +0x835:  mov    %esp,%ebp
0819d9a6 +0x837:  push   %esi
0819d9a7 +0x838:  push   %ebx
0819d9a8 +0x839:  sub    $0x10,%esp
0819d9ab +0x83c:  mov    0x10(%ebp),%eax
0819d9ae +0x83f:  mov    %eax,(%esp)
0819d9b1 +0x842:  call   0814ad76 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xb15>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xb15
0819d9b6 +0x847:  mov    %eax,%esi
0819d9b8 +0x849:  mov    0xc(%ebp),%eax
0819d9bb +0x84c:  mov    %eax,(%esp)
0819d9be +0x84f:  call   0814ad76 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xb15>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xb15
0819d9c3 +0x854:  mov    %eax,%ebx
0819d9c5 +0x856:  mov    0x8(%ebp),%eax
0819d9c8 +0x859:  mov    %eax,(%esp)
0819d9cb +0x85c:  call   0814ad76 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xb15>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xb15
0819d9d0 +0x861:  mov    %esi,0x8(%esp)
0819d9d4 +0x865:  mov    %ebx,0x4(%esp)
0819d9d8 +0x869:  mov    %eax,(%esp)
0819d9db +0x86c:  call   0819da49 <+0x8da>
0819d9e0 +0x871:  add    $0x10,%esp
0819d9e3 +0x874:  pop    %ebx
0819d9e4 +0x875:  pop    %esi
0819d9e5 +0x876:  pop    %ebp
0819d9e6 +0x877:  ret
0819d9e7 +0x878:  nop
0819d9e8 +0x879:  push   %ebp
0819d9e9 +0x87a:  mov    %esp,%ebp
0819d9eb +0x87c:  sub    $0x18,%esp
0819d9ee +0x87f:  mov    0x8(%ebp),%eax
0819d9f1 +0x882:  mov    %eax,(%esp)
0819d9f4 +0x885:  call   0819da6e <+0x8ff>
0819d9f9 +0x88a:  mov    %eax,(%esp)
0819d9fc +0x88d:  call   0814b916 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x16b5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x16b5
0819da01 +0x892:  leave
0819da02 +0x893:  ret
0819da03 +0x894:  push   %ebp
0819da04 +0x895:  mov    %esp,%ebp
0819da06 +0x897:  push   %ebx
0819da07 +0x898:  sub    $0x14,%esp
0819da0a +0x89b:  mov    0x8(%ebp),%ebx
0819da0d +0x89e:  mov    0xc(%ebp),%eax
0819da10 +0x8a1:  mov    (%eax),%eax
0819da12 +0x8a3:  mov    %eax,0x4(%esp)
0819da16 +0x8a7:  mov    %ebx,(%esp)
0819da19 +0x8aa:  call   0819da76 <+0x907>
0819da1e +0x8af:  mov    %ebx,%eax
0819da20 +0x8b1:  add    $0x14,%esp
0819da23 +0x8b4:  pop    %ebx
0819da24 +0x8b5:  pop    %ebp
0819da25 +0x8b6:  ret    $0x4
0819da28 +0x8b9:  push   %ebp
0819da29 +0x8ba:  mov    %esp,%ebp
0819da2b +0x8bc:  sub    $0x18,%esp
0819da2e +0x8bf:  mov    0x10(%ebp),%eax
0819da31 +0x8c2:  mov    %eax,0x8(%esp)
0819da35 +0x8c6:  mov    0xc(%ebp),%eax
0819da38 +0x8c9:  mov    %eax,0x4(%esp)
0819da3c +0x8cd:  mov    0x8(%ebp),%eax
0819da3f +0x8d0:  mov    %eax,(%esp)
0819da42 +0x8d3:  call   0819da83 <+0x914>
0819da47 +0x8d8:  leave
0819da48 +0x8d9:  ret
0819da49 +0x8da:  push   %ebp
0819da4a +0x8db:  mov    %esp,%ebp
0819da4c +0x8dd:  sub    $0x28,%esp
0819da4f +0x8e0:  movb   $0x1,-0x9(%ebp)
0819da53 +0x8e4:  mov    0x10(%ebp),%eax
0819da56 +0x8e7:  mov    %eax,0x8(%esp)
0819da5a +0x8eb:  mov    0xc(%ebp),%eax
0819da5d +0x8ee:  mov    %eax,0x4(%esp)
0819da61 +0x8f2:  mov    0x8(%ebp),%eax
0819da64 +0x8f5:  mov    %eax,(%esp)
0819da67 +0x8f8:  call   0819daa4 <+0x935>
0819da6c +0x8fd:  leave
0819da6d +0x8fe:  ret
0819da6e +0x8ff:  push   %ebp
0819da6f +0x900:  mov    %esp,%ebp
0819da71 +0x902:  mov    0x8(%ebp),%eax
0819da74 +0x905:  pop    %ebp
0819da75 +0x906:  ret
0819da76 +0x907:  push   %ebp
0819da77 +0x908:  mov    %esp,%ebp
0819da79 +0x90a:  mov    0x8(%ebp),%eax
0819da7c +0x90d:  mov    0xc(%ebp),%edx
0819da7f +0x910:  mov    %edx,(%eax)
0819da81 +0x912:  pop    %ebp
0819da82 +0x913:  ret
0819da83 +0x914:  push   %ebp
0819da84 +0x915:  mov    %esp,%ebp
0819da86 +0x917:  sub    $0x18,%esp
0819da89 +0x91a:  mov    0x10(%ebp),%eax
0819da8c +0x91d:  mov    %eax,0x8(%esp)
0819da90 +0x921:  mov    0xc(%ebp),%eax
0819da93 +0x924:  mov    %eax,0x4(%esp)
0819da97 +0x928:  mov    0x8(%ebp),%eax
0819da9a +0x92b:  mov    %eax,(%esp)
0819da9d +0x92e:  call   0819daf1 <+0x982>
0819daa2 +0x933:  leave
0819daa3 +0x934:  ret
0819daa4 +0x935:  push   %ebp
0819daa5 +0x936:  mov    %esp,%ebp
0819daa7 +0x938:  sub    $0x28,%esp
0819daaa +0x93b:  mov    0xc(%ebp),%edx
0819daad +0x93e:  mov    0x8(%ebp),%eax
0819dab0 +0x941:  mov    %edx,%ecx
0819dab2 +0x943:  sub    %eax,%ecx
0819dab4 +0x945:  mov    %ecx,%eax
0819dab6 +0x947:  sar    $0x2,%eax
0819dab9 +0x94a:  mov    %eax,-0xc(%ebp)
0819dabc +0x94d:  mov    -0xc(%ebp),%eax
0819dabf +0x950:  lea    0x0(,%eax,4),%edx
0819dac6 +0x957:  mov    -0xc(%ebp),%eax
0819dac9 +0x95a:  shl    $0x2,%eax
0819dacc +0x95d:  neg    %eax
0819dace +0x95f:  add    0x10(%ebp),%eax
0819dad1 +0x962:  mov    %edx,0x8(%esp)
0819dad5 +0x966:  mov    0x8(%ebp),%edx
0819dad8 +0x969:  mov    %edx,0x4(%esp)
0819dadc +0x96d:  mov    %eax,(%esp)
0819dadf +0x970:  call   0807d880 <_init+0x178>
0819dae4 +0x975:  mov    -0xc(%ebp),%eax
0819dae7 +0x978:  shl    $0x2,%eax
0819daea +0x97b:  neg    %eax
0819daec +0x97d:  add    0x10(%ebp),%eax
0819daef +0x980:  leave
0819daf0 +0x981:  ret
0819daf1 +0x982:  push   %ebp
0819daf2 +0x983:  mov    %esp,%ebp
0819daf4 +0x985:  sub    $0x18,%esp
0819daf7 +0x988:  mov    0x10(%ebp),%eax
0819dafa +0x98b:  mov    %eax,0x8(%esp)
0819dafe +0x98f:  mov    0xc(%ebp),%eax
0819db01 +0x992:  mov    %eax,0x4(%esp)
0819db05 +0x996:  mov    0x8(%ebp),%eax
0819db08 +0x999:  mov    %eax,(%esp)
0819db0b +0x99c:  call   0819db12 <+0x9a3>
0819db10 +0x9a1:  leave
0819db11 +0x9a2:  ret
0819db12 +0x9a3:  push   %ebp
0819db13 +0x9a4:  mov    %esp,%ebp
0819db15 +0x9a6:  push   %ebx
0819db16 +0x9a7:  sub    $0x14,%esp
0819db19 +0x9aa:  mov    0xc(%ebp),%eax
0819db1c +0x9ad:  mov    %eax,(%esp)
0819db1f +0x9b0:  call   0819db4a <+0x9db>
0819db24 +0x9b5:  mov    %eax,%ebx
0819db26 +0x9b7:  mov    0x8(%ebp),%eax
0819db29 +0x9ba:  mov    %eax,(%esp)
0819db2c +0x9bd:  call   0819db4a <+0x9db>
0819db31 +0x9c2:  mov    0x10(%ebp),%edx
0819db34 +0x9c5:  mov    %edx,0x8(%esp)
0819db38 +0x9c9:  mov    %ebx,0x4(%esp)
0819db3c +0x9cd:  mov    %eax,(%esp)
0819db3f +0x9d0:  call   0819db5d <+0x9ee>
0819db44 +0x9d5:  add    $0x14,%esp
0819db47 +0x9d8:  pop    %ebx
0819db48 +0x9d9:  pop    %ebp
0819db49 +0x9da:  ret
0819db4a +0x9db:  push   %ebp
0819db4b +0x9dc:  mov    %esp,%ebp
0819db4d +0x9de:  sub    $0x18,%esp
0819db50 +0x9e1:  lea    0x8(%ebp),%eax
0819db53 +0x9e4:  mov    %eax,(%esp)
0819db56 +0x9e7:  call   0819dba2 <+0xa33>
0819db5b +0x9ec:  leave
0819db5c +0x9ed:  ret
0819db5d +0x9ee:  push   %ebp
0819db5e +0x9ef:  mov    %esp,%ebp
0819db60 +0x9f1:  push   %esi
0819db61 +0x9f2:  push   %ebx
0819db62 +0x9f3:  sub    $0x10,%esp
0819db65 +0x9f6:  mov    0x10(%ebp),%eax
0819db68 +0x9f9:  mov    %eax,(%esp)
0819db6b +0x9fc:  call   0814ad76 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xb15>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xb15
0819db70 +0xa01:  mov    %eax,%esi
0819db72 +0xa03:  mov    0xc(%ebp),%eax
0819db75 +0xa06:  mov    %eax,(%esp)
0819db78 +0xa09:  call   0814ad76 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xb15>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xb15
0819db7d +0xa0e:  mov    %eax,%ebx
0819db7f +0xa10:  mov    0x8(%ebp),%eax
0819db82 +0xa13:  mov    %eax,(%esp)
0819db85 +0xa16:  call   0814ad76 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xb15>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xb15
0819db8a +0xa1b:  mov    %esi,0x8(%esp)
0819db8e +0xa1f:  mov    %ebx,0x4(%esp)
0819db92 +0xa23:  mov    %eax,(%esp)
0819db95 +0xa26:  call   0819dbac <+0xa3d>
0819db9a +0xa2b:  add    $0x10,%esp
0819db9d +0xa2e:  pop    %ebx
0819db9e +0xa2f:  pop    %esi
0819db9f +0xa30:  pop    %ebp
0819dba0 +0xa31:  ret
0819dba1 +0xa32:  nop
0819dba2 +0xa33:  push   %ebp
0819dba3 +0xa34:  mov    %esp,%ebp
0819dba5 +0xa36:  mov    0x8(%ebp),%eax
0819dba8 +0xa39:  mov    (%eax),%eax
0819dbaa +0xa3b:  pop    %ebp
0819dbab +0xa3c:  ret
0819dbac +0xa3d:  push   %ebp
0819dbad +0xa3e:  mov    %esp,%ebp
0819dbaf +0xa40:  sub    $0x28,%esp
0819dbb2 +0xa43:  movb   $0x1,-0x9(%ebp)
0819dbb6 +0xa47:  mov    0x10(%ebp),%eax
0819dbb9 +0xa4a:  mov    %eax,0x8(%esp)
0819dbbd +0xa4e:  mov    0xc(%ebp),%eax
0819dbc0 +0xa51:  mov    %eax,0x4(%esp)
0819dbc4 +0xa55:  mov    0x8(%ebp),%eax
0819dbc7 +0xa58:  mov    %eax,(%esp)
0819dbca +0xa5b:  call   0819dbd1 <+0xa62>
0819dbcf +0xa60:  leave
0819dbd0 +0xa61:  ret
0819dbd1 +0xa62:  push   %ebp
0819dbd2 +0xa63:  mov    %esp,%ebp
0819dbd4 +0xa65:  sub    $0x18,%esp
0819dbd7 +0xa68:  mov    0xc(%ebp),%edx
0819dbda +0xa6b:  mov    0x8(%ebp),%eax
0819dbdd +0xa6e:  mov    %edx,%ecx
0819dbdf +0xa70:  sub    %eax,%ecx
0819dbe1 +0xa72:  mov    %ecx,%eax
0819dbe3 +0xa74:  sar    $0x2,%eax
0819dbe6 +0xa77:  shl    $0x2,%eax
0819dbe9 +0xa7a:  mov    %eax,0x8(%esp)
0819dbed +0xa7e:  mov    0x8(%ebp),%eax
0819dbf0 +0xa81:  mov    %eax,0x4(%esp)
0819dbf4 +0xa85:  mov    0x10(%ebp),%eax
0819dbf7 +0xa88:  mov    %eax,(%esp)
0819dbfa +0xa8b:  call   0807d880 <_init+0x178>
0819dbff +0xa90:  mov    0xc(%ebp),%edx
0819dc02 +0xa93:  mov    0x8(%ebp),%eax
0819dc05 +0xa96:  mov    %edx,%ecx
0819dc07 +0xa98:  sub    %eax,%ecx
0819dc09 +0xa9a:  mov    %ecx,%eax
0819dc0b +0xa9c:  sar    $0x2,%eax
0819dc0e +0xa9f:  shl    $0x2,%eax
0819dc11 +0xaa2:  add    0x10(%ebp),%eax
0819dc14 +0xaa5:  leave
0819dc15 +0xaa6:  ret
0819dc16 +0xaa7:  nop
0819dc17 +0xaa8:  nop
```

## 反编译 C

```c
// <global>::global @ 0x819d16f

/* ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList() */

void ARAD::Arad_StatisticsEventItemList::_GLOBAL__I_Arad_StatisticsEventItemList(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
