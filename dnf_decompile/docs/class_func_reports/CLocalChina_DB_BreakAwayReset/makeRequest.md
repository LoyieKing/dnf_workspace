# makeRequest

`_ZN29CLocalChina_DB_BreakAwayReset11makeRequestEj`

`CLocalChina_DB_BreakAwayReset::makeRequest(unsigned int)`

| 类 | 地址 |
|---|---|
| `CLocalChina_DB_BreakAwayReset` | `0x08127f42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08127f42  _ZN29CLocalChina_DB_BreakAwayReset11makeRequestEj
#           CLocalChina_DB_BreakAwayReset::makeRequest(unsigned int)
# range [0x08127f42, 0x08128019]
08127f42 +0x00:  push   %ebp
08127f43 +0x01:  mov    %esp,%ebp
08127f45 +0x03:  push   %esi
08127f46 +0x04:  push   %ebx
08127f47 +0x05:  sub    $0x20,%esp
08127f4a +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08127f4f +0x0d:  movl   $0x408,0x8(%esp)
08127f57 +0x15:  movl   $"localchina/localchina_DBThread.cpp",0x4(%esp)
08127f5f +0x1d:  mov    %eax,(%esp)
08127f62 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08127f67 +0x25:  movl   $0x1,0x8(%esp)
08127f6f +0x2d:  mov    %eax,0x4(%esp)
08127f73 +0x31:  lea    -0x10(%ebp),%eax
08127f76 +0x34:  mov    %eax,(%esp)
08127f79 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08127f7e +0x3c:  lea    -0x10(%ebp),%eax
08127f81 +0x3f:  mov    %eax,(%esp)
08127f84 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08127f89 +0x47:  movl   $0x2dd,0x4(%esp)
08127f91 +0x4f:  mov    %eax,(%esp)
08127f94 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08127f99 +0x57:  lea    -0x10(%ebp),%eax
08127f9c +0x5a:  mov    %eax,(%esp)
08127f9f +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08127fa4 +0x62:  movl   $0xffffffff,0x4(%esp)
08127fac +0x6a:  mov    %eax,(%esp)
08127faf +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08127fb4 +0x72:  lea    -0x10(%ebp),%eax
08127fb7 +0x75:  mov    %eax,(%esp)
08127fba +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08127fbf +0x7d:  mov    0x8(%ebp),%edx
08127fc2 +0x80:  mov    %edx,0x4(%esp)
08127fc6 +0x84:  mov    %eax,(%esp)
08127fc9 +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08127fce +0x8c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08127fd3 +0x91:  lea    -0x10(%ebp),%edx
08127fd6 +0x94:  mov    %edx,0x8(%esp)
08127fda +0x98:  movl   $0x2,0x4(%esp)
08127fe2 +0xa0:  mov    %eax,(%esp)
08127fe5 +0xa3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08127fea +0xa8:  jmp    08128007 <+0xc5>
08127fec +0xaa:  mov    %edx,%ebx
08127fee +0xac:  mov    %eax,%esi
08127ff0 +0xae:  lea    -0x10(%ebp),%eax
08127ff3 +0xb1:  mov    %eax,(%esp)
08127ff6 +0xb4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08127ffb +0xb9:  mov    %esi,%eax
08127ffd +0xbb:  mov    %ebx,%edx
08127fff +0xbd:  mov    %eax,(%esp)
08128002 +0xc0:  call   08ae3750 <_Unwind_Resume>
08128007 +0xc5:  lea    -0x10(%ebp),%eax
0812800a +0xc8:  mov    %eax,(%esp)
0812800d +0xcb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08128012 +0xd0:  add    $0x20,%esp
08128015 +0xd3:  pop    %ebx
08128016 +0xd4:  pop    %esi
08128017 +0xd5:  pop    %ebp
08128018 +0xd6:  ret
08128019 +0xd7:  nop
```

## 反编译 C

```c
// CLocalChina_DB_BreakAwayReset::makeRequest @ 0x8127f42

/* CLocalChina_DB_BreakAwayReset::makeRequest(unsigned int) */

void CLocalChina_DB_BreakAwayReset::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localchina/localchina_DBThread.cpp",0x408)
  ;
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08127f94 to 08127fe9 has its CatchHandler @ 08127fec */
  CStreamGuard::operator<<(pCVar2,0x2dd);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
