# RewardItem2DeleteInvalidItem

`_ZN5CUser28RewardItem2DeleteInvalidItemERKSsRKSt6vectorISt4pairIiiESaIS4_EE`

`CUser::RewardItem2DeleteInvalidItem(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086931c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086931c4  _ZN5CUser28RewardItem2DeleteInvalidItemERKSsRKSt6vectorISt4pairIiiESaIS4_EE
#           CUser::RewardItem2DeleteInvalidItem(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x086931c4, 0x08693757]
086931c4 +0x000:  push   %ebp
086931c5 +0x001:  mov    %esp,%ebp
086931c7 +0x003:  push   %edi
086931c8 +0x004:  push   %esi
086931c9 +0x005:  push   %ebx
086931ca +0x006:  sub    $0x43c,%esp
086931d0 +0x00c:  mov    0x10(%ebp),%eax
086931d3 +0x00f:  mov    %eax,(%esp)
086931d6 +0x012:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
086931db +0x017:  test   %al,%al
086931dd +0x019:  jne    08693749 <+0x585>
086931e3 +0x01f:  mov    0x8(%ebp),%eax
086931e6 +0x022:  mov    %eax,(%esp)
086931e9 +0x025:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086931ee +0x02a:  test   %eax,%eax
086931f0 +0x02c:  sete   %al
086931f3 +0x02f:  test   %al,%al
086931f5 +0x031:  jne    0869374c <+0x588>
086931fb +0x037:  movl   $0x0,-0x34(%ebp)
08693202 +0x03e:  movl   $0x0,-0x30(%ebp)
08693209 +0x045:  movl   $0x0,-0x38(%ebp)
08693210 +0x04c:  movl   $0x0,-0x3c(%ebp)
08693217 +0x053:  lea    -0x48(%ebp),%eax
0869321a +0x056:  mov    %eax,(%esp)
0869321d +0x059:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
08693222 +0x05e:  mov    0x10(%ebp),%eax
08693225 +0x061:  mov    %eax,(%esp)
08693228 +0x064:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0869322d +0x069:  mov    %eax,-0x2c(%ebp)
08693230 +0x06c:  movl   $0x0,-0x20(%ebp)
08693237 +0x073:  jmp    08693393 <+0x1cf>
0869323c +0x078:  mov    -0x20(%ebp),%eax
0869323f +0x07b:  mov    %eax,0x4(%esp)
08693243 +0x07f:  mov    0x10(%ebp),%eax
08693246 +0x082:  mov    %eax,(%esp)
08693249 +0x085:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
0869324e +0x08a:  mov    0x4(%eax),%ebx
08693251 +0x08d:  mov    -0x20(%ebp),%eax
08693254 +0x090:  mov    %eax,0x4(%esp)
08693258 +0x094:  mov    0x10(%ebp),%eax
0869325b +0x097:  mov    %eax,(%esp)
0869325e +0x09a:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
08693263 +0x09f:  mov    (%eax),%eax
08693265 +0x0a1:  mov    0x8(%ebp),%edx
08693268 +0x0a4:  add    $0x79700,%edx
0869326e +0x0aa:  mov    %ebx,0xc(%esp)
08693272 +0x0ae:  mov    %eax,0x8(%esp)
08693276 +0x0b2:  mov    0xc(%ebp),%eax
08693279 +0x0b5:  mov    %eax,0x4(%esp)
0869327d +0x0b9:  mov    %edx,(%esp)
08693280 +0x0bc:  call   08686f1e <_ZN15cUserHistoryLog17DeleteInvaildItemERKSsii>  ; cUserHistoryLog::DeleteInvaildItem(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int, int)
08693285 +0x0c1:  mov    -0x20(%ebp),%eax
08693288 +0x0c4:  mov    %eax,0x4(%esp)
0869328c +0x0c8:  mov    0x10(%ebp),%eax
0869328f +0x0cb:  mov    %eax,(%esp)
08693292 +0x0ce:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
08693297 +0x0d3:  mov    (%eax),%ebx
08693299 +0x0d5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0869329e +0x0da:  mov    %ebx,0x4(%esp)
086932a2 +0x0de:  mov    %eax,(%esp)
086932a5 +0x0e1:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086932aa +0x0e6:  mov    %eax,-0x34(%ebp)
086932ad +0x0e9:  cmpl   $0x0,-0x34(%ebp)
086932b1 +0x0ed:  je     08693385 <+0x1c1>
086932b7 +0x0f3:  mov    -0x20(%ebp),%eax
086932ba +0x0f6:  mov    %eax,0x4(%esp)
086932be +0x0fa:  mov    0x10(%ebp),%eax
086932c1 +0x0fd:  mov    %eax,(%esp)
086932c4 +0x100:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
086932c9 +0x105:  mov    (%eax),%ebx
086932cb +0x107:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086932d0 +0x10c:  lea    0xb658(%eax),%edx
086932d6 +0x112:  lea    -0x3c(%ebp),%eax
086932d9 +0x115:  mov    %eax,0xc(%esp)
086932dd +0x119:  lea    -0x38(%ebp),%eax
086932e0 +0x11c:  mov    %eax,0x8(%esp)
086932e4 +0x120:  mov    %ebx,0x4(%esp)
086932e8 +0x124:  mov    %edx,(%esp)
086932eb +0x127:  call   08ac20f8 <_ZN23DeleteInvalidItemScript17GetRewardItemInfoEiRiS0_>  ; DeleteInvalidItemScript::GetRewardItemInfo(int, int&, int&)
086932f0 +0x12c:  xor    $0x1,%eax
086932f3 +0x12f:  test   %al,%al
086932f5 +0x131:  jne    08693388 <+0x1c4>
086932fb +0x137:  mov    -0x3c(%ebp),%eax
086932fe +0x13a:  test   %eax,%eax
08693300 +0x13c:  jle    0869338b <+0x1c7>
08693306 +0x142:  mov    -0x38(%ebp),%ebx
08693309 +0x145:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0869330e +0x14a:  mov    %ebx,0x4(%esp)
08693312 +0x14e:  mov    %eax,(%esp)
08693315 +0x151:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0869331a +0x156:  mov    %eax,-0x30(%ebp)
0869331d +0x159:  cmpl   $0x0,-0x30(%ebp)
08693321 +0x15d:  je     0869338e <+0x1ca>
08693323 +0x15f:  lea    -0xab(%ebp),%eax
08693329 +0x165:  mov    %eax,(%esp)
0869332c +0x168:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08693331 +0x16d:  mov    -0x38(%ebp),%eax
08693334 +0x170:  mov    %eax,-0xa9(%ebp)
0869333a +0x176:  mov    -0x30(%ebp),%eax
0869333d +0x179:  mov    (%eax),%eax
0869333f +0x17b:  add    $0x8,%eax
08693342 +0x17e:  mov    (%eax),%edx
08693344 +0x180:  lea    -0xab(%ebp),%eax
0869334a +0x186:  mov    %eax,0x4(%esp)
0869334e +0x18a:  mov    -0x30(%ebp),%eax
08693351 +0x18d:  mov    %eax,(%esp)
08693354 +0x190:  call   *%edx
08693356 +0x192:  mov    -0x30(%ebp),%eax
08693359 +0x195:  mov    %eax,(%esp)
0869335c +0x198:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08693361 +0x19d:  test   %al,%al
08693363 +0x19f:  je     0869336e <+0x1aa>
08693365 +0x1a1:  mov    -0x3c(%ebp),%eax
08693368 +0x1a4:  mov    %eax,-0xa4(%ebp)
0869336e +0x1aa:  lea    -0xab(%ebp),%eax
08693374 +0x1b0:  mov    %eax,0x4(%esp)
08693378 +0x1b4:  lea    -0x48(%ebp),%eax
0869337b +0x1b7:  mov    %eax,(%esp)
0869337e +0x1ba:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08693383 +0x1bf:  jmp    0869338f <+0x1cb>
08693385 +0x1c1:  nop
08693386 +0x1c2:  jmp    0869338f <+0x1cb>
08693388 +0x1c4:  nop
08693389 +0x1c5:  jmp    0869338f <+0x1cb>
0869338b +0x1c7:  nop
0869338c +0x1c8:  jmp    0869338f <+0x1cb>
0869338e +0x1ca:  nop
0869338f +0x1cb:  addl   $0x1,-0x20(%ebp)
08693393 +0x1cf:  mov    -0x20(%ebp),%eax
08693396 +0x1d2:  cmp    -0x2c(%ebp),%eax
08693399 +0x1d5:  setb   %al
0869339c +0x1d8:  test   %al,%al
0869339e +0x1da:  jne    0869323c <+0x78>
086933a4 +0x1e0:  lea    -0x48(%ebp),%eax
086933a7 +0x1e3:  mov    %eax,(%esp)
086933aa +0x1e6:  call   0814ad32 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xad1>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xad1
086933af +0x1eb:  test   %al,%al
086933b1 +0x1ed:  jne    0869373c <+0x578>
086933b7 +0x1f3:  lea    -0x4c(%ebp),%eax
086933ba +0x1f6:  mov    %eax,(%esp)
086933bd +0x1f9:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
086933c2 +0x1fe:  lea    -0x50(%ebp),%eax
086933c5 +0x201:  mov    %eax,(%esp)
086933c8 +0x204:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
086933cd +0x209:  lea    -0x6e(%ebp),%eax
086933d0 +0x20c:  mov    $0x1e,%ebx
086933d5 +0x211:  mov    $0x0,%edx
086933da +0x216:  mov    %eax,%ecx
086933dc +0x218:  and    $0x2,%ecx
086933df +0x21b:  test   %ecx,%ecx
086933e1 +0x21d:  je     086933ec <+0x228>
086933e3 +0x21f:  mov    %dx,(%eax)
086933e6 +0x222:  add    $0x2,%eax
086933e9 +0x225:  sub    $0x2,%ebx
086933ec +0x228:  mov    %ebx,%esi
086933ee +0x22a:  and    $0xfffffffc,%esi
086933f1 +0x22d:  mov    $0x0,%ecx
086933f6 +0x232:  mov    %edx,(%eax,%ecx,1)
086933f9 +0x235:  add    $0x4,%ecx
086933fc +0x238:  cmp    %esi,%ecx
086933fe +0x23a:  jb     086933f6 <+0x232>
08693400 +0x23c:  add    %ecx,%eax
08693402 +0x23e:  mov    %ebx,%ecx
08693404 +0x240:  and    $0x2,%ecx
08693407 +0x243:  test   %ecx,%ecx
08693409 +0x245:  je     08693411 <+0x24d>
0869340b +0x247:  mov    %dx,(%eax)
0869340e +0x24a:  add    $0x2,%eax
08693411 +0x24d:  mov    %ebx,%ecx
08693413 +0x24f:  and    $0x1,%ecx
08693416 +0x252:  test   %ecx,%ecx
08693418 +0x254:  je     0869341f <+0x25b>
0869341a +0x256:  mov    %dl,(%eax)
0869341c +0x258:  add    $0x1,%eax
0869341f +0x25b:  lea    -0x1ab(%ebp),%edx
08693425 +0x261:  mov    $0x100,%ebx
0869342a +0x266:  mov    $0x0,%eax
0869342f +0x26b:  mov    %edx,%ecx
08693431 +0x26d:  and    $0x1,%ecx
08693434 +0x270:  test   %ecx,%ecx
08693436 +0x272:  je     08693440 <+0x27c>
08693438 +0x274:  mov    %al,(%edx)
0869343a +0x276:  add    $0x1,%edx
0869343d +0x279:  sub    $0x1,%ebx
08693440 +0x27c:  mov    %edx,%ecx
08693442 +0x27e:  and    $0x2,%ecx
08693445 +0x281:  test   %ecx,%ecx
08693447 +0x283:  je     08693452 <+0x28e>
08693449 +0x285:  mov    %ax,(%edx)
0869344c +0x288:  add    $0x2,%edx
0869344f +0x28b:  sub    $0x2,%ebx
08693452 +0x28e:  mov    %ebx,%ecx
08693454 +0x290:  shr    $0x2,%ecx
08693457 +0x293:  mov    %edx,%edi
08693459 +0x295:  rep stos %eax,%es:(%edi)
0869345b +0x297:  mov    %edi,%edx
0869345d +0x299:  mov    %ebx,%ecx
0869345f +0x29b:  and    $0x2,%ecx
08693462 +0x29e:  test   %ecx,%ecx
08693464 +0x2a0:  je     0869346c <+0x2a8>
08693466 +0x2a2:  mov    %ax,(%edx)
08693469 +0x2a5:  add    $0x2,%edx
0869346c +0x2a8:  mov    %ebx,%ecx
0869346e +0x2aa:  and    $0x1,%ecx
08693471 +0x2ad:  test   %ecx,%ecx
08693473 +0x2af:  je     0869347a <+0x2b6>
08693475 +0x2b1:  mov    %al,(%edx)
08693477 +0x2b3:  add    $0x1,%edx
0869347a +0x2b6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0869347f +0x2bb:  lea    0xb658(%eax),%edx
08693485 +0x2c1:  lea    -0x50(%ebp),%eax
08693488 +0x2c4:  mov    %eax,0x8(%esp)
0869348c +0x2c8:  lea    -0x4c(%ebp),%eax
0869348f +0x2cb:  mov    %eax,0x4(%esp)
08693493 +0x2cf:  mov    %edx,(%esp)
08693496 +0x2d2:  call   08ac2180 <_ZNK23DeleteInvalidItemScript11GetMailInfoERSsS0_>  ; DeleteInvalidItemScript::GetMailInfo(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
0869349b +0x2d7:  lea    -0x4c(%ebp),%eax
0869349e +0x2da:  mov    %eax,(%esp)
086934a1 +0x2dd:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
086934a6 +0x2e2:  test   %al,%al
086934a8 +0x2e4:  je     086934b1 <+0x2ed>
086934aa +0x2e6:  mov    &_ZZN5CUser28RewardItem2DeleteInvalidItemERKSsRKSt6vectorISt4pairIiiESaIS4_EEE13defalt_string,%eax
086934af +0x2eb:  jmp    086934dc <+0x318>
086934b1 +0x2ed:  lea    -0x4c(%ebp),%eax
086934b4 +0x2f0:  mov    %eax,(%esp)
086934b7 +0x2f3:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086934bc +0x2f8:  movl   $0x0,0xc(%esp)
086934c4 +0x300:  mov    %eax,0x8(%esp)
086934c8 +0x304:  movl   $0x4,0x4(%esp)
086934d0 +0x30c:  movl   $&g_scriptStringManager_,(%esp)
086934d7 +0x313:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086934dc +0x318:  movl   $0x1d,0x8(%esp)
086934e4 +0x320:  mov    %eax,0x4(%esp)
086934e8 +0x324:  lea    -0x6e(%ebp),%eax
086934eb +0x327:  mov    %eax,(%esp)
086934ee +0x32a:  call   0807d8d0 <_init+0x1c8>
086934f3 +0x32f:  lea    -0x50(%ebp),%eax
086934f6 +0x332:  mov    %eax,(%esp)
086934f9 +0x335:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
086934fe +0x33a:  test   %al,%al
08693500 +0x33c:  je     08693509 <+0x345>
08693502 +0x33e:  mov    &_ZZN5CUser28RewardItem2DeleteInvalidItemERKSsRKSt6vectorISt4pairIiiESaIS4_EEE13defalt_string,%eax
08693507 +0x343:  jmp    08693534 <+0x370>
08693509 +0x345:  lea    -0x50(%ebp),%eax
0869350c +0x348:  mov    %eax,(%esp)
0869350f +0x34b:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08693514 +0x350:  movl   $0x0,0xc(%esp)
0869351c +0x358:  mov    %eax,0x8(%esp)
08693520 +0x35c:  movl   $0x4,0x4(%esp)
08693528 +0x364:  movl   $&g_scriptStringManager_,(%esp)
0869352f +0x36b:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08693534 +0x370:  movl   $0xff,0x8(%esp)
0869353c +0x378:  mov    %eax,0x4(%esp)
08693540 +0x37c:  lea    -0x1ab(%ebp),%eax
08693546 +0x382:  mov    %eax,(%esp)
08693549 +0x385:  call   0807d8d0 <_init+0x1c8>
0869354e +0x38a:  movl   $0x0,-0x28(%ebp)
08693555 +0x391:  lea    -0x40d(%ebp),%eax
0869355b +0x397:  mov    %eax,%ebx
0869355d +0x399:  mov    $0x9,%esi
08693562 +0x39e:  jmp    08693572 <+0x3ae>
08693564 +0x3a0:  mov    %ebx,(%esp)
08693567 +0x3a3:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0869356c +0x3a8:  add    $0x3d,%ebx
0869356f +0x3ab:  sub    $0x1,%esi
08693572 +0x3ae:  cmp    $0xffffffff,%esi
08693575 +0x3b1:  setne  %al
08693578 +0x3b4:  test   %al,%al
0869357a +0x3b6:  jne    08693564 <+0x3a0>
0869357c +0x3b8:  lea    -0x48(%ebp),%eax
0869357f +0x3bb:  mov    %eax,(%esp)
08693582 +0x3be:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
08693587 +0x3c3:  mov    %eax,-0x24(%ebp)
0869358a +0x3c6:  movl   $0x0,-0x1c(%ebp)
08693591 +0x3cd:  jmp    0869364e <+0x48a>
08693596 +0x3d2:  mov    -0x1c(%ebp),%eax
08693599 +0x3d5:  mov    %eax,0x4(%esp)
0869359d +0x3d9:  lea    -0x48(%ebp),%eax
086935a0 +0x3dc:  mov    %eax,(%esp)
086935a3 +0x3df:  call   08328422 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x37b>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x37b
086935a8 +0x3e4:  mov    -0x28(%ebp),%edx
086935ab +0x3e7:  lea    -0x40d(%ebp),%ecx
086935b1 +0x3ed:  imul   $0x3d,%edx,%edx
086935b4 +0x3f0:  lea    (%ecx,%edx,1),%edx
086935b7 +0x3f3:  mov    %eax,0x4(%esp)
086935bb +0x3f7:  mov    %edx,(%esp)
086935be +0x3fa:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
086935c3 +0x3ff:  addl   $0x1,-0x28(%ebp)
086935c7 +0x403:  cmpl   $0xa,-0x28(%ebp)
086935cb +0x407:  jne    08693649 <+0x485>
086935cd +0x409:  movl   $0x0,-0x28(%ebp)
086935d4 +0x410:  mov    0x8(%ebp),%eax
086935d7 +0x413:  mov    %eax,(%esp)
086935da +0x416:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086935df +0x41b:  mov    %eax,%ebx
086935e1 +0x41d:  lea    -0x1ab(%ebp),%eax
086935e7 +0x423:  mov    %eax,(%esp)
086935ea +0x426:  call   0807e3b0 <_init+0xca8>
086935ef +0x42b:  mov    %eax,%esi
086935f1 +0x42d:  mov    0x8(%ebp),%eax
086935f4 +0x430:  mov    %eax,(%esp)
086935f7 +0x433:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086935fc +0x438:  movl   $0x0,0x24(%esp)
08693604 +0x440:  mov    %ebx,0x20(%esp)
08693608 +0x444:  movl   $0x0,0x1c(%esp)
08693610 +0x44c:  mov    %esi,0x18(%esp)
08693614 +0x450:  lea    -0x1ab(%ebp),%edx
0869361a +0x456:  mov    %edx,0x14(%esp)
0869361e +0x45a:  mov    %eax,0x10(%esp)
08693622 +0x45e:  movl   $0x0,0xc(%esp)
0869362a +0x466:  movl   $0xa,0x8(%esp)
08693632 +0x46e:  lea    -0x40d(%ebp),%eax
08693638 +0x474:  mov    %eax,0x4(%esp)
0869363c +0x478:  lea    -0x6e(%ebp),%eax
0869363f +0x47b:  mov    %eax,(%esp)
08693642 +0x47e:  call   08556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail(char const*, Inven_Item const*, unsigned int, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool)
08693647 +0x483:  jmp    0869364a <+0x486>
08693649 +0x485:  nop
0869364a +0x486:  addl   $0x1,-0x1c(%ebp)
0869364e +0x48a:  mov    -0x1c(%ebp),%eax
08693651 +0x48d:  cmp    -0x24(%ebp),%eax
08693654 +0x490:  setb   %al
08693657 +0x493:  test   %al,%al
08693659 +0x495:  jne    08693596 <+0x3d2>
0869365f +0x49b:  cmpl   $0x0,-0x28(%ebp)
08693663 +0x49f:  je     086936f2 <+0x52e>
08693669 +0x4a5:  mov    0x8(%ebp),%eax
0869366c +0x4a8:  mov    %eax,(%esp)
0869366f +0x4ab:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08693674 +0x4b0:  mov    %eax,%ebx
08693676 +0x4b2:  lea    -0x1ab(%ebp),%eax
0869367c +0x4b8:  mov    %eax,(%esp)
0869367f +0x4bb:  call   0807e3b0 <_init+0xca8>
08693684 +0x4c0:  mov    %eax,%esi
08693686 +0x4c2:  mov    0x8(%ebp),%eax
08693689 +0x4c5:  mov    %eax,(%esp)
0869368c +0x4c8:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08693691 +0x4cd:  movl   $0x0,0x24(%esp)
08693699 +0x4d5:  mov    %ebx,0x20(%esp)
0869369d +0x4d9:  movl   $0x0,0x1c(%esp)
086936a5 +0x4e1:  mov    %esi,0x18(%esp)
086936a9 +0x4e5:  lea    -0x1ab(%ebp),%edx
086936af +0x4eb:  mov    %edx,0x14(%esp)
086936b3 +0x4ef:  mov    %eax,0x10(%esp)
086936b7 +0x4f3:  movl   $0x0,0xc(%esp)
086936bf +0x4fb:  mov    -0x28(%ebp),%eax
086936c2 +0x4fe:  mov    %eax,0x8(%esp)
086936c6 +0x502:  lea    -0x40d(%ebp),%eax
086936cc +0x508:  mov    %eax,0x4(%esp)
086936d0 +0x50c:  lea    -0x6e(%ebp),%eax
086936d3 +0x50f:  mov    %eax,(%esp)
086936d6 +0x512:  call   08556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail(char const*, Inven_Item const*, unsigned int, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool)
086936db +0x517:  jmp    086936f2 <+0x52e>
086936dd +0x519:  mov    %edx,%ebx
086936df +0x51b:  mov    %eax,%esi
086936e1 +0x51d:  lea    -0x50(%ebp),%eax
086936e4 +0x520:  mov    %eax,(%esp)
086936e7 +0x523:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086936ec +0x528:  mov    %esi,%eax
086936ee +0x52a:  mov    %ebx,%edx
086936f0 +0x52c:  jmp    086936ff <+0x53b>
086936f2 +0x52e:  lea    -0x50(%ebp),%eax
086936f5 +0x531:  mov    %eax,(%esp)
086936f8 +0x534:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086936fd +0x539:  jmp    08693714 <+0x550>
086936ff +0x53b:  mov    %edx,%ebx
08693701 +0x53d:  mov    %eax,%esi
08693703 +0x53f:  lea    -0x4c(%ebp),%eax
08693706 +0x542:  mov    %eax,(%esp)
08693709 +0x545:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0869370e +0x54a:  mov    %esi,%eax
08693710 +0x54c:  mov    %ebx,%edx
08693712 +0x54e:  jmp    08693721 <+0x55d>
08693714 +0x550:  lea    -0x4c(%ebp),%eax
08693717 +0x553:  mov    %eax,(%esp)
0869371a +0x556:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0869371f +0x55b:  jmp    0869373c <+0x578>
08693721 +0x55d:  mov    %edx,%ebx
08693723 +0x55f:  mov    %eax,%esi
08693725 +0x561:  lea    -0x48(%ebp),%eax
08693728 +0x564:  mov    %eax,(%esp)
0869372b +0x567:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08693730 +0x56c:  mov    %esi,%eax
08693732 +0x56e:  mov    %ebx,%edx
08693734 +0x570:  mov    %eax,(%esp)
08693737 +0x573:  call   08ae3750 <_Unwind_Resume>
0869373c +0x578:  lea    -0x48(%ebp),%eax
0869373f +0x57b:  mov    %eax,(%esp)
08693742 +0x57e:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08693747 +0x583:  jmp    0869374d <+0x589>
08693749 +0x585:  nop
0869374a +0x586:  jmp    0869374d <+0x589>
0869374c +0x588:  nop
0869374d +0x589:  add    $0x43c,%esp
08693753 +0x58f:  pop    %ebx
08693754 +0x590:  pop    %esi
08693755 +0x591:  pop    %edi
08693756 +0x592:  pop    %ebp
08693757 +0x593:  ret
```

