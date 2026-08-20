# DefEncryptBlock

`_ZN9CRijndael15DefEncryptBlockEPKcPc`

`CRijndael::DefEncryptBlock(char const*, char*)`

| 类 | 地址 |
|---|---|
| `CRijndael` | `0x080b6ba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b6ba0  _ZN9CRijndael15DefEncryptBlockEPKcPc
#           CRijndael::DefEncryptBlock(char const*, char*)
# range [0x080b6ba0, 0x080b70e7]
080b6ba0 +0x000:  push   %ebp
080b6ba1 +0x001:  mov    %esp,%ebp
080b6ba3 +0x003:  sub    $0x30,%esp
080b6ba6 +0x006:  mov    0x8(%ebp),%eax
080b6ba9 +0x009:  movzbl 0x4(%eax),%eax
080b6bad +0x00d:  xor    $0x1,%eax
080b6bb0 +0x010:  test   %al,%al
080b6bb2 +0x012:  je     080b6bbe <+0x1e>
080b6bb4 +0x014:  mov    $0x70000005,%eax
080b6bb9 +0x019:  jmp    080b70e5 <+0x545>
080b6bbe +0x01e:  mov    0x8(%ebp),%eax
080b6bc1 +0x021:  add    $0x38,%eax
080b6bc4 +0x024:  mov    %eax,-0x2c(%ebp)
080b6bc7 +0x027:  mov    0xc(%ebp),%eax
080b6bca +0x02a:  movzbl (%eax),%eax
080b6bcd +0x02d:  movzbl %al,%eax
080b6bd0 +0x030:  shl    $0x18,%eax
080b6bd3 +0x033:  mov    %eax,-0x28(%ebp)
080b6bd6 +0x036:  addl   $0x1,0xc(%ebp)
080b6bda +0x03a:  mov    0xc(%ebp),%eax
080b6bdd +0x03d:  movzbl (%eax),%eax
080b6be0 +0x040:  movzbl %al,%eax
080b6be3 +0x043:  shl    $0x10,%eax
080b6be6 +0x046:  or     %eax,-0x28(%ebp)
080b6be9 +0x049:  addl   $0x1,0xc(%ebp)
080b6bed +0x04d:  mov    0xc(%ebp),%eax
080b6bf0 +0x050:  movzbl (%eax),%eax
080b6bf3 +0x053:  movzbl %al,%eax
080b6bf6 +0x056:  shl    $0x8,%eax
080b6bf9 +0x059:  or     %eax,-0x28(%ebp)
080b6bfc +0x05c:  addl   $0x1,0xc(%ebp)
080b6c00 +0x060:  mov    0xc(%ebp),%eax
080b6c03 +0x063:  movzbl (%eax),%eax
080b6c06 +0x066:  movzbl %al,%eax
080b6c09 +0x069:  or     %eax,-0x28(%ebp)
080b6c0c +0x06c:  addl   $0x1,0xc(%ebp)
080b6c10 +0x070:  mov    -0x2c(%ebp),%eax
080b6c13 +0x073:  mov    (%eax),%eax
080b6c15 +0x075:  xor    %eax,-0x28(%ebp)
080b6c18 +0x078:  mov    0xc(%ebp),%eax
080b6c1b +0x07b:  movzbl (%eax),%eax
080b6c1e +0x07e:  movzbl %al,%eax
080b6c21 +0x081:  shl    $0x18,%eax
080b6c24 +0x084:  mov    %eax,-0x24(%ebp)
080b6c27 +0x087:  addl   $0x1,0xc(%ebp)
080b6c2b +0x08b:  mov    0xc(%ebp),%eax
080b6c2e +0x08e:  movzbl (%eax),%eax
080b6c31 +0x091:  movzbl %al,%eax
080b6c34 +0x094:  shl    $0x10,%eax
080b6c37 +0x097:  or     %eax,-0x24(%ebp)
080b6c3a +0x09a:  addl   $0x1,0xc(%ebp)
080b6c3e +0x09e:  mov    0xc(%ebp),%eax
080b6c41 +0x0a1:  movzbl (%eax),%eax
080b6c44 +0x0a4:  movzbl %al,%eax
080b6c47 +0x0a7:  shl    $0x8,%eax
080b6c4a +0x0aa:  or     %eax,-0x24(%ebp)
080b6c4d +0x0ad:  addl   $0x1,0xc(%ebp)
080b6c51 +0x0b1:  mov    0xc(%ebp),%eax
080b6c54 +0x0b4:  movzbl (%eax),%eax
080b6c57 +0x0b7:  movzbl %al,%eax
080b6c5a +0x0ba:  or     %eax,-0x24(%ebp)
080b6c5d +0x0bd:  addl   $0x1,0xc(%ebp)
080b6c61 +0x0c1:  mov    -0x2c(%ebp),%eax
080b6c64 +0x0c4:  add    $0x4,%eax
080b6c67 +0x0c7:  mov    (%eax),%eax
080b6c69 +0x0c9:  xor    %eax,-0x24(%ebp)
080b6c6c +0x0cc:  mov    0xc(%ebp),%eax
080b6c6f +0x0cf:  movzbl (%eax),%eax
080b6c72 +0x0d2:  movzbl %al,%eax
080b6c75 +0x0d5:  shl    $0x18,%eax
080b6c78 +0x0d8:  mov    %eax,-0x20(%ebp)
080b6c7b +0x0db:  addl   $0x1,0xc(%ebp)
080b6c7f +0x0df:  mov    0xc(%ebp),%eax
080b6c82 +0x0e2:  movzbl (%eax),%eax
080b6c85 +0x0e5:  movzbl %al,%eax
080b6c88 +0x0e8:  shl    $0x10,%eax
080b6c8b +0x0eb:  or     %eax,-0x20(%ebp)
080b6c8e +0x0ee:  addl   $0x1,0xc(%ebp)
080b6c92 +0x0f2:  mov    0xc(%ebp),%eax
080b6c95 +0x0f5:  movzbl (%eax),%eax
080b6c98 +0x0f8:  movzbl %al,%eax
080b6c9b +0x0fb:  shl    $0x8,%eax
080b6c9e +0x0fe:  or     %eax,-0x20(%ebp)
080b6ca1 +0x101:  addl   $0x1,0xc(%ebp)
080b6ca5 +0x105:  mov    0xc(%ebp),%eax
080b6ca8 +0x108:  movzbl (%eax),%eax
080b6cab +0x10b:  movzbl %al,%eax
080b6cae +0x10e:  or     %eax,-0x20(%ebp)
080b6cb1 +0x111:  addl   $0x1,0xc(%ebp)
080b6cb5 +0x115:  mov    -0x2c(%ebp),%eax
080b6cb8 +0x118:  add    $0x8,%eax
080b6cbb +0x11b:  mov    (%eax),%eax
080b6cbd +0x11d:  xor    %eax,-0x20(%ebp)
080b6cc0 +0x120:  mov    0xc(%ebp),%eax
080b6cc3 +0x123:  movzbl (%eax),%eax
080b6cc6 +0x126:  movzbl %al,%eax
080b6cc9 +0x129:  shl    $0x18,%eax
080b6ccc +0x12c:  mov    %eax,-0x1c(%ebp)
080b6ccf +0x12f:  addl   $0x1,0xc(%ebp)
080b6cd3 +0x133:  mov    0xc(%ebp),%eax
080b6cd6 +0x136:  movzbl (%eax),%eax
080b6cd9 +0x139:  movzbl %al,%eax
080b6cdc +0x13c:  shl    $0x10,%eax
080b6cdf +0x13f:  or     %eax,-0x1c(%ebp)
080b6ce2 +0x142:  addl   $0x1,0xc(%ebp)
080b6ce6 +0x146:  mov    0xc(%ebp),%eax
080b6ce9 +0x149:  movzbl (%eax),%eax
080b6cec +0x14c:  movzbl %al,%eax
080b6cef +0x14f:  shl    $0x8,%eax
080b6cf2 +0x152:  or     %eax,-0x1c(%ebp)
080b6cf5 +0x155:  addl   $0x1,0xc(%ebp)
080b6cf9 +0x159:  mov    0xc(%ebp),%eax
080b6cfc +0x15c:  movzbl (%eax),%eax
080b6cff +0x15f:  movzbl %al,%eax
080b6d02 +0x162:  or     %eax,-0x1c(%ebp)
080b6d05 +0x165:  addl   $0x1,0xc(%ebp)
080b6d09 +0x169:  mov    -0x2c(%ebp),%eax
080b6d0c +0x16c:  add    $0xc,%eax
080b6d0f +0x16f:  mov    (%eax),%eax
080b6d11 +0x171:  xor    %eax,-0x1c(%ebp)
080b6d14 +0x174:  movl   $0x1,-0x4(%ebp)
080b6d1b +0x17b:  jmp    080b6e97 <+0x2f7>
080b6d20 +0x180:  mov    -0x4(%ebp),%eax
080b6d23 +0x183:  shl    $0x5,%eax
080b6d26 +0x186:  add    $0x30,%eax
080b6d29 +0x189:  add    0x8(%ebp),%eax
080b6d2c +0x18c:  add    $0x8,%eax
080b6d2f +0x18f:  mov    %eax,-0x2c(%ebp)
080b6d32 +0x192:  mov    -0x28(%ebp),%eax
080b6d35 +0x195:  shr    $0x18,%eax
080b6d38 +0x198:  mov    &_ZN9CRijndael5sm_T1E(,%eax,4),%edx
080b6d3f +0x19f:  mov    -0x24(%ebp),%eax
080b6d42 +0x1a2:  sar    $0x10,%eax
080b6d45 +0x1a5:  and    $0xff,%eax
080b6d4a +0x1aa:  mov    &_ZN9CRijndael5sm_T2E(,%eax,4),%eax
080b6d51 +0x1b1:  xor    %eax,%edx
080b6d53 +0x1b3:  mov    -0x20(%ebp),%eax
080b6d56 +0x1b6:  sar    $0x8,%eax
080b6d59 +0x1b9:  and    $0xff,%eax
080b6d5e +0x1be:  mov    &_ZN9CRijndael5sm_T3E(,%eax,4),%eax
080b6d65 +0x1c5:  xor    %eax,%edx
080b6d67 +0x1c7:  mov    -0x1c(%ebp),%eax
080b6d6a +0x1ca:  and    $0xff,%eax
080b6d6f +0x1cf:  mov    &_ZN9CRijndael5sm_T4E(,%eax,4),%eax
080b6d76 +0x1d6:  xor    %eax,%edx
080b6d78 +0x1d8:  mov    -0x2c(%ebp),%eax
080b6d7b +0x1db:  mov    (%eax),%eax
080b6d7d +0x1dd:  xor    %edx,%eax
080b6d7f +0x1df:  mov    %eax,-0x18(%ebp)
080b6d82 +0x1e2:  mov    -0x24(%ebp),%eax
080b6d85 +0x1e5:  shr    $0x18,%eax
080b6d88 +0x1e8:  mov    &_ZN9CRijndael5sm_T1E(,%eax,4),%edx
080b6d8f +0x1ef:  mov    -0x20(%ebp),%eax
080b6d92 +0x1f2:  sar    $0x10,%eax
080b6d95 +0x1f5:  and    $0xff,%eax
080b6d9a +0x1fa:  mov    &_ZN9CRijndael5sm_T2E(,%eax,4),%eax
080b6da1 +0x201:  xor    %eax,%edx
080b6da3 +0x203:  mov    -0x1c(%ebp),%eax
080b6da6 +0x206:  sar    $0x8,%eax
080b6da9 +0x209:  and    $0xff,%eax
080b6dae +0x20e:  mov    &_ZN9CRijndael5sm_T3E(,%eax,4),%eax
080b6db5 +0x215:  xor    %eax,%edx
080b6db7 +0x217:  mov    -0x28(%ebp),%eax
080b6dba +0x21a:  and    $0xff,%eax
080b6dbf +0x21f:  mov    &_ZN9CRijndael5sm_T4E(,%eax,4),%eax
080b6dc6 +0x226:  xor    %eax,%edx
080b6dc8 +0x228:  mov    -0x2c(%ebp),%eax
080b6dcb +0x22b:  add    $0x4,%eax
080b6dce +0x22e:  mov    (%eax),%eax
080b6dd0 +0x230:  xor    %edx,%eax
080b6dd2 +0x232:  mov    %eax,-0x14(%ebp)
080b6dd5 +0x235:  mov    -0x20(%ebp),%eax
080b6dd8 +0x238:  shr    $0x18,%eax
080b6ddb +0x23b:  mov    &_ZN9CRijndael5sm_T1E(,%eax,4),%edx
080b6de2 +0x242:  mov    -0x1c(%ebp),%eax
080b6de5 +0x245:  sar    $0x10,%eax
080b6de8 +0x248:  and    $0xff,%eax
080b6ded +0x24d:  mov    &_ZN9CRijndael5sm_T2E(,%eax,4),%eax
080b6df4 +0x254:  xor    %eax,%edx
080b6df6 +0x256:  mov    -0x28(%ebp),%eax
080b6df9 +0x259:  sar    $0x8,%eax
080b6dfc +0x25c:  and    $0xff,%eax
080b6e01 +0x261:  mov    &_ZN9CRijndael5sm_T3E(,%eax,4),%eax
080b6e08 +0x268:  xor    %eax,%edx
080b6e0a +0x26a:  mov    -0x24(%ebp),%eax
080b6e0d +0x26d:  and    $0xff,%eax
080b6e12 +0x272:  mov    &_ZN9CRijndael5sm_T4E(,%eax,4),%eax
080b6e19 +0x279:  xor    %eax,%edx
080b6e1b +0x27b:  mov    -0x2c(%ebp),%eax
080b6e1e +0x27e:  add    $0x8,%eax
080b6e21 +0x281:  mov    (%eax),%eax
080b6e23 +0x283:  xor    %edx,%eax
080b6e25 +0x285:  mov    %eax,-0x10(%ebp)
080b6e28 +0x288:  mov    -0x1c(%ebp),%eax
080b6e2b +0x28b:  shr    $0x18,%eax
080b6e2e +0x28e:  mov    &_ZN9CRijndael5sm_T1E(,%eax,4),%edx
080b6e35 +0x295:  mov    -0x28(%ebp),%eax
080b6e38 +0x298:  sar    $0x10,%eax
080b6e3b +0x29b:  and    $0xff,%eax
080b6e40 +0x2a0:  mov    &_ZN9CRijndael5sm_T2E(,%eax,4),%eax
080b6e47 +0x2a7:  xor    %eax,%edx
080b6e49 +0x2a9:  mov    -0x24(%ebp),%eax
080b6e4c +0x2ac:  sar    $0x8,%eax
080b6e4f +0x2af:  and    $0xff,%eax
080b6e54 +0x2b4:  mov    &_ZN9CRijndael5sm_T3E(,%eax,4),%eax
080b6e5b +0x2bb:  xor    %eax,%edx
080b6e5d +0x2bd:  mov    -0x20(%ebp),%eax
080b6e60 +0x2c0:  and    $0xff,%eax
080b6e65 +0x2c5:  mov    &_ZN9CRijndael5sm_T4E(,%eax,4),%eax
080b6e6c +0x2cc:  xor    %eax,%edx
080b6e6e +0x2ce:  mov    -0x2c(%ebp),%eax
080b6e71 +0x2d1:  add    $0xc,%eax
080b6e74 +0x2d4:  mov    (%eax),%eax
080b6e76 +0x2d6:  xor    %edx,%eax
080b6e78 +0x2d8:  mov    %eax,-0xc(%ebp)
080b6e7b +0x2db:  mov    -0x18(%ebp),%eax
080b6e7e +0x2de:  mov    %eax,-0x28(%ebp)
080b6e81 +0x2e1:  mov    -0x14(%ebp),%eax
080b6e84 +0x2e4:  mov    %eax,-0x24(%ebp)
080b6e87 +0x2e7:  mov    -0x10(%ebp),%eax
080b6e8a +0x2ea:  mov    %eax,-0x20(%ebp)
080b6e8d +0x2ed:  mov    -0xc(%ebp),%eax
080b6e90 +0x2f0:  mov    %eax,-0x1c(%ebp)
080b6e93 +0x2f3:  addl   $0x1,-0x4(%ebp)
080b6e97 +0x2f7:  mov    0x8(%ebp),%eax
080b6e9a +0x2fa:  mov    0x3d8(%eax),%eax
080b6ea0 +0x300:  cmp    -0x4(%ebp),%eax
080b6ea3 +0x303:  setg   %al
080b6ea6 +0x306:  test   %al,%al
080b6ea8 +0x308:  jne    080b6d20 <+0x180>
080b6eae +0x30e:  mov    0x8(%ebp),%eax
080b6eb1 +0x311:  mov    0x3d8(%eax),%eax
080b6eb7 +0x317:  shl    $0x5,%eax
080b6eba +0x31a:  add    $0x30,%eax
080b6ebd +0x31d:  add    0x8(%ebp),%eax
080b6ec0 +0x320:  add    $0x8,%eax
080b6ec3 +0x323:  mov    %eax,-0x2c(%ebp)
080b6ec6 +0x326:  mov    -0x2c(%ebp),%eax
080b6ec9 +0x329:  mov    (%eax),%eax
080b6ecb +0x32b:  mov    %eax,-0x8(%ebp)
080b6ece +0x32e:  mov    -0x28(%ebp),%eax
080b6ed1 +0x331:  shr    $0x18,%eax
080b6ed4 +0x334:  movzbl &_ZN9CRijndael4sm_SE(%eax),%edx
080b6edb +0x33b:  mov    -0x8(%ebp),%eax
080b6ede +0x33e:  sar    $0x18,%eax
080b6ee1 +0x341:  xor    %eax,%edx
080b6ee3 +0x343:  mov    0x10(%ebp),%eax
080b6ee6 +0x346:  mov    %dl,(%eax)
080b6ee8 +0x348:  mov    0x10(%ebp),%eax
080b6eeb +0x34b:  lea    0x1(%eax),%edx
080b6eee +0x34e:  mov    -0x24(%ebp),%eax
080b6ef1 +0x351:  sar    $0x10,%eax
080b6ef4 +0x354:  and    $0xff,%eax
080b6ef9 +0x359:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b6f00 +0x360:  mov    -0x8(%ebp),%eax
080b6f03 +0x363:  sar    $0x10,%eax
080b6f06 +0x366:  xor    %ecx,%eax
080b6f08 +0x368:  mov    %al,(%edx)
080b6f0a +0x36a:  mov    0x10(%ebp),%eax
080b6f0d +0x36d:  lea    0x2(%eax),%edx
080b6f10 +0x370:  mov    -0x20(%ebp),%eax
080b6f13 +0x373:  sar    $0x8,%eax
080b6f16 +0x376:  and    $0xff,%eax
080b6f1b +0x37b:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b6f22 +0x382:  mov    -0x8(%ebp),%eax
080b6f25 +0x385:  sar    $0x8,%eax
080b6f28 +0x388:  xor    %ecx,%eax
080b6f2a +0x38a:  mov    %al,(%edx)
080b6f2c +0x38c:  mov    0x10(%ebp),%eax
080b6f2f +0x38f:  lea    0x3(%eax),%edx
080b6f32 +0x392:  mov    -0x1c(%ebp),%eax
080b6f35 +0x395:  and    $0xff,%eax
080b6f3a +0x39a:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b6f41 +0x3a1:  mov    -0x8(%ebp),%eax
080b6f44 +0x3a4:  xor    %ecx,%eax
080b6f46 +0x3a6:  mov    %al,(%edx)
080b6f48 +0x3a8:  mov    -0x2c(%ebp),%eax
080b6f4b +0x3ab:  add    $0x4,%eax
080b6f4e +0x3ae:  mov    (%eax),%eax
080b6f50 +0x3b0:  mov    %eax,-0x8(%ebp)
080b6f53 +0x3b3:  mov    0x10(%ebp),%eax
080b6f56 +0x3b6:  lea    0x4(%eax),%edx
080b6f59 +0x3b9:  mov    -0x24(%ebp),%eax
080b6f5c +0x3bc:  shr    $0x18,%eax
080b6f5f +0x3bf:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b6f66 +0x3c6:  mov    -0x8(%ebp),%eax
080b6f69 +0x3c9:  sar    $0x18,%eax
080b6f6c +0x3cc:  xor    %ecx,%eax
080b6f6e +0x3ce:  mov    %al,(%edx)
080b6f70 +0x3d0:  mov    0x10(%ebp),%eax
080b6f73 +0x3d3:  lea    0x5(%eax),%edx
080b6f76 +0x3d6:  mov    -0x20(%ebp),%eax
080b6f79 +0x3d9:  sar    $0x10,%eax
080b6f7c +0x3dc:  and    $0xff,%eax
080b6f81 +0x3e1:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b6f88 +0x3e8:  mov    -0x8(%ebp),%eax
080b6f8b +0x3eb:  sar    $0x10,%eax
080b6f8e +0x3ee:  xor    %ecx,%eax
080b6f90 +0x3f0:  mov    %al,(%edx)
080b6f92 +0x3f2:  mov    0x10(%ebp),%eax
080b6f95 +0x3f5:  lea    0x6(%eax),%edx
080b6f98 +0x3f8:  mov    -0x1c(%ebp),%eax
080b6f9b +0x3fb:  sar    $0x8,%eax
080b6f9e +0x3fe:  and    $0xff,%eax
080b6fa3 +0x403:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b6faa +0x40a:  mov    -0x8(%ebp),%eax
080b6fad +0x40d:  sar    $0x8,%eax
080b6fb0 +0x410:  xor    %ecx,%eax
080b6fb2 +0x412:  mov    %al,(%edx)
080b6fb4 +0x414:  mov    0x10(%ebp),%eax
080b6fb7 +0x417:  lea    0x7(%eax),%edx
080b6fba +0x41a:  mov    -0x28(%ebp),%eax
080b6fbd +0x41d:  and    $0xff,%eax
080b6fc2 +0x422:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b6fc9 +0x429:  mov    -0x8(%ebp),%eax
080b6fcc +0x42c:  xor    %ecx,%eax
080b6fce +0x42e:  mov    %al,(%edx)
080b6fd0 +0x430:  mov    -0x2c(%ebp),%eax
080b6fd3 +0x433:  add    $0x8,%eax
080b6fd6 +0x436:  mov    (%eax),%eax
080b6fd8 +0x438:  mov    %eax,-0x8(%ebp)
080b6fdb +0x43b:  mov    0x10(%ebp),%eax
080b6fde +0x43e:  lea    0x8(%eax),%edx
080b6fe1 +0x441:  mov    -0x20(%ebp),%eax
080b6fe4 +0x444:  shr    $0x18,%eax
080b6fe7 +0x447:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b6fee +0x44e:  mov    -0x8(%ebp),%eax
080b6ff1 +0x451:  sar    $0x18,%eax
080b6ff4 +0x454:  xor    %ecx,%eax
080b6ff6 +0x456:  mov    %al,(%edx)
080b6ff8 +0x458:  mov    0x10(%ebp),%eax
080b6ffb +0x45b:  lea    0x9(%eax),%edx
080b6ffe +0x45e:  mov    -0x1c(%ebp),%eax
080b7001 +0x461:  sar    $0x10,%eax
080b7004 +0x464:  and    $0xff,%eax
080b7009 +0x469:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b7010 +0x470:  mov    -0x8(%ebp),%eax
080b7013 +0x473:  sar    $0x10,%eax
080b7016 +0x476:  xor    %ecx,%eax
080b7018 +0x478:  mov    %al,(%edx)
080b701a +0x47a:  mov    0x10(%ebp),%eax
080b701d +0x47d:  lea    0xa(%eax),%edx
080b7020 +0x480:  mov    -0x28(%ebp),%eax
080b7023 +0x483:  sar    $0x8,%eax
080b7026 +0x486:  and    $0xff,%eax
080b702b +0x48b:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b7032 +0x492:  mov    -0x8(%ebp),%eax
080b7035 +0x495:  sar    $0x8,%eax
080b7038 +0x498:  xor    %ecx,%eax
080b703a +0x49a:  mov    %al,(%edx)
080b703c +0x49c:  mov    0x10(%ebp),%eax
080b703f +0x49f:  lea    0xb(%eax),%edx
080b7042 +0x4a2:  mov    -0x24(%ebp),%eax
080b7045 +0x4a5:  and    $0xff,%eax
080b704a +0x4aa:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b7051 +0x4b1:  mov    -0x8(%ebp),%eax
080b7054 +0x4b4:  xor    %ecx,%eax
080b7056 +0x4b6:  mov    %al,(%edx)
080b7058 +0x4b8:  mov    -0x2c(%ebp),%eax
080b705b +0x4bb:  add    $0xc,%eax
080b705e +0x4be:  mov    (%eax),%eax
080b7060 +0x4c0:  mov    %eax,-0x8(%ebp)
080b7063 +0x4c3:  mov    0x10(%ebp),%eax
080b7066 +0x4c6:  lea    0xc(%eax),%edx
080b7069 +0x4c9:  mov    -0x1c(%ebp),%eax
080b706c +0x4cc:  shr    $0x18,%eax
080b706f +0x4cf:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b7076 +0x4d6:  mov    -0x8(%ebp),%eax
080b7079 +0x4d9:  sar    $0x18,%eax
080b707c +0x4dc:  xor    %ecx,%eax
080b707e +0x4de:  mov    %al,(%edx)
080b7080 +0x4e0:  mov    0x10(%ebp),%eax
080b7083 +0x4e3:  lea    0xd(%eax),%edx
080b7086 +0x4e6:  mov    -0x28(%ebp),%eax
080b7089 +0x4e9:  sar    $0x10,%eax
080b708c +0x4ec:  and    $0xff,%eax
080b7091 +0x4f1:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b7098 +0x4f8:  mov    -0x8(%ebp),%eax
080b709b +0x4fb:  sar    $0x10,%eax
080b709e +0x4fe:  xor    %ecx,%eax
080b70a0 +0x500:  mov    %al,(%edx)
080b70a2 +0x502:  mov    0x10(%ebp),%eax
080b70a5 +0x505:  lea    0xe(%eax),%edx
080b70a8 +0x508:  mov    -0x24(%ebp),%eax
080b70ab +0x50b:  sar    $0x8,%eax
080b70ae +0x50e:  and    $0xff,%eax
080b70b3 +0x513:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b70ba +0x51a:  mov    -0x8(%ebp),%eax
080b70bd +0x51d:  sar    $0x8,%eax
080b70c0 +0x520:  xor    %ecx,%eax
080b70c2 +0x522:  mov    %al,(%edx)
080b70c4 +0x524:  mov    0x10(%ebp),%eax
080b70c7 +0x527:  lea    0xf(%eax),%edx
080b70ca +0x52a:  mov    -0x20(%ebp),%eax
080b70cd +0x52d:  and    $0xff,%eax
080b70d2 +0x532:  movzbl &_ZN9CRijndael4sm_SE(%eax),%ecx
080b70d9 +0x539:  mov    -0x8(%ebp),%eax
080b70dc +0x53c:  xor    %ecx,%eax
080b70de +0x53e:  mov    %al,(%edx)
080b70e0 +0x540:  mov    $0x6fffffff,%eax
080b70e5 +0x545:  leave
080b70e6 +0x546:  ret
080b70e7 +0x547:  nop
```

