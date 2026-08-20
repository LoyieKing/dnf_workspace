# Hatch

`_ZN13user_creature12CCreatureMgr5HatchEi`

`user_creature::CCreatureMgr::Hatch(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08339fa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08339fa0  _ZN13user_creature12CCreatureMgr5HatchEi
#           user_creature::CCreatureMgr::Hatch(int)
# range [0x08339fa0, 0x0833a459]
08339fa0 +0x000:  push   %ebp
08339fa1 +0x001:  mov    %esp,%ebp
08339fa3 +0x003:  push   %esi
08339fa4 +0x004:  push   %ebx
08339fa5 +0x005:  sub    $0x70,%esp
08339fa8 +0x008:  movl   $0x0,-0x1c(%ebp)
08339faf +0x00f:  mov    0x8(%ebp),%eax
08339fb2 +0x012:  mov    0x1c(%eax),%eax
08339fb5 +0x015:  movl   $0x69,0xc(%esp)
08339fbd +0x01d:  movl   $0x1,0x8(%esp)
08339fc5 +0x025:  mov    %eax,0x4(%esp)
08339fc9 +0x029:  lea    -0x60(%ebp),%eax
08339fcc +0x02c:  mov    %eax,(%esp)
08339fcf +0x02f:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
08339fd4 +0x034:  mov    0x8(%ebp),%edx
08339fd7 +0x037:  lea    -0x34(%ebp),%eax
08339fda +0x03a:  lea    0xc(%ebp),%ecx
08339fdd +0x03d:  mov    %ecx,0x8(%esp)
08339fe1 +0x041:  mov    %edx,0x4(%esp)
08339fe5 +0x045:  mov    %eax,(%esp)
08339fe8 +0x048:  call   08342984 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4a51>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4a51
08339fed +0x04d:  sub    $0x4,%esp
08339ff0 +0x050:  mov    0x8(%ebp),%edx
08339ff3 +0x053:  lea    -0x30(%ebp),%eax
08339ff6 +0x056:  mov    %edx,0x4(%esp)
08339ffa +0x05a:  mov    %eax,(%esp)
08339ffd +0x05d:  call   083429b0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4a7d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4a7d
0833a002 +0x062:  sub    $0x4,%esp
0833a005 +0x065:  lea    -0x30(%ebp),%eax
0833a008 +0x068:  mov    %eax,0x4(%esp)
0833a00c +0x06c:  lea    -0x34(%ebp),%eax
0833a00f +0x06f:  mov    %eax,(%esp)
0833a012 +0x072:  call   083429d6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4aa3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4aa3
0833a017 +0x077:  test   %al,%al
0833a019 +0x079:  je     0833a038 <+0x98>
0833a01b +0x07b:  movl   $0x15,0x4(%esp)
0833a023 +0x083:  lea    -0x60(%ebp),%eax
0833a026 +0x086:  mov    %eax,(%esp)
0833a029 +0x089:  call   08340538 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2605>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2605
0833a02e +0x08e:  mov    $0x0,%ebx
0833a033 +0x093:  jmp    0833a443 <+0x4a3>
0833a038 +0x098:  lea    -0x34(%ebp),%eax
0833a03b +0x09b:  mov    %eax,(%esp)
0833a03e +0x09e:  call   083429ea <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ab7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ab7
0833a043 +0x0a3:  mov    0x4(%eax),%eax
0833a046 +0x0a6:  mov    %eax,-0x18(%ebp)
0833a049 +0x0a9:  mov    -0x18(%ebp),%eax
0833a04c +0x0ac:  mov    %eax,(%esp)
0833a04f +0x0af:  call   0833ef98 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1065>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1065
0833a054 +0x0b4:  test   %eax,%eax
0833a056 +0x0b6:  setne  %al
0833a059 +0x0b9:  test   %al,%al
0833a05b +0x0bb:  je     0833a07a <+0xda>
0833a05d +0x0bd:  movl   $0x17,0x4(%esp)
0833a065 +0x0c5:  lea    -0x60(%ebp),%eax
0833a068 +0x0c8:  mov    %eax,(%esp)
0833a06b +0x0cb:  call   08340538 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2605>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2605
0833a070 +0x0d0:  mov    $0x0,%ebx
0833a075 +0x0d5:  jmp    0833a443 <+0x4a3>
0833a07a +0x0da:  lea    -0x38(%ebp),%eax
0833a07d +0x0dd:  mov    %eax,0x4(%esp)
0833a081 +0x0e1:  mov    -0x18(%ebp),%eax
0833a084 +0x0e4:  mov    %eax,(%esp)
0833a087 +0x0e7:  call   0833912a <_ZN13user_creature4CEgg5HatchEPi>  ; user_creature::CEgg::Hatch(int*)
0833a08c +0x0ec:  xor    $0x1,%eax
0833a08f +0x0ef:  test   %al,%al
0833a091 +0x0f1:  je     0833a0b0 <+0x110>
0833a093 +0x0f3:  movl   $0x11,0x4(%esp)
0833a09b +0x0fb:  lea    -0x60(%ebp),%eax
0833a09e +0x0fe:  mov    %eax,(%esp)
0833a0a1 +0x101:  call   08340538 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2605>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2605
0833a0a6 +0x106:  mov    $0x0,%ebx
0833a0ab +0x10b:  jmp    0833a443 <+0x4a3>
0833a0b0 +0x110:  call   0833f715 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x17e2>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x17e2
0833a0b5 +0x115:  movl   $0x1,0x4(%esp)
0833a0bd +0x11d:  mov    %eax,(%esp)
0833a0c0 +0x120:  call   0833f57c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1649>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1649
0833a0c5 +0x125:  mov    %eax,-0x1c(%ebp)
0833a0c8 +0x128:  cmpl   $0x0,-0x1c(%ebp)
0833a0cc +0x12c:  jne    0833a0eb <+0x14b>
0833a0ce +0x12e:  movl   $0x16,0x4(%esp)
0833a0d6 +0x136:  lea    -0x60(%ebp),%eax
0833a0d9 +0x139:  mov    %eax,(%esp)
0833a0dc +0x13c:  call   08340538 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2605>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2605
0833a0e1 +0x141:  mov    $0x0,%ebx
0833a0e6 +0x146:  jmp    0833a443 <+0x4a3>
0833a0eb +0x14b:  mov    -0x18(%ebp),%edx
0833a0ee +0x14e:  mov    -0x1c(%ebp),%eax
0833a0f1 +0x151:  mov    %edx,0x4(%esp)
0833a0f5 +0x155:  mov    %eax,(%esp)
0833a0f8 +0x158:  call   0833ef20 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xfed>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xfed
0833a0fd +0x15d:  mov    -0x38(%ebp),%eax
0833a100 +0x160:  mov    %eax,0x4(%esp)
0833a104 +0x164:  mov    -0x1c(%ebp),%eax
0833a107 +0x167:  mov    %eax,(%esp)
0833a10a +0x16a:  call   083375ae <_ZN13user_creature9CCreature9SetItemIdEi>  ; user_creature::CCreature::SetItemId(int)
0833a10f +0x16f:  mov    -0x1c(%ebp),%eax
0833a112 +0x172:  movl   $0x1,0x4(%esp)
0833a11a +0x17a:  mov    %eax,(%esp)
0833a11d +0x17d:  call   0833efe2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x10af>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x10af
0833a122 +0x182:  movl   $0x64,0x4(%esp)
0833a12a +0x18a:  mov    -0x1c(%ebp),%eax
0833a12d +0x18d:  mov    %eax,(%esp)
0833a130 +0x190:  call   0833f070 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x113d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x113d
0833a135 +0x195:  mov    -0x38(%ebp),%ebx
0833a138 +0x198:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0833a13d +0x19d:  mov    %ebx,0x4(%esp)
0833a141 +0x1a1:  mov    %eax,(%esp)
0833a144 +0x1a4:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0833a149 +0x1a9:  mov    %eax,-0x14(%ebp)
0833a14c +0x1ac:  movl   $0x0,-0x10(%ebp)
0833a153 +0x1b3:  mov    -0x14(%ebp),%eax
0833a156 +0x1b6:  mov    %eax,(%esp)
0833a159 +0x1b9:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0833a15e +0x1be:  test   %eax,%eax
0833a160 +0x1c0:  jne    0833a178 <+0x1d8>
0833a162 +0x1c2:  mov    -0x14(%ebp),%eax
0833a165 +0x1c5:  mov    %eax,(%esp)
0833a168 +0x1c8:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0833a16d +0x1cd:  test   %eax,%eax
0833a16f +0x1cf:  je     0833a178 <+0x1d8>
0833a171 +0x1d1:  mov    $0x1,%eax
0833a176 +0x1d6:  jmp    0833a17d <+0x1dd>
0833a178 +0x1d8:  mov    $0x0,%eax
0833a17d +0x1dd:  test   %al,%al
0833a17f +0x1df:  je     0833a19e <+0x1fe>
0833a181 +0x1e1:  mov    -0x14(%ebp),%eax
0833a184 +0x1e4:  mov    %eax,(%esp)
0833a187 +0x1e7:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0833a18c +0x1ec:  mov    %eax,%ebx
0833a18e +0x1ee:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
0833a193 +0x1f3:  mov    %ebx,%edx
0833a195 +0x1f5:  sub    %eax,%edx
0833a197 +0x1f7:  mov    %edx,%eax
0833a199 +0x1f9:  mov    %eax,-0x10(%ebp)
0833a19c +0x1fc:  jmp    0833a1bc <+0x21c>
0833a19e +0x1fe:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
0833a1a3 +0x203:  mov    %eax,%ebx
0833a1a5 +0x205:  mov    -0x14(%ebp),%eax
0833a1a8 +0x208:  mov    %eax,(%esp)
0833a1ab +0x20b:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0833a1b0 +0x210:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
0833a1b6 +0x216:  lea    (%ebx,%eax,1),%eax
0833a1b9 +0x219:  mov    %eax,-0x10(%ebp)
0833a1bc +0x21c:  mov    -0x14(%ebp),%eax
0833a1bf +0x21f:  mov    %eax,(%esp)
0833a1c2 +0x222:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0833a1c7 +0x227:  test   %eax,%eax
0833a1c9 +0x229:  jne    0833a1e1 <+0x241>
0833a1cb +0x22b:  mov    -0x14(%ebp),%eax
0833a1ce +0x22e:  mov    %eax,(%esp)
0833a1d1 +0x231:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0833a1d6 +0x236:  test   %eax,%eax
0833a1d8 +0x238:  jne    0833a1e1 <+0x241>
0833a1da +0x23a:  mov    $0x1,%eax
0833a1df +0x23f:  jmp    0833a1e6 <+0x246>
0833a1e1 +0x241:  mov    $0x0,%eax
0833a1e6 +0x246:  test   %al,%al
0833a1e8 +0x248:  je     0833a1f1 <+0x251>
0833a1ea +0x24a:  movl   $0x0,-0x10(%ebp)
0833a1f1 +0x251:  mov    -0x1c(%ebp),%eax
0833a1f4 +0x254:  mov    -0x10(%ebp),%edx
0833a1f7 +0x257:  mov    %edx,0x4(%esp)
0833a1fb +0x25b:  mov    %eax,(%esp)
0833a1fe +0x25e:  call   0833effc <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x10c9>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x10c9
0833a203 +0x263:  mov    -0x18(%ebp),%eax
0833a206 +0x266:  mov    %eax,(%esp)
0833a209 +0x269:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
0833a20e +0x26e:  mov    %eax,0x4(%esp)
0833a212 +0x272:  mov    0x8(%ebp),%eax
0833a215 +0x275:  mov    %eax,(%esp)
0833a218 +0x278:  call   0833a854 <_ZN13user_creature12CCreatureMgr22UnregisterCreatureItemEi>  ; user_creature::CCreatureMgr::UnregisterCreatureItem(int)
0833a21d +0x27d:  mov    -0x1c(%ebp),%eax
0833a220 +0x280:  mov    %eax,(%esp)
0833a223 +0x283:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
0833a228 +0x288:  mov    -0x1c(%ebp),%edx
0833a22b +0x28b:  mov    %eax,0x8(%esp)
0833a22f +0x28f:  mov    %edx,0x4(%esp)
0833a233 +0x293:  mov    0x8(%ebp),%eax
0833a236 +0x296:  mov    %eax,(%esp)
0833a239 +0x299:  call   0833a77e <_ZN13user_creature12CCreatureMgr20RegisterCreatureItemEPNS_13CCreatureItemEi>  ; user_creature::CCreatureMgr::RegisterCreatureItem(user_creature::CCreatureItem*, int)
0833a23e +0x29e:  movl   $0x0,-0xc(%ebp)
0833a245 +0x2a5:  mov    -0x1c(%ebp),%eax
0833a248 +0x2a8:  mov    %eax,(%esp)
0833a24b +0x2ab:  call   0833efca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1097>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1097
0833a250 +0x2b0:  mov    %eax,%ebx
0833a252 +0x2b2:  mov    0x8(%ebp),%eax
0833a255 +0x2b5:  mov    0x1c(%eax),%eax
0833a258 +0x2b8:  mov    %eax,(%esp)
0833a25b +0x2bb:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0833a260 +0x2c0:  mov    %ebx,0x8(%esp)
0833a264 +0x2c4:  movl   $0x3,0x4(%esp)
0833a26c +0x2cc:  mov    %eax,(%esp)
0833a26f +0x2cf:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0833a274 +0x2d4:  mov    %eax,-0xc(%ebp)
0833a277 +0x2d7:  mov    -0xc(%ebp),%eax
0833a27a +0x2da:  movb   $0x0,(%eax)
0833a27d +0x2dd:  mov    -0x1c(%ebp),%eax
0833a280 +0x2e0:  mov    %eax,(%esp)
0833a283 +0x2e3:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833a288 +0x2e8:  mov    %eax,%edx
0833a28a +0x2ea:  mov    -0xc(%ebp),%eax
0833a28d +0x2ed:  mov    %edx,0x2(%eax)
0833a290 +0x2f0:  mov    0x8(%ebp),%eax
0833a293 +0x2f3:  mov    0x1c(%eax),%eax
0833a296 +0x2f6:  mov    %eax,0x8(%esp)
0833a29a +0x2fa:  movl   $0x8a,0x4(%esp)
0833a2a2 +0x302:  lea    -0x40(%ebp),%eax
0833a2a5 +0x305:  mov    %eax,(%esp)
0833a2a8 +0x308:  call   0833f8ae <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x197b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x197b
0833a2ad +0x30d:  mov    -0x1c(%ebp),%eax
0833a2b0 +0x310:  mov    %eax,(%esp)
0833a2b3 +0x313:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833a2b8 +0x318:  mov    %eax,%ebx
0833a2ba +0x31a:  mov    -0x1c(%ebp),%eax
0833a2bd +0x31d:  mov    %eax,(%esp)
0833a2c0 +0x320:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
0833a2c5 +0x325:  mov    %ebx,0xc(%esp)
0833a2c9 +0x329:  movl   $0x1,0x8(%esp)
0833a2d1 +0x331:  mov    %eax,0x4(%esp)
0833a2d5 +0x335:  lea    -0x40(%ebp),%eax
0833a2d8 +0x338:  mov    %eax,(%esp)
0833a2db +0x33b:  call   0833fcc2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1d8f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1d8f
0833a2e0 +0x340:  xor    $0x1,%eax
0833a2e3 +0x343:  test   %al,%al
0833a2e5 +0x345:  je     0833a34f <+0x3af>
0833a2e7 +0x347:  mov    0x8(%ebp),%eax
0833a2ea +0x34a:  mov    0x1c(%eax),%eax
0833a2ed +0x34d:  mov    %eax,(%esp)
0833a2f0 +0x350:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833a2f5 +0x355:  movzwl %ax,%ebx
0833a2f8 +0x358:  movl   $0x5,0xc(%esp)
0833a300 +0x360:  movl   $0xb1a,0x8(%esp)
0833a308 +0x368:  movl   $&_ZZN13user_creature12CCreatureMgr5HatchEiE19__PRETTY_FUNCTION__,0x4(%esp)
0833a310 +0x370:  lea    -0x2c(%ebp),%eax
0833a313 +0x373:  mov    %eax,(%esp)
0833a316 +0x376:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833a31b +0x37b:  mov    %ebx,0x8(%esp)
0833a31f +0x37f:  movl   $"cannot write db uid(%d)\n",0x4(%esp)
0833a327 +0x387:  lea    -0x2c(%ebp),%eax
0833a32a +0x38a:  mov    %eax,(%esp)
0833a32d +0x38d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833a332 +0x392:  movl   $0x2,0x4(%esp)
0833a33a +0x39a:  lea    -0x60(%ebp),%eax
0833a33d +0x39d:  mov    %eax,(%esp)
0833a340 +0x3a0:  call   08340538 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2605>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2605
0833a345 +0x3a5:  mov    $0x0,%ebx
0833a34a +0x3aa:  jmp    0833a41b <+0x47b>
0833a34f +0x3af:  mov    -0x1c(%ebp),%eax
0833a352 +0x3b2:  mov    %eax,(%esp)
0833a355 +0x3b5:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
0833a35a +0x3ba:  mov    %eax,%ebx
0833a35c +0x3bc:  mov    -0x1c(%ebp),%eax
0833a35f +0x3bf:  mov    %eax,(%esp)
0833a362 +0x3c2:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833a367 +0x3c7:  mov    0x8(%ebp),%edx
0833a36a +0x3ca:  mov    0x1c(%edx),%edx
0833a36d +0x3cd:  mov    %ebx,0xc(%esp)
0833a371 +0x3d1:  mov    %eax,0x8(%esp)
0833a375 +0x3d5:  movl   $"Hatch,%d,%d",0x4(%esp)
0833a37d +0x3dd:  mov    %edx,(%esp)
0833a380 +0x3e0:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0833a385 +0x3e5:  lea    -0x40(%ebp),%eax
0833a388 +0x3e8:  mov    %eax,(%esp)
0833a38b +0x3eb:  call   0833f950 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1a1d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1a1d
0833a390 +0x3f0:  lea    -0x60(%ebp),%eax
0833a393 +0x3f3:  mov    %eax,(%esp)
0833a396 +0x3f6:  call   083405a2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x266f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x266f
0833a39b +0x3fb:  lea    -0x60(%ebp),%eax
0833a39e +0x3fe:  mov    %eax,(%esp)
0833a3a1 +0x401:  call   083403e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x24ad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x24ad
0833a3a6 +0x406:  mov    -0x1c(%ebp),%eax
0833a3a9 +0x409:  mov    %eax,(%esp)
0833a3ac +0x40c:  call   0833efca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1097>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1097
0833a3b1 +0x411:  mov    0x8(%ebp),%edx
0833a3b4 +0x414:  mov    %eax,0x8(%esp)
0833a3b8 +0x418:  mov    %edx,0x4(%esp)
0833a3bc +0x41c:  lea    -0x60(%ebp),%eax
0833a3bf +0x41f:  mov    %eax,(%esp)
0833a3c2 +0x422:  call   083409e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2aad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2aad
0833a3c7 +0x427:  lea    -0x60(%ebp),%eax
0833a3ca +0x42a:  mov    %eax,(%esp)
0833a3cd +0x42d:  call   083403e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x24ad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x24ad
0833a3d2 +0x432:  mov    -0x1c(%ebp),%eax
0833a3d5 +0x435:  mov    %eax,(%esp)
0833a3d8 +0x438:  call   0833efca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1097>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1097
0833a3dd +0x43d:  mov    0x8(%ebp),%edx
0833a3e0 +0x440:  mov    0x1c(%edx),%edx
0833a3e3 +0x443:  mov    %eax,0xc(%esp)
0833a3e7 +0x447:  movl   $0x7,0x8(%esp)
0833a3ef +0x44f:  movl   $0x1,0x4(%esp)
0833a3f7 +0x457:  mov    %edx,(%esp)
0833a3fa +0x45a:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0833a3ff +0x45f:  mov    $0x1,%ebx
0833a404 +0x464:  jmp    0833a41b <+0x47b>
0833a406 +0x466:  mov    %edx,%ebx
0833a408 +0x468:  mov    %eax,%esi
0833a40a +0x46a:  lea    -0x40(%ebp),%eax
0833a40d +0x46d:  mov    %eax,(%esp)
0833a410 +0x470:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833a415 +0x475:  mov    %esi,%eax
0833a417 +0x477:  mov    %ebx,%edx
0833a419 +0x479:  jmp    0833a428 <+0x488>
0833a41b +0x47b:  lea    -0x40(%ebp),%eax
0833a41e +0x47e:  mov    %eax,(%esp)
0833a421 +0x481:  call   0833f8d8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x19a5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x19a5
0833a426 +0x486:  jmp    0833a443 <+0x4a3>
0833a428 +0x488:  mov    %edx,%ebx
0833a42a +0x48a:  mov    %eax,%esi
0833a42c +0x48c:  lea    -0x60(%ebp),%eax
0833a42f +0x48f:  mov    %eax,(%esp)
0833a432 +0x492:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833a437 +0x497:  mov    %esi,%eax
0833a439 +0x499:  mov    %ebx,%edx
0833a43b +0x49b:  mov    %eax,(%esp)
0833a43e +0x49e:  call   08ae3750 <_Unwind_Resume>
0833a443 +0x4a3:  lea    -0x60(%ebp),%eax
0833a446 +0x4a6:  mov    %eax,(%esp)
0833a449 +0x4a9:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833a44e +0x4ae:  mov    %ebx,%eax
0833a450 +0x4b0:  lea    -0x8(%ebp),%esp
0833a453 +0x4b3:  add    $0x0,%esp
0833a456 +0x4b6:  pop    %ebx
0833a457 +0x4b7:  pop    %esi
0833a458 +0x4b8:  pop    %ebp
0833a459 +0x4b9:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::Hatch @ 0x8339fa0

/* user_creature::CCreatureMgr::Hatch(int) */

bool user_creature::CCreatureMgr::Hatch(int param_1)

{
  char cVar1;
  int iVar2;
  CCreatureItemFactory *pCVar3;
  CDataManager *this;
  CInventory *this_00;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  CPacketRespondent local_64 [32];
  CDBMsgSender local_44 [8];
  int local_3c;
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_38 [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_34 [4];
  cMyTrace local_30 [16];
  CCreatureItem *local_20;
  CEgg *local_1c;
  CItem *local_18;
  int local_14;
  undefined1 *local_10;
  
  local_20 = (CCreatureItem *)0x0;
  CPacketRespondent::CPacketRespondent(local_64,*(CUser **)(param_1 + 0x1c),1,0x69);
                    /* try { // try from 08339fe8 to 0833a2ac has its CatchHandler @ 0833a428 */
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::find((int *)local_38);
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::end(local_34);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator==
                    (local_38,(_Rb_tree_iterator *)local_34);
  if (cVar1 != '\0') {
    CPacketRespondent::SetError(local_64,0x15);
    bVar8 = false;
    goto LAB_0833a443;
  }
  iVar2 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator->
                    (local_38);
  local_1c = *(CEgg **)(iVar2 + 4);
  iVar2 = CCreatureItem::GetCreatureItemType((CCreatureItem *)local_1c);
  if (iVar2 != 0) {
    CPacketRespondent::SetError(local_64,0x17);
    bVar8 = false;
    goto LAB_0833a443;
  }
  cVar1 = CEgg::Hatch(local_1c,&local_3c);
  if (cVar1 != '\x01') {
    CPacketRespondent::SetError(local_64,0x11);
    bVar8 = false;
    goto LAB_0833a443;
  }
  pCVar3 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
  local_20 = (CCreatureItem *)CCreatureItemFactory::AcquireCreatureItem(pCVar3,1);
  if (local_20 == (CCreatureItem *)0x0) {
    CPacketRespondent::SetError(local_64,0x16);
    bVar8 = false;
    goto LAB_0833a443;
  }
  CCreatureItem::Set(local_20,(CCreatureItem *)local_1c);
  CCreature::SetItemId((CCreature *)local_20,local_3c);
  CCreatureItem::SetCreatureItemType(local_20,1);
  CCreature::SetStomach((CCreature *)local_20,100);
  this = (CDataManager *)G_CDataManager();
  local_18 = (CItem *)CDataManager::find_item(this,local_3c);
  local_14 = 0;
  iVar2 = CItem::getUsablePeriod(local_18);
  if (iVar2 == 0) {
    iVar2 = CItem::getExpirationDate(local_18);
    if (iVar2 == 0) goto LAB_0833a178;
    bVar8 = true;
  }
  else {
LAB_0833a178:
    bVar8 = false;
  }
  if (bVar8) {
    iVar2 = CItem::getExpirationDate(local_18);
    local_14 = OS_API::GetDateTimeTick();
    local_14 = iVar2 - local_14;
  }
  else {
    iVar2 = OS_API::GetDateTimeTick();
    iVar5 = CItem::getUsablePeriod(local_18);
    local_14 = iVar2 + iVar5 * 0x15180;
  }
  iVar2 = CItem::getUsablePeriod(local_18);
  if (iVar2 == 0) {
    iVar2 = CItem::getExpirationDate(local_18);
    if (iVar2 != 0) goto LAB_0833a1e1;
    bVar8 = true;
  }
  else {
LAB_0833a1e1:
    bVar8 = false;
  }
  if (bVar8) {
    local_14 = 0;
  }
  CCreatureItem::SetExpireTime(local_20,local_14);
  iVar2 = CCreatureItem::GetUid((CCreatureItem *)local_1c);
  UnregisterCreatureItem((CCreatureMgr *)param_1,iVar2);
  iVar2 = CCreatureItem::GetUid(local_20);
  RegisterCreatureItem((CCreatureMgr *)param_1,local_20,iVar2);
  local_10 = (undefined1 *)0x0;
  iVar2 = CCreatureItem::GetSlotNo(local_20);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(param_1 + 0x1c))
  ;
  local_10 = (undefined1 *)CInventory::GetInvenRef(this_00,3,iVar2);
  *local_10 = 0;
  uVar4 = CCreatureItem::GetItemId(local_20);
  *(undefined4 *)(local_10 + 2) = uVar4;
  CDBMsgSender::CDBMsgSender(local_44,0x8a,*(undefined4 *)(param_1 + 0x1c));
  iVar2 = CCreatureItem::GetItemId(local_20);
  iVar5 = CCreatureItem::GetUid(local_20);
                    /* try { // try from 0833a2db to 0833a3fe has its CatchHandler @ 0833a406 */
  cVar1 = CDBMsgSender::HatchCreature(local_44,iVar5,1,iVar2);
  bVar8 = cVar1 == '\x01';
  if (bVar8) {
    uVar4 = CCreatureItem::GetUid(local_20);
    uVar7 = CCreatureItem::GetItemId(local_20);
    CUser::LogHistory(*(CUser **)(param_1 + 0x1c),"Hatch,%d,%d",uVar7,uVar4);
    CDBMsgSender::Send(local_44);
    CPacketRespondent::SetOk(local_64);
    CPacketRespondent::Send(local_64);
    iVar2 = CCreatureItem::GetSlotNo(local_20);
    CPacketRespondent::MakeNotipacketCreatureItemList(local_64,(map *)param_1,iVar2);
    CPacketRespondent::Send(local_64);
    uVar4 = CCreatureItem::GetSlotNo(local_20);
    CUser::SendUpdateItemList(*(CUser **)(param_1 + 0x1c),1,7,uVar4);
  }
  else {
    uVar6 = CUser::get_unique_id(*(CUser **)(param_1 + 0x1c));
    cMyTrace::cMyTrace(local_30,"bool user_creature::CCreatureMgr::Hatch(int)",0xb1a,5);
    cMyTrace::operator()(local_30,"cannot write db uid(%d)\n",uVar6 & 0xffff);
    CPacketRespondent::SetError(local_64,2);
  }
                    /* try { // try from 0833a421 to 0833a425 has its CatchHandler @ 0833a428 */
  CDBMsgSender::~CDBMsgSender(local_44);
LAB_0833a443:
  CPacketRespondent::~CPacketRespondent(local_64);
  return bVar8;
}
```
