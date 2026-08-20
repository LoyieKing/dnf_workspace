# dispatch_sig

`_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci`

`Inter_GuildCargoCheckPushItem::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildCargoCheckPushItem` | `0x084dd856` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dd856  _ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci
#           Inter_GuildCargoCheckPushItem::dispatch_sig(CUser*, char*, int)
# range [0x084dd856, 0x084ddea1]
084dd856 +0x000:  push   %ebp
084dd857 +0x001:  mov    %esp,%ebp
084dd859 +0x003:  push   %edi
084dd85a +0x004:  push   %esi
084dd85b +0x005:  push   %ebx
084dd85c +0x006:  sub    $0x10c,%esp
084dd862 +0x00c:  mov    0x10(%ebp),%eax
084dd865 +0x00f:  mov    %eax,-0x34(%ebp)
084dd868 +0x012:  mov    0xc(%ebp),%eax
084dd86b +0x015:  mov    %eax,(%esp)
084dd86e +0x018:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084dd873 +0x01d:  cmp    $0x2,%eax
084dd876 +0x020:  setle  %al
084dd879 +0x023:  test   %al,%al
084dd87b +0x025:  je     084dd887 <+0x31>
084dd87d +0x027:  mov    $0x0,%eax
084dd882 +0x02c:  jmp    084dde97 <+0x641>
084dd887 +0x031:  movl   $0xffffffff,0x4(%esp)
084dd88f +0x039:  mov    0xc(%ebp),%eax
084dd892 +0x03c:  mov    %eax,(%esp)
084dd895 +0x03f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084dd89a +0x044:  mov    %eax,%edx
084dd89c +0x046:  mov    -0x34(%ebp),%eax
084dd89f +0x049:  mov    0xe(%eax),%eax
084dd8a2 +0x04c:  cmp    %eax,%edx
084dd8a4 +0x04e:  setne  %al
084dd8a7 +0x051:  test   %al,%al
084dd8a9 +0x053:  je     084dd8b5 <+0x5f>
084dd8ab +0x055:  mov    $0x0,%eax
084dd8b0 +0x05a:  jmp    084dde97 <+0x641>
084dd8b5 +0x05f:  mov    -0x34(%ebp),%eax
084dd8b8 +0x062:  movzbl 0x12(%eax),%eax
084dd8bc +0x066:  cmp    $0xc1,%al
084dd8be +0x068:  je     084dd967 <+0x111>
084dd8c4 +0x06e:  mov    -0x34(%ebp),%eax
084dd8c7 +0x071:  movzwl 0x25(%eax),%eax
084dd8cb +0x075:  movzwl %ax,%eax
084dd8ce +0x078:  mov    %eax,-0xd4(%ebp)
084dd8d4 +0x07e:  mov    -0x34(%ebp),%eax
084dd8d7 +0x081:  movzbl 0x24(%eax),%eax
084dd8db +0x085:  movzbl %al,%edi
084dd8de +0x088:  mov    -0x34(%ebp),%eax
084dd8e1 +0x08b:  mov    0x1b(%eax),%esi
084dd8e4 +0x08e:  mov    -0x34(%ebp),%eax
084dd8e7 +0x091:  mov    0x17(%eax),%ebx
084dd8ea +0x094:  mov    -0x34(%ebp),%eax
084dd8ed +0x097:  mov    0x13(%eax),%ecx
084dd8f0 +0x09a:  mov    -0x34(%ebp),%eax
084dd8f3 +0x09d:  movzbl 0x12(%eax),%eax
084dd8f7 +0x0a1:  movzbl %al,%edx
084dd8fa +0x0a4:  mov    0xc(%ebp),%eax
084dd8fd +0x0a7:  add    $0x79700,%eax
084dd902 +0x0ac:  mov    %eax,-0xdc(%ebp)
084dd908 +0x0b2:  mov    -0xd4(%ebp),%eax
084dd90e +0x0b8:  mov    %eax,0x1c(%esp)
084dd912 +0x0bc:  mov    %edi,0x18(%esp)
084dd916 +0x0c0:  mov    %esi,0x14(%esp)
084dd91a +0x0c4:  mov    %ebx,0x10(%esp)
084dd91e +0x0c8:  mov    %ecx,0xc(%esp)
084dd922 +0x0cc:  mov    %edx,0x8(%esp)
084dd926 +0x0d0:  movl   $0x6,0x4(%esp)
084dd92e +0x0d8:  mov    -0xdc(%ebp),%edx
084dd934 +0x0de:  mov    %edx,(%esp)
084dd937 +0x0e1:  call   086865ea <_ZN15cUserHistoryLog29GuildCargoCheckPushItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii>  ; cUserHistoryLog::GuildCargoCheckPushItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int)
084dd93c +0x0e6:  mov    -0x34(%ebp),%eax
084dd93f +0x0e9:  movzbl 0x12(%eax),%eax
084dd943 +0x0ed:  movzbl %al,%eax
084dd946 +0x0f0:  mov    %eax,0x8(%esp)
084dd94a +0x0f4:  movl   $0xfb,0x4(%esp)
084dd952 +0x0fc:  mov    0xc(%ebp),%eax
084dd955 +0x0ff:  mov    %eax,(%esp)
084dd958 +0x102:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084dd95d +0x107:  mov    $0x0,%eax
084dd962 +0x10c:  jmp    084dde97 <+0x641>
084dd967 +0x111:  mov    0xc(%ebp),%eax
084dd96a +0x114:  mov    %eax,(%esp)
084dd96d +0x117:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084dd972 +0x11c:  mov    %eax,-0x30(%ebp)
084dd975 +0x11f:  mov    -0x34(%ebp),%eax
084dd978 +0x122:  movzbl 0x24(%eax),%eax
084dd97c +0x126:  movzbl %al,%eax
084dd97f +0x129:  mov    %eax,(%esp)
084dd982 +0x12c:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
084dd987 +0x131:  mov    %eax,-0x2c(%ebp)
084dd98a +0x134:  mov    -0x34(%ebp),%eax
084dd98d +0x137:  movzwl 0x25(%eax),%eax
084dd991 +0x13b:  movzwl %ax,%ecx
084dd994 +0x13e:  mov    -0x2c(%ebp),%edx
084dd997 +0x141:  lea    -0x71(%ebp),%eax
084dd99a +0x144:  mov    %ecx,0xc(%esp)
084dd99e +0x148:  mov    %edx,0x8(%esp)
084dd9a2 +0x14c:  mov    -0x30(%ebp),%edx
084dd9a5 +0x14f:  mov    %edx,0x4(%esp)
084dd9a9 +0x153:  mov    %eax,(%esp)
084dd9ac +0x156:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084dd9b1 +0x15b:  sub    $0x4,%esp
084dd9b4 +0x15e:  mov    -0x34(%ebp),%eax
084dd9b7 +0x161:  mov    0x17(%eax),%eax
084dd9ba +0x164:  test   %eax,%eax
084dd9bc +0x166:  je     084dd9cb <+0x175>
084dd9be +0x168:  mov    -0x6f(%ebp),%edx
084dd9c1 +0x16b:  mov    -0x34(%ebp),%eax
084dd9c4 +0x16e:  mov    0x17(%eax),%eax
084dd9c7 +0x171:  cmp    %eax,%edx
084dd9c9 +0x173:  je     084dd9f0 <+0x19a>
084dd9cb +0x175:  movl   $0xc5,0x8(%esp)
084dd9d3 +0x17d:  movl   $0xfb,0x4(%esp)
084dd9db +0x185:  mov    0xc(%ebp),%eax
084dd9de +0x188:  mov    %eax,(%esp)
084dd9e1 +0x18b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084dd9e6 +0x190:  mov    $0x0,%eax
084dd9eb +0x195:  jmp    084dde97 <+0x641>
084dd9f0 +0x19a:  mov    -0x6f(%ebp),%eax
084dd9f3 +0x19d:  mov    %eax,%ebx
084dd9f5 +0x19f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084dd9fa +0x1a4:  mov    %ebx,0x4(%esp)
084dd9fe +0x1a8:  mov    %eax,(%esp)
084dda01 +0x1ab:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084dda06 +0x1b0:  mov    %eax,-0x28(%ebp)
084dda09 +0x1b3:  cmpl   $0x0,-0x28(%ebp)
084dda0d +0x1b7:  je     084dda30 <+0x1da>
084dda0f +0x1b9:  mov    -0x28(%ebp),%eax
084dda12 +0x1bc:  mov    %eax,(%esp)
084dda15 +0x1bf:  call   0828b5b4 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x29>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x29
084dda1a +0x1c4:  xor    $0x1,%eax
084dda1d +0x1c7:  test   %al,%al
084dda1f +0x1c9:  jne    084dda30 <+0x1da>
084dda21 +0x1cb:  mov    -0x28(%ebp),%eax
084dda24 +0x1ce:  mov    %eax,(%esp)
084dda27 +0x1d1:  call   0822c856 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f00
084dda2c +0x1d6:  test   %eax,%eax
084dda2e +0x1d8:  je     084dda37 <+0x1e1>
084dda30 +0x1da:  mov    $0x1,%eax
084dda35 +0x1df:  jmp    084dda3c <+0x1e6>
084dda37 +0x1e1:  mov    $0x0,%eax
084dda3c +0x1e6:  test   %al,%al
084dda3e +0x1e8:  je     084dda65 <+0x20f>
084dda40 +0x1ea:  movl   $0xc5,0x8(%esp)
084dda48 +0x1f2:  movl   $0xfb,0x4(%esp)
084dda50 +0x1fa:  mov    0xc(%ebp),%eax
084dda53 +0x1fd:  mov    %eax,(%esp)
084dda56 +0x200:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084dda5b +0x205:  mov    $0x0,%eax
084dda60 +0x20a:  jmp    084dde97 <+0x641>
084dda65 +0x20f:  mov    -0x28(%ebp),%eax
084dda68 +0x212:  mov    (%eax),%eax
084dda6a +0x214:  add    $0x40,%eax
084dda6d +0x217:  mov    (%eax),%edx
084dda6f +0x219:  mov    -0x28(%ebp),%eax
084dda72 +0x21c:  mov    %eax,(%esp)
084dda75 +0x21f:  call   *%edx
084dda77 +0x221:  test   %al,%al
084dda79 +0x223:  je     084ddaa0 <+0x24a>
084dda7b +0x225:  movl   $0xc5,0x8(%esp)
084dda83 +0x22d:  movl   $0xfb,0x4(%esp)
084dda8b +0x235:  mov    0xc(%ebp),%eax
084dda8e +0x238:  mov    %eax,(%esp)
084dda91 +0x23b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084dda96 +0x240:  mov    $0x0,%eax
084dda9b +0x245:  jmp    084dde97 <+0x641>
084ddaa0 +0x24a:  lea    -0x71(%ebp),%eax
084ddaa3 +0x24d:  mov    %eax,(%esp)
084ddaa6 +0x250:  call   081201dc <_Z26IsTradeLimitAttachTypeItemRK10Inven_Item>  ; IsTradeLimitAttachTypeItem(Inven_Item const&)
084ddaab +0x255:  test   %al,%al
084ddaad +0x257:  je     084ddad4 <+0x27e>
084ddaaf +0x259:  movl   $0xc5,0x8(%esp)
084ddab7 +0x261:  movl   $0xfb,0x4(%esp)
084ddabf +0x269:  mov    0xc(%ebp),%eax
084ddac2 +0x26c:  mov    %eax,(%esp)
084ddac5 +0x26f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084ddaca +0x274:  mov    $0x0,%eax
084ddacf +0x279:  jmp    084dde97 <+0x641>
084ddad4 +0x27e:  mov    -0x28(%ebp),%eax
084ddad7 +0x281:  mov    %eax,(%esp)
084ddada +0x284:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
084ddadf +0x289:  test   %eax,%eax
084ddae1 +0x28b:  jne    084ddaf2 <+0x29c>
084ddae3 +0x28d:  mov    -0x28(%ebp),%eax
084ddae6 +0x290:  mov    %eax,(%esp)
084ddae9 +0x293:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
084ddaee +0x298:  test   %eax,%eax
084ddaf0 +0x29a:  je     084ddaf9 <+0x2a3>
084ddaf2 +0x29c:  mov    $0x1,%eax
084ddaf7 +0x2a1:  jmp    084ddafe <+0x2a8>
084ddaf9 +0x2a3:  mov    $0x0,%eax
084ddafe +0x2a8:  test   %al,%al
084ddb00 +0x2aa:  je     084ddb53 <+0x2fd>
084ddb02 +0x2ac:  movzwl -0x66(%ebp),%eax
084ddb06 +0x2b0:  movzwl %ax,%eax
084ddb09 +0x2b3:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
084ddb0f +0x2b9:  add    $0x44a54a80,%eax
084ddb14 +0x2be:  mov    %eax,-0x20(%ebp)
084ddb17 +0x2c1:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084ddb1e +0x2c8:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084ddb23 +0x2cd:  mov    %eax,-0x1c(%ebp)
084ddb26 +0x2d0:  mov    -0x20(%ebp),%eax
084ddb29 +0x2d3:  cmp    -0x1c(%ebp),%eax
084ddb2c +0x2d6:  jg     084ddb53 <+0x2fd>
084ddb2e +0x2d8:  movl   $0xc5,0x8(%esp)
084ddb36 +0x2e0:  movl   $0xfb,0x4(%esp)
084ddb3e +0x2e8:  mov    0xc(%ebp),%eax
084ddb41 +0x2eb:  mov    %eax,(%esp)
084ddb44 +0x2ee:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084ddb49 +0x2f3:  mov    $0x0,%eax
084ddb4e +0x2f8:  jmp    084dde97 <+0x641>
084ddb53 +0x2fd:  mov    -0x28(%ebp),%eax
084ddb56 +0x300:  mov    %eax,(%esp)
084ddb59 +0x303:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084ddb5e +0x308:  test   %al,%al
084ddb60 +0x30a:  je     084ddb94 <+0x33e>
084ddb62 +0x30c:  mov    -0x6a(%ebp),%edx
084ddb65 +0x30f:  mov    -0x34(%ebp),%eax
084ddb68 +0x312:  mov    0x1b(%eax),%eax
084ddb6b +0x315:  cmp    %eax,%edx
084ddb6d +0x317:  jge    084ddb94 <+0x33e>
084ddb6f +0x319:  movl   $0xc6,0x8(%esp)
084ddb77 +0x321:  movl   $0xfb,0x4(%esp)
084ddb7f +0x329:  mov    0xc(%ebp),%eax
084ddb82 +0x32c:  mov    %eax,(%esp)
084ddb85 +0x32f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084ddb8a +0x334:  mov    $0x0,%eax
084ddb8f +0x339:  jmp    084dde97 <+0x641>
084ddb94 +0x33e:  mov    -0x28(%ebp),%eax
084ddb97 +0x341:  mov    %eax,(%esp)
084ddb9a +0x344:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
084ddb9f +0x349:  mov    %eax,-0x24(%ebp)
084ddba2 +0x34c:  cmpl   $0x1,-0x24(%ebp)
084ddba6 +0x350:  je     084ddbd7 <+0x381>
084ddba8 +0x352:  cmpl   $0x2,-0x24(%ebp)
084ddbac +0x356:  je     084ddbd7 <+0x381>
084ddbae +0x358:  cmpl   $0x5,-0x24(%ebp)
084ddbb2 +0x35c:  je     084ddbd7 <+0x381>
084ddbb4 +0x35e:  cmpl   $0x3,-0x24(%ebp)
084ddbb8 +0x362:  jne    084ddbc5 <+0x36f>
084ddbba +0x364:  movzbl -0x71(%ebp),%eax
084ddbbe +0x368:  xor    $0x1,%eax
084ddbc1 +0x36b:  test   %al,%al
084ddbc3 +0x36d:  jne    084ddbd7 <+0x381>
084ddbc5 +0x36f:  lea    -0x71(%ebp),%eax
084ddbc8 +0x372:  add    $0x33,%eax
084ddbcb +0x375:  mov    %eax,(%esp)
084ddbce +0x378:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
084ddbd3 +0x37d:  test   %al,%al
084ddbd5 +0x37f:  je     084ddbde <+0x388>
084ddbd7 +0x381:  mov    $0x1,%eax
084ddbdc +0x386:  jmp    084ddbe3 <+0x38d>
084ddbde +0x388:  mov    $0x0,%eax
084ddbe3 +0x38d:  test   %al,%al
084ddbe5 +0x38f:  je     084ddc0c <+0x3b6>
084ddbe7 +0x391:  movl   $0xc5,0x8(%esp)
084ddbef +0x399:  movl   $0xfb,0x4(%esp)
084ddbf7 +0x3a1:  mov    0xc(%ebp),%eax
084ddbfa +0x3a4:  mov    %eax,(%esp)
084ddbfd +0x3a7:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084ddc02 +0x3ac:  mov    $0x0,%eax
084ddc07 +0x3b1:  jmp    084dde97 <+0x641>
084ddc0c +0x3b6:  mov    -0x34(%ebp),%eax
084ddc0f +0x3b9:  mov    0x1b(%eax),%edi
084ddc12 +0x3bc:  mov    -0x34(%ebp),%eax
084ddc15 +0x3bf:  movzwl 0x25(%eax),%eax
084ddc19 +0x3c3:  movzwl %ax,%esi
084ddc1c +0x3c6:  lea    -0x71(%ebp),%eax
084ddc1f +0x3c9:  mov    %eax,(%esp)
084ddc22 +0x3cc:  call   08348170 <_ZN10Inven_Item16GetInventoryTypeEv>  ; Inven_Item::GetInventoryType()
084ddc27 +0x3d1:  mov    %eax,%ebx
084ddc29 +0x3d3:  mov    0xc(%ebp),%eax
084ddc2c +0x3d6:  mov    %eax,(%esp)
084ddc2f +0x3d9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084ddc34 +0x3de:  movl   $0x1,0x14(%esp)
084ddc3c +0x3e6:  movl   $0x22,0x10(%esp)
084ddc44 +0x3ee:  mov    %edi,0xc(%esp)
084ddc48 +0x3f2:  mov    %esi,0x8(%esp)
084ddc4c +0x3f6:  mov    %ebx,0x4(%esp)
084ddc50 +0x3fa:  mov    %eax,(%esp)
084ddc53 +0x3fd:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
084ddc58 +0x402:  xor    $0x1,%eax
084ddc5b +0x405:  test   %al,%al
084ddc5d +0x407:  je     084ddc84 <+0x42e>
084ddc5f +0x409:  movl   $0xc5,0x8(%esp)
084ddc67 +0x411:  movl   $0xfb,0x4(%esp)
084ddc6f +0x419:  mov    0xc(%ebp),%eax
084ddc72 +0x41c:  mov    %eax,(%esp)
084ddc75 +0x41f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084ddc7a +0x424:  mov    $0x0,%eax
084ddc7f +0x429:  jmp    084dde97 <+0x641>
084ddc84 +0x42e:  mov    0xc(%ebp),%eax
084ddc87 +0x431:  mov    %eax,(%esp)
084ddc8a +0x434:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
084ddc8f +0x439:  lea    -0xc4(%ebp),%eax
084ddc95 +0x43f:  mov    %eax,(%esp)
084ddc98 +0x442:  call   084e9434 <_GLOBAL__I__Z7getUserj+0x3e6>  ; global constructors keyed to getUser(unsigned int)+0x3e6
084ddc9d +0x447:  mov    0xc(%ebp),%eax
084ddca0 +0x44a:  mov    %eax,(%esp)
084ddca3 +0x44d:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084ddca8 +0x452:  mov    %eax,-0xba(%ebp)
084ddcae +0x458:  mov    0xc(%ebp),%eax
084ddcb1 +0x45b:  mov    %eax,(%esp)
084ddcb4 +0x45e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084ddcb9 +0x463:  mov    %eax,-0xb6(%ebp)
084ddcbf +0x469:  mov    -0x34(%ebp),%eax
084ddcc2 +0x46c:  movzbl 0x23(%eax),%eax
084ddcc6 +0x470:  mov    %al,-0xaa(%ebp)
084ddccc +0x476:  mov    -0x34(%ebp),%eax
084ddccf +0x479:  mov    0x13(%eax),%eax
084ddcd2 +0x47c:  mov    %eax,-0xb2(%ebp)
084ddcd8 +0x482:  mov    -0x34(%ebp),%eax
084ddcdb +0x485:  mov    0x1f(%eax),%eax
084ddcde +0x488:  mov    %eax,-0xae(%ebp)
084ddce4 +0x48e:  mov    -0x34(%ebp),%eax
084ddce7 +0x491:  movzwl 0x25(%eax),%eax
084ddceb +0x495:  mov    %ax,-0x73(%ebp)
084ddcef +0x499:  mov    -0x34(%ebp),%eax
084ddcf2 +0x49c:  movzbl 0x24(%eax),%eax
084ddcf6 +0x4a0:  mov    %al,-0x74(%ebp)
084ddcf9 +0x4a3:  mov    -0x6f(%ebp),%eax
084ddcfc +0x4a6:  mov    %eax,-0xa8(%ebp)
084ddd02 +0x4ac:  mov    -0x6a(%ebp),%eax
084ddd05 +0x4af:  mov    %eax,-0xa3(%ebp)
084ddd0b +0x4b5:  movzwl -0x66(%ebp),%eax
084ddd0f +0x4b9:  mov    %ax,-0x9f(%ebp)
084ddd16 +0x4c0:  mov    -0x64(%ebp),%eax
084ddd19 +0x4c3:  mov    %eax,-0x9d(%ebp)
084ddd1f +0x4c9:  lea    -0x71(%ebp),%eax
084ddd22 +0x4cc:  mov    %eax,(%esp)
084ddd25 +0x4cf:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
084ddd2a +0x4d4:  mov    %al,-0xa4(%ebp)
084ddd30 +0x4da:  lea    -0xc4(%ebp),%eax
084ddd36 +0x4e0:  add    $0x2c,%eax
084ddd39 +0x4e3:  mov    %eax,0x8(%esp)
084ddd3d +0x4e7:  lea    -0xc4(%ebp),%eax
084ddd43 +0x4ed:  add    $0x2b,%eax
084ddd46 +0x4f0:  mov    %eax,0x4(%esp)
084ddd4a +0x4f4:  lea    -0x71(%ebp),%eax
084ddd4d +0x4f7:  add    $0x11,%eax
084ddd50 +0x4fa:  mov    %eax,(%esp)
084ddd53 +0x4fd:  call   0844d490 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xa6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xa6
084ddd58 +0x502:  mov    -0x4c(%ebp),%eax
084ddd5b +0x505:  mov    %eax,-0x8c(%ebp)
084ddd61 +0x50b:  mov    -0x48(%ebp),%eax
084ddd64 +0x50e:  mov    %eax,-0x88(%ebp)
084ddd6a +0x514:  mov    -0x44(%ebp),%eax
084ddd6d +0x517:  mov    %eax,-0x84(%ebp)
084ddd73 +0x51d:  movzwl -0x40(%ebp),%eax
084ddd77 +0x521:  mov    %ax,-0x80(%ebp)
084ddd7b +0x525:  lea    -0x71(%ebp),%eax
084ddd7e +0x528:  add    $0x33,%eax
084ddd81 +0x52b:  mov    %eax,(%esp)
084ddd84 +0x52e:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
084ddd89 +0x533:  movzbl %al,%eax
084ddd8c +0x536:  mov    %eax,0x4(%esp)
084ddd90 +0x53a:  lea    -0xc4(%ebp),%eax
084ddd96 +0x540:  add    $0x46,%eax
084ddd99 +0x543:  mov    %eax,(%esp)
084ddd9c +0x546:  call   084e906a <_GLOBAL__I__Z7getUserj+0x1c>  ; global constructors keyed to getUser(unsigned int)+0x1c
084ddda1 +0x54b:  mov    -0x28(%ebp),%eax
084ddda4 +0x54e:  mov    %eax,(%esp)
084ddda7 +0x551:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084dddac +0x556:  test   %al,%al
084dddae +0x558:  je     084dddbe <+0x568>
084dddb0 +0x55a:  mov    -0x34(%ebp),%eax
084dddb3 +0x55d:  mov    0x1b(%eax),%eax
084dddb6 +0x560:  mov    %eax,-0xa3(%ebp)
084dddbc +0x566:  jmp    084dddc7 <+0x571>
084dddbe +0x568:  mov    -0x6a(%ebp),%eax
084dddc1 +0x56b:  mov    %eax,-0xa3(%ebp)
084dddc7 +0x571:  movzwl -0xc2(%ebp),%eax
084dddce +0x578:  movzwl %ax,%esi
084dddd1 +0x57b:  lea    -0xc4(%ebp),%ebx
084dddd7 +0x581:  mov    0xc(%ebp),%eax
084dddda +0x584:  mov    %eax,(%esp)
084ddddd +0x587:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084ddde2 +0x58c:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084ddde8 +0x592:  mov    %eax,0x4(%esp)
084dddec +0x596:  mov    %edx,(%esp)
084dddef +0x599:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084dddf4 +0x59e:  mov    %esi,0x8(%esp)
084dddf8 +0x5a2:  mov    %ebx,0x4(%esp)
084dddfc +0x5a6:  mov    %eax,(%esp)
084dddff +0x5a9:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
084dde04 +0x5ae:  lea    -0xc4(%ebp),%eax
084dde0a +0x5b4:  add    $0x46,%eax
084dde0d +0x5b7:  mov    %eax,(%esp)
084dde10 +0x5ba:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
084dde15 +0x5bf:  movzbl %al,%edx
084dde18 +0x5c2:  movzbl -0xa4(%ebp),%eax
084dde1f +0x5c9:  movzbl %al,%eax
084dde22 +0x5cc:  mov    %eax,-0xd0(%ebp)
084dde28 +0x5d2:  mov    -0x9d(%ebp),%eax
084dde2e +0x5d8:  mov    %eax,-0xcc(%ebp)
084dde34 +0x5de:  movzwl -0x9f(%ebp),%eax
084dde3b +0x5e5:  movzwl %ax,%edi
084dde3e +0x5e8:  mov    -0xa3(%ebp),%esi
084dde44 +0x5ee:  mov    -0xa8(%ebp),%eax
084dde4a +0x5f4:  mov    %eax,%ebx
084dde4c +0x5f6:  mov    -0xb2(%ebp),%ecx
084dde52 +0x5fc:  mov    0xc(%ebp),%eax
084dde55 +0x5ff:  add    $0x79700,%eax
084dde5a +0x604:  mov    %edx,0x20(%esp)
084dde5e +0x608:  mov    -0xd0(%ebp),%edx
084dde64 +0x60e:  mov    %edx,0x1c(%esp)
084dde68 +0x612:  mov    -0xcc(%ebp),%edx
084dde6e +0x618:  mov    %edx,0x18(%esp)
084dde72 +0x61c:  mov    %edi,0x14(%esp)
084dde76 +0x620:  mov    %esi,0x10(%esp)
084dde7a +0x624:  mov    %ebx,0xc(%esp)
084dde7e +0x628:  mov    %ecx,0x8(%esp)
084dde82 +0x62c:  movl   $0x7,0x4(%esp)
084dde8a +0x634:  mov    %eax,(%esp)
084dde8d +0x637:  call   08686638 <_ZN15cUserHistoryLog18GuildCargoPushItemE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiiih>  ; cUserHistoryLog::GuildCargoPushItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int, unsigned char)
084dde92 +0x63c:  mov    $0x0,%eax
084dde97 +0x641:  lea    -0xc(%ebp),%esp
084dde9a +0x644:  add    $0x0,%esp
084dde9d +0x647:  pop    %ebx
084dde9e +0x648:  pop    %esi
084dde9f +0x649:  pop    %edi
084ddea0 +0x64a:  pop    %ebp
084ddea1 +0x64b:  ret
```

## 反编译 C

```c
// Inter_GuildCargoCheckPushItem::dispatch_sig @ 0x84dd856

