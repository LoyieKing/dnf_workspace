# leave_user

`_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE`

`CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859c114` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859c114  _ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE
#           CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
# range [0x0859c114, 0x0859c831]
0859c114 +0x000:  push   %ebp
0859c115 +0x001:  mov    %esp,%ebp
0859c117 +0x003:  push   %edi
0859c118 +0x004:  push   %esi
0859c119 +0x005:  push   %ebx
0859c11a +0x006:  sub    $0x16c,%esp
0859c120 +0x00c:  cmpl   $0x0,0xc(%ebp)
0859c124 +0x010:  jne    0859c15c <+0x48>
0859c126 +0x012:  movl   $"CParty::leave_user pUser is NULL",0x10(%esp)
0859c12e +0x01a:  movl   $0x56d,0xc(%esp)
0859c136 +0x022:  movl   $&_ZZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPEE19__PRETTY_FUNCTION__,0x8(%esp)
0859c13e +0x02a:  movl   $"party.cpp",0x4(%esp)
0859c146 +0x032:  movl   $0x1,(%esp)
0859c14d +0x039:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0859c152 +0x03e:  mov    $0x1,%eax
0859c157 +0x043:  jmp    0859c827 <+0x713>
0859c15c +0x048:  mov    0x8(%ebp),%eax
0859c15f +0x04b:  mov    %eax,(%esp)
0859c162 +0x04e:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
0859c167 +0x053:  mov    0xc(%ebp),%edx
0859c16a +0x056:  mov    %edx,0x4(%esp)
0859c16e +0x05a:  mov    %eax,(%esp)
0859c171 +0x05d:  call   085bc0a0 <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser>  ; CPartyTelePort::process_leave_user_at_teleport(CUser*)
0859c176 +0x062:  mov    0x8(%ebp),%eax
0859c179 +0x065:  add    $0x2a4,%eax
0859c17e +0x06a:  mov    %eax,(%esp)
0859c181 +0x06d:  call   08ab150c <_ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv>  ; secretshop::SECRET_SHOP_DATA::IsOpen()
0859c186 +0x072:  test   %al,%al
0859c188 +0x074:  je     0859c1b2 <+0x9e>
0859c18a +0x076:  mov    0xc(%ebp),%eax
0859c18d +0x079:  mov    %eax,(%esp)
0859c190 +0x07c:  call   08688638 <_ZN5CUser17GetUserPosInPartyEv>  ; CUser::GetUserPosInParty()
0859c195 +0x081:  mov    0x8(%ebp),%edx
0859c198 +0x084:  add    $0x2a4,%edx
0859c19e +0x08a:  movl   $0x0,0x8(%esp)
0859c1a6 +0x092:  mov    %eax,0x4(%esp)
0859c1aa +0x096:  mov    %edx,(%esp)
0859c1ad +0x099:  call   08ab1532 <_ZN10secretshop16SECRET_SHOP_DATA9SetBuyingEib>  ; secretshop::SECRET_SHOP_DATA::SetBuying(int, bool)
0859c1b2 +0x09e:  mov    0x8(%ebp),%eax
0859c1b5 +0x0a1:  mov    0xcac(%eax),%eax
0859c1bb +0x0a7:  test   %eax,%eax
0859c1bd +0x0a9:  je     0859c2a7 <+0x193>
0859c1c3 +0x0af:  lea    -0x134(%ebp),%ebx
0859c1c9 +0x0b5:  mov    $0x0,%eax
0859c1ce +0x0ba:  mov    $0x40,%edx
0859c1d3 +0x0bf:  mov    %ebx,%edi
0859c1d5 +0x0c1:  mov    %edx,%ecx
0859c1d7 +0x0c3:  rep stos %eax,%es:(%edi)
0859c1d9 +0x0c5:  mov    0x8(%ebp),%eax
0859c1dc +0x0c8:  mov    0xcd8(%eax),%eax
0859c1e2 +0x0ce:  mov    %eax,%edi
0859c1e4 +0x0d0:  lea    -0x134(%ebp),%eax
0859c1ea +0x0d6:  mov    %eax,0x4(%esp)
0859c1ee +0x0da:  mov    0x8(%ebp),%eax
0859c1f1 +0x0dd:  mov    %eax,(%esp)
0859c1f4 +0x0e0:  call   085b4bde <_ZN6CParty15_getMemberNamesEPc>  ; CParty::_getMemberNames(char*)
0859c1f9 +0x0e5:  mov    %eax,%esi
0859c1fb +0x0e7:  mov    0x8(%ebp),%eax
0859c1fe +0x0ea:  add    $0xb24,%eax
0859c203 +0x0ef:  mov    %eax,(%esp)
0859c206 +0x0f2:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0859c20b +0x0f7:  mov    %eax,%ebx
0859c20d +0x0f9:  mov    0x8(%ebp),%eax
0859c210 +0x0fc:  mov    0xcac(%eax),%eax
0859c216 +0x102:  mov    %eax,(%esp)
0859c219 +0x105:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
0859c21e +0x10a:  mov    0xc(%ebp),%edx
0859c221 +0x10d:  add    $0x79700,%edx
0859c227 +0x113:  mov    %edi,0x10(%esp)
0859c22b +0x117:  mov    %esi,0xc(%esp)
0859c22f +0x11b:  mov    %ebx,0x8(%esp)
0859c233 +0x11f:  mov    %eax,0x4(%esp)
0859c237 +0x123:  mov    %edx,(%esp)
0859c23a +0x126:  call   086849dc <_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i>  ; cUserHistoryLog::LeaveDungeon(char const*, int, char const*, int)
0859c23f +0x12b:  mov    0x8(%ebp),%eax
0859c242 +0x12e:  mov    %eax,(%esp)
0859c245 +0x131:  call   0822d812 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ebc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ebc
0859c24a +0x136:  test   %al,%al
0859c24c +0x138:  je     0859c264 <+0x150>
0859c24e +0x13a:  mov    0xc(%ebp),%eax
0859c251 +0x13d:  mov    %eax,(%esp)
0859c254 +0x140:  call   08649bdc <_ZN5CUser23isDungeonClearHackCheckEv>  ; CUser::isDungeonClearHackCheck()
0859c259 +0x145:  test   %al,%al
0859c25b +0x147:  je     0859c264 <+0x150>
0859c25d +0x149:  mov    $0x1,%eax
0859c262 +0x14e:  jmp    0859c269 <+0x155>
0859c264 +0x150:  mov    $0x0,%eax
0859c269 +0x155:  test   %al,%al
0859c26b +0x157:  je     0859c2a7 <+0x193>
0859c26d +0x159:  mov    0xc(%ebp),%eax
0859c270 +0x15c:  mov    %eax,(%esp)
0859c273 +0x15f:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0859c278 +0x164:  movl   $0x0,0x14(%esp)
0859c280 +0x16c:  movl   $0x0,0x10(%esp)
0859c288 +0x174:  movl   $0x1,0xc(%esp)
0859c290 +0x17c:  movl   $0x19c,0x8(%esp)
0859c298 +0x184:  mov    0xc(%ebp),%edx
0859c29b +0x187:  mov    %edx,0x4(%esp)
0859c29f +0x18b:  mov    %eax,(%esp)
0859c2a2 +0x18e:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0859c2a7 +0x193:  mov    0x8(%ebp),%eax
0859c2aa +0x196:  mov    %eax,(%esp)
0859c2ad +0x199:  call   0822d928 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fd2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fd2
0859c2b2 +0x19e:  cmp    $0xffffffff,%eax
0859c2b5 +0x1a1:  setne  %al
0859c2b8 +0x1a4:  test   %al,%al
0859c2ba +0x1a6:  je     0859c2d8 <+0x1c4>
0859c2bc +0x1a8:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0859c2c1 +0x1ad:  movl   $0x0,0x8(%esp)
0859c2c9 +0x1b5:  mov    0x8(%ebp),%edx
0859c2cc +0x1b8:  mov    %edx,0x4(%esp)
0859c2d0 +0x1bc:  mov    %eax,(%esp)
0859c2d3 +0x1bf:  call   082983fc <_ZN12CGameManager18CheckOutQuickPartyEP6CPartyb>  ; CGameManager::CheckOutQuickParty(CParty*, bool)
0859c2d8 +0x1c4:  mov    0x8(%ebp),%eax
0859c2db +0x1c7:  mov    %eax,(%esp)
0859c2de +0x1ca:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
0859c2e3 +0x1cf:  test   %al,%al
0859c2e5 +0x1d1:  je     0859c329 <+0x215>
0859c2e7 +0x1d3:  mov    0xc(%ebp),%eax
0859c2ea +0x1d6:  mov    %eax,0x8(%esp)
0859c2ee +0x1da:  movl   $0x0,0x4(%esp)
0859c2f6 +0x1e2:  mov    0x8(%ebp),%eax
0859c2f9 +0x1e5:  mov    %eax,(%esp)
0859c2fc +0x1e8:  call   0859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>  ; CParty::send_quick_party_matching_result(bool, CUser*)
0859c301 +0x1ed:  mov    0x8(%ebp),%eax
0859c304 +0x1f0:  mov    %eax,(%esp)
0859c307 +0x1f3:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859c30c +0x1f8:  cmp    $0x2,%eax
0859c30f +0x1fb:  sete   %al
0859c312 +0x1fe:  test   %al,%al
0859c314 +0x200:  je     0859c329 <+0x215>
0859c316 +0x202:  movl   $0x0,0x4(%esp)
0859c31e +0x20a:  mov    0x8(%ebp),%eax
0859c321 +0x20d:  mov    %eax,(%esp)
0859c324 +0x210:  call   0822d936 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fe0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fe0
0859c329 +0x215:  mov    0x8(%ebp),%eax
0859c32c +0x218:  mov    %eax,(%esp)
0859c32f +0x21b:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859c334 +0x220:  mov    %eax,-0x24(%ebp)
0859c337 +0x223:  cmpl   $0x1,-0x24(%ebp)
0859c33b +0x227:  jg     0859c635 <+0x521>
0859c341 +0x22d:  mov    0xc(%ebp),%eax
0859c344 +0x230:  mov    %eax,(%esp)
0859c347 +0x233:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
0859c34c +0x238:  movswl %ax,%edi
0859c34f +0x23b:  mov    0xc(%ebp),%eax
0859c352 +0x23e:  mov    %eax,(%esp)
0859c355 +0x241:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0859c35a +0x246:  mov    %eax,%esi
0859c35c +0x248:  mov    0xc(%ebp),%eax
0859c35f +0x24b:  mov    %eax,(%esp)
0859c362 +0x24e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0859c367 +0x253:  movl   $0x0,0x4(%esp)
0859c36f +0x25b:  mov    %eax,(%esp)
0859c372 +0x25e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0859c377 +0x263:  mov    %eax,%ebx
0859c379 +0x265:  movl   $0x0,0xc(%esp)
0859c381 +0x26d:  movl   $0x5b8,0x8(%esp)
0859c389 +0x275:  movl   $&_ZZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPEE19__PRETTY_FUNCTION__,0x4(%esp)
0859c391 +0x27d:  lea    -0x34(%ebp),%eax
0859c394 +0x280:  mov    %eax,(%esp)
0859c397 +0x283:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0859c39c +0x288:  mov    %edi,0x10(%esp)
0859c3a0 +0x28c:  mov    %esi,0xc(%esp)
0859c3a4 +0x290:  mov    %ebx,0x8(%esp)
0859c3a8 +0x294:  movl   $"<IN_DUNGEON_NULL_PARTY> m_id(%s), user_state(%d), PartyIndex(%d)",0x4(%esp)
0859c3b0 +0x29c:  lea    -0x34(%ebp),%eax
0859c3b3 +0x29f:  mov    %eax,(%esp)
0859c3b6 +0x2a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0859c3bb +0x2a7:  cmpl   $0x0,-0x24(%ebp)
0859c3bf +0x2ab:  jg     0859c599 <+0x485>
0859c3c5 +0x2b1:  mov    0x8(%ebp),%eax
0859c3c8 +0x2b4:  movzbl 0x6a(%eax),%eax
0859c3cc +0x2b8:  movsbl %al,%ebx
0859c3cf +0x2bb:  mov    0x8(%ebp),%eax
0859c3d2 +0x2be:  mov    0x64(%eax),%ecx
0859c3d5 +0x2c1:  mov    0x8(%ebp),%eax
0859c3d8 +0x2c4:  movzwl 0x13e(%eax),%eax
0859c3df +0x2cb:  movzwl %ax,%edx
0859c3e2 +0x2ce:  mov    0x8(%ebp),%eax
0859c3e5 +0x2d1:  mov    0x74(%eax),%eax
0859c3e8 +0x2d4:  mov    %ebx,0x24(%esp)
0859c3ec +0x2d8:  mov    %ecx,0x20(%esp)
0859c3f0 +0x2dc:  mov    %edx,0x1c(%esp)
0859c3f4 +0x2e0:  mov    %eax,0x18(%esp)
0859c3f8 +0x2e4:  mov    -0x24(%ebp),%eax
0859c3fb +0x2e7:  mov    %eax,0x14(%esp)
0859c3ff +0x2eb:  movl   $"[PARTYPOOL] member_count : %d, m_pManager : %x, dungeon_idx : %u, m_iIndex : %u, cState : %d",0x10(%esp)
0859c407 +0x2f3:  movl   $0x5c5,0xc(%esp)
0859c40f +0x2fb:  movl   $&_ZZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPEE19__PRETTY_FUNCTION__,0x8(%esp)
0859c417 +0x303:  movl   $"party.cpp",0x4(%esp)
0859c41f +0x30b:  movl   $0x1,(%esp)
0859c426 +0x312:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0859c42b +0x317:  movl   $0x0,-0x20(%ebp)
0859c432 +0x31e:  jmp    0859c58a <+0x476>
0859c437 +0x323:  mov    -0x20(%ebp),%edx
0859c43a +0x326:  mov    0x8(%ebp),%ecx
0859c43d +0x329:  mov    %edx,%eax
0859c43f +0x32b:  add    %eax,%eax
0859c441 +0x32d:  add    %edx,%eax
0859c443 +0x32f:  shl    $0x3,%eax
0859c446 +0x332:  lea    (%ecx,%eax,1),%eax
0859c449 +0x335:  add    $0x78,%eax
0859c44c +0x338:  mov    (%eax),%eax
0859c44e +0x33a:  test   %eax,%eax
0859c450 +0x33c:  jne    0859c4a5 <+0x391>
0859c452 +0x33e:  mov    -0x20(%ebp),%edx
0859c455 +0x341:  mov    0x8(%ebp),%ecx
0859c458 +0x344:  mov    %edx,%eax
0859c45a +0x346:  add    %eax,%eax
0859c45c +0x348:  add    %edx,%eax
0859c45e +0x34a:  shl    $0x3,%eax
0859c461 +0x34d:  lea    (%ecx,%eax,1),%eax
0859c464 +0x350:  sub    $0xffffff80,%eax
0859c467 +0x353:  mov    (%eax),%eax
0859c469 +0x355:  mov    %eax,0x18(%esp)
0859c46d +0x359:  mov    -0x20(%ebp),%eax
0859c470 +0x35c:  mov    %eax,0x14(%esp)
0859c474 +0x360:  movl   $"User[%d] NULL, ch_state NONE, uid : %d, charac_no : 0",0x10(%esp)
0859c47c +0x368:  movl   $0x5cd,0xc(%esp)
0859c484 +0x370:  movl   $&_ZZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPEE19__PRETTY_FUNCTION__,0x8(%esp)
0859c48c +0x378:  movl   $"party.cpp",0x4(%esp)
0859c494 +0x380:  movl   $0x1,(%esp)
0859c49b +0x387:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0859c4a0 +0x38c:  jmp    0859c586 <+0x472>
0859c4a5 +0x391:  mov    -0x20(%ebp),%edx
0859c4a8 +0x394:  mov    0x8(%ebp),%ecx
0859c4ab +0x397:  mov    %edx,%eax
0859c4ad +0x399:  add    %eax,%eax
0859c4af +0x39b:  add    %edx,%eax
0859c4b1 +0x39d:  shl    $0x3,%eax
0859c4b4 +0x3a0:  lea    (%ecx,%eax,1),%eax
0859c4b7 +0x3a3:  add    $0x78,%eax
0859c4ba +0x3a6:  mov    (%eax),%eax
0859c4bc +0x3a8:  mov    %eax,(%esp)
0859c4bf +0x3ab:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0859c4c4 +0x3b0:  mov    %eax,%esi
0859c4c6 +0x3b2:  mov    -0x20(%ebp),%edx
0859c4c9 +0x3b5:  mov    0x8(%ebp),%ecx
0859c4cc +0x3b8:  mov    %edx,%eax
0859c4ce +0x3ba:  add    %eax,%eax
0859c4d0 +0x3bc:  add    %edx,%eax
0859c4d2 +0x3be:  shl    $0x3,%eax
0859c4d5 +0x3c1:  lea    (%ecx,%eax,1),%eax
0859c4d8 +0x3c4:  sub    $0xffffff80,%eax
0859c4db +0x3c7:  mov    (%eax),%edi
0859c4dd +0x3c9:  mov    -0x20(%ebp),%edx
0859c4e0 +0x3cc:  mov    0x8(%ebp),%ecx
0859c4e3 +0x3cf:  mov    %edx,%eax
0859c4e5 +0x3d1:  add    %eax,%eax
0859c4e7 +0x3d3:  add    %edx,%eax
0859c4e9 +0x3d5:  shl    $0x3,%eax
0859c4ec +0x3d8:  lea    (%ecx,%eax,1),%eax
0859c4ef +0x3db:  add    $0x78,%eax
0859c4f2 +0x3de:  mov    (%eax),%eax
0859c4f4 +0x3e0:  mov    %eax,(%esp)
0859c4f7 +0x3e3:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0859c4fc +0x3e8:  mov    %eax,%ebx
0859c4fe +0x3ea:  mov    -0x20(%ebp),%edx
0859c501 +0x3ed:  mov    0x8(%ebp),%ecx
0859c504 +0x3f0:  mov    %edx,%eax
0859c506 +0x3f2:  add    %eax,%eax
0859c508 +0x3f4:  add    %edx,%eax
0859c50a +0x3f6:  shl    $0x3,%eax
0859c50d +0x3f9:  lea    (%ecx,%eax,1),%eax
0859c510 +0x3fc:  add    $0x78,%eax
0859c513 +0x3ff:  mov    (%eax),%eax
0859c515 +0x401:  mov    %eax,(%esp)
0859c518 +0x404:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0859c51d +0x409:  mov    %eax,%ecx
0859c51f +0x40b:  mov    -0x20(%ebp),%edx
0859c522 +0x40e:  mov    0x8(%ebp),%eax
0859c525 +0x411:  mov    %eax,-0x13c(%ebp)
0859c52b +0x417:  mov    %edx,%eax
0859c52d +0x419:  add    %eax,%eax
0859c52f +0x41b:  add    %edx,%eax
0859c531 +0x41d:  shl    $0x3,%eax
0859c534 +0x420:  add    -0x13c(%ebp),%eax
0859c53a +0x426:  add    $0x78,%eax
0859c53d +0x429:  mov    (%eax),%eax
0859c53f +0x42b:  mov    %esi,0x28(%esp)
0859c543 +0x42f:  mov    %edi,0x24(%esp)
0859c547 +0x433:  mov    %ebx,0x20(%esp)
0859c54b +0x437:  mov    %ecx,0x1c(%esp)
0859c54f +0x43b:  mov    %eax,0x18(%esp)
0859c553 +0x43f:  mov    -0x20(%ebp),%eax
0859c556 +0x442:  mov    %eax,0x14(%esp)
0859c55a +0x446:  movl   $"User[%d] %x, ch_state %d, uid : %d / %d, charac_no : %u",0x10(%esp)
0859c562 +0x44e:  movl   $0x5d8,0xc(%esp)
0859c56a +0x456:  movl   $&_ZZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPEE19__PRETTY_FUNCTION__,0x8(%esp)
0859c572 +0x45e:  movl   $"party.cpp",0x4(%esp)
0859c57a +0x466:  movl   $0x1,(%esp)
0859c581 +0x46d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0859c586 +0x472:  addl   $0x1,-0x20(%ebp)
0859c58a +0x476:  cmpl   $0x3,-0x20(%ebp)
0859c58e +0x47a:  setle  %al
0859c591 +0x47d:  test   %al,%al
0859c593 +0x47f:  jne    0859c437 <+0x323>
0859c599 +0x485:  movl   $0xffffffff,0x4(%esp)
0859c5a1 +0x48d:  mov    0xc(%ebp),%eax
0859c5a4 +0x490:  mov    %eax,(%esp)
0859c5a7 +0x493:  call   085bfd96 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12f4>  ; global constructors keyed to CParty::cMember::cMember()+0x12f4
0859c5ac +0x498:  mov    0xc(%ebp),%eax
0859c5af +0x49b:  movl   $0x0,0x4(%esp)
0859c5b7 +0x4a3:  mov    %eax,(%esp)
0859c5ba +0x4a6:  call   084699e6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xc9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xc9
0859c5bf +0x4ab:  mov    0xc(%ebp),%eax
0859c5c2 +0x4ae:  movl   $0x0,0x4(%esp)
0859c5ca +0x4b6:  mov    %eax,(%esp)
0859c5cd +0x4b9:  call   08469a20 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x103>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x103
0859c5d2 +0x4be:  mov    0xc(%ebp),%eax
0859c5d5 +0x4c1:  movl   $0x0,0x4(%esp)
0859c5dd +0x4c9:  mov    %eax,(%esp)
0859c5e0 +0x4cc:  call   08469a02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xe5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xe5
0859c5e5 +0x4d1:  mov    0xc(%ebp),%eax
0859c5e8 +0x4d4:  movl   $0x0,0x4(%esp)
0859c5f0 +0x4dc:  mov    %eax,(%esp)
0859c5f3 +0x4df:  call   08469a3e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x121>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x121
0859c5f8 +0x4e4:  mov    0xc(%ebp),%eax
0859c5fb +0x4e7:  mov    %eax,(%esp)
0859c5fe +0x4ea:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
0859c603 +0x4ef:  cmp    $0x1,%eax
0859c606 +0x4f2:  setne  %al
0859c609 +0x4f5:  test   %al,%al
0859c60b +0x4f7:  je     0859c620 <+0x50c>
0859c60d +0x4f9:  movl   $0x3,0x4(%esp)
0859c615 +0x501:  mov    0xc(%ebp),%eax
0859c618 +0x504:  mov    %eax,(%esp)
0859c61b +0x507:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
0859c620 +0x50c:  mov    0x8(%ebp),%eax
0859c623 +0x50f:  mov    %eax,(%esp)
0859c626 +0x512:  call   0859ad4c <_ZN6CParty7destroyEv>  ; CParty::destroy()
0859c62b +0x517:  mov    $0x0,%eax
0859c630 +0x51c:  jmp    0859c827 <+0x713>
0859c635 +0x521:  cmpl   $0x0,0xc(%ebp)
0859c639 +0x525:  je     0859c661 <+0x54d>
0859c63b +0x527:  mov    0xc(%ebp),%eax
0859c63e +0x52a:  mov    %eax,(%esp)
0859c641 +0x52d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0859c646 +0x532:  mov    %eax,(%esp)
0859c649 +0x535:  call   080f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>  ; WongWork::CHackAnalyzer::reportHackInfo()
0859c64e +0x53a:  mov    0xc(%ebp),%eax
0859c651 +0x53d:  mov    %eax,(%esp)
0859c654 +0x540:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0859c659 +0x545:  mov    %eax,(%esp)
0859c65c +0x548:  call   080f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>  ; WongWork::CHackAnalyzer::resetHackInfo()
0859c661 +0x54d:  mov    0x8(%ebp),%eax
0859c664 +0x550:  mov    0x74(%eax),%eax
0859c667 +0x553:  cmp    0xc(%ebp),%eax
0859c66a +0x556:  jne    0859c6c1 <+0x5ad>
0859c66c +0x558:  mov    0x8(%ebp),%eax
0859c66f +0x55b:  mov    %eax,(%esp)
0859c672 +0x55e:  call   0859c832 <_ZN6CParty14change_managerEv>  ; CParty::change_manager()
0859c677 +0x563:  mov    0x10(%ebp),%ebx
0859c67a +0x566:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0859c67f +0x56b:  mov    %ebx,0x8(%esp)
0859c683 +0x56f:  mov    0x8(%ebp),%edx
0859c686 +0x572:  mov    %edx,0x4(%esp)
0859c68a +0x576:  mov    %eax,(%esp)
0859c68d +0x579:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
0859c692 +0x57e:  mov    0x8(%ebp),%eax
0859c695 +0x581:  mov    %eax,(%esp)
0859c698 +0x584:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
0859c69d +0x589:  mov    0x8(%ebp),%eax
0859c6a0 +0x58c:  mov    %eax,(%esp)
0859c6a3 +0x58f:  call   085ac59c <_ZN6CParty26checkInoutConditionDungeonEv>  ; CParty::checkInoutConditionDungeon()
0859c6a8 +0x594:  mov    %eax,0x4(%esp)
0859c6ac +0x598:  mov    0x8(%ebp),%eax
0859c6af +0x59b:  mov    %eax,(%esp)
0859c6b2 +0x59e:  call   085ac95e <_ZN6CParty25sendInoutConditionDungeonEN15RetryFailReason1TE>  ; CParty::sendInoutConditionDungeon(RetryFailReason::T)
0859c6b7 +0x5a3:  mov    $0x0,%eax
0859c6bc +0x5a8:  jmp    0859c827 <+0x713>
0859c6c1 +0x5ad:  movl   $0x0,-0x1c(%ebp)
0859c6c8 +0x5b4:  jmp    0859c813 <+0x6ff>
0859c6cd +0x5b9:  mov    -0x1c(%ebp),%eax
0859c6d0 +0x5bc:  mov    %eax,0x4(%esp)
0859c6d4 +0x5c0:  mov    0x8(%ebp),%eax
0859c6d7 +0x5c3:  mov    %eax,(%esp)
0859c6da +0x5c6:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859c6df +0x5cb:  xor    $0x1,%eax
0859c6e2 +0x5ce:  test   %al,%al
0859c6e4 +0x5d0:  jne    0859c80e <+0x6fa>
0859c6ea +0x5d6:  mov    -0x1c(%ebp),%edx
0859c6ed +0x5d9:  mov    0x8(%ebp),%ecx
0859c6f0 +0x5dc:  mov    %edx,%eax
0859c6f2 +0x5de:  add    %eax,%eax
0859c6f4 +0x5e0:  add    %edx,%eax
0859c6f6 +0x5e2:  shl    $0x3,%eax
0859c6f9 +0x5e5:  lea    (%ecx,%eax,1),%eax
0859c6fc +0x5e8:  add    $0x78,%eax
0859c6ff +0x5eb:  mov    (%eax),%eax
0859c701 +0x5ed:  cmp    0xc(%ebp),%eax
0859c704 +0x5f0:  jne    0859c80f <+0x6fb>
0859c70a +0x5f6:  mov    -0x1c(%ebp),%edx
0859c70d +0x5f9:  mov    0x8(%ebp),%ecx
0859c710 +0x5fc:  mov    %edx,%eax
0859c712 +0x5fe:  add    %eax,%eax
0859c714 +0x600:  add    %edx,%eax
0859c716 +0x602:  shl    $0x3,%eax
0859c719 +0x605:  lea    (%ecx,%eax,1),%eax
0859c71c +0x608:  add    $0x78,%eax
0859c71f +0x60b:  movl   $0x0,(%eax)
0859c725 +0x611:  mov    -0x1c(%ebp),%edx
0859c728 +0x614:  mov    0x8(%ebp),%ecx
0859c72b +0x617:  mov    %edx,%eax
0859c72d +0x619:  add    %eax,%eax
0859c72f +0x61b:  add    %edx,%eax
0859c731 +0x61d:  shl    $0x3,%eax
0859c734 +0x620:  lea    (%ecx,%eax,1),%eax
0859c737 +0x623:  sub    $0xffffff80,%eax
0859c73a +0x626:  movl   $0x0,(%eax)
0859c740 +0x62c:  movl   $0xffffffff,0x4(%esp)
0859c748 +0x634:  mov    0xc(%ebp),%eax
0859c74b +0x637:  mov    %eax,(%esp)
0859c74e +0x63a:  call   085bfd96 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12f4>  ; global constructors keyed to CParty::cMember::cMember()+0x12f4
0859c753 +0x63f:  mov    0xc(%ebp),%eax
0859c756 +0x642:  movl   $0x0,0x4(%esp)
0859c75e +0x64a:  mov    %eax,(%esp)
0859c761 +0x64d:  call   084699e6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xc9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xc9
0859c766 +0x652:  mov    0xc(%ebp),%eax
0859c769 +0x655:  movl   $0x0,0x4(%esp)
0859c771 +0x65d:  mov    %eax,(%esp)
0859c774 +0x660:  call   08469a20 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x103>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x103
0859c779 +0x665:  mov    0xc(%ebp),%eax
0859c77c +0x668:  movl   $0x0,0x4(%esp)
0859c784 +0x670:  mov    %eax,(%esp)
0859c787 +0x673:  call   08469a02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xe5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xe5
0859c78c +0x678:  mov    0xc(%ebp),%eax
0859c78f +0x67b:  movl   $0x0,0x4(%esp)
0859c797 +0x683:  mov    %eax,(%esp)
0859c79a +0x686:  call   08469a3e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x121>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x121
0859c79f +0x68b:  mov    0xc(%ebp),%eax
0859c7a2 +0x68e:  mov    %eax,(%esp)
0859c7a5 +0x691:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
0859c7aa +0x696:  cmp    $0x1,%eax
0859c7ad +0x699:  setne  %al
0859c7b0 +0x69c:  test   %al,%al
0859c7b2 +0x69e:  je     0859c7c7 <+0x6b3>
0859c7b4 +0x6a0:  movl   $0x3,0x4(%esp)
0859c7bc +0x6a8:  mov    0xc(%ebp),%eax
0859c7bf +0x6ab:  mov    %eax,(%esp)
0859c7c2 +0x6ae:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
0859c7c7 +0x6b3:  mov    0x10(%ebp),%ebx
0859c7ca +0x6b6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0859c7cf +0x6bb:  mov    %ebx,0x8(%esp)
0859c7d3 +0x6bf:  mov    0x8(%ebp),%edx
0859c7d6 +0x6c2:  mov    %edx,0x4(%esp)
0859c7da +0x6c6:  mov    %eax,(%esp)
0859c7dd +0x6c9:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
0859c7e2 +0x6ce:  mov    0x8(%ebp),%eax
0859c7e5 +0x6d1:  mov    %eax,(%esp)
0859c7e8 +0x6d4:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
0859c7ed +0x6d9:  mov    0x8(%ebp),%eax
0859c7f0 +0x6dc:  mov    %eax,(%esp)
0859c7f3 +0x6df:  call   085ac59c <_ZN6CParty26checkInoutConditionDungeonEv>  ; CParty::checkInoutConditionDungeon()
0859c7f8 +0x6e4:  mov    %eax,0x4(%esp)
0859c7fc +0x6e8:  mov    0x8(%ebp),%eax
0859c7ff +0x6eb:  mov    %eax,(%esp)
0859c802 +0x6ee:  call   085ac95e <_ZN6CParty25sendInoutConditionDungeonEN15RetryFailReason1TE>  ; CParty::sendInoutConditionDungeon(RetryFailReason::T)
0859c807 +0x6f3:  mov    $0x0,%eax
0859c80c +0x6f8:  jmp    0859c827 <+0x713>
0859c80e +0x6fa:  nop
0859c80f +0x6fb:  addl   $0x1,-0x1c(%ebp)
0859c813 +0x6ff:  cmpl   $0x3,-0x1c(%ebp)
0859c817 +0x703:  setle  %al
0859c81a +0x706:  test   %al,%al
0859c81c +0x708:  jne    0859c6cd <+0x5b9>
0859c822 +0x70e:  mov    $0x1,%eax
0859c827 +0x713:  add    $0x16c,%esp
0859c82d +0x719:  pop    %ebx
0859c82e +0x71a:  pop    %esi
0859c82f +0x71b:  pop    %edi
0859c830 +0x71c:  pop    %ebp
0859c831 +0x71d:  ret
```

## 反编译 C

```c
// CParty::leave_user @ 0x859c114

/* CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE) */

undefined4 __thiscall CParty::leave_user(CParty *this,CUser *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  CPartyTelePort *this_00;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  CHackAnalyzer *pCVar8;
  CGameManager *this_01;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  GameWorld *pGVar12;
  byte bVar13;
  char local_138 [256];
  cMyTrace local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  
  bVar13 = 0;
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"party.cpp","int CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)",0x56d,
               "CParty::leave_user pUser is NULL");
    return 1;
  }
  this_00 = (CPartyTelePort *)GetPartyTelePort(this);
  CPartyTelePort::process_leave_user_at_teleport(this_00,param_1);
  cVar2 = secretshop::SECRET_SHOP_DATA::IsOpen((SECRET_SHOP_DATA *)(this + 0x2a4));
  if (cVar2 != '\0') {
    iVar4 = CUser::GetUserPosInParty(param_1);
    secretshop::SECRET_SHOP_DATA::SetBuying((SECRET_SHOP_DATA *)(this + 0x2a4),iVar4,false);
  }
  if (*(int *)(this + 0xcac) != 0) {
    pcVar5 = local_138;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar13 * -2 + 1) * 4;
    }
    iVar4 = *(int *)(this + 0xcd8);
    pcVar5 = (char *)_getMemberNames(this,local_138);
    iVar6 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
    pcVar7 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0xcac));
    cUserHistoryLog::LeaveDungeon((cUserHistoryLog *)(param_1 + 0x79700),pcVar7,iVar6,pcVar5,iVar4);
    cVar2 = IsSinglePlay(this);
    if ((cVar2 == '\0') || (cVar2 = CUser::isDungeonClearHackCheck(param_1), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_1,0x19c,1,0,0);
    }
  }
  iVar4 = get_quick_party_index(this);
  if (iVar4 != -1) {
    this_01 = (CGameManager *)G_CGameManager();
    CGameManager::CheckOutQuickParty(this_01,this,false);
  }
  cVar2 = is_quick_party(this);
  if (cVar2 != '\0') {
    send_quick_party_matching_result(this,false,param_1);
    iVar4 = get_member_count(this);
    if (iVar4 == 2) {
      set_quick_party(this,false);
    }
  }
  local_28 = get_member_count(this);
  if (local_28 < 2) {
    sVar3 = CUser::GetPartyIndex(param_1);
    uVar9 = CUser::get_state(param_1);
    uVar10 = CUser::get_acc_id(param_1);
    uVar11 = NumberToString(uVar10,0);
    cMyTrace::cMyTrace(local_38,"int CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)",0x5b8,0);
    cMyTrace::operator()
              (local_38,"<IN_DUNGEON_NULL_PARTY> m_id(%s), user_state(%d), PartyIndex(%d)",uVar11,
               uVar9,(int)sVar3);
    if (local_28 < 1) {
      iVar4 = (int)(char)this[0x6a];
      uVar9 = *(undefined4 *)(this + 100);
      uVar10 = (uint)*(ushort *)(this + 0x13e);
      LogManager::logFormat
                (1,"party.cpp","int CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)",0x5c5,
                 "[PARTYPOOL] member_count : %d, m_pManager : %x, dungeon_idx : %u, m_iIndex : %u, cState : %d"
                 ,local_28,*(undefined4 *)(this + 0x74),uVar10,uVar9,iVar4);
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        if (*(int *)(this + local_24 * 0x18 + 0x78) == 0) {
          LogManager::logFormat
                    (1,"party.cpp","int CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)",0x5cd,
                     "User[%d] NULL, ch_state NONE, uid : %d, charac_no : 0",local_24,
                     *(undefined4 *)(this + local_24 * 0x18 + 0x80),uVar10,uVar9,iVar4);
        }
        else {
          uVar11 = CUserCharacInfo::getCurCharacNo
                             (*(CUserCharacInfo **)(this + local_24 * 0x18 + 0x78));
          iVar4 = *(int *)(this + local_24 * 0x18 + 0x80);
          uVar9 = CUser::GetUID(*(CUser **)(this + local_24 * 0x18 + 0x78));
          uVar10 = CUser::get_state(*(CUser **)(this + local_24 * 0x18 + 0x78));
          LogManager::logFormat
                    (1,"party.cpp","int CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)",0x5d8,
                     "User[%d] %x, ch_state %d, uid : %d / %d, charac_no : %u",local_24,
                     *(undefined4 *)(this + local_24 * 0x18 + 0x78),uVar10,uVar9,iVar4,uVar11);
        }
      }
    }
    CUser::SetPartyIndex(param_1,-1);
    CUserCharacInfo::set_charac_party_bonus_exp((CUserCharacInfo *)param_1,0);
    CUserCharacInfo::set_charac_member_bonus_exp((CUserCharacInfo *)param_1,0);
    CUserCharacInfo::set_charac_fatigue_buf_bonus_exp((CUserCharacInfo *)param_1,0);
    CUserCharacInfo::set_charac_seria_buf_bonus_exp((CUserCharacInfo *)param_1,0);
    iVar4 = CUser::getMoveSpace(param_1);
    if (iVar4 != 1) {
      CUser::set_state(param_1,3);
    }
    destroy(this);
    uVar9 = 0;
  }
  else {
    if (param_1 != (CUser *)0x0) {
      CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::reportHackInfo();
      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::resetHackInfo(pCVar8);
    }
    if (*(CUser **)(this + 0x74) == param_1) {
      change_manager(this);
      pGVar12 = (GameWorld *)G_GameWorld();
      GameWorld::send_party_info_to_all(pGVar12,this,param_3);
      send_party_realtime_info(this);
      uVar9 = checkInoutConditionDungeon(this);
      sendInoutConditionDungeon(this,uVar9);
      uVar9 = 0;
    }
    else {
      for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
        cVar2 = _checkValidUser(this,local_20);
        if ((cVar2 == '\x01') && (*(CUser **)(this + local_20 * 0x18 + 0x78) == param_1)) {
          *(undefined4 *)(this + local_20 * 0x18 + 0x78) = 0;
          *(undefined4 *)(this + local_20 * 0x18 + 0x80) = 0;
          CUser::SetPartyIndex(param_1,-1);
          CUserCharacInfo::set_charac_party_bonus_exp((CUserCharacInfo *)param_1,0);
          CUserCharacInfo::set_charac_member_bonus_exp((CUserCharacInfo *)param_1,0);
          CUserCharacInfo::set_charac_fatigue_buf_bonus_exp((CUserCharacInfo *)param_1,0);
          CUserCharacInfo::set_charac_seria_buf_bonus_exp((CUserCharacInfo *)param_1,0);
          iVar4 = CUser::getMoveSpace(param_1);
          if (iVar4 != 1) {
            CUser::set_state(param_1,3);
          }
          pGVar12 = (GameWorld *)G_GameWorld();
          GameWorld::send_party_info_to_all(pGVar12,this,param_3);
          send_party_realtime_info(this);
          uVar9 = checkInoutConditionDungeon(this);
          sendInoutConditionDungeon(this,uVar9);
          return 0;
        }
      }
      uVar9 = 1;
    }
  }
  return uVar9;
}
```
