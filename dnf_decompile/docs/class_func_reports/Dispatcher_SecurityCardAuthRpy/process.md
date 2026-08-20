# process

`_ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SecurityCardAuthRpy::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityCardAuthRpy` | `0x082627ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082627ca  _ZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SecurityCardAuthRpy::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x082627ca, 0x08262f4d]
082627ca +0x000:  push   %ebp
082627cb +0x001:  mov    %esp,%ebp
082627cd +0x003:  push   %edi
082627ce +0x004:  push   %esi
082627cf +0x005:  push   %ebx
082627d0 +0x006:  sub    $0x108c,%esp
082627d6 +0x00c:  mov    0x10(%ebp),%eax
082627d9 +0x00f:  mov    %eax,0x8(%esp)
082627dd +0x013:  mov    0xc(%ebp),%eax
082627e0 +0x016:  mov    %eax,0x4(%esp)
082627e4 +0x01a:  mov    0x8(%ebp),%eax
082627e7 +0x01d:  mov    %eax,(%esp)
082627ea +0x020:  call   0826314c <_ZN30Dispatcher_SecurityCardAuthRpy11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_SecurityCardAuthRpy::check_error(CUser*, MSG_BASE&)
082627ef +0x025:  mov    %eax,-0x2c(%ebp)
082627f2 +0x028:  cmpl   $0x0,-0x2c(%ebp)
082627f6 +0x02c:  jle    08262802 <+0x38>
082627f8 +0x02e:  mov    $0xffffffff,%eax
082627fd +0x033:  jmp    08262f43 <+0x779>
08262802 +0x038:  mov    0x14(%ebp),%eax
08262805 +0x03b:  mov    %eax,-0x28(%ebp)
08262808 +0x03e:  mov    0x10(%ebp),%eax
0826280b +0x041:  mov    %eax,-0x24(%ebp)
0826280e +0x044:  mov    -0x28(%ebp),%eax
08262811 +0x047:  movb   $0x0,0x4(%eax)
08262815 +0x04b:  mov    -0x28(%ebp),%eax
08262818 +0x04e:  movb   $0x0,0x5(%eax)
0826281c +0x052:  lea    -0x1064(%ebp),%ebx
08262822 +0x058:  mov    $0x0,%eax
08262827 +0x05d:  mov    $0x400,%edx
0826282c +0x062:  mov    %ebx,%edi
0826282e +0x064:  mov    %edx,%ecx
08262830 +0x066:  rep stos %eax,%es:(%edi)
08262832 +0x068:  movl   $0x1000,-0x50(%ebp)
08262839 +0x06f:  mov    0xc(%ebp),%eax
0826283c +0x072:  mov    %eax,(%esp)
0826283f +0x075:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08262844 +0x07a:  mov    %eax,(%esp)
08262847 +0x07d:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
0826284c +0x082:  test   %al,%al
0826284e +0x084:  je     08262862 <+0x98>
08262850 +0x086:  mov    -0x24(%ebp),%eax
08262853 +0x089:  movzbl 0xd(%eax),%eax
08262857 +0x08d:  test   %al,%al
08262859 +0x08f:  jne    08262862 <+0x98>
0826285b +0x091:  mov    $0x1,%eax
08262860 +0x096:  jmp    08262867 <+0x9d>
08262862 +0x098:  mov    $0x0,%eax
08262867 +0x09d:  test   %al,%al
08262869 +0x09f:  je     082628db <+0x111>
0826286b +0x0a1:  lea    -0x1064(%ebp),%eax
08262871 +0x0a7:  mov    %eax,-0x1070(%ebp)
08262877 +0x0ad:  mov    -0x24(%ebp),%eax
0826287a +0x0b0:  mov    0x100f(%eax),%edi
08262880 +0x0b6:  mov    -0x24(%ebp),%eax
08262883 +0x0b9:  add    $0xf,%eax
08262886 +0x0bc:  mov    %eax,%esi
08262888 +0x0be:  mov    -0x24(%ebp),%eax
0826288b +0x0c1:  movzbl 0xe(%eax),%eax
0826288f +0x0c5:  movzbl %al,%ebx
08262892 +0x0c8:  mov    0xc(%ebp),%eax
08262895 +0x0cb:  mov    %eax,(%esp)
08262898 +0x0ce:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0826289d +0x0d3:  mov    %eax,(%esp)
082628a0 +0x0d6:  call   0859984c <_ZN8Sanicova4CPad20GetSelectedCipherIdxEv>  ; Sanicova::CPad::GetSelectedCipherIdx()
082628a5 +0x0db:  movzwl %ax,%eax
082628a8 +0x0de:  shl    $0x4,%eax
082628ab +0x0e1:  mov    &_ZN10GlobalData32s_secu_cipher_keystring_manager_E(%eax),%eax
082628b1 +0x0e7:  lea    -0x50(%ebp),%edx
082628b4 +0x0ea:  mov    %edx,0x14(%esp)
082628b8 +0x0ee:  mov    -0x1070(%ebp),%edx
082628be +0x0f4:  mov    %edx,0x10(%esp)
082628c2 +0x0f8:  mov    %edi,0xc(%esp)
082628c6 +0x0fc:  mov    %esi,0x8(%esp)
082628ca +0x100:  mov    %ebx,0x4(%esp)
082628ce +0x104:  mov    %eax,(%esp)
082628d1 +0x107:  call   0809751e <_ZN6Cipher7DecryptEiPKhiPhPi>  ; Cipher::Decrypt(int, unsigned char const*, int, unsigned char*, int*)
082628d6 +0x10c:  jmp    082629f3 <+0x229>
082628db +0x111:  mov    0xc(%ebp),%eax
082628de +0x114:  mov    %eax,(%esp)
082628e1 +0x117:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
082628e6 +0x11c:  mov    %eax,(%esp)
082628e9 +0x11f:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
082628ee +0x124:  test   %al,%al
082628f0 +0x126:  je     08262904 <+0x13a>
082628f2 +0x128:  mov    -0x24(%ebp),%eax
082628f5 +0x12b:  movzbl 0xd(%eax),%eax
082628f9 +0x12f:  cmp    $0x1,%al
082628fb +0x131:  jne    08262904 <+0x13a>
082628fd +0x133:  mov    $0x1,%eax
08262902 +0x138:  jmp    08262909 <+0x13f>
08262904 +0x13a:  mov    $0x0,%eax
08262909 +0x13f:  test   %al,%al
0826290b +0x141:  je     082629ca <+0x200>
08262911 +0x147:  lea    -0x1064(%ebp),%ecx
08262917 +0x14d:  mov    %ecx,-0x106c(%ebp)
0826291d +0x153:  mov    -0x24(%ebp),%eax
08262920 +0x156:  mov    0x100f(%eax),%edi
08262926 +0x15c:  mov    -0x24(%ebp),%eax
08262929 +0x15f:  add    $0xf,%eax
0826292c +0x162:  mov    %eax,%esi
0826292e +0x164:  mov    -0x24(%ebp),%eax
08262931 +0x167:  movzbl 0xe(%eax),%eax
08262935 +0x16b:  movzbl %al,%ebx
08262938 +0x16e:  mov    0xc(%ebp),%eax
0826293b +0x171:  mov    %eax,(%esp)
0826293e +0x174:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08262943 +0x179:  mov    %eax,(%esp)
08262946 +0x17c:  call   0859984c <_ZN8Sanicova4CPad20GetSelectedCipherIdxEv>  ; Sanicova::CPad::GetSelectedCipherIdx()
0826294b +0x181:  movzwl %ax,%eax
0826294e +0x184:  shl    $0x4,%eax
08262951 +0x187:  mov    &_ZN10GlobalData32s_secu_cipher_keystring_manager_E(%eax),%eax
08262957 +0x18d:  lea    -0x50(%ebp),%edx
0826295a +0x190:  mov    %edx,0x14(%esp)
0826295e +0x194:  mov    -0x106c(%ebp),%edx
08262964 +0x19a:  mov    %edx,0x10(%esp)
08262968 +0x19e:  mov    %edi,0xc(%esp)
0826296c +0x1a2:  mov    %esi,0x8(%esp)
08262970 +0x1a6:  mov    %ebx,0x4(%esp)
08262974 +0x1aa:  mov    %eax,(%esp)
08262977 +0x1ad:  call   0809751e <_ZN6Cipher7DecryptEiPKhiPhPi>  ; Cipher::Decrypt(int, unsigned char const*, int, unsigned char*, int*)
0826297c +0x1b2:  xor    $0x1,%eax
0826297f +0x1b5:  test   %al,%al
08262981 +0x1b7:  je     082629f3 <+0x229>
08262983 +0x1b9:  mov    -0x28(%ebp),%eax
08262986 +0x1bc:  movb   $0x1,0x5(%eax)
0826298a +0x1c0:  movl   $0x0,0xc(%esp)
08262992 +0x1c8:  movl   $0x71,0x8(%esp)
0826299a +0x1d0:  movl   $&_ZZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
082629a2 +0x1d8:  lea    -0x4c(%ebp),%eax
082629a5 +0x1db:  mov    %eax,(%esp)
082629a8 +0x1de:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082629ad +0x1e3:  movl   $"ERROR [TRACE AUTH RPY] : ENUM_CMDPACKET_SECURITY_CARD_AUTH_RPY,ENUM_ERROR_ETC",0x4(%esp)
082629b5 +0x1eb:  lea    -0x4c(%ebp),%eax
082629b8 +0x1ee:  mov    %eax,(%esp)
082629bb +0x1f1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082629c0 +0x1f6:  mov    $0x0,%eax
082629c5 +0x1fb:  jmp    08262f43 <+0x779>
082629ca +0x200:  movl   $0x0,0xc(%esp)
082629d2 +0x208:  movl   $0x0,0x8(%esp)
082629da +0x210:  movl   $&_ZZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
082629e2 +0x218:  movl   $0x76,(%esp)
082629e9 +0x21f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082629ee +0x224:  jmp    08262f43 <+0x779>
082629f3 +0x229:  lea    -0x1064(%ebp),%eax
082629f9 +0x22f:  movzbl (%eax),%eax
082629fc +0x232:  mov    %al,-0x1e(%ebp)
082629ff +0x235:  lea    -0x1064(%ebp),%eax
08262a05 +0x23b:  add    $0x1,%eax
08262a08 +0x23e:  movzbl (%eax),%eax
08262a0b +0x241:  mov    %al,-0x1d(%ebp)
08262a0e +0x244:  lea    -0x1064(%ebp),%eax
08262a14 +0x24a:  add    $0x2,%eax
08262a17 +0x24d:  movzbl (%eax),%eax
08262a1a +0x250:  mov    %al,-0x1c(%ebp)
08262a1d +0x253:  lea    -0x1064(%ebp),%eax
08262a23 +0x259:  add    $0x3,%eax
08262a26 +0x25c:  movzbl (%eax),%eax
08262a29 +0x25f:  mov    %al,-0x1b(%ebp)
08262a2c +0x262:  lea    -0x1064(%ebp),%eax
08262a32 +0x268:  add    $0x4,%eax
08262a35 +0x26b:  movzbl (%eax),%eax
08262a38 +0x26e:  mov    %al,-0x1a(%ebp)
08262a3b +0x271:  lea    -0x1064(%ebp),%eax
08262a41 +0x277:  add    $0x5,%eax
08262a44 +0x27a:  movzbl (%eax),%eax
08262a47 +0x27d:  mov    %al,-0x19(%ebp)
08262a4a +0x280:  mov    0xc(%ebp),%eax
08262a4d +0x283:  mov    %eax,(%esp)
08262a50 +0x286:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08262a55 +0x28b:  mov    %eax,(%esp)
08262a58 +0x28e:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
08262a5d +0x293:  test   %al,%al
08262a5f +0x295:  je     08262a73 <+0x2a9>
08262a61 +0x297:  mov    -0x24(%ebp),%eax
08262a64 +0x29a:  movzbl 0xd(%eax),%eax
08262a68 +0x29e:  test   %al,%al
08262a6a +0x2a0:  jne    08262a73 <+0x2a9>
08262a6c +0x2a2:  mov    $0x1,%eax
08262a71 +0x2a7:  jmp    08262a78 <+0x2ae>
08262a73 +0x2a9:  mov    $0x0,%eax
08262a78 +0x2ae:  test   %al,%al
08262a7a +0x2b0:  je     08262dce <+0x604>
08262a80 +0x2b6:  mov    0xc(%ebp),%eax
08262a83 +0x2b9:  mov    %eax,(%esp)
08262a86 +0x2bc:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08262a8b +0x2c1:  movl   $0x0,0x4(%esp)
08262a93 +0x2c9:  mov    %eax,(%esp)
08262a96 +0x2cc:  call   0822ef64 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x460e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x460e
08262a9b +0x2d1:  mov    0xc(%ebp),%eax
08262a9e +0x2d4:  mov    %eax,(%esp)
08262aa1 +0x2d7:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08262aa6 +0x2dc:  mov    %eax,(%esp)
08262aa9 +0x2df:  call   0822ef26 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45d0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45d0
08262aae +0x2e4:  cmp    $0x2,%eax
08262ab1 +0x2e7:  seta   %al
08262ab4 +0x2ea:  test   %al,%al
08262ab6 +0x2ec:  je     08262ac9 <+0x2ff>
08262ab8 +0x2ee:  mov    -0x28(%ebp),%eax
08262abb +0x2f1:  movb   $0x7a,0x5(%eax)
08262abf +0x2f5:  mov    $0x0,%eax
08262ac4 +0x2fa:  jmp    08262f43 <+0x779>
08262ac9 +0x2ff:  movzbl -0x1d(%ebp),%esi
08262acd +0x303:  movzbl -0x1e(%ebp),%ebx
08262ad1 +0x307:  mov    0xc(%ebp),%eax
08262ad4 +0x30a:  mov    %eax,(%esp)
08262ad7 +0x30d:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08262adc +0x312:  mov    %esi,0x8(%esp)
08262ae0 +0x316:  mov    %ebx,0x4(%esp)
08262ae4 +0x31a:  mov    %eax,(%esp)
08262ae7 +0x31d:  call   085fdf6a <_ZNK8WongWork13CSecurityCard11checkAnswerEhh>  ; WongWork::CSecurityCard::checkAnswer(unsigned char, unsigned char) const
08262aec +0x322:  xor    $0x1,%eax
08262aef +0x325:  test   %al,%al
08262af1 +0x327:  je     08262c3c <+0x472>
08262af7 +0x32d:  mov    0xc(%ebp),%eax
08262afa +0x330:  add    $0x79700,%eax
08262aff +0x335:  movl   $0x0,0x8(%esp)
08262b07 +0x33d:  movl   $0x1,0x4(%esp)
08262b0f +0x345:  mov    %eax,(%esp)
08262b12 +0x348:  call   0868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>  ; cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION)
08262b17 +0x34d:  mov    0xc(%ebp),%eax
08262b1a +0x350:  mov    %eax,(%esp)
08262b1d +0x353:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08262b22 +0x358:  mov    %eax,(%esp)
08262b25 +0x35b:  call   082652ae <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x86>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0x86
08262b2a +0x360:  cmp    $0x2,%eax
08262b2d +0x363:  seta   %al
08262b30 +0x366:  test   %al,%al
08262b32 +0x368:  je     08262b9a <+0x3d0>
08262b34 +0x36a:  mov    -0x28(%ebp),%eax
08262b37 +0x36d:  movb   $0x7a,0x5(%eax)
08262b3b +0x371:  mov    0xc(%ebp),%eax
08262b3e +0x374:  mov    %eax,(%esp)
08262b41 +0x377:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08262b46 +0x37c:  movl   $0x17,0x8(%esp)
08262b4e +0x384:  movl   $0x1,0x4(%esp)
08262b56 +0x38c:  mov    %eax,(%esp)
08262b59 +0x38f:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
08262b5e +0x394:  mov    0xc(%ebp),%eax
08262b61 +0x397:  mov    %eax,(%esp)
08262b64 +0x39a:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08262b69 +0x39f:  movl   $0x0,0x14(%esp)
08262b71 +0x3a7:  movl   $0x0,0x10(%esp)
08262b79 +0x3af:  movl   $0x1,0xc(%esp)
08262b81 +0x3b7:  movl   $0x343,0x8(%esp)
08262b89 +0x3bf:  mov    0xc(%ebp),%edx
08262b8c +0x3c2:  mov    %edx,0x4(%esp)
08262b90 +0x3c6:  mov    %eax,(%esp)
08262b93 +0x3c9:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08262b98 +0x3ce:  jmp    08262c06 <+0x43c>
08262b9a +0x3d0:  mov    -0x28(%ebp),%eax
08262b9d +0x3d3:  movb   $0x79,0x5(%eax)
08262ba1 +0x3d7:  mov    0xc(%ebp),%eax
08262ba4 +0x3da:  mov    %eax,(%esp)
08262ba7 +0x3dd:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08262bac +0x3e2:  mov    %eax,(%esp)
08262baf +0x3e5:  call   0822ef26 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45d0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45d0
08262bb4 +0x3ea:  cmp    $0x1,%eax
08262bb7 +0x3ed:  sete   %al
08262bba +0x3f0:  test   %al,%al
08262bbc +0x3f2:  je     08262be3 <+0x419>
08262bbe +0x3f4:  mov    0xc(%ebp),%eax
08262bc1 +0x3f7:  mov    %eax,(%esp)
08262bc4 +0x3fa:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08262bc9 +0x3ff:  movl   $0x15,0x8(%esp)
08262bd1 +0x407:  movl   $0x1,0x4(%esp)
08262bd9 +0x40f:  mov    %eax,(%esp)
08262bdc +0x412:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
08262be1 +0x417:  jmp    08262c06 <+0x43c>
08262be3 +0x419:  mov    0xc(%ebp),%eax
08262be6 +0x41c:  mov    %eax,(%esp)
08262be9 +0x41f:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08262bee +0x424:  movl   $0x16,0x8(%esp)
08262bf6 +0x42c:  movl   $0x1,0x4(%esp)
08262bfe +0x434:  mov    %eax,(%esp)
08262c01 +0x437:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
08262c06 +0x43c:  mov    0xc(%ebp),%eax
08262c09 +0x43f:  mov    %eax,(%esp)
08262c0c +0x442:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08262c11 +0x447:  mov    %eax,(%esp)
08262c14 +0x44a:  call   0822ef26 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45d0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45d0
08262c19 +0x44f:  mov    %eax,%ebx
08262c1b +0x451:  mov    0xc(%ebp),%eax
08262c1e +0x454:  mov    %eax,(%esp)
08262c21 +0x457:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08262c26 +0x45c:  mov    %ebx,0x4(%esp)
08262c2a +0x460:  mov    %eax,(%esp)
08262c2d +0x463:  call   0842bfaa <_ZN28DB_SecurityCardUpdateFailCnt11makeRequestEjj>  ; DB_SecurityCardUpdateFailCnt::makeRequest(unsigned int, unsigned int)
08262c32 +0x468:  mov    $0x0,%eax
08262c37 +0x46d:  jmp    08262f43 <+0x779>
08262c3c +0x472:  mov    0xc(%ebp),%eax
08262c3f +0x475:  add    $0x79700,%eax
08262c44 +0x47a:  movl   $0x1,0x8(%esp)
08262c4c +0x482:  movl   $0x1,0x4(%esp)
08262c54 +0x48a:  mov    %eax,(%esp)
08262c57 +0x48d:  call   0868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>  ; cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION)
08262c5c +0x492:  mov    0xc(%ebp),%eax
08262c5f +0x495:  mov    %eax,(%esp)
08262c62 +0x498:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08262c67 +0x49d:  movl   $0x19,0x8(%esp)
08262c6f +0x4a5:  movl   $0x1,0x4(%esp)
08262c77 +0x4ad:  mov    %eax,(%esp)
08262c7a +0x4b0:  call   084b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>  ; XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
08262c7f +0x4b5:  lea    -0x5c(%ebp),%eax
08262c82 +0x4b8:  mov    %eax,(%esp)
08262c85 +0x4bb:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08262c8a +0x4c0:  movl   $0xa7,0x8(%esp)
08262c92 +0x4c8:  movl   $0x1,0x4(%esp)
08262c9a +0x4d0:  lea    -0x5c(%ebp),%eax
08262c9d +0x4d3:  mov    %eax,(%esp)
08262ca0 +0x4d6:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08262ca5 +0x4db:  movl   $0x1,0x4(%esp)
08262cad +0x4e3:  lea    -0x5c(%ebp),%eax
08262cb0 +0x4e6:  mov    %eax,(%esp)
08262cb3 +0x4e9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08262cb8 +0x4ee:  mov    0xc(%ebp),%eax
08262cbb +0x4f1:  mov    %eax,(%esp)
08262cbe +0x4f4:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08262cc3 +0x4f9:  mov    %eax,(%esp)
08262cc6 +0x4fc:  call   0826528a <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x62>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0x62
08262ccb +0x501:  cmp    $0x3b,%eax
08262cce +0x504:  jle    08262cd7 <+0x50d>
08262cd0 +0x506:  mov    $0x1,%eax
08262cd5 +0x50b:  jmp    08262cdc <+0x512>
08262cd7 +0x50d:  mov    $0x0,%eax
08262cdc +0x512:  mov    %eax,0x4(%esp)
08262ce0 +0x516:  lea    -0x5c(%ebp),%eax
08262ce3 +0x519:  mov    %eax,(%esp)
08262ce6 +0x51c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08262ceb +0x521:  movl   $0x1,0x4(%esp)
08262cf3 +0x529:  lea    -0x5c(%ebp),%eax
08262cf6 +0x52c:  mov    %eax,(%esp)
08262cf9 +0x52f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08262cfe +0x534:  lea    -0x5c(%ebp),%eax
08262d01 +0x537:  mov    %eax,0x4(%esp)
08262d05 +0x53b:  mov    0xc(%ebp),%eax
08262d08 +0x53e:  mov    %eax,(%esp)
08262d0b +0x541:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08262d10 +0x546:  mov    0xc(%ebp),%eax
08262d13 +0x549:  mov    %eax,(%esp)
08262d16 +0x54c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08262d1b +0x551:  movl   $0x0,0x4(%esp)
08262d23 +0x559:  mov    %eax,(%esp)
08262d26 +0x55c:  call   0842bfaa <_ZN28DB_SecurityCardUpdateFailCnt11makeRequestEjj>  ; DB_SecurityCardUpdateFailCnt::makeRequest(unsigned int, unsigned int)
08262d2b +0x561:  mov    0xc(%ebp),%eax
08262d2e +0x564:  mov    %eax,(%esp)
08262d31 +0x567:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08262d36 +0x56c:  mov    %eax,(%esp)
08262d39 +0x56f:  call   0822ef4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45f6
08262d3e +0x574:  test   %eax,%eax
08262d40 +0x576:  setne  %al
08262d43 +0x579:  test   %al,%al
08262d45 +0x57b:  je     08262d62 <+0x598>
08262d47 +0x57d:  mov    0xc(%ebp),%eax
08262d4a +0x580:  mov    %eax,(%esp)
08262d4d +0x583:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08262d52 +0x588:  movl   $0x0,0x4(%esp)
08262d5a +0x590:  mov    %eax,(%esp)
08262d5d +0x593:  call   0842c112 <_ZN30DB_SecurityCardUpdateCancelCnt11makeRequestEjj>  ; DB_SecurityCardUpdateCancelCnt::makeRequest(unsigned int, unsigned int)
08262d62 +0x598:  mov    0xc(%ebp),%eax
08262d65 +0x59b:  mov    %eax,(%esp)
08262d68 +0x59e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08262d6d +0x5a3:  mov    %eax,(%esp)
08262d70 +0x5a6:  call   08436388 <_ZN25DB_SecurityCardAddCertCnt11makeRequestEj>  ; DB_SecurityCardAddCertCnt::makeRequest(unsigned int)
08262d75 +0x5ab:  mov    0xc(%ebp),%eax
08262d78 +0x5ae:  mov    %eax,(%esp)
08262d7b +0x5b1:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08262d80 +0x5b6:  movl   $0x1,0x4(%esp)
08262d88 +0x5be:  mov    %eax,(%esp)
08262d8b +0x5c1:  call   08265296 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x6e>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0x6e
08262d90 +0x5c6:  mov    0xc(%ebp),%eax
08262d93 +0x5c9:  mov    %eax,(%esp)
08262d96 +0x5cc:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08262d9b +0x5d1:  mov    %eax,(%esp)
08262d9e +0x5d4:  call   082652c8 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xa0>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xa0
08262da3 +0x5d9:  lea    -0x5c(%ebp),%eax
08262da6 +0x5dc:  mov    %eax,(%esp)
08262da9 +0x5df:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08262dae +0x5e4:  jmp    08262f37 <+0x76d>
08262db3 +0x5e9:  mov    %edx,%ebx
08262db5 +0x5eb:  mov    %eax,%esi
08262db7 +0x5ed:  lea    -0x5c(%ebp),%eax
08262dba +0x5f0:  mov    %eax,(%esp)
08262dbd +0x5f3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08262dc2 +0x5f8:  mov    %esi,%eax
08262dc4 +0x5fa:  mov    %ebx,%edx
08262dc6 +0x5fc:  mov    %eax,(%esp)
08262dc9 +0x5ff:  call   08ae3750 <_Unwind_Resume>
08262dce +0x604:  mov    0xc(%ebp),%eax
08262dd1 +0x607:  mov    %eax,(%esp)
08262dd4 +0x60a:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08262dd9 +0x60f:  mov    %eax,(%esp)
08262ddc +0x612:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
08262de1 +0x617:  test   %al,%al
08262de3 +0x619:  je     08262df7 <+0x62d>
08262de5 +0x61b:  mov    -0x24(%ebp),%eax
08262de8 +0x61e:  movzbl 0xd(%eax),%eax
08262dec +0x622:  cmp    $0x1,%al
08262dee +0x624:  jne    08262df7 <+0x62d>
08262df0 +0x626:  mov    $0x1,%eax
08262df5 +0x62b:  jmp    08262dfc <+0x632>
08262df7 +0x62d:  mov    $0x0,%eax
08262dfc +0x632:  test   %al,%al
08262dfe +0x634:  je     08262edb <+0x711>
08262e04 +0x63a:  mov    0xc(%ebp),%eax
08262e07 +0x63d:  mov    %eax,(%esp)
08262e0a +0x640:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08262e0f +0x645:  movl   $0x0,0x4(%esp)
08262e17 +0x64d:  mov    %eax,(%esp)
08262e1a +0x650:  call   0822efcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4676>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4676
08262e1f +0x655:  mov    0xc(%ebp),%eax
08262e22 +0x658:  mov    %eax,(%esp)
08262e25 +0x65b:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08262e2a +0x660:  mov    %eax,(%esp)
08262e2d +0x663:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
08262e32 +0x668:  cmp    $0x2,%eax
08262e35 +0x66b:  setg   %al
08262e38 +0x66e:  test   %al,%al
08262e3a +0x670:  je     08262e4d <+0x683>
08262e3c +0x672:  mov    -0x28(%ebp),%eax
08262e3f +0x675:  movb   $0x88,0x5(%eax)
08262e43 +0x679:  mov    $0x0,%eax
08262e48 +0x67e:  jmp    08262f43 <+0x779>
08262e4d +0x683:  movl   $0x0,-0x64(%ebp)
08262e54 +0x68a:  movl   $0x0,-0x60(%ebp)
08262e5b +0x691:  movzbl -0x1e(%ebp),%eax
08262e5f +0x695:  mov    %al,-0x64(%ebp)
08262e62 +0x698:  movzbl -0x1d(%ebp),%eax
08262e66 +0x69c:  mov    %al,-0x63(%ebp)
08262e69 +0x69f:  movzbl -0x1c(%ebp),%eax
08262e6d +0x6a3:  mov    %al,-0x62(%ebp)
08262e70 +0x6a6:  movzbl -0x1b(%ebp),%eax
08262e74 +0x6aa:  mov    %al,-0x61(%ebp)
08262e77 +0x6ad:  movzbl -0x1a(%ebp),%eax
08262e7b +0x6b1:  mov    %al,-0x60(%ebp)
08262e7e +0x6b4:  movzbl -0x19(%ebp),%eax
08262e82 +0x6b8:  mov    %al,-0x5f(%ebp)
08262e85 +0x6bb:  movb   $0x0,-0x5e(%ebp)
08262e89 +0x6bf:  mov    -0x28(%ebp),%eax
08262e8c +0x6c2:  lea    0x5(%eax),%ecx
08262e8f +0x6c5:  mov    -0x28(%ebp),%eax
08262e92 +0x6c8:  lea    0x4(%eax),%edx
08262e95 +0x6cb:  mov    -0x24(%ebp),%eax
08262e98 +0x6ce:  movzbl 0x1013(%eax),%eax
08262e9f +0x6d5:  movsbl %al,%eax
08262ea2 +0x6d8:  mov    %ecx,0x10(%esp)
08262ea6 +0x6dc:  mov    %edx,0xc(%esp)
08262eaa +0x6e0:  mov    %eax,0x8(%esp)
08262eae +0x6e4:  lea    -0x64(%ebp),%eax
08262eb1 +0x6e7:  mov    %eax,0x4(%esp)
08262eb5 +0x6eb:  mov    0xc(%ebp),%eax
08262eb8 +0x6ee:  mov    %eax,(%esp)
08262ebb +0x6f1:  call   082633c6 <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh>  ; Dispatcher_MouseRegister::doPassPadReplay(CUser*, char*, char, bool&, unsigned char&)
08262ec0 +0x6f6:  mov    -0x28(%ebp),%eax
08262ec3 +0x6f9:  movzbl 0x4(%eax),%eax
08262ec7 +0x6fd:  test   %al,%al
08262ec9 +0x6ff:  je     08262ed4 <+0x70a>
08262ecb +0x701:  mov    -0x28(%ebp),%eax
08262ece +0x704:  movb   $0x1,0x5(%eax)
08262ed2 +0x708:  jmp    08262f37 <+0x76d>
08262ed4 +0x70a:  mov    $0x0,%eax
08262ed9 +0x70f:  jmp    08262f43 <+0x779>
08262edb +0x711:  movl   $0x0,0xc(%esp)
08262ee3 +0x719:  movl   $0x10b,0x8(%esp)
08262eeb +0x721:  movl   $&_ZZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
08262ef3 +0x729:  lea    -0x3c(%ebp),%eax
08262ef6 +0x72c:  mov    %eax,(%esp)
08262ef9 +0x72f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08262efe +0x734:  movl   $"ERROR [TRACE AUTH RPY] : None Secu Service",0x4(%esp)
08262f06 +0x73c:  lea    -0x3c(%ebp),%eax
08262f09 +0x73f:  mov    %eax,(%esp)
08262f0c +0x742:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08262f11 +0x747:  movl   $0x0,0xc(%esp)
08262f19 +0x74f:  movl   $0x0,0x8(%esp)
08262f21 +0x757:  movl   $&_ZZN30Dispatcher_SecurityCardAuthRpy7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
08262f29 +0x75f:  movl   $0x10c,(%esp)
08262f30 +0x766:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08262f35 +0x76b:  jmp    08262f43 <+0x779>
08262f37 +0x76d:  mov    -0x28(%ebp),%eax
08262f3a +0x770:  movb   $0x1,0x4(%eax)
08262f3e +0x774:  mov    $0x0,%eax
08262f43 +0x779:  add    $0x108c,%esp
08262f49 +0x77f:  pop    %ebx
08262f4a +0x780:  pop    %esi
08262f4b +0x781:  pop    %edi
08262f4c +0x782:  pop    %ebp
08262f4d +0x783:  ret
```

