# process

`_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_SelectCharac::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c6380` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c6380  _ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_SelectCharac::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c6380, 0x081c6825]
081c6380 +0x000:  push   %ebp
081c6381 +0x001:  mov    %esp,%ebp
081c6383 +0x003:  push   %esi
081c6384 +0x004:  push   %ebx
081c6385 +0x005:  sub    $0x1a0,%esp
081c638b +0x00b:  mov    0x14(%ebp),%eax
081c638e +0x00e:  mov    %eax,-0x10(%ebp)
081c6391 +0x011:  mov    0x10(%ebp),%eax
081c6394 +0x014:  mov    %eax,0x8(%esp)
081c6398 +0x018:  mov    0xc(%ebp),%eax
081c639b +0x01b:  mov    %eax,0x4(%esp)
081c639f +0x01f:  mov    0x8(%ebp),%eax
081c63a2 +0x022:  mov    %eax,(%esp)
081c63a5 +0x025:  call   081c686e <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_SelectCharac::check_error(CUser*, MSG_BASE&)
081c63aa +0x02a:  mov    %eax,%edx
081c63ac +0x02c:  mov    -0x10(%ebp),%eax
081c63af +0x02f:  mov    %edx,0x4(%eax)
081c63b2 +0x032:  mov    -0x10(%ebp),%eax
081c63b5 +0x035:  mov    0x4(%eax),%eax
081c63b8 +0x038:  test   %eax,%eax
081c63ba +0x03a:  jle    081c63c6 <+0x46>
081c63bc +0x03c:  mov    $0x0,%eax
081c63c1 +0x041:  jmp    081c681b <+0x49b>
081c63c6 +0x046:  mov    -0x10(%ebp),%eax
081c63c9 +0x049:  mov    0x4(%eax),%eax
081c63cc +0x04c:  test   %eax,%eax
081c63ce +0x04e:  jns    081c6402 <+0x82>
081c63d0 +0x050:  mov    0xc(%ebp),%eax
081c63d3 +0x053:  mov    %eax,(%esp)
081c63d6 +0x056:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c63db +0x05b:  mov    -0x10(%ebp),%edx
081c63de +0x05e:  mov    0x4(%edx),%edx
081c63e1 +0x061:  mov    %eax,0xc(%esp)
081c63e5 +0x065:  mov    %edx,0x8(%esp)
081c63e9 +0x069:  movl   $&_ZZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c63f1 +0x071:  movl   $0x1587,(%esp)
081c63f8 +0x078:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c63fd +0x07d:  jmp    081c681b <+0x49b>
081c6402 +0x082:  mov    0x10(%ebp),%eax
081c6405 +0x085:  mov    %eax,-0xc(%ebp)
081c6408 +0x088:  mov    0xc(%ebp),%eax
081c640b +0x08b:  mov    %eax,(%esp)
081c640e +0x08e:  call   0864e1f2 <_ZN15CUserCharacInfo14resetSaveFlagsEv>  ; CUserCharacInfo::resetSaveFlags()
081c6413 +0x093:  mov    -0xc(%ebp),%eax
081c6416 +0x096:  movzbl 0xd(%eax),%eax
081c641a +0x09a:  movsbl %al,%eax
081c641d +0x09d:  mov    %eax,0x4(%esp)
081c6421 +0x0a1:  mov    0xc(%ebp),%eax
081c6424 +0x0a4:  mov    %eax,(%esp)
081c6427 +0x0a7:  call   08230054 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x56fe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x56fe
081c642c +0x0ac:  cmp    $0x1,%eax
081c642f +0x0af:  sete   %al
081c6432 +0x0b2:  test   %al,%al
081c6434 +0x0b4:  je     081c6482 <+0x102>
081c6436 +0x0b6:  movl   $0x0,0x4(%esp)
081c643e +0x0be:  mov    0xc(%ebp),%eax
081c6441 +0x0c1:  mov    %eax,(%esp)
081c6444 +0x0c4:  call   0822fd80 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x542a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x542a
081c6449 +0x0c9:  mov    -0xc(%ebp),%eax
081c644c +0x0cc:  movzbl 0xd(%eax),%eax
081c6450 +0x0d0:  movsbl %al,%eax
081c6453 +0x0d3:  movl   $0x0,0x8(%esp)
081c645b +0x0db:  mov    %eax,0x4(%esp)
081c645f +0x0df:  mov    0xc(%ebp),%eax
081c6462 +0x0e2:  mov    %eax,(%esp)
081c6465 +0x0e5:  call   0822ffec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5696>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5696
081c646a +0x0ea:  movl   $0x0,0x4(%esp)
081c6472 +0x0f2:  mov    0xc(%ebp),%eax
081c6475 +0x0f5:  mov    %eax,(%esp)
081c6478 +0x0f8:  call   0822fc06 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52b0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52b0
081c647d +0x0fd:  jmp    081c6505 <+0x185>
081c6482 +0x102:  mov    -0xc(%ebp),%eax
081c6485 +0x105:  movzbl 0xd(%eax),%eax
081c6489 +0x109:  movsbl %al,%eax
081c648c +0x10c:  mov    %eax,0x4(%esp)
081c6490 +0x110:  mov    0xc(%ebp),%eax
081c6493 +0x113:  mov    %eax,(%esp)
081c6496 +0x116:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c649b +0x11b:  mov    %eax,%ebx
081c649d +0x11d:  mov    0xc(%ebp),%eax
081c64a0 +0x120:  mov    %eax,(%esp)
081c64a3 +0x123:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
081c64a8 +0x128:  cmp    %eax,%ebx
081c64aa +0x12a:  sete   %al
081c64ad +0x12d:  test   %al,%al
081c64af +0x12f:  je     081c6505 <+0x185>
081c64b1 +0x131:  mov    0xc(%ebp),%eax
081c64b4 +0x134:  mov    %eax,(%esp)
081c64b7 +0x137:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
081c64bc +0x13c:  test   %eax,%eax
081c64be +0x13e:  je     081c64d6 <+0x156>
081c64c0 +0x140:  mov    0xc(%ebp),%eax
081c64c3 +0x143:  mov    %eax,(%esp)
081c64c6 +0x146:  call   081348f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4f7
081c64cb +0x14b:  test   %eax,%eax
081c64cd +0x14d:  je     081c64d6 <+0x156>
081c64cf +0x14f:  mov    $0x1,%eax
081c64d4 +0x154:  jmp    081c64db <+0x15b>
081c64d6 +0x156:  mov    $0x0,%eax
081c64db +0x15b:  test   %al,%al
081c64dd +0x15d:  je     081c6505 <+0x185>
081c64df +0x15f:  movl   $0x1,0x4(%esp)
081c64e7 +0x167:  mov    0xc(%ebp),%eax
081c64ea +0x16a:  mov    %eax,(%esp)
081c64ed +0x16d:  call   0822fd80 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x542a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x542a
081c64f2 +0x172:  movl   $0x1,0x4(%esp)
081c64fa +0x17a:  mov    0xc(%ebp),%eax
081c64fd +0x17d:  mov    %eax,(%esp)
081c6500 +0x180:  call   0822fc06 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52b0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52b0
081c6505 +0x185:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c650a +0x18a:  mov    %eax,(%esp)
081c650d +0x18d:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
081c6512 +0x192:  cmp    $0x7,%eax
081c6515 +0x195:  je     081c6528 <+0x1a8>
081c6517 +0x197:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c651c +0x19c:  mov    %eax,(%esp)
081c651f +0x19f:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081c6524 +0x1a4:  test   %al,%al
081c6526 +0x1a6:  je     081c652f <+0x1af>
081c6528 +0x1a8:  mov    $0x1,%eax
081c652d +0x1ad:  jmp    081c6534 <+0x1b4>
081c652f +0x1af:  mov    $0x0,%eax
081c6534 +0x1b4:  test   %al,%al
081c6536 +0x1b6:  je     081c654b <+0x1cb>
081c6538 +0x1b8:  movl   $0x0,0x4(%esp)
081c6540 +0x1c0:  mov    0xc(%ebp),%eax
081c6543 +0x1c3:  mov    %eax,(%esp)
081c6546 +0x1c6:  call   0822fd80 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x542a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x542a
081c654b +0x1cb:  mov    0xc(%ebp),%eax
081c654e +0x1ce:  mov    %eax,(%esp)
081c6551 +0x1d1:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c6556 +0x1d6:  test   %al,%al
081c6558 +0x1d8:  je     081c6569 <+0x1e9>
081c655a +0x1da:  call   0823470f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9db9>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9db9
081c655f +0x1df:  mov    %eax,(%esp)
081c6562 +0x1e2:  call   0823468a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9d34
081c6567 +0x1e7:  jmp    081c6576 <+0x1f6>
081c6569 +0x1e9:  call   0823470f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9db9>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9db9
081c656e +0x1ee:  mov    %eax,(%esp)
081c6571 +0x1f1:  call   0823465a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9d04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9d04
081c6576 +0x1f6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c657b +0x1fb:  mov    %eax,(%esp)
081c657e +0x1fe:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081c6583 +0x203:  xor    $0x1,%eax
081c6586 +0x206:  test   %al,%al
081c6588 +0x208:  je     081c65e3 <+0x263>
081c658a +0x20a:  mov    -0xc(%ebp),%eax
081c658d +0x20d:  movzbl 0xd(%eax),%eax
081c6591 +0x211:  movsbl %al,%eax
081c6594 +0x214:  mov    0xc(%ebp),%edx
081c6597 +0x217:  add    $0x796e8,%edx
081c659d +0x21d:  mov    %eax,0x4(%esp)
081c65a1 +0x221:  mov    %edx,(%esp)
081c65a4 +0x224:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081c65a9 +0x229:  mov    0x14b8(%eax),%edx
081c65af +0x22f:  mov    -0xc(%ebp),%eax
081c65b2 +0x232:  mov    %edx,0xe(%eax)
081c65b5 +0x235:  mov    -0xc(%ebp),%eax
081c65b8 +0x238:  movzbl 0xd(%eax),%eax
081c65bc +0x23c:  movsbl %al,%eax
081c65bf +0x23f:  mov    0xc(%ebp),%edx
081c65c2 +0x242:  add    $0x796e8,%edx
081c65c8 +0x248:  mov    %eax,0x4(%esp)
081c65cc +0x24c:  mov    %edx,(%esp)
081c65cf +0x24f:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081c65d4 +0x254:  movzbl 0x14b7(%eax),%edx
081c65db +0x25b:  mov    -0xc(%ebp),%eax
081c65de +0x25e:  mov    %dl,0x12(%eax)
081c65e1 +0x261:  jmp    081c65f4 <+0x274>
081c65e3 +0x263:  mov    -0xc(%ebp),%eax
081c65e6 +0x266:  movl   $0x0,0xe(%eax)
081c65ed +0x26d:  mov    -0xc(%ebp),%eax
081c65f0 +0x270:  movb   $0x0,0x12(%eax)
081c65f4 +0x274:  mov    -0xc(%ebp),%eax
081c65f7 +0x277:  mov    %eax,0x8(%esp)
081c65fb +0x27b:  mov    0xc(%ebp),%eax
081c65fe +0x27e:  mov    %eax,0x4(%esp)
081c6602 +0x282:  mov    0x8(%ebp),%eax
081c6605 +0x285:  mov    %eax,(%esp)
081c6608 +0x288:  call   081c6ca0 <_ZN23DisPatcher_SelectCharac15RequestDBCharacEP5CUserRK17MSG_CHARAC_SELECT>  ; DisPatcher_SelectCharac::RequestDBCharac(CUser*, MSG_CHARAC_SELECT const&)
081c660d +0x28d:  mov    -0xc(%ebp),%eax
081c6610 +0x290:  mov    %eax,0x8(%esp)
081c6614 +0x294:  mov    0xc(%ebp),%eax
081c6617 +0x297:  mov    %eax,0x4(%esp)
081c661b +0x29b:  mov    0x8(%ebp),%eax
081c661e +0x29e:  mov    %eax,(%esp)
081c6621 +0x2a1:  call   081c79f2 <_ZN23DisPatcher_SelectCharac17RequestBlackCountEP5CUserR17MSG_CHARAC_SELECT>  ; DisPatcher_SelectCharac::RequestBlackCount(CUser*, MSG_CHARAC_SELECT&)
081c6626 +0x2a6:  mov    -0xc(%ebp),%eax
081c6629 +0x2a9:  mov    %eax,0x8(%esp)
081c662d +0x2ad:  mov    0xc(%ebp),%eax
081c6630 +0x2b0:  mov    %eax,0x4(%esp)
081c6634 +0x2b4:  mov    0x8(%ebp),%eax
081c6637 +0x2b7:  mov    %eax,(%esp)
081c663a +0x2ba:  call   081c6ee6 <_ZN23DisPatcher_SelectCharac18RequestDBInventoryEP5CUserR17MSG_CHARAC_SELECT>  ; DisPatcher_SelectCharac::RequestDBInventory(CUser*, MSG_CHARAC_SELECT&)
081c663f +0x2bf:  mov    -0xc(%ebp),%eax
081c6642 +0x2c2:  mov    %eax,0x8(%esp)
081c6646 +0x2c6:  mov    0xc(%ebp),%eax
081c6649 +0x2c9:  mov    %eax,0x4(%esp)
081c664d +0x2cd:  mov    0x8(%ebp),%eax
081c6650 +0x2d0:  mov    %eax,(%esp)
081c6653 +0x2d3:  call   081c70c2 <_ZN23DisPatcher_SelectCharac14RequestDBQuestEP5CUserR17MSG_CHARAC_SELECT>  ; DisPatcher_SelectCharac::RequestDBQuest(CUser*, MSG_CHARAC_SELECT&)
081c6658 +0x2d8:  mov    -0xc(%ebp),%eax
081c665b +0x2db:  mov    %eax,0x8(%esp)
081c665f +0x2df:  mov    0xc(%ebp),%eax
081c6662 +0x2e2:  mov    %eax,0x4(%esp)
081c6666 +0x2e6:  mov    0x8(%ebp),%eax
081c6669 +0x2e9:  mov    %eax,(%esp)
081c666c +0x2ec:  call   081c7436 <_ZN23DisPatcher_SelectCharac21RequestDBDungeonClearEP5CUserR17MSG_CHARAC_SELECT>  ; DisPatcher_SelectCharac::RequestDBDungeonClear(CUser*, MSG_CHARAC_SELECT&)
081c6671 +0x2f1:  mov    -0xc(%ebp),%eax
081c6674 +0x2f4:  mov    %eax,0x4(%esp)
081c6678 +0x2f8:  mov    0xc(%ebp),%eax
081c667b +0x2fb:  mov    %eax,(%esp)
081c667e +0x2fe:  call   08121608 <_ZN8APSystem24CDBAndExchangeServerProc33RequestLoadActionPointFromDBAndESER5CUserR17MSG_CHARAC_SELECT>  ; APSystem::CDBAndExchangeServerProc::RequestLoadActionPointFromDBAndES(CUser&, MSG_CHARAC_SELECT&)
081c6683 +0x303:  mov    -0xc(%ebp),%eax
081c6686 +0x306:  mov    %eax,0x8(%esp)
081c668a +0x30a:  mov    0xc(%ebp),%eax
081c668d +0x30d:  mov    %eax,0x4(%esp)
081c6691 +0x311:  mov    0x8(%ebp),%eax
081c6694 +0x314:  mov    %eax,(%esp)
081c6697 +0x317:  call   081c7836 <_ZN23DisPatcher_SelectCharac24RequestDBKillMonsterInfoEP5CUserR17MSG_CHARAC_SELECT>  ; DisPatcher_SelectCharac::RequestDBKillMonsterInfo(CUser*, MSG_CHARAC_SELECT&)
081c669c +0x31c:  mov    -0xc(%ebp),%eax
081c669f +0x31f:  mov    %eax,0x4(%esp)
081c66a3 +0x323:  mov    0xc(%ebp),%eax
081c66a6 +0x326:  mov    %eax,(%esp)
081c66a9 +0x329:  call   08133784 <_ZN12advancealtar23DBAndExchangeServerProc22requestLoadFromDBAndESER5CUserR17MSG_CHARAC_SELECT>  ; advancealtar::DBAndExchangeServerProc::requestLoadFromDBAndES(CUser&, MSG_CHARAC_SELECT&)
081c66ae +0x32e:  mov    -0xc(%ebp),%eax
081c66b1 +0x331:  mov    %eax,0x8(%esp)
081c66b5 +0x335:  mov    0xc(%ebp),%eax
081c66b8 +0x338:  mov    %eax,0x4(%esp)
081c66bc +0x33c:  mov    0x8(%ebp),%eax
081c66bf +0x33f:  mov    %eax,(%esp)
081c66c2 +0x342:  call   081c7602 <_ZN23DisPatcher_SelectCharac12RequestDBETCEP5CUserR17MSG_CHARAC_SELECT>  ; DisPatcher_SelectCharac::RequestDBETC(CUser*, MSG_CHARAC_SELECT&)
081c66c7 +0x347:  movl   $0x0,0x4(%esp)
081c66cf +0x34f:  mov    0xc(%ebp),%eax
081c66d2 +0x352:  mov    %eax,(%esp)
081c66d5 +0x355:  call   0822fd80 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x542a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x542a
081c66da +0x35a:  movl   $0x0,0x4(%esp)
081c66e2 +0x362:  mov    0xc(%ebp),%eax
081c66e5 +0x365:  mov    %eax,(%esp)
081c66e8 +0x368:  call   0822fd5c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5406>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5406
081c66ed +0x36d:  movl   $0x0,0x4(%esp)
081c66f5 +0x375:  mov    0xc(%ebp),%eax
081c66f8 +0x378:  mov    %eax,(%esp)
081c66fb +0x37b:  call   0822fd6e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5418>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5418
081c6700 +0x380:  mov    -0xc(%ebp),%eax
081c6703 +0x383:  movzbl 0xd(%eax),%eax
081c6707 +0x387:  movsbl %al,%eax
081c670a +0x38a:  mov    %eax,0x4(%esp)
081c670e +0x38e:  mov    0xc(%ebp),%eax
081c6711 +0x391:  mov    %eax,(%esp)
081c6714 +0x394:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c6719 +0x399:  mov    %eax,%ebx
081c671b +0x39b:  mov    0xc(%ebp),%eax
081c671e +0x39e:  mov    %eax,(%esp)
081c6721 +0x3a1:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c6726 +0x3a6:  mov    %ebx,0x4(%esp)
081c672a +0x3aa:  mov    %eax,(%esp)
081c672d +0x3ad:  call   0842a048 <_ZN26DB_GetDeathTowerBestRecord11makeRequestEij>  ; DB_GetDeathTowerBestRecord::makeRequest(int, unsigned int)
081c6732 +0x3b2:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081c6739 +0x3b9:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081c673e +0x3be:  mov    %eax,%esi
081c6740 +0x3c0:  mov    0xc(%ebp),%eax
081c6743 +0x3c3:  mov    %eax,(%esp)
081c6746 +0x3c6:  call   080dd5a4 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xed>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xed
081c674b +0x3cb:  mov    %eax,%ebx
081c674d +0x3cd:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081c6752 +0x3d2:  mov    0x37c(%eax),%eax
081c6758 +0x3d8:  mov    %esi,0x8(%esp)
081c675c +0x3dc:  mov    %ebx,0x4(%esp)
081c6760 +0x3e0:  mov    %eax,(%esp)
081c6763 +0x3e3:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
081c6768 +0x3e8:  test   %al,%al
081c676a +0x3ea:  je     081c6790 <+0x410>
081c676c +0x3ec:  mov    0xc(%ebp),%eax
081c676f +0x3ef:  mov    %eax,(%esp)
081c6772 +0x3f2:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c6777 +0x3f7:  mov    %eax,%ebx
081c6779 +0x3f9:  mov    0xc(%ebp),%eax
081c677c +0x3fc:  mov    %eax,(%esp)
081c677f +0x3ff:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c6784 +0x404:  mov    %ebx,0x4(%esp)
081c6788 +0x408:  mov    %eax,(%esp)
081c678b +0x40b:  call   08442fae <_ZN17DB_GetUserRegdate11makeRequestEij>  ; DB_GetUserRegdate::makeRequest(int, unsigned int)
081c6790 +0x410:  lea    -0x192(%ebp),%eax
081c6796 +0x416:  mov    %eax,(%esp)
081c6799 +0x419:  call   0822c53a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1be4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1be4
081c679e +0x41e:  mov    0xc(%ebp),%eax
081c67a1 +0x421:  mov    %eax,(%esp)
081c67a4 +0x424:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c67a9 +0x429:  mov    %eax,-0x188(%ebp)
081c67af +0x42f:  mov    0xc(%ebp),%eax
081c67b2 +0x432:  mov    %eax,(%esp)
081c67b5 +0x435:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c67ba +0x43a:  mov    %eax,-0x184(%ebp)
081c67c0 +0x440:  mov    -0xc(%ebp),%eax
081c67c3 +0x443:  movzbl 0xd(%eax),%eax
081c67c7 +0x447:  movsbl %al,%eax
081c67ca +0x44a:  mov    %eax,0x4(%esp)
081c67ce +0x44e:  mov    0xc(%ebp),%eax
081c67d1 +0x451:  mov    %eax,(%esp)
081c67d4 +0x454:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c67d9 +0x459:  mov    %eax,-0x180(%ebp)
081c67df +0x45f:  lea    -0x192(%ebp),%ebx
081c67e5 +0x465:  mov    0xc(%ebp),%eax
081c67e8 +0x468:  mov    %eax,(%esp)
081c67eb +0x46b:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081c67f0 +0x470:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081c67f6 +0x476:  mov    %eax,0x4(%esp)
081c67fa +0x47a:  mov    %edx,(%esp)
081c67fd +0x47d:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081c6802 +0x482:  movl   $0x182,0x8(%esp)
081c680a +0x48a:  mov    %ebx,0x4(%esp)
081c680e +0x48e:  mov    %eax,(%esp)
081c6811 +0x491:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
081c6816 +0x496:  mov    $0x0,%eax
081c681b +0x49b:  add    $0x1a0,%esp
081c6821 +0x4a1:  pop    %ebx
081c6822 +0x4a2:  pop    %esi
081c6823 +0x4a3:  pop    %ebp
081c6824 +0x4a4:  ret
081c6825 +0x4a5:  nop
```

## 反编译 C

```c
// DisPatcher_SelectCharac::process @ 0x81c6380

