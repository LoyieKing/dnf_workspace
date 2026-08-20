# Clear

`_ZN17STStackableScript5ClearEv`

`STStackableScript::Clear()`

| 类 | 地址 |
|---|---|
| `STStackableScript` | `0x0899087a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0899087a  _ZN17STStackableScript5ClearEv
#           STStackableScript::Clear()
# range [0x0899087a, 0x08990ed4]
0899087a +0x000:  push   %ebp
0899087b +0x001:  mov    %esp,%ebp
0899087d +0x003:  sub    $0x18,%esp
08990880 +0x006:  mov    0x8(%ebp),%eax
08990883 +0x009:  mov    %eax,(%esp)
08990886 +0x00c:  call   0898d718 <_ZN12STItemScript5ClearEv>  ; STItemScript::Clear()
0899088b +0x011:  mov    0x8(%ebp),%eax
0899088e +0x014:  movl   $0x0,0x4(%eax)
08990895 +0x01b:  mov    0x8(%ebp),%eax
08990898 +0x01e:  add    $0x178,%eax
0899089d +0x023:  mov    %eax,(%esp)
089908a0 +0x026:  call   089c348e <_GLOBAL__I_g_npcNameVector+0x869>  ; global constructors keyed to g_npcNameVector+0x869
089908a5 +0x02b:  mov    0x8(%ebp),%eax
089908a8 +0x02e:  add    $0x19c,%eax
089908ad +0x033:  mov    %eax,(%esp)
089908b0 +0x036:  call   089c6444 <_GLOBAL__I_g_npcNameVector+0x381f>  ; global constructors keyed to g_npcNameVector+0x381f
089908b5 +0x03b:  mov    0x8(%ebp),%eax
089908b8 +0x03e:  add    $0x190,%eax
089908bd +0x043:  mov    %eax,(%esp)
089908c0 +0x046:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
089908c5 +0x04b:  mov    0x8(%ebp),%eax
089908c8 +0x04e:  movl   $0x0,0x1a8(%eax)
089908d2 +0x058:  mov    0x8(%ebp),%eax
089908d5 +0x05b:  movl   $0x0,0x1ac(%eax)
089908df +0x065:  mov    0x8(%ebp),%eax
089908e2 +0x068:  movl   $0x0,0x1b0(%eax)
089908ec +0x072:  mov    0x8(%ebp),%eax
089908ef +0x075:  movl   $0xffffffff,0x1b4(%eax)
089908f9 +0x07f:  mov    0x8(%ebp),%eax
089908fc +0x082:  movb   $0x0,0x1b8(%eax)
08990903 +0x089:  mov    0x8(%ebp),%eax
08990906 +0x08c:  add    $0x1d8,%eax
0899090b +0x091:  movl   $"",0x4(%esp)
08990913 +0x099:  mov    %eax,(%esp)
08990916 +0x09c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0899091b +0x0a1:  mov    0x8(%ebp),%eax
0899091e +0x0a4:  movl   $0x0,0x1dc(%eax)
08990928 +0x0ae:  mov    0x8(%ebp),%eax
0899092b +0x0b1:  movl   $0x0,0x1d4(%eax)
08990935 +0x0bb:  mov    0x8(%ebp),%eax
08990938 +0x0be:  movl   $0x27,0x1e0(%eax)
08990942 +0x0c8:  mov    0x8(%ebp),%eax
08990945 +0x0cb:  movl   $0x0,0x1e4(%eax)
0899094f +0x0d5:  mov    0x8(%ebp),%eax
08990952 +0x0d8:  add    $0x238,%eax
08990957 +0x0dd:  movl   $"",0x4(%esp)
0899095f +0x0e5:  mov    %eax,(%esp)
08990962 +0x0e8:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08990967 +0x0ed:  mov    0x8(%ebp),%eax
0899096a +0x0f0:  movl   $0x1,0x23c(%eax)
08990974 +0x0fa:  mov    0x8(%ebp),%eax
08990977 +0x0fd:  movl   $0xffffffff,0x240(%eax)
08990981 +0x107:  mov    0x8(%ebp),%eax
08990984 +0x10a:  movb   $0x0,0x1b9(%eax)
0899098b +0x111:  mov    0x8(%ebp),%eax
0899098e +0x114:  movb   $0x0,0x1ba(%eax)
08990995 +0x11b:  mov    0x8(%ebp),%eax
08990998 +0x11e:  movb   $0x0,0x1bb(%eax)
0899099f +0x125:  mov    0x8(%ebp),%eax
089909a2 +0x128:  add    $0x34c,%eax
089909a7 +0x12d:  mov    %eax,(%esp)
089909aa +0x130:  call   089c330a <_GLOBAL__I_g_npcNameVector+0x6e5>  ; global constructors keyed to g_npcNameVector+0x6e5
089909af +0x135:  mov    0x8(%ebp),%eax
089909b2 +0x138:  movb   $0x0,0x1bc(%eax)
089909b9 +0x13f:  mov    0x8(%ebp),%eax
089909bc +0x142:  movb   $0x0,0x1bd(%eax)
089909c3 +0x149:  mov    0x8(%ebp),%eax
089909c6 +0x14c:  movb   $0x0,0x1be(%eax)
089909cd +0x153:  mov    0x8(%ebp),%eax
089909d0 +0x156:  movb   $0x0,0x1bf(%eax)
089909d7 +0x15d:  mov    0x8(%ebp),%eax
089909da +0x160:  movb   $0x0,0x1c0(%eax)
089909e1 +0x167:  mov    0x8(%ebp),%eax
089909e4 +0x16a:  mov    $0x0,%edx
089909e9 +0x16f:  mov    %edx,0x1c4(%eax)
089909ef +0x175:  mov    0x8(%ebp),%eax
089909f2 +0x178:  movb   $0x0,0x1c8(%eax)
089909f9 +0x17f:  mov    0x8(%ebp),%eax
089909fc +0x182:  mov    $0x0,%edx
08990a01 +0x187:  mov    %edx,0x1cc(%eax)
08990a07 +0x18d:  mov    0x8(%ebp),%eax
08990a0a +0x190:  movb   $0x0,0x1d0(%eax)
08990a11 +0x197:  mov    0x8(%ebp),%eax
08990a14 +0x19a:  add    $0x268,%eax
08990a19 +0x19f:  mov    %eax,(%esp)
08990a1c +0x1a2:  call   08516658 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2c8d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2c8d
08990a21 +0x1a7:  mov    0x8(%ebp),%eax
08990a24 +0x1aa:  add    $0x274,%eax
08990a29 +0x1af:  mov    %eax,(%esp)
08990a2c +0x1b2:  call   089c6460 <_GLOBAL__I_g_npcNameVector+0x383b>  ; global constructors keyed to g_npcNameVector+0x383b
08990a31 +0x1b7:  mov    0x8(%ebp),%eax
08990a34 +0x1ba:  add    $0x280,%eax
08990a39 +0x1bf:  mov    %eax,(%esp)
08990a3c +0x1c2:  call   089c3076 <_GLOBAL__I_g_npcNameVector+0x451>  ; global constructors keyed to g_npcNameVector+0x451
08990a41 +0x1c7:  mov    0x8(%ebp),%eax
08990a44 +0x1ca:  movl   $0x98967f,0x364(%eax)
08990a4e +0x1d4:  mov    0x8(%ebp),%eax
08990a51 +0x1d7:  add    $0x4bc,%eax
08990a56 +0x1dc:  mov    %eax,(%esp)
08990a59 +0x1df:  call   089c6430 <_GLOBAL__I_g_npcNameVector+0x380b>  ; global constructors keyed to g_npcNameVector+0x380b
08990a5e +0x1e4:  mov    0x8(%ebp),%eax
08990a61 +0x1e7:  add    $0x368,%eax
08990a66 +0x1ec:  movl   $"",0x4(%esp)
08990a6e +0x1f4:  mov    %eax,(%esp)
08990a71 +0x1f7:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08990a76 +0x1fc:  mov    0x8(%ebp),%eax
08990a79 +0x1ff:  movl   $0xffffffff,0x36c(%eax)
08990a83 +0x209:  mov    0x8(%ebp),%eax
08990a86 +0x20c:  add    $0x374,%eax
08990a8b +0x211:  mov    %eax,(%esp)
08990a8e +0x214:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08990a93 +0x219:  mov    0x8(%ebp),%eax
08990a96 +0x21c:  movw   $0x0,0x380(%eax)
08990a9f +0x225:  mov    0x8(%ebp),%eax
08990aa2 +0x228:  movl   $0x0,0x384(%eax)
08990aac +0x232:  mov    0x8(%ebp),%eax
08990aaf +0x235:  movb   $0x1,0x388(%eax)
08990ab6 +0x23c:  mov    0x8(%ebp),%eax
08990ab9 +0x23f:  movl   $0xffffffff,0x38c(%eax)
08990ac3 +0x249:  mov    0x8(%ebp),%eax
08990ac6 +0x24c:  add    $0x314,%eax
08990acb +0x251:  mov    %eax,(%esp)
08990ace +0x254:  call   089c31e6 <_GLOBAL__I_g_npcNameVector+0x5c1>  ; global constructors keyed to g_npcNameVector+0x5c1
08990ad3 +0x259:  mov    0x8(%ebp),%eax
08990ad6 +0x25c:  add    $0x330,%eax
08990adb +0x261:  mov    %eax,(%esp)
08990ade +0x264:  call   089c324c <_GLOBAL__I_g_npcNameVector+0x627>  ; global constructors keyed to g_npcNameVector+0x627
08990ae3 +0x269:  mov    0x8(%ebp),%eax
08990ae6 +0x26c:  movl   $0xffffffff,0x348(%eax)
08990af0 +0x276:  mov    0x8(%ebp),%eax
08990af3 +0x279:  movl   $0x1,0x390(%eax)
08990afd +0x283:  mov    0x8(%ebp),%eax
08990b00 +0x286:  movw   $0x0,0x394(%eax)
08990b09 +0x28f:  mov    0x8(%ebp),%eax
08990b0c +0x292:  movb   $0x0,0x396(%eax)
08990b13 +0x299:  mov    0x8(%ebp),%eax
08990b16 +0x29c:  movw   $0x0,0x398(%eax)
08990b1f +0x2a5:  mov    0x8(%ebp),%eax
08990b22 +0x2a8:  movb   $0x0,0x438(%eax)
08990b29 +0x2af:  mov    0x8(%ebp),%eax
08990b2c +0x2b2:  movl   $0x0,0x43c(%eax)
08990b36 +0x2bc:  mov    0x8(%ebp),%eax
08990b39 +0x2bf:  movl   $0x0,0x440(%eax)
08990b43 +0x2c9:  mov    0x8(%ebp),%eax
08990b46 +0x2cc:  movb   $0x0,0x39a(%eax)
08990b4d +0x2d3:  mov    0x8(%ebp),%eax
08990b50 +0x2d6:  movb   $0x0,0x39b(%eax)
08990b57 +0x2dd:  mov    0x8(%ebp),%eax
08990b5a +0x2e0:  movl   $0x0,0x39c(%eax)
08990b64 +0x2ea:  mov    0x8(%ebp),%eax
08990b67 +0x2ed:  movb   $0x0,0x3a0(%eax)
08990b6e +0x2f4:  mov    0x8(%ebp),%eax
08990b71 +0x2f7:  movb   $0x0,0x3a1(%eax)
08990b78 +0x2fe:  mov    0x8(%ebp),%eax
08990b7b +0x301:  add    $0x3a4,%eax
08990b80 +0x306:  mov    %eax,(%esp)
08990b83 +0x309:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
08990b88 +0x30e:  mov    0x8(%ebp),%eax
08990b8b +0x311:  movl   $0x0,0x3bc(%eax)
08990b95 +0x31b:  mov    0x8(%ebp),%eax
08990b98 +0x31e:  add    $0x3c0,%eax
08990b9d +0x323:  mov    %eax,(%esp)
08990ba0 +0x326:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08990ba5 +0x32b:  mov    0x8(%ebp),%eax
08990ba8 +0x32e:  movl   $0x0,0x3cc(%eax)
08990bb2 +0x338:  mov    0x8(%ebp),%eax
08990bb5 +0x33b:  add    $0x25c,%eax
08990bba +0x340:  mov    %eax,(%esp)
08990bbd +0x343:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08990bc2 +0x348:  mov    0x8(%ebp),%eax
08990bc5 +0x34b:  movb   $0x0,0x3d0(%eax)
08990bcc +0x352:  mov    0x8(%ebp),%eax
08990bcf +0x355:  movb   $0x1,0x3d1(%eax)
08990bd6 +0x35c:  mov    0x8(%ebp),%eax
08990bd9 +0x35f:  add    $0x3d4,%eax
08990bde +0x364:  mov    %eax,(%esp)
08990be1 +0x367:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08990be6 +0x36c:  mov    0x8(%ebp),%eax
08990be9 +0x36f:  movl   $0x0,0x3e0(%eax)
08990bf3 +0x379:  mov    0x8(%ebp),%eax
08990bf6 +0x37c:  movl   $0x0,0x3e4(%eax)
08990c00 +0x386:  mov    0x8(%ebp),%eax
08990c03 +0x389:  add    $0x3e8,%eax
08990c08 +0x38e:  mov    %eax,(%esp)
08990c0b +0x391:  call   089c647c <_GLOBAL__I_g_npcNameVector+0x3857>  ; global constructors keyed to g_npcNameVector+0x3857
08990c10 +0x396:  mov    0x8(%ebp),%eax
08990c13 +0x399:  add    $0x3f4,%eax
08990c18 +0x39e:  mov    %eax,(%esp)
08990c1b +0x3a1:  call   089c51ac <_GLOBAL__I_g_npcNameVector+0x2587>  ; global constructors keyed to g_npcNameVector+0x2587
08990c20 +0x3a6:  mov    0x8(%ebp),%eax
08990c23 +0x3a9:  movb   $0xff,0x40c(%eax)
08990c2a +0x3b0:  mov    0x8(%ebp),%eax
08990c2d +0x3b3:  add    $0x40d,%eax
08990c32 +0x3b8:  movl   $0x2,0x8(%esp)
08990c3a +0x3c0:  movl   $0x0,0x4(%esp)
08990c42 +0x3c8:  mov    %eax,(%esp)
08990c45 +0x3cb:  call   0807dcc0 <_init+0x5b8>
08990c4a +0x3d0:  mov    0x8(%ebp),%eax
08990c4d +0x3d3:  movb   $0x0,0x414(%eax)
08990c54 +0x3da:  mov    0x8(%ebp),%eax
08990c57 +0x3dd:  add    $0x410,%eax
08990c5c +0x3e2:  movl   $"",0x4(%esp)
08990c64 +0x3ea:  mov    %eax,(%esp)
08990c67 +0x3ed:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08990c6c +0x3f2:  mov    0x8(%ebp),%eax
08990c6f +0x3f5:  movl   $0x0,0x418(%eax)
08990c79 +0x3ff:  mov    0x8(%ebp),%eax
08990c7c +0x402:  movl   $0xb,0x444(%eax)
08990c86 +0x40c:  mov    0x8(%ebp),%eax
08990c89 +0x40f:  movl   $0x0,0x448(%eax)
08990c93 +0x419:  mov    0x8(%ebp),%eax
08990c96 +0x41c:  movl   $0xffffffff,0x44c(%eax)
08990ca0 +0x426:  mov    0x8(%ebp),%eax
08990ca3 +0x429:  movl   $0xffffffff,0x450(%eax)
08990cad +0x433:  mov    0x8(%ebp),%eax
08990cb0 +0x436:  movl   $0xffffffff,0x454(%eax)
08990cba +0x440:  mov    0x8(%ebp),%eax
08990cbd +0x443:  movl   $0xffffffff,0x458(%eax)
08990cc7 +0x44d:  mov    0x8(%ebp),%eax
08990cca +0x450:  movl   $0xffffffff,0x45c(%eax)
08990cd4 +0x45a:  mov    0x8(%ebp),%eax
08990cd7 +0x45d:  movl   $0xffffffff,0x460(%eax)
08990ce1 +0x467:  mov    0x8(%ebp),%eax
08990ce4 +0x46a:  movl   $0xffffffff,0x464(%eax)
08990cee +0x474:  mov    0x8(%ebp),%eax
08990cf1 +0x477:  movl   $0xffffffff,0x468(%eax)
08990cfb +0x481:  mov    0x8(%ebp),%eax
08990cfe +0x484:  movl   $0x0,0x46c(%eax)
08990d08 +0x48e:  mov    0x8(%ebp),%eax
08990d0b +0x491:  movl   $0xffffffff,0x470(%eax)
08990d15 +0x49b:  mov    0x8(%ebp),%eax
08990d18 +0x49e:  movl   $0x0,0x478(%eax)
08990d22 +0x4a8:  mov    0x8(%ebp),%eax
08990d25 +0x4ab:  movl   $0x0,0x474(%eax)
08990d2f +0x4b5:  mov    0x8(%ebp),%eax
08990d32 +0x4b8:  add    $0x47c,%eax
08990d37 +0x4bd:  mov    %eax,(%esp)
08990d3a +0x4c0:  call   08513b48 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x17d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x17d
08990d3f +0x4c5:  mov    0x8(%ebp),%eax
08990d42 +0x4c8:  add    $0x480,%eax
08990d47 +0x4cd:  mov    %eax,(%esp)
08990d4a +0x4d0:  call   080da456 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x5f3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x5f3
08990d4f +0x4d5:  mov    0x8(%ebp),%eax
08990d52 +0x4d8:  add    $0x498,%eax
08990d57 +0x4dd:  mov    %eax,(%esp)
08990d5a +0x4e0:  call   080da456 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x5f3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x5f3
08990d5f +0x4e5:  mov    0x8(%ebp),%eax
08990d62 +0x4e8:  movb   $0x0,0x4b0(%eax)
08990d69 +0x4ef:  mov    0x8(%ebp),%eax
08990d6c +0x4f2:  movl   $0x0,0x1e8(%eax)
08990d76 +0x4fc:  mov    0x8(%ebp),%eax
08990d79 +0x4ff:  add    $0x1ec,%eax
08990d7e +0x504:  mov    %eax,(%esp)
08990d81 +0x507:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08990d86 +0x50c:  mov    0x8(%ebp),%eax
08990d89 +0x50f:  add    $0x1f8,%eax
08990d8e +0x514:  mov    %eax,(%esp)
08990d91 +0x517:  call   089c6498 <_GLOBAL__I_g_npcNameVector+0x3873>  ; global constructors keyed to g_npcNameVector+0x3873
08990d96 +0x51c:  mov    0x8(%ebp),%eax
08990d99 +0x51f:  movb   $0x0,0x204(%eax)
08990da0 +0x526:  mov    0x8(%ebp),%eax
08990da3 +0x529:  add    $0x214,%eax
08990da8 +0x52e:  mov    %eax,(%esp)
08990dab +0x531:  call   089c64b4 <_GLOBAL__I_g_npcNameVector+0x388f>  ; global constructors keyed to g_npcNameVector+0x388f
08990db0 +0x536:  mov    0x8(%ebp),%eax
08990db3 +0x539:  movb   $0x0,0x205(%eax)
08990dba +0x540:  mov    0x8(%ebp),%eax
08990dbd +0x543:  add    $0x208,%eax
08990dc2 +0x548:  mov    %eax,(%esp)
08990dc5 +0x54b:  call   089c64d0 <_GLOBAL__I_g_npcNameVector+0x38ab>  ; global constructors keyed to g_npcNameVector+0x38ab
08990dca +0x550:  mov    0x8(%ebp),%eax
08990dcd +0x553:  movl   $0x0,0x220(%eax)
08990dd7 +0x55d:  mov    0x8(%ebp),%eax
08990dda +0x560:  add    $0x224,%eax
08990ddf +0x565:  mov    %eax,(%esp)
08990de2 +0x568:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08990de7 +0x56d:  mov    0x8(%ebp),%eax
08990dea +0x570:  movl   $0x0,0x4b8(%eax)
08990df4 +0x57a:  mov    0x8(%ebp),%eax
08990df7 +0x57d:  add    $0x1d8,%eax
08990dfc +0x582:  movl   $"",0x4(%esp)
08990e04 +0x58a:  mov    %eax,(%esp)
08990e07 +0x58d:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08990e0c +0x592:  mov    0x8(%ebp),%eax
08990e0f +0x595:  movl   $0x0,0x1dc(%eax)
08990e19 +0x59f:  mov    0x8(%ebp),%eax
08990e1c +0x5a2:  movb   $0x0,0x414(%eax)
08990e23 +0x5a9:  mov    0x8(%ebp),%eax
08990e26 +0x5ac:  add    $0x410,%eax
08990e2b +0x5b1:  movl   $"",0x4(%esp)
08990e33 +0x5b9:  mov    %eax,(%esp)
08990e36 +0x5bc:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08990e3b +0x5c1:  mov    0x8(%ebp),%eax
08990e3e +0x5c4:  movl   $0x0,0x418(%eax)
08990e48 +0x5ce:  mov    0x8(%ebp),%eax
08990e4b +0x5d1:  movl   $0xffffffff,0x370(%eax)
08990e55 +0x5db:  mov    0x8(%ebp),%eax
08990e58 +0x5de:  movl   $0x0,0x4ec(%eax)
08990e62 +0x5e8:  mov    0x8(%ebp),%eax
08990e65 +0x5eb:  movl   $0x0,0x18c(%eax)
08990e6f +0x5f5:  mov    0x8(%ebp),%eax
08990e72 +0x5f8:  movl   $0x0,0x4f0(%eax)
08990e7c +0x602:  mov    0x8(%ebp),%eax
08990e7f +0x605:  movl   $0x0,0x4f4(%eax)
08990e89 +0x60f:  mov    0x8(%ebp),%eax
08990e8c +0x612:  movl   $0x0,0x4f8(%eax)
08990e96 +0x61c:  mov    0x8(%ebp),%eax
08990e99 +0x61f:  add    $0x4fc,%eax
08990e9e +0x624:  mov    %eax,(%esp)
08990ea1 +0x627:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08990ea6 +0x62c:  mov    0x8(%ebp),%eax
08990ea9 +0x62f:  add    $0x4d4,%eax
08990eae +0x634:  mov    %eax,(%esp)
08990eb1 +0x637:  call   080da456 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x5f3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x5f3
08990eb6 +0x63c:  mov    0x8(%ebp),%eax
08990eb9 +0x63f:  movl   $0x0,0x508(%eax)
08990ec3 +0x649:  mov    0x8(%ebp),%eax
08990ec6 +0x64c:  add    $0x50c,%eax
08990ecb +0x651:  mov    %eax,(%esp)
08990ece +0x654:  call   080da456 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x5f3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x5f3
08990ed3 +0x659:  leave
08990ed4 +0x65a:  ret
```

