# CUser

`_ZN5CUserC1Ev`

`CUser::CUser()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864e410` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e410  _ZN5CUserC1Ev
#           CUser::CUser()
# range [0x0864e410, 0x0864ef97]
0864e410 +0x000:  push   %ebp
0864e411 +0x001:  mov    %esp,%ebp
0864e413 +0x003:  push   %edi
0864e414 +0x004:  push   %esi
0864e415 +0x005:  push   %ebx
0864e416 +0x006:  sub    $0x2c,%esp
0864e419 +0x009:  mov    0x8(%ebp),%eax
0864e41c +0x00c:  mov    %eax,(%esp)
0864e41f +0x00f:  call   0864e15e <_ZN15CUserCharacInfoC1Ev>  ; CUserCharacInfo::CUserCharacInfo()
0864e424 +0x014:  mov    0x8(%ebp),%eax
0864e427 +0x017:  add    $0xe0,%eax
0864e42c +0x01c:  mov    %eax,(%esp)
0864e42f +0x01f:  call   08698cba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x550f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x550f
0864e434 +0x024:  mov    0x8(%ebp),%eax
0864e437 +0x027:  add    $0x6ef6c,%eax
0864e43c +0x02c:  mov    %eax,(%esp)
0864e43f +0x02f:  call   08697b3a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x438f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x438f
0864e444 +0x034:  mov    0x8(%ebp),%eax
0864e447 +0x037:  add    $0x6ef78,%eax
0864e44c +0x03c:  mov    %eax,(%esp)
0864e44f +0x03f:  call   08698de2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5637>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5637
0864e454 +0x044:  mov    0x8(%ebp),%eax
0864e457 +0x047:  add    $0x6effc,%eax
0864e45c +0x04c:  mov    %eax,(%esp)
0864e45f +0x04f:  call   08289794 <_ZN13CAccountCargoC1Ev>  ; CAccountCargo::CAccountCargo()
0864e464 +0x054:  mov    0x8(%ebp),%eax
0864e467 +0x057:  add    $0x6fd64,%eax
0864e46c +0x05c:  mov    %eax,(%esp)
0864e46f +0x05f:  call   084b6c58 <_ZN11CGameOptionC1Ev>  ; CGameOption::CGameOption()
0864e474 +0x064:  mov    0x8(%ebp),%eax
0864e477 +0x067:  add    $0x703c4,%eax
0864e47c +0x06c:  mov    %eax,(%esp)
0864e47f +0x06f:  call   0831d4ca <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x283>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x283
0864e484 +0x074:  mov    0x8(%ebp),%eax
0864e487 +0x077:  add    $0x703db,%eax
0864e48c +0x07c:  mov    %eax,%ebx
0864e48e +0x07e:  mov    $0x31,%esi
0864e493 +0x083:  jmp    0864e4a3 <+0x93>
0864e495 +0x085:  mov    %ebx,(%esp)
0864e498 +0x088:  call   0822da04 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x30ae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x30ae
0864e49d +0x08d:  add    $0x4,%ebx
0864e4a0 +0x090:  sub    $0x1,%esi
0864e4a3 +0x093:  cmp    $0xffffffff,%esi
0864e4a6 +0x096:  setne  %al
0864e4a9 +0x099:  test   %al,%al
0864e4ab +0x09b:  jne    0864e495 <+0x85>
0864e4ad +0x09d:  mov    0x8(%ebp),%eax
0864e4b0 +0x0a0:  movw   $0x0,0x704a8(%eax)
0864e4b9 +0x0a9:  mov    0x8(%ebp),%eax
0864e4bc +0x0ac:  add    $0x705dc,%eax
0864e4c1 +0x0b1:  mov    %eax,(%esp)
0864e4c4 +0x0b4:  call   0822b8b0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xf5a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xf5a
0864e4c9 +0x0b9:  mov    0x8(%ebp),%eax
0864e4cc +0x0bc:  add    $0x711ec,%eax
0864e4d1 +0x0c1:  mov    %eax,(%esp)
0864e4d4 +0x0c4:  call   082357d6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae80>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae80
0864e4d9 +0x0c9:  mov    0x8(%ebp),%eax
0864e4dc +0x0cc:  add    $0x711f4,%eax
0864e4e1 +0x0d1:  mov    %eax,(%esp)
0864e4e4 +0x0d4:  call   08696fe0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3835>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3835
0864e4e9 +0x0d9:  mov    0x8(%ebp),%eax
0864e4ec +0x0dc:  add    $0x7121c,%eax
0864e4f1 +0x0e1:  mov    %eax,(%esp)
0864e4f4 +0x0e4:  call   08694b0e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1363>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1363
0864e4f9 +0x0e9:  mov    0x8(%ebp),%eax
0864e4fc +0x0ec:  add    $0x71bac,%eax
0864e501 +0x0f1:  mov    %eax,(%esp)
0864e504 +0x0f4:  call   086950d2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1927>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1927
0864e509 +0x0f9:  mov    0x8(%ebp),%eax
0864e50c +0x0fc:  add    $0x795e8,%eax
0864e511 +0x101:  mov    %eax,(%esp)
0864e514 +0x104:  call   08695aa4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x22f9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x22f9
0864e519 +0x109:  mov    0x8(%ebp),%eax
0864e51c +0x10c:  add    $0x795fc,%eax
0864e521 +0x111:  mov    %eax,(%esp)
0864e524 +0x114:  call   08575c22 <_ZN20CodeHackCheckStorageC1Ev>  ; CodeHackCheckStorage::CodeHackCheckStorage()
0864e529 +0x119:  mov    0x8(%ebp),%eax
0864e52c +0x11c:  lea    0x79664(%eax),%esi
0864e532 +0x122:  mov    %esi,%edi
0864e534 +0x124:  mov    $0x1,%ebx
0864e539 +0x129:  jmp    0864e549 <+0x139>
0864e53b +0x12b:  mov    %edi,(%esp)
0864e53e +0x12e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0864e543 +0x133:  add    $0x4,%edi
0864e546 +0x136:  sub    $0x1,%ebx
0864e549 +0x139:  cmp    $0xffffffff,%ebx
0864e54c +0x13c:  setne  %al
0864e54f +0x13f:  test   %al,%al
0864e551 +0x141:  jne    0864e53b <+0x12b>
0864e553 +0x143:  jmp    0864e586 <+0x176>
0864e555 +0x145:  mov    %edx,%edi
0864e557 +0x147:  mov    %eax,-0x1c(%ebp)
0864e55a +0x14a:  test   %esi,%esi
0864e55c +0x14c:  je     0864e57c <+0x16c>
0864e55e +0x14e:  mov    $0x1,%eax
0864e563 +0x153:  sub    %ebx,%eax
0864e565 +0x155:  shl    $0x2,%eax
0864e568 +0x158:  lea    (%esi,%eax,1),%ebx
0864e56b +0x15b:  cmp    %esi,%ebx
0864e56d +0x15d:  je     0864e57c <+0x16c>
0864e56f +0x15f:  sub    $0x4,%ebx
0864e572 +0x162:  mov    %ebx,(%esp)
0864e575 +0x165:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0864e57a +0x16a:  jmp    0864e56b <+0x15b>
0864e57c +0x16c:  mov    -0x1c(%ebp),%eax
0864e57f +0x16f:  mov    %edi,%edx
0864e581 +0x171:  jmp    0864ee9d <+0xa8d>
0864e586 +0x176:  mov    0x8(%ebp),%eax
0864e589 +0x179:  movl   $0x0,0x79670(%eax)
0864e593 +0x183:  mov    0x8(%ebp),%eax
0864e596 +0x186:  add    $0x79674,%eax
0864e59b +0x18b:  mov    %eax,%ebx
0864e59d +0x18d:  mov    $0x6,%esi
0864e5a2 +0x192:  jmp    0864e5b2 <+0x1a2>
0864e5a4 +0x194:  mov    %ebx,(%esp)
0864e5a7 +0x197:  call   0869714c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x39a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x39a1
0864e5ac +0x19c:  add    $0xc,%ebx
0864e5af +0x19f:  sub    $0x1,%esi
0864e5b2 +0x1a2:  cmp    $0xffffffff,%esi
0864e5b5 +0x1a5:  setne  %al
0864e5b8 +0x1a8:  test   %al,%al
0864e5ba +0x1aa:  jne    0864e5a4 <+0x194>
0864e5bc +0x1ac:  mov    0x8(%ebp),%eax
0864e5bf +0x1af:  movb   $0x0,0x796d8(%eax)
0864e5c6 +0x1b6:  mov    0x8(%ebp),%eax
0864e5c9 +0x1b9:  add    $0x796e8,%eax
0864e5ce +0x1be:  mov    %eax,(%esp)
0864e5d1 +0x1c1:  call   08698e5c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x56b1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x56b1
0864e5d6 +0x1c6:  mov    0x8(%ebp),%eax
0864e5d9 +0x1c9:  add    $0x796f4,%eax
0864e5de +0x1ce:  mov    %eax,(%esp)
0864e5e1 +0x1d1:  call   08697038 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x388d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x388d
0864e5e6 +0x1d6:  mov    0x8(%ebp),%eax
0864e5e9 +0x1d9:  add    $0x79700,%eax
0864e5ee +0x1de:  mov    %eax,(%esp)
0864e5f1 +0x1e1:  call   08695fe4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2839>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2839
0864e5f6 +0x1e6:  mov    0x8(%ebp),%eax
0864e5f9 +0x1e9:  add    $0x79744,%eax
0864e5fe +0x1ee:  mov    %eax,(%esp)
0864e601 +0x1f1:  call   0832a778 <_ZN13charac_expand8CDataMgrC1Ev>  ; charac_expand::CDataMgr::CDataMgr()
0864e606 +0x1f6:  mov    0x8(%ebp),%eax
0864e609 +0x1f9:  add    $0x79794,%eax
0864e60e +0x1fe:  mov    %eax,(%esp)
0864e611 +0x201:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
0864e616 +0x206:  mov    0x8(%ebp),%eax
0864e619 +0x209:  add    $0x858d4,%eax
0864e61e +0x20e:  mov    %eax,(%esp)
0864e621 +0x211:  call   08697b8a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x43df>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x43df
0864e626 +0x216:  mov    0x8(%ebp),%eax
0864e629 +0x219:  add    $0x8cef4,%eax
0864e62e +0x21e:  mov    %eax,(%esp)
0864e631 +0x221:  call   080e247e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x224>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x224
0864e636 +0x226:  mov    0x8(%ebp),%eax
0864e639 +0x229:  add    $0x8cf64,%eax
0864e63e +0x22e:  mov    %eax,(%esp)
0864e641 +0x231:  call   0869705c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x38b1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x38b1
0864e646 +0x236:  mov    0x8(%ebp),%eax
0864e649 +0x239:  add    $0x8cf68,%eax
0864e64e +0x23e:  mov    %eax,(%esp)
0864e651 +0x241:  call   08698ece <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5723>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5723
0864e656 +0x246:  mov    0x8(%ebp),%eax
0864e659 +0x249:  add    $0x8cf74,%eax
0864e65e +0x24e:  mov    %eax,(%esp)
0864e661 +0x251:  call   08698f40 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5795>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5795
0864e666 +0x256:  mov    0x8(%ebp),%eax
0864e669 +0x259:  add    $0x8cf80,%eax
0864e66e +0x25e:  mov    %eax,(%esp)
0864e671 +0x261:  call   082357d6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae80>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae80
0864e676 +0x266:  mov    0x8(%ebp),%eax
0864e679 +0x269:  add    $0x8cf88,%eax
0864e67e +0x26e:  mov    %eax,(%esp)
0864e681 +0x271:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
0864e686 +0x276:  mov    0x8(%ebp),%eax
0864e689 +0x279:  add    $0x8cfa0,%eax
0864e68e +0x27e:  mov    %eax,(%esp)
0864e691 +0x281:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
0864e696 +0x286:  mov    0x8(%ebp),%eax
0864e699 +0x289:  movl   $0x0,0x8cfc4(%eax)
0864e6a3 +0x293:  mov    0x8(%ebp),%eax
0864e6a6 +0x296:  add    $0x8cfe4,%eax
0864e6ab +0x29b:  mov    %eax,(%esp)
0864e6ae +0x29e:  call   081ab6de <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x30>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x30
0864e6b3 +0x2a3:  mov    0x8(%ebp),%eax
0864e6b6 +0x2a6:  add    $0x8d020,%eax
0864e6bb +0x2ab:  mov    %eax,(%esp)
0864e6be +0x2ae:  call   08693f56 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7ab>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7ab
0864e6c3 +0x2b3:  mov    0x8(%ebp),%eax
0864e6c6 +0x2b6:  add    $0x8d0dd,%eax
0864e6cb +0x2bb:  mov    %eax,(%esp)
0864e6ce +0x2be:  call   086940c6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x91b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x91b
0864e6d3 +0x2c3:  mov    0x8(%ebp),%eax
0864e6d6 +0x2c6:  add    $0x8d0e4,%eax
0864e6db +0x2cb:  mov    %eax,(%esp)
0864e6de +0x2ce:  call   08147b5c <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x4f>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x4f
0864e6e3 +0x2d3:  mov    0x8(%ebp),%eax
0864e6e6 +0x2d6:  add    $0x8d114,%eax
0864e6eb +0x2db:  mov    %eax,(%esp)
0864e6ee +0x2de:  call   086959c4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2219>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2219
0864e6f3 +0x2e3:  mov    0x8(%ebp),%eax
0864e6f6 +0x2e6:  add    $0x8d160,%eax
0864e6fb +0x2eb:  mov    %eax,(%esp)
0864e6fe +0x2ee:  call   086959d0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2225>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2225
0864e703 +0x2f3:  mov    0x8(%ebp),%eax
0864e706 +0x2f6:  add    $0x8d1b8,%eax
0864e70b +0x2fb:  mov    %eax,(%esp)
0864e70e +0x2fe:  call   08698fb2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5807>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5807
0864e713 +0x303:  mov    0x8(%ebp),%eax
0864e716 +0x306:  add    $0x8d1c4,%eax
0864e71b +0x30b:  mov    %eax,(%esp)
0864e71e +0x30e:  call   08698fb2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5807>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5807
0864e723 +0x313:  mov    0x8(%ebp),%eax
0864e726 +0x316:  add    $0x8d1d0,%eax
0864e72b +0x31b:  mov    %eax,(%esp)
0864e72e +0x31e:  call   08699024 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5879>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5879
0864e733 +0x323:  mov    0x8(%ebp),%eax
0864e736 +0x326:  add    $0x8d1e4,%eax
0864e73b +0x32b:  mov    %eax,(%esp)
0864e73e +0x32e:  call   08695b20 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2375>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2375
0864e743 +0x333:  mov    0x8(%ebp),%eax
0864e746 +0x336:  add    $0x8d24d,%eax
0864e74b +0x33b:  mov    %eax,(%esp)
0864e74e +0x33e:  call   085bed52 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x2b0>  ; global constructors keyed to CParty::cMember::cMember()+0x2b0
0864e753 +0x343:  mov    0x8(%ebp),%eax
0864e756 +0x346:  add    $0x8d264,%eax
0864e75b +0x34b:  mov    %eax,(%esp)
0864e75e +0x34e:  call   08694bd0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1425>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1425
0864e763 +0x353:  mov    0x8(%ebp),%eax
0864e766 +0x356:  add    $0x8df60,%eax
0864e76b +0x35b:  mov    %eax,(%esp)
0864e76e +0x35e:  call   0813119e <_ZN12advancealtar25CharacAdvanceAltarManagerC1Ev>  ; advancealtar::CharacAdvanceAltarManager::CharacAdvanceAltarManager()
0864e773 +0x363:  mov    0x8(%ebp),%eax
0864e776 +0x366:  add    $0x8e034,%eax
0864e77b +0x36b:  mov    %eax,(%esp)
0864e77e +0x36e:  call   0848683c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x276>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x276
0864e783 +0x373:  mov    0x8(%ebp),%eax
0864e786 +0x376:  add    $0x8e080,%eax
0864e78b +0x37b:  mov    %eax,(%esp)
0864e78e +0x37e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0864e793 +0x383:  mov    0x8(%ebp),%eax
0864e796 +0x386:  add    $0x8e3f0,%eax
0864e79b +0x38b:  mov    %eax,(%esp)
0864e79e +0x38e:  call   08695068 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x18bd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x18bd
0864e7a3 +0x393:  mov    0x8(%ebp),%eax
0864e7a6 +0x396:  add    $0x8e954,%eax
0864e7ab +0x39b:  mov    %eax,(%esp)
0864e7ae +0x39e:  call   08697bc6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x441b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x441b
0864e7b3 +0x3a3:  mov    0x8(%ebp),%eax
0864e7b6 +0x3a6:  add    $0x8e980,%eax
0864e7bb +0x3ab:  mov    %eax,(%esp)
0864e7be +0x3ae:  call   08694f68 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x17bd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x17bd
0864e7c3 +0x3b3:  mov    0x8(%ebp),%eax
0864e7c6 +0x3b6:  add    $0x8ea68,%eax
0864e7cb +0x3bb:  mov    %eax,(%esp)
0864e7ce +0x3be:  call   08695ad0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2325>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2325
0864e7d3 +0x3c3:  mov    0x8(%ebp),%eax
0864e7d6 +0x3c6:  add    $0x8eaa4,%eax
0864e7db +0x3cb:  mov    %eax,(%esp)
0864e7de +0x3ce:  call   086990aa <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x58ff>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x58ff
0864e7e3 +0x3d3:  mov    0x8(%ebp),%eax
0864e7e6 +0x3d6:  add    $0x8eabc,%eax
0864e7eb +0x3db:  mov    %eax,(%esp)
0864e7ee +0x3de:  call   08699124 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5979>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5979
0864e7f3 +0x3e3:  mov    0x8(%ebp),%eax
0864e7f6 +0x3e6:  add    $0x8eae4,%eax
0864e7fb +0x3eb:  mov    %eax,(%esp)
0864e7fe +0x3ee:  call   0808bf68 <_ZN17PIReceiverManagerC1Ev>  ; PIReceiverManager::PIReceiverManager()
0864e803 +0x3f3:  mov    0x8(%ebp),%eax
0864e806 +0x3f6:  add    $0x8eaec,%eax
0864e80b +0x3fb:  mov    %eax,(%esp)
0864e80e +0x3fe:  call   0808be58 <_ZN15PISenderManagerC1Ev>  ; PISenderManager::PISenderManager()
0864e813 +0x403:  mov    0x8(%ebp),%eax
0864e816 +0x406:  add    $0x8eb00,%eax
0864e81b +0x40b:  mov    %eax,(%esp)
0864e81e +0x40e:  call   0869919e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x59f3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x59f3
0864e823 +0x413:  mov    0x8(%ebp),%eax
0864e826 +0x416:  add    $0x8eb50,%eax
0864e82b +0x41b:  mov    %eax,(%esp)
0864e82e +0x41e:  call   083855c8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x15068>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x15068
0864e833 +0x423:  mov    0x8(%ebp),%eax
0864e836 +0x426:  add    $0x8eb68,%eax
0864e83b +0x42b:  mov    %eax,(%esp)
0864e83e +0x42e:  call   081b5ca6 <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x49>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x49
0864e843 +0x433:  mov    0x8(%ebp),%eax
0864e846 +0x436:  add    $0x8eb80,%eax
0864e84b +0x43b:  mov    %eax,(%esp)
0864e84e +0x43e:  call   08381c06 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x116a6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x116a6
0864e853 +0x443:  mov    0x8(%ebp),%eax
0864e856 +0x446:  add    $0x8ebc4,%eax
0864e85b +0x44b:  mov    %eax,(%esp)
0864e85e +0x44e:  call   080e4d12 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x38>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x38
0864e863 +0x453:  mov    0x8(%ebp),%eax
0864e866 +0x456:  add    $0x8ebdc,%eax
0864e86b +0x45b:  mov    %eax,(%esp)
0864e86e +0x45e:  call   08697128 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x397d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x397d
0864e873 +0x463:  mov    0x8(%ebp),%eax
0864e876 +0x466:  add    $0x8ebe4,%eax
0864e87b +0x46b:  mov    %eax,(%esp)
0864e87e +0x46e:  call   08697068 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x38bd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x38bd
0864e883 +0x473:  mov    0x8(%ebp),%eax
0864e886 +0x476:  add    $0x8ebf8,%eax
0864e88b +0x47b:  mov    %eax,(%esp)
0864e88e +0x47e:  call   086970a4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x38f9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x38f9
0864e893 +0x483:  mov    0x8(%ebp),%eax
0864e896 +0x486:  add    $0x8ec04,%eax
0864e89b +0x48b:  mov    %eax,(%esp)
0864e89e +0x48e:  call   086970e6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x393b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x393b
0864e8a3 +0x493:  mov    0x8(%ebp),%eax
0864e8a6 +0x496:  movl   $0x0,0x8ec24(%eax)
0864e8b0 +0x4a0:  mov    0x8(%ebp),%eax
0864e8b3 +0x4a3:  movl   $0x0,0x8ec2c(%eax)
0864e8bd +0x4ad:  mov    0x8(%ebp),%eax
0864e8c0 +0x4b0:  movl   $0x0,0x71b98(%eax)
0864e8ca +0x4ba:  mov    0x8(%ebp),%eax
0864e8cd +0x4bd:  movb   $0x0,0x796d9(%eax)
0864e8d4 +0x4c4:  mov    0x8(%ebp),%eax
0864e8d7 +0x4c7:  movl   $0x12c,0x8cfd0(%eax)
0864e8e1 +0x4d1:  mov    0x8(%ebp),%eax
0864e8e4 +0x4d4:  movl   $0x0,0x8cfd4(%eax)
0864e8ee +0x4de:  mov    0x8(%ebp),%eax
0864e8f1 +0x4e1:  movl   $0x0,0x8cfd8(%eax)
0864e8fb +0x4eb:  movl   $0xffffffff,0x4(%esp)
0864e903 +0x4f3:  mov    0x8(%ebp),%eax
0864e906 +0x4f6:  mov    %eax,(%esp)
0864e909 +0x4f9:  call   084ec87a <_GLOBAL__I__Z7getUserj+0x382c>  ; global constructors keyed to getUser(unsigned int)+0x382c
0864e90e +0x4fe:  movl   $0x0,0x4(%esp)
0864e916 +0x506:  mov    0x8(%ebp),%eax
0864e919 +0x509:  mov    %eax,(%esp)
0864e91c +0x50c:  call   084ec89a <_GLOBAL__I__Z7getUserj+0x384c>  ; global constructors keyed to getUser(unsigned int)+0x384c
0864e921 +0x511:  mov    0x8(%ebp),%eax
0864e924 +0x514:  movl   $0x0,0x8e474(%eax)
0864e92e +0x51e:  mov    0x8(%ebp),%eax
0864e931 +0x521:  movl   $0x0,0x8e480(%eax)
0864e93b +0x52b:  mov    0x8(%ebp),%eax
0864e93e +0x52e:  movl   $0x0,0x79650(%eax)
0864e948 +0x538:  mov    0x8(%ebp),%eax
0864e94b +0x53b:  movl   $0x0,0x796f8(%eax)
0864e955 +0x545:  mov    0x8(%ebp),%eax
0864e958 +0x548:  mov    %eax,(%esp)
0864e95b +0x54b:  call   08658030 <_ZN5CUser5resetEv>  ; CUser::reset()
0864e960 +0x550:  mov    0x8(%ebp),%eax
0864e963 +0x553:  lea    0x79700(%eax),%edx
0864e969 +0x559:  mov    0x8(%ebp),%eax
0864e96c +0x55c:  mov    %eax,0x4(%esp)
0864e970 +0x560:  mov    %edx,(%esp)
0864e973 +0x563:  call   08695ff2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2847>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2847
0864e978 +0x568:  mov    0x8(%ebp),%eax
0864e97b +0x56b:  movl   $0x0,0x705d8(%eax)
0864e985 +0x575:  mov    0x8(%ebp),%eax
0864e988 +0x578:  movl   $0x0,0x8e094(%eax)
0864e992 +0x582:  mov    0x8(%ebp),%eax
0864e995 +0x585:  mov    %eax,(%esp)
0864e998 +0x588:  call   08697516 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3d6b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3d6b
0864e99d +0x58d:  call   0808ca12 <_Z34_NS_PI_2ND_GetDefaultRandomHashKeyv>  ; _NS_PI_2ND_GetDefaultRandomHashKey()
0864e9a2 +0x592:  mov    0x8(%ebp),%edx
0864e9a5 +0x595:  mov    %al,0x8eafc(%edx)
0864e9ab +0x59b:  call   0808ca12 <_Z34_NS_PI_2ND_GetDefaultRandomHashKeyv>  ; _NS_PI_2ND_GetDefaultRandomHashKey()
0864e9b0 +0x5a0:  mov    0x8(%ebp),%edx
0864e9b3 +0x5a3:  mov    %al,0x8eb18(%edx)
0864e9b9 +0x5a9:  mov    0x8(%ebp),%eax
0864e9bc +0x5ac:  add    $0x6effc,%eax
0864e9c1 +0x5b1:  mov    %eax,(%esp)
0864e9c4 +0x5b4:  call   0828986c <_ZN13CAccountCargo5ClearEv>  ; CAccountCargo::Clear()
0864e9c9 +0x5b9:  mov    0x8(%ebp),%eax
0864e9cc +0x5bc:  movl   $0x0,0x8eb1c(%eax)
0864e9d6 +0x5c6:  mov    0x8(%ebp),%eax
0864e9d9 +0x5c9:  mov    %eax,(%esp)
0864e9dc +0x5cc:  call   08697526 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3d7b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3d7b
0864e9e1 +0x5d1:  mov    0x8(%ebp),%eax
0864e9e4 +0x5d4:  movb   $0x0,0x8eb44(%eax)
0864e9eb +0x5db:  mov    0x8(%ebp),%eax
0864e9ee +0x5de:  movl   $0x0,0x8eb48(%eax)
0864e9f8 +0x5e8:  mov    0x8(%ebp),%eax
0864e9fb +0x5eb:  movb   $0x0,0x8eb99(%eax)
0864ea02 +0x5f2:  mov    0x8(%ebp),%eax
0864ea05 +0x5f5:  mov    %eax,(%esp)
0864ea08 +0x5f8:  call   0868f8d8 <_ZN5CUser21resetInformNoticeFlagEv>  ; CUser::resetInformNoticeFlag()
0864ea0d +0x5fd:  mov    0x8(%ebp),%eax
0864ea10 +0x600:  mov    %eax,(%esp)
0864ea13 +0x603:  call   0868fa66 <_ZN5CUser27disableSaveInformNoticeFlagEv>  ; CUser::disableSaveInformNoticeFlag()
0864ea18 +0x608:  mov    0x8(%ebp),%eax
0864ea1b +0x60b:  movb   $0x1,0x6ef90(%eax)
0864ea22 +0x612:  mov    0x8(%ebp),%eax
0864ea25 +0x615:  movb   $0x0,0x6ef91(%eax)
0864ea2c +0x61c:  mov    0x8(%ebp),%eax
0864ea2f +0x61f:  add    $0x6ef78,%eax
0864ea34 +0x624:  mov    %eax,(%esp)
0864ea37 +0x627:  call   08699218 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5a6d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5a6d
0864ea3c +0x62c:  mov    0x8(%ebp),%eax
0864ea3f +0x62f:  movl   $0x0,0x8cfcc(%eax)
0864ea49 +0x639:  mov    0x8(%ebp),%eax
0864ea4c +0x63c:  movb   $0x0,0x7962c(%eax)
0864ea53 +0x643:  mov    0x8(%ebp),%eax
0864ea56 +0x646:  movw   $0xffff,0x8d012(%eax)
0864ea5f +0x64f:  mov    0x8(%ebp),%eax
0864ea62 +0x652:  movl   $0x0,0x8eba8(%eax)
0864ea6c +0x65c:  mov    0x8(%ebp),%eax
0864ea6f +0x65f:  movl   $0x0,0x8ebac(%eax)
0864ea79 +0x669:  mov    0x8(%ebp),%eax
0864ea7c +0x66c:  movb   $0x0,0x8ebb0(%eax)
0864ea83 +0x673:  mov    0x8(%ebp),%eax
0864ea86 +0x676:  movb   $0x0,0x8ec29(%eax)
0864ea8d +0x67d:  mov    0x8(%ebp),%eax
0864ea90 +0x680:  movb   $0x0,0x6effa(%eax)
0864ea97 +0x687:  add    $0x2c,%esp
0864ea9a +0x68a:  pop    %ebx
0864ea9b +0x68b:  pop    %esi
0864ea9c +0x68c:  pop    %edi
0864ea9d +0x68d:  pop    %ebp
0864ea9e +0x68e:  ret
0864ea9f +0x68f:  mov    %edx,%ebx
0864eaa1 +0x691:  mov    %eax,%esi
0864eaa3 +0x693:  mov    0x8(%ebp),%eax
0864eaa6 +0x696:  add    $0x8ec04,%eax
0864eaab +0x69b:  mov    %eax,(%esp)
0864eaae +0x69e:  call   08697c2a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x447f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x447f
0864eab3 +0x6a3:  mov    %esi,%eax
0864eab5 +0x6a5:  mov    %ebx,%edx
0864eab7 +0x6a7:  jmp    0864eab9 <+0x6a9>
0864eab9 +0x6a9:  mov    %edx,%ebx
0864eabb +0x6ab:  mov    %eax,%esi
0864eabd +0x6ad:  mov    0x8(%ebp),%eax
0864eac0 +0x6b0:  add    $0x8ebf8,%eax
0864eac5 +0x6b5:  mov    %eax,(%esp)
0864eac8 +0x6b8:  call   08697c16 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x446b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x446b
0864eacd +0x6bd:  mov    %esi,%eax
0864eacf +0x6bf:  mov    %ebx,%edx
0864ead1 +0x6c1:  jmp    0864ead3 <+0x6c3>
0864ead3 +0x6c3:  mov    %edx,%ebx
0864ead5 +0x6c5:  mov    %eax,%esi
0864ead7 +0x6c7:  mov    0x8(%ebp),%eax
0864eada +0x6ca:  add    $0x8ebc4,%eax
0864eadf +0x6cf:  mov    %eax,(%esp)
0864eae2 +0x6d2:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0864eae7 +0x6d7:  mov    %esi,%eax
0864eae9 +0x6d9:  mov    %ebx,%edx
0864eaeb +0x6db:  jmp    0864eaed <+0x6dd>
0864eaed +0x6dd:  mov    %edx,%ebx
0864eaef +0x6df:  mov    %eax,%esi
0864eaf1 +0x6e1:  mov    0x8(%ebp),%eax
0864eaf4 +0x6e4:  add    $0x8eb80,%eax
0864eaf9 +0x6e9:  mov    %eax,(%esp)
0864eafc +0x6ec:  call   0836a05e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x402a>  ; global constructors keyed to CServerEvent::m_nExpRate+0x402a
0864eb01 +0x6f1:  mov    %esi,%eax
0864eb03 +0x6f3:  mov    %ebx,%edx
0864eb05 +0x6f5:  jmp    0864eb07 <+0x6f7>
0864eb07 +0x6f7:  mov    %edx,%ebx
0864eb09 +0x6f9:  mov    %eax,%esi
0864eb0b +0x6fb:  mov    0x8(%ebp),%eax
0864eb0e +0x6fe:  add    $0x8eb68,%eax
0864eb13 +0x703:  mov    %eax,(%esp)
0864eb16 +0x706:  call   081b5c7a <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x1d>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x1d
0864eb1b +0x70b:  mov    %esi,%eax
0864eb1d +0x70d:  mov    %ebx,%edx
0864eb1f +0x70f:  jmp    0864eb21 <+0x711>
0864eb21 +0x711:  mov    %edx,%ebx
0864eb23 +0x713:  mov    %eax,%esi
0864eb25 +0x715:  mov    0x8(%ebp),%eax
0864eb28 +0x718:  add    $0x8eb50,%eax
0864eb2d +0x71d:  mov    %eax,(%esp)
0864eb30 +0x720:  call   0837176e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb73a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb73a
0864eb35 +0x725:  mov    %esi,%eax
0864eb37 +0x727:  mov    %ebx,%edx
0864eb39 +0x729:  jmp    0864eb3b <+0x72b>
0864eb3b +0x72b:  mov    %edx,%ebx
0864eb3d +0x72d:  mov    %eax,%esi
0864eb3f +0x72f:  mov    0x8(%ebp),%eax
0864eb42 +0x732:  add    $0x8eb00,%eax
0864eb47 +0x737:  mov    %eax,(%esp)
0864eb4a +0x73a:  call   08697c02 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4457>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4457
0864eb4f +0x73f:  mov    %esi,%eax
0864eb51 +0x741:  mov    %ebx,%edx
0864eb53 +0x743:  jmp    0864eb55 <+0x745>
0864eb55 +0x745:  mov    %edx,%ebx
0864eb57 +0x747:  mov    %eax,%esi
0864eb59 +0x749:  mov    0x8(%ebp),%eax
0864eb5c +0x74c:  add    $0x8eaec,%eax
0864eb61 +0x751:  mov    %eax,(%esp)
0864eb64 +0x754:  call   0808c0ec <_GLOBAL__I_hashkey_map+0x1d>  ; global constructors keyed to hashkey_map+0x1d
0864eb69 +0x759:  mov    %esi,%eax
0864eb6b +0x75b:  mov    %ebx,%edx
0864eb6d +0x75d:  jmp    0864eb6f <+0x75f>
0864eb6f +0x75f:  mov    %edx,%ebx
0864eb71 +0x761:  mov    %eax,%esi
0864eb73 +0x763:  mov    0x8(%ebp),%eax
0864eb76 +0x766:  add    $0x8eae4,%eax
0864eb7b +0x76b:  mov    %eax,(%esp)
0864eb7e +0x76e:  call   0808c130 <_GLOBAL__I_hashkey_map+0x61>  ; global constructors keyed to hashkey_map+0x61
0864eb83 +0x773:  mov    %esi,%eax
0864eb85 +0x775:  mov    %ebx,%edx
0864eb87 +0x777:  jmp    0864eb89 <+0x779>
0864eb89 +0x779:  mov    %edx,%ebx
0864eb8b +0x77b:  mov    %eax,%esi
0864eb8d +0x77d:  mov    0x8(%ebp),%eax
0864eb90 +0x780:  add    $0x8eabc,%eax
0864eb95 +0x785:  mov    %eax,(%esp)
0864eb98 +0x788:  call   08697bee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4443>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4443
0864eb9d +0x78d:  mov    %esi,%eax
0864eb9f +0x78f:  mov    %ebx,%edx
0864eba1 +0x791:  jmp    0864eba3 <+0x793>
0864eba3 +0x793:  mov    %edx,%ebx
0864eba5 +0x795:  mov    %eax,%esi
0864eba7 +0x797:  mov    0x8(%ebp),%eax
0864ebaa +0x79a:  add    $0x8eaa4,%eax
0864ebaf +0x79f:  mov    %eax,(%esp)
0864ebb2 +0x7a2:  call   08697bda <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x442f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x442f
0864ebb7 +0x7a7:  mov    %esi,%eax
0864ebb9 +0x7a9:  mov    %ebx,%edx
0864ebbb +0x7ab:  jmp    0864ebbd <+0x7ad>
0864ebbd +0x7ad:  mov    %edx,%ebx
0864ebbf +0x7af:  mov    %eax,%esi
0864ebc1 +0x7b1:  mov    0x8(%ebp),%eax
0864ebc4 +0x7b4:  add    $0x8ea68,%eax
0864ebc9 +0x7b9:  mov    %eax,(%esp)
0864ebcc +0x7bc:  call   08695af8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x234d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x234d
0864ebd1 +0x7c1:  mov    %esi,%eax
0864ebd3 +0x7c3:  mov    %ebx,%edx
0864ebd5 +0x7c5:  mov    %edx,%ebx
0864ebd7 +0x7c7:  mov    %eax,%esi
0864ebd9 +0x7c9:  mov    0x8(%ebp),%eax
0864ebdc +0x7cc:  add    $0x8e980,%eax
0864ebe1 +0x7d1:  mov    %eax,(%esp)
0864ebe4 +0x7d4:  call   08694f9a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x17ef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x17ef
0864ebe9 +0x7d9:  mov    %esi,%eax
0864ebeb +0x7db:  mov    %ebx,%edx
0864ebed +0x7dd:  mov    %edx,%ebx
0864ebef +0x7df:  mov    %eax,%esi
0864ebf1 +0x7e1:  mov    0x8(%ebp),%eax
0864ebf4 +0x7e4:  add    $0x8e954,%eax
0864ebf9 +0x7e9:  mov    %eax,(%esp)
0864ebfc +0x7ec:  call   08694f54 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x17a9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x17a9
0864ec01 +0x7f1:  mov    %esi,%eax
0864ec03 +0x7f3:  mov    %ebx,%edx
0864ec05 +0x7f5:  jmp    0864ec07 <+0x7f7>
0864ec07 +0x7f7:  mov    %edx,%ebx
0864ec09 +0x7f9:  mov    %eax,%esi
0864ec0b +0x7fb:  mov    0x8(%ebp),%eax
0864ec0e +0x7fe:  add    $0x8e3f0,%eax
0864ec13 +0x803:  mov    %eax,(%esp)
0864ec16 +0x806:  call   08695080 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x18d5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x18d5
0864ec1b +0x80b:  mov    %esi,%eax
0864ec1d +0x80d:  mov    %ebx,%edx
0864ec1f +0x80f:  mov    %edx,%ebx
0864ec21 +0x811:  mov    %eax,%esi
0864ec23 +0x813:  mov    0x8(%ebp),%eax
0864ec26 +0x816:  add    $0x8e080,%eax
0864ec2b +0x81b:  mov    %eax,(%esp)
0864ec2e +0x81e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0864ec33 +0x823:  mov    %esi,%eax
0864ec35 +0x825:  mov    %ebx,%edx
0864ec37 +0x827:  jmp    0864ec39 <+0x829>
0864ec39 +0x829:  mov    %edx,%ebx
0864ec3b +0x82b:  mov    %eax,%esi
0864ec3d +0x82d:  mov    0x8(%ebp),%eax
0864ec40 +0x830:  add    $0x8e034,%eax
0864ec45 +0x835:  mov    %eax,(%esp)
0864ec48 +0x838:  call   08486866 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x2a0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x2a0
0864ec4d +0x83d:  mov    %esi,%eax
0864ec4f +0x83f:  mov    %ebx,%edx
0864ec51 +0x841:  mov    %edx,%ebx
0864ec53 +0x843:  mov    %eax,%esi
0864ec55 +0x845:  mov    0x8(%ebp),%eax
0864ec58 +0x848:  add    $0x8df60,%eax
0864ec5d +0x84d:  mov    %eax,(%esp)
0864ec60 +0x850:  call   0813121a <_ZN12advancealtar25CharacAdvanceAltarManagerD1Ev>  ; advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager()
0864ec65 +0x855:  mov    %esi,%eax
0864ec67 +0x857:  mov    %ebx,%edx
0864ec69 +0x859:  jmp    0864ec6b <+0x85b>
0864ec6b +0x85b:  mov    %edx,%ebx
0864ec6d +0x85d:  mov    %eax,%esi
0864ec6f +0x85f:  mov    0x8(%ebp),%eax
0864ec72 +0x862:  add    $0x8d264,%eax
0864ec77 +0x867:  mov    %eax,(%esp)
0864ec7a +0x86a:  call   08694bf6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x144b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x144b
0864ec7f +0x86f:  mov    %esi,%eax
0864ec81 +0x871:  mov    %ebx,%edx
0864ec83 +0x873:  mov    %edx,%ebx
0864ec85 +0x875:  mov    %eax,%esi
0864ec87 +0x877:  mov    0x8(%ebp),%eax
0864ec8a +0x87a:  add    $0x8d1e4,%eax
0864ec8f +0x87f:  mov    %eax,(%esp)
0864ec92 +0x882:  call   08695bb2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2407>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2407
0864ec97 +0x887:  mov    %esi,%eax
0864ec99 +0x889:  mov    %ebx,%edx
0864ec9b +0x88b:  jmp    0864ec9d <+0x88d>
0864ec9d +0x88d:  mov    %edx,%ebx
0864ec9f +0x88f:  mov    %eax,%esi
0864eca1 +0x891:  mov    0x8(%ebp),%eax
0864eca4 +0x894:  add    $0x8d1d0,%eax
0864eca9 +0x899:  mov    %eax,(%esp)
0864ecac +0x89c:  call   08699038 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x588d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x588d
0864ecb1 +0x8a1:  mov    %esi,%eax
0864ecb3 +0x8a3:  mov    %ebx,%edx
0864ecb5 +0x8a5:  jmp    0864ecb7 <+0x8a7>
0864ecb7 +0x8a7:  mov    %edx,%ebx
0864ecb9 +0x8a9:  mov    %eax,%esi
0864ecbb +0x8ab:  mov    0x8(%ebp),%eax
0864ecbe +0x8ae:  add    $0x8d1c4,%eax
0864ecc3 +0x8b3:  mov    %eax,(%esp)
0864ecc6 +0x8b6:  call   08698fc6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x581b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x581b
0864eccb +0x8bb:  mov    %esi,%eax
0864eccd +0x8bd:  mov    %ebx,%edx
0864eccf +0x8bf:  jmp    0864ecd1 <+0x8c1>
0864ecd1 +0x8c1:  mov    %edx,%ebx
0864ecd3 +0x8c3:  mov    %eax,%esi
0864ecd5 +0x8c5:  mov    0x8(%ebp),%eax
0864ecd8 +0x8c8:  add    $0x8d1b8,%eax
0864ecdd +0x8cd:  mov    %eax,(%esp)
0864ece0 +0x8d0:  call   08698fc6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x581b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x581b
0864ece5 +0x8d5:  mov    %esi,%eax
0864ece7 +0x8d7:  mov    %ebx,%edx
0864ece9 +0x8d9:  jmp    0864eceb <+0x8db>
0864eceb +0x8db:  mov    %edx,%ebx
0864eced +0x8dd:  mov    %eax,%esi
0864ecef +0x8df:  mov    0x8(%ebp),%eax
0864ecf2 +0x8e2:  add    $0x8d160,%eax
0864ecf7 +0x8e7:  mov    %eax,(%esp)
0864ecfa +0x8ea:  call   086959d6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x222b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x222b
0864ecff +0x8ef:  mov    %esi,%eax
0864ed01 +0x8f1:  mov    %ebx,%edx
0864ed03 +0x8f3:  mov    %edx,%ebx
0864ed05 +0x8f5:  mov    %eax,%esi
0864ed07 +0x8f7:  mov    0x8(%ebp),%eax
0864ed0a +0x8fa:  add    $0x8d114,%eax
0864ed0f +0x8ff:  mov    %eax,(%esp)
0864ed12 +0x902:  call   086959ca <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x221f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x221f
0864ed17 +0x907:  mov    %esi,%eax
0864ed19 +0x909:  mov    %ebx,%edx
0864ed1b +0x90b:  mov    %edx,%ebx
0864ed1d +0x90d:  mov    %eax,%esi
0864ed1f +0x90f:  mov    0x8(%ebp),%eax
0864ed22 +0x912:  add    $0x8d0e4,%eax
0864ed27 +0x917:  mov    %eax,(%esp)
0864ed2a +0x91a:  call   08147b70 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x63>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x63
0864ed2f +0x91f:  mov    %esi,%eax
0864ed31 +0x921:  mov    %ebx,%edx
0864ed33 +0x923:  jmp    0864ed35 <+0x925>
0864ed35 +0x925:  mov    %edx,%ebx
0864ed37 +0x927:  mov    %eax,%esi
0864ed39 +0x929:  mov    0x8(%ebp),%eax
0864ed3c +0x92c:  add    $0x8cfe4,%eax
0864ed41 +0x931:  mov    %eax,(%esp)
0864ed44 +0x934:  call   081ab6ca <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x1c>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x1c
0864ed49 +0x939:  mov    %esi,%eax
0864ed4b +0x93b:  mov    %ebx,%edx
0864ed4d +0x93d:  jmp    0864ed4f <+0x93f>
0864ed4f +0x93f:  mov    %edx,%ebx
0864ed51 +0x941:  mov    %eax,%esi
0864ed53 +0x943:  mov    0x8(%ebp),%eax
0864ed56 +0x946:  add    $0x8cfa0,%eax
0864ed5b +0x94b:  mov    %eax,(%esp)
0864ed5e +0x94e:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0864ed63 +0x953:  mov    %esi,%eax
0864ed65 +0x955:  mov    %ebx,%edx
0864ed67 +0x957:  mov    %edx,%ebx
0864ed69 +0x959:  mov    %eax,%esi
0864ed6b +0x95b:  mov    0x8(%ebp),%eax
0864ed6e +0x95e:  add    $0x8cf88,%eax
0864ed73 +0x963:  mov    %eax,(%esp)
0864ed76 +0x966:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0864ed7b +0x96b:  mov    %esi,%eax
0864ed7d +0x96d:  mov    %ebx,%edx
0864ed7f +0x96f:  mov    %edx,%ebx
0864ed81 +0x971:  mov    %eax,%esi
0864ed83 +0x973:  mov    0x8(%ebp),%eax
0864ed86 +0x976:  add    $0x8cf80,%eax
0864ed8b +0x97b:  mov    %eax,(%esp)
0864ed8e +0x97e:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0864ed93 +0x983:  mov    %esi,%eax
0864ed95 +0x985:  mov    %ebx,%edx
0864ed97 +0x987:  jmp    0864ed99 <+0x989>
0864ed99 +0x989:  mov    %edx,%ebx
0864ed9b +0x98b:  mov    %eax,%esi
0864ed9d +0x98d:  mov    0x8(%ebp),%eax
0864eda0 +0x990:  add    $0x8cf74,%eax
0864eda5 +0x995:  mov    %eax,(%esp)
0864eda8 +0x998:  call   08698f54 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x57a9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x57a9
0864edad +0x99d:  mov    %esi,%eax
0864edaf +0x99f:  mov    %ebx,%edx
0864edb1 +0x9a1:  jmp    0864edb3 <+0x9a3>
0864edb3 +0x9a3:  mov    %edx,%ebx
0864edb5 +0x9a5:  mov    %eax,%esi
0864edb7 +0x9a7:  mov    0x8(%ebp),%eax
0864edba +0x9aa:  add    $0x8cf68,%eax
0864edbf +0x9af:  mov    %eax,(%esp)
0864edc2 +0x9b2:  call   08698ee2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5737>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5737
0864edc7 +0x9b7:  mov    %esi,%eax
0864edc9 +0x9b9:  mov    %ebx,%edx
0864edcb +0x9bb:  jmp    0864edcd <+0x9bd>
0864edcd +0x9bd:  mov    %edx,%ebx
0864edcf +0x9bf:  mov    %eax,%esi
0864edd1 +0x9c1:  mov    0x8(%ebp),%eax
0864edd4 +0x9c4:  add    $0x8cf64,%eax
0864edd9 +0x9c9:  mov    %eax,(%esp)
0864eddc +0x9cc:  call   08697062 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x38b7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x38b7
0864ede1 +0x9d1:  mov    %esi,%eax
0864ede3 +0x9d3:  mov    %ebx,%edx
0864ede5 +0x9d5:  mov    %edx,%ebx
0864ede7 +0x9d7:  mov    %eax,%esi
0864ede9 +0x9d9:  mov    0x8(%ebp),%eax
0864edec +0x9dc:  add    $0x8cef4,%eax
0864edf1 +0x9e1:  mov    %eax,(%esp)
0864edf4 +0x9e4:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
0864edf9 +0x9e9:  mov    %esi,%eax
0864edfb +0x9eb:  mov    %ebx,%edx
0864edfd +0x9ed:  jmp    0864edff <+0x9ef>
0864edff +0x9ef:  mov    %edx,%ebx
0864ee01 +0x9f1:  mov    %eax,%esi
0864ee03 +0x9f3:  mov    0x8(%ebp),%eax
0864ee06 +0x9f6:  add    $0x858d4,%eax
0864ee0b +0x9fb:  mov    %eax,(%esp)
0864ee0e +0x9fe:  call   08697bb0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4405>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4405
0864ee13 +0xa03:  mov    %esi,%eax
0864ee15 +0xa05:  mov    %ebx,%edx
0864ee17 +0xa07:  jmp    0864ee19 <+0xa09>
0864ee19 +0xa09:  mov    %edx,%ebx
0864ee1b +0xa0b:  mov    %eax,%esi
0864ee1d +0xa0d:  mov    0x8(%ebp),%eax
0864ee20 +0xa10:  add    $0x79744,%eax
0864ee25 +0xa15:  mov    %eax,(%esp)
0864ee28 +0xa18:  call   0832ac48 <_ZN13charac_expand8CDataMgrD1Ev>  ; charac_expand::CDataMgr::~CDataMgr()
0864ee2d +0xa1d:  mov    %esi,%eax
0864ee2f +0xa1f:  mov    %ebx,%edx
0864ee31 +0xa21:  jmp    0864ee33 <+0xa23>
0864ee33 +0xa23:  mov    %edx,%ebx
0864ee35 +0xa25:  mov    %eax,%esi
0864ee37 +0xa27:  mov    0x8(%ebp),%eax
0864ee3a +0xa2a:  add    $0x796f4,%eax
0864ee3f +0xa2f:  mov    %eax,(%esp)
0864ee42 +0xa32:  call   0869703e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3893>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3893
0864ee47 +0xa37:  mov    %esi,%eax
0864ee49 +0xa39:  mov    %ebx,%edx
0864ee4b +0xa3b:  mov    %edx,%ebx
0864ee4d +0xa3d:  mov    %eax,%esi
0864ee4f +0xa3f:  mov    0x8(%ebp),%eax
0864ee52 +0xa42:  add    $0x796e8,%eax
0864ee57 +0xa47:  mov    %eax,(%esp)
0864ee5a +0xa4a:  call   08698e70 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x56c5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x56c5
0864ee5f +0xa4f:  mov    %esi,%eax
0864ee61 +0xa51:  mov    %ebx,%edx
0864ee63 +0xa53:  jmp    0864ee65 <+0xa55>
0864ee65 +0xa55:  mov    %edx,%esi
0864ee67 +0xa57:  mov    %eax,%edi
0864ee69 +0xa59:  mov    0x8(%ebp),%eax
0864ee6c +0xa5c:  add    $0x79664,%eax
0864ee71 +0xa61:  test   %eax,%eax
0864ee73 +0xa63:  je     0864ee99 <+0xa89>
0864ee75 +0xa65:  mov    0x8(%ebp),%eax
0864ee78 +0xa68:  add    $0x79664,%eax
0864ee7d +0xa6d:  lea    0x8(%eax),%ebx
0864ee80 +0xa70:  mov    0x8(%ebp),%eax
0864ee83 +0xa73:  add    $0x79664,%eax
0864ee88 +0xa78:  cmp    %eax,%ebx
0864ee8a +0xa7a:  je     0864ee99 <+0xa89>
0864ee8c +0xa7c:  sub    $0x4,%ebx
0864ee8f +0xa7f:  mov    %ebx,(%esp)
0864ee92 +0xa82:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0864ee97 +0xa87:  jmp    0864ee80 <+0xa70>
0864ee99 +0xa89:  mov    %edi,%eax
0864ee9b +0xa8b:  mov    %esi,%edx
0864ee9d +0xa8d:  mov    %edx,%ebx
0864ee9f +0xa8f:  mov    %eax,%esi
0864eea1 +0xa91:  mov    0x8(%ebp),%eax
0864eea4 +0xa94:  add    $0x795fc,%eax
0864eea9 +0xa99:  mov    %eax,(%esp)
0864eeac +0xa9c:  call   08697b76 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x43cb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x43cb
0864eeb1 +0xaa1:  mov    %esi,%eax
0864eeb3 +0xaa3:  mov    %ebx,%edx
0864eeb5 +0xaa5:  jmp    0864eeb7 <+0xaa7>
0864eeb7 +0xaa7:  mov    %edx,%ebx
0864eeb9 +0xaa9:  mov    %eax,%esi
0864eebb +0xaab:  mov    0x8(%ebp),%eax
0864eebe +0xaae:  add    $0x795e8,%eax
0864eec3 +0xab3:  mov    %eax,(%esp)
0864eec6 +0xab6:  call   08695aaa <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x22ff>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x22ff
0864eecb +0xabb:  mov    %esi,%eax
0864eecd +0xabd:  mov    %ebx,%edx
0864eecf +0xabf:  mov    %edx,%ebx
0864eed1 +0xac1:  mov    %eax,%esi
0864eed3 +0xac3:  mov    0x8(%ebp),%eax
0864eed6 +0xac6:  add    $0x71bac,%eax
0864eedb +0xacb:  mov    %eax,(%esp)
0864eede +0xace:  call   086951ea <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1a3f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1a3f
0864eee3 +0xad3:  mov    %esi,%eax
0864eee5 +0xad5:  mov    %ebx,%edx
0864eee7 +0xad7:  jmp    0864eee9 <+0xad9>
0864eee9 +0xad9:  mov    %edx,%ebx
0864eeeb +0xadb:  mov    %eax,%esi
0864eeed +0xadd:  mov    0x8(%ebp),%eax
0864eef0 +0xae0:  add    $0x7121c,%eax
0864eef5 +0xae5:  mov    %eax,(%esp)
0864eef8 +0xae8:  call   08694b7a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x13cf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x13cf
0864eefd +0xaed:  mov    %esi,%eax
0864eeff +0xaef:  mov    %ebx,%edx
0864ef01 +0xaf1:  jmp    0864ef03 <+0xaf3>
0864ef03 +0xaf3:  mov    %edx,%ebx
0864ef05 +0xaf5:  mov    %eax,%esi
0864ef07 +0xaf7:  mov    0x8(%ebp),%eax
0864ef0a +0xafa:  add    $0x711f4,%eax
0864ef0f +0xaff:  mov    %eax,(%esp)
0864ef12 +0xb02:  call   08697002 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3857>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3857
0864ef17 +0xb07:  mov    %esi,%eax
0864ef19 +0xb09:  mov    %ebx,%edx
0864ef1b +0xb0b:  mov    %edx,%ebx
0864ef1d +0xb0d:  mov    %eax,%esi
0864ef1f +0xb0f:  mov    0x8(%ebp),%eax
0864ef22 +0xb12:  add    $0x711ec,%eax
0864ef27 +0xb17:  mov    %eax,(%esp)
0864ef2a +0xb1a:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0864ef2f +0xb1f:  mov    %esi,%eax
0864ef31 +0xb21:  mov    %ebx,%edx
0864ef33 +0xb23:  jmp    0864ef35 <+0xb25>
0864ef35 +0xb25:  mov    %edx,%ebx
0864ef37 +0xb27:  mov    %eax,%esi
0864ef39 +0xb29:  mov    0x8(%ebp),%eax
0864ef3c +0xb2c:  add    $0x6ef78,%eax
0864ef41 +0xb31:  mov    %eax,(%esp)
0864ef44 +0xb34:  call   08697b62 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x43b7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x43b7
0864ef49 +0xb39:  mov    %esi,%eax
0864ef4b +0xb3b:  mov    %ebx,%edx
0864ef4d +0xb3d:  jmp    0864ef4f <+0xb3f>
0864ef4f +0xb3f:  mov    %edx,%ebx
0864ef51 +0xb41:  mov    %eax,%esi
0864ef53 +0xb43:  mov    0x8(%ebp),%eax
0864ef56 +0xb46:  add    $0x6ef6c,%eax
0864ef5b +0xb4b:  mov    %eax,(%esp)
0864ef5e +0xb4e:  call   08697b4e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x43a3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x43a3
0864ef63 +0xb53:  mov    %esi,%eax
0864ef65 +0xb55:  mov    %ebx,%edx
0864ef67 +0xb57:  jmp    0864ef69 <+0xb59>
0864ef69 +0xb59:  mov    %edx,%ebx
0864ef6b +0xb5b:  mov    %eax,%esi
0864ef6d +0xb5d:  mov    0x8(%ebp),%eax
0864ef70 +0xb60:  add    $0xe0,%eax
0864ef75 +0xb65:  mov    %eax,(%esp)
0864ef78 +0xb68:  call   08698d58 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x55ad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x55ad
0864ef7d +0xb6d:  mov    %esi,%eax
0864ef7f +0xb6f:  mov    %ebx,%edx
0864ef81 +0xb71:  mov    %edx,%ebx
0864ef83 +0xb73:  mov    %eax,%esi
0864ef85 +0xb75:  mov    0x8(%ebp),%eax
0864ef88 +0xb78:  mov    %eax,(%esp)
0864ef8b +0xb7b:  call   08697ac0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4315>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4315
0864ef90 +0xb80:  mov    %esi,%eax
0864ef92 +0xb82:  mov    %ebx,%edx
0864ef94 +0xb84:  mov    %eax,(%esp)
0864ef97 +0xb87:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::CUser @ 0x864e410

