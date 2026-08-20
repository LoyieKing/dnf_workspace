# importCashShopPurcahseBonusItemList

`_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE`

`ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x088b62ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b62ec  _ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE
#           ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)
# range [0x088b62ec, 0x088b6670]
088b62ec +0x000:  push   %ebp
088b62ed +0x001:  mov    %esp,%ebp
088b62ef +0x003:  push   %esi
088b62f0 +0x004:  push   %ebx
088b62f1 +0x005:  sub    $0x90,%esp
088b62f7 +0x00b:  mov    0x8(%ebp),%eax
088b62fa +0x00e:  mov    %eax,0x4(%esp)
088b62fe +0x012:  movl   $"",(%esp)
088b6305 +0x019:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088b630a +0x01e:  xor    $0x1,%eax
088b630d +0x021:  test   %al,%al
088b630f +0x023:  je     088b631b <+0x2f>
088b6311 +0x025:  mov    $0xa,%ebx
088b6316 +0x02a:  jmp    088b6665 <+0x379>
088b631b +0x02f:  lea    -0x44(%ebp),%eax
088b631e +0x032:  mov    %eax,(%esp)
088b6321 +0x035:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088b6326 +0x03a:  movb   $0x0,-0x45(%ebp)
088b632a +0x03e:  jmp    088b632d <+0x41>
088b632c +0x040:  nop
088b632d +0x041:  movl   $0x1,0x4(%esp)
088b6335 +0x049:  lea    -0x44(%ebp),%eax
088b6338 +0x04c:  mov    %eax,(%esp)
088b633b +0x04f:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088b6340 +0x054:  xor    $0x1,%eax
088b6343 +0x057:  test   %al,%al
088b6345 +0x059:  jne    088b6637 <+0x34b>
088b634b +0x05f:  movl   $"[bonus]",0x4(%esp)
088b6353 +0x067:  lea    -0x44(%ebp),%eax
088b6356 +0x06a:  mov    %eax,(%esp)
088b6359 +0x06d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088b635e +0x072:  test   %al,%al
088b6360 +0x074:  je     088b632c <+0x40>
088b6362 +0x076:  movl   $0x0,-0x4c(%ebp)
088b6369 +0x07d:  lea    -0x58(%ebp),%eax
088b636c +0x080:  mov    %eax,(%esp)
088b636f +0x083:  call   081ac710 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x1c>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x1c
088b6374 +0x088:  lea    -0x64(%ebp),%eax
088b6377 +0x08b:  mov    %eax,(%esp)
088b637a +0x08e:  call   088b66fa <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x49>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0x49
088b637f +0x093:  lea    -0x45(%ebp),%eax
088b6382 +0x096:  mov    %eax,(%esp)
088b6385 +0x099:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b638a +0x09e:  mov    %eax,-0x4c(%ebp)
088b638d +0x0a1:  movzbl -0x45(%ebp),%eax
088b6391 +0x0a5:  xor    $0x1,%eax
088b6394 +0x0a8:  test   %al,%al
088b6396 +0x0aa:  je     088b63a7 <+0xbb>
088b6398 +0x0ac:  mov    $0x1b,%ebx
088b639d +0x0b1:  mov    $0x0,%esi
088b63a2 +0x0b6:  jmp    088b6623 <+0x337>
088b63a7 +0x0bb:  lea    -0x45(%ebp),%eax
088b63aa +0x0be:  mov    %eax,(%esp)
088b63ad +0x0c1:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b63b2 +0x0c6:  mov    %al,-0x58(%ebp)
088b63b5 +0x0c9:  movzbl -0x45(%ebp),%eax
088b63b9 +0x0cd:  xor    $0x1,%eax
088b63bc +0x0d0:  test   %al,%al
088b63be +0x0d2:  jne    088b64f1 <+0x205>
088b63c4 +0x0d8:  lea    -0x45(%ebp),%eax
088b63c7 +0x0db:  mov    %eax,(%esp)
088b63ca +0x0de:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b63cf +0x0e3:  mov    %eax,-0x54(%ebp)
088b63d2 +0x0e6:  movzbl -0x45(%ebp),%eax
088b63d6 +0x0ea:  xor    $0x1,%eax
088b63d9 +0x0ed:  test   %al,%al
088b63db +0x0ef:  je     088b63ec <+0x100>
088b63dd +0x0f1:  mov    $0x23,%ebx
088b63e2 +0x0f6:  mov    $0x0,%esi
088b63e7 +0x0fb:  jmp    088b6623 <+0x337>
088b63ec +0x100:  lea    -0x45(%ebp),%eax
088b63ef +0x103:  mov    %eax,(%esp)
088b63f2 +0x106:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b63f7 +0x10b:  mov    %ax,-0x50(%ebp)
088b63fb +0x10f:  movzbl -0x45(%ebp),%eax
088b63ff +0x113:  xor    $0x1,%eax
088b6402 +0x116:  test   %al,%al
088b6404 +0x118:  je     088b6415 <+0x129>
088b6406 +0x11a:  mov    $0x26,%ebx
088b640b +0x11f:  mov    $0x0,%esi
088b6410 +0x124:  jmp    088b6623 <+0x337>
088b6415 +0x129:  lea    -0x40(%ebp),%eax
088b6418 +0x12c:  lea    -0x64(%ebp),%edx
088b641b +0x12f:  mov    %edx,0x4(%esp)
088b641f +0x133:  mov    %eax,(%esp)
088b6422 +0x136:  call   088b6732 <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x81>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0x81
088b6427 +0x13b:  sub    $0x4,%esp
088b642a +0x13e:  lea    -0x3c(%ebp),%eax
088b642d +0x141:  lea    -0x64(%ebp),%edx
088b6430 +0x144:  mov    %edx,0x4(%esp)
088b6434 +0x148:  mov    %eax,(%esp)
088b6437 +0x14b:  call   088b670e <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x5d>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0x5d
088b643c +0x150:  sub    $0x4,%esp
088b643f +0x153:  lea    -0x6c(%ebp),%eax
088b6442 +0x156:  lea    -0x58(%ebp),%edx
088b6445 +0x159:  mov    %edx,0xc(%esp)
088b6449 +0x15d:  mov    -0x40(%ebp),%edx
088b644c +0x160:  mov    %edx,0x8(%esp)
088b6450 +0x164:  mov    -0x3c(%ebp),%edx
088b6453 +0x167:  mov    %edx,0x4(%esp)
088b6457 +0x16b:  mov    %eax,(%esp)
088b645a +0x16e:  call   088b6758 <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0xa7>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0xa7
088b645f +0x173:  sub    $0x4,%esp
088b6462 +0x176:  lea    -0x38(%ebp),%eax
088b6465 +0x179:  lea    -0x64(%ebp),%edx
088b6468 +0x17c:  mov    %edx,0x4(%esp)
088b646c +0x180:  mov    %eax,(%esp)
088b646f +0x183:  call   088b6732 <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x81>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0x81
088b6474 +0x188:  sub    $0x4,%esp
088b6477 +0x18b:  lea    -0x38(%ebp),%eax
088b647a +0x18e:  mov    %eax,0x4(%esp)
088b647e +0x192:  lea    -0x6c(%ebp),%eax
088b6481 +0x195:  mov    %eax,(%esp)
088b6484 +0x198:  call   088b67ac <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0xfb>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0xfb
088b6489 +0x19d:  test   %al,%al
088b648b +0x19f:  je     088b64da <+0x1ee>
088b648d +0x1a1:  movzbl -0x58(%ebp),%eax
088b6491 +0x1a5:  movzbl %al,%edx
088b6494 +0x1a8:  mov    -0x4c(%ebp),%eax
088b6497 +0x1ab:  mov    %edx,0x18(%esp)
088b649b +0x1af:  mov    %eax,0x14(%esp)
088b649f +0x1b3:  movl   $"[PURCAHSE BONUS] invalid purcahse count (goods:%u, count:%d)",0x10(%esp)
088b64a7 +0x1bb:  movl   $0x2b,0xc(%esp)
088b64af +0x1c3:  movl   $&_ZZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEEE12__FUNCTION__,0x8(%esp)
088b64b7 +0x1cb:  movl   $"../localjapan/RDARScriptCeraShop.cpp",0x4(%esp)
088b64bf +0x1d3:  movl   $0x1,(%esp)
088b64c6 +0x1da:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
088b64cb +0x1df:  mov    $0x2c,%ebx
088b64d0 +0x1e4:  mov    $0x0,%esi
088b64d5 +0x1e9:  jmp    088b6623 <+0x337>
088b64da +0x1ee:  lea    -0x58(%ebp),%eax
088b64dd +0x1f1:  mov    %eax,0x4(%esp)
088b64e1 +0x1f5:  lea    -0x64(%ebp),%eax
088b64e4 +0x1f8:  mov    %eax,(%esp)
088b64e7 +0x1fb:  call   088b67d8 <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x127>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0x127
088b64ec +0x200:  jmp    088b63a7 <+0xbb>
088b64f1 +0x205:  nop
088b64f2 +0x206:  lea    -0x68(%ebp),%eax
088b64f5 +0x209:  lea    -0x4c(%ebp),%edx
088b64f8 +0x20c:  mov    %edx,0x8(%esp)
088b64fc +0x210:  mov    0xc(%ebp),%edx
088b64ff +0x213:  mov    %edx,0x4(%esp)
088b6503 +0x217:  mov    %eax,(%esp)
088b6506 +0x21a:  call   081ac748 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x54>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x54
088b650b +0x21f:  sub    $0x4,%esp
088b650e +0x222:  lea    -0x34(%ebp),%eax
088b6511 +0x225:  mov    0xc(%ebp),%edx
088b6514 +0x228:  mov    %edx,0x4(%esp)
088b6518 +0x22c:  mov    %eax,(%esp)
088b651b +0x22f:  call   081ac782 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x8e>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x8e
088b6520 +0x234:  sub    $0x4,%esp
088b6523 +0x237:  lea    -0x34(%ebp),%eax
088b6526 +0x23a:  mov    %eax,0x4(%esp)
088b652a +0x23e:  lea    -0x68(%ebp),%eax
088b652d +0x241:  mov    %eax,(%esp)
088b6530 +0x244:  call   088b684c <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x19b>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0x19b
088b6535 +0x249:  test   %al,%al
088b6537 +0x24b:  je     088b657b <+0x28f>
088b6539 +0x24d:  mov    -0x4c(%ebp),%eax
088b653c +0x250:  mov    %eax,0x14(%esp)
088b6540 +0x254:  movl   $"[PURCAHSE BONUS] duplicate purcahse item (goods:%d)",0x10(%esp)
088b6548 +0x25c:  movl   $0x36,0xc(%esp)
088b6550 +0x264:  movl   $&_ZZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEEE12__FUNCTION__,0x8(%esp)
088b6558 +0x26c:  movl   $"../localjapan/RDARScriptCeraShop.cpp",0x4(%esp)
088b6560 +0x274:  movl   $0x1,(%esp)
088b6567 +0x27b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
088b656c +0x280:  mov    $0x37,%ebx
088b6571 +0x285:  mov    $0x0,%esi
088b6576 +0x28a:  jmp    088b6623 <+0x337>
088b657b +0x28f:  lea    -0x18(%ebp),%eax
088b657e +0x292:  lea    -0x64(%ebp),%edx
088b6581 +0x295:  mov    %edx,0x8(%esp)
088b6585 +0x299:  lea    -0x4c(%ebp),%edx
088b6588 +0x29c:  mov    %edx,0x4(%esp)
088b658c +0x2a0:  mov    %eax,(%esp)
088b658f +0x2a3:  call   088b6860 <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x1af>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0x1af
088b6594 +0x2a8:  sub    $0x4,%esp
088b6597 +0x2ab:  lea    -0x18(%ebp),%eax
088b659a +0x2ae:  mov    %eax,0x4(%esp)
088b659e +0x2b2:  lea    -0x28(%ebp),%eax
088b65a1 +0x2b5:  mov    %eax,(%esp)
088b65a4 +0x2b8:  call   088b68a4 <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x1f3>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0x1f3
088b65a9 +0x2bd:  lea    -0x30(%ebp),%eax
088b65ac +0x2c0:  lea    -0x28(%ebp),%edx
088b65af +0x2c3:  mov    %edx,0x8(%esp)
088b65b3 +0x2c7:  mov    0xc(%ebp),%edx
088b65b6 +0x2ca:  mov    %edx,0x4(%esp)
088b65ba +0x2ce:  mov    %eax,(%esp)
088b65bd +0x2d1:  call   088b68de <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x22d>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0x22d
088b65c2 +0x2d6:  sub    $0x4,%esp
088b65c5 +0x2d9:  lea    -0x28(%ebp),%eax
088b65c8 +0x2dc:  mov    %eax,(%esp)
088b65cb +0x2df:  call   0854c7ae <_GLOBAL__I__ZN18ItemVendingMachineC2Ev+0x249>  ; global constructors keyed to ItemVendingMachine::ItemVendingMachine()+0x249
088b65d0 +0x2e4:  jmp    088b65fc <+0x310>
088b65d2 +0x2e6:  mov    %edx,%ebx
088b65d4 +0x2e8:  mov    %eax,%esi
088b65d6 +0x2ea:  lea    -0x28(%ebp),%eax
088b65d9 +0x2ed:  mov    %eax,(%esp)
088b65dc +0x2f0:  call   0854c7ae <_GLOBAL__I__ZN18ItemVendingMachineC2Ev+0x249>  ; global constructors keyed to ItemVendingMachine::ItemVendingMachine()+0x249
088b65e1 +0x2f5:  mov    %esi,%eax
088b65e3 +0x2f7:  mov    %ebx,%edx
088b65e5 +0x2f9:  jmp    088b65e7 <+0x2fb>
088b65e7 +0x2fb:  mov    %edx,%ebx
088b65e9 +0x2fd:  mov    %eax,%esi
088b65eb +0x2ff:  lea    -0x18(%ebp),%eax
088b65ee +0x302:  mov    %eax,(%esp)
088b65f1 +0x305:  call   088b66e4 <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x33>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0x33
088b65f6 +0x30a:  mov    %esi,%eax
088b65f8 +0x30c:  mov    %ebx,%edx
088b65fa +0x30e:  jmp    088b660e <+0x322>
088b65fc +0x310:  lea    -0x18(%ebp),%eax
088b65ff +0x313:  mov    %eax,(%esp)
088b6602 +0x316:  call   088b66e4 <_GLOBAL__I__ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE+0x33>  ; global constructors keyed to ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const, std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&)+0x33
088b6607 +0x31b:  mov    $0x1,%esi
088b660c +0x320:  jmp    088b6623 <+0x337>
088b660e +0x322:  mov    %edx,%ebx
088b6610 +0x324:  mov    %eax,%esi
088b6612 +0x326:  lea    -0x64(%ebp),%eax
088b6615 +0x329:  mov    %eax,(%esp)
088b6618 +0x32c:  call   0854c816 <_GLOBAL__I__ZN18ItemVendingMachineC2Ev+0x2b1>  ; global constructors keyed to ItemVendingMachine::ItemVendingMachine()+0x2b1
088b661d +0x331:  mov    %esi,%eax
088b661f +0x333:  mov    %ebx,%edx
088b6621 +0x335:  jmp    088b663f <+0x353>
088b6623 +0x337:  lea    -0x64(%ebp),%eax
088b6626 +0x33a:  mov    %eax,(%esp)
088b6629 +0x33d:  call   0854c816 <_GLOBAL__I__ZN18ItemVendingMachineC2Ev+0x2b1>  ; global constructors keyed to ItemVendingMachine::ItemVendingMachine()+0x2b1
088b662e +0x342:  test   %esi,%esi
088b6630 +0x344:  je     088b665a <+0x36e>
088b6632 +0x346:  jmp    088b632d <+0x41>
088b6637 +0x34b:  nop
088b6638 +0x34c:  mov    $0x0,%ebx
088b663d +0x351:  jmp    088b665a <+0x36e>
088b663f +0x353:  mov    %edx,%ebx
088b6641 +0x355:  mov    %eax,%esi
088b6643 +0x357:  lea    -0x44(%ebp),%eax
088b6646 +0x35a:  mov    %eax,(%esp)
088b6649 +0x35d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088b664e +0x362:  mov    %esi,%eax
088b6650 +0x364:  mov    %ebx,%edx
088b6652 +0x366:  mov    %eax,(%esp)
088b6655 +0x369:  call   08ae3750 <_Unwind_Resume>
088b665a +0x36e:  lea    -0x44(%ebp),%eax
088b665d +0x371:  mov    %eax,(%esp)
088b6660 +0x374:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088b6665 +0x379:  mov    %ebx,%eax
088b6667 +0x37b:  lea    -0x8(%ebp),%esp
088b666a +0x37e:  add    $0x0,%esp
088b666d +0x381:  pop    %ebx
088b666e +0x382:  pop    %esi
088b666f +0x383:  pop    %ebp
088b6670 +0x384:  ret
```

