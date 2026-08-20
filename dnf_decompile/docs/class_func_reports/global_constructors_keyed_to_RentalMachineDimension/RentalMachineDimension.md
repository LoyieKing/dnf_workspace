# RentalMachineDimension

`_GLOBAL__I__ZN22RentalMachineDimensionC2Ev`

`global constructors keyed to RentalMachineDimension::RentalMachineDimension()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to RentalMachineDimension` | `0x0826f9fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826f9fe  _GLOBAL__I__ZN22RentalMachineDimensionC2Ev
#           global constructors keyed to RentalMachineDimension::RentalMachineDimension()
# range [0x0826f9fe, 0x0826ffff]
0826f9fe +0x000:  push   %ebp
0826f9ff +0x001:  mov    %esp,%ebp
0826fa01 +0x003:  sub    $0x18,%esp
0826fa04 +0x006:  movl   $0xffff,0x4(%esp)
0826fa0c +0x00e:  movl   $0x1,(%esp)
0826fa13 +0x015:  call   0826f9be <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0826fa18 +0x01a:  leave
0826fa19 +0x01b:  ret
0826fa1a +0x01c:  push   %ebp
0826fa1b +0x01d:  mov    %esp,%ebp
0826fa1d +0x01f:  sub    $0x18,%esp
0826fa20 +0x022:  mov    0x8(%ebp),%eax
0826fa23 +0x025:  movl   $&_ZTV14IRentalMachine+0x8,(%eax)
0826fa29 +0x02b:  mov    $0x0,%eax
0826fa2e +0x030:  test   %al,%al
0826fa30 +0x032:  je     0826fa3d <+0x3f>
0826fa32 +0x034:  mov    0x8(%ebp),%eax
0826fa35 +0x037:  mov    %eax,(%esp)
0826fa38 +0x03a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826fa3d +0x03f:  leave
0826fa3e +0x040:  ret
0826fa3f +0x041:  nop
0826fa40 +0x042:  push   %ebp
0826fa41 +0x043:  mov    %esp,%ebp
0826fa43 +0x045:  sub    $0x18,%esp
0826fa46 +0x048:  mov    0x8(%ebp),%eax
0826fa49 +0x04b:  mov    %eax,(%esp)
0826fa4c +0x04e:  call   0826fa1a <+0x1c>
0826fa51 +0x053:  mov    0x8(%ebp),%eax
0826fa54 +0x056:  mov    %eax,(%esp)
0826fa57 +0x059:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826fa5c +0x05e:  leave
0826fa5d +0x05f:  ret
0826fa5e +0x060:  push   %ebp
0826fa5f +0x061:  mov    %esp,%ebp
0826fa61 +0x063:  mov    0x8(%ebp),%eax
0826fa64 +0x066:  movl   $&_ZTV14IRentalMachine+0x8,(%eax)
0826fa6a +0x06c:  pop    %ebp
0826fa6b +0x06d:  ret
0826fa6c +0x06e:  push   %ebp
0826fa6d +0x06f:  mov    %esp,%ebp
0826fa6f +0x071:  sub    $0x18,%esp
0826fa72 +0x074:  mov    0x8(%ebp),%eax
0826fa75 +0x077:  add    $0x104,%eax
0826fa7a +0x07c:  mov    %eax,(%esp)
0826fa7d +0x07f:  call   081ab6de <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x30>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x30
0826fa82 +0x084:  mov    0x8(%ebp),%eax
0826fa85 +0x087:  movl   $0x104,0x8(%esp)
0826fa8d +0x08f:  movl   $0x0,0x4(%esp)
0826fa95 +0x097:  mov    %eax,(%esp)
0826fa98 +0x09a:  call   0807dcc0 <_init+0x5b8>
0826fa9d +0x09f:  leave
0826fa9e +0x0a0:  ret
0826fa9f +0x0a1:  nop
0826faa0 +0x0a2:  push   %ebp
0826faa1 +0x0a3:  mov    %esp,%ebp
0826faa3 +0x0a5:  sub    $0x18,%esp
0826faa6 +0x0a8:  mov    0x8(%ebp),%eax
0826faa9 +0x0ab:  add    $0xc,%eax
0826faac +0x0ae:  mov    %eax,(%esp)
0826faaf +0x0b1:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0826fab4 +0x0b6:  leave
0826fab5 +0x0b7:  ret
0826fab6 +0x0b8:  push   %ebp
0826fab7 +0x0b9:  mov    %esp,%ebp
0826fab9 +0x0bb:  sub    $0x18,%esp
0826fabc +0x0be:  mov    0xc(%ebp),%eax
0826fabf +0x0c1:  mov    (%eax),%edx
0826fac1 +0x0c3:  mov    0x8(%ebp),%eax
0826fac4 +0x0c6:  mov    %edx,(%eax)
0826fac6 +0x0c8:  mov    0xc(%ebp),%eax
0826fac9 +0x0cb:  mov    0x4(%eax),%edx
0826facc +0x0ce:  mov    0x8(%ebp),%eax
0826facf +0x0d1:  mov    %edx,0x4(%eax)
0826fad2 +0x0d4:  mov    0xc(%ebp),%eax
0826fad5 +0x0d7:  movzwl 0x8(%eax),%edx
0826fad9 +0x0db:  mov    0x8(%ebp),%eax
0826fadc +0x0de:  mov    %dx,0x8(%eax)
0826fae0 +0x0e2:  mov    0xc(%ebp),%eax
0826fae3 +0x0e5:  lea    0xc(%eax),%edx
0826fae6 +0x0e8:  mov    0x8(%ebp),%eax
0826fae9 +0x0eb:  add    $0xc,%eax
0826faec +0x0ee:  mov    %edx,0x4(%esp)
0826faf0 +0x0f2:  mov    %eax,(%esp)
0826faf3 +0x0f5:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
0826faf8 +0x0fa:  mov    0x8(%ebp),%eax
0826fafb +0x0fd:  leave
0826fafc +0x0fe:  ret
0826fafd +0x0ff:  nop
0826fafe +0x100:  push   %ebp
0826faff +0x101:  mov    %esp,%ebp
0826fb01 +0x103:  mov    0x8(%ebp),%eax
0826fb04 +0x106:  mov    0xc(%ebp),%edx
0826fb07 +0x109:  mov    %edx,(%eax)
0826fb09 +0x10b:  pop    %ebp
0826fb0a +0x10c:  ret
0826fb0b +0x10d:  nop
0826fb0c +0x10e:  push   %ebp
0826fb0d +0x10f:  mov    %esp,%ebp
0826fb0f +0x111:  sub    $0x18,%esp
0826fb12 +0x114:  mov    0x8(%ebp),%eax
0826fb15 +0x117:  add    $0x104,%eax
0826fb1a +0x11c:  mov    %eax,(%esp)
0826fb1d +0x11f:  call   081ab6ca <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x1c>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x1c
0826fb22 +0x124:  leave
0826fb23 +0x125:  ret
0826fb24 +0x126:  push   %ebp
0826fb25 +0x127:  mov    %esp,%ebp
0826fb27 +0x129:  push   %ebx
0826fb28 +0x12a:  sub    $0x14,%esp
0826fb2b +0x12d:  mov    0x8(%ebp),%eax
0826fb2e +0x130:  mov    (%eax),%ebx
0826fb30 +0x132:  test   %ebx,%ebx
0826fb32 +0x134:  je     0826fb44 <+0x146>
0826fb34 +0x136:  mov    %ebx,(%esp)
0826fb37 +0x139:  call   0826fb0c <+0x10e>
0826fb3c +0x13e:  mov    %ebx,(%esp)
0826fb3f +0x141:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826fb44 +0x146:  add    $0x14,%esp
0826fb47 +0x149:  pop    %ebx
0826fb48 +0x14a:  pop    %ebp
0826fb49 +0x14b:  ret
0826fb4a +0x14c:  push   %ebp
0826fb4b +0x14d:  mov    %esp,%ebp
0826fb4d +0x14f:  push   %ebx
0826fb4e +0x150:  sub    $0x24,%esp
0826fb51 +0x153:  mov    0x8(%ebp),%ebx
0826fb54 +0x156:  mov    0xc(%ebp),%eax
0826fb57 +0x159:  mov    (%eax),%eax
0826fb59 +0x15b:  mov    %eax,-0xc(%ebp)
0826fb5c +0x15e:  lea    -0xc(%ebp),%eax
0826fb5f +0x161:  mov    %eax,0x4(%esp)
0826fb63 +0x165:  mov    %ebx,(%esp)
0826fb66 +0x168:  call   0826fec0 <+0x4c2>
0826fb6b +0x16d:  mov    %ebx,%eax
0826fb6d +0x16f:  add    $0x24,%esp
0826fb70 +0x172:  pop    %ebx
0826fb71 +0x173:  pop    %ebp
0826fb72 +0x174:  ret    $0x4
0826fb75 +0x177:  nop
0826fb76 +0x178:  push   %ebp
0826fb77 +0x179:  mov    %esp,%ebp
0826fb79 +0x17b:  push   %ebx
0826fb7a +0x17c:  sub    $0x24,%esp
0826fb7d +0x17f:  mov    0x8(%ebp),%ebx
0826fb80 +0x182:  mov    0xc(%ebp),%eax
0826fb83 +0x185:  mov    0x4(%eax),%eax
0826fb86 +0x188:  mov    %eax,-0xc(%ebp)
0826fb89 +0x18b:  lea    -0xc(%ebp),%eax
0826fb8c +0x18e:  mov    %eax,0x4(%esp)
0826fb90 +0x192:  mov    %ebx,(%esp)
0826fb93 +0x195:  call   0826fec0 <+0x4c2>
0826fb98 +0x19a:  mov    %ebx,%eax
0826fb9a +0x19c:  add    $0x24,%esp
0826fb9d +0x19f:  pop    %ebx
0826fb9e +0x1a0:  pop    %ebp
0826fb9f +0x1a1:  ret    $0x4
0826fba2 +0x1a4:  push   %ebp
0826fba3 +0x1a5:  mov    %esp,%ebp
0826fba5 +0x1a7:  push   %ebx
0826fba6 +0x1a8:  sub    $0x14,%esp
0826fba9 +0x1ab:  mov    0x8(%ebp),%eax
0826fbac +0x1ae:  mov    %eax,(%esp)
0826fbaf +0x1b1:  call   0826fed0 <+0x4d2>
0826fbb4 +0x1b6:  mov    (%eax),%ebx
0826fbb6 +0x1b8:  mov    0xc(%ebp),%eax
0826fbb9 +0x1bb:  mov    %eax,(%esp)
0826fbbc +0x1be:  call   0826fed0 <+0x4d2>
0826fbc1 +0x1c3:  mov    (%eax),%eax
0826fbc3 +0x1c5:  cmp    %eax,%ebx
0826fbc5 +0x1c7:  setne  %al
0826fbc8 +0x1ca:  add    $0x14,%esp
0826fbcb +0x1cd:  pop    %ebx
0826fbcc +0x1ce:  pop    %ebp
0826fbcd +0x1cf:  ret
0826fbce +0x1d0:  push   %ebp
0826fbcf +0x1d1:  mov    %esp,%ebp
0826fbd1 +0x1d3:  mov    0x8(%ebp),%eax
0826fbd4 +0x1d6:  mov    (%eax),%eax
0826fbd6 +0x1d8:  lea    0x8(%eax),%edx
0826fbd9 +0x1db:  mov    0x8(%ebp),%eax
0826fbdc +0x1de:  mov    %edx,(%eax)
0826fbde +0x1e0:  mov    0x8(%ebp),%eax
0826fbe1 +0x1e3:  pop    %ebp
0826fbe2 +0x1e4:  ret
0826fbe3 +0x1e5:  nop
0826fbe4 +0x1e6:  push   %ebp
0826fbe5 +0x1e7:  mov    %esp,%ebp
0826fbe7 +0x1e9:  mov    0x8(%ebp),%eax
0826fbea +0x1ec:  mov    (%eax),%eax
0826fbec +0x1ee:  pop    %ebp
0826fbed +0x1ef:  ret
0826fbee +0x1f0:  push   %ebp
0826fbef +0x1f1:  mov    %esp,%ebp
0826fbf1 +0x1f3:  mov    0x8(%ebp),%eax
0826fbf4 +0x1f6:  mov    (%eax),%eax
0826fbf6 +0x1f8:  pop    %ebp
0826fbf7 +0x1f9:  ret
0826fbf8 +0x1fa:  push   %ebp
0826fbf9 +0x1fb:  mov    %esp,%ebp
0826fbfb +0x1fd:  push   %ebx
0826fbfc +0x1fe:  sub    $0x14,%esp
0826fbff +0x201:  mov    0x8(%ebp),%ebx
0826fc02 +0x204:  mov    0xc(%ebp),%eax
0826fc05 +0x207:  mov    %eax,0x4(%esp)
0826fc09 +0x20b:  mov    %ebx,(%esp)
0826fc0c +0x20e:  call   0826fed8 <+0x4da>
0826fc11 +0x213:  sub    $0x4,%esp
0826fc14 +0x216:  mov    %ebx,%eax
0826fc16 +0x218:  mov    -0x4(%ebp),%ebx
0826fc19 +0x21b:  leave
0826fc1a +0x21c:  ret    $0x4
0826fc1d +0x21f:  nop
0826fc1e +0x220:  push   %ebp
0826fc1f +0x221:  mov    %esp,%ebp
0826fc21 +0x223:  push   %ebx
0826fc22 +0x224:  sub    $0x14,%esp
0826fc25 +0x227:  mov    0x8(%ebp),%ebx
0826fc28 +0x22a:  mov    0xc(%ebp),%eax
0826fc2b +0x22d:  mov    %eax,0x4(%esp)
0826fc2f +0x231:  mov    %ebx,(%esp)
0826fc32 +0x234:  call   0826fefe <+0x500>
0826fc37 +0x239:  sub    $0x4,%esp
0826fc3a +0x23c:  mov    %ebx,%eax
0826fc3c +0x23e:  mov    -0x4(%ebp),%ebx
0826fc3f +0x241:  leave
0826fc40 +0x242:  ret    $0x4
0826fc43 +0x245:  nop
0826fc44 +0x246:  push   %ebp
0826fc45 +0x247:  mov    %esp,%ebp
0826fc47 +0x249:  mov    0x8(%ebp),%eax
0826fc4a +0x24c:  mov    (%eax),%edx
0826fc4c +0x24e:  mov    0xc(%ebp),%eax
0826fc4f +0x251:  mov    (%eax),%eax
0826fc51 +0x253:  cmp    %eax,%edx
0826fc53 +0x255:  setne  %al
0826fc56 +0x258:  pop    %ebp
0826fc57 +0x259:  ret
0826fc58 +0x25a:  push   %ebp
0826fc59 +0x25b:  mov    %esp,%ebp
0826fc5b +0x25d:  sub    $0x18,%esp
0826fc5e +0x260:  mov    0x8(%ebp),%eax
0826fc61 +0x263:  mov    (%eax),%eax
0826fc63 +0x265:  mov    %eax,(%esp)
0826fc66 +0x268:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
0826fc6b +0x26d:  mov    0x8(%ebp),%edx
0826fc6e +0x270:  mov    %eax,(%edx)
0826fc70 +0x272:  mov    0x8(%ebp),%eax
0826fc73 +0x275:  leave
0826fc74 +0x276:  ret
0826fc75 +0x277:  nop
0826fc76 +0x278:  push   %ebp
0826fc77 +0x279:  mov    %esp,%ebp
0826fc79 +0x27b:  mov    0x8(%ebp),%eax
0826fc7c +0x27e:  mov    (%eax),%eax
0826fc7e +0x280:  add    $0x10,%eax
0826fc81 +0x283:  pop    %ebp
0826fc82 +0x284:  ret
0826fc83 +0x285:  nop
0826fc84 +0x286:  push   %ebp
0826fc85 +0x287:  mov    %esp,%ebp
0826fc87 +0x289:  push   %ebx
0826fc88 +0x28a:  sub    $0x14,%esp
0826fc8b +0x28d:  mov    0x8(%ebp),%ebx
0826fc8e +0x290:  mov    0xc(%ebp),%eax
0826fc91 +0x293:  mov    %eax,0x4(%esp)
0826fc95 +0x297:  mov    %ebx,(%esp)
0826fc98 +0x29a:  call   0826ff24 <+0x526>
0826fc9d +0x29f:  sub    $0x4,%esp
0826fca0 +0x2a2:  mov    %ebx,%eax
0826fca2 +0x2a4:  mov    -0x4(%ebp),%ebx
0826fca5 +0x2a7:  leave
0826fca6 +0x2a8:  ret    $0x4
0826fca9 +0x2ab:  nop
0826fcaa +0x2ac:  push   %ebp
0826fcab +0x2ad:  mov    %esp,%ebp
0826fcad +0x2af:  push   %ebx
0826fcae +0x2b0:  sub    $0x14,%esp
0826fcb1 +0x2b3:  mov    0x8(%ebp),%ebx
0826fcb4 +0x2b6:  mov    0xc(%ebp),%eax
0826fcb7 +0x2b9:  mov    %eax,0x4(%esp)
0826fcbb +0x2bd:  mov    %ebx,(%esp)
0826fcbe +0x2c0:  call   0826ff4a <+0x54c>
0826fcc3 +0x2c5:  sub    $0x4,%esp
0826fcc6 +0x2c8:  mov    %ebx,%eax
0826fcc8 +0x2ca:  mov    -0x4(%ebp),%ebx
0826fccb +0x2cd:  leave
0826fccc +0x2ce:  ret    $0x4
0826fccf +0x2d1:  nop
0826fcd0 +0x2d2:  push   %ebp
0826fcd1 +0x2d3:  mov    %esp,%ebp
0826fcd3 +0x2d5:  mov    0x8(%ebp),%eax
0826fcd6 +0x2d8:  mov    (%eax),%edx
0826fcd8 +0x2da:  mov    0xc(%ebp),%eax
0826fcdb +0x2dd:  mov    (%eax),%eax
0826fcdd +0x2df:  cmp    %eax,%edx
0826fcdf +0x2e1:  setne  %al
0826fce2 +0x2e4:  pop    %ebp
0826fce3 +0x2e5:  ret
0826fce4 +0x2e6:  push   %ebp
0826fce5 +0x2e7:  mov    %esp,%ebp
0826fce7 +0x2e9:  sub    $0x18,%esp
0826fcea +0x2ec:  mov    0x8(%ebp),%eax
0826fced +0x2ef:  mov    (%eax),%eax
0826fcef +0x2f1:  mov    %eax,(%esp)
0826fcf2 +0x2f4:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
0826fcf7 +0x2f9:  mov    0x8(%ebp),%edx
0826fcfa +0x2fc:  mov    %eax,(%edx)
0826fcfc +0x2fe:  mov    0x8(%ebp),%eax
0826fcff +0x301:  leave
0826fd00 +0x302:  ret
0826fd01 +0x303:  nop
0826fd02 +0x304:  push   %ebp
0826fd03 +0x305:  mov    %esp,%ebp
0826fd05 +0x307:  mov    0x8(%ebp),%eax
0826fd08 +0x30a:  mov    (%eax),%eax
0826fd0a +0x30c:  add    $0x10,%eax
0826fd0d +0x30f:  pop    %ebp
0826fd0e +0x310:  ret
0826fd0f +0x311:  nop
0826fd10 +0x312:  push   %ebp
0826fd11 +0x313:  mov    %esp,%ebp
0826fd13 +0x315:  push   %ebx
0826fd14 +0x316:  sub    $0x24,%esp
0826fd17 +0x319:  mov    0x8(%ebp),%ebx
0826fd1a +0x31c:  mov    0xc(%ebp),%eax
0826fd1d +0x31f:  mov    (%eax),%eax
0826fd1f +0x321:  mov    %eax,-0xc(%ebp)
0826fd22 +0x324:  lea    -0xc(%ebp),%eax
0826fd25 +0x327:  mov    %eax,0x4(%esp)
0826fd29 +0x32b:  mov    %ebx,(%esp)
0826fd2c +0x32e:  call   0826ff70 <+0x572>
0826fd31 +0x333:  mov    %ebx,%eax
0826fd33 +0x335:  add    $0x24,%esp
0826fd36 +0x338:  pop    %ebx
0826fd37 +0x339:  pop    %ebp
0826fd38 +0x33a:  ret    $0x4
0826fd3b +0x33d:  nop
0826fd3c +0x33e:  push   %ebp
0826fd3d +0x33f:  mov    %esp,%ebp
0826fd3f +0x341:  push   %ebx
0826fd40 +0x342:  sub    $0x24,%esp
0826fd43 +0x345:  mov    0x8(%ebp),%ebx
0826fd46 +0x348:  mov    0xc(%ebp),%eax
0826fd49 +0x34b:  mov    0x4(%eax),%eax
0826fd4c +0x34e:  mov    %eax,-0xc(%ebp)
0826fd4f +0x351:  lea    -0xc(%ebp),%eax
0826fd52 +0x354:  mov    %eax,0x4(%esp)
0826fd56 +0x358:  mov    %ebx,(%esp)
0826fd59 +0x35b:  call   0826ff70 <+0x572>
0826fd5e +0x360:  mov    %ebx,%eax
0826fd60 +0x362:  add    $0x24,%esp
0826fd63 +0x365:  pop    %ebx
0826fd64 +0x366:  pop    %ebp
0826fd65 +0x367:  ret    $0x4
0826fd68 +0x36a:  push   %ebp
0826fd69 +0x36b:  mov    %esp,%ebp
0826fd6b +0x36d:  push   %ebx
0826fd6c +0x36e:  sub    $0x14,%esp
0826fd6f +0x371:  mov    0x8(%ebp),%eax
0826fd72 +0x374:  mov    %eax,(%esp)
0826fd75 +0x377:  call   0826ff80 <+0x582>
0826fd7a +0x37c:  mov    (%eax),%ebx
0826fd7c +0x37e:  mov    0xc(%ebp),%eax
0826fd7f +0x381:  mov    %eax,(%esp)
0826fd82 +0x384:  call   0826ff80 <+0x582>
0826fd87 +0x389:  mov    (%eax),%eax
0826fd89 +0x38b:  cmp    %eax,%ebx
0826fd8b +0x38d:  setne  %al
0826fd8e +0x390:  add    $0x14,%esp
0826fd91 +0x393:  pop    %ebx
0826fd92 +0x394:  pop    %ebp
0826fd93 +0x395:  ret
0826fd94 +0x396:  push   %ebp
0826fd95 +0x397:  mov    %esp,%ebp
0826fd97 +0x399:  mov    0x8(%ebp),%eax
0826fd9a +0x39c:  mov    (%eax),%eax
0826fd9c +0x39e:  lea    0xc(%eax),%edx
0826fd9f +0x3a1:  mov    0x8(%ebp),%eax
0826fda2 +0x3a4:  mov    %edx,(%eax)
0826fda4 +0x3a6:  mov    0x8(%ebp),%eax
0826fda7 +0x3a9:  pop    %ebp
0826fda8 +0x3aa:  ret
0826fda9 +0x3ab:  nop
0826fdaa +0x3ac:  push   %ebp
0826fdab +0x3ad:  mov    %esp,%ebp
0826fdad +0x3af:  mov    0x8(%ebp),%eax
0826fdb0 +0x3b2:  mov    (%eax),%eax
0826fdb2 +0x3b4:  pop    %ebp
0826fdb3 +0x3b5:  ret
0826fdb4 +0x3b6:  push   %ebp
0826fdb5 +0x3b7:  mov    %esp,%ebp
0826fdb7 +0x3b9:  push   %ebx
0826fdb8 +0x3ba:  sub    $0x24,%esp
0826fdbb +0x3bd:  mov    0x8(%ebp),%ebx
0826fdbe +0x3c0:  mov    0xc(%ebp),%eax
0826fdc1 +0x3c3:  mov    (%eax),%eax
0826fdc3 +0x3c5:  mov    %eax,-0xc(%ebp)
0826fdc6 +0x3c8:  lea    -0xc(%ebp),%eax
0826fdc9 +0x3cb:  mov    %eax,0x4(%esp)
0826fdcd +0x3cf:  mov    %ebx,(%esp)
0826fdd0 +0x3d2:  call   0826ff88 <+0x58a>
0826fdd5 +0x3d7:  mov    %ebx,%eax
0826fdd7 +0x3d9:  add    $0x24,%esp
0826fdda +0x3dc:  pop    %ebx
0826fddb +0x3dd:  pop    %ebp
0826fddc +0x3de:  ret    $0x4
0826fddf +0x3e1:  nop
0826fde0 +0x3e2:  push   %ebp
0826fde1 +0x3e3:  mov    %esp,%ebp
0826fde3 +0x3e5:  push   %ebx
0826fde4 +0x3e6:  sub    $0x24,%esp
0826fde7 +0x3e9:  mov    0x8(%ebp),%ebx
0826fdea +0x3ec:  mov    0xc(%ebp),%eax
0826fded +0x3ef:  mov    0x4(%eax),%eax
0826fdf0 +0x3f2:  mov    %eax,-0xc(%ebp)
0826fdf3 +0x3f5:  lea    -0xc(%ebp),%eax
0826fdf6 +0x3f8:  mov    %eax,0x4(%esp)
0826fdfa +0x3fc:  mov    %ebx,(%esp)
0826fdfd +0x3ff:  call   0826ff88 <+0x58a>
0826fe02 +0x404:  mov    %ebx,%eax
0826fe04 +0x406:  add    $0x24,%esp
0826fe07 +0x409:  pop    %ebx
0826fe08 +0x40a:  pop    %ebp
0826fe09 +0x40b:  ret    $0x4
0826fe0c +0x40e:  push   %ebp
0826fe0d +0x40f:  mov    %esp,%ebp
0826fe0f +0x411:  push   %ebx
0826fe10 +0x412:  sub    $0x14,%esp
0826fe13 +0x415:  mov    0x8(%ebp),%eax
0826fe16 +0x418:  mov    %eax,(%esp)
0826fe19 +0x41b:  call   0826ff98 <+0x59a>
0826fe1e +0x420:  mov    (%eax),%ebx
0826fe20 +0x422:  mov    0xc(%ebp),%eax
0826fe23 +0x425:  mov    %eax,(%esp)
0826fe26 +0x428:  call   0826ff98 <+0x59a>
0826fe2b +0x42d:  mov    (%eax),%eax
0826fe2d +0x42f:  cmp    %eax,%ebx
0826fe2f +0x431:  setne  %al
0826fe32 +0x434:  add    $0x14,%esp
0826fe35 +0x437:  pop    %ebx
0826fe36 +0x438:  pop    %ebp
0826fe37 +0x439:  ret
0826fe38 +0x43a:  push   %ebp
0826fe39 +0x43b:  mov    %esp,%ebp
0826fe3b +0x43d:  mov    0x8(%ebp),%eax
0826fe3e +0x440:  mov    (%eax),%eax
0826fe40 +0x442:  lea    0x18(%eax),%edx
0826fe43 +0x445:  mov    0x8(%ebp),%eax
0826fe46 +0x448:  mov    %edx,(%eax)
0826fe48 +0x44a:  mov    0x8(%ebp),%eax
0826fe4b +0x44d:  pop    %ebp
0826fe4c +0x44e:  ret
0826fe4d +0x44f:  nop
0826fe4e +0x450:  push   %ebp
0826fe4f +0x451:  mov    %esp,%ebp
0826fe51 +0x453:  mov    0x8(%ebp),%eax
0826fe54 +0x456:  mov    (%eax),%eax
0826fe56 +0x458:  pop    %ebp
0826fe57 +0x459:  ret
0826fe58 +0x45a:  push   %ebp
0826fe59 +0x45b:  mov    %esp,%ebp
0826fe5b +0x45d:  mov    0x8(%ebp),%eax
0826fe5e +0x460:  mov    0x4(%eax),%eax
0826fe61 +0x463:  mov    %eax,%edx
0826fe63 +0x465:  mov    0x8(%ebp),%eax
0826fe66 +0x468:  mov    (%eax),%eax
0826fe68 +0x46a:  mov    %edx,%ecx
0826fe6a +0x46c:  sub    %eax,%ecx
0826fe6c +0x46e:  mov    %ecx,%eax
0826fe6e +0x470:  sar    $0x2,%eax
0826fe71 +0x473:  imul   $0xaaaaaaab,%eax,%eax
0826fe77 +0x479:  pop    %ebp
0826fe78 +0x47a:  ret
0826fe79 +0x47b:  nop
0826fe7a +0x47c:  push   %ebp
0826fe7b +0x47d:  mov    %esp,%ebp
0826fe7d +0x47f:  sub    $0x18,%esp
0826fe80 +0x482:  mov    0xc(%ebp),%eax
0826fe83 +0x485:  mov    %eax,0x4(%esp)
0826fe87 +0x489:  mov    0x8(%ebp),%eax
0826fe8a +0x48c:  mov    %eax,(%esp)
0826fe8d +0x48f:  call   0826ffa0 <+0x5a2>
0826fe92 +0x494:  mov    0xc(%ebp),%eax
0826fe95 +0x497:  mov    %eax,0x4(%esp)
0826fe99 +0x49b:  mov    0x8(%ebp),%eax
0826fe9c +0x49e:  mov    %eax,(%esp)
0826fe9f +0x4a1:  call   0826ffca <+0x5cc>
0826fea4 +0x4a6:  leave
0826fea5 +0x4a7:  ret
0826fea6 +0x4a8:  push   %ebp
0826fea7 +0x4a9:  mov    %esp,%ebp
0826fea9 +0x4ab:  mov    0x8(%ebp),%eax
0826feac +0x4ae:  mov    (%eax),%ecx
0826feae +0x4b0:  mov    0xc(%ebp),%edx
0826feb1 +0x4b3:  mov    %edx,%eax
0826feb3 +0x4b5:  add    %eax,%eax
0826feb5 +0x4b7:  add    %edx,%eax
0826feb7 +0x4b9:  shl    $0x3,%eax
0826feba +0x4bc:  lea    (%ecx,%eax,1),%eax
0826febd +0x4bf:  pop    %ebp
0826febe +0x4c0:  ret
0826febf +0x4c1:  nop
0826fec0 +0x4c2:  push   %ebp
0826fec1 +0x4c3:  mov    %esp,%ebp
0826fec3 +0x4c5:  mov    0xc(%ebp),%eax
0826fec6 +0x4c8:  mov    (%eax),%edx
0826fec8 +0x4ca:  mov    0x8(%ebp),%eax
0826fecb +0x4cd:  mov    %edx,(%eax)
0826fecd +0x4cf:  pop    %ebp
0826fece +0x4d0:  ret
0826fecf +0x4d1:  nop
0826fed0 +0x4d2:  push   %ebp
0826fed1 +0x4d3:  mov    %esp,%ebp
0826fed3 +0x4d5:  mov    0x8(%ebp),%eax
0826fed6 +0x4d8:  pop    %ebp
0826fed7 +0x4d9:  ret
0826fed8 +0x4da:  push   %ebp
0826fed9 +0x4db:  mov    %esp,%ebp
0826fedb +0x4dd:  push   %ebx
0826fedc +0x4de:  sub    $0x14,%esp
0826fedf +0x4e1:  mov    0x8(%ebp),%ebx
0826fee2 +0x4e4:  mov    0xc(%ebp),%eax
0826fee5 +0x4e7:  mov    0xc(%eax),%eax
0826fee8 +0x4ea:  mov    %eax,0x4(%esp)
0826feec +0x4ee:  mov    %ebx,(%esp)
0826feef +0x4f1:  call   0826ffe4 <+0x5e6>
0826fef4 +0x4f6:  mov    %ebx,%eax
0826fef6 +0x4f8:  add    $0x14,%esp
0826fef9 +0x4fb:  pop    %ebx
0826fefa +0x4fc:  pop    %ebp
0826fefb +0x4fd:  ret    $0x4
0826fefe +0x500:  push   %ebp
0826feff +0x501:  mov    %esp,%ebp
0826ff01 +0x503:  push   %ebx
0826ff02 +0x504:  sub    $0x14,%esp
0826ff05 +0x507:  mov    0x8(%ebp),%ebx
0826ff08 +0x50a:  mov    0xc(%ebp),%eax
0826ff0b +0x50d:  add    $0x4,%eax
0826ff0e +0x510:  mov    %eax,0x4(%esp)
0826ff12 +0x514:  mov    %ebx,(%esp)
0826ff15 +0x517:  call   0826ffe4 <+0x5e6>
0826ff1a +0x51c:  mov    %ebx,%eax
0826ff1c +0x51e:  add    $0x14,%esp
0826ff1f +0x521:  pop    %ebx
0826ff20 +0x522:  pop    %ebp
0826ff21 +0x523:  ret    $0x4
0826ff24 +0x526:  push   %ebp
0826ff25 +0x527:  mov    %esp,%ebp
0826ff27 +0x529:  push   %ebx
0826ff28 +0x52a:  sub    $0x14,%esp
0826ff2b +0x52d:  mov    0x8(%ebp),%ebx
0826ff2e +0x530:  mov    0xc(%ebp),%eax
0826ff31 +0x533:  mov    0xc(%eax),%eax
0826ff34 +0x536:  mov    %eax,0x4(%esp)
0826ff38 +0x53a:  mov    %ebx,(%esp)
0826ff3b +0x53d:  call   0826fff2 <+0x5f4>
0826ff40 +0x542:  mov    %ebx,%eax
0826ff42 +0x544:  add    $0x14,%esp
0826ff45 +0x547:  pop    %ebx
0826ff46 +0x548:  pop    %ebp
0826ff47 +0x549:  ret    $0x4
0826ff4a +0x54c:  push   %ebp
0826ff4b +0x54d:  mov    %esp,%ebp
0826ff4d +0x54f:  push   %ebx
0826ff4e +0x550:  sub    $0x14,%esp
0826ff51 +0x553:  mov    0x8(%ebp),%ebx
0826ff54 +0x556:  mov    0xc(%ebp),%eax
0826ff57 +0x559:  add    $0x4,%eax
0826ff5a +0x55c:  mov    %eax,0x4(%esp)
0826ff5e +0x560:  mov    %ebx,(%esp)
0826ff61 +0x563:  call   0826fff2 <+0x5f4>
0826ff66 +0x568:  mov    %ebx,%eax
0826ff68 +0x56a:  add    $0x14,%esp
0826ff6b +0x56d:  pop    %ebx
0826ff6c +0x56e:  pop    %ebp
0826ff6d +0x56f:  ret    $0x4
0826ff70 +0x572:  push   %ebp
0826ff71 +0x573:  mov    %esp,%ebp
0826ff73 +0x575:  mov    0xc(%ebp),%eax
0826ff76 +0x578:  mov    (%eax),%edx
0826ff78 +0x57a:  mov    0x8(%ebp),%eax
0826ff7b +0x57d:  mov    %edx,(%eax)
0826ff7d +0x57f:  pop    %ebp
0826ff7e +0x580:  ret
0826ff7f +0x581:  nop
0826ff80 +0x582:  push   %ebp
0826ff81 +0x583:  mov    %esp,%ebp
0826ff83 +0x585:  mov    0x8(%ebp),%eax
0826ff86 +0x588:  pop    %ebp
0826ff87 +0x589:  ret
0826ff88 +0x58a:  push   %ebp
0826ff89 +0x58b:  mov    %esp,%ebp
0826ff8b +0x58d:  mov    0xc(%ebp),%eax
0826ff8e +0x590:  mov    (%eax),%edx
0826ff90 +0x592:  mov    0x8(%ebp),%eax
0826ff93 +0x595:  mov    %edx,(%eax)
0826ff95 +0x597:  pop    %ebp
0826ff96 +0x598:  ret
0826ff97 +0x599:  nop
0826ff98 +0x59a:  push   %ebp
0826ff99 +0x59b:  mov    %esp,%ebp
0826ff9b +0x59d:  mov    0x8(%ebp),%eax
0826ff9e +0x5a0:  pop    %ebp
0826ff9f +0x5a1:  ret
0826ffa0 +0x5a2:  push   %ebp
0826ffa1 +0x5a3:  mov    %esp,%ebp
0826ffa3 +0x5a5:  sub    $0x18,%esp
0826ffa6 +0x5a8:  mov    0x8(%ebp),%eax
0826ffa9 +0x5ab:  mov    %eax,(%esp)
0826ffac +0x5ae:  call   0826fe58 <+0x45a>
0826ffb1 +0x5b3:  cmp    0xc(%ebp),%eax
0826ffb4 +0x5b6:  setbe  %al
0826ffb7 +0x5b9:  test   %al,%al
0826ffb9 +0x5bb:  je     0826ffc7 <+0x5c9>
0826ffbb +0x5bd:  movl   $"vector::_M_range_check",(%esp)
0826ffc2 +0x5c4:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
0826ffc7 +0x5c9:  leave
0826ffc8 +0x5ca:  ret
0826ffc9 +0x5cb:  nop
0826ffca +0x5cc:  push   %ebp
0826ffcb +0x5cd:  mov    %esp,%ebp
0826ffcd +0x5cf:  mov    0x8(%ebp),%eax
0826ffd0 +0x5d2:  mov    (%eax),%ecx
0826ffd2 +0x5d4:  mov    0xc(%ebp),%edx
0826ffd5 +0x5d7:  mov    %edx,%eax
0826ffd7 +0x5d9:  add    %eax,%eax
0826ffd9 +0x5db:  add    %edx,%eax
0826ffdb +0x5dd:  shl    $0x2,%eax
0826ffde +0x5e0:  lea    (%ecx,%eax,1),%eax
0826ffe1 +0x5e3:  pop    %ebp
0826ffe2 +0x5e4:  ret
0826ffe3 +0x5e5:  nop
0826ffe4 +0x5e6:  push   %ebp
0826ffe5 +0x5e7:  mov    %esp,%ebp
0826ffe7 +0x5e9:  mov    0xc(%ebp),%edx
0826ffea +0x5ec:  mov    0x8(%ebp),%eax
0826ffed +0x5ef:  mov    %edx,(%eax)
0826ffef +0x5f1:  pop    %ebp
0826fff0 +0x5f2:  ret
0826fff1 +0x5f3:  nop
0826fff2 +0x5f4:  push   %ebp
0826fff3 +0x5f5:  mov    %esp,%ebp
0826fff5 +0x5f7:  mov    0xc(%ebp),%edx
0826fff8 +0x5fa:  mov    0x8(%ebp),%eax
0826fffb +0x5fd:  mov    %edx,(%eax)
0826fffd +0x5ff:  pop    %ebp
0826fffe +0x600:  ret
0826ffff +0x601:  nop
```

## 反编译 C

```c
// <global>::global @ 0x826f9fe

/* RentalMachineDimension::RentalMachineDimension() */

void RentalMachineDimension::_GLOBAL__I_RentalMachineDimension(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
