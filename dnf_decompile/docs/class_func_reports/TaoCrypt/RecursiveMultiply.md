# RecursiveMultiply

`_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j`

`TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875bdc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875bdc0  _ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j
#           TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
# range [0x0875bdc0, 0x0875c309]
0875bdc0 +0x000:  push   %ebp
0875bdc1 +0x001:  mov    %esp,%ebp
0875bdc3 +0x003:  push   %edi
0875bdc4 +0x004:  push   %esi
0875bdc5 +0x005:  push   %ebx
0875bdc6 +0x006:  sub    $0x4c,%esp
0875bdc9 +0x009:  call   08722df8 <__i686.get_pc_thunk.bx>
0875bdce +0x00e:  add    $0xc10dca,%ebx
0875bdd4 +0x014:  cmpl   $0x8,0x18(%ebp)
0875bdd8 +0x018:  je     0875bf38 <+0x178>
0875bdde +0x01e:  cmpl   $0x4,0x18(%ebp)
0875bde2 +0x022:  je     0875bf60 <+0x1a0>
0875bde8 +0x028:  cmpl   $0x2,0x18(%ebp)
0875bdec +0x02c:  je     0875c2c8 <+0x508>
0875bdf2 +0x032:  mov    0x18(%ebp),%eax
0875bdf5 +0x035:  mov    0x10(%ebp),%edx
0875bdf8 +0x038:  mov    0x10(%ebp),%ecx
0875bdfb +0x03b:  shr    %eax
0875bdfd +0x03d:  mov    %eax,-0x1c(%ebp)
0875be00 +0x040:  shl    $0x2,%eax
0875be03 +0x043:  add    %eax,%edx
0875be05 +0x045:  mov    %eax,-0x28(%ebp)
0875be08 +0x048:  sub    $0x4,%eax
0875be0b +0x04b:  mov    %edx,-0x30(%ebp)
0875be0e +0x04e:  add    %eax,%ecx
0875be10 +0x050:  add    %eax,%edx
0875be12 +0x052:  mov    %eax,-0x24(%ebp)
0875be15 +0x055:  mov    -0x1c(%ebp),%eax
0875be18 +0x058:  test   %eax,%eax
0875be1a +0x05a:  je     0875c298 <+0x4d8>
0875be20 +0x060:  mov    (%ecx),%edi
0875be22 +0x062:  sub    $0x1,%eax
0875be25 +0x065:  mov    (%edx),%esi
0875be27 +0x067:  cmp    %esi,%edi
0875be29 +0x069:  ja     0875c2a8 <+0x4e8>
0875be2f +0x06f:  sub    $0x4,%ecx
0875be32 +0x072:  sub    $0x4,%edx
0875be35 +0x075:  cmp    %esi,%edi
0875be37 +0x077:  jae    0875be18 <+0x58>
0875be39 +0x079:  movl   $0xfffffffd,-0x34(%ebp)
0875be40 +0x080:  mov    0x14(%ebp),%ecx
0875be43 +0x083:  add    -0x28(%ebp),%ecx
0875be46 +0x086:  mov    -0x1c(%ebp),%eax
0875be49 +0x089:  mov    %ecx,-0x2c(%ebp)
0875be4c +0x08c:  mov    0x14(%ebp),%ecx
0875be4f +0x08f:  mov    -0x2c(%ebp),%edx
0875be52 +0x092:  add    -0x24(%ebp),%ecx
0875be55 +0x095:  add    -0x24(%ebp),%edx
0875be58 +0x098:  test   %eax,%eax
0875be5a +0x09a:  je     0875be7a <+0xba>
0875be5c +0x09c:  mov    (%ecx),%edi
0875be5e +0x09e:  sub    $0x1,%eax
0875be61 +0x0a1:  mov    (%edx),%esi
0875be63 +0x0a3:  cmp    %esi,%edi
0875be65 +0x0a5:  ja     0875c2b8 <+0x4f8>
0875be6b +0x0ab:  sub    $0x4,%ecx
0875be6e +0x0ae:  sub    $0x4,%edx
0875be71 +0x0b1:  cmp    %esi,%edi
0875be73 +0x0b3:  jae    0875be58 <+0x98>
0875be75 +0x0b5:  mov    $0xffffffff,%eax
0875be7a +0x0ba:  add    -0x34(%ebp),%eax
0875be7d +0x0bd:  cmp    $0xfffffffe,%eax
0875be80 +0x0c0:  je     0875c178 <+0x3b8>
0875be86 +0x0c6:  jg     0875bf88 <+0x1c8>
0875be8c +0x0cc:  cmp    $0xfffffffc,%eax
0875be8f +0x0cf:  jne    0875bf9a <+0x1da>
0875be95 +0x0d5:  mov    -0x1c(%ebp),%eax
0875be98 +0x0d8:  mov    0x10(%ebp),%edx
0875be9b +0x0db:  mov    -0x30(%ebp),%ecx
0875be9e +0x0de:  mov    %eax,0xc(%esp)
0875bea2 +0x0e2:  mov    0x8(%ebp),%eax
0875bea5 +0x0e5:  mov    %edx,0x8(%esp)
0875bea9 +0x0e9:  mov    %ecx,0x4(%esp)
0875bead +0x0ed:  mov    %eax,(%esp)
0875beb0 +0x0f0:  call   *0x124c90(%ebx)
0875beb6 +0x0f6:  mov    -0x1c(%ebp),%edx
0875beb9 +0x0f9:  mov    -0x2c(%ebp),%ecx
0875bebc +0x0fc:  mov    0x8(%ebp),%esi
0875bebf +0x0ff:  mov    0x14(%ebp),%eax
0875bec2 +0x102:  add    -0x28(%ebp),%esi
0875bec5 +0x105:  mov    %edx,0xc(%esp)
0875bec9 +0x109:  mov    %ecx,0x8(%esp)
0875becd +0x10d:  mov    %eax,0x4(%esp)
0875bed1 +0x111:  mov    %esi,(%esp)
0875bed4 +0x114:  call   *0x124c90(%ebx)
0875beda +0x11a:  mov    0x18(%ebp),%edx
0875bedd +0x11d:  mov    0xc(%ebp),%edi
0875bee0 +0x120:  mov    -0x1c(%ebp),%ecx
0875bee3 +0x123:  mov    0x8(%ebp),%eax
0875bee6 +0x126:  shl    $0x2,%edx
0875bee9 +0x129:  mov    %edx,-0x24(%ebp)
0875beec +0x12c:  add    %edx,%edi
0875beee +0x12e:  mov    0xc(%ebp),%edx
0875bef1 +0x131:  mov    %ecx,0x10(%esp)
0875bef5 +0x135:  mov    %eax,0x8(%esp)
0875bef9 +0x139:  mov    %esi,0xc(%esp)
0875befd +0x13d:  mov    %edx,(%esp)
0875bf00 +0x140:  mov    %edi,0x4(%esp)
0875bf04 +0x144:  call   0875bdc0 <+0x0>
0875bf09 +0x149:  mov    0xc(%ebp),%eax
0875bf0c +0x14c:  mov    -0x1c(%ebp),%ecx
0875bf0f +0x14f:  mov    0x8(%ebp),%edx
0875bf12 +0x152:  add    -0x28(%ebp),%eax
0875bf15 +0x155:  mov    %ecx,0xc(%esp)
0875bf19 +0x159:  mov    %edx,0x8(%esp)
0875bf1d +0x15d:  mov    %eax,0x4(%esp)
0875bf21 +0x161:  mov    %eax,(%esp)
0875bf24 +0x164:  call   *0x124c90(%ebx)
0875bf2a +0x16a:  movl   $0xffffffff,-0x28(%ebp)
0875bf31 +0x171:  jmp    0875bfe0 <+0x220>
0875bf36 +0x176:  xchg   %ax,%ax
0875bf38 +0x178:  mov    0x14(%ebp),%eax
0875bf3b +0x17b:  mov    0x10(%ebp),%edx
0875bf3e +0x17e:  mov    0x8(%ebp),%ecx
0875bf41 +0x181:  mov    %eax,0x8(%esp)
0875bf45 +0x185:  mov    %edx,0x4(%esp)
0875bf49 +0x189:  mov    %ecx,(%esp)
0875bf4c +0x18c:  call   0875b7b0 <_ZN8TaoCrypt16PentiumOptimized9Multiply8EPjPKjS3_>  ; TaoCrypt::PentiumOptimized::Multiply8(unsigned int*, unsigned int const*, unsigned int const*)
0875bf51 +0x191:  add    $0x4c,%esp
0875bf54 +0x194:  pop    %ebx
0875bf55 +0x195:  pop    %esi
0875bf56 +0x196:  pop    %edi
0875bf57 +0x197:  pop    %ebp
0875bf58 +0x198:  ret
0875bf59 +0x199:  lea    0x0(%esi,%eiz,1),%esi
0875bf60 +0x1a0:  mov    0x14(%ebp),%eax
0875bf63 +0x1a3:  mov    0x10(%ebp),%edx
0875bf66 +0x1a6:  mov    0x8(%ebp),%ecx
0875bf69 +0x1a9:  mov    %eax,0x8(%esp)
0875bf6d +0x1ad:  mov    %edx,0x4(%esp)
0875bf71 +0x1b1:  mov    %ecx,(%esp)
0875bf74 +0x1b4:  call   0875b670 <_ZN8TaoCrypt16PentiumOptimized9Multiply4EPjPKjS3_>  ; TaoCrypt::PentiumOptimized::Multiply4(unsigned int*, unsigned int const*, unsigned int const*)
0875bf79 +0x1b9:  add    $0x4c,%esp
0875bf7c +0x1bc:  pop    %ebx
0875bf7d +0x1bd:  pop    %esi
0875bf7e +0x1be:  pop    %edi
0875bf7f +0x1bf:  pop    %ebp
0875bf80 +0x1c0:  ret
0875bf81 +0x1c1:  lea    0x0(%esi,%eiz,1),%esi
0875bf88 +0x1c8:  cmp    $0x2,%eax
0875bf8b +0x1cb:  je     0875c0f8 <+0x338>
0875bf91 +0x1d1:  cmp    $0x4,%eax
0875bf94 +0x1d4:  je     0875c1f8 <+0x438>
0875bf9a +0x1da:  mov    0x18(%ebp),%esi
0875bf9d +0x1dd:  xor    %eax,%eax
0875bf9f +0x1df:  test   %esi,%esi
0875bfa1 +0x1e1:  je     0875c2e6 <+0x526>
0875bfa7 +0x1e7:  mov    0xc(%ebp),%edx
0875bfaa +0x1ea:  mov    0x18(%ebp),%ecx
0875bfad +0x1ed:  lea    0x0(%esi),%esi
0875bfb0 +0x1f0:  movl   $0x0,(%edx,%eax,4)
0875bfb7 +0x1f7:  add    $0x1,%eax
0875bfba +0x1fa:  cmp    %eax,%ecx
0875bfbc +0x1fc:  ja     0875bfb0 <+0x1f0>
0875bfbe +0x1fe:  mov    0x18(%ebp),%eax
0875bfc1 +0x201:  mov    0xc(%ebp),%edi
0875bfc4 +0x204:  mov    0x8(%ebp),%esi
0875bfc7 +0x207:  add    -0x28(%ebp),%esi
0875bfca +0x20a:  shl    $0x2,%eax
0875bfcd +0x20d:  mov    %eax,-0x24(%ebp)
0875bfd0 +0x210:  add    %eax,%edi
0875bfd2 +0x212:  movl   $0x0,-0x28(%ebp)
0875bfd9 +0x219:  lea    0x0(%esi,%eiz,1),%esi
0875bfe0 +0x220:  mov    -0x1c(%ebp),%edx
0875bfe3 +0x223:  mov    0x14(%ebp),%ecx
0875bfe6 +0x226:  mov    0x10(%ebp),%eax
0875bfe9 +0x229:  mov    %edi,0x4(%esp)
0875bfed +0x22d:  mov    %edx,0x10(%esp)
0875bff1 +0x231:  mov    0x8(%ebp),%edx
0875bff4 +0x234:  mov    %ecx,0xc(%esp)
0875bff8 +0x238:  mov    %eax,0x8(%esp)
0875bffc +0x23c:  mov    %edx,(%esp)
0875bfff +0x23f:  call   0875bdc0 <+0x0>
0875c004 +0x244:  mov    -0x1c(%ebp),%ecx
0875c007 +0x247:  mov    -0x2c(%ebp),%eax
0875c00a +0x24a:  mov    0x8(%ebp),%edx
0875c00d +0x24d:  add    -0x24(%ebp),%edx
0875c010 +0x250:  mov    %ecx,0x10(%esp)
0875c014 +0x254:  mov    -0x30(%ebp),%ecx
0875c017 +0x257:  mov    %eax,0xc(%esp)
0875c01b +0x25b:  mov    %edx,(%esp)
0875c01e +0x25e:  mov    %edx,-0x38(%ebp)
0875c021 +0x261:  mov    %ecx,0x8(%esp)
0875c025 +0x265:  mov    %edi,0x4(%esp)
0875c029 +0x269:  call   0875bdc0 <+0x0>
0875c02e +0x26e:  mov    0x18(%ebp),%eax
0875c031 +0x271:  mov    0x8(%ebp),%ecx
0875c034 +0x274:  mov    %eax,0xc(%esp)
0875c038 +0x278:  mov    0xc(%ebp),%eax
0875c03b +0x27b:  mov    %ecx,0x8(%esp)
0875c03f +0x27f:  mov    %eax,0x4(%esp)
0875c043 +0x283:  mov    %eax,(%esp)
0875c046 +0x286:  call   *0x124c8c(%ebx)
0875c04c +0x28c:  mov    0x18(%ebp),%ecx
0875c04f +0x28f:  mov    -0x38(%ebp),%edx
0875c052 +0x292:  mov    %ecx,0xc(%esp)
0875c056 +0x296:  mov    %edx,0x8(%esp)
0875c05a +0x29a:  mov    %eax,%edi
0875c05c +0x29c:  mov    0xc(%ebp),%eax
0875c05f +0x29f:  mov    %eax,0x4(%esp)
0875c063 +0x2a3:  mov    %eax,(%esp)
0875c066 +0x2a6:  call   *0x124c8c(%ebx)
0875c06c +0x2ac:  mov    0x18(%ebp),%edx
0875c06f +0x2af:  mov    0xc(%ebp),%ecx
0875c072 +0x2b2:  mov    %esi,0x4(%esp)
0875c076 +0x2b6:  mov    %esi,(%esp)
0875c079 +0x2b9:  mov    %edx,0xc(%esp)
0875c07d +0x2bd:  mov    %ecx,0x8(%esp)
0875c081 +0x2c1:  mov    %eax,-0x20(%ebp)
0875c084 +0x2c4:  call   *0x124c8c(%ebx)
0875c08a +0x2ca:  mov    0x8(%ebp),%ecx
0875c08d +0x2cd:  mov    -0x1c(%ebp),%edx
0875c090 +0x2d0:  add    0x18(%ebp),%edx
0875c093 +0x2d3:  add    -0x28(%ebp),%edi
0875c096 +0x2d6:  lea    (%ecx,%edx,4),%edx
0875c099 +0x2d9:  mov    (%edx),%ecx
0875c09b +0x2db:  add    %ecx,%edi
0875c09d +0x2dd:  add    -0x20(%ebp),%edi
0875c0a0 +0x2e0:  lea    (%edi,%eax,1),%eax
0875c0a3 +0x2e3:  cmp    %eax,%ecx
0875c0a5 +0x2e5:  mov    %eax,(%edx)
0875c0a7 +0x2e7:  jbe    0875bf51 <+0x191>
0875c0ad +0x2ed:  cmpl   $0x1,-0x1c(%ebp)
0875c0b1 +0x2f1:  jbe    0875bf51 <+0x191>
0875c0b7 +0x2f7:  mov    0x4(%edx),%ecx
0875c0ba +0x2fa:  mov    $0x1,%eax
0875c0bf +0x2ff:  add    $0x1,%ecx
0875c0c2 +0x302:  test   %ecx,%ecx
0875c0c4 +0x304:  mov    %ecx,0x4(%edx)
0875c0c7 +0x307:  jne    0875bf51 <+0x191>
0875c0cd +0x30d:  mov    -0x1c(%ebp),%esi
0875c0d0 +0x310:  jmp    0875c0e9 <+0x329>
0875c0d2 +0x312:  lea    0x0(%esi),%esi
0875c0d8 +0x318:  mov    (%edx,%eax,4),%ecx
0875c0db +0x31b:  add    $0x1,%ecx
0875c0de +0x31e:  test   %ecx,%ecx
0875c0e0 +0x320:  mov    %ecx,(%edx,%eax,4)
0875c0e3 +0x323:  jne    0875bf51 <+0x191>
0875c0e9 +0x329:  add    $0x1,%eax
0875c0ec +0x32c:  cmp    %eax,%esi
0875c0ee +0x32e:  ja     0875c0d8 <+0x318>
0875c0f0 +0x330:  add    $0x4c,%esp
0875c0f3 +0x333:  pop    %ebx
0875c0f4 +0x334:  pop    %esi
0875c0f5 +0x335:  pop    %edi
0875c0f6 +0x336:  pop    %ebp
0875c0f7 +0x337:  ret
0875c0f8 +0x338:  mov    -0x1c(%ebp),%edx
0875c0fb +0x33b:  mov    -0x30(%ebp),%ecx
0875c0fe +0x33e:  mov    0x10(%ebp),%eax
0875c101 +0x341:  mov    %edx,0xc(%esp)
0875c105 +0x345:  mov    0x8(%ebp),%edx
0875c108 +0x348:  mov    %ecx,0x8(%esp)
0875c10c +0x34c:  mov    %eax,0x4(%esp)
0875c110 +0x350:  mov    %edx,(%esp)
0875c113 +0x353:  call   *0x124c90(%ebx)
0875c119 +0x359:  mov    -0x1c(%ebp),%ecx
0875c11c +0x35c:  mov    -0x2c(%ebp),%edx
0875c11f +0x35f:  mov    0x8(%ebp),%esi
0875c122 +0x362:  mov    0x14(%ebp),%eax
0875c125 +0x365:  add    -0x28(%ebp),%esi
0875c128 +0x368:  mov    %ecx,0xc(%esp)
0875c12c +0x36c:  mov    %edx,0x4(%esp)
0875c130 +0x370:  mov    %eax,0x8(%esp)
0875c134 +0x374:  mov    %esi,(%esp)
0875c137 +0x377:  call   *0x124c90(%ebx)
0875c13d +0x37d:  mov    0x18(%ebp),%ecx
0875c140 +0x380:  mov    0xc(%ebp),%edi
0875c143 +0x383:  mov    -0x1c(%ebp),%eax
0875c146 +0x386:  mov    0x8(%ebp),%edx
0875c149 +0x389:  shl    $0x2,%ecx
0875c14c +0x38c:  mov    %ecx,-0x24(%ebp)
0875c14f +0x38f:  add    %ecx,%edi
0875c151 +0x391:  mov    0xc(%ebp),%ecx
0875c154 +0x394:  mov    %eax,0x10(%esp)
0875c158 +0x398:  mov    %esi,0xc(%esp)
0875c15c +0x39c:  mov    %edx,0x8(%esp)
0875c160 +0x3a0:  mov    %edi,0x4(%esp)
0875c164 +0x3a4:  mov    %ecx,(%esp)
0875c167 +0x3a7:  call   0875bdc0 <+0x0>
0875c16c +0x3ac:  movl   $0x0,-0x28(%ebp)
0875c173 +0x3b3:  jmp    0875bfe0 <+0x220>
0875c178 +0x3b8:  mov    -0x1c(%ebp),%ecx
0875c17b +0x3bb:  mov    -0x30(%ebp),%edx
0875c17e +0x3be:  mov    0x10(%ebp),%eax
0875c181 +0x3c1:  mov    %ecx,0xc(%esp)
0875c185 +0x3c5:  mov    0x8(%ebp),%ecx
0875c188 +0x3c8:  mov    %edx,0x4(%esp)
0875c18c +0x3cc:  mov    %eax,0x8(%esp)
0875c190 +0x3d0:  mov    %ecx,(%esp)
0875c193 +0x3d3:  call   *0x124c90(%ebx)
0875c199 +0x3d9:  mov    -0x2c(%ebp),%edx
0875c19c +0x3dc:  mov    0x14(%ebp),%ecx
0875c19f +0x3df:  mov    0x8(%ebp),%esi
0875c1a2 +0x3e2:  mov    -0x1c(%ebp),%eax
0875c1a5 +0x3e5:  add    -0x28(%ebp),%esi
0875c1a8 +0x3e8:  mov    %edx,0x8(%esp)
0875c1ac +0x3ec:  mov    %ecx,0x4(%esp)
0875c1b0 +0x3f0:  mov    %eax,0xc(%esp)
0875c1b4 +0x3f4:  mov    %esi,(%esp)
0875c1b7 +0x3f7:  call   *0x124c90(%ebx)
0875c1bd +0x3fd:  mov    0x18(%ebp),%eax
0875c1c0 +0x400:  mov    0xc(%ebp),%edi
0875c1c3 +0x403:  mov    -0x1c(%ebp),%edx
0875c1c6 +0x406:  mov    0x8(%ebp),%ecx
0875c1c9 +0x409:  shl    $0x2,%eax
0875c1cc +0x40c:  mov    %eax,-0x24(%ebp)
0875c1cf +0x40f:  add    %eax,%edi
0875c1d1 +0x411:  mov    0xc(%ebp),%eax
0875c1d4 +0x414:  mov    %edx,0x10(%esp)
0875c1d8 +0x418:  mov    %esi,0xc(%esp)
0875c1dc +0x41c:  mov    %ecx,0x8(%esp)
0875c1e0 +0x420:  mov    %edi,0x4(%esp)
0875c1e4 +0x424:  mov    %eax,(%esp)
0875c1e7 +0x427:  call   0875bdc0 <+0x0>
0875c1ec +0x42c:  movl   $0x0,-0x28(%ebp)
0875c1f3 +0x433:  jmp    0875bfe0 <+0x220>
0875c1f8 +0x438:  mov    -0x1c(%ebp),%eax
0875c1fb +0x43b:  mov    0x10(%ebp),%edx
0875c1fe +0x43e:  mov    -0x30(%ebp),%ecx
0875c201 +0x441:  mov    %eax,0xc(%esp)
0875c205 +0x445:  mov    0x8(%ebp),%eax
0875c208 +0x448:  mov    %edx,0x8(%esp)
0875c20c +0x44c:  mov    %ecx,0x4(%esp)
0875c210 +0x450:  mov    %eax,(%esp)
0875c213 +0x453:  call   *0x124c90(%ebx)
0875c219 +0x459:  mov    -0x1c(%ebp),%edx
0875c21c +0x45c:  mov    -0x2c(%ebp),%ecx
0875c21f +0x45f:  mov    0x8(%ebp),%esi
0875c222 +0x462:  mov    0x14(%ebp),%eax
0875c225 +0x465:  add    -0x28(%ebp),%esi
0875c228 +0x468:  mov    %edx,0xc(%esp)
0875c22c +0x46c:  mov    %ecx,0x8(%esp)
0875c230 +0x470:  mov    %eax,0x4(%esp)
0875c234 +0x474:  mov    %esi,(%esp)
0875c237 +0x477:  call   *0x124c90(%ebx)
0875c23d +0x47d:  mov    0x18(%ebp),%edx
0875c240 +0x480:  mov    0xc(%ebp),%edi
0875c243 +0x483:  mov    -0x1c(%ebp),%ecx
0875c246 +0x486:  mov    0x8(%ebp),%eax
0875c249 +0x489:  shl    $0x2,%edx
0875c24c +0x48c:  mov    %edx,-0x24(%ebp)
0875c24f +0x48f:  add    %edx,%edi
0875c251 +0x491:  mov    0xc(%ebp),%edx
0875c254 +0x494:  mov    %ecx,0x10(%esp)
0875c258 +0x498:  mov    %eax,0x8(%esp)
0875c25c +0x49c:  mov    %esi,0xc(%esp)
0875c260 +0x4a0:  mov    %edx,(%esp)
0875c263 +0x4a3:  mov    %edi,0x4(%esp)
0875c267 +0x4a7:  call   0875bdc0 <+0x0>
0875c26c +0x4ac:  mov    0xc(%ebp),%eax
0875c26f +0x4af:  mov    -0x1c(%ebp),%ecx
0875c272 +0x4b2:  add    -0x28(%ebp),%eax
0875c275 +0x4b5:  mov    %esi,0x8(%esp)
0875c279 +0x4b9:  mov    %ecx,0xc(%esp)
0875c27d +0x4bd:  mov    %eax,0x4(%esp)
0875c281 +0x4c1:  mov    %eax,(%esp)
0875c284 +0x4c4:  call   *0x124c90(%ebx)
0875c28a +0x4ca:  movl   $0xffffffff,-0x28(%ebp)
0875c291 +0x4d1:  jmp    0875bfe0 <+0x220>
0875c296 +0x4d6:  xchg   %ax,%ax
0875c298 +0x4d8:  movl   $0x0,-0x34(%ebp)
0875c29f +0x4df:  jmp    0875be40 <+0x80>
0875c2a4 +0x4e4:  lea    0x0(%esi,%eiz,1),%esi
0875c2a8 +0x4e8:  movl   $0x3,-0x34(%ebp)
0875c2af +0x4ef:  jmp    0875be40 <+0x80>
0875c2b4 +0x4f4:  lea    0x0(%esi,%eiz,1),%esi
0875c2b8 +0x4f8:  mov    $0x1,%eax
0875c2bd +0x4fd:  jmp    0875be7a <+0xba>
0875c2c2 +0x502:  lea    0x0(%esi),%esi
0875c2c8 +0x508:  mov    0x14(%ebp),%eax
0875c2cb +0x50b:  mov    0x10(%ebp),%edx
0875c2ce +0x50e:  mov    0x8(%ebp),%ecx
0875c2d1 +0x511:  mov    %eax,0x8(%esp)
0875c2d5 +0x515:  mov    %edx,0x4(%esp)
0875c2d9 +0x519:  mov    %ecx,(%esp)
0875c2dc +0x51c:  call   08759530 <_ZN8TaoCrypt8Portable9Multiply2EPjPKjS3_>  ; TaoCrypt::Portable::Multiply2(unsigned int*, unsigned int const*, unsigned int const*)
0875c2e1 +0x521:  jmp    0875bf51 <+0x191>
0875c2e6 +0x526:  mov    0x8(%ebp),%esi
0875c2e9 +0x529:  add    -0x28(%ebp),%esi
0875c2ec +0x52c:  mov    0xc(%ebp),%edi
0875c2ef +0x52f:  movl   $0x0,-0x28(%ebp)
0875c2f6 +0x536:  movl   $0x0,-0x24(%ebp)
0875c2fd +0x53d:  jmp    0875bfe0 <+0x220>
0875c302 +0x542:  lea    0x0(%esi,%eiz,1),%esi
0875c309 +0x549:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::RecursiveMultiply @ 0x875bdc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int
   const*, unsigned int) */

void TaoCrypt::RecursiveMultiply
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int local_38;
  int local_2c;
  int local_28;
  
  if (param_5 == 8) {
    PentiumOptimized::Multiply8(param_1,param_3,param_4);
    return;
  }
  if (param_5 == 4) {
    PentiumOptimized::Multiply4(param_1,param_3,param_4);
    return;
  }
  if (param_5 == 2) {
    Portable::Multiply2(param_1,param_3,param_4);
    return;
  }
  uVar2 = param_5 >> 1;
  puVar10 = param_3 + uVar2;
  puVar7 = param_3 + (uVar2 - 1);
  puVar8 = puVar10 + (uVar2 - 1);
  uVar3 = uVar2;
  do {
    if (uVar3 == 0) {
      local_38 = 0;
      goto LAB_0875be40;
    }
    uVar9 = *puVar7;
    uVar3 = uVar3 - 1;
    uVar1 = *puVar8;
    if (uVar1 < uVar9) {
      local_38 = 3;
      goto LAB_0875be40;
    }
    puVar7 = puVar7 + -1;
    puVar8 = puVar8 + -1;
  } while (uVar1 <= uVar9);
  local_38 = -3;
LAB_0875be40:
  puVar7 = param_4 + uVar2;
  puVar8 = param_4 + (uVar2 - 1);
  puVar11 = puVar7 + (uVar2 - 1);
  uVar3 = uVar2;
  do {
    iVar4 = 0;
    if (uVar3 == 0) goto LAB_0875be7a;
    uVar9 = *puVar8;
    uVar3 = uVar3 - 1;
    uVar1 = *puVar11;
    if (uVar1 < uVar9) {
      iVar4 = 1;
      goto LAB_0875be7a;
    }
    puVar8 = puVar8 + -1;
    puVar11 = puVar11 + -1;
  } while (uVar1 <= uVar9);
  iVar4 = -1;
LAB_0875be7a:
  iVar4 = iVar4 + local_38;
  if (iVar4 == -2) {
    (*s_pSub)(param_1,puVar10,param_3,uVar2);
    (*s_pSub)(param_1 + uVar2,param_4,puVar7,uVar2);
    local_28 = param_5 * 4;
    puVar8 = param_2 + param_5;
    RecursiveMultiply(param_2,puVar8,param_1,param_1 + uVar2,uVar2);
    local_2c = 0;
    goto LAB_0875bfe0;
  }
  if (iVar4 < -1) {
    if (iVar4 == -4) {
      (*s_pSub)(param_1,puVar10,param_3,uVar2);
      (*s_pSub)(param_1 + uVar2,param_4,puVar7,uVar2);
      local_28 = param_5 * 4;
      RecursiveMultiply(param_2,param_2 + param_5,param_1,param_1 + uVar2,uVar2);
      (*s_pSub)(param_2 + uVar2,param_2 + uVar2,param_1,uVar2);
      local_2c = -1;
      puVar8 = param_2 + param_5;
      goto LAB_0875bfe0;
    }
  }
  else {
    if (iVar4 == 2) {
      (*s_pSub)(param_1,param_3,puVar10,uVar2);
      (*s_pSub)(param_1 + uVar2,puVar7,param_4,uVar2);
      local_28 = param_5 * 4;
      puVar8 = param_2 + param_5;
      RecursiveMultiply(param_2,puVar8,param_1,param_1 + uVar2,uVar2);
      local_2c = 0;
      goto LAB_0875bfe0;
    }
    if (iVar4 == 4) {
      (*s_pSub)(param_1,puVar10,param_3,uVar2);
      puVar11 = param_1 + uVar2;
      (*s_pSub)(puVar11,param_4,puVar7,uVar2);
      local_28 = param_5 * 4;
      puVar8 = param_2 + param_5;
      RecursiveMultiply(param_2,puVar8,param_1,puVar11,uVar2);
      (*s_pSub)(param_2 + uVar2,param_2 + uVar2,puVar11,uVar2);
      local_2c = -1;
      goto LAB_0875bfe0;
    }
  }
  uVar3 = 0;
  if (param_5 == 0) {
    local_2c = 0;
    local_28 = 0;
    puVar8 = param_2;
  }
  else {
    do {
      param_2[uVar3] = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_5);
    local_28 = param_5 * 4;
    local_2c = 0;
    puVar8 = param_2 + param_5;
  }
LAB_0875bfe0:
  RecursiveMultiply(param_1,puVar8,param_3,param_4,uVar2);
  RecursiveMultiply((uint *)((int)param_1 + local_28),puVar8,puVar10,puVar7,uVar2);
  iVar4 = (*s_pAdd)(param_2,param_2,param_1,param_5);
  iVar5 = (*s_pAdd)(param_2,param_2,(uint *)((int)param_1 + local_28),param_5);
  iVar6 = (*s_pAdd)(param_1 + uVar2,param_1 + uVar2,param_2,param_5);
  puVar7 = param_1 + uVar2 + param_5;
  uVar9 = *puVar7;
  uVar3 = iVar4 + local_2c + uVar9 + iVar5 + iVar6;
  *puVar7 = uVar3;
  if ((uVar3 < uVar9) && (1 < uVar2)) {
    uVar3 = 1;
    uVar9 = puVar7[1] + 1;
    puVar7[1] = uVar9;
    while (uVar9 == 0) {
      uVar3 = uVar3 + 1;
      if (uVar2 <= uVar3) {
        return;
      }
      uVar9 = puVar7[uVar3] + 1;
      puVar7[uVar3] = uVar9;
    }
  }
  return;
}
```
