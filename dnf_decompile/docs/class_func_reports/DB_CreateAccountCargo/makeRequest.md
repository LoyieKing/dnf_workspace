# makeRequest

`_ZN21DB_CreateAccountCargo11makeRequestEijj`

`DB_CreateAccountCargo::makeRequest(int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_CreateAccountCargo` | `0x0843ae86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843ae86  _ZN21DB_CreateAccountCargo11makeRequestEijj
#           DB_CreateAccountCargo::makeRequest(int, unsigned int, unsigned int)
# range [0x0843ae86, 0x0843af75]
0843ae86 +0x00:  push   %ebp
0843ae87 +0x01:  mov    %esp,%ebp
0843ae89 +0x03:  push   %esi
0843ae8a +0x04:  push   %ebx
0843ae8b +0x05:  sub    $0x20,%esp
0843ae8e +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843ae93 +0x0d:  movl   $0x8bef,0x8(%esp)
0843ae9b +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843aea3 +0x1d:  mov    %eax,(%esp)
0843aea6 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843aeab +0x25:  movl   $0x1,0x8(%esp)
0843aeb3 +0x2d:  mov    %eax,0x4(%esp)
0843aeb7 +0x31:  lea    -0x10(%ebp),%eax
0843aeba +0x34:  mov    %eax,(%esp)
0843aebd +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843aec2 +0x3c:  lea    -0x10(%ebp),%eax
0843aec5 +0x3f:  mov    %eax,(%esp)
0843aec8 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843aecd +0x47:  movl   $0x1ee,0x4(%esp)
0843aed5 +0x4f:  mov    %eax,(%esp)
0843aed8 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843aedd +0x57:  lea    -0x10(%ebp),%eax
0843aee0 +0x5a:  mov    %eax,(%esp)
0843aee3 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843aee8 +0x62:  mov    0x8(%ebp),%edx
0843aeeb +0x65:  mov    %edx,0x4(%esp)
0843aeef +0x69:  mov    %eax,(%esp)
0843aef2 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843aef7 +0x71:  lea    -0x10(%ebp),%eax
0843aefa +0x74:  mov    %eax,(%esp)
0843aefd +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843af02 +0x7c:  mov    0xc(%ebp),%edx
0843af05 +0x7f:  mov    %edx,0x4(%esp)
0843af09 +0x83:  mov    %eax,(%esp)
0843af0c +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843af11 +0x8b:  lea    -0x10(%ebp),%eax
0843af14 +0x8e:  mov    %eax,(%esp)
0843af17 +0x91:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843af1c +0x96:  mov    0x10(%ebp),%edx
0843af1f +0x99:  mov    %edx,0x4(%esp)
0843af23 +0x9d:  mov    %eax,(%esp)
0843af26 +0xa0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843af2b +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843af30 +0xaa:  lea    -0x10(%ebp),%edx
0843af33 +0xad:  mov    %edx,0x8(%esp)
0843af37 +0xb1:  movl   $0x2,0x4(%esp)
0843af3f +0xb9:  mov    %eax,(%esp)
0843af42 +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843af47 +0xc1:  jmp    0843af64 <+0xde>
0843af49 +0xc3:  mov    %edx,%ebx
0843af4b +0xc5:  mov    %eax,%esi
0843af4d +0xc7:  lea    -0x10(%ebp),%eax
0843af50 +0xca:  mov    %eax,(%esp)
0843af53 +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843af58 +0xd2:  mov    %esi,%eax
0843af5a +0xd4:  mov    %ebx,%edx
0843af5c +0xd6:  mov    %eax,(%esp)
0843af5f +0xd9:  call   08ae3750 <_Unwind_Resume>
0843af64 +0xde:  lea    -0x10(%ebp),%eax
0843af67 +0xe1:  mov    %eax,(%esp)
0843af6a +0xe4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843af6f +0xe9:  add    $0x20,%esp
0843af72 +0xec:  pop    %ebx
0843af73 +0xed:  pop    %esi
0843af74 +0xee:  pop    %ebp
0843af75 +0xef:  ret
```

## 反编译 C

```c
// DB_CreateAccountCargo::makeRequest @ 0x843ae86

/* DB_CreateAccountCargo::makeRequest(int, unsigned int, unsigned int) */

void DB_CreateAccountCargo::makeRequest(int param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8bef);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843aed8 to 0843af46 has its CatchHandler @ 0843af49 */
  CStreamGuard::operator<<(pCVar2,0x1ee);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
