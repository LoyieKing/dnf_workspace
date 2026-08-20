# dispatch

`_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream`

`DB_JoinGuildInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_JoinGuildInfo` | `0x0843d286` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843d286  _ZN16DB_JoinGuildInfo8dispatchEiiP6Stream
#           DB_JoinGuildInfo::dispatch(int, int, Stream*)
# range [0x0843d286, 0x0843d5f9]
0843d286 +0x000:  push   %ebp
0843d287 +0x001:  mov    %esp,%ebp
0843d289 +0x003:  push   %esi
0843d28a +0x004:  push   %ebx
0843d28b +0x005:  sub    $0x30,%esp
0843d28e +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843d293 +0x00d:  movl   $0x0,0x8(%esp)
0843d29b +0x015:  movl   $0x8,0x4(%esp)
0843d2a3 +0x01d:  mov    %eax,(%esp)
0843d2a6 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843d2ab +0x025:  mov    %eax,-0x10(%ebp)
0843d2ae +0x028:  movl   $0x0,-0x14(%ebp)
0843d2b5 +0x02f:  movl   $0x0,-0x18(%ebp)
0843d2bc +0x036:  lea    -0x14(%ebp),%eax
0843d2bf +0x039:  mov    %eax,0x4(%esp)
0843d2c3 +0x03d:  mov    0x14(%ebp),%eax
0843d2c6 +0x040:  mov    %eax,(%esp)
0843d2c9 +0x043:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0843d2ce +0x048:  lea    -0x18(%ebp),%eax
0843d2d1 +0x04b:  mov    %eax,0x4(%esp)
0843d2d5 +0x04f:  mov    0x14(%ebp),%eax
0843d2d8 +0x052:  mov    %eax,(%esp)
0843d2db +0x055:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843d2e0 +0x05a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843d2e5 +0x05f:  movl   $0x91bd,0x8(%esp)
0843d2ed +0x067:  movl   $"DBThread.cpp",0x4(%esp)
0843d2f5 +0x06f:  mov    %eax,(%esp)
0843d2f8 +0x072:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843d2fd +0x077:  movl   $0x1,0x8(%esp)
0843d305 +0x07f:  mov    %eax,0x4(%esp)
0843d309 +0x083:  lea    -0x20(%ebp),%eax
0843d30c +0x086:  mov    %eax,(%esp)
0843d30f +0x089:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843d314 +0x08e:  lea    -0x20(%ebp),%eax
0843d317 +0x091:  mov    %eax,(%esp)
0843d31a +0x094:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d31f +0x099:  movl   $0x219,0x4(%esp)
0843d327 +0x0a1:  mov    %eax,(%esp)
0843d32a +0x0a4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843d32f +0x0a9:  lea    -0x20(%ebp),%eax
0843d332 +0x0ac:  mov    %eax,(%esp)
0843d335 +0x0af:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d33a +0x0b4:  mov    0x10(%ebp),%edx
0843d33d +0x0b7:  mov    %edx,0x4(%esp)
0843d341 +0x0bb:  mov    %eax,(%esp)
0843d344 +0x0be:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843d349 +0x0c3:  lea    -0x20(%ebp),%eax
0843d34c +0x0c6:  mov    %eax,(%esp)
0843d34f +0x0c9:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843d354 +0x0ce:  mov    %eax,(%esp)
0843d357 +0x0d1:  call   08453b7a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6790>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6790
0843d35c +0x0d6:  mov    %eax,-0xc(%ebp)
0843d35f +0x0d9:  mov    -0x14(%ebp),%edx
0843d362 +0x0dc:  mov    -0x18(%ebp),%eax
0843d365 +0x0df:  mov    %edx,0xc(%esp)
0843d369 +0x0e3:  mov    %eax,0x8(%esp)
0843d36d +0x0e7:  movl   $"seLect guild_id,memo from guild_join_list where charac_no=%d and server_group=%d",0x4(%esp)
0843d375 +0x0ef:  mov    -0x10(%ebp),%eax
0843d378 +0x0f2:  mov    %eax,(%esp)
0843d37b +0x0f5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843d380 +0x0fa:  movl   $0x1,0x4(%esp)
0843d388 +0x102:  mov    -0x10(%ebp),%eax
0843d38b +0x105:  mov    %eax,(%esp)
0843d38e +0x108:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843d393 +0x10d:  xor    $0x1,%eax
0843d396 +0x110:  test   %al,%al
0843d398 +0x112:  je     0843d3a4 <+0x11e>
0843d39a +0x114:  mov    $0x0,%ebx
0843d39f +0x119:  jmp    0843d5e5 <+0x35f>
0843d3a4 +0x11e:  mov    -0x10(%ebp),%eax
0843d3a7 +0x121:  mov    %eax,(%esp)
0843d3aa +0x124:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843d3af +0x129:  test   %eax,%eax
0843d3b1 +0x12b:  sete   %al
0843d3b4 +0x12e:  test   %al,%al
0843d3b6 +0x130:  je     0843d3e4 <+0x15e>
0843d3b8 +0x132:  mov    -0xc(%ebp),%eax
0843d3bb +0x135:  movb   $0x0,(%eax)
0843d3be +0x138:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843d3c3 +0x13d:  lea    -0x20(%ebp),%edx
0843d3c6 +0x140:  mov    %edx,0x8(%esp)
0843d3ca +0x144:  movl   $0x1,0x4(%esp)
0843d3d2 +0x14c:  mov    %eax,(%esp)
0843d3d5 +0x14f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843d3da +0x154:  mov    $0x1,%ebx
0843d3df +0x159:  jmp    0843d5e5 <+0x35f>
0843d3e4 +0x15e:  mov    -0x10(%ebp),%eax
0843d3e7 +0x161:  mov    %eax,(%esp)
0843d3ea +0x164:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843d3ef +0x169:  xor    $0x1,%eax
0843d3f2 +0x16c:  test   %al,%al
0843d3f4 +0x16e:  je     0843d400 <+0x17a>
0843d3f6 +0x170:  mov    $0x0,%ebx
0843d3fb +0x175:  jmp    0843d5e5 <+0x35f>
0843d400 +0x17a:  mov    -0xc(%ebp),%eax
0843d403 +0x17d:  add    $0x4,%eax
0843d406 +0x180:  mov    %eax,0x8(%esp)
0843d40a +0x184:  movl   $0x0,0x4(%esp)
0843d412 +0x18c:  mov    -0x10(%ebp),%eax
0843d415 +0x18f:  mov    %eax,(%esp)
0843d418 +0x192:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0843d41d +0x197:  xor    $0x1,%eax
0843d420 +0x19a:  test   %al,%al
0843d422 +0x19c:  je     0843d42e <+0x1a8>
0843d424 +0x19e:  mov    $0x0,%ebx
0843d429 +0x1a3:  jmp    0843d5e5 <+0x35f>
0843d42e +0x1a8:  mov    -0xc(%ebp),%eax
0843d431 +0x1ab:  add    $0x48,%eax
0843d434 +0x1ae:  movl   $0x1a,0xc(%esp)
0843d43c +0x1b6:  mov    %eax,0x8(%esp)
0843d440 +0x1ba:  movl   $0x1,0x4(%esp)
0843d448 +0x1c2:  mov    -0x10(%ebp),%eax
0843d44b +0x1c5:  mov    %eax,(%esp)
0843d44e +0x1c8:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0843d453 +0x1cd:  xor    $0x1,%eax
0843d456 +0x1d0:  test   %al,%al
0843d458 +0x1d2:  je     0843d464 <+0x1de>
0843d45a +0x1d4:  mov    $0x0,%ebx
0843d45f +0x1d9:  jmp    0843d5e5 <+0x35f>
0843d464 +0x1de:  mov    -0xc(%ebp),%eax
0843d467 +0x1e1:  mov    0x4(%eax),%eax
0843d46a +0x1e4:  mov    %eax,0x8(%esp)
0843d46e +0x1e8:  movl   $"seLect guild_name,master_name,lev,member_count from guild_info where expire_flag=0 and guild_id=%d",0x4(%esp)
0843d476 +0x1f0:  mov    -0x10(%ebp),%eax
0843d479 +0x1f3:  mov    %eax,(%esp)
0843d47c +0x1f6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843d481 +0x1fb:  movl   $0x1,0x4(%esp)
0843d489 +0x203:  mov    -0x10(%ebp),%eax
0843d48c +0x206:  mov    %eax,(%esp)
0843d48f +0x209:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843d494 +0x20e:  xor    $0x1,%eax
0843d497 +0x211:  test   %al,%al
0843d499 +0x213:  je     0843d4a5 <+0x21f>
0843d49b +0x215:  mov    $0x0,%ebx
0843d4a0 +0x21a:  jmp    0843d5e5 <+0x35f>
0843d4a5 +0x21f:  mov    -0x10(%ebp),%eax
0843d4a8 +0x222:  mov    %eax,(%esp)
0843d4ab +0x225:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843d4b0 +0x22a:  test   %eax,%eax
0843d4b2 +0x22c:  sete   %al
0843d4b5 +0x22f:  test   %al,%al
0843d4b7 +0x231:  je     0843d4c3 <+0x23d>
0843d4b9 +0x233:  mov    $0x1,%ebx
0843d4be +0x238:  jmp    0843d5e5 <+0x35f>
0843d4c3 +0x23d:  mov    -0x10(%ebp),%eax
0843d4c6 +0x240:  mov    %eax,(%esp)
0843d4c9 +0x243:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843d4ce +0x248:  xor    $0x1,%eax
0843d4d1 +0x24b:  test   %al,%al
0843d4d3 +0x24d:  je     0843d4df <+0x259>
0843d4d5 +0x24f:  mov    $0x0,%ebx
0843d4da +0x254:  jmp    0843d5e5 <+0x35f>
0843d4df +0x259:  mov    -0xc(%ebp),%eax
0843d4e2 +0x25c:  add    $0x26,%eax
0843d4e5 +0x25f:  movl   $0x17,0xc(%esp)
0843d4ed +0x267:  mov    %eax,0x8(%esp)
0843d4f1 +0x26b:  movl   $0x0,0x4(%esp)
0843d4f9 +0x273:  mov    -0x10(%ebp),%eax
0843d4fc +0x276:  mov    %eax,(%esp)
0843d4ff +0x279:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0843d504 +0x27e:  xor    $0x1,%eax
0843d507 +0x281:  test   %al,%al
0843d509 +0x283:  je     0843d515 <+0x28f>
0843d50b +0x285:  mov    $0x0,%ebx
0843d510 +0x28a:  jmp    0843d5e5 <+0x35f>
0843d515 +0x28f:  mov    -0xc(%ebp),%eax
0843d518 +0x292:  add    $0x8,%eax
0843d51b +0x295:  movl   $0x1e,0xc(%esp)
0843d523 +0x29d:  mov    %eax,0x8(%esp)
0843d527 +0x2a1:  movl   $0x1,0x4(%esp)
0843d52f +0x2a9:  mov    -0x10(%ebp),%eax
0843d532 +0x2ac:  mov    %eax,(%esp)
0843d535 +0x2af:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0843d53a +0x2b4:  xor    $0x1,%eax
0843d53d +0x2b7:  test   %al,%al
0843d53f +0x2b9:  je     0843d54b <+0x2c5>
0843d541 +0x2bb:  mov    $0x0,%ebx
0843d546 +0x2c0:  jmp    0843d5e5 <+0x35f>
0843d54b +0x2c5:  mov    -0xc(%ebp),%eax
0843d54e +0x2c8:  add    $0x40,%eax
0843d551 +0x2cb:  mov    %eax,0x8(%esp)
0843d555 +0x2cf:  movl   $0x2,0x4(%esp)
0843d55d +0x2d7:  mov    -0x10(%ebp),%eax
0843d560 +0x2da:  mov    %eax,(%esp)
0843d563 +0x2dd:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843d568 +0x2e2:  xor    $0x1,%eax
0843d56b +0x2e5:  test   %al,%al
0843d56d +0x2e7:  je     0843d576 <+0x2f0>
0843d56f +0x2e9:  mov    $0x0,%ebx
0843d574 +0x2ee:  jmp    0843d5e5 <+0x35f>
0843d576 +0x2f0:  mov    -0xc(%ebp),%eax
0843d579 +0x2f3:  add    $0x44,%eax
0843d57c +0x2f6:  mov    %eax,0x8(%esp)
0843d580 +0x2fa:  movl   $0x3,0x4(%esp)
0843d588 +0x302:  mov    -0x10(%ebp),%eax
0843d58b +0x305:  mov    %eax,(%esp)
0843d58e +0x308:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843d593 +0x30d:  xor    $0x1,%eax
0843d596 +0x310:  test   %al,%al
0843d598 +0x312:  je     0843d5a1 <+0x31b>
0843d59a +0x314:  mov    $0x0,%ebx
0843d59f +0x319:  jmp    0843d5e5 <+0x35f>
0843d5a1 +0x31b:  mov    -0xc(%ebp),%eax
0843d5a4 +0x31e:  movb   $0x1,(%eax)
0843d5a7 +0x321:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843d5ac +0x326:  lea    -0x20(%ebp),%edx
0843d5af +0x329:  mov    %edx,0x8(%esp)
0843d5b3 +0x32d:  movl   $0x1,0x4(%esp)
0843d5bb +0x335:  mov    %eax,(%esp)
0843d5be +0x338:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843d5c3 +0x33d:  mov    $0x1,%ebx
0843d5c8 +0x342:  jmp    0843d5e5 <+0x35f>
0843d5ca +0x344:  mov    %edx,%ebx
0843d5cc +0x346:  mov    %eax,%esi
0843d5ce +0x348:  lea    -0x20(%ebp),%eax
0843d5d1 +0x34b:  mov    %eax,(%esp)
0843d5d4 +0x34e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843d5d9 +0x353:  mov    %esi,%eax
0843d5db +0x355:  mov    %ebx,%edx
0843d5dd +0x357:  mov    %eax,(%esp)
0843d5e0 +0x35a:  call   08ae3750 <_Unwind_Resume>
0843d5e5 +0x35f:  lea    -0x20(%ebp),%eax
0843d5e8 +0x362:  mov    %eax,(%esp)
0843d5eb +0x365:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843d5f0 +0x36a:  mov    %ebx,%eax
0843d5f2 +0x36c:  add    $0x30,%esp
0843d5f5 +0x36f:  pop    %ebx
0843d5f6 +0x370:  pop    %esi
0843d5f7 +0x371:  pop    %ebp
0843d5f8 +0x372:  ret
0843d5f9 +0x373:  nop
```

## 反编译 C

```c
// DB_JoinGuildInfo::dispatch @ 0x843d286