/* DisPatcher_SelectCharac::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_SelectCharac::process
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  GameWorld *pGVar7;
  CExchangeServerHitRate *pCVar8;
  long lVar9;
  long lVar10;
  CMonitorServerProxy *this_00;
  LimitNpcBuyItemInfoAll local_196 [10];
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_14 + 4) = uVar3;
  if (0 < *(int *)(local_14 + 4)) {
    return 0;
  }
  if (*(int *)(local_14 + 4) < 0) {
    uVar4 = CUser::get_acc_id(param_1);
    uVar3 = LineFunc(0x1587,
                     "virtual int DisPatcher_SelectCharac::process(CUser*, MSG_BASE&, ParamBase&)",
                     *(int *)(local_14 + 4),uVar4);
    return uVar3;
  }
  local_10 = param_2;
  CUserCharacInfo::resetSaveFlags((CUserCharacInfo *)param_1);
  iVar5 = CUser::GetCharacViewState(param_1,(int)(char)local_10[0xd]);
  if (iVar5 == 1) {
    CUser::SetValidLastLoginCharac(param_1,false);
    CUser::SetCharacViewState(param_1,(int)(char)local_10[0xd],0);
    CUser::SetLoadRentalInfoFromExchange(param_1,false);
  }
  else {
    iVar5 = CUser::get_charac_no(param_1,(int)(char)local_10[0xd]);
    iVar6 = CUser::GetLastLoginCharacNo(param_1);
    if (iVar5 == iVar6) {
      iVar5 = CUser::GetLastLoginCharacNo(param_1);
      if ((iVar5 == 0) || (iVar5 = CUser::GetLastLoginChannelNo(param_1), iVar5 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::SetValidLastLoginCharac(param_1,true);
        CUser::SetLoadRentalInfoFromExchange(param_1,true);
      }
    }
  }
  pGVar7 = (GameWorld *)G_GameWorld();
  iVar5 = GameWorld::GetChannelType(pGVar7);
  if (iVar5 != 7) {
    pGVar7 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar7);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_081c6534;
    }
  }
  bVar1 = true;
LAB_081c6534:
  if (bVar1) {
    CUser::SetValidLastLoginCharac(param_1,false);
  }
  cVar2 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar2 == '\0') {
    pCVar8 = (CExchangeServerHitRate *)exchange_server::GetInstanceExchangeServerHitRate();
    exchange_server::CExchangeServerHitRate::IncrementDBLoadCount(pCVar8);
  }
  else {
    pCVar8 = (CExchangeServerHitRate *)exchange_server::GetInstanceExchangeServerHitRate();
    exchange_server::CExchangeServerHitRate::IncrementCacheLoadCount(pCVar8);
  }
  pGVar7 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar7);
  if (cVar2 == '\x01') {
    *(undefined4 *)(local_10 + 0xe) = 0;
    local_10[0x12] = (MSG_BASE)0x0;
  }
  else {
    iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                       (int)(char)local_10[0xd]);
    *(undefined4 *)(local_10 + 0xe) = *(undefined4 *)(iVar5 + 0x14b8);
    iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                       (int)(char)local_10[0xd]);
    local_10[0x12] = *(MSG_BASE *)(iVar5 + 0x14b7);
  }
  RequestDBCharac(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  RequestBlackCount(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  RequestDBInventory(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  RequestDBQuest(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  RequestDBDungeonClear(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  APSystem::CDBAndExchangeServerProc::RequestLoadActionPointFromDBAndES
            (param_1,(MSG_CHARAC_SELECT *)local_10);
  RequestDBKillMonsterInfo(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  advancealtar::DBAndExchangeServerProc::requestLoadFromDBAndES
            (param_1,(MSG_CHARAC_SELECT *)local_10);
  RequestDBETC(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  CUser::SetValidLastLoginCharac(param_1,false);
  CUser::SetLastLoginCharacNo(param_1,0);
  CUser::SetLastLoginChannelNo(param_1,0);
  uVar4 = CUser::get_charac_no(param_1,(int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd));
  iVar5 = CUser::GetUID(param_1);
  DB_GetDeathTowerBestRecord::makeRequest(iVar5,uVar4);
  lVar9 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  lVar10 = CUser::GetAccountLastPlayTime(param_1);
  iVar5 = G_CEnvironment();
  cVar2 = CheckDailyScheduleTime(*(int *)(iVar5 + 0x37c),lVar10,lVar9);
  if (cVar2 != '\0') {
    uVar4 = CUser::get_acc_id(param_1);
    iVar5 = CUser::GetUID(param_1);
    DB_GetUserRegdate::makeRequest(iVar5,uVar4);
  }
  LimitNpcBuyItemInfoAll::LimitNpcBuyItemInfoAll(local_196);
  local_18c = CUser::GetUID(param_1);
  local_188 = CUser::get_acc_id(param_1);
  local_184 = CUser::get_charac_no(param_1,(int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd));
  uVar3 = CUser::GetServerGroup(param_1);
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar3);
  CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_196,0x182);
  return 0;
}
```
