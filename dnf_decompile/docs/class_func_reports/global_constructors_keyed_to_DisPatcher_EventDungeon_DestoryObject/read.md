# read

`_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE`

`global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to DisPatcher_EventDungeon_DestoryObject` | `0x0812c00b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812c00b  _GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE
#           global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)
# range [0x0812c00b, 0x0812c74b]
0812c00b +0x000:  push   %ebp
0812c00c +0x001:  mov    %esp,%ebp
0812c00e +0x003:  sub    $0x18,%esp
0812c011 +0x006:  movl   $0xffff,0x4(%esp)
0812c019 +0x00e:  movl   $0x1,(%esp)
0812c020 +0x015:  call   0812bfcb <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0812c025 +0x01a:  leave
0812c026 +0x01b:  ret
0812c027 +0x01c:  nop
0812c028 +0x01d:  push   %ebp
0812c029 +0x01e:  mov    %esp,%ebp
0812c02b +0x020:  sub    $0x18,%esp
0812c02e +0x023:  mov    0x8(%ebp),%eax
0812c031 +0x026:  movl   $&_ZTVN15CMDPacketStruct14STBaseResponseE+0x8,(%eax)
0812c037 +0x02c:  mov    0x8(%ebp),%eax
0812c03a +0x02f:  mov    %eax,(%esp)
0812c03d +0x032:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
0812c042 +0x037:  mov    $0x0,%eax
0812c047 +0x03c:  test   %al,%al
0812c049 +0x03e:  je     0812c056 <+0x4b>
0812c04b +0x040:  mov    0x8(%ebp),%eax
0812c04e +0x043:  mov    %eax,(%esp)
0812c051 +0x046:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c056 +0x04b:  leave
0812c057 +0x04c:  ret
0812c058 +0x04d:  push   %ebp
0812c059 +0x04e:  mov    %esp,%ebp
0812c05b +0x050:  sub    $0x18,%esp
0812c05e +0x053:  mov    0x8(%ebp),%eax
0812c061 +0x056:  mov    %eax,(%esp)
0812c064 +0x059:  call   0812c028 <+0x1d>
0812c069 +0x05e:  mov    0x8(%ebp),%eax
0812c06c +0x061:  mov    %eax,(%esp)
0812c06f +0x064:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c074 +0x069:  leave
0812c075 +0x06a:  ret
0812c076 +0x06b:  push   %ebp
0812c077 +0x06c:  mov    %esp,%ebp
0812c079 +0x06e:  pop    %ebp
0812c07a +0x06f:  ret
0812c07b +0x070:  nop
0812c07c +0x071:  push   %ebp
0812c07d +0x072:  mov    %esp,%ebp
0812c07f +0x074:  sub    $0x18,%esp
0812c082 +0x077:  mov    0x8(%ebp),%eax
0812c085 +0x07a:  mov    %eax,(%esp)
0812c088 +0x07d:  call   0812c076 <+0x6b>
0812c08d +0x082:  leave
0812c08e +0x083:  ret
0812c08f +0x084:  nop
0812c090 +0x085:  push   %ebp
0812c091 +0x086:  mov    %esp,%ebp
0812c093 +0x088:  sub    $0x18,%esp
0812c096 +0x08b:  mov    0x8(%ebp),%eax
0812c099 +0x08e:  mov    %eax,(%esp)
0812c09c +0x091:  call   0812c07c <+0x71>
0812c0a1 +0x096:  movl   $0x18,0x8(%esp)
0812c0a9 +0x09e:  movl   $0x0,0x4(%esp)
0812c0b1 +0x0a6:  mov    0x8(%ebp),%eax
0812c0b4 +0x0a9:  mov    %eax,(%esp)
0812c0b7 +0x0ac:  call   0807dcc0 <_init+0x5b8>
0812c0bc +0x0b1:  leave
0812c0bd +0x0b2:  ret
0812c0be +0x0b3:  push   %ebp
0812c0bf +0x0b4:  mov    %esp,%ebp
0812c0c1 +0x0b6:  sub    $0x18,%esp
0812c0c4 +0x0b9:  mov    0x8(%ebp),%eax
0812c0c7 +0x0bc:  mov    %eax,(%esp)
0812c0ca +0x0bf:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
0812c0cf +0x0c4:  mov    0x8(%ebp),%eax
0812c0d2 +0x0c7:  movl   $&_ZTVN15CMDPacketStruct14STBaseResponseE+0x8,(%eax)
0812c0d8 +0x0cd:  leave
0812c0d9 +0x0ce:  ret
0812c0da +0x0cf:  push   %ebp
0812c0db +0x0d0:  mov    %esp,%ebp
0812c0dd +0x0d2:  sub    $0x18,%esp
0812c0e0 +0x0d5:  mov    0x8(%ebp),%eax
0812c0e3 +0x0d8:  mov    %eax,(%esp)
0812c0e6 +0x0db:  call   0812c0be <+0xb3>
0812c0eb +0x0e0:  mov    0x8(%ebp),%eax
0812c0ee +0x0e3:  movl   $&_ZTVN15CMDPacketStruct31_STResEventDungeonDestoryObjectE+0x8,(%eax)
0812c0f4 +0x0e9:  movl   $0x6,0x8(%esp)
0812c0fc +0x0f1:  movl   $0x0,0x4(%esp)
0812c104 +0x0f9:  mov    0x8(%ebp),%eax
0812c107 +0x0fc:  mov    %eax,(%esp)
0812c10a +0x0ff:  call   0807dcc0 <_init+0x5b8>
0812c10f +0x104:  leave
0812c110 +0x105:  ret
0812c111 +0x106:  nop
0812c112 +0x107:  push   %ebp
0812c113 +0x108:  mov    %esp,%ebp
0812c115 +0x10a:  sub    $0x18,%esp
0812c118 +0x10d:  mov    0x8(%ebp),%eax
0812c11b +0x110:  mov    %eax,(%esp)
0812c11e +0x113:  call   0812c07c <+0x71>
0812c123 +0x118:  movl   $0x14,0x8(%esp)
0812c12b +0x120:  movl   $0x0,0x4(%esp)
0812c133 +0x128:  mov    0x8(%ebp),%eax
0812c136 +0x12b:  mov    %eax,(%esp)
0812c139 +0x12e:  call   0807dcc0 <_init+0x5b8>
0812c13e +0x133:  leave
0812c13f +0x134:  ret
0812c140 +0x135:  push   %ebp
0812c141 +0x136:  mov    %esp,%ebp
0812c143 +0x138:  sub    $0x18,%esp
0812c146 +0x13b:  mov    0x8(%ebp),%eax
0812c149 +0x13e:  mov    %eax,(%esp)
0812c14c +0x141:  call   0812c0be <+0xb3>
0812c151 +0x146:  mov    0x8(%ebp),%eax
0812c154 +0x149:  movl   $&_ZTVN15CMDPacketStruct27_STResEventDungeonClearRoomE+0x8,(%eax)
0812c15a +0x14f:  movl   $0xc,0x8(%esp)
0812c162 +0x157:  movl   $0x0,0x4(%esp)
0812c16a +0x15f:  mov    0x8(%ebp),%eax
0812c16d +0x162:  mov    %eax,(%esp)
0812c170 +0x165:  call   0807dcc0 <_init+0x5b8>
0812c175 +0x16a:  leave
0812c176 +0x16b:  ret
0812c177 +0x16c:  nop
0812c178 +0x16d:  push   %ebp
0812c179 +0x16e:  mov    %esp,%ebp
0812c17b +0x170:  sub    $0x18,%esp
0812c17e +0x173:  mov    0x8(%ebp),%eax
0812c181 +0x176:  movl   $&_ZTV37DisPatcher_EventDungeon_DestoryObject+0x8,(%eax)
0812c187 +0x17c:  mov    0x8(%ebp),%eax
0812c18a +0x17f:  mov    %eax,(%esp)
0812c18d +0x182:  call   0812c214 <+0x209>
0812c192 +0x187:  mov    $0x0,%eax
0812c197 +0x18c:  test   %al,%al
0812c199 +0x18e:  je     0812c1a6 <+0x19b>
0812c19b +0x190:  mov    0x8(%ebp),%eax
0812c19e +0x193:  mov    %eax,(%esp)
0812c1a1 +0x196:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c1a6 +0x19b:  leave
0812c1a7 +0x19c:  ret
0812c1a8 +0x19d:  push   %ebp
0812c1a9 +0x19e:  mov    %esp,%ebp
0812c1ab +0x1a0:  sub    $0x18,%esp
0812c1ae +0x1a3:  mov    0x8(%ebp),%eax
0812c1b1 +0x1a6:  mov    %eax,(%esp)
0812c1b4 +0x1a9:  call   0812c178 <+0x16d>
0812c1b9 +0x1ae:  mov    0x8(%ebp),%eax
0812c1bc +0x1b1:  mov    %eax,(%esp)
0812c1bf +0x1b4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c1c4 +0x1b9:  leave
0812c1c5 +0x1ba:  ret
0812c1c6 +0x1bb:  push   %ebp
0812c1c7 +0x1bc:  mov    %esp,%ebp
0812c1c9 +0x1be:  sub    $0x18,%esp
0812c1cc +0x1c1:  mov    0x8(%ebp),%eax
0812c1cf +0x1c4:  movl   $&_ZTV33DisPatcher_EventDungeon_ClearRoom+0x8,(%eax)
0812c1d5 +0x1ca:  mov    0x8(%ebp),%eax
0812c1d8 +0x1cd:  mov    %eax,(%esp)
0812c1db +0x1d0:  call   0812c262 <+0x257>
0812c1e0 +0x1d5:  mov    $0x0,%eax
0812c1e5 +0x1da:  test   %al,%al
0812c1e7 +0x1dc:  je     0812c1f4 <+0x1e9>
0812c1e9 +0x1de:  mov    0x8(%ebp),%eax
0812c1ec +0x1e1:  mov    %eax,(%esp)
0812c1ef +0x1e4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c1f4 +0x1e9:  leave
0812c1f5 +0x1ea:  ret
0812c1f6 +0x1eb:  push   %ebp
0812c1f7 +0x1ec:  mov    %esp,%ebp
0812c1f9 +0x1ee:  sub    $0x18,%esp
0812c1fc +0x1f1:  mov    0x8(%ebp),%eax
0812c1ff +0x1f4:  mov    %eax,(%esp)
0812c202 +0x1f7:  call   0812c1c6 <+0x1bb>
0812c207 +0x1fc:  mov    0x8(%ebp),%eax
0812c20a +0x1ff:  mov    %eax,(%esp)
0812c20d +0x202:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c212 +0x207:  leave
0812c213 +0x208:  ret
0812c214 +0x209:  push   %ebp
0812c215 +0x20a:  mov    %esp,%ebp
0812c217 +0x20c:  sub    $0x18,%esp
0812c21a +0x20f:  mov    0x8(%ebp),%eax
0812c21d +0x212:  movl   $&_ZTV17IPacketDispatcherIN15CMDPacketStruct31_STReqEventDungeonDestoryObjectENS0_31_STResEventDungeonDestoryObjectEL8ch_state3EE+0x8,(%eax)
0812c223 +0x218:  mov    0x8(%ebp),%eax
0812c226 +0x21b:  mov    %eax,(%esp)
0812c229 +0x21e:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
0812c22e +0x223:  mov    $0x0,%eax
0812c233 +0x228:  test   %al,%al
0812c235 +0x22a:  je     0812c242 <+0x237>
0812c237 +0x22c:  mov    0x8(%ebp),%eax
0812c23a +0x22f:  mov    %eax,(%esp)
0812c23d +0x232:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c242 +0x237:  leave
0812c243 +0x238:  ret
0812c244 +0x239:  push   %ebp
0812c245 +0x23a:  mov    %esp,%ebp
0812c247 +0x23c:  sub    $0x18,%esp
0812c24a +0x23f:  mov    0x8(%ebp),%eax
0812c24d +0x242:  mov    %eax,(%esp)
0812c250 +0x245:  call   0812c214 <+0x209>
0812c255 +0x24a:  mov    0x8(%ebp),%eax
0812c258 +0x24d:  mov    %eax,(%esp)
0812c25b +0x250:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c260 +0x255:  leave
0812c261 +0x256:  ret
0812c262 +0x257:  push   %ebp
0812c263 +0x258:  mov    %esp,%ebp
0812c265 +0x25a:  sub    $0x18,%esp
0812c268 +0x25d:  mov    0x8(%ebp),%eax
0812c26b +0x260:  movl   $&_ZTV17IPacketDispatcherIN15CMDPacketStruct27_STReqEventDungeonClearRoomENS0_27_STResEventDungeonClearRoomEL8ch_state3EE+0x8,(%eax)
0812c271 +0x266:  mov    0x8(%ebp),%eax
0812c274 +0x269:  mov    %eax,(%esp)
0812c277 +0x26c:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
0812c27c +0x271:  mov    $0x0,%eax
0812c281 +0x276:  test   %al,%al
0812c283 +0x278:  je     0812c290 <+0x285>
0812c285 +0x27a:  mov    0x8(%ebp),%eax
0812c288 +0x27d:  mov    %eax,(%esp)
0812c28b +0x280:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c290 +0x285:  leave
0812c291 +0x286:  ret
0812c292 +0x287:  push   %ebp
0812c293 +0x288:  mov    %esp,%ebp
0812c295 +0x28a:  sub    $0x18,%esp
0812c298 +0x28d:  mov    0x8(%ebp),%eax
0812c29b +0x290:  mov    %eax,(%esp)
0812c29e +0x293:  call   0812c262 <+0x257>
0812c2a3 +0x298:  mov    0x8(%ebp),%eax
0812c2a6 +0x29b:  mov    %eax,(%esp)
0812c2a9 +0x29e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c2ae +0x2a3:  leave
0812c2af +0x2a4:  ret
0812c2b0 +0x2a5:  push   %ebp
0812c2b1 +0x2a6:  mov    %esp,%ebp
0812c2b3 +0x2a8:  sub    $0x18,%esp
0812c2b6 +0x2ab:  mov    0x8(%ebp),%eax
0812c2b9 +0x2ae:  movl   $&_ZTVN15CMDPacketStruct27_STResEventDungeonClearRoomE+0x8,(%eax)
0812c2bf +0x2b4:  mov    0x8(%ebp),%eax
0812c2c2 +0x2b7:  mov    %eax,(%esp)
0812c2c5 +0x2ba:  call   0812c028 <+0x1d>
0812c2ca +0x2bf:  mov    $0x0,%eax
0812c2cf +0x2c4:  test   %al,%al
0812c2d1 +0x2c6:  je     0812c2de <+0x2d3>
0812c2d3 +0x2c8:  mov    0x8(%ebp),%eax
0812c2d6 +0x2cb:  mov    %eax,(%esp)
0812c2d9 +0x2ce:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c2de +0x2d3:  leave
0812c2df +0x2d4:  ret
0812c2e0 +0x2d5:  push   %ebp
0812c2e1 +0x2d6:  mov    %esp,%ebp
0812c2e3 +0x2d8:  sub    $0x18,%esp
0812c2e6 +0x2db:  mov    0x8(%ebp),%eax
0812c2e9 +0x2de:  mov    %eax,(%esp)
0812c2ec +0x2e1:  call   0812c2b0 <+0x2a5>
0812c2f1 +0x2e6:  mov    0x8(%ebp),%eax
0812c2f4 +0x2e9:  mov    %eax,(%esp)
0812c2f7 +0x2ec:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c2fc +0x2f1:  leave
0812c2fd +0x2f2:  ret
0812c2fe +0x2f3:  push   %ebp
0812c2ff +0x2f4:  mov    %esp,%ebp
0812c301 +0x2f6:  sub    $0x18,%esp
0812c304 +0x2f9:  mov    0x8(%ebp),%eax
0812c307 +0x2fc:  movl   $&_ZTVN15CMDPacketStruct31_STResEventDungeonDestoryObjectE+0x8,(%eax)
0812c30d +0x302:  mov    0x8(%ebp),%eax
0812c310 +0x305:  mov    %eax,(%esp)
0812c313 +0x308:  call   0812c028 <+0x1d>
0812c318 +0x30d:  mov    $0x0,%eax
0812c31d +0x312:  test   %al,%al
0812c31f +0x314:  je     0812c32c <+0x321>
0812c321 +0x316:  mov    0x8(%ebp),%eax
0812c324 +0x319:  mov    %eax,(%esp)
0812c327 +0x31c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c32c +0x321:  leave
0812c32d +0x322:  ret
0812c32e +0x323:  push   %ebp
0812c32f +0x324:  mov    %esp,%ebp
0812c331 +0x326:  sub    $0x18,%esp
0812c334 +0x329:  mov    0x8(%ebp),%eax
0812c337 +0x32c:  mov    %eax,(%esp)
0812c33a +0x32f:  call   0812c2fe <+0x2f3>
0812c33f +0x334:  mov    0x8(%ebp),%eax
0812c342 +0x337:  mov    %eax,(%esp)
0812c345 +0x33a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812c34a +0x33f:  leave
0812c34b +0x340:  ret
0812c34c +0x341:  push   %ebp
0812c34d +0x342:  mov    %esp,%ebp
0812c34f +0x344:  push   %esi
0812c350 +0x345:  push   %ebx
0812c351 +0x346:  sub    $0x40,%esp
0812c354 +0x349:  mov    0x8(%ebp),%eax
0812c357 +0x34c:  mov    (%eax),%eax
0812c359 +0x34e:  add    $0x10,%eax
0812c35c +0x351:  mov    (%eax),%edx
0812c35e +0x353:  mov    0x10(%ebp),%eax
0812c361 +0x356:  mov    %eax,0x8(%esp)
0812c365 +0x35a:  mov    0xc(%ebp),%eax
0812c368 +0x35d:  mov    %eax,0x4(%esp)
0812c36c +0x361:  mov    0x8(%ebp),%eax
0812c36f +0x364:  mov    %eax,(%esp)
0812c372 +0x367:  call   *%edx
0812c374 +0x369:  test   %eax,%eax
0812c376 +0x36b:  setg   %al
0812c379 +0x36e:  test   %al,%al
0812c37b +0x370:  je     0812c387 <+0x37c>
0812c37d +0x372:  mov    $0x0,%ebx
0812c382 +0x377:  jmp    0812c49e <+0x493>
0812c387 +0x37c:  lea    -0x20(%ebp),%eax
0812c38a +0x37f:  mov    %eax,(%esp)
0812c38d +0x382:  call   0812c112 <+0x107>
0812c392 +0x387:  movl   $0x0,-0xc(%ebp)
0812c399 +0x38e:  mov    0x8(%ebp),%eax
0812c39c +0x391:  mov    (%eax),%eax
0812c39e +0x393:  add    $0x14,%eax
0812c3a1 +0x396:  mov    (%eax),%edx
0812c3a3 +0x398:  lea    -0x20(%ebp),%eax
0812c3a6 +0x39b:  mov    %eax,0x8(%esp)
0812c3aa +0x39f:  mov    0x10(%ebp),%eax
0812c3ad +0x3a2:  mov    %eax,0x4(%esp)
0812c3b1 +0x3a6:  mov    0x8(%ebp),%eax
0812c3b4 +0x3a9:  mov    %eax,(%esp)
0812c3b7 +0x3ac:  call   *%edx
0812c3b9 +0x3ae:  mov    %eax,-0xc(%ebp)
0812c3bc +0x3b1:  cmpl   $0x0,-0xc(%ebp)
0812c3c0 +0x3b5:  setne  %al
0812c3c3 +0x3b8:  test   %al,%al
0812c3c5 +0x3ba:  je     0812c3cf <+0x3c4>
0812c3c7 +0x3bc:  mov    -0xc(%ebp),%ebx
0812c3ca +0x3bf:  jmp    0812c49e <+0x493>
0812c3cf +0x3c4:  lea    -0x2c(%ebp),%eax
0812c3d2 +0x3c7:  mov    %eax,(%esp)
0812c3d5 +0x3ca:  call   0812c140 <+0x135>
0812c3da +0x3cf:  mov    0x8(%ebp),%eax
0812c3dd +0x3d2:  mov    (%eax),%eax
0812c3df +0x3d4:  add    $0x18,%eax
0812c3e2 +0x3d7:  mov    (%eax),%edx
0812c3e4 +0x3d9:  lea    -0x2c(%ebp),%eax
0812c3e7 +0x3dc:  mov    %eax,0xc(%esp)
0812c3eb +0x3e0:  lea    -0x20(%ebp),%eax
0812c3ee +0x3e3:  mov    %eax,0x8(%esp)
0812c3f2 +0x3e7:  mov    0xc(%ebp),%eax
0812c3f5 +0x3ea:  mov    %eax,0x4(%esp)
0812c3f9 +0x3ee:  mov    0x8(%ebp),%eax
0812c3fc +0x3f1:  mov    %eax,(%esp)
0812c3ff +0x3f4:  call   *%edx
0812c401 +0x3f6:  mov    %eax,-0xc(%ebp)
0812c404 +0x3f9:  cmpl   $0x0,-0xc(%ebp)
0812c408 +0x3fd:  setg   %al
0812c40b +0x400:  test   %al,%al
0812c40d +0x402:  je     0812c414 <+0x409>
0812c40f +0x404:  mov    -0xc(%ebp),%ebx
0812c412 +0x407:  jmp    0812c493 <+0x488>
0812c414 +0x409:  cmpl   $0x0,-0xc(%ebp)
0812c418 +0x40d:  jns    0812c421 <+0x416>
0812c41a +0x40f:  mov    $0x0,%ebx
0812c41f +0x414:  jmp    0812c493 <+0x488>
0812c421 +0x416:  mov    0x8(%ebp),%eax
0812c424 +0x419:  mov    (%eax),%eax
0812c426 +0x41b:  add    $0x1c,%eax
0812c429 +0x41e:  mov    (%eax),%edx
0812c42b +0x420:  lea    -0x2c(%ebp),%eax
0812c42e +0x423:  mov    %eax,0x8(%esp)
0812c432 +0x427:  mov    0xc(%ebp),%eax
0812c435 +0x42a:  mov    %eax,0x4(%esp)
0812c439 +0x42e:  mov    0x8(%ebp),%eax
0812c43c +0x431:  mov    %eax,(%esp)
0812c43f +0x434:  call   *%edx
0812c441 +0x436:  mov    0x8(%ebp),%eax
0812c444 +0x439:  mov    (%eax),%eax
0812c446 +0x43b:  add    $0xc,%eax
0812c449 +0x43e:  mov    (%eax),%edx
0812c44b +0x440:  mov    0x10(%ebp),%eax
0812c44e +0x443:  mov    %eax,0x8(%esp)
0812c452 +0x447:  mov    0xc(%ebp),%eax
0812c455 +0x44a:  mov    %eax,0x4(%esp)
0812c459 +0x44e:  mov    0x8(%ebp),%eax
0812c45c +0x451:  mov    %eax,(%esp)
0812c45f +0x454:  call   *%edx
0812c461 +0x456:  test   %eax,%eax
0812c463 +0x458:  setg   %al
0812c466 +0x45b:  test   %al,%al
0812c468 +0x45d:  je     0812c471 <+0x466>
0812c46a +0x45f:  mov    $0x85,%ebx
0812c46f +0x464:  jmp    0812c493 <+0x488>
0812c471 +0x466:  mov    $0x0,%ebx
0812c476 +0x46b:  jmp    0812c493 <+0x488>
0812c478 +0x46d:  mov    %edx,%ebx
0812c47a +0x46f:  mov    %eax,%esi
0812c47c +0x471:  lea    -0x2c(%ebp),%eax
0812c47f +0x474:  mov    %eax,(%esp)
0812c482 +0x477:  call   0812c2b0 <+0x2a5>
0812c487 +0x47c:  mov    %esi,%eax
0812c489 +0x47e:  mov    %ebx,%edx
0812c48b +0x480:  mov    %eax,(%esp)
0812c48e +0x483:  call   08ae3750 <_Unwind_Resume>
0812c493 +0x488:  lea    -0x2c(%ebp),%eax
0812c496 +0x48b:  mov    %eax,(%esp)
0812c499 +0x48e:  call   0812c2b0 <+0x2a5>
0812c49e +0x493:  mov    %ebx,%eax
0812c4a0 +0x495:  add    $0x40,%esp
0812c4a3 +0x498:  pop    %ebx
0812c4a4 +0x499:  pop    %esi
0812c4a5 +0x49a:  pop    %ebp
0812c4a6 +0x49b:  ret
0812c4a7 +0x49c:  nop
0812c4a8 +0x49d:  push   %ebp
0812c4a9 +0x49e:  mov    %esp,%ebp
0812c4ab +0x4a0:  mov    $0x0,%eax
0812c4b0 +0x4a5:  pop    %ebp
0812c4b1 +0x4a6:  ret
0812c4b2 +0x4a7:  push   %ebp
0812c4b3 +0x4a8:  mov    %esp,%ebp
0812c4b5 +0x4aa:  sub    $0x38,%esp
0812c4b8 +0x4ad:  mov    0xc(%ebp),%eax
0812c4bb +0x4b0:  mov    %eax,(%esp)
0812c4be +0x4b3:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0812c4c3 +0x4b8:  cmp    $0x2,%eax
0812c4c6 +0x4bb:  setle  %al
0812c4c9 +0x4be:  test   %al,%al
0812c4cb +0x4c0:  je     0812c53f <+0x534>
0812c4cd +0x4c2:  movl   $0x1,0x4(%esp)
0812c4d5 +0x4ca:  mov    0x10(%ebp),%eax
0812c4d8 +0x4cd:  mov    %eax,(%esp)
0812c4db +0x4d0:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
0812c4e0 +0x4d5:  lea    -0xa(%ebp),%eax
0812c4e3 +0x4d8:  mov    %eax,0x4(%esp)
0812c4e7 +0x4dc:  mov    0x10(%ebp),%eax
0812c4ea +0x4df:  mov    %eax,(%esp)
0812c4ed +0x4e2:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0812c4f2 +0x4e7:  mov    0x10(%ebp),%eax
0812c4f5 +0x4ea:  mov    %eax,(%esp)
0812c4f8 +0x4ed:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
0812c4fd +0x4f2:  movzwl -0xa(%ebp),%edx
0812c501 +0x4f6:  movswl %dx,%edx
0812c504 +0x4f9:  mov    %eax,0x18(%esp)
0812c508 +0x4fd:  mov    %edx,0x14(%esp)
0812c50c +0x501:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
0812c514 +0x509:  movl   $0x94,0xc(%esp)
0812c51c +0x511:  movl   $&_ZZN17IPacketDispatcherIN15CMDPacketStruct27_STReqEventDungeonClearRoomENS0_27_STResEventDungeonClearRoomEL8ch_state3EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
0812c524 +0x519:  movl   $"localchina/../PacketDispatcher.h",0x4(%esp)
0812c52c +0x521:  movl   $0x1,(%esp)
0812c533 +0x528:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0812c538 +0x52d:  mov    $0x95,%eax
0812c53d +0x532:  jmp    0812c544 <+0x539>
0812c53f +0x534:  mov    $0x0,%eax
0812c544 +0x539:  leave
0812c545 +0x53a:  ret
0812c546 +0x53b:  push   %ebp
0812c547 +0x53c:  mov    %esp,%ebp
0812c549 +0x53e:  push   %esi
0812c54a +0x53f:  push   %ebx
0812c54b +0x540:  sub    $0x40,%esp
0812c54e +0x543:  mov    0x8(%ebp),%eax
0812c551 +0x546:  mov    (%eax),%eax
0812c553 +0x548:  add    $0x10,%eax
0812c556 +0x54b:  mov    (%eax),%edx
0812c558 +0x54d:  mov    0x10(%ebp),%eax
0812c55b +0x550:  mov    %eax,0x8(%esp)
0812c55f +0x554:  mov    0xc(%ebp),%eax
0812c562 +0x557:  mov    %eax,0x4(%esp)
0812c566 +0x55b:  mov    0x8(%ebp),%eax
0812c569 +0x55e:  mov    %eax,(%esp)
0812c56c +0x561:  call   *%edx
0812c56e +0x563:  test   %eax,%eax
0812c570 +0x565:  setg   %al
0812c573 +0x568:  test   %al,%al
0812c575 +0x56a:  je     0812c581 <+0x576>
0812c577 +0x56c:  mov    $0x0,%ebx
0812c57c +0x571:  jmp    0812c698 <+0x68d>
0812c581 +0x576:  lea    -0x24(%ebp),%eax
0812c584 +0x579:  mov    %eax,(%esp)
0812c587 +0x57c:  call   0812c090 <+0x85>
0812c58c +0x581:  movl   $0x0,-0xc(%ebp)
0812c593 +0x588:  mov    0x8(%ebp),%eax
0812c596 +0x58b:  mov    (%eax),%eax
0812c598 +0x58d:  add    $0x14,%eax
0812c59b +0x590:  mov    (%eax),%edx
0812c59d +0x592:  lea    -0x24(%ebp),%eax
0812c5a0 +0x595:  mov    %eax,0x8(%esp)
0812c5a4 +0x599:  mov    0x10(%ebp),%eax
0812c5a7 +0x59c:  mov    %eax,0x4(%esp)
0812c5ab +0x5a0:  mov    0x8(%ebp),%eax
0812c5ae +0x5a3:  mov    %eax,(%esp)
0812c5b1 +0x5a6:  call   *%edx
0812c5b3 +0x5a8:  mov    %eax,-0xc(%ebp)
0812c5b6 +0x5ab:  cmpl   $0x0,-0xc(%ebp)
0812c5ba +0x5af:  setne  %al
0812c5bd +0x5b2:  test   %al,%al
0812c5bf +0x5b4:  je     0812c5c9 <+0x5be>
0812c5c1 +0x5b6:  mov    -0xc(%ebp),%ebx
0812c5c4 +0x5b9:  jmp    0812c698 <+0x68d>
0812c5c9 +0x5be:  lea    -0x2a(%ebp),%eax
0812c5cc +0x5c1:  mov    %eax,(%esp)
0812c5cf +0x5c4:  call   0812c0da <+0xcf>
0812c5d4 +0x5c9:  mov    0x8(%ebp),%eax
0812c5d7 +0x5cc:  mov    (%eax),%eax
0812c5d9 +0x5ce:  add    $0x18,%eax
0812c5dc +0x5d1:  mov    (%eax),%edx
0812c5de +0x5d3:  lea    -0x2a(%ebp),%eax
0812c5e1 +0x5d6:  mov    %eax,0xc(%esp)
0812c5e5 +0x5da:  lea    -0x24(%ebp),%eax
0812c5e8 +0x5dd:  mov    %eax,0x8(%esp)
0812c5ec +0x5e1:  mov    0xc(%ebp),%eax
0812c5ef +0x5e4:  mov    %eax,0x4(%esp)
0812c5f3 +0x5e8:  mov    0x8(%ebp),%eax
0812c5f6 +0x5eb:  mov    %eax,(%esp)
0812c5f9 +0x5ee:  call   *%edx
0812c5fb +0x5f0:  mov    %eax,-0xc(%ebp)
0812c5fe +0x5f3:  cmpl   $0x0,-0xc(%ebp)
0812c602 +0x5f7:  setg   %al
0812c605 +0x5fa:  test   %al,%al
0812c607 +0x5fc:  je     0812c60e <+0x603>
0812c609 +0x5fe:  mov    -0xc(%ebp),%ebx
0812c60c +0x601:  jmp    0812c68d <+0x682>
0812c60e +0x603:  cmpl   $0x0,-0xc(%ebp)
0812c612 +0x607:  jns    0812c61b <+0x610>
0812c614 +0x609:  mov    $0x0,%ebx
0812c619 +0x60e:  jmp    0812c68d <+0x682>
0812c61b +0x610:  mov    0x8(%ebp),%eax
0812c61e +0x613:  mov    (%eax),%eax
0812c620 +0x615:  add    $0x1c,%eax
0812c623 +0x618:  mov    (%eax),%edx
0812c625 +0x61a:  lea    -0x2a(%ebp),%eax
0812c628 +0x61d:  mov    %eax,0x8(%esp)
0812c62c +0x621:  mov    0xc(%ebp),%eax
0812c62f +0x624:  mov    %eax,0x4(%esp)
0812c633 +0x628:  mov    0x8(%ebp),%eax
0812c636 +0x62b:  mov    %eax,(%esp)
0812c639 +0x62e:  call   *%edx
0812c63b +0x630:  mov    0x8(%ebp),%eax
0812c63e +0x633:  mov    (%eax),%eax
0812c640 +0x635:  add    $0xc,%eax
0812c643 +0x638:  mov    (%eax),%edx
0812c645 +0x63a:  mov    0x10(%ebp),%eax
0812c648 +0x63d:  mov    %eax,0x8(%esp)
0812c64c +0x641:  mov    0xc(%ebp),%eax
0812c64f +0x644:  mov    %eax,0x4(%esp)
0812c653 +0x648:  mov    0x8(%ebp),%eax
0812c656 +0x64b:  mov    %eax,(%esp)
0812c659 +0x64e:  call   *%edx
0812c65b +0x650:  test   %eax,%eax
0812c65d +0x652:  setg   %al
0812c660 +0x655:  test   %al,%al
0812c662 +0x657:  je     0812c66b <+0x660>
0812c664 +0x659:  mov    $0x85,%ebx
0812c669 +0x65e:  jmp    0812c68d <+0x682>
0812c66b +0x660:  mov    $0x0,%ebx
0812c670 +0x665:  jmp    0812c68d <+0x682>
0812c672 +0x667:  mov    %edx,%ebx
0812c674 +0x669:  mov    %eax,%esi
0812c676 +0x66b:  lea    -0x2a(%ebp),%eax
0812c679 +0x66e:  mov    %eax,(%esp)
0812c67c +0x671:  call   0812c2fe <+0x2f3>
0812c681 +0x676:  mov    %esi,%eax
0812c683 +0x678:  mov    %ebx,%edx
0812c685 +0x67a:  mov    %eax,(%esp)
0812c688 +0x67d:  call   08ae3750 <_Unwind_Resume>
0812c68d +0x682:  lea    -0x2a(%ebp),%eax
0812c690 +0x685:  mov    %eax,(%esp)
0812c693 +0x688:  call   0812c2fe <+0x2f3>
0812c698 +0x68d:  mov    %ebx,%eax
0812c69a +0x68f:  add    $0x40,%esp
0812c69d +0x692:  pop    %ebx
0812c69e +0x693:  pop    %esi
0812c69f +0x694:  pop    %ebp
0812c6a0 +0x695:  ret
0812c6a1 +0x696:  nop
0812c6a2 +0x697:  push   %ebp
0812c6a3 +0x698:  mov    %esp,%ebp
0812c6a5 +0x69a:  mov    $0x0,%eax
0812c6aa +0x69f:  pop    %ebp
0812c6ab +0x6a0:  ret
0812c6ac +0x6a1:  push   %ebp
0812c6ad +0x6a2:  mov    %esp,%ebp
0812c6af +0x6a4:  sub    $0x38,%esp
0812c6b2 +0x6a7:  mov    0xc(%ebp),%eax
0812c6b5 +0x6aa:  mov    %eax,(%esp)
0812c6b8 +0x6ad:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0812c6bd +0x6b2:  cmp    $0x2,%eax
0812c6c0 +0x6b5:  setle  %al
0812c6c3 +0x6b8:  test   %al,%al
0812c6c5 +0x6ba:  je     0812c739 <+0x72e>
0812c6c7 +0x6bc:  movl   $0x1,0x4(%esp)
0812c6cf +0x6c4:  mov    0x10(%ebp),%eax
0812c6d2 +0x6c7:  mov    %eax,(%esp)
0812c6d5 +0x6ca:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
0812c6da +0x6cf:  lea    -0xa(%ebp),%eax
0812c6dd +0x6d2:  mov    %eax,0x4(%esp)
0812c6e1 +0x6d6:  mov    0x10(%ebp),%eax
0812c6e4 +0x6d9:  mov    %eax,(%esp)
0812c6e7 +0x6dc:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0812c6ec +0x6e1:  mov    0x10(%ebp),%eax
0812c6ef +0x6e4:  mov    %eax,(%esp)
0812c6f2 +0x6e7:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
0812c6f7 +0x6ec:  movzwl -0xa(%ebp),%edx
0812c6fb +0x6f0:  movswl %dx,%edx
0812c6fe +0x6f3:  mov    %eax,0x18(%esp)
0812c702 +0x6f7:  mov    %edx,0x14(%esp)
0812c706 +0x6fb:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
0812c70e +0x703:  movl   $0x94,0xc(%esp)
0812c716 +0x70b:  movl   $&_ZZN17IPacketDispatcherIN15CMDPacketStruct31_STReqEventDungeonDestoryObjectENS0_31_STResEventDungeonDestoryObjectEL8ch_state3EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
0812c71e +0x713:  movl   $"localchina/../PacketDispatcher.h",0x4(%esp)
0812c726 +0x71b:  movl   $0x1,(%esp)
0812c72d +0x722:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0812c732 +0x727:  mov    $0x95,%eax
0812c737 +0x72c:  jmp    0812c73e <+0x733>
0812c739 +0x72e:  mov    $0x0,%eax
0812c73e +0x733:  leave
0812c73f +0x734:  ret
0812c740 +0x735:  push   %ebp
0812c741 +0x736:  mov    %esp,%ebp
0812c743 +0x738:  pop    %ebp
0812c744 +0x739:  ret
0812c745 +0x73a:  nop
0812c746 +0x73b:  push   %ebp
0812c747 +0x73c:  mov    %esp,%ebp
0812c749 +0x73e:  pop    %ebp
0812c74a +0x73f:  ret
0812c74b +0x740:  nop
```

## 反编译 C

```c
// <global>::global @ 0x812c00b

/* DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&) */

void DisPatcher_EventDungeon_DestoryObject::_GLOBAL__I_read(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
