# handlePickupItem

`_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc`

`WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814fa76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814fa76  _ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc
#           WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&)
# range [0x0814fa76, 0x0814ff49]
0814fa76 +0x000:  push   %ebp
0814fa77 +0x001:  mov    %esp,%ebp
0814fa79 +0x003:  push   %edi
0814fa7a +0x004:  push   %esi
0814fa7b +0x005:  push   %ebx
0814fa7c +0x006:  sub    $0xec,%esp
0814fa82 +0x00c:  mov    0x14(%ebp),%eax
0814fa85 +0x00f:  mov    %al,-0xdc(%ebp)
0814fa8b +0x015:  lea    -0xd0(%ebp),%eax
0814fa91 +0x01b:  mov    %eax,(%esp)
0814fa94 +0x01e:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
0814fa99 +0x023:  mov    0x8(%ebp),%eax
0814fa9c +0x026:  lea    0xa18(%eax),%ecx
0814faa2 +0x02c:  lea    -0x6c(%ebp),%eax
0814faa5 +0x02f:  lea    0x10(%ebp),%edx
0814faa8 +0x032:  mov    %edx,0x8(%esp)
0814faac +0x036:  mov    %ecx,0x4(%esp)
0814fab0 +0x03a:  mov    %eax,(%esp)
0814fab3 +0x03d:  call   08152532 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e67
0814fab8 +0x042:  sub    $0x4,%esp
0814fabb +0x045:  lea    -0x6c(%ebp),%eax
0814fabe +0x048:  mov    %eax,0x4(%esp)
0814fac2 +0x04c:  lea    -0x70(%ebp),%eax
0814fac5 +0x04f:  mov    %eax,(%esp)
0814fac8 +0x052:  call   08152fa2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28d7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28d7
0814facd +0x057:  mov    0x8(%ebp),%eax
0814fad0 +0x05a:  lea    0xa18(%eax),%edx
0814fad6 +0x060:  lea    -0x64(%ebp),%eax
0814fad9 +0x063:  mov    %edx,0x4(%esp)
0814fadd +0x067:  mov    %eax,(%esp)
0814fae0 +0x06a:  call   0815255e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e93>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e93
0814fae5 +0x06f:  sub    $0x4,%esp
0814fae8 +0x072:  lea    -0x64(%ebp),%eax
0814faeb +0x075:  mov    %eax,0x4(%esp)
0814faef +0x079:  lea    -0x68(%ebp),%eax
0814faf2 +0x07c:  mov    %eax,(%esp)
0814faf5 +0x07f:  call   08152fa2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28d7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28d7
0814fafa +0x084:  lea    -0x68(%ebp),%eax
0814fafd +0x087:  mov    %eax,0x4(%esp)
0814fb01 +0x08b:  lea    -0x70(%ebp),%eax
0814fb04 +0x08e:  mov    %eax,(%esp)
0814fb07 +0x091:  call   08152fb2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28e7
0814fb0c +0x096:  test   %al,%al
0814fb0e +0x098:  je     0814fb44 <+0xce>
0814fb10 +0x09a:  lea    -0x70(%ebp),%eax
0814fb13 +0x09d:  mov    %eax,(%esp)
0814fb16 +0x0a0:  call   08152fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28fb
0814fb1b +0x0a5:  lea    -0xd0(%ebp),%edx
0814fb21 +0x0ab:  lea    0x4(%eax),%ebx
0814fb24 +0x0ae:  mov    $0x15,%eax
0814fb29 +0x0b3:  mov    %edx,%edi
0814fb2b +0x0b5:  mov    %ebx,%esi
0814fb2d +0x0b7:  mov    %eax,%ecx
0814fb2f +0x0b9:  rep movsl %ds:(%esi),%es:(%edi)
0814fb31 +0x0bb:  mov    -0xbe(%ebp),%eax
0814fb37 +0x0c1:  test   %eax,%eax
0814fb39 +0x0c3:  jne    0814fc2d <+0x1b7>
0814fb3f +0x0c9:  jmp    0814ff07 <+0x491>
0814fb44 +0x0ce:  mov    0x10(%ebp),%ebx
0814fb47 +0x0d1:  movl   $0x5,0xc(%esp)
0814fb4f +0x0d9:  movl   $0x56e,0x8(%esp)
0814fb57 +0x0e1:  movl   $&_ZZN8WongWork10CBossStage16handlePickupItemEP5CUseribRcE19__PRETTY_FUNCTION__,0x4(%esp)
0814fb5f +0x0e9:  lea    -0x60(%ebp),%eax
0814fb62 +0x0ec:  mov    %eax,(%esp)
0814fb65 +0x0ef:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0814fb6a +0x0f4:  mov    %ebx,0x8(%esp)
0814fb6e +0x0f8:  movl   $"stageData_.item not find itemUID : %d",0x4(%esp)
0814fb76 +0x100:  lea    -0x60(%ebp),%eax
0814fb79 +0x103:  mov    %eax,(%esp)
0814fb7c +0x106:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0814fb81 +0x10b:  lea    -0x7c(%ebp),%eax
0814fb84 +0x10e:  mov    %eax,(%esp)
0814fb87 +0x111:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814fb8c +0x116:  lea    -0x7c(%ebp),%eax
0814fb8f +0x119:  mov    %eax,(%esp)
0814fb92 +0x11c:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0814fb97 +0x121:  movl   $0x2e,0x8(%esp)
0814fb9f +0x129:  movl   $0x1,0x4(%esp)
0814fba7 +0x131:  lea    -0x7c(%ebp),%eax
0814fbaa +0x134:  mov    %eax,(%esp)
0814fbad +0x137:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814fbb2 +0x13c:  movl   $0x0,0x4(%esp)
0814fbba +0x144:  lea    -0x7c(%ebp),%eax
0814fbbd +0x147:  mov    %eax,(%esp)
0814fbc0 +0x14a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814fbc5 +0x14f:  movl   $0x4,0x4(%esp)
0814fbcd +0x157:  lea    -0x7c(%ebp),%eax
0814fbd0 +0x15a:  mov    %eax,(%esp)
0814fbd3 +0x15d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814fbd8 +0x162:  movl   $0x1,0x4(%esp)
0814fbe0 +0x16a:  lea    -0x7c(%ebp),%eax
0814fbe3 +0x16d:  mov    %eax,(%esp)
0814fbe6 +0x170:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814fbeb +0x175:  lea    -0x7c(%ebp),%eax
0814fbee +0x178:  mov    %eax,0x4(%esp)
0814fbf2 +0x17c:  mov    0xc(%ebp),%eax
0814fbf5 +0x17f:  mov    %eax,(%esp)
0814fbf8 +0x182:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0814fbfd +0x187:  mov    $0x0,%ebx
0814fc02 +0x18c:  lea    -0x7c(%ebp),%eax
0814fc05 +0x18f:  mov    %eax,(%esp)
0814fc08 +0x192:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814fc0d +0x197:  jmp    0814ff3d <+0x4c7>
0814fc12 +0x19c:  mov    %edx,%ebx
0814fc14 +0x19e:  mov    %eax,%esi
0814fc16 +0x1a0:  lea    -0x7c(%ebp),%eax
0814fc19 +0x1a3:  mov    %eax,(%esp)
0814fc1c +0x1a6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814fc21 +0x1ab:  mov    %esi,%eax
0814fc23 +0x1ad:  mov    %ebx,%edx
0814fc25 +0x1af:  mov    %eax,(%esp)
0814fc28 +0x1b2:  call   08ae3750 <_Unwind_Resume>
0814fc2d +0x1b7:  mov    -0xbe(%ebp),%eax
0814fc33 +0x1bd:  mov    %eax,%ebx
0814fc35 +0x1bf:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814fc3a +0x1c4:  mov    %ebx,0x4(%esp)
0814fc3e +0x1c8:  mov    %eax,(%esp)
0814fc41 +0x1cb:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0814fc46 +0x1d0:  mov    %eax,-0x20(%ebp)
0814fc49 +0x1d3:  cmpl   $0x0,-0x20(%ebp)
0814fc4d +0x1d7:  jne    0814fca0 <+0x22a>
0814fc4f +0x1d9:  mov    0x10(%ebp),%esi
0814fc52 +0x1dc:  mov    -0xbe(%ebp),%ebx
0814fc58 +0x1e2:  movl   $0x5,0xc(%esp)
0814fc60 +0x1ea:  movl   $0x57f,0x8(%esp)
0814fc68 +0x1f2:  movl   $&_ZZN8WongWork10CBossStage16handlePickupItemEP5CUseribRcE19__PRETTY_FUNCTION__,0x4(%esp)
0814fc70 +0x1fa:  lea    -0x50(%ebp),%eax
0814fc73 +0x1fd:  mov    %eax,(%esp)
0814fc76 +0x200:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0814fc7b +0x205:  mov    %esi,0xc(%esp)
0814fc7f +0x209:  mov    %ebx,0x8(%esp)
0814fc83 +0x20d:  movl   $"item not find - item_id : %d, itemUID : %d",0x4(%esp)
0814fc8b +0x215:  lea    -0x50(%ebp),%eax
0814fc8e +0x218:  mov    %eax,(%esp)
0814fc91 +0x21b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0814fc96 +0x220:  mov    $0x0,%ebx
0814fc9b +0x225:  jmp    0814ff3d <+0x4c7>
0814fca0 +0x22a:  movl   $0x0,-0x1c(%ebp)
0814fca7 +0x231:  mov    -0x20(%ebp),%eax
0814fcaa +0x234:  mov    %eax,(%esp)
0814fcad +0x237:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0814fcb2 +0x23c:  test   %al,%al
0814fcb4 +0x23e:  je     0814fcdb <+0x265>
0814fcb6 +0x240:  mov    -0x20(%ebp),%eax
0814fcb9 +0x243:  mov    (%eax),%eax
0814fcbb +0x245:  add    $0xc,%eax
0814fcbe +0x248:  mov    (%eax),%edx
0814fcc0 +0x24a:  mov    -0x20(%ebp),%eax
0814fcc3 +0x24d:  mov    %eax,(%esp)
0814fcc6 +0x250:  call   *%edx
0814fcc8 +0x252:  cmp    $0x9,%eax
0814fccb +0x255:  sete   %al
0814fcce +0x258:  test   %al,%al
0814fcd0 +0x25a:  je     0814fd17 <+0x2a1>
0814fcd2 +0x25c:  movl   $0x7,-0x1c(%ebp)
0814fcd9 +0x263:  jmp    0814fd17 <+0x2a1>
0814fcdb +0x265:  mov    -0x20(%ebp),%eax
0814fcde +0x268:  mov    (%eax),%eax
0814fce0 +0x26a:  add    $0x14,%eax
0814fce3 +0x26d:  mov    (%eax),%edx
0814fce5 +0x26f:  mov    -0x20(%ebp),%eax
0814fce8 +0x272:  mov    %eax,(%esp)
0814fceb +0x275:  call   *%edx
0814fced +0x277:  test   %al,%al
0814fcef +0x279:  je     0814fcfa <+0x284>
0814fcf1 +0x27b:  movl   $0x7,-0x1c(%ebp)
0814fcf8 +0x282:  jmp    0814fd17 <+0x2a1>
0814fcfa +0x284:  mov    -0x20(%ebp),%eax
0814fcfd +0x287:  mov    (%eax),%eax
0814fcff +0x289:  add    $0x10,%eax
0814fd02 +0x28c:  mov    (%eax),%edx
0814fd04 +0x28e:  mov    -0x20(%ebp),%eax
0814fd07 +0x291:  mov    %eax,(%esp)
0814fd0a +0x294:  call   *%edx
0814fd0c +0x296:  test   %al,%al
0814fd0e +0x298:  je     0814fd17 <+0x2a1>
0814fd10 +0x29a:  movl   $0x1,-0x1c(%ebp)
0814fd17 +0x2a1:  mov    0x8(%ebp),%eax
0814fd1a +0x2a4:  mov    0x4(%eax),%eax
0814fd1d +0x2a7:  mov    %eax,(%esp)
0814fd20 +0x2aa:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0814fd25 +0x2af:  cmp    $0x1,%eax
0814fd28 +0x2b2:  jle    0814fd6b <+0x2f5>
0814fd2a +0x2b4:  mov    0x8(%ebp),%eax
0814fd2d +0x2b7:  mov    %eax,(%esp)
0814fd30 +0x2ba:  call   08149466 <_ZN8WongWork9CBossPlay18getLiveMemberCountEv>  ; WongWork::CBossPlay::getLiveMemberCount()
0814fd35 +0x2bf:  cmp    $0x1,%eax
0814fd38 +0x2c2:  jle    0814fd6b <+0x2f5>
0814fd3a +0x2c4:  movzbl -0xd0(%ebp),%eax
0814fd41 +0x2cb:  test   %al,%al
0814fd43 +0x2cd:  je     0814fd6b <+0x2f5>
0814fd45 +0x2cf:  mov    -0x20(%ebp),%eax
0814fd48 +0x2d2:  mov    %eax,(%esp)
0814fd4b +0x2d5:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0814fd50 +0x2da:  cmp    $0x4,%eax
0814fd53 +0x2dd:  je     0814fd64 <+0x2ee>
0814fd55 +0x2df:  mov    -0x20(%ebp),%eax
0814fd58 +0x2e2:  mov    %eax,(%esp)
0814fd5b +0x2e5:  call   08150f18 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x84d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x84d
0814fd60 +0x2ea:  test   %al,%al
0814fd62 +0x2ec:  je     0814fd6b <+0x2f5>
0814fd64 +0x2ee:  mov    $0x1,%eax
0814fd69 +0x2f3:  jmp    0814fd70 <+0x2fa>
0814fd6b +0x2f5:  mov    $0x0,%eax
0814fd70 +0x2fa:  test   %al,%al
0814fd72 +0x2fc:  je     0814fdb2 <+0x33c>
0814fd74 +0x2fe:  mov    0x10(%ebp),%eax
0814fd77 +0x301:  lea    -0xd0(%ebp),%edx
0814fd7d +0x307:  mov    %edx,0xc(%esp)
0814fd81 +0x30b:  mov    %eax,0x8(%esp)
0814fd85 +0x30f:  mov    0xc(%ebp),%eax
0814fd88 +0x312:  mov    %eax,0x4(%esp)
0814fd8c +0x316:  mov    0x8(%ebp),%eax
0814fd8f +0x319:  mov    %eax,(%esp)
0814fd92 +0x31c:  call   0814e57a <_ZN8WongWork10CBossStage17RoutingPickupItemEP5CUserjR8map_item>  ; WongWork::CBossStage::RoutingPickupItem(CUser*, unsigned int, map_item&)
0814fd97 +0x321:  xor    $0x1,%eax
0814fd9a +0x324:  test   %al,%al
0814fd9c +0x326:  je     0814fda8 <+0x332>
0814fd9e +0x328:  mov    $0x0,%ebx
0814fda3 +0x32d:  jmp    0814ff3d <+0x4c7>
0814fda8 +0x332:  mov    $0x1,%ebx
0814fdad +0x337:  jmp    0814ff3d <+0x4c7>
0814fdb2 +0x33c:  mov    -0x20(%ebp),%eax
0814fdb5 +0x33f:  mov    %eax,(%esp)
0814fdb8 +0x342:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0814fdbd +0x347:  mov    %eax,%edx
0814fdbf +0x349:  mov    0x18(%ebp),%eax
0814fdc2 +0x34c:  mov    %dl,(%eax)
0814fdc4 +0x34e:  mov    0x8(%ebp),%eax
0814fdc7 +0x351:  mov    0x4(%eax),%eax
0814fdca +0x354:  mov    %eax,(%esp)
0814fdcd +0x357:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0814fdd2 +0x35c:  cmp    $0x1,%eax
0814fdd5 +0x35f:  jle    0814fe29 <+0x3b3>
0814fdd7 +0x361:  mov    0x8(%ebp),%eax
0814fdda +0x364:  mov    %eax,(%esp)
0814fddd +0x367:  call   08149466 <_ZN8WongWork9CBossPlay18getLiveMemberCountEv>  ; WongWork::CBossPlay::getLiveMemberCount()
0814fde2 +0x36c:  cmp    $0x1,%eax
0814fde5 +0x36f:  jle    0814fe29 <+0x3b3>
0814fde7 +0x371:  movzbl -0xd0(%ebp),%eax
0814fdee +0x378:  test   %al,%al
0814fdf0 +0x37a:  je     0814fe29 <+0x3b3>
0814fdf2 +0x37c:  mov    -0x20(%ebp),%eax
0814fdf5 +0x37f:  mov    %eax,(%esp)
0814fdf8 +0x382:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0814fdfd +0x387:  cmp    $0x1,%eax
0814fe00 +0x38a:  je     0814fe22 <+0x3ac>
0814fe02 +0x38c:  mov    -0x20(%ebp),%eax
0814fe05 +0x38f:  mov    %eax,(%esp)
0814fe08 +0x392:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0814fe0d +0x397:  cmp    $0x2,%eax
0814fe10 +0x39a:  je     0814fe22 <+0x3ac>
0814fe12 +0x39c:  mov    -0x20(%ebp),%eax
0814fe15 +0x39f:  mov    %eax,(%esp)
0814fe18 +0x3a2:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0814fe1d +0x3a7:  cmp    $0x3,%eax
0814fe20 +0x3aa:  jne    0814fe29 <+0x3b3>
0814fe22 +0x3ac:  mov    $0x1,%eax
0814fe27 +0x3b1:  jmp    0814fe2e <+0x3b8>
0814fe29 +0x3b3:  mov    $0x0,%eax
0814fe2e +0x3b8:  test   %al,%al
0814fe30 +0x3ba:  je     0814fea0 <+0x42a>
0814fe32 +0x3bc:  mov    0x10(%ebp),%eax
0814fe35 +0x3bf:  lea    -0xd0(%ebp),%edx
0814fe3b +0x3c5:  mov    %edx,0xc(%esp)
0814fe3f +0x3c9:  mov    %eax,0x8(%esp)
0814fe43 +0x3cd:  mov    0xc(%ebp),%eax
0814fe46 +0x3d0:  mov    %eax,0x4(%esp)
0814fe4a +0x3d4:  mov    0x8(%ebp),%eax
0814fe4d +0x3d7:  mov    %eax,(%esp)
0814fe50 +0x3da:  call   0814e684 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item>  ; WongWork::CBossStage::RandomPickupItem(CUser*, unsigned int, map_item const&)
0814fe55 +0x3df:  xor    $0x1,%eax
0814fe58 +0x3e2:  test   %al,%al
0814fe5a +0x3e4:  je     0814ff38 <+0x4c2>
0814fe60 +0x3ea:  movl   $0x5,0xc(%esp)
0814fe68 +0x3f2:  movl   $0x5ac,0x8(%esp)
0814fe70 +0x3fa:  movl   $&_ZZN8WongWork10CBossStage16handlePickupItemEP5CUseribRcE19__PRETTY_FUNCTION__,0x4(%esp)
0814fe78 +0x402:  lea    -0x40(%ebp),%eax
0814fe7b +0x405:  mov    %eax,(%esp)
0814fe7e +0x408:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0814fe83 +0x40d:  movl   $"RandomPickupItem false",0x4(%esp)
0814fe8b +0x415:  lea    -0x40(%ebp),%eax
0814fe8e +0x418:  mov    %eax,(%esp)
0814fe91 +0x41b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0814fe96 +0x420:  mov    $0x0,%ebx
0814fe9b +0x425:  jmp    0814ff3d <+0x4c7>
0814fea0 +0x42a:  mov    0x10(%ebp),%eax
0814fea3 +0x42d:  lea    -0xd0(%ebp),%edx
0814fea9 +0x433:  mov    %edx,0xc(%esp)
0814fead +0x437:  mov    %eax,0x8(%esp)
0814feb1 +0x43b:  mov    0xc(%ebp),%eax
0814feb4 +0x43e:  mov    %eax,0x4(%esp)
0814feb8 +0x442:  mov    0x8(%ebp),%eax
0814febb +0x445:  mov    %eax,(%esp)
0814febe +0x448:  call   0814ecec <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item>  ; WongWork::CBossStage::NormalPickupItem(CUser*, unsigned int, map_item const&)
0814fec3 +0x44d:  xor    $0x1,%eax
0814fec6 +0x450:  test   %al,%al
0814fec8 +0x452:  je     0814ff38 <+0x4c2>
0814feca +0x454:  movl   $0x5,0xc(%esp)
0814fed2 +0x45c:  movl   $0x5b4,0x8(%esp)
0814feda +0x464:  movl   $&_ZZN8WongWork10CBossStage16handlePickupItemEP5CUseribRcE19__PRETTY_FUNCTION__,0x4(%esp)
0814fee2 +0x46c:  lea    -0x30(%ebp),%eax
0814fee5 +0x46f:  mov    %eax,(%esp)
0814fee8 +0x472:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0814feed +0x477:  movl   $"NormalPickupItem false",0x4(%esp)
0814fef5 +0x47f:  lea    -0x30(%ebp),%eax
0814fef8 +0x482:  mov    %eax,(%esp)
0814fefb +0x485:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0814ff00 +0x48a:  mov    $0x0,%ebx
0814ff05 +0x48f:  jmp    0814ff3d <+0x4c7>
0814ff07 +0x491:  mov    0x10(%ebp),%eax
0814ff0a +0x494:  lea    -0xd0(%ebp),%edx
0814ff10 +0x49a:  mov    %edx,0xc(%esp)
0814ff14 +0x49e:  mov    %eax,0x8(%esp)
0814ff18 +0x4a2:  mov    0xc(%ebp),%eax
0814ff1b +0x4a5:  mov    %eax,0x4(%esp)
0814ff1f +0x4a9:  mov    0x8(%ebp),%eax
0814ff22 +0x4ac:  mov    %eax,(%esp)
0814ff25 +0x4af:  call   0814f0e6 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item>  ; WongWork::CBossStage::GoldPickupItem(CUser*, unsigned int, map_item const&)
0814ff2a +0x4b4:  xor    $0x1,%eax
0814ff2d +0x4b7:  test   %al,%al
0814ff2f +0x4b9:  je     0814ff38 <+0x4c2>
0814ff31 +0x4bb:  mov    $0x0,%ebx
0814ff36 +0x4c0:  jmp    0814ff3d <+0x4c7>
0814ff38 +0x4c2:  mov    $0x1,%ebx
0814ff3d +0x4c7:  mov    %ebx,%eax
0814ff3f +0x4c9:  lea    -0xc(%ebp),%esp
0814ff42 +0x4cc:  add    $0x0,%esp
0814ff45 +0x4cf:  pop    %ebx
0814ff46 +0x4d0:  pop    %esi
0814ff47 +0x4d1:  pop    %edi
0814ff48 +0x4d2:  pop    %ebp
0814ff49 +0x4d3:  ret
```

