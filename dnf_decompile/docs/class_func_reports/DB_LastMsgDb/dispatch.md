# dispatch

`_ZN12DB_LastMsgDb8dispatchEiiP6Stream`

`DB_LastMsgDb::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LastMsgDb` | `0x08421bcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08421bcc  _ZN12DB_LastMsgDb8dispatchEiiP6Stream
#           DB_LastMsgDb::dispatch(int, int, Stream*)
# range [0x08421bcc, 0x08421c8d]
08421bcc +0x00:  push   %ebp
08421bcd +0x01:  mov    %esp,%ebp
08421bcf +0x03:  push   %esi
08421bd0 +0x04:  push   %ebx
08421bd1 +0x05:  sub    $0x20,%esp
08421bd4 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08421bd9 +0x0d:  movl   $0x59ed,0x8(%esp)
08421be1 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08421be9 +0x1d:  mov    %eax,(%esp)
08421bec +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08421bf1 +0x25:  movl   $0x1,0x8(%esp)
08421bf9 +0x2d:  mov    %eax,0x4(%esp)
08421bfd +0x31:  lea    -0x10(%ebp),%eax
08421c00 +0x34:  mov    %eax,(%esp)
08421c03 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08421c08 +0x3c:  lea    -0x10(%ebp),%eax
08421c0b +0x3f:  mov    %eax,(%esp)
08421c0e +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08421c13 +0x47:  movl   $0x97,0x4(%esp)
08421c1b +0x4f:  mov    %eax,(%esp)
08421c1e +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08421c23 +0x57:  lea    -0x10(%ebp),%eax
08421c26 +0x5a:  mov    %eax,(%esp)
08421c29 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08421c2e +0x62:  mov    0x10(%ebp),%edx
08421c31 +0x65:  mov    %edx,0x4(%esp)
08421c35 +0x69:  mov    %eax,(%esp)
08421c38 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08421c3d +0x71:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08421c42 +0x76:  lea    -0x10(%ebp),%edx
08421c45 +0x79:  mov    %edx,0x8(%esp)
08421c49 +0x7d:  movl   $0x1,0x4(%esp)
08421c51 +0x85:  mov    %eax,(%esp)
08421c54 +0x88:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08421c59 +0x8d:  mov    $0x1,%ebx
08421c5e +0x92:  lea    -0x10(%ebp),%eax
08421c61 +0x95:  mov    %eax,(%esp)
08421c64 +0x98:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08421c69 +0x9d:  mov    %ebx,%eax
08421c6b +0x9f:  add    $0x20,%esp
08421c6e +0xa2:  pop    %ebx
08421c6f +0xa3:  pop    %esi
08421c70 +0xa4:  pop    %ebp
08421c71 +0xa5:  ret
08421c72 +0xa6:  mov    %edx,%ebx
08421c74 +0xa8:  mov    %eax,%esi
08421c76 +0xaa:  lea    -0x10(%ebp),%eax
08421c79 +0xad:  mov    %eax,(%esp)
08421c7c +0xb0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08421c81 +0xb5:  mov    %esi,%eax
08421c83 +0xb7:  mov    %ebx,%edx
08421c85 +0xb9:  mov    %eax,(%esp)
08421c88 +0xbc:  call   08ae3750 <_Unwind_Resume>
08421c8d +0xc1:  nop
```

## 反编译 C

```c
// DB_LastMsgDb::dispatch @ 0x8421bcc

/* DB_LastMsgDb::dispatch(int, int, Stream*) */

undefined4 DB_LastMsgDb::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x59ed);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08421c1e to 08421c58 has its CatchHandler @ 08421c72 */
  CStreamGuard::operator<<(pCVar2,0x97);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,(int)param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
