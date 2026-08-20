# operator()

`_ZN4ARAD13FnRewardLetheclEimsj`

`ARAD::FnRewardLethe::operator()(int, unsigned long, short, unsigned int)`

| 类 | 地址 |
|---|---|
| `ARAD::FnRewardLethe` | `0x08194ee2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08194ee2  _ZN4ARAD13FnRewardLetheclEimsj
#           ARAD::FnRewardLethe::operator()(int, unsigned long, short, unsigned int)
# range [0x08194ee2, 0x0819533f]
08194ee2 +0x000:  push   %ebp
08194ee3 +0x001:  mov    %esp,%ebp
08194ee5 +0x003:  push   %edi
08194ee6 +0x004:  push   %esi
08194ee7 +0x005:  push   %ebx
08194ee8 +0x006:  sub    $0x1dc,%esp
08194eee +0x00c:  mov    0x14(%ebp),%eax
08194ef1 +0x00f:  mov    %ax,-0x1ac(%ebp)
08194ef8 +0x016:  mov    0x8(%ebp),%eax
08194efb +0x019:  mov    (%eax),%eax
08194efd +0x01b:  test   %eax,%eax
08194eff +0x01d:  je     08194f1a <+0x38>
08194f01 +0x01f:  mov    0x8(%ebp),%eax
08194f04 +0x022:  mov    (%eax),%eax
08194f06 +0x024:  movl   $0xffffffff,0x4(%esp)
08194f0e +0x02c:  mov    %eax,(%esp)
08194f11 +0x02f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08194f16 +0x034:  test   %eax,%eax
08194f18 +0x036:  jne    08194f21 <+0x3f>
08194f1a +0x038:  mov    $0x1,%eax
08194f1f +0x03d:  jmp    08194f26 <+0x44>
08194f21 +0x03f:  mov    $0x0,%eax
08194f26 +0x044:  test   %al,%al
08194f28 +0x046:  je     08194f34 <+0x52>
08194f2a +0x048:  mov    $0x0,%ebx
08194f2f +0x04d:  jmp    08195332 <+0x450>
08194f34 +0x052:  lea    -0x9d(%ebp),%eax
08194f3a +0x058:  mov    %eax,(%esp)
08194f3d +0x05b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08194f42 +0x060:  movswl -0x1ac(%ebp),%eax
08194f49 +0x067:  lea    -0x9d(%ebp),%edx
08194f4f +0x06d:  mov    %edx,0x8(%esp)
08194f53 +0x071:  mov    %eax,0x4(%esp)
08194f57 +0x075:  mov    0x10(%ebp),%eax
08194f5a +0x078:  mov    %eax,(%esp)
08194f5d +0x07b:  call   08197375 <_ZN4ARAD9ARAD_ITEM14arad_make_itemEmiR10Inven_Item>  ; ARAD::ARAD_ITEM::arad_make_item(unsigned long, int, Inven_Item&)
08194f62 +0x080:  xor    $0x1,%eax
08194f65 +0x083:  test   %al,%al
08194f67 +0x085:  je     08194f73 <+0x91>
08194f69 +0x087:  mov    $0x0,%ebx
08194f6e +0x08c:  jmp    08195332 <+0x450>
08194f73 +0x091:  lea    -0x19d(%ebp),%edx
08194f79 +0x097:  mov    $0x100,%ebx
08194f7e +0x09c:  mov    $0x0,%eax
08194f83 +0x0a1:  mov    %edx,%ecx
08194f85 +0x0a3:  and    $0x1,%ecx
08194f88 +0x0a6:  test   %ecx,%ecx
08194f8a +0x0a8:  je     08194f94 <+0xb2>
08194f8c +0x0aa:  mov    %al,(%edx)
08194f8e +0x0ac:  add    $0x1,%edx
08194f91 +0x0af:  sub    $0x1,%ebx
08194f94 +0x0b2:  mov    %edx,%ecx
08194f96 +0x0b4:  and    $0x2,%ecx
08194f99 +0x0b7:  test   %ecx,%ecx
08194f9b +0x0b9:  je     08194fa6 <+0xc4>
08194f9d +0x0bb:  mov    %ax,(%edx)
08194fa0 +0x0be:  add    $0x2,%edx
08194fa3 +0x0c1:  sub    $0x2,%ebx
08194fa6 +0x0c4:  mov    %ebx,%ecx
08194fa8 +0x0c6:  shr    $0x2,%ecx
08194fab +0x0c9:  mov    %edx,%edi
08194fad +0x0cb:  rep stos %eax,%es:(%edi)
08194faf +0x0cd:  mov    %edi,%edx
08194fb1 +0x0cf:  mov    %ebx,%ecx
08194fb3 +0x0d1:  and    $0x2,%ecx
08194fb6 +0x0d4:  test   %ecx,%ecx
08194fb8 +0x0d6:  je     08194fc0 <+0xde>
08194fba +0x0d8:  mov    %ax,(%edx)
08194fbd +0x0db:  add    $0x2,%edx
08194fc0 +0x0de:  mov    %ebx,%ecx
08194fc2 +0x0e0:  and    $0x1,%ecx
08194fc5 +0x0e3:  test   %ecx,%ecx
08194fc7 +0x0e5:  je     08194fce <+0xec>
08194fc9 +0x0e7:  mov    %al,(%edx)
08194fcb +0x0e9:  add    $0x1,%edx
08194fce +0x0ec:  lea    -0x31(%ebp),%eax
08194fd1 +0x0ef:  mov    $0x15,%edx
08194fd6 +0x0f4:  mov    $0x0,%ecx
08194fdb +0x0f9:  mov    %eax,%ebx
08194fdd +0x0fb:  and    $0x1,%ebx
08194fe0 +0x0fe:  test   %ebx,%ebx
08194fe2 +0x100:  je     08194fec <+0x10a>
08194fe4 +0x102:  mov    %cl,(%eax)
08194fe6 +0x104:  add    $0x1,%eax
08194fe9 +0x107:  sub    $0x1,%edx
08194fec +0x10a:  mov    %eax,%ebx
08194fee +0x10c:  and    $0x2,%ebx
08194ff1 +0x10f:  test   %ebx,%ebx
08194ff3 +0x111:  je     08194ffe <+0x11c>
08194ff5 +0x113:  mov    %cx,(%eax)
08194ff8 +0x116:  add    $0x2,%eax
08194ffb +0x119:  sub    $0x2,%edx
08194ffe +0x11c:  mov    %edx,%esi
08195000 +0x11e:  and    $0xfffffffc,%esi
08195003 +0x121:  mov    $0x0,%ebx
08195008 +0x126:  mov    %ecx,(%eax,%ebx,1)
0819500b +0x129:  add    $0x4,%ebx
0819500e +0x12c:  cmp    %esi,%ebx
08195010 +0x12e:  jb     08195008 <+0x126>
08195012 +0x130:  add    %ebx,%eax
08195014 +0x132:  mov    %edx,%ebx
08195016 +0x134:  and    $0x2,%ebx
08195019 +0x137:  test   %ebx,%ebx
0819501b +0x139:  je     08195023 <+0x141>
0819501d +0x13b:  mov    %cx,(%eax)
08195020 +0x13e:  add    $0x2,%eax
08195023 +0x141:  and    $0x1,%edx
08195026 +0x144:  test   %edx,%edx
08195028 +0x146:  je     0819502f <+0x14d>
0819502a +0x148:  mov    %cl,(%eax)
0819502c +0x14a:  add    $0x1,%eax
0819502f +0x14d:  cmpl   $0x60,0xc(%ebp)
08195033 +0x151:  jne    081950b0 <+0x1ce>
08195035 +0x153:  movl   $0x0,0xc(%esp)
0819503d +0x15b:  movl   $"2012_soccer_goldmedal_title",0x8(%esp)
08195045 +0x163:  movl   $0x4,0x4(%esp)
0819504d +0x16b:  movl   $&g_scriptStringManager_,(%esp)
08195054 +0x172:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08195059 +0x177:  movl   $0x14,0x8(%esp)
08195061 +0x17f:  mov    %eax,0x4(%esp)
08195065 +0x183:  lea    -0x31(%ebp),%eax
08195068 +0x186:  mov    %eax,(%esp)
0819506b +0x189:  call   0807d8d0 <_init+0x1c8>
08195070 +0x18e:  movl   $0x0,0xc(%esp)
08195078 +0x196:  movl   $"2012_soccer_goldmedal_mail",0x8(%esp)
08195080 +0x19e:  movl   $0x4,0x4(%esp)
08195088 +0x1a6:  movl   $&g_scriptStringManager_,(%esp)
0819508f +0x1ad:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08195094 +0x1b2:  movl   $0xff,0x8(%esp)
0819509c +0x1ba:  mov    %eax,0x4(%esp)
081950a0 +0x1be:  lea    -0x19d(%ebp),%eax
081950a6 +0x1c4:  mov    %eax,(%esp)
081950a9 +0x1c7:  call   0807d8d0 <_init+0x1c8>
081950ae +0x1cc:  jmp    08195129 <+0x247>
081950b0 +0x1ce:  movl   $0x0,0xc(%esp)
081950b8 +0x1d6:  movl   $"lethe_2012_summer_event_title",0x8(%esp)
081950c0 +0x1de:  movl   $0x4,0x4(%esp)
081950c8 +0x1e6:  movl   $&g_scriptStringManager_,(%esp)
081950cf +0x1ed:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081950d4 +0x1f2:  movl   $0x14,0x8(%esp)
081950dc +0x1fa:  mov    %eax,0x4(%esp)
081950e0 +0x1fe:  lea    -0x31(%ebp),%eax
081950e3 +0x201:  mov    %eax,(%esp)
081950e6 +0x204:  call   0807d8d0 <_init+0x1c8>
081950eb +0x209:  movl   $0x0,0xc(%esp)
081950f3 +0x211:  movl   $"lethe_2012_summer_event_mail",0x8(%esp)
081950fb +0x219:  movl   $0x4,0x4(%esp)
08195103 +0x221:  movl   $&g_scriptStringManager_,(%esp)
0819510a +0x228:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0819510f +0x22d:  movl   $0xff,0x8(%esp)
08195117 +0x235:  mov    %eax,0x4(%esp)
0819511b +0x239:  lea    -0x19d(%ebp),%eax
08195121 +0x23f:  mov    %eax,(%esp)
08195124 +0x242:  call   0807d8d0 <_init+0x1c8>
08195129 +0x247:  mov    0x8(%ebp),%eax
0819512c +0x24a:  mov    (%eax),%eax
0819512e +0x24c:  mov    %eax,(%esp)
08195131 +0x24f:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08195136 +0x254:  mov    %eax,%ebx
08195138 +0x256:  lea    -0x19d(%ebp),%eax
0819513e +0x25c:  mov    %eax,(%esp)
08195141 +0x25f:  call   0807e3b0 <_init+0xca8>
08195146 +0x264:  mov    %eax,%esi
08195148 +0x266:  mov    0x8(%ebp),%eax
0819514b +0x269:  mov    (%eax),%eax
0819514d +0x26b:  movl   $0xffffffff,0x4(%esp)
08195155 +0x273:  mov    %eax,(%esp)
08195158 +0x276:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0819515d +0x27b:  movl   $0x0,0x24(%esp)
08195165 +0x283:  movl   $0x0,0x20(%esp)
0819516d +0x28b:  mov    %ebx,0x1c(%esp)
08195171 +0x28f:  movl   $0xc,0x18(%esp)
08195179 +0x297:  mov    %esi,0x14(%esp)
0819517d +0x29b:  lea    -0x19d(%ebp),%edx
08195183 +0x2a1:  mov    %edx,0x10(%esp)
08195187 +0x2a5:  mov    %eax,0xc(%esp)
0819518b +0x2a9:  movl   $0x0,0x8(%esp)
08195193 +0x2b1:  lea    -0x9d(%ebp),%eax
08195199 +0x2b7:  mov    %eax,0x4(%esp)
0819519d +0x2bb:  lea    -0x31(%ebp),%eax
081951a0 +0x2be:  mov    %eax,(%esp)
081951a3 +0x2c1:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
081951a8 +0x2c6:  mov    %eax,-0x1c(%ebp)
081951ab +0x2c9:  cmpl   $0x0,-0x1c(%ebp)
081951af +0x2cd:  je     08195212 <+0x330>
081951b1 +0x2cf:  movswl -0x1ac(%ebp),%ebx
081951b8 +0x2d6:  mov    0x8(%ebp),%eax
081951bb +0x2d9:  mov    (%eax),%eax
081951bd +0x2db:  movl   $0xffffffff,0x4(%esp)
081951c5 +0x2e3:  mov    %eax,(%esp)
081951c8 +0x2e6:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081951cd +0x2eb:  mov    %ebx,0x1c(%esp)
081951d1 +0x2ef:  mov    0x10(%ebp),%edx
081951d4 +0x2f2:  mov    %edx,0x18(%esp)
081951d8 +0x2f6:  mov    %eax,0x14(%esp)
081951dc +0x2fa:  movl   $"[RewardLethe] send mail fail. (charac:%u, item:%u, cnt:%d)",0x10(%esp)
081951e4 +0x302:  movl   $0x66,0xc(%esp)
081951ec +0x30a:  movl   $&_ZZN4ARAD13FnRewardLetheclEimsjE19__PRETTY_FUNCTION__,0x8(%esp)
081951f4 +0x312:  movl   $"localjapan/Arad_EventPeriodDataManager.cpp",0x4(%esp)
081951fc +0x31a:  movl   $0x1,(%esp)
08195203 +0x321:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08195208 +0x326:  mov    $0x0,%ebx
0819520d +0x32b:  jmp    08195332 <+0x450>
08195212 +0x330:  lea    -0x40(%ebp),%eax
08195215 +0x333:  mov    0xc(%ebp),%edx
08195218 +0x336:  mov    %edx,0x8(%esp)
0819521c +0x33a:  mov    0x8(%ebp),%edx
0819521f +0x33d:  mov    %edx,0x4(%esp)
08195223 +0x341:  mov    %eax,(%esp)
08195226 +0x344:  call   08195340 <_ZN4ARAD13FnRewardLethe9make_dataEi>  ; ARAD::FnRewardLethe::make_data(int)
0819522b +0x349:  sub    $0x4,%esp
0819522e +0x34c:  lea    -0x56(%ebp),%eax
08195231 +0x34f:  mov    %eax,(%esp)
08195234 +0x352:  call   08195cd4 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x94>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x94
08195239 +0x357:  movswl -0x1ac(%ebp),%ecx
08195240 +0x35e:  mov    -0x38(%ebp),%edx
08195243 +0x361:  mov    -0x3c(%ebp),%eax
08195246 +0x364:  mov    0x18(%ebp),%ebx
08195249 +0x367:  mov    %ebx,0x18(%esp)
0819524d +0x36b:  mov    %ecx,0x14(%esp)
08195251 +0x36f:  mov    0x10(%ebp),%ecx
08195254 +0x372:  mov    %ecx,0x10(%esp)
08195258 +0x376:  mov    %edx,0xc(%esp)
0819525c +0x37a:  mov    %eax,0x8(%esp)
08195260 +0x37e:  mov    0xc(%ebp),%eax
08195263 +0x381:  mov    %eax,0x4(%esp)
08195267 +0x385:  lea    -0x56(%ebp),%eax
0819526a +0x388:  mov    %eax,(%esp)
0819526d +0x38b:  call   08195d2c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0xec>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0xec
08195272 +0x390:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08195277 +0x395:  movl   $0x6d,0x8(%esp)
0819527f +0x39d:  movl   $"localjapan/Arad_EventPeriodDataManager.cpp",0x4(%esp)
08195287 +0x3a5:  mov    %eax,(%esp)
0819528a +0x3a8:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0819528f +0x3ad:  movl   $0x1,0x8(%esp)
08195297 +0x3b5:  mov    %eax,0x4(%esp)
0819529b +0x3b9:  lea    -0x60(%ebp),%eax
0819529e +0x3bc:  mov    %eax,(%esp)
081952a1 +0x3bf:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081952a6 +0x3c4:  mov    0x8(%ebp),%eax
081952a9 +0x3c7:  mov    (%eax),%eax
081952ab +0x3c9:  mov    %eax,(%esp)
081952ae +0x3cc:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081952b3 +0x3d1:  mov    %eax,0x8(%esp)
081952b7 +0x3d5:  movl   $0x27,0x4(%esp)
081952bf +0x3dd:  lea    -0x60(%ebp),%eax
081952c2 +0x3e0:  mov    %eax,(%esp)
081952c5 +0x3e3:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
081952ca +0x3e8:  lea    -0x60(%ebp),%eax
081952cd +0x3eb:  mov    %eax,(%esp)
081952d0 +0x3ee:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081952d5 +0x3f3:  movl   $0x16,0x8(%esp)
081952dd +0x3fb:  lea    -0x56(%ebp),%edx
081952e0 +0x3fe:  mov    %edx,0x4(%esp)
081952e4 +0x402:  mov    %eax,(%esp)
081952e7 +0x405:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
081952ec +0x40a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081952f1 +0x40f:  lea    -0x60(%ebp),%edx
081952f4 +0x412:  mov    %edx,0x8(%esp)
081952f8 +0x416:  movl   $0x2,0x4(%esp)
08195300 +0x41e:  mov    %eax,(%esp)
08195303 +0x421:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08195308 +0x426:  mov    %eax,%ebx
0819530a +0x428:  lea    -0x60(%ebp),%eax
0819530d +0x42b:  mov    %eax,(%esp)
08195310 +0x42e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08195315 +0x433:  jmp    08195332 <+0x450>
08195317 +0x435:  mov    %edx,%ebx
08195319 +0x437:  mov    %eax,%esi
0819531b +0x439:  lea    -0x60(%ebp),%eax
0819531e +0x43c:  mov    %eax,(%esp)
08195321 +0x43f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08195326 +0x444:  mov    %esi,%eax
08195328 +0x446:  mov    %ebx,%edx
0819532a +0x448:  mov    %eax,(%esp)
0819532d +0x44b:  call   08ae3750 <_Unwind_Resume>
08195332 +0x450:  mov    %ebx,%eax
08195334 +0x452:  lea    -0xc(%ebp),%esp
08195337 +0x455:  add    $0x0,%esp
0819533a +0x458:  pop    %ebx
0819533b +0x459:  pop    %esi
0819533c +0x45a:  pop    %edi
0819533d +0x45b:  pop    %ebp
0819533e +0x45c:  ret
0819533f +0x45d:  nop
```

