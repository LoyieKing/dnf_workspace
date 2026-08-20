# ProcessProtectMsg

`_ZN13CBusinessImpl17ProcessProtectMsgEP15tagTSafeModePkg`

`CBusinessImpl::ProcessProtectMsg(tagTSafeModePkg*)`

| 类 | 地址 |
|---|---|
| `CBusinessImpl` | `0x080de4ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080de4ec  _ZN13CBusinessImpl17ProcessProtectMsgEP15tagTSafeModePkg
#           CBusinessImpl::ProcessProtectMsg(tagTSafeModePkg*)
# range [0x080de4ec, 0x080de5cb]
080de4ec +0x00:  push   %ebp
080de4ed +0x01:  mov    %esp,%ebp
080de4ef +0x03:  push   %esi
080de4f0 +0x04:  push   %ebx
080de4f1 +0x05:  sub    $0x20,%esp
080de4f4 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080de4f9 +0x0d:  movl   $0x88,0x8(%esp)
080de501 +0x15:  movl   $"BusinessImpl.cpp",0x4(%esp)
080de509 +0x1d:  mov    %eax,(%esp)
080de50c +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080de511 +0x25:  movl   $0x1,0x8(%esp)
080de519 +0x2d:  mov    %eax,0x4(%esp)
080de51d +0x31:  lea    -0x10(%ebp),%eax
080de520 +0x34:  mov    %eax,(%esp)
080de523 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080de528 +0x3c:  lea    -0x10(%ebp),%eax
080de52b +0x3f:  mov    %eax,(%esp)
080de52e +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080de533 +0x47:  movl   $0x254,0x4(%esp)
080de53b +0x4f:  mov    %eax,(%esp)
080de53e +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080de543 +0x57:  lea    -0x10(%ebp),%eax
080de546 +0x5a:  mov    %eax,(%esp)
080de549 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080de54e +0x62:  movl   $0xffffffff,0x4(%esp)
080de556 +0x6a:  mov    %eax,(%esp)
080de559 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080de55e +0x72:  lea    -0x10(%ebp),%eax
080de561 +0x75:  mov    %eax,(%esp)
080de564 +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
080de569 +0x7d:  movl   $0x34,0x8(%esp)
080de571 +0x85:  mov    0xc(%ebp),%edx
080de574 +0x88:  mov    %edx,0x4(%esp)
080de578 +0x8c:  mov    %eax,(%esp)
080de57b +0x8f:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
080de580 +0x94:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080de585 +0x99:  lea    -0x10(%ebp),%edx
080de588 +0x9c:  mov    %edx,0x8(%esp)
080de58c +0xa0:  movl   $0x1,0x4(%esp)
080de594 +0xa8:  mov    %eax,(%esp)
080de597 +0xab:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080de59c +0xb0:  mov    $0x0,%ebx
080de5a1 +0xb5:  lea    -0x10(%ebp),%eax
080de5a4 +0xb8:  mov    %eax,(%esp)
080de5a7 +0xbb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080de5ac +0xc0:  mov    %ebx,%eax
080de5ae +0xc2:  add    $0x20,%esp
080de5b1 +0xc5:  pop    %ebx
080de5b2 +0xc6:  pop    %esi
080de5b3 +0xc7:  pop    %ebp
080de5b4 +0xc8:  ret
080de5b5 +0xc9:  mov    %edx,%ebx
080de5b7 +0xcb:  mov    %eax,%esi
080de5b9 +0xcd:  lea    -0x10(%ebp),%eax
080de5bc +0xd0:  mov    %eax,(%esp)
080de5bf +0xd3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080de5c4 +0xd8:  mov    %esi,%eax
080de5c6 +0xda:  mov    %ebx,%edx
080de5c8 +0xdc:  mov    %eax,(%esp)
080de5cb +0xdf:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CBusinessImpl::ProcessProtectMsg @ 0x80de4ec

/* CBusinessImpl::ProcessProtectMsg(tagTSafeModePkg*) */

undefined4 __thiscall CBusinessImpl::ProcessProtectMsg(CBusinessImpl *this,tagTSafeModePkg *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"BusinessImpl.cpp",0x88);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 080de53e to 080de59b has its CatchHandler @ 080de5b5 */
  CStreamGuard::operator<<(pCVar2,0x254);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_1,0x34);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 0;
}
```
