# DefDecryptBlock

`_ZN9CRijndael15DefDecryptBlockEPKcPc`

`CRijndael::DefDecryptBlock(char const*, char*)`

| 类 | 地址 |
|---|---|
| `CRijndael` | `0x080b70e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b70e8  _ZN9CRijndael15DefDecryptBlockEPKcPc
#           CRijndael::DefDecryptBlock(char const*, char*)
# range [0x080b70e8, 0x080b7635]
080b70e8 +0x000:  push   %ebp
080b70e9 +0x001:  mov    %esp,%ebp
080b70eb +0x003:  sub    $0x30,%esp
080b70ee +0x006:  mov    0x8(%ebp),%eax
080b70f1 +0x009:  movzbl 0x4(%eax),%eax
080b70f5 +0x00d:  xor    $0x1,%eax
080b70f8 +0x010:  test   %al,%al
080b70fa +0x012:  je     080b7106 <+0x1e>
080b70fc +0x014:  mov    $0x70000005,%eax
080b7101 +0x019:  jmp    080b7633 <+0x54b>
080b7106 +0x01e:  mov    0x8(%ebp),%eax
080b7109 +0x021:  add    $0x1f8,%eax
080b710e +0x026:  mov    %eax,-0x2c(%ebp)
080b7111 +0x029:  mov    0xc(%ebp),%eax
080b7114 +0x02c:  movzbl (%eax),%eax
080b7117 +0x02f:  movzbl %al,%eax
080b711a +0x032:  shl    $0x18,%eax
080b711d +0x035:  mov    %eax,-0x28(%ebp)
080b7120 +0x038:  addl   $0x1,0xc(%ebp)
080b7124 +0x03c:  mov    0xc(%ebp),%eax
080b7127 +0x03f:  movzbl (%eax),%eax
080b712a +0x042:  movzbl %al,%eax
080b712d +0x045:  shl    $0x10,%eax
080b7130 +0x048:  or     %eax,-0x28(%ebp)
080b7133 +0x04b:  addl   $0x1,0xc(%ebp)
080b7137 +0x04f:  mov    0xc(%ebp),%eax
080b713a +0x052:  movzbl (%eax),%eax
080b713d +0x055:  movzbl %al,%eax
080b7140 +0x058:  shl    $0x8,%eax
080b7143 +0x05b:  or     %eax,-0x28(%ebp)
080b7146 +0x05e:  addl   $0x1,0xc(%ebp)
080b714a +0x062:  mov    0xc(%ebp),%eax
080b714d +0x065:  movzbl (%eax),%eax
080b7150 +0x068:  movzbl %al,%eax
080b7153 +0x06b:  or     %eax,-0x28(%ebp)
080b7156 +0x06e:  addl   $0x1,0xc(%ebp)
080b715a +0x072:  mov    -0x2c(%ebp),%eax
080b715d +0x075:  mov    (%eax),%eax
080b715f +0x077:  xor    %eax,-0x28(%ebp)
080b7162 +0x07a:  mov    0xc(%ebp),%eax
080b7165 +0x07d:  movzbl (%eax),%eax
080b7168 +0x080:  movzbl %al,%eax
080b716b +0x083:  shl    $0x18,%eax
080b716e +0x086:  mov    %eax,-0x24(%ebp)
080b7171 +0x089:  addl   $0x1,0xc(%ebp)
080b7175 +0x08d:  mov    0xc(%ebp),%eax
080b7178 +0x090:  movzbl (%eax),%eax
080b717b +0x093:  movzbl %al,%eax
080b717e +0x096:  shl    $0x10,%eax
080b7181 +0x099:  or     %eax,-0x24(%ebp)
080b7184 +0x09c:  addl   $0x1,0xc(%ebp)
080b7188 +0x0a0:  mov    0xc(%ebp),%eax
080b718b +0x0a3:  movzbl (%eax),%eax
080b718e +0x0a6:  movzbl %al,%eax
080b7191 +0x0a9:  shl    $0x8,%eax
080b7194 +0x0ac:  or     %eax,-0x24(%ebp)
080b7197 +0x0af:  addl   $0x1,0xc(%ebp)
080b719b +0x0b3:  mov    0xc(%ebp),%eax
080b719e +0x0b6:  movzbl (%eax),%eax
080b71a1 +0x0b9:  movzbl %al,%eax
080b71a4 +0x0bc:  or     %eax,-0x24(%ebp)
080b71a7 +0x0bf:  addl   $0x1,0xc(%ebp)
080b71ab +0x0c3:  mov    -0x2c(%ebp),%eax
080b71ae +0x0c6:  add    $0x4,%eax
080b71b1 +0x0c9:  mov    (%eax),%eax
080b71b3 +0x0cb:  xor    %eax,-0x24(%ebp)
080b71b6 +0x0ce:  mov    0xc(%ebp),%eax
080b71b9 +0x0d1:  movzbl (%eax),%eax
080b71bc +0x0d4:  movzbl %al,%eax
080b71bf +0x0d7:  shl    $0x18,%eax
080b71c2 +0x0da:  mov    %eax,-0x20(%ebp)
080b71c5 +0x0dd:  addl   $0x1,0xc(%ebp)
080b71c9 +0x0e1:  mov    0xc(%ebp),%eax
080b71cc +0x0e4:  movzbl (%eax),%eax
080b71cf +0x0e7:  movzbl %al,%eax
080b71d2 +0x0ea:  shl    $0x10,%eax
080b71d5 +0x0ed:  or     %eax,-0x20(%ebp)
080b71d8 +0x0f0:  addl   $0x1,0xc(%ebp)
080b71dc +0x0f4:  mov    0xc(%ebp),%eax
080b71df +0x0f7:  movzbl (%eax),%eax
080b71e2 +0x0fa:  movzbl %al,%eax
080b71e5 +0x0fd:  shl    $0x8,%eax
080b71e8 +0x100:  or     %eax,-0x20(%ebp)
080b71eb +0x103:  addl   $0x1,0xc(%ebp)
080b71ef +0x107:  mov    0xc(%ebp),%eax
080b71f2 +0x10a:  movzbl (%eax),%eax
080b71f5 +0x10d:  movzbl %al,%eax
080b71f8 +0x110:  or     %eax,-0x20(%ebp)
080b71fb +0x113:  addl   $0x1,0xc(%ebp)
080b71ff +0x117:  mov    -0x2c(%ebp),%eax
080b7202 +0x11a:  add    $0x8,%eax
080b7205 +0x11d:  mov    (%eax),%eax
080b7207 +0x11f:  xor    %eax,-0x20(%ebp)
080b720a +0x122:  mov    0xc(%ebp),%eax
080b720d +0x125:  movzbl (%eax),%eax
080b7210 +0x128:  movzbl %al,%eax
080b7213 +0x12b:  shl    $0x18,%eax
080b7216 +0x12e:  mov    %eax,-0x1c(%ebp)
080b7219 +0x131:  addl   $0x1,0xc(%ebp)
080b721d +0x135:  mov    0xc(%ebp),%eax
080b7220 +0x138:  movzbl (%eax),%eax
080b7223 +0x13b:  movzbl %al,%eax
080b7226 +0x13e:  shl    $0x10,%eax
080b7229 +0x141:  or     %eax,-0x1c(%ebp)
080b722c +0x144:  addl   $0x1,0xc(%ebp)
080b7230 +0x148:  mov    0xc(%ebp),%eax
080b7233 +0x14b:  movzbl (%eax),%eax
080b7236 +0x14e:  movzbl %al,%eax
080b7239 +0x151:  shl    $0x8,%eax
080b723c +0x154:  or     %eax,-0x1c(%ebp)
080b723f +0x157:  addl   $0x1,0xc(%ebp)
080b7243 +0x15b:  mov    0xc(%ebp),%eax
080b7246 +0x15e:  movzbl (%eax),%eax
080b7249 +0x161:  movzbl %al,%eax
080b724c +0x164:  or     %eax,-0x1c(%ebp)
080b724f +0x167:  addl   $0x1,0xc(%ebp)
080b7253 +0x16b:  mov    -0x2c(%ebp),%eax
080b7256 +0x16e:  add    $0xc,%eax
080b7259 +0x171:  mov    (%eax),%eax
080b725b +0x173:  xor    %eax,-0x1c(%ebp)
080b725e +0x176:  movl   $0x1,-0x4(%ebp)
080b7265 +0x17d:  jmp    080b73e3 <+0x2fb>
080b726a +0x182:  mov    -0x4(%ebp),%eax
080b726d +0x185:  shl    $0x5,%eax
080b7270 +0x188:  add    $0x1f0,%eax
080b7275 +0x18d:  add    0x8(%ebp),%eax
080b7278 +0x190:  add    $0x8,%eax
080b727b +0x193:  mov    %eax,-0x2c(%ebp)
080b727e +0x196:  mov    -0x28(%ebp),%eax
080b7281 +0x199:  shr    $0x18,%eax
080b7284 +0x19c:  mov    &_ZN9CRijndael5sm_T5E(,%eax,4),%edx
080b728b +0x1a3:  mov    -0x1c(%ebp),%eax
080b728e +0x1a6:  sar    $0x10,%eax
080b7291 +0x1a9:  and    $0xff,%eax
080b7296 +0x1ae:  mov    &_ZN9CRijndael5sm_T6E(,%eax,4),%eax
080b729d +0x1b5:  xor    %eax,%edx
080b729f +0x1b7:  mov    -0x20(%ebp),%eax
080b72a2 +0x1ba:  sar    $0x8,%eax
080b72a5 +0x1bd:  and    $0xff,%eax
080b72aa +0x1c2:  mov    &_ZN9CRijndael5sm_T7E(,%eax,4),%eax
080b72b1 +0x1c9:  xor    %eax,%edx
080b72b3 +0x1cb:  mov    -0x24(%ebp),%eax
080b72b6 +0x1ce:  and    $0xff,%eax
080b72bb +0x1d3:  mov    &_ZN9CRijndael5sm_T8E(,%eax,4),%eax
080b72c2 +0x1da:  xor    %eax,%edx
080b72c4 +0x1dc:  mov    -0x2c(%ebp),%eax
080b72c7 +0x1df:  mov    (%eax),%eax
080b72c9 +0x1e1:  xor    %edx,%eax
080b72cb +0x1e3:  mov    %eax,-0x18(%ebp)
080b72ce +0x1e6:  mov    -0x24(%ebp),%eax
080b72d1 +0x1e9:  shr    $0x18,%eax
080b72d4 +0x1ec:  mov    &_ZN9CRijndael5sm_T5E(,%eax,4),%edx
080b72db +0x1f3:  mov    -0x28(%ebp),%eax
080b72de +0x1f6:  sar    $0x10,%eax
080b72e1 +0x1f9:  and    $0xff,%eax
080b72e6 +0x1fe:  mov    &_ZN9CRijndael5sm_T6E(,%eax,4),%eax
080b72ed +0x205:  xor    %eax,%edx
080b72ef +0x207:  mov    -0x1c(%ebp),%eax
080b72f2 +0x20a:  sar    $0x8,%eax
080b72f5 +0x20d:  and    $0xff,%eax
080b72fa +0x212:  mov    &_ZN9CRijndael5sm_T7E(,%eax,4),%eax
080b7301 +0x219:  xor    %eax,%edx
080b7303 +0x21b:  mov    -0x20(%ebp),%eax
080b7306 +0x21e:  and    $0xff,%eax
080b730b +0x223:  mov    &_ZN9CRijndael5sm_T8E(,%eax,4),%eax
080b7312 +0x22a:  xor    %eax,%edx
080b7314 +0x22c:  mov    -0x2c(%ebp),%eax
080b7317 +0x22f:  add    $0x4,%eax
080b731a +0x232:  mov    (%eax),%eax
080b731c +0x234:  xor    %edx,%eax
080b731e +0x236:  mov    %eax,-0x14(%ebp)
080b7321 +0x239:  mov    -0x20(%ebp),%eax
080b7324 +0x23c:  shr    $0x18,%eax
080b7327 +0x23f:  mov    &_ZN9CRijndael5sm_T5E(,%eax,4),%edx
080b732e +0x246:  mov    -0x24(%ebp),%eax
080b7331 +0x249:  sar    $0x10,%eax
080b7334 +0x24c:  and    $0xff,%eax
080b7339 +0x251:  mov    &_ZN9CRijndael5sm_T6E(,%eax,4),%eax
080b7340 +0x258:  xor    %eax,%edx
080b7342 +0x25a:  mov    -0x28(%ebp),%eax
080b7345 +0x25d:  sar    $0x8,%eax
080b7348 +0x260:  and    $0xff,%eax
080b734d +0x265:  mov    &_ZN9CRijndael5sm_T7E(,%eax,4),%eax
080b7354 +0x26c:  xor    %eax,%edx
080b7356 +0x26e:  mov    -0x1c(%ebp),%eax
080b7359 +0x271:  and    $0xff,%eax
080b735e +0x276:  mov    &_ZN9CRijndael5sm_T8E(,%eax,4),%eax
080b7365 +0x27d:  xor    %eax,%edx
080b7367 +0x27f:  mov    -0x2c(%ebp),%eax
080b736a +0x282:  add    $0x8,%eax
080b736d +0x285:  mov    (%eax),%eax
080b736f +0x287:  xor    %edx,%eax
080b7371 +0x289:  mov    %eax,-0x10(%ebp)
080b7374 +0x28c:  mov    -0x1c(%ebp),%eax
080b7377 +0x28f:  shr    $0x18,%eax
080b737a +0x292:  mov    &_ZN9CRijndael5sm_T5E(,%eax,4),%edx
080b7381 +0x299:  mov    -0x20(%ebp),%eax
080b7384 +0x29c:  sar    $0x10,%eax
080b7387 +0x29f:  and    $0xff,%eax
080b738c +0x2a4:  mov    &_ZN9CRijndael5sm_T6E(,%eax,4),%eax
080b7393 +0x2ab:  xor    %eax,%edx
080b7395 +0x2ad:  mov    -0x24(%ebp),%eax
080b7398 +0x2b0:  sar    $0x8,%eax
080b739b +0x2b3:  and    $0xff,%eax
080b73a0 +0x2b8:  mov    &_ZN9CRijndael5sm_T7E(,%eax,4),%eax
080b73a7 +0x2bf:  xor    %eax,%edx
080b73a9 +0x2c1:  mov    -0x28(%ebp),%eax
080b73ac +0x2c4:  and    $0xff,%eax
080b73b1 +0x2c9:  mov    &_ZN9CRijndael5sm_T8E(,%eax,4),%eax
080b73b8 +0x2d0:  xor    %eax,%edx
080b73ba +0x2d2:  mov    -0x2c(%ebp),%eax
080b73bd +0x2d5:  add    $0xc,%eax
080b73c0 +0x2d8:  mov    (%eax),%eax
080b73c2 +0x2da:  xor    %edx,%eax
080b73c4 +0x2dc:  mov    %eax,-0xc(%ebp)
080b73c7 +0x2df:  mov    -0x18(%ebp),%eax
080b73ca +0x2e2:  mov    %eax,-0x28(%ebp)
080b73cd +0x2e5:  mov    -0x14(%ebp),%eax
080b73d0 +0x2e8:  mov    %eax,-0x24(%ebp)
080b73d3 +0x2eb:  mov    -0x10(%ebp),%eax
080b73d6 +0x2ee:  mov    %eax,-0x20(%ebp)
080b73d9 +0x2f1:  mov    -0xc(%ebp),%eax
080b73dc +0x2f4:  mov    %eax,-0x1c(%ebp)
080b73df +0x2f7:  addl   $0x1,-0x4(%ebp)
080b73e3 +0x2fb:  mov    0x8(%ebp),%eax
080b73e6 +0x2fe:  mov    0x3d8(%eax),%eax
080b73ec +0x304:  cmp    -0x4(%ebp),%eax
080b73ef +0x307:  setg   %al
080b73f2 +0x30a:  test   %al,%al
080b73f4 +0x30c:  jne    080b726a <+0x182>
080b73fa +0x312:  mov    0x8(%ebp),%eax
080b73fd +0x315:  mov    0x3d8(%eax),%eax
080b7403 +0x31b:  shl    $0x5,%eax
080b7406 +0x31e:  add    $0x1f0,%eax
080b740b +0x323:  add    0x8(%ebp),%eax
080b740e +0x326:  add    $0x8,%eax
080b7411 +0x329:  mov    %eax,-0x2c(%ebp)
080b7414 +0x32c:  mov    -0x2c(%ebp),%eax
080b7417 +0x32f:  mov    (%eax),%eax
080b7419 +0x331:  mov    %eax,-0x8(%ebp)
080b741c +0x334:  mov    -0x28(%ebp),%eax
080b741f +0x337:  shr    $0x18,%eax
080b7422 +0x33a:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%edx
080b7429 +0x341:  mov    -0x8(%ebp),%eax
080b742c +0x344:  sar    $0x18,%eax
080b742f +0x347:  xor    %eax,%edx
080b7431 +0x349:  mov    0x10(%ebp),%eax
080b7434 +0x34c:  mov    %dl,(%eax)
080b7436 +0x34e:  mov    0x10(%ebp),%eax
080b7439 +0x351:  lea    0x1(%eax),%edx
080b743c +0x354:  mov    -0x1c(%ebp),%eax
080b743f +0x357:  sar    $0x10,%eax
080b7442 +0x35a:  and    $0xff,%eax
080b7447 +0x35f:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b744e +0x366:  mov    -0x8(%ebp),%eax
080b7451 +0x369:  sar    $0x10,%eax
080b7454 +0x36c:  xor    %ecx,%eax
080b7456 +0x36e:  mov    %al,(%edx)
080b7458 +0x370:  mov    0x10(%ebp),%eax
080b745b +0x373:  lea    0x2(%eax),%edx
080b745e +0x376:  mov    -0x20(%ebp),%eax
080b7461 +0x379:  sar    $0x8,%eax
080b7464 +0x37c:  and    $0xff,%eax
080b7469 +0x381:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b7470 +0x388:  mov    -0x8(%ebp),%eax
080b7473 +0x38b:  sar    $0x8,%eax
080b7476 +0x38e:  xor    %ecx,%eax
080b7478 +0x390:  mov    %al,(%edx)
080b747a +0x392:  mov    0x10(%ebp),%eax
080b747d +0x395:  lea    0x3(%eax),%edx
080b7480 +0x398:  mov    -0x24(%ebp),%eax
080b7483 +0x39b:  and    $0xff,%eax
080b7488 +0x3a0:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b748f +0x3a7:  mov    -0x8(%ebp),%eax
080b7492 +0x3aa:  xor    %ecx,%eax
080b7494 +0x3ac:  mov    %al,(%edx)
080b7496 +0x3ae:  mov    -0x2c(%ebp),%eax
080b7499 +0x3b1:  add    $0x4,%eax
080b749c +0x3b4:  mov    (%eax),%eax
080b749e +0x3b6:  mov    %eax,-0x8(%ebp)
080b74a1 +0x3b9:  mov    0x10(%ebp),%eax
080b74a4 +0x3bc:  lea    0x4(%eax),%edx
080b74a7 +0x3bf:  mov    -0x24(%ebp),%eax
080b74aa +0x3c2:  shr    $0x18,%eax
080b74ad +0x3c5:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b74b4 +0x3cc:  mov    -0x8(%ebp),%eax
080b74b7 +0x3cf:  sar    $0x18,%eax
080b74ba +0x3d2:  xor    %ecx,%eax
080b74bc +0x3d4:  mov    %al,(%edx)
080b74be +0x3d6:  mov    0x10(%ebp),%eax
080b74c1 +0x3d9:  lea    0x5(%eax),%edx
080b74c4 +0x3dc:  mov    -0x28(%ebp),%eax
080b74c7 +0x3df:  sar    $0x10,%eax
080b74ca +0x3e2:  and    $0xff,%eax
080b74cf +0x3e7:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b74d6 +0x3ee:  mov    -0x8(%ebp),%eax
080b74d9 +0x3f1:  sar    $0x10,%eax
080b74dc +0x3f4:  xor    %ecx,%eax
080b74de +0x3f6:  mov    %al,(%edx)
080b74e0 +0x3f8:  mov    0x10(%ebp),%eax
080b74e3 +0x3fb:  lea    0x6(%eax),%edx
080b74e6 +0x3fe:  mov    -0x1c(%ebp),%eax
080b74e9 +0x401:  sar    $0x8,%eax
080b74ec +0x404:  and    $0xff,%eax
080b74f1 +0x409:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b74f8 +0x410:  mov    -0x8(%ebp),%eax
080b74fb +0x413:  sar    $0x8,%eax
080b74fe +0x416:  xor    %ecx,%eax
080b7500 +0x418:  mov    %al,(%edx)
080b7502 +0x41a:  mov    0x10(%ebp),%eax
080b7505 +0x41d:  lea    0x7(%eax),%edx
080b7508 +0x420:  mov    -0x20(%ebp),%eax
080b750b +0x423:  and    $0xff,%eax
080b7510 +0x428:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b7517 +0x42f:  mov    -0x8(%ebp),%eax
080b751a +0x432:  xor    %ecx,%eax
080b751c +0x434:  mov    %al,(%edx)
080b751e +0x436:  mov    -0x2c(%ebp),%eax
080b7521 +0x439:  add    $0x8,%eax
080b7524 +0x43c:  mov    (%eax),%eax
080b7526 +0x43e:  mov    %eax,-0x8(%ebp)
080b7529 +0x441:  mov    0x10(%ebp),%eax
080b752c +0x444:  lea    0x8(%eax),%edx
080b752f +0x447:  mov    -0x20(%ebp),%eax
080b7532 +0x44a:  shr    $0x18,%eax
080b7535 +0x44d:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b753c +0x454:  mov    -0x8(%ebp),%eax
080b753f +0x457:  sar    $0x18,%eax
080b7542 +0x45a:  xor    %ecx,%eax
080b7544 +0x45c:  mov    %al,(%edx)
080b7546 +0x45e:  mov    0x10(%ebp),%eax
080b7549 +0x461:  lea    0x9(%eax),%edx
080b754c +0x464:  mov    -0x24(%ebp),%eax
080b754f +0x467:  sar    $0x10,%eax
080b7552 +0x46a:  and    $0xff,%eax
080b7557 +0x46f:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b755e +0x476:  mov    -0x8(%ebp),%eax
080b7561 +0x479:  sar    $0x10,%eax
080b7564 +0x47c:  xor    %ecx,%eax
080b7566 +0x47e:  mov    %al,(%edx)
080b7568 +0x480:  mov    0x10(%ebp),%eax
080b756b +0x483:  lea    0xa(%eax),%edx
080b756e +0x486:  mov    -0x28(%ebp),%eax
080b7571 +0x489:  sar    $0x8,%eax
080b7574 +0x48c:  and    $0xff,%eax
080b7579 +0x491:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b7580 +0x498:  mov    -0x8(%ebp),%eax
080b7583 +0x49b:  sar    $0x8,%eax
080b7586 +0x49e:  xor    %ecx,%eax
080b7588 +0x4a0:  mov    %al,(%edx)
080b758a +0x4a2:  mov    0x10(%ebp),%eax
080b758d +0x4a5:  lea    0xb(%eax),%edx
080b7590 +0x4a8:  mov    -0x1c(%ebp),%eax
080b7593 +0x4ab:  and    $0xff,%eax
080b7598 +0x4b0:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b759f +0x4b7:  mov    -0x8(%ebp),%eax
080b75a2 +0x4ba:  xor    %ecx,%eax
080b75a4 +0x4bc:  mov    %al,(%edx)
080b75a6 +0x4be:  mov    -0x2c(%ebp),%eax
080b75a9 +0x4c1:  add    $0xc,%eax
080b75ac +0x4c4:  mov    (%eax),%eax
080b75ae +0x4c6:  mov    %eax,-0x8(%ebp)
080b75b1 +0x4c9:  mov    0x10(%ebp),%eax
080b75b4 +0x4cc:  lea    0xc(%eax),%edx
080b75b7 +0x4cf:  mov    -0x1c(%ebp),%eax
080b75ba +0x4d2:  shr    $0x18,%eax
080b75bd +0x4d5:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b75c4 +0x4dc:  mov    -0x8(%ebp),%eax
080b75c7 +0x4df:  sar    $0x18,%eax
080b75ca +0x4e2:  xor    %ecx,%eax
080b75cc +0x4e4:  mov    %al,(%edx)
080b75ce +0x4e6:  mov    0x10(%ebp),%eax
080b75d1 +0x4e9:  lea    0xd(%eax),%edx
080b75d4 +0x4ec:  mov    -0x20(%ebp),%eax
080b75d7 +0x4ef:  sar    $0x10,%eax
080b75da +0x4f2:  and    $0xff,%eax
080b75df +0x4f7:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b75e6 +0x4fe:  mov    -0x8(%ebp),%eax
080b75e9 +0x501:  sar    $0x10,%eax
080b75ec +0x504:  xor    %ecx,%eax
080b75ee +0x506:  mov    %al,(%edx)
080b75f0 +0x508:  mov    0x10(%ebp),%eax
080b75f3 +0x50b:  lea    0xe(%eax),%edx
080b75f6 +0x50e:  mov    -0x24(%ebp),%eax
080b75f9 +0x511:  sar    $0x8,%eax
080b75fc +0x514:  and    $0xff,%eax
080b7601 +0x519:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b7608 +0x520:  mov    -0x8(%ebp),%eax
080b760b +0x523:  sar    $0x8,%eax
080b760e +0x526:  xor    %ecx,%eax
080b7610 +0x528:  mov    %al,(%edx)
080b7612 +0x52a:  mov    0x10(%ebp),%eax
080b7615 +0x52d:  lea    0xf(%eax),%edx
080b7618 +0x530:  mov    -0x28(%ebp),%eax
080b761b +0x533:  and    $0xff,%eax
080b7620 +0x538:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%ecx
080b7627 +0x53f:  mov    -0x8(%ebp),%eax
080b762a +0x542:  xor    %ecx,%eax
080b762c +0x544:  mov    %al,(%edx)
080b762e +0x546:  mov    $0x6fffffff,%eax
080b7633 +0x54b:  leave
080b7634 +0x54c:  ret
080b7635 +0x54d:  nop
```

