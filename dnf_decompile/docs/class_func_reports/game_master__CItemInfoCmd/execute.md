# execute

`_ZN11game_master12CItemInfoCmd7executeEv`

`game_master::CItemInfoCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CItemInfoCmd` | `0x084aa2d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aa2d2  _ZN11game_master12CItemInfoCmd7executeEv
#           game_master::CItemInfoCmd::execute()
# range [0x084aa2d2, 0x084aa739]
084aa2d2 +0x000:  push   %ebp
084aa2d3 +0x001:  mov    %esp,%ebp
084aa2d5 +0x003:  push   %edi
084aa2d6 +0x004:  push   %esi
084aa2d7 +0x005:  push   %ebx
084aa2d8 +0x006:  sub    $0x16c,%esp
084aa2de +0x00c:  mov    0x8(%ebp),%eax
084aa2e1 +0x00f:  add    $0x8,%eax
084aa2e4 +0x012:  mov    %eax,(%esp)
084aa2e7 +0x015:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aa2ec +0x01a:  mov    %eax,%ebx
084aa2ee +0x01c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084aa2f3 +0x021:  mov    %ebx,0x4(%esp)
084aa2f7 +0x025:  mov    %eax,(%esp)
084aa2fa +0x028:  call   0835fa68 <_ZNK12CDataManager9find_itemEPKc>  ; CDataManager::find_item(char const*) const
084aa2ff +0x02d:  mov    %eax,-0x2c(%ebp)
084aa302 +0x030:  cmpl   $0x0,-0x2c(%ebp)
084aa306 +0x034:  jne    084aa48c <+0x1ba>
084aa30c +0x03a:  lea    -0x157(%ebp),%edx
084aa312 +0x040:  mov    $0xff,%ebx
084aa317 +0x045:  mov    $0x0,%eax
084aa31c +0x04a:  mov    %edx,%ecx
084aa31e +0x04c:  and    $0x1,%ecx
084aa321 +0x04f:  test   %ecx,%ecx
084aa323 +0x051:  je     084aa32d <+0x5b>
084aa325 +0x053:  mov    %al,(%edx)
084aa327 +0x055:  add    $0x1,%edx
084aa32a +0x058:  sub    $0x1,%ebx
084aa32d +0x05b:  mov    %edx,%ecx
084aa32f +0x05d:  and    $0x2,%ecx
084aa332 +0x060:  test   %ecx,%ecx
084aa334 +0x062:  je     084aa33f <+0x6d>
084aa336 +0x064:  mov    %ax,(%edx)
084aa339 +0x067:  add    $0x2,%edx
084aa33c +0x06a:  sub    $0x2,%ebx
084aa33f +0x06d:  mov    %ebx,%ecx
084aa341 +0x06f:  shr    $0x2,%ecx
084aa344 +0x072:  mov    %edx,%edi
084aa346 +0x074:  rep stos %eax,%es:(%edi)
084aa348 +0x076:  mov    %edi,%edx
084aa34a +0x078:  mov    %ebx,%ecx
084aa34c +0x07a:  and    $0x2,%ecx
084aa34f +0x07d:  test   %ecx,%ecx
084aa351 +0x07f:  je     084aa359 <+0x87>
084aa353 +0x081:  mov    %ax,(%edx)
084aa356 +0x084:  add    $0x2,%edx
084aa359 +0x087:  mov    %ebx,%ecx
084aa35b +0x089:  and    $0x1,%ecx
084aa35e +0x08c:  test   %ecx,%ecx
084aa360 +0x08e:  je     084aa367 <+0x95>
084aa362 +0x090:  mov    %al,(%edx)
084aa364 +0x092:  add    $0x1,%edx
084aa367 +0x095:  mov    0x8(%ebp),%eax
084aa36a +0x098:  add    $0x8,%eax
084aa36d +0x09b:  mov    %eax,(%esp)
084aa370 +0x09e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aa375 +0x0a3:  mov    %eax,0x8(%esp)
084aa379 +0x0a7:  movl   $"cannot find item (%s) ",0x4(%esp)
084aa381 +0x0af:  lea    -0x157(%ebp),%eax
084aa387 +0x0b5:  mov    %eax,(%esp)
084aa38a +0x0b8:  call   0807e440 <_init+0xd38>
084aa38f +0x0bd:  lea    -0x4c(%ebp),%eax
084aa392 +0x0c0:  mov    %eax,(%esp)
084aa395 +0x0c3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084aa39a +0x0c8:  movl   $0xc,0x8(%esp)
084aa3a2 +0x0d0:  movl   $0x0,0x4(%esp)
084aa3aa +0x0d8:  lea    -0x4c(%ebp),%eax
084aa3ad +0x0db:  mov    %eax,(%esp)
084aa3b0 +0x0de:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084aa3b5 +0x0e3:  movl   $0x0,0x4(%esp)
084aa3bd +0x0eb:  lea    -0x4c(%ebp),%eax
084aa3c0 +0x0ee:  mov    %eax,(%esp)
084aa3c3 +0x0f1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084aa3c8 +0x0f6:  movl   $0x0,0x4(%esp)
084aa3d0 +0x0fe:  lea    -0x4c(%ebp),%eax
084aa3d3 +0x101:  mov    %eax,(%esp)
084aa3d6 +0x104:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084aa3db +0x109:  movl   $0x0,0x4(%esp)
084aa3e3 +0x111:  lea    -0x4c(%ebp),%eax
084aa3e6 +0x114:  mov    %eax,(%esp)
084aa3e9 +0x117:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084aa3ee +0x11c:  lea    -0x157(%ebp),%eax
084aa3f4 +0x122:  mov    %eax,(%esp)
084aa3f7 +0x125:  call   0807e3b0 <_init+0xca8>
084aa3fc +0x12a:  mov    %eax,0x4(%esp)
084aa400 +0x12e:  lea    -0x4c(%ebp),%eax
084aa403 +0x131:  mov    %eax,(%esp)
084aa406 +0x134:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084aa40b +0x139:  lea    -0x157(%ebp),%eax
084aa411 +0x13f:  mov    %eax,(%esp)
084aa414 +0x142:  call   0807e3b0 <_init+0xca8>
084aa419 +0x147:  mov    %eax,0x8(%esp)
084aa41d +0x14b:  lea    -0x157(%ebp),%eax
084aa423 +0x151:  mov    %eax,0x4(%esp)
084aa427 +0x155:  lea    -0x4c(%ebp),%eax
084aa42a +0x158:  mov    %eax,(%esp)
084aa42d +0x15b:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084aa432 +0x160:  movl   $0x1,0x4(%esp)
084aa43a +0x168:  lea    -0x4c(%ebp),%eax
084aa43d +0x16b:  mov    %eax,(%esp)
084aa440 +0x16e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084aa445 +0x173:  mov    0x8(%ebp),%eax
084aa448 +0x176:  mov    %eax,(%esp)
084aa44b +0x179:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aa450 +0x17e:  lea    -0x4c(%ebp),%edx
084aa453 +0x181:  mov    %edx,0x4(%esp)
084aa457 +0x185:  mov    %eax,(%esp)
084aa45a +0x188:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084aa45f +0x18d:  jmp    084aa47c <+0x1aa>
084aa461 +0x18f:  mov    %edx,%ebx
084aa463 +0x191:  mov    %eax,%esi
084aa465 +0x193:  lea    -0x4c(%ebp),%eax
084aa468 +0x196:  mov    %eax,(%esp)
084aa46b +0x199:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084aa470 +0x19e:  mov    %esi,%eax
084aa472 +0x1a0:  mov    %ebx,%edx
084aa474 +0x1a2:  mov    %eax,(%esp)
084aa477 +0x1a5:  call   08ae3750 <_Unwind_Resume>
084aa47c +0x1aa:  lea    -0x4c(%ebp),%eax
084aa47f +0x1ad:  mov    %eax,(%esp)
084aa482 +0x1b0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084aa487 +0x1b5:  jmp    084aa72f <+0x45d>
084aa48c +0x1ba:  lea    -0x157(%ebp),%edx
084aa492 +0x1c0:  mov    $0xff,%ebx
084aa497 +0x1c5:  mov    $0x0,%eax
084aa49c +0x1ca:  mov    %edx,%ecx
084aa49e +0x1cc:  and    $0x1,%ecx
084aa4a1 +0x1cf:  test   %ecx,%ecx
084aa4a3 +0x1d1:  je     084aa4ad <+0x1db>
084aa4a5 +0x1d3:  mov    %al,(%edx)
084aa4a7 +0x1d5:  add    $0x1,%edx
084aa4aa +0x1d8:  sub    $0x1,%ebx
084aa4ad +0x1db:  mov    %edx,%ecx
084aa4af +0x1dd:  and    $0x2,%ecx
084aa4b2 +0x1e0:  test   %ecx,%ecx
084aa4b4 +0x1e2:  je     084aa4bf <+0x1ed>
084aa4b6 +0x1e4:  mov    %ax,(%edx)
084aa4b9 +0x1e7:  add    $0x2,%edx
084aa4bc +0x1ea:  sub    $0x2,%ebx
084aa4bf +0x1ed:  mov    %ebx,%ecx
084aa4c1 +0x1ef:  shr    $0x2,%ecx
084aa4c4 +0x1f2:  mov    %edx,%edi
084aa4c6 +0x1f4:  rep stos %eax,%es:(%edi)
084aa4c8 +0x1f6:  mov    %edi,%edx
084aa4ca +0x1f8:  mov    %ebx,%ecx
084aa4cc +0x1fa:  and    $0x2,%ecx
084aa4cf +0x1fd:  test   %ecx,%ecx
084aa4d1 +0x1ff:  je     084aa4d9 <+0x207>
084aa4d3 +0x201:  mov    %ax,(%edx)
084aa4d6 +0x204:  add    $0x2,%edx
084aa4d9 +0x207:  mov    %ebx,%ecx
084aa4db +0x209:  and    $0x1,%ecx
084aa4de +0x20c:  test   %ecx,%ecx
084aa4e0 +0x20e:  je     084aa4e7 <+0x215>
084aa4e2 +0x210:  mov    %al,(%edx)
084aa4e4 +0x212:  add    $0x1,%edx
084aa4e7 +0x215:  mov    -0x2c(%ebp),%eax
084aa4ea +0x218:  mov    %eax,(%esp)
084aa4ed +0x21b:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
084aa4f2 +0x220:  mov    %eax,0x8(%esp)
084aa4f6 +0x224:  movl   $"item_index(%d) ",0x4(%esp)
084aa4fe +0x22c:  lea    -0x157(%ebp),%eax
084aa504 +0x232:  mov    %eax,(%esp)
084aa507 +0x235:  call   0807e440 <_init+0xd38>
084aa50c +0x23a:  lea    -0x58(%ebp),%eax
084aa50f +0x23d:  mov    %eax,(%esp)
084aa512 +0x240:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084aa517 +0x245:  movl   $0xc,0x8(%esp)
084aa51f +0x24d:  movl   $0x0,0x4(%esp)
084aa527 +0x255:  lea    -0x58(%ebp),%eax
084aa52a +0x258:  mov    %eax,(%esp)
084aa52d +0x25b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084aa532 +0x260:  movl   $0x0,0x4(%esp)
084aa53a +0x268:  lea    -0x58(%ebp),%eax
084aa53d +0x26b:  mov    %eax,(%esp)
084aa540 +0x26e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084aa545 +0x273:  movl   $0x0,0x4(%esp)
084aa54d +0x27b:  lea    -0x58(%ebp),%eax
084aa550 +0x27e:  mov    %eax,(%esp)
084aa553 +0x281:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084aa558 +0x286:  movl   $0x0,0x4(%esp)
084aa560 +0x28e:  lea    -0x58(%ebp),%eax
084aa563 +0x291:  mov    %eax,(%esp)
084aa566 +0x294:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084aa56b +0x299:  lea    -0x157(%ebp),%eax
084aa571 +0x29f:  mov    %eax,(%esp)
084aa574 +0x2a2:  call   0807e3b0 <_init+0xca8>
084aa579 +0x2a7:  mov    %eax,0x4(%esp)
084aa57d +0x2ab:  lea    -0x58(%ebp),%eax
084aa580 +0x2ae:  mov    %eax,(%esp)
084aa583 +0x2b1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084aa588 +0x2b6:  lea    -0x157(%ebp),%eax
084aa58e +0x2bc:  mov    %eax,(%esp)
084aa591 +0x2bf:  call   0807e3b0 <_init+0xca8>
084aa596 +0x2c4:  mov    %eax,0x8(%esp)
084aa59a +0x2c8:  lea    -0x157(%ebp),%eax
084aa5a0 +0x2ce:  mov    %eax,0x4(%esp)
084aa5a4 +0x2d2:  lea    -0x58(%ebp),%eax
084aa5a7 +0x2d5:  mov    %eax,(%esp)
084aa5aa +0x2d8:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084aa5af +0x2dd:  movl   $0x1,0x4(%esp)
084aa5b7 +0x2e5:  lea    -0x58(%ebp),%eax
084aa5ba +0x2e8:  mov    %eax,(%esp)
084aa5bd +0x2eb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084aa5c2 +0x2f0:  mov    0x8(%ebp),%eax
084aa5c5 +0x2f3:  mov    %eax,(%esp)
084aa5c8 +0x2f6:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aa5cd +0x2fb:  lea    -0x58(%ebp),%edx
084aa5d0 +0x2fe:  mov    %edx,0x4(%esp)
084aa5d4 +0x302:  mov    %eax,(%esp)
084aa5d7 +0x305:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084aa5dc +0x30a:  jmp    084aa5f9 <+0x327>
084aa5de +0x30c:  mov    %edx,%ebx
084aa5e0 +0x30e:  mov    %eax,%esi
084aa5e2 +0x310:  lea    -0x58(%ebp),%eax
084aa5e5 +0x313:  mov    %eax,(%esp)
084aa5e8 +0x316:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084aa5ed +0x31b:  mov    %esi,%eax
084aa5ef +0x31d:  mov    %ebx,%edx
084aa5f1 +0x31f:  mov    %eax,(%esp)
084aa5f4 +0x322:  call   08ae3750 <_Unwind_Resume>
084aa5f9 +0x327:  lea    -0x58(%ebp),%eax
084aa5fc +0x32a:  mov    %eax,(%esp)
084aa5ff +0x32d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084aa604 +0x332:  mov    -0x2c(%ebp),%eax
084aa607 +0x335:  mov    %eax,(%esp)
084aa60a +0x338:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
084aa60f +0x33d:  mov    %eax,-0x28(%ebp)
084aa612 +0x340:  mov    0x8(%ebp),%eax
084aa615 +0x343:  mov    %eax,(%esp)
084aa618 +0x346:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aa61d +0x34b:  mov    %eax,-0x24(%ebp)
084aa620 +0x34e:  movl   $0x64,-0x20(%ebp)
084aa627 +0x355:  cmpl   $0x0,-0x2c(%ebp)
084aa62b +0x359:  je     084aa65f <+0x38d>
084aa62d +0x35b:  mov    -0x2c(%ebp),%eax
084aa630 +0x35e:  mov    %eax,(%esp)
084aa633 +0x361:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084aa638 +0x366:  test   %al,%al
084aa63a +0x368:  je     084aa65f <+0x38d>
084aa63c +0x36a:  mov    -0x2c(%ebp),%eax
084aa63f +0x36d:  mov    %eax,(%esp)
084aa642 +0x370:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
084aa647 +0x375:  cmp    -0x20(%ebp),%eax
084aa64a +0x378:  setl   %al
084aa64d +0x37b:  test   %al,%al
084aa64f +0x37d:  je     084aa65f <+0x38d>
084aa651 +0x37f:  mov    -0x2c(%ebp),%eax
084aa654 +0x382:  mov    %eax,(%esp)
084aa657 +0x385:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
084aa65c +0x38a:  mov    %eax,-0x20(%ebp)
084aa65f +0x38d:  mov    -0x28(%ebp),%eax
084aa662 +0x390:  movl   $0x0,0x14(%esp)
084aa66a +0x398:  lea    -0x40(%ebp),%edx
084aa66d +0x39b:  mov    %edx,0x10(%esp)
084aa671 +0x39f:  movl   $0x6,0xc(%esp)
084aa679 +0x3a7:  mov    -0x20(%ebp),%edx
084aa67c +0x3aa:  mov    %edx,0x8(%esp)
084aa680 +0x3ae:  mov    %eax,0x4(%esp)
084aa684 +0x3b2:  mov    -0x24(%ebp),%eax
084aa687 +0x3b5:  mov    %eax,(%esp)
084aa68a +0x3b8:  call   0867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>  ; CUser::AddItem(int, int, eItemAddReason, ENUM_ITEMSPACE&, int)
084aa68f +0x3bd:  mov    %eax,-0x1c(%ebp)
084aa692 +0x3c0:  cmpl   $0x0,-0x1c(%ebp)
084aa696 +0x3c4:  js     084aa72e <+0x45c>
084aa69c +0x3ca:  mov    -0x24(%ebp),%eax
084aa69f +0x3cd:  mov    %eax,(%esp)
084aa6a2 +0x3d0:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084aa6a7 +0x3d5:  mov    %eax,%esi
084aa6a9 +0x3d7:  mov    -0x24(%ebp),%eax
084aa6ac +0x3da:  mov    %eax,(%esp)
084aa6af +0x3dd:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084aa6b4 +0x3e2:  movl   $0x0,0x4(%esp)
084aa6bc +0x3ea:  mov    %eax,(%esp)
084aa6bf +0x3ed:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084aa6c4 +0x3f2:  mov    %eax,%ebx
084aa6c6 +0x3f4:  movl   $0x0,0xc(%esp)
084aa6ce +0x3fc:  movl   $0x539,0x8(%esp)
084aa6d6 +0x404:  movl   $&_ZZN11game_master12CItemInfoCmd7executeEvE19__PRETTY_FUNCTION__,0x4(%esp)
084aa6de +0x40c:  lea    -0x3c(%ebp),%eax
084aa6e1 +0x40f:  mov    %eax,(%esp)
084aa6e4 +0x412:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084aa6e9 +0x417:  mov    -0x1c(%ebp),%eax
084aa6ec +0x41a:  mov    %eax,0x10(%esp)
084aa6f0 +0x41e:  mov    %esi,0xc(%esp)
084aa6f4 +0x422:  mov    %ebx,0x8(%esp)
084aa6f8 +0x426:  movl   $"%s:'%s' GM Mode Add Item(%d).",0x4(%esp)
084aa700 +0x42e:  lea    -0x3c(%ebp),%eax
084aa703 +0x431:  mov    %eax,(%esp)
084aa706 +0x434:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084aa70b +0x439:  mov    -0x40(%ebp),%eax
084aa70e +0x43c:  mov    -0x1c(%ebp),%edx
084aa711 +0x43f:  mov    %edx,0xc(%esp)
084aa715 +0x443:  mov    %eax,0x8(%esp)
084aa719 +0x447:  movl   $0x1,0x4(%esp)
084aa721 +0x44f:  mov    -0x24(%ebp),%eax
084aa724 +0x452:  mov    %eax,(%esp)
084aa727 +0x455:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
084aa72c +0x45a:  jmp    084aa72f <+0x45d>
084aa72e +0x45c:  nop
084aa72f +0x45d:  add    $0x16c,%esp
084aa735 +0x463:  pop    %ebx
084aa736 +0x464:  pop    %esi
084aa737 +0x465:  pop    %edi
084aa738 +0x466:  pop    %ebp
084aa739 +0x467:  ret
```

