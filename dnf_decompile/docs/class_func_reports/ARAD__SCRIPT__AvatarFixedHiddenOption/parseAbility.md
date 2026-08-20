# parseAbility

`_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs`

`ARAD::SCRIPT::AvatarFixedHiddenOption::parseAbility(std::vector<STAvatarHiddenAbilityVariation, std::allocator<STAvatarHiddenAbilityVariation> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarFixedHiddenOption` | `0x088aef52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088aef52  _ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs
#           ARAD::SCRIPT::AvatarFixedHiddenOption::parseAbility(std::vector<STAvatarHiddenAbilityVariation, std::allocator<STAvatarHiddenAbilityVariation> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x088aef52, 0x088b00df]
088aef52 +0x0000:  push   %ebp
088aef53 +0x0001:  mov    %esp,%ebp
088aef55 +0x0003:  push   %edi
088aef56 +0x0004:  push   %esi
088aef57 +0x0005:  push   %ebx
088aef58 +0x0006:  sub    $0x38c,%esp
088aef5e +0x000c:  movl   $0x0,-0x28(%ebp)
088aef65 +0x0013:  movl   $0x0,-0x24(%ebp)
088aef6c +0x001a:  mov    $0x0,%eax
088aef71 +0x001f:  mov    %eax,-0x20(%ebp)
088aef74 +0x0022:  mov    $&_ZGVZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,%eax
088aef79 +0x0027:  movzbl (%eax),%eax
088aef7c +0x002a:  test   %al,%al
088aef7e +0x002c:  jne    088aeff1 <+0x9f>
088aef80 +0x002e:  movl   $&_ZGVZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,(%esp)
088aef87 +0x0035:  call   08725330 <__cxa_guard_acquire>
088aef8c +0x003a:  test   %eax,%eax
088aef8e +0x003c:  setne  %al
088aef91 +0x003f:  test   %al,%al
088aef93 +0x0041:  je     088aeff1 <+0x9f>
088aef95 +0x0043:  mov    $0x0,%ebx
088aef9a +0x0048:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,(%esp)
088aefa1 +0x004f:  call   080f14d4 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x556>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x556
088aefa6 +0x0054:  movl   $&_ZGVZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,(%esp)
088aefad +0x005b:  call   08725250 <__cxa_guard_release>
088aefb2 +0x0060:  mov    $&_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEED1Ev,%eax
088aefb7 +0x0065:  movl   $&__dso_handle,0x8(%esp)
088aefbf +0x006d:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088aefc7 +0x0075:  mov    %eax,(%esp)
088aefca +0x0078:  call   0807ddd0 <_init+0x6c8>
088aefcf +0x007d:  jmp    088aeff1 <+0x9f>
088aefd1 +0x007f:  mov    %edx,%esi
088aefd3 +0x0081:  mov    %eax,%edi
088aefd5 +0x0083:  test   %bl,%bl
088aefd7 +0x0085:  jne    088aefe5 <+0x93>
088aefd9 +0x0087:  movl   $&_ZGVZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,(%esp)
088aefe0 +0x008e:  call   087252c0 <__cxa_guard_abort>
088aefe5 +0x0093:  mov    %edi,%eax
088aefe7 +0x0095:  mov    %esi,%edx
088aefe9 +0x0097:  mov    %eax,(%esp)
088aefec +0x009a:  call   08ae3750 <_Unwind_Resume>
088aeff1 +0x009f:  mov    $&_ZGVZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE11__init_lock,%eax
088aeff6 +0x00a4:  movzbl (%eax),%eax
088aeff9 +0x00a7:  test   %al,%al
088aeffb +0x00a9:  jne    088af06e <+0x11c>
088aeffd +0x00ab:  movl   $&_ZGVZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE11__init_lock,(%esp)
088af004 +0x00b2:  call   08725330 <__cxa_guard_acquire>
088af009 +0x00b7:  test   %eax,%eax
088af00b +0x00b9:  setne  %al
088af00e +0x00bc:  test   %al,%al
088af010 +0x00be:  je     088af06e <+0x11c>
088af012 +0x00c0:  mov    $0x0,%ebx
088af017 +0x00c5:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE11__init_lock,(%esp)
088af01e +0x00cc:  call   08ad3522 <_ZN8SpinLockC1Ev>  ; SpinLock::SpinLock()
088af023 +0x00d1:  movl   $&_ZGVZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE11__init_lock,(%esp)
088af02a +0x00d8:  call   08725250 <__cxa_guard_release>
088af02f +0x00dd:  mov    $&_ZN8SpinLockD1Ev,%eax
088af034 +0x00e2:  movl   $&__dso_handle,0x8(%esp)
088af03c +0x00ea:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE11__init_lock,0x4(%esp)
088af044 +0x00f2:  mov    %eax,(%esp)
088af047 +0x00f5:  call   0807ddd0 <_init+0x6c8>
088af04c +0x00fa:  jmp    088af06e <+0x11c>
088af04e +0x00fc:  mov    %edx,%esi
088af050 +0x00fe:  mov    %eax,%edi
088af052 +0x0100:  test   %bl,%bl
088af054 +0x0102:  jne    088af062 <+0x110>
088af056 +0x0104:  movl   $&_ZGVZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE11__init_lock,(%esp)
088af05d +0x010b:  call   087252c0 <__cxa_guard_abort>
088af062 +0x0110:  mov    %edi,%eax
088af064 +0x0112:  mov    %esi,%edx
088af066 +0x0114:  mov    %eax,(%esp)
088af069 +0x0117:  call   08ae3750 <_Unwind_Resume>
088af06e +0x011c:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af075 +0x0123:  test   %al,%al
088af077 +0x0125:  je     088af133 <+0x1e1>
088af07d +0x012b:  mov    0x10(%ebp),%eax
088af080 +0x012e:  mov    %eax,(%esp)
088af083 +0x0131:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
088af088 +0x0136:  mov    %eax,-0x37c(%ebp)
088af08e +0x013c:  lea    -0x380(%ebp),%eax
088af094 +0x0142:  lea    -0x37c(%ebp),%edx
088af09a +0x0148:  mov    %edx,0x8(%esp)
088af09e +0x014c:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af0a6 +0x0154:  mov    %eax,(%esp)
088af0a9 +0x0157:  call   080f154e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x5d0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5d0
088af0ae +0x015c:  sub    $0x4,%esp
088af0b1 +0x015f:  lea    -0x380(%ebp),%eax
088af0b7 +0x0165:  mov    %eax,0x4(%esp)
088af0bb +0x0169:  lea    -0x384(%ebp),%eax
088af0c1 +0x016f:  mov    %eax,(%esp)
088af0c4 +0x0172:  call   080f157a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x5fc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5fc
088af0c9 +0x0177:  lea    -0x374(%ebp),%eax
088af0cf +0x017d:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af0d7 +0x0185:  mov    %eax,(%esp)
088af0da +0x0188:  call   080f158a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x60c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x60c
088af0df +0x018d:  sub    $0x4,%esp
088af0e2 +0x0190:  lea    -0x374(%ebp),%eax
088af0e8 +0x0196:  mov    %eax,0x4(%esp)
088af0ec +0x019a:  lea    -0x378(%ebp),%eax
088af0f2 +0x01a0:  mov    %eax,(%esp)
088af0f5 +0x01a3:  call   080f157a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x5fc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5fc
088af0fa +0x01a8:  lea    -0x378(%ebp),%eax
088af100 +0x01ae:  mov    %eax,0x4(%esp)
088af104 +0x01b2:  lea    -0x384(%ebp),%eax
088af10a +0x01b8:  mov    %eax,(%esp)
088af10d +0x01bb:  call   080f15b0 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x632>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x632
088af112 +0x01c0:  test   %al,%al
088af114 +0x01c2:  je     088af129 <+0x1d7>
088af116 +0x01c4:  lea    -0x384(%ebp),%eax
088af11c +0x01ca:  mov    %eax,(%esp)
088af11f +0x01cd:  call   080f15c4 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x646>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x646
088af124 +0x01d2:  mov    0x4(%eax),%eax
088af127 +0x01d5:  jmp    088af12e <+0x1dc>
088af129 +0x01d7:  mov    $0xffffffff,%eax
088af12e +0x01dc:  mov    %eax,-0x1c(%ebp)
088af131 +0x01df:  jmp    088af163 <+0x211>
088af133 +0x01e1:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE11__init_lock,(%esp)
088af13a +0x01e8:  call   08ad3552 <_ZN8SpinLock5enterEv>  ; SpinLock::enter()
088af13f +0x01ed:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af146 +0x01f4:  test   %al,%al
088af148 +0x01f6:  je     088af15c <+0x20a>
088af14a +0x01f8:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE11__init_lock,(%esp)
088af151 +0x01ff:  call   08ad3586 <_ZN8SpinLock5leaveEv>  ; SpinLock::leave()
088af156 +0x0204:  nop
088af157 +0x0205:  jmp    088aef74 <+0x22>
088af15c +0x020a:  movl   $0x0,-0x1c(%ebp)
088af163 +0x0211:  cmpl   $0xac,-0x1c(%ebp)
088af16a +0x0218:  ja     088b0096 <+0x1144>
088af170 +0x021e:  mov    -0x1c(%ebp),%eax
088af173 +0x0221:  shl    $0x2,%eax
088af176 +0x0224:  mov    &data#ca0b53da(.rodata)(%eax),%eax
088af17c +0x022a:  jmp    *%eax
088af17e +0x022c:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af185 +0x0233:  xor    $0x1,%eax
088af188 +0x0236:  test   %al,%al
088af18a +0x0238:  je     088af1db <+0x289>
088af18c +0x023a:  movl   $0x46,-0x360(%ebp)
088af196 +0x0244:  lea    -0x360(%ebp),%eax
088af19c +0x024a:  mov    %eax,0x8(%esp)
088af1a0 +0x024e:  movl   $"[physical attack]",0x4(%esp)
088af1a8 +0x0256:  lea    -0x368(%ebp),%eax
088af1ae +0x025c:  mov    %eax,(%esp)
088af1b1 +0x025f:  call   082adf9a <_GLOBAL__I__ZN4CLog5this_E+0xa3c1>  ; global constructors keyed to CLog::this_+0xa3c1
088af1b6 +0x0264:  lea    -0x370(%ebp),%eax
088af1bc +0x026a:  lea    -0x368(%ebp),%edx
088af1c2 +0x0270:  mov    %edx,0x8(%esp)
088af1c6 +0x0274:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af1ce +0x027c:  mov    %eax,(%esp)
088af1d1 +0x027f:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088af1d6 +0x0284:  sub    $0x4,%esp
088af1d9 +0x0287:  jmp    088af237 <+0x2e5>
088af1db +0x0289:  movl   $0x0,(%esp)
088af1e2 +0x0290:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af1e7 +0x0295:  mov    %eax,-0x24(%ebp)
088af1ea +0x0298:  movl   $0x0,(%esp)
088af1f1 +0x029f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af1f6 +0x02a4:  mov    %eax,-0x28(%ebp)
088af1f9 +0x02a7:  mov    -0x28(%ebp),%eax
088af1fc +0x02aa:  mov    %eax,0xc(%esp)
088af200 +0x02ae:  mov    -0x24(%ebp),%eax
088af203 +0x02b1:  mov    %eax,0x8(%esp)
088af207 +0x02b5:  movl   $0x1,0x4(%esp)
088af20f +0x02bd:  lea    -0x35c(%ebp),%eax
088af215 +0x02c3:  mov    %eax,(%esp)
088af218 +0x02c6:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088af21d +0x02cb:  lea    -0x35c(%ebp),%eax
088af223 +0x02d1:  mov    %eax,0x4(%esp)
088af227 +0x02d5:  mov    0xc(%ebp),%eax
088af22a +0x02d8:  mov    %eax,(%esp)
088af22d +0x02db:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088af232 +0x02e0:  jmp    088b00a8 <+0x1156>
088af237 +0x02e5:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af23e +0x02ec:  xor    $0x1,%eax
088af241 +0x02ef:  test   %al,%al
088af243 +0x02f1:  je     088af294 <+0x342>
088af245 +0x02f3:  movl   $0x4b,-0x338(%ebp)
088af24f +0x02fd:  lea    -0x338(%ebp),%eax
088af255 +0x0303:  mov    %eax,0x8(%esp)
088af259 +0x0307:  movl   $"[magical attack]",0x4(%esp)
088af261 +0x030f:  lea    -0x340(%ebp),%eax
088af267 +0x0315:  mov    %eax,(%esp)
088af26a +0x0318:  call   080f1688 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x70a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x70a
088af26f +0x031d:  lea    -0x348(%ebp),%eax
088af275 +0x0323:  lea    -0x340(%ebp),%edx
088af27b +0x0329:  mov    %edx,0x8(%esp)
088af27f +0x032d:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af287 +0x0335:  mov    %eax,(%esp)
088af28a +0x0338:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088af28f +0x033d:  sub    $0x4,%esp
088af292 +0x0340:  jmp    088af2f0 <+0x39e>
088af294 +0x0342:  movl   $0x0,(%esp)
088af29b +0x0349:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af2a0 +0x034e:  mov    %eax,-0x24(%ebp)
088af2a3 +0x0351:  movl   $0x0,(%esp)
088af2aa +0x0358:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af2af +0x035d:  mov    %eax,-0x28(%ebp)
088af2b2 +0x0360:  mov    -0x28(%ebp),%eax
088af2b5 +0x0363:  mov    %eax,0xc(%esp)
088af2b9 +0x0367:  mov    -0x24(%ebp),%eax
088af2bc +0x036a:  mov    %eax,0x8(%esp)
088af2c0 +0x036e:  movl   $0x2,0x4(%esp)
088af2c8 +0x0376:  lea    -0x334(%ebp),%eax
088af2ce +0x037c:  mov    %eax,(%esp)
088af2d1 +0x037f:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088af2d6 +0x0384:  lea    -0x334(%ebp),%eax
088af2dc +0x038a:  mov    %eax,0x4(%esp)
088af2e0 +0x038e:  mov    0xc(%ebp),%eax
088af2e3 +0x0391:  mov    %eax,(%esp)
088af2e6 +0x0394:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088af2eb +0x0399:  jmp    088b00a8 <+0x1156>
088af2f0 +0x039e:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af2f7 +0x03a5:  xor    $0x1,%eax
088af2fa +0x03a8:  test   %al,%al
088af2fc +0x03aa:  je     088af34d <+0x3fb>
088af2fe +0x03ac:  movl   $0x50,-0x310(%ebp)
088af308 +0x03b6:  lea    -0x310(%ebp),%eax
088af30e +0x03bc:  mov    %eax,0x8(%esp)
088af312 +0x03c0:  movl   $"[physical defense]",0x4(%esp)
088af31a +0x03c8:  lea    -0x318(%ebp),%eax
088af320 +0x03ce:  mov    %eax,(%esp)
088af323 +0x03d1:  call   082ae0dc <_GLOBAL__I__ZN4CLog5this_E+0xa503>  ; global constructors keyed to CLog::this_+0xa503
088af328 +0x03d6:  lea    -0x320(%ebp),%eax
088af32e +0x03dc:  lea    -0x318(%ebp),%edx
088af334 +0x03e2:  mov    %edx,0x8(%esp)
088af338 +0x03e6:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af340 +0x03ee:  mov    %eax,(%esp)
088af343 +0x03f1:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088af348 +0x03f6:  sub    $0x4,%esp
088af34b +0x03f9:  jmp    088af3a9 <+0x457>
088af34d +0x03fb:  movl   $0x0,(%esp)
088af354 +0x0402:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af359 +0x0407:  mov    %eax,-0x24(%ebp)
088af35c +0x040a:  movl   $0x0,(%esp)
088af363 +0x0411:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af368 +0x0416:  mov    %eax,-0x28(%ebp)
088af36b +0x0419:  mov    -0x28(%ebp),%eax
088af36e +0x041c:  mov    %eax,0xc(%esp)
088af372 +0x0420:  mov    -0x24(%ebp),%eax
088af375 +0x0423:  mov    %eax,0x8(%esp)
088af379 +0x0427:  movl   $0x3,0x4(%esp)
088af381 +0x042f:  lea    -0x30c(%ebp),%eax
088af387 +0x0435:  mov    %eax,(%esp)
088af38a +0x0438:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088af38f +0x043d:  lea    -0x30c(%ebp),%eax
088af395 +0x0443:  mov    %eax,0x4(%esp)
088af399 +0x0447:  mov    0xc(%ebp),%eax
088af39c +0x044a:  mov    %eax,(%esp)
088af39f +0x044d:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088af3a4 +0x0452:  jmp    088b00a8 <+0x1156>
088af3a9 +0x0457:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af3b0 +0x045e:  xor    $0x1,%eax
088af3b3 +0x0461:  test   %al,%al
088af3b5 +0x0463:  je     088af406 <+0x4b4>
088af3b7 +0x0465:  movl   $0x55,-0x2e8(%ebp)
088af3c1 +0x046f:  lea    -0x2e8(%ebp),%eax
088af3c7 +0x0475:  mov    %eax,0x8(%esp)
088af3cb +0x0479:  movl   $"[magical defense]",0x4(%esp)
088af3d3 +0x0481:  lea    -0x2f0(%ebp),%eax
088af3d9 +0x0487:  mov    %eax,(%esp)
088af3dc +0x048a:  call   082adf9a <_GLOBAL__I__ZN4CLog5this_E+0xa3c1>  ; global constructors keyed to CLog::this_+0xa3c1
088af3e1 +0x048f:  lea    -0x2f8(%ebp),%eax
088af3e7 +0x0495:  lea    -0x2f0(%ebp),%edx
088af3ed +0x049b:  mov    %edx,0x8(%esp)
088af3f1 +0x049f:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af3f9 +0x04a7:  mov    %eax,(%esp)
088af3fc +0x04aa:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088af401 +0x04af:  sub    $0x4,%esp
088af404 +0x04b2:  jmp    088af462 <+0x510>
088af406 +0x04b4:  movl   $0x0,(%esp)
088af40d +0x04bb:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af412 +0x04c0:  mov    %eax,-0x24(%ebp)
088af415 +0x04c3:  movl   $0x0,(%esp)
088af41c +0x04ca:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af421 +0x04cf:  mov    %eax,-0x28(%ebp)
088af424 +0x04d2:  mov    -0x28(%ebp),%eax
088af427 +0x04d5:  mov    %eax,0xc(%esp)
088af42b +0x04d9:  mov    -0x24(%ebp),%eax
088af42e +0x04dc:  mov    %eax,0x8(%esp)
088af432 +0x04e0:  movl   $0x4,0x4(%esp)
088af43a +0x04e8:  lea    -0x2e4(%ebp),%eax
088af440 +0x04ee:  mov    %eax,(%esp)
088af443 +0x04f1:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088af448 +0x04f6:  lea    -0x2e4(%ebp),%eax
088af44e +0x04fc:  mov    %eax,0x4(%esp)
088af452 +0x0500:  mov    0xc(%ebp),%eax
088af455 +0x0503:  mov    %eax,(%esp)
088af458 +0x0506:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088af45d +0x050b:  jmp    088b00a8 <+0x1156>
088af462 +0x0510:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af469 +0x0517:  xor    $0x1,%eax
088af46c +0x051a:  test   %al,%al
088af46e +0x051c:  je     088af4bf <+0x56d>
088af470 +0x051e:  movl   $0x5a,-0x2c0(%ebp)
088af47a +0x0528:  lea    -0x2c0(%ebp),%eax
088af480 +0x052e:  mov    %eax,0x8(%esp)
088af484 +0x0532:  movl   $"[HP MAX]",0x4(%esp)
088af48c +0x053a:  lea    -0x2c8(%ebp),%eax
088af492 +0x0540:  mov    %eax,(%esp)
088af495 +0x0543:  call   080f165a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x6dc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x6dc
088af49a +0x0548:  lea    -0x2d0(%ebp),%eax
088af4a0 +0x054e:  lea    -0x2c8(%ebp),%edx
088af4a6 +0x0554:  mov    %edx,0x8(%esp)
088af4aa +0x0558:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af4b2 +0x0560:  mov    %eax,(%esp)
088af4b5 +0x0563:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088af4ba +0x0568:  sub    $0x4,%esp
088af4bd +0x056b:  jmp    088af51b <+0x5c9>
088af4bf +0x056d:  movl   $0x0,(%esp)
088af4c6 +0x0574:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af4cb +0x0579:  mov    %eax,-0x24(%ebp)
088af4ce +0x057c:  movl   $0x0,(%esp)
088af4d5 +0x0583:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af4da +0x0588:  mov    %eax,-0x28(%ebp)
088af4dd +0x058b:  mov    -0x28(%ebp),%eax
088af4e0 +0x058e:  mov    %eax,0xc(%esp)
088af4e4 +0x0592:  mov    -0x24(%ebp),%eax
088af4e7 +0x0595:  mov    %eax,0x8(%esp)
088af4eb +0x0599:  movl   $0x5,0x4(%esp)
088af4f3 +0x05a1:  lea    -0x2bc(%ebp),%eax
088af4f9 +0x05a7:  mov    %eax,(%esp)
088af4fc +0x05aa:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088af501 +0x05af:  lea    -0x2bc(%ebp),%eax
088af507 +0x05b5:  mov    %eax,0x4(%esp)
088af50b +0x05b9:  mov    0xc(%ebp),%eax
088af50e +0x05bc:  mov    %eax,(%esp)
088af511 +0x05bf:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088af516 +0x05c4:  jmp    088b00a8 <+0x1156>
088af51b +0x05c9:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af522 +0x05d0:  xor    $0x1,%eax
088af525 +0x05d3:  test   %al,%al
088af527 +0x05d5:  je     088af578 <+0x626>
088af529 +0x05d7:  movl   $0x5f,-0x298(%ebp)
088af533 +0x05e1:  lea    -0x298(%ebp),%eax
088af539 +0x05e7:  mov    %eax,0x8(%esp)
088af53d +0x05eb:  movl   $"[MP MAX]",0x4(%esp)
088af545 +0x05f3:  lea    -0x2a0(%ebp),%eax
088af54b +0x05f9:  mov    %eax,(%esp)
088af54e +0x05fc:  call   080f165a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x6dc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x6dc
088af553 +0x0601:  lea    -0x2a8(%ebp),%eax
088af559 +0x0607:  lea    -0x2a0(%ebp),%edx
088af55f +0x060d:  mov    %edx,0x8(%esp)
088af563 +0x0611:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af56b +0x0619:  mov    %eax,(%esp)
088af56e +0x061c:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088af573 +0x0621:  sub    $0x4,%esp
088af576 +0x0624:  jmp    088af5d4 <+0x682>
088af578 +0x0626:  movl   $0x0,(%esp)
088af57f +0x062d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af584 +0x0632:  mov    %eax,-0x24(%ebp)
088af587 +0x0635:  movl   $0x0,(%esp)
088af58e +0x063c:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af593 +0x0641:  mov    %eax,-0x28(%ebp)
088af596 +0x0644:  mov    -0x28(%ebp),%eax
088af599 +0x0647:  mov    %eax,0xc(%esp)
088af59d +0x064b:  mov    -0x24(%ebp),%eax
088af5a0 +0x064e:  mov    %eax,0x8(%esp)
088af5a4 +0x0652:  movl   $0x6,0x4(%esp)
088af5ac +0x065a:  lea    -0x294(%ebp),%eax
088af5b2 +0x0660:  mov    %eax,(%esp)
088af5b5 +0x0663:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088af5ba +0x0668:  lea    -0x294(%ebp),%eax
088af5c0 +0x066e:  mov    %eax,0x4(%esp)
088af5c4 +0x0672:  mov    0xc(%ebp),%eax
088af5c7 +0x0675:  mov    %eax,(%esp)
088af5ca +0x0678:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088af5cf +0x067d:  jmp    088b00a8 <+0x1156>
088af5d4 +0x0682:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af5db +0x0689:  xor    $0x1,%eax
088af5de +0x068c:  test   %al,%al
088af5e0 +0x068e:  je     088af631 <+0x6df>
088af5e2 +0x0690:  movl   $0x64,-0x270(%ebp)
088af5ec +0x069a:  lea    -0x270(%ebp),%eax
088af5f2 +0x06a0:  mov    %eax,0x8(%esp)
088af5f6 +0x06a4:  movl   $"[HP regen speed]",0x4(%esp)
088af5fe +0x06ac:  lea    -0x278(%ebp),%eax
088af604 +0x06b2:  mov    %eax,(%esp)
088af607 +0x06b5:  call   080f1688 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x70a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x70a
088af60c +0x06ba:  lea    -0x280(%ebp),%eax
088af612 +0x06c0:  lea    -0x278(%ebp),%edx
088af618 +0x06c6:  mov    %edx,0x8(%esp)
088af61c +0x06ca:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af624 +0x06d2:  mov    %eax,(%esp)
088af627 +0x06d5:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088af62c +0x06da:  sub    $0x4,%esp
088af62f +0x06dd:  jmp    088af68d <+0x73b>
088af631 +0x06df:  movl   $0x0,(%esp)
088af638 +0x06e6:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af63d +0x06eb:  mov    %eax,-0x24(%ebp)
088af640 +0x06ee:  movl   $0x0,(%esp)
088af647 +0x06f5:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af64c +0x06fa:  mov    %eax,-0x28(%ebp)
088af64f +0x06fd:  mov    -0x28(%ebp),%eax
088af652 +0x0700:  mov    %eax,0xc(%esp)
088af656 +0x0704:  mov    -0x24(%ebp),%eax
088af659 +0x0707:  mov    %eax,0x8(%esp)
088af65d +0x070b:  movl   $0x7,0x4(%esp)
088af665 +0x0713:  lea    -0x26c(%ebp),%eax
088af66b +0x0719:  mov    %eax,(%esp)
088af66e +0x071c:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088af673 +0x0721:  lea    -0x26c(%ebp),%eax
088af679 +0x0727:  mov    %eax,0x4(%esp)
088af67d +0x072b:  mov    0xc(%ebp),%eax
088af680 +0x072e:  mov    %eax,(%esp)
088af683 +0x0731:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088af688 +0x0736:  jmp    088b00a8 <+0x1156>
088af68d +0x073b:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af694 +0x0742:  xor    $0x1,%eax
088af697 +0x0745:  test   %al,%al
088af699 +0x0747:  je     088af6ea <+0x798>
088af69b +0x0749:  movl   $0x69,-0x248(%ebp)
088af6a5 +0x0753:  lea    -0x248(%ebp),%eax
088af6ab +0x0759:  mov    %eax,0x8(%esp)
088af6af +0x075d:  movl   $"[MP Regen speed]",0x4(%esp)
088af6b7 +0x0765:  lea    -0x250(%ebp),%eax
088af6bd +0x076b:  mov    %eax,(%esp)
088af6c0 +0x076e:  call   080f1688 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x70a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x70a
088af6c5 +0x0773:  lea    -0x258(%ebp),%eax
088af6cb +0x0779:  lea    -0x250(%ebp),%edx
088af6d1 +0x077f:  mov    %edx,0x8(%esp)
088af6d5 +0x0783:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af6dd +0x078b:  mov    %eax,(%esp)
088af6e0 +0x078e:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088af6e5 +0x0793:  sub    $0x4,%esp
088af6e8 +0x0796:  jmp    088af746 <+0x7f4>
088af6ea +0x0798:  movl   $0x0,(%esp)
088af6f1 +0x079f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af6f6 +0x07a4:  mov    %eax,-0x24(%ebp)
088af6f9 +0x07a7:  movl   $0x0,(%esp)
088af700 +0x07ae:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af705 +0x07b3:  mov    %eax,-0x28(%ebp)
088af708 +0x07b6:  mov    -0x28(%ebp),%eax
088af70b +0x07b9:  mov    %eax,0xc(%esp)
088af70f +0x07bd:  mov    -0x24(%ebp),%eax
088af712 +0x07c0:  mov    %eax,0x8(%esp)
088af716 +0x07c4:  movl   $0x8,0x4(%esp)
088af71e +0x07cc:  lea    -0x244(%ebp),%eax
088af724 +0x07d2:  mov    %eax,(%esp)
088af727 +0x07d5:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088af72c +0x07da:  lea    -0x244(%ebp),%eax
088af732 +0x07e0:  mov    %eax,0x4(%esp)
088af736 +0x07e4:  mov    0xc(%ebp),%eax
088af739 +0x07e7:  mov    %eax,(%esp)
088af73c +0x07ea:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088af741 +0x07ef:  jmp    088b00a8 <+0x1156>
088af746 +0x07f4:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af74d +0x07fb:  xor    $0x1,%eax
088af750 +0x07fe:  test   %al,%al
088af752 +0x0800:  je     088af7a3 <+0x851>
088af754 +0x0802:  movl   $0x6e,-0x220(%ebp)
088af75e +0x080c:  lea    -0x220(%ebp),%eax
088af764 +0x0812:  mov    %eax,0x8(%esp)
088af768 +0x0816:  movl   $"[attack speed]",0x4(%esp)
088af770 +0x081e:  lea    -0x228(%ebp),%eax
088af776 +0x0824:  mov    %eax,(%esp)
088af779 +0x0827:  call   082ae194 <_GLOBAL__I__ZN4CLog5this_E+0xa5bb>  ; global constructors keyed to CLog::this_+0xa5bb
088af77e +0x082c:  lea    -0x230(%ebp),%eax
088af784 +0x0832:  lea    -0x228(%ebp),%edx
088af78a +0x0838:  mov    %edx,0x8(%esp)
088af78e +0x083c:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af796 +0x0844:  mov    %eax,(%esp)
088af799 +0x0847:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088af79e +0x084c:  sub    $0x4,%esp
088af7a1 +0x084f:  jmp    088af7ff <+0x8ad>
088af7a3 +0x0851:  movl   $0x0,(%esp)
088af7aa +0x0858:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af7af +0x085d:  mov    %eax,-0x24(%ebp)
088af7b2 +0x0860:  movl   $0x0,(%esp)
088af7b9 +0x0867:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af7be +0x086c:  mov    %eax,-0x28(%ebp)
088af7c1 +0x086f:  mov    -0x28(%ebp),%eax
088af7c4 +0x0872:  mov    %eax,0xc(%esp)
088af7c8 +0x0876:  mov    -0x24(%ebp),%eax
088af7cb +0x0879:  mov    %eax,0x8(%esp)
088af7cf +0x087d:  movl   $0x9,0x4(%esp)
088af7d7 +0x0885:  lea    -0x21c(%ebp),%eax
088af7dd +0x088b:  mov    %eax,(%esp)
088af7e0 +0x088e:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088af7e5 +0x0893:  lea    -0x21c(%ebp),%eax
088af7eb +0x0899:  mov    %eax,0x4(%esp)
088af7ef +0x089d:  mov    0xc(%ebp),%eax
088af7f2 +0x08a0:  mov    %eax,(%esp)
088af7f5 +0x08a3:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088af7fa +0x08a8:  jmp    088b00a8 <+0x1156>
088af7ff +0x08ad:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af806 +0x08b4:  xor    $0x1,%eax
088af809 +0x08b7:  test   %al,%al
088af80b +0x08b9:  je     088af85c <+0x90a>
088af80d +0x08bb:  movl   $0x73,-0x1f8(%ebp)
088af817 +0x08c5:  lea    -0x1f8(%ebp),%eax
088af81d +0x08cb:  mov    %eax,0x8(%esp)
088af821 +0x08cf:  movl   $"[move speed]",0x4(%esp)
088af829 +0x08d7:  lea    -0x200(%ebp),%eax
088af82f +0x08dd:  mov    %eax,(%esp)
088af832 +0x08e0:  call   082adff6 <_GLOBAL__I__ZN4CLog5this_E+0xa41d>  ; global constructors keyed to CLog::this_+0xa41d
088af837 +0x08e5:  lea    -0x208(%ebp),%eax
088af83d +0x08eb:  lea    -0x200(%ebp),%edx
088af843 +0x08f1:  mov    %edx,0x8(%esp)
088af847 +0x08f5:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af84f +0x08fd:  mov    %eax,(%esp)
088af852 +0x0900:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088af857 +0x0905:  sub    $0x4,%esp
088af85a +0x0908:  jmp    088af8b8 <+0x966>
088af85c +0x090a:  movl   $0x0,(%esp)
088af863 +0x0911:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af868 +0x0916:  mov    %eax,-0x24(%ebp)
088af86b +0x0919:  movl   $0x0,(%esp)
088af872 +0x0920:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af877 +0x0925:  mov    %eax,-0x28(%ebp)
088af87a +0x0928:  mov    -0x28(%ebp),%eax
088af87d +0x092b:  mov    %eax,0xc(%esp)
088af881 +0x092f:  mov    -0x24(%ebp),%eax
088af884 +0x0932:  mov    %eax,0x8(%esp)
088af888 +0x0936:  movl   $0xa,0x4(%esp)
088af890 +0x093e:  lea    -0x1f4(%ebp),%eax
088af896 +0x0944:  mov    %eax,(%esp)
088af899 +0x0947:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088af89e +0x094c:  lea    -0x1f4(%ebp),%eax
088af8a4 +0x0952:  mov    %eax,0x4(%esp)
088af8a8 +0x0956:  mov    0xc(%ebp),%eax
088af8ab +0x0959:  mov    %eax,(%esp)
088af8ae +0x095c:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088af8b3 +0x0961:  jmp    088b00a8 <+0x1156>
088af8b8 +0x0966:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af8bf +0x096d:  xor    $0x1,%eax
088af8c2 +0x0970:  test   %al,%al
088af8c4 +0x0972:  je     088af915 <+0x9c3>
088af8c6 +0x0974:  movl   $0x78,-0x1d0(%ebp)
088af8d0 +0x097e:  lea    -0x1d0(%ebp),%eax
088af8d6 +0x0984:  mov    %eax,0x8(%esp)
088af8da +0x0988:  movl   $"[cast speed]",0x4(%esp)
088af8e2 +0x0990:  lea    -0x1d8(%ebp),%eax
088af8e8 +0x0996:  mov    %eax,(%esp)
088af8eb +0x0999:  call   082adff6 <_GLOBAL__I__ZN4CLog5this_E+0xa41d>  ; global constructors keyed to CLog::this_+0xa41d
088af8f0 +0x099e:  lea    -0x1e0(%ebp),%eax
088af8f6 +0x09a4:  lea    -0x1d8(%ebp),%edx
088af8fc +0x09aa:  mov    %edx,0x8(%esp)
088af900 +0x09ae:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af908 +0x09b6:  mov    %eax,(%esp)
088af90b +0x09b9:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088af910 +0x09be:  sub    $0x4,%esp
088af913 +0x09c1:  jmp    088af971 <+0xa1f>
088af915 +0x09c3:  movl   $0x0,(%esp)
088af91c +0x09ca:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af921 +0x09cf:  mov    %eax,-0x24(%ebp)
088af924 +0x09d2:  movl   $0x0,(%esp)
088af92b +0x09d9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af930 +0x09de:  mov    %eax,-0x28(%ebp)
088af933 +0x09e1:  mov    -0x28(%ebp),%eax
088af936 +0x09e4:  mov    %eax,0xc(%esp)
088af93a +0x09e8:  mov    -0x24(%ebp),%eax
088af93d +0x09eb:  mov    %eax,0x8(%esp)
088af941 +0x09ef:  movl   $0xb,0x4(%esp)
088af949 +0x09f7:  lea    -0x1cc(%ebp),%eax
088af94f +0x09fd:  mov    %eax,(%esp)
088af952 +0x0a00:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088af957 +0x0a05:  lea    -0x1cc(%ebp),%eax
088af95d +0x0a0b:  mov    %eax,0x4(%esp)
088af961 +0x0a0f:  mov    0xc(%ebp),%eax
088af964 +0x0a12:  mov    %eax,(%esp)
088af967 +0x0a15:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088af96c +0x0a1a:  jmp    088b00a8 <+0x1156>
088af971 +0x0a1f:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088af978 +0x0a26:  xor    $0x1,%eax
088af97b +0x0a29:  test   %al,%al
088af97d +0x0a2b:  je     088af9ce <+0xa7c>
088af97f +0x0a2d:  movl   $0x7d,-0x1a8(%ebp)
088af989 +0x0a37:  lea    -0x1a8(%ebp),%eax
088af98f +0x0a3d:  mov    %eax,0x8(%esp)
088af993 +0x0a41:  movl   $"[inventory limit]",0x4(%esp)
088af99b +0x0a49:  lea    -0x1b0(%ebp),%eax
088af9a1 +0x0a4f:  mov    %eax,(%esp)
088af9a4 +0x0a52:  call   082adf9a <_GLOBAL__I__ZN4CLog5this_E+0xa3c1>  ; global constructors keyed to CLog::this_+0xa3c1
088af9a9 +0x0a57:  lea    -0x1b8(%ebp),%eax
088af9af +0x0a5d:  lea    -0x1b0(%ebp),%edx
088af9b5 +0x0a63:  mov    %edx,0x8(%esp)
088af9b9 +0x0a67:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088af9c1 +0x0a6f:  mov    %eax,(%esp)
088af9c4 +0x0a72:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088af9c9 +0x0a77:  sub    $0x4,%esp
088af9cc +0x0a7a:  jmp    088afa2a <+0xad8>
088af9ce +0x0a7c:  movl   $0x0,(%esp)
088af9d5 +0x0a83:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af9da +0x0a88:  mov    %eax,-0x24(%ebp)
088af9dd +0x0a8b:  movl   $0x0,(%esp)
088af9e4 +0x0a92:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088af9e9 +0x0a97:  mov    %eax,-0x28(%ebp)
088af9ec +0x0a9a:  mov    -0x28(%ebp),%eax
088af9ef +0x0a9d:  mov    %eax,0xc(%esp)
088af9f3 +0x0aa1:  mov    -0x24(%ebp),%eax
088af9f6 +0x0aa4:  mov    %eax,0x8(%esp)
088af9fa +0x0aa8:  movl   $0xc,0x4(%esp)
088afa02 +0x0ab0:  lea    -0x1a4(%ebp),%eax
088afa08 +0x0ab6:  mov    %eax,(%esp)
088afa0b +0x0ab9:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088afa10 +0x0abe:  lea    -0x1a4(%ebp),%eax
088afa16 +0x0ac4:  mov    %eax,0x4(%esp)
088afa1a +0x0ac8:  mov    0xc(%ebp),%eax
088afa1d +0x0acb:  mov    %eax,(%esp)
088afa20 +0x0ace:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088afa25 +0x0ad3:  jmp    088b00a8 <+0x1156>
088afa2a +0x0ad8:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088afa31 +0x0adf:  xor    $0x1,%eax
088afa34 +0x0ae2:  test   %al,%al
088afa36 +0x0ae4:  je     088afa87 <+0xb35>
088afa38 +0x0ae6:  movl   $0x82,-0x180(%ebp)
088afa42 +0x0af0:  lea    -0x180(%ebp),%eax
088afa48 +0x0af6:  mov    %eax,0x8(%esp)
088afa4c +0x0afa:  movl   $"[stuck]",0x4(%esp)
088afa54 +0x0b02:  lea    -0x188(%ebp),%eax
088afa5a +0x0b08:  mov    %eax,(%esp)
088afa5d +0x0b0b:  call   082ae1c2 <_GLOBAL__I__ZN4CLog5this_E+0xa5e9>  ; global constructors keyed to CLog::this_+0xa5e9
088afa62 +0x0b10:  lea    -0x190(%ebp),%eax
088afa68 +0x0b16:  lea    -0x188(%ebp),%edx
088afa6e +0x0b1c:  mov    %edx,0x8(%esp)
088afa72 +0x0b20:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088afa7a +0x0b28:  mov    %eax,(%esp)
088afa7d +0x0b2b:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088afa82 +0x0b30:  sub    $0x4,%esp
088afa85 +0x0b33:  jmp    088afae3 <+0xb91>
088afa87 +0x0b35:  movl   $0x0,(%esp)
088afa8e +0x0b3c:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
088afa93 +0x0b41:  fstps  -0x20(%ebp)
088afa96 +0x0b44:  movl   $0x0,(%esp)
088afa9d +0x0b4b:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afaa2 +0x0b50:  mov    %eax,-0x28(%ebp)
088afaa5 +0x0b53:  mov    -0x28(%ebp),%eax
088afaa8 +0x0b56:  mov    %eax,0xc(%esp)
088afaac +0x0b5a:  mov    -0x20(%ebp),%eax
088afaaf +0x0b5d:  mov    %eax,0x8(%esp)
088afab3 +0x0b61:  movl   $0xd,0x4(%esp)
088afabb +0x0b69:  lea    -0x17c(%ebp),%eax
088afac1 +0x0b6f:  mov    %eax,(%esp)
088afac4 +0x0b72:  call   088b021a <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x4e>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x4e
088afac9 +0x0b77:  lea    -0x17c(%ebp),%eax
088afacf +0x0b7d:  mov    %eax,0x4(%esp)
088afad3 +0x0b81:  mov    0xc(%ebp),%eax
088afad6 +0x0b84:  mov    %eax,(%esp)
088afad9 +0x0b87:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088afade +0x0b8c:  jmp    088b00a8 <+0x1156>
088afae3 +0x0b91:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088afaea +0x0b98:  xor    $0x1,%eax
088afaed +0x0b9b:  test   %al,%al
088afaef +0x0b9d:  je     088afb40 <+0xbee>
088afaf1 +0x0b9f:  movl   $0x87,-0x158(%ebp)
088afafb +0x0ba9:  lea    -0x158(%ebp),%eax
088afb01 +0x0baf:  mov    %eax,0x8(%esp)
088afb05 +0x0bb3:  movl   $"[stuck resistance]",0x4(%esp)
088afb0d +0x0bbb:  lea    -0x160(%ebp),%eax
088afb13 +0x0bc1:  mov    %eax,(%esp)
088afb16 +0x0bc4:  call   082ae0dc <_GLOBAL__I__ZN4CLog5this_E+0xa503>  ; global constructors keyed to CLog::this_+0xa503
088afb1b +0x0bc9:  lea    -0x168(%ebp),%eax
088afb21 +0x0bcf:  lea    -0x160(%ebp),%edx
088afb27 +0x0bd5:  mov    %edx,0x8(%esp)
088afb2b +0x0bd9:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088afb33 +0x0be1:  mov    %eax,(%esp)
088afb36 +0x0be4:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088afb3b +0x0be9:  sub    $0x4,%esp
088afb3e +0x0bec:  jmp    088afb9c <+0xc4a>
088afb40 +0x0bee:  movl   $0x0,(%esp)
088afb47 +0x0bf5:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afb4c +0x0bfa:  mov    %eax,-0x24(%ebp)
088afb4f +0x0bfd:  movl   $0x0,(%esp)
088afb56 +0x0c04:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afb5b +0x0c09:  mov    %eax,-0x28(%ebp)
088afb5e +0x0c0c:  mov    -0x28(%ebp),%eax
088afb61 +0x0c0f:  mov    %eax,0xc(%esp)
088afb65 +0x0c13:  mov    -0x24(%ebp),%eax
088afb68 +0x0c16:  mov    %eax,0x8(%esp)
088afb6c +0x0c1a:  movl   $0xe,0x4(%esp)
088afb74 +0x0c22:  lea    -0x154(%ebp),%eax
088afb7a +0x0c28:  mov    %eax,(%esp)
088afb7d +0x0c2b:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088afb82 +0x0c30:  lea    -0x154(%ebp),%eax
088afb88 +0x0c36:  mov    %eax,0x4(%esp)
088afb8c +0x0c3a:  mov    0xc(%ebp),%eax
088afb8f +0x0c3d:  mov    %eax,(%esp)
088afb92 +0x0c40:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088afb97 +0x0c45:  jmp    088b00a8 <+0x1156>
088afb9c +0x0c4a:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088afba3 +0x0c51:  xor    $0x1,%eax
088afba6 +0x0c54:  test   %al,%al
088afba8 +0x0c56:  je     088afbf9 <+0xca7>
088afbaa +0x0c58:  movl   $0x8c,-0x130(%ebp)
088afbb4 +0x0c62:  lea    -0x130(%ebp),%eax
088afbba +0x0c68:  mov    %eax,0x8(%esp)
088afbbe +0x0c6c:  movl   $"[all activestatus resistance]",0x4(%esp)
088afbc6 +0x0c74:  lea    -0x138(%ebp),%eax
088afbcc +0x0c7a:  mov    %eax,(%esp)
088afbcf +0x0c7d:  call   0889486c <_GLOBAL__I_AVTVARIATION_TAG_NAME+0x107>  ; global constructors keyed to AVTVARIATION_TAG_NAME+0x107
088afbd4 +0x0c82:  lea    -0x140(%ebp),%eax
088afbda +0x0c88:  lea    -0x138(%ebp),%edx
088afbe0 +0x0c8e:  mov    %edx,0x8(%esp)
088afbe4 +0x0c92:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088afbec +0x0c9a:  mov    %eax,(%esp)
088afbef +0x0c9d:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088afbf4 +0x0ca2:  sub    $0x4,%esp
088afbf7 +0x0ca5:  jmp    088afc55 <+0xd03>
088afbf9 +0x0ca7:  movl   $0x0,(%esp)
088afc00 +0x0cae:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afc05 +0x0cb3:  mov    %eax,-0x24(%ebp)
088afc08 +0x0cb6:  movl   $0x0,(%esp)
088afc0f +0x0cbd:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afc14 +0x0cc2:  mov    %eax,-0x28(%ebp)
088afc17 +0x0cc5:  mov    -0x28(%ebp),%eax
088afc1a +0x0cc8:  mov    %eax,0xc(%esp)
088afc1e +0x0ccc:  mov    -0x24(%ebp),%eax
088afc21 +0x0ccf:  mov    %eax,0x8(%esp)
088afc25 +0x0cd3:  movl   $0xf,0x4(%esp)
088afc2d +0x0cdb:  lea    -0x12c(%ebp),%eax
088afc33 +0x0ce1:  mov    %eax,(%esp)
088afc36 +0x0ce4:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088afc3b +0x0ce9:  lea    -0x12c(%ebp),%eax
088afc41 +0x0cef:  mov    %eax,0x4(%esp)
088afc45 +0x0cf3:  mov    0xc(%ebp),%eax
088afc48 +0x0cf6:  mov    %eax,(%esp)
088afc4b +0x0cf9:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088afc50 +0x0cfe:  jmp    088b00a8 <+0x1156>
088afc55 +0x0d03:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088afc5c +0x0d0a:  xor    $0x1,%eax
088afc5f +0x0d0d:  test   %al,%al
088afc61 +0x0d0f:  je     088afcb2 <+0xd60>
088afc63 +0x0d11:  movl   $0x91,-0x108(%ebp)
088afc6d +0x0d1b:  lea    -0x108(%ebp),%eax
088afc73 +0x0d21:  mov    %eax,0x8(%esp)
088afc77 +0x0d25:  movl   $"[hit recovery]",0x4(%esp)
088afc7f +0x0d2d:  lea    -0x110(%ebp),%eax
088afc85 +0x0d33:  mov    %eax,(%esp)
088afc88 +0x0d36:  call   082ae194 <_GLOBAL__I__ZN4CLog5this_E+0xa5bb>  ; global constructors keyed to CLog::this_+0xa5bb
088afc8d +0x0d3b:  lea    -0x118(%ebp),%eax
088afc93 +0x0d41:  lea    -0x110(%ebp),%edx
088afc99 +0x0d47:  mov    %edx,0x8(%esp)
088afc9d +0x0d4b:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088afca5 +0x0d53:  mov    %eax,(%esp)
088afca8 +0x0d56:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088afcad +0x0d5b:  sub    $0x4,%esp
088afcb0 +0x0d5e:  jmp    088afd0e <+0xdbc>
088afcb2 +0x0d60:  movl   $0x0,(%esp)
088afcb9 +0x0d67:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afcbe +0x0d6c:  mov    %eax,-0x24(%ebp)
088afcc1 +0x0d6f:  movl   $0x0,(%esp)
088afcc8 +0x0d76:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afccd +0x0d7b:  mov    %eax,-0x28(%ebp)
088afcd0 +0x0d7e:  mov    -0x28(%ebp),%eax
088afcd3 +0x0d81:  mov    %eax,0xc(%esp)
088afcd7 +0x0d85:  mov    -0x24(%ebp),%eax
088afcda +0x0d88:  mov    %eax,0x8(%esp)
088afcde +0x0d8c:  movl   $0x10,0x4(%esp)
088afce6 +0x0d94:  lea    -0x104(%ebp),%eax
088afcec +0x0d9a:  mov    %eax,(%esp)
088afcef +0x0d9d:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088afcf4 +0x0da2:  lea    -0x104(%ebp),%eax
088afcfa +0x0da8:  mov    %eax,0x4(%esp)
088afcfe +0x0dac:  mov    0xc(%ebp),%eax
088afd01 +0x0daf:  mov    %eax,(%esp)
088afd04 +0x0db2:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088afd09 +0x0db7:  jmp    088b00a8 <+0x1156>
088afd0e +0x0dbc:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088afd15 +0x0dc3:  xor    $0x1,%eax
088afd18 +0x0dc6:  test   %al,%al
088afd1a +0x0dc8:  je     088afd6b <+0xe19>
088afd1c +0x0dca:  movl   $0x96,-0xe0(%ebp)
088afd26 +0x0dd4:  lea    -0xe0(%ebp),%eax
088afd2c +0x0dda:  mov    %eax,0x8(%esp)
088afd30 +0x0dde:  movl   $"[equipment magical defence]",0x4(%esp)
088afd38 +0x0de6:  lea    -0xe8(%ebp),%eax
088afd3e +0x0dec:  mov    %eax,(%esp)
088afd41 +0x0def:  call   082ae166 <_GLOBAL__I__ZN4CLog5this_E+0xa58d>  ; global constructors keyed to CLog::this_+0xa58d
088afd46 +0x0df4:  lea    -0xf0(%ebp),%eax
088afd4c +0x0dfa:  lea    -0xe8(%ebp),%edx
088afd52 +0x0e00:  mov    %edx,0x8(%esp)
088afd56 +0x0e04:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088afd5e +0x0e0c:  mov    %eax,(%esp)
088afd61 +0x0e0f:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088afd66 +0x0e14:  sub    $0x4,%esp
088afd69 +0x0e17:  jmp    088afdd3 <+0xe81>
088afd6b +0x0e19:  movl   $0x0,(%esp)
088afd72 +0x0e20:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afd77 +0x0e25:  movl   $0x0,(%esp)
088afd7e +0x0e2c:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afd83 +0x0e31:  mov    %eax,-0x24(%ebp)
088afd86 +0x0e34:  movl   $0x0,(%esp)
088afd8d +0x0e3b:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afd92 +0x0e40:  mov    %eax,-0x28(%ebp)
088afd95 +0x0e43:  mov    -0x28(%ebp),%eax
088afd98 +0x0e46:  mov    %eax,0xc(%esp)
088afd9c +0x0e4a:  mov    -0x24(%ebp),%eax
088afd9f +0x0e4d:  mov    %eax,0x8(%esp)
088afda3 +0x0e51:  movl   $0x11,0x4(%esp)
088afdab +0x0e59:  lea    -0xdc(%ebp),%eax
088afdb1 +0x0e5f:  mov    %eax,(%esp)
088afdb4 +0x0e62:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088afdb9 +0x0e67:  lea    -0xdc(%ebp),%eax
088afdbf +0x0e6d:  mov    %eax,0x4(%esp)
088afdc3 +0x0e71:  mov    0xc(%ebp),%eax
088afdc6 +0x0e74:  mov    %eax,(%esp)
088afdc9 +0x0e77:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088afdce +0x0e7c:  jmp    088b00a8 <+0x1156>
088afdd3 +0x0e81:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088afdda +0x0e88:  xor    $0x1,%eax
088afddd +0x0e8b:  test   %al,%al
088afddf +0x0e8d:  je     088afe30 <+0xede>
088afde1 +0x0e8f:  movl   $0x9c,-0xb8(%ebp)
088afdeb +0x0e99:  lea    -0xb8(%ebp),%eax
088afdf1 +0x0e9f:  mov    %eax,0x8(%esp)
088afdf5 +0x0ea3:  movl   $"[equipment physical defence]",0x4(%esp)
088afdfd +0x0eab:  lea    -0xc0(%ebp),%eax
088afe03 +0x0eb1:  mov    %eax,(%esp)
088afe06 +0x0eb4:  call   088b02de <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x112>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x112
088afe0b +0x0eb9:  lea    -0xc8(%ebp),%eax
088afe11 +0x0ebf:  lea    -0xc0(%ebp),%edx
088afe17 +0x0ec5:  mov    %edx,0x8(%esp)
088afe1b +0x0ec9:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088afe23 +0x0ed1:  mov    %eax,(%esp)
088afe26 +0x0ed4:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088afe2b +0x0ed9:  sub    $0x4,%esp
088afe2e +0x0edc:  jmp    088afe98 <+0xf46>
088afe30 +0x0ede:  movl   $0x0,(%esp)
088afe37 +0x0ee5:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afe3c +0x0eea:  movl   $0x0,(%esp)
088afe43 +0x0ef1:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afe48 +0x0ef6:  mov    %eax,-0x24(%ebp)
088afe4b +0x0ef9:  movl   $0x0,(%esp)
088afe52 +0x0f00:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088afe57 +0x0f05:  mov    %eax,-0x28(%ebp)
088afe5a +0x0f08:  mov    -0x28(%ebp),%eax
088afe5d +0x0f0b:  mov    %eax,0xc(%esp)
088afe61 +0x0f0f:  mov    -0x24(%ebp),%eax
088afe64 +0x0f12:  mov    %eax,0x8(%esp)
088afe68 +0x0f16:  movl   $0x12,0x4(%esp)
088afe70 +0x0f1e:  lea    -0xb4(%ebp),%eax
088afe76 +0x0f24:  mov    %eax,(%esp)
088afe79 +0x0f27:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088afe7e +0x0f2c:  lea    -0xb4(%ebp),%eax
088afe84 +0x0f32:  mov    %eax,0x4(%esp)
088afe88 +0x0f36:  mov    0xc(%ebp),%eax
088afe8b +0x0f39:  mov    %eax,(%esp)
088afe8e +0x0f3c:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088afe93 +0x0f41:  jmp    088b00a8 <+0x1156>
088afe98 +0x0f46:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088afe9f +0x0f4d:  xor    $0x1,%eax
088afea2 +0x0f50:  test   %al,%al
088afea4 +0x0f52:  je     088afef5 <+0xfa3>
088afea6 +0x0f54:  movl   $0xa2,-0x90(%ebp)
088afeb0 +0x0f5e:  lea    -0x90(%ebp),%eax
088afeb6 +0x0f64:  mov    %eax,0x8(%esp)
088afeba +0x0f68:  movl   $"[jump power]",0x4(%esp)
088afec2 +0x0f70:  lea    -0x98(%ebp),%eax
088afec8 +0x0f76:  mov    %eax,(%esp)
088afecb +0x0f79:  call   082adff6 <_GLOBAL__I__ZN4CLog5this_E+0xa41d>  ; global constructors keyed to CLog::this_+0xa41d
088afed0 +0x0f7e:  lea    -0xa0(%ebp),%eax
088afed6 +0x0f84:  lea    -0x98(%ebp),%edx
088afedc +0x0f8a:  mov    %edx,0x8(%esp)
088afee0 +0x0f8e:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088afee8 +0x0f96:  mov    %eax,(%esp)
088afeeb +0x0f99:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088afef0 +0x0f9e:  sub    $0x4,%esp
088afef3 +0x0fa1:  jmp    088aff51 <+0xfff>
088afef5 +0x0fa3:  movl   $0x0,(%esp)
088afefc +0x0faa:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088aff01 +0x0faf:  mov    %eax,-0x24(%ebp)
088aff04 +0x0fb2:  movl   $0x0,(%esp)
088aff0b +0x0fb9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088aff10 +0x0fbe:  mov    %eax,-0x28(%ebp)
088aff13 +0x0fc1:  mov    -0x28(%ebp),%eax
088aff16 +0x0fc4:  mov    %eax,0xc(%esp)
088aff1a +0x0fc8:  mov    -0x24(%ebp),%eax
088aff1d +0x0fcb:  mov    %eax,0x8(%esp)
088aff21 +0x0fcf:  movl   $0x13,0x4(%esp)
088aff29 +0x0fd7:  lea    -0x8c(%ebp),%eax
088aff2f +0x0fdd:  mov    %eax,(%esp)
088aff32 +0x0fe0:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088aff37 +0x0fe5:  lea    -0x8c(%ebp),%eax
088aff3d +0x0feb:  mov    %eax,0x4(%esp)
088aff41 +0x0fef:  mov    0xc(%ebp),%eax
088aff44 +0x0ff2:  mov    %eax,(%esp)
088aff47 +0x0ff5:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088aff4c +0x0ffa:  jmp    088b00a8 <+0x1156>
088aff51 +0x0fff:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088aff58 +0x1006:  xor    $0x1,%eax
088aff5b +0x1009:  test   %al,%al
088aff5d +0x100b:  je     088aff9f <+0x104d>
088aff5f +0x100d:  movl   $0xa7,-0x68(%ebp)
088aff66 +0x1014:  lea    -0x68(%ebp),%eax
088aff69 +0x1017:  mov    %eax,0x8(%esp)
088aff6d +0x101b:  movl   $"[physical critical hit]",0x4(%esp)
088aff75 +0x1023:  lea    -0x70(%ebp),%eax
088aff78 +0x1026:  mov    %eax,(%esp)
088aff7b +0x1029:  call   082ae0ae <_GLOBAL__I__ZN4CLog5this_E+0xa4d5>  ; global constructors keyed to CLog::this_+0xa4d5
088aff80 +0x102e:  lea    -0x78(%ebp),%eax
088aff83 +0x1031:  lea    -0x70(%ebp),%edx
088aff86 +0x1034:  mov    %edx,0x8(%esp)
088aff8a +0x1038:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088aff92 +0x1040:  mov    %eax,(%esp)
088aff95 +0x1043:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088aff9a +0x1048:  sub    $0x4,%esp
088aff9d +0x104b:  jmp    088afff5 <+0x10a3>
088aff9f +0x104d:  movl   $0x0,(%esp)
088affa6 +0x1054:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
088affab +0x1059:  fstps  -0x20(%ebp)
088affae +0x105c:  movl   $0x0,(%esp)
088affb5 +0x1063:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088affba +0x1068:  mov    %eax,-0x28(%ebp)
088affbd +0x106b:  mov    -0x28(%ebp),%eax
088affc0 +0x106e:  mov    %eax,0xc(%esp)
088affc4 +0x1072:  mov    -0x20(%ebp),%eax
088affc7 +0x1075:  mov    %eax,0x8(%esp)
088affcb +0x1079:  movl   $0x14,0x4(%esp)
088affd3 +0x1081:  lea    -0x64(%ebp),%eax
088affd6 +0x1084:  mov    %eax,(%esp)
088affd9 +0x1087:  call   088b021a <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x4e>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x4e
088affde +0x108c:  lea    -0x64(%ebp),%eax
088affe1 +0x108f:  mov    %eax,0x4(%esp)
088affe5 +0x1093:  mov    0xc(%ebp),%eax
088affe8 +0x1096:  mov    %eax,(%esp)
088affeb +0x1099:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088afff0 +0x109e:  jmp    088b00a8 <+0x1156>
088afff5 +0x10a3:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088afffc +0x10aa:  xor    $0x1,%eax
088affff +0x10ad:  test   %al,%al
088b0001 +0x10af:  je     088b0043 <+0x10f1>
088b0003 +0x10b1:  movl   $0xac,-0x40(%ebp)
088b000a +0x10b8:  lea    -0x40(%ebp),%eax
088b000d +0x10bb:  mov    %eax,0x8(%esp)
088b0011 +0x10bf:  movl   $"[magical critical hit]",0x4(%esp)
088b0019 +0x10c7:  lea    -0x48(%ebp),%eax
088b001c +0x10ca:  mov    %eax,(%esp)
088b001f +0x10cd:  call   082ae292 <_GLOBAL__I__ZN4CLog5this_E+0xa6b9>  ; global constructors keyed to CLog::this_+0xa6b9
088b0024 +0x10d2:  lea    -0x50(%ebp),%eax
088b0027 +0x10d5:  lea    -0x48(%ebp),%edx
088b002a +0x10d8:  mov    %edx,0x8(%esp)
088b002e +0x10dc:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__lookup,0x4(%esp)
088b0036 +0x10e4:  mov    %eax,(%esp)
088b0039 +0x10e7:  call   080f1600 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x682>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x682
088b003e +0x10ec:  sub    $0x4,%esp
088b0041 +0x10ef:  jmp    088b0096 <+0x1144>
088b0043 +0x10f1:  movl   $0x0,(%esp)
088b004a +0x10f8:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
088b004f +0x10fd:  fstps  -0x20(%ebp)
088b0052 +0x1100:  movl   $0x0,(%esp)
088b0059 +0x1107:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b005e +0x110c:  mov    %eax,-0x28(%ebp)
088b0061 +0x110f:  mov    -0x28(%ebp),%eax
088b0064 +0x1112:  mov    %eax,0xc(%esp)
088b0068 +0x1116:  mov    -0x20(%ebp),%eax
088b006b +0x1119:  mov    %eax,0x8(%esp)
088b006f +0x111d:  movl   $0x15,0x4(%esp)
088b0077 +0x1125:  lea    -0x3c(%ebp),%eax
088b007a +0x1128:  mov    %eax,(%esp)
088b007d +0x112b:  call   088b021a <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x4e>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x4e
088b0082 +0x1130:  lea    -0x3c(%ebp),%eax
088b0085 +0x1133:  mov    %eax,0x4(%esp)
088b0089 +0x1137:  mov    0xc(%ebp),%eax
088b008c +0x113a:  mov    %eax,(%esp)
088b008f +0x113d:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088b0094 +0x1142:  jmp    088b00a8 <+0x1156>
088b0096 +0x1144:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088b009d +0x114b:  test   %al,%al
088b009f +0x114d:  je     088b00a8 <+0x1156>
088b00a1 +0x114f:  mov    $0x0,%eax
088b00a6 +0x1154:  jmp    088b00d4 <+0x1182>
088b00a8 +0x1156:  movzbl &_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited,%eax
088b00af +0x115d:  xor    $0x1,%eax
088b00b2 +0x1160:  test   %al,%al
088b00b4 +0x1162:  je     088b00ce <+0x117c>
088b00b6 +0x1164:  movl   $&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE11__init_lock,(%esp)
088b00bd +0x116b:  call   08ad3586 <_ZN8SpinLock5leaveEv>  ; SpinLock::leave()
088b00c2 +0x1170:  movb   $0x1,&_ZZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSsE8__inited
088b00c9 +0x1177:  jmp    088aef74 <+0x22>
088b00ce +0x117c:  nop
088b00cf +0x117d:  mov    $0x1,%eax
088b00d4 +0x1182:  lea    -0xc(%ebp),%esp
088b00d7 +0x1185:  add    $0x0,%esp
088b00da +0x1188:  pop    %ebx
088b00db +0x1189:  pop    %esi
088b00dc +0x118a:  pop    %edi
088b00dd +0x118b:  pop    %ebp
088b00de +0x118c:  ret
088b00df +0x118d:  nop
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::parseAbility @ 0x88aef52

/* ARAD::SCRIPT::AvatarFixedHiddenOption::parseAbility(std::vector<STAvatarHiddenAbilityVariation,
   std::allocator<STAvatarHiddenAbilityVariation> >&, std::string&) */

undefined4 __thiscall
ARAD::SCRIPT::AvatarFixedHiddenOption::parseAbility
          (AvatarFixedHiddenOption *this,vector *param_1,string *param_2)

{
  char cVar1;
  int iVar2;
  longdouble lVar3;
  _Rb_tree_const_iterator<std::pair<char_const*const,int>> local_388 [4];
  _Rb_tree_iterator local_384 [4];
  undefined4 local_380;
  _Rb_tree_const_iterator<std::pair<char_const*const,int>> local_37c [4];
  map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>> local_378 [4];
  pair local_374 [8];
  pair<char_const*const,int> local_36c [8];
  int local_364;
  STAvatarHiddenAbilityVariation local_360 [20];
  pair local_34c [8];
  pair<char_const*const,int> local_344 [8];
  int local_33c;
  STAvatarHiddenAbilityVariation local_338 [20];
  pair local_324 [8];
  pair<char_const*const,int> local_31c [8];
  int local_314;
  STAvatarHiddenAbilityVariation local_310 [20];
  pair local_2fc [8];
  pair<char_const*const,int> local_2f4 [8];
  int local_2ec;
  STAvatarHiddenAbilityVariation local_2e8 [20];
  pair local_2d4 [8];
  pair<char_const*const,int> local_2cc [8];
  int local_2c4;
  STAvatarHiddenAbilityVariation local_2c0 [20];
  pair local_2ac [8];
  pair<char_const*const,int> local_2a4 [8];
  int local_29c;
  STAvatarHiddenAbilityVariation local_298 [20];
  pair local_284 [8];
  pair<char_const*const,int> local_27c [8];
  int local_274;
  STAvatarHiddenAbilityVariation local_270 [20];
  pair local_25c [8];
  pair<char_const*const,int> local_254 [8];
  int local_24c;
  STAvatarHiddenAbilityVariation local_248 [20];
  pair local_234 [8];
  pair<char_const*const,int> local_22c [8];
  int local_224;
  STAvatarHiddenAbilityVariation local_220 [20];
  pair local_20c [8];
  pair<char_const*const,int> local_204 [8];
  int local_1fc;
  STAvatarHiddenAbilityVariation local_1f8 [20];
  pair local_1e4 [8];
  pair<char_const*const,int> local_1dc [8];
  int local_1d4;
  STAvatarHiddenAbilityVariation local_1d0 [20];
  pair local_1bc [8];
  pair<char_const*const,int> local_1b4 [8];
  int local_1ac;
  STAvatarHiddenAbilityVariation local_1a8 [20];
  pair local_194 [8];
  pair<char_const*const,int> local_18c [8];
  int local_184;
  STAvatarHiddenAbilityVariation local_180 [20];
  pair local_16c [8];
  pair<char_const*const,int> local_164 [8];
  int local_15c;
  STAvatarHiddenAbilityVariation local_158 [20];
  pair local_144 [8];
  pair<char_const*const,int> local_13c [8];
  int local_134;
  STAvatarHiddenAbilityVariation local_130 [20];
  pair local_11c [8];
  pair<char_const*const,int> local_114 [8];
  int local_10c;
  STAvatarHiddenAbilityVariation local_108 [20];
  pair local_f4 [8];
  pair<char_const*const,int> local_ec [8];
  int local_e4;
  STAvatarHiddenAbilityVariation local_e0 [20];
  pair local_cc [8];
  pair<char_const*const,int> local_c4 [8];
  int local_bc;
  STAvatarHiddenAbilityVariation local_b8 [20];
  pair local_a4 [8];
  pair<char_const*const,int> local_9c [8];
  int local_94;
  STAvatarHiddenAbilityVariation local_90 [20];
  pair local_7c [8];
  pair<char_const*const,int> local_74 [8];
  int local_6c;
  STAvatarHiddenAbilityVariation local_68 [20];
  pair local_54 [8];
  pair<char_const*const,int> local_4c [8];
  int local_44;
  STAvatarHiddenAbilityVariation local_40 [20];
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  
  local_2c = 0;
  local_28 = 0;
  local_24 = 0.0;
LAB_088aef74:
  do {
    if ((parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
         ::__lookup == '\0') &&
       (iVar2 = __cxa_guard_acquire(&parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                                     ::__lookup), iVar2 != 0)) {
                    /* try { // try from 088aefa1 to 088aefa5 has its CatchHandler @ 088aefd1 */
      std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::map
                ((map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>> *)
                 parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                 ::__lookup);
      __cxa_guard_release(&parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                           ::__lookup);
      __cxa_atexit(std::
                   map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
                   ~map,parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                        ::__lookup,&__dso_handle);
    }
    if ((parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
         ::__init_lock == '\0') &&
       (iVar2 = __cxa_guard_acquire(&parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                                     ::__init_lock), iVar2 != 0)) {
                    /* try { // try from 088af01e to 088af022 has its CatchHandler @ 088af04e */
      SpinLock::SpinLock((SpinLock *)
                         &parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                          ::__init_lock);
      __cxa_guard_release(&parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                           ::__init_lock);
      __cxa_atexit(SpinLock::~SpinLock,
                   &parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                    ::__init_lock,&__dso_handle);
    }
    if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
        ::__inited == '\0') {
      SpinLock::enter((SpinLock *)
                      &parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                       ::__init_lock);
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\0') {
        SpinLock::leave((SpinLock *)
                        &parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                         ::__init_lock);
        goto LAB_088aef74;
      }
      local_20 = 0;
    }
    else {
      local_380 = std::string::c_str(param_2);
      std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::find
                ((char **)local_384);
      std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::_Rb_tree_const_iterator
                (local_388,local_384);
      std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::end
                (local_378);
      std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::_Rb_tree_const_iterator
                (local_37c,(_Rb_tree_iterator *)local_378);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::operator!=
                        (local_388,(_Rb_tree_const_iterator *)local_37c);
      if (cVar1 == '\0') {
        local_20 = 0xffffffff;
      }
      else {
        iVar2 = std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::operator->(local_388)
        ;
        local_20 = *(undefined4 *)(iVar2 + 4);
      }
    }
    switch(local_20) {
    case 0:
    case 0x46:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_364 = 0x46;
        std::pair<char_const*const,int>::pair<char_const(&)[18],int>
                  (local_36c,"[physical attack]",&local_364);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_374);
        goto switchD_088af17c_caseD_4b;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_360,1,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_360);
      break;
    default:
switchD_088af17c_caseD_1:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\0') {
        return 0;
      }
      break;
    case 0x4b:
switchD_088af17c_caseD_4b:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_33c = 0x4b;
        std::pair<char_const*const,int>::pair<char_const(&)[17],int>
                  (local_344,"[magical attack]",&local_33c);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_34c);
        goto switchD_088af17c_caseD_50;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_338,2,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_338);
      break;
    case 0x50:
switchD_088af17c_caseD_50:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_314 = 0x50;
        std::pair<char_const*const,int>::pair<char_const(&)[19],int>
                  (local_31c,"[physical defense]",&local_314);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_324);
        goto switchD_088af17c_caseD_55;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_310,3,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_310);
      break;
    case 0x55:
switchD_088af17c_caseD_55:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_2ec = 0x55;
        std::pair<char_const*const,int>::pair<char_const(&)[18],int>
                  (local_2f4,"[magical defense]",&local_2ec);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_2fc);
        goto switchD_088af17c_caseD_5a;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_2e8,4,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_2e8);
      break;
    case 0x5a:
switchD_088af17c_caseD_5a:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_2c4 = 0x5a;
        std::pair<char_const*const,int>::pair<char_const(&)[9],int>(local_2cc,"[HP MAX]",&local_2c4)
        ;
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_2d4);
        goto switchD_088af17c_caseD_5f;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_2c0,5,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_2c0);
      break;
    case 0x5f:
switchD_088af17c_caseD_5f:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_29c = 0x5f;
        std::pair<char_const*const,int>::pair<char_const(&)[9],int>(local_2a4,"[MP MAX]",&local_29c)
        ;
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_2ac);
        goto switchD_088af17c_caseD_64;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_298,6,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_298);
      break;
    case 100:
switchD_088af17c_caseD_64:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_274 = 100;
        std::pair<char_const*const,int>::pair<char_const(&)[17],int>
                  (local_27c,"[HP regen speed]",&local_274);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_284);
        goto switchD_088af17c_caseD_69;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_270,7,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_270);
      break;
    case 0x69:
switchD_088af17c_caseD_69:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_24c = 0x69;
        std::pair<char_const*const,int>::pair<char_const(&)[17],int>
                  (local_254,"[MP Regen speed]",&local_24c);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_25c);
        goto switchD_088af17c_caseD_6e;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_248,8,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_248);
      break;
    case 0x6e:
switchD_088af17c_caseD_6e:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_224 = 0x6e;
        std::pair<char_const*const,int>::pair<char_const(&)[15],int>
                  (local_22c,"[attack speed]",&local_224);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_234);
        goto switchD_088af17c_caseD_73;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_220,9,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_220);
      break;
    case 0x73:
switchD_088af17c_caseD_73:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_1fc = 0x73;
        std::pair<char_const*const,int>::pair<char_const(&)[13],int>
                  (local_204,"[move speed]",&local_1fc);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_20c);
        goto switchD_088af17c_caseD_78;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_1f8,10,local_28,local_2c)
      ;
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_1f8);
      break;
    case 0x78:
switchD_088af17c_caseD_78:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_1d4 = 0x78;
        std::pair<char_const*const,int>::pair<char_const(&)[13],int>
                  (local_1dc,"[cast speed]",&local_1d4);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_1e4);
        goto switchD_088af17c_caseD_7d;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_1d0,0xb,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_1d0);
      break;
    case 0x7d:
switchD_088af17c_caseD_7d:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_1ac = 0x7d;
        std::pair<char_const*const,int>::pair<char_const(&)[18],int>
                  (local_1b4,"[inventory limit]",&local_1ac);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_1bc);
        goto switchD_088af17c_caseD_82;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_1a8,0xc,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_1a8);
      break;
    case 0x82:
switchD_088af17c_caseD_82:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_184 = 0x82;
        std::pair<char_const*const,int>::pair<char_const(&)[8],int>(local_18c,"[stuck]",&local_184);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_194);
        goto switchD_088af17c_caseD_87;
      }
      lVar3 = (longdouble)ScanFloat((bool *)0x0);
      local_24 = (float)lVar3;
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_180,0xd,local_24,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_180);
      break;
    case 0x87:
switchD_088af17c_caseD_87:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_15c = 0x87;
        std::pair<char_const*const,int>::pair<char_const(&)[19],int>
                  (local_164,"[stuck resistance]",&local_15c);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_16c);
        goto switchD_088af17c_caseD_8c;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_158,0xe,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_158);
      break;
    case 0x8c:
switchD_088af17c_caseD_8c:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_134 = 0x8c;
        std::pair<char_const*const,int>::pair<char_const(&)[30],int>
                  (local_13c,"[all activestatus resistance]",&local_134);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_144);
        goto switchD_088af17c_caseD_91;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_130,0xf,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_130);
      break;
    case 0x91:
switchD_088af17c_caseD_91:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_10c = 0x91;
        std::pair<char_const*const,int>::pair<char_const(&)[15],int>
                  (local_114,"[hit recovery]",&local_10c);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_11c);
        goto switchD_088af17c_caseD_96;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_108,0x10,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_108);
      break;
    case 0x96:
switchD_088af17c_caseD_96:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_e4 = 0x96;
        std::pair<char_const*const,int>::pair<char_const(&)[28],int>
                  (local_ec,"[equipment magical defence]",&local_e4);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_f4);
        goto switchD_088af17c_caseD_9c;
      }
      ScanInt((bool *)0x0);
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_e0,0x11,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_e0);
      break;
    case 0x9c:
switchD_088af17c_caseD_9c:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_bc = 0x9c;
        std::pair<char_const*const,int>::pair<char_const(&)[29],int>
                  (local_c4,"[equipment physical defence]",&local_bc);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_cc);
        goto switchD_088af17c_caseD_a2;
      }
      ScanInt((bool *)0x0);
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_b8,0x12,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_b8);
      break;
    case 0xa2:
switchD_088af17c_caseD_a2:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_94 = 0xa2;
        std::pair<char_const*const,int>::pair<char_const(&)[13],int>
                  (local_9c,"[jump power]",&local_94);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_a4);
        goto switchD_088af17c_caseD_a7;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_90,0x13,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_90);
      break;
    case 0xa7:
switchD_088af17c_caseD_a7:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_6c = 0xa7;
        std::pair<char_const*const,int>::pair<char_const(&)[24],int>
                  (local_74,"[physical critical hit]",&local_6c);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_7c);
        goto switchD_088af17c_caseD_ac;
      }
      lVar3 = (longdouble)ScanFloat((bool *)0x0);
      local_24 = (float)lVar3;
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_68,0x14,local_24,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_68);
      break;
    case 0xac:
switchD_088af17c_caseD_ac:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_44 = 0xac;
        std::pair<char_const*const,int>::pair<char_const(&)[23],int>
                  (local_4c,"[magical critical hit]",&local_44);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_54);
        goto switchD_088af17c_caseD_1;
      }
      lVar3 = (longdouble)ScanFloat((bool *)0x0);
      local_24 = (float)lVar3;
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_40,0x15,local_24,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_40);
    }
    if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
        ::__inited == '\x01') {
      return 1;
    }
    SpinLock::leave((SpinLock *)
                    &parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                     ::__init_lock);
    parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
    ::__inited = '\x01';
  } while( true );
}
```
