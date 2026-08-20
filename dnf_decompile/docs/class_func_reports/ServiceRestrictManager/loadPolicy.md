# loadPolicy

`_ZN22ServiceRestrictManager10loadPolicyEv`

`ServiceRestrictManager::loadPolicy()`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816e7d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816e7d6  _ZN22ServiceRestrictManager10loadPolicyEv
#           ServiceRestrictManager::loadPolicy()
# range [0x0816e7d6, 0x0816e8cd]
0816e7d6 +0x00:  push   %ebp
0816e7d7 +0x01:  mov    %esp,%ebp
0816e7d9 +0x03:  push   %esi
0816e7da +0x04:  push   %ebx
0816e7db +0x05:  sub    $0x30,%esp
0816e7de +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0816e7e3 +0x0d:  movl   $0x1c5,0x8(%esp)
0816e7eb +0x15:  movl   $"localtaiwan/System/ServiceRestrictManager.cpp",0x4(%esp)
0816e7f3 +0x1d:  mov    %eax,(%esp)
0816e7f6 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0816e7fb +0x25:  movl   $0x1,0x8(%esp)
0816e803 +0x2d:  mov    %eax,0x4(%esp)
0816e807 +0x31:  lea    -0x14(%ebp),%eax
0816e80a +0x34:  mov    %eax,(%esp)
0816e80d +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0816e812 +0x3c:  movl   $0xffffffff,0x8(%esp)
0816e81a +0x44:  movl   $0x1,0x4(%esp)
0816e822 +0x4c:  lea    -0x14(%ebp),%eax
0816e825 +0x4f:  mov    %eax,(%esp)
0816e828 +0x52:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0816e82d +0x57:  lea    -0x14(%ebp),%eax
0816e830 +0x5a:  mov    %eax,(%esp)
0816e833 +0x5d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0816e838 +0x62:  mov    %eax,(%esp)
0816e83b +0x65:  call   0815e9a2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xc16>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xc16
0816e840 +0x6a:  mov    %eax,-0xc(%ebp)
0816e843 +0x6d:  cmpl   $0x0,-0xc(%ebp)
0816e847 +0x71:  jne    0816e877 <+0xa1>
0816e849 +0x73:  movl   $"[Taiwan, Restrict] SigLoadRestrictPolicy is null.",0x10(%esp)
0816e851 +0x7b:  movl   $0x1cc,0xc(%esp)
0816e859 +0x83:  movl   $&_ZZN22ServiceRestrictManager10loadPolicyEvE19__PRETTY_FUNCTION__,0x8(%esp)
0816e861 +0x8b:  movl   $"localtaiwan/System/ServiceRestrictManager.cpp",0x4(%esp)
0816e869 +0x93:  movl   $0x1,(%esp)
0816e870 +0x9a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816e875 +0x9f:  jmp    0816e8bb <+0xe5>
0816e877 +0xa1:  mov    -0xc(%ebp),%eax
0816e87a +0xa4:  mov    %eax,(%esp)
0816e87d +0xa7:  call   0815dda8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x1c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x1c
0816e882 +0xac:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0816e887 +0xb1:  lea    -0x14(%ebp),%edx
0816e88a +0xb4:  mov    %edx,0x8(%esp)
0816e88e +0xb8:  movl   $0x2,0x4(%esp)
0816e896 +0xc0:  mov    %eax,(%esp)
0816e899 +0xc3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0816e89e +0xc8:  jmp    0816e8bb <+0xe5>
0816e8a0 +0xca:  mov    %edx,%ebx
0816e8a2 +0xcc:  mov    %eax,%esi
0816e8a4 +0xce:  lea    -0x14(%ebp),%eax
0816e8a7 +0xd1:  mov    %eax,(%esp)
0816e8aa +0xd4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0816e8af +0xd9:  mov    %esi,%eax
0816e8b1 +0xdb:  mov    %ebx,%edx
0816e8b3 +0xdd:  mov    %eax,(%esp)
0816e8b6 +0xe0:  call   08ae3750 <_Unwind_Resume>
0816e8bb +0xe5:  lea    -0x14(%ebp),%eax
0816e8be +0xe8:  mov    %eax,(%esp)
0816e8c1 +0xeb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0816e8c6 +0xf0:  add    $0x30,%esp
0816e8c9 +0xf3:  pop    %ebx
0816e8ca +0xf4:  pop    %esi
0816e8cb +0xf5:  pop    %ebp
0816e8cc +0xf6:  ret
0816e8cd +0xf7:  nop
```

## 反编译 C

```c
// ServiceRestrictManager::loadPolicy @ 0x816e7d6

/* ServiceRestrictManager::loadPolicy() */

void ServiceRestrictManager::loadPolicy(void)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  SigLoadRestrictPolicy *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/System/ServiceRestrictManager.cpp",0x1c5);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 0816e828 to 0816e89d has its CatchHandler @ 0816e8a0 */
  Taiwan::internal_stream(local_18,1,0xffffffff);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<Taiwan::SigLoadRestrictPolicy>(this);
  if (local_10 == (SigLoadRestrictPolicy *)0x0) {
    LogManager::logFormat
              (1,"localtaiwan/System/ServiceRestrictManager.cpp",
               "void ServiceRestrictManager::loadPolicy()",0x1cc,
               "[Taiwan, Restrict] SigLoadRestrictPolicy is null.");
  }
  else {
    Taiwan::SigLoadRestrictPolicy::init(local_10);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
