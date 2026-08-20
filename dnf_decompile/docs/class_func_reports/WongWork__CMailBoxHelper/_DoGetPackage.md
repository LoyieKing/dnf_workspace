# _DoGetPackage

`_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR`

`WongWork::CMailBoxHelper::_DoGetPackage(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08554650` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08554650  _ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR
#           WongWork::CMailBoxHelper::_DoGetPackage(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
# range [0x08554650, 0x085549dd]
08554650 +0x000:  push   %ebp
08554651 +0x001:  mov    %esp,%ebp
08554653 +0x003:  push   %esi
08554654 +0x004:  push   %ebx
08554655 +0x005:  sub    $0x110,%esp
0855465b +0x00b:  mov    0x14(%ebp),%eax
0855465e +0x00e:  mov    %al,-0xec(%ebp)
08554664 +0x014:  mov    0x8(%ebp),%eax
08554667 +0x017:  mov    %eax,(%esp)
0855466a +0x01a:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
0855466f +0x01f:  mov    %eax,-0x18(%ebp)
08554672 +0x022:  cmpl   $0x0,-0x18(%ebp)
08554676 +0x026:  jne    08554682 <+0x32>
08554678 +0x028:  mov    $0x0,%eax
0855467d +0x02d:  jmp    085549d3 <+0x383>
08554682 +0x032:  movl   $0x0,-0x14(%ebp)
08554689 +0x039:  mov    0xc(%ebp),%eax
0855468c +0x03c:  mov    %eax,(%esp)
0855468f +0x03f:  call   08557516 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x77>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x77
08554694 +0x044:  mov    %eax,-0x14(%ebp)
08554697 +0x047:  cmpl   $0x0,-0x14(%ebp)
0855469b +0x04b:  setne  %al
0855469e +0x04e:  test   %al,%al
085546a0 +0x050:  je     08554845 <+0x1f5>
085546a6 +0x056:  cmpb   $0x0,-0xec(%ebp)
085546ad +0x05d:  je     0855477a <+0x12a>
085546b3 +0x063:  lea    -0xaa(%ebp),%eax
085546b9 +0x069:  mov    0xc(%ebp),%edx
085546bc +0x06c:  mov    %edx,0x4(%esp)
085546c0 +0x070:  mov    %eax,(%esp)
085546c3 +0x073:  call   08557522 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x83
085546c8 +0x078:  sub    $0x4,%esp
085546cb +0x07b:  mov    -0xa8(%ebp),%eax
085546d1 +0x081:  mov    %eax,(%esp)
085546d4 +0x084:  call   08553912 <_ZN8WongWork14CMailBoxHelper15IsCeraPointItemEm>  ; WongWork::CMailBoxHelper::IsCeraPointItem(unsigned long)
085546d9 +0x089:  test   %al,%al
085546db +0x08b:  je     0855470e <+0xbe>
085546dd +0x08d:  mov    0x8(%ebp),%eax
085546e0 +0x090:  mov    %eax,(%esp)
085546e3 +0x093:  call   08692af6 <_ZN5CUser12GetCeraPointEv>  ; CUser::GetCeraPoint()
085546e8 +0x098:  add    -0x14(%ebp),%eax
085546eb +0x09b:  cmp    $0x3b9aca00,%eax
085546f0 +0x0a0:  seta   %al
085546f3 +0x0a3:  test   %al,%al
085546f5 +0x0a5:  je     08554845 <+0x1f5>
085546fb +0x0ab:  mov    0x18(%ebp),%eax
085546fe +0x0ae:  movl   $0xb,(%eax)
08554704 +0x0b4:  mov    $0x0,%eax
08554709 +0x0b9:  jmp    085549d3 <+0x383>
0855470e +0x0be:  movl   $0x7fffffff,-0x10(%ebp)
08554715 +0x0c5:  mov    0x8(%ebp),%eax
08554718 +0x0c8:  mov    %eax,(%esp)
0855471b +0x0cb:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08554720 +0x0d0:  mov    %eax,%esi
08554722 +0x0d2:  mov    0x8(%ebp),%eax
08554725 +0x0d5:  mov    %eax,(%esp)
08554728 +0x0d8:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0855472d +0x0dd:  mov    %eax,%ebx
0855472f +0x0df:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08554734 +0x0e4:  mov    %esi,0x8(%esp)
08554738 +0x0e8:  mov    %ebx,0x4(%esp)
0855473c +0x0ec:  mov    %eax,(%esp)
0855473f +0x0ef:  call   08360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>  ; CDataManager::GetMoneyLimitPerLevel(int, char const*) const
08554744 +0x0f4:  mov    %eax,-0x10(%ebp)
08554747 +0x0f7:  mov    0x8(%ebp),%eax
0855474a +0x0fa:  mov    %eax,(%esp)
0855474d +0x0fd:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
08554752 +0x102:  mov    -0x10(%ebp),%edx
08554755 +0x105:  sub    %eax,%edx
08554757 +0x107:  mov    -0x14(%ebp),%eax
0855475a +0x10a:  cmp    %eax,%edx
0855475c +0x10c:  setl   %al
0855475f +0x10f:  test   %al,%al
08554761 +0x111:  je     08554845 <+0x1f5>
08554767 +0x117:  mov    0x18(%ebp),%eax
0855476a +0x11a:  movl   $0xa,(%eax)
08554770 +0x120:  mov    $0x0,%eax
08554775 +0x125:  jmp    085549d3 <+0x383>
0855477a +0x12a:  lea    -0x6d(%ebp),%eax
0855477d +0x12d:  mov    0xc(%ebp),%edx
08554780 +0x130:  mov    %edx,0x4(%esp)
08554784 +0x134:  mov    %eax,(%esp)
08554787 +0x137:  call   08557522 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x83
0855478c +0x13c:  sub    $0x4,%esp
0855478f +0x13f:  mov    -0x6b(%ebp),%eax
08554792 +0x142:  mov    %eax,(%esp)
08554795 +0x145:  call   08553912 <_ZN8WongWork14CMailBoxHelper15IsCeraPointItemEm>  ; WongWork::CMailBoxHelper::IsCeraPointItem(unsigned long)
0855479a +0x14a:  xor    $0x1,%eax
0855479d +0x14d:  test   %al,%al
0855479f +0x14f:  je     085547f7 <+0x1a7>
085547a1 +0x151:  mov    0xc(%ebp),%eax
085547a4 +0x154:  mov    %eax,(%esp)
085547a7 +0x157:  call   085574fe <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x5f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x5f
085547ac +0x15c:  mov    %eax,%ebx
085547ae +0x15e:  mov    0x8(%ebp),%eax
085547b1 +0x161:  mov    %eax,(%esp)
085547b4 +0x164:  call   084ed008 <_GLOBAL__I__Z7getUserj+0x3fba>  ; global constructors keyed to getUser(unsigned int)+0x3fba
085547b9 +0x169:  mov    %ebx,0x4(%esp)
085547bd +0x16d:  mov    %eax,(%esp)
085547c0 +0x170:  call   08287ee0 <_ZN16Secu_GoldControl15SetMailCharNameEPKc>  ; Secu_GoldControl::SetMailCharName(char const*)
085547c5 +0x175:  mov    -0x14(%ebp),%ebx
085547c8 +0x178:  mov    0x8(%ebp),%eax
085547cb +0x17b:  mov    %eax,(%esp)
085547ce +0x17e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085547d3 +0x183:  movl   $0x0,0x10(%esp)
085547db +0x18b:  movl   $0x1,0xc(%esp)
085547e3 +0x193:  movl   $0xe,0x8(%esp)
085547eb +0x19b:  mov    %ebx,0x4(%esp)
085547ef +0x19f:  mov    %eax,(%esp)
085547f2 +0x1a2:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
085547f7 +0x1a7:  movl   $0x0,-0x20(%ebp)
085547fe +0x1ae:  movl   $0x0,-0x1c(%ebp)
08554805 +0x1b5:  lea    -0x28(%ebp),%eax
08554808 +0x1b8:  lea    -0x20(%ebp),%edx
0855480b +0x1bb:  mov    %edx,0x8(%esp)
0855480f +0x1bf:  lea    -0x1c(%ebp),%edx
08554812 +0x1c2:  mov    %edx,0x4(%esp)
08554816 +0x1c6:  mov    %eax,(%esp)
08554819 +0x1c9:  call   0855890e <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x146f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x146f
0855481e +0x1ce:  sub    $0x4,%esp
08554821 +0x1d1:  lea    -0x28(%ebp),%eax
08554824 +0x1d4:  mov    %eax,0x4(%esp)
08554828 +0x1d8:  lea    -0x30(%ebp),%eax
0855482b +0x1db:  mov    %eax,(%esp)
0855482e +0x1de:  call   08558958 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x14b9>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x14b9
08554833 +0x1e3:  lea    -0x30(%ebp),%eax
08554836 +0x1e6:  mov    %eax,0x4(%esp)
0855483a +0x1ea:  mov    0x10(%ebp),%eax
0855483d +0x1ed:  mov    %eax,(%esp)
08554840 +0x1f0:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08554845 +0x1f5:  lea    -0xe7(%ebp),%eax
0855484b +0x1fb:  mov    0xc(%ebp),%edx
0855484e +0x1fe:  mov    %edx,0x4(%esp)
08554852 +0x202:  mov    %eax,(%esp)
08554855 +0x205:  call   08557522 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x83
0855485a +0x20a:  sub    $0x4,%esp
0855485d +0x20d:  mov    -0xe5(%ebp),%eax
08554863 +0x213:  test   %eax,%eax
08554865 +0x215:  je     085549ce <+0x37e>
0855486b +0x21b:  mov    -0xe5(%ebp),%eax
08554871 +0x221:  cmp    $0x1,%eax
08554874 +0x224:  jne    085548a6 <+0x256>
08554876 +0x226:  movzbl -0xec(%ebp),%eax
0855487d +0x22d:  mov    0x18(%ebp),%edx
08554880 +0x230:  mov    %edx,0x10(%esp)
08554884 +0x234:  mov    %eax,0xc(%esp)
08554888 +0x238:  mov    0x10(%ebp),%eax
0855488b +0x23b:  mov    %eax,0x8(%esp)
0855488f +0x23f:  mov    0xc(%ebp),%eax
08554892 +0x242:  mov    %eax,0x4(%esp)
08554896 +0x246:  mov    0x8(%ebp),%eax
08554899 +0x249:  mov    %eax,(%esp)
0855489c +0x24c:  call   08553672 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR>  ; WongWork::CMailBoxHelper::_DoGetPackageCoin(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
085548a1 +0x251:  jmp    085549d3 <+0x383>
085548a6 +0x256:  mov    -0xe5(%ebp),%edx
085548ac +0x25c:  mov    &_ZN10GlobalData17s_pAvatarRouletteE,%eax
085548b1 +0x261:  mov    %edx,0x4(%esp)
085548b5 +0x265:  mov    %eax,(%esp)
085548b8 +0x268:  call   0817fb0a <_ZN20AvatarRouletteServer15isAvatarPotteryEm>  ; AvatarRouletteServer::isAvatarPottery(unsigned long)
085548bd +0x26d:  test   %al,%al
085548bf +0x26f:  je     085548e6 <+0x296>
085548c1 +0x271:  movzbl -0xec(%ebp),%edx
085548c8 +0x278:  mov    -0xe0(%ebp),%eax
085548ce +0x27e:  mov    %edx,0x8(%esp)
085548d2 +0x282:  mov    %eax,0x4(%esp)
085548d6 +0x286:  mov    0x8(%ebp),%eax
085548d9 +0x289:  mov    %eax,(%esp)
085548dc +0x28c:  call   0818028a <_ZN10AvatarCoin10GetPackageEP5CUserib>  ; AvatarCoin::GetPackage(CUser*, int, bool)
085548e1 +0x291:  jmp    085549d3 <+0x383>
085548e6 +0x296:  mov    -0xe5(%ebp),%eax
085548ec +0x29c:  mov    %eax,%ebx
085548ee +0x29e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085548f3 +0x2a3:  mov    %ebx,0x4(%esp)
085548f7 +0x2a7:  mov    %eax,(%esp)
085548fa +0x2aa:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085548ff +0x2af:  mov    %eax,-0xc(%ebp)
08554902 +0x2b2:  cmpl   $0x0,-0xc(%ebp)
08554906 +0x2b6:  jne    0855491b <+0x2cb>
08554908 +0x2b8:  mov    0x18(%ebp),%eax
0855490b +0x2bb:  movl   $0x1,(%eax)
08554911 +0x2c1:  mov    $0x0,%eax
08554916 +0x2c6:  jmp    085549d3 <+0x383>
0855491b +0x2cb:  mov    -0xc(%ebp),%eax
0855491e +0x2ce:  mov    (%eax),%eax
08554920 +0x2d0:  add    $0x10,%eax
08554923 +0x2d3:  mov    (%eax),%edx
08554925 +0x2d5:  mov    -0xc(%ebp),%eax
08554928 +0x2d8:  mov    %eax,(%esp)
0855492b +0x2db:  call   *%edx
0855492d +0x2dd:  test   %al,%al
0855492f +0x2df:  je     0855495e <+0x30e>
08554931 +0x2e1:  movzbl -0xec(%ebp),%eax
08554938 +0x2e8:  mov    0x18(%ebp),%edx
0855493b +0x2eb:  mov    %edx,0x10(%esp)
0855493f +0x2ef:  mov    %eax,0xc(%esp)
08554943 +0x2f3:  mov    0x10(%ebp),%eax
08554946 +0x2f6:  mov    %eax,0x8(%esp)
0855494a +0x2fa:  mov    0xc(%ebp),%eax
0855494d +0x2fd:  mov    %eax,0x4(%esp)
08554951 +0x301:  mov    0x8(%ebp),%eax
08554954 +0x304:  mov    %eax,(%esp)
08554957 +0x307:  call   0855419c <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR>  ; WongWork::CMailBoxHelper::_DoGetPackageAvatar(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
0855495c +0x30c:  jmp    085549d3 <+0x383>
0855495e +0x30e:  mov    -0xc(%ebp),%eax
08554961 +0x311:  mov    (%eax),%eax
08554963 +0x313:  add    $0x14,%eax
08554966 +0x316:  mov    (%eax),%edx
08554968 +0x318:  mov    -0xc(%ebp),%eax
0855496b +0x31b:  mov    %eax,(%esp)
0855496e +0x31e:  call   *%edx
08554970 +0x320:  test   %al,%al
08554972 +0x322:  je     085549a1 <+0x351>
08554974 +0x324:  movzbl -0xec(%ebp),%eax
0855497b +0x32b:  mov    0x18(%ebp),%edx
0855497e +0x32e:  mov    %edx,0x10(%esp)
08554982 +0x332:  mov    %eax,0xc(%esp)
08554986 +0x336:  mov    0x10(%ebp),%eax
08554989 +0x339:  mov    %eax,0x8(%esp)
0855498d +0x33d:  mov    0xc(%ebp),%eax
08554990 +0x340:  mov    %eax,0x4(%esp)
08554994 +0x344:  mov    0x8(%ebp),%eax
08554997 +0x347:  mov    %eax,(%esp)
0855499a +0x34a:  call   0855447c <_ZN8WongWork14CMailBoxHelper21_DoGetPackageCreatureEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR>  ; WongWork::CMailBoxHelper::_DoGetPackageCreature(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
0855499f +0x34f:  jmp    085549d3 <+0x383>
085549a1 +0x351:  movzbl -0xec(%ebp),%eax
085549a8 +0x358:  mov    0x18(%ebp),%edx
085549ab +0x35b:  mov    %edx,0x10(%esp)
085549af +0x35f:  mov    %eax,0xc(%esp)
085549b3 +0x363:  mov    0x10(%ebp),%eax
085549b6 +0x366:  mov    %eax,0x8(%esp)
085549ba +0x36a:  mov    0xc(%ebp),%eax
085549bd +0x36d:  mov    %eax,0x4(%esp)
085549c1 +0x371:  mov    0x8(%ebp),%eax
085549c4 +0x374:  mov    %eax,(%esp)
085549c7 +0x377:  call   08553936 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR>  ; WongWork::CMailBoxHelper::_DoGetPackageItem(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
085549cc +0x37c:  jmp    085549d3 <+0x383>
085549ce +0x37e:  mov    $0x1,%eax
085549d3 +0x383:  lea    -0x8(%ebp),%esp
085549d6 +0x386:  add    $0x0,%esp
085549d9 +0x389:  pop    %ebx
085549da +0x38a:  pop    %esi
085549db +0x38b:  pop    %ebp
085549dc +0x38c:  ret
085549dd +0x38d:  nop
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::_DoGetPackage @ 0x8554650

/* WongWork::CMailBoxHelper::_DoGetPackage(CUser*, WongWork::CMailBox::CMail const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&) */

undefined4
WongWork::CMailBoxHelper::_DoGetPackage
          (CUser *param_1,CMail *param_2,vector *param_3,bool param_4,ENUM_ERROR *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  Secu_GoldControl *this;
  CInventory *pCVar4;
  undefined4 uVar5;
  CDataManager *pCVar6;
  ulong local_e9;
  int local_e4;
  ulong local_ac;
  ulong local_6f;
  pair<int,int> local_34 [8];
  ENUM_ITEMSPACE local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  local_1c = CUser::GetMailBox(param_1);
  if (local_1c == 0) {
    return 0;
  }
  local_18 = 0;
  local_18 = CMailBox::CMail::GetPackageMoney(param_2);
  if (local_18 != 0) {
    if (param_4) {
      CMailBox::CMail::GetPackageItem();
      cVar1 = IsCeraPointItem(local_ac);
      if (cVar1 == '\0') {
        local_14 = 0x7fffffff;
        pcVar3 = (char *)CUser::get_acc_name(param_1);
        iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        pCVar6 = (CDataManager *)G_CDataManager();
        local_14 = CDataManager::GetMoneyLimitPerLevel(pCVar6,iVar2,pcVar3);
        iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
        if (local_14 - iVar2 < local_18) {
          *(undefined4 *)param_5 = 10;
          return 0;
        }
      }
      else {
        iVar2 = CUser::GetCeraPoint(param_1);
        if (1000000000 < (uint)(iVar2 + local_18)) {
          *(undefined4 *)param_5 = 0xb;
          return 0;
        }
      }
    }
    else {
      CMailBox::CMail::GetPackageItem();
      cVar1 = IsCeraPointItem(local_6f);
      if (cVar1 != '\x01') {
        pcVar3 = (char *)CMailBox::CMail::GetSenderName(param_2);
        this = (Secu_GoldControl *)CUser::GetGoldControl(param_1);
        Secu_GoldControl::SetMailCharName(this,pcVar3);
        iVar2 = local_18;
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::gain_money(pCVar4,iVar2,0xe,1,0);
      }
      local_24 = 0;
      local_20 = 0;
      std::make_pair<ENUM_ITEMSPACE,Inven_Item::INVEN_SLOT>(local_2c,(INVEN_SLOT *)&local_20);
      std::pair<int,int>::pair<ENUM_ITEMSPACE,Inven_Item::INVEN_SLOT>(local_34,local_2c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_34);
    }
  }
  CMailBox::CMail::GetPackageItem();
  if (local_e9 == 0) {
    uVar5 = 1;
  }
  else if (local_e9 == 1) {
    uVar5 = _DoGetPackageCoin(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    cVar1 = AvatarRouletteServer::isAvatarPottery(GlobalData::s_pAvatarRoulette,local_e9);
    if (cVar1 == '\0') {
      pCVar6 = (CDataManager *)G_CDataManager();
      local_10 = (int *)CDataManager::find_item(pCVar6,local_e9);
      if (local_10 == (int *)0x0) {
        *(undefined4 *)param_5 = 1;
        uVar5 = 0;
      }
      else {
        cVar1 = (**(code **)(*local_10 + 0x10))(local_10);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*local_10 + 0x14))(local_10);
          if (cVar1 == '\0') {
            uVar5 = _DoGetPackageItem(param_1,param_2,param_3,param_4,param_5);
          }
          else {
            uVar5 = _DoGetPackageCreature(param_1,param_2,param_3,param_4,param_5);
          }
        }
        else {
          uVar5 = _DoGetPackageAvatar(param_1,param_2,param_3,param_4,param_5);
        }
      }
    }
    else {
      uVar5 = AvatarCoin::GetPackage(param_1,local_e4,param_4);
    }
  }
  return uVar5;
}
```
