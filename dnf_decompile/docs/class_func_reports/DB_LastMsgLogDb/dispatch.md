# dispatch

`_ZN15DB_LastMsgLogDb8dispatchEiiP6Stream`

`DB_LastMsgLogDb::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LastMsgLogDb` | `0x08421c8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08421c8e  _ZN15DB_LastMsgLogDb8dispatchEiiP6Stream
#           DB_LastMsgLogDb::dispatch(int, int, Stream*)
# range [0x08421c8e, 0x08421d4f]
08421c8e +0x00:  push   %ebp
08421c8f +0x01:  mov    %esp,%ebp
08421c91 +0x03:  push   %esi
08421c92 +0x04:  push   %ebx
08421c93 +0x05:  sub    $0x20,%esp
08421c96 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08421c9b +0x0d:  movl   $0x59f7,0x8(%esp)
08421ca3 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08421cab +0x1d:  mov    %eax,(%esp)
08421cae +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08421cb3 +0x25:  movl   $0x1,0x8(%esp)
08421cbb +0x2d:  mov    %eax,0x4(%esp)
08421cbf +0x31:  lea    -0x10(%ebp),%eax
08421cc2 +0x34:  mov    %eax,(%esp)
08421cc5 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08421cca +0x3c:  lea    -0x10(%ebp),%eax
08421ccd +0x3f:  mov    %eax,(%esp)
08421cd0 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08421cd5 +0x47:  movl   $0x97,0x4(%esp)
08421cdd +0x4f:  mov    %eax,(%esp)
08421ce0 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08421ce5 +0x57:  lea    -0x10(%ebp),%eax
08421ce8 +0x5a:  mov    %eax,(%esp)
08421ceb +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08421cf0 +0x62:  mov    0x10(%ebp),%edx
08421cf3 +0x65:  mov    %edx,0x4(%esp)
08421cf7 +0x69:  mov    %eax,(%esp)
08421cfa +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08421cff +0x71:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08421d04 +0x76:  lea    -0x10(%ebp),%edx
08421d07 +0x79:  mov    %edx,0x8(%esp)
08421d0b +0x7d:  movl   $0x1,0x4(%esp)
08421d13 +0x85:  mov    %eax,(%esp)
08421d16 +0x88:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08421d1b +0x8d:  mov    $0x1,%ebx
08421d20 +0x92:  lea    -0x10(%ebp),%eax
08421d23 +0x95:  mov    %eax,(%esp)
08421d26 +0x98:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08421d2b +0x9d:  mov    %ebx,%eax
08421d2d +0x9f:  add    $0x20,%esp
08421d30 +0xa2:  pop    %ebx
08421d31 +0xa3:  pop    %esi
08421d32 +0xa4:  pop    %ebp
08421d33 +0xa5:  ret
08421d34 +0xa6:  mov    %edx,%ebx
08421d36 +0xa8:  mov    %eax,%esi
08421d38 +0xaa:  lea    -0x10(%ebp),%eax
08421d3b +0xad:  mov    %eax,(%esp)
08421d3e +0xb0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08421d43 +0xb5:  mov    %esi,%eax
08421d45 +0xb7:  mov    %ebx,%edx
08421d47 +0xb9:  mov    %eax,(%esp)
08421d4a +0xbc:  call   08ae3750 <_Unwind_Resume>
08421d4f +0xc1:  nop
```

## 反编译 C

```c
// DB_LastMsgLogDb::dispatch @ 0x8421c8e

/* DB_LastMsgLogDb::dispatch(int, int, Stream*) */

undefined4 DB_LastMsgLogDb::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x59f7);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08421ce0 to 08421d1a has its CatchHandler @ 08421d34 */
  CStreamGuard::operator<<(pCVar2,0x97);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,(int)param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
