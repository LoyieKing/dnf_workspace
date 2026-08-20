# dispatch_sig

`_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci`

`Inter_VillageAttackedReward::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_VillageAttackedReward` | `0x084dfea6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dfea6  _ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci
#           Inter_VillageAttackedReward::dispatch_sig(CUser*, char*, int)
# range [0x084dfea6, 0x084e038f]
084dfea6 +0x000:  push   %ebp
084dfea7 +0x001:  mov    %esp,%ebp
084dfea9 +0x003:  push   %edi
084dfeaa +0x004:  push   %esi
084dfeab +0x005:  push   %ebx
084dfeac +0x006:  sub    $0x1ec,%esp
084dfeb2 +0x00c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084dfeb7 +0x011:  mov    %eax,(%esp)
084dfeba +0x014:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084dfebf +0x019:  test   %al,%al
084dfec1 +0x01b:  je     084dfecd <+0x27>
084dfec3 +0x01d:  mov    $0x0,%eax
084dfec8 +0x022:  jmp    084e0385 <+0x4df>
084dfecd +0x027:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084dfed2 +0x02c:  mov    0x1a8(%eax),%eax
084dfed8 +0x032:  cmp    $0x1,%eax
084dfedb +0x035:  je     084dfeed <+0x47>
084dfedd +0x037:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084dfee2 +0x03c:  mov    0x1a8(%eax),%eax
084dfee8 +0x042:  cmp    $0x2,%eax
084dfeeb +0x045:  jne    084dfef4 <+0x4e>
084dfeed +0x047:  mov    $0x1,%eax
084dfef2 +0x04c:  jmp    084dfef9 <+0x53>
084dfef4 +0x04e:  mov    $0x0,%eax
084dfef9 +0x053:  test   %al,%al
084dfefb +0x055:  je     084dff07 <+0x61>
084dfefd +0x057:  mov    $0x0,%eax
084dff02 +0x05c:  jmp    084e0385 <+0x4df>
084dff07 +0x061:  cmpl   $0x0,0xc(%ebp)
084dff0b +0x065:  jne    084dff17 <+0x71>
084dff0d +0x067:  mov    $0x0,%eax
084dff12 +0x06c:  jmp    084e0385 <+0x4df>
084dff17 +0x071:  mov    0xc(%ebp),%eax
084dff1a +0x074:  mov    %eax,(%esp)
084dff1d +0x077:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084dff22 +0x07c:  test   %eax,%eax
084dff24 +0x07e:  sete   %al
084dff27 +0x081:  test   %al,%al
084dff29 +0x083:  je     084dff35 <+0x8f>
084dff2b +0x085:  mov    $0x0,%eax
084dff30 +0x08a:  jmp    084e0385 <+0x4df>
084dff35 +0x08f:  mov    0x10(%ebp),%eax
084dff38 +0x092:  mov    %eax,-0x20(%ebp)
084dff3b +0x095:  movl   $0xffffffff,0x4(%esp)
084dff43 +0x09d:  mov    0xc(%ebp),%eax
084dff46 +0x0a0:  mov    %eax,(%esp)
084dff49 +0x0a3:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084dff4e +0x0a8:  mov    %eax,%edx
084dff50 +0x0aa:  mov    -0x20(%ebp),%eax
084dff53 +0x0ad:  mov    0xe(%eax),%eax
084dff56 +0x0b0:  cmp    %eax,%edx
084dff58 +0x0b2:  setne  %al
084dff5b +0x0b5:  test   %al,%al
084dff5d +0x0b7:  je     084dff69 <+0xc3>
084dff5f +0x0b9:  mov    $0x0,%eax
084dff64 +0x0be:  jmp    084e0385 <+0x4df>
084dff69 +0x0c3:  mov    -0x20(%ebp),%eax
084dff6c +0x0c6:  mov    0x16(%eax),%eax
084dff6f +0x0c9:  cmp    $0x5,%eax
084dff72 +0x0cc:  je     084e0124 <+0x27e>
084dff78 +0x0d2:  cmp    $0x6,%eax
084dff7b +0x0d5:  je     084e0226 <+0x380>
084dff81 +0x0db:  cmp    $0x3,%eax
084dff84 +0x0de:  jne    084e0380 <+0x4da>
084dff8a +0x0e4:  movl   $0x1,0x4(%esp)
084dff92 +0x0ec:  mov    0xc(%ebp),%eax
084dff95 +0x0ef:  mov    %eax,(%esp)
084dff98 +0x0f2:  call   084ec850 <_GLOBAL__I__Z7getUserj+0x3802>  ; global constructors keyed to getUser(unsigned int)+0x3802
084dff9d +0x0f7:  lea    -0xb1(%ebp),%eax
084dffa3 +0x0fd:  mov    %eax,(%esp)
084dffa6 +0x100:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084dffab +0x105:  movl   $0x1,-0xaf(%ebp)
084dffb5 +0x10f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084dffba +0x114:  mov    0xc(%eax),%eax
084dffbd +0x117:  movl   $0x1,0xc(%esp)
084dffc5 +0x11f:  lea    -0xb1(%ebp),%edx
084dffcb +0x125:  mov    %edx,0x8(%esp)
084dffcf +0x129:  movl   $0x3,0x4(%esp)
084dffd7 +0x131:  mov    %eax,(%esp)
084dffda +0x134:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
084dffdf +0x139:  movw   $0x1,-0xa6(%ebp)
084dffe8 +0x142:  mov    -0xaf(%ebp),%eax
084dffee +0x148:  cmp    $0xffffffff,%eax
084dfff1 +0x14b:  jne    084e0033 <+0x18d>
084dfff3 +0x14d:  mov    -0xaf(%ebp),%eax
084dfff9 +0x153:  mov    %eax,0x14(%esp)
084dfffd +0x157:  movl   $"Inter_VillageAttackedReward::dispatch_sig() error item_id(%d)",0x10(%esp)
084e0005 +0x15f:  movl   $0x4d5f,0xc(%esp)
084e000d +0x167:  movl   $&_ZZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084e0015 +0x16f:  movl   $"InterDispatcher.cpp",0x4(%esp)
084e001d +0x177:  movl   $0x1,(%esp)
084e0024 +0x17e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084e0029 +0x183:  mov    $0x0,%eax
084e002e +0x188:  jmp    084e0385 <+0x4df>
084e0033 +0x18d:  movl   $0x0,0xc(%esp)
084e003b +0x195:  movl   $"game_server_msg_124",0x8(%esp)
084e0043 +0x19d:  movl   $0x4,0x4(%esp)
084e004b +0x1a5:  movl   $&g_scriptStringManager_,(%esp)
084e0052 +0x1ac:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e0057 +0x1b1:  movl   $0x14,0x8(%esp)
084e005f +0x1b9:  mov    %eax,0x4(%esp)
084e0063 +0x1bd:  lea    -0x55(%ebp),%eax
084e0066 +0x1c0:  mov    %eax,(%esp)
084e0069 +0x1c3:  call   0807d8d0 <_init+0x1c8>
084e006e +0x1c8:  movl   $0x0,0xc(%esp)
084e0076 +0x1d0:  movl   $"game_server_msg_125",0x8(%esp)
084e007e +0x1d8:  movl   $0x4,0x4(%esp)
084e0086 +0x1e0:  movl   $&g_scriptStringManager_,(%esp)
084e008d +0x1e7:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e0092 +0x1ec:  movl   $0xff,0x8(%esp)
084e009a +0x1f4:  mov    %eax,0x4(%esp)
084e009e +0x1f8:  lea    -0x1b1(%ebp),%eax
084e00a4 +0x1fe:  mov    %eax,(%esp)
084e00a7 +0x201:  call   0807d8d0 <_init+0x1c8>
084e00ac +0x206:  mov    0xc(%ebp),%eax
084e00af +0x209:  mov    %eax,(%esp)
084e00b2 +0x20c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084e00b7 +0x211:  mov    %eax,%ebx
084e00b9 +0x213:  lea    -0x1b1(%ebp),%eax
084e00bf +0x219:  mov    %eax,(%esp)
084e00c2 +0x21c:  call   0807e3b0 <_init+0xca8>
084e00c7 +0x221:  mov    %eax,%esi
084e00c9 +0x223:  mov    0xc(%ebp),%eax
084e00cc +0x226:  mov    %eax,(%esp)
084e00cf +0x229:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e00d4 +0x22e:  movl   $0x0,0x24(%esp)
084e00dc +0x236:  movl   $0x0,0x20(%esp)
084e00e4 +0x23e:  mov    %ebx,0x1c(%esp)
084e00e8 +0x242:  movl   $0x1e,0x18(%esp)
084e00f0 +0x24a:  mov    %esi,0x14(%esp)
084e00f4 +0x24e:  lea    -0x1b1(%ebp),%edx
084e00fa +0x254:  mov    %edx,0x10(%esp)
084e00fe +0x258:  mov    %eax,0xc(%esp)
084e0102 +0x25c:  movl   $0x0,0x8(%esp)
084e010a +0x264:  lea    -0xb1(%ebp),%eax
084e0110 +0x26a:  mov    %eax,0x4(%esp)
084e0114 +0x26e:  lea    -0x55(%ebp),%eax
084e0117 +0x271:  mov    %eax,(%esp)
084e011a +0x274:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084e011f +0x279:  jmp    084e0380 <+0x4da>
084e0124 +0x27e:  mov    -0x20(%ebp),%eax
084e0127 +0x281:  mov    0x12(%eax),%eax
084e012a +0x284:  movl   $0x0,0xc(%esp)
084e0132 +0x28c:  movl   $0x0,0x8(%esp)
084e013a +0x294:  mov    %eax,0x4(%esp)
084e013e +0x298:  lea    -0x64(%ebp),%eax
084e0141 +0x29b:  mov    %eax,(%esp)
084e0144 +0x29e:  call   084ed148 <_GLOBAL__I__Z7getUserj+0x40fa>  ; global constructors keyed to getUser(unsigned int)+0x40fa
084e0149 +0x2a3:  mov    -0x20(%ebp),%eax
084e014c +0x2a6:  mov    0x12(%eax),%ebx
084e014f +0x2a9:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
084e0154 +0x2ae:  mov    %eax,(%esp)
084e0157 +0x2b1:  call   084ed174 <_GLOBAL__I__Z7getUserj+0x4126>  ; global constructors keyed to getUser(unsigned int)+0x4126
084e015c +0x2b6:  lea    -0x64(%ebp),%edx
084e015f +0x2b9:  mov    %edx,0x8(%esp)
084e0163 +0x2bd:  mov    %ebx,0x4(%esp)
084e0167 +0x2c1:  mov    %eax,(%esp)
084e016a +0x2c4:  call   081a3e3c <_ZN28Arad_VillageAttackRewardItem16find_reward_itemEiRNS_4DataE>  ; Arad_VillageAttackRewardItem::find_reward_item(int, Arad_VillageAttackRewardItem::Data&)
084e016f +0x2c9:  test   %al,%al
084e0171 +0x2cb:  je     084e037f <+0x4d9>
084e0177 +0x2d1:  movl   $0x1,0x4(%esp)
084e017f +0x2d9:  mov    0xc(%ebp),%eax
084e0182 +0x2dc:  mov    %eax,(%esp)
084e0185 +0x2df:  call   084ec850 <_GLOBAL__I__Z7getUserj+0x3802>  ; global constructors keyed to getUser(unsigned int)+0x3802
084e018a +0x2e4:  mov    -0x64(%ebp),%ecx
084e018d +0x2e7:  mov    -0x5c(%ebp),%edx
084e0190 +0x2ea:  mov    -0x60(%ebp),%eax
084e0193 +0x2ed:  mov    %ecx,0x10(%esp)
084e0197 +0x2f1:  mov    %edx,0xc(%esp)
084e019b +0x2f5:  mov    %eax,0x8(%esp)
084e019f +0x2f9:  mov    0xc(%ebp),%eax
084e01a2 +0x2fc:  mov    %eax,0x4(%esp)
084e01a6 +0x300:  mov    0x8(%ebp),%eax
084e01a9 +0x303:  mov    %eax,(%esp)
084e01ac +0x306:  call   084e0390 <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii>  ; Inter_VillageAttackedReward::_send_reward_item(CUser*, unsigned long, int, int)
084e01b1 +0x30b:  mov    -0x5c(%ebp),%eax
084e01b4 +0x30e:  mov    %eax,-0x1c0(%ebp)
084e01ba +0x314:  mov    -0x60(%ebp),%edi
084e01bd +0x317:  mov    -0x64(%ebp),%esi
084e01c0 +0x31a:  movl   $0xffffffff,0x4(%esp)
084e01c8 +0x322:  mov    0xc(%ebp),%eax
084e01cb +0x325:  mov    %eax,(%esp)
084e01ce +0x328:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e01d3 +0x32d:  mov    %eax,%ebx
084e01d5 +0x32f:  movl   $0x0,0xc(%esp)
084e01dd +0x337:  movl   $0x4d7b,0x8(%esp)
084e01e5 +0x33f:  movl   $&_ZZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e01ed +0x347:  lea    -0x40(%ebp),%eax
084e01f0 +0x34a:  mov    %eax,(%esp)
084e01f3 +0x34d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e01f8 +0x352:  mov    -0x1c0(%ebp),%eax
084e01fe +0x358:  mov    %eax,0x14(%esp)
084e0202 +0x35c:  mov    %edi,0x10(%esp)
084e0206 +0x360:  mov    %esi,0xc(%esp)
084e020a +0x364:  mov    %ebx,0x8(%esp)
084e020e +0x368:  movl   $"VillageAttacked Reward WinPoint Item Index. [charac:%u][win:%d][item:%u][count:%d]",0x4(%esp)
084e0216 +0x370:  lea    -0x40(%ebp),%eax
084e0219 +0x373:  mov    %eax,(%esp)
084e021c +0x376:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e0221 +0x37b:  jmp    084e0380 <+0x4da>
084e0226 +0x380:  lea    -0x74(%ebp),%eax
084e0229 +0x383:  mov    %eax,(%esp)
084e022c +0x386:  call   081a4258 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2b3>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2b3
084e0231 +0x38b:  mov    -0x20(%ebp),%eax
084e0234 +0x38e:  mov    0x12(%eax),%eax
084e0237 +0x391:  movswl %ax,%ebx
084e023a +0x394:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
084e023f +0x399:  mov    %eax,(%esp)
084e0242 +0x39c:  call   084ed174 <_GLOBAL__I__Z7getUserj+0x4126>  ; global constructors keyed to getUser(unsigned int)+0x4126
084e0247 +0x3a1:  lea    -0x74(%ebp),%edx
084e024a +0x3a4:  mov    %edx,0x8(%esp)
084e024e +0x3a8:  mov    %ebx,0x4(%esp)
084e0252 +0x3ac:  mov    %eax,(%esp)
084e0255 +0x3af:  call   081a3ef0 <_ZN28Arad_VillageAttackRewardItem24find_ranking_reward_itemEsRNS_8RankDataE>  ; Arad_VillageAttackRewardItem::find_ranking_reward_item(short, Arad_VillageAttackRewardItem::RankData&)
084e025a +0x3b4:  test   %al,%al
084e025c +0x3b6:  je     084e0342 <+0x49c>
084e0262 +0x3bc:  movl   $0x0,-0x1c(%ebp)
084e0269 +0x3c3:  jmp    084e0331 <+0x48b>
084e026e +0x3c8:  mov    -0x1c(%ebp),%eax
084e0271 +0x3cb:  mov    -0x74(%ebp,%eax,4),%eax
084e0275 +0x3cf:  test   %eax,%eax
084e0277 +0x3d1:  je     084e032c <+0x486>
084e027d +0x3d7:  mov    -0x20(%ebp),%eax
084e0280 +0x3da:  mov    0x12(%eax),%ecx
084e0283 +0x3dd:  mov    -0x1c(%ebp),%eax
084e0286 +0x3e0:  mov    -0x6c(%ebp,%eax,4),%edx
084e028a +0x3e4:  mov    -0x1c(%ebp),%eax
084e028d +0x3e7:  mov    -0x74(%ebp,%eax,4),%eax
084e0291 +0x3eb:  mov    %ecx,0x10(%esp)
084e0295 +0x3ef:  mov    %edx,0xc(%esp)
084e0299 +0x3f3:  mov    %eax,0x8(%esp)
084e029d +0x3f7:  mov    0xc(%ebp),%eax
084e02a0 +0x3fa:  mov    %eax,0x4(%esp)
084e02a4 +0x3fe:  mov    0x8(%ebp),%eax
084e02a7 +0x401:  mov    %eax,(%esp)
084e02aa +0x404:  call   084e0390 <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii>  ; Inter_VillageAttackedReward::_send_reward_item(CUser*, unsigned long, int, int)
084e02af +0x409:  mov    -0x1c(%ebp),%eax
084e02b2 +0x40c:  mov    -0x6c(%ebp,%eax,4),%eax
084e02b6 +0x410:  mov    %eax,-0x1bc(%ebp)
084e02bc +0x416:  mov    -0x1c(%ebp),%eax
084e02bf +0x419:  mov    -0x74(%ebp,%eax,4),%edi
084e02c3 +0x41d:  mov    -0x20(%ebp),%eax
084e02c6 +0x420:  mov    0x12(%eax),%esi
084e02c9 +0x423:  movl   $0xffffffff,0x4(%esp)
084e02d1 +0x42b:  mov    0xc(%ebp),%eax
084e02d4 +0x42e:  mov    %eax,(%esp)
084e02d7 +0x431:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e02dc +0x436:  mov    %eax,%ebx
084e02de +0x438:  movl   $0x0,0xc(%esp)
084e02e6 +0x440:  movl   $0x4d8c,0x8(%esp)
084e02ee +0x448:  movl   $&_ZZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e02f6 +0x450:  lea    -0x30(%ebp),%eax
084e02f9 +0x453:  mov    %eax,(%esp)
084e02fc +0x456:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e0301 +0x45b:  mov    -0x1bc(%ebp),%eax
084e0307 +0x461:  mov    %eax,0x14(%esp)
084e030b +0x465:  mov    %edi,0x10(%esp)
084e030f +0x469:  mov    %esi,0xc(%esp)
084e0313 +0x46d:  mov    %ebx,0x8(%esp)
084e0317 +0x471:  movl   $"VillageAttacked Reward Ranker Item Index. [charac:%u][rank:%d][item:%u][count:%d]",0x4(%esp)
084e031f +0x479:  lea    -0x30(%ebp),%eax
084e0322 +0x47c:  mov    %eax,(%esp)
084e0325 +0x47f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e032a +0x484:  jmp    084e032d <+0x487>
084e032c +0x486:  nop
084e032d +0x487:  addl   $0x1,-0x1c(%ebp)
084e0331 +0x48b:  cmpl   $0x1,-0x1c(%ebp)
084e0335 +0x48f:  setle  %al
084e0338 +0x492:  test   %al,%al
084e033a +0x494:  jne    084e026e <+0x3c8>
084e0340 +0x49a:  jmp    084e0380 <+0x4da>
084e0342 +0x49c:  mov    -0x20(%ebp),%eax
084e0345 +0x49f:  mov    0x12(%eax),%eax
084e0348 +0x4a2:  mov    %eax,0x14(%esp)
084e034c +0x4a6:  movl   $"VillageAttackedReward Invalid Rank. [rank:%d]",0x10(%esp)
084e0354 +0x4ae:  movl   $0x4d92,0xc(%esp)
084e035c +0x4b6:  movl   $&_ZZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084e0364 +0x4be:  movl   $"InterDispatcher.cpp",0x4(%esp)
084e036c +0x4c6:  movl   $0x1,(%esp)
084e0373 +0x4cd:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084e0378 +0x4d2:  mov    $0x0,%eax
084e037d +0x4d7:  jmp    084e0385 <+0x4df>
084e037f +0x4d9:  nop
084e0380 +0x4da:  mov    $0x0,%eax
084e0385 +0x4df:  add    $0x1ec,%esp
084e038b +0x4e5:  pop    %ebx
084e038c +0x4e6:  pop    %esi
084e038d +0x4e7:  pop    %edi
084e038e +0x4e8:  pop    %ebp
084e038f +0x4e9:  ret
```

