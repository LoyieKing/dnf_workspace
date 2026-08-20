# Update

`_ZN8TaoCrypt3MD26UpdateEPKhj`

`TaoCrypt::MD2::Update(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD2` | `0x08765020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08765020  _ZN8TaoCrypt3MD26UpdateEPKhj
#           TaoCrypt::MD2::Update(unsigned char const*, unsigned int)
# range [0x08765020, 0x0876570f]
08765020 +0x000:  push   %ebp
08765021 +0x001:  mov    %esp,%ebp
08765023 +0x003:  push   %edi
08765024 +0x004:  push   %esi
08765025 +0x005:  push   %ebx
08765026 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0876502b +0x00b:  add    $0xc07b6d,%ebx
08765031 +0x011:  sub    $0x3c,%esp
08765034 +0x014:  mov    0x8(%ebp),%esi
08765037 +0x017:  mov    0x10(%ebp),%edi
0876503a +0x01a:  lea    0x0(%esi),%esi
08765040 +0x020:  test   %edi,%edi
08765042 +0x022:  je     08765708 <+0x6e8>
08765048 +0x028:  mov    0x28(%esi),%eax
0876504b +0x02b:  mov    $0x10,%edx
08765050 +0x030:  mov    0xc(%ebp),%ecx
08765053 +0x033:  sub    %eax,%edx
08765055 +0x035:  cmp    %edx,%edi
08765057 +0x037:  cmovbe %edi,%edx
0876505a +0x03a:  add    0x20(%esi),%eax
0876505d +0x03d:  mov    %edx,-0x1c(%ebp)
08765060 +0x040:  mov    %edx,0x8(%esp)
08765064 +0x044:  mov    %ecx,0x4(%esp)
08765068 +0x048:  mov    %eax,(%esp)
0876506b +0x04b:  call   0807d8a0 <_init+0x198>
08765070 +0x050:  mov    -0x1c(%ebp),%edx
08765073 +0x053:  mov    0x28(%esi),%eax
08765076 +0x056:  add    %edx,0xc(%ebp)
08765079 +0x059:  sub    %edx,%edi
0876507b +0x05b:  add    %edx,%eax
0876507d +0x05d:  cmp    $0x10,%eax
08765080 +0x060:  mov    %eax,0x28(%esi)
08765083 +0x063:  jne    08765040 <+0x20>
08765085 +0x065:  mov    0x8(%esi),%eax
08765088 +0x068:  movl   $0x0,0x28(%esi)
0876508f +0x06f:  mov    0x8(%esi),%edx
08765092 +0x072:  add    $0x10,%eax
08765095 +0x075:  mov    %eax,-0x2c(%ebp)
08765098 +0x078:  mov    0x20(%esi),%eax
0876509b +0x07b:  mov    (%eax),%ecx
0876509d +0x07d:  mov    %ecx,0x10(%edx)
087650a0 +0x080:  mov    0x4(%eax),%ecx
087650a3 +0x083:  mov    -0x2c(%ebp),%edx
087650a6 +0x086:  mov    %ecx,0x4(%edx)
087650a9 +0x089:  mov    0x8(%eax),%ecx
087650ac +0x08c:  mov    %ecx,0x8(%edx)
087650af +0x08f:  mov    0xc(%eax),%eax
087650b2 +0x092:  mov    %eax,0xc(%edx)
087650b5 +0x095:  mov    0x8(%esi),%edx
087650b8 +0x098:  mov    0x14(%esi),%eax
087650bb +0x09b:  movzbl 0x10(%edx),%ecx
087650bf +0x09f:  xor    (%edx),%cl
087650c1 +0x0a1:  movzbl 0xf(%eax),%eax
087650c5 +0x0a5:  mov    %cl,0x20(%edx)
087650c8 +0x0a8:  mov    0x20(%esi),%ecx
087650cb +0x0ab:  mov    0x14(%esi),%edx
087650ce +0x0ae:  xor    (%ecx),%al
087650d0 +0x0b0:  movzbl %al,%eax
087650d3 +0x0b3:  movzbl -0x667878(%ebx,%eax,1),%eax
087650db +0x0bb:  xor    (%edx),%al
087650dd +0x0bd:  mov    %al,(%edx)
087650df +0x0bf:  mov    0x8(%esi),%edx
087650e2 +0x0c2:  movzbl 0x1(%edx),%ecx
087650e6 +0x0c6:  xor    0x11(%edx),%cl
087650e9 +0x0c9:  mov    %cl,0x21(%edx)
087650ec +0x0cc:  mov    0x20(%esi),%ecx
087650ef +0x0cf:  mov    0x14(%esi),%edx
087650f2 +0x0d2:  xor    0x1(%ecx),%al
087650f5 +0x0d5:  movzbl %al,%eax
087650f8 +0x0d8:  movzbl -0x667878(%ebx,%eax,1),%eax
08765100 +0x0e0:  xor    0x1(%edx),%al
08765103 +0x0e3:  mov    %al,0x1(%edx)
08765106 +0x0e6:  mov    0x8(%esi),%edx
08765109 +0x0e9:  movzbl 0x2(%edx),%ecx
0876510d +0x0ed:  xor    0x12(%edx),%cl
08765110 +0x0f0:  mov    %cl,0x22(%edx)
08765113 +0x0f3:  mov    0x20(%esi),%ecx
08765116 +0x0f6:  mov    0x14(%esi),%edx
08765119 +0x0f9:  xor    0x2(%ecx),%al
0876511c +0x0fc:  movzbl %al,%eax
0876511f +0x0ff:  movzbl -0x667878(%ebx,%eax,1),%eax
08765127 +0x107:  xor    0x2(%edx),%al
0876512a +0x10a:  mov    %al,0x2(%edx)
0876512d +0x10d:  mov    0x8(%esi),%edx
08765130 +0x110:  movzbl 0x3(%edx),%ecx
08765134 +0x114:  xor    0x13(%edx),%cl
08765137 +0x117:  mov    %cl,0x23(%edx)
0876513a +0x11a:  mov    0x20(%esi),%ecx
0876513d +0x11d:  mov    0x14(%esi),%edx
08765140 +0x120:  xor    0x3(%ecx),%al
08765143 +0x123:  movzbl %al,%eax
08765146 +0x126:  movzbl -0x667878(%ebx,%eax,1),%eax
0876514e +0x12e:  xor    0x3(%edx),%al
08765151 +0x131:  mov    %al,0x3(%edx)
08765154 +0x134:  mov    0x8(%esi),%edx
08765157 +0x137:  movzbl 0x4(%edx),%ecx
0876515b +0x13b:  xor    0x14(%edx),%cl
0876515e +0x13e:  mov    %cl,0x24(%edx)
08765161 +0x141:  mov    0x20(%esi),%ecx
08765164 +0x144:  mov    0x14(%esi),%edx
08765167 +0x147:  xor    0x4(%ecx),%al
0876516a +0x14a:  movzbl %al,%eax
0876516d +0x14d:  movzbl -0x667878(%ebx,%eax,1),%eax
08765175 +0x155:  xor    0x4(%edx),%al
08765178 +0x158:  mov    %al,0x4(%edx)
0876517b +0x15b:  mov    0x8(%esi),%edx
0876517e +0x15e:  movzbl 0x5(%edx),%ecx
08765182 +0x162:  xor    0x15(%edx),%cl
08765185 +0x165:  mov    %cl,0x25(%edx)
08765188 +0x168:  mov    0x20(%esi),%ecx
0876518b +0x16b:  mov    0x14(%esi),%edx
0876518e +0x16e:  xor    0x5(%ecx),%al
08765191 +0x171:  movzbl %al,%eax
08765194 +0x174:  movzbl -0x667878(%ebx,%eax,1),%eax
0876519c +0x17c:  xor    0x5(%edx),%al
0876519f +0x17f:  mov    %al,0x5(%edx)
087651a2 +0x182:  mov    0x8(%esi),%edx
087651a5 +0x185:  movzbl 0x6(%edx),%ecx
087651a9 +0x189:  xor    0x16(%edx),%cl
087651ac +0x18c:  mov    %cl,0x26(%edx)
087651af +0x18f:  mov    0x20(%esi),%ecx
087651b2 +0x192:  mov    0x14(%esi),%edx
087651b5 +0x195:  xor    0x6(%ecx),%al
087651b8 +0x198:  movzbl %al,%eax
087651bb +0x19b:  movzbl -0x667878(%ebx,%eax,1),%eax
087651c3 +0x1a3:  xor    0x6(%edx),%al
087651c6 +0x1a6:  mov    %al,0x6(%edx)
087651c9 +0x1a9:  mov    0x8(%esi),%edx
087651cc +0x1ac:  movzbl 0x7(%edx),%ecx
087651d0 +0x1b0:  xor    0x17(%edx),%cl
087651d3 +0x1b3:  mov    %cl,0x27(%edx)
087651d6 +0x1b6:  mov    0x20(%esi),%ecx
087651d9 +0x1b9:  mov    0x14(%esi),%edx
087651dc +0x1bc:  xor    0x7(%ecx),%al
087651df +0x1bf:  movzbl %al,%eax
087651e2 +0x1c2:  movzbl -0x667878(%ebx,%eax,1),%eax
087651ea +0x1ca:  xor    0x7(%edx),%al
087651ed +0x1cd:  mov    %al,0x7(%edx)
087651f0 +0x1d0:  mov    0x8(%esi),%edx
087651f3 +0x1d3:  movzbl 0x8(%edx),%ecx
087651f7 +0x1d7:  xor    0x18(%edx),%cl
087651fa +0x1da:  mov    %cl,0x28(%edx)
087651fd +0x1dd:  mov    0x20(%esi),%ecx
08765200 +0x1e0:  mov    0x14(%esi),%edx
08765203 +0x1e3:  xor    0x8(%ecx),%al
08765206 +0x1e6:  movzbl %al,%eax
08765209 +0x1e9:  movzbl -0x667878(%ebx,%eax,1),%eax
08765211 +0x1f1:  xor    0x8(%edx),%al
08765214 +0x1f4:  mov    %al,0x8(%edx)
08765217 +0x1f7:  mov    0x8(%esi),%edx
0876521a +0x1fa:  movzbl 0x9(%edx),%ecx
0876521e +0x1fe:  xor    0x19(%edx),%cl
08765221 +0x201:  mov    %cl,0x29(%edx)
08765224 +0x204:  mov    0x20(%esi),%ecx
08765227 +0x207:  mov    0x14(%esi),%edx
0876522a +0x20a:  xor    0x9(%ecx),%al
0876522d +0x20d:  movzbl %al,%eax
08765230 +0x210:  movzbl -0x667878(%ebx,%eax,1),%eax
08765238 +0x218:  xor    0x9(%edx),%al
0876523b +0x21b:  mov    %al,0x9(%edx)
0876523e +0x21e:  mov    0x8(%esi),%edx
08765241 +0x221:  movzbl 0xa(%edx),%ecx
08765245 +0x225:  xor    0x1a(%edx),%cl
08765248 +0x228:  mov    %cl,0x2a(%edx)
0876524b +0x22b:  mov    0x20(%esi),%ecx
0876524e +0x22e:  mov    0x14(%esi),%edx
08765251 +0x231:  xor    0xa(%ecx),%al
08765254 +0x234:  movzbl %al,%eax
08765257 +0x237:  movzbl -0x667878(%ebx,%eax,1),%eax
0876525f +0x23f:  xor    0xa(%edx),%al
08765262 +0x242:  mov    %al,0xa(%edx)
08765265 +0x245:  mov    0x8(%esi),%edx
08765268 +0x248:  movzbl 0xb(%edx),%ecx
0876526c +0x24c:  xor    0x1b(%edx),%cl
0876526f +0x24f:  mov    %cl,0x2b(%edx)
08765272 +0x252:  mov    0x20(%esi),%ecx
08765275 +0x255:  mov    0x14(%esi),%edx
08765278 +0x258:  xor    0xb(%ecx),%al
0876527b +0x25b:  movzbl %al,%eax
0876527e +0x25e:  movzbl -0x667878(%ebx,%eax,1),%eax
08765286 +0x266:  xor    0xb(%edx),%al
08765289 +0x269:  mov    %al,0xb(%edx)
0876528c +0x26c:  mov    0x8(%esi),%edx
0876528f +0x26f:  movzbl 0xc(%edx),%ecx
08765293 +0x273:  xor    0x1c(%edx),%cl
08765296 +0x276:  mov    %cl,0x2c(%edx)
08765299 +0x279:  mov    0x20(%esi),%ecx
0876529c +0x27c:  mov    0x14(%esi),%edx
0876529f +0x27f:  xor    0xc(%ecx),%al
087652a2 +0x282:  movzbl %al,%eax
087652a5 +0x285:  movzbl -0x667878(%ebx,%eax,1),%eax
087652ad +0x28d:  xor    0xc(%edx),%al
087652b0 +0x290:  mov    %al,0xc(%edx)
087652b3 +0x293:  mov    0x8(%esi),%edx
087652b6 +0x296:  movzbl 0xd(%edx),%ecx
087652ba +0x29a:  xor    0x1d(%edx),%cl
087652bd +0x29d:  mov    %cl,0x2d(%edx)
087652c0 +0x2a0:  mov    0x20(%esi),%ecx
087652c3 +0x2a3:  mov    0x14(%esi),%edx
087652c6 +0x2a6:  xor    0xd(%ecx),%al
087652c9 +0x2a9:  movzbl %al,%eax
087652cc +0x2ac:  movzbl -0x667878(%ebx,%eax,1),%eax
087652d4 +0x2b4:  xor    0xd(%edx),%al
087652d7 +0x2b7:  mov    %al,0xd(%edx)
087652da +0x2ba:  mov    0x8(%esi),%edx
087652dd +0x2bd:  movzbl 0xe(%edx),%ecx
087652e1 +0x2c1:  xor    0x1e(%edx),%cl
087652e4 +0x2c4:  mov    %cl,0x2e(%edx)
087652e7 +0x2c7:  mov    0x20(%esi),%ecx
087652ea +0x2ca:  mov    0x14(%esi),%edx
087652ed +0x2cd:  xor    0xe(%ecx),%al
087652f0 +0x2d0:  movzbl %al,%eax
087652f3 +0x2d3:  movzbl -0x667878(%ebx,%eax,1),%eax
087652fb +0x2db:  xor    0xe(%edx),%al
087652fe +0x2de:  mov    %al,0xe(%edx)
08765301 +0x2e1:  mov    0x8(%esi),%edx
08765304 +0x2e4:  movzbl 0xf(%edx),%ecx
08765308 +0x2e8:  xor    0x1f(%edx),%cl
0876530b +0x2eb:  mov    %cl,0x2f(%edx)
0876530e +0x2ee:  mov    0x20(%esi),%ecx
08765311 +0x2f1:  mov    0x14(%esi),%edx
08765314 +0x2f4:  xor    0xf(%ecx),%al
08765317 +0x2f7:  movzbl %al,%eax
0876531a +0x2fa:  movzbl -0x667878(%ebx,%eax,1),%eax
08765322 +0x302:  xor    %al,0xf(%edx)
08765325 +0x305:  xor    %edx,%edx
08765327 +0x307:  xor    %eax,%eax
08765329 +0x309:  lea    0x0(%esi,%eiz,1),%esi
08765330 +0x310:  mov    0x8(%esi),%ecx
08765333 +0x313:  movzbl %al,%eax
08765336 +0x316:  movzbl -0x667878(%ebx,%eax,1),%eax
0876533e +0x31e:  xor    (%ecx),%al
08765340 +0x320:  mov    %al,(%ecx)
08765342 +0x322:  mov    0x8(%esi),%ecx
08765345 +0x325:  movzbl %al,%eax
08765348 +0x328:  movzbl -0x667878(%ebx,%eax,1),%eax
08765350 +0x330:  xor    0x1(%ecx),%al
08765353 +0x333:  mov    %al,0x1(%ecx)
08765356 +0x336:  mov    0x8(%esi),%ecx
08765359 +0x339:  movzbl %al,%eax
0876535c +0x33c:  movzbl -0x667878(%ebx,%eax,1),%eax
08765364 +0x344:  xor    0x2(%ecx),%al
08765367 +0x347:  mov    %al,0x2(%ecx)
0876536a +0x34a:  mov    0x8(%esi),%ecx
0876536d +0x34d:  movzbl %al,%eax
08765370 +0x350:  movzbl -0x667878(%ebx,%eax,1),%eax
08765378 +0x358:  xor    0x3(%ecx),%al
0876537b +0x35b:  mov    %al,0x3(%ecx)
0876537e +0x35e:  mov    0x8(%esi),%ecx
08765381 +0x361:  movzbl %al,%eax
08765384 +0x364:  movzbl -0x667878(%ebx,%eax,1),%eax
0876538c +0x36c:  xor    0x4(%ecx),%al
0876538f +0x36f:  mov    %al,0x4(%ecx)
08765392 +0x372:  mov    0x8(%esi),%ecx
08765395 +0x375:  movzbl %al,%eax
08765398 +0x378:  movzbl -0x667878(%ebx,%eax,1),%eax
087653a0 +0x380:  xor    0x5(%ecx),%al
087653a3 +0x383:  mov    %al,0x5(%ecx)
087653a6 +0x386:  mov    0x8(%esi),%ecx
087653a9 +0x389:  movzbl %al,%eax
087653ac +0x38c:  movzbl -0x667878(%ebx,%eax,1),%eax
087653b4 +0x394:  xor    0x6(%ecx),%al
087653b7 +0x397:  mov    %al,0x6(%ecx)
087653ba +0x39a:  mov    0x8(%esi),%ecx
087653bd +0x39d:  movzbl %al,%eax
087653c0 +0x3a0:  movzbl -0x667878(%ebx,%eax,1),%eax
087653c8 +0x3a8:  xor    0x7(%ecx),%al
087653cb +0x3ab:  mov    %al,0x7(%ecx)
087653ce +0x3ae:  mov    0x8(%esi),%ecx
087653d1 +0x3b1:  movzbl %al,%eax
087653d4 +0x3b4:  movzbl -0x667878(%ebx,%eax,1),%eax
087653dc +0x3bc:  xor    0x8(%ecx),%al
087653df +0x3bf:  mov    %al,0x8(%ecx)
087653e2 +0x3c2:  mov    0x8(%esi),%ecx
087653e5 +0x3c5:  movzbl %al,%eax
087653e8 +0x3c8:  movzbl -0x667878(%ebx,%eax,1),%eax
087653f0 +0x3d0:  xor    0x9(%ecx),%al
087653f3 +0x3d3:  mov    %al,0x9(%ecx)
087653f6 +0x3d6:  mov    0x8(%esi),%ecx
087653f9 +0x3d9:  movzbl %al,%eax
087653fc +0x3dc:  movzbl -0x667878(%ebx,%eax,1),%eax
08765404 +0x3e4:  xor    0xa(%ecx),%al
08765407 +0x3e7:  mov    %al,0xa(%ecx)
0876540a +0x3ea:  mov    0x8(%esi),%ecx
0876540d +0x3ed:  movzbl %al,%eax
08765410 +0x3f0:  movzbl -0x667878(%ebx,%eax,1),%eax
08765418 +0x3f8:  xor    0xb(%ecx),%al
0876541b +0x3fb:  mov    %al,0xb(%ecx)
0876541e +0x3fe:  mov    0x8(%esi),%ecx
08765421 +0x401:  movzbl %al,%eax
08765424 +0x404:  movzbl -0x667878(%ebx,%eax,1),%eax
0876542c +0x40c:  xor    0xc(%ecx),%al
0876542f +0x40f:  mov    %al,0xc(%ecx)
08765432 +0x412:  mov    0x8(%esi),%ecx
08765435 +0x415:  movzbl %al,%eax
08765438 +0x418:  movzbl -0x667878(%ebx,%eax,1),%eax
08765440 +0x420:  xor    0xd(%ecx),%al
08765443 +0x423:  mov    %al,0xd(%ecx)
08765446 +0x426:  mov    0x8(%esi),%ecx
08765449 +0x429:  movzbl %al,%eax
0876544c +0x42c:  movzbl -0x667878(%ebx,%eax,1),%eax
08765454 +0x434:  xor    0xe(%ecx),%al
08765457 +0x437:  mov    %al,0xe(%ecx)
0876545a +0x43a:  mov    0x8(%esi),%ecx
0876545d +0x43d:  movzbl %al,%eax
08765460 +0x440:  movzbl -0x667878(%ebx,%eax,1),%eax
08765468 +0x448:  xor    0xf(%ecx),%al
0876546b +0x44b:  mov    %al,0xf(%ecx)
0876546e +0x44e:  mov    0x8(%esi),%ecx
08765471 +0x451:  movzbl %al,%eax
08765474 +0x454:  movzbl -0x667878(%ebx,%eax,1),%eax
0876547c +0x45c:  xor    0x10(%ecx),%al
0876547f +0x45f:  mov    %al,0x10(%ecx)
08765482 +0x462:  mov    0x8(%esi),%ecx
08765485 +0x465:  movzbl %al,%eax
08765488 +0x468:  movzbl -0x667878(%ebx,%eax,1),%eax
08765490 +0x470:  xor    0x11(%ecx),%al
08765493 +0x473:  mov    %al,0x11(%ecx)
08765496 +0x476:  mov    0x8(%esi),%ecx
08765499 +0x479:  movzbl %al,%eax
0876549c +0x47c:  movzbl -0x667878(%ebx,%eax,1),%eax
087654a4 +0x484:  xor    0x12(%ecx),%al
087654a7 +0x487:  mov    %al,0x12(%ecx)
087654aa +0x48a:  mov    0x8(%esi),%ecx
087654ad +0x48d:  movzbl %al,%eax
087654b0 +0x490:  movzbl -0x667878(%ebx,%eax,1),%eax
087654b8 +0x498:  xor    0x13(%ecx),%al
087654bb +0x49b:  mov    %al,0x13(%ecx)
087654be +0x49e:  mov    0x8(%esi),%ecx
087654c1 +0x4a1:  movzbl %al,%eax
087654c4 +0x4a4:  movzbl -0x667878(%ebx,%eax,1),%eax
087654cc +0x4ac:  xor    0x14(%ecx),%al
087654cf +0x4af:  mov    %al,0x14(%ecx)
087654d2 +0x4b2:  mov    0x8(%esi),%ecx
087654d5 +0x4b5:  movzbl %al,%eax
087654d8 +0x4b8:  movzbl -0x667878(%ebx,%eax,1),%eax
087654e0 +0x4c0:  xor    0x15(%ecx),%al
087654e3 +0x4c3:  mov    %al,0x15(%ecx)
087654e6 +0x4c6:  mov    0x8(%esi),%ecx
087654e9 +0x4c9:  movzbl %al,%eax
087654ec +0x4cc:  movzbl -0x667878(%ebx,%eax,1),%eax
087654f4 +0x4d4:  xor    0x16(%ecx),%al
087654f7 +0x4d7:  mov    %al,0x16(%ecx)
087654fa +0x4da:  mov    0x8(%esi),%ecx
087654fd +0x4dd:  movzbl %al,%eax
08765500 +0x4e0:  movzbl -0x667878(%ebx,%eax,1),%eax
08765508 +0x4e8:  xor    0x17(%ecx),%al
0876550b +0x4eb:  mov    %al,0x17(%ecx)
0876550e +0x4ee:  mov    0x8(%esi),%ecx
08765511 +0x4f1:  movzbl %al,%eax
08765514 +0x4f4:  movzbl -0x667878(%ebx,%eax,1),%eax
0876551c +0x4fc:  xor    0x18(%ecx),%al
0876551f +0x4ff:  mov    %al,0x18(%ecx)
08765522 +0x502:  mov    0x8(%esi),%ecx
08765525 +0x505:  movzbl %al,%eax
08765528 +0x508:  movzbl -0x667878(%ebx,%eax,1),%eax
08765530 +0x510:  xor    0x19(%ecx),%al
08765533 +0x513:  mov    %al,0x19(%ecx)
08765536 +0x516:  mov    0x8(%esi),%ecx
08765539 +0x519:  movzbl %al,%eax
0876553c +0x51c:  movzbl -0x667878(%ebx,%eax,1),%eax
08765544 +0x524:  xor    0x1a(%ecx),%al
08765547 +0x527:  mov    %al,0x1a(%ecx)
0876554a +0x52a:  mov    0x8(%esi),%ecx
0876554d +0x52d:  movzbl %al,%eax
08765550 +0x530:  movzbl -0x667878(%ebx,%eax,1),%eax
08765558 +0x538:  xor    0x1b(%ecx),%al
0876555b +0x53b:  mov    %al,0x1b(%ecx)
0876555e +0x53e:  mov    0x8(%esi),%ecx
08765561 +0x541:  movzbl %al,%eax
08765564 +0x544:  movzbl -0x667878(%ebx,%eax,1),%eax
0876556c +0x54c:  xor    0x1c(%ecx),%al
0876556f +0x54f:  mov    %al,0x1c(%ecx)
08765572 +0x552:  mov    0x8(%esi),%ecx
08765575 +0x555:  movzbl %al,%eax
08765578 +0x558:  movzbl -0x667878(%ebx,%eax,1),%eax
08765580 +0x560:  xor    0x1d(%ecx),%al
08765583 +0x563:  mov    %al,0x1d(%ecx)
08765586 +0x566:  mov    0x8(%esi),%ecx
08765589 +0x569:  movzbl %al,%eax
0876558c +0x56c:  movzbl -0x667878(%ebx,%eax,1),%eax
08765594 +0x574:  xor    0x1e(%ecx),%al
08765597 +0x577:  mov    %al,0x1e(%ecx)
0876559a +0x57a:  mov    0x8(%esi),%ecx
0876559d +0x57d:  movzbl %al,%eax
087655a0 +0x580:  movzbl -0x667878(%ebx,%eax,1),%eax
087655a8 +0x588:  xor    0x1f(%ecx),%al
087655ab +0x58b:  mov    %al,0x1f(%ecx)
087655ae +0x58e:  mov    0x8(%esi),%ecx
087655b1 +0x591:  movzbl %al,%eax
087655b4 +0x594:  movzbl -0x667878(%ebx,%eax,1),%eax
087655bc +0x59c:  xor    0x20(%ecx),%al
087655bf +0x59f:  mov    %al,0x20(%ecx)
087655c2 +0x5a2:  mov    0x8(%esi),%ecx
087655c5 +0x5a5:  movzbl %al,%eax
087655c8 +0x5a8:  movzbl -0x667878(%ebx,%eax,1),%eax
087655d0 +0x5b0:  xor    0x21(%ecx),%al
087655d3 +0x5b3:  mov    %al,0x21(%ecx)
087655d6 +0x5b6:  mov    0x8(%esi),%ecx
087655d9 +0x5b9:  movzbl %al,%eax
087655dc +0x5bc:  movzbl -0x667878(%ebx,%eax,1),%eax
087655e4 +0x5c4:  xor    0x22(%ecx),%al
087655e7 +0x5c7:  mov    %al,0x22(%ecx)
087655ea +0x5ca:  mov    0x8(%esi),%ecx
087655ed +0x5cd:  movzbl %al,%eax
087655f0 +0x5d0:  movzbl -0x667878(%ebx,%eax,1),%eax
087655f8 +0x5d8:  xor    0x23(%ecx),%al
087655fb +0x5db:  mov    %al,0x23(%ecx)
087655fe +0x5de:  mov    0x8(%esi),%ecx
08765601 +0x5e1:  movzbl %al,%eax
08765604 +0x5e4:  movzbl -0x667878(%ebx,%eax,1),%eax
0876560c +0x5ec:  xor    0x24(%ecx),%al
0876560f +0x5ef:  mov    %al,0x24(%ecx)
08765612 +0x5f2:  mov    0x8(%esi),%ecx
08765615 +0x5f5:  movzbl %al,%eax
08765618 +0x5f8:  movzbl -0x667878(%ebx,%eax,1),%eax
08765620 +0x600:  xor    0x25(%ecx),%al
08765623 +0x603:  mov    %al,0x25(%ecx)
08765626 +0x606:  mov    0x8(%esi),%ecx
08765629 +0x609:  movzbl %al,%eax
0876562c +0x60c:  movzbl -0x667878(%ebx,%eax,1),%eax
08765634 +0x614:  xor    0x26(%ecx),%al
08765637 +0x617:  mov    %al,0x26(%ecx)
0876563a +0x61a:  mov    0x8(%esi),%ecx
0876563d +0x61d:  movzbl %al,%eax
08765640 +0x620:  movzbl -0x667878(%ebx,%eax,1),%eax
08765648 +0x628:  xor    0x27(%ecx),%al
0876564b +0x62b:  mov    %al,0x27(%ecx)
0876564e +0x62e:  mov    0x8(%esi),%ecx
08765651 +0x631:  movzbl %al,%eax
08765654 +0x634:  movzbl -0x667878(%ebx,%eax,1),%eax
0876565c +0x63c:  xor    0x28(%ecx),%al
0876565f +0x63f:  mov    %al,0x28(%ecx)
08765662 +0x642:  mov    0x8(%esi),%ecx
08765665 +0x645:  movzbl %al,%eax
08765668 +0x648:  movzbl -0x667878(%ebx,%eax,1),%eax
08765670 +0x650:  xor    0x29(%ecx),%al
08765673 +0x653:  mov    %al,0x29(%ecx)
08765676 +0x656:  mov    0x8(%esi),%ecx
08765679 +0x659:  movzbl %al,%eax
0876567c +0x65c:  movzbl -0x667878(%ebx,%eax,1),%eax
08765684 +0x664:  xor    0x2a(%ecx),%al
08765687 +0x667:  mov    %al,0x2a(%ecx)
0876568a +0x66a:  mov    0x8(%esi),%ecx
0876568d +0x66d:  movzbl %al,%eax
08765690 +0x670:  movzbl -0x667878(%ebx,%eax,1),%eax
08765698 +0x678:  xor    0x2b(%ecx),%al
0876569b +0x67b:  mov    %al,0x2b(%ecx)
0876569e +0x67e:  mov    0x8(%esi),%ecx
087656a1 +0x681:  movzbl %al,%eax
087656a4 +0x684:  movzbl -0x667878(%ebx,%eax,1),%eax
087656ac +0x68c:  xor    0x2c(%ecx),%al
087656af +0x68f:  mov    %al,0x2c(%ecx)
087656b2 +0x692:  mov    0x8(%esi),%ecx
087656b5 +0x695:  movzbl %al,%eax
087656b8 +0x698:  movzbl -0x667878(%ebx,%eax,1),%eax
087656c0 +0x6a0:  xor    0x2d(%ecx),%al
087656c3 +0x6a3:  mov    %al,0x2d(%ecx)
087656c6 +0x6a6:  mov    0x8(%esi),%ecx
087656c9 +0x6a9:  movzbl %al,%eax
087656cc +0x6ac:  movzbl -0x667878(%ebx,%eax,1),%eax
087656d4 +0x6b4:  xor    0x2e(%ecx),%al
087656d7 +0x6b7:  mov    %al,0x2e(%ecx)
087656da +0x6ba:  mov    0x8(%esi),%ecx
087656dd +0x6bd:  movzbl %al,%eax
087656e0 +0x6c0:  movzbl -0x667878(%ebx,%eax,1),%eax
087656e8 +0x6c8:  xor    0x2f(%ecx),%al
087656eb +0x6cb:  mov    %al,0x2f(%ecx)
087656ee +0x6ce:  add    %edx,%eax
087656f0 +0x6d0:  add    $0x1,%edx
087656f3 +0x6d3:  cmp    $0x12,%edx
087656f6 +0x6d6:  jne    08765330 <+0x310>
087656fc +0x6dc:  test   %edi,%edi
087656fe +0x6de:  jne    08765048 <+0x28>
08765704 +0x6e4:  lea    0x0(%esi,%eiz,1),%esi
08765708 +0x6e8:  add    $0x3c,%esp
0876570b +0x6eb:  pop    %ebx
0876570c +0x6ec:  pop    %esi
0876570d +0x6ed:  pop    %edi
0876570e +0x6ee:  pop    %ebp
0876570f +0x6ef:  ret
```

