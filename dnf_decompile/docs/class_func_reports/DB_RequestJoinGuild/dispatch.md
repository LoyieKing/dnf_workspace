# dispatch

`_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream`

`DB_RequestJoinGuild::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_RequestJoinGuild` | `0x0843ccf2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843ccf2  _ZN19DB_RequestJoinGuild8dispatchEiiP6Stream
#           DB_RequestJoinGuild::dispatch(int, int, Stream*)
# range [0x0843ccf2, 0x0843d199]
0843ccf2 +0x000:  push   %ebp
0843ccf3 +0x001:  mov    %esp,%ebp
0843ccf5 +0x003:  push   %edi
0843ccf6 +0x004:  push   %esi
0843ccf7 +0x005:  push   %ebx
0843ccf8 +0x006:  sub    $0x7c,%esp
0843ccfb +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843cd00 +0x00e:  movl   $0x0,0x8(%esp)
0843cd08 +0x016:  movl   $0x8,0x4(%esp)
0843cd10 +0x01e:  mov    %eax,(%esp)
0843cd13 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843cd18 +0x026:  mov    %eax,-0x28(%ebp)
0843cd1b +0x029:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843cd20 +0x02e:  movl   $0x9129,0x8(%esp)
0843cd28 +0x036:  movl   $"DBThread.cpp",0x4(%esp)
0843cd30 +0x03e:  mov    %eax,(%esp)
0843cd33 +0x041:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843cd38 +0x046:  movl   $0x1,0x8(%esp)
0843cd40 +0x04e:  mov    %eax,0x4(%esp)
0843cd44 +0x052:  lea    -0x30(%ebp),%eax
0843cd47 +0x055:  mov    %eax,(%esp)
0843cd4a +0x058:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843cd4f +0x05d:  lea    -0x30(%ebp),%eax
0843cd52 +0x060:  mov    %eax,(%esp)
0843cd55 +0x063:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843cd5a +0x068:  movl   $0x217,0x4(%esp)
0843cd62 +0x070:  mov    %eax,(%esp)
0843cd65 +0x073:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843cd6a +0x078:  lea    -0x30(%ebp),%eax
0843cd6d +0x07b:  mov    %eax,(%esp)
0843cd70 +0x07e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843cd75 +0x083:  mov    0x10(%ebp),%edx
0843cd78 +0x086:  mov    %edx,0x4(%esp)
0843cd7c +0x08a:  mov    %eax,(%esp)
0843cd7f +0x08d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843cd84 +0x092:  lea    -0x30(%ebp),%eax
0843cd87 +0x095:  mov    %eax,(%esp)
0843cd8a +0x098:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843cd8f +0x09d:  mov    %eax,(%esp)
0843cd92 +0x0a0:  call   08453afa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6710>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6710
0843cd97 +0x0a5:  mov    %eax,-0x24(%ebp)
0843cd9a +0x0a8:  mov    0x14(%ebp),%eax
0843cd9d +0x0ab:  mov    %eax,(%esp)
0843cda0 +0x0ae:  call   08453b10 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6726>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6726
0843cda5 +0x0b3:  mov    %eax,-0x20(%ebp)
0843cda8 +0x0b6:  movl   $0x0,-0x1c(%ebp)
0843cdaf +0x0bd:  mov    -0x20(%ebp),%eax
0843cdb2 +0x0c0:  mov    0x20(%eax),%edx
0843cdb5 +0x0c3:  mov    -0x20(%ebp),%eax
0843cdb8 +0x0c6:  mov    0x18(%eax),%eax
0843cdbb +0x0c9:  mov    %edx,0xc(%esp)
0843cdbf +0x0cd:  mov    %eax,0x8(%esp)
0843cdc3 +0x0d1:  movl   $"seLect * from guild_join_list where charac_no=%d and server_group=%d",0x4(%esp)
0843cdcb +0x0d9:  mov    -0x28(%ebp),%eax
0843cdce +0x0dc:  mov    %eax,(%esp)
0843cdd1 +0x0df:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843cdd6 +0x0e4:  movl   $0x1,0x4(%esp)
0843cdde +0x0ec:  mov    -0x28(%ebp),%eax
0843cde1 +0x0ef:  mov    %eax,(%esp)
0843cde4 +0x0f2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843cde9 +0x0f7:  xor    $0x1,%eax
0843cdec +0x0fa:  test   %al,%al
0843cdee +0x0fc:  je     0843cdfa <+0x108>
0843cdf0 +0x0fe:  mov    $0x0,%ebx
0843cdf5 +0x103:  jmp    0843d184 <+0x492>
0843cdfa +0x108:  mov    -0x28(%ebp),%eax
0843cdfd +0x10b:  mov    %eax,(%esp)
0843ce00 +0x10e:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843ce05 +0x113:  test   %eax,%eax
0843ce07 +0x115:  setne  %al
0843ce0a +0x118:  test   %al,%al
0843ce0c +0x11a:  je     0843ce3d <+0x14b>
0843ce0e +0x11c:  mov    -0x24(%ebp),%eax
0843ce11 +0x11f:  movl   $0x12,(%eax)
0843ce17 +0x125:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843ce1c +0x12a:  lea    -0x30(%ebp),%edx
0843ce1f +0x12d:  mov    %edx,0x8(%esp)
0843ce23 +0x131:  movl   $0x1,0x4(%esp)
0843ce2b +0x139:  mov    %eax,(%esp)
0843ce2e +0x13c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843ce33 +0x141:  mov    $0x0,%ebx
0843ce38 +0x146:  jmp    0843d184 <+0x492>
0843ce3d +0x14b:  mov    -0x20(%ebp),%edx
0843ce40 +0x14e:  mov    -0x20(%ebp),%eax
0843ce43 +0x151:  mov    0x20(%eax),%eax
0843ce46 +0x154:  mov    %edx,0xc(%esp)
0843ce4a +0x158:  mov    %eax,0x8(%esp)
0843ce4e +0x15c:  movl   $"seLect guild_id,guild_name,master_name,lev,member_count from guild_info where server_id=%d and expire_flag=0 and guild_name='%s'",0x4(%esp)
0843ce56 +0x164:  mov    -0x28(%ebp),%eax
0843ce59 +0x167:  mov    %eax,(%esp)
0843ce5c +0x16a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ce61 +0x16f:  movl   $0x1,0x4(%esp)
0843ce69 +0x177:  mov    -0x28(%ebp),%eax
0843ce6c +0x17a:  mov    %eax,(%esp)
0843ce6f +0x17d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ce74 +0x182:  xor    $0x1,%eax
0843ce77 +0x185:  test   %al,%al
0843ce79 +0x187:  je     0843ce85 <+0x193>
0843ce7b +0x189:  mov    $0x0,%ebx
0843ce80 +0x18e:  jmp    0843d184 <+0x492>
0843ce85 +0x193:  mov    -0x28(%ebp),%eax
0843ce88 +0x196:  mov    %eax,(%esp)
0843ce8b +0x199:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843ce90 +0x19e:  test   %eax,%eax
0843ce92 +0x1a0:  sete   %al
0843ce95 +0x1a3:  test   %al,%al
0843ce97 +0x1a5:  je     0843cec8 <+0x1d6>
0843ce99 +0x1a7:  mov    -0x24(%ebp),%eax
0843ce9c +0x1aa:  movl   $0x15,(%eax)
0843cea2 +0x1b0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843cea7 +0x1b5:  lea    -0x30(%ebp),%edx
0843ceaa +0x1b8:  mov    %edx,0x8(%esp)
0843ceae +0x1bc:  movl   $0x1,0x4(%esp)
0843ceb6 +0x1c4:  mov    %eax,(%esp)
0843ceb9 +0x1c7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843cebe +0x1cc:  mov    $0x1,%ebx
0843cec3 +0x1d1:  jmp    0843d184 <+0x492>
0843cec8 +0x1d6:  mov    -0x28(%ebp),%eax
0843cecb +0x1d9:  mov    %eax,(%esp)
0843cece +0x1dc:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843ced3 +0x1e1:  xor    $0x1,%eax
0843ced6 +0x1e4:  test   %al,%al
0843ced8 +0x1e6:  je     0843cee4 <+0x1f2>
0843ceda +0x1e8:  mov    $0x0,%ebx
0843cedf +0x1ed:  jmp    0843d184 <+0x492>
0843cee4 +0x1f2:  mov    -0x24(%ebp),%eax
0843cee7 +0x1f5:  add    $0x4,%eax
0843ceea +0x1f8:  mov    %eax,0x8(%esp)
0843ceee +0x1fc:  movl   $0x0,0x4(%esp)
0843cef6 +0x204:  mov    -0x28(%ebp),%eax
0843cef9 +0x207:  mov    %eax,(%esp)
0843cefc +0x20a:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0843cf01 +0x20f:  xor    $0x1,%eax
0843cf04 +0x212:  test   %al,%al
0843cf06 +0x214:  je     0843cf12 <+0x220>
0843cf08 +0x216:  mov    $0x0,%ebx
0843cf0d +0x21b:  jmp    0843d184 <+0x492>
0843cf12 +0x220:  mov    -0x24(%ebp),%eax
0843cf15 +0x223:  add    $0x26,%eax
0843cf18 +0x226:  movl   $0x17,0xc(%esp)
0843cf20 +0x22e:  mov    %eax,0x8(%esp)
0843cf24 +0x232:  movl   $0x1,0x4(%esp)
0843cf2c +0x23a:  mov    -0x28(%ebp),%eax
0843cf2f +0x23d:  mov    %eax,(%esp)
0843cf32 +0x240:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0843cf37 +0x245:  xor    $0x1,%eax
0843cf3a +0x248:  test   %al,%al
0843cf3c +0x24a:  je     0843cf48 <+0x256>
0843cf3e +0x24c:  mov    $0x0,%ebx
0843cf43 +0x251:  jmp    0843d184 <+0x492>
0843cf48 +0x256:  mov    -0x24(%ebp),%eax
0843cf4b +0x259:  add    $0x8,%eax
0843cf4e +0x25c:  movl   $0x1e,0xc(%esp)
0843cf56 +0x264:  mov    %eax,0x8(%esp)
0843cf5a +0x268:  movl   $0x2,0x4(%esp)
0843cf62 +0x270:  mov    -0x28(%ebp),%eax
0843cf65 +0x273:  mov    %eax,(%esp)
0843cf68 +0x276:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0843cf6d +0x27b:  xor    $0x1,%eax
0843cf70 +0x27e:  test   %al,%al
0843cf72 +0x280:  je     0843cf7e <+0x28c>
0843cf74 +0x282:  mov    $0x0,%ebx
0843cf79 +0x287:  jmp    0843d184 <+0x492>
0843cf7e +0x28c:  mov    -0x24(%ebp),%eax
0843cf81 +0x28f:  add    $0x40,%eax
0843cf84 +0x292:  mov    %eax,0x8(%esp)
0843cf88 +0x296:  movl   $0x3,0x4(%esp)
0843cf90 +0x29e:  mov    -0x28(%ebp),%eax
0843cf93 +0x2a1:  mov    %eax,(%esp)
0843cf96 +0x2a4:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843cf9b +0x2a9:  xor    $0x1,%eax
0843cf9e +0x2ac:  test   %al,%al
0843cfa0 +0x2ae:  je     0843cfac <+0x2ba>
0843cfa2 +0x2b0:  mov    $0x0,%ebx
0843cfa7 +0x2b5:  jmp    0843d184 <+0x492>
0843cfac +0x2ba:  mov    -0x24(%ebp),%eax
0843cfaf +0x2bd:  add    $0x44,%eax
0843cfb2 +0x2c0:  mov    %eax,0x8(%esp)
0843cfb6 +0x2c4:  movl   $0x4,0x4(%esp)
0843cfbe +0x2cc:  mov    -0x28(%ebp),%eax
0843cfc1 +0x2cf:  mov    %eax,(%esp)
0843cfc4 +0x2d2:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843cfc9 +0x2d7:  xor    $0x1,%eax
0843cfcc +0x2da:  test   %al,%al
0843cfce +0x2dc:  je     0843cfda <+0x2e8>
0843cfd0 +0x2de:  mov    $0x0,%ebx
0843cfd5 +0x2e3:  jmp    0843d184 <+0x492>
0843cfda +0x2e8:  mov    -0x24(%ebp),%eax
0843cfdd +0x2eb:  mov    0x4(%eax),%eax
0843cfe0 +0x2ee:  mov    %eax,0x8(%esp)
0843cfe4 +0x2f2:  movl   $"seLect * from guild_join_list where guild_id=%d",0x4(%esp)
0843cfec +0x2fa:  mov    -0x28(%ebp),%eax
0843cfef +0x2fd:  mov    %eax,(%esp)
0843cff2 +0x300:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843cff7 +0x305:  movl   $0x1,0x4(%esp)
0843cfff +0x30d:  mov    -0x28(%ebp),%eax
0843d002 +0x310:  mov    %eax,(%esp)
0843d005 +0x313:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843d00a +0x318:  xor    $0x1,%eax
0843d00d +0x31b:  test   %al,%al
0843d00f +0x31d:  je     0843d01b <+0x329>
0843d011 +0x31f:  mov    $0x0,%ebx
0843d016 +0x324:  jmp    0843d184 <+0x492>
0843d01b +0x329:  mov    -0x28(%ebp),%eax
0843d01e +0x32c:  mov    %eax,(%esp)
0843d021 +0x32f:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843d026 +0x334:  cmp    $0x31,%eax
0843d029 +0x337:  seta   %al
0843d02c +0x33a:  test   %al,%al
0843d02e +0x33c:  je     0843d05f <+0x36d>
0843d030 +0x33e:  mov    -0x24(%ebp),%eax
0843d033 +0x341:  movl   $0x5f,(%eax)
0843d039 +0x347:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843d03e +0x34c:  lea    -0x30(%ebp),%edx
0843d041 +0x34f:  mov    %edx,0x8(%esp)
0843d045 +0x353:  movl   $0x1,0x4(%esp)
0843d04d +0x35b:  mov    %eax,(%esp)
0843d050 +0x35e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843d055 +0x363:  mov    $0x1,%ebx
0843d05a +0x368:  jmp    0843d184 <+0x492>
0843d05f +0x36d:  mov    -0x20(%ebp),%eax
0843d062 +0x370:  add    $0x27,%eax
0843d065 +0x373:  mov    %eax,0x8(%esp)
0843d069 +0x377:  lea    -0x65(%ebp),%eax
0843d06c +0x37a:  mov    %eax,0x4(%esp)
0843d070 +0x37e:  mov    -0x28(%ebp),%eax
0843d073 +0x381:  mov    %eax,(%esp)
0843d076 +0x384:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0843d07b +0x389:  mov    -0x20(%ebp),%eax
0843d07e +0x38c:  lea    0x24(%eax),%edi
0843d081 +0x38f:  mov    -0x20(%ebp),%eax
0843d084 +0x392:  mov    0x18(%eax),%esi
0843d087 +0x395:  mov    -0x20(%ebp),%eax
0843d08a +0x398:  mov    0x20(%eax),%ebx
0843d08d +0x39b:  mov    -0x20(%ebp),%eax
0843d090 +0x39e:  mov    0x1c(%eax),%eax
0843d093 +0x3a1:  movl   $0x0,0x4(%esp)
0843d09b +0x3a9:  mov    %eax,(%esp)
0843d09e +0x3ac:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843d0a3 +0x3b1:  mov    -0x24(%ebp),%edx
0843d0a6 +0x3b4:  mov    0x4(%edx),%edx
0843d0a9 +0x3b7:  lea    -0x65(%ebp),%ecx
0843d0ac +0x3ba:  mov    %ecx,0x1c(%esp)
0843d0b0 +0x3be:  mov    %edi,0x18(%esp)
0843d0b4 +0x3c2:  mov    %esi,0x14(%esp)
0843d0b8 +0x3c6:  mov    %ebx,0x10(%esp)
0843d0bc +0x3ca:  mov    %eax,0xc(%esp)
0843d0c0 +0x3ce:  mov    %edx,0x8(%esp)
0843d0c4 +0x3d2:  movl   $"inSert into guild_join_list(guild_id,m_id,server_group,charac_no,born_year,memo,occ_time) values(%d,%s,%d,%d,'%s','%s',now())",0x4(%esp)
0843d0cc +0x3da:  mov    -0x28(%ebp),%eax
0843d0cf +0x3dd:  mov    %eax,(%esp)
0843d0d2 +0x3e0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843d0d7 +0x3e5:  movl   $0x1,0x4(%esp)
0843d0df +0x3ed:  mov    -0x28(%ebp),%eax
0843d0e2 +0x3f0:  mov    %eax,(%esp)
0843d0e5 +0x3f3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843d0ea +0x3f8:  xor    $0x1,%eax
0843d0ed +0x3fb:  test   %al,%al
0843d0ef +0x3fd:  je     0843d0fb <+0x409>
0843d0f1 +0x3ff:  mov    $0x0,%ebx
0843d0f6 +0x404:  jmp    0843d184 <+0x492>
0843d0fb +0x409:  mov    -0x28(%ebp),%eax
0843d0fe +0x40c:  mov    %eax,(%esp)
0843d101 +0x40f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843d106 +0x414:  or     %edx,%eax
0843d108 +0x416:  test   %eax,%eax
0843d10a +0x418:  sete   %al
0843d10d +0x41b:  test   %al,%al
0843d10f +0x41d:  je     0843d13d <+0x44b>
0843d111 +0x41f:  mov    -0x24(%ebp),%eax
0843d114 +0x422:  movl   $0x2,(%eax)
0843d11a +0x428:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843d11f +0x42d:  lea    -0x30(%ebp),%edx
0843d122 +0x430:  mov    %edx,0x8(%esp)
0843d126 +0x434:  movl   $0x1,0x4(%esp)
0843d12e +0x43c:  mov    %eax,(%esp)
0843d131 +0x43f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843d136 +0x444:  mov    $0x1,%ebx
0843d13b +0x449:  jmp    0843d184 <+0x492>
0843d13d +0x44b:  mov    -0x24(%ebp),%eax
0843d140 +0x44e:  movl   $0x0,(%eax)
0843d146 +0x454:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843d14b +0x459:  lea    -0x30(%ebp),%edx
0843d14e +0x45c:  mov    %edx,0x8(%esp)
0843d152 +0x460:  movl   $0x1,0x4(%esp)
0843d15a +0x468:  mov    %eax,(%esp)
0843d15d +0x46b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843d162 +0x470:  mov    $0x1,%ebx
0843d167 +0x475:  jmp    0843d184 <+0x492>
0843d169 +0x477:  mov    %edx,%ebx
0843d16b +0x479:  mov    %eax,%esi
0843d16d +0x47b:  lea    -0x30(%ebp),%eax
0843d170 +0x47e:  mov    %eax,(%esp)
0843d173 +0x481:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843d178 +0x486:  mov    %esi,%eax
0843d17a +0x488:  mov    %ebx,%edx
0843d17c +0x48a:  mov    %eax,(%esp)
0843d17f +0x48d:  call   08ae3750 <_Unwind_Resume>
0843d184 +0x492:  lea    -0x30(%ebp),%eax
0843d187 +0x495:  mov    %eax,(%esp)
0843d18a +0x498:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843d18f +0x49d:  mov    %ebx,%eax
0843d191 +0x49f:  add    $0x7c,%esp
0843d194 +0x4a2:  pop    %ebx
0843d195 +0x4a3:  pop    %esi
0843d196 +0x4a4:  pop    %edi
0843d197 +0x4a5:  pop    %ebp
0843d198 +0x4a6:  ret
0843d199 +0x4a7:  nop
```

