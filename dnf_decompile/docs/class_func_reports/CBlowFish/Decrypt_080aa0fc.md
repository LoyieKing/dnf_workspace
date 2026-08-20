# Decrypt

`_ZN9CBlowFish7DecryptEPKhPhji`

`CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `CBlowFish` | `0x080aa0fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080aa0fc  _ZN9CBlowFish7DecryptEPKhPhji
#           CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)
# range [0x080aa0fc, 0x080aa603]
080aa0fc +0x000:  push   %ebp
080aa0fd +0x001:  mov    %esp,%ebp
080aa0ff +0x003:  sub    $0x48,%esp
080aa102 +0x006:  cmpl   $0x0,0x14(%ebp)
080aa106 +0x00a:  je     080aa112 <+0x16>
080aa108 +0x00c:  mov    0x14(%ebp),%eax
080aa10b +0x00f:  and    $0x7,%eax
080aa10e +0x012:  test   %eax,%eax
080aa110 +0x014:  je     080aa11c <+0x20>
080aa112 +0x016:  mov    $0x70000006,%eax
080aa117 +0x01b:  jmp    080aa2f6 <+0x1fa>
080aa11c +0x020:  movl   $0x0,0x8(%esp)
080aa124 +0x028:  movl   $0x0,0x4(%esp)
080aa12c +0x030:  lea    -0x10(%ebp),%eax
080aa12f +0x033:  mov    %eax,(%esp)
080aa132 +0x036:  call   08099ef6 <_ZNK16CNCryptoBlowFish12GetBlockSizeEv+0xa>  ; CNCryptoBlowFish::GetBlockSize() const+0xa
080aa137 +0x03b:  cmpl   $0x1,0x18(%ebp)
080aa13b +0x03f:  jne    080aa1ef <+0xf3>
080aa141 +0x045:  movl   $0x0,0x8(%esp)
080aa149 +0x04d:  movl   $0x0,0x4(%esp)
080aa151 +0x055:  lea    -0x18(%ebp),%eax
080aa154 +0x058:  mov    %eax,(%esp)
080aa157 +0x05b:  call   08099ef6 <_ZNK16CNCryptoBlowFish12GetBlockSizeEv+0xa>  ; CNCryptoBlowFish::GetBlockSize() const+0xa
080aa15c +0x060:  mov    0x8(%ebp),%eax
080aa15f +0x063:  add    $0x8,%eax
080aa162 +0x066:  mov    %eax,0x4(%esp)
080aa166 +0x06a:  lea    -0x20(%ebp),%eax
080aa169 +0x06d:  mov    %eax,(%esp)
080aa16c +0x070:  call   080aa2f8 <+0x1fc>
080aa171 +0x075:  jmp    080aa1df <+0xe3>
080aa173 +0x077:  lea    -0x10(%ebp),%eax
080aa176 +0x07a:  mov    %eax,0x4(%esp)
080aa17a +0x07e:  mov    0xc(%ebp),%eax
080aa17d +0x081:  mov    %eax,(%esp)
080aa180 +0x084:  call   080aa3d0 <+0x2d4>
080aa185 +0x089:  mov    -0x10(%ebp),%eax
080aa188 +0x08c:  mov    %eax,-0x18(%ebp)
080aa18b +0x08f:  mov    -0xc(%ebp),%eax
080aa18e +0x092:  mov    %eax,-0x14(%ebp)
080aa191 +0x095:  lea    -0x10(%ebp),%eax
080aa194 +0x098:  mov    %eax,0x4(%esp)
080aa198 +0x09c:  mov    0x8(%ebp),%eax
080aa19b +0x09f:  mov    %eax,(%esp)
080aa19e +0x0a2:  call   080a99b0 <_ZN9CBlowFish7DecryptER6SBlock>  ; CBlowFish::Decrypt(SBlock&)
080aa1a3 +0x0a7:  lea    -0x20(%ebp),%eax
080aa1a6 +0x0aa:  mov    %eax,0x4(%esp)
080aa1aa +0x0ae:  lea    -0x10(%ebp),%eax
080aa1ad +0x0b1:  mov    %eax,(%esp)
080aa1b0 +0x0b4:  call   080aa314 <+0x218>
080aa1b5 +0x0b9:  mov    -0x18(%ebp),%eax
080aa1b8 +0x0bc:  mov    %eax,-0x20(%ebp)
080aa1bb +0x0bf:  mov    -0x14(%ebp),%eax
080aa1be +0x0c2:  mov    %eax,-0x1c(%ebp)
080aa1c1 +0x0c5:  addl   $0x8,0x10(%ebp)
080aa1c5 +0x0c9:  mov    0x10(%ebp),%eax
080aa1c8 +0x0cc:  mov    %eax,0x4(%esp)
080aa1cc +0x0d0:  lea    -0x10(%ebp),%eax
080aa1cf +0x0d3:  mov    %eax,(%esp)
080aa1d2 +0x0d6:  call   080aa503 <+0x407>
080aa1d7 +0x0db:  subl   $0x8,0x14(%ebp)
080aa1db +0x0df:  addl   $0x8,0xc(%ebp)
080aa1df +0x0e3:  cmpl   $0x7,0x14(%ebp)
080aa1e3 +0x0e7:  seta   %al
080aa1e6 +0x0ea:  test   %al,%al
080aa1e8 +0x0ec:  jne    080aa173 <+0x77>
080aa1ea +0x0ee:  jmp    080aa2f1 <+0x1f5>
080aa1ef +0x0f3:  cmpl   $0x2,0x18(%ebp)
080aa1f3 +0x0f7:  jne    080aa2e6 <+0x1ea>
080aa1f9 +0x0fd:  movl   $0x0,0x8(%esp)
080aa201 +0x105:  movl   $0x0,0x4(%esp)
080aa209 +0x10d:  lea    -0x28(%ebp),%eax
080aa20c +0x110:  mov    %eax,(%esp)
080aa20f +0x113:  call   08099ef6 <_ZNK16CNCryptoBlowFish12GetBlockSizeEv+0xa>  ; CNCryptoBlowFish::GetBlockSize() const+0xa
080aa214 +0x118:  mov    0x8(%ebp),%eax
080aa217 +0x11b:  add    $0x8,%eax
080aa21a +0x11e:  mov    %eax,0x4(%esp)
080aa21e +0x122:  lea    -0x30(%ebp),%eax
080aa221 +0x125:  mov    %eax,(%esp)
080aa224 +0x128:  call   080aa2f8 <+0x1fc>
080aa229 +0x12d:  jmp    080aa297 <+0x19b>
080aa22b +0x12f:  lea    -0x10(%ebp),%eax
080aa22e +0x132:  mov    %eax,0x4(%esp)
080aa232 +0x136:  mov    0xc(%ebp),%eax
080aa235 +0x139:  mov    %eax,(%esp)
080aa238 +0x13c:  call   080aa3d0 <+0x2d4>
080aa23d +0x141:  lea    -0x30(%ebp),%eax
080aa240 +0x144:  mov    %eax,0x4(%esp)
080aa244 +0x148:  mov    0x8(%ebp),%eax
080aa247 +0x14b:  mov    %eax,(%esp)
080aa24a +0x14e:  call   080a97a4 <_ZN9CBlowFish7EncryptER6SBlock>  ; CBlowFish::Encrypt(SBlock&)
080aa24f +0x153:  mov    -0x10(%ebp),%eax
080aa252 +0x156:  mov    %eax,-0x28(%ebp)
080aa255 +0x159:  mov    -0xc(%ebp),%eax
080aa258 +0x15c:  mov    %eax,-0x24(%ebp)
080aa25b +0x15f:  lea    -0x30(%ebp),%eax
080aa25e +0x162:  mov    %eax,0x4(%esp)
080aa262 +0x166:  lea    -0x10(%ebp),%eax
080aa265 +0x169:  mov    %eax,(%esp)
080aa268 +0x16c:  call   080aa314 <+0x218>
080aa26d +0x171:  mov    -0x28(%ebp),%eax
080aa270 +0x174:  mov    %eax,-0x30(%ebp)
080aa273 +0x177:  mov    -0x24(%ebp),%eax
080aa276 +0x17a:  mov    %eax,-0x2c(%ebp)
080aa279 +0x17d:  addl   $0x8,0x10(%ebp)
080aa27d +0x181:  mov    0x10(%ebp),%eax
080aa280 +0x184:  mov    %eax,0x4(%esp)
080aa284 +0x188:  lea    -0x10(%ebp),%eax
080aa287 +0x18b:  mov    %eax,(%esp)
080aa28a +0x18e:  call   080aa503 <+0x407>
080aa28f +0x193:  subl   $0x8,0x14(%ebp)
080aa293 +0x197:  addl   $0x8,0xc(%ebp)
080aa297 +0x19b:  cmpl   $0x7,0x14(%ebp)
080aa29b +0x19f:  seta   %al
080aa29e +0x1a2:  test   %al,%al
080aa2a0 +0x1a4:  jne    080aa22b <+0x12f>
080aa2a2 +0x1a6:  jmp    080aa2f1 <+0x1f5>
080aa2a4 +0x1a8:  lea    -0x10(%ebp),%eax
080aa2a7 +0x1ab:  mov    %eax,0x4(%esp)
080aa2ab +0x1af:  mov    0xc(%ebp),%eax
080aa2ae +0x1b2:  mov    %eax,(%esp)
080aa2b1 +0x1b5:  call   080aa3d0 <+0x2d4>
080aa2b6 +0x1ba:  lea    -0x10(%ebp),%eax
080aa2b9 +0x1bd:  mov    %eax,0x4(%esp)
080aa2bd +0x1c1:  mov    0x8(%ebp),%eax
080aa2c0 +0x1c4:  mov    %eax,(%esp)
080aa2c3 +0x1c7:  call   080a99b0 <_ZN9CBlowFish7DecryptER6SBlock>  ; CBlowFish::Decrypt(SBlock&)
080aa2c8 +0x1cc:  addl   $0x8,0x10(%ebp)
080aa2cc +0x1d0:  mov    0x10(%ebp),%eax
080aa2cf +0x1d3:  mov    %eax,0x4(%esp)
080aa2d3 +0x1d7:  lea    -0x10(%ebp),%eax
080aa2d6 +0x1da:  mov    %eax,(%esp)
080aa2d9 +0x1dd:  call   080aa503 <+0x407>
080aa2de +0x1e2:  subl   $0x8,0x14(%ebp)
080aa2e2 +0x1e6:  addl   $0x8,0xc(%ebp)
080aa2e6 +0x1ea:  cmpl   $0x7,0x14(%ebp)
080aa2ea +0x1ee:  seta   %al
080aa2ed +0x1f1:  test   %al,%al
080aa2ef +0x1f3:  jne    080aa2a4 <+0x1a8>
080aa2f1 +0x1f5:  mov    $0x6fffffff,%eax
080aa2f6 +0x1fa:  leave
080aa2f7 +0x1fb:  ret
080aa2f8 +0x1fc:  push   %ebp
080aa2f9 +0x1fd:  mov    %esp,%ebp
080aa2fb +0x1ff:  mov    0xc(%ebp),%eax
080aa2fe +0x202:  mov    (%eax),%edx
080aa300 +0x204:  mov    0x8(%ebp),%eax
080aa303 +0x207:  mov    %edx,(%eax)
080aa305 +0x209:  mov    0xc(%ebp),%eax
080aa308 +0x20c:  mov    0x4(%eax),%edx
080aa30b +0x20f:  mov    0x8(%ebp),%eax
080aa30e +0x212:  mov    %edx,0x4(%eax)
080aa311 +0x215:  pop    %ebp
080aa312 +0x216:  ret
080aa313 +0x217:  nop
080aa314 +0x218:  push   %ebp
080aa315 +0x219:  mov    %esp,%ebp
080aa317 +0x21b:  mov    0x8(%ebp),%eax
080aa31a +0x21e:  mov    (%eax),%edx
080aa31c +0x220:  mov    0xc(%ebp),%eax
080aa31f +0x223:  mov    (%eax),%eax
080aa321 +0x225:  xor    %eax,%edx
080aa323 +0x227:  mov    0x8(%ebp),%eax
080aa326 +0x22a:  mov    %edx,(%eax)
080aa328 +0x22c:  mov    0x8(%ebp),%eax
080aa32b +0x22f:  mov    0x4(%eax),%edx
080aa32e +0x232:  mov    0xc(%ebp),%eax
080aa331 +0x235:  mov    0x4(%eax),%eax
080aa334 +0x238:  xor    %eax,%edx
080aa336 +0x23a:  mov    0x8(%ebp),%eax
080aa339 +0x23d:  mov    %edx,0x4(%eax)
080aa33c +0x240:  mov    0x8(%ebp),%eax
080aa33f +0x243:  pop    %ebp
080aa340 +0x244:  ret
080aa341 +0x245:  push   %ebp
080aa342 +0x246:  mov    %esp,%ebp
080aa344 +0x248:  mov    0x8(%ebp),%eax
080aa347 +0x24b:  pop    %ebp
080aa348 +0x24c:  ret
080aa349 +0x24d:  nop
080aa34a +0x24e:  push   %ebp
080aa34b +0x24f:  mov    %esp,%ebp
080aa34d +0x251:  push   %ebx
080aa34e +0x252:  sub    $0x14,%esp
080aa351 +0x255:  mov    0xc(%ebp),%eax
080aa354 +0x258:  shr    $0x18,%eax
080aa357 +0x25b:  mov    %eax,(%esp)
080aa35a +0x25e:  call   080aa341 <+0x245>
080aa35f +0x263:  movzbl %al,%edx
080aa362 +0x266:  mov    0x8(%ebp),%eax
080aa365 +0x269:  add    $0x14,%edx
080aa368 +0x26c:  mov    0x8(%eax,%edx,4),%ebx
080aa36c +0x270:  mov    0xc(%ebp),%eax
080aa36f +0x273:  shr    $0x10,%eax
080aa372 +0x276:  mov    %eax,(%esp)
080aa375 +0x279:  call   080aa341 <+0x245>
080aa37a +0x27e:  movzbl %al,%edx
080aa37d +0x281:  mov    0x8(%ebp),%eax
080aa380 +0x284:  add    $0x114,%edx
080aa386 +0x28a:  mov    0x8(%eax,%edx,4),%eax
080aa38a +0x28e:  add    %eax,%ebx
080aa38c +0x290:  mov    0xc(%ebp),%eax
080aa38f +0x293:  shr    $0x8,%eax
080aa392 +0x296:  mov    %eax,(%esp)
080aa395 +0x299:  call   080aa341 <+0x245>
080aa39a +0x29e:  movzbl %al,%edx
080aa39d +0x2a1:  mov    0x8(%ebp),%eax
080aa3a0 +0x2a4:  add    $0x214,%edx
080aa3a6 +0x2aa:  mov    0x8(%eax,%edx,4),%eax
080aa3aa +0x2ae:  xor    %eax,%ebx
080aa3ac +0x2b0:  mov    0xc(%ebp),%eax
080aa3af +0x2b3:  mov    %eax,(%esp)
080aa3b2 +0x2b6:  call   080aa341 <+0x245>
080aa3b7 +0x2bb:  movzbl %al,%edx
080aa3ba +0x2be:  mov    0x8(%ebp),%eax
080aa3bd +0x2c1:  add    $0x314,%edx
080aa3c3 +0x2c7:  mov    0x8(%eax,%edx,4),%eax
080aa3c7 +0x2cb:  lea    (%ebx,%eax,1),%eax
080aa3ca +0x2ce:  add    $0x14,%esp
080aa3cd +0x2d1:  pop    %ebx
080aa3ce +0x2d2:  pop    %ebp
080aa3cf +0x2d3:  ret
080aa3d0 +0x2d4:  push   %ebp
080aa3d1 +0x2d5:  mov    %esp,%ebp
080aa3d3 +0x2d7:  sub    $0x10,%esp
080aa3d6 +0x2da:  mov    0xc(%ebp),%eax
080aa3d9 +0x2dd:  movl   $0x0,(%eax)
080aa3df +0x2e3:  mov    0x8(%ebp),%eax
080aa3e2 +0x2e6:  movzbl (%eax),%eax
080aa3e5 +0x2e9:  movzbl %al,%eax
080aa3e8 +0x2ec:  mov    %eax,-0x4(%ebp)
080aa3eb +0x2ef:  addl   $0x1,0x8(%ebp)
080aa3ef +0x2f3:  shll   $0x18,-0x4(%ebp)
080aa3f3 +0x2f7:  mov    0xc(%ebp),%eax
080aa3f6 +0x2fa:  mov    (%eax),%eax
080aa3f8 +0x2fc:  mov    %eax,%edx
080aa3fa +0x2fe:  or     -0x4(%ebp),%edx
080aa3fd +0x301:  mov    0xc(%ebp),%eax
080aa400 +0x304:  mov    %edx,(%eax)
080aa402 +0x306:  mov    0x8(%ebp),%eax
080aa405 +0x309:  movzbl (%eax),%eax
080aa408 +0x30c:  movzbl %al,%eax
080aa40b +0x30f:  mov    %eax,-0x4(%ebp)
080aa40e +0x312:  addl   $0x1,0x8(%ebp)
080aa412 +0x316:  shll   $0x10,-0x4(%ebp)
080aa416 +0x31a:  mov    0xc(%ebp),%eax
080aa419 +0x31d:  mov    (%eax),%eax
080aa41b +0x31f:  mov    %eax,%edx
080aa41d +0x321:  or     -0x4(%ebp),%edx
080aa420 +0x324:  mov    0xc(%ebp),%eax
080aa423 +0x327:  mov    %edx,(%eax)
080aa425 +0x329:  mov    0x8(%ebp),%eax
080aa428 +0x32c:  movzbl (%eax),%eax
080aa42b +0x32f:  movzbl %al,%eax
080aa42e +0x332:  mov    %eax,-0x4(%ebp)
080aa431 +0x335:  addl   $0x1,0x8(%ebp)
080aa435 +0x339:  shll   $0x8,-0x4(%ebp)
080aa439 +0x33d:  mov    0xc(%ebp),%eax
080aa43c +0x340:  mov    (%eax),%eax
080aa43e +0x342:  mov    %eax,%edx
080aa440 +0x344:  or     -0x4(%ebp),%edx
080aa443 +0x347:  mov    0xc(%ebp),%eax
080aa446 +0x34a:  mov    %edx,(%eax)
080aa448 +0x34c:  mov    0x8(%ebp),%eax
080aa44b +0x34f:  movzbl (%eax),%eax
080aa44e +0x352:  movzbl %al,%eax
080aa451 +0x355:  mov    %eax,-0x4(%ebp)
080aa454 +0x358:  addl   $0x1,0x8(%ebp)
080aa458 +0x35c:  mov    0xc(%ebp),%eax
080aa45b +0x35f:  mov    (%eax),%eax
080aa45d +0x361:  mov    %eax,%edx
080aa45f +0x363:  or     -0x4(%ebp),%edx
080aa462 +0x366:  mov    0xc(%ebp),%eax
080aa465 +0x369:  mov    %edx,(%eax)
080aa467 +0x36b:  mov    0xc(%ebp),%eax
080aa46a +0x36e:  movl   $0x0,0x4(%eax)
080aa471 +0x375:  mov    0x8(%ebp),%eax
080aa474 +0x378:  movzbl (%eax),%eax
080aa477 +0x37b:  movzbl %al,%eax
080aa47a +0x37e:  mov    %eax,-0x4(%ebp)
080aa47d +0x381:  addl   $0x1,0x8(%ebp)
080aa481 +0x385:  shll   $0x18,-0x4(%ebp)
080aa485 +0x389:  mov    0xc(%ebp),%eax
080aa488 +0x38c:  mov    0x4(%eax),%eax
080aa48b +0x38f:  mov    %eax,%edx
080aa48d +0x391:  or     -0x4(%ebp),%edx
080aa490 +0x394:  mov    0xc(%ebp),%eax
080aa493 +0x397:  mov    %edx,0x4(%eax)
080aa496 +0x39a:  mov    0x8(%ebp),%eax
080aa499 +0x39d:  movzbl (%eax),%eax
080aa49c +0x3a0:  movzbl %al,%eax
080aa49f +0x3a3:  mov    %eax,-0x4(%ebp)
080aa4a2 +0x3a6:  addl   $0x1,0x8(%ebp)
080aa4a6 +0x3aa:  shll   $0x10,-0x4(%ebp)
080aa4aa +0x3ae:  mov    0xc(%ebp),%eax
080aa4ad +0x3b1:  mov    0x4(%eax),%eax
080aa4b0 +0x3b4:  mov    %eax,%edx
080aa4b2 +0x3b6:  or     -0x4(%ebp),%edx
080aa4b5 +0x3b9:  mov    0xc(%ebp),%eax
080aa4b8 +0x3bc:  mov    %edx,0x4(%eax)
080aa4bb +0x3bf:  mov    0x8(%ebp),%eax
080aa4be +0x3c2:  movzbl (%eax),%eax
080aa4c1 +0x3c5:  movzbl %al,%eax
080aa4c4 +0x3c8:  mov    %eax,-0x4(%ebp)
080aa4c7 +0x3cb:  addl   $0x1,0x8(%ebp)
080aa4cb +0x3cf:  shll   $0x8,-0x4(%ebp)
080aa4cf +0x3d3:  mov    0xc(%ebp),%eax
080aa4d2 +0x3d6:  mov    0x4(%eax),%eax
080aa4d5 +0x3d9:  mov    %eax,%edx
080aa4d7 +0x3db:  or     -0x4(%ebp),%edx
080aa4da +0x3de:  mov    0xc(%ebp),%eax
080aa4dd +0x3e1:  mov    %edx,0x4(%eax)
080aa4e0 +0x3e4:  mov    0x8(%ebp),%eax
080aa4e3 +0x3e7:  movzbl (%eax),%eax
080aa4e6 +0x3ea:  movzbl %al,%eax
080aa4e9 +0x3ed:  mov    %eax,-0x4(%ebp)
080aa4ec +0x3f0:  addl   $0x1,0x8(%ebp)
080aa4f0 +0x3f4:  mov    0xc(%ebp),%eax
080aa4f3 +0x3f7:  mov    0x4(%eax),%eax
080aa4f6 +0x3fa:  mov    %eax,%edx
080aa4f8 +0x3fc:  or     -0x4(%ebp),%edx
080aa4fb +0x3ff:  mov    0xc(%ebp),%eax
080aa4fe +0x402:  mov    %edx,0x4(%eax)
080aa501 +0x405:  leave
080aa502 +0x406:  ret
080aa503 +0x407:  push   %ebp
080aa504 +0x408:  mov    %esp,%ebp
080aa506 +0x40a:  sub    $0x28,%esp
080aa509 +0x40d:  mov    0x8(%ebp),%eax
080aa50c +0x410:  mov    0x4(%eax),%eax
080aa50f +0x413:  mov    %eax,-0xc(%ebp)
080aa512 +0x416:  subl   $0x1,0xc(%ebp)
080aa516 +0x41a:  mov    -0xc(%ebp),%eax
080aa519 +0x41d:  mov    %eax,(%esp)
080aa51c +0x420:  call   080aa341 <+0x245>
080aa521 +0x425:  mov    0xc(%ebp),%edx
080aa524 +0x428:  mov    %al,(%edx)
080aa526 +0x42a:  mov    0x8(%ebp),%eax
080aa529 +0x42d:  mov    0x4(%eax),%eax
080aa52c +0x430:  shr    $0x8,%eax
080aa52f +0x433:  mov    %eax,-0xc(%ebp)
080aa532 +0x436:  subl   $0x1,0xc(%ebp)
080aa536 +0x43a:  mov    -0xc(%ebp),%eax
080aa539 +0x43d:  mov    %eax,(%esp)
080aa53c +0x440:  call   080aa341 <+0x245>
080aa541 +0x445:  mov    0xc(%ebp),%edx
080aa544 +0x448:  mov    %al,(%edx)
080aa546 +0x44a:  mov    0x8(%ebp),%eax
080aa549 +0x44d:  mov    0x4(%eax),%eax
080aa54c +0x450:  shr    $0x10,%eax
080aa54f +0x453:  mov    %eax,-0xc(%ebp)
080aa552 +0x456:  subl   $0x1,0xc(%ebp)
080aa556 +0x45a:  mov    -0xc(%ebp),%eax
080aa559 +0x45d:  mov    %eax,(%esp)
080aa55c +0x460:  call   080aa341 <+0x245>
080aa561 +0x465:  mov    0xc(%ebp),%edx
080aa564 +0x468:  mov    %al,(%edx)
080aa566 +0x46a:  mov    0x8(%ebp),%eax
080aa569 +0x46d:  mov    0x4(%eax),%eax
080aa56c +0x470:  shr    $0x18,%eax
080aa56f +0x473:  mov    %eax,-0xc(%ebp)
080aa572 +0x476:  subl   $0x1,0xc(%ebp)
080aa576 +0x47a:  mov    -0xc(%ebp),%eax
080aa579 +0x47d:  mov    %eax,(%esp)
080aa57c +0x480:  call   080aa341 <+0x245>
080aa581 +0x485:  mov    0xc(%ebp),%edx
080aa584 +0x488:  mov    %al,(%edx)
080aa586 +0x48a:  mov    0x8(%ebp),%eax
080aa589 +0x48d:  mov    (%eax),%eax
080aa58b +0x48f:  mov    %eax,-0xc(%ebp)
080aa58e +0x492:  subl   $0x1,0xc(%ebp)
080aa592 +0x496:  mov    -0xc(%ebp),%eax
080aa595 +0x499:  mov    %eax,(%esp)
080aa598 +0x49c:  call   080aa341 <+0x245>
080aa59d +0x4a1:  mov    0xc(%ebp),%edx
080aa5a0 +0x4a4:  mov    %al,(%edx)
080aa5a2 +0x4a6:  mov    0x8(%ebp),%eax
080aa5a5 +0x4a9:  mov    (%eax),%eax
080aa5a7 +0x4ab:  shr    $0x8,%eax
080aa5aa +0x4ae:  mov    %eax,-0xc(%ebp)
080aa5ad +0x4b1:  subl   $0x1,0xc(%ebp)
080aa5b1 +0x4b5:  mov    -0xc(%ebp),%eax
080aa5b4 +0x4b8:  mov    %eax,(%esp)
080aa5b7 +0x4bb:  call   080aa341 <+0x245>
080aa5bc +0x4c0:  mov    0xc(%ebp),%edx
080aa5bf +0x4c3:  mov    %al,(%edx)
080aa5c1 +0x4c5:  mov    0x8(%ebp),%eax
080aa5c4 +0x4c8:  mov    (%eax),%eax
080aa5c6 +0x4ca:  shr    $0x10,%eax
080aa5c9 +0x4cd:  mov    %eax,-0xc(%ebp)
080aa5cc +0x4d0:  subl   $0x1,0xc(%ebp)
080aa5d0 +0x4d4:  mov    -0xc(%ebp),%eax
080aa5d3 +0x4d7:  mov    %eax,(%esp)
080aa5d6 +0x4da:  call   080aa341 <+0x245>
080aa5db +0x4df:  mov    0xc(%ebp),%edx
080aa5de +0x4e2:  mov    %al,(%edx)
080aa5e0 +0x4e4:  mov    0x8(%ebp),%eax
080aa5e3 +0x4e7:  mov    (%eax),%eax
080aa5e5 +0x4e9:  shr    $0x18,%eax
080aa5e8 +0x4ec:  mov    %eax,-0xc(%ebp)
080aa5eb +0x4ef:  subl   $0x1,0xc(%ebp)
080aa5ef +0x4f3:  mov    -0xc(%ebp),%eax
080aa5f2 +0x4f6:  mov    %eax,(%esp)
080aa5f5 +0x4f9:  call   080aa341 <+0x245>
080aa5fa +0x4fe:  mov    0xc(%ebp),%edx
080aa5fd +0x501:  mov    %al,(%edx)
080aa5ff +0x503:  leave
080aa600 +0x504:  ret
080aa601 +0x505:  nop
080aa602 +0x506:  nop
080aa603 +0x507:  nop
```

## 反编译 C

```c
// CBlowFish::Decrypt @ 0x80aa0fc

/* CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int) */

undefined4 __thiscall
CBlowFish::Decrypt(CBlowFish *this,uchar *param_1,uchar *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((param_3 == 0) || ((param_3 & 7) != 0)) {
    uVar1 = 0x70000006;
  }
  else {
    SBlock::SBlock((SBlock *)&local_14,0,0);
    if (param_4 == 1) {
      SBlock::SBlock((SBlock *)&local_1c,0,0);
      SBlock::SBlock((SBlock *)&local_24,(SBlock *)(this + 8));
      for (; 7 < param_3; param_3 = param_3 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        local_1c = local_14;
        local_18 = local_10;
        Decrypt(this,(SBlock *)&local_14);
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_24);
        local_24 = local_1c;
        local_20 = local_18;
        param_2 = param_2 + 8;
        BlockToBytes((SBlock *)&local_14,param_2);
        param_1 = param_1 + 8;
      }
    }
    else if (param_4 == 2) {
      SBlock::SBlock((SBlock *)&local_2c,0,0);
      SBlock::SBlock((SBlock *)&local_34,(SBlock *)(this + 8));
      for (; 7 < param_3; param_3 = param_3 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        Encrypt(this,(SBlock *)&local_34);
        local_2c = local_14;
        local_28 = local_10;
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_34);
        local_34 = local_2c;
        local_30 = local_28;
        param_2 = param_2 + 8;
        BlockToBytes((SBlock *)&local_14,param_2);
        param_1 = param_1 + 8;
      }
    }
    else {
      for (; 7 < param_3; param_3 = param_3 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        Decrypt(this,(SBlock *)&local_14);
        param_2 = param_2 + 8;
        BlockToBytes((SBlock *)&local_14,param_2);
        param_1 = param_1 + 8;
      }
    }
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
