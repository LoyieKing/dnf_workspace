# make_blood_dungeon_info

`_ZN6CParty23make_blood_dungeon_infoEP5CUserR11PacketGuard`

`CParty::make_blood_dungeon_info(CUser*, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859e0d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859e0d2  _ZN6CParty23make_blood_dungeon_infoEP5CUserR11PacketGuard
#           CParty::make_blood_dungeon_info(CUser*, PacketGuard&)
# range [0x0859e0d2, 0x0859e47f]
0859e0d2 +0x000:  push   %ebp
0859e0d3 +0x001:  mov    %esp,%ebp
0859e0d5 +0x003:  push   %ebx
0859e0d6 +0x004:  sub    $0x34,%esp
0859e0d9 +0x007:  mov    0x8(%ebp),%eax
0859e0dc +0x00a:  mov    0x1868(%eax),%eax
0859e0e2 +0x010:  test   %eax,%eax
0859e0e4 +0x012:  jne    0859e126 <+0x54>
0859e0e6 +0x014:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0859e0eb +0x019:  mov    0xc(%ebp),%edx
0859e0ee +0x01c:  mov    %edx,0x4(%esp)
0859e0f2 +0x020:  mov    %eax,(%esp)
0859e0f5 +0x023:  call   086cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>  ; GameWorld::GetWorldMapIndex(CUser*)
0859e0fa +0x028:  mov    %eax,-0x18(%ebp)
0859e0fd +0x02b:  cmpl   $0x0,-0x18(%ebp)
0859e101 +0x02f:  jle    0859e126 <+0x54>
0859e103 +0x031:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859e108 +0x036:  lea    0x8780(%eax),%edx
0859e10e +0x03c:  mov    -0x18(%ebp),%eax
0859e111 +0x03f:  mov    %eax,0x4(%esp)
0859e115 +0x043:  mov    %edx,(%esp)
0859e118 +0x046:  call   083647a2 <_ZNK13CWorldMapList14find_world_mapEi>  ; CWorldMapList::find_world_map(int) const
0859e11d +0x04b:  mov    0x8(%ebp),%edx
0859e120 +0x04e:  mov    %eax,0x1868(%edx)
0859e126 +0x054:  mov    0x8(%ebp),%eax
0859e129 +0x057:  mov    0x1868(%eax),%eax
0859e12f +0x05d:  test   %eax,%eax
0859e131 +0x05f:  jne    0859e13d <+0x6b>
0859e133 +0x061:  mov    $0x0,%eax
0859e138 +0x066:  jmp    0859e47b <+0x3a9>
0859e13d +0x06b:  mov    0x8(%ebp),%eax
0859e140 +0x06e:  mov    0x1868(%eax),%eax
0859e146 +0x074:  mov    %eax,(%esp)
0859e149 +0x077:  call   0822b520 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xbca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xbca
0859e14e +0x07c:  xor    $0x1,%eax
0859e151 +0x07f:  test   %al,%al
0859e153 +0x081:  je     0859e15f <+0x8d>
0859e155 +0x083:  mov    $0x0,%eax
0859e15a +0x088:  jmp    0859e47b <+0x3a9>
0859e15f +0x08d:  mov    0x8(%ebp),%eax
0859e162 +0x090:  mov    %eax,(%esp)
0859e165 +0x093:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859e16a +0x098:  mov    0x10(%ebp),%edx
0859e16d +0x09b:  mov    %eax,0x4(%esp)
0859e171 +0x09f:  mov    %edx,(%esp)
0859e174 +0x0a2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859e179 +0x0a7:  movl   $0x0,-0x14(%ebp)
0859e180 +0x0ae:  jmp    0859e392 <+0x2c0>
0859e185 +0x0b3:  mov    -0x14(%ebp),%eax
0859e188 +0x0b6:  mov    %eax,0x4(%esp)
0859e18c +0x0ba:  mov    0x8(%ebp),%eax
0859e18f +0x0bd:  mov    %eax,(%esp)
0859e192 +0x0c0:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859e197 +0x0c5:  test   %al,%al
0859e199 +0x0c7:  je     0859e38e <+0x2bc>
0859e19f +0x0cd:  mov    -0x14(%ebp),%edx
0859e1a2 +0x0d0:  mov    0x8(%ebp),%ecx
0859e1a5 +0x0d3:  mov    %edx,%eax
0859e1a7 +0x0d5:  add    %eax,%eax
0859e1a9 +0x0d7:  add    %edx,%eax
0859e1ab +0x0d9:  shl    $0x3,%eax
0859e1ae +0x0dc:  lea    (%ecx,%eax,1),%eax
0859e1b1 +0x0df:  add    $0x78,%eax
0859e1b4 +0x0e2:  mov    (%eax),%eax
0859e1b6 +0x0e4:  mov    %eax,(%esp)
0859e1b9 +0x0e7:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0859e1be +0x0ec:  movzwl %ax,%edx
0859e1c1 +0x0ef:  mov    0x10(%ebp),%eax
0859e1c4 +0x0f2:  mov    %edx,0x4(%esp)
0859e1c8 +0x0f6:  mov    %eax,(%esp)
0859e1cb +0x0f9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859e1d0 +0x0fe:  mov    0x10(%ebp),%eax
0859e1d3 +0x101:  mov    %eax,(%esp)
0859e1d6 +0x104:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0859e1db +0x109:  mov    %eax,-0x20(%ebp)
0859e1de +0x10c:  movl   $0x0,-0x10(%ebp)
0859e1e5 +0x113:  mov    0x10(%ebp),%eax
0859e1e8 +0x116:  mov    -0x10(%ebp),%edx
0859e1eb +0x119:  mov    %edx,0x4(%esp)
0859e1ef +0x11d:  mov    %eax,(%esp)
0859e1f2 +0x120:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859e1f7 +0x125:  mov    0x8(%ebp),%eax
0859e1fa +0x128:  mov    0x1868(%eax),%eax
0859e200 +0x12e:  mov    %eax,(%esp)
0859e203 +0x131:  call   085beda4 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x302>  ; global constructors keyed to CParty::cMember::cMember()+0x302
0859e208 +0x136:  lea    -0x24(%ebp),%edx
0859e20b +0x139:  mov    %eax,0x4(%esp)
0859e20f +0x13d:  mov    %edx,(%esp)
0859e212 +0x140:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0859e217 +0x145:  sub    $0x4,%esp
0859e21a +0x148:  jmp    0859e338 <+0x266>
0859e21f +0x14d:  lea    -0x24(%ebp),%eax
0859e222 +0x150:  mov    %eax,(%esp)
0859e225 +0x153:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0859e22a +0x158:  mov    (%eax),%ebx
0859e22c +0x15a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859e231 +0x15f:  mov    %ebx,0x4(%esp)
0859e235 +0x163:  mov    %eax,(%esp)
0859e238 +0x166:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
0859e23d +0x16b:  mov    %eax,-0xc(%ebp)
0859e240 +0x16e:  cmpl   $0x0,-0xc(%ebp)
0859e244 +0x172:  je     0859e32d <+0x25b>
0859e24a +0x178:  mov    -0xc(%ebp),%eax
0859e24d +0x17b:  movzbl 0x89f(%eax),%eax
0859e254 +0x182:  cmp    $0x1,%al
0859e256 +0x184:  jne    0859e32d <+0x25b>
0859e25c +0x18a:  lea    -0x24(%ebp),%eax
0859e25f +0x18d:  mov    %eax,(%esp)
0859e262 +0x190:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0859e267 +0x195:  mov    (%eax),%edx
0859e269 +0x197:  mov    0x10(%ebp),%eax
0859e26c +0x19a:  mov    %edx,0x4(%esp)
0859e270 +0x19e:  mov    %eax,(%esp)
0859e273 +0x1a1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859e278 +0x1a6:  mov    -0x14(%ebp),%edx
0859e27b +0x1a9:  mov    0x8(%ebp),%ecx
0859e27e +0x1ac:  mov    %edx,%eax
0859e280 +0x1ae:  add    %eax,%eax
0859e282 +0x1b0:  add    %edx,%eax
0859e284 +0x1b2:  shl    $0x3,%eax
0859e287 +0x1b5:  lea    (%ecx,%eax,1),%eax
0859e28a +0x1b8:  add    $0x78,%eax
0859e28d +0x1bb:  mov    (%eax),%eax
0859e28f +0x1bd:  mov    %eax,0x4(%esp)
0859e293 +0x1c1:  mov    0x8(%ebp),%eax
0859e296 +0x1c4:  mov    %eax,(%esp)
0859e299 +0x1c7:  call   0859f75e <_ZN6CParty31get_blood_dungeon_admission_feeEP5CUser>  ; CParty::get_blood_dungeon_admission_fee(CUser*)
0859e29e +0x1cc:  mov    0x10(%ebp),%edx
0859e2a1 +0x1cf:  mov    %eax,0x4(%esp)
0859e2a5 +0x1d3:  mov    %edx,(%esp)
0859e2a8 +0x1d6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859e2ad +0x1db:  mov    -0x14(%ebp),%edx
0859e2b0 +0x1de:  mov    0x8(%ebp),%ecx
0859e2b3 +0x1e1:  mov    %edx,%eax
0859e2b5 +0x1e3:  add    %eax,%eax
0859e2b7 +0x1e5:  add    %edx,%eax
0859e2b9 +0x1e7:  shl    $0x3,%eax
0859e2bc +0x1ea:  lea    (%ecx,%eax,1),%eax
0859e2bf +0x1ed:  add    $0x78,%eax
0859e2c2 +0x1f0:  mov    (%eax),%eax
0859e2c4 +0x1f2:  movl   $0x1,0x4(%esp)
0859e2cc +0x1fa:  mov    %eax,(%esp)
0859e2cf +0x1fd:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0859e2d4 +0x202:  mov    %eax,(%esp)
0859e2d7 +0x205:  call   085bfe88 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x13e6>  ; global constructors keyed to CParty::cMember::cMember()+0x13e6
0859e2dc +0x20a:  mov    0x10(%ebp),%edx
0859e2df +0x20d:  mov    %eax,0x4(%esp)
0859e2e3 +0x211:  mov    %edx,(%esp)
0859e2e6 +0x214:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859e2eb +0x219:  mov    -0x14(%ebp),%edx
0859e2ee +0x21c:  mov    0x8(%ebp),%ecx
0859e2f1 +0x21f:  mov    %edx,%eax
0859e2f3 +0x221:  add    %eax,%eax
0859e2f5 +0x223:  add    %edx,%eax
0859e2f7 +0x225:  shl    $0x3,%eax
0859e2fa +0x228:  lea    (%ecx,%eax,1),%eax
0859e2fd +0x22b:  add    $0x78,%eax
0859e300 +0x22e:  mov    (%eax),%eax
0859e302 +0x230:  movl   $0x1,0x4(%esp)
0859e30a +0x238:  mov    %eax,(%esp)
0859e30d +0x23b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0859e312 +0x240:  mov    %eax,(%esp)
0859e315 +0x243:  call   085bfe94 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x13f2>  ; global constructors keyed to CParty::cMember::cMember()+0x13f2
0859e31a +0x248:  mov    0x10(%ebp),%edx
0859e31d +0x24b:  mov    %eax,0x4(%esp)
0859e321 +0x24f:  mov    %edx,(%esp)
0859e324 +0x252:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859e329 +0x257:  addl   $0x1,-0x10(%ebp)
0859e32d +0x25b:  lea    -0x24(%ebp),%eax
0859e330 +0x25e:  mov    %eax,(%esp)
0859e333 +0x261:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
0859e338 +0x266:  mov    0x8(%ebp),%eax
0859e33b +0x269:  mov    0x1868(%eax),%eax
0859e341 +0x26f:  mov    %eax,(%esp)
0859e344 +0x272:  call   085beda4 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x302>  ; global constructors keyed to CParty::cMember::cMember()+0x302
0859e349 +0x277:  lea    -0x1c(%ebp),%edx
0859e34c +0x27a:  mov    %eax,0x4(%esp)
0859e350 +0x27e:  mov    %edx,(%esp)
0859e353 +0x281:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0859e358 +0x286:  sub    $0x4,%esp
0859e35b +0x289:  lea    -0x1c(%ebp),%eax
0859e35e +0x28c:  mov    %eax,0x4(%esp)
0859e362 +0x290:  lea    -0x24(%ebp),%eax
0859e365 +0x293:  mov    %eax,(%esp)
0859e368 +0x296:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0859e36d +0x29b:  test   %al,%al
0859e36f +0x29d:  jne    0859e21f <+0x14d>
0859e375 +0x2a3:  mov    0x10(%ebp),%eax
0859e378 +0x2a6:  mov    -0x10(%ebp),%edx
0859e37b +0x2a9:  mov    %edx,0x8(%esp)
0859e37f +0x2ad:  lea    -0x20(%ebp),%edx
0859e382 +0x2b0:  mov    %edx,0x4(%esp)
0859e386 +0x2b4:  mov    %eax,(%esp)
0859e389 +0x2b7:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0859e38e +0x2bc:  addl   $0x1,-0x14(%ebp)
0859e392 +0x2c0:  cmpl   $0x3,-0x14(%ebp)
0859e396 +0x2c4:  setle  %al
0859e399 +0x2c7:  test   %al,%al
0859e39b +0x2c9:  jne    0859e185 <+0xb3>
0859e3a1 +0x2cf:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0859e3a6 +0x2d4:  movl   $0x2e,0x4(%esp)
0859e3ae +0x2dc:  mov    %eax,(%esp)
0859e3b1 +0x2df:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0859e3b6 +0x2e4:  mov    (%eax),%edx
0859e3b8 +0x2e6:  add    $0x34,%edx
0859e3bb +0x2e9:  mov    (%edx),%edx
0859e3bd +0x2eb:  movl   $0x0,0x4(%esp)
0859e3c5 +0x2f3:  mov    %eax,(%esp)
0859e3c8 +0x2f6:  call   *%edx
0859e3ca +0x2f8:  test   %al,%al
0859e3cc +0x2fa:  je     0859e3fc <+0x32a>
0859e3ce +0x2fc:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0859e3d3 +0x301:  movl   $0x2e,0x4(%esp)
0859e3db +0x309:  mov    %eax,(%esp)
0859e3de +0x30c:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0859e3e3 +0x311:  mov    %eax,(%esp)
0859e3e6 +0x314:  call   085bff26 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1484>  ; global constructors keyed to CParty::cMember::cMember()+0x1484
0859e3eb +0x319:  mov    0x10(%ebp),%edx
0859e3ee +0x31c:  mov    %eax,0x4(%esp)
0859e3f2 +0x320:  mov    %edx,(%esp)
0859e3f5 +0x323:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859e3fa +0x328:  jmp    0859e476 <+0x3a4>
0859e3fc +0x32a:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0859e401 +0x32f:  movl   $0x2d,0x4(%esp)
0859e409 +0x337:  mov    %eax,(%esp)
0859e40c +0x33a:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0859e411 +0x33f:  mov    (%eax),%edx
0859e413 +0x341:  add    $0x34,%edx
0859e416 +0x344:  mov    (%edx),%edx
0859e418 +0x346:  movl   $0x0,0x4(%esp)
0859e420 +0x34e:  mov    %eax,(%esp)
0859e423 +0x351:  call   *%edx
0859e425 +0x353:  test   %al,%al
0859e427 +0x355:  je     0859e457 <+0x385>
0859e429 +0x357:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0859e42e +0x35c:  movl   $0x2d,0x4(%esp)
0859e436 +0x364:  mov    %eax,(%esp)
0859e439 +0x367:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0859e43e +0x36c:  mov    %eax,(%esp)
0859e441 +0x36f:  call   085bff1a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1478>  ; global constructors keyed to CParty::cMember::cMember()+0x1478
0859e446 +0x374:  mov    0x10(%ebp),%edx
0859e449 +0x377:  mov    %eax,0x4(%esp)
0859e44d +0x37b:  mov    %edx,(%esp)
0859e450 +0x37e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859e455 +0x383:  jmp    0859e476 <+0x3a4>
0859e457 +0x385:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859e45c +0x38a:  add    $0x68,%eax
0859e45f +0x38d:  mov    %eax,(%esp)
0859e462 +0x390:  call   085bed44 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x2a2>  ; global constructors keyed to CParty::cMember::cMember()+0x2a2
0859e467 +0x395:  mov    0x10(%ebp),%edx
0859e46a +0x398:  mov    %eax,0x4(%esp)
0859e46e +0x39c:  mov    %edx,(%esp)
0859e471 +0x39f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859e476 +0x3a4:  mov    $0x1,%eax
0859e47b +0x3a9:  mov    -0x4(%ebp),%ebx
0859e47e +0x3ac:  leave
0859e47f +0x3ad:  ret
```

