# makeRequest

`_ZN29DB_ReloadAutoPunishRuleBackIP11makeRequestEv`

`DB_ReloadAutoPunishRuleBackIP::makeRequest()`

| 类 | 地址 |
|---|---|
| `DB_ReloadAutoPunishRuleBackIP` | `0x0842d0ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842d0ae  _ZN29DB_ReloadAutoPunishRuleBackIP11makeRequestEv
#           DB_ReloadAutoPunishRuleBackIP::makeRequest()
# range [0x0842d0ae, 0x0842d16b]
0842d0ae +0x00:  push   %ebp
0842d0af +0x01:  mov    %esp,%ebp
0842d0b1 +0x03:  push   %esi
0842d0b2 +0x04:  push   %ebx
0842d0b3 +0x05:  sub    $0x20,%esp
0842d0b6 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842d0bb +0x0d:  movl   $0x7077,0x8(%esp)
0842d0c3 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0842d0cb +0x1d:  mov    %eax,(%esp)
0842d0ce +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842d0d3 +0x25:  movl   $0x1,0x8(%esp)
0842d0db +0x2d:  mov    %eax,0x4(%esp)
0842d0df +0x31:  lea    -0x10(%ebp),%eax
0842d0e2 +0x34:  mov    %eax,(%esp)
0842d0e5 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842d0ea +0x3c:  lea    -0x10(%ebp),%eax
0842d0ed +0x3f:  mov    %eax,(%esp)
0842d0f0 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842d0f5 +0x47:  movl   $0x108,0x4(%esp)
0842d0fd +0x4f:  mov    %eax,(%esp)
0842d100 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842d105 +0x57:  lea    -0x10(%ebp),%eax
0842d108 +0x5a:  mov    %eax,(%esp)
0842d10b +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842d110 +0x62:  movl   $0xffffffff,0x4(%esp)
0842d118 +0x6a:  mov    %eax,(%esp)
0842d11b +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842d120 +0x72:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842d125 +0x77:  lea    -0x10(%ebp),%edx
0842d128 +0x7a:  mov    %edx,0x8(%esp)
0842d12c +0x7e:  movl   $0x2,0x4(%esp)
0842d134 +0x86:  mov    %eax,(%esp)
0842d137 +0x89:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842d13c +0x8e:  jmp    0842d159 <+0xab>
0842d13e +0x90:  mov    %edx,%ebx
0842d140 +0x92:  mov    %eax,%esi
0842d142 +0x94:  lea    -0x10(%ebp),%eax
0842d145 +0x97:  mov    %eax,(%esp)
0842d148 +0x9a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842d14d +0x9f:  mov    %esi,%eax
0842d14f +0xa1:  mov    %ebx,%edx
0842d151 +0xa3:  mov    %eax,(%esp)
0842d154 +0xa6:  call   08ae3750 <_Unwind_Resume>
0842d159 +0xab:  lea    -0x10(%ebp),%eax
0842d15c +0xae:  mov    %eax,(%esp)
0842d15f +0xb1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842d164 +0xb6:  add    $0x20,%esp
0842d167 +0xb9:  pop    %ebx
0842d168 +0xba:  pop    %esi
0842d169 +0xbb:  pop    %ebp
0842d16a +0xbc:  ret
0842d16b +0xbd:  nop
```

## 反编译 C

```c
// DB_ReloadAutoPunishRuleBackIP::makeRequest @ 0x842d0ae

/* DB_ReloadAutoPunishRuleBackIP::makeRequest() */

void DB_ReloadAutoPunishRuleBackIP::makeRequest(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7077);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842d100 to 0842d13b has its CatchHandler @ 0842d13e */
  CStreamGuard::operator<<(pCVar2,0x108);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
