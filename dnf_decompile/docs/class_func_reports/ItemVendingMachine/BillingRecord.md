# BillingRecord

`_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc`

`ItemVendingMachine::BillingRecord(CUser*, int, int, int, char const*, char const*, int, unsigned long long, char)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x0817991e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817991e  _ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc
#           ItemVendingMachine::BillingRecord(CUser*, int, int, int, char const*, char const*, int, unsigned long long, char)
# range [0x0817991e, 0x08179ead]
0817991e +0x000:  push   %ebp
0817991f +0x001:  mov    %esp,%ebp
08179921 +0x003:  push   %esi
08179922 +0x004:  push   %ebx
08179923 +0x005:  sub    $0x170,%esp
08179929 +0x00b:  mov    0x30(%ebp),%eax
0817992c +0x00e:  mov    0x28(%ebp),%edx
0817992f +0x011:  mov    %edx,-0x150(%ebp)
08179935 +0x017:  mov    0x2c(%ebp),%edx
08179938 +0x01a:  mov    %edx,-0x14c(%ebp)
0817993e +0x020:  mov    %al,-0x154(%ebp)
08179944 +0x026:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08179949 +0x02b:  movl   $0x730,0x8(%esp)
08179951 +0x033:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
08179959 +0x03b:  mov    %eax,(%esp)
0817995c +0x03e:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08179961 +0x043:  movl   $0x1,0x8(%esp)
08179969 +0x04b:  mov    %eax,0x4(%esp)
0817996d +0x04f:  lea    -0x14(%ebp),%eax
08179970 +0x052:  mov    %eax,(%esp)
08179973 +0x055:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08179978 +0x05a:  lea    -0x14(%ebp),%eax
0817997b +0x05d:  mov    %eax,(%esp)
0817997e +0x060:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08179983 +0x065:  movl   $0xb0,0x4(%esp)
0817998b +0x06d:  mov    %eax,(%esp)
0817998e +0x070:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08179993 +0x075:  mov    0xc(%ebp),%eax
08179996 +0x078:  mov    %eax,(%esp)
08179999 +0x07b:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0817999e +0x080:  mov    %eax,%ebx
081799a0 +0x082:  lea    -0x14(%ebp),%eax
081799a3 +0x085:  mov    %eax,(%esp)
081799a6 +0x088:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081799ab +0x08d:  mov    %ebx,0x4(%esp)
081799af +0x091:  mov    %eax,(%esp)
081799b2 +0x094:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081799b7 +0x099:  movl   $0x10e,0x8(%esp)
081799bf +0x0a1:  movl   $0x0,0x4(%esp)
081799c7 +0x0a9:  lea    -0x13b(%ebp),%eax
081799cd +0x0af:  mov    %eax,(%esp)
081799d0 +0x0b2:  call   0807dcc0 <_init+0x5b8>
081799d5 +0x0b7:  mov    0x1c(%ebp),%eax
081799d8 +0x0ba:  mov    %eax,0x4(%esp)
081799dc +0x0be:  lea    -0x13b(%ebp),%eax
081799e2 +0x0c4:  mov    %eax,(%esp)
081799e5 +0x0c7:  call   0807def0 <_init+0x7e8>
081799ea +0x0cc:  mov    0xc(%ebp),%eax
081799ed +0x0cf:  mov    %eax,(%esp)
081799f0 +0x0d2:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
081799f5 +0x0d7:  mov    %eax,0x4(%esp)
081799f9 +0x0db:  lea    -0x13b(%ebp),%eax
081799ff +0x0e1:  add    $0x35,%eax
08179a02 +0x0e4:  mov    %eax,(%esp)
08179a05 +0x0e7:  call   0807def0 <_init+0x7e8>
08179a0a +0x0ec:  movl   $0x1,-0x126(%ebp)
08179a14 +0x0f6:  mov    0x18(%ebp),%eax
08179a17 +0x0f9:  mov    %eax,-0x122(%ebp)
08179a1d +0x0ff:  movl   $0x0,-0x11e(%ebp)
08179a27 +0x109:  movl   $0x1,-0x11a(%ebp)
08179a31 +0x113:  mov    0x10(%ebp),%eax
08179a34 +0x116:  mov    %eax,-0x116(%ebp)
08179a3a +0x11c:  mov    0x14(%ebp),%eax
08179a3d +0x11f:  mov    %eax,-0x112(%ebp)
08179a43 +0x125:  mov    0xc(%ebp),%eax
08179a46 +0x128:  mov    %eax,(%esp)
08179a49 +0x12b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08179a4e +0x130:  mov    %eax,-0x10e(%ebp)
08179a54 +0x136:  mov    0xc(%ebp),%eax
08179a57 +0x139:  mov    %eax,(%esp)
08179a5a +0x13c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08179a5f +0x141:  mov    %eax,-0x10a(%ebp)
08179a65 +0x147:  mov    0xc(%ebp),%eax
08179a68 +0x14a:  mov    %eax,(%esp)
08179a6b +0x14d:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08179a70 +0x152:  mov    %eax,-0xed(%ebp)
08179a76 +0x158:  movl   $0xe,0x8(%esp)
08179a7e +0x160:  movl   $0x0,0x4(%esp)
08179a86 +0x168:  lea    -0x22(%ebp),%eax
08179a89 +0x16b:  mov    %eax,(%esp)
08179a8c +0x16e:  call   0807dcc0 <_init+0x5b8>
08179a91 +0x173:  mov    0xc(%ebp),%eax
08179a94 +0x176:  mov    %eax,(%esp)
08179a97 +0x179:  call   08101056 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x78>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x78
08179a9c +0x17e:  movl   $0xe,0x8(%esp)
08179aa4 +0x186:  mov    %eax,0x4(%esp)
08179aa8 +0x18a:  lea    -0x22(%ebp),%eax
08179aab +0x18d:  mov    %eax,(%esp)
08179aae +0x190:  call   0807d8d0 <_init+0x1c8>
08179ab3 +0x195:  movl   $0x2,0x8(%esp)
08179abb +0x19d:  movl   $0x0,0x4(%esp)
08179ac3 +0x1a5:  lea    -0x24(%ebp),%eax
08179ac6 +0x1a8:  mov    %eax,(%esp)
08179ac9 +0x1ab:  call   0807dcc0 <_init+0x5b8>
08179ace +0x1b0:  movl   $0x3,0x8(%esp)
08179ad6 +0x1b8:  movl   $0x0,0x4(%esp)
08179ade +0x1c0:  lea    -0x27(%ebp),%eax
08179ae1 +0x1c3:  mov    %eax,(%esp)
08179ae4 +0x1c6:  call   0807dcc0 <_init+0x5b8>
08179ae9 +0x1cb:  movl   $0x3,0x8(%esp)
08179af1 +0x1d3:  movl   $0x0,0x4(%esp)
08179af9 +0x1db:  lea    -0x2a(%ebp),%eax
08179afc +0x1de:  mov    %eax,(%esp)
08179aff +0x1e1:  call   0807dcc0 <_init+0x5b8>
08179b04 +0x1e6:  movl   $0x3,0x8(%esp)
08179b0c +0x1ee:  movl   $0x0,0x4(%esp)
08179b14 +0x1f6:  lea    -0x2d(%ebp),%eax
08179b17 +0x1f9:  mov    %eax,(%esp)
08179b1a +0x1fc:  call   0807dcc0 <_init+0x5b8>
08179b1f +0x201:  movl   $0x1,0x8(%esp)
08179b27 +0x209:  lea    -0x22(%ebp),%eax
08179b2a +0x20c:  add    $0x6,%eax
08179b2d +0x20f:  mov    %eax,0x4(%esp)
08179b31 +0x213:  lea    -0x24(%ebp),%eax
08179b34 +0x216:  mov    %eax,(%esp)
08179b37 +0x219:  call   0807d8d0 <_init+0x1c8>
08179b3c +0x21e:  movl   $0x2,0x8(%esp)
08179b44 +0x226:  lea    -0x22(%ebp),%eax
08179b47 +0x229:  mov    %eax,0x4(%esp)
08179b4b +0x22d:  lea    -0x27(%ebp),%eax
08179b4e +0x230:  mov    %eax,(%esp)
08179b51 +0x233:  call   0807d8d0 <_init+0x1c8>
08179b56 +0x238:  movl   $0x2,0x8(%esp)
08179b5e +0x240:  lea    -0x22(%ebp),%eax
08179b61 +0x243:  add    $0x2,%eax
08179b64 +0x246:  mov    %eax,0x4(%esp)
08179b68 +0x24a:  lea    -0x2a(%ebp),%eax
08179b6b +0x24d:  mov    %eax,(%esp)
08179b6e +0x250:  call   0807d8d0 <_init+0x1c8>
08179b73 +0x255:  movl   $0x2,0x8(%esp)
08179b7b +0x25d:  lea    -0x22(%ebp),%eax
08179b7e +0x260:  add    $0x4,%eax
08179b81 +0x263:  mov    %eax,0x4(%esp)
08179b85 +0x267:  lea    -0x2d(%ebp),%eax
08179b88 +0x26a:  mov    %eax,(%esp)
08179b8b +0x26d:  call   0807d8d0 <_init+0x1c8>
08179b90 +0x272:  lea    -0x24(%ebp),%eax
08179b93 +0x275:  mov    %eax,(%esp)
08179b96 +0x278:  call   0807e6f0 <_init+0xfe8>
08179b9b +0x27d:  mov    %al,-0x9(%ebp)
08179b9e +0x280:  movsbl -0x9(%ebp),%eax
08179ba2 +0x284:  cmp    $0x2,%eax
08179ba5 +0x287:  je     08179c0a <+0x2ec>
08179ba7 +0x289:  cmp    $0x2,%eax
08179baa +0x28c:  jg     08179bb6 <+0x298>
08179bac +0x28e:  cmp    $0x1,%eax
08179baf +0x291:  je     08179bcd <+0x2af>
08179bb1 +0x293:  jmp    08179cb6 <+0x398>
08179bb6 +0x298:  cmp    $0x3,%eax
08179bb9 +0x29b:  je     08179c44 <+0x326>
08179bbf +0x2a1:  cmp    $0x4,%eax
08179bc2 +0x2a4:  je     08179c7e <+0x360>
08179bc8 +0x2aa:  jmp    08179cb6 <+0x398>
08179bcd +0x2af:  lea    -0x2d(%ebp),%eax
08179bd0 +0x2b2:  mov    %eax,0x10(%esp)
08179bd4 +0x2b6:  lea    -0x2a(%ebp),%eax
08179bd7 +0x2b9:  mov    %eax,0xc(%esp)
08179bdb +0x2bd:  lea    -0x27(%ebp),%eax
08179bde +0x2c0:  mov    %eax,0x8(%esp)
08179be2 +0x2c4:  movl   $"19%s-%s-%s",0x4(%esp)
08179bea +0x2cc:  lea    -0x13b(%ebp),%eax
08179bf0 +0x2d2:  add    $0x56,%eax
08179bf3 +0x2d5:  mov    %eax,(%esp)
08179bf6 +0x2d8:  call   0807e440 <_init+0xd38>
08179bfb +0x2dd:  movl   $0x1,-0xe9(%ebp)
08179c05 +0x2e7:  jmp    08179cb6 <+0x398>
08179c0a +0x2ec:  lea    -0x2d(%ebp),%eax
08179c0d +0x2ef:  mov    %eax,0x10(%esp)
08179c11 +0x2f3:  lea    -0x2a(%ebp),%eax
08179c14 +0x2f6:  mov    %eax,0xc(%esp)
08179c18 +0x2fa:  lea    -0x27(%ebp),%eax
08179c1b +0x2fd:  mov    %eax,0x8(%esp)
08179c1f +0x301:  movl   $"19%s-%s-%s",0x4(%esp)
08179c27 +0x309:  lea    -0x13b(%ebp),%eax
08179c2d +0x30f:  add    $0x56,%eax
08179c30 +0x312:  mov    %eax,(%esp)
08179c33 +0x315:  call   0807e440 <_init+0xd38>
08179c38 +0x31a:  movl   $0x2,-0xe9(%ebp)
08179c42 +0x324:  jmp    08179cb6 <+0x398>
08179c44 +0x326:  lea    -0x2d(%ebp),%eax
08179c47 +0x329:  mov    %eax,0x10(%esp)
08179c4b +0x32d:  lea    -0x2a(%ebp),%eax
08179c4e +0x330:  mov    %eax,0xc(%esp)
08179c52 +0x334:  lea    -0x27(%ebp),%eax
08179c55 +0x337:  mov    %eax,0x8(%esp)
08179c59 +0x33b:  movl   $"20%s-%s-%s",0x4(%esp)
08179c61 +0x343:  lea    -0x13b(%ebp),%eax
08179c67 +0x349:  add    $0x56,%eax
08179c6a +0x34c:  mov    %eax,(%esp)
08179c6d +0x34f:  call   0807e440 <_init+0xd38>
08179c72 +0x354:  movl   $0x1,-0xe9(%ebp)
08179c7c +0x35e:  jmp    08179cb6 <+0x398>
08179c7e +0x360:  lea    -0x2d(%ebp),%eax
08179c81 +0x363:  mov    %eax,0x10(%esp)
08179c85 +0x367:  lea    -0x2a(%ebp),%eax
08179c88 +0x36a:  mov    %eax,0xc(%esp)
08179c8c +0x36e:  lea    -0x27(%ebp),%eax
08179c8f +0x371:  mov    %eax,0x8(%esp)
08179c93 +0x375:  movl   $"20%s-%s-%s",0x4(%esp)
08179c9b +0x37d:  lea    -0x13b(%ebp),%eax
08179ca1 +0x383:  add    $0x56,%eax
08179ca4 +0x386:  mov    %eax,(%esp)
08179ca7 +0x389:  call   0807e440 <_init+0xd38>
08179cac +0x38e:  movl   $0x2,-0xe9(%ebp)
08179cb6 +0x398:  movl   $0x1,-0xda(%ebp)
08179cc0 +0x3a2:  movl   $0x0,-0xd6(%ebp)
08179cca +0x3ac:  mov    0x20(%ebp),%eax
08179ccd +0x3af:  mov    %eax,0x4(%esp)
08179cd1 +0x3b3:  lea    -0x13b(%ebp),%eax
08179cd7 +0x3b9:  add    $0x69,%eax
08179cda +0x3bc:  mov    %eax,(%esp)
08179cdd +0x3bf:  call   0807def0 <_init+0x7e8>
08179ce2 +0x3c4:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08179ce7 +0x3c9:  mov    0x378(%eax),%eax
08179ced +0x3cf:  mov    %eax,-0x6e(%ebp)
08179cf0 +0x3d2:  mov    0xc(%ebp),%eax
08179cf3 +0x3d5:  mov    %eax,(%esp)
08179cf6 +0x3d8:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
08179cfb +0x3dd:  movsbl %al,%eax
08179cfe +0x3e0:  mov    %eax,-0x6a(%ebp)
08179d01 +0x3e3:  mov    0xc(%ebp),%eax
08179d04 +0x3e6:  mov    %eax,(%esp)
08179d07 +0x3e9:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08179d0c +0x3ee:  mov    %eax,-0x66(%ebp)
08179d0f +0x3f1:  mov    -0x6e(%ebp),%eax
08179d12 +0x3f4:  mov    %eax,-0x62(%ebp)
08179d15 +0x3f7:  movl   $0x0,-0x5e(%ebp)
08179d1c +0x3fe:  mov    -0x122(%ebp),%eax
08179d22 +0x404:  mov    %eax,-0x5a(%ebp)
08179d25 +0x407:  movl   $0x0,-0x56(%ebp)
08179d2c +0x40e:  mov    0x24(%ebp),%eax
08179d2f +0x411:  mov    %eax,-0x52(%ebp)
08179d32 +0x414:  mov    -0x122(%ebp),%eax
08179d38 +0x41a:  mov    %eax,-0x4e(%ebp)
08179d3b +0x41d:  movl   $"mileage item",0x4(%esp)
08179d43 +0x425:  mov    0x20(%ebp),%eax
08179d46 +0x428:  mov    %eax,(%esp)
08179d49 +0x42b:  call   0807e4e0 <_init+0xdd8>
08179d4e +0x430:  test   %eax,%eax
08179d50 +0x432:  jne    08179d5b <+0x43d>
08179d52 +0x434:  movl   $0x2,-0x4a(%ebp)
08179d59 +0x43b:  jmp    08179d82 <+0x464>
08179d5b +0x43d:  movl   $"cera point",0x4(%esp)
08179d63 +0x445:  mov    0x20(%ebp),%eax
08179d66 +0x448:  mov    %eax,(%esp)
08179d69 +0x44b:  call   0807e4e0 <_init+0xdd8>
08179d6e +0x450:  test   %eax,%eax
08179d70 +0x452:  jne    08179d7b <+0x45d>
08179d72 +0x454:  movl   $0x3,-0x4a(%ebp)
08179d79 +0x45b:  jmp    08179d82 <+0x464>
08179d7b +0x45d:  movl   $0x1,-0x4a(%ebp)
08179d82 +0x464:  movl   $0x10,0x8(%esp)
08179d8a +0x46c:  movl   $0x0,0x4(%esp)
08179d92 +0x474:  lea    -0x13b(%ebp),%eax
08179d98 +0x47a:  add    $0xf5,%eax
08179d9d +0x47f:  mov    %eax,(%esp)
08179da0 +0x482:  call   0807dcc0 <_init+0x5b8>
08179da5 +0x487:  mov    0xc(%ebp),%eax
08179da8 +0x48a:  add    $0xe0,%eax
08179dad +0x48f:  movl   $0x10,0x8(%esp)
08179db5 +0x497:  lea    -0x13b(%ebp),%edx
08179dbb +0x49d:  add    $0xf5,%edx
08179dc1 +0x4a3:  mov    %edx,0x4(%esp)
08179dc5 +0x4a7:  mov    %eax,(%esp)
08179dc8 +0x4aa:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
08179dcd +0x4af:  test   %eax,%eax
08179dcf +0x4b1:  sete   %al
08179dd2 +0x4b4:  test   %al,%al
08179dd4 +0x4b6:  je     08179df9 <+0x4db>
08179dd6 +0x4b8:  movl   $0x5,0x8(%esp)
08179dde +0x4c0:  movl   $"NONE",0x4(%esp)
08179de6 +0x4c8:  lea    -0x13b(%ebp),%eax
08179dec +0x4ce:  add    $0xf5,%eax
08179df1 +0x4d3:  mov    %eax,(%esp)
08179df4 +0x4d6:  call   0807d8a0 <_init+0x198>
08179df9 +0x4db:  mov    -0x150(%ebp),%eax
08179dff +0x4e1:  mov    -0x14c(%ebp),%edx
08179e05 +0x4e7:  mov    %eax,-0x36(%ebp)
08179e08 +0x4ea:  mov    %edx,-0x32(%ebp)
08179e0b +0x4ed:  movzbl -0x154(%ebp),%eax
08179e12 +0x4f4:  mov    %al,-0x2e(%ebp)
08179e15 +0x4f7:  lea    -0x14(%ebp),%eax
08179e18 +0x4fa:  mov    %eax,(%esp)
08179e1b +0x4fd:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08179e20 +0x502:  movl   $0x10e,0x8(%esp)
08179e28 +0x50a:  lea    -0x13b(%ebp),%edx
08179e2e +0x510:  mov    %edx,0x4(%esp)
08179e32 +0x514:  mov    %eax,(%esp)
08179e35 +0x517:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08179e3a +0x51c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08179e3f +0x521:  lea    -0x14(%ebp),%edx
08179e42 +0x524:  mov    %edx,0x8(%esp)
08179e46 +0x528:  movl   $0x2,0x4(%esp)
08179e4e +0x530:  mov    %eax,(%esp)
08179e51 +0x533:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08179e56 +0x538:  mov    0xc(%ebp),%eax
08179e59 +0x53b:  mov    %eax,(%esp)
08179e5c +0x53e:  call   08692b74 <_ZN5CUser9GetPuUserEv>  ; CUser::GetPuUser()
08179e61 +0x543:  xor    $0x1,%eax
08179e64 +0x546:  test   %al,%al
08179e66 +0x548:  je     08179e98 <+0x57a>
08179e68 +0x54a:  mov    0xc(%ebp),%eax
08179e6b +0x54d:  mov    %eax,(%esp)
08179e6e +0x550:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08179e73 +0x555:  mov    %eax,(%esp)
08179e76 +0x558:  call   0844c098 <_ZN18DB_SavePuUserCheck11makeRequestEj>  ; DB_SavePuUserCheck::makeRequest(unsigned int)
08179e7b +0x55d:  jmp    08179e98 <+0x57a>
08179e7d +0x55f:  mov    %edx,%ebx
08179e7f +0x561:  mov    %eax,%esi
08179e81 +0x563:  lea    -0x14(%ebp),%eax
08179e84 +0x566:  mov    %eax,(%esp)
08179e87 +0x569:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08179e8c +0x56e:  mov    %esi,%eax
08179e8e +0x570:  mov    %ebx,%edx
08179e90 +0x572:  mov    %eax,(%esp)
08179e93 +0x575:  call   08ae3750 <_Unwind_Resume>
08179e98 +0x57a:  lea    -0x14(%ebp),%eax
08179e9b +0x57d:  mov    %eax,(%esp)
08179e9e +0x580:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08179ea3 +0x585:  add    $0x170,%esp
08179ea9 +0x58b:  pop    %ebx
08179eaa +0x58c:  pop    %esi
08179eab +0x58d:  pop    %ebp
08179eac +0x58e:  ret
08179ead +0x58f:  nop
```