## 反编译 C

```c
// WongWork::CBossStage::handlePickupItem @ 0x814fa76

/* WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&) */

undefined4 __thiscall
WongWork::CBossStage::handlePickupItem
          (CBossStage *this,CUser *param_1,int param_2,bool param_3,char *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  int iVar4;
  undefined4 *puVar5;
  map_item *pmVar6;
  byte bVar7;
  map_item local_d4 [18];
  int local_c2;
  PacketGuard local_80 [12];
  _Rb_tree_const_iterator<std::pair<int_const,map_item>> local_74 [4];
  _Rb_tree_iterator local_70 [4];
  _Rb_tree_const_iterator<std::pair<int_const,map_item>> local_6c [4];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_68 [4];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  CItem *local_24;
  undefined4 local_20;
  
  bVar7 = 0;
  map_item::map_item(local_d4);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::find
            ((int *)local_70);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::_Rb_tree_const_iterator
            (local_74,local_70);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end(local_68)
  ;
  std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::_Rb_tree_const_iterator
            (local_6c,(_Rb_tree_iterator *)local_68);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::operator!=
                    (local_74,(_Rb_tree_const_iterator *)local_6c);
  if (cVar2 == '\0') {
    cMyTrace::cMyTrace(local_64,
                       "virtual bool WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&)"
                       ,0x56e,5);
    cMyTrace::operator()(local_64,"stageData_.item not find itemUID : %d",param_2);
    PacketGuard::PacketGuard(local_80);
                    /* try { // try from 0814fb92 to 0814fbfc has its CatchHandler @ 0814fc12 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_80);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_80,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_80,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_80,4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_80,true);
    CUser::Send(param_1,local_80);
    PacketGuard::~PacketGuard(local_80);
    return 0;
  }
  iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::operator->(local_74);
  puVar5 = (undefined4 *)(iVar3 + 4);
  pmVar6 = local_d4;
  for (iVar4 = 0x15; iVar3 = local_c2, iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pmVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    pmVar6 = pmVar6 + ((uint)bVar7 * -2 + 1) * 4;
  }
  if (local_c2 == 0) {
    cVar2 = GoldPickupItem(this,param_1,param_2,local_d4);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    this_00 = (CDataManager *)G_CDataManager();
    local_24 = (CItem *)CDataManager::find_item(this_00,iVar3);
    if (local_24 == (CItem *)0x0) {
      cMyTrace::cMyTrace(local_54,
                         "virtual bool WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&)"
                         ,0x57f,5);
      cMyTrace::operator()(local_54,"item not find - item_id : %d, itemUID : %d",local_c2,param_2);
      return 0;
    }
    local_20 = 0;
    cVar2 = CItem::is_stackable(local_24);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(int *)local_24 + 0x14))(local_24);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*(int *)local_24 + 0x10))(local_24);
        if (cVar2 != '\0') {
          local_20 = 1;
        }
      }
      else {
        local_20 = 7;
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)local_24 + 0xc))(local_24);
      if (iVar3 == 9) {
        local_20 = 7;
      }
    }
    iVar3 = CParty::get_member_count(*(CParty **)(this + 4));
    if ((((iVar3 < 2) || (iVar3 = CBossPlay::getLiveMemberCount((CBossPlay *)this), iVar3 < 2)) ||
        (local_d4[0] == (map_item)0x0)) ||
       ((iVar3 = CItem::get_rarity(local_24), iVar3 != 4 &&
        (cVar2 = CItem::IsRoutingItem(local_24), cVar2 == '\0')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = RoutingPickupItem(this,param_1,param_2,local_d4);
      if (cVar2 != '\x01') {
        return 0;
      }
      return 1;
    }
    cVar2 = CItem::get_rarity(local_24);
    *param_4 = cVar2;
    iVar3 = CParty::get_member_count(*(CParty **)(this + 4));
    if (((iVar3 < 2) || (iVar3 = CBossPlay::getLiveMemberCount((CBossPlay *)this), iVar3 < 2)) ||
       ((local_d4[0] == (map_item)0x0 ||
        (((iVar3 = CItem::get_rarity(local_24), iVar3 != 1 &&
          (iVar3 = CItem::get_rarity(local_24), iVar3 != 2)) &&
         (iVar3 = CItem::get_rarity(local_24), iVar3 != 3)))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = RandomPickupItem(this,param_1,param_2,local_d4);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_44,
                           "virtual bool WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&)"
                           ,0x5ac,5);
        cMyTrace::operator()(local_44,"RandomPickupItem false");
        return 0;
      }
    }
    else {
      cVar2 = NormalPickupItem(this,param_1,param_2,local_d4);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_34,
                           "virtual bool WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&)"
                           ,0x5b4,5);
        cMyTrace::operator()(local_34,"NormalPickupItem false");
        return 0;
      }
    }
  }
  return 1;
}
```
