# sendPostalReward

`_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_`

`eventReward::sendPostalReward(CUser&, rewardKey, int, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080f0976` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f0976  _ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_
#           eventReward::sendPostalReward(CUser&, rewardKey, int, char const*, char const*)
# range [0x080f0976, 0x080f0d21]
080f0976 +0x000:  push   %ebp
080f0977 +0x001:  mov    %esp,%ebp
080f0979 +0x003:  push   %edi
080f097a +0x004:  push   %esi
080f097b +0x005:  push   %ebx
080f097c +0x006:  sub    $0x1bc,%esp
080f0982 +0x00c:  mov    0x8(%ebp),%eax
080f0985 +0x00f:  mov    %eax,(%esp)
080f0988 +0x012:  call   080f19b2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa34>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa34
080f098d +0x017:  test   %al,%al
080f098f +0x019:  je     080f099b <+0x25>
080f0991 +0x01b:  mov    $0x0,%eax
080f0996 +0x020:  jmp    080f0d17 <+0x3a1>
080f099b +0x025:  mov    0x8(%ebp),%edx
080f099e +0x028:  lea    -0x44(%ebp),%eax
080f09a1 +0x02b:  lea    0x10(%ebp),%ecx
080f09a4 +0x02e:  mov    %ecx,0x8(%esp)
080f09a8 +0x032:  mov    %edx,0x4(%esp)
080f09ac +0x036:  mov    %eax,(%esp)
080f09af +0x039:  call   080f19c6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa48>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa48
080f09b4 +0x03e:  sub    $0x4,%esp
080f09b7 +0x041:  mov    0x8(%ebp),%edx
080f09ba +0x044:  lea    -0x40(%ebp),%eax
080f09bd +0x047:  mov    %edx,0x4(%esp)
080f09c1 +0x04b:  mov    %eax,(%esp)
080f09c4 +0x04e:  call   080f19f2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa74>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa74
080f09c9 +0x053:  sub    $0x4,%esp
080f09cc +0x056:  lea    -0x40(%ebp),%eax
080f09cf +0x059:  mov    %eax,0x4(%esp)
080f09d3 +0x05d:  lea    -0x44(%ebp),%eax
080f09d6 +0x060:  mov    %eax,(%esp)
080f09d9 +0x063:  call   080f1a18 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa9a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa9a
080f09de +0x068:  test   %al,%al
080f09e0 +0x06a:  je     080f09ec <+0x76>
080f09e2 +0x06c:  mov    $0x0,%eax
080f09e7 +0x071:  jmp    080f0d17 <+0x3a1>
080f09ec +0x076:  lea    -0x44(%ebp),%eax
080f09ef +0x079:  mov    %eax,(%esp)
080f09f2 +0x07c:  call   080f1a2c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xaae>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xaae
080f09f7 +0x081:  add    $0x8,%eax
080f09fa +0x084:  mov    %eax,-0x30(%ebp)
080f09fd +0x087:  lea    -0x48(%ebp),%eax
080f0a00 +0x08a:  lea    0x18(%ebp),%edx
080f0a03 +0x08d:  mov    %edx,0x8(%esp)
080f0a07 +0x091:  mov    -0x30(%ebp),%edx
080f0a0a +0x094:  mov    %edx,0x4(%esp)
080f0a0e +0x098:  mov    %eax,(%esp)
080f0a11 +0x09b:  call   080f16b6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x738>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x738
080f0a16 +0x0a0:  sub    $0x4,%esp
080f0a19 +0x0a3:  lea    -0x3c(%ebp),%eax
080f0a1c +0x0a6:  mov    -0x30(%ebp),%edx
080f0a1f +0x0a9:  mov    %edx,0x4(%esp)
080f0a23 +0x0ad:  mov    %eax,(%esp)
080f0a26 +0x0b0:  call   080f16e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x764>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x764
080f0a2b +0x0b5:  sub    $0x4,%esp
080f0a2e +0x0b8:  lea    -0x3c(%ebp),%eax
080f0a31 +0x0bb:  mov    %eax,0x4(%esp)
080f0a35 +0x0bf:  lea    -0x48(%ebp),%eax
080f0a38 +0x0c2:  mov    %eax,(%esp)
080f0a3b +0x0c5:  call   080f1a3a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xabc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xabc
080f0a40 +0x0ca:  test   %al,%al
080f0a42 +0x0cc:  je     080f0a4e <+0xd8>
080f0a44 +0x0ce:  mov    $0x0,%eax
080f0a49 +0x0d3:  jmp    080f0d17 <+0x3a1>
080f0a4e +0x0d8:  lea    -0x48(%ebp),%eax
080f0a51 +0x0db:  mov    %eax,(%esp)
080f0a54 +0x0de:  call   080f171c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x79e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x79e
080f0a59 +0x0e3:  add    $0x4,%eax
080f0a5c +0x0e6:  mov    %eax,-0x2c(%ebp)
080f0a5f +0x0e9:  mov    -0x2c(%ebp),%eax
080f0a62 +0x0ec:  mov    %eax,(%esp)
080f0a65 +0x0ef:  call   080f1a4e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xad0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xad0
080f0a6a +0x0f4:  test   %al,%al
080f0a6c +0x0f6:  je     080f0a78 <+0x102>
080f0a6e +0x0f8:  mov    $0x0,%eax
080f0a73 +0x0fd:  jmp    080f0d17 <+0x3a1>
080f0a78 +0x102:  lea    -0x4c(%ebp),%eax
080f0a7b +0x105:  mov    -0x2c(%ebp),%edx
080f0a7e +0x108:  mov    %edx,0x4(%esp)
080f0a82 +0x10c:  mov    %eax,(%esp)
080f0a85 +0x10f:  call   080f1a92 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xb14>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xb14
080f0a8a +0x114:  sub    $0x4,%esp
080f0a8d +0x117:  jmp    080f0ce3 <+0x36d>
080f0a92 +0x11c:  lea    -0x4c(%ebp),%eax
080f0a95 +0x11f:  mov    %eax,(%esp)
080f0a98 +0x122:  call   080f1b3c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xbbe>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xbbe
080f0a9d +0x127:  mov    0x4(%eax),%eax
080f0aa0 +0x12a:  mov    %eax,-0x28(%ebp)
080f0aa3 +0x12d:  lea    -0x89(%ebp),%eax
080f0aa9 +0x133:  mov    %eax,(%esp)
080f0aac +0x136:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
080f0ab1 +0x13b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f0ab6 +0x140:  mov    -0x28(%ebp),%edx
080f0ab9 +0x143:  mov    %edx,0x4(%esp)
080f0abd +0x147:  mov    %eax,(%esp)
080f0ac0 +0x14a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
080f0ac5 +0x14f:  mov    %eax,-0x24(%ebp)
080f0ac8 +0x152:  movl   $0x0,-0x20(%ebp)
080f0acf +0x159:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
080f0ad4 +0x15e:  mov    %eax,(%esp)
080f0ad7 +0x161:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
080f0adc +0x166:  test   %al,%al
080f0ade +0x168:  je     080f0af0 <+0x17a>
080f0ae0 +0x16a:  mov    0xc(%ebp),%eax
080f0ae3 +0x16d:  mov    %eax,(%esp)
080f0ae6 +0x170:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
080f0aeb +0x175:  mov    %eax,-0x20(%ebp)
080f0aee +0x178:  jmp    080f0afe <+0x188>
080f0af0 +0x17a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
080f0af5 +0x17f:  mov    0x378(%eax),%eax
080f0afb +0x185:  mov    %eax,-0x20(%ebp)
080f0afe +0x188:  cmpl   $0x0,-0x24(%ebp)
080f0b02 +0x18c:  je     080f0cc6 <+0x350>
080f0b08 +0x192:  mov    -0x28(%ebp),%eax
080f0b0b +0x195:  mov    %eax,-0x87(%ebp)
080f0b11 +0x19b:  mov    -0x24(%ebp),%eax
080f0b14 +0x19e:  mov    (%eax),%eax
080f0b16 +0x1a0:  add    $0x8,%eax
080f0b19 +0x1a3:  mov    (%eax),%edx
080f0b1b +0x1a5:  lea    -0x89(%ebp),%eax
080f0b21 +0x1ab:  mov    %eax,0x4(%esp)
080f0b25 +0x1af:  mov    -0x24(%ebp),%eax
080f0b28 +0x1b2:  mov    %eax,(%esp)
080f0b2b +0x1b5:  call   *%edx
080f0b2d +0x1b7:  lea    -0x4c(%ebp),%eax
080f0b30 +0x1ba:  mov    %eax,(%esp)
080f0b33 +0x1bd:  call   080f1b46 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xbc8>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xbc8
080f0b38 +0x1c2:  mov    %eax,0xc(%esp)
080f0b3c +0x1c6:  mov    -0x24(%ebp),%eax
080f0b3f +0x1c9:  mov    %eax,0x8(%esp)
080f0b43 +0x1cd:  lea    -0x89(%ebp),%eax
080f0b49 +0x1d3:  mov    %eax,0x4(%esp)
080f0b4d +0x1d7:  mov    0x8(%ebp),%eax
080f0b50 +0x1da:  mov    %eax,(%esp)
080f0b53 +0x1dd:  call   080f0d6e <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData>  ; eventReward::applyItemOption(Inven_Item&, CItem const*, itemData const&)
080f0b58 +0x1e2:  lea    -0x189(%ebp),%edx
080f0b5e +0x1e8:  mov    $0x100,%ebx
080f0b63 +0x1ed:  mov    $0x0,%eax
080f0b68 +0x1f2:  mov    %edx,%ecx
080f0b6a +0x1f4:  and    $0x1,%ecx
080f0b6d +0x1f7:  test   %ecx,%ecx
080f0b6f +0x1f9:  je     080f0b79 <+0x203>
080f0b71 +0x1fb:  mov    %al,(%edx)
080f0b73 +0x1fd:  add    $0x1,%edx
080f0b76 +0x200:  sub    $0x1,%ebx
080f0b79 +0x203:  mov    %edx,%ecx
080f0b7b +0x205:  and    $0x2,%ecx
080f0b7e +0x208:  test   %ecx,%ecx
080f0b80 +0x20a:  je     080f0b8b <+0x215>
080f0b82 +0x20c:  mov    %ax,(%edx)
080f0b85 +0x20f:  add    $0x2,%edx
080f0b88 +0x212:  sub    $0x2,%ebx
080f0b8b +0x215:  mov    %ebx,%ecx
080f0b8d +0x217:  shr    $0x2,%ecx
080f0b90 +0x21a:  mov    %edx,%edi
080f0b92 +0x21c:  rep stos %eax,%es:(%edi)
080f0b94 +0x21e:  mov    %edi,%edx
080f0b96 +0x220:  mov    %ebx,%ecx
080f0b98 +0x222:  and    $0x2,%ecx
080f0b9b +0x225:  test   %ecx,%ecx
080f0b9d +0x227:  je     080f0ba5 <+0x22f>
080f0b9f +0x229:  mov    %ax,(%edx)
080f0ba2 +0x22c:  add    $0x2,%edx
080f0ba5 +0x22f:  mov    %ebx,%ecx
080f0ba7 +0x231:  and    $0x1,%ecx
080f0baa +0x234:  test   %ecx,%ecx
080f0bac +0x236:  je     080f0bb3 <+0x23d>
080f0bae +0x238:  mov    %al,(%edx)
080f0bb0 +0x23a:  add    $0x1,%edx
080f0bb3 +0x23d:  mov    0xc(%ebp),%eax
080f0bb6 +0x240:  mov    %eax,(%esp)
080f0bb9 +0x243:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
080f0bbe +0x248:  mov    %eax,%ebx
080f0bc0 +0x24a:  movl   $0x0,0xc(%esp)
080f0bc8 +0x252:  mov    0x20(%ebp),%eax
080f0bcb +0x255:  mov    %eax,0x8(%esp)
080f0bcf +0x259:  movl   $0x4,0x4(%esp)
080f0bd7 +0x261:  movl   $&g_scriptStringManager_,(%esp)
080f0bde +0x268:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
080f0be3 +0x26d:  mov    %ebx,0xc(%esp)
080f0be7 +0x271:  mov    %eax,0x8(%esp)
080f0beb +0x275:  movl   $0xff,0x4(%esp)
080f0bf3 +0x27d:  lea    -0x189(%ebp),%eax
080f0bf9 +0x283:  mov    %eax,(%esp)
080f0bfc +0x286:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
080f0c01 +0x28b:  mov    -0x87(%ebp),%eax
080f0c07 +0x291:  test   %eax,%eax
080f0c09 +0x293:  je     080f0c21 <+0x2ab>
080f0c0b +0x295:  mov    -0x24(%ebp),%eax
080f0c0e +0x298:  mov    %eax,(%esp)
080f0c11 +0x29b:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
080f0c16 +0x2a0:  test   %al,%al
080f0c18 +0x2a2:  je     080f0c21 <+0x2ab>
080f0c1a +0x2a4:  mov    $0x1,%eax
080f0c1f +0x2a9:  jmp    080f0c26 <+0x2b0>
080f0c21 +0x2ab:  mov    $0x0,%eax
080f0c26 +0x2b0:  test   %al,%al
080f0c28 +0x2b2:  je     080f0cc6 <+0x350>
080f0c2e +0x2b8:  mov    -0x24(%ebp),%eax
080f0c31 +0x2bb:  mov    %eax,(%esp)
080f0c34 +0x2be:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
080f0c39 +0x2c3:  mov    %eax,-0x1c(%ebp)
080f0c3c +0x2c6:  lea    -0x189(%ebp),%eax
080f0c42 +0x2cc:  mov    %eax,(%esp)
080f0c45 +0x2cf:  call   0807e3b0 <_init+0xca8>
080f0c4a +0x2d4:  mov    %eax,%esi
080f0c4c +0x2d6:  mov    0xc(%ebp),%eax
080f0c4f +0x2d9:  mov    %eax,(%esp)
080f0c52 +0x2dc:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
080f0c57 +0x2e1:  mov    %eax,%ebx
080f0c59 +0x2e3:  movl   $0x0,0xc(%esp)
080f0c61 +0x2eb:  mov    0x1c(%ebp),%eax
080f0c64 +0x2ee:  mov    %eax,0x8(%esp)
080f0c68 +0x2f2:  movl   $0x4,0x4(%esp)
080f0c70 +0x2fa:  movl   $&g_scriptStringManager_,(%esp)
080f0c77 +0x301:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
080f0c7c +0x306:  movl   $0x1,0x24(%esp)
080f0c84 +0x30e:  movl   $0x0,0x20(%esp)
080f0c8c +0x316:  mov    -0x20(%ebp),%edx
080f0c8f +0x319:  mov    %edx,0x1c(%esp)
080f0c93 +0x31d:  mov    -0x1c(%ebp),%edx
080f0c96 +0x320:  mov    %edx,0x18(%esp)
080f0c9a +0x324:  mov    %esi,0x14(%esp)
080f0c9e +0x328:  lea    -0x189(%ebp),%edx
080f0ca4 +0x32e:  mov    %edx,0x10(%esp)
080f0ca8 +0x332:  mov    %ebx,0xc(%esp)
080f0cac +0x336:  movl   $0x0,0x8(%esp)
080f0cb4 +0x33e:  lea    -0x89(%ebp),%edx
080f0cba +0x344:  mov    %edx,0x4(%esp)
080f0cbe +0x348:  mov    %eax,(%esp)
080f0cc1 +0x34b:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
080f0cc6 +0x350:  lea    -0x34(%ebp),%eax
080f0cc9 +0x353:  movl   $0x0,0x8(%esp)
080f0cd1 +0x35b:  lea    -0x4c(%ebp),%edx
080f0cd4 +0x35e:  mov    %edx,0x4(%esp)
080f0cd8 +0x362:  mov    %eax,(%esp)
080f0cdb +0x365:  call   080f1b08 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xb8a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xb8a
080f0ce0 +0x36a:  sub    $0x4,%esp
080f0ce3 +0x36d:  lea    -0x38(%ebp),%eax
080f0ce6 +0x370:  mov    -0x2c(%ebp),%edx
080f0ce9 +0x373:  mov    %edx,0x4(%esp)
080f0ced +0x377:  mov    %eax,(%esp)
080f0cf0 +0x37a:  call   080f1ab6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xb38>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xb38
080f0cf5 +0x37f:  sub    $0x4,%esp
080f0cf8 +0x382:  lea    -0x38(%ebp),%eax
080f0cfb +0x385:  mov    %eax,0x4(%esp)
080f0cff +0x389:  lea    -0x4c(%ebp),%eax
080f0d02 +0x38c:  mov    %eax,(%esp)
080f0d05 +0x38f:  call   080f1adc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xb5e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xb5e
080f0d0a +0x394:  test   %al,%al
080f0d0c +0x396:  jne    080f0a92 <+0x11c>
080f0d12 +0x39c:  mov    $0x1,%eax
080f0d17 +0x3a1:  lea    -0xc(%ebp),%esp
080f0d1a +0x3a4:  add    $0x0,%esp
080f0d1d +0x3a7:  pop    %ebx
080f0d1e +0x3a8:  pop    %esi
080f0d1f +0x3a9:  pop    %edi
080f0d20 +0x3aa:  pop    %ebp
080f0d21 +0x3ab:  ret
```

## 反编译 C

```c
// eventReward::sendPostalReward @ 0x80f0976

