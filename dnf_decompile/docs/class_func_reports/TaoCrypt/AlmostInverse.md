# AlmostInverse

`_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j`

`TaoCrypt::AlmostInverse(unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875c980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875c980  _ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j
#           TaoCrypt::AlmostInverse(unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
# range [0x0875c980, 0x0875ce8c]
0875c980 +0x000:  push   %ebp
0875c981 +0x001:  mov    %esp,%ebp
0875c983 +0x003:  push   %edi
0875c984 +0x004:  push   %esi
0875c985 +0x005:  push   %ebx
0875c986 +0x006:  sub    $0x7c,%esp
0875c989 +0x009:  mov    0xc(%ebp),%edx
0875c98c +0x00c:  mov    0x1c(%ebp),%eax
0875c98f +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
0875c994 +0x014:  add    $0xc10204,%ebx
0875c99a +0x01a:  mov    0x10(%ebp),%ecx
0875c99d +0x01d:  movl   $0x0,-0x1c(%ebp)
0875c9a4 +0x024:  lea    (%edx,%eax,8),%esi
0875c9a7 +0x027:  lea    (%eax,%eax,2),%eax
0875c9aa +0x02a:  lea    (%edx,%eax,4),%eax
0875c9ad +0x02d:  mov    %eax,-0x38(%ebp)
0875c9b0 +0x030:  mov    0x1c(%ebp),%eax
0875c9b3 +0x033:  test   %eax,%eax
0875c9b5 +0x035:  je     0875ca1e <+0x9e>
0875c9b7 +0x037:  mov    0x1c(%ebp),%edi
0875c9ba +0x03a:  mov    0x18(%ebp),%eax
0875c9bd +0x03d:  cmpl   $0x0,-0x8(%eax,%edi,4)
0875c9c2 +0x042:  jne    0875cce5 <+0x365>
0875c9c8 +0x048:  cmpl   $0x0,-0x4(%eax,%edi,4)
0875c9cd +0x04d:  jne    0875cce5 <+0x365>
0875c9d3 +0x053:  lea    -0xc(%eax,%edi,4),%edi
0875c9d7 +0x057:  mov    %edi,-0x24(%ebp)
0875c9da +0x05a:  mov    0x1c(%ebp),%edi
0875c9dd +0x05d:  lea    -0x10(%eax,%edi,4),%edi
0875c9e1 +0x061:  mov    0x1c(%ebp),%eax
0875c9e4 +0x064:  mov    %eax,-0x1c(%ebp)
0875c9e7 +0x067:  mov    %edi,%eax
0875c9e9 +0x069:  mov    -0x24(%ebp),%edi
0875c9ec +0x06c:  mov    %edx,-0x24(%ebp)
0875c9ef +0x06f:  nop
0875c9f0 +0x070:  subl   $0x2,-0x1c(%ebp)
0875c9f4 +0x074:  jne    0875caf2 <+0x172>
0875c9fa +0x07a:  lea    0x0(%esi),%esi
0875ca00 +0x080:  mov    -0x24(%ebp),%edx
0875ca03 +0x083:  mov    0x1c(%ebp),%eax
0875ca06 +0x086:  lea    (%eax,%eax,2),%edi
0875ca09 +0x089:  test   %edi,%edi
0875ca0b +0x08b:  je     0875ca1e <+0x9e>
0875ca0d +0x08d:  xor    %eax,%eax
0875ca0f +0x08f:  nop
0875ca10 +0x090:  movl   $0x0,(%edx,%eax,4)
0875ca17 +0x097:  add    $0x1,%eax
0875ca1a +0x09a:  cmp    %eax,%edi
0875ca1c +0x09c:  ja     0875ca10 <+0x90>
0875ca1e +0x09e:  movl   $0x1,(%edx)
0875ca24 +0x0a4:  mov    0x14(%ebp),%edi
0875ca27 +0x0a7:  test   %edi,%edi
0875ca29 +0x0a9:  je     0875ca48 <+0xc8>
0875ca2b +0x0ab:  mov    0x14(%ebp),%edi
0875ca2e +0x0ae:  xor    %eax,%eax
0875ca30 +0x0b0:  mov    %edx,-0x20(%ebp)
0875ca33 +0x0b3:  nop
0875ca34 +0x0b4:  lea    0x0(%esi,%eiz,1),%esi
0875ca38 +0x0b8:  mov    (%ecx,%eax,4),%edx
0875ca3b +0x0bb:  mov    %edx,(%esi,%eax,4)
0875ca3e +0x0be:  add    $0x1,%eax
0875ca41 +0x0c1:  cmp    %eax,%edi
0875ca43 +0x0c3:  ja     0875ca38 <+0xb8>
0875ca45 +0x0c5:  mov    -0x20(%ebp),%edx
0875ca48 +0x0c8:  mov    0x1c(%ebp),%ecx
0875ca4b +0x0cb:  test   %ecx,%ecx
0875ca4d +0x0cd:  je     0875ca73 <+0xf3>
0875ca4f +0x0cf:  mov    %esi,-0x20(%ebp)
0875ca52 +0x0d2:  mov    -0x38(%ebp),%ecx
0875ca55 +0x0d5:  xor    %eax,%eax
0875ca57 +0x0d7:  mov    0x18(%ebp),%esi
0875ca5a +0x0da:  mov    0x1c(%ebp),%edi
0875ca5d +0x0dd:  mov    %edx,-0x24(%ebp)
0875ca60 +0x0e0:  mov    (%esi,%eax,4),%edx
0875ca63 +0x0e3:  mov    %edx,(%ecx,%eax,4)
0875ca66 +0x0e6:  add    $0x1,%eax
0875ca69 +0x0e9:  cmp    %eax,%edi
0875ca6b +0x0eb:  ja     0875ca60 <+0xe0>
0875ca6d +0x0ed:  mov    -0x20(%ebp),%esi
0875ca70 +0x0f0:  mov    -0x24(%ebp),%edx
0875ca73 +0x0f3:  mov    0x1c(%ebp),%ecx
0875ca76 +0x0f6:  mov    -0x1c(%ebp),%edi
0875ca79 +0x0f9:  mov    %edx,-0x3c(%ebp)
0875ca7c +0x0fc:  movl   $0x0,-0x4c(%ebp)
0875ca83 +0x103:  lea    (%edx,%ecx,4),%ecx
0875ca86 +0x106:  sub    $0x2,%edi
0875ca89 +0x109:  mov    %ecx,-0x28(%ebp)
0875ca8c +0x10c:  movl   $0x0,-0x24(%ebp)
0875ca93 +0x113:  movl   $0x2,-0x20(%ebp)
0875ca9a +0x11a:  mov    %edi,-0x48(%ebp)
0875ca9d +0x11d:  mov    (%esi),%edx
0875ca9f +0x11f:  test   %edx,%edx
0875caa1 +0x121:  jne    0875cb11 <+0x191>
0875caa3 +0x123:  mov    -0x1c(%ebp),%edx
0875caa6 +0x126:  mov    -0x48(%ebp),%eax
0875caa9 +0x129:  lea    -0x4(%esi,%edx,4),%edx
0875caad +0x12d:  mov    %edx,-0x2c(%ebp)
0875cab0 +0x130:  mov    -0x1c(%ebp),%edx
0875cab3 +0x133:  shl    $0x2,%eax
0875cab6 +0x136:  mov    %eax,-0x40(%ebp)
0875cab9 +0x139:  add    %esi,%eax
0875cabb +0x13b:  mov    %eax,-0x30(%ebp)
0875cabe +0x13e:  test   %edx,%edx
0875cac0 +0x140:  jne    0875cd6a <+0x3ea>
0875cac6 +0x146:  xchg   %ax,%ax
0875cac8 +0x148:  mov    0x1c(%ebp),%esi
0875cacb +0x14b:  test   %esi,%esi
0875cacd +0x14d:  je     0875cae6 <+0x166>
0875cacf +0x14f:  mov    0x8(%ebp),%edx
0875cad2 +0x152:  xor    %eax,%eax
0875cad4 +0x154:  mov    0x1c(%ebp),%ecx
0875cad7 +0x157:  nop
0875cad8 +0x158:  movl   $0x0,(%edx,%eax,4)
0875cadf +0x15f:  add    $0x1,%eax
0875cae2 +0x162:  cmp    %eax,%ecx
0875cae4 +0x164:  ja     0875cad8 <+0x158>
0875cae6 +0x166:  xor    %esi,%esi
0875cae8 +0x168:  add    $0x7c,%esp
0875caeb +0x16b:  mov    %esi,%eax
0875caed +0x16d:  pop    %ebx
0875caee +0x16e:  pop    %esi
0875caef +0x16f:  pop    %edi
0875caf0 +0x170:  pop    %ebp
0875caf1 +0x171:  ret
0875caf2 +0x172:  mov    (%eax),%edx
0875caf4 +0x174:  test   %edx,%edx
0875caf6 +0x176:  jne    0875ca00 <+0x80>
0875cafc +0x17c:  mov    (%edi),%edx
0875cafe +0x17e:  sub    $0x8,%eax
0875cb01 +0x181:  sub    $0x8,%edi
0875cb04 +0x184:  test   %edx,%edx
0875cb06 +0x186:  jne    0875ca00 <+0x80>
0875cb0c +0x18c:  jmp    0875c9f0 <+0x70>
0875cb11 +0x191:  mov    -0x48(%ebp),%ecx
0875cb14 +0x194:  shl    $0x2,%ecx
0875cb17 +0x197:  mov    %ecx,-0x40(%ebp)
0875cb1a +0x19a:  add    %esi,%ecx
0875cb1c +0x19c:  mov    %ecx,-0x30(%ebp)
0875cb1f +0x19f:  xor    %eax,%eax
0875cb21 +0x1a1:  test   $0x1,%dl
0875cb24 +0x1a4:  jne    0875cb32 <+0x1b2>
0875cb26 +0x1a6:  xchg   %ax,%ax
0875cb28 +0x1a8:  shr    %edx
0875cb2a +0x1aa:  add    $0x1,%eax
0875cb2d +0x1ad:  test   $0x1,%dl
0875cb30 +0x1b0:  je     0875cb28 <+0x1a8>
0875cb32 +0x1b2:  add    %eax,-0x24(%ebp)
0875cb35 +0x1b5:  cmp    $0x1,%edx
0875cb38 +0x1b8:  je     0875ccc3 <+0x343>
0875cb3e +0x1be:  test   %eax,%eax
0875cb40 +0x1c0:  je     0875cbf4 <+0x274>
0875cb46 +0x1c6:  mov    -0x1c(%ebp),%ecx
0875cb49 +0x1c9:  sub    $0x1,%ecx
0875cb4c +0x1cc:  js     0875cb95 <+0x215>
0875cb4e +0x1ce:  mov    -0x1c(%ebp),%edx
0875cb51 +0x1d1:  movl   $0x20,-0x2c(%ebp)
0875cb58 +0x1d8:  sub    %eax,-0x2c(%ebp)
0875cb5b +0x1db:  lea    -0x4(%esi,%edx,4),%edi
0875cb5f +0x1df:  xor    %edx,%edx
0875cb61 +0x1e1:  mov    %esi,-0x44(%ebp)
0875cb64 +0x1e4:  mov    %edx,%esi
0875cb66 +0x1e6:  mov    %eax,-0x34(%ebp)
0875cb69 +0x1e9:  mov    %ecx,-0x6c(%ebp)
0875cb6c +0x1ec:  lea    0x0(%esi,%eiz,1),%esi
0875cb70 +0x1f0:  mov    (%edi),%edx
0875cb72 +0x1f2:  movzbl -0x34(%ebp),%ecx
0875cb76 +0x1f6:  mov    %edx,%eax
0875cb78 +0x1f8:  shr    %cl,%eax
0875cb7a +0x1fa:  movzbl -0x2c(%ebp),%ecx
0875cb7e +0x1fe:  or     %esi,%eax
0875cb80 +0x200:  mov    %edx,%esi
0875cb82 +0x202:  mov    %eax,(%edi)
0875cb84 +0x204:  sub    $0x4,%edi
0875cb87 +0x207:  shl    %cl,%esi
0875cb89 +0x209:  subl   $0x1,-0x6c(%ebp)
0875cb8d +0x20d:  jns    0875cb70 <+0x1f0>
0875cb8f +0x20f:  mov    -0x34(%ebp),%eax
0875cb92 +0x212:  mov    -0x44(%ebp),%esi
0875cb95 +0x215:  mov    -0x20(%ebp),%edx
0875cb98 +0x218:  test   %edx,%edx
0875cb9a +0x21a:  je     0875cbf4 <+0x274>
0875cb9c +0x21c:  movl   $0x20,-0x2c(%ebp)
0875cba3 +0x223:  xor    %edi,%edi
0875cba5 +0x225:  xor    %edx,%edx
0875cba7 +0x227:  mov    %esi,-0x44(%ebp)
0875cbaa +0x22a:  mov    -0x28(%ebp),%esi
0875cbad +0x22d:  sub    %eax,-0x2c(%ebp)
0875cbb0 +0x230:  mov    %edi,-0x6c(%ebp)
0875cbb3 +0x233:  mov    %eax,-0x34(%ebp)
0875cbb6 +0x236:  xchg   %ax,%ax
0875cbb8 +0x238:  mov    (%esi,%edx,4),%eax
0875cbbb +0x23b:  movzbl -0x34(%ebp),%ecx
0875cbbf +0x23f:  mov    %eax,%edi
0875cbc1 +0x241:  shl    %cl,%edi
0875cbc3 +0x243:  mov    -0x6c(%ebp),%ecx
0875cbc6 +0x246:  or     %ecx,%edi
0875cbc8 +0x248:  movzbl -0x2c(%ebp),%ecx
0875cbcc +0x24c:  mov    %edi,(%esi,%edx,4)
0875cbcf +0x24f:  add    $0x1,%edx
0875cbd2 +0x252:  shr    %cl,%eax
0875cbd4 +0x254:  cmp    %edx,-0x20(%ebp)
0875cbd7 +0x257:  mov    %eax,-0x6c(%ebp)
0875cbda +0x25a:  ja     0875cbb8 <+0x238>
0875cbdc +0x25c:  test   %eax,%eax
0875cbde +0x25e:  mov    %eax,%edi
0875cbe0 +0x260:  mov    -0x44(%ebp),%esi
0875cbe3 +0x263:  je     0875cbf4 <+0x274>
0875cbe5 +0x265:  mov    -0x20(%ebp),%eax
0875cbe8 +0x268:  mov    -0x28(%ebp),%edx
0875cbeb +0x26b:  mov    %edi,(%edx,%eax,4)
0875cbee +0x26e:  add    $0x2,%eax
0875cbf1 +0x271:  mov    %eax,-0x20(%ebp)
0875cbf4 +0x274:  mov    -0x30(%ebp),%ecx
0875cbf7 +0x277:  mov    (%ecx),%eax
0875cbf9 +0x279:  test   %eax,%eax
0875cbfb +0x27b:  jne    0875cc2e <+0x2ae>
0875cbfd +0x27d:  mov    -0x38(%ebp),%eax
0875cc00 +0x280:  mov    -0x40(%ebp),%edi
0875cc03 +0x283:  mov    (%eax,%edi,1),%edi
0875cc06 +0x286:  test   %edi,%edi
0875cc08 +0x288:  jne    0875cc2e <+0x2ae>
0875cc0a +0x28a:  mov    -0x1c(%ebp),%eax
0875cc0d +0x28d:  sub    $0x1,%eax
0875cc10 +0x290:  mov    (%esi,%eax,4),%ecx
0875cc13 +0x293:  test   %ecx,%ecx
0875cc15 +0x295:  jne    0875cc2e <+0x2ae>
0875cc17 +0x297:  mov    -0x38(%ebp),%edx
0875cc1a +0x29a:  cmpl   $0x0,(%edx,%eax,4)
0875cc1e +0x29e:  jne    0875cc2e <+0x2ae>
0875cc20 +0x2a0:  mov    -0x48(%ebp),%ecx
0875cc23 +0x2a3:  mov    %ecx,%edi
0875cc25 +0x2a5:  sub    $0x2,%edi
0875cc28 +0x2a8:  mov    %ecx,-0x1c(%ebp)
0875cc2b +0x2ab:  mov    %edi,-0x48(%ebp)
0875cc2e +0x2ae:  mov    -0x38(%ebp),%edi
0875cc31 +0x2b1:  xor    %ecx,%ecx
0875cc33 +0x2b3:  nop
0875cc34 +0x2b4:  lea    0x0(%esi,%eiz,1),%esi
0875cc38 +0x2b8:  mov    -0x1c(%ebp),%eax
0875cc3b +0x2bb:  add    %ecx,%eax
0875cc3d +0x2bd:  je     0875cc6a <+0x2ea>
0875cc3f +0x2bf:  mov    -0x4(%esi,%eax,4),%edx
0875cc43 +0x2c3:  mov    -0x4(%edi,%eax,4),%eax
0875cc47 +0x2c7:  cmp    %eax,%edx
0875cc49 +0x2c9:  ja     0875cc6a <+0x2ea>
0875cc4b +0x2cb:  sub    $0x1,%ecx
0875cc4e +0x2ce:  cmp    %eax,%edx
0875cc50 +0x2d0:  jae    0875cc38 <+0x2b8>
0875cc52 +0x2d2:  mov    %esi,%eax
0875cc54 +0x2d4:  mov    -0x28(%ebp),%edi
0875cc57 +0x2d7:  mov    -0x38(%ebp),%esi
0875cc5a +0x2da:  mov    %eax,-0x38(%ebp)
0875cc5d +0x2dd:  mov    -0x3c(%ebp),%eax
0875cc60 +0x2e0:  addl   $0x1,-0x4c(%ebp)
0875cc64 +0x2e4:  mov    %edi,-0x3c(%ebp)
0875cc67 +0x2e7:  mov    %eax,-0x28(%ebp)
0875cc6a +0x2ea:  mov    -0x38(%ebp),%edx
0875cc6d +0x2ed:  mov    -0x1c(%ebp),%eax
0875cc70 +0x2f0:  mov    %esi,0x4(%esp)
0875cc74 +0x2f4:  mov    %esi,(%esp)
0875cc77 +0x2f7:  mov    %edx,0x8(%esp)
0875cc7b +0x2fb:  mov    %eax,0xc(%esp)
0875cc7f +0x2ff:  call   *0x124c90(%ebx)
0875cc85 +0x305:  mov    -0x3c(%ebp),%eax
0875cc88 +0x308:  mov    -0x20(%ebp),%ecx
0875cc8b +0x30b:  mov    -0x28(%ebp),%edi
0875cc8e +0x30e:  mov    %eax,0x4(%esp)
0875cc92 +0x312:  mov    %ecx,0xc(%esp)
0875cc96 +0x316:  mov    %edi,0x8(%esp)
0875cc9a +0x31a:  mov    %eax,(%esp)
0875cc9d +0x31d:  call   *0x124c8c(%ebx)
0875cca3 +0x323:  test   %eax,%eax
0875cca5 +0x325:  je     0875ca9d <+0x11d>
0875ccab +0x32b:  mov    -0x20(%ebp),%edx
0875ccae +0x32e:  mov    -0x3c(%ebp),%ecx
0875ccb1 +0x331:  movl   $0x1,(%ecx,%edx,4)
0875ccb8 +0x338:  add    $0x2,%edx
0875ccbb +0x33b:  mov    %edx,-0x20(%ebp)
0875ccbe +0x33e:  jmp    0875ca9d <+0x11d>
0875ccc3 +0x343:  mov    0x4(%esi),%edx
0875ccc6 +0x346:  test   %edx,%edx
0875ccc8 +0x348:  jne    0875cb3e <+0x1be>
0875ccce +0x34e:  cmpl   $0x0,-0x1c(%ebp)
0875ccd2 +0x352:  je     0875cb3e <+0x1be>
0875ccd8 +0x358:  mov    -0x30(%ebp),%edi
0875ccdb +0x35b:  cmpl   $0x0,(%edi)
0875ccde +0x35e:  je     0875ccf2 <+0x372>
0875cce0 +0x360:  mov    -0x1c(%ebp),%ecx
0875cce3 +0x363:  jmp    0875cd19 <+0x399>
0875cce5 +0x365:  mov    0x1c(%ebp),%edi
0875cce8 +0x368:  mov    %edi,-0x1c(%ebp)
0875cceb +0x36b:  mov    %edi,%eax
0875cced +0x36d:  jmp    0875ca06 <+0x86>
0875ccf2 +0x372:  mov    -0x1c(%ebp),%edx
0875ccf5 +0x375:  cmpl   $0x0,-0x4(%esi,%edx,4)
0875ccfa +0x37a:  jne    0875cce0 <+0x360>
0875ccfc +0x37c:  mov    -0x1c(%ebp),%ecx
0875ccff +0x37f:  lea    -0xc(%esi,%edx,4),%edi
0875cd03 +0x383:  mov    %edi,-0x34(%ebp)
0875cd06 +0x386:  lea    -0x10(%esi,%edx,4),%edx
0875cd0a +0x38a:  sub    $0x2,%ecx
0875cd0d +0x38d:  je     0875cb3e <+0x1be>
0875cd13 +0x393:  mov    (%edx),%edi
0875cd15 +0x395:  test   %edi,%edi
0875cd17 +0x397:  je     0875cd58 <+0x3d8>
0875cd19 +0x399:  cmp    $0x2,%ecx
0875cd1c +0x39c:  jne    0875cb3e <+0x1be>
0875cd22 +0x3a2:  testb  $0x1,-0x4c(%ebp)
0875cd26 +0x3a6:  mov    -0x24(%ebp),%esi
0875cd29 +0x3a9:  jne    0875ce66 <+0x4e6>
0875cd2f +0x3af:  xor    %eax,%eax
0875cd31 +0x3b1:  cmpl   $0x0,0x1c(%ebp)
0875cd35 +0x3b5:  je     0875cae8 <+0x168>
0875cd3b +0x3bb:  mov    -0x3c(%ebp),%ecx
0875cd3e +0x3be:  mov    0x8(%ebp),%edi
0875cd41 +0x3c1:  mov    (%ecx,%eax,4),%edx
0875cd44 +0x3c4:  mov    %edx,(%edi,%eax,4)
0875cd47 +0x3c7:  add    $0x1,%eax
0875cd4a +0x3ca:  cmp    %eax,0x1c(%ebp)
0875cd4d +0x3cd:  ja     0875cd41 <+0x3c1>
0875cd4f +0x3cf:  jmp    0875cae8 <+0x168>
0875cd54 +0x3d4:  lea    0x0(%esi,%eiz,1),%esi
0875cd58 +0x3d8:  mov    -0x34(%ebp),%edi
0875cd5b +0x3db:  sub    $0x8,%edx
0875cd5e +0x3de:  subl   $0x8,-0x34(%ebp)
0875cd62 +0x3e2:  mov    (%edi),%edi
0875cd64 +0x3e4:  test   %edi,%edi
0875cd66 +0x3e6:  jne    0875cd19 <+0x399>
0875cd68 +0x3e8:  jmp    0875cd0a <+0x38a>
0875cd6a +0x3ea:  mov    -0x1c(%ebp),%ecx
0875cd6d +0x3ed:  mov    -0x1c(%ebp),%edi
0875cd70 +0x3f0:  lea    -0xc(%esi,%ecx,4),%ecx
0875cd74 +0x3f4:  sub    $0x4,%edi
0875cd77 +0x3f7:  mov    %ecx,-0x34(%ebp)
0875cd7a +0x3fa:  mov    %edi,-0x44(%ebp)
0875cd7d +0x3fd:  lea    0x0(%esi),%esi
0875cd80 +0x400:  mov    -0x30(%ebp),%eax
0875cd83 +0x403:  mov    (%eax),%eax
0875cd85 +0x405:  test   %eax,%eax
0875cd87 +0x407:  jne    0875cdbb <+0x43b>
0875cd89 +0x409:  mov    -0x2c(%ebp),%edx
0875cd8c +0x40c:  mov    (%edx),%edi
0875cd8e +0x40e:  test   %edi,%edi
0875cd90 +0x410:  jne    0875cdbb <+0x43b>
0875cd92 +0x412:  mov    -0x44(%ebp),%ecx
0875cd95 +0x415:  mov    -0x34(%ebp),%edx
0875cd98 +0x418:  mov    -0x1c(%ebp),%edi
0875cd9b +0x41b:  lea    (%esi,%ecx,4),%eax
0875cd9e +0x41e:  jmp    0875cdac <+0x42c>
0875cda0 +0x420:  mov    (%edx),%ecx
0875cda2 +0x422:  sub    $0x8,%eax
0875cda5 +0x425:  sub    $0x8,%edx
0875cda8 +0x428:  test   %ecx,%ecx
0875cdaa +0x42a:  jne    0875cdbb <+0x43b>
0875cdac +0x42c:  sub    $0x2,%edi
0875cdaf +0x42f:  je     0875cac8 <+0x148>
0875cdb5 +0x435:  mov    (%eax),%ecx
0875cdb7 +0x437:  test   %ecx,%ecx
0875cdb9 +0x439:  je     0875cda0 <+0x420>
0875cdbb +0x43b:  cmpl   $0x1,-0x1c(%ebp)
0875cdbf +0x43f:  jbe    0875cdea <+0x46a>
0875cdc1 +0x441:  mov    -0x1c(%ebp),%edi
0875cdc4 +0x444:  mov    $0x2,%eax
0875cdc9 +0x449:  mov    $0x1,%ecx
0875cdce +0x44e:  add    $0x1,%edi
0875cdd1 +0x451:  jmp    0875cddc <+0x45c>
0875cdd3 +0x453:  nop
0875cdd4 +0x454:  lea    0x0(%esi,%eiz,1),%esi
0875cdd8 +0x458:  mov    %eax,%ecx
0875cdda +0x45a:  mov    %edx,%eax
0875cddc +0x45c:  mov    (%esi,%ecx,4),%edx
0875cddf +0x45f:  mov    %edx,-0x8(%esi,%eax,4)
0875cde3 +0x463:  lea    0x1(%eax),%edx
0875cde6 +0x466:  cmp    %edi,%edx
0875cde8 +0x468:  jne    0875cdd8 <+0x458>
0875cdea +0x46a:  mov    -0x20(%ebp),%edx
0875cded +0x46d:  mov    -0x2c(%ebp),%edi
0875cdf0 +0x470:  mov    -0x28(%ebp),%ecx
0875cdf3 +0x473:  mov    -0x20(%ebp),%eax
0875cdf6 +0x476:  movl   $0x0,(%edi)
0875cdfc +0x47c:  mov    -0x4(%ecx,%edx,4),%ecx
0875ce00 +0x480:  add    $0x2,%eax
0875ce03 +0x483:  test   %ecx,%ecx
0875ce05 +0x485:  cmove  %edx,%eax
0875ce08 +0x488:  cmp    $0x1,%eax
0875ce0b +0x48b:  mov    %eax,-0x20(%ebp)
0875ce0e +0x48e:  jbe    0875ce60 <+0x4e0>
0875ce10 +0x490:  mov    -0x20(%ebp),%eax
0875ce13 +0x493:  sub    $0x1,%eax
0875ce16 +0x496:  je     0875ce3f <+0x4bf>
0875ce18 +0x498:  mov    -0x28(%ebp),%edi
0875ce1b +0x49b:  mov    -0x20(%ebp),%ecx
0875ce1e +0x49e:  lea    -0x4(%edi,%eax,4),%edi
0875ce22 +0x4a2:  mov    %edi,-0x5c(%ebp)
0875ce25 +0x4a5:  mov    -0x28(%ebp),%edi
0875ce28 +0x4a8:  lea    -0x4(%edi,%ecx,4),%edx
0875ce2c +0x4ac:  mov    -0x5c(%ebp),%ecx
0875ce2f +0x4af:  nop
0875ce30 +0x4b0:  mov    (%ecx),%edi
0875ce32 +0x4b2:  sub    $0x4,%ecx
0875ce35 +0x4b5:  mov    %edi,(%edx)
0875ce37 +0x4b7:  sub    $0x4,%edx
0875ce3a +0x4ba:  sub    $0x1,%eax
0875ce3d +0x4bd:  jne    0875ce30 <+0x4b0>
0875ce3f +0x4bf:  mov    -0x28(%ebp),%eax
0875ce42 +0x4c2:  movl   $0x0,(%eax)
0875ce48 +0x4c8:  mov    (%esi),%edx
0875ce4a +0x4ca:  addl   $0x20,-0x24(%ebp)
0875ce4e +0x4ce:  test   %edx,%edx
0875ce50 +0x4d0:  je     0875cd80 <+0x400>
0875ce56 +0x4d6:  jmp    0875cb1f <+0x19f>
0875ce5b +0x4db:  nop
0875ce5c +0x4dc:  lea    0x0(%esi,%eiz,1),%esi
0875ce60 +0x4e0:  test   %eax,%eax
0875ce62 +0x4e2:  je     0875ce48 <+0x4c8>
0875ce64 +0x4e4:  jmp    0875ce10 <+0x490>
0875ce66 +0x4e6:  mov    0x1c(%ebp),%eax
0875ce69 +0x4e9:  mov    -0x3c(%ebp),%edx
0875ce6c +0x4ec:  mov    0x18(%ebp),%ecx
0875ce6f +0x4ef:  mov    0x8(%ebp),%edi
0875ce72 +0x4f2:  mov    %eax,0xc(%esp)
0875ce76 +0x4f6:  mov    %edx,0x8(%esp)
0875ce7a +0x4fa:  mov    %ecx,0x4(%esp)
0875ce7e +0x4fe:  mov    %edi,(%esp)
0875ce81 +0x501:  call   *0x124c90(%ebx)
0875ce87 +0x507:  jmp    0875cae8 <+0x168>
0875ce8c +0x50c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::AlmostInverse @ 0x875c980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AlmostInverse(unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned
   int const*, unsigned int) */

int TaoCrypt::AlmostInverse
              (uint *param_1,uint *param_2,uint *param_3,uint param_4,uint *param_5,uint param_6)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_70;
  uint local_4c;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  byte local_30;
  uint *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  
  local_20 = 0;
  local_3c = param_2 + param_6 * 3;
  if (param_6 != 0) {
    if ((param_5[param_6 - 2] == 0) && (param_5[param_6 - 1] == 0)) {
      puVar10 = param_5 + (param_6 - 3);
      puVar2 = param_5 + (param_6 - 4);
      local_20 = param_6;
      do {
        local_20 = local_20 - 2;
        if ((local_20 == 0) || (*puVar2 != 0)) break;
        uVar3 = *puVar10;
        puVar2 = puVar2 + -2;
        puVar10 = puVar10 + -2;
      } while (uVar3 == 0);
    }
    else {
      local_20 = param_6;
    }
    if (param_6 * 3 != 0) {
      uVar3 = 0;
      do {
        param_2[uVar3] = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_6 * 3);
    }
  }
  *param_2 = 1;
  if (param_4 != 0) {
    uVar3 = 0;
    do {
      (param_2 + param_6 * 2)[uVar3] = param_3[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_4);
  }
  if (param_6 != 0) {
    uVar3 = 0;
    do {
      local_3c[uVar3] = param_5[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_6);
  }
  local_40 = param_2;
  bVar1 = 0;
  local_2c = param_2 + param_6;
  local_4c = local_20 - 2;
  local_28 = 0;
  local_24 = 2;
  puVar10 = param_2 + param_6 * 2;
  do {
    puVar2 = local_40;
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      if (local_20 == 0) {
LAB_0875cac8:
        if (param_6 != 0) {
          uVar3 = 0;
          do {
            param_1[uVar3] = 0;
            uVar3 = uVar3 + 1;
          } while (uVar3 < param_6);
        }
        return 0;
      }
      do {
        if ((puVar10[local_4c] == 0) && (puVar10[local_20 - 1] == 0)) {
          puVar5 = puVar10 + (local_20 - 4);
          puVar9 = puVar10 + (local_20 - 3);
          uVar3 = local_20;
          do {
            uVar3 = uVar3 - 2;
            if (uVar3 == 0) goto LAB_0875cac8;
            if (*puVar5 != 0) break;
            uVar7 = *puVar9;
            puVar5 = puVar5 + -2;
            puVar9 = puVar9 + -2;
          } while (uVar7 == 0);
        }
        if (1 < local_20) {
          iVar8 = 2;
          iVar4 = 1;
          do {
            iVar6 = iVar8;
            puVar10[iVar6 + -2] = puVar10[iVar4];
            iVar8 = iVar6 + 1;
            iVar4 = iVar6;
          } while (iVar6 + 1 != local_20 + 1);
        }
        puVar10[local_20 - 1] = 0;
        uVar7 = local_24 + 2;
        if (local_2c[local_24 - 1] == 0) {
          uVar7 = local_24;
        }
        if ((1 < uVar7) || (uVar7 != 0)) {
          iVar8 = uVar7 - 1;
          if (iVar8 != 0) {
            puVar5 = local_2c + (uVar7 - 2);
            puVar9 = local_2c + (uVar7 - 1);
            do {
              uVar3 = *puVar5;
              puVar5 = puVar5 + -1;
              *puVar9 = uVar3;
              puVar9 = puVar9 + -1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          *local_2c = 0;
        }
        uVar3 = *puVar10;
        local_28 = local_28 + 0x20;
        local_24 = uVar7;
      } while (uVar3 == 0);
    }
    local_34 = puVar10 + local_4c;
    iVar8 = 0;
    for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
      iVar8 = iVar8 + 1;
    }
    local_28 = local_28 + iVar8;
    if (((uVar3 == 1) && (puVar10[1] == 0)) && (local_20 != 0)) {
      uVar3 = local_20;
      if ((*local_34 == 0) && (puVar10[local_20 - 1] == 0)) {
        puVar5 = puVar10 + (local_20 - 4);
        local_38 = puVar10 + (local_20 - 3);
        do {
          uVar3 = uVar3 - 2;
          if (uVar3 == 0) goto LAB_0875cb3e;
          if (*puVar5 != 0) break;
          puVar5 = puVar5 + -2;
          uVar7 = *local_38;
          local_38 = local_38 + -2;
        } while (uVar7 == 0);
      }
      if (uVar3 == 2) {
        if ((bool)(bVar1 & 1)) {
          (*s_pSub)(param_1,param_5,local_40,param_6);
        }
        else {
          uVar3 = 0;
          if (param_6 != 0) {
            do {
              param_1[uVar3] = local_40[uVar3];
              uVar3 = uVar3 + 1;
            } while (uVar3 < param_6);
          }
        }
        return local_28;
      }
    }
LAB_0875cb3e:
    if (iVar8 != 0) {
      local_70 = local_20 - 1;
      local_38._0_1_ = (byte)iVar8;
      if (-1 < (int)local_70) {
        local_30 = 0x20 - (byte)local_38;
        puVar5 = puVar10 + (local_20 - 1);
        uVar3 = 0;
        do {
          uVar7 = *puVar5;
          *puVar5 = uVar7 >> ((byte)local_38 & 0x1f) | uVar3;
          puVar5 = puVar5 + -1;
          uVar3 = uVar7 << (local_30 & 0x1f);
          local_70 = local_70 + -1;
        } while (-1 < (int)local_70);
      }
      if (local_24 != 0) {
        uVar3 = 0;
        local_30 = 0x20 - (byte)local_38;
        local_70 = 0;
        do {
          uVar7 = local_2c[uVar3];
          local_2c[uVar3] = uVar7 << ((byte)local_38 & 0x1f) | local_70;
          uVar3 = uVar3 + 1;
          local_70 = uVar7 >> (local_30 & 0x1f);
        } while (uVar3 < local_24);
        if (local_70 != 0) {
          local_2c[local_24] = local_70;
          local_24 = local_24 + 2;
        }
      }
    }
    if (((*local_34 == 0) && (local_3c[local_4c] == 0)) &&
       ((puVar10[local_20 - 1] == 0 && (local_3c[local_20 - 1] == 0)))) {
      local_20 = local_4c;
      local_4c = local_4c - 2;
    }
    iVar8 = 0;
    do {
      iVar4 = local_20 + iVar8;
      puVar5 = puVar10;
      if (iVar4 == 0) goto LAB_0875cc6a;
      if (local_3c[iVar4 + -1] < puVar10[iVar4 + -1]) goto LAB_0875cc6a;
      iVar8 = iVar8 + -1;
    } while (local_3c[iVar4 + -1] <= puVar10[iVar4 + -1]);
    bVar1 = bVar1 + 1;
    local_40 = local_2c;
    local_2c = puVar2;
    puVar5 = local_3c;
    local_3c = puVar10;
LAB_0875cc6a:
    (*s_pSub)(puVar5,puVar5,local_3c,local_20);
    iVar8 = (*s_pAdd)(local_40,local_40,local_2c,local_24);
    puVar10 = puVar5;
    if (iVar8 != 0) {
      local_40[local_24] = 1;
      local_24 = local_24 + 2;
    }
  } while( true );
}
```
