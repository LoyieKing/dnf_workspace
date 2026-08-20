# dispatch

`_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream`

`DB_LoadCleanPadPoint::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadCleanPadPoint` | `0x0842ecf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842ecf4  _ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream
#           DB_LoadCleanPadPoint::dispatch(int, int, Stream*)
# range [0x0842ecf4, 0x0842ef9f]
0842ecf4 +0x000:  push   %ebp
0842ecf5 +0x001:  mov    %esp,%ebp
0842ecf7 +0x003:  push   %esi
0842ecf8 +0x004:  push   %ebx
0842ecf9 +0x005:  sub    $0x50,%esp
0842ecfc +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842ed01 +0x00d:  movl   $0x0,0x8(%esp)
0842ed09 +0x015:  movl   $0x6,0x4(%esp)
0842ed11 +0x01d:  mov    %eax,(%esp)
0842ed14 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842ed19 +0x025:  mov    %eax,-0x14(%ebp)
0842ed1c +0x028:  movl   $"seLect hack_type,value from hack_cleanpad_ratio_info",0x4(%esp)
0842ed24 +0x030:  mov    -0x14(%ebp),%eax
0842ed27 +0x033:  mov    %eax,(%esp)
0842ed2a +0x036:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842ed2f +0x03b:  movl   $0x1,0x4(%esp)
0842ed37 +0x043:  mov    -0x14(%ebp),%eax
0842ed3a +0x046:  mov    %eax,(%esp)
0842ed3d +0x049:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842ed42 +0x04e:  xor    $0x1,%eax
0842ed45 +0x051:  test   %al,%al
0842ed47 +0x053:  je     0842ed7f <+0x8b>
0842ed49 +0x055:  movl   $"[QUERY_ERROR] select hack_cleanpad_ratio_info",0x10(%esp)
0842ed51 +0x05d:  movl   $0x73b0,0xc(%esp)
0842ed59 +0x065:  movl   $&_ZZN20DB_LoadCleanPadPoint8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0842ed61 +0x06d:  movl   $"DBThread.cpp",0x4(%esp)
0842ed69 +0x075:  movl   $0x1,(%esp)
0842ed70 +0x07c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0842ed75 +0x081:  mov    $0x0,%ebx
0842ed7a +0x086:  jmp    0842ef97 <+0x2a3>
0842ed7f +0x08b:  mov    -0x14(%ebp),%eax
0842ed82 +0x08e:  mov    %eax,(%esp)
0842ed85 +0x091:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842ed8a +0x096:  test   %eax,%eax
0842ed8c +0x098:  sete   %al
0842ed8f +0x09b:  test   %al,%al
0842ed91 +0x09d:  je     0842edd3 <+0xdf>
0842ed93 +0x09f:  movl   $0x0,0xc(%esp)
0842ed9b +0x0a7:  movl   $0x73b6,0x8(%esp)
0842eda3 +0x0af:  movl   $&_ZZN20DB_LoadCleanPadPoint8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0842edab +0x0b7:  lea    -0x24(%ebp),%eax
0842edae +0x0ba:  mov    %eax,(%esp)
0842edb1 +0x0bd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0842edb6 +0x0c2:  movl   $"[QUERY_NOTICE] have no data hack_cleanpad_ratio_info",0x4(%esp)
0842edbe +0x0ca:  lea    -0x24(%ebp),%eax
0842edc1 +0x0cd:  mov    %eax,(%esp)
0842edc4 +0x0d0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0842edc9 +0x0d5:  mov    $0x1,%ebx
0842edce +0x0da:  jmp    0842ef97 <+0x2a3>
0842edd3 +0x0df:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842edd8 +0x0e4:  movl   $0x73be,0x8(%esp)
0842ede0 +0x0ec:  movl   $"DBThread.cpp",0x4(%esp)
0842ede8 +0x0f4:  mov    %eax,(%esp)
0842edeb +0x0f7:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842edf0 +0x0fc:  movl   $0x1,0x8(%esp)
0842edf8 +0x104:  mov    %eax,0x4(%esp)
0842edfc +0x108:  lea    -0x2c(%ebp),%eax
0842edff +0x10b:  mov    %eax,(%esp)
0842ee02 +0x10e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842ee07 +0x113:  lea    -0x2c(%ebp),%eax
0842ee0a +0x116:  mov    %eax,(%esp)
0842ee0d +0x119:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ee12 +0x11e:  movl   $0x127,0x4(%esp)
0842ee1a +0x126:  mov    %eax,(%esp)
0842ee1d +0x129:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842ee22 +0x12e:  lea    -0x2c(%ebp),%eax
0842ee25 +0x131:  mov    %eax,(%esp)
0842ee28 +0x134:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ee2d +0x139:  movl   $0xffffffff,0x4(%esp)
0842ee35 +0x141:  mov    %eax,(%esp)
0842ee38 +0x144:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842ee3d +0x149:  lea    -0x2c(%ebp),%eax
0842ee40 +0x14c:  mov    %eax,(%esp)
0842ee43 +0x14f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842ee48 +0x154:  mov    %eax,(%esp)
0842ee4b +0x157:  call   08452a04 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x561a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x561a
0842ee50 +0x15c:  mov    %eax,-0x10(%ebp)
0842ee53 +0x15f:  mov    -0x10(%ebp),%eax
0842ee56 +0x162:  movl   $0x3cf0,0x8(%esp)
0842ee5e +0x16a:  movl   $0x0,0x4(%esp)
0842ee66 +0x172:  mov    %eax,(%esp)
0842ee69 +0x175:  call   0807dcc0 <_init+0x5b8>
0842ee6e +0x17a:  movl   $0x0,-0xc(%ebp)
0842ee75 +0x181:  jmp    0842ef35 <+0x241>
0842ee7a +0x186:  movl   $0x0,-0x30(%ebp)
0842ee81 +0x18d:  movl   $0x0,-0x34(%ebp)
0842ee88 +0x194:  mov    -0x14(%ebp),%eax
0842ee8b +0x197:  mov    %eax,(%esp)
0842ee8e +0x19a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0842ee93 +0x19f:  xor    $0x1,%eax
0842ee96 +0x1a2:  test   %al,%al
0842ee98 +0x1a4:  jne    0842eedc <+0x1e8>
0842ee9a +0x1a6:  lea    -0x30(%ebp),%eax
0842ee9d +0x1a9:  mov    %eax,0x8(%esp)
0842eea1 +0x1ad:  movl   $0x0,0x4(%esp)
0842eea9 +0x1b5:  mov    -0x14(%ebp),%eax
0842eeac +0x1b8:  mov    %eax,(%esp)
0842eeaf +0x1bb:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0842eeb4 +0x1c0:  xor    $0x1,%eax
0842eeb7 +0x1c3:  test   %al,%al
0842eeb9 +0x1c5:  jne    0842eedc <+0x1e8>
0842eebb +0x1c7:  lea    -0x34(%ebp),%eax
0842eebe +0x1ca:  mov    %eax,0x8(%esp)
0842eec2 +0x1ce:  movl   $0x1,0x4(%esp)
0842eeca +0x1d6:  mov    -0x14(%ebp),%eax
0842eecd +0x1d9:  mov    %eax,(%esp)
0842eed0 +0x1dc:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0842eed5 +0x1e1:  xor    $0x1,%eax
0842eed8 +0x1e4:  test   %al,%al
0842eeda +0x1e6:  je     0842eee3 <+0x1ef>
0842eedc +0x1e8:  mov    $0x1,%eax
0842eee1 +0x1ed:  jmp    0842eee8 <+0x1f4>
0842eee3 +0x1ef:  mov    $0x0,%eax
0842eee8 +0x1f4:  test   %al,%al
0842eeea +0x1f6:  je     0842ef0a <+0x216>
0842eeec +0x1f8:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842eef1 +0x1fd:  lea    -0x2c(%ebp),%edx
0842eef4 +0x200:  mov    %edx,0x4(%esp)
0842eef8 +0x204:  mov    %eax,(%esp)
0842eefb +0x207:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
0842ef00 +0x20c:  mov    $0x0,%ebx
0842ef05 +0x211:  jmp    0842ef8c <+0x298>
0842ef0a +0x216:  mov    -0x30(%ebp),%eax
0842ef0d +0x219:  cmp    $0x64,%eax
0842ef10 +0x21c:  jle    0842ef2d <+0x239>
0842ef12 +0x21e:  mov    -0x30(%ebp),%eax
0842ef15 +0x221:  cmp    $0xfa0,%eax
0842ef1a +0x226:  jg     0842ef30 <+0x23c>
0842ef1c +0x228:  mov    -0x30(%ebp),%eax
0842ef1f +0x22b:  lea    -0x65(%eax),%ecx
0842ef22 +0x22e:  mov    -0x34(%ebp),%edx
0842ef25 +0x231:  mov    -0x10(%ebp),%eax
0842ef28 +0x234:  mov    %edx,(%eax,%ecx,4)
0842ef2b +0x237:  jmp    0842ef31 <+0x23d>
0842ef2d +0x239:  nop
0842ef2e +0x23a:  jmp    0842ef31 <+0x23d>
0842ef30 +0x23c:  nop
0842ef31 +0x23d:  addl   $0x1,-0xc(%ebp)
0842ef35 +0x241:  mov    -0x14(%ebp),%eax
0842ef38 +0x244:  mov    %eax,(%esp)
0842ef3b +0x247:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842ef40 +0x24c:  cmp    -0xc(%ebp),%eax
0842ef43 +0x24f:  seta   %al
0842ef46 +0x252:  test   %al,%al
0842ef48 +0x254:  jne    0842ee7a <+0x186>
0842ef4e +0x25a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842ef53 +0x25f:  lea    -0x2c(%ebp),%edx
0842ef56 +0x262:  mov    %edx,0x8(%esp)
0842ef5a +0x266:  movl   $0x1,0x4(%esp)
0842ef62 +0x26e:  mov    %eax,(%esp)
0842ef65 +0x271:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842ef6a +0x276:  mov    $0x1,%ebx
0842ef6f +0x27b:  jmp    0842ef8c <+0x298>
0842ef71 +0x27d:  mov    %edx,%ebx
0842ef73 +0x27f:  mov    %eax,%esi
0842ef75 +0x281:  lea    -0x2c(%ebp),%eax
0842ef78 +0x284:  mov    %eax,(%esp)
0842ef7b +0x287:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842ef80 +0x28c:  mov    %esi,%eax
0842ef82 +0x28e:  mov    %ebx,%edx
0842ef84 +0x290:  mov    %eax,(%esp)
0842ef87 +0x293:  call   08ae3750 <_Unwind_Resume>
0842ef8c +0x298:  lea    -0x2c(%ebp),%eax
0842ef8f +0x29b:  mov    %eax,(%esp)
0842ef92 +0x29e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842ef97 +0x2a3:  mov    %ebx,%eax
0842ef99 +0x2a5:  add    $0x50,%esp
0842ef9c +0x2a8:  pop    %ebx
0842ef9d +0x2a9:  pop    %esi
0842ef9e +0x2aa:  pop    %ebp
0842ef9f +0x2ab:  ret
```

