# ImportRewardScript

`_ZN11eventReward18ImportRewardScriptEPKcS1_`

`eventReward::ImportRewardScript(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080ef3a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ef3a2  _ZN11eventReward18ImportRewardScriptEPKcS1_
#           eventReward::ImportRewardScript(char const*, char const*)
# range [0x080ef3a2, 0x080f026f]
080ef3a2 +0x000:  push   %ebp
080ef3a3 +0x001:  mov    %esp,%ebp
080ef3a5 +0x003:  push   %edi
080ef3a6 +0x004:  push   %esi
080ef3a7 +0x005:  push   %ebx
080ef3a8 +0x006:  sub    $0x21c,%esp
080ef3ae +0x00c:  mov    0x10(%ebp),%eax
080ef3b1 +0x00f:  mov    %eax,0x4(%esp)
080ef3b5 +0x013:  mov    0xc(%ebp),%eax
080ef3b8 +0x016:  mov    %eax,(%esp)
080ef3bb +0x019:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
080ef3c0 +0x01e:  xor    $0x1,%eax
080ef3c3 +0x021:  test   %al,%al
080ef3c5 +0x023:  je     080ef3d1 <+0x2f>
080ef3c7 +0x025:  mov    $0x0,%ebx
080ef3cc +0x02a:  jmp    080f0262 <+0xec0>
080ef3d1 +0x02f:  lea    -0x188(%ebp),%eax
080ef3d7 +0x035:  mov    %eax,(%esp)
080ef3da +0x038:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
080ef3df +0x03d:  movb   $0x0,-0x189(%ebp)
080ef3e6 +0x044:  lea    -0x1a4(%ebp),%eax
080ef3ec +0x04a:  mov    %eax,(%esp)
080ef3ef +0x04d:  call   080f145a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x4dc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x4dc
080ef3f4 +0x052:  lea    -0x1a9(%ebp),%eax
080ef3fa +0x058:  mov    %eax,(%esp)
080ef3fd +0x05b:  call   080f11f0 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x272>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x272
080ef402 +0x060:  movl   $0x0,-0x20(%ebp)
080ef409 +0x067:  lea    -0x1b8(%ebp),%eax
080ef40f +0x06d:  mov    %eax,(%esp)
080ef412 +0x070:  call   080f1134 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x1b6>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1b6
080ef417 +0x075:  movl   $0x1,0x4(%esp)
080ef41f +0x07d:  lea    -0x188(%ebp),%eax
080ef425 +0x083:  mov    %eax,(%esp)
080ef428 +0x086:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
080ef42d +0x08b:  xor    $0x1,%eax
080ef430 +0x08e:  test   %al,%al
080ef432 +0x090:  jne    080f0201 <+0xe5f>
080ef438 +0x096:  mov    $&_ZGVZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,%eax
080ef43d +0x09b:  movzbl (%eax),%eax
080ef440 +0x09e:  test   %al,%al
080ef442 +0x0a0:  jne    080ef4b4 <+0x112>
080ef444 +0x0a2:  movl   $&_ZGVZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,(%esp)
080ef44b +0x0a9:  call   08725330 <__cxa_guard_acquire>
080ef450 +0x0ae:  test   %eax,%eax
080ef452 +0x0b0:  setne  %al
080ef455 +0x0b3:  test   %al,%al
080ef457 +0x0b5:  je     080ef4b4 <+0x112>
080ef459 +0x0b7:  mov    $0x0,%esi
080ef45e +0x0bc:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,(%esp)
080ef465 +0x0c3:  call   080f14d4 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x556>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x556
080ef46a +0x0c8:  movl   $&_ZGVZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,(%esp)
080ef471 +0x0cf:  call   08725250 <__cxa_guard_release>
080ef476 +0x0d4:  mov    $&_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEED1Ev,%eax
080ef47b +0x0d9:  movl   $&__dso_handle,0x8(%esp)
080ef483 +0x0e1:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,0x4(%esp)
080ef48b +0x0e9:  mov    %eax,(%esp)
080ef48e +0x0ec:  call   0807ddd0 <_init+0x6c8>
080ef493 +0x0f1:  jmp    080ef4b4 <+0x112>
080ef495 +0x0f3:  mov    %edx,%ebx
080ef497 +0x0f5:  mov    %eax,%edi
080ef499 +0x0f7:  mov    %esi,%eax
080ef49b +0x0f9:  test   %al,%al
080ef49d +0x0fb:  jne    080ef4ab <+0x109>
080ef49f +0x0fd:  movl   $&_ZGVZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,(%esp)
080ef4a6 +0x104:  call   087252c0 <__cxa_guard_abort>
080ef4ab +0x109:  mov    %edi,%eax
080ef4ad +0x10b:  mov    %ebx,%edx
080ef4af +0x10d:  jmp    080f020e <+0xe6c>
080ef4b4 +0x112:  mov    $&_ZGVZN11eventReward18ImportRewardScriptEPKcS1_E11__init_lock,%eax
080ef4b9 +0x117:  movzbl (%eax),%eax
080ef4bc +0x11a:  test   %al,%al
080ef4be +0x11c:  jne    080ef530 <+0x18e>
080ef4c0 +0x11e:  movl   $&_ZGVZN11eventReward18ImportRewardScriptEPKcS1_E11__init_lock,(%esp)
080ef4c7 +0x125:  call   08725330 <__cxa_guard_acquire>
080ef4cc +0x12a:  test   %eax,%eax
080ef4ce +0x12c:  setne  %al
080ef4d1 +0x12f:  test   %al,%al
080ef4d3 +0x131:  je     080ef530 <+0x18e>
080ef4d5 +0x133:  mov    $0x0,%esi
080ef4da +0x138:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E11__init_lock,(%esp)
080ef4e1 +0x13f:  call   08ad3522 <_ZN8SpinLockC1Ev>  ; SpinLock::SpinLock()
080ef4e6 +0x144:  movl   $&_ZGVZN11eventReward18ImportRewardScriptEPKcS1_E11__init_lock,(%esp)
080ef4ed +0x14b:  call   08725250 <__cxa_guard_release>
080ef4f2 +0x150:  mov    $&_ZN8SpinLockD1Ev,%eax
080ef4f7 +0x155:  movl   $&__dso_handle,0x8(%esp)
080ef4ff +0x15d:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E11__init_lock,0x4(%esp)
080ef507 +0x165:  mov    %eax,(%esp)
080ef50a +0x168:  call   0807ddd0 <_init+0x6c8>
080ef50f +0x16d:  jmp    080ef530 <+0x18e>
080ef511 +0x16f:  mov    %edx,%ebx
080ef513 +0x171:  mov    %eax,%edi
080ef515 +0x173:  mov    %esi,%eax
080ef517 +0x175:  test   %al,%al
080ef519 +0x177:  jne    080ef527 <+0x185>
080ef51b +0x179:  movl   $&_ZGVZN11eventReward18ImportRewardScriptEPKcS1_E11__init_lock,(%esp)
080ef522 +0x180:  call   087252c0 <__cxa_guard_abort>
080ef527 +0x185:  mov    %edi,%eax
080ef529 +0x187:  mov    %ebx,%edx
080ef52b +0x189:  jmp    080f020e <+0xe6c>
080ef530 +0x18e:  movzbl &_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited,%eax
080ef537 +0x195:  test   %al,%al
080ef539 +0x197:  je     080ef5f8 <+0x256>
080ef53f +0x19d:  lea    -0x188(%ebp),%eax
080ef545 +0x1a3:  mov    %eax,(%esp)
080ef548 +0x1a6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
080ef54d +0x1ab:  mov    %eax,-0x180(%ebp)
080ef553 +0x1b1:  lea    -0x184(%ebp),%eax
080ef559 +0x1b7:  lea    -0x180(%ebp),%edx
080ef55f +0x1bd:  mov    %edx,0x8(%esp)
080ef563 +0x1c1:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,0x4(%esp)
080ef56b +0x1c9:  mov    %eax,(%esp)
080ef56e +0x1cc:  call   080f154e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x5d0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5d0
080ef573 +0x1d1:  sub    $0x4,%esp
080ef576 +0x1d4:  lea    -0x184(%ebp),%eax
080ef57c +0x1da:  mov    %eax,0x4(%esp)
080ef580 +0x1de:  lea    -0x1bc(%ebp),%eax
080ef586 +0x1e4:  mov    %eax,(%esp)
080ef589 +0x1e7:  call   080f157a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x5fc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5fc
080ef58e +0x1ec:  lea    -0x178(%ebp),%eax
080ef594 +0x1f2:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,0x4(%esp)
080ef59c +0x1fa:  mov    %eax,(%esp)
080ef59f +0x1fd:  call   080f158a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x60c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x60c
080ef5a4 +0x202:  sub    $0x4,%esp
080ef5a7 +0x205:  lea    -0x178(%ebp),%eax
080ef5ad +0x20b:  mov    %eax,0x4(%esp)
080ef5b1 +0x20f:  lea    -0x17c(%ebp),%eax
080ef5b7 +0x215:  mov    %eax,(%esp)
080ef5ba +0x218:  call   080f157a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x5fc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5fc
080ef5bf +0x21d:  lea    -0x17c(%ebp),%eax
080ef5c5 +0x223:  mov    %eax,0x4(%esp)
080ef5c9 +0x227:  lea    -0x1bc(%ebp),%eax
080ef5cf +0x22d:  mov    %eax,(%esp)
080ef5d2 +0x230:  call   080f15b0 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x632>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x632
080ef5d7 +0x235:  test   %al,%al
080ef5d9 +0x237:  je     080ef5ee <+0x24c>
080ef5db +0x239:  lea    -0x1bc(%ebp),%eax
080ef5e1 +0x23f:  mov    %eax,(%esp)
080ef5e4 +0x242:  call   080f15c4 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x646>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x646
080ef5e9 +0x247:  mov    0x4(%eax),%eax
080ef5ec +0x24a:  jmp    080ef5f3 <+0x251>
080ef5ee +0x24c:  mov    $0xffffffff,%eax
080ef5f3 +0x251:  mov    %eax,-0x1c(%ebp)
080ef5f6 +0x254:  jmp    080ef628 <+0x286>
080ef5f8 +0x256:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E11__init_lock,(%esp)
080ef5ff +0x25d:  call   08ad3552 <_ZN8SpinLock5enterEv>  ; SpinLock::enter()
080ef604 +0x262:  movzbl &_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited,%eax
080ef60b +0x269:  test   %al,%al
080ef60d +0x26b:  je     080ef621 <+0x27f>
080ef60f +0x26d:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E11__init_lock,(%esp)
080ef616 +0x274:  call   08ad3586 <_ZN8SpinLock5leaveEv>  ; SpinLock::leave()
080ef61b +0x279:  nop
080ef61c +0x27a:  jmp    080ef438 <+0x96>
080ef621 +0x27f:  movl   $0x0,-0x1c(%ebp)
080ef628 +0x286:  mov    -0x1c(%ebp),%eax
080ef62b +0x289:  cmp    $0xaf,%eax
080ef630 +0x28e:  je     080ef9c9 <+0x627>
080ef636 +0x294:  cmp    $0xaf,%eax
080ef63b +0x299:  jg     080ef66f <+0x2cd>
080ef63d +0x29b:  cmp    $0x8f,%eax
080ef642 +0x2a0:  je     080ef6b7 <+0x315>
080ef644 +0x2a2:  cmp    $0x8f,%eax
080ef649 +0x2a7:  jg     080ef654 <+0x2b2>
080ef64b +0x2a9:  test   %eax,%eax
080ef64d +0x2ab:  je     080ef6b7 <+0x315>
080ef64f +0x2ad:  jmp    080f01d5 <+0xe33>
080ef654 +0x2b2:  cmp    $0x93,%eax
080ef659 +0x2b7:  je     080ef71e <+0x37c>
080ef65f +0x2bd:  cmp    $0xa3,%eax
080ef664 +0x2c2:  je     080ef85d <+0x4bb>
080ef66a +0x2c8:  jmp    080f01d5 <+0xe33>
080ef66f +0x2cd:  cmp    $0xfc,%eax
080ef674 +0x2d2:  je     080effe5 <+0xc43>
080ef67a +0x2d8:  cmp    $0xfc,%eax
080ef67f +0x2dd:  jg     080ef69c <+0x2fa>
080ef681 +0x2df:  cmp    $0xb9,%eax
080ef686 +0x2e4:  je     080efa98 <+0x6f6>
080ef68c +0x2ea:  cmp    $0xd8,%eax
080ef691 +0x2ef:  je     080efd26 <+0x984>
080ef697 +0x2f5:  jmp    080f01d5 <+0xe33>
080ef69c +0x2fa:  cmp    $0x102,%eax
080ef6a1 +0x2ff:  je     080f010d <+0xd6b>
080ef6a7 +0x305:  cmp    $0x107,%eax
080ef6ac +0x30a:  je     080f0179 <+0xdd7>
080ef6b2 +0x310:  jmp    080f01d5 <+0xe33>
080ef6b7 +0x315:  movzbl &_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited,%eax
080ef6be +0x31c:  xor    $0x1,%eax
080ef6c1 +0x31f:  test   %al,%al
080ef6c3 +0x321:  je     080ef714 <+0x372>
080ef6c5 +0x323:  movl   $0x8f,-0x164(%ebp)
080ef6cf +0x32d:  lea    -0x164(%ebp),%eax
080ef6d5 +0x333:  mov    %eax,0x8(%esp)
080ef6d9 +0x337:  movl   $"[/reward]",0x4(%esp)
080ef6e1 +0x33f:  lea    -0x16c(%ebp),%eax
080ef6e7 +0x345:  mov    %eax,(%esp)
080ef6ea +0x348:  call   080f15d2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x654>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x654
080ef6ef +0x34d:  lea    -0x174(%ebp),%eax
080ef6f5 +0x353:  lea    -0x16c(%ebp),%edx
080ef6fb +0x359:  mov    %edx,0x8(%esp)
080ef6ff +0x35d:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,0x4(%esp)
080ef707 +0x365:  mov    %eax,(%esp)
080ef70a +0x368:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
080ef70f +0x36d:  sub    $0x4,%esp
080ef712 +0x370:  jmp    080ef71e <+0x37c>
080ef714 +0x372:  mov    $0x1,%ebx
080ef719 +0x377:  jmp    080f0226 <+0xe84>
080ef71e +0x37c:  movzbl &_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited,%eax
080ef725 +0x383:  xor    $0x1,%eax
080ef728 +0x386:  test   %al,%al
080ef72a +0x388:  je     080ef77e <+0x3dc>
080ef72c +0x38a:  movl   $0x93,-0x150(%ebp)
080ef736 +0x394:  lea    -0x150(%ebp),%eax
080ef73c +0x39a:  mov    %eax,0x8(%esp)
080ef740 +0x39e:  movl   $"[job type]",0x4(%esp)
080ef748 +0x3a6:  lea    -0x158(%ebp),%eax
080ef74e +0x3ac:  mov    %eax,(%esp)
080ef751 +0x3af:  call   080f162c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x6ae>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x6ae
080ef756 +0x3b4:  lea    -0x160(%ebp),%eax
080ef75c +0x3ba:  lea    -0x158(%ebp),%edx
080ef762 +0x3c0:  mov    %edx,0x8(%esp)
080ef766 +0x3c4:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,0x4(%esp)
080ef76e +0x3cc:  mov    %eax,(%esp)
080ef771 +0x3cf:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
080ef776 +0x3d4:  sub    $0x4,%esp
080ef779 +0x3d7:  jmp    080ef85d <+0x4bb>
080ef77e +0x3dc:  lea    -0x1c0(%ebp),%eax
080ef784 +0x3e2:  mov    %eax,(%esp)
080ef787 +0x3e5:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
080ef78c +0x3ea:  lea    -0x1c0(%ebp),%eax
080ef792 +0x3f0:  mov    %eax,(%esp)
080ef795 +0x3f3:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
080ef79a +0x3f8:  xor    $0x1,%eax
080ef79d +0x3fb:  test   %al,%al
080ef79f +0x3fd:  je     080ef7b0 <+0x40e>
080ef7a1 +0x3ff:  mov    $0x0,%ebx
080ef7a6 +0x404:  mov    $0x0,%esi
080ef7ab +0x409:  jmp    080ef842 <+0x4a0>
080ef7b0 +0x40e:  lea    -0x1c0(%ebp),%eax
080ef7b6 +0x414:  mov    %eax,(%esp)
080ef7b9 +0x417:  call   089bbc0f <_Z26getCharacterJobToEnumValueRSs>  ; getCharacterJobToEnumValue(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
080ef7be +0x41c:  mov    %al,-0x1a9(%ebp)
080ef7c4 +0x422:  lea    -0x189(%ebp),%eax
080ef7ca +0x428:  mov    %eax,(%esp)
080ef7cd +0x42b:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
080ef7d2 +0x430:  mov    %al,-0x1a8(%ebp)
080ef7d8 +0x436:  movzbl -0x189(%ebp),%eax
080ef7df +0x43d:  xor    $0x1,%eax
080ef7e2 +0x440:  test   %al,%al
080ef7e4 +0x442:  je     080ef7f2 <+0x450>
080ef7e6 +0x444:  mov    $0x0,%ebx
080ef7eb +0x449:  mov    $0x0,%esi
080ef7f0 +0x44e:  jmp    080ef842 <+0x4a0>
080ef7f2 +0x450:  lea    -0x189(%ebp),%eax
080ef7f8 +0x456:  mov    %eax,(%esp)
080ef7fb +0x459:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
080ef800 +0x45e:  mov    %al,-0x1a7(%ebp)
080ef806 +0x464:  movzbl -0x189(%ebp),%eax
080ef80d +0x46b:  xor    $0x1,%eax
080ef810 +0x46e:  test   %al,%al
080ef812 +0x470:  je     080ef820 <+0x47e>
080ef814 +0x472:  mov    $0x0,%ebx
080ef819 +0x477:  mov    $0x0,%esi
080ef81e +0x47c:  jmp    080ef842 <+0x4a0>
080ef820 +0x47e:  mov    $0x1,%esi
080ef825 +0x483:  jmp    080ef842 <+0x4a0>
080ef827 +0x485:  mov    %edx,%ebx
080ef829 +0x487:  mov    %eax,%esi
080ef82b +0x489:  lea    -0x1c0(%ebp),%eax
080ef831 +0x48f:  mov    %eax,(%esp)
080ef834 +0x492:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080ef839 +0x497:  mov    %esi,%eax
080ef83b +0x499:  mov    %ebx,%edx
080ef83d +0x49b:  jmp    080f020e <+0xe6c>
080ef842 +0x4a0:  lea    -0x1c0(%ebp),%eax
080ef848 +0x4a6:  mov    %eax,(%esp)
080ef84b +0x4a9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080ef850 +0x4ae:  test   %esi,%esi
080ef852 +0x4b0:  je     080f0226 <+0xe84>
080ef858 +0x4b6:  jmp    080f01d5 <+0xe33>
080ef85d +0x4bb:  movzbl &_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited,%eax
080ef864 +0x4c2:  xor    $0x1,%eax
080ef867 +0x4c5:  test   %al,%al
080ef869 +0x4c7:  je     080ef8bd <+0x51b>
080ef86b +0x4c9:  movl   $0xa3,-0x13c(%ebp)
080ef875 +0x4d3:  lea    -0x13c(%ebp),%eax
080ef87b +0x4d9:  mov    %eax,0x8(%esp)
080ef87f +0x4dd:  movl   $"[sub type]",0x4(%esp)
080ef887 +0x4e5:  lea    -0x144(%ebp),%eax
080ef88d +0x4eb:  mov    %eax,(%esp)
080ef890 +0x4ee:  call   080f162c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x6ae>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x6ae
080ef895 +0x4f3:  lea    -0x14c(%ebp),%eax
080ef89b +0x4f9:  lea    -0x144(%ebp),%edx
080ef8a1 +0x4ff:  mov    %edx,0x8(%esp)
080ef8a5 +0x503:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,0x4(%esp)
080ef8ad +0x50b:  mov    %eax,(%esp)
080ef8b0 +0x50e:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
080ef8b5 +0x513:  sub    $0x4,%esp
080ef8b8 +0x516:  jmp    080ef9c9 <+0x627>
080ef8bd +0x51b:  lea    -0x1c4(%ebp),%eax
080ef8c3 +0x521:  mov    %eax,(%esp)
080ef8c6 +0x524:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
080ef8cb +0x529:  lea    -0x1c4(%ebp),%eax
080ef8d1 +0x52f:  mov    %eax,(%esp)
080ef8d4 +0x532:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
080ef8d9 +0x537:  xor    $0x1,%eax
080ef8dc +0x53a:  test   %al,%al
080ef8de +0x53c:  je     080ef8ef <+0x54d>
080ef8e0 +0x53e:  mov    $0x0,%ebx
080ef8e5 +0x543:  mov    $0x0,%esi
080ef8ea +0x548:  jmp    080ef9ae <+0x60c>
080ef8ef +0x54d:  lea    -0x1c4(%ebp),%eax
080ef8f5 +0x553:  mov    %eax,0x4(%esp)
080ef8f9 +0x557:  mov    0x8(%ebp),%eax
080ef8fc +0x55a:  mov    %eax,(%esp)
080ef8ff +0x55d:  call   080ef0c0 <_ZN11eventReward13getSubKeyTypeERSs>  ; eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
080ef904 +0x562:  mov    %al,-0x1a6(%ebp)
080ef90a +0x568:  lea    -0x1c8(%ebp),%eax
080ef910 +0x56e:  mov    %eax,(%esp)
080ef913 +0x571:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
080ef918 +0x576:  lea    -0x1c8(%ebp),%eax
080ef91e +0x57c:  mov    %eax,(%esp)
080ef921 +0x57f:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
080ef926 +0x584:  xor    $0x1,%eax
080ef929 +0x587:  test   %al,%al
080ef92b +0x589:  je     080ef939 <+0x597>
080ef92d +0x58b:  mov    $0x0,%ebx
080ef932 +0x590:  mov    $0x0,%esi
080ef937 +0x595:  jmp    080ef973 <+0x5d1>
080ef939 +0x597:  lea    -0x1c8(%ebp),%eax
080ef93f +0x59d:  mov    %eax,0x4(%esp)
080ef943 +0x5a1:  mov    0x8(%ebp),%eax
080ef946 +0x5a4:  mov    %eax,(%esp)
080ef949 +0x5a7:  call   080ef128 <_ZN11eventReward15getSubKeyActionERSs>  ; eventReward::getSubKeyAction(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
080ef94e +0x5ac:  mov    %al,-0x1a5(%ebp)
080ef954 +0x5b2:  mov    $0x1,%esi
080ef959 +0x5b7:  jmp    080ef973 <+0x5d1>
080ef95b +0x5b9:  mov    %edx,%ebx
080ef95d +0x5bb:  mov    %eax,%esi
080ef95f +0x5bd:  lea    -0x1c8(%ebp),%eax
080ef965 +0x5c3:  mov    %eax,(%esp)
080ef968 +0x5c6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080ef96d +0x5cb:  mov    %esi,%eax
080ef96f +0x5cd:  mov    %ebx,%edx
080ef971 +0x5cf:  jmp    080ef993 <+0x5f1>
080ef973 +0x5d1:  lea    -0x1c8(%ebp),%eax
080ef979 +0x5d7:  mov    %eax,(%esp)
080ef97c +0x5da:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080ef981 +0x5df:  test   %esi,%esi
080ef983 +0x5e1:  jne    080ef98c <+0x5ea>
080ef985 +0x5e3:  mov    $0x0,%esi
080ef98a +0x5e8:  jmp    080ef9ae <+0x60c>
080ef98c +0x5ea:  mov    $0x1,%esi
080ef991 +0x5ef:  jmp    080ef9ae <+0x60c>
080ef993 +0x5f1:  mov    %edx,%ebx
080ef995 +0x5f3:  mov    %eax,%esi
080ef997 +0x5f5:  lea    -0x1c4(%ebp),%eax
080ef99d +0x5fb:  mov    %eax,(%esp)
080ef9a0 +0x5fe:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080ef9a5 +0x603:  mov    %esi,%eax
080ef9a7 +0x605:  mov    %ebx,%edx
080ef9a9 +0x607:  jmp    080f020e <+0xe6c>
080ef9ae +0x60c:  lea    -0x1c4(%ebp),%eax
080ef9b4 +0x612:  mov    %eax,(%esp)
080ef9b7 +0x615:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080ef9bc +0x61a:  test   %esi,%esi
080ef9be +0x61c:  je     080f0226 <+0xe84>
080ef9c4 +0x622:  jmp    080f01d5 <+0xe33>
080ef9c9 +0x627:  movzbl &_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited,%eax
080ef9d0 +0x62e:  xor    $0x1,%eax
080ef9d3 +0x631:  test   %al,%al
080ef9d5 +0x633:  je     080efa26 <+0x684>
080ef9d7 +0x635:  movl   $0xaf,-0x128(%ebp)
080ef9e1 +0x63f:  lea    -0x128(%ebp),%eax
080ef9e7 +0x645:  mov    %eax,0x8(%esp)
080ef9eb +0x649:  movl   $"[option]",0x4(%esp)
080ef9f3 +0x651:  lea    -0x130(%ebp),%eax
080ef9f9 +0x657:  mov    %eax,(%esp)
080ef9fc +0x65a:  call   080f165a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x6dc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x6dc
080efa01 +0x65f:  lea    -0x138(%ebp),%eax
080efa07 +0x665:  lea    -0x130(%ebp),%edx
080efa0d +0x66b:  mov    %edx,0x8(%esp)
080efa11 +0x66f:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,0x4(%esp)
080efa19 +0x677:  mov    %eax,(%esp)
080efa1c +0x67a:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
080efa21 +0x67f:  sub    $0x4,%esp
080efa24 +0x682:  jmp    080efa98 <+0x6f6>
080efa26 +0x684:  lea    -0x1cc(%ebp),%eax
080efa2c +0x68a:  mov    %eax,(%esp)
080efa2f +0x68d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
080efa34 +0x692:  lea    -0x1cc(%ebp),%eax
080efa3a +0x698:  mov    %eax,(%esp)
080efa3d +0x69b:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
080efa42 +0x6a0:  xor    $0x1,%eax
080efa45 +0x6a3:  test   %al,%al
080efa47 +0x6a5:  jne    080efa85 <+0x6e3>
080efa49 +0x6a7:  lea    -0x1b8(%ebp),%eax
080efa4f +0x6ad:  mov    %eax,0x8(%esp)
080efa53 +0x6b1:  lea    -0x1cc(%ebp),%eax
080efa59 +0x6b7:  mov    %eax,0x4(%esp)
080efa5d +0x6bb:  mov    0x8(%ebp),%eax
080efa60 +0x6be:  mov    %eax,(%esp)
080efa63 +0x6c1:  call   080ef190 <_ZN11eventReward13getOptionTypeERSsR8itemData>  ; eventReward::getOptionType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, itemData&)
080efa68 +0x6c6:  jmp    080efa85 <+0x6e3>
080efa6a +0x6c8:  mov    %edx,%ebx
080efa6c +0x6ca:  mov    %eax,%esi
080efa6e +0x6cc:  lea    -0x1cc(%ebp),%eax
080efa74 +0x6d2:  mov    %eax,(%esp)
080efa77 +0x6d5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080efa7c +0x6da:  mov    %esi,%eax
080efa7e +0x6dc:  mov    %ebx,%edx
080efa80 +0x6de:  jmp    080f020e <+0xe6c>
080efa85 +0x6e3:  lea    -0x1cc(%ebp),%eax
080efa8b +0x6e9:  mov    %eax,(%esp)
080efa8e +0x6ec:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080efa93 +0x6f1:  jmp    080f01d5 <+0xe33>
080efa98 +0x6f6:  movzbl &_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited,%eax
080efa9f +0x6fd:  xor    $0x1,%eax
080efaa2 +0x700:  test   %al,%al
080efaa4 +0x702:  je     080efaf8 <+0x756>
080efaa6 +0x704:  movl   $0xb9,-0x114(%ebp)
080efab0 +0x70e:  lea    -0x114(%ebp),%eax
080efab6 +0x714:  mov    %eax,0x8(%esp)
080efaba +0x718:  movl   $"[equipment item]",0x4(%esp)
080efac2 +0x720:  lea    -0x11c(%ebp),%eax
080efac8 +0x726:  mov    %eax,(%esp)
080efacb +0x729:  call   080f1688 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x70a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x70a
080efad0 +0x72e:  lea    -0x124(%ebp),%eax
080efad6 +0x734:  lea    -0x11c(%ebp),%edx
080efadc +0x73a:  mov    %edx,0x8(%esp)
080efae0 +0x73e:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,0x4(%esp)
080efae8 +0x746:  mov    %eax,(%esp)
080efaeb +0x749:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
080efaf0 +0x74e:  sub    $0x4,%esp
080efaf3 +0x751:  jmp    080efd26 <+0x984>
080efaf8 +0x756:  movzbl -0x1a5(%ebp),%eax
080efaff +0x75d:  movsbl %al,%eax
080efb02 +0x760:  lea    -0x1b8(%ebp),%edx
080efb08 +0x766:  mov    %edx,0x8(%esp)
080efb0c +0x76a:  mov    %eax,0x4(%esp)
080efb10 +0x76e:  mov    0x8(%ebp),%eax
080efb13 +0x771:  mov    %eax,(%esp)
080efb16 +0x774:  call   080ef25c <_ZN11eventReward13defaultOptionEcR8itemData>  ; eventReward::defaultOption(char, itemData&)
080efb1b +0x779:  movl   $0x0,-0x1d0(%ebp)
080efb25 +0x783:  mov    -0x1b8(%ebp),%eax
080efb2b +0x789:  mov    %eax,-0x1dc(%ebp)
080efb31 +0x78f:  mov    -0x1b4(%ebp),%eax
080efb37 +0x795:  mov    %eax,-0x1d8(%ebp)
080efb3d +0x79b:  mov    -0x1b0(%ebp),%eax
080efb43 +0x7a1:  mov    %eax,-0x1d4(%ebp)
080efb49 +0x7a7:  lea    -0x189(%ebp),%eax
080efb4f +0x7ad:  mov    %eax,(%esp)
080efb52 +0x7b0:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
080efb57 +0x7b5:  mov    %eax,-0x1d0(%ebp)
080efb5d +0x7bb:  movzbl -0x189(%ebp),%eax
080efb64 +0x7c2:  xor    $0x1,%eax
080efb67 +0x7c5:  test   %al,%al
080efb69 +0x7c7:  je     080efb70 <+0x7ce>
080efb6b +0x7c9:  jmp    080efd21 <+0x97f>
080efb70 +0x7ce:  lea    -0x189(%ebp),%eax
080efb76 +0x7d4:  mov    %eax,(%esp)
080efb79 +0x7d7:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
080efb7e +0x7dc:  mov    %eax,-0x1d8(%ebp)
080efb84 +0x7e2:  movzbl -0x189(%ebp),%eax
080efb8b +0x7e9:  xor    $0x1,%eax
080efb8e +0x7ec:  test   %al,%al
080efb90 +0x7ee:  je     080efb97 <+0x7f5>
080efb92 +0x7f0:  jmp    080efd21 <+0x97f>
080efb97 +0x7f5:  lea    -0x1e0(%ebp),%eax
080efb9d +0x7fb:  lea    -0x1d0(%ebp),%edx
080efba3 +0x801:  mov    %edx,0x8(%esp)
080efba7 +0x805:  lea    -0x1a4(%ebp),%edx
080efbad +0x80b:  mov    %edx,0x4(%esp)
080efbb1 +0x80f:  mov    %eax,(%esp)
080efbb4 +0x812:  call   080f16b6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x738>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x738
080efbb9 +0x817:  sub    $0x4,%esp
080efbbc +0x81a:  lea    -0x110(%ebp),%eax
080efbc2 +0x820:  lea    -0x1a4(%ebp),%edx
080efbc8 +0x826:  mov    %edx,0x4(%esp)
080efbcc +0x82a:  mov    %eax,(%esp)
080efbcf +0x82d:  call   080f16e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x764>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x764
080efbd4 +0x832:  sub    $0x4,%esp
080efbd7 +0x835:  lea    -0x110(%ebp),%eax
080efbdd +0x83b:  mov    %eax,0x4(%esp)
080efbe1 +0x83f:  lea    -0x1e0(%ebp),%eax
080efbe7 +0x845:  mov    %eax,(%esp)
080efbea +0x848:  call   080f1708 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x78a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x78a
080efbef +0x84d:  test   %al,%al
080efbf1 +0x84f:  je     080efc1b <+0x879>
080efbf3 +0x851:  lea    -0x1e0(%ebp),%eax
080efbf9 +0x857:  mov    %eax,(%esp)
080efbfc +0x85a:  call   080f171c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x79e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x79e
080efc01 +0x85f:  lea    0x4(%eax),%edx
080efc04 +0x862:  lea    -0x1dc(%ebp),%eax
080efc0a +0x868:  mov    %eax,0x4(%esp)
080efc0e +0x86c:  mov    %edx,(%esp)
080efc11 +0x86f:  call   080f172a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7ac>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7ac
080efc16 +0x874:  jmp    080efb1b <+0x779>
080efc1b +0x879:  lea    -0x1ec(%ebp),%eax
080efc21 +0x87f:  mov    %eax,(%esp)
080efc24 +0x882:  call   080f179e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x820>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x820
080efc29 +0x887:  lea    -0x1dc(%ebp),%eax
080efc2f +0x88d:  mov    %eax,0x4(%esp)
080efc33 +0x891:  lea    -0x1ec(%ebp),%eax
080efc39 +0x897:  mov    %eax,(%esp)
080efc3c +0x89a:  call   080f172a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7ac>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7ac
080efc41 +0x89f:  lea    -0xf4(%ebp),%eax
080efc47 +0x8a5:  lea    -0x1ec(%ebp),%edx
080efc4d +0x8ab:  mov    %edx,0x8(%esp)
080efc51 +0x8af:  lea    -0x1d0(%ebp),%edx
080efc57 +0x8b5:  mov    %edx,0x4(%esp)
080efc5b +0x8b9:  mov    %eax,(%esp)
080efc5e +0x8bc:  call   080f180f <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x891>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x891
080efc63 +0x8c1:  sub    $0x4,%esp
080efc66 +0x8c4:  lea    -0xf4(%ebp),%eax
080efc6c +0x8ca:  mov    %eax,0x4(%esp)
080efc70 +0x8ce:  lea    -0x104(%ebp),%eax
080efc76 +0x8d4:  mov    %eax,(%esp)
080efc79 +0x8d7:  call   080f1854 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x8d6>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x8d6
080efc7e +0x8dc:  lea    -0x10c(%ebp),%eax
080efc84 +0x8e2:  lea    -0x104(%ebp),%edx
080efc8a +0x8e8:  mov    %edx,0x8(%esp)
080efc8e +0x8ec:  lea    -0x1a4(%ebp),%edx
080efc94 +0x8f2:  mov    %edx,0x4(%esp)
080efc98 +0x8f6:  mov    %eax,(%esp)
080efc9b +0x8f9:  call   080f188e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x910>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x910
080efca0 +0x8fe:  sub    $0x4,%esp
080efca3 +0x901:  lea    -0x104(%ebp),%eax
080efca9 +0x907:  mov    %eax,(%esp)
080efcac +0x90a:  call   080f13a4 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x426>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x426
080efcb1 +0x90f:  jmp    080efce3 <+0x941>
080efcb3 +0x911:  mov    %edx,%ebx
080efcb5 +0x913:  mov    %eax,%esi
080efcb7 +0x915:  lea    -0x104(%ebp),%eax
080efcbd +0x91b:  mov    %eax,(%esp)
080efcc0 +0x91e:  call   080f13a4 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x426>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x426
080efcc5 +0x923:  mov    %esi,%eax
080efcc7 +0x925:  mov    %ebx,%edx
080efcc9 +0x927:  jmp    080efccb <+0x929>
080efccb +0x929:  mov    %edx,%ebx
080efccd +0x92b:  mov    %eax,%esi
080efccf +0x92d:  lea    -0xf4(%ebp),%eax
080efcd5 +0x933:  mov    %eax,(%esp)
080efcd8 +0x936:  call   080f138e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x410>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x410
080efcdd +0x93b:  mov    %esi,%eax
080efcdf +0x93d:  mov    %ebx,%edx
080efce1 +0x93f:  jmp    080efcf3 <+0x951>
080efce3 +0x941:  lea    -0xf4(%ebp),%eax
080efce9 +0x947:  mov    %eax,(%esp)
080efcec +0x94a:  call   080f138e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x410>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x410
080efcf1 +0x94f:  jmp    080efd0e <+0x96c>
080efcf3 +0x951:  mov    %edx,%ebx
080efcf5 +0x953:  mov    %eax,%esi
080efcf7 +0x955:  lea    -0x1ec(%ebp),%eax
080efcfd +0x95b:  mov    %eax,(%esp)
080efd00 +0x95e:  call   080f17b2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x834>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x834
080efd05 +0x963:  mov    %esi,%eax
080efd07 +0x965:  mov    %ebx,%edx
080efd09 +0x967:  jmp    080f020e <+0xe6c>
080efd0e +0x96c:  lea    -0x1ec(%ebp),%eax
080efd14 +0x972:  mov    %eax,(%esp)
080efd17 +0x975:  call   080f17b2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x834>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x834
080efd1c +0x97a:  jmp    080efb1b <+0x779>
080efd21 +0x97f:  jmp    080f01d5 <+0xe33>
080efd26 +0x984:  movzbl &_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited,%eax
080efd2d +0x98b:  xor    $0x1,%eax
080efd30 +0x98e:  test   %al,%al
080efd32 +0x990:  je     080efd86 <+0x9e4>
080efd34 +0x992:  movl   $0xd8,-0xd4(%ebp)
080efd3e +0x99c:  lea    -0xd4(%ebp),%eax
080efd44 +0x9a2:  mov    %eax,0x8(%esp)
080efd48 +0x9a6:  movl   $"[stackable item]",0x4(%esp)
080efd50 +0x9ae:  lea    -0xdc(%ebp),%eax
080efd56 +0x9b4:  mov    %eax,(%esp)
080efd59 +0x9b7:  call   080f1688 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x70a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x70a
080efd5e +0x9bc:  lea    -0xe4(%ebp),%eax
080efd64 +0x9c2:  lea    -0xdc(%ebp),%edx
080efd6a +0x9c8:  mov    %edx,0x8(%esp)
080efd6e +0x9cc:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,0x4(%esp)
080efd76 +0x9d4:  mov    %eax,(%esp)
080efd79 +0x9d7:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
080efd7e +0x9dc:  sub    $0x4,%esp
080efd81 +0x9df:  jmp    080effe5 <+0xc43>
080efd86 +0x9e4:  movzbl -0x1a5(%ebp),%eax
080efd8d +0x9eb:  movsbl %al,%eax
080efd90 +0x9ee:  lea    -0x1b8(%ebp),%edx
080efd96 +0x9f4:  mov    %edx,0x8(%esp)
080efd9a +0x9f8:  mov    %eax,0x4(%esp)
080efd9e +0x9fc:  mov    0x8(%ebp),%eax
080efda1 +0x9ff:  mov    %eax,(%esp)
080efda4 +0xa02:  call   080ef25c <_ZN11eventReward13defaultOptionEcR8itemData>  ; eventReward::defaultOption(char, itemData&)
080efda9 +0xa07:  movl   $0x0,-0x1f0(%ebp)
080efdb3 +0xa11:  movl   $0x1,-0x1b0(%ebp)
080efdbd +0xa1b:  mov    -0x1b8(%ebp),%eax
080efdc3 +0xa21:  mov    %eax,-0x1fc(%ebp)
080efdc9 +0xa27:  mov    -0x1b4(%ebp),%eax
080efdcf +0xa2d:  mov    %eax,-0x1f8(%ebp)
080efdd5 +0xa33:  mov    -0x1b0(%ebp),%eax
080efddb +0xa39:  mov    %eax,-0x1f4(%ebp)
080efde1 +0xa3f:  lea    -0x189(%ebp),%eax
080efde7 +0xa45:  mov    %eax,(%esp)
080efdea +0xa48:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
080efdef +0xa4d:  mov    %eax,-0x1f0(%ebp)
080efdf5 +0xa53:  movzbl -0x189(%ebp),%eax
080efdfc +0xa5a:  xor    $0x1,%eax
080efdff +0xa5d:  test   %al,%al
080efe01 +0xa5f:  je     080efe08 <+0xa66>
080efe03 +0xa61:  jmp    080effe0 <+0xc3e>
080efe08 +0xa66:  lea    -0x189(%ebp),%eax
080efe0e +0xa6c:  mov    %eax,(%esp)
080efe11 +0xa6f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
080efe16 +0xa74:  mov    %eax,-0x1f8(%ebp)
080efe1c +0xa7a:  movzbl -0x189(%ebp),%eax
080efe23 +0xa81:  xor    $0x1,%eax
080efe26 +0xa84:  test   %al,%al
080efe28 +0xa86:  je     080efe2f <+0xa8d>
080efe2a +0xa88:  jmp    080effe0 <+0xc3e>
080efe2f +0xa8d:  lea    -0x189(%ebp),%eax
080efe35 +0xa93:  mov    %eax,(%esp)
080efe38 +0xa96:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
080efe3d +0xa9b:  mov    %eax,-0x1f4(%ebp)
080efe43 +0xaa1:  movzbl -0x189(%ebp),%eax
080efe4a +0xaa8:  xor    $0x1,%eax
080efe4d +0xaab:  test   %al,%al
080efe4f +0xaad:  je     080efe56 <+0xab4>
080efe51 +0xaaf:  jmp    080effe0 <+0xc3e>
080efe56 +0xab4:  lea    -0x200(%ebp),%eax
080efe5c +0xaba:  lea    -0x1f0(%ebp),%edx
080efe62 +0xac0:  mov    %edx,0x8(%esp)
080efe66 +0xac4:  lea    -0x1a4(%ebp),%edx
080efe6c +0xaca:  mov    %edx,0x4(%esp)
080efe70 +0xace:  mov    %eax,(%esp)
080efe73 +0xad1:  call   080f16b6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x738>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x738
080efe78 +0xad6:  sub    $0x4,%esp
080efe7b +0xad9:  lea    -0xd0(%ebp),%eax
080efe81 +0xadf:  lea    -0x1a4(%ebp),%edx
080efe87 +0xae5:  mov    %edx,0x4(%esp)
080efe8b +0xae9:  mov    %eax,(%esp)
080efe8e +0xaec:  call   080f16e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x764>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x764
080efe93 +0xaf1:  sub    $0x4,%esp
080efe96 +0xaf4:  lea    -0xd0(%ebp),%eax
080efe9c +0xafa:  mov    %eax,0x4(%esp)
080efea0 +0xafe:  lea    -0x200(%ebp),%eax
080efea6 +0xb04:  mov    %eax,(%esp)
080efea9 +0xb07:  call   080f1708 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x78a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x78a
080efeae +0xb0c:  test   %al,%al
080efeb0 +0xb0e:  je     080efeda <+0xb38>
080efeb2 +0xb10:  lea    -0x200(%ebp),%eax
080efeb8 +0xb16:  mov    %eax,(%esp)
080efebb +0xb19:  call   080f171c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x79e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x79e
080efec0 +0xb1e:  lea    0x4(%eax),%edx
080efec3 +0xb21:  lea    -0x1fc(%ebp),%eax
080efec9 +0xb27:  mov    %eax,0x4(%esp)
080efecd +0xb2b:  mov    %edx,(%esp)
080efed0 +0xb2e:  call   080f172a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7ac>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7ac
080efed5 +0xb33:  jmp    080efda9 <+0xa07>
080efeda +0xb38:  lea    -0x20c(%ebp),%eax
080efee0 +0xb3e:  mov    %eax,(%esp)
080efee3 +0xb41:  call   080f179e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x820>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x820
080efee8 +0xb46:  lea    -0x1fc(%ebp),%eax
080efeee +0xb4c:  mov    %eax,0x4(%esp)
080efef2 +0xb50:  lea    -0x20c(%ebp),%eax
080efef8 +0xb56:  mov    %eax,(%esp)
080efefb +0xb59:  call   080f172a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7ac>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7ac
080eff00 +0xb5e:  lea    -0xb4(%ebp),%eax
080eff06 +0xb64:  lea    -0x20c(%ebp),%edx
080eff0c +0xb6a:  mov    %edx,0x8(%esp)
080eff10 +0xb6e:  lea    -0x1f0(%ebp),%edx
080eff16 +0xb74:  mov    %edx,0x4(%esp)
080eff1a +0xb78:  mov    %eax,(%esp)
080eff1d +0xb7b:  call   080f180f <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x891>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x891
080eff22 +0xb80:  sub    $0x4,%esp
080eff25 +0xb83:  lea    -0xb4(%ebp),%eax
080eff2b +0xb89:  mov    %eax,0x4(%esp)
080eff2f +0xb8d:  lea    -0xc4(%ebp),%eax
080eff35 +0xb93:  mov    %eax,(%esp)
080eff38 +0xb96:  call   080f1854 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x8d6>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x8d6
080eff3d +0xb9b:  lea    -0xcc(%ebp),%eax
080eff43 +0xba1:  lea    -0xc4(%ebp),%edx
080eff49 +0xba7:  mov    %edx,0x8(%esp)
080eff4d +0xbab:  lea    -0x1a4(%ebp),%edx
080eff53 +0xbb1:  mov    %edx,0x4(%esp)
080eff57 +0xbb5:  mov    %eax,(%esp)
080eff5a +0xbb8:  call   080f188e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x910>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x910
080eff5f +0xbbd:  sub    $0x4,%esp
080eff62 +0xbc0:  lea    -0xc4(%ebp),%eax
080eff68 +0xbc6:  mov    %eax,(%esp)
080eff6b +0xbc9:  call   080f13a4 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x426>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x426
080eff70 +0xbce:  jmp    080effa2 <+0xc00>
080eff72 +0xbd0:  mov    %edx,%ebx
080eff74 +0xbd2:  mov    %eax,%esi
080eff76 +0xbd4:  lea    -0xc4(%ebp),%eax
080eff7c +0xbda:  mov    %eax,(%esp)
080eff7f +0xbdd:  call   080f13a4 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x426>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x426
080eff84 +0xbe2:  mov    %esi,%eax
080eff86 +0xbe4:  mov    %ebx,%edx
080eff88 +0xbe6:  jmp    080eff8a <+0xbe8>
080eff8a +0xbe8:  mov    %edx,%ebx
080eff8c +0xbea:  mov    %eax,%esi
080eff8e +0xbec:  lea    -0xb4(%ebp),%eax
080eff94 +0xbf2:  mov    %eax,(%esp)
080eff97 +0xbf5:  call   080f138e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x410>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x410
080eff9c +0xbfa:  mov    %esi,%eax
080eff9e +0xbfc:  mov    %ebx,%edx
080effa0 +0xbfe:  jmp    080effb2 <+0xc10>
080effa2 +0xc00:  lea    -0xb4(%ebp),%eax
080effa8 +0xc06:  mov    %eax,(%esp)
080effab +0xc09:  call   080f138e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x410>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x410
080effb0 +0xc0e:  jmp    080effcd <+0xc2b>
080effb2 +0xc10:  mov    %edx,%ebx
080effb4 +0xc12:  mov    %eax,%esi
080effb6 +0xc14:  lea    -0x20c(%ebp),%eax
080effbc +0xc1a:  mov    %eax,(%esp)
080effbf +0xc1d:  call   080f17b2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x834>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x834
080effc4 +0xc22:  mov    %esi,%eax
080effc6 +0xc24:  mov    %ebx,%edx
080effc8 +0xc26:  jmp    080f020e <+0xe6c>
080effcd +0xc2b:  lea    -0x20c(%ebp),%eax
080effd3 +0xc31:  mov    %eax,(%esp)
080effd6 +0xc34:  call   080f17b2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x834>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x834
080effdb +0xc39:  jmp    080efda9 <+0xa07>
080effe0 +0xc3e:  jmp    080f01d5 <+0xe33>
080effe5 +0xc43:  movzbl &_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited,%eax
080effec +0xc4a:  xor    $0x1,%eax
080effef +0xc4d:  test   %al,%al
080efff1 +0xc4f:  je     080f0045 <+0xca3>
080efff3 +0xc51:  movl   $0xfc,-0x94(%ebp)
080efffd +0xc5b:  lea    -0x94(%ebp),%eax
080f0003 +0xc61:  mov    %eax,0x8(%esp)
080f0007 +0xc65:  movl   $"[/sub type]",0x4(%esp)
080f000f +0xc6d:  lea    -0x9c(%ebp),%eax
080f0015 +0xc73:  mov    %eax,(%esp)
080f0018 +0xc76:  call   080f18ba <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x93c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x93c
080f001d +0xc7b:  lea    -0xa4(%ebp),%eax
080f0023 +0xc81:  lea    -0x9c(%ebp),%edx
080f0029 +0xc87:  mov    %edx,0x8(%esp)
080f002d +0xc8b:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,0x4(%esp)
080f0035 +0xc93:  mov    %eax,(%esp)
080f0038 +0xc96:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
080f003d +0xc9b:  sub    $0x4,%esp
080f0040 +0xc9e:  jmp    080f010d <+0xd6b>
080f0045 +0xca3:  lea    -0x68(%ebp),%eax
080f0048 +0xca6:  lea    -0x1a4(%ebp),%edx
080f004e +0xcac:  mov    %edx,0x8(%esp)
080f0052 +0xcb0:  lea    -0x1a9(%ebp),%edx
080f0058 +0xcb6:  mov    %edx,0x4(%esp)
080f005c +0xcba:  mov    %eax,(%esp)
080f005f +0xcbd:  call   080f18e7 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x969>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x969
080f0064 +0xcc2:  sub    $0x4,%esp
080f0067 +0xcc5:  lea    -0x68(%ebp),%eax
080f006a +0xcc8:  mov    %eax,0x4(%esp)
080f006e +0xccc:  lea    -0x88(%ebp),%eax
080f0074 +0xcd2:  mov    %eax,(%esp)
080f0077 +0xcd5:  call   080f192c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x9ae>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x9ae
080f007c +0xcda:  mov    0x8(%ebp),%edx
080f007f +0xcdd:  lea    -0x90(%ebp),%eax
080f0085 +0xce3:  lea    -0x88(%ebp),%ecx
080f008b +0xce9:  mov    %ecx,0x8(%esp)
080f008f +0xced:  mov    %edx,0x4(%esp)
080f0093 +0xcf1:  mov    %eax,(%esp)
080f0096 +0xcf4:  call   080f1972 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x9f4>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x9f4
080f009b +0xcf9:  sub    $0x4,%esp
080f009e +0xcfc:  lea    -0x88(%ebp),%eax
080f00a4 +0xd02:  mov    %eax,(%esp)
080f00a7 +0xd05:  call   080f13d0 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x452>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x452
080f00ac +0xd0a:  jmp    080f00de <+0xd3c>
080f00ae +0xd0c:  mov    %edx,%ebx
080f00b0 +0xd0e:  mov    %eax,%esi
080f00b2 +0xd10:  lea    -0x88(%ebp),%eax
080f00b8 +0xd16:  mov    %eax,(%esp)
080f00bb +0xd19:  call   080f13d0 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x452>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x452
080f00c0 +0xd1e:  mov    %esi,%eax
080f00c2 +0xd20:  mov    %ebx,%edx
080f00c4 +0xd22:  jmp    080f00c6 <+0xd24>
080f00c6 +0xd24:  mov    %edx,%ebx
080f00c8 +0xd26:  mov    %eax,%esi
080f00ca +0xd28:  lea    -0x68(%ebp),%eax
080f00cd +0xd2b:  mov    %eax,(%esp)
080f00d0 +0xd2e:  call   080f13ba <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x43c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x43c
080f00d5 +0xd33:  mov    %esi,%eax
080f00d7 +0xd35:  mov    %ebx,%edx
080f00d9 +0xd37:  jmp    080f020e <+0xe6c>
080f00de +0xd3c:  lea    -0x68(%ebp),%eax
080f00e1 +0xd3f:  mov    %eax,(%esp)
080f00e4 +0xd42:  call   080f13ba <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x43c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x43c
080f00e9 +0xd47:  lea    -0x1a9(%ebp),%eax
080f00ef +0xd4d:  add    $0x3,%eax
080f00f2 +0xd50:  mov    %eax,(%esp)
080f00f5 +0xd53:  call   080f11de <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x260>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x260
080f00fa +0xd58:  lea    -0x1a4(%ebp),%eax
080f0100 +0xd5e:  mov    %eax,(%esp)
080f0103 +0xd61:  call   080f199e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa20>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa20
080f0108 +0xd66:  jmp    080f01d5 <+0xe33>
080f010d +0xd6b:  movzbl &_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited,%eax
080f0114 +0xd72:  xor    $0x1,%eax
080f0117 +0xd75:  test   %al,%al
080f0119 +0xd77:  je     080f015b <+0xdb9>
080f011b +0xd79:  movl   $0x102,-0x38(%ebp)
080f0122 +0xd80:  lea    -0x38(%ebp),%eax
080f0125 +0xd83:  mov    %eax,0x8(%esp)
080f0129 +0xd87:  movl   $"[/job type]",0x4(%esp)
080f0131 +0xd8f:  lea    -0x40(%ebp),%eax
080f0134 +0xd92:  mov    %eax,(%esp)
080f0137 +0xd95:  call   080f18ba <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x93c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x93c
080f013c +0xd9a:  lea    -0x48(%ebp),%eax
080f013f +0xd9d:  lea    -0x40(%ebp),%edx
080f0142 +0xda0:  mov    %edx,0x8(%esp)
080f0146 +0xda4:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,0x4(%esp)
080f014e +0xdac:  mov    %eax,(%esp)
080f0151 +0xdaf:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
080f0156 +0xdb4:  sub    $0x4,%esp
080f0159 +0xdb7:  jmp    080f0179 <+0xdd7>
080f015b +0xdb9:  lea    -0x1a9(%ebp),%eax
080f0161 +0xdbf:  mov    %eax,(%esp)
080f0164 +0xdc2:  call   080f12ac <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x32e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x32e
080f0169 +0xdc7:  lea    -0x1a4(%ebp),%eax
080f016f +0xdcd:  mov    %eax,(%esp)
080f0172 +0xdd0:  call   080f199e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa20>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa20
080f0177 +0xdd5:  jmp    080f01d5 <+0xe33>
080f0179 +0xdd7:  movzbl &_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited,%eax
080f0180 +0xdde:  xor    $0x1,%eax
080f0183 +0xde1:  test   %al,%al
080f0185 +0xde3:  je     080f01c7 <+0xe25>
080f0187 +0xde5:  movl   $0x107,-0x24(%ebp)
080f018e +0xdec:  lea    -0x24(%ebp),%eax
080f0191 +0xdef:  mov    %eax,0x8(%esp)
080f0195 +0xdf3:  movl   $"[/option]",0x4(%esp)
080f019d +0xdfb:  lea    -0x2c(%ebp),%eax
080f01a0 +0xdfe:  mov    %eax,(%esp)
080f01a3 +0xe01:  call   080f15d2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x654>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x654
080f01a8 +0xe06:  lea    -0x34(%ebp),%eax
080f01ab +0xe09:  lea    -0x2c(%ebp),%edx
080f01ae +0xe0c:  mov    %edx,0x8(%esp)
080f01b2 +0xe10:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__lookup,0x4(%esp)
080f01ba +0xe18:  mov    %eax,(%esp)
080f01bd +0xe1b:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
080f01c2 +0xe20:  sub    $0x4,%esp
080f01c5 +0xe23:  jmp    080f01d5 <+0xe33>
080f01c7 +0xe25:  lea    -0x1b8(%ebp),%eax
080f01cd +0xe2b:  mov    %eax,(%esp)
080f01d0 +0xe2e:  call   080f1162 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x1e4>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1e4
080f01d5 +0xe33:  movzbl &_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited,%eax
080f01dc +0xe3a:  xor    $0x1,%eax
080f01df +0xe3d:  test   %al,%al
080f01e1 +0xe3f:  je     080f01fb <+0xe59>
080f01e3 +0xe41:  movl   $&_ZZN11eventReward18ImportRewardScriptEPKcS1_E11__init_lock,(%esp)
080f01ea +0xe48:  call   08ad3586 <_ZN8SpinLock5leaveEv>  ; SpinLock::leave()
080f01ef +0xe4d:  movb   $0x1,&_ZZN11eventReward18ImportRewardScriptEPKcS1_E8__inited
080f01f6 +0xe54:  jmp    080ef438 <+0x96>
080f01fb +0xe59:  nop
080f01fc +0xe5a:  jmp    080ef417 <+0x75>
080f0201 +0xe5f:  nop
080f0202 +0xe60:  movzbl -0x189(%ebp),%eax
080f0209 +0xe67:  movzbl %al,%ebx
080f020c +0xe6a:  jmp    080f0226 <+0xe84>
080f020e +0xe6c:  mov    %edx,%ebx
080f0210 +0xe6e:  mov    %eax,%esi
080f0212 +0xe70:  lea    -0x1a4(%ebp),%eax
080f0218 +0xe76:  mov    %eax,(%esp)
080f021b +0xe79:  call   080f1366 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3e8>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e8
080f0220 +0xe7e:  mov    %esi,%eax
080f0222 +0xe80:  mov    %ebx,%edx
080f0224 +0xe82:  jmp    080f0236 <+0xe94>
080f0226 +0xe84:  lea    -0x1a4(%ebp),%eax
080f022c +0xe8a:  mov    %eax,(%esp)
080f022f +0xe8d:  call   080f1366 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3e8>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e8
080f0234 +0xe92:  jmp    080f0254 <+0xeb2>
080f0236 +0xe94:  mov    %edx,%ebx
080f0238 +0xe96:  mov    %eax,%esi
080f023a +0xe98:  lea    -0x188(%ebp),%eax
080f0240 +0xe9e:  mov    %eax,(%esp)
080f0243 +0xea1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080f0248 +0xea6:  mov    %esi,%eax
080f024a +0xea8:  mov    %ebx,%edx
080f024c +0xeaa:  mov    %eax,(%esp)
080f024f +0xead:  call   08ae3750 <_Unwind_Resume>
080f0254 +0xeb2:  lea    -0x188(%ebp),%eax
080f025a +0xeb8:  mov    %eax,(%esp)
080f025d +0xebb:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080f0262 +0xec0:  mov    %ebx,%eax
080f0264 +0xec2:  lea    -0xc(%ebp),%esp
080f0267 +0xec5:  add    $0x0,%esp
080f026a +0xec8:  pop    %ebx
080f026b +0xec9:  pop    %esi
080f026c +0xeca:  pop    %edi
080f026d +0xecb:  pop    %ebp
080f026e +0xecc:  ret
080f026f +0xecd:  nop
```

