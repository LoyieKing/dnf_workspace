# OnGiveup

`_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser`

`expert_job::CExpertJobMgr::OnGiveup(CUser*)`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJobMgr` | `0x0849e60c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849e60c  _ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser
#           expert_job::CExpertJobMgr::OnGiveup(CUser*)
# range [0x0849e60c, 0x0849ed19]
0849e60c +0x000:  push   %ebp
0849e60d +0x001:  mov    %esp,%ebp
0849e60f +0x003:  push   %esi
0849e610 +0x004:  push   %ebx
0849e611 +0x005:  sub    $0x60,%esp
0849e614 +0x008:  mov    0xc(%ebp),%eax
0849e617 +0x00b:  mov    %eax,(%esp)
0849e61a +0x00e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849e61f +0x013:  test   %eax,%eax
0849e621 +0x015:  sete   %al
0849e624 +0x018:  test   %al,%al
0849e626 +0x01a:  je     0849e654 <+0x48>
0849e628 +0x01c:  movl   $0x4,(%esp)
0849e62f +0x023:  call   08725800 <__cxa_allocate_exception>
0849e634 +0x028:  mov    %eax,%edx
0849e636 +0x02a:  movl   $0x3,(%edx)
0849e63c +0x030:  movl   $0x0,0x8(%esp)
0849e644 +0x038:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0849e64c +0x040:  mov    %eax,(%esp)
0849e64f +0x043:  call   08724c50 <__cxa_throw>
0849e654 +0x048:  mov    0xc(%ebp),%eax
0849e657 +0x04b:  mov    %eax,(%esp)
0849e65a +0x04e:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0849e65f +0x053:  test   %eax,%eax
0849e661 +0x055:  sete   %al
0849e664 +0x058:  test   %al,%al
0849e666 +0x05a:  je     0849e694 <+0x88>
0849e668 +0x05c:  movl   $0x4,(%esp)
0849e66f +0x063:  call   08725800 <__cxa_allocate_exception>
0849e674 +0x068:  mov    %eax,%edx
0849e676 +0x06a:  movl   $0x8,(%edx)
0849e67c +0x070:  movl   $0x0,0x8(%esp)
0849e684 +0x078:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0849e68c +0x080:  mov    %eax,(%esp)
0849e68f +0x083:  call   08724c50 <__cxa_throw>
0849e694 +0x088:  mov    0xc(%ebp),%eax
0849e697 +0x08b:  mov    %eax,(%esp)
0849e69a +0x08e:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0849e69f +0x093:  mov    %eax,%ebx
0849e6a1 +0x095:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849e6a6 +0x09a:  mov    %ebx,0x4(%esp)
0849e6aa +0x09e:  mov    %eax,(%esp)
0849e6ad +0x0a1:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
0849e6b2 +0x0a6:  mov    %eax,-0x1c(%ebp)
0849e6b5 +0x0a9:  cmpl   $0x0,-0x1c(%ebp)
0849e6b9 +0x0ad:  jne    0849e6e7 <+0xdb>
0849e6bb +0x0af:  movl   $0x4,(%esp)
0849e6c2 +0x0b6:  call   08725800 <__cxa_allocate_exception>
0849e6c7 +0x0bb:  mov    %eax,%edx
0849e6c9 +0x0bd:  movl   $0x8,(%edx)
0849e6cf +0x0c3:  movl   $0x0,0x8(%esp)
0849e6d7 +0x0cb:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0849e6df +0x0d3:  mov    %eax,(%esp)
0849e6e2 +0x0d6:  call   08724c50 <__cxa_throw>
0849e6e7 +0x0db:  movl   $0x0,0x4(%esp)
0849e6ef +0x0e3:  mov    0xc(%ebp),%eax
0849e6f2 +0x0e6:  mov    %eax,(%esp)
0849e6f5 +0x0e9:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0849e6fa +0x0ee:  mov    %eax,(%esp)
0849e6fd +0x0f1:  call   0849f5a0 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x3d1>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x3d1
0849e702 +0x0f6:  movzwl %ax,%eax
0849e705 +0x0f9:  mov    %eax,-0x18(%ebp)
0849e708 +0x0fc:  mov    -0x1c(%ebp),%eax
0849e70b +0x0ff:  add    $0x1e8,%eax
0849e710 +0x104:  mov    %eax,(%esp)
0849e713 +0x107:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0849e718 +0x10c:  cmp    -0x18(%ebp),%eax
0849e71b +0x10f:  setbe  %al
0849e71e +0x112:  test   %al,%al
0849e720 +0x114:  je     0849e74e <+0x142>
0849e722 +0x116:  movl   $0x4,(%esp)
0849e729 +0x11d:  call   08725800 <__cxa_allocate_exception>
0849e72e +0x122:  mov    %eax,%edx
0849e730 +0x124:  movl   $0x1,(%edx)
0849e736 +0x12a:  movl   $0x0,0x8(%esp)
0849e73e +0x132:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0849e746 +0x13a:  mov    %eax,(%esp)
0849e749 +0x13d:  call   08724c50 <__cxa_throw>
0849e74e +0x142:  mov    -0x1c(%ebp),%eax
0849e751 +0x145:  lea    0x1e8(%eax),%edx
0849e757 +0x14b:  mov    -0x18(%ebp),%eax
0849e75a +0x14e:  mov    %eax,0x4(%esp)
0849e75e +0x152:  mov    %edx,(%esp)
0849e761 +0x155:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
0849e766 +0x15a:  mov    (%eax),%eax
0849e768 +0x15c:  mov    %eax,-0x14(%ebp)
0849e76b +0x15f:  mov    0xc(%ebp),%eax
0849e76e +0x162:  mov    %eax,(%esp)
0849e771 +0x165:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
0849e776 +0x16a:  cmp    -0x14(%ebp),%eax
0849e779 +0x16d:  setl   %al
0849e77c +0x170:  test   %al,%al
0849e77e +0x172:  je     0849e7ac <+0x1a0>
0849e780 +0x174:  movl   $0x4,(%esp)
0849e787 +0x17b:  call   08725800 <__cxa_allocate_exception>
0849e78c +0x180:  mov    %eax,%edx
0849e78e +0x182:  movl   $0x15,(%edx)
0849e794 +0x188:  movl   $0x0,0x8(%esp)
0849e79c +0x190:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0849e7a4 +0x198:  mov    %eax,(%esp)
0849e7a7 +0x19b:  call   08724c50 <__cxa_throw>
0849e7ac +0x1a0:  mov    -0x1c(%ebp),%eax
0849e7af +0x1a3:  lea    0x1dc(%eax),%edx
0849e7b5 +0x1a9:  lea    -0x20(%ebp),%eax
0849e7b8 +0x1ac:  mov    %edx,0x4(%esp)
0849e7bc +0x1b0:  mov    %eax,(%esp)
0849e7bf +0x1b3:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0849e7c4 +0x1b8:  sub    $0x4,%esp
0849e7c7 +0x1bb:  mov    -0x1c(%ebp),%eax
0849e7ca +0x1be:  lea    0x1dc(%eax),%edx
0849e7d0 +0x1c4:  lea    -0x24(%ebp),%eax
0849e7d3 +0x1c7:  mov    %edx,0x4(%esp)
0849e7d7 +0x1cb:  mov    %eax,(%esp)
0849e7da +0x1ce:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0849e7df +0x1d3:  sub    $0x4,%esp
0849e7e2 +0x1d6:  jmp    0849e846 <+0x23a>
0849e7e4 +0x1d8:  lea    -0x20(%ebp),%eax
0849e7e7 +0x1db:  mov    %eax,(%esp)
0849e7ea +0x1de:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0849e7ef +0x1e3:  mov    (%eax),%ebx
0849e7f1 +0x1e5:  mov    0xc(%ebp),%eax
0849e7f4 +0x1e8:  mov    %eax,(%esp)
0849e7f7 +0x1eb:  call   082604ec <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x21c>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x21c
0849e7fc +0x1f0:  mov    %ebx,0x4(%esp)
0849e800 +0x1f4:  mov    %eax,(%esp)
0849e803 +0x1f7:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
0849e808 +0x1fc:  xor    $0x1,%eax
0849e80b +0x1ff:  test   %al,%al
0849e80d +0x201:  je     0849e83b <+0x22f>
0849e80f +0x203:  movl   $0x4,(%esp)
0849e816 +0x20a:  call   08725800 <__cxa_allocate_exception>
0849e81b +0x20f:  mov    %eax,%edx
0849e81d +0x211:  movl   $0x8,(%edx)
0849e823 +0x217:  movl   $0x0,0x8(%esp)
0849e82b +0x21f:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0849e833 +0x227:  mov    %eax,(%esp)
0849e836 +0x22a:  call   08724c50 <__cxa_throw>
0849e83b +0x22f:  lea    -0x20(%ebp),%eax
0849e83e +0x232:  mov    %eax,(%esp)
0849e841 +0x235:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
0849e846 +0x23a:  lea    -0x24(%ebp),%eax
0849e849 +0x23d:  mov    %eax,0x4(%esp)
0849e84d +0x241:  lea    -0x20(%ebp),%eax
0849e850 +0x244:  mov    %eax,(%esp)
0849e853 +0x247:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0849e858 +0x24c:  test   %al,%al
0849e85a +0x24e:  jne    0849e7e4 <+0x1d8>
0849e85c +0x250:  mov    -0x1c(%ebp),%eax
0849e85f +0x253:  lea    0x1dc(%eax),%edx
0849e865 +0x259:  lea    -0x3c(%ebp),%eax
0849e868 +0x25c:  mov    %edx,0x4(%esp)
0849e86c +0x260:  mov    %eax,(%esp)
0849e86f +0x263:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0849e874 +0x268:  sub    $0x4,%esp
0849e877 +0x26b:  mov    -0x3c(%ebp),%eax
0849e87a +0x26e:  mov    %eax,-0x20(%ebp)
0849e87d +0x271:  mov    -0x1c(%ebp),%eax
0849e880 +0x274:  lea    0x1dc(%eax),%edx
0849e886 +0x27a:  lea    -0x3c(%ebp),%eax
0849e889 +0x27d:  mov    %edx,0x4(%esp)
0849e88d +0x281:  mov    %eax,(%esp)
0849e890 +0x284:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0849e895 +0x289:  sub    $0x4,%esp
0849e898 +0x28c:  mov    -0x3c(%ebp),%eax
0849e89b +0x28f:  mov    %eax,-0x24(%ebp)
0849e89e +0x292:  jmp    0849e8cf <+0x2c3>
0849e8a0 +0x294:  lea    -0x20(%ebp),%eax
0849e8a3 +0x297:  mov    %eax,(%esp)
0849e8a6 +0x29a:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0849e8ab +0x29f:  mov    (%eax),%ebx
0849e8ad +0x2a1:  mov    0xc(%ebp),%eax
0849e8b0 +0x2a4:  mov    %eax,(%esp)
0849e8b3 +0x2a7:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0849e8b8 +0x2ac:  mov    %ebx,0x4(%esp)
0849e8bc +0x2b0:  mov    %eax,(%esp)
0849e8bf +0x2b3:  call   086ab93e <_ZN9UserQuest15resetClearQuestEi>  ; UserQuest::resetClearQuest(int)
0849e8c4 +0x2b8:  lea    -0x20(%ebp),%eax
0849e8c7 +0x2bb:  mov    %eax,(%esp)
0849e8ca +0x2be:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
0849e8cf +0x2c3:  lea    -0x24(%ebp),%eax
0849e8d2 +0x2c6:  mov    %eax,0x4(%esp)
0849e8d6 +0x2ca:  lea    -0x20(%ebp),%eax
0849e8d9 +0x2cd:  mov    %eax,(%esp)
0849e8dc +0x2d0:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0849e8e1 +0x2d5:  test   %al,%al
0849e8e3 +0x2d7:  jne    0849e8a0 <+0x294>
0849e8e5 +0x2d9:  lea    -0x30(%ebp),%eax
0849e8e8 +0x2dc:  mov    %eax,(%esp)
0849e8eb +0x2df:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0849e8f0 +0x2e4:  mov    0xc(%ebp),%eax
0849e8f3 +0x2e7:  mov    %eax,(%esp)
0849e8f6 +0x2ea:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849e8fb +0x2ef:  movl   $0x1,0xc(%esp)
0849e903 +0x2f7:  movl   $0x1e,0x8(%esp)
0849e90b +0x2ff:  mov    -0x14(%ebp),%edx
0849e90e +0x302:  mov    %edx,0x4(%esp)
0849e912 +0x306:  mov    %eax,(%esp)
0849e915 +0x309:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
0849e91a +0x30e:  lea    -0x30(%ebp),%eax
0849e91d +0x311:  mov    %eax,(%esp)
0849e920 +0x314:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849e925 +0x319:  movl   $0xe,0x8(%esp)
0849e92d +0x321:  movl   $0x0,0x4(%esp)
0849e935 +0x329:  lea    -0x30(%ebp),%eax
0849e938 +0x32c:  mov    %eax,(%esp)
0849e93b +0x32f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849e940 +0x334:  movl   $0x0,0x4(%esp)
0849e948 +0x33c:  lea    -0x30(%ebp),%eax
0849e94b +0x33f:  mov    %eax,(%esp)
0849e94e +0x342:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849e953 +0x347:  movl   $0x1,0x4(%esp)
0849e95b +0x34f:  lea    -0x30(%ebp),%eax
0849e95e +0x352:  mov    %eax,(%esp)
0849e961 +0x355:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849e966 +0x35a:  mov    0xc(%ebp),%eax
0849e969 +0x35d:  mov    %eax,(%esp)
0849e96c +0x360:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849e971 +0x365:  lea    -0x30(%ebp),%edx
0849e974 +0x368:  mov    %edx,0xc(%esp)
0849e978 +0x36c:  movl   $0x0,0x8(%esp)
0849e980 +0x374:  movl   $0x1,0x4(%esp)
0849e988 +0x37c:  mov    %eax,(%esp)
0849e98b +0x37f:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0849e990 +0x384:  movl   $0x1,0x4(%esp)
0849e998 +0x38c:  lea    -0x30(%ebp),%eax
0849e99b +0x38f:  mov    %eax,(%esp)
0849e99e +0x392:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849e9a3 +0x397:  lea    -0x30(%ebp),%eax
0849e9a6 +0x39a:  mov    %eax,0x4(%esp)
0849e9aa +0x39e:  mov    0xc(%ebp),%eax
0849e9ad +0x3a1:  mov    %eax,(%esp)
0849e9b0 +0x3a4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849e9b5 +0x3a9:  movl   $0x0,-0x10(%ebp)
0849e9bc +0x3b0:  jmp    0849ea53 <+0x447>
0849e9c1 +0x3b5:  mov    -0x1c(%ebp),%eax
0849e9c4 +0x3b8:  lea    0xc(%eax),%edx
0849e9c7 +0x3bb:  mov    -0x10(%ebp),%eax
0849e9ca +0x3be:  mov    %eax,0x4(%esp)
0849e9ce +0x3c2:  mov    %edx,(%esp)
0849e9d1 +0x3c5:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0849e9d6 +0x3ca:  mov    (%eax),%esi
0849e9d8 +0x3cc:  mov    0xc(%ebp),%eax
0849e9db +0x3cf:  mov    %eax,(%esp)
0849e9de +0x3d2:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0849e9e3 +0x3d7:  mov    %eax,%ebx
0849e9e5 +0x3d9:  mov    0xc(%ebp),%eax
0849e9e8 +0x3dc:  mov    %eax,(%esp)
0849e9eb +0x3df:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0849e9f0 +0x3e4:  movl   $0x0,0xc(%esp)
0849e9f8 +0x3ec:  mov    %esi,0x8(%esp)
0849e9fc +0x3f0:  mov    %ebx,0x4(%esp)
0849ea00 +0x3f4:  mov    %eax,(%esp)
0849ea03 +0x3f7:  call   086047d8 <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::delete_skill(int, int, ENUM_SKILL_TREE_KIND)
0849ea08 +0x3fc:  mov    -0x1c(%ebp),%eax
0849ea0b +0x3ff:  lea    0xc(%eax),%edx
0849ea0e +0x402:  mov    -0x10(%ebp),%eax
0849ea11 +0x405:  mov    %eax,0x4(%esp)
0849ea15 +0x409:  mov    %edx,(%esp)
0849ea18 +0x40c:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0849ea1d +0x411:  mov    (%eax),%esi
0849ea1f +0x413:  mov    0xc(%ebp),%eax
0849ea22 +0x416:  mov    %eax,(%esp)
0849ea25 +0x419:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0849ea2a +0x41e:  mov    %eax,%ebx
0849ea2c +0x420:  mov    0xc(%ebp),%eax
0849ea2f +0x423:  mov    %eax,(%esp)
0849ea32 +0x426:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0849ea37 +0x42b:  movl   $0x1,0xc(%esp)
0849ea3f +0x433:  mov    %esi,0x8(%esp)
0849ea43 +0x437:  mov    %ebx,0x4(%esp)
0849ea47 +0x43b:  mov    %eax,(%esp)
0849ea4a +0x43e:  call   086047d8 <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::delete_skill(int, int, ENUM_SKILL_TREE_KIND)
0849ea4f +0x443:  addl   $0x1,-0x10(%ebp)
0849ea53 +0x447:  mov    -0x1c(%ebp),%eax
0849ea56 +0x44a:  add    $0xc,%eax
0849ea59 +0x44d:  mov    %eax,(%esp)
0849ea5c +0x450:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0849ea61 +0x455:  cmp    -0x10(%ebp),%eax
0849ea64 +0x458:  seta   %al
0849ea67 +0x45b:  test   %al,%al
0849ea69 +0x45d:  jne    0849e9c1 <+0x3b5>
0849ea6f +0x463:  mov    0xc(%ebp),%eax
0849ea72 +0x466:  mov    %eax,(%esp)
0849ea75 +0x469:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0849ea7a +0x46e:  mov    0xc(%ebp),%eax
0849ea7d +0x471:  mov    %eax,(%esp)
0849ea80 +0x474:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0849ea85 +0x479:  mov    %eax,%ebx
0849ea87 +0x47b:  mov    0xc(%ebp),%eax
0849ea8a +0x47e:  mov    %eax,(%esp)
0849ea8d +0x481:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0849ea92 +0x486:  mov    -0x18(%ebp),%edx
0849ea95 +0x489:  mov    %edx,0x10(%esp)
0849ea99 +0x48d:  mov    %ebx,0xc(%esp)
0849ea9d +0x491:  mov    %eax,0x8(%esp)
0849eaa1 +0x495:  movl   $"ExpertJob-,%d,%d,%d",0x4(%esp)
0849eaa9 +0x49d:  mov    0xc(%ebp),%eax
0849eaac +0x4a0:  mov    %eax,(%esp)
0849eaaf +0x4a3:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0849eab4 +0x4a8:  mov    0xc(%ebp),%eax
0849eab7 +0x4ab:  movl   $0x0,0x4(%esp)
0849eabf +0x4b3:  mov    %eax,(%esp)
0849eac2 +0x4b6:  call   0849f53e <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x36f>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x36f
0849eac7 +0x4bb:  mov    0xc(%ebp),%eax
0849eaca +0x4be:  movl   $0xffffffff,0x4(%esp)
0849ead2 +0x4c6:  mov    %eax,(%esp)
0849ead5 +0x4c9:  call   0849f56a <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x39b>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x39b
0849eada +0x4ce:  lea    -0x30(%ebp),%ebx
0849eadd +0x4d1:  mov    0xc(%ebp),%eax
0849eae0 +0x4d4:  mov    %eax,(%esp)
0849eae3 +0x4d7:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0849eae8 +0x4dc:  mov    %ebx,0x4(%esp)
0849eaec +0x4e0:  mov    %eax,(%esp)
0849eaef +0x4e3:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
0849eaf4 +0x4e8:  lea    -0x30(%ebp),%eax
0849eaf7 +0x4eb:  mov    %eax,0x4(%esp)
0849eafb +0x4ef:  mov    0xc(%ebp),%eax
0849eafe +0x4f2:  mov    %eax,(%esp)
0849eb01 +0x4f5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849eb06 +0x4fa:  addl   $0x1,-0x18(%ebp)
0849eb0a +0x4fe:  mov    -0x1c(%ebp),%eax
0849eb0d +0x501:  add    $0x1e8,%eax
0849eb12 +0x506:  mov    %eax,(%esp)
0849eb15 +0x509:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0849eb1a +0x50e:  cmp    -0x18(%ebp),%eax
0849eb1d +0x511:  setbe  %al
0849eb20 +0x514:  test   %al,%al
0849eb22 +0x516:  je     0849eb3a <+0x52e>
0849eb24 +0x518:  mov    -0x1c(%ebp),%eax
0849eb27 +0x51b:  add    $0x1e8,%eax
0849eb2c +0x520:  mov    %eax,(%esp)
0849eb2f +0x523:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0849eb34 +0x528:  sub    $0x1,%eax
0849eb37 +0x52b:  mov    %eax,-0x18(%ebp)
0849eb3a +0x52e:  movl   $0x0,0x4(%esp)
0849eb42 +0x536:  mov    0xc(%ebp),%eax
0849eb45 +0x539:  mov    %eax,(%esp)
0849eb48 +0x53c:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0849eb4d +0x541:  mov    %eax,(%esp)
0849eb50 +0x544:  call   0832aebc <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0x59>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0x59
0849eb55 +0x549:  mov    -0x18(%ebp),%eax
0849eb58 +0x54c:  movzwl %ax,%ebx
0849eb5b +0x54f:  movl   $0x0,0x4(%esp)
0849eb63 +0x557:  mov    0xc(%ebp),%eax
0849eb66 +0x55a:  mov    %eax,(%esp)
0849eb69 +0x55d:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0849eb6e +0x562:  mov    %ebx,0x4(%esp)
0849eb72 +0x566:  mov    %eax,(%esp)
0849eb75 +0x569:  call   0849f5ac <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x3dd>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x3dd
0849eb7a +0x56e:  lea    -0x30(%ebp),%eax
0849eb7d +0x571:  mov    %eax,(%esp)
0849eb80 +0x574:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849eb85 +0x579:  movl   $0x2,0x8(%esp)
0849eb8d +0x581:  movl   $0x0,0x4(%esp)
0849eb95 +0x589:  lea    -0x30(%ebp),%eax
0849eb98 +0x58c:  mov    %eax,(%esp)
0849eb9b +0x58f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849eba0 +0x594:  movl   $0x0,0x4(%esp)
0849eba8 +0x59c:  lea    -0x30(%ebp),%eax
0849ebab +0x59f:  mov    %eax,(%esp)
0849ebae +0x5a2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849ebb3 +0x5a7:  movl   $0x1,0x4(%esp)
0849ebbb +0x5af:  lea    -0x30(%ebp),%eax
0849ebbe +0x5b2:  mov    %eax,(%esp)
0849ebc1 +0x5b5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849ebc6 +0x5ba:  lea    -0x30(%ebp),%eax
0849ebc9 +0x5bd:  movl   $0x0,0x8(%esp)
0849ebd1 +0x5c5:  mov    %eax,0x4(%esp)
0849ebd5 +0x5c9:  mov    0xc(%ebp),%eax
0849ebd8 +0x5cc:  mov    %eax,(%esp)
0849ebdb +0x5cf:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0849ebe0 +0x5d4:  movl   $0x1,0x4(%esp)
0849ebe8 +0x5dc:  lea    -0x30(%ebp),%eax
0849ebeb +0x5df:  mov    %eax,(%esp)
0849ebee +0x5e2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849ebf3 +0x5e7:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0849ebf8 +0x5ec:  mov    0xc(%ebp),%edx
0849ebfb +0x5ef:  mov    %edx,0x8(%esp)
0849ebff +0x5f3:  lea    -0x30(%ebp),%edx
0849ec02 +0x5f6:  mov    %edx,0x4(%esp)
0849ec06 +0x5fa:  mov    %eax,(%esp)
0849ec09 +0x5fd:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0849ec0e +0x602:  lea    -0x30(%ebp),%eax
0849ec11 +0x605:  mov    %eax,(%esp)
0849ec14 +0x608:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849ec19 +0x60d:  movl   $0xf3,0x8(%esp)
0849ec21 +0x615:  movl   $0x1,0x4(%esp)
0849ec29 +0x61d:  lea    -0x30(%ebp),%eax
0849ec2c +0x620:  mov    %eax,(%esp)
0849ec2f +0x623:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849ec34 +0x628:  movl   $0x1,0x4(%esp)
0849ec3c +0x630:  lea    -0x30(%ebp),%eax
0849ec3f +0x633:  mov    %eax,(%esp)
0849ec42 +0x636:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849ec47 +0x63b:  mov    0xc(%ebp),%eax
0849ec4a +0x63e:  mov    %eax,(%esp)
0849ec4d +0x641:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
0849ec52 +0x646:  mov    %eax,0x4(%esp)
0849ec56 +0x64a:  lea    -0x30(%ebp),%eax
0849ec59 +0x64d:  mov    %eax,(%esp)
0849ec5c +0x650:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849ec61 +0x655:  mov    -0x18(%ebp),%eax
0849ec64 +0x658:  mov    %eax,0x4(%esp)
0849ec68 +0x65c:  lea    -0x30(%ebp),%eax
0849ec6b +0x65f:  mov    %eax,(%esp)
0849ec6e +0x662:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849ec73 +0x667:  movl   $0x1,0x4(%esp)
0849ec7b +0x66f:  lea    -0x30(%ebp),%eax
0849ec7e +0x672:  mov    %eax,(%esp)
0849ec81 +0x675:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849ec86 +0x67a:  lea    -0x30(%ebp),%eax
0849ec89 +0x67d:  mov    %eax,0x4(%esp)
0849ec8d +0x681:  mov    0xc(%ebp),%eax
0849ec90 +0x684:  mov    %eax,(%esp)
0849ec93 +0x687:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849ec98 +0x68c:  jmp    0849ecaf <+0x6a3>
0849ec9a +0x68e:  mov    %edx,%ebx
0849ec9c +0x690:  mov    %eax,%esi
0849ec9e +0x692:  lea    -0x30(%ebp),%eax
0849eca1 +0x695:  mov    %eax,(%esp)
0849eca4 +0x698:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849eca9 +0x69d:  mov    %esi,%eax
0849ecab +0x69f:  mov    %ebx,%edx
0849ecad +0x6a1:  jmp    0849ecbc <+0x6b0>
0849ecaf +0x6a3:  lea    -0x30(%ebp),%eax
0849ecb2 +0x6a6:  mov    %eax,(%esp)
0849ecb5 +0x6a9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849ecba +0x6ae:  jmp    0849ed0f <+0x703>
0849ecbc +0x6b0:  cmp    $0x1,%edx
0849ecbf +0x6b3:  je     0849ecc9 <+0x6bd>
0849ecc1 +0x6b5:  mov    %eax,(%esp)
0849ecc4 +0x6b8:  call   08ae3750 <_Unwind_Resume>
0849ecc9 +0x6bd:  mov    %eax,(%esp)
0849eccc +0x6c0:  call   08725ce0 <__cxa_begin_catch>
0849ecd1 +0x6c5:  mov    (%eax),%eax
0849ecd3 +0x6c7:  mov    %eax,-0xc(%ebp)
0849ecd6 +0x6ca:  mov    -0xc(%ebp),%eax
0849ecd9 +0x6cd:  movzbl %al,%eax
0849ecdc +0x6d0:  mov    %eax,0x8(%esp)
0849ece0 +0x6d4:  movl   $0xf3,0x4(%esp)
0849ece8 +0x6dc:  mov    0xc(%ebp),%eax
0849eceb +0x6df:  mov    %eax,(%esp)
0849ecee +0x6e2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0849ecf3 +0x6e7:  jmp    0849ed0a <+0x6fe>
0849ecf5 +0x6e9:  mov    %edx,%ebx
0849ecf7 +0x6eb:  mov    %eax,%esi
0849ecf9 +0x6ed:  call   08725c30 <__cxa_end_catch>
0849ecfe +0x6f2:  mov    %esi,%eax
0849ed00 +0x6f4:  mov    %ebx,%edx
0849ed02 +0x6f6:  mov    %eax,(%esp)
0849ed05 +0x6f9:  call   08ae3750 <_Unwind_Resume>
0849ed0a +0x6fe:  call   08725c30 <__cxa_end_catch>
0849ed0f +0x703:  lea    -0x8(%ebp),%esp
0849ed12 +0x706:  add    $0x0,%esp
0849ed15 +0x709:  pop    %ebx
0849ed16 +0x70a:  pop    %esi
0849ed17 +0x70b:  pop    %ebp
0849ed18 +0x70c:  ret
0849ed19 +0x70d:  nop
```

## 反编译 C

```c
// expert_job::CExpertJobMgr::OnGiveup @ 0x849e60c

