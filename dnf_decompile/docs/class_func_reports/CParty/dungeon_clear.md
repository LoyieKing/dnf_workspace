# dungeon_clear

`_ZN6CParty13dungeon_clearEv`

`CParty::dungeon_clear()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ab736` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ab736  _ZN6CParty13dungeon_clearEv
#           CParty::dungeon_clear()
# range [0x085ab736, 0x085abc7f]
085ab736 +0x000:  push   %ebp
085ab737 +0x001:  mov    %esp,%ebp
085ab739 +0x003:  push   %esi
085ab73a +0x004:  push   %ebx
085ab73b +0x005:  sub    $0x50,%esp
085ab73e +0x008:  movl   $0x1,0x4(%esp)
085ab746 +0x010:  mov    0x8(%ebp),%eax
085ab749 +0x013:  mov    %eax,(%esp)
085ab74c +0x016:  call   085b3520 <_ZN6CParty8SaveCoinE14eCoinSubReason>  ; CParty::SaveCoin(eCoinSubReason)
085ab751 +0x01b:  movl   $0x0,-0x20(%ebp)
085ab758 +0x022:  lea    -0x2c(%ebp),%eax
085ab75b +0x025:  mov    %eax,(%esp)
085ab75e +0x028:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085ab763 +0x02d:  mov    0x8(%ebp),%eax
085ab766 +0x030:  mov    %eax,(%esp)
085ab769 +0x033:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085ab76e +0x038:  mov    %eax,-0x1c(%ebp)
085ab771 +0x03b:  movl   $0x0,-0x14(%ebp)
085ab778 +0x042:  jmp    085abb12 <+0x3dc>
085ab77d +0x047:  mov    -0x14(%ebp),%eax
085ab780 +0x04a:  mov    %eax,0x4(%esp)
085ab784 +0x04e:  mov    0x8(%ebp),%eax
085ab787 +0x051:  mov    %eax,(%esp)
085ab78a +0x054:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ab78f +0x059:  xor    $0x1,%eax
085ab792 +0x05c:  test   %al,%al
085ab794 +0x05e:  jne    085abb0d <+0x3d7>
085ab79a +0x064:  movl   $0x0,-0x10(%ebp)
085ab7a1 +0x06b:  mov    -0x14(%ebp),%eax
085ab7a4 +0x06e:  imul   $0x7a,%eax,%eax
085ab7a7 +0x071:  add    $0x390,%eax
085ab7ac +0x076:  add    0x8(%ebp),%eax
085ab7af +0x079:  add    $0x10,%eax
085ab7b2 +0x07c:  mov    %eax,%ecx
085ab7b4 +0x07e:  mov    -0x14(%ebp),%edx
085ab7b7 +0x081:  mov    0x8(%ebp),%ebx
085ab7ba +0x084:  mov    %edx,%eax
085ab7bc +0x086:  add    %eax,%eax
085ab7be +0x088:  add    %edx,%eax
085ab7c0 +0x08a:  shl    $0x3,%eax
085ab7c3 +0x08d:  lea    (%ebx,%eax,1),%eax
085ab7c6 +0x090:  add    $0x78,%eax
085ab7c9 +0x093:  mov    (%eax),%eax
085ab7cb +0x095:  lea    -0x2c(%ebp),%edx
085ab7ce +0x098:  mov    %edx,0xc(%esp)
085ab7d2 +0x09c:  mov    %ecx,0x8(%esp)
085ab7d6 +0x0a0:  mov    %eax,0x4(%esp)
085ab7da +0x0a4:  mov    0x8(%ebp),%eax
085ab7dd +0x0a7:  mov    %eax,(%esp)
085ab7e0 +0x0aa:  call   085aab84 <_ZN6CParty16_putItemIntoUserEP5CUserP10Inven_ItemR11PacketGuard>  ; CParty::_putItemIntoUser(CUser*, Inven_Item*, PacketGuard&)
085ab7e5 +0x0af:  add    %eax,-0x10(%ebp)
085ab7e8 +0x0b2:  mov    -0x14(%ebp),%eax
085ab7eb +0x0b5:  imul   $0x7a,%eax,%eax
085ab7ee +0x0b8:  add    $0x570,%eax
085ab7f3 +0x0bd:  add    0x8(%ebp),%eax
085ab7f6 +0x0c0:  add    $0x18,%eax
085ab7f9 +0x0c3:  mov    %eax,%ecx
085ab7fb +0x0c5:  mov    -0x14(%ebp),%edx
085ab7fe +0x0c8:  mov    0x8(%ebp),%ebx
085ab801 +0x0cb:  mov    %edx,%eax
085ab803 +0x0cd:  add    %eax,%eax
085ab805 +0x0cf:  add    %edx,%eax
085ab807 +0x0d1:  shl    $0x3,%eax
085ab80a +0x0d4:  lea    (%ebx,%eax,1),%eax
085ab80d +0x0d7:  add    $0x78,%eax
085ab810 +0x0da:  mov    (%eax),%eax
085ab812 +0x0dc:  lea    -0x2c(%ebp),%edx
085ab815 +0x0df:  mov    %edx,0xc(%esp)
085ab819 +0x0e3:  mov    %ecx,0x8(%esp)
085ab81d +0x0e7:  mov    %eax,0x4(%esp)
085ab821 +0x0eb:  mov    0x8(%ebp),%eax
085ab824 +0x0ee:  mov    %eax,(%esp)
085ab827 +0x0f1:  call   085aab84 <_ZN6CParty16_putItemIntoUserEP5CUserP10Inven_ItemR11PacketGuard>  ; CParty::_putItemIntoUser(CUser*, Inven_Item*, PacketGuard&)
085ab82c +0x0f6:  add    %eax,-0x10(%ebp)
085ab82f +0x0f9:  mov    -0x14(%ebp),%eax
085ab832 +0x0fc:  movsbl %al,%eax
085ab835 +0x0ff:  movl   $0x1,0x8(%esp)
085ab83d +0x107:  mov    %eax,0x4(%esp)
085ab841 +0x10b:  mov    0x8(%ebp),%eax
085ab844 +0x10e:  mov    %eax,(%esp)
085ab847 +0x111:  call   085b401c <_ZN6CParty23HaveAlreadySelectedCardEc22eClearRewardCardType_t>  ; CParty::HaveAlreadySelectedCard(char, eClearRewardCardType_t)
085ab84c +0x116:  test   %al,%al
085ab84e +0x118:  je     085aba1a <+0x2e4>
085ab854 +0x11e:  mov    -0x14(%ebp),%eax
085ab857 +0x121:  mov    0x8(%ebp),%edx
085ab85a +0x124:  imul   $0x7a,%eax,%eax
085ab85d +0x127:  lea    (%edx,%eax,1),%eax
085ab860 +0x12a:  add    $0x79d,%eax
085ab865 +0x12f:  mov    0x12(%eax),%eax
085ab868 +0x132:  mov    %eax,%ebx
085ab86a +0x134:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085ab86f +0x139:  mov    %ebx,0x4(%esp)
085ab873 +0x13d:  mov    %eax,(%esp)
085ab876 +0x140:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085ab87b +0x145:  mov    %eax,-0xc(%ebp)
085ab87e +0x148:  cmpl   $0x0,-0xc(%ebp)
085ab882 +0x14c:  je     085ab91b <+0x1e5>
085ab888 +0x152:  movl   $0x0,-0x30(%ebp)
085ab88f +0x159:  mov    -0x14(%ebp),%eax
085ab892 +0x15c:  mov    0x8(%ebp),%edx
085ab895 +0x15f:  imul   $0x7a,%eax,%eax
085ab898 +0x162:  lea    (%edx,%eax,1),%eax
085ab89b +0x165:  add    $0x79d,%eax
085ab8a0 +0x16a:  mov    0x17(%eax),%eax
085ab8a3 +0x16d:  movswl %ax,%ebx
085ab8a6 +0x170:  mov    -0x14(%ebp),%eax
085ab8a9 +0x173:  imul   $0x7a,%eax,%eax
085ab8ac +0x176:  add    $0x79d,%eax
085ab8b1 +0x17b:  add    0x8(%ebp),%eax
085ab8b4 +0x17e:  lea    0x10(%eax),%esi
085ab8b7 +0x181:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
085ab8bc +0x186:  lea    -0x30(%ebp),%edx
085ab8bf +0x189:  mov    %edx,0x14(%esp)
085ab8c3 +0x18d:  movl   $0x0,0x10(%esp)
085ab8cb +0x195:  mov    %ebx,0xc(%esp)
085ab8cf +0x199:  mov    -0xc(%ebp),%edx
085ab8d2 +0x19c:  mov    %edx,0x8(%esp)
085ab8d6 +0x1a0:  mov    %esi,0x4(%esp)
085ab8da +0x1a4:  mov    %eax,(%esp)
085ab8dd +0x1a7:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
085ab8e2 +0x1ac:  mov    -0x30(%ebp),%eax
085ab8e5 +0x1af:  mov    %eax,%esi
085ab8e7 +0x1b1:  mov    -0x14(%ebp),%edx
085ab8ea +0x1b4:  mov    0x8(%ebp),%ecx
085ab8ed +0x1b7:  mov    %edx,%eax
085ab8ef +0x1b9:  add    %eax,%eax
085ab8f1 +0x1bb:  add    %edx,%eax
085ab8f3 +0x1bd:  shl    $0x3,%eax
085ab8f6 +0x1c0:  lea    (%ecx,%eax,1),%eax
085ab8f9 +0x1c3:  add    $0x78,%eax
085ab8fc +0x1c6:  mov    (%eax),%ebx
085ab8fe +0x1c8:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085ab903 +0x1cd:  mov    %esi,0xc(%esp)
085ab907 +0x1d1:  mov    %ebx,0x8(%esp)
085ab90b +0x1d5:  movl   $0x5,0x4(%esp)
085ab913 +0x1dd:  mov    %eax,(%esp)
085ab916 +0x1e0:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085ab91b +0x1e5:  mov    -0x14(%ebp),%eax
085ab91e +0x1e8:  imul   $0x7a,%eax,%eax
085ab921 +0x1eb:  add    $0x760,%eax
085ab926 +0x1f0:  add    0x8(%ebp),%eax
085ab929 +0x1f3:  add    $0x10,%eax
085ab92c +0x1f6:  mov    %eax,%ecx
085ab92e +0x1f8:  mov    -0x14(%ebp),%edx
085ab931 +0x1fb:  mov    0x8(%ebp),%ebx
085ab934 +0x1fe:  mov    %edx,%eax
085ab936 +0x200:  add    %eax,%eax
085ab938 +0x202:  add    %edx,%eax
085ab93a +0x204:  shl    $0x3,%eax
085ab93d +0x207:  lea    (%ebx,%eax,1),%eax
085ab940 +0x20a:  add    $0x78,%eax
085ab943 +0x20d:  mov    (%eax),%eax
085ab945 +0x20f:  lea    -0x2c(%ebp),%edx
085ab948 +0x212:  mov    %edx,0xc(%esp)
085ab94c +0x216:  mov    %ecx,0x8(%esp)
085ab950 +0x21a:  mov    %eax,0x4(%esp)
085ab954 +0x21e:  mov    0x8(%ebp),%eax
085ab957 +0x221:  mov    %eax,(%esp)
085ab95a +0x224:  call   085aab84 <_ZN6CParty16_putItemIntoUserEP5CUserP10Inven_ItemR11PacketGuard>  ; CParty::_putItemIntoUser(CUser*, Inven_Item*, PacketGuard&)
085ab95f +0x229:  add    %eax,-0x10(%ebp)
085ab962 +0x22c:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085ab967 +0x231:  movl   $0x40,0x4(%esp)
085ab96f +0x239:  mov    %eax,(%esp)
085ab972 +0x23c:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085ab977 +0x241:  mov    (%eax),%edx
085ab979 +0x243:  add    $0x34,%edx
085ab97c +0x246:  mov    (%edx),%edx
085ab97e +0x248:  movl   $0x0,0x4(%esp)
085ab986 +0x250:  mov    %eax,(%esp)
085ab989 +0x253:  call   *%edx
085ab98b +0x255:  test   %al,%al
085ab98d +0x257:  jne    085ab9ad <+0x277>
085ab98f +0x259:  mov    0x8(%ebp),%eax
085ab992 +0x25c:  mov    %eax,(%esp)
085ab995 +0x25f:  call   085b9f50 <_ZN6CParty17IsReturnUserPartyEv>  ; CParty::IsReturnUserParty()
085ab99a +0x264:  test   %al,%al
085ab99c +0x266:  jne    085ab9ad <+0x277>
085ab99e +0x268:  mov    0x8(%ebp),%eax
085ab9a1 +0x26b:  mov    %eax,(%esp)
085ab9a4 +0x26e:  call   085b9fd4 <_ZN6CParty18IsEventCharacPartyEv>  ; CParty::IsEventCharacParty()
085ab9a9 +0x273:  test   %al,%al
085ab9ab +0x275:  je     085ab9b4 <+0x27e>
085ab9ad +0x277:  mov    $0x1,%eax
085ab9b2 +0x27c:  jmp    085ab9b9 <+0x283>
085ab9b4 +0x27e:  mov    $0x0,%eax
085ab9b9 +0x283:  test   %al,%al
085ab9bb +0x285:  je     085aba16 <+0x2e0>
085ab9bd +0x287:  mov    0x8(%ebp),%eax
085ab9c0 +0x28a:  mov    %eax,(%esp)
085ab9c3 +0x28d:  call   085bf6f8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xc56>  ; global constructors keyed to CParty::cMember::cMember()+0xc56
085ab9c8 +0x292:  xor    $0x1,%eax
085ab9cb +0x295:  test   %al,%al
085ab9cd +0x297:  je     085aba16 <+0x2e0>
085ab9cf +0x299:  mov    -0x14(%ebp),%eax
085ab9d2 +0x29c:  imul   $0x7a,%eax,%eax
085ab9d5 +0x29f:  add    $0x760,%eax
085ab9da +0x2a4:  add    0x8(%ebp),%eax
085ab9dd +0x2a7:  add    $0x10,%eax
085ab9e0 +0x2aa:  mov    %eax,%ecx
085ab9e2 +0x2ac:  mov    -0x14(%ebp),%edx
085ab9e5 +0x2af:  mov    0x8(%ebp),%ebx
085ab9e8 +0x2b2:  mov    %edx,%eax
085ab9ea +0x2b4:  add    %eax,%eax
085ab9ec +0x2b6:  add    %edx,%eax
085ab9ee +0x2b8:  shl    $0x3,%eax
085ab9f1 +0x2bb:  lea    (%ebx,%eax,1),%eax
085ab9f4 +0x2be:  add    $0x78,%eax
085ab9f7 +0x2c1:  mov    (%eax),%eax
085ab9f9 +0x2c3:  lea    -0x2c(%ebp),%edx
085ab9fc +0x2c6:  mov    %edx,0xc(%esp)
085aba00 +0x2ca:  mov    %ecx,0x8(%esp)
085aba04 +0x2ce:  mov    %eax,0x4(%esp)
085aba08 +0x2d2:  mov    0x8(%ebp),%eax
085aba0b +0x2d5:  mov    %eax,(%esp)
085aba0e +0x2d8:  call   085aab84 <_ZN6CParty16_putItemIntoUserEP5CUserP10Inven_ItemR11PacketGuard>  ; CParty::_putItemIntoUser(CUser*, Inven_Item*, PacketGuard&)
085aba13 +0x2dd:  add    %eax,-0x10(%ebp)
085aba16 +0x2e0:  addl   $0x1,-0x20(%ebp)
085aba1a +0x2e4:  mov    -0x14(%ebp),%eax
085aba1d +0x2e7:  imul   $0x7a,%eax,%eax
085aba20 +0x2ea:  add    $0x390,%eax
085aba25 +0x2ef:  add    0x8(%ebp),%eax
085aba28 +0x2f2:  add    $0x10,%eax
085aba2b +0x2f5:  mov    %eax,(%esp)
085aba2e +0x2f8:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085aba33 +0x2fd:  mov    -0x14(%ebp),%eax
085aba36 +0x300:  imul   $0x7a,%eax,%eax
085aba39 +0x303:  add    $0x3cd,%eax
085aba3e +0x308:  add    0x8(%ebp),%eax
085aba41 +0x30b:  add    $0x10,%eax
085aba44 +0x30e:  mov    %eax,(%esp)
085aba47 +0x311:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085aba4c +0x316:  mov    -0x14(%ebp),%eax
085aba4f +0x319:  imul   $0x7a,%eax,%eax
085aba52 +0x31c:  add    $0x570,%eax
085aba57 +0x321:  add    0x8(%ebp),%eax
085aba5a +0x324:  add    $0x18,%eax
085aba5d +0x327:  mov    %eax,(%esp)
085aba60 +0x32a:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085aba65 +0x32f:  mov    -0x14(%ebp),%eax
085aba68 +0x332:  imul   $0x7a,%eax,%eax
085aba6b +0x335:  add    $0x5ad,%eax
085aba70 +0x33a:  add    0x8(%ebp),%eax
085aba73 +0x33d:  add    $0x18,%eax
085aba76 +0x340:  mov    %eax,(%esp)
085aba79 +0x343:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085aba7e +0x348:  mov    -0x14(%ebp),%eax
085aba81 +0x34b:  imul   $0x7a,%eax,%eax
085aba84 +0x34e:  add    $0x760,%eax
085aba89 +0x353:  add    0x8(%ebp),%eax
085aba8c +0x356:  add    $0x10,%eax
085aba8f +0x359:  mov    %eax,(%esp)
085aba92 +0x35c:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085aba97 +0x361:  mov    -0x14(%ebp),%eax
085aba9a +0x364:  imul   $0x7a,%eax,%eax
085aba9d +0x367:  add    $0x79d,%eax
085abaa2 +0x36c:  add    0x8(%ebp),%eax
085abaa5 +0x36f:  add    $0x10,%eax
085abaa8 +0x372:  mov    %eax,(%esp)
085abaab +0x375:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085abab0 +0x37a:  mov    0x8(%ebp),%eax
085abab3 +0x37d:  add    $0x32c,%eax
085abab8 +0x382:  mov    %eax,(%esp)
085ababb +0x385:  call   085be6ba <_ZN10BattleData27ResetEventDungeonClearPointEv>  ; BattleData::ResetEventDungeonClearPoint()
085abac0 +0x38a:  mov    -0x14(%ebp),%edx
085abac3 +0x38d:  mov    0x8(%ebp),%ecx
085abac6 +0x390:  mov    %edx,%eax
085abac8 +0x392:  add    %eax,%eax
085abaca +0x394:  add    %edx,%eax
085abacc +0x396:  shl    $0x3,%eax
085abacf +0x399:  lea    (%ecx,%eax,1),%eax
085abad2 +0x39c:  add    $0x78,%eax
085abad5 +0x39f:  mov    (%eax),%eax
085abad7 +0x3a1:  mov    0x796f8(%eax),%eax
085abadd +0x3a7:  mov    %eax,(%esp)
085abae0 +0x3aa:  call   084ba0b0 <_ZN10HistoryLog13WriteDunClearEP8_IO_FILE>  ; HistoryLog::WriteDunClear(_IO_FILE*)
085abae5 +0x3af:  mov    -0x14(%ebp),%edx
085abae8 +0x3b2:  mov    0x8(%ebp),%ecx
085abaeb +0x3b5:  mov    %edx,%eax
085abaed +0x3b7:  add    %eax,%eax
085abaef +0x3b9:  add    %edx,%eax
085abaf1 +0x3bb:  shl    $0x3,%eax
085abaf4 +0x3be:  lea    (%ecx,%eax,1),%eax
085abaf7 +0x3c1:  add    $0x78,%eax
085abafa +0x3c4:  mov    (%eax),%eax
085abafc +0x3c6:  mov    %eax,0x4(%esp)
085abb00 +0x3ca:  mov    0x8(%ebp),%eax
085abb03 +0x3cd:  mov    %eax,(%esp)
085abb06 +0x3d0:  call   085bf7fc <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd5a>  ; global constructors keyed to CParty::cMember::cMember()+0xd5a
085abb0b +0x3d5:  jmp    085abb0e <+0x3d8>
085abb0d +0x3d7:  nop
085abb0e +0x3d8:  addl   $0x1,-0x14(%ebp)
085abb12 +0x3dc:  cmpl   $0x3,-0x14(%ebp)
085abb16 +0x3e0:  setle  %al
085abb19 +0x3e3:  test   %al,%al
085abb1b +0x3e5:  jne    085ab77d <+0x47>
085abb21 +0x3eb:  movl   $0x2,0x4(%esp)
085abb29 +0x3f3:  mov    0x8(%ebp),%eax
085abb2c +0x3f6:  mov    %eax,(%esp)
085abb2f +0x3f9:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
085abb34 +0x3fe:  movl   $0x3c,-0x18(%ebp)
085abb3b +0x405:  mov    0x8(%ebp),%eax
085abb3e +0x408:  add    $0x2a4,%eax
085abb43 +0x40d:  mov    %eax,(%esp)
085abb46 +0x410:  call   08ab150c <_ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv>  ; secretshop::SECRET_SHOP_DATA::IsOpen()
085abb4b +0x415:  test   %al,%al
085abb4d +0x417:  je     085abb6b <+0x435>
085abb4f +0x419:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085abb54 +0x41e:  mov    0xa784(%eax),%eax
085abb5a +0x424:  shl    $0x2,%eax
085abb5d +0x427:  mov    %eax,%edx
085abb5f +0x429:  shl    $0x4,%edx
085abb62 +0x42c:  mov    %edx,%ecx
085abb64 +0x42e:  sub    %eax,%ecx
085abb66 +0x430:  mov    %ecx,%eax
085abb68 +0x432:  mov    %eax,-0x18(%ebp)
085abb6b +0x435:  movl   $0x15,0x4(%esp)
085abb73 +0x43d:  mov    0x8(%ebp),%eax
085abb76 +0x440:  mov    %eax,(%esp)
085abb79 +0x443:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085abb7e +0x448:  mov    %eax,%esi
085abb80 +0x44a:  mov    0x8(%ebp),%eax
085abb83 +0x44d:  mov    %eax,(%esp)
085abb86 +0x450:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085abb8b +0x455:  mov    %eax,%ebx
085abb8d +0x457:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085abb92 +0x45c:  movl   $0x0,0x18(%esp)
085abb9a +0x464:  mov    %esi,0x14(%esp)
085abb9e +0x468:  mov    -0x18(%ebp),%edx
085abba1 +0x46b:  mov    %edx,0x10(%esp)
085abba5 +0x46f:  movl   $0x15,0xc(%esp)
085abbad +0x477:  mov    %ebx,0x8(%esp)
085abbb1 +0x47b:  movl   $0x1,0x4(%esp)
085abbb9 +0x483:  mov    %eax,(%esp)
085abbbc +0x486:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085abbc1 +0x48b:  movl   $0x1,0x4(%esp)
085abbc9 +0x493:  mov    0x8(%ebp),%eax
085abbcc +0x496:  mov    %eax,(%esp)
085abbcf +0x499:  call   0826b978 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x246>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x246
085abbd4 +0x49e:  mov    0x8(%ebp),%eax
085abbd7 +0x4a1:  mov    %eax,(%esp)
085abbda +0x4a4:  call   085ac59c <_ZN6CParty26checkInoutConditionDungeonEv>  ; CParty::checkInoutConditionDungeon()
085abbdf +0x4a9:  mov    %eax,0x4(%esp)
085abbe3 +0x4ad:  mov    0x8(%ebp),%eax
085abbe6 +0x4b0:  mov    %eax,(%esp)
085abbe9 +0x4b3:  call   085ac95e <_ZN6CParty25sendInoutConditionDungeonEN15RetryFailReason1TE>  ; CParty::sendInoutConditionDungeon(RetryFailReason::T)
085abbee +0x4b8:  mov    0x8(%ebp),%eax
085abbf1 +0x4bb:  mov    %eax,(%esp)
085abbf4 +0x4be:  call   085bf6f8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xc56>  ; global constructors keyed to CParty::cMember::cMember()+0xc56
085abbf9 +0x4c3:  test   %al,%al
085abbfb +0x4c5:  je     085abc2b <+0x4f5>
085abbfd +0x4c7:  mov    0x8(%ebp),%eax
085abc00 +0x4ca:  mov    0xcac(%eax),%eax
085abc06 +0x4d0:  mov    %eax,(%esp)
085abc09 +0x4d3:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085abc0e +0x4d8:  mov    -0x20(%ebp),%edx
085abc11 +0x4db:  mov    %edx,0xc(%esp)
085abc15 +0x4df:  mov    -0x1c(%ebp),%edx
085abc18 +0x4e2:  mov    %edx,0x8(%esp)
085abc1c +0x4e6:  mov    %eax,0x4(%esp)
085abc20 +0x4ea:  mov    0x8(%ebp),%eax
085abc23 +0x4ed:  mov    %eax,(%esp)
085abc26 +0x4f0:  call   085aca0a <_ZN6CParty28sendPremiumGoldCardStatisticEiii>  ; CParty::sendPremiumGoldCardStatistic(int, int, int)
085abc2b +0x4f5:  mov    0x8(%ebp),%eax
085abc2e +0x4f8:  mov    %eax,(%esp)
085abc31 +0x4fb:  call   085bb0ac <_ZN6CParty24CheckHackAverageHitCountEv>  ; CParty::CheckHackAverageHitCount()
085abc36 +0x500:  mov    0x8(%ebp),%eax
085abc39 +0x503:  mov    %eax,(%esp)
085abc3c +0x506:  call   085bf850 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xdae>  ; global constructors keyed to CParty::cMember::cMember()+0xdae
085abc41 +0x50b:  mov    0x8(%ebp),%eax
085abc44 +0x50e:  add    $0x1abc,%eax
085abc49 +0x513:  mov    %eax,(%esp)
085abc4c +0x516:  call   0827aab6 <_ZN24Secu_HackLogCheckByParty12dungeonClearEv>  ; Secu_HackLogCheckByParty::dungeonClear()
085abc51 +0x51b:  jmp    085abc6e <+0x538>
085abc53 +0x51d:  mov    %edx,%ebx
085abc55 +0x51f:  mov    %eax,%esi
085abc57 +0x521:  lea    -0x2c(%ebp),%eax
085abc5a +0x524:  mov    %eax,(%esp)
085abc5d +0x527:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085abc62 +0x52c:  mov    %esi,%eax
085abc64 +0x52e:  mov    %ebx,%edx
085abc66 +0x530:  mov    %eax,(%esp)
085abc69 +0x533:  call   08ae3750 <_Unwind_Resume>
085abc6e +0x538:  lea    -0x2c(%ebp),%eax
085abc71 +0x53b:  mov    %eax,(%esp)
085abc74 +0x53e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085abc79 +0x543:  add    $0x50,%esp
085abc7c +0x546:  pop    %ebx
085abc7d +0x547:  pop    %esi
085abc7e +0x548:  pop    %ebp
085abc7f +0x549:  ret
```

## 反编译 C

```c
// CParty::dungeon_clear @ 0x85ab736

