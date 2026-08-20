# send

`_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase`

`Dispatcher_RequestIngameAdvertisement::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestIngameAdvertisement` | `0x081e46c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e46c8  _ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase
#           Dispatcher_RequestIngameAdvertisement::send(CUser*, ParamBase&)
# range [0x081e46c8, 0x081e4b6b]
081e46c8 +0x000:  push   %ebp
081e46c9 +0x001:  mov    %esp,%ebp
081e46cb +0x003:  push   %esi
081e46cc +0x004:  push   %ebx
081e46cd +0x005:  sub    $0x40,%esp
081e46d0 +0x008:  mov    0x10(%ebp),%eax
081e46d3 +0x00b:  mov    %eax,-0x14(%ebp)
081e46d6 +0x00e:  mov    -0x14(%ebp),%eax
081e46d9 +0x011:  mov    0x640(%eax),%eax
081e46df +0x017:  cmp    $0x7fffffff,%eax
081e46e4 +0x01c:  je     081e4b63 <+0x49b>
081e46ea +0x022:  mov    -0x14(%ebp),%eax
081e46ed +0x025:  mov    0x640(%eax),%eax
081e46f3 +0x02b:  test   %eax,%eax
081e46f5 +0x02d:  jne    081e4a9e <+0x3d6>
081e46fb +0x033:  lea    -0x20(%ebp),%eax
081e46fe +0x036:  mov    %eax,(%esp)
081e4701 +0x039:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e4706 +0x03e:  lea    -0x20(%ebp),%eax
081e4709 +0x041:  mov    %eax,(%esp)
081e470c +0x044:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081e4711 +0x049:  movl   $0x1e9,0x8(%esp)
081e4719 +0x051:  movl   $0x1,0x4(%esp)
081e4721 +0x059:  lea    -0x20(%ebp),%eax
081e4724 +0x05c:  mov    %eax,(%esp)
081e4727 +0x05f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e472c +0x064:  movl   $0x1,0x4(%esp)
081e4734 +0x06c:  lea    -0x20(%ebp),%eax
081e4737 +0x06f:  mov    %eax,(%esp)
081e473a +0x072:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e473f +0x077:  mov    -0x14(%ebp),%eax
081e4742 +0x07a:  add    $0x4,%eax
081e4745 +0x07d:  mov    %eax,-0x10(%ebp)
081e4748 +0x080:  mov    -0x10(%ebp),%eax
081e474b +0x083:  mov    (%eax),%eax
081e474d +0x085:  mov    %eax,0x4(%esp)
081e4751 +0x089:  lea    -0x20(%ebp),%eax
081e4754 +0x08c:  mov    %eax,(%esp)
081e4757 +0x08f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e475c +0x094:  mov    -0x14(%ebp),%eax
081e475f +0x097:  movzwl 0x644(%eax),%eax
081e4766 +0x09e:  cwtl
081e4767 +0x09f:  mov    %eax,0x4(%esp)
081e476b +0x0a3:  lea    -0x20(%ebp),%eax
081e476e +0x0a6:  mov    %eax,(%esp)
081e4771 +0x0a9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e4776 +0x0ae:  mov    -0x10(%ebp),%eax
081e4779 +0x0b1:  movzbl 0x337(%eax),%eax
081e4780 +0x0b8:  movsbl %al,%eax
081e4783 +0x0bb:  mov    %eax,0x4(%esp)
081e4787 +0x0bf:  lea    -0x20(%ebp),%eax
081e478a +0x0c2:  mov    %eax,(%esp)
081e478d +0x0c5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e4792 +0x0ca:  mov    -0x10(%ebp),%eax
081e4795 +0x0cd:  add    $0x4,%eax
081e4798 +0x0d0:  mov    %eax,(%esp)
081e479b +0x0d3:  call   0807e3b0 <_init+0xca8>
081e47a0 +0x0d8:  mov    %eax,-0xc(%ebp)
081e47a3 +0x0db:  mov    -0xc(%ebp),%eax
081e47a6 +0x0de:  mov    %eax,0x4(%esp)
081e47aa +0x0e2:  lea    -0x20(%ebp),%eax
081e47ad +0x0e5:  mov    %eax,(%esp)
081e47b0 +0x0e8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e47b5 +0x0ed:  mov    -0x10(%ebp),%eax
081e47b8 +0x0f0:  lea    0x4(%eax),%edx
081e47bb +0x0f3:  mov    -0xc(%ebp),%eax
081e47be +0x0f6:  mov    %eax,0x8(%esp)
081e47c2 +0x0fa:  mov    %edx,0x4(%esp)
081e47c6 +0x0fe:  lea    -0x20(%ebp),%eax
081e47c9 +0x101:  mov    %eax,(%esp)
081e47cc +0x104:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081e47d1 +0x109:  mov    -0x10(%ebp),%eax
081e47d4 +0x10c:  movzbl 0x339(%eax),%eax
081e47db +0x113:  movsbl %al,%eax
081e47de +0x116:  mov    %eax,0x4(%esp)
081e47e2 +0x11a:  lea    -0x20(%ebp),%eax
081e47e5 +0x11d:  mov    %eax,(%esp)
081e47e8 +0x120:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e47ed +0x125:  mov    -0x10(%ebp),%eax
081e47f0 +0x128:  movzbl 0x339(%eax),%eax
081e47f7 +0x12f:  test   %al,%al
081e47f9 +0x131:  jne    081e4920 <+0x258>
081e47ff +0x137:  mov    -0x10(%ebp),%eax
081e4802 +0x13a:  add    $0x33a,%eax
081e4807 +0x13f:  mov    %eax,(%esp)
081e480a +0x142:  call   0807e3b0 <_init+0xca8>
081e480f +0x147:  mov    %eax,-0xc(%ebp)
081e4812 +0x14a:  mov    -0xc(%ebp),%eax
081e4815 +0x14d:  mov    %eax,0x4(%esp)
081e4819 +0x151:  lea    -0x20(%ebp),%eax
081e481c +0x154:  mov    %eax,(%esp)
081e481f +0x157:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e4824 +0x15c:  mov    -0x10(%ebp),%eax
081e4827 +0x15f:  lea    0x33a(%eax),%edx
081e482d +0x165:  mov    -0xc(%ebp),%eax
081e4830 +0x168:  mov    %eax,0x8(%esp)
081e4834 +0x16c:  mov    %edx,0x4(%esp)
081e4838 +0x170:  lea    -0x20(%ebp),%eax
081e483b +0x173:  mov    %eax,(%esp)
081e483e +0x176:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081e4843 +0x17b:  mov    -0x10(%ebp),%eax
081e4846 +0x17e:  movzbl 0x337(%eax),%eax
081e484d +0x185:  test   %al,%al
081e484f +0x187:  jne    081e486e <+0x1a6>
081e4851 +0x189:  mov    -0x10(%ebp),%eax
081e4854 +0x18c:  mov    0x538(%eax),%eax
081e485a +0x192:  mov    %eax,0x4(%esp)
081e485e +0x196:  lea    -0x20(%ebp),%eax
081e4861 +0x199:  mov    %eax,(%esp)
081e4864 +0x19c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e4869 +0x1a1:  jmp    081e4a30 <+0x368>
081e486e +0x1a6:  mov    -0x10(%ebp),%eax
081e4871 +0x1a9:  movzbl 0x337(%eax),%eax
081e4878 +0x1b0:  cmp    $0x1,%al
081e487a +0x1b2:  jne    081e48c5 <+0x1fd>
081e487c +0x1b4:  mov    -0x10(%ebp),%eax
081e487f +0x1b7:  add    $0x439,%eax
081e4884 +0x1bc:  mov    %eax,(%esp)
081e4887 +0x1bf:  call   0807e3b0 <_init+0xca8>
081e488c +0x1c4:  mov    %eax,-0xc(%ebp)
081e488f +0x1c7:  mov    -0xc(%ebp),%eax
081e4892 +0x1ca:  mov    %eax,0x4(%esp)
081e4896 +0x1ce:  lea    -0x20(%ebp),%eax
081e4899 +0x1d1:  mov    %eax,(%esp)
081e489c +0x1d4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e48a1 +0x1d9:  mov    -0x10(%ebp),%eax
081e48a4 +0x1dc:  lea    0x439(%eax),%edx
081e48aa +0x1e2:  mov    -0xc(%ebp),%eax
081e48ad +0x1e5:  mov    %eax,0x8(%esp)
081e48b1 +0x1e9:  mov    %edx,0x4(%esp)
081e48b5 +0x1ed:  lea    -0x20(%ebp),%eax
081e48b8 +0x1f0:  mov    %eax,(%esp)
081e48bb +0x1f3:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081e48c0 +0x1f8:  jmp    081e4a30 <+0x368>
081e48c5 +0x1fd:  mov    -0x10(%ebp),%eax
081e48c8 +0x200:  movzbl 0x337(%eax),%eax
081e48cf +0x207:  cmp    $0x3,%al
081e48d1 +0x209:  jne    081e4a30 <+0x368>
081e48d7 +0x20f:  mov    -0x10(%ebp),%eax
081e48da +0x212:  add    $0x53c,%eax
081e48df +0x217:  mov    %eax,(%esp)
081e48e2 +0x21a:  call   0807e3b0 <_init+0xca8>
081e48e7 +0x21f:  mov    %eax,-0xc(%ebp)
081e48ea +0x222:  mov    -0xc(%ebp),%eax
081e48ed +0x225:  mov    %eax,0x4(%esp)
081e48f1 +0x229:  lea    -0x20(%ebp),%eax
081e48f4 +0x22c:  mov    %eax,(%esp)
081e48f7 +0x22f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e48fc +0x234:  mov    -0x10(%ebp),%eax
081e48ff +0x237:  lea    0x53c(%eax),%edx
081e4905 +0x23d:  mov    -0xc(%ebp),%eax
081e4908 +0x240:  mov    %eax,0x8(%esp)
081e490c +0x244:  mov    %edx,0x4(%esp)
081e4910 +0x248:  lea    -0x20(%ebp),%eax
081e4913 +0x24b:  mov    %eax,(%esp)
081e4916 +0x24e:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081e491b +0x253:  jmp    081e4a30 <+0x368>
081e4920 +0x258:  mov    -0x10(%ebp),%eax
081e4923 +0x25b:  add    $0x36,%eax
081e4926 +0x25e:  mov    %eax,(%esp)
081e4929 +0x261:  call   0807e3b0 <_init+0xca8>
081e492e +0x266:  mov    %eax,-0xc(%ebp)
081e4931 +0x269:  mov    -0xc(%ebp),%eax
081e4934 +0x26c:  mov    %eax,0x4(%esp)
081e4938 +0x270:  lea    -0x20(%ebp),%eax
081e493b +0x273:  mov    %eax,(%esp)
081e493e +0x276:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e4943 +0x27b:  mov    -0x10(%ebp),%eax
081e4946 +0x27e:  lea    0x36(%eax),%edx
081e4949 +0x281:  mov    -0xc(%ebp),%eax
081e494c +0x284:  mov    %eax,0x8(%esp)
081e4950 +0x288:  mov    %edx,0x4(%esp)
081e4954 +0x28c:  lea    -0x20(%ebp),%eax
081e4957 +0x28f:  mov    %eax,(%esp)
081e495a +0x292:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081e495f +0x297:  mov    -0x10(%ebp),%eax
081e4962 +0x29a:  movzbl 0x337(%eax),%eax
081e4969 +0x2a1:  test   %al,%al
081e496b +0x2a3:  jne    081e498a <+0x2c2>
081e496d +0x2a5:  mov    -0x10(%ebp),%eax
081e4970 +0x2a8:  mov    0x234(%eax),%eax
081e4976 +0x2ae:  mov    %eax,0x4(%esp)
081e497a +0x2b2:  lea    -0x20(%ebp),%eax
081e497d +0x2b5:  mov    %eax,(%esp)
081e4980 +0x2b8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e4985 +0x2bd:  jmp    081e4a30 <+0x368>
081e498a +0x2c2:  mov    -0x10(%ebp),%eax
081e498d +0x2c5:  movzbl 0x337(%eax),%eax
081e4994 +0x2cc:  cmp    $0x1,%al
081e4996 +0x2ce:  jne    081e49de <+0x316>
081e4998 +0x2d0:  mov    -0x10(%ebp),%eax
081e499b +0x2d3:  add    $0x135,%eax
081e49a0 +0x2d8:  mov    %eax,(%esp)
081e49a3 +0x2db:  call   0807e3b0 <_init+0xca8>
081e49a8 +0x2e0:  mov    %eax,-0xc(%ebp)
081e49ab +0x2e3:  mov    -0xc(%ebp),%eax
081e49ae +0x2e6:  mov    %eax,0x4(%esp)
081e49b2 +0x2ea:  lea    -0x20(%ebp),%eax
081e49b5 +0x2ed:  mov    %eax,(%esp)
081e49b8 +0x2f0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e49bd +0x2f5:  mov    -0x10(%ebp),%eax
081e49c0 +0x2f8:  lea    0x135(%eax),%edx
081e49c6 +0x2fe:  mov    -0xc(%ebp),%eax
081e49c9 +0x301:  mov    %eax,0x8(%esp)
081e49cd +0x305:  mov    %edx,0x4(%esp)
081e49d1 +0x309:  lea    -0x20(%ebp),%eax
081e49d4 +0x30c:  mov    %eax,(%esp)
081e49d7 +0x30f:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081e49dc +0x314:  jmp    081e4a30 <+0x368>
081e49de +0x316:  mov    -0x10(%ebp),%eax
081e49e1 +0x319:  movzbl 0x337(%eax),%eax
081e49e8 +0x320:  cmp    $0x3,%al
081e49ea +0x322:  jne    081e4a30 <+0x368>
081e49ec +0x324:  mov    -0x10(%ebp),%eax
081e49ef +0x327:  add    $0x238,%eax
081e49f4 +0x32c:  mov    %eax,(%esp)
081e49f7 +0x32f:  call   0807e3b0 <_init+0xca8>
081e49fc +0x334:  mov    %eax,-0xc(%ebp)
081e49ff +0x337:  mov    -0xc(%ebp),%eax
081e4a02 +0x33a:  mov    %eax,0x4(%esp)
081e4a06 +0x33e:  lea    -0x20(%ebp),%eax
081e4a09 +0x341:  mov    %eax,(%esp)
081e4a0c +0x344:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e4a11 +0x349:  mov    -0x10(%ebp),%eax
081e4a14 +0x34c:  lea    0x238(%eax),%edx
081e4a1a +0x352:  mov    -0xc(%ebp),%eax
081e4a1d +0x355:  mov    %eax,0x8(%esp)
081e4a21 +0x359:  mov    %edx,0x4(%esp)
081e4a25 +0x35d:  lea    -0x20(%ebp),%eax
081e4a28 +0x360:  mov    %eax,(%esp)
081e4a2b +0x363:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081e4a30 +0x368:  mov    -0x10(%ebp),%eax
081e4a33 +0x36b:  movzbl 0x338(%eax),%eax
081e4a3a +0x372:  movsbl %al,%eax
081e4a3d +0x375:  mov    %eax,0x4(%esp)
081e4a41 +0x379:  lea    -0x20(%ebp),%eax
081e4a44 +0x37c:  mov    %eax,(%esp)
081e4a47 +0x37f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e4a4c +0x384:  movl   $0x1,0x4(%esp)
081e4a54 +0x38c:  lea    -0x20(%ebp),%eax
081e4a57 +0x38f:  mov    %eax,(%esp)
081e4a5a +0x392:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e4a5f +0x397:  lea    -0x20(%ebp),%eax
081e4a62 +0x39a:  mov    %eax,0x4(%esp)
081e4a66 +0x39e:  mov    0xc(%ebp),%eax
081e4a69 +0x3a1:  mov    %eax,(%esp)
081e4a6c +0x3a4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e4a71 +0x3a9:  jmp    081e4a8e <+0x3c6>
081e4a73 +0x3ab:  mov    %edx,%ebx
081e4a75 +0x3ad:  mov    %eax,%esi
081e4a77 +0x3af:  lea    -0x20(%ebp),%eax
081e4a7a +0x3b2:  mov    %eax,(%esp)
081e4a7d +0x3b5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e4a82 +0x3ba:  mov    %esi,%eax
081e4a84 +0x3bc:  mov    %ebx,%edx
081e4a86 +0x3be:  mov    %eax,(%esp)
081e4a89 +0x3c1:  call   08ae3750 <_Unwind_Resume>
081e4a8e +0x3c6:  lea    -0x20(%ebp),%eax
081e4a91 +0x3c9:  mov    %eax,(%esp)
081e4a94 +0x3cc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e4a99 +0x3d1:  jmp    081e4b64 <+0x49c>
081e4a9e +0x3d6:  lea    -0x2c(%ebp),%eax
081e4aa1 +0x3d9:  mov    %eax,(%esp)
081e4aa4 +0x3dc:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e4aa9 +0x3e1:  lea    -0x2c(%ebp),%eax
081e4aac +0x3e4:  mov    %eax,(%esp)
081e4aaf +0x3e7:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081e4ab4 +0x3ec:  movl   $0x1e9,0x8(%esp)
081e4abc +0x3f4:  movl   $0x1,0x4(%esp)
081e4ac4 +0x3fc:  lea    -0x2c(%ebp),%eax
081e4ac7 +0x3ff:  mov    %eax,(%esp)
081e4aca +0x402:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e4acf +0x407:  movl   $0x0,0x4(%esp)
081e4ad7 +0x40f:  lea    -0x2c(%ebp),%eax
081e4ada +0x412:  mov    %eax,(%esp)
081e4add +0x415:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e4ae2 +0x41a:  mov    -0x14(%ebp),%eax
081e4ae5 +0x41d:  mov    0x640(%eax),%eax
081e4aeb +0x423:  mov    %eax,0x4(%esp)
081e4aef +0x427:  lea    -0x2c(%ebp),%eax
081e4af2 +0x42a:  mov    %eax,(%esp)
081e4af5 +0x42d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e4afa +0x432:  mov    -0x14(%ebp),%eax
081e4afd +0x435:  movzwl 0x644(%eax),%eax
081e4b04 +0x43c:  cwtl
081e4b05 +0x43d:  mov    %eax,0x4(%esp)
081e4b09 +0x441:  lea    -0x2c(%ebp),%eax
081e4b0c +0x444:  mov    %eax,(%esp)
081e4b0f +0x447:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e4b14 +0x44c:  movl   $0x1,0x4(%esp)
081e4b1c +0x454:  lea    -0x2c(%ebp),%eax
081e4b1f +0x457:  mov    %eax,(%esp)
081e4b22 +0x45a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e4b27 +0x45f:  lea    -0x2c(%ebp),%eax
081e4b2a +0x462:  mov    %eax,0x4(%esp)
081e4b2e +0x466:  mov    0xc(%ebp),%eax
081e4b31 +0x469:  mov    %eax,(%esp)
081e4b34 +0x46c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e4b39 +0x471:  jmp    081e4b56 <+0x48e>
081e4b3b +0x473:  mov    %edx,%ebx
081e4b3d +0x475:  mov    %eax,%esi
081e4b3f +0x477:  lea    -0x2c(%ebp),%eax
081e4b42 +0x47a:  mov    %eax,(%esp)
081e4b45 +0x47d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e4b4a +0x482:  mov    %esi,%eax
081e4b4c +0x484:  mov    %ebx,%edx
081e4b4e +0x486:  mov    %eax,(%esp)
081e4b51 +0x489:  call   08ae3750 <_Unwind_Resume>
081e4b56 +0x48e:  lea    -0x2c(%ebp),%eax
081e4b59 +0x491:  mov    %eax,(%esp)
081e4b5c +0x494:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e4b61 +0x499:  jmp    081e4b64 <+0x49c>
081e4b63 +0x49b:  nop
081e4b64 +0x49c:  add    $0x40,%esp
081e4b67 +0x49f:  pop    %ebx
081e4b68 +0x4a0:  pop    %esi
081e4b69 +0x4a1:  pop    %ebp
081e4b6a +0x4a2:  ret
081e4b6b +0x4a3:  nop
```