## 反编译 C

```c
// CUser::RewardItem2DeleteInvalidItem @ 0x86931c4

/* WARNING: Removing unreachable block (ram,0x0869341a) */
/* CUser::RewardItem2DeleteInvalidItem(std::string const&, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&) */

void __thiscall CUser::RewardItem2DeleteInvalidItem(CUser *this,string *param_1,vector *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  CDataManager *pCVar5;
  int iVar6;
  TCHAR *pTVar7;
  Inven_Item *pIVar8;
  undefined4 uVar9;
  size_t sVar10;
  undefined4 uVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  bool bVar15;
  byte bVar16;
  Inven_Item local_411 [610];
  char local_1af;
  char local_1ae [255];
  Inven_Item local_af [2];
  int local_ad;
  int local_a8;
  char local_72 [30];
  string local_54;
  string local_50;
  vector<Inven_Item,std::allocator<Inven_Item>> local_4c [12];
  int local_40;
  int local_3c;
  int local_38;
  CItem *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  bVar16 = 0;
  cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
  if ((cVar2 == '\0') &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this), iVar3 != 0)) {
    local_38 = 0;
    local_34 = (CItem *)0x0;
    local_3c = 0;
    local_40 = 0;
    std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_4c);
    local_30 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                         ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2);
    for (local_24 = 0; local_24 < local_30; local_24 = local_24 + 1) {
      iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                         local_24);
      iVar3 = *(int *)(iVar3 + 4);
      piVar4 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 param_2,local_24);
                    /* try { // try from 08693280 to 086933c1 has its CatchHandler @ 08693721 */
      cUserHistoryLog::DeleteInvaildItem((cUserHistoryLog *)(this + 0x79700),param_1,*piVar4,iVar3);
      piVar4 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 param_2,local_24);
      iVar3 = *piVar4;
      pCVar5 = (CDataManager *)G_CDataManager();
      local_38 = CDataManager::find_item(pCVar5,iVar3);
      if (local_38 != 0) {
        piVar4 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   param_2,local_24);
        iVar3 = *piVar4;
        iVar6 = G_CDataManager();
        cVar2 = DeleteInvalidItemScript::GetRewardItemInfo
                          ((DeleteInvalidItemScript *)(iVar6 + 0xb658),iVar3,&local_3c,&local_40);
        iVar3 = local_3c;
        if ((cVar2 == '\x01') && (0 < local_40)) {
          pCVar5 = (CDataManager *)G_CDataManager();
          local_34 = (CItem *)CDataManager::find_item(pCVar5,iVar3);
          if (local_34 != (CItem *)0x0) {
            Inven_Item::Inven_Item(local_af);
            local_ad = local_3c;
            (**(code **)(*(int *)local_34 + 8))(local_34,local_af);
            cVar2 = CItem::is_stackable(local_34);
            if (cVar2 != '\0') {
              local_a8 = local_40;
            }
            std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back(local_4c,local_af);
          }
        }
      }
    }
    cVar2 = std::vector<Inven_Item,std::allocator<Inven_Item>>::empty();
    if (cVar2 == '\0') {
      std::string::string((string *)&local_50);
                    /* try { // try from 086933c8 to 086933cc has its CatchHandler @ 086936ff */
      std::string::string((string *)&local_54);
      pcVar13 = local_72;
      uVar14 = 0x1e;
      bVar15 = ((uint)pcVar13 & 2) != 0;
      if (bVar15) {
        local_72[0] = '\0';
        local_72[1] = '\0';
        pcVar13 = local_72 + 2;
        uVar14 = 0x1c;
      }
      uVar12 = 0;
      do {
        pcVar1 = pcVar13 + uVar12;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        uVar12 = uVar12 + 4;
      } while (uVar12 < (uVar14 & 0xfffffffc));
      if (!bVar15) {
        (pcVar13 + uVar12)[0] = '\0';
        (pcVar13 + uVar12)[1] = '\0';
      }
      pcVar13 = &local_1af;
      uVar14 = 0x100;
      bVar15 = ((uint)pcVar13 & 1) != 0;
      if (bVar15) {
        local_1af = '\0';
        pcVar13 = local_1ae;
        uVar14 = 0xff;
      }
      if (((uint)pcVar13 & 2) != 0) {
        pcVar13[0] = '\0';
        pcVar13[1] = '\0';
        pcVar13 = pcVar13 + 2;
        uVar14 = uVar14 - 2;
      }
      for (uVar12 = uVar14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        pcVar13[0] = '\0';
        pcVar13[1] = '\0';
        pcVar13[2] = '\0';
        pcVar13[3] = '\0';
        pcVar13 = pcVar13 + ((uint)bVar16 * -2 + 1) * 4;
      }
      if ((uVar14 & 2) != 0) {
        pcVar13[0] = '\0';
        pcVar13[1] = '\0';
        pcVar13 = pcVar13 + 2;
      }
      if (bVar15) {
        *pcVar13 = '\0';
      }
                    /* try { // try from 0869347a to 086936da has its CatchHandler @ 086936dd */
      iVar3 = G_CDataManager();
      DeleteInvalidItemScript::GetMailInfo
                ((DeleteInvalidItemScript *)(iVar3 + 0xb658),(string *)&local_50,(string *)&local_54
                );
      cVar2 = std::string::empty((string *)&local_50);
      pcVar13 = RewardItem2DeleteInvalidItem(std::string_const&,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>const&)
                ::defalt_string;
      if (cVar2 == '\0') {
        pTVar7 = toTString(&local_50);
        pcVar13 = (char *)RDARScriptStringManager::findString
                                    ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar7,
                                     (bool *)0x0);
      }
      strncpy(local_72,pcVar13,0x1d);
      cVar2 = std::string::empty((string *)&local_54);
      pcVar13 = RewardItem2DeleteInvalidItem(std::string_const&,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>const&)
                ::defalt_string;
      if (cVar2 == '\0') {
        pTVar7 = toTString(&local_54);
        pcVar13 = (char *)RDARScriptStringManager::findString
                                    ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar7,
                                     (bool *)0x0);
      }
      strncpy(&local_1af,pcVar13,0xff);
      local_2c = 0;
      pIVar8 = local_411;
      for (iVar3 = 9; iVar3 != -1; iVar3 = iVar3 + -1) {
        Inven_Item::Inven_Item(pIVar8);
        pIVar8 = pIVar8 + 0x3d;
      }
      local_28 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size(local_4c);
      for (local_20 = 0; local_20 < local_28; local_20 = local_20 + 1) {
        pIVar8 = (Inven_Item *)
                 std::vector<Inven_Item,std::allocator<Inven_Item>>::operator[](local_4c,local_20);
        Inven_Item::setCopy(local_411 + local_2c * 0x3d,pIVar8);
        local_2c = local_2c + 1;
        if (local_2c == 10) {
          local_2c = 0;
          uVar9 = GetServerGroup(this);
          sVar10 = strlen(&local_1af);
          uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail
                    (local_72,local_411,10,0,uVar11,&local_1af,sVar10,0,uVar9,0);
        }
      }
      if (local_2c != 0) {
        uVar9 = GetServerGroup(this);
        sVar10 = strlen(&local_1af);
        uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail
                  (local_72,local_411,local_2c,0,uVar11,&local_1af,sVar10,0,uVar9,0);
      }
                    /* try { // try from 086936f8 to 086936fc has its CatchHandler @ 086936ff */
      std::string::~string((string *)&local_54);
                    /* try { // try from 0869371a to 0869371e has its CatchHandler @ 08693721 */
      std::string::~string((string *)&local_50);
    }
    std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_4c);
  }
  return;
}
```