## 反编译 C

```c
// CParty::make_blood_dungeon_info @ 0x859e0d2

/* CParty::make_blood_dungeon_info(CUser*, PacketGuard&) */

undefined4 __thiscall
CParty::make_blood_dungeon_info(CParty *this,CUser *param_1,PacketGuard *param_2)

{
  char cVar1;
  bool bVar2;
  GameWorld *this_00;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  CCharacBloodDungeon *pCVar6;
  int *piVar7;
  CBloodDungeonRewardSecondEvent *this_01;
  CBloodDungeonRewardFirstEvent *this_02;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_28 [4];
  int local_24;
  __normal_iterator local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x1868) == 0) {
    this_00 = (GameWorld *)G_GameWorld();
    local_1c = GameWorld::GetWorldMapIndex(this_00,param_1);
    if (0 < local_1c) {
      iVar3 = G_CDataManager();
      uVar4 = CWorldMapList::find_world_map(iVar3 + 0x8780);
      *(undefined4 *)(this + 0x1868) = uVar4;
    }
  }
  if (*(int *)(this + 0x1868) == 0) {
    uVar4 = 0;
  }
  else {
    cVar1 = CWorldMap::hasDeathTower(*(CWorldMap **)(this + 0x1868));
    if (cVar1 == '\x01') {
      iVar3 = get_member_count(this);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,iVar3);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        cVar1 = _checkValidUser(this,local_18);
        if (cVar1 != '\0') {
          uVar5 = CUser::get_unique_id(*(CUser **)(this + local_18 * 0x18 + 0x78));
          InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,uVar5 & 0xffff);
          local_24 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_2);
          local_14 = 0;
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,0);
          CWorldMap::GetDungeonList(*(CWorldMap **)(this + 0x1868));
          std::vector<int,std::allocator<int>>::begin();
          while( true ) {
            CWorldMap::GetDungeonList(*(CWorldMap **)(this + 0x1868));
            std::vector<int,std::allocator<int>>::end();
            bVar2 = __gnu_cxx::operator!=(local_28,local_20);
            if (!bVar2) break;
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                      (local_28);
            iVar3 = G_CDataManager();
            local_10 = CDataManager::find_dungeon(iVar3);
            if ((local_10 != 0) && (*(char *)(local_10 + 0x89f) == '\x01')) {
              piVar7 = (int *)__gnu_cxx::
                              __normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                              operator*(local_28);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,*piVar7);
              iVar3 = get_blood_dungeon_admission_fee
                                (this,*(CUser **)(this + local_18 * 0x18 + 0x78));
              InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar3);
              pCVar6 = (CCharacBloodDungeon *)
                       CUser::GetCharacExpandData(*(CUser **)(this + local_18 * 0x18 + 0x78),1);
              iVar3 = CCharacBloodDungeon::GetEnterCount(pCVar6);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar3);
              pCVar6 = (CCharacBloodDungeon *)
                       CUser::GetCharacExpandData(*(CUser **)(this + local_18 * 0x18 + 0x78),1);
              iVar3 = CCharacBloodDungeon::GetWeeklyEnterCount(pCVar6);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar3);
              local_14 = local_14 + 1;
            }
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                      (local_28);
          }
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,&local_24,local_14);
        }
      }
      piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x2e);
      cVar1 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
      if (cVar1 == '\0') {
        piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x2d);
        cVar1 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
        if (cVar1 == '\0') {
          iVar3 = G_CDataManager();
          iVar3 = ServerParameterScript::GetJackpot((ServerParameterScript *)(iVar3 + 0x68));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar3);
        }
        else {
          this_02 = (CBloodDungeonRewardFirstEvent *)
                    CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x2d);
          iVar3 = CBloodDungeonRewardFirstEvent::GetGold(this_02);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar3);
        }
      }
      else {
        this_01 = (CBloodDungeonRewardSecondEvent *)
                  CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x2e);
        iVar3 = CBloodDungeonRewardSecondEvent::GetGold(this_01);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar3);
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
