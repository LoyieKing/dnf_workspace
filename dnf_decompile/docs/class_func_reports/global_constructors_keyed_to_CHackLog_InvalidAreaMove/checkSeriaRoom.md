# checkSeriaRoom

`_GLOBAL__I__ZN24CHackLog_InvalidAreaMove14checkSeriaRoomEii`

`global constructors keyed to CHackLog_InvalidAreaMove::checkSeriaRoom(int, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CHackLog_InvalidAreaMove` | `0x0828619a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828619a  _GLOBAL__I__ZN24CHackLog_InvalidAreaMove14checkSeriaRoomEii
#           global constructors keyed to CHackLog_InvalidAreaMove::checkSeriaRoom(int, int)
# range [0x0828619a, 0x082864e7]
0828619a +0x000:  push   %ebp
0828619b +0x001:  mov    %esp,%ebp
0828619d +0x003:  sub    $0x18,%esp
082861a0 +0x006:  movl   $0xffff,0x4(%esp)
082861a8 +0x00e:  movl   $0x1,(%esp)
082861af +0x015:  call   0828615a <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082861b4 +0x01a:  leave
082861b5 +0x01b:  ret
082861b6 +0x01c:  push   %ebp
082861b7 +0x01d:  mov    %esp,%ebp
082861b9 +0x01f:  sub    $0x18,%esp
082861bc +0x022:  mov    0xc(%ebp),%eax
082861bf +0x025:  mov    %eax,0x4(%esp)
082861c3 +0x029:  mov    0x8(%ebp),%eax
082861c6 +0x02c:  mov    %eax,(%esp)
082861c9 +0x02f:  call   082862d0 <+0x136>
082861ce +0x034:  test   %al,%al
082861d0 +0x036:  je     082861e8 <+0x4e>
082861d2 +0x038:  mov    0x14(%ebp),%eax
082861d5 +0x03b:  mov    %eax,0x4(%esp)
082861d9 +0x03f:  mov    0x10(%ebp),%eax
082861dc +0x042:  mov    %eax,(%esp)
082861df +0x045:  call   082862ee <+0x154>
082861e4 +0x04a:  test   %al,%al
082861e6 +0x04c:  jne    08286214 <+0x7a>
082861e8 +0x04e:  mov    0xc(%ebp),%eax
082861eb +0x051:  mov    %eax,0x4(%esp)
082861ef +0x055:  mov    0x8(%ebp),%eax
082861f2 +0x058:  mov    %eax,(%esp)
082861f5 +0x05b:  call   082862ee <+0x154>
082861fa +0x060:  test   %al,%al
082861fc +0x062:  je     0828621b <+0x81>
082861fe +0x064:  mov    0x14(%ebp),%eax
08286201 +0x067:  mov    %eax,0x4(%esp)
08286205 +0x06b:  mov    0x10(%ebp),%eax
08286208 +0x06e:  mov    %eax,(%esp)
0828620b +0x071:  call   082862d0 <+0x136>
08286210 +0x076:  test   %al,%al
08286212 +0x078:  je     0828621b <+0x81>
08286214 +0x07a:  mov    $0x1,%eax
08286219 +0x07f:  jmp    08286220 <+0x86>
0828621b +0x081:  mov    $0x0,%eax
08286220 +0x086:  leave
08286221 +0x087:  ret
08286222 +0x088:  push   %ebp
08286223 +0x089:  mov    %esp,%ebp
08286225 +0x08b:  sub    $0x18,%esp
08286228 +0x08e:  mov    0x8(%ebp),%eax
0828622b +0x091:  mov    %eax,(%esp)
0828622e +0x094:  call   0828630c <+0x172>
08286233 +0x099:  test   %al,%al
08286235 +0x09b:  je     08286246 <+0xac>
08286237 +0x09d:  mov    0xc(%ebp),%eax
0828623a +0x0a0:  mov    %eax,(%esp)
0828623d +0x0a3:  call   08286318 <+0x17e>
08286242 +0x0a8:  test   %al,%al
08286244 +0x0aa:  jne    08286264 <+0xca>
08286246 +0x0ac:  mov    0x8(%ebp),%eax
08286249 +0x0af:  mov    %eax,(%esp)
0828624c +0x0b2:  call   08286318 <+0x17e>
08286251 +0x0b7:  test   %al,%al
08286253 +0x0b9:  je     0828626b <+0xd1>
08286255 +0x0bb:  mov    0xc(%ebp),%eax
08286258 +0x0be:  mov    %eax,(%esp)
0828625b +0x0c1:  call   0828630c <+0x172>
08286260 +0x0c6:  test   %al,%al
08286262 +0x0c8:  je     0828626b <+0xd1>
08286264 +0x0ca:  mov    $0x1,%eax
08286269 +0x0cf:  jmp    08286270 <+0xd6>
0828626b +0x0d1:  mov    $0x0,%eax
08286270 +0x0d6:  leave
08286271 +0x0d7:  ret
08286272 +0x0d8:  push   %ebp
08286273 +0x0d9:  mov    %esp,%ebp
08286275 +0x0db:  sub    $0x18,%esp
08286278 +0x0de:  mov    0xc(%ebp),%eax
0828627b +0x0e1:  mov    %eax,0x4(%esp)
0828627f +0x0e5:  mov    0x8(%ebp),%eax
08286282 +0x0e8:  mov    %eax,(%esp)
08286285 +0x0eb:  call   08286462 <+0x2c8>
0828628a +0x0f0:  test   %al,%al
0828628c +0x0f2:  je     0828629d <+0x103>
0828628e +0x0f4:  mov    0x10(%ebp),%eax
08286291 +0x0f7:  mov    %eax,(%esp)
08286294 +0x0fa:  call   08286324 <+0x18a>
08286299 +0x0ff:  test   %al,%al
0828629b +0x101:  jne    082862c2 <+0x128>
0828629d +0x103:  mov    0x8(%ebp),%eax
082862a0 +0x106:  mov    %eax,(%esp)
082862a3 +0x109:  call   08286324 <+0x18a>
082862a8 +0x10e:  test   %al,%al
082862aa +0x110:  je     082862c9 <+0x12f>
082862ac +0x112:  mov    0x14(%ebp),%eax
082862af +0x115:  mov    %eax,0x4(%esp)
082862b3 +0x119:  mov    0x10(%ebp),%eax
082862b6 +0x11c:  mov    %eax,(%esp)
082862b9 +0x11f:  call   08286462 <+0x2c8>
082862be +0x124:  test   %al,%al
082862c0 +0x126:  je     082862c9 <+0x12f>
082862c2 +0x128:  mov    $0x1,%eax
082862c7 +0x12d:  jmp    082862ce <+0x134>
082862c9 +0x12f:  mov    $0x0,%eax
082862ce +0x134:  leave
082862cf +0x135:  ret
082862d0 +0x136:  push   %ebp
082862d1 +0x137:  mov    %esp,%ebp
082862d3 +0x139:  cmpl   $0x3,0x8(%ebp)
082862d7 +0x13d:  jne    082862e6 <+0x14c>
082862d9 +0x13f:  cmpl   $0x6,0xc(%ebp)
082862dd +0x143:  jne    082862e6 <+0x14c>
082862df +0x145:  mov    $0x1,%eax
082862e4 +0x14a:  jmp    082862eb <+0x151>
082862e6 +0x14c:  mov    $0x0,%eax
082862eb +0x151:  pop    %ebp
082862ec +0x152:  ret
082862ed +0x153:  nop
082862ee +0x154:  push   %ebp
082862ef +0x155:  mov    %esp,%ebp
082862f1 +0x157:  cmpl   $0x6,0x8(%ebp)
082862f5 +0x15b:  jne    08286304 <+0x16a>
082862f7 +0x15d:  cmpl   $0x0,0xc(%ebp)
082862fb +0x161:  jne    08286304 <+0x16a>
082862fd +0x163:  mov    $0x1,%eax
08286302 +0x168:  jmp    08286309 <+0x16f>
08286304 +0x16a:  mov    $0x0,%eax
08286309 +0x16f:  pop    %ebp
0828630a +0x170:  ret
0828630b +0x171:  nop
0828630c +0x172:  push   %ebp
0828630d +0x173:  mov    %esp,%ebp
0828630f +0x175:  cmpl   $0x2,0x8(%ebp)
08286313 +0x179:  sete   %al
08286316 +0x17c:  pop    %ebp
08286317 +0x17d:  ret
08286318 +0x17e:  push   %ebp
08286319 +0x17f:  mov    %esp,%ebp
0828631b +0x181:  cmpl   $0x7,0x8(%ebp)
0828631f +0x185:  sete   %al
08286322 +0x188:  pop    %ebp
08286323 +0x189:  ret
08286324 +0x18a:  push   %ebp
08286325 +0x18b:  mov    %esp,%ebp
08286327 +0x18d:  cmpl   $0x8,0x8(%ebp)
0828632b +0x191:  sete   %al
0828632e +0x194:  pop    %ebp
0828632f +0x195:  ret
08286330 +0x196:  push   %ebp
08286331 +0x197:  mov    %esp,%ebp
08286333 +0x199:  cmpl   $0x8,0x8(%ebp)
08286337 +0x19d:  jne    08286348 <+0x1ae>
08286339 +0x19f:  mov    0x8(%ebp),%eax
0828633c +0x1a2:  cmp    0xc(%ebp),%eax
0828633f +0x1a5:  jne    08286348 <+0x1ae>
08286341 +0x1a7:  mov    $0x1,%eax
08286346 +0x1ac:  jmp    0828634d <+0x1b3>
08286348 +0x1ae:  mov    $0x0,%eax
0828634d +0x1b3:  pop    %ebp
0828634e +0x1b4:  ret
0828634f +0x1b5:  nop
08286350 +0x1b6:  push   %ebp
08286351 +0x1b7:  mov    %esp,%ebp
08286353 +0x1b9:  cmpl   $0x6,0x8(%ebp)
08286357 +0x1bd:  jne    0828636f <+0x1d5>
08286359 +0x1bf:  cmpl   $0x0,0xc(%ebp)
0828635d +0x1c3:  jne    0828636f <+0x1d5>
0828635f +0x1c5:  cmpl   $0x6,0x10(%ebp)
08286363 +0x1c9:  jne    0828636f <+0x1d5>
08286365 +0x1cb:  cmpl   $0x4,0x14(%ebp)
08286369 +0x1cf:  je     08286453 <+0x2b9>
0828636f +0x1d5:  cmpl   $0x6,0x8(%ebp)
08286373 +0x1d9:  jne    0828638b <+0x1f1>
08286375 +0x1db:  cmpl   $0x4,0xc(%ebp)
08286379 +0x1df:  jne    0828638b <+0x1f1>
0828637b +0x1e1:  cmpl   $0x6,0x10(%ebp)
0828637f +0x1e5:  jne    0828638b <+0x1f1>
08286381 +0x1e7:  cmpl   $0x0,0x14(%ebp)
08286385 +0x1eb:  je     08286453 <+0x2b9>
0828638b +0x1f1:  cmpl   $0x3,0x8(%ebp)
0828638f +0x1f5:  jne    082863a7 <+0x20d>
08286391 +0x1f7:  cmpl   $0x8,0xc(%ebp)
08286395 +0x1fb:  jne    082863a7 <+0x20d>
08286397 +0x1fd:  cmpl   $0x3,0x10(%ebp)
0828639b +0x201:  jne    082863a7 <+0x20d>
0828639d +0x203:  cmpl   $0x0,0x14(%ebp)
082863a1 +0x207:  je     08286453 <+0x2b9>
082863a7 +0x20d:  cmpl   $0x3,0x8(%ebp)
082863ab +0x211:  jne    082863c3 <+0x229>
082863ad +0x213:  cmpl   $0x0,0xc(%ebp)
082863b1 +0x217:  jne    082863c3 <+0x229>
082863b3 +0x219:  cmpl   $0x3,0x10(%ebp)
082863b7 +0x21d:  jne    082863c3 <+0x229>
082863b9 +0x21f:  cmpl   $0x8,0x14(%ebp)
082863bd +0x223:  je     08286453 <+0x2b9>
082863c3 +0x229:  cmpl   $0x3,0x8(%ebp)
082863c7 +0x22d:  jne    082863db <+0x241>
082863c9 +0x22f:  cmpl   $0x1,0xc(%ebp)
082863cd +0x233:  jne    082863db <+0x241>
082863cf +0x235:  cmpl   $0x2,0x10(%ebp)
082863d3 +0x239:  jne    082863db <+0x241>
082863d5 +0x23b:  cmpl   $0x0,0x14(%ebp)
082863d9 +0x23f:  je     08286453 <+0x2b9>
082863db +0x241:  cmpl   $0x2,0x8(%ebp)
082863df +0x245:  jne    082863f3 <+0x259>
082863e1 +0x247:  cmpl   $0x0,0xc(%ebp)
082863e5 +0x24b:  jne    082863f3 <+0x259>
082863e7 +0x24d:  cmpl   $0x3,0x10(%ebp)
082863eb +0x251:  jne    082863f3 <+0x259>
082863ed +0x253:  cmpl   $0x1,0x14(%ebp)
082863f1 +0x257:  je     08286453 <+0x2b9>
082863f3 +0x259:  cmpl   $0x2,0x8(%ebp)
082863f7 +0x25d:  jne    0828640b <+0x271>
082863f9 +0x25f:  cmpl   $0x2,0xc(%ebp)
082863fd +0x263:  jne    0828640b <+0x271>
082863ff +0x265:  cmpl   $0x2,0x10(%ebp)
08286403 +0x269:  jne    0828640b <+0x271>
08286405 +0x26b:  cmpl   $0x5,0x14(%ebp)
08286409 +0x26f:  je     08286453 <+0x2b9>
0828640b +0x271:  cmpl   $0x2,0x8(%ebp)
0828640f +0x275:  jne    08286423 <+0x289>
08286411 +0x277:  cmpl   $0x5,0xc(%ebp)
08286415 +0x27b:  jne    08286423 <+0x289>
08286417 +0x27d:  cmpl   $0x2,0x10(%ebp)
0828641b +0x281:  jne    08286423 <+0x289>
0828641d +0x283:  cmpl   $0x2,0x14(%ebp)
08286421 +0x287:  je     08286453 <+0x2b9>
08286423 +0x289:  cmpl   $0x2,0x8(%ebp)
08286427 +0x28d:  jne    0828643b <+0x2a1>
08286429 +0x28f:  cmpl   $0x1,0xc(%ebp)
0828642d +0x293:  jne    0828643b <+0x2a1>
0828642f +0x295:  cmpl   $0x2,0x10(%ebp)
08286433 +0x299:  jne    0828643b <+0x2a1>
08286435 +0x29b:  cmpl   $0x5,0x14(%ebp)
08286439 +0x29f:  je     08286453 <+0x2b9>
0828643b +0x2a1:  cmpl   $0x2,0x8(%ebp)
0828643f +0x2a5:  jne    0828645a <+0x2c0>
08286441 +0x2a7:  cmpl   $0x5,0xc(%ebp)
08286445 +0x2ab:  jne    0828645a <+0x2c0>
08286447 +0x2ad:  cmpl   $0x2,0x10(%ebp)
0828644b +0x2b1:  jne    0828645a <+0x2c0>
0828644d +0x2b3:  cmpl   $0x1,0x14(%ebp)
08286451 +0x2b7:  jne    0828645a <+0x2c0>
08286453 +0x2b9:  mov    $0x1,%eax
08286458 +0x2be:  jmp    0828645f <+0x2c5>
0828645a +0x2c0:  mov    $0x0,%eax
0828645f +0x2c5:  pop    %ebp
08286460 +0x2c6:  ret
08286461 +0x2c7:  nop
08286462 +0x2c8:  push   %ebp
08286463 +0x2c9:  mov    %esp,%ebp
08286465 +0x2cb:  cmpl   $0x1,0x8(%ebp)
08286469 +0x2cf:  jne    08286478 <+0x2de>
0828646b +0x2d1:  cmpl   $0x1,0xc(%ebp)
0828646f +0x2d5:  jne    08286478 <+0x2de>
08286471 +0x2d7:  mov    $0x1,%eax
08286476 +0x2dc:  jmp    082864e4 <+0x34a>
08286478 +0x2de:  cmpl   $0x1,0x8(%ebp)
0828647c +0x2e2:  jne    08286484 <+0x2ea>
0828647e +0x2e4:  cmpl   $0x1,0xc(%ebp)
08286482 +0x2e8:  je     082864d8 <+0x33e>
08286484 +0x2ea:  cmpl   $0x2,0x8(%ebp)
08286488 +0x2ee:  jne    08286490 <+0x2f6>
0828648a +0x2f0:  cmpl   $0x5,0xc(%ebp)
0828648e +0x2f4:  je     082864d8 <+0x33e>
08286490 +0x2f6:  cmpl   $0x3,0x8(%ebp)
08286494 +0x2fa:  jne    0828649c <+0x302>
08286496 +0x2fc:  cmpl   $0x2,0xc(%ebp)
0828649a +0x300:  je     082864d8 <+0x33e>
0828649c +0x302:  cmpl   $0x4,0x8(%ebp)
082864a0 +0x306:  jne    082864a8 <+0x30e>
082864a2 +0x308:  cmpl   $0x1,0xc(%ebp)
082864a6 +0x30c:  je     082864d8 <+0x33e>
082864a8 +0x30e:  cmpl   $0x5,0x8(%ebp)
082864ac +0x312:  jne    082864b4 <+0x31a>
082864ae +0x314:  cmpl   $0x1,0xc(%ebp)
082864b2 +0x318:  je     082864d8 <+0x33e>
082864b4 +0x31a:  cmpl   $0x6,0x8(%ebp)
082864b8 +0x31e:  jne    082864c0 <+0x326>
082864ba +0x320:  cmpl   $0x4,0xc(%ebp)
082864be +0x324:  je     082864d8 <+0x33e>
082864c0 +0x326:  cmpl   $0x9,0x8(%ebp)
082864c4 +0x32a:  jne    082864cc <+0x332>
082864c6 +0x32c:  cmpl   $0x2,0xc(%ebp)
082864ca +0x330:  je     082864d8 <+0x33e>
082864cc +0x332:  cmpl   $0xb,0x8(%ebp)
082864d0 +0x336:  jne    082864df <+0x345>
082864d2 +0x338:  cmpl   $0x3,0xc(%ebp)
082864d6 +0x33c:  jne    082864df <+0x345>
082864d8 +0x33e:  mov    $0x1,%eax
082864dd +0x343:  jmp    082864e4 <+0x34a>
082864df +0x345:  mov    $0x0,%eax
082864e4 +0x34a:  pop    %ebp
082864e5 +0x34b:  ret
082864e6 +0x34c:  nop
082864e7 +0x34d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x828619a

/* CHackLog_InvalidAreaMove::checkSeriaRoom(int, int) */

void CHackLog_InvalidAreaMove::_GLOBAL__I_checkSeriaRoom(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
