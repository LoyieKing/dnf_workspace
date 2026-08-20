# makeRequest

`_ZN18DB_CancelJoinGuild11makeRequestEijj`

`DB_CancelJoinGuild::makeRequest(int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_CancelJoinGuild` | `0x0843d78c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843d78c  _ZN18DB_CancelJoinGuild11makeRequestEijj
#           DB_CancelJoinGuild::makeRequest(int, unsigned int, unsigned int)
# range [0x0843d78c, 0x0843d87b]
0843d78c +0x00:  push   %ebp
0843d78d +0x01:  mov    %esp,%ebp
0843d78f +0x03:  push   %esi
0843d790 +0x04:  push   %ebx
0843d791 +0x05:  sub    $0x20,%esp
0843d794 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843d799 +0x0d:  movl   $0x9234,0x8(%esp)
0843d7a1 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843d7a9 +0x1d:  mov    %eax,(%esp)
0843d7ac +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843d7b1 +0x25:  movl   $0x1,0x8(%esp)
0843d7b9 +0x2d:  mov    %eax,0x4(%esp)
0843d7bd +0x31:  lea    -0x10(%ebp),%eax
0843d7c0 +0x34:  mov    %eax,(%esp)
0843d7c3 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843d7c8 +0x3c:  lea    -0x10(%ebp),%eax
0843d7cb +0x3f:  mov    %eax,(%esp)
0843d7ce +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d7d3 +0x47:  movl   $0x218,0x4(%esp)
0843d7db +0x4f:  mov    %eax,(%esp)
0843d7de +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843d7e3 +0x57:  lea    -0x10(%ebp),%eax
0843d7e6 +0x5a:  mov    %eax,(%esp)
0843d7e9 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d7ee +0x62:  mov    0x8(%ebp),%edx
0843d7f1 +0x65:  mov    %edx,0x4(%esp)
0843d7f5 +0x69:  mov    %eax,(%esp)
0843d7f8 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843d7fd +0x71:  lea    -0x10(%ebp),%eax
0843d800 +0x74:  mov    %eax,(%esp)
0843d803 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d808 +0x7c:  mov    0xc(%ebp),%edx
0843d80b +0x7f:  mov    %edx,0x4(%esp)
0843d80f +0x83:  mov    %eax,(%esp)
0843d812 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843d817 +0x8b:  lea    -0x10(%ebp),%eax
0843d81a +0x8e:  mov    %eax,(%esp)
0843d81d +0x91:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d822 +0x96:  mov    0x10(%ebp),%edx
0843d825 +0x99:  mov    %edx,0x4(%esp)
0843d829 +0x9d:  mov    %eax,(%esp)
0843d82c +0xa0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843d831 +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843d836 +0xaa:  lea    -0x10(%ebp),%edx
0843d839 +0xad:  mov    %edx,0x8(%esp)
0843d83d +0xb1:  movl   $0x2,0x4(%esp)
0843d845 +0xb9:  mov    %eax,(%esp)
0843d848 +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843d84d +0xc1:  jmp    0843d86a <+0xde>
0843d84f +0xc3:  mov    %edx,%ebx
0843d851 +0xc5:  mov    %eax,%esi
0843d853 +0xc7:  lea    -0x10(%ebp),%eax
0843d856 +0xca:  mov    %eax,(%esp)
0843d859 +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843d85e +0xd2:  mov    %esi,%eax
0843d860 +0xd4:  mov    %ebx,%edx
0843d862 +0xd6:  mov    %eax,(%esp)
0843d865 +0xd9:  call   08ae3750 <_Unwind_Resume>
0843d86a +0xde:  lea    -0x10(%ebp),%eax
0843d86d +0xe1:  mov    %eax,(%esp)
0843d870 +0xe4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843d875 +0xe9:  add    $0x20,%esp
0843d878 +0xec:  pop    %ebx
0843d879 +0xed:  pop    %esi
0843d87a +0xee:  pop    %ebp
0843d87b +0xef:  ret
```

## 反编译 C

```c
// DB_CancelJoinGuild::makeRequest @ 0x843d78c

/* DB_CancelJoinGuild::makeRequest(int, unsigned int, unsigned int) */

void DB_CancelJoinGuild::makeRequest(int param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9234);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843d7de to 0843d84c has its CatchHandler @ 0843d84f */
  CStreamGuard::operator<<(pCVar2,0x218);
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
