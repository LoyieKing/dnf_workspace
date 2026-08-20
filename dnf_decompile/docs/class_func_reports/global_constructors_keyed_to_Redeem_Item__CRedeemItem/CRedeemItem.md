# CRedeemItem

`_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev`

`global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Redeem_Item::CRedeemItem` | `0x085f7bc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f7bc4  _GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev
#           global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()
# range [0x085f7bc4, 0x085f846f]
085f7bc4 +0x000:  push   %ebp
085f7bc5 +0x001:  mov    %esp,%ebp
085f7bc7 +0x003:  sub    $0x18,%esp
085f7bca +0x006:  movl   $0xffff,0x4(%esp)
085f7bd2 +0x00e:  movl   $0x1,(%esp)
085f7bd9 +0x015:  call   085f7b84 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085f7bde +0x01a:  leave
085f7bdf +0x01b:  ret
085f7be0 +0x01c:  push   %ebp
085f7be1 +0x01d:  mov    %esp,%ebp
085f7be3 +0x01f:  mov    0x8(%ebp),%eax
085f7be6 +0x022:  movzbl 0x144(%eax),%eax
085f7bed +0x029:  pop    %ebp
085f7bee +0x02a:  ret
085f7bef +0x02b:  nop
085f7bf0 +0x02c:  push   %ebp
085f7bf1 +0x02d:  mov    %esp,%ebp
085f7bf3 +0x02f:  sub    $0x18,%esp
085f7bf6 +0x032:  mov    0x8(%ebp),%eax
085f7bf9 +0x035:  mov    %eax,(%esp)
085f7bfc +0x038:  call   085f7c58 <+0x94>
085f7c01 +0x03d:  leave
085f7c02 +0x03e:  ret
085f7c03 +0x03f:  nop
085f7c04 +0x040:  push   %ebp
085f7c05 +0x041:  mov    %esp,%ebp
085f7c07 +0x043:  mov    0xc(%ebp),%eax
085f7c0a +0x046:  mov    0x2(%eax),%eax
085f7c0d +0x049:  cmp    $0x1963,%eax
085f7c12 +0x04e:  jbe    085f7c28 <+0x64>
085f7c14 +0x050:  mov    0xc(%ebp),%eax
085f7c17 +0x053:  mov    0x2(%eax),%eax
085f7c1a +0x056:  cmp    $0x1b57,%eax
085f7c1f +0x05b:  ja     085f7c28 <+0x64>
085f7c21 +0x05d:  mov    $0x1,%eax
085f7c26 +0x062:  jmp    085f7c2d <+0x69>
085f7c28 +0x064:  mov    $0x0,%eax
085f7c2d +0x069:  pop    %ebp
085f7c2e +0x06a:  ret
085f7c2f +0x06b:  nop
085f7c30 +0x06c:  push   %ebp
085f7c31 +0x06d:  mov    %esp,%ebp
085f7c33 +0x06f:  sub    $0x18,%esp
085f7c36 +0x072:  mov    0x8(%ebp),%eax
085f7c39 +0x075:  mov    %eax,(%esp)
085f7c3c +0x078:  call   085f7fb2 <+0x3ee>
085f7c41 +0x07d:  leave
085f7c42 +0x07e:  ret
085f7c43 +0x07f:  nop
085f7c44 +0x080:  push   %ebp
085f7c45 +0x081:  mov    %esp,%ebp
085f7c47 +0x083:  sub    $0x18,%esp
085f7c4a +0x086:  mov    0x8(%ebp),%eax
085f7c4d +0x089:  mov    %eax,(%esp)
085f7c50 +0x08c:  call   085f7fd0 <+0x40c>
085f7c55 +0x091:  leave
085f7c56 +0x092:  ret
085f7c57 +0x093:  nop
085f7c58 +0x094:  push   %ebp
085f7c59 +0x095:  mov    %esp,%ebp
085f7c5b +0x097:  push   %esi
085f7c5c +0x098:  push   %ebx
085f7c5d +0x099:  sub    $0x10,%esp
085f7c60 +0x09c:  mov    0x8(%ebp),%eax
085f7c63 +0x09f:  mov    %eax,(%esp)
085f7c66 +0x0a2:  call   085f7fe4 <+0x420>
085f7c6b +0x0a7:  jmp    085f7c88 <+0xc4>
085f7c6d +0x0a9:  mov    %edx,%ebx
085f7c6f +0x0ab:  mov    %eax,%esi
085f7c71 +0x0ad:  mov    0x8(%ebp),%eax
085f7c74 +0x0b0:  mov    %eax,(%esp)
085f7c77 +0x0b3:  call   085f7c44 <+0x80>
085f7c7c +0x0b8:  mov    %esi,%eax
085f7c7e +0x0ba:  mov    %ebx,%edx
085f7c80 +0x0bc:  mov    %eax,(%esp)
085f7c83 +0x0bf:  call   08ae3750 <_Unwind_Resume>
085f7c88 +0x0c4:  mov    0x8(%ebp),%eax
085f7c8b +0x0c7:  mov    %eax,(%esp)
085f7c8e +0x0ca:  call   085f7c44 <+0x80>
085f7c93 +0x0cf:  add    $0x10,%esp
085f7c96 +0x0d2:  pop    %ebx
085f7c97 +0x0d3:  pop    %esi
085f7c98 +0x0d4:  pop    %ebp
085f7c99 +0x0d5:  ret
085f7c9a +0x0d6:  push   %ebp
085f7c9b +0x0d7:  mov    %esp,%ebp
085f7c9d +0x0d9:  mov    0x8(%ebp),%eax
085f7ca0 +0x0dc:  mov    (%eax),%edx
085f7ca2 +0x0de:  mov    0x8(%ebp),%eax
085f7ca5 +0x0e1:  cmp    %eax,%edx
085f7ca7 +0x0e3:  sete   %al
085f7caa +0x0e6:  pop    %ebp
085f7cab +0x0e7:  ret
085f7cac +0x0e8:  push   %ebp
085f7cad +0x0e9:  mov    %esp,%ebp
085f7caf +0x0eb:  sub    $0x28,%esp
085f7cb2 +0x0ee:  lea    -0x10(%ebp),%eax
085f7cb5 +0x0f1:  mov    0x8(%ebp),%edx
085f7cb8 +0x0f4:  mov    %edx,0x4(%esp)
085f7cbc +0x0f8:  mov    %eax,(%esp)
085f7cbf +0x0fb:  call   085f7cf0 <+0x12c>
085f7cc4 +0x100:  sub    $0x4,%esp
085f7cc7 +0x103:  lea    -0xc(%ebp),%eax
085f7cca +0x106:  mov    0x8(%ebp),%edx
085f7ccd +0x109:  mov    %edx,0x4(%esp)
085f7cd1 +0x10d:  mov    %eax,(%esp)
085f7cd4 +0x110:  call   085f7d14 <+0x150>
085f7cd9 +0x115:  sub    $0x4,%esp
085f7cdc +0x118:  mov    -0x10(%ebp),%eax
085f7cdf +0x11b:  mov    %eax,0x4(%esp)
085f7ce3 +0x11f:  mov    -0xc(%ebp),%eax
085f7ce6 +0x122:  mov    %eax,(%esp)
085f7ce9 +0x125:  call   085f7e11 <+0x24d>
085f7cee +0x12a:  leave
085f7cef +0x12b:  ret
085f7cf0 +0x12c:  push   %ebp
085f7cf1 +0x12d:  mov    %esp,%ebp
085f7cf3 +0x12f:  push   %ebx
085f7cf4 +0x130:  sub    $0x14,%esp
085f7cf7 +0x133:  mov    0x8(%ebp),%ebx
085f7cfa +0x136:  mov    0xc(%ebp),%eax
085f7cfd +0x139:  mov    %eax,0x4(%esp)
085f7d01 +0x13d:  mov    %ebx,(%esp)
085f7d04 +0x140:  call   085f8040 <+0x47c>
085f7d09 +0x145:  mov    %ebx,%eax
085f7d0b +0x147:  add    $0x14,%esp
085f7d0e +0x14a:  pop    %ebx
085f7d0f +0x14b:  pop    %ebp
085f7d10 +0x14c:  ret    $0x4
085f7d13 +0x14f:  nop
085f7d14 +0x150:  push   %ebp
085f7d15 +0x151:  mov    %esp,%ebp
085f7d17 +0x153:  push   %ebx
085f7d18 +0x154:  sub    $0x14,%esp
085f7d1b +0x157:  mov    0x8(%ebp),%ebx
085f7d1e +0x15a:  mov    0xc(%ebp),%eax
085f7d21 +0x15d:  mov    (%eax),%eax
085f7d23 +0x15f:  mov    %eax,0x4(%esp)
085f7d27 +0x163:  mov    %ebx,(%esp)
085f7d2a +0x166:  call   085f8040 <+0x47c>
085f7d2f +0x16b:  mov    %ebx,%eax
085f7d31 +0x16d:  add    $0x14,%esp
085f7d34 +0x170:  pop    %ebx
085f7d35 +0x171:  pop    %ebp
085f7d36 +0x172:  ret    $0x4
085f7d39 +0x175:  push   %ebp
085f7d3a +0x176:  mov    %esp,%ebp
085f7d3c +0x178:  push   %ebx
085f7d3d +0x179:  sub    $0x24,%esp
085f7d40 +0x17c:  mov    0xc(%ebp),%eax
085f7d43 +0x17f:  mov    %eax,-0xc(%ebp)
085f7d46 +0x182:  lea    -0xd(%ebp),%eax
085f7d49 +0x185:  mov    0x8(%ebp),%edx
085f7d4c +0x188:  mov    %edx,0x4(%esp)
085f7d50 +0x18c:  mov    %eax,(%esp)
085f7d53 +0x18f:  call   085f804d <+0x489>
085f7d58 +0x194:  sub    $0x4,%esp
085f7d5b +0x197:  mov    %bl,0x8(%esp)
085f7d5f +0x19b:  mov    -0xc(%ebp),%eax
085f7d62 +0x19e:  mov    %eax,0x4(%esp)
085f7d66 +0x1a2:  mov    0x8(%ebp),%eax
085f7d69 +0x1a5:  mov    %eax,(%esp)
085f7d6c +0x1a8:  call   085f8057 <+0x493>
085f7d71 +0x1ad:  mov    -0x4(%ebp),%ebx
085f7d74 +0x1b0:  leave
085f7d75 +0x1b1:  ret
085f7d76 +0x1b2:  push   %ebp
085f7d77 +0x1b3:  mov    %esp,%ebp
085f7d79 +0x1b5:  sub    $0x28,%esp
085f7d7c +0x1b8:  lea    -0xc(%ebp),%eax
085f7d7f +0x1bb:  mov    0x8(%ebp),%edx
085f7d82 +0x1be:  mov    %edx,0x4(%esp)
085f7d86 +0x1c2:  mov    %eax,(%esp)
085f7d89 +0x1c5:  call   085f7ddc <+0x218>
085f7d8e +0x1ca:  sub    $0x4,%esp
085f7d91 +0x1cd:  mov    -0xc(%ebp),%eax
085f7d94 +0x1d0:  mov    %eax,0x4(%esp)
085f7d98 +0x1d4:  mov    0x8(%ebp),%eax
085f7d9b +0x1d7:  mov    %eax,(%esp)
085f7d9e +0x1da:  call   085f809e <+0x4da>
085f7da3 +0x1df:  leave
085f7da4 +0x1e0:  ret
085f7da5 +0x1e1:  nop
085f7da6 +0x1e2:  push   %ebp
085f7da7 +0x1e3:  mov    %esp,%ebp
085f7da9 +0x1e5:  sub    $0x28,%esp
085f7dac +0x1e8:  lea    -0xc(%ebp),%eax
085f7daf +0x1eb:  mov    0x8(%ebp),%edx
085f7db2 +0x1ee:  mov    %edx,0x4(%esp)
085f7db6 +0x1f2:  mov    %eax,(%esp)
085f7db9 +0x1f5:  call   085f7e86 <+0x2c2>
085f7dbe +0x1fa:  sub    $0x4,%esp
085f7dc1 +0x1fd:  mov    0xc(%ebp),%eax
085f7dc4 +0x200:  mov    %eax,0x8(%esp)
085f7dc8 +0x204:  mov    -0xc(%ebp),%eax
085f7dcb +0x207:  mov    %eax,0x4(%esp)
085f7dcf +0x20b:  mov    0x8(%ebp),%eax
085f7dd2 +0x20e:  mov    %eax,(%esp)
085f7dd5 +0x211:  call   085f80e4 <+0x520>
085f7dda +0x216:  leave
085f7ddb +0x217:  ret
085f7ddc +0x218:  push   %ebp
085f7ddd +0x219:  mov    %esp,%ebp
085f7ddf +0x21b:  push   %ebx
085f7de0 +0x21c:  sub    $0x14,%esp
085f7de3 +0x21f:  mov    0x8(%ebp),%ebx
085f7de6 +0x222:  mov    0xc(%ebp),%eax
085f7de9 +0x225:  mov    (%eax),%eax
085f7deb +0x227:  mov    %eax,0x4(%esp)
085f7def +0x22b:  mov    %ebx,(%esp)
085f7df2 +0x22e:  call   085f811c <+0x558>
085f7df7 +0x233:  mov    %ebx,%eax
085f7df9 +0x235:  add    $0x14,%esp
085f7dfc +0x238:  pop    %ebx
085f7dfd +0x239:  pop    %ebp
085f7dfe +0x23a:  ret    $0x4
085f7e01 +0x23d:  nop
085f7e02 +0x23e:  push   %ebp
085f7e03 +0x23f:  mov    %esp,%ebp
085f7e05 +0x241:  mov    0xc(%ebp),%eax
085f7e08 +0x244:  mov    (%eax),%edx
085f7e0a +0x246:  mov    0x8(%ebp),%eax
085f7e0d +0x249:  mov    %edx,(%eax)
085f7e0f +0x24b:  pop    %ebp
085f7e10 +0x24c:  ret
085f7e11 +0x24d:  push   %ebp
085f7e12 +0x24e:  mov    %esp,%ebp
085f7e14 +0x250:  push   %ebx
085f7e15 +0x251:  sub    $0x24,%esp
085f7e18 +0x254:  lea    -0x9(%ebp),%eax
085f7e1b +0x257:  lea    0x8(%ebp),%edx
085f7e1e +0x25a:  mov    %edx,0x4(%esp)
085f7e22 +0x25e:  mov    %eax,(%esp)
085f7e25 +0x261:  call   085f804d <+0x489>
085f7e2a +0x266:  sub    $0x4,%esp
085f7e2d +0x269:  mov    %bl,0x8(%esp)
085f7e31 +0x26d:  mov    0xc(%ebp),%eax
085f7e34 +0x270:  mov    %eax,0x4(%esp)
085f7e38 +0x274:  mov    0x8(%ebp),%eax
085f7e3b +0x277:  mov    %eax,(%esp)
085f7e3e +0x27a:  call   085f8129 <+0x565>
085f7e43 +0x27f:  mov    -0x4(%ebp),%ebx
085f7e46 +0x282:  leave
085f7e47 +0x283:  ret
085f7e48 +0x284:  push   %ebp
085f7e49 +0x285:  mov    %esp,%ebp
085f7e4b +0x287:  push   %ebx
085f7e4c +0x288:  sub    $0x24,%esp
085f7e4f +0x28b:  mov    0xc(%ebp),%eax
085f7e52 +0x28e:  mov    %eax,-0xc(%ebp)
085f7e55 +0x291:  lea    -0xd(%ebp),%eax
085f7e58 +0x294:  mov    0x8(%ebp),%edx
085f7e5b +0x297:  mov    %edx,0x4(%esp)
085f7e5f +0x29b:  mov    %eax,(%esp)
085f7e62 +0x29e:  call   085f8162 <+0x59e>
085f7e67 +0x2a3:  sub    $0x4,%esp
085f7e6a +0x2a6:  mov    %bl,0x8(%esp)
085f7e6e +0x2aa:  mov    -0xc(%ebp),%eax
085f7e71 +0x2ad:  mov    %eax,0x4(%esp)
085f7e75 +0x2b1:  mov    0x8(%ebp),%eax
085f7e78 +0x2b4:  mov    %eax,(%esp)
085f7e7b +0x2b7:  call   085f816c <+0x5a8>
085f7e80 +0x2bc:  mov    -0x4(%ebp),%ebx
085f7e83 +0x2bf:  leave
085f7e84 +0x2c0:  ret
085f7e85 +0x2c1:  nop
085f7e86 +0x2c2:  push   %ebp
085f7e87 +0x2c3:  mov    %esp,%ebp
085f7e89 +0x2c5:  push   %ebx
085f7e8a +0x2c6:  sub    $0x14,%esp
085f7e8d +0x2c9:  mov    0x8(%ebp),%ebx
085f7e90 +0x2cc:  mov    0xc(%ebp),%eax
085f7e93 +0x2cf:  mov    %eax,0x4(%esp)
085f7e97 +0x2d3:  mov    %ebx,(%esp)
085f7e9a +0x2d6:  call   085f811c <+0x558>
085f7e9f +0x2db:  mov    %ebx,%eax
085f7ea1 +0x2dd:  add    $0x14,%esp
085f7ea4 +0x2e0:  pop    %ebx
085f7ea5 +0x2e1:  pop    %ebp
085f7ea6 +0x2e2:  ret    $0x4
085f7ea9 +0x2e5:  nop
085f7eaa +0x2e6:  push   %ebp
085f7eab +0x2e7:  mov    %esp,%ebp
085f7ead +0x2e9:  mov    0x8(%ebp),%eax
085f7eb0 +0x2ec:  mov    (%eax),%edx
085f7eb2 +0x2ee:  mov    0xc(%ebp),%eax
085f7eb5 +0x2f1:  mov    (%eax),%eax
085f7eb7 +0x2f3:  cmp    %eax,%edx
085f7eb9 +0x2f5:  setne  %al
085f7ebc +0x2f8:  pop    %ebp
085f7ebd +0x2f9:  ret
085f7ebe +0x2fa:  push   %ebp
085f7ebf +0x2fb:  mov    %esp,%ebp
085f7ec1 +0x2fd:  mov    0x8(%ebp),%eax
085f7ec4 +0x300:  mov    (%eax),%eax
085f7ec6 +0x302:  add    $0x8,%eax
085f7ec9 +0x305:  pop    %ebp
085f7eca +0x306:  ret
085f7ecb +0x307:  nop
085f7ecc +0x308:  push   %ebp
085f7ecd +0x309:  mov    %esp,%ebp
085f7ecf +0x30b:  push   %ebx
085f7ed0 +0x30c:  sub    $0x14,%esp
085f7ed3 +0x30f:  mov    0x8(%ebp),%ebx
085f7ed6 +0x312:  mov    0x10(%ebp),%eax
085f7ed9 +0x315:  mov    (%eax),%eax
085f7edb +0x317:  mov    %eax,0x4(%esp)
085f7edf +0x31b:  mov    %ebx,(%esp)
085f7ee2 +0x31e:  call   085f811c <+0x558>
085f7ee7 +0x323:  mov    0x10(%ebp),%eax
085f7eea +0x326:  mov    %eax,0x4(%esp)
085f7eee +0x32a:  mov    0xc(%ebp),%eax
085f7ef1 +0x32d:  mov    %eax,(%esp)
085f7ef4 +0x330:  call   085f809e <+0x4da>
085f7ef9 +0x335:  mov    %ebx,%eax
085f7efb +0x337:  add    $0x14,%esp
085f7efe +0x33a:  pop    %ebx
085f7eff +0x33b:  pop    %ebp
085f7f00 +0x33c:  ret    $0x4
085f7f03 +0x33f:  push   %ebp
085f7f04 +0x340:  mov    %esp,%ebp
085f7f06 +0x342:  mov    0x8(%ebp),%eax
085f7f09 +0x345:  mov    (%eax),%edx
085f7f0b +0x347:  mov    0xc(%ebp),%eax
085f7f0e +0x34a:  mov    (%eax),%eax
085f7f10 +0x34c:  cmp    %eax,%edx
085f7f12 +0x34e:  sete   %al
085f7f15 +0x351:  pop    %ebp
085f7f16 +0x352:  ret
085f7f17 +0x353:  nop
085f7f18 +0x354:  push   %ebp
085f7f19 +0x355:  mov    %esp,%ebp
085f7f1b +0x357:  mov    0x8(%ebp),%eax
085f7f1e +0x35a:  mov    (%eax),%eax
085f7f20 +0x35c:  add    $0x8,%eax
085f7f23 +0x35f:  pop    %ebp
085f7f24 +0x360:  ret
085f7f25 +0x361:  nop
085f7f26 +0x362:  push   %ebp
085f7f27 +0x363:  mov    %esp,%ebp
085f7f29 +0x365:  mov    0x8(%ebp),%eax
085f7f2c +0x368:  mov    (%eax),%eax
085f7f2e +0x36a:  mov    (%eax),%edx
085f7f30 +0x36c:  mov    0x8(%ebp),%eax
085f7f33 +0x36f:  mov    %edx,(%eax)
085f7f35 +0x371:  mov    0x8(%ebp),%eax
085f7f38 +0x374:  pop    %ebp
085f7f39 +0x375:  ret
085f7f3a +0x376:  push   %ebp
085f7f3b +0x377:  mov    %esp,%ebp
085f7f3d +0x379:  mov    0x8(%ebp),%eax
085f7f40 +0x37c:  mov    (%eax),%eax
085f7f42 +0x37e:  add    $0x8,%eax
085f7f45 +0x381:  pop    %ebp
085f7f46 +0x382:  ret
085f7f47 +0x383:  nop
085f7f48 +0x384:  push   %ebp
085f7f49 +0x385:  mov    %esp,%ebp
085f7f4b +0x387:  mov    0x8(%ebp),%eax
085f7f4e +0x38a:  mov    (%eax),%edx
085f7f50 +0x38c:  mov    0xc(%ebp),%eax
085f7f53 +0x38f:  mov    (%eax),%eax
085f7f55 +0x391:  cmp    %eax,%edx
085f7f57 +0x393:  setne  %al
085f7f5a +0x396:  pop    %ebp
085f7f5b +0x397:  ret
085f7f5c +0x398:  push   %ebp
085f7f5d +0x399:  mov    %esp,%ebp
085f7f5f +0x39b:  mov    0x8(%ebp),%eax
085f7f62 +0x39e:  mov    (%eax),%eax
085f7f64 +0x3a0:  add    $0x8,%eax
085f7f67 +0x3a3:  pop    %ebp
085f7f68 +0x3a4:  ret
085f7f69 +0x3a5:  nop
085f7f6a +0x3a6:  push   %ebp
085f7f6b +0x3a7:  mov    %esp,%ebp
085f7f6d +0x3a9:  mov    0x8(%ebp),%eax
085f7f70 +0x3ac:  mov    (%eax),%eax
085f7f72 +0x3ae:  mov    (%eax),%edx
085f7f74 +0x3b0:  mov    0x8(%ebp),%eax
085f7f77 +0x3b3:  mov    %edx,(%eax)
085f7f79 +0x3b5:  mov    0x8(%ebp),%eax
085f7f7c +0x3b8:  pop    %ebp
085f7f7d +0x3b9:  ret
085f7f7e +0x3ba:  push   %ebp
085f7f7f +0x3bb:  mov    %esp,%ebp
085f7f81 +0x3bd:  sub    $0x18,%esp
085f7f84 +0x3c0:  mov    0x8(%ebp),%eax
085f7f87 +0x3c3:  mov    (%eax),%eax
085f7f89 +0x3c5:  mov    %eax,(%esp)
085f7f8c +0x3c8:  call   085f81b2 <+0x5ee>
085f7f91 +0x3cd:  leave
085f7f92 +0x3ce:  ret
085f7f93 +0x3cf:  nop
085f7f94 +0x3d0:  push   %ebp
085f7f95 +0x3d1:  mov    %esp,%ebp
085f7f97 +0x3d3:  sub    $0x18,%esp
085f7f9a +0x3d6:  mov    0x8(%ebp),%eax
085f7f9d +0x3d9:  mov    %eax,(%esp)
085f7fa0 +0x3dc:  call   085f7fe4 <+0x420>
085f7fa5 +0x3e1:  mov    0x8(%ebp),%eax
085f7fa8 +0x3e4:  mov    %eax,(%esp)
085f7fab +0x3e7:  call   085f821c <+0x658>
085f7fb0 +0x3ec:  leave
085f7fb1 +0x3ed:  ret
085f7fb2 +0x3ee:  push   %ebp
085f7fb3 +0x3ef:  mov    %esp,%ebp
085f7fb5 +0x3f1:  sub    $0x18,%esp
085f7fb8 +0x3f4:  mov    0x8(%ebp),%eax
085f7fbb +0x3f7:  mov    %eax,(%esp)
085f7fbe +0x3fa:  call   085f8232 <+0x66e>
085f7fc3 +0x3ff:  mov    0x8(%ebp),%eax
085f7fc6 +0x402:  mov    %eax,(%esp)
085f7fc9 +0x405:  call   085f821c <+0x658>
085f7fce +0x40a:  leave
085f7fcf +0x40b:  ret
085f7fd0 +0x40c:  push   %ebp
085f7fd1 +0x40d:  mov    %esp,%ebp
085f7fd3 +0x40f:  sub    $0x18,%esp
085f7fd6 +0x412:  mov    0x8(%ebp),%eax
085f7fd9 +0x415:  mov    %eax,(%esp)
085f7fdc +0x418:  call   085f8258 <+0x694>
085f7fe1 +0x41d:  leave
085f7fe2 +0x41e:  ret
085f7fe3 +0x41f:  nop
085f7fe4 +0x420:  push   %ebp
085f7fe5 +0x421:  mov    %esp,%ebp
085f7fe7 +0x423:  sub    $0x28,%esp
085f7fea +0x426:  mov    0x8(%ebp),%eax
085f7fed +0x429:  mov    (%eax),%eax
085f7fef +0x42b:  mov    %eax,-0x10(%ebp)
085f7ff2 +0x42e:  jmp    085f802e <+0x46a>
085f7ff4 +0x430:  mov    -0x10(%ebp),%eax
085f7ff7 +0x433:  mov    %eax,-0xc(%ebp)
085f7ffa +0x436:  mov    -0x10(%ebp),%eax
085f7ffd +0x439:  mov    (%eax),%eax
085f7fff +0x43b:  mov    %eax,-0x10(%ebp)
085f8002 +0x43e:  mov    0x8(%ebp),%eax
085f8005 +0x441:  mov    %eax,(%esp)
085f8008 +0x444:  call   085f825e <+0x69a>
085f800d +0x449:  mov    -0xc(%ebp),%edx
085f8010 +0x44c:  mov    %edx,0x4(%esp)
085f8014 +0x450:  mov    %eax,(%esp)
085f8017 +0x453:  call   085f826c <+0x6a8>
085f801c +0x458:  mov    -0xc(%ebp),%eax
085f801f +0x45b:  mov    %eax,0x4(%esp)
085f8023 +0x45f:  mov    0x8(%ebp),%eax
085f8026 +0x462:  mov    %eax,(%esp)
085f8029 +0x465:  call   085f8280 <+0x6bc>
085f802e +0x46a:  mov    0x8(%ebp),%edx
085f8031 +0x46d:  mov    -0x10(%ebp),%eax
085f8034 +0x470:  cmp    %eax,%edx
085f8036 +0x472:  setne  %al
085f8039 +0x475:  test   %al,%al
085f803b +0x477:  jne    085f7ff4 <+0x430>
085f803d +0x479:  leave
085f803e +0x47a:  ret
085f803f +0x47b:  nop
085f8040 +0x47c:  push   %ebp
085f8041 +0x47d:  mov    %esp,%ebp
085f8043 +0x47f:  mov    0x8(%ebp),%eax
085f8046 +0x482:  mov    0xc(%ebp),%edx
085f8049 +0x485:  mov    %edx,(%eax)
085f804b +0x487:  pop    %ebp
085f804c +0x488:  ret
085f804d +0x489:  push   %ebp
085f804e +0x48a:  mov    %esp,%ebp
085f8050 +0x48c:  mov    0x8(%ebp),%eax
085f8053 +0x48f:  pop    %ebp
085f8054 +0x490:  ret    $0x4
085f8057 +0x493:  push   %ebp
085f8058 +0x494:  mov    %esp,%ebp
085f805a +0x496:  sub    $0x18,%esp
085f805d +0x499:  cmpl   $0x0,0xc(%ebp)
085f8061 +0x49d:  jle    085f808c <+0x4c8>
085f8063 +0x49f:  jmp    085f8070 <+0x4ac>
085f8065 +0x4a1:  mov    0x8(%ebp),%eax
085f8068 +0x4a4:  mov    %eax,(%esp)
085f806b +0x4a7:  call   085f7f6a <+0x3a6>
085f8070 +0x4ac:  cmpl   $0x0,0xc(%ebp)
085f8074 +0x4b0:  setne  %al
085f8077 +0x4b3:  subl   $0x1,0xc(%ebp)
085f807b +0x4b7:  test   %al,%al
085f807d +0x4b9:  jne    085f8065 <+0x4a1>
085f807f +0x4bb:  jmp    085f809b <+0x4d7>
085f8081 +0x4bd:  mov    0x8(%ebp),%eax
085f8084 +0x4c0:  mov    %eax,(%esp)
085f8087 +0x4c3:  call   085f82a2 <+0x6de>
085f808c +0x4c8:  cmpl   $0x0,0xc(%ebp)
085f8090 +0x4cc:  setne  %al
085f8093 +0x4cf:  addl   $0x1,0xc(%ebp)
085f8097 +0x4d3:  test   %al,%al
085f8099 +0x4d5:  jne    085f8081 <+0x4bd>
085f809b +0x4d7:  leave
085f809c +0x4d8:  ret
085f809d +0x4d9:  nop
085f809e +0x4da:  push   %ebp
085f809f +0x4db:  mov    %esp,%ebp
085f80a1 +0x4dd:  sub    $0x28,%esp
085f80a4 +0x4e0:  mov    0xc(%ebp),%eax
085f80a7 +0x4e3:  mov    %eax,(%esp)
085f80aa +0x4e6:  call   086dad40 <_ZNSt15_List_node_base6unhookEv>  ; std::_List_node_base::unhook()
085f80af +0x4eb:  mov    0xc(%ebp),%eax
085f80b2 +0x4ee:  mov    %eax,-0xc(%ebp)
085f80b5 +0x4f1:  mov    0x8(%ebp),%eax
085f80b8 +0x4f4:  mov    %eax,(%esp)
085f80bb +0x4f7:  call   085f825e <+0x69a>
085f80c0 +0x4fc:  mov    -0xc(%ebp),%edx
085f80c3 +0x4ff:  mov    %edx,0x4(%esp)
085f80c7 +0x503:  mov    %eax,(%esp)
085f80ca +0x506:  call   085f826c <+0x6a8>
085f80cf +0x50b:  mov    0x8(%ebp),%eax
085f80d2 +0x50e:  mov    -0xc(%ebp),%edx
085f80d5 +0x511:  mov    %edx,0x4(%esp)
085f80d9 +0x515:  mov    %eax,(%esp)
085f80dc +0x518:  call   085f8280 <+0x6bc>
085f80e1 +0x51d:  leave
085f80e2 +0x51e:  ret
085f80e3 +0x51f:  nop
085f80e4 +0x520:  push   %ebp
085f80e5 +0x521:  mov    %esp,%ebp
085f80e7 +0x523:  sub    $0x28,%esp
085f80ea +0x526:  mov    0x10(%ebp),%eax
085f80ed +0x529:  mov    %eax,(%esp)
085f80f0 +0x52c:  call   085f82b7 <+0x6f3>
085f80f5 +0x531:  mov    %eax,0x4(%esp)
085f80f9 +0x535:  mov    0x8(%ebp),%eax
085f80fc +0x538:  mov    %eax,(%esp)
085f80ff +0x53b:  call   085f82c0 <+0x6fc>
085f8104 +0x540:  mov    %eax,-0xc(%ebp)
085f8107 +0x543:  mov    0xc(%ebp),%edx
085f810a +0x546:  mov    -0xc(%ebp),%eax
085f810d +0x549:  mov    %edx,0x4(%esp)
085f8111 +0x54d:  mov    %eax,(%esp)
085f8114 +0x550:  call   086dad20 <_ZNSt15_List_node_base4hookEPS_>  ; std::_List_node_base::hook(std::_List_node_base*)
085f8119 +0x555:  leave
085f811a +0x556:  ret
085f811b +0x557:  nop
085f811c +0x558:  push   %ebp
085f811d +0x559:  mov    %esp,%ebp
085f811f +0x55b:  mov    0x8(%ebp),%eax
085f8122 +0x55e:  mov    0xc(%ebp),%edx
085f8125 +0x561:  mov    %edx,(%eax)
085f8127 +0x563:  pop    %ebp
085f8128 +0x564:  ret
085f8129 +0x565:  push   %ebp
085f812a +0x566:  mov    %esp,%ebp
085f812c +0x568:  sub    $0x28,%esp
085f812f +0x56b:  movl   $0x0,-0xc(%ebp)
085f8136 +0x572:  jmp    085f8147 <+0x583>
085f8138 +0x574:  lea    0x8(%ebp),%eax
085f813b +0x577:  mov    %eax,(%esp)
085f813e +0x57a:  call   085f7f6a <+0x3a6>
085f8143 +0x57f:  addl   $0x1,-0xc(%ebp)
085f8147 +0x583:  lea    0xc(%ebp),%eax
085f814a +0x586:  mov    %eax,0x4(%esp)
085f814e +0x58a:  lea    0x8(%ebp),%eax
085f8151 +0x58d:  mov    %eax,(%esp)
085f8154 +0x590:  call   085f7f48 <+0x384>
085f8159 +0x595:  test   %al,%al
085f815b +0x597:  jne    085f8138 <+0x574>
085f815d +0x599:  mov    -0xc(%ebp),%eax
085f8160 +0x59c:  leave
085f8161 +0x59d:  ret
085f8162 +0x59e:  push   %ebp
085f8163 +0x59f:  mov    %esp,%ebp
085f8165 +0x5a1:  mov    0x8(%ebp),%eax
085f8168 +0x5a4:  pop    %ebp
085f8169 +0x5a5:  ret    $0x4
085f816c +0x5a8:  push   %ebp
085f816d +0x5a9:  mov    %esp,%ebp
085f816f +0x5ab:  sub    $0x18,%esp
085f8172 +0x5ae:  cmpl   $0x0,0xc(%ebp)
085f8176 +0x5b2:  jle    085f81a1 <+0x5dd>
085f8178 +0x5b4:  jmp    085f8185 <+0x5c1>
085f817a +0x5b6:  mov    0x8(%ebp),%eax
085f817d +0x5b9:  mov    %eax,(%esp)
085f8180 +0x5bc:  call   085f7f26 <+0x362>
085f8185 +0x5c1:  cmpl   $0x0,0xc(%ebp)
085f8189 +0x5c5:  setne  %al
085f818c +0x5c8:  subl   $0x1,0xc(%ebp)
085f8190 +0x5cc:  test   %al,%al
085f8192 +0x5ce:  jne    085f817a <+0x5b6>
085f8194 +0x5d0:  jmp    085f81b0 <+0x5ec>
085f8196 +0x5d2:  mov    0x8(%ebp),%eax
085f8199 +0x5d5:  mov    %eax,(%esp)
085f819c +0x5d8:  call   085f8342 <+0x77e>
085f81a1 +0x5dd:  cmpl   $0x0,0xc(%ebp)
085f81a5 +0x5e1:  setne  %al
085f81a8 +0x5e4:  addl   $0x1,0xc(%ebp)
085f81ac +0x5e8:  test   %al,%al
085f81ae +0x5ea:  jne    085f8196 <+0x5d2>
085f81b0 +0x5ec:  leave
085f81b1 +0x5ed:  ret
085f81b2 +0x5ee:  push   %ebp
085f81b3 +0x5ef:  mov    %esp,%ebp
085f81b5 +0x5f1:  sub    $0x28,%esp
085f81b8 +0x5f4:  jmp    085f81d6 <+0x612>
085f81ba +0x5f6:  mov    0x8(%ebp),%eax
085f81bd +0x5f9:  mov    %eax,(%esp)
085f81c0 +0x5fc:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
085f81c5 +0x601:  add    %eax,%eax
085f81c7 +0x603:  mov    %eax,0x4(%esp)
085f81cb +0x607:  mov    0x8(%ebp),%eax
085f81ce +0x60a:  mov    %eax,(%esp)
085f81d1 +0x60d:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
085f81d6 +0x612:  movl   $0x59c,0x4(%esp)
085f81de +0x61a:  mov    0x8(%ebp),%eax
085f81e1 +0x61d:  mov    %eax,(%esp)
085f81e4 +0x620:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
085f81e9 +0x625:  xor    $0x1,%eax
085f81ec +0x628:  test   %al,%al
085f81ee +0x62a:  jne    085f81ba <+0x5f6>
085f81f0 +0x62c:  mov    0x8(%ebp),%eax
085f81f3 +0x62f:  mov    0x8(%eax),%eax
085f81f6 +0x632:  mov    %eax,%edx
085f81f8 +0x634:  mov    0x8(%ebp),%eax
085f81fb +0x637:  mov    0xc(%eax),%eax
085f81fe +0x63a:  lea    (%edx,%eax,1),%eax
085f8201 +0x63d:  mov    %eax,-0xc(%ebp)
085f8204 +0x640:  movl   $0x59c,0x4(%esp)
085f820c +0x648:  mov    0x8(%ebp),%eax
085f820f +0x64b:  mov    %eax,(%esp)
085f8212 +0x64e:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
085f8217 +0x653:  mov    -0xc(%ebp),%eax
085f821a +0x656:  leave
085f821b +0x657:  ret
085f821c +0x658:  push   %ebp
085f821d +0x659:  mov    %esp,%ebp
085f821f +0x65b:  mov    0x8(%ebp),%edx
085f8222 +0x65e:  mov    0x8(%ebp),%eax
085f8225 +0x661:  mov    %edx,(%eax)
085f8227 +0x663:  mov    0x8(%ebp),%edx
085f822a +0x666:  mov    0x8(%ebp),%eax
085f822d +0x669:  mov    %edx,0x4(%eax)
085f8230 +0x66c:  pop    %ebp
085f8231 +0x66d:  ret
085f8232 +0x66e:  push   %ebp
085f8233 +0x66f:  mov    %esp,%ebp
085f8235 +0x671:  sub    $0x18,%esp
085f8238 +0x674:  mov    0x8(%ebp),%eax
085f823b +0x677:  mov    %eax,(%esp)
085f823e +0x67a:  call   085f8358 <+0x794>
085f8243 +0x67f:  mov    0x8(%ebp),%eax
085f8246 +0x682:  movl   $0x0,(%eax)
085f824c +0x688:  mov    0x8(%ebp),%eax
085f824f +0x68b:  movl   $0x0,0x4(%eax)
085f8256 +0x692:  leave
085f8257 +0x693:  ret
085f8258 +0x694:  push   %ebp
085f8259 +0x695:  mov    %esp,%ebp
085f825b +0x697:  pop    %ebp
085f825c +0x698:  ret
085f825d +0x699:  nop
085f825e +0x69a:  push   %ebp
085f825f +0x69b:  mov    %esp,%ebp
085f8261 +0x69d:  mov    0x8(%ebp),%eax
085f8264 +0x6a0:  pop    %ebp
085f8265 +0x6a1:  ret
085f8266 +0x6a2:  push   %ebp
085f8267 +0x6a3:  mov    %esp,%ebp
085f8269 +0x6a5:  pop    %ebp
085f826a +0x6a6:  ret
085f826b +0x6a7:  nop
085f826c +0x6a8:  push   %ebp
085f826d +0x6a9:  mov    %esp,%ebp
085f826f +0x6ab:  sub    $0x18,%esp
085f8272 +0x6ae:  mov    0xc(%ebp),%eax
085f8275 +0x6b1:  mov    %eax,(%esp)
085f8278 +0x6b4:  call   085f8266 <+0x6a2>
085f827d +0x6b9:  leave
085f827e +0x6ba:  ret
085f827f +0x6bb:  nop
085f8280 +0x6bc:  push   %ebp
085f8281 +0x6bd:  mov    %esp,%ebp
085f8283 +0x6bf:  sub    $0x18,%esp
085f8286 +0x6c2:  mov    0x8(%ebp),%eax
085f8289 +0x6c5:  movl   $0x1,0x8(%esp)
085f8291 +0x6cd:  mov    0xc(%ebp),%edx
085f8294 +0x6d0:  mov    %edx,0x4(%esp)
085f8298 +0x6d4:  mov    %eax,(%esp)
085f829b +0x6d7:  call   085f836c <+0x7a8>
085f82a0 +0x6dc:  leave
085f82a1 +0x6dd:  ret
085f82a2 +0x6de:  push   %ebp
085f82a3 +0x6df:  mov    %esp,%ebp
085f82a5 +0x6e1:  mov    0x8(%ebp),%eax
085f82a8 +0x6e4:  mov    (%eax),%eax
085f82aa +0x6e6:  mov    0x4(%eax),%edx
085f82ad +0x6e9:  mov    0x8(%ebp),%eax
085f82b0 +0x6ec:  mov    %edx,(%eax)
085f82b2 +0x6ee:  mov    0x8(%ebp),%eax
085f82b5 +0x6f1:  pop    %ebp
085f82b6 +0x6f2:  ret
085f82b7 +0x6f3:  push   %ebp
085f82b8 +0x6f4:  mov    %esp,%ebp
085f82ba +0x6f6:  mov    0x8(%ebp),%eax
085f82bd +0x6f9:  pop    %ebp
085f82be +0x6fa:  ret
085f82bf +0x6fb:  nop
085f82c0 +0x6fc:  push   %ebp
085f82c1 +0x6fd:  mov    %esp,%ebp
085f82c3 +0x6ff:  push   %esi
085f82c4 +0x700:  push   %ebx
085f82c5 +0x701:  sub    $0x20,%esp
085f82c8 +0x704:  mov    0x8(%ebp),%eax
085f82cb +0x707:  mov    %eax,(%esp)
085f82ce +0x70a:  call   085f8380 <+0x7bc>
085f82d3 +0x70f:  mov    %eax,-0xc(%ebp)
085f82d6 +0x712:  mov    0xc(%ebp),%eax
085f82d9 +0x715:  mov    %eax,(%esp)
085f82dc +0x718:  call   085f82b7 <+0x6f3>
085f82e1 +0x71d:  mov    %eax,%ebx
085f82e3 +0x71f:  mov    0x8(%ebp),%eax
085f82e6 +0x722:  mov    %eax,(%esp)
085f82e9 +0x725:  call   085f825e <+0x69a>
085f82ee +0x72a:  mov    %ebx,0x8(%esp)
085f82f2 +0x72e:  mov    -0xc(%ebp),%edx
085f82f5 +0x731:  mov    %edx,0x4(%esp)
085f82f9 +0x735:  mov    %eax,(%esp)
085f82fc +0x738:  call   085f83a4 <+0x7e0>
085f8301 +0x73d:  jmp    085f8337 <+0x773>
085f8303 +0x73f:  mov    %eax,(%esp)
085f8306 +0x742:  call   08725ce0 <__cxa_begin_catch>
085f830b +0x747:  mov    0x8(%ebp),%eax
085f830e +0x74a:  mov    -0xc(%ebp),%edx
085f8311 +0x74d:  mov    %edx,0x4(%esp)
085f8315 +0x751:  mov    %eax,(%esp)
085f8318 +0x754:  call   085f8280 <+0x6bc>
085f831d +0x759:  call   08724be0 <__cxa_rethrow>
085f8322 +0x75e:  mov    %edx,%ebx
085f8324 +0x760:  mov    %eax,%esi
085f8326 +0x762:  call   08725c30 <__cxa_end_catch>
085f832b +0x767:  mov    %esi,%eax
085f832d +0x769:  mov    %ebx,%edx
085f832f +0x76b:  mov    %eax,(%esp)
085f8332 +0x76e:  call   08ae3750 <_Unwind_Resume>
085f8337 +0x773:  mov    -0xc(%ebp),%eax
085f833a +0x776:  add    $0x20,%esp
085f833d +0x779:  pop    %ebx
085f833e +0x77a:  pop    %esi
085f833f +0x77b:  pop    %ebp
085f8340 +0x77c:  ret
085f8341 +0x77d:  nop
085f8342 +0x77e:  push   %ebp
085f8343 +0x77f:  mov    %esp,%ebp
085f8345 +0x781:  mov    0x8(%ebp),%eax
085f8348 +0x784:  mov    (%eax),%eax
085f834a +0x786:  mov    0x4(%eax),%edx
085f834d +0x789:  mov    0x8(%ebp),%eax
085f8350 +0x78c:  mov    %edx,(%eax)
085f8352 +0x78e:  mov    0x8(%ebp),%eax
085f8355 +0x791:  pop    %ebp
085f8356 +0x792:  ret
085f8357 +0x793:  nop
085f8358 +0x794:  push   %ebp
085f8359 +0x795:  mov    %esp,%ebp
085f835b +0x797:  sub    $0x18,%esp
085f835e +0x79a:  mov    0x8(%ebp),%eax
085f8361 +0x79d:  mov    %eax,(%esp)
085f8364 +0x7a0:  call   085f83e4 <+0x820>
085f8369 +0x7a5:  leave
085f836a +0x7a6:  ret
085f836b +0x7a7:  nop
085f836c +0x7a8:  push   %ebp
085f836d +0x7a9:  mov    %esp,%ebp
085f836f +0x7ab:  sub    $0x18,%esp
085f8372 +0x7ae:  mov    0xc(%ebp),%eax
085f8375 +0x7b1:  mov    %eax,(%esp)
085f8378 +0x7b4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085f837d +0x7b9:  leave
085f837e +0x7ba:  ret
085f837f +0x7bb:  nop
085f8380 +0x7bc:  push   %ebp
085f8381 +0x7bd:  mov    %esp,%ebp
085f8383 +0x7bf:  sub    $0x18,%esp
085f8386 +0x7c2:  mov    0x8(%ebp),%eax
085f8389 +0x7c5:  movl   $0x0,0x8(%esp)
085f8391 +0x7cd:  movl   $0x1,0x4(%esp)
085f8399 +0x7d5:  mov    %eax,(%esp)
085f839c +0x7d8:  call   085f83ea <+0x826>
085f83a1 +0x7dd:  leave
085f83a2 +0x7de:  ret
085f83a3 +0x7df:  nop
085f83a4 +0x7e0:  push   %ebp
085f83a5 +0x7e1:  mov    %esp,%ebp
085f83a7 +0x7e3:  push   %ebx
085f83a8 +0x7e4:  sub    $0x14,%esp
085f83ab +0x7e7:  mov    0x10(%ebp),%eax
085f83ae +0x7ea:  mov    %eax,(%esp)
085f83b1 +0x7ed:  call   085f82b7 <+0x6f3>
085f83b6 +0x7f2:  mov    %eax,%ebx
085f83b8 +0x7f4:  mov    0xc(%ebp),%eax
085f83bb +0x7f7:  mov    %eax,0x4(%esp)
085f83bf +0x7fb:  movl   $0x4c,(%esp)
085f83c6 +0x802:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
085f83cb +0x807:  mov    %eax,%edx
085f83cd +0x809:  test   %edx,%edx
085f83cf +0x80b:  je     085f83dd <+0x819>
085f83d1 +0x80d:  mov    %ebx,0x4(%esp)
085f83d5 +0x811:  mov    %eax,(%esp)
085f83d8 +0x814:  call   085f8422 <+0x85e>
085f83dd +0x819:  add    $0x14,%esp
085f83e0 +0x81c:  pop    %ebx
085f83e1 +0x81d:  pop    %ebp
085f83e2 +0x81e:  ret
085f83e3 +0x81f:  nop
085f83e4 +0x820:  push   %ebp
085f83e5 +0x821:  mov    %esp,%ebp
085f83e7 +0x823:  pop    %ebp
085f83e8 +0x824:  ret
085f83e9 +0x825:  nop
085f83ea +0x826:  push   %ebp
085f83eb +0x827:  mov    %esp,%ebp
085f83ed +0x829:  sub    $0x18,%esp
085f83f0 +0x82c:  mov    0x8(%ebp),%eax
085f83f3 +0x82f:  mov    %eax,(%esp)
085f83f6 +0x832:  call   085f8466 <+0x8a2>
085f83fb +0x837:  cmp    0xc(%ebp),%eax
085f83fe +0x83a:  setb   %al
085f8401 +0x83d:  movzbl %al,%eax
085f8404 +0x840:  test   %eax,%eax
085f8406 +0x842:  setne  %al
085f8409 +0x845:  test   %al,%al
085f840b +0x847:  je     085f8412 <+0x84e>
085f840d +0x849:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
085f8412 +0x84e:  mov    0xc(%ebp),%eax
085f8415 +0x851:  imul   $0x4c,%eax,%eax
085f8418 +0x854:  mov    %eax,(%esp)
085f841b +0x857:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085f8420 +0x85c:  leave
085f8421 +0x85d:  ret
085f8422 +0x85e:  push   %ebp
085f8423 +0x85f:  mov    %esp,%ebp
085f8425 +0x861:  push   %edi
085f8426 +0x862:  push   %esi
085f8427 +0x863:  push   %ebx
085f8428 +0x864:  sub    $0x1c,%esp
085f842b +0x867:  mov    0x8(%ebp),%eax
085f842e +0x86a:  movl   $0x0,(%eax)
085f8434 +0x870:  mov    0x8(%ebp),%eax
085f8437 +0x873:  movl   $0x0,0x4(%eax)
085f843e +0x87a:  mov    0xc(%ebp),%eax
085f8441 +0x87d:  mov    %eax,(%esp)
085f8444 +0x880:  call   085f82b7 <+0x6f3>
085f8449 +0x885:  mov    0x8(%ebp),%edx
085f844c +0x888:  lea    0x8(%edx),%ebx
085f844f +0x88b:  mov    %eax,%edx
085f8451 +0x88d:  mov    $0x11,%eax
085f8456 +0x892:  mov    %ebx,%edi
085f8458 +0x894:  mov    %edx,%esi
085f845a +0x896:  mov    %eax,%ecx
085f845c +0x898:  rep movsl %ds:(%esi),%es:(%edi)
085f845e +0x89a:  add    $0x1c,%esp
085f8461 +0x89d:  pop    %ebx
085f8462 +0x89e:  pop    %esi
085f8463 +0x89f:  pop    %edi
085f8464 +0x8a0:  pop    %ebp
085f8465 +0x8a1:  ret
085f8466 +0x8a2:  push   %ebp
085f8467 +0x8a3:  mov    %esp,%ebp
085f8469 +0x8a5:  mov    $0x35e50d7,%eax
085f846e +0x8aa:  pop    %ebp
085f846f +0x8ab:  ret
```

## 反编译 C

```c
// <global>::global @ 0x85f7bc4

/* Redeem_Item::CRedeemItem::CRedeemItem() */

void Redeem_Item::CRedeemItem::_GLOBAL__I_CRedeemItem(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