/* Inter_GuildCargoCheckPushItem::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargoCheckPushItem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  uchar uVar4;
  undefined1 uVar5;
  int iVar6;
  CDataManager *this;
  undefined4 uVar7;
  CInventory *pCVar8;
  undefined4 uVar9;
  CGuildServerProxy *this_00;
  uint uVar10;
  Packet_Guild_Guild_Cargo_Push_Item local_c8 [2];
  ushort local_c6;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined1 local_ae;
  int local_ac;
  undefined1 local_a8;
  int local_a7;
  ushort local_a3;
  undefined4 local_a1;
  uchar uStack_9d;
  ushort auStack_9c [6];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  UpgradeSeparateInfo aUStack_82 [10];
  undefined1 local_78;
  undefined2 local_77;
  Inven_Item local_75 [2];
  int local_73;
  int local_6e;
  ushort local_6a;
  undefined4 local_68;
  stAmplifyOption_t asStack_64 [20];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  UpgradeSeparateInfo aUStack_42 [10];
  int local_38;
  int local_34;
  undefined4 local_30;
  CItem *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_38 = param_3;
  iVar6 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar6) &&
     (iVar6 = CUser::get_charac_no((CUser *)param_2,-1), iVar6 == *(int *)(local_38 + 0xe))) {
    if (*(char *)(local_38 + 0x12) == -0x3f) {
      local_34 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      local_30 = GetInvenTypeFromItemSpace(*(undefined1 *)(local_38 + 0x24));
      uVar10 = (uint)*(ushort *)(local_38 + 0x25);
      CInventory::GetInvenSlot((int)local_75,local_34);
      iVar6 = local_73;
      if ((*(int *)(local_38 + 0x17) == 0) || (local_73 != *(int *)(local_38 + 0x17))) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5,uVar10);
      }
      else {
        this = (CDataManager *)G_CDataManager();
        local_2c = (CItem *)CDataManager::find_item(this,iVar6);
        if (((local_2c == (CItem *)0x0) || (cVar3 = CItem::isPackagable(local_2c), cVar3 != '\x01'))
           || (iVar6 = CItem::GetCashPrice(local_2c), iVar6 != 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5);
        }
        else {
          cVar3 = (**(code **)(*(int *)local_2c + 0x40))(local_2c);
          if (cVar3 == '\0') {
            cVar3 = IsTradeLimitAttachTypeItem(local_75);
            if (cVar3 == '\0') {
              iVar6 = CItem::getUsablePeriod(local_2c);
              if ((iVar6 == 0) && (iVar6 = CItem::getExpirationDate(local_2c), iVar6 == 0)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                local_24 = (uint)local_6a * 0x15180 + 0x44a54a80;
                local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                if (local_24 <= local_20) {
                  CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5);
                  return 0;
                }
              }
              cVar3 = CItem::is_stackable(local_2c);
              if ((cVar3 == '\0') || (*(int *)(local_38 + 0x1b) <= local_6e)) {
                local_28 = CItem::GetAttachType(local_2c);
                if ((((local_28 == 1) || ((local_28 == 2 || (local_28 == 5)))) ||
                    ((local_28 == 3 && (local_75[0] != (Inven_Item)0x1)))) ||
                   (cVar3 = UpgradeSeparateInfo::IsTradeRestriction(aUStack_42), cVar3 != '\0')) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if (bVar2) {
                  CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5);
                }
                else {
                  uVar9 = *(undefined4 *)(local_38 + 0x1b);
                  uVar1 = *(undefined2 *)(local_38 + 0x25);
                  uVar7 = Inven_Item::GetInventoryType(local_75);
                  pCVar8 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
                  cVar3 = CInventory::delete_item(pCVar8,uVar7,uVar1,uVar9,0x22,1);
                  if (cVar3 == '\x01') {
                    CUser::SaveInventory((CUser *)param_2);
                    Packet_Guild_Guild_Cargo_Push_Item::Packet_Guild_Guild_Cargo_Push_Item(local_c8)
                    ;
                    local_be = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
                    local_ba = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
                    local_ae = *(undefined1 *)(local_38 + 0x23);
                    local_b6 = *(undefined4 *)(local_38 + 0x13);
                    local_b2 = *(undefined4 *)(local_38 + 0x1f);
                    local_77 = *(undefined2 *)(local_38 + 0x25);
                    local_78 = *(undefined1 *)(local_38 + 0x24);
                    local_ac = local_73;
                    local_a7 = local_6e;
                    local_a3 = local_6a;
                    local_a1 = local_68;
                    local_a8 = Inven_Item::GetItemAttr(local_75);
                    stAmplifyOption_t::getValues(asStack_64,&uStack_9d,auStack_9c);
                    local_90 = local_50;
                    local_8c = local_4c;
                    local_88 = local_48;
                    local_84 = local_44;
                    uVar4 = UpgradeSeparateInfo::GetUpgradeSeparate(aUStack_42);
                    UpgradeSeparateInfo::SetUpgradeSeparate(aUStack_82,uVar4);
                    cVar3 = CItem::is_stackable(local_2c);
                    if (cVar3 == '\0') {
                      local_a7 = local_6e;
                    }
                    else {
                      local_a7 = *(int *)(local_38 + 0x1b);
                    }
                    uVar9 = CUser::GetServerGroup((CUser *)param_2);
                    this_00 = (CGuildServerProxy *)
                              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                        (GlobalData::s_guild_proxy_mgr,uVar9);
                    CGuildServerProxy::SendTcpPacket(this_00,(char *)local_c8,(uint)local_c6);
                    uVar5 = UpgradeSeparateInfo::GetUpgradeSeparate(aUStack_82);
                    cUserHistoryLog::GuildCargoPushItem
                              ((cUserHistoryLog *)(param_2 + 0x79700),7,local_b6,local_ac,local_a7,
                               local_a3,local_a1,local_a8,uVar5);
                  }
                  else {
                    CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5);
                  }
                }
              }
              else {
                CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc6);
              }
            }
            else {
              CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5);
            }
          }
          else {
            CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5);
          }
        }
      }
    }
    else {
      cUserHistoryLog::GuildCargoCheckPushItemResult
                ((cUserHistoryLog *)(param_2 + 0x79700),6,*(undefined1 *)(local_38 + 0x12),
                 *(undefined4 *)(local_38 + 0x13),*(undefined4 *)(local_38 + 0x17),
                 *(undefined4 *)(local_38 + 0x1b),*(undefined1 *)(local_38 + 0x24),
                 *(undefined2 *)(local_38 + 0x25));
      CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,*(undefined1 *)(local_38 + 0x12));
    }
  }
  return 0;
}
```
