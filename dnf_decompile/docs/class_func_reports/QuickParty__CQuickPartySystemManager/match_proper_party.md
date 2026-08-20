# match_proper_party

`_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser`

`QuickParty::CQuickPartySystemManager::match_proper_party(QuickParty::STQuickPartyPoolMap_Key const&, CParty*, CUser*)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x08269f3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269f3c  _ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser
#           QuickParty::CQuickPartySystemManager::match_proper_party(QuickParty::STQuickPartyPoolMap_Key const&, CParty*, CUser*)
# range [0x08269f3c, 0x0826a385]
08269f3c +0x000:  push   %ebp
08269f3d +0x001:  mov    %esp,%ebp
08269f3f +0x003:  push   %ebx
08269f40 +0x004:  sub    $0x74,%esp
08269f43 +0x007:  cmpl   $0x0,0x10(%ebp)
08269f47 +0x00b:  je     08269f59 <+0x1d>
08269f49 +0x00d:  mov    0x10(%ebp),%eax
08269f4c +0x010:  mov    %eax,(%esp)
08269f4f +0x013:  call   0822d928 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fd2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fd2
08269f54 +0x018:  cmp    $0xffffffff,%eax
08269f57 +0x01b:  je     08269f60 <+0x24>
08269f59 +0x01d:  mov    $0x1,%eax
08269f5e +0x022:  jmp    08269f65 <+0x29>
08269f60 +0x024:  mov    $0x0,%eax
08269f65 +0x029:  test   %al,%al
08269f67 +0x02b:  je     08269ffb <+0xbf>
08269f6d +0x031:  cmpl   $0x0,0x10(%ebp)
08269f71 +0x035:  jne    08269fb6 <+0x7a>
08269f73 +0x037:  cmpl   $0x0,0x14(%ebp)
08269f77 +0x03b:  je     08269fb6 <+0x7a>
08269f79 +0x03d:  mov    0x14(%ebp),%eax
08269f7c +0x040:  mov    %eax,(%esp)
08269f7f +0x043:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08269f84 +0x048:  mov    %eax,0x14(%esp)
08269f88 +0x04c:  movl   $"QUICK_PARTY_LOG : PARTY IS NULL!! (%d)",0x10(%esp)
08269f90 +0x054:  movl   $0x186,0xc(%esp)
08269f98 +0x05c:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08269fa0 +0x064:  movl   $"QuickParty.cpp",0x4(%esp)
08269fa8 +0x06c:  movl   $0x1,(%esp)
08269faf +0x073:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08269fb4 +0x078:  jmp    08269ff1 <+0xb5>
08269fb6 +0x07a:  mov    0x10(%ebp),%eax
08269fb9 +0x07d:  mov    %eax,(%esp)
08269fbc +0x080:  call   0822d928 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fd2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fd2
08269fc1 +0x085:  mov    %eax,0x14(%esp)
08269fc5 +0x089:  movl   $"QUICK_PARTY_LOG : ABNOMAL QUICK PARTY INDEX (%d)!!",0x10(%esp)
08269fcd +0x091:  movl   $0x188,0xc(%esp)
08269fd5 +0x099:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08269fdd +0x0a1:  movl   $"QuickParty.cpp",0x4(%esp)
08269fe5 +0x0a9:  movl   $0x1,(%esp)
08269fec +0x0b0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08269ff1 +0x0b5:  mov    $0x12,%eax
08269ff6 +0x0ba:  jmp    0826a380 <+0x444>
08269ffb +0x0bf:  mov    0x10(%ebp),%eax
08269ffe +0x0c2:  mov    %eax,0x8(%esp)
0826a002 +0x0c6:  mov    0xc(%ebp),%eax
0826a005 +0x0c9:  mov    %eax,0x4(%esp)
0826a009 +0x0cd:  mov    0x8(%ebp),%eax
0826a00c +0x0d0:  mov    %eax,(%esp)
0826a00f +0x0d3:  call   08269e34 <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty>  ; QuickParty::CQuickPartySystemManager::check_match_proper_party(QuickParty::STQuickPartyPoolMap_Key const&, CParty*)
0826a014 +0x0d8:  mov    %eax,-0x24(%ebp)
0826a017 +0x0db:  cmpl   $0x0,-0x24(%ebp)
0826a01b +0x0df:  je     0826a025 <+0xe9>
0826a01d +0x0e1:  mov    -0x24(%ebp),%eax
0826a020 +0x0e4:  jmp    0826a380 <+0x444>
0826a025 +0x0e9:  mov    0x10(%ebp),%eax
0826a028 +0x0ec:  mov    %eax,(%esp)
0826a02b +0x0ef:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0826a030 +0x0f4:  mov    %eax,-0x20(%ebp)
0826a033 +0x0f7:  mov    0xc(%ebp),%eax
0826a036 +0x0fa:  movzwl (%eax),%eax
0826a039 +0x0fd:  movswl %ax,%ebx
0826a03c +0x100:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0826a041 +0x105:  mov    %ebx,0x4(%esp)
0826a045 +0x109:  mov    %eax,(%esp)
0826a048 +0x10c:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
0826a04d +0x111:  mov    %eax,-0x1c(%ebp)
0826a050 +0x114:  cmpl   $0x0,-0x1c(%ebp)
0826a054 +0x118:  jne    0826a060 <+0x124>
0826a056 +0x11a:  mov    $0x1,%eax
0826a05b +0x11f:  jmp    0826a380 <+0x444>
0826a060 +0x124:  movl   $0x4,-0x18(%ebp)
0826a067 +0x12b:  mov    -0x1c(%ebp),%eax
0826a06a +0x12e:  mov    %eax,(%esp)
0826a06d +0x131:  call   0826b928 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1f6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1f6
0826a072 +0x136:  cmp    $0x2,%al
0826a074 +0x138:  sete   %al
0826a077 +0x13b:  test   %al,%al
0826a079 +0x13d:  je     0826a08c <+0x150>
0826a07b +0x13f:  mov    -0x1c(%ebp),%eax
0826a07e +0x142:  mov    %eax,(%esp)
0826a081 +0x145:  call   0822b4b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb5e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb5e
0826a086 +0x14a:  movsbl %al,%eax
0826a089 +0x14d:  mov    %eax,-0x18(%ebp)
0826a08c +0x150:  mov    0x8(%ebp),%edx
0826a08f +0x153:  lea    -0x4c(%ebp),%eax
0826a092 +0x156:  mov    0xc(%ebp),%ecx
0826a095 +0x159:  mov    %ecx,0x8(%esp)
0826a099 +0x15d:  mov    %edx,0x4(%esp)
0826a09d +0x161:  mov    %eax,(%esp)
0826a0a0 +0x164:  call   0826bc2c <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x4fa>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x4fa
0826a0a5 +0x169:  sub    $0x4,%esp
0826a0a8 +0x16c:  mov    0x8(%ebp),%edx
0826a0ab +0x16f:  lea    -0x48(%ebp),%eax
0826a0ae +0x172:  mov    %edx,0x4(%esp)
0826a0b2 +0x176:  mov    %eax,(%esp)
0826a0b5 +0x179:  call   0826bc58 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x526>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x526
0826a0ba +0x17e:  sub    $0x4,%esp
0826a0bd +0x181:  lea    -0x48(%ebp),%eax
0826a0c0 +0x184:  mov    %eax,0x4(%esp)
0826a0c4 +0x188:  lea    -0x4c(%ebp),%eax
0826a0c7 +0x18b:  mov    %eax,(%esp)
0826a0ca +0x18e:  call   0826bc7e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x54c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x54c
0826a0cf +0x193:  test   %al,%al
0826a0d1 +0x195:  je     0826a345 <+0x409>
0826a0d7 +0x19b:  mov    -0x20(%ebp),%eax
0826a0da +0x19e:  mov    -0x18(%ebp),%edx
0826a0dd +0x1a1:  mov    %edx,%ecx
0826a0df +0x1a3:  sub    %eax,%ecx
0826a0e1 +0x1a5:  mov    %ecx,%eax
0826a0e3 +0x1a7:  mov    %eax,-0x14(%ebp)
0826a0e6 +0x1aa:  jmp    0826a2e7 <+0x3ab>
0826a0eb +0x1af:  lea    -0x4c(%ebp),%eax
0826a0ee +0x1b2:  mov    %eax,(%esp)
0826a0f1 +0x1b5:  call   0826bc92 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x560>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x560
0826a0f6 +0x1ba:  mov    -0x14(%ebp),%edx
0826a0f9 +0x1bd:  shl    $0x3,%edx
0826a0fc +0x1c0:  add    %edx,%eax
0826a0fe +0x1c2:  add    $0x4,%eax
0826a101 +0x1c5:  mov    %eax,(%esp)
0826a104 +0x1c8:  call   08235b76 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb220>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb220
0826a109 +0x1cd:  test   %eax,%eax
0826a10b +0x1cf:  setne  %al
0826a10e +0x1d2:  test   %al,%al
0826a110 +0x1d4:  je     0826a2e3 <+0x3a7>
0826a116 +0x1da:  mov    -0x20(%ebp),%eax
0826a119 +0x1dd:  mov    -0x14(%ebp),%edx
0826a11c +0x1e0:  lea    (%edx,%eax,1),%eax
0826a11f +0x1e3:  cmp    -0x18(%ebp),%eax
0826a122 +0x1e6:  jne    0826a28e <+0x352>
0826a128 +0x1ec:  movl   $0x0,-0x10(%ebp)
0826a12f +0x1f3:  lea    -0x4c(%ebp),%eax
0826a132 +0x1f6:  mov    %eax,(%esp)
0826a135 +0x1f9:  call   0826bc92 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x560>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x560
0826a13a +0x1fe:  mov    -0x14(%ebp),%edx
0826a13d +0x201:  shl    $0x3,%edx
0826a140 +0x204:  add    %edx,%eax
0826a142 +0x206:  add    $0x4,%eax
0826a145 +0x209:  mov    %eax,0x4(%esp)
0826a149 +0x20d:  mov    0x8(%ebp),%eax
0826a14c +0x210:  mov    %eax,(%esp)
0826a14f +0x213:  call   0826a9fe <_ZN10QuickParty24CQuickPartySystemManager24find_quick_party_in_poolERSt4listIiSaIiEE>  ; QuickParty::CQuickPartySystemManager::find_quick_party_in_pool(std::list<int, std::allocator<int> >&)
0826a154 +0x218:  mov    %eax,-0x10(%ebp)
0826a157 +0x21b:  cmpl   $0x0,-0x10(%ebp)
0826a15b +0x21f:  je     0826a2e2 <+0x3a6>
0826a161 +0x225:  mov    0x10(%ebp),%eax
0826a164 +0x228:  mov    %eax,(%esp)
0826a167 +0x22b:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
0826a16c +0x230:  mov    %eax,0x4(%esp)
0826a170 +0x234:  mov    -0x10(%ebp),%eax
0826a173 +0x237:  mov    %eax,(%esp)
0826a176 +0x23a:  call   0826978c <_ZN10QuickParty11CQuickParty15set_party_indexEi>  ; QuickParty::CQuickParty::set_party_index(int)
0826a17b +0x23f:  mov    -0x10(%ebp),%eax
0826a17e +0x242:  mov    %eax,(%esp)
0826a181 +0x245:  call   082698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>  ; QuickParty::CQuickParty::get_quick_party_count()
0826a186 +0x24a:  mov    %eax,-0xc(%ebp)
0826a189 +0x24d:  mov    -0xc(%ebp),%eax
0826a18c +0x250:  cmp    -0x18(%ebp),%eax
0826a18f +0x253:  je     0826a272 <+0x336>
0826a195 +0x259:  mov    -0x10(%ebp),%eax
0826a198 +0x25c:  mov    %eax,(%esp)
0826a19b +0x25f:  call   0826b74e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1c
0826a1a0 +0x264:  mov    %eax,%ebx
0826a1a2 +0x266:  movl   $0x0,0xc(%esp)
0826a1aa +0x26e:  movl   $0x1b4,0x8(%esp)
0826a1b2 +0x276:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0826a1ba +0x27e:  lea    -0x44(%ebp),%eax
0826a1bd +0x281:  mov    %eax,(%esp)
0826a1c0 +0x284:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826a1c5 +0x289:  mov    -0xc(%ebp),%eax
0826a1c8 +0x28c:  mov    %eax,0xc(%esp)
0826a1cc +0x290:  mov    %ebx,0x8(%esp)
0826a1d0 +0x294:  movl   $"QUICK_PARTY_LOG : REPUSH QUICK PARTY IN POOL!! QUICK_PARTY_INDEX(%d), QUICK_PARTY_COUNT(%d)",0x4(%esp)
0826a1d8 +0x29c:  lea    -0x44(%ebp),%eax
0826a1db +0x29f:  mov    %eax,(%esp)
0826a1de +0x2a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826a1e3 +0x2a7:  lea    -0x4c(%ebp),%eax
0826a1e6 +0x2aa:  mov    %eax,(%esp)
0826a1e9 +0x2ad:  call   0826bc92 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x560>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x560
0826a1ee +0x2b2:  lea    0x4(%eax),%edx
0826a1f1 +0x2b5:  movl   $0x1,0x18(%esp)
0826a1f9 +0x2bd:  mov    -0x10(%ebp),%eax
0826a1fc +0x2c0:  mov    %eax,0x14(%esp)
0826a200 +0x2c4:  mov    -0xc(%ebp),%eax
0826a203 +0x2c7:  mov    %eax,0x10(%esp)
0826a207 +0x2cb:  mov    0x10(%ebp),%eax
0826a20a +0x2ce:  mov    %eax,0xc(%esp)
0826a20e +0x2d2:  mov    %edx,0x8(%esp)
0826a212 +0x2d6:  mov    0xc(%ebp),%eax
0826a215 +0x2d9:  mov    %eax,0x4(%esp)
0826a219 +0x2dd:  mov    0x8(%ebp),%eax
0826a21c +0x2e0:  mov    %eax,(%esp)
0826a21f +0x2e3:  call   0826afb4 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb>  ; QuickParty::CQuickPartySystemManager::push_quick_party_in_pool(QuickParty::STQuickPartyPoolMap_Key const&, QuickParty::STQuickPartyPoolMap_Data&, CParty*, int, QuickParty::CQuickParty*, bool)
0826a224 +0x2e8:  xor    $0x1,%eax
0826a227 +0x2eb:  test   %al,%al
0826a229 +0x2ed:  je     0826a268 <+0x32c>
0826a22b +0x2ef:  mov    -0xc(%ebp),%eax
0826a22e +0x2f2:  mov    %eax,0x14(%esp)
0826a232 +0x2f6:  movl   $"QUICK_PARTY_LOG : ABNOMAL QUICK PARTY!! (%d)",0x10(%esp)
0826a23a +0x2fe:  movl   $0x1bc,0xc(%esp)
0826a242 +0x306:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0826a24a +0x30e:  movl   $"QuickParty.cpp",0x4(%esp)
0826a252 +0x316:  movl   $0x1,(%esp)
0826a259 +0x31d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826a25e +0x322:  mov    $0x1,%eax
0826a263 +0x327:  jmp    0826a380 <+0x444>
0826a268 +0x32c:  mov    $0x0,%eax
0826a26d +0x331:  jmp    0826a380 <+0x444>
0826a272 +0x336:  mov    -0x10(%ebp),%eax
0826a275 +0x339:  mov    %eax,0x4(%esp)
0826a279 +0x33d:  mov    0x8(%ebp),%eax
0826a27c +0x340:  mov    %eax,(%esp)
0826a27f +0x343:  call   0826b58a <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE>  ; QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*)
0826a284 +0x348:  mov    $0x0,%eax
0826a289 +0x34d:  jmp    0826a380 <+0x444>
0826a28e +0x352:  lea    -0x4c(%ebp),%eax
0826a291 +0x355:  mov    %eax,(%esp)
0826a294 +0x358:  call   0826bc92 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x560>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x560
0826a299 +0x35d:  lea    0x4(%eax),%edx
0826a29c +0x360:  mov    -0x20(%ebp),%eax
0826a29f +0x363:  mov    %eax,0x14(%esp)
0826a2a3 +0x367:  mov    0x10(%ebp),%eax
0826a2a6 +0x36a:  mov    %eax,0x10(%esp)
0826a2aa +0x36e:  mov    -0x14(%ebp),%eax
0826a2ad +0x371:  mov    %eax,0xc(%esp)
0826a2b1 +0x375:  mov    %edx,0x8(%esp)
0826a2b5 +0x379:  mov    0xc(%ebp),%eax
0826a2b8 +0x37c:  mov    %eax,0x4(%esp)
0826a2bc +0x380:  mov    0x8(%ebp),%eax
0826a2bf +0x383:  mov    %eax,(%esp)
0826a2c2 +0x386:  call   0826adb6 <_ZN10QuickParty24CQuickPartySystemManager18regist_quick_partyERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEiP6CPartyi>  ; QuickParty::CQuickPartySystemManager::regist_quick_party(QuickParty::STQuickPartyPoolMap_Key const&, QuickParty::STQuickPartyPoolMap_Data&, int, CParty*, int)
0826a2c7 +0x38b:  xor    $0x1,%eax
0826a2ca +0x38e:  test   %al,%al
0826a2cc +0x390:  je     0826a2d8 <+0x39c>
0826a2ce +0x392:  mov    $0x1,%eax
0826a2d3 +0x397:  jmp    0826a380 <+0x444>
0826a2d8 +0x39c:  mov    $0x0,%eax
0826a2dd +0x3a1:  jmp    0826a380 <+0x444>
0826a2e2 +0x3a6:  nop
0826a2e3 +0x3a7:  subl   $0x1,-0x14(%ebp)
0826a2e7 +0x3ab:  cmpl   $0x0,-0x14(%ebp)
0826a2eb +0x3af:  setg   %al
0826a2ee +0x3b2:  test   %al,%al
0826a2f0 +0x3b4:  jne    0826a0eb <+0x1af>
0826a2f6 +0x3ba:  lea    -0x4c(%ebp),%eax
0826a2f9 +0x3bd:  mov    %eax,(%esp)
0826a2fc +0x3c0:  call   0826bc92 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x560>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x560
0826a301 +0x3c5:  lea    0x4(%eax),%edx
0826a304 +0x3c8:  mov    -0x20(%ebp),%eax
0826a307 +0x3cb:  mov    %eax,0x14(%esp)
0826a30b +0x3cf:  mov    0x10(%ebp),%eax
0826a30e +0x3d2:  mov    %eax,0x10(%esp)
0826a312 +0x3d6:  movl   $0x0,0xc(%esp)
0826a31a +0x3de:  mov    %edx,0x8(%esp)
0826a31e +0x3e2:  mov    0xc(%ebp),%eax
0826a321 +0x3e5:  mov    %eax,0x4(%esp)
0826a325 +0x3e9:  mov    0x8(%ebp),%eax
0826a328 +0x3ec:  mov    %eax,(%esp)
0826a32b +0x3ef:  call   0826adb6 <_ZN10QuickParty24CQuickPartySystemManager18regist_quick_partyERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEiP6CPartyi>  ; QuickParty::CQuickPartySystemManager::regist_quick_party(QuickParty::STQuickPartyPoolMap_Key const&, QuickParty::STQuickPartyPoolMap_Data&, int, CParty*, int)
0826a330 +0x3f4:  xor    $0x1,%eax
0826a333 +0x3f7:  test   %al,%al
0826a335 +0x3f9:  je     0826a33e <+0x402>
0826a337 +0x3fb:  mov    $0x1,%eax
0826a33c +0x400:  jmp    0826a380 <+0x444>
0826a33e +0x402:  mov    $0x0,%eax
0826a343 +0x407:  jmp    0826a380 <+0x444>
0826a345 +0x409:  movl   $0x5,0xc(%esp)
0826a34d +0x411:  movl   $0x1d6,0x8(%esp)
0826a355 +0x419:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0826a35d +0x421:  lea    -0x34(%ebp),%eax
0826a360 +0x424:  mov    %eax,(%esp)
0826a363 +0x427:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826a368 +0x42c:  movl   $"QUICK_PARTY_LOG : NO EXIST KEY DATA!!",0x4(%esp)
0826a370 +0x434:  lea    -0x34(%ebp),%eax
0826a373 +0x437:  mov    %eax,(%esp)
0826a376 +0x43a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826a37b +0x43f:  mov    $0x1,%eax
0826a380 +0x444:  mov    -0x4(%ebp),%ebx
0826a383 +0x447:  leave
0826a384 +0x448:  ret
0826a385 +0x449:  nop
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::match_proper_party @ 0x8269f3c

/* QuickParty::CQuickPartySystemManager::match_proper_party(QuickParty::STQuickPartyPoolMap_Key
   const&, CParty*, CUser*) */

int __thiscall
QuickParty::CQuickPartySystemManager::match_proper_party
          (CQuickPartySystemManager *this,STQuickPartyPoolMap_Key *param_1,CParty *param_2,
          CUser *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  STQuickPartyPoolMap_Key local_50 [4];
  map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
  local_4c [4];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  int local_28;
  int local_24;
  CDungeon *local_20;
  int local_1c;
  int local_18;
  CQuickParty *local_14;
  int local_10;
  
  if ((param_2 == (CParty *)0x0) || (iVar3 = CParty::get_quick_party_index(param_2), iVar3 != -1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if ((param_2 == (CParty *)0x0) && (param_3 != (CUser *)0x0)) {
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_3);
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "ENUM_ERROR QuickParty::CQuickPartySystemManager::match_proper_party(const QuickParty::STQuickPartyPoolMap_Key&, CParty*, CUser*)"
                 ,0x186,"QUICK_PARTY_LOG : PARTY IS NULL!! (%d)",uVar4);
    }
    else {
      uVar4 = CParty::get_quick_party_index(param_2);
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "ENUM_ERROR QuickParty::CQuickPartySystemManager::match_proper_party(const QuickParty::STQuickPartyPoolMap_Key&, CParty*, CUser*)"
                 ,0x188,"QUICK_PARTY_LOG : ABNOMAL QUICK PARTY INDEX (%d)!!",uVar4);
    }
    local_28 = 0x12;
  }
  else {
    local_28 = check_match_proper_party(this,param_1,param_2);
    if (local_28 == 0) {
      local_24 = CParty::get_member_count(param_2);
      iVar3 = G_CDataManager();
      local_20 = (CDungeon *)CDataManager::find_dungeon(iVar3);
      if (local_20 == (CDungeon *)0x0) {
        local_28 = 1;
      }
      else {
        local_1c = 4;
        cVar2 = CDungeon::get_blood_dungeon_type(local_20);
        if (cVar2 == '\x02') {
          cVar2 = CDungeon::get_limit_party_count(local_20);
          local_1c = (int)cVar2;
        }
        std::
        map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
        ::find(local_50);
        std::
        map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
        ::end(local_4c);
        cVar2 = std::
                _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                ::operator!=((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                              *)local_50,(_Rb_tree_iterator *)local_4c);
        if (cVar2 == '\0') {
          cMyTrace::cMyTrace(local_38,
                             "ENUM_ERROR QuickParty::CQuickPartySystemManager::match_proper_party(const QuickParty::STQuickPartyPoolMap_Key&, CParty*, CUser*)"
                             ,0x1d6,5);
          cMyTrace::operator()(local_38,"QUICK_PARTY_LOG : NO EXIST KEY DATA!!");
          local_28 = 1;
        }
        else {
          for (local_18 = local_1c - local_24; 0 < local_18; local_18 = local_18 + -1) {
            std::
            _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
            ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                          *)local_50);
            iVar3 = std::list<int,std::allocator<int>>::size();
            if (iVar3 != 0) {
              if (local_18 + local_24 != local_1c) {
                iVar3 = std::
                        _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                        ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                                      *)local_50);
                cVar2 = regist_quick_party(this,param_1,(STQuickPartyPoolMap_Data *)(iVar3 + 4),
                                           local_18,param_2,local_24);
                if (cVar2 != '\x01') {
                  return 1;
                }
                return 0;
              }
              local_14 = (CQuickParty *)0x0;
              iVar3 = std::
                      _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                      ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                                    *)local_50);
              local_14 = (CQuickParty *)
                         find_quick_party_in_pool(this,(list *)(iVar3 + local_18 * 8 + 4));
              if (local_14 != (CQuickParty *)0x0) {
                iVar3 = CParty::GetPartyIndex(param_2);
                CQuickParty::set_party_index(local_14,iVar3);
                local_10 = CQuickParty::get_quick_party_count(local_14);
                if (local_10 == local_1c) {
                  start_game(this,local_14);
                  return 0;
                }
                uVar4 = CQuickParty::get_quick_party_index(local_14);
                cMyTrace::cMyTrace(local_48,
                                   "ENUM_ERROR QuickParty::CQuickPartySystemManager::match_proper_party(const QuickParty::STQuickPartyPoolMap_Key&, CParty*, CUser*)"
                                   ,0x1b4,0);
                cMyTrace::operator()
                          (local_48,
                           "QUICK_PARTY_LOG : REPUSH QUICK PARTY IN POOL!! QUICK_PARTY_INDEX(%d), QUICK_PARTY_COUNT(%d)"
                           ,uVar4,local_10);
                iVar3 = std::
                        _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                        ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                                      *)local_50);
                cVar2 = push_quick_party_in_pool
                                  (this,param_1,(STQuickPartyPoolMap_Data *)(iVar3 + 4),param_2,
                                   local_10,local_14,true);
                if (cVar2 != '\x01') {
                  LogManager::logFormat
                            (1,"QuickParty.cpp",
                             "ENUM_ERROR QuickParty::CQuickPartySystemManager::match_proper_party(const QuickParty::STQuickPartyPoolMap_Key&, CParty*, CUser*)"
                             ,0x1bc,"QUICK_PARTY_LOG : ABNOMAL QUICK PARTY!! (%d)",local_10);
                  return 1;
                }
                return 0;
              }
            }
          }
          iVar3 = std::
                  _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                  ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                                *)local_50);
          cVar2 = regist_quick_party(this,param_1,(STQuickPartyPoolMap_Data *)(iVar3 + 4),0,param_2,
                                     local_24);
          if (cVar2 == '\x01') {
            local_28 = 0;
          }
          else {
            local_28 = 1;
          }
        }
      }
    }
  }
  return local_28;
}
```