/* CParty::dungeon_clear() */

void __thiscall CParty::dungeon_clear(CParty *this)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  Store *this_01;
  CValueStatistic *pCVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TimerQueue *pTVar8;
  int local_34;
  PacketGuard local_30 [12];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  SaveCoin(this,1);
  local_24 = 0;
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 085ab769 to 085abc50 has its CatchHandler @ 085abc53 */
  local_20 = get_member_count(this);
  local_18 = 0;
  do {
    if (3 < local_18) {
      SetEPLPState(this,'\x02');
      local_1c = 0x3c;
      cVar2 = secretshop::SECRET_SHOP_DATA::IsOpen((SECRET_SHOP_DATA *)(this + 0x2a4));
      if (cVar2 != '\0') {
        iVar5 = G_CDataManager();
        local_1c = *(int *)(iVar5 + 0xa784) * 0x3c;
      }
      uVar6 = gen_timer_key(this,0x15);
      uVar7 = GetPartyIndex(this);
      pTVar8 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar8,1,uVar7,0x15,local_1c,uVar6,0);
      set_state(this,'\x01');
      uVar6 = checkInoutConditionDungeon(this);
      sendInoutConditionDungeon(this,uVar6);
      cVar2 = IsPremiumGoldCardParty(this);
      if (cVar2 != '\0') {
        iVar5 = CDungeon::get_standard_level(*(CDungeon **)(this + 0xcac));
        sendPremiumGoldCardStatistic(this,iVar5,local_20,local_24);
      }
      CheckHackAverageHitCount(this);
      ClearMapHitCount(this);
      Secu_HackLogCheckByParty::dungeonClear((Secu_HackLogCheckByParty *)(this + 0x1abc));
      PacketGuard::~PacketGuard(local_30);
      return;
    }
    cVar2 = _checkValidUser(this,local_18);
    if (cVar2 == '\x01') {
      local_14 = 0;
      iVar5 = _putItemIntoUser(this,*(CUser **)(this + local_18 * 0x18 + 0x78),
                               (Inven_Item *)(this + local_18 * 0x7a + 0x3a0),local_30);
      local_14 = local_14 + iVar5;
      iVar5 = _putItemIntoUser(this,*(CUser **)(this + local_18 * 0x18 + 0x78),
                               (Inven_Item *)(this + local_18 * 0x7a + 0x588),local_30);
      local_14 = local_14 + iVar5;
      cVar2 = HaveAlreadySelectedCard(this,(int)(char)local_18,1);
      if (cVar2 != '\0') {
        iVar5 = *(int *)(this + local_18 * 0x7a + 0x7af);
        this_00 = (CDataManager *)G_CDataManager();
        local_10 = (CItem *)CDataManager::find_item(this_00,iVar5);
        if (local_10 != (CItem *)0x0) {
          local_34 = 0;
          uVar6 = *(undefined4 *)(this + local_18 * 0x7a + 0x7b4);
          iVar5 = local_18 * 0x7a;
          this_01 = (Store *)G_Store();
          Store::GetSellItemPrice
                    (this_01,(Inven_Item *)(this + iVar5 + 0x7ad),local_10,(short)uVar6,false,
                     &local_34);
          iVar5 = local_34;
          uVar6 = *(undefined4 *)(this + local_18 * 0x18 + 0x78);
          pCVar3 = (CValueStatistic *)GetInstanceValueStatistic();
          CValueStatistic::AddValueStatistic(pCVar3,5,uVar6,iVar5);
        }
        iVar5 = _putItemIntoUser(this,*(CUser **)(this + local_18 * 0x18 + 0x78),
                                 (Inven_Item *)(this + local_18 * 0x7a + 0x770),local_30);
        local_14 = local_14 + iVar5;
        piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x40);
        cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
        if (cVar2 == '\0') {
          cVar2 = IsReturnUserParty(this);
          if (cVar2 != '\0') goto LAB_085ab9ad;
          cVar2 = IsEventCharacParty(this);
          if (cVar2 != '\0') goto LAB_085ab9ad;
          bVar1 = false;
        }
        else {
LAB_085ab9ad:
          bVar1 = true;
        }
        if (bVar1) {
          cVar2 = IsPremiumGoldCardParty(this);
          if (cVar2 != '\x01') {
            iVar5 = _putItemIntoUser(this,*(CUser **)(this + local_18 * 0x18 + 0x78),
                                     (Inven_Item *)(this + local_18 * 0x7a + 0x770),local_30);
            local_14 = local_14 + iVar5;
          }
        }
        local_24 = local_24 + 1;
      }
      Inven_Item::reset((Inven_Item *)(this + local_18 * 0x7a + 0x3a0));
      Inven_Item::reset((Inven_Item *)(this + local_18 * 0x7a + 0x3dd));
      Inven_Item::reset((Inven_Item *)(this + local_18 * 0x7a + 0x588));
      Inven_Item::reset((Inven_Item *)(this + local_18 * 0x7a + 0x5c5));
      Inven_Item::reset((Inven_Item *)(this + local_18 * 0x7a + 0x770));
      Inven_Item::reset((Inven_Item *)(this + local_18 * 0x7a + 0x7ad));
      BattleData::ResetEventDungeonClearPoint((BattleData *)(this + 0x32c));
      HistoryLog::WriteDunClear(*(_IO_FILE **)(*(int *)(this + local_18 * 0x18 + 0x78) + 0x796f8));
      OnSuccessedDungeonClear(this,*(CUser **)(this + local_18 * 0x18 + 0x78));
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
