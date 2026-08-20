# CheckLottery

`_ZN10secretshop11CSecretShop12CheckLotteryEv`

`secretshop::CSecretShop::CheckLottery()`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShop` | `0x085fad20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fad20  _ZN10secretshop11CSecretShop12CheckLotteryEv
#           secretshop::CSecretShop::CheckLottery()
# range [0x085fad20, 0x085fb169]
085fad20 +0x000:  push   %ebp
085fad21 +0x001:  mov    %esp,%ebp
085fad23 +0x003:  push   %esi
085fad24 +0x004:  push   %ebx
085fad25 +0x005:  sub    $0xb0,%esp
085fad2b +0x00b:  lea    -0x54(%ebp),%eax
085fad2e +0x00e:  mov    %eax,(%esp)
085fad31 +0x011:  call   082ab002 <_GLOBAL__I__ZN4CLog5this_E+0x7429>  ; global constructors keyed to CLog::this_+0x7429
085fad36 +0x016:  lea    -0x6c(%ebp),%eax
085fad39 +0x019:  mov    %eax,(%esp)
085fad3c +0x01c:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
085fad41 +0x021:  movl   $"wt",0x4(%esp)
085fad49 +0x029:  movl   $"secretshop_lottery.txt",(%esp)
085fad50 +0x030:  call   0807e770 <_init+0x1068>
085fad55 +0x035:  mov    %eax,-0x14(%ebp)
085fad58 +0x038:  cmpl   $0x0,-0x14(%ebp)
085fad5c +0x03c:  jne    085fad68 <+0x48>
085fad5e +0x03e:  mov    $0x0,%ebx
085fad63 +0x043:  jmp    085fb131 <+0x411>
085fad68 +0x048:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085fad6d +0x04d:  mov    (%eax),%eax
085fad6f +0x04f:  mov    %eax,%edx
085fad71 +0x051:  lea    -0x74(%ebp),%eax
085fad74 +0x054:  mov    %edx,0x4(%esp)
085fad78 +0x058:  mov    %eax,(%esp)
085fad7b +0x05b:  call   0838a74a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a1ea>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a1ea
085fad80 +0x060:  sub    $0x4,%esp
085fad83 +0x063:  jmp    085fb0d5 <+0x3b5>
085fad88 +0x068:  lea    -0x6c(%ebp),%eax
085fad8b +0x06b:  mov    %eax,(%esp)
085fad8e +0x06e:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
085fad93 +0x073:  movl   $0x0,-0xc(%ebp)
085fad9a +0x07a:  jmp    085faf1d <+0x1fd>
085fad9f +0x07f:  lea    -0x74(%ebp),%eax
085fada2 +0x082:  mov    %eax,(%esp)
085fada5 +0x085:  call   0838a7aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a24a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a24a
085fadaa +0x08a:  mov    0x4(%eax),%eax
085fadad +0x08d:  mov    %eax,(%esp)
085fadb0 +0x090:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085fadb5 +0x095:  mov    %eax,%ebx
085fadb7 +0x097:  lea    -0x74(%ebp),%eax
085fadba +0x09a:  mov    %eax,(%esp)
085fadbd +0x09d:  call   0838a7aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a24a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a24a
085fadc2 +0x0a2:  mov    0x4(%eax),%eax
085fadc5 +0x0a5:  mov    %eax,(%esp)
085fadc8 +0x0a8:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085fadcd +0x0ad:  mov    %ebx,0x10(%esp)
085fadd1 +0x0b1:  mov    %eax,0xc(%esp)
085fadd5 +0x0b5:  movl   $0x3ea,0x8(%esp)
085faddd +0x0bd:  lea    -0x54(%ebp),%eax
085fade0 +0x0c0:  mov    %eax,0x4(%esp)
085fade4 +0x0c4:  mov    0x8(%ebp),%eax
085fade7 +0x0c7:  mov    %eax,(%esp)
085fadea +0x0ca:  call   085fac68 <_ZN10secretshop11CSecretShop12LotteryItemsERSt6vectorINS_9SALE_INFOESaIS2_EEiii>  ; secretshop::CSecretShop::LotteryItems(std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int, int, int)
085fadef +0x0cf:  lea    -0x80(%ebp),%eax
085fadf2 +0x0d2:  lea    -0x54(%ebp),%edx
085fadf5 +0x0d5:  mov    %edx,0x4(%esp)
085fadf9 +0x0d9:  mov    %eax,(%esp)
085fadfc +0x0dc:  call   085fc2b4 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x446>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x446
085fae01 +0x0e1:  sub    $0x4,%esp
085fae04 +0x0e4:  jmp    085faedf <+0x1bf>
085fae09 +0x0e9:  lea    -0x80(%ebp),%eax
085fae0c +0x0ec:  mov    %eax,(%esp)
085fae0f +0x0ef:  call   085fc32a <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x4bc>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x4bc
085fae14 +0x0f4:  mov    %eax,%edx
085fae16 +0x0f6:  lea    -0x84(%ebp),%eax
085fae1c +0x0fc:  mov    %edx,0x8(%esp)
085fae20 +0x100:  lea    -0x6c(%ebp),%edx
085fae23 +0x103:  mov    %edx,0x4(%esp)
085fae27 +0x107:  mov    %eax,(%esp)
085fae2a +0x10a:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
085fae2f +0x10f:  sub    $0x4,%esp
085fae32 +0x112:  lea    -0x3c(%ebp),%eax
085fae35 +0x115:  lea    -0x6c(%ebp),%edx
085fae38 +0x118:  mov    %edx,0x4(%esp)
085fae3c +0x11c:  mov    %eax,(%esp)
085fae3f +0x11f:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
085fae44 +0x124:  sub    $0x4,%esp
085fae47 +0x127:  lea    -0x3c(%ebp),%eax
085fae4a +0x12a:  mov    %eax,0x4(%esp)
085fae4e +0x12e:  lea    -0x84(%ebp),%eax
085fae54 +0x134:  mov    %eax,(%esp)
085fae57 +0x137:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
085fae5c +0x13c:  test   %al,%al
085fae5e +0x13e:  je     085fae79 <+0x159>
085fae60 +0x140:  lea    -0x84(%ebp),%eax
085fae66 +0x146:  mov    %eax,(%esp)
085fae69 +0x149:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
085fae6e +0x14e:  mov    0x4(%eax),%edx
085fae71 +0x151:  add    $0x1,%edx
085fae74 +0x154:  mov    %edx,0x4(%eax)
085fae77 +0x157:  jmp    085faed4 <+0x1b4>
085fae79 +0x159:  movl   $0x1,-0x20(%ebp)
085fae80 +0x160:  lea    -0x80(%ebp),%eax
085fae83 +0x163:  mov    %eax,(%esp)
085fae86 +0x166:  call   085fc32a <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x4bc>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x4bc
085fae8b +0x16b:  mov    %eax,%edx
085fae8d +0x16d:  lea    -0x28(%ebp),%eax
085fae90 +0x170:  lea    -0x20(%ebp),%ecx
085fae93 +0x173:  mov    %ecx,0x8(%esp)
085fae97 +0x177:  mov    %edx,0x4(%esp)
085fae9b +0x17b:  mov    %eax,(%esp)
085fae9e +0x17e:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
085faea3 +0x183:  sub    $0x4,%esp
085faea6 +0x186:  lea    -0x28(%ebp),%eax
085faea9 +0x189:  mov    %eax,0x4(%esp)
085faead +0x18d:  lea    -0x30(%ebp),%eax
085faeb0 +0x190:  mov    %eax,(%esp)
085faeb3 +0x193:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
085faeb8 +0x198:  lea    -0x38(%ebp),%eax
085faebb +0x19b:  lea    -0x30(%ebp),%edx
085faebe +0x19e:  mov    %edx,0x8(%esp)
085faec2 +0x1a2:  lea    -0x6c(%ebp),%edx
085faec5 +0x1a5:  mov    %edx,0x4(%esp)
085faec9 +0x1a9:  mov    %eax,(%esp)
085faecc +0x1ac:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
085faed1 +0x1b1:  sub    $0x4,%esp
085faed4 +0x1b4:  lea    -0x80(%ebp),%eax
085faed7 +0x1b7:  mov    %eax,(%esp)
085faeda +0x1ba:  call   085fc334 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x4c6>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x4c6
085faedf +0x1bf:  lea    -0x40(%ebp),%eax
085faee2 +0x1c2:  lea    -0x54(%ebp),%edx
085faee5 +0x1c5:  mov    %edx,0x4(%esp)
085faee9 +0x1c9:  mov    %eax,(%esp)
085faeec +0x1cc:  call   085fc2d8 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x46a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x46a
085faef1 +0x1d1:  sub    $0x4,%esp
085faef4 +0x1d4:  lea    -0x40(%ebp),%eax
085faef7 +0x1d7:  mov    %eax,0x4(%esp)
085faefb +0x1db:  lea    -0x80(%ebp),%eax
085faefe +0x1de:  mov    %eax,(%esp)
085faf01 +0x1e1:  call   085fc2fe <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x490>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x490
085faf06 +0x1e6:  test   %al,%al
085faf08 +0x1e8:  jne    085fae09 <+0xe9>
085faf0e +0x1ee:  lea    -0x54(%ebp),%eax
085faf11 +0x1f1:  mov    %eax,(%esp)
085faf14 +0x1f4:  call   085fc034 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x1c6>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x1c6
085faf19 +0x1f9:  addl   $0x1,-0xc(%ebp)
085faf1d +0x1fd:  cmpl   $0x270f,-0xc(%ebp)
085faf24 +0x204:  setle  %al
085faf27 +0x207:  test   %al,%al
085faf29 +0x209:  jne    085fad9f <+0x7f>
085faf2f +0x20f:  lea    -0x74(%ebp),%eax
085faf32 +0x212:  mov    %eax,(%esp)
085faf35 +0x215:  call   0838a7aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a24a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a24a
085faf3a +0x21a:  mov    0x4(%eax),%eax
085faf3d +0x21d:  mov    %eax,(%esp)
085faf40 +0x220:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085faf45 +0x225:  mov    %eax,%esi
085faf47 +0x227:  lea    -0x74(%ebp),%eax
085faf4a +0x22a:  mov    %eax,(%esp)
085faf4d +0x22d:  call   0838a7aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a24a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a24a
085faf52 +0x232:  mov    0x4(%eax),%eax
085faf55 +0x235:  mov    %eax,(%esp)
085faf58 +0x238:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085faf5d +0x23d:  mov    %eax,%ebx
085faf5f +0x23f:  lea    -0x74(%ebp),%eax
085faf62 +0x242:  mov    %eax,(%esp)
085faf65 +0x245:  call   0838a7aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a24a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a24a
085faf6a +0x24a:  mov    0x4(%eax),%eax
085faf6d +0x24d:  mov    %eax,(%esp)
085faf70 +0x250:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
085faf75 +0x255:  mov    %esi,0x10(%esp)
085faf79 +0x259:  mov    %ebx,0xc(%esp)
085faf7d +0x25d:  mov    %eax,0x8(%esp)
085faf81 +0x261:  movl   $"Dungeon : %s(idx:%d, lev:%d)\n",0x4(%esp)
085faf89 +0x269:  mov    -0x14(%ebp),%eax
085faf8c +0x26c:  mov    %eax,(%esp)
085faf8f +0x26f:  call   0807da90 <_init+0x388>
085faf94 +0x274:  movl   $0x0,-0x10(%ebp)
085faf9b +0x27b:  lea    -0x78(%ebp),%eax
085faf9e +0x27e:  lea    -0x6c(%ebp),%edx
085fafa1 +0x281:  mov    %edx,0x4(%esp)
085fafa5 +0x285:  mov    %eax,(%esp)
085fafa8 +0x288:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
085fafad +0x28d:  sub    $0x4,%esp
085fafb0 +0x290:  jmp    085fafce <+0x2ae>
085fafb2 +0x292:  lea    -0x78(%ebp),%eax
085fafb5 +0x295:  mov    %eax,(%esp)
085fafb8 +0x298:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
085fafbd +0x29d:  mov    0x4(%eax),%eax
085fafc0 +0x2a0:  add    %eax,-0x10(%ebp)
085fafc3 +0x2a3:  lea    -0x78(%ebp),%eax
085fafc6 +0x2a6:  mov    %eax,(%esp)
085fafc9 +0x2a9:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
085fafce +0x2ae:  lea    -0x1c(%ebp),%eax
085fafd1 +0x2b1:  lea    -0x6c(%ebp),%edx
085fafd4 +0x2b4:  mov    %edx,0x4(%esp)
085fafd8 +0x2b8:  mov    %eax,(%esp)
085fafdb +0x2bb:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
085fafe0 +0x2c0:  sub    $0x4,%esp
085fafe3 +0x2c3:  lea    -0x1c(%ebp),%eax
085fafe6 +0x2c6:  mov    %eax,0x4(%esp)
085fafea +0x2ca:  lea    -0x78(%ebp),%eax
085fafed +0x2cd:  mov    %eax,(%esp)
085faff0 +0x2d0:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
085faff5 +0x2d5:  test   %al,%al
085faff7 +0x2d7:  jne    085fafb2 <+0x292>
085faff9 +0x2d9:  lea    -0x7c(%ebp),%eax
085faffc +0x2dc:  lea    -0x6c(%ebp),%edx
085fafff +0x2df:  mov    %edx,0x4(%esp)
085fb003 +0x2e3:  mov    %eax,(%esp)
085fb006 +0x2e6:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
085fb00b +0x2eb:  sub    $0x4,%esp
085fb00e +0x2ee:  jmp    085fb088 <+0x368>
085fb010 +0x2f0:  lea    -0x7c(%ebp),%eax
085fb013 +0x2f3:  mov    %eax,(%esp)
085fb016 +0x2f6:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
085fb01b +0x2fb:  mov    0x4(%eax),%eax
085fb01e +0x2fe:  mov    %eax,-0x8c(%ebp)
085fb024 +0x304:  fildl  -0x8c(%ebp)
085fb02a +0x30a:  fildl  -0x10(%ebp)
085fb02d +0x30d:  fdivrp %st,%st(1)
085fb02f +0x30f:  fldl   &data#69d7849f(.rodata)
085fb035 +0x315:  fmulp  %st,%st(1)
085fb037 +0x317:  fstpl  -0x98(%ebp)
085fb03d +0x31d:  lea    -0x7c(%ebp),%eax
085fb040 +0x320:  mov    %eax,(%esp)
085fb043 +0x323:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
085fb048 +0x328:  mov    0x4(%eax),%ebx
085fb04b +0x32b:  lea    -0x7c(%ebp),%eax
085fb04e +0x32e:  mov    %eax,(%esp)
085fb051 +0x331:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
085fb056 +0x336:  mov    (%eax),%eax
085fb058 +0x338:  fldl   -0x98(%ebp)
085fb05e +0x33e:  fstpl  0x10(%esp)
085fb062 +0x342:  mov    %ebx,0xc(%esp)
085fb066 +0x346:  mov    %eax,0x8(%esp)
085fb06a +0x34a:  movl   $"- %d(%d, %.2f%%)\n",0x4(%esp)
085fb072 +0x352:  mov    -0x14(%ebp),%eax
085fb075 +0x355:  mov    %eax,(%esp)
085fb078 +0x358:  call   0807da90 <_init+0x388>
085fb07d +0x35d:  lea    -0x7c(%ebp),%eax
085fb080 +0x360:  mov    %eax,(%esp)
085fb083 +0x363:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
085fb088 +0x368:  lea    -0x18(%ebp),%eax
085fb08b +0x36b:  lea    -0x6c(%ebp),%edx
085fb08e +0x36e:  mov    %edx,0x4(%esp)
085fb092 +0x372:  mov    %eax,(%esp)
085fb095 +0x375:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
085fb09a +0x37a:  sub    $0x4,%esp
085fb09d +0x37d:  lea    -0x18(%ebp),%eax
085fb0a0 +0x380:  mov    %eax,0x4(%esp)
085fb0a4 +0x384:  lea    -0x7c(%ebp),%eax
085fb0a7 +0x387:  mov    %eax,(%esp)
085fb0aa +0x38a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
085fb0af +0x38f:  test   %al,%al
085fb0b1 +0x391:  jne    085fb010 <+0x2f0>
085fb0b7 +0x397:  mov    -0x14(%ebp),%eax
085fb0ba +0x39a:  mov    %eax,0x4(%esp)
085fb0be +0x39e:  movl   $0xa,(%esp)
085fb0c5 +0x3a5:  call   0807e4c0 <_init+0xdb8>
085fb0ca +0x3aa:  lea    -0x74(%ebp),%eax
085fb0cd +0x3ad:  mov    %eax,(%esp)
085fb0d0 +0x3b0:  call   083a6bd4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x40ba0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x40ba0
085fb0d5 +0x3b5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085fb0da +0x3ba:  mov    (%eax),%eax
085fb0dc +0x3bc:  mov    %eax,%edx
085fb0de +0x3be:  lea    -0x48(%ebp),%eax
085fb0e1 +0x3c1:  mov    %edx,0x4(%esp)
085fb0e5 +0x3c5:  mov    %eax,(%esp)
085fb0e8 +0x3c8:  call   0838a770 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a210>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a210
085fb0ed +0x3cd:  sub    $0x4,%esp
085fb0f0 +0x3d0:  lea    -0x48(%ebp),%eax
085fb0f3 +0x3d3:  mov    %eax,0x4(%esp)
085fb0f7 +0x3d7:  lea    -0x74(%ebp),%eax
085fb0fa +0x3da:  mov    %eax,(%esp)
085fb0fd +0x3dd:  call   0838a796 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a236>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a236
085fb102 +0x3e2:  test   %al,%al
085fb104 +0x3e4:  jne    085fad88 <+0x68>
085fb10a +0x3ea:  mov    -0x14(%ebp),%eax
085fb10d +0x3ed:  mov    %eax,(%esp)
085fb110 +0x3f0:  call   0807dea0 <_init+0x798>
085fb115 +0x3f5:  mov    $0x1,%ebx
085fb11a +0x3fa:  jmp    085fb131 <+0x411>
085fb11c +0x3fc:  mov    %edx,%ebx
085fb11e +0x3fe:  mov    %eax,%esi
085fb120 +0x400:  lea    -0x6c(%ebp),%eax
085fb123 +0x403:  mov    %eax,(%esp)
085fb126 +0x406:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
085fb12b +0x40b:  mov    %esi,%eax
085fb12d +0x40d:  mov    %ebx,%edx
085fb12f +0x40f:  jmp    085fb153 <+0x433>
085fb131 +0x411:  lea    -0x6c(%ebp),%eax
085fb134 +0x414:  mov    %eax,(%esp)
085fb137 +0x417:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
085fb13c +0x41c:  test   %ebx,%ebx
085fb13e +0x41e:  lea    -0x54(%ebp),%eax
085fb141 +0x421:  mov    %eax,(%esp)
085fb144 +0x424:  call   082ab016 <_GLOBAL__I__ZN4CLog5this_E+0x743d>  ; global constructors keyed to CLog::this_+0x743d
085fb149 +0x429:  lea    -0x8(%ebp),%esp
085fb14c +0x42c:  add    $0x0,%esp
085fb14f +0x42f:  pop    %ebx
085fb150 +0x430:  pop    %esi
085fb151 +0x431:  pop    %ebp
085fb152 +0x432:  ret
085fb153 +0x433:  mov    %edx,%ebx
085fb155 +0x435:  mov    %eax,%esi
085fb157 +0x437:  lea    -0x54(%ebp),%eax
085fb15a +0x43a:  mov    %eax,(%esp)
085fb15d +0x43d:  call   082ab016 <_GLOBAL__I__ZN4CLog5this_E+0x743d>  ; global constructors keyed to CLog::this_+0x743d
085fb162 +0x442:  mov    %esi,%eax
085fb164 +0x444:  mov    %ebx,%edx
085fb166 +0x446:  mov    %eax,(%esp)
085fb169 +0x449:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// secretshop::CSecretShop::CheckLottery @ 0x85fad20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* secretshop::CSecretShop::CheckLottery() */

