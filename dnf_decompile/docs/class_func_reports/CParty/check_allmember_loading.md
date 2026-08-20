# check_allmember_loading

`_ZN6CParty23check_allmember_loadingEb`

`CParty::check_allmember_loading(bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b17a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b17a4  _ZN6CParty23check_allmember_loadingEb
#           CParty::check_allmember_loading(bool)
# range [0x085b17a4, 0x085b1e65]
085b17a4 +0x000:  push   %ebp
085b17a5 +0x001:  mov    %esp,%ebp
085b17a7 +0x003:  push   %edi
085b17a8 +0x004:  push   %esi
085b17a9 +0x005:  push   %ebx
085b17aa +0x006:  sub    $0x9c,%esp
085b17b0 +0x00c:  mov    0xc(%ebp),%eax
085b17b3 +0x00f:  mov    %al,-0x6c(%ebp)
085b17b6 +0x012:  mov    0x8(%ebp),%eax
085b17b9 +0x015:  mov    %eax,(%esp)
085b17bc +0x018:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b17c1 +0x01d:  mov    %eax,-0x30(%ebp)
085b17c4 +0x020:  cmpl   $0x0,-0x30(%ebp)
085b17c8 +0x024:  jne    085b185f <+0xbb>
085b17ce +0x02a:  mov    0x8(%ebp),%eax
085b17d1 +0x02d:  mov    %eax,(%esp)
085b17d4 +0x030:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085b17d9 +0x035:  mov    %eax,%ebx
085b17db +0x037:  movl   $0x0,0xc(%esp)
085b17e3 +0x03f:  movl   $0x30e0,0x8(%esp)
085b17eb +0x047:  movl   $&_ZZN6CParty23check_allmember_loadingEbE19__PRETTY_FUNCTION__,0x4(%esp)
085b17f3 +0x04f:  lea    -0x50(%ebp),%eax
085b17f6 +0x052:  mov    %eax,(%esp)
085b17f9 +0x055:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085b17fe +0x05a:  mov    %ebx,0x8(%esp)
085b1802 +0x05e:  movl   $"<IN_DUNGEON_NULL_PARTY> not_member PartyIndex(%d)",0x4(%esp)
085b180a +0x066:  lea    -0x50(%ebp),%eax
085b180d +0x069:  mov    %eax,(%esp)
085b1810 +0x06c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085b1815 +0x071:  mov    0x8(%ebp),%eax
085b1818 +0x074:  mov    %eax,(%esp)
085b181b +0x077:  call   0859ad4c <_ZN6CParty7destroyEv>  ; CParty::destroy()
085b1820 +0x07c:  mov    0x8(%ebp),%eax
085b1823 +0x07f:  movzbl 0x68(%eax),%eax
085b1827 +0x083:  movzbl %al,%eax
085b182a +0x086:  mov    %eax,0x14(%esp)
085b182e +0x08a:  movl   $"CParty::check_allmember_loading : 1 Using: %d, Member = 0\n",0x10(%esp)
085b1836 +0x092:  movl   $0x30e3,0xc(%esp)
085b183e +0x09a:  movl   $&_ZZN6CParty23check_allmember_loadingEbE19__PRETTY_FUNCTION__,0x8(%esp)
085b1846 +0x0a2:  movl   $"party.cpp",0x4(%esp)
085b184e +0x0aa:  movl   $0x1,(%esp)
085b1855 +0x0b1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085b185a +0x0b6:  jmp    085b1e5a <+0x6b6>
085b185f +0x0bb:  movl   $0x0,-0x2c(%ebp)
085b1866 +0x0c2:  movl   $0x0,-0x28(%ebp)
085b186d +0x0c9:  jmp    085b18a5 <+0x101>
085b186f +0x0cb:  mov    -0x28(%ebp),%eax
085b1872 +0x0ce:  mov    %eax,0x4(%esp)
085b1876 +0x0d2:  mov    0x8(%ebp),%eax
085b1879 +0x0d5:  mov    %eax,(%esp)
085b187c +0x0d8:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b1881 +0x0dd:  xor    $0x1,%eax
085b1884 +0x0e0:  test   %al,%al
085b1886 +0x0e2:  jne    085b18a0 <+0xfc>
085b1888 +0x0e4:  mov    -0x28(%ebp),%eax
085b188b +0x0e7:  mov    0x8(%ebp),%edx
085b188e +0x0ea:  movzbl 0x37c(%edx,%eax,1),%eax
085b1896 +0x0f2:  test   %al,%al
085b1898 +0x0f4:  je     085b18a1 <+0xfd>
085b189a +0x0f6:  addl   $0x1,-0x2c(%ebp)
085b189e +0x0fa:  jmp    085b18a1 <+0xfd>
085b18a0 +0x0fc:  nop
085b18a1 +0x0fd:  addl   $0x1,-0x28(%ebp)
085b18a5 +0x101:  cmpl   $0x3,-0x28(%ebp)
085b18a9 +0x105:  setle  %al
085b18ac +0x108:  test   %al,%al
085b18ae +0x10a:  jne    085b186f <+0xcb>
085b18b0 +0x10c:  mov    -0x2c(%ebp),%eax
085b18b3 +0x10f:  cmp    -0x30(%ebp),%eax
085b18b6 +0x112:  je     085b18cc <+0x128>
085b18b8 +0x114:  cmpb   $0x0,-0x6c(%ebp)
085b18bc +0x118:  je     085b1e5a <+0x6b6>
085b18c2 +0x11e:  cmpl   $0x0,-0x2c(%ebp)
085b18c6 +0x122:  jle    085b1e5a <+0x6b6>
085b18cc +0x128:  mov    0x8(%ebp),%eax
085b18cf +0x12b:  add    $0xb24,%eax
085b18d4 +0x130:  mov    %eax,(%esp)
085b18d7 +0x133:  call   08307662 <_ZN13CBattle_Field22ResetFirstEnterDungeonEv>  ; CBattle_Field::ResetFirstEnterDungeon()
085b18dc +0x138:  lea    -0x5c(%ebp),%eax
085b18df +0x13b:  mov    %eax,(%esp)
085b18e2 +0x13e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b18e7 +0x143:  movl   $0x1e,0x8(%esp)
085b18ef +0x14b:  movl   $0x0,0x4(%esp)
085b18f7 +0x153:  lea    -0x5c(%ebp),%eax
085b18fa +0x156:  mov    %eax,(%esp)
085b18fd +0x159:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b1902 +0x15e:  mov    0x8(%ebp),%eax
085b1905 +0x161:  mov    0xc58(%eax),%eax
085b190b +0x167:  mov    %eax,0x4(%esp)
085b190f +0x16b:  lea    -0x5c(%ebp),%eax
085b1912 +0x16e:  mov    %eax,(%esp)
085b1915 +0x171:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b191a +0x176:  movl   $0x1,0x4(%esp)
085b1922 +0x17e:  lea    -0x5c(%ebp),%eax
085b1925 +0x181:  mov    %eax,(%esp)
085b1928 +0x184:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b192d +0x189:  lea    -0x5c(%ebp),%eax
085b1930 +0x18c:  mov    %eax,0x4(%esp)
085b1934 +0x190:  mov    0x8(%ebp),%eax
085b1937 +0x193:  mov    %eax,(%esp)
085b193a +0x196:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b193f +0x19b:  mov    0x8(%ebp),%eax
085b1942 +0x19e:  mov    0x358(%eax),%ebx
085b1948 +0x1a4:  mov    0x35c(%eax),%esi
085b194e +0x1aa:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085b1955 +0x1b1:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
085b195a +0x1b6:  mov    %eax,-0x80(%ebp)
085b195d +0x1b9:  movl   $0x0,-0x7c(%ebp)
085b1964 +0x1c0:  mov    0x8(%ebp),%ecx
085b1967 +0x1c3:  mov    0x360(%ecx),%eax
085b196d +0x1c9:  mov    0x364(%ecx),%edx
085b1973 +0x1cf:  mov    %eax,-0x78(%ebp)
085b1976 +0x1d2:  mov    %edx,-0x74(%ebp)
085b1979 +0x1d5:  mov    -0x80(%ebp),%eax
085b197c +0x1d8:  mov    -0x7c(%ebp),%edx
085b197f +0x1db:  sub    -0x78(%ebp),%eax
085b1982 +0x1de:  sbb    -0x74(%ebp),%edx
085b1985 +0x1e1:  add    %ebx,%eax
085b1987 +0x1e3:  adc    %esi,%edx
085b1989 +0x1e5:  mov    0x8(%ebp),%ecx
085b198c +0x1e8:  mov    %eax,0x358(%ecx)
085b1992 +0x1ee:  mov    %edx,0x35c(%ecx)
085b1998 +0x1f4:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085b199f +0x1fb:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
085b19a4 +0x200:  mov    $0x0,%edx
085b19a9 +0x205:  mov    0x8(%ebp),%ecx
085b19ac +0x208:  mov    0x348(%ecx),%ebx
085b19b2 +0x20e:  mov    0x344(%ecx),%ecx
085b19b8 +0x214:  sub    %ecx,%eax
085b19ba +0x216:  sbb    %ebx,%edx
085b19bc +0x218:  mov    0x8(%ebp),%ecx
085b19bf +0x21b:  mov    %eax,0x33c(%ecx)
085b19c5 +0x221:  mov    %edx,0x340(%ecx)
085b19cb +0x227:  mov    0x8(%ebp),%eax
085b19ce +0x22a:  mov    %eax,(%esp)
085b19d1 +0x22d:  call   0822d88c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f36>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f36
085b19d6 +0x232:  xor    $0x1,%eax
085b19d9 +0x235:  test   %al,%al
085b19db +0x237:  je     085b19f4 <+0x250>
085b19dd +0x239:  mov    0x8(%ebp),%eax
085b19e0 +0x23c:  mov    %eax,(%esp)
085b19e3 +0x23f:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b19e8 +0x244:  cmp    $0x1,%eax
085b19eb +0x247:  je     085b19f4 <+0x250>
085b19ed +0x249:  mov    $0x1,%eax
085b19f2 +0x24e:  jmp    085b19f9 <+0x255>
085b19f4 +0x250:  mov    $0x0,%eax
085b19f9 +0x255:  movzbl %al,%ebx
085b19fc +0x258:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085b1a03 +0x25f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085b1a08 +0x264:  mov    0x8(%ebp),%edx
085b1a0b +0x267:  add    $0x210,%edx
085b1a11 +0x26d:  mov    %ebx,0x8(%esp)
085b1a15 +0x271:  mov    %eax,0x4(%esp)
085b1a19 +0x275:  mov    %edx,(%esp)
085b1a1c +0x278:  call   085bf4cc <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xa2a>  ; global constructors keyed to CParty::cMember::cMember()+0xa2a
085b1a21 +0x27d:  movl   $0x0,-0x20(%ebp)
085b1a28 +0x284:  jmp    085b1b5d <+0x3b9>
085b1a2d +0x289:  mov    -0x20(%ebp),%eax
085b1a30 +0x28c:  mov    %eax,0x4(%esp)
085b1a34 +0x290:  mov    0x8(%ebp),%eax
085b1a37 +0x293:  mov    %eax,(%esp)
085b1a3a +0x296:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b1a3f +0x29b:  xor    $0x1,%eax
085b1a42 +0x29e:  test   %al,%al
085b1a44 +0x2a0:  jne    085b1b58 <+0x3b4>
085b1a4a +0x2a6:  mov    -0x20(%ebp),%edx
085b1a4d +0x2a9:  mov    0x8(%ebp),%ecx
085b1a50 +0x2ac:  mov    %edx,%eax
085b1a52 +0x2ae:  add    %eax,%eax
085b1a54 +0x2b0:  add    %edx,%eax
085b1a56 +0x2b2:  shl    $0x3,%eax
085b1a59 +0x2b5:  lea    (%ecx,%eax,1),%eax
085b1a5c +0x2b8:  add    $0x78,%eax
085b1a5f +0x2bb:  mov    (%eax),%eax
085b1a61 +0x2bd:  mov    %eax,(%esp)
085b1a64 +0x2c0:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085b1a69 +0x2c5:  cmp    $0x2,%eax
085b1a6c +0x2c8:  jle    085b1a91 <+0x2ed>
085b1a6e +0x2ca:  mov    -0x20(%ebp),%edx
085b1a71 +0x2cd:  mov    0x8(%ebp),%ecx
085b1a74 +0x2d0:  mov    %edx,%eax
085b1a76 +0x2d2:  add    %eax,%eax
085b1a78 +0x2d4:  add    %edx,%eax
085b1a7a +0x2d6:  shl    $0x3,%eax
085b1a7d +0x2d9:  lea    (%ecx,%eax,1),%eax
085b1a80 +0x2dc:  add    $0x78,%eax
085b1a83 +0x2df:  mov    (%eax),%eax
085b1a85 +0x2e1:  mov    %eax,(%esp)
085b1a88 +0x2e4:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085b1a8d +0x2e9:  test   %eax,%eax
085b1a8f +0x2eb:  jne    085b1a98 <+0x2f4>
085b1a91 +0x2ed:  mov    $0x1,%eax
085b1a96 +0x2f2:  jmp    085b1a9d <+0x2f9>
085b1a98 +0x2f4:  mov    $0x0,%eax
085b1a9d +0x2f9:  test   %al,%al
085b1a9f +0x2fb:  je     085b1b35 <+0x391>
085b1aa5 +0x301:  mov    -0x20(%ebp),%edx
085b1aa8 +0x304:  mov    0x8(%ebp),%ecx
085b1aab +0x307:  mov    %edx,%eax
085b1aad +0x309:  add    %eax,%eax
085b1aaf +0x30b:  add    %edx,%eax
085b1ab1 +0x30d:  shl    $0x3,%eax
085b1ab4 +0x310:  lea    (%ecx,%eax,1),%eax
085b1ab7 +0x313:  add    $0x78,%eax
085b1aba +0x316:  mov    (%eax),%eax
085b1abc +0x318:  mov    %eax,(%esp)
085b1abf +0x31b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085b1ac4 +0x320:  movl   $0x0,0x4(%esp)
085b1acc +0x328:  mov    %eax,(%esp)
085b1acf +0x32b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
085b1ad4 +0x330:  mov    %eax,%ebx
085b1ad6 +0x332:  mov    -0x20(%ebp),%edx
085b1ad9 +0x335:  mov    0x8(%ebp),%ecx
085b1adc +0x338:  mov    %edx,%eax
085b1ade +0x33a:  add    %eax,%eax
085b1ae0 +0x33c:  add    %edx,%eax
085b1ae2 +0x33e:  shl    $0x3,%eax
085b1ae5 +0x341:  lea    (%ecx,%eax,1),%eax
085b1ae8 +0x344:  add    $0x78,%eax
085b1aeb +0x347:  mov    (%eax),%eax
085b1aed +0x349:  mov    %eax,(%esp)
085b1af0 +0x34c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085b1af5 +0x351:  mov    %eax,%esi
085b1af7 +0x353:  movl   $0x5,0xc(%esp)
085b1aff +0x35b:  movl   $0x3123,0x8(%esp)
085b1b07 +0x363:  movl   $&_ZZN6CParty23check_allmember_loadingEbE19__PRETTY_FUNCTION__,0x4(%esp)
085b1b0f +0x36b:  lea    -0x40(%ebp),%eax
085b1b12 +0x36e:  mov    %eax,(%esp)
085b1b15 +0x371:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085b1b1a +0x376:  mov    %ebx,0xc(%esp)
085b1b1e +0x37a:  mov    %esi,0x8(%esp)
085b1b22 +0x37e:  movl   $"PCROOM : Dispatcher_RequestPCRoomPlayerCount => User State : %d, m_id : %s",0x4(%esp)
085b1b2a +0x386:  lea    -0x40(%ebp),%eax
085b1b2d +0x389:  mov    %eax,(%esp)
085b1b30 +0x38c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085b1b35 +0x391:  mov    -0x20(%ebp),%edx
085b1b38 +0x394:  mov    0x8(%ebp),%ecx
085b1b3b +0x397:  mov    %edx,%eax
085b1b3d +0x399:  add    %eax,%eax
085b1b3f +0x39b:  add    %edx,%eax
085b1b41 +0x39d:  shl    $0x3,%eax
085b1b44 +0x3a0:  lea    (%ecx,%eax,1),%eax
085b1b47 +0x3a3:  add    $0x78,%eax
085b1b4a +0x3a6:  mov    (%eax),%eax
085b1b4c +0x3a8:  mov    %eax,(%esp)
085b1b4f +0x3ab:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
085b1b54 +0x3b0:  test   %eax,%eax
085b1b56 +0x3b2:  jmp    085b1b59 <+0x3b5>
085b1b58 +0x3b4:  nop
085b1b59 +0x3b5:  addl   $0x1,-0x20(%ebp)
085b1b5d +0x3b9:  cmpl   $0x3,-0x20(%ebp)
085b1b61 +0x3bd:  setle  %al
085b1b64 +0x3c0:  test   %al,%al
085b1b66 +0x3c2:  jne    085b1a2d <+0x289>
085b1b6c +0x3c8:  movl   $0x0,-0x1c(%ebp)
085b1b73 +0x3cf:  jmp    085b1bd7 <+0x433>
085b1b75 +0x3d1:  mov    -0x1c(%ebp),%eax
085b1b78 +0x3d4:  mov    %eax,0x4(%esp)
085b1b7c +0x3d8:  mov    0x8(%ebp),%eax
085b1b7f +0x3db:  mov    %eax,(%esp)
085b1b82 +0x3de:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b1b87 +0x3e3:  xor    $0x1,%eax
085b1b8a +0x3e6:  test   %al,%al
085b1b8c +0x3e8:  jne    085b1bd2 <+0x42e>
085b1b8e +0x3ea:  mov    -0x1c(%ebp),%edx
085b1b91 +0x3ed:  mov    0x8(%ebp),%ecx
085b1b94 +0x3f0:  mov    %edx,%eax
085b1b96 +0x3f2:  add    %eax,%eax
085b1b98 +0x3f4:  add    %edx,%eax
085b1b9a +0x3f6:  shl    $0x3,%eax
085b1b9d +0x3f9:  lea    (%ecx,%eax,1),%eax
085b1ba0 +0x3fc:  add    $0x78,%eax
085b1ba3 +0x3ff:  mov    (%eax),%ebx
085b1ba5 +0x401:  mov    -0x1c(%ebp),%edx
085b1ba8 +0x404:  mov    0x8(%ebp),%ecx
085b1bab +0x407:  mov    %edx,%eax
085b1bad +0x409:  add    %eax,%eax
085b1baf +0x40b:  add    %edx,%eax
085b1bb1 +0x40d:  shl    $0x3,%eax
085b1bb4 +0x410:  lea    (%ecx,%eax,1),%eax
085b1bb7 +0x413:  add    $0x78,%eax
085b1bba +0x416:  mov    (%eax),%eax
085b1bbc +0x418:  mov    %eax,(%esp)
085b1bbf +0x41b:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085b1bc4 +0x420:  mov    %ebx,0x4(%esp)
085b1bc8 +0x424:  mov    %eax,(%esp)
085b1bcb +0x427:  call   080f79e8 <_ZN8WongWork13CHackAnalyzer20beginCollectHackInfoEP5CUser>  ; WongWork::CHackAnalyzer::beginCollectHackInfo(CUser*)
085b1bd0 +0x42c:  jmp    085b1bd3 <+0x42f>
085b1bd2 +0x42e:  nop
085b1bd3 +0x42f:  addl   $0x1,-0x1c(%ebp)
085b1bd7 +0x433:  cmpl   $0x3,-0x1c(%ebp)
085b1bdb +0x437:  setle  %al
085b1bde +0x43a:  test   %al,%al
085b1be0 +0x43c:  jne    085b1b75 <+0x3d1>
085b1be2 +0x43e:  mov    0x8(%ebp),%eax
085b1be5 +0x441:  movb   $0x1,0x119(%eax)
085b1bec +0x448:  mov    0x8(%ebp),%eax
085b1bef +0x44b:  add    $0xb24,%eax
085b1bf4 +0x450:  mov    %eax,(%esp)
085b1bf7 +0x453:  call   0830dc74 <_ZN13CBattle_Field10onStartMapEv>  ; CBattle_Field::onStartMap()
085b1bfc +0x458:  mov    0x8(%ebp),%eax
085b1bff +0x45b:  mov    0xcb8(%eax),%eax
085b1c05 +0x461:  cmp    $0x35,%eax
085b1c08 +0x464:  jne    085b1c86 <+0x4e2>
085b1c0a +0x466:  mov    0x8(%ebp),%eax
085b1c0d +0x469:  movzbl 0xc5e(%eax),%eax
085b1c14 +0x470:  test   %al,%al
085b1c16 +0x472:  je     085b1c86 <+0x4e2>
085b1c18 +0x474:  mov    0x8(%ebp),%eax
085b1c1b +0x477:  movb   $0x0,0xc5d(%eax)
085b1c22 +0x47e:  mov    0x8(%ebp),%eax
085b1c25 +0x481:  movb   $0x2,0xc5c(%eax)
085b1c2c +0x488:  mov    0x8(%ebp),%eax
085b1c2f +0x48b:  movb   $0x0,0xc5e(%eax)
085b1c36 +0x492:  movl   $0x28,0x4(%esp)
085b1c3e +0x49a:  mov    0x8(%ebp),%eax
085b1c41 +0x49d:  mov    %eax,(%esp)
085b1c44 +0x4a0:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085b1c49 +0x4a5:  mov    %eax,%ebx
085b1c4b +0x4a7:  mov    0x8(%ebp),%eax
085b1c4e +0x4aa:  mov    0x64(%eax),%esi
085b1c51 +0x4ad:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085b1c56 +0x4b2:  movl   $0x0,0x18(%esp)
085b1c5e +0x4ba:  mov    %ebx,0x14(%esp)
085b1c62 +0x4be:  movl   $0xf,0x10(%esp)
085b1c6a +0x4c6:  movl   $0x28,0xc(%esp)
085b1c72 +0x4ce:  mov    %esi,0x8(%esp)
085b1c76 +0x4d2:  movl   $0x1,0x4(%esp)
085b1c7e +0x4da:  mov    %eax,(%esp)
085b1c81 +0x4dd:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085b1c86 +0x4e2:  mov    0x8(%ebp),%eax
085b1c89 +0x4e5:  movzwl 0xc4c(%eax),%eax
085b1c90 +0x4ec:  test   %ax,%ax
085b1c93 +0x4ef:  je     085b1cf9 <+0x555>
085b1c95 +0x4f1:  mov    0x8(%ebp),%eax
085b1c98 +0x4f4:  movzwl 0xc4c(%eax),%eax
085b1c9f +0x4fb:  movzwl %ax,%eax
085b1ca2 +0x4fe:  mov    %eax,-0x70(%ebp)
085b1ca5 +0x501:  movl   $0x27,0x4(%esp)
085b1cad +0x509:  mov    0x8(%ebp),%eax
085b1cb0 +0x50c:  mov    %eax,(%esp)
085b1cb3 +0x50f:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085b1cb8 +0x514:  mov    %eax,%ebx
085b1cba +0x516:  mov    0x8(%ebp),%eax
085b1cbd +0x519:  mov    0xc58(%eax),%edi
085b1cc3 +0x51f:  mov    0x8(%ebp),%eax
085b1cc6 +0x522:  mov    0x64(%eax),%esi
085b1cc9 +0x525:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085b1cce +0x52a:  mov    -0x70(%ebp),%edx
085b1cd1 +0x52d:  mov    %edx,0x18(%esp)
085b1cd5 +0x531:  mov    %ebx,0x14(%esp)
085b1cd9 +0x535:  mov    %edi,0x10(%esp)
085b1cdd +0x539:  movl   $0x27,0xc(%esp)
085b1ce5 +0x541:  mov    %esi,0x8(%esp)
085b1ce9 +0x545:  movl   $0x1,0x4(%esp)
085b1cf1 +0x54d:  mov    %eax,(%esp)
085b1cf4 +0x550:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085b1cf9 +0x555:  mov    0x8(%ebp),%eax
085b1cfc +0x558:  add    $0xb24,%eax
085b1d01 +0x55d:  mov    %eax,(%esp)
085b1d04 +0x560:  call   080fdcfc <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x28>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x28
085b1d09 +0x565:  mov    %eax,-0x24(%ebp)
085b1d0c +0x568:  cmpl   $0x0,-0x24(%ebp)
085b1d10 +0x56c:  je     085b1e4f <+0x6ab>
085b1d16 +0x572:  mov    -0x24(%ebp),%eax
085b1d19 +0x575:  mov    %eax,(%esp)
085b1d1c +0x578:  call   0826b950 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x21e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x21e
085b1d21 +0x57d:  test   %al,%al
085b1d23 +0x57f:  je     085b1d3b <+0x597>
085b1d25 +0x581:  mov    0x8(%ebp),%eax
085b1d28 +0x584:  mov    %eax,(%esp)
085b1d2b +0x587:  call   0822d8f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fa0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fa0
085b1d30 +0x58c:  test   %al,%al
085b1d32 +0x58e:  je     085b1d3b <+0x597>
085b1d34 +0x590:  mov    $0x1,%eax
085b1d39 +0x595:  jmp    085b1d40 <+0x59c>
085b1d3b +0x597:  mov    $0x0,%eax
085b1d40 +0x59c:  test   %al,%al
085b1d42 +0x59e:  je     085b1e4f <+0x6ab>
085b1d48 +0x5a4:  movl   $0x2,0x4(%esp)
085b1d50 +0x5ac:  mov    0x8(%ebp),%eax
085b1d53 +0x5af:  mov    %eax,(%esp)
085b1d56 +0x5b2:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
085b1d5b +0x5b7:  movl   $0x15,0x4(%esp)
085b1d63 +0x5bf:  mov    0x8(%ebp),%eax
085b1d66 +0x5c2:  mov    %eax,(%esp)
085b1d69 +0x5c5:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085b1d6e +0x5ca:  mov    %eax,%esi
085b1d70 +0x5cc:  mov    0x8(%ebp),%eax
085b1d73 +0x5cf:  mov    %eax,(%esp)
085b1d76 +0x5d2:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085b1d7b +0x5d7:  mov    %eax,%ebx
085b1d7d +0x5d9:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085b1d82 +0x5de:  movl   $0x0,0x18(%esp)
085b1d8a +0x5e6:  mov    %esi,0x14(%esp)
085b1d8e +0x5ea:  movl   $0x258,0x10(%esp)
085b1d96 +0x5f2:  movl   $0x15,0xc(%esp)
085b1d9e +0x5fa:  mov    %ebx,0x8(%esp)
085b1da2 +0x5fe:  movl   $0x1,0x4(%esp)
085b1daa +0x606:  mov    %eax,(%esp)
085b1dad +0x609:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085b1db2 +0x60e:  movl   $0x1,0x4(%esp)
085b1dba +0x616:  mov    0x8(%ebp),%eax
085b1dbd +0x619:  mov    %eax,(%esp)
085b1dc0 +0x61c:  call   0826b978 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x246>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x246
085b1dc5 +0x621:  lea    -0x68(%ebp),%eax
085b1dc8 +0x624:  mov    %eax,(%esp)
085b1dcb +0x627:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b1dd0 +0x62c:  movl   $0xfe,0x8(%esp)
085b1dd8 +0x634:  movl   $0x0,0x4(%esp)
085b1de0 +0x63c:  lea    -0x68(%ebp),%eax
085b1de3 +0x63f:  mov    %eax,(%esp)
085b1de6 +0x642:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b1deb +0x647:  movl   $0x1,0x4(%esp)
085b1df3 +0x64f:  lea    -0x68(%ebp),%eax
085b1df6 +0x652:  mov    %eax,(%esp)
085b1df9 +0x655:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b1dfe +0x65a:  lea    -0x68(%ebp),%eax
085b1e01 +0x65d:  mov    %eax,0x4(%esp)
085b1e05 +0x661:  mov    0x8(%ebp),%eax
085b1e08 +0x664:  mov    %eax,(%esp)
085b1e0b +0x667:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b1e10 +0x66c:  jmp    085b1e27 <+0x683>
085b1e12 +0x66e:  mov    %edx,%ebx
085b1e14 +0x670:  mov    %eax,%esi
085b1e16 +0x672:  lea    -0x68(%ebp),%eax
085b1e19 +0x675:  mov    %eax,(%esp)
085b1e1c +0x678:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b1e21 +0x67d:  mov    %esi,%eax
085b1e23 +0x67f:  mov    %ebx,%edx
085b1e25 +0x681:  jmp    085b1e34 <+0x690>
085b1e27 +0x683:  lea    -0x68(%ebp),%eax
085b1e2a +0x686:  mov    %eax,(%esp)
085b1e2d +0x689:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b1e32 +0x68e:  jmp    085b1e4f <+0x6ab>
085b1e34 +0x690:  mov    %edx,%ebx
085b1e36 +0x692:  mov    %eax,%esi
085b1e38 +0x694:  lea    -0x5c(%ebp),%eax
085b1e3b +0x697:  mov    %eax,(%esp)
085b1e3e +0x69a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b1e43 +0x69f:  mov    %esi,%eax
085b1e45 +0x6a1:  mov    %ebx,%edx
085b1e47 +0x6a3:  mov    %eax,(%esp)
085b1e4a +0x6a6:  call   08ae3750 <_Unwind_Resume>
085b1e4f +0x6ab:  lea    -0x5c(%ebp),%eax
085b1e52 +0x6ae:  mov    %eax,(%esp)
085b1e55 +0x6b1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b1e5a +0x6b6:  add    $0x9c,%esp
085b1e60 +0x6bc:  pop    %ebx
085b1e61 +0x6bd:  pop    %esi
085b1e62 +0x6be:  pop    %edi
085b1e63 +0x6bf:  pop    %ebp
085b1e64 +0x6c0:  ret
085b1e65 +0x6c1:  nop
```

