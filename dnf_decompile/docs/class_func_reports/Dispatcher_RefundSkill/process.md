# process

`_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RefundSkill::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RefundSkill` | `0x081da820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081da820  _ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RefundSkill::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081da820, 0x081dad1b]
081da820 +0x000:  push   %ebp
081da821 +0x001:  mov    %esp,%ebp
081da823 +0x003:  push   %edi
081da824 +0x004:  push   %esi
081da825 +0x005:  push   %ebx
081da826 +0x006:  sub    $0xc9ac,%esp
081da82c +0x00c:  mov    0x14(%ebp),%eax
081da82f +0x00f:  mov    %eax,-0x2c(%ebp)
081da832 +0x012:  mov    0x10(%ebp),%eax
081da835 +0x015:  mov    %eax,0x8(%esp)
081da839 +0x019:  mov    0xc(%ebp),%eax
081da83c +0x01c:  mov    %eax,0x4(%esp)
081da840 +0x020:  mov    0x8(%ebp),%eax
081da843 +0x023:  mov    %eax,(%esp)
081da846 +0x026:  call   081dad1c <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_RefundSkill::check_error(CUser*, MSG_BASE&)
081da84b +0x02b:  mov    -0x2c(%ebp),%edx
081da84e +0x02e:  mov    %eax,0x18(%edx)
081da851 +0x031:  mov    -0x2c(%ebp),%eax
081da854 +0x034:  mov    0x18(%eax),%eax
081da857 +0x037:  test   %eax,%eax
081da859 +0x039:  jle    081da865 <+0x45>
081da85b +0x03b:  mov    $0x0,%ebx
081da860 +0x040:  jmp    081dad0e <+0x4ee>
081da865 +0x045:  mov    -0x2c(%ebp),%eax
081da868 +0x048:  mov    0x18(%eax),%eax
081da86b +0x04b:  test   %eax,%eax
081da86d +0x04d:  jns    081da89c <+0x7c>
081da86f +0x04f:  mov    -0x2c(%ebp),%eax
081da872 +0x052:  mov    0x18(%eax),%eax
081da875 +0x055:  movl   $0x0,0xc(%esp)
081da87d +0x05d:  mov    %eax,0x8(%esp)
081da881 +0x061:  movl   $&_ZZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081da889 +0x069:  movl   $0x48fa,(%esp)
081da890 +0x070:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da895 +0x075:  mov    %eax,%ebx
081da897 +0x077:  jmp    081dad0e <+0x4ee>
081da89c +0x07c:  mov    0x10(%ebp),%eax
081da89f +0x07f:  mov    %eax,-0x28(%ebp)
081da8a2 +0x082:  lea    -0x85(%ebp),%eax
081da8a8 +0x088:  mov    %eax,(%esp)
081da8ab +0x08b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081da8b0 +0x090:  lea    -0x85(%ebp),%eax
081da8b6 +0x096:  mov    %eax,(%esp)
081da8b9 +0x099:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
081da8be +0x09e:  mov    -0x28(%ebp),%eax
081da8c1 +0x0a1:  mov    0xd(%eax),%ebx
081da8c4 +0x0a4:  mov    0xc(%ebp),%eax
081da8c7 +0x0a7:  mov    %eax,(%esp)
081da8ca +0x0aa:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
081da8cf +0x0af:  lea    -0x85(%ebp),%edx
081da8d5 +0x0b5:  mov    %edx,0x8(%esp)
081da8d9 +0x0b9:  mov    %ebx,0x4(%esp)
081da8dd +0x0bd:  mov    %eax,(%esp)
081da8e0 +0x0c0:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
081da8e5 +0x0c5:  mov    %eax,-0x24(%ebp)
081da8e8 +0x0c8:  mov    -0x83(%ebp),%edx
081da8ee +0x0ce:  mov    -0x28(%ebp),%eax
081da8f1 +0x0d1:  mov    0xd(%eax),%eax
081da8f4 +0x0d4:  cmp    %eax,%edx
081da8f6 +0x0d6:  jne    081da90f <+0xef>
081da8f8 +0x0d8:  mov    -0x7e(%ebp),%edx
081da8fb +0x0db:  mov    -0x28(%ebp),%eax
081da8fe +0x0de:  movzbl 0x13(%eax),%eax
081da902 +0x0e2:  movzbl %al,%eax
081da905 +0x0e5:  cmp    %eax,%edx
081da907 +0x0e7:  jl     081da90f <+0xef>
081da909 +0x0e9:  cmpl   $0x0,-0x24(%ebp)
081da90d +0x0ed:  jns    081da923 <+0x103>
081da90f +0x0ef:  mov    -0x2c(%ebp),%eax
081da912 +0x0f2:  movl   $0x16,0x18(%eax)
081da919 +0x0f9:  mov    $0x0,%ebx
081da91e +0x0fe:  jmp    081dad0e <+0x4ee>
081da923 +0x103:  lea    -0x48(%ebp),%eax
081da926 +0x106:  mov    %eax,(%esp)
081da929 +0x109:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
081da92e +0x10e:  lea    -0x48(%ebp),%eax
081da931 +0x111:  mov    %eax,(%esp)
081da934 +0x114:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
081da939 +0x119:  lea    -0x840(%ebp),%eax
081da93f +0x11f:  mov    %eax,(%esp)
081da942 +0x122:  call   0822d52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2bd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2bd6
081da947 +0x127:  lea    -0xc97f(%ebp),%eax
081da94d +0x12d:  mov    %eax,(%esp)
081da950 +0x130:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
081da955 +0x135:  lea    -0xc97f(%ebp),%eax
081da95b +0x13b:  mov    %eax,0x4(%esp)
081da95f +0x13f:  lea    -0x840(%ebp),%eax
081da965 +0x145:  mov    %eax,(%esp)
081da968 +0x148:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
081da96d +0x14d:  mov    0xc(%ebp),%eax
081da970 +0x150:  mov    %eax,(%esp)
081da973 +0x153:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
081da978 +0x158:  mov    %eax,0x4(%esp)
081da97c +0x15c:  lea    -0x840(%ebp),%eax
081da982 +0x162:  mov    %eax,(%esp)
081da985 +0x165:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
081da98a +0x16a:  mov    -0x28(%ebp),%eax
081da98d +0x16d:  movzbl 0x13(%eax),%eax
081da991 +0x171:  movzbl %al,%eax
081da994 +0x174:  movl   $0x0,0x14(%esp)
081da99c +0x17c:  movl   $0x3,0x10(%esp)
081da9a4 +0x184:  mov    %eax,0xc(%esp)
081da9a8 +0x188:  mov    -0x24(%ebp),%eax
081da9ab +0x18b:  mov    %eax,0x8(%esp)
081da9af +0x18f:  movl   $0x1,0x4(%esp)
081da9b7 +0x197:  lea    -0x840(%ebp),%eax
081da9bd +0x19d:  mov    %eax,(%esp)
081da9c0 +0x1a0:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081da9c5 +0x1a5:  mov    %al,-0x1d(%ebp)
081da9c8 +0x1a8:  movzbl -0x1d(%ebp),%eax
081da9cc +0x1ac:  xor    $0x1,%eax
081da9cf +0x1af:  test   %al,%al
081da9d1 +0x1b1:  je     081da9e7 <+0x1c7>
081da9d3 +0x1b3:  mov    -0x2c(%ebp),%eax
081da9d6 +0x1b6:  movl   $0x16,0x18(%eax)
081da9dd +0x1bd:  mov    $0x0,%ebx
081da9e2 +0x1c2:  jmp    081dacd8 <+0x4b8>
081da9e7 +0x1c7:  mov    -0x2c(%ebp),%eax
081da9ea +0x1ca:  add    $0x18,%eax
081da9ed +0x1cd:  mov    %eax,-0xc998(%ebp)
081da9f3 +0x1d3:  mov    -0x28(%ebp),%eax
081da9f6 +0x1d6:  movzbl 0x13(%eax),%eax
081da9fa +0x1da:  movzbl %al,%eax
081da9fd +0x1dd:  mov    %eax,-0xc994(%ebp)
081daa03 +0x1e3:  mov    0xc(%ebp),%eax
081daa06 +0x1e6:  mov    %eax,(%esp)
081daa09 +0x1e9:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
081daa0e +0x1ee:  movsbl %al,%eax
081daa11 +0x1f1:  mov    %eax,-0xc990(%ebp)
081daa17 +0x1f7:  mov    0xc(%ebp),%eax
081daa1a +0x1fa:  mov    %eax,(%esp)
081daa1d +0x1fd:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
081daa22 +0x202:  movsbl %al,%eax
081daa25 +0x205:  mov    %eax,-0xc98c(%ebp)
081daa2b +0x20b:  mov    0xc(%ebp),%eax
081daa2e +0x20e:  mov    %eax,(%esp)
081daa31 +0x211:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081daa36 +0x216:  mov    %eax,%edi
081daa38 +0x218:  mov    0xc(%ebp),%eax
081daa3b +0x21b:  mov    %eax,(%esp)
081daa3e +0x21e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081daa43 +0x223:  mov    %eax,%esi
081daa45 +0x225:  mov    -0x28(%ebp),%eax
081daa48 +0x228:  movzbl 0x12(%eax),%eax
081daa4c +0x22c:  movzbl %al,%ebx
081daa4f +0x22f:  mov    0xc(%ebp),%eax
081daa52 +0x232:  mov    %eax,(%esp)
081daa55 +0x235:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
081daa5a +0x23a:  mov    -0xc998(%ebp),%edx
081daa60 +0x240:  mov    %edx,0x1c(%esp)
081daa64 +0x244:  mov    -0xc994(%ebp),%edx
081daa6a +0x24a:  mov    %edx,0x18(%esp)
081daa6e +0x24e:  mov    -0xc990(%ebp),%edx
081daa74 +0x254:  mov    %edx,0x14(%esp)
081daa78 +0x258:  mov    -0xc98c(%ebp),%edx
081daa7e +0x25e:  mov    %edx,0x10(%esp)
081daa82 +0x262:  mov    %edi,0xc(%esp)
081daa86 +0x266:  mov    %esi,0x8(%esp)
081daa8a +0x26a:  mov    %ebx,0x4(%esp)
081daa8e +0x26e:  mov    %eax,(%esp)
081daa91 +0x271:  call   086069ba <_ZN9SkillSlot12refund_skillEiiiiiiRi>  ; SkillSlot::refund_skill(int, int, int, int, int, int, int&)
081daa96 +0x276:  mov    -0x2c(%ebp),%edx
081daa99 +0x279:  mov    %eax,0x8(%edx)
081daa9c +0x27c:  mov    -0x2c(%ebp),%eax
081daa9f +0x27f:  mov    0x8(%eax),%eax
081daaa2 +0x282:  cmp    $0xcc,%eax
081daaa7 +0x287:  jle    081daab3 <+0x293>
081daaa9 +0x289:  mov    $0x0,%ebx
081daaae +0x28e:  jmp    081dacd8 <+0x4b8>
081daab3 +0x293:  mov    -0x2c(%ebp),%eax
081daab6 +0x296:  mov    0x8(%eax),%eax
081daab9 +0x299:  test   %eax,%eax
081daabb +0x29b:  js     081dacb9 <+0x499>
081daac1 +0x2a1:  mov    -0x28(%ebp),%eax
081daac4 +0x2a4:  movzbl 0x13(%eax),%eax
081daac8 +0x2a8:  movzbl %al,%edx
081daacb +0x2ab:  mov    -0x28(%ebp),%eax
081daace +0x2ae:  mov    0xd(%eax),%eax
081daad1 +0x2b1:  movl   $0x3,0x14(%esp)
081daad9 +0x2b9:  mov    %edx,0x10(%esp)
081daadd +0x2bd:  mov    %eax,0xc(%esp)
081daae1 +0x2c1:  mov    -0x24(%ebp),%eax
081daae4 +0x2c4:  mov    %eax,0x8(%esp)
081daae8 +0x2c8:  movl   $0x0,0x4(%esp)
081daaf0 +0x2d0:  mov    0xc(%ebp),%eax
081daaf3 +0x2d3:  mov    %eax,(%esp)
081daaf6 +0x2d6:  call   0866285c <_ZN5CUser11delete_itemEcimi14eItemDelReason>  ; CUser::delete_item(char, int, unsigned long, int, eItemDelReason)
081daafb +0x2db:  test   %eax,%eax
081daafd +0x2dd:  setne  %al
081dab00 +0x2e0:  test   %al,%al
081dab02 +0x2e2:  je     081dab52 <+0x332>
081dab04 +0x2e4:  mov    -0x28(%ebp),%eax
081dab07 +0x2e7:  movzbl 0x13(%eax),%eax
081dab0b +0x2eb:  movzbl %al,%esi
081dab0e +0x2ee:  mov    -0x28(%ebp),%eax
081dab11 +0x2f1:  mov    0xd(%eax),%ebx
081dab14 +0x2f4:  movl   $0x5,0xc(%esp)
081dab1c +0x2fc:  movl   $0x4932,0x8(%esp)
081dab24 +0x304:  movl   $&_ZZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081dab2c +0x30c:  lea    -0x3c(%ebp),%eax
081dab2f +0x30f:  mov    %eax,(%esp)
081dab32 +0x312:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081dab37 +0x317:  mov    %esi,0xc(%esp)
081dab3b +0x31b:  mov    %ebx,0x8(%esp)
081dab3f +0x31f:  movl   $"delete_item failed - refund skill %d/%d",0x4(%esp)
081dab47 +0x327:  lea    -0x3c(%ebp),%eax
081dab4a +0x32a:  mov    %eax,(%esp)
081dab4d +0x32d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081dab52 +0x332:  mov    -0x2c(%ebp),%eax
081dab55 +0x335:  movb   $0x0,0x5(%eax)
081dab59 +0x339:  movl   $0x0,-0x1c(%ebp)
081dab60 +0x340:  mov    -0x28(%ebp),%eax
081dab63 +0x343:  movzbl 0x12(%eax),%eax
081dab67 +0x347:  movzbl %al,%esi
081dab6a +0x34a:  mov    0xc(%ebp),%eax
081dab6d +0x34d:  mov    %eax,(%esp)
081dab70 +0x350:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081dab75 +0x355:  mov    %eax,%ebx
081dab77 +0x357:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081dab7c +0x35c:  mov    %esi,0x8(%esp)
081dab80 +0x360:  mov    %ebx,0x4(%esp)
081dab84 +0x364:  mov    %eax,(%esp)
081dab87 +0x367:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
081dab8c +0x36c:  mov    %eax,-0x1c(%ebp)
081dab8f +0x36f:  cmpl   $0x0,-0x1c(%ebp)
081dab93 +0x373:  je     081dabab <+0x38b>
081dab95 +0x375:  mov    -0x1c(%ebp),%eax
081dab98 +0x378:  mov    %eax,(%esp)
081dab9b +0x37b:  call   0822b5b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc5c
081daba0 +0x380:  test   %al,%al
081daba2 +0x382:  je     081dabab <+0x38b>
081daba4 +0x384:  mov    -0x2c(%ebp),%eax
081daba7 +0x387:  movb   $0x1,0x5(%eax)
081dabab +0x38b:  mov    0xc(%ebp),%eax
081dabae +0x38e:  mov    %eax,(%esp)
081dabb1 +0x391:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081dabb6 +0x396:  mov    %eax,%edx
081dabb8 +0x398:  mov    -0x2c(%ebp),%eax
081dabbb +0x39b:  mov    %dl,0x4(%eax)
081dabbe +0x39e:  mov    -0x28(%ebp),%eax
081dabc1 +0x3a1:  movzbl 0x12(%eax),%edx
081dabc5 +0x3a5:  mov    -0x2c(%ebp),%eax
081dabc8 +0x3a8:  mov    %dl,0xc(%eax)
081dabcb +0x3ab:  mov    -0x2c(%ebp),%eax
081dabce +0x3ae:  mov    0x8(%eax),%ebx
081dabd1 +0x3b1:  mov    0xc(%ebp),%eax
081dabd4 +0x3b4:  mov    %eax,(%esp)
081dabd7 +0x3b7:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
081dabdc +0x3bc:  mov    %ebx,0x4(%esp)
081dabe0 +0x3c0:  mov    %eax,(%esp)
081dabe3 +0x3c3:  call   086068e6 <_ZNK9SkillSlot15get_skill_levelEi>  ; SkillSlot::get_skill_level(int) const
081dabe8 +0x3c8:  mov    %eax,%edx
081dabea +0x3ca:  mov    -0x2c(%ebp),%eax
081dabed +0x3cd:  mov    %dl,0xd(%eax)
081dabf0 +0x3d0:  mov    -0x2c(%ebp),%eax
081dabf3 +0x3d3:  movzbl 0x5(%eax),%eax
081dabf7 +0x3d7:  test   %al,%al
081dabf9 +0x3d9:  jne    081dac27 <+0x407>
081dabfb +0x3db:  mov    -0x2c(%ebp),%eax
081dabfe +0x3de:  movzbl 0x4(%eax),%eax
081dac02 +0x3e2:  movsbl %al,%ebx
081dac05 +0x3e5:  mov    0xc(%ebp),%eax
081dac08 +0x3e8:  mov    %eax,(%esp)
081dac0b +0x3eb:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
081dac10 +0x3f0:  mov    %ebx,0x4(%esp)
081dac14 +0x3f4:  mov    %eax,(%esp)
081dac17 +0x3f7:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
081dac1c +0x3fc:  mov    %eax,%edx
081dac1e +0x3fe:  mov    -0x2c(%ebp),%eax
081dac21 +0x401:  mov    %dx,0x6(%eax)
081dac25 +0x405:  jmp    081daca0 <+0x480>
081dac27 +0x407:  mov    0xc(%ebp),%eax
081dac2a +0x40a:  mov    %eax,(%esp)
081dac2d +0x40d:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081dac32 +0x412:  cmp    $0xffffffff,%eax
081dac35 +0x415:  je     081dac46 <+0x426>
081dac37 +0x417:  mov    0xc(%ebp),%eax
081dac3a +0x41a:  mov    %eax,(%esp)
081dac3d +0x41d:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081dac42 +0x422:  test   %eax,%eax
081dac44 +0x424:  jne    081dac4d <+0x42d>
081dac46 +0x426:  mov    $0x1,%eax
081dac4b +0x42b:  jmp    081dac52 <+0x432>
081dac4d +0x42d:  mov    $0x0,%eax
081dac52 +0x432:  test   %al,%al
081dac54 +0x434:  je     081dac7c <+0x45c>
081dac56 +0x436:  mov    0xc(%ebp),%eax
081dac59 +0x439:  mov    %eax,(%esp)
081dac5c +0x43c:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
081dac61 +0x441:  movl   $0x2,0x4(%esp)
081dac69 +0x449:  mov    %eax,(%esp)
081dac6c +0x44c:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
081dac71 +0x451:  mov    %eax,%edx
081dac73 +0x453:  mov    -0x2c(%ebp),%eax
081dac76 +0x456:  mov    %dx,0x6(%eax)
081dac7a +0x45a:  jmp    081daca0 <+0x480>
081dac7c +0x45c:  mov    0xc(%ebp),%eax
081dac7f +0x45f:  mov    %eax,(%esp)
081dac82 +0x462:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
081dac87 +0x467:  movl   $0x3,0x4(%esp)
081dac8f +0x46f:  mov    %eax,(%esp)
081dac92 +0x472:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
081dac97 +0x477:  mov    %eax,%edx
081dac99 +0x479:  mov    -0x2c(%ebp),%eax
081dac9c +0x47c:  mov    %dx,0x6(%eax)
081daca0 +0x480:  mov    -0x28(%ebp),%eax
081daca3 +0x483:  mov    0xd(%eax),%edx
081daca6 +0x486:  mov    -0x2c(%ebp),%eax
081daca9 +0x489:  mov    %edx,0x10(%eax)
081dacac +0x48c:  mov    -0x28(%ebp),%eax
081dacaf +0x48f:  movzbl 0x13(%eax),%edx
081dacb3 +0x493:  mov    -0x2c(%ebp),%eax
081dacb6 +0x496:  mov    %dl,0x14(%eax)
081dacb9 +0x499:  mov    $0x0,%ebx
081dacbe +0x49e:  jmp    081dacd8 <+0x4b8>
081dacc0 +0x4a0:  mov    %edx,%ebx
081dacc2 +0x4a2:  mov    %eax,%esi
081dacc4 +0x4a4:  lea    -0x840(%ebp),%eax
081dacca +0x4aa:  mov    %eax,(%esp)
081daccd +0x4ad:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
081dacd2 +0x4b2:  mov    %esi,%eax
081dacd4 +0x4b4:  mov    %ebx,%edx
081dacd6 +0x4b6:  jmp    081dace8 <+0x4c8>
081dacd8 +0x4b8:  lea    -0x840(%ebp),%eax
081dacde +0x4be:  mov    %eax,(%esp)
081dace1 +0x4c1:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
081dace6 +0x4c6:  jmp    081dad03 <+0x4e3>
081dace8 +0x4c8:  mov    %edx,%ebx
081dacea +0x4ca:  mov    %eax,%esi
081dacec +0x4cc:  lea    -0x48(%ebp),%eax
081dacef +0x4cf:  mov    %eax,(%esp)
081dacf2 +0x4d2:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081dacf7 +0x4d7:  mov    %esi,%eax
081dacf9 +0x4d9:  mov    %ebx,%edx
081dacfb +0x4db:  mov    %eax,(%esp)
081dacfe +0x4de:  call   08ae3750 <_Unwind_Resume>
081dad03 +0x4e3:  lea    -0x48(%ebp),%eax
081dad06 +0x4e6:  mov    %eax,(%esp)
081dad09 +0x4e9:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081dad0e +0x4ee:  mov    %ebx,%eax
081dad10 +0x4f0:  add    $0xc9ac,%esp
081dad16 +0x4f6:  pop    %ebx
081dad17 +0x4f7:  pop    %esi
081dad18 +0x4f8:  pop    %edi
081dad19 +0x4f9:  pop    %ebp
081dad1a +0x4fa:  ret
081dad1b +0x4fb:  nop
```