## 反编译 C

```c
// game_master::CItemInfoCmd::execute @ 0x84aa2d2

/* game_master::CItemInfoCmd::execute() */

void __thiscall game_master::CItemInfoCmd::execute(CItemInfoCmd *this)

{
  char cVar1;
  char *pcVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  size_t sVar4;
  CUser *pCVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_15b;
  char local_15a [254];
  PacketGuard local_5c [12];
  PacketGuard local_50 [12];
  undefined4 local_44;
  cMyTrace local_40 [16];
  CItem *local_30;
  undefined4 local_2c;
  CUser *local_28;
  int local_24;
  int local_20;
  
  bVar11 = 0;
  pcVar2 = (char *)std::string::c_str((string *)(this + 8));
  this_00 = (CDataManager *)G_CDataManager();
  local_30 = (CItem *)CDataManager::find_item(this_00,pcVar2);
  if (local_30 == (CItem *)0x0) {
    pcVar2 = &local_15b;
    uVar9 = 0xff;
    bVar10 = ((uint)pcVar2 & 1) != 0;
    if (bVar10) {
      local_15b = '\0';
      pcVar2 = local_15a;
      uVar9 = 0xfe;
    }
    if (((uint)pcVar2 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
      uVar9 = uVar9 - 2;
    }
    local_30 = (CItem *)0x0;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
    }
    if (!bVar10) {
      *pcVar2 = '\0';
    }
    uVar3 = std::string::c_str((string *)(this + 8));
    sprintf(&local_15b,"cannot find item (%s) ",uVar3);
    PacketGuard::PacketGuard(local_50);
                    /* try { // try from 084aa3b0 to 084aa45e has its CatchHandler @ 084aa461 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    sVar4 = strlen(&local_15b);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,sVar4);
    sVar4 = strlen(&local_15b);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,&local_15b,sVar4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    pCVar5 = (CUser *)CCommand::GetUser((CCommand *)this);
    CUser::Send(pCVar5,local_50);
    PacketGuard::~PacketGuard(local_50);
  }
  else {
    pcVar2 = &local_15b;
    uVar9 = 0xff;
    bVar10 = ((uint)pcVar2 & 1) != 0;
    if (bVar10) {
      local_15b = '\0';
      pcVar2 = local_15a;
      uVar9 = 0xfe;
    }
    if (((uint)pcVar2 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
    }
    if (!bVar10) {
      *pcVar2 = '\0';
    }
    uVar3 = CItem::get_index(local_30);
    sprintf(&local_15b,"item_index(%d) ",uVar3);
    PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 084aa52d to 084aa5db has its CatchHandler @ 084aa5de */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_5c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
    sVar4 = strlen(&local_15b);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,sVar4);
    sVar4 = strlen(&local_15b);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_5c,&local_15b,sVar4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
    pCVar5 = (CUser *)CCommand::GetUser((CCommand *)this);
    CUser::Send(pCVar5,local_5c);
    PacketGuard::~PacketGuard(local_5c);
    local_2c = CItem::get_index(local_30);
    local_28 = (CUser *)CCommand::GetUser((CCommand *)this);
    local_24 = 100;
    if (local_30 != (CItem *)0x0) {
      cVar1 = CItem::is_stackable(local_30);
      if (cVar1 != '\0') {
        iVar6 = CStackableItem::getStackableLimit((CStackableItem *)local_30);
        if (iVar6 < local_24) {
          local_24 = CStackableItem::getStackableLimit((CStackableItem *)local_30);
        }
      }
    }
    local_20 = CUser::AddItem(local_28,local_2c,local_24,6,&local_44,0);
    if (-1 < local_20) {
      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_28);
      uVar9 = CUser::get_acc_id(local_28);
      uVar7 = NumberToString(uVar9,0);
      cMyTrace::cMyTrace(local_40,"virtual void game_master::CItemInfoCmd::execute()",0x539,0);
      cMyTrace::operator()(local_40,"%s:\'%s\' GM Mode Add Item(%d).",uVar7,uVar3,local_20);
      CUser::SendUpdateItemList(local_28,1,local_44,local_20);
    }
  }
  return;
}
```