## 反编译 C

```c
// CRijndael::DefEncryptBlock @ 0x80b6ba0

/* CRijndael::DefEncryptBlock(char const*, char*) */

undefined4 __thiscall CRijndael::DefEncryptBlock(CRijndael *this,char *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_8;
  int iVar3;
  int iVar4;
  uint uVar9;
  uint uVar10;
  
  if (this[4] == (CRijndael)0x1) {
    local_20 = ((uint)(byte)param_1[0xc] << 0x18 | (uint)(byte)param_1[0xd] << 0x10 |
                (uint)(byte)param_1[0xe] << 8 | (uint)(byte)param_1[0xf]) ^ *(uint *)(this + 0x44);
    local_2c = ((uint)(byte)*param_1 << 0x18 | (uint)(byte)param_1[1] << 0x10 |
                (uint)(byte)param_1[2] << 8 | (uint)(byte)param_1[3]) ^ *(uint *)(this + 0x38);
    local_28 = ((uint)(byte)param_1[4] << 0x18 | (uint)(byte)param_1[5] << 0x10 |
                (uint)(byte)param_1[6] << 8 | (uint)(byte)param_1[7]) ^ *(uint *)(this + 0x3c);
    local_24 = ((uint)(byte)param_1[8] << 0x18 | (uint)(byte)param_1[9] << 0x10 |
                (uint)(byte)param_1[10] << 8 | (uint)(byte)param_1[0xb]) ^ *(uint *)(this + 0x40);
    for (local_8 = 1; uVar8 = (int)local_20 >> 8, uVar9 = (int)local_20 >> 0x10,
        uVar10 = (int)local_2c >> 8, local_8 < *(int *)(this + 0x3d8); local_8 = local_8 + 1) {
      iVar2 = local_8 * 0x20;
      uVar5 = local_20 & 0xff;
      uVar6 = local_2c & 0xff;
      iVar3 = local_8 * 0x20;
      uVar7 = local_28 & 0xff;
      iVar4 = local_8 * 0x20;
      local_20 = *(uint *)(this + local_8 * 0x20 + 0x44) ^
                 *(uint *)(sm_T1 + (local_20 >> 0x18) * 4) ^
                 *(uint *)(sm_T2 + ((int)local_2c >> 0x10 & 0xffU) * 4) ^
                 *(uint *)(sm_T3 + ((int)local_28 >> 8 & 0xffU) * 4) ^
                 *(uint *)(sm_T4 + (local_24 & 0xff) * 4);
      local_2c = *(uint *)(this + iVar2 + 0x38) ^
                 *(uint *)(sm_T1 + (local_2c >> 0x18) * 4) ^
                 *(uint *)(sm_T2 + ((int)local_28 >> 0x10 & 0xffU) * 4) ^
                 *(uint *)(sm_T3 + ((int)local_24 >> 8 & 0xffU) * 4) ^ *(uint *)(sm_T4 + uVar5 * 4);
      local_28 = *(uint *)(this + iVar3 + 0x3c) ^
                 *(uint *)(sm_T1 + (local_28 >> 0x18) * 4) ^
                 *(uint *)(sm_T2 + ((int)local_24 >> 0x10 & 0xffU) * 4) ^
                 *(uint *)(sm_T3 + (uVar8 & 0xff) * 4) ^ *(uint *)(sm_T4 + uVar6 * 4);
      local_24 = *(uint *)(this + iVar4 + 0x40) ^
                 *(uint *)(sm_T1 + (local_24 >> 0x18) * 4) ^ *(uint *)(sm_T2 + (uVar9 & 0xff) * 4) ^
                 *(uint *)(sm_T3 + (uVar10 & 0xff) * 4) ^ *(uint *)(sm_T4 + uVar7 * 4);
    }
    iVar2 = *(int *)(this + 0x3d8);
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x38);
    *param_2 = sm_S[local_2c >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[1] = (byte)((uint)uVar1 >> 0x10) ^ sm_S[(int)local_28 >> 0x10 & 0xff];
    param_2[2] = (byte)((uint)uVar1 >> 8) ^ sm_S[(int)local_24 >> 8 & 0xff];
    param_2[3] = (byte)uVar1 ^ sm_S[local_20 & 0xff];
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x3c);
    param_2[4] = (byte)((uint)uVar1 >> 0x18) ^ sm_S[local_28 >> 0x18];
    param_2[5] = (byte)((uint)uVar1 >> 0x10) ^ sm_S[(int)local_24 >> 0x10 & 0xff];
    param_2[6] = (byte)((uint)uVar1 >> 8) ^ sm_S[uVar8 & 0xff];
    param_2[7] = (byte)uVar1 ^ sm_S[local_2c & 0xff];
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x40);
    param_2[8] = (byte)((uint)uVar1 >> 0x18) ^ sm_S[local_24 >> 0x18];
    param_2[9] = (byte)((uint)uVar1 >> 0x10) ^ sm_S[uVar9 & 0xff];
    param_2[10] = (byte)((uint)uVar1 >> 8) ^ sm_S[uVar10 & 0xff];
    param_2[0xb] = (byte)uVar1 ^ sm_S[local_28 & 0xff];
    uVar1 = *(undefined4 *)(this + iVar2 * 0x20 + 0x44);
    param_2[0xc] = (byte)((uint)uVar1 >> 0x18) ^ sm_S[local_20 >> 0x18];
    param_2[0xd] = (byte)((uint)uVar1 >> 0x10) ^ sm_S[(int)local_2c >> 0x10 & 0xff];
    param_2[0xe] = (byte)((uint)uVar1 >> 8) ^ sm_S[(int)local_28 >> 8 & 0xff];
    param_2[0xf] = (byte)uVar1 ^ sm_S[local_24 & 0xff];
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}
```