## 反编译 C

```c
// Dispatcher_RefundSkill::process @ 0x81da820

/* Dispatcher_RefundSkill::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RefundSkill::process
          (Dispatcher_RefundSkill *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  ParamBase PVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  CInventory *pCVar9;
  ParamBase *pPVar10;
  int iVar11;
  int iVar12;
  SkillSlot *pSVar13;
  InventoryMemory local_c983 [49471];
  CInventory local_844 [1979];
  Inven_Item local_89 [2];
  int local_87;
  int local_82;
  vector<int,std::allocator<int>> local_4c [12];
  cMyTrace local_40 [16];
  ParamBase *local_30;
  MSG_BASE *local_2c;
  int local_28;
  char local_21;
  CSkill *local_20;
  
  local_30 = param_3;
  uVar8 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_30 + 0x18) = uVar8;
  if (*(int *)(local_30 + 0x18) < 1) {
    if (*(int *)(local_30 + 0x18) < 0) {
      uVar8 = LineFunc(0x48fa,
                       "virtual int Dispatcher_RefundSkill::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(local_30 + 0x18),0);
    }
    else {
      local_2c = param_2;
      Inven_Item::Inven_Item(local_89);
      Inven_Item::reset(local_89);
      iVar11 = *(int *)(local_2c + 0xd);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
      local_28 = CInventory::GetInvenData(pCVar9,iVar11,local_89);
      if (((local_87 == *(int *)(local_2c + 0xd)) && ((int)(uint)(byte)local_2c[0x13] <= local_82))
         && (-1 < local_28)) {
        std::vector<int,std::allocator<int>>::vector(local_4c);
                    /* try { // try from 081da934 to 081da946 has its CatchHandler @ 081dace8 */
        std::vector<int,std::allocator<int>>::clear(local_4c);
        CInventory::CInventory(local_844);
        InventoryMemory::InventoryMemory(local_c983);
        CInventory::SetInventoryMemory(local_844,local_c983);
        pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 081da985 to 081dac96 has its CatchHandler @ 081dacc0 */
        CInventory::setCopy(local_844,pCVar9);
        local_21 = CInventory::delete_item(local_844,1,local_28,local_2c[0x13],3,0);
        if (local_21 == '\x01') {
          pPVar10 = local_30 + 0x18;
          MVar1 = local_2c[0x13];
          cVar4 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
          cVar5 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
          iVar11 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          iVar12 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          MVar2 = local_2c[0x12];
          pSVar13 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
          uVar8 = SkillSlot::refund_skill
                            (pSVar13,(uint)(byte)MVar2,iVar12,iVar11,(int)cVar5,(int)cVar4,
                             (uint)(byte)MVar1,(int *)pPVar10);
          *(undefined4 *)(local_30 + 8) = uVar8;
          if ((*(int *)(local_30 + 8) < 0xcd) && (-1 < *(int *)(local_30 + 8))) {
            iVar11 = CUser::delete_item(param_1,0,local_28,*(undefined4 *)(local_2c + 0xd),
                                        local_2c[0x13],3);
            if (iVar11 != 0) {
              MVar1 = local_2c[0x13];
              uVar8 = *(undefined4 *)(local_2c + 0xd);
              cMyTrace::cMyTrace(local_40,
                                 "virtual int Dispatcher_RefundSkill::process(CUser*, MSG_BASE&, ParamBase&)"
                                 ,0x4932,5);
              cMyTrace::operator()
                        (local_40,"delete_item failed - refund skill %d/%d",uVar8,(uint)(byte)MVar1)
              ;
            }
            local_30[5] = (ParamBase)0x0;
            local_20 = (CSkill *)0x0;
            iVar11 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
            iVar12 = G_CDataManager();
            local_20 = (CSkill *)CDataManager::find_skill(iVar12,iVar11);
            if ((local_20 != (CSkill *)0x0) &&
               (cVar4 = CSkill::IsSpecialSkill(local_20), cVar4 != '\0')) {
              local_30[5] = (ParamBase)0x1;
            }
            PVar6 = (ParamBase)
                    CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
            local_30[4] = PVar6;
            *(MSG_BASE *)(local_30 + 0xc) = local_2c[0x12];
            iVar11 = *(int *)(local_30 + 8);
            pSVar13 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
            PVar6 = (ParamBase)SkillSlot::get_skill_level(pSVar13,iVar11);
            local_30[0xd] = PVar6;
            if (local_30[5] == (ParamBase)0x0) {
              PVar6 = local_30[4];
              pSVar13 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1)
              ;
              uVar7 = SkillSlot::get_remain_sp_at_index(pSVar13,(int)(char)PVar6);
              *(undefined2 *)(local_30 + 6) = uVar7;
            }
            else {
              iVar11 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
              if ((iVar11 == -1) ||
                 (iVar11 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1),
                 iVar11 == 0)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) {
                pSVar13 = (SkillSlot *)
                          CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
                uVar7 = SkillSlot::get_remain_sfp_at_index(pSVar13,2);
                *(undefined2 *)(local_30 + 6) = uVar7;
              }
              else {
                pSVar13 = (SkillSlot *)
                          CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
                uVar7 = SkillSlot::get_remain_sfp_at_index(pSVar13,3);
                *(undefined2 *)(local_30 + 6) = uVar7;
              }
            }
            *(undefined4 *)(local_30 + 0x10) = *(undefined4 *)(local_2c + 0xd);
            *(MSG_BASE *)(local_30 + 0x14) = local_2c[0x13];
          }
        }
        else {
          *(undefined4 *)(local_30 + 0x18) = 0x16;
        }
        uVar8 = 0;
                    /* try { // try from 081dace1 to 081dace5 has its CatchHandler @ 081dace8 */
        CInventory::~CInventory(local_844);
        std::vector<int,std::allocator<int>>::~vector(local_4c);
      }
      else {
        *(undefined4 *)(local_30 + 0x18) = 0x16;
        uVar8 = 0;
      }
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}
```
