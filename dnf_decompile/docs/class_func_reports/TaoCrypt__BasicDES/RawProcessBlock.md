# RawProcessBlock

`_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_`

`TaoCrypt::BasicDES::RawProcessBlock(unsigned int&, unsigned int&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::BasicDES` | `0x087a5ba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a5ba0  _ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_
#           TaoCrypt::BasicDES::RawProcessBlock(unsigned int&, unsigned int&) const
# range [0x087a5ba0, 0x087a63d9]
087a5ba0 +0x000:  push   %ebp
087a5ba1 +0x001:  mov    %esp,%ebp
087a5ba3 +0x003:  mov    0x10(%ebp),%eax
087a5ba6 +0x006:  push   %edi
087a5ba7 +0x007:  mov    0x8(%ebp),%ecx
087a5baa +0x00a:  push   %esi
087a5bab +0x00b:  mov    0x8(%ebp),%esi
087a5bae +0x00e:  push   %ebx
087a5baf +0x00f:  mov    (%eax),%edi
087a5bb1 +0x011:  call   08722df8 <__i686.get_pc_thunk.bx>
087a5bb6 +0x016:  add    $0xbc6fe2,%ebx
087a5bbc +0x01c:  mov    %edi,%edx
087a5bbe +0x01e:  ror    $0x4,%edx
087a5bc1 +0x021:  xor    (%ecx),%edx
087a5bc3 +0x023:  mov    %edi,%ecx
087a5bc5 +0x025:  xor    0x4(%esi),%ecx
087a5bc8 +0x028:  mov    0xc(%ebp),%esi
087a5bcb +0x02b:  mov    %ecx,%eax
087a5bcd +0x02d:  and    $0x3f,%eax
087a5bd0 +0x030:  mov    -0x65c3b8(%ebx,%eax,4),%eax
087a5bd7 +0x037:  xor    (%esi),%eax
087a5bd9 +0x039:  mov    %edx,%esi
087a5bdb +0x03b:  and    $0x3f,%esi
087a5bde +0x03e:  xor    -0x65c4b8(%ebx,%esi,4),%eax
087a5be5 +0x045:  mov    %ecx,%esi
087a5be7 +0x047:  shr    $0x8,%esi
087a5bea +0x04a:  and    $0x3f,%esi
087a5bed +0x04d:  xor    -0x65c5b8(%ebx,%esi,4),%eax
087a5bf4 +0x054:  mov    %ecx,%esi
087a5bf6 +0x056:  shr    $0x10,%esi
087a5bf9 +0x059:  shr    $0x18,%ecx
087a5bfc +0x05c:  and    $0x3f,%esi
087a5bff +0x05f:  and    $0x3f,%ecx
087a5c02 +0x062:  xor    -0x65c7b8(%ebx,%esi,4),%eax
087a5c09 +0x069:  xor    -0x65c9b8(%ebx,%ecx,4),%eax
087a5c10 +0x070:  mov    %edx,%ecx
087a5c12 +0x072:  shr    $0x8,%ecx
087a5c15 +0x075:  and    $0x3f,%ecx
087a5c18 +0x078:  xor    -0x65c6b8(%ebx,%ecx,4),%eax
087a5c1f +0x07f:  mov    %edx,%ecx
087a5c21 +0x081:  shr    $0x10,%ecx
087a5c24 +0x084:  shr    $0x18,%edx
087a5c27 +0x087:  and    $0x3f,%ecx
087a5c2a +0x08a:  and    $0x3f,%edx
087a5c2d +0x08d:  xor    -0x65c8b8(%ebx,%ecx,4),%eax
087a5c34 +0x094:  xor    -0x65cab8(%ebx,%edx,4),%eax
087a5c3b +0x09b:  mov    0x8(%ebp),%edx
087a5c3e +0x09e:  mov    %eax,%ecx
087a5c40 +0x0a0:  ror    $0x4,%ecx
087a5c43 +0x0a3:  mov    0xc(%edx),%esi
087a5c46 +0x0a6:  xor    0x8(%edx),%ecx
087a5c49 +0x0a9:  xor    %eax,%esi
087a5c4b +0x0ab:  mov    %esi,%edx
087a5c4d +0x0ad:  and    $0x3f,%edx
087a5c50 +0x0b0:  xor    -0x65c3b8(%ebx,%edx,4),%edi
087a5c57 +0x0b7:  mov    %edi,%edx
087a5c59 +0x0b9:  mov    %ecx,%edi
087a5c5b +0x0bb:  and    $0x3f,%edi
087a5c5e +0x0be:  xor    -0x65c4b8(%ebx,%edi,4),%edx
087a5c65 +0x0c5:  mov    %esi,%edi
087a5c67 +0x0c7:  shr    $0x8,%edi
087a5c6a +0x0ca:  and    $0x3f,%edi
087a5c6d +0x0cd:  xor    -0x65c5b8(%ebx,%edi,4),%edx
087a5c74 +0x0d4:  mov    %esi,%edi
087a5c76 +0x0d6:  shr    $0x10,%edi
087a5c79 +0x0d9:  shr    $0x18,%esi
087a5c7c +0x0dc:  and    $0x3f,%edi
087a5c7f +0x0df:  and    $0x3f,%esi
087a5c82 +0x0e2:  xor    -0x65c7b8(%ebx,%edi,4),%edx
087a5c89 +0x0e9:  xor    -0x65c9b8(%ebx,%esi,4),%edx
087a5c90 +0x0f0:  mov    %ecx,%esi
087a5c92 +0x0f2:  shr    $0x8,%esi
087a5c95 +0x0f5:  mov    0x8(%ebp),%edi
087a5c98 +0x0f8:  and    $0x3f,%esi
087a5c9b +0x0fb:  xor    -0x65c6b8(%ebx,%esi,4),%edx
087a5ca2 +0x102:  mov    %ecx,%esi
087a5ca4 +0x104:  shr    $0x10,%esi
087a5ca7 +0x107:  shr    $0x18,%ecx
087a5caa +0x10a:  and    $0x3f,%esi
087a5cad +0x10d:  and    $0x3f,%ecx
087a5cb0 +0x110:  xor    -0x65c8b8(%ebx,%esi,4),%edx
087a5cb7 +0x117:  mov    0x8(%ebp),%esi
087a5cba +0x11a:  xor    -0x65cab8(%ebx,%ecx,4),%edx
087a5cc1 +0x121:  mov    %edx,%ecx
087a5cc3 +0x123:  ror    $0x4,%ecx
087a5cc6 +0x126:  xor    0x10(%esi),%ecx
087a5cc9 +0x129:  mov    %edx,%esi
087a5ccb +0x12b:  xor    0x14(%edi),%esi
087a5cce +0x12e:  mov    %esi,%edi
087a5cd0 +0x130:  and    $0x3f,%edi
087a5cd3 +0x133:  xor    -0x65c3b8(%ebx,%edi,4),%eax
087a5cda +0x13a:  mov    %ecx,%edi
087a5cdc +0x13c:  and    $0x3f,%edi
087a5cdf +0x13f:  xor    -0x65c4b8(%ebx,%edi,4),%eax
087a5ce6 +0x146:  mov    %esi,%edi
087a5ce8 +0x148:  shr    $0x8,%edi
087a5ceb +0x14b:  and    $0x3f,%edi
087a5cee +0x14e:  xor    -0x65c5b8(%ebx,%edi,4),%eax
087a5cf5 +0x155:  mov    %esi,%edi
087a5cf7 +0x157:  shr    $0x10,%edi
087a5cfa +0x15a:  shr    $0x18,%esi
087a5cfd +0x15d:  and    $0x3f,%edi
087a5d00 +0x160:  and    $0x3f,%esi
087a5d03 +0x163:  xor    -0x65c7b8(%ebx,%edi,4),%eax
087a5d0a +0x16a:  xor    -0x65c9b8(%ebx,%esi,4),%eax
087a5d11 +0x171:  mov    %ecx,%esi
087a5d13 +0x173:  shr    $0x8,%esi
087a5d16 +0x176:  mov    0x8(%ebp),%edi
087a5d19 +0x179:  and    $0x3f,%esi
087a5d1c +0x17c:  xor    -0x65c6b8(%ebx,%esi,4),%eax
087a5d23 +0x183:  mov    %ecx,%esi
087a5d25 +0x185:  shr    $0x10,%esi
087a5d28 +0x188:  shr    $0x18,%ecx
087a5d2b +0x18b:  and    $0x3f,%esi
087a5d2e +0x18e:  and    $0x3f,%ecx
087a5d31 +0x191:  xor    -0x65c8b8(%ebx,%esi,4),%eax
087a5d38 +0x198:  mov    0x8(%ebp),%esi
087a5d3b +0x19b:  xor    -0x65cab8(%ebx,%ecx,4),%eax
087a5d42 +0x1a2:  mov    %eax,%ecx
087a5d44 +0x1a4:  ror    $0x4,%ecx
087a5d47 +0x1a7:  xor    0x18(%esi),%ecx
087a5d4a +0x1aa:  mov    %eax,%esi
087a5d4c +0x1ac:  xor    0x1c(%edi),%esi
087a5d4f +0x1af:  mov    %esi,%edi
087a5d51 +0x1b1:  and    $0x3f,%edi
087a5d54 +0x1b4:  xor    -0x65c3b8(%ebx,%edi,4),%edx
087a5d5b +0x1bb:  mov    %ecx,%edi
087a5d5d +0x1bd:  and    $0x3f,%edi
087a5d60 +0x1c0:  xor    -0x65c4b8(%ebx,%edi,4),%edx
087a5d67 +0x1c7:  mov    %esi,%edi
087a5d69 +0x1c9:  shr    $0x8,%edi
087a5d6c +0x1cc:  and    $0x3f,%edi
087a5d6f +0x1cf:  xor    -0x65c5b8(%ebx,%edi,4),%edx
087a5d76 +0x1d6:  mov    %esi,%edi
087a5d78 +0x1d8:  shr    $0x10,%edi
087a5d7b +0x1db:  shr    $0x18,%esi
087a5d7e +0x1de:  and    $0x3f,%edi
087a5d81 +0x1e1:  and    $0x3f,%esi
087a5d84 +0x1e4:  xor    -0x65c7b8(%ebx,%edi,4),%edx
087a5d8b +0x1eb:  xor    -0x65c9b8(%ebx,%esi,4),%edx
087a5d92 +0x1f2:  mov    %ecx,%esi
087a5d94 +0x1f4:  shr    $0x8,%esi
087a5d97 +0x1f7:  mov    0x8(%ebp),%edi
087a5d9a +0x1fa:  and    $0x3f,%esi
087a5d9d +0x1fd:  xor    -0x65c6b8(%ebx,%esi,4),%edx
087a5da4 +0x204:  mov    %ecx,%esi
087a5da6 +0x206:  shr    $0x10,%esi
087a5da9 +0x209:  and    $0x3f,%esi
087a5dac +0x20c:  shr    $0x18,%ecx
087a5daf +0x20f:  xor    -0x65c8b8(%ebx,%esi,4),%edx
087a5db6 +0x216:  and    $0x3f,%ecx
087a5db9 +0x219:  xor    -0x65cab8(%ebx,%ecx,4),%edx
087a5dc0 +0x220:  mov    0x8(%ebp),%esi
087a5dc3 +0x223:  mov    %edx,%ecx
087a5dc5 +0x225:  ror    $0x4,%ecx
087a5dc8 +0x228:  xor    0x20(%esi),%ecx
087a5dcb +0x22b:  mov    %edx,%esi
087a5dcd +0x22d:  xor    0x24(%edi),%esi
087a5dd0 +0x230:  mov    %esi,%edi
087a5dd2 +0x232:  and    $0x3f,%edi
087a5dd5 +0x235:  xor    -0x65c3b8(%ebx,%edi,4),%eax
087a5ddc +0x23c:  mov    %ecx,%edi
087a5dde +0x23e:  and    $0x3f,%edi
087a5de1 +0x241:  xor    -0x65c4b8(%ebx,%edi,4),%eax
087a5de8 +0x248:  mov    %esi,%edi
087a5dea +0x24a:  shr    $0x8,%edi
087a5ded +0x24d:  and    $0x3f,%edi
087a5df0 +0x250:  xor    -0x65c5b8(%ebx,%edi,4),%eax
087a5df7 +0x257:  mov    %esi,%edi
087a5df9 +0x259:  shr    $0x10,%edi
087a5dfc +0x25c:  shr    $0x18,%esi
087a5dff +0x25f:  and    $0x3f,%edi
087a5e02 +0x262:  and    $0x3f,%esi
087a5e05 +0x265:  xor    -0x65c7b8(%ebx,%edi,4),%eax
087a5e0c +0x26c:  xor    -0x65c9b8(%ebx,%esi,4),%eax
087a5e13 +0x273:  mov    %ecx,%esi
087a5e15 +0x275:  shr    $0x8,%esi
087a5e18 +0x278:  mov    0x8(%ebp),%edi
087a5e1b +0x27b:  and    $0x3f,%esi
087a5e1e +0x27e:  xor    -0x65c6b8(%ebx,%esi,4),%eax
087a5e25 +0x285:  mov    %ecx,%esi
087a5e27 +0x287:  shr    $0x10,%esi
087a5e2a +0x28a:  shr    $0x18,%ecx
087a5e2d +0x28d:  and    $0x3f,%esi
087a5e30 +0x290:  and    $0x3f,%ecx
087a5e33 +0x293:  xor    -0x65c8b8(%ebx,%esi,4),%eax
087a5e3a +0x29a:  mov    0x8(%ebp),%esi
087a5e3d +0x29d:  xor    -0x65cab8(%ebx,%ecx,4),%eax
087a5e44 +0x2a4:  mov    %eax,%ecx
087a5e46 +0x2a6:  ror    $0x4,%ecx
087a5e49 +0x2a9:  xor    0x28(%esi),%ecx
087a5e4c +0x2ac:  mov    %eax,%esi
087a5e4e +0x2ae:  xor    0x2c(%edi),%esi
087a5e51 +0x2b1:  mov    %esi,%edi
087a5e53 +0x2b3:  and    $0x3f,%edi
087a5e56 +0x2b6:  xor    -0x65c3b8(%ebx,%edi,4),%edx
087a5e5d +0x2bd:  mov    %ecx,%edi
087a5e5f +0x2bf:  and    $0x3f,%edi
087a5e62 +0x2c2:  xor    -0x65c4b8(%ebx,%edi,4),%edx
087a5e69 +0x2c9:  mov    %esi,%edi
087a5e6b +0x2cb:  shr    $0x8,%edi
087a5e6e +0x2ce:  and    $0x3f,%edi
087a5e71 +0x2d1:  xor    -0x65c5b8(%ebx,%edi,4),%edx
087a5e78 +0x2d8:  mov    %esi,%edi
087a5e7a +0x2da:  shr    $0x10,%edi
087a5e7d +0x2dd:  shr    $0x18,%esi
087a5e80 +0x2e0:  and    $0x3f,%edi
087a5e83 +0x2e3:  and    $0x3f,%esi
087a5e86 +0x2e6:  xor    -0x65c7b8(%ebx,%edi,4),%edx
087a5e8d +0x2ed:  xor    -0x65c9b8(%ebx,%esi,4),%edx
087a5e94 +0x2f4:  mov    %ecx,%esi
087a5e96 +0x2f6:  shr    $0x8,%esi
087a5e99 +0x2f9:  mov    0x8(%ebp),%edi
087a5e9c +0x2fc:  and    $0x3f,%esi
087a5e9f +0x2ff:  xor    -0x65c6b8(%ebx,%esi,4),%edx
087a5ea6 +0x306:  mov    %ecx,%esi
087a5ea8 +0x308:  shr    $0x10,%esi
087a5eab +0x30b:  shr    $0x18,%ecx
087a5eae +0x30e:  and    $0x3f,%esi
087a5eb1 +0x311:  and    $0x3f,%ecx
087a5eb4 +0x314:  xor    -0x65c8b8(%ebx,%esi,4),%edx
087a5ebb +0x31b:  mov    0x8(%ebp),%esi
087a5ebe +0x31e:  xor    -0x65cab8(%ebx,%ecx,4),%edx
087a5ec5 +0x325:  mov    %edx,%ecx
087a5ec7 +0x327:  ror    $0x4,%ecx
087a5eca +0x32a:  xor    0x30(%esi),%ecx
087a5ecd +0x32d:  mov    %edx,%esi
087a5ecf +0x32f:  xor    0x34(%edi),%esi
087a5ed2 +0x332:  mov    %esi,%edi
087a5ed4 +0x334:  and    $0x3f,%edi
087a5ed7 +0x337:  xor    -0x65c3b8(%ebx,%edi,4),%eax
087a5ede +0x33e:  mov    %ecx,%edi
087a5ee0 +0x340:  and    $0x3f,%edi
087a5ee3 +0x343:  xor    -0x65c4b8(%ebx,%edi,4),%eax
087a5eea +0x34a:  mov    %esi,%edi
087a5eec +0x34c:  shr    $0x8,%edi
087a5eef +0x34f:  and    $0x3f,%edi
087a5ef2 +0x352:  xor    -0x65c5b8(%ebx,%edi,4),%eax
087a5ef9 +0x359:  mov    %esi,%edi
087a5efb +0x35b:  shr    $0x10,%edi
087a5efe +0x35e:  and    $0x3f,%edi
087a5f01 +0x361:  shr    $0x18,%esi
087a5f04 +0x364:  xor    -0x65c7b8(%ebx,%edi,4),%eax
087a5f0b +0x36b:  and    $0x3f,%esi
087a5f0e +0x36e:  xor    -0x65c9b8(%ebx,%esi,4),%eax
087a5f15 +0x375:  mov    %ecx,%esi
087a5f17 +0x377:  shr    $0x8,%esi
087a5f1a +0x37a:  mov    0x8(%ebp),%edi
087a5f1d +0x37d:  and    $0x3f,%esi
087a5f20 +0x380:  xor    -0x65c6b8(%ebx,%esi,4),%eax
087a5f27 +0x387:  mov    %ecx,%esi
087a5f29 +0x389:  shr    $0x10,%esi
087a5f2c +0x38c:  shr    $0x18,%ecx
087a5f2f +0x38f:  and    $0x3f,%esi
087a5f32 +0x392:  and    $0x3f,%ecx
087a5f35 +0x395:  xor    -0x65c8b8(%ebx,%esi,4),%eax
087a5f3c +0x39c:  mov    0x8(%ebp),%esi
087a5f3f +0x39f:  xor    -0x65cab8(%ebx,%ecx,4),%eax
087a5f46 +0x3a6:  mov    %eax,%ecx
087a5f48 +0x3a8:  ror    $0x4,%ecx
087a5f4b +0x3ab:  xor    0x38(%esi),%ecx
087a5f4e +0x3ae:  mov    %eax,%esi
087a5f50 +0x3b0:  xor    0x3c(%edi),%esi
087a5f53 +0x3b3:  mov    %esi,%edi
087a5f55 +0x3b5:  and    $0x3f,%edi
087a5f58 +0x3b8:  xor    -0x65c3b8(%ebx,%edi,4),%edx
087a5f5f +0x3bf:  mov    %ecx,%edi
087a5f61 +0x3c1:  and    $0x3f,%edi
087a5f64 +0x3c4:  xor    -0x65c4b8(%ebx,%edi,4),%edx
087a5f6b +0x3cb:  mov    %esi,%edi
087a5f6d +0x3cd:  shr    $0x8,%edi
087a5f70 +0x3d0:  and    $0x3f,%edi
087a5f73 +0x3d3:  xor    -0x65c5b8(%ebx,%edi,4),%edx
087a5f7a +0x3da:  mov    %esi,%edi
087a5f7c +0x3dc:  shr    $0x10,%edi
087a5f7f +0x3df:  shr    $0x18,%esi
087a5f82 +0x3e2:  and    $0x3f,%edi
087a5f85 +0x3e5:  and    $0x3f,%esi
087a5f88 +0x3e8:  xor    -0x65c7b8(%ebx,%edi,4),%edx
087a5f8f +0x3ef:  xor    -0x65c9b8(%ebx,%esi,4),%edx
087a5f96 +0x3f6:  mov    %ecx,%esi
087a5f98 +0x3f8:  shr    $0x8,%esi
087a5f9b +0x3fb:  mov    0x8(%ebp),%edi
087a5f9e +0x3fe:  and    $0x3f,%esi
087a5fa1 +0x401:  xor    -0x65c6b8(%ebx,%esi,4),%edx
087a5fa8 +0x408:  mov    %ecx,%esi
087a5faa +0x40a:  shr    $0x10,%esi
087a5fad +0x40d:  and    $0x3f,%esi
087a5fb0 +0x410:  xor    -0x65c8b8(%ebx,%esi,4),%edx
087a5fb7 +0x417:  shr    $0x18,%ecx
087a5fba +0x41a:  mov    0x8(%ebp),%esi
087a5fbd +0x41d:  and    $0x3f,%ecx
087a5fc0 +0x420:  xor    -0x65cab8(%ebx,%ecx,4),%edx
087a5fc7 +0x427:  mov    %edx,%ecx
087a5fc9 +0x429:  ror    $0x4,%ecx
087a5fcc +0x42c:  xor    0x40(%esi),%ecx
087a5fcf +0x42f:  mov    %edx,%esi
087a5fd1 +0x431:  xor    0x44(%edi),%esi
087a5fd4 +0x434:  mov    %esi,%edi
087a5fd6 +0x436:  and    $0x3f,%edi
087a5fd9 +0x439:  xor    -0x65c3b8(%ebx,%edi,4),%eax
087a5fe0 +0x440:  mov    %ecx,%edi
087a5fe2 +0x442:  and    $0x3f,%edi
087a5fe5 +0x445:  xor    -0x65c4b8(%ebx,%edi,4),%eax
087a5fec +0x44c:  mov    %esi,%edi
087a5fee +0x44e:  shr    $0x8,%edi
087a5ff1 +0x451:  and    $0x3f,%edi
087a5ff4 +0x454:  xor    -0x65c5b8(%ebx,%edi,4),%eax
087a5ffb +0x45b:  mov    %esi,%edi
087a5ffd +0x45d:  shr    $0x10,%edi
087a6000 +0x460:  shr    $0x18,%esi
087a6003 +0x463:  and    $0x3f,%edi
087a6006 +0x466:  and    $0x3f,%esi
087a6009 +0x469:  xor    -0x65c7b8(%ebx,%edi,4),%eax
087a6010 +0x470:  xor    -0x65c9b8(%ebx,%esi,4),%eax
087a6017 +0x477:  mov    %ecx,%esi
087a6019 +0x479:  shr    $0x8,%esi
087a601c +0x47c:  mov    0x8(%ebp),%edi
087a601f +0x47f:  and    $0x3f,%esi
087a6022 +0x482:  xor    -0x65c6b8(%ebx,%esi,4),%eax
087a6029 +0x489:  mov    %ecx,%esi
087a602b +0x48b:  shr    $0x10,%esi
087a602e +0x48e:  shr    $0x18,%ecx
087a6031 +0x491:  and    $0x3f,%esi
087a6034 +0x494:  and    $0x3f,%ecx
087a6037 +0x497:  xor    -0x65c8b8(%ebx,%esi,4),%eax
087a603e +0x49e:  mov    0x8(%ebp),%esi
087a6041 +0x4a1:  xor    -0x65cab8(%ebx,%ecx,4),%eax
087a6048 +0x4a8:  mov    %eax,%ecx
087a604a +0x4aa:  ror    $0x4,%ecx
087a604d +0x4ad:  xor    0x48(%esi),%ecx
087a6050 +0x4b0:  mov    %eax,%esi
087a6052 +0x4b2:  xor    0x4c(%edi),%esi
087a6055 +0x4b5:  mov    %esi,%edi
087a6057 +0x4b7:  and    $0x3f,%edi
087a605a +0x4ba:  xor    -0x65c3b8(%ebx,%edi,4),%edx
087a6061 +0x4c1:  mov    %ecx,%edi
087a6063 +0x4c3:  and    $0x3f,%edi
087a6066 +0x4c6:  xor    -0x65c4b8(%ebx,%edi,4),%edx
087a606d +0x4cd:  mov    %esi,%edi
087a606f +0x4cf:  shr    $0x8,%edi
087a6072 +0x4d2:  and    $0x3f,%edi
087a6075 +0x4d5:  xor    -0x65c5b8(%ebx,%edi,4),%edx
087a607c +0x4dc:  mov    %esi,%edi
087a607e +0x4de:  shr    $0x10,%edi
087a6081 +0x4e1:  shr    $0x18,%esi
087a6084 +0x4e4:  and    $0x3f,%edi
087a6087 +0x4e7:  and    $0x3f,%esi
087a608a +0x4ea:  xor    -0x65c7b8(%ebx,%edi,4),%edx
087a6091 +0x4f1:  xor    -0x65c9b8(%ebx,%esi,4),%edx
087a6098 +0x4f8:  mov    %ecx,%esi
087a609a +0x4fa:  shr    $0x8,%esi
087a609d +0x4fd:  mov    0x8(%ebp),%edi
087a60a0 +0x500:  and    $0x3f,%esi
087a60a3 +0x503:  xor    -0x65c6b8(%ebx,%esi,4),%edx
087a60aa +0x50a:  mov    %ecx,%esi
087a60ac +0x50c:  shr    $0x10,%esi
087a60af +0x50f:  shr    $0x18,%ecx
087a60b2 +0x512:  and    $0x3f,%esi
087a60b5 +0x515:  and    $0x3f,%ecx
087a60b8 +0x518:  xor    -0x65c8b8(%ebx,%esi,4),%edx
087a60bf +0x51f:  mov    0x8(%ebp),%esi
087a60c2 +0x522:  xor    -0x65cab8(%ebx,%ecx,4),%edx
087a60c9 +0x529:  mov    %edx,%ecx
087a60cb +0x52b:  ror    $0x4,%ecx
087a60ce +0x52e:  xor    0x50(%esi),%ecx
087a60d1 +0x531:  mov    %edx,%esi
087a60d3 +0x533:  xor    0x54(%edi),%esi
087a60d6 +0x536:  mov    %esi,%edi
087a60d8 +0x538:  and    $0x3f,%edi
087a60db +0x53b:  xor    -0x65c3b8(%ebx,%edi,4),%eax
087a60e2 +0x542:  mov    %ecx,%edi
087a60e4 +0x544:  and    $0x3f,%edi
087a60e7 +0x547:  xor    -0x65c4b8(%ebx,%edi,4),%eax
087a60ee +0x54e:  mov    %esi,%edi
087a60f0 +0x550:  shr    $0x8,%edi
087a60f3 +0x553:  and    $0x3f,%edi
087a60f6 +0x556:  xor    -0x65c5b8(%ebx,%edi,4),%eax
087a60fd +0x55d:  mov    %esi,%edi
087a60ff +0x55f:  shr    $0x10,%edi
087a6102 +0x562:  and    $0x3f,%edi
087a6105 +0x565:  xor    -0x65c7b8(%ebx,%edi,4),%eax
087a610c +0x56c:  shr    $0x18,%esi
087a610f +0x56f:  mov    0x8(%ebp),%edi
087a6112 +0x572:  and    $0x3f,%esi
087a6115 +0x575:  xor    -0x65c9b8(%ebx,%esi,4),%eax
087a611c +0x57c:  mov    %ecx,%esi
087a611e +0x57e:  shr    $0x8,%esi
087a6121 +0x581:  and    $0x3f,%esi
087a6124 +0x584:  xor    -0x65c6b8(%ebx,%esi,4),%eax
087a612b +0x58b:  mov    %ecx,%esi
087a612d +0x58d:  shr    $0x10,%esi
087a6130 +0x590:  shr    $0x18,%ecx
087a6133 +0x593:  and    $0x3f,%esi
087a6136 +0x596:  and    $0x3f,%ecx
087a6139 +0x599:  xor    -0x65c8b8(%ebx,%esi,4),%eax
087a6140 +0x5a0:  mov    0x8(%ebp),%esi
087a6143 +0x5a3:  xor    -0x65cab8(%ebx,%ecx,4),%eax
087a614a +0x5aa:  mov    %eax,%ecx
087a614c +0x5ac:  ror    $0x4,%ecx
087a614f +0x5af:  xor    0x58(%esi),%ecx
087a6152 +0x5b2:  mov    %eax,%esi
087a6154 +0x5b4:  xor    0x5c(%edi),%esi
087a6157 +0x5b7:  mov    %esi,%edi
087a6159 +0x5b9:  and    $0x3f,%edi
087a615c +0x5bc:  xor    -0x65c3b8(%ebx,%edi,4),%edx
087a6163 +0x5c3:  mov    %ecx,%edi
087a6165 +0x5c5:  and    $0x3f,%edi
087a6168 +0x5c8:  xor    -0x65c4b8(%ebx,%edi,4),%edx
087a616f +0x5cf:  mov    %esi,%edi
087a6171 +0x5d1:  shr    $0x8,%edi
087a6174 +0x5d4:  and    $0x3f,%edi
087a6177 +0x5d7:  xor    -0x65c5b8(%ebx,%edi,4),%edx
087a617e +0x5de:  mov    %esi,%edi
087a6180 +0x5e0:  shr    $0x10,%edi
087a6183 +0x5e3:  shr    $0x18,%esi
087a6186 +0x5e6:  and    $0x3f,%edi
087a6189 +0x5e9:  and    $0x3f,%esi
087a618c +0x5ec:  xor    -0x65c7b8(%ebx,%edi,4),%edx
087a6193 +0x5f3:  xor    -0x65c9b8(%ebx,%esi,4),%edx
087a619a +0x5fa:  mov    %ecx,%esi
087a619c +0x5fc:  shr    $0x8,%esi
087a619f +0x5ff:  mov    0x8(%ebp),%edi
087a61a2 +0x602:  and    $0x3f,%esi
087a61a5 +0x605:  xor    -0x65c6b8(%ebx,%esi,4),%edx
087a61ac +0x60c:  mov    %ecx,%esi
087a61ae +0x60e:  shr    $0x10,%esi
087a61b1 +0x611:  and    $0x3f,%esi
087a61b4 +0x614:  xor    -0x65c8b8(%ebx,%esi,4),%edx
087a61bb +0x61b:  shr    $0x18,%ecx
087a61be +0x61e:  mov    0x8(%ebp),%esi
087a61c1 +0x621:  and    $0x3f,%ecx
087a61c4 +0x624:  xor    -0x65cab8(%ebx,%ecx,4),%edx
087a61cb +0x62b:  mov    %edx,%ecx
087a61cd +0x62d:  ror    $0x4,%ecx
087a61d0 +0x630:  xor    0x60(%esi),%ecx
087a61d3 +0x633:  mov    %edx,%esi
087a61d5 +0x635:  xor    0x64(%edi),%esi
087a61d8 +0x638:  mov    %esi,%edi
087a61da +0x63a:  and    $0x3f,%edi
087a61dd +0x63d:  xor    -0x65c3b8(%ebx,%edi,4),%eax
087a61e4 +0x644:  mov    %ecx,%edi
087a61e6 +0x646:  and    $0x3f,%edi
087a61e9 +0x649:  xor    -0x65c4b8(%ebx,%edi,4),%eax
087a61f0 +0x650:  mov    %esi,%edi
087a61f2 +0x652:  shr    $0x8,%edi
087a61f5 +0x655:  and    $0x3f,%edi
087a61f8 +0x658:  xor    -0x65c5b8(%ebx,%edi,4),%eax
087a61ff +0x65f:  mov    %esi,%edi
087a6201 +0x661:  shr    $0x10,%edi
087a6204 +0x664:  shr    $0x18,%esi
087a6207 +0x667:  and    $0x3f,%edi
087a620a +0x66a:  and    $0x3f,%esi
087a620d +0x66d:  xor    -0x65c7b8(%ebx,%edi,4),%eax
087a6214 +0x674:  xor    -0x65c9b8(%ebx,%esi,4),%eax
087a621b +0x67b:  mov    %ecx,%esi
087a621d +0x67d:  shr    $0x8,%esi
087a6220 +0x680:  mov    0x8(%ebp),%edi
087a6223 +0x683:  and    $0x3f,%esi
087a6226 +0x686:  xor    -0x65c6b8(%ebx,%esi,4),%eax
087a622d +0x68d:  mov    %ecx,%esi
087a622f +0x68f:  shr    $0x10,%esi
087a6232 +0x692:  shr    $0x18,%ecx
087a6235 +0x695:  and    $0x3f,%esi
087a6238 +0x698:  and    $0x3f,%ecx
087a623b +0x69b:  xor    -0x65c8b8(%ebx,%esi,4),%eax
087a6242 +0x6a2:  mov    0x8(%ebp),%esi
087a6245 +0x6a5:  xor    -0x65cab8(%ebx,%ecx,4),%eax
087a624c +0x6ac:  mov    %eax,%ecx
087a624e +0x6ae:  ror    $0x4,%ecx
087a6251 +0x6b1:  xor    0x68(%esi),%ecx
087a6254 +0x6b4:  mov    %eax,%esi
087a6256 +0x6b6:  xor    0x6c(%edi),%esi
087a6259 +0x6b9:  mov    %esi,%edi
087a625b +0x6bb:  and    $0x3f,%edi
087a625e +0x6be:  xor    -0x65c3b8(%ebx,%edi,4),%edx
087a6265 +0x6c5:  mov    %ecx,%edi
087a6267 +0x6c7:  and    $0x3f,%edi
087a626a +0x6ca:  xor    -0x65c4b8(%ebx,%edi,4),%edx
087a6271 +0x6d1:  mov    %esi,%edi
087a6273 +0x6d3:  shr    $0x8,%edi
087a6276 +0x6d6:  and    $0x3f,%edi
087a6279 +0x6d9:  xor    -0x65c5b8(%ebx,%edi,4),%edx
087a6280 +0x6e0:  mov    %esi,%edi
087a6282 +0x6e2:  shr    $0x10,%edi
087a6285 +0x6e5:  shr    $0x18,%esi
087a6288 +0x6e8:  and    $0x3f,%edi
087a628b +0x6eb:  and    $0x3f,%esi
087a628e +0x6ee:  xor    -0x65c7b8(%ebx,%edi,4),%edx
087a6295 +0x6f5:  xor    -0x65c9b8(%ebx,%esi,4),%edx
087a629c +0x6fc:  mov    %ecx,%esi
087a629e +0x6fe:  shr    $0x8,%esi
087a62a1 +0x701:  mov    0x8(%ebp),%edi
087a62a4 +0x704:  and    $0x3f,%esi
087a62a7 +0x707:  xor    -0x65c6b8(%ebx,%esi,4),%edx
087a62ae +0x70e:  mov    %ecx,%esi
087a62b0 +0x710:  shr    $0x10,%esi
087a62b3 +0x713:  shr    $0x18,%ecx
087a62b6 +0x716:  and    $0x3f,%esi
087a62b9 +0x719:  and    $0x3f,%ecx
087a62bc +0x71c:  xor    -0x65c8b8(%ebx,%esi,4),%edx
087a62c3 +0x723:  mov    0x8(%ebp),%esi
087a62c6 +0x726:  xor    -0x65cab8(%ebx,%ecx,4),%edx
087a62cd +0x72d:  mov    %edx,%ecx
087a62cf +0x72f:  ror    $0x4,%ecx
087a62d2 +0x732:  xor    0x70(%esi),%ecx
087a62d5 +0x735:  mov    %edx,%esi
087a62d7 +0x737:  xor    0x74(%edi),%esi
087a62da +0x73a:  mov    %esi,%edi
087a62dc +0x73c:  and    $0x3f,%edi
087a62df +0x73f:  xor    -0x65c3b8(%ebx,%edi,4),%eax
087a62e6 +0x746:  mov    %ecx,%edi
087a62e8 +0x748:  and    $0x3f,%edi
087a62eb +0x74b:  xor    -0x65c4b8(%ebx,%edi,4),%eax
087a62f2 +0x752:  mov    %esi,%edi
087a62f4 +0x754:  shr    $0x8,%edi
087a62f7 +0x757:  and    $0x3f,%edi
087a62fa +0x75a:  xor    -0x65c5b8(%ebx,%edi,4),%eax
087a6301 +0x761:  mov    %esi,%edi
087a6303 +0x763:  shr    $0x10,%edi
087a6306 +0x766:  and    $0x3f,%edi
087a6309 +0x769:  xor    -0x65c7b8(%ebx,%edi,4),%eax
087a6310 +0x770:  shr    $0x18,%esi
087a6313 +0x773:  mov    0x8(%ebp),%edi
087a6316 +0x776:  and    $0x3f,%esi
087a6319 +0x779:  xor    -0x65c9b8(%ebx,%esi,4),%eax
087a6320 +0x780:  mov    %ecx,%esi
087a6322 +0x782:  shr    $0x8,%esi
087a6325 +0x785:  and    $0x3f,%esi
087a6328 +0x788:  xor    -0x65c6b8(%ebx,%esi,4),%eax
087a632f +0x78f:  mov    %ecx,%esi
087a6331 +0x791:  shr    $0x10,%esi
087a6334 +0x794:  shr    $0x18,%ecx
087a6337 +0x797:  and    $0x3f,%esi
087a633a +0x79a:  and    $0x3f,%ecx
087a633d +0x79d:  xor    -0x65c8b8(%ebx,%esi,4),%eax
087a6344 +0x7a4:  mov    0x8(%ebp),%esi
087a6347 +0x7a7:  xor    -0x65cab8(%ebx,%ecx,4),%eax
087a634e +0x7ae:  mov    %eax,%ecx
087a6350 +0x7b0:  ror    $0x4,%ecx
087a6353 +0x7b3:  xor    0x78(%esi),%ecx
087a6356 +0x7b6:  mov    %eax,%esi
087a6358 +0x7b8:  xor    0x7c(%edi),%esi
087a635b +0x7bb:  mov    %esi,%edi
087a635d +0x7bd:  and    $0x3f,%edi
087a6360 +0x7c0:  xor    -0x65c3b8(%ebx,%edi,4),%edx
087a6367 +0x7c7:  mov    %ecx,%edi
087a6369 +0x7c9:  and    $0x3f,%edi
087a636c +0x7cc:  xor    -0x65c4b8(%ebx,%edi,4),%edx
087a6373 +0x7d3:  mov    %esi,%edi
087a6375 +0x7d5:  shr    $0x8,%edi
087a6378 +0x7d8:  and    $0x3f,%edi
087a637b +0x7db:  xor    -0x65c5b8(%ebx,%edi,4),%edx
087a6382 +0x7e2:  mov    %esi,%edi
087a6384 +0x7e4:  shr    $0x10,%edi
087a6387 +0x7e7:  shr    $0x18,%esi
087a638a +0x7ea:  and    $0x3f,%edi
087a638d +0x7ed:  and    $0x3f,%esi
087a6390 +0x7f0:  xor    -0x65c7b8(%ebx,%edi,4),%edx
087a6397 +0x7f7:  xor    -0x65c9b8(%ebx,%esi,4),%edx
087a639e +0x7fe:  mov    %ecx,%esi
087a63a0 +0x800:  shr    $0x8,%esi
087a63a3 +0x803:  and    $0x3f,%esi
087a63a6 +0x806:  xor    -0x65c6b8(%ebx,%esi,4),%edx
087a63ad +0x80d:  mov    %ecx,%esi
087a63af +0x80f:  shr    $0x10,%esi
087a63b2 +0x812:  and    $0x3f,%esi
087a63b5 +0x815:  shr    $0x18,%ecx
087a63b8 +0x818:  and    $0x3f,%ecx
087a63bb +0x81b:  xor    -0x65c8b8(%ebx,%esi,4),%edx
087a63c2 +0x822:  xor    -0x65cab8(%ebx,%ecx,4),%edx
087a63c9 +0x829:  mov    0xc(%ebp),%ecx
087a63cc +0x82c:  mov    %eax,(%ecx)
087a63ce +0x82e:  mov    0x10(%ebp),%esi
087a63d1 +0x831:  mov    %edx,(%esi)
087a63d3 +0x833:  pop    %ebx
087a63d4 +0x834:  pop    %esi
087a63d5 +0x835:  pop    %edi
087a63d6 +0x836:  pop    %ebp
087a63d7 +0x837:  ret
087a63d8 +0x838:  nop
087a63d9 +0x839:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::BasicDES::RawProcessBlock @ 0x87a5ba0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::BasicDES::RawProcessBlock(unsigned int&, unsigned int&) const */

void __thiscall TaoCrypt::BasicDES::RawProcessBlock(BasicDES *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = *param_2;
  uVar7 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)this;
  uVar4 = uVar5 ^ *(uint *)(this + 4);
  uVar4 = *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x700) ^ *param_1 ^
          *(uint *)(Spbox + (uVar7 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar7 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar7 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar7 >> 0x18 & 0x3f) * 4);
  uVar7 = (uVar4 >> 4 | uVar4 << 0x1c) ^ *(uint *)(this + 8);
  uVar9 = *(uint *)(this + 0xc) ^ uVar4;
  uVar7 = uVar5 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar7 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar7 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar7 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar7 >> 0x18 & 0x3f) * 4);
  uVar5 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x10);
  uVar9 = uVar7 ^ *(uint *)(this + 0x14);
  uVar5 = uVar4 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar5 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar5 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar5 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar5 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)(this + 0x18);
  uVar9 = uVar5 ^ *(uint *)(this + 0x1c);
  uVar7 = uVar7 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x20);
  uVar9 = uVar7 ^ *(uint *)(this + 0x24);
  uVar5 = uVar5 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)(this + 0x28);
  uVar9 = uVar5 ^ *(uint *)(this + 0x2c);
  uVar7 = uVar7 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x30);
  uVar9 = uVar7 ^ *(uint *)(this + 0x34);
  uVar5 = uVar5 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)(this + 0x38);
  uVar9 = uVar5 ^ *(uint *)(this + 0x3c);
  uVar7 = uVar7 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x40);
  uVar9 = uVar7 ^ *(uint *)(this + 0x44);
  uVar5 = uVar5 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)(this + 0x48);
  uVar9 = uVar5 ^ *(uint *)(this + 0x4c);
  uVar7 = uVar7 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x50);
  uVar9 = uVar7 ^ *(uint *)(this + 0x54);
  uVar5 = uVar5 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)(this + 0x58);
  uVar9 = uVar5 ^ *(uint *)(this + 0x5c);
  uVar7 = uVar7 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x60);
  uVar9 = uVar7 ^ *(uint *)(this + 100);
  uVar5 = uVar5 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)(this + 0x68);
  uVar9 = uVar5 ^ *(uint *)(this + 0x6c);
  uVar8 = uVar7 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar8 >> 4 | uVar8 << 0x1c) ^ *(uint *)(this + 0x70);
  uVar7 = uVar8 ^ *(uint *)(this + 0x74);
  uVar3 = uVar5 ^ *(uint *)(Spbox + (uVar7 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar7 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar7 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar7 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar6 = (uVar3 >> 4 | uVar3 << 0x1c) ^ *(uint *)(this + 0x78);
  uVar10 = uVar3 ^ *(uint *)(this + 0x7c);
  uVar5 = *(uint *)(Spbox + (uVar10 & 0x3f) * 4 + 0x700);
  uVar4 = *(uint *)(Spbox + (uVar6 & 0x3f) * 4 + 0x600);
  uVar7 = *(uint *)(Spbox + (uVar10 >> 8 & 0x3f) * 4 + 0x500);
  uVar9 = *(uint *)(Spbox + (uVar10 >> 0x10 & 0x3f) * 4 + 0x300);
  uVar10 = *(uint *)(Spbox + (uVar10 >> 0x18 & 0x3f) * 4 + 0x100);
  uVar1 = *(uint *)(Spbox + (uVar6 >> 8 & 0x3f) * 4 + 0x400);
  uVar2 = *(uint *)(Spbox + (uVar6 >> 0x10 & 0x3f) * 4 + 0x200);
  uVar6 = *(uint *)(Spbox + (uVar6 >> 0x18 & 0x3f) * 4);
  *param_1 = uVar3;
  *param_2 = uVar8 ^ uVar5 ^ uVar4 ^ uVar7 ^ uVar9 ^ uVar10 ^ uVar1 ^ uVar2 ^ uVar6;
  return;
}
```