/* CUser::CUser() */

void __thiscall CUser::CUser(CUser *this)

{
  CUser CVar1;
  STCommand *this_00;
  CharacMoneyLog *this_01;
  int iVar2;
  string *this_02;
  
  CUserCharacInfo::CUserCharacInfo((CUserCharacInfo *)this);
  CNetwork<4096,450000>::CNetwork((CNetwork<4096,450000> *)(this + 0xe0));
                    /* try { // try from 0864e43f to 0864e443 has its CatchHandler @ 0864ef69 */
  UserMercenaryInfoMgr::UserMercenaryInfoMgr((UserMercenaryInfoMgr *)(this + 0x6ef6c));
                    /* try { // try from 0864e44f to 0864e453 has its CatchHandler @ 0864ef4f */
  std::
  map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
  ::map((map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
         *)(this + 0x6ef78));
                    /* try { // try from 0864e45f to 0864e4d8 has its CatchHandler @ 0864ef35 */
  CAccountCargo::CAccountCargo((CAccountCargo *)(this + 0x6effc));
  CGameOption::CGameOption((CGameOption *)(this + 0x6fd64));
  STBreakAwayRewards::STBreakAwayRewards((STBreakAwayRewards *)(this + 0x703c4));
  this_00 = (STCommand *)(this + 0x703db);
  for (iVar2 = 0x31; iVar2 != -1; iVar2 = iVar2 + -1) {
    STSkillCommandData::STCommand::STCommand(this_00);
    this_00 = this_00 + 4;
  }
  *(undefined2 *)(this + 0x704a8) = 0;
  Client_Spec::Client_Spec((Client_Spec *)(this + 0x705dc));
  std::list<int,std::allocator<int>>::list((list<int,std::allocator<int>> *)(this + 0x711ec));
  CPacketVerifier::CPacketVerifier((CPacketVerifier *)(this + 0x711f4));
                    /* try { // try from 0864e4f4 to 0864e4f8 has its CatchHandler @ 0864ef03 */
  WongWork::CUserPremium::CUserPremium((CUserPremium *)(this + 0x7121c));
                    /* try { // try from 0864e504 to 0864e508 has its CatchHandler @ 0864eee9 */
  WongWork::CHackAnalyzer::CHackAnalyzer((CHackAnalyzer *)(this + 0x71bac));
  Secu_AccountHacking::Secu_AccountHacking((Secu_AccountHacking *)(this + 0x795e8));
                    /* try { // try from 0864e524 to 0864e528 has its CatchHandler @ 0864eeb7 */
  CodeHackCheckStorage::CodeHackCheckStorage((CodeHackCheckStorage *)(this + 0x795fc));
  this_02 = (string *)(this + 0x79664);
  for (iVar2 = 1; iVar2 != -1; iVar2 = iVar2 + -1) {
                    /* try { // try from 0864e53e to 0864e542 has its CatchHandler @ 0864e555 */
    std::string::string(this_02);
    this_02 = this_02 + 4;
  }
  *(undefined4 *)(this + 0x79670) = 0;
  this_01 = (CharacMoneyLog *)(this + 0x79674);
  for (iVar2 = 6; iVar2 != -1; iVar2 = iVar2 + -1) {
    CharacMoneyLog::CharacMoneyLog(this_01);
    this_01 = this_01 + 0xc;
  }
  this[0x796d8] = (CUser)0x0;
                    /* try { // try from 0864e5d1 to 0864e5d5 has its CatchHandler @ 0864ee65 */
  std::vector<_Charac_info,std::allocator<_Charac_info>>::vector
            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
  CCharacterView::CCharacterView((CCharacterView *)(this + 0x796f4));
  cUserHistoryLog::cUserHistoryLog((cUserHistoryLog *)(this + 0x79700));
                    /* try { // try from 0864e601 to 0864e605 has its CatchHandler @ 0864ee33 */
  charac_expand::CDataMgr::CDataMgr((CDataMgr *)(this + 0x79744));
  InventoryMemory::InventoryMemory((InventoryMemory *)(this + 0x79794));
                    /* try { // try from 0864e621 to 0864e625 has its CatchHandler @ 0864ee19 */
  UserQuest::UserQuest((UserQuest *)(this + 0x858d4));
                    /* try { // try from 0864e631 to 0864e635 has its CatchHandler @ 0864edff */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x8cef4));
  CDungeonGainedGold::CDungeonGainedGold((CDungeonGainedGold *)(this + 0x8cf64));
                    /* try { // try from 0864e651 to 0864e655 has its CatchHandler @ 0864edcd */
  std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::vector
            ((vector<LimitItemUsage,std::allocator<LimitItemUsage>> *)(this + 0x8cf68));
                    /* try { // try from 0864e661 to 0864e665 has its CatchHandler @ 0864edb3 */
  std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>::vector
            ((vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>> *)(this + 0x8cf74)
            );
                    /* try { // try from 0864e671 to 0864e675 has its CatchHandler @ 0864ed99 */
  std::list<int,std::allocator<int>>::list((list<int,std::allocator<int>> *)(this + 0x8cf80));
  Mutex::Mutex((Mutex *)(this + 0x8cf88));
  Mutex::Mutex((Mutex *)(this + 0x8cfa0));
  *(undefined4 *)(this + 0x8cfc4) = 0;
                    /* try { // try from 0864e6ae to 0864e6b2 has its CatchHandler @ 0864ed4f */
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::set
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)
             (this + 0x8cfe4));
  STGuildDBInfoOnly::STGuildDBInfoOnly((STGuildDBInfoOnly *)(this + 0x8d020));
  STGuildAgitDBInfo::STGuildAgitDBInfo((STGuildAgitDBInfo *)(this + 0x8d0dd));
                    /* try { // try from 0864e6de to 0864e6e2 has its CatchHandler @ 0864ed35 */
  std::
  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
  ::vector((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
            *)(this + 0x8d0e4));
  WongWork::CSecurityCard::CSecurityCard((CSecurityCard *)(this + 0x8d114));
  Sanicova::CPad::CPad((CPad *)(this + 0x8d160));
                    /* try { // try from 0864e70e to 0864e712 has its CatchHandler @ 0864eceb */
  std::vector<stLookOuts,std::allocator<stLookOuts>>::vector
            ((vector<stLookOuts,std::allocator<stLookOuts>> *)(this + 0x8d1b8));
                    /* try { // try from 0864e71e to 0864e722 has its CatchHandler @ 0864ecd1 */
  std::vector<stLookOuts,std::allocator<stLookOuts>>::vector
            ((vector<stLookOuts,std::allocator<stLookOuts>> *)(this + 0x8d1c4));
                    /* try { // try from 0864e72e to 0864e732 has its CatchHandler @ 0864ecb7 */
  std::vector<tyIPCounters,std::allocator<tyIPCounters>>::vector
            ((vector<tyIPCounters,std::allocator<tyIPCounters>> *)(this + 0x8d1d0));
                    /* try { // try from 0864e73e to 0864e742 has its CatchHandler @ 0864ec9d */
  CerashopAddRestrict::UserInfo::UserInfo((UserInfo *)(this + 0x8d1e4));
  STExpReward::STExpReward((STExpReward *)(this + 0x8d24d));
  APSystem::CActionPointManager::CActionPointManager((CActionPointManager *)(this + 0x8d264));
                    /* try { // try from 0864e76e to 0864e772 has its CatchHandler @ 0864ec6b */
  advancealtar::CharacAdvanceAltarManager::CharacAdvanceAltarManager
            ((CharacAdvanceAltarManager *)(this + 0x8df60));
  Character::Character((Character *)(this + 0x8e034));
                    /* try { // try from 0864e78e to 0864e792 has its CatchHandler @ 0864ec39 */
  std::string::string((string *)(this + 0x8e080));
  WongWork::CMCAPManager::CMCAPManager((CMCAPManager *)(this + 0x8e3f0));
                    /* try { // try from 0864e7ae to 0864e7b2 has its CatchHandler @ 0864ec07 */
  XNuclear::CHades::CHades((CHades *)(this + 0x8e954));
  Secu_GoldControl::Secu_GoldControl((Secu_GoldControl *)(this + 0x8e980));
  Secu_HackLogCheck::Secu_HackLogCheck((Secu_HackLogCheck *)(this + 0x8ea68));
                    /* try { // try from 0864e7de to 0864e7e2 has its CatchHandler @ 0864ebbd */
  std::map<short,int,std::less<short>,std::allocator<std::pair<short_const,int>>>::map
            ((map<short,int,std::less<short>,std::allocator<std::pair<short_const,int>>> *)
             (this + 0x8eaa4));
                    /* try { // try from 0864e7ee to 0864e7f2 has its CatchHandler @ 0864eba3 */
  std::
  map<std::pair<char,char>,int,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,int>>>
  ::map((map<std::pair<char,char>,int,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,int>>>
         *)(this + 0x8eabc));
                    /* try { // try from 0864e7fe to 0864e802 has its CatchHandler @ 0864eb89 */
  PIReceiverManager::PIReceiverManager((PIReceiverManager *)(this + 0x8eae4));
                    /* try { // try from 0864e80e to 0864e812 has its CatchHandler @ 0864eb6f */
  PISenderManager::PISenderManager((PISenderManager *)(this + 0x8eaec));
                    /* try { // try from 0864e81e to 0864e822 has its CatchHandler @ 0864eb55 */
  std::
  set<std::pair<unsigned_char,unsigned_short>,std::less<std::pair<unsigned_char,unsigned_short>>,std::allocator<std::pair<unsigned_char,unsigned_short>>>
  ::set((set<std::pair<unsigned_char,unsigned_short>,std::less<std::pair<unsigned_char,unsigned_short>>,std::allocator<std::pair<unsigned_char,unsigned_short>>>
         *)(this + 0x8eb00));
                    /* try { // try from 0864e82e to 0864e832 has its CatchHandler @ 0864eb3b */
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::map((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
         *)(this + 0x8eb50));
                    /* try { // try from 0864e83e to 0864e842 has its CatchHandler @ 0864eb21 */
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::map((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
         *)(this + 0x8eb68));
                    /* try { // try from 0864e84e to 0864e852 has its CatchHandler @ 0864eb07 */
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::map
            ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
             (this + 0x8eb80));
                    /* try { // try from 0864e85e to 0864e862 has its CatchHandler @ 0864eaed */
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x8ebc4));
  BingoData::BingoData((BingoData *)(this + 0x8ebdc));
  GrowthWeaponEvent::GrowthWeaponEvent((GrowthWeaponEvent *)(this + 0x8ebe4));
                    /* try { // try from 0864e88e to 0864e892 has its CatchHandler @ 0864ead3 */
  GrowthCreatureEvent::GrowthCreatureEvent((GrowthCreatureEvent *)(this + 0x8ebf8));
                    /* try { // try from 0864e89e to 0864e8a2 has its CatchHandler @ 0864eab9 */
  CharacLevelUpGiftAccountOnce::CharacLevelUpGiftAccountOnce
            ((CharacLevelUpGiftAccountOnce *)(this + 0x8ec04));
  *(undefined4 *)(this + 0x8ec24) = 0;
  *(undefined4 *)(this + 0x8ec2c) = 0;
  *(undefined4 *)(this + 0x71b98) = 0;
  this[0x796d9] = (CUser)0x0;
  *(undefined4 *)(this + 0x8cfd0) = 300;
  *(undefined4 *)(this + 0x8cfd4) = 0;
  *(undefined4 *)(this + 0x8cfd8) = 0;
  setAntibotKey(this,-1);
  setClientVersion(this,0);
  *(undefined4 *)(this + 0x8e474) = 0;
  *(undefined4 *)(this + 0x8e480) = 0;
  *(undefined4 *)(this + 0x79650) = 0;
  *(undefined4 *)(this + 0x796f8) = 0;
                    /* try { // try from 0864e95b to 0864ea3b has its CatchHandler @ 0864ea9f */
  reset(this);
  cUserHistoryLog::SetUser((cUserHistoryLog *)(this + 0x79700),this);
  *(undefined4 *)(this + 0x705d8) = 0;
  *(undefined4 *)(this + 0x8e094) = 0;
  ResetUsedCoinInDungeon(this);
  CVar1 = (CUser)_NS_PI_2ND_GetDefaultRandomHashKey();
  this[0x8eafc] = CVar1;
  CVar1 = (CUser)_NS_PI_2ND_GetDefaultRandomHashKey();
  this[0x8eb18] = CVar1;
  CAccountCargo::Clear((CAccountCargo *)(this + 0x6effc));
  *(undefined4 *)(this + 0x8eb1c) = 0;
  ClearItemSellCount(this);
  this[0x8eb44] = (CUser)0x0;
  *(undefined4 *)(this + 0x8eb48) = 0;
  this[0x8eb99] = (CUser)0x0;
  resetInformNoticeFlag(this);
  disableSaveInformNoticeFlag(this);
  this[0x6ef90] = (CUser)0x1;
  this[0x6ef91] = (CUser)0x0;
  std::
  map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
  ::clear((map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
           *)(this + 0x6ef78));
  *(undefined4 *)(this + 0x8cfcc) = 0;
  this[0x7962c] = (CUser)0x0;
  *(undefined2 *)(this + 0x8d012) = 0xffff;
  *(undefined4 *)(this + 0x8eba8) = 0;
  *(undefined4 *)(this + 0x8ebac) = 0;
  this[0x8ebb0] = (CUser)0x0;
  this[0x8ec29] = (CUser)0x0;
  this[0x6effa] = (CUser)0x0;
  return;
}
```