## 反编译 C

```c
// ARAD::FnRewardLethe::operator @ 0x8194ee2

/* ARAD::FnRewardLethe::TEMPNAMEPLACEHOLDERVALUE(int, unsigned long, short, unsigned int) */

undefined4 __thiscall
ARAD::FnRewardLethe::operator()
          (FnRewardLethe *this,int param_1,ulong param_2,short param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined4 uVar5;
  Stream *pSVar6;
  CStreamGuard *this_00;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  char local_1a1;
  char local_1a0 [255];
  Inven_Item local_a1 [61];
  CStreamGuard local_64 [10];
  SigSaveRewardEventItem local_5a [22];
  undefined1 local_44 [4];
  uint local_40;
  uint local_3c;
  char local_35;
  char local_34 [20];
  int local_20;
  
  bVar12 = 0;
  if (*(int *)this != 0) {
    iVar3 = CUser::get_charac_no(*(CUser **)this,-1);
    if (iVar3 != 0) {
      bVar11 = false;
      goto LAB_08194f26;
    }
  }
  bVar11 = true;
LAB_08194f26:
  if (bVar11) {
    uVar9 = 0;
  }
  else {
    Inven_Item::Inven_Item(local_a1);
    cVar2 = ARAD_ITEM::arad_make_item(param_2,(int)param_3,local_a1);
    if (cVar2 == '\x01') {
      pcVar8 = &local_1a1;
      uVar10 = 0x100;
      bVar11 = ((uint)pcVar8 & 1) != 0;
      if (bVar11) {
        local_1a1 = '\0';
        pcVar8 = local_1a0;
        uVar10 = 0xff;
      }
      if (((uint)pcVar8 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
        uVar10 = uVar10 - 2;
      }
      for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
      }
      if ((uVar10 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
      }
      if (bVar11) {
        *pcVar8 = '\0';
      }
      pcVar8 = &local_35;
      uVar10 = 0x15;
      bVar11 = ((uint)pcVar8 & 1) != 0;
      if (bVar11) {
        local_35 = '\0';
        pcVar8 = local_34;
        uVar10 = 0x14;
      }
      if (((uint)pcVar8 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
        uVar10 = uVar10 - 2;
      }
      uVar7 = 0;
      do {
        pcVar1 = pcVar8 + uVar7;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        uVar7 = uVar7 + 4;
      } while (uVar7 < (uVar10 & 0xfffffffc));
      pcVar8 = pcVar8 + uVar7;
      if ((uVar10 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
      }
      if (!bVar11) {
        *pcVar8 = '\0';
      }
      if (param_1 == 0x60) {
        pcVar8 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "2012_soccer_goldmedal_title",(bool *)0x0);
        strncpy(&local_35,pcVar8,0x14);
        pcVar8 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "2012_soccer_goldmedal_mail",(bool *)0x0);
        strncpy(&local_1a1,pcVar8,0xff);
      }
      else {
        pcVar8 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "lethe_2012_summer_event_title",(bool *)0x0);
        strncpy(&local_35,pcVar8,0x14);
        pcVar8 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "lethe_2012_summer_event_mail",(bool *)0x0);
        strncpy(&local_1a1,pcVar8,0xff);
      }
      uVar9 = CUser::GetServerGroup(*(CUser **)this);
      sVar4 = strlen(&local_1a1);
      uVar5 = CUser::get_charac_no(*(CUser **)this,-1);
      local_20 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                           (&local_35,local_a1,0,uVar5,&local_1a1,sVar4,0xc,uVar9,0,0);
      if (local_20 == 0) {
        make_data((int)local_44);
        arad::SigSaveRewardEventItem::SigSaveRewardEventItem(local_5a);
        arad::SigSaveRewardEventItem::set
                  (local_5a,param_1,local_40,local_3c,param_2,param_3,param_4);
        pSVar6 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,
                                     "localjapan/Arad_EventPeriodDataManager.cpp",0x6d);
        CStreamGuard::CStreamGuard(local_64,pSVar6,true);
        uVar9 = CUser::GetUID(*(CUser **)this);
                    /* try { // try from 081952c5 to 08195307 has its CatchHandler @ 08195317 */
        DISPATCHER::make_internal_stream_jpn(local_64,0x27,uVar9);
        this_00 = (CStreamGuard *)CStreamGuard::operator->(local_64);
        CStreamGuard::put_binary(this_00,local_5a,0x16);
        uVar9 = MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_64);
        CStreamGuard::~CStreamGuard(local_64);
      }
      else {
        uVar9 = CUser::get_charac_no(*(CUser **)this,-1);
        LogManager::logFormat
                  (1,"localjapan/Arad_EventPeriodDataManager.cpp",
                   "bool ARAD::FnRewardLethe::operator()(int, itemindex_t, short int, arad_uint32)",
                   0x66,"[RewardLethe] send mail fail. (charac:%u, item:%u, cnt:%d)",uVar9,param_2,
                   (int)param_3);
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0;
    }
  }
  return uVar9;
}
```
