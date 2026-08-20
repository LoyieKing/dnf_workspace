# reset

`_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv`

`global constructors keyed to Secu_DungeonAverageCheck::reset()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Secu_DungeonAverageCheck` | `0x08279d13` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08279d13  _GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv
#           global constructors keyed to Secu_DungeonAverageCheck::reset()
# range [0x08279d13, 0x0827a7bb]
08279d13 +0x000:  push   %ebp
08279d14 +0x001:  mov    %esp,%ebp
08279d16 +0x003:  sub    $0x18,%esp
08279d19 +0x006:  movl   $0xffff,0x4(%esp)
08279d21 +0x00e:  movl   $0x1,(%esp)
08279d28 +0x015:  call   08279cd3 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08279d2d +0x01a:  leave
08279d2e +0x01b:  ret
08279d2f +0x01c:  nop
08279d30 +0x01d:  push   %ebp
08279d31 +0x01e:  mov    %esp,%ebp
08279d33 +0x020:  mov    0x8(%ebp),%eax
08279d36 +0x023:  mov    0xc(%ebp),%edx
08279d39 +0x026:  mov    %edx,(%eax)
08279d3b +0x028:  mov    0x8(%ebp),%eax
08279d3e +0x02b:  mov    0x10(%ebp),%edx
08279d41 +0x02e:  mov    %edx,0x4(%eax)
08279d44 +0x031:  mov    0x8(%ebp),%eax
08279d47 +0x034:  mov    0x14(%ebp),%edx
08279d4a +0x037:  mov    %edx,0x8(%eax)
08279d4d +0x03a:  mov    0x8(%ebp),%eax
08279d50 +0x03d:  mov    0x18(%ebp),%edx
08279d53 +0x040:  mov    %edx,0xc(%eax)
08279d56 +0x043:  mov    0x8(%ebp),%eax
08279d59 +0x046:  movl   $0x0,0x10(%eax)
08279d60 +0x04d:  mov    0x8(%ebp),%eax
08279d63 +0x050:  movl   $0x0,0x14(%eax)
08279d6a +0x057:  pop    %ebp
08279d6b +0x058:  ret
08279d6c +0x059:  push   %ebp
08279d6d +0x05a:  mov    %esp,%ebp
08279d6f +0x05c:  sub    $0x18,%esp
08279d72 +0x05f:  mov    0x8(%ebp),%eax
08279d75 +0x062:  mov    (%eax),%eax
08279d77 +0x064:  mov    %eax,0x4(%esp)
08279d7b +0x068:  mov    0x8(%ebp),%eax
08279d7e +0x06b:  mov    %eax,(%esp)
08279d81 +0x06e:  call   08279e62 <+0x14f>
08279d86 +0x073:  leave
08279d87 +0x074:  ret
08279d88 +0x075:  push   %ebp
08279d89 +0x076:  mov    %esp,%ebp
08279d8b +0x078:  push   %ebx
08279d8c +0x079:  sub    $0x14,%esp
08279d8f +0x07c:  mov    0x8(%ebp),%ebx
08279d92 +0x07f:  mov    0xc(%ebp),%eax
08279d95 +0x082:  add    $0x4,%eax
08279d98 +0x085:  mov    %eax,0x4(%esp)
08279d9c +0x089:  mov    %ebx,(%esp)
08279d9f +0x08c:  call   08279e98 <+0x185>
08279da4 +0x091:  mov    %ebx,%eax
08279da6 +0x093:  add    $0x14,%esp
08279da9 +0x096:  pop    %ebx
08279daa +0x097:  pop    %ebp
08279dab +0x098:  ret    $0x4
08279dae +0x09b:  push   %ebp
08279daf +0x09c:  mov    %esp,%ebp
08279db1 +0x09e:  push   %ebx
08279db2 +0x09f:  sub    $0x14,%esp
08279db5 +0x0a2:  mov    0x8(%ebp),%eax
08279db8 +0x0a5:  mov    %eax,(%esp)
08279dbb +0x0a8:  call   08279ea8 <+0x195>
08279dc0 +0x0ad:  mov    (%eax),%ebx
08279dc2 +0x0af:  mov    0xc(%ebp),%eax
08279dc5 +0x0b2:  mov    %eax,(%esp)
08279dc8 +0x0b5:  call   08279ea8 <+0x195>
08279dcd +0x0ba:  mov    (%eax),%eax
08279dcf +0x0bc:  cmp    %eax,%ebx
08279dd1 +0x0be:  setne  %al
08279dd4 +0x0c1:  add    $0x14,%esp
08279dd7 +0x0c4:  pop    %ebx
08279dd8 +0x0c5:  pop    %ebp
08279dd9 +0x0c6:  ret
08279dda +0x0c7:  push   %ebp
08279ddb +0x0c8:  mov    %esp,%ebp
08279ddd +0x0ca:  mov    0x8(%ebp),%eax
08279de0 +0x0cd:  mov    (%eax),%eax
08279de2 +0x0cf:  pop    %ebp
08279de3 +0x0d0:  ret
08279de4 +0x0d1:  push   %ebp
08279de5 +0x0d2:  mov    %esp,%ebp
08279de7 +0x0d4:  sub    $0x18,%esp
08279dea +0x0d7:  mov    0xc(%ebp),%eax
08279ded +0x0da:  mov    %eax,(%esp)
08279df0 +0x0dd:  call   08279eb0 <+0x19d>
08279df5 +0x0e2:  mov    %eax,0x4(%esp)
08279df9 +0x0e6:  mov    0x8(%ebp),%eax
08279dfc +0x0e9:  mov    %eax,(%esp)
08279dff +0x0ec:  call   08279eb8 <+0x1a5>
08279e04 +0x0f1:  leave
08279e05 +0x0f2:  ret
08279e06 +0x0f3:  push   %ebp
08279e07 +0x0f4:  mov    %esp,%ebp
08279e09 +0x0f6:  push   %ebx
08279e0a +0x0f7:  sub    $0x14,%esp
08279e0d +0x0fa:  mov    0x8(%ebp),%ebx
08279e10 +0x0fd:  mov    0xc(%ebp),%eax
08279e13 +0x100:  mov    %eax,0x4(%esp)
08279e17 +0x104:  mov    %ebx,(%esp)
08279e1a +0x107:  call   08279e98 <+0x185>
08279e1f +0x10c:  mov    %ebx,%eax
08279e21 +0x10e:  add    $0x14,%esp
08279e24 +0x111:  pop    %ebx
08279e25 +0x112:  pop    %ebp
08279e26 +0x113:  ret    $0x4
08279e29 +0x116:  nop
08279e2a +0x117:  push   %ebp
08279e2b +0x118:  mov    %esp,%ebp
08279e2d +0x11a:  mov    0x8(%ebp),%eax
08279e30 +0x11d:  mov    (%eax),%eax
08279e32 +0x11f:  lea    0x18(%eax),%edx
08279e35 +0x122:  mov    0x8(%ebp),%eax
08279e38 +0x125:  mov    %edx,(%eax)
08279e3a +0x127:  mov    0x8(%ebp),%eax
08279e3d +0x12a:  pop    %ebp
08279e3e +0x12b:  ret
08279e3f +0x12c:  nop
08279e40 +0x12d:  push   %ebp
08279e41 +0x12e:  mov    %esp,%ebp
08279e43 +0x130:  mov    0x8(%ebp),%eax
08279e46 +0x133:  pop    %ebp
08279e47 +0x134:  ret
08279e48 +0x135:  push   %ebp
08279e49 +0x136:  mov    %esp,%ebp
08279e4b +0x138:  sub    $0x18,%esp
08279e4e +0x13b:  mov    0xc(%ebp),%eax
08279e51 +0x13e:  mov    %eax,0x4(%esp)
08279e55 +0x142:  mov    0x8(%ebp),%eax
08279e58 +0x145:  mov    %eax,(%esp)
08279e5b +0x148:  call   08279f69 <+0x256>
08279e60 +0x14d:  leave
08279e61 +0x14e:  ret
08279e62 +0x14f:  push   %ebp
08279e63 +0x150:  mov    %esp,%ebp
08279e65 +0x152:  sub    $0x18,%esp
08279e68 +0x155:  mov    0x8(%ebp),%eax
08279e6b +0x158:  mov    %eax,(%esp)
08279e6e +0x15b:  call   08279e40 <+0x12d>
08279e73 +0x160:  mov    0x8(%ebp),%edx
08279e76 +0x163:  mov    0x4(%edx),%edx
08279e79 +0x166:  mov    %eax,0x8(%esp)
08279e7d +0x16a:  mov    %edx,0x4(%esp)
08279e81 +0x16e:  mov    0xc(%ebp),%eax
08279e84 +0x171:  mov    %eax,(%esp)
08279e87 +0x174:  call   08279e48 <+0x135>
08279e8c +0x179:  mov    0x8(%ebp),%eax
08279e8f +0x17c:  mov    0xc(%ebp),%edx
08279e92 +0x17f:  mov    %edx,0x4(%eax)
08279e95 +0x182:  leave
08279e96 +0x183:  ret
08279e97 +0x184:  nop
08279e98 +0x185:  push   %ebp
08279e99 +0x186:  mov    %esp,%ebp
08279e9b +0x188:  mov    0xc(%ebp),%eax
08279e9e +0x18b:  mov    (%eax),%edx
08279ea0 +0x18d:  mov    0x8(%ebp),%eax
08279ea3 +0x190:  mov    %edx,(%eax)
08279ea5 +0x192:  pop    %ebp
08279ea6 +0x193:  ret
08279ea7 +0x194:  nop
08279ea8 +0x195:  push   %ebp
08279ea9 +0x196:  mov    %esp,%ebp
08279eab +0x198:  mov    0x8(%ebp),%eax
08279eae +0x19b:  pop    %ebp
08279eaf +0x19c:  ret
08279eb0 +0x19d:  push   %ebp
08279eb1 +0x19e:  mov    %esp,%ebp
08279eb3 +0x1a0:  mov    0x8(%ebp),%eax
08279eb6 +0x1a3:  pop    %ebp
08279eb7 +0x1a4:  ret
08279eb8 +0x1a5:  push   %ebp
08279eb9 +0x1a6:  mov    %esp,%ebp
08279ebb +0x1a8:  push   %ebx
08279ebc +0x1a9:  sub    $0x24,%esp
08279ebf +0x1ac:  mov    0x8(%ebp),%eax
08279ec2 +0x1af:  mov    0x4(%eax),%edx
08279ec5 +0x1b2:  mov    0x8(%ebp),%eax
08279ec8 +0x1b5:  mov    0x8(%eax),%eax
08279ecb +0x1b8:  cmp    %eax,%edx
08279ecd +0x1ba:  je     08279f04 <+0x1f1>
08279ecf +0x1bc:  mov    0xc(%ebp),%eax
08279ed2 +0x1bf:  mov    %eax,(%esp)
08279ed5 +0x1c2:  call   08279f83 <+0x270>
08279eda +0x1c7:  mov    0x8(%ebp),%edx
08279edd +0x1ca:  mov    0x4(%edx),%ecx
08279ee0 +0x1cd:  mov    0x8(%ebp),%edx
08279ee3 +0x1d0:  mov    %eax,0x8(%esp)
08279ee7 +0x1d4:  mov    %ecx,0x4(%esp)
08279eeb +0x1d8:  mov    %edx,(%esp)
08279eee +0x1db:  call   08279f8c <+0x279>
08279ef3 +0x1e0:  mov    0x8(%ebp),%eax
08279ef6 +0x1e3:  mov    0x4(%eax),%eax
08279ef9 +0x1e6:  lea    0x18(%eax),%edx
08279efc +0x1e9:  mov    0x8(%ebp),%eax
08279eff +0x1ec:  mov    %edx,0x4(%eax)
08279f02 +0x1ef:  jmp    08279f3c <+0x229>
08279f04 +0x1f1:  mov    0xc(%ebp),%eax
08279f07 +0x1f4:  mov    %eax,(%esp)
08279f0a +0x1f7:  call   08279f83 <+0x270>
08279f0f +0x1fc:  mov    %eax,%ebx
08279f11 +0x1fe:  lea    -0xc(%ebp),%eax
08279f14 +0x201:  mov    0x8(%ebp),%edx
08279f17 +0x204:  mov    %edx,0x4(%esp)
08279f1b +0x208:  mov    %eax,(%esp)
08279f1e +0x20b:  call   08279d88 <+0x75>
08279f23 +0x210:  sub    $0x4,%esp
08279f26 +0x213:  mov    %ebx,0x8(%esp)
08279f2a +0x217:  mov    -0xc(%ebp),%eax
08279f2d +0x21a:  mov    %eax,0x4(%esp)
08279f31 +0x21e:  mov    0x8(%ebp),%eax
08279f34 +0x221:  mov    %eax,(%esp)
08279f37 +0x224:  call   08279fe2 <+0x2cf>
08279f3c +0x229:  mov    -0x4(%ebp),%ebx
08279f3f +0x22c:  leave
08279f40 +0x22d:  ret
08279f41 +0x22e:  nop
08279f42 +0x22f:  push   %ebp
08279f43 +0x230:  mov    %esp,%ebp
08279f45 +0x232:  sub    $0x18,%esp
08279f48 +0x235:  cmpl   $0x0,0xc(%ebp)
08279f4c +0x239:  je     08279f67 <+0x254>
08279f4e +0x23b:  mov    0x8(%ebp),%eax
08279f51 +0x23e:  mov    0x10(%ebp),%edx
08279f54 +0x241:  mov    %edx,0x8(%esp)
08279f58 +0x245:  mov    0xc(%ebp),%edx
08279f5b +0x248:  mov    %edx,0x4(%esp)
08279f5f +0x24c:  mov    %eax,(%esp)
08279f62 +0x24f:  call   0827a2ce <+0x5bb>
08279f67 +0x254:  leave
08279f68 +0x255:  ret
08279f69 +0x256:  push   %ebp
08279f6a +0x257:  mov    %esp,%ebp
08279f6c +0x259:  sub    $0x18,%esp
08279f6f +0x25c:  mov    0xc(%ebp),%eax
08279f72 +0x25f:  mov    %eax,0x4(%esp)
08279f76 +0x263:  mov    0x8(%ebp),%eax
08279f79 +0x266:  mov    %eax,(%esp)
08279f7c +0x269:  call   0827a2e1 <+0x5ce>
08279f81 +0x26e:  leave
08279f82 +0x26f:  ret
08279f83 +0x270:  push   %ebp
08279f84 +0x271:  mov    %esp,%ebp
08279f86 +0x273:  mov    0x8(%ebp),%eax
08279f89 +0x276:  pop    %ebp
08279f8a +0x277:  ret
08279f8b +0x278:  nop
08279f8c +0x279:  push   %ebp
08279f8d +0x27a:  mov    %esp,%ebp
08279f8f +0x27c:  push   %ebx
08279f90 +0x27d:  sub    $0x14,%esp
08279f93 +0x280:  mov    0x10(%ebp),%eax
08279f96 +0x283:  mov    %eax,(%esp)
08279f99 +0x286:  call   08279f83 <+0x270>
08279f9e +0x28b:  mov    %eax,%ebx
08279fa0 +0x28d:  mov    0xc(%ebp),%eax
08279fa3 +0x290:  mov    %eax,0x4(%esp)
08279fa7 +0x294:  movl   $0x18,(%esp)
08279fae +0x29b:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08279fb3 +0x2a0:  mov    %eax,%edx
08279fb5 +0x2a2:  test   %edx,%edx
08279fb7 +0x2a4:  je     08279fdb <+0x2c8>
08279fb9 +0x2a6:  mov    (%ebx),%edx
08279fbb +0x2a8:  mov    %edx,(%eax)
08279fbd +0x2aa:  mov    0x4(%ebx),%edx
08279fc0 +0x2ad:  mov    %edx,0x4(%eax)
08279fc3 +0x2b0:  mov    0x8(%ebx),%edx
08279fc6 +0x2b3:  mov    %edx,0x8(%eax)
08279fc9 +0x2b6:  mov    0xc(%ebx),%edx
08279fcc +0x2b9:  mov    %edx,0xc(%eax)
08279fcf +0x2bc:  mov    0x10(%ebx),%edx
08279fd2 +0x2bf:  mov    %edx,0x10(%eax)
08279fd5 +0x2c2:  mov    0x14(%ebx),%edx
08279fd8 +0x2c5:  mov    %edx,0x14(%eax)
08279fdb +0x2c8:  add    $0x14,%esp
08279fde +0x2cb:  pop    %ebx
08279fdf +0x2cc:  pop    %ebp
08279fe0 +0x2cd:  ret
08279fe1 +0x2ce:  nop
08279fe2 +0x2cf:  push   %ebp
08279fe3 +0x2d0:  mov    %esp,%ebp
08279fe5 +0x2d2:  push   %esi
08279fe6 +0x2d3:  push   %ebx
08279fe7 +0x2d4:  sub    $0x30,%esp
08279fea +0x2d7:  mov    0x8(%ebp),%eax
08279fed +0x2da:  mov    0x4(%eax),%edx
08279ff0 +0x2dd:  mov    0x8(%ebp),%eax
08279ff3 +0x2e0:  mov    0x8(%eax),%eax
08279ff6 +0x2e3:  cmp    %eax,%edx
08279ff8 +0x2e5:  je     0827a0a5 <+0x392>
08279ffe +0x2eb:  mov    0x8(%ebp),%eax
0827a001 +0x2ee:  mov    0x4(%eax),%eax
0827a004 +0x2f1:  sub    $0x18,%eax
0827a007 +0x2f4:  mov    %eax,(%esp)
0827a00a +0x2f7:  call   08279eb0 <+0x19d>
0827a00f +0x2fc:  mov    0x8(%ebp),%edx
0827a012 +0x2ff:  mov    0x4(%edx),%ecx
0827a015 +0x302:  mov    0x8(%ebp),%edx
0827a018 +0x305:  mov    %eax,0x8(%esp)
0827a01c +0x309:  mov    %ecx,0x4(%esp)
0827a020 +0x30d:  mov    %edx,(%esp)
0827a023 +0x310:  call   08279f8c <+0x279>
0827a028 +0x315:  mov    0x8(%ebp),%eax
0827a02b +0x318:  mov    0x4(%eax),%eax
0827a02e +0x31b:  lea    0x18(%eax),%edx
0827a031 +0x31e:  mov    0x8(%ebp),%eax
0827a034 +0x321:  mov    %edx,0x4(%eax)
0827a037 +0x324:  mov    0x8(%ebp),%eax
0827a03a +0x327:  mov    0x4(%eax),%eax
0827a03d +0x32a:  lea    -0x18(%eax),%esi
0827a040 +0x32d:  mov    0x8(%ebp),%eax
0827a043 +0x330:  mov    0x4(%eax),%eax
0827a046 +0x333:  lea    -0x30(%eax),%ebx
0827a049 +0x336:  lea    0xc(%ebp),%eax
0827a04c +0x339:  mov    %eax,(%esp)
0827a04f +0x33c:  call   08279ea8 <+0x195>
0827a054 +0x341:  mov    (%eax),%eax
0827a056 +0x343:  mov    %esi,0x8(%esp)
0827a05a +0x347:  mov    %ebx,0x4(%esp)
0827a05e +0x34b:  mov    %eax,(%esp)
0827a061 +0x34e:  call   0827a2e6 <+0x5d3>
0827a066 +0x353:  lea    0xc(%ebp),%eax
0827a069 +0x356:  mov    %eax,(%esp)
0827a06c +0x359:  call   0827a31e <+0x60b>
0827a071 +0x35e:  mov    %eax,%ebx
0827a073 +0x360:  mov    0x10(%ebp),%eax
0827a076 +0x363:  mov    %eax,(%esp)
0827a079 +0x366:  call   08279f83 <+0x270>
0827a07e +0x36b:  mov    (%eax),%edx
0827a080 +0x36d:  mov    %edx,(%ebx)
0827a082 +0x36f:  mov    0x4(%eax),%edx
0827a085 +0x372:  mov    %edx,0x4(%ebx)
0827a088 +0x375:  mov    0x8(%eax),%edx
0827a08b +0x378:  mov    %edx,0x8(%ebx)
0827a08e +0x37b:  mov    0xc(%eax),%edx
0827a091 +0x37e:  mov    %edx,0xc(%ebx)
0827a094 +0x381:  mov    0x10(%eax),%edx
0827a097 +0x384:  mov    %edx,0x10(%ebx)
0827a09a +0x387:  mov    0x14(%eax),%eax
0827a09d +0x38a:  mov    %eax,0x14(%ebx)
0827a0a0 +0x38d:  jmp    0827a2c4 <+0x5b1>
0827a0a5 +0x392:  movl   $"vector::_M_insert_aux",0x8(%esp)
0827a0ad +0x39a:  movl   $0x1,0x4(%esp)
0827a0b5 +0x3a2:  mov    0x8(%ebp),%eax
0827a0b8 +0x3a5:  mov    %eax,(%esp)
0827a0bb +0x3a8:  call   0827a328 <+0x615>
0827a0c0 +0x3ad:  mov    %eax,-0x18(%ebp)
0827a0c3 +0x3b0:  lea    -0x1c(%ebp),%eax
0827a0c6 +0x3b3:  mov    0x8(%ebp),%edx
0827a0c9 +0x3b6:  mov    %edx,0x4(%esp)
0827a0cd +0x3ba:  mov    %eax,(%esp)
0827a0d0 +0x3bd:  call   08279e06 <+0xf3>
0827a0d5 +0x3c2:  sub    $0x4,%esp
0827a0d8 +0x3c5:  lea    -0x1c(%ebp),%eax
0827a0db +0x3c8:  mov    %eax,0x4(%esp)
0827a0df +0x3cc:  lea    0xc(%ebp),%eax
0827a0e2 +0x3cf:  mov    %eax,(%esp)
0827a0e5 +0x3d2:  call   0827a3cd <+0x6ba>
0827a0ea +0x3d7:  mov    %eax,-0x14(%ebp)
0827a0ed +0x3da:  mov    0x8(%ebp),%eax
0827a0f0 +0x3dd:  mov    -0x18(%ebp),%edx
0827a0f3 +0x3e0:  mov    %edx,0x4(%esp)
0827a0f7 +0x3e4:  mov    %eax,(%esp)
0827a0fa +0x3e7:  call   0827a406 <+0x6f3>
0827a0ff +0x3ec:  mov    %eax,-0x10(%ebp)
0827a102 +0x3ef:  mov    -0x10(%ebp),%eax
0827a105 +0x3f2:  mov    %eax,-0xc(%ebp)
0827a108 +0x3f5:  mov    0x10(%ebp),%eax
0827a10b +0x3f8:  mov    %eax,(%esp)
0827a10e +0x3fb:  call   08279f83 <+0x270>
0827a113 +0x400:  mov    %eax,%ecx
0827a115 +0x402:  mov    -0x14(%ebp),%edx
0827a118 +0x405:  mov    %edx,%eax
0827a11a +0x407:  add    %eax,%eax
0827a11c +0x409:  add    %edx,%eax
0827a11e +0x40b:  shl    $0x3,%eax
0827a121 +0x40e:  mov    %eax,%edx
0827a123 +0x410:  add    -0x10(%ebp),%edx
0827a126 +0x413:  mov    0x8(%ebp),%eax
0827a129 +0x416:  mov    %ecx,0x8(%esp)
0827a12d +0x41a:  mov    %edx,0x4(%esp)
0827a131 +0x41e:  mov    %eax,(%esp)
0827a134 +0x421:  call   08279f8c <+0x279>
0827a139 +0x426:  movl   $0x0,-0xc(%ebp)
0827a140 +0x42d:  mov    0x8(%ebp),%eax
0827a143 +0x430:  mov    %eax,(%esp)
0827a146 +0x433:  call   08279e40 <+0x12d>
0827a14b +0x438:  mov    %eax,%ebx
0827a14d +0x43a:  lea    0xc(%ebp),%eax
0827a150 +0x43d:  mov    %eax,(%esp)
0827a153 +0x440:  call   08279ea8 <+0x195>
0827a158 +0x445:  mov    (%eax),%edx
0827a15a +0x447:  mov    0x8(%ebp),%eax
0827a15d +0x44a:  mov    (%eax),%eax
0827a15f +0x44c:  mov    %ebx,0xc(%esp)
0827a163 +0x450:  mov    -0x10(%ebp),%ecx
0827a166 +0x453:  mov    %ecx,0x8(%esp)
0827a16a +0x457:  mov    %edx,0x4(%esp)
0827a16e +0x45b:  mov    %eax,(%esp)
0827a171 +0x45e:  call   0827a435 <+0x722>
0827a176 +0x463:  mov    %eax,-0xc(%ebp)
0827a179 +0x466:  addl   $0x18,-0xc(%ebp)
0827a17d +0x46a:  mov    0x8(%ebp),%eax
0827a180 +0x46d:  mov    %eax,(%esp)
0827a183 +0x470:  call   08279e40 <+0x12d>
0827a188 +0x475:  mov    %eax,%ebx
0827a18a +0x477:  mov    0x8(%ebp),%eax
0827a18d +0x47a:  mov    0x4(%eax),%esi
0827a190 +0x47d:  lea    0xc(%ebp),%eax
0827a193 +0x480:  mov    %eax,(%esp)
0827a196 +0x483:  call   08279ea8 <+0x195>
0827a19b +0x488:  mov    (%eax),%eax
0827a19d +0x48a:  mov    %ebx,0xc(%esp)
0827a1a1 +0x48e:  mov    -0xc(%ebp),%edx
0827a1a4 +0x491:  mov    %edx,0x8(%esp)
0827a1a8 +0x495:  mov    %esi,0x4(%esp)
0827a1ac +0x499:  mov    %eax,(%esp)
0827a1af +0x49c:  call   0827a435 <+0x722>
0827a1b4 +0x4a1:  mov    %eax,-0xc(%ebp)
0827a1b7 +0x4a4:  mov    0x8(%ebp),%eax
0827a1ba +0x4a7:  mov    %eax,(%esp)
0827a1bd +0x4aa:  call   08279e40 <+0x12d>
0827a1c2 +0x4af:  mov    0x8(%ebp),%edx
0827a1c5 +0x4b2:  mov    0x4(%edx),%ecx
0827a1c8 +0x4b5:  mov    0x8(%ebp),%edx
0827a1cb +0x4b8:  mov    (%edx),%edx
0827a1cd +0x4ba:  mov    %eax,0x8(%esp)
0827a1d1 +0x4be:  mov    %ecx,0x4(%esp)
0827a1d5 +0x4c2:  mov    %edx,(%esp)
0827a1d8 +0x4c5:  call   08279e48 <+0x135>
0827a1dd +0x4ca:  mov    0x8(%ebp),%eax
0827a1e0 +0x4cd:  mov    0x8(%eax),%eax
0827a1e3 +0x4d0:  mov    %eax,%edx
0827a1e5 +0x4d2:  mov    0x8(%ebp),%eax
0827a1e8 +0x4d5:  mov    (%eax),%eax
0827a1ea +0x4d7:  mov    %edx,%ecx
0827a1ec +0x4d9:  sub    %eax,%ecx
0827a1ee +0x4db:  mov    %ecx,%eax
0827a1f0 +0x4dd:  sar    $0x3,%eax
0827a1f3 +0x4e0:  imul   $0xaaaaaaab,%eax,%eax
0827a1f9 +0x4e6:  mov    %eax,%ecx
0827a1fb +0x4e8:  mov    0x8(%ebp),%eax
0827a1fe +0x4eb:  mov    (%eax),%edx
0827a200 +0x4ed:  mov    0x8(%ebp),%eax
0827a203 +0x4f0:  mov    %ecx,0x8(%esp)
0827a207 +0x4f4:  mov    %edx,0x4(%esp)
0827a20b +0x4f8:  mov    %eax,(%esp)
0827a20e +0x4fb:  call   08279f42 <+0x22f>
0827a213 +0x500:  mov    0x8(%ebp),%eax
0827a216 +0x503:  mov    -0x10(%ebp),%edx
0827a219 +0x506:  mov    %edx,(%eax)
0827a21b +0x508:  mov    0x8(%ebp),%eax
0827a21e +0x50b:  mov    -0xc(%ebp),%edx
0827a221 +0x50e:  mov    %edx,0x4(%eax)
0827a224 +0x511:  mov    -0x18(%ebp),%edx
0827a227 +0x514:  mov    %edx,%eax
0827a229 +0x516:  add    %eax,%eax
0827a22b +0x518:  add    %edx,%eax
0827a22d +0x51a:  shl    $0x3,%eax
0827a230 +0x51d:  mov    %eax,%edx
0827a232 +0x51f:  add    -0x10(%ebp),%edx
0827a235 +0x522:  mov    0x8(%ebp),%eax
0827a238 +0x525:  mov    %edx,0x8(%eax)
0827a23b +0x528:  jmp    0827a2c4 <+0x5b1>
0827a240 +0x52d:  mov    %eax,(%esp)
0827a243 +0x530:  call   08725ce0 <__cxa_begin_catch>
0827a248 +0x535:  cmpl   $0x0,-0xc(%ebp)
0827a24c +0x539:  jne    0827a270 <+0x55d>
0827a24e +0x53b:  mov    -0x14(%ebp),%edx
0827a251 +0x53e:  mov    %edx,%eax
0827a253 +0x540:  add    %eax,%eax
0827a255 +0x542:  add    %edx,%eax
0827a257 +0x544:  shl    $0x3,%eax
0827a25a +0x547:  mov    %eax,%edx
0827a25c +0x549:  add    -0x10(%ebp),%edx
0827a25f +0x54c:  mov    0x8(%ebp),%eax
0827a262 +0x54f:  mov    %edx,0x4(%esp)
0827a266 +0x553:  mov    %eax,(%esp)
0827a269 +0x556:  call   0827a48e <+0x77b>
0827a26e +0x55b:  jmp    0827a291 <+0x57e>
0827a270 +0x55d:  mov    0x8(%ebp),%eax
0827a273 +0x560:  mov    %eax,(%esp)
0827a276 +0x563:  call   08279e40 <+0x12d>
0827a27b +0x568:  mov    %eax,0x8(%esp)
0827a27f +0x56c:  mov    -0xc(%ebp),%eax
0827a282 +0x56f:  mov    %eax,0x4(%esp)
0827a286 +0x573:  mov    -0x10(%ebp),%eax
0827a289 +0x576:  mov    %eax,(%esp)
0827a28c +0x579:  call   08279e48 <+0x135>
0827a291 +0x57e:  mov    0x8(%ebp),%eax
0827a294 +0x581:  mov    -0x18(%ebp),%edx
0827a297 +0x584:  mov    %edx,0x8(%esp)
0827a29b +0x588:  mov    -0x10(%ebp),%edx
0827a29e +0x58b:  mov    %edx,0x4(%esp)
0827a2a2 +0x58f:  mov    %eax,(%esp)
0827a2a5 +0x592:  call   08279f42 <+0x22f>
0827a2aa +0x597:  call   08724be0 <__cxa_rethrow>
0827a2af +0x59c:  mov    %edx,%ebx
0827a2b1 +0x59e:  mov    %eax,%esi
0827a2b3 +0x5a0:  call   08725c30 <__cxa_end_catch>
0827a2b8 +0x5a5:  mov    %esi,%eax
0827a2ba +0x5a7:  mov    %ebx,%edx
0827a2bc +0x5a9:  mov    %eax,(%esp)
0827a2bf +0x5ac:  call   08ae3750 <_Unwind_Resume>
0827a2c4 +0x5b1:  lea    -0x8(%ebp),%esp
0827a2c7 +0x5b4:  add    $0x0,%esp
0827a2ca +0x5b7:  pop    %ebx
0827a2cb +0x5b8:  pop    %esi
0827a2cc +0x5b9:  pop    %ebp
0827a2cd +0x5ba:  ret
0827a2ce +0x5bb:  push   %ebp
0827a2cf +0x5bc:  mov    %esp,%ebp
0827a2d1 +0x5be:  sub    $0x18,%esp
0827a2d4 +0x5c1:  mov    0xc(%ebp),%eax
0827a2d7 +0x5c4:  mov    %eax,(%esp)
0827a2da +0x5c7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0827a2df +0x5cc:  leave
0827a2e0 +0x5cd:  ret
0827a2e1 +0x5ce:  push   %ebp
0827a2e2 +0x5cf:  mov    %esp,%ebp
0827a2e4 +0x5d1:  pop    %ebp
0827a2e5 +0x5d2:  ret
0827a2e6 +0x5d3:  push   %ebp
0827a2e7 +0x5d4:  mov    %esp,%ebp
0827a2e9 +0x5d6:  push   %ebx
0827a2ea +0x5d7:  sub    $0x14,%esp
0827a2ed +0x5da:  mov    0xc(%ebp),%eax
0827a2f0 +0x5dd:  mov    %eax,(%esp)
0827a2f3 +0x5e0:  call   0827a4a1 <+0x78e>
0827a2f8 +0x5e5:  mov    %eax,%ebx
0827a2fa +0x5e7:  mov    0x8(%ebp),%eax
0827a2fd +0x5ea:  mov    %eax,(%esp)
0827a300 +0x5ed:  call   0827a4a1 <+0x78e>
0827a305 +0x5f2:  mov    0x10(%ebp),%edx
0827a308 +0x5f5:  mov    %edx,0x8(%esp)
0827a30c +0x5f9:  mov    %ebx,0x4(%esp)
0827a310 +0x5fd:  mov    %eax,(%esp)
0827a313 +0x600:  call   0827a4a9 <+0x796>
0827a318 +0x605:  add    $0x14,%esp
0827a31b +0x608:  pop    %ebx
0827a31c +0x609:  pop    %ebp
0827a31d +0x60a:  ret
0827a31e +0x60b:  push   %ebp
0827a31f +0x60c:  mov    %esp,%ebp
0827a321 +0x60e:  mov    0x8(%ebp),%eax
0827a324 +0x611:  mov    (%eax),%eax
0827a326 +0x613:  pop    %ebp
0827a327 +0x614:  ret
0827a328 +0x615:  push   %ebp
0827a329 +0x616:  mov    %esp,%ebp
0827a32b +0x618:  push   %ebx
0827a32c +0x619:  sub    $0x24,%esp
0827a32f +0x61c:  mov    0x8(%ebp),%eax
0827a332 +0x61f:  mov    %eax,(%esp)
0827a335 +0x622:  call   0827a510 <+0x7fd>
0827a33a +0x627:  mov    %eax,%ebx
0827a33c +0x629:  mov    0x8(%ebp),%eax
0827a33f +0x62c:  mov    %eax,(%esp)
0827a342 +0x62f:  call   0827a4ee <+0x7db>
0827a347 +0x634:  mov    %ebx,%edx
0827a349 +0x636:  sub    %eax,%edx
0827a34b +0x638:  mov    0xc(%ebp),%eax
0827a34e +0x63b:  cmp    %eax,%edx
0827a350 +0x63d:  setb   %al
0827a353 +0x640:  test   %al,%al
0827a355 +0x642:  je     0827a362 <+0x64f>
0827a357 +0x644:  mov    0x10(%ebp),%eax
0827a35a +0x647:  mov    %eax,(%esp)
0827a35d +0x64a:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0827a362 +0x64f:  mov    0x8(%ebp),%eax
0827a365 +0x652:  mov    %eax,(%esp)
0827a368 +0x655:  call   0827a4ee <+0x7db>
0827a36d +0x65a:  mov    %eax,%ebx
0827a36f +0x65c:  mov    0x8(%ebp),%eax
0827a372 +0x65f:  mov    %eax,(%esp)
0827a375 +0x662:  call   0827a4ee <+0x7db>
0827a37a +0x667:  mov    %eax,-0x10(%ebp)
0827a37d +0x66a:  lea    0xc(%ebp),%eax
0827a380 +0x66d:  mov    %eax,0x4(%esp)
0827a384 +0x671:  lea    -0x10(%ebp),%eax
0827a387 +0x674:  mov    %eax,(%esp)
0827a38a +0x677:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0827a38f +0x67c:  mov    (%eax),%eax
0827a391 +0x67e:  lea    (%ebx,%eax,1),%eax
0827a394 +0x681:  mov    %eax,-0xc(%ebp)
0827a397 +0x684:  mov    0x8(%ebp),%eax
0827a39a +0x687:  mov    %eax,(%esp)
0827a39d +0x68a:  call   0827a4ee <+0x7db>
0827a3a2 +0x68f:  cmp    -0xc(%ebp),%eax
0827a3a5 +0x692:  ja     0827a3b7 <+0x6a4>
0827a3a7 +0x694:  mov    0x8(%ebp),%eax
0827a3aa +0x697:  mov    %eax,(%esp)
0827a3ad +0x69a:  call   0827a510 <+0x7fd>
0827a3b2 +0x69f:  cmp    -0xc(%ebp),%eax
0827a3b5 +0x6a2:  jae    0827a3c4 <+0x6b1>
0827a3b7 +0x6a4:  mov    0x8(%ebp),%eax
0827a3ba +0x6a7:  mov    %eax,(%esp)
0827a3bd +0x6aa:  call   0827a510 <+0x7fd>
0827a3c2 +0x6af:  jmp    0827a3c7 <+0x6b4>
0827a3c4 +0x6b1:  mov    -0xc(%ebp),%eax
0827a3c7 +0x6b4:  add    $0x24,%esp
0827a3ca +0x6b7:  pop    %ebx
0827a3cb +0x6b8:  pop    %ebp
0827a3cc +0x6b9:  ret
0827a3cd +0x6ba:  push   %ebp
0827a3ce +0x6bb:  mov    %esp,%ebp
0827a3d0 +0x6bd:  push   %ebx
0827a3d1 +0x6be:  sub    $0x14,%esp
0827a3d4 +0x6c1:  mov    0x8(%ebp),%eax
0827a3d7 +0x6c4:  mov    %eax,(%esp)
0827a3da +0x6c7:  call   08279ea8 <+0x195>
0827a3df +0x6cc:  mov    (%eax),%eax
0827a3e1 +0x6ce:  mov    %eax,%ebx
0827a3e3 +0x6d0:  mov    0xc(%ebp),%eax
0827a3e6 +0x6d3:  mov    %eax,(%esp)
0827a3e9 +0x6d6:  call   08279ea8 <+0x195>
0827a3ee +0x6db:  mov    (%eax),%eax
0827a3f0 +0x6dd:  mov    %ebx,%edx
0827a3f2 +0x6df:  sub    %eax,%edx
0827a3f4 +0x6e1:  mov    %edx,%eax
0827a3f6 +0x6e3:  sar    $0x3,%eax
0827a3f9 +0x6e6:  imul   $0xaaaaaaab,%eax,%eax
0827a3ff +0x6ec:  add    $0x14,%esp
0827a402 +0x6ef:  pop    %ebx
0827a403 +0x6f0:  pop    %ebp
0827a404 +0x6f1:  ret
0827a405 +0x6f2:  nop
0827a406 +0x6f3:  push   %ebp
0827a407 +0x6f4:  mov    %esp,%ebp
0827a409 +0x6f6:  sub    $0x18,%esp
0827a40c +0x6f9:  cmpl   $0x0,0xc(%ebp)
0827a410 +0x6fd:  je     0827a42e <+0x71b>
0827a412 +0x6ff:  mov    0x8(%ebp),%eax
0827a415 +0x702:  movl   $0x0,0x8(%esp)
0827a41d +0x70a:  mov    0xc(%ebp),%edx
0827a420 +0x70d:  mov    %edx,0x4(%esp)
0827a424 +0x711:  mov    %eax,(%esp)
0827a427 +0x714:  call   0827a52c <+0x819>
0827a42c +0x719:  jmp    0827a433 <+0x720>
0827a42e +0x71b:  mov    $0x0,%eax
0827a433 +0x720:  leave
0827a434 +0x721:  ret
0827a435 +0x722:  push   %ebp
0827a436 +0x723:  mov    %esp,%ebp
0827a438 +0x725:  sub    $0x28,%esp
0827a43b +0x728:  lea    -0x10(%ebp),%eax
0827a43e +0x72b:  lea    0xc(%ebp),%edx
0827a441 +0x72e:  mov    %edx,0x4(%esp)
0827a445 +0x732:  mov    %eax,(%esp)
0827a448 +0x735:  call   0827a56a <+0x857>
0827a44d +0x73a:  sub    $0x4,%esp
0827a450 +0x73d:  lea    -0xc(%ebp),%eax
0827a453 +0x740:  lea    0x8(%ebp),%edx
0827a456 +0x743:  mov    %edx,0x4(%esp)
0827a45a +0x747:  mov    %eax,(%esp)
0827a45d +0x74a:  call   0827a56a <+0x857>
0827a462 +0x74f:  sub    $0x4,%esp
0827a465 +0x752:  mov    0x14(%ebp),%eax
0827a468 +0x755:  mov    %eax,0xc(%esp)
0827a46c +0x759:  mov    0x10(%ebp),%eax
0827a46f +0x75c:  mov    %eax,0x8(%esp)
0827a473 +0x760:  mov    -0x10(%ebp),%eax
0827a476 +0x763:  mov    %eax,0x4(%esp)
0827a47a +0x767:  mov    -0xc(%ebp),%eax
0827a47d +0x76a:  mov    %eax,(%esp)
0827a480 +0x76d:  call   0827a58f <+0x87c>
0827a485 +0x772:  leave
0827a486 +0x773:  ret
0827a487 +0x774:  nop
0827a488 +0x775:  push   %ebp
0827a489 +0x776:  mov    %esp,%ebp
0827a48b +0x778:  pop    %ebp
0827a48c +0x779:  ret
0827a48d +0x77a:  nop
0827a48e +0x77b:  push   %ebp
0827a48f +0x77c:  mov    %esp,%ebp
0827a491 +0x77e:  sub    $0x18,%esp
0827a494 +0x781:  mov    0xc(%ebp),%eax
0827a497 +0x784:  mov    %eax,(%esp)
0827a49a +0x787:  call   0827a488 <+0x775>
0827a49f +0x78c:  leave
0827a4a0 +0x78d:  ret
0827a4a1 +0x78e:  push   %ebp
0827a4a2 +0x78f:  mov    %esp,%ebp
0827a4a4 +0x791:  mov    0x8(%ebp),%eax
0827a4a7 +0x794:  pop    %ebp
0827a4a8 +0x795:  ret
0827a4a9 +0x796:  push   %ebp
0827a4aa +0x797:  mov    %esp,%ebp
0827a4ac +0x799:  push   %esi
0827a4ad +0x79a:  push   %ebx
0827a4ae +0x79b:  sub    $0x10,%esp
0827a4b1 +0x79e:  mov    0x10(%ebp),%eax
0827a4b4 +0x7a1:  mov    %eax,(%esp)
0827a4b7 +0x7a4:  call   0827a5b0 <+0x89d>
0827a4bc +0x7a9:  mov    %eax,%esi
0827a4be +0x7ab:  mov    0xc(%ebp),%eax
0827a4c1 +0x7ae:  mov    %eax,(%esp)
0827a4c4 +0x7b1:  call   0827a5b0 <+0x89d>
0827a4c9 +0x7b6:  mov    %eax,%ebx
0827a4cb +0x7b8:  mov    0x8(%ebp),%eax
0827a4ce +0x7bb:  mov    %eax,(%esp)
0827a4d1 +0x7be:  call   0827a5b0 <+0x89d>
0827a4d6 +0x7c3:  mov    %esi,0x8(%esp)
0827a4da +0x7c7:  mov    %ebx,0x4(%esp)
0827a4de +0x7cb:  mov    %eax,(%esp)
0827a4e1 +0x7ce:  call   0827a5b8 <+0x8a5>
0827a4e6 +0x7d3:  add    $0x10,%esp
0827a4e9 +0x7d6:  pop    %ebx
0827a4ea +0x7d7:  pop    %esi
0827a4eb +0x7d8:  pop    %ebp
0827a4ec +0x7d9:  ret
0827a4ed +0x7da:  nop
0827a4ee +0x7db:  push   %ebp
0827a4ef +0x7dc:  mov    %esp,%ebp
0827a4f1 +0x7de:  mov    0x8(%ebp),%eax
0827a4f4 +0x7e1:  mov    0x4(%eax),%eax
0827a4f7 +0x7e4:  mov    %eax,%edx
0827a4f9 +0x7e6:  mov    0x8(%ebp),%eax
0827a4fc +0x7e9:  mov    (%eax),%eax
0827a4fe +0x7eb:  mov    %edx,%ecx
0827a500 +0x7ed:  sub    %eax,%ecx
0827a502 +0x7ef:  mov    %ecx,%eax
0827a504 +0x7f1:  sar    $0x3,%eax
0827a507 +0x7f4:  imul   $0xaaaaaaab,%eax,%eax
0827a50d +0x7fa:  pop    %ebp
0827a50e +0x7fb:  ret
0827a50f +0x7fc:  nop
0827a510 +0x7fd:  push   %ebp
0827a511 +0x7fe:  mov    %esp,%ebp
0827a513 +0x800:  sub    $0x18,%esp
0827a516 +0x803:  mov    0x8(%ebp),%eax
0827a519 +0x806:  mov    %eax,(%esp)
0827a51c +0x809:  call   0827a5de <+0x8cb>
0827a521 +0x80e:  mov    %eax,(%esp)
0827a524 +0x811:  call   0827a5e6 <+0x8d3>
0827a529 +0x816:  leave
0827a52a +0x817:  ret
0827a52b +0x818:  nop
0827a52c +0x819:  push   %ebp
0827a52d +0x81a:  mov    %esp,%ebp
0827a52f +0x81c:  sub    $0x18,%esp
0827a532 +0x81f:  mov    0x8(%ebp),%eax
0827a535 +0x822:  mov    %eax,(%esp)
0827a538 +0x825:  call   0827a5e6 <+0x8d3>
0827a53d +0x82a:  cmp    0xc(%ebp),%eax
0827a540 +0x82d:  setb   %al
0827a543 +0x830:  movzbl %al,%eax
0827a546 +0x833:  test   %eax,%eax
0827a548 +0x835:  setne  %al
0827a54b +0x838:  test   %al,%al
0827a54d +0x83a:  je     0827a554 <+0x841>
0827a54f +0x83c:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0827a554 +0x841:  mov    0xc(%ebp),%edx
0827a557 +0x844:  mov    %edx,%eax
0827a559 +0x846:  add    %eax,%eax
0827a55b +0x848:  add    %edx,%eax
0827a55d +0x84a:  shl    $0x3,%eax
0827a560 +0x84d:  mov    %eax,(%esp)
0827a563 +0x850:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0827a568 +0x855:  leave
0827a569 +0x856:  ret
0827a56a +0x857:  push   %ebp
0827a56b +0x858:  mov    %esp,%ebp
0827a56d +0x85a:  push   %ebx
0827a56e +0x85b:  sub    $0x14,%esp
0827a571 +0x85e:  mov    0x8(%ebp),%ebx
0827a574 +0x861:  mov    0xc(%ebp),%eax
0827a577 +0x864:  mov    (%eax),%eax
0827a579 +0x866:  mov    %eax,0x4(%esp)
0827a57d +0x86a:  mov    %ebx,(%esp)
0827a580 +0x86d:  call   0827a5f0 <+0x8dd>
0827a585 +0x872:  mov    %ebx,%eax
0827a587 +0x874:  add    $0x14,%esp
0827a58a +0x877:  pop    %ebx
0827a58b +0x878:  pop    %ebp
0827a58c +0x879:  ret    $0x4
0827a58f +0x87c:  push   %ebp
0827a590 +0x87d:  mov    %esp,%ebp
0827a592 +0x87f:  sub    $0x18,%esp
0827a595 +0x882:  mov    0x10(%ebp),%eax
0827a598 +0x885:  mov    %eax,0x8(%esp)
0827a59c +0x889:  mov    0xc(%ebp),%eax
0827a59f +0x88c:  mov    %eax,0x4(%esp)
0827a5a3 +0x890:  mov    0x8(%ebp),%eax
0827a5a6 +0x893:  mov    %eax,(%esp)
0827a5a9 +0x896:  call   0827a5fd <+0x8ea>
0827a5ae +0x89b:  leave
0827a5af +0x89c:  ret
0827a5b0 +0x89d:  push   %ebp
0827a5b1 +0x89e:  mov    %esp,%ebp
0827a5b3 +0x8a0:  mov    0x8(%ebp),%eax
0827a5b6 +0x8a3:  pop    %ebp
0827a5b7 +0x8a4:  ret
0827a5b8 +0x8a5:  push   %ebp
0827a5b9 +0x8a6:  mov    %esp,%ebp
0827a5bb +0x8a8:  sub    $0x28,%esp
0827a5be +0x8ab:  movb   $0x0,-0x9(%ebp)
0827a5c2 +0x8af:  mov    0x10(%ebp),%eax
0827a5c5 +0x8b2:  mov    %eax,0x8(%esp)
0827a5c9 +0x8b6:  mov    0xc(%ebp),%eax
0827a5cc +0x8b9:  mov    %eax,0x4(%esp)
0827a5d0 +0x8bd:  mov    0x8(%ebp),%eax
0827a5d3 +0x8c0:  mov    %eax,(%esp)
0827a5d6 +0x8c3:  call   0827a61e <+0x90b>
0827a5db +0x8c8:  leave
0827a5dc +0x8c9:  ret
0827a5dd +0x8ca:  nop
0827a5de +0x8cb:  push   %ebp
0827a5df +0x8cc:  mov    %esp,%ebp
0827a5e1 +0x8ce:  mov    0x8(%ebp),%eax
0827a5e4 +0x8d1:  pop    %ebp
0827a5e5 +0x8d2:  ret
0827a5e6 +0x8d3:  push   %ebp
0827a5e7 +0x8d4:  mov    %esp,%ebp
0827a5e9 +0x8d6:  mov    $0xaaaaaaa,%eax
0827a5ee +0x8db:  pop    %ebp
0827a5ef +0x8dc:  ret
0827a5f0 +0x8dd:  push   %ebp
0827a5f1 +0x8de:  mov    %esp,%ebp
0827a5f3 +0x8e0:  mov    0x8(%ebp),%eax
0827a5f6 +0x8e3:  mov    0xc(%ebp),%edx
0827a5f9 +0x8e6:  mov    %edx,(%eax)
0827a5fb +0x8e8:  pop    %ebp
0827a5fc +0x8e9:  ret
0827a5fd +0x8ea:  push   %ebp
0827a5fe +0x8eb:  mov    %esp,%ebp
0827a600 +0x8ed:  sub    $0x18,%esp
0827a603 +0x8f0:  mov    0x10(%ebp),%eax
0827a606 +0x8f3:  mov    %eax,0x8(%esp)
0827a60a +0x8f7:  mov    0xc(%ebp),%eax
0827a60d +0x8fa:  mov    %eax,0x4(%esp)
0827a611 +0x8fe:  mov    0x8(%ebp),%eax
0827a614 +0x901:  mov    %eax,(%esp)
0827a617 +0x904:  call   0827a68f <+0x97c>
0827a61c +0x909:  leave
0827a61d +0x90a:  ret
0827a61e +0x90b:  push   %ebp
0827a61f +0x90c:  mov    %esp,%ebp
0827a621 +0x90e:  push   %ebx
0827a622 +0x90f:  sub    $0x24,%esp
0827a625 +0x912:  mov    0xc(%ebp),%edx
0827a628 +0x915:  mov    0x8(%ebp),%eax
0827a62b +0x918:  mov    %edx,%ecx
0827a62d +0x91a:  sub    %eax,%ecx
0827a62f +0x91c:  mov    %ecx,%eax
0827a631 +0x91e:  sar    $0x3,%eax
0827a634 +0x921:  imul   $0xaaaaaaab,%eax,%eax
0827a63a +0x927:  mov    %eax,-0xc(%ebp)
0827a63d +0x92a:  jmp    0827a67b <+0x968>
0827a63f +0x92c:  subl   $0x18,0x10(%ebp)
0827a643 +0x930:  mov    0x10(%ebp),%ebx
0827a646 +0x933:  subl   $0x18,0xc(%ebp)
0827a64a +0x937:  mov    0xc(%ebp),%eax
0827a64d +0x93a:  mov    %eax,(%esp)
0827a650 +0x93d:  call   08279eb0 <+0x19d>
0827a655 +0x942:  mov    (%eax),%edx
0827a657 +0x944:  mov    %edx,(%ebx)
0827a659 +0x946:  mov    0x4(%eax),%edx
0827a65c +0x949:  mov    %edx,0x4(%ebx)
0827a65f +0x94c:  mov    0x8(%eax),%edx
0827a662 +0x94f:  mov    %edx,0x8(%ebx)
0827a665 +0x952:  mov    0xc(%eax),%edx
0827a668 +0x955:  mov    %edx,0xc(%ebx)
0827a66b +0x958:  mov    0x10(%eax),%edx
0827a66e +0x95b:  mov    %edx,0x10(%ebx)
0827a671 +0x95e:  mov    0x14(%eax),%eax
0827a674 +0x961:  mov    %eax,0x14(%ebx)
0827a677 +0x964:  subl   $0x1,-0xc(%ebp)
0827a67b +0x968:  cmpl   $0x0,-0xc(%ebp)
0827a67f +0x96c:  setg   %al
0827a682 +0x96f:  test   %al,%al
0827a684 +0x971:  jne    0827a63f <+0x92c>
0827a686 +0x973:  mov    0x10(%ebp),%eax
0827a689 +0x976:  add    $0x24,%esp
0827a68c +0x979:  pop    %ebx
0827a68d +0x97a:  pop    %ebp
0827a68e +0x97b:  ret
0827a68f +0x97c:  push   %ebp
0827a690 +0x97d:  mov    %esp,%ebp
0827a692 +0x97f:  push   %esi
0827a693 +0x980:  push   %ebx
0827a694 +0x981:  sub    $0x20,%esp
0827a697 +0x984:  mov    0x10(%ebp),%eax
0827a69a +0x987:  mov    %eax,-0xc(%ebp)
0827a69d +0x98a:  jmp    0827a6f6 <+0x9e3>
0827a69f +0x98c:  lea    0x8(%ebp),%eax
0827a6a2 +0x98f:  mov    %eax,(%esp)
0827a6a5 +0x992:  call   0827a77e <+0xa6b>
0827a6aa +0x997:  mov    %eax,%ebx
0827a6ac +0x999:  mov    -0xc(%ebp),%eax
0827a6af +0x99c:  mov    %eax,0x4(%esp)
0827a6b3 +0x9a0:  movl   $0x18,(%esp)
0827a6ba +0x9a7:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0827a6bf +0x9ac:  mov    %eax,%edx
0827a6c1 +0x9ae:  test   %edx,%edx
0827a6c3 +0x9b0:  je     0827a6e7 <+0x9d4>
0827a6c5 +0x9b2:  mov    (%ebx),%edx
0827a6c7 +0x9b4:  mov    %edx,(%eax)
0827a6c9 +0x9b6:  mov    0x4(%ebx),%edx
0827a6cc +0x9b9:  mov    %edx,0x4(%eax)
0827a6cf +0x9bc:  mov    0x8(%ebx),%edx
0827a6d2 +0x9bf:  mov    %edx,0x8(%eax)
0827a6d5 +0x9c2:  mov    0xc(%ebx),%edx
0827a6d8 +0x9c5:  mov    %edx,0xc(%eax)
0827a6db +0x9c8:  mov    0x10(%ebx),%edx
0827a6de +0x9cb:  mov    %edx,0x10(%eax)
0827a6e1 +0x9ce:  mov    0x14(%ebx),%edx
0827a6e4 +0x9d1:  mov    %edx,0x14(%eax)
0827a6e7 +0x9d4:  lea    0x8(%ebp),%eax
0827a6ea +0x9d7:  mov    %eax,(%esp)
0827a6ed +0x9da:  call   0827a768 <+0xa55>
0827a6f2 +0x9df:  addl   $0x18,-0xc(%ebp)
0827a6f6 +0x9e3:  lea    0xc(%ebp),%eax
0827a6f9 +0x9e6:  mov    %eax,0x4(%esp)
0827a6fd +0x9ea:  lea    0x8(%ebp),%eax
0827a700 +0x9ed:  mov    %eax,(%esp)
0827a703 +0x9f0:  call   0827a74a <+0xa37>
0827a708 +0x9f5:  test   %al,%al
0827a70a +0x9f7:  jne    0827a69f <+0x98c>
0827a70c +0x9f9:  mov    -0xc(%ebp),%eax
0827a70f +0x9fc:  add    $0x20,%esp
0827a712 +0x9ff:  pop    %ebx
0827a713 +0xa00:  pop    %esi
0827a714 +0xa01:  pop    %ebp
0827a715 +0xa02:  ret
0827a716 +0xa03:  mov    %eax,(%esp)
0827a719 +0xa06:  call   08725ce0 <__cxa_begin_catch>
0827a71e +0xa0b:  mov    -0xc(%ebp),%eax
0827a721 +0xa0e:  mov    %eax,0x4(%esp)
0827a725 +0xa12:  mov    0x10(%ebp),%eax
0827a728 +0xa15:  mov    %eax,(%esp)
0827a72b +0xa18:  call   08279f69 <+0x256>
0827a730 +0xa1d:  call   08724be0 <__cxa_rethrow>
0827a735 +0xa22:  mov    %edx,%ebx
0827a737 +0xa24:  mov    %eax,%esi
0827a739 +0xa26:  call   08725c30 <__cxa_end_catch>
0827a73e +0xa2b:  mov    %esi,%eax
0827a740 +0xa2d:  mov    %ebx,%edx
0827a742 +0xa2f:  mov    %eax,(%esp)
0827a745 +0xa32:  call   08ae3750 <_Unwind_Resume>
0827a74a +0xa37:  push   %ebp
0827a74b +0xa38:  mov    %esp,%ebp
0827a74d +0xa3a:  sub    $0x18,%esp
0827a750 +0xa3d:  mov    0xc(%ebp),%eax
0827a753 +0xa40:  mov    %eax,0x4(%esp)
0827a757 +0xa44:  mov    0x8(%ebp),%eax
0827a75a +0xa47:  mov    %eax,(%esp)
0827a75d +0xa4a:  call   0827a788 <+0xa75>
0827a762 +0xa4f:  xor    $0x1,%eax
0827a765 +0xa52:  leave
0827a766 +0xa53:  ret
0827a767 +0xa54:  nop
0827a768 +0xa55:  push   %ebp
0827a769 +0xa56:  mov    %esp,%ebp
0827a76b +0xa58:  mov    0x8(%ebp),%eax
0827a76e +0xa5b:  mov    (%eax),%eax
0827a770 +0xa5d:  lea    0x18(%eax),%edx
0827a773 +0xa60:  mov    0x8(%ebp),%eax
0827a776 +0xa63:  mov    %edx,(%eax)
0827a778 +0xa65:  mov    0x8(%ebp),%eax
0827a77b +0xa68:  pop    %ebp
0827a77c +0xa69:  ret
0827a77d +0xa6a:  nop
0827a77e +0xa6b:  push   %ebp
0827a77f +0xa6c:  mov    %esp,%ebp
0827a781 +0xa6e:  mov    0x8(%ebp),%eax
0827a784 +0xa71:  mov    (%eax),%eax
0827a786 +0xa73:  pop    %ebp
0827a787 +0xa74:  ret
0827a788 +0xa75:  push   %ebp
0827a789 +0xa76:  mov    %esp,%ebp
0827a78b +0xa78:  push   %ebx
0827a78c +0xa79:  sub    $0x14,%esp
0827a78f +0xa7c:  mov    0x8(%ebp),%eax
0827a792 +0xa7f:  mov    %eax,(%esp)
0827a795 +0xa82:  call   0827a7b2 <+0xa9f>
0827a79a +0xa87:  mov    %eax,%ebx
0827a79c +0xa89:  mov    0xc(%ebp),%eax
0827a79f +0xa8c:  mov    %eax,(%esp)
0827a7a2 +0xa8f:  call   0827a7b2 <+0xa9f>
0827a7a7 +0xa94:  cmp    %eax,%ebx
0827a7a9 +0xa96:  sete   %al
0827a7ac +0xa99:  add    $0x14,%esp
0827a7af +0xa9c:  pop    %ebx
0827a7b0 +0xa9d:  pop    %ebp
0827a7b1 +0xa9e:  ret
0827a7b2 +0xa9f:  push   %ebp
0827a7b3 +0xaa0:  mov    %esp,%ebp
0827a7b5 +0xaa2:  mov    0x8(%ebp),%eax
0827a7b8 +0xaa5:  mov    (%eax),%eax
0827a7ba +0xaa7:  pop    %ebp
0827a7bb +0xaa8:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8279d13

/* Secu_DungeonAverageCheck::reset() */

void Secu_DungeonAverageCheck::_GLOBAL__I_reset(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