## 反编译 C

```c
// DB_RequestJoinGuild::dispatch @ 0x843ccf2

/* DB_RequestJoinGuild::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_RequestJoinGuild::dispatch(DB_RequestJoinGuild *this,int param_1,int param_2,Stream *param_3)

{
  SIG_REQUEST_JOIN_GUILD *pSVar1;
  undefined4 uVar2;
  char cVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  char local_69 [53];
  CStreamGuard local_34 [8];
  MySQL *local_2c;
  SIG_REQUEST_JOIN_GUILD_DB_REPLY *local_28;
  SIG_REQUEST_JOIN_GUILD *local_24;
  undefined4 local_20;
  
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9129);
  CStreamGuard::CStreamGuard(local_34,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 0843cd65 to 0843d161 has its CatchHandler @ 0843d169 */
  CStreamGuard::operator<<(pCVar5,0x217);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
  CStreamGuard::operator<<(pCVar5,param_2);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_34);
  local_28 = CStreamGuard::GetInBuffer<SIG_REQUEST_JOIN_GUILD_DB_REPLY>(pCVar5);
  local_24 = Stream::GetOutBuffer<SIG_REQUEST_JOIN_GUILD>(param_3);
  local_20 = 0;
  MySQL::set_query(local_2c,"seLect * from guild_join_list where charac_no=%d and server_group=%d",
                   *(undefined4 *)(local_24 + 0x18),*(undefined4 *)(local_24 + 0x20));
  cVar3 = MySQL::exec(local_2c,true);
  if (cVar3 == '\x01') {
    iVar6 = MySQL::get_n_rows(local_2c);
    if (iVar6 == 0) {
      MySQL::set_query(local_2c,
                       "seLect guild_id,guild_name,master_name,lev,member_count from guild_info where server_id=%d and expire_flag=0 and guild_name=\'%s\'"
                       ,*(undefined4 *)(local_24 + 0x20),local_24);
      cVar3 = MySQL::exec(local_2c,true);
      if (cVar3 == '\x01') {
        iVar6 = MySQL::get_n_rows(local_2c);
        if (iVar6 == 0) {
          *(undefined4 *)local_28 = 0x15;
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
          uVar9 = 1;
        }
        else {
          cVar3 = MySQL::fetch(local_2c);
          if (cVar3 == '\x01') {
            cVar3 = MySQL::get_uint(local_2c,0,(uint *)(local_28 + 4));
            if (cVar3 == '\x01') {
              cVar3 = MySQL::get_str(local_2c,1,(char *)(local_28 + 0x26),0x17);
              if (cVar3 == '\x01') {
                cVar3 = MySQL::get_str(local_2c,2,(char *)(local_28 + 8),0x1e);
                if (cVar3 == '\x01') {
                  cVar3 = MySQL::get_int(local_2c,3,(int *)(local_28 + 0x40));
                  if (cVar3 == '\x01') {
                    cVar3 = MySQL::get_int(local_2c,4,(int *)(local_28 + 0x44));
                    if (cVar3 == '\x01') {
                      MySQL::set_query(local_2c,"seLect * from guild_join_list where guild_id=%d",
                                       *(undefined4 *)(local_28 + 4));
                      cVar3 = MySQL::exec(local_2c,true);
                      if (cVar3 == '\x01') {
                        uVar7 = MySQL::get_n_rows(local_2c);
                        if (uVar7 < 0x32) {
                          MySQL::escape_string(local_2c,local_69,(char *)(local_24 + 0x27));
                          pSVar1 = local_24 + 0x24;
                          uVar9 = *(undefined4 *)(local_24 + 0x18);
                          uVar2 = *(undefined4 *)(local_24 + 0x20);
                          uVar8 = NumberToString(*(uint *)(local_24 + 0x1c),0);
                          MySQL::set_query(local_2c,
                                           "inSert into guild_join_list(guild_id,m_id,server_group,charac_no,born_year,memo,occ_time) values(%d,%s,%d,%d,\'%s\',\'%s\',now())"
                                           ,*(undefined4 *)(local_28 + 4),uVar8,uVar2,uVar9,pSVar1,
                                           local_69);
                          cVar3 = MySQL::exec(local_2c,true);
                          if (cVar3 == '\x01') {
                            lVar10 = MySQL::getAffectedRowCount(local_2c);
                            if (lVar10 == 0) {
                              *(undefined4 *)local_28 = 2;
                              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
                              uVar9 = 1;
                            }
                            else {
                              *(undefined4 *)local_28 = 0;
                              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
                              uVar9 = 1;
                            }
                          }
                          else {
                            uVar9 = 0;
                          }
                        }
                        else {
                          *(undefined4 *)local_28 = 0x5f;
                          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
                          uVar9 = 1;
                        }
                      }
                      else {
                        uVar9 = 0;
                      }
                    }
                    else {
                      uVar9 = 0;
                    }
                  }
                  else {
                    uVar9 = 0;
                  }
                }
                else {
                  uVar9 = 0;
                }
              }
              else {
                uVar9 = 0;
              }
            }
            else {
              uVar9 = 0;
            }
          }
          else {
            uVar9 = 0;
          }
        }
      }
      else {
        uVar9 = 0;
      }
    }
    else {
      *(undefined4 *)local_28 = 0x12;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
      uVar9 = 0;
    }
  }
  else {
    uVar9 = 0;
  }
  CStreamGuard::~CStreamGuard(local_34);
  return uVar9;
}
```
