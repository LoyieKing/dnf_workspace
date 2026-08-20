# dispatch_sig

`_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RentAvatar` | `0x081ee59c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ee59c  _ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ee59c, 0x081eed07]
081ee59c +0x000:  push   %ebp
081ee59d +0x001:  mov    %esp,%ebp
081ee59f +0x003:  push   %edi
081ee5a0 +0x004:  push   %esi
081ee5a1 +0x005:  push   %ebx
081ee5a2 +0x006:  sub    $0x19c,%esp
081ee5a8 +0x00c:  lea    -0xa8(%ebp),%ebx
081ee5ae +0x012:  mov    $0x0,%eax
081ee5b3 +0x017:  mov    $0xa,%edx
081ee5b8 +0x01c:  mov    %ebx,%edi
081ee5ba +0x01e:  mov    %edx,%ecx
081ee5bc +0x020:  rep stos %eax,%es:(%edi)
081ee5be +0x022:  movl   $0x0,-0x34(%ebp)
081ee5c5 +0x029:  movl   $0x0,-0x2c(%ebp)
081ee5cc +0x030:  movl   $0x0,-0x28(%ebp)
081ee5d3 +0x037:  lea    -0x40(%ebp),%eax
081ee5d6 +0x03a:  mov    %eax,(%esp)
081ee5d9 +0x03d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ee5de +0x042:  lea    -0x188(%ebp),%eax
081ee5e4 +0x048:  add    $0xd,%eax
081ee5e7 +0x04b:  mov    %eax,0x4(%esp)
081ee5eb +0x04f:  mov    0x10(%ebp),%eax
081ee5ee +0x052:  mov    %eax,(%esp)
081ee5f1 +0x055:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081ee5f6 +0x05a:  xor    $0x1,%eax
081ee5f9 +0x05d:  test   %al,%al
081ee5fb +0x05f:  je     081ee628 <+0x8c>
081ee5fd +0x061:  movl   $0x0,0xc(%esp)
081ee605 +0x069:  movl   $0x0,0x8(%esp)
081ee60d +0x071:  movl   $&_ZZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ee615 +0x079:  movl   $0x71ee,(%esp)
081ee61c +0x080:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ee621 +0x085:  mov    %eax,%ebx
081ee623 +0x087:  jmp    081eecef <+0x753>
081ee628 +0x08c:  movzbl -0x17b(%ebp),%eax
081ee62f +0x093:  test   %al,%al
081ee631 +0x095:  je     081ee63e <+0xa2>
081ee633 +0x097:  movzbl -0x17b(%ebp),%eax
081ee63a +0x09e:  cmp    $0x9,%al
081ee63c +0x0a0:  jbe    081ee669 <+0xcd>
081ee63e +0x0a2:  movl   $0x0,0xc(%esp)
081ee646 +0x0aa:  movl   $0x0,0x8(%esp)
081ee64e +0x0b2:  movl   $&_ZZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ee656 +0x0ba:  movl   $0x71f0,(%esp)
081ee65d +0x0c1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ee662 +0x0c6:  mov    %eax,%ebx
081ee664 +0x0c8:  jmp    081eecef <+0x753>
081ee669 +0x0cd:  movl   $0x0,-0x30(%ebp)
081ee670 +0x0d4:  jmp    081ee727 <+0x18b>
081ee675 +0x0d9:  mov    -0x30(%ebp),%edx
081ee678 +0x0dc:  lea    -0x188(%ebp),%ecx
081ee67e +0x0e2:  mov    %edx,%eax
081ee680 +0x0e4:  shl    $0x2,%eax
081ee683 +0x0e7:  add    %edx,%eax
081ee685 +0x0e9:  lea    (%ecx,%eax,1),%eax
081ee688 +0x0ec:  add    $0xe,%eax
081ee68b +0x0ef:  mov    %eax,0x4(%esp)
081ee68f +0x0f3:  mov    0x10(%ebp),%eax
081ee692 +0x0f6:  mov    %eax,(%esp)
081ee695 +0x0f9:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081ee69a +0x0fe:  xor    $0x1,%eax
081ee69d +0x101:  test   %al,%al
081ee69f +0x103:  je     081ee6cc <+0x130>
081ee6a1 +0x105:  movl   $0x0,0xc(%esp)
081ee6a9 +0x10d:  movl   $0x0,0x8(%esp)
081ee6b1 +0x115:  movl   $&_ZZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ee6b9 +0x11d:  movl   $0x71f4,(%esp)
081ee6c0 +0x124:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ee6c5 +0x129:  mov    %eax,%ebx
081ee6c7 +0x12b:  jmp    081eecef <+0x753>
081ee6cc +0x130:  mov    -0x30(%ebp),%edx
081ee6cf +0x133:  lea    -0x188(%ebp),%ecx
081ee6d5 +0x139:  mov    %edx,%eax
081ee6d7 +0x13b:  shl    $0x2,%eax
081ee6da +0x13e:  add    %edx,%eax
081ee6dc +0x140:  lea    (%ecx,%eax,1),%eax
081ee6df +0x143:  add    $0xf,%eax
081ee6e2 +0x146:  mov    %eax,0x4(%esp)
081ee6e6 +0x14a:  mov    0x10(%ebp),%eax
081ee6e9 +0x14d:  mov    %eax,(%esp)
081ee6ec +0x150:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081ee6f1 +0x155:  xor    $0x1,%eax
081ee6f4 +0x158:  test   %al,%al
081ee6f6 +0x15a:  je     081ee723 <+0x187>
081ee6f8 +0x15c:  movl   $0x0,0xc(%esp)
081ee700 +0x164:  movl   $0x0,0x8(%esp)
081ee708 +0x16c:  movl   $&_ZZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ee710 +0x174:  movl   $0x71f5,(%esp)
081ee717 +0x17b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ee71c +0x180:  mov    %eax,%ebx
081ee71e +0x182:  jmp    081eecef <+0x753>
081ee723 +0x187:  addl   $0x1,-0x30(%ebp)
081ee727 +0x18b:  movzbl -0x17b(%ebp),%eax
081ee72e +0x192:  movzbl %al,%eax
081ee731 +0x195:  cmp    -0x30(%ebp),%eax
081ee734 +0x198:  setg   %al
081ee737 +0x19b:  test   %al,%al
081ee739 +0x19d:  jne    081ee675 <+0xd9>
081ee73f +0x1a3:  mov    0xc(%ebp),%eax
081ee742 +0x1a6:  mov    %eax,(%esp)
081ee745 +0x1a9:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081ee74a +0x1ae:  test   %eax,%eax
081ee74c +0x1b0:  sete   %al
081ee74f +0x1b3:  test   %al,%al
081ee751 +0x1b5:  je     081ee77e <+0x1e2>
081ee753 +0x1b7:  movl   $0x0,0xc(%esp)
081ee75b +0x1bf:  movl   $0x0,0x8(%esp)
081ee763 +0x1c7:  movl   $&_ZZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ee76b +0x1cf:  movl   $0x71fa,(%esp)
081ee772 +0x1d6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ee777 +0x1db:  mov    %eax,%ebx
081ee779 +0x1dd:  jmp    081eecef <+0x753>
081ee77e +0x1e2:  mov    0xc(%ebp),%eax
081ee781 +0x1e5:  mov    %eax,(%esp)
081ee784 +0x1e8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081ee789 +0x1ed:  movl   $0x0,0x8(%esp)
081ee791 +0x1f5:  movl   $0x2,0x4(%esp)
081ee799 +0x1fd:  mov    %eax,(%esp)
081ee79c +0x200:  call   084fb67a <_ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>  ; CInventory::GetRemainCapacity(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
081ee7a1 +0x205:  movzbl -0x17b(%ebp),%edx
081ee7a8 +0x20c:  movzbl %dl,%edx
081ee7ab +0x20f:  cmp    %edx,%eax
081ee7ad +0x211:  setl   %al
081ee7b0 +0x214:  test   %al,%al
081ee7b2 +0x216:  je     081ee7d1 <+0x235>
081ee7b4 +0x218:  movl   $0x4,0x4(%esp)
081ee7bc +0x220:  mov    0xc(%ebp),%eax
081ee7bf +0x223:  mov    %eax,(%esp)
081ee7c2 +0x226:  call   082352c5 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa96f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa96f
081ee7c7 +0x22b:  mov    $0x0,%ebx
081ee7cc +0x230:  jmp    081eecef <+0x753>
081ee7d1 +0x235:  lea    -0xd0(%ebp),%ebx
081ee7d7 +0x23b:  mov    $0x0,%eax
081ee7dc +0x240:  mov    $0xa,%edx
081ee7e1 +0x245:  mov    %ebx,%edi
081ee7e3 +0x247:  mov    %edx,%ecx
081ee7e5 +0x249:  rep stos %eax,%es:(%edi)
081ee7e7 +0x24b:  lea    -0xf8(%ebp),%ebx
081ee7ed +0x251:  mov    $0x0,%eax
081ee7f2 +0x256:  mov    $0xa,%edx
081ee7f7 +0x25b:  mov    %ebx,%edi
081ee7f9 +0x25d:  mov    %edx,%ecx
081ee7fb +0x25f:  rep stos %eax,%es:(%edi)
081ee7fd +0x261:  lea    -0x120(%ebp),%ebx
081ee803 +0x267:  mov    $0x0,%eax
081ee808 +0x26c:  mov    $0xa,%edx
081ee80d +0x271:  mov    %ebx,%edi
081ee80f +0x273:  mov    %edx,%ecx
081ee811 +0x275:  rep stos %eax,%es:(%edi)
081ee813 +0x277:  lea    -0x148(%ebp),%ebx
081ee819 +0x27d:  mov    $0x0,%eax
081ee81e +0x282:  mov    $0xa,%edx
081ee823 +0x287:  mov    %ebx,%edi
081ee825 +0x289:  mov    %edx,%ecx
081ee827 +0x28b:  rep stos %eax,%es:(%edi)
081ee829 +0x28d:  movl   $0x0,-0x24(%ebp)
081ee830 +0x294:  movl   $0x0,-0x20(%ebp)
081ee837 +0x29b:  movl   $0x0,-0x1c(%ebp)
081ee83e +0x2a2:  movl   $0x0,-0x30(%ebp)
081ee845 +0x2a9:  jmp    081ee9a7 <+0x40b>
081ee84a +0x2ae:  mov    -0x30(%ebp),%ebx
081ee84d +0x2b1:  mov    -0x30(%ebp),%edx
081ee850 +0x2b4:  mov    %edx,%eax
081ee852 +0x2b6:  shl    $0x2,%eax
081ee855 +0x2b9:  add    %edx,%eax
081ee857 +0x2bb:  lea    -0x18(%ebp),%edx
081ee85a +0x2be:  lea    (%edx,%eax,1),%eax
081ee85d +0x2c1:  sub    $0x170,%eax
081ee862 +0x2c6:  mov    0xf(%eax),%eax
081ee865 +0x2c9:  mov    %eax,%esi
081ee867 +0x2cb:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081ee86c +0x2d0:  mov    %esi,0x4(%esp)
081ee870 +0x2d4:  mov    %eax,(%esp)
081ee873 +0x2d7:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081ee878 +0x2dc:  mov    %eax,-0xd0(%ebp,%ebx,4)
081ee87f +0x2e3:  mov    -0x30(%ebp),%eax
081ee882 +0x2e6:  mov    -0xd0(%ebp,%eax,4),%eax
081ee889 +0x2ed:  test   %eax,%eax
081ee88b +0x2ef:  jne    081ee8aa <+0x30e>
081ee88d +0x2f1:  movl   $0x11,0x4(%esp)
081ee895 +0x2f9:  mov    0xc(%ebp),%eax
081ee898 +0x2fc:  mov    %eax,(%esp)
081ee89b +0x2ff:  call   082352c5 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa96f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa96f
081ee8a0 +0x304:  mov    $0x0,%ebx
081ee8a5 +0x309:  jmp    081eecef <+0x753>
081ee8aa +0x30e:  mov    -0x30(%ebp),%ebx
081ee8ad +0x311:  mov    -0x30(%ebp),%edx
081ee8b0 +0x314:  mov    %edx,%eax
081ee8b2 +0x316:  shl    $0x2,%eax
081ee8b5 +0x319:  add    %edx,%eax
081ee8b7 +0x31b:  lea    -0x18(%ebp),%ecx
081ee8ba +0x31e:  lea    (%ecx,%eax,1),%eax
081ee8bd +0x321:  sub    $0x170,%eax
081ee8c2 +0x326:  movzbl 0xe(%eax),%eax
081ee8c6 +0x32a:  movzbl %al,%esi
081ee8c9 +0x32d:  mov    -0x30(%ebp),%eax
081ee8cc +0x330:  mov    -0xd0(%ebp,%eax,4),%eax
081ee8d3 +0x337:  mov    %eax,(%esp)
081ee8d6 +0x33a:  call   0822c856 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f00
081ee8db +0x33f:  mov    %esi,0x4(%esp)
081ee8df +0x343:  mov    %eax,(%esp)
081ee8e2 +0x346:  call   0898c999 <_Z18getAvatarRentPriceii>  ; getAvatarRentPrice(int, int)
081ee8e7 +0x34b:  mov    %eax,-0xf8(%ebp,%ebx,4)
081ee8ee +0x352:  mov    -0x30(%ebp),%ebx
081ee8f1 +0x355:  mov    -0x30(%ebp),%edx
081ee8f4 +0x358:  mov    %edx,%eax
081ee8f6 +0x35a:  shl    $0x2,%eax
081ee8f9 +0x35d:  add    %edx,%eax
081ee8fb +0x35f:  lea    -0x18(%ebp),%edi
081ee8fe +0x362:  lea    (%edi,%eax,1),%eax
081ee901 +0x365:  sub    $0x170,%eax
081ee906 +0x36a:  movzbl 0xe(%eax),%eax
081ee90a +0x36e:  movzbl %al,%esi
081ee90d +0x371:  mov    -0x30(%ebp),%eax
081ee910 +0x374:  mov    -0xd0(%ebp,%eax,4),%eax
081ee917 +0x37b:  mov    %eax,(%esp)
081ee91a +0x37e:  call   0822c84a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1ef4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1ef4
081ee91f +0x383:  mov    %esi,0x4(%esp)
081ee923 +0x387:  mov    %eax,(%esp)
081ee926 +0x38a:  call   0898c999 <_Z18getAvatarRentPriceii>  ; getAvatarRentPrice(int, int)
081ee92b +0x38f:  mov    %eax,-0x148(%ebp,%ebx,4)
081ee932 +0x396:  mov    -0x30(%ebp),%ebx
081ee935 +0x399:  mov    -0x30(%ebp),%edx
081ee938 +0x39c:  mov    %edx,%eax
081ee93a +0x39e:  shl    $0x2,%eax
081ee93d +0x3a1:  add    %edx,%eax
081ee93f +0x3a3:  lea    -0x18(%ebp),%edx
081ee942 +0x3a6:  lea    (%edx,%eax,1),%eax
081ee945 +0x3a9:  sub    $0x170,%eax
081ee94a +0x3ae:  movzbl 0xe(%eax),%eax
081ee94e +0x3b2:  movzbl %al,%esi
081ee951 +0x3b5:  mov    -0x30(%ebp),%eax
081ee954 +0x3b8:  mov    -0xd0(%ebp,%eax,4),%eax
081ee95b +0x3bf:  mov    %eax,(%esp)
081ee95e +0x3c2:  call   0822c862 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f0c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f0c
081ee963 +0x3c7:  mov    %esi,0x4(%esp)
081ee967 +0x3cb:  mov    %eax,(%esp)
081ee96a +0x3ce:  call   0898c999 <_Z18getAvatarRentPriceii>  ; getAvatarRentPrice(int, int)
081ee96f +0x3d3:  mov    %eax,-0x120(%ebp,%ebx,4)
081ee976 +0x3da:  mov    -0x30(%ebp),%eax
081ee979 +0x3dd:  mov    -0xf8(%ebp,%eax,4),%eax
081ee980 +0x3e4:  add    %eax,-0x24(%ebp)
081ee983 +0x3e7:  mov    -0x30(%ebp),%eax
081ee986 +0x3ea:  mov    -0x148(%ebp,%eax,4),%edx
081ee98d +0x3f1:  mov    -0x20(%ebp),%eax
081ee990 +0x3f4:  lea    (%edx,%eax,1),%eax
081ee993 +0x3f7:  mov    %eax,-0x20(%ebp)
081ee996 +0x3fa:  mov    -0x30(%ebp),%eax
081ee999 +0x3fd:  mov    -0x120(%ebp,%eax,4),%eax
081ee9a0 +0x404:  add    %eax,-0x1c(%ebp)
081ee9a3 +0x407:  addl   $0x1,-0x30(%ebp)
081ee9a7 +0x40b:  movzbl -0x17b(%ebp),%eax
081ee9ae +0x412:  movzbl %al,%eax
081ee9b1 +0x415:  cmp    -0x30(%ebp),%eax
081ee9b4 +0x418:  setg   %al
081ee9b7 +0x41b:  test   %al,%al
081ee9b9 +0x41d:  jne    081ee84a <+0x2ae>
081ee9bf +0x423:  mov    0xc(%ebp),%eax
081ee9c2 +0x426:  mov    %eax,(%esp)
081ee9c5 +0x429:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
081ee9ca +0x42e:  cmp    -0x24(%ebp),%eax
081ee9cd +0x431:  jb     081ee9f7 <+0x45b>
081ee9cf +0x433:  mov    0xc(%ebp),%eax
081ee9d2 +0x436:  mov    %eax,(%esp)
081ee9d5 +0x439:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081ee9da +0x43e:  mov    %eax,(%esp)
081ee9dd +0x441:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081ee9e2 +0x446:  cmp    -0x20(%ebp),%eax
081ee9e5 +0x449:  jl     081ee9f7 <+0x45b>
081ee9e7 +0x44b:  mov    0xc(%ebp),%eax
081ee9ea +0x44e:  mov    %eax,(%esp)
081ee9ed +0x451:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
081ee9f2 +0x456:  cmp    -0x1c(%ebp),%eax
081ee9f5 +0x459:  jae    081ee9fe <+0x462>
081ee9f7 +0x45b:  mov    $0x1,%eax
081ee9fc +0x460:  jmp    081eea03 <+0x467>
081ee9fe +0x462:  mov    $0x0,%eax
081eea03 +0x467:  test   %al,%al
081eea05 +0x469:  je     081eea24 <+0x488>
081eea07 +0x46b:  movl   $0xa,0x4(%esp)
081eea0f +0x473:  mov    0xc(%ebp),%eax
081eea12 +0x476:  mov    %eax,(%esp)
081eea15 +0x479:  call   082352c5 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa96f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa96f
081eea1a +0x47e:  mov    $0x0,%ebx
081eea1f +0x483:  jmp    081eecef <+0x753>
081eea24 +0x488:  movl   $0x0,-0x30(%ebp)
081eea2b +0x48f:  jmp    081eecb5 <+0x719>
081eea30 +0x494:  mov    -0x30(%ebp),%edx
081eea33 +0x497:  mov    %edx,%eax
081eea35 +0x499:  shl    $0x2,%eax
081eea38 +0x49c:  add    %edx,%eax
081eea3a +0x49e:  lea    -0x18(%ebp),%ecx
081eea3d +0x4a1:  lea    (%ecx,%eax,1),%eax
081eea40 +0x4a4:  sub    $0x170,%eax
081eea45 +0x4a9:  movzbl 0xe(%eax),%eax
081eea49 +0x4ad:  movzbl %al,%eax
081eea4c +0x4b0:  cmp    $0x1,%eax
081eea4f +0x4b3:  je     081eea63 <+0x4c7>
081eea51 +0x4b5:  cmp    $0x2,%eax
081eea54 +0x4b8:  je     081eea6c <+0x4d0>
081eea56 +0x4ba:  test   %eax,%eax
081eea58 +0x4bc:  jne    081eea75 <+0x4d9>
081eea5a +0x4be:  movl   $0x7,-0x2c(%ebp)
081eea61 +0x4c5:  jmp    081eea92 <+0x4f6>
081eea63 +0x4c7:  movl   $0x1e,-0x2c(%ebp)
081eea6a +0x4ce:  jmp    081eea92 <+0x4f6>
081eea6c +0x4d0:  movl   $0x16d,-0x2c(%ebp)
081eea73 +0x4d7:  jmp    081eea92 <+0x4f6>
081eea75 +0x4d9:  movl   $0x1,0x4(%esp)
081eea7d +0x4e1:  mov    0xc(%ebp),%eax
081eea80 +0x4e4:  mov    %eax,(%esp)
081eea83 +0x4e7:  call   082352c5 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa96f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa96f
081eea88 +0x4ec:  mov    $0x0,%ebx
081eea8d +0x4f1:  jmp    081eecef <+0x753>
081eea92 +0x4f6:  mov    -0x2c(%ebp),%eax
081eea95 +0x4f9:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
081eea9b +0x4ff:  mov    %eax,-0x28(%ebp)
081eea9e +0x502:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081eeaa3 +0x507:  movl   $0x7239,0x8(%esp)
081eeaab +0x50f:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081eeab3 +0x517:  mov    %eax,(%esp)
081eeab6 +0x51a:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081eeabb +0x51f:  movl   $0x0,0x8(%esp)
081eeac3 +0x527:  mov    %eax,0x4(%esp)
081eeac7 +0x52b:  lea    -0x5c(%ebp),%eax
081eeaca +0x52e:  mov    %eax,(%esp)
081eeacd +0x531:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081eead2 +0x536:  mov    -0x30(%ebp),%eax
081eead5 +0x539:  mov    -0xf8(%ebp,%eax,4),%eax
081eeadc +0x540:  mov    %eax,%ebx
081eeade +0x542:  lea    -0x5c(%ebp),%eax
081eeae1 +0x545:  mov    %eax,(%esp)
081eeae4 +0x548:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081eeae9 +0x54d:  mov    %ebx,0x4(%esp)
081eeaed +0x551:  mov    %eax,(%esp)
081eeaf0 +0x554:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081eeaf5 +0x559:  mov    -0x30(%ebp),%eax
081eeaf8 +0x55c:  mov    -0x120(%ebp,%eax,4),%eax
081eeaff +0x563:  mov    %eax,%ebx
081eeb01 +0x565:  lea    -0x5c(%ebp),%eax
081eeb04 +0x568:  mov    %eax,(%esp)
081eeb07 +0x56b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081eeb0c +0x570:  mov    %ebx,0x4(%esp)
081eeb10 +0x574:  mov    %eax,(%esp)
081eeb13 +0x577:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081eeb18 +0x57c:  mov    -0x30(%ebp),%eax
081eeb1b +0x57f:  mov    -0x148(%ebp,%eax,4),%eax
081eeb22 +0x586:  mov    %eax,%ebx
081eeb24 +0x588:  lea    -0x5c(%ebp),%eax
081eeb27 +0x58b:  mov    %eax,(%esp)
081eeb2a +0x58e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081eeb2f +0x593:  mov    %ebx,0x4(%esp)
081eeb33 +0x597:  mov    %eax,(%esp)
081eeb36 +0x59a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081eeb3b +0x59f:  mov    -0x30(%ebp),%edx
081eeb3e +0x5a2:  mov    %edx,%eax
081eeb40 +0x5a4:  shl    $0x2,%eax
081eeb43 +0x5a7:  add    %edx,%eax
081eeb45 +0x5a9:  lea    -0x18(%ebp),%edi
081eeb48 +0x5ac:  lea    (%edi,%eax,1),%eax
081eeb4b +0x5af:  sub    $0x170,%eax
081eeb50 +0x5b4:  mov    0xf(%eax),%ebx
081eeb53 +0x5b7:  lea    -0x5c(%ebp),%eax
081eeb56 +0x5ba:  mov    %eax,(%esp)
081eeb59 +0x5bd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081eeb5e +0x5c2:  mov    %ebx,0x4(%esp)
081eeb62 +0x5c6:  mov    %eax,(%esp)
081eeb65 +0x5c9:  call   0822ada6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x450>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x450
081eeb6a +0x5ce:  lea    -0x5c(%ebp),%eax
081eeb6d +0x5d1:  mov    %eax,(%esp)
081eeb70 +0x5d4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081eeb75 +0x5d9:  mov    -0x2c(%ebp),%edx
081eeb78 +0x5dc:  mov    %edx,0x4(%esp)
081eeb7c +0x5e0:  mov    %eax,(%esp)
081eeb7f +0x5e3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081eeb84 +0x5e8:  mov    -0x28(%ebp),%ebx
081eeb87 +0x5eb:  lea    -0x5c(%ebp),%eax
081eeb8a +0x5ee:  mov    %eax,(%esp)
081eeb8d +0x5f1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081eeb92 +0x5f6:  mov    %ebx,0x4(%esp)
081eeb96 +0x5fa:  mov    %eax,(%esp)
081eeb99 +0x5fd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081eeb9e +0x602:  movzbl -0x17b(%ebp),%eax
081eeba5 +0x609:  movzbl %al,%ebx
081eeba8 +0x60c:  lea    -0x5c(%ebp),%eax
081eebab +0x60f:  mov    %eax,(%esp)
081eebae +0x612:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081eebb3 +0x617:  mov    %ebx,0x4(%esp)
081eebb7 +0x61b:  mov    %eax,(%esp)
081eebba +0x61e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081eebbf +0x623:  mov    -0x30(%ebp),%eax
081eebc2 +0x626:  lea    0x1(%eax),%ebx
081eebc5 +0x629:  lea    -0x5c(%ebp),%eax
081eebc8 +0x62c:  mov    %eax,(%esp)
081eebcb +0x62f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081eebd0 +0x634:  mov    %ebx,0x4(%esp)
081eebd4 +0x638:  mov    %eax,(%esp)
081eebd7 +0x63b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081eebdc +0x640:  mov    -0x30(%ebp),%edx
081eebdf +0x643:  mov    %edx,%eax
081eebe1 +0x645:  shl    $0x2,%eax
081eebe4 +0x648:  add    %edx,%eax
081eebe6 +0x64a:  lea    -0x18(%ebp),%edx
081eebe9 +0x64d:  lea    (%edx,%eax,1),%eax
081eebec +0x650:  sub    $0x170,%eax
081eebf1 +0x655:  mov    0xf(%eax),%eax
081eebf4 +0x658:  mov    %eax,0xc(%esp)
081eebf8 +0x65c:  movl   $"%d",0x8(%esp)
081eec00 +0x664:  movl   $0x14,0x4(%esp)
081eec08 +0x66c:  lea    -0x54(%ebp),%eax
081eec0b +0x66f:  mov    %eax,(%esp)
081eec0e +0x672:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
081eec13 +0x677:  mov    -0x30(%ebp),%eax
081eec16 +0x67a:  mov    -0xf8(%ebp,%eax,4),%eax
081eec1d +0x681:  mov    %eax,0xc(%esp)
081eec21 +0x685:  movl   $"%d",0x8(%esp)
081eec29 +0x68d:  movl   $0x24,0x4(%esp)
081eec31 +0x695:  lea    -0x80(%ebp),%eax
081eec34 +0x698:  mov    %eax,(%esp)
081eec37 +0x69b:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
081eec3c +0x6a0:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
081eec41 +0x6a5:  mov    (%eax),%eax
081eec43 +0x6a7:  add    $0x14,%eax
081eec46 +0x6aa:  mov    (%eax),%ebx
081eec48 +0x6ac:  lea    -0x5c(%ebp),%eax
081eec4b +0x6af:  mov    %eax,(%esp)
081eec4e +0x6b2:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
081eec53 +0x6b7:  mov    &_ZN10GlobalData12s_pIPGHelperE,%edx
081eec59 +0x6bd:  mov    %eax,0x1c(%esp)
081eec5d +0x6c1:  movl   $0x0,0x18(%esp)
081eec65 +0x6c9:  movl   $0x0,0x14(%esp)
081eec6d +0x6d1:  lea    -0x54(%ebp),%eax
081eec70 +0x6d4:  mov    %eax,0x10(%esp)
081eec74 +0x6d8:  lea    -0x80(%ebp),%eax
081eec77 +0x6db:  mov    %eax,0xc(%esp)
081eec7b +0x6df:  movl   $"",0x8(%esp)
081eec83 +0x6e7:  mov    0xc(%ebp),%eax
081eec86 +0x6ea:  mov    %eax,0x4(%esp)
081eec8a +0x6ee:  mov    %edx,(%esp)
081eec8d +0x6f1:  call   *%ebx
081eec8f +0x6f3:  jmp    081eeca6 <+0x70a>
081eec91 +0x6f5:  mov    %edx,%ebx
081eec93 +0x6f7:  mov    %eax,%esi
081eec95 +0x6f9:  lea    -0x5c(%ebp),%eax
081eec98 +0x6fc:  mov    %eax,(%esp)
081eec9b +0x6ff:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081eeca0 +0x704:  mov    %esi,%eax
081eeca2 +0x706:  mov    %ebx,%edx
081eeca4 +0x708:  jmp    081eecd4 <+0x738>
081eeca6 +0x70a:  lea    -0x5c(%ebp),%eax
081eeca9 +0x70d:  mov    %eax,(%esp)
081eecac +0x710:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081eecb1 +0x715:  addl   $0x1,-0x30(%ebp)
081eecb5 +0x719:  movzbl -0x17b(%ebp),%eax
081eecbc +0x720:  movzbl %al,%eax
081eecbf +0x723:  cmp    -0x30(%ebp),%eax
081eecc2 +0x726:  setg   %al
081eecc5 +0x729:  test   %al,%al
081eecc7 +0x72b:  jne    081eea30 <+0x494>
081eeccd +0x731:  mov    $0x0,%ebx
081eecd2 +0x736:  jmp    081eecef <+0x753>
081eecd4 +0x738:  mov    %edx,%ebx
081eecd6 +0x73a:  mov    %eax,%esi
081eecd8 +0x73c:  lea    -0x40(%ebp),%eax
081eecdb +0x73f:  mov    %eax,(%esp)
081eecde +0x742:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081eece3 +0x747:  mov    %esi,%eax
081eece5 +0x749:  mov    %ebx,%edx
081eece7 +0x74b:  mov    %eax,(%esp)
081eecea +0x74e:  call   08ae3750 <_Unwind_Resume>
081eecef +0x753:  lea    -0x40(%ebp),%eax
081eecf2 +0x756:  mov    %eax,(%esp)
081eecf5 +0x759:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081eecfa +0x75e:  mov    %ebx,%eax
081eecfc +0x760:  add    $0x19c,%esp
081eed02 +0x766:  pop    %ebx
081eed03 +0x767:  pop    %esi
081eed04 +0x768:  pop    %edi
081eed05 +0x769:  pop    %ebp
081eed06 +0x76a:  ret
081eed07 +0x76b:  nop
```

