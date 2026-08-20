# Initialize

`_ZN9CRijndael10InitializeEPKciS1_iiii`

`CRijndael::Initialize(char const*, int, char const*, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CRijndael` | `0x080b6220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b6220  _ZN9CRijndael10InitializeEPKciS1_iiii
#           CRijndael::Initialize(char const*, int, char const*, int, int, int, int)
# range [0x080b6220, 0x080b6a53]
080b6220 +0x000:  push   %ebp
080b6221 +0x001:  mov    %esp,%ebp
080b6223 +0x003:  push   %ebx
080b6224 +0x004:  sub    $0x64,%esp
080b6227 +0x007:  cmpl   $0x0,0xc(%ebp)
080b622b +0x00b:  jne    080b6237 <+0x17>
080b622d +0x00d:  mov    $0x70000001,%eax
080b6232 +0x012:  jmp    080b6a4d <+0x82d>
080b6237 +0x017:  cmpl   $0x0,0x10(%ebp)
080b623b +0x01b:  jg     080b6247 <+0x27>
080b623d +0x01d:  mov    $0x70000002,%eax
080b6242 +0x022:  jmp    080b6a4d <+0x82d>
080b6247 +0x027:  cmpl   $0x10,0x18(%ebp)
080b624b +0x02b:  je     080b6263 <+0x43>
080b624d +0x02d:  cmpl   $0x18,0x18(%ebp)
080b6251 +0x031:  je     080b6263 <+0x43>
080b6253 +0x033:  cmpl   $0x20,0x18(%ebp)
080b6257 +0x037:  je     080b6263 <+0x43>
080b6259 +0x039:  mov    $0x70000009,%eax
080b625e +0x03e:  jmp    080b6a4d <+0x82d>
080b6263 +0x043:  cmpl   $0x10,0x1c(%ebp)
080b6267 +0x047:  je     080b627f <+0x5f>
080b6269 +0x049:  cmpl   $0x18,0x1c(%ebp)
080b626d +0x04d:  je     080b627f <+0x5f>
080b626f +0x04f:  cmpl   $0x20,0x1c(%ebp)
080b6273 +0x053:  je     080b627f <+0x5f>
080b6275 +0x055:  mov    $0x70000006,%eax
080b627a +0x05a:  jmp    080b6a4d <+0x82d>
080b627f +0x05f:  cmpl   $0x0,0x20(%ebp)
080b6283 +0x063:  js     080b628b <+0x6b>
080b6285 +0x065:  cmpl   $0x2,0x20(%ebp)
080b6289 +0x069:  jle    080b6295 <+0x75>
080b628b +0x06b:  mov    $0x70000003,%eax
080b6290 +0x070:  jmp    080b6a4d <+0x82d>
080b6295 +0x075:  cmpl   $0x0,0x24(%ebp)
080b6299 +0x079:  js     080b62a1 <+0x81>
080b629b +0x07b:  cmpl   $0x2,0x24(%ebp)
080b629f +0x07f:  jle    080b62ab <+0x8b>
080b62a1 +0x081:  mov    $0x70000004,%eax
080b62a6 +0x086:  jmp    080b6a4d <+0x82d>
080b62ab +0x08b:  mov    0x8(%ebp),%eax
080b62ae +0x08e:  mov    0x20(%ebp),%edx
080b62b1 +0x091:  mov    %edx,0x10(%eax)
080b62b4 +0x094:  mov    0x8(%ebp),%eax
080b62b7 +0x097:  mov    0x24(%ebp),%edx
080b62ba +0x09a:  mov    %edx,0x14(%eax)
080b62bd +0x09d:  movl   $0x0,-0x34(%ebp)
080b62c4 +0x0a4:  movl   $0x0,-0x30(%ebp)
080b62cb +0x0ab:  jmp    080b62f2 <+0xd2>
080b62cd +0x0ad:  mov    -0x34(%ebp),%eax
080b62d0 +0x0b0:  mov    -0x30(%ebp),%edx
080b62d3 +0x0b3:  add    0xc(%ebp),%edx
080b62d6 +0x0b6:  movzbl (%edx),%edx
080b62d9 +0x0b9:  mov    %dl,-0x54(%ebp,%eax,1)
080b62dd +0x0bd:  addl   $0x1,-0x34(%ebp)
080b62e1 +0x0c1:  mov    -0x30(%ebp),%eax
080b62e4 +0x0c4:  add    $0x1,%eax
080b62e7 +0x0c7:  mov    %eax,%edx
080b62e9 +0x0c9:  sar    $0x1f,%edx
080b62ec +0x0cc:  idivl  0x10(%ebp)
080b62ef +0x0cf:  mov    %edx,-0x30(%ebp)
080b62f2 +0x0d2:  mov    -0x34(%ebp),%eax
080b62f5 +0x0d5:  cmp    0x18(%ebp),%eax
080b62f8 +0x0d8:  setl   %al
080b62fb +0x0db:  test   %al,%al
080b62fd +0x0dd:  jne    080b62cd <+0xad>
080b62ff +0x0df:  mov    0x8(%ebp),%eax
080b6302 +0x0e2:  mov    0x1c(%ebp),%edx
080b6305 +0x0e5:  mov    %edx,0x8(%eax)
080b6308 +0x0e8:  mov    0x8(%ebp),%eax
080b630b +0x0eb:  mov    0x8(%eax),%eax
080b630e +0x0ee:  mov    0x8(%ebp),%edx
080b6311 +0x0f1:  add    $0x3dc,%edx
080b6317 +0x0f7:  mov    %eax,0x8(%esp)
080b631b +0x0fb:  mov    0x14(%ebp),%eax
080b631e +0x0fe:  mov    %eax,0x4(%esp)
080b6322 +0x102:  mov    %edx,(%esp)
080b6325 +0x105:  call   0807d8a0 <_init+0x198>
080b632a +0x10a:  mov    0x8(%ebp),%eax
080b632d +0x10d:  mov    0x8(%eax),%eax
080b6330 +0x110:  mov    0x8(%ebp),%edx
080b6333 +0x113:  lea    0x3dc(%edx),%ecx
080b6339 +0x119:  mov    0x8(%ebp),%edx
080b633c +0x11c:  add    $0x3fc,%edx
080b6342 +0x122:  mov    %eax,0x8(%esp)
080b6346 +0x126:  mov    %ecx,0x4(%esp)
080b634a +0x12a:  mov    %edx,(%esp)
080b634d +0x12d:  call   0807d8a0 <_init+0x198>
080b6352 +0x132:  mov    0x8(%ebp),%eax
080b6355 +0x135:  mov    0x18(%ebp),%edx
080b6358 +0x138:  mov    %edx,0xc(%eax)
080b635b +0x13b:  mov    0x8(%ebp),%eax
080b635e +0x13e:  mov    0xc(%eax),%eax
080b6361 +0x141:  mov    0x8(%ebp),%edx
080b6364 +0x144:  add    $0x18,%edx
080b6367 +0x147:  mov    %eax,0x8(%esp)
080b636b +0x14b:  lea    -0x54(%ebp),%eax
080b636e +0x14e:  mov    %eax,0x4(%esp)
080b6372 +0x152:  mov    %edx,(%esp)
080b6375 +0x155:  call   0807d8a0 <_init+0x198>
080b637a +0x15a:  mov    0x8(%ebp),%eax
080b637d +0x15d:  mov    0xc(%eax),%eax
080b6380 +0x160:  cmp    $0x10,%eax
080b6383 +0x163:  je     080b638c <+0x16c>
080b6385 +0x165:  cmp    $0x18,%eax
080b6388 +0x168:  je     080b63c0 <+0x1a0>
080b638a +0x16a:  jmp    080b63e2 <+0x1c2>
080b638c +0x16c:  mov    0x8(%ebp),%eax
080b638f +0x16f:  mov    0x8(%eax),%eax
080b6392 +0x172:  cmp    $0x10,%eax
080b6395 +0x175:  je     080b63b0 <+0x190>
080b6397 +0x177:  mov    0x8(%ebp),%eax
080b639a +0x17a:  mov    0x8(%eax),%eax
080b639d +0x17d:  cmp    $0x18,%eax
080b63a0 +0x180:  jne    080b63a9 <+0x189>
080b63a2 +0x182:  mov    $0xc,%eax
080b63a7 +0x187:  jmp    080b63ae <+0x18e>
080b63a9 +0x189:  mov    $0xe,%eax
080b63ae +0x18e:  jmp    080b63b5 <+0x195>
080b63b0 +0x190:  mov    $0xa,%eax
080b63b5 +0x195:  mov    0x8(%ebp),%edx
080b63b8 +0x198:  mov    %eax,0x3d8(%edx)
080b63be +0x19e:  jmp    080b63ef <+0x1cf>
080b63c0 +0x1a0:  mov    0x8(%ebp),%eax
080b63c3 +0x1a3:  mov    0x8(%eax),%eax
080b63c6 +0x1a6:  cmp    $0x20,%eax
080b63c9 +0x1a9:  je     080b63d2 <+0x1b2>
080b63cb +0x1ab:  mov    $0xc,%eax
080b63d0 +0x1b0:  jmp    080b63d7 <+0x1b7>
080b63d2 +0x1b2:  mov    $0xe,%eax
080b63d7 +0x1b7:  mov    0x8(%ebp),%edx
080b63da +0x1ba:  mov    %eax,0x3d8(%edx)
080b63e0 +0x1c0:  jmp    080b63ef <+0x1cf>
080b63e2 +0x1c2:  mov    0x8(%ebp),%eax
080b63e5 +0x1c5:  movl   $0xe,0x3d8(%eax)
080b63ef +0x1cf:  mov    0x8(%ebp),%eax
080b63f2 +0x1d2:  mov    0x8(%eax),%eax
080b63f5 +0x1d5:  mov    %eax,%edx
080b63f7 +0x1d7:  sar    $0x1f,%edx
080b63fa +0x1da:  shr    $0x1e,%edx
080b63fd +0x1dd:  lea    (%edx,%eax,1),%eax
080b6400 +0x1e0:  sar    $0x2,%eax
080b6403 +0x1e3:  mov    %eax,-0x2c(%ebp)
080b6406 +0x1e6:  movl   $0x0,-0x34(%ebp)
080b640d +0x1ed:  jmp    080b6447 <+0x227>
080b640f +0x1ef:  movl   $0x0,-0x30(%ebp)
080b6416 +0x1f6:  jmp    080b6436 <+0x216>
080b6418 +0x1f8:  mov    -0x34(%ebp),%ecx
080b641b +0x1fb:  mov    -0x30(%ebp),%edx
080b641e +0x1fe:  mov    0x8(%ebp),%eax
080b6421 +0x201:  shl    $0x3,%ecx
080b6424 +0x204:  lea    (%ecx,%edx,1),%edx
080b6427 +0x207:  add    $0xc,%edx
080b642a +0x20a:  movl   $0x0,0x8(%eax,%edx,4)
080b6432 +0x212:  addl   $0x1,-0x30(%ebp)
080b6436 +0x216:  mov    -0x30(%ebp),%eax
080b6439 +0x219:  cmp    -0x2c(%ebp),%eax
080b643c +0x21c:  setl   %al
080b643f +0x21f:  test   %al,%al
080b6441 +0x221:  jne    080b6418 <+0x1f8>
080b6443 +0x223:  addl   $0x1,-0x34(%ebp)
080b6447 +0x227:  mov    0x8(%ebp),%eax
080b644a +0x22a:  mov    0x3d8(%eax),%eax
080b6450 +0x230:  cmp    -0x34(%ebp),%eax
080b6453 +0x233:  setge  %al
080b6456 +0x236:  test   %al,%al
080b6458 +0x238:  jne    080b640f <+0x1ef>
080b645a +0x23a:  movl   $0x0,-0x34(%ebp)
080b6461 +0x241:  jmp    080b649b <+0x27b>
080b6463 +0x243:  movl   $0x0,-0x30(%ebp)
080b646a +0x24a:  jmp    080b648a <+0x26a>
080b646c +0x24c:  mov    -0x34(%ebp),%ecx
080b646f +0x24f:  mov    -0x30(%ebp),%edx
080b6472 +0x252:  mov    0x8(%ebp),%eax
080b6475 +0x255:  shl    $0x3,%ecx
080b6478 +0x258:  lea    (%ecx,%edx,1),%edx
080b647b +0x25b:  add    $0x7c,%edx
080b647e +0x25e:  movl   $0x0,0x8(%eax,%edx,4)
080b6486 +0x266:  addl   $0x1,-0x30(%ebp)
080b648a +0x26a:  mov    -0x30(%ebp),%eax
080b648d +0x26d:  cmp    -0x2c(%ebp),%eax
080b6490 +0x270:  setl   %al
080b6493 +0x273:  test   %al,%al
080b6495 +0x275:  jne    080b646c <+0x24c>
080b6497 +0x277:  addl   $0x1,-0x34(%ebp)
080b649b +0x27b:  mov    0x8(%ebp),%eax
080b649e +0x27e:  mov    0x3d8(%eax),%eax
080b64a4 +0x284:  cmp    -0x34(%ebp),%eax
080b64a7 +0x287:  setge  %al
080b64aa +0x28a:  test   %al,%al
080b64ac +0x28c:  jne    080b6463 <+0x243>
080b64ae +0x28e:  mov    0x8(%ebp),%eax
080b64b1 +0x291:  mov    0x3d8(%eax),%eax
080b64b7 +0x297:  add    $0x1,%eax
080b64ba +0x29a:  imul   -0x2c(%ebp),%eax
080b64be +0x29e:  mov    %eax,-0x28(%ebp)
080b64c1 +0x2a1:  mov    0x8(%ebp),%eax
080b64c4 +0x2a4:  mov    0xc(%eax),%eax
080b64c7 +0x2a7:  mov    %eax,%edx
080b64c9 +0x2a9:  sar    $0x1f,%edx
080b64cc +0x2ac:  shr    $0x1e,%edx
080b64cf +0x2af:  lea    (%edx,%eax,1),%eax
080b64d2 +0x2b2:  sar    $0x2,%eax
080b64d5 +0x2b5:  mov    %eax,-0x24(%ebp)
080b64d8 +0x2b8:  mov    0x8(%ebp),%eax
080b64db +0x2bb:  add    $0x41c,%eax
080b64e0 +0x2c0:  mov    %eax,-0x20(%ebp)
080b64e3 +0x2c3:  lea    -0x54(%ebp),%eax
080b64e6 +0x2c6:  mov    %eax,-0x1c(%ebp)
080b64e9 +0x2c9:  movl   $0x0,-0x34(%ebp)
080b64f0 +0x2d0:  jmp    080b655f <+0x33f>
080b64f2 +0x2d2:  mov    -0x1c(%ebp),%eax
080b64f5 +0x2d5:  movzbl (%eax),%eax
080b64f8 +0x2d8:  movzbl %al,%eax
080b64fb +0x2db:  mov    %eax,%edx
080b64fd +0x2dd:  shl    $0x18,%edx
080b6500 +0x2e0:  mov    -0x20(%ebp),%eax
080b6503 +0x2e3:  mov    %edx,(%eax)
080b6505 +0x2e5:  addl   $0x1,-0x1c(%ebp)
080b6509 +0x2e9:  mov    -0x20(%ebp),%eax
080b650c +0x2ec:  mov    (%eax),%edx
080b650e +0x2ee:  mov    -0x1c(%ebp),%eax
080b6511 +0x2f1:  movzbl (%eax),%eax
080b6514 +0x2f4:  movzbl %al,%eax
080b6517 +0x2f7:  shl    $0x10,%eax
080b651a +0x2fa:  or     %eax,%edx
080b651c +0x2fc:  mov    -0x20(%ebp),%eax
080b651f +0x2ff:  mov    %edx,(%eax)
080b6521 +0x301:  addl   $0x1,-0x1c(%ebp)
080b6525 +0x305:  mov    -0x20(%ebp),%eax
080b6528 +0x308:  mov    (%eax),%edx
080b652a +0x30a:  mov    -0x1c(%ebp),%eax
080b652d +0x30d:  movzbl (%eax),%eax
080b6530 +0x310:  movzbl %al,%eax
080b6533 +0x313:  shl    $0x8,%eax
080b6536 +0x316:  or     %eax,%edx
080b6538 +0x318:  mov    -0x20(%ebp),%eax
080b653b +0x31b:  mov    %edx,(%eax)
080b653d +0x31d:  addl   $0x1,-0x1c(%ebp)
080b6541 +0x321:  mov    -0x20(%ebp),%eax
080b6544 +0x324:  mov    (%eax),%ecx
080b6546 +0x326:  mov    -0x1c(%ebp),%edx
080b6549 +0x329:  movzbl (%edx),%edx
080b654c +0x32c:  movzbl %dl,%edx
080b654f +0x32f:  or     %ecx,%edx
080b6551 +0x331:  mov    %edx,(%eax)
080b6553 +0x333:  addl   $0x4,-0x20(%ebp)
080b6557 +0x337:  addl   $0x1,-0x1c(%ebp)
080b655b +0x33b:  addl   $0x1,-0x34(%ebp)
080b655f +0x33f:  mov    -0x34(%ebp),%eax
080b6562 +0x342:  cmp    -0x24(%ebp),%eax
080b6565 +0x345:  setl   %al
080b6568 +0x348:  test   %al,%al
080b656a +0x34a:  jne    080b64f2 <+0x2d2>
080b656c +0x34c:  movl   $0x0,-0x18(%ebp)
080b6573 +0x353:  movl   $0x0,-0x30(%ebp)
080b657a +0x35a:  jmp    080b6606 <+0x3e6>
080b657f +0x35f:  mov    -0x18(%ebp),%eax
080b6582 +0x362:  mov    %eax,%edx
080b6584 +0x364:  sar    $0x1f,%edx
080b6587 +0x367:  idivl  -0x2c(%ebp)
080b658a +0x36a:  mov    %eax,%ebx
080b658c +0x36c:  mov    -0x18(%ebp),%eax
080b658f +0x36f:  mov    %eax,%edx
080b6591 +0x371:  sar    $0x1f,%edx
080b6594 +0x374:  idivl  -0x2c(%ebp)
080b6597 +0x377:  mov    %edx,%ecx
080b6599 +0x379:  mov    -0x30(%ebp),%edx
080b659c +0x37c:  mov    0x8(%ebp),%eax
080b659f +0x37f:  add    $0x104,%edx
080b65a5 +0x385:  mov    0xc(%eax,%edx,4),%edx
080b65a9 +0x389:  mov    0x8(%ebp),%eax
080b65ac +0x38c:  shl    $0x3,%ebx
080b65af +0x38f:  lea    (%ebx,%ecx,1),%ecx
080b65b2 +0x392:  add    $0xc,%ecx
080b65b5 +0x395:  mov    %edx,0x8(%eax,%ecx,4)
080b65b9 +0x399:  mov    0x8(%ebp),%eax
080b65bc +0x39c:  mov    0x3d8(%eax),%ecx
080b65c2 +0x3a2:  mov    -0x18(%ebp),%eax
080b65c5 +0x3a5:  mov    %eax,%edx
080b65c7 +0x3a7:  sar    $0x1f,%edx
080b65ca +0x3aa:  idivl  -0x2c(%ebp)
080b65cd +0x3ad:  mov    %ecx,%ebx
080b65cf +0x3af:  sub    %eax,%ebx
080b65d1 +0x3b1:  mov    -0x18(%ebp),%eax
080b65d4 +0x3b4:  mov    %eax,%edx
080b65d6 +0x3b6:  sar    $0x1f,%edx
080b65d9 +0x3b9:  idivl  -0x2c(%ebp)
080b65dc +0x3bc:  mov    %edx,%ecx
080b65de +0x3be:  mov    -0x30(%ebp),%edx
080b65e1 +0x3c1:  mov    0x8(%ebp),%eax
080b65e4 +0x3c4:  add    $0x104,%edx
080b65ea +0x3ca:  mov    0xc(%eax,%edx,4),%edx
080b65ee +0x3ce:  mov    0x8(%ebp),%eax
080b65f1 +0x3d1:  shl    $0x3,%ebx
080b65f4 +0x3d4:  lea    (%ebx,%ecx,1),%ecx
080b65f7 +0x3d7:  add    $0x7c,%ecx
080b65fa +0x3da:  mov    %edx,0x8(%eax,%ecx,4)
080b65fe +0x3de:  addl   $0x1,-0x30(%ebp)
080b6602 +0x3e2:  addl   $0x1,-0x18(%ebp)
080b6606 +0x3e6:  mov    -0x30(%ebp),%eax
080b6609 +0x3e9:  cmp    -0x24(%ebp),%eax
080b660c +0x3ec:  jge    080b661d <+0x3fd>
080b660e +0x3ee:  mov    -0x18(%ebp),%eax
080b6611 +0x3f1:  cmp    -0x28(%ebp),%eax
080b6614 +0x3f4:  jge    080b661d <+0x3fd>
080b6616 +0x3f6:  mov    $0x1,%eax
080b661b +0x3fb:  jmp    080b6622 <+0x402>
080b661d +0x3fd:  mov    $0x0,%eax
080b6622 +0x402:  test   %al,%al
080b6624 +0x404:  jne    080b657f <+0x35f>
080b662a +0x40a:  movl   $0x0,-0x10(%ebp)
080b6631 +0x411:  jmp    080b6976 <+0x756>
080b6636 +0x416:  mov    -0x24(%ebp),%eax
080b6639 +0x419:  lea    -0x1(%eax),%edx
080b663c +0x41c:  mov    0x8(%ebp),%eax
080b663f +0x41f:  add    $0x104,%edx
080b6645 +0x425:  mov    0xc(%eax,%edx,4),%eax
080b6649 +0x429:  mov    %eax,-0x14(%ebp)
080b664c +0x42c:  mov    0x8(%ebp),%eax
080b664f +0x42f:  mov    0x41c(%eax),%edx
080b6655 +0x435:  mov    -0x14(%ebp),%eax
080b6658 +0x438:  sar    $0x10,%eax
080b665b +0x43b:  and    $0xff,%eax
080b6660 +0x440:  movzbl &_ZN9CRijndael4sm_SE(%eax),%eax
080b6667 +0x447:  movsbl %al,%eax
080b666a +0x44a:  mov    %eax,%ecx
080b666c +0x44c:  shl    $0x18,%ecx
080b666f +0x44f:  mov    -0x14(%ebp),%eax
080b6672 +0x452:  sar    $0x8,%eax
080b6675 +0x455:  and    $0xff,%eax
080b667a +0x45a:  movzbl &_ZN9CRijndael4sm_SE(%eax),%eax
080b6681 +0x461:  movsbl %al,%eax
080b6684 +0x464:  and    $0xff,%eax
080b6689 +0x469:  shl    $0x10,%eax
080b668c +0x46c:  xor    %eax,%ecx
080b668e +0x46e:  mov    -0x14(%ebp),%eax
080b6691 +0x471:  and    $0xff,%eax
080b6696 +0x476:  movzbl &_ZN9CRijndael4sm_SE(%eax),%eax
080b669d +0x47d:  movsbl %al,%eax
080b66a0 +0x480:  shl    $0x8,%eax
080b66a3 +0x483:  and    $0xffff,%eax
080b66a8 +0x488:  xor    %eax,%ecx
080b66aa +0x48a:  mov    -0x14(%ebp),%eax
080b66ad +0x48d:  shr    $0x18,%eax
080b66b0 +0x490:  movzbl &_ZN9CRijndael4sm_SE(%eax),%eax
080b66b7 +0x497:  movsbl %al,%eax
080b66ba +0x49a:  and    $0xff,%eax
080b66bf +0x49f:  xor    %eax,%ecx
080b66c1 +0x4a1:  mov    -0x10(%ebp),%eax
080b66c4 +0x4a4:  movzbl &_ZN9CRijndael7sm_rconE(%eax),%eax
080b66cb +0x4ab:  movsbl %al,%eax
080b66ce +0x4ae:  shl    $0x18,%eax
080b66d1 +0x4b1:  xor    %ecx,%eax
080b66d3 +0x4b3:  xor    %eax,%edx
080b66d5 +0x4b5:  mov    0x8(%ebp),%eax
080b66d8 +0x4b8:  mov    %edx,0x41c(%eax)
080b66de +0x4be:  addl   $0x1,-0x10(%ebp)
080b66e2 +0x4c2:  cmpl   $0x8,-0x24(%ebp)
080b66e6 +0x4c6:  je     080b6745 <+0x525>
080b66e8 +0x4c8:  movl   $0x1,-0x34(%ebp)
080b66ef +0x4cf:  movl   $0x0,-0x30(%ebp)
080b66f6 +0x4d6:  jmp    080b6733 <+0x513>
080b66f8 +0x4d8:  mov    -0x34(%ebp),%eax
080b66fb +0x4db:  mov    %eax,%edx
080b66fd +0x4dd:  mov    %eax,%ecx
080b66ff +0x4df:  mov    0x8(%ebp),%eax
080b6702 +0x4e2:  add    $0x104,%ecx
080b6708 +0x4e8:  mov    0xc(%eax,%ecx,4),%ecx
080b670c +0x4ec:  mov    -0x30(%ebp),%ebx
080b670f +0x4ef:  mov    0x8(%ebp),%eax
080b6712 +0x4f2:  add    $0x104,%ebx
080b6718 +0x4f8:  mov    0xc(%eax,%ebx,4),%eax
080b671c +0x4fc:  xor    %eax,%ecx
080b671e +0x4fe:  mov    0x8(%ebp),%eax
080b6721 +0x501:  add    $0x104,%edx
080b6727 +0x507:  mov    %ecx,0xc(%eax,%edx,4)
080b672b +0x50b:  addl   $0x1,-0x34(%ebp)
080b672f +0x50f:  addl   $0x1,-0x30(%ebp)
080b6733 +0x513:  mov    -0x34(%ebp),%eax
080b6736 +0x516:  cmp    -0x24(%ebp),%eax
080b6739 +0x519:  setl   %al
080b673c +0x51c:  test   %al,%al
080b673e +0x51e:  jne    080b66f8 <+0x4d8>
080b6740 +0x520:  jmp    080b68bf <+0x69f>
080b6745 +0x525:  movl   $0x1,-0x34(%ebp)
080b674c +0x52c:  movl   $0x0,-0x30(%ebp)
080b6753 +0x533:  jmp    080b6790 <+0x570>
080b6755 +0x535:  mov    -0x34(%ebp),%eax
080b6758 +0x538:  mov    %eax,%edx
080b675a +0x53a:  mov    %eax,%ecx
080b675c +0x53c:  mov    0x8(%ebp),%eax
080b675f +0x53f:  add    $0x104,%ecx
080b6765 +0x545:  mov    0xc(%eax,%ecx,4),%ecx
080b6769 +0x549:  mov    -0x30(%ebp),%ebx
080b676c +0x54c:  mov    0x8(%ebp),%eax
080b676f +0x54f:  add    $0x104,%ebx
080b6775 +0x555:  mov    0xc(%eax,%ebx,4),%eax
080b6779 +0x559:  xor    %eax,%ecx
080b677b +0x55b:  mov    0x8(%ebp),%eax
080b677e +0x55e:  add    $0x104,%edx
080b6784 +0x564:  mov    %ecx,0xc(%eax,%edx,4)
080b6788 +0x568:  addl   $0x1,-0x34(%ebp)
080b678c +0x56c:  addl   $0x1,-0x30(%ebp)
080b6790 +0x570:  mov    -0x24(%ebp),%eax
080b6793 +0x573:  mov    %eax,%edx
080b6795 +0x575:  shr    $0x1f,%edx
080b6798 +0x578:  lea    (%edx,%eax,1),%eax
080b679b +0x57b:  sar    %eax
080b679d +0x57d:  cmp    -0x34(%ebp),%eax
080b67a0 +0x580:  setg   %al
080b67a3 +0x583:  test   %al,%al
080b67a5 +0x585:  jne    080b6755 <+0x535>
080b67a7 +0x587:  mov    -0x24(%ebp),%eax
080b67aa +0x58a:  mov    %eax,%edx
080b67ac +0x58c:  shr    $0x1f,%edx
080b67af +0x58f:  lea    (%edx,%eax,1),%eax
080b67b2 +0x592:  sar    %eax
080b67b4 +0x594:  lea    -0x1(%eax),%edx
080b67b7 +0x597:  mov    0x8(%ebp),%eax
080b67ba +0x59a:  add    $0x104,%edx
080b67c0 +0x5a0:  mov    0xc(%eax,%edx,4),%eax
080b67c4 +0x5a4:  mov    %eax,-0x14(%ebp)
080b67c7 +0x5a7:  mov    -0x24(%ebp),%eax
080b67ca +0x5aa:  mov    %eax,%edx
080b67cc +0x5ac:  shr    $0x1f,%edx
080b67cf +0x5af:  lea    (%edx,%eax,1),%eax
080b67d2 +0x5b2:  sar    %eax
080b67d4 +0x5b4:  mov    %eax,%edx
080b67d6 +0x5b6:  mov    %eax,%ecx
080b67d8 +0x5b8:  mov    0x8(%ebp),%eax
080b67db +0x5bb:  add    $0x104,%ecx
080b67e1 +0x5c1:  mov    0xc(%eax,%ecx,4),%ecx
080b67e5 +0x5c5:  mov    -0x14(%ebp),%eax
080b67e8 +0x5c8:  and    $0xff,%eax
080b67ed +0x5cd:  movzbl &_ZN9CRijndael4sm_SE(%eax),%eax
080b67f4 +0x5d4:  movsbl %al,%eax
080b67f7 +0x5d7:  movzbl %al,%ebx
080b67fa +0x5da:  mov    -0x14(%ebp),%eax
080b67fd +0x5dd:  sar    $0x8,%eax
080b6800 +0x5e0:  and    $0xff,%eax
080b6805 +0x5e5:  movzbl &_ZN9CRijndael4sm_SE(%eax),%eax
080b680c +0x5ec:  movsbl %al,%eax
080b680f +0x5ef:  shl    $0x8,%eax
080b6812 +0x5f2:  and    $0xffff,%eax
080b6817 +0x5f7:  xor    %eax,%ebx
080b6819 +0x5f9:  mov    -0x14(%ebp),%eax
080b681c +0x5fc:  sar    $0x10,%eax
080b681f +0x5ff:  and    $0xff,%eax
080b6824 +0x604:  movzbl &_ZN9CRijndael4sm_SE(%eax),%eax
080b682b +0x60b:  movsbl %al,%eax
080b682e +0x60e:  and    $0xff,%eax
080b6833 +0x613:  shl    $0x10,%eax
080b6836 +0x616:  xor    %eax,%ebx
080b6838 +0x618:  mov    -0x14(%ebp),%eax
080b683b +0x61b:  shr    $0x18,%eax
080b683e +0x61e:  movzbl &_ZN9CRijndael4sm_SE(%eax),%eax
080b6845 +0x625:  movsbl %al,%eax
080b6848 +0x628:  shl    $0x18,%eax
080b684b +0x62b:  xor    %ebx,%eax
080b684d +0x62d:  xor    %eax,%ecx
080b684f +0x62f:  mov    0x8(%ebp),%eax
080b6852 +0x632:  add    $0x104,%edx
080b6858 +0x638:  mov    %ecx,0xc(%eax,%edx,4)
080b685c +0x63c:  mov    -0x24(%ebp),%eax
080b685f +0x63f:  mov    %eax,%edx
080b6861 +0x641:  shr    $0x1f,%edx
080b6864 +0x644:  lea    (%edx,%eax,1),%eax
080b6867 +0x647:  sar    %eax
080b6869 +0x649:  mov    %eax,-0x30(%ebp)
080b686c +0x64c:  mov    -0x30(%ebp),%eax
080b686f +0x64f:  add    $0x1,%eax
080b6872 +0x652:  mov    %eax,-0x34(%ebp)
080b6875 +0x655:  jmp    080b68b2 <+0x692>
080b6877 +0x657:  mov    -0x34(%ebp),%eax
080b687a +0x65a:  mov    %eax,%edx
080b687c +0x65c:  mov    %eax,%ecx
080b687e +0x65e:  mov    0x8(%ebp),%eax
080b6881 +0x661:  add    $0x104,%ecx
080b6887 +0x667:  mov    0xc(%eax,%ecx,4),%ecx
080b688b +0x66b:  mov    -0x30(%ebp),%ebx
080b688e +0x66e:  mov    0x8(%ebp),%eax
080b6891 +0x671:  add    $0x104,%ebx
080b6897 +0x677:  mov    0xc(%eax,%ebx,4),%eax
080b689b +0x67b:  xor    %eax,%ecx
080b689d +0x67d:  mov    0x8(%ebp),%eax
080b68a0 +0x680:  add    $0x104,%edx
080b68a6 +0x686:  mov    %ecx,0xc(%eax,%edx,4)
080b68aa +0x68a:  addl   $0x1,-0x34(%ebp)
080b68ae +0x68e:  addl   $0x1,-0x30(%ebp)
080b68b2 +0x692:  mov    -0x34(%ebp),%eax
080b68b5 +0x695:  cmp    -0x24(%ebp),%eax
080b68b8 +0x698:  setl   %al
080b68bb +0x69b:  test   %al,%al
080b68bd +0x69d:  jne    080b6877 <+0x657>
080b68bf +0x69f:  movl   $0x0,-0x30(%ebp)
080b68c6 +0x6a6:  jmp    080b6952 <+0x732>
080b68cb +0x6ab:  mov    -0x18(%ebp),%eax
080b68ce +0x6ae:  mov    %eax,%edx
080b68d0 +0x6b0:  sar    $0x1f,%edx
080b68d3 +0x6b3:  idivl  -0x2c(%ebp)
080b68d6 +0x6b6:  mov    %eax,%ebx
080b68d8 +0x6b8:  mov    -0x18(%ebp),%eax
080b68db +0x6bb:  mov    %eax,%edx
080b68dd +0x6bd:  sar    $0x1f,%edx
080b68e0 +0x6c0:  idivl  -0x2c(%ebp)
080b68e3 +0x6c3:  mov    %edx,%ecx
080b68e5 +0x6c5:  mov    -0x30(%ebp),%edx
080b68e8 +0x6c8:  mov    0x8(%ebp),%eax
080b68eb +0x6cb:  add    $0x104,%edx
080b68f1 +0x6d1:  mov    0xc(%eax,%edx,4),%edx
080b68f5 +0x6d5:  mov    0x8(%ebp),%eax
080b68f8 +0x6d8:  shl    $0x3,%ebx
080b68fb +0x6db:  lea    (%ebx,%ecx,1),%ecx
080b68fe +0x6de:  add    $0xc,%ecx
080b6901 +0x6e1:  mov    %edx,0x8(%eax,%ecx,4)
080b6905 +0x6e5:  mov    0x8(%ebp),%eax
080b6908 +0x6e8:  mov    0x3d8(%eax),%ecx
080b690e +0x6ee:  mov    -0x18(%ebp),%eax
080b6911 +0x6f1:  mov    %eax,%edx
080b6913 +0x6f3:  sar    $0x1f,%edx
080b6916 +0x6f6:  idivl  -0x2c(%ebp)
080b6919 +0x6f9:  mov    %ecx,%ebx
080b691b +0x6fb:  sub    %eax,%ebx
080b691d +0x6fd:  mov    -0x18(%ebp),%eax
080b6920 +0x700:  mov    %eax,%edx
080b6922 +0x702:  sar    $0x1f,%edx
080b6925 +0x705:  idivl  -0x2c(%ebp)
080b6928 +0x708:  mov    %edx,%ecx
080b692a +0x70a:  mov    -0x30(%ebp),%edx
080b692d +0x70d:  mov    0x8(%ebp),%eax
080b6930 +0x710:  add    $0x104,%edx
080b6936 +0x716:  mov    0xc(%eax,%edx,4),%edx
080b693a +0x71a:  mov    0x8(%ebp),%eax
080b693d +0x71d:  shl    $0x3,%ebx
080b6940 +0x720:  lea    (%ebx,%ecx,1),%ecx
080b6943 +0x723:  add    $0x7c,%ecx
080b6946 +0x726:  mov    %edx,0x8(%eax,%ecx,4)
080b694a +0x72a:  addl   $0x1,-0x30(%ebp)
080b694e +0x72e:  addl   $0x1,-0x18(%ebp)
080b6952 +0x732:  mov    -0x30(%ebp),%eax
080b6955 +0x735:  cmp    -0x24(%ebp),%eax
080b6958 +0x738:  jge    080b6969 <+0x749>
080b695a +0x73a:  mov    -0x18(%ebp),%eax
080b695d +0x73d:  cmp    -0x28(%ebp),%eax
080b6960 +0x740:  jge    080b6969 <+0x749>
080b6962 +0x742:  mov    $0x1,%eax
080b6967 +0x747:  jmp    080b696e <+0x74e>
080b6969 +0x749:  mov    $0x0,%eax
080b696e +0x74e:  test   %al,%al
080b6970 +0x750:  jne    080b68cb <+0x6ab>
080b6976 +0x756:  mov    -0x18(%ebp),%eax
080b6979 +0x759:  cmp    -0x28(%ebp),%eax
080b697c +0x75c:  setl   %al
080b697f +0x75f:  test   %al,%al
080b6981 +0x761:  jne    080b6636 <+0x416>
080b6987 +0x767:  movl   $0x1,-0xc(%ebp)
080b698e +0x76e:  jmp    080b6a2a <+0x80a>
080b6993 +0x773:  movl   $0x0,-0x30(%ebp)
080b699a +0x77a:  jmp    080b6a15 <+0x7f5>
080b699c +0x77c:  mov    -0xc(%ebp),%ecx
080b699f +0x77f:  mov    -0x30(%ebp),%edx
080b69a2 +0x782:  mov    0x8(%ebp),%eax
080b69a5 +0x785:  shl    $0x3,%ecx
080b69a8 +0x788:  lea    (%ecx,%edx,1),%edx
080b69ab +0x78b:  add    $0x7c,%edx
080b69ae +0x78e:  mov    0x8(%eax,%edx,4),%eax
080b69b2 +0x792:  mov    %eax,-0x14(%ebp)
080b69b5 +0x795:  mov    -0xc(%ebp),%ebx
080b69b8 +0x798:  mov    -0x30(%ebp),%edx
080b69bb +0x79b:  mov    -0x14(%ebp),%eax
080b69be +0x79e:  shr    $0x18,%eax
080b69c1 +0x7a1:  mov    &_ZN9CRijndael5sm_U1E(,%eax,4),%ecx
080b69c8 +0x7a8:  mov    -0x14(%ebp),%eax
080b69cb +0x7ab:  sar    $0x10,%eax
080b69ce +0x7ae:  and    $0xff,%eax
080b69d3 +0x7b3:  mov    &_ZN9CRijndael5sm_U2E(,%eax,4),%eax
080b69da +0x7ba:  xor    %eax,%ecx
080b69dc +0x7bc:  mov    -0x14(%ebp),%eax
080b69df +0x7bf:  sar    $0x8,%eax
080b69e2 +0x7c2:  and    $0xff,%eax
080b69e7 +0x7c7:  mov    &_ZN9CRijndael5sm_U3E(,%eax,4),%eax
080b69ee +0x7ce:  xor    %eax,%ecx
080b69f0 +0x7d0:  mov    -0x14(%ebp),%eax
080b69f3 +0x7d3:  and    $0xff,%eax
080b69f8 +0x7d8:  mov    &_ZN9CRijndael5sm_U4E(,%eax,4),%eax
080b69ff +0x7df:  xor    %eax,%ecx
080b6a01 +0x7e1:  mov    0x8(%ebp),%eax
080b6a04 +0x7e4:  shl    $0x3,%ebx
080b6a07 +0x7e7:  lea    (%ebx,%edx,1),%edx
080b6a0a +0x7ea:  add    $0x7c,%edx
080b6a0d +0x7ed:  mov    %ecx,0x8(%eax,%edx,4)
080b6a11 +0x7f1:  addl   $0x1,-0x30(%ebp)
080b6a15 +0x7f5:  mov    -0x30(%ebp),%eax
080b6a18 +0x7f8:  cmp    -0x2c(%ebp),%eax
080b6a1b +0x7fb:  setl   %al
080b6a1e +0x7fe:  test   %al,%al
080b6a20 +0x800:  jne    080b699c <+0x77c>
080b6a26 +0x806:  addl   $0x1,-0xc(%ebp)
080b6a2a +0x80a:  mov    0x8(%ebp),%eax
080b6a2d +0x80d:  mov    0x3d8(%eax),%eax
080b6a33 +0x813:  cmp    -0xc(%ebp),%eax
080b6a36 +0x816:  setg   %al
080b6a39 +0x819:  test   %al,%al
080b6a3b +0x81b:  jne    080b6993 <+0x773>
080b6a41 +0x821:  mov    0x8(%ebp),%eax
080b6a44 +0x824:  movb   $0x1,0x4(%eax)
080b6a48 +0x828:  mov    $0x6fffffff,%eax
080b6a4d +0x82d:  add    $0x64,%esp
080b6a50 +0x830:  pop    %ebx
080b6a51 +0x831:  pop    %ebp
080b6a52 +0x832:  ret
080b6a53 +0x833:  nop
```

