# dispatch

`_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream`

`ARAD::DISPATCHER::Arad_DB_kLoadServerState::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DB_kLoadServerState` | `0x08185d20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08185d20  _ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6Stream
#           ARAD::DISPATCHER::Arad_DB_kLoadServerState::dispatch(int, int, Stream*)
# range [0x08185d20, 0x081860f3]
08185d20 +0x000:  push   %ebp
08185d21 +0x001:  mov    %esp,%ebp
08185d23 +0x003:  push   %esi
08185d24 +0x004:  push   %ebx
08185d25 +0x005:  sub    $0x1d0,%esp
08185d2b +0x00b:  mov    0x14(%ebp),%eax
08185d2e +0x00e:  mov    %eax,(%esp)
08185d31 +0x011:  call   08187024 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x9ee>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x9ee
08185d36 +0x016:  mov    %eax,-0x14(%ebp)
08185d39 +0x019:  cmpl   $0x0,-0x14(%ebp)
08185d3d +0x01d:  jne    08185d75 <+0x55>
08185d3f +0x01f:  movl   $"SigServerState is null.",0x10(%esp)
08185d47 +0x027:  movl   $0x81e,0xc(%esp)
08185d4f +0x02f:  movl   $&_ZZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08185d57 +0x037:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
08185d5f +0x03f:  movl   $0x1,(%esp)
08185d66 +0x046:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08185d6b +0x04b:  mov    $0x0,%ebx
08185d70 +0x050:  jmp    081860e7 <+0x3c7>
08185d75 +0x055:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08185d7a +0x05a:  movl   $0x0,0x8(%esp)
08185d82 +0x062:  movl   $0x2,0x4(%esp)
08185d8a +0x06a:  mov    %eax,(%esp)
08185d8d +0x06d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08185d92 +0x072:  mov    %eax,-0x10(%ebp)
08185d95 +0x075:  cmpl   $0x0,-0x10(%ebp)
08185d99 +0x079:  jne    08185dc7 <+0xa7>
08185d9b +0x07b:  movl   $0x4,(%esp)
08185da2 +0x082:  call   08725800 <__cxa_allocate_exception>
08185da7 +0x087:  mov    %eax,%edx
08185da9 +0x089:  movl   $"handle null",(%edx)
08185daf +0x08f:  movl   $0x0,0x8(%esp)
08185db7 +0x097:  movl   $&_ZTIPKc,0x4(%esp)
08185dbf +0x09f:  mov    %eax,(%esp)
08185dc2 +0x0a2:  call   08724c50 <__cxa_throw>
08185dc7 +0x0a7:  movl   $" seLect category, code, state from server_state_info where end_time >= now()",0x4(%esp)
08185dcf +0x0af:  mov    -0x10(%ebp),%eax
08185dd2 +0x0b2:  mov    %eax,(%esp)
08185dd5 +0x0b5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08185dda +0x0ba:  xor    $0x1,%eax
08185ddd +0x0bd:  test   %al,%al
08185ddf +0x0bf:  je     08185e0d <+0xed>
08185de1 +0x0c1:  movl   $0x4,(%esp)
08185de8 +0x0c8:  call   08725800 <__cxa_allocate_exception>
08185ded +0x0cd:  mov    %eax,%edx
08185def +0x0cf:  movl   $"set_query",(%edx)
08185df5 +0x0d5:  movl   $0x0,0x8(%esp)
08185dfd +0x0dd:  movl   $&_ZTIPKc,0x4(%esp)
08185e05 +0x0e5:  mov    %eax,(%esp)
08185e08 +0x0e8:  call   08724c50 <__cxa_throw>
08185e0d +0x0ed:  movl   $0x1,0x4(%esp)
08185e15 +0x0f5:  mov    -0x10(%ebp),%eax
08185e18 +0x0f8:  mov    %eax,(%esp)
08185e1b +0x0fb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08185e20 +0x100:  xor    $0x1,%eax
08185e23 +0x103:  test   %al,%al
08185e25 +0x105:  je     08185e53 <+0x133>
08185e27 +0x107:  movl   $0x4,(%esp)
08185e2e +0x10e:  call   08725800 <__cxa_allocate_exception>
08185e33 +0x113:  mov    %eax,%edx
08185e35 +0x115:  movl   $"exec",(%edx)
08185e3b +0x11b:  movl   $0x0,0x8(%esp)
08185e43 +0x123:  movl   $&_ZTIPKc,0x4(%esp)
08185e4b +0x12b:  mov    %eax,(%esp)
08185e4e +0x12e:  call   08724c50 <__cxa_throw>
08185e53 +0x133:  lea    -0x1b1(%ebp),%eax
08185e59 +0x139:  mov    %eax,(%esp)
08185e5c +0x13c:  call   08186722 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0xec>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0xec
08185e61 +0x141:  jmp    08185faf <+0x28f>
08185e66 +0x146:  mov    -0x1b0(%ebp),%edx
08185e6c +0x14c:  lea    -0x1b1(%ebp),%ecx
08185e72 +0x152:  mov    %edx,%eax
08185e74 +0x154:  shl    $0x2,%eax
08185e77 +0x157:  add    %edx,%eax
08185e79 +0x159:  shl    $0x2,%eax
08185e7c +0x15c:  lea    (%ecx,%eax,1),%eax
08185e7f +0x15f:  add    $0x5,%eax
08185e82 +0x162:  mov    %eax,0x8(%esp)
08185e86 +0x166:  movl   $0x0,0x4(%esp)
08185e8e +0x16e:  mov    -0x10(%ebp),%eax
08185e91 +0x171:  mov    %eax,(%esp)
08185e94 +0x174:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08185e99 +0x179:  xor    $0x1,%eax
08185e9c +0x17c:  test   %al,%al
08185e9e +0x17e:  je     08185ecc <+0x1ac>
08185ea0 +0x180:  movl   $0x4,(%esp)
08185ea7 +0x187:  call   08725800 <__cxa_allocate_exception>
08185eac +0x18c:  mov    %eax,%edx
08185eae +0x18e:  movl   $"category",(%edx)
08185eb4 +0x194:  movl   $0x0,0x8(%esp)
08185ebc +0x19c:  movl   $&_ZTIPKc,0x4(%esp)
08185ec4 +0x1a4:  mov    %eax,(%esp)
08185ec7 +0x1a7:  call   08724c50 <__cxa_throw>
08185ecc +0x1ac:  mov    -0x1b0(%ebp),%edx
08185ed2 +0x1b2:  lea    -0x1b1(%ebp),%ecx
08185ed8 +0x1b8:  mov    %edx,%eax
08185eda +0x1ba:  shl    $0x2,%eax
08185edd +0x1bd:  add    %edx,%eax
08185edf +0x1bf:  shl    $0x2,%eax
08185ee2 +0x1c2:  lea    (%ecx,%eax,1),%eax
08185ee5 +0x1c5:  add    $0x9,%eax
08185ee8 +0x1c8:  mov    %eax,0x8(%esp)
08185eec +0x1cc:  movl   $0x1,0x4(%esp)
08185ef4 +0x1d4:  mov    -0x10(%ebp),%eax
08185ef7 +0x1d7:  mov    %eax,(%esp)
08185efa +0x1da:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08185eff +0x1df:  xor    $0x1,%eax
08185f02 +0x1e2:  test   %al,%al
08185f04 +0x1e4:  je     08185f32 <+0x212>
08185f06 +0x1e6:  movl   $0x4,(%esp)
08185f0d +0x1ed:  call   08725800 <__cxa_allocate_exception>
08185f12 +0x1f2:  mov    %eax,%edx
08185f14 +0x1f4:  movl   $"category",(%edx)
08185f1a +0x1fa:  movl   $0x0,0x8(%esp)
08185f22 +0x202:  movl   $&_ZTIPKc,0x4(%esp)
08185f2a +0x20a:  mov    %eax,(%esp)
08185f2d +0x20d:  call   08724c50 <__cxa_throw>
08185f32 +0x212:  mov    -0x1b0(%ebp),%edx
08185f38 +0x218:  lea    -0x1b1(%ebp),%ecx
08185f3e +0x21e:  mov    %edx,%eax
08185f40 +0x220:  shl    $0x2,%eax
08185f43 +0x223:  add    %edx,%eax
08185f45 +0x225:  shl    $0x2,%eax
08185f48 +0x228:  lea    (%ecx,%eax,1),%eax
08185f4b +0x22b:  add    $0xd,%eax
08185f4e +0x22e:  movl   $0xc,0xc(%esp)
08185f56 +0x236:  mov    %eax,0x8(%esp)
08185f5a +0x23a:  movl   $0x2,0x4(%esp)
08185f62 +0x242:  mov    -0x10(%ebp),%eax
08185f65 +0x245:  mov    %eax,(%esp)
08185f68 +0x248:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08185f6d +0x24d:  xor    $0x1,%eax
08185f70 +0x250:  test   %al,%al
08185f72 +0x252:  je     08185fa0 <+0x280>
08185f74 +0x254:  movl   $0x4,(%esp)
08185f7b +0x25b:  call   08725800 <__cxa_allocate_exception>
08185f80 +0x260:  mov    %eax,%edx
08185f82 +0x262:  movl   $"state",(%edx)
08185f88 +0x268:  movl   $0x0,0x8(%esp)
08185f90 +0x270:  movl   $&_ZTIPKc,0x4(%esp)
08185f98 +0x278:  mov    %eax,(%esp)
08185f9b +0x27b:  call   08724c50 <__cxa_throw>
08185fa0 +0x280:  mov    -0x1b0(%ebp),%eax
08185fa6 +0x286:  add    $0x1,%eax
08185fa9 +0x289:  mov    %eax,-0x1b0(%ebp)
08185faf +0x28f:  mov    -0x10(%ebp),%eax
08185fb2 +0x292:  mov    %eax,(%esp)
08185fb5 +0x295:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08185fba +0x29a:  test   %al,%al
08185fbc +0x29c:  jne    08185e66 <+0x146>
08185fc2 +0x2a2:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08185fc7 +0x2a7:  movl   $0x83f,0x8(%esp)
08185fcf +0x2af:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
08185fd7 +0x2b7:  mov    %eax,(%esp)
08185fda +0x2ba:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08185fdf +0x2bf:  movl   $0x1,0x8(%esp)
08185fe7 +0x2c7:  mov    %eax,0x4(%esp)
08185feb +0x2cb:  lea    -0x1c(%ebp),%eax
08185fee +0x2ce:  mov    %eax,(%esp)
08185ff1 +0x2d1:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08185ff6 +0x2d6:  movl   $0xffffffff,0x8(%esp)
08185ffe +0x2de:  movl   $0x29,0x4(%esp)
08186006 +0x2e6:  lea    -0x1c(%ebp),%eax
08186009 +0x2e9:  mov    %eax,(%esp)
0818600c +0x2ec:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
08186011 +0x2f1:  lea    -0x1c(%ebp),%eax
08186014 +0x2f4:  mov    %eax,(%esp)
08186017 +0x2f7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0818601c +0x2fc:  movl   $0x195,0x8(%esp)
08186024 +0x304:  lea    -0x1b1(%ebp),%edx
0818602a +0x30a:  mov    %edx,0x4(%esp)
0818602e +0x30e:  mov    %eax,(%esp)
08186031 +0x311:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08186036 +0x316:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0818603b +0x31b:  lea    -0x1c(%ebp),%edx
0818603e +0x31e:  mov    %edx,0x8(%esp)
08186042 +0x322:  movl   $0x1,0x4(%esp)
0818604a +0x32a:  mov    %eax,(%esp)
0818604d +0x32d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08186052 +0x332:  jmp    08186069 <+0x349>
08186054 +0x334:  mov    %edx,%ebx
08186056 +0x336:  mov    %eax,%esi
08186058 +0x338:  lea    -0x1c(%ebp),%eax
0818605b +0x33b:  mov    %eax,(%esp)
0818605e +0x33e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08186063 +0x343:  mov    %esi,%eax
08186065 +0x345:  mov    %ebx,%edx
08186067 +0x347:  jmp    08186076 <+0x356>
08186069 +0x349:  lea    -0x1c(%ebp),%eax
0818606c +0x34c:  mov    %eax,(%esp)
0818606f +0x34f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08186074 +0x354:  jmp    081860e2 <+0x3c2>
08186076 +0x356:  cmp    $0x1,%edx
08186079 +0x359:  je     08186083 <+0x363>
0818607b +0x35b:  mov    %eax,(%esp)
0818607e +0x35e:  call   08ae3750 <_Unwind_Resume>
08186083 +0x363:  mov    %eax,(%esp)
08186086 +0x366:  call   08725ce0 <__cxa_begin_catch>
0818608b +0x36b:  mov    %eax,-0xc(%ebp)
0818608e +0x36e:  mov    -0xc(%ebp),%eax
08186091 +0x371:  mov    %eax,0x14(%esp)
08186095 +0x375:  movl   $"[SigRewardEventItem] DB_DSP Error,  (error:%s)",0x10(%esp)
0818609d +0x37d:  movl   $0x846,0xc(%esp)
081860a5 +0x385:  movl   $&_ZZN4ARAD10DISPATCHER24Arad_DB_kLoadServerState8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
081860ad +0x38d:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
081860b5 +0x395:  movl   $0x1,(%esp)
081860bc +0x39c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081860c1 +0x3a1:  mov    $0x0,%ebx
081860c6 +0x3a6:  call   08725c30 <__cxa_end_catch>
081860cb +0x3ab:  jmp    081860e7 <+0x3c7>
081860cd +0x3ad:  mov    %edx,%ebx
081860cf +0x3af:  mov    %eax,%esi
081860d1 +0x3b1:  call   08725c30 <__cxa_end_catch>
081860d6 +0x3b6:  mov    %esi,%eax
081860d8 +0x3b8:  mov    %ebx,%edx
081860da +0x3ba:  mov    %eax,(%esp)
081860dd +0x3bd:  call   08ae3750 <_Unwind_Resume>
081860e2 +0x3c2:  mov    $0x1,%ebx
081860e7 +0x3c7:  mov    %ebx,%eax
081860e9 +0x3c9:  add    $0x1d0,%esp
081860ef +0x3cf:  pop    %ebx
081860f0 +0x3d0:  pop    %esi
081860f1 +0x3d1:  pop    %ebp
081860f2 +0x3d2:  ret
081860f3 +0x3d3:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DB_kLoadServerState::dispatch @ 0x8185d20

/* ARAD::DISPATCHER::Arad_DB_kLoadServerState::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kLoadServerState::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  Stream *pSVar3;
  CStreamGuard *this;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  SigServerState local_1b5;
  int local_1b4;
  int aiStack_1b0 [2];
  undefined1 auStack_1a8 [392];
  CStreamGuard local_20 [8];
  SigServerState *local_18;
  MySQL *local_14;
  
  local_18 = Stream::GetOutBuffer<arad::SigServerState>(in_stack_00000010);
  if (local_18 == (SigServerState *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kLoadServerState::dispatch(int, int, Stream*)"
               ,0x81e,"SigServerState is null.");
    uVar4 = 0;
  }
  else {
                    /* try { // try from 08185d8d to 08185fde has its CatchHandler @ 08186076 */
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    if (local_14 == (MySQL *)0x0) {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(local_14,
                             " seLect category, code, state from server_state_info where end_time >= now()"
                            );
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    arad::SigServerState::SigServerState(&local_1b5);
    while( true ) {
      cVar1 = MySQL::fetch(local_14);
      if (cVar1 == '\0') break;
      cVar1 = MySQL::get_int(local_14,0,aiStack_1b0 + local_1b4 * 5);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = "category";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&char_const*::typeinfo,0);
      }
      cVar1 = MySQL::get_int(local_14,1,aiStack_1b0 + local_1b4 * 5 + 1);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = "category";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&char_const*::typeinfo,0);
      }
      cVar1 = MySQL::get_binary(local_14,2,auStack_1a8 + local_1b4 * 0x14,0xc);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = "state";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&char_const*::typeinfo,0);
      }
      local_1b4 = local_1b4 + 1;
    }
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_DatabaseDispatcher.cpp",
                                 0x83f);
    CStreamGuard::CStreamGuard(local_20,pSVar3,true);
                    /* try { // try from 0818600c to 08186051 has its CatchHandler @ 08186054 */
    make_internal_stream_jpn(local_20,0x29,0xffffffff);
    this = (CStreamGuard *)CStreamGuard::operator->(local_20);
    CStreamGuard::put_binary(this,&local_1b5,0x195);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_20);
                    /* try { // try from 0818606f to 08186073 has its CatchHandler @ 08186076 */
    CStreamGuard::~CStreamGuard(local_20);
    uVar4 = 1;
  }
  return uVar4;
}
```
