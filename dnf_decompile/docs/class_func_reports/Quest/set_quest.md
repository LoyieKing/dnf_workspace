# set_quest

`_ZN5Quest9set_questE11QuestScript`

`Quest::set_quest(QuestScript)`

| 类 | 地址 |
|---|---|
| `Quest` | `0x0835233e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835233e  _ZN5Quest9set_questE11QuestScript
#           Quest::set_quest(QuestScript)
# range [0x0835233e, 0x08352a5b]
0835233e +0x000:  push   %ebp
0835233f +0x001:  mov    %esp,%ebp
08352341 +0x003:  sub    $0x68,%esp
08352344 +0x006:  mov    0xc(%ebp),%eax
08352347 +0x009:  lea    0x4(%eax),%edx
0835234a +0x00c:  mov    0x8(%ebp),%eax
0835234d +0x00f:  mov    %edx,0x4(%esp)
08352351 +0x013:  mov    %eax,(%esp)
08352354 +0x016:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08352359 +0x01b:  mov    0xc(%ebp),%eax
0835235c +0x01e:  mov    (%eax),%edx
0835235e +0x020:  mov    0x8(%ebp),%eax
08352361 +0x023:  mov    %edx,0x4(%eax)
08352364 +0x026:  mov    0xc(%ebp),%eax
08352367 +0x029:  mov    0xd4(%eax),%edx
0835236d +0x02f:  mov    0x8(%ebp),%eax
08352370 +0x032:  mov    %edx,0x8(%eax)
08352373 +0x035:  mov    0xc(%ebp),%eax
08352376 +0x038:  mov    0xe4(%eax),%edx
0835237c +0x03e:  mov    0x8(%ebp),%eax
0835237f +0x041:  mov    %edx,0xc(%eax)
08352382 +0x044:  mov    0xc(%ebp),%eax
08352385 +0x047:  lea    0xf4(%eax),%edx
0835238b +0x04d:  mov    0x8(%ebp),%eax
0835238e +0x050:  add    $0x10,%eax
08352391 +0x053:  mov    %edx,0x4(%esp)
08352395 +0x057:  mov    %eax,(%esp)
08352398 +0x05a:  call   0838ff7c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1fa1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1fa1c
0835239d +0x05f:  mov    0xc(%ebp),%eax
083523a0 +0x062:  mov    0xdc(%eax),%edx
083523a6 +0x068:  mov    0x8(%ebp),%eax
083523a9 +0x06b:  mov    %edx,0x1c(%eax)
083523ac +0x06e:  mov    0xc(%ebp),%eax
083523af +0x071:  mov    0x124(%eax),%edx
083523b5 +0x077:  mov    0x8(%ebp),%eax
083523b8 +0x07a:  mov    %edx,0x28(%eax)
083523bb +0x07d:  mov    0xc(%ebp),%eax
083523be +0x080:  mov    0x100(%eax),%edx
083523c4 +0x086:  mov    0x8(%ebp),%eax
083523c7 +0x089:  mov    %edx,0x20(%eax)
083523ca +0x08c:  mov    0xc(%ebp),%eax
083523cd +0x08f:  mov    0x104(%eax),%edx
083523d3 +0x095:  mov    0x8(%ebp),%eax
083523d6 +0x098:  mov    %edx,0x24(%eax)
083523d9 +0x09b:  mov    0xc(%ebp),%eax
083523dc +0x09e:  lea    0x10c(%eax),%edx
083523e2 +0x0a4:  mov    0x8(%ebp),%eax
083523e5 +0x0a7:  add    $0x2c,%eax
083523e8 +0x0aa:  mov    %edx,0x4(%esp)
083523ec +0x0ae:  mov    %eax,(%esp)
083523ef +0x0b1:  call   0838e7de <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1e27e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1e27e
083523f4 +0x0b6:  mov    0xc(%ebp),%eax
083523f7 +0x0b9:  lea    0x118(%eax),%edx
083523fd +0x0bf:  mov    0x8(%ebp),%eax
08352400 +0x0c2:  add    $0x38,%eax
08352403 +0x0c5:  mov    %edx,0x4(%esp)
08352407 +0x0c9:  mov    %eax,(%esp)
0835240a +0x0cc:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
0835240f +0x0d1:  mov    0xc(%ebp),%eax
08352412 +0x0d4:  movzbl 0x130(%eax),%edx
08352419 +0x0db:  mov    0x8(%ebp),%eax
0835241c +0x0de:  mov    %dl,0x44(%eax)
0835241f +0x0e1:  mov    0xc(%ebp),%eax
08352422 +0x0e4:  lea    0x138(%eax),%edx
08352428 +0x0ea:  mov    0x8(%ebp),%eax
0835242b +0x0ed:  add    $0x48,%eax
0835242e +0x0f0:  mov    %edx,0x4(%esp)
08352432 +0x0f4:  mov    %eax,(%esp)
08352435 +0x0f7:  call   083901ee <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1fc8e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1fc8e
0835243a +0x0fc:  mov    0xc(%ebp),%eax
0835243d +0x0ff:  lea    0x144(%eax),%edx
08352443 +0x105:  mov    0x8(%ebp),%eax
08352446 +0x108:  add    $0x54,%eax
08352449 +0x10b:  mov    %edx,0x4(%esp)
0835244d +0x10f:  mov    %eax,(%esp)
08352450 +0x112:  call   08390460 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ff00>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ff00
08352455 +0x117:  mov    0x8(%ebp),%eax
08352458 +0x11a:  mov    0xc(%ebp),%edx
0835245b +0x11d:  mov    0x150(%edx),%ecx
08352461 +0x123:  mov    %ecx,0x60(%eax)
08352464 +0x126:  mov    0x154(%edx),%ecx
0835246a +0x12c:  mov    %ecx,0x64(%eax)
0835246d +0x12f:  mov    0x158(%edx),%ecx
08352473 +0x135:  mov    %ecx,0x68(%eax)
08352476 +0x138:  mov    0x15c(%edx),%edx
0835247c +0x13e:  mov    %edx,0x6c(%eax)
0835247f +0x141:  mov    0xc(%ebp),%eax
08352482 +0x144:  lea    0x160(%eax),%edx
08352488 +0x14a:  mov    0x8(%ebp),%eax
0835248b +0x14d:  add    $0x70,%eax
0835248e +0x150:  mov    %edx,0x4(%esp)
08352492 +0x154:  mov    %eax,(%esp)
08352495 +0x157:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0835249a +0x15c:  mov    0xc(%ebp),%eax
0835249d +0x15f:  mov    0x178(%eax),%edx
083524a3 +0x165:  mov    0x8(%ebp),%eax
083524a6 +0x168:  mov    %edx,0x7c(%eax)
083524a9 +0x16b:  mov    0xc(%ebp),%eax
083524ac +0x16e:  mov    0x17c(%eax),%edx
083524b2 +0x174:  mov    0x8(%ebp),%eax
083524b5 +0x177:  mov    %edx,0x80(%eax)
083524bb +0x17d:  mov    0xc(%ebp),%eax
083524be +0x180:  lea    0x180(%eax),%edx
083524c4 +0x186:  mov    0x8(%ebp),%eax
083524c7 +0x189:  add    $0x84,%eax
083524cc +0x18e:  mov    %edx,0x4(%esp)
083524d0 +0x192:  mov    %eax,(%esp)
083524d3 +0x195:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
083524d8 +0x19a:  mov    0xc(%ebp),%eax
083524db +0x19d:  lea    0x1b0(%eax),%edx
083524e1 +0x1a3:  mov    0x8(%ebp),%eax
083524e4 +0x1a6:  add    $0x90,%eax
083524e9 +0x1ab:  mov    %edx,0x4(%esp)
083524ed +0x1af:  mov    %eax,(%esp)
083524f0 +0x1b2:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
083524f5 +0x1b7:  mov    0xc(%ebp),%eax
083524f8 +0x1ba:  lea    0x298(%eax),%edx
083524fe +0x1c0:  mov    0x8(%ebp),%eax
08352501 +0x1c3:  add    $0x9c,%eax
08352506 +0x1c8:  mov    %edx,0x4(%esp)
0835250a +0x1cc:  mov    %eax,(%esp)
0835250d +0x1cf:  call   0837a67e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xa11e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xa11e
08352512 +0x1d4:  mov    0xc(%ebp),%eax
08352515 +0x1d7:  movzbl 0x22e(%eax),%edx
0835251c +0x1de:  mov    0x8(%ebp),%eax
0835251f +0x1e1:  mov    %dl,0x101(%eax)
08352525 +0x1e7:  mov    0xc(%ebp),%eax
08352528 +0x1ea:  movzbl 0x108(%eax),%edx
0835252f +0x1f1:  mov    0x8(%ebp),%eax
08352532 +0x1f4:  mov    %dl,0x130(%eax)
08352538 +0x1fa:  mov    0x8(%ebp),%eax
0835253b +0x1fd:  mov    0x7c(%eax),%eax
0835253e +0x200:  test   %eax,%eax
08352540 +0x202:  jne    0835269a <+0x35c>
08352546 +0x208:  mov    0x8(%ebp),%eax
08352549 +0x20b:  lea    0x84(%eax),%edx
0835254f +0x211:  lea    -0x40(%ebp),%eax
08352552 +0x214:  mov    %edx,0x4(%esp)
08352556 +0x218:  mov    %eax,(%esp)
08352559 +0x21b:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0835255e +0x220:  sub    $0x4,%esp
08352561 +0x223:  lea    -0x48(%ebp),%eax
08352564 +0x226:  mov    %eax,(%esp)
08352567 +0x229:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0835256c +0x22e:  jmp    08352660 <+0x322>
08352571 +0x233:  lea    -0x40(%ebp),%eax
08352574 +0x236:  mov    %eax,(%esp)
08352577 +0x239:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0835257c +0x23e:  mov    (%eax),%eax
0835257e +0x240:  mov    %eax,-0x48(%ebp)
08352581 +0x243:  lea    -0x38(%ebp),%eax
08352584 +0x246:  movl   $0x0,0x8(%esp)
0835258c +0x24e:  lea    -0x40(%ebp),%edx
0835258f +0x251:  mov    %edx,0x4(%esp)
08352593 +0x255:  mov    %eax,(%esp)
08352596 +0x258:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0835259b +0x25d:  sub    $0x4,%esp
0835259e +0x260:  mov    0x8(%ebp),%eax
083525a1 +0x263:  lea    0x84(%eax),%edx
083525a7 +0x269:  lea    -0x34(%ebp),%eax
083525aa +0x26c:  mov    %edx,0x4(%esp)
083525ae +0x270:  mov    %eax,(%esp)
083525b1 +0x273:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
083525b6 +0x278:  sub    $0x4,%esp
083525b9 +0x27b:  lea    -0x34(%ebp),%eax
083525bc +0x27e:  mov    %eax,0x4(%esp)
083525c0 +0x282:  lea    -0x40(%ebp),%eax
083525c3 +0x285:  mov    %eax,(%esp)
083525c6 +0x288:  call   082688da <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x26b>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x26b
083525cb +0x28d:  test   %al,%al
083525cd +0x28f:  je     0835261b <+0x2dd>
083525cf +0x291:  movl   $0x5,0xc(%esp)
083525d7 +0x299:  movl   $0x109d,0x8(%esp)
083525df +0x2a1:  movl   $&_ZZN5Quest9set_questE11QuestScriptE19__PRETTY_FUNCTION__,0x4(%esp)
083525e7 +0x2a9:  lea    -0x30(%ebp),%eax
083525ea +0x2ac:  mov    %eax,(%esp)
083525ed +0x2af:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083525f2 +0x2b4:  movl   $0x109d,0xc(%esp)
083525fa +0x2bc:  movl   $&_ZZN5Quest9set_questE11QuestScriptE19__PRETTY_FUNCTION__,0x8(%esp)
08352602 +0x2c4:  movl   $"[%s][%d]_(it == intDatas_.end())",0x4(%esp)
0835260a +0x2cc:  lea    -0x30(%ebp),%eax
0835260d +0x2cf:  mov    %eax,(%esp)
08352610 +0x2d2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08352615 +0x2d7:  nop
08352616 +0x2d8:  jmp    083527c0 <+0x482>
0835261b +0x2dd:  lea    -0x40(%ebp),%eax
0835261e +0x2e0:  mov    %eax,(%esp)
08352621 +0x2e3:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08352626 +0x2e8:  mov    (%eax),%eax
08352628 +0x2ea:  mov    %eax,-0x44(%ebp)
0835262b +0x2ed:  lea    -0x20(%ebp),%eax
0835262e +0x2f0:  movl   $0x0,0x8(%esp)
08352636 +0x2f8:  lea    -0x40(%ebp),%edx
08352639 +0x2fb:  mov    %edx,0x4(%esp)
0835263d +0x2ff:  mov    %eax,(%esp)
08352640 +0x302:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08352645 +0x307:  sub    $0x4,%esp
08352648 +0x30a:  mov    0x8(%ebp),%eax
0835264b +0x30d:  lea    0xac(%eax),%edx
08352651 +0x313:  lea    -0x48(%ebp),%eax
08352654 +0x316:  mov    %eax,0x4(%esp)
08352658 +0x31a:  mov    %edx,(%esp)
0835265b +0x31d:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
08352660 +0x322:  mov    0x8(%ebp),%eax
08352663 +0x325:  lea    0x84(%eax),%edx
08352669 +0x32b:  lea    -0x3c(%ebp),%eax
0835266c +0x32e:  mov    %edx,0x4(%esp)
08352670 +0x332:  mov    %eax,(%esp)
08352673 +0x335:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08352678 +0x33a:  sub    $0x4,%esp
0835267b +0x33d:  lea    -0x3c(%ebp),%eax
0835267e +0x340:  mov    %eax,0x4(%esp)
08352682 +0x344:  lea    -0x40(%ebp),%eax
08352685 +0x347:  mov    %eax,(%esp)
08352688 +0x34a:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0835268d +0x34f:  test   %al,%al
0835268f +0x351:  jne    08352571 <+0x233>
08352695 +0x357:  jmp    083527c0 <+0x482>
0835269a +0x35c:  mov    0x8(%ebp),%eax
0835269d +0x35f:  mov    0x7c(%eax),%eax
083526a0 +0x362:  cmp    $0x19,%eax
083526a3 +0x365:  jne    083527c0 <+0x482>
083526a9 +0x36b:  mov    0x8(%ebp),%eax
083526ac +0x36e:  add    $0xac,%eax
083526b1 +0x373:  mov    %eax,(%esp)
083526b4 +0x376:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
083526b9 +0x37b:  lea    -0x50(%ebp),%eax
083526bc +0x37e:  mov    %eax,(%esp)
083526bf +0x381:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
083526c4 +0x386:  mov    0x8(%ebp),%eax
083526c7 +0x389:  add    $0x84,%eax
083526cc +0x38e:  mov    %eax,(%esp)
083526cf +0x391:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083526d4 +0x396:  shr    %eax
083526d6 +0x398:  mov    %eax,-0x10(%ebp)
083526d9 +0x39b:  mov    0x8(%ebp),%eax
083526dc +0x39e:  lea    0x84(%eax),%edx
083526e2 +0x3a4:  lea    -0x54(%ebp),%eax
083526e5 +0x3a7:  mov    %edx,0x4(%esp)
083526e9 +0x3ab:  mov    %eax,(%esp)
083526ec +0x3ae:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
083526f1 +0x3b3:  sub    $0x4,%esp
083526f4 +0x3b6:  movl   $0x0,-0xc(%ebp)
083526fb +0x3bd:  jmp    08352773 <+0x435>
083526fd +0x3bf:  lea    -0x18(%ebp),%eax
08352700 +0x3c2:  movl   $0x0,0x8(%esp)
08352708 +0x3ca:  lea    -0x54(%ebp),%edx
0835270b +0x3cd:  mov    %edx,0x4(%esp)
0835270f +0x3d1:  mov    %eax,(%esp)
08352712 +0x3d4:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08352717 +0x3d9:  sub    $0x4,%esp
0835271a +0x3dc:  lea    -0x18(%ebp),%eax
0835271d +0x3df:  mov    %eax,(%esp)
08352720 +0x3e2:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08352725 +0x3e7:  mov    (%eax),%eax
08352727 +0x3e9:  mov    %eax,-0x50(%ebp)
0835272a +0x3ec:  lea    -0x14(%ebp),%eax
0835272d +0x3ef:  movl   $0x0,0x8(%esp)
08352735 +0x3f7:  lea    -0x54(%ebp),%edx
08352738 +0x3fa:  mov    %edx,0x4(%esp)
0835273c +0x3fe:  mov    %eax,(%esp)
0835273f +0x401:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08352744 +0x406:  sub    $0x4,%esp
08352747 +0x409:  lea    -0x14(%ebp),%eax
0835274a +0x40c:  mov    %eax,(%esp)
0835274d +0x40f:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08352752 +0x414:  mov    (%eax),%eax
08352754 +0x416:  mov    %eax,-0x4c(%ebp)
08352757 +0x419:  mov    0x8(%ebp),%eax
0835275a +0x41c:  lea    0xac(%eax),%edx
08352760 +0x422:  lea    -0x50(%ebp),%eax
08352763 +0x425:  mov    %eax,0x4(%esp)
08352767 +0x429:  mov    %edx,(%esp)
0835276a +0x42c:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
0835276f +0x431:  addl   $0x1,-0xc(%ebp)
08352773 +0x435:  mov    -0xc(%ebp),%eax
08352776 +0x438:  cmp    -0x10(%ebp),%eax
08352779 +0x43b:  jge    083527b3 <+0x475>
0835277b +0x43d:  mov    0x8(%ebp),%eax
0835277e +0x440:  lea    0x84(%eax),%edx
08352784 +0x446:  lea    -0x1c(%ebp),%eax
08352787 +0x449:  mov    %edx,0x4(%esp)
0835278b +0x44d:  mov    %eax,(%esp)
0835278e +0x450:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08352793 +0x455:  sub    $0x4,%esp
08352796 +0x458:  lea    -0x1c(%ebp),%eax
08352799 +0x45b:  mov    %eax,0x4(%esp)
0835279d +0x45f:  lea    -0x54(%ebp),%eax
083527a0 +0x462:  mov    %eax,(%esp)
083527a3 +0x465:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
083527a8 +0x46a:  test   %al,%al
083527aa +0x46c:  je     083527b3 <+0x475>
083527ac +0x46e:  mov    $0x1,%eax
083527b1 +0x473:  jmp    083527b8 <+0x47a>
083527b3 +0x475:  mov    $0x0,%eax
083527b8 +0x47a:  test   %al,%al
083527ba +0x47c:  jne    083526fd <+0x3bf>
083527c0 +0x482:  mov    0x8(%ebp),%eax
083527c3 +0x485:  add    $0xdc,%eax
083527c8 +0x48a:  mov    %eax,(%esp)
083527cb +0x48d:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
083527d0 +0x492:  mov    0x8(%ebp),%eax
083527d3 +0x495:  movl   $0x0,0xe8(%eax)
083527dd +0x49f:  mov    0x8(%ebp),%eax
083527e0 +0x4a2:  add    $0xec,%eax
083527e5 +0x4a7:  mov    %eax,(%esp)
083527e8 +0x4aa:  call   08383542 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12fe2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12fe2
083527ed +0x4af:  mov    0xc(%ebp),%eax
083527f0 +0x4b2:  mov    0x1d4(%eax),%edx
083527f6 +0x4b8:  mov    0x8(%ebp),%eax
083527f9 +0x4bb:  mov    %edx,0xb8(%eax)
083527ff +0x4c1:  mov    0xc(%ebp),%eax
08352802 +0x4c4:  mov    0x1e4(%eax),%edx
08352808 +0x4ca:  mov    0x8(%ebp),%eax
0835280b +0x4cd:  mov    %edx,0xc0(%eax)
08352811 +0x4d3:  mov    0xc(%ebp),%eax
08352814 +0x4d6:  mov    0x228(%eax),%edx
0835281a +0x4dc:  mov    0x8(%ebp),%eax
0835281d +0x4df:  mov    %edx,0xbc(%eax)
08352823 +0x4e5:  mov    0x8(%ebp),%eax
08352826 +0x4e8:  mov    0xb8(%eax),%eax
0835282c +0x4ee:  test   %eax,%eax
0835282e +0x4f0:  je     08352842 <+0x504>
08352830 +0x4f2:  mov    0x8(%ebp),%eax
08352833 +0x4f5:  mov    0xb8(%eax),%eax
08352839 +0x4fb:  cmp    $0x19,%eax
0835283c +0x4fe:  jne    083528c8 <+0x58a>
08352842 +0x504:  mov    0xc(%ebp),%eax
08352845 +0x507:  lea    0x1d8(%eax),%edx
0835284b +0x50d:  mov    0x8(%ebp),%eax
0835284e +0x510:  add    $0xc4,%eax
08352853 +0x515:  mov    %edx,0x4(%esp)
08352857 +0x519:  mov    %eax,(%esp)
0835285a +0x51c:  call   083906ae <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2014e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2014e
0835285f +0x521:  mov    0xc(%ebp),%eax
08352862 +0x524:  lea    0x1e8(%eax),%edx
08352868 +0x52a:  mov    0x8(%ebp),%eax
0835286b +0x52d:  add    $0xd0,%eax
08352870 +0x532:  mov    %edx,0x4(%esp)
08352874 +0x536:  mov    %eax,(%esp)
08352877 +0x539:  call   083906ae <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2014e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2014e
0835287c +0x53e:  mov    0xc(%ebp),%eax
0835287f +0x541:  lea    0x20c(%eax),%edx
08352885 +0x547:  mov    0x8(%ebp),%eax
08352888 +0x54a:  add    $0xdc,%eax
0835288d +0x54f:  mov    %edx,0x4(%esp)
08352891 +0x553:  mov    %eax,(%esp)
08352894 +0x556:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
08352899 +0x55b:  mov    0xc(%ebp),%eax
0835289c +0x55e:  mov    0x218(%eax),%edx
083528a2 +0x564:  mov    0x8(%ebp),%eax
083528a5 +0x567:  mov    %edx,0xe8(%eax)
083528ab +0x56d:  mov    0x8(%ebp),%eax
083528ae +0x570:  lea    0xec(%eax),%edx
083528b4 +0x576:  mov    0xc(%ebp),%eax
083528b7 +0x579:  add    $0x21c,%eax
083528bc +0x57e:  mov    %edx,0x4(%esp)
083528c0 +0x582:  mov    %eax,(%esp)
083528c3 +0x585:  call   08352203 <_Z18makeRewardItemInfoRKSt6vectorIiSaIiEERS_I14RewardItemInfoSaIS4_EE>  ; makeRewardItemInfo(std::vector<int, std::allocator<int> > const&, std::vector<RewardItemInfo, std::allocator<RewardItemInfo> >&)
083528c8 +0x58a:  mov    0xc(%ebp),%eax
083528cb +0x58d:  mov    0x128(%eax),%edx
083528d1 +0x593:  mov    0x8(%ebp),%eax
083528d4 +0x596:  mov    %edx,0xf8(%eax)
083528da +0x59c:  mov    0xc(%ebp),%eax
083528dd +0x59f:  mov    0x12c(%eax),%edx
083528e3 +0x5a5:  mov    0x8(%ebp),%eax
083528e6 +0x5a8:  mov    %edx,0xfc(%eax)
083528ec +0x5ae:  mov    0xc(%ebp),%eax
083528ef +0x5b1:  movzbl 0x22d(%eax),%edx
083528f6 +0x5b8:  mov    0x8(%ebp),%eax
083528f9 +0x5bb:  mov    %dl,0x100(%eax)
083528ff +0x5c1:  mov    0xc(%ebp),%eax
08352902 +0x5c4:  movzbl 0x23d(%eax),%edx
08352909 +0x5cb:  mov    0x8(%ebp),%eax
0835290c +0x5ce:  mov    %dl,0x102(%eax)
08352912 +0x5d4:  mov    0xc(%ebp),%eax
08352915 +0x5d7:  mov    0x240(%eax),%edx
0835291b +0x5dd:  mov    0x8(%ebp),%eax
0835291e +0x5e0:  mov    %edx,0x104(%eax)
08352924 +0x5e6:  mov    0xc(%ebp),%eax
08352927 +0x5e9:  movzbl 0x258(%eax),%edx
0835292e +0x5f0:  mov    0x8(%ebp),%eax
08352931 +0x5f3:  mov    %dl,0x108(%eax)
08352937 +0x5f9:  mov    0xc(%ebp),%eax
0835293a +0x5fc:  lea    0x25c(%eax),%edx
08352940 +0x602:  mov    0x8(%ebp),%eax
08352943 +0x605:  add    $0x10c,%eax
08352948 +0x60a:  mov    %edx,0x4(%esp)
0835294c +0x60e:  mov    %eax,(%esp)
0835294f +0x611:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08352954 +0x616:  mov    0xc(%ebp),%eax
08352957 +0x619:  lea    0x260(%eax),%edx
0835295d +0x61f:  mov    0x8(%ebp),%eax
08352960 +0x622:  add    $0x110,%eax
08352965 +0x627:  mov    %edx,0x4(%esp)
08352969 +0x62b:  mov    %eax,(%esp)
0835296c +0x62e:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08352971 +0x633:  mov    0xc(%ebp),%eax
08352974 +0x636:  lea    0x264(%eax),%edx
0835297a +0x63c:  mov    0x8(%ebp),%eax
0835297d +0x63f:  add    $0x114,%eax
08352982 +0x644:  mov    %edx,0x4(%esp)
08352986 +0x648:  mov    %eax,(%esp)
08352989 +0x64b:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
0835298e +0x650:  mov    0xc(%ebp),%eax
08352991 +0x653:  movzbl 0x270(%eax),%edx
08352998 +0x65a:  mov    0x8(%ebp),%eax
0835299b +0x65d:  mov    %dl,0x120(%eax)
083529a1 +0x663:  mov    0xc(%ebp),%eax
083529a4 +0x666:  lea    0x200(%eax),%edx
083529aa +0x66c:  mov    0x8(%ebp),%eax
083529ad +0x66f:  add    $0x124,%eax
083529b2 +0x674:  mov    %edx,0x4(%esp)
083529b6 +0x678:  mov    %eax,(%esp)
083529b9 +0x67b:  call   083908fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2039c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2039c
083529be +0x680:  mov    0xc(%ebp),%eax
083529c1 +0x683:  movzbl 0x272(%eax),%edx
083529c8 +0x68a:  mov    0x8(%ebp),%eax
083529cb +0x68d:  mov    %dl,0x131(%eax)
083529d1 +0x693:  mov    0x8(%ebp),%eax
083529d4 +0x696:  movl   $0x0,0x134(%eax)
083529de +0x6a0:  mov    0xc(%ebp),%eax
083529e1 +0x6a3:  mov    0xd8(%eax),%edx
083529e7 +0x6a9:  mov    0x8(%ebp),%eax
083529ea +0x6ac:  mov    %edx,0x134(%eax)
083529f0 +0x6b2:  mov    0xc(%ebp),%eax
083529f3 +0x6b5:  movzwl 0x280(%eax),%edx
083529fa +0x6bc:  mov    0x8(%ebp),%eax
083529fd +0x6bf:  mov    %dx,0x138(%eax)
08352a04 +0x6c6:  mov    0xc(%ebp),%eax
08352a07 +0x6c9:  movzwl 0x282(%eax),%edx
08352a0e +0x6d0:  mov    0x8(%ebp),%eax
08352a11 +0x6d3:  mov    %dx,0x13a(%eax)
08352a18 +0x6da:  mov    0xc(%ebp),%eax
08352a1b +0x6dd:  mov    0x2a8(%eax),%edx
08352a21 +0x6e3:  mov    0x8(%ebp),%eax
08352a24 +0x6e6:  mov    %edx,0x13c(%eax)
08352a2a +0x6ec:  mov    0xc(%ebp),%eax
08352a2d +0x6ef:  mov    0x2ac(%eax),%edx
08352a33 +0x6f5:  mov    0x8(%ebp),%eax
08352a36 +0x6f8:  mov    %edx,0x140(%eax)
08352a3c +0x6fe:  mov    0xc(%ebp),%eax
08352a3f +0x701:  lea    0x2d0(%eax),%edx
08352a45 +0x707:  mov    0x8(%ebp),%eax
08352a48 +0x70a:  add    $0x144,%eax
08352a4d +0x70f:  mov    %edx,0x4(%esp)
08352a51 +0x713:  mov    %eax,(%esp)
08352a54 +0x716:  call   08390b4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x205ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x205ee
08352a59 +0x71b:  leave
08352a5a +0x71c:  ret
08352a5b +0x71d:  nop
```

