# _LoadQuestShop

`_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA`

`DB_LoadEtc::_LoadQuestShop(unsigned int, CHARAC_QUEST_SHOP_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08404b72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08404b72  _ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA
#           DB_LoadEtc::_LoadQuestShop(unsigned int, CHARAC_QUEST_SHOP_DATA*)
# range [0x08404b72, 0x08405689]
08404b72 +0x000:  push   %ebp
08404b73 +0x001:  mov    %esp,%ebp
08404b75 +0x003:  push   %esi
08404b76 +0x004:  push   %ebx
08404b77 +0x005:  sub    $0x50,%esp
08404b7a +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08404b7f +0x00d:  movl   $0x0,0x8(%esp)
08404b87 +0x015:  movl   $0x2,0x4(%esp)
08404b8f +0x01d:  mov    %eax,(%esp)
08404b92 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08404b97 +0x025:  mov    %eax,-0x14(%ebp)
08404b9a +0x028:  mov    0x8(%ebp),%eax
08404b9d +0x02b:  mov    %eax,0x8(%esp)
08404ba1 +0x02f:  movl   $"seLect qp, init_count, max_hp, max_mp, psy_attack, psy_defense, mag_attack, mag_defence, move_speed, attack_speed, hp_regen, mp_regen, all_element_resist, fire_element_resist, water_element_resist, light_element_resist, dark_element_resist, all_element_attack,fire_element_attack, water_element_attack, light_element_attack, dark_element_attack, psy_critical, mag_critical, good_hit , evasion , hit_recovery , separate_psy_mag_attack , quest_piece from charac_quest_shop where charac_no=%u",0x4(%esp)
08404ba9 +0x037:  mov    -0x14(%ebp),%eax
08404bac +0x03a:  mov    %eax,(%esp)
08404baf +0x03d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08404bb4 +0x042:  movl   $0x1,0x4(%esp)
08404bbc +0x04a:  mov    -0x14(%ebp),%eax
08404bbf +0x04d:  mov    %eax,(%esp)
08404bc2 +0x050:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08404bc7 +0x055:  mov    %al,-0x15(%ebp)
08404bca +0x058:  movzbl -0x15(%ebp),%eax
08404bce +0x05c:  xor    $0x1,%eax
08404bd1 +0x05f:  test   %al,%al
08404bd3 +0x061:  je     08404bdf <+0x6d>
08404bd5 +0x063:  mov    $0x0,%ebx
08404bda +0x068:  jmp    08405681 <+0xb0f>
08404bdf +0x06d:  mov    -0x14(%ebp),%eax
08404be2 +0x070:  mov    %eax,(%esp)
08404be5 +0x073:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08404bea +0x078:  or     %edx,%eax
08404bec +0x07a:  test   %eax,%eax
08404bee +0x07c:  sete   %al
08404bf1 +0x07f:  test   %al,%al
08404bf3 +0x081:  je     08404bff <+0x8d>
08404bf5 +0x083:  mov    $0x1,%ebx
08404bfa +0x088:  jmp    08405681 <+0xb0f>
08404bff +0x08d:  mov    -0x14(%ebp),%eax
08404c02 +0x090:  mov    %eax,(%esp)
08404c05 +0x093:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08404c0a +0x098:  mov    %al,-0x15(%ebp)
08404c0d +0x09b:  movzbl -0x15(%ebp),%eax
08404c11 +0x09f:  xor    $0x1,%eax
08404c14 +0x0a2:  test   %al,%al
08404c16 +0x0a4:  je     08404c22 <+0xb0>
08404c18 +0x0a6:  mov    $0x0,%ebx
08404c1d +0x0ab:  jmp    08405681 <+0xb0f>
08404c22 +0x0b0:  movl   $0x0,-0x10(%ebp)
08404c29 +0x0b7:  mov    0xc(%ebp),%eax
08404c2c +0x0ba:  lea    0x4(%eax),%edx
08404c2f +0x0bd:  mov    -0x10(%ebp),%eax
08404c32 +0x0c0:  addl   $0x1,-0x10(%ebp)
08404c36 +0x0c4:  mov    %edx,0x8(%esp)
08404c3a +0x0c8:  mov    %eax,0x4(%esp)
08404c3e +0x0cc:  mov    -0x14(%ebp),%eax
08404c41 +0x0cf:  mov    %eax,(%esp)
08404c44 +0x0d2:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08404c49 +0x0d7:  mov    %al,-0x15(%ebp)
08404c4c +0x0da:  movzbl -0x15(%ebp),%eax
08404c50 +0x0de:  xor    $0x1,%eax
08404c53 +0x0e1:  test   %al,%al
08404c55 +0x0e3:  je     08404ca5 <+0x133>
08404c57 +0x0e5:  movl   $0x5,0xc(%esp)
08404c5f +0x0ed:  movl   $0x17ea,0x8(%esp)
08404c67 +0x0f5:  movl   $&_ZZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08404c6f +0x0fd:  lea    -0x38(%ebp),%eax
08404c72 +0x100:  mov    %eax,(%esp)
08404c75 +0x103:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08404c7a +0x108:  mov    0x8(%ebp),%eax
08404c7d +0x10b:  mov    %eax,0xc(%esp)
08404c81 +0x10f:  mov    -0x10(%ebp),%eax
08404c84 +0x112:  mov    %eax,0x8(%esp)
08404c88 +0x116:  movl   $"DB_LoadEtc::LoadQuestShope, get(%d) ERROR charac_no=%u",0x4(%esp)
08404c90 +0x11e:  lea    -0x38(%ebp),%eax
08404c93 +0x121:  mov    %eax,(%esp)
08404c96 +0x124:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08404c9b +0x129:  mov    $0x0,%ebx
08404ca0 +0x12e:  jmp    08405681 <+0xb0f>
08404ca5 +0x133:  mov    0xc(%ebp),%eax
08404ca8 +0x136:  lea    0x8(%eax),%edx
08404cab +0x139:  mov    -0x10(%ebp),%eax
08404cae +0x13c:  addl   $0x1,-0x10(%ebp)
08404cb2 +0x140:  mov    %edx,0x8(%esp)
08404cb6 +0x144:  mov    %eax,0x4(%esp)
08404cba +0x148:  mov    -0x14(%ebp),%eax
08404cbd +0x14b:  mov    %eax,(%esp)
08404cc0 +0x14e:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08404cc5 +0x153:  mov    %al,-0x15(%ebp)
08404cc8 +0x156:  movzbl -0x15(%ebp),%eax
08404ccc +0x15a:  xor    $0x1,%eax
08404ccf +0x15d:  test   %al,%al
08404cd1 +0x15f:  je     08404d21 <+0x1af>
08404cd3 +0x161:  movl   $0x5,0xc(%esp)
08404cdb +0x169:  movl   $0x17f1,0x8(%esp)
08404ce3 +0x171:  movl   $&_ZZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08404ceb +0x179:  lea    -0x28(%ebp),%eax
08404cee +0x17c:  mov    %eax,(%esp)
08404cf1 +0x17f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08404cf6 +0x184:  mov    0x8(%ebp),%eax
08404cf9 +0x187:  mov    %eax,0xc(%esp)
08404cfd +0x18b:  mov    -0x10(%ebp),%eax
08404d00 +0x18e:  mov    %eax,0x8(%esp)
08404d04 +0x192:  movl   $"DB_LoadEtc::LoadQuestShope, get(%d) ERROR charac_no=%u",0x4(%esp)
08404d0c +0x19a:  lea    -0x28(%ebp),%eax
08404d0f +0x19d:  mov    %eax,(%esp)
08404d12 +0x1a0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08404d17 +0x1a5:  mov    $0x0,%ebx
08404d1c +0x1aa:  jmp    08405681 <+0xb0f>
08404d21 +0x1af:  mov    0xc(%ebp),%eax
08404d24 +0x1b2:  lea    0x26(%eax),%edx
08404d27 +0x1b5:  mov    -0x10(%ebp),%eax
08404d2a +0x1b8:  addl   $0x1,-0x10(%ebp)
08404d2e +0x1bc:  mov    %edx,0x8(%esp)
08404d32 +0x1c0:  mov    %eax,0x4(%esp)
08404d36 +0x1c4:  mov    -0x14(%ebp),%eax
08404d39 +0x1c7:  mov    %eax,(%esp)
08404d3c +0x1ca:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08404d41 +0x1cf:  xor    $0x1,%eax
08404d44 +0x1d2:  test   %al,%al
08404d46 +0x1d4:  je     08404d74 <+0x202>
08404d48 +0x1d6:  movl   $0x4,(%esp)
08404d4f +0x1dd:  call   08725800 <__cxa_allocate_exception>
08404d54 +0x1e2:  mov    %eax,%edx
08404d56 +0x1e4:  movl   $0x17f7,(%edx)
08404d5c +0x1ea:  movl   $0x0,0x8(%esp)
08404d64 +0x1f2:  movl   $&_ZTIi,0x4(%esp)
08404d6c +0x1fa:  mov    %eax,(%esp)
08404d6f +0x1fd:  call   08724c50 <__cxa_throw>
08404d74 +0x202:  mov    0xc(%ebp),%eax
08404d77 +0x205:  lea    0x6c(%eax),%edx
08404d7a +0x208:  mov    -0x10(%ebp),%eax
08404d7d +0x20b:  addl   $0x1,-0x10(%ebp)
08404d81 +0x20f:  mov    %edx,0x8(%esp)
08404d85 +0x213:  mov    %eax,0x4(%esp)
08404d89 +0x217:  mov    -0x14(%ebp),%eax
08404d8c +0x21a:  mov    %eax,(%esp)
08404d8f +0x21d:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08404d94 +0x222:  xor    $0x1,%eax
08404d97 +0x225:  test   %al,%al
08404d99 +0x227:  je     08404dc7 <+0x255>
08404d9b +0x229:  movl   $0x4,(%esp)
08404da2 +0x230:  call   08725800 <__cxa_allocate_exception>
08404da7 +0x235:  mov    %eax,%edx
08404da9 +0x237:  movl   $0x17f8,(%edx)
08404daf +0x23d:  movl   $0x0,0x8(%esp)
08404db7 +0x245:  movl   $&_ZTIi,0x4(%esp)
08404dbf +0x24d:  mov    %eax,(%esp)
08404dc2 +0x250:  call   08724c50 <__cxa_throw>
08404dc7 +0x255:  mov    0xc(%ebp),%eax
08404dca +0x258:  lea    0xc(%eax),%edx
08404dcd +0x25b:  mov    -0x10(%ebp),%eax
08404dd0 +0x25e:  addl   $0x1,-0x10(%ebp)
08404dd4 +0x262:  mov    %edx,0x8(%esp)
08404dd8 +0x266:  mov    %eax,0x4(%esp)
08404ddc +0x26a:  mov    -0x14(%ebp),%eax
08404ddf +0x26d:  mov    %eax,(%esp)
08404de2 +0x270:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08404de7 +0x275:  xor    $0x1,%eax
08404dea +0x278:  test   %al,%al
08404dec +0x27a:  je     08404e1a <+0x2a8>
08404dee +0x27c:  movl   $0x4,(%esp)
08404df5 +0x283:  call   08725800 <__cxa_allocate_exception>
08404dfa +0x288:  mov    %eax,%edx
08404dfc +0x28a:  movl   $0x17f9,(%edx)
08404e02 +0x290:  movl   $0x0,0x8(%esp)
08404e0a +0x298:  movl   $&_ZTIi,0x4(%esp)
08404e12 +0x2a0:  mov    %eax,(%esp)
08404e15 +0x2a3:  call   08724c50 <__cxa_throw>
08404e1a +0x2a8:  mov    0xc(%ebp),%eax
08404e1d +0x2ab:  lea    0x12(%eax),%edx
08404e20 +0x2ae:  mov    -0x10(%ebp),%eax
08404e23 +0x2b1:  addl   $0x1,-0x10(%ebp)
08404e27 +0x2b5:  mov    %edx,0x8(%esp)
08404e2b +0x2b9:  mov    %eax,0x4(%esp)
08404e2f +0x2bd:  mov    -0x14(%ebp),%eax
08404e32 +0x2c0:  mov    %eax,(%esp)
08404e35 +0x2c3:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08404e3a +0x2c8:  xor    $0x1,%eax
08404e3d +0x2cb:  test   %al,%al
08404e3f +0x2cd:  je     08404e6d <+0x2fb>
08404e41 +0x2cf:  movl   $0x4,(%esp)
08404e48 +0x2d6:  call   08725800 <__cxa_allocate_exception>
08404e4d +0x2db:  mov    %eax,%edx
08404e4f +0x2dd:  movl   $0x17fa,(%edx)
08404e55 +0x2e3:  movl   $0x0,0x8(%esp)
08404e5d +0x2eb:  movl   $&_ZTIi,0x4(%esp)
08404e65 +0x2f3:  mov    %eax,(%esp)
08404e68 +0x2f6:  call   08724c50 <__cxa_throw>
08404e6d +0x2fb:  mov    0xc(%ebp),%eax
08404e70 +0x2fe:  lea    0xe(%eax),%edx
08404e73 +0x301:  mov    -0x10(%ebp),%eax
08404e76 +0x304:  addl   $0x1,-0x10(%ebp)
08404e7a +0x308:  mov    %edx,0x8(%esp)
08404e7e +0x30c:  mov    %eax,0x4(%esp)
08404e82 +0x310:  mov    -0x14(%ebp),%eax
08404e85 +0x313:  mov    %eax,(%esp)
08404e88 +0x316:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08404e8d +0x31b:  xor    $0x1,%eax
08404e90 +0x31e:  test   %al,%al
08404e92 +0x320:  je     08404ec0 <+0x34e>
08404e94 +0x322:  movl   $0x4,(%esp)
08404e9b +0x329:  call   08725800 <__cxa_allocate_exception>
08404ea0 +0x32e:  mov    %eax,%edx
08404ea2 +0x330:  movl   $0x17fb,(%edx)
08404ea8 +0x336:  movl   $0x0,0x8(%esp)
08404eb0 +0x33e:  movl   $&_ZTIi,0x4(%esp)
08404eb8 +0x346:  mov    %eax,(%esp)
08404ebb +0x349:  call   08724c50 <__cxa_throw>
08404ec0 +0x34e:  mov    0xc(%ebp),%eax
08404ec3 +0x351:  lea    0x10(%eax),%edx
08404ec6 +0x354:  mov    -0x10(%ebp),%eax
08404ec9 +0x357:  addl   $0x1,-0x10(%ebp)
08404ecd +0x35b:  mov    %edx,0x8(%esp)
08404ed1 +0x35f:  mov    %eax,0x4(%esp)
08404ed5 +0x363:  mov    -0x14(%ebp),%eax
08404ed8 +0x366:  mov    %eax,(%esp)
08404edb +0x369:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08404ee0 +0x36e:  xor    $0x1,%eax
08404ee3 +0x371:  test   %al,%al
08404ee5 +0x373:  je     08404f13 <+0x3a1>
08404ee7 +0x375:  movl   $0x4,(%esp)
08404eee +0x37c:  call   08725800 <__cxa_allocate_exception>
08404ef3 +0x381:  mov    %eax,%edx
08404ef5 +0x383:  movl   $0x17fc,(%edx)
08404efb +0x389:  movl   $0x0,0x8(%esp)
08404f03 +0x391:  movl   $&_ZTIi,0x4(%esp)
08404f0b +0x399:  mov    %eax,(%esp)
08404f0e +0x39c:  call   08724c50 <__cxa_throw>
08404f13 +0x3a1:  mov    0xc(%ebp),%eax
08404f16 +0x3a4:  lea    0x22(%eax),%edx
08404f19 +0x3a7:  mov    -0x10(%ebp),%eax
08404f1c +0x3aa:  addl   $0x1,-0x10(%ebp)
08404f20 +0x3ae:  mov    %edx,0x8(%esp)
08404f24 +0x3b2:  mov    %eax,0x4(%esp)
08404f28 +0x3b6:  mov    -0x14(%ebp),%eax
08404f2b +0x3b9:  mov    %eax,(%esp)
08404f2e +0x3bc:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08404f33 +0x3c1:  xor    $0x1,%eax
08404f36 +0x3c4:  test   %al,%al
08404f38 +0x3c6:  je     08404f66 <+0x3f4>
08404f3a +0x3c8:  movl   $0x4,(%esp)
08404f41 +0x3cf:  call   08725800 <__cxa_allocate_exception>
08404f46 +0x3d4:  mov    %eax,%edx
08404f48 +0x3d6:  movl   $0x17fd,(%edx)
08404f4e +0x3dc:  movl   $0x0,0x8(%esp)
08404f56 +0x3e4:  movl   $&_ZTIi,0x4(%esp)
08404f5e +0x3ec:  mov    %eax,(%esp)
08404f61 +0x3ef:  call   08724c50 <__cxa_throw>
08404f66 +0x3f4:  mov    0xc(%ebp),%eax
08404f69 +0x3f7:  lea    0x20(%eax),%edx
08404f6c +0x3fa:  mov    -0x10(%ebp),%eax
08404f6f +0x3fd:  addl   $0x1,-0x10(%ebp)
08404f73 +0x401:  mov    %edx,0x8(%esp)
08404f77 +0x405:  mov    %eax,0x4(%esp)
08404f7b +0x409:  mov    -0x14(%ebp),%eax
08404f7e +0x40c:  mov    %eax,(%esp)
08404f81 +0x40f:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08404f86 +0x414:  xor    $0x1,%eax
08404f89 +0x417:  test   %al,%al
08404f8b +0x419:  je     08404fb9 <+0x447>
08404f8d +0x41b:  movl   $0x4,(%esp)
08404f94 +0x422:  call   08725800 <__cxa_allocate_exception>
08404f99 +0x427:  mov    %eax,%edx
08404f9b +0x429:  movl   $0x17fe,(%edx)
08404fa1 +0x42f:  movl   $0x0,0x8(%esp)
08404fa9 +0x437:  movl   $&_ZTIi,0x4(%esp)
08404fb1 +0x43f:  mov    %eax,(%esp)
08404fb4 +0x442:  call   08724c50 <__cxa_throw>
08404fb9 +0x447:  mov    0xc(%ebp),%eax
08404fbc +0x44a:  lea    0x28(%eax),%edx
08404fbf +0x44d:  mov    -0x10(%ebp),%eax
08404fc2 +0x450:  addl   $0x1,-0x10(%ebp)
08404fc6 +0x454:  mov    %edx,0x8(%esp)
08404fca +0x458:  mov    %eax,0x4(%esp)
08404fce +0x45c:  mov    -0x14(%ebp),%eax
08404fd1 +0x45f:  mov    %eax,(%esp)
08404fd4 +0x462:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08404fd9 +0x467:  xor    $0x1,%eax
08404fdc +0x46a:  test   %al,%al
08404fde +0x46c:  je     0840500c <+0x49a>
08404fe0 +0x46e:  movl   $0x4,(%esp)
08404fe7 +0x475:  call   08725800 <__cxa_allocate_exception>
08404fec +0x47a:  mov    %eax,%edx
08404fee +0x47c:  movl   $0x17ff,(%edx)
08404ff4 +0x482:  movl   $0x0,0x8(%esp)
08404ffc +0x48a:  movl   $&_ZTIi,0x4(%esp)
08405004 +0x492:  mov    %eax,(%esp)
08405007 +0x495:  call   08724c50 <__cxa_throw>
0840500c +0x49a:  mov    0xc(%ebp),%eax
0840500f +0x49d:  lea    0x46(%eax),%edx
08405012 +0x4a0:  mov    -0x10(%ebp),%eax
08405015 +0x4a3:  addl   $0x1,-0x10(%ebp)
08405019 +0x4a7:  mov    %edx,0x8(%esp)
0840501d +0x4ab:  mov    %eax,0x4(%esp)
08405021 +0x4af:  mov    -0x14(%ebp),%eax
08405024 +0x4b2:  mov    %eax,(%esp)
08405027 +0x4b5:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840502c +0x4ba:  xor    $0x1,%eax
0840502f +0x4bd:  test   %al,%al
08405031 +0x4bf:  je     0840505f <+0x4ed>
08405033 +0x4c1:  movl   $0x4,(%esp)
0840503a +0x4c8:  call   08725800 <__cxa_allocate_exception>
0840503f +0x4cd:  mov    %eax,%edx
08405041 +0x4cf:  movl   $0x1800,(%edx)
08405047 +0x4d5:  movl   $0x0,0x8(%esp)
0840504f +0x4dd:  movl   $&_ZTIi,0x4(%esp)
08405057 +0x4e5:  mov    %eax,(%esp)
0840505a +0x4e8:  call   08724c50 <__cxa_throw>
0840505f +0x4ed:  mov    0xc(%ebp),%eax
08405062 +0x4f0:  lea    0x3c(%eax),%edx
08405065 +0x4f3:  mov    -0x10(%ebp),%eax
08405068 +0x4f6:  addl   $0x1,-0x10(%ebp)
0840506c +0x4fa:  mov    %edx,0x8(%esp)
08405070 +0x4fe:  mov    %eax,0x4(%esp)
08405074 +0x502:  mov    -0x14(%ebp),%eax
08405077 +0x505:  mov    %eax,(%esp)
0840507a +0x508:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840507f +0x50d:  xor    $0x1,%eax
08405082 +0x510:  test   %al,%al
08405084 +0x512:  je     084050b2 <+0x540>
08405086 +0x514:  movl   $0x4,(%esp)
0840508d +0x51b:  call   08725800 <__cxa_allocate_exception>
08405092 +0x520:  mov    %eax,%edx
08405094 +0x522:  movl   $0x1801,(%edx)
0840509a +0x528:  movl   $0x0,0x8(%esp)
084050a2 +0x530:  movl   $&_ZTIi,0x4(%esp)
084050aa +0x538:  mov    %eax,(%esp)
084050ad +0x53b:  call   08724c50 <__cxa_throw>
084050b2 +0x540:  mov    0xc(%ebp),%eax
084050b5 +0x543:  lea    0x34(%eax),%edx
084050b8 +0x546:  mov    -0x10(%ebp),%eax
084050bb +0x549:  addl   $0x1,-0x10(%ebp)
084050bf +0x54d:  mov    %edx,0x8(%esp)
084050c3 +0x551:  mov    %eax,0x4(%esp)
084050c7 +0x555:  mov    -0x14(%ebp),%eax
084050ca +0x558:  mov    %eax,(%esp)
084050cd +0x55b:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
084050d2 +0x560:  xor    $0x1,%eax
084050d5 +0x563:  test   %al,%al
084050d7 +0x565:  je     08405105 <+0x593>
084050d9 +0x567:  movl   $0x4,(%esp)
084050e0 +0x56e:  call   08725800 <__cxa_allocate_exception>
084050e5 +0x573:  mov    %eax,%edx
084050e7 +0x575:  movl   $0x1802,(%edx)
084050ed +0x57b:  movl   $0x0,0x8(%esp)
084050f5 +0x583:  movl   $&_ZTIi,0x4(%esp)
084050fd +0x58b:  mov    %eax,(%esp)
08405100 +0x58e:  call   08724c50 <__cxa_throw>
08405105 +0x593:  mov    0xc(%ebp),%eax
08405108 +0x596:  lea    0x36(%eax),%edx
0840510b +0x599:  mov    -0x10(%ebp),%eax
0840510e +0x59c:  addl   $0x1,-0x10(%ebp)
08405112 +0x5a0:  mov    %edx,0x8(%esp)
08405116 +0x5a4:  mov    %eax,0x4(%esp)
0840511a +0x5a8:  mov    -0x14(%ebp),%eax
0840511d +0x5ab:  mov    %eax,(%esp)
08405120 +0x5ae:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08405125 +0x5b3:  xor    $0x1,%eax
08405128 +0x5b6:  test   %al,%al
0840512a +0x5b8:  je     08405158 <+0x5e6>
0840512c +0x5ba:  movl   $0x4,(%esp)
08405133 +0x5c1:  call   08725800 <__cxa_allocate_exception>
08405138 +0x5c6:  mov    %eax,%edx
0840513a +0x5c8:  movl   $0x1803,(%edx)
08405140 +0x5ce:  movl   $0x0,0x8(%esp)
08405148 +0x5d6:  movl   $&_ZTIi,0x4(%esp)
08405150 +0x5de:  mov    %eax,(%esp)
08405153 +0x5e1:  call   08724c50 <__cxa_throw>
08405158 +0x5e6:  mov    0xc(%ebp),%eax
0840515b +0x5e9:  lea    0x3a(%eax),%edx
0840515e +0x5ec:  mov    -0x10(%ebp),%eax
08405161 +0x5ef:  addl   $0x1,-0x10(%ebp)
08405165 +0x5f3:  mov    %edx,0x8(%esp)
08405169 +0x5f7:  mov    %eax,0x4(%esp)
0840516d +0x5fb:  mov    -0x14(%ebp),%eax
08405170 +0x5fe:  mov    %eax,(%esp)
08405173 +0x601:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08405178 +0x606:  xor    $0x1,%eax
0840517b +0x609:  test   %al,%al
0840517d +0x60b:  je     084051ab <+0x639>
0840517f +0x60d:  movl   $0x4,(%esp)
08405186 +0x614:  call   08725800 <__cxa_allocate_exception>
0840518b +0x619:  mov    %eax,%edx
0840518d +0x61b:  movl   $0x1804,(%edx)
08405193 +0x621:  movl   $0x0,0x8(%esp)
0840519b +0x629:  movl   $&_ZTIi,0x4(%esp)
084051a3 +0x631:  mov    %eax,(%esp)
084051a6 +0x634:  call   08724c50 <__cxa_throw>
084051ab +0x639:  mov    0xc(%ebp),%eax
084051ae +0x63c:  lea    0x38(%eax),%edx
084051b1 +0x63f:  mov    -0x10(%ebp),%eax
084051b4 +0x642:  addl   $0x1,-0x10(%ebp)
084051b8 +0x646:  mov    %edx,0x8(%esp)
084051bc +0x64a:  mov    %eax,0x4(%esp)
084051c0 +0x64e:  mov    -0x14(%ebp),%eax
084051c3 +0x651:  mov    %eax,(%esp)
084051c6 +0x654:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
084051cb +0x659:  xor    $0x1,%eax
084051ce +0x65c:  test   %al,%al
084051d0 +0x65e:  je     084051fe <+0x68c>
084051d2 +0x660:  movl   $0x4,(%esp)
084051d9 +0x667:  call   08725800 <__cxa_allocate_exception>
084051de +0x66c:  mov    %eax,%edx
084051e0 +0x66e:  movl   $0x1805,(%edx)
084051e6 +0x674:  movl   $0x0,0x8(%esp)
084051ee +0x67c:  movl   $&_ZTIi,0x4(%esp)
084051f6 +0x684:  mov    %eax,(%esp)
084051f9 +0x687:  call   08724c50 <__cxa_throw>
084051fe +0x68c:  mov    0xc(%ebp),%eax
08405201 +0x68f:  lea    0x68(%eax),%edx
08405204 +0x692:  mov    -0x10(%ebp),%eax
08405207 +0x695:  addl   $0x1,-0x10(%ebp)
0840520b +0x699:  mov    %edx,0x8(%esp)
0840520f +0x69d:  mov    %eax,0x4(%esp)
08405213 +0x6a1:  mov    -0x14(%ebp),%eax
08405216 +0x6a4:  mov    %eax,(%esp)
08405219 +0x6a7:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840521e +0x6ac:  xor    $0x1,%eax
08405221 +0x6af:  test   %al,%al
08405223 +0x6b1:  je     08405251 <+0x6df>
08405225 +0x6b3:  movl   $0x4,(%esp)
0840522c +0x6ba:  call   08725800 <__cxa_allocate_exception>
08405231 +0x6bf:  mov    %eax,%edx
08405233 +0x6c1:  movl   $0x1806,(%edx)
08405239 +0x6c7:  movl   $0x0,0x8(%esp)
08405241 +0x6cf:  movl   $&_ZTIi,0x4(%esp)
08405249 +0x6d7:  mov    %eax,(%esp)
0840524c +0x6da:  call   08724c50 <__cxa_throw>
08405251 +0x6df:  mov    0xc(%ebp),%eax
08405254 +0x6e2:  lea    0x60(%eax),%edx
08405257 +0x6e5:  mov    -0x10(%ebp),%eax
0840525a +0x6e8:  addl   $0x1,-0x10(%ebp)
0840525e +0x6ec:  mov    %edx,0x8(%esp)
08405262 +0x6f0:  mov    %eax,0x4(%esp)
08405266 +0x6f4:  mov    -0x14(%ebp),%eax
08405269 +0x6f7:  mov    %eax,(%esp)
0840526c +0x6fa:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08405271 +0x6ff:  xor    $0x1,%eax
08405274 +0x702:  test   %al,%al
08405276 +0x704:  je     084052a4 <+0x732>
08405278 +0x706:  movl   $0x4,(%esp)
0840527f +0x70d:  call   08725800 <__cxa_allocate_exception>
08405284 +0x712:  mov    %eax,%edx
08405286 +0x714:  movl   $0x1807,(%edx)
0840528c +0x71a:  movl   $0x0,0x8(%esp)
08405294 +0x722:  movl   $&_ZTIi,0x4(%esp)
0840529c +0x72a:  mov    %eax,(%esp)
0840529f +0x72d:  call   08724c50 <__cxa_throw>
084052a4 +0x732:  mov    0xc(%ebp),%eax
084052a7 +0x735:  lea    0x62(%eax),%edx
084052aa +0x738:  mov    -0x10(%ebp),%eax
084052ad +0x73b:  addl   $0x1,-0x10(%ebp)
084052b1 +0x73f:  mov    %edx,0x8(%esp)
084052b5 +0x743:  mov    %eax,0x4(%esp)
084052b9 +0x747:  mov    -0x14(%ebp),%eax
084052bc +0x74a:  mov    %eax,(%esp)
084052bf +0x74d:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
084052c4 +0x752:  xor    $0x1,%eax
084052c7 +0x755:  test   %al,%al
084052c9 +0x757:  je     084052f7 <+0x785>
084052cb +0x759:  movl   $0x4,(%esp)
084052d2 +0x760:  call   08725800 <__cxa_allocate_exception>
084052d7 +0x765:  mov    %eax,%edx
084052d9 +0x767:  movl   $0x1808,(%edx)
084052df +0x76d:  movl   $0x0,0x8(%esp)
084052e7 +0x775:  movl   $&_ZTIi,0x4(%esp)
084052ef +0x77d:  mov    %eax,(%esp)
084052f2 +0x780:  call   08724c50 <__cxa_throw>
084052f7 +0x785:  mov    0xc(%ebp),%eax
084052fa +0x788:  lea    0x66(%eax),%edx
084052fd +0x78b:  mov    -0x10(%ebp),%eax
08405300 +0x78e:  addl   $0x1,-0x10(%ebp)
08405304 +0x792:  mov    %edx,0x8(%esp)
08405308 +0x796:  mov    %eax,0x4(%esp)
0840530c +0x79a:  mov    -0x14(%ebp),%eax
0840530f +0x79d:  mov    %eax,(%esp)
08405312 +0x7a0:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08405317 +0x7a5:  xor    $0x1,%eax
0840531a +0x7a8:  test   %al,%al
0840531c +0x7aa:  je     0840534a <+0x7d8>
0840531e +0x7ac:  movl   $0x4,(%esp)
08405325 +0x7b3:  call   08725800 <__cxa_allocate_exception>
0840532a +0x7b8:  mov    %eax,%edx
0840532c +0x7ba:  movl   $0x1809,(%edx)
08405332 +0x7c0:  movl   $0x0,0x8(%esp)
0840533a +0x7c8:  movl   $&_ZTIi,0x4(%esp)
08405342 +0x7d0:  mov    %eax,(%esp)
08405345 +0x7d3:  call   08724c50 <__cxa_throw>
0840534a +0x7d8:  mov    0xc(%ebp),%eax
0840534d +0x7db:  lea    0x64(%eax),%edx
08405350 +0x7de:  mov    -0x10(%ebp),%eax
08405353 +0x7e1:  addl   $0x1,-0x10(%ebp)
08405357 +0x7e5:  mov    %edx,0x8(%esp)
0840535b +0x7e9:  mov    %eax,0x4(%esp)
0840535f +0x7ed:  mov    -0x14(%ebp),%eax
08405362 +0x7f0:  mov    %eax,(%esp)
08405365 +0x7f3:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840536a +0x7f8:  xor    $0x1,%eax
0840536d +0x7fb:  test   %al,%al
0840536f +0x7fd:  je     0840539d <+0x82b>
08405371 +0x7ff:  movl   $0x4,(%esp)
08405378 +0x806:  call   08725800 <__cxa_allocate_exception>
0840537d +0x80b:  mov    %eax,%edx
0840537f +0x80d:  movl   $0x180a,(%edx)
08405385 +0x813:  movl   $0x0,0x8(%esp)
0840538d +0x81b:  movl   $&_ZTIi,0x4(%esp)
08405395 +0x823:  mov    %eax,(%esp)
08405398 +0x826:  call   08724c50 <__cxa_throw>
0840539d +0x82b:  mov    0xc(%ebp),%eax
084053a0 +0x82e:  lea    0x2a(%eax),%edx
084053a3 +0x831:  mov    -0x10(%ebp),%eax
084053a6 +0x834:  addl   $0x1,-0x10(%ebp)
084053aa +0x838:  mov    %edx,0x8(%esp)
084053ae +0x83c:  mov    %eax,0x4(%esp)
084053b2 +0x840:  mov    -0x14(%ebp),%eax
084053b5 +0x843:  mov    %eax,(%esp)
084053b8 +0x846:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
084053bd +0x84b:  xor    $0x1,%eax
084053c0 +0x84e:  test   %al,%al
084053c2 +0x850:  je     084053f0 <+0x87e>
084053c4 +0x852:  movl   $0x4,(%esp)
084053cb +0x859:  call   08725800 <__cxa_allocate_exception>
084053d0 +0x85e:  mov    %eax,%edx
084053d2 +0x860:  movl   $0x180b,(%edx)
084053d8 +0x866:  movl   $0x0,0x8(%esp)
084053e0 +0x86e:  movl   $&_ZTIi,0x4(%esp)
084053e8 +0x876:  mov    %eax,(%esp)
084053eb +0x879:  call   08724c50 <__cxa_throw>
084053f0 +0x87e:  mov    0xc(%ebp),%eax
084053f3 +0x881:  lea    0x2c(%eax),%edx
084053f6 +0x884:  mov    -0x10(%ebp),%eax
084053f9 +0x887:  addl   $0x1,-0x10(%ebp)
084053fd +0x88b:  mov    %edx,0x8(%esp)
08405401 +0x88f:  mov    %eax,0x4(%esp)
08405405 +0x893:  mov    -0x14(%ebp),%eax
08405408 +0x896:  mov    %eax,(%esp)
0840540b +0x899:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08405410 +0x89e:  xor    $0x1,%eax
08405413 +0x8a1:  test   %al,%al
08405415 +0x8a3:  je     08405443 <+0x8d1>
08405417 +0x8a5:  movl   $0x4,(%esp)
0840541e +0x8ac:  call   08725800 <__cxa_allocate_exception>
08405423 +0x8b1:  mov    %eax,%edx
08405425 +0x8b3:  movl   $0x180c,(%edx)
0840542b +0x8b9:  movl   $0x0,0x8(%esp)
08405433 +0x8c1:  movl   $&_ZTIi,0x4(%esp)
0840543b +0x8c9:  mov    %eax,(%esp)
0840543e +0x8cc:  call   08724c50 <__cxa_throw>
08405443 +0x8d1:  mov    0xc(%ebp),%eax
08405446 +0x8d4:  lea    0x4e(%eax),%edx
08405449 +0x8d7:  mov    -0x10(%ebp),%eax
0840544c +0x8da:  addl   $0x1,-0x10(%ebp)
08405450 +0x8de:  mov    %edx,0x8(%esp)
08405454 +0x8e2:  mov    %eax,0x4(%esp)
08405458 +0x8e6:  mov    -0x14(%ebp),%eax
0840545b +0x8e9:  mov    %eax,(%esp)
0840545e +0x8ec:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08405463 +0x8f1:  xor    $0x1,%eax
08405466 +0x8f4:  test   %al,%al
08405468 +0x8f6:  je     08405496 <+0x924>
0840546a +0x8f8:  movl   $0x4,(%esp)
08405471 +0x8ff:  call   08725800 <__cxa_allocate_exception>
08405476 +0x904:  mov    %eax,%edx
08405478 +0x906:  movl   $0x180d,(%edx)
0840547e +0x90c:  movl   $0x0,0x8(%esp)
08405486 +0x914:  movl   $&_ZTIi,0x4(%esp)
0840548e +0x91c:  mov    %eax,(%esp)
08405491 +0x91f:  call   08724c50 <__cxa_throw>
08405496 +0x924:  mov    0xc(%ebp),%eax
08405499 +0x927:  lea    0x42(%eax),%edx
0840549c +0x92a:  mov    -0x10(%ebp),%eax
0840549f +0x92d:  addl   $0x1,-0x10(%ebp)
084054a3 +0x931:  mov    %edx,0x8(%esp)
084054a7 +0x935:  mov    %eax,0x4(%esp)
084054ab +0x939:  mov    -0x14(%ebp),%eax
084054ae +0x93c:  mov    %eax,(%esp)
084054b1 +0x93f:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
084054b6 +0x944:  xor    $0x1,%eax
084054b9 +0x947:  test   %al,%al
084054bb +0x949:  je     084054e9 <+0x977>
084054bd +0x94b:  movl   $0x4,(%esp)
084054c4 +0x952:  call   08725800 <__cxa_allocate_exception>
084054c9 +0x957:  mov    %eax,%edx
084054cb +0x959:  movl   $0x180e,(%edx)
084054d1 +0x95f:  movl   $0x0,0x8(%esp)
084054d9 +0x967:  movl   $&_ZTIi,0x4(%esp)
084054e1 +0x96f:  mov    %eax,(%esp)
084054e4 +0x972:  call   08724c50 <__cxa_throw>
084054e9 +0x977:  mov    0xc(%ebp),%eax
084054ec +0x97a:  lea    0x48(%eax),%edx
084054ef +0x97d:  mov    -0x10(%ebp),%eax
084054f2 +0x980:  addl   $0x1,-0x10(%ebp)
084054f6 +0x984:  mov    %edx,0x8(%esp)
084054fa +0x988:  mov    %eax,0x4(%esp)
084054fe +0x98c:  mov    -0x14(%ebp),%eax
08405501 +0x98f:  mov    %eax,(%esp)
08405504 +0x992:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08405509 +0x997:  xor    $0x1,%eax
0840550c +0x99a:  test   %al,%al
0840550e +0x99c:  je     0840553c <+0x9ca>
08405510 +0x99e:  movl   $0x4,(%esp)
08405517 +0x9a5:  call   08725800 <__cxa_allocate_exception>
0840551c +0x9aa:  mov    %eax,%edx
0840551e +0x9ac:  movl   $0x180f,(%edx)
08405524 +0x9b2:  movl   $0x0,0x8(%esp)
0840552c +0x9ba:  movl   $&_ZTIi,0x4(%esp)
08405534 +0x9c2:  mov    %eax,(%esp)
08405537 +0x9c5:  call   08724c50 <__cxa_throw>
0840553c +0x9ca:  mov    0xc(%ebp),%eax
0840553f +0x9cd:  lea    0x76(%eax),%edx
08405542 +0x9d0:  mov    -0x10(%ebp),%eax
08405545 +0x9d3:  addl   $0x1,-0x10(%ebp)
08405549 +0x9d7:  mov    %edx,0x8(%esp)
0840554d +0x9db:  mov    %eax,0x4(%esp)
08405551 +0x9df:  mov    -0x14(%ebp),%eax
08405554 +0x9e2:  mov    %eax,(%esp)
08405557 +0x9e5:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840555c +0x9ea:  xor    $0x1,%eax
0840555f +0x9ed:  test   %al,%al
08405561 +0x9ef:  je     0840558f <+0xa1d>
08405563 +0x9f1:  movl   $0x4,(%esp)
0840556a +0x9f8:  call   08725800 <__cxa_allocate_exception>
0840556f +0x9fd:  mov    %eax,%edx
08405571 +0x9ff:  movl   $0x1811,(%edx)
08405577 +0xa05:  movl   $0x0,0x8(%esp)
0840557f +0xa0d:  movl   $&_ZTIi,0x4(%esp)
08405587 +0xa15:  mov    %eax,(%esp)
0840558a +0xa18:  call   08724c50 <__cxa_throw>
0840558f +0xa1d:  mov    0xc(%ebp),%eax
08405592 +0xa20:  lea    0xa6(%eax),%edx
08405598 +0xa26:  mov    -0x10(%ebp),%eax
0840559b +0xa29:  addl   $0x1,-0x10(%ebp)
0840559f +0xa2d:  mov    %edx,0x8(%esp)
084055a3 +0xa31:  mov    %eax,0x4(%esp)
084055a7 +0xa35:  mov    -0x14(%ebp),%eax
084055aa +0xa38:  mov    %eax,(%esp)
084055ad +0xa3b:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084055b2 +0xa40:  xor    $0x1,%eax
084055b5 +0xa43:  test   %al,%al
084055b7 +0xa45:  je     0840567c <+0xb0a>
084055bd +0xa4b:  movl   $0x4,(%esp)
084055c4 +0xa52:  call   08725800 <__cxa_allocate_exception>
084055c9 +0xa57:  mov    %eax,%edx
084055cb +0xa59:  movl   $0x1816,(%edx)
084055d1 +0xa5f:  movl   $0x0,0x8(%esp)
084055d9 +0xa67:  movl   $&_ZTIi,0x4(%esp)
084055e1 +0xa6f:  mov    %eax,(%esp)
084055e4 +0xa72:  call   08724c50 <__cxa_throw>
084055e9 +0xa77:  cmp    $0x1,%edx
084055ec +0xa7a:  je     084055f6 <+0xa84>
084055ee +0xa7c:  mov    %eax,(%esp)
084055f1 +0xa7f:  call   08ae3750 <_Unwind_Resume>
084055f6 +0xa84:  mov    %eax,(%esp)
084055f9 +0xa87:  call   08725ce0 <__cxa_begin_catch>
084055fe +0xa8c:  mov    (%eax),%eax
08405600 +0xa8e:  mov    %eax,-0xc(%ebp)
08405603 +0xa91:  mov    0xc(%ebp),%eax
08405606 +0xa94:  add    $0xc,%eax
08405609 +0xa97:  movl   $0x9a,0x8(%esp)
08405611 +0xa9f:  movl   $0x0,0x4(%esp)
08405619 +0xaa7:  mov    %eax,(%esp)
0840561c +0xaaa:  call   0807dcc0 <_init+0x5b8>
08405621 +0xaaf:  mov    0x8(%ebp),%eax
08405624 +0xab2:  mov    %eax,0x18(%esp)
08405628 +0xab6:  mov    -0x10(%ebp),%eax
0840562b +0xab9:  mov    %eax,0x14(%esp)
0840562f +0xabd:  movl   $"DB_LoadEtc::LoadQuestShop, get(%d) ERROR charac_no=%u",0x10(%esp)
08405637 +0xac5:  movl   $0x181f,0xc(%esp)
0840563f +0xacd:  movl   $&_ZZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
08405647 +0xad5:  movl   $"DBThread.cpp",0x4(%esp)
0840564f +0xadd:  movl   $0x1,(%esp)
08405656 +0xae4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0840565b +0xae9:  mov    $0x0,%ebx
08405660 +0xaee:  call   08725c30 <__cxa_end_catch>
08405665 +0xaf3:  jmp    08405681 <+0xb0f>
08405667 +0xaf5:  mov    %edx,%ebx
08405669 +0xaf7:  mov    %eax,%esi
0840566b +0xaf9:  call   08725c30 <__cxa_end_catch>
08405670 +0xafe:  mov    %esi,%eax
08405672 +0xb00:  mov    %ebx,%edx
08405674 +0xb02:  mov    %eax,(%esp)
08405677 +0xb05:  call   08ae3750 <_Unwind_Resume>
0840567c +0xb0a:  mov    $0x1,%ebx
08405681 +0xb0f:  mov    %ebx,%eax
08405683 +0xb11:  add    $0x50,%esp
08405686 +0xb14:  pop    %ebx
08405687 +0xb15:  pop    %esi
08405688 +0xb16:  pop    %ebp
08405689 +0xb17:  ret
```

