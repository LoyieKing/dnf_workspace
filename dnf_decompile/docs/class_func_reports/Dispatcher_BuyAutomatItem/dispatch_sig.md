# dispatch_sig

`_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BuyAutomatItem` | `0x081fe578` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081fe578  _ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x081fe578, 0x081feb11]
081fe578 +0x000:  push   %ebp
081fe579 +0x001:  mov    %esp,%ebp
081fe57b +0x003:  push   %esi
081fe57c +0x004:  push   %ebx
081fe57d +0x005:  sub    $0x3fe0,%esp
081fe583 +0x00b:  cmpl   $0x0,0xc(%ebp)
081fe587 +0x00f:  jne    081fe5e8 <+0x70>
081fe589 +0x011:  movl   $0x0,0xc(%esp)
081fe591 +0x019:  movl   $0x9145,0x8(%esp)
081fe599 +0x021:  movl   $&_ZZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fe5a1 +0x029:  lea    -0x28(%ebp),%eax
081fe5a4 +0x02c:  mov    %eax,(%esp)
081fe5a7 +0x02f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fe5ac +0x034:  movl   $"pUser doesn't exist in Dispatcher_BuyAutomatItem::dispatch_sig",0x4(%esp)
081fe5b4 +0x03c:  lea    -0x28(%ebp),%eax
081fe5b7 +0x03f:  mov    %eax,(%esp)
081fe5ba +0x042:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fe5bf +0x047:  movl   $0x0,0xc(%esp)
081fe5c7 +0x04f:  movl   $0x0,0x8(%esp)
081fe5cf +0x057:  movl   $&_ZZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fe5d7 +0x05f:  movl   $0x9146,(%esp)
081fe5de +0x066:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fe5e3 +0x06b:  jmp    081feb07 <+0x58f>
081fe5e8 +0x070:  mov    0xc(%ebp),%eax
081fe5eb +0x073:  mov    %eax,(%esp)
081fe5ee +0x076:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081fe5f3 +0x07b:  cmp    $0x2,%eax
081fe5f6 +0x07e:  jle    081fe607 <+0x8f>
081fe5f8 +0x080:  mov    0xc(%ebp),%eax
081fe5fb +0x083:  mov    %eax,(%esp)
081fe5fe +0x086:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081fe603 +0x08b:  test   %eax,%eax
081fe605 +0x08d:  jne    081fe60e <+0x96>
081fe607 +0x08f:  mov    $0x1,%eax
081fe60c +0x094:  jmp    081fe613 <+0x9b>
081fe60e +0x096:  mov    $0x0,%eax
081fe613 +0x09b:  test   %al,%al
081fe615 +0x09d:  je     081fe640 <+0xc8>
081fe617 +0x09f:  movl   $0x0,0xc(%esp)
081fe61f +0x0a7:  movl   $0x0,0x8(%esp)
081fe627 +0x0af:  movl   $&_ZZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fe62f +0x0b7:  movl   $0x914a,(%esp)
081fe636 +0x0be:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fe63b +0x0c3:  jmp    081feb07 <+0x58f>
081fe640 +0x0c8:  mov    0xc(%ebp),%eax
081fe643 +0x0cb:  mov    %eax,(%esp)
081fe646 +0x0ce:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081fe64b +0x0d3:  test   %al,%al
081fe64d +0x0d5:  je     081fe69d <+0x125>
081fe64f +0x0d7:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fe654 +0x0dc:  movl   $0x0,0x1c(%esp)
081fe65c +0x0e4:  movl   $0x1,0x18(%esp)
081fe664 +0x0ec:  movl   $0x1,0x14(%esp)
081fe66c +0x0f4:  movl   $0x0,0x10(%esp)
081fe674 +0x0fc:  movl   $0x0,0xc(%esp)
081fe67c +0x104:  movl   $0x13,0x8(%esp)
081fe684 +0x10c:  mov    0xc(%ebp),%edx
081fe687 +0x10f:  mov    %edx,0x4(%esp)
081fe68b +0x113:  mov    %eax,(%esp)
081fe68e +0x116:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fe693 +0x11b:  mov    $0x0,%eax
081fe698 +0x120:  jmp    081feb07 <+0x58f>
081fe69d +0x125:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081fe6a2 +0x12a:  movl   $0x44,0x8(%esp)
081fe6aa +0x132:  mov    0xc(%ebp),%edx
081fe6ad +0x135:  mov    %edx,0x4(%esp)
081fe6b1 +0x139:  mov    %eax,(%esp)
081fe6b4 +0x13c:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081fe6b9 +0x141:  mov    %eax,-0x18(%ebp)
081fe6bc +0x144:  cmpl   $0x0,-0x18(%ebp)
081fe6c0 +0x148:  je     081fe727 <+0x1af>
081fe6c2 +0x14a:  cmpl   $0x7b,-0x18(%ebp)
081fe6c6 +0x14e:  jne    081fe6cf <+0x157>
081fe6c8 +0x150:  mov    $0x76,%eax
081fe6cd +0x155:  jmp    081fe6d4 <+0x15c>
081fe6cf +0x157:  mov    $0x86,%eax
081fe6d4 +0x15c:  mov    %eax,-0x14(%ebp)
081fe6d7 +0x15f:  mov    -0x14(%ebp),%eax
081fe6da +0x162:  movzwl %ax,%edx
081fe6dd +0x165:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fe6e2 +0x16a:  movl   $0x0,0x1c(%esp)
081fe6ea +0x172:  movl   $0x1,0x18(%esp)
081fe6f2 +0x17a:  movl   $0x1,0x14(%esp)
081fe6fa +0x182:  movl   $0x0,0x10(%esp)
081fe702 +0x18a:  movl   $0x0,0xc(%esp)
081fe70a +0x192:  mov    %edx,0x8(%esp)
081fe70e +0x196:  mov    0xc(%ebp),%edx
081fe711 +0x199:  mov    %edx,0x4(%esp)
081fe715 +0x19d:  mov    %eax,(%esp)
081fe718 +0x1a0:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fe71d +0x1a5:  mov    $0x0,%eax
081fe722 +0x1aa:  jmp    081feb07 <+0x58f>
081fe727 +0x1af:  lea    -0x3fbc(%ebp),%eax
081fe72d +0x1b5:  add    $0x36,%eax
081fe730 +0x1b8:  mov    %eax,0x4(%esp)
081fe734 +0x1bc:  mov    0x10(%ebp),%eax
081fe737 +0x1bf:  mov    %eax,(%esp)
081fe73a +0x1c2:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081fe73f +0x1c7:  movzbl -0x3f86(%ebp),%eax
081fe746 +0x1ce:  test   %al,%al
081fe748 +0x1d0:  je     081fe760 <+0x1e8>
081fe74a +0x1d2:  movzbl -0x3f86(%ebp),%eax
081fe751 +0x1d9:  test   %al,%al
081fe753 +0x1db:  je     081fe760 <+0x1e8>
081fe755 +0x1dd:  movzbl -0x3f86(%ebp),%eax
081fe75c +0x1e4:  cmp    $0x23,%al
081fe75e +0x1e6:  jbe    081fe7b0 <+0x238>
081fe760 +0x1e8:  mov    -0x3f83(%ebp),%edx
081fe766 +0x1ee:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fe76b +0x1f3:  movl   $0x0,0x1c(%esp)
081fe773 +0x1fb:  movl   $0x1,0x18(%esp)
081fe77b +0x203:  movl   $0x1,0x14(%esp)
081fe783 +0x20b:  mov    %edx,0x10(%esp)
081fe787 +0x20f:  movl   $0x0,0xc(%esp)
081fe78f +0x217:  movl   $0x1,0x8(%esp)
081fe797 +0x21f:  mov    0xc(%ebp),%edx
081fe79a +0x222:  mov    %edx,0x4(%esp)
081fe79e +0x226:  mov    %eax,(%esp)
081fe7a1 +0x229:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fe7a6 +0x22e:  mov    $0x0,%eax
081fe7ab +0x233:  jmp    081feb07 <+0x58f>
081fe7b0 +0x238:  lea    -0x30(%ebp),%eax
081fe7b3 +0x23b:  mov    %eax,(%esp)
081fe7b6 +0x23e:  call   081a405e <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xb9>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xb9
081fe7bb +0x243:  movl   $0x0,-0x10(%ebp)
081fe7c2 +0x24a:  jmp    081fe901 <+0x389>
081fe7c7 +0x24f:  mov    -0x10(%ebp),%edx
081fe7ca +0x252:  lea    -0x3fbc(%ebp),%eax
081fe7d0 +0x258:  imul   $0x1cf,%edx,%edx
081fe7d6 +0x25e:  add    $0x30,%edx
081fe7d9 +0x261:  add    %edx,%eax
081fe7db +0x263:  add    $0x7,%eax
081fe7de +0x266:  mov    %eax,0x4(%esp)
081fe7e2 +0x26a:  mov    0x10(%ebp),%eax
081fe7e5 +0x26d:  mov    %eax,(%esp)
081fe7e8 +0x270:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081fe7ed +0x275:  xor    $0x1,%eax
081fe7f0 +0x278:  test   %al,%al
081fe7f2 +0x27a:  je     081fe81d <+0x2a5>
081fe7f4 +0x27c:  movl   $0x0,0xc(%esp)
081fe7fc +0x284:  movl   $0x0,0x8(%esp)
081fe804 +0x28c:  movl   $&_ZZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fe80c +0x294:  movl   $0x9172,(%esp)
081fe813 +0x29b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fe818 +0x2a0:  jmp    081feb07 <+0x58f>
081fe81d +0x2a5:  mov    -0x10(%ebp),%edx
081fe820 +0x2a8:  lea    -0x3fbc(%ebp),%eax
081fe826 +0x2ae:  imul   $0x1cf,%edx,%edx
081fe82c +0x2b4:  add    $0x30,%edx
081fe82f +0x2b7:  add    %edx,%eax
081fe831 +0x2b9:  add    $0x8,%eax
081fe834 +0x2bc:  mov    %eax,0x4(%esp)
081fe838 +0x2c0:  mov    0x10(%ebp),%eax
081fe83b +0x2c3:  mov    %eax,(%esp)
081fe83e +0x2c6:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081fe843 +0x2cb:  xor    $0x1,%eax
081fe846 +0x2ce:  test   %al,%al
081fe848 +0x2d0:  je     081fe873 <+0x2fb>
081fe84a +0x2d2:  movl   $0x0,0xc(%esp)
081fe852 +0x2da:  movl   $0x0,0x8(%esp)
081fe85a +0x2e2:  movl   $&_ZZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fe862 +0x2ea:  movl   $0x9175,(%esp)
081fe869 +0x2f1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fe86e +0x2f6:  jmp    081feb07 <+0x58f>
081fe873 +0x2fb:  mov    -0x10(%ebp),%edx
081fe876 +0x2fe:  lea    -0x3fbc(%ebp),%eax
081fe87c +0x304:  imul   $0x1cf,%edx,%edx
081fe882 +0x30a:  add    $0x30,%edx
081fe885 +0x30d:  add    %edx,%eax
081fe887 +0x30f:  add    $0x9,%eax
081fe88a +0x312:  mov    %eax,0x4(%esp)
081fe88e +0x316:  mov    0x10(%ebp),%eax
081fe891 +0x319:  mov    %eax,(%esp)
081fe894 +0x31c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081fe899 +0x321:  xor    $0x1,%eax
081fe89c +0x324:  test   %al,%al
081fe89e +0x326:  je     081fe8c9 <+0x351>
081fe8a0 +0x328:  movl   $0x0,0xc(%esp)
081fe8a8 +0x330:  movl   $0x0,0x8(%esp)
081fe8b0 +0x338:  movl   $&_ZZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fe8b8 +0x340:  movl   $0x9178,(%esp)
081fe8bf +0x347:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fe8c4 +0x34c:  jmp    081feb07 <+0x58f>
081fe8c9 +0x351:  mov    -0x2c(%ebp),%eax
081fe8cc +0x354:  test   %eax,%eax
081fe8ce +0x356:  jne    081fe8fd <+0x385>
081fe8d0 +0x358:  mov    -0x10(%ebp),%eax
081fe8d3 +0x35b:  imul   $0x1cf,%eax,%eax
081fe8d9 +0x361:  lea    -0x8(%ebp),%edx
081fe8dc +0x364:  lea    (%edx,%eax,1),%eax
081fe8df +0x367:  sub    $0x3f84,%eax
081fe8e4 +0x36c:  mov    0x9(%eax),%eax
081fe8e7 +0x36f:  lea    -0x30(%ebp),%edx
081fe8ea +0x372:  mov    %edx,0x8(%esp)
081fe8ee +0x376:  mov    %eax,0x4(%esp)
081fe8f2 +0x37a:  mov    0xc(%ebp),%eax
081fe8f5 +0x37d:  mov    %eax,(%esp)
081fe8f8 +0x380:  call   08196ac8 <_ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE>  ; ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)
081fe8fd +0x385:  addl   $0x1,-0x10(%ebp)
081fe901 +0x389:  movzbl -0x3f86(%ebp),%eax
081fe908 +0x390:  movzbl %al,%eax
081fe90b +0x393:  cmp    -0x10(%ebp),%eax
081fe90e +0x396:  setg   %al
081fe911 +0x399:  test   %al,%al
081fe913 +0x39b:  jne    081fe7c7 <+0x24f>
081fe919 +0x3a1:  mov    -0x2c(%ebp),%eax
081fe91c +0x3a4:  test   %eax,%eax
081fe91e +0x3a6:  jne    081fe972 <+0x3fa>
081fe920 +0x3a8:  mov    &_ZN10GlobalData21s_pItemVendingMachineE,%eax
081fe925 +0x3ad:  lea    -0x3fbc(%ebp),%edx
081fe92b +0x3b3:  mov    %edx,0x8(%esp)
081fe92f +0x3b7:  mov    0xc(%ebp),%edx
081fe932 +0x3ba:  mov    %edx,0x4(%esp)
081fe936 +0x3be:  mov    %eax,(%esp)
081fe939 +0x3c1:  call   0854c4d0 <_ZN18ItemVendingMachine7BuyItemEP5CUserRK21MSG_BUY_CERASHOP_ITEM>  ; ItemVendingMachine::BuyItem(CUser*, MSG_BUY_CERASHOP_ITEM const&)
081fe93e +0x3c6:  test   %al,%al
081fe940 +0x3c8:  je     081fe949 <+0x3d1>
081fe942 +0x3ca:  mov    $0x0,%eax
081fe947 +0x3cf:  jmp    081fe96d <+0x3f5>
081fe949 +0x3d1:  movl   $0x0,0xc(%esp)
081fe951 +0x3d9:  movl   $0x0,0x8(%esp)
081fe959 +0x3e1:  movl   $&_ZZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fe961 +0x3e9:  movl   $0x9183,(%esp)
081fe968 +0x3f0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fe96d +0x3f5:  jmp    081feb07 <+0x58f>
081fe972 +0x3fa:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081fe977 +0x3ff:  movl   $0x9187,0x8(%esp)
081fe97f +0x407:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081fe987 +0x40f:  mov    %eax,(%esp)
081fe98a +0x412:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081fe98f +0x417:  movl   $0x1,0x8(%esp)
081fe997 +0x41f:  mov    %eax,0x4(%esp)
081fe99b +0x423:  lea    -0x38(%ebp),%eax
081fe99e +0x426:  mov    %eax,(%esp)
081fe9a1 +0x429:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081fe9a6 +0x42e:  lea    -0x38(%ebp),%eax
081fe9a9 +0x431:  mov    %eax,(%esp)
081fe9ac +0x434:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081fe9b1 +0x439:  movl   $0x1fa,0x4(%esp)
081fe9b9 +0x441:  mov    %eax,(%esp)
081fe9bc +0x444:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081fe9c1 +0x449:  mov    0xc(%ebp),%eax
081fe9c4 +0x44c:  mov    %eax,(%esp)
081fe9c7 +0x44f:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081fe9cc +0x454:  mov    %eax,%ebx
081fe9ce +0x456:  lea    -0x38(%ebp),%eax
081fe9d1 +0x459:  mov    %eax,(%esp)
081fe9d4 +0x45c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081fe9d9 +0x461:  mov    %ebx,0x4(%esp)
081fe9dd +0x465:  mov    %eax,(%esp)
081fe9e0 +0x468:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081fe9e5 +0x46d:  mov    0xc(%ebp),%eax
081fe9e8 +0x470:  mov    %eax,(%esp)
081fe9eb +0x473:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fe9f0 +0x478:  mov    %eax,%ebx
081fe9f2 +0x47a:  lea    -0x38(%ebp),%eax
081fe9f5 +0x47d:  mov    %eax,(%esp)
081fe9f8 +0x480:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081fe9fd +0x485:  mov    %ebx,0x4(%esp)
081fea01 +0x489:  mov    %eax,(%esp)
081fea04 +0x48c:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
081fea09 +0x491:  movl   $0xffffffff,0x4(%esp)
081fea11 +0x499:  mov    0xc(%ebp),%eax
081fea14 +0x49c:  mov    %eax,(%esp)
081fea17 +0x49f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081fea1c +0x4a4:  mov    %eax,%ebx
081fea1e +0x4a6:  lea    -0x38(%ebp),%eax
081fea21 +0x4a9:  mov    %eax,(%esp)
081fea24 +0x4ac:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081fea29 +0x4b1:  mov    %ebx,0x4(%esp)
081fea2d +0x4b5:  mov    %eax,(%esp)
081fea30 +0x4b8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081fea35 +0x4bd:  mov    -0x2c(%ebp),%ebx
081fea38 +0x4c0:  lea    -0x38(%ebp),%eax
081fea3b +0x4c3:  mov    %eax,(%esp)
081fea3e +0x4c6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081fea43 +0x4cb:  mov    %ebx,0x4(%esp)
081fea47 +0x4cf:  mov    %eax,(%esp)
081fea4a +0x4d2:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
081fea4f +0x4d7:  movzwl -0x30(%ebp),%eax
081fea53 +0x4db:  movswl %ax,%ebx
081fea56 +0x4de:  lea    -0x38(%ebp),%eax
081fea59 +0x4e1:  mov    %eax,(%esp)
081fea5c +0x4e4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081fea61 +0x4e9:  mov    %ebx,0x4(%esp)
081fea65 +0x4ed:  mov    %eax,(%esp)
081fea68 +0x4f0:  call   0822ad66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x410>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x410
081fea6d +0x4f5:  movzwl -0x2e(%ebp),%eax
081fea71 +0x4f9:  movswl %ax,%ebx
081fea74 +0x4fc:  lea    -0x38(%ebp),%eax
081fea77 +0x4ff:  mov    %eax,(%esp)
081fea7a +0x502:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081fea7f +0x507:  mov    %ebx,0x4(%esp)
081fea83 +0x50b:  mov    %eax,(%esp)
081fea86 +0x50e:  call   0822ad66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x410>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x410
081fea8b +0x513:  lea    -0x38(%ebp),%eax
081fea8e +0x516:  mov    %eax,(%esp)
081fea91 +0x519:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081fea96 +0x51e:  mov    %eax,(%esp)
081fea99 +0x521:  call   0823791c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcfc6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcfc6
081fea9e +0x526:  mov    %eax,-0xc(%ebp)
081feaa1 +0x529:  movl   $0x3f84,0x8(%esp)
081feaa9 +0x531:  lea    -0x3fbc(%ebp),%eax
081feaaf +0x537:  mov    %eax,0x4(%esp)
081feab3 +0x53b:  mov    -0xc(%ebp),%eax
081feab6 +0x53e:  mov    %eax,(%esp)
081feab9 +0x541:  call   0807d8a0 <_init+0x198>
081feabe +0x546:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081feac3 +0x54b:  lea    -0x38(%ebp),%edx
081feac6 +0x54e:  mov    %edx,0x8(%esp)
081feaca +0x552:  movl   $0x2,0x4(%esp)
081fead2 +0x55a:  mov    %eax,(%esp)
081fead5 +0x55d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081feada +0x562:  jmp    081feaf7 <+0x57f>
081feadc +0x564:  mov    %edx,%ebx
081feade +0x566:  mov    %eax,%esi
081feae0 +0x568:  lea    -0x38(%ebp),%eax
081feae3 +0x56b:  mov    %eax,(%esp)
081feae6 +0x56e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081feaeb +0x573:  mov    %esi,%eax
081feaed +0x575:  mov    %ebx,%edx
081feaef +0x577:  mov    %eax,(%esp)
081feaf2 +0x57a:  call   08ae3750 <_Unwind_Resume>
081feaf7 +0x57f:  lea    -0x38(%ebp),%eax
081feafa +0x582:  mov    %eax,(%esp)
081feafd +0x585:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081feb02 +0x58a:  mov    $0x0,%eax
081feb07 +0x58f:  add    $0x3fe0,%esp
081feb0d +0x595:  pop    %ebx
081feb0e +0x596:  pop    %esi
081feb0f +0x597:  pop    %ebp
081feb10 +0x598:  ret
081feb11 +0x599:  nop
```

## 反编译 C

```c
// Dispatcher_BuyAutomatItem::dispatch_sig @ 0x81fe578

/* Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_BuyAutomatItem::dispatch_sig
          (Dispatcher_BuyAutomatItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  uint uVar7;
  MSG_BUY_CERASHOP_ITEM local_3fc0 [54];
  byte local_3f8a;
  uchar auStack_3f89 [2];
  uint local_3f87 [4050];
  CStreamGuard local_3c [8];
  short local_34;
  short local_32;
  uint local_30;
  cMyTrace local_2c [16];
  int local_1c;
  undefined4 local_18;
  int local_14;
  MSG_BUY_CERASHOP_ITEM *local_10;
  
  if (param_1 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_2c,
                       "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)",
                       0x9145,0);
    cMyTrace::operator()(local_2c,"pUser doesn\'t exist in Dispatcher_BuyAutomatItem::dispatch_sig")
    ;
    uVar3 = LineFunc(0x9146,
                     "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
  else {
    iVar4 = CUser::get_state(param_1);
    if ((iVar4 < 3) ||
       (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar3 = LineFunc(0x914a,
                       "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
    }
    else {
      cVar2 = CUser::CheckInTrade(param_1);
      if (cVar2 == '\0') {
        local_1c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x44);
        if (local_1c == 0) {
          PacketBuf::get_byte(param_2,&local_3f8a);
          if (((local_3f8a == 0) || (local_3f8a == 0)) || (0x23 < local_3f8a)) {
            WongWork::CCeraShop::ProcessError
                      (GlobalData::s_pCeraShop,param_1,1,0,local_3f87[0],1,1,'\0');
            uVar3 = 0;
          }
          else {
            PurchaseLimitItem::Info::Info((Info *)&local_34);
            for (local_14 = 0; local_14 < (int)(uint)local_3f8a; local_14 = local_14 + 1) {
              cVar2 = PacketBuf::get_byte(param_2,auStack_3f89 + local_14 * 0x1cf);
              if (cVar2 != '\x01') {
                uVar3 = LineFunc(0x9172,
                                 "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar3;
              }
              cVar2 = PacketBuf::get_byte(param_2,(char *)(auStack_3f89 + local_14 * 0x1cf + 1));
              if (cVar2 != '\x01') {
                uVar3 = LineFunc(0x9175,
                                 "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar3;
              }
              cVar2 = PacketBuf::get_int(param_2,(uint *)((int)local_3f87 + local_14 * 0x1cf));
              if (cVar2 != '\x01') {
                uVar3 = LineFunc(0x9178,
                                 "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar3;
              }
              if (local_30 == 0) {
                ARAD::CheckAccountItem
                          (param_1,*(uint *)((int)local_3f87 + local_14 * 0x1cf),(Info *)&local_34);
              }
            }
            if (local_30 == 0) {
              cVar2 = ItemVendingMachine::BuyItem
                                (GlobalData::s_pItemVendingMachine,param_1,local_3fc0);
              if (cVar2 == '\0') {
                uVar3 = LineFunc(0x9183,
                                 "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              pSVar5 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",
                                           0x9187);
              CStreamGuard::CStreamGuard(local_3c,pSVar5,true);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
                    /* try { // try from 081fe9bc to 081fead9 has its CatchHandler @ 081feadc */
              CStreamGuard::operator<<(pCVar6,0x1fa);
              iVar4 = CUser::GetUID(param_1);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
              CStreamGuard::operator<<(pCVar6,iVar4);
              uVar7 = CUser::get_acc_id(param_1);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
              CStreamGuard::operator<<(pCVar6,uVar7);
              iVar4 = CUser::get_charac_no(param_1,-1);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
              CStreamGuard::operator<<(pCVar6,iVar4);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
              CStreamGuard::operator<<(pCVar6,local_30);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
              CStreamGuard::operator<<(pCVar6,local_34);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
              CStreamGuard::operator<<(pCVar6,local_32);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_3c);
              local_10 = CStreamGuard::GetInBuffer<MSG_BUY_CERASHOP_ITEM>(pCVar6);
              memcpy(local_10,local_3fc0,0x3f84);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_3c);
              CStreamGuard::~CStreamGuard(local_3c);
              uVar3 = 0;
            }
          }
        }
        else {
          if (local_1c == 0x7b) {
            local_18 = 0x76;
          }
          else {
            local_18 = 0x86;
          }
          WongWork::CCeraShop::ProcessError
                    (GlobalData::s_pCeraShop,param_1,(ushort)local_18,0,0,1,1,'\0');
          uVar3 = 0;
        }
      }
      else {
        WongWork::CCeraShop::ProcessError(GlobalData::s_pCeraShop,param_1,0x13,0,0,1,1,'\0');
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
```
