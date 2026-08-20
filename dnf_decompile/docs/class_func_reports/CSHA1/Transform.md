# Transform

`_ZN5CSHA19TransformEPjPKh`

`CSHA1::Transform(unsigned int*, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `CSHA1` | `0x08087daa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08087daa  _ZN5CSHA19TransformEPjPKh
#           CSHA1::Transform(unsigned int*, unsigned char const*)
# range [0x08087daa, 0x0808a19d]
08087daa +0x0000:  push   %ebp
08087dab +0x0001:  mov    %esp,%ebp
08087dad +0x0003:  push   %ebx
08087dae +0x0004:  sub    $0x34,%esp
08087db1 +0x0007:  mov    0xc(%ebp),%eax
08087db4 +0x000a:  mov    (%eax),%eax
08087db6 +0x000c:  mov    %eax,-0x1c(%ebp)
08087db9 +0x000f:  mov    0xc(%ebp),%eax
08087dbc +0x0012:  add    $0x4,%eax
08087dbf +0x0015:  mov    (%eax),%eax
08087dc1 +0x0017:  mov    %eax,-0x18(%ebp)
08087dc4 +0x001a:  mov    0xc(%ebp),%eax
08087dc7 +0x001d:  add    $0x8,%eax
08087dca +0x0020:  mov    (%eax),%eax
08087dcc +0x0022:  mov    %eax,-0x14(%ebp)
08087dcf +0x0025:  mov    0xc(%ebp),%eax
08087dd2 +0x0028:  add    $0xc,%eax
08087dd5 +0x002b:  mov    (%eax),%eax
08087dd7 +0x002d:  mov    %eax,-0x10(%ebp)
08087dda +0x0030:  mov    0xc(%ebp),%eax
08087ddd +0x0033:  add    $0x10,%eax
08087de0 +0x0036:  mov    (%eax),%eax
08087de2 +0x0038:  mov    %eax,-0xc(%ebp)
08087de5 +0x003b:  mov    0x8(%ebp),%eax
08087de8 +0x003e:  mov    0xc0(%eax),%eax
08087dee +0x0044:  movl   $0x40,0x8(%esp)
08087df6 +0x004c:  mov    0x10(%ebp),%edx
08087df9 +0x004f:  mov    %edx,0x4(%esp)
08087dfd +0x0053:  mov    %eax,(%esp)
08087e00 +0x0056:  call   0807d8a0 <_init+0x198>
08087e05 +0x005b:  mov    -0x10(%ebp),%eax
08087e08 +0x005e:  mov    -0x14(%ebp),%edx
08087e0b +0x0061:  xor    %edx,%eax
08087e0d +0x0063:  and    -0x18(%ebp),%eax
08087e10 +0x0066:  mov    %eax,%ecx
08087e12 +0x0068:  xor    -0x10(%ebp),%ecx
08087e15 +0x006b:  mov    0x8(%ebp),%eax
08087e18 +0x006e:  mov    0xc0(%eax),%eax
08087e1e +0x0074:  mov    0x8(%ebp),%edx
08087e21 +0x0077:  mov    0xc0(%edx),%edx
08087e27 +0x007d:  mov    (%edx),%edx
08087e29 +0x007f:  ror    $0x8,%edx
08087e2c +0x0082:  mov    %edx,%ebx
08087e2e +0x0084:  and    $0xff00ff00,%ebx
08087e34 +0x008a:  mov    0x8(%ebp),%edx
08087e37 +0x008d:  mov    0xc0(%edx),%edx
08087e3d +0x0093:  mov    (%edx),%edx
08087e3f +0x0095:  ror    $0x18,%edx
08087e42 +0x0098:  and    $0xff00ff,%edx
08087e48 +0x009e:  or     %ebx,%edx
08087e4a +0x00a0:  mov    %edx,(%eax)
08087e4c +0x00a2:  mov    (%eax),%eax
08087e4e +0x00a4:  lea    (%ecx,%eax,1),%edx
08087e51 +0x00a7:  mov    -0x1c(%ebp),%eax
08087e54 +0x00aa:  ror    $0x1b,%eax
08087e57 +0x00ad:  lea    (%edx,%eax,1),%eax
08087e5a +0x00b0:  add    -0xc(%ebp),%eax
08087e5d +0x00b3:  add    $0x5a827999,%eax
08087e62 +0x00b8:  mov    %eax,-0xc(%ebp)
08087e65 +0x00bb:  rorl   $0x2,-0x18(%ebp)
08087e69 +0x00bf:  mov    -0x14(%ebp),%eax
08087e6c +0x00c2:  mov    -0x18(%ebp),%edx
08087e6f +0x00c5:  xor    %edx,%eax
08087e71 +0x00c7:  and    -0x1c(%ebp),%eax
08087e74 +0x00ca:  mov    %eax,%ecx
08087e76 +0x00cc:  xor    -0x14(%ebp),%ecx
08087e79 +0x00cf:  mov    0x8(%ebp),%eax
08087e7c +0x00d2:  mov    0xc0(%eax),%eax
08087e82 +0x00d8:  mov    0x8(%ebp),%edx
08087e85 +0x00db:  mov    0xc0(%edx),%edx
08087e8b +0x00e1:  mov    0x4(%edx),%edx
08087e8e +0x00e4:  ror    $0x8,%edx
08087e91 +0x00e7:  mov    %edx,%ebx
08087e93 +0x00e9:  and    $0xff00ff00,%ebx
08087e99 +0x00ef:  mov    0x8(%ebp),%edx
08087e9c +0x00f2:  mov    0xc0(%edx),%edx
08087ea2 +0x00f8:  mov    0x4(%edx),%edx
08087ea5 +0x00fb:  ror    $0x18,%edx
08087ea8 +0x00fe:  and    $0xff00ff,%edx
08087eae +0x0104:  or     %ebx,%edx
08087eb0 +0x0106:  mov    %edx,0x4(%eax)
08087eb3 +0x0109:  mov    0x4(%eax),%eax
08087eb6 +0x010c:  lea    (%ecx,%eax,1),%edx
08087eb9 +0x010f:  mov    -0xc(%ebp),%eax
08087ebc +0x0112:  ror    $0x1b,%eax
08087ebf +0x0115:  lea    (%edx,%eax,1),%eax
08087ec2 +0x0118:  add    -0x10(%ebp),%eax
08087ec5 +0x011b:  add    $0x5a827999,%eax
08087eca +0x0120:  mov    %eax,-0x10(%ebp)
08087ecd +0x0123:  rorl   $0x2,-0x1c(%ebp)
08087ed1 +0x0127:  mov    -0x18(%ebp),%eax
08087ed4 +0x012a:  mov    -0x1c(%ebp),%edx
08087ed7 +0x012d:  xor    %edx,%eax
08087ed9 +0x012f:  and    -0xc(%ebp),%eax
08087edc +0x0132:  mov    %eax,%ecx
08087ede +0x0134:  xor    -0x18(%ebp),%ecx
08087ee1 +0x0137:  mov    0x8(%ebp),%eax
08087ee4 +0x013a:  mov    0xc0(%eax),%eax
08087eea +0x0140:  mov    0x8(%ebp),%edx
08087eed +0x0143:  mov    0xc0(%edx),%edx
08087ef3 +0x0149:  mov    0x8(%edx),%edx
08087ef6 +0x014c:  ror    $0x8,%edx
08087ef9 +0x014f:  mov    %edx,%ebx
08087efb +0x0151:  and    $0xff00ff00,%ebx
08087f01 +0x0157:  mov    0x8(%ebp),%edx
08087f04 +0x015a:  mov    0xc0(%edx),%edx
08087f0a +0x0160:  mov    0x8(%edx),%edx
08087f0d +0x0163:  ror    $0x18,%edx
08087f10 +0x0166:  and    $0xff00ff,%edx
08087f16 +0x016c:  or     %ebx,%edx
08087f18 +0x016e:  mov    %edx,0x8(%eax)
08087f1b +0x0171:  mov    0x8(%eax),%eax
08087f1e +0x0174:  lea    (%ecx,%eax,1),%edx
08087f21 +0x0177:  mov    -0x10(%ebp),%eax
08087f24 +0x017a:  ror    $0x1b,%eax
08087f27 +0x017d:  lea    (%edx,%eax,1),%eax
08087f2a +0x0180:  add    -0x14(%ebp),%eax
08087f2d +0x0183:  add    $0x5a827999,%eax
08087f32 +0x0188:  mov    %eax,-0x14(%ebp)
08087f35 +0x018b:  rorl   $0x2,-0xc(%ebp)
08087f39 +0x018f:  mov    -0x1c(%ebp),%eax
08087f3c +0x0192:  mov    -0xc(%ebp),%edx
08087f3f +0x0195:  xor    %edx,%eax
08087f41 +0x0197:  and    -0x10(%ebp),%eax
08087f44 +0x019a:  mov    %eax,%ecx
08087f46 +0x019c:  xor    -0x1c(%ebp),%ecx
08087f49 +0x019f:  mov    0x8(%ebp),%eax
08087f4c +0x01a2:  mov    0xc0(%eax),%eax
08087f52 +0x01a8:  mov    0x8(%ebp),%edx
08087f55 +0x01ab:  mov    0xc0(%edx),%edx
08087f5b +0x01b1:  mov    0xc(%edx),%edx
08087f5e +0x01b4:  ror    $0x8,%edx
08087f61 +0x01b7:  mov    %edx,%ebx
08087f63 +0x01b9:  and    $0xff00ff00,%ebx
08087f69 +0x01bf:  mov    0x8(%ebp),%edx
08087f6c +0x01c2:  mov    0xc0(%edx),%edx
08087f72 +0x01c8:  mov    0xc(%edx),%edx
08087f75 +0x01cb:  ror    $0x18,%edx
08087f78 +0x01ce:  and    $0xff00ff,%edx
08087f7e +0x01d4:  or     %ebx,%edx
08087f80 +0x01d6:  mov    %edx,0xc(%eax)
08087f83 +0x01d9:  mov    0xc(%eax),%eax
08087f86 +0x01dc:  lea    (%ecx,%eax,1),%edx
08087f89 +0x01df:  mov    -0x14(%ebp),%eax
08087f8c +0x01e2:  ror    $0x1b,%eax
08087f8f +0x01e5:  lea    (%edx,%eax,1),%eax
08087f92 +0x01e8:  add    -0x18(%ebp),%eax
08087f95 +0x01eb:  add    $0x5a827999,%eax
08087f9a +0x01f0:  mov    %eax,-0x18(%ebp)
08087f9d +0x01f3:  rorl   $0x2,-0x10(%ebp)
08087fa1 +0x01f7:  mov    -0xc(%ebp),%eax
08087fa4 +0x01fa:  mov    -0x10(%ebp),%edx
08087fa7 +0x01fd:  xor    %edx,%eax
08087fa9 +0x01ff:  and    -0x14(%ebp),%eax
08087fac +0x0202:  mov    %eax,%ecx
08087fae +0x0204:  xor    -0xc(%ebp),%ecx
08087fb1 +0x0207:  mov    0x8(%ebp),%eax
08087fb4 +0x020a:  mov    0xc0(%eax),%eax
08087fba +0x0210:  mov    0x8(%ebp),%edx
08087fbd +0x0213:  mov    0xc0(%edx),%edx
08087fc3 +0x0219:  mov    0x10(%edx),%edx
08087fc6 +0x021c:  ror    $0x8,%edx
08087fc9 +0x021f:  mov    %edx,%ebx
08087fcb +0x0221:  and    $0xff00ff00,%ebx
08087fd1 +0x0227:  mov    0x8(%ebp),%edx
08087fd4 +0x022a:  mov    0xc0(%edx),%edx
08087fda +0x0230:  mov    0x10(%edx),%edx
08087fdd +0x0233:  ror    $0x18,%edx
08087fe0 +0x0236:  and    $0xff00ff,%edx
08087fe6 +0x023c:  or     %ebx,%edx
08087fe8 +0x023e:  mov    %edx,0x10(%eax)
08087feb +0x0241:  mov    0x10(%eax),%eax
08087fee +0x0244:  lea    (%ecx,%eax,1),%edx
08087ff1 +0x0247:  mov    -0x18(%ebp),%eax
08087ff4 +0x024a:  ror    $0x1b,%eax
08087ff7 +0x024d:  lea    (%edx,%eax,1),%eax
08087ffa +0x0250:  add    -0x1c(%ebp),%eax
08087ffd +0x0253:  add    $0x5a827999,%eax
08088002 +0x0258:  mov    %eax,-0x1c(%ebp)
08088005 +0x025b:  rorl   $0x2,-0x14(%ebp)
08088009 +0x025f:  mov    -0x10(%ebp),%eax
0808800c +0x0262:  mov    -0x14(%ebp),%edx
0808800f +0x0265:  xor    %edx,%eax
08088011 +0x0267:  and    -0x18(%ebp),%eax
08088014 +0x026a:  mov    %eax,%ecx
08088016 +0x026c:  xor    -0x10(%ebp),%ecx
08088019 +0x026f:  mov    0x8(%ebp),%eax
0808801c +0x0272:  mov    0xc0(%eax),%eax
08088022 +0x0278:  mov    0x8(%ebp),%edx
08088025 +0x027b:  mov    0xc0(%edx),%edx
0808802b +0x0281:  mov    0x14(%edx),%edx
0808802e +0x0284:  ror    $0x8,%edx
08088031 +0x0287:  mov    %edx,%ebx
08088033 +0x0289:  and    $0xff00ff00,%ebx
08088039 +0x028f:  mov    0x8(%ebp),%edx
0808803c +0x0292:  mov    0xc0(%edx),%edx
08088042 +0x0298:  mov    0x14(%edx),%edx
08088045 +0x029b:  ror    $0x18,%edx
08088048 +0x029e:  and    $0xff00ff,%edx
0808804e +0x02a4:  or     %ebx,%edx
08088050 +0x02a6:  mov    %edx,0x14(%eax)
08088053 +0x02a9:  mov    0x14(%eax),%eax
08088056 +0x02ac:  lea    (%ecx,%eax,1),%edx
08088059 +0x02af:  mov    -0x1c(%ebp),%eax
0808805c +0x02b2:  ror    $0x1b,%eax
0808805f +0x02b5:  lea    (%edx,%eax,1),%eax
08088062 +0x02b8:  add    -0xc(%ebp),%eax
08088065 +0x02bb:  add    $0x5a827999,%eax
0808806a +0x02c0:  mov    %eax,-0xc(%ebp)
0808806d +0x02c3:  rorl   $0x2,-0x18(%ebp)
08088071 +0x02c7:  mov    -0x14(%ebp),%eax
08088074 +0x02ca:  mov    -0x18(%ebp),%edx
08088077 +0x02cd:  xor    %edx,%eax
08088079 +0x02cf:  and    -0x1c(%ebp),%eax
0808807c +0x02d2:  mov    %eax,%ecx
0808807e +0x02d4:  xor    -0x14(%ebp),%ecx
08088081 +0x02d7:  mov    0x8(%ebp),%eax
08088084 +0x02da:  mov    0xc0(%eax),%eax
0808808a +0x02e0:  mov    0x8(%ebp),%edx
0808808d +0x02e3:  mov    0xc0(%edx),%edx
08088093 +0x02e9:  mov    0x18(%edx),%edx
08088096 +0x02ec:  ror    $0x8,%edx
08088099 +0x02ef:  mov    %edx,%ebx
0808809b +0x02f1:  and    $0xff00ff00,%ebx
080880a1 +0x02f7:  mov    0x8(%ebp),%edx
080880a4 +0x02fa:  mov    0xc0(%edx),%edx
080880aa +0x0300:  mov    0x18(%edx),%edx
080880ad +0x0303:  ror    $0x18,%edx
080880b0 +0x0306:  and    $0xff00ff,%edx
080880b6 +0x030c:  or     %ebx,%edx
080880b8 +0x030e:  mov    %edx,0x18(%eax)
080880bb +0x0311:  mov    0x18(%eax),%eax
080880be +0x0314:  lea    (%ecx,%eax,1),%edx
080880c1 +0x0317:  mov    -0xc(%ebp),%eax
080880c4 +0x031a:  ror    $0x1b,%eax
080880c7 +0x031d:  lea    (%edx,%eax,1),%eax
080880ca +0x0320:  add    -0x10(%ebp),%eax
080880cd +0x0323:  add    $0x5a827999,%eax
080880d2 +0x0328:  mov    %eax,-0x10(%ebp)
080880d5 +0x032b:  rorl   $0x2,-0x1c(%ebp)
080880d9 +0x032f:  mov    -0x18(%ebp),%eax
080880dc +0x0332:  mov    -0x1c(%ebp),%edx
080880df +0x0335:  xor    %edx,%eax
080880e1 +0x0337:  and    -0xc(%ebp),%eax
080880e4 +0x033a:  mov    %eax,%ecx
080880e6 +0x033c:  xor    -0x18(%ebp),%ecx
080880e9 +0x033f:  mov    0x8(%ebp),%eax
080880ec +0x0342:  mov    0xc0(%eax),%eax
080880f2 +0x0348:  mov    0x8(%ebp),%edx
080880f5 +0x034b:  mov    0xc0(%edx),%edx
080880fb +0x0351:  mov    0x1c(%edx),%edx
080880fe +0x0354:  ror    $0x8,%edx
08088101 +0x0357:  mov    %edx,%ebx
08088103 +0x0359:  and    $0xff00ff00,%ebx
08088109 +0x035f:  mov    0x8(%ebp),%edx
0808810c +0x0362:  mov    0xc0(%edx),%edx
08088112 +0x0368:  mov    0x1c(%edx),%edx
08088115 +0x036b:  ror    $0x18,%edx
08088118 +0x036e:  and    $0xff00ff,%edx
0808811e +0x0374:  or     %ebx,%edx
08088120 +0x0376:  mov    %edx,0x1c(%eax)
08088123 +0x0379:  mov    0x1c(%eax),%eax
08088126 +0x037c:  lea    (%ecx,%eax,1),%edx
08088129 +0x037f:  mov    -0x10(%ebp),%eax
0808812c +0x0382:  ror    $0x1b,%eax
0808812f +0x0385:  lea    (%edx,%eax,1),%eax
08088132 +0x0388:  add    -0x14(%ebp),%eax
08088135 +0x038b:  add    $0x5a827999,%eax
0808813a +0x0390:  mov    %eax,-0x14(%ebp)
0808813d +0x0393:  rorl   $0x2,-0xc(%ebp)
08088141 +0x0397:  mov    -0x1c(%ebp),%eax
08088144 +0x039a:  mov    -0xc(%ebp),%edx
08088147 +0x039d:  xor    %edx,%eax
08088149 +0x039f:  and    -0x10(%ebp),%eax
0808814c +0x03a2:  mov    %eax,%ecx
0808814e +0x03a4:  xor    -0x1c(%ebp),%ecx
08088151 +0x03a7:  mov    0x8(%ebp),%eax
08088154 +0x03aa:  mov    0xc0(%eax),%eax
0808815a +0x03b0:  mov    0x8(%ebp),%edx
0808815d +0x03b3:  mov    0xc0(%edx),%edx
08088163 +0x03b9:  mov    0x20(%edx),%edx
08088166 +0x03bc:  ror    $0x8,%edx
08088169 +0x03bf:  mov    %edx,%ebx
0808816b +0x03c1:  and    $0xff00ff00,%ebx
08088171 +0x03c7:  mov    0x8(%ebp),%edx
08088174 +0x03ca:  mov    0xc0(%edx),%edx
0808817a +0x03d0:  mov    0x20(%edx),%edx
0808817d +0x03d3:  ror    $0x18,%edx
08088180 +0x03d6:  and    $0xff00ff,%edx
08088186 +0x03dc:  or     %ebx,%edx
08088188 +0x03de:  mov    %edx,0x20(%eax)
0808818b +0x03e1:  mov    0x20(%eax),%eax
0808818e +0x03e4:  lea    (%ecx,%eax,1),%edx
08088191 +0x03e7:  mov    -0x14(%ebp),%eax
08088194 +0x03ea:  ror    $0x1b,%eax
08088197 +0x03ed:  lea    (%edx,%eax,1),%eax
0808819a +0x03f0:  add    -0x18(%ebp),%eax
0808819d +0x03f3:  add    $0x5a827999,%eax
080881a2 +0x03f8:  mov    %eax,-0x18(%ebp)
080881a5 +0x03fb:  rorl   $0x2,-0x10(%ebp)
080881a9 +0x03ff:  mov    -0xc(%ebp),%eax
080881ac +0x0402:  mov    -0x10(%ebp),%edx
080881af +0x0405:  xor    %edx,%eax
080881b1 +0x0407:  and    -0x14(%ebp),%eax
080881b4 +0x040a:  mov    %eax,%ecx
080881b6 +0x040c:  xor    -0xc(%ebp),%ecx
080881b9 +0x040f:  mov    0x8(%ebp),%eax
080881bc +0x0412:  mov    0xc0(%eax),%eax
080881c2 +0x0418:  mov    0x8(%ebp),%edx
080881c5 +0x041b:  mov    0xc0(%edx),%edx
080881cb +0x0421:  mov    0x24(%edx),%edx
080881ce +0x0424:  ror    $0x8,%edx
080881d1 +0x0427:  mov    %edx,%ebx
080881d3 +0x0429:  and    $0xff00ff00,%ebx
080881d9 +0x042f:  mov    0x8(%ebp),%edx
080881dc +0x0432:  mov    0xc0(%edx),%edx
080881e2 +0x0438:  mov    0x24(%edx),%edx
080881e5 +0x043b:  ror    $0x18,%edx
080881e8 +0x043e:  and    $0xff00ff,%edx
080881ee +0x0444:  or     %ebx,%edx
080881f0 +0x0446:  mov    %edx,0x24(%eax)
080881f3 +0x0449:  mov    0x24(%eax),%eax
080881f6 +0x044c:  lea    (%ecx,%eax,1),%edx
080881f9 +0x044f:  mov    -0x18(%ebp),%eax
080881fc +0x0452:  ror    $0x1b,%eax
080881ff +0x0455:  lea    (%edx,%eax,1),%eax
08088202 +0x0458:  add    -0x1c(%ebp),%eax
08088205 +0x045b:  add    $0x5a827999,%eax
0808820a +0x0460:  mov    %eax,-0x1c(%ebp)
0808820d +0x0463:  rorl   $0x2,-0x14(%ebp)
08088211 +0x0467:  mov    -0x10(%ebp),%eax
08088214 +0x046a:  mov    -0x14(%ebp),%edx
08088217 +0x046d:  xor    %edx,%eax
08088219 +0x046f:  and    -0x18(%ebp),%eax
0808821c +0x0472:  mov    %eax,%ecx
0808821e +0x0474:  xor    -0x10(%ebp),%ecx
08088221 +0x0477:  mov    0x8(%ebp),%eax
08088224 +0x047a:  mov    0xc0(%eax),%eax
0808822a +0x0480:  mov    0x8(%ebp),%edx
0808822d +0x0483:  mov    0xc0(%edx),%edx
08088233 +0x0489:  mov    0x28(%edx),%edx
08088236 +0x048c:  ror    $0x8,%edx
08088239 +0x048f:  mov    %edx,%ebx
0808823b +0x0491:  and    $0xff00ff00,%ebx
08088241 +0x0497:  mov    0x8(%ebp),%edx
08088244 +0x049a:  mov    0xc0(%edx),%edx
0808824a +0x04a0:  mov    0x28(%edx),%edx
0808824d +0x04a3:  ror    $0x18,%edx
08088250 +0x04a6:  and    $0xff00ff,%edx
08088256 +0x04ac:  or     %ebx,%edx
08088258 +0x04ae:  mov    %edx,0x28(%eax)
0808825b +0x04b1:  mov    0x28(%eax),%eax
0808825e +0x04b4:  lea    (%ecx,%eax,1),%edx
08088261 +0x04b7:  mov    -0x1c(%ebp),%eax
08088264 +0x04ba:  ror    $0x1b,%eax
08088267 +0x04bd:  lea    (%edx,%eax,1),%eax
0808826a +0x04c0:  add    -0xc(%ebp),%eax
0808826d +0x04c3:  add    $0x5a827999,%eax
08088272 +0x04c8:  mov    %eax,-0xc(%ebp)
08088275 +0x04cb:  rorl   $0x2,-0x18(%ebp)
08088279 +0x04cf:  mov    -0x14(%ebp),%eax
0808827c +0x04d2:  mov    -0x18(%ebp),%edx
0808827f +0x04d5:  xor    %edx,%eax
08088281 +0x04d7:  and    -0x1c(%ebp),%eax
08088284 +0x04da:  mov    %eax,%ecx
08088286 +0x04dc:  xor    -0x14(%ebp),%ecx
08088289 +0x04df:  mov    0x8(%ebp),%eax
0808828c +0x04e2:  mov    0xc0(%eax),%eax
08088292 +0x04e8:  mov    0x8(%ebp),%edx
08088295 +0x04eb:  mov    0xc0(%edx),%edx
0808829b +0x04f1:  mov    0x2c(%edx),%edx
0808829e +0x04f4:  ror    $0x8,%edx
080882a1 +0x04f7:  mov    %edx,%ebx
080882a3 +0x04f9:  and    $0xff00ff00,%ebx
080882a9 +0x04ff:  mov    0x8(%ebp),%edx
080882ac +0x0502:  mov    0xc0(%edx),%edx
080882b2 +0x0508:  mov    0x2c(%edx),%edx
080882b5 +0x050b:  ror    $0x18,%edx
080882b8 +0x050e:  and    $0xff00ff,%edx
080882be +0x0514:  or     %ebx,%edx
080882c0 +0x0516:  mov    %edx,0x2c(%eax)
080882c3 +0x0519:  mov    0x2c(%eax),%eax
080882c6 +0x051c:  lea    (%ecx,%eax,1),%edx
080882c9 +0x051f:  mov    -0xc(%ebp),%eax
080882cc +0x0522:  ror    $0x1b,%eax
080882cf +0x0525:  lea    (%edx,%eax,1),%eax
080882d2 +0x0528:  add    -0x10(%ebp),%eax
080882d5 +0x052b:  add    $0x5a827999,%eax
080882da +0x0530:  mov    %eax,-0x10(%ebp)
080882dd +0x0533:  rorl   $0x2,-0x1c(%ebp)
080882e1 +0x0537:  mov    -0x18(%ebp),%eax
080882e4 +0x053a:  mov    -0x1c(%ebp),%edx
080882e7 +0x053d:  xor    %edx,%eax
080882e9 +0x053f:  and    -0xc(%ebp),%eax
080882ec +0x0542:  mov    %eax,%ecx
080882ee +0x0544:  xor    -0x18(%ebp),%ecx
080882f1 +0x0547:  mov    0x8(%ebp),%eax
080882f4 +0x054a:  mov    0xc0(%eax),%eax
080882fa +0x0550:  mov    0x8(%ebp),%edx
080882fd +0x0553:  mov    0xc0(%edx),%edx
08088303 +0x0559:  mov    0x30(%edx),%edx
08088306 +0x055c:  ror    $0x8,%edx
08088309 +0x055f:  mov    %edx,%ebx
0808830b +0x0561:  and    $0xff00ff00,%ebx
08088311 +0x0567:  mov    0x8(%ebp),%edx
08088314 +0x056a:  mov    0xc0(%edx),%edx
0808831a +0x0570:  mov    0x30(%edx),%edx
0808831d +0x0573:  ror    $0x18,%edx
08088320 +0x0576:  and    $0xff00ff,%edx
08088326 +0x057c:  or     %ebx,%edx
08088328 +0x057e:  mov    %edx,0x30(%eax)
0808832b +0x0581:  mov    0x30(%eax),%eax
0808832e +0x0584:  lea    (%ecx,%eax,1),%edx
08088331 +0x0587:  mov    -0x10(%ebp),%eax
08088334 +0x058a:  ror    $0x1b,%eax
08088337 +0x058d:  lea    (%edx,%eax,1),%eax
0808833a +0x0590:  add    -0x14(%ebp),%eax
0808833d +0x0593:  add    $0x5a827999,%eax
08088342 +0x0598:  mov    %eax,-0x14(%ebp)
08088345 +0x059b:  rorl   $0x2,-0xc(%ebp)
08088349 +0x059f:  mov    -0x1c(%ebp),%eax
0808834c +0x05a2:  mov    -0xc(%ebp),%edx
0808834f +0x05a5:  xor    %edx,%eax
08088351 +0x05a7:  and    -0x10(%ebp),%eax
08088354 +0x05aa:  mov    %eax,%ecx
08088356 +0x05ac:  xor    -0x1c(%ebp),%ecx
08088359 +0x05af:  mov    0x8(%ebp),%eax
0808835c +0x05b2:  mov    0xc0(%eax),%eax
08088362 +0x05b8:  mov    0x8(%ebp),%edx
08088365 +0x05bb:  mov    0xc0(%edx),%edx
0808836b +0x05c1:  mov    0x34(%edx),%edx
0808836e +0x05c4:  ror    $0x8,%edx
08088371 +0x05c7:  mov    %edx,%ebx
08088373 +0x05c9:  and    $0xff00ff00,%ebx
08088379 +0x05cf:  mov    0x8(%ebp),%edx
0808837c +0x05d2:  mov    0xc0(%edx),%edx
08088382 +0x05d8:  mov    0x34(%edx),%edx
08088385 +0x05db:  ror    $0x18,%edx
08088388 +0x05de:  and    $0xff00ff,%edx
0808838e +0x05e4:  or     %ebx,%edx
08088390 +0x05e6:  mov    %edx,0x34(%eax)
08088393 +0x05e9:  mov    0x34(%eax),%eax
08088396 +0x05ec:  lea    (%ecx,%eax,1),%edx
08088399 +0x05ef:  mov    -0x14(%ebp),%eax
0808839c +0x05f2:  ror    $0x1b,%eax
0808839f +0x05f5:  lea    (%edx,%eax,1),%eax
080883a2 +0x05f8:  add    -0x18(%ebp),%eax
080883a5 +0x05fb:  add    $0x5a827999,%eax
080883aa +0x0600:  mov    %eax,-0x18(%ebp)
080883ad +0x0603:  rorl   $0x2,-0x10(%ebp)
080883b1 +0x0607:  mov    -0xc(%ebp),%eax
080883b4 +0x060a:  mov    -0x10(%ebp),%edx
080883b7 +0x060d:  xor    %edx,%eax
080883b9 +0x060f:  and    -0x14(%ebp),%eax
080883bc +0x0612:  mov    %eax,%ecx
080883be +0x0614:  xor    -0xc(%ebp),%ecx
080883c1 +0x0617:  mov    0x8(%ebp),%eax
080883c4 +0x061a:  mov    0xc0(%eax),%eax
080883ca +0x0620:  mov    0x8(%ebp),%edx
080883cd +0x0623:  mov    0xc0(%edx),%edx
080883d3 +0x0629:  mov    0x38(%edx),%edx
080883d6 +0x062c:  ror    $0x8,%edx
080883d9 +0x062f:  mov    %edx,%ebx
080883db +0x0631:  and    $0xff00ff00,%ebx
080883e1 +0x0637:  mov    0x8(%ebp),%edx
080883e4 +0x063a:  mov    0xc0(%edx),%edx
080883ea +0x0640:  mov    0x38(%edx),%edx
080883ed +0x0643:  ror    $0x18,%edx
080883f0 +0x0646:  and    $0xff00ff,%edx
080883f6 +0x064c:  or     %ebx,%edx
080883f8 +0x064e:  mov    %edx,0x38(%eax)
080883fb +0x0651:  mov    0x38(%eax),%eax
080883fe +0x0654:  lea    (%ecx,%eax,1),%edx
08088401 +0x0657:  mov    -0x18(%ebp),%eax
08088404 +0x065a:  ror    $0x1b,%eax
08088407 +0x065d:  lea    (%edx,%eax,1),%eax
0808840a +0x0660:  add    -0x1c(%ebp),%eax
0808840d +0x0663:  add    $0x5a827999,%eax
08088412 +0x0668:  mov    %eax,-0x1c(%ebp)
08088415 +0x066b:  rorl   $0x2,-0x14(%ebp)
08088419 +0x066f:  mov    -0x10(%ebp),%eax
0808841c +0x0672:  mov    -0x14(%ebp),%edx
0808841f +0x0675:  xor    %edx,%eax
08088421 +0x0677:  and    -0x18(%ebp),%eax
08088424 +0x067a:  mov    %eax,%ecx
08088426 +0x067c:  xor    -0x10(%ebp),%ecx
08088429 +0x067f:  mov    0x8(%ebp),%eax
0808842c +0x0682:  mov    0xc0(%eax),%eax
08088432 +0x0688:  mov    0x8(%ebp),%edx
08088435 +0x068b:  mov    0xc0(%edx),%edx
0808843b +0x0691:  mov    0x3c(%edx),%edx
0808843e +0x0694:  ror    $0x8,%edx
08088441 +0x0697:  mov    %edx,%ebx
08088443 +0x0699:  and    $0xff00ff00,%ebx
08088449 +0x069f:  mov    0x8(%ebp),%edx
0808844c +0x06a2:  mov    0xc0(%edx),%edx
08088452 +0x06a8:  mov    0x3c(%edx),%edx
08088455 +0x06ab:  ror    $0x18,%edx
08088458 +0x06ae:  and    $0xff00ff,%edx
0808845e +0x06b4:  or     %ebx,%edx
08088460 +0x06b6:  mov    %edx,0x3c(%eax)
08088463 +0x06b9:  mov    0x3c(%eax),%eax
08088466 +0x06bc:  lea    (%ecx,%eax,1),%edx
08088469 +0x06bf:  mov    -0x1c(%ebp),%eax
0808846c +0x06c2:  ror    $0x1b,%eax
0808846f +0x06c5:  lea    (%edx,%eax,1),%eax
08088472 +0x06c8:  add    -0xc(%ebp),%eax
08088475 +0x06cb:  add    $0x5a827999,%eax
0808847a +0x06d0:  mov    %eax,-0xc(%ebp)
0808847d +0x06d3:  rorl   $0x2,-0x18(%ebp)
08088481 +0x06d7:  mov    -0x14(%ebp),%eax
08088484 +0x06da:  mov    -0x18(%ebp),%edx
08088487 +0x06dd:  xor    %edx,%eax
08088489 +0x06df:  and    -0x1c(%ebp),%eax
0808848c +0x06e2:  mov    %eax,%ecx
0808848e +0x06e4:  xor    -0x14(%ebp),%ecx
08088491 +0x06e7:  mov    0x8(%ebp),%eax
08088494 +0x06ea:  mov    0xc0(%eax),%eax
0808849a +0x06f0:  mov    0x8(%ebp),%edx
0808849d +0x06f3:  mov    0xc0(%edx),%edx
080884a3 +0x06f9:  mov    0x34(%edx),%ebx
080884a6 +0x06fc:  mov    0x8(%ebp),%edx
080884a9 +0x06ff:  mov    0xc0(%edx),%edx
080884af +0x0705:  mov    0x20(%edx),%edx
080884b2 +0x0708:  xor    %edx,%ebx
080884b4 +0x070a:  mov    0x8(%ebp),%edx
080884b7 +0x070d:  mov    0xc0(%edx),%edx
080884bd +0x0713:  mov    0x8(%edx),%edx
080884c0 +0x0716:  xor    %edx,%ebx
080884c2 +0x0718:  mov    0x8(%ebp),%edx
080884c5 +0x071b:  mov    0xc0(%edx),%edx
080884cb +0x0721:  mov    (%edx),%edx
080884cd +0x0723:  xor    %ebx,%edx
080884cf +0x0725:  ror    $0x1f,%edx
080884d2 +0x0728:  mov    %edx,(%eax)
080884d4 +0x072a:  mov    (%eax),%eax
080884d6 +0x072c:  lea    (%ecx,%eax,1),%edx
080884d9 +0x072f:  mov    -0xc(%ebp),%eax
080884dc +0x0732:  ror    $0x1b,%eax
080884df +0x0735:  lea    (%edx,%eax,1),%eax
080884e2 +0x0738:  add    -0x10(%ebp),%eax
080884e5 +0x073b:  add    $0x5a827999,%eax
080884ea +0x0740:  mov    %eax,-0x10(%ebp)
080884ed +0x0743:  rorl   $0x2,-0x1c(%ebp)
080884f1 +0x0747:  mov    -0x18(%ebp),%eax
080884f4 +0x074a:  mov    -0x1c(%ebp),%edx
080884f7 +0x074d:  xor    %edx,%eax
080884f9 +0x074f:  and    -0xc(%ebp),%eax
080884fc +0x0752:  mov    %eax,%ecx
080884fe +0x0754:  xor    -0x18(%ebp),%ecx
08088501 +0x0757:  mov    0x8(%ebp),%eax
08088504 +0x075a:  mov    0xc0(%eax),%eax
0808850a +0x0760:  mov    0x8(%ebp),%edx
0808850d +0x0763:  mov    0xc0(%edx),%edx
08088513 +0x0769:  mov    0x38(%edx),%ebx
08088516 +0x076c:  mov    0x8(%ebp),%edx
08088519 +0x076f:  mov    0xc0(%edx),%edx
0808851f +0x0775:  mov    0x24(%edx),%edx
08088522 +0x0778:  xor    %edx,%ebx
08088524 +0x077a:  mov    0x8(%ebp),%edx
08088527 +0x077d:  mov    0xc0(%edx),%edx
0808852d +0x0783:  mov    0xc(%edx),%edx
08088530 +0x0786:  xor    %edx,%ebx
08088532 +0x0788:  mov    0x8(%ebp),%edx
08088535 +0x078b:  mov    0xc0(%edx),%edx
0808853b +0x0791:  mov    0x4(%edx),%edx
0808853e +0x0794:  xor    %ebx,%edx
08088540 +0x0796:  ror    $0x1f,%edx
08088543 +0x0799:  mov    %edx,0x4(%eax)
08088546 +0x079c:  mov    0x4(%eax),%eax
08088549 +0x079f:  lea    (%ecx,%eax,1),%edx
0808854c +0x07a2:  mov    -0x10(%ebp),%eax
0808854f +0x07a5:  ror    $0x1b,%eax
08088552 +0x07a8:  lea    (%edx,%eax,1),%eax
08088555 +0x07ab:  add    -0x14(%ebp),%eax
08088558 +0x07ae:  add    $0x5a827999,%eax
0808855d +0x07b3:  mov    %eax,-0x14(%ebp)
08088560 +0x07b6:  rorl   $0x2,-0xc(%ebp)
08088564 +0x07ba:  mov    -0x1c(%ebp),%eax
08088567 +0x07bd:  mov    -0xc(%ebp),%edx
0808856a +0x07c0:  xor    %edx,%eax
0808856c +0x07c2:  and    -0x10(%ebp),%eax
0808856f +0x07c5:  mov    %eax,%ecx
08088571 +0x07c7:  xor    -0x1c(%ebp),%ecx
08088574 +0x07ca:  mov    0x8(%ebp),%eax
08088577 +0x07cd:  mov    0xc0(%eax),%eax
0808857d +0x07d3:  mov    0x8(%ebp),%edx
08088580 +0x07d6:  mov    0xc0(%edx),%edx
08088586 +0x07dc:  mov    0x3c(%edx),%ebx
08088589 +0x07df:  mov    0x8(%ebp),%edx
0808858c +0x07e2:  mov    0xc0(%edx),%edx
08088592 +0x07e8:  mov    0x28(%edx),%edx
08088595 +0x07eb:  xor    %edx,%ebx
08088597 +0x07ed:  mov    0x8(%ebp),%edx
0808859a +0x07f0:  mov    0xc0(%edx),%edx
080885a0 +0x07f6:  mov    0x10(%edx),%edx
080885a3 +0x07f9:  xor    %edx,%ebx
080885a5 +0x07fb:  mov    0x8(%ebp),%edx
080885a8 +0x07fe:  mov    0xc0(%edx),%edx
080885ae +0x0804:  mov    0x8(%edx),%edx
080885b1 +0x0807:  xor    %ebx,%edx
080885b3 +0x0809:  ror    $0x1f,%edx
080885b6 +0x080c:  mov    %edx,0x8(%eax)
080885b9 +0x080f:  mov    0x8(%eax),%eax
080885bc +0x0812:  lea    (%ecx,%eax,1),%edx
080885bf +0x0815:  mov    -0x14(%ebp),%eax
080885c2 +0x0818:  ror    $0x1b,%eax
080885c5 +0x081b:  lea    (%edx,%eax,1),%eax
080885c8 +0x081e:  add    -0x18(%ebp),%eax
080885cb +0x0821:  add    $0x5a827999,%eax
080885d0 +0x0826:  mov    %eax,-0x18(%ebp)
080885d3 +0x0829:  rorl   $0x2,-0x10(%ebp)
080885d7 +0x082d:  mov    -0xc(%ebp),%eax
080885da +0x0830:  mov    -0x10(%ebp),%edx
080885dd +0x0833:  xor    %edx,%eax
080885df +0x0835:  and    -0x14(%ebp),%eax
080885e2 +0x0838:  mov    %eax,%ecx
080885e4 +0x083a:  xor    -0xc(%ebp),%ecx
080885e7 +0x083d:  mov    0x8(%ebp),%eax
080885ea +0x0840:  mov    0xc0(%eax),%eax
080885f0 +0x0846:  mov    0x8(%ebp),%edx
080885f3 +0x0849:  mov    0xc0(%edx),%edx
080885f9 +0x084f:  mov    (%edx),%ebx
080885fb +0x0851:  mov    0x8(%ebp),%edx
080885fe +0x0854:  mov    0xc0(%edx),%edx
08088604 +0x085a:  mov    0x2c(%edx),%edx
08088607 +0x085d:  xor    %edx,%ebx
08088609 +0x085f:  mov    0x8(%ebp),%edx
0808860c +0x0862:  mov    0xc0(%edx),%edx
08088612 +0x0868:  mov    0x14(%edx),%edx
08088615 +0x086b:  xor    %edx,%ebx
08088617 +0x086d:  mov    0x8(%ebp),%edx
0808861a +0x0870:  mov    0xc0(%edx),%edx
08088620 +0x0876:  mov    0xc(%edx),%edx
08088623 +0x0879:  xor    %ebx,%edx
08088625 +0x087b:  ror    $0x1f,%edx
08088628 +0x087e:  mov    %edx,0xc(%eax)
0808862b +0x0881:  mov    0xc(%eax),%eax
0808862e +0x0884:  lea    (%ecx,%eax,1),%edx
08088631 +0x0887:  mov    -0x18(%ebp),%eax
08088634 +0x088a:  ror    $0x1b,%eax
08088637 +0x088d:  lea    (%edx,%eax,1),%eax
0808863a +0x0890:  add    -0x1c(%ebp),%eax
0808863d +0x0893:  add    $0x5a827999,%eax
08088642 +0x0898:  mov    %eax,-0x1c(%ebp)
08088645 +0x089b:  rorl   $0x2,-0x14(%ebp)
08088649 +0x089f:  mov    -0x14(%ebp),%eax
0808864c +0x08a2:  mov    -0x18(%ebp),%edx
0808864f +0x08a5:  xor    %edx,%eax
08088651 +0x08a7:  mov    %eax,%ecx
08088653 +0x08a9:  xor    -0x10(%ebp),%ecx
08088656 +0x08ac:  mov    0x8(%ebp),%eax
08088659 +0x08af:  mov    0xc0(%eax),%eax
0808865f +0x08b5:  mov    0x8(%ebp),%edx
08088662 +0x08b8:  mov    0xc0(%edx),%edx
08088668 +0x08be:  mov    0x4(%edx),%ebx
0808866b +0x08c1:  mov    0x8(%ebp),%edx
0808866e +0x08c4:  mov    0xc0(%edx),%edx
08088674 +0x08ca:  mov    0x30(%edx),%edx
08088677 +0x08cd:  xor    %edx,%ebx
08088679 +0x08cf:  mov    0x8(%ebp),%edx
0808867c +0x08d2:  mov    0xc0(%edx),%edx
08088682 +0x08d8:  mov    0x18(%edx),%edx
08088685 +0x08db:  xor    %edx,%ebx
08088687 +0x08dd:  mov    0x8(%ebp),%edx
0808868a +0x08e0:  mov    0xc0(%edx),%edx
08088690 +0x08e6:  mov    0x10(%edx),%edx
08088693 +0x08e9:  xor    %ebx,%edx
08088695 +0x08eb:  ror    $0x1f,%edx
08088698 +0x08ee:  mov    %edx,0x10(%eax)
0808869b +0x08f1:  mov    0x10(%eax),%eax
0808869e +0x08f4:  lea    (%ecx,%eax,1),%edx
080886a1 +0x08f7:  mov    -0x1c(%ebp),%eax
080886a4 +0x08fa:  ror    $0x1b,%eax
080886a7 +0x08fd:  lea    (%edx,%eax,1),%eax
080886aa +0x0900:  add    -0xc(%ebp),%eax
080886ad +0x0903:  add    $0x6ed9eba1,%eax
080886b2 +0x0908:  mov    %eax,-0xc(%ebp)
080886b5 +0x090b:  rorl   $0x2,-0x18(%ebp)
080886b9 +0x090f:  mov    -0x18(%ebp),%eax
080886bc +0x0912:  mov    -0x1c(%ebp),%edx
080886bf +0x0915:  xor    %edx,%eax
080886c1 +0x0917:  mov    %eax,%ecx
080886c3 +0x0919:  xor    -0x14(%ebp),%ecx
080886c6 +0x091c:  mov    0x8(%ebp),%eax
080886c9 +0x091f:  mov    0xc0(%eax),%eax
080886cf +0x0925:  mov    0x8(%ebp),%edx
080886d2 +0x0928:  mov    0xc0(%edx),%edx
080886d8 +0x092e:  mov    0x8(%edx),%ebx
080886db +0x0931:  mov    0x8(%ebp),%edx
080886de +0x0934:  mov    0xc0(%edx),%edx
080886e4 +0x093a:  mov    0x34(%edx),%edx
080886e7 +0x093d:  xor    %edx,%ebx
080886e9 +0x093f:  mov    0x8(%ebp),%edx
080886ec +0x0942:  mov    0xc0(%edx),%edx
080886f2 +0x0948:  mov    0x1c(%edx),%edx
080886f5 +0x094b:  xor    %edx,%ebx
080886f7 +0x094d:  mov    0x8(%ebp),%edx
080886fa +0x0950:  mov    0xc0(%edx),%edx
08088700 +0x0956:  mov    0x14(%edx),%edx
08088703 +0x0959:  xor    %ebx,%edx
08088705 +0x095b:  ror    $0x1f,%edx
08088708 +0x095e:  mov    %edx,0x14(%eax)
0808870b +0x0961:  mov    0x14(%eax),%eax
0808870e +0x0964:  lea    (%ecx,%eax,1),%edx
08088711 +0x0967:  mov    -0xc(%ebp),%eax
08088714 +0x096a:  ror    $0x1b,%eax
08088717 +0x096d:  lea    (%edx,%eax,1),%eax
0808871a +0x0970:  add    -0x10(%ebp),%eax
0808871d +0x0973:  add    $0x6ed9eba1,%eax
08088722 +0x0978:  mov    %eax,-0x10(%ebp)
08088725 +0x097b:  rorl   $0x2,-0x1c(%ebp)
08088729 +0x097f:  mov    -0x1c(%ebp),%eax
0808872c +0x0982:  mov    -0xc(%ebp),%edx
0808872f +0x0985:  xor    %edx,%eax
08088731 +0x0987:  mov    %eax,%ecx
08088733 +0x0989:  xor    -0x18(%ebp),%ecx
08088736 +0x098c:  mov    0x8(%ebp),%eax
08088739 +0x098f:  mov    0xc0(%eax),%eax
0808873f +0x0995:  mov    0x8(%ebp),%edx
08088742 +0x0998:  mov    0xc0(%edx),%edx
08088748 +0x099e:  mov    0xc(%edx),%ebx
0808874b +0x09a1:  mov    0x8(%ebp),%edx
0808874e +0x09a4:  mov    0xc0(%edx),%edx
08088754 +0x09aa:  mov    0x38(%edx),%edx
08088757 +0x09ad:  xor    %edx,%ebx
08088759 +0x09af:  mov    0x8(%ebp),%edx
0808875c +0x09b2:  mov    0xc0(%edx),%edx
08088762 +0x09b8:  mov    0x20(%edx),%edx
08088765 +0x09bb:  xor    %edx,%ebx
08088767 +0x09bd:  mov    0x8(%ebp),%edx
0808876a +0x09c0:  mov    0xc0(%edx),%edx
08088770 +0x09c6:  mov    0x18(%edx),%edx
08088773 +0x09c9:  xor    %ebx,%edx
08088775 +0x09cb:  ror    $0x1f,%edx
08088778 +0x09ce:  mov    %edx,0x18(%eax)
0808877b +0x09d1:  mov    0x18(%eax),%eax
0808877e +0x09d4:  lea    (%ecx,%eax,1),%edx
08088781 +0x09d7:  mov    -0x10(%ebp),%eax
08088784 +0x09da:  ror    $0x1b,%eax
08088787 +0x09dd:  lea    (%edx,%eax,1),%eax
0808878a +0x09e0:  add    -0x14(%ebp),%eax
0808878d +0x09e3:  add    $0x6ed9eba1,%eax
08088792 +0x09e8:  mov    %eax,-0x14(%ebp)
08088795 +0x09eb:  rorl   $0x2,-0xc(%ebp)
08088799 +0x09ef:  mov    -0xc(%ebp),%eax
0808879c +0x09f2:  mov    -0x10(%ebp),%edx
0808879f +0x09f5:  xor    %edx,%eax
080887a1 +0x09f7:  mov    %eax,%ecx
080887a3 +0x09f9:  xor    -0x1c(%ebp),%ecx
080887a6 +0x09fc:  mov    0x8(%ebp),%eax
080887a9 +0x09ff:  mov    0xc0(%eax),%eax
080887af +0x0a05:  mov    0x8(%ebp),%edx
080887b2 +0x0a08:  mov    0xc0(%edx),%edx
080887b8 +0x0a0e:  mov    0x10(%edx),%ebx
080887bb +0x0a11:  mov    0x8(%ebp),%edx
080887be +0x0a14:  mov    0xc0(%edx),%edx
080887c4 +0x0a1a:  mov    0x3c(%edx),%edx
080887c7 +0x0a1d:  xor    %edx,%ebx
080887c9 +0x0a1f:  mov    0x8(%ebp),%edx
080887cc +0x0a22:  mov    0xc0(%edx),%edx
080887d2 +0x0a28:  mov    0x24(%edx),%edx
080887d5 +0x0a2b:  xor    %edx,%ebx
080887d7 +0x0a2d:  mov    0x8(%ebp),%edx
080887da +0x0a30:  mov    0xc0(%edx),%edx
080887e0 +0x0a36:  mov    0x1c(%edx),%edx
080887e3 +0x0a39:  xor    %ebx,%edx
080887e5 +0x0a3b:  ror    $0x1f,%edx
080887e8 +0x0a3e:  mov    %edx,0x1c(%eax)
080887eb +0x0a41:  mov    0x1c(%eax),%eax
080887ee +0x0a44:  lea    (%ecx,%eax,1),%edx
080887f1 +0x0a47:  mov    -0x14(%ebp),%eax
080887f4 +0x0a4a:  ror    $0x1b,%eax
080887f7 +0x0a4d:  lea    (%edx,%eax,1),%eax
080887fa +0x0a50:  add    -0x18(%ebp),%eax
080887fd +0x0a53:  add    $0x6ed9eba1,%eax
08088802 +0x0a58:  mov    %eax,-0x18(%ebp)
08088805 +0x0a5b:  rorl   $0x2,-0x10(%ebp)
08088809 +0x0a5f:  mov    -0x10(%ebp),%eax
0808880c +0x0a62:  mov    -0x14(%ebp),%edx
0808880f +0x0a65:  xor    %edx,%eax
08088811 +0x0a67:  mov    %eax,%ecx
08088813 +0x0a69:  xor    -0xc(%ebp),%ecx
08088816 +0x0a6c:  mov    0x8(%ebp),%eax
08088819 +0x0a6f:  mov    0xc0(%eax),%eax
0808881f +0x0a75:  mov    0x8(%ebp),%edx
08088822 +0x0a78:  mov    0xc0(%edx),%edx
08088828 +0x0a7e:  mov    0x14(%edx),%ebx
0808882b +0x0a81:  mov    0x8(%ebp),%edx
0808882e +0x0a84:  mov    0xc0(%edx),%edx
08088834 +0x0a8a:  mov    (%edx),%edx
08088836 +0x0a8c:  xor    %edx,%ebx
08088838 +0x0a8e:  mov    0x8(%ebp),%edx
0808883b +0x0a91:  mov    0xc0(%edx),%edx
08088841 +0x0a97:  mov    0x28(%edx),%edx
08088844 +0x0a9a:  xor    %edx,%ebx
08088846 +0x0a9c:  mov    0x8(%ebp),%edx
08088849 +0x0a9f:  mov    0xc0(%edx),%edx
0808884f +0x0aa5:  mov    0x20(%edx),%edx
08088852 +0x0aa8:  xor    %ebx,%edx
08088854 +0x0aaa:  ror    $0x1f,%edx
08088857 +0x0aad:  mov    %edx,0x20(%eax)
0808885a +0x0ab0:  mov    0x20(%eax),%eax
0808885d +0x0ab3:  lea    (%ecx,%eax,1),%edx
08088860 +0x0ab6:  mov    -0x18(%ebp),%eax
08088863 +0x0ab9:  ror    $0x1b,%eax
08088866 +0x0abc:  lea    (%edx,%eax,1),%eax
08088869 +0x0abf:  add    -0x1c(%ebp),%eax
0808886c +0x0ac2:  add    $0x6ed9eba1,%eax
08088871 +0x0ac7:  mov    %eax,-0x1c(%ebp)
08088874 +0x0aca:  rorl   $0x2,-0x14(%ebp)
08088878 +0x0ace:  mov    -0x14(%ebp),%eax
0808887b +0x0ad1:  mov    -0x18(%ebp),%edx
0808887e +0x0ad4:  xor    %edx,%eax
08088880 +0x0ad6:  mov    %eax,%ecx
08088882 +0x0ad8:  xor    -0x10(%ebp),%ecx
08088885 +0x0adb:  mov    0x8(%ebp),%eax
08088888 +0x0ade:  mov    0xc0(%eax),%eax
0808888e +0x0ae4:  mov    0x8(%ebp),%edx
08088891 +0x0ae7:  mov    0xc0(%edx),%edx
08088897 +0x0aed:  mov    0x18(%edx),%ebx
0808889a +0x0af0:  mov    0x8(%ebp),%edx
0808889d +0x0af3:  mov    0xc0(%edx),%edx
080888a3 +0x0af9:  mov    0x4(%edx),%edx
080888a6 +0x0afc:  xor    %edx,%ebx
080888a8 +0x0afe:  mov    0x8(%ebp),%edx
080888ab +0x0b01:  mov    0xc0(%edx),%edx
080888b1 +0x0b07:  mov    0x2c(%edx),%edx
080888b4 +0x0b0a:  xor    %edx,%ebx
080888b6 +0x0b0c:  mov    0x8(%ebp),%edx
080888b9 +0x0b0f:  mov    0xc0(%edx),%edx
080888bf +0x0b15:  mov    0x24(%edx),%edx
080888c2 +0x0b18:  xor    %ebx,%edx
080888c4 +0x0b1a:  ror    $0x1f,%edx
080888c7 +0x0b1d:  mov    %edx,0x24(%eax)
080888ca +0x0b20:  mov    0x24(%eax),%eax
080888cd +0x0b23:  lea    (%ecx,%eax,1),%edx
080888d0 +0x0b26:  mov    -0x1c(%ebp),%eax
080888d3 +0x0b29:  ror    $0x1b,%eax
080888d6 +0x0b2c:  lea    (%edx,%eax,1),%eax
080888d9 +0x0b2f:  add    -0xc(%ebp),%eax
080888dc +0x0b32:  add    $0x6ed9eba1,%eax
080888e1 +0x0b37:  mov    %eax,-0xc(%ebp)
080888e4 +0x0b3a:  rorl   $0x2,-0x18(%ebp)
080888e8 +0x0b3e:  mov    -0x18(%ebp),%eax
080888eb +0x0b41:  mov    -0x1c(%ebp),%edx
080888ee +0x0b44:  xor    %edx,%eax
080888f0 +0x0b46:  mov    %eax,%ecx
080888f2 +0x0b48:  xor    -0x14(%ebp),%ecx
080888f5 +0x0b4b:  mov    0x8(%ebp),%eax
080888f8 +0x0b4e:  mov    0xc0(%eax),%eax
080888fe +0x0b54:  mov    0x8(%ebp),%edx
08088901 +0x0b57:  mov    0xc0(%edx),%edx
08088907 +0x0b5d:  mov    0x1c(%edx),%ebx
0808890a +0x0b60:  mov    0x8(%ebp),%edx
0808890d +0x0b63:  mov    0xc0(%edx),%edx
08088913 +0x0b69:  mov    0x8(%edx),%edx
08088916 +0x0b6c:  xor    %edx,%ebx
08088918 +0x0b6e:  mov    0x8(%ebp),%edx
0808891b +0x0b71:  mov    0xc0(%edx),%edx
08088921 +0x0b77:  mov    0x30(%edx),%edx
08088924 +0x0b7a:  xor    %edx,%ebx
08088926 +0x0b7c:  mov    0x8(%ebp),%edx
08088929 +0x0b7f:  mov    0xc0(%edx),%edx
0808892f +0x0b85:  mov    0x28(%edx),%edx
08088932 +0x0b88:  xor    %ebx,%edx
08088934 +0x0b8a:  ror    $0x1f,%edx
08088937 +0x0b8d:  mov    %edx,0x28(%eax)
0808893a +0x0b90:  mov    0x28(%eax),%eax
0808893d +0x0b93:  lea    (%ecx,%eax,1),%edx
08088940 +0x0b96:  mov    -0xc(%ebp),%eax
08088943 +0x0b99:  ror    $0x1b,%eax
08088946 +0x0b9c:  lea    (%edx,%eax,1),%eax
08088949 +0x0b9f:  add    -0x10(%ebp),%eax
0808894c +0x0ba2:  add    $0x6ed9eba1,%eax
08088951 +0x0ba7:  mov    %eax,-0x10(%ebp)
08088954 +0x0baa:  rorl   $0x2,-0x1c(%ebp)
08088958 +0x0bae:  mov    -0x1c(%ebp),%eax
0808895b +0x0bb1:  mov    -0xc(%ebp),%edx
0808895e +0x0bb4:  xor    %edx,%eax
08088960 +0x0bb6:  mov    %eax,%ecx
08088962 +0x0bb8:  xor    -0x18(%ebp),%ecx
08088965 +0x0bbb:  mov    0x8(%ebp),%eax
08088968 +0x0bbe:  mov    0xc0(%eax),%eax
0808896e +0x0bc4:  mov    0x8(%ebp),%edx
08088971 +0x0bc7:  mov    0xc0(%edx),%edx
08088977 +0x0bcd:  mov    0x20(%edx),%ebx
0808897a +0x0bd0:  mov    0x8(%ebp),%edx
0808897d +0x0bd3:  mov    0xc0(%edx),%edx
08088983 +0x0bd9:  mov    0xc(%edx),%edx
08088986 +0x0bdc:  xor    %edx,%ebx
08088988 +0x0bde:  mov    0x8(%ebp),%edx
0808898b +0x0be1:  mov    0xc0(%edx),%edx
08088991 +0x0be7:  mov    0x34(%edx),%edx
08088994 +0x0bea:  xor    %edx,%ebx
08088996 +0x0bec:  mov    0x8(%ebp),%edx
08088999 +0x0bef:  mov    0xc0(%edx),%edx
0808899f +0x0bf5:  mov    0x2c(%edx),%edx
080889a2 +0x0bf8:  xor    %ebx,%edx
080889a4 +0x0bfa:  ror    $0x1f,%edx
080889a7 +0x0bfd:  mov    %edx,0x2c(%eax)
080889aa +0x0c00:  mov    0x2c(%eax),%eax
080889ad +0x0c03:  lea    (%ecx,%eax,1),%edx
080889b0 +0x0c06:  mov    -0x10(%ebp),%eax
080889b3 +0x0c09:  ror    $0x1b,%eax
080889b6 +0x0c0c:  lea    (%edx,%eax,1),%eax
080889b9 +0x0c0f:  add    -0x14(%ebp),%eax
080889bc +0x0c12:  add    $0x6ed9eba1,%eax
080889c1 +0x0c17:  mov    %eax,-0x14(%ebp)
080889c4 +0x0c1a:  rorl   $0x2,-0xc(%ebp)
080889c8 +0x0c1e:  mov    -0xc(%ebp),%eax
080889cb +0x0c21:  mov    -0x10(%ebp),%edx
080889ce +0x0c24:  xor    %edx,%eax
080889d0 +0x0c26:  mov    %eax,%ecx
080889d2 +0x0c28:  xor    -0x1c(%ebp),%ecx
080889d5 +0x0c2b:  mov    0x8(%ebp),%eax
080889d8 +0x0c2e:  mov    0xc0(%eax),%eax
080889de +0x0c34:  mov    0x8(%ebp),%edx
080889e1 +0x0c37:  mov    0xc0(%edx),%edx
080889e7 +0x0c3d:  mov    0x24(%edx),%ebx
080889ea +0x0c40:  mov    0x8(%ebp),%edx
080889ed +0x0c43:  mov    0xc0(%edx),%edx
080889f3 +0x0c49:  mov    0x10(%edx),%edx
080889f6 +0x0c4c:  xor    %edx,%ebx
080889f8 +0x0c4e:  mov    0x8(%ebp),%edx
080889fb +0x0c51:  mov    0xc0(%edx),%edx
08088a01 +0x0c57:  mov    0x38(%edx),%edx
08088a04 +0x0c5a:  xor    %edx,%ebx
08088a06 +0x0c5c:  mov    0x8(%ebp),%edx
08088a09 +0x0c5f:  mov    0xc0(%edx),%edx
08088a0f +0x0c65:  mov    0x30(%edx),%edx
08088a12 +0x0c68:  xor    %ebx,%edx
08088a14 +0x0c6a:  ror    $0x1f,%edx
08088a17 +0x0c6d:  mov    %edx,0x30(%eax)
08088a1a +0x0c70:  mov    0x30(%eax),%eax
08088a1d +0x0c73:  lea    (%ecx,%eax,1),%edx
08088a20 +0x0c76:  mov    -0x14(%ebp),%eax
08088a23 +0x0c79:  ror    $0x1b,%eax
08088a26 +0x0c7c:  lea    (%edx,%eax,1),%eax
08088a29 +0x0c7f:  add    -0x18(%ebp),%eax
08088a2c +0x0c82:  add    $0x6ed9eba1,%eax
08088a31 +0x0c87:  mov    %eax,-0x18(%ebp)
08088a34 +0x0c8a:  rorl   $0x2,-0x10(%ebp)
08088a38 +0x0c8e:  mov    -0x10(%ebp),%eax
08088a3b +0x0c91:  mov    -0x14(%ebp),%edx
08088a3e +0x0c94:  xor    %edx,%eax
08088a40 +0x0c96:  mov    %eax,%ecx
08088a42 +0x0c98:  xor    -0xc(%ebp),%ecx
08088a45 +0x0c9b:  mov    0x8(%ebp),%eax
08088a48 +0x0c9e:  mov    0xc0(%eax),%eax
08088a4e +0x0ca4:  mov    0x8(%ebp),%edx
08088a51 +0x0ca7:  mov    0xc0(%edx),%edx
08088a57 +0x0cad:  mov    0x28(%edx),%ebx
08088a5a +0x0cb0:  mov    0x8(%ebp),%edx
08088a5d +0x0cb3:  mov    0xc0(%edx),%edx
08088a63 +0x0cb9:  mov    0x14(%edx),%edx
08088a66 +0x0cbc:  xor    %edx,%ebx
08088a68 +0x0cbe:  mov    0x8(%ebp),%edx
08088a6b +0x0cc1:  mov    0xc0(%edx),%edx
08088a71 +0x0cc7:  mov    0x3c(%edx),%edx
08088a74 +0x0cca:  xor    %edx,%ebx
08088a76 +0x0ccc:  mov    0x8(%ebp),%edx
08088a79 +0x0ccf:  mov    0xc0(%edx),%edx
08088a7f +0x0cd5:  mov    0x34(%edx),%edx
08088a82 +0x0cd8:  xor    %ebx,%edx
08088a84 +0x0cda:  ror    $0x1f,%edx
08088a87 +0x0cdd:  mov    %edx,0x34(%eax)
08088a8a +0x0ce0:  mov    0x34(%eax),%eax
08088a8d +0x0ce3:  lea    (%ecx,%eax,1),%edx
08088a90 +0x0ce6:  mov    -0x18(%ebp),%eax
08088a93 +0x0ce9:  ror    $0x1b,%eax
08088a96 +0x0cec:  lea    (%edx,%eax,1),%eax
08088a99 +0x0cef:  add    -0x1c(%ebp),%eax
08088a9c +0x0cf2:  add    $0x6ed9eba1,%eax
08088aa1 +0x0cf7:  mov    %eax,-0x1c(%ebp)
08088aa4 +0x0cfa:  rorl   $0x2,-0x14(%ebp)
08088aa8 +0x0cfe:  mov    -0x14(%ebp),%eax
08088aab +0x0d01:  mov    -0x18(%ebp),%edx
08088aae +0x0d04:  xor    %edx,%eax
08088ab0 +0x0d06:  mov    %eax,%ecx
08088ab2 +0x0d08:  xor    -0x10(%ebp),%ecx
08088ab5 +0x0d0b:  mov    0x8(%ebp),%eax
08088ab8 +0x0d0e:  mov    0xc0(%eax),%eax
08088abe +0x0d14:  mov    0x8(%ebp),%edx
08088ac1 +0x0d17:  mov    0xc0(%edx),%edx
08088ac7 +0x0d1d:  mov    0x2c(%edx),%ebx
08088aca +0x0d20:  mov    0x8(%ebp),%edx
08088acd +0x0d23:  mov    0xc0(%edx),%edx
08088ad3 +0x0d29:  mov    0x18(%edx),%edx
08088ad6 +0x0d2c:  xor    %edx,%ebx
08088ad8 +0x0d2e:  mov    0x8(%ebp),%edx
08088adb +0x0d31:  mov    0xc0(%edx),%edx
08088ae1 +0x0d37:  mov    (%edx),%edx
08088ae3 +0x0d39:  xor    %edx,%ebx
08088ae5 +0x0d3b:  mov    0x8(%ebp),%edx
08088ae8 +0x0d3e:  mov    0xc0(%edx),%edx
08088aee +0x0d44:  mov    0x38(%edx),%edx
08088af1 +0x0d47:  xor    %ebx,%edx
08088af3 +0x0d49:  ror    $0x1f,%edx
08088af6 +0x0d4c:  mov    %edx,0x38(%eax)
08088af9 +0x0d4f:  mov    0x38(%eax),%eax
08088afc +0x0d52:  lea    (%ecx,%eax,1),%edx
08088aff +0x0d55:  mov    -0x1c(%ebp),%eax
08088b02 +0x0d58:  ror    $0x1b,%eax
08088b05 +0x0d5b:  lea    (%edx,%eax,1),%eax
08088b08 +0x0d5e:  add    -0xc(%ebp),%eax
08088b0b +0x0d61:  add    $0x6ed9eba1,%eax
08088b10 +0x0d66:  mov    %eax,-0xc(%ebp)
08088b13 +0x0d69:  rorl   $0x2,-0x18(%ebp)
08088b17 +0x0d6d:  mov    -0x18(%ebp),%eax
08088b1a +0x0d70:  mov    -0x1c(%ebp),%edx
08088b1d +0x0d73:  xor    %edx,%eax
08088b1f +0x0d75:  mov    %eax,%ecx
08088b21 +0x0d77:  xor    -0x14(%ebp),%ecx
08088b24 +0x0d7a:  mov    0x8(%ebp),%eax
08088b27 +0x0d7d:  mov    0xc0(%eax),%eax
08088b2d +0x0d83:  mov    0x8(%ebp),%edx
08088b30 +0x0d86:  mov    0xc0(%edx),%edx
08088b36 +0x0d8c:  mov    0x30(%edx),%ebx
08088b39 +0x0d8f:  mov    0x8(%ebp),%edx
08088b3c +0x0d92:  mov    0xc0(%edx),%edx
08088b42 +0x0d98:  mov    0x1c(%edx),%edx
08088b45 +0x0d9b:  xor    %edx,%ebx
08088b47 +0x0d9d:  mov    0x8(%ebp),%edx
08088b4a +0x0da0:  mov    0xc0(%edx),%edx
08088b50 +0x0da6:  mov    0x4(%edx),%edx
08088b53 +0x0da9:  xor    %edx,%ebx
08088b55 +0x0dab:  mov    0x8(%ebp),%edx
08088b58 +0x0dae:  mov    0xc0(%edx),%edx
08088b5e +0x0db4:  mov    0x3c(%edx),%edx
08088b61 +0x0db7:  xor    %ebx,%edx
08088b63 +0x0db9:  ror    $0x1f,%edx
08088b66 +0x0dbc:  mov    %edx,0x3c(%eax)
08088b69 +0x0dbf:  mov    0x3c(%eax),%eax
08088b6c +0x0dc2:  lea    (%ecx,%eax,1),%edx
08088b6f +0x0dc5:  mov    -0xc(%ebp),%eax
08088b72 +0x0dc8:  ror    $0x1b,%eax
08088b75 +0x0dcb:  lea    (%edx,%eax,1),%eax
08088b78 +0x0dce:  add    -0x10(%ebp),%eax
08088b7b +0x0dd1:  add    $0x6ed9eba1,%eax
08088b80 +0x0dd6:  mov    %eax,-0x10(%ebp)
08088b83 +0x0dd9:  rorl   $0x2,-0x1c(%ebp)
08088b87 +0x0ddd:  mov    -0x1c(%ebp),%eax
08088b8a +0x0de0:  mov    -0xc(%ebp),%edx
08088b8d +0x0de3:  xor    %edx,%eax
08088b8f +0x0de5:  mov    %eax,%ecx
08088b91 +0x0de7:  xor    -0x18(%ebp),%ecx
08088b94 +0x0dea:  mov    0x8(%ebp),%eax
08088b97 +0x0ded:  mov    0xc0(%eax),%eax
08088b9d +0x0df3:  mov    0x8(%ebp),%edx
08088ba0 +0x0df6:  mov    0xc0(%edx),%edx
08088ba6 +0x0dfc:  mov    0x34(%edx),%ebx
08088ba9 +0x0dff:  mov    0x8(%ebp),%edx
08088bac +0x0e02:  mov    0xc0(%edx),%edx
08088bb2 +0x0e08:  mov    0x20(%edx),%edx
08088bb5 +0x0e0b:  xor    %edx,%ebx
08088bb7 +0x0e0d:  mov    0x8(%ebp),%edx
08088bba +0x0e10:  mov    0xc0(%edx),%edx
08088bc0 +0x0e16:  mov    0x8(%edx),%edx
08088bc3 +0x0e19:  xor    %edx,%ebx
08088bc5 +0x0e1b:  mov    0x8(%ebp),%edx
08088bc8 +0x0e1e:  mov    0xc0(%edx),%edx
08088bce +0x0e24:  mov    (%edx),%edx
08088bd0 +0x0e26:  xor    %ebx,%edx
08088bd2 +0x0e28:  ror    $0x1f,%edx
08088bd5 +0x0e2b:  mov    %edx,(%eax)
08088bd7 +0x0e2d:  mov    (%eax),%eax
08088bd9 +0x0e2f:  lea    (%ecx,%eax,1),%edx
08088bdc +0x0e32:  mov    -0x10(%ebp),%eax
08088bdf +0x0e35:  ror    $0x1b,%eax
08088be2 +0x0e38:  lea    (%edx,%eax,1),%eax
08088be5 +0x0e3b:  add    -0x14(%ebp),%eax
08088be8 +0x0e3e:  add    $0x6ed9eba1,%eax
08088bed +0x0e43:  mov    %eax,-0x14(%ebp)
08088bf0 +0x0e46:  rorl   $0x2,-0xc(%ebp)
08088bf4 +0x0e4a:  mov    -0xc(%ebp),%eax
08088bf7 +0x0e4d:  mov    -0x10(%ebp),%edx
08088bfa +0x0e50:  xor    %edx,%eax
08088bfc +0x0e52:  mov    %eax,%ecx
08088bfe +0x0e54:  xor    -0x1c(%ebp),%ecx
08088c01 +0x0e57:  mov    0x8(%ebp),%eax
08088c04 +0x0e5a:  mov    0xc0(%eax),%eax
08088c0a +0x0e60:  mov    0x8(%ebp),%edx
08088c0d +0x0e63:  mov    0xc0(%edx),%edx
08088c13 +0x0e69:  mov    0x38(%edx),%ebx
08088c16 +0x0e6c:  mov    0x8(%ebp),%edx
08088c19 +0x0e6f:  mov    0xc0(%edx),%edx
08088c1f +0x0e75:  mov    0x24(%edx),%edx
08088c22 +0x0e78:  xor    %edx,%ebx
08088c24 +0x0e7a:  mov    0x8(%ebp),%edx
08088c27 +0x0e7d:  mov    0xc0(%edx),%edx
08088c2d +0x0e83:  mov    0xc(%edx),%edx
08088c30 +0x0e86:  xor    %edx,%ebx
08088c32 +0x0e88:  mov    0x8(%ebp),%edx
08088c35 +0x0e8b:  mov    0xc0(%edx),%edx
08088c3b +0x0e91:  mov    0x4(%edx),%edx
08088c3e +0x0e94:  xor    %ebx,%edx
08088c40 +0x0e96:  ror    $0x1f,%edx
08088c43 +0x0e99:  mov    %edx,0x4(%eax)
08088c46 +0x0e9c:  mov    0x4(%eax),%eax
08088c49 +0x0e9f:  lea    (%ecx,%eax,1),%edx
08088c4c +0x0ea2:  mov    -0x14(%ebp),%eax
08088c4f +0x0ea5:  ror    $0x1b,%eax
08088c52 +0x0ea8:  lea    (%edx,%eax,1),%eax
08088c55 +0x0eab:  add    -0x18(%ebp),%eax
08088c58 +0x0eae:  add    $0x6ed9eba1,%eax
08088c5d +0x0eb3:  mov    %eax,-0x18(%ebp)
08088c60 +0x0eb6:  rorl   $0x2,-0x10(%ebp)
08088c64 +0x0eba:  mov    -0x10(%ebp),%eax
08088c67 +0x0ebd:  mov    -0x14(%ebp),%edx
08088c6a +0x0ec0:  xor    %edx,%eax
08088c6c +0x0ec2:  mov    %eax,%ecx
08088c6e +0x0ec4:  xor    -0xc(%ebp),%ecx
08088c71 +0x0ec7:  mov    0x8(%ebp),%eax
08088c74 +0x0eca:  mov    0xc0(%eax),%eax
08088c7a +0x0ed0:  mov    0x8(%ebp),%edx
08088c7d +0x0ed3:  mov    0xc0(%edx),%edx
08088c83 +0x0ed9:  mov    0x3c(%edx),%ebx
08088c86 +0x0edc:  mov    0x8(%ebp),%edx
08088c89 +0x0edf:  mov    0xc0(%edx),%edx
08088c8f +0x0ee5:  mov    0x28(%edx),%edx
08088c92 +0x0ee8:  xor    %edx,%ebx
08088c94 +0x0eea:  mov    0x8(%ebp),%edx
08088c97 +0x0eed:  mov    0xc0(%edx),%edx
08088c9d +0x0ef3:  mov    0x10(%edx),%edx
08088ca0 +0x0ef6:  xor    %edx,%ebx
08088ca2 +0x0ef8:  mov    0x8(%ebp),%edx
08088ca5 +0x0efb:  mov    0xc0(%edx),%edx
08088cab +0x0f01:  mov    0x8(%edx),%edx
08088cae +0x0f04:  xor    %ebx,%edx
08088cb0 +0x0f06:  ror    $0x1f,%edx
08088cb3 +0x0f09:  mov    %edx,0x8(%eax)
08088cb6 +0x0f0c:  mov    0x8(%eax),%eax
08088cb9 +0x0f0f:  lea    (%ecx,%eax,1),%edx
08088cbc +0x0f12:  mov    -0x18(%ebp),%eax
08088cbf +0x0f15:  ror    $0x1b,%eax
08088cc2 +0x0f18:  lea    (%edx,%eax,1),%eax
08088cc5 +0x0f1b:  add    -0x1c(%ebp),%eax
08088cc8 +0x0f1e:  add    $0x6ed9eba1,%eax
08088ccd +0x0f23:  mov    %eax,-0x1c(%ebp)
08088cd0 +0x0f26:  rorl   $0x2,-0x14(%ebp)
08088cd4 +0x0f2a:  mov    -0x14(%ebp),%eax
08088cd7 +0x0f2d:  mov    -0x18(%ebp),%edx
08088cda +0x0f30:  xor    %edx,%eax
08088cdc +0x0f32:  mov    %eax,%ecx
08088cde +0x0f34:  xor    -0x10(%ebp),%ecx
08088ce1 +0x0f37:  mov    0x8(%ebp),%eax
08088ce4 +0x0f3a:  mov    0xc0(%eax),%eax
08088cea +0x0f40:  mov    0x8(%ebp),%edx
08088ced +0x0f43:  mov    0xc0(%edx),%edx
08088cf3 +0x0f49:  mov    (%edx),%ebx
08088cf5 +0x0f4b:  mov    0x8(%ebp),%edx
08088cf8 +0x0f4e:  mov    0xc0(%edx),%edx
08088cfe +0x0f54:  mov    0x2c(%edx),%edx
08088d01 +0x0f57:  xor    %edx,%ebx
08088d03 +0x0f59:  mov    0x8(%ebp),%edx
08088d06 +0x0f5c:  mov    0xc0(%edx),%edx
08088d0c +0x0f62:  mov    0x14(%edx),%edx
08088d0f +0x0f65:  xor    %edx,%ebx
08088d11 +0x0f67:  mov    0x8(%ebp),%edx
08088d14 +0x0f6a:  mov    0xc0(%edx),%edx
08088d1a +0x0f70:  mov    0xc(%edx),%edx
08088d1d +0x0f73:  xor    %ebx,%edx
08088d1f +0x0f75:  ror    $0x1f,%edx
08088d22 +0x0f78:  mov    %edx,0xc(%eax)
08088d25 +0x0f7b:  mov    0xc(%eax),%eax
08088d28 +0x0f7e:  lea    (%ecx,%eax,1),%edx
08088d2b +0x0f81:  mov    -0x1c(%ebp),%eax
08088d2e +0x0f84:  ror    $0x1b,%eax
08088d31 +0x0f87:  lea    (%edx,%eax,1),%eax
08088d34 +0x0f8a:  add    -0xc(%ebp),%eax
08088d37 +0x0f8d:  add    $0x6ed9eba1,%eax
08088d3c +0x0f92:  mov    %eax,-0xc(%ebp)
08088d3f +0x0f95:  rorl   $0x2,-0x18(%ebp)
08088d43 +0x0f99:  mov    -0x18(%ebp),%eax
08088d46 +0x0f9c:  mov    -0x1c(%ebp),%edx
08088d49 +0x0f9f:  xor    %edx,%eax
08088d4b +0x0fa1:  mov    %eax,%ecx
08088d4d +0x0fa3:  xor    -0x14(%ebp),%ecx
08088d50 +0x0fa6:  mov    0x8(%ebp),%eax
08088d53 +0x0fa9:  mov    0xc0(%eax),%eax
08088d59 +0x0faf:  mov    0x8(%ebp),%edx
08088d5c +0x0fb2:  mov    0xc0(%edx),%edx
08088d62 +0x0fb8:  mov    0x4(%edx),%ebx
08088d65 +0x0fbb:  mov    0x8(%ebp),%edx
08088d68 +0x0fbe:  mov    0xc0(%edx),%edx
08088d6e +0x0fc4:  mov    0x30(%edx),%edx
08088d71 +0x0fc7:  xor    %edx,%ebx
08088d73 +0x0fc9:  mov    0x8(%ebp),%edx
08088d76 +0x0fcc:  mov    0xc0(%edx),%edx
08088d7c +0x0fd2:  mov    0x18(%edx),%edx
08088d7f +0x0fd5:  xor    %edx,%ebx
08088d81 +0x0fd7:  mov    0x8(%ebp),%edx
08088d84 +0x0fda:  mov    0xc0(%edx),%edx
08088d8a +0x0fe0:  mov    0x10(%edx),%edx
08088d8d +0x0fe3:  xor    %ebx,%edx
08088d8f +0x0fe5:  ror    $0x1f,%edx
08088d92 +0x0fe8:  mov    %edx,0x10(%eax)
08088d95 +0x0feb:  mov    0x10(%eax),%eax
08088d98 +0x0fee:  lea    (%ecx,%eax,1),%edx
08088d9b +0x0ff1:  mov    -0xc(%ebp),%eax
08088d9e +0x0ff4:  ror    $0x1b,%eax
08088da1 +0x0ff7:  lea    (%edx,%eax,1),%eax
08088da4 +0x0ffa:  add    -0x10(%ebp),%eax
08088da7 +0x0ffd:  add    $0x6ed9eba1,%eax
08088dac +0x1002:  mov    %eax,-0x10(%ebp)
08088daf +0x1005:  rorl   $0x2,-0x1c(%ebp)
08088db3 +0x1009:  mov    -0x1c(%ebp),%eax
08088db6 +0x100c:  mov    -0xc(%ebp),%edx
08088db9 +0x100f:  xor    %edx,%eax
08088dbb +0x1011:  mov    %eax,%ecx
08088dbd +0x1013:  xor    -0x18(%ebp),%ecx
08088dc0 +0x1016:  mov    0x8(%ebp),%eax
08088dc3 +0x1019:  mov    0xc0(%eax),%eax
08088dc9 +0x101f:  mov    0x8(%ebp),%edx
08088dcc +0x1022:  mov    0xc0(%edx),%edx
08088dd2 +0x1028:  mov    0x8(%edx),%ebx
08088dd5 +0x102b:  mov    0x8(%ebp),%edx
08088dd8 +0x102e:  mov    0xc0(%edx),%edx
08088dde +0x1034:  mov    0x34(%edx),%edx
08088de1 +0x1037:  xor    %edx,%ebx
08088de3 +0x1039:  mov    0x8(%ebp),%edx
08088de6 +0x103c:  mov    0xc0(%edx),%edx
08088dec +0x1042:  mov    0x1c(%edx),%edx
08088def +0x1045:  xor    %edx,%ebx
08088df1 +0x1047:  mov    0x8(%ebp),%edx
08088df4 +0x104a:  mov    0xc0(%edx),%edx
08088dfa +0x1050:  mov    0x14(%edx),%edx
08088dfd +0x1053:  xor    %ebx,%edx
08088dff +0x1055:  ror    $0x1f,%edx
08088e02 +0x1058:  mov    %edx,0x14(%eax)
08088e05 +0x105b:  mov    0x14(%eax),%eax
08088e08 +0x105e:  lea    (%ecx,%eax,1),%edx
08088e0b +0x1061:  mov    -0x10(%ebp),%eax
08088e0e +0x1064:  ror    $0x1b,%eax
08088e11 +0x1067:  lea    (%edx,%eax,1),%eax
08088e14 +0x106a:  add    -0x14(%ebp),%eax
08088e17 +0x106d:  add    $0x6ed9eba1,%eax
08088e1c +0x1072:  mov    %eax,-0x14(%ebp)
08088e1f +0x1075:  rorl   $0x2,-0xc(%ebp)
08088e23 +0x1079:  mov    -0xc(%ebp),%eax
08088e26 +0x107c:  mov    -0x10(%ebp),%edx
08088e29 +0x107f:  xor    %edx,%eax
08088e2b +0x1081:  mov    %eax,%ecx
08088e2d +0x1083:  xor    -0x1c(%ebp),%ecx
08088e30 +0x1086:  mov    0x8(%ebp),%eax
08088e33 +0x1089:  mov    0xc0(%eax),%eax
08088e39 +0x108f:  mov    0x8(%ebp),%edx
08088e3c +0x1092:  mov    0xc0(%edx),%edx
08088e42 +0x1098:  mov    0xc(%edx),%ebx
08088e45 +0x109b:  mov    0x8(%ebp),%edx
08088e48 +0x109e:  mov    0xc0(%edx),%edx
08088e4e +0x10a4:  mov    0x38(%edx),%edx
08088e51 +0x10a7:  xor    %edx,%ebx
08088e53 +0x10a9:  mov    0x8(%ebp),%edx
08088e56 +0x10ac:  mov    0xc0(%edx),%edx
08088e5c +0x10b2:  mov    0x20(%edx),%edx
08088e5f +0x10b5:  xor    %edx,%ebx
08088e61 +0x10b7:  mov    0x8(%ebp),%edx
08088e64 +0x10ba:  mov    0xc0(%edx),%edx
08088e6a +0x10c0:  mov    0x18(%edx),%edx
08088e6d +0x10c3:  xor    %ebx,%edx
08088e6f +0x10c5:  ror    $0x1f,%edx
08088e72 +0x10c8:  mov    %edx,0x18(%eax)
08088e75 +0x10cb:  mov    0x18(%eax),%eax
08088e78 +0x10ce:  lea    (%ecx,%eax,1),%edx
08088e7b +0x10d1:  mov    -0x14(%ebp),%eax
08088e7e +0x10d4:  ror    $0x1b,%eax
08088e81 +0x10d7:  lea    (%edx,%eax,1),%eax
08088e84 +0x10da:  add    -0x18(%ebp),%eax
08088e87 +0x10dd:  add    $0x6ed9eba1,%eax
08088e8c +0x10e2:  mov    %eax,-0x18(%ebp)
08088e8f +0x10e5:  rorl   $0x2,-0x10(%ebp)
08088e93 +0x10e9:  mov    -0x10(%ebp),%eax
08088e96 +0x10ec:  mov    -0x14(%ebp),%edx
08088e99 +0x10ef:  xor    %edx,%eax
08088e9b +0x10f1:  mov    %eax,%ecx
08088e9d +0x10f3:  xor    -0xc(%ebp),%ecx
08088ea0 +0x10f6:  mov    0x8(%ebp),%eax
08088ea3 +0x10f9:  mov    0xc0(%eax),%eax
08088ea9 +0x10ff:  mov    0x8(%ebp),%edx
08088eac +0x1102:  mov    0xc0(%edx),%edx
08088eb2 +0x1108:  mov    0x10(%edx),%ebx
08088eb5 +0x110b:  mov    0x8(%ebp),%edx
08088eb8 +0x110e:  mov    0xc0(%edx),%edx
08088ebe +0x1114:  mov    0x3c(%edx),%edx
08088ec1 +0x1117:  xor    %edx,%ebx
08088ec3 +0x1119:  mov    0x8(%ebp),%edx
08088ec6 +0x111c:  mov    0xc0(%edx),%edx
08088ecc +0x1122:  mov    0x24(%edx),%edx
08088ecf +0x1125:  xor    %edx,%ebx
08088ed1 +0x1127:  mov    0x8(%ebp),%edx
08088ed4 +0x112a:  mov    0xc0(%edx),%edx
08088eda +0x1130:  mov    0x1c(%edx),%edx
08088edd +0x1133:  xor    %ebx,%edx
08088edf +0x1135:  ror    $0x1f,%edx
08088ee2 +0x1138:  mov    %edx,0x1c(%eax)
08088ee5 +0x113b:  mov    0x1c(%eax),%eax
08088ee8 +0x113e:  lea    (%ecx,%eax,1),%edx
08088eeb +0x1141:  mov    -0x18(%ebp),%eax
08088eee +0x1144:  ror    $0x1b,%eax
08088ef1 +0x1147:  lea    (%edx,%eax,1),%eax
08088ef4 +0x114a:  add    -0x1c(%ebp),%eax
08088ef7 +0x114d:  add    $0x6ed9eba1,%eax
08088efc +0x1152:  mov    %eax,-0x1c(%ebp)
08088eff +0x1155:  rorl   $0x2,-0x14(%ebp)
08088f03 +0x1159:  mov    -0x14(%ebp),%eax
08088f06 +0x115c:  mov    -0x18(%ebp),%edx
08088f09 +0x115f:  or     %edx,%eax
08088f0b +0x1161:  and    -0x10(%ebp),%eax
08088f0e +0x1164:  mov    -0x14(%ebp),%edx
08088f11 +0x1167:  mov    -0x18(%ebp),%ecx
08088f14 +0x116a:  and    %ecx,%edx
08088f16 +0x116c:  mov    %eax,%ebx
08088f18 +0x116e:  or     %edx,%ebx
08088f1a +0x1170:  mov    0x8(%ebp),%eax
08088f1d +0x1173:  mov    0xc0(%eax),%eax
08088f23 +0x1179:  mov    0x8(%ebp),%edx
08088f26 +0x117c:  mov    0xc0(%edx),%edx
08088f2c +0x1182:  mov    0x14(%edx),%ecx
08088f2f +0x1185:  mov    0x8(%ebp),%edx
08088f32 +0x1188:  mov    0xc0(%edx),%edx
08088f38 +0x118e:  mov    (%edx),%edx
08088f3a +0x1190:  xor    %edx,%ecx
08088f3c +0x1192:  mov    0x8(%ebp),%edx
08088f3f +0x1195:  mov    0xc0(%edx),%edx
08088f45 +0x119b:  mov    0x28(%edx),%edx
08088f48 +0x119e:  xor    %edx,%ecx
08088f4a +0x11a0:  mov    0x8(%ebp),%edx
08088f4d +0x11a3:  mov    0xc0(%edx),%edx
08088f53 +0x11a9:  mov    0x20(%edx),%edx
08088f56 +0x11ac:  xor    %ecx,%edx
08088f58 +0x11ae:  ror    $0x1f,%edx
08088f5b +0x11b1:  mov    %edx,0x20(%eax)
08088f5e +0x11b4:  mov    0x20(%eax),%eax
08088f61 +0x11b7:  lea    (%ebx,%eax,1),%edx
08088f64 +0x11ba:  mov    -0x1c(%ebp),%eax
08088f67 +0x11bd:  ror    $0x1b,%eax
08088f6a +0x11c0:  lea    (%edx,%eax,1),%eax
08088f6d +0x11c3:  add    -0xc(%ebp),%eax
08088f70 +0x11c6:  sub    $0x70e44324,%eax
08088f75 +0x11cb:  mov    %eax,-0xc(%ebp)
08088f78 +0x11ce:  rorl   $0x2,-0x18(%ebp)
08088f7c +0x11d2:  mov    -0x18(%ebp),%eax
08088f7f +0x11d5:  mov    -0x1c(%ebp),%edx
08088f82 +0x11d8:  or     %edx,%eax
08088f84 +0x11da:  and    -0x14(%ebp),%eax
08088f87 +0x11dd:  mov    -0x18(%ebp),%edx
08088f8a +0x11e0:  mov    -0x1c(%ebp),%ecx
08088f8d +0x11e3:  and    %ecx,%edx
08088f8f +0x11e5:  mov    %eax,%ebx
08088f91 +0x11e7:  or     %edx,%ebx
08088f93 +0x11e9:  mov    0x8(%ebp),%eax
08088f96 +0x11ec:  mov    0xc0(%eax),%eax
08088f9c +0x11f2:  mov    0x8(%ebp),%edx
08088f9f +0x11f5:  mov    0xc0(%edx),%edx
08088fa5 +0x11fb:  mov    0x18(%edx),%ecx
08088fa8 +0x11fe:  mov    0x8(%ebp),%edx
08088fab +0x1201:  mov    0xc0(%edx),%edx
08088fb1 +0x1207:  mov    0x4(%edx),%edx
08088fb4 +0x120a:  xor    %edx,%ecx
08088fb6 +0x120c:  mov    0x8(%ebp),%edx
08088fb9 +0x120f:  mov    0xc0(%edx),%edx
08088fbf +0x1215:  mov    0x2c(%edx),%edx
08088fc2 +0x1218:  xor    %edx,%ecx
08088fc4 +0x121a:  mov    0x8(%ebp),%edx
08088fc7 +0x121d:  mov    0xc0(%edx),%edx
08088fcd +0x1223:  mov    0x24(%edx),%edx
08088fd0 +0x1226:  xor    %ecx,%edx
08088fd2 +0x1228:  ror    $0x1f,%edx
08088fd5 +0x122b:  mov    %edx,0x24(%eax)
08088fd8 +0x122e:  mov    0x24(%eax),%eax
08088fdb +0x1231:  lea    (%ebx,%eax,1),%edx
08088fde +0x1234:  mov    -0xc(%ebp),%eax
08088fe1 +0x1237:  ror    $0x1b,%eax
08088fe4 +0x123a:  lea    (%edx,%eax,1),%eax
08088fe7 +0x123d:  add    -0x10(%ebp),%eax
08088fea +0x1240:  sub    $0x70e44324,%eax
08088fef +0x1245:  mov    %eax,-0x10(%ebp)
08088ff2 +0x1248:  rorl   $0x2,-0x1c(%ebp)
08088ff6 +0x124c:  mov    -0x1c(%ebp),%eax
08088ff9 +0x124f:  mov    -0xc(%ebp),%edx
08088ffc +0x1252:  or     %edx,%eax
08088ffe +0x1254:  and    -0x18(%ebp),%eax
08089001 +0x1257:  mov    -0x1c(%ebp),%edx
08089004 +0x125a:  mov    -0xc(%ebp),%ecx
08089007 +0x125d:  and    %ecx,%edx
08089009 +0x125f:  mov    %eax,%ebx
0808900b +0x1261:  or     %edx,%ebx
0808900d +0x1263:  mov    0x8(%ebp),%eax
08089010 +0x1266:  mov    0xc0(%eax),%eax
08089016 +0x126c:  mov    0x8(%ebp),%edx
08089019 +0x126f:  mov    0xc0(%edx),%edx
0808901f +0x1275:  mov    0x1c(%edx),%ecx
08089022 +0x1278:  mov    0x8(%ebp),%edx
08089025 +0x127b:  mov    0xc0(%edx),%edx
0808902b +0x1281:  mov    0x8(%edx),%edx
0808902e +0x1284:  xor    %edx,%ecx
08089030 +0x1286:  mov    0x8(%ebp),%edx
08089033 +0x1289:  mov    0xc0(%edx),%edx
08089039 +0x128f:  mov    0x30(%edx),%edx
0808903c +0x1292:  xor    %edx,%ecx
0808903e +0x1294:  mov    0x8(%ebp),%edx
08089041 +0x1297:  mov    0xc0(%edx),%edx
08089047 +0x129d:  mov    0x28(%edx),%edx
0808904a +0x12a0:  xor    %ecx,%edx
0808904c +0x12a2:  ror    $0x1f,%edx
0808904f +0x12a5:  mov    %edx,0x28(%eax)
08089052 +0x12a8:  mov    0x28(%eax),%eax
08089055 +0x12ab:  lea    (%ebx,%eax,1),%edx
08089058 +0x12ae:  mov    -0x10(%ebp),%eax
0808905b +0x12b1:  ror    $0x1b,%eax
0808905e +0x12b4:  lea    (%edx,%eax,1),%eax
08089061 +0x12b7:  add    -0x14(%ebp),%eax
08089064 +0x12ba:  sub    $0x70e44324,%eax
08089069 +0x12bf:  mov    %eax,-0x14(%ebp)
0808906c +0x12c2:  rorl   $0x2,-0xc(%ebp)
08089070 +0x12c6:  mov    -0xc(%ebp),%eax
08089073 +0x12c9:  mov    -0x10(%ebp),%edx
08089076 +0x12cc:  or     %edx,%eax
08089078 +0x12ce:  and    -0x1c(%ebp),%eax
0808907b +0x12d1:  mov    -0xc(%ebp),%edx
0808907e +0x12d4:  mov    -0x10(%ebp),%ecx
08089081 +0x12d7:  and    %ecx,%edx
08089083 +0x12d9:  mov    %eax,%ebx
08089085 +0x12db:  or     %edx,%ebx
08089087 +0x12dd:  mov    0x8(%ebp),%eax
0808908a +0x12e0:  mov    0xc0(%eax),%eax
08089090 +0x12e6:  mov    0x8(%ebp),%edx
08089093 +0x12e9:  mov    0xc0(%edx),%edx
08089099 +0x12ef:  mov    0x20(%edx),%ecx
0808909c +0x12f2:  mov    0x8(%ebp),%edx
0808909f +0x12f5:  mov    0xc0(%edx),%edx
080890a5 +0x12fb:  mov    0xc(%edx),%edx
080890a8 +0x12fe:  xor    %edx,%ecx
080890aa +0x1300:  mov    0x8(%ebp),%edx
080890ad +0x1303:  mov    0xc0(%edx),%edx
080890b3 +0x1309:  mov    0x34(%edx),%edx
080890b6 +0x130c:  xor    %edx,%ecx
080890b8 +0x130e:  mov    0x8(%ebp),%edx
080890bb +0x1311:  mov    0xc0(%edx),%edx
080890c1 +0x1317:  mov    0x2c(%edx),%edx
080890c4 +0x131a:  xor    %ecx,%edx
080890c6 +0x131c:  ror    $0x1f,%edx
080890c9 +0x131f:  mov    %edx,0x2c(%eax)
080890cc +0x1322:  mov    0x2c(%eax),%eax
080890cf +0x1325:  lea    (%ebx,%eax,1),%edx
080890d2 +0x1328:  mov    -0x14(%ebp),%eax
080890d5 +0x132b:  ror    $0x1b,%eax
080890d8 +0x132e:  lea    (%edx,%eax,1),%eax
080890db +0x1331:  add    -0x18(%ebp),%eax
080890de +0x1334:  sub    $0x70e44324,%eax
080890e3 +0x1339:  mov    %eax,-0x18(%ebp)
080890e6 +0x133c:  rorl   $0x2,-0x10(%ebp)
080890ea +0x1340:  mov    -0x10(%ebp),%eax
080890ed +0x1343:  mov    -0x14(%ebp),%edx
080890f0 +0x1346:  or     %edx,%eax
080890f2 +0x1348:  and    -0xc(%ebp),%eax
080890f5 +0x134b:  mov    -0x10(%ebp),%edx
080890f8 +0x134e:  mov    -0x14(%ebp),%ecx
080890fb +0x1351:  and    %ecx,%edx
080890fd +0x1353:  mov    %eax,%ebx
080890ff +0x1355:  or     %edx,%ebx
08089101 +0x1357:  mov    0x8(%ebp),%eax
08089104 +0x135a:  mov    0xc0(%eax),%eax
0808910a +0x1360:  mov    0x8(%ebp),%edx
0808910d +0x1363:  mov    0xc0(%edx),%edx
08089113 +0x1369:  mov    0x24(%edx),%ecx
08089116 +0x136c:  mov    0x8(%ebp),%edx
08089119 +0x136f:  mov    0xc0(%edx),%edx
0808911f +0x1375:  mov    0x10(%edx),%edx
08089122 +0x1378:  xor    %edx,%ecx
08089124 +0x137a:  mov    0x8(%ebp),%edx
08089127 +0x137d:  mov    0xc0(%edx),%edx
0808912d +0x1383:  mov    0x38(%edx),%edx
08089130 +0x1386:  xor    %edx,%ecx
08089132 +0x1388:  mov    0x8(%ebp),%edx
08089135 +0x138b:  mov    0xc0(%edx),%edx
0808913b +0x1391:  mov    0x30(%edx),%edx
0808913e +0x1394:  xor    %ecx,%edx
08089140 +0x1396:  ror    $0x1f,%edx
08089143 +0x1399:  mov    %edx,0x30(%eax)
08089146 +0x139c:  mov    0x30(%eax),%eax
08089149 +0x139f:  lea    (%ebx,%eax,1),%edx
0808914c +0x13a2:  mov    -0x18(%ebp),%eax
0808914f +0x13a5:  ror    $0x1b,%eax
08089152 +0x13a8:  lea    (%edx,%eax,1),%eax
08089155 +0x13ab:  add    -0x1c(%ebp),%eax
08089158 +0x13ae:  sub    $0x70e44324,%eax
0808915d +0x13b3:  mov    %eax,-0x1c(%ebp)
08089160 +0x13b6:  rorl   $0x2,-0x14(%ebp)
08089164 +0x13ba:  mov    -0x14(%ebp),%eax
08089167 +0x13bd:  mov    -0x18(%ebp),%edx
0808916a +0x13c0:  or     %edx,%eax
0808916c +0x13c2:  and    -0x10(%ebp),%eax
0808916f +0x13c5:  mov    -0x14(%ebp),%edx
08089172 +0x13c8:  mov    -0x18(%ebp),%ecx
08089175 +0x13cb:  and    %ecx,%edx
08089177 +0x13cd:  mov    %eax,%ebx
08089179 +0x13cf:  or     %edx,%ebx
0808917b +0x13d1:  mov    0x8(%ebp),%eax
0808917e +0x13d4:  mov    0xc0(%eax),%eax
08089184 +0x13da:  mov    0x8(%ebp),%edx
08089187 +0x13dd:  mov    0xc0(%edx),%edx
0808918d +0x13e3:  mov    0x28(%edx),%ecx
08089190 +0x13e6:  mov    0x8(%ebp),%edx
08089193 +0x13e9:  mov    0xc0(%edx),%edx
08089199 +0x13ef:  mov    0x14(%edx),%edx
0808919c +0x13f2:  xor    %edx,%ecx
0808919e +0x13f4:  mov    0x8(%ebp),%edx
080891a1 +0x13f7:  mov    0xc0(%edx),%edx
080891a7 +0x13fd:  mov    0x3c(%edx),%edx
080891aa +0x1400:  xor    %edx,%ecx
080891ac +0x1402:  mov    0x8(%ebp),%edx
080891af +0x1405:  mov    0xc0(%edx),%edx
080891b5 +0x140b:  mov    0x34(%edx),%edx
080891b8 +0x140e:  xor    %ecx,%edx
080891ba +0x1410:  ror    $0x1f,%edx
080891bd +0x1413:  mov    %edx,0x34(%eax)
080891c0 +0x1416:  mov    0x34(%eax),%eax
080891c3 +0x1419:  lea    (%ebx,%eax,1),%edx
080891c6 +0x141c:  mov    -0x1c(%ebp),%eax
080891c9 +0x141f:  ror    $0x1b,%eax
080891cc +0x1422:  lea    (%edx,%eax,1),%eax
080891cf +0x1425:  add    -0xc(%ebp),%eax
080891d2 +0x1428:  sub    $0x70e44324,%eax
080891d7 +0x142d:  mov    %eax,-0xc(%ebp)
080891da +0x1430:  rorl   $0x2,-0x18(%ebp)
080891de +0x1434:  mov    -0x18(%ebp),%eax
080891e1 +0x1437:  mov    -0x1c(%ebp),%edx
080891e4 +0x143a:  or     %edx,%eax
080891e6 +0x143c:  and    -0x14(%ebp),%eax
080891e9 +0x143f:  mov    -0x18(%ebp),%edx
080891ec +0x1442:  mov    -0x1c(%ebp),%ecx
080891ef +0x1445:  and    %ecx,%edx
080891f1 +0x1447:  mov    %eax,%ebx
080891f3 +0x1449:  or     %edx,%ebx
080891f5 +0x144b:  mov    0x8(%ebp),%eax
080891f8 +0x144e:  mov    0xc0(%eax),%eax
080891fe +0x1454:  mov    0x8(%ebp),%edx
08089201 +0x1457:  mov    0xc0(%edx),%edx
08089207 +0x145d:  mov    0x2c(%edx),%ecx
0808920a +0x1460:  mov    0x8(%ebp),%edx
0808920d +0x1463:  mov    0xc0(%edx),%edx
08089213 +0x1469:  mov    0x18(%edx),%edx
08089216 +0x146c:  xor    %edx,%ecx
08089218 +0x146e:  mov    0x8(%ebp),%edx
0808921b +0x1471:  mov    0xc0(%edx),%edx
08089221 +0x1477:  mov    (%edx),%edx
08089223 +0x1479:  xor    %edx,%ecx
08089225 +0x147b:  mov    0x8(%ebp),%edx
08089228 +0x147e:  mov    0xc0(%edx),%edx
0808922e +0x1484:  mov    0x38(%edx),%edx
08089231 +0x1487:  xor    %ecx,%edx
08089233 +0x1489:  ror    $0x1f,%edx
08089236 +0x148c:  mov    %edx,0x38(%eax)
08089239 +0x148f:  mov    0x38(%eax),%eax
0808923c +0x1492:  lea    (%ebx,%eax,1),%edx
0808923f +0x1495:  mov    -0xc(%ebp),%eax
08089242 +0x1498:  ror    $0x1b,%eax
08089245 +0x149b:  lea    (%edx,%eax,1),%eax
08089248 +0x149e:  add    -0x10(%ebp),%eax
0808924b +0x14a1:  sub    $0x70e44324,%eax
08089250 +0x14a6:  mov    %eax,-0x10(%ebp)
08089253 +0x14a9:  rorl   $0x2,-0x1c(%ebp)
08089257 +0x14ad:  mov    -0x1c(%ebp),%eax
0808925a +0x14b0:  mov    -0xc(%ebp),%edx
0808925d +0x14b3:  or     %edx,%eax
0808925f +0x14b5:  and    -0x18(%ebp),%eax
08089262 +0x14b8:  mov    -0x1c(%ebp),%edx
08089265 +0x14bb:  mov    -0xc(%ebp),%ecx
08089268 +0x14be:  and    %ecx,%edx
0808926a +0x14c0:  mov    %eax,%ebx
0808926c +0x14c2:  or     %edx,%ebx
0808926e +0x14c4:  mov    0x8(%ebp),%eax
08089271 +0x14c7:  mov    0xc0(%eax),%eax
08089277 +0x14cd:  mov    0x8(%ebp),%edx
0808927a +0x14d0:  mov    0xc0(%edx),%edx
08089280 +0x14d6:  mov    0x30(%edx),%ecx
08089283 +0x14d9:  mov    0x8(%ebp),%edx
08089286 +0x14dc:  mov    0xc0(%edx),%edx
0808928c +0x14e2:  mov    0x1c(%edx),%edx
0808928f +0x14e5:  xor    %edx,%ecx
08089291 +0x14e7:  mov    0x8(%ebp),%edx
08089294 +0x14ea:  mov    0xc0(%edx),%edx
0808929a +0x14f0:  mov    0x4(%edx),%edx
0808929d +0x14f3:  xor    %edx,%ecx
0808929f +0x14f5:  mov    0x8(%ebp),%edx
080892a2 +0x14f8:  mov    0xc0(%edx),%edx
080892a8 +0x14fe:  mov    0x3c(%edx),%edx
080892ab +0x1501:  xor    %ecx,%edx
080892ad +0x1503:  ror    $0x1f,%edx
080892b0 +0x1506:  mov    %edx,0x3c(%eax)
080892b3 +0x1509:  mov    0x3c(%eax),%eax
080892b6 +0x150c:  lea    (%ebx,%eax,1),%edx
080892b9 +0x150f:  mov    -0x10(%ebp),%eax
080892bc +0x1512:  ror    $0x1b,%eax
080892bf +0x1515:  lea    (%edx,%eax,1),%eax
080892c2 +0x1518:  add    -0x14(%ebp),%eax
080892c5 +0x151b:  sub    $0x70e44324,%eax
080892ca +0x1520:  mov    %eax,-0x14(%ebp)
080892cd +0x1523:  rorl   $0x2,-0xc(%ebp)
080892d1 +0x1527:  mov    -0xc(%ebp),%eax
080892d4 +0x152a:  mov    -0x10(%ebp),%edx
080892d7 +0x152d:  or     %edx,%eax
080892d9 +0x152f:  and    -0x1c(%ebp),%eax
080892dc +0x1532:  mov    -0xc(%ebp),%edx
080892df +0x1535:  mov    -0x10(%ebp),%ecx
080892e2 +0x1538:  and    %ecx,%edx
080892e4 +0x153a:  mov    %eax,%ebx
080892e6 +0x153c:  or     %edx,%ebx
080892e8 +0x153e:  mov    0x8(%ebp),%eax
080892eb +0x1541:  mov    0xc0(%eax),%eax
080892f1 +0x1547:  mov    0x8(%ebp),%edx
080892f4 +0x154a:  mov    0xc0(%edx),%edx
080892fa +0x1550:  mov    0x34(%edx),%ecx
080892fd +0x1553:  mov    0x8(%ebp),%edx
08089300 +0x1556:  mov    0xc0(%edx),%edx
08089306 +0x155c:  mov    0x20(%edx),%edx
08089309 +0x155f:  xor    %edx,%ecx
0808930b +0x1561:  mov    0x8(%ebp),%edx
0808930e +0x1564:  mov    0xc0(%edx),%edx
08089314 +0x156a:  mov    0x8(%edx),%edx
08089317 +0x156d:  xor    %edx,%ecx
08089319 +0x156f:  mov    0x8(%ebp),%edx
0808931c +0x1572:  mov    0xc0(%edx),%edx
08089322 +0x1578:  mov    (%edx),%edx
08089324 +0x157a:  xor    %ecx,%edx
08089326 +0x157c:  ror    $0x1f,%edx
08089329 +0x157f:  mov    %edx,(%eax)
0808932b +0x1581:  mov    (%eax),%eax
0808932d +0x1583:  lea    (%ebx,%eax,1),%edx
08089330 +0x1586:  mov    -0x14(%ebp),%eax
08089333 +0x1589:  ror    $0x1b,%eax
08089336 +0x158c:  lea    (%edx,%eax,1),%eax
08089339 +0x158f:  add    -0x18(%ebp),%eax
0808933c +0x1592:  sub    $0x70e44324,%eax
08089341 +0x1597:  mov    %eax,-0x18(%ebp)
08089344 +0x159a:  rorl   $0x2,-0x10(%ebp)
08089348 +0x159e:  mov    -0x10(%ebp),%eax
0808934b +0x15a1:  mov    -0x14(%ebp),%edx
0808934e +0x15a4:  or     %edx,%eax
08089350 +0x15a6:  and    -0xc(%ebp),%eax
08089353 +0x15a9:  mov    -0x10(%ebp),%edx
08089356 +0x15ac:  mov    -0x14(%ebp),%ecx
08089359 +0x15af:  and    %ecx,%edx
0808935b +0x15b1:  mov    %eax,%ebx
0808935d +0x15b3:  or     %edx,%ebx
0808935f +0x15b5:  mov    0x8(%ebp),%eax
08089362 +0x15b8:  mov    0xc0(%eax),%eax
08089368 +0x15be:  mov    0x8(%ebp),%edx
0808936b +0x15c1:  mov    0xc0(%edx),%edx
08089371 +0x15c7:  mov    0x38(%edx),%ecx
08089374 +0x15ca:  mov    0x8(%ebp),%edx
08089377 +0x15cd:  mov    0xc0(%edx),%edx
0808937d +0x15d3:  mov    0x24(%edx),%edx
08089380 +0x15d6:  xor    %edx,%ecx
08089382 +0x15d8:  mov    0x8(%ebp),%edx
08089385 +0x15db:  mov    0xc0(%edx),%edx
0808938b +0x15e1:  mov    0xc(%edx),%edx
0808938e +0x15e4:  xor    %edx,%ecx
08089390 +0x15e6:  mov    0x8(%ebp),%edx
08089393 +0x15e9:  mov    0xc0(%edx),%edx
08089399 +0x15ef:  mov    0x4(%edx),%edx
0808939c +0x15f2:  xor    %ecx,%edx
0808939e +0x15f4:  ror    $0x1f,%edx
080893a1 +0x15f7:  mov    %edx,0x4(%eax)
080893a4 +0x15fa:  mov    0x4(%eax),%eax
080893a7 +0x15fd:  lea    (%ebx,%eax,1),%edx
080893aa +0x1600:  mov    -0x18(%ebp),%eax
080893ad +0x1603:  ror    $0x1b,%eax
080893b0 +0x1606:  lea    (%edx,%eax,1),%eax
080893b3 +0x1609:  add    -0x1c(%ebp),%eax
080893b6 +0x160c:  sub    $0x70e44324,%eax
080893bb +0x1611:  mov    %eax,-0x1c(%ebp)
080893be +0x1614:  rorl   $0x2,-0x14(%ebp)
080893c2 +0x1618:  mov    -0x14(%ebp),%eax
080893c5 +0x161b:  mov    -0x18(%ebp),%edx
080893c8 +0x161e:  or     %edx,%eax
080893ca +0x1620:  and    -0x10(%ebp),%eax
080893cd +0x1623:  mov    -0x14(%ebp),%edx
080893d0 +0x1626:  mov    -0x18(%ebp),%ecx
080893d3 +0x1629:  and    %ecx,%edx
080893d5 +0x162b:  mov    %eax,%ebx
080893d7 +0x162d:  or     %edx,%ebx
080893d9 +0x162f:  mov    0x8(%ebp),%eax
080893dc +0x1632:  mov    0xc0(%eax),%eax
080893e2 +0x1638:  mov    0x8(%ebp),%edx
080893e5 +0x163b:  mov    0xc0(%edx),%edx
080893eb +0x1641:  mov    0x3c(%edx),%ecx
080893ee +0x1644:  mov    0x8(%ebp),%edx
080893f1 +0x1647:  mov    0xc0(%edx),%edx
080893f7 +0x164d:  mov    0x28(%edx),%edx
080893fa +0x1650:  xor    %edx,%ecx
080893fc +0x1652:  mov    0x8(%ebp),%edx
080893ff +0x1655:  mov    0xc0(%edx),%edx
08089405 +0x165b:  mov    0x10(%edx),%edx
08089408 +0x165e:  xor    %edx,%ecx
0808940a +0x1660:  mov    0x8(%ebp),%edx
0808940d +0x1663:  mov    0xc0(%edx),%edx
08089413 +0x1669:  mov    0x8(%edx),%edx
08089416 +0x166c:  xor    %ecx,%edx
08089418 +0x166e:  ror    $0x1f,%edx
0808941b +0x1671:  mov    %edx,0x8(%eax)
0808941e +0x1674:  mov    0x8(%eax),%eax
08089421 +0x1677:  lea    (%ebx,%eax,1),%edx
08089424 +0x167a:  mov    -0x1c(%ebp),%eax
08089427 +0x167d:  ror    $0x1b,%eax
0808942a +0x1680:  lea    (%edx,%eax,1),%eax
0808942d +0x1683:  add    -0xc(%ebp),%eax
08089430 +0x1686:  sub    $0x70e44324,%eax
08089435 +0x168b:  mov    %eax,-0xc(%ebp)
08089438 +0x168e:  rorl   $0x2,-0x18(%ebp)
0808943c +0x1692:  mov    -0x18(%ebp),%eax
0808943f +0x1695:  mov    -0x1c(%ebp),%edx
08089442 +0x1698:  or     %edx,%eax
08089444 +0x169a:  and    -0x14(%ebp),%eax
08089447 +0x169d:  mov    -0x18(%ebp),%edx
0808944a +0x16a0:  mov    -0x1c(%ebp),%ecx
0808944d +0x16a3:  and    %ecx,%edx
0808944f +0x16a5:  mov    %eax,%ebx
08089451 +0x16a7:  or     %edx,%ebx
08089453 +0x16a9:  mov    0x8(%ebp),%eax
08089456 +0x16ac:  mov    0xc0(%eax),%eax
0808945c +0x16b2:  mov    0x8(%ebp),%edx
0808945f +0x16b5:  mov    0xc0(%edx),%edx
08089465 +0x16bb:  mov    (%edx),%ecx
08089467 +0x16bd:  mov    0x8(%ebp),%edx
0808946a +0x16c0:  mov    0xc0(%edx),%edx
08089470 +0x16c6:  mov    0x2c(%edx),%edx
08089473 +0x16c9:  xor    %edx,%ecx
08089475 +0x16cb:  mov    0x8(%ebp),%edx
08089478 +0x16ce:  mov    0xc0(%edx),%edx
0808947e +0x16d4:  mov    0x14(%edx),%edx
08089481 +0x16d7:  xor    %edx,%ecx
08089483 +0x16d9:  mov    0x8(%ebp),%edx
08089486 +0x16dc:  mov    0xc0(%edx),%edx
0808948c +0x16e2:  mov    0xc(%edx),%edx
0808948f +0x16e5:  xor    %ecx,%edx
08089491 +0x16e7:  ror    $0x1f,%edx
08089494 +0x16ea:  mov    %edx,0xc(%eax)
08089497 +0x16ed:  mov    0xc(%eax),%eax
0808949a +0x16f0:  lea    (%ebx,%eax,1),%edx
0808949d +0x16f3:  mov    -0xc(%ebp),%eax
080894a0 +0x16f6:  ror    $0x1b,%eax
080894a3 +0x16f9:  lea    (%edx,%eax,1),%eax
080894a6 +0x16fc:  add    -0x10(%ebp),%eax
080894a9 +0x16ff:  sub    $0x70e44324,%eax
080894ae +0x1704:  mov    %eax,-0x10(%ebp)
080894b1 +0x1707:  rorl   $0x2,-0x1c(%ebp)
080894b5 +0x170b:  mov    -0x1c(%ebp),%eax
080894b8 +0x170e:  mov    -0xc(%ebp),%edx
080894bb +0x1711:  or     %edx,%eax
080894bd +0x1713:  and    -0x18(%ebp),%eax
080894c0 +0x1716:  mov    -0x1c(%ebp),%edx
080894c3 +0x1719:  mov    -0xc(%ebp),%ecx
080894c6 +0x171c:  and    %ecx,%edx
080894c8 +0x171e:  mov    %eax,%ebx
080894ca +0x1720:  or     %edx,%ebx
080894cc +0x1722:  mov    0x8(%ebp),%eax
080894cf +0x1725:  mov    0xc0(%eax),%eax
080894d5 +0x172b:  mov    0x8(%ebp),%edx
080894d8 +0x172e:  mov    0xc0(%edx),%edx
080894de +0x1734:  mov    0x4(%edx),%ecx
080894e1 +0x1737:  mov    0x8(%ebp),%edx
080894e4 +0x173a:  mov    0xc0(%edx),%edx
080894ea +0x1740:  mov    0x30(%edx),%edx
080894ed +0x1743:  xor    %edx,%ecx
080894ef +0x1745:  mov    0x8(%ebp),%edx
080894f2 +0x1748:  mov    0xc0(%edx),%edx
080894f8 +0x174e:  mov    0x18(%edx),%edx
080894fb +0x1751:  xor    %edx,%ecx
080894fd +0x1753:  mov    0x8(%ebp),%edx
08089500 +0x1756:  mov    0xc0(%edx),%edx
08089506 +0x175c:  mov    0x10(%edx),%edx
08089509 +0x175f:  xor    %ecx,%edx
0808950b +0x1761:  ror    $0x1f,%edx
0808950e +0x1764:  mov    %edx,0x10(%eax)
08089511 +0x1767:  mov    0x10(%eax),%eax
08089514 +0x176a:  lea    (%ebx,%eax,1),%edx
08089517 +0x176d:  mov    -0x10(%ebp),%eax
0808951a +0x1770:  ror    $0x1b,%eax
0808951d +0x1773:  lea    (%edx,%eax,1),%eax
08089520 +0x1776:  add    -0x14(%ebp),%eax
08089523 +0x1779:  sub    $0x70e44324,%eax
08089528 +0x177e:  mov    %eax,-0x14(%ebp)
0808952b +0x1781:  rorl   $0x2,-0xc(%ebp)
0808952f +0x1785:  mov    -0xc(%ebp),%eax
08089532 +0x1788:  mov    -0x10(%ebp),%edx
08089535 +0x178b:  or     %edx,%eax
08089537 +0x178d:  and    -0x1c(%ebp),%eax
0808953a +0x1790:  mov    -0xc(%ebp),%edx
0808953d +0x1793:  mov    -0x10(%ebp),%ecx
08089540 +0x1796:  and    %ecx,%edx
08089542 +0x1798:  mov    %eax,%ebx
08089544 +0x179a:  or     %edx,%ebx
08089546 +0x179c:  mov    0x8(%ebp),%eax
08089549 +0x179f:  mov    0xc0(%eax),%eax
0808954f +0x17a5:  mov    0x8(%ebp),%edx
08089552 +0x17a8:  mov    0xc0(%edx),%edx
08089558 +0x17ae:  mov    0x8(%edx),%ecx
0808955b +0x17b1:  mov    0x8(%ebp),%edx
0808955e +0x17b4:  mov    0xc0(%edx),%edx
08089564 +0x17ba:  mov    0x34(%edx),%edx
08089567 +0x17bd:  xor    %edx,%ecx
08089569 +0x17bf:  mov    0x8(%ebp),%edx
0808956c +0x17c2:  mov    0xc0(%edx),%edx
08089572 +0x17c8:  mov    0x1c(%edx),%edx
08089575 +0x17cb:  xor    %edx,%ecx
08089577 +0x17cd:  mov    0x8(%ebp),%edx
0808957a +0x17d0:  mov    0xc0(%edx),%edx
08089580 +0x17d6:  mov    0x14(%edx),%edx
08089583 +0x17d9:  xor    %ecx,%edx
08089585 +0x17db:  ror    $0x1f,%edx
08089588 +0x17de:  mov    %edx,0x14(%eax)
0808958b +0x17e1:  mov    0x14(%eax),%eax
0808958e +0x17e4:  lea    (%ebx,%eax,1),%edx
08089591 +0x17e7:  mov    -0x14(%ebp),%eax
08089594 +0x17ea:  ror    $0x1b,%eax
08089597 +0x17ed:  lea    (%edx,%eax,1),%eax
0808959a +0x17f0:  add    -0x18(%ebp),%eax
0808959d +0x17f3:  sub    $0x70e44324,%eax
080895a2 +0x17f8:  mov    %eax,-0x18(%ebp)
080895a5 +0x17fb:  rorl   $0x2,-0x10(%ebp)
080895a9 +0x17ff:  mov    -0x10(%ebp),%eax
080895ac +0x1802:  mov    -0x14(%ebp),%edx
080895af +0x1805:  or     %edx,%eax
080895b1 +0x1807:  and    -0xc(%ebp),%eax
080895b4 +0x180a:  mov    -0x10(%ebp),%edx
080895b7 +0x180d:  mov    -0x14(%ebp),%ecx
080895ba +0x1810:  and    %ecx,%edx
080895bc +0x1812:  mov    %eax,%ebx
080895be +0x1814:  or     %edx,%ebx
080895c0 +0x1816:  mov    0x8(%ebp),%eax
080895c3 +0x1819:  mov    0xc0(%eax),%eax
080895c9 +0x181f:  mov    0x8(%ebp),%edx
080895cc +0x1822:  mov    0xc0(%edx),%edx
080895d2 +0x1828:  mov    0xc(%edx),%ecx
080895d5 +0x182b:  mov    0x8(%ebp),%edx
080895d8 +0x182e:  mov    0xc0(%edx),%edx
080895de +0x1834:  mov    0x38(%edx),%edx
080895e1 +0x1837:  xor    %edx,%ecx
080895e3 +0x1839:  mov    0x8(%ebp),%edx
080895e6 +0x183c:  mov    0xc0(%edx),%edx
080895ec +0x1842:  mov    0x20(%edx),%edx
080895ef +0x1845:  xor    %edx,%ecx
080895f1 +0x1847:  mov    0x8(%ebp),%edx
080895f4 +0x184a:  mov    0xc0(%edx),%edx
080895fa +0x1850:  mov    0x18(%edx),%edx
080895fd +0x1853:  xor    %ecx,%edx
080895ff +0x1855:  ror    $0x1f,%edx
08089602 +0x1858:  mov    %edx,0x18(%eax)
08089605 +0x185b:  mov    0x18(%eax),%eax
08089608 +0x185e:  lea    (%ebx,%eax,1),%edx
0808960b +0x1861:  mov    -0x18(%ebp),%eax
0808960e +0x1864:  ror    $0x1b,%eax
08089611 +0x1867:  lea    (%edx,%eax,1),%eax
08089614 +0x186a:  add    -0x1c(%ebp),%eax
08089617 +0x186d:  sub    $0x70e44324,%eax
0808961c +0x1872:  mov    %eax,-0x1c(%ebp)
0808961f +0x1875:  rorl   $0x2,-0x14(%ebp)
08089623 +0x1879:  mov    -0x14(%ebp),%eax
08089626 +0x187c:  mov    -0x18(%ebp),%edx
08089629 +0x187f:  or     %edx,%eax
0808962b +0x1881:  and    -0x10(%ebp),%eax
0808962e +0x1884:  mov    -0x14(%ebp),%edx
08089631 +0x1887:  mov    -0x18(%ebp),%ecx
08089634 +0x188a:  and    %ecx,%edx
08089636 +0x188c:  mov    %eax,%ebx
08089638 +0x188e:  or     %edx,%ebx
0808963a +0x1890:  mov    0x8(%ebp),%eax
0808963d +0x1893:  mov    0xc0(%eax),%eax
08089643 +0x1899:  mov    0x8(%ebp),%edx
08089646 +0x189c:  mov    0xc0(%edx),%edx
0808964c +0x18a2:  mov    0x10(%edx),%ecx
0808964f +0x18a5:  mov    0x8(%ebp),%edx
08089652 +0x18a8:  mov    0xc0(%edx),%edx
08089658 +0x18ae:  mov    0x3c(%edx),%edx
0808965b +0x18b1:  xor    %edx,%ecx
0808965d +0x18b3:  mov    0x8(%ebp),%edx
08089660 +0x18b6:  mov    0xc0(%edx),%edx
08089666 +0x18bc:  mov    0x24(%edx),%edx
08089669 +0x18bf:  xor    %edx,%ecx
0808966b +0x18c1:  mov    0x8(%ebp),%edx
0808966e +0x18c4:  mov    0xc0(%edx),%edx
08089674 +0x18ca:  mov    0x1c(%edx),%edx
08089677 +0x18cd:  xor    %ecx,%edx
08089679 +0x18cf:  ror    $0x1f,%edx
0808967c +0x18d2:  mov    %edx,0x1c(%eax)
0808967f +0x18d5:  mov    0x1c(%eax),%eax
08089682 +0x18d8:  lea    (%ebx,%eax,1),%edx
08089685 +0x18db:  mov    -0x1c(%ebp),%eax
08089688 +0x18de:  ror    $0x1b,%eax
0808968b +0x18e1:  lea    (%edx,%eax,1),%eax
0808968e +0x18e4:  add    -0xc(%ebp),%eax
08089691 +0x18e7:  sub    $0x70e44324,%eax
08089696 +0x18ec:  mov    %eax,-0xc(%ebp)
08089699 +0x18ef:  rorl   $0x2,-0x18(%ebp)
0808969d +0x18f3:  mov    -0x18(%ebp),%eax
080896a0 +0x18f6:  mov    -0x1c(%ebp),%edx
080896a3 +0x18f9:  or     %edx,%eax
080896a5 +0x18fb:  and    -0x14(%ebp),%eax
080896a8 +0x18fe:  mov    -0x18(%ebp),%edx
080896ab +0x1901:  mov    -0x1c(%ebp),%ecx
080896ae +0x1904:  and    %ecx,%edx
080896b0 +0x1906:  mov    %eax,%ebx
080896b2 +0x1908:  or     %edx,%ebx
080896b4 +0x190a:  mov    0x8(%ebp),%eax
080896b7 +0x190d:  mov    0xc0(%eax),%eax
080896bd +0x1913:  mov    0x8(%ebp),%edx
080896c0 +0x1916:  mov    0xc0(%edx),%edx
080896c6 +0x191c:  mov    0x14(%edx),%ecx
080896c9 +0x191f:  mov    0x8(%ebp),%edx
080896cc +0x1922:  mov    0xc0(%edx),%edx
080896d2 +0x1928:  mov    (%edx),%edx
080896d4 +0x192a:  xor    %edx,%ecx
080896d6 +0x192c:  mov    0x8(%ebp),%edx
080896d9 +0x192f:  mov    0xc0(%edx),%edx
080896df +0x1935:  mov    0x28(%edx),%edx
080896e2 +0x1938:  xor    %edx,%ecx
080896e4 +0x193a:  mov    0x8(%ebp),%edx
080896e7 +0x193d:  mov    0xc0(%edx),%edx
080896ed +0x1943:  mov    0x20(%edx),%edx
080896f0 +0x1946:  xor    %ecx,%edx
080896f2 +0x1948:  ror    $0x1f,%edx
080896f5 +0x194b:  mov    %edx,0x20(%eax)
080896f8 +0x194e:  mov    0x20(%eax),%eax
080896fb +0x1951:  lea    (%ebx,%eax,1),%edx
080896fe +0x1954:  mov    -0xc(%ebp),%eax
08089701 +0x1957:  ror    $0x1b,%eax
08089704 +0x195a:  lea    (%edx,%eax,1),%eax
08089707 +0x195d:  add    -0x10(%ebp),%eax
0808970a +0x1960:  sub    $0x70e44324,%eax
0808970f +0x1965:  mov    %eax,-0x10(%ebp)
08089712 +0x1968:  rorl   $0x2,-0x1c(%ebp)
08089716 +0x196c:  mov    -0x1c(%ebp),%eax
08089719 +0x196f:  mov    -0xc(%ebp),%edx
0808971c +0x1972:  or     %edx,%eax
0808971e +0x1974:  and    -0x18(%ebp),%eax
08089721 +0x1977:  mov    -0x1c(%ebp),%edx
08089724 +0x197a:  mov    -0xc(%ebp),%ecx
08089727 +0x197d:  and    %ecx,%edx
08089729 +0x197f:  mov    %eax,%ebx
0808972b +0x1981:  or     %edx,%ebx
0808972d +0x1983:  mov    0x8(%ebp),%eax
08089730 +0x1986:  mov    0xc0(%eax),%eax
08089736 +0x198c:  mov    0x8(%ebp),%edx
08089739 +0x198f:  mov    0xc0(%edx),%edx
0808973f +0x1995:  mov    0x18(%edx),%ecx
08089742 +0x1998:  mov    0x8(%ebp),%edx
08089745 +0x199b:  mov    0xc0(%edx),%edx
0808974b +0x19a1:  mov    0x4(%edx),%edx
0808974e +0x19a4:  xor    %edx,%ecx
08089750 +0x19a6:  mov    0x8(%ebp),%edx
08089753 +0x19a9:  mov    0xc0(%edx),%edx
08089759 +0x19af:  mov    0x2c(%edx),%edx
0808975c +0x19b2:  xor    %edx,%ecx
0808975e +0x19b4:  mov    0x8(%ebp),%edx
08089761 +0x19b7:  mov    0xc0(%edx),%edx
08089767 +0x19bd:  mov    0x24(%edx),%edx
0808976a +0x19c0:  xor    %ecx,%edx
0808976c +0x19c2:  ror    $0x1f,%edx
0808976f +0x19c5:  mov    %edx,0x24(%eax)
08089772 +0x19c8:  mov    0x24(%eax),%eax
08089775 +0x19cb:  lea    (%ebx,%eax,1),%edx
08089778 +0x19ce:  mov    -0x10(%ebp),%eax
0808977b +0x19d1:  ror    $0x1b,%eax
0808977e +0x19d4:  lea    (%edx,%eax,1),%eax
08089781 +0x19d7:  add    -0x14(%ebp),%eax
08089784 +0x19da:  sub    $0x70e44324,%eax
08089789 +0x19df:  mov    %eax,-0x14(%ebp)
0808978c +0x19e2:  rorl   $0x2,-0xc(%ebp)
08089790 +0x19e6:  mov    -0xc(%ebp),%eax
08089793 +0x19e9:  mov    -0x10(%ebp),%edx
08089796 +0x19ec:  or     %edx,%eax
08089798 +0x19ee:  and    -0x1c(%ebp),%eax
0808979b +0x19f1:  mov    -0xc(%ebp),%edx
0808979e +0x19f4:  mov    -0x10(%ebp),%ecx
080897a1 +0x19f7:  and    %ecx,%edx
080897a3 +0x19f9:  mov    %eax,%ebx
080897a5 +0x19fb:  or     %edx,%ebx
080897a7 +0x19fd:  mov    0x8(%ebp),%eax
080897aa +0x1a00:  mov    0xc0(%eax),%eax
080897b0 +0x1a06:  mov    0x8(%ebp),%edx
080897b3 +0x1a09:  mov    0xc0(%edx),%edx
080897b9 +0x1a0f:  mov    0x1c(%edx),%ecx
080897bc +0x1a12:  mov    0x8(%ebp),%edx
080897bf +0x1a15:  mov    0xc0(%edx),%edx
080897c5 +0x1a1b:  mov    0x8(%edx),%edx
080897c8 +0x1a1e:  xor    %edx,%ecx
080897ca +0x1a20:  mov    0x8(%ebp),%edx
080897cd +0x1a23:  mov    0xc0(%edx),%edx
080897d3 +0x1a29:  mov    0x30(%edx),%edx
080897d6 +0x1a2c:  xor    %edx,%ecx
080897d8 +0x1a2e:  mov    0x8(%ebp),%edx
080897db +0x1a31:  mov    0xc0(%edx),%edx
080897e1 +0x1a37:  mov    0x28(%edx),%edx
080897e4 +0x1a3a:  xor    %ecx,%edx
080897e6 +0x1a3c:  ror    $0x1f,%edx
080897e9 +0x1a3f:  mov    %edx,0x28(%eax)
080897ec +0x1a42:  mov    0x28(%eax),%eax
080897ef +0x1a45:  lea    (%ebx,%eax,1),%edx
080897f2 +0x1a48:  mov    -0x14(%ebp),%eax
080897f5 +0x1a4b:  ror    $0x1b,%eax
080897f8 +0x1a4e:  lea    (%edx,%eax,1),%eax
080897fb +0x1a51:  add    -0x18(%ebp),%eax
080897fe +0x1a54:  sub    $0x70e44324,%eax
08089803 +0x1a59:  mov    %eax,-0x18(%ebp)
08089806 +0x1a5c:  rorl   $0x2,-0x10(%ebp)
0808980a +0x1a60:  mov    -0x10(%ebp),%eax
0808980d +0x1a63:  mov    -0x14(%ebp),%edx
08089810 +0x1a66:  or     %edx,%eax
08089812 +0x1a68:  and    -0xc(%ebp),%eax
08089815 +0x1a6b:  mov    -0x10(%ebp),%edx
08089818 +0x1a6e:  mov    -0x14(%ebp),%ecx
0808981b +0x1a71:  and    %ecx,%edx
0808981d +0x1a73:  mov    %eax,%ebx
0808981f +0x1a75:  or     %edx,%ebx
08089821 +0x1a77:  mov    0x8(%ebp),%eax
08089824 +0x1a7a:  mov    0xc0(%eax),%eax
0808982a +0x1a80:  mov    0x8(%ebp),%edx
0808982d +0x1a83:  mov    0xc0(%edx),%edx
08089833 +0x1a89:  mov    0x20(%edx),%ecx
08089836 +0x1a8c:  mov    0x8(%ebp),%edx
08089839 +0x1a8f:  mov    0xc0(%edx),%edx
0808983f +0x1a95:  mov    0xc(%edx),%edx
08089842 +0x1a98:  xor    %edx,%ecx
08089844 +0x1a9a:  mov    0x8(%ebp),%edx
08089847 +0x1a9d:  mov    0xc0(%edx),%edx
0808984d +0x1aa3:  mov    0x34(%edx),%edx
08089850 +0x1aa6:  xor    %edx,%ecx
08089852 +0x1aa8:  mov    0x8(%ebp),%edx
08089855 +0x1aab:  mov    0xc0(%edx),%edx
0808985b +0x1ab1:  mov    0x2c(%edx),%edx
0808985e +0x1ab4:  xor    %ecx,%edx
08089860 +0x1ab6:  ror    $0x1f,%edx
08089863 +0x1ab9:  mov    %edx,0x2c(%eax)
08089866 +0x1abc:  mov    0x2c(%eax),%eax
08089869 +0x1abf:  lea    (%ebx,%eax,1),%edx
0808986c +0x1ac2:  mov    -0x18(%ebp),%eax
0808986f +0x1ac5:  ror    $0x1b,%eax
08089872 +0x1ac8:  lea    (%edx,%eax,1),%eax
08089875 +0x1acb:  add    -0x1c(%ebp),%eax
08089878 +0x1ace:  sub    $0x70e44324,%eax
0808987d +0x1ad3:  mov    %eax,-0x1c(%ebp)
08089880 +0x1ad6:  rorl   $0x2,-0x14(%ebp)
08089884 +0x1ada:  mov    -0x14(%ebp),%eax
08089887 +0x1add:  mov    -0x18(%ebp),%edx
0808988a +0x1ae0:  xor    %edx,%eax
0808988c +0x1ae2:  mov    %eax,%ecx
0808988e +0x1ae4:  xor    -0x10(%ebp),%ecx
08089891 +0x1ae7:  mov    0x8(%ebp),%eax
08089894 +0x1aea:  mov    0xc0(%eax),%eax
0808989a +0x1af0:  mov    0x8(%ebp),%edx
0808989d +0x1af3:  mov    0xc0(%edx),%edx
080898a3 +0x1af9:  mov    0x24(%edx),%ebx
080898a6 +0x1afc:  mov    0x8(%ebp),%edx
080898a9 +0x1aff:  mov    0xc0(%edx),%edx
080898af +0x1b05:  mov    0x10(%edx),%edx
080898b2 +0x1b08:  xor    %edx,%ebx
080898b4 +0x1b0a:  mov    0x8(%ebp),%edx
080898b7 +0x1b0d:  mov    0xc0(%edx),%edx
080898bd +0x1b13:  mov    0x38(%edx),%edx
080898c0 +0x1b16:  xor    %edx,%ebx
080898c2 +0x1b18:  mov    0x8(%ebp),%edx
080898c5 +0x1b1b:  mov    0xc0(%edx),%edx
080898cb +0x1b21:  mov    0x30(%edx),%edx
080898ce +0x1b24:  xor    %ebx,%edx
080898d0 +0x1b26:  ror    $0x1f,%edx
080898d3 +0x1b29:  mov    %edx,0x30(%eax)
080898d6 +0x1b2c:  mov    0x30(%eax),%eax
080898d9 +0x1b2f:  lea    (%ecx,%eax,1),%edx
080898dc +0x1b32:  mov    -0x1c(%ebp),%eax
080898df +0x1b35:  ror    $0x1b,%eax
080898e2 +0x1b38:  lea    (%edx,%eax,1),%eax
080898e5 +0x1b3b:  add    -0xc(%ebp),%eax
080898e8 +0x1b3e:  sub    $0x359d3e2a,%eax
080898ed +0x1b43:  mov    %eax,-0xc(%ebp)
080898f0 +0x1b46:  rorl   $0x2,-0x18(%ebp)
080898f4 +0x1b4a:  mov    -0x18(%ebp),%eax
080898f7 +0x1b4d:  mov    -0x1c(%ebp),%edx
080898fa +0x1b50:  xor    %edx,%eax
080898fc +0x1b52:  mov    %eax,%ecx
080898fe +0x1b54:  xor    -0x14(%ebp),%ecx
08089901 +0x1b57:  mov    0x8(%ebp),%eax
08089904 +0x1b5a:  mov    0xc0(%eax),%eax
0808990a +0x1b60:  mov    0x8(%ebp),%edx
0808990d +0x1b63:  mov    0xc0(%edx),%edx
08089913 +0x1b69:  mov    0x28(%edx),%ebx
08089916 +0x1b6c:  mov    0x8(%ebp),%edx
08089919 +0x1b6f:  mov    0xc0(%edx),%edx
0808991f +0x1b75:  mov    0x14(%edx),%edx
08089922 +0x1b78:  xor    %edx,%ebx
08089924 +0x1b7a:  mov    0x8(%ebp),%edx
08089927 +0x1b7d:  mov    0xc0(%edx),%edx
0808992d +0x1b83:  mov    0x3c(%edx),%edx
08089930 +0x1b86:  xor    %edx,%ebx
08089932 +0x1b88:  mov    0x8(%ebp),%edx
08089935 +0x1b8b:  mov    0xc0(%edx),%edx
0808993b +0x1b91:  mov    0x34(%edx),%edx
0808993e +0x1b94:  xor    %ebx,%edx
08089940 +0x1b96:  ror    $0x1f,%edx
08089943 +0x1b99:  mov    %edx,0x34(%eax)
08089946 +0x1b9c:  mov    0x34(%eax),%eax
08089949 +0x1b9f:  lea    (%ecx,%eax,1),%edx
0808994c +0x1ba2:  mov    -0xc(%ebp),%eax
0808994f +0x1ba5:  ror    $0x1b,%eax
08089952 +0x1ba8:  lea    (%edx,%eax,1),%eax
08089955 +0x1bab:  add    -0x10(%ebp),%eax
08089958 +0x1bae:  sub    $0x359d3e2a,%eax
0808995d +0x1bb3:  mov    %eax,-0x10(%ebp)
08089960 +0x1bb6:  rorl   $0x2,-0x1c(%ebp)
08089964 +0x1bba:  mov    -0x1c(%ebp),%eax
08089967 +0x1bbd:  mov    -0xc(%ebp),%edx
0808996a +0x1bc0:  xor    %edx,%eax
0808996c +0x1bc2:  mov    %eax,%ecx
0808996e +0x1bc4:  xor    -0x18(%ebp),%ecx
08089971 +0x1bc7:  mov    0x8(%ebp),%eax
08089974 +0x1bca:  mov    0xc0(%eax),%eax
0808997a +0x1bd0:  mov    0x8(%ebp),%edx
0808997d +0x1bd3:  mov    0xc0(%edx),%edx
08089983 +0x1bd9:  mov    0x2c(%edx),%ebx
08089986 +0x1bdc:  mov    0x8(%ebp),%edx
08089989 +0x1bdf:  mov    0xc0(%edx),%edx
0808998f +0x1be5:  mov    0x18(%edx),%edx
08089992 +0x1be8:  xor    %edx,%ebx
08089994 +0x1bea:  mov    0x8(%ebp),%edx
08089997 +0x1bed:  mov    0xc0(%edx),%edx
0808999d +0x1bf3:  mov    (%edx),%edx
0808999f +0x1bf5:  xor    %edx,%ebx
080899a1 +0x1bf7:  mov    0x8(%ebp),%edx
080899a4 +0x1bfa:  mov    0xc0(%edx),%edx
080899aa +0x1c00:  mov    0x38(%edx),%edx
080899ad +0x1c03:  xor    %ebx,%edx
080899af +0x1c05:  ror    $0x1f,%edx
080899b2 +0x1c08:  mov    %edx,0x38(%eax)
080899b5 +0x1c0b:  mov    0x38(%eax),%eax
080899b8 +0x1c0e:  lea    (%ecx,%eax,1),%edx
080899bb +0x1c11:  mov    -0x10(%ebp),%eax
080899be +0x1c14:  ror    $0x1b,%eax
080899c1 +0x1c17:  lea    (%edx,%eax,1),%eax
080899c4 +0x1c1a:  add    -0x14(%ebp),%eax
080899c7 +0x1c1d:  sub    $0x359d3e2a,%eax
080899cc +0x1c22:  mov    %eax,-0x14(%ebp)
080899cf +0x1c25:  rorl   $0x2,-0xc(%ebp)
080899d3 +0x1c29:  mov    -0xc(%ebp),%eax
080899d6 +0x1c2c:  mov    -0x10(%ebp),%edx
080899d9 +0x1c2f:  xor    %edx,%eax
080899db +0x1c31:  mov    %eax,%ecx
080899dd +0x1c33:  xor    -0x1c(%ebp),%ecx
080899e0 +0x1c36:  mov    0x8(%ebp),%eax
080899e3 +0x1c39:  mov    0xc0(%eax),%eax
080899e9 +0x1c3f:  mov    0x8(%ebp),%edx
080899ec +0x1c42:  mov    0xc0(%edx),%edx
080899f2 +0x1c48:  mov    0x30(%edx),%ebx
080899f5 +0x1c4b:  mov    0x8(%ebp),%edx
080899f8 +0x1c4e:  mov    0xc0(%edx),%edx
080899fe +0x1c54:  mov    0x1c(%edx),%edx
08089a01 +0x1c57:  xor    %edx,%ebx
08089a03 +0x1c59:  mov    0x8(%ebp),%edx
08089a06 +0x1c5c:  mov    0xc0(%edx),%edx
08089a0c +0x1c62:  mov    0x4(%edx),%edx
08089a0f +0x1c65:  xor    %edx,%ebx
08089a11 +0x1c67:  mov    0x8(%ebp),%edx
08089a14 +0x1c6a:  mov    0xc0(%edx),%edx
08089a1a +0x1c70:  mov    0x3c(%edx),%edx
08089a1d +0x1c73:  xor    %ebx,%edx
08089a1f +0x1c75:  ror    $0x1f,%edx
08089a22 +0x1c78:  mov    %edx,0x3c(%eax)
08089a25 +0x1c7b:  mov    0x3c(%eax),%eax
08089a28 +0x1c7e:  lea    (%ecx,%eax,1),%edx
08089a2b +0x1c81:  mov    -0x14(%ebp),%eax
08089a2e +0x1c84:  ror    $0x1b,%eax
08089a31 +0x1c87:  lea    (%edx,%eax,1),%eax
08089a34 +0x1c8a:  add    -0x18(%ebp),%eax
08089a37 +0x1c8d:  sub    $0x359d3e2a,%eax
08089a3c +0x1c92:  mov    %eax,-0x18(%ebp)
08089a3f +0x1c95:  rorl   $0x2,-0x10(%ebp)
08089a43 +0x1c99:  mov    -0x10(%ebp),%eax
08089a46 +0x1c9c:  mov    -0x14(%ebp),%edx
08089a49 +0x1c9f:  xor    %edx,%eax
08089a4b +0x1ca1:  mov    %eax,%ecx
08089a4d +0x1ca3:  xor    -0xc(%ebp),%ecx
08089a50 +0x1ca6:  mov    0x8(%ebp),%eax
08089a53 +0x1ca9:  mov    0xc0(%eax),%eax
08089a59 +0x1caf:  mov    0x8(%ebp),%edx
08089a5c +0x1cb2:  mov    0xc0(%edx),%edx
08089a62 +0x1cb8:  mov    0x34(%edx),%ebx
08089a65 +0x1cbb:  mov    0x8(%ebp),%edx
08089a68 +0x1cbe:  mov    0xc0(%edx),%edx
08089a6e +0x1cc4:  mov    0x20(%edx),%edx
08089a71 +0x1cc7:  xor    %edx,%ebx
08089a73 +0x1cc9:  mov    0x8(%ebp),%edx
08089a76 +0x1ccc:  mov    0xc0(%edx),%edx
08089a7c +0x1cd2:  mov    0x8(%edx),%edx
08089a7f +0x1cd5:  xor    %edx,%ebx
08089a81 +0x1cd7:  mov    0x8(%ebp),%edx
08089a84 +0x1cda:  mov    0xc0(%edx),%edx
08089a8a +0x1ce0:  mov    (%edx),%edx
08089a8c +0x1ce2:  xor    %ebx,%edx
08089a8e +0x1ce4:  ror    $0x1f,%edx
08089a91 +0x1ce7:  mov    %edx,(%eax)
08089a93 +0x1ce9:  mov    (%eax),%eax
08089a95 +0x1ceb:  lea    (%ecx,%eax,1),%edx
08089a98 +0x1cee:  mov    -0x18(%ebp),%eax
08089a9b +0x1cf1:  ror    $0x1b,%eax
08089a9e +0x1cf4:  lea    (%edx,%eax,1),%eax
08089aa1 +0x1cf7:  add    -0x1c(%ebp),%eax
08089aa4 +0x1cfa:  sub    $0x359d3e2a,%eax
08089aa9 +0x1cff:  mov    %eax,-0x1c(%ebp)
08089aac +0x1d02:  rorl   $0x2,-0x14(%ebp)
08089ab0 +0x1d06:  mov    -0x14(%ebp),%eax
08089ab3 +0x1d09:  mov    -0x18(%ebp),%edx
08089ab6 +0x1d0c:  xor    %edx,%eax
08089ab8 +0x1d0e:  mov    %eax,%ecx
08089aba +0x1d10:  xor    -0x10(%ebp),%ecx
08089abd +0x1d13:  mov    0x8(%ebp),%eax
08089ac0 +0x1d16:  mov    0xc0(%eax),%eax
08089ac6 +0x1d1c:  mov    0x8(%ebp),%edx
08089ac9 +0x1d1f:  mov    0xc0(%edx),%edx
08089acf +0x1d25:  mov    0x38(%edx),%ebx
08089ad2 +0x1d28:  mov    0x8(%ebp),%edx
08089ad5 +0x1d2b:  mov    0xc0(%edx),%edx
08089adb +0x1d31:  mov    0x24(%edx),%edx
08089ade +0x1d34:  xor    %edx,%ebx
08089ae0 +0x1d36:  mov    0x8(%ebp),%edx
08089ae3 +0x1d39:  mov    0xc0(%edx),%edx
08089ae9 +0x1d3f:  mov    0xc(%edx),%edx
08089aec +0x1d42:  xor    %edx,%ebx
08089aee +0x1d44:  mov    0x8(%ebp),%edx
08089af1 +0x1d47:  mov    0xc0(%edx),%edx
08089af7 +0x1d4d:  mov    0x4(%edx),%edx
08089afa +0x1d50:  xor    %ebx,%edx
08089afc +0x1d52:  ror    $0x1f,%edx
08089aff +0x1d55:  mov    %edx,0x4(%eax)
08089b02 +0x1d58:  mov    0x4(%eax),%eax
08089b05 +0x1d5b:  lea    (%ecx,%eax,1),%edx
08089b08 +0x1d5e:  mov    -0x1c(%ebp),%eax
08089b0b +0x1d61:  ror    $0x1b,%eax
08089b0e +0x1d64:  lea    (%edx,%eax,1),%eax
08089b11 +0x1d67:  add    -0xc(%ebp),%eax
08089b14 +0x1d6a:  sub    $0x359d3e2a,%eax
08089b19 +0x1d6f:  mov    %eax,-0xc(%ebp)
08089b1c +0x1d72:  rorl   $0x2,-0x18(%ebp)
08089b20 +0x1d76:  mov    -0x18(%ebp),%eax
08089b23 +0x1d79:  mov    -0x1c(%ebp),%edx
08089b26 +0x1d7c:  xor    %edx,%eax
08089b28 +0x1d7e:  mov    %eax,%ecx
08089b2a +0x1d80:  xor    -0x14(%ebp),%ecx
08089b2d +0x1d83:  mov    0x8(%ebp),%eax
08089b30 +0x1d86:  mov    0xc0(%eax),%eax
08089b36 +0x1d8c:  mov    0x8(%ebp),%edx
08089b39 +0x1d8f:  mov    0xc0(%edx),%edx
08089b3f +0x1d95:  mov    0x3c(%edx),%ebx
08089b42 +0x1d98:  mov    0x8(%ebp),%edx
08089b45 +0x1d9b:  mov    0xc0(%edx),%edx
08089b4b +0x1da1:  mov    0x28(%edx),%edx
08089b4e +0x1da4:  xor    %edx,%ebx
08089b50 +0x1da6:  mov    0x8(%ebp),%edx
08089b53 +0x1da9:  mov    0xc0(%edx),%edx
08089b59 +0x1daf:  mov    0x10(%edx),%edx
08089b5c +0x1db2:  xor    %edx,%ebx
08089b5e +0x1db4:  mov    0x8(%ebp),%edx
08089b61 +0x1db7:  mov    0xc0(%edx),%edx
08089b67 +0x1dbd:  mov    0x8(%edx),%edx
08089b6a +0x1dc0:  xor    %ebx,%edx
08089b6c +0x1dc2:  ror    $0x1f,%edx
08089b6f +0x1dc5:  mov    %edx,0x8(%eax)
08089b72 +0x1dc8:  mov    0x8(%eax),%eax
08089b75 +0x1dcb:  lea    (%ecx,%eax,1),%edx
08089b78 +0x1dce:  mov    -0xc(%ebp),%eax
08089b7b +0x1dd1:  ror    $0x1b,%eax
08089b7e +0x1dd4:  lea    (%edx,%eax,1),%eax
08089b81 +0x1dd7:  add    -0x10(%ebp),%eax
08089b84 +0x1dda:  sub    $0x359d3e2a,%eax
08089b89 +0x1ddf:  mov    %eax,-0x10(%ebp)
08089b8c +0x1de2:  rorl   $0x2,-0x1c(%ebp)
08089b90 +0x1de6:  mov    -0x1c(%ebp),%eax
08089b93 +0x1de9:  mov    -0xc(%ebp),%edx
08089b96 +0x1dec:  xor    %edx,%eax
08089b98 +0x1dee:  mov    %eax,%ecx
08089b9a +0x1df0:  xor    -0x18(%ebp),%ecx
08089b9d +0x1df3:  mov    0x8(%ebp),%eax
08089ba0 +0x1df6:  mov    0xc0(%eax),%eax
08089ba6 +0x1dfc:  mov    0x8(%ebp),%edx
08089ba9 +0x1dff:  mov    0xc0(%edx),%edx
08089baf +0x1e05:  mov    (%edx),%ebx
08089bb1 +0x1e07:  mov    0x8(%ebp),%edx
08089bb4 +0x1e0a:  mov    0xc0(%edx),%edx
08089bba +0x1e10:  mov    0x2c(%edx),%edx
08089bbd +0x1e13:  xor    %edx,%ebx
08089bbf +0x1e15:  mov    0x8(%ebp),%edx
08089bc2 +0x1e18:  mov    0xc0(%edx),%edx
08089bc8 +0x1e1e:  mov    0x14(%edx),%edx
08089bcb +0x1e21:  xor    %edx,%ebx
08089bcd +0x1e23:  mov    0x8(%ebp),%edx
08089bd0 +0x1e26:  mov    0xc0(%edx),%edx
08089bd6 +0x1e2c:  mov    0xc(%edx),%edx
08089bd9 +0x1e2f:  xor    %ebx,%edx
08089bdb +0x1e31:  ror    $0x1f,%edx
08089bde +0x1e34:  mov    %edx,0xc(%eax)
08089be1 +0x1e37:  mov    0xc(%eax),%eax
08089be4 +0x1e3a:  lea    (%ecx,%eax,1),%edx
08089be7 +0x1e3d:  mov    -0x10(%ebp),%eax
08089bea +0x1e40:  ror    $0x1b,%eax
08089bed +0x1e43:  lea    (%edx,%eax,1),%eax
08089bf0 +0x1e46:  add    -0x14(%ebp),%eax
08089bf3 +0x1e49:  sub    $0x359d3e2a,%eax
08089bf8 +0x1e4e:  mov    %eax,-0x14(%ebp)
08089bfb +0x1e51:  rorl   $0x2,-0xc(%ebp)
08089bff +0x1e55:  mov    -0xc(%ebp),%eax
08089c02 +0x1e58:  mov    -0x10(%ebp),%edx
08089c05 +0x1e5b:  xor    %edx,%eax
08089c07 +0x1e5d:  mov    %eax,%ecx
08089c09 +0x1e5f:  xor    -0x1c(%ebp),%ecx
08089c0c +0x1e62:  mov    0x8(%ebp),%eax
08089c0f +0x1e65:  mov    0xc0(%eax),%eax
08089c15 +0x1e6b:  mov    0x8(%ebp),%edx
08089c18 +0x1e6e:  mov    0xc0(%edx),%edx
08089c1e +0x1e74:  mov    0x4(%edx),%ebx
08089c21 +0x1e77:  mov    0x8(%ebp),%edx
08089c24 +0x1e7a:  mov    0xc0(%edx),%edx
08089c2a +0x1e80:  mov    0x30(%edx),%edx
08089c2d +0x1e83:  xor    %edx,%ebx
08089c2f +0x1e85:  mov    0x8(%ebp),%edx
08089c32 +0x1e88:  mov    0xc0(%edx),%edx
08089c38 +0x1e8e:  mov    0x18(%edx),%edx
08089c3b +0x1e91:  xor    %edx,%ebx
08089c3d +0x1e93:  mov    0x8(%ebp),%edx
08089c40 +0x1e96:  mov    0xc0(%edx),%edx
08089c46 +0x1e9c:  mov    0x10(%edx),%edx
08089c49 +0x1e9f:  xor    %ebx,%edx
08089c4b +0x1ea1:  ror    $0x1f,%edx
08089c4e +0x1ea4:  mov    %edx,0x10(%eax)
08089c51 +0x1ea7:  mov    0x10(%eax),%eax
08089c54 +0x1eaa:  lea    (%ecx,%eax,1),%edx
08089c57 +0x1ead:  mov    -0x14(%ebp),%eax
08089c5a +0x1eb0:  ror    $0x1b,%eax
08089c5d +0x1eb3:  lea    (%edx,%eax,1),%eax
08089c60 +0x1eb6:  add    -0x18(%ebp),%eax
08089c63 +0x1eb9:  sub    $0x359d3e2a,%eax
08089c68 +0x1ebe:  mov    %eax,-0x18(%ebp)
08089c6b +0x1ec1:  rorl   $0x2,-0x10(%ebp)
08089c6f +0x1ec5:  mov    -0x10(%ebp),%eax
08089c72 +0x1ec8:  mov    -0x14(%ebp),%edx
08089c75 +0x1ecb:  xor    %edx,%eax
08089c77 +0x1ecd:  mov    %eax,%ecx
08089c79 +0x1ecf:  xor    -0xc(%ebp),%ecx
08089c7c +0x1ed2:  mov    0x8(%ebp),%eax
08089c7f +0x1ed5:  mov    0xc0(%eax),%eax
08089c85 +0x1edb:  mov    0x8(%ebp),%edx
08089c88 +0x1ede:  mov    0xc0(%edx),%edx
08089c8e +0x1ee4:  mov    0x8(%edx),%ebx
08089c91 +0x1ee7:  mov    0x8(%ebp),%edx
08089c94 +0x1eea:  mov    0xc0(%edx),%edx
08089c9a +0x1ef0:  mov    0x34(%edx),%edx
08089c9d +0x1ef3:  xor    %edx,%ebx
08089c9f +0x1ef5:  mov    0x8(%ebp),%edx
08089ca2 +0x1ef8:  mov    0xc0(%edx),%edx
08089ca8 +0x1efe:  mov    0x1c(%edx),%edx
08089cab +0x1f01:  xor    %edx,%ebx
08089cad +0x1f03:  mov    0x8(%ebp),%edx
08089cb0 +0x1f06:  mov    0xc0(%edx),%edx
08089cb6 +0x1f0c:  mov    0x14(%edx),%edx
08089cb9 +0x1f0f:  xor    %ebx,%edx
08089cbb +0x1f11:  ror    $0x1f,%edx
08089cbe +0x1f14:  mov    %edx,0x14(%eax)
08089cc1 +0x1f17:  mov    0x14(%eax),%eax
08089cc4 +0x1f1a:  lea    (%ecx,%eax,1),%edx
08089cc7 +0x1f1d:  mov    -0x18(%ebp),%eax
08089cca +0x1f20:  ror    $0x1b,%eax
08089ccd +0x1f23:  lea    (%edx,%eax,1),%eax
08089cd0 +0x1f26:  add    -0x1c(%ebp),%eax
08089cd3 +0x1f29:  sub    $0x359d3e2a,%eax
08089cd8 +0x1f2e:  mov    %eax,-0x1c(%ebp)
08089cdb +0x1f31:  rorl   $0x2,-0x14(%ebp)
08089cdf +0x1f35:  mov    -0x14(%ebp),%eax
08089ce2 +0x1f38:  mov    -0x18(%ebp),%edx
08089ce5 +0x1f3b:  xor    %edx,%eax
08089ce7 +0x1f3d:  mov    %eax,%ecx
08089ce9 +0x1f3f:  xor    -0x10(%ebp),%ecx
08089cec +0x1f42:  mov    0x8(%ebp),%eax
08089cef +0x1f45:  mov    0xc0(%eax),%eax
08089cf5 +0x1f4b:  mov    0x8(%ebp),%edx
08089cf8 +0x1f4e:  mov    0xc0(%edx),%edx
08089cfe +0x1f54:  mov    0xc(%edx),%ebx
08089d01 +0x1f57:  mov    0x8(%ebp),%edx
08089d04 +0x1f5a:  mov    0xc0(%edx),%edx
08089d0a +0x1f60:  mov    0x38(%edx),%edx
08089d0d +0x1f63:  xor    %edx,%ebx
08089d0f +0x1f65:  mov    0x8(%ebp),%edx
08089d12 +0x1f68:  mov    0xc0(%edx),%edx
08089d18 +0x1f6e:  mov    0x20(%edx),%edx
08089d1b +0x1f71:  xor    %edx,%ebx
08089d1d +0x1f73:  mov    0x8(%ebp),%edx
08089d20 +0x1f76:  mov    0xc0(%edx),%edx
08089d26 +0x1f7c:  mov    0x18(%edx),%edx
08089d29 +0x1f7f:  xor    %ebx,%edx
08089d2b +0x1f81:  ror    $0x1f,%edx
08089d2e +0x1f84:  mov    %edx,0x18(%eax)
08089d31 +0x1f87:  mov    0x18(%eax),%eax
08089d34 +0x1f8a:  lea    (%ecx,%eax,1),%edx
08089d37 +0x1f8d:  mov    -0x1c(%ebp),%eax
08089d3a +0x1f90:  ror    $0x1b,%eax
08089d3d +0x1f93:  lea    (%edx,%eax,1),%eax
08089d40 +0x1f96:  add    -0xc(%ebp),%eax
08089d43 +0x1f99:  sub    $0x359d3e2a,%eax
08089d48 +0x1f9e:  mov    %eax,-0xc(%ebp)
08089d4b +0x1fa1:  rorl   $0x2,-0x18(%ebp)
08089d4f +0x1fa5:  mov    -0x18(%ebp),%eax
08089d52 +0x1fa8:  mov    -0x1c(%ebp),%edx
08089d55 +0x1fab:  xor    %edx,%eax
08089d57 +0x1fad:  mov    %eax,%ecx
08089d59 +0x1faf:  xor    -0x14(%ebp),%ecx
08089d5c +0x1fb2:  mov    0x8(%ebp),%eax
08089d5f +0x1fb5:  mov    0xc0(%eax),%eax
08089d65 +0x1fbb:  mov    0x8(%ebp),%edx
08089d68 +0x1fbe:  mov    0xc0(%edx),%edx
08089d6e +0x1fc4:  mov    0x10(%edx),%ebx
08089d71 +0x1fc7:  mov    0x8(%ebp),%edx
08089d74 +0x1fca:  mov    0xc0(%edx),%edx
08089d7a +0x1fd0:  mov    0x3c(%edx),%edx
08089d7d +0x1fd3:  xor    %edx,%ebx
08089d7f +0x1fd5:  mov    0x8(%ebp),%edx
08089d82 +0x1fd8:  mov    0xc0(%edx),%edx
08089d88 +0x1fde:  mov    0x24(%edx),%edx
08089d8b +0x1fe1:  xor    %edx,%ebx
08089d8d +0x1fe3:  mov    0x8(%ebp),%edx
08089d90 +0x1fe6:  mov    0xc0(%edx),%edx
08089d96 +0x1fec:  mov    0x1c(%edx),%edx
08089d99 +0x1fef:  xor    %ebx,%edx
08089d9b +0x1ff1:  ror    $0x1f,%edx
08089d9e +0x1ff4:  mov    %edx,0x1c(%eax)
08089da1 +0x1ff7:  mov    0x1c(%eax),%eax
08089da4 +0x1ffa:  lea    (%ecx,%eax,1),%edx
08089da7 +0x1ffd:  mov    -0xc(%ebp),%eax
08089daa +0x2000:  ror    $0x1b,%eax
08089dad +0x2003:  lea    (%edx,%eax,1),%eax
08089db0 +0x2006:  add    -0x10(%ebp),%eax
08089db3 +0x2009:  sub    $0x359d3e2a,%eax
08089db8 +0x200e:  mov    %eax,-0x10(%ebp)
08089dbb +0x2011:  rorl   $0x2,-0x1c(%ebp)
08089dbf +0x2015:  mov    -0x1c(%ebp),%eax
08089dc2 +0x2018:  mov    -0xc(%ebp),%edx
08089dc5 +0x201b:  xor    %edx,%eax
08089dc7 +0x201d:  mov    %eax,%ecx
08089dc9 +0x201f:  xor    -0x18(%ebp),%ecx
08089dcc +0x2022:  mov    0x8(%ebp),%eax
08089dcf +0x2025:  mov    0xc0(%eax),%eax
08089dd5 +0x202b:  mov    0x8(%ebp),%edx
08089dd8 +0x202e:  mov    0xc0(%edx),%edx
08089dde +0x2034:  mov    0x14(%edx),%ebx
08089de1 +0x2037:  mov    0x8(%ebp),%edx
08089de4 +0x203a:  mov    0xc0(%edx),%edx
08089dea +0x2040:  mov    (%edx),%edx
08089dec +0x2042:  xor    %edx,%ebx
08089dee +0x2044:  mov    0x8(%ebp),%edx
08089df1 +0x2047:  mov    0xc0(%edx),%edx
08089df7 +0x204d:  mov    0x28(%edx),%edx
08089dfa +0x2050:  xor    %edx,%ebx
08089dfc +0x2052:  mov    0x8(%ebp),%edx
08089dff +0x2055:  mov    0xc0(%edx),%edx
08089e05 +0x205b:  mov    0x20(%edx),%edx
08089e08 +0x205e:  xor    %ebx,%edx
08089e0a +0x2060:  ror    $0x1f,%edx
08089e0d +0x2063:  mov    %edx,0x20(%eax)
08089e10 +0x2066:  mov    0x20(%eax),%eax
08089e13 +0x2069:  lea    (%ecx,%eax,1),%edx
08089e16 +0x206c:  mov    -0x10(%ebp),%eax
08089e19 +0x206f:  ror    $0x1b,%eax
08089e1c +0x2072:  lea    (%edx,%eax,1),%eax
08089e1f +0x2075:  add    -0x14(%ebp),%eax
08089e22 +0x2078:  sub    $0x359d3e2a,%eax
08089e27 +0x207d:  mov    %eax,-0x14(%ebp)
08089e2a +0x2080:  rorl   $0x2,-0xc(%ebp)
08089e2e +0x2084:  mov    -0xc(%ebp),%eax
08089e31 +0x2087:  mov    -0x10(%ebp),%edx
08089e34 +0x208a:  xor    %edx,%eax
08089e36 +0x208c:  mov    %eax,%ecx
08089e38 +0x208e:  xor    -0x1c(%ebp),%ecx
08089e3b +0x2091:  mov    0x8(%ebp),%eax
08089e3e +0x2094:  mov    0xc0(%eax),%eax
08089e44 +0x209a:  mov    0x8(%ebp),%edx
08089e47 +0x209d:  mov    0xc0(%edx),%edx
08089e4d +0x20a3:  mov    0x18(%edx),%ebx
08089e50 +0x20a6:  mov    0x8(%ebp),%edx
08089e53 +0x20a9:  mov    0xc0(%edx),%edx
08089e59 +0x20af:  mov    0x4(%edx),%edx
08089e5c +0x20b2:  xor    %edx,%ebx
08089e5e +0x20b4:  mov    0x8(%ebp),%edx
08089e61 +0x20b7:  mov    0xc0(%edx),%edx
08089e67 +0x20bd:  mov    0x2c(%edx),%edx
08089e6a +0x20c0:  xor    %edx,%ebx
08089e6c +0x20c2:  mov    0x8(%ebp),%edx
08089e6f +0x20c5:  mov    0xc0(%edx),%edx
08089e75 +0x20cb:  mov    0x24(%edx),%edx
08089e78 +0x20ce:  xor    %ebx,%edx
08089e7a +0x20d0:  ror    $0x1f,%edx
08089e7d +0x20d3:  mov    %edx,0x24(%eax)
08089e80 +0x20d6:  mov    0x24(%eax),%eax
08089e83 +0x20d9:  lea    (%ecx,%eax,1),%edx
08089e86 +0x20dc:  mov    -0x14(%ebp),%eax
08089e89 +0x20df:  ror    $0x1b,%eax
08089e8c +0x20e2:  lea    (%edx,%eax,1),%eax
08089e8f +0x20e5:  add    -0x18(%ebp),%eax
08089e92 +0x20e8:  sub    $0x359d3e2a,%eax
08089e97 +0x20ed:  mov    %eax,-0x18(%ebp)
08089e9a +0x20f0:  rorl   $0x2,-0x10(%ebp)
08089e9e +0x20f4:  mov    -0x10(%ebp),%eax
08089ea1 +0x20f7:  mov    -0x14(%ebp),%edx
08089ea4 +0x20fa:  xor    %edx,%eax
08089ea6 +0x20fc:  mov    %eax,%ecx
08089ea8 +0x20fe:  xor    -0xc(%ebp),%ecx
08089eab +0x2101:  mov    0x8(%ebp),%eax
08089eae +0x2104:  mov    0xc0(%eax),%eax
08089eb4 +0x210a:  mov    0x8(%ebp),%edx
08089eb7 +0x210d:  mov    0xc0(%edx),%edx
08089ebd +0x2113:  mov    0x1c(%edx),%ebx
08089ec0 +0x2116:  mov    0x8(%ebp),%edx
08089ec3 +0x2119:  mov    0xc0(%edx),%edx
08089ec9 +0x211f:  mov    0x8(%edx),%edx
08089ecc +0x2122:  xor    %edx,%ebx
08089ece +0x2124:  mov    0x8(%ebp),%edx
08089ed1 +0x2127:  mov    0xc0(%edx),%edx
08089ed7 +0x212d:  mov    0x30(%edx),%edx
08089eda +0x2130:  xor    %edx,%ebx
08089edc +0x2132:  mov    0x8(%ebp),%edx
08089edf +0x2135:  mov    0xc0(%edx),%edx
08089ee5 +0x213b:  mov    0x28(%edx),%edx
08089ee8 +0x213e:  xor    %ebx,%edx
08089eea +0x2140:  ror    $0x1f,%edx
08089eed +0x2143:  mov    %edx,0x28(%eax)
08089ef0 +0x2146:  mov    0x28(%eax),%eax
08089ef3 +0x2149:  lea    (%ecx,%eax,1),%edx
08089ef6 +0x214c:  mov    -0x18(%ebp),%eax
08089ef9 +0x214f:  ror    $0x1b,%eax
08089efc +0x2152:  lea    (%edx,%eax,1),%eax
08089eff +0x2155:  add    -0x1c(%ebp),%eax
08089f02 +0x2158:  sub    $0x359d3e2a,%eax
08089f07 +0x215d:  mov    %eax,-0x1c(%ebp)
08089f0a +0x2160:  rorl   $0x2,-0x14(%ebp)
08089f0e +0x2164:  mov    -0x14(%ebp),%eax
08089f11 +0x2167:  mov    -0x18(%ebp),%edx
08089f14 +0x216a:  xor    %edx,%eax
08089f16 +0x216c:  mov    %eax,%ecx
08089f18 +0x216e:  xor    -0x10(%ebp),%ecx
08089f1b +0x2171:  mov    0x8(%ebp),%eax
08089f1e +0x2174:  mov    0xc0(%eax),%eax
08089f24 +0x217a:  mov    0x8(%ebp),%edx
08089f27 +0x217d:  mov    0xc0(%edx),%edx
08089f2d +0x2183:  mov    0x20(%edx),%ebx
08089f30 +0x2186:  mov    0x8(%ebp),%edx
08089f33 +0x2189:  mov    0xc0(%edx),%edx
08089f39 +0x218f:  mov    0xc(%edx),%edx
08089f3c +0x2192:  xor    %edx,%ebx
08089f3e +0x2194:  mov    0x8(%ebp),%edx
08089f41 +0x2197:  mov    0xc0(%edx),%edx
08089f47 +0x219d:  mov    0x34(%edx),%edx
08089f4a +0x21a0:  xor    %edx,%ebx
08089f4c +0x21a2:  mov    0x8(%ebp),%edx
08089f4f +0x21a5:  mov    0xc0(%edx),%edx
08089f55 +0x21ab:  mov    0x2c(%edx),%edx
08089f58 +0x21ae:  xor    %ebx,%edx
08089f5a +0x21b0:  ror    $0x1f,%edx
08089f5d +0x21b3:  mov    %edx,0x2c(%eax)
08089f60 +0x21b6:  mov    0x2c(%eax),%eax
08089f63 +0x21b9:  lea    (%ecx,%eax,1),%edx
08089f66 +0x21bc:  mov    -0x1c(%ebp),%eax
08089f69 +0x21bf:  ror    $0x1b,%eax
08089f6c +0x21c2:  lea    (%edx,%eax,1),%eax
08089f6f +0x21c5:  add    -0xc(%ebp),%eax
08089f72 +0x21c8:  sub    $0x359d3e2a,%eax
08089f77 +0x21cd:  mov    %eax,-0xc(%ebp)
08089f7a +0x21d0:  rorl   $0x2,-0x18(%ebp)
08089f7e +0x21d4:  mov    -0x18(%ebp),%eax
08089f81 +0x21d7:  mov    -0x1c(%ebp),%edx
08089f84 +0x21da:  xor    %edx,%eax
08089f86 +0x21dc:  mov    %eax,%ecx
08089f88 +0x21de:  xor    -0x14(%ebp),%ecx
08089f8b +0x21e1:  mov    0x8(%ebp),%eax
08089f8e +0x21e4:  mov    0xc0(%eax),%eax
08089f94 +0x21ea:  mov    0x8(%ebp),%edx
08089f97 +0x21ed:  mov    0xc0(%edx),%edx
08089f9d +0x21f3:  mov    0x24(%edx),%ebx
08089fa0 +0x21f6:  mov    0x8(%ebp),%edx
08089fa3 +0x21f9:  mov    0xc0(%edx),%edx
08089fa9 +0x21ff:  mov    0x10(%edx),%edx
08089fac +0x2202:  xor    %edx,%ebx
08089fae +0x2204:  mov    0x8(%ebp),%edx
08089fb1 +0x2207:  mov    0xc0(%edx),%edx
08089fb7 +0x220d:  mov    0x38(%edx),%edx
08089fba +0x2210:  xor    %edx,%ebx
08089fbc +0x2212:  mov    0x8(%ebp),%edx
08089fbf +0x2215:  mov    0xc0(%edx),%edx
08089fc5 +0x221b:  mov    0x30(%edx),%edx
08089fc8 +0x221e:  xor    %ebx,%edx
08089fca +0x2220:  ror    $0x1f,%edx
08089fcd +0x2223:  mov    %edx,0x30(%eax)
08089fd0 +0x2226:  mov    0x30(%eax),%eax
08089fd3 +0x2229:  lea    (%ecx,%eax,1),%edx
08089fd6 +0x222c:  mov    -0xc(%ebp),%eax
08089fd9 +0x222f:  ror    $0x1b,%eax
08089fdc +0x2232:  lea    (%edx,%eax,1),%eax
08089fdf +0x2235:  add    -0x10(%ebp),%eax
08089fe2 +0x2238:  sub    $0x359d3e2a,%eax
08089fe7 +0x223d:  mov    %eax,-0x10(%ebp)
08089fea +0x2240:  rorl   $0x2,-0x1c(%ebp)
08089fee +0x2244:  mov    -0x1c(%ebp),%eax
08089ff1 +0x2247:  mov    -0xc(%ebp),%edx
08089ff4 +0x224a:  xor    %edx,%eax
08089ff6 +0x224c:  mov    %eax,%ecx
08089ff8 +0x224e:  xor    -0x18(%ebp),%ecx
08089ffb +0x2251:  mov    0x8(%ebp),%eax
08089ffe +0x2254:  mov    0xc0(%eax),%eax
0808a004 +0x225a:  mov    0x8(%ebp),%edx
0808a007 +0x225d:  mov    0xc0(%edx),%edx
0808a00d +0x2263:  mov    0x28(%edx),%ebx
0808a010 +0x2266:  mov    0x8(%ebp),%edx
0808a013 +0x2269:  mov    0xc0(%edx),%edx
0808a019 +0x226f:  mov    0x14(%edx),%edx
0808a01c +0x2272:  xor    %edx,%ebx
0808a01e +0x2274:  mov    0x8(%ebp),%edx
0808a021 +0x2277:  mov    0xc0(%edx),%edx
0808a027 +0x227d:  mov    0x3c(%edx),%edx
0808a02a +0x2280:  xor    %edx,%ebx
0808a02c +0x2282:  mov    0x8(%ebp),%edx
0808a02f +0x2285:  mov    0xc0(%edx),%edx
0808a035 +0x228b:  mov    0x34(%edx),%edx
0808a038 +0x228e:  xor    %ebx,%edx
0808a03a +0x2290:  ror    $0x1f,%edx
0808a03d +0x2293:  mov    %edx,0x34(%eax)
0808a040 +0x2296:  mov    0x34(%eax),%eax
0808a043 +0x2299:  lea    (%ecx,%eax,1),%edx
0808a046 +0x229c:  mov    -0x10(%ebp),%eax
0808a049 +0x229f:  ror    $0x1b,%eax
0808a04c +0x22a2:  lea    (%edx,%eax,1),%eax
0808a04f +0x22a5:  add    -0x14(%ebp),%eax
0808a052 +0x22a8:  sub    $0x359d3e2a,%eax
0808a057 +0x22ad:  mov    %eax,-0x14(%ebp)
0808a05a +0x22b0:  rorl   $0x2,-0xc(%ebp)
0808a05e +0x22b4:  mov    -0xc(%ebp),%eax
0808a061 +0x22b7:  mov    -0x10(%ebp),%edx
0808a064 +0x22ba:  xor    %edx,%eax
0808a066 +0x22bc:  mov    %eax,%ecx
0808a068 +0x22be:  xor    -0x1c(%ebp),%ecx
0808a06b +0x22c1:  mov    0x8(%ebp),%eax
0808a06e +0x22c4:  mov    0xc0(%eax),%eax
0808a074 +0x22ca:  mov    0x8(%ebp),%edx
0808a077 +0x22cd:  mov    0xc0(%edx),%edx
0808a07d +0x22d3:  mov    0x2c(%edx),%ebx
0808a080 +0x22d6:  mov    0x8(%ebp),%edx
0808a083 +0x22d9:  mov    0xc0(%edx),%edx
0808a089 +0x22df:  mov    0x18(%edx),%edx
0808a08c +0x22e2:  xor    %edx,%ebx
0808a08e +0x22e4:  mov    0x8(%ebp),%edx
0808a091 +0x22e7:  mov    0xc0(%edx),%edx
0808a097 +0x22ed:  mov    (%edx),%edx
0808a099 +0x22ef:  xor    %edx,%ebx
0808a09b +0x22f1:  mov    0x8(%ebp),%edx
0808a09e +0x22f4:  mov    0xc0(%edx),%edx
0808a0a4 +0x22fa:  mov    0x38(%edx),%edx
0808a0a7 +0x22fd:  xor    %ebx,%edx
0808a0a9 +0x22ff:  ror    $0x1f,%edx
0808a0ac +0x2302:  mov    %edx,0x38(%eax)
0808a0af +0x2305:  mov    0x38(%eax),%eax
0808a0b2 +0x2308:  lea    (%ecx,%eax,1),%edx
0808a0b5 +0x230b:  mov    -0x14(%ebp),%eax
0808a0b8 +0x230e:  ror    $0x1b,%eax
0808a0bb +0x2311:  lea    (%edx,%eax,1),%eax
0808a0be +0x2314:  add    -0x18(%ebp),%eax
0808a0c1 +0x2317:  sub    $0x359d3e2a,%eax
0808a0c6 +0x231c:  mov    %eax,-0x18(%ebp)
0808a0c9 +0x231f:  rorl   $0x2,-0x10(%ebp)
0808a0cd +0x2323:  mov    -0x10(%ebp),%eax
0808a0d0 +0x2326:  mov    -0x14(%ebp),%edx
0808a0d3 +0x2329:  xor    %edx,%eax
0808a0d5 +0x232b:  mov    %eax,%ecx
0808a0d7 +0x232d:  xor    -0xc(%ebp),%ecx
0808a0da +0x2330:  mov    0x8(%ebp),%eax
0808a0dd +0x2333:  mov    0xc0(%eax),%eax
0808a0e3 +0x2339:  mov    0x8(%ebp),%edx
0808a0e6 +0x233c:  mov    0xc0(%edx),%edx
0808a0ec +0x2342:  mov    0x30(%edx),%ebx
0808a0ef +0x2345:  mov    0x8(%ebp),%edx
0808a0f2 +0x2348:  mov    0xc0(%edx),%edx
0808a0f8 +0x234e:  mov    0x1c(%edx),%edx
0808a0fb +0x2351:  xor    %edx,%ebx
0808a0fd +0x2353:  mov    0x8(%ebp),%edx
0808a100 +0x2356:  mov    0xc0(%edx),%edx
0808a106 +0x235c:  mov    0x4(%edx),%edx
0808a109 +0x235f:  xor    %edx,%ebx
0808a10b +0x2361:  mov    0x8(%ebp),%edx
0808a10e +0x2364:  mov    0xc0(%edx),%edx
0808a114 +0x236a:  mov    0x3c(%edx),%edx
0808a117 +0x236d:  xor    %ebx,%edx
0808a119 +0x236f:  ror    $0x1f,%edx
0808a11c +0x2372:  mov    %edx,0x3c(%eax)
0808a11f +0x2375:  mov    0x3c(%eax),%eax
0808a122 +0x2378:  lea    (%ecx,%eax,1),%edx
0808a125 +0x237b:  mov    -0x18(%ebp),%eax
0808a128 +0x237e:  ror    $0x1b,%eax
0808a12b +0x2381:  lea    (%edx,%eax,1),%eax
0808a12e +0x2384:  add    -0x1c(%ebp),%eax
0808a131 +0x2387:  sub    $0x359d3e2a,%eax
0808a136 +0x238c:  mov    %eax,-0x1c(%ebp)
0808a139 +0x238f:  rorl   $0x2,-0x14(%ebp)
0808a13d +0x2393:  mov    0xc(%ebp),%eax
0808a140 +0x2396:  mov    (%eax),%eax
0808a142 +0x2398:  mov    %eax,%edx
0808a144 +0x239a:  add    -0x1c(%ebp),%edx
0808a147 +0x239d:  mov    0xc(%ebp),%eax
0808a14a +0x23a0:  mov    %edx,(%eax)
0808a14c +0x23a2:  mov    0xc(%ebp),%eax
0808a14f +0x23a5:  lea    0x4(%eax),%edx
0808a152 +0x23a8:  mov    0xc(%ebp),%eax
0808a155 +0x23ab:  add    $0x4,%eax
0808a158 +0x23ae:  mov    (%eax),%eax
0808a15a +0x23b0:  add    -0x18(%ebp),%eax
0808a15d +0x23b3:  mov    %eax,(%edx)
0808a15f +0x23b5:  mov    0xc(%ebp),%eax
0808a162 +0x23b8:  lea    0x8(%eax),%edx
0808a165 +0x23bb:  mov    0xc(%ebp),%eax
0808a168 +0x23be:  add    $0x8,%eax
0808a16b +0x23c1:  mov    (%eax),%eax
0808a16d +0x23c3:  add    -0x14(%ebp),%eax
0808a170 +0x23c6:  mov    %eax,(%edx)
0808a172 +0x23c8:  mov    0xc(%ebp),%eax
0808a175 +0x23cb:  lea    0xc(%eax),%edx
0808a178 +0x23ce:  mov    0xc(%ebp),%eax
0808a17b +0x23d1:  add    $0xc,%eax
0808a17e +0x23d4:  mov    (%eax),%eax
0808a180 +0x23d6:  add    -0x10(%ebp),%eax
0808a183 +0x23d9:  mov    %eax,(%edx)
0808a185 +0x23db:  mov    0xc(%ebp),%eax
0808a188 +0x23de:  lea    0x10(%eax),%edx
0808a18b +0x23e1:  mov    0xc(%ebp),%eax
0808a18e +0x23e4:  add    $0x10,%eax
0808a191 +0x23e7:  mov    (%eax),%eax
0808a193 +0x23e9:  add    -0xc(%ebp),%eax
0808a196 +0x23ec:  mov    %eax,(%edx)
0808a198 +0x23ee:  add    $0x34,%esp
0808a19b +0x23f1:  pop    %ebx
0808a19c +0x23f2:  pop    %ebp
0808a19d +0x23f3:  ret
```

## 反编译 C

```c
// CSHA1::Transform @ 0x8087daa