## 反编译 C

```c
// Dispatcher_SecurityCardAuthRpy::process @ 0x82627ca

/* Dispatcher_SecurityCardAuthRpy::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SecurityCardAuthRpy::process
          (Dispatcher_SecurityCardAuthRpy *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  bool bVar2;
  uchar uVar3;
  uchar uVar4;
  char cVar5;
  CSecurityCard *pCVar6;
  MSG_BASE *pMVar7;
  CPad *pCVar8;
  uint uVar9;
  undefined4 uVar10;
  CHackAnalyzer *pCVar11;
  uint uVar12;
  int iVar13;
  uchar *puVar14;
  byte bVar15;
  uchar local_1068;
  uchar local_1067;
  undefined1 local_1066;
  undefined1 local_1065;
  undefined1 local_1064;
  undefined1 local_1063;
  uchar local_68;
  uchar uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined4 local_64;
  PacketGuard local_60 [12];
  int local_54;
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  int local_30;
  ParamBase *local_2c;
  MSG_BASE *local_28;
  uchar local_22;
  uchar local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  
  bVar15 = 0;
  local_30 = check_error(this,param_1,param_2);
  if (0 < local_30) {
    return 0xffffffff;
  }
  local_2c = param_3;
  local_28 = param_2;
  param_3[4] = (ParamBase)0x0;
  param_3[5] = (ParamBase)0x0;
  puVar14 = &local_1068;
  for (iVar13 = 0x400; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar14[0] = '\0';
    puVar14[1] = '\0';
    puVar14[2] = '\0';
    puVar14[3] = '\0';
    puVar14 = puVar14 + ((uint)bVar15 * -2 + 1) * 4;
  }
  local_54 = 0x1000;
  pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
  cVar5 = WongWork::CSecurityCard::isActivate(pCVar6);
  if ((cVar5 == '\0') || (local_28[0xd] != (MSG_BASE)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar13 = *(int *)(local_28 + 0x100f);
    pMVar7 = local_28 + 0xf;
    MVar1 = local_28[0xe];
    pCVar8 = (CPad *)CUser::getPad(param_1);
    uVar9 = Sanicova::CPad::GetSelectedCipherIdx(pCVar8);
    Cipher::Decrypt((Cipher *)(&GlobalData::s_secu_cipher_keystring_manager_)[(uVar9 & 0xffff) * 4],
                    (uint)(byte)MVar1,(uchar *)pMVar7,iVar13,&local_1068,&local_54);
  }
  else {
    pCVar8 = (CPad *)CUser::getPad(param_1);
    cVar5 = Sanicova::CPad::isActivate(pCVar8);
    if ((cVar5 == '\0') || (local_28[0xd] != (MSG_BASE)0x1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      uVar10 = LineFunc(0x76,
                        "virtual int Dispatcher_SecurityCardAuthRpy::process(CUser*, MSG_BASE&, ParamBase&)"
                        ,0,0);
      return uVar10;
    }
    iVar13 = *(int *)(local_28 + 0x100f);
    pMVar7 = local_28 + 0xf;
    MVar1 = local_28[0xe];
    pCVar8 = (CPad *)CUser::getPad(param_1);
    uVar9 = Sanicova::CPad::GetSelectedCipherIdx(pCVar8);
    cVar5 = Cipher::Decrypt((Cipher *)
                            (&GlobalData::s_secu_cipher_keystring_manager_)[(uVar9 & 0xffff) * 4],
                            (uint)(byte)MVar1,(uchar *)pMVar7,iVar13,&local_1068,&local_54);
    if (cVar5 != '\x01') {
      local_2c[5] = (ParamBase)0x1;
      cMyTrace::cMyTrace(local_50,
                         "virtual int Dispatcher_SecurityCardAuthRpy::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0x71,0);
      cMyTrace::operator()
                (local_50,
                 "ERROR [TRACE AUTH RPY] : ENUM_CMDPACKET_SECURITY_CARD_AUTH_RPY,ENUM_ERROR_ETC");
      return 0;
    }
  }
  local_22 = local_1068;
  local_21 = local_1067;
  local_20 = local_1066;
  local_1f = local_1065;
  local_1e = local_1064;
  local_1d = local_1063;
  pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
  cVar5 = WongWork::CSecurityCard::isActivate(pCVar6);
  if ((cVar5 == '\0') || (local_28[0xd] != (MSG_BASE)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    WongWork::CSecurityCard::setRequestState(pCVar6,0);
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    uVar9 = WongWork::CSecurityCard::getFailCnt(pCVar6);
    uVar4 = local_21;
    uVar3 = local_22;
    if (2 < uVar9) {
      local_2c[5] = (ParamBase)0x7a;
      return 0;
    }
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    cVar5 = WongWork::CSecurityCard::checkAnswer(pCVar6,uVar3,uVar4);
    if (cVar5 != '\x01') {
      cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),1,0);
      pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
      uVar9 = WongWork::CSecurityCard::incFailCnt(pCVar6);
      if (uVar9 < 3) {
        local_2c[5] = (ParamBase)0x79;
        pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
        iVar13 = WongWork::CSecurityCard::getFailCnt(pCVar6);
        if (iVar13 == 1) {
          uVar10 = CUser::getHades(param_1);
          XNuclear::CHades::ChangeSecurity(uVar10,1,0x15);
        }
        else {
          uVar10 = CUser::getHades(param_1);
          XNuclear::CHades::ChangeSecurity(uVar10,1,0x16);
        }
      }
      else {
        local_2c[5] = (ParamBase)0x7a;
        uVar10 = CUser::getHades(param_1);
        XNuclear::CHades::ChangeSecurity(uVar10,1,0x17);
        pCVar11 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar11,param_1,0x343,1,0,0);
      }
      pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
      uVar9 = WongWork::CSecurityCard::getFailCnt(pCVar6);
      uVar12 = CUser::get_acc_id(param_1);
      DB_SecurityCardUpdateFailCnt::makeRequest(uVar12,uVar9);
      return 0;
    }
    cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),1,1);
    uVar10 = CUser::getHades(param_1);
    XNuclear::CHades::ChangeSecurity(uVar10,1,0x19);
    PacketGuard::PacketGuard(local_60);
                    /* try { // try from 08262ca0 to 08262d74 has its CatchHandler @ 08262db3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,0xa7);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,1);
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    iVar13 = WongWork::CSecurityCard::getCertCnt(pCVar6);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(uint)(0x3b < iVar13));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
    CUser::Send(param_1,local_60);
    uVar9 = CUser::get_acc_id(param_1);
    DB_SecurityCardUpdateFailCnt::makeRequest(uVar9,0);
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    iVar13 = WongWork::CSecurityCard::getCancelCnt(pCVar6);
    if (iVar13 != 0) {
      uVar9 = CUser::get_acc_id(param_1);
      DB_SecurityCardUpdateCancelCnt::makeRequest(uVar9,0);
    }
    uVar9 = CUser::get_acc_id(param_1);
    DB_SecurityCardAddCertCnt::makeRequest(uVar9);
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    WongWork::CSecurityCard::setCertified(pCVar6,true);
    pCVar6 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    WongWork::CSecurityCard::resetFailCnt(pCVar6);
    PacketGuard::~PacketGuard(local_60);
  }
  else {
    pCVar8 = (CPad *)CUser::getPad(param_1);
    cVar5 = Sanicova::CPad::isActivate(pCVar8);
    if ((cVar5 == '\0') || (local_28[0xd] != (MSG_BASE)0x1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      cMyTrace::cMyTrace(local_40,
                         "virtual int Dispatcher_SecurityCardAuthRpy::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0x10b,0);
      cMyTrace::operator()(local_40,"ERROR [TRACE AUTH RPY] : None Secu Service");
      uVar10 = LineFunc(0x10c,
                        "virtual int Dispatcher_SecurityCardAuthRpy::process(CUser*, MSG_BASE&, ParamBase&)"
                        ,0,0);
      return uVar10;
    }
    pCVar8 = (CPad *)CUser::getPad(param_1);
    Sanicova::CPad::setRequestState(pCVar8,0);
    pCVar8 = (CPad *)CUser::getPad(param_1);
    iVar13 = Sanicova::CPad::getFailCnt(pCVar8);
    if (2 < iVar13) {
      local_2c[5] = (ParamBase)0x88;
      return 0;
    }
    _local_68 = CONCAT13(local_1f,CONCAT12(local_20,CONCAT11(local_21,local_22)));
    local_64 = (uint)CONCAT11(local_1d,local_1e);
    Dispatcher_MouseRegister::doPassPadReplay
              (param_1,(char *)&local_68,(char)local_28[0x1013],(bool *)(local_2c + 4),
               (uchar *)(local_2c + 5));
    if (local_2c[4] == (ParamBase)0x0) {
      return 0;
    }
    local_2c[5] = (ParamBase)0x1;
  }
  local_2c[4] = (ParamBase)0x1;
  return 0;
}
```
