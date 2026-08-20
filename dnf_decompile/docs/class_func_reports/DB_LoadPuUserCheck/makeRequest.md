# makeRequest

`_ZN18DB_LoadPuUserCheck11makeRequestEji`

`DB_LoadPuUserCheck::makeRequest(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_LoadPuUserCheck` | `0x0844bee2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844bee2  _ZN18DB_LoadPuUserCheck11makeRequestEji
#           DB_LoadPuUserCheck::makeRequest(unsigned int, int)
# range [0x0844bee2, 0x0844bfb7]
0844bee2 +0x00:  push   %ebp
0844bee3 +0x01:  mov    %esp,%ebp
0844bee5 +0x03:  push   %esi
0844bee6 +0x04:  push   %ebx
0844bee7 +0x05:  sub    $0x20,%esp
0844beea +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844beef +0x0d:  movl   $0xbcc2,0x8(%esp)
0844bef7 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0844beff +0x1d:  mov    %eax,(%esp)
0844bf02 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844bf07 +0x25:  movl   $0x1,0x8(%esp)
0844bf0f +0x2d:  mov    %eax,0x4(%esp)
0844bf13 +0x31:  lea    -0x10(%ebp),%eax
0844bf16 +0x34:  mov    %eax,(%esp)
0844bf19 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844bf1e +0x3c:  lea    -0x10(%ebp),%eax
0844bf21 +0x3f:  mov    %eax,(%esp)
0844bf24 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844bf29 +0x47:  movl   $0x2e1,0x4(%esp)
0844bf31 +0x4f:  mov    %eax,(%esp)
0844bf34 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844bf39 +0x57:  lea    -0x10(%ebp),%eax
0844bf3c +0x5a:  mov    %eax,(%esp)
0844bf3f +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844bf44 +0x62:  mov    0xc(%ebp),%edx
0844bf47 +0x65:  mov    %edx,0x4(%esp)
0844bf4b +0x69:  mov    %eax,(%esp)
0844bf4e +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844bf53 +0x71:  lea    -0x10(%ebp),%eax
0844bf56 +0x74:  mov    %eax,(%esp)
0844bf59 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844bf5e +0x7c:  mov    0x8(%ebp),%edx
0844bf61 +0x7f:  mov    %edx,0x4(%esp)
0844bf65 +0x83:  mov    %eax,(%esp)
0844bf68 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0844bf6d +0x8b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844bf72 +0x90:  lea    -0x10(%ebp),%edx
0844bf75 +0x93:  mov    %edx,0x8(%esp)
0844bf79 +0x97:  movl   $0x2,0x4(%esp)
0844bf81 +0x9f:  mov    %eax,(%esp)
0844bf84 +0xa2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844bf89 +0xa7:  jmp    0844bfa6 <+0xc4>
0844bf8b +0xa9:  mov    %edx,%ebx
0844bf8d +0xab:  mov    %eax,%esi
0844bf8f +0xad:  lea    -0x10(%ebp),%eax
0844bf92 +0xb0:  mov    %eax,(%esp)
0844bf95 +0xb3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844bf9a +0xb8:  mov    %esi,%eax
0844bf9c +0xba:  mov    %ebx,%edx
0844bf9e +0xbc:  mov    %eax,(%esp)
0844bfa1 +0xbf:  call   08ae3750 <_Unwind_Resume>
0844bfa6 +0xc4:  lea    -0x10(%ebp),%eax
0844bfa9 +0xc7:  mov    %eax,(%esp)
0844bfac +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844bfb1 +0xcf:  add    $0x20,%esp
0844bfb4 +0xd2:  pop    %ebx
0844bfb5 +0xd3:  pop    %esi
0844bfb6 +0xd4:  pop    %ebp
0844bfb7 +0xd5:  ret
```

## 反编译 C

```c
// DB_LoadPuUserCheck::makeRequest @ 0x844bee2

/* DB_LoadPuUserCheck::makeRequest(unsigned int, int) */

void DB_LoadPuUserCheck::makeRequest(uint param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbcc2);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844bf34 to 0844bf88 has its CatchHandler @ 0844bf8b */
  CStreamGuard::operator<<(pCVar2,0x2e1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
