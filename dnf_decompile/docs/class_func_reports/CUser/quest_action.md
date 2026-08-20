# quest_action

`_ZN5CUser12quest_actionEiiii`

`CUser::quest_action(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866da8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866da8a  _ZN5CUser12quest_actionEiiii
#           CUser::quest_action(int, int, int, int)
# range [0x0866da8a, 0x0866e3a7]
0866da8a +0x000:  push   %ebp
0866da8b +0x001:  mov    %esp,%ebp
0866da8d +0x003:  push   %esi
0866da8e +0x004:  push   %ebx
0866da8f +0x005:  sub    $0xc0,%esp
0866da95 +0x00b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866da9a +0x010:  mov    0x10(%ebp),%edx
0866da9d +0x013:  mov    %edx,0x4(%esp)
0866daa1 +0x017:  mov    %eax,(%esp)
0866daa4 +0x01a:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0866daa9 +0x01f:  mov    %eax,-0x30(%ebp)
0866daac +0x022:  cmpl   $0x0,-0x30(%ebp)
0866dab0 +0x026:  je     0866e39a <+0x910>
0866dab6 +0x02c:  mov    -0x30(%ebp),%eax
0866dab9 +0x02f:  mov    0x8(%eax),%eax
0866dabc +0x032:  cmp    $0x7,%eax
0866dabf +0x035:  je     0866e39d <+0x913>
0866dac5 +0x03b:  lea    -0x4c(%ebp),%eax
0866dac8 +0x03e:  mov    %eax,(%esp)
0866dacb +0x041:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0866dad0 +0x046:  mov    0xc(%ebp),%eax
0866dad3 +0x049:  mov    %eax,0x8(%esp)
0866dad7 +0x04d:  movl   $0x1,0x4(%esp)
0866dadf +0x055:  lea    -0x4c(%ebp),%eax
0866dae2 +0x058:  mov    %eax,(%esp)
0866dae5 +0x05b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0866daea +0x060:  mov    0xc(%ebp),%eax
0866daed +0x063:  cmp    $0x22,%eax
0866daf0 +0x066:  je     0866dca1 <+0x217>
0866daf6 +0x06c:  cmp    $0x22,%eax
0866daf9 +0x06f:  jg     0866db05 <+0x7b>
0866dafb +0x071:  cmp    $0x21,%eax
0866dafe +0x074:  je     0866db1c <+0x92>
0866db00 +0x076:  jmp    0866e38d <+0x903>
0866db05 +0x07b:  cmp    $0x23,%eax
0866db08 +0x07e:  je     0866ded2 <+0x448>
0866db0e +0x084:  cmp    $0x24,%eax
0866db11 +0x087:  je     0866dfd5 <+0x54b>
0866db17 +0x08d:  jmp    0866e38d <+0x903>
0866db1c +0x092:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866db21 +0x097:  mov    0x10(%ebp),%edx
0866db24 +0x09a:  mov    %edx,0x4(%esp)
0866db28 +0x09e:  mov    %eax,(%esp)
0866db2b +0x0a1:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0866db30 +0x0a6:  mov    %eax,-0x2c(%ebp)
0866db33 +0x0a9:  cmpl   $0x0,-0x2c(%ebp)
0866db37 +0x0ad:  je     0866dbab <+0x121>
0866db39 +0x0af:  mov    -0x2c(%ebp),%eax
0866db3c +0x0b2:  mov    0x134(%eax),%eax
0866db42 +0x0b8:  cmp    $0x1,%eax
0866db45 +0x0bb:  jne    0866dbab <+0x121>
0866db47 +0x0bd:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
0866db4c +0x0c2:  mov    %eax,(%esp)
0866db4f +0x0c5:  call   08234ff6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6a0
0866db54 +0x0ca:  xor    $0x1,%eax
0866db57 +0x0cd:  test   %al,%al
0866db59 +0x0cf:  je     0866dbab <+0x121>
0866db5b +0x0d1:  movl   $0x0,0x4(%esp)
0866db63 +0x0d9:  lea    -0x4c(%ebp),%eax
0866db66 +0x0dc:  mov    %eax,(%esp)
0866db69 +0x0df:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866db6e +0x0e4:  movl   $0x15,0x4(%esp)
0866db76 +0x0ec:  lea    -0x4c(%ebp),%eax
0866db79 +0x0ef:  mov    %eax,(%esp)
0866db7c +0x0f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866db81 +0x0f7:  movl   $0x1,0x4(%esp)
0866db89 +0x0ff:  lea    -0x4c(%ebp),%eax
0866db8c +0x102:  mov    %eax,(%esp)
0866db8f +0x105:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866db94 +0x10a:  lea    -0x4c(%ebp),%eax
0866db97 +0x10d:  mov    %eax,0x4(%esp)
0866db9b +0x111:  mov    0x8(%ebp),%eax
0866db9e +0x114:  mov    %eax,(%esp)
0866dba1 +0x117:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866dba6 +0x11c:  jmp    0866e38d <+0x903>
0866dbab +0x121:  cmpl   $0x0,-0x2c(%ebp)
0866dbaf +0x125:  je     0866dc21 <+0x197>
0866dbb1 +0x127:  mov    -0x2c(%ebp),%eax
0866dbb4 +0x12a:  mov    0x134(%eax),%eax
0866dbba +0x130:  cmp    $0x2,%eax
0866dbbd +0x133:  jne    0866dc21 <+0x197>
0866dbbf +0x135:  mov    -0x2c(%ebp),%eax
0866dbc2 +0x138:  mov    %eax,(%esp)
0866dbc5 +0x13b:  call   08353776 <_ZNK5Quest19IsOpenScheduleQuestEv>  ; Quest::IsOpenScheduleQuest() const
0866dbca +0x140:  xor    $0x1,%eax
0866dbcd +0x143:  test   %al,%al
0866dbcf +0x145:  je     0866dc21 <+0x197>
0866dbd1 +0x147:  movl   $0x0,0x4(%esp)
0866dbd9 +0x14f:  lea    -0x4c(%ebp),%eax
0866dbdc +0x152:  mov    %eax,(%esp)
0866dbdf +0x155:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866dbe4 +0x15a:  movl   $0x15,0x4(%esp)
0866dbec +0x162:  lea    -0x4c(%ebp),%eax
0866dbef +0x165:  mov    %eax,(%esp)
0866dbf2 +0x168:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866dbf7 +0x16d:  movl   $0x1,0x4(%esp)
0866dbff +0x175:  lea    -0x4c(%ebp),%eax
0866dc02 +0x178:  mov    %eax,(%esp)
0866dc05 +0x17b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866dc0a +0x180:  lea    -0x4c(%ebp),%eax
0866dc0d +0x183:  mov    %eax,0x4(%esp)
0866dc11 +0x187:  mov    0x8(%ebp),%eax
0866dc14 +0x18a:  mov    %eax,(%esp)
0866dc17 +0x18d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866dc1c +0x192:  jmp    0866e38d <+0x903>
0866dc21 +0x197:  lea    -0x4c(%ebp),%ebx
0866dc24 +0x19a:  mov    0x8(%ebp),%eax
0866dc27 +0x19d:  mov    %eax,(%esp)
0866dc2a +0x1a0:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0866dc2f +0x1a5:  lea    -0x40(%ebp),%edx
0866dc32 +0x1a8:  mov    %edx,0xc(%esp)
0866dc36 +0x1ac:  mov    %ebx,0x8(%esp)
0866dc3a +0x1b0:  mov    0x10(%ebp),%edx
0866dc3d +0x1b3:  mov    %edx,0x4(%esp)
0866dc41 +0x1b7:  mov    %eax,(%esp)
0866dc44 +0x1ba:  call   086abf38 <_ZN9UserQuest12accept_questEiPcRi>  ; UserQuest::accept_quest(int, char*, int&)
0866dc49 +0x1bf:  mov    %eax,-0x34(%ebp)
0866dc4c +0x1c2:  cmpl   $0x0,-0x34(%ebp)
0866dc50 +0x1c6:  jle    0866dc77 <+0x1ed>
0866dc52 +0x1c8:  movl   $0x0,0x4(%esp)
0866dc5a +0x1d0:  lea    -0x4c(%ebp),%eax
0866dc5d +0x1d3:  mov    %eax,(%esp)
0866dc60 +0x1d6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866dc65 +0x1db:  mov    -0x34(%ebp),%eax
0866dc68 +0x1de:  mov    %eax,0x4(%esp)
0866dc6c +0x1e2:  lea    -0x4c(%ebp),%eax
0866dc6f +0x1e5:  mov    %eax,(%esp)
0866dc72 +0x1e8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866dc77 +0x1ed:  movl   $0x1,0x4(%esp)
0866dc7f +0x1f5:  lea    -0x4c(%ebp),%eax
0866dc82 +0x1f8:  mov    %eax,(%esp)
0866dc85 +0x1fb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866dc8a +0x200:  lea    -0x4c(%ebp),%eax
0866dc8d +0x203:  mov    %eax,0x4(%esp)
0866dc91 +0x207:  mov    0x8(%ebp),%eax
0866dc94 +0x20a:  mov    %eax,(%esp)
0866dc97 +0x20d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866dc9c +0x212:  jmp    0866e38d <+0x903>
0866dca1 +0x217:  mov    0x8(%ebp),%eax
0866dca4 +0x21a:  mov    %eax,(%esp)
0866dca7 +0x21d:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0866dcac +0x222:  mov    0x10(%ebp),%edx
0866dcaf +0x225:  mov    %edx,0x4(%esp)
0866dcb3 +0x229:  mov    %eax,(%esp)
0866dcb6 +0x22c:  call   086ac532 <_ZN9UserQuest12giveup_questEi>  ; UserQuest::giveup_quest(int)
0866dcbb +0x231:  mov    %eax,-0x34(%ebp)
0866dcbe +0x234:  cmpl   $0x0,-0x34(%ebp)
0866dcc2 +0x238:  jle    0866dcee <+0x264>
0866dcc4 +0x23a:  movl   $0x0,0x4(%esp)
0866dccc +0x242:  lea    -0x4c(%ebp),%eax
0866dccf +0x245:  mov    %eax,(%esp)
0866dcd2 +0x248:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866dcd7 +0x24d:  mov    -0x34(%ebp),%eax
0866dcda +0x250:  mov    %eax,0x4(%esp)
0866dcde +0x254:  lea    -0x4c(%ebp),%eax
0866dce1 +0x257:  mov    %eax,(%esp)
0866dce4 +0x25a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866dce9 +0x25f:  jmp    0866dea8 <+0x41e>
0866dcee +0x264:  movl   $0x1,0x4(%esp)
0866dcf6 +0x26c:  lea    -0x4c(%ebp),%eax
0866dcf9 +0x26f:  mov    %eax,(%esp)
0866dcfc +0x272:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866dd01 +0x277:  mov    0x10(%ebp),%eax
0866dd04 +0x27a:  mov    %eax,0x4(%esp)
0866dd08 +0x27e:  lea    -0x4c(%ebp),%eax
0866dd0b +0x281:  mov    %eax,(%esp)
0866dd0e +0x284:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866dd13 +0x289:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866dd18 +0x28e:  mov    0x10(%ebp),%edx
0866dd1b +0x291:  mov    %edx,0x4(%esp)
0866dd1f +0x295:  mov    %eax,(%esp)
0866dd22 +0x298:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0866dd27 +0x29d:  mov    %eax,-0x28(%ebp)
0866dd2a +0x2a0:  cmpl   $0x0,-0x28(%ebp)
0866dd2e +0x2a4:  je     0866e38d <+0x903>
0866dd34 +0x2aa:  mov    -0x28(%ebp),%eax
0866dd37 +0x2ad:  add    $0x70,%eax
0866dd3a +0x2b0:  mov    %eax,(%esp)
0866dd3d +0x2b3:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
0866dd42 +0x2b8:  xor    $0x1,%eax
0866dd45 +0x2bb:  test   %al,%al
0866dd47 +0x2bd:  je     0866de96 <+0x40c>
0866dd4d +0x2c3:  movb   $0x0,-0x4d(%ebp)
0866dd51 +0x2c7:  lea    -0x5c(%ebp),%eax
0866dd54 +0x2ca:  mov    %eax,(%esp)
0866dd57 +0x2cd:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0866dd5c +0x2d2:  mov    -0x28(%ebp),%eax
0866dd5f +0x2d5:  add    $0x70,%eax
0866dd62 +0x2d8:  mov    %eax,(%esp)
0866dd65 +0x2db:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0866dd6a +0x2e0:  mov    %eax,%edx
0866dd6c +0x2e2:  mov    %edx,%eax
0866dd6e +0x2e4:  add    %eax,%eax
0866dd70 +0x2e6:  add    %edx,%eax
0866dd72 +0x2e8:  mov    %eax,0x4(%esp)
0866dd76 +0x2ec:  lea    -0x5c(%ebp),%eax
0866dd79 +0x2ef:  mov    %eax,(%esp)
0866dd7c +0x2f2:  call   0817ee44 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x75>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x75
0866dd81 +0x2f7:  mov    -0x28(%ebp),%eax
0866dd84 +0x2fa:  lea    0x70(%eax),%ebx
0866dd87 +0x2fd:  mov    0x8(%ebp),%eax
0866dd8a +0x300:  mov    %eax,(%esp)
0866dd8d +0x303:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0866dd92 +0x308:  movl   $0x0,0x18(%esp)
0866dd9a +0x310:  movl   $0x4,0x14(%esp)
0866dda2 +0x318:  movl   $0x4,0x10(%esp)
0866ddaa +0x320:  lea    -0x4d(%ebp),%edx
0866ddad +0x323:  mov    %edx,0xc(%esp)
0866ddb1 +0x327:  lea    -0x5c(%ebp),%edx
0866ddb4 +0x32a:  mov    %edx,0x8(%esp)
0866ddb8 +0x32e:  mov    %ebx,0x4(%esp)
0866ddbc +0x332:  mov    %eax,(%esp)
0866ddbf +0x335:  call   08505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>  ; CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)
0866ddc4 +0x33a:  mov    %eax,-0x24(%ebp)
0866ddc7 +0x33d:  lea    -0x60(%ebp),%eax
0866ddca +0x340:  lea    -0x5c(%ebp),%edx
0866ddcd +0x343:  mov    %edx,0x4(%esp)
0866ddd1 +0x347:  mov    %eax,(%esp)
0866ddd4 +0x34a:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0866ddd9 +0x34f:  sub    $0x4,%esp
0866dddc +0x352:  jmp    0866de42 <+0x3b8>
0866ddde +0x354:  lea    -0x60(%ebp),%eax
0866dde1 +0x357:  mov    %eax,(%esp)
0866dde4 +0x35a:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0866dde9 +0x35f:  mov    (%eax),%eax
0866ddeb +0x361:  mov    %eax,-0x20(%ebp)
0866ddee +0x364:  lea    -0x60(%ebp),%eax
0866ddf1 +0x367:  mov    %eax,(%esp)
0866ddf4 +0x36a:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
0866ddf9 +0x36f:  lea    -0x60(%ebp),%eax
0866ddfc +0x372:  mov    %eax,(%esp)
0866ddff +0x375:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0866de04 +0x37a:  mov    (%eax),%eax
0866de06 +0x37c:  mov    %ax,-0x1c(%ebp)
0866de0a +0x380:  lea    -0x60(%ebp),%eax
0866de0d +0x383:  mov    %eax,(%esp)
0866de10 +0x386:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
0866de15 +0x38b:  movswl -0x1c(%ebp),%eax
0866de19 +0x38f:  mov    %eax,0xc(%esp)
0866de1d +0x393:  mov    -0x20(%ebp),%eax
0866de20 +0x396:  mov    %eax,0x8(%esp)
0866de24 +0x39a:  movl   $0x1,0x4(%esp)
0866de2c +0x3a2:  mov    0x8(%ebp),%eax
0866de2f +0x3a5:  mov    %eax,(%esp)
0866de32 +0x3a8:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0866de37 +0x3ad:  lea    -0x60(%ebp),%eax
0866de3a +0x3b0:  mov    %eax,(%esp)
0866de3d +0x3b3:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
0866de42 +0x3b8:  lea    -0x3c(%ebp),%eax
0866de45 +0x3bb:  lea    -0x5c(%ebp),%edx
0866de48 +0x3be:  mov    %edx,0x4(%esp)
0866de4c +0x3c2:  mov    %eax,(%esp)
0866de4f +0x3c5:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0866de54 +0x3ca:  sub    $0x4,%esp
0866de57 +0x3cd:  lea    -0x3c(%ebp),%eax
0866de5a +0x3d0:  mov    %eax,0x4(%esp)
0866de5e +0x3d4:  lea    -0x60(%ebp),%eax
0866de61 +0x3d7:  mov    %eax,(%esp)
0866de64 +0x3da:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0866de69 +0x3df:  test   %al,%al
0866de6b +0x3e1:  jne    0866ddde <+0x354>
0866de71 +0x3e7:  jmp    0866de8b <+0x401>
0866de73 +0x3e9:  mov    %edx,%ebx
0866de75 +0x3eb:  mov    %eax,%esi
0866de77 +0x3ed:  lea    -0x5c(%ebp),%eax
0866de7a +0x3f0:  mov    %eax,(%esp)
0866de7d +0x3f3:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0866de82 +0x3f8:  mov    %esi,%eax
0866de84 +0x3fa:  mov    %ebx,%edx
0866de86 +0x3fc:  jmp    0866e372 <+0x8e8>
0866de8b +0x401:  lea    -0x5c(%ebp),%eax
0866de8e +0x404:  mov    %eax,(%esp)
0866de91 +0x407:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0866de96 +0x40c:  mov    -0x28(%ebp),%eax
0866de99 +0x40f:  mov    %eax,0x4(%esp)
0866de9d +0x413:  mov    0x8(%ebp),%eax
0866dea0 +0x416:  mov    %eax,(%esp)
0866dea3 +0x419:  call   0866d972 <_ZN5CUser30SendHasNoGoWithApcQuestInPartyEPK5Quest>  ; CUser::SendHasNoGoWithApcQuestInParty(Quest const*)
0866dea8 +0x41e:  movl   $0x1,0x4(%esp)
0866deb0 +0x426:  lea    -0x4c(%ebp),%eax
0866deb3 +0x429:  mov    %eax,(%esp)
0866deb6 +0x42c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866debb +0x431:  lea    -0x4c(%ebp),%eax
0866debe +0x434:  mov    %eax,0x4(%esp)
0866dec2 +0x438:  mov    0x8(%ebp),%eax
0866dec5 +0x43b:  mov    %eax,(%esp)
0866dec8 +0x43e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866decd +0x443:  jmp    0866e38d <+0x903>
0866ded2 +0x448:  mov    0x18(%ebp),%eax
0866ded5 +0x44b:  mov    %al,-0x19(%ebp)
0866ded8 +0x44e:  cmpb   $0x0,-0x19(%ebp)
0866dedc +0x452:  setne  %al
0866dedf +0x455:  movzbl %al,%esi
0866dee2 +0x458:  mov    0x14(%ebp),%eax
0866dee5 +0x45b:  movsbl %al,%ebx
0866dee8 +0x45e:  mov    0x8(%ebp),%eax
0866deeb +0x461:  mov    %eax,(%esp)
0866deee +0x464:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0866def3 +0x469:  mov    %esi,0xc(%esp)
0866def7 +0x46d:  mov    %ebx,0x8(%esp)
0866defb +0x471:  mov    0x10(%ebp),%edx
0866defe +0x474:  mov    %edx,0x4(%esp)
0866df02 +0x478:  mov    %eax,(%esp)
0866df05 +0x47b:  call   086ac6ac <_ZN9UserQuest11set_triggerEicb>  ; UserQuest::set_trigger(int, char, bool)
0866df0a +0x480:  mov    %eax,-0x34(%ebp)
0866df0d +0x483:  cmpl   $0xffffffff,-0x34(%ebp)
0866df11 +0x487:  jne    0866df3b <+0x4b1>
0866df13 +0x489:  movl   $0x0,0x4(%esp)
0866df1b +0x491:  lea    -0x4c(%ebp),%eax
0866df1e +0x494:  mov    %eax,(%esp)
0866df21 +0x497:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866df26 +0x49c:  movl   $0x16,0x4(%esp)
0866df2e +0x4a4:  lea    -0x4c(%ebp),%eax
0866df31 +0x4a7:  mov    %eax,(%esp)
0866df34 +0x4aa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866df39 +0x4af:  jmp    0866dfab <+0x521>
0866df3b +0x4b1:  movl   $0x1,0x4(%esp)
0866df43 +0x4b9:  lea    -0x4c(%ebp),%eax
0866df46 +0x4bc:  mov    %eax,(%esp)
0866df49 +0x4bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866df4e +0x4c4:  mov    0x10(%ebp),%eax
0866df51 +0x4c7:  mov    %eax,0x4(%esp)
0866df55 +0x4cb:  lea    -0x4c(%ebp),%eax
0866df58 +0x4ce:  mov    %eax,(%esp)
0866df5b +0x4d1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866df60 +0x4d6:  mov    -0x34(%ebp),%eax
0866df63 +0x4d9:  mov    %eax,0x4(%esp)
0866df67 +0x4dd:  lea    -0x4c(%ebp),%eax
0866df6a +0x4e0:  mov    %eax,(%esp)
0866df6d +0x4e3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866df72 +0x4e8:  cmpl   $0x0,-0x34(%ebp)
0866df76 +0x4ec:  jne    0866dfab <+0x521>
0866df78 +0x4ee:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866df7d +0x4f3:  mov    0x10(%ebp),%edx
0866df80 +0x4f6:  mov    %edx,0x4(%esp)
0866df84 +0x4fa:  mov    %eax,(%esp)
0866df87 +0x4fd:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0866df8c +0x502:  mov    %eax,-0x18(%ebp)
0866df8f +0x505:  cmpl   $0x0,-0x18(%ebp)
0866df93 +0x509:  je     0866e38d <+0x903>
0866df99 +0x50f:  mov    -0x18(%ebp),%eax
0866df9c +0x512:  mov    %eax,0x4(%esp)
0866dfa0 +0x516:  mov    0x8(%ebp),%eax
0866dfa3 +0x519:  mov    %eax,(%esp)
0866dfa6 +0x51c:  call   0866d972 <_ZN5CUser30SendHasNoGoWithApcQuestInPartyEPK5Quest>  ; CUser::SendHasNoGoWithApcQuestInParty(Quest const*)
0866dfab +0x521:  movl   $0x1,0x4(%esp)
0866dfb3 +0x529:  lea    -0x4c(%ebp),%eax
0866dfb6 +0x52c:  mov    %eax,(%esp)
0866dfb9 +0x52f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866dfbe +0x534:  lea    -0x4c(%ebp),%eax
0866dfc1 +0x537:  mov    %eax,0x4(%esp)
0866dfc5 +0x53b:  mov    0x8(%ebp),%eax
0866dfc8 +0x53e:  mov    %eax,(%esp)
0866dfcb +0x541:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866dfd0 +0x546:  jmp    0866e38d <+0x903>
0866dfd5 +0x54b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0866dfdc +0x552:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0866dfe1 +0x557:  mov    0x8(%ebp),%edx
0866dfe4 +0x55a:  mov    0x79644(%edx),%edx
0866dfea +0x560:  sub    %edx,%eax
0866dfec +0x562:  cmp    $0x3e8,%eax
0866dff1 +0x567:  setbe  %al
0866dff4 +0x56a:  test   %al,%al
0866dff6 +0x56c:  je     0866e0ad <+0x623>
0866dffc +0x572:  mov    0x8(%ebp),%eax
0866dfff +0x575:  mov    0x79648(%eax),%eax
0866e005 +0x57b:  lea    0x1(%eax),%edx
0866e008 +0x57e:  mov    0x8(%ebp),%eax
0866e00b +0x581:  mov    %edx,0x79648(%eax)
0866e011 +0x587:  mov    0x8(%ebp),%eax
0866e014 +0x58a:  mov    0x79648(%eax),%eax
0866e01a +0x590:  cmp    $0x1,%eax
0866e01d +0x593:  jbe    0866e0cf <+0x645>
0866e023 +0x599:  mov    0x8(%ebp),%eax
0866e026 +0x59c:  mov    %eax,(%esp)
0866e029 +0x59f:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0866e02e +0x5a4:  movl   $0x0,0x14(%esp)
0866e036 +0x5ac:  movl   $0x0,0x10(%esp)
0866e03e +0x5b4:  movl   $0x1,0xc(%esp)
0866e046 +0x5bc:  movl   $0x192,0x8(%esp)
0866e04e +0x5c4:  mov    0x8(%ebp),%edx
0866e051 +0x5c7:  mov    %edx,0x4(%esp)
0866e055 +0x5cb:  mov    %eax,(%esp)
0866e058 +0x5ce:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0866e05d +0x5d3:  movl   $0x0,0x4(%esp)
0866e065 +0x5db:  lea    -0x4c(%ebp),%eax
0866e068 +0x5de:  mov    %eax,(%esp)
0866e06b +0x5e1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866e070 +0x5e6:  movl   $0x1,0x4(%esp)
0866e078 +0x5ee:  lea    -0x4c(%ebp),%eax
0866e07b +0x5f1:  mov    %eax,(%esp)
0866e07e +0x5f4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866e083 +0x5f9:  movl   $0x1,0x4(%esp)
0866e08b +0x601:  lea    -0x4c(%ebp),%eax
0866e08e +0x604:  mov    %eax,(%esp)
0866e091 +0x607:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866e096 +0x60c:  lea    -0x4c(%ebp),%eax
0866e099 +0x60f:  mov    %eax,0x4(%esp)
0866e09d +0x613:  mov    0x8(%ebp),%eax
0866e0a0 +0x616:  mov    %eax,(%esp)
0866e0a3 +0x619:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866e0a8 +0x61e:  jmp    0866e38d <+0x903>
0866e0ad +0x623:  mov    0x8(%ebp),%eax
0866e0b0 +0x626:  movl   $0x0,0x79648(%eax)
0866e0ba +0x630:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0866e0c1 +0x637:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0866e0c6 +0x63c:  mov    0x8(%ebp),%edx
0866e0c9 +0x63f:  mov    %eax,0x79644(%edx)
0866e0cf +0x645:  mov    0x18(%ebp),%eax
0866e0d2 +0x648:  mov    %eax,0xc(%esp)
0866e0d6 +0x64c:  mov    0x14(%ebp),%eax
0866e0d9 +0x64f:  mov    %eax,0x8(%esp)
0866e0dd +0x653:  mov    0x10(%ebp),%eax
0866e0e0 +0x656:  mov    %eax,0x4(%esp)
0866e0e4 +0x65a:  mov    0x8(%ebp),%eax
0866e0e7 +0x65d:  mov    %eax,(%esp)
0866e0ea +0x660:  call   0866ea92 <_ZN5CUser12quest_rewardEiii>  ; CUser::quest_reward(int, int, int)
0866e0ef +0x665:  mov    %eax,-0x34(%ebp)
0866e0f2 +0x668:  cmpl   $0x0,-0x34(%ebp)
0866e0f6 +0x66c:  jle    0866e122 <+0x698>
0866e0f8 +0x66e:  movl   $0x0,0x4(%esp)
0866e100 +0x676:  lea    -0x4c(%ebp),%eax
0866e103 +0x679:  mov    %eax,(%esp)
0866e106 +0x67c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866e10b +0x681:  mov    -0x34(%ebp),%eax
0866e10e +0x684:  mov    %eax,0x4(%esp)
0866e112 +0x688:  lea    -0x4c(%ebp),%eax
0866e115 +0x68b:  mov    %eax,(%esp)
0866e118 +0x68e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866e11d +0x693:  jmp    0866e333 <+0x8a9>
0866e122 +0x698:  lea    -0x68(%ebp),%eax
0866e125 +0x69b:  mov    %eax,(%esp)
0866e128 +0x69e:  call   082357d6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae80>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae80
0866e12d +0x6a3:  mov    0x8(%ebp),%eax
0866e130 +0x6a6:  mov    %eax,0x4(%esp)
0866e134 +0x6aa:  lea    -0xa0(%ebp),%eax
0866e13a +0x6b0:  mov    %eax,(%esp)
0866e13d +0x6b3:  call   083480b4 <_ZN18stSelectQuestParamC1EP5CUser>  ; stSelectQuestParam::stSelectQuestParam(CUser*)
0866e142 +0x6b8:  mov    0x8(%ebp),%eax
0866e145 +0x6bb:  mov    %eax,(%esp)
0866e148 +0x6be:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0866e14d +0x6c3:  lea    -0xa0(%ebp),%edx
0866e153 +0x6c9:  mov    %edx,0x8(%esp)
0866e157 +0x6cd:  lea    -0x68(%ebp),%edx
0866e15a +0x6d0:  mov    %edx,0x4(%esp)
0866e15e +0x6d4:  mov    %eax,(%esp)
0866e161 +0x6d7:  call   086abd7a <_ZNK9UserQuest19get_mail_quest_infoERSt4listIiSaIiEERK18stSelectQuestParam>  ; UserQuest::get_mail_quest_info(std::list<int, std::allocator<int> >&, stSelectQuestParam const&) const
0866e166 +0x6dc:  test   %al,%al
0866e168 +0x6de:  je     0866e220 <+0x796>
0866e16e +0x6e4:  lea    -0x78(%ebp),%eax
0866e171 +0x6e7:  lea    -0x68(%ebp),%edx
0866e174 +0x6ea:  mov    %edx,0x4(%esp)
0866e178 +0x6ee:  mov    %eax,(%esp)
0866e17b +0x6f1:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
0866e180 +0x6f6:  sub    $0x4,%esp
0866e183 +0x6f9:  jmp    0866e1f1 <+0x767>
0866e185 +0x6fb:  lea    -0x78(%ebp),%eax
0866e188 +0x6fe:  mov    %eax,(%esp)
0866e18b +0x701:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
0866e190 +0x706:  mov    (%eax),%eax
0866e192 +0x708:  mov    %eax,-0x14(%ebp)
0866e195 +0x70b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866e19a +0x710:  mov    -0x14(%ebp),%edx
0866e19d +0x713:  mov    %edx,0x4(%esp)
0866e1a1 +0x717:  mov    %eax,(%esp)
0866e1a4 +0x71a:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0866e1a9 +0x71f:  mov    %eax,-0x10(%ebp)
0866e1ac +0x722:  cmpl   $0x0,-0x10(%ebp)
0866e1b0 +0x726:  je     0866e1df <+0x755>
0866e1b2 +0x728:  mov    -0x10(%ebp),%eax
0866e1b5 +0x72b:  movzbl 0x108(%eax),%eax
0866e1bc +0x732:  cmp    $0x1,%al
0866e1be +0x734:  jne    0866e1e2 <+0x758>
0866e1c0 +0x736:  mov    -0x10(%ebp),%eax
0866e1c3 +0x739:  mov    0x4(%eax),%eax
0866e1c6 +0x73c:  cmp    0x10(%ebp),%eax
0866e1c9 +0x73f:  jne    0866e1e5 <+0x75b>
0866e1cb +0x741:  mov    -0x10(%ebp),%eax
0866e1ce +0x744:  mov    %eax,0x4(%esp)
0866e1d2 +0x748:  mov    0x8(%ebp),%eax
0866e1d5 +0x74b:  mov    %eax,(%esp)
0866e1d8 +0x74e:  call   086689ee <_ZN5CUser21_postQuestTriggerItemEPK5Quest>  ; CUser::_postQuestTriggerItem(Quest const*)
0866e1dd +0x753:  jmp    0866e1e6 <+0x75c>
0866e1df +0x755:  nop
0866e1e0 +0x756:  jmp    0866e1e6 <+0x75c>
0866e1e2 +0x758:  nop
0866e1e3 +0x759:  jmp    0866e1e6 <+0x75c>
0866e1e5 +0x75b:  nop
0866e1e6 +0x75c:  lea    -0x78(%ebp),%eax
0866e1e9 +0x75f:  mov    %eax,(%esp)
0866e1ec +0x762:  call   0823d3de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x855c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x855c
0866e1f1 +0x767:  lea    -0x38(%ebp),%eax
0866e1f4 +0x76a:  lea    -0x68(%ebp),%edx
0866e1f7 +0x76d:  mov    %edx,0x4(%esp)
0866e1fb +0x771:  mov    %eax,(%esp)
0866e1fe +0x774:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
0866e203 +0x779:  sub    $0x4,%esp
0866e206 +0x77c:  lea    -0x38(%ebp),%eax
0866e209 +0x77f:  mov    %eax,0x4(%esp)
0866e20d +0x783:  lea    -0x78(%ebp),%eax
0866e210 +0x786:  mov    %eax,(%esp)
0866e213 +0x789:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
0866e218 +0x78e:  test   %al,%al
0866e21a +0x790:  jne    0866e185 <+0x6fb>
0866e220 +0x796:  mov    0x8(%ebp),%eax
0866e223 +0x799:  mov    %eax,(%esp)
0866e226 +0x79c:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0866e22b +0x7a1:  mov    0x10(%ebp),%edx
0866e22e +0x7a4:  mov    %edx,0x4(%esp)
0866e232 +0x7a8:  mov    %eax,(%esp)
0866e235 +0x7ab:  call   086ac854 <_ZN9UserQuest12finish_questEi>  ; UserQuest::finish_quest(int)
0866e23a +0x7b0:  lea    -0x74(%ebp),%eax
0866e23d +0x7b3:  mov    %eax,(%esp)
0866e240 +0x7b6:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0866e245 +0x7bb:  lea    -0x74(%ebp),%ebx
0866e248 +0x7be:  mov    0x8(%ebp),%eax
0866e24b +0x7c1:  mov    %eax,(%esp)
0866e24e +0x7c4:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0866e253 +0x7c9:  mov    %ebx,0x4(%esp)
0866e257 +0x7cd:  mov    %eax,(%esp)
0866e25a +0x7d0:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
0866e25f +0x7d5:  lea    -0x74(%ebp),%eax
0866e262 +0x7d8:  mov    %eax,0x4(%esp)
0866e266 +0x7dc:  mov    0x8(%ebp),%eax
0866e269 +0x7df:  mov    %eax,(%esp)
0866e26c +0x7e2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866e271 +0x7e7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866e276 +0x7ec:  mov    0x10(%ebp),%edx
0866e279 +0x7ef:  mov    %edx,0x4(%esp)
0866e27d +0x7f3:  mov    %eax,(%esp)
0866e280 +0x7f6:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0866e285 +0x7fb:  mov    %eax,-0xc(%ebp)
0866e288 +0x7fe:  cmpl   $0x0,-0xc(%ebp)
0866e28c +0x802:  je     0866e2bc <+0x832>
0866e28e +0x804:  mov    -0xc(%ebp),%eax
0866e291 +0x807:  mov    0x8(%eax),%eax
0866e294 +0x80a:  cmp    $0x3,%eax
0866e297 +0x80d:  jne    0866e2bc <+0x832>
0866e299 +0x80f:  movl   $0x0,0xc(%esp)
0866e2a1 +0x817:  movl   $0x0,0x8(%esp)
0866e2a9 +0x81f:  movl   $0xe,0x4(%esp)
0866e2b1 +0x827:  mov    0x8(%ebp),%eax
0866e2b4 +0x82a:  mov    %eax,(%esp)
0866e2b7 +0x82d:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
0866e2bc +0x832:  mov    0x8(%ebp),%eax
0866e2bf +0x835:  lea    0x79700(%eax),%edx
0866e2c5 +0x83b:  mov    0x10(%ebp),%eax
0866e2c8 +0x83e:  mov    %eax,0x4(%esp)
0866e2cc +0x842:  mov    %edx,(%esp)
0866e2cf +0x845:  call   0868514e <_ZN15cUserHistoryLog13QuestCompleteEi>  ; cUserHistoryLog::QuestComplete(int)
0866e2d4 +0x84a:  mov    0x18(%ebp),%eax
0866e2d7 +0x84d:  mov    %eax,0x8(%esp)
0866e2db +0x851:  mov    0x10(%ebp),%eax
0866e2de +0x854:  mov    %eax,0x4(%esp)
0866e2e2 +0x858:  mov    0x8(%ebp),%eax
0866e2e5 +0x85b:  mov    %eax,(%esp)
0866e2e8 +0x85e:  call   08664412 <_ZN5CUser13_onQuestClearEii>  ; CUser::_onQuestClear(int, int)
0866e2ed +0x863:  jmp    0866e304 <+0x87a>
0866e2ef +0x865:  mov    %edx,%ebx
0866e2f1 +0x867:  mov    %eax,%esi
0866e2f3 +0x869:  lea    -0x74(%ebp),%eax
0866e2f6 +0x86c:  mov    %eax,(%esp)
0866e2f9 +0x86f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866e2fe +0x874:  mov    %esi,%eax
0866e300 +0x876:  mov    %ebx,%edx
0866e302 +0x878:  jmp    0866e311 <+0x887>
0866e304 +0x87a:  lea    -0x74(%ebp),%eax
0866e307 +0x87d:  mov    %eax,(%esp)
0866e30a +0x880:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866e30f +0x885:  jmp    0866e326 <+0x89c>
0866e311 +0x887:  mov    %edx,%ebx
0866e313 +0x889:  mov    %eax,%esi
0866e315 +0x88b:  lea    -0x68(%ebp),%eax
0866e318 +0x88e:  mov    %eax,(%esp)
0866e31b +0x891:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0866e320 +0x896:  mov    %esi,%eax
0866e322 +0x898:  mov    %ebx,%edx
0866e324 +0x89a:  jmp    0866e372 <+0x8e8>
0866e326 +0x89c:  lea    -0x68(%ebp),%eax
0866e329 +0x89f:  mov    %eax,(%esp)
0866e32c +0x8a2:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0866e331 +0x8a7:  jmp    0866e38d <+0x903>
0866e333 +0x8a9:  movl   $0x1,0x4(%esp)
0866e33b +0x8b1:  lea    -0x4c(%ebp),%eax
0866e33e +0x8b4:  mov    %eax,(%esp)
0866e341 +0x8b7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866e346 +0x8bc:  lea    -0x4c(%ebp),%eax
0866e349 +0x8bf:  mov    %eax,0x4(%esp)
0866e34d +0x8c3:  mov    0x8(%ebp),%eax
0866e350 +0x8c6:  mov    %eax,(%esp)
0866e353 +0x8c9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866e358 +0x8ce:  mov    0x8(%ebp),%eax
0866e35b +0x8d1:  mov    0x796f8(%eax),%eax
0866e361 +0x8d7:  mov    0x10(%ebp),%edx
0866e364 +0x8da:  mov    %edx,0x4(%esp)
0866e368 +0x8de:  mov    %eax,(%esp)
0866e36b +0x8e1:  call   084b9ee4 <_ZN10HistoryLog14WriteFineQuestEP8_IO_FILEi>  ; HistoryLog::WriteFineQuest(_IO_FILE*, int)
0866e370 +0x8e6:  jmp    0866e38d <+0x903>
0866e372 +0x8e8:  mov    %edx,%ebx
0866e374 +0x8ea:  mov    %eax,%esi
0866e376 +0x8ec:  lea    -0x4c(%ebp),%eax
0866e379 +0x8ef:  mov    %eax,(%esp)
0866e37c +0x8f2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866e381 +0x8f7:  mov    %esi,%eax
0866e383 +0x8f9:  mov    %ebx,%edx
0866e385 +0x8fb:  mov    %eax,(%esp)
0866e388 +0x8fe:  call   08ae3750 <_Unwind_Resume>
0866e38d +0x903:  lea    -0x4c(%ebp),%eax
0866e390 +0x906:  mov    %eax,(%esp)
0866e393 +0x909:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866e398 +0x90e:  jmp    0866e39e <+0x914>
0866e39a +0x910:  nop
0866e39b +0x911:  jmp    0866e39e <+0x914>
0866e39d +0x913:  nop
0866e39e +0x914:  lea    -0x8(%ebp),%esp
0866e3a1 +0x917:  add    $0x0,%esp
0866e3a4 +0x91a:  pop    %ebx
0866e3a5 +0x91b:  pop    %esi
0866e3a6 +0x91c:  pop    %ebp
0866e3a7 +0x91d:  ret
```

