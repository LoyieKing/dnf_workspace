# dispatch

`_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream`

`DB_MailBox_Req_CheckReceiver::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_CheckReceiver` | `0x0841c882` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841c882  _ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream
#           DB_MailBox_Req_CheckReceiver::dispatch(int, int, Stream*)
# range [0x0841c882, 0x0841cc69]
0841c882 +0x000:  push   %ebp
0841c883 +0x001:  mov    %esp,%ebp
0841c885 +0x003:  push   %edi
0841c886 +0x004:  push   %esi
0841c887 +0x005:  push   %ebx
0841c888 +0x006:  sub    $0x8c,%esp
0841c88e +0x00c:  mov    0x14(%ebp),%eax
0841c891 +0x00f:  mov    %eax,(%esp)
0841c894 +0x012:  call   0845155a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4170>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4170
0841c899 +0x017:  mov    %eax,-0x30(%ebp)
0841c89c +0x01a:  movl   $0x0,-0x34(%ebp)
0841c8a3 +0x021:  movl   $0x0,-0x38(%ebp)
0841c8aa +0x028:  movl   $0x0,-0x3c(%ebp)
0841c8b1 +0x02f:  movl   $0x0,-0x40(%ebp)
0841c8b8 +0x036:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841c8bd +0x03b:  movl   $0x0,0x8(%esp)
0841c8c5 +0x043:  movl   $0x2,0x4(%esp)
0841c8cd +0x04b:  mov    %eax,(%esp)
0841c8d0 +0x04e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841c8d5 +0x053:  mov    %eax,-0x2c(%ebp)
0841c8d8 +0x056:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841c8dd +0x05b:  movl   $0x0,0x8(%esp)
0841c8e5 +0x063:  movl   $0x3,0x4(%esp)
0841c8ed +0x06b:  mov    %eax,(%esp)
0841c8f0 +0x06e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841c8f5 +0x073:  mov    %eax,-0x28(%ebp)
0841c8f8 +0x076:  movl   $"seLect charac_no,lev,delete_flag,m_id from charac_info where charac_name='%s'",-0x24(%ebp)
0841c8ff +0x07d:  lea    -0x87(%ebp),%edx
0841c905 +0x083:  mov    $0x3b,%ebx
0841c90a +0x088:  mov    $0x0,%eax
0841c90f +0x08d:  mov    %edx,%ecx
0841c911 +0x08f:  and    $0x1,%ecx
0841c914 +0x092:  test   %ecx,%ecx
0841c916 +0x094:  je     0841c920 <+0x9e>
0841c918 +0x096:  mov    %al,(%edx)
0841c91a +0x098:  add    $0x1,%edx
0841c91d +0x09b:  sub    $0x1,%ebx
0841c920 +0x09e:  mov    %edx,%ecx
0841c922 +0x0a0:  and    $0x2,%ecx
0841c925 +0x0a3:  test   %ecx,%ecx
0841c927 +0x0a5:  je     0841c932 <+0xb0>
0841c929 +0x0a7:  mov    %ax,(%edx)
0841c92c +0x0aa:  add    $0x2,%edx
0841c92f +0x0ad:  sub    $0x2,%ebx
0841c932 +0x0b0:  mov    %ebx,%ecx
0841c934 +0x0b2:  shr    $0x2,%ecx
0841c937 +0x0b5:  mov    %edx,%edi
0841c939 +0x0b7:  rep stos %eax,%es:(%edi)
0841c93b +0x0b9:  mov    %edi,%edx
0841c93d +0x0bb:  mov    %ebx,%ecx
0841c93f +0x0bd:  and    $0x2,%ecx
0841c942 +0x0c0:  test   %ecx,%ecx
0841c944 +0x0c2:  je     0841c94c <+0xca>
0841c946 +0x0c4:  mov    %ax,(%edx)
0841c949 +0x0c7:  add    $0x2,%edx
0841c94c +0x0ca:  mov    %ebx,%ecx
0841c94e +0x0cc:  and    $0x1,%ecx
0841c951 +0x0cf:  test   %ecx,%ecx
0841c953 +0x0d1:  je     0841c95a <+0xd8>
0841c955 +0x0d3:  mov    %al,(%edx)
0841c957 +0x0d5:  add    $0x1,%edx
0841c95a +0x0d8:  mov    -0x30(%ebp),%eax
0841c95d +0x0db:  mov    %eax,0x8(%esp)
0841c961 +0x0df:  lea    -0x87(%ebp),%eax
0841c967 +0x0e5:  mov    %eax,0x4(%esp)
0841c96b +0x0e9:  mov    -0x2c(%ebp),%eax
0841c96e +0x0ec:  mov    %eax,(%esp)
0841c971 +0x0ef:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0841c976 +0x0f4:  lea    -0x87(%ebp),%eax
0841c97c +0x0fa:  mov    %eax,0x8(%esp)
0841c980 +0x0fe:  mov    -0x24(%ebp),%eax
0841c983 +0x101:  mov    %eax,0x4(%esp)
0841c987 +0x105:  mov    -0x2c(%ebp),%eax
0841c98a +0x108:  mov    %eax,(%esp)
0841c98d +0x10b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841c992 +0x110:  movl   $0x1,0x4(%esp)
0841c99a +0x118:  mov    -0x2c(%ebp),%eax
0841c99d +0x11b:  mov    %eax,(%esp)
0841c9a0 +0x11e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841c9a5 +0x123:  xor    $0x1,%eax
0841c9a8 +0x126:  test   %al,%al
0841c9aa +0x128:  je     0841c9b6 <+0x134>
0841c9ac +0x12a:  mov    $0x0,%ebx
0841c9b1 +0x12f:  jmp    0841cc5d <+0x3db>
0841c9b6 +0x134:  movl   $0x0,-0x1c(%ebp)
0841c9bd +0x13b:  jmp    0841ca8e <+0x20c>
0841c9c2 +0x140:  mov    -0x2c(%ebp),%eax
0841c9c5 +0x143:  mov    %eax,(%esp)
0841c9c8 +0x146:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841c9cd +0x14b:  xor    $0x1,%eax
0841c9d0 +0x14e:  test   %al,%al
0841c9d2 +0x150:  je     0841c9de <+0x15c>
0841c9d4 +0x152:  mov    $0x0,%ebx
0841c9d9 +0x157:  jmp    0841cc5d <+0x3db>
0841c9de +0x15c:  lea    -0x34(%ebp),%eax
0841c9e1 +0x15f:  mov    %eax,0x8(%esp)
0841c9e5 +0x163:  movl   $0x0,0x4(%esp)
0841c9ed +0x16b:  mov    -0x2c(%ebp),%eax
0841c9f0 +0x16e:  mov    %eax,(%esp)
0841c9f3 +0x171:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841c9f8 +0x176:  xor    $0x1,%eax
0841c9fb +0x179:  test   %al,%al
0841c9fd +0x17b:  je     0841ca09 <+0x187>
0841c9ff +0x17d:  mov    $0x0,%ebx
0841ca04 +0x182:  jmp    0841cc5d <+0x3db>
0841ca09 +0x187:  lea    -0x38(%ebp),%eax
0841ca0c +0x18a:  mov    %eax,0x8(%esp)
0841ca10 +0x18e:  movl   $0x1,0x4(%esp)
0841ca18 +0x196:  mov    -0x2c(%ebp),%eax
0841ca1b +0x199:  mov    %eax,(%esp)
0841ca1e +0x19c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841ca23 +0x1a1:  xor    $0x1,%eax
0841ca26 +0x1a4:  test   %al,%al
0841ca28 +0x1a6:  je     0841ca34 <+0x1b2>
0841ca2a +0x1a8:  mov    $0x0,%ebx
0841ca2f +0x1ad:  jmp    0841cc5d <+0x3db>
0841ca34 +0x1b2:  lea    -0x3c(%ebp),%eax
0841ca37 +0x1b5:  mov    %eax,0x8(%esp)
0841ca3b +0x1b9:  movl   $0x2,0x4(%esp)
0841ca43 +0x1c1:  mov    -0x2c(%ebp),%eax
0841ca46 +0x1c4:  mov    %eax,(%esp)
0841ca49 +0x1c7:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841ca4e +0x1cc:  xor    $0x1,%eax
0841ca51 +0x1cf:  test   %al,%al
0841ca53 +0x1d1:  je     0841ca5f <+0x1dd>
0841ca55 +0x1d3:  mov    $0x0,%ebx
0841ca5a +0x1d8:  jmp    0841cc5d <+0x3db>
0841ca5f +0x1dd:  lea    -0x40(%ebp),%eax
0841ca62 +0x1e0:  mov    %eax,0x8(%esp)
0841ca66 +0x1e4:  movl   $0x3,0x4(%esp)
0841ca6e +0x1ec:  mov    -0x2c(%ebp),%eax
0841ca71 +0x1ef:  mov    %eax,(%esp)
0841ca74 +0x1f2:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841ca79 +0x1f7:  xor    $0x1,%eax
0841ca7c +0x1fa:  test   %al,%al
0841ca7e +0x1fc:  je     0841ca8a <+0x208>
0841ca80 +0x1fe:  mov    $0x0,%ebx
0841ca85 +0x203:  jmp    0841cc5d <+0x3db>
0841ca8a +0x208:  addl   $0x1,-0x1c(%ebp)
0841ca8e +0x20c:  mov    -0x2c(%ebp),%eax
0841ca91 +0x20f:  mov    %eax,(%esp)
0841ca94 +0x212:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841ca99 +0x217:  cmp    -0x1c(%ebp),%eax
0841ca9c +0x21a:  seta   %al
0841ca9f +0x21d:  test   %al,%al
0841caa1 +0x21f:  jne    0841c9c2 <+0x140>
0841caa7 +0x225:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
0841caac +0x22a:  movl   $0x509a,0x8(%esp)
0841cab4 +0x232:  movl   $"DBThread.cpp",0x4(%esp)
0841cabc +0x23a:  mov    %eax,(%esp)
0841cabf +0x23d:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
0841cac4 +0x242:  movl   $0x1,0x8(%esp)
0841cacc +0x24a:  mov    %eax,0x4(%esp)
0841cad0 +0x24e:  lea    -0x48(%ebp),%eax
0841cad3 +0x251:  mov    %eax,(%esp)
0841cad6 +0x254:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0841cadb +0x259:  lea    -0x48(%ebp),%eax
0841cade +0x25c:  mov    %eax,(%esp)
0841cae1 +0x25f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841cae6 +0x264:  movl   $0x7e,0x4(%esp)
0841caee +0x26c:  mov    %eax,(%esp)
0841caf1 +0x26f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841caf6 +0x274:  lea    -0x48(%ebp),%eax
0841caf9 +0x277:  mov    %eax,(%esp)
0841cafc +0x27a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841cb01 +0x27f:  mov    0x10(%ebp),%edx
0841cb04 +0x282:  mov    %edx,0x4(%esp)
0841cb08 +0x286:  mov    %eax,(%esp)
0841cb0b +0x289:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841cb10 +0x28e:  lea    -0x48(%ebp),%eax
0841cb13 +0x291:  mov    %eax,(%esp)
0841cb16 +0x294:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0841cb1b +0x299:  mov    %eax,(%esp)
0841cb1e +0x29c:  call   084515ae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x41c4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x41c4
0841cb23 +0x2a1:  mov    %eax,-0x20(%ebp)
0841cb26 +0x2a4:  mov    -0x34(%ebp),%eax
0841cb29 +0x2a7:  mov    %eax,%edx
0841cb2b +0x2a9:  mov    -0x20(%ebp),%eax
0841cb2e +0x2ac:  mov    %edx,0x1d(%eax)
0841cb31 +0x2af:  mov    -0x38(%ebp),%eax
0841cb34 +0x2b2:  mov    %eax,%edx
0841cb36 +0x2b4:  mov    -0x20(%ebp),%eax
0841cb39 +0x2b7:  mov    %edx,0x21(%eax)
0841cb3c +0x2ba:  mov    -0x3c(%ebp),%eax
0841cb3f +0x2bd:  mov    %eax,%edx
0841cb41 +0x2bf:  mov    -0x20(%ebp),%eax
0841cb44 +0x2c2:  mov    %edx,0x25(%eax)
0841cb47 +0x2c5:  mov    -0x40(%ebp),%edx
0841cb4a +0x2c8:  mov    -0x20(%ebp),%eax
0841cb4d +0x2cb:  mov    %edx,0x29(%eax)
0841cb50 +0x2ce:  mov    -0x30(%ebp),%eax
0841cb53 +0x2d1:  lea    0x31(%eax),%edx
0841cb56 +0x2d4:  mov    -0x20(%ebp),%eax
0841cb59 +0x2d7:  add    $0x31,%eax
0841cb5c +0x2da:  movl   $0x3f88,0x8(%esp)
0841cb64 +0x2e2:  mov    %edx,0x4(%esp)
0841cb68 +0x2e6:  mov    %eax,(%esp)
0841cb6b +0x2e9:  call   0807d8a0 <_init+0x198>
0841cb70 +0x2ee:  mov    -0x30(%ebp),%eax
0841cb73 +0x2f1:  mov    0x2d(%eax),%ebx
0841cb76 +0x2f4:  mov    -0x40(%ebp),%eax
0841cb79 +0x2f7:  movl   $0x0,0x4(%esp)
0841cb81 +0x2ff:  mov    %eax,(%esp)
0841cb84 +0x302:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841cb89 +0x307:  mov    %ebx,0xc(%esp)
0841cb8d +0x30b:  mov    %eax,0x8(%esp)
0841cb91 +0x30f:  movl   $"seLect count(*) from charac_black_list where m_id = %s and charac_no = %d",0x4(%esp)
0841cb99 +0x317:  mov    -0x28(%ebp),%eax
0841cb9c +0x31a:  mov    %eax,(%esp)
0841cb9f +0x31d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841cba4 +0x322:  test   %al,%al
0841cba6 +0x324:  je     0841cc14 <+0x392>
0841cba8 +0x326:  movl   $0x0,-0x4c(%ebp)
0841cbaf +0x32d:  mov    -0x20(%ebp),%eax
0841cbb2 +0x330:  movl   $0x0,0x3fb9(%eax)
0841cbbc +0x33a:  movl   $0x1,0x4(%esp)
0841cbc4 +0x342:  mov    -0x28(%ebp),%eax
0841cbc7 +0x345:  mov    %eax,(%esp)
0841cbca +0x348:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841cbcf +0x34d:  test   %al,%al
0841cbd1 +0x34f:  je     0841cc14 <+0x392>
0841cbd3 +0x351:  mov    -0x28(%ebp),%eax
0841cbd6 +0x354:  mov    %eax,(%esp)
0841cbd9 +0x357:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841cbde +0x35c:  test   %al,%al
0841cbe0 +0x35e:  je     0841cc14 <+0x392>
0841cbe2 +0x360:  lea    -0x4c(%ebp),%eax
0841cbe5 +0x363:  mov    %eax,0x8(%esp)
0841cbe9 +0x367:  movl   $0x0,0x4(%esp)
0841cbf1 +0x36f:  mov    -0x28(%ebp),%eax
0841cbf4 +0x372:  mov    %eax,(%esp)
0841cbf7 +0x375:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841cbfc +0x37a:  test   %al,%al
0841cbfe +0x37c:  je     0841cc14 <+0x392>
0841cc00 +0x37e:  mov    -0x4c(%ebp),%eax
0841cc03 +0x381:  test   %eax,%eax
0841cc05 +0x383:  jle    0841cc14 <+0x392>
0841cc07 +0x385:  mov    -0x20(%ebp),%eax
0841cc0a +0x388:  movl   $0x4d,0x3fb9(%eax)
0841cc14 +0x392:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0841cc19 +0x397:  lea    -0x48(%ebp),%edx
0841cc1c +0x39a:  mov    %edx,0x8(%esp)
0841cc20 +0x39e:  movl   $0x1,0x4(%esp)
0841cc28 +0x3a6:  mov    %eax,(%esp)
0841cc2b +0x3a9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0841cc30 +0x3ae:  mov    $0x1,%ebx
0841cc35 +0x3b3:  lea    -0x48(%ebp),%eax
0841cc38 +0x3b6:  mov    %eax,(%esp)
0841cc3b +0x3b9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841cc40 +0x3be:  jmp    0841cc5d <+0x3db>
0841cc42 +0x3c0:  mov    %edx,%ebx
0841cc44 +0x3c2:  mov    %eax,%esi
0841cc46 +0x3c4:  lea    -0x48(%ebp),%eax
0841cc49 +0x3c7:  mov    %eax,(%esp)
0841cc4c +0x3ca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841cc51 +0x3cf:  mov    %esi,%eax
0841cc53 +0x3d1:  mov    %ebx,%edx
0841cc55 +0x3d3:  mov    %eax,(%esp)
0841cc58 +0x3d6:  call   08ae3750 <_Unwind_Resume>
0841cc5d +0x3db:  mov    %ebx,%eax
0841cc5f +0x3dd:  add    $0x8c,%esp
0841cc65 +0x3e3:  pop    %ebx
0841cc66 +0x3e4:  pop    %esi
0841cc67 +0x3e5:  pop    %edi
0841cc68 +0x3e6:  pop    %ebp
0841cc69 +0x3e7:  ret
```

## 反编译 C

```c
// DB_MailBox_Req_CheckReceiver::dispatch @ 0x841c882

