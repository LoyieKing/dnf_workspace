# _M_initialize_timepunct

`_ZNSt11__timepunctIcE23_M_initialize_timepunctEP15__locale_struct`

`std::__timepunct<char>::_M_initialize_timepunct(__locale_struct*)`

| 类 | 地址 |
|---|---|
| `std::__timepunct<char>` | `0x08721c90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08721c90  _ZNSt11__timepunctIcE23_M_initialize_timepunctEP15__locale_struct
#           std::__timepunct<char>::_M_initialize_timepunct(__locale_struct*)
# range [0x08721c90, 0x087224cf]
08721c90 +0x000:  push   %ebp
08721c91 +0x001:  mov    %esp,%ebp
08721c93 +0x003:  push   %esi
08721c94 +0x004:  push   %ebx
08721c95 +0x005:  sub    $0x10,%esp
08721c98 +0x008:  mov    0x8(%ebp),%ebx
08721c9b +0x00b:  mov    0x8(%ebx),%esi
08721c9e +0x00e:  test   %esi,%esi
08721ca0 +0x010:  je     08722320 <+0x690>
08721ca6 +0x016:  mov    0xc(%ebp),%ecx
08721ca9 +0x019:  test   %ecx,%ecx
08721cab +0x01b:  je     08722190 <+0x500>
08721cb1 +0x021:  lea    0xc(%ebp),%eax
08721cb4 +0x024:  mov    %eax,(%esp)
08721cb7 +0x027:  call   08722b10 <_ZNSt6locale5facet17_S_clone_c_localeERP15__locale_struct>  ; std::locale::facet::_S_clone_c_locale(__locale_struct*&)
08721cbc +0x02c:  mov    0x8(%ebx),%esi
08721cbf +0x02f:  mov    %eax,0xc(%ebx)
08721cc2 +0x032:  mov    0xc(%ebp),%eax
08721cc5 +0x035:  movl   $&_ZL14gUnicodeBuffer+0x15afd,(%esp)
08721ccc +0x03c:  mov    %eax,0x4(%esp)
08721cd0 +0x040:  call   0807de10 <_init+0x708>
08721cd5 +0x045:  mov    %eax,0x8(%esi)
08721cd8 +0x048:  mov    0xc(%ebp),%eax
08721cdb +0x04b:  mov    0x8(%ebx),%esi
08721cde +0x04e:  movl   $&_ZL14gUnicodeBuffer+0x15b02,(%esp)
08721ce5 +0x055:  mov    %eax,0x4(%esp)
08721ce9 +0x059:  call   0807de10 <_init+0x708>
08721cee +0x05e:  mov    %eax,0xc(%esi)
08721cf1 +0x061:  mov    0xc(%ebp),%eax
08721cf4 +0x064:  mov    0x8(%ebx),%esi
08721cf7 +0x067:  movl   $&_ZL14gUnicodeBuffer+0x15afe,(%esp)
08721cfe +0x06e:  mov    %eax,0x4(%esp)
08721d02 +0x072:  call   0807de10 <_init+0x708>
08721d07 +0x077:  mov    %eax,0x10(%esi)
08721d0a +0x07a:  mov    0xc(%ebp),%eax
08721d0d +0x07d:  mov    0x8(%ebx),%esi
08721d10 +0x080:  movl   $&_ZL14gUnicodeBuffer+0x15b05,(%esp)
08721d17 +0x087:  mov    %eax,0x4(%esp)
08721d1b +0x08b:  call   0807de10 <_init+0x708>
08721d20 +0x090:  mov    %eax,0x14(%esi)
08721d23 +0x093:  mov    0xc(%ebp),%eax
08721d26 +0x096:  mov    0x8(%ebx),%esi
08721d29 +0x099:  movl   $&_ZL14gUnicodeBuffer+0x15afc,(%esp)
08721d30 +0x0a0:  mov    %eax,0x4(%esp)
08721d34 +0x0a4:  call   0807de10 <_init+0x708>
08721d39 +0x0a9:  mov    %eax,0x18(%esi)
08721d3c +0x0ac:  mov    0xc(%ebp),%eax
08721d3f +0x0af:  mov    0x8(%ebx),%esi
08721d42 +0x0b2:  movl   $&_ZL14gUnicodeBuffer+0x15b04,(%esp)
08721d49 +0x0b9:  mov    %eax,0x4(%esp)
08721d4d +0x0bd:  call   0807de10 <_init+0x708>
08721d52 +0x0c2:  mov    %eax,0x1c(%esi)
08721d55 +0x0c5:  mov    0xc(%ebp),%eax
08721d58 +0x0c8:  mov    0x8(%ebx),%esi
08721d5b +0x0cb:  movl   $&_ZL14gUnicodeBuffer+0x15afa,(%esp)
08721d62 +0x0d2:  mov    %eax,0x4(%esp)
08721d66 +0x0d6:  call   0807de10 <_init+0x708>
08721d6b +0x0db:  mov    %eax,0x20(%esi)
08721d6e +0x0de:  mov    0xc(%ebp),%eax
08721d71 +0x0e1:  mov    0x8(%ebx),%esi
08721d74 +0x0e4:  movl   $&_ZL14gUnicodeBuffer+0x15afb,(%esp)
08721d7b +0x0eb:  mov    %eax,0x4(%esp)
08721d7f +0x0ef:  call   0807de10 <_init+0x708>
08721d84 +0x0f4:  mov    %eax,0x24(%esi)
08721d87 +0x0f7:  mov    0xc(%ebp),%eax
08721d8a +0x0fa:  mov    0x8(%ebx),%esi
08721d8d +0x0fd:  movl   $&_ZL14gUnicodeBuffer+0x15aff,(%esp)
08721d94 +0x104:  mov    %eax,0x4(%esp)
08721d98 +0x108:  call   0807de10 <_init+0x708>
08721d9d +0x10d:  mov    %eax,0x28(%esi)
08721da0 +0x110:  mov    0xc(%ebp),%eax
08721da3 +0x113:  mov    0x8(%ebx),%esi
08721da6 +0x116:  movl   $&_ZL14gUnicodeBuffer+0x15adb,(%esp)
08721dad +0x11d:  mov    %eax,0x4(%esp)
08721db1 +0x121:  call   0807de10 <_init+0x708>
08721db6 +0x126:  mov    %eax,0x2c(%esi)
08721db9 +0x129:  mov    0xc(%ebp),%eax
08721dbc +0x12c:  mov    0x8(%ebx),%esi
08721dbf +0x12f:  movl   $&_ZL14gUnicodeBuffer+0x15adc,(%esp)
08721dc6 +0x136:  mov    %eax,0x4(%esp)
08721dca +0x13a:  call   0807de10 <_init+0x708>
08721dcf +0x13f:  mov    %eax,0x30(%esi)
08721dd2 +0x142:  mov    0xc(%ebp),%eax
08721dd5 +0x145:  mov    0x8(%ebx),%esi
08721dd8 +0x148:  movl   $&_ZL14gUnicodeBuffer+0x15add,(%esp)
08721ddf +0x14f:  mov    %eax,0x4(%esp)
08721de3 +0x153:  call   0807de10 <_init+0x708>
08721de8 +0x158:  mov    %eax,0x34(%esi)
08721deb +0x15b:  mov    0xc(%ebp),%eax
08721dee +0x15e:  mov    0x8(%ebx),%esi
08721df1 +0x161:  movl   $&_ZL14gUnicodeBuffer+0x15ade,(%esp)
08721df8 +0x168:  mov    %eax,0x4(%esp)
08721dfc +0x16c:  call   0807de10 <_init+0x708>
08721e01 +0x171:  mov    %eax,0x38(%esi)
08721e04 +0x174:  mov    0xc(%ebp),%eax
08721e07 +0x177:  mov    0x8(%ebx),%esi
08721e0a +0x17a:  movl   $&_ZL14gUnicodeBuffer+0x15adf,(%esp)
08721e11 +0x181:  mov    %eax,0x4(%esp)
08721e15 +0x185:  call   0807de10 <_init+0x708>
08721e1a +0x18a:  mov    %eax,0x3c(%esi)
08721e1d +0x18d:  mov    0xc(%ebp),%eax
08721e20 +0x190:  mov    0x8(%ebx),%esi
08721e23 +0x193:  movl   $&_ZL14gUnicodeBuffer+0x15ae0,(%esp)
08721e2a +0x19a:  mov    %eax,0x4(%esp)
08721e2e +0x19e:  call   0807de10 <_init+0x708>
08721e33 +0x1a3:  mov    %eax,0x40(%esi)
08721e36 +0x1a6:  mov    0xc(%ebp),%eax
08721e39 +0x1a9:  mov    0x8(%ebx),%esi
08721e3c +0x1ac:  movl   $&_ZL14gUnicodeBuffer+0x15ae1,(%esp)
08721e43 +0x1b3:  mov    %eax,0x4(%esp)
08721e47 +0x1b7:  call   0807de10 <_init+0x708>
08721e4c +0x1bc:  mov    %eax,0x44(%esi)
08721e4f +0x1bf:  mov    0xc(%ebp),%eax
08721e52 +0x1c2:  mov    0x8(%ebx),%esi
08721e55 +0x1c5:  movl   $&_ZL14gUnicodeBuffer+0x15ad4,(%esp)
08721e5c +0x1cc:  mov    %eax,0x4(%esp)
08721e60 +0x1d0:  call   0807de10 <_init+0x708>
08721e65 +0x1d5:  mov    %eax,0x48(%esi)
08721e68 +0x1d8:  mov    0xc(%ebp),%eax
08721e6b +0x1db:  mov    0x8(%ebx),%esi
08721e6e +0x1de:  movl   $&_ZL14gUnicodeBuffer+0x15ad5,(%esp)
08721e75 +0x1e5:  mov    %eax,0x4(%esp)
08721e79 +0x1e9:  call   0807de10 <_init+0x708>
08721e7e +0x1ee:  mov    %eax,0x4c(%esi)
08721e81 +0x1f1:  mov    0xc(%ebp),%eax
08721e84 +0x1f4:  mov    0x8(%ebx),%esi
08721e87 +0x1f7:  movl   $&_ZL14gUnicodeBuffer+0x15ad6,(%esp)
08721e8e +0x1fe:  mov    %eax,0x4(%esp)
08721e92 +0x202:  call   0807de10 <_init+0x708>
08721e97 +0x207:  mov    %eax,0x50(%esi)
08721e9a +0x20a:  mov    0xc(%ebp),%eax
08721e9d +0x20d:  mov    0x8(%ebx),%esi
08721ea0 +0x210:  movl   $&_ZL14gUnicodeBuffer+0x15ad7,(%esp)
08721ea7 +0x217:  mov    %eax,0x4(%esp)
08721eab +0x21b:  call   0807de10 <_init+0x708>
08721eb0 +0x220:  mov    %eax,0x54(%esi)
08721eb3 +0x223:  mov    0xc(%ebp),%eax
08721eb6 +0x226:  mov    0x8(%ebx),%esi
08721eb9 +0x229:  movl   $&_ZL14gUnicodeBuffer+0x15ad8,(%esp)
08721ec0 +0x230:  mov    %eax,0x4(%esp)
08721ec4 +0x234:  call   0807de10 <_init+0x708>
08721ec9 +0x239:  mov    %eax,0x58(%esi)
08721ecc +0x23c:  mov    0xc(%ebp),%eax
08721ecf +0x23f:  mov    0x8(%ebx),%esi
08721ed2 +0x242:  movl   $&_ZL14gUnicodeBuffer+0x15ad9,(%esp)
08721ed9 +0x249:  mov    %eax,0x4(%esp)
08721edd +0x24d:  call   0807de10 <_init+0x708>
08721ee2 +0x252:  mov    %eax,0x5c(%esi)
08721ee5 +0x255:  mov    0xc(%ebp),%eax
08721ee8 +0x258:  mov    0x8(%ebx),%esi
08721eeb +0x25b:  movl   $&_ZL14gUnicodeBuffer+0x15ada,(%esp)
08721ef2 +0x262:  mov    %eax,0x4(%esp)
08721ef6 +0x266:  call   0807de10 <_init+0x708>
08721efb +0x26b:  mov    %eax,0x60(%esi)
08721efe +0x26e:  mov    0xc(%ebp),%eax
08721f01 +0x271:  mov    0x8(%ebx),%esi
08721f04 +0x274:  movl   $&_ZL14gUnicodeBuffer+0x15aee,(%esp)
08721f0b +0x27b:  mov    %eax,0x4(%esp)
08721f0f +0x27f:  call   0807de10 <_init+0x708>
08721f14 +0x284:  mov    %eax,0x64(%esi)
08721f17 +0x287:  mov    0xc(%ebp),%eax
08721f1a +0x28a:  mov    0x8(%ebx),%esi
08721f1d +0x28d:  movl   $&_ZL14gUnicodeBuffer+0x15aef,(%esp)
08721f24 +0x294:  mov    %eax,0x4(%esp)
08721f28 +0x298:  call   0807de10 <_init+0x708>
08721f2d +0x29d:  mov    %eax,0x68(%esi)
08721f30 +0x2a0:  mov    0xc(%ebp),%eax
08721f33 +0x2a3:  mov    0x8(%ebx),%esi
08721f36 +0x2a6:  movl   $&_ZL14gUnicodeBuffer+0x15af0,(%esp)
08721f3d +0x2ad:  mov    %eax,0x4(%esp)
08721f41 +0x2b1:  call   0807de10 <_init+0x708>
08721f46 +0x2b6:  mov    %eax,0x6c(%esi)
08721f49 +0x2b9:  mov    0xc(%ebp),%eax
08721f4c +0x2bc:  mov    0x8(%ebx),%esi
08721f4f +0x2bf:  movl   $&_ZL14gUnicodeBuffer+0x15af1,(%esp)
08721f56 +0x2c6:  mov    %eax,0x4(%esp)
08721f5a +0x2ca:  call   0807de10 <_init+0x708>
08721f5f +0x2cf:  mov    %eax,0x70(%esi)
08721f62 +0x2d2:  mov    0xc(%ebp),%eax
08721f65 +0x2d5:  mov    0x8(%ebx),%esi
08721f68 +0x2d8:  movl   $&_ZL14gUnicodeBuffer+0x15af2,(%esp)
08721f6f +0x2df:  mov    %eax,0x4(%esp)
08721f73 +0x2e3:  call   0807de10 <_init+0x708>
08721f78 +0x2e8:  mov    %eax,0x74(%esi)
08721f7b +0x2eb:  mov    0xc(%ebp),%eax
08721f7e +0x2ee:  mov    0x8(%ebx),%esi
08721f81 +0x2f1:  movl   $&_ZL14gUnicodeBuffer+0x15af3,(%esp)
08721f88 +0x2f8:  mov    %eax,0x4(%esp)
08721f8c +0x2fc:  call   0807de10 <_init+0x708>
08721f91 +0x301:  mov    %eax,0x78(%esi)
08721f94 +0x304:  mov    0xc(%ebp),%eax
08721f97 +0x307:  mov    0x8(%ebx),%esi
08721f9a +0x30a:  movl   $&_ZL14gUnicodeBuffer+0x15af4,(%esp)
08721fa1 +0x311:  mov    %eax,0x4(%esp)
08721fa5 +0x315:  call   0807de10 <_init+0x708>
08721faa +0x31a:  mov    %eax,0x7c(%esi)
08721fad +0x31d:  mov    0xc(%ebp),%eax
08721fb0 +0x320:  mov    0x8(%ebx),%esi
08721fb3 +0x323:  movl   $&_ZL14gUnicodeBuffer+0x15af5,(%esp)
08721fba +0x32a:  mov    %eax,0x4(%esp)
08721fbe +0x32e:  call   0807de10 <_init+0x708>
08721fc3 +0x333:  mov    %eax,0x80(%esi)
08721fc9 +0x339:  mov    0xc(%ebp),%eax
08721fcc +0x33c:  mov    0x8(%ebx),%esi
08721fcf +0x33f:  movl   $&_ZL14gUnicodeBuffer+0x15af6,(%esp)
08721fd6 +0x346:  mov    %eax,0x4(%esp)
08721fda +0x34a:  call   0807de10 <_init+0x708>
08721fdf +0x34f:  mov    %eax,0x84(%esi)
08721fe5 +0x355:  mov    0xc(%ebp),%eax
08721fe8 +0x358:  mov    0x8(%ebx),%esi
08721feb +0x35b:  movl   $&_ZL14gUnicodeBuffer+0x15af7,(%esp)
08721ff2 +0x362:  mov    %eax,0x4(%esp)
08721ff6 +0x366:  call   0807de10 <_init+0x708>
08721ffb +0x36b:  mov    %eax,0x88(%esi)
08722001 +0x371:  mov    0xc(%ebp),%eax
08722004 +0x374:  mov    0x8(%ebx),%esi
08722007 +0x377:  movl   $&_ZL14gUnicodeBuffer+0x15af8,(%esp)
0872200e +0x37e:  mov    %eax,0x4(%esp)
08722012 +0x382:  call   0807de10 <_init+0x708>
08722017 +0x387:  mov    %eax,0x8c(%esi)
0872201d +0x38d:  mov    0xc(%ebp),%eax
08722020 +0x390:  mov    0x8(%ebx),%esi
08722023 +0x393:  movl   $&_ZL14gUnicodeBuffer+0x15af9,(%esp)
0872202a +0x39a:  mov    %eax,0x4(%esp)
0872202e +0x39e:  call   0807de10 <_init+0x708>
08722033 +0x3a3:  mov    %eax,0x90(%esi)
08722039 +0x3a9:  mov    0xc(%ebp),%eax
0872203c +0x3ac:  mov    0x8(%ebx),%esi
0872203f +0x3af:  movl   $&_ZL14gUnicodeBuffer+0x15ae2,(%esp)
08722046 +0x3b6:  mov    %eax,0x4(%esp)
0872204a +0x3ba:  call   0807de10 <_init+0x708>
0872204f +0x3bf:  mov    %eax,0x94(%esi)
08722055 +0x3c5:  mov    0xc(%ebp),%eax
08722058 +0x3c8:  mov    0x8(%ebx),%esi
0872205b +0x3cb:  movl   $&_ZL14gUnicodeBuffer+0x15ae3,(%esp)
08722062 +0x3d2:  mov    %eax,0x4(%esp)
08722066 +0x3d6:  call   0807de10 <_init+0x708>
0872206b +0x3db:  mov    %eax,0x98(%esi)
08722071 +0x3e1:  mov    0xc(%ebp),%eax
08722074 +0x3e4:  mov    0x8(%ebx),%esi
08722077 +0x3e7:  movl   $&_ZL14gUnicodeBuffer+0x15ae4,(%esp)
0872207e +0x3ee:  mov    %eax,0x4(%esp)
08722082 +0x3f2:  call   0807de10 <_init+0x708>
08722087 +0x3f7:  mov    %eax,0x9c(%esi)
0872208d +0x3fd:  mov    0xc(%ebp),%eax
08722090 +0x400:  mov    0x8(%ebx),%esi
08722093 +0x403:  movl   $&_ZL14gUnicodeBuffer+0x15ae5,(%esp)
0872209a +0x40a:  mov    %eax,0x4(%esp)
0872209e +0x40e:  call   0807de10 <_init+0x708>
087220a3 +0x413:  mov    %eax,0xa0(%esi)
087220a9 +0x419:  mov    0xc(%ebp),%eax
087220ac +0x41c:  mov    0x8(%ebx),%esi
087220af +0x41f:  movl   $&_ZL14gUnicodeBuffer+0x15ae6,(%esp)
087220b6 +0x426:  mov    %eax,0x4(%esp)
087220ba +0x42a:  call   0807de10 <_init+0x708>
087220bf +0x42f:  mov    %eax,0xa4(%esi)
087220c5 +0x435:  mov    0xc(%ebp),%eax
087220c8 +0x438:  mov    0x8(%ebx),%esi
087220cb +0x43b:  movl   $&_ZL14gUnicodeBuffer+0x15ae7,(%esp)
087220d2 +0x442:  mov    %eax,0x4(%esp)
087220d6 +0x446:  call   0807de10 <_init+0x708>
087220db +0x44b:  mov    %eax,0xa8(%esi)
087220e1 +0x451:  mov    0xc(%ebp),%eax
087220e4 +0x454:  mov    0x8(%ebx),%esi
087220e7 +0x457:  movl   $&_ZL14gUnicodeBuffer+0x15ae8,(%esp)
087220ee +0x45e:  mov    %eax,0x4(%esp)
087220f2 +0x462:  call   0807de10 <_init+0x708>
087220f7 +0x467:  mov    %eax,0xac(%esi)
087220fd +0x46d:  mov    0xc(%ebp),%eax
08722100 +0x470:  mov    0x8(%ebx),%esi
08722103 +0x473:  movl   $&_ZL14gUnicodeBuffer+0x15ae9,(%esp)
0872210a +0x47a:  mov    %eax,0x4(%esp)
0872210e +0x47e:  call   0807de10 <_init+0x708>
08722113 +0x483:  mov    %eax,0xb0(%esi)
08722119 +0x489:  mov    0xc(%ebp),%eax
0872211c +0x48c:  mov    0x8(%ebx),%esi
0872211f +0x48f:  movl   $&_ZL14gUnicodeBuffer+0x15aea,(%esp)
08722126 +0x496:  mov    %eax,0x4(%esp)
0872212a +0x49a:  call   0807de10 <_init+0x708>
0872212f +0x49f:  mov    %eax,0xb4(%esi)
08722135 +0x4a5:  mov    0xc(%ebp),%eax
08722138 +0x4a8:  mov    0x8(%ebx),%esi
0872213b +0x4ab:  movl   $&_ZL14gUnicodeBuffer+0x15aeb,(%esp)
08722142 +0x4b2:  mov    %eax,0x4(%esp)
08722146 +0x4b6:  call   0807de10 <_init+0x708>
0872214b +0x4bb:  mov    %eax,0xb8(%esi)
08722151 +0x4c1:  mov    0xc(%ebp),%eax
08722154 +0x4c4:  mov    0x8(%ebx),%esi
08722157 +0x4c7:  movl   $&_ZL14gUnicodeBuffer+0x15aec,(%esp)
0872215e +0x4ce:  mov    %eax,0x4(%esp)
08722162 +0x4d2:  call   0807de10 <_init+0x708>
08722167 +0x4d7:  mov    0x8(%ebx),%ebx
0872216a +0x4da:  mov    %eax,0xbc(%esi)
08722170 +0x4e0:  mov    0xc(%ebp),%eax
08722173 +0x4e3:  movl   $&_ZL14gUnicodeBuffer+0x15aed,(%esp)
0872217a +0x4ea:  mov    %eax,0x4(%esp)
0872217e +0x4ee:  call   0807de10 <_init+0x708>
08722183 +0x4f3:  mov    %eax,0xc0(%ebx)
08722189 +0x4f9:  add    $0x10,%esp
0872218c +0x4fc:  pop    %ebx
0872218d +0x4fd:  pop    %esi
0872218e +0x4fe:  pop    %ebp
0872218f +0x4ff:  ret
08722190 +0x500:  call   086daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>  ; std::locale::facet::_S_get_c_locale()
08722195 +0x505:  mov    %eax,0xc(%ebx)
08722198 +0x508:  mov    0x8(%ebx),%eax
0872219b +0x50b:  movl   $"%m/%d/%y",0x8(%eax)
087221a2 +0x512:  movl   $"%m/%d/%y",0xc(%eax)
087221a9 +0x519:  movl   $"%H:%M:%S",0x10(%eax)
087221b0 +0x520:  movl   $"%H:%M:%S",0x14(%eax)
087221b7 +0x527:  movl   $&data#2fb52a47(.rodata),0x18(%eax)
087221be +0x52e:  movl   $&data#2fb52a47(.rodata),0x1c(%eax)
087221c5 +0x535:  movl   $"AM",0x20(%eax)
087221cc +0x53c:  movl   $"PM",0x24(%eax)
087221d3 +0x543:  movl   $&data#2fb52a47(.rodata),0x28(%eax)
087221da +0x54a:  movl   $"Sunday",0x2c(%eax)
087221e1 +0x551:  movl   $"Monday",0x30(%eax)
087221e8 +0x558:  movl   $"Tuesday",0x34(%eax)
087221ef +0x55f:  movl   $"Wednesday",0x38(%eax)
087221f6 +0x566:  movl   $"Thursday",0x3c(%eax)
087221fd +0x56d:  movl   $"Friday",0x40(%eax)
08722204 +0x574:  movl   $"Saturday",0x44(%eax)
0872220b +0x57b:  movl   $"Sun",0x48(%eax)
08722212 +0x582:  movl   $"Mon",0x4c(%eax)
08722219 +0x589:  movl   $"Tue",0x50(%eax)
08722220 +0x590:  movl   $"Wed",0x54(%eax)
08722227 +0x597:  movl   $"Thu",0x58(%eax)
0872222e +0x59e:  movl   $"Fri",0x5c(%eax)
08722235 +0x5a5:  movl   $"Sat",0x60(%eax)
0872223c +0x5ac:  movl   $"January",0x64(%eax)
08722243 +0x5b3:  movl   $"February",0x68(%eax)
0872224a +0x5ba:  movl   $"March",0x6c(%eax)
08722251 +0x5c1:  movl   $"April",0x70(%eax)
08722258 +0x5c8:  movl   $"May",0x74(%eax)
0872225f +0x5cf:  movl   $"June",0x78(%eax)
08722266 +0x5d6:  movl   $"July",0x7c(%eax)
0872226d +0x5dd:  movl   $"August",0x80(%eax)
08722277 +0x5e7:  movl   $"September",0x84(%eax)
08722281 +0x5f1:  movl   $"October",0x88(%eax)
0872228b +0x5fb:  movl   $"November",0x8c(%eax)
08722295 +0x605:  movl   $"December",0x90(%eax)
0872229f +0x60f:  movl   $"Jan",0x94(%eax)
087222a9 +0x619:  movl   $"Feb",0x98(%eax)
087222b3 +0x623:  movl   $"Mar",0x9c(%eax)
087222bd +0x62d:  movl   $"Apr",0xa0(%eax)
087222c7 +0x637:  movl   $"May",0xa4(%eax)
087222d1 +0x641:  movl   $"Jun",0xa8(%eax)
087222db +0x64b:  movl   $"Jul",0xac(%eax)
087222e5 +0x655:  movl   $"Aug",0xb0(%eax)
087222ef +0x65f:  movl   $"Sep",0xb4(%eax)
087222f9 +0x669:  movl   $"Oct",0xb8(%eax)
08722303 +0x673:  movl   $"Nov",0xbc(%eax)
0872230d +0x67d:  movl   $"Dec",0xc0(%eax)
08722317 +0x687:  add    $0x10,%esp
0872231a +0x68a:  pop    %ebx
0872231b +0x68b:  pop    %esi
0872231c +0x68c:  pop    %ebp
0872231d +0x68d:  ret
0872231e +0x68e:  xchg   %ax,%ax
08722320 +0x690:  movl   $0xc8,(%esp)
08722327 +0x697:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0872232c +0x69c:  movl   $0x0,0x4(%eax)
08722333 +0x6a3:  movl   $&_ZTVSt17__timepunct_cacheIcE+0x8,(%eax)
08722339 +0x6a9:  movl   $0x0,0x8(%eax)
08722340 +0x6b0:  movl   $0x0,0xc(%eax)
08722347 +0x6b7:  movl   $0x0,0x10(%eax)
0872234e +0x6be:  movl   $0x0,0x14(%eax)
08722355 +0x6c5:  movl   $0x0,0x18(%eax)
0872235c +0x6cc:  movl   $0x0,0x1c(%eax)
08722363 +0x6d3:  movl   $0x0,0x20(%eax)
0872236a +0x6da:  movl   $0x0,0x24(%eax)
08722371 +0x6e1:  movl   $0x0,0x28(%eax)
08722378 +0x6e8:  movl   $0x0,0x2c(%eax)
0872237f +0x6ef:  movl   $0x0,0x30(%eax)
08722386 +0x6f6:  movl   $0x0,0x34(%eax)
0872238d +0x6fd:  movl   $0x0,0x38(%eax)
08722394 +0x704:  movl   $0x0,0x3c(%eax)
0872239b +0x70b:  movl   $0x0,0x40(%eax)
087223a2 +0x712:  movl   $0x0,0x44(%eax)
087223a9 +0x719:  movl   $0x0,0x48(%eax)
087223b0 +0x720:  movl   $0x0,0x4c(%eax)
087223b7 +0x727:  movl   $0x0,0x50(%eax)
087223be +0x72e:  movl   $0x0,0x54(%eax)
087223c5 +0x735:  movl   $0x0,0x58(%eax)
087223cc +0x73c:  movl   $0x0,0x5c(%eax)
087223d3 +0x743:  movl   $0x0,0x60(%eax)
087223da +0x74a:  movl   $0x0,0x64(%eax)
087223e1 +0x751:  movl   $0x0,0x68(%eax)
087223e8 +0x758:  movl   $0x0,0x6c(%eax)
087223ef +0x75f:  movl   $0x0,0x70(%eax)
087223f6 +0x766:  movl   $0x0,0x74(%eax)
087223fd +0x76d:  movl   $0x0,0x78(%eax)
08722404 +0x774:  movl   $0x0,0x7c(%eax)
0872240b +0x77b:  movl   $0x0,0x80(%eax)
08722415 +0x785:  movl   $0x0,0x84(%eax)
0872241f +0x78f:  movl   $0x0,0x88(%eax)
08722429 +0x799:  movl   $0x0,0x8c(%eax)
08722433 +0x7a3:  movl   $0x0,0x90(%eax)
0872243d +0x7ad:  movl   $0x0,0x94(%eax)
08722447 +0x7b7:  movl   $0x0,0x98(%eax)
08722451 +0x7c1:  movl   $0x0,0x9c(%eax)
0872245b +0x7cb:  movl   $0x0,0xa0(%eax)
08722465 +0x7d5:  movl   $0x0,0xa4(%eax)
0872246f +0x7df:  movl   $0x0,0xa8(%eax)
08722479 +0x7e9:  movl   $0x0,0xac(%eax)
08722483 +0x7f3:  movl   $0x0,0xb0(%eax)
0872248d +0x7fd:  movl   $0x0,0xb4(%eax)
08722497 +0x807:  movl   $0x0,0xb8(%eax)
087224a1 +0x811:  movl   $0x0,0xbc(%eax)
087224ab +0x81b:  movl   $0x0,0xc0(%eax)
087224b5 +0x825:  movb   $0x0,0xc4(%eax)
087224bc +0x82c:  mov    %eax,0x8(%ebx)
087224bf +0x82f:  jmp    08721ca6 <+0x16>
087224c4 +0x834:  nop
087224c5 +0x835:  nop
087224c6 +0x836:  nop
087224c7 +0x837:  nop
087224c8 +0x838:  nop
087224c9 +0x839:  nop
087224ca +0x83a:  nop
087224cb +0x83b:  nop
087224cc +0x83c:  nop
087224cd +0x83d:  nop
087224ce +0x83e:  nop
087224cf +0x83f:  nop
```

