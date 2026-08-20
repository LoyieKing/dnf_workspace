# _ProcCompoundCore

`_ZN5CUser17_ProcCompoundCoreERKSt6vectorISt4pairIiiESaIS2_EERS4_RS0_IiSaIiEEibP11PacketGuardRbt16stEquipConditionP14CStackableItemR10Inven_Item`

`CUser::_ProcCompoundCore(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&, int, bool, PacketGuard*, bool&, unsigned short, stEquipCondition, CStackableItem*, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08671102` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08671102  _ZN5CUser17_ProcCompoundCoreERKSt6vectorISt4pairIiiESaIS2_EERS4_RS0_IiSaIiEEibP11PacketGuardRbt16stEquipConditionP14CStackableItemR10Inven_Item
#           CUser::_ProcCompoundCore(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&, int, bool, PacketGuard*, bool&, unsigned short, stEquipCondition, CStackableItem*, Inven_Item&)
# range [0x08671102, 0x08671eb1]
08671102 +0x000:  push   %ebp
08671103 +0x001:  mov    %esp,%ebp
08671105 +0x003:  push   %esi
08671106 +0x004:  push   %ebx
08671107 +0x005:  sub    $0x150,%esp
0867110d +0x00b:  mov    0x1c(%ebp),%edx
08671110 +0x00e:  mov    0x28(%ebp),%eax
08671113 +0x011:  mov    %dl,-0xfc(%ebp)
08671119 +0x017:  mov    %ax,-0x100(%ebp)
08671120 +0x01e:  lea    -0x8c(%ebp),%eax
08671126 +0x024:  mov    %eax,(%esp)
08671129 +0x027:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0867112e +0x02c:  lea    -0x98(%ebp),%eax
08671134 +0x032:  mov    %eax,(%esp)
08671137 +0x035:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0867113c +0x03a:  lea    -0x9c(%ebp),%eax
08671142 +0x040:  mov    %eax,(%esp)
08671145 +0x043:  call   0817f232 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x463>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x463
0867114a +0x048:  movzbl -0xfc(%ebp),%ebx
08671151 +0x04f:  mov    0x8(%ebp),%eax
08671154 +0x052:  mov    %eax,(%esp)
08671157 +0x055:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0867115c +0x05a:  mov    %ebx,0x18(%esp)
08671160 +0x05e:  movl   $0x8,0x14(%esp)
08671168 +0x066:  movl   $0xc,0x10(%esp)
08671170 +0x06e:  mov    0x24(%ebp),%edx
08671173 +0x071:  mov    %edx,0xc(%esp)
08671177 +0x075:  lea    -0x8c(%ebp),%edx
0867117d +0x07b:  mov    %edx,0x8(%esp)
08671181 +0x07f:  mov    0xc(%ebp),%edx
08671184 +0x082:  mov    %edx,0x4(%esp)
08671188 +0x086:  mov    %eax,(%esp)
0867118b +0x089:  call   08505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>  ; CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)
08671190 +0x08e:  mov    %eax,-0x2c(%ebp)
08671193 +0x091:  cmpl   $0x0,-0x2c(%ebp)
08671197 +0x095:  jne    08671202 <+0x100>
08671199 +0x097:  mov    0xc(%ebp),%eax
0867119c +0x09a:  mov    %eax,(%esp)
0867119f +0x09d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
086711a4 +0x0a2:  mov    %eax,%esi
086711a6 +0x0a4:  mov    0x8(%ebp),%eax
086711a9 +0x0a7:  mov    %eax,(%esp)
086711ac +0x0aa:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086711b1 +0x0af:  mov    %eax,%ebx
086711b3 +0x0b1:  movl   $0x5,0xc(%esp)
086711bb +0x0b9:  movl   $0x5c8b,0x8(%esp)
086711c3 +0x0c1:  movl   $&_ZZN5CUser17_ProcCompoundCoreERKSt6vectorISt4pairIiiESaIS2_EERS4_RS0_IiSaIiEEibP11PacketGuardRbt16stEquipConditionP14CStackableItemR10Inven_ItemE19__PRETTY_FUNCTION__,0x4(%esp)
086711cb +0x0c9:  lea    -0x80(%ebp),%eax
086711ce +0x0cc:  mov    %eax,(%esp)
086711d1 +0x0cf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086711d6 +0x0d4:  mov    %esi,0x10(%esp)
086711da +0x0d8:  mov    -0x2c(%ebp),%eax
086711dd +0x0db:  mov    %eax,0xc(%esp)
086711e1 +0x0df:  mov    %ebx,0x8(%esp)
086711e5 +0x0e3:  movl   $"CUser::compound_item, getCurCharacInvenR()->delete_event_items , size does not match! %d %d !=%d",0x4(%esp)
086711ed +0x0eb:  lea    -0x80(%ebp),%eax
086711f0 +0x0ee:  mov    %eax,(%esp)
086711f3 +0x0f1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086711f8 +0x0f6:  mov    $0x0,%ebx
086711fd +0x0fb:  jmp    08671e69 <+0xd67>
08671202 +0x100:  cmpb   $0x0,-0xfc(%ebp)
08671209 +0x107:  je     08671222 <+0x120>
0867120b +0x109:  mov    0x20(%ebp),%eax
0867120e +0x10c:  mov    -0x2c(%ebp),%edx
08671211 +0x10f:  mov    %edx,0x4(%esp)
08671215 +0x113:  mov    %eax,(%esp)
08671218 +0x116:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867121d +0x11b:  jmp    0867131b <+0x219>
08671222 +0x120:  movzwl -0x100(%ebp),%eax
08671229 +0x127:  mov    %eax,%edx
0867122b +0x129:  add    -0x2c(%ebp),%edx
0867122e +0x12c:  mov    0x20(%ebp),%eax
08671231 +0x12f:  mov    %edx,0x4(%esp)
08671235 +0x133:  mov    %eax,(%esp)
08671238 +0x136:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867123d +0x13b:  movzwl -0x100(%ebp),%ebx
08671244 +0x142:  mov    0x8(%ebp),%eax
08671247 +0x145:  mov    %eax,(%esp)
0867124a +0x148:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0867124f +0x14d:  movl   $0x1,0x14(%esp)
08671257 +0x155:  movl   $0x8,0x10(%esp)
0867125f +0x15d:  mov    %ebx,0xc(%esp)
08671263 +0x161:  mov    0x18(%ebp),%edx
08671266 +0x164:  mov    %edx,0x8(%esp)
0867126a +0x168:  movl   $0x1,0x4(%esp)
08671272 +0x170:  mov    %eax,(%esp)
08671275 +0x173:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0867127a +0x178:  mov    %al,-0x1d(%ebp)
0867127d +0x17b:  movzbl -0x1d(%ebp),%eax
08671281 +0x17f:  xor    $0x1,%eax
08671284 +0x182:  test   %al,%al
08671286 +0x184:  je     086712e0 <+0x1de>
08671288 +0x186:  mov    0x8(%ebp),%eax
0867128b +0x189:  mov    %eax,(%esp)
0867128e +0x18c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08671293 +0x191:  mov    %eax,%ebx
08671295 +0x193:  movl   $0x5,0xc(%esp)
0867129d +0x19b:  movl   $0x5c9a,0x8(%esp)
086712a5 +0x1a3:  movl   $&_ZZN5CUser17_ProcCompoundCoreERKSt6vectorISt4pairIiiESaIS2_EERS4_RS0_IiSaIiEEibP11PacketGuardRbt16stEquipConditionP14CStackableItemR10Inven_ItemE19__PRETTY_FUNCTION__,0x4(%esp)
086712ad +0x1ab:  lea    -0x70(%ebp),%eax
086712b0 +0x1ae:  mov    %eax,(%esp)
086712b3 +0x1b1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086712b8 +0x1b6:  mov    0x18(%ebp),%eax
086712bb +0x1b9:  mov    %eax,0xc(%esp)
086712bf +0x1bd:  mov    %ebx,0x8(%esp)
086712c3 +0x1c1:  movl   $"CUser::compound_item, getCurCharacInvenW()->delete_item failed , %d %d",0x4(%esp)
086712cb +0x1c9:  lea    -0x70(%ebp),%eax
086712ce +0x1cc:  mov    %eax,(%esp)
086712d1 +0x1cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086712d6 +0x1d4:  mov    $0x0,%ebx
086712db +0x1d9:  jmp    08671e69 <+0xd67>
086712e0 +0x1de:  mov    0x20(%ebp),%eax
086712e3 +0x1e1:  movl   $0x0,0x4(%esp)
086712eb +0x1e9:  mov    %eax,(%esp)
086712ee +0x1ec:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086712f3 +0x1f1:  mov    0x20(%ebp),%eax
086712f6 +0x1f4:  mov    0x18(%ebp),%edx
086712f9 +0x1f7:  mov    %edx,0x4(%esp)
086712fd +0x1fb:  mov    %eax,(%esp)
08671300 +0x1fe:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08671305 +0x203:  movzwl -0x100(%ebp),%edx
0867130c +0x20a:  mov    0x20(%ebp),%eax
0867130f +0x20d:  mov    %edx,0x4(%esp)
08671313 +0x211:  mov    %eax,(%esp)
08671316 +0x214:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867131b +0x219:  cmpl   $0x0,-0x2c(%ebp)
0867131f +0x21d:  jle    08671443 <+0x341>
08671325 +0x223:  lea    -0x104(%ebp),%eax
0867132b +0x229:  lea    -0x8c(%ebp),%edx
08671331 +0x22f:  mov    %edx,0x4(%esp)
08671335 +0x233:  mov    %eax,(%esp)
08671338 +0x236:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0867133d +0x23b:  sub    $0x4,%esp
08671340 +0x23e:  mov    -0x104(%ebp),%eax
08671346 +0x244:  mov    %eax,-0x9c(%ebp)
0867134c +0x24a:  jmp    0867140e <+0x30c>
08671351 +0x24f:  lea    -0x9c(%ebp),%eax
08671357 +0x255:  mov    %eax,(%esp)
0867135a +0x258:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0867135f +0x25d:  mov    (%eax),%edx
08671361 +0x25f:  mov    0x20(%ebp),%eax
08671364 +0x262:  mov    %edx,0x4(%esp)
08671368 +0x266:  mov    %eax,(%esp)
0867136b +0x269:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08671370 +0x26e:  lea    -0x5c(%ebp),%eax
08671373 +0x271:  movl   $0x0,0x8(%esp)
0867137b +0x279:  lea    -0x9c(%ebp),%edx
08671381 +0x27f:  mov    %edx,0x4(%esp)
08671385 +0x283:  mov    %eax,(%esp)
08671388 +0x286:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0867138d +0x28b:  sub    $0x4,%esp
08671390 +0x28e:  lea    -0x9c(%ebp),%eax
08671396 +0x294:  mov    %eax,(%esp)
08671399 +0x297:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0867139e +0x29c:  mov    (%eax),%edx
086713a0 +0x29e:  mov    0x20(%ebp),%eax
086713a3 +0x2a1:  mov    %edx,0x4(%esp)
086713a7 +0x2a5:  mov    %eax,(%esp)
086713aa +0x2a8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086713af +0x2ad:  lea    -0x58(%ebp),%eax
086713b2 +0x2b0:  movl   $0x0,0x8(%esp)
086713ba +0x2b8:  lea    -0x9c(%ebp),%edx
086713c0 +0x2be:  mov    %edx,0x4(%esp)
086713c4 +0x2c2:  mov    %eax,(%esp)
086713c7 +0x2c5:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
086713cc +0x2ca:  sub    $0x4,%esp
086713cf +0x2cd:  lea    -0x9c(%ebp),%eax
086713d5 +0x2d3:  mov    %eax,(%esp)
086713d8 +0x2d6:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
086713dd +0x2db:  mov    (%eax),%edx
086713df +0x2dd:  mov    0x20(%ebp),%eax
086713e2 +0x2e0:  mov    %edx,0x4(%esp)
086713e6 +0x2e4:  mov    %eax,(%esp)
086713e9 +0x2e7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086713ee +0x2ec:  lea    -0x54(%ebp),%eax
086713f1 +0x2ef:  movl   $0x0,0x8(%esp)
086713f9 +0x2f7:  lea    -0x9c(%ebp),%edx
086713ff +0x2fd:  mov    %edx,0x4(%esp)
08671403 +0x301:  mov    %eax,(%esp)
08671406 +0x304:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0867140b +0x309:  sub    $0x4,%esp
0867140e +0x30c:  lea    -0x60(%ebp),%eax
08671411 +0x30f:  lea    -0x8c(%ebp),%edx
08671417 +0x315:  mov    %edx,0x4(%esp)
0867141b +0x319:  mov    %eax,(%esp)
0867141e +0x31c:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08671423 +0x321:  sub    $0x4,%esp
08671426 +0x324:  lea    -0x60(%ebp),%eax
08671429 +0x327:  mov    %eax,0x4(%esp)
0867142d +0x32b:  lea    -0x9c(%ebp),%eax
08671433 +0x331:  mov    %eax,(%esp)
08671436 +0x334:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0867143b +0x339:  test   %al,%al
0867143d +0x33b:  jne    08671351 <+0x24f>
08671443 +0x341:  mov    0x34(%ebp),%eax
08671446 +0x344:  mov    0x1a8(%eax),%eax
0867144c +0x34a:  mov    %eax,0x4(%esp)
08671450 +0x34e:  mov    0x8(%ebp),%eax
08671453 +0x351:  mov    %eax,(%esp)
08671456 +0x354:  call   08671fde <_ZN5CUser17isSuccessCompoundEi>  ; CUser::isSuccessCompound(int)
0867145b +0x359:  mov    %al,-0x25(%ebp)
0867145e +0x35c:  movzbl -0x25(%ebp),%eax
08671462 +0x360:  xor    $0x1,%eax
08671465 +0x363:  test   %al,%al
08671467 +0x365:  je     086714ad <+0x3ab>
08671469 +0x367:  mov    0x34(%ebp),%eax
0867146c +0x36a:  lea    0x174(%eax),%edx
08671472 +0x370:  mov    0x10(%ebp),%eax
08671475 +0x373:  mov    %eax,0x4(%esp)
08671479 +0x377:  mov    %edx,(%esp)
0867147c +0x37a:  call   08693a78 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2cd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2cd
08671481 +0x37f:  mov    0x10(%ebp),%eax
08671484 +0x382:  mov    %eax,(%esp)
08671487 +0x385:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
0867148c +0x38a:  test   %al,%al
0867148e +0x38c:  je     086714ad <+0x3ab>
08671490 +0x38e:  mov    0x20(%ebp),%eax
08671493 +0x391:  movl   $0x0,0x4(%esp)
0867149b +0x399:  mov    %eax,(%esp)
0867149e +0x39c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086714a3 +0x3a1:  mov    $0x1,%ebx
086714a8 +0x3a6:  jmp    08671e69 <+0xd67>
086714ad +0x3ab:  mov    0x8(%ebp),%eax
086714b0 +0x3ae:  mov    %eax,(%esp)
086714b3 +0x3b1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086714b8 +0x3b6:  movl   $"",0x1c(%esp)
086714c0 +0x3be:  movl   $"",0x18(%esp)
086714c8 +0x3c6:  movl   $0x0,0x14(%esp)
086714d0 +0x3ce:  movl   $0x9,0x10(%esp)
086714d8 +0x3d6:  movl   $0x7,0xc(%esp)
086714e0 +0x3de:  lea    -0x98(%ebp),%edx
086714e6 +0x3e4:  mov    %edx,0x8(%esp)
086714ea +0x3e8:  mov    0x10(%ebp),%edx
086714ed +0x3eb:  mov    %edx,0x4(%esp)
086714f1 +0x3ef:  mov    %eax,(%esp)
086714f4 +0x3f2:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
086714f9 +0x3f7:  mov    %eax,-0x24(%ebp)
086714fc +0x3fa:  mov    0x20(%ebp),%eax
086714ff +0x3fd:  mov    -0x24(%ebp),%edx
08671502 +0x400:  mov    %edx,0x4(%esp)
08671506 +0x404:  mov    %eax,(%esp)
08671509 +0x407:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867150e +0x40c:  mov    -0x24(%ebp),%ebx
08671511 +0x40f:  mov    0x10(%ebp),%eax
08671514 +0x412:  mov    %eax,(%esp)
08671517 +0x415:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0867151c +0x41a:  cmp    %eax,%ebx
0867151e +0x41c:  sete   %al
08671521 +0x41f:  test   %al,%al
08671523 +0x421:  je     08671dfc <+0xcfa>
08671529 +0x427:  lea    -0x104(%ebp),%eax
0867152f +0x42d:  lea    -0x98(%ebp),%edx
08671535 +0x433:  mov    %edx,0x4(%esp)
08671539 +0x437:  mov    %eax,(%esp)
0867153c +0x43a:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08671541 +0x43f:  sub    $0x4,%esp
08671544 +0x442:  mov    -0x104(%ebp),%eax
0867154a +0x448:  mov    %eax,-0x9c(%ebp)
08671550 +0x44e:  jmp    08671dc5 <+0xcc3>
08671555 +0x453:  lea    -0x9c(%ebp),%eax
0867155b +0x459:  mov    %eax,(%esp)
0867155e +0x45c:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08671563 +0x461:  mov    (%eax),%eax
08671565 +0x463:  mov    %eax,-0xa0(%ebp)
0867156b +0x469:  mov    -0xa0(%ebp),%ebx
08671571 +0x46f:  mov    0x8(%ebp),%eax
08671574 +0x472:  mov    %eax,(%esp)
08671577 +0x475:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867157c +0x47a:  lea    -0xf1(%ebp),%edx
08671582 +0x480:  mov    %ebx,0xc(%esp)
08671586 +0x484:  movl   $0x1,0x8(%esp)
0867158e +0x48c:  mov    %eax,0x4(%esp)
08671592 +0x490:  mov    %edx,(%esp)
08671595 +0x493:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0867159a +0x498:  sub    $0x4,%esp
0867159d +0x49b:  movzbl -0xf0(%ebp),%eax
086715a4 +0x4a2:  cmp    $0x1,%al
086715a6 +0x4a4:  jne    08671bea <+0xae8>
086715ac +0x4aa:  mov    -0xef(%ebp),%eax
086715b2 +0x4b0:  mov    %eax,%ebx
086715b4 +0x4b2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086715b9 +0x4b7:  mov    %ebx,0x4(%esp)
086715bd +0x4bb:  mov    %eax,(%esp)
086715c0 +0x4be:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086715c5 +0x4c3:  mov    %eax,-0x10(%ebp)
086715c8 +0x4c6:  cmpl   $0x0,-0x10(%ebp)
086715cc +0x4ca:  je     08671bea <+0xae8>
086715d2 +0x4d0:  movzbl 0x2c(%ebp),%eax
086715d6 +0x4d4:  cmp    $0x1,%al
086715d8 +0x4d6:  jne    0867178c <+0x68a>
086715de +0x4dc:  cmpb   $0x0,-0x25(%ebp)
086715e2 +0x4e0:  je     08671697 <+0x595>
086715e8 +0x4e6:  mov    0x34(%ebp),%eax
086715eb +0x4e9:  mov    0x1b0(%eax),%eax
086715f1 +0x4ef:  cmp    $0x1,%eax
086715f4 +0x4f2:  jne    08671614 <+0x512>
086715f6 +0x4f4:  mov    0x38(%ebp),%eax
086715f9 +0x4f7:  mov    %eax,0x8(%esp)
086715fd +0x4fb:  lea    -0xf1(%ebp),%eax
08671603 +0x501:  mov    %eax,0x4(%esp)
08671607 +0x505:  mov    0x8(%ebp),%eax
0867160a +0x508:  mov    %eax,(%esp)
0867160d +0x50b:  call   08671eb2 <_ZN5CUser14copyItemOptionER10Inven_ItemS1_>  ; CUser::copyItemOption(Inven_Item&, Inven_Item&)
08671612 +0x510:  jmp    0867165e <+0x55c>
08671614 +0x512:  mov    -0x10(%ebp),%eax
08671617 +0x515:  mov    (%eax),%eax
08671619 +0x517:  add    $0xc,%eax
0867161c +0x51a:  mov    (%eax),%edx
0867161e +0x51c:  mov    -0x10(%ebp),%eax
08671621 +0x51f:  mov    %eax,(%esp)
08671624 +0x522:  call   *%edx
08671626 +0x524:  mov    -0xa0(%ebp),%edx
0867162c +0x52a:  mov    %eax,0x18(%esp)
08671630 +0x52e:  mov    0x34(%ebp),%eax
08671633 +0x531:  mov    %eax,0x14(%esp)
08671637 +0x535:  mov    %edx,0x10(%esp)
0867163b +0x539:  mov    0x2c(%ebp),%eax
0867163e +0x53c:  mov    0x30(%ebp),%edx
08671641 +0x53f:  mov    %eax,0x8(%esp)
08671645 +0x543:  mov    %edx,0xc(%esp)
08671649 +0x547:  lea    -0xf1(%ebp),%eax
0867164f +0x54d:  mov    %eax,0x4(%esp)
08671653 +0x551:  mov    0x8(%ebp),%eax
08671656 +0x554:  mov    %eax,(%esp)
08671659 +0x557:  call   0867306e <_ZN5CUser24setRecipeEqiupmentOptionER10Inven_Item16stEquipConditioniPK14CStackableItemi>  ; CUser::setRecipeEqiupmentOption(Inven_Item&, stEquipCondition, int, CStackableItem const*, int)
0867165e +0x55c:  mov    0x34(%ebp),%eax
08671661 +0x55f:  mov    0x1ac(%eax),%eax
08671667 +0x565:  test   %eax,%eax
08671669 +0x567:  je     086716c1 <+0x5bf>
0867166b +0x569:  lea    -0xf1(%ebp),%eax
08671671 +0x56f:  mov    %eax,0x4(%esp)
08671675 +0x573:  mov    0x8(%ebp),%eax
08671678 +0x576:  mov    %eax,(%esp)
0867167b +0x579:  call   08692f62 <_ZN5CUser21compoundSystemMessageERK10Inven_Item>  ; CUser::compoundSystemMessage(Inven_Item const&)
08671680 +0x57e:  lea    -0xf1(%ebp),%eax
08671686 +0x584:  mov    %eax,0x4(%esp)
0867168a +0x588:  mov    0x8(%ebp),%eax
0867168d +0x58b:  mov    %eax,(%esp)
08671690 +0x58e:  call   0869304e <_ZN5CUser20compoundGuildMessageERK10Inven_Item>  ; CUser::compoundGuildMessage(Inven_Item const&)
08671695 +0x593:  jmp    086716c1 <+0x5bf>
08671697 +0x595:  mov    0x34(%ebp),%eax
0867169a +0x598:  mov    0x1b0(%eax),%eax
086716a0 +0x59e:  cmp    $0x1,%eax
086716a3 +0x5a1:  jne    086716c1 <+0x5bf>
086716a5 +0x5a3:  mov    0x38(%ebp),%eax
086716a8 +0x5a6:  mov    %eax,0x8(%esp)
086716ac +0x5aa:  lea    -0xf1(%ebp),%eax
086716b2 +0x5b0:  mov    %eax,0x4(%esp)
086716b6 +0x5b4:  mov    0x8(%ebp),%eax
086716b9 +0x5b7:  mov    %eax,(%esp)
086716bc +0x5ba:  call   08671eb2 <_ZN5CUser14copyItemOptionER10Inven_ItemS1_>  ; CUser::copyItemOption(Inven_Item&, Inven_Item&)
086716c1 +0x5bf:  mov    -0xa0(%ebp),%ebx
086716c7 +0x5c5:  mov    0x8(%ebp),%eax
086716ca +0x5c8:  mov    %eax,(%esp)
086716cd +0x5cb:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086716d2 +0x5d0:  mov    -0xf1(%ebp),%edx
086716d8 +0x5d6:  mov    %edx,0xc(%esp)
086716dc +0x5da:  mov    -0xed(%ebp),%edx
086716e2 +0x5e0:  mov    %edx,0x10(%esp)
086716e6 +0x5e4:  mov    -0xe9(%ebp),%edx
086716ec +0x5ea:  mov    %edx,0x14(%esp)
086716f0 +0x5ee:  mov    -0xe5(%ebp),%edx
086716f6 +0x5f4:  mov    %edx,0x18(%esp)
086716fa +0x5f8:  mov    -0xe1(%ebp),%edx
08671700 +0x5fe:  mov    %edx,0x1c(%esp)
08671704 +0x602:  mov    -0xdd(%ebp),%edx
0867170a +0x608:  mov    %edx,0x20(%esp)
0867170e +0x60c:  mov    -0xd9(%ebp),%edx
08671714 +0x612:  mov    %edx,0x24(%esp)
08671718 +0x616:  mov    -0xd5(%ebp),%edx
0867171e +0x61c:  mov    %edx,0x28(%esp)
08671722 +0x620:  mov    -0xd1(%ebp),%edx
08671728 +0x626:  mov    %edx,0x2c(%esp)
0867172c +0x62a:  mov    -0xcd(%ebp),%edx
08671732 +0x630:  mov    %edx,0x30(%esp)
08671736 +0x634:  mov    -0xc9(%ebp),%edx
0867173c +0x63a:  mov    %edx,0x34(%esp)
08671740 +0x63e:  mov    -0xc5(%ebp),%edx
08671746 +0x644:  mov    %edx,0x38(%esp)
0867174a +0x648:  mov    -0xc1(%ebp),%edx
08671750 +0x64e:  mov    %edx,0x3c(%esp)
08671754 +0x652:  mov    -0xbd(%ebp),%edx
0867175a +0x658:  mov    %edx,0x40(%esp)
0867175e +0x65c:  mov    -0xb9(%ebp),%edx
08671764 +0x662:  mov    %edx,0x44(%esp)
08671768 +0x666:  movzbl -0xb5(%ebp),%edx
0867176f +0x66d:  mov    %dl,0x48(%esp)
08671773 +0x671:  mov    %ebx,0x8(%esp)
08671777 +0x675:  movl   $0x1,0x4(%esp)
0867177f +0x67d:  mov    %eax,(%esp)
08671782 +0x680:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
08671787 +0x685:  jmp    08671bea <+0xae8>
0867178c +0x68a:  mov    -0x10(%ebp),%eax
0867178f +0x68d:  mov    %eax,(%esp)
08671792 +0x690:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08671797 +0x695:  cmp    $0x5,%eax
0867179a +0x698:  je     086717c9 <+0x6c7>
0867179c +0x69a:  mov    -0x10(%ebp),%eax
0867179f +0x69d:  mov    (%eax),%eax
086717a1 +0x69f:  add    $0xc,%eax
086717a4 +0x6a2:  mov    (%eax),%edx
086717a6 +0x6a4:  mov    -0x10(%ebp),%eax
086717a9 +0x6a7:  mov    %eax,(%esp)
086717ac +0x6aa:  call   *%edx
086717ae +0x6ac:  cmp    $0xb,%eax
086717b1 +0x6af:  je     086717c9 <+0x6c7>
086717b3 +0x6b1:  mov    0x34(%ebp),%eax
086717b6 +0x6b4:  mov    %eax,(%esp)
086717b9 +0x6b7:  call   08545fda <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x2b>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x2b
086717be +0x6bc:  test   %eax,%eax
086717c0 +0x6be:  je     086717c9 <+0x6c7>
086717c2 +0x6c0:  mov    $0x1,%eax
086717c7 +0x6c5:  jmp    086717ce <+0x6cc>
086717c9 +0x6c7:  mov    $0x0,%eax
086717ce +0x6cc:  test   %al,%al
086717d0 +0x6ce:  je     08671bea <+0xae8>
086717d6 +0x6d4:  movl   $0xa,0x4(%esp)
086717de +0x6dc:  mov    0x8(%ebp),%eax
086717e1 +0x6df:  mov    %eax,(%esp)
086717e4 +0x6e2:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086717e9 +0x6e7:  mov    0x8(%ebp),%edx
086717ec +0x6ea:  mov    %edx,0x8(%esp)
086717f0 +0x6ee:  mov    0x34(%ebp),%edx
086717f3 +0x6f1:  mov    %edx,0x4(%esp)
086717f7 +0x6f5:  mov    %eax,(%esp)
086717fa +0x6f8:  call   08545cf4 <_ZN16CItemMakingSkill23GetItemMakingSkillLevelEPK14CStackableItemP5CUser>  ; CItemMakingSkill::GetItemMakingSkillLevel(CStackableItem const*, CUser*)
086717ff +0x6fd:  mov    %eax,-0xa4(%ebp)
08671805 +0x703:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867180a +0x708:  mov    %eax,(%esp)
0867180d +0x70b:  call   08365ece <_ZNK12CDataManager18GetItemMakingSkillEv>  ; CDataManager::GetItemMakingSkill() const
08671812 +0x710:  mov    %eax,%edx
08671814 +0x712:  lea    -0xa8(%ebp),%eax
0867181a +0x718:  lea    -0xa4(%ebp),%ecx
08671820 +0x71e:  mov    %ecx,0x8(%esp)
08671824 +0x722:  mov    %edx,0x4(%esp)
08671828 +0x726:  mov    %eax,(%esp)
0867182b +0x729:  call   0869b260 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7ab5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7ab5
08671830 +0x72e:  sub    $0x4,%esp
08671833 +0x731:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08671838 +0x736:  mov    %eax,(%esp)
0867183b +0x739:  call   08365ece <_ZNK12CDataManager18GetItemMakingSkillEv>  ; CDataManager::GetItemMakingSkill() const
08671840 +0x73e:  mov    %eax,%edx
08671842 +0x740:  lea    -0x4c(%ebp),%eax
08671845 +0x743:  mov    %edx,0x4(%esp)
08671849 +0x747:  mov    %eax,(%esp)
0867184c +0x74a:  call   0869b28c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7ae1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7ae1
08671851 +0x74f:  sub    $0x4,%esp
08671854 +0x752:  lea    -0x4c(%ebp),%eax
08671857 +0x755:  mov    %eax,0x4(%esp)
0867185b +0x759:  lea    -0xa8(%ebp),%eax
08671861 +0x75f:  mov    %eax,(%esp)
08671864 +0x762:  call   0869b2b2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7b07>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7b07
08671869 +0x767:  test   %al,%al
0867186b +0x769:  je     086718ad <+0x7ab>
0867186d +0x76b:  mov    -0xa4(%ebp),%eax
08671873 +0x771:  mov    %eax,0x14(%esp)
08671877 +0x775:  movl   $"item_making_skill_level error : %d",0x10(%esp)
0867187f +0x77d:  movl   $0x5d0c,0xc(%esp)
08671887 +0x785:  movl   $&_ZZN5CUser17_ProcCompoundCoreERKSt6vectorISt4pairIiiESaIS2_EERS4_RS0_IiSaIiEEibP11PacketGuardRbt16stEquipConditionP14CStackableItemR10Inven_ItemE19__PRETTY_FUNCTION__,0x8(%esp)
0867188f +0x78d:  movl   $"user.cpp",0x4(%esp)
08671897 +0x795:  movl   $0x1,(%esp)
0867189e +0x79c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086718a3 +0x7a1:  mov    $0x0,%ebx
086718a8 +0x7a6:  jmp    08671e69 <+0xd67>
086718ad +0x7ab:  movl   $0x0,-0xc(%ebp)
086718b4 +0x7b2:  mov    0x34(%ebp),%eax
086718b7 +0x7b5:  movzbl 0x199(%eax),%eax
086718be +0x7bc:  test   %al,%al
086718c0 +0x7be:  je     086718ce <+0x7cc>
086718c2 +0x7c0:  movl   $0x0,-0xc(%ebp)
086718c9 +0x7c7:  jmp    0867198a <+0x888>
086718ce +0x7cc:  movl   $0x2710,(%esp)
086718d5 +0x7d3:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086718da +0x7d8:  mov    %eax,%ebx
086718dc +0x7da:  lea    -0xa8(%ebp),%eax
086718e2 +0x7e0:  mov    %eax,(%esp)
086718e5 +0x7e3:  call   0869b2c6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7b1b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7b1b
086718ea +0x7e8:  mov    0xc(%eax),%eax
086718ed +0x7eb:  cmp    %eax,%ebx
086718ef +0x7ed:  setb   %al
086718f2 +0x7f0:  test   %al,%al
086718f4 +0x7f2:  je     08671941 <+0x83f>
086718f6 +0x7f4:  lea    -0xa8(%ebp),%eax
086718fc +0x7fa:  mov    %eax,(%esp)
086718ff +0x7fd:  call   0869b2c6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7b1b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7b1b
08671904 +0x802:  mov    0x4(%eax),%ebx
08671907 +0x805:  lea    -0xa8(%ebp),%eax
0867190d +0x80b:  mov    %eax,(%esp)
08671910 +0x80e:  call   0869b2c6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7b1b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7b1b
08671915 +0x813:  mov    0x10(%eax),%eax
08671918 +0x816:  mov    %eax,(%esp)
0867191b +0x819:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08671920 +0x81e:  mov    %eax,%ecx
08671922 +0x820:  mov    $0x10624dd3,%edx
08671927 +0x825:  mov    %ecx,%eax
08671929 +0x827:  imul   %edx
0867192b +0x829:  sar    $0x6,%edx
0867192e +0x82c:  mov    %ecx,%eax
08671930 +0x82e:  sar    $0x1f,%eax
08671933 +0x831:  mov    %edx,%ecx
08671935 +0x833:  sub    %eax,%ecx
08671937 +0x835:  mov    %ecx,%eax
08671939 +0x837:  lea    (%ebx,%eax,1),%eax
0867193c +0x83a:  mov    %eax,-0xc(%ebp)
0867193f +0x83d:  jmp    0867198a <+0x888>
08671941 +0x83f:  lea    -0xa8(%ebp),%eax
08671947 +0x845:  mov    %eax,(%esp)
0867194a +0x848:  call   0869b2c6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7b1b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7b1b
0867194f +0x84d:  mov    0x14(%eax),%ebx
08671952 +0x850:  lea    -0xa8(%ebp),%eax
08671958 +0x856:  mov    %eax,(%esp)
0867195b +0x859:  call   0869b2c6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7b1b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7b1b
08671960 +0x85e:  mov    0x20(%eax),%eax
08671963 +0x861:  mov    %eax,(%esp)
08671966 +0x864:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0867196b +0x869:  mov    %eax,%ecx
0867196d +0x86b:  mov    $0x10624dd3,%edx
08671972 +0x870:  mov    %ecx,%eax
08671974 +0x872:  imul   %edx
08671976 +0x874:  sar    $0x6,%edx
08671979 +0x877:  mov    %ecx,%eax
0867197b +0x879:  sar    $0x1f,%eax
0867197e +0x87c:  mov    %edx,%ecx
08671980 +0x87e:  sub    %eax,%ecx
08671982 +0x880:  mov    %ecx,%eax
08671984 +0x882:  lea    (%ebx,%eax,1),%eax
08671987 +0x885:  mov    %eax,-0xc(%ebp)
0867198a +0x888:  cmpl   $0x0,-0xc(%ebp)
0867198e +0x88c:  js     08671996 <+0x894>
08671990 +0x88e:  cmpl   $0x1f,-0xc(%ebp)
08671994 +0x892:  jle    0867199d <+0x89b>
08671996 +0x894:  movl   $0x0,-0xc(%ebp)
0867199d +0x89b:  mov    -0xc(%ebp),%eax
086719a0 +0x89e:  movzbl %al,%eax
086719a3 +0x8a1:  mov    %eax,0x4(%esp)
086719a7 +0x8a5:  lea    -0xf1(%ebp),%eax
086719ad +0x8ab:  mov    %eax,(%esp)
086719b0 +0x8ae:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
086719b5 +0x8b3:  lea    -0xf1(%ebp),%eax
086719bb +0x8b9:  mov    %eax,(%esp)
086719be +0x8bc:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
086719c3 +0x8c1:  test   %al,%al
086719c5 +0x8c3:  setne  %al
086719c8 +0x8c6:  test   %al,%al
086719ca +0x8c8:  je     08671a96 <+0x994>
086719d0 +0x8ce:  mov    -0xa0(%ebp),%ebx
086719d6 +0x8d4:  mov    0x8(%ebp),%eax
086719d9 +0x8d7:  mov    %eax,(%esp)
086719dc +0x8da:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086719e1 +0x8df:  mov    -0xf1(%ebp),%edx
086719e7 +0x8e5:  mov    %edx,0xc(%esp)
086719eb +0x8e9:  mov    -0xed(%ebp),%edx
086719f1 +0x8ef:  mov    %edx,0x10(%esp)
086719f5 +0x8f3:  mov    -0xe9(%ebp),%edx
086719fb +0x8f9:  mov    %edx,0x14(%esp)
086719ff +0x8fd:  mov    -0xe5(%ebp),%edx
08671a05 +0x903:  mov    %edx,0x18(%esp)
08671a09 +0x907:  mov    -0xe1(%ebp),%edx
08671a0f +0x90d:  mov    %edx,0x1c(%esp)
08671a13 +0x911:  mov    -0xdd(%ebp),%edx
08671a19 +0x917:  mov    %edx,0x20(%esp)
08671a1d +0x91b:  mov    -0xd9(%ebp),%edx
08671a23 +0x921:  mov    %edx,0x24(%esp)
08671a27 +0x925:  mov    -0xd5(%ebp),%edx
08671a2d +0x92b:  mov    %edx,0x28(%esp)
08671a31 +0x92f:  mov    -0xd1(%ebp),%edx
08671a37 +0x935:  mov    %edx,0x2c(%esp)
08671a3b +0x939:  mov    -0xcd(%ebp),%edx
08671a41 +0x93f:  mov    %edx,0x30(%esp)
08671a45 +0x943:  mov    -0xc9(%ebp),%edx
08671a4b +0x949:  mov    %edx,0x34(%esp)
08671a4f +0x94d:  mov    -0xc5(%ebp),%edx
08671a55 +0x953:  mov    %edx,0x38(%esp)
08671a59 +0x957:  mov    -0xc1(%ebp),%edx
08671a5f +0x95d:  mov    %edx,0x3c(%esp)
08671a63 +0x961:  mov    -0xbd(%ebp),%edx
08671a69 +0x967:  mov    %edx,0x40(%esp)
08671a6d +0x96b:  mov    -0xb9(%ebp),%edx
08671a73 +0x971:  mov    %edx,0x44(%esp)
08671a77 +0x975:  movzbl -0xb5(%ebp),%edx
08671a7e +0x97c:  mov    %dl,0x48(%esp)
08671a82 +0x980:  mov    %ebx,0x8(%esp)
08671a86 +0x984:  movl   $0x1,0x4(%esp)
08671a8e +0x98c:  mov    %eax,(%esp)
08671a91 +0x98f:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
08671a96 +0x994:  mov    0x34(%ebp),%eax
08671a99 +0x997:  mov    (%eax),%eax
08671a9b +0x999:  add    $0xc,%eax
08671a9e +0x99c:  mov    (%eax),%edx
08671aa0 +0x99e:  mov    0x34(%ebp),%eax
08671aa3 +0x9a1:  mov    %eax,(%esp)
08671aa6 +0x9a4:  call   *%edx
08671aa8 +0x9a6:  cmp    $0x3,%eax
08671aab +0x9a9:  sete   %al
08671aae +0x9ac:  test   %al,%al
08671ab0 +0x9ae:  je     08671bea <+0xae8>
08671ab6 +0x9b4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08671abb +0x9b9:  mov    0x5e0(%eax),%ebx
08671ac1 +0x9bf:  lea    -0xf1(%ebp),%eax
08671ac7 +0x9c5:  mov    %eax,(%esp)
08671aca +0x9c8:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08671acf +0x9cd:  movzbl %al,%eax
08671ad2 +0x9d0:  cmp    %eax,%ebx
08671ad4 +0x9d2:  setle  %al
08671ad7 +0x9d5:  test   %al,%al
08671ad9 +0x9d7:  je     08671bea <+0xae8>
08671adf +0x9dd:  lea    -0xb4(%ebp),%eax
08671ae5 +0x9e3:  mov    %eax,(%esp)
08671ae8 +0x9e6:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08671aed +0x9eb:  movl   $0x56,0x8(%esp)
08671af5 +0x9f3:  movl   $0x0,0x4(%esp)
08671afd +0x9fb:  lea    -0xb4(%ebp),%eax
08671b03 +0xa01:  mov    %eax,(%esp)
08671b06 +0xa04:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08671b0b +0xa09:  movl   $0x7,0x4(%esp)
08671b13 +0xa11:  lea    -0xb4(%ebp),%eax
08671b19 +0xa17:  mov    %eax,(%esp)
08671b1c +0xa1a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08671b21 +0xa1f:  movl   $0x1,0x4(%esp)
08671b29 +0xa27:  lea    -0xb4(%ebp),%eax
08671b2f +0xa2d:  mov    %eax,(%esp)
08671b32 +0xa30:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08671b37 +0xa35:  mov    0x8(%ebp),%eax
08671b3a +0xa38:  mov    %eax,(%esp)
08671b3d +0xa3b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08671b42 +0xa40:  movzwl %ax,%eax
08671b45 +0xa43:  mov    %eax,0x4(%esp)
08671b49 +0xa47:  lea    -0xb4(%ebp),%eax
08671b4f +0xa4d:  mov    %eax,(%esp)
08671b52 +0xa50:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08671b57 +0xa55:  mov    -0xef(%ebp),%eax
08671b5d +0xa5b:  mov    %eax,0x4(%esp)
08671b61 +0xa5f:  lea    -0xb4(%ebp),%eax
08671b67 +0xa65:  mov    %eax,(%esp)
08671b6a +0xa68:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08671b6f +0xa6d:  lea    -0xf1(%ebp),%eax
08671b75 +0xa73:  mov    %eax,(%esp)
08671b78 +0xa76:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08671b7d +0xa7b:  movzbl %al,%eax
08671b80 +0xa7e:  mov    %eax,0x4(%esp)
08671b84 +0xa82:  lea    -0xb4(%ebp),%eax
08671b8a +0xa88:  mov    %eax,(%esp)
08671b8d +0xa8b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08671b92 +0xa90:  movl   $0x1,0x4(%esp)
08671b9a +0xa98:  lea    -0xb4(%ebp),%eax
08671ba0 +0xa9e:  mov    %eax,(%esp)
08671ba3 +0xaa1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08671ba8 +0xaa6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08671bad +0xaab:  lea    -0xb4(%ebp),%edx
08671bb3 +0xab1:  mov    %edx,0x4(%esp)
08671bb7 +0xab5:  mov    %eax,(%esp)
08671bba +0xab8:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08671bbf +0xabd:  jmp    08671bdc <+0xada>
08671bc1 +0xabf:  mov    %edx,%ebx
08671bc3 +0xac1:  mov    %eax,%esi
08671bc5 +0xac3:  lea    -0xb4(%ebp),%eax
08671bcb +0xac9:  mov    %eax,(%esp)
08671bce +0xacc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08671bd3 +0xad1:  mov    %esi,%eax
08671bd5 +0xad3:  mov    %ebx,%edx
08671bd7 +0xad5:  jmp    08671e51 <+0xd4f>
08671bdc +0xada:  lea    -0xb4(%ebp),%eax
08671be2 +0xae0:  mov    %eax,(%esp)
08671be5 +0xae3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08671bea +0xae8:  lea    -0xa0(%ebp),%eax
08671bf0 +0xaee:  mov    %eax,0x4(%esp)
08671bf4 +0xaf2:  mov    0x14(%ebp),%eax
08671bf7 +0xaf5:  mov    %eax,(%esp)
08671bfa +0xaf8:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08671bff +0xafd:  mov    0x20(%ebp),%eax
08671c02 +0xb00:  movl   $0x0,0x4(%esp)
08671c0a +0xb08:  mov    %eax,(%esp)
08671c0d +0xb0b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08671c12 +0xb10:  mov    -0xa0(%ebp),%edx
08671c18 +0xb16:  mov    0x20(%ebp),%eax
08671c1b +0xb19:  mov    %edx,0x4(%esp)
08671c1f +0xb1d:  mov    %eax,(%esp)
08671c22 +0xb20:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08671c27 +0xb25:  lea    -0x48(%ebp),%eax
08671c2a +0xb28:  movl   $0x0,0x8(%esp)
08671c32 +0xb30:  lea    -0x9c(%ebp),%edx
08671c38 +0xb36:  mov    %edx,0x4(%esp)
08671c3c +0xb3a:  mov    %eax,(%esp)
08671c3f +0xb3d:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08671c44 +0xb42:  sub    $0x4,%esp
08671c47 +0xb45:  lea    -0x9c(%ebp),%eax
08671c4d +0xb4b:  mov    %eax,(%esp)
08671c50 +0xb4e:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08671c55 +0xb53:  mov    (%eax),%eax
08671c57 +0xb55:  mov    %eax,-0x1c(%ebp)
08671c5a +0xb58:  mov    0x20(%ebp),%eax
08671c5d +0xb5b:  mov    -0x1c(%ebp),%edx
08671c60 +0xb5e:  mov    %edx,0x4(%esp)
08671c64 +0xb62:  mov    %eax,(%esp)
08671c67 +0xb65:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08671c6c +0xb6a:  lea    -0x44(%ebp),%eax
08671c6f +0xb6d:  movl   $0x0,0x8(%esp)
08671c77 +0xb75:  lea    -0x9c(%ebp),%edx
08671c7d +0xb7b:  mov    %edx,0x4(%esp)
08671c81 +0xb7f:  mov    %eax,(%esp)
08671c84 +0xb82:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08671c89 +0xb87:  sub    $0x4,%esp
08671c8c +0xb8a:  lea    -0x9c(%ebp),%eax
08671c92 +0xb90:  mov    %eax,(%esp)
08671c95 +0xb93:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08671c9a +0xb98:  mov    (%eax),%eax
08671c9c +0xb9a:  mov    %eax,-0x18(%ebp)
08671c9f +0xb9d:  mov    0x20(%ebp),%eax
08671ca2 +0xba0:  mov    -0x18(%ebp),%edx
08671ca5 +0xba3:  mov    %edx,0x4(%esp)
08671ca9 +0xba7:  mov    %eax,(%esp)
08671cac +0xbaa:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08671cb1 +0xbaf:  lea    -0x40(%ebp),%eax
08671cb4 +0xbb2:  movl   $0x0,0x8(%esp)
08671cbc +0xbba:  lea    -0x9c(%ebp),%edx
08671cc2 +0xbc0:  mov    %edx,0x4(%esp)
08671cc6 +0xbc4:  mov    %eax,(%esp)
08671cc9 +0xbc7:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08671cce +0xbcc:  sub    $0x4,%esp
08671cd1 +0xbcf:  lea    -0xf1(%ebp),%eax
08671cd7 +0xbd5:  mov    %eax,(%esp)
08671cda +0xbd8:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08671cdf +0xbdd:  movzbl %al,%edx
08671ce2 +0xbe0:  mov    0x20(%ebp),%eax
08671ce5 +0xbe3:  mov    %edx,0x4(%esp)
08671ce9 +0xbe7:  mov    %eax,(%esp)
08671cec +0xbea:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08671cf1 +0xbef:  movzwl -0xe6(%ebp),%eax
08671cf8 +0xbf6:  movzwl %ax,%edx
08671cfb +0xbf9:  mov    0x20(%ebp),%eax
08671cfe +0xbfc:  mov    %edx,0x4(%esp)
08671d02 +0xc00:  mov    %eax,(%esp)
08671d05 +0xc03:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08671d0a +0xc08:  lea    -0xf1(%ebp),%eax
08671d10 +0xc0e:  add    $0x11,%eax
08671d13 +0xc11:  mov    %eax,(%esp)
08671d16 +0xc14:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
08671d1b +0xc19:  movzbl %al,%edx
08671d1e +0xc1c:  mov    0x20(%ebp),%eax
08671d21 +0xc1f:  mov    %edx,0x4(%esp)
08671d25 +0xc23:  mov    %eax,(%esp)
08671d28 +0xc26:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08671d2d +0xc2b:  lea    -0xf1(%ebp),%eax
08671d33 +0xc31:  add    $0x11,%eax
08671d36 +0xc34:  mov    %eax,(%esp)
08671d39 +0xc37:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
08671d3e +0xc3c:  movzwl %ax,%edx
08671d41 +0xc3f:  mov    0x20(%ebp),%eax
08671d44 +0xc42:  mov    %edx,0x4(%esp)
08671d48 +0xc46:  mov    %eax,(%esp)
08671d4b +0xc49:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08671d50 +0xc4e:  movzbl -0xf1(%ebp),%eax
08671d57 +0xc55:  test   %al,%al
08671d59 +0xc57:  je     08671d62 <+0xc60>
08671d5b +0xc59:  mov    $0x1,%eax
08671d60 +0xc5e:  jmp    08671d67 <+0xc65>
08671d62 +0xc60:  mov    $0x0,%eax
08671d67 +0xc65:  mov    %al,-0x11(%ebp)
08671d6a +0xc68:  movsbl -0x11(%ebp),%edx
08671d6e +0xc6c:  mov    0x20(%ebp),%eax
08671d71 +0xc6f:  mov    %edx,0x4(%esp)
08671d75 +0xc73:  mov    %eax,(%esp)
08671d78 +0xc76:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08671d7d +0xc7b:  mov    0x20(%ebp),%eax
08671d80 +0xc7e:  lea    -0xf1(%ebp),%edx
08671d86 +0xc84:  mov    %edx,0x4(%esp)
08671d8a +0xc88:  mov    %eax,(%esp)
08671d8d +0xc8b:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
08671d92 +0xc90:  cmpb   $0x0,-0xfc(%ebp)
08671d99 +0xc97:  je     08671dc5 <+0xcc3>
08671d9b +0xc99:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
08671da0 +0xc9e:  movl   $0x3,0x10(%esp)
08671da8 +0xca6:  mov    0x8(%ebp),%edx
08671dab +0xca9:  mov    %edx,0xc(%esp)
08671daf +0xcad:  mov    -0x18(%ebp),%edx
08671db2 +0xcb0:  mov    %edx,0x8(%esp)
08671db6 +0xcb4:  mov    -0x1c(%ebp),%edx
08671db9 +0xcb7:  mov    %edx,0x4(%esp)
08671dbd +0xcbb:  mov    %eax,(%esp)
08671dc0 +0xcbe:  call   0860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)
08671dc5 +0xcc3:  lea    -0x50(%ebp),%eax
08671dc8 +0xcc6:  lea    -0x98(%ebp),%edx
08671dce +0xccc:  mov    %edx,0x4(%esp)
08671dd2 +0xcd0:  mov    %eax,(%esp)
08671dd5 +0xcd3:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08671dda +0xcd8:  sub    $0x4,%esp
08671ddd +0xcdb:  lea    -0x50(%ebp),%eax
08671de0 +0xcde:  mov    %eax,0x4(%esp)
08671de4 +0xce2:  lea    -0x9c(%ebp),%eax
08671dea +0xce8:  mov    %eax,(%esp)
08671ded +0xceb:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08671df2 +0xcf0:  test   %al,%al
08671df4 +0xcf2:  jne    08671555 <+0x453>
08671dfa +0xcf8:  jmp    08671e4a <+0xd48>
08671dfc +0xcfa:  mov    0x8(%ebp),%eax
08671dff +0xcfd:  mov    %eax,(%esp)
08671e02 +0xd00:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08671e07 +0xd05:  mov    %eax,%ebx
08671e09 +0xd07:  movl   $0x5,0xc(%esp)
08671e11 +0xd0f:  movl   $0x5d73,0x8(%esp)
08671e19 +0xd17:  movl   $&_ZZN5CUser17_ProcCompoundCoreERKSt6vectorISt4pairIiiESaIS2_EERS4_RS0_IiSaIiEEibP11PacketGuardRbt16stEquipConditionP14CStackableItemR10Inven_ItemE19__PRETTY_FUNCTION__,0x4(%esp)
08671e21 +0xd1f:  lea    -0x3c(%ebp),%eax
08671e24 +0xd22:  mov    %eax,(%esp)
08671e27 +0xd25:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08671e2c +0xd2a:  mov    %ebx,0x8(%esp)
08671e30 +0xd2e:  movl   $"CUser::compound_item, getCurCharacInvenR()->insert_event_items failed %d",0x4(%esp)
08671e38 +0xd36:  lea    -0x3c(%ebp),%eax
08671e3b +0xd39:  mov    %eax,(%esp)
08671e3e +0xd3c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08671e43 +0xd41:  mov    $0x0,%ebx
08671e48 +0xd46:  jmp    08671e69 <+0xd67>
08671e4a +0xd48:  mov    $0x1,%ebx
08671e4f +0xd4d:  jmp    08671e69 <+0xd67>
08671e51 +0xd4f:  mov    %edx,%ebx
08671e53 +0xd51:  mov    %eax,%esi
08671e55 +0xd53:  lea    -0x98(%ebp),%eax
08671e5b +0xd59:  mov    %eax,(%esp)
08671e5e +0xd5c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08671e63 +0xd61:  mov    %esi,%eax
08671e65 +0xd63:  mov    %ebx,%edx
08671e67 +0xd65:  jmp    08671e79 <+0xd77>
08671e69 +0xd67:  lea    -0x98(%ebp),%eax
08671e6f +0xd6d:  mov    %eax,(%esp)
08671e72 +0xd70:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08671e77 +0xd75:  jmp    08671e97 <+0xd95>
08671e79 +0xd77:  mov    %edx,%ebx
08671e7b +0xd79:  mov    %eax,%esi
08671e7d +0xd7b:  lea    -0x8c(%ebp),%eax
08671e83 +0xd81:  mov    %eax,(%esp)
08671e86 +0xd84:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08671e8b +0xd89:  mov    %esi,%eax
08671e8d +0xd8b:  mov    %ebx,%edx
08671e8f +0xd8d:  mov    %eax,(%esp)
08671e92 +0xd90:  call   08ae3750 <_Unwind_Resume>
08671e97 +0xd95:  lea    -0x8c(%ebp),%eax
08671e9d +0xd9b:  mov    %eax,(%esp)
08671ea0 +0xd9e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08671ea5 +0xda3:  mov    %ebx,%eax
08671ea7 +0xda5:  lea    -0x8(%ebp),%esp
08671eaa +0xda8:  add    $0x0,%esp
08671ead +0xdab:  pop    %ebx
08671eae +0xdac:  pop    %esi
08671eaf +0xdad:  pop    %ebp
08671eb0 +0xdae:  ret
08671eb1 +0xdaf:  nop
```

## 反编译 C

```c
// CUser::_ProcCompoundCore @ 0x8671102

