# makeRequest

`_ZN28DB_InsertOnTimeRewardUserLog11makeRequestEiji`

`DB_InsertOnTimeRewardUserLog::makeRequest(int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_InsertOnTimeRewardUserLog` | `0x08442b7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08442b7a  _ZN28DB_InsertOnTimeRewardUserLog11makeRequestEiji
#           DB_InsertOnTimeRewardUserLog::makeRequest(int, unsigned int, int)
# range [0x08442b7a, 0x08442c69]
08442b7a +0x00:  push   %ebp
08442b7b +0x01:  mov    %esp,%ebp
08442b7d +0x03:  push   %esi
08442b7e +0x04:  push   %ebx
08442b7f +0x05:  sub    $0x20,%esp
08442b82 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08442b87 +0x0d:  movl   $0xa445,0x8(%esp)
08442b8f +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08442b97 +0x1d:  mov    %eax,(%esp)
08442b9a +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08442b9f +0x25:  movl   $0x1,0x8(%esp)
08442ba7 +0x2d:  mov    %eax,0x4(%esp)
08442bab +0x31:  lea    -0x10(%ebp),%eax
08442bae +0x34:  mov    %eax,(%esp)
08442bb1 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08442bb6 +0x3c:  lea    -0x10(%ebp),%eax
08442bb9 +0x3f:  mov    %eax,(%esp)
08442bbc +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442bc1 +0x47:  movl   $0x298,0x4(%esp)
08442bc9 +0x4f:  mov    %eax,(%esp)
08442bcc +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08442bd1 +0x57:  lea    -0x10(%ebp),%eax
08442bd4 +0x5a:  mov    %eax,(%esp)
08442bd7 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442bdc +0x62:  mov    0x8(%ebp),%edx
08442bdf +0x65:  mov    %edx,0x4(%esp)
08442be3 +0x69:  mov    %eax,(%esp)
08442be6 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08442beb +0x71:  lea    -0x10(%ebp),%eax
08442bee +0x74:  mov    %eax,(%esp)
08442bf1 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442bf6 +0x7c:  mov    0xc(%ebp),%edx
08442bf9 +0x7f:  mov    %edx,0x4(%esp)
08442bfd +0x83:  mov    %eax,(%esp)
08442c00 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08442c05 +0x8b:  lea    -0x10(%ebp),%eax
08442c08 +0x8e:  mov    %eax,(%esp)
08442c0b +0x91:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442c10 +0x96:  mov    0x10(%ebp),%edx
08442c13 +0x99:  mov    %edx,0x4(%esp)
08442c17 +0x9d:  mov    %eax,(%esp)
08442c1a +0xa0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08442c1f +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08442c24 +0xaa:  lea    -0x10(%ebp),%edx
08442c27 +0xad:  mov    %edx,0x8(%esp)
08442c2b +0xb1:  movl   $0x2,0x4(%esp)
08442c33 +0xb9:  mov    %eax,(%esp)
08442c36 +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08442c3b +0xc1:  jmp    08442c58 <+0xde>
08442c3d +0xc3:  mov    %edx,%ebx
08442c3f +0xc5:  mov    %eax,%esi
08442c41 +0xc7:  lea    -0x10(%ebp),%eax
08442c44 +0xca:  mov    %eax,(%esp)
08442c47 +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08442c4c +0xd2:  mov    %esi,%eax
08442c4e +0xd4:  mov    %ebx,%edx
08442c50 +0xd6:  mov    %eax,(%esp)
08442c53 +0xd9:  call   08ae3750 <_Unwind_Resume>
08442c58 +0xde:  lea    -0x10(%ebp),%eax
08442c5b +0xe1:  mov    %eax,(%esp)
08442c5e +0xe4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08442c63 +0xe9:  add    $0x20,%esp
08442c66 +0xec:  pop    %ebx
08442c67 +0xed:  pop    %esi
08442c68 +0xee:  pop    %ebp
08442c69 +0xef:  ret
```

## 反编译 C

```c
// DB_InsertOnTimeRewardUserLog::makeRequest @ 0x8442b7a

/* DB_InsertOnTimeRewardUserLog::makeRequest(int, unsigned int, int) */

void DB_InsertOnTimeRewardUserLog::makeRequest(int param_1,uint param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa445);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08442bcc to 08442c3a has its CatchHandler @ 08442c3d */
  CStreamGuard::operator<<(pCVar2,0x298);
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