## 反编译 C

```c
// eventReward::ImportRewardScript @ 0x80ef3a2

/* eventReward::ImportRewardScript(char const*, char const*) */

uint __thiscall eventReward::ImportRewardScript(eventReward *this,char *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint unaff_EBX;
  undefined1 *puVar4;
  vector<itemData,std::allocator<itemData>> local_210 [12];
  _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
  local_204 [4];
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  vector<itemData,std::allocator<itemData>> local_1f0 [12];
  _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
  local_1e4 [4];
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  string local_1d0 [4];
  string local_1cc [4];
  string local_1c8 [4];
  string local_1c4 [4];
  _Rb_tree_const_iterator<std::pair<char_const*const,int>> local_1c0 [4];
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  rewardKey local_1ad;
  undefined1 local_1ac;
  undefined1 local_1ab;
  rewardSubKey local_1aa;
  char local_1a9;
  map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
  local_1a8 [27];
  bool local_18d;
  string local_18c [4];
  _Rb_tree_iterator local_188 [4];
  undefined4 local_184;
  _Rb_tree_const_iterator<std::pair<char_const*const,int>> local_180 [4];
  map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>> local_17c [4];
  pair local_178 [8];
  pair<char_const*const,int> local_170 [8];
  int local_168;
  pair local_164 [8];
  pair<char_const*const,int> local_15c [8];
  int local_154;
  pair local_150 [8];
  pair<char_const*const,int> local_148 [8];
  int local_140;
  pair local_13c [8];
  pair<char_const*const,int> local_134 [8];
  int local_12c;
  pair local_128 [8];
  pair<char_const*const,int> local_120 [8];
  int local_118;
  map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
  local_114 [4];
  pair local_110 [8];
  pair<int_const,std::vector<itemData,std::allocator<itemData>>> local_108 [16];
  pair<int,std::vector<itemData,std::allocator<itemData>>> local_f8 [16];
  pair local_e8 [8];
  pair<char_const*const,int> local_e0 [8];
  int local_d8;
  map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
  local_d4 [4];
  pair local_d0 [8];
  pair<int_const,std::vector<itemData,std::allocator<itemData>>> local_c8 [16];
  pair<int,std::vector<itemData,std::allocator<itemData>>> local_b8 [16];
  pair local_a8 [8];
  pair<char_const*const,int> local_a0 [8];
  int local_98;
  pair local_94 [8];
  pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>
  local_8c [32];
  rewardKey local_6c [32];
  pair local_4c [8];
  pair<char_const*const,int> local_44 [8];
  int local_3c;
  pair local_38 [8];
  pair<char_const*const,int> local_30 [8];
  int local_28;
  undefined4 local_24;
  int local_20;
  
  cVar2 = loadRDARScriptFile(param_1,param_2);
  if (cVar2 == '\x01') {
    std::string::string(local_18c);
    local_18d = false;
                    /* try { // try from 080ef3ef to 080ef3f3 has its CatchHandler @ 080f0236 */
    std::
    map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
    ::map(local_1a8);
    rewardKey::rewardKey(&local_1ad);
    local_24 = 0;
    itemData::itemData((itemData *)&local_1bc);
    while( true ) {
      puVar4 = (_Rb_tree_const_iterator *)0x1;
                    /* try { // try from 080ef428 to 080ef42c has its CatchHandler @ 080f020e */
      cVar2 = ScanType(local_18c,true);
      if (cVar2 != '\x01') break;
LAB_080ef438:
      while( true ) {
        if ((ImportRewardScript(char_const*,char_const*)::__lookup == '\0') &&
           (iVar3 = __cxa_guard_acquire(&ImportRewardScript(char_const*,char_const*)::__lookup,
                                        puVar4), iVar3 != 0)) {
                    /* try { // try from 080ef465 to 080ef469 has its CatchHandler @ 080ef495 */
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::map
                    ((map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>
                      *)ImportRewardScript(char_const*,char_const*)::__lookup);
          __cxa_guard_release(&ImportRewardScript(char_const*,char_const*)::__lookup);
          puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
          __cxa_atexit(std::
                       map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>
                       ::~map,ImportRewardScript(char_const*,char_const*)::__lookup,&__dso_handle);
        }
        if ((ImportRewardScript(char_const*,char_const*)::__init_lock == '\0') &&
           (iVar3 = __cxa_guard_acquire(&ImportRewardScript(char_const*,char_const*)::__init_lock),
           iVar3 != 0)) {
                    /* try { // try from 080ef4e1 to 080ef4e5 has its CatchHandler @ 080ef511 */
          SpinLock::SpinLock((SpinLock *)&ImportRewardScript(char_const*,char_const*)::__init_lock);
          __cxa_guard_release(&ImportRewardScript(char_const*,char_const*)::__init_lock);
          puVar4 = (undefined1 *)&ImportRewardScript(char_const*,char_const*)::__init_lock;
          __cxa_atexit(SpinLock::~SpinLock,&ImportRewardScript(char_const*,char_const*)::__init_lock
                       ,&__dso_handle);
        }
        if (ImportRewardScript(char_const*,char_const*)::__inited != '\0') break;
        SpinLock::enter((SpinLock *)&ImportRewardScript(char_const*,char_const*)::__init_lock);
        if (ImportRewardScript(char_const*,char_const*)::__inited == '\0') {
          local_20 = 0;
          goto LAB_080ef628;
        }
        SpinLock::leave((SpinLock *)&ImportRewardScript(char_const*,char_const*)::__init_lock);
      }
                    /* try { // try from 080ef548 to 080ef78b has its CatchHandler @ 080f020e */
      local_184 = std::string::c_str(local_18c);
      std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::find
                ((char **)local_188);
      std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::_Rb_tree_const_iterator
                (local_1c0,local_188);
      std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::end
                (local_17c);
      std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::_Rb_tree_const_iterator
                (local_180,(_Rb_tree_iterator *)local_17c);
      puVar4 = local_180;
      cVar2 = std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::operator!=
                        (local_1c0,(_Rb_tree_const_iterator *)puVar4);
      if (cVar2 == '\0') {
        local_20 = -1;
      }
      else {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::operator->(local_1c0)
        ;
        local_20 = *(int *)(iVar3 + 4);
      }
LAB_080ef628:
      if (local_20 == 0xaf) {
LAB_080ef9c9:
        if (ImportRewardScript(char_const*,char_const*)::__inited == '\x01') {
          std::string::string(local_1d0);
                    /* try { // try from 080efa3d to 080efa67 has its CatchHandler @ 080efa6a */
          cVar2 = ScanStr(local_1d0);
          if (cVar2 == '\x01') {
            puVar4 = local_1d0;
            getOptionType(this,(string *)puVar4,(itemData *)&local_1bc);
          }
                    /* try { // try from 080efa8e to 080efc28 has its CatchHandler @ 080f020e */
          std::string::~string(local_1d0);
        }
        else {
          local_12c = 0xaf;
          std::pair<char_const*const,int>::pair<char_const(&)[9],int>
                    (local_134,"[option]",&local_12c);
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
          insert(local_13c);
LAB_080efa98:
          if (ImportRewardScript(char_const*,char_const*)::__inited == '\x01') {
            puVar4 = (undefined1 *)(int)local_1a9;
            defaultOption(this,local_1a9,(itemData *)&local_1bc);
            while( true ) {
              local_1d4 = 0;
              local_1e0 = local_1bc;
              local_1dc = local_1b8;
              local_1d8 = local_1b4;
              local_1d4 = ScanInt(&local_18d);
              if ((local_18d != true) || (local_1dc = ScanInt(&local_18d), local_18d != true))
              break;
              std::
              map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
              ::find((int *)local_1e4);
              std::
              map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
              ::end(local_114);
              cVar2 = std::
                      _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                      ::operator!=(local_1e4,(_Rb_tree_iterator *)local_114);
              if (cVar2 == '\0') {
                std::vector<itemData,std::allocator<itemData>>::vector(local_1f0);
                    /* try { // try from 080efc3c to 080efc62 has its CatchHandler @ 080efcf3 */
                std::vector<itemData,std::allocator<itemData>>::push_back
                          (local_1f0,(itemData *)&local_1e0);
                std::make_pair<int&,std::vector<itemData,std::allocator<itemData>>&>
                          ((int *)local_f8,(vector *)&local_1d4);
                    /* try { // try from 080efc79 to 080efc7d has its CatchHandler @ 080efccb */
                std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>::
                pair<int,std::vector<itemData,std::allocator<itemData>>>(local_108,local_f8);
                puVar4 = local_1a8;
                    /* try { // try from 080efc9b to 080efc9f has its CatchHandler @ 080efcb3 */
                std::
                map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
                ::insert(local_110);
                    /* try { // try from 080efcac to 080efcb0 has its CatchHandler @ 080efccb */
                std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>::~pair
                          (local_108);
                    /* try { // try from 080efcec to 080efcf0 has its CatchHandler @ 080efcf3 */
                std::pair<int,std::vector<itemData,std::allocator<itemData>>>::~pair(local_f8);
                    /* try { // try from 080efd17 to 080efee7 has its CatchHandler @ 080f020e */
                std::vector<itemData,std::allocator<itemData>>::~vector(local_1f0);
              }
              else {
                iVar3 = std::
                        _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                        ::operator->(local_1e4);
                puVar4 = (undefined1 *)&local_1e0;
                std::vector<itemData,std::allocator<itemData>>::push_back
                          ((vector<itemData,std::allocator<itemData>> *)(iVar3 + 4),
                           (itemData *)puVar4);
              }
            }
          }
          else {
            local_118 = 0xb9;
            std::pair<char_const*const,int>::pair<char_const(&)[17],int>
                      (local_120,"[equipment item]",&local_118);
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_128);
LAB_080efd26:
            if (ImportRewardScript(char_const*,char_const*)::__inited != '\x01') {
              local_d8 = 0xd8;
              std::pair<char_const*const,int>::pair<char_const(&)[17],int>
                        (local_e0,"[stackable item]",&local_d8);
              std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
              insert(local_e8);
              goto LAB_080effe5;
            }
            puVar4 = (undefined1 *)(int)local_1a9;
            defaultOption(this,local_1a9,(itemData *)&local_1bc);
            while( true ) {
              local_1f4 = 0;
              local_1b4 = 1;
              local_200 = local_1bc;
              local_1fc = local_1b8;
              local_1f8 = 1;
              local_1f4 = ScanInt(&local_18d);
              if (((local_18d != true) || (local_1fc = ScanInt(&local_18d), local_18d != true)) ||
                 (local_1f8 = ScanInt(&local_18d), local_18d != true)) break;
              std::
              map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
              ::find((int *)local_204);
              std::
              map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
              ::end(local_d4);
              cVar2 = std::
                      _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                      ::operator!=(local_204,(_Rb_tree_iterator *)local_d4);
              if (cVar2 == '\0') {
                std::vector<itemData,std::allocator<itemData>>::vector(local_210);
                    /* try { // try from 080efefb to 080eff21 has its CatchHandler @ 080effb2 */
                std::vector<itemData,std::allocator<itemData>>::push_back
                          (local_210,(itemData *)&local_200);
                std::make_pair<int&,std::vector<itemData,std::allocator<itemData>>&>
                          ((int *)local_b8,(vector *)&local_1f4);
                    /* try { // try from 080eff38 to 080eff3c has its CatchHandler @ 080eff8a */
                std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>::
                pair<int,std::vector<itemData,std::allocator<itemData>>>(local_c8,local_b8);
                puVar4 = local_1a8;
                    /* try { // try from 080eff5a to 080eff5e has its CatchHandler @ 080eff72 */
                std::
                map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
                ::insert(local_d0);
                    /* try { // try from 080eff6b to 080eff6f has its CatchHandler @ 080eff8a */
                std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>::~pair(local_c8)
                ;
                    /* try { // try from 080effab to 080effaf has its CatchHandler @ 080effb2 */
                std::pair<int,std::vector<itemData,std::allocator<itemData>>>::~pair(local_b8);
                    /* try { // try from 080effd6 to 080f0063 has its CatchHandler @ 080f020e */
                std::vector<itemData,std::allocator<itemData>>::~vector(local_210);
              }
              else {
                iVar3 = std::
                        _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                        ::operator->(local_204);
                puVar4 = (undefined1 *)&local_200;
                std::vector<itemData,std::allocator<itemData>>::push_back
                          ((vector<itemData,std::allocator<itemData>> *)(iVar3 + 4),
                           (itemData *)puVar4);
              }
            }
          }
        }
      }
      else if (local_20 < 0xb0) {
        if (local_20 == 0x8f) {
LAB_080ef6b7:
          if (ImportRewardScript(char_const*,char_const*)::__inited == '\x01') {
            unaff_EBX = 1;
            goto LAB_080f0226;
          }
          local_168 = 0x8f;
          std::pair<char_const*const,int>::pair<char_const(&)[10],int>
                    (local_170,"[/reward]",&local_168);
          puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
          insert(local_178);
LAB_080ef71e:
          if (ImportRewardScript(char_const*,char_const*)::__inited == '\x01') {
            std::string::string(local_1c4);
                    /* try { // try from 080ef795 to 080ef7ff has its CatchHandler @ 080ef827 */
            cVar2 = ScanStr(local_1c4);
            if (cVar2 == '\x01') {
              local_1ad = (rewardKey)getCharacterJobToEnumValue(local_1c4);
              local_1ac = ScanInt(&local_18d);
              if (local_18d == true) {
                local_1ab = ScanInt(&local_18d);
                if (local_18d == true) {
                  bVar1 = true;
                }
                else {
                  unaff_EBX = 0;
                  bVar1 = false;
                }
              }
              else {
                unaff_EBX = 0;
                bVar1 = false;
              }
            }
            else {
              unaff_EBX = 0;
              bVar1 = false;
            }
                    /* try { // try from 080ef84b to 080ef8ca has its CatchHandler @ 080f020e */
            std::string::~string(local_1c4);
          }
          else {
            local_154 = 0x93;
            std::pair<char_const*const,int>::pair<char_const(&)[11],int>
                      (local_15c,"[job type]",&local_154);
            puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_164);
LAB_080ef85d:
            if (ImportRewardScript(char_const*,char_const*)::__inited != '\x01') {
              local_140 = 0xa3;
              std::pair<char_const*const,int>::pair<char_const(&)[11],int>
                        (local_148,"[sub type]",&local_140);
              puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
              std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
              insert(local_150);
              goto LAB_080ef9c9;
            }
            std::string::string(local_1c8);
                    /* try { // try from 080ef8d4 to 080ef917 has its CatchHandler @ 080ef993 */
            cVar2 = ScanStr(local_1c8);
            if (cVar2 == '\x01') {
              puVar4 = local_1c8;
              local_1aa = (rewardSubKey)getSubKeyType(this,(string *)puVar4);
              std::string::string(local_1cc);
                    /* try { // try from 080ef921 to 080ef94d has its CatchHandler @ 080ef95b */
              cVar2 = ScanStr(local_1cc);
              if (cVar2 == '\x01') {
                puVar4 = local_1cc;
                local_1a9 = getSubKeyAction(this,(string *)puVar4);
              }
              else {
                unaff_EBX = 0;
              }
                    /* try { // try from 080ef97c to 080ef980 has its CatchHandler @ 080ef993 */
              std::string::~string(local_1cc);
              if (cVar2 == '\x01') {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
            }
            else {
              unaff_EBX = 0;
              bVar1 = false;
            }
                    /* try { // try from 080ef9b7 to 080efa33 has its CatchHandler @ 080f020e */
            std::string::~string(local_1c8);
          }
          if (!bVar1) goto LAB_080f0226;
        }
        else {
          if (0x8f < local_20) {
            if (local_20 == 0x93) goto LAB_080ef71e;
            if (local_20 != 0xa3) goto LAB_080f01d5;
            goto LAB_080ef85d;
          }
          if (local_20 == 0) goto LAB_080ef6b7;
        }
      }
      else if (local_20 == 0xfc) {
LAB_080effe5:
        if (ImportRewardScript(char_const*,char_const*)::__inited == '\x01') {
          std::
          make_pair<rewardKey&,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>&>
                    (local_6c,(map *)&local_1ad);
                    /* try { // try from 080f0077 to 080f007b has its CatchHandler @ 080f00c6 */
          std::
          pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>
          ::
          pair<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>
                    (local_8c,local_6c);
          puVar4 = this;
                    /* try { // try from 080f0096 to 080f009a has its CatchHandler @ 080f00ae */
          std::
          map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
          ::insert(local_94);
                    /* try { // try from 080f00a7 to 080f00ab has its CatchHandler @ 080f00c6 */
          std::
          pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>
          ::~pair(local_8c);
                    /* try { // try from 080f00e4 to 080f01ee has its CatchHandler @ 080f020e */
          std::
          pair<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>
          ::~pair((pair<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>
                   *)local_6c);
          rewardSubKey::clear(&local_1aa);
          std::
          map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
          ::clear(local_1a8);
        }
        else {
          local_98 = 0xfc;
          std::pair<char_const*const,int>::pair<char_const(&)[12],int>
                    (local_a0,"[/sub type]",&local_98);
          puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
          insert(local_a8);
LAB_080f010d:
          if (ImportRewardScript(char_const*,char_const*)::__inited != '\x01') {
            local_3c = 0x102;
            std::pair<char_const*const,int>::pair<char_const(&)[12],int>
                      (local_44,"[/job type]",&local_3c);
            puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_4c);
            goto LAB_080f0179;
          }
          rewardKey::clear(&local_1ad);
          std::
          map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
          ::clear(local_1a8);
        }
      }
      else {
        if (local_20 < 0xfd) {
          if (local_20 == 0xb9) goto LAB_080efa98;
          if (local_20 != 0xd8) goto LAB_080f01d5;
          goto LAB_080efd26;
        }
        if (local_20 == 0x102) goto LAB_080f010d;
        if (local_20 != 0x107) goto LAB_080f01d5;
LAB_080f0179:
        if (ImportRewardScript(char_const*,char_const*)::__inited == '\x01') {
          itemData::clear((itemData *)&local_1bc);
        }
        else {
          local_28 = 0x107;
          std::pair<char_const*const,int>::pair<char_const(&)[10],int>
                    (local_30,"[/option]",&local_28);
          puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
          insert(local_38);
        }
      }
LAB_080f01d5:
      if (ImportRewardScript(char_const*,char_const*)::__inited != '\x01') {
        SpinLock::leave((SpinLock *)&ImportRewardScript(char_const*,char_const*)::__init_lock);
        ImportRewardScript(char_const*,char_const*)::__inited = '\x01';
        goto LAB_080ef438;
      }
    }
    unaff_EBX = (uint)local_18d;
LAB_080f0226:
                    /* try { // try from 080f022f to 080f0233 has its CatchHandler @ 080f0236 */
    std::
    map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
    ::~map(local_1a8);
    std::string::~string(local_18c);
  }
  else {
    unaff_EBX = 0;
  }
  return unaff_EBX;
}
```