/* expert_job::CExpertJobMgr::OnGiveup(CUser*) */

void __thiscall expert_job::CExpertJobMgr::OnGiveup(CExpertJobMgr *this,CUser *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  CCharacExpertJob *pCVar6;
  uint uVar7;
  int *piVar8;
  CInventory *pCVar9;
  SkillSlot *pSVar10;
  undefined4 uVar11;
  UserQuest *pUVar12;
  CData *this_00;
  GameWorld *this_01;
  PacketGuard local_34 [12];
  __normal_iterator local_28 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_24 [4];
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 3;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0849e64f to 0849e8ef has its CatchHandler @ 0849ecbc */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  iVar3 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  uVar5 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  iVar3 = G_CDataManager();
  local_20 = CDataManager::GetExpertJobScript(iVar3);
  if (local_20 == 0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4,uVar5);
    *puVar4 = 8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  pCVar6 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
  local_1c = CCharacExpertJob::get_giveup_count(pCVar6);
  local_1c = local_1c & 0xffff;
  uVar7 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(local_20 + 0x1e8));
  if (uVar7 <= local_1c) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  piVar8 = (int *)std::vector<int,std::allocator<int>>::at
                            ((vector<int,std::allocator<int>> *)(local_20 + 0x1e8),local_1c);
  local_18 = *piVar8;
  iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
  if (iVar3 < local_18) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  std::vector<int,std::allocator<int>>::begin();
  std::vector<int,std::allocator<int>>::end();
  while( true ) {
    bVar2 = __gnu_cxx::operator!=(local_24,local_28);
    if (!bVar2) {
      std::vector<int,std::allocator<int>>::begin();
      std::vector<int,std::allocator<int>>::end();
      while( true ) {
        bVar2 = __gnu_cxx::operator!=(local_24,local_28);
        if (!bVar2) break;
        piVar8 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_24);
        iVar3 = *piVar8;
        pUVar12 = (UserQuest *)CUser::getCurCharacQuestW(param_1);
        UserQuest::resetClearQuest(pUVar12,iVar3);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_24);
      }
      PacketGuard::PacketGuard(local_34);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 0849e915 to 0849ec97 has its CatchHandler @ 0849ec9a */
      CInventory::use_money(pCVar9,local_18,0x1e,1);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xe);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,1);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::MakeItemPacket(pCVar9,1,0,local_34);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send(param_1,local_34);
      local_14 = 0;
      while( true ) {
        uVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_20 + 0xc));
        if (uVar7 <= local_14) break;
        puVar4 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (local_20 + 0xc),local_14);
        uVar5 = *puVar4;
        uVar11 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
        SkillSlot::delete_skill(pSVar10,uVar11,uVar5,0);
        puVar4 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (local_20 + 0xc),local_14);
        uVar5 = *puVar4;
        uVar11 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
        SkillSlot::delete_skill(pSVar10,uVar11,uVar5,1);
        local_14 = local_14 + 1;
      }
      CUser::send_skill_info(param_1);
      uVar5 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
      uVar11 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      CUser::LogHistory(param_1,"ExpertJob-,%d,%d,%d",uVar11,uVar5,local_1c);
      CUserCharacInfo::SetCurCharacExpertJobType((CUserCharacInfo *)param_1,0);
      CUserCharacInfo::SetCurCharacExpertJobExp((CUserCharacInfo *)param_1,-1);
      pUVar12 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
      UserQuest::get_quest_info(pUVar12,(char *)local_34);
      CUser::Send(param_1,local_34);
      local_1c = local_1c + 1;
      uVar7 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(local_20 + 0x1e8));
      if (uVar7 <= local_1c) {
        iVar3 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(local_20 + 0x1e8));
        local_1c = iVar3 - 1;
      }
      this_00 = (CData *)CUser::GetCharacExpandData(param_1,0);
      charac_expand::CData::reset(this_00);
      uVar7 = local_1c;
      pCVar6 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
      CCharacExpertJob::set_giveup_count(pCVar6,(ushort)uVar7);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,1);
      CUser::make_basic_info(param_1,(char *)local_34,'\0');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      this_01 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_01,local_34,param_1);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xf3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
      iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_1c);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send(param_1,local_34);
                    /* try { // try from 0849ecb5 to 0849ecb9 has its CatchHandler @ 0849ecbc */
      PacketGuard::~PacketGuard(local_34);
      return;
    }
    piVar8 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_24);
    iVar3 = *piVar8;
    pUVar12 = (UserQuest *)CUser::getCurCharacQuestRefR(param_1);
    cVar1 = UserQuest::isClearQuest(pUVar12,iVar3);
    if (cVar1 != '\x01') break;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_24);
  }
  puVar4 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar4 = 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
}
```
