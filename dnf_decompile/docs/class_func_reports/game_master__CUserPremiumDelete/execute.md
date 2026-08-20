# execute

`_ZN11game_master18CUserPremiumDelete7executeEv`

`game_master::CUserPremiumDelete::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CUserPremiumDelete` | `0x084abf4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084abf4e  _ZN11game_master18CUserPremiumDelete7executeEv
#           game_master::CUserPremiumDelete::execute()
# range [0x084abf4e, 0x084ac2a9]
084abf4e +0x000:  push   %ebp
084abf4f +0x001:  mov    %esp,%ebp
084abf51 +0x003:  push   %esi
084abf52 +0x004:  push   %ebx
084abf53 +0x005:  sub    $0x60,%esp
084abf56 +0x008:  mov    0x8(%ebp),%eax
084abf59 +0x00b:  mov    %eax,(%esp)
084abf5c +0x00e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084abf61 +0x013:  mov    %eax,-0x20(%ebp)
084abf64 +0x016:  mov    -0x20(%ebp),%eax
084abf67 +0x019:  mov    %eax,(%esp)
084abf6a +0x01c:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
084abf6f +0x021:  mov    %eax,-0x1c(%ebp)
084abf72 +0x024:  lea    -0x30(%ebp),%eax
084abf75 +0x027:  mov    %eax,(%esp)
084abf78 +0x02a:  call   083284f6 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x44f>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x44f
084abf7d +0x02f:  movl   $0x1,-0xc(%ebp)
084abf84 +0x036:  jmp    084abfc8 <+0x7a>
084abf86 +0x038:  mov    -0xc(%ebp),%eax
084abf89 +0x03b:  mov    %eax,0x4(%esp)
084abf8d +0x03f:  mov    -0x1c(%ebp),%eax
084abf90 +0x042:  mov    %eax,(%esp)
084abf93 +0x045:  call   086adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>  ; WongWork::CUserPremium::GetPremiumInfo(int) const
084abf98 +0x04a:  mov    (%eax),%eax
084abf9a +0x04c:  test   %eax,%eax
084abf9c +0x04e:  setne  %al
084abf9f +0x051:  test   %al,%al
084abfa1 +0x053:  je     084abfc4 <+0x76>
084abfa3 +0x055:  mov    -0xc(%ebp),%eax
084abfa6 +0x058:  mov    %eax,0x4(%esp)
084abfaa +0x05c:  mov    -0x1c(%ebp),%eax
084abfad +0x05f:  mov    %eax,(%esp)
084abfb0 +0x062:  call   086adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>  ; WongWork::CUserPremium::GetPremiumInfo(int) const
084abfb5 +0x067:  mov    %eax,0x4(%esp)
084abfb9 +0x06b:  lea    -0x30(%ebp),%eax
084abfbc +0x06e:  mov    %eax,(%esp)
084abfbf +0x071:  call   08328568 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x4c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x4c1
084abfc4 +0x076:  addl   $0x1,-0xc(%ebp)
084abfc8 +0x07a:  cmpl   $0x69,-0xc(%ebp)
084abfcc +0x07e:  setle  %al
084abfcf +0x081:  test   %al,%al
084abfd1 +0x083:  jne    084abf86 <+0x38>
084abfd3 +0x085:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084abfda +0x08c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084abfdf +0x091:  mov    %eax,-0x18(%ebp)
084abfe2 +0x094:  mov    -0x18(%ebp),%eax
084abfe5 +0x097:  add    $0x1,%eax
084abfe8 +0x09a:  mov    %eax,-0x14(%ebp)
084abfeb +0x09d:  movl   $0x0,-0x10(%ebp)
084abff2 +0x0a4:  lea    -0x34(%ebp),%eax
084abff5 +0x0a7:  lea    -0x30(%ebp),%edx
084abff8 +0x0aa:  mov    %edx,0x4(%esp)
084abffc +0x0ae:  mov    %eax,(%esp)
084abfff +0x0b1:  call   083285dc <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x535>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x535
084ac004 +0x0b6:  sub    $0x4,%esp
084ac007 +0x0b9:  jmp    084ac249 <+0x2fb>
084ac00c +0x0be:  movl   $0x0,-0x10(%ebp)
084ac013 +0x0c5:  lea    -0x34(%ebp),%eax
084ac016 +0x0c8:  mov    %eax,(%esp)
084ac019 +0x0cb:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
084ac01e +0x0d0:  mov    (%eax),%edx
084ac020 +0x0d2:  mov    %edx,%eax
084ac022 +0x0d4:  shl    $0x3,%eax
084ac025 +0x0d7:  add    %edx,%eax
084ac027 +0x0d9:  shl    $0x5,%eax
084ac02a +0x0dc:  mov    &g_SPremiumInfo+0x5c(%eax),%eax
084ac030 +0x0e2:  cmp    $0x1,%eax
084ac033 +0x0e5:  sete   %al
084ac036 +0x0e8:  test   %al,%al
084ac038 +0x0ea:  je     084ac048 <+0xfa>
084ac03a +0x0ec:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084ac03f +0x0f1:  mov    0x378(%eax),%eax
084ac045 +0x0f7:  mov    %eax,-0x10(%ebp)
084ac048 +0x0fa:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084ac04d +0x0ff:  movl   $0x989,0x8(%esp)
084ac055 +0x107:  movl   $"GameMaster.cpp",0x4(%esp)
084ac05d +0x10f:  mov    %eax,(%esp)
084ac060 +0x112:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084ac065 +0x117:  movl   $0x1,0x8(%esp)
084ac06d +0x11f:  mov    %eax,0x4(%esp)
084ac071 +0x123:  lea    -0x3c(%ebp),%eax
084ac074 +0x126:  mov    %eax,(%esp)
084ac077 +0x129:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084ac07c +0x12e:  lea    -0x3c(%ebp),%eax
084ac07f +0x131:  mov    %eax,(%esp)
084ac082 +0x134:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084ac087 +0x139:  movl   $0x54,0x4(%esp)
084ac08f +0x141:  mov    %eax,(%esp)
084ac092 +0x144:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084ac097 +0x149:  mov    -0x20(%ebp),%eax
084ac09a +0x14c:  mov    %eax,(%esp)
084ac09d +0x14f:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084ac0a2 +0x154:  mov    %eax,%ebx
084ac0a4 +0x156:  lea    -0x3c(%ebp),%eax
084ac0a7 +0x159:  mov    %eax,(%esp)
084ac0aa +0x15c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084ac0af +0x161:  mov    %ebx,0x4(%esp)
084ac0b3 +0x165:  mov    %eax,(%esp)
084ac0b6 +0x168:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084ac0bb +0x16d:  mov    -0x20(%ebp),%eax
084ac0be +0x170:  mov    %eax,(%esp)
084ac0c1 +0x173:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084ac0c6 +0x178:  mov    %eax,%ebx
084ac0c8 +0x17a:  lea    -0x3c(%ebp),%eax
084ac0cb +0x17d:  mov    %eax,(%esp)
084ac0ce +0x180:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084ac0d3 +0x185:  mov    %ebx,0x4(%esp)
084ac0d7 +0x189:  mov    %eax,(%esp)
084ac0da +0x18c:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084ac0df +0x191:  lea    -0x34(%ebp),%eax
084ac0e2 +0x194:  mov    %eax,(%esp)
084ac0e5 +0x197:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
084ac0ea +0x19c:  mov    (%eax),%ebx
084ac0ec +0x19e:  lea    -0x3c(%ebp),%eax
084ac0ef +0x1a1:  mov    %eax,(%esp)
084ac0f2 +0x1a4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084ac0f7 +0x1a9:  mov    %ebx,0x4(%esp)
084ac0fb +0x1ad:  mov    %eax,(%esp)
084ac0fe +0x1b0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084ac103 +0x1b5:  lea    -0x3c(%ebp),%eax
084ac106 +0x1b8:  mov    %eax,(%esp)
084ac109 +0x1bb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084ac10e +0x1c0:  mov    -0x18(%ebp),%edx
084ac111 +0x1c3:  mov    %edx,0x4(%esp)
084ac115 +0x1c7:  mov    %eax,(%esp)
084ac118 +0x1ca:  call   080e2276 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1c
084ac11d +0x1cf:  lea    -0x3c(%ebp),%eax
084ac120 +0x1d2:  mov    %eax,(%esp)
084ac123 +0x1d5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084ac128 +0x1da:  mov    -0x14(%ebp),%edx
084ac12b +0x1dd:  mov    %edx,0x4(%esp)
084ac12f +0x1e1:  mov    %eax,(%esp)
084ac132 +0x1e4:  call   080e2276 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1c
084ac137 +0x1e9:  lea    -0x34(%ebp),%eax
084ac13a +0x1ec:  mov    %eax,(%esp)
084ac13d +0x1ef:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
084ac142 +0x1f4:  mov    0xc(%eax),%ebx
084ac145 +0x1f7:  lea    -0x3c(%ebp),%eax
084ac148 +0x1fa:  mov    %eax,(%esp)
084ac14b +0x1fd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084ac150 +0x202:  mov    %ebx,0x4(%esp)
084ac154 +0x206:  mov    %eax,(%esp)
084ac157 +0x209:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084ac15c +0x20e:  lea    -0x3c(%ebp),%eax
084ac15f +0x211:  mov    %eax,(%esp)
084ac162 +0x214:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084ac167 +0x219:  mov    -0x10(%ebp),%edx
084ac16a +0x21c:  mov    %edx,0x4(%esp)
084ac16e +0x220:  mov    %eax,(%esp)
084ac171 +0x223:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084ac176 +0x228:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084ac17b +0x22d:  lea    -0x3c(%ebp),%edx
084ac17e +0x230:  mov    %edx,0x8(%esp)
084ac182 +0x234:  movl   $0x2,0x4(%esp)
084ac18a +0x23c:  mov    %eax,(%esp)
084ac18d +0x23f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084ac192 +0x244:  lea    -0x34(%ebp),%eax
084ac195 +0x247:  mov    %eax,(%esp)
084ac198 +0x24a:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
084ac19d +0x24f:  mov    0xc(%eax),%ebx
084ac1a0 +0x252:  lea    -0x34(%ebp),%eax
084ac1a3 +0x255:  mov    %eax,(%esp)
084ac1a6 +0x258:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
084ac1ab +0x25d:  mov    (%eax),%eax
084ac1ad +0x25f:  movl   $0x0,0x14(%esp)
084ac1b5 +0x267:  mov    %ebx,0x10(%esp)
084ac1b9 +0x26b:  mov    -0x14(%ebp),%edx
084ac1bc +0x26e:  mov    %edx,0xc(%esp)
084ac1c0 +0x272:  mov    -0x18(%ebp),%edx
084ac1c3 +0x275:  mov    %edx,0x8(%esp)
084ac1c7 +0x279:  mov    %eax,0x4(%esp)
084ac1cb +0x27d:  mov    -0x20(%ebp),%eax
084ac1ce +0x280:  mov    %eax,(%esp)
084ac1d1 +0x283:  call   086af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>  ; WongWork::CHandlePremium::handleSetUserPremium(CUser*, ENUM_PREMIUM_TYPE, long, long, int, bool)
084ac1d6 +0x288:  lea    -0x34(%ebp),%eax
084ac1d9 +0x28b:  mov    %eax,(%esp)
084ac1dc +0x28e:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
084ac1e1 +0x293:  mov    (%eax),%eax
084ac1e3 +0x295:  mov    %eax,0x4(%esp)
084ac1e7 +0x299:  mov    -0x20(%ebp),%eax
084ac1ea +0x29c:  mov    %eax,(%esp)
084ac1ed +0x29f:  call   086afc32 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE>  ; WongWork::CHandlePremium::handlePremiumEffect(CUser*, ENUM_PREMIUM_TYPE)
084ac1f2 +0x2a4:  mov    -0x18(%ebp),%eax
084ac1f5 +0x2a7:  mov    -0x14(%ebp),%edx
084ac1f8 +0x2aa:  mov    %edx,%ebx
084ac1fa +0x2ac:  sub    %eax,%ebx
084ac1fc +0x2ae:  lea    -0x34(%ebp),%eax
084ac1ff +0x2b1:  mov    %eax,(%esp)
084ac202 +0x2b4:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
084ac207 +0x2b9:  mov    (%eax),%eax
084ac209 +0x2bb:  mov    %ebx,0x8(%esp)
084ac20d +0x2bf:  mov    %eax,0x4(%esp)
084ac211 +0x2c3:  mov    -0x20(%ebp),%eax
084ac214 +0x2c6:  mov    %eax,(%esp)
084ac217 +0x2c9:  call   086af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>  ; WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser*, int, int)
084ac21c +0x2ce:  jmp    084ac233 <+0x2e5>
084ac21e +0x2d0:  mov    %edx,%ebx
084ac220 +0x2d2:  mov    %eax,%esi
084ac222 +0x2d4:  lea    -0x3c(%ebp),%eax
084ac225 +0x2d7:  mov    %eax,(%esp)
084ac228 +0x2da:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084ac22d +0x2df:  mov    %esi,%eax
084ac22f +0x2e1:  mov    %ebx,%edx
084ac231 +0x2e3:  jmp    084ac27a <+0x32c>
084ac233 +0x2e5:  lea    -0x3c(%ebp),%eax
084ac236 +0x2e8:  mov    %eax,(%esp)
084ac239 +0x2eb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084ac23e +0x2f0:  lea    -0x34(%ebp),%eax
084ac241 +0x2f3:  mov    %eax,(%esp)
084ac244 +0x2f6:  call   08328652 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5ab>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5ab
084ac249 +0x2fb:  lea    -0x24(%ebp),%eax
084ac24c +0x2fe:  lea    -0x30(%ebp),%edx
084ac24f +0x301:  mov    %edx,0x4(%esp)
084ac253 +0x305:  mov    %eax,(%esp)
084ac256 +0x308:  call   08328600 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x559>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x559
084ac25b +0x30d:  sub    $0x4,%esp
084ac25e +0x310:  lea    -0x24(%ebp),%eax
084ac261 +0x313:  mov    %eax,0x4(%esp)
084ac265 +0x317:  lea    -0x34(%ebp),%eax
084ac268 +0x31a:  mov    %eax,(%esp)
084ac26b +0x31d:  call   08328626 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x57f>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x57f
084ac270 +0x322:  test   %al,%al
084ac272 +0x324:  jne    084ac00c <+0xbe>
084ac278 +0x32a:  jmp    084ac295 <+0x347>
084ac27a +0x32c:  mov    %edx,%ebx
084ac27c +0x32e:  mov    %eax,%esi
084ac27e +0x330:  lea    -0x30(%ebp),%eax
084ac281 +0x333:  mov    %eax,(%esp)
084ac284 +0x336:  call   0832850a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x463>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x463
084ac289 +0x33b:  mov    %esi,%eax
084ac28b +0x33d:  mov    %ebx,%edx
084ac28d +0x33f:  mov    %eax,(%esp)
084ac290 +0x342:  call   08ae3750 <_Unwind_Resume>
084ac295 +0x347:  lea    -0x30(%ebp),%eax
084ac298 +0x34a:  mov    %eax,(%esp)
084ac29b +0x34d:  call   0832850a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x463>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x463
084ac2a0 +0x352:  lea    -0x8(%ebp),%esp
084ac2a3 +0x355:  add    $0x0,%esp
084ac2a6 +0x358:  pop    %ebx
084ac2a7 +0x359:  pop    %esi
084ac2a8 +0x35a:  pop    %ebp
084ac2a9 +0x35b:  ret
```

