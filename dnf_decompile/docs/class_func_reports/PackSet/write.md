# write

`_ZN7PackSet5writeEPKcS1_j`

`PackSet::write(char const*, char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac60fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac60fa  _ZN7PackSet5writeEPKcS1_j
#           PackSet::write(char const*, char const*, unsigned int)
# range [0x08ac60fa, 0x08ac6987]
08ac60fa +0x000:  push   %ebp
08ac60fb +0x001:  mov    %esp,%ebp
08ac60fd +0x003:  push   %esi
08ac60fe +0x004:  push   %ebx
08ac60ff +0x005:  sub    $0x290,%esp
08ac6105 +0x00b:  movl   $0x0,-0x18(%ebp)
08ac610c +0x012:  lea    -0x34(%ebp),%eax
08ac610f +0x015:  mov    %eax,(%esp)
08ac6112 +0x018:  call   08ac79dc <_ZN16IPackFileProcess15getCommonBufferEj+0x29e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x29e
08ac6117 +0x01d:  lea    -0x38(%ebp),%eax
08ac611a +0x020:  mov    %eax,(%esp)
08ac611d +0x023:  call   08ac80d6 <_ZN16IPackFileProcess15getCommonBufferEj+0x998>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x998
08ac6122 +0x028:  lea    -0x44(%ebp),%eax
08ac6125 +0x02b:  mov    %eax,(%esp)
08ac6128 +0x02e:  call   08ac80e4 <_ZN16IPackFileProcess15getCommonBufferEj+0x9a6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x9a6
08ac612d +0x033:  movl   $0x0,-0xc(%ebp)
08ac6134 +0x03a:  mov    0x8(%ebp),%eax
08ac6137 +0x03d:  mov    0xc(%eax),%eax
08ac613a +0x040:  test   %eax,%eax
08ac613c +0x042:  je     08ac6192 <+0x98>
08ac613e +0x044:  mov    &stdout,%eax
08ac6143 +0x049:  movl   $"PACK_LOAD_FULL needed",0x8(%esp)
08ac614b +0x051:  movl   $"%s\n",0x4(%esp)
08ac6153 +0x059:  mov    %eax,(%esp)
08ac6156 +0x05c:  call   0807da90 <_init+0x388>
08ac615b +0x061:  mov    &stdout,%eax
08ac6160 +0x066:  movl   $&_ZZN7PackSet5writeEPKcS1_jE12__FUNCTION__,0x10(%esp)
08ac6168 +0x06e:  movl   $0x4e8,0xc(%esp)
08ac6170 +0x076:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac6178 +0x07e:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac6180 +0x086:  mov    %eax,(%esp)
08ac6183 +0x089:  call   0807da90 <_init+0x388>
08ac6188 +0x08e:  mov    $0x1,%ebx
08ac618d +0x093:  jmp    08ac6971 <+0x877>
08ac6192 +0x098:  mov    0x8(%ebp),%eax
08ac6195 +0x09b:  mov    %eax,(%esp)
08ac6198 +0x09e:  call   08ac4970 <_ZNK7PackSet8is_dirtyEv>  ; PackSet::is_dirty() const
08ac619d +0x0a3:  test   %al,%al
08ac619f +0x0a5:  je     08ac61ed <+0xf3>
08ac61a1 +0x0a7:  mov    0x8(%ebp),%eax
08ac61a4 +0x0aa:  mov    %eax,(%esp)
08ac61a7 +0x0ad:  call   08ac58ee <_ZN7PackSet4sortEv>  ; PackSet::sort()
08ac61ac +0x0b2:  cmp    $0x1,%eax
08ac61af +0x0b5:  sete   %al
08ac61b2 +0x0b8:  test   %al,%al
08ac61b4 +0x0ba:  je     08ac61ed <+0xf3>
08ac61b6 +0x0bc:  mov    &stdout,%eax
08ac61bb +0x0c1:  movl   $&_ZZN7PackSet5writeEPKcS1_jE12__FUNCTION__,0x10(%esp)
08ac61c3 +0x0c9:  movl   $0x4f0,0xc(%esp)
08ac61cb +0x0d1:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac61d3 +0x0d9:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac61db +0x0e1:  mov    %eax,(%esp)
08ac61de +0x0e4:  call   0807da90 <_init+0x388>
08ac61e3 +0x0e9:  mov    $0x1,%ebx
08ac61e8 +0x0ee:  jmp    08ac6971 <+0x877>
08ac61ed +0x0f3:  mov    0x8(%ebp),%eax
08ac61f0 +0x0f6:  lea    0x10(%eax),%edx
08ac61f3 +0x0f9:  lea    -0x26c(%ebp),%eax
08ac61f9 +0x0ff:  mov    %edx,0x4(%esp)
08ac61fd +0x103:  mov    %eax,(%esp)
08ac6200 +0x106:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac6205 +0x10b:  sub    $0x4,%esp
08ac6208 +0x10e:  mov    -0x26c(%ebp),%eax
08ac620e +0x114:  mov    %eax,-0x34(%ebp)
08ac6211 +0x117:  jmp    08ac62e8 <+0x1ee>
08ac6216 +0x11c:  lea    -0x58(%ebp),%eax
08ac6219 +0x11f:  mov    %eax,(%esp)
08ac621c +0x122:  call   08ac8156 <_ZN16IPackFileProcess15getCommonBufferEj+0xa18>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xa18
08ac6221 +0x127:  lea    -0x34(%ebp),%eax
08ac6224 +0x12a:  mov    %eax,(%esp)
08ac6227 +0x12d:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac622c +0x132:  add    $0x8,%eax
08ac622f +0x135:  mov    %eax,(%esp)
08ac6232 +0x138:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac6237 +0x13d:  movl   $0x104,0x10(%esp)
08ac623f +0x145:  lea    -0x260(%ebp),%edx
08ac6245 +0x14b:  mov    %edx,0xc(%esp)
08ac6249 +0x14f:  movl   $0x104,0x8(%esp)
08ac6251 +0x157:  lea    -0x15c(%ebp),%edx
08ac6257 +0x15d:  mov    %edx,0x4(%esp)
08ac625b +0x161:  mov    %eax,(%esp)
08ac625e +0x164:  call   08ac3b9a <_Z17_correct_filenamePKcPcjS1_j>  ; _correct_filename(char const*, char*, unsigned int, char*, unsigned int)
08ac6263 +0x169:  cmp    $0x1,%eax
08ac6266 +0x16c:  sete   %al
08ac6269 +0x16f:  test   %al,%al
08ac626b +0x171:  je     08ac629f <+0x1a5>
08ac626d +0x173:  mov    &stdout,%eax
08ac6272 +0x178:  movl   $&_ZZN7PackSet5writeEPKcS1_jE12__FUNCTION__,0x10(%esp)
08ac627a +0x180:  movl   $0x4ff,0xc(%esp)
08ac6282 +0x188:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac628a +0x190:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac6292 +0x198:  mov    %eax,(%esp)
08ac6295 +0x19b:  call   0807da90 <_init+0x388>
08ac629a +0x1a0:  jmp    08ac6927 <+0x82d>
08ac629f +0x1a5:  lea    -0x260(%ebp),%eax
08ac62a5 +0x1ab:  mov    %eax,0x4(%esp)
08ac62a9 +0x1af:  lea    -0x15c(%ebp),%eax
08ac62af +0x1b5:  mov    %eax,(%esp)
08ac62b2 +0x1b8:  call   08ac3b55 <_ZL11_write_hashPKcS0_>  ; _write_hash(char const*, char const*)
08ac62b7 +0x1bd:  mov    %eax,-0x58(%ebp)
08ac62ba +0x1c0:  lea    -0x34(%ebp),%eax
08ac62bd +0x1c3:  mov    %eax,(%esp)
08ac62c0 +0x1c6:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac62c5 +0x1cb:  add    $0x4,%eax
08ac62c8 +0x1ce:  mov    %eax,-0x54(%ebp)
08ac62cb +0x1d1:  lea    -0x58(%ebp),%eax
08ac62ce +0x1d4:  mov    %eax,0x4(%esp)
08ac62d2 +0x1d8:  lea    -0x44(%ebp),%eax
08ac62d5 +0x1db:  mov    %eax,(%esp)
08ac62d8 +0x1de:  call   08ac816e <_ZN16IPackFileProcess15getCommonBufferEj+0xa30>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xa30
08ac62dd +0x1e3:  lea    -0x34(%ebp),%eax
08ac62e0 +0x1e6:  mov    %eax,(%esp)
08ac62e3 +0x1e9:  call   08ac7a0e <_ZN16IPackFileProcess15getCommonBufferEj+0x2d0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2d0
08ac62e8 +0x1ee:  mov    0x8(%ebp),%eax
08ac62eb +0x1f1:  lea    0x10(%eax),%edx
08ac62ee +0x1f4:  lea    -0x30(%ebp),%eax
08ac62f1 +0x1f7:  mov    %edx,0x4(%esp)
08ac62f5 +0x1fb:  mov    %eax,(%esp)
08ac62f8 +0x1fe:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac62fd +0x203:  sub    $0x4,%esp
08ac6300 +0x206:  lea    -0x30(%ebp),%eax
08ac6303 +0x209:  mov    %eax,0x4(%esp)
08ac6307 +0x20d:  lea    -0x34(%ebp),%eax
08ac630a +0x210:  mov    %eax,(%esp)
08ac630d +0x213:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac6312 +0x218:  test   %al,%al
08ac6314 +0x21a:  jne    08ac6216 <+0x11c>
08ac631a +0x220:  lea    -0x2c(%ebp),%eax
08ac631d +0x223:  lea    -0x44(%ebp),%edx
08ac6320 +0x226:  mov    %edx,0x4(%esp)
08ac6324 +0x22a:  mov    %eax,(%esp)
08ac6327 +0x22d:  call   08ac8206 <_ZN16IPackFileProcess15getCommonBufferEj+0xac8>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xac8
08ac632c +0x232:  sub    $0x4,%esp
08ac632f +0x235:  lea    -0x28(%ebp),%eax
08ac6332 +0x238:  lea    -0x44(%ebp),%edx
08ac6335 +0x23b:  mov    %edx,0x4(%esp)
08ac6339 +0x23f:  mov    %eax,(%esp)
08ac633c +0x242:  call   08ac81e2 <_ZN16IPackFileProcess15getCommonBufferEj+0xaa4>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xaa4
08ac6341 +0x247:  sub    $0x4,%esp
08ac6344 +0x24a:  movl   $&_ZL12_index_less2RKSt4pairImP10IndexEntryES4_,0x8(%esp)
08ac634c +0x252:  mov    -0x2c(%ebp),%eax
08ac634f +0x255:  mov    %eax,0x4(%esp)
08ac6353 +0x259:  mov    -0x28(%ebp),%eax
08ac6356 +0x25c:  mov    %eax,(%esp)
08ac6359 +0x25f:  call   08ac822c <_ZN16IPackFileProcess15getCommonBufferEj+0xaee>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xaee
08ac635e +0x264:  movl   $0x0,-0x14(%ebp)
08ac6365 +0x26b:  lea    -0x26c(%ebp),%eax
08ac636b +0x271:  lea    -0x44(%ebp),%edx
08ac636e +0x274:  mov    %edx,0x4(%esp)
08ac6372 +0x278:  mov    %eax,(%esp)
08ac6375 +0x27b:  call   08ac81e2 <_ZN16IPackFileProcess15getCommonBufferEj+0xaa4>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xaa4
08ac637a +0x280:  sub    $0x4,%esp
08ac637d +0x283:  mov    -0x26c(%ebp),%eax
08ac6383 +0x289:  mov    %eax,-0x38(%ebp)
08ac6386 +0x28c:  jmp    08ac63c1 <+0x2c7>
08ac6388 +0x28e:  lea    -0x38(%ebp),%eax
08ac638b +0x291:  mov    %eax,(%esp)
08ac638e +0x294:  call   08ac82e0 <_ZN16IPackFileProcess15getCommonBufferEj+0xba2>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xba2
08ac6393 +0x299:  mov    0x4(%eax),%eax
08ac6396 +0x29c:  mov    -0x14(%ebp),%edx
08ac6399 +0x29f:  mov    %edx,0x14(%eax)
08ac639c +0x2a2:  lea    -0x38(%ebp),%eax
08ac639f +0x2a5:  mov    %eax,(%esp)
08ac63a2 +0x2a8:  call   08ac82e0 <_ZN16IPackFileProcess15getCommonBufferEj+0xba2>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xba2
08ac63a7 +0x2ad:  mov    0x4(%eax),%eax
08ac63aa +0x2b0:  mov    0xc(%eax),%edx
08ac63ad +0x2b3:  mov    -0x14(%ebp),%eax
08ac63b0 +0x2b6:  lea    (%edx,%eax,1),%eax
08ac63b3 +0x2b9:  mov    %eax,-0x14(%ebp)
08ac63b6 +0x2bc:  lea    -0x38(%ebp),%eax
08ac63b9 +0x2bf:  mov    %eax,(%esp)
08ac63bc +0x2c2:  call   08ac82ca <_ZN16IPackFileProcess15getCommonBufferEj+0xb8c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xb8c
08ac63c1 +0x2c7:  lea    -0x24(%ebp),%eax
08ac63c4 +0x2ca:  lea    -0x44(%ebp),%edx
08ac63c7 +0x2cd:  mov    %edx,0x4(%esp)
08ac63cb +0x2d1:  mov    %eax,(%esp)
08ac63ce +0x2d4:  call   08ac8206 <_ZN16IPackFileProcess15getCommonBufferEj+0xac8>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xac8
08ac63d3 +0x2d9:  sub    $0x4,%esp
08ac63d6 +0x2dc:  lea    -0x24(%ebp),%eax
08ac63d9 +0x2df:  mov    %eax,0x4(%esp)
08ac63dd +0x2e3:  lea    -0x38(%ebp),%eax
08ac63e0 +0x2e6:  mov    %eax,(%esp)
08ac63e3 +0x2e9:  call   08ac829d <_ZN16IPackFileProcess15getCommonBufferEj+0xb5f>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xb5f
08ac63e8 +0x2ee:  test   %al,%al
08ac63ea +0x2f0:  jne    08ac6388 <+0x28e>
08ac63ec +0x2f2:  mov    &_ZL20TEMP_HEADER_FILENAME,%eax
08ac63f1 +0x2f7:  movl   $"wb",0x4(%esp)
08ac63f9 +0x2ff:  mov    %eax,(%esp)
08ac63fc +0x302:  call   0807e770 <_init+0x1068>
08ac6401 +0x307:  mov    %eax,-0x18(%ebp)
08ac6404 +0x30a:  cmpl   $0x0,-0x18(%ebp)
08ac6408 +0x30e:  jne    08ac645b <+0x361>
08ac640a +0x310:  mov    &_ZL20TEMP_HEADER_FILENAME,%edx
08ac6410 +0x316:  mov    &stdout,%eax
08ac6415 +0x31b:  mov    %edx,0x8(%esp)
08ac6419 +0x31f:  movl   $"_tfopen failed. %s",0x4(%esp)
08ac6421 +0x327:  mov    %eax,(%esp)
08ac6424 +0x32a:  call   0807da90 <_init+0x388>
08ac6429 +0x32f:  mov    &stdout,%eax
08ac642e +0x334:  movl   $&_ZZN7PackSet5writeEPKcS1_jE12__FUNCTION__,0x10(%esp)
08ac6436 +0x33c:  movl   $0x514,0xc(%esp)
08ac643e +0x344:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac6446 +0x34c:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac644e +0x354:  mov    %eax,(%esp)
08ac6451 +0x357:  call   0807da90 <_init+0x388>
08ac6456 +0x35c:  jmp    08ac6927 <+0x82d>
08ac645b +0x361:  mov    0x8(%ebp),%eax
08ac645e +0x364:  lea    0x10(%eax),%edx
08ac6461 +0x367:  lea    -0x26c(%ebp),%eax
08ac6467 +0x36d:  mov    %edx,0x4(%esp)
08ac646b +0x371:  mov    %eax,(%esp)
08ac646e +0x374:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac6473 +0x379:  sub    $0x4,%esp
08ac6476 +0x37c:  mov    -0x26c(%ebp),%eax
08ac647c +0x382:  mov    %eax,-0x34(%ebp)
08ac647f +0x385:  jmp    08ac6512 <+0x418>
08ac6484 +0x38a:  lea    -0x34(%ebp),%eax
08ac6487 +0x38d:  mov    %eax,(%esp)
08ac648a +0x390:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac648f +0x395:  mov    -0x18(%ebp),%edx
08ac6492 +0x398:  mov    %edx,0xc(%esp)
08ac6496 +0x39c:  movl   $0x1,0x8(%esp)
08ac649e +0x3a4:  movl   $0x4,0x4(%esp)
08ac64a6 +0x3ac:  mov    %eax,(%esp)
08ac64a9 +0x3af:  call   0807e320 <_init+0xc18>
08ac64ae +0x3b4:  lea    -0x34(%ebp),%eax
08ac64b1 +0x3b7:  mov    %eax,(%esp)
08ac64b4 +0x3ba:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac64b9 +0x3bf:  lea    0x4(%eax),%edx
08ac64bc +0x3c2:  mov    -0x18(%ebp),%eax
08ac64bf +0x3c5:  mov    %eax,0x4(%esp)
08ac64c3 +0x3c9:  mov    %edx,(%esp)
08ac64c6 +0x3cc:  call   08ac4284 <_ZN10IndexEntry10write_infoEP8_IO_FILE>  ; IndexEntry::write_info(_IO_FILE*)
08ac64cb +0x3d1:  cmp    $0x1,%eax
08ac64ce +0x3d4:  sete   %al
08ac64d1 +0x3d7:  test   %al,%al
08ac64d3 +0x3d9:  je     08ac6507 <+0x40d>
08ac64d5 +0x3db:  mov    &stdout,%eax
08ac64da +0x3e0:  movl   $&_ZZN7PackSet5writeEPKcS1_jE12__FUNCTION__,0x10(%esp)
08ac64e2 +0x3e8:  movl   $0x51c,0xc(%esp)
08ac64ea +0x3f0:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac64f2 +0x3f8:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac64fa +0x400:  mov    %eax,(%esp)
08ac64fd +0x403:  call   0807da90 <_init+0x388>
08ac6502 +0x408:  jmp    08ac6927 <+0x82d>
08ac6507 +0x40d:  lea    -0x34(%ebp),%eax
08ac650a +0x410:  mov    %eax,(%esp)
08ac650d +0x413:  call   08ac7a0e <_ZN16IPackFileProcess15getCommonBufferEj+0x2d0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2d0
08ac6512 +0x418:  mov    0x8(%ebp),%eax
08ac6515 +0x41b:  lea    0x10(%eax),%edx
08ac6518 +0x41e:  lea    -0x20(%ebp),%eax
08ac651b +0x421:  mov    %edx,0x4(%esp)
08ac651f +0x425:  mov    %eax,(%esp)
08ac6522 +0x428:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac6527 +0x42d:  sub    $0x4,%esp
08ac652a +0x430:  lea    -0x20(%ebp),%eax
08ac652d +0x433:  mov    %eax,0x4(%esp)
08ac6531 +0x437:  lea    -0x34(%ebp),%eax
08ac6534 +0x43a:  mov    %eax,(%esp)
08ac6537 +0x43d:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac653c +0x442:  test   %al,%al
08ac653e +0x444:  jne    08ac6484 <+0x38a>
08ac6544 +0x44a:  mov    -0x18(%ebp),%eax
08ac6547 +0x44d:  mov    %eax,(%esp)
08ac654a +0x450:  call   0807dea0 <_init+0x798>
08ac654f +0x455:  mov    &_ZL20TEMP_HEADER_FILENAME,%eax
08ac6554 +0x45a:  movl   $"rb",0x4(%esp)
08ac655c +0x462:  mov    %eax,(%esp)
08ac655f +0x465:  call   0807e770 <_init+0x1068>
08ac6564 +0x46a:  mov    %eax,-0x18(%ebp)
08ac6567 +0x46d:  cmpl   $0x0,-0x18(%ebp)
08ac656b +0x471:  jne    08ac65c0 <+0x4c6>
08ac656d +0x473:  mov    &stdout,%eax
08ac6572 +0x478:  mov    0xc(%ebp),%edx
08ac6575 +0x47b:  mov    %edx,0x8(%esp)
08ac6579 +0x47f:  movl   $"_tfopen failed. %s",0x4(%esp)
08ac6581 +0x487:  mov    %eax,(%esp)
08ac6584 +0x48a:  call   0807da90 <_init+0x388>
08ac6589 +0x48f:  mov    &stdout,%eax
08ac658e +0x494:  movl   $&_ZZN7PackSet5writeEPKcS1_jE12__FUNCTION__,0x10(%esp)
08ac6596 +0x49c:  movl   $0x526,0xc(%esp)
08ac659e +0x4a4:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac65a6 +0x4ac:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac65ae +0x4b4:  mov    %eax,(%esp)
08ac65b1 +0x4b7:  call   0807da90 <_init+0x388>
08ac65b6 +0x4bc:  mov    $0x1,%ebx
08ac65bb +0x4c1:  jmp    08ac6971 <+0x877>
08ac65c0 +0x4c6:  movl   $0x2,0x8(%esp)
08ac65c8 +0x4ce:  movl   $0x0,0x4(%esp)
08ac65d0 +0x4d6:  mov    -0x18(%ebp),%eax
08ac65d3 +0x4d9:  mov    %eax,(%esp)
08ac65d6 +0x4dc:  call   0807e0b0 <_init+0x9a8>
08ac65db +0x4e1:  mov    -0x18(%ebp),%eax
08ac65de +0x4e4:  mov    %eax,(%esp)
08ac65e1 +0x4e7:  call   0807d9d0 <_init+0x2c8>
08ac65e6 +0x4ec:  mov    %eax,-0x10(%ebp)
08ac65e9 +0x4ef:  cmpl   $0x0,-0x10(%ebp)
08ac65ed +0x4f3:  jns    08ac65f9 <+0x4ff>
08ac65ef +0x4f5:  mov    $0x1,%ebx
08ac65f4 +0x4fa:  jmp    08ac6971 <+0x877>
08ac65f9 +0x4ff:  movl   $0x0,0x8(%esp)
08ac6601 +0x507:  movl   $0x0,0x4(%esp)
08ac6609 +0x50f:  mov    -0x18(%ebp),%eax
08ac660c +0x512:  mov    %eax,(%esp)
08ac660f +0x515:  call   0807e0b0 <_init+0x9a8>
08ac6614 +0x51a:  mov    -0x10(%ebp),%eax
08ac6617 +0x51d:  add    $0x3,%eax
08ac661a +0x520:  and    $0xfffffffc,%eax
08ac661d +0x523:  mov    %eax,-0x48(%ebp)
08ac6620 +0x526:  mov    -0x48(%ebp),%eax
08ac6623 +0x529:  mov    %eax,(%esp)
08ac6626 +0x52c:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ac662b +0x531:  mov    %eax,-0xc(%ebp)
08ac662e +0x534:  mov    -0x48(%ebp),%eax
08ac6631 +0x537:  mov    %eax,0x8(%esp)
08ac6635 +0x53b:  movl   $0x0,0x4(%esp)
08ac663d +0x543:  mov    -0xc(%ebp),%eax
08ac6640 +0x546:  mov    %eax,(%esp)
08ac6643 +0x549:  call   0807dcc0 <_init+0x5b8>
08ac6648 +0x54e:  mov    -0x10(%ebp),%eax
08ac664b +0x551:  mov    -0x18(%ebp),%edx
08ac664e +0x554:  mov    %edx,0xc(%esp)
08ac6652 +0x558:  movl   $0x1,0x8(%esp)
08ac665a +0x560:  mov    %eax,0x4(%esp)
08ac665e +0x564:  mov    -0xc(%ebp),%eax
08ac6661 +0x567:  mov    %eax,(%esp)
08ac6664 +0x56a:  call   0807dd50 <_init+0x648>
08ac6669 +0x56f:  mov    -0x18(%ebp),%eax
08ac666c +0x572:  mov    %eax,(%esp)
08ac666f +0x575:  call   0807dea0 <_init+0x798>
08ac6674 +0x57a:  mov    0x8(%ebp),%eax
08ac6677 +0x57d:  add    $0x10,%eax
08ac667a +0x580:  mov    %eax,(%esp)
08ac667d +0x583:  call   08ac796e <_ZN16IPackFileProcess15getCommonBufferEj+0x230>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x230
08ac6682 +0x588:  mov    %eax,-0x4c(%ebp)
08ac6685 +0x58b:  mov    -0x48(%ebp),%eax
08ac6688 +0x58e:  mov    %eax,%ecx
08ac668a +0x590:  mov    -0xc(%ebp),%edx
08ac668d +0x593:  mov    -0x4c(%ebp),%eax
08ac6690 +0x596:  mov    %ecx,0x8(%esp)
08ac6694 +0x59a:  mov    %edx,0x4(%esp)
08ac6698 +0x59e:  mov    %eax,(%esp)
08ac669b +0x5a1:  call   08ad34ae <_ZN5Crc325crc32EjPKcj>  ; Crc32::crc32(unsigned int, char const*, unsigned int)
08ac66a0 +0x5a6:  mov    %eax,-0x50(%ebp)
08ac66a3 +0x5a9:  mov    -0x48(%ebp),%eax
08ac66a6 +0x5ac:  mov    %eax,%edx
08ac66a8 +0x5ae:  mov    -0x50(%ebp),%eax
08ac66ab +0x5b1:  mov    %edx,0x8(%esp)
08ac66af +0x5b5:  mov    -0xc(%ebp),%edx
08ac66b2 +0x5b8:  mov    %edx,0x4(%esp)
08ac66b6 +0x5bc:  mov    %eax,(%esp)
08ac66b9 +0x5bf:  call   08ac38be <_ZL8_encryptjPhj>  ; _encrypt(unsigned int, unsigned char*, unsigned int)
08ac66be +0x5c4:  movl   $"wb",0x4(%esp)
08ac66c6 +0x5cc:  mov    0xc(%ebp),%eax
08ac66c9 +0x5cf:  mov    %eax,(%esp)
08ac66cc +0x5d2:  call   0807e770 <_init+0x1068>
08ac66d1 +0x5d7:  mov    %eax,-0x18(%ebp)
08ac66d4 +0x5da:  cmpl   $0x0,-0x18(%ebp)
08ac66d8 +0x5de:  jne    08ac673e <+0x644>
08ac66da +0x5e0:  cmpl   $0x0,-0xc(%ebp)
08ac66de +0x5e4:  je     08ac66eb <+0x5f1>
08ac66e0 +0x5e6:  mov    -0xc(%ebp),%eax
08ac66e3 +0x5e9:  mov    %eax,(%esp)
08ac66e6 +0x5ec:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac66eb +0x5f1:  mov    &stdout,%eax
08ac66f0 +0x5f6:  mov    0xc(%ebp),%edx
08ac66f3 +0x5f9:  mov    %edx,0x8(%esp)
08ac66f7 +0x5fd:  movl   $"_tfopen failed. %s",0x4(%esp)
08ac66ff +0x605:  mov    %eax,(%esp)
08ac6702 +0x608:  call   0807da90 <_init+0x388>
08ac6707 +0x60d:  mov    &stdout,%eax
08ac670c +0x612:  movl   $&_ZZN7PackSet5writeEPKcS1_jE12__FUNCTION__,0x10(%esp)
08ac6714 +0x61a:  movl   $0x551,0xc(%esp)
08ac671c +0x622:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac6724 +0x62a:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac672c +0x632:  mov    %eax,(%esp)
08ac672f +0x635:  call   0807da90 <_init+0x388>
08ac6734 +0x63a:  mov    $0x1,%ebx
08ac6739 +0x63f:  jmp    08ac6971 <+0x877>
08ac673e +0x644:  mov    -0x18(%ebp),%eax
08ac6741 +0x647:  mov    %eax,0x4(%esp)
08ac6745 +0x64b:  mov    0x10(%ebp),%eax
08ac6748 +0x64e:  mov    %eax,(%esp)
08ac674b +0x651:  call   08ac3714 <_ZL11_fwrite_strPKcP8_IO_FILE>  ; _fwrite_str(char const*, _IO_FILE*)
08ac6750 +0x656:  mov    -0x18(%ebp),%eax
08ac6753 +0x659:  mov    %eax,0xc(%esp)
08ac6757 +0x65d:  movl   $0x1,0x8(%esp)
08ac675f +0x665:  movl   $0x4,0x4(%esp)
08ac6767 +0x66d:  lea    0x14(%ebp),%eax
08ac676a +0x670:  mov    %eax,(%esp)
08ac676d +0x673:  call   0807e320 <_init+0xc18>
08ac6772 +0x678:  mov    -0x18(%ebp),%eax
08ac6775 +0x67b:  mov    %eax,0xc(%esp)
08ac6779 +0x67f:  movl   $0x1,0x8(%esp)
08ac6781 +0x687:  movl   $0x4,0x4(%esp)
08ac6789 +0x68f:  lea    -0x48(%ebp),%eax
08ac678c +0x692:  mov    %eax,(%esp)
08ac678f +0x695:  call   0807e320 <_init+0xc18>
08ac6794 +0x69a:  mov    -0x18(%ebp),%eax
08ac6797 +0x69d:  mov    %eax,0xc(%esp)
08ac679b +0x6a1:  movl   $0x1,0x8(%esp)
08ac67a3 +0x6a9:  movl   $0x4,0x4(%esp)
08ac67ab +0x6b1:  lea    -0x50(%ebp),%eax
08ac67ae +0x6b4:  mov    %eax,(%esp)
08ac67b1 +0x6b7:  call   0807e320 <_init+0xc18>
08ac67b6 +0x6bc:  mov    -0x18(%ebp),%eax
08ac67b9 +0x6bf:  mov    %eax,0xc(%esp)
08ac67bd +0x6c3:  movl   $0x1,0x8(%esp)
08ac67c5 +0x6cb:  movl   $0x4,0x4(%esp)
08ac67cd +0x6d3:  lea    -0x4c(%ebp),%eax
08ac67d0 +0x6d6:  mov    %eax,(%esp)
08ac67d3 +0x6d9:  call   0807e320 <_init+0xc18>
08ac67d8 +0x6de:  mov    -0x48(%ebp),%eax
08ac67db +0x6e1:  mov    -0x18(%ebp),%edx
08ac67de +0x6e4:  mov    %edx,0xc(%esp)
08ac67e2 +0x6e8:  movl   $0x1,0x8(%esp)
08ac67ea +0x6f0:  mov    %eax,0x4(%esp)
08ac67ee +0x6f4:  mov    -0xc(%ebp),%eax
08ac67f1 +0x6f7:  mov    %eax,(%esp)
08ac67f4 +0x6fa:  call   0807e320 <_init+0xc18>
08ac67f9 +0x6ff:  lea    -0x26c(%ebp),%eax
08ac67ff +0x705:  lea    -0x44(%ebp),%edx
08ac6802 +0x708:  mov    %edx,0x4(%esp)
08ac6806 +0x70c:  mov    %eax,(%esp)
08ac6809 +0x70f:  call   08ac81e2 <_ZN16IPackFileProcess15getCommonBufferEj+0xaa4>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xaa4
08ac680e +0x714:  sub    $0x4,%esp
08ac6811 +0x717:  mov    -0x26c(%ebp),%eax
08ac6817 +0x71d:  mov    %eax,-0x38(%ebp)
08ac681a +0x720:  jmp    08ac68e6 <+0x7ec>
08ac681f +0x725:  lea    -0x38(%ebp),%eax
08ac6822 +0x728:  mov    %eax,(%esp)
08ac6825 +0x72b:  call   08ac82e0 <_ZN16IPackFileProcess15getCommonBufferEj+0xba2>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xba2
08ac682a +0x730:  mov    0x4(%eax),%eax
08ac682d +0x733:  mov    0x18(%eax),%eax
08ac6830 +0x736:  test   %eax,%eax
08ac6832 +0x738:  sete   %al
08ac6835 +0x73b:  test   %al,%al
08ac6837 +0x73d:  je     08ac689e <+0x7a4>
08ac6839 +0x73f:  lea    -0x38(%ebp),%eax
08ac683c +0x742:  mov    %eax,(%esp)
08ac683f +0x745:  call   08ac82e0 <_ZN16IPackFileProcess15getCommonBufferEj+0xba2>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xba2
08ac6844 +0x74a:  mov    0x4(%eax),%eax
08ac6847 +0x74d:  add    $0x4,%eax
08ac684a +0x750:  mov    %eax,(%esp)
08ac684d +0x753:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac6852 +0x758:  mov    &stdout,%edx
08ac6858 +0x75e:  mov    %eax,0x8(%esp)
08ac685c +0x762:  movl   $"content is NULL. %s",0x4(%esp)
08ac6864 +0x76a:  mov    %edx,(%esp)
08ac6867 +0x76d:  call   0807da90 <_init+0x388>
08ac686c +0x772:  mov    &stdout,%eax
08ac6871 +0x777:  movl   $&_ZZN7PackSet5writeEPKcS1_jE12__FUNCTION__,0x10(%esp)
08ac6879 +0x77f:  movl   $0x560,0xc(%esp)
08ac6881 +0x787:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac6889 +0x78f:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac6891 +0x797:  mov    %eax,(%esp)
08ac6894 +0x79a:  call   0807da90 <_init+0x388>
08ac6899 +0x79f:  jmp    08ac6927 <+0x82d>
08ac689e +0x7a4:  lea    -0x38(%ebp),%eax
08ac68a1 +0x7a7:  mov    %eax,(%esp)
08ac68a4 +0x7aa:  call   08ac82e0 <_ZN16IPackFileProcess15getCommonBufferEj+0xba2>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xba2
08ac68a9 +0x7af:  mov    0x4(%eax),%eax
08ac68ac +0x7b2:  mov    0xc(%eax),%ebx
08ac68af +0x7b5:  lea    -0x38(%ebp),%eax
08ac68b2 +0x7b8:  mov    %eax,(%esp)
08ac68b5 +0x7bb:  call   08ac82e0 <_ZN16IPackFileProcess15getCommonBufferEj+0xba2>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xba2
08ac68ba +0x7c0:  mov    0x4(%eax),%eax
08ac68bd +0x7c3:  mov    0x18(%eax),%eax
08ac68c0 +0x7c6:  mov    -0x18(%ebp),%edx
08ac68c3 +0x7c9:  mov    %edx,0xc(%esp)
08ac68c7 +0x7cd:  movl   $0x1,0x8(%esp)
08ac68cf +0x7d5:  mov    %ebx,0x4(%esp)
08ac68d3 +0x7d9:  mov    %eax,(%esp)
08ac68d6 +0x7dc:  call   0807e320 <_init+0xc18>
08ac68db +0x7e1:  lea    -0x38(%ebp),%eax
08ac68de +0x7e4:  mov    %eax,(%esp)
08ac68e1 +0x7e7:  call   08ac82ca <_ZN16IPackFileProcess15getCommonBufferEj+0xb8c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xb8c
08ac68e6 +0x7ec:  lea    -0x1c(%ebp),%eax
08ac68e9 +0x7ef:  lea    -0x44(%ebp),%edx
08ac68ec +0x7f2:  mov    %edx,0x4(%esp)
08ac68f0 +0x7f6:  mov    %eax,(%esp)
08ac68f3 +0x7f9:  call   08ac8206 <_ZN16IPackFileProcess15getCommonBufferEj+0xac8>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xac8
08ac68f8 +0x7fe:  sub    $0x4,%esp
08ac68fb +0x801:  lea    -0x1c(%ebp),%eax
08ac68fe +0x804:  mov    %eax,0x4(%esp)
08ac6902 +0x808:  lea    -0x38(%ebp),%eax
08ac6905 +0x80b:  mov    %eax,(%esp)
08ac6908 +0x80e:  call   08ac829d <_ZN16IPackFileProcess15getCommonBufferEj+0xb5f>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xb5f
08ac690d +0x813:  test   %al,%al
08ac690f +0x815:  jne    08ac681f <+0x725>
08ac6915 +0x81b:  mov    -0x18(%ebp),%eax
08ac6918 +0x81e:  mov    %eax,(%esp)
08ac691b +0x821:  call   0807dea0 <_init+0x798>
08ac6920 +0x826:  mov    $0x0,%ebx
08ac6925 +0x82b:  jmp    08ac6971 <+0x877>
08ac6927 +0x82d:  cmpl   $0x0,-0x18(%ebp)
08ac692b +0x831:  je     08ac6938 <+0x83e>
08ac692d +0x833:  mov    -0x18(%ebp),%eax
08ac6930 +0x836:  mov    %eax,(%esp)
08ac6933 +0x839:  call   0807dea0 <_init+0x798>
08ac6938 +0x83e:  cmpl   $0x0,-0xc(%ebp)
08ac693c +0x842:  je     08ac694f <+0x855>
08ac693e +0x844:  cmpl   $0x0,-0xc(%ebp)
08ac6942 +0x848:  je     08ac694f <+0x855>
08ac6944 +0x84a:  mov    -0xc(%ebp),%eax
08ac6947 +0x84d:  mov    %eax,(%esp)
08ac694a +0x850:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac694f +0x855:  mov    $0x1,%ebx
08ac6954 +0x85a:  jmp    08ac6971 <+0x877>
08ac6956 +0x85c:  mov    %edx,%ebx
08ac6958 +0x85e:  mov    %eax,%esi
08ac695a +0x860:  lea    -0x44(%ebp),%eax
08ac695d +0x863:  mov    %eax,(%esp)
08ac6960 +0x866:  call   08ac80f8 <_ZN16IPackFileProcess15getCommonBufferEj+0x9ba>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x9ba
08ac6965 +0x86b:  mov    %esi,%eax
08ac6967 +0x86d:  mov    %ebx,%edx
08ac6969 +0x86f:  mov    %eax,(%esp)
08ac696c +0x872:  call   08ae3750 <_Unwind_Resume>
08ac6971 +0x877:  lea    -0x44(%ebp),%eax
08ac6974 +0x87a:  mov    %eax,(%esp)
08ac6977 +0x87d:  call   08ac80f8 <_ZN16IPackFileProcess15getCommonBufferEj+0x9ba>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x9ba
08ac697c +0x882:  mov    %ebx,%eax
08ac697e +0x884:  lea    -0x8(%ebp),%esp
08ac6981 +0x887:  add    $0x0,%esp
08ac6984 +0x88a:  pop    %ebx
08ac6985 +0x88b:  pop    %esi
08ac6986 +0x88c:  pop    %ebp
08ac6987 +0x88d:  ret
```

