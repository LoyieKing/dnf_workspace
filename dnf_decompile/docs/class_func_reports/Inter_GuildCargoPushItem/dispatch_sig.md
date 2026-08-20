# dispatch_sig

`_ZN24Inter_GuildCargoPushItem12dispatch_sigEP5CUserPci`

`Inter_GuildCargoPushItem::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildCargoPushItem` | `0x084ddea2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ddea2  _ZN24Inter_GuildCargoPushItem12dispatch_sigEP5CUserPci
#           Inter_GuildCargoPushItem::dispatch_sig(CUser*, char*, int)
# range [0x084ddea2, 0x084de32f]
084ddea2 +0x000:  push   %ebp
084ddea3 +0x001:  mov    %esp,%ebp
084ddea5 +0x003:  push   %edi
084ddea6 +0x004:  push   %esi
084ddea7 +0x005:  push   %ebx
084ddea8 +0x006:  sub    $0xdc,%esp
084ddeae +0x00c:  mov    0x10(%ebp),%eax
084ddeb1 +0x00f:  mov    %eax,-0x24(%ebp)
084ddeb4 +0x012:  mov    0xc(%ebp),%eax
084ddeb7 +0x015:  mov    %eax,(%esp)
084ddeba +0x018:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084ddebf +0x01d:  cmp    $0x2,%eax
084ddec2 +0x020:  setle  %al
084ddec5 +0x023:  test   %al,%al
084ddec7 +0x025:  je     084dded3 <+0x31>
084ddec9 +0x027:  mov    $0x0,%ebx
084ddece +0x02c:  jmp    084de323 <+0x481>
084dded3 +0x031:  movl   $0xffffffff,0x4(%esp)
084ddedb +0x039:  mov    0xc(%ebp),%eax
084ddede +0x03c:  mov    %eax,(%esp)
084ddee1 +0x03f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ddee6 +0x044:  mov    %eax,%edx
084ddee8 +0x046:  mov    -0x24(%ebp),%eax
084ddeeb +0x049:  mov    0xe(%eax),%eax
084ddeee +0x04c:  cmp    %eax,%edx
084ddef0 +0x04e:  setne  %al
084ddef3 +0x051:  test   %al,%al
084ddef5 +0x053:  je     084ddf01 <+0x5f>
084ddef7 +0x055:  mov    $0x0,%ebx
084ddefc +0x05a:  jmp    084de323 <+0x481>
084ddf01 +0x05f:  mov    -0x24(%ebp),%eax
084ddf04 +0x062:  mov    0x23(%eax),%eax
084ddf07 +0x065:  mov    %eax,-0x80(%ebp)
084ddf0a +0x068:  mov    -0x24(%ebp),%eax
084ddf0d +0x06b:  movzwl 0x21(%eax),%eax
084ddf11 +0x06f:  movzwl %ax,%edi
084ddf14 +0x072:  mov    -0x24(%ebp),%eax
084ddf17 +0x075:  mov    0x1d(%eax),%esi
084ddf1a +0x078:  mov    -0x24(%ebp),%eax
084ddf1d +0x07b:  mov    0x18(%eax),%eax
084ddf20 +0x07e:  mov    %eax,%ebx
084ddf22 +0x080:  mov    -0x24(%ebp),%eax
084ddf25 +0x083:  mov    0x13(%eax),%ecx
084ddf28 +0x086:  mov    -0x24(%ebp),%eax
084ddf2b +0x089:  movzbl 0x12(%eax),%eax
084ddf2f +0x08d:  movzbl %al,%edx
084ddf32 +0x090:  mov    0xc(%ebp),%eax
084ddf35 +0x093:  add    $0x79700,%eax
084ddf3a +0x098:  mov    %eax,-0x8c(%ebp)
084ddf40 +0x09e:  mov    -0x80(%ebp),%eax
084ddf43 +0x0a1:  mov    %eax,0x1c(%esp)
084ddf47 +0x0a5:  mov    %edi,0x18(%esp)
084ddf4b +0x0a9:  mov    %esi,0x14(%esp)
084ddf4f +0x0ad:  mov    %ebx,0x10(%esp)
084ddf53 +0x0b1:  mov    %ecx,0xc(%esp)
084ddf57 +0x0b5:  mov    %edx,0x8(%esp)
084ddf5b +0x0b9:  movl   $0x8,0x4(%esp)
084ddf63 +0x0c1:  mov    -0x8c(%ebp),%eax
084ddf69 +0x0c7:  mov    %eax,(%esp)
084ddf6c +0x0ca:  call   08686732 <_ZN15cUserHistoryLog24GuildCargoPushItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii>  ; cUserHistoryLog::GuildCargoPushItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int)
084ddf71 +0x0cf:  mov    -0x24(%ebp),%eax
084ddf74 +0x0d2:  movzbl 0x12(%eax),%eax
084ddf78 +0x0d6:  cmp    $0xc1,%al
084ddf7a +0x0d8:  je     084de23c <+0x39a>
084ddf80 +0x0de:  mov    -0x24(%ebp),%eax
084ddf83 +0x0e1:  movzbl 0x12(%eax),%eax
084ddf87 +0x0e5:  movzbl %al,%eax
084ddf8a +0x0e8:  mov    %eax,0x8(%esp)
084ddf8e +0x0ec:  movl   $0xfb,0x4(%esp)
084ddf96 +0x0f4:  mov    0xc(%ebp),%eax
084ddf99 +0x0f7:  mov    %eax,(%esp)
084ddf9c +0x0fa:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084ddfa1 +0x0ff:  mov    0xc(%ebp),%eax
084ddfa4 +0x102:  mov    %eax,(%esp)
084ddfa7 +0x105:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084ddfac +0x10a:  mov    %eax,-0x20(%ebp)
084ddfaf +0x10d:  mov    -0x24(%ebp),%eax
084ddfb2 +0x110:  mov    0x18(%eax),%eax
084ddfb5 +0x113:  mov    %eax,%ebx
084ddfb7 +0x115:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ddfbc +0x11a:  mov    %ebx,0x4(%esp)
084ddfc0 +0x11e:  mov    %eax,(%esp)
084ddfc3 +0x121:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084ddfc8 +0x126:  mov    %eax,-0x1c(%ebp)
084ddfcb +0x129:  lea    -0x6d(%ebp),%eax
084ddfce +0x12c:  mov    %eax,(%esp)
084ddfd1 +0x12f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084ddfd6 +0x134:  mov    -0x1c(%ebp),%eax
084ddfd9 +0x137:  mov    (%eax),%eax
084ddfdb +0x139:  add    $0x8,%eax
084ddfde +0x13c:  mov    (%eax),%edx
084ddfe0 +0x13e:  lea    -0x6d(%ebp),%eax
084ddfe3 +0x141:  mov    %eax,0x4(%esp)
084ddfe7 +0x145:  mov    -0x1c(%ebp),%eax
084ddfea +0x148:  mov    %eax,(%esp)
084ddfed +0x14b:  call   *%edx
084ddfef +0x14d:  mov    -0x24(%ebp),%eax
084ddff2 +0x150:  mov    0x18(%eax),%eax
084ddff5 +0x153:  mov    %eax,-0x6b(%ebp)
084ddff8 +0x156:  mov    -0x24(%ebp),%eax
084ddffb +0x159:  mov    0x1d(%eax),%eax
084ddffe +0x15c:  mov    %eax,-0x66(%ebp)
084de001 +0x15f:  mov    -0x24(%ebp),%eax
084de004 +0x162:  movzwl 0x21(%eax),%eax
084de008 +0x166:  mov    %ax,-0x62(%ebp)
084de00c +0x16a:  mov    -0x24(%ebp),%eax
084de00f +0x16d:  mov    0x23(%eax),%eax
084de012 +0x170:  mov    %eax,-0x60(%ebp)
084de015 +0x173:  mov    -0x24(%ebp),%eax
084de018 +0x176:  movzbl 0x1c(%eax),%eax
084de01c +0x17a:  movzbl %al,%eax
084de01f +0x17d:  mov    %eax,0x4(%esp)
084de023 +0x181:  lea    -0x6d(%ebp),%eax
084de026 +0x184:  mov    %eax,(%esp)
084de029 +0x187:  call   081507e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11d
084de02e +0x18c:  mov    -0x24(%ebp),%eax
084de031 +0x18f:  movzwl 0x28(%eax),%eax
084de035 +0x193:  movzwl %ax,%edx
084de038 +0x196:  mov    -0x24(%ebp),%eax
084de03b +0x199:  movzbl 0x27(%eax),%eax
084de03f +0x19d:  movzbl %al,%eax
084de042 +0x1a0:  mov    %edx,0x8(%esp)
084de046 +0x1a4:  mov    %eax,0x4(%esp)
084de04a +0x1a8:  lea    -0x6d(%ebp),%eax
084de04d +0x1ab:  add    $0x11,%eax
084de050 +0x1ae:  mov    %eax,(%esp)
084de053 +0x1b1:  call   084b40e4 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x197>  ; global constructors keyed to game_master::CMacro::Reset()+0x197
084de058 +0x1b6:  mov    -0x24(%ebp),%eax
084de05b +0x1b9:  mov    0x34(%eax),%edx
084de05e +0x1bc:  mov    %edx,-0x48(%ebp)
084de061 +0x1bf:  mov    0x38(%eax),%edx
084de064 +0x1c2:  mov    %edx,-0x44(%ebp)
084de067 +0x1c5:  mov    0x3c(%eax),%edx
084de06a +0x1c8:  mov    %edx,-0x40(%ebp)
084de06d +0x1cb:  movzwl 0x40(%eax),%eax
084de071 +0x1cf:  mov    %ax,-0x3c(%ebp)
084de075 +0x1d3:  mov    -0x24(%ebp),%eax
084de078 +0x1d6:  add    $0x42,%eax
084de07b +0x1d9:  mov    %eax,(%esp)
084de07e +0x1dc:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
084de083 +0x1e1:  movzbl %al,%eax
084de086 +0x1e4:  mov    %eax,0x4(%esp)
084de08a +0x1e8:  lea    -0x6d(%ebp),%eax
084de08d +0x1eb:  add    $0x33,%eax
084de090 +0x1ee:  mov    %eax,(%esp)
084de093 +0x1f1:  call   084e906a <_GLOBAL__I__Z7getUserj+0x1c>  ; global constructors keyed to getUser(unsigned int)+0x1c
084de098 +0x1f6:  movl   $0x0,0x4c(%esp)
084de0a0 +0x1fe:  movl   $0x1,0x48(%esp)
084de0a8 +0x206:  movl   $0x27,0x44(%esp)
084de0b0 +0x20e:  mov    -0x6d(%ebp),%eax
084de0b3 +0x211:  mov    %eax,0x4(%esp)
084de0b7 +0x215:  mov    -0x69(%ebp),%eax
084de0ba +0x218:  mov    %eax,0x8(%esp)
084de0be +0x21c:  mov    -0x65(%ebp),%eax
084de0c1 +0x21f:  mov    %eax,0xc(%esp)
084de0c5 +0x223:  mov    -0x61(%ebp),%eax
084de0c8 +0x226:  mov    %eax,0x10(%esp)
084de0cc +0x22a:  mov    -0x5d(%ebp),%eax
084de0cf +0x22d:  mov    %eax,0x14(%esp)
084de0d3 +0x231:  mov    -0x59(%ebp),%eax
084de0d6 +0x234:  mov    %eax,0x18(%esp)
084de0da +0x238:  mov    -0x55(%ebp),%eax
084de0dd +0x23b:  mov    %eax,0x1c(%esp)
084de0e1 +0x23f:  mov    -0x51(%ebp),%eax
084de0e4 +0x242:  mov    %eax,0x20(%esp)
084de0e8 +0x246:  mov    -0x4d(%ebp),%eax
084de0eb +0x249:  mov    %eax,0x24(%esp)
084de0ef +0x24d:  mov    -0x49(%ebp),%eax
084de0f2 +0x250:  mov    %eax,0x28(%esp)
084de0f6 +0x254:  mov    -0x45(%ebp),%eax
084de0f9 +0x257:  mov    %eax,0x2c(%esp)
084de0fd +0x25b:  mov    -0x41(%ebp),%eax
084de100 +0x25e:  mov    %eax,0x30(%esp)
084de104 +0x262:  mov    -0x3d(%ebp),%eax
084de107 +0x265:  mov    %eax,0x34(%esp)
084de10b +0x269:  mov    -0x39(%ebp),%eax
084de10e +0x26c:  mov    %eax,0x38(%esp)
084de112 +0x270:  mov    -0x35(%ebp),%eax
084de115 +0x273:  mov    %eax,0x3c(%esp)
084de119 +0x277:  movzbl -0x31(%ebp),%eax
084de11d +0x27b:  mov    %al,0x40(%esp)
084de121 +0x27f:  mov    -0x20(%ebp),%eax
084de124 +0x282:  mov    %eax,(%esp)
084de127 +0x285:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
084de12c +0x28a:  shr    $0x1f,%eax
084de12f +0x28d:  test   %al,%al
084de131 +0x28f:  je     084de232 <+0x390>
084de137 +0x295:  mov    0xc(%ebp),%eax
084de13a +0x298:  mov    %eax,(%esp)
084de13d +0x29b:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084de142 +0x2a0:  mov    %eax,%ebx
084de144 +0x2a2:  mov    -0x24(%ebp),%eax
084de147 +0x2a5:  mov    0xe(%eax),%esi
084de14a +0x2a8:  movl   $0x0,0xc(%esp)
084de152 +0x2b0:  movl   $"game_server_msg_114",0x8(%esp)
084de15a +0x2b8:  movl   $0x4,0x4(%esp)
084de162 +0x2c0:  movl   $&g_scriptStringManager_,(%esp)
084de169 +0x2c7:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084de16e +0x2cc:  movl   $0x0,0x24(%esp)
084de176 +0x2d4:  movl   $0x0,0x20(%esp)
084de17e +0x2dc:  mov    %ebx,0x1c(%esp)
084de182 +0x2e0:  movl   $0x0,0x18(%esp)
084de18a +0x2e8:  movl   $0x0,0x14(%esp)
084de192 +0x2f0:  movl   $0x0,0x10(%esp)
084de19a +0x2f8:  mov    %esi,0xc(%esp)
084de19e +0x2fc:  movl   $0x0,0x8(%esp)
084de1a6 +0x304:  lea    -0x6d(%ebp),%edx
084de1a9 +0x307:  mov    %edx,0x4(%esp)
084de1ad +0x30b:  mov    %eax,(%esp)
084de1b0 +0x30e:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084de1b5 +0x313:  mov    -0x24(%ebp),%eax
084de1b8 +0x316:  add    $0x42,%eax
084de1bb +0x319:  mov    %eax,(%esp)
084de1be +0x31c:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
084de1c3 +0x321:  movzbl %al,%eax
084de1c6 +0x324:  mov    %eax,-0x7c(%ebp)
084de1c9 +0x327:  mov    -0x24(%ebp),%eax
084de1cc +0x32a:  movzbl 0x1c(%eax),%eax
084de1d0 +0x32e:  movzbl %al,%edi
084de1d3 +0x331:  mov    -0x24(%ebp),%eax
084de1d6 +0x334:  mov    0x23(%eax),%eax
084de1d9 +0x337:  mov    %eax,%esi
084de1db +0x339:  mov    -0x24(%ebp),%eax
084de1de +0x33c:  movzwl 0x21(%eax),%eax
084de1e2 +0x340:  movzwl %ax,%ebx
084de1e5 +0x343:  mov    -0x24(%ebp),%eax
084de1e8 +0x346:  mov    0x1d(%eax),%ecx
084de1eb +0x349:  mov    -0x24(%ebp),%eax
084de1ee +0x34c:  mov    0x18(%eax),%eax
084de1f1 +0x34f:  mov    %eax,%edx
084de1f3 +0x351:  mov    0xc(%ebp),%eax
084de1f6 +0x354:  add    $0x79700,%eax
084de1fb +0x359:  mov    %eax,-0x8c(%ebp)
084de201 +0x35f:  mov    -0x7c(%ebp),%eax
084de204 +0x362:  mov    %eax,0x1c(%esp)
084de208 +0x366:  mov    %edi,0x18(%esp)
084de20c +0x36a:  mov    %esi,0x14(%esp)
084de210 +0x36e:  mov    %ebx,0x10(%esp)
084de214 +0x372:  mov    %ecx,0xc(%esp)
084de218 +0x376:  mov    %edx,0x8(%esp)
084de21c +0x37a:  movl   $0x9,0x4(%esp)
084de224 +0x382:  mov    -0x8c(%ebp),%eax
084de22a +0x388:  mov    %eax,(%esp)
084de22d +0x38b:  call   08686694 <_ZN15cUserHistoryLog22GuildCargoItemRecoveryE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiih>  ; cUserHistoryLog::GuildCargoItemRecovery(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, unsigned char)
084de232 +0x390:  mov    $0x0,%ebx
084de237 +0x395:  jmp    084de323 <+0x481>
084de23c +0x39a:  lea    -0x30(%ebp),%eax
084de23f +0x39d:  mov    %eax,(%esp)
084de242 +0x3a0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084de247 +0x3a5:  movl   $0xfb,0x8(%esp)
084de24f +0x3ad:  movl   $0x1,0x4(%esp)
084de257 +0x3b5:  lea    -0x30(%ebp),%eax
084de25a +0x3b8:  mov    %eax,(%esp)
084de25d +0x3bb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084de262 +0x3c0:  movl   $0x1,0x4(%esp)
084de26a +0x3c8:  lea    -0x30(%ebp),%eax
084de26d +0x3cb:  mov    %eax,(%esp)
084de270 +0x3ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084de275 +0x3d3:  mov    -0x24(%ebp),%eax
084de278 +0x3d6:  movzbl 0x4c(%eax),%eax
084de27c +0x3da:  movzbl %al,%eax
084de27f +0x3dd:  mov    %eax,0x4(%esp)
084de283 +0x3e1:  lea    -0x30(%ebp),%eax
084de286 +0x3e4:  mov    %eax,(%esp)
084de289 +0x3e7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084de28e +0x3ec:  mov    -0x24(%ebp),%eax
084de291 +0x3ef:  movzwl 0x4d(%eax),%eax
084de295 +0x3f3:  movzwl %ax,%eax
084de298 +0x3f6:  mov    %eax,0x4(%esp)
084de29c +0x3fa:  lea    -0x30(%ebp),%eax
084de29f +0x3fd:  mov    %eax,(%esp)
084de2a2 +0x400:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084de2a7 +0x405:  mov    -0x24(%ebp),%eax
084de2aa +0x408:  mov    0x1d(%eax),%eax
084de2ad +0x40b:  mov    %eax,0x4(%esp)
084de2b1 +0x40f:  lea    -0x30(%ebp),%eax
084de2b4 +0x412:  mov    %eax,(%esp)
084de2b7 +0x415:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084de2bc +0x41a:  mov    -0x24(%ebp),%eax
084de2bf +0x41d:  mov    0x13(%eax),%eax
084de2c2 +0x420:  mov    %eax,0x4(%esp)
084de2c6 +0x424:  lea    -0x30(%ebp),%eax
084de2c9 +0x427:  mov    %eax,(%esp)
084de2cc +0x42a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084de2d1 +0x42f:  movl   $0x1,0x4(%esp)
084de2d9 +0x437:  lea    -0x30(%ebp),%eax
084de2dc +0x43a:  mov    %eax,(%esp)
084de2df +0x43d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084de2e4 +0x442:  lea    -0x30(%ebp),%eax
084de2e7 +0x445:  mov    %eax,0x4(%esp)
084de2eb +0x449:  mov    0xc(%ebp),%eax
084de2ee +0x44c:  mov    %eax,(%esp)
084de2f1 +0x44f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084de2f6 +0x454:  mov    $0x0,%ebx
084de2fb +0x459:  lea    -0x30(%ebp),%eax
084de2fe +0x45c:  mov    %eax,(%esp)
084de301 +0x45f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084de306 +0x464:  jmp    084de323 <+0x481>
084de308 +0x466:  mov    %edx,%ebx
084de30a +0x468:  mov    %eax,%esi
084de30c +0x46a:  lea    -0x30(%ebp),%eax
084de30f +0x46d:  mov    %eax,(%esp)
084de312 +0x470:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084de317 +0x475:  mov    %esi,%eax
084de319 +0x477:  mov    %ebx,%edx
084de31b +0x479:  mov    %eax,(%esp)
084de31e +0x47c:  call   08ae3750 <_Unwind_Resume>
084de323 +0x481:  mov    %ebx,%eax
084de325 +0x483:  add    $0xdc,%esp
084de32b +0x489:  pop    %ebx
084de32c +0x48a:  pop    %esi
084de32d +0x48b:  pop    %edi
084de32e +0x48c:  pop    %ebp
084de32f +0x48d:  ret
```