/* CSHA1::Transform(unsigned int*, unsigned char const*) */

void __thiscall CSHA1::Transform(CSHA1 *this,uint *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar7 = param_1[3];
  uVar6 = param_1[4];
  memcpy(*(void **)(this + 0xc0),param_2,0x40);
  puVar4 = *(uint **)(this + 0xc0);
  *puVar4 = **(uint **)(this + 0xc0) >> 0x18 | (**(uint **)(this + 0xc0) & 0xff00) << 8 |
            **(uint **)(this + 0xc0) >> 8 & 0xff00ff00 | **(uint **)(this + 0xc0) << 0x18;
  uVar6 = ((uVar7 ^ uVar3) & uVar2 ^ uVar7) + *puVar4 + (uVar1 >> 0x1b | uVar1 << 5) + uVar6 +
          0x5a827999;
  uVar2 = uVar2 >> 2 | uVar2 << 0x1e;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 4) =
       *(uint *)(*(int *)(this + 0xc0) + 4) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 4) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 4) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 4) << 0x18;
  uVar7 = ((uVar3 ^ uVar2) & uVar1 ^ uVar3) + *(int *)(iVar5 + 4) + (uVar6 >> 0x1b | uVar6 * 0x20) +
          uVar7 + 0x5a827999;
  uVar1 = uVar1 >> 2 | uVar1 << 0x1e;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 8) =
       *(uint *)(*(int *)(this + 0xc0) + 8) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 8) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 8) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 8) << 0x18;
  uVar8 = ((uVar2 ^ uVar1) & uVar6 ^ uVar2) + *(int *)(iVar5 + 8) + (uVar7 >> 0x1b | uVar7 * 0x20) +
          uVar3 + 0x5a827999;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0xc) =
       *(uint *)(*(int *)(this + 0xc0) + 0xc) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0xc) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0xc) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0xc) << 0x18;
  uVar6 = ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + *(int *)(iVar5 + 0xc) + (uVar8 >> 0x1b | uVar8 * 0x20)
          + uVar2 + 0x5a827999;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x10) =
       *(uint *)(*(int *)(this + 0xc0) + 0x10) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x10) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x10) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x10) << 0x18;
  uVar7 = ((uVar3 ^ uVar2) & uVar8 ^ uVar3) + *(int *)(iVar5 + 0x10) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 + 0x5a827999;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x14) =
       *(uint *)(*(int *)(this + 0xc0) + 0x14) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x14) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x14) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x14) << 0x18;
  uVar8 = ((uVar2 ^ uVar1) & uVar6 ^ uVar2) + *(int *)(iVar5 + 0x14) +
          (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 + 0x5a827999;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x18) =
       *(uint *)(*(int *)(this + 0xc0) + 0x18) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x18) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x18) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x18) << 0x18;
  uVar6 = ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + *(int *)(iVar5 + 0x18) +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2 + 0x5a827999;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x1c) =
       *(uint *)(*(int *)(this + 0xc0) + 0x1c) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x1c) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x1c) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x1c) << 0x18;
  uVar7 = ((uVar3 ^ uVar2) & uVar8 ^ uVar3) + *(int *)(iVar5 + 0x1c) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 + 0x5a827999;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x20) =
       *(uint *)(*(int *)(this + 0xc0) + 0x20) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x20) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x20) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x20) << 0x18;
  uVar8 = ((uVar2 ^ uVar1) & uVar6 ^ uVar2) + *(int *)(iVar5 + 0x20) +
          (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 + 0x5a827999;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x24) =
       *(uint *)(*(int *)(this + 0xc0) + 0x24) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x24) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x24) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x24) << 0x18;
  uVar6 = ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + *(int *)(iVar5 + 0x24) +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2 + 0x5a827999;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x28) =
       *(uint *)(*(int *)(this + 0xc0) + 0x28) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x28) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x28) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x28) << 0x18;
  uVar7 = ((uVar3 ^ uVar2) & uVar8 ^ uVar3) + *(int *)(iVar5 + 0x28) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 + 0x5a827999;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x2c) =
       *(uint *)(*(int *)(this + 0xc0) + 0x2c) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x2c) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x2c) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x2c) << 0x18;
  uVar8 = ((uVar2 ^ uVar1) & uVar6 ^ uVar2) + *(int *)(iVar5 + 0x2c) +
          (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 + 0x5a827999;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x30) =
       *(uint *)(*(int *)(this + 0xc0) + 0x30) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x30) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x30) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x30) << 0x18;
  uVar6 = ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + *(int *)(iVar5 + 0x30) +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2 + 0x5a827999;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x34) =
       *(uint *)(*(int *)(this + 0xc0) + 0x34) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x34) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x34) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x34) << 0x18;
  uVar7 = ((uVar3 ^ uVar2) & uVar8 ^ uVar3) + *(int *)(iVar5 + 0x34) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 + 0x5a827999;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x38) =
       *(uint *)(*(int *)(this + 0xc0) + 0x38) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x38) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x38) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x38) << 0x18;
  uVar8 = ((uVar2 ^ uVar1) & uVar6 ^ uVar2) + *(int *)(iVar5 + 0x38) +
          (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 + 0x5a827999;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  *(uint *)(iVar5 + 0x3c) =
       *(uint *)(*(int *)(this + 0xc0) + 0x3c) >> 0x18 |
       (*(uint *)(*(int *)(this + 0xc0) + 0x3c) & 0xff00) << 8 |
       *(uint *)(*(int *)(this + 0xc0) + 0x3c) >> 8 & 0xff00ff00 |
       *(uint *)(*(int *)(this + 0xc0) + 0x3c) << 0x18;
  uVar6 = ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + *(int *)(iVar5 + 0x3c) +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2 + 0x5a827999;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  puVar4 = *(uint **)(this + 0xc0);
  uVar7 = **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34) ^ *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 8);
  *puVar4 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = ((uVar3 ^ uVar2) & uVar8 ^ uVar3) + *puVar4 + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 +
          0x5a827999;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38) ^ *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc);
  *(uint *)(iVar5 + 4) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = ((uVar2 ^ uVar1) & uVar6 ^ uVar2) + *(int *)(iVar5 + 4) + (uVar7 >> 0x1b | uVar7 * 0x20) +
          uVar3 + 0x5a827999;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10);
  *(uint *)(iVar5 + 8) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = ((uVar1 ^ uVar3) & uVar7 ^ uVar1) + *(int *)(iVar5 + 8) + (uVar8 >> 0x1b | uVar8 * 0x20) +
          uVar2 + 0x5a827999;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          **(uint **)(this + 0xc0) ^ *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14);
  *(uint *)(iVar5 + 0xc) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = ((uVar3 ^ uVar2) & uVar8 ^ uVar3) + *(int *)(iVar5 + 0xc) + (uVar6 >> 0x1b | uVar6 * 0x20)
          + uVar1 + 0x5a827999;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 4) ^ *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18);
  *(uint *)(iVar5 + 0x10) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x10) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 8) ^ *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c);
  *(uint *)(iVar5 + 0x14) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x14) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc) ^ *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20);
  *(uint *)(iVar5 + 0x18) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x18) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0x6ed9eba1;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10) ^ *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24);
  *(uint *)(iVar5 + 0x1c) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x1c) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14) ^ **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28);
  *(uint *)(iVar5 + 0x20) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x20) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18) ^ *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c);
  *(uint *)(iVar5 + 0x24) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x24) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0x6ed9eba1;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^ *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30);
  *(uint *)(iVar5 + 0x28) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x28) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20) ^ *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34);
  *(uint *)(iVar5 + 0x2c) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x2c) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24) ^ *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38);
  *(uint *)(iVar5 + 0x30) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x30) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0x6ed9eba1;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28) ^ *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c);
  *(uint *)(iVar5 + 0x34) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x34) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          **(uint **)(this + 0xc0);
  *(uint *)(iVar5 + 0x38) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x38) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30) ^ *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 4);
  *(uint *)(iVar5 + 0x3c) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x3c) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0x6ed9eba1;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  puVar4 = *(uint **)(this + 0xc0);
  uVar8 = **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34) ^ *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 8);
  *puVar4 = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *puVar4 + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 + 0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38) ^ *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc);
  *(uint *)(iVar5 + 4) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 4) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2 +
          0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10);
  *(uint *)(iVar5 + 8) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 8) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 +
          0x6ed9eba1;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          **(uint **)(this + 0xc0) ^ *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14);
  *(uint *)(iVar5 + 0xc) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0xc) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 +
          0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 4) ^ *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18);
  *(uint *)(iVar5 + 0x10) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x10) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 8) ^ *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c);
  *(uint *)(iVar5 + 0x14) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x14) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0x6ed9eba1;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc) ^ *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20);
  *(uint *)(iVar5 + 0x18) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x18) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0x6ed9eba1;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10) ^ *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24);
  *(uint *)(iVar5 + 0x1c) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x1c) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0x6ed9eba1;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14) ^ **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28);
  *(uint *)(iVar5 + 0x20) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 0x20) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18) ^ *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c);
  *(uint *)(iVar5 + 0x24) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 0x24) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^ *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30);
  *(uint *)(iVar5 + 0x28) = uVar6 >> 0x1f | uVar6 << 1;
  iVar11 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) + *(int *)(iVar5 + 0x28) +
           (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2;
  uVar6 = iVar11 + 0x8f1bbcdc;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20) ^ *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34);
  *(uint *)(iVar5 + 0x2c) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 0x2c) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24) ^ *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38);
  *(uint *)(iVar5 + 0x30) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 0x30) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | iVar11 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28) ^ *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c);
  *(uint *)(iVar5 + 0x34) = uVar6 >> 0x1f | uVar6 << 1;
  iVar11 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) + *(int *)(iVar5 + 0x34) +
           (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2;
  uVar6 = iVar11 + 0x8f1bbcdc;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          **(uint **)(this + 0xc0);
  *(uint *)(iVar5 + 0x38) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 0x38) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30) ^ *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 4);
  *(uint *)(iVar5 + 0x3c) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 0x3c) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | iVar11 * 0x40000000;
  puVar4 = *(uint **)(this + 0xc0);
  uVar6 = **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34) ^ *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 8);
  *puVar4 = uVar6 >> 0x1f | uVar6 << 1;
  iVar11 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) + *puVar4 + (uVar8 >> 0x1b | uVar8 * 0x20) +
           uVar2;
  uVar6 = iVar11 + 0x8f1bbcdc;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38) ^ *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc);
  *(uint *)(iVar5 + 4) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 4) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10);
  *(uint *)(iVar5 + 8) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 8) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | iVar11 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          **(uint **)(this + 0xc0) ^ *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14);
  *(uint *)(iVar5 + 0xc) = uVar6 >> 0x1f | uVar6 << 1;
  iVar11 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) + *(int *)(iVar5 + 0xc) +
           (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2;
  uVar6 = iVar11 + 0x8f1bbcdc;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 4) ^ *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18);
  *(uint *)(iVar5 + 0x10) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 0x10) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 8) ^ *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c);
  *(uint *)(iVar5 + 0x14) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 0x14) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | iVar11 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc) ^ *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20);
  *(uint *)(iVar5 + 0x18) = uVar6 >> 0x1f | uVar6 << 1;
  iVar11 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) + *(int *)(iVar5 + 0x18) +
           (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2;
  uVar6 = iVar11 + 0x8f1bbcdc;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10) ^ *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24);
  *(uint *)(iVar5 + 0x1c) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 0x1c) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14) ^ **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28);
  *(uint *)(iVar5 + 0x20) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 0x20) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | iVar11 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18) ^ *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c);
  *(uint *)(iVar5 + 0x24) = uVar6 >> 0x1f | uVar6 << 1;
  iVar11 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) + *(int *)(iVar5 + 0x24) +
           (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2;
  uVar6 = iVar11 + 0x8f1bbcdc;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^ *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30);
  *(uint *)(iVar5 + 0x28) = uVar7 >> 0x1f | uVar7 << 1;
  iVar9 = ((uVar2 | uVar8) & uVar3 | uVar2 & uVar8) + *(int *)(iVar5 + 0x28) +
          (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1;
  uVar7 = iVar9 + 0x8f1bbcdc;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20) ^ *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34);
  *(uint *)(iVar5 + 0x2c) = uVar8 >> 0x1f | uVar8 << 1;
  iVar10 = ((uVar1 | uVar6) & uVar2 | uVar1 & uVar6) + *(int *)(iVar5 + 0x2c) +
           (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3;
  uVar8 = iVar10 + 0x8f1bbcdc;
  uVar3 = uVar6 >> 2 | iVar11 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24) ^ *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38);
  *(uint *)(iVar5 + 0x30) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x30) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0xca62c1d6;
  uVar2 = uVar7 >> 2 | iVar9 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28) ^ *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c);
  *(uint *)(iVar5 + 0x34) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x34) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0xca62c1d6;
  uVar1 = uVar8 >> 2 | iVar10 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          **(uint **)(this + 0xc0);
  *(uint *)(iVar5 + 0x38) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x38) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0xca62c1d6;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30) ^ *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 4);
  *(uint *)(iVar5 + 0x3c) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x3c) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0xca62c1d6;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  puVar4 = *(uint **)(this + 0xc0);
  uVar7 = **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34) ^ *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 8);
  *puVar4 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *puVar4 + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 + 0xca62c1d6;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38) ^ *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc);
  *(uint *)(iVar5 + 4) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 4) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3 +
          0xca62c1d6;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10);
  *(uint *)(iVar5 + 8) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 8) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2 +
          0xca62c1d6;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          **(uint **)(this + 0xc0) ^ *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14);
  *(uint *)(iVar5 + 0xc) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0xc) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1 +
          0xca62c1d6;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 4) ^ *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18);
  *(uint *)(iVar5 + 0x10) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x10) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0xca62c1d6;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 8) ^ *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c);
  *(uint *)(iVar5 + 0x14) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x14) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0xca62c1d6;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          *(uint *)(*(int *)(this + 0xc0) + 0xc) ^ *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20);
  *(uint *)(iVar5 + 0x18) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x18) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0xca62c1d6;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x10) ^ *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24);
  *(uint *)(iVar5 + 0x1c) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x1c) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0xca62c1d6;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x20) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x14) ^ **(uint **)(this + 0xc0) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28);
  *(uint *)(iVar5 + 0x20) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x20) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0xca62c1d6;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x24) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x18) ^ *(uint *)(*(int *)(this + 0xc0) + 4) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c);
  *(uint *)(iVar5 + 0x24) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x24) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0xca62c1d6;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x28) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^ *(uint *)(*(int *)(this + 0xc0) + 8) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30);
  *(uint *)(iVar5 + 0x28) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x28) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0xca62c1d6;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x20) ^ *(uint *)(*(int *)(this + 0xc0) + 0xc) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x34);
  *(uint *)(iVar5 + 0x2c) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x2c) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0xca62c1d6;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x30) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x24) ^ *(uint *)(*(int *)(this + 0xc0) + 0x10) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x38);
  *(uint *)(iVar5 + 0x30) = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x30) + (uVar6 >> 0x1b | uVar6 * 0x20) + uVar1
          + 0xca62c1d6;
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar8 = *(uint *)(*(int *)(this + 0xc0) + 0x34) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x28) ^ *(uint *)(*(int *)(this + 0xc0) + 0x14) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x3c);
  *(uint *)(iVar5 + 0x34) = uVar8 >> 0x1f | uVar8 << 1;
  uVar8 = (uVar1 ^ uVar6 ^ uVar2) + *(int *)(iVar5 + 0x34) + (uVar7 >> 0x1b | uVar7 * 0x20) + uVar3
          + 0xca62c1d6;
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar6 = *(uint *)(*(int *)(this + 0xc0) + 0x38) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x2c) ^ *(uint *)(*(int *)(this + 0xc0) + 0x18) ^
          **(uint **)(this + 0xc0);
  *(uint *)(iVar5 + 0x38) = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = (uVar3 ^ uVar7 ^ uVar1) + *(int *)(iVar5 + 0x38) + (uVar8 >> 0x1b | uVar8 * 0x20) + uVar2
          + 0xca62c1d6;
  uVar2 = uVar7 >> 2 | uVar7 * 0x40000000;
  iVar5 = *(int *)(this + 0xc0);
  uVar7 = *(uint *)(*(int *)(this + 0xc0) + 0x3c) ^
          *(uint *)(*(int *)(this + 0xc0) + 0x30) ^ *(uint *)(*(int *)(this + 0xc0) + 0x1c) ^
          *(uint *)(*(int *)(this + 0xc0) + 4);
  *(uint *)(iVar5 + 0x3c) = uVar7 >> 0x1f | uVar7 << 1;
  *param_1 = *param_1 +
             (uVar2 ^ uVar8 ^ uVar3) + *(int *)(iVar5 + 0x3c) + (uVar6 >> 0x1b | uVar6 * 0x20) +
             uVar1 + -0x359d3e2a;
  param_1[1] = param_1[1] + uVar6;
  param_1[2] = param_1[2] + (uVar8 >> 2 | uVar8 * 0x40000000);
  param_1[3] = param_1[3] + uVar2;
  param_1[4] = param_1[4] + uVar3;
  return;
}
```
