# makeRequest

`_ZN26DB_GetDeathTowerBestRecord11makeRequestEij`

`DB_GetDeathTowerBestRecord::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_GetDeathTowerBestRecord` | `0x0842a048` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842a048  _ZN26DB_GetDeathTowerBestRecord11makeRequestEij
#           DB_GetDeathTowerBestRecord::makeRequest(int, unsigned int)
# range [0x0842a048, 0x0842a11d]
0842a048 +0x00:  push   %ebp
0842a049 +0x01:  mov    %esp,%ebp
0842a04b +0x03:  push   %esi
0842a04c +0x04:  push   %ebx
0842a04d +0x05:  sub    $0x20,%esp
0842a050 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842a055 +0x0d:  movl   $0x6be0,0x8(%esp)
0842a05d +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0842a065 +0x1d:  mov    %eax,(%esp)
0842a068 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842a06d +0x25:  movl   $0x1,0x8(%esp)
0842a075 +0x2d:  mov    %eax,0x4(%esp)
0842a079 +0x31:  lea    -0x10(%ebp),%eax
0842a07c +0x34:  mov    %eax,(%esp)
0842a07f +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842a084 +0x3c:  lea    -0x10(%ebp),%eax
0842a087 +0x3f:  mov    %eax,(%esp)
0842a08a +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842a08f +0x47:  movl   $0xe2,0x4(%esp)
0842a097 +0x4f:  mov    %eax,(%esp)
0842a09a +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842a09f +0x57:  lea    -0x10(%ebp),%eax
0842a0a2 +0x5a:  mov    %eax,(%esp)
0842a0a5 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842a0aa +0x62:  mov    0x8(%ebp),%edx
0842a0ad +0x65:  mov    %edx,0x4(%esp)
0842a0b1 +0x69:  mov    %eax,(%esp)
0842a0b4 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842a0b9 +0x71:  lea    -0x10(%ebp),%eax
0842a0bc +0x74:  mov    %eax,(%esp)
0842a0bf +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842a0c4 +0x7c:  mov    0xc(%ebp),%edx
0842a0c7 +0x7f:  mov    %edx,0x4(%esp)
0842a0cb +0x83:  mov    %eax,(%esp)
0842a0ce +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0842a0d3 +0x8b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842a0d8 +0x90:  lea    -0x10(%ebp),%edx
0842a0db +0x93:  mov    %edx,0x8(%esp)
0842a0df +0x97:  movl   $0x2,0x4(%esp)
0842a0e7 +0x9f:  mov    %eax,(%esp)
0842a0ea +0xa2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842a0ef +0xa7:  jmp    0842a10c <+0xc4>
0842a0f1 +0xa9:  mov    %edx,%ebx
0842a0f3 +0xab:  mov    %eax,%esi
0842a0f5 +0xad:  lea    -0x10(%ebp),%eax
0842a0f8 +0xb0:  mov    %eax,(%esp)
0842a0fb +0xb3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842a100 +0xb8:  mov    %esi,%eax
0842a102 +0xba:  mov    %ebx,%edx
0842a104 +0xbc:  mov    %eax,(%esp)
0842a107 +0xbf:  call   08ae3750 <_Unwind_Resume>
0842a10c +0xc4:  lea    -0x10(%ebp),%eax
0842a10f +0xc7:  mov    %eax,(%esp)
0842a112 +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842a117 +0xcf:  add    $0x20,%esp
0842a11a +0xd2:  pop    %ebx
0842a11b +0xd3:  pop    %esi
0842a11c +0xd4:  pop    %ebp
0842a11d +0xd5:  ret
```

## 反编译 C

```c
// DB_GetDeathTowerBestRecord::makeRequest @ 0x842a048

/* DB_GetDeathTowerBestRecord::makeRequest(int, unsigned int) */

void DB_GetDeathTowerBestRecord::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6be0);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842a09a to 0842a0ee has its CatchHandler @ 0842a0f1 */
  CStreamGuard::operator<<(pCVar2,0xe2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
