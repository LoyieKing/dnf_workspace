# dispatch_sig

`_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MouseRegister` | `0x082637fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082637fe  _ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)
# range [0x082637fe, 0x082641e1]
082637fe +0x000:  push   %ebp
082637ff +0x001:  mov    %esp,%ebp
08263801 +0x003:  push   %edi
08263802 +0x004:  push   %esi
08263803 +0x005:  push   %ebx
08263804 +0x006:  sub    $0x20bc,%esp
0826380a +0x00c:  mov    0xc(%ebp),%eax
0826380d +0x00f:  mov    %eax,(%esp)
08263810 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08263815 +0x017:  cmp    $0x3,%eax
08263818 +0x01a:  je     08263831 <+0x33>
0826381a +0x01c:  mov    0xc(%ebp),%eax
0826381d +0x01f:  mov    %eax,(%esp)
08263820 +0x022:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08263825 +0x027:  cmp    $0x2,%eax
08263828 +0x02a:  je     08263831 <+0x33>
0826382a +0x02c:  mov    $0x1,%eax
0826382f +0x031:  jmp    08263836 <+0x38>
08263831 +0x033:  mov    $0x0,%eax
08263836 +0x038:  test   %al,%al
08263838 +0x03a:  je     08263865 <+0x67>
0826383a +0x03c:  movl   $0x0,0xc(%esp)
08263842 +0x044:  movl   $0x0,0x8(%esp)
0826384a +0x04c:  movl   $&_ZZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08263852 +0x054:  movl   $0x27c,(%esp)
08263859 +0x05b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0826385e +0x060:  mov    %eax,%ebx
08263860 +0x062:  jmp    082641d5 <+0x9d7>
08263865 +0x067:  lea    -0x89(%ebp),%eax
0826386b +0x06d:  mov    %eax,0x4(%esp)
0826386f +0x071:  mov    0x10(%ebp),%eax
08263872 +0x074:  mov    %eax,(%esp)
08263875 +0x077:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0826387a +0x07c:  xor    $0x1,%eax
0826387d +0x07f:  test   %al,%al
0826387f +0x081:  je     082638ac <+0xae>
08263881 +0x083:  movl   $0x0,0xc(%esp)
08263889 +0x08b:  movl   $0x0,0x8(%esp)
08263891 +0x093:  movl   $&_ZZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08263899 +0x09b:  movl   $0x282,(%esp)
082638a0 +0x0a2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082638a5 +0x0a7:  mov    %eax,%ebx
082638a7 +0x0a9:  jmp    082641d5 <+0x9d7>
082638ac +0x0ae:  mov    0xc(%ebp),%eax
082638af +0x0b1:  mov    %eax,(%esp)
082638b2 +0x0b4:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
082638b7 +0x0b9:  mov    %eax,(%esp)
082638ba +0x0bc:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
082638bf +0x0c1:  cmp    $0x2,%eax
082638c2 +0x0c4:  setg   %al
082638c5 +0x0c7:  test   %al,%al
082638c7 +0x0c9:  je     082638ee <+0xf0>
082638c9 +0x0cb:  movl   $0x88,0x8(%esp)
082638d1 +0x0d3:  movl   $0x74,0x4(%esp)
082638d9 +0x0db:  mov    0xc(%ebp),%eax
082638dc +0x0de:  mov    %eax,(%esp)
082638df +0x0e1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082638e4 +0x0e6:  mov    $0x0,%ebx
082638e9 +0x0eb:  jmp    082641d5 <+0x9d7>
082638ee +0x0f0:  mov    0xc(%ebp),%eax
082638f1 +0x0f3:  mov    %eax,(%esp)
082638f4 +0x0f6:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
082638f9 +0x0fb:  mov    %eax,(%esp)
082638fc +0x0fe:  call   0822efb4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x465e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x465e
08263901 +0x103:  cmp    $0xa,%eax
08263904 +0x106:  setg   %al
08263907 +0x109:  test   %al,%al
08263909 +0x10b:  je     08263930 <+0x132>
0826390b +0x10d:  movl   $0x8b,0x8(%esp)
08263913 +0x115:  movl   $0x74,0x4(%esp)
0826391b +0x11d:  mov    0xc(%ebp),%eax
0826391e +0x120:  mov    %eax,(%esp)
08263921 +0x123:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08263926 +0x128:  mov    $0x0,%ebx
0826392b +0x12d:  jmp    082641d5 <+0x9d7>
08263930 +0x132:  lea    -0x1089(%ebp),%edx
08263936 +0x138:  mov    $0x1000,%ebx
0826393b +0x13d:  mov    $0x0,%eax
08263940 +0x142:  mov    %edx,%ecx
08263942 +0x144:  and    $0x1,%ecx
08263945 +0x147:  test   %ecx,%ecx
08263947 +0x149:  je     08263951 <+0x153>
08263949 +0x14b:  mov    %al,(%edx)
0826394b +0x14d:  add    $0x1,%edx
0826394e +0x150:  sub    $0x1,%ebx
08263951 +0x153:  mov    %edx,%ecx
08263953 +0x155:  and    $0x2,%ecx
08263956 +0x158:  test   %ecx,%ecx
08263958 +0x15a:  je     08263963 <+0x165>
0826395a +0x15c:  mov    %ax,(%edx)
0826395d +0x15f:  add    $0x2,%edx
08263960 +0x162:  sub    $0x2,%ebx
08263963 +0x165:  mov    %ebx,%ecx
08263965 +0x167:  shr    $0x2,%ecx
08263968 +0x16a:  mov    %edx,%edi
0826396a +0x16c:  rep stos %eax,%es:(%edi)
0826396c +0x16e:  mov    %edi,%edx
0826396e +0x170:  mov    %ebx,%ecx
08263970 +0x172:  and    $0x2,%ecx
08263973 +0x175:  test   %ecx,%ecx
08263975 +0x177:  je     0826397d <+0x17f>
08263977 +0x179:  mov    %ax,(%edx)
0826397a +0x17c:  add    $0x2,%edx
0826397d +0x17f:  mov    %ebx,%ecx
0826397f +0x181:  and    $0x1,%ecx
08263982 +0x184:  test   %ecx,%ecx
08263984 +0x186:  je     0826398b <+0x18d>
08263986 +0x188:  mov    %al,(%edx)
08263988 +0x18a:  add    $0x1,%edx
0826398b +0x18d:  lea    -0x2089(%ebp),%edx
08263991 +0x193:  mov    $0x1000,%ebx
08263996 +0x198:  mov    $0x0,%eax
0826399b +0x19d:  mov    %edx,%ecx
0826399d +0x19f:  and    $0x1,%ecx
082639a0 +0x1a2:  test   %ecx,%ecx
082639a2 +0x1a4:  je     082639ac <+0x1ae>
082639a4 +0x1a6:  mov    %al,(%edx)
082639a6 +0x1a8:  add    $0x1,%edx
082639a9 +0x1ab:  sub    $0x1,%ebx
082639ac +0x1ae:  mov    %edx,%ecx
082639ae +0x1b0:  and    $0x2,%ecx
082639b1 +0x1b3:  test   %ecx,%ecx
082639b3 +0x1b5:  je     082639be <+0x1c0>
082639b5 +0x1b7:  mov    %ax,(%edx)
082639b8 +0x1ba:  add    $0x2,%edx
082639bb +0x1bd:  sub    $0x2,%ebx
082639be +0x1c0:  mov    %ebx,%ecx
082639c0 +0x1c2:  shr    $0x2,%ecx
082639c3 +0x1c5:  mov    %edx,%edi
082639c5 +0x1c7:  rep stos %eax,%es:(%edi)
082639c7 +0x1c9:  mov    %edi,%edx
082639c9 +0x1cb:  mov    %ebx,%ecx
082639cb +0x1cd:  and    $0x2,%ecx
082639ce +0x1d0:  test   %ecx,%ecx
082639d0 +0x1d2:  je     082639d8 <+0x1da>
082639d2 +0x1d4:  mov    %ax,(%edx)
082639d5 +0x1d7:  add    $0x2,%edx
082639d8 +0x1da:  mov    %ebx,%ecx
082639da +0x1dc:  and    $0x1,%ecx
082639dd +0x1df:  test   %ecx,%ecx
082639df +0x1e1:  je     082639e6 <+0x1e8>
082639e1 +0x1e3:  mov    %al,(%edx)
082639e3 +0x1e5:  add    $0x1,%edx
082639e6 +0x1e8:  movl   $0x1000,-0x28(%ebp)
082639ed +0x1ef:  movl   $0x1000,-0x2c(%ebp)
082639f4 +0x1f6:  movb   $0xe,-0x2d(%ebp)
082639f8 +0x1fa:  movb   $0xe,-0x2e(%ebp)
082639fc +0x1fe:  movzbl -0x89(%ebp),%eax
08263a03 +0x205:  cmp    $0x1,%al
08263a05 +0x207:  je     08263a85 <+0x287>
08263a07 +0x209:  mov    0xc(%ebp),%eax
08263a0a +0x20c:  mov    %eax,(%esp)
08263a0d +0x20f:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08263a12 +0x214:  mov    %eax,(%esp)
08263a15 +0x217:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
08263a1a +0x21c:  xor    $0x1,%eax
08263a1d +0x21f:  test   %al,%al
08263a1f +0x221:  je     08263a46 <+0x248>
08263a21 +0x223:  movl   $0x1,0x8(%esp)
08263a29 +0x22b:  movl   $0x74,0x4(%esp)
08263a31 +0x233:  mov    0xc(%ebp),%eax
08263a34 +0x236:  mov    %eax,(%esp)
08263a37 +0x239:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08263a3c +0x23e:  mov    $0x0,%ebx
08263a41 +0x243:  jmp    082641d5 <+0x9d7>
08263a46 +0x248:  mov    0xc(%ebp),%eax
08263a49 +0x24b:  mov    %eax,(%esp)
08263a4c +0x24e:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08263a51 +0x253:  mov    %eax,(%esp)
08263a54 +0x256:  call   0822efe6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4690>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4690
08263a59 +0x25b:  xor    $0x1,%eax
08263a5c +0x25e:  test   %al,%al
08263a5e +0x260:  je     08263a85 <+0x287>
08263a60 +0x262:  movl   $0x86,0x8(%esp)
08263a68 +0x26a:  movl   $0x74,0x4(%esp)
08263a70 +0x272:  mov    0xc(%ebp),%eax
08263a73 +0x275:  mov    %eax,(%esp)
08263a76 +0x278:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08263a7b +0x27d:  mov    $0x0,%ebx
08263a80 +0x282:  jmp    082641d5 <+0x9d7>
08263a85 +0x287:  movzbl -0x89(%ebp),%eax
08263a8c +0x28e:  cmp    $0x3,%al
08263a8e +0x290:  jne    08263c31 <+0x433>
08263a94 +0x296:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08263a99 +0x29b:  movl   $0x2ba,0x8(%esp)
08263aa1 +0x2a3:  movl   $"PacketDispatcher_Secu.cpp",0x4(%esp)
08263aa9 +0x2ab:  mov    %eax,(%esp)
08263aac +0x2ae:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08263ab1 +0x2b3:  movl   $0x1,0x8(%esp)
08263ab9 +0x2bb:  mov    %eax,0x4(%esp)
08263abd +0x2bf:  lea    -0x48(%ebp),%eax
08263ac0 +0x2c2:  mov    %eax,(%esp)
08263ac3 +0x2c5:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08263ac8 +0x2ca:  lea    -0x48(%ebp),%eax
08263acb +0x2cd:  mov    %eax,(%esp)
08263ace +0x2d0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08263ad3 +0x2d5:  movl   $0xa3,0x4(%esp)
08263adb +0x2dd:  mov    %eax,(%esp)
08263ade +0x2e0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08263ae3 +0x2e5:  mov    0xc(%ebp),%eax
08263ae6 +0x2e8:  mov    %eax,(%esp)
08263ae9 +0x2eb:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08263aee +0x2f0:  mov    %eax,%ebx
08263af0 +0x2f2:  lea    -0x48(%ebp),%eax
08263af3 +0x2f5:  mov    %eax,(%esp)
08263af6 +0x2f8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08263afb +0x2fd:  mov    %ebx,0x4(%esp)
08263aff +0x301:  mov    %eax,(%esp)
08263b02 +0x304:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08263b07 +0x309:  lea    -0x48(%ebp),%eax
08263b0a +0x30c:  mov    %eax,(%esp)
08263b0d +0x30f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08263b12 +0x314:  mov    %eax,(%esp)
08263b15 +0x317:  call   082654c0 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x298>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0x298
08263b1a +0x31c:  mov    %eax,-0x20(%ebp)
08263b1d +0x31f:  mov    0xc(%ebp),%eax
08263b20 +0x322:  mov    %eax,(%esp)
08263b23 +0x325:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08263b28 +0x32a:  mov    -0x20(%ebp),%edx
08263b2b +0x32d:  mov    %eax,(%edx)
08263b2d +0x32f:  movzbl -0x89(%ebp),%eax
08263b34 +0x336:  movzbl %al,%edx
08263b37 +0x339:  mov    -0x20(%ebp),%eax
08263b3a +0x33c:  mov    %edx,0x4(%eax)
08263b3d +0x33f:  mov    -0x20(%ebp),%eax
08263b40 +0x342:  lea    0x8(%eax),%edx
08263b43 +0x345:  movl   $0x7,0x8(%esp)
08263b4b +0x34d:  lea    -0x1089(%ebp),%eax
08263b51 +0x353:  mov    %eax,0x4(%esp)
08263b55 +0x357:  mov    %edx,(%esp)
08263b58 +0x35a:  call   0807d8d0 <_init+0x1c8>
08263b5d +0x35f:  mov    -0x20(%ebp),%eax
08263b60 +0x362:  lea    0xf(%eax),%edx
08263b63 +0x365:  movl   $0x7,0x8(%esp)
08263b6b +0x36d:  lea    -0x2089(%ebp),%eax
08263b71 +0x373:  mov    %eax,0x4(%esp)
08263b75 +0x377:  mov    %edx,(%esp)
08263b78 +0x37a:  call   0807d8d0 <_init+0x1c8>
08263b7d +0x37f:  mov    0xc(%ebp),%eax
08263b80 +0x382:  mov    %eax,(%esp)
08263b83 +0x385:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
08263b88 +0x38a:  mov    -0x20(%ebp),%edx
08263b8b +0x38d:  add    $0x48,%edx
08263b8e +0x390:  movl   $0x10,0x8(%esp)
08263b96 +0x398:  mov    %eax,0x4(%esp)
08263b9a +0x39c:  mov    %edx,(%esp)
08263b9d +0x39f:  call   0807d8d0 <_init+0x1c8>
08263ba2 +0x3a4:  mov    0xc(%ebp),%eax
08263ba5 +0x3a7:  add    $0x79700,%eax
08263baa +0x3ac:  movl   $0x4,0x8(%esp)
08263bb2 +0x3b4:  movl   $0x0,0x4(%esp)
08263bba +0x3bc:  mov    %eax,(%esp)
08263bbd +0x3bf:  call   0868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>  ; cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION)
08263bc2 +0x3c4:  mov    0xc(%ebp),%eax
08263bc5 +0x3c7:  mov    %eax,(%esp)
08263bc8 +0x3ca:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08263bcd +0x3cf:  movl   $0x26,0x8(%esp)
08263bd5 +0x3d7:  movl   $0x1,0x4(%esp)
08263bdd +0x3df:  mov    %eax,(%esp)
08263be0 +0x3e2:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
08263be5 +0x3e7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08263bea +0x3ec:  lea    -0x48(%ebp),%edx
08263bed +0x3ef:  mov    %edx,0x8(%esp)
08263bf1 +0x3f3:  movl   $0x2,0x4(%esp)
08263bf9 +0x3fb:  mov    %eax,(%esp)
08263bfc +0x3fe:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08263c01 +0x403:  mov    $0x0,%ebx
08263c06 +0x408:  lea    -0x48(%ebp),%eax
08263c09 +0x40b:  mov    %eax,(%esp)
08263c0c +0x40e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08263c11 +0x413:  jmp    082641d5 <+0x9d7>
08263c16 +0x418:  mov    %edx,%ebx
08263c18 +0x41a:  mov    %eax,%esi
08263c1a +0x41c:  lea    -0x48(%ebp),%eax
08263c1d +0x41f:  mov    %eax,(%esp)
08263c20 +0x422:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08263c25 +0x427:  mov    %esi,%eax
08263c27 +0x429:  mov    %ebx,%edx
08263c29 +0x42b:  mov    %eax,(%esp)
08263c2c +0x42e:  call   08ae3750 <_Unwind_Resume>
08263c31 +0x433:  lea    -0x2d(%ebp),%eax
08263c34 +0x436:  mov    %eax,0x4(%esp)
08263c38 +0x43a:  mov    0x10(%ebp),%eax
08263c3b +0x43d:  mov    %eax,(%esp)
08263c3e +0x440:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08263c43 +0x445:  xor    $0x1,%eax
08263c46 +0x448:  test   %al,%al
08263c48 +0x44a:  je     08263c75 <+0x477>
08263c4a +0x44c:  movl   $0x0,0xc(%esp)
08263c52 +0x454:  movl   $0x0,0x8(%esp)
08263c5a +0x45c:  movl   $&_ZZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08263c62 +0x464:  movl   $0x2dc,(%esp)
08263c69 +0x46b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08263c6e +0x470:  mov    %eax,%ebx
08263c70 +0x472:  jmp    082641d5 <+0x9d7>
08263c75 +0x477:  movzbl -0x2d(%ebp),%eax
08263c79 +0x47b:  test   %al,%al
08263c7b +0x47d:  je     08263c8d <+0x48f>
08263c7d +0x47f:  movzbl -0x2d(%ebp),%eax
08263c81 +0x483:  cmp    $0xd,%al
08263c83 +0x485:  ja     08263c8d <+0x48f>
08263c85 +0x487:  movzbl -0x2d(%ebp),%eax
08263c89 +0x48b:  cmp    $0x5,%al
08263c8b +0x48d:  jne    08263cb8 <+0x4ba>
08263c8d +0x48f:  movl   $0x0,0xc(%esp)
08263c95 +0x497:  movl   $0x0,0x8(%esp)
08263c9d +0x49f:  movl   $&_ZZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08263ca5 +0x4a7:  movl   $0x2e3,(%esp)
08263cac +0x4ae:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08263cb1 +0x4b3:  mov    %eax,%ebx
08263cb3 +0x4b5:  jmp    082641d5 <+0x9d7>
08263cb8 +0x4ba:  movl   $0x0,-0x34(%ebp)
08263cbf +0x4c1:  movl   $0x0,-0x38(%ebp)
08263cc6 +0x4c8:  lea    -0x34(%ebp),%eax
08263cc9 +0x4cb:  mov    %eax,0x4(%esp)
08263ccd +0x4cf:  mov    0x10(%ebp),%eax
08263cd0 +0x4d2:  mov    %eax,(%esp)
08263cd3 +0x4d5:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08263cd8 +0x4da:  xor    $0x1,%eax
08263cdb +0x4dd:  test   %al,%al
08263cdd +0x4df:  je     08263d0a <+0x50c>
08263cdf +0x4e1:  movl   $0x0,0xc(%esp)
08263ce7 +0x4e9:  movl   $0x0,0x8(%esp)
08263cef +0x4f1:  movl   $&_ZZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08263cf7 +0x4f9:  movl   $0x2e8,(%esp)
08263cfe +0x500:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08263d03 +0x505:  mov    %eax,%ebx
08263d05 +0x507:  jmp    082641d5 <+0x9d7>
08263d0a +0x50c:  mov    -0x34(%ebp),%eax
08263d0d +0x50f:  mov    %eax,0x8(%esp)
08263d11 +0x513:  lea    -0x89(%ebp),%eax
08263d17 +0x519:  add    $0x1,%eax
08263d1a +0x51c:  mov    %eax,0x4(%esp)
08263d1e +0x520:  mov    0x10(%ebp),%eax
08263d21 +0x523:  mov    %eax,(%esp)
08263d24 +0x526:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08263d29 +0x52b:  xor    $0x1,%eax
08263d2c +0x52e:  test   %al,%al
08263d2e +0x530:  je     08263d5b <+0x55d>
08263d30 +0x532:  movl   $0x0,0xc(%esp)
08263d38 +0x53a:  movl   $0x0,0x8(%esp)
08263d40 +0x542:  movl   $&_ZZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08263d48 +0x54a:  movl   $0x2ea,(%esp)
08263d4f +0x551:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08263d54 +0x556:  mov    %eax,%ebx
08263d56 +0x558:  jmp    082641d5 <+0x9d7>
08263d5b +0x55d:  nop
08263d5c +0x55e:  mov    -0x34(%ebp),%eax
08263d5f +0x561:  mov    %eax,-0x38(%ebp)
08263d62 +0x564:  movzbl -0x2d(%ebp),%eax
08263d66 +0x568:  mov    %al,-0x2e(%ebp)
08263d69 +0x56b:  mov    -0x34(%ebp),%eax
08263d6c +0x56e:  mov    %eax,0x8(%esp)
08263d70 +0x572:  lea    -0x89(%ebp),%eax
08263d76 +0x578:  add    $0x1,%eax
08263d79 +0x57b:  mov    %eax,0x4(%esp)
08263d7d +0x57f:  lea    -0x89(%ebp),%eax
08263d83 +0x585:  add    $0x21,%eax
08263d86 +0x588:  mov    %eax,(%esp)
08263d89 +0x58b:  call   0807d8a0 <_init+0x198>
08263d8e +0x590:  lea    -0x1089(%ebp),%edi
08263d94 +0x596:  mov    -0x34(%ebp),%esi
08263d97 +0x599:  lea    -0x89(%ebp),%eax
08263d9d +0x59f:  add    $0x1,%eax
08263da0 +0x5a2:  mov    %eax,-0x20a0(%ebp)
08263da6 +0x5a8:  movzbl -0x2d(%ebp),%eax
08263daa +0x5ac:  movzbl %al,%ebx
08263dad +0x5af:  mov    0xc(%ebp),%eax
08263db0 +0x5b2:  mov    %eax,(%esp)
08263db3 +0x5b5:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08263db8 +0x5ba:  mov    %eax,(%esp)
08263dbb +0x5bd:  call   0859984c <_ZN8Sanicova4CPad20GetSelectedCipherIdxEv>  ; Sanicova::CPad::GetSelectedCipherIdx()
08263dc0 +0x5c2:  movzwl %ax,%eax
08263dc3 +0x5c5:  shl    $0x4,%eax
08263dc6 +0x5c8:  mov    &_ZN10GlobalData32s_secu_cipher_keystring_manager_E(%eax),%eax
08263dcc +0x5ce:  lea    -0x28(%ebp),%edx
08263dcf +0x5d1:  mov    %edx,0x14(%esp)
08263dd3 +0x5d5:  mov    %edi,0x10(%esp)
08263dd7 +0x5d9:  mov    %esi,0xc(%esp)
08263ddb +0x5dd:  mov    -0x20a0(%ebp),%edx
08263de1 +0x5e3:  mov    %edx,0x8(%esp)
08263de5 +0x5e7:  mov    %ebx,0x4(%esp)
08263de9 +0x5eb:  mov    %eax,(%esp)
08263dec +0x5ee:  call   0809751e <_ZN6Cipher7DecryptEiPKhiPhPi>  ; Cipher::Decrypt(int, unsigned char const*, int, unsigned char*, int*)
08263df1 +0x5f3:  xor    $0x1,%eax
08263df4 +0x5f6:  test   %al,%al
08263df6 +0x5f8:  jne    08263e62 <+0x664>
08263df8 +0x5fa:  lea    -0x2089(%ebp),%edi
08263dfe +0x600:  mov    -0x38(%ebp),%esi
08263e01 +0x603:  lea    -0x89(%ebp),%eax
08263e07 +0x609:  add    $0x21,%eax
08263e0a +0x60c:  mov    %eax,-0x209c(%ebp)
08263e10 +0x612:  movzbl -0x2e(%ebp),%eax
08263e14 +0x616:  movzbl %al,%ebx
08263e17 +0x619:  mov    0xc(%ebp),%eax
08263e1a +0x61c:  mov    %eax,(%esp)
08263e1d +0x61f:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08263e22 +0x624:  mov    %eax,(%esp)
08263e25 +0x627:  call   0859984c <_ZN8Sanicova4CPad20GetSelectedCipherIdxEv>  ; Sanicova::CPad::GetSelectedCipherIdx()
08263e2a +0x62c:  movzwl %ax,%eax
08263e2d +0x62f:  shl    $0x4,%eax
08263e30 +0x632:  mov    &_ZN10GlobalData32s_secu_cipher_keystring_manager_E(%eax),%eax
08263e36 +0x638:  lea    -0x2c(%ebp),%edx
08263e39 +0x63b:  mov    %edx,0x14(%esp)
08263e3d +0x63f:  mov    %edi,0x10(%esp)
08263e41 +0x643:  mov    %esi,0xc(%esp)
08263e45 +0x647:  mov    -0x209c(%ebp),%edi
08263e4b +0x64d:  mov    %edi,0x8(%esp)
08263e4f +0x651:  mov    %ebx,0x4(%esp)
08263e53 +0x655:  mov    %eax,(%esp)
08263e56 +0x658:  call   0809751e <_ZN6Cipher7DecryptEiPKhiPhPi>  ; Cipher::Decrypt(int, unsigned char const*, int, unsigned char*, int*)
08263e5b +0x65d:  xor    $0x1,%eax
08263e5e +0x660:  test   %al,%al
08263e60 +0x662:  je     08263e69 <+0x66b>
08263e62 +0x664:  mov    $0x1,%eax
08263e67 +0x669:  jmp    08263e6e <+0x670>
08263e69 +0x66b:  mov    $0x0,%eax
08263e6e +0x670:  test   %al,%al
08263e70 +0x672:  je     08263e97 <+0x699>
08263e72 +0x674:  movl   $0x1,0x8(%esp)
08263e7a +0x67c:  movl   $0x74,0x4(%esp)
08263e82 +0x684:  mov    0xc(%ebp),%eax
08263e85 +0x687:  mov    %eax,(%esp)
08263e88 +0x68a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08263e8d +0x68f:  mov    $0x0,%ebx
08263e92 +0x694:  jmp    082641d5 <+0x9d7>
08263e97 +0x699:  movl   $0x0,-0x1c(%ebp)
08263e9e +0x6a0:  jmp    08263f12 <+0x714>
08263ea0 +0x6a2:  mov    -0x1c(%ebp),%ebx
08263ea3 +0x6a5:  mov    -0x1c(%ebp),%eax
08263ea6 +0x6a8:  movzbl -0x1089(%ebp,%eax,1),%eax
08263eae +0x6b0:  mov    %eax,%esi
08263eb0 +0x6b2:  mov    0xc(%ebp),%eax
08263eb3 +0x6b5:  mov    %eax,(%esp)
08263eb6 +0x6b8:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08263ebb +0x6bd:  mov    -0x1c(%ebp),%edx
08263ebe +0x6c0:  mov    %edx,0x4(%esp)
08263ec2 +0x6c4:  mov    %eax,(%esp)
08263ec5 +0x6c7:  call   08599936 <_ZN8Sanicova4CPad12GetShakeDataEi>  ; Sanicova::CPad::GetShakeData(int)
08263eca +0x6cc:  mov    %esi,%edx
08263ecc +0x6ce:  sub    %al,%dl
08263ece +0x6d0:  mov    %edx,%eax
08263ed0 +0x6d2:  mov    %al,-0x1089(%ebp,%ebx,1)
08263ed7 +0x6d9:  mov    -0x1c(%ebp),%ebx
08263eda +0x6dc:  mov    -0x1c(%ebp),%eax
08263edd +0x6df:  movzbl -0x2089(%ebp,%eax,1),%eax
08263ee5 +0x6e7:  mov    %eax,%esi
08263ee7 +0x6e9:  mov    0xc(%ebp),%eax
08263eea +0x6ec:  mov    %eax,(%esp)
08263eed +0x6ef:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08263ef2 +0x6f4:  mov    -0x1c(%ebp),%edx
08263ef5 +0x6f7:  mov    %edx,0x4(%esp)
08263ef9 +0x6fb:  mov    %eax,(%esp)
08263efc +0x6fe:  call   08599936 <_ZN8Sanicova4CPad12GetShakeDataEi>  ; Sanicova::CPad::GetShakeData(int)
08263f01 +0x703:  mov    %esi,%edx
08263f03 +0x705:  sub    %al,%dl
08263f05 +0x707:  mov    %edx,%eax
08263f07 +0x709:  mov    %al,-0x2089(%ebp,%ebx,1)
08263f0e +0x710:  addl   $0x1,-0x1c(%ebp)
08263f12 +0x714:  cmpl   $0x3,-0x1c(%ebp)
08263f16 +0x718:  setle  %al
08263f19 +0x71b:  test   %al,%al
08263f1b +0x71d:  jne    08263ea0 <+0x6a2>
08263f1d +0x71f:  lea    -0x1089(%ebp),%eax
08263f23 +0x725:  mov    %eax,(%esp)
08263f26 +0x728:  call   082632ca <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc>  ; Dispatcher_MouseRegister::checkValiedPassword(char const*)
08263f2b +0x72d:  xor    $0x1,%eax
08263f2e +0x730:  test   %al,%al
08263f30 +0x732:  jne    08263f47 <+0x749>
08263f32 +0x734:  lea    -0x2089(%ebp),%eax
08263f38 +0x73a:  mov    %eax,(%esp)
08263f3b +0x73d:  call   082632ca <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc>  ; Dispatcher_MouseRegister::checkValiedPassword(char const*)
08263f40 +0x742:  xor    $0x1,%eax
08263f43 +0x745:  test   %al,%al
08263f45 +0x747:  je     08263f4e <+0x750>
08263f47 +0x749:  mov    $0x1,%eax
08263f4c +0x74e:  jmp    08263f53 <+0x755>
08263f4e +0x750:  mov    $0x0,%eax
08263f53 +0x755:  test   %al,%al
08263f55 +0x757:  je     08263f82 <+0x784>
08263f57 +0x759:  movl   $0x0,0xc(%esp)
08263f5f +0x761:  movl   $0x0,0x8(%esp)
08263f67 +0x769:  movl   $&_ZZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08263f6f +0x771:  movl   $0x343,(%esp)
08263f76 +0x778:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08263f7b +0x77d:  mov    %eax,%ebx
08263f7d +0x77f:  jmp    082641d5 <+0x9d7>
08263f82 +0x784:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08263f87 +0x789:  movl   $0x346,0x8(%esp)
08263f8f +0x791:  movl   $"PacketDispatcher_Secu.cpp",0x4(%esp)
08263f97 +0x799:  mov    %eax,(%esp)
08263f9a +0x79c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08263f9f +0x7a1:  movl   $0x1,0x8(%esp)
08263fa7 +0x7a9:  mov    %eax,0x4(%esp)
08263fab +0x7ad:  lea    -0x40(%ebp),%eax
08263fae +0x7b0:  mov    %eax,(%esp)
08263fb1 +0x7b3:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08263fb6 +0x7b8:  lea    -0x40(%ebp),%eax
08263fb9 +0x7bb:  mov    %eax,(%esp)
08263fbc +0x7be:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08263fc1 +0x7c3:  movl   $0xa3,0x4(%esp)
08263fc9 +0x7cb:  mov    %eax,(%esp)
08263fcc +0x7ce:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08263fd1 +0x7d3:  mov    0xc(%ebp),%eax
08263fd4 +0x7d6:  mov    %eax,(%esp)
08263fd7 +0x7d9:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08263fdc +0x7de:  mov    %eax,%ebx
08263fde +0x7e0:  lea    -0x40(%ebp),%eax
08263fe1 +0x7e3:  mov    %eax,(%esp)
08263fe4 +0x7e6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08263fe9 +0x7eb:  mov    %ebx,0x4(%esp)
08263fed +0x7ef:  mov    %eax,(%esp)
08263ff0 +0x7f2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08263ff5 +0x7f7:  lea    -0x40(%ebp),%eax
08263ff8 +0x7fa:  mov    %eax,(%esp)
08263ffb +0x7fd:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08264000 +0x802:  mov    %eax,(%esp)
08264003 +0x805:  call   082654c0 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x298>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0x298
08264008 +0x80a:  mov    %eax,-0x24(%ebp)
0826400b +0x80d:  mov    0xc(%ebp),%eax
0826400e +0x810:  mov    %eax,(%esp)
08264011 +0x813:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08264016 +0x818:  mov    -0x24(%ebp),%edx
08264019 +0x81b:  mov    %eax,(%edx)
0826401b +0x81d:  movzbl -0x89(%ebp),%eax
08264022 +0x824:  movzbl %al,%edx
08264025 +0x827:  mov    -0x24(%ebp),%eax
08264028 +0x82a:  mov    %edx,0x4(%eax)
0826402b +0x82d:  mov    -0x24(%ebp),%eax
0826402e +0x830:  lea    0x8(%eax),%edx
08264031 +0x833:  movl   $0x7,0x8(%esp)
08264039 +0x83b:  lea    -0x1089(%ebp),%eax
0826403f +0x841:  mov    %eax,0x4(%esp)
08264043 +0x845:  mov    %edx,(%esp)
08264046 +0x848:  call   0807d8d0 <_init+0x1c8>
0826404b +0x84d:  mov    -0x24(%ebp),%eax
0826404e +0x850:  lea    0xf(%eax),%edx
08264051 +0x853:  movl   $0x7,0x8(%esp)
08264059 +0x85b:  lea    -0x2089(%ebp),%eax
0826405f +0x861:  mov    %eax,0x4(%esp)
08264063 +0x865:  mov    %edx,(%esp)
08264066 +0x868:  call   0807d8d0 <_init+0x1c8>
0826406b +0x86d:  mov    0xc(%ebp),%eax
0826406e +0x870:  mov    %eax,(%esp)
08264071 +0x873:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
08264076 +0x878:  mov    -0x24(%ebp),%edx
08264079 +0x87b:  add    $0x48,%edx
0826407c +0x87e:  movl   $0x10,0x8(%esp)
08264084 +0x886:  mov    %eax,0x4(%esp)
08264088 +0x88a:  mov    %edx,(%esp)
0826408b +0x88d:  call   0807d8d0 <_init+0x1c8>
08264090 +0x892:  movzbl -0x89(%ebp),%eax
08264097 +0x899:  cmp    $0x1,%al
08264099 +0x89b:  jne    082640bd <+0x8bf>
0826409b +0x89d:  mov    0xc(%ebp),%eax
0826409e +0x8a0:  add    $0x79700,%eax
082640a3 +0x8a5:  movl   $0x2,0x8(%esp)
082640ab +0x8ad:  movl   $0x0,0x4(%esp)
082640b3 +0x8b5:  mov    %eax,(%esp)
082640b6 +0x8b8:  call   0868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>  ; cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION)
082640bb +0x8bd:  jmp    082640e8 <+0x8ea>
082640bd +0x8bf:  movzbl -0x89(%ebp),%eax
082640c4 +0x8c6:  cmp    $0x2,%al
082640c6 +0x8c8:  jne    082640e8 <+0x8ea>
082640c8 +0x8ca:  mov    0xc(%ebp),%eax
082640cb +0x8cd:  add    $0x79700,%eax
082640d0 +0x8d2:  movl   $0x3,0x8(%esp)
082640d8 +0x8da:  movl   $0x0,0x4(%esp)
082640e0 +0x8e2:  mov    %eax,(%esp)
082640e3 +0x8e5:  call   0868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>  ; cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION)
082640e8 +0x8ea:  movzbl -0x89(%ebp),%eax
082640ef +0x8f1:  cmp    $0x1,%al
082640f1 +0x8f3:  jne    08264118 <+0x91a>
082640f3 +0x8f5:  mov    0xc(%ebp),%eax
082640f6 +0x8f8:  mov    %eax,(%esp)
082640f9 +0x8fb:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
082640fe +0x900:  movl   $0x25,0x8(%esp)
08264106 +0x908:  movl   $0x1,0x4(%esp)
0826410e +0x910:  mov    %eax,(%esp)
08264111 +0x913:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
08264116 +0x918:  jmp    08264146 <+0x948>
08264118 +0x91a:  movzbl -0x89(%ebp),%eax
0826411f +0x921:  cmp    $0x2,%al
08264121 +0x923:  jne    08264146 <+0x948>
08264123 +0x925:  mov    0xc(%ebp),%eax
08264126 +0x928:  mov    %eax,(%esp)
08264129 +0x92b:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
0826412e +0x930:  movl   $0x24,0x8(%esp)
08264136 +0x938:  movl   $0x1,0x4(%esp)
0826413e +0x940:  mov    %eax,(%esp)
08264141 +0x943:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
08264146 +0x948:  mov    0xc(%ebp),%eax
08264149 +0x94b:  mov    %eax,(%esp)
0826414c +0x94e:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08264151 +0x953:  mov    %eax,(%esp)
08264154 +0x956:  call   08265326 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xfe>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xfe
08264159 +0x95b:  mov    -0x24(%ebp),%edx
0826415c +0x95e:  add    $0x23,%edx
0826415f +0x961:  movl   $0x24,0x8(%esp)
08264167 +0x969:  mov    %eax,0x4(%esp)
0826416b +0x96d:  mov    %edx,(%esp)
0826416e +0x970:  call   0807d8a0 <_init+0x198>
08264173 +0x975:  mov    0xc(%ebp),%eax
08264176 +0x978:  mov    %eax,(%esp)
08264179 +0x97b:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0826417e +0x980:  mov    %eax,(%esp)
08264181 +0x983:  call   08265302 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xda>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xda
08264186 +0x988:  mov    -0x24(%ebp),%edx
08264189 +0x98b:  mov    %al,0x58(%edx)
0826418c +0x98e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08264191 +0x993:  lea    -0x40(%ebp),%edx
08264194 +0x996:  mov    %edx,0x8(%esp)
08264198 +0x99a:  movl   $0x2,0x4(%esp)
082641a0 +0x9a2:  mov    %eax,(%esp)
082641a3 +0x9a5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
082641a8 +0x9aa:  mov    $0x0,%ebx
082641ad +0x9af:  lea    -0x40(%ebp),%eax
082641b0 +0x9b2:  mov    %eax,(%esp)
082641b3 +0x9b5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082641b8 +0x9ba:  jmp    082641d5 <+0x9d7>
082641ba +0x9bc:  mov    %edx,%ebx
082641bc +0x9be:  mov    %eax,%esi
082641be +0x9c0:  lea    -0x40(%ebp),%eax
082641c1 +0x9c3:  mov    %eax,(%esp)
082641c4 +0x9c6:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082641c9 +0x9cb:  mov    %esi,%eax
082641cb +0x9cd:  mov    %ebx,%edx
082641cd +0x9cf:  mov    %eax,(%esp)
082641d0 +0x9d2:  call   08ae3750 <_Unwind_Resume>
082641d5 +0x9d7:  mov    %ebx,%eax
082641d7 +0x9d9:  add    $0x20bc,%esp
082641dd +0x9df:  pop    %ebx
082641de +0x9e0:  pop    %esi
082641df +0x9e1:  pop    %edi
082641e0 +0x9e2:  pop    %ebp
082641e1 +0x9e3:  ret
```

