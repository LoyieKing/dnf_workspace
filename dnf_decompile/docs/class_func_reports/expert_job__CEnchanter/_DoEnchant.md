# _DoEnchant

`_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE`

`expert_job::CEnchanter::_DoEnchant(ENUM_TRY_ENCHANT_TYPE)`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849cb2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849cb2c  _ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE
#           expert_job::CEnchanter::_DoEnchant(ENUM_TRY_ENCHANT_TYPE)
# range [0x0849cb2c, 0x0849d343]
0849cb2c +0x000:  push   %ebp
0849cb2d +0x001:  mov    %esp,%ebp
0849cb2f +0x003:  push   %esi
0849cb30 +0x004:  push   %ebx
0849cb31 +0x005:  sub    $0x60,%esp
0849cb34 +0x008:  mov    0x8(%ebp),%eax
0849cb37 +0x00b:  mov    0x2c(%eax),%eax
0849cb3a +0x00e:  test   %eax,%eax
0849cb3c +0x010:  je     0849cb67 <+0x3b>
0849cb3e +0x012:  mov    0x8(%ebp),%eax
0849cb41 +0x015:  mov    0x2c(%eax),%eax
0849cb44 +0x018:  mov    %eax,(%esp)
0849cb47 +0x01b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849cb4c +0x020:  test   %eax,%eax
0849cb4e +0x022:  je     0849cb67 <+0x3b>
0849cb50 +0x024:  mov    0x8(%ebp),%eax
0849cb53 +0x027:  mov    0x28(%eax),%edx
0849cb56 +0x02a:  mov    0x8(%ebp),%eax
0849cb59 +0x02d:  mov    0x2c(%eax),%eax
0849cb5c +0x030:  cmp    %eax,%edx
0849cb5e +0x032:  je     0849cb67 <+0x3b>
0849cb60 +0x034:  mov    $0x1,%eax
0849cb65 +0x039:  jmp    0849cb6c <+0x40>
0849cb67 +0x03b:  mov    $0x0,%eax
0849cb6c +0x040:  test   %al,%al
0849cb6e +0x042:  je     0849cc06 <+0xda>
0849cb74 +0x048:  mov    0x8(%ebp),%eax
0849cb77 +0x04b:  mov    0x38(%eax),%eax
0849cb7a +0x04e:  test   %eax,%eax
0849cb7c +0x050:  jle    0849cc06 <+0xda>
0849cb82 +0x056:  mov    0x8(%ebp),%eax
0849cb85 +0x059:  mov    0x28(%eax),%eax
0849cb88 +0x05c:  test   %eax,%eax
0849cb8a +0x05e:  je     0849cba5 <+0x79>
0849cb8c +0x060:  mov    0x8(%ebp),%eax
0849cb8f +0x063:  mov    0x2c(%eax),%eax
0849cb92 +0x066:  mov    %eax,(%esp)
0849cb95 +0x069:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849cb9a +0x06e:  test   %eax,%eax
0849cb9c +0x070:  je     0849cba5 <+0x79>
0849cb9e +0x072:  mov    $0x1,%eax
0849cba3 +0x077:  jmp    0849cbaa <+0x7e>
0849cba5 +0x079:  mov    $0x0,%eax
0849cbaa +0x07e:  test   %al,%al
0849cbac +0x080:  je     0849cbd7 <+0xab>
0849cbae +0x082:  mov    0x8(%ebp),%eax
0849cbb1 +0x085:  mov    0x38(%eax),%edx
0849cbb4 +0x088:  mov    0x8(%ebp),%eax
0849cbb7 +0x08b:  mov    0x28(%eax),%eax
0849cbba +0x08e:  mov    %edx,0x4(%esp)
0849cbbe +0x092:  mov    %eax,(%esp)
0849cbc1 +0x095:  call   0866af1c <_ZN5CUser10CheckMoneyEi>  ; CUser::CheckMoney(int)
0849cbc6 +0x09a:  xor    $0x1,%eax
0849cbc9 +0x09d:  test   %al,%al
0849cbcb +0x09f:  je     0849cbd7 <+0xab>
0849cbcd +0x0a1:  mov    $0x11,%ebx
0849cbd2 +0x0a6:  jmp    0849d33b <+0x80f>
0849cbd7 +0x0ab:  mov    0x8(%ebp),%eax
0849cbda +0x0ae:  mov    0x2c(%eax),%eax
0849cbdd +0x0b1:  mov    %eax,(%esp)
0849cbe0 +0x0b4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849cbe5 +0x0b9:  mov    %eax,(%esp)
0849cbe8 +0x0bc:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0849cbed +0x0c1:  mov    0x8(%ebp),%edx
0849cbf0 +0x0c4:  mov    0x38(%edx),%edx
0849cbf3 +0x0c7:  cmp    %edx,%eax
0849cbf5 +0x0c9:  setl   %al
0849cbf8 +0x0cc:  test   %al,%al
0849cbfa +0x0ce:  je     0849cc06 <+0xda>
0849cbfc +0x0d0:  mov    $0x11,%ebx
0849cc01 +0x0d5:  jmp    0849d33b <+0x80f>
0849cc06 +0x0da:  movl   $0x0,-0x28(%ebp)
0849cc0d +0x0e1:  mov    0x8(%ebp),%eax
0849cc10 +0x0e4:  mov    %eax,(%esp)
0849cc13 +0x0e7:  call   0849c9b2 <_ZN10expert_job10CEnchanter15IsRightMaterialEv>  ; expert_job::CEnchanter::IsRightMaterial()
0849cc18 +0x0ec:  mov    %eax,-0x28(%ebp)
0849cc1b +0x0ef:  cmpl   $0x0,-0x28(%ebp)
0849cc1f +0x0f3:  setne  %al
0849cc22 +0x0f6:  test   %al,%al
0849cc24 +0x0f8:  je     0849cc2e <+0x102>
0849cc26 +0x0fa:  mov    -0x28(%ebp),%ebx
0849cc29 +0x0fd:  jmp    0849d33b <+0x80f>
0849cc2e +0x102:  mov    0x8(%ebp),%eax
0849cc31 +0x105:  mov    %eax,(%esp)
0849cc34 +0x108:  call   0849f324 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x155>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x155
0849cc39 +0x10d:  movzbl %al,%ecx
0849cc3c +0x110:  mov    0x8(%ebp),%eax
0849cc3f +0x113:  mov    0x40(%eax),%edx
0849cc42 +0x116:  mov    0x8(%ebp),%eax
0849cc45 +0x119:  mov    0x28(%eax),%eax
0849cc48 +0x11c:  mov    %ecx,0x8(%esp)
0849cc4c +0x120:  mov    %edx,0x4(%esp)
0849cc50 +0x124:  mov    %eax,(%esp)
0849cc53 +0x127:  call   0849b820 <_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb>  ; expert_job::IsExistRecipeItem(CUser*, CItem*, bool)
0849cc58 +0x12c:  xor    $0x1,%eax
0849cc5b +0x12f:  test   %al,%al
0849cc5d +0x131:  je     0849cc69 <+0x13d>
0849cc5f +0x133:  mov    $0x15,%ebx
0849cc64 +0x138:  jmp    0849d33b <+0x80f>
0849cc69 +0x13d:  movb   $0x0,-0x21(%ebp)
0849cc6d +0x141:  movl   $0x0,-0x20(%ebp)
0849cc74 +0x148:  lea    -0x44(%ebp),%eax
0849cc77 +0x14b:  mov    %eax,(%esp)
0849cc7a +0x14e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0849cc7f +0x153:  mov    0x8(%ebp),%eax
0849cc82 +0x156:  movzwl 0x16(%eax),%eax
0849cc86 +0x15a:  movzwl %ax,%eax
0849cc89 +0x15d:  mov    %eax,(%esp)
0849cc8c +0x160:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
0849cc91 +0x165:  mov    %eax,-0x1c(%ebp)
0849cc94 +0x168:  mov    0x8(%ebp),%eax
0849cc97 +0x16b:  movzwl 0x14(%eax),%eax
0849cc9b +0x16f:  movzwl %ax,%ebx
0849cc9e +0x172:  mov    0x8(%ebp),%eax
0849cca1 +0x175:  mov    0x8(%eax),%eax
0849cca4 +0x178:  mov    %eax,(%esp)
0849cca7 +0x17b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849ccac +0x180:  mov    %ebx,0x8(%esp)
0849ccb0 +0x184:  mov    -0x1c(%ebp),%edx
0849ccb3 +0x187:  mov    %edx,0x4(%esp)
0849ccb7 +0x18b:  mov    %eax,(%esp)
0849ccba +0x18e:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0849ccbf +0x193:  mov    %eax,-0x20(%ebp)
0849ccc2 +0x196:  cmpl   $0x0,-0x20(%ebp)
0849ccc6 +0x19a:  jne    0849ccd2 <+0x1a6>
0849ccc8 +0x19c:  mov    $0x11,%ebx
0849cccd +0x1a1:  jmp    0849d330 <+0x804>
0849ccd2 +0x1a6:  mov    -0x20(%ebp),%eax
0849ccd5 +0x1a9:  mov    0x2(%eax),%edx
0849ccd8 +0x1ac:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
0849ccdd +0x1b1:  mov    %edx,0x8(%esp)
0849cce1 +0x1b5:  movl   $0x1,0x4(%esp)
0849cce9 +0x1bd:  mov    %eax,(%esp)
0849ccec +0x1c0:  call   082702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>  ; InstanceRentalSystem::CheckRentableItem(int, unsigned int)
0849ccf1 +0x1c5:  test   %al,%al
0849ccf3 +0x1c7:  je     0849ccff <+0x1d3>
0849ccf5 +0x1c9:  mov    $0x11,%ebx
0849ccfa +0x1ce:  jmp    0849d330 <+0x804>
0849ccff +0x1d3:  mov    -0x20(%ebp),%eax
0849cd02 +0x1d6:  mov    0x2(%eax),%edx
0849cd05 +0x1d9:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
0849cd0a +0x1de:  mov    %edx,0x8(%esp)
0849cd0e +0x1e2:  movl   $0x2,0x4(%esp)
0849cd16 +0x1ea:  mov    %eax,(%esp)
0849cd19 +0x1ed:  call   082702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>  ; InstanceRentalSystem::CheckRentableItem(int, unsigned int)
0849cd1e +0x1f2:  test   %al,%al
0849cd20 +0x1f4:  je     0849cd2c <+0x200>
0849cd22 +0x1f6:  mov    $0x11,%ebx
0849cd27 +0x1fb:  jmp    0849d330 <+0x804>
0849cd2c +0x200:  mov    0x8(%ebp),%eax
0849cd2f +0x203:  mov    0x10(%eax),%eax
0849cd32 +0x206:  mov    %eax,-0x18(%ebp)
0849cd35 +0x209:  mov    -0x20(%ebp),%eax
0849cd38 +0x20c:  mov    0xd(%eax),%eax
0849cd3b +0x20f:  mov    %eax,-0x14(%ebp)
0849cd3e +0x212:  movl   $0x0,-0x10(%ebp)
0849cd45 +0x219:  mov    0x8(%ebp),%eax
0849cd48 +0x21c:  mov    %eax,(%esp)
0849cd4b +0x21f:  call   0849cac6 <_ZN10expert_job10CEnchanter12_DrawEnchantEv>  ; expert_job::CEnchanter::_DrawEnchant()
0849cd50 +0x224:  test   %al,%al
0849cd52 +0x226:  je     0849ce3b <+0x30f>
0849cd58 +0x22c:  mov    0x8(%ebp),%eax
0849cd5b +0x22f:  mov    0x3c(%eax),%eax
0849cd5e +0x232:  mov    %eax,-0x10(%ebp)
0849cd61 +0x235:  cmpl   $0x0,-0x10(%ebp)
0849cd65 +0x239:  je     0849cd7a <+0x24e>
0849cd67 +0x23b:  mov    -0x10(%ebp),%eax
0849cd6a +0x23e:  mov    %eax,(%esp)
0849cd6d +0x241:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0849cd72 +0x246:  mov    %eax,%edx
0849cd74 +0x248:  mov    -0x20(%ebp),%eax
0849cd77 +0x24b:  mov    %edx,0xd(%eax)
0849cd7a +0x24e:  lea    -0x44(%ebp),%eax
0849cd7d +0x251:  mov    %eax,(%esp)
0849cd80 +0x254:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849cd85 +0x259:  movl   $0xe,0x8(%esp)
0849cd8d +0x261:  movl   $0x0,0x4(%esp)
0849cd95 +0x269:  lea    -0x44(%ebp),%eax
0849cd98 +0x26c:  mov    %eax,(%esp)
0849cd9b +0x26f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849cda0 +0x274:  mov    0x8(%ebp),%eax
0849cda3 +0x277:  movzwl 0x16(%eax),%eax
0849cda7 +0x27b:  movzwl %ax,%eax
0849cdaa +0x27e:  mov    %eax,0x4(%esp)
0849cdae +0x282:  lea    -0x44(%ebp),%eax
0849cdb1 +0x285:  mov    %eax,(%esp)
0849cdb4 +0x288:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849cdb9 +0x28d:  movl   $0x1,0x4(%esp)
0849cdc1 +0x295:  lea    -0x44(%ebp),%eax
0849cdc4 +0x298:  mov    %eax,(%esp)
0849cdc7 +0x29b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849cdcc +0x2a0:  mov    0x8(%ebp),%eax
0849cdcf +0x2a3:  movzwl 0x14(%eax),%eax
0849cdd3 +0x2a7:  movzwl %ax,%esi
0849cdd6 +0x2aa:  mov    -0x1c(%ebp),%ebx
0849cdd9 +0x2ad:  mov    0x8(%ebp),%eax
0849cddc +0x2b0:  mov    0x2c(%eax),%eax
0849cddf +0x2b3:  mov    %eax,(%esp)
0849cde2 +0x2b6:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849cde7 +0x2bb:  lea    -0x44(%ebp),%edx
0849cdea +0x2be:  mov    %edx,0xc(%esp)
0849cdee +0x2c2:  mov    %esi,0x8(%esp)
0849cdf2 +0x2c6:  mov    %ebx,0x4(%esp)
0849cdf6 +0x2ca:  mov    %eax,(%esp)
0849cdf9 +0x2cd:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0849cdfe +0x2d2:  xor    $0x1,%eax
0849ce01 +0x2d5:  test   %al,%al
0849ce03 +0x2d7:  je     0849ce0f <+0x2e3>
0849ce05 +0x2d9:  mov    $0x0,%ebx
0849ce0a +0x2de:  jmp    0849d330 <+0x804>
0849ce0f +0x2e3:  movl   $0x1,0x4(%esp)
0849ce17 +0x2eb:  lea    -0x44(%ebp),%eax
0849ce1a +0x2ee:  mov    %eax,(%esp)
0849ce1d +0x2f1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849ce22 +0x2f6:  mov    0x8(%ebp),%eax
0849ce25 +0x2f9:  mov    0x2c(%eax),%eax
0849ce28 +0x2fc:  lea    -0x44(%ebp),%edx
0849ce2b +0x2ff:  mov    %edx,0x4(%esp)
0849ce2f +0x303:  mov    %eax,(%esp)
0849ce32 +0x306:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849ce37 +0x30b:  movb   $0x1,-0x21(%ebp)
0849ce3b +0x30f:  cmpl   $0x0,-0x10(%ebp)
0849ce3f +0x313:  je     0849ce85 <+0x359>
0849ce41 +0x315:  mov    0x8(%ebp),%eax
0849ce44 +0x318:  mov    0x28(%eax),%eax
0849ce47 +0x31b:  test   %eax,%eax
0849ce49 +0x31d:  je     0849ce85 <+0x359>
0849ce4b +0x31f:  mov    -0x10(%ebp),%eax
0849ce4e +0x322:  mov    %eax,(%esp)
0849ce51 +0x325:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0849ce56 +0x32a:  mov    %eax,%esi
0849ce58 +0x32c:  mov    0x8(%ebp),%eax
0849ce5b +0x32f:  mov    0x28(%eax),%eax
0849ce5e +0x332:  mov    %eax,(%esp)
0849ce61 +0x335:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0849ce66 +0x33a:  mov    %eax,%ebx
0849ce68 +0x33c:  call   0860f940 <_Z29GetInstanceExpertJobStatisticv>  ; GetInstanceExpertJobStatistic()
0849ce6d +0x341:  movl   $0x1,0xc(%esp)
0849ce75 +0x349:  mov    %esi,0x8(%esp)
0849ce79 +0x34d:  mov    %ebx,0x4(%esp)
0849ce7d +0x351:  mov    %eax,(%esp)
0849ce80 +0x354:  call   0860f9d4 <_ZN19CExpertJobStatistic17increaseItemCountE20ENUM_EXPERT_JOB_TYPEmi>  ; CExpertJobStatistic::increaseItemCount(ENUM_EXPERT_JOB_TYPE, unsigned long, int)
0849ce85 +0x359:  mov    0x8(%ebp),%eax
0849ce88 +0x35c:  mov    0x28(%eax),%eax
0849ce8b +0x35f:  test   %eax,%eax
0849ce8d +0x361:  je     0849cea8 <+0x37c>
0849ce8f +0x363:  mov    0x8(%ebp),%eax
0849ce92 +0x366:  mov    0x28(%eax),%eax
0849ce95 +0x369:  mov    %eax,(%esp)
0849ce98 +0x36c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849ce9d +0x371:  test   %eax,%eax
0849ce9f +0x373:  je     0849cea8 <+0x37c>
0849cea1 +0x375:  mov    $0x1,%eax
0849cea6 +0x37a:  jmp    0849cead <+0x381>
0849cea8 +0x37c:  mov    $0x0,%eax
0849cead +0x381:  test   %al,%al
0849ceaf +0x383:  je     0849d03c <+0x510>
0849ceb5 +0x389:  mov    0x8(%ebp),%eax
0849ceb8 +0x38c:  mov    0x38(%eax),%eax
0849cebb +0x38f:  test   %eax,%eax
0849cebd +0x391:  jle    0849cf1d <+0x3f1>
0849cebf +0x393:  mov    0x8(%ebp),%eax
0849cec2 +0x396:  mov    0x38(%eax),%ebx
0849cec5 +0x399:  mov    0x8(%ebp),%eax
0849cec8 +0x39c:  mov    0x28(%eax),%eax
0849cecb +0x39f:  mov    %eax,(%esp)
0849cece +0x3a2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849ced3 +0x3a7:  movl   $0x0,0x10(%esp)
0849cedb +0x3af:  movl   $0x1,0xc(%esp)
0849cee3 +0x3b7:  movl   $0x10,0x8(%esp)
0849ceeb +0x3bf:  mov    %ebx,0x4(%esp)
0849ceef +0x3c3:  mov    %eax,(%esp)
0849cef2 +0x3c6:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
0849cef7 +0x3cb:  mov    0x8(%ebp),%eax
0849cefa +0x3ce:  mov    0x28(%eax),%eax
0849cefd +0x3d1:  movl   $0x0,0xc(%esp)
0849cf05 +0x3d9:  movl   $0x0,0x8(%esp)
0849cf0d +0x3e1:  movl   $0x1,0x4(%esp)
0849cf15 +0x3e9:  mov    %eax,(%esp)
0849cf18 +0x3ec:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0849cf1d +0x3f1:  lea    -0x44(%ebp),%eax
0849cf20 +0x3f4:  mov    %eax,(%esp)
0849cf23 +0x3f7:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849cf28 +0x3fc:  movl   $0xac,0x8(%esp)
0849cf30 +0x404:  movl   $0x1,0x4(%esp)
0849cf38 +0x40c:  lea    -0x44(%ebp),%eax
0849cf3b +0x40f:  mov    %eax,(%esp)
0849cf3e +0x412:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849cf43 +0x417:  movl   $0x1,0x4(%esp)
0849cf4b +0x41f:  lea    -0x44(%ebp),%eax
0849cf4e +0x422:  mov    %eax,(%esp)
0849cf51 +0x425:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849cf56 +0x42a:  mov    0xc(%ebp),%eax
0849cf59 +0x42d:  mov    %eax,0x4(%esp)
0849cf5d +0x431:  lea    -0x44(%ebp),%eax
0849cf60 +0x434:  mov    %eax,(%esp)
0849cf63 +0x437:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849cf68 +0x43c:  movzbl -0x21(%ebp),%eax
0849cf6c +0x440:  mov    %eax,0x4(%esp)
0849cf70 +0x444:  lea    -0x44(%ebp),%eax
0849cf73 +0x447:  mov    %eax,(%esp)
0849cf76 +0x44a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849cf7b +0x44f:  mov    0x8(%ebp),%eax
0849cf7e +0x452:  mov    0x28(%eax),%eax
0849cf81 +0x455:  mov    %eax,(%esp)
0849cf84 +0x458:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0849cf89 +0x45d:  mov    %eax,0x4(%esp)
0849cf8d +0x461:  lea    -0x44(%ebp),%eax
0849cf90 +0x464:  mov    %eax,(%esp)
0849cf93 +0x467:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849cf98 +0x46c:  mov    0x8(%ebp),%eax
0849cf9b +0x46f:  mov    0x28(%eax),%eax
0849cf9e +0x472:  mov    %eax,(%esp)
0849cfa1 +0x475:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849cfa6 +0x47a:  mov    %eax,(%esp)
0849cfa9 +0x47d:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0849cfae +0x482:  mov    %eax,0x4(%esp)
0849cfb2 +0x486:  lea    -0x44(%ebp),%eax
0849cfb5 +0x489:  mov    %eax,(%esp)
0849cfb8 +0x48c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849cfbd +0x491:  mov    0x8(%ebp),%eax
0849cfc0 +0x494:  mov    %eax,(%esp)
0849cfc3 +0x497:  call   0849f324 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x155>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x155
0849cfc8 +0x49c:  movzbl %al,%ecx
0849cfcb +0x49f:  mov    0x8(%ebp),%eax
0849cfce +0x4a2:  mov    0x40(%eax),%edx
0849cfd1 +0x4a5:  mov    0x8(%ebp),%eax
0849cfd4 +0x4a8:  mov    0x28(%eax),%eax
0849cfd7 +0x4ab:  mov    %ecx,0xc(%esp)
0849cfdb +0x4af:  lea    -0x44(%ebp),%ecx
0849cfde +0x4b2:  mov    %ecx,0x8(%esp)
0849cfe2 +0x4b6:  mov    %edx,0x4(%esp)
0849cfe6 +0x4ba:  mov    %eax,(%esp)
0849cfe9 +0x4bd:  call   0849bcfb <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb>  ; expert_job::UseMaterialOfRecipe(CUser*, CItem*, PacketGuard*, bool)
0849cfee +0x4c2:  mov    %eax,-0x28(%ebp)
0849cff1 +0x4c5:  cmpl   $0x0,-0x28(%ebp)
0849cff5 +0x4c9:  setne  %al
0849cff8 +0x4cc:  test   %al,%al
0849cffa +0x4ce:  je     0849d014 <+0x4e8>
0849cffc +0x4d0:  cmpl   $0x0,-0x20(%ebp)
0849d000 +0x4d4:  je     0849d00c <+0x4e0>
0849d002 +0x4d6:  mov    -0x20(%ebp),%eax
0849d005 +0x4d9:  movl   $0x0,0xd(%eax)
0849d00c +0x4e0:  mov    -0x28(%ebp),%ebx
0849d00f +0x4e3:  jmp    0849d330 <+0x804>
0849d014 +0x4e8:  movl   $0x1,0x4(%esp)
0849d01c +0x4f0:  lea    -0x44(%ebp),%eax
0849d01f +0x4f3:  mov    %eax,(%esp)
0849d022 +0x4f6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849d027 +0x4fb:  mov    0x8(%ebp),%eax
0849d02a +0x4fe:  mov    0x28(%eax),%eax
0849d02d +0x501:  lea    -0x44(%ebp),%edx
0849d030 +0x504:  mov    %edx,0x4(%esp)
0849d034 +0x508:  mov    %eax,(%esp)
0849d037 +0x50b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849d03c +0x510:  mov    0x8(%ebp),%eax
0849d03f +0x513:  mov    0x2c(%eax),%eax
0849d042 +0x516:  test   %eax,%eax
0849d044 +0x518:  je     0849d06f <+0x543>
0849d046 +0x51a:  mov    0x8(%ebp),%eax
0849d049 +0x51d:  mov    0x2c(%eax),%eax
0849d04c +0x520:  mov    %eax,(%esp)
0849d04f +0x523:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849d054 +0x528:  test   %eax,%eax
0849d056 +0x52a:  je     0849d06f <+0x543>
0849d058 +0x52c:  mov    0x8(%ebp),%eax
0849d05b +0x52f:  mov    0x28(%eax),%edx
0849d05e +0x532:  mov    0x8(%ebp),%eax
0849d061 +0x535:  mov    0x2c(%eax),%eax
0849d064 +0x538:  cmp    %eax,%edx
0849d066 +0x53a:  je     0849d06f <+0x543>
0849d068 +0x53c:  mov    $0x1,%eax
0849d06d +0x541:  jmp    0849d074 <+0x548>
0849d06f +0x543:  mov    $0x0,%eax
0849d074 +0x548:  test   %al,%al
0849d076 +0x54a:  je     0849d2b4 <+0x788>
0849d07c +0x550:  mov    0x8(%ebp),%eax
0849d07f +0x553:  mov    0x38(%eax),%eax
0849d082 +0x556:  test   %eax,%eax
0849d084 +0x558:  jle    0849d0dc <+0x5b0>
0849d086 +0x55a:  mov    0x8(%ebp),%eax
0849d089 +0x55d:  mov    0x38(%eax),%ebx
0849d08c +0x560:  mov    0x8(%ebp),%eax
0849d08f +0x563:  mov    0x2c(%eax),%eax
0849d092 +0x566:  mov    %eax,(%esp)
0849d095 +0x569:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849d09a +0x56e:  movl   $0x1,0xc(%esp)
0849d0a2 +0x576:  movl   $0x17,0x8(%esp)
0849d0aa +0x57e:  mov    %ebx,0x4(%esp)
0849d0ae +0x582:  mov    %eax,(%esp)
0849d0b1 +0x585:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
0849d0b6 +0x58a:  mov    0x8(%ebp),%eax
0849d0b9 +0x58d:  mov    0x2c(%eax),%eax
0849d0bc +0x590:  movl   $0x0,0xc(%esp)
0849d0c4 +0x598:  movl   $0x0,0x8(%esp)
0849d0cc +0x5a0:  movl   $0x1,0x4(%esp)
0849d0d4 +0x5a8:  mov    %eax,(%esp)
0849d0d7 +0x5ab:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0849d0dc +0x5b0:  mov    0x8(%ebp),%eax
0849d0df +0x5b3:  mov    %eax,(%esp)
0849d0e2 +0x5b6:  call   0849f324 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x155>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x155
0849d0e7 +0x5bb:  test   %al,%al
0849d0e9 +0x5bd:  je     0849d240 <+0x714>
0849d0ef +0x5c3:  mov    0x8(%ebp),%eax
0849d0f2 +0x5c6:  movzwl 0x24(%eax),%eax
0849d0f6 +0x5ca:  movzwl %ax,%ebx
0849d0f9 +0x5cd:  mov    0x8(%ebp),%eax
0849d0fc +0x5d0:  mov    0x2c(%eax),%eax
0849d0ff +0x5d3:  mov    %eax,(%esp)
0849d102 +0x5d6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849d107 +0x5db:  movl   $0x1,0x14(%esp)
0849d10f +0x5e3:  movl   $0x8,0x10(%esp)
0849d117 +0x5eb:  movl   $0x1,0xc(%esp)
0849d11f +0x5f3:  mov    %ebx,0x8(%esp)
0849d123 +0x5f7:  movl   $0x1,0x4(%esp)
0849d12b +0x5ff:  mov    %eax,(%esp)
0849d12e +0x602:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0849d133 +0x607:  mov    %al,-0x9(%ebp)
0849d136 +0x60a:  movzbl -0x9(%ebp),%eax
0849d13a +0x60e:  xor    $0x1,%eax
0849d13d +0x611:  test   %al,%al
0849d13f +0x613:  je     0849d199 <+0x66d>
0849d141 +0x615:  mov    0x8(%ebp),%eax
0849d144 +0x618:  movzwl 0x24(%eax),%eax
0849d148 +0x61c:  movzwl %ax,%esi
0849d14b +0x61f:  mov    0x8(%ebp),%eax
0849d14e +0x622:  mov    0x2c(%eax),%eax
0849d151 +0x625:  mov    %eax,(%esp)
0849d154 +0x628:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0849d159 +0x62d:  mov    %eax,%ebx
0849d15b +0x62f:  movl   $0x5,0xc(%esp)
0849d163 +0x637:  movl   $0x3d9,0x8(%esp)
0849d16b +0x63f:  movl   $&_ZZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPEE19__PRETTY_FUNCTION__,0x4(%esp)
0849d173 +0x647:  lea    -0x38(%ebp),%eax
0849d176 +0x64a:  mov    %eax,(%esp)
0849d179 +0x64d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849d17e +0x652:  mov    %esi,0xc(%esp)
0849d182 +0x656:  mov    %ebx,0x8(%esp)
0849d186 +0x65a:  movl   $"CUser::compound_item, getCurCharacInvenW()->delete_item failed , %d %d",0x4(%esp)
0849d18e +0x662:  lea    -0x38(%ebp),%eax
0849d191 +0x665:  mov    %eax,(%esp)
0849d194 +0x668:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849d199 +0x66d:  lea    -0x44(%ebp),%eax
0849d19c +0x670:  mov    %eax,(%esp)
0849d19f +0x673:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849d1a4 +0x678:  movl   $0xe,0x8(%esp)
0849d1ac +0x680:  movl   $0x0,0x4(%esp)
0849d1b4 +0x688:  lea    -0x44(%ebp),%eax
0849d1b7 +0x68b:  mov    %eax,(%esp)
0849d1ba +0x68e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849d1bf +0x693:  movl   $0x0,0x4(%esp)
0849d1c7 +0x69b:  lea    -0x44(%ebp),%eax
0849d1ca +0x69e:  mov    %eax,(%esp)
0849d1cd +0x6a1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849d1d2 +0x6a6:  movl   $0x1,0x4(%esp)
0849d1da +0x6ae:  lea    -0x44(%ebp),%eax
0849d1dd +0x6b1:  mov    %eax,(%esp)
0849d1e0 +0x6b4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849d1e5 +0x6b9:  mov    0x8(%ebp),%eax
0849d1e8 +0x6bc:  movzwl 0x24(%eax),%eax
0849d1ec +0x6c0:  movzwl %ax,%ebx
0849d1ef +0x6c3:  mov    0x8(%ebp),%eax
0849d1f2 +0x6c6:  mov    0x2c(%eax),%eax
0849d1f5 +0x6c9:  mov    %eax,(%esp)
0849d1f8 +0x6cc:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849d1fd +0x6d1:  lea    -0x44(%ebp),%edx
0849d200 +0x6d4:  mov    %edx,0xc(%esp)
0849d204 +0x6d8:  mov    %ebx,0x8(%esp)
0849d208 +0x6dc:  movl   $0x1,0x4(%esp)
0849d210 +0x6e4:  mov    %eax,(%esp)
0849d213 +0x6e7:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0849d218 +0x6ec:  movl   $0x1,0x4(%esp)
0849d220 +0x6f4:  lea    -0x44(%ebp),%eax
0849d223 +0x6f7:  mov    %eax,(%esp)
0849d226 +0x6fa:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849d22b +0x6ff:  mov    0x8(%ebp),%eax
0849d22e +0x702:  mov    0x2c(%eax),%eax
0849d231 +0x705:  lea    -0x44(%ebp),%edx
0849d234 +0x708:  mov    %edx,0x4(%esp)
0849d238 +0x70c:  mov    %eax,(%esp)
0849d23b +0x70f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849d240 +0x714:  lea    -0x44(%ebp),%eax
0849d243 +0x717:  mov    %eax,(%esp)
0849d246 +0x71a:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849d24b +0x71f:  movl   $0xab,0x8(%esp)
0849d253 +0x727:  movl   $0x1,0x4(%esp)
0849d25b +0x72f:  lea    -0x44(%ebp),%eax
0849d25e +0x732:  mov    %eax,(%esp)
0849d261 +0x735:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849d266 +0x73a:  movl   $0x1,0x4(%esp)
0849d26e +0x742:  lea    -0x44(%ebp),%eax
0849d271 +0x745:  mov    %eax,(%esp)
0849d274 +0x748:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849d279 +0x74d:  movzbl -0x21(%ebp),%eax
0849d27d +0x751:  mov    %eax,0x4(%esp)
0849d281 +0x755:  lea    -0x44(%ebp),%eax
0849d284 +0x758:  mov    %eax,(%esp)
0849d287 +0x75b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849d28c +0x760:  movl   $0x1,0x4(%esp)
0849d294 +0x768:  lea    -0x44(%ebp),%eax
0849d297 +0x76b:  mov    %eax,(%esp)
0849d29a +0x76e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849d29f +0x773:  mov    0x8(%ebp),%eax
0849d2a2 +0x776:  mov    0x2c(%eax),%eax
0849d2a5 +0x779:  lea    -0x44(%ebp),%edx
0849d2a8 +0x77c:  mov    %edx,0x4(%esp)
0849d2ac +0x780:  mov    %eax,(%esp)
0849d2af +0x783:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849d2b4 +0x788:  mov    0x8(%ebp),%eax
0849d2b7 +0x78b:  mov    0x2c(%eax),%eax
0849d2ba +0x78e:  mov    %eax,(%esp)
0849d2bd +0x791:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0849d2c2 +0x796:  mov    %eax,%ebx
0849d2c4 +0x798:  mov    0x8(%ebp),%eax
0849d2c7 +0x79b:  mov    0x2c(%eax),%eax
0849d2ca +0x79e:  mov    %eax,(%esp)
0849d2cd +0x7a1:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
0849d2d2 +0x7a6:  movzbl -0x21(%ebp),%ecx
0849d2d6 +0x7aa:  mov    -0x20(%ebp),%edx
0849d2d9 +0x7ad:  mov    0xd(%edx),%edx
0849d2dc +0x7b0:  mov    0x8(%ebp),%esi
0849d2df +0x7b3:  mov    0x2c(%esi),%esi
0849d2e2 +0x7b6:  add    $0x79700,%esi
0849d2e8 +0x7bc:  mov    %ebx,0x18(%esp)
0849d2ec +0x7c0:  mov    %eax,0x14(%esp)
0849d2f0 +0x7c4:  mov    %ecx,0x10(%esp)
0849d2f4 +0x7c8:  mov    %edx,0xc(%esp)
0849d2f8 +0x7cc:  mov    -0x14(%ebp),%eax
0849d2fb +0x7cf:  mov    %eax,0x8(%esp)
0849d2ff +0x7d3:  mov    -0x18(%ebp),%eax
0849d302 +0x7d6:  mov    %eax,0x4(%esp)
0849d306 +0x7da:  mov    %esi,(%esp)
0849d309 +0x7dd:  call   08684d74 <_ZN15cUserHistoryLog11EnchantItemEiiibPKcS1_>  ; cUserHistoryLog::EnchantItem(int, int, int, bool, char const*, char const*)
0849d30e +0x7e2:  mov    $0x0,%ebx
0849d313 +0x7e7:  jmp    0849d330 <+0x804>
0849d315 +0x7e9:  mov    %edx,%ebx
0849d317 +0x7eb:  mov    %eax,%esi
0849d319 +0x7ed:  lea    -0x44(%ebp),%eax
0849d31c +0x7f0:  mov    %eax,(%esp)
0849d31f +0x7f3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849d324 +0x7f8:  mov    %esi,%eax
0849d326 +0x7fa:  mov    %ebx,%edx
0849d328 +0x7fc:  mov    %eax,(%esp)
0849d32b +0x7ff:  call   08ae3750 <_Unwind_Resume>
0849d330 +0x804:  lea    -0x44(%ebp),%eax
0849d333 +0x807:  mov    %eax,(%esp)
0849d336 +0x80a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849d33b +0x80f:  mov    %ebx,%eax
0849d33d +0x811:  add    $0x60,%esp
0849d340 +0x814:  pop    %ebx
0849d341 +0x815:  pop    %esi
0849d342 +0x816:  pop    %ebp
0849d343 +0x817:  ret
```

## 反编译 C

```c
// expert_job::CEnchanter::_DoEnchant @ 0x849cb2c

