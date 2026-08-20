# dispatch

`_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream`

`DB_LoadPrivateStore::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadPrivateStore` | `0x0841c08c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841c08c  _ZN19DB_LoadPrivateStore8dispatchEiiP6Stream
#           DB_LoadPrivateStore::dispatch(int, int, Stream*)
# range [0x0841c08c, 0x0841c427]
0841c08c +0x000:  push   %ebp
0841c08d +0x001:  mov    %esp,%ebp
0841c08f +0x003:  push   %esi
0841c090 +0x004:  push   %ebx
0841c091 +0x005:  sub    $0x70,%esp
0841c094 +0x008:  mov    0x8(%ebp),%eax
0841c097 +0x00b:  mov    0x14(%ebp),%edx
0841c09a +0x00e:  mov    %edx,0xc(%esp)
0841c09e +0x012:  mov    0x10(%ebp),%edx
0841c0a1 +0x015:  mov    %edx,0x8(%esp)
0841c0a5 +0x019:  mov    0xc(%ebp),%edx
0841c0a8 +0x01c:  mov    %edx,0x4(%esp)
0841c0ac +0x020:  mov    %eax,(%esp)
0841c0af +0x023:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
0841c0b4 +0x028:  xor    $0x1,%eax
0841c0b7 +0x02b:  test   %al,%al
0841c0b9 +0x02d:  je     0841c0c5 <+0x39>
0841c0bb +0x02f:  mov    $0x0,%ebx
0841c0c0 +0x034:  jmp    0841c41f <+0x393>
0841c0c5 +0x039:  lea    -0x58(%ebp),%eax
0841c0c8 +0x03c:  mov    %eax,0x4(%esp)
0841c0cc +0x040:  mov    0x14(%ebp),%eax
0841c0cf +0x043:  mov    %eax,(%esp)
0841c0d2 +0x046:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0841c0d7 +0x04b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841c0dc +0x050:  movl   $0x0,0x8(%esp)
0841c0e4 +0x058:  movl   $0x3,0x4(%esp)
0841c0ec +0x060:  mov    %eax,(%esp)
0841c0ef +0x063:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841c0f4 +0x068:  mov    %eax,-0x10(%ebp)
0841c0f7 +0x06b:  mov    -0x58(%ebp),%eax
0841c0fa +0x06e:  mov    %eax,0x8(%esp)
0841c0fe +0x072:  movl   $"seLect store, use_doll from store where charac_no=%d",0x4(%esp)
0841c106 +0x07a:  mov    -0x10(%ebp),%eax
0841c109 +0x07d:  mov    %eax,(%esp)
0841c10c +0x080:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841c111 +0x085:  movl   $0x1,0x4(%esp)
0841c119 +0x08d:  mov    -0x10(%ebp),%eax
0841c11c +0x090:  mov    %eax,(%esp)
0841c11f +0x093:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841c124 +0x098:  mov    %al,-0x11(%ebp)
0841c127 +0x09b:  movzbl -0x11(%ebp),%eax
0841c12b +0x09f:  xor    $0x1,%eax
0841c12e +0x0a2:  test   %al,%al
0841c130 +0x0a4:  je     0841c179 <+0xed>
0841c132 +0x0a6:  mov    -0x58(%ebp),%ebx
0841c135 +0x0a9:  movl   $0x5,0xc(%esp)
0841c13d +0x0b1:  movl   $0x4f8b,0x8(%esp)
0841c145 +0x0b9:  movl   $&_ZZN19DB_LoadPrivateStore8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841c14d +0x0c1:  lea    -0x54(%ebp),%eax
0841c150 +0x0c4:  mov    %eax,(%esp)
0841c153 +0x0c7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841c158 +0x0cc:  mov    %ebx,0x8(%esp)
0841c15c +0x0d0:  movl   $"DB_LoadPrivateStore::dispatch, exec ERROR charac_no=%d",0x4(%esp)
0841c164 +0x0d8:  lea    -0x54(%ebp),%eax
0841c167 +0x0db:  mov    %eax,(%esp)
0841c16a +0x0de:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841c16f +0x0e3:  mov    $0x0,%ebx
0841c174 +0x0e8:  jmp    0841c41f <+0x393>
0841c179 +0x0ed:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841c17e +0x0f2:  movl   $0x4f90,0x8(%esp)
0841c186 +0x0fa:  movl   $"DBThread.cpp",0x4(%esp)
0841c18e +0x102:  mov    %eax,(%esp)
0841c191 +0x105:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0841c196 +0x10a:  movl   $0x1,0x8(%esp)
0841c19e +0x112:  mov    %eax,0x4(%esp)
0841c1a2 +0x116:  lea    -0x60(%ebp),%eax
0841c1a5 +0x119:  mov    %eax,(%esp)
0841c1a8 +0x11c:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0841c1ad +0x121:  lea    -0x60(%ebp),%eax
0841c1b0 +0x124:  mov    %eax,(%esp)
0841c1b3 +0x127:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841c1b8 +0x12c:  mov    0xc(%ebp),%edx
0841c1bb +0x12f:  mov    %edx,0x4(%esp)
0841c1bf +0x133:  mov    %eax,(%esp)
0841c1c2 +0x136:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841c1c7 +0x13b:  lea    -0x60(%ebp),%eax
0841c1ca +0x13e:  mov    %eax,(%esp)
0841c1cd +0x141:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841c1d2 +0x146:  mov    0x10(%ebp),%edx
0841c1d5 +0x149:  mov    %edx,0x4(%esp)
0841c1d9 +0x14d:  mov    %eax,(%esp)
0841c1dc +0x150:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841c1e1 +0x155:  lea    -0x60(%ebp),%eax
0841c1e4 +0x158:  mov    %eax,(%esp)
0841c1e7 +0x15b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0841c1ec +0x160:  mov    %eax,(%esp)
0841c1ef +0x163:  call   0845139c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3fb2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3fb2
0841c1f4 +0x168:  mov    %eax,-0xc(%ebp)
0841c1f7 +0x16b:  movl   $0x434,0x8(%esp)
0841c1ff +0x173:  movl   $0x0,0x4(%esp)
0841c207 +0x17b:  mov    -0xc(%ebp),%eax
0841c20a +0x17e:  mov    %eax,(%esp)
0841c20d +0x181:  call   0807dcc0 <_init+0x5b8>
0841c212 +0x186:  mov    -0x58(%ebp),%edx
0841c215 +0x189:  mov    -0xc(%ebp),%eax
0841c218 +0x18c:  mov    %edx,(%eax)
0841c21a +0x18e:  mov    -0xc(%ebp),%eax
0841c21d +0x191:  movb   $0x0,0x4(%eax)
0841c221 +0x195:  mov    -0x10(%ebp),%eax
0841c224 +0x198:  mov    %eax,(%esp)
0841c227 +0x19b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841c22c +0x1a0:  test   %eax,%eax
0841c22e +0x1a2:  setne  %al
0841c231 +0x1a5:  test   %al,%al
0841c233 +0x1a7:  je     0841c3d6 <+0x34a>
0841c239 +0x1ad:  mov    -0x10(%ebp),%eax
0841c23c +0x1b0:  mov    %eax,(%esp)
0841c23f +0x1b3:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841c244 +0x1b8:  mov    %al,-0x11(%ebp)
0841c247 +0x1bb:  movzbl -0x11(%ebp),%eax
0841c24b +0x1bf:  xor    $0x1,%eax
0841c24e +0x1c2:  test   %al,%al
0841c250 +0x1c4:  je     0841c2ad <+0x221>
0841c252 +0x1c6:  mov    -0x58(%ebp),%ebx
0841c255 +0x1c9:  movl   $0x5,0xc(%esp)
0841c25d +0x1d1:  movl   $0x4fa0,0x8(%esp)
0841c265 +0x1d9:  movl   $&_ZZN19DB_LoadPrivateStore8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841c26d +0x1e1:  lea    -0x44(%ebp),%eax
0841c270 +0x1e4:  mov    %eax,(%esp)
0841c273 +0x1e7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841c278 +0x1ec:  mov    %ebx,0x8(%esp)
0841c27c +0x1f0:  movl   $"DB_LoadPrivateStore::dispatch, fetch ERROR charac_no=%d",0x4(%esp)
0841c284 +0x1f8:  lea    -0x44(%ebp),%eax
0841c287 +0x1fb:  mov    %eax,(%esp)
0841c28a +0x1fe:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841c28f +0x203:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841c294 +0x208:  lea    -0x60(%ebp),%edx
0841c297 +0x20b:  mov    %edx,0x4(%esp)
0841c29b +0x20f:  mov    %eax,(%esp)
0841c29e +0x212:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
0841c2a3 +0x217:  mov    $0x0,%ebx
0841c2a8 +0x21c:  jmp    0841c414 <+0x388>
0841c2ad +0x221:  mov    -0xc(%ebp),%eax
0841c2b0 +0x224:  add    $0x8,%eax
0841c2b3 +0x227:  movl   $0x428,0xc(%esp)
0841c2bb +0x22f:  mov    %eax,0x8(%esp)
0841c2bf +0x233:  movl   $0x0,0x4(%esp)
0841c2c7 +0x23b:  mov    -0x10(%ebp),%eax
0841c2ca +0x23e:  mov    %eax,(%esp)
0841c2cd +0x241:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0841c2d2 +0x246:  mov    %al,-0x11(%ebp)
0841c2d5 +0x249:  movzbl -0x11(%ebp),%eax
0841c2d9 +0x24d:  xor    $0x1,%eax
0841c2dc +0x250:  test   %al,%al
0841c2de +0x252:  je     0841c33b <+0x2af>
0841c2e0 +0x254:  mov    -0x58(%ebp),%ebx
0841c2e3 +0x257:  movl   $0x5,0xc(%esp)
0841c2eb +0x25f:  movl   $0x4fa8,0x8(%esp)
0841c2f3 +0x267:  movl   $&_ZZN19DB_LoadPrivateStore8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841c2fb +0x26f:  lea    -0x34(%ebp),%eax
0841c2fe +0x272:  mov    %eax,(%esp)
0841c301 +0x275:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841c306 +0x27a:  mov    %ebx,0x8(%esp)
0841c30a +0x27e:  movl   $"DB_LoadPrivateStore::GetUserInven, get_binary(2) ERROR charac_no=%d",0x4(%esp)
0841c312 +0x286:  lea    -0x34(%ebp),%eax
0841c315 +0x289:  mov    %eax,(%esp)
0841c318 +0x28c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841c31d +0x291:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841c322 +0x296:  lea    -0x60(%ebp),%edx
0841c325 +0x299:  mov    %edx,0x4(%esp)
0841c329 +0x29d:  mov    %eax,(%esp)
0841c32c +0x2a0:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
0841c331 +0x2a5:  mov    $0x0,%ebx
0841c336 +0x2aa:  jmp    0841c414 <+0x388>
0841c33b +0x2af:  mov    -0xc(%ebp),%eax
0841c33e +0x2b2:  movb   $0x1,0x4(%eax)
0841c342 +0x2b6:  movb   $0x0,-0x61(%ebp)
0841c346 +0x2ba:  lea    -0x61(%ebp),%eax
0841c349 +0x2bd:  mov    %eax,0x8(%esp)
0841c34d +0x2c1:  movl   $0x1,0x4(%esp)
0841c355 +0x2c9:  mov    -0x10(%ebp),%eax
0841c358 +0x2cc:  mov    %eax,(%esp)
0841c35b +0x2cf:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0841c360 +0x2d4:  mov    %al,-0x11(%ebp)
0841c363 +0x2d7:  movzbl -0x11(%ebp),%eax
0841c367 +0x2db:  xor    $0x1,%eax
0841c36a +0x2de:  test   %al,%al
0841c36c +0x2e0:  je     0841c3c6 <+0x33a>
0841c36e +0x2e2:  mov    -0x58(%ebp),%ebx
0841c371 +0x2e5:  movl   $0x5,0xc(%esp)
0841c379 +0x2ed:  movl   $0x4fb4,0x8(%esp)
0841c381 +0x2f5:  movl   $&_ZZN19DB_LoadPrivateStore8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841c389 +0x2fd:  lea    -0x24(%ebp),%eax
0841c38c +0x300:  mov    %eax,(%esp)
0841c38f +0x303:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841c394 +0x308:  mov    %ebx,0x8(%esp)
0841c398 +0x30c:  movl   $"DB_LoadPrivateStore::Get_Use_State, get_byte ERROR charac_no=%d",0x4(%esp)
0841c3a0 +0x314:  lea    -0x24(%ebp),%eax
0841c3a3 +0x317:  mov    %eax,(%esp)
0841c3a6 +0x31a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841c3ab +0x31f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841c3b0 +0x324:  lea    -0x60(%ebp),%edx
0841c3b3 +0x327:  mov    %edx,0x4(%esp)
0841c3b7 +0x32b:  mov    %eax,(%esp)
0841c3ba +0x32e:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
0841c3bf +0x333:  mov    $0x0,%ebx
0841c3c4 +0x338:  jmp    0841c414 <+0x388>
0841c3c6 +0x33a:  movzbl -0x61(%ebp),%eax
0841c3ca +0x33e:  movsbl %al,%edx
0841c3cd +0x341:  mov    -0xc(%ebp),%eax
0841c3d0 +0x344:  mov    %edx,0x430(%eax)
0841c3d6 +0x34a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0841c3db +0x34f:  lea    -0x60(%ebp),%edx
0841c3de +0x352:  mov    %edx,0x8(%esp)
0841c3e2 +0x356:  movl   $0x1,0x4(%esp)
0841c3ea +0x35e:  mov    %eax,(%esp)
0841c3ed +0x361:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0841c3f2 +0x366:  mov    $0x1,%ebx
0841c3f7 +0x36b:  jmp    0841c414 <+0x388>
0841c3f9 +0x36d:  mov    %edx,%ebx
0841c3fb +0x36f:  mov    %eax,%esi
0841c3fd +0x371:  lea    -0x60(%ebp),%eax
0841c400 +0x374:  mov    %eax,(%esp)
0841c403 +0x377:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841c408 +0x37c:  mov    %esi,%eax
0841c40a +0x37e:  mov    %ebx,%edx
0841c40c +0x380:  mov    %eax,(%esp)
0841c40f +0x383:  call   08ae3750 <_Unwind_Resume>
0841c414 +0x388:  lea    -0x60(%ebp),%eax
0841c417 +0x38b:  mov    %eax,(%esp)
0841c41a +0x38e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841c41f +0x393:  mov    %ebx,%eax
0841c421 +0x395:  add    $0x70,%esp
0841c424 +0x398:  pop    %ebx
0841c425 +0x399:  pop    %esi
0841c426 +0x39a:  pop    %ebp
0841c427 +0x39b:  ret
```