## 反编译 C

```c
// Inter_VillageAttackedReward::dispatch_sig @ 0x84dfea6

/* Inter_VillageAttackedReward::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined4 uVar7;
  Arad_DataManager *pAVar8;
  Arad_VillageAttackRewardItem *pAVar9;
  undefined4 uVar10;
  char local_1b5 [256];
  Inven_Item local_b5 [2];
  int local_b3;
  undefined2 local_aa;
  RankData local_78 [8];
  int aiStack_70 [2];
  undefined4 local_68;
  int local_64;
  int local_60;
  char local_59 [21];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  int local_24;
  int local_20;
  
  this = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this);
  if (cVar2 == '\0') {
    iVar3 = G_CEnvironment();
    if ((*(int *)(iVar3 + 0x1a8) == 1) || (iVar3 = G_CEnvironment(), *(int *)(iVar3 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((!bVar1) && (param_2 != (char *)0x0)) &&
       (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 != 0)) {
      local_24 = param_3;
      iVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar3 == *(int *)(local_24 + 0xe)) {
        iVar3 = *(int *)(local_24 + 0x16);
        if (iVar3 == 5) {
          Arad_VillageAttackRewardItem::Data::Data((Data *)&local_68,*(int *)(local_24 + 0x12),0,0);
          iVar3 = *(int *)(local_24 + 0x12);
          pAVar8 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
          pAVar9 = (Arad_VillageAttackRewardItem *)
                   ARAD::Arad_DataManager::getAradVillageAttackReward(pAVar8);
          cVar2 = Arad_VillageAttackRewardItem::find_reward_item(pAVar9,iVar3,(Data *)&local_68);
          if (cVar2 != '\0') {
            CUser::SetVillageAttackedReward((CUser *)param_2,true);
            _send_reward_item(param_1,(ulong)param_2,local_64,local_60);
            uVar5 = CUser::get_charac_no((CUser *)param_2,-1);
            cMyTrace::cMyTrace(local_44,
                               "virtual int Inter_VillageAttackedReward::dispatch_sig(CUser*, char*, int)"
                               ,0x4d7b,0);
            cMyTrace::operator()
                      (local_44,
                       "VillageAttacked Reward WinPoint Item Index. [charac:%u][win:%d][item:%u][count:%d]"
                       ,uVar5,local_68,local_64,local_60);
          }
        }
        else if (iVar3 == 6) {
          Arad_VillageAttackRewardItem::RankData::RankData(local_78);
          uVar5 = *(undefined4 *)(local_24 + 0x12);
          pAVar8 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
          pAVar9 = (Arad_VillageAttackRewardItem *)
                   ARAD::Arad_DataManager::getAradVillageAttackReward(pAVar8);
          cVar2 = Arad_VillageAttackRewardItem::find_ranking_reward_item
                            (pAVar9,(short)uVar5,local_78);
          if (cVar2 == '\0') {
            LogManager::logFormat
                      (1,"InterDispatcher.cpp",
                       "virtual int Inter_VillageAttackedReward::dispatch_sig(CUser*, char*, int)",
                       0x4d92,"VillageAttackedReward Invalid Rank. [rank:%d]",
                       *(undefined4 *)(local_24 + 0x12));
          }
          else {
            for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
              if (*(int *)(local_78 + local_20 * 4) != 0) {
                _send_reward_item(param_1,(ulong)param_2,*(int *)(local_78 + local_20 * 4),
                                  aiStack_70[local_20]);
                iVar3 = aiStack_70[local_20];
                uVar5 = *(undefined4 *)(local_78 + local_20 * 4);
                uVar7 = *(undefined4 *)(local_24 + 0x12);
                uVar10 = CUser::get_charac_no((CUser *)param_2,-1);
                cMyTrace::cMyTrace(local_34,
                                   "virtual int Inter_VillageAttackedReward::dispatch_sig(CUser*, char*, int)"
                                   ,0x4d8c,0);
                cMyTrace::operator()
                          (local_34,
                           "VillageAttacked Reward Ranker Item Index. [charac:%u][rank:%d][item:%u][count:%d]"
                           ,uVar10,uVar7,uVar5,iVar3);
              }
            }
          }
        }
        else if (iVar3 == 3) {
          CUser::SetVillageAttackedReward((CUser *)param_2,true);
          Inven_Item::Inven_Item(local_b5);
          local_b3 = 1;
          iVar3 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar3 + 0xc),3,local_b5,1);
          local_aa = 1;
          if (local_b3 == -1) {
            LogManager::logFormat
                      (1,"InterDispatcher.cpp",
                       "virtual int Inter_VillageAttackedReward::dispatch_sig(CUser*, char*, int)",
                       0x4d5f,"Inter_VillageAttackedReward::dispatch_sig() error item_id(%d)",
                       0xffffffff);
          }
          else {
            pcVar4 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_124",(bool *)0x0);
            strncpy(local_59,pcVar4,0x14);
            pcVar4 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_125",(bool *)0x0);
            strncpy(local_1b5,pcVar4,0xff);
            uVar5 = CUser::GetServerGroup((CUser *)param_2);
            sVar6 = strlen(local_1b5);
            uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (local_59,local_b5,0,uVar7,local_1b5,sVar6,0x1e,uVar5,0,0);
          }
        }
      }
    }
  }
  return 0;
}
```
