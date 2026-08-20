# dispatch_sig

`_ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci`

`Inter_LoadCharacLinkBonus::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadCharacLinkBonus` | `0x084e1f02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e1f02  _ZN25Inter_LoadCharacLinkBonus12dispatch_sigEP5CUserPci
#           Inter_LoadCharacLinkBonus::dispatch_sig(CUser*, char*, int)
# range [0x084e1f02, 0x084e23a1]
084e1f02 +0x000:  push   %ebp
084e1f03 +0x001:  mov    %esp,%ebp
084e1f05 +0x003:  push   %edi
084e1f06 +0x004:  push   %esi
084e1f07 +0x005:  push   %ebx
084e1f08 +0x006:  sub    $0x1cc,%esp
084e1f0e +0x00c:  movl   $0x0,-0x28(%ebp)
084e1f15 +0x013:  movl   $0x0,-0x24(%ebp)
084e1f1c +0x01a:  lea    -0x1a5(%ebp),%edx
084e1f22 +0x020:  mov    $0x100,%ebx
084e1f27 +0x025:  mov    $0x0,%eax
084e1f2c +0x02a:  mov    %edx,%ecx
084e1f2e +0x02c:  and    $0x1,%ecx
084e1f31 +0x02f:  test   %ecx,%ecx
084e1f33 +0x031:  je     084e1f3d <+0x3b>
084e1f35 +0x033:  mov    %al,(%edx)
084e1f37 +0x035:  add    $0x1,%edx
084e1f3a +0x038:  sub    $0x1,%ebx
084e1f3d +0x03b:  mov    %edx,%ecx
084e1f3f +0x03d:  and    $0x2,%ecx
084e1f42 +0x040:  test   %ecx,%ecx
084e1f44 +0x042:  je     084e1f4f <+0x4d>
084e1f46 +0x044:  mov    %ax,(%edx)
084e1f49 +0x047:  add    $0x2,%edx
084e1f4c +0x04a:  sub    $0x2,%ebx
084e1f4f +0x04d:  mov    %ebx,%ecx
084e1f51 +0x04f:  shr    $0x2,%ecx
084e1f54 +0x052:  mov    %edx,%edi
084e1f56 +0x054:  rep stos %eax,%es:(%edi)
084e1f58 +0x056:  mov    %edi,%edx
084e1f5a +0x058:  mov    %ebx,%ecx
084e1f5c +0x05a:  and    $0x2,%ecx
084e1f5f +0x05d:  test   %ecx,%ecx
084e1f61 +0x05f:  je     084e1f69 <+0x67>
084e1f63 +0x061:  mov    %ax,(%edx)
084e1f66 +0x064:  add    $0x2,%edx
084e1f69 +0x067:  mov    %ebx,%ecx
084e1f6b +0x069:  and    $0x1,%ecx
084e1f6e +0x06c:  test   %ecx,%ecx
084e1f70 +0x06e:  je     084e1f77 <+0x75>
084e1f72 +0x070:  mov    %al,(%edx)
084e1f74 +0x072:  add    $0x1,%edx
084e1f77 +0x075:  lea    -0x3d(%ebp),%eax
084e1f7a +0x078:  mov    $0x15,%edx
084e1f7f +0x07d:  mov    $0x0,%ecx
084e1f84 +0x082:  mov    %eax,%ebx
084e1f86 +0x084:  and    $0x1,%ebx
084e1f89 +0x087:  test   %ebx,%ebx
084e1f8b +0x089:  je     084e1f95 <+0x93>
084e1f8d +0x08b:  mov    %cl,(%eax)
084e1f8f +0x08d:  add    $0x1,%eax
084e1f92 +0x090:  sub    $0x1,%edx
084e1f95 +0x093:  mov    %eax,%ebx
084e1f97 +0x095:  and    $0x2,%ebx
084e1f9a +0x098:  test   %ebx,%ebx
084e1f9c +0x09a:  je     084e1fa7 <+0xa5>
084e1f9e +0x09c:  mov    %cx,(%eax)
084e1fa1 +0x09f:  add    $0x2,%eax
084e1fa4 +0x0a2:  sub    $0x2,%edx
084e1fa7 +0x0a5:  mov    %edx,%esi
084e1fa9 +0x0a7:  and    $0xfffffffc,%esi
084e1fac +0x0aa:  mov    $0x0,%ebx
084e1fb1 +0x0af:  mov    %ecx,(%eax,%ebx,1)
084e1fb4 +0x0b2:  add    $0x4,%ebx
084e1fb7 +0x0b5:  cmp    %esi,%ebx
084e1fb9 +0x0b7:  jb     084e1fb1 <+0xaf>
084e1fbb +0x0b9:  add    %ebx,%eax
084e1fbd +0x0bb:  mov    %edx,%ebx
084e1fbf +0x0bd:  and    $0x2,%ebx
084e1fc2 +0x0c0:  test   %ebx,%ebx
084e1fc4 +0x0c2:  je     084e1fcc <+0xca>
084e1fc6 +0x0c4:  mov    %cx,(%eax)
084e1fc9 +0x0c7:  add    $0x2,%eax
084e1fcc +0x0ca:  and    $0x1,%edx
084e1fcf +0x0cd:  test   %edx,%edx
084e1fd1 +0x0cf:  je     084e1fd8 <+0xd6>
084e1fd3 +0x0d1:  mov    %cl,(%eax)
084e1fd5 +0x0d3:  add    $0x1,%eax
084e1fd8 +0x0d6:  movl   $0x0,0xc(%esp)
084e1fe0 +0x0de:  movl   $"game_server_msg_149",0x8(%esp)
084e1fe8 +0x0e6:  movl   $0x4,0x4(%esp)
084e1ff0 +0x0ee:  movl   $&g_scriptStringManager_,(%esp)
084e1ff7 +0x0f5:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e1ffc +0x0fa:  movl   $0x14,0x8(%esp)
084e2004 +0x102:  mov    %eax,0x4(%esp)
084e2008 +0x106:  lea    -0x3d(%ebp),%eax
084e200b +0x109:  mov    %eax,(%esp)
084e200e +0x10c:  call   0807d8d0 <_init+0x1c8>
084e2013 +0x111:  movl   $0x0,0xc(%esp)
084e201b +0x119:  movl   $"game_server_msg_150",0x8(%esp)
084e2023 +0x121:  movl   $0x4,0x4(%esp)
084e202b +0x129:  movl   $&g_scriptStringManager_,(%esp)
084e2032 +0x130:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e2037 +0x135:  movl   $0xff,0x8(%esp)
084e203f +0x13d:  mov    %eax,0x4(%esp)
084e2043 +0x141:  lea    -0x1a5(%ebp),%eax
084e2049 +0x147:  mov    %eax,(%esp)
084e204c +0x14a:  call   0807d8d0 <_init+0x1c8>
084e2051 +0x14f:  lea    -0xa5(%ebp),%eax
084e2057 +0x155:  mov    %eax,(%esp)
084e205a +0x158:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084e205f +0x15d:  mov    0x10(%ebp),%eax
084e2062 +0x160:  mov    %eax,-0x20(%ebp)
084e2065 +0x163:  mov    -0x20(%ebp),%eax
084e2068 +0x166:  mov    (%eax),%eax
084e206a +0x168:  mov    %eax,-0x28(%ebp)
084e206d +0x16b:  mov    -0x20(%ebp),%eax
084e2070 +0x16e:  mov    0x4(%eax),%eax
084e2073 +0x171:  mov    %eax,-0x24(%ebp)
084e2076 +0x174:  cmpl   $0x0,-0x28(%ebp)
084e207a +0x178:  jne    084e208c <+0x18a>
084e207c +0x17a:  cmpl   $0x0,-0x24(%ebp)
084e2080 +0x17e:  jne    084e208c <+0x18a>
084e2082 +0x180:  mov    $0x0,%eax
084e2087 +0x185:  jmp    084e2396 <+0x494>
084e208c +0x18a:  cmpl   $0x0,-0x24(%ebp)
084e2090 +0x18e:  je     084e22f6 <+0x3f4>
084e2096 +0x194:  mov    0xc(%ebp),%eax
084e2099 +0x197:  mov    %eax,(%esp)
084e209c +0x19a:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084e20a1 +0x19f:  mov    %eax,%ebx
084e20a3 +0x1a1:  lea    -0x1a5(%ebp),%eax
084e20a9 +0x1a7:  mov    %eax,(%esp)
084e20ac +0x1aa:  call   0807e3b0 <_init+0xca8>
084e20b1 +0x1af:  mov    %eax,%esi
084e20b3 +0x1b1:  mov    0xc(%ebp),%eax
084e20b6 +0x1b4:  mov    %eax,(%esp)
084e20b9 +0x1b7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e20be +0x1bc:  movl   $0x0,0x24(%esp)
084e20c6 +0x1c4:  movl   $0x0,0x20(%esp)
084e20ce +0x1cc:  mov    %ebx,0x1c(%esp)
084e20d2 +0x1d0:  movl   $0x0,0x18(%esp)
084e20da +0x1d8:  mov    %esi,0x14(%esp)
084e20de +0x1dc:  lea    -0x1a5(%ebp),%edx
084e20e4 +0x1e2:  mov    %edx,0x10(%esp)
084e20e8 +0x1e6:  mov    %eax,0xc(%esp)
084e20ec +0x1ea:  mov    -0x24(%ebp),%eax
084e20ef +0x1ed:  mov    %eax,0x8(%esp)
084e20f3 +0x1f1:  lea    -0xa5(%ebp),%eax
084e20f9 +0x1f7:  mov    %eax,0x4(%esp)
084e20fd +0x1fb:  lea    -0x3d(%ebp),%eax
084e2100 +0x1fe:  mov    %eax,(%esp)
084e2103 +0x201:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084e2108 +0x206:  lea    -0x5b(%ebp),%eax
084e210b +0x209:  mov    $0x1e,%edx
084e2110 +0x20e:  mov    $0x0,%ecx
084e2115 +0x213:  mov    %eax,%ebx
084e2117 +0x215:  and    $0x1,%ebx
084e211a +0x218:  test   %ebx,%ebx
084e211c +0x21a:  je     084e2126 <+0x224>
084e211e +0x21c:  mov    %cl,(%eax)
084e2120 +0x21e:  add    $0x1,%eax
084e2123 +0x221:  sub    $0x1,%edx
084e2126 +0x224:  mov    %eax,%ebx
084e2128 +0x226:  and    $0x2,%ebx
084e212b +0x229:  test   %ebx,%ebx
084e212d +0x22b:  je     084e2138 <+0x236>
084e212f +0x22d:  mov    %cx,(%eax)
084e2132 +0x230:  add    $0x2,%eax
084e2135 +0x233:  sub    $0x2,%edx
084e2138 +0x236:  mov    %edx,%esi
084e213a +0x238:  and    $0xfffffffc,%esi
084e213d +0x23b:  mov    $0x0,%ebx
084e2142 +0x240:  mov    %ecx,(%eax,%ebx,1)
084e2145 +0x243:  add    $0x4,%ebx
084e2148 +0x246:  cmp    %esi,%ebx
084e214a +0x248:  jb     084e2142 <+0x240>
084e214c +0x24a:  add    %ebx,%eax
084e214e +0x24c:  mov    %edx,%ebx
084e2150 +0x24e:  and    $0x2,%ebx
084e2153 +0x251:  test   %ebx,%ebx
084e2155 +0x253:  je     084e215d <+0x25b>
084e2157 +0x255:  mov    %cx,(%eax)
084e215a +0x258:  add    $0x2,%eax
084e215d +0x25b:  and    $0x1,%edx
084e2160 +0x25e:  test   %edx,%edx
084e2162 +0x260:  je     084e2169 <+0x267>
084e2164 +0x262:  mov    %cl,(%eax)
084e2166 +0x264:  add    $0x1,%eax
084e2169 +0x267:  mov    0xc(%ebp),%eax
084e216c +0x26a:  mov    %eax,(%esp)
084e216f +0x26d:  call   084ec474 <_GLOBAL__I__Z7getUserj+0x3426>  ; global constructors keyed to getUser(unsigned int)+0x3426
084e2174 +0x272:  movsbl %al,%eax
084e2177 +0x275:  mov    %eax,-0x1c(%ebp)
084e217a +0x278:  cmpl   $0x0,-0x1c(%ebp)
084e217e +0x27c:  js     084e219c <+0x29a>
084e2180 +0x27e:  mov    0xc(%ebp),%eax
084e2183 +0x281:  add    $0x796e8,%eax
084e2188 +0x286:  mov    %eax,(%esp)
084e218b +0x289:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
084e2190 +0x28e:  cmp    -0x1c(%ebp),%eax
084e2193 +0x291:  jle    084e219c <+0x29a>
084e2195 +0x293:  mov    $0x1,%eax
084e219a +0x298:  jmp    084e21a1 <+0x29f>
084e219c +0x29a:  mov    $0x0,%eax
084e21a1 +0x29f:  test   %al,%al
084e21a3 +0x2a1:  je     084e21cf <+0x2cd>
084e21a5 +0x2a3:  mov    -0x1c(%ebp),%eax
084e21a8 +0x2a6:  mov    0xc(%ebp),%edx
084e21ab +0x2a9:  add    $0x796e8,%edx
084e21b1 +0x2af:  mov    %eax,0x4(%esp)
084e21b5 +0x2b3:  mov    %edx,(%esp)
084e21b8 +0x2b6:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084e21bd +0x2bb:  add    $0x4,%eax
084e21c0 +0x2be:  mov    %eax,0x4(%esp)
084e21c4 +0x2c2:  lea    -0x5b(%ebp),%eax
084e21c7 +0x2c5:  mov    %eax,(%esp)
084e21ca +0x2c8:  call   0807def0 <_init+0x7e8>
084e21cf +0x2cd:  lea    -0x68(%ebp),%eax
084e21d2 +0x2d0:  mov    %eax,(%esp)
084e21d5 +0x2d3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e21da +0x2d8:  lea    -0x68(%ebp),%eax
084e21dd +0x2db:  mov    %eax,(%esp)
084e21e0 +0x2de:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084e21e5 +0x2e3:  movl   $0x123,0x8(%esp)
084e21ed +0x2eb:  movl   $0x0,0x4(%esp)
084e21f5 +0x2f3:  lea    -0x68(%ebp),%eax
084e21f8 +0x2f6:  mov    %eax,(%esp)
084e21fb +0x2f9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e2200 +0x2fe:  lea    -0x5b(%ebp),%eax
084e2203 +0x301:  mov    %eax,(%esp)
084e2206 +0x304:  call   0807e3b0 <_init+0xca8>
084e220b +0x309:  mov    %eax,0x4(%esp)
084e220f +0x30d:  lea    -0x68(%ebp),%eax
084e2212 +0x310:  mov    %eax,(%esp)
084e2215 +0x313:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e221a +0x318:  lea    -0x5b(%ebp),%eax
084e221d +0x31b:  mov    %eax,(%esp)
084e2220 +0x31e:  call   0807e3b0 <_init+0xca8>
084e2225 +0x323:  mov    %eax,0x8(%esp)
084e2229 +0x327:  lea    -0x5b(%ebp),%eax
084e222c +0x32a:  mov    %eax,0x4(%esp)
084e2230 +0x32e:  lea    -0x68(%ebp),%eax
084e2233 +0x331:  mov    %eax,(%esp)
084e2236 +0x334:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e223b +0x339:  mov    -0x24(%ebp),%eax
084e223e +0x33c:  mov    %eax,0x4(%esp)
084e2242 +0x340:  lea    -0x68(%ebp),%eax
084e2245 +0x343:  mov    %eax,(%esp)
084e2248 +0x346:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e224d +0x34b:  movl   $0x0,0x4(%esp)
084e2255 +0x353:  lea    -0x68(%ebp),%eax
084e2258 +0x356:  mov    %eax,(%esp)
084e225b +0x359:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e2260 +0x35e:  movl   $0x0,0x4(%esp)
084e2268 +0x366:  lea    -0x68(%ebp),%eax
084e226b +0x369:  mov    %eax,(%esp)
084e226e +0x36c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e2273 +0x371:  movl   $0x0,0x4(%esp)
084e227b +0x379:  lea    -0x68(%ebp),%eax
084e227e +0x37c:  mov    %eax,(%esp)
084e2281 +0x37f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e2286 +0x384:  movl   $0x1,0x4(%esp)
084e228e +0x38c:  lea    -0x68(%ebp),%eax
084e2291 +0x38f:  mov    %eax,(%esp)
084e2294 +0x392:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e2299 +0x397:  lea    -0x68(%ebp),%eax
084e229c +0x39a:  mov    %eax,0x4(%esp)
084e22a0 +0x39e:  mov    0xc(%ebp),%eax
084e22a3 +0x3a1:  mov    %eax,(%esp)
084e22a6 +0x3a4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e22ab +0x3a9:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
084e22b0 +0x3ae:  mov    -0x24(%ebp),%edx
084e22b3 +0x3b1:  mov    %edx,0xc(%esp)
084e22b7 +0x3b5:  mov    0xc(%ebp),%edx
084e22ba +0x3b8:  mov    %edx,0x8(%esp)
084e22be +0x3bc:  movl   $0x11,0x4(%esp)
084e22c6 +0x3c4:  mov    %eax,(%esp)
084e22c9 +0x3c7:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
084e22ce +0x3cc:  jmp    084e22eb <+0x3e9>
084e22d0 +0x3ce:  mov    %edx,%ebx
084e22d2 +0x3d0:  mov    %eax,%esi
084e22d4 +0x3d2:  lea    -0x68(%ebp),%eax
084e22d7 +0x3d5:  mov    %eax,(%esp)
084e22da +0x3d8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e22df +0x3dd:  mov    %esi,%eax
084e22e1 +0x3df:  mov    %ebx,%edx
084e22e3 +0x3e1:  mov    %eax,(%esp)
084e22e6 +0x3e4:  call   08ae3750 <_Unwind_Resume>
084e22eb +0x3e9:  lea    -0x68(%ebp),%eax
084e22ee +0x3ec:  mov    %eax,(%esp)
084e22f1 +0x3ef:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e22f6 +0x3f4:  cmpl   $0x0,-0x28(%ebp)
084e22fa +0x3f8:  je     084e2313 <+0x411>
084e22fc +0x3fa:  mov    0xc(%ebp),%eax
084e22ff +0x3fd:  mov    %eax,(%esp)
084e2302 +0x400:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084e2307 +0x405:  cmp    $0x46,%eax
084e230a +0x408:  je     084e2313 <+0x411>
084e230c +0x40a:  mov    $0x1,%eax
084e2311 +0x40f:  jmp    084e2318 <+0x416>
084e2313 +0x411:  mov    $0x0,%eax
084e2318 +0x416:  test   %al,%al
084e231a +0x418:  je     084e232e <+0x42c>
084e231c +0x41a:  mov    -0x28(%ebp),%eax
084e231f +0x41d:  mov    %eax,0x4(%esp)
084e2323 +0x421:  mov    0xc(%ebp),%eax
084e2326 +0x424:  mov    %eax,(%esp)
084e2329 +0x427:  call   08652564 <_ZN5CUser22giveCharacLinkBonusExpEj>  ; CUser::giveCharacLinkBonusExp(unsigned int)
084e232e +0x42c:  mov    0xc(%ebp),%eax
084e2331 +0x42f:  mov    %eax,(%esp)
084e2334 +0x432:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e2339 +0x437:  movl   $0x1,0x10(%esp)
084e2341 +0x43f:  mov    %eax,0xc(%esp)
084e2345 +0x443:  movl   $0x0,0x8(%esp)
084e234d +0x44b:  movl   $0x0,0x4(%esp)
084e2355 +0x453:  mov    0xc(%ebp),%eax
084e2358 +0x456:  mov    %eax,(%esp)
084e235b +0x459:  call   0865240c <_ZN5CUser21UpdateCharacLinkBonusEjjj28ENUM_CHARAC_LINK_BONUS_STATE>  ; CUser::UpdateCharacLinkBonus(unsigned int, unsigned int, unsigned int, ENUM_CHARAC_LINK_BONUS_STATE)
084e2360 +0x45e:  mov    0xc(%ebp),%eax
084e2363 +0x461:  mov    %eax,(%esp)
084e2366 +0x464:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e236b +0x469:  mov    %eax,0x4(%esp)
084e236f +0x46d:  mov    0xc(%ebp),%eax
084e2372 +0x470:  mov    %eax,(%esp)
084e2375 +0x473:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
084e237a +0x478:  movl   $0x0,0x8(%esp)
084e2382 +0x480:  mov    %eax,0x4(%esp)
084e2386 +0x484:  mov    0xc(%ebp),%eax
084e2389 +0x487:  mov    %eax,(%esp)
084e238c +0x48a:  call   084ecdb6 <_GLOBAL__I__Z7getUserj+0x3d68>  ; global constructors keyed to getUser(unsigned int)+0x3d68
084e2391 +0x48f:  mov    $0x0,%eax
084e2396 +0x494:  add    $0x1cc,%esp
084e239c +0x49a:  pop    %ebx
084e239d +0x49b:  pop    %esi
084e239e +0x49c:  pop    %edi
084e239f +0x49d:  pop    %ebp
084e23a0 +0x49e:  ret
084e23a1 +0x49f:  nop
```

