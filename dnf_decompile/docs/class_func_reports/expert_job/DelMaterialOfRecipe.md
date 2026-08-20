# DelMaterialOfRecipe

`_ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi`

`expert_job::DelMaterialOfRecipe(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, PacketGuard*, bool&, int)`

| 类 | 地址 |
|---|---|
| `expert_job` | `0x0849b957` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849b957  _ZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbi
#           expert_job::DelMaterialOfRecipe(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, PacketGuard*, bool&, int)
# range [0x0849b957, 0x0849bcfa]
0849b957 +0x000:  push   %ebp
0849b958 +0x001:  mov    %esp,%ebp
0849b95a +0x003:  push   %esi
0849b95b +0x004:  push   %ebx
0849b95c +0x005:  sub    $0x90,%esp
0849b962 +0x00b:  lea    -0x4c(%ebp),%eax
0849b965 +0x00e:  mov    %eax,(%esp)
0849b968 +0x011:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0849b96d +0x016:  lea    -0x4c(%ebp),%eax
0849b970 +0x019:  mov    %eax,(%esp)
0849b973 +0x01c:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
0849b978 +0x021:  mov    0xc(%ebp),%eax
0849b97b +0x024:  mov    %eax,0x4(%esp)
0849b97f +0x028:  lea    -0x4c(%ebp),%eax
0849b982 +0x02b:  mov    %eax,(%esp)
0849b985 +0x02e:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0849b98a +0x033:  lea    -0x4c(%ebp),%eax
0849b98d +0x036:  mov    %eax,0x4(%esp)
0849b991 +0x03a:  mov    0x8(%ebp),%eax
0849b994 +0x03d:  mov    %eax,(%esp)
0849b997 +0x040:  call   0868ba58 <_ZN5CUser27CalculateExpertJobMaterialsERSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::CalculateExpertJobMaterials(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
0849b99c +0x045:  lea    -0x58(%ebp),%eax
0849b99f +0x048:  mov    %eax,(%esp)
0849b9a2 +0x04b:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0849b9a7 +0x050:  lea    -0x64(%ebp),%eax
0849b9aa +0x053:  mov    %eax,(%esp)
0849b9ad +0x056:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0849b9b2 +0x05b:  lea    -0x68(%ebp),%eax
0849b9b5 +0x05e:  mov    %eax,(%esp)
0849b9b8 +0x061:  call   0817f232 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x463>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x463
0849b9bd +0x066:  mov    0x8(%ebp),%eax
0849b9c0 +0x069:  mov    %eax,(%esp)
0849b9c3 +0x06c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849b9c8 +0x071:  movl   $0x0,0x18(%esp)
0849b9d0 +0x079:  movl   $0x8,0x14(%esp)
0849b9d8 +0x081:  movl   $0xc,0x10(%esp)
0849b9e0 +0x089:  mov    0x18(%ebp),%edx
0849b9e3 +0x08c:  mov    %edx,0xc(%esp)
0849b9e7 +0x090:  lea    -0x58(%ebp),%edx
0849b9ea +0x093:  mov    %edx,0x8(%esp)
0849b9ee +0x097:  lea    -0x4c(%ebp),%edx
0849b9f1 +0x09a:  mov    %edx,0x4(%esp)
0849b9f5 +0x09e:  mov    %eax,(%esp)
0849b9f8 +0x0a1:  call   08505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>  ; CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)
0849b9fd +0x0a6:  mov    %eax,-0x10(%ebp)
0849ba00 +0x0a9:  cmpl   $0x0,-0x10(%ebp)
0849ba04 +0x0ad:  jne    0849ba6f <+0x118>
0849ba06 +0x0af:  lea    -0x4c(%ebp),%eax
0849ba09 +0x0b2:  mov    %eax,(%esp)
0849ba0c +0x0b5:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0849ba11 +0x0ba:  mov    %eax,%esi
0849ba13 +0x0bc:  mov    0x8(%ebp),%eax
0849ba16 +0x0bf:  mov    %eax,(%esp)
0849ba19 +0x0c2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0849ba1e +0x0c7:  mov    %eax,%ebx
0849ba20 +0x0c9:  movl   $0x5,0xc(%esp)
0849ba28 +0x0d1:  movl   $0x1c0,0x8(%esp)
0849ba30 +0x0d9:  movl   $&_ZZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbiE19__PRETTY_FUNCTION__,0x4(%esp)
0849ba38 +0x0e1:  lea    -0x40(%ebp),%eax
0849ba3b +0x0e4:  mov    %eax,(%esp)
0849ba3e +0x0e7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849ba43 +0x0ec:  mov    %esi,0x10(%esp)
0849ba47 +0x0f0:  mov    -0x10(%ebp),%eax
0849ba4a +0x0f3:  mov    %eax,0xc(%esp)
0849ba4e +0x0f7:  mov    %ebx,0x8(%esp)
0849ba52 +0x0fb:  movl   $"ExpertJobMaterial::DelMaterialOfRecipe, getCurCharacInvenR()->delete_event_items , size does not match! %d %d!=%d",0x4(%esp)
0849ba5a +0x103:  lea    -0x40(%ebp),%eax
0849ba5d +0x106:  mov    %eax,(%esp)
0849ba60 +0x109:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849ba65 +0x10e:  mov    $0x0,%ebx
0849ba6a +0x113:  jmp    0849bc9a <+0x343>
0849ba6f +0x118:  cmpl   $0x1,0x1c(%ebp)
0849ba73 +0x11c:  jne    0849bb68 <+0x211>
0849ba79 +0x122:  mov    0x1c(%ebp),%eax
0849ba7c +0x125:  mov    -0x10(%ebp),%edx
0849ba7f +0x128:  add    %eax,%edx
0849ba81 +0x12a:  mov    0x14(%ebp),%eax
0849ba84 +0x12d:  mov    %edx,0x4(%esp)
0849ba88 +0x131:  mov    %eax,(%esp)
0849ba8b +0x134:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849ba90 +0x139:  mov    0x8(%ebp),%eax
0849ba93 +0x13c:  mov    %eax,(%esp)
0849ba96 +0x13f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0849ba9b +0x144:  movl   $0x1,0x14(%esp)
0849baa3 +0x14c:  movl   $0x8,0x10(%esp)
0849baab +0x154:  mov    0x1c(%ebp),%edx
0849baae +0x157:  mov    %edx,0xc(%esp)
0849bab2 +0x15b:  mov    0x10(%ebp),%edx
0849bab5 +0x15e:  mov    %edx,0x8(%esp)
0849bab9 +0x162:  movl   $0x1,0x4(%esp)
0849bac1 +0x16a:  mov    %eax,(%esp)
0849bac4 +0x16d:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0849bac9 +0x172:  mov    %al,-0x9(%ebp)
0849bacc +0x175:  movzbl -0x9(%ebp),%eax
0849bad0 +0x179:  xor    $0x1,%eax
0849bad3 +0x17c:  test   %al,%al
0849bad5 +0x17e:  je     0849bb2f <+0x1d8>
0849bad7 +0x180:  mov    0x8(%ebp),%eax
0849bada +0x183:  mov    %eax,(%esp)
0849badd +0x186:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0849bae2 +0x18b:  mov    %eax,%ebx
0849bae4 +0x18d:  movl   $0x5,0xc(%esp)
0849baec +0x195:  movl   $0x1cf,0x8(%esp)
0849baf4 +0x19d:  movl   $&_ZZN10expert_job19DelMaterialOfRecipeEP5CUserRSt6vectorISt4pairIiiESaIS4_EEiP11PacketGuardRbiE19__PRETTY_FUNCTION__,0x4(%esp)
0849bafc +0x1a5:  lea    -0x30(%ebp),%eax
0849baff +0x1a8:  mov    %eax,(%esp)
0849bb02 +0x1ab:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849bb07 +0x1b0:  mov    0x10(%ebp),%eax
0849bb0a +0x1b3:  mov    %eax,0xc(%esp)
0849bb0e +0x1b7:  mov    %ebx,0x8(%esp)
0849bb12 +0x1bb:  movl   $"CUser::compound_item, getCurCharacInvenW()->delete_item failed , %d %d",0x4(%esp)
0849bb1a +0x1c3:  lea    -0x30(%ebp),%eax
0849bb1d +0x1c6:  mov    %eax,(%esp)
0849bb20 +0x1c9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849bb25 +0x1ce:  mov    $0x0,%ebx
0849bb2a +0x1d3:  jmp    0849bc9a <+0x343>
0849bb2f +0x1d8:  mov    0x14(%ebp),%eax
0849bb32 +0x1db:  movl   $0x0,0x4(%esp)
0849bb3a +0x1e3:  mov    %eax,(%esp)
0849bb3d +0x1e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849bb42 +0x1eb:  mov    0x14(%ebp),%eax
0849bb45 +0x1ee:  mov    0x10(%ebp),%edx
0849bb48 +0x1f1:  mov    %edx,0x4(%esp)
0849bb4c +0x1f5:  mov    %eax,(%esp)
0849bb4f +0x1f8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849bb54 +0x1fd:  mov    0x14(%ebp),%eax
0849bb57 +0x200:  mov    0x1c(%ebp),%edx
0849bb5a +0x203:  mov    %edx,0x4(%esp)
0849bb5e +0x207:  mov    %eax,(%esp)
0849bb61 +0x20a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849bb66 +0x20f:  jmp    0849bb7a <+0x223>
0849bb68 +0x211:  mov    0x14(%ebp),%eax
0849bb6b +0x214:  mov    -0x10(%ebp),%edx
0849bb6e +0x217:  mov    %edx,0x4(%esp)
0849bb72 +0x21b:  mov    %eax,(%esp)
0849bb75 +0x21e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849bb7a +0x223:  cmpl   $0x0,-0x10(%ebp)
0849bb7e +0x227:  jle    0849bc7e <+0x327>
0849bb84 +0x22d:  lea    -0x6c(%ebp),%eax
0849bb87 +0x230:  lea    -0x58(%ebp),%edx
0849bb8a +0x233:  mov    %edx,0x4(%esp)
0849bb8e +0x237:  mov    %eax,(%esp)
0849bb91 +0x23a:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0849bb96 +0x23f:  sub    $0x4,%esp
0849bb99 +0x242:  mov    -0x6c(%ebp),%eax
0849bb9c +0x245:  mov    %eax,-0x68(%ebp)
0849bb9f +0x248:  jmp    0849bc4f <+0x2f8>
0849bba4 +0x24d:  lea    -0x68(%ebp),%eax
0849bba7 +0x250:  mov    %eax,(%esp)
0849bbaa +0x253:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0849bbaf +0x258:  mov    (%eax),%edx
0849bbb1 +0x25a:  mov    0x14(%ebp),%eax
0849bbb4 +0x25d:  mov    %edx,0x4(%esp)
0849bbb8 +0x261:  mov    %eax,(%esp)
0849bbbb +0x264:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849bbc0 +0x269:  lea    -0x1c(%ebp),%eax
0849bbc3 +0x26c:  movl   $0x0,0x8(%esp)
0849bbcb +0x274:  lea    -0x68(%ebp),%edx
0849bbce +0x277:  mov    %edx,0x4(%esp)
0849bbd2 +0x27b:  mov    %eax,(%esp)
0849bbd5 +0x27e:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0849bbda +0x283:  sub    $0x4,%esp
0849bbdd +0x286:  lea    -0x68(%ebp),%eax
0849bbe0 +0x289:  mov    %eax,(%esp)
0849bbe3 +0x28c:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0849bbe8 +0x291:  mov    (%eax),%edx
0849bbea +0x293:  mov    0x14(%ebp),%eax
0849bbed +0x296:  mov    %edx,0x4(%esp)
0849bbf1 +0x29a:  mov    %eax,(%esp)
0849bbf4 +0x29d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849bbf9 +0x2a2:  lea    -0x18(%ebp),%eax
0849bbfc +0x2a5:  movl   $0x0,0x8(%esp)
0849bc04 +0x2ad:  lea    -0x68(%ebp),%edx
0849bc07 +0x2b0:  mov    %edx,0x4(%esp)
0849bc0b +0x2b4:  mov    %eax,(%esp)
0849bc0e +0x2b7:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0849bc13 +0x2bc:  sub    $0x4,%esp
0849bc16 +0x2bf:  lea    -0x68(%ebp),%eax
0849bc19 +0x2c2:  mov    %eax,(%esp)
0849bc1c +0x2c5:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0849bc21 +0x2ca:  mov    (%eax),%edx
0849bc23 +0x2cc:  mov    0x14(%ebp),%eax
0849bc26 +0x2cf:  mov    %edx,0x4(%esp)
0849bc2a +0x2d3:  mov    %eax,(%esp)
0849bc2d +0x2d6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849bc32 +0x2db:  lea    -0x14(%ebp),%eax
0849bc35 +0x2de:  movl   $0x0,0x8(%esp)
0849bc3d +0x2e6:  lea    -0x68(%ebp),%edx
0849bc40 +0x2e9:  mov    %edx,0x4(%esp)
0849bc44 +0x2ed:  mov    %eax,(%esp)
0849bc47 +0x2f0:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0849bc4c +0x2f5:  sub    $0x4,%esp
0849bc4f +0x2f8:  lea    -0x20(%ebp),%eax
0849bc52 +0x2fb:  lea    -0x58(%ebp),%edx
0849bc55 +0x2fe:  mov    %edx,0x4(%esp)
0849bc59 +0x302:  mov    %eax,(%esp)
0849bc5c +0x305:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0849bc61 +0x30a:  sub    $0x4,%esp
0849bc64 +0x30d:  lea    -0x20(%ebp),%eax
0849bc67 +0x310:  mov    %eax,0x4(%esp)
0849bc6b +0x314:  lea    -0x68(%ebp),%eax
0849bc6e +0x317:  mov    %eax,(%esp)
0849bc71 +0x31a:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0849bc76 +0x31f:  test   %al,%al
0849bc78 +0x321:  jne    0849bba4 <+0x24d>
0849bc7e +0x327:  mov    $0x1,%ebx
0849bc83 +0x32c:  jmp    0849bc9a <+0x343>
0849bc85 +0x32e:  mov    %edx,%ebx
0849bc87 +0x330:  mov    %eax,%esi
0849bc89 +0x332:  lea    -0x64(%ebp),%eax
0849bc8c +0x335:  mov    %eax,(%esp)
0849bc8f +0x338:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0849bc94 +0x33d:  mov    %esi,%eax
0849bc96 +0x33f:  mov    %ebx,%edx
0849bc98 +0x341:  jmp    0849bca7 <+0x350>
0849bc9a +0x343:  lea    -0x64(%ebp),%eax
0849bc9d +0x346:  mov    %eax,(%esp)
0849bca0 +0x349:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0849bca5 +0x34e:  jmp    0849bcbc <+0x365>
0849bca7 +0x350:  mov    %edx,%ebx
0849bca9 +0x352:  mov    %eax,%esi
0849bcab +0x354:  lea    -0x58(%ebp),%eax
0849bcae +0x357:  mov    %eax,(%esp)
0849bcb1 +0x35a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0849bcb6 +0x35f:  mov    %esi,%eax
0849bcb8 +0x361:  mov    %ebx,%edx
0849bcba +0x363:  jmp    0849bcc9 <+0x372>
0849bcbc +0x365:  lea    -0x58(%ebp),%eax
0849bcbf +0x368:  mov    %eax,(%esp)
0849bcc2 +0x36b:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0849bcc7 +0x370:  jmp    0849bce4 <+0x38d>
0849bcc9 +0x372:  mov    %edx,%ebx
0849bccb +0x374:  mov    %eax,%esi
0849bccd +0x376:  lea    -0x4c(%ebp),%eax
0849bcd0 +0x379:  mov    %eax,(%esp)
0849bcd3 +0x37c:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0849bcd8 +0x381:  mov    %esi,%eax
0849bcda +0x383:  mov    %ebx,%edx
0849bcdc +0x385:  mov    %eax,(%esp)
0849bcdf +0x388:  call   08ae3750 <_Unwind_Resume>
0849bce4 +0x38d:  lea    -0x4c(%ebp),%eax
0849bce7 +0x390:  mov    %eax,(%esp)
0849bcea +0x393:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0849bcef +0x398:  mov    %ebx,%eax
0849bcf1 +0x39a:  lea    -0x8(%ebp),%esp
0849bcf4 +0x39d:  add    $0x0,%esp
0849bcf7 +0x3a0:  pop    %ebx
0849bcf8 +0x3a1:  pop    %esi
0849bcf9 +0x3a2:  pop    %ebp
0849bcfa +0x3a3:  ret
```

## 反编译 C

```c
// expert_job::DelMaterialOfRecipe @ 0x849b957

