# fishing

`_ZN9GameWorld7fishingEP5CUser`

`GameWorld::fishing(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c7af8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c7af8  _ZN9GameWorld7fishingEP5CUser
#           GameWorld::fishing(CUser*)
# range [0x086c7af8, 0x086c7f0f]
086c7af8 +0x000:  push   %ebp
086c7af9 +0x001:  mov    %esp,%ebp
086c7afb +0x003:  push   %esi
086c7afc +0x004:  push   %ebx
086c7afd +0x005:  sub    $0xc0,%esp
086c7b03 +0x00b:  movl   $0x0,0x4(%esp)
086c7b0b +0x013:  mov    0xc(%ebp),%eax
086c7b0e +0x016:  mov    %eax,(%esp)
086c7b11 +0x019:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c7b16 +0x01e:  mov    %eax,%ebx
086c7b18 +0x020:  mov    0xc(%ebp),%eax
086c7b1b +0x023:  mov    %eax,(%esp)
086c7b1e +0x026:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c7b23 +0x02b:  movsbl %al,%eax
086c7b26 +0x02e:  mov    %ebx,0x8(%esp)
086c7b2a +0x032:  mov    %eax,0x4(%esp)
086c7b2e +0x036:  mov    0x8(%ebp),%eax
086c7b31 +0x039:  mov    %eax,(%esp)
086c7b34 +0x03c:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c7b39 +0x041:  xor    $0x1,%eax
086c7b3c +0x044:  test   %al,%al
086c7b3e +0x046:  je     086c7baf <+0xb7>
086c7b40 +0x048:  mov    0xc(%ebp),%eax
086c7b43 +0x04b:  mov    %eax,(%esp)
086c7b46 +0x04e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c7b4b +0x053:  mov    %eax,%ebx
086c7b4d +0x055:  movl   $0x0,0xc(%esp)
086c7b55 +0x05d:  movl   $0xafd,0x8(%esp)
086c7b5d +0x065:  movl   $&_ZZN9GameWorld7fishingEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
086c7b65 +0x06d:  lea    -0x28(%ebp),%eax
086c7b68 +0x070:  mov    %eax,(%esp)
086c7b6b +0x073:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c7b70 +0x078:  mov    %ebx,0x8(%esp)
086c7b74 +0x07c:  movl   $"user %s - check_valid_area() fail",0x4(%esp)
086c7b7c +0x084:  lea    -0x28(%ebp),%eax
086c7b7f +0x087:  mov    %eax,(%esp)
086c7b82 +0x08a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c7b87 +0x08f:  movl   $0x0,0xc(%esp)
086c7b8f +0x097:  movl   $0x1,0x8(%esp)
086c7b97 +0x09f:  movl   $0x3,0x4(%esp)
086c7b9f +0x0a7:  mov    0xc(%ebp),%eax
086c7ba2 +0x0aa:  mov    %eax,(%esp)
086c7ba5 +0x0ad:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
086c7baa +0x0b2:  jmp    086c7f06 <+0x40e>
086c7baf +0x0b7:  mov    0xc(%ebp),%eax
086c7bb2 +0x0ba:  mov    %eax,0x4(%esp)
086c7bb6 +0x0be:  mov    0x8(%ebp),%eax
086c7bb9 +0x0c1:  mov    %eax,(%esp)
086c7bbc +0x0c4:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086c7bc1 +0x0c9:  mov    %eax,-0x18(%ebp)
086c7bc4 +0x0cc:  movl   $0x0,-0x14(%ebp)
086c7bcb +0x0d3:  cmpl   $0x0,-0x18(%ebp)
086c7bcf +0x0d7:  je     086c7bf6 <+0xfe>
086c7bd1 +0x0d9:  movl   $0x0,0x4(%esp)
086c7bd9 +0x0e1:  mov    0xc(%ebp),%eax
086c7bdc +0x0e4:  mov    %eax,(%esp)
086c7bdf +0x0e7:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c7be4 +0x0ec:  mov    %eax,0x4(%esp)
086c7be8 +0x0f0:  mov    -0x18(%ebp),%eax
086c7beb +0x0f3:  mov    %eax,(%esp)
086c7bee +0x0f6:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c7bf3 +0x0fb:  mov    %eax,-0x14(%ebp)
086c7bf6 +0x0fe:  lea    -0x34(%ebp),%eax
086c7bf9 +0x101:  mov    %eax,(%esp)
086c7bfc +0x104:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c7c01 +0x109:  movl   $0x27,0x8(%esp)
086c7c09 +0x111:  movl   $0x1,0x4(%esp)
086c7c11 +0x119:  lea    -0x34(%ebp),%eax
086c7c14 +0x11c:  mov    %eax,(%esp)
086c7c17 +0x11f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c7c1c +0x124:  mov    -0x14(%ebp),%eax
086c7c1f +0x127:  mov    0x68(%eax),%eax
086c7c22 +0x12a:  cmp    $0x2,%eax
086c7c25 +0x12d:  je     086c7c77 <+0x17f>
086c7c27 +0x12f:  movl   $0x0,0x4(%esp)
086c7c2f +0x137:  lea    -0x34(%ebp),%eax
086c7c32 +0x13a:  mov    %eax,(%esp)
086c7c35 +0x13d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7c3a +0x142:  movl   $0x13,0x4(%esp)
086c7c42 +0x14a:  lea    -0x34(%ebp),%eax
086c7c45 +0x14d:  mov    %eax,(%esp)
086c7c48 +0x150:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7c4d +0x155:  movl   $0x1,0x4(%esp)
086c7c55 +0x15d:  lea    -0x34(%ebp),%eax
086c7c58 +0x160:  mov    %eax,(%esp)
086c7c5b +0x163:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c7c60 +0x168:  lea    -0x34(%ebp),%eax
086c7c63 +0x16b:  mov    %eax,0x4(%esp)
086c7c67 +0x16f:  mov    0xc(%ebp),%eax
086c7c6a +0x172:  mov    %eax,(%esp)
086c7c6d +0x175:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c7c72 +0x17a:  jmp    086c7efb <+0x403>
086c7c77 +0x17f:  mov    -0x14(%ebp),%eax
086c7c7a +0x182:  mov    %eax,(%esp)
086c7c7d +0x185:  call   086c21e2 <_ZN4Area9take_fishEv>  ; Area::take_fish()
086c7c82 +0x18a:  mov    %eax,-0x10(%ebp)
086c7c85 +0x18d:  cmpl   $0xffffffff,-0x10(%ebp)
086c7c89 +0x191:  jne    086c7cdb <+0x1e3>
086c7c8b +0x193:  movl   $0x0,0x4(%esp)
086c7c93 +0x19b:  lea    -0x34(%ebp),%eax
086c7c96 +0x19e:  mov    %eax,(%esp)
086c7c99 +0x1a1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7c9e +0x1a6:  movl   $0x1,0x4(%esp)
086c7ca6 +0x1ae:  lea    -0x34(%ebp),%eax
086c7ca9 +0x1b1:  mov    %eax,(%esp)
086c7cac +0x1b4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7cb1 +0x1b9:  movl   $0x1,0x4(%esp)
086c7cb9 +0x1c1:  lea    -0x34(%ebp),%eax
086c7cbc +0x1c4:  mov    %eax,(%esp)
086c7cbf +0x1c7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c7cc4 +0x1cc:  lea    -0x34(%ebp),%eax
086c7cc7 +0x1cf:  mov    %eax,0x4(%esp)
086c7ccb +0x1d3:  mov    0xc(%ebp),%eax
086c7cce +0x1d6:  mov    %eax,(%esp)
086c7cd1 +0x1d9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c7cd6 +0x1de:  jmp    086c7efb <+0x403>
086c7cdb +0x1e3:  lea    -0x71(%ebp),%eax
086c7cde +0x1e6:  mov    %eax,(%esp)
086c7ce1 +0x1e9:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086c7ce6 +0x1ee:  mov    -0x10(%ebp),%eax
086c7ce9 +0x1f1:  mov    %eax,-0x6f(%ebp)
086c7cec +0x1f4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086c7cf1 +0x1f9:  mov    0xc(%eax),%eax
086c7cf4 +0x1fc:  movl   $0x1,0xc(%esp)
086c7cfc +0x204:  lea    -0x71(%ebp),%edx
086c7cff +0x207:  mov    %edx,0x8(%esp)
086c7d03 +0x20b:  movl   $0x0,0x4(%esp)
086c7d0b +0x213:  mov    %eax,(%esp)
086c7d0e +0x216:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
086c7d13 +0x21b:  mov    0xc(%ebp),%eax
086c7d16 +0x21e:  mov    %eax,(%esp)
086c7d19 +0x221:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086c7d1e +0x226:  movl   $0x1,0x4c(%esp)
086c7d26 +0x22e:  movl   $0x1,0x48(%esp)
086c7d2e +0x236:  movl   $0x5,0x44(%esp)
086c7d36 +0x23e:  mov    -0x71(%ebp),%edx
086c7d39 +0x241:  mov    %edx,0x4(%esp)
086c7d3d +0x245:  mov    -0x6d(%ebp),%edx
086c7d40 +0x248:  mov    %edx,0x8(%esp)
086c7d44 +0x24c:  mov    -0x69(%ebp),%edx
086c7d47 +0x24f:  mov    %edx,0xc(%esp)
086c7d4b +0x253:  mov    -0x65(%ebp),%edx
086c7d4e +0x256:  mov    %edx,0x10(%esp)
086c7d52 +0x25a:  mov    -0x61(%ebp),%edx
086c7d55 +0x25d:  mov    %edx,0x14(%esp)
086c7d59 +0x261:  mov    -0x5d(%ebp),%edx
086c7d5c +0x264:  mov    %edx,0x18(%esp)
086c7d60 +0x268:  mov    -0x59(%ebp),%edx
086c7d63 +0x26b:  mov    %edx,0x1c(%esp)
086c7d67 +0x26f:  mov    -0x55(%ebp),%edx
086c7d6a +0x272:  mov    %edx,0x20(%esp)
086c7d6e +0x276:  mov    -0x51(%ebp),%edx
086c7d71 +0x279:  mov    %edx,0x24(%esp)
086c7d75 +0x27d:  mov    -0x4d(%ebp),%edx
086c7d78 +0x280:  mov    %edx,0x28(%esp)
086c7d7c +0x284:  mov    -0x49(%ebp),%edx
086c7d7f +0x287:  mov    %edx,0x2c(%esp)
086c7d83 +0x28b:  mov    -0x45(%ebp),%edx
086c7d86 +0x28e:  mov    %edx,0x30(%esp)
086c7d8a +0x292:  mov    -0x41(%ebp),%edx
086c7d8d +0x295:  mov    %edx,0x34(%esp)
086c7d91 +0x299:  mov    -0x3d(%ebp),%edx
086c7d94 +0x29c:  mov    %edx,0x38(%esp)
086c7d98 +0x2a0:  mov    -0x39(%ebp),%edx
086c7d9b +0x2a3:  mov    %edx,0x3c(%esp)
086c7d9f +0x2a7:  movzbl -0x35(%ebp),%edx
086c7da3 +0x2ab:  mov    %dl,0x40(%esp)
086c7da7 +0x2af:  mov    %eax,(%esp)
086c7daa +0x2b2:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
086c7daf +0x2b7:  mov    %eax,-0xc(%ebp)
086c7db2 +0x2ba:  cmpl   $0x0,-0xc(%ebp)
086c7db6 +0x2be:  jle    086c7e19 <+0x321>
086c7db8 +0x2c0:  movl   $0x1,0x4(%esp)
086c7dc0 +0x2c8:  lea    -0x34(%ebp),%eax
086c7dc3 +0x2cb:  mov    %eax,(%esp)
086c7dc6 +0x2ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7dcb +0x2d3:  mov    -0xc(%ebp),%eax
086c7dce +0x2d6:  mov    %eax,0x4(%esp)
086c7dd2 +0x2da:  lea    -0x34(%ebp),%eax
086c7dd5 +0x2dd:  mov    %eax,(%esp)
086c7dd8 +0x2e0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c7ddd +0x2e5:  mov    -0x10(%ebp),%eax
086c7de0 +0x2e8:  mov    %eax,0x4(%esp)
086c7de4 +0x2ec:  lea    -0x34(%ebp),%eax
086c7de7 +0x2ef:  mov    %eax,(%esp)
086c7dea +0x2f2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c7def +0x2f7:  mov    -0x6a(%ebp),%eax
086c7df2 +0x2fa:  mov    %eax,0x4(%esp)
086c7df6 +0x2fe:  lea    -0x34(%ebp),%eax
086c7df9 +0x301:  mov    %eax,(%esp)
086c7dfc +0x304:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c7e01 +0x309:  movzwl -0x66(%ebp),%eax
086c7e05 +0x30d:  movzwl %ax,%eax
086c7e08 +0x310:  mov    %eax,0x4(%esp)
086c7e0c +0x314:  lea    -0x34(%ebp),%eax
086c7e0f +0x317:  mov    %eax,(%esp)
086c7e12 +0x31a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c7e17 +0x31f:  jmp    086c7e3f <+0x347>
086c7e19 +0x321:  movl   $0x0,0x4(%esp)
086c7e21 +0x329:  lea    -0x34(%ebp),%eax
086c7e24 +0x32c:  mov    %eax,(%esp)
086c7e27 +0x32f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7e2c +0x334:  movl   $0x4,0x4(%esp)
086c7e34 +0x33c:  lea    -0x34(%ebp),%eax
086c7e37 +0x33f:  mov    %eax,(%esp)
086c7e3a +0x342:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c7e3f +0x347:  movl   $0x1,0x4(%esp)
086c7e47 +0x34f:  lea    -0x34(%ebp),%eax
086c7e4a +0x352:  mov    %eax,(%esp)
086c7e4d +0x355:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c7e52 +0x35a:  lea    -0x34(%ebp),%eax
086c7e55 +0x35d:  mov    %eax,0x4(%esp)
086c7e59 +0x361:  mov    0xc(%ebp),%eax
086c7e5c +0x364:  mov    %eax,(%esp)
086c7e5f +0x367:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c7e64 +0x36c:  lea    -0x34(%ebp),%eax
086c7e67 +0x36f:  mov    %eax,(%esp)
086c7e6a +0x372:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086c7e6f +0x377:  movl   $0x19,0x8(%esp)
086c7e77 +0x37f:  movl   $0x0,0x4(%esp)
086c7e7f +0x387:  lea    -0x34(%ebp),%eax
086c7e82 +0x38a:  mov    %eax,(%esp)
086c7e85 +0x38d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c7e8a +0x392:  mov    0xc(%ebp),%eax
086c7e8d +0x395:  mov    %eax,(%esp)
086c7e90 +0x398:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c7e95 +0x39d:  movzwl %ax,%eax
086c7e98 +0x3a0:  mov    %eax,0x4(%esp)
086c7e9c +0x3a4:  lea    -0x34(%ebp),%eax
086c7e9f +0x3a7:  mov    %eax,(%esp)
086c7ea2 +0x3aa:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c7ea7 +0x3af:  mov    -0x10(%ebp),%eax
086c7eaa +0x3b2:  mov    %eax,0x4(%esp)
086c7eae +0x3b6:  lea    -0x34(%ebp),%eax
086c7eb1 +0x3b9:  mov    %eax,(%esp)
086c7eb4 +0x3bc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c7eb9 +0x3c1:  movl   $0x1,0x4(%esp)
086c7ec1 +0x3c9:  lea    -0x34(%ebp),%eax
086c7ec4 +0x3cc:  mov    %eax,(%esp)
086c7ec7 +0x3cf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c7ecc +0x3d4:  lea    -0x34(%ebp),%eax
086c7ecf +0x3d7:  mov    %eax,0x4(%esp)
086c7ed3 +0x3db:  mov    -0x14(%ebp),%eax
086c7ed6 +0x3de:  mov    %eax,(%esp)
086c7ed9 +0x3e1:  call   086c2d2a <_ZN4Area11send_to_allER11PacketGuard>  ; Area::send_to_all(PacketGuard&)
086c7ede +0x3e6:  jmp    086c7efb <+0x403>
086c7ee0 +0x3e8:  mov    %edx,%ebx
086c7ee2 +0x3ea:  mov    %eax,%esi
086c7ee4 +0x3ec:  lea    -0x34(%ebp),%eax
086c7ee7 +0x3ef:  mov    %eax,(%esp)
086c7eea +0x3f2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c7eef +0x3f7:  mov    %esi,%eax
086c7ef1 +0x3f9:  mov    %ebx,%edx
086c7ef3 +0x3fb:  mov    %eax,(%esp)
086c7ef6 +0x3fe:  call   08ae3750 <_Unwind_Resume>
086c7efb +0x403:  lea    -0x34(%ebp),%eax
086c7efe +0x406:  mov    %eax,(%esp)
086c7f01 +0x409:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c7f06 +0x40e:  add    $0xc0,%esp
086c7f0c +0x414:  pop    %ebx
086c7f0d +0x415:  pop    %esi
086c7f0e +0x416:  pop    %ebp
086c7f0f +0x417:  ret
```