## 反编译 C

```c
// game_master::CUserPremiumDelete::execute @ 0x84abf4e

/* game_master::CUserPremiumDelete::execute() */

void __thiscall game_master::CUserPremiumDelete::execute(CUserPremiumDelete *this)

{
  undefined4 uVar1;
  bool bVar2;
  SUserPremiumInfo *pSVar3;
  int *piVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  uint uVar8;
  undefined4 *puVar9;
  CStreamGuard local_40 [8];
  __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
  local_38 [4];
  vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> local_34 [12];
  __normal_iterator local_28 [4];
  CUser *local_24;
  CUserPremium *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_24 = (CUser *)CCommand::GetUser((CCommand *)this);
  local_20 = (CUserPremium *)CUser::GetPremiumInfo(local_24);
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::vector
            (local_34);
  for (local_10 = 1; local_10 < 0x6a; local_10 = local_10 + 1) {
                    /* try { // try from 084abf93 to 084ac064 has its CatchHandler @ 084ac27a */
    piVar4 = (int *)WongWork::CUserPremium::GetPremiumInfo(local_20,local_10);
    if (*piVar4 != 0) {
      pSVar3 = (SUserPremiumInfo *)WongWork::CUserPremium::GetPremiumInfo(local_20,local_10);
      std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::push_back
                (local_34,pSVar3);
    }
  }
  local_1c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_18 = local_1c + 1;
  local_14 = 0;
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::begin();
  while( true ) {
    std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::end();
    bVar2 = __gnu_cxx::operator!=(local_38,local_28);
    if (!bVar2) break;
    local_14 = 0;
    piVar4 = (int *)__gnu_cxx::
                    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                    ::operator->(local_38);
    if (*(int *)(g_SPremiumInfo + *piVar4 * 0x120 + 0x5c) == 1) {
      iVar5 = G_CEnvironment();
      local_14 = *(uint *)(iVar5 + 0x378);
    }
    pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"GameMaster.cpp",0x989);
    CStreamGuard::CStreamGuard(local_40,pSVar6,true);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
                    /* try { // try from 084ac092 to 084ac21b has its CatchHandler @ 084ac21e */
    CStreamGuard::operator<<(pCVar7,0x54);
    iVar5 = CUser::GetUID(local_24);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,iVar5);
    uVar8 = CUser::get_acc_id(local_24);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,uVar8);
    piVar4 = (int *)__gnu_cxx::
                    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                    ::operator->(local_38);
    iVar5 = *piVar4;
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,iVar5);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,local_1c);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,local_18);
    iVar5 = __gnu_cxx::
            __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
            ::operator->(local_38);
    iVar5 = *(int *)(iVar5 + 0xc);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,iVar5);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar7,local_14);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_40);
    iVar5 = __gnu_cxx::
            __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
            ::operator->(local_38);
    uVar1 = *(undefined4 *)(iVar5 + 0xc);
    puVar9 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
             ::operator->(local_38);
    WongWork::CHandlePremium::handleSetUserPremium(local_24,*puVar9,local_1c,local_18,uVar1,0);
    puVar9 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
             ::operator->(local_38);
    WongWork::CHandlePremium::handlePremiumEffect(local_24,*puVar9);
    iVar5 = local_18 - local_1c;
    piVar4 = (int *)__gnu_cxx::
                    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                    ::operator->(local_38);
    WongWork::CHandlePremium::handleNotifyPremiumInfo(local_24,*piVar4,iVar5);
                    /* try { // try from 084ac239 to 084ac26f has its CatchHandler @ 084ac27a */
    CStreamGuard::~CStreamGuard(local_40);
    __gnu_cxx::
    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
    ::operator++(local_38);
  }
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::~vector
            (local_34);
  return;
}
```
