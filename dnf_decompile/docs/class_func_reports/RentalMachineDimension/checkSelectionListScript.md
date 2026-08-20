# checkSelectionListScript

`_ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE`

`RentalMachineDimension::checkSelectionListScript(std::vector<std::vector<EventRewardItemInfo, std::allocator<EventRewardItemInfo> >, std::allocator<std::vector<EventRewardItemInfo, std::allocator<EventRewardItemInfo> > > > const&)`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826f14e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826f14e  _ZN22RentalMachineDimension24checkSelectionListScriptERKSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EE
#           RentalMachineDimension::checkSelectionListScript(std::vector<std::vector<EventRewardItemInfo, std::allocator<EventRewardItemInfo> >, std::allocator<std::vector<EventRewardItemInfo, std::allocator<EventRewardItemInfo> > > > const&)
# range [0x0826f14e, 0x0826f52b]
0826f14e +0x000:  push   %ebp
0826f14f +0x001:  mov    %esp,%ebp
0826f151 +0x003:  push   %ebx
0826f152 +0x004:  sub    $0x44,%esp
0826f155 +0x007:  lea    -0x2c(%ebp),%eax
0826f158 +0x00a:  mov    0xc(%ebp),%edx
0826f15b +0x00d:  mov    %edx,0x4(%esp)
0826f15f +0x011:  mov    %eax,(%esp)
0826f162 +0x014:  call   0826fd10 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x312>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x312
0826f167 +0x019:  sub    $0x4,%esp
0826f16a +0x01c:  jmp    0826f4f2 <+0x3a4>
0826f16f +0x021:  lea    -0x2c(%ebp),%eax
0826f172 +0x024:  mov    %eax,(%esp)
0826f175 +0x027:  call   0826fdaa <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x3ac>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x3ac
0826f17a +0x02c:  mov    %eax,-0x18(%ebp)
0826f17d +0x02f:  lea    -0x30(%ebp),%eax
0826f180 +0x032:  mov    -0x18(%ebp),%edx
0826f183 +0x035:  mov    %edx,0x4(%esp)
0826f187 +0x039:  mov    %eax,(%esp)
0826f18a +0x03c:  call   0826fdb4 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x3b6>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x3b6
0826f18f +0x041:  sub    $0x4,%esp
0826f192 +0x044:  jmp    0826f4b8 <+0x36a>
0826f197 +0x049:  lea    -0x30(%ebp),%eax
0826f19a +0x04c:  mov    %eax,(%esp)
0826f19d +0x04f:  call   0826fe4e <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x450>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x450
0826f1a2 +0x054:  mov    %eax,-0x14(%ebp)
0826f1a5 +0x057:  mov    -0x14(%ebp),%eax
0826f1a8 +0x05a:  mov    (%eax),%eax
0826f1aa +0x05c:  mov    %eax,%ebx
0826f1ac +0x05e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0826f1b1 +0x063:  mov    %ebx,0x4(%esp)
0826f1b5 +0x067:  mov    %eax,(%esp)
0826f1b8 +0x06a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0826f1bd +0x06f:  mov    %eax,-0x10(%ebp)
0826f1c0 +0x072:  cmpl   $0x0,-0x10(%ebp)
0826f1c4 +0x076:  jne    0826f215 <+0xc7>
0826f1c6 +0x078:  mov    -0x14(%ebp),%eax
0826f1c9 +0x07b:  mov    (%eax),%ebx
0826f1cb +0x07d:  movl   $"[RentalDimensionSystem::Ready()] Can`t find item[",0x4(%esp)
0826f1d3 +0x085:  movl   $&_ZSt4cerr,(%esp)
0826f1da +0x08c:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f1df +0x091:  mov    %ebx,0x4(%esp)
0826f1e3 +0x095:  mov    %eax,(%esp)
0826f1e6 +0x098:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
0826f1eb +0x09d:  movl   $"]",0x4(%esp)
0826f1f3 +0x0a5:  mov    %eax,(%esp)
0826f1f6 +0x0a8:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f1fb +0x0ad:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0826f203 +0x0b5:  mov    %eax,(%esp)
0826f206 +0x0b8:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0826f20b +0x0bd:  mov    $0x0,%eax
0826f210 +0x0c2:  jmp    0826f526 <+0x3d8>
0826f215 +0x0c7:  mov    -0x10(%ebp),%eax
0826f218 +0x0ca:  mov    (%eax),%eax
0826f21a +0x0cc:  add    $0x34,%eax
0826f21d +0x0cf:  mov    (%eax),%edx
0826f21f +0x0d1:  mov    -0x10(%ebp),%eax
0826f222 +0x0d4:  mov    %eax,(%esp)
0826f225 +0x0d7:  call   *%edx
0826f227 +0x0d9:  xor    $0x1,%eax
0826f22a +0x0dc:  test   %al,%al
0826f22c +0x0de:  je     0826f27d <+0x12f>
0826f22e +0x0e0:  mov    -0x14(%ebp),%eax
0826f231 +0x0e3:  mov    (%eax),%ebx
0826f233 +0x0e5:  movl   $"[RentalDimensionSystem::Ready()] Impossible contents(amplify upgrade) is not checked. [",0x4(%esp)
0826f23b +0x0ed:  movl   $&_ZSt4cerr,(%esp)
0826f242 +0x0f4:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f247 +0x0f9:  mov    %ebx,0x4(%esp)
0826f24b +0x0fd:  mov    %eax,(%esp)
0826f24e +0x100:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
0826f253 +0x105:  movl   $"]",0x4(%esp)
0826f25b +0x10d:  mov    %eax,(%esp)
0826f25e +0x110:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f263 +0x115:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0826f26b +0x11d:  mov    %eax,(%esp)
0826f26e +0x120:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0826f273 +0x125:  mov    $0x0,%eax
0826f278 +0x12a:  jmp    0826f526 <+0x3d8>
0826f27d +0x12f:  mov    -0x10(%ebp),%eax
0826f280 +0x132:  mov    (%eax),%eax
0826f282 +0x134:  add    $0x40,%eax
0826f285 +0x137:  mov    (%eax),%edx
0826f287 +0x139:  mov    -0x10(%ebp),%eax
0826f28a +0x13c:  mov    %eax,(%esp)
0826f28d +0x13f:  call   *%edx
0826f28f +0x141:  xor    $0x1,%eax
0826f292 +0x144:  test   %al,%al
0826f294 +0x146:  je     0826f2e5 <+0x197>
0826f296 +0x148:  mov    -0x14(%ebp),%eax
0826f299 +0x14b:  mov    (%eax),%ebx
0826f29b +0x14d:  movl   $"[RentalDimensionSystem::Ready()] Impossible contents(charac cargo) is not checked. [",0x4(%esp)
0826f2a3 +0x155:  movl   $&_ZSt4cerr,(%esp)
0826f2aa +0x15c:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f2af +0x161:  mov    %ebx,0x4(%esp)
0826f2b3 +0x165:  mov    %eax,(%esp)
0826f2b6 +0x168:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
0826f2bb +0x16d:  movl   $"]",0x4(%esp)
0826f2c3 +0x175:  mov    %eax,(%esp)
0826f2c6 +0x178:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f2cb +0x17d:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0826f2d3 +0x185:  mov    %eax,(%esp)
0826f2d6 +0x188:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0826f2db +0x18d:  mov    $0x0,%eax
0826f2e0 +0x192:  jmp    0826f526 <+0x3d8>
0826f2e5 +0x197:  mov    -0x10(%ebp),%eax
0826f2e8 +0x19a:  mov    (%eax),%eax
0826f2ea +0x19c:  add    $0x38,%eax
0826f2ed +0x19f:  mov    (%eax),%edx
0826f2ef +0x1a1:  mov    -0x10(%ebp),%eax
0826f2f2 +0x1a4:  mov    %eax,(%esp)
0826f2f5 +0x1a7:  call   *%edx
0826f2f7 +0x1a9:  xor    $0x1,%eax
0826f2fa +0x1ac:  test   %al,%al
0826f2fc +0x1ae:  je     0826f34d <+0x1ff>
0826f2fe +0x1b0:  mov    -0x14(%ebp),%eax
0826f301 +0x1b3:  mov    (%eax),%ebx
0826f303 +0x1b5:  movl   $"[RentalDimensionSystem::Ready()] Impossible contents(disjoint) is not checked. [",0x4(%esp)
0826f30b +0x1bd:  movl   $&_ZSt4cerr,(%esp)
0826f312 +0x1c4:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f317 +0x1c9:  mov    %ebx,0x4(%esp)
0826f31b +0x1cd:  mov    %eax,(%esp)
0826f31e +0x1d0:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
0826f323 +0x1d5:  movl   $"]",0x4(%esp)
0826f32b +0x1dd:  mov    %eax,(%esp)
0826f32e +0x1e0:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f333 +0x1e5:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0826f33b +0x1ed:  mov    %eax,(%esp)
0826f33e +0x1f0:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0826f343 +0x1f5:  mov    $0x0,%eax
0826f348 +0x1fa:  jmp    0826f526 <+0x3d8>
0826f34d +0x1ff:  mov    -0x10(%ebp),%eax
0826f350 +0x202:  mov    (%eax),%eax
0826f352 +0x204:  add    $0x3c,%eax
0826f355 +0x207:  mov    (%eax),%edx
0826f357 +0x209:  mov    -0x10(%ebp),%eax
0826f35a +0x20c:  mov    %eax,(%esp)
0826f35d +0x20f:  call   *%edx
0826f35f +0x211:  xor    $0x1,%eax
0826f362 +0x214:  test   %al,%al
0826f364 +0x216:  je     0826f3b5 <+0x267>
0826f366 +0x218:  mov    -0x14(%ebp),%eax
0826f369 +0x21b:  mov    (%eax),%ebx
0826f36b +0x21d:  movl   $"[RentalDimensionSystem::Ready()] Impossible contents(gift) is not checked. [",0x4(%esp)
0826f373 +0x225:  movl   $&_ZSt4cerr,(%esp)
0826f37a +0x22c:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f37f +0x231:  mov    %ebx,0x4(%esp)
0826f383 +0x235:  mov    %eax,(%esp)
0826f386 +0x238:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
0826f38b +0x23d:  movl   $"]",0x4(%esp)
0826f393 +0x245:  mov    %eax,(%esp)
0826f396 +0x248:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f39b +0x24d:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0826f3a3 +0x255:  mov    %eax,(%esp)
0826f3a6 +0x258:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0826f3ab +0x25d:  mov    $0x0,%eax
0826f3b0 +0x262:  jmp    0826f526 <+0x3d8>
0826f3b5 +0x267:  mov    -0x10(%ebp),%eax
0826f3b8 +0x26a:  mov    (%eax),%eax
0826f3ba +0x26c:  add    $0x30,%eax
0826f3bd +0x26f:  mov    (%eax),%edx
0826f3bf +0x271:  mov    -0x10(%ebp),%eax
0826f3c2 +0x274:  mov    %eax,(%esp)
0826f3c5 +0x277:  call   *%edx
0826f3c7 +0x279:  xor    $0x1,%eax
0826f3ca +0x27c:  test   %al,%al
0826f3cc +0x27e:  je     0826f41d <+0x2cf>
0826f3ce +0x280:  mov    -0x14(%ebp),%eax
0826f3d1 +0x283:  mov    (%eax),%ebx
0826f3d3 +0x285:  movl   $"[RentalDimensionSystem::Ready()] Impossible contents(upgrade) is not checked. [",0x4(%esp)
0826f3db +0x28d:  movl   $&_ZSt4cerr,(%esp)
0826f3e2 +0x294:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f3e7 +0x299:  mov    %ebx,0x4(%esp)
0826f3eb +0x29d:  mov    %eax,(%esp)
0826f3ee +0x2a0:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
0826f3f3 +0x2a5:  movl   $"]",0x4(%esp)
0826f3fb +0x2ad:  mov    %eax,(%esp)
0826f3fe +0x2b0:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f403 +0x2b5:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0826f40b +0x2bd:  mov    %eax,(%esp)
0826f40e +0x2c0:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0826f413 +0x2c5:  mov    $0x0,%eax
0826f418 +0x2ca:  jmp    0826f526 <+0x3d8>
0826f41d +0x2cf:  mov    -0x10(%ebp),%eax
0826f420 +0x2d2:  mov    %eax,(%esp)
0826f423 +0x2d5:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
0826f428 +0x2da:  mov    %eax,-0xc(%ebp)
0826f42b +0x2dd:  cmpl   $0x2,-0xc(%ebp)
0826f42f +0x2e1:  je     0826f480 <+0x332>
0826f431 +0x2e3:  mov    -0x14(%ebp),%eax
0826f434 +0x2e6:  mov    (%eax),%ebx
0826f436 +0x2e8:  movl   $"[RentalDimensionSystem::Ready()] AtttachType is not trade delete. [",0x4(%esp)
0826f43e +0x2f0:  movl   $&_ZSt4cerr,(%esp)
0826f445 +0x2f7:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f44a +0x2fc:  mov    %ebx,0x4(%esp)
0826f44e +0x300:  mov    %eax,(%esp)
0826f451 +0x303:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
0826f456 +0x308:  movl   $"]",0x4(%esp)
0826f45e +0x310:  mov    %eax,(%esp)
0826f461 +0x313:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0826f466 +0x318:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0826f46e +0x320:  mov    %eax,(%esp)
0826f471 +0x323:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0826f476 +0x328:  mov    $0x0,%eax
0826f47b +0x32d:  jmp    0826f526 <+0x3d8>
0826f480 +0x332:  mov    -0x14(%ebp),%ebx
0826f483 +0x335:  mov    0x8(%ebp),%eax
0826f486 +0x338:  add    $0x4,%eax
0826f489 +0x33b:  mov    %eax,(%esp)
0826f48c +0x33e:  call   0826fbee <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1f0>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1f0
0826f491 +0x343:  lea    0x104(%eax),%edx
0826f497 +0x349:  lea    -0x20(%ebp),%eax
0826f49a +0x34c:  mov    %ebx,0x8(%esp)
0826f49e +0x350:  mov    %edx,0x4(%esp)
0826f4a2 +0x354:  mov    %eax,(%esp)
0826f4a5 +0x357:  call   081ab780 <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0xd2>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0xd2
0826f4aa +0x35c:  sub    $0x4,%esp
0826f4ad +0x35f:  lea    -0x30(%ebp),%eax
0826f4b0 +0x362:  mov    %eax,(%esp)
0826f4b3 +0x365:  call   0826fe38 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x43a>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x43a
0826f4b8 +0x36a:  lea    -0x24(%ebp),%eax
0826f4bb +0x36d:  mov    -0x18(%ebp),%edx
0826f4be +0x370:  mov    %edx,0x4(%esp)
0826f4c2 +0x374:  mov    %eax,(%esp)
0826f4c5 +0x377:  call   0826fde0 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x3e2>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x3e2
0826f4ca +0x37c:  sub    $0x4,%esp
0826f4cd +0x37f:  lea    -0x24(%ebp),%eax
0826f4d0 +0x382:  mov    %eax,0x4(%esp)
0826f4d4 +0x386:  lea    -0x30(%ebp),%eax
0826f4d7 +0x389:  mov    %eax,(%esp)
0826f4da +0x38c:  call   0826fe0c <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x40e>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x40e
0826f4df +0x391:  test   %al,%al
0826f4e1 +0x393:  jne    0826f197 <+0x49>
0826f4e7 +0x399:  lea    -0x2c(%ebp),%eax
0826f4ea +0x39c:  mov    %eax,(%esp)
0826f4ed +0x39f:  call   0826fd94 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x396>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x396
0826f4f2 +0x3a4:  lea    -0x28(%ebp),%eax
0826f4f5 +0x3a7:  mov    0xc(%ebp),%edx
0826f4f8 +0x3aa:  mov    %edx,0x4(%esp)
0826f4fc +0x3ae:  mov    %eax,(%esp)
0826f4ff +0x3b1:  call   0826fd3c <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x33e>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x33e
0826f504 +0x3b6:  sub    $0x4,%esp
0826f507 +0x3b9:  lea    -0x28(%ebp),%eax
0826f50a +0x3bc:  mov    %eax,0x4(%esp)
0826f50e +0x3c0:  lea    -0x2c(%ebp),%eax
0826f511 +0x3c3:  mov    %eax,(%esp)
0826f514 +0x3c6:  call   0826fd68 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x36a>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x36a
0826f519 +0x3cb:  test   %al,%al
0826f51b +0x3cd:  jne    0826f16f <+0x21>
0826f521 +0x3d3:  mov    $0x1,%eax
0826f526 +0x3d8:  mov    -0x4(%ebp),%ebx
0826f529 +0x3db:  leave
0826f52a +0x3dc:  ret
0826f52b +0x3dd:  nop
```

## 反编译 C

```c
// RentalMachineDimension::checkSelectionListScript @ 0x826f14e