## 反编译 C

```c
// GameWorld::fishing @ 0x86c7af8

/* GameWorld::fishing(CUser*) */

void __thiscall GameWorld::fishing(GameWorld *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 local_75;
  undefined2 uStack_73;
  undefined2 uStack_71;
  undefined1 uStack_6f;
  int iStack_6e;
  undefined1 uStack_6a;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined1 local_39;
  PacketGuard local_38 [12];
  cMyTrace local_2c [16];
  Village *local_1c;
  Area *local_18;
  int local_14;
  int local_10;
  
  iVar2 = CUser::get_area(param_1,false);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  cVar1 = check_valid_area(this,(int)cVar1,iVar2);
  if (cVar1 == '\x01') {
    local_1c = (Village *)getUserVillage(this,param_1);
    local_18 = (Area *)0x0;
    if (local_1c != (Village *)0x0) {
      iVar2 = CUser::get_area(param_1,false);
      local_18 = (Area *)Village::getArea(local_1c,iVar2);
    }
    PacketGuard::PacketGuard(local_38);
                    /* try { // try from 086c7c17 to 086c7edd has its CatchHandler @ 086c7ee0 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0x27);
    if (*(int *)(local_18 + 0x68) == 2) {
      local_14 = Area::take_fish(local_18);
      if (local_14 == -1) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
        CUser::Send(param_1,local_38);
      }
      else {
        Inven_Item::Inven_Item((Inven_Item *)&local_75);
        uStack_73 = (undefined2)local_14;
        uStack_71 = (undefined2)((uint)local_14 >> 0x10);
        iVar2 = G_CDataManager();
        CItemList::create_item(*(CItemList **)(iVar2 + 0xc),0,&local_75,1);
        uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_10 = CInventory::insertItemIntoInventory
                             (uVar3,CONCAT22(uStack_73,local_75),
                              CONCAT13((undefined1)iStack_6e,CONCAT12(uStack_6f,uStack_71)),
                              CONCAT13(uStack_6a,iStack_6e._1_3_),local_69,local_65,local_61,
                              local_5d,local_59,local_55,local_51,local_4d,local_49,local_45,
                              local_41,local_3d,local_39,5,1,1);
        if (local_10 < 1) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,4);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,1);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,local_10);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_14);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,iStack_6e);
          InterfacePacketBuf::put_short
                    ((InterfacePacketBuf *)local_38,(uint)CONCAT11((undefined1)local_69,uStack_6a));
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
        CUser::Send(param_1,local_38);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_38);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,0x19);
        uVar4 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,uVar4 & 0xffff);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_14);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
        Area::send_to_all(local_18,local_38);
      }
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0x13);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
      CUser::Send(param_1,local_38);
    }
    PacketGuard::~PacketGuard(local_38);
  }
  else {
    uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_2c,"void GameWorld::fishing(CUser*)",0xafd,0);
    cMyTrace::operator()(local_2c,"user %s - check_valid_area() fail",uVar3);
    CUser::DisConnSig(param_1,3,1,0);
  }
  return;
}
```
