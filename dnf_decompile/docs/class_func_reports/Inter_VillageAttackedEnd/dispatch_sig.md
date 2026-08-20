# dispatch_sig

`_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci`

`Inter_VillageAttackedEnd::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_VillageAttackedEnd` | `0x084df6a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084df6a4  _ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci
#           Inter_VillageAttackedEnd::dispatch_sig(CUser*, char*, int)
# range [0x084df6a4, 0x084dfadf]
084df6a4 +0x000:  push   %ebp
084df6a5 +0x001:  mov    %esp,%ebp
084df6a7 +0x003:  push   %esi
084df6a8 +0x004:  push   %ebx
084df6a9 +0x005:  sub    $0x70,%esp
084df6ac +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084df6b1 +0x00d:  mov    %eax,(%esp)
084df6b4 +0x010:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084df6b9 +0x015:  test   %al,%al
084df6bb +0x017:  je     084df6c7 <+0x23>
084df6bd +0x019:  mov    $0x0,%eax
084df6c2 +0x01e:  jmp    084dfad5 <+0x431>
084df6c7 +0x023:  mov    0x10(%ebp),%eax
084df6ca +0x026:  mov    %eax,-0x3c(%ebp)
084df6cd +0x029:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084df6d4 +0x030:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084df6d9 +0x035:  mov    %eax,-0x38(%ebp)
084df6dc +0x038:  mov    -0x3c(%ebp),%eax
084df6df +0x03b:  mov    0xa(%eax),%eax
084df6e2 +0x03e:  mov    %eax,-0x34(%ebp)
084df6e5 +0x041:  movl   $0x0,-0x30(%ebp)
084df6ec +0x048:  movl   $0x0,-0x2c(%ebp)
084df6f3 +0x04f:  mov    -0x34(%ebp),%eax
084df6f6 +0x052:  cmp    -0x38(%ebp),%eax
084df6f9 +0x055:  jb     084df70c <+0x68>
084df6fb +0x057:  mov    -0x38(%ebp),%eax
084df6fe +0x05a:  mov    -0x34(%ebp),%edx
084df701 +0x05d:  mov    %edx,%ecx
084df703 +0x05f:  sub    %eax,%ecx
084df705 +0x061:  mov    %ecx,%eax
084df707 +0x063:  mov    %eax,-0x30(%ebp)
084df70a +0x066:  jmp    084df713 <+0x6f>
084df70c +0x068:  movl   $0x0,-0x30(%ebp)
084df713 +0x06f:  mov    -0x3c(%ebp),%eax
084df716 +0x072:  mov    0x12(%eax),%edx
084df719 +0x075:  mov    -0x3c(%ebp),%eax
084df71c +0x078:  mov    0xe(%eax),%eax
084df71f +0x07b:  cmp    %eax,%edx
084df721 +0x07d:  ja     084df752 <+0xae>
084df723 +0x07f:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
084df728 +0x084:  mov    %eax,(%esp)
084df72b +0x087:  call   0847dd1e <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x40>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x40
084df730 +0x08c:  mov    -0x3c(%ebp),%eax
084df733 +0x08f:  mov    0xa(%eax),%eax
084df736 +0x092:  mov    %eax,%edx
084df738 +0x094:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
084df73d +0x099:  mov    %edx,0x4(%esp)
084df741 +0x09d:  mov    %eax,(%esp)
084df744 +0x0a0:  call   0847dd36 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x58>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x58
084df749 +0x0a5:  movl   $0x1,-0x2c(%ebp)
084df750 +0x0ac:  jmp    084df77f <+0xdb>
084df752 +0x0ae:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
084df757 +0x0b3:  mov    %eax,(%esp)
084df75a +0x0b6:  call   0847dd2a <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x4c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x4c
084df75f +0x0bb:  mov    -0x3c(%ebp),%eax
084df762 +0x0be:  mov    0xa(%eax),%eax
084df765 +0x0c1:  mov    %eax,%edx
084df767 +0x0c3:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
084df76c +0x0c8:  mov    %edx,0x4(%esp)
084df770 +0x0cc:  mov    %eax,(%esp)
084df773 +0x0cf:  call   0847dd36 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x58>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x58
084df778 +0x0d4:  movl   $0x2,-0x2c(%ebp)
084df77f +0x0db:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084df784 +0x0e0:  lea    0x134(%eax),%edx
084df78a +0x0e6:  lea    -0x50(%ebp),%eax
084df78d +0x0e9:  mov    %edx,0x4(%esp)
084df791 +0x0ed:  mov    %eax,(%esp)
084df794 +0x0f0:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
084df799 +0x0f5:  sub    $0x4,%esp
084df79c +0x0f8:  jmp    084dfa85 <+0x3e1>
084df7a1 +0x0fd:  lea    -0x50(%ebp),%eax
084df7a4 +0x100:  mov    %eax,(%esp)
084df7a7 +0x103:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
084df7ac +0x108:  mov    0x4(%eax),%eax
084df7af +0x10b:  mov    %eax,-0x28(%ebp)
084df7b2 +0x10e:  cmpl   $0x0,-0x28(%ebp)
084df7b6 +0x112:  je     084dfa68 <+0x3c4>
084df7bc +0x118:  movl   $0xa,0x8(%esp)
084df7c4 +0x120:  movl   $0x0,0x4(%esp)
084df7cc +0x128:  lea    -0x5a(%ebp),%eax
084df7cf +0x12b:  mov    %eax,(%esp)
084df7d2 +0x12e:  call   0807dcc0 <_init+0x5b8>
084df7d7 +0x133:  lea    -0x68(%ebp),%eax
084df7da +0x136:  mov    %eax,(%esp)
084df7dd +0x139:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084df7e2 +0x13e:  lea    -0x68(%ebp),%eax
084df7e5 +0x141:  mov    %eax,(%esp)
084df7e8 +0x144:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084df7ed +0x149:  movl   $0x1ec,0x8(%esp)
084df7f5 +0x151:  movl   $0x0,0x4(%esp)
084df7fd +0x159:  lea    -0x68(%ebp),%eax
084df800 +0x15c:  mov    %eax,(%esp)
084df803 +0x15f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084df808 +0x164:  mov    -0x28(%ebp),%eax
084df80b +0x167:  mov    %eax,(%esp)
084df80e +0x16a:  call   084ec1fa <_GLOBAL__I__Z7getUserj+0x31ac>  ; global constructors keyed to getUser(unsigned int)+0x31ac
084df813 +0x16f:  cmpl   $0x1,-0x2c(%ebp)
084df817 +0x173:  jne    084df9b0 <+0x30c>
084df81d +0x179:  movl   $0x0,0xc(%esp)
084df825 +0x181:  movl   $0x0,0x8(%esp)
084df82d +0x189:  movl   $0x17,0x4(%esp)
084df835 +0x191:  mov    -0x28(%ebp),%eax
084df838 +0x194:  mov    %eax,(%esp)
084df83b +0x197:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
084df840 +0x19c:  movb   $0x0,-0x22(%ebp)
084df844 +0x1a0:  mov    -0x28(%ebp),%eax
084df847 +0x1a3:  mov    %eax,(%esp)
084df84a +0x1a6:  call   084ec216 <_GLOBAL__I__Z7getUserj+0x31c8>  ; global constructors keyed to getUser(unsigned int)+0x31c8
084df84f +0x1ab:  mov    %al,-0x21(%ebp)
084df852 +0x1ae:  movb   $0x0,-0x5a(%ebp)
084df856 +0x1b2:  movb   $0x0,-0x59(%ebp)
084df85a +0x1b6:  mov    -0x30(%ebp),%eax
084df85d +0x1b9:  mov    %eax,-0x58(%ebp)
084df860 +0x1bc:  mov    -0x28(%ebp),%eax
084df863 +0x1bf:  mov    %eax,(%esp)
084df866 +0x1c2:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084df86b +0x1c7:  mov    %eax,-0x20(%ebp)
084df86e +0x1ca:  mov    -0x20(%ebp),%eax
084df871 +0x1cd:  cmp    $0x2,%eax
084df874 +0x1d0:  jle    084df8bf <+0x21b>
084df876 +0x1d2:  mov    -0x28(%ebp),%eax
084df879 +0x1d5:  mov    %eax,(%esp)
084df87c +0x1d8:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
084df881 +0x1dd:  movzwl %ax,%eax
084df884 +0x1e0:  sub    $0x5,%eax
084df887 +0x1e3:  mov    %eax,-0x48(%ebp)
084df88a +0x1e6:  movl   $0x0,-0x44(%ebp)
084df891 +0x1ed:  lea    -0x48(%ebp),%eax
084df894 +0x1f0:  mov    %eax,0x4(%esp)
084df898 +0x1f4:  lea    -0x44(%ebp),%eax
084df89b +0x1f7:  mov    %eax,(%esp)
084df89e +0x1fa:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
084df8a3 +0x1ff:  mov    (%eax),%edx
084df8a5 +0x201:  mov    -0x28(%ebp),%eax
084df8a8 +0x204:  mov    %edx,0x4(%esp)
084df8ac +0x208:  mov    %eax,(%esp)
084df8af +0x20b:  call   0822f2ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4978>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4978
084df8b4 +0x210:  mov    -0x28(%ebp),%eax
084df8b7 +0x213:  mov    %eax,(%esp)
084df8ba +0x216:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
084df8bf +0x21b:  cmpl   $0x3,-0x20(%ebp)
084df8c3 +0x21f:  jne    084dfa5d <+0x3b9>
084df8c9 +0x225:  movb   $0x1,-0x22(%ebp)
084df8cd +0x229:  cmpb   $0x2,-0x21(%ebp)
084df8d1 +0x22d:  jbe    084df8da <+0x236>
084df8d3 +0x22f:  movl   $0x1e41,-0x54(%ebp)
084df8da +0x236:  cmpb   $0x0,-0x22(%ebp)
084df8de +0x23a:  je     084df9ed <+0x349>
084df8e4 +0x240:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084df8e9 +0x245:  add    $0x500,%eax
084df8ee +0x24a:  mov    %eax,(%esp)
084df8f1 +0x24d:  call   084f1672 <_GLOBAL__I__Z7getUserj+0x8624>  ; global constructors keyed to getUser(unsigned int)+0x8624
084df8f6 +0x252:  mov    %eax,-0x1c(%ebp)
084df8f9 +0x255:  movl   $0x0,-0x18(%ebp)
084df900 +0x25c:  jmp    084df99d <+0x2f9>
084df905 +0x261:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084df90a +0x266:  lea    0x500(%eax),%edx
084df910 +0x26c:  mov    -0x18(%ebp),%eax
084df913 +0x26f:  mov    %eax,0x4(%esp)
084df917 +0x273:  mov    %edx,(%esp)
084df91a +0x276:  call   084f1694 <_GLOBAL__I__Z7getUserj+0x8646>  ; global constructors keyed to getUser(unsigned int)+0x8646
084df91f +0x27b:  mov    (%eax),%eax
084df921 +0x27d:  mov    %eax,-0x14(%ebp)
084df924 +0x280:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084df929 +0x285:  lea    0x500(%eax),%edx
084df92f +0x28b:  mov    -0x18(%ebp),%eax
084df932 +0x28e:  mov    %eax,0x4(%esp)
084df936 +0x292:  mov    %edx,(%esp)
084df939 +0x295:  call   084f1694 <_GLOBAL__I__Z7getUserj+0x8646>  ; global constructors keyed to getUser(unsigned int)+0x8646
084df93e +0x29a:  mov    0x4(%eax),%eax
084df941 +0x29d:  mov    %eax,-0x10(%ebp)
084df944 +0x2a0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084df949 +0x2a5:  lea    0x500(%eax),%edx
084df94f +0x2ab:  mov    -0x18(%ebp),%eax
084df952 +0x2ae:  mov    %eax,0x4(%esp)
084df956 +0x2b2:  mov    %edx,(%esp)
084df959 +0x2b5:  call   084f1694 <_GLOBAL__I__Z7getUserj+0x8646>  ; global constructors keyed to getUser(unsigned int)+0x8646
084df95e +0x2ba:  mov    0x8(%eax),%eax
084df961 +0x2bd:  mov    %eax,-0xc(%ebp)
084df964 +0x2c0:  movzbl -0x21(%ebp),%eax
084df968 +0x2c4:  cmp    -0x14(%ebp),%eax
084df96b +0x2c7:  jb     084df999 <+0x2f5>
084df96d +0x2c9:  movzbl -0x21(%ebp),%eax
084df971 +0x2cd:  cmp    -0x10(%ebp),%eax
084df974 +0x2d0:  ja     084df999 <+0x2f5>
084df976 +0x2d2:  mov    -0xc(%ebp),%eax
084df979 +0x2d5:  movzbl %al,%edx
084df97c +0x2d8:  mov    -0x28(%ebp),%eax
084df97f +0x2db:  mov    %edx,0x4(%esp)
084df983 +0x2df:  mov    %eax,(%esp)
084df986 +0x2e2:  call   0822f762 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e0c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e0c
084df98b +0x2e7:  mov    -0x28(%ebp),%eax
084df98e +0x2ea:  mov    %eax,(%esp)
084df991 +0x2ed:  call   084ec1de <_GLOBAL__I__Z7getUserj+0x3190>  ; global constructors keyed to getUser(unsigned int)+0x3190
084df996 +0x2f2:  nop
084df997 +0x2f3:  jmp    084df9ee <+0x34a>
084df999 +0x2f5:  addl   $0x1,-0x18(%ebp)
084df99d +0x2f9:  mov    -0x18(%ebp),%eax
084df9a0 +0x2fc:  cmp    -0x1c(%ebp),%eax
084df9a3 +0x2ff:  setb   %al
084df9a6 +0x302:  test   %al,%al
084df9a8 +0x304:  jne    084df905 <+0x261>
084df9ae +0x30a:  jmp    084df9ee <+0x34a>
084df9b0 +0x30c:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
084df9b5 +0x311:  mov    %eax,(%esp)
084df9b8 +0x314:  call   0847dd2a <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x4c>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x4c
084df9bd +0x319:  mov    -0x3c(%ebp),%eax
084df9c0 +0x31c:  mov    0xa(%eax),%eax
084df9c3 +0x31f:  mov    %eax,%edx
084df9c5 +0x321:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
084df9ca +0x326:  mov    %edx,0x4(%esp)
084df9ce +0x32a:  mov    %eax,(%esp)
084df9d1 +0x32d:  call   0847dd36 <_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc+0x58>  ; global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)+0x58
084df9d6 +0x332:  movb   $0x1,-0x5a(%ebp)
084df9da +0x336:  movb   $0x0,-0x59(%ebp)
084df9de +0x33a:  mov    -0x30(%ebp),%eax
084df9e1 +0x33d:  mov    %eax,-0x58(%ebp)
084df9e4 +0x340:  movl   $0x0,-0x54(%ebp)
084df9eb +0x347:  jmp    084df9ee <+0x34a>
084df9ed +0x349:  nop
084df9ee +0x34a:  lea    -0x5a(%ebp),%eax
084df9f1 +0x34d:  movl   $0xa,0x8(%esp)
084df9f9 +0x355:  mov    %eax,0x4(%esp)
084df9fd +0x359:  lea    -0x68(%ebp),%eax
084dfa00 +0x35c:  mov    %eax,(%esp)
084dfa03 +0x35f:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084dfa08 +0x364:  movl   $0x1,0x4(%esp)
084dfa10 +0x36c:  lea    -0x68(%ebp),%eax
084dfa13 +0x36f:  mov    %eax,(%esp)
084dfa16 +0x372:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dfa1b +0x377:  movl   $0x0,0x4(%esp)
084dfa23 +0x37f:  mov    -0x28(%ebp),%eax
084dfa26 +0x382:  mov    %eax,(%esp)
084dfa29 +0x385:  call   084ec850 <_GLOBAL__I__Z7getUserj+0x3802>  ; global constructors keyed to getUser(unsigned int)+0x3802
084dfa2e +0x38a:  lea    -0x68(%ebp),%eax
084dfa31 +0x38d:  mov    %eax,0x4(%esp)
084dfa35 +0x391:  mov    -0x28(%ebp),%eax
084dfa38 +0x394:  mov    %eax,(%esp)
084dfa3b +0x397:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084dfa40 +0x39c:  jmp    084dfa5d <+0x3b9>
084dfa42 +0x39e:  mov    %edx,%ebx
084dfa44 +0x3a0:  mov    %eax,%esi
084dfa46 +0x3a2:  lea    -0x68(%ebp),%eax
084dfa49 +0x3a5:  mov    %eax,(%esp)
084dfa4c +0x3a8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dfa51 +0x3ad:  mov    %esi,%eax
084dfa53 +0x3af:  mov    %ebx,%edx
084dfa55 +0x3b1:  mov    %eax,(%esp)
084dfa58 +0x3b4:  call   08ae3750 <_Unwind_Resume>
084dfa5d +0x3b9:  lea    -0x68(%ebp),%eax
084dfa60 +0x3bc:  mov    %eax,(%esp)
084dfa63 +0x3bf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dfa68 +0x3c4:  lea    -0x40(%ebp),%eax
084dfa6b +0x3c7:  movl   $0x0,0x8(%esp)
084dfa73 +0x3cf:  lea    -0x50(%ebp),%edx
084dfa76 +0x3d2:  mov    %edx,0x4(%esp)
084dfa7a +0x3d6:  mov    %eax,(%esp)
084dfa7d +0x3d9:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
084dfa82 +0x3de:  sub    $0x4,%esp
084dfa85 +0x3e1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084dfa8a +0x3e6:  lea    0x134(%eax),%edx
084dfa90 +0x3ec:  lea    -0x4c(%ebp),%eax
084dfa93 +0x3ef:  mov    %edx,0x4(%esp)
084dfa97 +0x3f3:  mov    %eax,(%esp)
084dfa9a +0x3f6:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
084dfa9f +0x3fb:  sub    $0x4,%esp
084dfaa2 +0x3fe:  lea    -0x4c(%ebp),%eax
084dfaa5 +0x401:  mov    %eax,0x4(%esp)
084dfaa9 +0x405:  lea    -0x50(%ebp),%eax
084dfaac +0x408:  mov    %eax,(%esp)
084dfaaf +0x40b:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
084dfab4 +0x410:  test   %al,%al
084dfab6 +0x412:  jne    084df7a1 <+0xfd>
084dfabc +0x418:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
084dfac1 +0x41d:  mov    -0x2c(%ebp),%edx
084dfac4 +0x420:  mov    %edx,0x4(%esp)
084dfac8 +0x424:  mov    %eax,(%esp)
084dfacb +0x427:  call   086b43d4 <_ZN16village_attacked18CVillageMonsterMgr23OnDestroyVillageMonsterE28ENUM_VILLAGE_ATTACKED_REWARD>  ; village_attacked::CVillageMonsterMgr::OnDestroyVillageMonster(ENUM_VILLAGE_ATTACKED_REWARD)
084dfad0 +0x42c:  mov    $0x0,%eax
084dfad5 +0x431:  lea    -0x8(%ebp),%esp
084dfad8 +0x434:  add    $0x0,%esp
084dfadb +0x437:  pop    %ebx
084dfadc +0x438:  pop    %esi
084dfadd +0x439:  pop    %ebp
084dfade +0x43a:  ret
084dfadf +0x43b:  nop
```