void __thiscall secretshop::CSecretShop::CheckLottery(CSecretShop *this)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  _Rb_tree_iterator<std::pair<int_const,int>> local_88 [4];
  __normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
  local_84 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_80 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_7c [4];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_78 [8];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_70 [24];
  vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> local_58 [12];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_4c [8];
  __normal_iterator local_44 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_40 [4];
  pair local_3c [8];
  pair<int_const,int> local_34 [8];
  int local_2c [2];
  undefined4 local_24;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_20 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  FILE *local_18;
  int local_14;
  int local_10;
  
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::vector(local_58);
                    /* try { // try from 085fad3c to 085fad40 has its CatchHandler @ 085fb153 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_70);
                    /* try { // try from 085fad50 to 085fb114 has its CatchHandler @ 085fb11c */
  local_18 = fopen("secretshop_lottery.txt","wt");
  if (local_18 != (FILE *)0x0) {
    G_CDataManager();
    __gnu_cxx::
    hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::begin
              (local_78);
    while( true ) {
      G_CDataManager();
      __gnu_cxx::
      hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::end
                (local_4c);
      cVar3 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
              ::operator!=((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                            *)local_78,(_Hashtable_iterator *)local_4c);
      if (cVar3 == '\0') break;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear(local_70);
      for (local_10 = 0; local_10 < 10000; local_10 = local_10 + 1) {
        iVar6 = __gnu_cxx::
                _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                ::operator->((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                              *)local_78);
        iVar6 = CDungeon::get_standard_level(*(CDungeon **)(iVar6 + 4));
        iVar4 = __gnu_cxx::
                _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                ::operator->((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                              *)local_78);
        iVar4 = CDungeon::get_index(*(CDungeon **)(iVar4 + 4));
        LotteryItems(this,(vector *)local_58,0x3ea,iVar4,iVar6);
        std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::begin();
        while( true ) {
          std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::end();
          bVar2 = __gnu_cxx::operator!=(local_84,local_44);
          if (!bVar2) break;
          __gnu_cxx::
          __normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
          ::operator*(local_84);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    ((int *)local_88);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_40);
          cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                            (local_88,(_Rb_tree_iterator *)local_40);
          if (cVar3 == '\0') {
            local_24 = 1;
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
                            ::operator*(local_84);
            std::make_pair<int,int>(local_2c,piVar5);
            std::pair<int_const,int>::pair<int,int>(local_34,(pair *)local_2c);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_3c);
          }
          else {
            iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_88);
            *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
          }
          __gnu_cxx::
          __normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
          ::operator++(local_84);
        }
        std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::clear(local_58);
      }
      iVar6 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
              ::operator->((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                            *)local_78);
      uVar7 = CDungeon::get_standard_level(*(CDungeon **)(iVar6 + 4));
      iVar6 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
              ::operator->((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                            *)local_78);
      uVar8 = CDungeon::get_index(*(CDungeon **)(iVar6 + 4));
      iVar6 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
              ::operator->((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                            *)local_78);
      uVar9 = CDungeon::GetDungeonName(*(CDungeon **)(iVar6 + 4));
      fprintf(local_18,"Dungeon : %s(idx:%d, lev:%d)\n",uVar9,uVar8,uVar7);
      local_14 = 0;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_7c);
      while( true ) {
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_20);
        cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_7c,
                           (_Rb_tree_iterator *)local_20);
        if (cVar3 == '\0') break;
        iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_7c);
        local_14 = local_14 + *(int *)(iVar6 + 4);
        std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_7c);
      }
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_80);
      while( true ) {
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c);
        cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80,
                           (_Rb_tree_iterator *)local_1c);
        if (cVar3 == '\0') break;
        iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80);
        dVar1 = _DAT_08cd4a50 * ((double)*(int *)(iVar6 + 4) / (double)local_14);
        iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80);
        uVar7 = *(undefined4 *)(iVar6 + 4);
        puVar10 = (undefined4 *)
                  std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80);
        fprintf(local_18,"- %d(%d, %.2f%%)\n",*puVar10,uVar7,dVar1);
        std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80);
      }
      fputc(10,local_18);
      __gnu_cxx::
      _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
      ::operator++((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                    *)local_78);
    }
    fclose(local_18);
  }
                    /* try { // try from 085fb137 to 085fb13b has its CatchHandler @ 085fb153 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_70);
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::~vector(local_58);
  return;
}
```