## 反编译 C

```c
// Quest::set_quest @ 0x835233e

/* Quest::set_quest(QuestScript) */

void __thiscall Quest::set_quest(Quest *this,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_44 [4];
  __normal_iterator local_40 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_3c [4];
  __normal_iterator local_38 [4];
  cMyTrace local_34 [16];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_24 [4];
  __normal_iterator local_20 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  uint local_14;
  int local_10;
  
  std::string::operator=((string *)this,(string *)(param_2 + 1));
  *(undefined4 *)(this + 4) = *param_2;
  *(undefined4 *)(this + 8) = param_2[0x35];
  *(undefined4 *)(this + 0xc) = param_2[0x39];
  std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>::operator=
            ((vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>> *)
             (this + 0x10),(vector *)(param_2 + 0x3d));
  *(undefined4 *)(this + 0x1c) = param_2[0x37];
  *(undefined4 *)(this + 0x28) = param_2[0x49];
  *(undefined4 *)(this + 0x20) = param_2[0x40];
  *(undefined4 *)(this + 0x24) = param_2[0x41];
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::operator=((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
               *)(this + 0x2c),(vector *)(param_2 + 0x43));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x38),(vector *)(param_2 + 0x46));
  this[0x44] = *(Quest *)(param_2 + 0x4c);
  std::vector<DungeonClearItem,std::allocator<DungeonClearItem>>::operator=
            ((vector<DungeonClearItem,std::allocator<DungeonClearItem>> *)(this + 0x48),
             (vector *)(param_2 + 0x4e));
  std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::operator=
            ((vector<MonsterKillItem,std::allocator<MonsterKillItem>> *)(this + 0x54),
             (vector *)(param_2 + 0x51));
  *(undefined4 *)(this + 0x60) = param_2[0x54];
  *(undefined4 *)(this + 100) = param_2[0x55];
  *(undefined4 *)(this + 0x68) = param_2[0x56];
  *(undefined4 *)(this + 0x6c) = param_2[0x57];
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x70),
             (vector *)(param_2 + 0x58));
  *(undefined4 *)(this + 0x7c) = param_2[0x5e];
  *(undefined4 *)(this + 0x80) = param_2[0x5f];
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x84),(vector *)(param_2 + 0x60));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x90),(vector *)(param_2 + 0x6c));
  PostalReward::operator=((PostalReward *)(this + 0x9c),(PostalReward *)(param_2 + 0xa6));
  this[0x101] = *(Quest *)((int)param_2 + 0x22e);
  this[0x130] = *(Quest *)(param_2 + 0x42);
  if (*(int *)(this + 0x7c) == 0) {
    std::vector<int,std::allocator<int>>::begin();
    std::pair<int,int>::pair((pair<int,int> *)&local_4c);
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar1 = __gnu_cxx::operator!=(local_44,local_40);
      if (!bVar1) break;
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         (local_44);
      local_4c = *puVar2;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_3c,(int)local_44);
      std::vector<int,std::allocator<int>>::end();
      bVar1 = __gnu_cxx::operator==(local_44,local_38);
      if (bVar1) {
        cMyTrace::cMyTrace(local_34,"void Quest::set_quest(QuestScript)",0x109d,5);
        cMyTrace::operator()
                  (local_34,"[%s][%d]_(it == intDatas_.end())","void Quest::set_quest(QuestScript)",
                   0x109d);
        break;
      }
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         (local_44);
      local_48 = *puVar2;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_24,(int)local_44);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xac),
                 (pair *)&local_4c);
    }
  }
  else if (*(int *)(this + 0x7c) == 0x19) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xac));
    std::pair<int,int>::pair((pair<int,int> *)&local_54);
    local_14 = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)(this + 0x84));
    local_14 = local_14 >> 1;
    std::vector<int,std::allocator<int>>::begin();
    local_10 = 0;
    do {
      if (local_10 < (int)local_14) {
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=(local_58,local_20);
        if (!bVar1) goto LAB_083527b3;
        bVar1 = true;
      }
      else {
LAB_083527b3:
        bVar1 = false;
      }
      if (!bVar1) break;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_1c,(int)local_58);
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         (local_1c);
      local_54 = *puVar2;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_18,(int)local_58);
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         (local_18);
      local_50 = *puVar2;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xac),
                 (pair *)&local_54);
      local_10 = local_10 + 1;
    } while( true );
  }
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xdc));
  *(undefined4 *)(this + 0xe8) = 0;
  std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::clear
            ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xec));
  *(undefined4 *)(this + 0xb8) = param_2[0x75];
  *(undefined4 *)(this + 0xc0) = param_2[0x79];
  *(undefined4 *)(this + 0xbc) = param_2[0x8a];
  if ((*(int *)(this + 0xb8) == 0) || (*(int *)(this + 0xb8) == 0x19)) {
    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator=
              ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xc4),
               (vector *)(param_2 + 0x76));
    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator=
              ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xd0),
               (vector *)(param_2 + 0x7a));
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)(this + 0xdc),(vector *)(param_2 + 0x83));
    *(undefined4 *)(this + 0xe8) = param_2[0x86];
    makeRewardItemInfo((vector *)(param_2 + 0x87),(vector *)(this + 0xec));
  }
  *(undefined4 *)(this + 0xf8) = param_2[0x4a];
  *(undefined4 *)(this + 0xfc) = param_2[0x4b];
  this[0x100] = *(Quest *)((int)param_2 + 0x22d);
  this[0x102] = *(Quest *)((int)param_2 + 0x23d);
  *(undefined4 *)(this + 0x104) = param_2[0x90];
  this[0x108] = *(Quest *)(param_2 + 0x96);
  std::string::operator=((string *)(this + 0x10c),(string *)(param_2 + 0x97));
  std::string::operator=((string *)(this + 0x110),(string *)(param_2 + 0x98));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x114),(vector *)(param_2 + 0x99));
  this[0x120] = *(Quest *)(param_2 + 0x9c);
  std::vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>::operator=
            ((vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>> *)
             (this + 0x124),(vector *)(param_2 + 0x80));
  this[0x131] = *(Quest *)((int)param_2 + 0x272);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x134) = param_2[0x36];
  *(undefined2 *)(this + 0x138) = *(undefined2 *)(param_2 + 0xa0);
  *(undefined2 *)(this + 0x13a) = *(undefined2 *)((int)param_2 + 0x282);
  *(undefined4 *)(this + 0x13c) = param_2[0xaa];
  *(undefined4 *)(this + 0x140) = param_2[0xab];
  std::vector<ENUM_QUEST_EXCEPTION_TYPE,std::allocator<ENUM_QUEST_EXCEPTION_TYPE>>::operator=
            ((vector<ENUM_QUEST_EXCEPTION_TYPE,std::allocator<ENUM_QUEST_EXCEPTION_TYPE>> *)
             (this + 0x144),(vector *)(param_2 + 0xb4));
  return;
}
```