## 反编译 C

```c
// CUser::quest_action @ 0x866da8a

/* CUser::quest_action(int, int, int, int) */

void __thiscall CUser::quest_action(CUser *this,int param_1,int param_2,int param_3,int param_4)

{
  Quest *pQVar1;
  char cVar2;
  int iVar3;
  UserQuest *pUVar4;
  CInventory *pCVar5;
  CHackAnalyzer *pCVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  stSelectQuestParam local_a4 [40];
  _List_iterator<int> local_7c [4];
  PacketGuard local_78 [12];
  list<int,std::allocator<int>> local_6c [8];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_64 [4];
  vector<int,std::allocator<int>> local_60 [15];
  undefined1 local_51;
  PacketGuard local_50 [12];
  int local_44;
  __normal_iterator local_40 [4];
  _List_iterator local_3c [4];
  int local_38;
  int local_34;
  Quest *local_30;
  Quest *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  short local_20;
  char local_1d;
  Quest *local_1c;
  undefined4 local_18;
  Quest *local_14;
  int local_10;
  
  iVar3 = G_CDataManager();
  local_34 = CDataManager::find_quest(iVar3);
  if (local_34 == 0) {
    return;
  }
  if (*(int *)(local_34 + 8) == 7) {
    return;
  }
  PacketGuard::PacketGuard(local_50);
                    /* try { // try from 0866dae5 to 0866dd5b has its CatchHandler @ 0866e372 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,param_1);
  if (param_1 == 0x22) {
    pUVar4 = (UserQuest *)getCurCharacQuestW(this);
    local_38 = UserQuest::giveup_quest(pUVar4,param_2);
    if (local_38 < 1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,param_2);
      iVar3 = G_CDataManager();
      local_2c = (Quest *)CDataManager::find_quest(iVar3);
      if (local_2c == (Quest *)0x0) goto LAB_0866e38d;
      cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
      if (cVar2 != '\x01') {
        local_51 = 0;
        std::vector<int,std::allocator<int>>::vector(local_60);
        iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_2c + 0x70));
                    /* try { // try from 0866dd7c to 0866de68 has its CatchHandler @ 0866de73 */
        std::vector<int,std::allocator<int>>::reserve(local_60,iVar3 * 3);
        pQVar1 = local_2c + 0x70;
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        local_28 = CInventory::delete_event_items(pCVar5,pQVar1,local_60,&local_51,4,4,0);
        std::vector<int,std::allocator<int>>::begin();
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar9 = __gnu_cxx::operator!=(local_64,local_40);
          if (!bVar9) break;
          puVar8 = (undefined4 *)
                   __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                   operator*(local_64);
          local_24 = *puVar8;
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_64);
          puVar8 = (undefined4 *)
                   __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                   operator*(local_64);
          local_20 = (short)*puVar8;
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_64);
          SendUpdateItem(this,1,local_24,(int)local_20);
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_64);
        }
                    /* try { // try from 0866de91 to 0866e12c has its CatchHandler @ 0866e372 */
        std::vector<int,std::allocator<int>>::~vector(local_60);
      }
      SendHasNoGoWithApcQuestInParty(this,local_2c);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_38);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    Send(this,local_50);
  }
  else if (param_1 < 0x23) {
    if (param_1 == 0x21) {
      iVar3 = G_CDataManager();
      local_30 = (Quest *)CDataManager::find_quest(iVar3);
      if (((local_30 == (Quest *)0x0) || (*(int *)(local_30 + 0x134) != 1)) ||
         (cVar2 = village_attacked::CRevengeDungeon::IsOpenRevengeDungeon
                            (GlobalData::s_revengeDungeonMgr), cVar2 == '\x01')) {
        if (((local_30 == (Quest *)0x0) || (*(int *)(local_30 + 0x134) != 2)) ||
           (cVar2 = Quest::IsOpenScheduleQuest(local_30), cVar2 == '\x01')) {
          pUVar4 = (UserQuest *)getCurCharacQuestW(this);
          local_38 = UserQuest::accept_quest(pUVar4,param_2,(char *)local_50,&local_44);
          if (0 < local_38) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_38);
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
          Send(this,local_50);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0x15);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
          Send(this,local_50);
        }
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0x15);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
        Send(this,local_50);
      }
    }
  }
  else if (param_1 == 0x23) {
    local_1d = (char)param_4;
    bVar9 = local_1d != '\0';
    pUVar4 = (UserQuest *)getCurCharacQuestW(this);
    local_38 = UserQuest::set_trigger(pUVar4,param_2,(char)param_3,bVar9);
    if (local_38 == -1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0x16);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,param_2);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_38);
      if (local_38 == 0) {
        iVar3 = G_CDataManager();
        local_1c = (Quest *)CDataManager::find_quest(iVar3);
        if (local_1c == (Quest *)0x0) goto LAB_0866e38d;
        SendHasNoGoWithApcQuestInParty(this,local_1c);
      }
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    Send(this,local_50);
  }
  else if (param_1 == 0x24) {
    iVar3 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    if ((uint)(iVar3 - *(int *)(this + 0x79644)) < 0x3e9) {
      *(int *)(this + 0x79648) = *(int *)(this + 0x79648) + 1;
      if (1 < *(uint *)(this + 0x79648)) {
        pCVar6 = (CHackAnalyzer *)getHackAnalyzer(this);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,this,0x192,1,0,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
        Send(this,local_50);
        goto LAB_0866e38d;
      }
    }
    else {
      *(undefined4 *)(this + 0x79648) = 0;
      uVar7 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
      *(undefined4 *)(this + 0x79644) = uVar7;
    }
    local_38 = quest_reward(this,param_2,param_3,param_4);
    if (local_38 < 1) {
      std::list<int,std::allocator<int>>::list(local_6c);
                    /* try { // try from 0866e13d to 0866e244 has its CatchHandler @ 0866e311 */
      stSelectQuestParam::stSelectQuestParam(local_a4,this);
      pUVar4 = (UserQuest *)getCurCharacQuestR(this);
      cVar2 = UserQuest::get_mail_quest_info(pUVar4,(list *)local_6c,local_a4);
      if (cVar2 != '\0') {
        std::list<int,std::allocator<int>>::begin();
        while( true ) {
          std::list<int,std::allocator<int>>::end();
          cVar2 = std::_List_iterator<int>::operator!=(local_7c,local_3c);
          if (cVar2 == '\0') break;
          puVar8 = (undefined4 *)std::_List_iterator<int>::operator*(local_7c);
          local_18 = *puVar8;
          iVar3 = G_CDataManager();
          local_14 = (Quest *)CDataManager::find_quest(iVar3);
          if (((local_14 != (Quest *)0x0) && (local_14[0x108] == (Quest)0x1)) &&
             (*(int *)(local_14 + 4) == param_2)) {
            _postQuestTriggerItem(this,local_14);
          }
          std::_List_iterator<int>::operator++(local_7c);
        }
      }
      pUVar4 = (UserQuest *)getCurCharacQuestW(this);
      UserQuest::finish_quest(pUVar4,param_2);
      PacketGuard::PacketGuard(local_78);
      pUVar4 = (UserQuest *)getCurCharacQuestR(this);
                    /* try { // try from 0866e25a to 0866e2ec has its CatchHandler @ 0866e2ef */
      UserQuest::get_quest_info(pUVar4,(char *)local_78);
      Send(this,local_78);
      iVar3 = G_CDataManager();
      local_10 = CDataManager::find_quest(iVar3);
      if ((local_10 != 0) && (*(int *)(local_10 + 8) == 3)) {
        APSystem::CUserProc::ClearActionAndSendtoUser(this,0xe,0,0);
      }
      cUserHistoryLog::QuestComplete((cUserHistoryLog *)(this + 0x79700),param_2);
      _onQuestClear((int)this,param_2);
                    /* try { // try from 0866e30a to 0866e30e has its CatchHandler @ 0866e311 */
      PacketGuard::~PacketGuard(local_78);
                    /* try { // try from 0866e32c to 0866e36f has its CatchHandler @ 0866e372 */
      std::list<int,std::allocator<int>>::~list(local_6c);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_38);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      Send(this,local_50);
      HistoryLog::WriteFineQuest(*(_IO_FILE **)(this + 0x796f8),param_2);
    }
  }
LAB_0866e38d:
  PacketGuard::~PacketGuard(local_50);
  return;
}
```