## 反编译 C

```c
// TaoCrypt::MD2::Update @ 0x8765020

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD2::Update(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::MD2::Update(MD2 *this,uchar *param_1,uint param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  do {
    if (param_2 == 0) {
      return;
    }
    while( true ) {
      uVar4 = 0x10 - *(int *)(this + 0x28);
      if (param_2 <= uVar4) {
        uVar4 = param_2;
      }
      memcpy((void *)(*(int *)(this + 0x28) + *(int *)(this + 0x20)),param_1,uVar4);
      iVar5 = *(int *)(this + 0x28);
      param_1 = param_1 + uVar4;
      param_2 = param_2 - uVar4;
      *(uint *)(this + 0x28) = iVar5 + uVar4;
      if (iVar5 + uVar4 != 0x10) break;
      iVar5 = *(int *)(this + 8);
      *(undefined4 *)(this + 0x28) = 0;
      puVar1 = *(undefined4 **)(this + 0x20);
      *(undefined4 *)(*(int *)(this + 8) + 0x10) = *puVar1;
      *(undefined4 *)(iVar5 + 0x14) = puVar1[1];
      *(undefined4 *)(iVar5 + 0x18) = puVar1[2];
      *(undefined4 *)(iVar5 + 0x1c) = puVar1[3];
      pbVar2 = *(byte **)(this + 8);
      bVar3 = *(byte *)(*(int *)(this + 0x14) + 0xf);
      pbVar2[0x20] = pbVar2[0x10] ^ *pbVar2;
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3 ^ **(byte **)(this + 0x20)] ^
              **(byte **)(this + 0x14);
      **(byte **)(this + 0x14) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x21) = *(byte *)(iVar5 + 1) ^ *(byte *)(iVar5 + 0x11);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 1)] ^ *(byte *)(*(int *)(this + 0x14) + 1);
      *(byte *)(*(int *)(this + 0x14) + 1) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x22) = *(byte *)(iVar5 + 2) ^ *(byte *)(iVar5 + 0x12);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 2)] ^ *(byte *)(*(int *)(this + 0x14) + 2);
      *(byte *)(*(int *)(this + 0x14) + 2) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x23) = *(byte *)(iVar5 + 3) ^ *(byte *)(iVar5 + 0x13);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 3)] ^ *(byte *)(*(int *)(this + 0x14) + 3);
      *(byte *)(*(int *)(this + 0x14) + 3) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x24) = *(byte *)(iVar5 + 4) ^ *(byte *)(iVar5 + 0x14);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 4)] ^ *(byte *)(*(int *)(this + 0x14) + 4);
      *(byte *)(*(int *)(this + 0x14) + 4) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x25) = *(byte *)(iVar5 + 5) ^ *(byte *)(iVar5 + 0x15);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 5)] ^ *(byte *)(*(int *)(this + 0x14) + 5);
      *(byte *)(*(int *)(this + 0x14) + 5) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x26) = *(byte *)(iVar5 + 6) ^ *(byte *)(iVar5 + 0x16);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 6)] ^ *(byte *)(*(int *)(this + 0x14) + 6);
      *(byte *)(*(int *)(this + 0x14) + 6) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x27) = *(byte *)(iVar5 + 7) ^ *(byte *)(iVar5 + 0x17);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 7)] ^ *(byte *)(*(int *)(this + 0x14) + 7);
      *(byte *)(*(int *)(this + 0x14) + 7) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x28) = *(byte *)(iVar5 + 8) ^ *(byte *)(iVar5 + 0x18);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 8)] ^ *(byte *)(*(int *)(this + 0x14) + 8);
      *(byte *)(*(int *)(this + 0x14) + 8) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x29) = *(byte *)(iVar5 + 9) ^ *(byte *)(iVar5 + 0x19);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 9)] ^ *(byte *)(*(int *)(this + 0x14) + 9);
      *(byte *)(*(int *)(this + 0x14) + 9) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x2a) = *(byte *)(iVar5 + 10) ^ *(byte *)(iVar5 + 0x1a);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 10)] ^
              *(byte *)(*(int *)(this + 0x14) + 10);
      *(byte *)(*(int *)(this + 0x14) + 10) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x2b) = *(byte *)(iVar5 + 0xb) ^ *(byte *)(iVar5 + 0x1b);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 0xb)] ^
              *(byte *)(*(int *)(this + 0x14) + 0xb);
      *(byte *)(*(int *)(this + 0x14) + 0xb) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x2c) = *(byte *)(iVar5 + 0xc) ^ *(byte *)(iVar5 + 0x1c);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 0xc)] ^
              *(byte *)(*(int *)(this + 0x14) + 0xc);
      *(byte *)(*(int *)(this + 0x14) + 0xc) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x2d) = *(byte *)(iVar5 + 0xd) ^ *(byte *)(iVar5 + 0x1d);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 0xd)] ^
              *(byte *)(*(int *)(this + 0x14) + 0xd);
      *(byte *)(*(int *)(this + 0x14) + 0xd) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x2e) = *(byte *)(iVar5 + 0xe) ^ *(byte *)(iVar5 + 0x1e);
      bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)
              [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 0xe)] ^
              *(byte *)(*(int *)(this + 0x14) + 0xe);
      *(byte *)(*(int *)(this + 0x14) + 0xe) = bVar3;
      iVar5 = *(int *)(this + 8);
      *(byte *)(iVar5 + 0x2f) = *(byte *)(iVar5 + 0xf) ^ *(byte *)(iVar5 + 0x1f);
      *(byte *)(*(int *)(this + 0x14) + 0xf) =
           *(byte *)(*(int *)(this + 0x14) + 0xf) ^
           (&Update(unsigned_char_const*,unsigned_int)::S)
           [bVar3 ^ *(byte *)(*(int *)(this + 0x20) + 0xf)];
      iVar5 = 0;
      uVar4 = 0;
      do {
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[uVar4 & 0xff] ^
                **(byte **)(this + 8);
        **(byte **)(this + 8) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 1);
        *(byte *)(*(int *)(this + 8) + 1) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 2);
        *(byte *)(*(int *)(this + 8) + 2) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 3);
        *(byte *)(*(int *)(this + 8) + 3) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 4);
        *(byte *)(*(int *)(this + 8) + 4) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 5);
        *(byte *)(*(int *)(this + 8) + 5) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 6);
        *(byte *)(*(int *)(this + 8) + 6) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 7);
        *(byte *)(*(int *)(this + 8) + 7) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 8);
        *(byte *)(*(int *)(this + 8) + 8) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 9);
        *(byte *)(*(int *)(this + 8) + 9) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 10);
        *(byte *)(*(int *)(this + 8) + 10) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0xb);
        *(byte *)(*(int *)(this + 8) + 0xb) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0xc);
        *(byte *)(*(int *)(this + 8) + 0xc) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0xd);
        *(byte *)(*(int *)(this + 8) + 0xd) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0xe);
        *(byte *)(*(int *)(this + 8) + 0xe) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0xf);
        *(byte *)(*(int *)(this + 8) + 0xf) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x10);
        *(byte *)(*(int *)(this + 8) + 0x10) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x11);
        *(byte *)(*(int *)(this + 8) + 0x11) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x12);
        *(byte *)(*(int *)(this + 8) + 0x12) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x13);
        *(byte *)(*(int *)(this + 8) + 0x13) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x14);
        *(byte *)(*(int *)(this + 8) + 0x14) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x15);
        *(byte *)(*(int *)(this + 8) + 0x15) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x16);
        *(byte *)(*(int *)(this + 8) + 0x16) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x17);
        *(byte *)(*(int *)(this + 8) + 0x17) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x18);
        *(byte *)(*(int *)(this + 8) + 0x18) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x19);
        *(byte *)(*(int *)(this + 8) + 0x19) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x1a);
        *(byte *)(*(int *)(this + 8) + 0x1a) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x1b);
        *(byte *)(*(int *)(this + 8) + 0x1b) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x1c);
        *(byte *)(*(int *)(this + 8) + 0x1c) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x1d);
        *(byte *)(*(int *)(this + 8) + 0x1d) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x1e);
        *(byte *)(*(int *)(this + 8) + 0x1e) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x1f);
        *(byte *)(*(int *)(this + 8) + 0x1f) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x20);
        *(byte *)(*(int *)(this + 8) + 0x20) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x21);
        *(byte *)(*(int *)(this + 8) + 0x21) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x22);
        *(byte *)(*(int *)(this + 8) + 0x22) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x23);
        *(byte *)(*(int *)(this + 8) + 0x23) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x24);
        *(byte *)(*(int *)(this + 8) + 0x24) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x25);
        *(byte *)(*(int *)(this + 8) + 0x25) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x26);
        *(byte *)(*(int *)(this + 8) + 0x26) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x27);
        *(byte *)(*(int *)(this + 8) + 0x27) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x28);
        *(byte *)(*(int *)(this + 8) + 0x28) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x29);
        *(byte *)(*(int *)(this + 8) + 0x29) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x2a);
        *(byte *)(*(int *)(this + 8) + 0x2a) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x2b);
        *(byte *)(*(int *)(this + 8) + 0x2b) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x2c);
        *(byte *)(*(int *)(this + 8) + 0x2c) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x2d);
        *(byte *)(*(int *)(this + 8) + 0x2d) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x2e);
        *(byte *)(*(int *)(this + 8) + 0x2e) = bVar3;
        bVar3 = (&Update(unsigned_char_const*,unsigned_int)::S)[bVar3] ^
                *(byte *)(*(int *)(this + 8) + 0x2f);
        *(byte *)(*(int *)(this + 8) + 0x2f) = bVar3;
        uVar4 = (uint)bVar3 + iVar5;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x12);
      if (param_2 == 0) {
        return;
      }
    }
  } while( true );
}
```
