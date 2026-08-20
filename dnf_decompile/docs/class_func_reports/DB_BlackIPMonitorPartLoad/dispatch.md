# dispatch

`_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream`

`DB_BlackIPMonitorPartLoad::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_BlackIPMonitorPartLoad` | `0x084330d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084330d4  _ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream
#           DB_BlackIPMonitorPartLoad::dispatch(int, int, Stream*)
# range [0x084330d4, 0x0843351d]
084330d4 +0x000:  push   %ebp
084330d5 +0x001:  mov    %esp,%ebp
084330d7 +0x003:  push   %edi
084330d8 +0x004:  push   %esi
084330d9 +0x005:  push   %ebx
084330da +0x006:  sub    $0xcfc,%esp
084330e0 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084330e5 +0x011:  movl   $0x0,0x8(%esp)
084330ed +0x019:  movl   $0x6,0x4(%esp)
084330f5 +0x021:  mov    %eax,(%esp)
084330f8 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084330fd +0x029:  mov    %eax,-0x30(%ebp)
08433100 +0x02c:  movl   $&_ZN10GlobalData27g_IPMonitorLastDBAccessTimeE,(%esp)
08433107 +0x033:  call   0807e330 <_init+0xc28>
0843310c +0x038:  mov    %eax,-0x2c(%ebp)
0843310f +0x03b:  movzwl "",%eax
08433116 +0x042:  mov    %ax,-0x54(%ebp)
0843311a +0x046:  movl   $0x0,-0x52(%ebp)
08433121 +0x04d:  movl   $0x0,-0x4e(%ebp)
08433128 +0x054:  movl   $0x0,-0x4a(%ebp)
0843312f +0x05b:  movl   $0x0,-0x46(%ebp)
08433136 +0x062:  movw   $0x0,-0x42(%ebp)
0843313c +0x068:  mov    -0x2c(%ebp),%eax
0843313f +0x06b:  mov    (%eax),%ebx
08433141 +0x06d:  mov    -0x2c(%ebp),%eax
08433144 +0x070:  mov    0x4(%eax),%ecx
08433147 +0x073:  mov    -0x2c(%ebp),%eax
0843314a +0x076:  mov    0x8(%eax),%edx
0843314d +0x079:  mov    -0x2c(%ebp),%eax
08433150 +0x07c:  mov    0xc(%eax),%eax
08433153 +0x07f:  mov    -0x2c(%ebp),%esi
08433156 +0x082:  mov    0x10(%esi),%esi
08433159 +0x085:  lea    0x1(%esi),%edi
0843315c +0x088:  mov    -0x2c(%ebp),%esi
0843315f +0x08b:  mov    0x14(%esi),%esi
08433162 +0x08e:  add    $0x76c,%esi
08433168 +0x094:  mov    %ebx,0x1c(%esp)
0843316c +0x098:  mov    %ecx,0x18(%esp)
08433170 +0x09c:  mov    %edx,0x14(%esp)
08433174 +0x0a0:  mov    %eax,0x10(%esp)
08433178 +0x0a4:  mov    %edi,0xc(%esp)
0843317c +0x0a8:  mov    %esi,0x8(%esp)
08433180 +0x0ac:  movl   $"%d-%d-%d %d:%d:%d",0x4(%esp)
08433188 +0x0b4:  lea    -0x54(%ebp),%eax
0843318b +0x0b7:  mov    %eax,(%esp)
0843318e +0x0ba:  call   0807e440 <_init+0xd38>
08433193 +0x0bf:  lea    -0x54(%ebp),%eax
08433196 +0x0c2:  mov    %eax,0x8(%esp)
0843319a +0x0c6:  movl   $"seLect ip, type, m_id_cnt, unix_timestamp(start_time), unix_timestamp(end_time) from ip_monitor_punish where start_time > '%s'",0x4(%esp)
084331a2 +0x0ce:  mov    -0x30(%ebp),%eax
084331a5 +0x0d1:  mov    %eax,(%esp)
084331a8 +0x0d4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084331ad +0x0d9:  movl   $0x1,0x4(%esp)
084331b5 +0x0e1:  mov    -0x30(%ebp),%eax
084331b8 +0x0e4:  mov    %eax,(%esp)
084331bb +0x0e7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084331c0 +0x0ec:  xor    $0x1,%eax
084331c3 +0x0ef:  test   %al,%al
084331c5 +0x0f1:  jne    084331d6 <+0x102>
084331c7 +0x0f3:  mov    -0x30(%ebp),%eax
084331ca +0x0f6:  mov    %eax,(%esp)
084331cd +0x0f9:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084331d2 +0x0fe:  test   %eax,%eax
084331d4 +0x100:  jne    084331dd <+0x109>
084331d6 +0x102:  mov    $0x1,%eax
084331db +0x107:  jmp    084331e2 <+0x10e>
084331dd +0x109:  mov    $0x0,%eax
084331e2 +0x10e:  test   %al,%al
084331e4 +0x110:  je     084331f0 <+0x11c>
084331e6 +0x112:  mov    $0x0,%eax
084331eb +0x117:  jmp    08433513 <+0x43f>
084331f0 +0x11c:  mov    -0x30(%ebp),%eax
084331f3 +0x11f:  mov    %eax,(%esp)
084331f6 +0x122:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084331fb +0x127:  mov    %eax,%ebx
084331fd +0x129:  movl   $0x0,0xc(%esp)
08433205 +0x131:  movl   $0x7ac4,0x8(%esp)
0843320d +0x139:  movl   $&_ZZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08433215 +0x141:  lea    -0x40(%ebp),%eax
08433218 +0x144:  mov    %eax,(%esp)
0843321b +0x147:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08433220 +0x14c:  mov    %ebx,0x8(%esp)
08433224 +0x150:  movl   $"BLACKIP GET DB ROWS COUNT : %d",0x4(%esp)
0843322c +0x158:  lea    -0x40(%ebp),%eax
0843322f +0x15b:  mov    %eax,(%esp)
08433232 +0x15e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08433237 +0x163:  movl   $0x0,-0x28(%ebp)
0843323e +0x16a:  movl   $0x0,-0x24(%ebp)
08433245 +0x171:  movb   $0x0,-0x1d(%ebp)
08433249 +0x175:  movl   $0x0,-0x28(%ebp)
08433250 +0x17c:  jmp    084334f5 <+0x421>
08433255 +0x181:  mov    -0x30(%ebp),%eax
08433258 +0x184:  mov    %eax,(%esp)
0843325b +0x187:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08433260 +0x18c:  xor    $0x1,%eax
08433263 +0x18f:  test   %al,%al
08433265 +0x191:  je     08433271 <+0x19d>
08433267 +0x193:  mov    $0x0,%eax
0843326c +0x198:  jmp    08433513 <+0x43f>
08433271 +0x19d:  cmpl   $0x0,-0x24(%ebp)
08433275 +0x1a1:  jne    08433295 <+0x1c1>
08433277 +0x1a3:  movl   $0xc80,0x8(%esp)
0843327f +0x1ab:  movl   $0x0,0x4(%esp)
08433287 +0x1b3:  lea    -0xcdc(%ebp),%eax
0843328d +0x1b9:  mov    %eax,(%esp)
08433290 +0x1bc:  call   0807dcc0 <_init+0x5b8>
08433295 +0x1c1:  mov    -0x24(%ebp),%edx
08433298 +0x1c4:  lea    -0xcdc(%ebp),%eax
0843329e +0x1ca:  shl    $0x5,%edx
084332a1 +0x1cd:  add    %edx,%eax
084332a3 +0x1cf:  movl   $0x10,0xc(%esp)
084332ab +0x1d7:  mov    %eax,0x8(%esp)
084332af +0x1db:  movl   $0x0,0x4(%esp)
084332b7 +0x1e3:  mov    -0x30(%ebp),%eax
084332ba +0x1e6:  mov    %eax,(%esp)
084332bd +0x1e9:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
084332c2 +0x1ee:  xor    $0x1,%eax
084332c5 +0x1f1:  test   %al,%al
084332c7 +0x1f3:  je     084332d3 <+0x1ff>
084332c9 +0x1f5:  mov    $0x0,%eax
084332ce +0x1fa:  jmp    08433513 <+0x43f>
084332d3 +0x1ff:  mov    -0x24(%ebp),%edx
084332d6 +0x202:  lea    -0xcdc(%ebp),%eax
084332dc +0x208:  add    %edx,%edx
084332de +0x20a:  add    $0x1,%edx
084332e1 +0x20d:  shl    $0x4,%edx
084332e4 +0x210:  add    %edx,%eax
084332e6 +0x212:  mov    %eax,0x8(%esp)
084332ea +0x216:  movl   $0x1,0x4(%esp)
084332f2 +0x21e:  mov    -0x30(%ebp),%eax
084332f5 +0x221:  mov    %eax,(%esp)
084332f8 +0x224:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084332fd +0x229:  xor    $0x1,%eax
08433300 +0x22c:  test   %al,%al
08433302 +0x22e:  je     0843330e <+0x23a>
08433304 +0x230:  mov    $0x0,%eax
08433309 +0x235:  jmp    08433513 <+0x43f>
0843330e +0x23a:  mov    -0x24(%ebp),%edx
08433311 +0x23d:  lea    -0xcdc(%ebp),%eax
08433317 +0x243:  add    %edx,%edx
08433319 +0x245:  add    $0x1,%edx
0843331c +0x248:  shl    $0x4,%edx
0843331f +0x24b:  add    %edx,%eax
08433321 +0x24d:  add    $0x4,%eax
08433324 +0x250:  mov    %eax,0x8(%esp)
08433328 +0x254:  movl   $0x2,0x4(%esp)
08433330 +0x25c:  mov    -0x30(%ebp),%eax
08433333 +0x25f:  mov    %eax,(%esp)
08433336 +0x262:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0843333b +0x267:  xor    $0x1,%eax
0843333e +0x26a:  test   %al,%al
08433340 +0x26c:  je     0843334c <+0x278>
08433342 +0x26e:  mov    $0x0,%eax
08433347 +0x273:  jmp    08433513 <+0x43f>
0843334c +0x278:  mov    -0x24(%ebp),%edx
0843334f +0x27b:  lea    -0xcdc(%ebp),%eax
08433355 +0x281:  add    %edx,%edx
08433357 +0x283:  add    $0x1,%edx
0843335a +0x286:  shl    $0x4,%edx
0843335d +0x289:  add    %edx,%eax
0843335f +0x28b:  add    $0x8,%eax
08433362 +0x28e:  mov    %eax,0x8(%esp)
08433366 +0x292:  movl   $0x3,0x4(%esp)
0843336e +0x29a:  mov    -0x30(%ebp),%eax
08433371 +0x29d:  mov    %eax,(%esp)
08433374 +0x2a0:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08433379 +0x2a5:  xor    $0x1,%eax
0843337c +0x2a8:  test   %al,%al
0843337e +0x2aa:  je     0843338a <+0x2b6>
08433380 +0x2ac:  mov    $0x0,%eax
08433385 +0x2b1:  jmp    08433513 <+0x43f>
0843338a +0x2b6:  mov    -0x24(%ebp),%edx
0843338d +0x2b9:  lea    -0xcdc(%ebp),%eax
08433393 +0x2bf:  add    %edx,%edx
08433395 +0x2c1:  add    $0x1,%edx
08433398 +0x2c4:  shl    $0x4,%edx
0843339b +0x2c7:  add    %edx,%eax
0843339d +0x2c9:  add    $0xc,%eax
084333a0 +0x2cc:  mov    %eax,0x8(%esp)
084333a4 +0x2d0:  movl   $0x4,0x4(%esp)
084333ac +0x2d8:  mov    -0x30(%ebp),%eax
084333af +0x2db:  mov    %eax,(%esp)
084333b2 +0x2de:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084333b7 +0x2e3:  xor    $0x1,%eax
084333ba +0x2e6:  test   %al,%al
084333bc +0x2e8:  je     084333c8 <+0x2f4>
084333be +0x2ea:  mov    $0x0,%eax
084333c3 +0x2ef:  jmp    08433513 <+0x43f>
084333c8 +0x2f4:  cmpl   $0x62,-0x24(%ebp)
084333cc +0x2f8:  ja     084333ef <+0x31b>
084333ce +0x2fa:  mov    -0x30(%ebp),%eax
084333d1 +0x2fd:  mov    %eax,(%esp)
084333d4 +0x300:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084333d9 +0x305:  sub    $0x1,%eax
084333dc +0x308:  cmp    -0x28(%ebp),%eax
084333df +0x30b:  seta   %al
084333e2 +0x30e:  test   %al,%al
084333e4 +0x310:  je     084333ef <+0x31b>
084333e6 +0x312:  addl   $0x1,-0x24(%ebp)
084333ea +0x316:  jmp    084334f1 <+0x41d>
084333ef +0x31b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084333f4 +0x320:  movl   $0x7ae9,0x8(%esp)
084333fc +0x328:  movl   $"DBThread.cpp",0x4(%esp)
08433404 +0x330:  mov    %eax,(%esp)
08433407 +0x333:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843340c +0x338:  movl   $0x1,0x8(%esp)
08433414 +0x340:  mov    %eax,0x4(%esp)
08433418 +0x344:  lea    -0x5c(%ebp),%eax
0843341b +0x347:  mov    %eax,(%esp)
0843341e +0x34a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08433423 +0x34f:  lea    -0x5c(%ebp),%eax
08433426 +0x352:  mov    %eax,(%esp)
08433429 +0x355:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843342e +0x35a:  movl   $0x156,0x4(%esp)
08433436 +0x362:  mov    %eax,(%esp)
08433439 +0x365:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843343e +0x36a:  lea    -0x5c(%ebp),%eax
08433441 +0x36d:  mov    %eax,(%esp)
08433444 +0x370:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433449 +0x375:  movl   $0xffffffff,0x4(%esp)
08433451 +0x37d:  mov    %eax,(%esp)
08433454 +0x380:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08433459 +0x385:  lea    -0x5c(%ebp),%eax
0843345c +0x388:  mov    %eax,(%esp)
0843345f +0x38b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08433464 +0x390:  mov    %eax,(%esp)
08433467 +0x393:  call   08453048 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5c5e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5c5e
0843346c +0x398:  mov    %eax,-0x1c(%ebp)
0843346f +0x39b:  mov    -0x24(%ebp),%eax
08433472 +0x39e:  add    $0x1,%eax
08433475 +0x3a1:  mov    %eax,%edx
08433477 +0x3a3:  mov    -0x1c(%ebp),%eax
0843347a +0x3a6:  mov    %edx,(%eax)
0843347c +0x3a8:  mov    -0x1c(%ebp),%eax
0843347f +0x3ab:  lea    0x4(%eax),%edx
08433482 +0x3ae:  movl   $0xc80,0x8(%esp)
0843348a +0x3b6:  lea    -0xcdc(%ebp),%eax
08433490 +0x3bc:  mov    %eax,0x4(%esp)
08433494 +0x3c0:  mov    %edx,(%esp)
08433497 +0x3c3:  call   0807d8a0 <_init+0x198>
0843349c +0x3c8:  mov    -0x1c(%ebp),%eax
0843349f +0x3cb:  movb   $0x0,0xc84(%eax)
084334a6 +0x3d2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084334ab +0x3d7:  lea    -0x5c(%ebp),%edx
084334ae +0x3da:  mov    %edx,0x8(%esp)
084334b2 +0x3de:  movl   $0x1,0x4(%esp)
084334ba +0x3e6:  mov    %eax,(%esp)
084334bd +0x3e9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084334c2 +0x3ee:  movl   $0x0,-0x24(%ebp)
084334c9 +0x3f5:  lea    -0x5c(%ebp),%eax
084334cc +0x3f8:  mov    %eax,(%esp)
084334cf +0x3fb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084334d4 +0x400:  jmp    084334f1 <+0x41d>
084334d6 +0x402:  mov    %edx,%ebx
084334d8 +0x404:  mov    %eax,%esi
084334da +0x406:  lea    -0x5c(%ebp),%eax
084334dd +0x409:  mov    %eax,(%esp)
084334e0 +0x40c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084334e5 +0x411:  mov    %esi,%eax
084334e7 +0x413:  mov    %ebx,%edx
084334e9 +0x415:  mov    %eax,(%esp)
084334ec +0x418:  call   08ae3750 <_Unwind_Resume>
084334f1 +0x41d:  addl   $0x1,-0x28(%ebp)
084334f5 +0x421:  mov    -0x30(%ebp),%eax
084334f8 +0x424:  mov    %eax,(%esp)
084334fb +0x427:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08433500 +0x42c:  cmp    -0x28(%ebp),%eax
08433503 +0x42f:  seta   %al
08433506 +0x432:  test   %al,%al
08433508 +0x434:  jne    08433255 <+0x181>
0843350e +0x43a:  mov    $0x1,%eax
08433513 +0x43f:  add    $0xcfc,%esp
08433519 +0x445:  pop    %ebx
0843351a +0x446:  pop    %esi
0843351b +0x447:  pop    %edi
0843351c +0x448:  pop    %ebp
0843351d +0x449:  ret
```