## 反编译 C

```c
// Inter_GuildCargoPushItem::dispatch_sig @ 0x84ddea2

/* Inter_GuildCargoPushItem::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargoPushItem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  uchar uVar2;
  undefined1 uVar3;
  int iVar4;
  CDataManager *this;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 local_71;
  undefined2 uStack_6f;
  undefined2 uStack_6d;
  undefined1 uStack_6b;
  undefined4 uStack_6a;
  undefined1 local_66;
  undefined4 uStack_65;
  undefined4 uStack_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 uStack_4d;
  undefined4 uStack_49;
  undefined4 uStack_45;
  undefined1 uStack_41;
  undefined2 local_40;
  UpgradeSeparateInfo UStack_3e;
  undefined4 local_3d;
  undefined4 local_39;
  undefined1 local_35;
  PacketGuard local_34 [12];
  int local_28;
  undefined4 local_24;
  int *local_20;
  
  local_28 = param_3;
  iVar4 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar4) &&
     (iVar4 = CUser::get_charac_no((CUser *)param_2,-1), iVar4 == *(int *)(local_28 + 0xe))) {
    cUserHistoryLog::GuildCargoPushItemResult
              ((cUserHistoryLog *)(param_2 + 0x79700),8,*(undefined1 *)(local_28 + 0x12),
               *(undefined4 *)(local_28 + 0x13),*(undefined4 *)(local_28 + 0x18),
               *(undefined4 *)(local_28 + 0x1d),*(undefined2 *)(local_28 + 0x21),
               *(undefined4 *)(local_28 + 0x23));
    if (*(char *)(local_28 + 0x12) == -0x3f) {
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084de25d to 084de2f5 has its CatchHandler @ 084de308 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xfb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(local_28 + 0x4c));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_34,(uint)*(ushort *)(local_28 + 0x4d));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,*(int *)(local_28 + 0x1d));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,*(int *)(local_28 + 0x13));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send((CUser *)param_2,local_34);
      PacketGuard::~PacketGuard(local_34);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,*(undefined1 *)(local_28 + 0x12));
      local_24 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      iVar4 = *(int *)(local_28 + 0x18);
      this = (CDataManager *)G_CDataManager();
      local_20 = (int *)CDataManager::find_item(this,iVar4);
      Inven_Item::Inven_Item((Inven_Item *)&local_71);
      (**(code **)(*local_20 + 8))(local_20,&local_71);
      uStack_6f = (undefined2)*(undefined4 *)(local_28 + 0x18);
      uStack_6d = (undefined2)((uint)*(undefined4 *)(local_28 + 0x18) >> 0x10);
      uStack_6a = *(undefined4 *)(local_28 + 0x1d);
      local_66 = (undefined1)*(undefined2 *)(local_28 + 0x21);
      uStack_65._0_1_ = (undefined1)((ushort)*(undefined2 *)(local_28 + 0x21) >> 8);
      uStack_65._1_3_ = (undefined3)*(undefined4 *)(local_28 + 0x23);
      uStack_61._0_1_ = (undefined1)((uint)*(undefined4 *)(local_28 + 0x23) >> 0x18);
      Inven_Item::SetItemAttr((Inven_Item *)&local_71,*(uchar *)(local_28 + 0x1c));
      stAmplifyOption_t::assign
                ((stAmplifyOption_t *)((int)&uStack_61 + 1),*(uchar *)(local_28 + 0x27),
                 *(ushort *)(local_28 + 0x28));
      uStack_4d._1_3_ = (undefined3)*(undefined4 *)(local_28 + 0x34);
      uStack_49._1_3_ = (undefined3)*(undefined4 *)(local_28 + 0x38);
      uStack_49 = CONCAT31(uStack_49._1_3_,(char)((uint)*(undefined4 *)(local_28 + 0x34) >> 0x18));
      uStack_45._1_3_ = (undefined3)*(undefined4 *)(local_28 + 0x3c);
      uStack_45 = CONCAT31(uStack_45._1_3_,(char)((uint)*(undefined4 *)(local_28 + 0x38) >> 0x18));
      uStack_41 = (undefined1)((uint)*(undefined4 *)(local_28 + 0x3c) >> 0x18);
      local_40 = *(undefined2 *)(local_28 + 0x40);
      uVar2 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(local_28 + 0x42));
      UpgradeSeparateInfo::SetUpgradeSeparate(&UStack_3e,uVar2);
      iVar4 = CInventory::insertItemIntoInventory
                        (local_24,CONCAT22(uStack_6f,local_71),
                         CONCAT13((undefined1)uStack_6a,CONCAT12(uStack_6b,uStack_6d)),
                         CONCAT13(local_66,uStack_6a._1_3_),uStack_65,uStack_61,local_5d,local_59,
                         local_55,local_51,uStack_4d,uStack_49,uStack_45,
                         CONCAT13(UStack_3e,CONCAT21(local_40,uStack_41)),local_3d,local_39,local_35
                         ,0x27,1,0);
      if (iVar4 < 0) {
        uVar5 = CUser::GetServerGroup((CUser *)param_2);
        uVar1 = *(undefined4 *)(local_28 + 0xe);
        uVar6 = RDARScriptStringManager::findString
                          ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_114"
                           ,(bool *)0x0);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(uVar6,&local_71,0,uVar1,0,0,0,uVar5,0,0);
        uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(local_28 + 0x42));
        cUserHistoryLog::GuildCargoItemRecovery
                  ((cUserHistoryLog *)(param_2 + 0x79700),9,*(undefined4 *)(local_28 + 0x18),
                   *(undefined4 *)(local_28 + 0x1d),*(undefined2 *)(local_28 + 0x21),
                   *(undefined4 *)(local_28 + 0x23),*(undefined1 *)(local_28 + 0x1c),uVar3);
      }
    }
  }
  return 0;
}
```
