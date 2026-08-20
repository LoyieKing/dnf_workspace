# checkAllRentalItemScript

`_ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv`

`RentalMachinePcRoom::checkAllRentalItemScript()`

| 类 | 地址 |
|---|---|
| `RentalMachinePcRoom` | `0x082708cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082708cc  _ZN19RentalMachinePcRoom24checkAllRentalItemScriptEv
#           RentalMachinePcRoom::checkAllRentalItemScript()
# range [0x082708cc, 0x08270d1d]
082708cc +0x000:  push   %ebp
082708cd +0x001:  mov    %esp,%ebp
082708cf +0x003:  push   %ebx
082708d0 +0x004:  sub    $0x54,%esp
082708d3 +0x007:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082708d8 +0x00c:  lea    0x4b00(%eax),%edx
082708de +0x012:  lea    -0x34(%ebp),%eax
082708e1 +0x015:  mov    %edx,0x4(%esp)
082708e5 +0x019:  mov    %eax,(%esp)
082708e8 +0x01c:  call   0826fbf8 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1fa>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1fa
082708ed +0x021:  sub    $0x4,%esp
082708f0 +0x024:  jmp    08270cdd <+0x411>
082708f5 +0x029:  lea    -0x34(%ebp),%eax
082708f8 +0x02c:  mov    %eax,(%esp)
082708fb +0x02f:  call   0826fc76 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x278>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x278
08270900 +0x034:  add    $0x4,%eax
08270903 +0x037:  mov    %eax,-0x1c(%ebp)
08270906 +0x03a:  lea    -0x38(%ebp),%eax
08270909 +0x03d:  mov    -0x1c(%ebp),%edx
0827090c +0x040:  mov    %edx,0x4(%esp)
08270910 +0x044:  mov    %eax,(%esp)
08270913 +0x047:  call   0826fd10 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x312>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x312
08270918 +0x04c:  sub    $0x4,%esp
0827091b +0x04f:  jmp    08270ca3 <+0x3d7>
08270920 +0x054:  lea    -0x38(%ebp),%eax
08270923 +0x057:  mov    %eax,(%esp)
08270926 +0x05a:  call   0826fdaa <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x3ac>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x3ac
0827092b +0x05f:  mov    %eax,-0x18(%ebp)
0827092e +0x062:  lea    -0x3c(%ebp),%eax
08270931 +0x065:  mov    -0x18(%ebp),%edx
08270934 +0x068:  mov    %edx,0x4(%esp)
08270938 +0x06c:  mov    %eax,(%esp)
0827093b +0x06f:  call   0826fdb4 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x3b6>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x3b6
08270940 +0x074:  sub    $0x4,%esp
08270943 +0x077:  jmp    08270c69 <+0x39d>
08270948 +0x07c:  lea    -0x3c(%ebp),%eax
0827094b +0x07f:  mov    %eax,(%esp)
0827094e +0x082:  call   0826fe4e <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x450>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x450
08270953 +0x087:  mov    %eax,-0x14(%ebp)
08270956 +0x08a:  mov    -0x14(%ebp),%eax
08270959 +0x08d:  mov    (%eax),%eax
0827095b +0x08f:  mov    %eax,%ebx
0827095d +0x091:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08270962 +0x096:  mov    %ebx,0x4(%esp)
08270966 +0x09a:  mov    %eax,(%esp)
08270969 +0x09d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0827096e +0x0a2:  mov    %eax,-0x10(%ebp)
08270971 +0x0a5:  cmpl   $0x0,-0x10(%ebp)
08270975 +0x0a9:  jne    082709c6 <+0xfa>
08270977 +0x0ab:  mov    -0x14(%ebp),%eax
0827097a +0x0ae:  mov    (%eax),%ebx
0827097c +0x0b0:  movl   $"[RentalSystem::Ready()] Can`t find item[",0x4(%esp)
08270984 +0x0b8:  movl   $&_ZSt4cerr,(%esp)
0827098b +0x0bf:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08270990 +0x0c4:  mov    %ebx,0x4(%esp)
08270994 +0x0c8:  mov    %eax,(%esp)
08270997 +0x0cb:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
0827099c +0x0d0:  movl   $"]",0x4(%esp)
082709a4 +0x0d8:  mov    %eax,(%esp)
082709a7 +0x0db:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
082709ac +0x0e0:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
082709b4 +0x0e8:  mov    %eax,(%esp)
082709b7 +0x0eb:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
082709bc +0x0f0:  mov    $0x0,%eax
082709c1 +0x0f5:  jmp    08270d19 <+0x44d>
082709c6 +0x0fa:  mov    -0x10(%ebp),%eax
082709c9 +0x0fd:  mov    (%eax),%eax
082709cb +0x0ff:  add    $0x34,%eax
082709ce +0x102:  mov    (%eax),%edx
082709d0 +0x104:  mov    -0x10(%ebp),%eax
082709d3 +0x107:  mov    %eax,(%esp)
082709d6 +0x10a:  call   *%edx
082709d8 +0x10c:  xor    $0x1,%eax
082709db +0x10f:  test   %al,%al
082709dd +0x111:  je     08270a2e <+0x162>
082709df +0x113:  mov    -0x14(%ebp),%eax
082709e2 +0x116:  mov    (%eax),%ebx
082709e4 +0x118:  movl   $"[RentalSystem::Ready()] Impossible contents(amplify upgrade) is not checked. [",0x4(%esp)
082709ec +0x120:  movl   $&_ZSt4cerr,(%esp)
082709f3 +0x127:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
082709f8 +0x12c:  mov    %ebx,0x4(%esp)
082709fc +0x130:  mov    %eax,(%esp)
082709ff +0x133:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
08270a04 +0x138:  movl   $"]",0x4(%esp)
08270a0c +0x140:  mov    %eax,(%esp)
08270a0f +0x143:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08270a14 +0x148:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
08270a1c +0x150:  mov    %eax,(%esp)
08270a1f +0x153:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
08270a24 +0x158:  mov    $0x0,%eax
08270a29 +0x15d:  jmp    08270d19 <+0x44d>
08270a2e +0x162:  mov    -0x10(%ebp),%eax
08270a31 +0x165:  mov    (%eax),%eax
08270a33 +0x167:  add    $0x40,%eax
08270a36 +0x16a:  mov    (%eax),%edx
08270a38 +0x16c:  mov    -0x10(%ebp),%eax
08270a3b +0x16f:  mov    %eax,(%esp)
08270a3e +0x172:  call   *%edx
08270a40 +0x174:  xor    $0x1,%eax
08270a43 +0x177:  test   %al,%al
08270a45 +0x179:  je     08270a96 <+0x1ca>
08270a47 +0x17b:  mov    -0x14(%ebp),%eax
08270a4a +0x17e:  mov    (%eax),%ebx
08270a4c +0x180:  movl   $"[RentalSystem::Ready()] Impossible contents(charac cargo) is not checked. [",0x4(%esp)
08270a54 +0x188:  movl   $&_ZSt4cerr,(%esp)
08270a5b +0x18f:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08270a60 +0x194:  mov    %ebx,0x4(%esp)
08270a64 +0x198:  mov    %eax,(%esp)
08270a67 +0x19b:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
08270a6c +0x1a0:  movl   $"]",0x4(%esp)
08270a74 +0x1a8:  mov    %eax,(%esp)
08270a77 +0x1ab:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08270a7c +0x1b0:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
08270a84 +0x1b8:  mov    %eax,(%esp)
08270a87 +0x1bb:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
08270a8c +0x1c0:  mov    $0x0,%eax
08270a91 +0x1c5:  jmp    08270d19 <+0x44d>
08270a96 +0x1ca:  mov    -0x10(%ebp),%eax
08270a99 +0x1cd:  mov    (%eax),%eax
08270a9b +0x1cf:  add    $0x38,%eax
08270a9e +0x1d2:  mov    (%eax),%edx
08270aa0 +0x1d4:  mov    -0x10(%ebp),%eax
08270aa3 +0x1d7:  mov    %eax,(%esp)
08270aa6 +0x1da:  call   *%edx
08270aa8 +0x1dc:  xor    $0x1,%eax
08270aab +0x1df:  test   %al,%al
08270aad +0x1e1:  je     08270afe <+0x232>
08270aaf +0x1e3:  mov    -0x14(%ebp),%eax
08270ab2 +0x1e6:  mov    (%eax),%ebx
08270ab4 +0x1e8:  movl   $"[RentalSystem::Ready()] Impossible contents(disjoint) is not checked. [",0x4(%esp)
08270abc +0x1f0:  movl   $&_ZSt4cerr,(%esp)
08270ac3 +0x1f7:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08270ac8 +0x1fc:  mov    %ebx,0x4(%esp)
08270acc +0x200:  mov    %eax,(%esp)
08270acf +0x203:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
08270ad4 +0x208:  movl   $"]",0x4(%esp)
08270adc +0x210:  mov    %eax,(%esp)
08270adf +0x213:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08270ae4 +0x218:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
08270aec +0x220:  mov    %eax,(%esp)
08270aef +0x223:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
08270af4 +0x228:  mov    $0x0,%eax
08270af9 +0x22d:  jmp    08270d19 <+0x44d>
08270afe +0x232:  mov    -0x10(%ebp),%eax
08270b01 +0x235:  mov    (%eax),%eax
08270b03 +0x237:  add    $0x3c,%eax
08270b06 +0x23a:  mov    (%eax),%edx
08270b08 +0x23c:  mov    -0x10(%ebp),%eax
08270b0b +0x23f:  mov    %eax,(%esp)
08270b0e +0x242:  call   *%edx
08270b10 +0x244:  xor    $0x1,%eax
08270b13 +0x247:  test   %al,%al
08270b15 +0x249:  je     08270b66 <+0x29a>
08270b17 +0x24b:  mov    -0x14(%ebp),%eax
08270b1a +0x24e:  mov    (%eax),%ebx
08270b1c +0x250:  movl   $"[RentalSystem::Ready()] Impossible contents(gift) is not checked. [",0x4(%esp)
08270b24 +0x258:  movl   $&_ZSt4cerr,(%esp)
08270b2b +0x25f:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08270b30 +0x264:  mov    %ebx,0x4(%esp)
08270b34 +0x268:  mov    %eax,(%esp)
08270b37 +0x26b:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
08270b3c +0x270:  movl   $"]",0x4(%esp)
08270b44 +0x278:  mov    %eax,(%esp)
08270b47 +0x27b:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08270b4c +0x280:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
08270b54 +0x288:  mov    %eax,(%esp)
08270b57 +0x28b:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
08270b5c +0x290:  mov    $0x0,%eax
08270b61 +0x295:  jmp    08270d19 <+0x44d>
08270b66 +0x29a:  mov    -0x10(%ebp),%eax
08270b69 +0x29d:  mov    (%eax),%eax
08270b6b +0x29f:  add    $0x30,%eax
08270b6e +0x2a2:  mov    (%eax),%edx
08270b70 +0x2a4:  mov    -0x10(%ebp),%eax
08270b73 +0x2a7:  mov    %eax,(%esp)
08270b76 +0x2aa:  call   *%edx
08270b78 +0x2ac:  xor    $0x1,%eax
08270b7b +0x2af:  test   %al,%al
08270b7d +0x2b1:  je     08270bce <+0x302>
08270b7f +0x2b3:  mov    -0x14(%ebp),%eax
08270b82 +0x2b6:  mov    (%eax),%ebx
08270b84 +0x2b8:  movl   $"[RentalSystem::Ready()] Impossible contents(upgrade) is not checked. [",0x4(%esp)
08270b8c +0x2c0:  movl   $&_ZSt4cerr,(%esp)
08270b93 +0x2c7:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08270b98 +0x2cc:  mov    %ebx,0x4(%esp)
08270b9c +0x2d0:  mov    %eax,(%esp)
08270b9f +0x2d3:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
08270ba4 +0x2d8:  movl   $"]",0x4(%esp)
08270bac +0x2e0:  mov    %eax,(%esp)
08270baf +0x2e3:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08270bb4 +0x2e8:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
08270bbc +0x2f0:  mov    %eax,(%esp)
08270bbf +0x2f3:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
08270bc4 +0x2f8:  mov    $0x0,%eax
08270bc9 +0x2fd:  jmp    08270d19 <+0x44d>
08270bce +0x302:  mov    -0x10(%ebp),%eax
08270bd1 +0x305:  mov    %eax,(%esp)
08270bd4 +0x308:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
08270bd9 +0x30d:  mov    %eax,-0xc(%ebp)
08270bdc +0x310:  cmpl   $0x2,-0xc(%ebp)
08270be0 +0x314:  je     08270c31 <+0x365>
08270be2 +0x316:  mov    -0x14(%ebp),%eax
08270be5 +0x319:  mov    (%eax),%ebx
08270be7 +0x31b:  movl   $"[RentalSystem::Ready()] AtttachType is not trade delete. [",0x4(%esp)
08270bef +0x323:  movl   $&_ZSt4cerr,(%esp)
08270bf6 +0x32a:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08270bfb +0x32f:  mov    %ebx,0x4(%esp)
08270bff +0x333:  mov    %eax,(%esp)
08270c02 +0x336:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
08270c07 +0x33b:  movl   $"]",0x4(%esp)
08270c0f +0x343:  mov    %eax,(%esp)
08270c12 +0x346:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08270c17 +0x34b:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
08270c1f +0x353:  mov    %eax,(%esp)
08270c22 +0x356:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
08270c27 +0x35b:  mov    $0x0,%eax
08270c2c +0x360:  jmp    08270d19 <+0x44d>
08270c31 +0x365:  mov    -0x14(%ebp),%ebx
08270c34 +0x368:  mov    0x8(%ebp),%eax
08270c37 +0x36b:  add    $0x4,%eax
08270c3a +0x36e:  mov    %eax,(%esp)
08270c3d +0x371:  call   08271d8e <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x3b4>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x3b4
08270c42 +0x376:  lea    0x104(%eax),%edx
08270c48 +0x37c:  lea    -0x24(%ebp),%eax
08270c4b +0x37f:  mov    %ebx,0x8(%esp)
08270c4f +0x383:  mov    %edx,0x4(%esp)
08270c53 +0x387:  mov    %eax,(%esp)
08270c56 +0x38a:  call   081ab780 <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0xd2>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0xd2
08270c5b +0x38f:  sub    $0x4,%esp
08270c5e +0x392:  lea    -0x3c(%ebp),%eax
08270c61 +0x395:  mov    %eax,(%esp)
08270c64 +0x398:  call   0826fe38 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x43a>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x43a
08270c69 +0x39d:  lea    -0x28(%ebp),%eax
08270c6c +0x3a0:  mov    -0x18(%ebp),%edx
08270c6f +0x3a3:  mov    %edx,0x4(%esp)
08270c73 +0x3a7:  mov    %eax,(%esp)
08270c76 +0x3aa:  call   0826fde0 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x3e2>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x3e2
08270c7b +0x3af:  sub    $0x4,%esp
08270c7e +0x3b2:  lea    -0x28(%ebp),%eax
08270c81 +0x3b5:  mov    %eax,0x4(%esp)
08270c85 +0x3b9:  lea    -0x3c(%ebp),%eax
08270c88 +0x3bc:  mov    %eax,(%esp)
08270c8b +0x3bf:  call   0826fe0c <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x40e>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x40e
08270c90 +0x3c4:  test   %al,%al
08270c92 +0x3c6:  jne    08270948 <+0x7c>
08270c98 +0x3cc:  lea    -0x38(%ebp),%eax
08270c9b +0x3cf:  mov    %eax,(%esp)
08270c9e +0x3d2:  call   0826fd94 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x396>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x396
08270ca3 +0x3d7:  lea    -0x2c(%ebp),%eax
08270ca6 +0x3da:  mov    -0x1c(%ebp),%edx
08270ca9 +0x3dd:  mov    %edx,0x4(%esp)
08270cad +0x3e1:  mov    %eax,(%esp)
08270cb0 +0x3e4:  call   0826fd3c <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x33e>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x33e
08270cb5 +0x3e9:  sub    $0x4,%esp
08270cb8 +0x3ec:  lea    -0x2c(%ebp),%eax
08270cbb +0x3ef:  mov    %eax,0x4(%esp)
08270cbf +0x3f3:  lea    -0x38(%ebp),%eax
08270cc2 +0x3f6:  mov    %eax,(%esp)
08270cc5 +0x3f9:  call   0826fd68 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x36a>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x36a
08270cca +0x3fe:  test   %al,%al
08270ccc +0x400:  jne    08270920 <+0x54>
08270cd2 +0x406:  lea    -0x34(%ebp),%eax
08270cd5 +0x409:  mov    %eax,(%esp)
08270cd8 +0x40c:  call   0826fc58 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x25a>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x25a
08270cdd +0x411:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08270ce2 +0x416:  lea    0x4b00(%eax),%edx
08270ce8 +0x41c:  lea    -0x30(%ebp),%eax
08270ceb +0x41f:  mov    %edx,0x4(%esp)
08270cef +0x423:  mov    %eax,(%esp)
08270cf2 +0x426:  call   0826fc1e <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x220>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x220
08270cf7 +0x42b:  sub    $0x4,%esp
08270cfa +0x42e:  lea    -0x30(%ebp),%eax
08270cfd +0x431:  mov    %eax,0x4(%esp)
08270d01 +0x435:  lea    -0x34(%ebp),%eax
08270d04 +0x438:  mov    %eax,(%esp)
08270d07 +0x43b:  call   0826fc44 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x246>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x246
08270d0c +0x440:  test   %al,%al
08270d0e +0x442:  jne    082708f5 <+0x29>
08270d14 +0x448:  mov    $0x1,%eax
08270d19 +0x44d:  mov    -0x4(%ebp),%ebx
08270d1c +0x450:  leave
08270d1d +0x451:  ret
```

## 反编译 C

```c
// RentalMachinePcRoom::checkAllRentalItemScript @ 0x82708cc

/* RentalMachinePcRoom::checkAllRentalItemScript() */

undefined4 __thiscall RentalMachinePcRoom::checkAllRentalItemScript(RentalMachinePcRoom *this)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  CDataManager *this_00;
  ostream *poVar4;
  __normal_iterator<EventRewardItemInfo_const*,std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>
  local_40 [4];
  __normal_iterator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>const*,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>
  local_3c [4];
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_38 [4];
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_34 [4];
  __normal_iterator local_30 [4];
  __normal_iterator local_2c [4];
  uint local_28 [2];
  int local_20;
  undefined4 local_1c;
  uint *local_18;
  CItem *local_14;
  int local_10;
  
  G_CDataManager();
  std::
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  ::begin(local_38);
  do {
    G_CDataManager();
    std::
    map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
    ::end(local_34);
    cVar3 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                          *)local_38,(_Rb_tree_iterator *)local_34);
    if (cVar3 == '\0') {
      return 1;
    }
    local_20 = std::
               _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
               ::operator*((_Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                            *)local_38);
    local_20 = local_20 + 4;
    std::
    vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
    ::begin();
    while( true ) {
      std::
      vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
      ::end();
      bVar2 = __gnu_cxx::operator!=(local_3c,local_30);
      if (!bVar2) break;
      local_1c = __gnu_cxx::
                 __normal_iterator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>const*,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>
                 ::operator*(local_3c);
      std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::begin();
      while( true ) {
        std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::end();
        bVar2 = __gnu_cxx::operator!=(local_40,local_2c);
        if (!bVar2) break;
        local_18 = (uint *)__gnu_cxx::
                           __normal_iterator<EventRewardItemInfo_const*,std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>
                           ::operator*(local_40);
        uVar1 = *local_18;
        this_00 = (CDataManager *)G_CDataManager();
        local_14 = (CItem *)CDataManager::find_item(this_00,uVar1);
        if (local_14 == (CItem *)0x0) {
          uVar1 = *local_18;
          poVar4 = std::operator<<((ostream *)&std::cerr,"[RentalSystem::Ready()] Can`t find item[")
          ;
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
          poVar4 = std::operator<<(poVar4,"]");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
          return 0;
        }
        cVar3 = (**(code **)(*(int *)local_14 + 0x34))(local_14);
        if (cVar3 != '\x01') {
          uVar1 = *local_18;
          poVar4 = std::operator<<((ostream *)&std::cerr,
                                   "[RentalSystem::Ready()] Impossible contents(amplify upgrade) is not checked. ["
                                  );
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
          poVar4 = std::operator<<(poVar4,"]");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
          return 0;
        }
        cVar3 = (**(code **)(*(int *)local_14 + 0x40))(local_14);
        if (cVar3 != '\x01') {
          uVar1 = *local_18;
          poVar4 = std::operator<<((ostream *)&std::cerr,
                                   "[RentalSystem::Ready()] Impossible contents(charac cargo) is not checked. ["
                                  );
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
          poVar4 = std::operator<<(poVar4,"]");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
          return 0;
        }
        cVar3 = (**(code **)(*(int *)local_14 + 0x38))(local_14);
        if (cVar3 != '\x01') {
          uVar1 = *local_18;
          poVar4 = std::operator<<((ostream *)&std::cerr,
                                   "[RentalSystem::Ready()] Impossible contents(disjoint) is not checked. ["
                                  );
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
          poVar4 = std::operator<<(poVar4,"]");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
          return 0;
        }
        cVar3 = (**(code **)(*(int *)local_14 + 0x3c))(local_14);
        if (cVar3 != '\x01') {
          uVar1 = *local_18;
          poVar4 = std::operator<<((ostream *)&std::cerr,
                                   "[RentalSystem::Ready()] Impossible contents(gift) is not checked. ["
                                  );
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
          poVar4 = std::operator<<(poVar4,"]");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
          return 0;
        }
        cVar3 = (**(code **)(*(int *)local_14 + 0x30))(local_14);
        if (cVar3 != '\x01') {
          uVar1 = *local_18;
          poVar4 = std::operator<<((ostream *)&std::cerr,
                                   "[RentalSystem::Ready()] Impossible contents(upgrade) is not checked. ["
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
                                   "[RentalSystem::Ready()] AtttachType is not trade delete. [");
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,uVar1);
          poVar4 = std::operator<<(poVar4,"]");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
          return 0;
        }
        std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::operator->
                  ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(this + 4));
        std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::insert
                  (local_28);
        __gnu_cxx::
        __normal_iterator<EventRewardItemInfo_const*,std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>
        ::operator++(local_40);
      }
      __gnu_cxx::
      __normal_iterator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>const*,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>
      ::operator++(local_3c);
    }
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
                  *)local_38);
  } while( true );
}
```