## 反编译 C

```c
// DB_LoadCleanPadPoint::dispatch @ 0x842ecf4

/* DB_LoadCleanPadPoint::dispatch(int, int, Stream*) */

undefined4 DB_LoadCleanPadPoint::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_38;
  int local_34;
  CStreamGuard local_30 [8];
  cMyTrace local_28 [16];
  MySQL *local_18;
  SIG_LOAD_CLEANPAD_POINT *local_14;
  uint local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  MySQL::set_query(local_18,"seLect hack_type,value from hack_cleanpad_ratio_info");
  cVar2 = MySQL::exec(local_18,true);
  if (cVar2 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_18);
    if (iVar3 == 0) {
      cMyTrace::cMyTrace(local_28,"virtual bool DB_LoadCleanPadPoint::dispatch(int, int, Stream*)",
                         0x73b6,0);
      cMyTrace::operator()(local_28,"[QUERY_NOTICE] have no data hack_cleanpad_ratio_info");
      uVar7 = 1;
    }
    else {
      pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x73be);
      CStreamGuard::CStreamGuard(local_30,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 0842ee1d to 0842ef69 has its CatchHandler @ 0842ef71 */
      CStreamGuard::operator<<(pCVar5,0x127);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_30);
      CStreamGuard::operator<<(pCVar5,-1);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_30);
      local_14 = CStreamGuard::GetInBuffer<SIG_LOAD_CLEANPAD_POINT>(pCVar5);
      memset(local_14,0,0x3cf0);
      local_10 = 0;
      while (uVar6 = MySQL::get_n_rows(local_18), local_10 < uVar6) {
        local_34 = 0;
        local_38 = 0;
        cVar2 = MySQL::fetch(local_18);
        if (((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_18,0,&local_34), cVar2 == '\x01'))
           && (cVar2 = MySQL::get_int(local_18,1,&local_38), cVar2 == '\x01')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          StreamPool::Free(GlobalData::s_stream_pool,local_30);
          uVar7 = 0;
          goto LAB_0842ef8c;
        }
        if ((100 < local_34) && (local_34 < 0xfa1)) {
          *(int *)(local_14 + (local_34 + -0x65) * 4) = local_38;
        }
        local_10 = local_10 + 1;
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_30);
      uVar7 = 1;
LAB_0842ef8c:
      CStreamGuard::~CStreamGuard(local_30);
    }
  }
  else {
    LogManager::logFormat
              (1,"DBThread.cpp","virtual bool DB_LoadCleanPadPoint::dispatch(int, int, Stream*)",
               0x73b0,"[QUERY_ERROR] select hack_cleanpad_ratio_info");
    uVar7 = 0;
  }
  return uVar7;
}
```