## 反编译 C

```c
// STStackableScript::Clear @ 0x899087a

/* STStackableScript::Clear() */

void __thiscall STStackableScript::Clear(STStackableScript *this)

{
  STItemScript::Clear((STItemScript *)this);
  *(undefined4 *)(this + 4) = 0;
  Arad_STStackableScript::AradStClear((Arad_STStackableScript *)(this + 0x178));
  std::vector<CRabbitBox,std::allocator<CRabbitBox>>::clear
            ((vector<CRabbitBox,std::allocator<CRabbitBox>> *)(this + 0x19c));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 400));
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  this[0x1b8] = (STStackableScript)0x0;
  std::string::operator=((string *)(this + 0x1d8),"");
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1e0) = 0x27;
  *(undefined4 *)(this + 0x1e4) = 0;
  std::string::operator=((string *)(this + 0x238),"");
  *(undefined4 *)(this + 0x23c) = 1;
  *(undefined4 *)(this + 0x240) = 0xffffffff;
  this[0x1b9] = (STStackableScript)0x0;
  this[0x1ba] = (STStackableScript)0x0;
  this[0x1bb] = (STStackableScript)0x0;
  STStatChangeVector::clear((STStatChangeVector *)(this + 0x34c));
  this[0x1bc] = (STStackableScript)0x0;
  this[0x1bd] = (STStackableScript)0x0;
  this[0x1be] = (STStackableScript)0x0;
  this[0x1bf] = (STStackableScript)0x0;
  this[0x1c0] = (STStackableScript)0x0;
  *(undefined4 *)(this + 0x1c4) = 0;
  this[0x1c8] = (STStackableScript)0x0;
  *(undefined4 *)(this + 0x1cc) = 0;
  this[0x1d0] = (STStackableScript)0x0;
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::clear
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x268)
            );
  std::
  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
  ::clear((vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
           *)(this + 0x274));
  stStackableBooster_t::clear((stStackableBooster_t *)(this + 0x280));
  *(undefined4 *)(this + 0x364) = 9999999;
  std::
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  ::clear((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
           *)(this + 0x4bc));
  std::string::operator=((string *)(this + 0x368),"");
  *(undefined4 *)(this + 0x36c) = 0xffffffff;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x374));
  *(undefined2 *)(this + 0x380) = 0;
  *(undefined4 *)(this + 900) = 0;
  this[0x388] = (STStackableScript)0x1;
  *(undefined4 *)(this + 0x38c) = 0xffffffff;
  STSummonMonster::clear((STSummonMonster *)(this + 0x314));
  STSummonApc::clear((STSummonApc *)(this + 0x330));
  *(undefined4 *)(this + 0x348) = 0xffffffff;
  *(undefined4 *)(this + 0x390) = 1;
  *(undefined2 *)(this + 0x394) = 0;
  this[0x396] = (STStackableScript)0x0;
  *(undefined2 *)(this + 0x398) = 0;
  this[0x438] = (STStackableScript)0x0;
  *(undefined4 *)(this + 0x43c) = 0;
  *(undefined4 *)(this + 0x440) = 0;
  this[0x39a] = (STStackableScript)0x0;
  this[0x39b] = (STStackableScript)0x0;
  *(undefined4 *)(this + 0x39c) = 0;
  this[0x3a0] = (STStackableScript)0x0;
  this[0x3a1] = (STStackableScript)0x0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x3a4))
  ;
  *(undefined4 *)(this + 0x3bc) = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x3c0));
  *(undefined4 *)(this + 0x3cc) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x25c));
  this[0x3d0] = (STStackableScript)0x0;
  this[0x3d1] = (STStackableScript)0x1;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x3d4));
  *(undefined4 *)(this + 0x3e0) = 0;
  *(undefined4 *)(this + 0x3e4) = 0;
  std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>::clear
            ((vector<stLimitCubeResult,std::allocator<stLimitCubeResult>> *)(this + 1000));
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::clear((map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
           *)(this + 0x3f4));
  this[0x40c] = (STStackableScript)0xff;
  memset(this + 0x40d,0,2);
  this[0x414] = (STStackableScript)0x0;
  std::string::operator=((string *)(this + 0x410),"");
  *(undefined4 *)(this + 0x418) = 0;
  *(undefined4 *)(this + 0x444) = 0xb;
  *(undefined4 *)(this + 0x448) = 0;
  *(undefined4 *)(this + 0x44c) = 0xffffffff;
  *(undefined4 *)(this + 0x450) = 0xffffffff;
  *(undefined4 *)(this + 0x454) = 0xffffffff;
  *(undefined4 *)(this + 0x458) = 0xffffffff;
  *(undefined4 *)(this + 0x45c) = 0xffffffff;
  *(undefined4 *)(this + 0x460) = 0xffffffff;
  *(undefined4 *)(this + 0x464) = 0xffffffff;
  *(undefined4 *)(this + 0x468) = 0xffffffff;
  *(undefined4 *)(this + 0x46c) = 0;
  *(undefined4 *)(this + 0x470) = 0xffffffff;
  *(undefined4 *)(this + 0x478) = 0;
  *(undefined4 *)(this + 0x474) = 0;
  AvatarOptionChangeType::clear((AvatarOptionChangeType *)(this + 0x47c));
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x480));
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x498));
  this[0x4b0] = (STStackableScript)0x0;
  *(undefined4 *)(this + 0x1e8) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x1ec));
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::clear
            ((vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>> *)
             (this + 0x1f8));
  this[0x204] = (STStackableScript)0x0;
  std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>::
  clear((vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
         *)(this + 0x214));
  this[0x205] = (STStackableScript)0x0;
  std::vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>>::clear
            ((vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>> *)
             (this + 0x208));
  *(undefined4 *)(this + 0x220) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x224));
  *(undefined4 *)(this + 0x4b8) = 0;
  std::string::operator=((string *)(this + 0x1d8),"");
  *(undefined4 *)(this + 0x1dc) = 0;
  this[0x414] = (STStackableScript)0x0;
  std::string::operator=((string *)(this + 0x410),"");
  *(undefined4 *)(this + 0x418) = 0;
  *(undefined4 *)(this + 0x370) = 0xffffffff;
  *(undefined4 *)(this + 0x4ec) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 0x4f0) = 0;
  *(undefined4 *)(this + 0x4f4) = 0;
  *(undefined4 *)(this + 0x4f8) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x4fc));
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x4d4));
  *(undefined4 *)(this + 0x508) = 0;
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x50c));
  return;
}
```
