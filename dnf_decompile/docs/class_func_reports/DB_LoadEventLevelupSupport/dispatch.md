# dispatch

`_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream`

`DB_LoadEventLevelupSupport::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEventLevelupSupport` | `0x0844cd38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844cd38  _ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream
#           DB_LoadEventLevelupSupport::dispatch(int, int, Stream*)
# range [0x0844cd38, 0x0844d0a5]
0844cd38 +0x000:  push   %ebp
0844cd39 +0x001:  mov    %esp,%ebp
0844cd3b +0x003:  push   %esi
0844cd3c +0x004:  push   %ebx
0844cd3d +0x005:  sub    $0x60,%esp
0844cd40 +0x008:  movl   $0x0,-0x40(%ebp)
0844cd47 +0x00f:  lea    -0x40(%ebp),%eax
0844cd4a +0x012:  mov    %eax,0x4(%esp)
0844cd4e +0x016:  mov    0x14(%ebp),%eax
0844cd51 +0x019:  mov    %eax,(%esp)
0844cd54 +0x01c:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0844cd59 +0x021:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844cd5e +0x026:  movl   $0x0,0x8(%esp)
0844cd66 +0x02e:  movl   $0x2,0x4(%esp)
0844cd6e +0x036:  mov    %eax,(%esp)
0844cd71 +0x039:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844cd76 +0x03e:  mov    %eax,-0x1c(%ebp)
0844cd79 +0x041:  cmpl   $0x0,-0x1c(%ebp)
0844cd7d +0x045:  jne    0844cdc7 <+0x8f>
0844cd7f +0x047:  movl   $0x5,0xc(%esp)
0844cd87 +0x04f:  movl   $0xc26d,0x8(%esp)
0844cd8f +0x057:  movl   $&_ZZN26DB_LoadEventLevelupSupport8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0844cd97 +0x05f:  lea    -0x3c(%ebp),%eax
0844cd9a +0x062:  mov    %eax,(%esp)
0844cd9d +0x065:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844cda2 +0x06a:  movl   $0x2,0x8(%esp)
0844cdaa +0x072:  movl   $"[ERROR] Database Handle is NULL [index:%d]",0x4(%esp)
0844cdb2 +0x07a:  lea    -0x3c(%ebp),%eax
0844cdb5 +0x07d:  mov    %eax,(%esp)
0844cdb8 +0x080:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844cdbd +0x085:  mov    $0x0,%ebx
0844cdc2 +0x08a:  jmp    0844d09c <+0x364>
0844cdc7 +0x08f:  mov    -0x40(%ebp),%eax
0844cdca +0x092:  mov    %eax,0x8(%esp)
0844cdce +0x096:  movl   $"seLect level, state from event_levelup_support where charac_no=%d",0x4(%esp)
0844cdd6 +0x09e:  mov    -0x1c(%ebp),%eax
0844cdd9 +0x0a1:  mov    %eax,(%esp)
0844cddc +0x0a4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844cde1 +0x0a9:  movl   $0x1,0x4(%esp)
0844cde9 +0x0b1:  mov    -0x1c(%ebp),%eax
0844cdec +0x0b4:  mov    %eax,(%esp)
0844cdef +0x0b7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844cdf4 +0x0bc:  xor    $0x1,%eax
0844cdf7 +0x0bf:  test   %al,%al
0844cdf9 +0x0c1:  je     0844ce27 <+0xef>
0844cdfb +0x0c3:  movl   $0x4,(%esp)
0844ce02 +0x0ca:  call   08725800 <__cxa_allocate_exception>
0844ce07 +0x0cf:  mov    %eax,%edx
0844ce09 +0x0d1:  movl   $0xc277,(%edx)
0844ce0f +0x0d7:  movl   $0x0,0x8(%esp)
0844ce17 +0x0df:  movl   $&_ZTIi,0x4(%esp)
0844ce1f +0x0e7:  mov    %eax,(%esp)
0844ce22 +0x0ea:  call   08724c50 <__cxa_throw>
0844ce27 +0x0ef:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844ce2c +0x0f4:  movl   $0xc279,0x8(%esp)
0844ce34 +0x0fc:  movl   $"DBThread.cpp",0x4(%esp)
0844ce3c +0x104:  mov    %eax,(%esp)
0844ce3f +0x107:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844ce44 +0x10c:  movl   $0x1,0x8(%esp)
0844ce4c +0x114:  mov    %eax,0x4(%esp)
0844ce50 +0x118:  lea    -0x48(%ebp),%eax
0844ce53 +0x11b:  mov    %eax,(%esp)
0844ce56 +0x11e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844ce5b +0x123:  lea    -0x48(%ebp),%eax
0844ce5e +0x126:  mov    %eax,(%esp)
0844ce61 +0x129:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844ce66 +0x12e:  movl   $0x350,0x4(%esp)
0844ce6e +0x136:  mov    %eax,(%esp)
0844ce71 +0x139:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844ce76 +0x13e:  lea    -0x48(%ebp),%eax
0844ce79 +0x141:  mov    %eax,(%esp)
0844ce7c +0x144:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844ce81 +0x149:  mov    0x10(%ebp),%edx
0844ce84 +0x14c:  mov    %edx,0x4(%esp)
0844ce88 +0x150:  mov    %eax,(%esp)
0844ce8b +0x153:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844ce90 +0x158:  lea    -0x48(%ebp),%eax
0844ce93 +0x15b:  mov    %eax,(%esp)
0844ce96 +0x15e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0844ce9b +0x163:  mov    %eax,(%esp)
0844ce9e +0x166:  call   08454a30 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7646>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x7646
0844cea3 +0x16b:  mov    %eax,-0x18(%ebp)
0844cea6 +0x16e:  mov    -0x1c(%ebp),%eax
0844cea9 +0x171:  mov    %eax,(%esp)
0844ceac +0x174:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844ceb1 +0x179:  mov    %eax,-0x14(%ebp)
0844ceb4 +0x17c:  mov    -0x18(%ebp),%eax
0844ceb7 +0x17f:  mov    -0x14(%ebp),%edx
0844ceba +0x182:  mov    %edx,(%eax)
0844cebc +0x184:  movw   $0x0,-0x4a(%ebp)
0844cec2 +0x18a:  movw   $0x0,-0x4c(%ebp)
0844cec8 +0x190:  movl   $0x0,-0x10(%ebp)
0844cecf +0x197:  jmp    0844cfce <+0x296>
0844ced4 +0x19c:  mov    -0x1c(%ebp),%eax
0844ced7 +0x19f:  mov    %eax,(%esp)
0844ceda +0x1a2:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0844cedf +0x1a7:  xor    $0x1,%eax
0844cee2 +0x1aa:  test   %al,%al
0844cee4 +0x1ac:  je     0844cf12 <+0x1da>
0844cee6 +0x1ae:  movl   $0x4,(%esp)
0844ceed +0x1b5:  call   08725800 <__cxa_allocate_exception>
0844cef2 +0x1ba:  mov    %eax,%edx
0844cef4 +0x1bc:  movl   $0xc28c,(%edx)
0844cefa +0x1c2:  movl   $0x0,0x8(%esp)
0844cf02 +0x1ca:  movl   $&_ZTIi,0x4(%esp)
0844cf0a +0x1d2:  mov    %eax,(%esp)
0844cf0d +0x1d5:  call   08724c50 <__cxa_throw>
0844cf12 +0x1da:  lea    -0x4a(%ebp),%eax
0844cf15 +0x1dd:  mov    %eax,0x8(%esp)
0844cf19 +0x1e1:  movl   $0x0,0x4(%esp)
0844cf21 +0x1e9:  mov    -0x1c(%ebp),%eax
0844cf24 +0x1ec:  mov    %eax,(%esp)
0844cf27 +0x1ef:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0844cf2c +0x1f4:  xor    $0x1,%eax
0844cf2f +0x1f7:  test   %al,%al
0844cf31 +0x1f9:  je     0844cf5f <+0x227>
0844cf33 +0x1fb:  movl   $0x4,(%esp)
0844cf3a +0x202:  call   08725800 <__cxa_allocate_exception>
0844cf3f +0x207:  mov    %eax,%edx
0844cf41 +0x209:  movl   $0xc28d,(%edx)
0844cf47 +0x20f:  movl   $0x0,0x8(%esp)
0844cf4f +0x217:  movl   $&_ZTIi,0x4(%esp)
0844cf57 +0x21f:  mov    %eax,(%esp)
0844cf5a +0x222:  call   08724c50 <__cxa_throw>
0844cf5f +0x227:  lea    -0x4c(%ebp),%eax
0844cf62 +0x22a:  mov    %eax,0x8(%esp)
0844cf66 +0x22e:  movl   $0x1,0x4(%esp)
0844cf6e +0x236:  mov    -0x1c(%ebp),%eax
0844cf71 +0x239:  mov    %eax,(%esp)
0844cf74 +0x23c:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0844cf79 +0x241:  xor    $0x1,%eax
0844cf7c +0x244:  test   %al,%al
0844cf7e +0x246:  je     0844cfac <+0x274>
0844cf80 +0x248:  movl   $0x4,(%esp)
0844cf87 +0x24f:  call   08725800 <__cxa_allocate_exception>
0844cf8c +0x254:  mov    %eax,%edx
0844cf8e +0x256:  movl   $0xc28e,(%edx)
0844cf94 +0x25c:  movl   $0x0,0x8(%esp)
0844cf9c +0x264:  movl   $&_ZTIi,0x4(%esp)
0844cfa4 +0x26c:  mov    %eax,(%esp)
0844cfa7 +0x26f:  call   08724c50 <__cxa_throw>
0844cfac +0x274:  mov    -0x10(%ebp),%edx
0844cfaf +0x277:  movzwl -0x4a(%ebp),%ecx
0844cfb3 +0x27b:  mov    -0x18(%ebp),%eax
0844cfb6 +0x27e:  mov    %cx,0x4(%eax,%edx,4)
0844cfbb +0x283:  mov    -0x10(%ebp),%edx
0844cfbe +0x286:  movzwl -0x4c(%ebp),%ecx
0844cfc2 +0x28a:  mov    -0x18(%ebp),%eax
0844cfc5 +0x28d:  mov    %cx,0x6(%eax,%edx,4)
0844cfca +0x292:  addl   $0x1,-0x10(%ebp)
0844cfce +0x296:  mov    -0x10(%ebp),%eax
0844cfd1 +0x299:  cmp    -0x14(%ebp),%eax
0844cfd4 +0x29c:  setl   %al
0844cfd7 +0x29f:  test   %al,%al
0844cfd9 +0x2a1:  jne    0844ced4 <+0x19c>
0844cfdf +0x2a7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844cfe4 +0x2ac:  lea    -0x48(%ebp),%edx
0844cfe7 +0x2af:  mov    %edx,0x8(%esp)
0844cfeb +0x2b3:  movl   $0x1,0x4(%esp)
0844cff3 +0x2bb:  mov    %eax,(%esp)
0844cff6 +0x2be:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844cffb +0x2c3:  jmp    0844d012 <+0x2da>
0844cffd +0x2c5:  mov    %edx,%ebx
0844cfff +0x2c7:  mov    %eax,%esi
0844d001 +0x2c9:  lea    -0x48(%ebp),%eax
0844d004 +0x2cc:  mov    %eax,(%esp)
0844d007 +0x2cf:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844d00c +0x2d4:  mov    %esi,%eax
0844d00e +0x2d6:  mov    %ebx,%edx
0844d010 +0x2d8:  jmp    0844d01f <+0x2e7>
0844d012 +0x2da:  lea    -0x48(%ebp),%eax
0844d015 +0x2dd:  mov    %eax,(%esp)
0844d018 +0x2e0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844d01d +0x2e5:  jmp    0844d097 <+0x35f>
0844d01f +0x2e7:  cmp    $0x1,%edx
0844d022 +0x2ea:  je     0844d02c <+0x2f4>
0844d024 +0x2ec:  mov    %eax,(%esp)
0844d027 +0x2ef:  call   08ae3750 <_Unwind_Resume>
0844d02c +0x2f4:  mov    %eax,(%esp)
0844d02f +0x2f7:  call   08725ce0 <__cxa_begin_catch>
0844d034 +0x2fc:  mov    (%eax),%eax
0844d036 +0x2fe:  mov    %eax,-0xc(%ebp)
0844d039 +0x301:  movl   $0x5,0xc(%esp)
0844d041 +0x309:  movl   $0xc297,0x8(%esp)
0844d049 +0x311:  movl   $&_ZZN26DB_LoadEventLevelupSupport8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0844d051 +0x319:  lea    -0x2c(%ebp),%eax
0844d054 +0x31c:  mov    %eax,(%esp)
0844d057 +0x31f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844d05c +0x324:  mov    -0xc(%ebp),%eax
0844d05f +0x327:  mov    %eax,0x8(%esp)
0844d063 +0x32b:  movl   $"[ERROR] DB_LoadEventLevelupSupport. [line:%d]",0x4(%esp)
0844d06b +0x333:  lea    -0x2c(%ebp),%eax
0844d06e +0x336:  mov    %eax,(%esp)
0844d071 +0x339:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844d076 +0x33e:  mov    $0x0,%ebx
0844d07b +0x343:  call   08725c30 <__cxa_end_catch>
0844d080 +0x348:  jmp    0844d09c <+0x364>
0844d082 +0x34a:  mov    %edx,%ebx
0844d084 +0x34c:  mov    %eax,%esi
0844d086 +0x34e:  call   08725c30 <__cxa_end_catch>
0844d08b +0x353:  mov    %esi,%eax
0844d08d +0x355:  mov    %ebx,%edx
0844d08f +0x357:  mov    %eax,(%esp)
0844d092 +0x35a:  call   08ae3750 <_Unwind_Resume>
0844d097 +0x35f:  mov    $0x1,%ebx
0844d09c +0x364:  mov    %ebx,%eax
0844d09e +0x366:  add    $0x60,%esp
0844d0a1 +0x369:  pop    %ebx
0844d0a2 +0x36a:  pop    %esi
0844d0a3 +0x36b:  pop    %ebp
0844d0a4 +0x36c:  ret
0844d0a5 +0x36d:  nop
```