## 反编译 C

```c
// DB_LoadEtc::_LoadQuestShop @ 0x8404b72

/* DB_LoadEtc::_LoadQuestShop(unsigned int, CHARAC_QUEST_SHOP_DATA*) */

undefined4 DB_LoadEtc::_LoadQuestShop(uint param_1,CHARAC_QUEST_SHOP_DATA *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  char local_19;
  MySQL *local_18;
  int local_14;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_18,
                   "seLect qp, init_count, max_hp, max_mp, psy_attack, psy_defense, mag_attack, mag_defence, move_speed, attack_speed, hp_regen, mp_regen, all_element_resist, fire_element_resist, water_element_resist, light_element_resist, dark_element_resist, all_element_attack,fire_element_attack, water_element_attack, light_element_attack, dark_element_attack, psy_critical, mag_critical, good_hit , evasion , hit_recovery , separate_psy_mag_attack , quest_piece from charac_quest_shop where charac_no=%u"
                   ,param_1);
  local_19 = MySQL::exec(local_18,true);
  if (local_19 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(local_18);
    if (lVar5 == 0) {
      uVar4 = 1;
    }
    else {
      local_19 = MySQL::fetch(local_18);
      if (local_19 == '\x01') {
        local_14 = 1;
        local_19 = MySQL::get_uint(local_18,0,(uint *)(param_2 + 4));
        iVar1 = local_14;
        if (local_19 == '\x01') {
          local_14 = local_14 + 1;
          local_19 = MySQL::get_uint(local_18,iVar1,(uint *)(param_2 + 8));
          iVar1 = local_14;
          if (local_19 == '\x01') {
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x26));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17f7;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08404d6f to 084055e8 has its CatchHandler @ 084055e9 */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x6c));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17f8;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0xc));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17f9;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x12));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17fa;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0xe));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17fb;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x10));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17fc;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x22));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17fd;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x20));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17fe;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x28));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17ff;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x46));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1800;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x3c));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1801;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x34));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1802;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x36));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1803;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x3a));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1804;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x38));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1805;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x68));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1806;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x60));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1807;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x62));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1808;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x66));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1809;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 100));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x180a;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x2a));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x180b;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x2c));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x180c;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x4e));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x180d;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x42));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x180e;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x48));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x180f;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x76));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1811;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_uint(local_18,iVar1,(uint *)(param_2 + 0xa6));
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1816;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            uVar4 = 1;
          }
          else {
            cMyTrace::cMyTrace(local_2c,
                               "static bool DB_LoadEtc::_LoadQuestShop(unsigned int, CHARAC_QUEST_SHOP_DATA*)"
                               ,0x17f1,5);
            cMyTrace::operator()
                      (local_2c,"DB_LoadEtc::LoadQuestShope, get(%d) ERROR charac_no=%u",local_14,
                       param_1);
            uVar4 = 0;
          }
        }
        else {
          cMyTrace::cMyTrace(local_3c,
                             "static bool DB_LoadEtc::_LoadQuestShop(unsigned int, CHARAC_QUEST_SHOP_DATA*)"
                             ,0x17ea,5);
          cMyTrace::operator()
                    (local_3c,"DB_LoadEtc::LoadQuestShope, get(%d) ERROR charac_no=%u",local_14,
                     param_1);
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