## 反编译 C

```c
// DisPatcher_RentAvatar::dispatch_sig @ 0x81ee59c

/* DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_RentAvatar::dispatch_sig(DisPatcher_RentAvatar *this,CUser *param_1,PacketBuf *param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  CInventory *pCVar6;
  CDataManager *this_00;
  int iVar7;
  uint uVar8;
  Stream *pSVar9;
  CStreamGuard *pCVar10;
  int iVar11;
  int *piVar12;
  byte bVar13;
  byte local_17f;
  byte bStack_17e;
  ulong auStack_17d [12];
  int local_14c [10];
  int local_124 [10];
  int local_fc [10];
  int local_d4 [10];
  int local_ac [10];
  char local_84 [36];
  CStreamGuard local_60 [8];
  char local_58 [20];
  PacketGuard local_44 [12];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  
  bVar13 = 0;
  piVar12 = local_ac;
  for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  PacketGuard::PacketGuard(local_44);
                    /* try { // try from 081ee5f1 to 081eeaba has its CatchHandler @ 081eecd4 */
  cVar4 = PacketBuf::get_byte(param_2,&local_17f);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x71ee,"virtual int DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    goto LAB_081eecef;
  }
  if ((local_17f == 0) || (9 < local_17f)) {
    uVar5 = LineFunc(0x71f0,"virtual int DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    goto LAB_081eecef;
  }
  for (local_34 = 0; local_34 < (int)(uint)local_17f; local_34 = local_34 + 1) {
    cVar4 = PacketBuf::get_byte(param_2,&bStack_17e + local_34 * 5);
    if (cVar4 != '\x01') {
      uVar5 = LineFunc(0x71f4,"virtual int DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      goto LAB_081eecef;
    }
    cVar4 = PacketBuf::get_int(param_2,(ulong *)((int)auStack_17d + local_34 * 5));
    if (cVar4 != '\x01') {
      uVar5 = LineFunc(0x71f5,"virtual int DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      goto LAB_081eecef;
    }
  }
  iVar11 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar11 == 0) {
    uVar5 = LineFunc(0x71fa,"virtual int DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    goto LAB_081eecef;
  }
  pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar11 = CInventory::GetRemainCapacity(pCVar6,2,0);
  if (iVar11 < (int)(uint)local_17f) {
    RentAvatarErrorProc(param_1,4);
    uVar5 = 0;
    goto LAB_081eecef;
  }
  piVar12 = local_d4;
  for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
  }
  piVar12 = local_fc;
  for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
  }
  piVar12 = local_124;
  for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
  }
  piVar12 = local_14c;
  for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  for (local_34 = 0; iVar11 = local_34, local_34 < (int)(uint)local_17f; local_34 = local_34 + 1) {
    iVar7 = *(int *)((int)auStack_17d + local_34 * 5);
    this_00 = (CDataManager *)G_CDataManager();
    iVar7 = CDataManager::find_item(this_00,iVar7);
    local_ac[iVar11 + -10] = iVar7;
    iVar11 = local_34;
    if (local_ac[local_34 + -10] == 0) {
      RentAvatarErrorProc(param_1,0x11);
      uVar5 = 0;
      goto LAB_081eecef;
    }
    bVar13 = (&bStack_17e)[local_34 * 5];
    iVar7 = CItem::GetCashPrice((CItem *)local_ac[local_34 + -10]);
    iVar7 = getAvatarRentPrice(iVar7,(uint)bVar13);
    local_fc[iVar11] = iVar7;
    iVar11 = local_34;
    bVar13 = (&bStack_17e)[local_34 * 5];
    iVar7 = CItem::get_price((CItem *)local_ac[local_34 + -10]);
    iVar7 = getAvatarRentPrice(iVar7,(uint)bVar13);
    local_14c[iVar11] = iVar7;
    iVar11 = local_34;
    bVar13 = (&bStack_17e)[local_34 * 5];
    iVar7 = CItem::GetMedalPrice((CItem *)local_ac[local_34 + -10]);
    iVar7 = getAvatarRentPrice(iVar7,(uint)bVar13);
    local_124[iVar11] = iVar7;
    local_28 = local_28 + local_fc[local_34];
    local_24 = local_14c[local_34] + local_24;
    local_20 = local_20 + local_124[local_34];
  }
  uVar8 = CUser::GetCera(param_1);
  if (uVar8 < local_28) {
LAB_081ee9f7:
    bVar3 = true;
  }
  else {
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar11 = CInventory::get_money(pCVar6);
    if (iVar11 < local_24) goto LAB_081ee9f7;
    uVar8 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
    if (uVar8 < local_20) goto LAB_081ee9f7;
    bVar3 = false;
  }
  if (bVar3) {
    RentAvatarErrorProc(param_1,10);
    uVar5 = 0;
  }
  else {
    for (local_34 = 0; local_34 < (int)(uint)local_17f; local_34 = local_34 + 1) {
      bVar13 = (&bStack_17e)[local_34 * 5];
      if (bVar13 == 1) {
        local_30 = 0x1e;
      }
      else if (bVar13 == 2) {
        local_30 = 0x16d;
      }
      else {
        if (bVar13 != 0) {
          RentAvatarErrorProc(param_1,1);
          uVar5 = 0;
          goto LAB_081eecef;
        }
        local_30 = 7;
      }
      local_2c = local_30 * 0x15180;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x7239);
      CStreamGuard::CStreamGuard(local_60,pSVar9,false);
      iVar11 = local_fc[local_34];
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
                    /* try { // try from 081eeaf0 to 081eec8e has its CatchHandler @ 081eec91 */
      CStreamGuard::operator<<(pCVar10,iVar11);
      iVar11 = local_124[local_34];
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,iVar11);
      iVar11 = local_14c[local_34];
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,iVar11);
      uVar1 = *(ulong *)((int)auStack_17d + local_34 * 5);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,uVar1);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,local_30);
      iVar11 = local_2c;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,iVar11);
      uVar8 = (uint)local_17f;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,uVar8);
      iVar11 = local_34 + 1;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,iVar11);
      OS_API::snprintf(local_58,0x14,"%d",*(undefined4 *)((int)auStack_17d + local_34 * 5));
      OS_API::snprintf(local_84,0x24,"%d",local_fc[local_34]);
      pcVar2 = *(code **)(*GlobalData::s_pIPGHelper + 0x14);
      uVar5 = CStreamGuard::Get(local_60);
      (*pcVar2)(GlobalData::s_pIPGHelper,param_1,&DAT_08bc13f9,local_84,local_58,0,0,uVar5);
                    /* try { // try from 081eecac to 081eecb0 has its CatchHandler @ 081eecd4 */
      CStreamGuard::~CStreamGuard(local_60);
    }
    uVar5 = 0;
  }
LAB_081eecef:
  PacketGuard::~PacketGuard(local_44);
  return uVar5;
}
```
