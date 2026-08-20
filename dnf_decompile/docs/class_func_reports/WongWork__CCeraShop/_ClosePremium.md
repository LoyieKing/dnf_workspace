# _ClosePremium

`_ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri`

`WongWork::CCeraShop::_ClosePremium(CUser*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08327bb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08327bb6  _ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri
#           WongWork::CCeraShop::_ClosePremium(CUser*, int)
# range [0x08327bb6, 0x08327ee5]
08327bb6 +0x000:  push   %ebp
08327bb7 +0x001:  mov    %esp,%ebp
08327bb9 +0x003:  push   %esi
08327bba +0x004:  push   %ebx
08327bbb +0x005:  sub    $0x50,%esp
08327bbe +0x008:  mov    0xc(%ebp),%eax
08327bc1 +0x00b:  mov    %eax,(%esp)
08327bc4 +0x00e:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
08327bc9 +0x013:  mov    %eax,-0x18(%ebp)
08327bcc +0x016:  lea    -0x28(%ebp),%eax
08327bcf +0x019:  mov    %eax,(%esp)
08327bd2 +0x01c:  call   083284f6 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x44f>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x44f
08327bd7 +0x021:  mov    0x10(%ebp),%eax
08327bda +0x024:  mov    %eax,0x4(%esp)
08327bde +0x028:  mov    -0x18(%ebp),%eax
08327be1 +0x02b:  mov    %eax,(%esp)
08327be4 +0x02e:  call   086adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>  ; WongWork::CUserPremium::GetPremiumInfo(int) const
08327be9 +0x033:  mov    (%eax),%eax
08327beb +0x035:  test   %eax,%eax
08327bed +0x037:  setne  %al
08327bf0 +0x03a:  test   %al,%al
08327bf2 +0x03c:  je     08327c15 <+0x5f>
08327bf4 +0x03e:  mov    0x10(%ebp),%eax
08327bf7 +0x041:  mov    %eax,0x4(%esp)
08327bfb +0x045:  mov    -0x18(%ebp),%eax
08327bfe +0x048:  mov    %eax,(%esp)
08327c01 +0x04b:  call   086adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>  ; WongWork::CUserPremium::GetPremiumInfo(int) const
08327c06 +0x050:  mov    %eax,0x4(%esp)
08327c0a +0x054:  lea    -0x28(%ebp),%eax
08327c0d +0x057:  mov    %eax,(%esp)
08327c10 +0x05a:  call   08328568 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x4c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x4c1
08327c15 +0x05f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08327c1c +0x066:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08327c21 +0x06b:  mov    %eax,-0x14(%ebp)
08327c24 +0x06e:  mov    -0x14(%ebp),%eax
08327c27 +0x071:  add    $0x1,%eax
08327c2a +0x074:  mov    %eax,-0x10(%ebp)
08327c2d +0x077:  movl   $0x0,-0xc(%ebp)
08327c34 +0x07e:  lea    -0x2c(%ebp),%eax
08327c37 +0x081:  lea    -0x28(%ebp),%edx
08327c3a +0x084:  mov    %edx,0x4(%esp)
08327c3e +0x088:  mov    %eax,(%esp)
08327c41 +0x08b:  call   083285dc <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x535>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x535
08327c46 +0x090:  sub    $0x4,%esp
08327c49 +0x093:  jmp    08327e85 <+0x2cf>
08327c4e +0x098:  movl   $0x0,-0xc(%ebp)
08327c55 +0x09f:  lea    -0x2c(%ebp),%eax
08327c58 +0x0a2:  mov    %eax,(%esp)
08327c5b +0x0a5:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
08327c60 +0x0aa:  mov    (%eax),%edx
08327c62 +0x0ac:  mov    %edx,%eax
08327c64 +0x0ae:  shl    $0x3,%eax
08327c67 +0x0b1:  add    %edx,%eax
08327c69 +0x0b3:  shl    $0x5,%eax
08327c6c +0x0b6:  mov    &g_SPremiumInfo+0x5c(%eax),%eax
08327c72 +0x0bc:  cmp    $0x1,%eax
08327c75 +0x0bf:  sete   %al
08327c78 +0x0c2:  test   %al,%al
08327c7a +0x0c4:  je     08327c8a <+0xd4>
08327c7c +0x0c6:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08327c81 +0x0cb:  mov    0x378(%eax),%eax
08327c87 +0x0d1:  mov    %eax,-0xc(%ebp)
08327c8a +0x0d4:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08327c8f +0x0d9:  movl   $0x20e7,0x8(%esp)
08327c97 +0x0e1:  movl   $"CeraShop.cpp",0x4(%esp)
08327c9f +0x0e9:  mov    %eax,(%esp)
08327ca2 +0x0ec:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08327ca7 +0x0f1:  movl   $0x1,0x8(%esp)
08327caf +0x0f9:  mov    %eax,0x4(%esp)
08327cb3 +0x0fd:  lea    -0x34(%ebp),%eax
08327cb6 +0x100:  mov    %eax,(%esp)
08327cb9 +0x103:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08327cbe +0x108:  lea    -0x34(%ebp),%eax
08327cc1 +0x10b:  mov    %eax,(%esp)
08327cc4 +0x10e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08327cc9 +0x113:  movl   $0x54,0x4(%esp)
08327cd1 +0x11b:  mov    %eax,(%esp)
08327cd4 +0x11e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08327cd9 +0x123:  mov    0xc(%ebp),%eax
08327cdc +0x126:  mov    %eax,(%esp)
08327cdf +0x129:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08327ce4 +0x12e:  mov    %eax,%ebx
08327ce6 +0x130:  lea    -0x34(%ebp),%eax
08327ce9 +0x133:  mov    %eax,(%esp)
08327cec +0x136:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08327cf1 +0x13b:  mov    %ebx,0x4(%esp)
08327cf5 +0x13f:  mov    %eax,(%esp)
08327cf8 +0x142:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08327cfd +0x147:  mov    0xc(%ebp),%eax
08327d00 +0x14a:  mov    %eax,(%esp)
08327d03 +0x14d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08327d08 +0x152:  mov    %eax,%ebx
08327d0a +0x154:  lea    -0x34(%ebp),%eax
08327d0d +0x157:  mov    %eax,(%esp)
08327d10 +0x15a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08327d15 +0x15f:  mov    %ebx,0x4(%esp)
08327d19 +0x163:  mov    %eax,(%esp)
08327d1c +0x166:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08327d21 +0x16b:  lea    -0x2c(%ebp),%eax
08327d24 +0x16e:  mov    %eax,(%esp)
08327d27 +0x171:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
08327d2c +0x176:  mov    (%eax),%ebx
08327d2e +0x178:  lea    -0x34(%ebp),%eax
08327d31 +0x17b:  mov    %eax,(%esp)
08327d34 +0x17e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08327d39 +0x183:  mov    %ebx,0x4(%esp)
08327d3d +0x187:  mov    %eax,(%esp)
08327d40 +0x18a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08327d45 +0x18f:  lea    -0x34(%ebp),%eax
08327d48 +0x192:  mov    %eax,(%esp)
08327d4b +0x195:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08327d50 +0x19a:  mov    -0x14(%ebp),%edx
08327d53 +0x19d:  mov    %edx,0x4(%esp)
08327d57 +0x1a1:  mov    %eax,(%esp)
08327d5a +0x1a4:  call   080e2276 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1c
08327d5f +0x1a9:  lea    -0x34(%ebp),%eax
08327d62 +0x1ac:  mov    %eax,(%esp)
08327d65 +0x1af:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08327d6a +0x1b4:  mov    -0x10(%ebp),%edx
08327d6d +0x1b7:  mov    %edx,0x4(%esp)
08327d71 +0x1bb:  mov    %eax,(%esp)
08327d74 +0x1be:  call   080e2276 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1c
08327d79 +0x1c3:  lea    -0x2c(%ebp),%eax
08327d7c +0x1c6:  mov    %eax,(%esp)
08327d7f +0x1c9:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
08327d84 +0x1ce:  mov    0xc(%eax),%ebx
08327d87 +0x1d1:  lea    -0x34(%ebp),%eax
08327d8a +0x1d4:  mov    %eax,(%esp)
08327d8d +0x1d7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08327d92 +0x1dc:  mov    %ebx,0x4(%esp)
08327d96 +0x1e0:  mov    %eax,(%esp)
08327d99 +0x1e3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08327d9e +0x1e8:  lea    -0x34(%ebp),%eax
08327da1 +0x1eb:  mov    %eax,(%esp)
08327da4 +0x1ee:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08327da9 +0x1f3:  mov    -0xc(%ebp),%edx
08327dac +0x1f6:  mov    %edx,0x4(%esp)
08327db0 +0x1fa:  mov    %eax,(%esp)
08327db3 +0x1fd:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08327db8 +0x202:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08327dbd +0x207:  lea    -0x34(%ebp),%edx
08327dc0 +0x20a:  mov    %edx,0x8(%esp)
08327dc4 +0x20e:  movl   $0x2,0x4(%esp)
08327dcc +0x216:  mov    %eax,(%esp)
08327dcf +0x219:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08327dd4 +0x21e:  lea    -0x2c(%ebp),%eax
08327dd7 +0x221:  mov    %eax,(%esp)
08327dda +0x224:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
08327ddf +0x229:  mov    0xc(%eax),%ebx
08327de2 +0x22c:  lea    -0x2c(%ebp),%eax
08327de5 +0x22f:  mov    %eax,(%esp)
08327de8 +0x232:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
08327ded +0x237:  mov    (%eax),%eax
08327def +0x239:  movl   $0x0,0x14(%esp)
08327df7 +0x241:  mov    %ebx,0x10(%esp)
08327dfb +0x245:  mov    -0x10(%ebp),%edx
08327dfe +0x248:  mov    %edx,0xc(%esp)
08327e02 +0x24c:  mov    -0x14(%ebp),%edx
08327e05 +0x24f:  mov    %edx,0x8(%esp)
08327e09 +0x253:  mov    %eax,0x4(%esp)
08327e0d +0x257:  mov    0xc(%ebp),%eax
08327e10 +0x25a:  mov    %eax,(%esp)
08327e13 +0x25d:  call   086af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>  ; WongWork::CHandlePremium::handleSetUserPremium(CUser*, ENUM_PREMIUM_TYPE, long, long, int, bool)
08327e18 +0x262:  lea    -0x2c(%ebp),%eax
08327e1b +0x265:  mov    %eax,(%esp)
08327e1e +0x268:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
08327e23 +0x26d:  mov    (%eax),%eax
08327e25 +0x26f:  mov    %eax,0x4(%esp)
08327e29 +0x273:  mov    0xc(%ebp),%eax
08327e2c +0x276:  mov    %eax,(%esp)
08327e2f +0x279:  call   086afc32 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE>  ; WongWork::CHandlePremium::handlePremiumEffect(CUser*, ENUM_PREMIUM_TYPE)
08327e34 +0x27e:  lea    -0x2c(%ebp),%eax
08327e37 +0x281:  mov    %eax,(%esp)
08327e3a +0x284:  call   08328668 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5c1>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5c1
08327e3f +0x289:  mov    (%eax),%eax
08327e41 +0x28b:  movl   $0x0,0x8(%esp)
08327e49 +0x293:  mov    %eax,0x4(%esp)
08327e4d +0x297:  mov    0xc(%ebp),%eax
08327e50 +0x29a:  mov    %eax,(%esp)
08327e53 +0x29d:  call   086af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>  ; WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser*, int, int)
08327e58 +0x2a2:  jmp    08327e6f <+0x2b9>
08327e5a +0x2a4:  mov    %edx,%ebx
08327e5c +0x2a6:  mov    %eax,%esi
08327e5e +0x2a8:  lea    -0x34(%ebp),%eax
08327e61 +0x2ab:  mov    %eax,(%esp)
08327e64 +0x2ae:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08327e69 +0x2b3:  mov    %esi,%eax
08327e6b +0x2b5:  mov    %ebx,%edx
08327e6d +0x2b7:  jmp    08327eb6 <+0x300>
08327e6f +0x2b9:  lea    -0x34(%ebp),%eax
08327e72 +0x2bc:  mov    %eax,(%esp)
08327e75 +0x2bf:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08327e7a +0x2c4:  lea    -0x2c(%ebp),%eax
08327e7d +0x2c7:  mov    %eax,(%esp)
08327e80 +0x2ca:  call   08328652 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x5ab>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x5ab
08327e85 +0x2cf:  lea    -0x1c(%ebp),%eax
08327e88 +0x2d2:  lea    -0x28(%ebp),%edx
08327e8b +0x2d5:  mov    %edx,0x4(%esp)
08327e8f +0x2d9:  mov    %eax,(%esp)
08327e92 +0x2dc:  call   08328600 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x559>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x559
08327e97 +0x2e1:  sub    $0x4,%esp
08327e9a +0x2e4:  lea    -0x1c(%ebp),%eax
08327e9d +0x2e7:  mov    %eax,0x4(%esp)
08327ea1 +0x2eb:  lea    -0x2c(%ebp),%eax
08327ea4 +0x2ee:  mov    %eax,(%esp)
08327ea7 +0x2f1:  call   08328626 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x57f>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x57f
08327eac +0x2f6:  test   %al,%al
08327eae +0x2f8:  jne    08327c4e <+0x98>
08327eb4 +0x2fe:  jmp    08327ed1 <+0x31b>
08327eb6 +0x300:  mov    %edx,%ebx
08327eb8 +0x302:  mov    %eax,%esi
08327eba +0x304:  lea    -0x28(%ebp),%eax
08327ebd +0x307:  mov    %eax,(%esp)
08327ec0 +0x30a:  call   0832850a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x463>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x463
08327ec5 +0x30f:  mov    %esi,%eax
08327ec7 +0x311:  mov    %ebx,%edx
08327ec9 +0x313:  mov    %eax,(%esp)
08327ecc +0x316:  call   08ae3750 <_Unwind_Resume>
08327ed1 +0x31b:  lea    -0x28(%ebp),%eax
08327ed4 +0x31e:  mov    %eax,(%esp)
08327ed7 +0x321:  call   0832850a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x463>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x463
08327edc +0x326:  lea    -0x8(%ebp),%esp
08327edf +0x329:  add    $0x0,%esp
08327ee2 +0x32c:  pop    %ebx
08327ee3 +0x32d:  pop    %esi
08327ee4 +0x32e:  pop    %ebp
08327ee5 +0x32f:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::_ClosePremium @ 0x8327bb6

/* WongWork::CCeraShop::_ClosePremium(CUser*, int) */

void __thiscall WongWork::CCeraShop::_ClosePremium(CCeraShop *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  SUserPremiumInfo *pSVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  uint uVar8;
  undefined4 *puVar9;
  CStreamGuard local_38 [8];
  __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
  local_30 [4];
  vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> local_2c [12];
  __normal_iterator local_20 [4];
  CUserPremium *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  local_1c = (CUserPremium *)CUser::GetPremiumInfo(param_1);
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::vector
            (local_2c);
                    /* try { // try from 08327be4 to 08327ca6 has its CatchHandler @ 08327eb6 */
  piVar3 = (int *)CUserPremium::GetPremiumInfo(local_1c,param_2);
  if (*piVar3 != 0) {
    pSVar4 = (SUserPremiumInfo *)CUserPremium::GetPremiumInfo(local_1c,param_2);
    std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::push_back
              (local_2c,pSVar4);
  }
  local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_14 = local_18 + 1;
  local_10 = 0;
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::begin();
  while( true ) {
    std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::end();
    bVar2 = __gnu_cxx::operator!=(local_30,local_20);
    if (!bVar2) break;
    local_10 = 0;
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                    ::operator->(local_30);
    if (*(int *)(g_SPremiumInfo + *piVar3 * 0x120 + 0x5c) == 1) {
      iVar5 = G_CEnvironment();
      local_10 = *(uint *)(iVar5 + 0x378);
    }
    pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"CeraShop.cpp",0x20e7);
    CStreamGuard::CStreamGuard(local_38,pSVar6,true);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 08327cd4 to 08327e57 has its CatchHandler @ 08327e5a */
    CStreamGuard::operator<<(pCVar7,0x54);
    iVar5 = CUser::GetUID(param_1);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,iVar5);
    uVar8 = CUser::get_acc_id(param_1);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,uVar8);
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                    ::operator->(local_30);
    iVar5 = *piVar3;
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,iVar5);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,local_18);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,local_14);
    iVar5 = __gnu_cxx::
            __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
            ::operator->(local_30);
    iVar5 = *(int *)(iVar5 + 0xc);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,iVar5);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,local_10);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_38);
    iVar5 = __gnu_cxx::
            __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
            ::operator->(local_30);
    uVar1 = *(undefined4 *)(iVar5 + 0xc);
    puVar9 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
             ::operator->(local_30);
    CHandlePremium::handleSetUserPremium(param_1,*puVar9,local_18,local_14,uVar1,0);
    puVar9 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
             ::operator->(local_30);
    CHandlePremium::handlePremiumEffect(param_1,*puVar9);
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                    ::operator->(local_30);
    CHandlePremium::handleNotifyPremiumInfo(param_1,*piVar3,0);
                    /* try { // try from 08327e75 to 08327eab has its CatchHandler @ 08327eb6 */
    CStreamGuard::~CStreamGuard(local_38);
    __gnu_cxx::
    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
    ::operator++(local_30);
  }
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::~vector
            (local_2c);
  return;
}
```
