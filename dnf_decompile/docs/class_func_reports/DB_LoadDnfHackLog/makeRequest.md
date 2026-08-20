# makeRequest

`_ZN17DB_LoadDnfHackLog11makeRequestEij`

`DB_LoadDnfHackLog::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_LoadDnfHackLog` | `0x084224ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084224ce  _ZN17DB_LoadDnfHackLog11makeRequestEij
#           DB_LoadDnfHackLog::makeRequest(int, unsigned int)
# range [0x084224ce, 0x084225a7]
084224ce +0x00:  push   %ebp
084224cf +0x01:  mov    %esp,%ebp
084224d1 +0x03:  push   %esi
084224d2 +0x04:  push   %ebx
084224d3 +0x05:  sub    $0x20,%esp
084224d6 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084224db +0x0d:  movl   $0x5abf,0x8(%esp)
084224e3 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084224eb +0x1d:  mov    %eax,(%esp)
084224ee +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084224f3 +0x25:  movl   $0x1,0x8(%esp)
084224fb +0x2d:  mov    %eax,0x4(%esp)
084224ff +0x31:  lea    -0x14(%ebp),%eax
08422502 +0x34:  mov    %eax,(%esp)
08422505 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842250a +0x3c:  lea    -0x14(%ebp),%eax
0842250d +0x3f:  mov    %eax,(%esp)
08422510 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08422515 +0x47:  movl   $0x106,0x4(%esp)
0842251d +0x4f:  mov    %eax,(%esp)
08422520 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08422525 +0x57:  lea    -0x14(%ebp),%eax
08422528 +0x5a:  mov    %eax,(%esp)
0842252b +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08422530 +0x62:  mov    0x8(%ebp),%edx
08422533 +0x65:  mov    %edx,0x4(%esp)
08422537 +0x69:  mov    %eax,(%esp)
0842253a +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842253f +0x71:  lea    -0x14(%ebp),%eax
08422542 +0x74:  mov    %eax,(%esp)
08422545 +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842254a +0x7c:  mov    %eax,(%esp)
0842254d +0x7f:  call   08451c4a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4860>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4860
08422552 +0x84:  mov    %eax,-0xc(%ebp)
08422555 +0x87:  mov    -0xc(%ebp),%eax
08422558 +0x8a:  mov    0xc(%ebp),%edx
0842255b +0x8d:  mov    %edx,(%eax)
0842255d +0x8f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08422562 +0x94:  lea    -0x14(%ebp),%edx
08422565 +0x97:  mov    %edx,0x8(%esp)
08422569 +0x9b:  movl   $0x4,0x4(%esp)
08422571 +0xa3:  mov    %eax,(%esp)
08422574 +0xa6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08422579 +0xab:  jmp    08422596 <+0xc8>
0842257b +0xad:  mov    %edx,%ebx
0842257d +0xaf:  mov    %eax,%esi
0842257f +0xb1:  lea    -0x14(%ebp),%eax
08422582 +0xb4:  mov    %eax,(%esp)
08422585 +0xb7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842258a +0xbc:  mov    %esi,%eax
0842258c +0xbe:  mov    %ebx,%edx
0842258e +0xc0:  mov    %eax,(%esp)
08422591 +0xc3:  call   08ae3750 <_Unwind_Resume>
08422596 +0xc8:  lea    -0x14(%ebp),%eax
08422599 +0xcb:  mov    %eax,(%esp)
0842259c +0xce:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084225a1 +0xd3:  add    $0x20,%esp
084225a4 +0xd6:  pop    %ebx
084225a5 +0xd7:  pop    %esi
084225a6 +0xd8:  pop    %ebp
084225a7 +0xd9:  ret
```

## 反编译 C

```c
// DB_LoadDnfHackLog::makeRequest @ 0x84224ce

/* DB_LoadDnfHackLog::makeRequest(int, unsigned int) */

void DB_LoadDnfHackLog::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_LOAD_DNF_HACK_LOG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5abf);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08422520 to 08422578 has its CatchHandler @ 0842257b */
  CStreamGuard::operator<<(pCVar2,0x106);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_DNF_HACK_LOG>(pCVar2);
  *(uint *)local_10 = param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