## 反编译 C

```c
// Dispatcher_RequestIngameAdvertisement::send @ 0x81e46c8

/* Dispatcher_RequestIngameAdvertisement::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RequestIngameAdvertisement::send
          (Dispatcher_RequestIngameAdvertisement *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_30 [12];
  PacketGuard local_24 [12];
  ParamBase *local_18;
  ParamBase *local_14;
  size_t local_10;
  
  local_18 = param_2;
  if (*(int *)(param_2 + 0x640) != 0x7fffffff) {
    if (*(int *)(param_2 + 0x640) == 0) {
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 081e470c to 081e4a70 has its CatchHandler @ 081e4a73 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1e9);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      local_14 = local_18 + 4;
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)local_14);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_24,(int)*(short *)(local_18 + 0x644));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)(char)local_14[0x337]);
      local_10 = strlen((char *)(local_14 + 4));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,(char *)(local_14 + 4),local_10);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)(char)local_14[0x339]);
      if (local_14[0x339] == (ParamBase)0x0) {
        local_10 = strlen((char *)(local_14 + 0x33a));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_14 + 0x33a),local_10);
        if (local_14[0x337] == (ParamBase)0x0) {
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_14 + 0x538));
        }
        else if (local_14[0x337] == (ParamBase)0x1) {
          local_10 = strlen((char *)(local_14 + 0x439));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_24,(char *)(local_14 + 0x439),local_10);
        }
        else if (local_14[0x337] == (ParamBase)0x3) {
          local_10 = strlen((char *)(local_14 + 0x53c));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_24,(char *)(local_14 + 0x53c),local_10);
        }
      }
      else {
        local_10 = strlen((char *)(local_14 + 0x36));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_14 + 0x36),local_10);
        if (local_14[0x337] == (ParamBase)0x0) {
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_14 + 0x234));
        }
        else if (local_14[0x337] == (ParamBase)0x1) {
          local_10 = strlen((char *)(local_14 + 0x135));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_24,(char *)(local_14 + 0x135),local_10);
        }
        else if (local_14[0x337] == (ParamBase)0x3) {
          local_10 = strlen((char *)(local_14 + 0x238));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_24,(char *)(local_14 + 0x238),local_10);
        }
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)(char)local_14[0x338]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send(param_1,local_24);
      PacketGuard::~PacketGuard(local_24);
    }
    else {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 081e4aaf to 081e4b38 has its CatchHandler @ 081e4b3b */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x1e9);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*(int *)(local_18 + 0x640));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_30,(int)*(short *)(local_18 + 0x644));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return;
}
```