## 反编译 C

```c
// Dispatcher_MouseRegister::dispatch_sig @ 0x82637fe

/* Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_MouseRegister::dispatch_sig
          (Dispatcher_MouseRegister *this,CUser *param_1,PacketBuf *param_2)

{
  uchar uVar1;
  size_t sVar2;
  int iVar3;
  char cVar4;
  SIG_MOUSE_REGISTER SVar5;
  int iVar6;
  undefined4 uVar7;
  CPad *pCVar8;
  Stream *pSVar9;
  CStreamGuard *pCVar10;
  char *pcVar11;
  void *__src;
  uint uVar12;
  uchar *puVar13;
  uint uVar14;
  bool bVar15;
  byte bVar16;
  uchar local_208d [4096];
  uchar local_108d [4096];
  byte local_8d;
  uchar auStack_8c [32];
  uchar auStack_6c [32];
  CStreamGuard local_4c [8];
  CStreamGuard local_44 [8];
  size_t local_3c;
  size_t local_38;
  byte local_32;
  byte local_31;
  int local_30 [2];
  SIG_MOUSE_REGISTER *local_28;
  SIG_MOUSE_REGISTER *local_24;
  int local_20;
  
  bVar16 = 0;
  iVar6 = CUser::get_state(param_1);
  if ((iVar6 == 3) || (iVar6 = CUser::get_state(param_1), iVar6 == 2)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  if (bVar15) {
    uVar7 = LineFunc(0x27c,"virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar7;
  }
  cVar4 = PacketBuf::get_byte(param_2,&local_8d);
  if (cVar4 != '\x01') {
    uVar7 = LineFunc(0x282,"virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar7;
  }
  pCVar8 = (CPad *)CUser::getPad(param_1);
  iVar6 = Sanicova::CPad::getFailCnt(pCVar8);
  if (2 < iVar6) {
    CUser::SendCmdErrorPacket(param_1,0x74,0x88);
    return 0;
  }
  pCVar8 = (CPad *)CUser::getPad(param_1);
  iVar6 = Sanicova::CPad::getCancelCnt(pCVar8);
  if (10 < iVar6) {
    CUser::SendCmdErrorPacket(param_1,0x74,0x8b);
    return 0;
  }
  puVar13 = local_108d;
  uVar14 = 0x1000;
  bVar15 = ((uint)puVar13 & 1) != 0;
  if (bVar15) {
    local_108d[0] = '\0';
    puVar13 = local_108d + 1;
    uVar14 = 0xfff;
  }
  if (((uint)puVar13 & 2) != 0) {
    puVar13[0] = '\0';
    puVar13[1] = '\0';
    puVar13 = puVar13 + 2;
    uVar14 = uVar14 - 2;
  }
  for (uVar12 = uVar14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    puVar13[0] = '\0';
    puVar13[1] = '\0';
    puVar13[2] = '\0';
    puVar13[3] = '\0';
    puVar13 = puVar13 + ((uint)bVar16 * -2 + 1) * 4;
  }
  if ((uVar14 & 2) != 0) {
    puVar13[0] = '\0';
    puVar13[1] = '\0';
    puVar13 = puVar13 + 2;
  }
  if (bVar15) {
    *puVar13 = '\0';
  }
  puVar13 = local_208d;
  uVar14 = 0x1000;
  bVar15 = ((uint)puVar13 & 1) != 0;
  if (bVar15) {
    local_208d[0] = '\0';
    puVar13 = local_208d + 1;
    uVar14 = 0xfff;
  }
  if (((uint)puVar13 & 2) != 0) {
    puVar13[0] = '\0';
    puVar13[1] = '\0';
    puVar13 = puVar13 + 2;
    uVar14 = uVar14 - 2;
  }
  for (uVar12 = uVar14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    puVar13[0] = '\0';
    puVar13[1] = '\0';
    puVar13[2] = '\0';
    puVar13[3] = '\0';
    puVar13 = puVar13 + ((uint)bVar16 * -2 + 1) * 4;
  }
  if ((uVar14 & 2) != 0) {
    puVar13[0] = '\0';
    puVar13[1] = '\0';
    puVar13 = puVar13 + 2;
  }
  if (bVar15) {
    *puVar13 = '\0';
  }
  local_30[1] = 0x1000;
  local_30[0] = 0x1000;
  local_31 = 0xe;
  local_32 = 0xe;
  if (local_8d != 1) {
    pCVar8 = (CPad *)CUser::getPad(param_1);
    cVar4 = Sanicova::CPad::isActivate(pCVar8);
    if (cVar4 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0x74,1);
      return 0;
    }
    pCVar8 = (CPad *)CUser::getPad(param_1);
    cVar4 = Sanicova::CPad::isCertified(pCVar8);
    if (cVar4 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0x74,0x86);
      return 0;
    }
  }
  if (local_8d == 3) {
    pSVar9 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Secu.cpp",0x2ba);
    CStreamGuard::CStreamGuard(local_4c,pSVar9,true);
    pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 08263ade to 08263c00 has its CatchHandler @ 08263c16 */
    CStreamGuard::operator<<(pCVar10,0xa3);
    iVar6 = CUser::GetUID(param_1);
    pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
    CStreamGuard::operator<<(pCVar10,iVar6);
    pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
    local_24 = CStreamGuard::GetInBuffer<SIG_MOUSE_REGISTER>(pCVar10);
    uVar7 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_24 = uVar7;
    *(uint *)(local_24 + 4) = (uint)local_8d;
    strncpy((char *)(local_24 + 8),(char *)local_108d,7);
    strncpy((char *)(local_24 + 0xf),(char *)local_208d,7);
    pcVar11 = (char *)CUser::getWebAddress(param_1);
    strncpy((char *)(local_24 + 0x48),pcVar11,0x10);
    cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),0,4);
    uVar7 = CUser::getHades(param_1);
    XNuclear::CHades::ChangeSecurity(uVar7,1,0x26);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_4c);
    CStreamGuard::~CStreamGuard(local_4c);
    return 0;
  }
  cVar4 = PacketBuf::get_byte(param_2,&local_31);
  if (cVar4 != '\x01') {
    uVar7 = LineFunc(0x2dc,"virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar7;
  }
  if (((local_31 == 0) || (0xd < local_31)) || (local_31 == 5)) {
    uVar7 = LineFunc(0x2e3,"virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar7;
  }
  local_38 = 0;
  local_3c = 0;
  cVar4 = PacketBuf::get_int(param_2,(int *)&local_38);
  if (cVar4 != '\x01') {
    uVar7 = LineFunc(0x2e8,"virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar7;
  }
  cVar4 = PacketBuf::get_binary(param_2,(char *)auStack_8c,local_38);
  if (cVar4 != '\x01') {
    uVar7 = LineFunc(0x2ea,"virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar7;
  }
  local_3c = local_38;
  local_32 = local_31;
  memcpy(auStack_6c,auStack_8c,local_38);
  sVar2 = local_38;
  uVar12 = (uint)local_31;
  pCVar8 = (CPad *)CUser::getPad(param_1);
  uVar14 = Sanicova::CPad::GetSelectedCipherIdx(pCVar8);
  cVar4 = Cipher::Decrypt((Cipher *)
                          (&GlobalData::s_secu_cipher_keystring_manager_)[(uVar14 & 0xffff) * 4],
                          uVar12,auStack_8c,sVar2,local_108d,local_30 + 1);
  sVar2 = local_3c;
  if (cVar4 == '\x01') {
    uVar12 = (uint)local_32;
    pCVar8 = (CPad *)CUser::getPad(param_1);
    uVar14 = Sanicova::CPad::GetSelectedCipherIdx(pCVar8);
    cVar4 = Cipher::Decrypt((Cipher *)
                            (&GlobalData::s_secu_cipher_keystring_manager_)[(uVar14 & 0xffff) * 4],
                            uVar12,auStack_6c,sVar2,local_208d,local_30);
    if (cVar4 == '\x01') {
      bVar15 = false;
      goto LAB_08263e6e;
    }
  }
  bVar15 = true;
LAB_08263e6e:
  if (!bVar15) {
    for (local_20 = 0; iVar6 = local_20, local_20 < 4; local_20 = local_20 + 1) {
      uVar1 = local_108d[local_20];
      pCVar8 = (CPad *)CUser::getPad(param_1);
      cVar4 = Sanicova::CPad::GetShakeData(pCVar8,local_20);
      iVar3 = local_20;
      local_108d[iVar6] = uVar1 - cVar4;
      uVar1 = local_208d[local_20];
      pCVar8 = (CPad *)CUser::getPad(param_1);
      cVar4 = Sanicova::CPad::GetShakeData(pCVar8,local_20);
      local_208d[iVar3] = uVar1 - cVar4;
    }
    cVar4 = checkValiedPassword((char *)local_108d);
    if ((cVar4 == '\x01') && (cVar4 = checkValiedPassword((char *)local_208d), cVar4 == '\x01')) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) {
      uVar7 = LineFunc(0x343,
                       "virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
    else {
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Secu.cpp",0x346);
      CStreamGuard::CStreamGuard(local_44,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_44);
                    /* try { // try from 08263fcc to 082641a7 has its CatchHandler @ 082641ba */
      CStreamGuard::operator<<(pCVar10,0xa3);
      iVar6 = CUser::GetUID(param_1);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_44);
      CStreamGuard::operator<<(pCVar10,iVar6);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_44);
      local_28 = CStreamGuard::GetInBuffer<SIG_MOUSE_REGISTER>(pCVar10);
      uVar7 = CUser::get_acc_id(param_1);
      *(undefined4 *)local_28 = uVar7;
      *(uint *)(local_28 + 4) = (uint)local_8d;
      strncpy((char *)(local_28 + 8),(char *)local_108d,7);
      strncpy((char *)(local_28 + 0xf),(char *)local_208d,7);
      pcVar11 = (char *)CUser::getWebAddress(param_1);
      strncpy((char *)(local_28 + 0x48),pcVar11,0x10);
      if (local_8d == 1) {
        cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),0,2);
      }
      else if (local_8d == 2) {
        cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),0,3);
      }
      if (local_8d == 1) {
        uVar7 = CUser::getHades(param_1);
        XNuclear::CHades::ChangeSecurity(uVar7,1,0x25);
      }
      else if (local_8d == 2) {
        uVar7 = CUser::getHades(param_1);
        XNuclear::CHades::ChangeSecurity(uVar7,1,0x24);
      }
      pCVar8 = (CPad *)CUser::getPad(param_1);
      __src = (void *)Sanicova::CPad::getPassword(pCVar8);
      memcpy(local_28 + 0x23,__src,0x24);
      pCVar8 = (CPad *)CUser::getPad(param_1);
      SVar5 = (SIG_MOUSE_REGISTER)Sanicova::CPad::getAdvideChangePwd(pCVar8);
      local_28[0x58] = SVar5;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_44);
      uVar7 = 0;
      CStreamGuard::~CStreamGuard(local_44);
    }
    return uVar7;
  }
  CUser::SendCmdErrorPacket(param_1,0x74,1);
  return 0;
}
```