## 反编译 C

```c
// ARAD::importCashShopPurcahseBonusItemList @ 0x88b62ec

/* ARAD::importCashShopPurcahseBonusItemList(char*, std::map<int, std::vector<ARAD::PurcahseBonus,
   std::allocator<ARAD::PurcahseBonus> >, std::less<int>, std::allocator<std::pair<int const,
   std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > > > >&) */

undefined4 ARAD::importCashShopPurcahseBonusItemList(char *param_1,map *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 unaff_EBX;
  int *piVar3;
  int local_a4 [2];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [12];
  byte local_5c [4];
  undefined4 local_58;
  undefined2 local_54;
  int local_50;
  char local_49;
  string local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [8];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  
  piVar3 = (int *)&stack0xffffff64;
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string(local_48);
    local_49 = '\0';
    do {
      do {
        piVar3[1] = 1;
        *piVar3 = (int)local_48;
                    /* try { // try from 088b633b to 088b637e has its CatchHandler @ 088b663f */
        piVar3[-1] = 0x88b6340;
        cVar1 = ScanType((string *)*piVar3,SUB41(piVar3[1],0));
        if (cVar1 != '\x01') {
          unaff_EBX = 0;
          goto LAB_088b665a;
        }
        piVar3[1] = (int)"[bonus]";
        *piVar3 = (int)local_48;
        piVar3[-1] = 0x88b635e;
        bVar2 = std::operator==((string *)*piVar3,(char *)piVar3[1]);
      } while (!bVar2);
      local_50 = 0;
      *piVar3 = (int)local_5c;
      piVar3[-1] = 0x88b6374;
      PurcahseBonus::PurcahseBonus((PurcahseBonus *)*piVar3);
      *piVar3 = (int)local_68;
      piVar3[-1] = 0x88b637f;
      std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::vector
                ((vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>> *)*piVar3);
      *piVar3 = (int)&local_49;
                    /* try { // try from 088b6385 to 088b6593 has its CatchHandler @ 088b660e */
      piVar3[-1] = 0x88b638a;
      local_50 = ScanInt((bool *)*piVar3);
      if (local_49 == '\x01') {
        while( true ) {
          *piVar3 = (int)&local_49;
          piVar3[-1] = 0x88b63b2;
          local_5c[0] = ScanInt((bool *)*piVar3);
          if (local_49 != '\x01') break;
          *piVar3 = (int)&local_49;
          piVar3[-1] = 0x88b63cf;
          local_58 = ScanInt((bool *)*piVar3);
          if (local_49 != '\x01') {
            unaff_EBX = 0x23;
            bVar2 = false;
            goto LAB_088b6623;
          }
          *piVar3 = (int)&local_49;
          piVar3[-1] = 0x88b63f7;
          local_54 = ScanInt((bool *)*piVar3);
          if (local_49 != '\x01') {
            unaff_EBX = 0x26;
            bVar2 = false;
            goto LAB_088b6623;
          }
          piVar3[1] = (int)local_68;
          *piVar3 = (int)&local_44;
          piVar3[-1] = 0x88b6427;
          std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::end();
          piVar3[1] = (int)local_68;
          *piVar3 = (int)&local_40;
          piVar3[-1] = 0x88b643c;
          std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::begin();
          piVar3[3] = (int)local_5c;
          piVar3[2] = local_44;
          piVar3[1] = local_40;
          *piVar3 = (int)local_70;
          piVar3[-1] = 0x88b645f;
          std::
          find<__gnu_cxx::__normal_iterator<ARAD::PurcahseBonus*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>,ARAD::PurcahseBonus>
                    ();
          *piVar3 = (int)local_68;
          piVar3[-1] = (int)local_3c;
          piVar3[-2] = 0x88b6474;
          std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::end();
          *piVar3 = (int)local_3c;
          piVar3[-1] = (int)local_70;
          piVar3[-2] = 0x88b6489;
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)piVar3[-1],(__normal_iterator *)*piVar3);
          if (bVar2) {
            piVar3[5] = (uint)local_5c[0];
            piVar3[4] = local_50;
            piVar3[3] = (int)"[PURCAHSE BONUS] invalid purcahse count (goods:%u, count:%d)";
            piVar3[2] = 0x2b;
            piVar3[1] = (int)"importCashShopPurcahseBonusItemList";
            *piVar3 = (int)"../localjapan/RDARScriptCeraShop.cpp";
            piVar3[-1] = 1;
            piVar3[-2] = 0x88b64cb;
            LogManager::logFormat
                      (piVar3[-1],(char *)*piVar3,(char *)piVar3[1],piVar3[2],(char *)piVar3[3]);
            unaff_EBX = 0x2c;
            bVar2 = false;
            piVar3 = piVar3 + -1;
            goto LAB_088b6623;
          }
          *piVar3 = (int)local_5c;
          piVar3[-1] = (int)local_68;
          piVar3[-2] = 0x88b64ec;
          std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::push_back
                    ((vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>> *)piVar3[-1],
                     (PurcahseBonus *)*piVar3);
          piVar3 = piVar3 + -1;
        }
        piVar3[2] = (int)&local_50;
        piVar3[1] = (int)param_2;
        *piVar3 = (int)local_6c;
        piVar3[-1] = 0x88b650b;
        std::
        map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
        ::find((int *)*piVar3);
        piVar3[1] = (int)param_2;
        *piVar3 = (int)local_38;
        piVar3[-1] = 0x88b6520;
        std::
        map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
        ::end((map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
               *)*piVar3);
        piVar3[1] = (int)local_38;
        *piVar3 = (int)local_6c;
        piVar3[-1] = 0x88b6535;
        cVar1 = std::
                _Rb_tree_iterator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>
                ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>
                              *)*piVar3,(_Rb_tree_iterator *)piVar3[1]);
        if (cVar1 == '\0') {
          piVar3[2] = (int)local_68;
          piVar3[1] = (int)&local_50;
          *piVar3 = (int)local_1c;
          piVar3[-1] = 0x88b6594;
          std::make_pair<int&,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>&>
                    ((int *)*piVar3,(vector *)piVar3[1]);
          piVar3[1] = (int)local_1c;
          *piVar3 = (int)local_2c;
                    /* try { // try from 088b65a4 to 088b65a8 has its CatchHandler @ 088b65e7 */
          piVar3[-1] = 0x88b65a9;
          std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
          ::pair<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                    ((pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                      *)*piVar3,(pair *)piVar3[1]);
          piVar3[2] = (int)local_2c;
          piVar3[1] = (int)param_2;
          *piVar3 = (int)local_34;
                    /* try { // try from 088b65bd to 088b65c1 has its CatchHandler @ 088b65d2 */
          piVar3[-1] = 0x88b65c2;
          std::
          map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
          ::insert((pair *)*piVar3);
          *piVar3 = (int)local_2c;
                    /* try { // try from 088b65cb to 088b65cf has its CatchHandler @ 088b65e7 */
          piVar3[-1] = 0x88b65d0;
          std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
          ::~pair((pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                   *)*piVar3);
          *piVar3 = (int)local_1c;
                    /* try { // try from 088b6602 to 088b6606 has its CatchHandler @ 088b660e */
          piVar3[-1] = 0x88b6607;
          std::pair<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>::~pair
                    ((pair<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                      *)*piVar3);
          bVar2 = true;
        }
        else {
          piVar3[5] = local_50;
          piVar3[4] = (int)"[PURCAHSE BONUS] duplicate purcahse item (goods:%d)";
          piVar3[3] = 0x36;
          piVar3[2] = (int)"importCashShopPurcahseBonusItemList";
          piVar3[1] = (int)"../localjapan/RDARScriptCeraShop.cpp";
          *piVar3 = 1;
          piVar3[-1] = 0x88b656c;
          LogManager::logFormat
                    (*piVar3,(char *)piVar3[1],(char *)piVar3[2],piVar3[3],(char *)piVar3[4]);
          unaff_EBX = 0x37;
          bVar2 = false;
        }
      }
      else {
        unaff_EBX = 0x1b;
        bVar2 = false;
      }
LAB_088b6623:
      *piVar3 = (int)local_68;
                    /* try { // try from 088b6629 to 088b662d has its CatchHandler @ 088b663f */
      piVar3[-1] = 0x88b662e;
      std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::~vector
                ((vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>> *)*piVar3);
    } while (bVar2);
LAB_088b665a:
    *piVar3 = (int)local_48;
    piVar3[-1] = 0x88b6665;
    std::string::~string((string *)*piVar3);
  }
  else {
    unaff_EBX = 10;
  }
  return unaff_EBX;
}
```