## 反编译 C

```c
// DB_LoadEventLevelupSupport::dispatch @ 0x844cd38

/* DB_LoadEventLevelupSupport::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadEventLevelupSupport::dispatch
          (DB_LoadEventLevelupSupport *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  ushort local_50;
  ushort local_4e;
  CStreamGuard local_4c [8];
  int local_44;
  cMyTrace local_40 [32];
  MySQL *local_20;
  SIG_EVENT_LEVEUP_SUPPORT_INFO *local_1c;
  int local_18;
  int local_14;
  
  local_44 = 0;
  Stream::operator>>(param_3,&local_44);
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (local_20 == (MySQL *)0x0) {
    cMyTrace::cMyTrace(local_40,
                       "virtual bool DB_LoadEventLevelupSupport::dispatch(int, int, Stream*)",0xc26d
                       ,5);
    cMyTrace::operator()(local_40,"[ERROR] Database Handle is NULL [index:%d]",2);
    uVar5 = 0;
  }
  else {
    MySQL::set_query(local_20,"seLect level, state from event_levelup_support where charac_no=%d",
                     local_44);
                    /* try { // try from 0844cdef to 0844ce43 has its CatchHandler @ 0844d01f */
    cVar1 = MySQL::exec(local_20,true);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0xc277;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&int::typeinfo,0);
    }
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xc279);
    CStreamGuard::CStreamGuard(local_4c,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 0844ce71 to 0844cffa has its CatchHandler @ 0844cffd */
    CStreamGuard::operator<<(pCVar4,0x350);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
    local_1c = CStreamGuard::GetInBuffer<SIG_EVENT_LEVEUP_SUPPORT_INFO>(pCVar4);
    local_18 = MySQL::get_n_rows(local_20);
    *(int *)local_1c = local_18;
    local_4e = 0;
    local_50 = 0;
    for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
      cVar1 = MySQL::fetch(local_20);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = 0xc28c;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&int::typeinfo,0);
      }
      cVar1 = MySQL::get_ushort(local_20,0,&local_4e);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = 0xc28d;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&int::typeinfo,0);
      }
      cVar1 = MySQL::get_ushort(local_20,1,&local_50);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = 0xc28e;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&int::typeinfo,0);
      }
      *(ushort *)(local_1c + local_14 * 4 + 4) = local_4e;
      *(ushort *)(local_1c + local_14 * 4 + 6) = local_50;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_4c);
                    /* try { // try from 0844d018 to 0844d01c has its CatchHandler @ 0844d01f */
    CStreamGuard::~CStreamGuard(local_4c);
    uVar5 = 1;
  }
  return uVar5;
}
```