/* CUser::_ProcCompoundCore(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >
   const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&,
   std::vector<int, std::allocator<int> >&, int, bool, PacketGuard*, bool&, unsigned short,
   stEquipCondition, CStackableItem*, Inven_Item&) */

undefined4
CUser::_ProcCompoundCore
          (CUser *param_1,vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_2,
          vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_3,
          vector<int,std::allocator<int>> *param_4,int param_5,char param_6,
          InterfacePacketBuf *param_7,undefined4 param_8,ushort param_9,undefined4 param_10,
          undefined4 param_11,CItem *param_12,Inven_Item *param_13)

{
  bool bVar1;
  char cVar2;
  CInventory *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  CDataManager *pCVar8;
  int iVar9;
  int iVar10;
  CItemMakingSkill *this;
  GameWorld *this_00;
  uint uVar11;
  CCubeStatistic *pCVar12;
  Inven_Item local_f5;
  char cStack_f4;
  undefined2 uStack_f3;
  undefined2 uStack_f1;
  undefined2 uStack_ef;
  undefined4 local_ed;
  undefined4 uStack_e9;
  undefined4 local_e5;
  undefined4 local_e1;
  undefined4 local_dd;
  undefined4 local_d9;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined1 local_b9;
  PacketGuard local_b8 [12];
  _Rb_tree_const_iterator<std::pair<int_const,stUpgradeWithCompound>> local_ac [4];
  undefined4 local_a8;
  int local_a4;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_a0 [4];
  vector<int,std::allocator<int>> local_9c [12];
  vector<int,std::allocator<int>> local_90 [12];
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  __normal_iterator local_64 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_60 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_5c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_58 [4];
  __normal_iterator local_54 [4];
  map<int,stUpgradeWithCompound,std::less<int>,std::allocator<std::pair<int_const,stUpgradeWithCompound>>>
  local_50 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_4c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_48 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_44 [4];
  cMyTrace local_40 [16];
  int local_30;
  char local_29;
  int local_28;
  char local_21;
  int local_20;
  int local_1c;
  undefined1 local_15;
  CItem *local_14;
  int local_10;
  
  std::vector<int,std::allocator<int>>::vector(local_90);
                    /* try { // try from 08671137 to 0867113b has its CatchHandler @ 08671e79 */
  std::vector<int,std::allocator<int>>::vector(local_9c);
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
            (local_a0);
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 0867118b to 08671aec has its CatchHandler @ 08671e51 */
  local_30 = CInventory::delete_event_items(pCVar3,param_2,local_90,param_8,0xc,8,param_6);
  if (local_30 == 0) {
    uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(param_2);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_84,
                       "bool CUser::_ProcCompoundCore(const IntPairVector&, IntPairVector&, IntVector&, int, bool, PacketGuard*, bool&, RequestItemCountType, stEquipCondition, CStackableItem*, Inven_Item&)"
                       ,0x5c8b,5);
    cMyTrace::operator()
              (local_84,
               "CUser::compound_item, getCurCharacInvenR()->delete_event_items , size does not match! %d %d !=%d"
               ,uVar5,local_30,uVar4);
    uVar4 = 0;
  }
  else {
    if (param_6 == '\0') {
      InterfacePacketBuf::put_byte(param_7,(uint)param_9 + local_30);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_21 = CInventory::delete_item(pCVar3,1,param_5,param_9,8,1);
      if (local_21 != '\x01') {
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_74,
                           "bool CUser::_ProcCompoundCore(const IntPairVector&, IntPairVector&, IntVector&, int, bool, PacketGuard*, bool&, RequestItemCountType, stEquipCondition, CStackableItem*, Inven_Item&)"
                           ,0x5c9a,5);
        cMyTrace::operator()
                  (local_74,"CUser::compound_item, getCurCharacInvenW()->delete_item failed , %d %d"
                   ,uVar4,param_5);
        uVar4 = 0;
        goto LAB_08671e69;
      }
      InterfacePacketBuf::put_byte(param_7,0);
      InterfacePacketBuf::put_short(param_7,param_5);
      InterfacePacketBuf::put_int(param_7,(uint)param_9);
    }
    else {
      InterfacePacketBuf::put_byte(param_7,local_30);
    }
    if (0 < local_30) {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=(local_a0,local_64);
        if (!bVar1) break;
        piVar7 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_a0);
        InterfacePacketBuf::put_byte(param_7,*piVar7);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_60,(int)local_a0);
        piVar7 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_a0);
        InterfacePacketBuf::put_short(param_7,*piVar7);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_5c,(int)local_a0);
        piVar7 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_a0);
        InterfacePacketBuf::put_int(param_7,*piVar7);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_58,(int)local_a0);
      }
    }
    local_29 = isSuccessCompound(param_1,*(int *)(param_12 + 0x1a8));
    if (local_29 != '\x01') {
      RecipeInfo::changeOutput((RecipeInfo *)(param_12 + 0x174),(vector *)param_3);
      cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
      if (cVar2 != '\0') {
        InterfacePacketBuf::put_byte(param_7,0);
        uVar4 = 1;
        goto LAB_08671e69;
      }
    }
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_28 = CInventory::insert_event_items
                         (pCVar3,param_3,local_9c,7,9,0,&DAT_08cedf41,&DAT_08cedf41);
    InterfacePacketBuf::put_byte(param_7,local_28);
    iVar10 = local_28;
    iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(param_3);
    if (iVar10 == iVar6) {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=(local_a0,local_54);
        if (!bVar1) break;
        piVar7 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_a0);
        iVar10 = *piVar7;
        local_a4 = iVar10;
        iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar4 = 1;
        CInventory::GetInvenSlot((int)&local_f5,iVar6);
        if (cStack_f4 == '\x01') {
          iVar6 = CONCAT22(uStack_f1,uStack_f3);
          pCVar8 = (CDataManager *)G_CDataManager();
          local_14 = (CItem *)CDataManager::find_item(pCVar8,iVar6);
          if (local_14 != (CItem *)0x0) {
            if ((char)param_10 == '\x01') {
              if (local_29 == '\0') {
                if (*(int *)(param_12 + 0x1b0) == 1) {
                  copyItemOption(param_1,&local_f5,param_13);
                }
              }
              else {
                if (*(int *)(param_12 + 0x1b0) == 1) {
                  copyItemOption(param_1,&local_f5,param_13);
                }
                else {
                  uVar4 = (**(code **)(*(int *)local_14 + 0xc))(local_14);
                  setRecipeEqiupmentOption
                            (param_1,&local_f5,param_10,param_11,local_a4,param_12,uVar4);
                }
                if (*(int *)(param_12 + 0x1ac) != 0) {
                  compoundSystemMessage(param_1,&local_f5);
                  compoundGuildMessage(param_1,&local_f5);
                }
              }
              iVar10 = local_a4;
              uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
              CInventory::update_item
                        (uVar4,1,iVar10,CONCAT22(uStack_f3,CONCAT11(cStack_f4,local_f5)),
                         CONCAT22(uStack_ef,uStack_f1),local_ed,uStack_e9,local_e5,local_e1,local_dd
                         ,local_d9,local_d5,local_d1,local_cd,local_c9,local_c5,local_c1,local_bd,
                         local_b9);
            }
            else {
              iVar9 = CItem::get_rarity(local_14);
              if (((iVar9 == 5) ||
                  (iVar10 = (**(code **)(*(int *)local_14 + 0xc))(local_14,iVar6,uVar4,iVar10),
                  iVar10 == 0xb)) || (iVar10 = CItem::GetNeedLevel(param_12), iVar10 == 0)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                this = (CItemMakingSkill *)GetCharacExpandData(param_1,10);
                local_a8 = CItemMakingSkill::GetItemMakingSkillLevel
                                     (this,(CStackableItem *)param_12,param_1);
                pCVar8 = (CDataManager *)G_CDataManager();
                CDataManager::GetItemMakingSkill(pCVar8);
                std::
                map<int,stUpgradeWithCompound,std::less<int>,std::allocator<std::pair<int_const,stUpgradeWithCompound>>>
                ::find((int *)local_ac);
                pCVar8 = (CDataManager *)G_CDataManager();
                CDataManager::GetItemMakingSkill(pCVar8);
                std::
                map<int,stUpgradeWithCompound,std::less<int>,std::allocator<std::pair<int_const,stUpgradeWithCompound>>>
                ::end(local_50);
                cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,stUpgradeWithCompound>>::
                        operator==(local_ac,(_Rb_tree_const_iterator *)local_50);
                if (cVar2 != '\0') {
                  LogManager::logFormat
                            (1,"user.cpp",
                             "bool CUser::_ProcCompoundCore(const IntPairVector&, IntPairVector&, IntVector&, int, bool, PacketGuard*, bool&, RequestItemCountType, stEquipCondition, CStackableItem*, Inven_Item&)"
                             ,0x5d0c,"item_making_skill_level error : %d",local_a8);
                  uVar4 = 0;
                  goto LAB_08671e69;
                }
                local_10 = 0;
                if (param_12[0x199] == (CItem)0x0) {
                  uVar11 = get_rand_int(10000);
                  iVar10 = std::_Rb_tree_const_iterator<std::pair<int_const,stUpgradeWithCompound>>
                           ::operator->(local_ac);
                  if (uVar11 < *(uint *)(iVar10 + 0xc)) {
                    iVar10 = std::
                             _Rb_tree_const_iterator<std::pair<int_const,stUpgradeWithCompound>>::
                             operator->(local_ac);
                    iVar10 = *(int *)(iVar10 + 4);
                    iVar6 = std::_Rb_tree_const_iterator<std::pair<int_const,stUpgradeWithCompound>>
                            ::operator->(local_ac);
                    iVar6 = get_rand_int(*(int *)(iVar6 + 0x10));
                    local_10 = iVar10 + iVar6 / 1000;
                  }
                  else {
                    iVar10 = std::
                             _Rb_tree_const_iterator<std::pair<int_const,stUpgradeWithCompound>>::
                             operator->(local_ac);
                    iVar10 = *(int *)(iVar10 + 0x14);
                    iVar6 = std::_Rb_tree_const_iterator<std::pair<int_const,stUpgradeWithCompound>>
                            ::operator->(local_ac);
                    iVar6 = get_rand_int(*(int *)(iVar6 + 0x20));
                    local_10 = iVar10 + iVar6 / 1000;
                  }
                }
                else {
                  local_10 = 0;
                }
                if ((local_10 < 0) || (0x1f < local_10)) {
                  local_10 = 0;
                }
                Inven_Item::SetUpgrade(&local_f5,(uchar)local_10);
                cVar2 = Inven_Item::GetUpgrade(&local_f5);
                iVar10 = local_a4;
                if (cVar2 != '\0') {
                  uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  CInventory::update_item
                            (uVar4,1,iVar10,CONCAT22(uStack_f3,CONCAT11(cStack_f4,local_f5)),
                             CONCAT22(uStack_ef,uStack_f1),local_ed,uStack_e9,local_e5,local_e1,
                             local_dd,local_d9,local_d5,local_d1,local_cd,local_c9,local_c5,local_c1
                             ,local_bd,local_b9);
                }
                iVar10 = (**(code **)(*(int *)param_12 + 0xc))(param_12);
                if (iVar10 == 3) {
                  iVar10 = G_CDataManager();
                  iVar10 = *(int *)(iVar10 + 0x5e0);
                  uVar11 = Inven_Item::GetUpgrade(&local_f5);
                  if (iVar10 <= (int)(uVar11 & 0xff)) {
                    PacketGuard::PacketGuard(local_b8);
                    /* try { // try from 08671b06 to 08671bbe has its CatchHandler @ 08671bc1 */
                    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b8,0,0x56);
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b8,7);
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b8,1);
                    uVar11 = get_unique_id(param_1);
                    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b8,uVar11 & 0xffff);
                    InterfacePacketBuf::put_int
                              ((InterfacePacketBuf *)local_b8,CONCAT22(uStack_f1,uStack_f3));
                    uVar11 = Inven_Item::GetUpgrade(&local_f5);
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b8,uVar11 & 0xff);
                    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b8,true);
                    this_00 = (GameWorld *)G_GameWorld();
                    GameWorld::send_all(this_00,local_b8);
                    /* try { // try from 08671be5 to 08671e42 has its CatchHandler @ 08671e51 */
                    PacketGuard::~PacketGuard(local_b8);
                  }
                }
              }
            }
          }
        }
        std::vector<int,std::allocator<int>>::push_back(param_4,&local_a4);
        InterfacePacketBuf::put_byte(param_7,0);
        InterfacePacketBuf::put_short(param_7,local_a4);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_4c,(int)local_a0);
        piVar7 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_a0);
        local_20 = *piVar7;
        InterfacePacketBuf::put_int(param_7,local_20);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_48,(int)local_a0);
        piVar7 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_a0);
        local_1c = *piVar7;
        InterfacePacketBuf::put_int(param_7,local_1c);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_44,(int)local_a0);
        uVar11 = Inven_Item::GetUpgrade(&local_f5);
        InterfacePacketBuf::put_byte(param_7,uVar11 & 0xff);
        InterfacePacketBuf::put_short(param_7,(uint)CONCAT11((undefined1)uStack_e9,local_ed._3_1_));
        uVar11 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)((int)&local_e5 + 1));
        InterfacePacketBuf::put_byte(param_7,uVar11 & 0xff);
        uVar11 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)((int)&local_e5 + 1));
        InterfacePacketBuf::put_short(param_7,uVar11 & 0xffff);
        local_15 = local_f5 != (Inven_Item)0x0;
        InterfacePacketBuf::put_byte(param_7,(int)(char)local_15);
        InterfacePacketBuf::put_packet(param_7,&local_f5);
        if (param_6 != '\0') {
          pCVar12 = (CCubeStatistic *)GetInstanceCubeStatistic();
          CCubeStatistic::collectCubeStatistics(pCVar12,local_20,local_1c,param_1,3);
        }
      }
      uVar4 = 1;
    }
    else {
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_40,
                         "bool CUser::_ProcCompoundCore(const IntPairVector&, IntPairVector&, IntVector&, int, bool, PacketGuard*, bool&, RequestItemCountType, stEquipCondition, CStackableItem*, Inven_Item&)"
                         ,0x5d73,5);
      cMyTrace::operator()
                (local_40,"CUser::compound_item, getCurCharacInvenR()->insert_event_items failed %d"
                 ,uVar4);
      uVar4 = 0;
    }
  }
LAB_08671e69:
                    /* try { // try from 08671e72 to 08671e76 has its CatchHandler @ 08671e79 */
  std::vector<int,std::allocator<int>>::~vector(local_9c);
  std::vector<int,std::allocator<int>>::~vector(local_90);
  return uVar4;
}
```