## 反编译 C

```c
// DB_BlackIPMonitorPartLoad::dispatch @ 0x84330d4

/* DB_BlackIPMonitorPartLoad::dispatch(int, int, Stream*) */

undefined4 DB_BlackIPMonitorPartLoad::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  uint uVar7;
  uint local_ce0 [800];
  CStreamGuard local_60 [8];
  undefined2 local_58;
  undefined4 local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined2 local_46;
  cMyTrace local_44 [16];
  MySQL *local_34;
  tm *local_30;
  uint local_2c;
  uint local_28;
  undefined1 local_21;
  SIG_IP_MONITOR_PUNISH *local_20;
  
  local_34 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_30 = localtime(&GlobalData::g_IPMonitorLastDBAccessTime);
  local_58 = DAT_08c52777;
  local_56 = 0;
  local_52 = 0;
  local_4e = 0;
  local_4a = 0;
  local_46 = 0;
  sprintf((char *)&local_58,"%d-%d-%d %d:%d:%d",local_30->tm_year + 0x76c,local_30->tm_mon + 1,
          local_30->tm_mday,local_30->tm_hour,local_30->tm_min,local_30->tm_sec);
  MySQL::set_query(local_34,
                   "seLect ip, type, m_id_cnt, unix_timestamp(start_time), unix_timestamp(end_time) from ip_monitor_punish where start_time > \'%s\'"
                   ,&local_58);
  cVar2 = MySQL::exec(local_34,true);
  if ((cVar2 == '\x01') && (iVar3 = MySQL::get_n_rows(local_34), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    uVar4 = MySQL::get_n_rows(local_34);
    cMyTrace::cMyTrace(local_44,
                       "virtual bool DB_BlackIPMonitorPartLoad::dispatch(int, int, Stream*)",0x7ac4,
                       0);
    cMyTrace::operator()(local_44,"BLACKIP GET DB ROWS COUNT : %d",uVar4);
    local_28 = 0;
    local_21 = 0;
    local_2c = 0;
    while (uVar7 = MySQL::get_n_rows(local_34), local_2c < uVar7) {
      cVar2 = MySQL::fetch(local_34);
      if (cVar2 != '\x01') {
        return 0;
      }
      if (local_28 == 0) {
        memset(local_ce0,0,0xc80);
      }
      cVar2 = MySQL::get_str(local_34,0,(char *)(local_ce0 + local_28 * 8),0x10);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(local_34,1,(int *)(local_ce0 + (local_28 * 2 + 1) * 4));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(local_34,2,local_ce0 + (local_28 * 2 + 1) * 4 + 1);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(local_34,3,local_ce0 + (local_28 * 2 + 1) * 4 + 2);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(local_34,4,local_ce0 + (local_28 * 2 + 1) * 4 + 3);
      if (cVar2 != '\x01') {
        return 0;
      }
      if ((local_28 < 99) && (iVar3 = MySQL::get_n_rows(local_34), local_2c < iVar3 - 1U)) {
        local_28 = local_28 + 1;
      }
      else {
        pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7ae9);
        CStreamGuard::CStreamGuard(local_60,pSVar5,true);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_60);
                    /* try { // try from 08433439 to 084334c1 has its CatchHandler @ 084334d6 */
        CStreamGuard::operator<<(pCVar6,0x156);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_60);
        CStreamGuard::operator<<(pCVar6,-1);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_60);
        local_20 = CStreamGuard::GetInBuffer<SIG_IP_MONITOR_PUNISH>(pCVar6);
        *(uint *)local_20 = local_28 + 1;
        memcpy(local_20 + 4,local_ce0,0xc80);
        local_20[0xc84] = (SIG_IP_MONITOR_PUNISH)0x0;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_60);
        local_28 = 0;
        CStreamGuard::~CStreamGuard(local_60);
      }
      local_2c = local_2c + 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
