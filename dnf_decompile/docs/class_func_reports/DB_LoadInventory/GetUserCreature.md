# GetUserCreature

`_ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY`

`DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840ca74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840ca74  _ZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORY
#           DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)
# range [0x0840ca74, 0x0840d765]
0840ca74 +0x000:  push   %ebp
0840ca75 +0x001:  mov    %esp,%ebp
0840ca77 +0x003:  push   %esi
0840ca78 +0x004:  push   %ebx
0840ca79 +0x005:  sub    $0x2c0,%esp
0840ca7f +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840ca84 +0x010:  movl   $0x0,0x8(%esp)
0840ca8c +0x018:  movl   $0x3,0x4(%esp)
0840ca94 +0x020:  mov    %eax,(%esp)
0840ca97 +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840ca9c +0x028:  mov    %eax,-0x1c(%ebp)
0840ca9f +0x02b:  mov    0xc(%ebp),%eax
0840caa2 +0x02e:  mov    0x4(%eax),%eax
0840caa5 +0x031:  mov    %eax,0x8(%esp)
0840caa9 +0x035:  movl   $"seLect slot,it_id,name,stomach,exp,endurance,creature_type,ui_id,no_charge,stat,item_lock_key,unix_timestamp(expire_date) from creature_items where charac_no=%u and stat = 0 and expire_date>now()",0x4(%esp)
0840cab1 +0x03d:  mov    -0x1c(%ebp),%eax
0840cab4 +0x040:  mov    %eax,(%esp)
0840cab7 +0x043:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840cabc +0x048:  movl   $0x1,0x4(%esp)
0840cac4 +0x050:  mov    -0x1c(%ebp),%eax
0840cac7 +0x053:  mov    %eax,(%esp)
0840caca +0x056:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840cacf +0x05b:  mov    %al,-0x1d(%ebp)
0840cad2 +0x05e:  movzbl -0x1d(%ebp),%eax
0840cad6 +0x062:  xor    $0x1,%eax
0840cad9 +0x065:  test   %al,%al
0840cadb +0x067:  je     0840cb2d <+0xb9>
0840cadd +0x069:  mov    0xc(%ebp),%eax
0840cae0 +0x06c:  mov    0x4(%eax),%ebx
0840cae3 +0x06f:  movl   $0x5,0xc(%esp)
0840caeb +0x077:  movl   $0x27f0,0x8(%esp)
0840caf3 +0x07f:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840cafb +0x087:  lea    -0x148(%ebp),%eax
0840cb01 +0x08d:  mov    %eax,(%esp)
0840cb04 +0x090:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840cb09 +0x095:  mov    %ebx,0x8(%esp)
0840cb0d +0x099:  movl   $"DB_LoadInventory::GetUserCreature, exec() ERROR charac_no=%u",0x4(%esp)
0840cb15 +0x0a1:  lea    -0x148(%ebp),%eax
0840cb1b +0x0a7:  mov    %eax,(%esp)
0840cb1e +0x0aa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840cb23 +0x0af:  mov    $0x0,%ebx
0840cb28 +0x0b4:  jmp    0840d75a <+0xce6>
0840cb2d +0x0b9:  mov    -0x1c(%ebp),%eax
0840cb30 +0x0bc:  mov    %eax,(%esp)
0840cb33 +0x0bf:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0840cb38 +0x0c4:  mov    %eax,%edx
0840cb3a +0x0c6:  mov    0xc(%ebp),%eax
0840cb3d +0x0c9:  mov    %edx,&_ZL14gUnicodeBuffer+0x8350(%eax)
0840cb43 +0x0cf:  movl   $0x0,-0x18(%ebp)
0840cb4a +0x0d6:  mov    0xc(%ebp),%eax
0840cb4d +0x0d9:  mov    &_ZL14gUnicodeBuffer+0x8350(%eax),%eax
0840cb53 +0x0df:  cmp    $0x8d,%eax
0840cb58 +0x0e4:  jle    0840cbb7 <+0x143>
0840cb5a +0x0e6:  mov    0xc(%ebp),%eax
0840cb5d +0x0e9:  mov    &_ZL14gUnicodeBuffer+0x8350(%eax),%esi
0840cb63 +0x0ef:  mov    0xc(%ebp),%eax
0840cb66 +0x0f2:  mov    0x4(%eax),%ebx
0840cb69 +0x0f5:  movl   $0x5,0xc(%esp)
0840cb71 +0x0fd:  movl   $0x27fb,0x8(%esp)
0840cb79 +0x105:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840cb81 +0x10d:  lea    -0x138(%ebp),%eax
0840cb87 +0x113:  mov    %eax,(%esp)
0840cb8a +0x116:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840cb8f +0x11b:  mov    %esi,0xc(%esp)
0840cb93 +0x11f:  mov    %ebx,0x8(%esp)
0840cb97 +0x123:  movl   $"DB_LoadInventory::GetUserCreature, creature_item_count overflow ERROR charac_no=%u, item_count=%d",0x4(%esp)
0840cb9f +0x12b:  lea    -0x138(%ebp),%eax
0840cba5 +0x131:  mov    %eax,(%esp)
0840cba8 +0x134:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840cbad +0x139:  mov    $0x0,%ebx
0840cbb2 +0x13e:  jmp    0840d75a <+0xce6>
0840cbb7 +0x143:  movl   $0x8d,0x8(%esp)
0840cbbf +0x14b:  movl   $0x0,0x4(%esp)
0840cbc7 +0x153:  lea    -0x2a9(%ebp),%eax
0840cbcd +0x159:  mov    %eax,(%esp)
0840cbd0 +0x15c:  call   0807dcc0 <_init+0x5b8>
0840cbd5 +0x161:  lea    -0x154(%ebp),%eax
0840cbdb +0x167:  mov    %eax,(%esp)
0840cbde +0x16a:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
0840cbe3 +0x16f:  movb   $0x0,-0x11(%ebp)
0840cbe7 +0x173:  movl   $0x0,-0x18(%ebp)
0840cbee +0x17a:  jmp    0840d515 <+0xaa1>
0840cbf3 +0x17f:  mov    -0x1c(%ebp),%eax
0840cbf6 +0x182:  mov    %eax,(%esp)
0840cbf9 +0x185:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840cbfe +0x18a:  mov    %al,-0x1d(%ebp)
0840cc01 +0x18d:  movzbl -0x1d(%ebp),%eax
0840cc05 +0x191:  xor    $0x1,%eax
0840cc08 +0x194:  test   %al,%al
0840cc0a +0x196:  je     0840cc5e <+0x1ea>
0840cc0c +0x198:  mov    0xc(%ebp),%eax
0840cc0f +0x19b:  mov    0x4(%eax),%ebx
0840cc12 +0x19e:  movl   $0x5,0xc(%esp)
0840cc1a +0x1a6:  movl   $0x280e,0x8(%esp)
0840cc22 +0x1ae:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840cc2a +0x1b6:  lea    -0x128(%ebp),%eax
0840cc30 +0x1bc:  mov    %eax,(%esp)
0840cc33 +0x1bf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840cc38 +0x1c4:  mov    -0x18(%ebp),%eax
0840cc3b +0x1c7:  mov    %eax,0xc(%esp)
0840cc3f +0x1cb:  mov    %ebx,0x8(%esp)
0840cc43 +0x1cf:  movl   $"DB_LoadInventory::GetUserCreature, fetch() ERROR charac_no=%u,%d",0x4(%esp)
0840cc4b +0x1d7:  lea    -0x128(%ebp),%eax
0840cc51 +0x1dd:  mov    %eax,(%esp)
0840cc54 +0x1e0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840cc59 +0x1e5:  jmp    0840d52c <+0xab8>
0840cc5e +0x1ea:  movl   $0x74,0x8(%esp)
0840cc66 +0x1f2:  movl   $0x0,0x4(%esp)
0840cc6e +0x1fa:  lea    -0x21c(%ebp),%eax
0840cc74 +0x200:  mov    %eax,(%esp)
0840cc77 +0x203:  call   0807dcc0 <_init+0x5b8>
0840cc7c +0x208:  lea    -0x21c(%ebp),%eax
0840cc82 +0x20e:  add    $0x2c,%eax
0840cc85 +0x211:  mov    %eax,0x8(%esp)
0840cc89 +0x215:  movl   $0x0,0x4(%esp)
0840cc91 +0x21d:  mov    -0x1c(%ebp),%eax
0840cc94 +0x220:  mov    %eax,(%esp)
0840cc97 +0x223:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840cc9c +0x228:  mov    %al,-0x1d(%ebp)
0840cc9f +0x22b:  mov    -0x1f0(%ebp),%eax
0840cca5 +0x231:  mov    %eax,-0xc(%ebp)
0840cca8 +0x234:  cmpl   $0xee,-0xc(%ebp)
0840ccaf +0x23b:  jne    0840ccb8 <+0x244>
0840ccb1 +0x23d:  movl   $0x8c,-0xc(%ebp)
0840ccb8 +0x244:  cmpl   $0x8c,-0xc(%ebp)
0840ccbf +0x24b:  jle    0840cd13 <+0x29f>
0840ccc1 +0x24d:  mov    0xc(%ebp),%eax
0840ccc4 +0x250:  mov    0x4(%eax),%ebx
0840ccc7 +0x253:  movl   $0x5,0xc(%esp)
0840cccf +0x25b:  movl   $0x281d,0x8(%esp)
0840ccd7 +0x263:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840ccdf +0x26b:  lea    -0x118(%ebp),%eax
0840cce5 +0x271:  mov    %eax,(%esp)
0840cce8 +0x274:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840cced +0x279:  mov    -0xc(%ebp),%eax
0840ccf0 +0x27c:  mov    %eax,0xc(%esp)
0840ccf4 +0x280:  mov    %ebx,0x8(%esp)
0840ccf8 +0x284:  movl   $"DB_LoadInventory::GetUserCreature, charac_no=%u, slot=%d overflow",0x4(%esp)
0840cd00 +0x28c:  lea    -0x118(%ebp),%eax
0840cd06 +0x292:  mov    %eax,(%esp)
0840cd09 +0x295:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840cd0e +0x29a:  jmp    0840d511 <+0xa9d>
0840cd13 +0x29f:  mov    -0xc(%ebp),%eax
0840cd16 +0x2a2:  movzbl -0x2a9(%ebp,%eax,1),%eax
0840cd1e +0x2aa:  xor    $0x1,%eax
0840cd21 +0x2ad:  test   %al,%al
0840cd23 +0x2af:  je     0840cd32 <+0x2be>
0840cd25 +0x2b1:  mov    -0xc(%ebp),%eax
0840cd28 +0x2b4:  movb   $0x1,-0x2a9(%ebp,%eax,1)
0840cd30 +0x2bc:  jmp    0840cd36 <+0x2c2>
0840cd32 +0x2be:  movb   $0x1,-0x11(%ebp)
0840cd36 +0x2c2:  movzbl -0x1d(%ebp),%eax
0840cd3a +0x2c6:  xor    $0x1,%eax
0840cd3d +0x2c9:  test   %al,%al
0840cd3f +0x2cb:  je     0840cd91 <+0x31d>
0840cd41 +0x2cd:  mov    0xc(%ebp),%eax
0840cd44 +0x2d0:  mov    0x4(%eax),%ebx
0840cd47 +0x2d3:  movl   $0x5,0xc(%esp)
0840cd4f +0x2db:  movl   $0x282c,0x8(%esp)
0840cd57 +0x2e3:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840cd5f +0x2eb:  lea    -0x108(%ebp),%eax
0840cd65 +0x2f1:  mov    %eax,(%esp)
0840cd68 +0x2f4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840cd6d +0x2f9:  mov    %ebx,0x8(%esp)
0840cd71 +0x2fd:  movl   $"DB_LoadInventory::GetUserCreature, get_int(0) ERROR charac_no=%u",0x4(%esp)
0840cd79 +0x305:  lea    -0x108(%ebp),%eax
0840cd7f +0x30b:  mov    %eax,(%esp)
0840cd82 +0x30e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840cd87 +0x313:  mov    $0x0,%ebx
0840cd8c +0x318:  jmp    0840d74c <+0xcd8>
0840cd91 +0x31d:  lea    -0x21c(%ebp),%eax
0840cd97 +0x323:  add    $0x8,%eax
0840cd9a +0x326:  mov    %eax,0x8(%esp)
0840cd9e +0x32a:  movl   $0x1,0x4(%esp)
0840cda6 +0x332:  mov    -0x1c(%ebp),%eax
0840cda9 +0x335:  mov    %eax,(%esp)
0840cdac +0x338:  call   0844d66a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x280>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x280
0840cdb1 +0x33d:  mov    %al,-0x1d(%ebp)
0840cdb4 +0x340:  movzbl -0x1d(%ebp),%eax
0840cdb8 +0x344:  xor    $0x1,%eax
0840cdbb +0x347:  test   %al,%al
0840cdbd +0x349:  je     0840ce0f <+0x39b>
0840cdbf +0x34b:  mov    0xc(%ebp),%eax
0840cdc2 +0x34e:  mov    0x4(%eax),%ebx
0840cdc5 +0x351:  movl   $0x5,0xc(%esp)
0840cdcd +0x359:  movl   $0x2833,0x8(%esp)
0840cdd5 +0x361:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840cddd +0x369:  lea    -0xf8(%ebp),%eax
0840cde3 +0x36f:  mov    %eax,(%esp)
0840cde6 +0x372:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840cdeb +0x377:  mov    %ebx,0x8(%esp)
0840cdef +0x37b:  movl   $"DB_LoadInventory::GetUserCreature, get_ushort(1) ERROR charac_no=%u",0x4(%esp)
0840cdf7 +0x383:  lea    -0xf8(%ebp),%eax
0840cdfd +0x389:  mov    %eax,(%esp)
0840ce00 +0x38c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840ce05 +0x391:  mov    $0x0,%ebx
0840ce0a +0x396:  jmp    0840d74c <+0xcd8>
0840ce0f +0x39b:  movl   $0xd,0xc(%esp)
0840ce17 +0x3a3:  lea    -0x21c(%ebp),%eax
0840ce1d +0x3a9:  add    $0x34,%eax
0840ce20 +0x3ac:  mov    %eax,0x8(%esp)
0840ce24 +0x3b0:  movl   $0x2,0x4(%esp)
0840ce2c +0x3b8:  mov    -0x1c(%ebp),%eax
0840ce2f +0x3bb:  mov    %eax,(%esp)
0840ce32 +0x3be:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0840ce37 +0x3c3:  xor    $0x1,%eax
0840ce3a +0x3c6:  test   %al,%al
0840ce3c +0x3c8:  je     0840ce8e <+0x41a>
0840ce3e +0x3ca:  mov    0xc(%ebp),%eax
0840ce41 +0x3cd:  mov    0x4(%eax),%ebx
0840ce44 +0x3d0:  movl   $0x5,0xc(%esp)
0840ce4c +0x3d8:  movl   $0x2846,0x8(%esp)
0840ce54 +0x3e0:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840ce5c +0x3e8:  lea    -0xe8(%ebp),%eax
0840ce62 +0x3ee:  mov    %eax,(%esp)
0840ce65 +0x3f1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840ce6a +0x3f6:  mov    %ebx,0x8(%esp)
0840ce6e +0x3fa:  movl   $"DB_LoadInventory::GetUserCreature, get_int(2) ERROR charac_no=%u",0x4(%esp)
0840ce76 +0x402:  lea    -0xe8(%ebp),%eax
0840ce7c +0x408:  mov    %eax,(%esp)
0840ce7f +0x40b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840ce84 +0x410:  mov    $0x0,%ebx
0840ce89 +0x415:  jmp    0840d74c <+0xcd8>
0840ce8e +0x41a:  lea    -0x21c(%ebp),%eax
0840ce94 +0x420:  add    $0x44,%eax
0840ce97 +0x423:  mov    %eax,0x8(%esp)
0840ce9b +0x427:  movl   $0x3,0x4(%esp)
0840cea3 +0x42f:  mov    -0x1c(%ebp),%eax
0840cea6 +0x432:  mov    %eax,(%esp)
0840cea9 +0x435:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ceae +0x43a:  mov    %al,-0x1d(%ebp)
0840ceb1 +0x43d:  movzbl -0x1d(%ebp),%eax
0840ceb5 +0x441:  xor    $0x1,%eax
0840ceb8 +0x444:  test   %al,%al
0840ceba +0x446:  je     0840cf0c <+0x498>
0840cebc +0x448:  mov    0xc(%ebp),%eax
0840cebf +0x44b:  mov    0x4(%eax),%ebx
0840cec2 +0x44e:  movl   $0x5,0xc(%esp)
0840ceca +0x456:  movl   $0x284e,0x8(%esp)
0840ced2 +0x45e:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840ceda +0x466:  lea    -0xd8(%ebp),%eax
0840cee0 +0x46c:  mov    %eax,(%esp)
0840cee3 +0x46f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840cee8 +0x474:  mov    %ebx,0x8(%esp)
0840ceec +0x478:  movl   $"DB_LoadInventory::GetUserCreature, get_int(3) ERROR charac_no=%u",0x4(%esp)
0840cef4 +0x480:  lea    -0xd8(%ebp),%eax
0840cefa +0x486:  mov    %eax,(%esp)
0840cefd +0x489:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840cf02 +0x48e:  mov    $0x0,%ebx
0840cf07 +0x493:  jmp    0840d74c <+0xcd8>
0840cf0c +0x498:  lea    -0x21c(%ebp),%eax
0840cf12 +0x49e:  add    $0x4c,%eax
0840cf15 +0x4a1:  mov    %eax,0x8(%esp)
0840cf19 +0x4a5:  movl   $0x4,0x4(%esp)
0840cf21 +0x4ad:  mov    -0x1c(%ebp),%eax
0840cf24 +0x4b0:  mov    %eax,(%esp)
0840cf27 +0x4b3:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840cf2c +0x4b8:  mov    %al,-0x1d(%ebp)
0840cf2f +0x4bb:  movzbl -0x1d(%ebp),%eax
0840cf33 +0x4bf:  xor    $0x1,%eax
0840cf36 +0x4c2:  test   %al,%al
0840cf38 +0x4c4:  je     0840cf8a <+0x516>
0840cf3a +0x4c6:  mov    0xc(%ebp),%eax
0840cf3d +0x4c9:  mov    0x4(%eax),%ebx
0840cf40 +0x4cc:  movl   $0x5,0xc(%esp)
0840cf48 +0x4d4:  movl   $0x2855,0x8(%esp)
0840cf50 +0x4dc:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840cf58 +0x4e4:  lea    -0xc8(%ebp),%eax
0840cf5e +0x4ea:  mov    %eax,(%esp)
0840cf61 +0x4ed:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840cf66 +0x4f2:  mov    %ebx,0x8(%esp)
0840cf6a +0x4f6:  movl   $"DB_LoadInventory::GetUserCreature, get_int(4) ERROR charac_no=%u",0x4(%esp)
0840cf72 +0x4fe:  lea    -0xc8(%ebp),%eax
0840cf78 +0x504:  mov    %eax,(%esp)
0840cf7b +0x507:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840cf80 +0x50c:  mov    $0x0,%ebx
0840cf85 +0x511:  jmp    0840d74c <+0xcd8>
0840cf8a +0x516:  lea    -0x21c(%ebp),%eax
0840cf90 +0x51c:  add    $0x14,%eax
0840cf93 +0x51f:  mov    %eax,0x8(%esp)
0840cf97 +0x523:  movl   $0x5,0x4(%esp)
0840cf9f +0x52b:  mov    -0x1c(%ebp),%eax
0840cfa2 +0x52e:  mov    %eax,(%esp)
0840cfa5 +0x531:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840cfaa +0x536:  xor    $0x1,%eax
0840cfad +0x539:  test   %al,%al
0840cfaf +0x53b:  je     0840d001 <+0x58d>
0840cfb1 +0x53d:  mov    0xc(%ebp),%eax
0840cfb4 +0x540:  mov    0x4(%eax),%ebx
0840cfb7 +0x543:  movl   $0x5,0xc(%esp)
0840cfbf +0x54b:  movl   $0x285b,0x8(%esp)
0840cfc7 +0x553:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840cfcf +0x55b:  lea    -0xb8(%ebp),%eax
0840cfd5 +0x561:  mov    %eax,(%esp)
0840cfd8 +0x564:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840cfdd +0x569:  mov    %ebx,0x8(%esp)
0840cfe1 +0x56d:  movl   $"DB_LoadInventory::GetUserCreature, get_ushort(5) ERROR charac_no=%u",0x4(%esp)
0840cfe9 +0x575:  lea    -0xb8(%ebp),%eax
0840cfef +0x57b:  mov    %eax,(%esp)
0840cff2 +0x57e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840cff7 +0x583:  mov    $0x0,%ebx
0840cffc +0x588:  jmp    0840d74c <+0xcd8>
0840d001 +0x58d:  lea    -0x158(%ebp),%eax
0840d007 +0x593:  mov    %eax,0x8(%esp)
0840d00b +0x597:  movl   $0x6,0x4(%esp)
0840d013 +0x59f:  mov    -0x1c(%ebp),%eax
0840d016 +0x5a2:  mov    %eax,(%esp)
0840d019 +0x5a5:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840d01e +0x5aa:  xor    $0x1,%eax
0840d021 +0x5ad:  test   %al,%al
0840d023 +0x5af:  je     0840d075 <+0x601>
0840d025 +0x5b1:  mov    0xc(%ebp),%eax
0840d028 +0x5b4:  mov    0x4(%eax),%ebx
0840d02b +0x5b7:  movl   $0x5,0xc(%esp)
0840d033 +0x5bf:  movl   $0x2862,0x8(%esp)
0840d03b +0x5c7:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840d043 +0x5cf:  lea    -0xa8(%ebp),%eax
0840d049 +0x5d5:  mov    %eax,(%esp)
0840d04c +0x5d8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840d051 +0x5dd:  mov    %ebx,0x8(%esp)
0840d055 +0x5e1:  movl   $"DB_LoadInventory::GetUserCreature, get_int(6) ERROR charac_no=%u",0x4(%esp)
0840d05d +0x5e9:  lea    -0xa8(%ebp),%eax
0840d063 +0x5ef:  mov    %eax,(%esp)
0840d066 +0x5f2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840d06b +0x5f7:  mov    $0x0,%ebx
0840d070 +0x5fc:  jmp    0840d74c <+0xcd8>
0840d075 +0x601:  mov    -0x158(%ebp),%eax
0840d07b +0x607:  mov    %al,-0x1cc(%ebp)
0840d081 +0x60d:  lea    -0x21c(%ebp),%eax
0840d087 +0x613:  add    $0x30,%eax
0840d08a +0x616:  mov    %eax,0x8(%esp)
0840d08e +0x61a:  movl   $0x7,0x4(%esp)
0840d096 +0x622:  mov    -0x1c(%ebp),%eax
0840d099 +0x625:  mov    %eax,(%esp)
0840d09c +0x628:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840d0a1 +0x62d:  xor    $0x1,%eax
0840d0a4 +0x630:  test   %al,%al
0840d0a6 +0x632:  je     0840d0f8 <+0x684>
0840d0a8 +0x634:  mov    0xc(%ebp),%eax
0840d0ab +0x637:  mov    0x4(%eax),%ebx
0840d0ae +0x63a:  movl   $0x5,0xc(%esp)
0840d0b6 +0x642:  movl   $0x2869,0x8(%esp)
0840d0be +0x64a:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840d0c6 +0x652:  lea    -0x98(%ebp),%eax
0840d0cc +0x658:  mov    %eax,(%esp)
0840d0cf +0x65b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840d0d4 +0x660:  mov    %ebx,0x8(%esp)
0840d0d8 +0x664:  movl   $"DB_LoadInventory::GetUserCreature, get_int(7) ERROR charac_no=%u",0x4(%esp)
0840d0e0 +0x66c:  lea    -0x98(%ebp),%eax
0840d0e6 +0x672:  mov    %eax,(%esp)
0840d0e9 +0x675:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840d0ee +0x67a:  mov    $0x0,%ebx
0840d0f3 +0x67f:  jmp    0840d74c <+0xcd8>
0840d0f8 +0x684:  lea    -0x15c(%ebp),%eax
0840d0fe +0x68a:  mov    %eax,0x8(%esp)
0840d102 +0x68e:  movl   $0x8,0x4(%esp)
0840d10a +0x696:  mov    -0x1c(%ebp),%eax
0840d10d +0x699:  mov    %eax,(%esp)
0840d110 +0x69c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840d115 +0x6a1:  xor    $0x1,%eax
0840d118 +0x6a4:  test   %al,%al
0840d11a +0x6a6:  je     0840d16c <+0x6f8>
0840d11c +0x6a8:  mov    0xc(%ebp),%eax
0840d11f +0x6ab:  mov    0x4(%eax),%ebx
0840d122 +0x6ae:  movl   $0x5,0xc(%esp)
0840d12a +0x6b6:  movl   $0x2870,0x8(%esp)
0840d132 +0x6be:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840d13a +0x6c6:  lea    -0x88(%ebp),%eax
0840d140 +0x6cc:  mov    %eax,(%esp)
0840d143 +0x6cf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840d148 +0x6d4:  mov    %ebx,0x8(%esp)
0840d14c +0x6d8:  movl   $"DB_LoadInventory::GetUserCreature, get_int(8) ERROR charac_no=%u",0x4(%esp)
0840d154 +0x6e0:  lea    -0x88(%ebp),%eax
0840d15a +0x6e6:  mov    %eax,(%esp)
0840d15d +0x6e9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840d162 +0x6ee:  mov    $0x0,%ebx
0840d167 +0x6f3:  jmp    0840d74c <+0xcd8>
0840d16c +0x6f8:  mov    -0x15c(%ebp),%eax
0840d172 +0x6fe:  mov    %al,-0x1ca(%ebp)
0840d178 +0x704:  lea    -0x160(%ebp),%eax
0840d17e +0x70a:  mov    %eax,0x8(%esp)
0840d182 +0x70e:  movl   $0x9,0x4(%esp)
0840d18a +0x716:  mov    -0x1c(%ebp),%eax
0840d18d +0x719:  mov    %eax,(%esp)
0840d190 +0x71c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840d195 +0x721:  xor    $0x1,%eax
0840d198 +0x724:  test   %al,%al
0840d19a +0x726:  je     0840d1e6 <+0x772>
0840d19c +0x728:  mov    0xc(%ebp),%eax
0840d19f +0x72b:  mov    0x4(%eax),%ebx
0840d1a2 +0x72e:  movl   $0x5,0xc(%esp)
0840d1aa +0x736:  movl   $0x2878,0x8(%esp)
0840d1b2 +0x73e:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840d1ba +0x746:  lea    -0x78(%ebp),%eax
0840d1bd +0x749:  mov    %eax,(%esp)
0840d1c0 +0x74c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840d1c5 +0x751:  mov    %ebx,0x8(%esp)
0840d1c9 +0x755:  movl   $"DB_LoadInventory::GetUserCreature, get_int(9) ERROR charac_no=%u",0x4(%esp)
0840d1d1 +0x75d:  lea    -0x78(%ebp),%eax
0840d1d4 +0x760:  mov    %eax,(%esp)
0840d1d7 +0x763:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840d1dc +0x768:  mov    $0x0,%ebx
0840d1e1 +0x76d:  jmp    0840d74c <+0xcd8>
0840d1e6 +0x772:  mov    -0x160(%ebp),%eax
0840d1ec +0x778:  mov    %al,-0x1c9(%ebp)
0840d1f2 +0x77e:  movb   $0x0,-0x161(%ebp)
0840d1f9 +0x785:  lea    -0x161(%ebp),%eax
0840d1ff +0x78b:  mov    %eax,0x8(%esp)
0840d203 +0x78f:  movl   $0xa,0x4(%esp)
0840d20b +0x797:  mov    -0x1c(%ebp),%eax
0840d20e +0x79a:  mov    %eax,(%esp)
0840d211 +0x79d:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
0840d216 +0x7a2:  xor    $0x1,%eax
0840d219 +0x7a5:  test   %al,%al
0840d21b +0x7a7:  je     0840d267 <+0x7f3>
0840d21d +0x7a9:  mov    0xc(%ebp),%eax
0840d220 +0x7ac:  mov    0x4(%eax),%ebx
0840d223 +0x7af:  movl   $0x5,0xc(%esp)
0840d22b +0x7b7:  movl   $0x2880,0x8(%esp)
0840d233 +0x7bf:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840d23b +0x7c7:  lea    -0x68(%ebp),%eax
0840d23e +0x7ca:  mov    %eax,(%esp)
0840d241 +0x7cd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840d246 +0x7d2:  mov    %ebx,0x8(%esp)
0840d24a +0x7d6:  movl   $"DB_LoadInventory::GetUserCreature, get_ubyte(10) ERROR charac_no=%u",0x4(%esp)
0840d252 +0x7de:  lea    -0x68(%ebp),%eax
0840d255 +0x7e1:  mov    %eax,(%esp)
0840d258 +0x7e4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840d25d +0x7e9:  mov    $0x0,%ebx
0840d262 +0x7ee:  jmp    0840d74c <+0xcd8>
0840d267 +0x7f3:  lea    -0x21c(%ebp),%eax
0840d26d +0x7f9:  add    $0x54,%eax
0840d270 +0x7fc:  mov    %eax,0x8(%esp)
0840d274 +0x800:  movl   $0xb,0x4(%esp)
0840d27c +0x808:  mov    -0x1c(%ebp),%eax
0840d27f +0x80b:  mov    %eax,(%esp)
0840d282 +0x80e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840d287 +0x813:  xor    $0x1,%eax
0840d28a +0x816:  test   %al,%al
0840d28c +0x818:  je     0840d2d8 <+0x864>
0840d28e +0x81a:  mov    0xc(%ebp),%eax
0840d291 +0x81d:  mov    0x4(%eax),%ebx
0840d294 +0x820:  movl   $0x5,0xc(%esp)
0840d29c +0x828:  movl   $0x28a6,0x8(%esp)
0840d2a4 +0x830:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840d2ac +0x838:  lea    -0x58(%ebp),%eax
0840d2af +0x83b:  mov    %eax,(%esp)
0840d2b2 +0x83e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840d2b7 +0x843:  mov    %ebx,0x8(%esp)
0840d2bb +0x847:  movl   $"DB_LoadInventory::GetUserCreature, get_int(12) ERROR charac_no=%u",0x4(%esp)
0840d2c3 +0x84f:  lea    -0x58(%ebp),%eax
0840d2c6 +0x852:  mov    %eax,(%esp)
0840d2c9 +0x855:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840d2ce +0x85a:  mov    $0x0,%ebx
0840d2d3 +0x85f:  jmp    0840d74c <+0xcd8>
0840d2d8 +0x864:  mov    -0x1f0(%ebp),%eax
0840d2de +0x86a:  cmp    $0xf1,%eax
0840d2e3 +0x86f:  jle    0840d339 <+0x8c5>
0840d2e5 +0x871:  mov    -0x1f0(%ebp),%esi
0840d2eb +0x877:  mov    0xc(%ebp),%eax
0840d2ee +0x87a:  mov    0x4(%eax),%ebx
0840d2f1 +0x87d:  movl   $0x5,0xc(%esp)
0840d2f9 +0x885:  movl   $0x28ad,0x8(%esp)
0840d301 +0x88d:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840d309 +0x895:  lea    -0x48(%ebp),%eax
0840d30c +0x898:  mov    %eax,(%esp)
0840d30f +0x89b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840d314 +0x8a0:  mov    %esi,0xc(%esp)
0840d318 +0x8a4:  mov    %ebx,0x8(%esp)
0840d31c +0x8a8:  movl   $"DB_LoadInventory::GetUserCreature, slot_no overflow ERROR charac_no=%u, slot_no=%d",0x4(%esp)
0840d324 +0x8b0:  lea    -0x48(%ebp),%eax
0840d327 +0x8b3:  mov    %eax,(%esp)
0840d32a +0x8b6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840d32f +0x8bb:  mov    $0x0,%ebx
0840d334 +0x8c0:  jmp    0840d74c <+0xcd8>
0840d339 +0x8c5:  cmpb   $0x0,-0x11(%ebp)
0840d33d +0x8c9:  je     0840d3dc <+0x968>
0840d343 +0x8cf:  lea    -0x1a5(%ebp),%eax
0840d349 +0x8d5:  mov    %eax,(%esp)
0840d34c +0x8d8:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0840d351 +0x8dd:  movl   $0x3d,0x8(%esp)
0840d359 +0x8e5:  movl   $0x0,0x4(%esp)
0840d361 +0x8ed:  lea    -0x1a5(%ebp),%eax
0840d367 +0x8f3:  mov    %eax,(%esp)
0840d36a +0x8f6:  call   0807dcc0 <_init+0x5b8>
0840d36f +0x8fb:  movb   $0x5,-0x1a4(%ebp)
0840d376 +0x902:  movzwl -0x208(%ebp),%eax
0840d37d +0x909:  mov    %ax,-0x19a(%ebp)
0840d384 +0x910:  mov    -0x214(%ebp),%eax
0840d38a +0x916:  mov    %eax,-0x1a3(%ebp)
0840d390 +0x91c:  mov    -0x1ec(%ebp),%eax
0840d396 +0x922:  mov    %eax,-0x19e(%ebp)
0840d39c +0x928:  movzbl -0x161(%ebp),%eax
0840d3a3 +0x92f:  movzbl %al,%eax
0840d3a6 +0x932:  mov    %eax,0x4(%esp)
0840d3aa +0x936:  lea    -0x1a5(%ebp),%eax
0840d3b0 +0x93c:  add    $0x11,%eax
0840d3b3 +0x93f:  mov    %eax,(%esp)
0840d3b6 +0x942:  call   0844d478 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8e
0840d3bb +0x947:  movb   $0x0,-0x11(%ebp)
0840d3bf +0x94b:  lea    -0x1a5(%ebp),%eax
0840d3c5 +0x951:  mov    %eax,0x4(%esp)
0840d3c9 +0x955:  lea    -0x154(%ebp),%eax
0840d3cf +0x95b:  mov    %eax,(%esp)
0840d3d2 +0x95e:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
0840d3d7 +0x963:  jmp    0840d47a <+0xa06>
0840d3dc +0x968:  mov    -0x1f0(%ebp),%eax
0840d3e2 +0x96e:  mov    0xc(%ebp),%edx
0840d3e5 +0x971:  imul   $0x3d,%eax,%eax
0840d3e8 +0x974:  lea    (%edx,%eax,1),%eax
0840d3eb +0x977:  add    $0xeed0,%eax
0840d3f0 +0x97c:  movb   $0x5,0x2(%eax)
0840d3f4 +0x980:  mov    -0x1f0(%ebp),%edx
0840d3fa +0x986:  movzwl -0x208(%ebp),%eax
0840d401 +0x98d:  mov    0xc(%ebp),%ecx
0840d404 +0x990:  imul   $0x3d,%edx,%edx
0840d407 +0x993:  lea    (%ecx,%edx,1),%edx
0840d40a +0x996:  add    $0xeed0,%edx
0840d410 +0x99c:  mov    %ax,0xc(%edx)
0840d414 +0x9a0:  mov    -0x1f0(%ebp),%edx
0840d41a +0x9a6:  mov    -0x214(%ebp),%eax
0840d420 +0x9ac:  mov    0xc(%ebp),%ecx
0840d423 +0x9af:  imul   $0x3d,%edx,%edx
0840d426 +0x9b2:  lea    (%ecx,%edx,1),%edx
0840d429 +0x9b5:  add    $0xeed0,%edx
0840d42f +0x9bb:  mov    %eax,0x3(%edx)
0840d432 +0x9be:  mov    -0x1f0(%ebp),%edx
0840d438 +0x9c4:  mov    -0x1ec(%ebp),%eax
0840d43e +0x9ca:  mov    0xc(%ebp),%ecx
0840d441 +0x9cd:  imul   $0x3d,%edx,%edx
0840d444 +0x9d0:  lea    (%ecx,%edx,1),%edx
0840d447 +0x9d3:  add    $0xeed8,%edx
0840d44d +0x9d9:  mov    %eax,(%edx)
0840d44f +0x9db:  movzbl -0x161(%ebp),%eax
0840d456 +0x9e2:  movzbl %al,%eax
0840d459 +0x9e5:  mov    -0x1f0(%ebp),%edx
0840d45f +0x9eb:  imul   $0x3d,%edx,%edx
0840d462 +0x9ee:  add    $0xeee0,%edx
0840d468 +0x9f4:  add    0xc(%ebp),%edx
0840d46b +0x9f7:  add    $0x2,%edx
0840d46e +0x9fa:  mov    %eax,0x4(%esp)
0840d472 +0x9fe:  mov    %edx,(%esp)
0840d475 +0xa01:  call   0844d478 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8e
0840d47a +0xa06:  mov    -0x18(%ebp),%eax
0840d47d +0xa09:  mov    0xc(%ebp),%ecx
0840d480 +0xa0c:  shl    $0x3,%eax
0840d483 +0xa0f:  lea    0x0(,%eax,8),%edx
0840d48a +0xa16:  sub    %eax,%edx
0840d48c +0xa18:  lea    (%ecx,%edx,1),%eax
0840d48f +0xa1b:  add    $&_ZL14gUnicodeBuffer+0x8354,%eax
0840d494 +0xa20:  mov    -0x1f0(%ebp),%edx
0840d49a +0xa26:  mov    %edx,(%eax)
0840d49c +0xa28:  mov    -0x1ec(%ebp),%edx
0840d4a2 +0xa2e:  mov    %edx,0x4(%eax)
0840d4a5 +0xa31:  mov    -0x1e8(%ebp),%edx
0840d4ab +0xa37:  mov    %edx,0x8(%eax)
0840d4ae +0xa3a:  mov    -0x1e4(%ebp),%edx
0840d4b4 +0xa40:  mov    %edx,0xc(%eax)
0840d4b7 +0xa43:  mov    -0x1e0(%ebp),%edx
0840d4bd +0xa49:  mov    %edx,0x10(%eax)
0840d4c0 +0xa4c:  mov    -0x1dc(%ebp),%edx
0840d4c6 +0xa52:  mov    %edx,0x14(%eax)
0840d4c9 +0xa55:  mov    -0x1d8(%ebp),%edx
0840d4cf +0xa5b:  mov    %edx,0x18(%eax)
0840d4d2 +0xa5e:  mov    -0x1d4(%ebp),%edx
0840d4d8 +0xa64:  mov    %edx,0x1c(%eax)
0840d4db +0xa67:  mov    -0x1d0(%ebp),%edx
0840d4e1 +0xa6d:  mov    %edx,0x20(%eax)
0840d4e4 +0xa70:  mov    -0x1cc(%ebp),%edx
0840d4ea +0xa76:  mov    %edx,0x24(%eax)
0840d4ed +0xa79:  mov    -0x1c8(%ebp),%edx
0840d4f3 +0xa7f:  mov    %edx,0x28(%eax)
0840d4f6 +0xa82:  mov    -0x1c4(%ebp),%edx
0840d4fc +0xa88:  mov    %edx,0x2c(%eax)
0840d4ff +0xa8b:  mov    -0x1c0(%ebp),%edx
0840d505 +0xa91:  mov    %edx,0x30(%eax)
0840d508 +0xa94:  mov    -0x1bc(%ebp),%edx
0840d50e +0xa9a:  mov    %edx,0x34(%eax)
0840d511 +0xa9d:  addl   $0x1,-0x18(%ebp)
0840d515 +0xaa1:  mov    0xc(%ebp),%eax
0840d518 +0xaa4:  mov    &_ZL14gUnicodeBuffer+0x8350(%eax),%eax
0840d51e +0xaaa:  cmp    -0x18(%ebp),%eax
0840d521 +0xaad:  setg   %al
0840d524 +0xab0:  test   %al,%al
0840d526 +0xab2:  jne    0840cbf3 <+0x17f>
0840d52c +0xab8:  movl   $0x0,-0x10(%ebp)
0840d533 +0xabf:  lea    -0x168(%ebp),%eax
0840d539 +0xac5:  lea    -0x154(%ebp),%edx
0840d53f +0xacb:  mov    %edx,0x4(%esp)
0840d543 +0xacf:  mov    %eax,(%esp)
0840d546 +0xad2:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
0840d54b +0xad7:  sub    $0x4,%esp
0840d54e +0xada:  jmp    0840d6f2 <+0xc7e>
0840d553 +0xadf:  mov    -0x10(%ebp),%eax
0840d556 +0xae2:  movzbl -0x2a9(%ebp,%eax,1),%eax
0840d55e +0xaea:  xor    $0x1,%eax
0840d561 +0xaed:  test   %al,%al
0840d563 +0xaef:  je     0840d582 <+0xb0e>
0840d565 +0xaf1:  mov    -0x10(%ebp),%eax
0840d568 +0xaf4:  movb   $0x1,-0x2a9(%ebp,%eax,1)
0840d570 +0xafc:  cmpl   $0x8c,-0x10(%ebp)
0840d577 +0xb03:  jne    0840d596 <+0xb22>
0840d579 +0xb05:  movl   $0xee,-0x10(%ebp)
0840d580 +0xb0c:  jmp    0840d597 <+0xb23>
0840d582 +0xb0e:  addl   $0x1,-0x10(%ebp)
0840d586 +0xb12:  cmpl   $0x8c,-0x10(%ebp)
0840d58d +0xb19:  setle  %al
0840d590 +0xb1c:  test   %al,%al
0840d592 +0xb1e:  jne    0840d553 <+0xadf>
0840d594 +0xb20:  jmp    0840d597 <+0xb23>
0840d596 +0xb22:  nop
0840d597 +0xb23:  cmpl   $0xee,-0x10(%ebp)
0840d59e +0xb2a:  je     0840d5ee <+0xb7a>
0840d5a0 +0xb2c:  cmpl   $0x8b,-0x10(%ebp)
0840d5a7 +0xb33:  jle    0840d5ee <+0xb7a>
0840d5a9 +0xb35:  mov    0xc(%ebp),%eax
0840d5ac +0xb38:  mov    0x4(%eax),%ebx
0840d5af +0xb3b:  movl   $0x5,0xc(%esp)
0840d5b7 +0xb43:  movl   $0x28e9,0x8(%esp)
0840d5bf +0xb4b:  movl   $&_ZZN16DB_LoadInventory15GetUserCreatureEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840d5c7 +0xb53:  lea    -0x34(%ebp),%eax
0840d5ca +0xb56:  mov    %eax,(%esp)
0840d5cd +0xb59:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840d5d2 +0xb5e:  mov    %ebx,0x8(%esp)
0840d5d6 +0xb62:  movl   $"DB_LoadInventory::GetUserCreature, charac_no=%u, slot overflow",0x4(%esp)
0840d5de +0xb6a:  lea    -0x34(%ebp),%eax
0840d5e1 +0xb6d:  mov    %eax,(%esp)
0840d5e4 +0xb70:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840d5e9 +0xb75:  jmp    0840d727 <+0xcb3>
0840d5ee +0xb7a:  mov    -0x10(%ebp),%eax
0840d5f1 +0xb7d:  mov    0xc(%ebp),%edx
0840d5f4 +0xb80:  imul   $0x3d,%eax,%eax
0840d5f7 +0xb83:  lea    (%edx,%eax,1),%eax
0840d5fa +0xb86:  add    $0xeed0,%eax
0840d5ff +0xb8b:  movb   $0x5,0x2(%eax)
0840d603 +0xb8f:  mov    -0x10(%ebp),%ebx
0840d606 +0xb92:  lea    -0x168(%ebp),%eax
0840d60c +0xb98:  mov    %eax,(%esp)
0840d60f +0xb9b:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
0840d614 +0xba0:  movzwl 0xb(%eax),%eax
0840d618 +0xba4:  mov    0xc(%ebp),%ecx
0840d61b +0xba7:  imul   $0x3d,%ebx,%edx
0840d61e +0xbaa:  lea    (%ecx,%edx,1),%edx
0840d621 +0xbad:  add    $0xeed0,%edx
0840d627 +0xbb3:  mov    %ax,0xc(%edx)
0840d62b +0xbb7:  mov    -0x10(%ebp),%ebx
0840d62e +0xbba:  lea    -0x168(%ebp),%eax
0840d634 +0xbc0:  mov    %eax,(%esp)
0840d637 +0xbc3:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
0840d63c +0xbc8:  mov    0x2(%eax),%eax
0840d63f +0xbcb:  mov    0xc(%ebp),%ecx
0840d642 +0xbce:  imul   $0x3d,%ebx,%edx
0840d645 +0xbd1:  lea    (%ecx,%edx,1),%edx
0840d648 +0xbd4:  add    $0xeed0,%edx
0840d64e +0xbda:  mov    %eax,0x3(%edx)
0840d651 +0xbdd:  mov    -0x10(%ebp),%ebx
0840d654 +0xbe0:  lea    -0x168(%ebp),%eax
0840d65a +0xbe6:  mov    %eax,(%esp)
0840d65d +0xbe9:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
0840d662 +0xbee:  mov    0x7(%eax),%eax
0840d665 +0xbf1:  mov    0xc(%ebp),%ecx
0840d668 +0xbf4:  imul   $0x3d,%ebx,%edx
0840d66b +0xbf7:  lea    (%ecx,%edx,1),%edx
0840d66e +0xbfa:  add    $0xeed8,%edx
0840d674 +0xc00:  mov    %eax,(%edx)
0840d676 +0xc02:  lea    -0x168(%ebp),%eax
0840d67c +0xc08:  mov    %eax,(%esp)
0840d67f +0xc0b:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
0840d684 +0xc10:  add    $0x11,%eax
0840d687 +0xc13:  mov    %eax,(%esp)
0840d68a +0xc16:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
0840d68f +0xc1b:  movzbl %al,%eax
0840d692 +0xc1e:  mov    -0x10(%ebp),%edx
0840d695 +0xc21:  imul   $0x3d,%edx,%edx
0840d698 +0xc24:  add    $0xeee0,%edx
0840d69e +0xc2a:  add    0xc(%ebp),%edx
0840d6a1 +0xc2d:  add    $0x2,%edx
0840d6a4 +0xc30:  mov    %eax,0x4(%esp)
0840d6a8 +0xc34:  mov    %edx,(%esp)
0840d6ab +0xc37:  call   0844d478 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8e
0840d6b0 +0xc3c:  mov    -0x10(%ebp),%eax
0840d6b3 +0xc3f:  mov    0xc(%ebp),%edx
0840d6b6 +0xc42:  imul   $0x3d,%eax,%eax
0840d6b9 +0xc45:  lea    (%edx,%eax,1),%eax
0840d6bc +0xc48:  add    $0xeed8,%eax
0840d6c1 +0xc4d:  mov    (%eax),%eax
0840d6c3 +0xc4f:  mov    -0x10(%ebp),%edx
0840d6c6 +0xc52:  mov    %edx,0x4(%esp)
0840d6ca +0xc56:  mov    %eax,(%esp)
0840d6cd +0xc59:  call   0841fef2 <_ZN19DB_SwapCreatureItem11makeRequestEii>  ; DB_SwapCreatureItem::makeRequest(int, int)
0840d6d2 +0xc5e:  lea    -0x24(%ebp),%eax
0840d6d5 +0xc61:  movl   $0x0,0x8(%esp)
0840d6dd +0xc69:  lea    -0x168(%ebp),%edx
0840d6e3 +0xc6f:  mov    %edx,0x4(%esp)
0840d6e7 +0xc73:  mov    %eax,(%esp)
0840d6ea +0xc76:  call   08450846 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x345c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x345c
0840d6ef +0xc7b:  sub    $0x4,%esp
0840d6f2 +0xc7e:  lea    -0x38(%ebp),%eax
0840d6f5 +0xc81:  lea    -0x154(%ebp),%edx
0840d6fb +0xc87:  mov    %edx,0x4(%esp)
0840d6ff +0xc8b:  mov    %eax,(%esp)
0840d702 +0xc8e:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
0840d707 +0xc93:  sub    $0x4,%esp
0840d70a +0xc96:  lea    -0x38(%ebp),%eax
0840d70d +0xc99:  mov    %eax,0x4(%esp)
0840d711 +0xc9d:  lea    -0x168(%ebp),%eax
0840d717 +0xca3:  mov    %eax,(%esp)
0840d71a +0xca6:  call   08152910 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2245>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2245
0840d71f +0xcab:  test   %al,%al
0840d721 +0xcad:  jne    0840d586 <+0xb12>
0840d727 +0xcb3:  mov    $0x1,%ebx
0840d72c +0xcb8:  jmp    0840d74c <+0xcd8>
0840d72e +0xcba:  mov    %edx,%ebx
0840d730 +0xcbc:  mov    %eax,%esi
0840d732 +0xcbe:  lea    -0x154(%ebp),%eax
0840d738 +0xcc4:  mov    %eax,(%esp)
0840d73b +0xcc7:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
0840d740 +0xccc:  mov    %esi,%eax
0840d742 +0xcce:  mov    %ebx,%edx
0840d744 +0xcd0:  mov    %eax,(%esp)
0840d747 +0xcd3:  call   08ae3750 <_Unwind_Resume>
0840d74c +0xcd8:  lea    -0x154(%ebp),%eax
0840d752 +0xcde:  mov    %eax,(%esp)
0840d755 +0xce1:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
0840d75a +0xce6:  mov    %ebx,%eax
0840d75c +0xce8:  lea    -0x8(%ebp),%esp
0840d75f +0xceb:  add    $0x0,%esp
0840d762 +0xcee:  pop    %ebx
0840d763 +0xcef:  pop    %esi
0840d764 +0xcf0:  pop    %ebp
0840d765 +0xcf1:  ret
```

