# user_buy_item

`_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii`

`global constructors keyed to Store::user_buy_item(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Store` | `0x0861b072` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861b072  _GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii
#           global constructors keyed to Store::user_buy_item(CUser*, int, int)
# range [0x0861b072, 0x0861bbf3]
0861b072 +0x000:  push   %ebp
0861b073 +0x001:  mov    %esp,%ebp
0861b075 +0x003:  sub    $0x18,%esp
0861b078 +0x006:  movl   $0xffff,0x4(%esp)
0861b080 +0x00e:  movl   $0x1,(%esp)
0861b087 +0x015:  call   0861b032 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0861b08c +0x01a:  leave
0861b08d +0x01b:  ret
0861b08e +0x01c:  push   %ebp
0861b08f +0x01d:  mov    %esp,%ebp
0861b091 +0x01f:  mov    0x8(%ebp),%eax
0861b094 +0x022:  mov    0xc(%ebp),%edx
0861b097 +0x025:  mov    %edx,(%eax)
0861b099 +0x027:  mov    0x8(%ebp),%eax
0861b09c +0x02a:  mov    0x10(%ebp),%edx
0861b09f +0x02d:  mov    %edx,0x4(%eax)
0861b0a2 +0x030:  mov    0x8(%ebp),%eax
0861b0a5 +0x033:  mov    0x14(%ebp),%edx
0861b0a8 +0x036:  mov    %edx,0x8(%eax)
0861b0ab +0x039:  pop    %ebp
0861b0ac +0x03a:  ret
0861b0ad +0x03b:  nop
0861b0ae +0x03c:  push   %ebp
0861b0af +0x03d:  mov    %esp,%ebp
0861b0b1 +0x03f:  sub    $0x18,%esp
0861b0b4 +0x042:  mov    0x8(%ebp),%eax
0861b0b7 +0x045:  mov    %eax,(%esp)
0861b0ba +0x048:  call   0861b206 <+0x194>
0861b0bf +0x04d:  leave
0861b0c0 +0x04e:  ret
0861b0c1 +0x04f:  nop
0861b0c2 +0x050:  push   %ebp
0861b0c3 +0x051:  mov    %esp,%ebp
0861b0c5 +0x053:  push   %esi
0861b0c6 +0x054:  push   %ebx
0861b0c7 +0x055:  sub    $0x10,%esp
0861b0ca +0x058:  mov    0x8(%ebp),%eax
0861b0cd +0x05b:  mov    %eax,(%esp)
0861b0d0 +0x05e:  call   0861b288 <+0x216>
0861b0d5 +0x063:  mov    0x8(%ebp),%edx
0861b0d8 +0x066:  mov    0x4(%edx),%ecx
0861b0db +0x069:  mov    0x8(%ebp),%edx
0861b0de +0x06c:  mov    (%edx),%edx
0861b0e0 +0x06e:  mov    %eax,0x8(%esp)
0861b0e4 +0x072:  mov    %ecx,0x4(%esp)
0861b0e8 +0x076:  mov    %edx,(%esp)
0861b0eb +0x079:  call   0861b290 <+0x21e>
0861b0f0 +0x07e:  jmp    0861b10d <+0x9b>
0861b0f2 +0x080:  mov    %edx,%ebx
0861b0f4 +0x082:  mov    %eax,%esi
0861b0f6 +0x084:  mov    0x8(%ebp),%eax
0861b0f9 +0x087:  mov    %eax,(%esp)
0861b0fc +0x08a:  call   0861b21a <+0x1a8>
0861b101 +0x08f:  mov    %esi,%eax
0861b103 +0x091:  mov    %ebx,%edx
0861b105 +0x093:  mov    %eax,(%esp)
0861b108 +0x096:  call   08ae3750 <_Unwind_Resume>
0861b10d +0x09b:  mov    0x8(%ebp),%eax
0861b110 +0x09e:  mov    %eax,(%esp)
0861b113 +0x0a1:  call   0861b21a <+0x1a8>
0861b118 +0x0a6:  add    $0x10,%esp
0861b11b +0x0a9:  pop    %ebx
0861b11c +0x0aa:  pop    %esi
0861b11d +0x0ab:  pop    %ebp
0861b11e +0x0ac:  ret
0861b11f +0x0ad:  nop
0861b120 +0x0ae:  push   %ebp
0861b121 +0x0af:  mov    %esp,%ebp
0861b123 +0x0b1:  sub    $0x18,%esp
0861b126 +0x0b4:  mov    0xc(%ebp),%eax
0861b129 +0x0b7:  mov    %eax,(%esp)
0861b12c +0x0ba:  call   0861b2aa <+0x238>
0861b131 +0x0bf:  mov    %eax,0x4(%esp)
0861b135 +0x0c3:  mov    0x8(%ebp),%eax
0861b138 +0x0c6:  mov    %eax,(%esp)
0861b13b +0x0c9:  call   0861b2b2 <+0x240>
0861b140 +0x0ce:  leave
0861b141 +0x0cf:  ret
0861b142 +0x0d0:  push   %ebp
0861b143 +0x0d1:  mov    %esp,%ebp
0861b145 +0x0d3:  push   %ebx
0861b146 +0x0d4:  sub    $0x14,%esp
0861b149 +0x0d7:  mov    0x8(%ebp),%ebx
0861b14c +0x0da:  mov    0xc(%ebp),%eax
0861b14f +0x0dd:  mov    %eax,0x4(%esp)
0861b153 +0x0e1:  mov    %ebx,(%esp)
0861b156 +0x0e4:  call   0861b33c <+0x2ca>
0861b15b +0x0e9:  mov    %ebx,%eax
0861b15d +0x0eb:  add    $0x14,%esp
0861b160 +0x0ee:  pop    %ebx
0861b161 +0x0ef:  pop    %ebp
0861b162 +0x0f0:  ret    $0x4
0861b165 +0x0f3:  nop
0861b166 +0x0f4:  push   %ebp
0861b167 +0x0f5:  mov    %esp,%ebp
0861b169 +0x0f7:  sub    $0x18,%esp
0861b16c +0x0fa:  mov    0xc(%ebp),%eax
0861b16f +0x0fd:  mov    %eax,(%esp)
0861b172 +0x100:  call   0861b34c <+0x2da>
0861b177 +0x105:  mov    (%eax),%edx
0861b179 +0x107:  mov    0x8(%ebp),%eax
0861b17c +0x10a:  mov    %edx,(%eax)
0861b17e +0x10c:  leave
0861b17f +0x10d:  ret
0861b180 +0x10e:  push   %ebp
0861b181 +0x10f:  mov    %esp,%ebp
0861b183 +0x111:  push   %ebx
0861b184 +0x112:  sub    $0x14,%esp
0861b187 +0x115:  mov    0x8(%ebp),%ebx
0861b18a +0x118:  mov    0xc(%ebp),%eax
0861b18d +0x11b:  add    $0x4,%eax
0861b190 +0x11e:  mov    %eax,0x4(%esp)
0861b194 +0x122:  mov    %ebx,(%esp)
0861b197 +0x125:  call   0861b33c <+0x2ca>
0861b19c +0x12a:  mov    %ebx,%eax
0861b19e +0x12c:  add    $0x14,%esp
0861b1a1 +0x12f:  pop    %ebx
0861b1a2 +0x130:  pop    %ebp
0861b1a3 +0x131:  ret    $0x4
0861b1a6 +0x134:  push   %ebp
0861b1a7 +0x135:  mov    %esp,%ebp
0861b1a9 +0x137:  push   %ebx
0861b1aa +0x138:  sub    $0x14,%esp
0861b1ad +0x13b:  mov    0x8(%ebp),%eax
0861b1b0 +0x13e:  mov    %eax,(%esp)
0861b1b3 +0x141:  call   0861b354 <+0x2e2>
0861b1b8 +0x146:  mov    (%eax),%ebx
0861b1ba +0x148:  mov    0xc(%ebp),%eax
0861b1bd +0x14b:  mov    %eax,(%esp)
0861b1c0 +0x14e:  call   0861b354 <+0x2e2>
0861b1c5 +0x153:  mov    (%eax),%eax
0861b1c7 +0x155:  cmp    %eax,%ebx
0861b1c9 +0x157:  setne  %al
0861b1cc +0x15a:  add    $0x14,%esp
0861b1cf +0x15d:  pop    %ebx
0861b1d0 +0x15e:  pop    %ebp
0861b1d1 +0x15f:  ret
0861b1d2 +0x160:  push   %ebp
0861b1d3 +0x161:  mov    %esp,%ebp
0861b1d5 +0x163:  mov    0x8(%ebp),%eax
0861b1d8 +0x166:  mov    (%eax),%eax
0861b1da +0x168:  lea    0xc(%eax),%edx
0861b1dd +0x16b:  mov    0x8(%ebp),%eax
0861b1e0 +0x16e:  mov    %edx,(%eax)
0861b1e2 +0x170:  mov    0x8(%ebp),%eax
0861b1e5 +0x173:  pop    %ebp
0861b1e6 +0x174:  ret
0861b1e7 +0x175:  nop
0861b1e8 +0x176:  push   %ebp
0861b1e9 +0x177:  mov    %esp,%ebp
0861b1eb +0x179:  mov    0x8(%ebp),%eax
0861b1ee +0x17c:  mov    (%eax),%eax
0861b1f0 +0x17e:  pop    %ebp
0861b1f1 +0x17f:  ret
0861b1f2 +0x180:  push   %ebp
0861b1f3 +0x181:  mov    %esp,%ebp
0861b1f5 +0x183:  sub    $0x18,%esp
0861b1f8 +0x186:  mov    0x8(%ebp),%eax
0861b1fb +0x189:  mov    %eax,(%esp)
0861b1fe +0x18c:  call   0861b38c <+0x31a>
0861b203 +0x191:  leave
0861b204 +0x192:  ret
0861b205 +0x193:  nop
0861b206 +0x194:  push   %ebp
0861b207 +0x195:  mov    %esp,%ebp
0861b209 +0x197:  sub    $0x18,%esp
0861b20c +0x19a:  mov    0x8(%ebp),%eax
0861b20f +0x19d:  mov    %eax,(%esp)
0861b212 +0x1a0:  call   0861b35c <+0x2ea>
0861b217 +0x1a5:  leave
0861b218 +0x1a6:  ret
0861b219 +0x1a7:  nop
0861b21a +0x1a8:  push   %ebp
0861b21b +0x1a9:  mov    %esp,%ebp
0861b21d +0x1ab:  push   %esi
0861b21e +0x1ac:  push   %ebx
0861b21f +0x1ad:  sub    $0x10,%esp
0861b222 +0x1b0:  mov    0x8(%ebp),%eax
0861b225 +0x1b3:  mov    0x8(%eax),%eax
0861b228 +0x1b6:  mov    %eax,%edx
0861b22a +0x1b8:  mov    0x8(%ebp),%eax
0861b22d +0x1bb:  mov    (%eax),%eax
0861b22f +0x1bd:  mov    %edx,%ecx
0861b231 +0x1bf:  sub    %eax,%ecx
0861b233 +0x1c1:  mov    %ecx,%eax
0861b235 +0x1c3:  sar    $0x2,%eax
0861b238 +0x1c6:  imul   $0xaaaaaaab,%eax,%eax
0861b23e +0x1cc:  mov    %eax,%edx
0861b240 +0x1ce:  mov    0x8(%ebp),%eax
0861b243 +0x1d1:  mov    (%eax),%eax
0861b245 +0x1d3:  mov    %edx,0x8(%esp)
0861b249 +0x1d7:  mov    %eax,0x4(%esp)
0861b24d +0x1db:  mov    0x8(%ebp),%eax
0861b250 +0x1de:  mov    %eax,(%esp)
0861b253 +0x1e1:  call   0861b3a0 <+0x32e>
0861b258 +0x1e6:  jmp    0861b275 <+0x203>
0861b25a +0x1e8:  mov    %edx,%ebx
0861b25c +0x1ea:  mov    %eax,%esi
0861b25e +0x1ec:  mov    0x8(%ebp),%eax
0861b261 +0x1ef:  mov    %eax,(%esp)
0861b264 +0x1f2:  call   0861b1f2 <+0x180>
0861b269 +0x1f7:  mov    %esi,%eax
0861b26b +0x1f9:  mov    %ebx,%edx
0861b26d +0x1fb:  mov    %eax,(%esp)
0861b270 +0x1fe:  call   08ae3750 <_Unwind_Resume>
0861b275 +0x203:  mov    0x8(%ebp),%eax
0861b278 +0x206:  mov    %eax,(%esp)
0861b27b +0x209:  call   0861b1f2 <+0x180>
0861b280 +0x20e:  add    $0x10,%esp
0861b283 +0x211:  pop    %ebx
0861b284 +0x212:  pop    %esi
0861b285 +0x213:  pop    %ebp
0861b286 +0x214:  ret
0861b287 +0x215:  nop
0861b288 +0x216:  push   %ebp
0861b289 +0x217:  mov    %esp,%ebp
0861b28b +0x219:  mov    0x8(%ebp),%eax
0861b28e +0x21c:  pop    %ebp
0861b28f +0x21d:  ret
0861b290 +0x21e:  push   %ebp
0861b291 +0x21f:  mov    %esp,%ebp
0861b293 +0x221:  sub    $0x18,%esp
0861b296 +0x224:  mov    0xc(%ebp),%eax
0861b299 +0x227:  mov    %eax,0x4(%esp)
0861b29d +0x22b:  mov    0x8(%ebp),%eax
0861b2a0 +0x22e:  mov    %eax,(%esp)
0861b2a3 +0x231:  call   0861b3c7 <+0x355>
0861b2a8 +0x236:  leave
0861b2a9 +0x237:  ret
0861b2aa +0x238:  push   %ebp
0861b2ab +0x239:  mov    %esp,%ebp
0861b2ad +0x23b:  mov    0x8(%ebp),%eax
0861b2b0 +0x23e:  pop    %ebp
0861b2b1 +0x23f:  ret
0861b2b2 +0x240:  push   %ebp
0861b2b3 +0x241:  mov    %esp,%ebp
0861b2b5 +0x243:  push   %ebx
0861b2b6 +0x244:  sub    $0x24,%esp
0861b2b9 +0x247:  mov    0x8(%ebp),%eax
0861b2bc +0x24a:  mov    0x4(%eax),%edx
0861b2bf +0x24d:  mov    0x8(%ebp),%eax
0861b2c2 +0x250:  mov    0x8(%eax),%eax
0861b2c5 +0x253:  cmp    %eax,%edx
0861b2c7 +0x255:  je     0861b2fe <+0x28c>
0861b2c9 +0x257:  mov    0xc(%ebp),%eax
0861b2cc +0x25a:  mov    %eax,(%esp)
0861b2cf +0x25d:  call   0861b3e1 <+0x36f>
0861b2d4 +0x262:  mov    0x8(%ebp),%edx
0861b2d7 +0x265:  mov    0x4(%edx),%ecx
0861b2da +0x268:  mov    0x8(%ebp),%edx
0861b2dd +0x26b:  mov    %eax,0x8(%esp)
0861b2e1 +0x26f:  mov    %ecx,0x4(%esp)
0861b2e5 +0x273:  mov    %edx,(%esp)
0861b2e8 +0x276:  call   0861b3ea <+0x378>
0861b2ed +0x27b:  mov    0x8(%ebp),%eax
0861b2f0 +0x27e:  mov    0x4(%eax),%eax
0861b2f3 +0x281:  lea    0xc(%eax),%edx
0861b2f6 +0x284:  mov    0x8(%ebp),%eax
0861b2f9 +0x287:  mov    %edx,0x4(%eax)
0861b2fc +0x28a:  jmp    0861b336 <+0x2c4>
0861b2fe +0x28c:  mov    0xc(%ebp),%eax
0861b301 +0x28f:  mov    %eax,(%esp)
0861b304 +0x292:  call   0861b3e1 <+0x36f>
0861b309 +0x297:  mov    %eax,%ebx
0861b30b +0x299:  lea    -0xc(%ebp),%eax
0861b30e +0x29c:  mov    0x8(%ebp),%edx
0861b311 +0x29f:  mov    %edx,0x4(%esp)
0861b315 +0x2a3:  mov    %eax,(%esp)
0861b318 +0x2a6:  call   0861b180 <+0x10e>
0861b31d +0x2ab:  sub    $0x4,%esp
0861b320 +0x2ae:  mov    %ebx,0x8(%esp)
0861b324 +0x2b2:  mov    -0xc(%ebp),%eax
0861b327 +0x2b5:  mov    %eax,0x4(%esp)
0861b32b +0x2b9:  mov    0x8(%ebp),%eax
0861b32e +0x2bc:  mov    %eax,(%esp)
0861b331 +0x2bf:  call   0861b42e <+0x3bc>
0861b336 +0x2c4:  mov    -0x4(%ebp),%ebx
0861b339 +0x2c7:  leave
0861b33a +0x2c8:  ret
0861b33b +0x2c9:  nop
0861b33c +0x2ca:  push   %ebp
0861b33d +0x2cb:  mov    %esp,%ebp
0861b33f +0x2cd:  mov    0xc(%ebp),%eax
0861b342 +0x2d0:  mov    (%eax),%edx
0861b344 +0x2d2:  mov    0x8(%ebp),%eax
0861b347 +0x2d5:  mov    %edx,(%eax)
0861b349 +0x2d7:  pop    %ebp
0861b34a +0x2d8:  ret
0861b34b +0x2d9:  nop
0861b34c +0x2da:  push   %ebp
0861b34d +0x2db:  mov    %esp,%ebp
0861b34f +0x2dd:  mov    0x8(%ebp),%eax
0861b352 +0x2e0:  pop    %ebp
0861b353 +0x2e1:  ret
0861b354 +0x2e2:  push   %ebp
0861b355 +0x2e3:  mov    %esp,%ebp
0861b357 +0x2e5:  mov    0x8(%ebp),%eax
0861b35a +0x2e8:  pop    %ebp
0861b35b +0x2e9:  ret
0861b35c +0x2ea:  push   %ebp
0861b35d +0x2eb:  mov    %esp,%ebp
0861b35f +0x2ed:  sub    $0x18,%esp
0861b362 +0x2f0:  mov    0x8(%ebp),%eax
0861b365 +0x2f3:  mov    %eax,(%esp)
0861b368 +0x2f6:  call   0861b708 <+0x696>
0861b36d +0x2fb:  mov    0x8(%ebp),%eax
0861b370 +0x2fe:  movl   $0x0,(%eax)
0861b376 +0x304:  mov    0x8(%ebp),%eax
0861b379 +0x307:  movl   $0x0,0x4(%eax)
0861b380 +0x30e:  mov    0x8(%ebp),%eax
0861b383 +0x311:  movl   $0x0,0x8(%eax)
0861b38a +0x318:  leave
0861b38b +0x319:  ret
0861b38c +0x31a:  push   %ebp
0861b38d +0x31b:  mov    %esp,%ebp
0861b38f +0x31d:  sub    $0x18,%esp
0861b392 +0x320:  mov    0x8(%ebp),%eax
0861b395 +0x323:  mov    %eax,(%esp)
0861b398 +0x326:  call   0861b71c <+0x6aa>
0861b39d +0x32b:  leave
0861b39e +0x32c:  ret
0861b39f +0x32d:  nop
0861b3a0 +0x32e:  push   %ebp
0861b3a1 +0x32f:  mov    %esp,%ebp
0861b3a3 +0x331:  sub    $0x18,%esp
0861b3a6 +0x334:  cmpl   $0x0,0xc(%ebp)
0861b3aa +0x338:  je     0861b3c5 <+0x353>
0861b3ac +0x33a:  mov    0x8(%ebp),%eax
0861b3af +0x33d:  mov    0x10(%ebp),%edx
0861b3b2 +0x340:  mov    %edx,0x8(%esp)
0861b3b6 +0x344:  mov    0xc(%ebp),%edx
0861b3b9 +0x347:  mov    %edx,0x4(%esp)
0861b3bd +0x34b:  mov    %eax,(%esp)
0861b3c0 +0x34e:  call   0861b722 <+0x6b0>
0861b3c5 +0x353:  leave
0861b3c6 +0x354:  ret
0861b3c7 +0x355:  push   %ebp
0861b3c8 +0x356:  mov    %esp,%ebp
0861b3ca +0x358:  sub    $0x18,%esp
0861b3cd +0x35b:  mov    0xc(%ebp),%eax
0861b3d0 +0x35e:  mov    %eax,0x4(%esp)
0861b3d4 +0x362:  mov    0x8(%ebp),%eax
0861b3d7 +0x365:  mov    %eax,(%esp)
0861b3da +0x368:  call   0861b735 <+0x6c3>
0861b3df +0x36d:  leave
0861b3e0 +0x36e:  ret
0861b3e1 +0x36f:  push   %ebp
0861b3e2 +0x370:  mov    %esp,%ebp
0861b3e4 +0x372:  mov    0x8(%ebp),%eax
0861b3e7 +0x375:  pop    %ebp
0861b3e8 +0x376:  ret
0861b3e9 +0x377:  nop
0861b3ea +0x378:  push   %ebp
0861b3eb +0x379:  mov    %esp,%ebp
0861b3ed +0x37b:  push   %ebx
0861b3ee +0x37c:  sub    $0x14,%esp
0861b3f1 +0x37f:  mov    0x10(%ebp),%eax
0861b3f4 +0x382:  mov    %eax,(%esp)
0861b3f7 +0x385:  call   0861b3e1 <+0x36f>
0861b3fc +0x38a:  mov    %eax,%ebx
0861b3fe +0x38c:  mov    0xc(%ebp),%eax
0861b401 +0x38f:  mov    %eax,0x4(%esp)
0861b405 +0x393:  movl   $0xc,(%esp)
0861b40c +0x39a:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0861b411 +0x39f:  mov    %eax,%edx
0861b413 +0x3a1:  test   %edx,%edx
0861b415 +0x3a3:  je     0861b427 <+0x3b5>
0861b417 +0x3a5:  mov    (%ebx),%edx
0861b419 +0x3a7:  mov    %edx,(%eax)
0861b41b +0x3a9:  mov    0x4(%ebx),%edx
0861b41e +0x3ac:  mov    %edx,0x4(%eax)
0861b421 +0x3af:  mov    0x8(%ebx),%edx
0861b424 +0x3b2:  mov    %edx,0x8(%eax)
0861b427 +0x3b5:  add    $0x14,%esp
0861b42a +0x3b8:  pop    %ebx
0861b42b +0x3b9:  pop    %ebp
0861b42c +0x3ba:  ret
0861b42d +0x3bb:  nop
0861b42e +0x3bc:  push   %ebp
0861b42f +0x3bd:  mov    %esp,%ebp
0861b431 +0x3bf:  push   %esi
0861b432 +0x3c0:  push   %ebx
0861b433 +0x3c1:  sub    $0x30,%esp
0861b436 +0x3c4:  mov    0x8(%ebp),%eax
0861b439 +0x3c7:  mov    0x4(%eax),%edx
0861b43c +0x3ca:  mov    0x8(%ebp),%eax
0861b43f +0x3cd:  mov    0x8(%eax),%eax
0861b442 +0x3d0:  cmp    %eax,%edx
0861b444 +0x3d2:  je     0861b4df <+0x46d>
0861b44a +0x3d8:  mov    0x8(%ebp),%eax
0861b44d +0x3db:  mov    0x4(%eax),%eax
0861b450 +0x3de:  sub    $0xc,%eax
0861b453 +0x3e1:  mov    %eax,(%esp)
0861b456 +0x3e4:  call   0861b2aa <+0x238>
0861b45b +0x3e9:  mov    0x8(%ebp),%edx
0861b45e +0x3ec:  mov    0x4(%edx),%ecx
0861b461 +0x3ef:  mov    0x8(%ebp),%edx
0861b464 +0x3f2:  mov    %eax,0x8(%esp)
0861b468 +0x3f6:  mov    %ecx,0x4(%esp)
0861b46c +0x3fa:  mov    %edx,(%esp)
0861b46f +0x3fd:  call   0861b3ea <+0x378>
0861b474 +0x402:  mov    0x8(%ebp),%eax
0861b477 +0x405:  mov    0x4(%eax),%eax
0861b47a +0x408:  lea    0xc(%eax),%edx
0861b47d +0x40b:  mov    0x8(%ebp),%eax
0861b480 +0x40e:  mov    %edx,0x4(%eax)
0861b483 +0x411:  mov    0x8(%ebp),%eax
0861b486 +0x414:  mov    0x4(%eax),%eax
0861b489 +0x417:  lea    -0xc(%eax),%esi
0861b48c +0x41a:  mov    0x8(%ebp),%eax
0861b48f +0x41d:  mov    0x4(%eax),%eax
0861b492 +0x420:  lea    -0x18(%eax),%ebx
0861b495 +0x423:  lea    0xc(%ebp),%eax
0861b498 +0x426:  mov    %eax,(%esp)
0861b49b +0x429:  call   0861b34c <+0x2da>
0861b4a0 +0x42e:  mov    (%eax),%eax
0861b4a2 +0x430:  mov    %esi,0x8(%esp)
0861b4a6 +0x434:  mov    %ebx,0x4(%esp)
0861b4aa +0x438:  mov    %eax,(%esp)
0861b4ad +0x43b:  call   0861b73a <+0x6c8>
0861b4b2 +0x440:  lea    0xc(%ebp),%eax
0861b4b5 +0x443:  mov    %eax,(%esp)
0861b4b8 +0x446:  call   0861b772 <+0x700>
0861b4bd +0x44b:  mov    %eax,%ebx
0861b4bf +0x44d:  mov    0x10(%ebp),%eax
0861b4c2 +0x450:  mov    %eax,(%esp)
0861b4c5 +0x453:  call   0861b3e1 <+0x36f>
0861b4ca +0x458:  mov    (%eax),%edx
0861b4cc +0x45a:  mov    %edx,(%ebx)
0861b4ce +0x45c:  mov    0x4(%eax),%edx
0861b4d1 +0x45f:  mov    %edx,0x4(%ebx)
0861b4d4 +0x462:  mov    0x8(%eax),%eax
0861b4d7 +0x465:  mov    %eax,0x8(%ebx)
0861b4da +0x468:  jmp    0861b6fe <+0x68c>
0861b4df +0x46d:  movl   $"vector::_M_insert_aux",0x8(%esp)
0861b4e7 +0x475:  movl   $0x1,0x4(%esp)
0861b4ef +0x47d:  mov    0x8(%ebp),%eax
0861b4f2 +0x480:  mov    %eax,(%esp)
0861b4f5 +0x483:  call   0861b77c <+0x70a>
0861b4fa +0x488:  mov    %eax,-0x18(%ebp)
0861b4fd +0x48b:  lea    -0x1c(%ebp),%eax
0861b500 +0x48e:  mov    0x8(%ebp),%edx
0861b503 +0x491:  mov    %edx,0x4(%esp)
0861b507 +0x495:  mov    %eax,(%esp)
0861b50a +0x498:  call   0861b142 <+0xd0>
0861b50f +0x49d:  sub    $0x4,%esp
0861b512 +0x4a0:  lea    -0x1c(%ebp),%eax
0861b515 +0x4a3:  mov    %eax,0x4(%esp)
0861b519 +0x4a7:  lea    0xc(%ebp),%eax
0861b51c +0x4aa:  mov    %eax,(%esp)
0861b51f +0x4ad:  call   0861b821 <+0x7af>
0861b524 +0x4b2:  mov    %eax,-0x14(%ebp)
0861b527 +0x4b5:  mov    0x8(%ebp),%eax
0861b52a +0x4b8:  mov    -0x18(%ebp),%edx
0861b52d +0x4bb:  mov    %edx,0x4(%esp)
0861b531 +0x4bf:  mov    %eax,(%esp)
0861b534 +0x4c2:  call   0861b85a <+0x7e8>
0861b539 +0x4c7:  mov    %eax,-0x10(%ebp)
0861b53c +0x4ca:  mov    -0x10(%ebp),%eax
0861b53f +0x4cd:  mov    %eax,-0xc(%ebp)
0861b542 +0x4d0:  mov    0x10(%ebp),%eax
0861b545 +0x4d3:  mov    %eax,(%esp)
0861b548 +0x4d6:  call   0861b3e1 <+0x36f>
0861b54d +0x4db:  mov    %eax,%ecx
0861b54f +0x4dd:  mov    -0x14(%ebp),%edx
0861b552 +0x4e0:  mov    %edx,%eax
0861b554 +0x4e2:  add    %eax,%eax
0861b556 +0x4e4:  add    %edx,%eax
0861b558 +0x4e6:  shl    $0x2,%eax
0861b55b +0x4e9:  mov    %eax,%edx
0861b55d +0x4eb:  add    -0x10(%ebp),%edx
0861b560 +0x4ee:  mov    0x8(%ebp),%eax
0861b563 +0x4f1:  mov    %ecx,0x8(%esp)
0861b567 +0x4f5:  mov    %edx,0x4(%esp)
0861b56b +0x4f9:  mov    %eax,(%esp)
0861b56e +0x4fc:  call   0861b3ea <+0x378>
0861b573 +0x501:  movl   $0x0,-0xc(%ebp)
0861b57a +0x508:  mov    0x8(%ebp),%eax
0861b57d +0x50b:  mov    %eax,(%esp)
0861b580 +0x50e:  call   0861b288 <+0x216>
0861b585 +0x513:  mov    %eax,%ebx
0861b587 +0x515:  lea    0xc(%ebp),%eax
0861b58a +0x518:  mov    %eax,(%esp)
0861b58d +0x51b:  call   0861b34c <+0x2da>
0861b592 +0x520:  mov    (%eax),%edx
0861b594 +0x522:  mov    0x8(%ebp),%eax
0861b597 +0x525:  mov    (%eax),%eax
0861b599 +0x527:  mov    %ebx,0xc(%esp)
0861b59d +0x52b:  mov    -0x10(%ebp),%ecx
0861b5a0 +0x52e:  mov    %ecx,0x8(%esp)
0861b5a4 +0x532:  mov    %edx,0x4(%esp)
0861b5a8 +0x536:  mov    %eax,(%esp)
0861b5ab +0x539:  call   0861b889 <+0x817>
0861b5b0 +0x53e:  mov    %eax,-0xc(%ebp)
0861b5b3 +0x541:  addl   $0xc,-0xc(%ebp)
0861b5b7 +0x545:  mov    0x8(%ebp),%eax
0861b5ba +0x548:  mov    %eax,(%esp)
0861b5bd +0x54b:  call   0861b288 <+0x216>
0861b5c2 +0x550:  mov    %eax,%ebx
0861b5c4 +0x552:  mov    0x8(%ebp),%eax
0861b5c7 +0x555:  mov    0x4(%eax),%esi
0861b5ca +0x558:  lea    0xc(%ebp),%eax
0861b5cd +0x55b:  mov    %eax,(%esp)
0861b5d0 +0x55e:  call   0861b34c <+0x2da>
0861b5d5 +0x563:  mov    (%eax),%eax
0861b5d7 +0x565:  mov    %ebx,0xc(%esp)
0861b5db +0x569:  mov    -0xc(%ebp),%edx
0861b5de +0x56c:  mov    %edx,0x8(%esp)
0861b5e2 +0x570:  mov    %esi,0x4(%esp)
0861b5e6 +0x574:  mov    %eax,(%esp)
0861b5e9 +0x577:  call   0861b889 <+0x817>
0861b5ee +0x57c:  mov    %eax,-0xc(%ebp)
0861b5f1 +0x57f:  mov    0x8(%ebp),%eax
0861b5f4 +0x582:  mov    %eax,(%esp)
0861b5f7 +0x585:  call   0861b288 <+0x216>
0861b5fc +0x58a:  mov    0x8(%ebp),%edx
0861b5ff +0x58d:  mov    0x4(%edx),%ecx
0861b602 +0x590:  mov    0x8(%ebp),%edx
0861b605 +0x593:  mov    (%edx),%edx
0861b607 +0x595:  mov    %eax,0x8(%esp)
0861b60b +0x599:  mov    %ecx,0x4(%esp)
0861b60f +0x59d:  mov    %edx,(%esp)
0861b612 +0x5a0:  call   0861b290 <+0x21e>
0861b617 +0x5a5:  mov    0x8(%ebp),%eax
0861b61a +0x5a8:  mov    0x8(%eax),%eax
0861b61d +0x5ab:  mov    %eax,%edx
0861b61f +0x5ad:  mov    0x8(%ebp),%eax
0861b622 +0x5b0:  mov    (%eax),%eax
0861b624 +0x5b2:  mov    %edx,%ecx
0861b626 +0x5b4:  sub    %eax,%ecx
0861b628 +0x5b6:  mov    %ecx,%eax
0861b62a +0x5b8:  sar    $0x2,%eax
0861b62d +0x5bb:  imul   $0xaaaaaaab,%eax,%eax
0861b633 +0x5c1:  mov    %eax,%ecx
0861b635 +0x5c3:  mov    0x8(%ebp),%eax
0861b638 +0x5c6:  mov    (%eax),%edx
0861b63a +0x5c8:  mov    0x8(%ebp),%eax
0861b63d +0x5cb:  mov    %ecx,0x8(%esp)
0861b641 +0x5cf:  mov    %edx,0x4(%esp)
0861b645 +0x5d3:  mov    %eax,(%esp)
0861b648 +0x5d6:  call   0861b3a0 <+0x32e>
0861b64d +0x5db:  mov    0x8(%ebp),%eax
0861b650 +0x5de:  mov    -0x10(%ebp),%edx
0861b653 +0x5e1:  mov    %edx,(%eax)
0861b655 +0x5e3:  mov    0x8(%ebp),%eax
0861b658 +0x5e6:  mov    -0xc(%ebp),%edx
0861b65b +0x5e9:  mov    %edx,0x4(%eax)
0861b65e +0x5ec:  mov    -0x18(%ebp),%edx
0861b661 +0x5ef:  mov    %edx,%eax
0861b663 +0x5f1:  add    %eax,%eax
0861b665 +0x5f3:  add    %edx,%eax
0861b667 +0x5f5:  shl    $0x2,%eax
0861b66a +0x5f8:  mov    %eax,%edx
0861b66c +0x5fa:  add    -0x10(%ebp),%edx
0861b66f +0x5fd:  mov    0x8(%ebp),%eax
0861b672 +0x600:  mov    %edx,0x8(%eax)
0861b675 +0x603:  jmp    0861b6fe <+0x68c>
0861b67a +0x608:  mov    %eax,(%esp)
0861b67d +0x60b:  call   08725ce0 <__cxa_begin_catch>
0861b682 +0x610:  cmpl   $0x0,-0xc(%ebp)
0861b686 +0x614:  jne    0861b6aa <+0x638>
0861b688 +0x616:  mov    -0x14(%ebp),%edx
0861b68b +0x619:  mov    %edx,%eax
0861b68d +0x61b:  add    %eax,%eax
0861b68f +0x61d:  add    %edx,%eax
0861b691 +0x61f:  shl    $0x2,%eax
0861b694 +0x622:  mov    %eax,%edx
0861b696 +0x624:  add    -0x10(%ebp),%edx
0861b699 +0x627:  mov    0x8(%ebp),%eax
0861b69c +0x62a:  mov    %edx,0x4(%esp)
0861b6a0 +0x62e:  mov    %eax,(%esp)
0861b6a3 +0x631:  call   0861b8e2 <+0x870>
0861b6a8 +0x636:  jmp    0861b6cb <+0x659>
0861b6aa +0x638:  mov    0x8(%ebp),%eax
0861b6ad +0x63b:  mov    %eax,(%esp)
0861b6b0 +0x63e:  call   0861b288 <+0x216>
0861b6b5 +0x643:  mov    %eax,0x8(%esp)
0861b6b9 +0x647:  mov    -0xc(%ebp),%eax
0861b6bc +0x64a:  mov    %eax,0x4(%esp)
0861b6c0 +0x64e:  mov    -0x10(%ebp),%eax
0861b6c3 +0x651:  mov    %eax,(%esp)
0861b6c6 +0x654:  call   0861b290 <+0x21e>
0861b6cb +0x659:  mov    0x8(%ebp),%eax
0861b6ce +0x65c:  mov    -0x18(%ebp),%edx
0861b6d1 +0x65f:  mov    %edx,0x8(%esp)
0861b6d5 +0x663:  mov    -0x10(%ebp),%edx
0861b6d8 +0x666:  mov    %edx,0x4(%esp)
0861b6dc +0x66a:  mov    %eax,(%esp)
0861b6df +0x66d:  call   0861b3a0 <+0x32e>
0861b6e4 +0x672:  call   08724be0 <__cxa_rethrow>
0861b6e9 +0x677:  mov    %edx,%ebx
0861b6eb +0x679:  mov    %eax,%esi
0861b6ed +0x67b:  call   08725c30 <__cxa_end_catch>
0861b6f2 +0x680:  mov    %esi,%eax
0861b6f4 +0x682:  mov    %ebx,%edx
0861b6f6 +0x684:  mov    %eax,(%esp)
0861b6f9 +0x687:  call   08ae3750 <_Unwind_Resume>
0861b6fe +0x68c:  lea    -0x8(%ebp),%esp
0861b701 +0x68f:  add    $0x0,%esp
0861b704 +0x692:  pop    %ebx
0861b705 +0x693:  pop    %esi
0861b706 +0x694:  pop    %ebp
0861b707 +0x695:  ret
0861b708 +0x696:  push   %ebp
0861b709 +0x697:  mov    %esp,%ebp
0861b70b +0x699:  sub    $0x18,%esp
0861b70e +0x69c:  mov    0x8(%ebp),%eax
0861b711 +0x69f:  mov    %eax,(%esp)
0861b714 +0x6a2:  call   0861b8f6 <+0x884>
0861b719 +0x6a7:  leave
0861b71a +0x6a8:  ret
0861b71b +0x6a9:  nop
0861b71c +0x6aa:  push   %ebp
0861b71d +0x6ab:  mov    %esp,%ebp
0861b71f +0x6ad:  pop    %ebp
0861b720 +0x6ae:  ret
0861b721 +0x6af:  nop
0861b722 +0x6b0:  push   %ebp
0861b723 +0x6b1:  mov    %esp,%ebp
0861b725 +0x6b3:  sub    $0x18,%esp
0861b728 +0x6b6:  mov    0xc(%ebp),%eax
0861b72b +0x6b9:  mov    %eax,(%esp)
0861b72e +0x6bc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0861b733 +0x6c1:  leave
0861b734 +0x6c2:  ret
0861b735 +0x6c3:  push   %ebp
0861b736 +0x6c4:  mov    %esp,%ebp
0861b738 +0x6c6:  pop    %ebp
0861b739 +0x6c7:  ret
0861b73a +0x6c8:  push   %ebp
0861b73b +0x6c9:  mov    %esp,%ebp
0861b73d +0x6cb:  push   %ebx
0861b73e +0x6cc:  sub    $0x14,%esp
0861b741 +0x6cf:  mov    0xc(%ebp),%eax
0861b744 +0x6d2:  mov    %eax,(%esp)
0861b747 +0x6d5:  call   0861b8fb <+0x889>
0861b74c +0x6da:  mov    %eax,%ebx
0861b74e +0x6dc:  mov    0x8(%ebp),%eax
0861b751 +0x6df:  mov    %eax,(%esp)
0861b754 +0x6e2:  call   0861b8fb <+0x889>
0861b759 +0x6e7:  mov    0x10(%ebp),%edx
0861b75c +0x6ea:  mov    %edx,0x8(%esp)
0861b760 +0x6ee:  mov    %ebx,0x4(%esp)
0861b764 +0x6f2:  mov    %eax,(%esp)
0861b767 +0x6f5:  call   0861b903 <+0x891>
0861b76c +0x6fa:  add    $0x14,%esp
0861b76f +0x6fd:  pop    %ebx
0861b770 +0x6fe:  pop    %ebp
0861b771 +0x6ff:  ret
0861b772 +0x700:  push   %ebp
0861b773 +0x701:  mov    %esp,%ebp
0861b775 +0x703:  mov    0x8(%ebp),%eax
0861b778 +0x706:  mov    (%eax),%eax
0861b77a +0x708:  pop    %ebp
0861b77b +0x709:  ret
0861b77c +0x70a:  push   %ebp
0861b77d +0x70b:  mov    %esp,%ebp
0861b77f +0x70d:  push   %ebx
0861b780 +0x70e:  sub    $0x24,%esp
0861b783 +0x711:  mov    0x8(%ebp),%eax
0861b786 +0x714:  mov    %eax,(%esp)
0861b789 +0x717:  call   0861b96a <+0x8f8>
0861b78e +0x71c:  mov    %eax,%ebx
0861b790 +0x71e:  mov    0x8(%ebp),%eax
0861b793 +0x721:  mov    %eax,(%esp)
0861b796 +0x724:  call   0861b948 <+0x8d6>
0861b79b +0x729:  mov    %ebx,%edx
0861b79d +0x72b:  sub    %eax,%edx
0861b79f +0x72d:  mov    0xc(%ebp),%eax
0861b7a2 +0x730:  cmp    %eax,%edx
0861b7a4 +0x732:  setb   %al
0861b7a7 +0x735:  test   %al,%al
0861b7a9 +0x737:  je     0861b7b6 <+0x744>
0861b7ab +0x739:  mov    0x10(%ebp),%eax
0861b7ae +0x73c:  mov    %eax,(%esp)
0861b7b1 +0x73f:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0861b7b6 +0x744:  mov    0x8(%ebp),%eax
0861b7b9 +0x747:  mov    %eax,(%esp)
0861b7bc +0x74a:  call   0861b948 <+0x8d6>
0861b7c1 +0x74f:  mov    %eax,%ebx
0861b7c3 +0x751:  mov    0x8(%ebp),%eax
0861b7c6 +0x754:  mov    %eax,(%esp)
0861b7c9 +0x757:  call   0861b948 <+0x8d6>
0861b7ce +0x75c:  mov    %eax,-0x10(%ebp)
0861b7d1 +0x75f:  lea    0xc(%ebp),%eax
0861b7d4 +0x762:  mov    %eax,0x4(%esp)
0861b7d8 +0x766:  lea    -0x10(%ebp),%eax
0861b7db +0x769:  mov    %eax,(%esp)
0861b7de +0x76c:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0861b7e3 +0x771:  mov    (%eax),%eax
0861b7e5 +0x773:  lea    (%ebx,%eax,1),%eax
0861b7e8 +0x776:  mov    %eax,-0xc(%ebp)
0861b7eb +0x779:  mov    0x8(%ebp),%eax
0861b7ee +0x77c:  mov    %eax,(%esp)
0861b7f1 +0x77f:  call   0861b948 <+0x8d6>
0861b7f6 +0x784:  cmp    -0xc(%ebp),%eax
0861b7f9 +0x787:  ja     0861b80b <+0x799>
0861b7fb +0x789:  mov    0x8(%ebp),%eax
0861b7fe +0x78c:  mov    %eax,(%esp)
0861b801 +0x78f:  call   0861b96a <+0x8f8>
0861b806 +0x794:  cmp    -0xc(%ebp),%eax
0861b809 +0x797:  jae    0861b818 <+0x7a6>
0861b80b +0x799:  mov    0x8(%ebp),%eax
0861b80e +0x79c:  mov    %eax,(%esp)
0861b811 +0x79f:  call   0861b96a <+0x8f8>
0861b816 +0x7a4:  jmp    0861b81b <+0x7a9>
0861b818 +0x7a6:  mov    -0xc(%ebp),%eax
0861b81b +0x7a9:  add    $0x24,%esp
0861b81e +0x7ac:  pop    %ebx
0861b81f +0x7ad:  pop    %ebp
0861b820 +0x7ae:  ret
0861b821 +0x7af:  push   %ebp
0861b822 +0x7b0:  mov    %esp,%ebp
0861b824 +0x7b2:  push   %ebx
0861b825 +0x7b3:  sub    $0x14,%esp
0861b828 +0x7b6:  mov    0x8(%ebp),%eax
0861b82b +0x7b9:  mov    %eax,(%esp)
0861b82e +0x7bc:  call   0861b34c <+0x2da>
0861b833 +0x7c1:  mov    (%eax),%eax
0861b835 +0x7c3:  mov    %eax,%ebx
0861b837 +0x7c5:  mov    0xc(%ebp),%eax
0861b83a +0x7c8:  mov    %eax,(%esp)
0861b83d +0x7cb:  call   0861b34c <+0x2da>
0861b842 +0x7d0:  mov    (%eax),%eax
0861b844 +0x7d2:  mov    %ebx,%edx
0861b846 +0x7d4:  sub    %eax,%edx
0861b848 +0x7d6:  mov    %edx,%eax
0861b84a +0x7d8:  sar    $0x2,%eax
0861b84d +0x7db:  imul   $0xaaaaaaab,%eax,%eax
0861b853 +0x7e1:  add    $0x14,%esp
0861b856 +0x7e4:  pop    %ebx
0861b857 +0x7e5:  pop    %ebp
0861b858 +0x7e6:  ret
0861b859 +0x7e7:  nop
0861b85a +0x7e8:  push   %ebp
0861b85b +0x7e9:  mov    %esp,%ebp
0861b85d +0x7eb:  sub    $0x18,%esp
0861b860 +0x7ee:  cmpl   $0x0,0xc(%ebp)
0861b864 +0x7f2:  je     0861b882 <+0x810>
0861b866 +0x7f4:  mov    0x8(%ebp),%eax
0861b869 +0x7f7:  movl   $0x0,0x8(%esp)
0861b871 +0x7ff:  mov    0xc(%ebp),%edx
0861b874 +0x802:  mov    %edx,0x4(%esp)
0861b878 +0x806:  mov    %eax,(%esp)
0861b87b +0x809:  call   0861b986 <+0x914>
0861b880 +0x80e:  jmp    0861b887 <+0x815>
0861b882 +0x810:  mov    $0x0,%eax
0861b887 +0x815:  leave
0861b888 +0x816:  ret
0861b889 +0x817:  push   %ebp
0861b88a +0x818:  mov    %esp,%ebp
0861b88c +0x81a:  sub    $0x28,%esp
0861b88f +0x81d:  lea    -0x10(%ebp),%eax
0861b892 +0x820:  lea    0xc(%ebp),%edx
0861b895 +0x823:  mov    %edx,0x4(%esp)
0861b899 +0x827:  mov    %eax,(%esp)
0861b89c +0x82a:  call   0861b9c4 <+0x952>
0861b8a1 +0x82f:  sub    $0x4,%esp
0861b8a4 +0x832:  lea    -0xc(%ebp),%eax
0861b8a7 +0x835:  lea    0x8(%ebp),%edx
0861b8aa +0x838:  mov    %edx,0x4(%esp)
0861b8ae +0x83c:  mov    %eax,(%esp)
0861b8b1 +0x83f:  call   0861b9c4 <+0x952>
0861b8b6 +0x844:  sub    $0x4,%esp
0861b8b9 +0x847:  mov    0x14(%ebp),%eax
0861b8bc +0x84a:  mov    %eax,0xc(%esp)
0861b8c0 +0x84e:  mov    0x10(%ebp),%eax
0861b8c3 +0x851:  mov    %eax,0x8(%esp)
0861b8c7 +0x855:  mov    -0x10(%ebp),%eax
0861b8ca +0x858:  mov    %eax,0x4(%esp)
0861b8ce +0x85c:  mov    -0xc(%ebp),%eax
0861b8d1 +0x85f:  mov    %eax,(%esp)
0861b8d4 +0x862:  call   0861b9e9 <+0x977>
0861b8d9 +0x867:  leave
0861b8da +0x868:  ret
0861b8db +0x869:  nop
0861b8dc +0x86a:  push   %ebp
0861b8dd +0x86b:  mov    %esp,%ebp
0861b8df +0x86d:  pop    %ebp
0861b8e0 +0x86e:  ret
0861b8e1 +0x86f:  nop
0861b8e2 +0x870:  push   %ebp
0861b8e3 +0x871:  mov    %esp,%ebp
0861b8e5 +0x873:  sub    $0x18,%esp
0861b8e8 +0x876:  mov    0xc(%ebp),%eax
0861b8eb +0x879:  mov    %eax,(%esp)
0861b8ee +0x87c:  call   0861b8dc <+0x86a>
0861b8f3 +0x881:  leave
0861b8f4 +0x882:  ret
0861b8f5 +0x883:  nop
0861b8f6 +0x884:  push   %ebp
0861b8f7 +0x885:  mov    %esp,%ebp
0861b8f9 +0x887:  pop    %ebp
0861b8fa +0x888:  ret
0861b8fb +0x889:  push   %ebp
0861b8fc +0x88a:  mov    %esp,%ebp
0861b8fe +0x88c:  mov    0x8(%ebp),%eax
0861b901 +0x88f:  pop    %ebp
0861b902 +0x890:  ret
0861b903 +0x891:  push   %ebp
0861b904 +0x892:  mov    %esp,%ebp
0861b906 +0x894:  push   %esi
0861b907 +0x895:  push   %ebx
0861b908 +0x896:  sub    $0x10,%esp
0861b90b +0x899:  mov    0x10(%ebp),%eax
0861b90e +0x89c:  mov    %eax,(%esp)
0861b911 +0x89f:  call   0861ba0a <+0x998>
0861b916 +0x8a4:  mov    %eax,%esi
0861b918 +0x8a6:  mov    0xc(%ebp),%eax
0861b91b +0x8a9:  mov    %eax,(%esp)
0861b91e +0x8ac:  call   0861ba0a <+0x998>
0861b923 +0x8b1:  mov    %eax,%ebx
0861b925 +0x8b3:  mov    0x8(%ebp),%eax
0861b928 +0x8b6:  mov    %eax,(%esp)
0861b92b +0x8b9:  call   0861ba0a <+0x998>
0861b930 +0x8be:  mov    %esi,0x8(%esp)
0861b934 +0x8c2:  mov    %ebx,0x4(%esp)
0861b938 +0x8c6:  mov    %eax,(%esp)
0861b93b +0x8c9:  call   0861ba12 <+0x9a0>
0861b940 +0x8ce:  add    $0x10,%esp
0861b943 +0x8d1:  pop    %ebx
0861b944 +0x8d2:  pop    %esi
0861b945 +0x8d3:  pop    %ebp
0861b946 +0x8d4:  ret
0861b947 +0x8d5:  nop
0861b948 +0x8d6:  push   %ebp
0861b949 +0x8d7:  mov    %esp,%ebp
0861b94b +0x8d9:  mov    0x8(%ebp),%eax
0861b94e +0x8dc:  mov    0x4(%eax),%eax
0861b951 +0x8df:  mov    %eax,%edx
0861b953 +0x8e1:  mov    0x8(%ebp),%eax
0861b956 +0x8e4:  mov    (%eax),%eax
0861b958 +0x8e6:  mov    %edx,%ecx
0861b95a +0x8e8:  sub    %eax,%ecx
0861b95c +0x8ea:  mov    %ecx,%eax
0861b95e +0x8ec:  sar    $0x2,%eax
0861b961 +0x8ef:  imul   $0xaaaaaaab,%eax,%eax
0861b967 +0x8f5:  pop    %ebp
0861b968 +0x8f6:  ret
0861b969 +0x8f7:  nop
0861b96a +0x8f8:  push   %ebp
0861b96b +0x8f9:  mov    %esp,%ebp
0861b96d +0x8fb:  sub    $0x18,%esp
0861b970 +0x8fe:  mov    0x8(%ebp),%eax
0861b973 +0x901:  mov    %eax,(%esp)
0861b976 +0x904:  call   0861ba38 <+0x9c6>
0861b97b +0x909:  mov    %eax,(%esp)
0861b97e +0x90c:  call   0861ba40 <+0x9ce>
0861b983 +0x911:  leave
0861b984 +0x912:  ret
0861b985 +0x913:  nop
0861b986 +0x914:  push   %ebp
0861b987 +0x915:  mov    %esp,%ebp
0861b989 +0x917:  sub    $0x18,%esp
0861b98c +0x91a:  mov    0x8(%ebp),%eax
0861b98f +0x91d:  mov    %eax,(%esp)
0861b992 +0x920:  call   0861ba40 <+0x9ce>
0861b997 +0x925:  cmp    0xc(%ebp),%eax
0861b99a +0x928:  setb   %al
0861b99d +0x92b:  movzbl %al,%eax
0861b9a0 +0x92e:  test   %eax,%eax
0861b9a2 +0x930:  setne  %al
0861b9a5 +0x933:  test   %al,%al
0861b9a7 +0x935:  je     0861b9ae <+0x93c>
0861b9a9 +0x937:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0861b9ae +0x93c:  mov    0xc(%ebp),%edx
0861b9b1 +0x93f:  mov    %edx,%eax
0861b9b3 +0x941:  add    %eax,%eax
0861b9b5 +0x943:  add    %edx,%eax
0861b9b7 +0x945:  shl    $0x2,%eax
0861b9ba +0x948:  mov    %eax,(%esp)
0861b9bd +0x94b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0861b9c2 +0x950:  leave
0861b9c3 +0x951:  ret
0861b9c4 +0x952:  push   %ebp
0861b9c5 +0x953:  mov    %esp,%ebp
0861b9c7 +0x955:  push   %ebx
0861b9c8 +0x956:  sub    $0x14,%esp
0861b9cb +0x959:  mov    0x8(%ebp),%ebx
0861b9ce +0x95c:  mov    0xc(%ebp),%eax
0861b9d1 +0x95f:  mov    (%eax),%eax
0861b9d3 +0x961:  mov    %eax,0x4(%esp)
0861b9d7 +0x965:  mov    %ebx,(%esp)
0861b9da +0x968:  call   0861ba4a <+0x9d8>
0861b9df +0x96d:  mov    %ebx,%eax
0861b9e1 +0x96f:  add    $0x14,%esp
0861b9e4 +0x972:  pop    %ebx
0861b9e5 +0x973:  pop    %ebp
0861b9e6 +0x974:  ret    $0x4
0861b9e9 +0x977:  push   %ebp
0861b9ea +0x978:  mov    %esp,%ebp
0861b9ec +0x97a:  sub    $0x18,%esp
0861b9ef +0x97d:  mov    0x10(%ebp),%eax
0861b9f2 +0x980:  mov    %eax,0x8(%esp)
0861b9f6 +0x984:  mov    0xc(%ebp),%eax
0861b9f9 +0x987:  mov    %eax,0x4(%esp)
0861b9fd +0x98b:  mov    0x8(%ebp),%eax
0861ba00 +0x98e:  mov    %eax,(%esp)
0861ba03 +0x991:  call   0861ba57 <+0x9e5>
0861ba08 +0x996:  leave
0861ba09 +0x997:  ret
0861ba0a +0x998:  push   %ebp
0861ba0b +0x999:  mov    %esp,%ebp
0861ba0d +0x99b:  mov    0x8(%ebp),%eax
0861ba10 +0x99e:  pop    %ebp
0861ba11 +0x99f:  ret
0861ba12 +0x9a0:  push   %ebp
0861ba13 +0x9a1:  mov    %esp,%ebp
0861ba15 +0x9a3:  sub    $0x28,%esp
0861ba18 +0x9a6:  movb   $0x0,-0x9(%ebp)
0861ba1c +0x9aa:  mov    0x10(%ebp),%eax
0861ba1f +0x9ad:  mov    %eax,0x8(%esp)
0861ba23 +0x9b1:  mov    0xc(%ebp),%eax
0861ba26 +0x9b4:  mov    %eax,0x4(%esp)
0861ba2a +0x9b8:  mov    0x8(%ebp),%eax
0861ba2d +0x9bb:  mov    %eax,(%esp)
0861ba30 +0x9be:  call   0861ba78 <+0xa06>
0861ba35 +0x9c3:  leave
0861ba36 +0x9c4:  ret
0861ba37 +0x9c5:  nop
0861ba38 +0x9c6:  push   %ebp
0861ba39 +0x9c7:  mov    %esp,%ebp
0861ba3b +0x9c9:  mov    0x8(%ebp),%eax
0861ba3e +0x9cc:  pop    %ebp
0861ba3f +0x9cd:  ret
0861ba40 +0x9ce:  push   %ebp
0861ba41 +0x9cf:  mov    %esp,%ebp
0861ba43 +0x9d1:  mov    $0x15555555,%eax
0861ba48 +0x9d6:  pop    %ebp
0861ba49 +0x9d7:  ret
0861ba4a +0x9d8:  push   %ebp
0861ba4b +0x9d9:  mov    %esp,%ebp
0861ba4d +0x9db:  mov    0x8(%ebp),%eax
0861ba50 +0x9de:  mov    0xc(%ebp),%edx
0861ba53 +0x9e1:  mov    %edx,(%eax)
0861ba55 +0x9e3:  pop    %ebp
0861ba56 +0x9e4:  ret
0861ba57 +0x9e5:  push   %ebp
0861ba58 +0x9e6:  mov    %esp,%ebp
0861ba5a +0x9e8:  sub    $0x18,%esp
0861ba5d +0x9eb:  mov    0x10(%ebp),%eax
0861ba60 +0x9ee:  mov    %eax,0x8(%esp)
0861ba64 +0x9f2:  mov    0xc(%ebp),%eax
0861ba67 +0x9f5:  mov    %eax,0x4(%esp)
0861ba6b +0x9f9:  mov    0x8(%ebp),%eax
0861ba6e +0x9fc:  mov    %eax,(%esp)
0861ba71 +0x9ff:  call   0861bad7 <+0xa65>
0861ba76 +0xa04:  leave
0861ba77 +0xa05:  ret
0861ba78 +0xa06:  push   %ebp
0861ba79 +0xa07:  mov    %esp,%ebp
0861ba7b +0xa09:  push   %ebx
0861ba7c +0xa0a:  sub    $0x24,%esp
0861ba7f +0xa0d:  mov    0xc(%ebp),%edx
0861ba82 +0xa10:  mov    0x8(%ebp),%eax
0861ba85 +0xa13:  mov    %edx,%ecx
0861ba87 +0xa15:  sub    %eax,%ecx
0861ba89 +0xa17:  mov    %ecx,%eax
0861ba8b +0xa19:  sar    $0x2,%eax
0861ba8e +0xa1c:  imul   $0xaaaaaaab,%eax,%eax
0861ba94 +0xa22:  mov    %eax,-0xc(%ebp)
0861ba97 +0xa25:  jmp    0861bac3 <+0xa51>
0861ba99 +0xa27:  subl   $0xc,0x10(%ebp)
0861ba9d +0xa2b:  mov    0x10(%ebp),%ebx
0861baa0 +0xa2e:  subl   $0xc,0xc(%ebp)
0861baa4 +0xa32:  mov    0xc(%ebp),%eax
0861baa7 +0xa35:  mov    %eax,(%esp)
0861baaa +0xa38:  call   0861b2aa <+0x238>
0861baaf +0xa3d:  mov    (%eax),%edx
0861bab1 +0xa3f:  mov    %edx,(%ebx)
0861bab3 +0xa41:  mov    0x4(%eax),%edx
0861bab6 +0xa44:  mov    %edx,0x4(%ebx)
0861bab9 +0xa47:  mov    0x8(%eax),%eax
0861babc +0xa4a:  mov    %eax,0x8(%ebx)
0861babf +0xa4d:  subl   $0x1,-0xc(%ebp)
0861bac3 +0xa51:  cmpl   $0x0,-0xc(%ebp)
0861bac7 +0xa55:  setg   %al
0861baca +0xa58:  test   %al,%al
0861bacc +0xa5a:  jne    0861ba99 <+0xa27>
0861bace +0xa5c:  mov    0x10(%ebp),%eax
0861bad1 +0xa5f:  add    $0x24,%esp
0861bad4 +0xa62:  pop    %ebx
0861bad5 +0xa63:  pop    %ebp
0861bad6 +0xa64:  ret
0861bad7 +0xa65:  push   %ebp
0861bad8 +0xa66:  mov    %esp,%ebp
0861bada +0xa68:  push   %esi
0861badb +0xa69:  push   %ebx
0861badc +0xa6a:  sub    $0x20,%esp
0861badf +0xa6d:  mov    0x10(%ebp),%eax
0861bae2 +0xa70:  mov    %eax,-0xc(%ebp)
0861bae5 +0xa73:  jmp    0861bb2c <+0xaba>
0861bae7 +0xa75:  lea    0x8(%ebp),%eax
0861baea +0xa78:  mov    %eax,(%esp)
0861baed +0xa7b:  call   0861bbb4 <+0xb42>
0861baf2 +0xa80:  mov    %eax,%ebx
0861baf4 +0xa82:  mov    -0xc(%ebp),%eax
0861baf7 +0xa85:  mov    %eax,0x4(%esp)
0861bafb +0xa89:  movl   $0xc,(%esp)
0861bb02 +0xa90:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0861bb07 +0xa95:  mov    %eax,%edx
0861bb09 +0xa97:  test   %edx,%edx
0861bb0b +0xa99:  je     0861bb1d <+0xaab>
0861bb0d +0xa9b:  mov    (%ebx),%edx
0861bb0f +0xa9d:  mov    %edx,(%eax)
0861bb11 +0xa9f:  mov    0x4(%ebx),%edx
0861bb14 +0xaa2:  mov    %edx,0x4(%eax)
0861bb17 +0xaa5:  mov    0x8(%ebx),%edx
0861bb1a +0xaa8:  mov    %edx,0x8(%eax)
0861bb1d +0xaab:  lea    0x8(%ebp),%eax
0861bb20 +0xaae:  mov    %eax,(%esp)
0861bb23 +0xab1:  call   0861bb9e <+0xb2c>
0861bb28 +0xab6:  addl   $0xc,-0xc(%ebp)
0861bb2c +0xaba:  lea    0xc(%ebp),%eax
0861bb2f +0xabd:  mov    %eax,0x4(%esp)
0861bb33 +0xac1:  lea    0x8(%ebp),%eax
0861bb36 +0xac4:  mov    %eax,(%esp)
0861bb39 +0xac7:  call   0861bb80 <+0xb0e>
0861bb3e +0xacc:  test   %al,%al
0861bb40 +0xace:  jne    0861bae7 <+0xa75>
0861bb42 +0xad0:  mov    -0xc(%ebp),%eax
0861bb45 +0xad3:  add    $0x20,%esp
0861bb48 +0xad6:  pop    %ebx
0861bb49 +0xad7:  pop    %esi
0861bb4a +0xad8:  pop    %ebp
0861bb4b +0xad9:  ret
0861bb4c +0xada:  mov    %eax,(%esp)
0861bb4f +0xadd:  call   08725ce0 <__cxa_begin_catch>
0861bb54 +0xae2:  mov    -0xc(%ebp),%eax
0861bb57 +0xae5:  mov    %eax,0x4(%esp)
0861bb5b +0xae9:  mov    0x10(%ebp),%eax
0861bb5e +0xaec:  mov    %eax,(%esp)
0861bb61 +0xaef:  call   0861b3c7 <+0x355>
0861bb66 +0xaf4:  call   08724be0 <__cxa_rethrow>
0861bb6b +0xaf9:  mov    %edx,%ebx
0861bb6d +0xafb:  mov    %eax,%esi
0861bb6f +0xafd:  call   08725c30 <__cxa_end_catch>
0861bb74 +0xb02:  mov    %esi,%eax
0861bb76 +0xb04:  mov    %ebx,%edx
0861bb78 +0xb06:  mov    %eax,(%esp)
0861bb7b +0xb09:  call   08ae3750 <_Unwind_Resume>
0861bb80 +0xb0e:  push   %ebp
0861bb81 +0xb0f:  mov    %esp,%ebp
0861bb83 +0xb11:  sub    $0x18,%esp
0861bb86 +0xb14:  mov    0xc(%ebp),%eax
0861bb89 +0xb17:  mov    %eax,0x4(%esp)
0861bb8d +0xb1b:  mov    0x8(%ebp),%eax
0861bb90 +0xb1e:  mov    %eax,(%esp)
0861bb93 +0xb21:  call   0861bbbe <+0xb4c>
0861bb98 +0xb26:  xor    $0x1,%eax
0861bb9b +0xb29:  leave
0861bb9c +0xb2a:  ret
0861bb9d +0xb2b:  nop
0861bb9e +0xb2c:  push   %ebp
0861bb9f +0xb2d:  mov    %esp,%ebp
0861bba1 +0xb2f:  mov    0x8(%ebp),%eax
0861bba4 +0xb32:  mov    (%eax),%eax
0861bba6 +0xb34:  lea    0xc(%eax),%edx
0861bba9 +0xb37:  mov    0x8(%ebp),%eax
0861bbac +0xb3a:  mov    %edx,(%eax)
0861bbae +0xb3c:  mov    0x8(%ebp),%eax
0861bbb1 +0xb3f:  pop    %ebp
0861bbb2 +0xb40:  ret
0861bbb3 +0xb41:  nop
0861bbb4 +0xb42:  push   %ebp
0861bbb5 +0xb43:  mov    %esp,%ebp
0861bbb7 +0xb45:  mov    0x8(%ebp),%eax
0861bbba +0xb48:  mov    (%eax),%eax
0861bbbc +0xb4a:  pop    %ebp
0861bbbd +0xb4b:  ret
0861bbbe +0xb4c:  push   %ebp
0861bbbf +0xb4d:  mov    %esp,%ebp
0861bbc1 +0xb4f:  push   %ebx
0861bbc2 +0xb50:  sub    $0x14,%esp
0861bbc5 +0xb53:  mov    0x8(%ebp),%eax
0861bbc8 +0xb56:  mov    %eax,(%esp)
0861bbcb +0xb59:  call   0861bbe8 <+0xb76>
0861bbd0 +0xb5e:  mov    %eax,%ebx
0861bbd2 +0xb60:  mov    0xc(%ebp),%eax
0861bbd5 +0xb63:  mov    %eax,(%esp)
0861bbd8 +0xb66:  call   0861bbe8 <+0xb76>
0861bbdd +0xb6b:  cmp    %eax,%ebx
0861bbdf +0xb6d:  sete   %al
0861bbe2 +0xb70:  add    $0x14,%esp
0861bbe5 +0xb73:  pop    %ebx
0861bbe6 +0xb74:  pop    %ebp
0861bbe7 +0xb75:  ret
0861bbe8 +0xb76:  push   %ebp
0861bbe9 +0xb77:  mov    %esp,%ebp
0861bbeb +0xb79:  mov    0x8(%ebp),%eax
0861bbee +0xb7c:  mov    (%eax),%eax
0861bbf0 +0xb7e:  pop    %ebp
0861bbf1 +0xb7f:  ret
0861bbf2 +0xb80:  nop
0861bbf3 +0xb81:  nop
```

## 反编译 C

```c
// <global>::global @ 0x861b072

/* Store::user_buy_item(CUser*, int, int) */

void Store::_GLOBAL__I_user_buy_item(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