## 反编译 C

```c
// ItemVendingMachine::BillingRecord @ 0x817991e

/* ItemVendingMachine::BillingRecord(CUser*, int, int, int, char const*, char const*, int, unsigned
   long long, char) */

void ItemVendingMachine::BillingRecord
               (CUser *param_1,int param_2,int param_3,int param_4,char *param_5,char *param_6,
               int param_7,ulonglong param_8,char param_9)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined3 in_stack_00000029;
  char local_13f [21];
  undefined4 local_12a;
  char *local_126;
  undefined4 local_122;
  undefined4 local_11e;
  int local_11a;
  int local_116;
  undefined4 local_112;
  undefined4 local_10e;
  char acStack_10a [25];
  undefined4 local_f1;
  undefined4 local_ed;
  char acStack_e9 [11];
  undefined4 local_de;
  undefined4 local_da;
  char acStack_d6 [100];
  undefined4 local_72;
  int local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  char *local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  char *local_52;
  undefined4 local_4e;
  char acStack_4a [16];
  undefined4 local_3a;
  undefined4 local_36;
  char local_31 [3];
  char local_2e [3];
  char local_2b [3];
  char local_28 [2];
  char local_26 [2];
  char acStack_24 [2];
  char acStack_22 [2];
  char acStack_20 [8];
  CStreamGuard local_18 [11];
  char local_d;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/AppendVendingMachine.cpp",0x730
                              );
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0817998e to 08179e7a has its CatchHandler @ 08179e7d */
  CStreamGuard::operator<<(pCVar3,0xb0);
  iVar4 = CUser::GetUID((CUser *)param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  memset(local_13f,0,0x10e);
  strcpy(local_13f,param_6);
  pcVar5 = (char *)CUser::get_acc_name((CUser *)param_2);
  strcpy(acStack_10a,pcVar5);
  local_12a = 1;
  local_126 = param_5;
  local_122 = 0;
  local_11e = 1;
  local_11a = param_3;
  local_116 = param_4;
  local_112 = CUser::get_acc_id((CUser *)param_2);
  local_10e = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  local_f1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
  memset(local_26,0,0xe);
  pcVar5 = (char *)CUser::GetSsnString((CUser *)param_2);
  strncpy(local_26,pcVar5,0xe);
  memset(local_28,0,2);
  memset(local_2b,0,3);
  memset(local_2e,0,3);
  memset(local_31,0,3);
  strncpy(local_28,acStack_20,1);
  strncpy(local_2b,local_26,2);
  strncpy(local_2e,acStack_24,2);
  strncpy(local_31,acStack_22,2);
  iVar4 = atoi(local_28);
  local_d = (char)iVar4;
  if (local_d == '\x02') {
    sprintf(acStack_e9,"19%s-%s-%s",local_2b,local_2e,local_31);
    local_ed = 2;
  }
  else if (local_d < '\x03') {
    if (local_d == '\x01') {
      sprintf(acStack_e9,"19%s-%s-%s",local_2b,local_2e,local_31);
      local_ed = 1;
    }
  }
  else if (local_d == '\x03') {
    sprintf(acStack_e9,"20%s-%s-%s",local_2b,local_2e,local_31);
    local_ed = 1;
  }
  else if (local_d == '\x04') {
    sprintf(acStack_e9,"20%s-%s-%s",local_2b,local_2e,local_31);
    local_ed = 2;
  }
  local_de = 1;
  local_da = 0;
  strcpy(acStack_d6,(char *)param_7);
  iVar4 = G_CEnvironment();
  local_72 = *(undefined4 *)(iVar4 + 0x378);
  cVar1 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_2);
  local_6e = (int)cVar1;
  local_6a = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
  local_66 = local_72;
  local_62 = 0;
  local_5e = local_126;
  local_5a = 0;
  local_56 = (undefined4)param_8;
  local_52 = local_126;
  iVar4 = strcmp((char *)param_7,"mileage item");
  if (iVar4 == 0) {
    local_4e = 2;
  }
  else {
    iVar4 = strcmp((char *)param_7,"cera point");
    if (iVar4 == 0) {
      local_4e = 3;
    }
    else {
      local_4e = 1;
    }
  }
  memset(acStack_4a,0,0x10);
  iVar4 = CNetwork<4096,450000>::GetPeerIP2
                    ((CNetwork<4096,450000> *)(param_2 + 0xe0),acStack_4a,0x10);
  if (iVar4 == 0) {
    memcpy(acStack_4a,&DAT_08b862ca,5);
  }
  local_3a = param_8._4_4_;
  local_36 = _param_9;
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  CStreamGuard::put_binary(pCVar3,local_13f,0x10e);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  cVar1 = CUser::GetPuUser((CUser *)param_2);
  if (cVar1 != '\x01') {
    uVar6 = CUser::get_acc_id((CUser *)param_2);
    DB_SavePuUserCheck::makeRequest(uVar6);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