/* DB_JoinGuildInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_JoinGuildInfo::dispatch(DB_JoinGuildInfo *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_24 [8];
  uint local_1c;
  int local_18;
  MySQL *local_14;
  SIG_JOIN_GUILD_INFO *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(param_3,&local_18);
  Stream::operator>>(param_3,&local_1c);
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x91bd);
  CStreamGuard::CStreamGuard(local_24,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0843d32a to 0843d5c2 has its CatchHandler @ 0843d5ca */
  CStreamGuard::operator<<(pCVar3,0x219);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar3,param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  local_10 = CStreamGuard::GetInBuffer<SIG_JOIN_GUILD_INFO>(pCVar3);
  MySQL::set_query(local_14,
                   "seLect guild_id,memo from guild_join_list where charac_no=%d and server_group=%d"
                   ,local_1c,local_18);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_14);
    if (iVar4 == 0) {
      *local_10 = (SIG_JOIN_GUILD_INFO)0x0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
      uVar5 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_14);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_uint(local_14,0,(uint *)(local_10 + 4));
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_str(local_14,1,(char *)(local_10 + 0x48),0x1a);
          if (cVar1 == '\x01') {
            MySQL::set_query(local_14,
                             "seLect guild_name,master_name,lev,member_count from guild_info where expire_flag=0 and guild_id=%d"
                             ,*(undefined4 *)(local_10 + 4));
            cVar1 = MySQL::exec(local_14,true);
            if (cVar1 == '\x01') {
              iVar4 = MySQL::get_n_rows(local_14);
              if (iVar4 == 0) {
                uVar5 = 1;
              }
              else {
                cVar1 = MySQL::fetch(local_14);
                if (cVar1 == '\x01') {
                  cVar1 = MySQL::get_str(local_14,0,(char *)(local_10 + 0x26),0x17);
                  if (cVar1 == '\x01') {
                    cVar1 = MySQL::get_str(local_14,1,(char *)(local_10 + 8),0x1e);
                    if (cVar1 == '\x01') {
                      cVar1 = MySQL::get_int(local_14,2,(int *)(local_10 + 0x40));
                      if (cVar1 == '\x01') {
                        cVar1 = MySQL::get_int(local_14,3,(int *)(local_10 + 0x44));
                        if (cVar1 == '\x01') {
                          *local_10 = (SIG_JOIN_GUILD_INFO)0x1;
                          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
                          uVar5 = 1;
                        }
                        else {
                          uVar5 = 0;
                        }
                      }
                      else {
                        uVar5 = 0;
                      }
                    }
                    else {
                      uVar5 = 0;
                    }
                  }
                  else {
                    uVar5 = 0;
                  }
                }
                else {
                  uVar5 = 0;
                }
              }
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  CStreamGuard::~CStreamGuard(local_24);
  return uVar5;
}
```