## 反编译 C

```c
// Inter_VillageAttackedEnd::dispatch_sig @ 0x84df6a4

/* Inter_VillageAttackedEnd::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedEnd::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  GameWorld *this;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  PacketGuard local_6c [14];
  char local_5e [2];
  int local_5c;
  undefined4 local_58;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_54 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_50 [4];
  int local_4c [2];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_44 [4];
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  CUserCharacInfo *local_2c;
  undefined1 local_26;
  byte local_25;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  
  this = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this);
  if (cVar1 == '\0') {
    local_40 = param_3;
    local_3c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_38 = *(uint *)(local_40 + 10);
    local_30 = 0;
    if (local_38 < local_3c) {
      local_34 = 0;
    }
    else {
      local_34 = local_38 - local_3c;
    }
    if (*(uint *)(local_40 + 0xe) < *(uint *)(local_40 + 0x12)) {
      village_attacked::CRevengeDungeon::CloseRevengeDungeon(GlobalData::s_revengeDungeonMgr);
      village_attacked::CRevengeDungeon::SetCloseTime
                (GlobalData::s_revengeDungeonMgr,*(uint *)(local_40 + 10));
      local_30 = 2;
    }
    else {
      village_attacked::CRevengeDungeon::OpenRevengeDungeon(GlobalData::s_revengeDungeonMgr);
      village_attacked::CRevengeDungeon::SetCloseTime
                (GlobalData::s_revengeDungeonMgr,*(uint *)(local_40 + 10));
      local_30 = 1;
    }
    G_GameWorld();
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::begin(local_54);
    while( true ) {
      G_GameWorld();
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::end(local_50);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_54,
                         (_Rb_tree_iterator *)local_50);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_54);
      local_2c = *(CUserCharacInfo **)(iVar2 + 4);
      if (local_2c != (CUserCharacInfo *)0x0) {
        memset(local_5e,0,10);
        PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 084df7e8 to 084dfa3f has its CatchHandler @ 084dfa42 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_6c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0x1ec);
        CUserCharacInfo::VillageAttack_NotDBUpdate(local_2c);
        if (local_30 == 1) {
          APSystem::CUserProc::ClearActionAndSendtoUser(local_2c,0x17,0,0);
          local_26 = 0;
          local_25 = CUserCharacInfo::GetCurVillageAttackCount(local_2c);
          local_5e[0] = '\0';
          local_5e[1] = 0;
          local_5c = local_34;
          local_24 = CUser::get_state((CUser *)local_2c);
          if (2 < local_24) {
            uVar3 = CUserCharacInfo::getCurCharacFatigue(local_2c);
            local_4c[0] = (uVar3 & 0xffff) - 5;
            local_4c[1] = 0;
            piVar4 = std::max<int>(local_4c + 1,local_4c);
            CUserCharacInfo::setCurCharacFatigue(local_2c,*piVar4);
            CUser::SendFatigue((CUser *)local_2c);
          }
          if (local_24 == 3) {
            local_26 = 1;
            if (2 < local_25) {
              local_58 = 0x1e41;
            }
            iVar2 = G_CDataManager();
            local_20 = std::vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>::
                       size((vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>> *)
                            (iVar2 + 0x500));
            for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
              iVar2 = G_CDataManager();
              puVar5 = (uint *)std::
                               vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>::
                               operator[]((vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>
                                           *)(iVar2 + 0x500),local_1c);
              local_18 = *puVar5;
              iVar2 = G_CDataManager();
              iVar2 = std::vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>::
                      operator[]((vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>
                                  *)(iVar2 + 0x500),local_1c);
              local_14 = *(uint *)(iVar2 + 4);
              iVar2 = G_CDataManager();
              iVar2 = std::vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>::
                      operator[]((vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>
                                  *)(iVar2 + 0x500),local_1c);
              local_10 = *(undefined4 *)(iVar2 + 8);
              if ((local_18 <= local_25) && (local_25 <= local_14)) {
                CUserCharacInfo::SetCurRevengeDungeonCount(local_2c,(uchar)local_10);
                CUserCharacInfo::VillageAttack_DBUpdate(local_2c);
                break;
              }
            }
            goto LAB_084df9ee;
          }
        }
        else {
          village_attacked::CRevengeDungeon::CloseRevengeDungeon(GlobalData::s_revengeDungeonMgr);
          village_attacked::CRevengeDungeon::SetCloseTime
                    (GlobalData::s_revengeDungeonMgr,*(uint *)(local_40 + 10));
          local_5e[0] = '\x01';
          local_5e[1] = 0;
          local_5c = local_34;
          local_58 = 0;
LAB_084df9ee:
          InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_6c,local_5e,10);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
          CUser::SetVillageAttackedReward((CUser *)local_2c,false);
          CUser::Send((CUser *)local_2c,local_6c);
        }
        PacketGuard::~PacketGuard(local_6c);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_44,(int)local_54);
    }
    village_attacked::CVillageMonsterMgr::OnDestroyVillageMonster
              (GlobalData::s_villageMonsterMgr,local_30);
  }
  return 0;
}
```
