# makeRequest

`_ZN31DB_ReloadAutoPunishRuleHackType11makeRequestEv`

`DB_ReloadAutoPunishRuleHackType::makeRequest()`

| 类 | 地址 |
|---|---|
| `DB_ReloadAutoPunishRuleHackType` | `0x0842d610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842d610  _ZN31DB_ReloadAutoPunishRuleHackType11makeRequestEv
#           DB_ReloadAutoPunishRuleHackType::makeRequest()
# range [0x0842d610, 0x0842d6cd]
0842d610 +0x00:  push   %ebp
0842d611 +0x01:  mov    %esp,%ebp
0842d613 +0x03:  push   %esi
0842d614 +0x04:  push   %ebx
0842d615 +0x05:  sub    $0x20,%esp
0842d618 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842d61d +0x0d:  movl   $0x70e2,0x8(%esp)
0842d625 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0842d62d +0x1d:  mov    %eax,(%esp)
0842d630 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842d635 +0x25:  movl   $0x1,0x8(%esp)
0842d63d +0x2d:  mov    %eax,0x4(%esp)
0842d641 +0x31:  lea    -0x10(%ebp),%eax
0842d644 +0x34:  mov    %eax,(%esp)
0842d647 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842d64c +0x3c:  lea    -0x10(%ebp),%eax
0842d64f +0x3f:  mov    %eax,(%esp)
0842d652 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842d657 +0x47:  movl   $0x109,0x4(%esp)
0842d65f +0x4f:  mov    %eax,(%esp)
0842d662 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842d667 +0x57:  lea    -0x10(%ebp),%eax
0842d66a +0x5a:  mov    %eax,(%esp)
0842d66d +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842d672 +0x62:  movl   $0xffffffff,0x4(%esp)
0842d67a +0x6a:  mov    %eax,(%esp)
0842d67d +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842d682 +0x72:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842d687 +0x77:  lea    -0x10(%ebp),%edx
0842d68a +0x7a:  mov    %edx,0x8(%esp)
0842d68e +0x7e:  movl   $0x2,0x4(%esp)
0842d696 +0x86:  mov    %eax,(%esp)
0842d699 +0x89:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842d69e +0x8e:  jmp    0842d6bb <+0xab>
0842d6a0 +0x90:  mov    %edx,%ebx
0842d6a2 +0x92:  mov    %eax,%esi
0842d6a4 +0x94:  lea    -0x10(%ebp),%eax
0842d6a7 +0x97:  mov    %eax,(%esp)
0842d6aa +0x9a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842d6af +0x9f:  mov    %esi,%eax
0842d6b1 +0xa1:  mov    %ebx,%edx
0842d6b3 +0xa3:  mov    %eax,(%esp)
0842d6b6 +0xa6:  call   08ae3750 <_Unwind_Resume>
0842d6bb +0xab:  lea    -0x10(%ebp),%eax
0842d6be +0xae:  mov    %eax,(%esp)
0842d6c1 +0xb1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842d6c6 +0xb6:  add    $0x20,%esp
0842d6c9 +0xb9:  pop    %ebx
0842d6ca +0xba:  pop    %esi
0842d6cb +0xbb:  pop    %ebp
0842d6cc +0xbc:  ret
0842d6cd +0xbd:  nop
```

## 反编译 C

```c
// DB_ReloadAutoPunishRuleHackType::makeRequest @ 0x842d610

/* DB_ReloadAutoPunishRuleHackType::makeRequest() */

void DB_ReloadAutoPunishRuleHackType::makeRequest(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x70e2);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842d662 to 0842d69d has its CatchHandler @ 0842d6a0 */
  CStreamGuard::operator<<(pCVar2,0x109);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
