# decrypt

`_ZNK8TaoCrypt3AES7decryptEPKhS2_Ph`

`TaoCrypt::AES::decrypt(unsigned char const*, unsigned char const*, unsigned char*) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AES` | `0x087a2db0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a2db0  _ZNK8TaoCrypt3AES7decryptEPKhS2_Ph
#           TaoCrypt::AES::decrypt(unsigned char const*, unsigned char const*, unsigned char*) const
# range [0x087a2db0, 0x087a333a]
087a2db0 +0x000:  push   %ebp
087a2db1 +0x001:  mov    %esp,%ebp
087a2db3 +0x003:  push   %edi
087a2db4 +0x004:  push   %esi
087a2db5 +0x005:  push   %ebx
087a2db6 +0x006:  sub    $0x34,%esp
087a2db9 +0x009:  mov    0xc(%ebp),%edx
087a2dbc +0x00c:  mov    0x8(%ebp),%eax
087a2dbf +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
087a2dc4 +0x014:  add    $0xbc9dd4,%ebx
087a2dca +0x01a:  mov    (%edx),%ecx
087a2dcc +0x01c:  add    $0x3c,%eax
087a2dcf +0x01f:  mov    0x4(%edx),%esi
087a2dd2 +0x022:  mov    %eax,-0x34(%ebp)
087a2dd5 +0x025:  mov    0x8(%edx),%edi
087a2dd8 +0x028:  mov    %ecx,%eax
087a2dda +0x02a:  ror    $0x18,%ecx
087a2ddd +0x02d:  and    $0xff00ff,%ecx
087a2de3 +0x033:  ror    $0x8,%eax
087a2de6 +0x036:  mov    %ecx,-0x18(%ebp)
087a2de9 +0x039:  and    $0xff00ff00,%eax
087a2dee +0x03e:  mov    %esi,%ecx
087a2df0 +0x040:  or     %eax,-0x18(%ebp)
087a2df3 +0x043:  mov    0x8(%ebp),%eax
087a2df6 +0x046:  ror    $0x18,%esi
087a2df9 +0x049:  mov    %esi,-0x14(%ebp)
087a2dfc +0x04c:  ror    $0x8,%ecx
087a2dff +0x04f:  mov    %edi,%esi
087a2e01 +0x051:  andl   $0xff00ff,-0x14(%ebp)
087a2e08 +0x058:  and    $0xff00ff00,%ecx
087a2e0e +0x05e:  or     %ecx,-0x14(%ebp)
087a2e11 +0x061:  mov    0x3c(%eax),%eax
087a2e14 +0x064:  ror    $0x18,%edi
087a2e17 +0x067:  xor    %eax,-0x18(%ebp)
087a2e1a +0x06a:  and    $0xff00ff,%edi
087a2e20 +0x070:  mov    -0x34(%ebp),%ecx
087a2e23 +0x073:  ror    $0x8,%esi
087a2e26 +0x076:  mov    -0x34(%ebp),%eax
087a2e29 +0x079:  and    $0xff00ff00,%esi
087a2e2f +0x07f:  mov    %edi,-0x10(%ebp)
087a2e32 +0x082:  mov    0xc(%edx),%edi
087a2e35 +0x085:  or     %esi,-0x10(%ebp)
087a2e38 +0x088:  mov    0x4(%ecx),%ecx
087a2e3b +0x08b:  mov    0x8(%eax),%eax
087a2e3e +0x08e:  xor    %ecx,-0x14(%ebp)
087a2e41 +0x091:  mov    %edi,%edx
087a2e43 +0x093:  xor    %eax,-0x10(%ebp)
087a2e46 +0x096:  mov    -0x178(%ebx),%eax
087a2e4c +0x09c:  ror    $0x8,%edx
087a2e4f +0x09f:  ror    $0x18,%edi
087a2e52 +0x0a2:  mov    0x8(%ebp),%ecx
087a2e55 +0x0a5:  and    $0xff00ff00,%edx
087a2e5b +0x0ab:  and    $0xff00ff,%edi
087a2e61 +0x0b1:  or     %edx,%edi
087a2e63 +0x0b3:  mov    -0x34(%ebp),%edx
087a2e66 +0x0b6:  mov    (%eax),%eax
087a2e68 +0x0b8:  mov    0x38(%ecx),%ecx
087a2e6b +0x0bb:  xor    0xc(%edx),%edi
087a2e6e +0x0be:  mov    %eax,-0x2c(%ebp)
087a2e71 +0x0c1:  mov    -0x228(%ebx),%eax
087a2e77 +0x0c7:  shr    %ecx
087a2e79 +0x0c9:  mov    %edi,-0x3c(%ebp)
087a2e7c +0x0cc:  mov    %ecx,-0x38(%ebp)
087a2e7f +0x0cf:  mov    (%eax),%eax
087a2e81 +0x0d1:  mov    %ecx,-0x30(%ebp)
087a2e84 +0x0d4:  mov    %edx,-0x1c(%ebp)
087a2e87 +0x0d7:  mov    %eax,-0x28(%ebp)
087a2e8a +0x0da:  mov    -0x260(%ebx),%eax
087a2e90 +0x0e0:  mov    (%eax),%eax
087a2e92 +0x0e2:  mov    %eax,-0x24(%ebp)
087a2e95 +0x0e5:  mov    -0x41c(%ebx),%eax
087a2e9b +0x0eb:  mov    (%eax),%eax
087a2e9d +0x0ed:  mov    %eax,-0x20(%ebp)
087a2ea0 +0x0f0:  mov    %eax,%edi
087a2ea2 +0x0f2:  jmp    087a2fb4 <+0x204>
087a2ea7 +0x0f7:  nop
087a2ea8 +0x0f8:  movzbl -0x40(%ebp),%edi
087a2eac +0x0fc:  mov    -0x20(%ebp),%eax
087a2eaf +0x0ff:  mov    (%eax,%edi,4),%eax
087a2eb2 +0x102:  mov    -0x1c(%ebp),%edi
087a2eb5 +0x105:  mov    (%edi),%edi
087a2eb7 +0x107:  xor    %edi,%eax
087a2eb9 +0x109:  mov    %esi,%edi
087a2ebb +0x10b:  mov    %eax,-0x18(%ebp)
087a2ebe +0x10e:  mov    -0x2c(%ebp),%eax
087a2ec1 +0x111:  shr    $0x18,%edi
087a2ec4 +0x114:  mov    (%eax,%edi,4),%eax
087a2ec7 +0x117:  mov    %ecx,%edi
087a2ec9 +0x119:  xor    %eax,-0x18(%ebp)
087a2ecc +0x11c:  mov    -0x28(%ebp),%eax
087a2ecf +0x11f:  shr    $0x10,%edi
087a2ed2 +0x122:  and    $0xff,%edi
087a2ed8 +0x128:  mov    (%eax,%edi,4),%eax
087a2edb +0x12b:  movzbl %dh,%edi
087a2ede +0x12e:  xor    %eax,-0x18(%ebp)
087a2ee1 +0x131:  mov    -0x24(%ebp),%eax
087a2ee4 +0x134:  mov    (%eax,%edi,4),%eax
087a2ee7 +0x137:  movzbl %dl,%edi
087a2eea +0x13a:  xor    %eax,-0x18(%ebp)
087a2eed +0x13d:  mov    -0x20(%ebp),%eax
087a2ef0 +0x140:  mov    (%eax,%edi,4),%eax
087a2ef3 +0x143:  mov    -0x1c(%ebp),%edi
087a2ef6 +0x146:  mov    0x4(%edi),%edi
087a2ef9 +0x149:  xor    %edi,%eax
087a2efb +0x14b:  mov    -0x40(%ebp),%edi
087a2efe +0x14e:  mov    %eax,-0x14(%ebp)
087a2f01 +0x151:  mov    -0x2c(%ebp),%eax
087a2f04 +0x154:  shr    $0x18,%edi
087a2f07 +0x157:  mov    (%eax,%edi,4),%eax
087a2f0a +0x15a:  mov    %esi,%edi
087a2f0c +0x15c:  xor    %eax,-0x14(%ebp)
087a2f0f +0x15f:  mov    -0x28(%ebp),%eax
087a2f12 +0x162:  shr    $0x10,%edi
087a2f15 +0x165:  and    $0xff,%edi
087a2f1b +0x16b:  mov    (%eax,%edi,4),%eax
087a2f1e +0x16e:  movzbl %ch,%edi
087a2f21 +0x171:  xor    %eax,-0x14(%ebp)
087a2f24 +0x174:  mov    -0x24(%ebp),%eax
087a2f27 +0x177:  mov    (%eax,%edi,4),%eax
087a2f2a +0x17a:  movzbl %cl,%edi
087a2f2d +0x17d:  xor    %eax,-0x14(%ebp)
087a2f30 +0x180:  mov    -0x20(%ebp),%eax
087a2f33 +0x183:  shr    $0x18,%ecx
087a2f36 +0x186:  mov    (%eax,%edi,4),%eax
087a2f39 +0x189:  mov    -0x1c(%ebp),%edi
087a2f3c +0x18c:  mov    0x8(%edi),%edi
087a2f3f +0x18f:  xor    %edi,%eax
087a2f41 +0x191:  mov    %edx,%edi
087a2f43 +0x193:  mov    %eax,-0x10(%ebp)
087a2f46 +0x196:  mov    -0x2c(%ebp),%eax
087a2f49 +0x199:  shr    $0x18,%edi
087a2f4c +0x19c:  shr    $0x10,%edx
087a2f4f +0x19f:  movzbl %dl,%edx
087a2f52 +0x1a2:  mov    (%eax,%edi,4),%eax
087a2f55 +0x1a5:  mov    -0x40(%ebp),%edi
087a2f58 +0x1a8:  xor    %eax,-0x10(%ebp)
087a2f5b +0x1ab:  mov    -0x28(%ebp),%eax
087a2f5e +0x1ae:  shr    $0x10,%edi
087a2f61 +0x1b1:  and    $0xff,%edi
087a2f67 +0x1b7:  mov    (%eax,%edi,4),%eax
087a2f6a +0x1ba:  xor    %eax,-0x10(%ebp)
087a2f6d +0x1bd:  mov    %esi,%eax
087a2f6f +0x1bf:  movzbl %ah,%edi
087a2f72 +0x1c2:  mov    -0x24(%ebp),%eax
087a2f75 +0x1c5:  and    $0xff,%esi
087a2f7b +0x1cb:  mov    (%eax,%edi,4),%eax
087a2f7e +0x1ce:  xor    %eax,-0x10(%ebp)
087a2f81 +0x1d1:  mov    -0x1c(%ebp),%edi
087a2f84 +0x1d4:  mov    -0x20(%ebp),%eax
087a2f87 +0x1d7:  mov    0xc(%edi),%edi
087a2f8a +0x1da:  mov    (%eax,%esi,4),%eax
087a2f8d +0x1dd:  xor    %edi,%eax
087a2f8f +0x1df:  mov    -0x2c(%ebp),%edi
087a2f92 +0x1e2:  mov    (%edi,%ecx,4),%edi
087a2f95 +0x1e5:  mov    -0x28(%ebp),%ecx
087a2f98 +0x1e8:  xor    %edi,%eax
087a2f9a +0x1ea:  mov    -0x20(%ebp),%edi
087a2f9d +0x1ed:  mov    (%ecx,%edx,4),%ecx
087a2fa0 +0x1f0:  mov    -0x40(%ebp),%edx
087a2fa3 +0x1f3:  xor    %ecx,%eax
087a2fa5 +0x1f5:  mov    -0x24(%ebp),%ecx
087a2fa8 +0x1f8:  mov    %eax,-0x3c(%ebp)
087a2fab +0x1fb:  movzbl %dh,%eax
087a2fae +0x1fe:  mov    (%ecx,%eax,4),%ecx
087a2fb1 +0x201:  xor    %ecx,-0x3c(%ebp)
087a2fb4 +0x204:  movzbl -0x14(%ebp),%eax
087a2fb8 +0x208:  mov    -0x2c(%ebp),%edx
087a2fbb +0x20b:  mov    -0x28(%ebp),%ecx
087a2fbe +0x20e:  mov    (%edi,%eax,4),%esi
087a2fc1 +0x211:  mov    -0x1c(%ebp),%eax
087a2fc4 +0x214:  xor    0x10(%eax),%esi
087a2fc7 +0x217:  mov    -0x18(%ebp),%eax
087a2fca +0x21a:  shr    $0x18,%eax
087a2fcd +0x21d:  xor    (%edx,%eax,4),%esi
087a2fd0 +0x220:  mov    -0x3c(%ebp),%eax
087a2fd3 +0x223:  mov    -0x10(%ebp),%edx
087a2fd6 +0x226:  shr    $0x10,%eax
087a2fd9 +0x229:  movzbl %al,%eax
087a2fdc +0x22c:  xor    (%ecx,%eax,4),%esi
087a2fdf +0x22f:  movzbl %dh,%eax
087a2fe2 +0x232:  mov    -0x24(%ebp),%ecx
087a2fe5 +0x235:  xor    (%ecx,%eax,4),%esi
087a2fe8 +0x238:  movzbl %dl,%eax
087a2feb +0x23b:  mov    (%edi,%eax,4),%eax
087a2fee +0x23e:  mov    -0x1c(%ebp),%edi
087a2ff1 +0x241:  mov    -0x14(%ebp),%edx
087a2ff4 +0x244:  mov    -0x2c(%ebp),%ecx
087a2ff7 +0x247:  mov    0x14(%edi),%edi
087a2ffa +0x24a:  shr    $0x18,%edx
087a2ffd +0x24d:  mov    (%ecx,%edx,4),%ecx
087a3000 +0x250:  mov    -0x18(%ebp),%edx
087a3003 +0x253:  xor    %edi,%eax
087a3005 +0x255:  mov    -0x28(%ebp),%edi
087a3008 +0x258:  xor    %ecx,%eax
087a300a +0x25a:  mov    -0x24(%ebp),%ecx
087a300d +0x25d:  shr    $0x10,%edx
087a3010 +0x260:  movzbl %dl,%edx
087a3013 +0x263:  mov    (%edi,%edx,4),%edi
087a3016 +0x266:  xor    %edi,%eax
087a3018 +0x268:  mov    -0x20(%ebp),%edi
087a301b +0x26b:  mov    %eax,-0x40(%ebp)
087a301e +0x26e:  mov    -0x3c(%ebp),%eax
087a3021 +0x271:  movzbl %ah,%edx
087a3024 +0x274:  mov    (%ecx,%edx,4),%ecx
087a3027 +0x277:  movzbl %al,%edx
087a302a +0x27a:  mov    -0x1c(%ebp),%eax
087a302d +0x27d:  mov    (%edi,%edx,4),%edx
087a3030 +0x280:  xor    %ecx,-0x40(%ebp)
087a3033 +0x283:  mov    -0x2c(%ebp),%ecx
087a3036 +0x286:  xor    0x18(%eax),%edx
087a3039 +0x289:  mov    -0x10(%ebp),%eax
087a303c +0x28c:  mov    -0x28(%ebp),%edi
087a303f +0x28f:  shr    $0x18,%eax
087a3042 +0x292:  xor    (%ecx,%eax,4),%edx
087a3045 +0x295:  mov    -0x14(%ebp),%ecx
087a3048 +0x298:  shr    $0x10,%ecx
087a304b +0x29b:  movzbl %cl,%eax
087a304e +0x29e:  mov    -0x18(%ebp),%ecx
087a3051 +0x2a1:  xor    (%edi,%eax,4),%edx
087a3054 +0x2a4:  mov    -0x24(%ebp),%edi
087a3057 +0x2a7:  movzbl %ch,%eax
087a305a +0x2aa:  movzbl -0x18(%ebp),%ecx
087a305e +0x2ae:  xor    (%edi,%eax,4),%edx
087a3061 +0x2b1:  mov    -0x20(%ebp),%eax
087a3064 +0x2b4:  mov    -0x1c(%ebp),%edi
087a3067 +0x2b7:  mov    (%eax,%ecx,4),%ecx
087a306a +0x2ba:  mov    -0x3c(%ebp),%eax
087a306d +0x2bd:  xor    0x1c(%edi),%ecx
087a3070 +0x2c0:  mov    -0x2c(%ebp),%edi
087a3073 +0x2c3:  shr    $0x18,%eax
087a3076 +0x2c6:  xor    (%edi,%eax,4),%ecx
087a3079 +0x2c9:  mov    -0x10(%ebp),%edi
087a307c +0x2cc:  shr    $0x10,%edi
087a307f +0x2cf:  mov    %edi,%eax
087a3081 +0x2d1:  movzbl %al,%edi
087a3084 +0x2d4:  mov    -0x28(%ebp),%eax
087a3087 +0x2d7:  xor    (%eax,%edi,4),%ecx
087a308a +0x2da:  mov    -0x14(%ebp),%eax
087a308d +0x2dd:  movzbl %ah,%edi
087a3090 +0x2e0:  mov    -0x24(%ebp),%eax
087a3093 +0x2e3:  xor    (%eax,%edi,4),%ecx
087a3096 +0x2e6:  addl   $0x20,-0x1c(%ebp)
087a309a +0x2ea:  subl   $0x1,-0x30(%ebp)
087a309e +0x2ee:  jne    087a2ea8 <+0xf8>
087a30a4 +0x2f4:  mov    -0x38(%ebp),%edi
087a30a7 +0x2f7:  mov    -0x40(%ebp),%eax
087a30aa +0x2fa:  shl    $0x5,%edi
087a30ad +0x2fd:  add    -0x34(%ebp),%edi
087a30b0 +0x300:  mov    %eax,-0x24(%ebp)
087a30b3 +0x303:  movzbl -0x24(%ebp),%eax
087a30b7 +0x307:  mov    %edi,-0x20(%ebp)
087a30ba +0x30a:  mov    -0x140(%ebx),%edi
087a30c0 +0x310:  mov    (%edi),%edi
087a30c2 +0x312:  mov    %edi,-0x10(%ebp)
087a30c5 +0x315:  movzbl (%edi,%eax,4),%eax
087a30c9 +0x319:  mov    -0x20(%ebp),%edi
087a30cc +0x31c:  mov    (%edi),%edi
087a30ce +0x31e:  xor    %edi,%eax
087a30d0 +0x320:  mov    -0x10(%ebp),%edi
087a30d3 +0x323:  mov    %eax,-0x1c(%ebp)
087a30d6 +0x326:  mov    %esi,%eax
087a30d8 +0x328:  shr    $0x18,%eax
087a30db +0x32b:  mov    (%edi,%eax,4),%eax
087a30de +0x32e:  mov    %ecx,%edi
087a30e0 +0x330:  shr    $0x10,%edi
087a30e3 +0x333:  and    $0xff000000,%eax
087a30e8 +0x338:  xor    %eax,-0x1c(%ebp)
087a30eb +0x33b:  mov    %edi,%eax
087a30ed +0x33d:  movzbl %al,%edi
087a30f0 +0x340:  mov    -0x10(%ebp),%eax
087a30f3 +0x343:  mov    (%eax,%edi,4),%eax
087a30f6 +0x346:  mov    -0x10(%ebp),%edi
087a30f9 +0x349:  and    $0xff0000,%eax
087a30fe +0x34e:  xor    %eax,-0x1c(%ebp)
087a3101 +0x351:  movzbl %dh,%eax
087a3104 +0x354:  mov    (%edi,%eax,4),%eax
087a3107 +0x357:  and    $0xff00,%eax
087a310c +0x35c:  xor    %eax,-0x1c(%ebp)
087a310f +0x35f:  movzbl %dl,%eax
087a3112 +0x362:  movzbl (%edi,%eax,4),%eax
087a3116 +0x366:  mov    -0x20(%ebp),%edi
087a3119 +0x369:  mov    0x4(%edi),%edi
087a311c +0x36c:  xor    %edi,%eax
087a311e +0x36e:  mov    -0x10(%ebp),%edi
087a3121 +0x371:  mov    %eax,-0x18(%ebp)
087a3124 +0x374:  mov    -0x24(%ebp),%eax
087a3127 +0x377:  shr    $0x18,%eax
087a312a +0x37a:  mov    (%edi,%eax,4),%eax
087a312d +0x37d:  mov    %esi,%edi
087a312f +0x37f:  shr    $0x10,%edi
087a3132 +0x382:  and    $0xff000000,%eax
087a3137 +0x387:  xor    %eax,-0x18(%ebp)
087a313a +0x38a:  mov    %edi,%eax
087a313c +0x38c:  movzbl %al,%edi
087a313f +0x38f:  mov    -0x10(%ebp),%eax
087a3142 +0x392:  mov    (%eax,%edi,4),%eax
087a3145 +0x395:  and    $0xff0000,%eax
087a314a +0x39a:  xor    %eax,-0x18(%ebp)
087a314d +0x39d:  movzbl %ch,%eax
087a3150 +0x3a0:  mov    -0x10(%ebp),%edi
087a3153 +0x3a3:  mov    (%edi,%eax,4),%eax
087a3156 +0x3a6:  and    $0xff00,%eax
087a315b +0x3ab:  xor    %eax,-0x18(%ebp)
087a315e +0x3ae:  movzbl %cl,%eax
087a3161 +0x3b1:  movzbl (%edi,%eax,4),%eax
087a3165 +0x3b5:  shr    $0x18,%ecx
087a3168 +0x3b8:  mov    -0x20(%ebp),%edi
087a316b +0x3bb:  mov    0x8(%edi),%edi
087a316e +0x3be:  xor    %edi,%eax
087a3170 +0x3c0:  mov    -0x10(%ebp),%edi
087a3173 +0x3c3:  mov    %eax,-0x14(%ebp)
087a3176 +0x3c6:  mov    %edx,%eax
087a3178 +0x3c8:  shr    $0x18,%eax
087a317b +0x3cb:  mov    (%edi,%eax,4),%eax
087a317e +0x3ce:  mov    -0x24(%ebp),%edi
087a3181 +0x3d1:  and    $0xff000000,%eax
087a3186 +0x3d6:  shr    $0x10,%edi
087a3189 +0x3d9:  xor    %eax,-0x14(%ebp)
087a318c +0x3dc:  mov    %edi,%eax
087a318e +0x3de:  movzbl %al,%edi
087a3191 +0x3e1:  mov    -0x10(%ebp),%eax
087a3194 +0x3e4:  mov    (%eax,%edi,4),%eax
087a3197 +0x3e7:  and    $0xff0000,%eax
087a319c +0x3ec:  xor    %eax,-0x14(%ebp)
087a319f +0x3ef:  mov    %esi,%eax
087a31a1 +0x3f1:  movzbl %ah,%edi
087a31a4 +0x3f4:  mov    -0x10(%ebp),%eax
087a31a7 +0x3f7:  and    $0xff,%esi
087a31ad +0x3fd:  mov    (%eax,%edi,4),%edi
087a31b0 +0x400:  mov    (%eax,%ecx,4),%ecx
087a31b3 +0x403:  movzbl (%eax,%esi,4),%esi
087a31b7 +0x407:  and    $0xff00,%edi
087a31bd +0x40d:  xor    %edi,-0x14(%ebp)
087a31c0 +0x410:  and    $0xff000000,%ecx
087a31c6 +0x416:  mov    -0x20(%ebp),%edi
087a31c9 +0x419:  xor    0xc(%edi),%esi
087a31cc +0x41c:  xor    %ecx,%esi
087a31ce +0x41e:  mov    -0x10(%ebp),%ecx
087a31d1 +0x421:  shr    $0x10,%edx
087a31d4 +0x424:  movzbl %dl,%edx
087a31d7 +0x427:  mov    (%eax,%edx,4),%edx
087a31da +0x42a:  and    $0xff0000,%edx
087a31e0 +0x430:  xor    %edx,%esi
087a31e2 +0x432:  mov    -0x24(%ebp),%edx
087a31e5 +0x435:  movzbl %dh,%eax
087a31e8 +0x438:  mov    (%ecx,%eax,4),%eax
087a31eb +0x43b:  mov    0x10(%ebp),%ecx
087a31ee +0x43e:  and    $0xff00,%eax
087a31f3 +0x443:  xor    %eax,%esi
087a31f5 +0x445:  test   %ecx,%ecx
087a31f7 +0x447:  je     087a32b8 <+0x508>
087a31fd +0x44d:  mov    -0x1c(%ebp),%eax
087a3200 +0x450:  mov    -0x1c(%ebp),%edx
087a3203 +0x453:  mov    0x10(%ebp),%edi
087a3206 +0x456:  ror    $0x18,%eax
087a3209 +0x459:  ror    $0x8,%edx
087a320c +0x45c:  and    $0xff00ff,%eax
087a3211 +0x461:  and    $0xff00ff00,%edx
087a3217 +0x467:  or     %edx,%eax
087a3219 +0x469:  mov    0x14(%ebp),%edx
087a321c +0x46c:  xor    (%edi),%eax
087a321e +0x46e:  mov    %eax,(%edx)
087a3220 +0x470:  mov    %edx,%eax
087a3222 +0x472:  add    $0x4,%eax
087a3225 +0x475:  cmp    $0xfffffffc,%edi
087a3228 +0x478:  je     087a32db <+0x52b>
087a322e +0x47e:  mov    -0x18(%ebp),%eax
087a3231 +0x481:  mov    -0x18(%ebp),%edx
087a3234 +0x484:  ror    $0x18,%eax
087a3237 +0x487:  ror    $0x8,%edx
087a323a +0x48a:  and    $0xff00ff,%eax
087a323f +0x48f:  and    $0xff00ff00,%edx
087a3245 +0x495:  or     %edx,%eax
087a3247 +0x497:  mov    0x14(%ebp),%edx
087a324a +0x49a:  xor    0x4(%edi),%eax
087a324d +0x49d:  mov    %eax,0x4(%edx)
087a3250 +0x4a0:  mov    %edx,%eax
087a3252 +0x4a2:  add    $0x8,%eax
087a3255 +0x4a5:  cmp    $0xfffffff8,%edi
087a3258 +0x4a8:  je     087a32fa <+0x54a>
087a325e +0x4ae:  mov    -0x14(%ebp),%eax
087a3261 +0x4b1:  mov    %edi,%ecx
087a3263 +0x4b3:  mov    -0x14(%ebp),%edx
087a3266 +0x4b6:  ror    $0x18,%eax
087a3269 +0x4b9:  ror    $0x8,%edx
087a326c +0x4bc:  and    $0xff00ff,%eax
087a3271 +0x4c1:  and    $0xff00ff00,%edx
087a3277 +0x4c7:  or     %edx,%eax
087a3279 +0x4c9:  xor    0x8(%edi),%eax
087a327c +0x4cc:  mov    0x14(%ebp),%edi
087a327f +0x4cf:  mov    %eax,0x8(%edi)
087a3282 +0x4d2:  mov    %edi,%eax
087a3284 +0x4d4:  add    $0xc,%eax
087a3287 +0x4d7:  cmp    $0xfffffff4,%ecx
087a328a +0x4da:  je     087a3319 <+0x569>
087a3290 +0x4e0:  mov    %esi,%eax
087a3292 +0x4e2:  ror    $0x18,%eax
087a3295 +0x4e5:  ror    $0x8,%esi
087a3298 +0x4e8:  and    $0xff00ff,%eax
087a329d +0x4ed:  and    $0xff00ff00,%esi
087a32a3 +0x4f3:  or     %esi,%eax
087a32a5 +0x4f5:  xor    0xc(%ecx),%eax
087a32a8 +0x4f8:  mov    0x14(%ebp),%ecx
087a32ab +0x4fb:  mov    %eax,0xc(%ecx)
087a32ae +0x4fe:  add    $0x34,%esp
087a32b1 +0x501:  pop    %ebx
087a32b2 +0x502:  pop    %esi
087a32b3 +0x503:  pop    %edi
087a32b4 +0x504:  pop    %ebp
087a32b5 +0x505:  ret
087a32b6 +0x506:  xchg   %ax,%ax
087a32b8 +0x508:  mov    -0x1c(%ebp),%eax
087a32bb +0x50b:  mov    -0x1c(%ebp),%edx
087a32be +0x50e:  mov    0x14(%ebp),%ecx
087a32c1 +0x511:  ror    $0x18,%eax
087a32c4 +0x514:  ror    $0x8,%edx
087a32c7 +0x517:  and    $0xff00ff,%eax
087a32cc +0x51c:  and    $0xff00ff00,%edx
087a32d2 +0x522:  or     %edx,%eax
087a32d4 +0x524:  mov    %eax,(%ecx)
087a32d6 +0x526:  mov    %ecx,%eax
087a32d8 +0x528:  add    $0x4,%eax
087a32db +0x52b:  mov    -0x18(%ebp),%edx
087a32de +0x52e:  mov    -0x18(%ebp),%ecx
087a32e1 +0x531:  ror    $0x18,%edx
087a32e4 +0x534:  ror    $0x8,%ecx
087a32e7 +0x537:  and    $0xff00ff,%edx
087a32ed +0x53d:  and    $0xff00ff00,%ecx
087a32f3 +0x543:  or     %ecx,%edx
087a32f5 +0x545:  mov    %edx,(%eax)
087a32f7 +0x547:  add    $0x4,%eax
087a32fa +0x54a:  mov    -0x14(%ebp),%edx
087a32fd +0x54d:  mov    -0x14(%ebp),%ecx
087a3300 +0x550:  ror    $0x18,%edx
087a3303 +0x553:  ror    $0x8,%ecx
087a3306 +0x556:  and    $0xff00ff,%edx
087a330c +0x55c:  and    $0xff00ff00,%ecx
087a3312 +0x562:  or     %ecx,%edx
087a3314 +0x564:  mov    %edx,(%eax)
087a3316 +0x566:  add    $0x4,%eax
087a3319 +0x569:  mov    %esi,%edx
087a331b +0x56b:  ror    $0x18,%edx
087a331e +0x56e:  ror    $0x8,%esi
087a3321 +0x571:  and    $0xff00ff,%edx
087a3327 +0x577:  and    $0xff00ff00,%esi
087a332d +0x57d:  or     %esi,%edx
087a332f +0x57f:  mov    %edx,(%eax)
087a3331 +0x581:  add    $0x34,%esp
087a3334 +0x584:  pop    %ebx
087a3335 +0x585:  pop    %esi
087a3336 +0x586:  pop    %edi
087a3337 +0x587:  pop    %ebp
087a3338 +0x588:  ret
087a3339 +0x589:  nop
087a333a +0x58a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::AES::decrypt @ 0x87a2db0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AES::decrypt(unsigned char const*, unsigned char const*, unsigned char*) const */

void __thiscall TaoCrypt::AES::decrypt(AES *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  AES *pAVar18;
  uint local_40;
  uint local_34;
  AES *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  uVar17 = *(uint *)param_1;
  uVar14 = *(uint *)(param_1 + 4);
  uVar15 = *(uint *)(param_1 + 8);
  local_1c = (uVar17 >> 0x18 | (uVar17 & 0xff00) << 8 | uVar17 >> 8 & 0xff00ff00 | uVar17 << 0x18) ^
             *(uint *)(this + 0x3c);
  uVar17 = *(uint *)(param_1 + 0xc);
  local_18 = (uVar14 >> 0x18 | (uVar14 & 0xff00) << 8 | uVar14 >> 8 & 0xff00ff00 | uVar14 << 0x18) ^
             *(uint *)(this + 0x40);
  local_14 = (uVar15 >> 0x18 | (uVar15 & 0xff00) << 8 | uVar15 >> 8 & 0xff00ff00 | uVar15 << 0x18) ^
             *(uint *)(this + 0x44);
  iVar7 = *(int *)PTR_Td0_0936ca20;
  local_40 = (uVar17 >> 0x18 | (uVar17 & 0xff00) << 8 | uVar17 >> 8 & 0xff00ff00 | uVar17 << 0x18) ^
             *(uint *)(this + 0x48);
  iVar8 = *(int *)PTR_Td1_0936c970;
  iVar9 = *(int *)PTR_Td2_0936c938;
  iVar10 = *(int *)PTR_Td3_0936c77c;
  local_34 = *(uint *)(this + 0x38) >> 1;
  local_20 = this + 0x3c;
  while( true ) {
    uVar16 = *(uint *)(iVar10 + (local_18 & 0xff) * 4) ^ *(uint *)(local_20 + 0x10) ^
             *(uint *)(iVar7 + (local_1c >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_40 >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_14 >> 8 & 0xff) * 4);
    uVar17 = *(uint *)(iVar10 + (local_14 & 0xff) * 4) ^ *(uint *)(local_20 + 0x14) ^
             *(uint *)(iVar7 + (local_18 >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_1c >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_40 >> 8 & 0xff) * 4);
    uVar15 = *(uint *)(iVar10 + (local_40 & 0xff) * 4) ^ *(uint *)(local_20 + 0x18) ^
             *(uint *)(iVar7 + (local_14 >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_18 >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_1c >> 8 & 0xff) * 4);
    uVar14 = *(uint *)(iVar10 + (local_1c & 0xff) * 4) ^ *(uint *)(local_20 + 0x1c) ^
             *(uint *)(iVar7 + (local_40 >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_14 >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_18 >> 8 & 0xff) * 4);
    local_34 = local_34 - 1;
    if (local_34 == 0) break;
    local_1c = *(uint *)(iVar10 + (uVar17 & 0xff) * 4) ^ *(uint *)(local_20 + 0x20) ^
               *(uint *)(iVar7 + (uVar16 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar14 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar15 >> 8 & 0xff) * 4);
    local_18 = *(uint *)(iVar10 + (uVar15 & 0xff) * 4) ^ *(uint *)(local_20 + 0x24) ^
               *(uint *)(iVar7 + (uVar17 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar16 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar14 >> 8 & 0xff) * 4);
    local_14 = *(uint *)(iVar10 + (uVar14 & 0xff) * 4) ^ *(uint *)(local_20 + 0x28) ^
               *(uint *)(iVar7 + (uVar15 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar17 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar16 >> 8 & 0xff) * 4);
    local_40 = *(uint *)(iVar10 + (uVar16 & 0xff) * 4) ^ *(uint *)(local_20 + 0x2c) ^
               *(uint *)(iVar7 + (uVar14 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar15 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar17 >> 8 & 0xff) * 4);
    local_20 = local_20 + 0x20;
  }
  pAVar18 = this + 0x3c + (*(uint *)(this + 0x38) >> 1) * 0x20;
  iVar7 = *(int *)PTR_Td4_0936ca58;
  uVar11 = (uint)*(byte *)(iVar7 + (uVar17 & 0xff) * 4) ^ *(uint *)pAVar18;
  uVar1 = uVar11 ^ *(uint *)(iVar7 + (uVar16 >> 0x18) * 4) & 0xff000000;
  uVar2 = uVar1 ^ *(uint *)(iVar7 + (uVar14 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(iVar7 + (uVar15 >> 8 & 0xff) * 4) & 0xff00;
  uVar12 = (uint)*(byte *)(iVar7 + (uVar15 & 0xff) * 4) ^ *(uint *)(pAVar18 + 4);
  uVar3 = uVar12 ^ *(uint *)(iVar7 + (uVar17 >> 0x18) * 4) & 0xff000000;
  uVar4 = uVar3 ^ *(uint *)(iVar7 + (uVar16 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(iVar7 + (uVar14 >> 8 & 0xff) * 4) & 0xff00;
  uVar13 = (uint)*(byte *)(iVar7 + (uVar14 & 0xff) * 4) ^ *(uint *)(pAVar18 + 8);
  uVar5 = uVar13 ^ *(uint *)(iVar7 + (uVar15 >> 0x18) * 4) & 0xff000000;
  uVar6 = uVar5 ^ *(uint *)(iVar7 + (uVar17 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(iVar7 + (uVar16 >> 8 & 0xff) * 4) & 0xff00;
  uVar16 = (uint)*(byte *)(iVar7 + (uVar16 & 0xff) * 4) ^ *(uint *)(pAVar18 + 0xc);
  uVar14 = uVar16 ^ *(uint *)(iVar7 + (uVar14 >> 0x18) * 4) & 0xff000000;
  uVar17 = uVar14 ^ *(uint *)(iVar7 + (uVar15 >> 0x10 & 0xff) * 4) & 0xff0000 ^
           *(uint *)(iVar7 + (uVar17 >> 8 & 0xff) * 4) & 0xff00;
  if (param_2 == (uchar *)0x0) {
    *(uint *)param_3 =
         uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar11 << 0x18;
LAB_087a32db:
    *(uint *)(param_3 + 4) =
         uVar3 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar12 << 0x18;
  }
  else {
    *(uint *)param_3 =
         (uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar11 << 0x18) ^
         *(uint *)param_2;
    if (param_2 == (uchar *)0xfffffffc) goto LAB_087a32db;
    *(uint *)(param_3 + 4) =
         (uVar3 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar12 << 0x18) ^
         *(uint *)(param_2 + 4);
    if (param_2 != (uchar *)0xfffffff8) {
      *(uint *)(param_3 + 8) =
           (uVar5 >> 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00ff00 | uVar13 << 0x18) ^
           *(uint *)(param_2 + 8);
      if (param_2 != (uchar *)0xfffffff4) {
        *(uint *)(param_3 + 0xc) =
             (uVar14 >> 0x18 | (uVar17 & 0xff00) << 8 | uVar17 >> 8 & 0xff00ff00 | uVar16 << 0x18) ^
             *(uint *)(param_2 + 0xc);
        return;
      }
      goto LAB_087a3319;
    }
  }
  *(uint *)(param_3 + 8) =
       uVar5 >> 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00ff00 | uVar13 << 0x18;
LAB_087a3319:
  *(uint *)(param_3 + 0xc) =
       uVar14 >> 0x18 | (uVar17 & 0xff00) << 8 | uVar17 >> 8 & 0xff00ff00 | uVar16 << 0x18;
  return;
}
```
