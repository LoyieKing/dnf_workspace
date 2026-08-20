# CDBConnector

`_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr`

`global constructors keyed to CDBConnector::CDBConnector(DBMgr*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CDBConnector` | `0x080ecd1b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ecd1b  _GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr
#           global constructors keyed to CDBConnector::CDBConnector(DBMgr*)
# range [0x080ecd1b, 0x080edcbb]
080ecd1b +0x000:  push   %ebp
080ecd1c +0x001:  mov    %esp,%ebp
080ecd1e +0x003:  sub    $0x18,%esp
080ecd21 +0x006:  movl   $0xffff,0x4(%esp)
080ecd29 +0x00e:  movl   $0x1,(%esp)
080ecd30 +0x015:  call   080eccdb <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080ecd35 +0x01a:  leave
080ecd36 +0x01b:  ret
080ecd37 +0x01c:  nop
080ecd38 +0x01d:  push   %ebp
080ecd39 +0x01e:  mov    %esp,%ebp
080ecd3b +0x020:  sub    $0x18,%esp
080ecd3e +0x023:  mov    0x8(%ebp),%eax
080ecd41 +0x026:  movl   $0x11,0x8(%esp)
080ecd49 +0x02e:  movl   $0x0,0x4(%esp)
080ecd51 +0x036:  mov    %eax,(%esp)
080ecd54 +0x039:  call   0807dcc0 <_init+0x5b8>
080ecd59 +0x03e:  mov    0x8(%ebp),%eax
080ecd5c +0x041:  add    $0x18,%eax
080ecd5f +0x044:  movl   $0x15,0x8(%esp)
080ecd67 +0x04c:  movl   $0x0,0x4(%esp)
080ecd6f +0x054:  mov    %eax,(%esp)
080ecd72 +0x057:  call   0807dcc0 <_init+0x5b8>
080ecd77 +0x05c:  mov    0x8(%ebp),%eax
080ecd7a +0x05f:  add    $0x2d,%eax
080ecd7d +0x062:  movl   $0x15,0x8(%esp)
080ecd85 +0x06a:  movl   $0x0,0x4(%esp)
080ecd8d +0x072:  mov    %eax,(%esp)
080ecd90 +0x075:  call   0807dcc0 <_init+0x5b8>
080ecd95 +0x07a:  mov    0x8(%ebp),%eax
080ecd98 +0x07d:  add    $0x42,%eax
080ecd9b +0x080:  movl   $0x1f,0x8(%esp)
080ecda3 +0x088:  movl   $0x0,0x4(%esp)
080ecdab +0x090:  mov    %eax,(%esp)
080ecdae +0x093:  call   0807dcc0 <_init+0x5b8>
080ecdb3 +0x098:  mov    0x8(%ebp),%eax
080ecdb6 +0x09b:  add    $0x61,%eax
080ecdb9 +0x09e:  movl   $0x100,0x8(%esp)
080ecdc1 +0x0a6:  movl   $0x0,0x4(%esp)
080ecdc9 +0x0ae:  mov    %eax,(%esp)
080ecdcc +0x0b1:  call   0807dcc0 <_init+0x5b8>
080ecdd1 +0x0b6:  mov    0x8(%ebp),%eax
080ecdd4 +0x0b9:  movl   $0x0,0x14(%eax)
080ecddb +0x0c0:  mov    0x8(%ebp),%eax
080ecdde +0x0c3:  movl   $0x0,0x164(%eax)
080ecde8 +0x0cd:  leave
080ecde9 +0x0ce:  ret
080ecdea +0x0cf:  push   %ebp
080ecdeb +0x0d0:  mov    %esp,%ebp
080ecded +0x0d2:  sub    $0x18,%esp
080ecdf0 +0x0d5:  mov    0x8(%ebp),%eax
080ecdf3 +0x0d8:  mov    0xc(%eax),%eax
080ecdf6 +0x0db:  test   %eax,%eax
080ecdf8 +0x0dd:  je     080ece19 <+0xfe>
080ecdfa +0x0df:  mov    0xc(%ebp),%eax
080ecdfd +0x0e2:  mov    %eax,0x4(%esp)
080ece01 +0x0e6:  mov    0x8(%ebp),%eax
080ece04 +0x0e9:  mov    %eax,(%esp)
080ece07 +0x0ec:  call   080e22d0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x76>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x76
080ece0c +0x0f1:  xor    $0x1,%eax
080ece0f +0x0f4:  test   %al,%al
080ece11 +0x0f6:  jne    080ece19 <+0xfe>
080ece13 +0x0f8:  cmpl   $0x0,0x14(%ebp)
080ece17 +0x0fc:  jg     080ece20 <+0x105>
080ece19 +0x0fe:  mov    $0x1,%eax
080ece1e +0x103:  jmp    080ece25 <+0x10a>
080ece20 +0x105:  mov    $0x0,%eax
080ece25 +0x10a:  test   %al,%al
080ece27 +0x10c:  je     080ece30 <+0x115>
080ece29 +0x10e:  mov    $0x0,%eax
080ece2e +0x113:  jmp    080ece67 <+0x14c>
080ece30 +0x115:  mov    0x14(%ebp),%edx
080ece33 +0x118:  mov    0x8(%ebp),%eax
080ece36 +0x11b:  mov    0xc(%eax),%eax
080ece39 +0x11e:  mov    0xc(%ebp),%ecx
080ece3c +0x121:  shl    $0x2,%ecx
080ece3f +0x124:  add    %ecx,%eax
080ece41 +0x126:  mov    (%eax),%eax
080ece43 +0x128:  mov    %edx,0x8(%esp)
080ece47 +0x12c:  mov    %eax,0x4(%esp)
080ece4b +0x130:  mov    0x10(%ebp),%eax
080ece4e +0x133:  mov    %eax,(%esp)
080ece51 +0x136:  call   0807d8d0 <_init+0x1c8>
080ece56 +0x13b:  mov    0x14(%ebp),%eax
080ece59 +0x13e:  sub    $0x1,%eax
080ece5c +0x141:  add    0x10(%ebp),%eax
080ece5f +0x144:  movb   $0x0,(%eax)
080ece62 +0x147:  mov    $0x1,%eax
080ece67 +0x14c:  leave
080ece68 +0x14d:  ret
080ece69 +0x14e:  nop
080ece6a +0x14f:  push   %ebp
080ece6b +0x150:  mov    %esp,%ebp
080ece6d +0x152:  push   %ebx
080ece6e +0x153:  sub    $0x14,%esp
080ece71 +0x156:  mov    0x8(%ebp),%ebx
080ece74 +0x159:  mov    0xc(%ebp),%eax
080ece77 +0x15c:  mov    %eax,0x4(%esp)
080ece7b +0x160:  mov    %ebx,(%esp)
080ece7e +0x163:  call   080ed0b0 <+0x395>
080ece83 +0x168:  sub    $0x4,%esp
080ece86 +0x16b:  mov    %ebx,%eax
080ece88 +0x16d:  mov    -0x4(%ebp),%ebx
080ece8b +0x170:  leave
080ece8c +0x171:  ret    $0x4
080ece8f +0x174:  nop
080ece90 +0x175:  push   %ebp
080ece91 +0x176:  mov    %esp,%ebp
080ece93 +0x178:  push   %ebx
080ece94 +0x179:  sub    $0x14,%esp
080ece97 +0x17c:  mov    0x8(%ebp),%ebx
080ece9a +0x17f:  mov    0xc(%ebp),%eax
080ece9d +0x182:  mov    %eax,0x4(%esp)
080ecea1 +0x186:  mov    %ebx,(%esp)
080ecea4 +0x189:  call   080ed0d6 <+0x3bb>
080ecea9 +0x18e:  sub    $0x4,%esp
080eceac +0x191:  mov    %ebx,%eax
080eceae +0x193:  mov    -0x4(%ebp),%ebx
080eceb1 +0x196:  leave
080eceb2 +0x197:  ret    $0x4
080eceb5 +0x19a:  nop
080eceb6 +0x19b:  push   %ebp
080eceb7 +0x19c:  mov    %esp,%ebp
080eceb9 +0x19e:  mov    0x8(%ebp),%eax
080ecebc +0x1a1:  mov    (%eax),%edx
080ecebe +0x1a3:  mov    0xc(%ebp),%eax
080ecec1 +0x1a6:  mov    (%eax),%eax
080ecec3 +0x1a8:  cmp    %eax,%edx
080ecec5 +0x1aa:  setne  %al
080ecec8 +0x1ad:  pop    %ebp
080ecec9 +0x1ae:  ret
080ececa +0x1af:  push   %ebp
080ececb +0x1b0:  mov    %esp,%ebp
080ececd +0x1b2:  sub    $0x18,%esp
080eced0 +0x1b5:  mov    0x8(%ebp),%eax
080eced3 +0x1b8:  mov    (%eax),%eax
080eced5 +0x1ba:  mov    %eax,(%esp)
080eced8 +0x1bd:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
080ecedd +0x1c2:  mov    0x8(%ebp),%edx
080ecee0 +0x1c5:  mov    %eax,(%edx)
080ecee2 +0x1c7:  mov    0x8(%ebp),%eax
080ecee5 +0x1ca:  leave
080ecee6 +0x1cb:  ret
080ecee7 +0x1cc:  nop
080ecee8 +0x1cd:  push   %ebp
080ecee9 +0x1ce:  mov    %esp,%ebp
080eceeb +0x1d0:  mov    0x8(%ebp),%eax
080eceee +0x1d3:  mov    (%eax),%eax
080ecef0 +0x1d5:  add    $0x10,%eax
080ecef3 +0x1d8:  pop    %ebp
080ecef4 +0x1d9:  ret
080ecef5 +0x1da:  nop
080ecef6 +0x1db:  push   %ebp
080ecef7 +0x1dc:  mov    %esp,%ebp
080ecef9 +0x1de:  push   %ebx
080ecefa +0x1df:  sub    $0x14,%esp
080ecefd +0x1e2:  mov    0x8(%ebp),%ebx
080ecf00 +0x1e5:  mov    0xc(%ebp),%eax
080ecf03 +0x1e8:  mov    %eax,0x4(%esp)
080ecf07 +0x1ec:  mov    %ebx,(%esp)
080ecf0a +0x1ef:  call   080ed0fc <+0x3e1>
080ecf0f +0x1f4:  sub    $0x4,%esp
080ecf12 +0x1f7:  mov    %ebx,%eax
080ecf14 +0x1f9:  mov    -0x4(%ebp),%ebx
080ecf17 +0x1fc:  leave
080ecf18 +0x1fd:  ret    $0x4
080ecf1b +0x200:  nop
080ecf1c +0x201:  push   %ebp
080ecf1d +0x202:  mov    %esp,%ebp
080ecf1f +0x204:  push   %ebx
080ecf20 +0x205:  sub    $0x14,%esp
080ecf23 +0x208:  mov    0x8(%ebp),%ebx
080ecf26 +0x20b:  mov    0xc(%ebp),%eax
080ecf29 +0x20e:  mov    %eax,0x4(%esp)
080ecf2d +0x212:  mov    %ebx,(%esp)
080ecf30 +0x215:  call   080ed122 <+0x407>
080ecf35 +0x21a:  sub    $0x4,%esp
080ecf38 +0x21d:  mov    %ebx,%eax
080ecf3a +0x21f:  mov    -0x4(%ebp),%ebx
080ecf3d +0x222:  leave
080ecf3e +0x223:  ret    $0x4
080ecf41 +0x226:  nop
080ecf42 +0x227:  push   %ebp
080ecf43 +0x228:  mov    %esp,%ebp
080ecf45 +0x22a:  mov    0x8(%ebp),%eax
080ecf48 +0x22d:  mov    (%eax),%edx
080ecf4a +0x22f:  mov    0xc(%ebp),%eax
080ecf4d +0x232:  mov    (%eax),%eax
080ecf4f +0x234:  cmp    %eax,%edx
080ecf51 +0x236:  setne  %al
080ecf54 +0x239:  pop    %ebp
080ecf55 +0x23a:  ret
080ecf56 +0x23b:  push   %ebp
080ecf57 +0x23c:  mov    %esp,%ebp
080ecf59 +0x23e:  sub    $0x18,%esp
080ecf5c +0x241:  mov    0x8(%ebp),%eax
080ecf5f +0x244:  mov    (%eax),%eax
080ecf61 +0x246:  mov    %eax,(%esp)
080ecf64 +0x249:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
080ecf69 +0x24e:  mov    0x8(%ebp),%edx
080ecf6c +0x251:  mov    %eax,(%edx)
080ecf6e +0x253:  mov    0x8(%ebp),%eax
080ecf71 +0x256:  leave
080ecf72 +0x257:  ret
080ecf73 +0x258:  nop
080ecf74 +0x259:  push   %ebp
080ecf75 +0x25a:  mov    %esp,%ebp
080ecf77 +0x25c:  mov    0x8(%ebp),%eax
080ecf7a +0x25f:  mov    (%eax),%eax
080ecf7c +0x261:  add    $0x10,%eax
080ecf7f +0x264:  pop    %ebp
080ecf80 +0x265:  ret
080ecf81 +0x266:  nop
080ecf82 +0x267:  push   %ebp
080ecf83 +0x268:  mov    %esp,%ebp
080ecf85 +0x26a:  push   %ebx
080ecf86 +0x26b:  sub    $0x304,%esp
080ecf8c +0x271:  lea    -0x2e8(%ebp),%eax
080ecf92 +0x277:  mov    0xc(%ebp),%edx
080ecf95 +0x27a:  mov    %edx,0x8(%esp)
080ecf99 +0x27e:  mov    0x8(%ebp),%edx
080ecf9c +0x281:  mov    %edx,0x4(%esp)
080ecfa0 +0x285:  mov    %eax,(%esp)
080ecfa3 +0x288:  call   080ed148 <+0x42d>
080ecfa8 +0x28d:  sub    $0x4,%esp
080ecfab +0x290:  lea    -0x2e4(%ebp),%eax
080ecfb1 +0x296:  mov    0x8(%ebp),%edx
080ecfb4 +0x299:  mov    %edx,0x4(%esp)
080ecfb8 +0x29d:  mov    %eax,(%esp)
080ecfbb +0x2a0:  call   080ece90 <+0x175>
080ecfc0 +0x2a5:  sub    $0x4,%esp
080ecfc3 +0x2a8:  lea    -0x2e4(%ebp),%eax
080ecfc9 +0x2ae:  mov    %eax,0x4(%esp)
080ecfcd +0x2b2:  lea    -0x2e8(%ebp),%eax
080ecfd3 +0x2b8:  mov    %eax,(%esp)
080ecfd6 +0x2bb:  call   080ed1be <+0x4a3>
080ecfdb +0x2c0:  test   %al,%al
080ecfdd +0x2c2:  jne    080ed024 <+0x309>
080ecfdf +0x2c4:  lea    -0x2e8(%ebp),%eax
080ecfe5 +0x2ca:  mov    %eax,(%esp)
080ecfe8 +0x2cd:  call   080ed19a <+0x47f>
080ecfed +0x2d2:  mov    %eax,%ebx
080ecfef +0x2d4:  lea    -0x2dd(%ebp),%eax
080ecff5 +0x2da:  mov    0x8(%ebp),%edx
080ecff8 +0x2dd:  mov    %edx,0x4(%esp)
080ecffc +0x2e1:  mov    %eax,(%esp)
080ecfff +0x2e4:  call   080ed174 <+0x459>
080ed004 +0x2e9:  sub    $0x4,%esp
080ed007 +0x2ec:  mov    %ebx,0x8(%esp)
080ed00b +0x2f0:  mov    0xc(%ebp),%eax
080ed00e +0x2f3:  mov    %eax,0x4(%esp)
080ed012 +0x2f7:  lea    -0x2dd(%ebp),%eax
080ed018 +0x2fd:  mov    %eax,(%esp)
080ed01b +0x300:  call   080ed1a8 <+0x48d>
080ed020 +0x305:  test   %al,%al
080ed022 +0x307:  je     080ed02b <+0x310>
080ed024 +0x309:  mov    $0x1,%eax
080ed029 +0x30e:  jmp    080ed030 <+0x315>
080ed02b +0x310:  mov    $0x0,%eax
080ed030 +0x315:  test   %al,%al
080ed032 +0x317:  je     080ed099 <+0x37e>
080ed034 +0x319:  lea    -0x170(%ebp),%eax
080ed03a +0x31f:  mov    %eax,(%esp)
080ed03d +0x322:  call   080ecd38 <+0x1d>
080ed042 +0x327:  lea    -0x170(%ebp),%eax
080ed048 +0x32d:  mov    %eax,0x8(%esp)
080ed04c +0x331:  mov    0xc(%ebp),%eax
080ed04f +0x334:  mov    %eax,0x4(%esp)
080ed053 +0x338:  lea    -0x2dc(%ebp),%eax
080ed059 +0x33e:  mov    %eax,(%esp)
080ed05c +0x341:  call   080ed1d2 <+0x4b7>
080ed061 +0x346:  lea    -0x2ec(%ebp),%eax
080ed067 +0x34c:  lea    -0x2dc(%ebp),%edx
080ed06d +0x352:  mov    %edx,0xc(%esp)
080ed071 +0x356:  mov    -0x2e8(%ebp),%edx
080ed077 +0x35c:  mov    %edx,0x8(%esp)
080ed07b +0x360:  mov    0x8(%ebp),%edx
080ed07e +0x363:  mov    %edx,0x4(%esp)
080ed082 +0x367:  mov    %eax,(%esp)
080ed085 +0x36a:  call   080ed216 <+0x4fb>
080ed08a +0x36f:  sub    $0x4,%esp
080ed08d +0x372:  mov    -0x2ec(%ebp),%eax
080ed093 +0x378:  mov    %eax,-0x2e8(%ebp)
080ed099 +0x37e:  lea    -0x2e8(%ebp),%eax
080ed09f +0x384:  mov    %eax,(%esp)
080ed0a2 +0x387:  call   080ed19a <+0x47f>
080ed0a7 +0x38c:  add    $0x4,%eax
080ed0aa +0x38f:  mov    -0x4(%ebp),%ebx
080ed0ad +0x392:  leave
080ed0ae +0x393:  ret
080ed0af +0x394:  nop
080ed0b0 +0x395:  push   %ebp
080ed0b1 +0x396:  mov    %esp,%ebp
080ed0b3 +0x398:  push   %ebx
080ed0b4 +0x399:  sub    $0x14,%esp
080ed0b7 +0x39c:  mov    0x8(%ebp),%ebx
080ed0ba +0x39f:  mov    0xc(%ebp),%eax
080ed0bd +0x3a2:  mov    0xc(%eax),%eax
080ed0c0 +0x3a5:  mov    %eax,0x4(%esp)
080ed0c4 +0x3a9:  mov    %ebx,(%esp)
080ed0c7 +0x3ac:  call   080ed25c <+0x541>
080ed0cc +0x3b1:  mov    %ebx,%eax
080ed0ce +0x3b3:  add    $0x14,%esp
080ed0d1 +0x3b6:  pop    %ebx
080ed0d2 +0x3b7:  pop    %ebp
080ed0d3 +0x3b8:  ret    $0x4
080ed0d6 +0x3bb:  push   %ebp
080ed0d7 +0x3bc:  mov    %esp,%ebp
080ed0d9 +0x3be:  push   %ebx
080ed0da +0x3bf:  sub    $0x14,%esp
080ed0dd +0x3c2:  mov    0x8(%ebp),%ebx
080ed0e0 +0x3c5:  mov    0xc(%ebp),%eax
080ed0e3 +0x3c8:  add    $0x4,%eax
080ed0e6 +0x3cb:  mov    %eax,0x4(%esp)
080ed0ea +0x3cf:  mov    %ebx,(%esp)
080ed0ed +0x3d2:  call   080ed25c <+0x541>
080ed0f2 +0x3d7:  mov    %ebx,%eax
080ed0f4 +0x3d9:  add    $0x14,%esp
080ed0f7 +0x3dc:  pop    %ebx
080ed0f8 +0x3dd:  pop    %ebp
080ed0f9 +0x3de:  ret    $0x4
080ed0fc +0x3e1:  push   %ebp
080ed0fd +0x3e2:  mov    %esp,%ebp
080ed0ff +0x3e4:  push   %ebx
080ed100 +0x3e5:  sub    $0x14,%esp
080ed103 +0x3e8:  mov    0x8(%ebp),%ebx
080ed106 +0x3eb:  mov    0xc(%ebp),%eax
080ed109 +0x3ee:  mov    0xc(%eax),%eax
080ed10c +0x3f1:  mov    %eax,0x4(%esp)
080ed110 +0x3f5:  mov    %ebx,(%esp)
080ed113 +0x3f8:  call   080ed26a <+0x54f>
080ed118 +0x3fd:  mov    %ebx,%eax
080ed11a +0x3ff:  add    $0x14,%esp
080ed11d +0x402:  pop    %ebx
080ed11e +0x403:  pop    %ebp
080ed11f +0x404:  ret    $0x4
080ed122 +0x407:  push   %ebp
080ed123 +0x408:  mov    %esp,%ebp
080ed125 +0x40a:  push   %ebx
080ed126 +0x40b:  sub    $0x14,%esp
080ed129 +0x40e:  mov    0x8(%ebp),%ebx
080ed12c +0x411:  mov    0xc(%ebp),%eax
080ed12f +0x414:  add    $0x4,%eax
080ed132 +0x417:  mov    %eax,0x4(%esp)
080ed136 +0x41b:  mov    %ebx,(%esp)
080ed139 +0x41e:  call   080ed26a <+0x54f>
080ed13e +0x423:  mov    %ebx,%eax
080ed140 +0x425:  add    $0x14,%esp
080ed143 +0x428:  pop    %ebx
080ed144 +0x429:  pop    %ebp
080ed145 +0x42a:  ret    $0x4
080ed148 +0x42d:  push   %ebp
080ed149 +0x42e:  mov    %esp,%ebp
080ed14b +0x430:  push   %ebx
080ed14c +0x431:  sub    $0x14,%esp
080ed14f +0x434:  mov    0x8(%ebp),%ebx
080ed152 +0x437:  mov    0xc(%ebp),%eax
080ed155 +0x43a:  mov    0x10(%ebp),%edx
080ed158 +0x43d:  mov    %edx,0x8(%esp)
080ed15c +0x441:  mov    %eax,0x4(%esp)
080ed160 +0x445:  mov    %ebx,(%esp)
080ed163 +0x448:  call   080ed278 <+0x55d>
080ed168 +0x44d:  sub    $0x4,%esp
080ed16b +0x450:  mov    %ebx,%eax
080ed16d +0x452:  mov    -0x4(%ebp),%ebx
080ed170 +0x455:  leave
080ed171 +0x456:  ret    $0x4
080ed174 +0x459:  push   %ebp
080ed175 +0x45a:  mov    %esp,%ebp
080ed177 +0x45c:  push   %ebx
080ed178 +0x45d:  sub    $0x14,%esp
080ed17b +0x460:  mov    0x8(%ebp),%ebx
080ed17e +0x463:  mov    0xc(%ebp),%eax
080ed181 +0x466:  mov    %eax,0x4(%esp)
080ed185 +0x46a:  mov    %ebx,(%esp)
080ed188 +0x46d:  call   080ed2ca <+0x5af>
080ed18d +0x472:  sub    $0x4,%esp
080ed190 +0x475:  mov    %ebx,%eax
080ed192 +0x477:  mov    -0x4(%ebp),%ebx
080ed195 +0x47a:  leave
080ed196 +0x47b:  ret    $0x4
080ed199 +0x47e:  nop
080ed19a +0x47f:  push   %ebp
080ed19b +0x480:  mov    %esp,%ebp
080ed19d +0x482:  mov    0x8(%ebp),%eax
080ed1a0 +0x485:  mov    (%eax),%eax
080ed1a2 +0x487:  add    $0x10,%eax
080ed1a5 +0x48a:  pop    %ebp
080ed1a6 +0x48b:  ret
080ed1a7 +0x48c:  nop
080ed1a8 +0x48d:  push   %ebp
080ed1a9 +0x48e:  mov    %esp,%ebp
080ed1ab +0x490:  mov    0xc(%ebp),%eax
080ed1ae +0x493:  mov    (%eax),%eax
080ed1b0 +0x495:  mov    %eax,%edx
080ed1b2 +0x497:  mov    0x10(%ebp),%eax
080ed1b5 +0x49a:  mov    (%eax),%eax
080ed1b7 +0x49c:  cmp    %eax,%edx
080ed1b9 +0x49e:  setl   %al
080ed1bc +0x4a1:  pop    %ebp
080ed1bd +0x4a2:  ret
080ed1be +0x4a3:  push   %ebp
080ed1bf +0x4a4:  mov    %esp,%ebp
080ed1c1 +0x4a6:  mov    0x8(%ebp),%eax
080ed1c4 +0x4a9:  mov    (%eax),%edx
080ed1c6 +0x4ab:  mov    0xc(%ebp),%eax
080ed1c9 +0x4ae:  mov    (%eax),%eax
080ed1cb +0x4b0:  cmp    %eax,%edx
080ed1cd +0x4b2:  sete   %al
080ed1d0 +0x4b5:  pop    %ebp
080ed1d1 +0x4b6:  ret
080ed1d2 +0x4b7:  push   %ebp
080ed1d3 +0x4b8:  mov    %esp,%ebp
080ed1d5 +0x4ba:  push   %edi
080ed1d6 +0x4bb:  push   %esi
080ed1d7 +0x4bc:  push   %ebx
080ed1d8 +0x4bd:  sub    $0x1c,%esp
080ed1db +0x4c0:  mov    0xc(%ebp),%eax
080ed1de +0x4c3:  mov    %eax,(%esp)
080ed1e1 +0x4c6:  call   080ed2d4 <+0x5b9>
080ed1e6 +0x4cb:  mov    (%eax),%edx
080ed1e8 +0x4cd:  mov    0x8(%ebp),%eax
080ed1eb +0x4d0:  mov    %edx,(%eax)
080ed1ed +0x4d2:  mov    0x10(%ebp),%eax
080ed1f0 +0x4d5:  mov    %eax,(%esp)
080ed1f3 +0x4d8:  call   080ed2dc <+0x5c1>
080ed1f8 +0x4dd:  mov    0x8(%ebp),%edx
080ed1fb +0x4e0:  lea    0x4(%edx),%ebx
080ed1fe +0x4e3:  mov    %eax,%edx
080ed200 +0x4e5:  mov    $0x5a,%eax
080ed205 +0x4ea:  mov    %ebx,%edi
080ed207 +0x4ec:  mov    %edx,%esi
080ed209 +0x4ee:  mov    %eax,%ecx
080ed20b +0x4f0:  rep movsl %ds:(%esi),%es:(%edi)
080ed20d +0x4f2:  add    $0x1c,%esp
080ed210 +0x4f5:  pop    %ebx
080ed211 +0x4f6:  pop    %esi
080ed212 +0x4f7:  pop    %edi
080ed213 +0x4f8:  pop    %ebp
080ed214 +0x4f9:  ret
080ed215 +0x4fa:  nop
080ed216 +0x4fb:  push   %ebp
080ed217 +0x4fc:  mov    %esp,%ebp
080ed219 +0x4fe:  push   %ebx
080ed21a +0x4ff:  sub    $0x24,%esp
080ed21d +0x502:  mov    0x8(%ebp),%ebx
080ed220 +0x505:  lea    0x10(%ebp),%eax
080ed223 +0x508:  mov    %eax,0x4(%esp)
080ed227 +0x50c:  lea    -0xc(%ebp),%eax
080ed22a +0x50f:  mov    %eax,(%esp)
080ed22d +0x512:  call   080ed2e4 <+0x5c9>
080ed232 +0x517:  mov    0xc(%ebp),%eax
080ed235 +0x51a:  mov    0x14(%ebp),%edx
080ed238 +0x51d:  mov    %edx,0xc(%esp)
080ed23c +0x521:  mov    -0xc(%ebp),%edx
080ed23f +0x524:  mov    %edx,0x8(%esp)
080ed243 +0x528:  mov    %eax,0x4(%esp)
080ed247 +0x52c:  mov    %ebx,(%esp)
080ed24a +0x52f:  call   080ed2f4 <+0x5d9>
080ed24f +0x534:  sub    $0x4,%esp
080ed252 +0x537:  mov    %ebx,%eax
080ed254 +0x539:  mov    -0x4(%ebp),%ebx
080ed257 +0x53c:  leave
080ed258 +0x53d:  ret    $0x4
080ed25b +0x540:  nop
080ed25c +0x541:  push   %ebp
080ed25d +0x542:  mov    %esp,%ebp
080ed25f +0x544:  mov    0xc(%ebp),%edx
080ed262 +0x547:  mov    0x8(%ebp),%eax
080ed265 +0x54a:  mov    %edx,(%eax)
080ed267 +0x54c:  pop    %ebp
080ed268 +0x54d:  ret
080ed269 +0x54e:  nop
080ed26a +0x54f:  push   %ebp
080ed26b +0x550:  mov    %esp,%ebp
080ed26d +0x552:  mov    0xc(%ebp),%edx
080ed270 +0x555:  mov    0x8(%ebp),%eax
080ed273 +0x558:  mov    %edx,(%eax)
080ed275 +0x55a:  pop    %ebp
080ed276 +0x55b:  ret
080ed277 +0x55c:  nop
080ed278 +0x55d:  push   %ebp
080ed279 +0x55e:  mov    %esp,%ebp
080ed27b +0x560:  push   %esi
080ed27c +0x561:  push   %ebx
080ed27d +0x562:  sub    $0x20,%esp
080ed280 +0x565:  mov    0x8(%ebp),%esi
080ed283 +0x568:  mov    0xc(%ebp),%eax
080ed286 +0x56b:  mov    %eax,(%esp)
080ed289 +0x56e:  call   080ed6ba <+0x99f>
080ed28e +0x573:  mov    %eax,%ebx
080ed290 +0x575:  mov    0xc(%ebp),%eax
080ed293 +0x578:  mov    %eax,(%esp)
080ed296 +0x57b:  call   080ceff4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3e41>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3e41
080ed29b +0x580:  mov    0x10(%ebp),%edx
080ed29e +0x583:  mov    %edx,0x10(%esp)
080ed2a2 +0x587:  mov    %ebx,0xc(%esp)
080ed2a6 +0x58b:  mov    %eax,0x8(%esp)
080ed2aa +0x58f:  mov    0xc(%ebp),%eax
080ed2ad +0x592:  mov    %eax,0x4(%esp)
080ed2b1 +0x596:  mov    %esi,(%esp)
080ed2b4 +0x599:  call   080ed6c6 <+0x9ab>
080ed2b9 +0x59e:  sub    $0x4,%esp
080ed2bc +0x5a1:  mov    %esi,%eax
080ed2be +0x5a3:  lea    -0x8(%ebp),%esp
080ed2c1 +0x5a6:  add    $0x0,%esp
080ed2c4 +0x5a9:  pop    %ebx
080ed2c5 +0x5aa:  pop    %esi
080ed2c6 +0x5ab:  pop    %ebp
080ed2c7 +0x5ac:  ret    $0x4
080ed2ca +0x5af:  push   %ebp
080ed2cb +0x5b0:  mov    %esp,%ebp
080ed2cd +0x5b2:  mov    0x8(%ebp),%eax
080ed2d0 +0x5b5:  pop    %ebp
080ed2d1 +0x5b6:  ret    $0x4
080ed2d4 +0x5b9:  push   %ebp
080ed2d5 +0x5ba:  mov    %esp,%ebp
080ed2d7 +0x5bc:  mov    0x8(%ebp),%eax
080ed2da +0x5bf:  pop    %ebp
080ed2db +0x5c0:  ret
080ed2dc +0x5c1:  push   %ebp
080ed2dd +0x5c2:  mov    %esp,%ebp
080ed2df +0x5c4:  mov    0x8(%ebp),%eax
080ed2e2 +0x5c7:  pop    %ebp
080ed2e3 +0x5c8:  ret
080ed2e4 +0x5c9:  push   %ebp
080ed2e5 +0x5ca:  mov    %esp,%ebp
080ed2e7 +0x5cc:  mov    0xc(%ebp),%eax
080ed2ea +0x5cf:  mov    (%eax),%edx
080ed2ec +0x5d1:  mov    0x8(%ebp),%eax
080ed2ef +0x5d4:  mov    %edx,(%eax)
080ed2f1 +0x5d6:  pop    %ebp
080ed2f2 +0x5d7:  ret
080ed2f3 +0x5d8:  nop
080ed2f4 +0x5d9:  push   %ebp
080ed2f5 +0x5da:  mov    %esp,%ebp
080ed2f7 +0x5dc:  push   %esi
080ed2f8 +0x5dd:  push   %ebx
080ed2f9 +0x5de:  sub    $0x50,%esp
080ed2fc +0x5e1:  mov    0x8(%ebp),%ebx
080ed2ff +0x5e4:  mov    0x10(%ebp),%esi
080ed302 +0x5e7:  mov    0xc(%ebp),%eax
080ed305 +0x5ea:  mov    %eax,(%esp)
080ed308 +0x5ed:  call   080ed6ba <+0x99f>
080ed30d +0x5f2:  cmp    %eax,%esi
080ed30f +0x5f4:  sete   %al
080ed312 +0x5f7:  test   %al,%al
080ed314 +0x5f9:  je     080ed3d6 <+0x6bb>
080ed31a +0x5ff:  mov    0xc(%ebp),%eax
080ed31d +0x602:  mov    %eax,(%esp)
080ed320 +0x605:  call   080ed778 <+0xa5d>
080ed325 +0x60a:  test   %eax,%eax
080ed327 +0x60c:  je     080ed370 <+0x655>
080ed329 +0x60e:  mov    0x14(%ebp),%eax
080ed32c +0x611:  mov    %eax,0x4(%esp)
080ed330 +0x615:  lea    -0x29(%ebp),%eax
080ed333 +0x618:  mov    %eax,(%esp)
080ed336 +0x61b:  call   080ed770 <+0xa55>
080ed33b +0x620:  mov    %eax,%esi
080ed33d +0x622:  mov    0xc(%ebp),%eax
080ed340 +0x625:  mov    %eax,(%esp)
080ed343 +0x628:  call   080ed742 <+0xa27>
080ed348 +0x62d:  mov    (%eax),%eax
080ed34a +0x62f:  mov    %eax,(%esp)
080ed34d +0x632:  call   080ed74d <+0xa32>
080ed352 +0x637:  mov    0xc(%ebp),%edx
080ed355 +0x63a:  mov    %esi,0x8(%esp)
080ed359 +0x63e:  mov    %eax,0x4(%esp)
080ed35d +0x642:  mov    %edx,(%esp)
080ed360 +0x645:  call   080ed1a8 <+0x48d>
080ed365 +0x64a:  test   %al,%al
080ed367 +0x64c:  je     080ed370 <+0x655>
080ed369 +0x64e:  mov    $0x1,%eax
080ed36e +0x653:  jmp    080ed375 <+0x65a>
080ed370 +0x655:  mov    $0x0,%eax
080ed375 +0x65a:  test   %al,%al
080ed377 +0x65c:  je     080ed3b0 <+0x695>
080ed379 +0x65e:  mov    0xc(%ebp),%eax
080ed37c +0x661:  mov    %eax,(%esp)
080ed37f +0x664:  call   080ed742 <+0xa27>
080ed384 +0x669:  mov    (%eax),%eax
080ed386 +0x66b:  mov    0x14(%ebp),%edx
080ed389 +0x66e:  mov    %edx,0x10(%esp)
080ed38d +0x672:  mov    %eax,0xc(%esp)
080ed391 +0x676:  movl   $0x0,0x8(%esp)
080ed399 +0x67e:  mov    0xc(%ebp),%eax
080ed39c +0x681:  mov    %eax,0x4(%esp)
080ed3a0 +0x685:  mov    %ebx,(%esp)
080ed3a3 +0x688:  call   080ed784 <+0xa69>
080ed3a8 +0x68d:  sub    $0x4,%esp
080ed3ab +0x690:  jmp    080ed6ab <+0x990>
080ed3b0 +0x695:  lea    -0x28(%ebp),%eax
080ed3b3 +0x698:  mov    0x14(%ebp),%edx
080ed3b6 +0x69b:  mov    %edx,0x8(%esp)
080ed3ba +0x69f:  mov    0xc(%ebp),%edx
080ed3bd +0x6a2:  mov    %edx,0x4(%esp)
080ed3c1 +0x6a6:  mov    %eax,(%esp)
080ed3c4 +0x6a9:  call   080ed84c <+0xb31>
080ed3c9 +0x6ae:  sub    $0x4,%esp
080ed3cc +0x6b1:  mov    -0x28(%ebp),%eax
080ed3cf +0x6b4:  mov    %eax,(%ebx)
080ed3d1 +0x6b6:  jmp    080ed6ab <+0x990>
080ed3d6 +0x6bb:  mov    0x10(%ebp),%eax
080ed3d9 +0x6be:  mov    %eax,(%esp)
080ed3dc +0x6c1:  call   080ed74d <+0xa32>
080ed3e1 +0x6c6:  mov    %eax,%esi
080ed3e3 +0x6c8:  mov    0x14(%ebp),%eax
080ed3e6 +0x6cb:  mov    %eax,0x4(%esp)
080ed3ea +0x6cf:  lea    -0x1e(%ebp),%eax
080ed3ed +0x6d2:  mov    %eax,(%esp)
080ed3f0 +0x6d5:  call   080ed770 <+0xa55>
080ed3f5 +0x6da:  mov    0xc(%ebp),%edx
080ed3f8 +0x6dd:  mov    %esi,0x8(%esp)
080ed3fc +0x6e1:  mov    %eax,0x4(%esp)
080ed400 +0x6e5:  mov    %edx,(%esp)
080ed403 +0x6e8:  call   080ed1a8 <+0x48d>
080ed408 +0x6ed:  test   %al,%al
080ed40a +0x6ef:  je     080ed542 <+0x827>
080ed410 +0x6f5:  mov    0x10(%ebp),%eax
080ed413 +0x6f8:  mov    %eax,-0x30(%ebp)
080ed416 +0x6fb:  mov    0x10(%ebp),%esi
080ed419 +0x6fe:  mov    0xc(%ebp),%eax
080ed41c +0x701:  mov    %eax,(%esp)
080ed41f +0x704:  call   080eda1c <+0xd01>
080ed424 +0x709:  mov    (%eax),%eax
080ed426 +0x70b:  cmp    %eax,%esi
080ed428 +0x70d:  sete   %al
080ed42b +0x710:  test   %al,%al
080ed42d +0x712:  je     080ed46f <+0x754>
080ed42f +0x714:  mov    0xc(%ebp),%eax
080ed432 +0x717:  mov    %eax,(%esp)
080ed435 +0x71a:  call   080eda1c <+0xd01>
080ed43a +0x71f:  mov    (%eax),%esi
080ed43c +0x721:  mov    0xc(%ebp),%eax
080ed43f +0x724:  mov    %eax,(%esp)
080ed442 +0x727:  call   080eda1c <+0xd01>
080ed447 +0x72c:  mov    (%eax),%eax
080ed449 +0x72e:  mov    0x14(%ebp),%edx
080ed44c +0x731:  mov    %edx,0x10(%esp)
080ed450 +0x735:  mov    %esi,0xc(%esp)
080ed454 +0x739:  mov    %eax,0x8(%esp)
080ed458 +0x73d:  mov    0xc(%ebp),%eax
080ed45b +0x740:  mov    %eax,0x4(%esp)
080ed45f +0x744:  mov    %ebx,(%esp)
080ed462 +0x747:  call   080ed784 <+0xa69>
080ed467 +0x74c:  sub    $0x4,%esp
080ed46a +0x74f:  jmp    080ed6ab <+0x990>
080ed46f +0x754:  mov    0x14(%ebp),%eax
080ed472 +0x757:  mov    %eax,0x4(%esp)
080ed476 +0x75b:  lea    -0x1d(%ebp),%eax
080ed479 +0x75e:  mov    %eax,(%esp)
080ed47c +0x761:  call   080ed770 <+0xa55>
080ed481 +0x766:  mov    %eax,%esi
080ed483 +0x768:  lea    -0x30(%ebp),%eax
080ed486 +0x76b:  mov    %eax,(%esp)
080ed489 +0x76e:  call   080eda28 <+0xd0d>
080ed48e +0x773:  mov    (%eax),%eax
080ed490 +0x775:  mov    %eax,(%esp)
080ed493 +0x778:  call   080ed74d <+0xa32>
080ed498 +0x77d:  mov    0xc(%ebp),%edx
080ed49b +0x780:  mov    %esi,0x8(%esp)
080ed49f +0x784:  mov    %eax,0x4(%esp)
080ed4a3 +0x788:  mov    %edx,(%esp)
080ed4a6 +0x78b:  call   080ed1a8 <+0x48d>
080ed4ab +0x790:  test   %al,%al
080ed4ad +0x792:  je     080ed51c <+0x801>
080ed4af +0x794:  mov    -0x30(%ebp),%eax
080ed4b2 +0x797:  mov    %eax,(%esp)
080ed4b5 +0x79a:  call   080eda45 <+0xd2a>
080ed4ba +0x79f:  test   %eax,%eax
080ed4bc +0x7a1:  sete   %al
080ed4bf +0x7a4:  test   %al,%al
080ed4c1 +0x7a6:  je     080ed4f0 <+0x7d5>
080ed4c3 +0x7a8:  mov    -0x30(%ebp),%eax
080ed4c6 +0x7ab:  mov    0x14(%ebp),%edx
080ed4c9 +0x7ae:  mov    %edx,0x10(%esp)
080ed4cd +0x7b2:  mov    %eax,0xc(%esp)
080ed4d1 +0x7b6:  movl   $0x0,0x8(%esp)
080ed4d9 +0x7be:  mov    0xc(%ebp),%eax
080ed4dc +0x7c1:  mov    %eax,0x4(%esp)
080ed4e0 +0x7c5:  mov    %ebx,(%esp)
080ed4e3 +0x7c8:  call   080ed784 <+0xa69>
080ed4e8 +0x7cd:  sub    $0x4,%esp
080ed4eb +0x7d0:  jmp    080ed6ab <+0x990>
080ed4f0 +0x7d5:  mov    0x10(%ebp),%edx
080ed4f3 +0x7d8:  mov    0x10(%ebp),%eax
080ed4f6 +0x7db:  mov    0x14(%ebp),%ecx
080ed4f9 +0x7de:  mov    %ecx,0x10(%esp)
080ed4fd +0x7e2:  mov    %edx,0xc(%esp)
080ed501 +0x7e6:  mov    %eax,0x8(%esp)
080ed505 +0x7ea:  mov    0xc(%ebp),%eax
080ed508 +0x7ed:  mov    %eax,0x4(%esp)
080ed50c +0x7f1:  mov    %ebx,(%esp)
080ed50f +0x7f4:  call   080ed784 <+0xa69>
080ed514 +0x7f9:  sub    $0x4,%esp
080ed517 +0x7fc:  jmp    080ed6ab <+0x990>
080ed51c +0x801:  lea    -0x1c(%ebp),%eax
080ed51f +0x804:  mov    0x14(%ebp),%edx
080ed522 +0x807:  mov    %edx,0x8(%esp)
080ed526 +0x80b:  mov    0xc(%ebp),%edx
080ed529 +0x80e:  mov    %edx,0x4(%esp)
080ed52d +0x812:  mov    %eax,(%esp)
080ed530 +0x815:  call   080ed84c <+0xb31>
080ed535 +0x81a:  sub    $0x4,%esp
080ed538 +0x81d:  mov    -0x1c(%ebp),%eax
080ed53b +0x820:  mov    %eax,(%ebx)
080ed53d +0x822:  jmp    080ed6ab <+0x990>
080ed542 +0x827:  mov    0x14(%ebp),%eax
080ed545 +0x82a:  mov    %eax,0x4(%esp)
080ed549 +0x82e:  lea    -0x12(%ebp),%eax
080ed54c +0x831:  mov    %eax,(%esp)
080ed54f +0x834:  call   080ed770 <+0xa55>
080ed554 +0x839:  mov    %eax,%esi
080ed556 +0x83b:  mov    0x10(%ebp),%eax
080ed559 +0x83e:  mov    %eax,(%esp)
080ed55c +0x841:  call   080ed74d <+0xa32>
080ed561 +0x846:  mov    0xc(%ebp),%edx
080ed564 +0x849:  mov    %esi,0x8(%esp)
080ed568 +0x84d:  mov    %eax,0x4(%esp)
080ed56c +0x851:  mov    %edx,(%esp)
080ed56f +0x854:  call   080ed1a8 <+0x48d>
080ed574 +0x859:  test   %al,%al
080ed576 +0x85b:  je     080ed69c <+0x981>
080ed57c +0x861:  mov    0x10(%ebp),%eax
080ed57f +0x864:  mov    %eax,-0x34(%ebp)
080ed582 +0x867:  mov    0x10(%ebp),%esi
080ed585 +0x86a:  mov    0xc(%ebp),%eax
080ed588 +0x86d:  mov    %eax,(%esp)
080ed58b +0x870:  call   080ed742 <+0xa27>
080ed590 +0x875:  mov    (%eax),%eax
080ed592 +0x877:  cmp    %eax,%esi
080ed594 +0x879:  sete   %al
080ed597 +0x87c:  test   %al,%al
080ed599 +0x87e:  je     080ed5d2 <+0x8b7>
080ed59b +0x880:  mov    0xc(%ebp),%eax
080ed59e +0x883:  mov    %eax,(%esp)
080ed5a1 +0x886:  call   080ed742 <+0xa27>
080ed5a6 +0x88b:  mov    (%eax),%eax
080ed5a8 +0x88d:  mov    0x14(%ebp),%edx
080ed5ab +0x890:  mov    %edx,0x10(%esp)
080ed5af +0x894:  mov    %eax,0xc(%esp)
080ed5b3 +0x898:  movl   $0x0,0x8(%esp)
080ed5bb +0x8a0:  mov    0xc(%ebp),%eax
080ed5be +0x8a3:  mov    %eax,0x4(%esp)
080ed5c2 +0x8a7:  mov    %ebx,(%esp)
080ed5c5 +0x8aa:  call   080ed784 <+0xa69>
080ed5ca +0x8af:  sub    $0x4,%esp
080ed5cd +0x8b2:  jmp    080ed6ab <+0x990>
080ed5d2 +0x8b7:  lea    -0x34(%ebp),%eax
080ed5d5 +0x8ba:  mov    %eax,(%esp)
080ed5d8 +0x8bd:  call   080eda50 <+0xd35>
080ed5dd +0x8c2:  mov    (%eax),%eax
080ed5df +0x8c4:  mov    %eax,(%esp)
080ed5e2 +0x8c7:  call   080ed74d <+0xa32>
080ed5e7 +0x8cc:  mov    %eax,%esi
080ed5e9 +0x8ce:  mov    0x14(%ebp),%eax
080ed5ec +0x8d1:  mov    %eax,0x4(%esp)
080ed5f0 +0x8d5:  lea    -0x11(%ebp),%eax
080ed5f3 +0x8d8:  mov    %eax,(%esp)
080ed5f6 +0x8db:  call   080ed770 <+0xa55>
080ed5fb +0x8e0:  mov    0xc(%ebp),%edx
080ed5fe +0x8e3:  mov    %esi,0x8(%esp)
080ed602 +0x8e7:  mov    %eax,0x4(%esp)
080ed606 +0x8eb:  mov    %edx,(%esp)
080ed609 +0x8ee:  call   080ed1a8 <+0x48d>
080ed60e +0x8f3:  test   %al,%al
080ed610 +0x8f5:  je     080ed679 <+0x95e>
080ed612 +0x8f7:  mov    0x10(%ebp),%eax
080ed615 +0x8fa:  mov    %eax,(%esp)
080ed618 +0x8fd:  call   080eda45 <+0xd2a>
080ed61d +0x902:  test   %eax,%eax
080ed61f +0x904:  sete   %al
080ed622 +0x907:  test   %al,%al
080ed624 +0x909:  je     080ed650 <+0x935>
080ed626 +0x90b:  mov    0x10(%ebp),%eax
080ed629 +0x90e:  mov    0x14(%ebp),%edx
080ed62c +0x911:  mov    %edx,0x10(%esp)
080ed630 +0x915:  mov    %eax,0xc(%esp)
080ed634 +0x919:  movl   $0x0,0x8(%esp)
080ed63c +0x921:  mov    0xc(%ebp),%eax
080ed63f +0x924:  mov    %eax,0x4(%esp)
080ed643 +0x928:  mov    %ebx,(%esp)
080ed646 +0x92b:  call   080ed784 <+0xa69>
080ed64b +0x930:  sub    $0x4,%esp
080ed64e +0x933:  jmp    080ed6ab <+0x990>
080ed650 +0x935:  mov    -0x34(%ebp),%edx
080ed653 +0x938:  mov    -0x34(%ebp),%eax
080ed656 +0x93b:  mov    0x14(%ebp),%ecx
080ed659 +0x93e:  mov    %ecx,0x10(%esp)
080ed65d +0x942:  mov    %edx,0xc(%esp)
080ed661 +0x946:  mov    %eax,0x8(%esp)
080ed665 +0x94a:  mov    0xc(%ebp),%eax
080ed668 +0x94d:  mov    %eax,0x4(%esp)
080ed66c +0x951:  mov    %ebx,(%esp)
080ed66f +0x954:  call   080ed784 <+0xa69>
080ed674 +0x959:  sub    $0x4,%esp
080ed677 +0x95c:  jmp    080ed6ab <+0x990>
080ed679 +0x95e:  lea    -0x10(%ebp),%eax
080ed67c +0x961:  mov    0x14(%ebp),%edx
080ed67f +0x964:  mov    %edx,0x8(%esp)
080ed683 +0x968:  mov    0xc(%ebp),%edx
080ed686 +0x96b:  mov    %edx,0x4(%esp)
080ed68a +0x96f:  mov    %eax,(%esp)
080ed68d +0x972:  call   080ed84c <+0xb31>
080ed692 +0x977:  sub    $0x4,%esp
080ed695 +0x97a:  mov    -0x10(%ebp),%eax
080ed698 +0x97d:  mov    %eax,(%ebx)
080ed69a +0x97f:  jmp    080ed6ab <+0x990>
080ed69c +0x981:  mov    0x10(%ebp),%eax
080ed69f +0x984:  mov    %eax,0x4(%esp)
080ed6a3 +0x988:  mov    %ebx,(%esp)
080ed6a6 +0x98b:  call   080ed25c <+0x541>
080ed6ab +0x990:  mov    %ebx,%eax
080ed6ad +0x992:  lea    -0x8(%ebp),%esp
080ed6b0 +0x995:  add    $0x0,%esp
080ed6b3 +0x998:  pop    %ebx
080ed6b4 +0x999:  pop    %esi
080ed6b5 +0x99a:  pop    %ebp
080ed6b6 +0x99b:  ret    $0x4
080ed6b9 +0x99e:  nop
080ed6ba +0x99f:  push   %ebp
080ed6bb +0x9a0:  mov    %esp,%ebp
080ed6bd +0x9a2:  mov    0x8(%ebp),%eax
080ed6c0 +0x9a5:  add    $0x4,%eax
080ed6c3 +0x9a8:  pop    %ebp
080ed6c4 +0x9a9:  ret
080ed6c5 +0x9aa:  nop
080ed6c6 +0x9ab:  push   %ebp
080ed6c7 +0x9ac:  mov    %esp,%ebp
080ed6c9 +0x9ae:  push   %ebx
080ed6ca +0x9af:  sub    $0x14,%esp
080ed6cd +0x9b2:  mov    0x8(%ebp),%ebx
080ed6d0 +0x9b5:  jmp    080ed71e <+0xa03>
080ed6d2 +0x9b7:  mov    0x10(%ebp),%eax
080ed6d5 +0x9ba:  mov    %eax,(%esp)
080ed6d8 +0x9bd:  call   080eda6d <+0xd52>
080ed6dd +0x9c2:  mov    0xc(%ebp),%edx
080ed6e0 +0x9c5:  mov    0x18(%ebp),%ecx
080ed6e3 +0x9c8:  mov    %ecx,0x8(%esp)
080ed6e7 +0x9cc:  mov    %eax,0x4(%esp)
080ed6eb +0x9d0:  mov    %edx,(%esp)
080ed6ee +0x9d3:  call   080ed1a8 <+0x48d>
080ed6f3 +0x9d8:  xor    $0x1,%eax
080ed6f6 +0x9db:  test   %al,%al
080ed6f8 +0x9dd:  je     080ed710 <+0x9f5>
080ed6fa +0x9df:  mov    0x10(%ebp),%eax
080ed6fd +0x9e2:  mov    %eax,0x14(%ebp)
080ed700 +0x9e5:  mov    0x10(%ebp),%eax
080ed703 +0x9e8:  mov    %eax,(%esp)
080ed706 +0x9eb:  call   080d13e4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6231>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6231
080ed70b +0x9f0:  mov    %eax,0x10(%ebp)
080ed70e +0x9f3:  jmp    080ed71e <+0xa03>
080ed710 +0x9f5:  mov    0x10(%ebp),%eax
080ed713 +0x9f8:  mov    %eax,(%esp)
080ed716 +0x9fb:  call   080d13d9 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6226>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6226
080ed71b +0xa00:  mov    %eax,0x10(%ebp)
080ed71e +0xa03:  cmpl   $0x0,0x10(%ebp)
080ed722 +0xa07:  setne  %al
080ed725 +0xa0a:  test   %al,%al
080ed727 +0xa0c:  jne    080ed6d2 <+0x9b7>
080ed729 +0xa0e:  mov    0x14(%ebp),%eax
080ed72c +0xa11:  mov    %eax,0x4(%esp)
080ed730 +0xa15:  mov    %ebx,(%esp)
080ed733 +0xa18:  call   080ed25c <+0x541>
080ed738 +0xa1d:  mov    %ebx,%eax
080ed73a +0xa1f:  add    $0x14,%esp
080ed73d +0xa22:  pop    %ebx
080ed73e +0xa23:  pop    %ebp
080ed73f +0xa24:  ret    $0x4
080ed742 +0xa27:  push   %ebp
080ed743 +0xa28:  mov    %esp,%ebp
080ed745 +0xa2a:  mov    0x8(%ebp),%eax
080ed748 +0xa2d:  add    $0x10,%eax
080ed74b +0xa30:  pop    %ebp
080ed74c +0xa31:  ret
080ed74d +0xa32:  push   %ebp
080ed74e +0xa33:  mov    %esp,%ebp
080ed750 +0xa35:  sub    $0x28,%esp
080ed753 +0xa38:  mov    0x8(%ebp),%eax
080ed756 +0xa3b:  mov    %eax,(%esp)
080ed759 +0xa3e:  call   080eda8f <+0xd74>
080ed75e +0xa43:  mov    %eax,0x4(%esp)
080ed762 +0xa47:  lea    -0x9(%ebp),%eax
080ed765 +0xa4a:  mov    %eax,(%esp)
080ed768 +0xa4d:  call   080ed770 <+0xa55>
080ed76d +0xa52:  leave
080ed76e +0xa53:  ret
080ed76f +0xa54:  nop
080ed770 +0xa55:  push   %ebp
080ed771 +0xa56:  mov    %esp,%ebp
080ed773 +0xa58:  mov    0xc(%ebp),%eax
080ed776 +0xa5b:  pop    %ebp
080ed777 +0xa5c:  ret
080ed778 +0xa5d:  push   %ebp
080ed779 +0xa5e:  mov    %esp,%ebp
080ed77b +0xa60:  mov    0x8(%ebp),%eax
080ed77e +0xa63:  mov    0x14(%eax),%eax
080ed781 +0xa66:  pop    %ebp
080ed782 +0xa67:  ret
080ed783 +0xa68:  nop
080ed784 +0xa69:  push   %ebp
080ed785 +0xa6a:  mov    %esp,%ebp
080ed787 +0xa6c:  push   %esi
080ed788 +0xa6d:  push   %ebx
080ed789 +0xa6e:  sub    $0x20,%esp
080ed78c +0xa71:  mov    0x8(%ebp),%esi
080ed78f +0xa74:  cmpl   $0x0,0x10(%ebp)
080ed793 +0xa78:  jne    080ed7db <+0xac0>
080ed795 +0xa7a:  mov    0xc(%ebp),%eax
080ed798 +0xa7d:  mov    %eax,(%esp)
080ed79b +0xa80:  call   080ed6ba <+0x99f>
080ed7a0 +0xa85:  cmp    0x14(%ebp),%eax
080ed7a3 +0xa88:  je     080ed7db <+0xac0>
080ed7a5 +0xa8a:  mov    0x14(%ebp),%eax
080ed7a8 +0xa8d:  mov    %eax,(%esp)
080ed7ab +0xa90:  call   080ed74d <+0xa32>
080ed7b0 +0xa95:  mov    %eax,%ebx
080ed7b2 +0xa97:  mov    0x18(%ebp),%eax
080ed7b5 +0xa9a:  mov    %eax,0x4(%esp)
080ed7b9 +0xa9e:  lea    -0xe(%ebp),%eax
080ed7bc +0xaa1:  mov    %eax,(%esp)
080ed7bf +0xaa4:  call   080ed770 <+0xa55>
080ed7c4 +0xaa9:  mov    0xc(%ebp),%edx
080ed7c7 +0xaac:  mov    %ebx,0x8(%esp)
080ed7cb +0xab0:  mov    %eax,0x4(%esp)
080ed7cf +0xab4:  mov    %edx,(%esp)
080ed7d2 +0xab7:  call   080ed1a8 <+0x48d>
080ed7d7 +0xabc:  test   %al,%al
080ed7d9 +0xabe:  je     080ed7e2 <+0xac7>
080ed7db +0xac0:  mov    $0x1,%eax
080ed7e0 +0xac5:  jmp    080ed7e7 <+0xacc>
080ed7e2 +0xac7:  mov    $0x0,%eax
080ed7e7 +0xacc:  mov    %al,-0xd(%ebp)
080ed7ea +0xacf:  mov    0x18(%ebp),%eax
080ed7ed +0xad2:  mov    %eax,0x4(%esp)
080ed7f1 +0xad6:  mov    0xc(%ebp),%eax
080ed7f4 +0xad9:  mov    %eax,(%esp)
080ed7f7 +0xadc:  call   080eda9a <+0xd7f>
080ed7fc +0xae1:  mov    %eax,-0xc(%ebp)
080ed7ff +0xae4:  mov    0xc(%ebp),%eax
080ed802 +0xae7:  lea    0x4(%eax),%ecx
080ed805 +0xaea:  mov    -0xc(%ebp),%edx
080ed808 +0xaed:  movzbl -0xd(%ebp),%eax
080ed80c +0xaf1:  mov    %ecx,0xc(%esp)
080ed810 +0xaf5:  mov    0x14(%ebp),%ecx
080ed813 +0xaf8:  mov    %ecx,0x8(%esp)
080ed817 +0xafc:  mov    %edx,0x4(%esp)
080ed81b +0xb00:  mov    %eax,(%esp)
080ed81e +0xb03:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
080ed823 +0xb08:  mov    0xc(%ebp),%eax
080ed826 +0xb0b:  mov    0x14(%eax),%eax
080ed829 +0xb0e:  lea    0x1(%eax),%edx
080ed82c +0xb11:  mov    0xc(%ebp),%eax
080ed82f +0xb14:  mov    %edx,0x14(%eax)
080ed832 +0xb17:  mov    -0xc(%ebp),%eax
080ed835 +0xb1a:  mov    %eax,0x4(%esp)
080ed839 +0xb1e:  mov    %esi,(%esp)
080ed83c +0xb21:  call   080ed25c <+0x541>
080ed841 +0xb26:  mov    %esi,%eax
080ed843 +0xb28:  add    $0x20,%esp
080ed846 +0xb2b:  pop    %ebx
080ed847 +0xb2c:  pop    %esi
080ed848 +0xb2d:  pop    %ebp
080ed849 +0xb2e:  ret    $0x4
080ed84c +0xb31:  push   %ebp
080ed84d +0xb32:  mov    %esp,%ebp
080ed84f +0xb34:  push   %esi
080ed850 +0xb35:  push   %ebx
080ed851 +0xb36:  sub    $0x50,%esp
080ed854 +0xb39:  mov    0x8(%ebp),%ebx
080ed857 +0xb3c:  mov    0xc(%ebp),%eax
080ed85a +0xb3f:  mov    %eax,(%esp)
080ed85d +0xb42:  call   080ceff4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3e41>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3e41
080ed862 +0xb47:  mov    %eax,-0x14(%ebp)
080ed865 +0xb4a:  mov    0xc(%ebp),%eax
080ed868 +0xb4d:  mov    %eax,(%esp)
080ed86b +0xb50:  call   080ed6ba <+0x99f>
080ed870 +0xb55:  mov    %eax,-0x10(%ebp)
080ed873 +0xb58:  movb   $0x1,-0x9(%ebp)
080ed877 +0xb5c:  jmp    080ed8d5 <+0xbba>
080ed879 +0xb5e:  mov    -0x14(%ebp),%eax
080ed87c +0xb61:  mov    %eax,-0x10(%ebp)
080ed87f +0xb64:  mov    -0x14(%ebp),%eax
080ed882 +0xb67:  mov    %eax,(%esp)
080ed885 +0xb6a:  call   080eda6d <+0xd52>
080ed88a +0xb6f:  mov    %eax,%esi
080ed88c +0xb71:  mov    0x10(%ebp),%eax
080ed88f +0xb74:  mov    %eax,0x4(%esp)
080ed893 +0xb78:  lea    -0x2d(%ebp),%eax
080ed896 +0xb7b:  mov    %eax,(%esp)
080ed899 +0xb7e:  call   080ed770 <+0xa55>
080ed89e +0xb83:  mov    0xc(%ebp),%edx
080ed8a1 +0xb86:  mov    %esi,0x8(%esp)
080ed8a5 +0xb8a:  mov    %eax,0x4(%esp)
080ed8a9 +0xb8e:  mov    %edx,(%esp)
080ed8ac +0xb91:  call   080ed1a8 <+0x48d>
080ed8b1 +0xb96:  mov    %al,-0x9(%ebp)
080ed8b4 +0xb99:  cmpb   $0x0,-0x9(%ebp)
080ed8b8 +0xb9d:  je     080ed8c7 <+0xbac>
080ed8ba +0xb9f:  mov    -0x14(%ebp),%eax
080ed8bd +0xba2:  mov    %eax,(%esp)
080ed8c0 +0xba5:  call   080d13e4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6231>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6231
080ed8c5 +0xbaa:  jmp    080ed8d2 <+0xbb7>
080ed8c7 +0xbac:  mov    -0x14(%ebp),%eax
080ed8ca +0xbaf:  mov    %eax,(%esp)
080ed8cd +0xbb2:  call   080d13d9 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6226>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6226
080ed8d2 +0xbb7:  mov    %eax,-0x14(%ebp)
080ed8d5 +0xbba:  cmpl   $0x0,-0x14(%ebp)
080ed8d9 +0xbbe:  setne  %al
080ed8dc +0xbc1:  test   %al,%al
080ed8de +0xbc3:  jne    080ed879 <+0xb5e>
080ed8e0 +0xbc5:  mov    -0x10(%ebp),%eax
080ed8e3 +0xbc8:  mov    %eax,0x4(%esp)
080ed8e7 +0xbcc:  lea    -0x34(%ebp),%eax
080ed8ea +0xbcf:  mov    %eax,(%esp)
080ed8ed +0xbd2:  call   080ed25c <+0x541>
080ed8f2 +0xbd7:  cmpb   $0x0,-0x9(%ebp)
080ed8f6 +0xbdb:  je     080ed977 <+0xc5c>
080ed8f8 +0xbdd:  lea    -0x2c(%ebp),%eax
080ed8fb +0xbe0:  mov    0xc(%ebp),%edx
080ed8fe +0xbe3:  mov    %edx,0x4(%esp)
080ed902 +0xbe7:  mov    %eax,(%esp)
080ed905 +0xbea:  call   080ed0b0 <+0x395>
080ed90a +0xbef:  sub    $0x4,%esp
080ed90d +0xbf2:  lea    -0x2c(%ebp),%eax
080ed910 +0xbf5:  mov    %eax,0x4(%esp)
080ed914 +0xbf9:  lea    -0x34(%ebp),%eax
080ed917 +0xbfc:  mov    %eax,(%esp)
080ed91a +0xbff:  call   080ed1be <+0x4a3>
080ed91f +0xc04:  test   %al,%al
080ed921 +0xc06:  je     080ed96c <+0xc51>
080ed923 +0xc08:  movb   $0x1,-0x25(%ebp)
080ed927 +0xc0c:  mov    -0x10(%ebp),%ecx
080ed92a +0xc0f:  mov    -0x14(%ebp),%edx
080ed92d +0xc12:  lea    -0x24(%ebp),%eax
080ed930 +0xc15:  mov    0x10(%ebp),%esi
080ed933 +0xc18:  mov    %esi,0x10(%esp)
080ed937 +0xc1c:  mov    %ecx,0xc(%esp)
080ed93b +0xc20:  mov    %edx,0x8(%esp)
080ed93f +0xc24:  mov    0xc(%ebp),%edx
080ed942 +0xc27:  mov    %edx,0x4(%esp)
080ed946 +0xc2b:  mov    %eax,(%esp)
080ed949 +0xc2e:  call   080ed784 <+0xa69>
080ed94e +0xc33:  sub    $0x4,%esp
080ed951 +0xc36:  lea    -0x25(%ebp),%eax
080ed954 +0xc39:  mov    %eax,0x8(%esp)
080ed958 +0xc3d:  lea    -0x24(%ebp),%eax
080ed95b +0xc40:  mov    %eax,0x4(%esp)
080ed95f +0xc44:  mov    %ebx,(%esp)
080ed962 +0xc47:  call   080edb1c <+0xe01>
080ed967 +0xc4c:  jmp    080eda0d <+0xcf2>
080ed96c +0xc51:  lea    -0x34(%ebp),%eax
080ed96f +0xc54:  mov    %eax,(%esp)
080ed972 +0xc57:  call   080edb4a <+0xe2f>
080ed977 +0xc5c:  mov    0x10(%ebp),%eax
080ed97a +0xc5f:  mov    %eax,0x4(%esp)
080ed97e +0xc63:  lea    -0x1e(%ebp),%eax
080ed981 +0xc66:  mov    %eax,(%esp)
080ed984 +0xc69:  call   080ed770 <+0xa55>
080ed989 +0xc6e:  mov    %eax,%esi
080ed98b +0xc70:  mov    -0x34(%ebp),%eax
080ed98e +0xc73:  mov    %eax,(%esp)
080ed991 +0xc76:  call   080ed74d <+0xa32>
080ed996 +0xc7b:  mov    0xc(%ebp),%edx
080ed999 +0xc7e:  mov    %esi,0x8(%esp)
080ed99d +0xc82:  mov    %eax,0x4(%esp)
080ed9a1 +0xc86:  mov    %edx,(%esp)
080ed9a4 +0xc89:  call   080ed1a8 <+0x48d>
080ed9a9 +0xc8e:  test   %al,%al
080ed9ab +0xc90:  je     080ed9f3 <+0xcd8>
080ed9ad +0xc92:  movb   $0x1,-0x1d(%ebp)
080ed9b1 +0xc96:  mov    -0x10(%ebp),%ecx
080ed9b4 +0xc99:  mov    -0x14(%ebp),%edx
080ed9b7 +0xc9c:  lea    -0x1c(%ebp),%eax
080ed9ba +0xc9f:  mov    0x10(%ebp),%esi
080ed9bd +0xca2:  mov    %esi,0x10(%esp)
080ed9c1 +0xca6:  mov    %ecx,0xc(%esp)
080ed9c5 +0xcaa:  mov    %edx,0x8(%esp)
080ed9c9 +0xcae:  mov    0xc(%ebp),%edx
080ed9cc +0xcb1:  mov    %edx,0x4(%esp)
080ed9d0 +0xcb5:  mov    %eax,(%esp)
080ed9d3 +0xcb8:  call   080ed784 <+0xa69>
080ed9d8 +0xcbd:  sub    $0x4,%esp
080ed9db +0xcc0:  lea    -0x1d(%ebp),%eax
080ed9de +0xcc3:  mov    %eax,0x8(%esp)
080ed9e2 +0xcc7:  lea    -0x1c(%ebp),%eax
080ed9e5 +0xcca:  mov    %eax,0x4(%esp)
080ed9e9 +0xcce:  mov    %ebx,(%esp)
080ed9ec +0xcd1:  call   080edb1c <+0xe01>
080ed9f1 +0xcd6:  jmp    080eda0d <+0xcf2>
080ed9f3 +0xcd8:  movb   $0x0,-0x15(%ebp)
080ed9f7 +0xcdc:  lea    -0x15(%ebp),%eax
080ed9fa +0xcdf:  mov    %eax,0x8(%esp)
080ed9fe +0xce3:  lea    -0x34(%ebp),%eax
080eda01 +0xce6:  mov    %eax,0x4(%esp)
080eda05 +0xcea:  mov    %ebx,(%esp)
080eda08 +0xced:  call   080edb68 <+0xe4d>
080eda0d +0xcf2:  mov    %ebx,%eax
080eda0f +0xcf4:  lea    -0x8(%ebp),%esp
080eda12 +0xcf7:  add    $0x0,%esp
080eda15 +0xcfa:  pop    %ebx
080eda16 +0xcfb:  pop    %esi
080eda17 +0xcfc:  pop    %ebp
080eda18 +0xcfd:  ret    $0x4
080eda1b +0xd00:  nop
080eda1c +0xd01:  push   %ebp
080eda1d +0xd02:  mov    %esp,%ebp
080eda1f +0xd04:  mov    0x8(%ebp),%eax
080eda22 +0xd07:  add    $0xc,%eax
080eda25 +0xd0a:  pop    %ebp
080eda26 +0xd0b:  ret
080eda27 +0xd0c:  nop
080eda28 +0xd0d:  push   %ebp
080eda29 +0xd0e:  mov    %esp,%ebp
080eda2b +0xd10:  sub    $0x18,%esp
080eda2e +0xd13:  mov    0x8(%ebp),%eax
080eda31 +0xd16:  mov    (%eax),%eax
080eda33 +0xd18:  mov    %eax,(%esp)
080eda36 +0xd1b:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
080eda3b +0xd20:  mov    0x8(%ebp),%edx
080eda3e +0xd23:  mov    %eax,(%edx)
080eda40 +0xd25:  mov    0x8(%ebp),%eax
080eda43 +0xd28:  leave
080eda44 +0xd29:  ret
080eda45 +0xd2a:  push   %ebp
080eda46 +0xd2b:  mov    %esp,%ebp
080eda48 +0xd2d:  mov    0x8(%ebp),%eax
080eda4b +0xd30:  mov    0xc(%eax),%eax
080eda4e +0xd33:  pop    %ebp
080eda4f +0xd34:  ret
080eda50 +0xd35:  push   %ebp
080eda51 +0xd36:  mov    %esp,%ebp
080eda53 +0xd38:  sub    $0x18,%esp
080eda56 +0xd3b:  mov    0x8(%ebp),%eax
080eda59 +0xd3e:  mov    (%eax),%eax
080eda5b +0xd40:  mov    %eax,(%esp)
080eda5e +0xd43:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
080eda63 +0xd48:  mov    0x8(%ebp),%edx
080eda66 +0xd4b:  mov    %eax,(%edx)
080eda68 +0xd4d:  mov    0x8(%ebp),%eax
080eda6b +0xd50:  leave
080eda6c +0xd51:  ret
080eda6d +0xd52:  push   %ebp
080eda6e +0xd53:  mov    %esp,%ebp
080eda70 +0xd55:  sub    $0x28,%esp
080eda73 +0xd58:  mov    0x8(%ebp),%eax
080eda76 +0xd5b:  mov    %eax,(%esp)
080eda79 +0xd5e:  call   080edb96 <+0xe7b>
080eda7e +0xd63:  mov    %eax,0x4(%esp)
080eda82 +0xd67:  lea    -0x9(%ebp),%eax
080eda85 +0xd6a:  mov    %eax,(%esp)
080eda88 +0xd6d:  call   080ed770 <+0xa55>
080eda8d +0xd72:  leave
080eda8e +0xd73:  ret
080eda8f +0xd74:  push   %ebp
080eda90 +0xd75:  mov    %esp,%ebp
080eda92 +0xd77:  mov    0x8(%ebp),%eax
080eda95 +0xd7a:  add    $0x10,%eax
080eda98 +0xd7d:  pop    %ebp
080eda99 +0xd7e:  ret
080eda9a +0xd7f:  push   %ebp
080eda9b +0xd80:  mov    %esp,%ebp
080eda9d +0xd82:  push   %esi
080eda9e +0xd83:  push   %ebx
080eda9f +0xd84:  sub    $0x20,%esp
080edaa2 +0xd87:  mov    0x8(%ebp),%eax
080edaa5 +0xd8a:  mov    %eax,(%esp)
080edaa8 +0xd8d:  call   080edba2 <+0xe87>
080edaad +0xd92:  mov    %eax,-0xc(%ebp)
080edab0 +0xd95:  mov    0xc(%ebp),%eax
080edab3 +0xd98:  mov    %eax,(%esp)
080edab6 +0xd9b:  call   080edbc5 <+0xeaa>
080edabb +0xda0:  mov    %eax,%ebx
080edabd +0xda2:  mov    0x8(%ebp),%eax
080edac0 +0xda5:  mov    %eax,(%esp)
080edac3 +0xda8:  call   080d27d0 <_GLOBAL__I__ZN10BingoEventC2Ev+0x761d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x761d
080edac8 +0xdad:  mov    %ebx,0x8(%esp)
080edacc +0xdb1:  mov    -0xc(%ebp),%edx
080edacf +0xdb4:  mov    %edx,0x4(%esp)
080edad3 +0xdb8:  mov    %eax,(%esp)
080edad6 +0xdbb:  call   080edbce <+0xeb3>
080edadb +0xdc0:  jmp    080edb11 <+0xdf6>
080edadd +0xdc2:  mov    %eax,(%esp)
080edae0 +0xdc5:  call   08725ce0 <__cxa_begin_catch>
080edae5 +0xdca:  mov    -0xc(%ebp),%eax
080edae8 +0xdcd:  mov    %eax,0x4(%esp)
080edaec +0xdd1:  mov    0x8(%ebp),%eax
080edaef +0xdd4:  mov    %eax,(%esp)
080edaf2 +0xdd7:  call   080d27f2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x763f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x763f
080edaf7 +0xddc:  call   08724be0 <__cxa_rethrow>
080edafc +0xde1:  mov    %edx,%ebx
080edafe +0xde3:  mov    %eax,%esi
080edb00 +0xde5:  call   08725c30 <__cxa_end_catch>
080edb05 +0xdea:  mov    %esi,%eax
080edb07 +0xdec:  mov    %ebx,%edx
080edb09 +0xdee:  mov    %eax,(%esp)
080edb0c +0xdf1:  call   08ae3750 <_Unwind_Resume>
080edb11 +0xdf6:  mov    -0xc(%ebp),%eax
080edb14 +0xdf9:  add    $0x20,%esp
080edb17 +0xdfc:  pop    %ebx
080edb18 +0xdfd:  pop    %esi
080edb19 +0xdfe:  pop    %ebp
080edb1a +0xdff:  ret
080edb1b +0xe00:  nop
080edb1c +0xe01:  push   %ebp
080edb1d +0xe02:  mov    %esp,%ebp
080edb1f +0xe04:  sub    $0x18,%esp
080edb22 +0xe07:  mov    0xc(%ebp),%eax
080edb25 +0xe0a:  mov    %eax,(%esp)
080edb28 +0xe0d:  call   080edc0d <+0xef2>
080edb2d +0xe12:  mov    0x8(%ebp),%edx
080edb30 +0xe15:  mov    (%eax),%eax
080edb32 +0xe17:  mov    %eax,(%edx)
080edb34 +0xe19:  mov    0x10(%ebp),%eax
080edb37 +0xe1c:  mov    %eax,(%esp)
080edb3a +0xe1f:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
080edb3f +0xe24:  movzbl (%eax),%edx
080edb42 +0xe27:  mov    0x8(%ebp),%eax
080edb45 +0xe2a:  mov    %dl,0x4(%eax)
080edb48 +0xe2d:  leave
080edb49 +0xe2e:  ret
080edb4a +0xe2f:  push   %ebp
080edb4b +0xe30:  mov    %esp,%ebp
080edb4d +0xe32:  sub    $0x18,%esp
080edb50 +0xe35:  mov    0x8(%ebp),%eax
080edb53 +0xe38:  mov    (%eax),%eax
080edb55 +0xe3a:  mov    %eax,(%esp)
080edb58 +0xe3d:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
080edb5d +0xe42:  mov    0x8(%ebp),%edx
080edb60 +0xe45:  mov    %eax,(%edx)
080edb62 +0xe47:  mov    0x8(%ebp),%eax
080edb65 +0xe4a:  leave
080edb66 +0xe4b:  ret
080edb67 +0xe4c:  nop
080edb68 +0xe4d:  push   %ebp
080edb69 +0xe4e:  mov    %esp,%ebp
080edb6b +0xe50:  sub    $0x18,%esp
080edb6e +0xe53:  mov    0xc(%ebp),%eax
080edb71 +0xe56:  mov    %eax,(%esp)
080edb74 +0xe59:  call   080edc15 <+0xefa>
080edb79 +0xe5e:  mov    0x8(%ebp),%edx
080edb7c +0xe61:  mov    (%eax),%eax
080edb7e +0xe63:  mov    %eax,(%edx)
080edb80 +0xe65:  mov    0x10(%ebp),%eax
080edb83 +0xe68:  mov    %eax,(%esp)
080edb86 +0xe6b:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
080edb8b +0xe70:  movzbl (%eax),%edx
080edb8e +0xe73:  mov    0x8(%ebp),%eax
080edb91 +0xe76:  mov    %dl,0x4(%eax)
080edb94 +0xe79:  leave
080edb95 +0xe7a:  ret
080edb96 +0xe7b:  push   %ebp
080edb97 +0xe7c:  mov    %esp,%ebp
080edb99 +0xe7e:  mov    0x8(%ebp),%eax
080edb9c +0xe81:  add    $0x10,%eax
080edb9f +0xe84:  pop    %ebp
080edba0 +0xe85:  ret
080edba1 +0xe86:  nop
080edba2 +0xe87:  push   %ebp
080edba3 +0xe88:  mov    %esp,%ebp
080edba5 +0xe8a:  sub    $0x18,%esp
080edba8 +0xe8d:  mov    0x8(%ebp),%eax
080edbab +0xe90:  movl   $0x0,0x8(%esp)
080edbb3 +0xe98:  movl   $0x1,0x4(%esp)
080edbbb +0xea0:  mov    %eax,(%esp)
080edbbe +0xea3:  call   080edc1e <+0xf03>
080edbc3 +0xea8:  leave
080edbc4 +0xea9:  ret
080edbc5 +0xeaa:  push   %ebp
080edbc6 +0xeab:  mov    %esp,%ebp
080edbc8 +0xead:  mov    0x8(%ebp),%eax
080edbcb +0xeb0:  pop    %ebp
080edbcc +0xeb1:  ret
080edbcd +0xeb2:  nop
080edbce +0xeb3:  push   %ebp
080edbcf +0xeb4:  mov    %esp,%ebp
080edbd1 +0xeb6:  push   %ebx
080edbd2 +0xeb7:  sub    $0x14,%esp
080edbd5 +0xeba:  mov    0x10(%ebp),%eax
080edbd8 +0xebd:  mov    %eax,(%esp)
080edbdb +0xec0:  call   080edbc5 <+0xeaa>
080edbe0 +0xec5:  mov    %eax,%ebx
080edbe2 +0xec7:  mov    0xc(%ebp),%eax
080edbe5 +0xeca:  mov    %eax,0x4(%esp)
080edbe9 +0xece:  movl   $0x17c,(%esp)
080edbf0 +0xed5:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080edbf5 +0xeda:  mov    %eax,%edx
080edbf7 +0xedc:  test   %edx,%edx
080edbf9 +0xede:  je     080edc07 <+0xeec>
080edbfb +0xee0:  mov    %ebx,0x4(%esp)
080edbff +0xee4:  mov    %eax,(%esp)
080edc02 +0xee7:  call   080edc5a <+0xf3f>
080edc07 +0xeec:  add    $0x14,%esp
080edc0a +0xeef:  pop    %ebx
080edc0b +0xef0:  pop    %ebp
080edc0c +0xef1:  ret
080edc0d +0xef2:  push   %ebp
080edc0e +0xef3:  mov    %esp,%ebp
080edc10 +0xef5:  mov    0x8(%ebp),%eax
080edc13 +0xef8:  pop    %ebp
080edc14 +0xef9:  ret
080edc15 +0xefa:  push   %ebp
080edc16 +0xefb:  mov    %esp,%ebp
080edc18 +0xefd:  mov    0x8(%ebp),%eax
080edc1b +0xf00:  pop    %ebp
080edc1c +0xf01:  ret
080edc1d +0xf02:  nop
080edc1e +0xf03:  push   %ebp
080edc1f +0xf04:  mov    %esp,%ebp
080edc21 +0xf06:  sub    $0x18,%esp
080edc24 +0xf09:  mov    0x8(%ebp),%eax
080edc27 +0xf0c:  mov    %eax,(%esp)
080edc2a +0xf0f:  call   080edcb2 <+0xf97>
080edc2f +0xf14:  cmp    0xc(%ebp),%eax
080edc32 +0xf17:  setb   %al
080edc35 +0xf1a:  movzbl %al,%eax
080edc38 +0xf1d:  test   %eax,%eax
080edc3a +0xf1f:  setne  %al
080edc3d +0xf22:  test   %al,%al
080edc3f +0xf24:  je     080edc46 <+0xf2b>
080edc41 +0xf26:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
080edc46 +0xf2b:  mov    0xc(%ebp),%eax
080edc49 +0xf2e:  imul   $0x17c,%eax,%eax
080edc4f +0xf34:  mov    %eax,(%esp)
080edc52 +0xf37:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080edc57 +0xf3c:  leave
080edc58 +0xf3d:  ret
080edc59 +0xf3e:  nop
080edc5a +0xf3f:  push   %ebp
080edc5b +0xf40:  mov    %esp,%ebp
080edc5d +0xf42:  push   %edi
080edc5e +0xf43:  push   %esi
080edc5f +0xf44:  push   %ebx
080edc60 +0xf45:  sub    $0x1c,%esp
080edc63 +0xf48:  mov    0x8(%ebp),%eax
080edc66 +0xf4b:  movl   $0x0,(%eax)
080edc6c +0xf51:  mov    0x8(%ebp),%eax
080edc6f +0xf54:  movl   $0x0,0x4(%eax)
080edc76 +0xf5b:  mov    0x8(%ebp),%eax
080edc79 +0xf5e:  movl   $0x0,0x8(%eax)
080edc80 +0xf65:  mov    0x8(%ebp),%eax
080edc83 +0xf68:  movl   $0x0,0xc(%eax)
080edc8a +0xf6f:  mov    0xc(%ebp),%eax
080edc8d +0xf72:  mov    %eax,(%esp)
080edc90 +0xf75:  call   080edbc5 <+0xeaa>
080edc95 +0xf7a:  mov    0x8(%ebp),%edx
080edc98 +0xf7d:  lea    0x10(%edx),%ebx
080edc9b +0xf80:  mov    %eax,%edx
080edc9d +0xf82:  mov    $0x5b,%eax
080edca2 +0xf87:  mov    %ebx,%edi
080edca4 +0xf89:  mov    %edx,%esi
080edca6 +0xf8b:  mov    %eax,%ecx
080edca8 +0xf8d:  rep movsl %ds:(%esi),%es:(%edi)
080edcaa +0xf8f:  add    $0x1c,%esp
080edcad +0xf92:  pop    %ebx
080edcae +0xf93:  pop    %esi
080edcaf +0xf94:  pop    %edi
080edcb0 +0xf95:  pop    %ebp
080edcb1 +0xf96:  ret
080edcb2 +0xf97:  push   %ebp
080edcb3 +0xf98:  mov    %esp,%ebp
080edcb5 +0xf9a:  mov    $0xac7691,%eax
080edcba +0xf9f:  pop    %ebp
080edcbb +0xfa0:  ret
```

## 反编译 C

```c
// <global>::global @ 0x80ecd1b

/* CDBConnector::CDBConnector(DBMgr*) */

void CDBConnector::_GLOBAL__I_CDBConnector(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
