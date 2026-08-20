# Init

`_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv`

`ARAD::DISPATCHER::Arad_InternalDispatcher::Init()`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_InternalDispatcher` | `0x08198598` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08198598  _ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv
#           ARAD::DISPATCHER::Arad_InternalDispatcher::Init()
# range [0x08198598, 0x0819899d]
08198598 +0x000:  push   %ebp
08198599 +0x001:  mov    %esp,%ebp
0819859b +0x003:  push   %ebx
0819859c +0x004:  sub    $0x24,%esp
0819859f +0x007:  movl   $0x0,-0xc(%ebp)
081985a6 +0x00e:  movl   $0x8,(%esp)
081985ad +0x015:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081985b2 +0x01a:  mov    %eax,%ebx
081985b4 +0x01c:  mov    %ebx,%eax
081985b6 +0x01e:  mov    %eax,(%esp)
081985b9 +0x021:  call   0819a46e <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x154>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x154
081985be +0x026:  mov    %ebx,%eax
081985c0 +0x028:  mov    %eax,-0xc(%ebp)
081985c3 +0x02b:  cmpl   $0x0,-0xc(%ebp)
081985c7 +0x02f:  je     081985f8 <+0x60>
081985c9 +0x031:  mov    -0xc(%ebp),%eax
081985cc +0x034:  mov    %eax,(%esp)
081985cf +0x037:  call   0819a3c6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xac>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xac
081985d4 +0x03c:  mov    -0xc(%ebp),%edx
081985d7 +0x03f:  mov    %edx,0x8(%esp)
081985db +0x043:  mov    %eax,0x4(%esp)
081985df +0x047:  mov    0x8(%ebp),%eax
081985e2 +0x04a:  mov    %eax,(%esp)
081985e5 +0x04d:  call   08198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IInterDispatcher*)
081985ea +0x052:  xor    $0x1,%eax
081985ed +0x055:  test   %al,%al
081985ef +0x057:  je     081985f8 <+0x60>
081985f1 +0x059:  mov    $0x1,%eax
081985f6 +0x05e:  jmp    081985fd <+0x65>
081985f8 +0x060:  mov    $0x0,%eax
081985fd +0x065:  test   %al,%al
081985ff +0x067:  je     0819860b <+0x73>
08198601 +0x069:  mov    $0x0,%eax
08198606 +0x06e:  jmp    08198997 <+0x3ff>
0819860b +0x073:  movl   $0x8,(%esp)
08198612 +0x07a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08198617 +0x07f:  mov    %eax,%ebx
08198619 +0x081:  mov    %ebx,%eax
0819861b +0x083:  mov    %eax,(%esp)
0819861e +0x086:  call   0819a4e0 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x1c6>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x1c6
08198623 +0x08b:  mov    %ebx,%eax
08198625 +0x08d:  mov    %eax,-0xc(%ebp)
08198628 +0x090:  cmpl   $0x0,-0xc(%ebp)
0819862c +0x094:  je     0819865d <+0xc5>
0819862e +0x096:  mov    -0xc(%ebp),%eax
08198631 +0x099:  mov    %eax,(%esp)
08198634 +0x09c:  call   0819a3c6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xac>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xac
08198639 +0x0a1:  mov    -0xc(%ebp),%edx
0819863c +0x0a4:  mov    %edx,0x8(%esp)
08198640 +0x0a8:  mov    %eax,0x4(%esp)
08198644 +0x0ac:  mov    0x8(%ebp),%eax
08198647 +0x0af:  mov    %eax,(%esp)
0819864a +0x0b2:  call   08198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IInterDispatcher*)
0819864f +0x0b7:  xor    $0x1,%eax
08198652 +0x0ba:  test   %al,%al
08198654 +0x0bc:  je     0819865d <+0xc5>
08198656 +0x0be:  mov    $0x1,%eax
0819865b +0x0c3:  jmp    08198662 <+0xca>
0819865d +0x0c5:  mov    $0x0,%eax
08198662 +0x0ca:  test   %al,%al
08198664 +0x0cc:  je     08198670 <+0xd8>
08198666 +0x0ce:  mov    $0x0,%eax
0819866b +0x0d3:  jmp    08198997 <+0x3ff>
08198670 +0x0d8:  movl   $0x8,(%esp)
08198677 +0x0df:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0819867c +0x0e4:  mov    %eax,%ebx
0819867e +0x0e6:  mov    %ebx,%eax
08198680 +0x0e8:  mov    %eax,(%esp)
08198683 +0x0eb:  call   0819a552 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x238>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x238
08198688 +0x0f0:  mov    %ebx,%eax
0819868a +0x0f2:  mov    %eax,-0xc(%ebp)
0819868d +0x0f5:  cmpl   $0x0,-0xc(%ebp)
08198691 +0x0f9:  je     081986c2 <+0x12a>
08198693 +0x0fb:  mov    -0xc(%ebp),%eax
08198696 +0x0fe:  mov    %eax,(%esp)
08198699 +0x101:  call   0819a3c6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xac>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xac
0819869e +0x106:  mov    -0xc(%ebp),%edx
081986a1 +0x109:  mov    %edx,0x8(%esp)
081986a5 +0x10d:  mov    %eax,0x4(%esp)
081986a9 +0x111:  mov    0x8(%ebp),%eax
081986ac +0x114:  mov    %eax,(%esp)
081986af +0x117:  call   08198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IInterDispatcher*)
081986b4 +0x11c:  xor    $0x1,%eax
081986b7 +0x11f:  test   %al,%al
081986b9 +0x121:  je     081986c2 <+0x12a>
081986bb +0x123:  mov    $0x1,%eax
081986c0 +0x128:  jmp    081986c7 <+0x12f>
081986c2 +0x12a:  mov    $0x0,%eax
081986c7 +0x12f:  test   %al,%al
081986c9 +0x131:  je     081986d5 <+0x13d>
081986cb +0x133:  mov    $0x0,%eax
081986d0 +0x138:  jmp    08198997 <+0x3ff>
081986d5 +0x13d:  movl   $0x8,(%esp)
081986dc +0x144:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081986e1 +0x149:  mov    %eax,%ebx
081986e3 +0x14b:  mov    %ebx,%eax
081986e5 +0x14d:  mov    %eax,(%esp)
081986e8 +0x150:  call   0819a5c4 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x2aa>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x2aa
081986ed +0x155:  mov    %ebx,%eax
081986ef +0x157:  mov    %eax,-0xc(%ebp)
081986f2 +0x15a:  cmpl   $0x0,-0xc(%ebp)
081986f6 +0x15e:  je     08198727 <+0x18f>
081986f8 +0x160:  mov    -0xc(%ebp),%eax
081986fb +0x163:  mov    %eax,(%esp)
081986fe +0x166:  call   0819a3c6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xac>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xac
08198703 +0x16b:  mov    -0xc(%ebp),%edx
08198706 +0x16e:  mov    %edx,0x8(%esp)
0819870a +0x172:  mov    %eax,0x4(%esp)
0819870e +0x176:  mov    0x8(%ebp),%eax
08198711 +0x179:  mov    %eax,(%esp)
08198714 +0x17c:  call   08198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IInterDispatcher*)
08198719 +0x181:  xor    $0x1,%eax
0819871c +0x184:  test   %al,%al
0819871e +0x186:  je     08198727 <+0x18f>
08198720 +0x188:  mov    $0x1,%eax
08198725 +0x18d:  jmp    0819872c <+0x194>
08198727 +0x18f:  mov    $0x0,%eax
0819872c +0x194:  test   %al,%al
0819872e +0x196:  je     0819873a <+0x1a2>
08198730 +0x198:  mov    $0x0,%eax
08198735 +0x19d:  jmp    08198997 <+0x3ff>
0819873a +0x1a2:  movl   $0x8,(%esp)
08198741 +0x1a9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08198746 +0x1ae:  mov    %eax,%ebx
08198748 +0x1b0:  mov    %ebx,%eax
0819874a +0x1b2:  mov    %eax,(%esp)
0819874d +0x1b5:  call   0819a3fc <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xe2>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xe2
08198752 +0x1ba:  mov    %ebx,%eax
08198754 +0x1bc:  mov    %eax,-0xc(%ebp)
08198757 +0x1bf:  cmpl   $0x0,-0xc(%ebp)
0819875b +0x1c3:  je     0819878c <+0x1f4>
0819875d +0x1c5:  mov    -0xc(%ebp),%eax
08198760 +0x1c8:  mov    %eax,(%esp)
08198763 +0x1cb:  call   0819a3c6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xac>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xac
08198768 +0x1d0:  mov    -0xc(%ebp),%edx
0819876b +0x1d3:  mov    %edx,0x8(%esp)
0819876f +0x1d7:  mov    %eax,0x4(%esp)
08198773 +0x1db:  mov    0x8(%ebp),%eax
08198776 +0x1de:  mov    %eax,(%esp)
08198779 +0x1e1:  call   08198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IInterDispatcher*)
0819877e +0x1e6:  xor    $0x1,%eax
08198781 +0x1e9:  test   %al,%al
08198783 +0x1eb:  je     0819878c <+0x1f4>
08198785 +0x1ed:  mov    $0x1,%eax
0819878a +0x1f2:  jmp    08198791 <+0x1f9>
0819878c +0x1f4:  mov    $0x0,%eax
08198791 +0x1f9:  test   %al,%al
08198793 +0x1fb:  je     0819879f <+0x207>
08198795 +0x1fd:  mov    $0x0,%eax
0819879a +0x202:  jmp    08198997 <+0x3ff>
0819879f +0x207:  movl   $0x8,(%esp)
081987a6 +0x20e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081987ab +0x213:  mov    %eax,%ebx
081987ad +0x215:  mov    %ebx,%eax
081987af +0x217:  mov    %eax,(%esp)
081987b2 +0x21a:  call   0819a636 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x31c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x31c
081987b7 +0x21f:  mov    %ebx,%eax
081987b9 +0x221:  mov    %eax,-0xc(%ebp)
081987bc +0x224:  cmpl   $0x0,-0xc(%ebp)
081987c0 +0x228:  je     081987f1 <+0x259>
081987c2 +0x22a:  mov    -0xc(%ebp),%eax
081987c5 +0x22d:  mov    %eax,(%esp)
081987c8 +0x230:  call   0819a3c6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xac>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xac
081987cd +0x235:  mov    -0xc(%ebp),%edx
081987d0 +0x238:  mov    %edx,0x8(%esp)
081987d4 +0x23c:  mov    %eax,0x4(%esp)
081987d8 +0x240:  mov    0x8(%ebp),%eax
081987db +0x243:  mov    %eax,(%esp)
081987de +0x246:  call   08198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IInterDispatcher*)
081987e3 +0x24b:  xor    $0x1,%eax
081987e6 +0x24e:  test   %al,%al
081987e8 +0x250:  je     081987f1 <+0x259>
081987ea +0x252:  mov    $0x1,%eax
081987ef +0x257:  jmp    081987f6 <+0x25e>
081987f1 +0x259:  mov    $0x0,%eax
081987f6 +0x25e:  test   %al,%al
081987f8 +0x260:  je     08198804 <+0x26c>
081987fa +0x262:  mov    $0x0,%eax
081987ff +0x267:  jmp    08198997 <+0x3ff>
08198804 +0x26c:  movl   $0x8,(%esp)
0819880b +0x273:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08198810 +0x278:  mov    %eax,%ebx
08198812 +0x27a:  mov    %ebx,%eax
08198814 +0x27c:  mov    %eax,(%esp)
08198817 +0x27f:  call   0819a6a8 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x38e>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x38e
0819881c +0x284:  mov    %ebx,%eax
0819881e +0x286:  mov    %eax,-0xc(%ebp)
08198821 +0x289:  cmpl   $0x0,-0xc(%ebp)
08198825 +0x28d:  je     08198856 <+0x2be>
08198827 +0x28f:  mov    -0xc(%ebp),%eax
0819882a +0x292:  mov    %eax,(%esp)
0819882d +0x295:  call   0819a3c6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xac>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xac
08198832 +0x29a:  mov    -0xc(%ebp),%edx
08198835 +0x29d:  mov    %edx,0x8(%esp)
08198839 +0x2a1:  mov    %eax,0x4(%esp)
0819883d +0x2a5:  mov    0x8(%ebp),%eax
08198840 +0x2a8:  mov    %eax,(%esp)
08198843 +0x2ab:  call   08198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IInterDispatcher*)
08198848 +0x2b0:  xor    $0x1,%eax
0819884b +0x2b3:  test   %al,%al
0819884d +0x2b5:  je     08198856 <+0x2be>
0819884f +0x2b7:  mov    $0x1,%eax
08198854 +0x2bc:  jmp    0819885b <+0x2c3>
08198856 +0x2be:  mov    $0x0,%eax
0819885b +0x2c3:  test   %al,%al
0819885d +0x2c5:  je     08198869 <+0x2d1>
0819885f +0x2c7:  mov    $0x0,%eax
08198864 +0x2cc:  jmp    08198997 <+0x3ff>
08198869 +0x2d1:  movl   $0x8,(%esp)
08198870 +0x2d8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08198875 +0x2dd:  mov    %eax,%ebx
08198877 +0x2df:  mov    %ebx,%eax
08198879 +0x2e1:  mov    %eax,(%esp)
0819887c +0x2e4:  call   0819a71a <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x400>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x400
08198881 +0x2e9:  mov    %ebx,%eax
08198883 +0x2eb:  mov    %eax,-0xc(%ebp)
08198886 +0x2ee:  cmpl   $0x0,-0xc(%ebp)
0819888a +0x2f2:  je     081988bb <+0x323>
0819888c +0x2f4:  mov    -0xc(%ebp),%eax
0819888f +0x2f7:  mov    %eax,(%esp)
08198892 +0x2fa:  call   0819a3c6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xac>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xac
08198897 +0x2ff:  mov    -0xc(%ebp),%edx
0819889a +0x302:  mov    %edx,0x8(%esp)
0819889e +0x306:  mov    %eax,0x4(%esp)
081988a2 +0x30a:  mov    0x8(%ebp),%eax
081988a5 +0x30d:  mov    %eax,(%esp)
081988a8 +0x310:  call   08198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IInterDispatcher*)
081988ad +0x315:  xor    $0x1,%eax
081988b0 +0x318:  test   %al,%al
081988b2 +0x31a:  je     081988bb <+0x323>
081988b4 +0x31c:  mov    $0x1,%eax
081988b9 +0x321:  jmp    081988c0 <+0x328>
081988bb +0x323:  mov    $0x0,%eax
081988c0 +0x328:  test   %al,%al
081988c2 +0x32a:  je     081988ce <+0x336>
081988c4 +0x32c:  mov    $0x0,%eax
081988c9 +0x331:  jmp    08198997 <+0x3ff>
081988ce +0x336:  movl   $0x8,(%esp)
081988d5 +0x33d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081988da +0x342:  mov    %eax,%ebx
081988dc +0x344:  mov    %ebx,%eax
081988de +0x346:  mov    %eax,(%esp)
081988e1 +0x349:  call   0819a78c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x472>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x472
081988e6 +0x34e:  mov    %ebx,%eax
081988e8 +0x350:  mov    %eax,-0xc(%ebp)
081988eb +0x353:  cmpl   $0x0,-0xc(%ebp)
081988ef +0x357:  je     08198920 <+0x388>
081988f1 +0x359:  mov    -0xc(%ebp),%eax
081988f4 +0x35c:  mov    %eax,(%esp)
081988f7 +0x35f:  call   0819a3c6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xac>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xac
081988fc +0x364:  mov    -0xc(%ebp),%edx
081988ff +0x367:  mov    %edx,0x8(%esp)
08198903 +0x36b:  mov    %eax,0x4(%esp)
08198907 +0x36f:  mov    0x8(%ebp),%eax
0819890a +0x372:  mov    %eax,(%esp)
0819890d +0x375:  call   08198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IInterDispatcher*)
08198912 +0x37a:  xor    $0x1,%eax
08198915 +0x37d:  test   %al,%al
08198917 +0x37f:  je     08198920 <+0x388>
08198919 +0x381:  mov    $0x1,%eax
0819891e +0x386:  jmp    08198925 <+0x38d>
08198920 +0x388:  mov    $0x0,%eax
08198925 +0x38d:  test   %al,%al
08198927 +0x38f:  je     08198930 <+0x398>
08198929 +0x391:  mov    $0x0,%eax
0819892e +0x396:  jmp    08198997 <+0x3ff>
08198930 +0x398:  movl   $0x8,(%esp)
08198937 +0x39f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0819893c +0x3a4:  mov    %eax,%ebx
0819893e +0x3a6:  mov    %ebx,%eax
08198940 +0x3a8:  mov    %eax,(%esp)
08198943 +0x3ab:  call   0819a7fe <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x4e4>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x4e4
08198948 +0x3b0:  mov    %ebx,%eax
0819894a +0x3b2:  mov    %eax,-0xc(%ebp)
0819894d +0x3b5:  cmpl   $0x0,-0xc(%ebp)
08198951 +0x3b9:  je     08198982 <+0x3ea>
08198953 +0x3bb:  mov    -0xc(%ebp),%eax
08198956 +0x3be:  mov    %eax,(%esp)
08198959 +0x3c1:  call   0819a3c6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xac>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xac
0819895e +0x3c6:  mov    -0xc(%ebp),%edx
08198961 +0x3c9:  mov    %edx,0x8(%esp)
08198965 +0x3cd:  mov    %eax,0x4(%esp)
08198969 +0x3d1:  mov    0x8(%ebp),%eax
0819896c +0x3d4:  mov    %eax,(%esp)
0819896f +0x3d7:  call   08198a02 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IInterDispatcher*)
08198974 +0x3dc:  xor    $0x1,%eax
08198977 +0x3df:  test   %al,%al
08198979 +0x3e1:  je     08198982 <+0x3ea>
0819897b +0x3e3:  mov    $0x1,%eax
08198980 +0x3e8:  jmp    08198987 <+0x3ef>
08198982 +0x3ea:  mov    $0x0,%eax
08198987 +0x3ef:  test   %al,%al
08198989 +0x3f1:  je     08198992 <+0x3fa>
0819898b +0x3f3:  mov    $0x0,%eax
08198990 +0x3f8:  jmp    08198997 <+0x3ff>
08198992 +0x3fa:  mov    $0x1,%eax
08198997 +0x3ff:  add    $0x24,%esp
0819899a +0x402:  pop    %ebx
0819899b +0x403:  pop    %ebp
0819899c +0x404:  ret
0819899d +0x405:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_InternalDispatcher::Init @ 0x8198598

/* ARAD::DISPATCHER::Arad_InternalDispatcher::Init() */

bool __thiscall ARAD::DISPATCHER::Arad_InternalDispatcher::Init(Arad_InternalDispatcher *this)

{
  bool bVar1;
  char cVar2;
  Arad_INTER_kLoadRewardEventItem *this_00;
  undefined4 uVar3;
  Arad_INTER_kSaveServerState *this_01;
  Arad_INTER_kLoadServerState *this_02;
  Arad_INTER_kDeleteServerState *this_03;
  Arad_INTER_kAvatarRoulette *this_04;
  Arad_INTER_kAradJumpingCharacter *this_05;
  Arad_INTER_kAvatarHiddenOptionChange *this_06;
  Arad_INTER_kUseAvatarRecharge *this_07;
  Arad_INTER_kEmblemCompound *this_08;
  Arad_INTER_kAvatarConvert *this_09;
  
  this_00 = operator_new(8);
  Arad_INTER_kLoadRewardEventItem::Arad_INTER_kLoadRewardEventItem(this_00);
  if (this_00 == (Arad_INTER_kLoadRewardEventItem *)0x0) {
LAB_081985f8:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_00);
    cVar2 = _registDispatcher(this,uVar3,this_00);
    if (cVar2 == '\x01') goto LAB_081985f8;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_01 = operator_new(8);
  Arad_INTER_kSaveServerState::Arad_INTER_kSaveServerState(this_01);
  if (this_01 == (Arad_INTER_kSaveServerState *)0x0) {
LAB_0819865d:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_01);
    cVar2 = _registDispatcher(this,uVar3,this_01);
    if (cVar2 == '\x01') goto LAB_0819865d;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_02 = operator_new(8);
  Arad_INTER_kLoadServerState::Arad_INTER_kLoadServerState(this_02);
  if (this_02 == (Arad_INTER_kLoadServerState *)0x0) {
LAB_081986c2:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_02);
    cVar2 = _registDispatcher(this,uVar3,this_02);
    if (cVar2 == '\x01') goto LAB_081986c2;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_03 = operator_new(8);
  Arad_INTER_kDeleteServerState::Arad_INTER_kDeleteServerState(this_03);
  if (this_03 == (Arad_INTER_kDeleteServerState *)0x0) {
LAB_08198727:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_03);
    cVar2 = _registDispatcher(this,uVar3,this_03);
    if (cVar2 == '\x01') goto LAB_08198727;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_04 = operator_new(8);
  Arad_INTER_kAvatarRoulette::Arad_INTER_kAvatarRoulette(this_04);
  if (this_04 == (Arad_INTER_kAvatarRoulette *)0x0) {
LAB_0819878c:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_04);
    cVar2 = _registDispatcher(this,uVar3,this_04);
    if (cVar2 == '\x01') goto LAB_0819878c;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_05 = operator_new(8);
  Arad_INTER_kAradJumpingCharacter::Arad_INTER_kAradJumpingCharacter(this_05);
  if (this_05 == (Arad_INTER_kAradJumpingCharacter *)0x0) {
LAB_081987f1:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_05);
    cVar2 = _registDispatcher(this,uVar3,this_05);
    if (cVar2 == '\x01') goto LAB_081987f1;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_06 = operator_new(8);
  Arad_INTER_kAvatarHiddenOptionChange::Arad_INTER_kAvatarHiddenOptionChange(this_06);
  if (this_06 == (Arad_INTER_kAvatarHiddenOptionChange *)0x0) {
LAB_08198856:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_06);
    cVar2 = _registDispatcher(this,uVar3,this_06);
    if (cVar2 == '\x01') goto LAB_08198856;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_07 = operator_new(8);
  Arad_INTER_kUseAvatarRecharge::Arad_INTER_kUseAvatarRecharge(this_07);
  if (this_07 == (Arad_INTER_kUseAvatarRecharge *)0x0) {
LAB_081988bb:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_07);
    cVar2 = _registDispatcher(this,uVar3,this_07);
    if (cVar2 == '\x01') goto LAB_081988bb;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_08 = operator_new(8);
  Arad_INTER_kEmblemCompound::Arad_INTER_kEmblemCompound(this_08);
  if (this_08 == (Arad_INTER_kEmblemCompound *)0x0) {
LAB_08198920:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_08);
    cVar2 = _registDispatcher(this,uVar3,this_08);
    if (cVar2 == '\x01') goto LAB_08198920;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_09 = operator_new(8);
  Arad_INTER_kAvatarConvert::Arad_INTER_kAvatarConvert(this_09);
  if (this_09 != (Arad_INTER_kAvatarConvert *)0x0) {
    uVar3 = Arad_IInterDispatcher::get_code((Arad_IInterDispatcher *)this_09);
    cVar2 = _registDispatcher(this,uVar3,this_09);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_08198987;
    }
  }
  bVar1 = false;
LAB_08198987:
  return !bVar1;
}
```