## 反编译 C

```c
// CRijndael::DefDecryptBlock @ 0x80b70e8

/* CRijndael::DefDecryptBlock(char const*, char*) */

undefined4 __thiscall CRijndael::DefDecryptBlock(CRijndael *this,char *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_8;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (this[4] == (CRijndael)0x1) {
    local_28 = ((uint)(byte)param_1[4] << 0x18 | (uint)(byte)param_1[5] << 0x10 |
                (uint)(byte)param_1[6] << 8 | (uint)(byte)param_1[7]) ^ *(uint *)(this + 0x1fc);
    local_24 = ((uint)(byte)param_1[8] << 0x18 | (uint)(byte)param_1[9] << 0x10 |
                (uint)(byte)param_1[10] << 8 | (uint)(byte)param_1[0xb]) ^ *(uint *)(this + 0x200);
    local_20 = ((uint)(byte)param_1[0xc] << 0x18 | (uint)(byte)param_1[0xd] << 0x10 |
                (uint)(byte)param_1[0xe] << 8 | (uint)(byte)param_1[0xf]) ^ *(uint *)(this + 0x204);
    local_2c = ((uint)(byte)*param_1 << 0x18 | (uint)(byte)param_1[1] << 0x10 |
                (uint)(byte)param_1[2] << 8 | (uint)(byte)param_1[3]) ^ *(uint *)(this + 0x1f8);
    for (local_8 = 1; uVar4 = (int)local_20 >> 0x10, uVar5 = (int)local_24 >> 8,
        uVar6 = (int)local_24 >> 0x10, uVar7 = (int)local_28 >> 8, uVar8 = (int)local_28 >> 0x10,
        local_8 < *(int *)(this + 0x3d8); local_8 = local_8 + 1) {
      iVar2 = local_8 * 0x20;
      uVar3 = local_28 & 0xff;
      local_28 = *(uint *)(this + local_8 * 0x20 + 0x1fc) ^
                 *(uint *)(sm_T5 + (local_28 >> 0x18) * 4) ^
                 *(uint *)(sm_T6 + ((int)local_2c >> 0x10 & 0xffU) * 4) ^
                 *(uint *)(sm_T7 + ((int)local_20 >> 8 & 0xffU) * 4) ^
                 *(uint *)(sm_T8 + (local_24 & 0xff) * 4);
      local_24 = *(uint *)(this + local_8 * 0x20 + 0x200) ^
                 *(uint *)(sm_T5 + (local_24 >> 0x18) * 4) ^ *(uint *)(sm_T6 + (uVar8 & 0xff) * 4) ^
                 *(uint *)(sm_T7 + ((int)local_2c >> 8 & 0xffU) * 4) ^
                 *(uint *)(sm_T8 + (local_20 & 0xff) * 4);
      local_20 = *(uint *)(this + local_8 * 0x20 + 0x204) ^
                 *(uint *)(sm_T5 + (local_20 >> 0x18) * 4) ^ *(uint *)(sm_T6 + (uVar6 & 0xff) * 4) ^
                 *(uint *)(sm_T7 + (uVar7 & 0xff) * 4) ^ *(uint *)(sm_T8 + (local_2c & 0xff) * 4);
      local_2c = *(uint *)(this + iVar2 + 0x1f8) ^
                 *(uint *)(sm_T5 + (local_2c >> 0x18) * 4) ^ *(uint *)(sm_T6 + (uVar4 & 0xff) * 4) ^
                 *(uint *)(sm_T7 + (uVar5 & 0xff) * 4) ^ *(uint *)(sm_T8 + uVar3 * 4);
    }
    iVar2 = *(int *)(this + 0x3d8);
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x1f8);
    *param_2 = sm_Si[local_2c >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[1] = (byte)((uint)uVar1 >> 0x10) ^ sm_Si[uVar4 & 0xff];
    param_2[2] = (byte)((uint)uVar1 >> 8) ^ sm_Si[uVar5 & 0xff];
    param_2[3] = (byte)uVar1 ^ sm_Si[local_28 & 0xff];
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x1fc);
    param_2[4] = (byte)((uint)uVar1 >> 0x18) ^ sm_Si[local_28 >> 0x18];
    param_2[5] = (byte)((uint)uVar1 >> 0x10) ^ sm_Si[(int)local_2c >> 0x10 & 0xff];
    param_2[6] = (byte)((uint)uVar1 >> 8) ^ sm_Si[(int)local_20 >> 8 & 0xff];
    param_2[7] = (byte)uVar1 ^ sm_Si[local_24 & 0xff];
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x200);
    param_2[8] = (byte)((uint)uVar1 >> 0x18) ^ sm_Si[local_24 >> 0x18];
    param_2[9] = (byte)((uint)uVar1 >> 0x10) ^ sm_Si[uVar8 & 0xff];
    param_2[10] = (byte)((uint)uVar1 >> 8) ^ sm_Si[(int)local_2c >> 8 & 0xff];
    param_2[0xb] = (byte)uVar1 ^ sm_Si[local_20 & 0xff];
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x204);
    param_2[0xc] = (byte)((uint)uVar1 >> 0x18) ^ sm_Si[local_20 >> 0x18];
    param_2[0xd] = (byte)((uint)uVar1 >> 0x10) ^ sm_Si[uVar6 & 0xff];
    param_2[0xe] = (byte)((uint)uVar1 >> 8) ^ sm_Si[uVar7 & 0xff];
    param_2[0xf] = (byte)uVar1 ^ sm_Si[local_2c & 0xff];
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}
```
