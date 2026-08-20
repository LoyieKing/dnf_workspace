# makeRequest

`_ZN24DB_InsertAttendanceEvent11makeRequestEijj`

`DB_InsertAttendanceEvent::makeRequest(int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_InsertAttendanceEvent` | `0x08448afe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08448afe  _ZN24DB_InsertAttendanceEvent11makeRequestEijj
#           DB_InsertAttendanceEvent::makeRequest(int, unsigned int, unsigned int)
# range [0x08448afe, 0x08448bed]
08448afe +0x00:  push   %ebp
08448aff +0x01:  mov    %esp,%ebp
08448b01 +0x03:  push   %esi
08448b02 +0x04:  push   %ebx
08448b03 +0x05:  sub    $0x20,%esp
08448b06 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08448b0b +0x0d:  movl   $0xb651,0x8(%esp)
08448b13 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08448b1b +0x1d:  mov    %eax,(%esp)
08448b1e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08448b23 +0x25:  movl   $0x1,0x8(%esp)
08448b2b +0x2d:  mov    %eax,0x4(%esp)
08448b2f +0x31:  lea    -0x10(%ebp),%eax
08448b32 +0x34:  mov    %eax,(%esp)
08448b35 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08448b3a +0x3c:  lea    -0x10(%ebp),%eax
08448b3d +0x3f:  mov    %eax,(%esp)
08448b40 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08448b45 +0x47:  movl   $0x30e,0x4(%esp)
08448b4d +0x4f:  mov    %eax,(%esp)
08448b50 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08448b55 +0x57:  lea    -0x10(%ebp),%eax
08448b58 +0x5a:  mov    %eax,(%esp)
08448b5b +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08448b60 +0x62:  mov    0x8(%ebp),%edx
08448b63 +0x65:  mov    %edx,0x4(%esp)
08448b67 +0x69:  mov    %eax,(%esp)
08448b6a +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08448b6f +0x71:  lea    -0x10(%ebp),%eax
08448b72 +0x74:  mov    %eax,(%esp)
08448b75 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08448b7a +0x7c:  mov    0xc(%ebp),%edx
08448b7d +0x7f:  mov    %edx,0x4(%esp)
08448b81 +0x83:  mov    %eax,(%esp)
08448b84 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08448b89 +0x8b:  lea    -0x10(%ebp),%eax
08448b8c +0x8e:  mov    %eax,(%esp)
08448b8f +0x91:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08448b94 +0x96:  mov    0x10(%ebp),%edx
08448b97 +0x99:  mov    %edx,0x4(%esp)
08448b9b +0x9d:  mov    %eax,(%esp)
08448b9e +0xa0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08448ba3 +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08448ba8 +0xaa:  lea    -0x10(%ebp),%edx
08448bab +0xad:  mov    %edx,0x8(%esp)
08448baf +0xb1:  movl   $0x2,0x4(%esp)
08448bb7 +0xb9:  mov    %eax,(%esp)
08448bba +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08448bbf +0xc1:  jmp    08448bdc <+0xde>
08448bc1 +0xc3:  mov    %edx,%ebx
08448bc3 +0xc5:  mov    %eax,%esi
08448bc5 +0xc7:  lea    -0x10(%ebp),%eax
08448bc8 +0xca:  mov    %eax,(%esp)
08448bcb +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08448bd0 +0xd2:  mov    %esi,%eax
08448bd2 +0xd4:  mov    %ebx,%edx
08448bd4 +0xd6:  mov    %eax,(%esp)
08448bd7 +0xd9:  call   08ae3750 <_Unwind_Resume>
08448bdc +0xde:  lea    -0x10(%ebp),%eax
08448bdf +0xe1:  mov    %eax,(%esp)
08448be2 +0xe4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08448be7 +0xe9:  add    $0x20,%esp
08448bea +0xec:  pop    %ebx
08448beb +0xed:  pop    %esi
08448bec +0xee:  pop    %ebp
08448bed +0xef:  ret
```

## 反编译 C

```c
// DB_InsertAttendanceEvent::makeRequest @ 0x8448afe

/* DB_InsertAttendanceEvent::makeRequest(int, unsigned int, unsigned int) */

void DB_InsertAttendanceEvent::makeRequest(int param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb651);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08448b50 to 08448bbe has its CatchHandler @ 08448bc1 */
  CStreamGuard::operator<<(pCVar2,0x30e);
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