/* DB_MailBox_Req_CheckReceiver::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_MailBox_Req_CheckReceiver::dispatch
          (DB_MailBox_Req_CheckReceiver *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  byte bVar10;
  char local_8b;
  char local_8a [58];
  int local_50;
  CStreamGuard local_4c [8];
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  SIG_MAILBOX_CHECK_RECEIVER *local_34;
  MySQL *local_30;
  MySQL *local_2c;
  char *local_28;
  SIG_MAILBOX_CHECK_RECEIVER *local_24;
  uint local_20;
  
  bVar10 = 0;
  local_34 = Stream::GetOutBuffer<SIG_MAILBOX_CHECK_RECEIVER>(param_3);
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_30 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_28 = "seLect charac_no,lev,delete_flag,m_id from charac_info where charac_name=\'%s\'";
  pcVar6 = &local_8b;
  uVar7 = 0x3b;
  bVar9 = ((uint)pcVar6 & 1) != 0;
  if (bVar9) {
    local_8b = '\0';
    pcVar6 = local_8a;
    uVar7 = 0x3a;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar10 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar9) {
    *pcVar6 = '\0';
  }
  MySQL::escape_string(local_30,&local_8b,(char *)local_34);
  MySQL::set_query(local_30,local_28,&local_8b);
  cVar1 = MySQL::exec(local_30,true);
  if (cVar1 == '\x01') {
    local_20 = 0;
    while (uVar7 = MySQL::get_n_rows(local_30), local_20 < uVar7) {
      cVar1 = MySQL::fetch(local_30);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_int(local_30,0,&local_38);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_int(local_30,1,&local_3c);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_int(local_30,2,&local_40);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_uint(local_30,3,&local_44);
      if (cVar1 != '\x01') {
        return 0;
      }
      local_20 = local_20 + 1;
    }
    pSVar2 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x509a);
    CStreamGuard::CStreamGuard(local_4c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 0841caf1 to 0841cc2f has its CatchHandler @ 0841cc42 */
    CStreamGuard::operator<<(pCVar3,0x7e);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
    CStreamGuard::operator<<(pCVar3,param_2);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
    local_24 = CStreamGuard::GetInBuffer<SIG_MAILBOX_CHECK_RECEIVER>(pCVar3);
    *(int *)(local_24 + 0x1d) = local_38;
    *(int *)(local_24 + 0x21) = local_3c;
    *(int *)(local_24 + 0x25) = local_40;
    *(uint *)(local_24 + 0x29) = local_44;
    memcpy(local_24 + 0x31,local_34 + 0x31,0x3f88);
    uVar8 = *(undefined4 *)(local_34 + 0x2d);
    uVar4 = NumberToString(local_44,0);
    cVar1 = MySQL::set_query(local_2c,
                             "seLect count(*) from charac_black_list where m_id = %s and charac_no = %d"
                             ,uVar4,uVar8);
    if (cVar1 != '\0') {
      local_50 = 0;
      *(undefined4 *)(local_24 + 0x3fb9) = 0;
      cVar1 = MySQL::exec(local_2c,true);
      if ((((cVar1 != '\0') && (cVar1 = MySQL::fetch(local_2c), cVar1 != '\0')) &&
          (cVar1 = MySQL::get_int(local_2c,0,&local_50), cVar1 != '\0')) && (0 < local_50)) {
        *(undefined4 *)(local_24 + 0x3fb9) = 0x4d;
      }
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_4c);
    uVar8 = 1;
    CStreamGuard::~CStreamGuard(local_4c);
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}
```