## 反编译 C

```c
// Inter_LoadCharacLinkBonus::dispatch_sig @ 0x84e1f02

/* Inter_LoadCharacLinkBonus::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadCharacLinkBonus::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  int iVar6;
  CCirculationStatistic *pCVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  char local_1a9;
  char local_1a8 [255];
  Inven_Item local_a9 [61];
  PacketGuard local_6c [13];
  char local_5f;
  char local_5e [29];
  char local_41;
  char local_40 [20];
  uint local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  local_2c = 0;
  local_28 = 0;
  pcVar9 = &local_1a9;
  uVar10 = 0x100;
  bVar11 = ((uint)pcVar9 & 1) != 0;
  if (bVar11) {
    local_1a9 = '\0';
    pcVar9 = local_1a8;
    uVar10 = 0xff;
  }
  if (((uint)pcVar9 & 2) != 0) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9 = pcVar9 + 2;
    uVar10 = uVar10 - 2;
  }
  for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9 = pcVar9 + 4;
  }
  if ((uVar10 & 2) != 0) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9 = pcVar9 + 2;
  }
  if (bVar11) {
    *pcVar9 = '\0';
  }
  pcVar9 = &local_41;
  uVar10 = 0x15;
  bVar11 = ((uint)pcVar9 & 1) != 0;
  if (bVar11) {
    local_41 = '\0';
    pcVar9 = local_40;
    uVar10 = 0x14;
  }
  if (((uint)pcVar9 & 2) != 0) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9 = pcVar9 + 2;
    uVar10 = uVar10 - 2;
  }
  uVar8 = 0;
  do {
    pcVar1 = pcVar9 + uVar8;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar8 = uVar8 + 4;
  } while (uVar8 < (uVar10 & 0xfffffffc));
  pcVar9 = pcVar9 + uVar8;
  if ((uVar10 & 2) != 0) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9 = pcVar9 + 2;
  }
  if (!bVar11) {
    *pcVar9 = '\0';
  }
  pcVar9 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_149",(bool *)0x0);
  strncpy(&local_41,pcVar9,0x14);
  pcVar9 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_150",(bool *)0x0);
  strncpy(&local_1a9,pcVar9,0xff);
  Inven_Item::Inven_Item(local_a9);
  local_24 = param_3;
  local_2c = *(uint *)param_3;
  local_28 = *(int *)(param_3 + 4);
  if ((local_2c != 0) || (local_28 != 0)) {
    if (local_28 != 0) {
      uVar3 = CUser::GetServerGroup((CUser *)param_2);
      sVar4 = strlen(&local_1a9);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (&local_41,local_a9,local_28,uVar5,&local_1a9,sVar4,0,uVar3,0,0);
      pcVar9 = &local_5f;
      uVar10 = 0x1e;
      bVar11 = ((uint)pcVar9 & 1) != 0;
      if (bVar11) {
        local_5f = '\0';
        pcVar9 = local_5e;
        uVar10 = 0x1d;
      }
      if (((uint)pcVar9 & 2) != 0) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9 = pcVar9 + 2;
        uVar10 = uVar10 - 2;
      }
      uVar8 = 0;
      do {
        pcVar1 = pcVar9 + uVar8;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        uVar8 = uVar8 + 4;
      } while (uVar8 < (uVar10 & 0xfffffffc));
      pcVar9 = pcVar9 + uVar8;
      if ((uVar10 & 2) != 0) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9 = pcVar9 + 2;
      }
      if (bVar11) {
        *pcVar9 = '\0';
      }
      cVar2 = CUserCharacInfo::getLinkCharacSlotIndex((CUserCharacInfo *)param_2);
      local_20 = (uint)cVar2;
      if (((int)local_20 < 0) ||
         (iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                             (param_2 + 0x796e8)), iVar6 <= (int)local_20)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) {
        iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                           local_20);
        strcpy(&local_5f,(char *)(iVar6 + 4));
      }
      PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 084e21e0 to 084e22cd has its CatchHandler @ 084e22d0 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_6c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0x123);
      sVar4 = strlen(&local_5f);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_6c,sVar4);
      sVar4 = strlen(&local_5f);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_6c,&local_5f,sVar4);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_6c,local_28);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_6c,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_6c,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_6c,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
      CUser::Send((CUser *)param_2,local_6c);
      pCVar7 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
      CCirculationStatistic::AddCirculationStatistic(pCVar7,0x11,param_2,local_28);
      PacketGuard::~PacketGuard(local_6c);
    }
    if ((local_2c == 0) ||
       (iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2), iVar6 == 0x46)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      CUser::giveCharacLinkBonusExp((CUser *)param_2,local_2c);
    }
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    CUser::UpdateCharacLinkBonus((CUser *)param_2,0,0,uVar3,1);
    uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    iVar6 = CUser::get_charac_idx((CUser *)param_2,uVar10);
    CUser::setCharacLinkBonusSetting((CUser *)param_2,iVar6,false);
  }
  return 0;
}
```
