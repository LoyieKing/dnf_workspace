# loadScript

`_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc`

`WongWork::CSpecialMonsterDrop::loadScript(char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSpecialMonsterDrop` | `0x085373ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085373ee  _ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc
#           WongWork::CSpecialMonsterDrop::loadScript(char const*)
# range [0x085373ee, 0x08537937]
085373ee +0x000:  push   %ebp
085373ef +0x001:  mov    %esp,%ebp
085373f1 +0x003:  push   %esi
085373f2 +0x004:  push   %ebx
085373f3 +0x005:  sub    $0x90,%esp
085373f9 +0x00b:  mov    0xc(%ebp),%eax
085373fc +0x00e:  mov    %eax,0x4(%esp)
08537400 +0x012:  movl   $"",(%esp)
08537407 +0x019:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
0853740c +0x01e:  xor    $0x1,%eax
0853740f +0x021:  test   %al,%al
08537411 +0x023:  je     0853741d <+0x2f>
08537413 +0x025:  mov    $0x5fb,%ebx
08537418 +0x02a:  jmp    0853792c <+0x53e>
0853741d +0x02f:  lea    -0x5c(%ebp),%eax
08537420 +0x032:  mov    %eax,(%esp)
08537423 +0x035:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08537428 +0x03a:  movl   $0x0,-0x3c(%ebp)
0853742f +0x041:  movb   $0x0,-0x5d(%ebp)
08537433 +0x045:  jmp    08537436 <+0x48>
08537435 +0x047:  nop
08537436 +0x048:  movl   $0x1,0x4(%esp)
0853743e +0x050:  lea    -0x5c(%ebp),%eax
08537441 +0x053:  mov    %eax,(%esp)
08537444 +0x056:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08537449 +0x05b:  xor    $0x1,%eax
0853744c +0x05e:  test   %al,%al
0853744e +0x060:  jne    085378e1 <+0x4f3>
08537454 +0x066:  movl   $"[drop prob count]",0x4(%esp)
0853745c +0x06e:  lea    -0x5c(%ebp),%eax
0853745f +0x071:  mov    %eax,(%esp)
08537462 +0x074:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537467 +0x079:  test   %al,%al
08537469 +0x07b:  je     085374f9 <+0x10b>
0853746f +0x081:  lea    -0x58(%ebp),%edx
08537472 +0x084:  mov    $0x0,%ecx
08537477 +0x089:  mov    $0x1c,%eax
0853747c +0x08e:  mov    %eax,%ebx
0853747e +0x090:  and    $0xfffffffc,%ebx
08537481 +0x093:  mov    $0x0,%eax
08537486 +0x098:  mov    %ecx,(%edx,%eax,1)
08537489 +0x09b:  add    $0x4,%eax
0853748c +0x09e:  cmp    %ebx,%eax
0853748e +0x0a0:  jb     08537486 <+0x98>
08537490 +0x0a2:  add    %eax,%edx
08537492 +0x0a4:  lea    -0x5d(%ebp),%eax
08537495 +0x0a7:  mov    %eax,(%esp)
08537498 +0x0aa:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0853749d +0x0af:  mov    0x8(%ebp),%edx
085374a0 +0x0b2:  lea    0x18(%edx),%ecx
085374a3 +0x0b5:  mov    -0x58(%ebp),%edx
085374a6 +0x0b8:  mov    %edx,0x8(%esp)
085374aa +0x0bc:  mov    -0x54(%ebp),%edx
085374ad +0x0bf:  mov    %edx,0xc(%esp)
085374b1 +0x0c3:  mov    -0x50(%ebp),%edx
085374b4 +0x0c6:  mov    %edx,0x10(%esp)
085374b8 +0x0ca:  mov    -0x4c(%ebp),%edx
085374bb +0x0cd:  mov    %edx,0x14(%esp)
085374bf +0x0d1:  mov    -0x48(%ebp),%edx
085374c2 +0x0d4:  mov    %edx,0x18(%esp)
085374c6 +0x0d8:  mov    -0x44(%ebp),%edx
085374c9 +0x0db:  mov    %edx,0x1c(%esp)
085374cd +0x0df:  mov    -0x40(%ebp),%edx
085374d0 +0x0e2:  mov    %edx,0x20(%esp)
085374d4 +0x0e6:  mov    %eax,0x4(%esp)
085374d8 +0x0ea:  mov    %ecx,(%esp)
085374db +0x0ed:  call   0853b964 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1bf0>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1bf0
085374e0 +0x0f2:  movzbl -0x5d(%ebp),%eax
085374e4 +0x0f6:  xor    $0x1,%eax
085374e7 +0x0f9:  test   %al,%al
085374e9 +0x0fb:  je     08537435 <+0x47>
085374ef +0x101:  mov    $0x609,%ebx
085374f4 +0x106:  jmp    08537921 <+0x533>
085374f9 +0x10b:  movl   $"[drop prob]",0x4(%esp)
08537501 +0x113:  lea    -0x5c(%ebp),%eax
08537504 +0x116:  mov    %eax,(%esp)
08537507 +0x119:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0853750c +0x11e:  test   %al,%al
0853750e +0x120:  je     085375ea <+0x1fc>
08537514 +0x126:  movl   $0x0,-0x38(%ebp)
0853751b +0x12d:  jmp    085375c9 <+0x1db>
08537520 +0x132:  mov    0x8(%ebp),%eax
08537523 +0x135:  lea    0x18(%eax),%edx
08537526 +0x138:  mov    -0x38(%ebp),%eax
08537529 +0x13b:  mov    %eax,0x4(%esp)
0853752d +0x13f:  mov    %edx,(%esp)
08537530 +0x142:  call   0853b5f4 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1880>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1880
08537535 +0x147:  mov    %eax,-0x34(%ebp)
08537538 +0x14a:  lea    -0x5d(%ebp),%eax
0853753b +0x14d:  mov    %eax,(%esp)
0853753e +0x150:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537543 +0x155:  mov    -0x34(%ebp),%edx
08537546 +0x158:  mov    %eax,(%edx)
08537548 +0x15a:  movzbl -0x5d(%ebp),%eax
0853754c +0x15e:  xor    $0x1,%eax
0853754f +0x161:  test   %al,%al
08537551 +0x163:  je     0853755d <+0x16f>
08537553 +0x165:  mov    $0x611,%ebx
08537558 +0x16a:  jmp    08537921 <+0x533>
0853755d +0x16f:  lea    -0x5d(%ebp),%eax
08537560 +0x172:  mov    %eax,(%esp)
08537563 +0x175:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537568 +0x17a:  mov    -0x34(%ebp),%edx
0853756b +0x17d:  mov    %eax,0x4(%edx)
0853756e +0x180:  movzbl -0x5d(%ebp),%eax
08537572 +0x184:  xor    $0x1,%eax
08537575 +0x187:  test   %al,%al
08537577 +0x189:  je     08537583 <+0x195>
08537579 +0x18b:  mov    $0x613,%ebx
0853757e +0x190:  jmp    08537921 <+0x533>
08537583 +0x195:  movl   $0x0,-0x30(%ebp)
0853758a +0x19c:  jmp    085375ba <+0x1cc>
0853758c +0x19e:  mov    -0x30(%ebp),%ebx
0853758f +0x1a1:  lea    -0x5d(%ebp),%eax
08537592 +0x1a4:  mov    %eax,(%esp)
08537595 +0x1a7:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0853759a +0x1ac:  mov    -0x34(%ebp),%edx
0853759d +0x1af:  mov    %eax,0x8(%edx,%ebx,4)
085375a1 +0x1b3:  movzbl -0x5d(%ebp),%eax
085375a5 +0x1b7:  xor    $0x1,%eax
085375a8 +0x1ba:  test   %al,%al
085375aa +0x1bc:  je     085375b6 <+0x1c8>
085375ac +0x1be:  mov    $0x617,%ebx
085375b1 +0x1c3:  jmp    08537921 <+0x533>
085375b6 +0x1c8:  addl   $0x1,-0x30(%ebp)
085375ba +0x1cc:  cmpl   $0x4,-0x30(%ebp)
085375be +0x1d0:  setle  %al
085375c1 +0x1d3:  test   %al,%al
085375c3 +0x1d5:  jne    0853758c <+0x19e>
085375c5 +0x1d7:  addl   $0x1,-0x38(%ebp)
085375c9 +0x1db:  mov    0x8(%ebp),%eax
085375cc +0x1de:  add    $0x18,%eax
085375cf +0x1e1:  mov    %eax,(%esp)
085375d2 +0x1e4:  call   0853b5d2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x185e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x185e
085375d7 +0x1e9:  cmp    -0x38(%ebp),%eax
085375da +0x1ec:  seta   %al
085375dd +0x1ef:  test   %al,%al
085375df +0x1f1:  jne    08537520 <+0x132>
085375e5 +0x1f7:  jmp    08537436 <+0x48>
085375ea +0x1fc:  movl   $"[basis of rarity dicision]",0x4(%esp)
085375f2 +0x204:  lea    -0x5c(%ebp),%eax
085375f5 +0x207:  mov    %eax,(%esp)
085375f8 +0x20a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085375fd +0x20f:  test   %al,%al
085375ff +0x211:  je     08537671 <+0x283>
08537601 +0x213:  movl   $0x1,-0x2c(%ebp)
08537608 +0x21a:  jmp    08537661 <+0x273>
0853760a +0x21c:  movl   $0x0,-0x28(%ebp)
08537611 +0x223:  jmp    08537652 <+0x264>
08537613 +0x225:  mov    -0x2c(%ebp),%ebx
08537616 +0x228:  mov    -0x28(%ebp),%esi
08537619 +0x22b:  lea    -0x5d(%ebp),%eax
0853761c +0x22e:  mov    %eax,(%esp)
0853761f +0x231:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537624 +0x236:  mov    %eax,%edx
08537626 +0x238:  mov    0x8(%ebp),%ecx
08537629 +0x23b:  mov    %ebx,%eax
0853762b +0x23d:  add    %eax,%eax
0853762d +0x23f:  add    %ebx,%eax
0853762f +0x241:  add    %eax,%eax
08537631 +0x243:  add    %esi,%eax
08537633 +0x245:  add    $0xc,%eax
08537636 +0x248:  mov    %edx,(%ecx,%eax,4)
08537639 +0x24b:  movzbl -0x5d(%ebp),%eax
0853763d +0x24f:  xor    $0x1,%eax
08537640 +0x252:  test   %al,%al
08537642 +0x254:  je     0853764e <+0x260>
08537644 +0x256:  mov    $0x623,%ebx
08537649 +0x25b:  jmp    08537921 <+0x533>
0853764e +0x260:  addl   $0x1,-0x28(%ebp)
08537652 +0x264:  cmpl   $0x5,-0x28(%ebp)
08537656 +0x268:  setle  %al
08537659 +0x26b:  test   %al,%al
0853765b +0x26d:  jne    08537613 <+0x225>
0853765d +0x26f:  addl   $0x1,-0x2c(%ebp)
08537661 +0x273:  cmpl   $0x4,-0x2c(%ebp)
08537665 +0x277:  setle  %al
08537668 +0x27a:  test   %al,%al
0853766a +0x27c:  jne    0853760a <+0x21c>
0853766c +0x27e:  jmp    08537436 <+0x48>
08537671 +0x283:  movl   $"[party member drop bonusrate]",0x4(%esp)
08537679 +0x28b:  lea    -0x5c(%ebp),%eax
0853767c +0x28e:  mov    %eax,(%esp)
0853767f +0x291:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537684 +0x296:  test   %al,%al
08537686 +0x298:  je     085376f6 <+0x308>
08537688 +0x29a:  movl   $0x0,-0x24(%ebp)
0853768f +0x2a1:  jmp    085376e6 <+0x2f8>
08537691 +0x2a3:  movl   $0x0,-0x20(%ebp)
08537698 +0x2aa:  jmp    085376d7 <+0x2e9>
0853769a +0x2ac:  mov    -0x24(%ebp),%esi
0853769d +0x2af:  mov    -0x20(%ebp),%ebx
085376a0 +0x2b2:  lea    -0x5d(%ebp),%eax
085376a3 +0x2b5:  mov    %eax,(%esp)
085376a6 +0x2b8:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
085376ab +0x2bd:  mov    0x8(%ebp),%eax
085376ae +0x2c0:  lea    0x0(,%esi,4),%edx
085376b5 +0x2c7:  add    %ebx,%edx
085376b7 +0x2c9:  add    $0x28,%edx
085376ba +0x2cc:  fstps  0x8(%eax,%edx,4)
085376be +0x2d0:  movzbl -0x5d(%ebp),%eax
085376c2 +0x2d4:  xor    $0x1,%eax
085376c5 +0x2d7:  test   %al,%al
085376c7 +0x2d9:  je     085376d3 <+0x2e5>
085376c9 +0x2db:  mov    $0x62e,%ebx
085376ce +0x2e0:  jmp    08537921 <+0x533>
085376d3 +0x2e5:  addl   $0x1,-0x20(%ebp)
085376d7 +0x2e9:  cmpl   $0x3,-0x20(%ebp)
085376db +0x2ed:  setle  %al
085376de +0x2f0:  test   %al,%al
085376e0 +0x2f2:  jne    0853769a <+0x2ac>
085376e2 +0x2f4:  addl   $0x1,-0x24(%ebp)
085376e6 +0x2f8:  cmpl   $0x4,-0x24(%ebp)
085376ea +0x2fc:  setle  %al
085376ed +0x2ff:  test   %al,%al
085376ef +0x301:  jne    08537691 <+0x2a3>
085376f1 +0x303:  jmp    08537436 <+0x48>
085376f6 +0x308:  movl   $"[dungeon difficulty drop bonusrate]",0x4(%esp)
085376fe +0x310:  lea    -0x5c(%ebp),%eax
08537701 +0x313:  mov    %eax,(%esp)
08537704 +0x316:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537709 +0x31b:  test   %al,%al
0853770b +0x31d:  je     0853777b <+0x38d>
0853770d +0x31f:  movl   $0x0,-0x1c(%ebp)
08537714 +0x326:  jmp    0853776b <+0x37d>
08537716 +0x328:  movl   $0x0,-0x18(%ebp)
0853771d +0x32f:  jmp    0853775c <+0x36e>
0853771f +0x331:  mov    -0x1c(%ebp),%ebx
08537722 +0x334:  mov    -0x18(%ebp),%esi
08537725 +0x337:  lea    -0x5d(%ebp),%eax
08537728 +0x33a:  mov    %eax,(%esp)
0853772b +0x33d:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
08537730 +0x342:  mov    0x8(%ebp),%edx
08537733 +0x345:  mov    %ebx,%eax
08537735 +0x347:  shl    $0x2,%eax
08537738 +0x34a:  add    %ebx,%eax
0853773a +0x34c:  add    %esi,%eax
0853773c +0x34e:  add    $0x3c,%eax
0853773f +0x351:  fstps  0x8(%edx,%eax,4)
08537743 +0x355:  movzbl -0x5d(%ebp),%eax
08537747 +0x359:  xor    $0x1,%eax
0853774a +0x35c:  test   %al,%al
0853774c +0x35e:  je     08537758 <+0x36a>
0853774e +0x360:  mov    $0x63d,%ebx
08537753 +0x365:  jmp    08537921 <+0x533>
08537758 +0x36a:  addl   $0x1,-0x18(%ebp)
0853775c +0x36e:  cmpl   $0x4,-0x18(%ebp)
08537760 +0x372:  setle  %al
08537763 +0x375:  test   %al,%al
08537765 +0x377:  jne    0853771f <+0x331>
08537767 +0x379:  addl   $0x1,-0x1c(%ebp)
0853776b +0x37d:  cmpl   $0x4,-0x1c(%ebp)
0853776f +0x381:  setle  %al
08537772 +0x384:  test   %al,%al
08537774 +0x386:  jne    08537716 <+0x328>
08537776 +0x388:  jmp    08537436 <+0x48>
0853777b +0x38d:  movl   $"[monster type drop bonusrate]",0x4(%esp)
08537783 +0x395:  lea    -0x5c(%ebp),%eax
08537786 +0x398:  mov    %eax,(%esp)
08537789 +0x39b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0853778e +0x3a0:  test   %al,%al
08537790 +0x3a2:  je     08537800 <+0x412>
08537792 +0x3a4:  movl   $0x0,-0x14(%ebp)
08537799 +0x3ab:  jmp    085377f0 <+0x402>
0853779b +0x3ad:  movl   $0x0,-0x10(%ebp)
085377a2 +0x3b4:  jmp    085377e1 <+0x3f3>
085377a4 +0x3b6:  mov    -0x14(%ebp),%esi
085377a7 +0x3b9:  mov    -0x10(%ebp),%ebx
085377aa +0x3bc:  lea    -0x5d(%ebp),%eax
085377ad +0x3bf:  mov    %eax,(%esp)
085377b0 +0x3c2:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
085377b5 +0x3c7:  mov    0x8(%ebp),%eax
085377b8 +0x3ca:  lea    0x0(,%esi,4),%edx
085377bf +0x3d1:  add    %ebx,%edx
085377c1 +0x3d3:  add    $0x54,%edx
085377c4 +0x3d6:  fstps  0xc(%eax,%edx,4)
085377c8 +0x3da:  movzbl -0x5d(%ebp),%eax
085377cc +0x3de:  xor    $0x1,%eax
085377cf +0x3e1:  test   %al,%al
085377d1 +0x3e3:  je     085377dd <+0x3ef>
085377d3 +0x3e5:  mov    $0x648,%ebx
085377d8 +0x3ea:  jmp    08537921 <+0x533>
085377dd +0x3ef:  addl   $0x1,-0x10(%ebp)
085377e1 +0x3f3:  cmpl   $0x3,-0x10(%ebp)
085377e5 +0x3f7:  setle  %al
085377e8 +0x3fa:  test   %al,%al
085377ea +0x3fc:  jne    085377a4 <+0x3b6>
085377ec +0x3fe:  addl   $0x1,-0x14(%ebp)
085377f0 +0x402:  cmpl   $0x4,-0x14(%ebp)
085377f4 +0x406:  setle  %al
085377f7 +0x409:  test   %al,%al
085377f9 +0x40b:  jne    0853779b <+0x3ad>
085377fb +0x40d:  jmp    08537436 <+0x48>
08537800 +0x412:  movl   $"[item drop ref table]",0x4(%esp)
08537808 +0x41a:  lea    -0x5c(%ebp),%eax
0853780b +0x41d:  mov    %eax,(%esp)
0853780e +0x420:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537813 +0x425:  test   %al,%al
08537815 +0x427:  je     085378da <+0x4ec>
0853781b +0x42d:  mov    0x8(%ebp),%eax
0853781e +0x430:  movb   $0x0,0x1ac(%eax)
08537825 +0x437:  mov    0x8(%ebp),%eax
08537828 +0x43a:  movb   $0x0,0x1ad(%eax)
0853782f +0x441:  movl   $0x1,-0xc(%ebp)
08537836 +0x448:  jmp    085378c3 <+0x4d5>
0853783b +0x44d:  lea    -0x5d(%ebp),%eax
0853783e +0x450:  mov    %eax,(%esp)
08537841 +0x453:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537846 +0x458:  mov    %eax,-0x3c(%ebp)
08537849 +0x45b:  movzbl -0x5d(%ebp),%eax
0853784d +0x45f:  xor    $0x1,%eax
08537850 +0x462:  test   %al,%al
08537852 +0x464:  je     0853785e <+0x470>
08537854 +0x466:  mov    $0x655,%ebx
08537859 +0x46b:  jmp    08537921 <+0x533>
0853785e +0x470:  mov    -0x3c(%ebp),%ebx
08537861 +0x473:  lea    -0x5d(%ebp),%eax
08537864 +0x476:  mov    %eax,(%esp)
08537867 +0x479:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0853786c +0x47e:  mov    %eax,%edx
0853786e +0x480:  mov    0x8(%ebp),%eax
08537871 +0x483:  lea    0xd0(%ebx),%ecx
08537877 +0x489:  mov    %dl,0xc(%eax,%ecx,2)
0853787b +0x48d:  movzbl -0x5d(%ebp),%eax
0853787f +0x491:  xor    $0x1,%eax
08537882 +0x494:  test   %al,%al
08537884 +0x496:  je     08537890 <+0x4a2>
08537886 +0x498:  mov    $0x659,%ebx
0853788b +0x49d:  jmp    08537921 <+0x533>
08537890 +0x4a2:  mov    -0x3c(%ebp),%ebx
08537893 +0x4a5:  lea    -0x5d(%ebp),%eax
08537896 +0x4a8:  mov    %eax,(%esp)
08537899 +0x4ab:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0853789e +0x4b0:  mov    %eax,%edx
085378a0 +0x4b2:  mov    0x8(%ebp),%eax
085378a3 +0x4b5:  lea    0xd0(%ebx),%ecx
085378a9 +0x4bb:  mov    %dl,0xd(%eax,%ecx,2)
085378ad +0x4bf:  movzbl -0x5d(%ebp),%eax
085378b1 +0x4c3:  xor    $0x1,%eax
085378b4 +0x4c6:  test   %al,%al
085378b6 +0x4c8:  je     085378bf <+0x4d1>
085378b8 +0x4ca:  mov    $0x65d,%ebx
085378bd +0x4cf:  jmp    08537921 <+0x533>
085378bf +0x4d1:  addl   $0x1,-0xc(%ebp)
085378c3 +0x4d5:  cmpl   $0xc8,-0xc(%ebp)
085378ca +0x4dc:  setle  %al
085378cd +0x4df:  test   %al,%al
085378cf +0x4e1:  jne    0853783b <+0x44d>
085378d5 +0x4e7:  jmp    08537436 <+0x48>
085378da +0x4ec:  mov    $0x661,%ebx
085378df +0x4f1:  jmp    08537921 <+0x533>
085378e1 +0x4f3:  nop
085378e2 +0x4f4:  mov    0x8(%ebp),%eax
085378e5 +0x4f7:  lea    0x1ac(%eax),%edx
085378eb +0x4fd:  mov    0x8(%ebp),%eax
085378ee +0x500:  add    $0x340,%eax
085378f3 +0x505:  mov    %edx,0x4(%esp)
085378f7 +0x509:  mov    %eax,(%esp)
085378fa +0x50c:  call   08534cd0 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE>  ; WongWork::CSecialIMonsterDropItemGenRateTable::generateTable(WongWork::stGenItemRange_t*)
085378ff +0x511:  mov    $0x0,%ebx
08537904 +0x516:  jmp    08537921 <+0x533>
08537906 +0x518:  mov    %edx,%ebx
08537908 +0x51a:  mov    %eax,%esi
0853790a +0x51c:  lea    -0x5c(%ebp),%eax
0853790d +0x51f:  mov    %eax,(%esp)
08537910 +0x522:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08537915 +0x527:  mov    %esi,%eax
08537917 +0x529:  mov    %ebx,%edx
08537919 +0x52b:  mov    %eax,(%esp)
0853791c +0x52e:  call   08ae3750 <_Unwind_Resume>
08537921 +0x533:  lea    -0x5c(%ebp),%eax
08537924 +0x536:  mov    %eax,(%esp)
08537927 +0x539:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0853792c +0x53e:  mov    %ebx,%eax
0853792e +0x540:  add    $0x90,%esp
08537934 +0x546:  pop    %ebx
08537935 +0x547:  pop    %esi
08537936 +0x548:  pop    %ebp
08537937 +0x549:  ret
```

