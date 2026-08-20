# makeRequest

`_ZN28DB_UpdateUserFatigueQuantity11makeRequestEjj`

`DB_UpdateUserFatigueQuantity::makeRequest(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateUserFatigueQuantity` | `0x08441c2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08441c2a  _ZN28DB_UpdateUserFatigueQuantity11makeRequestEjj
#           DB_UpdateUserFatigueQuantity::makeRequest(unsigned int, unsigned int)
# range [0x08441c2a, 0x08441d1b]
08441c2a +0x00:  push   %ebp
08441c2b +0x01:  mov    %esp,%ebp
08441c2d +0x03:  push   %esi
08441c2e +0x04:  push   %ebx
08441c2f +0x05:  sub    $0x20,%esp
08441c32 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08441c37 +0x0d:  movl   $0xa14c,0x8(%esp)
08441c3f +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08441c47 +0x1d:  mov    %eax,(%esp)
08441c4a +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08441c4f +0x25:  movl   $0x1,0x8(%esp)
08441c57 +0x2d:  mov    %eax,0x4(%esp)
08441c5b +0x31:  lea    -0x10(%ebp),%eax
08441c5e +0x34:  mov    %eax,(%esp)
08441c61 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08441c66 +0x3c:  lea    -0x10(%ebp),%eax
08441c69 +0x3f:  mov    %eax,(%esp)
08441c6c +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08441c71 +0x47:  movl   $0x287,0x4(%esp)
08441c79 +0x4f:  mov    %eax,(%esp)
08441c7c +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08441c81 +0x57:  lea    -0x10(%ebp),%eax
08441c84 +0x5a:  mov    %eax,(%esp)
08441c87 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08441c8c +0x62:  movl   $0xffffffff,0x4(%esp)
08441c94 +0x6a:  mov    %eax,(%esp)
08441c97 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08441c9c +0x72:  lea    -0x10(%ebp),%eax
08441c9f +0x75:  mov    %eax,(%esp)
08441ca2 +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08441ca7 +0x7d:  mov    0x8(%ebp),%edx
08441caa +0x80:  mov    %edx,0x4(%esp)
08441cae +0x84:  mov    %eax,(%esp)
08441cb1 +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08441cb6 +0x8c:  lea    -0x10(%ebp),%eax
08441cb9 +0x8f:  mov    %eax,(%esp)
08441cbc +0x92:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08441cc1 +0x97:  mov    0xc(%ebp),%edx
08441cc4 +0x9a:  mov    %edx,0x4(%esp)
08441cc8 +0x9e:  mov    %eax,(%esp)
08441ccb +0xa1:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08441cd0 +0xa6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08441cd5 +0xab:  lea    -0x10(%ebp),%edx
08441cd8 +0xae:  mov    %edx,0x8(%esp)
08441cdc +0xb2:  movl   $0x2,0x4(%esp)
08441ce4 +0xba:  mov    %eax,(%esp)
08441ce7 +0xbd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08441cec +0xc2:  jmp    08441d09 <+0xdf>
08441cee +0xc4:  mov    %edx,%ebx
08441cf0 +0xc6:  mov    %eax,%esi
08441cf2 +0xc8:  lea    -0x10(%ebp),%eax
08441cf5 +0xcb:  mov    %eax,(%esp)
08441cf8 +0xce:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08441cfd +0xd3:  mov    %esi,%eax
08441cff +0xd5:  mov    %ebx,%edx
08441d01 +0xd7:  mov    %eax,(%esp)
08441d04 +0xda:  call   08ae3750 <_Unwind_Resume>
08441d09 +0xdf:  lea    -0x10(%ebp),%eax
08441d0c +0xe2:  mov    %eax,(%esp)
08441d0f +0xe5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08441d14 +0xea:  add    $0x20,%esp
08441d17 +0xed:  pop    %ebx
08441d18 +0xee:  pop    %esi
08441d19 +0xef:  pop    %ebp
08441d1a +0xf0:  ret
08441d1b +0xf1:  nop
```

## 反编译 C

```c
// DB_UpdateUserFatigueQuantity::makeRequest @ 0x8441c2a

/* DB_UpdateUserFatigueQuantity::makeRequest(unsigned int, unsigned int) */

void DB_UpdateUserFatigueQuantity::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa14c);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08441c7c to 08441ceb has its CatchHandler @ 08441cee */
  CStreamGuard::operator<<(pCVar2,0x287);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