## 反编译 C

```c
// DB_LoadPrivateStore::dispatch @ 0x841c08c

/* DB_LoadPrivateStore::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadPrivateStore::dispatch(DB_LoadPrivateStore *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  char local_65;
  CStreamGuard local_64 [8];
  int local_5c;
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  MySQL *local_14;
  SIG_PRIVATE_STORE *local_10;
  
  pSVar2 = param_3;
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 != '\x01') {
    return 0;
  }
  Stream::operator>>(param_3,&local_5c);
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0,pSVar2);
  MySQL::set_query(local_14,"seLect store, use_doll from store where charac_no=%d",local_5c);
  local_15 = MySQL::exec(local_14,true);
  if (local_15 != '\x01') {
    cMyTrace::cMyTrace(local_58,"virtual bool DB_LoadPrivateStore::dispatch(int, int, Stream*)",
                       0x4f8b,5);
    cMyTrace::operator()(local_58,"DB_LoadPrivateStore::dispatch, exec ERROR charac_no=%d",local_5c)
    ;
    return 0;
  }
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x4f90);
  CStreamGuard::CStreamGuard(local_64,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_64);
                    /* try { // try from 0841c1c2 to 0841c3f1 has its CatchHandler @ 0841c3f9 */
  CStreamGuard::operator<<(pCVar3,param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_64);
  CStreamGuard::operator<<(pCVar3,param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_64);
  local_10 = CStreamGuard::GetInBuffer<private_store::SIG_PRIVATE_STORE>(pCVar3);
  memset(local_10,0,0x434);
  *(int *)local_10 = local_5c;
  local_10[4] = (SIG_PRIVATE_STORE)0x0;
  iVar4 = MySQL::get_n_rows(local_14);
  if (iVar4 != 0) {
    local_15 = MySQL::fetch(local_14);
    if (local_15 != '\x01') {
      cMyTrace::cMyTrace(local_48,"virtual bool DB_LoadPrivateStore::dispatch(int, int, Stream*)",
                         0x4fa0,5);
      cMyTrace::operator()
                (local_48,"DB_LoadPrivateStore::dispatch, fetch ERROR charac_no=%d",local_5c);
      StreamPool::Free(GlobalData::s_stream_pool,local_64);
      uVar5 = 0;
      goto LAB_0841c414;
    }
    local_15 = MySQL::get_binary(local_14,0,local_10 + 8,0x428);
    if (local_15 != '\x01') {
      cMyTrace::cMyTrace(local_38,"virtual bool DB_LoadPrivateStore::dispatch(int, int, Stream*)",
                         0x4fa8,5);
      cMyTrace::operator()
                (local_38,"DB_LoadPrivateStore::GetUserInven, get_binary(2) ERROR charac_no=%d",
                 local_5c);
      StreamPool::Free(GlobalData::s_stream_pool,local_64);
      uVar5 = 0;
      goto LAB_0841c414;
    }
    local_10[4] = (SIG_PRIVATE_STORE)0x1;
    local_65 = '\0';
    local_15 = MySQL::get_byte(local_14,1,&local_65);
    if (local_15 != '\x01') {
      cMyTrace::cMyTrace(local_28,"virtual bool DB_LoadPrivateStore::dispatch(int, int, Stream*)",
                         0x4fb4,5);
      cMyTrace::operator()
                (local_28,"DB_LoadPrivateStore::Get_Use_State, get_byte ERROR charac_no=%d",local_5c
                );
      StreamPool::Free(GlobalData::s_stream_pool,local_64);
      uVar5 = 0;
      goto LAB_0841c414;
    }
    *(int *)(local_10 + 0x430) = (int)local_65;
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_64);
  uVar5 = 1;
LAB_0841c414:
  CStreamGuard::~CStreamGuard(local_64);
  return uVar5;
}
```