## 反编译 C

```c
// std::__timepunct<char>::_M_initialize_timepunct @ 0x8721c90

/* std::__timepunct<char>::_M_initialize_timepunct(__locale_struct*) */

void __thiscall
std::__timepunct<char>::_M_initialize_timepunct(__timepunct<char> *this,__locale_struct *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(this + 8) == 0) {
    puVar4 = operator_new(200);
    puVar4[1] = 0;
    *puVar4 = &PTR____timepunct_cache_08cff1f0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x1f] = 0;
    puVar4[0x20] = 0;
    puVar4[0x21] = 0;
    puVar4[0x22] = 0;
    puVar4[0x23] = 0;
    puVar4[0x24] = 0;
    puVar4[0x25] = 0;
    puVar4[0x26] = 0;
    puVar4[0x27] = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2a] = 0;
    puVar4[0x2b] = 0;
    puVar4[0x2c] = 0;
    puVar4[0x2d] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x2f] = 0;
    puVar4[0x30] = 0;
    *(undefined1 *)(puVar4 + 0x31) = 0;
    *(undefined4 **)(this + 8) = puVar4;
  }
  if (param_1 != (__locale_struct *)0x0) {
    uVar3 = locale::facet::_S_clone_c_locale(&param_1);
    iVar1 = *(int *)(this + 8);
    *(undefined4 *)(this + 0xc) = uVar3;
    uVar3 = __nl_langinfo_l(0x20029,param_1);
    *(undefined4 *)(iVar1 + 8) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2002e,param_1);
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2002a,param_1);
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20031,param_1);
    *(undefined4 *)(iVar1 + 0x14) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20028,param_1);
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20030,param_1);
    *(undefined4 *)(iVar1 + 0x1c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20026,param_1);
    *(undefined4 *)(iVar1 + 0x20) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20027,param_1);
    *(undefined4 *)(iVar1 + 0x24) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2002b,param_1);
    *(undefined4 *)(iVar1 + 0x28) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20007,param_1);
    *(undefined4 *)(iVar1 + 0x2c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20008,param_1);
    *(undefined4 *)(iVar1 + 0x30) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20009,param_1);
    *(undefined4 *)(iVar1 + 0x34) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2000a,param_1);
    *(undefined4 *)(iVar1 + 0x38) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2000b,param_1);
    *(undefined4 *)(iVar1 + 0x3c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2000c,param_1);
    *(undefined4 *)(iVar1 + 0x40) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2000d,param_1);
    *(undefined4 *)(iVar1 + 0x44) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20000,param_1);
    *(undefined4 *)(iVar1 + 0x48) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20001,param_1);
    *(undefined4 *)(iVar1 + 0x4c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20002,param_1);
    *(undefined4 *)(iVar1 + 0x50) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20003,param_1);
    *(undefined4 *)(iVar1 + 0x54) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20004,param_1);
    *(undefined4 *)(iVar1 + 0x58) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20005,param_1);
    *(undefined4 *)(iVar1 + 0x5c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20006,param_1);
    *(undefined4 *)(iVar1 + 0x60) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2001a,param_1);
    *(undefined4 *)(iVar1 + 100) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2001b,param_1);
    *(undefined4 *)(iVar1 + 0x68) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2001c,param_1);
    *(undefined4 *)(iVar1 + 0x6c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2001d,param_1);
    *(undefined4 *)(iVar1 + 0x70) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2001e,param_1);
    *(undefined4 *)(iVar1 + 0x74) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2001f,param_1);
    *(undefined4 *)(iVar1 + 0x78) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20020,param_1);
    *(undefined4 *)(iVar1 + 0x7c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20021,param_1);
    *(undefined4 *)(iVar1 + 0x80) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20022,param_1);
    *(undefined4 *)(iVar1 + 0x84) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20023,param_1);
    *(undefined4 *)(iVar1 + 0x88) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20024,param_1);
    *(undefined4 *)(iVar1 + 0x8c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20025,param_1);
    *(undefined4 *)(iVar1 + 0x90) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2000e,param_1);
    *(undefined4 *)(iVar1 + 0x94) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2000f,param_1);
    *(undefined4 *)(iVar1 + 0x98) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20010,param_1);
    *(undefined4 *)(iVar1 + 0x9c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20011,param_1);
    *(undefined4 *)(iVar1 + 0xa0) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20012,param_1);
    *(undefined4 *)(iVar1 + 0xa4) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20013,param_1);
    *(undefined4 *)(iVar1 + 0xa8) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20014,param_1);
    *(undefined4 *)(iVar1 + 0xac) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20015,param_1);
    *(undefined4 *)(iVar1 + 0xb0) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20016,param_1);
    *(undefined4 *)(iVar1 + 0xb4) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20017,param_1);
    *(undefined4 *)(iVar1 + 0xb8) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20018,param_1);
    iVar2 = *(int *)(this + 8);
    *(undefined4 *)(iVar1 + 0xbc) = uVar3;
    uVar3 = __nl_langinfo_l(0x20019,param_1);
    *(undefined4 *)(iVar2 + 0xc0) = uVar3;
    return;
  }
  uVar3 = locale::facet::_S_get_c_locale();
  *(undefined4 *)(this + 0xc) = uVar3;
  iVar1 = *(int *)(this + 8);
  *(undefined **)(iVar1 + 8) = &DAT_08cfed42;
  *(undefined **)(iVar1 + 0xc) = &DAT_08cfed42;
  *(char **)(iVar1 + 0x10) = "%H:%M:%S";
  *(char **)(iVar1 + 0x14) = "%H:%M:%S";
  *(undefined1 **)(iVar1 + 0x18) = &DAT_08d0c9a4;
  *(undefined1 **)(iVar1 + 0x1c) = &DAT_08d0c9a4;
  *(undefined **)(iVar1 + 0x20) = &DAT_08de05df;
  *(undefined **)(iVar1 + 0x24) = &DAT_08d01574;
  *(undefined1 **)(iVar1 + 0x28) = &DAT_08d0c9a4;
  *(char **)(iVar1 + 0x2c) = "Sunday";
  *(char **)(iVar1 + 0x30) = "Monday";
  *(char **)(iVar1 + 0x34) = "Tuesday";
  *(char **)(iVar1 + 0x38) = "Wednesday";
  *(char **)(iVar1 + 0x3c) = "Thursday";
  *(char **)(iVar1 + 0x40) = "Friday";
  *(char **)(iVar1 + 0x44) = "Saturday";
  *(undefined **)(iVar1 + 0x48) = &DAT_08d015b0;
  *(undefined **)(iVar1 + 0x4c) = &DAT_08d015b4;
  *(undefined **)(iVar1 + 0x50) = &DAT_08d015b8;
  *(undefined **)(iVar1 + 0x54) = &DAT_08d015bc;
  *(undefined **)(iVar1 + 0x58) = &DAT_08d015c0;
  *(undefined **)(iVar1 + 0x5c) = &DAT_08d015c4;
  *(undefined **)(iVar1 + 0x60) = &DAT_08d015c8;
  *(char **)(iVar1 + 100) = "January";
  *(char **)(iVar1 + 0x68) = "February";
  *(char **)(iVar1 + 0x6c) = "March";
  *(char **)(iVar1 + 0x70) = "April";
  *(undefined **)(iVar1 + 0x74) = &DAT_08d015e9;
  *(undefined **)(iVar1 + 0x78) = &DAT_08d015ed;
  *(undefined **)(iVar1 + 0x7c) = &DAT_08d015f2;
  *(char **)(iVar1 + 0x80) = "August";
  *(char **)(iVar1 + 0x84) = "September";
  *(char **)(iVar1 + 0x88) = "October";
  *(char **)(iVar1 + 0x8c) = "November";
  *(char **)(iVar1 + 0x90) = "December";
  *(undefined **)(iVar1 + 0x94) = &DAT_08d01622;
  *(undefined **)(iVar1 + 0x98) = &DAT_08d01626;
  *(undefined **)(iVar1 + 0x9c) = &DAT_08d0162a;
  *(undefined **)(iVar1 + 0xa0) = &DAT_08d0162e;
  *(undefined **)(iVar1 + 0xa4) = &DAT_08d015e9;
  *(undefined **)(iVar1 + 0xa8) = &DAT_08d01632;
  *(undefined **)(iVar1 + 0xac) = &DAT_08d01636;
  *(undefined **)(iVar1 + 0xb0) = &DAT_08d0163a;
  *(undefined **)(iVar1 + 0xb4) = &DAT_08d0163e;
  *(undefined **)(iVar1 + 0xb8) = &DAT_08d01642;
  *(undefined **)(iVar1 + 0xbc) = &DAT_08d01646;
  *(undefined **)(iVar1 + 0xc0) = &DAT_08d0164a;
  return;
}
```