## 反编译 C

```c
// PackSet::write @ 0x8ac60fa

/* DWARF original prototype: pack_ret_t write(PackSet * this, NCHAR * name, NCHAR * tag, uint rev)
    */

pack_ret_t __thiscall PackSet::write(PackSet *this,NCHAR *name,NCHAR *tag,uint rev)

{
  size_t __size;
  bool bVar1;
  NCHAR *filename;
  pair<long_unsigned_int,_IndexEntry> *ppVar2;
  pair<long_unsigned_int,_IndexEntry*> *ppVar3;
  undefined4 uVar4;
  pack_ret_t pVar5;
  char *__rhs;
  vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
  local_270;
  NCHAR local_264 [260];
  NCHAR local_160 [260];
  pair<long_unsigned_int,_IndexEntry*> local_5c;
  uint32 local_54;
  size_t local_50;
  size_t local_4c;
  vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
  local_48;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
  local_3c;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_38;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  FILE *local_1c;
  uint local_18;
  size_t local_14;
  uchar *local_10;
  
                    /* Unresolved local var: FILE * fp@[???]
                       Unresolved local var: index_vector_it it@[???]
                       Unresolved local var: index_vector2_it it2@[???]
                       Unresolved local var: index_vector2_t write_indexes@[???]
                       Unresolved local var: int accum_offset@[???]
                       Unresolved local var: int aligned_index_header_size@[???]
                       Unresolved local var: int index_header_size@[???]
                       Unresolved local var: int index_size@[???]
                       Unresolved local var: int index_header_crc@[???]
                       Unresolved local var: uchar * index_header_data@[???] */
  local_1c = (FILE *)0x0;
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_38);
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
  ::__normal_iterator(&local_3c);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
  ::vector(&local_48);
  local_10 = (uchar *)0x0;
  if (this->type_ == PACK_LOAD_FULL) {
    bVar1 = is_dirty(this);
    if (bVar1) {
      pVar5 = sort(this);
      if (pVar5 == PACK_ERROR) {
        __rhs = "%s(%d) - %s\n";
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x4f0,"write");
        pVar5 = PACK_ERROR;
        goto LAB_08ac6971;
      }
    }
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)&local_270);
    local_38._M_current =
         (pair<long_unsigned_int,_IndexEntry> *)
         local_270.
         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
         ._M_impl._M_start;
    while( true ) {
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)local_34);
      bVar1 = __gnu_cxx::
              operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                        (&local_38,
                         (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)local_34);
      if (!bVar1) break;
                    /* Unresolved local var: index_pair2_t tmp@[???]
                       Unresolved local var: NCHAR[260] dir@[???]
                       Unresolved local var: NCHAR[260] file@[???] */
      std::pair<long_unsigned_int,_IndexEntry*>::pair(&local_5c);
      ppVar2 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_38);
      filename = (NCHAR *)std::string::c_str((string *)&(ppVar2->second).name_);
      pVar5 = _correct_filename(filename,local_160,0x104,local_264,0x104);
      if (pVar5 == PACK_ERROR) {
        __rhs = "%s(%d) - %s\n";
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x4ff,"write");
        goto LAB_08ac6927;
      }
      local_5c.first = _write_hash(local_160,local_264);
      ppVar2 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_38);
      local_5c.second = &ppVar2->second;
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
      ::push_back(&local_48,&local_5c);
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
      ::operator++(&local_38);
    }
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
    ::end((vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
           *)(local_34 + 4));
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
    ::begin((vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
             *)local_2c);
    std::
    sort<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>,_bool_(*)(const_PackSet::index_pair2_t&,_const_PackSet::index_pair2_t&)>
              ((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                )local_2c._0_4_,
               (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                )local_34._4_4_,_index_less2);
    local_18 = 0;
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
    ::begin(&local_270);
    local_3c._M_current =
         local_270.
         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
         ._M_impl._M_start;
    while( true ) {
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
      ::end((vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
             *)(local_2c + 4));
      bVar1 = __gnu_cxx::
              operator!=<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                        (&local_3c,
                         (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                          *)(local_2c + 4));
      if (!bVar1) break;
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
               ::operator->(&local_3c);
      ppVar3->second->offset_ = local_18;
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
               ::operator->(&local_3c);
      local_18 = local_18 + ppVar3->second->aligned_size_;
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
      ::operator++(&local_3c);
    }
    local_1c = fopen(TEMP_HEADER_FILENAME,"wb");
    if (local_1c == (FILE *)0x0) {
      fprintf(stdout,"_tfopen failed. %s",TEMP_HEADER_FILENAME);
      __rhs = "%s(%d) - %s\n";
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x514,"write");
LAB_08ac6927:
      if (local_1c != (FILE *)0x0) {
        fclose(local_1c);
      }
      if ((local_10 != (uchar *)0x0) && (local_10 != (uchar *)0x0)) {
        operator_delete__(local_10);
      }
      pVar5 = PACK_ERROR;
    }
    else {
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)&local_270);
      local_38._M_current =
           (pair<long_unsigned_int,_IndexEntry> *)
           local_270.
           super__Vector_base<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
           ._M_impl._M_start;
      while( true ) {
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)local_24);
        bVar1 = __gnu_cxx::
                operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          (&local_38,
                           (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            *)local_24);
        if (!bVar1) break;
        ppVar2 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_38);
        fwrite(ppVar2,4,1,local_1c);
        ppVar2 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_38);
        pVar5 = IndexEntry::write_info(&ppVar2->second,(FILE *)local_1c);
        if (pVar5 == PACK_ERROR) {
          __rhs = "%s(%d) - %s\n";
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x51c,"write");
          goto LAB_08ac6927;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
        ::operator++(&local_38);
      }
      fclose(local_1c);
      local_1c = fopen(TEMP_HEADER_FILENAME,"rb");
      if (local_1c == (FILE *)0x0) {
        fprintf(stdout,"_tfopen failed. %s",name);
        __rhs = "%s(%d) - %s\n";
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x526,"write");
        pVar5 = PACK_ERROR;
      }
      else {
        __rhs = (char *)0x0;
        fseek(local_1c,0,2);
        local_14 = ftell(local_1c);
        if ((int)local_14 < 0) {
          pVar5 = PACK_ERROR;
        }
        else {
          fseek(local_1c,0,0);
          local_4c = local_14 + 3 & 0xfffffffc;
          local_10 = operator_new__(local_4c);
          memset(local_10,0,local_4c);
          fread(local_10,local_14,1,local_1c);
          fclose(local_1c);
          local_50 = std::
                     vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                     ::size(&this->indexes_);
          local_54 = Crc32::crc32(local_50,(char *)local_10,local_4c);
          _encrypt(local_54,local_10,local_4c);
          local_1c = fopen(name,"wb");
          if (local_1c == (FILE *)0x0) {
            if (local_10 != (uchar *)0x0) {
              operator_delete__(local_10);
            }
            fprintf(stdout,"_tfopen failed. %s",name);
            __rhs = "%s(%d) - %s\n";
            fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x551,"write");
            pVar5 = PACK_ERROR;
          }
          else {
            _fwrite_str(tag,(FILE *)local_1c);
            fwrite(&rev,4,1,local_1c);
            fwrite(&local_4c,4,1,local_1c);
            fwrite(&local_54,4,1,local_1c);
            fwrite(&local_50,4,1,local_1c);
            fwrite(local_10,local_4c,1,local_1c);
            std::
            vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
            ::begin(&local_270);
            local_3c._M_current =
                 local_270.
                 super__Vector_base<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
                 ._M_impl._M_start;
            while( true ) {
              std::
              vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
              ::end((vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
                     *)(local_24 + 4));
              __rhs = local_24 + 4;
              bVar1 = __gnu_cxx::
                      operator!=<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                                (&local_3c,
                                 (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                                  *)__rhs);
              if (!bVar1) break;
              ppVar3 = __gnu_cxx::
                       __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                       ::operator->(&local_3c);
              if (ppVar3->second->content_ == (uchar *)0x0) {
                ppVar3 = __gnu_cxx::
                         __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                         ::operator->(&local_3c);
                uVar4 = std::string::c_str((string *)&ppVar3->second->name_);
                fprintf(stdout,"content is NULL. %s",uVar4);
                __rhs = "%s(%d) - %s\n";
                fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x560,"write");
                goto LAB_08ac6927;
              }
              ppVar3 = __gnu_cxx::
                       __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                       ::operator->(&local_3c);
              __size = ppVar3->second->aligned_size_;
              ppVar3 = __gnu_cxx::
                       __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                       ::operator->(&local_3c);
              fwrite(ppVar3->second->content_,__size,1,local_1c);
              __gnu_cxx::
              __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
              ::operator++(&local_3c);
            }
            fclose(local_1c);
            pVar5 = PACK_OK;
          }
        }
      }
    }
  }
  else {
                    /* try { // try from 08ac6156 to 08ac6937 has its CatchHandler @ 08ac6956 */
    fprintf(stdout,"%s\n","PACK_LOAD_FULL needed");
    __rhs = "%s(%d) - %s\n";
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x4e8,"write");
    pVar5 = PACK_ERROR;
  }
LAB_08ac6971:
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
  ::~vector(&local_48,(int)__rhs);
  return pVar5;
}
```
