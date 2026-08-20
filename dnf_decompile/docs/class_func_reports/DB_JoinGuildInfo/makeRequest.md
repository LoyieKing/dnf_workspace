# makeRequest

`_ZN16DB_JoinGuildInfo11makeRequestEi17ENUM_SERVER_GROUPj`

`DB_JoinGuildInfo::makeRequest(int, ENUM_SERVER_GROUP, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_JoinGuildInfo` | `0x0843d5fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843d5fa  _ZN16DB_JoinGuildInfo11makeRequestEi17ENUM_SERVER_GROUPj
#           DB_JoinGuildInfo::makeRequest(int, ENUM_SERVER_GROUP, unsigned int)
# range [0x0843d5fa, 0x0843d6e9]
0843d5fa +0x00:  push   %ebp
0843d5fb +0x01:  mov    %esp,%ebp
0843d5fd +0x03:  push   %esi
0843d5fe +0x04:  push   %ebx
0843d5ff +0x05:  sub    $0x20,%esp
0843d602 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843d607 +0x0d:  movl   $0x9218,0x8(%esp)
0843d60f +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843d617 +0x1d:  mov    %eax,(%esp)
0843d61a +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843d61f +0x25:  movl   $0x1,0x8(%esp)
0843d627 +0x2d:  mov    %eax,0x4(%esp)
0843d62b +0x31:  lea    -0x10(%ebp),%eax
0843d62e +0x34:  mov    %eax,(%esp)
0843d631 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843d636 +0x3c:  lea    -0x10(%ebp),%eax
0843d639 +0x3f:  mov    %eax,(%esp)
0843d63c +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d641 +0x47:  movl   $0x219,0x4(%esp)
0843d649 +0x4f:  mov    %eax,(%esp)
0843d64c +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843d651 +0x57:  lea    -0x10(%ebp),%eax
0843d654 +0x5a:  mov    %eax,(%esp)
0843d657 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d65c +0x62:  mov    0x8(%ebp),%edx
0843d65f +0x65:  mov    %edx,0x4(%esp)
0843d663 +0x69:  mov    %eax,(%esp)
0843d666 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843d66b +0x71:  mov    0xc(%ebp),%ebx
0843d66e +0x74:  lea    -0x10(%ebp),%eax
0843d671 +0x77:  mov    %eax,(%esp)
0843d674 +0x7a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d679 +0x7f:  mov    %ebx,0x4(%esp)
0843d67d +0x83:  mov    %eax,(%esp)
0843d680 +0x86:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843d685 +0x8b:  lea    -0x10(%ebp),%eax
0843d688 +0x8e:  mov    %eax,(%esp)
0843d68b +0x91:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d690 +0x96:  mov    0x10(%ebp),%edx
0843d693 +0x99:  mov    %edx,0x4(%esp)
0843d697 +0x9d:  mov    %eax,(%esp)
0843d69a +0xa0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843d69f +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843d6a4 +0xaa:  lea    -0x10(%ebp),%edx
0843d6a7 +0xad:  mov    %edx,0x8(%esp)
0843d6ab +0xb1:  movl   $0x2,0x4(%esp)
0843d6b3 +0xb9:  mov    %eax,(%esp)
0843d6b6 +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843d6bb +0xc1:  jmp    0843d6d8 <+0xde>
0843d6bd +0xc3:  mov    %edx,%ebx
0843d6bf +0xc5:  mov    %eax,%esi
0843d6c1 +0xc7:  lea    -0x10(%ebp),%eax
0843d6c4 +0xca:  mov    %eax,(%esp)
0843d6c7 +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843d6cc +0xd2:  mov    %esi,%eax
0843d6ce +0xd4:  mov    %ebx,%edx
0843d6d0 +0xd6:  mov    %eax,(%esp)
0843d6d3 +0xd9:  call   08ae3750 <_Unwind_Resume>
0843d6d8 +0xde:  lea    -0x10(%ebp),%eax
0843d6db +0xe1:  mov    %eax,(%esp)
0843d6de +0xe4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843d6e3 +0xe9:  add    $0x20,%esp
0843d6e6 +0xec:  pop    %ebx
0843d6e7 +0xed:  pop    %esi
0843d6e8 +0xee:  pop    %ebp
0843d6e9 +0xef:  ret
```

## 反编译 C

```c
// DB_JoinGuildInfo::makeRequest @ 0x843d5fa

/* DB_JoinGuildInfo::makeRequest(int, ENUM_SERVER_GROUP, unsigned int) */

void DB_JoinGuildInfo::makeRequest(int param_1,int param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9218);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843d64c to 0843d6ba has its CatchHandler @ 0843d6bd */
  CStreamGuard::operator<<(pCVar2,0x219);
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
