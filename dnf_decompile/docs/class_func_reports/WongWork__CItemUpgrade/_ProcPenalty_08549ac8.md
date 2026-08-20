# _ProcPenalty

`_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard`

`WongWork::CItemUpgrade::_ProcPenalty(CUser*, Inven_Item*, CItem const*, unsigned short, PacketGuard*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x08549ac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08549ac8  _ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard
#           WongWork::CItemUpgrade::_ProcPenalty(CUser*, Inven_Item*, CItem const*, unsigned short, PacketGuard*)
# range [0x08549ac8, 0x0854a005]
08549ac8 +0x000:  push   %ebp
08549ac9 +0x001:  mov    %esp,%ebp
08549acb +0x003:  push   %esi
08549acc +0x004:  push   %ebx
08549acd +0x005:  sub    $0x100,%esp
08549ad3 +0x00b:  mov    0x18(%ebp),%eax
08549ad6 +0x00e:  mov    %ax,-0xdc(%ebp)
08549add +0x015:  mov    0x10(%ebp),%eax
08549ae0 +0x018:  add    $0x11,%eax
08549ae3 +0x01b:  mov    %eax,(%esp)
08549ae6 +0x01e:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
08549aeb +0x023:  test   %al,%al
08549aed +0x025:  je     08549afe <+0x36>
08549aef +0x027:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
08549af4 +0x02c:  mov    %eax,(%esp)
08549af7 +0x02f:  call   0854b560 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3e8>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3e8
08549afc +0x034:  jmp    08549b0c <+0x44>
08549afe +0x036:  mov    0x8(%ebp),%eax
08549b01 +0x039:  add    $0x4,%eax
08549b04 +0x03c:  mov    %eax,(%esp)
08549b07 +0x03f:  call   0854b382 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x20a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x20a
08549b0c +0x044:  mov    %eax,-0x28(%ebp)
08549b0f +0x047:  movzwl -0xdc(%ebp),%ebx
08549b16 +0x04e:  mov    0xc(%ebp),%eax
08549b19 +0x051:  mov    %eax,(%esp)
08549b1c +0x054:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08549b21 +0x059:  movl   $0x1,0x14(%esp)
08549b29 +0x061:  movl   $0xd,0x10(%esp)
08549b31 +0x069:  movl   $0x1,0xc(%esp)
08549b39 +0x071:  mov    %ebx,0x8(%esp)
08549b3d +0x075:  movl   $0x1,0x4(%esp)
08549b45 +0x07d:  mov    %eax,(%esp)
08549b48 +0x080:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08549b4d +0x085:  xor    $0x1,%eax
08549b50 +0x088:  test   %al,%al
08549b52 +0x08a:  je     08549b5e <+0x96>
08549b54 +0x08c:  mov    $0x11,%ebx
08549b59 +0x091:  jmp    08549ffa <+0x532>
08549b5e +0x096:  mov    0x10(%ebp),%eax
08549b61 +0x099:  mov    %eax,(%esp)
08549b64 +0x09c:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08549b69 +0x0a1:  movzbl %al,%eax
08549b6c +0x0a4:  mov    %eax,-0x24(%ebp)
08549b6f +0x0a7:  movzwl -0xdc(%ebp),%edx
08549b76 +0x0ae:  mov    0x1c(%ebp),%eax
08549b79 +0x0b1:  mov    %edx,0x4(%esp)
08549b7d +0x0b5:  mov    %eax,(%esp)
08549b80 +0x0b8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08549b85 +0x0bd:  lea    -0x8c(%ebp),%eax
08549b8b +0x0c3:  mov    %eax,(%esp)
08549b8e +0x0c6:  call   082347a2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e4c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e4c
08549b93 +0x0cb:  mov    0x10(%ebp),%eax
08549b96 +0x0ce:  mov    0x2(%eax),%eax
08549b99 +0x0d1:  mov    %eax,%ebx
08549b9b +0x0d3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08549ba0 +0x0d8:  mov    0x1c(%eax),%eax
08549ba3 +0x0db:  lea    -0x8c(%ebp),%edx
08549ba9 +0x0e1:  mov    %edx,0x8(%esp)
08549bad +0x0e5:  mov    %ebx,0x4(%esp)
08549bb1 +0x0e9:  mov    %eax,(%esp)
08549bb4 +0x0ec:  call   084733f6 <_ZN8DisJoint9GetResultEiR14DisJointResult>  ; DisJoint::GetResult(int, DisJointResult&)
08549bb9 +0x0f1:  test   %eax,%eax
08549bbb +0x0f3:  setne  %al
08549bbe +0x0f6:  test   %al,%al
08549bc0 +0x0f8:  je     08549bdf <+0x117>
08549bc2 +0x0fa:  mov    0x1c(%ebp),%eax
08549bc5 +0x0fd:  movl   $0x0,0x4(%esp)
08549bcd +0x105:  mov    %eax,(%esp)
08549bd0 +0x108:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08549bd5 +0x10d:  mov    $0x0,%ebx
08549bda +0x112:  jmp    08549ffa <+0x532>
08549bdf +0x117:  mov    0x10(%ebp),%eax
08549be2 +0x11a:  movl   $0x0,0x2(%eax)
08549be9 +0x121:  lea    -0x50(%ebp),%eax
08549bec +0x124:  mov    %eax,(%esp)
08549bef +0x127:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08549bf4 +0x12c:  movl   $0x6,0x4(%esp)
08549bfc +0x134:  lea    -0x50(%ebp),%eax
08549bff +0x137:  mov    %eax,(%esp)
08549c02 +0x13a:  call   0854b7ee <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x676>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x676
08549c07 +0x13f:  movl   $0x0,-0x1c(%ebp)
08549c0e +0x146:  jmp    08549c73 <+0x1ab>
08549c10 +0x148:  mov    -0x1c(%ebp),%eax
08549c13 +0x14b:  add    $0x4,%eax
08549c16 +0x14e:  mov    -0x88(%ebp,%eax,4),%eax
08549c1d +0x155:  test   %eax,%eax
08549c1f +0x157:  je     08549c6e <+0x1a6>
08549c21 +0x159:  mov    -0x1c(%ebp),%edx
08549c24 +0x15c:  lea    -0x8c(%ebp),%eax
08549c2a +0x162:  shl    $0x2,%edx
08549c2d +0x165:  lea    (%eax,%edx,1),%ecx
08549c30 +0x168:  mov    -0x1c(%ebp),%edx
08549c33 +0x16b:  lea    -0x8c(%ebp),%eax
08549c39 +0x171:  add    $0x4,%edx
08549c3c +0x174:  shl    $0x2,%edx
08549c3f +0x177:  add    %edx,%eax
08549c41 +0x179:  lea    0x4(%eax),%edx
08549c44 +0x17c:  lea    -0x44(%ebp),%eax
08549c47 +0x17f:  mov    %ecx,0x8(%esp)
08549c4b +0x183:  mov    %edx,0x4(%esp)
08549c4f +0x187:  mov    %eax,(%esp)
08549c52 +0x18a:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08549c57 +0x18f:  sub    $0x4,%esp
08549c5a +0x192:  lea    -0x44(%ebp),%eax
08549c5d +0x195:  mov    %eax,0x4(%esp)
08549c61 +0x199:  lea    -0x50(%ebp),%eax
08549c64 +0x19c:  mov    %eax,(%esp)
08549c67 +0x19f:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08549c6c +0x1a4:  jmp    08549c6f <+0x1a7>
08549c6e +0x1a6:  nop
08549c6f +0x1a7:  addl   $0x1,-0x1c(%ebp)
08549c73 +0x1ab:  cmpl   $0x4,-0x1c(%ebp)
08549c77 +0x1af:  setle  %al
08549c7a +0x1b2:  test   %al,%al
08549c7c +0x1b4:  jne    08549c10 <+0x148>
08549c7e +0x1b6:  mov    -0x24(%ebp),%eax
08549c81 +0x1b9:  mov    -0x28(%ebp),%edx
08549c84 +0x1bc:  mov    %edx,0x10(%esp)
08549c88 +0x1c0:  lea    -0x50(%ebp),%edx
08549c8b +0x1c3:  mov    %edx,0xc(%esp)
08549c8f +0x1c7:  mov    0x14(%ebp),%edx
08549c92 +0x1ca:  mov    %edx,0x8(%esp)
08549c96 +0x1ce:  mov    %eax,0x4(%esp)
08549c9a +0x1d2:  mov    0x8(%ebp),%eax
08549c9d +0x1d5:  mov    %eax,(%esp)
08549ca0 +0x1d8:  call   08546938 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t>  ; WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&)
08549ca5 +0x1dd:  mov    0x10(%ebp),%eax
08549ca8 +0x1e0:  add    $0x11,%eax
08549cab +0x1e3:  mov    %eax,(%esp)
08549cae +0x1e6:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
08549cb3 +0x1eb:  test   %al,%al
08549cb5 +0x1ed:  je     08549ce9 <+0x221>
08549cb7 +0x1ef:  mov    0x8(%ebp),%eax
08549cba +0x1f2:  add    $0x4,%eax
08549cbd +0x1f5:  mov    %eax,(%esp)
08549cc0 +0x1f8:  call   0854b382 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x20a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x20a
08549cc5 +0x1fd:  mov    -0x24(%ebp),%edx
08549cc8 +0x200:  mov    %eax,0x10(%esp)
08549ccc +0x204:  lea    -0x50(%ebp),%eax
08549ccf +0x207:  mov    %eax,0xc(%esp)
08549cd3 +0x20b:  mov    0x14(%ebp),%eax
08549cd6 +0x20e:  mov    %eax,0x8(%esp)
08549cda +0x212:  mov    %edx,0x4(%esp)
08549cde +0x216:  mov    0x8(%ebp),%eax
08549ce1 +0x219:  mov    %eax,(%esp)
08549ce4 +0x21c:  call   08546938 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t>  ; WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&)
08549ce9 +0x221:  mov    0x10(%ebp),%eax
08549cec +0x224:  add    $0x11,%eax
08549cef +0x227:  mov    %eax,(%esp)
08549cf2 +0x22a:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
08549cf7 +0x22f:  movzbl %al,%ebx
08549cfa +0x232:  mov    0x8(%ebp),%eax
08549cfd +0x235:  add    $0x4,%eax
08549d00 +0x238:  mov    %eax,(%esp)
08549d03 +0x23b:  call   0854b382 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x20a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x20a
08549d08 +0x240:  mov    -0x24(%ebp),%edx
08549d0b +0x243:  mov    %ebx,0x14(%esp)
08549d0f +0x247:  mov    %eax,0x10(%esp)
08549d13 +0x24b:  lea    -0x50(%ebp),%eax
08549d16 +0x24e:  mov    %eax,0xc(%esp)
08549d1a +0x252:  mov    0x14(%ebp),%eax
08549d1d +0x255:  mov    %eax,0x8(%esp)
08549d21 +0x259:  mov    %edx,0x4(%esp)
08549d25 +0x25d:  mov    0x8(%ebp),%eax
08549d28 +0x260:  mov    %eax,(%esp)
08549d2b +0x263:  call   08546a96 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tb>  ; WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&, bool)
08549d30 +0x268:  lea    -0x5c(%ebp),%eax
08549d33 +0x26b:  mov    %eax,(%esp)
08549d36 +0x26e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08549d3b +0x273:  mov    0xc(%ebp),%eax
08549d3e +0x276:  mov    %eax,(%esp)
08549d41 +0x279:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08549d46 +0x27e:  movl   $"",0x1c(%esp)
08549d4e +0x286:  movl   $"",0x18(%esp)
08549d56 +0x28e:  movl   $0x0,0x14(%esp)
08549d5e +0x296:  movl   $0x13,0x10(%esp)
08549d66 +0x29e:  movl   $0x7,0xc(%esp)
08549d6e +0x2a6:  lea    -0x5c(%ebp),%edx
08549d71 +0x2a9:  mov    %edx,0x8(%esp)
08549d75 +0x2ad:  lea    -0x50(%ebp),%edx
08549d78 +0x2b0:  mov    %edx,0x4(%esp)
08549d7c +0x2b4:  mov    %eax,(%esp)
08549d7f +0x2b7:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
08549d84 +0x2bc:  mov    %eax,-0x20(%ebp)
08549d87 +0x2bf:  mov    0x1c(%ebp),%eax
08549d8a +0x2c2:  mov    -0x20(%ebp),%edx
08549d8d +0x2c5:  mov    %edx,0x4(%esp)
08549d91 +0x2c9:  mov    %eax,(%esp)
08549d94 +0x2cc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08549d99 +0x2d1:  lea    -0x3c(%ebp),%eax
08549d9c +0x2d4:  lea    -0x5c(%ebp),%edx
08549d9f +0x2d7:  mov    %edx,0x4(%esp)
08549da3 +0x2db:  mov    %eax,(%esp)
08549da6 +0x2de:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08549dab +0x2e3:  sub    $0x4,%esp
08549dae +0x2e6:  lea    -0x3c(%ebp),%eax
08549db1 +0x2e9:  mov    %eax,0x4(%esp)
08549db5 +0x2ed:  lea    -0x60(%ebp),%eax
08549db8 +0x2f0:  mov    %eax,(%esp)
08549dbb +0x2f3:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08549dc0 +0x2f8:  jmp    08549f7e <+0x4b6>
08549dc5 +0x2fd:  lea    -0x34(%ebp),%eax
08549dc8 +0x300:  movl   $0x0,0x8(%esp)
08549dd0 +0x308:  lea    -0x60(%ebp),%edx
08549dd3 +0x30b:  mov    %edx,0x4(%esp)
08549dd7 +0x30f:  mov    %eax,(%esp)
08549dda +0x312:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08549ddf +0x317:  sub    $0x4,%esp
08549de2 +0x31a:  lea    -0x34(%ebp),%eax
08549de5 +0x31d:  mov    %eax,(%esp)
08549de8 +0x320:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08549ded +0x325:  mov    (%eax),%eax
08549def +0x327:  mov    %eax,-0x18(%ebp)
08549df2 +0x32a:  lea    -0x30(%ebp),%eax
08549df5 +0x32d:  movl   $0x0,0x8(%esp)
08549dfd +0x335:  lea    -0x60(%ebp),%edx
08549e00 +0x338:  mov    %edx,0x4(%esp)
08549e04 +0x33c:  mov    %eax,(%esp)
08549e07 +0x33f:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08549e0c +0x344:  sub    $0x4,%esp
08549e0f +0x347:  lea    -0x30(%ebp),%eax
08549e12 +0x34a:  mov    %eax,(%esp)
08549e15 +0x34d:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08549e1a +0x352:  mov    (%eax),%eax
08549e1c +0x354:  mov    %eax,-0x14(%ebp)
08549e1f +0x357:  lea    -0x2c(%ebp),%eax
08549e22 +0x35a:  movl   $0x0,0x8(%esp)
08549e2a +0x362:  lea    -0x60(%ebp),%edx
08549e2d +0x365:  mov    %edx,0x4(%esp)
08549e31 +0x369:  mov    %eax,(%esp)
08549e34 +0x36c:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08549e39 +0x371:  sub    $0x4,%esp
08549e3c +0x374:  lea    -0x2c(%ebp),%eax
08549e3f +0x377:  mov    %eax,(%esp)
08549e42 +0x37a:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08549e47 +0x37f:  mov    (%eax),%eax
08549e49 +0x381:  mov    %eax,-0x10(%ebp)
08549e4c +0x384:  mov    0x1c(%ebp),%eax
08549e4f +0x387:  mov    -0x18(%ebp),%edx
08549e52 +0x38a:  mov    %edx,0x4(%esp)
08549e56 +0x38e:  mov    %eax,(%esp)
08549e59 +0x391:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08549e5e +0x396:  mov    -0x14(%ebp),%edx
08549e61 +0x399:  mov    0x1c(%ebp),%eax
08549e64 +0x39c:  mov    %edx,0x4(%esp)
08549e68 +0x3a0:  mov    %eax,(%esp)
08549e6b +0x3a3:  call   0822b794 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe3e
08549e70 +0x3a8:  mov    0x1c(%ebp),%eax
08549e73 +0x3ab:  mov    -0x10(%ebp),%edx
08549e76 +0x3ae:  mov    %edx,0x4(%esp)
08549e7a +0x3b2:  mov    %eax,(%esp)
08549e7d +0x3b5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08549e82 +0x3ba:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08549e87 +0x3bf:  mov    -0x14(%ebp),%edx
08549e8a +0x3c2:  mov    %edx,0x4(%esp)
08549e8e +0x3c6:  mov    %eax,(%esp)
08549e91 +0x3c9:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08549e96 +0x3ce:  mov    %eax,-0xc(%ebp)
08549e99 +0x3d1:  cmpl   $0x0,-0xc(%ebp)
08549e9d +0x3d5:  je     08549f7d <+0x4b5>
08549ea3 +0x3db:  lea    -0xc9(%ebp),%eax
08549ea9 +0x3e1:  mov    %eax,(%esp)
08549eac +0x3e4:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08549eb1 +0x3e9:  mov    -0x14(%ebp),%eax
08549eb4 +0x3ec:  mov    %eax,-0xc7(%ebp)
08549eba +0x3f2:  mov    -0x10(%ebp),%eax
08549ebd +0x3f5:  mov    %eax,0x4(%esp)
08549ec1 +0x3f9:  lea    -0xc9(%ebp),%eax
08549ec7 +0x3ff:  mov    %eax,(%esp)
08549eca +0x402:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08549ecf +0x407:  mov    -0xc(%ebp),%eax
08549ed2 +0x40a:  mov    (%eax),%eax
08549ed4 +0x40c:  add    $0x8,%eax
08549ed7 +0x40f:  mov    (%eax),%edx
08549ed9 +0x411:  lea    -0xc9(%ebp),%eax
08549edf +0x417:  mov    %eax,0x4(%esp)
08549ee3 +0x41b:  mov    -0xc(%ebp),%eax
08549ee6 +0x41e:  mov    %eax,(%esp)
08549ee9 +0x421:  call   *%edx
08549eeb +0x423:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
08549ef0 +0x428:  movl   $0x1,0x10(%esp)
08549ef8 +0x430:  mov    0xc(%ebp),%edx
08549efb +0x433:  mov    %edx,0xc(%esp)
08549eff +0x437:  mov    -0x10(%ebp),%edx
08549f02 +0x43a:  mov    %edx,0x8(%esp)
08549f06 +0x43e:  mov    -0xc(%ebp),%edx
08549f09 +0x441:  mov    %edx,0x4(%esp)
08549f0d +0x445:  mov    %eax,(%esp)
08549f10 +0x448:  call   0860e07a <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(CItem*, int, CUser*, CUBE_STATISTIC_FIELD)
08549f15 +0x44d:  movl   $0x0,-0x64(%ebp)
08549f1c +0x454:  mov    -0xc2(%ebp),%eax
08549f22 +0x45a:  movswl %ax,%ebx
08549f25 +0x45d:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
08549f2a +0x462:  lea    -0x64(%ebp),%edx
08549f2d +0x465:  mov    %edx,0x14(%esp)
08549f31 +0x469:  movl   $0x0,0x10(%esp)
08549f39 +0x471:  mov    %ebx,0xc(%esp)
08549f3d +0x475:  mov    -0xc(%ebp),%edx
08549f40 +0x478:  mov    %edx,0x8(%esp)
08549f44 +0x47c:  lea    -0xc9(%ebp),%edx
08549f4a +0x482:  mov    %edx,0x4(%esp)
08549f4e +0x486:  mov    %eax,(%esp)
08549f51 +0x489:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
08549f56 +0x48e:  mov    -0x64(%ebp),%eax
08549f59 +0x491:  mov    %eax,%ebx
08549f5b +0x493:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
08549f60 +0x498:  mov    %ebx,0xc(%esp)
08549f64 +0x49c:  mov    0xc(%ebp),%edx
08549f67 +0x49f:  mov    %edx,0x8(%esp)
08549f6b +0x4a3:  movl   $0x9,0x4(%esp)
08549f73 +0x4ab:  mov    %eax,(%esp)
08549f76 +0x4ae:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
08549f7b +0x4b3:  jmp    08549f7e <+0x4b6>
08549f7d +0x4b5:  nop
08549f7e +0x4b6:  lea    -0x38(%ebp),%eax
08549f81 +0x4b9:  lea    -0x5c(%ebp),%edx
08549f84 +0x4bc:  mov    %edx,0x4(%esp)
08549f88 +0x4c0:  mov    %eax,(%esp)
08549f8b +0x4c3:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08549f90 +0x4c8:  sub    $0x4,%esp
08549f93 +0x4cb:  lea    -0x38(%ebp),%eax
08549f96 +0x4ce:  mov    %eax,0x4(%esp)
08549f9a +0x4d2:  lea    -0x60(%ebp),%eax
08549f9d +0x4d5:  mov    %eax,(%esp)
08549fa0 +0x4d8:  call   08193428 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x90>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x90
08549fa5 +0x4dd:  test   %al,%al
08549fa7 +0x4df:  jne    08549dc5 <+0x2fd>
08549fad +0x4e5:  mov    $0x0,%ebx
08549fb2 +0x4ea:  lea    -0x5c(%ebp),%eax
08549fb5 +0x4ed:  mov    %eax,(%esp)
08549fb8 +0x4f0:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08549fbd +0x4f5:  jmp    08549fef <+0x527>
08549fbf +0x4f7:  mov    %edx,%ebx
08549fc1 +0x4f9:  mov    %eax,%esi
08549fc3 +0x4fb:  lea    -0x5c(%ebp),%eax
08549fc6 +0x4fe:  mov    %eax,(%esp)
08549fc9 +0x501:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08549fce +0x506:  mov    %esi,%eax
08549fd0 +0x508:  mov    %ebx,%edx
08549fd2 +0x50a:  jmp    08549fd4 <+0x50c>
08549fd4 +0x50c:  mov    %edx,%ebx
08549fd6 +0x50e:  mov    %eax,%esi
08549fd8 +0x510:  lea    -0x50(%ebp),%eax
08549fdb +0x513:  mov    %eax,(%esp)
08549fde +0x516:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08549fe3 +0x51b:  mov    %esi,%eax
08549fe5 +0x51d:  mov    %ebx,%edx
08549fe7 +0x51f:  mov    %eax,(%esp)
08549fea +0x522:  call   08ae3750 <_Unwind_Resume>
08549fef +0x527:  lea    -0x50(%ebp),%eax
08549ff2 +0x52a:  mov    %eax,(%esp)
08549ff5 +0x52d:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08549ffa +0x532:  mov    %ebx,%eax
08549ffc +0x534:  lea    -0x8(%ebp),%esp
08549fff +0x537:  add    $0x0,%esp
0854a002 +0x53a:  pop    %ebx
0854a003 +0x53b:  pop    %esi
0854a004 +0x53c:  pop    %ebp
0854a005 +0x53d:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_ProcPenalty @ 0x8549ac8

/* WongWork::CItemUpgrade::_ProcPenalty(CUser*, Inven_Item*, CItem const*, unsigned short,
   PacketGuard*) */

undefined4 __thiscall
WongWork::CItemUpgrade::_ProcPenalty
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,CItem *param_3,ushort param_4,
          PacketGuard *param_5)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  CInventory *pCVar4;
  int iVar5;
  int iVar6;
  upgrade_table_t *puVar7;
  int *piVar8;
  ulong *puVar9;
  CDataManager *this_00;
  CCubeStatistic *pCVar10;
  Store *this_01;
  CValueStatistic *pCVar11;
  undefined4 uVar12;
  Inven_Item local_cd [2];
  ulong local_cb;
  undefined4 local_c6;
  DisJointResult local_90 [4];
  int aiStack_8c [9];
  int local_68;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_64 [4];
  vector<int,std::allocator<int>> local_60 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_54 [12];
  int local_48 [2];
  __normal_iterator local_40 [4];
  __normal_iterator local_3c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_38 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_34 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_30 [4];
  upgrade_table_t *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulong local_18;
  int local_14;
  CItem *local_10;
  
  cVar1 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
  if (cVar1 == '\0') {
    local_2c = (upgrade_table_t *)
               CItemUpgradeTable::getUpgradeInfoTable((CItemUpgradeTable *)(this + 4));
  }
  else {
    local_2c = (upgrade_table_t *)CItemAmplifier::getUpgradeInfoTable(GlobalData::s_itemAmplifier_);
  }
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  cVar1 = CInventory::delete_item(pCVar4,1,param_4,1,0xd,1);
  if (cVar1 == '\x01') {
    local_28 = Inven_Item::GetUpgrade(param_2);
    local_28 = local_28 & 0xff;
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_5,(uint)param_4);
    DisJointResult::DisJointResult(local_90);
    iVar6 = *(int *)(param_2 + 2);
    iVar5 = G_CDataManager();
    iVar6 = DisJoint::GetResult(*(DisJoint **)(iVar5 + 0x1c),iVar6,local_90);
    if (iVar6 == 0) {
      *(undefined4 *)(param_2 + 2) = 0;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_54);
                    /* try { // try from 08549c02 to 08549d3a has its CatchHandler @ 08549fd4 */
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::reserve(local_54,6);
      for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
        if (aiStack_8c[local_20 + 4] != 0) {
          std::make_pair<int&,int&>(local_48,aiStack_8c + local_20 + 4);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_54,(pair *)local_48);
        }
      }
      _getAdditionalDisjointItem(this,local_28,param_3,(vector *)local_54,local_2c);
      cVar1 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
      if (cVar1 != '\0') {
        puVar7 = (upgrade_table_t *)
                 CItemUpgradeTable::getUpgradeInfoTable((CItemUpgradeTable *)(this + 4));
        _getAdditionalDisjointItem(this,local_28,param_3,(vector *)local_54,puVar7);
      }
      bVar2 = (bool)stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
      puVar7 = (upgrade_table_t *)
               CItemUpgradeTable::getUpgradeInfoTable((CItemUpgradeTable *)(this + 4));
      _getAdditionalDisjointItem(this,local_28,param_3,(vector *)local_54,puVar7,bVar2);
      std::vector<int,std::allocator<int>>::vector(local_60);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 08549d7f to 08549fa4 has its CatchHandler @ 08549fbf */
      local_24 = CInventory::insert_event_items
                           (pCVar4,local_54,local_60,7,0x13,0,&DAT_08c9c3a0,&DAT_08c9c3a0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_5,local_24);
      std::vector<int,std::allocator<int>>::begin();
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
      __normal_iterator<int*>(local_64,local_40);
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar2 = __gnu_cxx::operator!=(local_64,local_3c);
        if (!bVar2) break;
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_38,(int)local_64);
        piVar8 = (int *)__gnu_cxx::
                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                        operator*(local_38);
        local_1c = *piVar8;
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_34,(int)local_64);
        puVar9 = (ulong *)__gnu_cxx::
                          __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                          operator*(local_34);
        local_18 = *puVar9;
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_30,(int)local_64);
        piVar8 = (int *)__gnu_cxx::
                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                        operator*(local_30);
        local_14 = *piVar8;
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_5,local_1c);
        InterfacePacketBuf::put_item_idx((InterfacePacketBuf *)param_5,local_18);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_5,local_14);
        this_00 = (CDataManager *)G_CDataManager();
        local_10 = (CItem *)CDataManager::find_item(this_00,local_18);
        if (local_10 != (CItem *)0x0) {
          Inven_Item::Inven_Item(local_cd);
          local_cb = local_18;
          Inven_Item::set_add_info(local_cd,local_14);
          (**(code **)(*(int *)local_10 + 8))(local_10,local_cd);
          pCVar10 = (CCubeStatistic *)GetInstanceCubeStatistic();
          CCubeStatistic::collectCubeStatistics(pCVar10,local_10,local_14,param_1,1);
          local_68 = 0;
          sVar3 = (short)local_c6;
          this_01 = (Store *)G_Store();
          Store::GetSellItemPrice(this_01,local_cd,local_10,sVar3,false,&local_68);
          iVar6 = local_68;
          pCVar11 = (CValueStatistic *)GetInstanceValueStatistic();
          CValueStatistic::AddValueStatistic(pCVar11,9,param_1,iVar6);
        }
      }
      uVar12 = 0;
                    /* try { // try from 08549fb8 to 08549fbc has its CatchHandler @ 08549fd4 */
      std::vector<int,std::allocator<int>>::~vector(local_60);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_54);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_5,0);
      uVar12 = 0;
    }
  }
  else {
    uVar12 = 0x11;
  }
  return uVar12;
}
```