## 反编译 C

```c
// CRijndael::Initialize @ 0x80b6220

/* CRijndael::Initialize(char const*, int, char const*, int, int, int, int) */

undefined4 __thiscall
CRijndael::Initialize
          (CRijndael *this,char *param_1,int param_2,char *param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte local_58 [32];
  int local_38;
  int local_34;
  CRijndael *local_24;
  byte *local_20;
  int local_1c;
  int local_14;
  int local_10;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0x70000001;
  }
  else if (param_2 < 1) {
    uVar4 = 0x70000002;
  }
  else if (((param_4 == 0x10) || (param_4 == 0x18)) || (param_4 == 0x20)) {
    if (((param_5 == 0x10) || (param_5 == 0x18)) || (param_5 == 0x20)) {
      if ((param_6 < 0) || (2 < param_6)) {
        uVar4 = 0x70000003;
      }
      else if ((param_7 < 0) || (2 < param_7)) {
        uVar4 = 0x70000004;
      }
      else {
        *(int *)(this + 0x10) = param_6;
        *(int *)(this + 0x14) = param_7;
        local_34 = 0;
        for (local_38 = 0; local_38 < param_4; local_38 = local_38 + 1) {
          local_58[local_38] = param_1[local_34];
          local_34 = (local_34 + 1) % param_2;
        }
        *(int *)(this + 8) = param_5;
        memcpy(this + 0x3dc,param_3,*(size_t *)(this + 8));
        memcpy(this + 0x3fc,this + 0x3dc,*(size_t *)(this + 8));
        *(int *)(this + 0xc) = param_4;
        memcpy(this + 0x18,local_58,*(size_t *)(this + 0xc));
        if (*(int *)(this + 0xc) == 0x10) {
          if (*(int *)(this + 8) == 0x10) {
            uVar4 = 10;
          }
          else if (*(int *)(this + 8) == 0x18) {
            uVar4 = 0xc;
          }
          else {
            uVar4 = 0xe;
          }
          *(undefined4 *)(this + 0x3d8) = uVar4;
        }
        else if (*(int *)(this + 0xc) == 0x18) {
          if (*(int *)(this + 8) == 0x20) {
            uVar4 = 0xe;
          }
          else {
            uVar4 = 0xc;
          }
          *(undefined4 *)(this + 0x3d8) = uVar4;
        }
        else {
          *(undefined4 *)(this + 0x3d8) = 0xe;
        }
        iVar5 = (int)(((uint)(*(int *)(this + 8) >> 0x1f) >> 0x1e) + *(int *)(this + 8)) >> 2;
        for (local_38 = 0; local_38 <= *(int *)(this + 0x3d8); local_38 = local_38 + 1) {
          for (local_34 = 0; local_34 < iVar5; local_34 = local_34 + 1) {
            *(undefined4 *)(this + (local_38 * 8 + local_34 + 0xc) * 4 + 8) = 0;
          }
        }
        for (local_38 = 0; local_38 <= *(int *)(this + 0x3d8); local_38 = local_38 + 1) {
          for (local_34 = 0; local_34 < iVar5; local_34 = local_34 + 1) {
            *(undefined4 *)(this + (local_38 * 8 + local_34 + 0x7c) * 4 + 8) = 0;
          }
        }
        iVar6 = (*(int *)(this + 0x3d8) + 1) * iVar5;
        iVar7 = (int)(((uint)(*(int *)(this + 0xc) >> 0x1f) >> 0x1e) + *(int *)(this + 0xc)) >> 2;
        local_24 = this + 0x41c;
        local_20 = local_58;
        for (local_38 = 0; local_38 < iVar7; local_38 = local_38 + 1) {
          *(uint *)local_24 = (uint)*local_20 << 0x18;
          *(uint *)local_24 = *(uint *)local_24 | (uint)local_20[1] << 0x10;
          *(uint *)local_24 = *(uint *)local_24 | (uint)local_20[2] << 8;
          *(uint *)local_24 = (uint)local_20[3] | *(uint *)local_24;
          local_24 = local_24 + 4;
          local_20 = local_20 + 4;
        }
        local_1c = 0;
        local_34 = 0;
        while( true ) {
          if ((local_34 < iVar7) && (local_1c < iVar6)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) break;
          *(undefined4 *)(this + ((local_1c / iVar5) * 8 + local_1c % iVar5 + 0xc) * 4 + 8) =
               *(undefined4 *)(this + (local_34 + 0x104) * 4 + 0xc);
          *(undefined4 *)
           (this + ((*(int *)(this + 0x3d8) - local_1c / iVar5) * 8 + local_1c % iVar5 + 0x7c) * 4 +
                   8) = *(undefined4 *)(this + (local_34 + 0x104) * 4 + 0xc);
          local_34 = local_34 + 1;
          local_1c = local_1c + 1;
        }
        local_14 = 0;
        while (local_1c < iVar6) {
          uVar1 = *(uint *)(this + (iVar7 + 0x103) * 4 + 0xc);
          *(uint *)(this + 0x41c) =
               *(uint *)(this + 0x41c) ^
               (int)(char)sm_rcon[local_14] << 0x18 ^
               (int)(char)sm_S[(int)uVar1 >> 0x10 & 0xff] << 0x18 ^
               (uint)(byte)sm_S[(int)uVar1 >> 8 & 0xff] << 0x10 ^
               (uint)(byte)sm_S[uVar1 & 0xff] << 8 ^ (uint)(byte)sm_S[uVar1 >> 0x18];
          local_14 = local_14 + 1;
          if (iVar7 == 8) {
            local_34 = 0;
            for (local_38 = 1; local_38 < 4; local_38 = local_38 + 1) {
              *(uint *)(this + (local_38 + 0x104) * 4 + 0xc) =
                   *(uint *)(this + (local_38 + 0x104) * 4 + 0xc) ^
                   *(uint *)(this + (local_34 + 0x104) * 4 + 0xc);
              local_34 = local_34 + 1;
            }
            uVar1 = *(uint *)(this + 0x428);
            *(uint *)(this + 0x42c) =
                 *(uint *)(this + 0x42c) ^
                 CONCAT13(sm_S[uVar1 >> 0x18],
                          CONCAT12(sm_S[(int)uVar1 >> 0x10 & 0xff],
                                   CONCAT11(sm_S[(int)uVar1 >> 8 & 0xff],sm_S[uVar1 & 0xff])));
            local_34 = 4;
            iVar3 = local_34;
            while (local_38 = iVar3 + 1, local_38 < 8) {
              *(uint *)(this + (iVar3 + 0x105) * 4 + 0xc) =
                   *(uint *)(this + (iVar3 + 0x105) * 4 + 0xc) ^
                   *(uint *)(this + (local_34 + 0x104) * 4 + 0xc);
              local_34 = local_34 + 1;
              iVar3 = local_38;
            }
          }
          else {
            local_34 = 0;
            for (local_38 = 1; local_38 < iVar7; local_38 = local_38 + 1) {
              *(uint *)(this + (local_38 + 0x104) * 4 + 0xc) =
                   *(uint *)(this + (local_38 + 0x104) * 4 + 0xc) ^
                   *(uint *)(this + (local_34 + 0x104) * 4 + 0xc);
              local_34 = local_34 + 1;
            }
          }
          local_34 = 0;
          while( true ) {
            if ((local_34 < iVar7) && (local_1c < iVar6)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (!bVar2) break;
            *(undefined4 *)(this + ((local_1c / iVar5) * 8 + local_1c % iVar5 + 0xc) * 4 + 8) =
                 *(undefined4 *)(this + (local_34 + 0x104) * 4 + 0xc);
            *(undefined4 *)
             (this + ((*(int *)(this + 0x3d8) - local_1c / iVar5) * 8 + local_1c % iVar5 + 0x7c) * 4
                     + 8) = *(undefined4 *)(this + (local_34 + 0x104) * 4 + 0xc);
            local_34 = local_34 + 1;
            local_1c = local_1c + 1;
          }
        }
        for (local_10 = 1; local_10 < *(int *)(this + 0x3d8); local_10 = local_10 + 1) {
          for (local_34 = 0; local_34 < iVar5; local_34 = local_34 + 1) {
            uVar1 = *(uint *)(this + (local_10 * 8 + local_34 + 0x7c) * 4 + 8);
            *(uint *)(this + (local_10 * 8 + local_34 + 0x7c) * 4 + 8) =
                 *(uint *)(sm_U1 + (uVar1 >> 0x18) * 4) ^
                 *(uint *)(sm_U2 + ((int)uVar1 >> 0x10 & 0xffU) * 4) ^
                 *(uint *)(sm_U3 + ((int)uVar1 >> 8 & 0xffU) * 4) ^
                 *(uint *)(sm_U4 + (uVar1 & 0xff) * 4);
          }
        }
        this[4] = (CRijndael)0x1;
        uVar4 = 0x6fffffff;
      }
    }
    else {
      uVar4 = 0x70000006;
    }
  }
  else {
    uVar4 = 0x70000009;
  }
  return uVar4;
}
```
