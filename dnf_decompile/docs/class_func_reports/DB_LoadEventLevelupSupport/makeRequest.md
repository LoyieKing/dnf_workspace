# makeRequest

`_ZN26DB_LoadEventLevelupSupport11makeRequestEii`

`DB_LoadEventLevelupSupport::makeRequest(int, int)`

| 类 | 地址 |
|---|---|
| `DB_LoadEventLevelupSupport` | `0x0844d0a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844d0a6  _ZN26DB_LoadEventLevelupSupport11makeRequestEii
#           DB_LoadEventLevelupSupport::makeRequest(int, int)
# range [0x0844d0a6, 0x0844d17b]
0844d0a6 +0x00:  push   %ebp
0844d0a7 +0x01:  mov    %esp,%ebp
0844d0a9 +0x03:  push   %esi
0844d0aa +0x04:  push   %ebx
0844d0ab +0x05:  sub    $0x20,%esp
0844d0ae +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844d0b3 +0x0d:  movl   $0xc2a0,0x8(%esp)
0844d0bb +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0844d0c3 +0x1d:  mov    %eax,(%esp)
0844d0c6 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844d0cb +0x25:  movl   $0x1,0x8(%esp)
0844d0d3 +0x2d:  mov    %eax,0x4(%esp)
0844d0d7 +0x31:  lea    -0x10(%ebp),%eax
0844d0da +0x34:  mov    %eax,(%esp)
0844d0dd +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844d0e2 +0x3c:  lea    -0x10(%ebp),%eax
0844d0e5 +0x3f:  mov    %eax,(%esp)
0844d0e8 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844d0ed +0x47:  movl   $0x350,0x4(%esp)
0844d0f5 +0x4f:  mov    %eax,(%esp)
0844d0f8 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844d0fd +0x57:  lea    -0x10(%ebp),%eax
0844d100 +0x5a:  mov    %eax,(%esp)
0844d103 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844d108 +0x62:  mov    0x8(%ebp),%edx
0844d10b +0x65:  mov    %edx,0x4(%esp)
0844d10f +0x69:  mov    %eax,(%esp)
0844d112 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844d117 +0x71:  lea    -0x10(%ebp),%eax
0844d11a +0x74:  mov    %eax,(%esp)
0844d11d +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844d122 +0x7c:  mov    0xc(%ebp),%edx
0844d125 +0x7f:  mov    %edx,0x4(%esp)
0844d129 +0x83:  mov    %eax,(%esp)
0844d12c +0x86:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844d131 +0x8b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844d136 +0x90:  lea    -0x10(%ebp),%edx
0844d139 +0x93:  mov    %edx,0x8(%esp)
0844d13d +0x97:  movl   $0x2,0x4(%esp)
0844d145 +0x9f:  mov    %eax,(%esp)
0844d148 +0xa2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844d14d +0xa7:  jmp    0844d16a <+0xc4>
0844d14f +0xa9:  mov    %edx,%ebx
0844d151 +0xab:  mov    %eax,%esi
0844d153 +0xad:  lea    -0x10(%ebp),%eax
0844d156 +0xb0:  mov    %eax,(%esp)
0844d159 +0xb3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844d15e +0xb8:  mov    %esi,%eax
0844d160 +0xba:  mov    %ebx,%edx
0844d162 +0xbc:  mov    %eax,(%esp)
0844d165 +0xbf:  call   08ae3750 <_Unwind_Resume>
0844d16a +0xc4:  lea    -0x10(%ebp),%eax
0844d16d +0xc7:  mov    %eax,(%esp)
0844d170 +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844d175 +0xcf:  add    $0x20,%esp
0844d178 +0xd2:  pop    %ebx
0844d179 +0xd3:  pop    %esi
0844d17a +0xd4:  pop    %ebp
0844d17b +0xd5:  ret
```

## 反编译 C

```c
// DB_LoadEventLevelupSupport::makeRequest @ 0x844d0a6

/* DB_LoadEventLevelupSupport::makeRequest(int, int) */

void DB_LoadEventLevelupSupport::makeRequest(int param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xc2a0);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844d0f8 to 0844d14c has its CatchHandler @ 0844d14f */
  CStreamGuard::operator<<(pCVar2,0x350);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