/* expert_job::CEnchanter::_DoEnchant(ENUM_TRY_ENCHANT_TYPE) */

int __thiscall expert_job::CEnchanter::_DoEnchant(CEnchanter *this,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  CInventory *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CExpertJobStatistic *pCVar9;
  char *pcVar10;
  char *pcVar11;
  PacketGuard local_48 [12];
  cMyTrace local_3c [16];
  int local_2c;
  bool local_25;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CItem *local_14;
  char local_d;
  
  if (((*(int *)(this + 0x2c) == 0) ||
      (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x2c)), iVar5 == 0)) ||
     (*(int *)(this + 0x28) == *(int *)(this + 0x2c))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar4) && (0 < *(int *)(this + 0x38))) {
    if ((*(int *)(this + 0x28) == 0) ||
       (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x2c)), iVar5 == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) &&
       (cVar3 = CUser::CheckMoney(*(CUser **)(this + 0x28),*(int *)(this + 0x38)), cVar3 != '\x01'))
    {
      return 0x11;
    }
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
    iVar5 = CInventory::get_money(pCVar6);
    if (iVar5 < *(int *)(this + 0x38)) {
      return 0x11;
    }
  }
  local_2c = 0;
  local_2c = IsRightMaterial(this);
  if (local_2c != 0) {
    return local_2c;
  }
  bVar4 = (bool)IsUseOtherUserMonsterCard(this);
  cVar3 = IsExistRecipeItem(*(CUser **)(this + 0x28),*(CItem **)(this + 0x40),bVar4);
  if (cVar3 != '\x01') {
    return 0x15;
  }
  local_25 = false;
  local_24 = 0;
  PacketGuard::PacketGuard(local_48);
  local_20 = GetInvenTypeFromItemSpace(*(undefined2 *)(this + 0x16));
  uVar1 = *(ushort *)(this + 0x14);
  pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 8));
                    /* try { // try from 0849ccba to 0849d30d has its CatchHandler @ 0849d315 */
  local_24 = CInventory::GetInvenRef(pCVar6,local_20,(uint)uVar1);
  if (local_24 == 0) {
    iVar5 = 0x11;
  }
  else {
    cVar3 = InstanceRentalSystem::CheckRentableItem
                      (GlobalData::s_rentalSystem,1,*(uint *)(local_24 + 2));
    if (cVar3 == '\0') {
      cVar3 = InstanceRentalSystem::CheckRentableItem
                        (GlobalData::s_rentalSystem,2,*(uint *)(local_24 + 2));
      if (cVar3 == '\0') {
        local_1c = *(int *)(this + 0x10);
        local_18 = *(int *)(local_24 + 0xd);
        local_14 = (CItem *)0x0;
        cVar3 = _DrawEnchant(this);
        if (cVar3 != '\0') {
          local_14 = *(CItem **)(this + 0x3c);
          if (local_14 != (CItem *)0x0) {
            uVar7 = CItem::get_index(local_14);
            *(undefined4 *)(local_24 + 0xd) = uVar7;
          }
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0xe);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_48,(uint)*(ushort *)(this + 0x16));
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,1);
          iVar5 = local_20;
          uVar2 = *(undefined2 *)(this + 0x14);
          pCVar6 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
          cVar3 = CInventory::MakeItemPacket(pCVar6,iVar5,uVar2,local_48);
          if (cVar3 != '\x01') {
            iVar5 = 0;
            goto LAB_0849d330;
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
          CUser::Send(*(CUser **)(this + 0x2c),local_48);
          local_25 = true;
        }
        if ((local_14 != (CItem *)0x0) && (*(int *)(this + 0x28) != 0)) {
          uVar7 = CItem::get_index(local_14);
          uVar8 = CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)(this + 0x28));
          pCVar9 = (CExpertJobStatistic *)GetInstanceExpertJobStatistic();
          CExpertJobStatistic::increaseItemCount(pCVar9,uVar8,uVar7,1);
        }
        if ((*(int *)(this + 0x28) == 0) ||
           (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x28)), iVar5 == 0))
        {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (0 < *(int *)(this + 0x38)) {
            uVar7 = *(undefined4 *)(this + 0x38);
            pCVar6 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x28));
            CInventory::gain_money(pCVar6,uVar7,0x10,1,0);
            CUser::SendUpdateItemList(*(CUser **)(this + 0x28),1,0,0);
          }
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0xac);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,param_2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(uint)local_25);
          iVar5 = CUserCharacInfo::GetCurCharacExpertJobExp(*(CUserCharacInfo **)(this + 0x28));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,iVar5);
          pCVar6 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x28));
          iVar5 = CInventory::get_money(pCVar6);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,iVar5);
          bVar4 = (bool)IsUseOtherUserMonsterCard(this);
          iVar5 = UseMaterialOfRecipe(*(CUser **)(this + 0x28),*(CItem **)(this + 0x40),local_48,
                                      bVar4);
          local_2c = iVar5;
          if (iVar5 != 0) {
            if (local_24 != 0) {
              *(undefined4 *)(local_24 + 0xd) = 0;
            }
            goto LAB_0849d330;
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
          CUser::Send(*(CUser **)(this + 0x28),local_48);
        }
        if (((*(int *)(this + 0x2c) == 0) ||
            (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x2c)), iVar5 == 0)
            ) || (*(int *)(this + 0x28) == *(int *)(this + 0x2c))) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (0 < *(int *)(this + 0x38)) {
            uVar7 = *(undefined4 *)(this + 0x38);
            pCVar6 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
            CInventory::use_money(pCVar6,uVar7,0x17,1);
            CUser::SendUpdateItemList(*(CUser **)(this + 0x2c),1,0,0);
          }
          cVar3 = IsUseOtherUserMonsterCard(this);
          if (cVar3 != '\0') {
            uVar2 = *(undefined2 *)(this + 0x24);
            pCVar6 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
            local_d = CInventory::delete_item(pCVar6,1,uVar2,1,8,1);
            if (local_d != '\x01') {
              uVar1 = *(ushort *)(this + 0x24);
              uVar7 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
              cMyTrace::cMyTrace(local_3c,
                                 "int expert_job::CEnchanter::_DoEnchant(ENUM_TRY_ENCHANT_TYPE)",
                                 0x3d9,5);
              cMyTrace::operator()
                        (local_3c,
                         "CUser::compound_item, getCurCharacInvenW()->delete_item failed , %d %d",
                         uVar7,(uint)uVar1);
            }
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0xe);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,1);
            uVar2 = *(undefined2 *)(this + 0x24);
            pCVar6 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
            CInventory::MakeItemPacket(pCVar6,1,uVar2,local_48);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
            CUser::Send(*(CUser **)(this + 0x2c),local_48);
          }
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0xab);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(uint)local_25);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
          CUser::Send(*(CUser **)(this + 0x2c),local_48);
        }
        pcVar10 = (char *)CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
        pcVar11 = (char *)CUser::get_acc_name(*(CUser **)(this + 0x2c));
        cUserHistoryLog::EnchantItem
                  ((cUserHistoryLog *)(*(int *)(this + 0x2c) + 0x79700),local_1c,local_18,
                   *(int *)(local_24 + 0xd),local_25,pcVar11,pcVar10);
        iVar5 = 0;
      }
      else {
        iVar5 = 0x11;
      }
    }
    else {
      iVar5 = 0x11;
    }
  }
LAB_0849d330:
  PacketGuard::~PacketGuard(local_48);
  return iVar5;
}
```