## 反编译 C

```c
// DB_LoadInventory::GetUserCreature @ 0x840ca74

/* DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*) */

undefined4 __thiscall
DB_LoadInventory::GetUserCreature(DB_LoadInventory *this,SIG_LOAD_INVENTORY *param_1)

{
  undefined4 uVar1;
  char cVar2;
  uchar uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char local_2ad [141];
  undefined1 local_220 [8];
  ulong local_218 [3];
  ushort local_20c [12];
  int local_1f4;
  int local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  Inven_Item local_1a9;
  undefined1 local_1a8;
  ulong local_1a7;
  int local_1a2;
  ushort local_19e;
  stAmplifyOption_t asStack_198 [44];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_16c [7];
  uchar local_165;
  int local_164;
  int local_160;
  int local_15c;
  vector<Inven_Item,std::allocator<Inven_Item>> local_158 [12];
  cMyTrace local_14c [16];
  cMyTrace local_13c [16];
  cMyTrace local_12c [16];
  cMyTrace local_11c [16];
  cMyTrace local_10c [16];
  cMyTrace local_fc [16];
  cMyTrace local_ec [16];
  cMyTrace local_dc [16];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  __normal_iterator local_3c [4];
  cMyTrace local_38 [16];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_28 [7];
  char local_21;
  MySQL *local_20;
  int local_1c;
  char local_15;
  int local_14;
  int local_10;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_20,
                   "seLect slot,it_id,name,stomach,exp,endurance,creature_type,ui_id,no_charge,stat,item_lock_key,unix_timestamp(expire_date) from creature_items where charac_no=%u and stat = 0 and expire_date>now()"
                   ,*(undefined4 *)(param_1 + 4));
  local_21 = MySQL::exec(local_20,true);
  if (local_21 == '\x01') {
    uVar8 = MySQL::get_n_rows(local_20);
    *(undefined4 *)(param_1 + 0x1287c) = uVar8;
    local_1c = 0;
    if (*(int *)(param_1 + 0x1287c) < 0x8e) {
      memset(local_2ad,0,0x8d);
      std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_158);
      local_15 = '\0';
      for (local_1c = 0; local_1c < *(int *)(param_1 + 0x1287c); local_1c = local_1c + 1) {
                    /* try { // try from 0840cbf9 to 0840d71e has its CatchHandler @ 0840d72e */
        local_21 = MySQL::fetch(local_20);
        if (local_21 != '\x01') {
          uVar8 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_12c,"bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)"
                             ,0x280e,5);
          cMyTrace::operator()
                    (local_12c,"DB_LoadInventory::GetUserCreature, fetch() ERROR charac_no=%u,%d",
                     uVar8,local_1c);
          break;
        }
        memset(local_220,0,0x74);
        local_21 = MySQL::get_int(local_20,0,&local_1f4);
        local_10 = local_1f4;
        if (local_1f4 == 0xee) {
          local_10 = 0x8c;
        }
        if (local_10 < 0x8d) {
          if (local_2ad[local_10] == '\x01') {
            local_15 = '\x01';
          }
          else {
            local_2ad[local_10] = '\x01';
          }
          if (local_21 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_10c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x282c,
                               5);
            cMyTrace::operator()
                      (local_10c,"DB_LoadInventory::GetUserCreature, get_int(0) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          local_21 = MySQL::get_ulong(local_20,1,local_218);
          if (local_21 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_fc,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2833,
                               5);
            cMyTrace::operator()
                      (local_fc,
                       "DB_LoadInventory::GetUserCreature, get_ushort(1) ERROR charac_no=%u",uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          cVar2 = MySQL::get_str(local_20,2,(char *)&local_1ec,0xd);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_ec,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2846,
                               5);
            cMyTrace::operator()
                      (local_ec,"DB_LoadInventory::GetUserCreature, get_int(2) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          local_21 = MySQL::get_int(local_20,3,&local_1dc);
          if (local_21 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_dc,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x284e,
                               5);
            cMyTrace::operator()
                      (local_dc,"DB_LoadInventory::GetUserCreature, get_int(3) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          local_21 = MySQL::get_int(local_20,4,&local_1d4);
          if (local_21 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_cc,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2855,
                               5);
            cMyTrace::operator()
                      (local_cc,"DB_LoadInventory::GetUserCreature, get_int(4) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          cVar2 = MySQL::get_ushort(local_20,5,local_20c);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_bc,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x285b,
                               5);
            cMyTrace::operator()
                      (local_bc,
                       "DB_LoadInventory::GetUserCreature, get_ushort(5) ERROR charac_no=%u",uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          cVar2 = MySQL::get_int(local_20,6,&local_15c);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_ac,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2862,
                               5);
            cMyTrace::operator()
                      (local_ac,"DB_LoadInventory::GetUserCreature, get_int(6) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          local_1d0 = CONCAT31(local_1d0._1_3_,(char)local_15c);
          cVar2 = MySQL::get_int(local_20,7,&local_1f0);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_9c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2869,
                               5);
            cMyTrace::operator()
                      (local_9c,"DB_LoadInventory::GetUserCreature, get_int(7) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          cVar2 = MySQL::get_int(local_20,8,&local_160);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_8c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2870,
                               5);
            cMyTrace::operator()
                      (local_8c,"DB_LoadInventory::GetUserCreature, get_int(8) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          local_1d0._0_3_ = CONCAT12((char)local_160,(undefined2)local_1d0);
          cVar2 = MySQL::get_int(local_20,9,&local_164);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_7c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2878,
                               5);
            cMyTrace::operator()
                      (local_7c,"DB_LoadInventory::GetUserCreature, get_int(9) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          local_1d0 = CONCAT13((char)local_164,(undefined3)local_1d0);
          local_165 = '\0';
          cVar2 = MySQL::get_ubyte(local_20,10,&local_165);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_6c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x2880,
                               5);
            cMyTrace::operator()
                      (local_6c,
                       "DB_LoadInventory::GetUserCreature, get_ubyte(10) ERROR charac_no=%u",uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          cVar2 = MySQL::get_int(local_20,0xb,&local_1cc);
          if (cVar2 != '\x01') {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_5c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x28a6,
                               5);
            cMyTrace::operator()
                      (local_5c,"DB_LoadInventory::GetUserCreature, get_int(12) ERROR charac_no=%u",
                       uVar8);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          if (0xf1 < local_1f4) {
            uVar8 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_4c,
                               "bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",0x28ad,
                               5);
            cMyTrace::operator()
                      (local_4c,
                       "DB_LoadInventory::GetUserCreature, slot_no overflow ERROR charac_no=%u, slot_no=%d"
                       ,uVar8,local_1f4);
            uVar8 = 0;
            goto LAB_0840d74c;
          }
          if (local_15 == '\0') {
            param_1[local_1f4 * 0x3d + 0xeed2] = (SIG_LOAD_INVENTORY)0x5;
            *(ushort *)(param_1 + local_1f4 * 0x3d + 0xeedc) = local_20c[0];
            *(ulong *)(param_1 + local_1f4 * 0x3d + 0xeed3) = local_218[0];
            *(int *)(param_1 + local_1f4 * 0x3d + 0xeed8) = local_1f0;
            stAmplifyOption_t::SetLock
                      ((stAmplifyOption_t *)(param_1 + local_1f4 * 0x3d + 0xeee2),local_165);
          }
          else {
            Inven_Item::Inven_Item(&local_1a9);
            memset(&local_1a9,0,0x3d);
            local_1a8 = 5;
            local_19e = local_20c[0];
            local_1a7 = local_218[0];
            local_1a2 = local_1f0;
            stAmplifyOption_t::SetLock(asStack_198,local_165);
            local_15 = '\0';
            std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back(local_158,&local_1a9);
          }
          *(int *)(param_1 + local_1c * 0x38 + 0x12880) = local_1f4;
          *(int *)(param_1 + local_1c * 0x38 + 0x12884) = local_1f0;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x12888) = local_1ec;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x1288c) = local_1e8;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x12890) = local_1e4;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x12894) = local_1e0;
          *(int *)(param_1 + local_1c * 0x38 + 0x12898) = local_1dc;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x1289c) = local_1d8;
          *(int *)(param_1 + local_1c * 0x38 + 0x128a0) = local_1d4;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x128a4) = local_1d0;
          *(int *)(param_1 + local_1c * 0x38 + 0x128a8) = local_1cc;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x128ac) = local_1c8;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x128b0) = local_1c4;
          *(undefined4 *)(param_1 + local_1c * 0x38 + 0x128b4) = local_1c0;
        }
        else {
          uVar8 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_11c,"bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)"
                             ,0x281d,5);
          cMyTrace::operator()
                    (local_11c,"DB_LoadInventory::GetUserCreature, charac_no=%u, slot=%d overflow",
                     uVar8,local_10);
        }
      }
      local_14 = 0;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      while( true ) {
        std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
        bVar4 = __gnu_cxx::operator!=(local_16c,local_3c);
        if (!bVar4) break;
        for (; local_14 < 0x8d; local_14 = local_14 + 1) {
          if (local_2ad[local_14] != '\x01') {
            local_2ad[local_14] = '\x01';
            if (local_14 == 0x8c) {
              local_14 = 0xee;
            }
            break;
          }
        }
        iVar7 = local_14;
        if ((local_14 != 0xee) && (0x8b < local_14)) {
          uVar8 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_38,"bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",
                             0x28e9,5);
          cMyTrace::operator()
                    (local_38,"DB_LoadInventory::GetUserCreature, charac_no=%u, slot overflow",uVar8
                    );
          break;
        }
        param_1[local_14 * 0x3d + 0xeed2] = (SIG_LOAD_INVENTORY)0x5;
        iVar5 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_16c);
        iVar6 = local_14;
        *(undefined2 *)(param_1 + iVar7 * 0x3d + 0xeedc) = *(undefined2 *)(iVar5 + 0xb);
        iVar5 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_16c);
        iVar7 = local_14;
        *(undefined4 *)(param_1 + iVar6 * 0x3d + 0xeed3) = *(undefined4 *)(iVar5 + 2);
        iVar6 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_16c);
        *(undefined4 *)(param_1 + iVar7 * 0x3d + 0xeed8) = *(undefined4 *)(iVar6 + 7);
        iVar7 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_16c);
        uVar3 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(iVar7 + 0x11));
        stAmplifyOption_t::SetLock((stAmplifyOption_t *)(param_1 + local_14 * 0x3d + 0xeee2),uVar3);
        DB_SwapCreatureItem::makeRequest(*(int *)(param_1 + local_14 * 0x3d + 0xeed8),local_14);
        __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
        ::operator++(local_28,(int)local_16c);
      }
      uVar8 = 1;
LAB_0840d74c:
      std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_158);
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + 0x1287c);
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_13c,"bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",
                         0x27fb,5);
      cMyTrace::operator()
                (local_13c,
                 "DB_LoadInventory::GetUserCreature, creature_item_count overflow ERROR charac_no=%u, item_count=%d"
                 ,uVar1,uVar8);
      uVar8 = 0;
    }
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_14c,"bool DB_LoadInventory::GetUserCreature(SIG_LOAD_INVENTORY*)",
                       0x27f0,5);
    cMyTrace::operator()
              (local_14c,"DB_LoadInventory::GetUserCreature, exec() ERROR charac_no=%u",uVar8);
    uVar8 = 0;
  }
  return uVar8;
}
```
