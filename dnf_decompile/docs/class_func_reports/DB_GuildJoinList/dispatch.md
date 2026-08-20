# dispatch

`_ZN16DB_GuildJoinList8dispatchEiiP6Stream`

`DB_GuildJoinList::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_GuildJoinList` | `0x0843d87c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843d87c  _ZN16DB_GuildJoinList8dispatchEiiP6Stream
#           DB_GuildJoinList::dispatch(int, int, Stream*)
# range [0x0843d87c, 0x0843dd7b]
0843d87c +0x000:  push   %ebp
0843d87d +0x001:  mov    %esp,%ebp
0843d87f +0x003:  push   %esi
0843d880 +0x004:  push   %ebx
0843d881 +0x005:  sub    $0x40,%esp
0843d884 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843d889 +0x00d:  movl   $0x0,0x8(%esp)
0843d891 +0x015:  movl   $0x8,0x4(%esp)
0843d899 +0x01d:  mov    %eax,(%esp)
0843d89c +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843d8a1 +0x025:  mov    %eax,-0x24(%ebp)
0843d8a4 +0x028:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843d8a9 +0x02d:  movl   $0x0,0x8(%esp)
0843d8b1 +0x035:  movl   $0x2,0x4(%esp)
0843d8b9 +0x03d:  mov    %eax,(%esp)
0843d8bc +0x040:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843d8c1 +0x045:  mov    %eax,-0x20(%ebp)
0843d8c4 +0x048:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843d8c9 +0x04d:  movl   $0x9243,0x8(%esp)
0843d8d1 +0x055:  movl   $"DBThread.cpp",0x4(%esp)
0843d8d9 +0x05d:  mov    %eax,(%esp)
0843d8dc +0x060:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843d8e1 +0x065:  movl   $0x1,0x8(%esp)
0843d8e9 +0x06d:  mov    %eax,0x4(%esp)
0843d8ed +0x071:  lea    -0x2c(%ebp),%eax
0843d8f0 +0x074:  mov    %eax,(%esp)
0843d8f3 +0x077:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843d8f8 +0x07c:  lea    -0x2c(%ebp),%eax
0843d8fb +0x07f:  mov    %eax,(%esp)
0843d8fe +0x082:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d903 +0x087:  movl   $0x21a,0x4(%esp)
0843d90b +0x08f:  mov    %eax,(%esp)
0843d90e +0x092:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843d913 +0x097:  lea    -0x2c(%ebp),%eax
0843d916 +0x09a:  mov    %eax,(%esp)
0843d919 +0x09d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d91e +0x0a2:  mov    0x10(%ebp),%edx
0843d921 +0x0a5:  mov    %edx,0x4(%esp)
0843d925 +0x0a9:  mov    %eax,(%esp)
0843d928 +0x0ac:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843d92d +0x0b1:  movl   $0x0,-0x30(%ebp)
0843d934 +0x0b8:  lea    -0x30(%ebp),%eax
0843d937 +0x0bb:  mov    %eax,0x4(%esp)
0843d93b +0x0bf:  mov    0x14(%ebp),%eax
0843d93e +0x0c2:  mov    %eax,(%esp)
0843d941 +0x0c5:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843d946 +0x0ca:  movl   $0x0,-0x34(%ebp)
0843d94d +0x0d1:  lea    -0x34(%ebp),%eax
0843d950 +0x0d4:  mov    %eax,0x4(%esp)
0843d954 +0x0d8:  mov    0x14(%ebp),%eax
0843d957 +0x0db:  mov    %eax,(%esp)
0843d95a +0x0de:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0843d95f +0x0e3:  mov    -0x34(%ebp),%edx
0843d962 +0x0e6:  mov    -0x30(%ebp),%eax
0843d965 +0x0e9:  mov    %edx,0xc(%esp)
0843d969 +0x0ed:  mov    %eax,0x8(%esp)
0843d96d +0x0f1:  movl   $"delete from guild_join_list where guild_id=%d and server_group != %d",0x4(%esp)
0843d975 +0x0f9:  mov    -0x24(%ebp),%eax
0843d978 +0x0fc:  mov    %eax,(%esp)
0843d97b +0x0ff:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843d980 +0x104:  movl   $0x1,0x4(%esp)
0843d988 +0x10c:  mov    -0x24(%ebp),%eax
0843d98b +0x10f:  mov    %eax,(%esp)
0843d98e +0x112:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843d993 +0x117:  xor    $0x1,%eax
0843d996 +0x11a:  test   %al,%al
0843d998 +0x11c:  je     0843d9a4 <+0x128>
0843d99a +0x11e:  mov    $0x0,%ebx
0843d99f +0x123:  jmp    0843dd67 <+0x4eb>
0843d9a4 +0x128:  mov    -0x30(%ebp),%eax
0843d9a7 +0x12b:  mov    %eax,0x8(%esp)
0843d9ab +0x12f:  movl   $"seLect charac_no,memo,unix_timestamp(occ_time) from guild_join_list where guild_id=%d",0x4(%esp)
0843d9b3 +0x137:  mov    -0x24(%ebp),%eax
0843d9b6 +0x13a:  mov    %eax,(%esp)
0843d9b9 +0x13d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843d9be +0x142:  movl   $0x1,0x4(%esp)
0843d9c6 +0x14a:  mov    -0x24(%ebp),%eax
0843d9c9 +0x14d:  mov    %eax,(%esp)
0843d9cc +0x150:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843d9d1 +0x155:  xor    $0x1,%eax
0843d9d4 +0x158:  test   %al,%al
0843d9d6 +0x15a:  je     0843d9e2 <+0x166>
0843d9d8 +0x15c:  mov    $0x0,%ebx
0843d9dd +0x161:  jmp    0843dd67 <+0x4eb>
0843d9e2 +0x166:  lea    -0x2c(%ebp),%eax
0843d9e5 +0x169:  mov    %eax,(%esp)
0843d9e8 +0x16c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843d9ed +0x171:  mov    %eax,(%esp)
0843d9f0 +0x174:  call   08453b90 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x67a6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x67a6
0843d9f5 +0x179:  mov    %eax,-0x1c(%ebp)
0843d9f8 +0x17c:  movl   $0x0,-0x38(%ebp)
0843d9ff +0x183:  movl   $0x0,(%esp)
0843da06 +0x18a:  call   0807d750 <_init+0x48>
0843da0b +0x18f:  mov    %eax,-0x18(%ebp)
0843da0e +0x192:  mov    -0x24(%ebp),%eax
0843da11 +0x195:  mov    %eax,(%esp)
0843da14 +0x198:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843da19 +0x19d:  cmp    $0x32,%eax
0843da1c +0x1a0:  ja     0843da2b <+0x1af>
0843da1e +0x1a2:  mov    -0x24(%ebp),%eax
0843da21 +0x1a5:  mov    %eax,(%esp)
0843da24 +0x1a8:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843da29 +0x1ad:  jmp    0843da30 <+0x1b4>
0843da2b +0x1af:  mov    $0x32,%eax
0843da30 +0x1b4:  mov    %eax,-0x14(%ebp)
0843da33 +0x1b7:  mov    -0x1c(%ebp),%eax
0843da36 +0x1ba:  mov    -0x14(%ebp),%edx
0843da39 +0x1bd:  mov    %edx,(%eax)
0843da3b +0x1bf:  movl   $0x0,-0x10(%ebp)
0843da42 +0x1c6:  jmp    0843db37 <+0x2bb>
0843da47 +0x1cb:  mov    -0x24(%ebp),%eax
0843da4a +0x1ce:  mov    %eax,(%esp)
0843da4d +0x1d1:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843da52 +0x1d6:  xor    $0x1,%eax
0843da55 +0x1d9:  test   %al,%al
0843da57 +0x1db:  je     0843da63 <+0x1e7>
0843da59 +0x1dd:  mov    $0x0,%ebx
0843da5e +0x1e2:  jmp    0843dd67 <+0x4eb>
0843da63 +0x1e7:  mov    -0x10(%ebp),%eax
0843da66 +0x1ea:  shl    $0x2,%eax
0843da69 +0x1ed:  mov    %eax,%edx
0843da6b +0x1ef:  shl    $0x4,%edx
0843da6e +0x1f2:  add    %edx,%eax
0843da70 +0x1f4:  add    -0x1c(%ebp),%eax
0843da73 +0x1f7:  add    $0x4,%eax
0843da76 +0x1fa:  mov    %eax,0x8(%esp)
0843da7a +0x1fe:  movl   $0x0,0x4(%esp)
0843da82 +0x206:  mov    -0x24(%ebp),%eax
0843da85 +0x209:  mov    %eax,(%esp)
0843da88 +0x20c:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0843da8d +0x211:  xor    $0x1,%eax
0843da90 +0x214:  test   %al,%al
0843da92 +0x216:  je     0843da9e <+0x222>
0843da94 +0x218:  mov    $0x0,%ebx
0843da99 +0x21d:  jmp    0843dd67 <+0x4eb>
0843da9e +0x222:  mov    -0x10(%ebp),%eax
0843daa1 +0x225:  shl    $0x2,%eax
0843daa4 +0x228:  mov    %eax,%edx
0843daa6 +0x22a:  shl    $0x4,%edx
0843daa9 +0x22d:  add    %edx,%eax
0843daab +0x22f:  add    $0x20,%eax
0843daae +0x232:  add    -0x1c(%ebp),%eax
0843dab1 +0x235:  add    $0xa,%eax
0843dab4 +0x238:  movl   $0x1a,0xc(%esp)
0843dabc +0x240:  mov    %eax,0x8(%esp)
0843dac0 +0x244:  movl   $0x1,0x4(%esp)
0843dac8 +0x24c:  mov    -0x24(%ebp),%eax
0843dacb +0x24f:  mov    %eax,(%esp)
0843dace +0x252:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0843dad3 +0x257:  xor    $0x1,%eax
0843dad6 +0x25a:  test   %al,%al
0843dad8 +0x25c:  je     0843dae4 <+0x268>
0843dada +0x25e:  mov    $0x0,%ebx
0843dadf +0x263:  jmp    0843dd67 <+0x4eb>
0843dae4 +0x268:  lea    -0x38(%ebp),%eax
0843dae7 +0x26b:  mov    %eax,0x8(%esp)
0843daeb +0x26f:  movl   $0x2,0x4(%esp)
0843daf3 +0x277:  mov    -0x24(%ebp),%eax
0843daf6 +0x27a:  mov    %eax,(%esp)
0843daf9 +0x27d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843dafe +0x282:  xor    $0x1,%eax
0843db01 +0x285:  test   %al,%al
0843db03 +0x287:  je     0843db0f <+0x293>
0843db05 +0x289:  mov    $0x0,%ebx
0843db0a +0x28e:  jmp    0843dd67 <+0x4eb>
0843db0f +0x293:  mov    -0x10(%ebp),%eax
0843db12 +0x296:  mov    -0x38(%ebp),%edx
0843db15 +0x299:  mov    -0x18(%ebp),%ecx
0843db18 +0x29c:  mov    %ecx,%ebx
0843db1a +0x29e:  sub    %edx,%ebx
0843db1c +0x2a0:  mov    %ebx,%edx
0843db1e +0x2a2:  mov    -0x1c(%ebp),%ecx
0843db21 +0x2a5:  shl    $0x2,%eax
0843db24 +0x2a8:  mov    %eax,%ebx
0843db26 +0x2aa:  shl    $0x4,%ebx
0843db29 +0x2ad:  add    %ebx,%eax
0843db2b +0x2af:  lea    (%ecx,%eax,1),%eax
0843db2e +0x2b2:  add    $0x44,%eax
0843db31 +0x2b5:  mov    %edx,(%eax)
0843db33 +0x2b7:  addl   $0x1,-0x10(%ebp)
0843db37 +0x2bb:  mov    -0x10(%ebp),%eax
0843db3a +0x2be:  cmp    -0x14(%ebp),%eax
0843db3d +0x2c1:  setl   %al
0843db40 +0x2c4:  test   %al,%al
0843db42 +0x2c6:  jne    0843da47 <+0x1cb>
0843db48 +0x2cc:  movl   $0x0,-0xc(%ebp)
0843db4f +0x2d3:  jmp    0843dd18 <+0x49c>
0843db54 +0x2d8:  mov    -0xc(%ebp),%eax
0843db57 +0x2db:  mov    -0x1c(%ebp),%edx
0843db5a +0x2de:  shl    $0x2,%eax
0843db5d +0x2e1:  mov    %eax,%ecx
0843db5f +0x2e3:  shl    $0x4,%ecx
0843db62 +0x2e6:  add    %ecx,%eax
0843db64 +0x2e8:  lea    (%edx,%eax,1),%eax
0843db67 +0x2eb:  add    $0x4,%eax
0843db6a +0x2ee:  mov    (%eax),%eax
0843db6c +0x2f0:  mov    %eax,0x8(%esp)
0843db70 +0x2f4:  movl   $"seLect charac_name,lev,job,grow_type,sex from charac_info where charac_no=%d",0x4(%esp)
0843db78 +0x2fc:  mov    -0x20(%ebp),%eax
0843db7b +0x2ff:  mov    %eax,(%esp)
0843db7e +0x302:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843db83 +0x307:  movl   $0x1,0x4(%esp)
0843db8b +0x30f:  mov    -0x20(%ebp),%eax
0843db8e +0x312:  mov    %eax,(%esp)
0843db91 +0x315:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843db96 +0x31a:  xor    $0x1,%eax
0843db99 +0x31d:  test   %al,%al
0843db9b +0x31f:  je     0843dba7 <+0x32b>
0843db9d +0x321:  mov    $0x0,%ebx
0843dba2 +0x326:  jmp    0843dd67 <+0x4eb>
0843dba7 +0x32b:  mov    -0x20(%ebp),%eax
0843dbaa +0x32e:  mov    %eax,(%esp)
0843dbad +0x331:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843dbb2 +0x336:  test   %eax,%eax
0843dbb4 +0x338:  sete   %al
0843dbb7 +0x33b:  test   %al,%al
0843dbb9 +0x33d:  jne    0843dd13 <+0x497>
0843dbbf +0x343:  mov    -0x20(%ebp),%eax
0843dbc2 +0x346:  mov    %eax,(%esp)
0843dbc5 +0x349:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843dbca +0x34e:  xor    $0x1,%eax
0843dbcd +0x351:  test   %al,%al
0843dbcf +0x353:  je     0843dbdb <+0x35f>
0843dbd1 +0x355:  mov    $0x0,%ebx
0843dbd6 +0x35a:  jmp    0843dd67 <+0x4eb>
0843dbdb +0x35f:  mov    -0xc(%ebp),%eax
0843dbde +0x362:  shl    $0x2,%eax
0843dbe1 +0x365:  mov    %eax,%edx
0843dbe3 +0x367:  shl    $0x4,%edx
0843dbe6 +0x36a:  add    %edx,%eax
0843dbe8 +0x36c:  add    -0x1c(%ebp),%eax
0843dbeb +0x36f:  add    $0x8,%eax
0843dbee +0x372:  movl   $0x1e,0xc(%esp)
0843dbf6 +0x37a:  mov    %eax,0x8(%esp)
0843dbfa +0x37e:  movl   $0x0,0x4(%esp)
0843dc02 +0x386:  mov    -0x20(%ebp),%eax
0843dc05 +0x389:  mov    %eax,(%esp)
0843dc08 +0x38c:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0843dc0d +0x391:  xor    $0x1,%eax
0843dc10 +0x394:  test   %al,%al
0843dc12 +0x396:  je     0843dc1e <+0x3a2>
0843dc14 +0x398:  mov    $0x0,%ebx
0843dc19 +0x39d:  jmp    0843dd67 <+0x4eb>
0843dc1e +0x3a2:  mov    -0xc(%ebp),%eax
0843dc21 +0x3a5:  shl    $0x2,%eax
0843dc24 +0x3a8:  mov    %eax,%edx
0843dc26 +0x3aa:  shl    $0x4,%edx
0843dc29 +0x3ad:  add    %edx,%eax
0843dc2b +0x3af:  add    $0x20,%eax
0843dc2e +0x3b2:  add    -0x1c(%ebp),%eax
0843dc31 +0x3b5:  add    $0x9,%eax
0843dc34 +0x3b8:  mov    %eax,0x8(%esp)
0843dc38 +0x3bc:  movl   $0x1,0x4(%esp)
0843dc40 +0x3c4:  mov    -0x20(%ebp),%eax
0843dc43 +0x3c7:  mov    %eax,(%esp)
0843dc46 +0x3ca:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0843dc4b +0x3cf:  xor    $0x1,%eax
0843dc4e +0x3d2:  test   %al,%al
0843dc50 +0x3d4:  je     0843dc5c <+0x3e0>
0843dc52 +0x3d6:  mov    $0x0,%ebx
0843dc57 +0x3db:  jmp    0843dd67 <+0x4eb>
0843dc5c +0x3e0:  mov    -0xc(%ebp),%eax
0843dc5f +0x3e3:  shl    $0x2,%eax
0843dc62 +0x3e6:  mov    %eax,%edx
0843dc64 +0x3e8:  shl    $0x4,%edx
0843dc67 +0x3eb:  add    %edx,%eax
0843dc69 +0x3ed:  add    $0x20,%eax
0843dc6c +0x3f0:  add    -0x1c(%ebp),%eax
0843dc6f +0x3f3:  add    $0x6,%eax
0843dc72 +0x3f6:  mov    %eax,0x8(%esp)
0843dc76 +0x3fa:  movl   $0x2,0x4(%esp)
0843dc7e +0x402:  mov    -0x20(%ebp),%eax
0843dc81 +0x405:  mov    %eax,(%esp)
0843dc84 +0x408:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0843dc89 +0x40d:  xor    $0x1,%eax
0843dc8c +0x410:  test   %al,%al
0843dc8e +0x412:  je     0843dc9a <+0x41e>
0843dc90 +0x414:  mov    $0x0,%ebx
0843dc95 +0x419:  jmp    0843dd67 <+0x4eb>
0843dc9a +0x41e:  mov    -0xc(%ebp),%eax
0843dc9d +0x421:  shl    $0x2,%eax
0843dca0 +0x424:  mov    %eax,%edx
0843dca2 +0x426:  shl    $0x4,%edx
0843dca5 +0x429:  add    %edx,%eax
0843dca7 +0x42b:  add    $0x20,%eax
0843dcaa +0x42e:  add    -0x1c(%ebp),%eax
0843dcad +0x431:  add    $0x7,%eax
0843dcb0 +0x434:  mov    %eax,0x8(%esp)
0843dcb4 +0x438:  movl   $0x3,0x4(%esp)
0843dcbc +0x440:  mov    -0x20(%ebp),%eax
0843dcbf +0x443:  mov    %eax,(%esp)
0843dcc2 +0x446:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0843dcc7 +0x44b:  xor    $0x1,%eax
0843dcca +0x44e:  test   %al,%al
0843dccc +0x450:  je     0843dcd8 <+0x45c>
0843dcce +0x452:  mov    $0x0,%ebx
0843dcd3 +0x457:  jmp    0843dd67 <+0x4eb>
0843dcd8 +0x45c:  mov    -0xc(%ebp),%eax
0843dcdb +0x45f:  shl    $0x2,%eax
0843dcde +0x462:  mov    %eax,%edx
0843dce0 +0x464:  shl    $0x4,%edx
0843dce3 +0x467:  add    %edx,%eax
0843dce5 +0x469:  add    $0x20,%eax
0843dce8 +0x46c:  add    -0x1c(%ebp),%eax
0843dceb +0x46f:  add    $0x8,%eax
0843dcee +0x472:  mov    %eax,0x8(%esp)
0843dcf2 +0x476:  movl   $0x4,0x4(%esp)
0843dcfa +0x47e:  mov    -0x20(%ebp),%eax
0843dcfd +0x481:  mov    %eax,(%esp)
0843dd00 +0x484:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0843dd05 +0x489:  xor    $0x1,%eax
0843dd08 +0x48c:  test   %al,%al
0843dd0a +0x48e:  je     0843dd14 <+0x498>
0843dd0c +0x490:  mov    $0x0,%ebx
0843dd11 +0x495:  jmp    0843dd67 <+0x4eb>
0843dd13 +0x497:  nop
0843dd14 +0x498:  addl   $0x1,-0xc(%ebp)
0843dd18 +0x49c:  mov    -0xc(%ebp),%eax
0843dd1b +0x49f:  cmp    -0x14(%ebp),%eax
0843dd1e +0x4a2:  setl   %al
0843dd21 +0x4a5:  test   %al,%al
0843dd23 +0x4a7:  jne    0843db54 <+0x2d8>
0843dd29 +0x4ad:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843dd2e +0x4b2:  lea    -0x2c(%ebp),%edx
0843dd31 +0x4b5:  mov    %edx,0x8(%esp)
0843dd35 +0x4b9:  movl   $0x1,0x4(%esp)
0843dd3d +0x4c1:  mov    %eax,(%esp)
0843dd40 +0x4c4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843dd45 +0x4c9:  mov    $0x1,%ebx
0843dd4a +0x4ce:  jmp    0843dd67 <+0x4eb>
0843dd4c +0x4d0:  mov    %edx,%ebx
0843dd4e +0x4d2:  mov    %eax,%esi
0843dd50 +0x4d4:  lea    -0x2c(%ebp),%eax
0843dd53 +0x4d7:  mov    %eax,(%esp)
0843dd56 +0x4da:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843dd5b +0x4df:  mov    %esi,%eax
0843dd5d +0x4e1:  mov    %ebx,%edx
0843dd5f +0x4e3:  mov    %eax,(%esp)
0843dd62 +0x4e6:  call   08ae3750 <_Unwind_Resume>
0843dd67 +0x4eb:  lea    -0x2c(%ebp),%eax
0843dd6a +0x4ee:  mov    %eax,(%esp)
0843dd6d +0x4f1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843dd72 +0x4f6:  mov    %ebx,%eax
0843dd74 +0x4f8:  add    $0x40,%esp
0843dd77 +0x4fb:  pop    %ebx
0843dd78 +0x4fc:  pop    %esi
0843dd79 +0x4fd:  pop    %ebp
0843dd7a +0x4fe:  ret
0843dd7b +0x4ff:  nop
```