/* eventReward::sendPostalReward(CUser&, rewardKey, int, char const*, char const*) */

undefined4
eventReward::sendPostalReward
          (map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
           *param_1,CUser *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *this;
  GameWorld *this_00;
  itemData *piVar5;
  size_t sVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  char *in_stack_00000018;
  char *in_stack_0000001c;
  char local_18d;
  char local_18c [255];
  Inven_Item local_8d [2];
  int local_8b;
  __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>> local_50 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
  local_4c [4];
  rewardKey local_48 [4];
  map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
  local_44 [4];
  map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
  local_40 [4];
  __normal_iterator local_3c [4];
  __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>> local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  CItem *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  bVar11 = 0;
  cVar1 = std::
          map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
          ::empty(param_1);
  if (cVar1 == '\0') {
    std::
    map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
    ::find(local_48);
    std::
    map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
    ::end(local_44);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
            ::operator==((_Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                          *)local_48,(_Rb_tree_iterator *)local_44);
    if (cVar1 == '\0') {
      local_34 = std::
                 _Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                 ::operator->((_Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                               *)local_48);
      local_34 = local_34 + 8;
      std::
      map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
      ::find((int *)local_4c);
      std::
      map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
      ::end(local_40);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
              ::operator==(local_4c,(_Rb_tree_iterator *)local_40);
      if (cVar1 == '\0') {
        local_30 = std::
                   _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                   ::operator->(local_4c);
        local_30 = local_30 + 4;
        cVar1 = std::vector<itemData,std::allocator<itemData>>::empty();
        if (cVar1 == '\0') {
          std::vector<itemData,std::allocator<itemData>>::begin();
          while( true ) {
            std::vector<itemData,std::allocator<itemData>>::end();
            bVar2 = __gnu_cxx::operator!=(local_50,local_3c);
            if (!bVar2) break;
            iVar4 = __gnu_cxx::
                    __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                    operator->(local_50);
            local_2c = *(int *)(iVar4 + 4);
            Inven_Item::Inven_Item(local_8d);
            this = (CDataManager *)G_CDataManager();
            local_28 = (CItem *)CDataManager::find_item(this,local_2c);
            local_24 = 0;
            this_00 = (GameWorld *)G_GameWorld();
            cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
            if (cVar1 == '\0') {
              iVar4 = G_CEnvironment();
              local_24 = *(undefined4 *)(iVar4 + 0x378);
            }
            else {
              local_24 = CUser::GetServerGroup(param_2);
            }
            if (local_28 != (CItem *)0x0) {
              local_8b = local_2c;
              (**(code **)(*(int *)local_28 + 8))(local_28,local_8d);
              piVar5 = (itemData *)
                       __gnu_cxx::
                       __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                       operator*(local_50);
              applyItemOption((eventReward *)param_1,local_8d,local_28,piVar5);
              pcVar9 = &local_18d;
              uVar10 = 0x100;
              bVar2 = ((uint)pcVar9 & 1) != 0;
              if (bVar2) {
                local_18d = '\0';
                pcVar9 = local_18c;
                uVar10 = 0xff;
              }
              if (((uint)pcVar9 & 2) != 0) {
                pcVar9[0] = '\0';
                pcVar9[1] = '\0';
                pcVar9 = pcVar9 + 2;
                uVar10 = uVar10 - 2;
              }
              for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                pcVar9[0] = '\0';
                pcVar9[1] = '\0';
                pcVar9[2] = '\0';
                pcVar9[3] = '\0';
                pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
              }
              if ((uVar10 & 2) != 0) {
                pcVar9[0] = '\0';
                pcVar9[1] = '\0';
                pcVar9 = pcVar9 + 2;
              }
              if (bVar2) {
                *pcVar9 = '\0';
              }
              uVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
              pcVar9 = (char *)RDARScriptStringManager::findString
                                         ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                          in_stack_0000001c,(bool *)0x0);
              OS_API::snprintf(&local_18d,0xff,pcVar9,uVar3);
              if (local_8b == 0) {
LAB_080f0c21:
                bVar2 = false;
              }
              else {
                cVar1 = CItem::is_stackable(local_28);
                if (cVar1 == '\0') goto LAB_080f0c21;
                bVar2 = true;
              }
              if (bVar2) {
                local_20 = CItem::getExpirationDate(local_28);
                sVar6 = strlen(&local_18d);
                uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
                uVar7 = RDARScriptStringManager::findString
                                  ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                   in_stack_00000018,(bool *)0x0);
                WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                          (uVar7,local_8d,0,uVar3,&local_18d,sVar6,local_20,local_24,0,1);
              }
            }
            __gnu_cxx::__normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
            operator++(local_38,(int)local_50);
          }
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