/* expert_job::DelMaterialOfRecipe(CUser*, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&, int, PacketGuard*, bool&, int) */

undefined4
expert_job::DelMaterialOfRecipe
          (CUser *param_1,vector *param_2,int param_3,PacketGuard *param_4,bool *param_5,int param_6
          )

{
  bool bVar1;
  CInventory *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_6c [4];
  vector<int,std::allocator<int>> local_68 [12];
  vector<int,std::allocator<int>> local_5c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_50 [12];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  __normal_iterator local_24 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  int local_14;
  char local_d;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_50);
                    /* try { // try from 0849b973 to 0849b9a6 has its CatchHandler @ 0849bcc9 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_50);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=(local_50,param_2);
  CUser::CalculateExpertJobMaterials(param_1,(vector *)local_50);
  std::vector<int,std::allocator<int>>::vector(local_5c);
                    /* try { // try from 0849b9ad to 0849b9b1 has its CatchHandler @ 0849bca7 */
  std::vector<int,std::allocator<int>>::vector(local_68);
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
            (local_6c);
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 0849b9f8 to 0849bc75 has its CatchHandler @ 0849bc85 */
  local_14 = CInventory::delete_event_items(pCVar2,local_50,local_5c,param_5,0xc,8,0);
  if (local_14 == 0) {
    uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_50);
    uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_44,
                       "bool expert_job::DelMaterialOfRecipe(CUser*, IntPairVector&, int, PacketGuard*, bool&, int)"
                       ,0x1c0,5);
    cMyTrace::operator()
              (local_44,
               "ExpertJobMaterial::DelMaterialOfRecipe, getCurCharacInvenR()->delete_event_items , size does not match! %d %d!=%d"
               ,uVar4,local_14,uVar3);
    uVar3 = 0;
  }
  else {
    if (param_6 == 1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,local_14 + 1);
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_d = CInventory::delete_item(pCVar2,1,param_3,1,8,1);
      if (local_d != '\x01') {
        uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_34,
                           "bool expert_job::DelMaterialOfRecipe(CUser*, IntPairVector&, int, PacketGuard*, bool&, int)"
                           ,0x1cf,5);
        cMyTrace::operator()
                  (local_34,"CUser::compound_item, getCurCharacInvenW()->delete_item failed , %d %d"
                   ,uVar3,param_3);
        uVar3 = 0;
        goto LAB_0849bc9a;
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_4,param_3);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_4,1);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,local_14);
    }
    if (0 < local_14) {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=(local_6c,local_24);
        if (!bVar1) break;
        piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_6c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,*piVar5);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_20,(int)local_6c);
        piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_6c);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_4,*piVar5);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_1c,(int)local_6c);
        piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_6c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_4,*piVar5);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_18,(int)local_6c);
      }
    }
    uVar3 = 1;
  }
LAB_0849bc9a:
                    /* try { // try from 0849bca0 to 0849bca4 has its CatchHandler @ 0849bca7 */
  std::vector<int,std::allocator<int>>::~vector(local_68);
                    /* try { // try from 0849bcc2 to 0849bcc6 has its CatchHandler @ 0849bcc9 */
  std::vector<int,std::allocator<int>>::~vector(local_5c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_50);
  return uVar3;
}
```