## 反编译 C

```c
// DB_GuildJoinList::dispatch @ 0x843d87c

/* DB_GuildJoinList::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_GuildJoinList::dispatch(DB_GuildJoinList *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_3c;
  int local_38;
  uint local_34;
  CStreamGuard local_30 [8];
  MySQL *local_28;
  MySQL *local_24;
  SIG_GUILD_JOIN_LIST *local_20;
  time_t local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9243);
  CStreamGuard::CStreamGuard(local_30,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 0843d90e to 0843dd44 has its CatchHandler @ 0843dd4c */
  CStreamGuard::operator<<(pCVar3,0x21a);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
  CStreamGuard::operator<<(pCVar3,param_2);
  local_34 = 0;
  Stream::operator>>(param_3,&local_34);
  local_38 = 0;
  Stream::operator>>(param_3,&local_38);
  iVar5 = local_38;
  MySQL::set_query(local_28,"delete from guild_join_list where guild_id=%d and server_group != %d",
                   local_34,local_38);
  cVar1 = MySQL::exec(local_28,true);
  if (cVar1 == '\x01') {
    MySQL::set_query(local_28,
                     "seLect charac_no,memo,unix_timestamp(occ_time) from guild_join_list where guild_id=%d"
                     ,local_34,iVar5);
    cVar1 = MySQL::exec(local_28,true);
    if (cVar1 == '\x01') {
      pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_30);
      local_20 = CStreamGuard::GetInBuffer<SIG_GUILD_JOIN_LIST>(pCVar3);
      local_3c = 0;
      local_1c = time((time_t *)0x0);
      uVar4 = MySQL::get_n_rows(local_28);
      if (uVar4 < 0x33) {
        local_18 = MySQL::get_n_rows(local_28);
      }
      else {
        local_18 = 0x32;
      }
      *(int *)local_20 = local_18;
      for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
        cVar1 = MySQL::fetch(local_28);
        if (cVar1 != '\x01') {
          uVar6 = 0;
          goto LAB_0843dd67;
        }
        cVar1 = MySQL::get_uint(local_28,0,(uint *)(local_20 + local_14 * 0x44 + 4));
        if (cVar1 != '\x01') {
          uVar6 = 0;
          goto LAB_0843dd67;
        }
        cVar1 = MySQL::get_str(local_28,1,(char *)(local_20 + local_14 * 0x44 + 0x2a),0x1a);
        if (cVar1 != '\x01') {
          uVar6 = 0;
          goto LAB_0843dd67;
        }
        cVar1 = MySQL::get_int(local_28,2,&local_3c);
        if (cVar1 != '\x01') {
          uVar6 = 0;
          goto LAB_0843dd67;
        }
        *(time_t *)(local_20 + local_14 * 0x44 + 0x44) = local_1c - local_3c;
      }
      for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
        MySQL::set_query(local_24,
                         "seLect charac_name,lev,job,grow_type,sex from charac_info where charac_no=%d"
                         ,*(undefined4 *)(local_20 + local_10 * 0x44 + 4));
        cVar1 = MySQL::exec(local_24,true);
        if (cVar1 != '\x01') {
          uVar6 = 0;
          goto LAB_0843dd67;
        }
        iVar5 = MySQL::get_n_rows(local_24);
        if (iVar5 != 0) {
          cVar1 = MySQL::fetch(local_24);
          if (cVar1 != '\x01') {
            uVar6 = 0;
            goto LAB_0843dd67;
          }
          cVar1 = MySQL::get_str(local_24,0,(char *)(local_20 + local_10 * 0x44 + 8),0x1e);
          if (cVar1 != '\x01') {
            uVar6 = 0;
            goto LAB_0843dd67;
          }
          cVar1 = MySQL::get_byte(local_24,1,(char *)(local_20 + local_10 * 0x44 + 0x29));
          if (cVar1 != '\x01') {
            uVar6 = 0;
            goto LAB_0843dd67;
          }
          cVar1 = MySQL::get_byte(local_24,2,(char *)(local_20 + local_10 * 0x44 + 0x26));
          if (cVar1 != '\x01') {
            uVar6 = 0;
            goto LAB_0843dd67;
          }
          cVar1 = MySQL::get_byte(local_24,3,(char *)(local_20 + local_10 * 0x44 + 0x27));
          if (cVar1 != '\x01') {
            uVar6 = 0;
            goto LAB_0843dd67;
          }
          cVar1 = MySQL::get_byte(local_24,4,(char *)(local_20 + local_10 * 0x44 + 0x28));
          if (cVar1 != '\x01') {
            uVar6 = 0;
            goto LAB_0843dd67;
          }
        }
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_30);
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
  }
LAB_0843dd67:
  CStreamGuard::~CStreamGuard(local_30);
  return uVar6;
}
```