/* RentalMachineDimension::checkSelectionListScript(std::vector<std::vector<EventRewardItemInfo,
   std::allocator<EventRewardItemInfo> >, std::allocator<std::vector<EventRewardItemInfo,
   std::allocator<EventRewardItemInfo> > > > const&) */

undefined4 RentalMachineDimension::checkSelectionListScript(vector *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  CDataManager *this;
  ostream *poVar4;
  __normal_iterator<EventRewardItemInfo_const*,std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>
  local_34 [4];
  __normal_iterator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>const*,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  uint local_24 [2];
  undefined4 local_1c;
  uint *local_18;
  CItem *local_14;
  int local_10;
  
  std::
  vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
  ::begin();
  do {
    std::
    vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
    ::end();
    bVar3 = __gnu_cxx::operator!=(local_30,local_2c);
    if (!bVar3) {
      return 1;
    }
    local_1c = __gnu_cxx::
               __normal_iterator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>const*,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>
               ::operator*(local_30);
    std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::begin();
    while( true ) {
      std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::end();
      bVar3 = __gnu_cxx::operator!=(local_34,local_28);
      if (!bVar3) break;
      local_18 = (uint *)__gnu_cxx::
                         __normal_iterator<EventRewardItemInfo_const*,std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>
                         ::operator*(local_34);
      uVar1 = *local_18;
      this = (CDataManager *)G_CDataManager();
      local_14 = (CItem *)CDataManager::find_item(this,uVar1);
      if (local_14 == (CItem *)0x0) {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] Can`t find item[");
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      cVar2 = (**(code **)(*(int *)local_14 + 0x34))(local_14);
      if (cVar2 != '\x01') {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] Impossible contents(amplify upgrade) is not checked. ["
                                );
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      cVar2 = (**(code **)(*(int *)local_14 + 0x40))(local_14);
      if (cVar2 != '\x01') {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] Impossible contents(charac cargo) is not checked. ["
                                );
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      cVar2 = (**(code **)(*(int *)local_14 + 0x38))(local_14);
      if (cVar2 != '\x01') {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] Impossible contents(disjoint) is not checked. ["
                                );
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      cVar2 = (**(code **)(*(int *)local_14 + 0x3c))(local_14);
      if (cVar2 != '\x01') {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] Impossible contents(gift) is not checked. ["
                                );
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      cVar2 = (**(code **)(*(int *)local_14 + 0x30))(local_14);
      if (cVar2 != '\x01') {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] Impossible contents(upgrade) is not checked. ["
                                );
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      local_10 = CItem::GetAttachType(local_14);
      if (local_10 != 2) {
        uVar1 = *local_18;
        poVar4 = std::operator<<((ostream *)&std::cerr,
                                 "[RentalDimensionSystem::Ready()] AtttachType is not trade delete. ["
                                );
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
        poVar4 = std::operator<<(poVar4,"]");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        return 0;
      }
      std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::operator->
                ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)(param_1 + 4));
      std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::insert(local_24);
      __gnu_cxx::
      __normal_iterator<EventRewardItemInfo_const*,std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>
      ::operator++(local_34);
    }
    __gnu_cxx::
    __normal_iterator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>const*,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>
    ::operator++(local_30);
  } while( true );
}
```