## 反编译 C

```c
// CParty::check_allmember_loading @ 0x85b17a4

/* CParty::check_allmember_loading(bool) */

void __thiscall CParty::check_allmember_loading(CParty *this,bool param_1)

{
  undefined2 uVar1;
  CUser *pCVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  CHackAnalyzer *this_00;
  undefined4 uVar11;
  TimerQueue *pTVar12;
  undefined4 uVar13;
  PacketGuard local_6c [12];
  PacketGuard local_60 [12];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  CDungeon *local_28;
  int local_24;
  int local_20;
  
  local_34 = get_member_count(this);
  if (local_34 == 0) {
    uVar5 = GetPartyIndex(this);
    cMyTrace::cMyTrace(local_54,"void CParty::check_allmember_loading(bool)",0x30e0,0);
    cMyTrace::operator()(local_54,"<IN_DUNGEON_NULL_PARTY> not_member PartyIndex(%d)",uVar5);
    destroy(this);
    LogManager::logFormat
              (1,"party.cpp","void CParty::check_allmember_loading(bool)",0x30e3,
               "CParty::check_allmember_loading : 1 Using: %d, Member = 0\n",(uint)(byte)this[0x68])
    ;
    return;
  }
  local_30 = 0;
  for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
    cVar3 = _checkValidUser(this,local_2c);
    if ((cVar3 == '\x01') && (this[local_2c + 0x37c] != (CParty)0x0)) {
      local_30 = local_30 + 1;
    }
  }
  if (local_30 != local_34) {
    if (!param_1) {
      return;
    }
    if (local_30 < 1) {
      return;
    }
  }
  CBattle_Field::ResetFirstEnterDungeon((CBattle_Field *)(this + 0xb24));
  PacketGuard::PacketGuard(local_60);
                    /* try { // try from 085b18fd to 085b1dcf has its CatchHandler @ 085b1e34 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,0x1e);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,*(int *)(this + 0xc58));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
  send_to_party(this,local_60);
  uVar8 = *(uint *)(this + 0x358);
  iVar9 = *(int *)(this + 0x35c);
  uVar6 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  uVar7 = uVar6 - *(uint *)(this + 0x360);
  *(uint *)(this + 0x358) = uVar7 + uVar8;
  *(uint *)(this + 0x35c) =
       (-(uint)(uVar6 < *(uint *)(this + 0x360)) - *(int *)(this + 0x364)) + iVar9 +
       (uint)CARRY4(uVar7,uVar8);
  uVar8 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(uint *)(this + 0x33c) = uVar8 - *(uint *)(this + 0x344);
  *(uint *)(this + 0x340) = -(uint)(uVar8 < *(uint *)(this + 0x344)) - *(int *)(this + 0x348);
  cVar3 = IsAutoCreated(this);
  if ((cVar3 == '\x01') || (iVar9 = get_member_count(this), iVar9 == 1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  lVar10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CTraceMobDieHack::traceBegin((CTraceMobDieHack *)(this + 0x210),lVar10,bVar4);
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    cVar3 = _checkValidUser(this,local_24);
    if (cVar3 == '\x01') {
      iVar9 = CUser::get_state(*(CUser **)(this + local_24 * 0x18 + 0x78));
      if ((iVar9 < 3) ||
         (iVar9 = CUserCharacInfo::getCurCharacR
                            (*(CUserCharacInfo **)(this + local_24 * 0x18 + 0x78)), iVar9 == 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        uVar8 = CUser::get_acc_id(*(CUser **)(this + local_24 * 0x18 + 0x78));
        uVar5 = NumberToString(uVar8,0);
        uVar11 = CUser::get_state(*(CUser **)(this + local_24 * 0x18 + 0x78));
        cMyTrace::cMyTrace(local_44,"void CParty::check_allmember_loading(bool)",0x3123,5);
        cMyTrace::operator()
                  (local_44,
                   "PCROOM : Dispatcher_RequestPCRoomPlayerCount => User State : %d, m_id : %s",
                   uVar11,uVar5);
      }
      CUser::GetPCRoomNo(*(CUser **)(this + local_24 * 0x18 + 0x78));
    }
  }
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    cVar3 = _checkValidUser(this,local_20);
    if (cVar3 == '\x01') {
      pCVar2 = *(CUser **)(this + local_20 * 0x18 + 0x78);
      this_00 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + local_20 * 0x18 + 0x78));
      WongWork::CHackAnalyzer::beginCollectHackInfo(this_00,pCVar2);
    }
  }
  this[0x119] = (CParty)0x1;
  CBattle_Field::onStartMap((CBattle_Field *)(this + 0xb24));
  if ((*(int *)(this + 0xcb8) == 0x35) && (this[0xc5e] != (CParty)0x0)) {
    this[0xc5d] = (CParty)0x0;
    this[0xc5c] = (CParty)0x2;
    this[0xc5e] = (CParty)0x0;
    uVar11 = gen_timer_key(this,0x28);
    uVar5 = *(undefined4 *)(this + 100);
    pTVar12 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar12,1,uVar5,0x28,0xf,uVar11,0);
  }
  if (*(short *)(this + 0xc4c) != 0) {
    uVar1 = *(undefined2 *)(this + 0xc4c);
    uVar13 = gen_timer_key(this,0x27);
    uVar5 = *(undefined4 *)(this + 0xc58);
    uVar11 = *(undefined4 *)(this + 100);
    pTVar12 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar12,1,uVar11,0x27,uVar5,uVar13,uVar1);
  }
  local_28 = (CDungeon *)CBattle_Field::GetDungeon((CBattle_Field *)(this + 0xb24));
  if (local_28 != (CDungeon *)0x0) {
    cVar3 = CDungeon::getQuestNpcDungeon(local_28);
    if ((cVar3 == '\0') || (cVar3 = checkBossRoom(this), cVar3 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      SetEPLPState(this,'\x02');
      uVar5 = gen_timer_key(this,0x15);
      uVar11 = GetPartyIndex(this);
      pTVar12 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar12,1,uVar11,0x15,600,uVar5,0);
      set_state(this,'\x01');
      PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 085b1de6 to 085b1e0f has its CatchHandler @ 085b1e12 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0xfe);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
      send_to_party(this,local_6c);
                    /* try { // try from 085b1e2d to 085b1e31 has its CatchHandler @ 085b1e34 */
      PacketGuard::~PacketGuard(local_6c);
    }
  }
  PacketGuard::~PacketGuard(local_60);
  return;
}
```
