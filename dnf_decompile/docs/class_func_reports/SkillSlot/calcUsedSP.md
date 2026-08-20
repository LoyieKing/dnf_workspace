# calcUsedSP

`_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_`

`SkillSlot::calcUsedSP(_Mastered_skill const*, int&, int&) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086055ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086055ec  _ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_
#           SkillSlot::calcUsedSP(_Mastered_skill const*, int&, int&) const
# range [0x086055ec, 0x08605d25]
086055ec +0x000:  push   %ebp
086055ed +0x001:  mov    %esp,%ebp
086055ef +0x003:  push   %edi
086055f0 +0x004:  push   %esi
086055f1 +0x005:  push   %ebx
086055f2 +0x006:  sub    $0xbc,%esp
086055f8 +0x00c:  movl   $0x0,-0x44(%ebp)
086055ff +0x013:  movl   $0x0,-0x40(%ebp)
08605606 +0x01a:  movl   $0x0,-0x3c(%ebp)
0860560d +0x021:  mov    0x8(%ebp),%eax
08605610 +0x024:  mov    (%eax),%eax
08605612 +0x026:  mov    %eax,(%esp)
08605615 +0x029:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0860561a +0x02e:  test   %eax,%eax
0860561c +0x030:  setne  %al
0860561f +0x033:  test   %al,%al
08605621 +0x035:  je     08605644 <+0x58>
08605623 +0x037:  mov    0x8(%ebp),%eax
08605626 +0x03a:  mov    (%eax),%eax
08605628 +0x03c:  mov    %eax,(%esp)
0860562b +0x03f:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
08605630 +0x044:  mov    0x8(%ebp),%edx
08605633 +0x047:  mov    (%edx),%edx
08605635 +0x049:  mov    %eax,0x4(%esp)
08605639 +0x04d:  mov    %edx,(%esp)
0860563c +0x050:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
08605641 +0x055:  mov    %eax,-0x44(%ebp)
08605644 +0x058:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08605649 +0x05d:  mov    0x14(%eax),%ebx
0860564c +0x060:  mov    0x8(%ebp),%eax
0860564f +0x063:  mov    (%eax),%eax
08605651 +0x065:  mov    %eax,(%esp)
08605654 +0x068:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08605659 +0x06d:  imul   $0x7dc,%eax,%eax
0860565f +0x073:  add    $0x240,%eax
08605664 +0x078:  lea    (%ebx,%eax,1),%eax
08605667 +0x07b:  mov    %eax,0x4(%esp)
0860566b +0x07f:  lea    -0x70(%ebp),%eax
0860566e +0x082:  mov    %eax,(%esp)
08605671 +0x085:  call   08237302 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9ac
08605676 +0x08a:  lea    -0x7c(%ebp),%eax
08605679 +0x08d:  mov    %eax,(%esp)
0860567c +0x090:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08605681 +0x095:  movb   $0x1,-0x35(%ebp)
08605685 +0x099:  mov    0x8(%ebp),%eax
08605688 +0x09c:  mov    (%eax),%eax
0860568a +0x09e:  mov    %eax,(%esp)
0860568d +0x0a1:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08605692 +0x0a6:  test   %al,%al
08605694 +0x0a8:  sete   %al
08605697 +0x0ab:  test   %al,%al
08605699 +0x0ad:  je     086056fd <+0x111>
0860569b +0x0af:  mov    0x8(%ebp),%eax
0860569e +0x0b2:  mov    (%eax),%eax
086056a0 +0x0b4:  mov    %eax,(%esp)
086056a3 +0x0b7:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
086056a8 +0x0bc:  movsbl %al,%esi
086056ab +0x0bf:  mov    0x8(%ebp),%eax
086056ae +0x0c2:  mov    (%eax),%eax
086056b0 +0x0c4:  mov    %eax,(%esp)
086056b3 +0x0c7:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
086056b8 +0x0cc:  movsbl %al,%ebx
086056bb +0x0cf:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086056c0 +0x0d4:  mov    0x14(%eax),%edi
086056c3 +0x0d7:  mov    0x8(%ebp),%eax
086056c6 +0x0da:  mov    (%eax),%eax
086056c8 +0x0dc:  mov    %eax,(%esp)
086056cb +0x0df:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086056d0 +0x0e4:  imul   $0x7dc,%eax,%eax
086056d6 +0x0ea:  lea    (%edi,%eax,1),%edx
086056d9 +0x0ed:  movl   $0x1,0x10(%esp)
086056e1 +0x0f5:  lea    -0x7c(%ebp),%eax
086056e4 +0x0f8:  mov    %eax,0xc(%esp)
086056e8 +0x0fc:  mov    %esi,0x8(%esp)
086056ec +0x100:  mov    %ebx,0x4(%esp)
086056f0 +0x104:  mov    %edx,(%esp)
086056f3 +0x107:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
086056f8 +0x10c:  mov    %al,-0x35(%ebp)
086056fb +0x10f:  jmp    0860575d <+0x171>
086056fd +0x111:  mov    0x8(%ebp),%eax
08605700 +0x114:  mov    (%eax),%eax
08605702 +0x116:  mov    %eax,(%esp)
08605705 +0x119:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0860570a +0x11e:  movsbl %al,%esi
0860570d +0x121:  mov    0x8(%ebp),%eax
08605710 +0x124:  mov    (%eax),%eax
08605712 +0x126:  mov    %eax,(%esp)
08605715 +0x129:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0860571a +0x12e:  movsbl %al,%ebx
0860571d +0x131:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08605722 +0x136:  mov    0x14(%eax),%edi
08605725 +0x139:  mov    0x8(%ebp),%eax
08605728 +0x13c:  mov    (%eax),%eax
0860572a +0x13e:  mov    %eax,(%esp)
0860572d +0x141:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08605732 +0x146:  imul   $0x7dc,%eax,%eax
08605738 +0x14c:  lea    (%edi,%eax,1),%edx
0860573b +0x14f:  movl   $0x0,0x10(%esp)
08605743 +0x157:  lea    -0x7c(%ebp),%eax
08605746 +0x15a:  mov    %eax,0xc(%esp)
0860574a +0x15e:  mov    %esi,0x8(%esp)
0860574e +0x162:  mov    %ebx,0x4(%esp)
08605752 +0x166:  mov    %edx,(%esp)
08605755 +0x169:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
0860575a +0x16e:  mov    %al,-0x35(%ebp)
0860575d +0x171:  movzbl -0x35(%ebp),%eax
08605761 +0x175:  xor    $0x1,%eax
08605764 +0x178:  test   %al,%al
08605766 +0x17a:  je     08605772 <+0x186>
08605768 +0x17c:  mov    $0x0,%ebx
0860576d +0x181:  jmp    08605cec <+0x700>
08605772 +0x186:  lea    -0x64(%ebp),%eax
08605775 +0x189:  lea    -0x7c(%ebp),%edx
08605778 +0x18c:  mov    %edx,0x4(%esp)
0860577c +0x190:  mov    %eax,(%esp)
0860577f +0x193:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08605784 +0x198:  sub    $0x4,%esp
08605787 +0x19b:  lea    -0x64(%ebp),%eax
0860578a +0x19e:  mov    %eax,0x4(%esp)
0860578e +0x1a2:  lea    -0x80(%ebp),%eax
08605791 +0x1a5:  mov    %eax,(%esp)
08605794 +0x1a8:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
08605799 +0x1ad:  lea    -0x60(%ebp),%eax
0860579c +0x1b0:  lea    -0x7c(%ebp),%edx
0860579f +0x1b3:  mov    %edx,0x4(%esp)
086057a3 +0x1b7:  mov    %eax,(%esp)
086057a6 +0x1ba:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
086057ab +0x1bf:  sub    $0x4,%esp
086057ae +0x1c2:  lea    -0x60(%ebp),%eax
086057b1 +0x1c5:  mov    %eax,0x4(%esp)
086057b5 +0x1c9:  lea    -0x84(%ebp),%eax
086057bb +0x1cf:  mov    %eax,(%esp)
086057be +0x1d2:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
086057c3 +0x1d7:  jmp    086058fa <+0x30e>
086057c8 +0x1dc:  lea    -0x88(%ebp),%eax
086057ce +0x1e2:  lea    -0x70(%ebp),%edx
086057d1 +0x1e5:  mov    %edx,0x4(%esp)
086057d5 +0x1e9:  mov    %eax,(%esp)
086057d8 +0x1ec:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
086057dd +0x1f1:  sub    $0x4,%esp
086057e0 +0x1f4:  lea    -0x8c(%ebp),%eax
086057e6 +0x1fa:  lea    -0x70(%ebp),%edx
086057e9 +0x1fd:  mov    %edx,0x4(%esp)
086057ed +0x201:  mov    %eax,(%esp)
086057f0 +0x204:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
086057f5 +0x209:  sub    $0x4,%esp
086057f8 +0x20c:  jmp    08605870 <+0x284>
086057fa +0x20e:  lea    -0x88(%ebp),%eax
08605800 +0x214:  mov    %eax,(%esp)
08605803 +0x217:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08605808 +0x21c:  mov    (%eax),%ebx
0860580a +0x21e:  lea    -0x80(%ebp),%eax
0860580d +0x221:  mov    %eax,(%esp)
08605810 +0x224:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08605815 +0x229:  mov    (%eax),%eax
08605817 +0x22b:  cmp    %eax,%ebx
08605819 +0x22d:  sete   %al
0860581c +0x230:  test   %al,%al
0860581e +0x232:  je     08605862 <+0x276>
08605820 +0x234:  lea    -0x88(%ebp),%eax
08605826 +0x23a:  mov    %eax,(%esp)
08605829 +0x23d:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0860582e +0x242:  mov    %eax,%ebx
08605830 +0x244:  lea    -0x80(%ebp),%eax
08605833 +0x247:  mov    %eax,(%esp)
08605836 +0x24a:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0860583b +0x24f:  lea    0x4(%eax),%esi
0860583e +0x252:  lea    -0x88(%ebp),%eax
08605844 +0x258:  mov    %eax,(%esp)
08605847 +0x25b:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0860584c +0x260:  add    $0x4,%eax
0860584f +0x263:  mov    %esi,0x4(%esp)
08605853 +0x267:  mov    %eax,(%esp)
08605856 +0x26a:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0860585b +0x26f:  mov    (%eax),%eax
0860585d +0x271:  mov    %eax,0x4(%ebx)
08605860 +0x274:  jmp    08605890 <+0x2a4>
08605862 +0x276:  lea    -0x88(%ebp),%eax
08605868 +0x27c:  mov    %eax,(%esp)
0860586b +0x27f:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
08605870 +0x284:  lea    -0x8c(%ebp),%eax
08605876 +0x28a:  mov    %eax,0x4(%esp)
0860587a +0x28e:  lea    -0x88(%ebp),%eax
08605880 +0x294:  mov    %eax,(%esp)
08605883 +0x297:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
08605888 +0x29c:  test   %al,%al
0860588a +0x29e:  jne    086057fa <+0x20e>
08605890 +0x2a4:  lea    -0x8c(%ebp),%eax
08605896 +0x2aa:  mov    %eax,0x4(%esp)
0860589a +0x2ae:  lea    -0x88(%ebp),%eax
086058a0 +0x2b4:  mov    %eax,(%esp)
086058a3 +0x2b7:  call   081bab8c <_GLOBAL__I_correctQuestIds+0x34a>  ; global constructors keyed to correctQuestIds+0x34a
086058a8 +0x2bc:  test   %al,%al
086058aa +0x2be:  je     086058ef <+0x303>
086058ac +0x2c0:  lea    -0x80(%ebp),%eax
086058af +0x2c3:  mov    %eax,(%esp)
086058b2 +0x2c6:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
086058b7 +0x2cb:  lea    0x4(%eax),%ebx
086058ba +0x2ce:  lea    -0x80(%ebp),%eax
086058bd +0x2d1:  mov    %eax,(%esp)
086058c0 +0x2d4:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
086058c5 +0x2d9:  mov    %eax,%edx
086058c7 +0x2db:  lea    -0x5c(%ebp),%eax
086058ca +0x2de:  mov    %ebx,0x8(%esp)
086058ce +0x2e2:  mov    %edx,0x4(%esp)
086058d2 +0x2e6:  mov    %eax,(%esp)
086058d5 +0x2e9:  call   08609439 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x10c>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x10c
086058da +0x2ee:  sub    $0x4,%esp
086058dd +0x2f1:  lea    -0x5c(%ebp),%eax
086058e0 +0x2f4:  mov    %eax,0x4(%esp)
086058e4 +0x2f8:  lea    -0x70(%ebp),%eax
086058e7 +0x2fb:  mov    %eax,(%esp)
086058ea +0x2fe:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
086058ef +0x303:  lea    -0x80(%ebp),%eax
086058f2 +0x306:  mov    %eax,(%esp)
086058f5 +0x309:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
086058fa +0x30e:  lea    -0x84(%ebp),%eax
08605900 +0x314:  mov    %eax,0x4(%esp)
08605904 +0x318:  lea    -0x80(%ebp),%eax
08605907 +0x31b:  mov    %eax,(%esp)
0860590a +0x31e:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0860590f +0x323:  test   %al,%al
08605911 +0x325:  jne    086057c8 <+0x1dc>
08605917 +0x32b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0860591c +0x330:  mov    %eax,(%esp)
0860591f +0x333:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
08605924 +0x338:  test   %al,%al
08605926 +0x33a:  je     08605988 <+0x39c>
08605928 +0x33c:  lea    -0x70(%ebp),%eax
0860592b +0x33f:  mov    %eax,(%esp)
0860592e +0x342:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08605933 +0x347:  mov    0x8(%ebp),%eax
08605936 +0x34a:  mov    (%eax),%eax
08605938 +0x34c:  mov    %eax,(%esp)
0860593b +0x34f:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08605940 +0x354:  movsbl %al,%edi
08605943 +0x357:  mov    0x8(%ebp),%eax
08605946 +0x35a:  mov    (%eax),%eax
08605948 +0x35c:  mov    %eax,(%esp)
0860594b +0x35f:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08605950 +0x364:  movsbl %al,%esi
08605953 +0x367:  mov    0x8(%ebp),%eax
08605956 +0x36a:  mov    (%eax),%eax
08605958 +0x36c:  mov    %eax,(%esp)
0860595b +0x36f:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08605960 +0x374:  mov    %eax,%ebx
08605962 +0x376:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08605967 +0x37b:  lea    0xa800(%eax),%edx
0860596d +0x381:  lea    -0x70(%ebp),%eax
08605970 +0x384:  mov    %eax,0x10(%esp)
08605974 +0x388:  mov    %edi,0xc(%esp)
08605978 +0x38c:  mov    %esi,0x8(%esp)
0860597c +0x390:  mov    %ebx,0x4(%esp)
08605980 +0x394:  mov    %edx,(%esp)
08605983 +0x397:  call   08a5e178 <_ZNK27PvPSkillTreeParameterScript12getGiveSkillEiiiRSt6vectorISt4pairIiiESaIS2_EE>  ; PvPSkillTreeParameterScript::getGiveSkill(int, int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const
08605988 +0x39c:  movl   $0x0,-0x34(%ebp)
0860598f +0x3a3:  jmp    08605cbe <+0x6d2>
08605994 +0x3a8:  mov    -0x34(%ebp),%eax
08605997 +0x3ab:  add    %eax,%eax
08605999 +0x3ad:  add    0xc(%ebp),%eax
0860599c +0x3b0:  movzbl (%eax),%eax
0860599f +0x3b3:  test   %al,%al
086059a1 +0x3b5:  je     08605cb3 <+0x6c7>
086059a7 +0x3bb:  movl   $0x0,-0x30(%ebp)
086059ae +0x3c2:  mov    -0x34(%ebp),%eax
086059b1 +0x3c5:  add    %eax,%eax
086059b3 +0x3c7:  add    0xc(%ebp),%eax
086059b6 +0x3ca:  movzbl (%eax),%eax
086059b9 +0x3cd:  movzbl %al,%esi
086059bc +0x3d0:  mov    0x8(%ebp),%eax
086059bf +0x3d3:  mov    (%eax),%eax
086059c1 +0x3d5:  mov    %eax,(%esp)
086059c4 +0x3d8:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086059c9 +0x3dd:  mov    %eax,%ebx
086059cb +0x3df:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086059d0 +0x3e4:  mov    %esi,0x8(%esp)
086059d4 +0x3e8:  mov    %ebx,0x4(%esp)
086059d8 +0x3ec:  mov    %eax,(%esp)
086059db +0x3ef:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
086059e0 +0x3f4:  mov    %eax,-0x30(%ebp)
086059e3 +0x3f7:  cmpl   $0x0,-0x30(%ebp)
086059e7 +0x3fb:  jne    086059f3 <+0x407>
086059e9 +0x3fd:  mov    $0x0,%ebx
086059ee +0x402:  jmp    08605cec <+0x700>
086059f3 +0x407:  movb   $0x0,-0x29(%ebp)
086059f7 +0x40b:  mov    0x8(%ebp),%eax
086059fa +0x40e:  mov    (%eax),%eax
086059fc +0x410:  mov    %eax,(%esp)
086059ff +0x413:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08605a04 +0x418:  mov    %eax,-0x28(%ebp)
08605a07 +0x41b:  mov    0x8(%ebp),%eax
08605a0a +0x41e:  mov    (%eax),%eax
08605a0c +0x420:  mov    %eax,(%esp)
08605a0f +0x423:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08605a14 +0x428:  movsbl %al,%ebx
08605a17 +0x42b:  mov    0x8(%ebp),%eax
08605a1a +0x42e:  mov    (%eax),%eax
08605a1c +0x430:  mov    %eax,(%esp)
08605a1f +0x433:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08605a24 +0x438:  movsbl %al,%eax
08605a27 +0x43b:  mov    %ebx,0x8(%esp)
08605a2b +0x43f:  mov    %eax,0x4(%esp)
08605a2f +0x443:  mov    -0x30(%ebp),%eax
08605a32 +0x446:  mov    %eax,(%esp)
08605a35 +0x449:  call   083504ec <_ZNK6CSkill11IsStealableEii>  ; CSkill::IsStealable(int, int) const
08605a3a +0x44e:  test   %al,%al
08605a3c +0x450:  je     08605a50 <+0x464>
08605a3e +0x452:  movb   $0x1,-0x29(%ebp)
08605a42 +0x456:  mov    -0x30(%ebp),%eax
08605a45 +0x459:  mov    %eax,(%esp)
08605a48 +0x45c:  call   0860934a <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x1d>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x1d
08605a4d +0x461:  sub    %eax,-0x28(%ebp)
08605a50 +0x464:  mov    0x8(%ebp),%eax
08605a53 +0x467:  mov    (%eax),%eax
08605a55 +0x469:  mov    %eax,(%esp)
08605a58 +0x46c:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
08605a5d +0x471:  mov    %eax,(%esp)
08605a60 +0x474:  call   08609398 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x6b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x6b
08605a65 +0x479:  movzwl %ax,%eax
08605a68 +0x47c:  add    %eax,-0x28(%ebp)
08605a6b +0x47f:  movl   $0x0,-0x24(%ebp)
08605a72 +0x486:  lea    -0x54(%ebp),%eax
08605a75 +0x489:  lea    -0x70(%ebp),%edx
08605a78 +0x48c:  mov    %edx,0x4(%esp)
08605a7c +0x490:  mov    %eax,(%esp)
08605a7f +0x493:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08605a84 +0x498:  sub    $0x4,%esp
08605a87 +0x49b:  lea    -0x54(%ebp),%eax
08605a8a +0x49e:  mov    %eax,0x4(%esp)
08605a8e +0x4a2:  lea    -0x98(%ebp),%eax
08605a94 +0x4a8:  mov    %eax,(%esp)
08605a97 +0x4ab:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
08605a9c +0x4b0:  lea    -0x50(%ebp),%eax
08605a9f +0x4b3:  lea    -0x70(%ebp),%edx
08605aa2 +0x4b6:  mov    %edx,0x4(%esp)
08605aa6 +0x4ba:  mov    %eax,(%esp)
08605aa9 +0x4bd:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08605aae +0x4c2:  sub    $0x4,%esp
08605ab1 +0x4c5:  lea    -0x50(%ebp),%eax
08605ab4 +0x4c8:  mov    %eax,0x4(%esp)
08605ab8 +0x4cc:  lea    -0x9c(%ebp),%eax
08605abe +0x4d2:  mov    %eax,(%esp)
08605ac1 +0x4d5:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
08605ac6 +0x4da:  jmp    08605b13 <+0x527>
08605ac8 +0x4dc:  lea    -0x98(%ebp),%eax
08605ace +0x4e2:  mov    %eax,(%esp)
08605ad1 +0x4e5:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08605ad6 +0x4ea:  mov    (%eax),%edx
08605ad8 +0x4ec:  mov    -0x34(%ebp),%eax
08605adb +0x4ef:  add    %eax,%eax
08605add +0x4f1:  add    0xc(%ebp),%eax
08605ae0 +0x4f4:  movzbl (%eax),%eax
08605ae3 +0x4f7:  movzbl %al,%eax
08605ae6 +0x4fa:  cmp    %eax,%edx
08605ae8 +0x4fc:  sete   %al
08605aeb +0x4ff:  test   %al,%al
08605aed +0x501:  je     08605b05 <+0x519>
08605aef +0x503:  lea    -0x98(%ebp),%eax
08605af5 +0x509:  mov    %eax,(%esp)
08605af8 +0x50c:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08605afd +0x511:  mov    0x4(%eax),%eax
08605b00 +0x514:  mov    %eax,-0x24(%ebp)
08605b03 +0x517:  jmp    08605b2f <+0x543>
08605b05 +0x519:  lea    -0x98(%ebp),%eax
08605b0b +0x51f:  mov    %eax,(%esp)
08605b0e +0x522:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
08605b13 +0x527:  lea    -0x9c(%ebp),%eax
08605b19 +0x52d:  mov    %eax,0x4(%esp)
08605b1d +0x531:  lea    -0x98(%ebp),%eax
08605b23 +0x537:  mov    %eax,(%esp)
08605b26 +0x53a:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08605b2b +0x53f:  test   %al,%al
08605b2d +0x541:  jne    08605ac8 <+0x4dc>
08605b2f +0x543:  movl   $0x0,-0x20(%ebp)
08605b36 +0x54a:  cmpl   $0x0,-0x24(%ebp)
08605b3a +0x54e:  je     08605b67 <+0x57b>
08605b3c +0x550:  mov    -0x20(%ebp),%eax
08605b3f +0x553:  cmp    -0x24(%ebp),%eax
08605b42 +0x556:  jle    08605b49 <+0x55d>
08605b44 +0x558:  mov    -0x20(%ebp),%eax
08605b47 +0x55b:  jmp    08605b4c <+0x560>
08605b49 +0x55d:  mov    -0x24(%ebp),%eax
08605b4c +0x560:  mov    %eax,-0x20(%ebp)
08605b4f +0x563:  mov    -0x34(%ebp),%eax
08605b52 +0x566:  add    %eax,%eax
08605b54 +0x568:  add    0xc(%ebp),%eax
08605b57 +0x56b:  movzbl 0x1(%eax),%eax
08605b5b +0x56f:  movsbl %al,%eax
08605b5e +0x572:  cmp    -0x20(%ebp),%eax
08605b61 +0x575:  jle    08605cb6 <+0x6ca>
08605b67 +0x57b:  cmpl   $0x0,-0x3c(%ebp)
08605b6b +0x57f:  je     08605c36 <+0x64a>
08605b71 +0x585:  movb   $0x0,-0x19(%ebp)
08605b75 +0x589:  mov    -0x3c(%ebp),%eax
08605b78 +0x58c:  lea    0xc(%eax),%edx
08605b7b +0x58f:  lea    -0x4c(%ebp),%eax
08605b7e +0x592:  mov    %edx,0x4(%esp)
08605b82 +0x596:  mov    %eax,(%esp)
08605b85 +0x599:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08605b8a +0x59e:  sub    $0x4,%esp
08605b8d +0x5a1:  lea    -0x4c(%ebp),%eax
08605b90 +0x5a4:  mov    %eax,0x4(%esp)
08605b94 +0x5a8:  lea    -0xa0(%ebp),%eax
08605b9a +0x5ae:  mov    %eax,(%esp)
08605b9d +0x5b1:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
08605ba2 +0x5b6:  jmp    08605bf7 <+0x60b>
08605ba4 +0x5b8:  lea    -0xa0(%ebp),%eax
08605baa +0x5be:  mov    %eax,(%esp)
08605bad +0x5c1:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08605bb2 +0x5c6:  mov    (%eax),%edx
08605bb4 +0x5c8:  mov    -0x34(%ebp),%eax
08605bb7 +0x5cb:  add    %eax,%eax
08605bb9 +0x5cd:  add    0xc(%ebp),%eax
08605bbc +0x5d0:  movzbl (%eax),%eax
08605bbf +0x5d3:  movzbl %al,%eax
08605bc2 +0x5d6:  cmp    %eax,%edx
08605bc4 +0x5d8:  sete   %al
08605bc7 +0x5db:  test   %al,%al
08605bc9 +0x5dd:  je     08605be9 <+0x5fd>
08605bcb +0x5df:  mov    -0x34(%ebp),%eax
08605bce +0x5e2:  add    %eax,%eax
08605bd0 +0x5e4:  add    0xc(%ebp),%eax
08605bd3 +0x5e7:  movzbl 0x1(%eax),%eax
08605bd7 +0x5eb:  movsbl %al,%eax
08605bda +0x5ee:  cmp    -0x44(%ebp),%eax
08605bdd +0x5f1:  jne    08605be3 <+0x5f7>
08605bdf +0x5f3:  addl   $0x1,-0x40(%ebp)
08605be3 +0x5f7:  movb   $0x1,-0x19(%ebp)
08605be7 +0x5fb:  jmp    08605c2c <+0x640>
08605be9 +0x5fd:  lea    -0xa0(%ebp),%eax
08605bef +0x603:  mov    %eax,(%esp)
08605bf2 +0x606:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
08605bf7 +0x60b:  mov    -0x3c(%ebp),%eax
08605bfa +0x60e:  lea    0xc(%eax),%edx
08605bfd +0x611:  lea    -0x48(%ebp),%eax
08605c00 +0x614:  mov    %edx,0x4(%esp)
08605c04 +0x618:  mov    %eax,(%esp)
08605c07 +0x61b:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08605c0c +0x620:  sub    $0x4,%esp
08605c0f +0x623:  lea    -0x48(%ebp),%eax
08605c12 +0x626:  mov    %eax,0x4(%esp)
08605c16 +0x62a:  lea    -0xa0(%ebp),%eax
08605c1c +0x630:  mov    %eax,(%esp)
08605c1f +0x633:  call   0838793c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173dc
08605c24 +0x638:  test   %al,%al
08605c26 +0x63a:  jne    08605ba4 <+0x5b8>
08605c2c +0x640:  cmpb   $0x0,-0x19(%ebp)
08605c30 +0x644:  jne    08605cb9 <+0x6cd>
08605c36 +0x64a:  movl   $0x0,-0x90(%ebp)
08605c40 +0x654:  movl   $0x0,-0x94(%ebp)
08605c4a +0x65e:  movzbl -0x29(%ebp),%eax
08605c4e +0x662:  mov    %eax,0x1c(%esp)
08605c52 +0x666:  mov    -0x30(%ebp),%eax
08605c55 +0x669:  mov    %eax,0x18(%esp)
08605c59 +0x66d:  mov    -0x34(%ebp),%eax
08605c5c +0x670:  mov    %eax,0x14(%esp)
08605c60 +0x674:  mov    0xc(%ebp),%eax
08605c63 +0x677:  mov    %eax,0x10(%esp)
08605c67 +0x67b:  mov    -0x20(%ebp),%eax
08605c6a +0x67e:  mov    %eax,0xc(%esp)
08605c6e +0x682:  lea    -0x94(%ebp),%eax
08605c74 +0x688:  mov    %eax,0x8(%esp)
08605c78 +0x68c:  lea    -0x90(%ebp),%eax
08605c7e +0x692:  mov    %eax,0x4(%esp)
08605c82 +0x696:  mov    0x8(%ebp),%eax
08605c85 +0x699:  mov    %eax,(%esp)
08605c88 +0x69c:  call   0860658e <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb>  ; SkillSlot::calcReturnSpSfpPerOneSkill(int&, int&, int, _Mastered_skill const*, int, CSkill const*, bool) const
08605c8d +0x6a1:  mov    0x10(%ebp),%eax
08605c90 +0x6a4:  mov    (%eax),%edx
08605c92 +0x6a6:  mov    -0x90(%ebp),%eax
08605c98 +0x6ac:  add    %eax,%edx
08605c9a +0x6ae:  mov    0x10(%ebp),%eax
08605c9d +0x6b1:  mov    %edx,(%eax)
08605c9f +0x6b3:  mov    0x14(%ebp),%eax
08605ca2 +0x6b6:  mov    (%eax),%edx
08605ca4 +0x6b8:  mov    -0x94(%ebp),%eax
08605caa +0x6be:  add    %eax,%edx
08605cac +0x6c0:  mov    0x14(%ebp),%eax
08605caf +0x6c3:  mov    %edx,(%eax)
08605cb1 +0x6c5:  jmp    08605cba <+0x6ce>
08605cb3 +0x6c7:  nop
08605cb4 +0x6c8:  jmp    08605cba <+0x6ce>
08605cb6 +0x6ca:  nop
08605cb7 +0x6cb:  jmp    08605cba <+0x6ce>
08605cb9 +0x6cd:  nop
08605cba +0x6ce:  addl   $0x1,-0x34(%ebp)
08605cbe +0x6d2:  cmpl   $0xcb,-0x34(%ebp)
08605cc5 +0x6d9:  setle  %al
08605cc8 +0x6dc:  test   %al,%al
08605cca +0x6de:  jne    08605994 <+0x3a8>
08605cd0 +0x6e4:  mov    $0x1,%ebx
08605cd5 +0x6e9:  jmp    08605cec <+0x700>
08605cd7 +0x6eb:  mov    %edx,%ebx
08605cd9 +0x6ed:  mov    %eax,%esi
08605cdb +0x6ef:  lea    -0x7c(%ebp),%eax
08605cde +0x6f2:  mov    %eax,(%esp)
08605ce1 +0x6f5:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08605ce6 +0x6fa:  mov    %esi,%eax
08605ce8 +0x6fc:  mov    %ebx,%edx
08605cea +0x6fe:  jmp    08605d0f <+0x723>
08605cec +0x700:  lea    -0x7c(%ebp),%eax
08605cef +0x703:  mov    %eax,(%esp)
08605cf2 +0x706:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08605cf7 +0x70b:  test   %ebx,%ebx
08605cf9 +0x70d:  lea    -0x70(%ebp),%eax
08605cfc +0x710:  mov    %eax,(%esp)
08605cff +0x713:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08605d04 +0x718:  lea    -0xc(%ebp),%esp
08605d07 +0x71b:  add    $0x0,%esp
08605d0a +0x71e:  pop    %ebx
08605d0b +0x71f:  pop    %esi
08605d0c +0x720:  pop    %edi
08605d0d +0x721:  pop    %ebp
08605d0e +0x722:  ret
08605d0f +0x723:  mov    %edx,%ebx
08605d11 +0x725:  mov    %eax,%esi
08605d13 +0x727:  lea    -0x70(%ebp),%eax
08605d16 +0x72a:  mov    %eax,(%esp)
08605d19 +0x72d:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08605d1e +0x732:  mov    %esi,%eax
08605d20 +0x734:  mov    %ebx,%edx
08605d22 +0x736:  mov    %eax,(%esp)
08605d25 +0x739:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// SkillSlot::calcUsedSP @ 0x86055ec

/* SkillSlot::calcUsedSP(_Mastered_skill const*, int&, int&) const */

void __thiscall
SkillSlot::calcUsedSP(SkillSlot *this,_Mastered_skill *param_1,int *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  GameWorld *this_00;
  CUserPremium *this_01;
  uint uVar8;
  uint *puVar9;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_a4 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_a0 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_9c [4];
  int local_98;
  int local_94;
  __normal_iterator local_90 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_8c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_88 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_84 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_80 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_74 [12];
  __normal_iterator local_68 [4];
  __normal_iterator local_64 [4];
  int local_60 [2];
  __normal_iterator local_58 [4];
  __normal_iterator local_54 [4];
  __normal_iterator local_50 [4];
  __normal_iterator local_4c [4];
  int local_48;
  int local_44;
  int local_40;
  char local_39;
  int local_38;
  CSkill *local_34;
  bool local_2d;
  int local_2c;
  int local_28;
  int local_24;
  char local_1d;
  
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  iVar4 = CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
  if (iVar4 != 0) {
    iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp(*(CUserCharacInfo **)this);
    local_48 = CUser::GetCurExpertJobLevel(*(CUser **)this,iVar4);
  }
  iVar4 = G_CDataManager();
  iVar4 = *(int *)(iVar4 + 0x14);
  iVar5 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (local_74,(vector *)(iVar4 + iVar5 * 0x7dc + 0x240));
                    /* try { // try from 0860567c to 08605680 has its CatchHandler @ 08605d0f */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_80);
  local_39 = 1;
  cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
  if (cVar1 == '\0') {
    cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
                    /* try { // try from 086056bb to 08605c8c has its CatchHandler @ 08605cd7 */
    iVar4 = G_CDataManager();
    iVar4 = *(int *)(iVar4 + 0x14);
    iVar5 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    local_39 = CCharacter::get_give_skill
                         ((CCharacter *)(iVar4 + iVar5 * 0x7dc),(int)cVar2,(int)cVar1,
                          (vector *)local_80,1);
  }
  else {
    cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
    iVar4 = G_CDataManager();
    iVar4 = *(int *)(iVar4 + 0x14);
    iVar5 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    local_39 = CCharacter::get_give_skill
                         ((CCharacter *)(iVar4 + iVar5 * 0x7dc),(int)cVar2,(int)cVar1,
                          (vector *)local_80,0);
  }
  if (local_39 == '\x01') {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator<std::pair<int,int>*>(local_84,local_68);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator<std::pair<int,int>*>(local_88,local_64);
    while (bVar3 = __gnu_cxx::operator!=(local_84,local_88), bVar3) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      while (bVar3 = __gnu_cxx::operator!=(local_8c,local_90), bVar3) {
        piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_8c);
        iVar4 = *piVar7;
        piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_84);
        if (iVar4 == *piVar7) {
          iVar4 = __gnu_cxx::
                  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator->(local_8c);
          iVar5 = __gnu_cxx::
                  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator->(local_84);
          iVar6 = __gnu_cxx::
                  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator->(local_8c);
          piVar7 = std::max<int>((int *)(iVar6 + 4),(int *)(iVar5 + 4));
          *(int *)(iVar4 + 4) = *piVar7;
          break;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_8c);
      }
      bVar3 = __gnu_cxx::operator==(local_8c,local_90);
      if (bVar3) {
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator->(local_84);
        piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_84);
        std::make_pair<int_const&,int_const&>(local_60,piVar7);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  (local_74,(pair *)local_60);
      }
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_84);
    }
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
    if (cVar1 != '\0') {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_74);
      cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
      cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
      iVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
      iVar5 = G_CDataManager();
      PvPSkillTreeParameterScript::getGiveSkill
                ((PvPSkillTreeParameterScript *)(iVar5 + 0xa800),iVar4,(int)cVar2,(int)cVar1,
                 (vector *)local_74);
    }
    for (local_38 = 0; local_38 < 0xcc; local_38 = local_38 + 1) {
      if (param_1[local_38 * 2] != (_Mastered_skill)0x0) {
        local_34 = (CSkill *)0x0;
        iVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
        iVar5 = G_CDataManager();
        local_34 = (CSkill *)CDataManager::find_skill(iVar5,iVar4);
        if (local_34 == (CSkill *)0x0) break;
        local_2d = false;
        local_2c = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
        cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
        cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
        cVar1 = CSkill::IsStealable(local_34,(int)cVar2,(int)cVar1);
        if (cVar1 != '\0') {
          local_2d = true;
          iVar4 = CSkill::GetStealLevelPenalty(local_34);
          local_2c = local_2c - iVar4;
        }
        this_01 = (CUserPremium *)CUser::GetPremiumInfo(*(CUser **)this);
        uVar8 = WongWork::CUserPremium::getOverSkillLevel(this_01);
        local_2c = local_2c + (uVar8 & 0xffff);
        local_28 = 0;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::__normal_iterator<std::pair<int,int>*>(local_9c,local_58);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::__normal_iterator<std::pair<int,int>*>(local_a0,local_54);
        while (bVar3 = __gnu_cxx::operator!=(local_9c,local_a0), bVar3) {
          puVar9 = (uint *)__gnu_cxx::
                           __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                           ::operator->(local_9c);
          if (*puVar9 == (uint)(byte)param_1[local_38 * 2]) {
            iVar4 = __gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_9c);
            local_28 = *(int *)(iVar4 + 4);
            break;
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_9c);
        }
        local_24 = 0;
        if (local_28 != 0) {
          local_24 = local_28;
          if (local_28 < 0) {
            local_24 = 0;
          }
          if ((char)param_1[local_38 * 2 + 1] <= local_24) goto LAB_08605cba;
        }
        if (local_40 != 0) {
          local_1d = '\0';
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::__normal_iterator<std::pair<int,int>*>(local_a4,local_50);
          while( true ) {
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
            bVar3 = __gnu_cxx::operator!=(local_a4,local_4c);
            if (!bVar3) break;
            puVar9 = (uint *)__gnu_cxx::
                             __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                             ::operator->(local_a4);
            if (*puVar9 == (uint)(byte)param_1[local_38 * 2]) {
              if ((char)param_1[local_38 * 2 + 1] == local_48) {
                local_44 = local_44 + 1;
              }
              local_1d = '\x01';
              break;
            }
            __gnu_cxx::
            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator++(local_a4);
          }
          if (local_1d != '\0') goto LAB_08605cba;
        }
        local_94 = 0;
        local_98 = 0;
        calcReturnSpSfpPerOneSkill
                  (this,&local_94,&local_98,local_24,param_1,local_38,local_34,local_2d);
        *param_2 = *param_2 + local_94;
        *param_3 = *param_3 + local_98;
      }
LAB_08605cba:
    }
  }
                    /* try { // try from 08605cf2 to 08605cf6 has its CatchHandler @ 08605d0f */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_80);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_74);
  return;
}
```
