# makeRequest

`_ZN31DB_UpdateChuseokPackagePurchase11makeRequestEj`

`DB_UpdateChuseokPackagePurchase::makeRequest(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateChuseokPackagePurchase` | `0x0843c8b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843c8b6  _ZN31DB_UpdateChuseokPackagePurchase11makeRequestEj
#           DB_UpdateChuseokPackagePurchase::makeRequest(unsigned int)
# range [0x0843c8b6, 0x0843c98d]
0843c8b6 +0x00:  push   %ebp
0843c8b7 +0x01:  mov    %esp,%ebp
0843c8b9 +0x03:  push   %esi
0843c8ba +0x04:  push   %ebx
0843c8bb +0x05:  sub    $0x20,%esp
0843c8be +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843c8c3 +0x0d:  movl   $0x90bd,0x8(%esp)
0843c8cb +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843c8d3 +0x1d:  mov    %eax,(%esp)
0843c8d6 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843c8db +0x25:  movl   $0x1,0x8(%esp)
0843c8e3 +0x2d:  mov    %eax,0x4(%esp)
0843c8e7 +0x31:  lea    -0x10(%ebp),%eax
0843c8ea +0x34:  mov    %eax,(%esp)
0843c8ed +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843c8f2 +0x3c:  lea    -0x10(%ebp),%eax
0843c8f5 +0x3f:  mov    %eax,(%esp)
0843c8f8 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c8fd +0x47:  movl   $0x213,0x4(%esp)
0843c905 +0x4f:  mov    %eax,(%esp)
0843c908 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843c90d +0x57:  lea    -0x10(%ebp),%eax
0843c910 +0x5a:  mov    %eax,(%esp)
0843c913 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c918 +0x62:  movl   $0xffffffff,0x4(%esp)
0843c920 +0x6a:  mov    %eax,(%esp)
0843c923 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843c928 +0x72:  lea    -0x10(%ebp),%eax
0843c92b +0x75:  mov    %eax,(%esp)
0843c92e +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c933 +0x7d:  mov    0x8(%ebp),%edx
0843c936 +0x80:  mov    %edx,0x4(%esp)
0843c93a +0x84:  mov    %eax,(%esp)
0843c93d +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843c942 +0x8c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843c947 +0x91:  lea    -0x10(%ebp),%edx
0843c94a +0x94:  mov    %edx,0x8(%esp)
0843c94e +0x98:  movl   $0x2,0x4(%esp)
0843c956 +0xa0:  mov    %eax,(%esp)
0843c959 +0xa3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843c95e +0xa8:  jmp    0843c97b <+0xc5>
0843c960 +0xaa:  mov    %edx,%ebx
0843c962 +0xac:  mov    %eax,%esi
0843c964 +0xae:  lea    -0x10(%ebp),%eax
0843c967 +0xb1:  mov    %eax,(%esp)
0843c96a +0xb4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843c96f +0xb9:  mov    %esi,%eax
0843c971 +0xbb:  mov    %ebx,%edx
0843c973 +0xbd:  mov    %eax,(%esp)
0843c976 +0xc0:  call   08ae3750 <_Unwind_Resume>
0843c97b +0xc5:  lea    -0x10(%ebp),%eax
0843c97e +0xc8:  mov    %eax,(%esp)
0843c981 +0xcb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843c986 +0xd0:  add    $0x20,%esp
0843c989 +0xd3:  pop    %ebx
0843c98a +0xd4:  pop    %esi
0843c98b +0xd5:  pop    %ebp
0843c98c +0xd6:  ret
0843c98d +0xd7:  nop
```

## 反编译 C

```c
// DB_UpdateChuseokPackagePurchase::makeRequest @ 0x843c8b6

/* DB_UpdateChuseokPackagePurchase::makeRequest(unsigned int) */

void DB_UpdateChuseokPackagePurchase::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x90bd);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843c908 to 0843c95d has its CatchHandler @ 0843c960 */
  CStreamGuard::operator<<(pCVar2,0x213);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