## 反编译 C

```c
// WongWork::CSpecialMonsterDrop::loadScript @ 0x85373ee

/* WongWork::CSpecialMonsterDrop::loadScript(char const*) */

undefined4 __thiscall
WongWork::CSpecialMonsterDrop::loadScript(CSpecialMonsterDrop *this,char *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CSpecialMonsterDrop CVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longdouble lVar8;
  bool local_61;
  string local_60;
  undefined4 local_5c [7];
  int local_40;
  uint local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = loadRDARScriptFile("",param_1);
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_60);
    local_40 = 0;
    local_61 = false;
    do {
      while( true ) {
                    /* try { // try from 08537444 to 085378fe has its CatchHandler @ 08537906 */
        cVar2 = ScanType((string *)&local_60,true);
        if (cVar2 != '\x01') {
          CSecialIMonsterDropItemGenRateTable::generateTable
                    ((CSecialIMonsterDropItemGenRateTable *)(this + 0x340),
                     (stGenItemRange_t *)(this + 0x1ac));
          uVar7 = 0;
          goto LAB_08537921;
        }
        bVar3 = std::operator==(&local_60,"[drop prob count]");
        if (bVar3) break;
        bVar3 = std::operator==(&local_60,"[drop prob]");
        if (bVar3) {
          local_3c = 0;
          while (uVar5 = std::
                         vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                         ::size((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                                 *)(this + 0x18)), local_3c < uVar5) {
            local_38 = (undefined4 *)
                       std::
                       vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                       ::operator[]((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                                     *)(this + 0x18),local_3c);
            uVar7 = ScanInt(&local_61);
            *local_38 = uVar7;
            if (local_61 != true) {
              uVar7 = 0x611;
              goto LAB_08537921;
            }
            uVar7 = ScanInt(&local_61);
            local_38[1] = uVar7;
            if (local_61 != true) {
              uVar7 = 0x613;
              goto LAB_08537921;
            }
            for (local_34 = 0; iVar6 = local_34, local_34 < 5; local_34 = local_34 + 1) {
              uVar7 = ScanInt(&local_61);
              local_38[iVar6 + 2] = uVar7;
              if (local_61 != true) {
                uVar7 = 0x617;
                goto LAB_08537921;
              }
            }
            local_3c = local_3c + 1;
          }
        }
        else {
          bVar3 = std::operator==(&local_60,"[basis of rarity dicision]");
          if (bVar3) {
            for (local_30 = 1; local_30 < 5; local_30 = local_30 + 1) {
              for (local_2c = 0; iVar1 = local_2c, iVar6 = local_30, local_2c < 6;
                  local_2c = local_2c + 1) {
                uVar7 = ScanInt(&local_61);
                *(undefined4 *)(this + (iVar6 * 6 + iVar1) * 4 + 0x30) = uVar7;
                if (local_61 != true) {
                  uVar7 = 0x623;
                  goto LAB_08537921;
                }
              }
            }
          }
          else {
            bVar3 = std::operator==(&local_60,"[party member drop bonusrate]");
            if (bVar3) {
              for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
                for (local_24 = 0; iVar1 = local_24, iVar6 = local_28, local_24 < 4;
                    local_24 = local_24 + 1) {
                  lVar8 = (longdouble)ScanFloat(&local_61);
                  *(float *)(this + (iVar6 * 4 + iVar1 + 0x28) * 4 + 8) = (float)lVar8;
                  if (local_61 != true) {
                    uVar7 = 0x62e;
                    goto LAB_08537921;
                  }
                }
              }
            }
            else {
              bVar3 = std::operator==(&local_60,"[dungeon difficulty drop bonusrate]");
              if (bVar3) {
                for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
                  for (local_1c = 0; iVar1 = local_1c, iVar6 = local_20, local_1c < 5;
                      local_1c = local_1c + 1) {
                    lVar8 = (longdouble)ScanFloat(&local_61);
                    *(float *)(this + (iVar6 * 5 + iVar1 + 0x3c) * 4 + 8) = (float)lVar8;
                    if (local_61 != true) {
                      uVar7 = 0x63d;
                      goto LAB_08537921;
                    }
                  }
                }
              }
              else {
                bVar3 = std::operator==(&local_60,"[monster type drop bonusrate]");
                if (bVar3) {
                  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
                    for (local_14 = 0; iVar1 = local_14, iVar6 = local_18, local_14 < 4;
                        local_14 = local_14 + 1) {
                      lVar8 = (longdouble)ScanFloat(&local_61);
                      *(float *)(this + (iVar6 * 4 + iVar1 + 0x54) * 4 + 0xc) = (float)lVar8;
                      if (local_61 != true) {
                        uVar7 = 0x648;
                        goto LAB_08537921;
                      }
                    }
                  }
                }
                else {
                  bVar3 = std::operator==(&local_60,"[item drop ref table]");
                  if (!bVar3) {
                    uVar7 = 0x661;
                    goto LAB_08537921;
                  }
                  this[0x1ac] = (CSpecialMonsterDrop)0x0;
                  this[0x1ad] = (CSpecialMonsterDrop)0x0;
                  for (local_10 = 1; local_10 < 0xc9; local_10 = local_10 + 1) {
                    iVar6 = ScanInt(&local_61);
                    local_40 = iVar6;
                    if (local_61 != true) {
                      uVar7 = 0x655;
                      goto LAB_08537921;
                    }
                    CVar4 = (CSpecialMonsterDrop)ScanInt(&local_61);
                    iVar1 = local_40;
                    this[(iVar6 + 0xd0) * 2 + 0xc] = CVar4;
                    if (local_61 != true) {
                      uVar7 = 0x659;
                      goto LAB_08537921;
                    }
                    CVar4 = (CSpecialMonsterDrop)ScanInt(&local_61);
                    this[(iVar1 + 0xd0) * 2 + 0xd] = CVar4;
                    if (local_61 != true) {
                      uVar7 = 0x65d;
                      goto LAB_08537921;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar5 = 0;
      do {
        *(undefined4 *)((int)local_5c + uVar5) = 0;
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x1c);
      uVar7 = ScanInt(&local_61);
      std::
      vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
      ::resize(this + 0x18,uVar7,local_5c[0],local_5c[1],local_5c[2],local_5c[3],local_5c[4],
               local_5c[5],local_5c[6]);
    } while (local_61 == true);
    uVar7 = 0x609;
LAB_08537921:
    std::string::~string((string *)&local_60);
  }
  else {
    uVar7 = 0x5fb;
  }
  return uVar7;
}
```
