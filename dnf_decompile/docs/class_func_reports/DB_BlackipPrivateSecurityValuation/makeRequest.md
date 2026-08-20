# makeRequest

`_ZN34DB_BlackipPrivateSecurityValuation11makeRequestEj`

`DB_BlackipPrivateSecurityValuation::makeRequest(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_BlackipPrivateSecurityValuation` | `0x084355ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084355ca  _ZN34DB_BlackipPrivateSecurityValuation11makeRequestEj
#           DB_BlackipPrivateSecurityValuation::makeRequest(unsigned int)
# range [0x084355ca, 0x084356a1]
084355ca +0x00:  push   %ebp
084355cb +0x01:  mov    %esp,%ebp
084355cd +0x03:  push   %esi
084355ce +0x04:  push   %ebx
084355cf +0x05:  sub    $0x20,%esp
084355d2 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084355d7 +0x0d:  movl   $0x7fa1,0x8(%esp)
084355df +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084355e7 +0x1d:  mov    %eax,(%esp)
084355ea +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084355ef +0x25:  movl   $0x1,0x8(%esp)
084355f7 +0x2d:  mov    %eax,0x4(%esp)
084355fb +0x31:  lea    -0x10(%ebp),%eax
084355fe +0x34:  mov    %eax,(%esp)
08435601 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08435606 +0x3c:  lea    -0x10(%ebp),%eax
08435609 +0x3f:  mov    %eax,(%esp)
0843560c +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08435611 +0x47:  movl   $0x164,0x4(%esp)
08435619 +0x4f:  mov    %eax,(%esp)
0843561c +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08435621 +0x57:  lea    -0x10(%ebp),%eax
08435624 +0x5a:  mov    %eax,(%esp)
08435627 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843562c +0x62:  movl   $0xffffffff,0x4(%esp)
08435634 +0x6a:  mov    %eax,(%esp)
08435637 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843563c +0x72:  lea    -0x10(%ebp),%eax
0843563f +0x75:  mov    %eax,(%esp)
08435642 +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08435647 +0x7d:  mov    0x8(%ebp),%edx
0843564a +0x80:  mov    %edx,0x4(%esp)
0843564e +0x84:  mov    %eax,(%esp)
08435651 +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08435656 +0x8c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843565b +0x91:  lea    -0x10(%ebp),%edx
0843565e +0x94:  mov    %edx,0x8(%esp)
08435662 +0x98:  movl   $0x2,0x4(%esp)
0843566a +0xa0:  mov    %eax,(%esp)
0843566d +0xa3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08435672 +0xa8:  jmp    0843568f <+0xc5>
08435674 +0xaa:  mov    %edx,%ebx
08435676 +0xac:  mov    %eax,%esi
08435678 +0xae:  lea    -0x10(%ebp),%eax
0843567b +0xb1:  mov    %eax,(%esp)
0843567e +0xb4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08435683 +0xb9:  mov    %esi,%eax
08435685 +0xbb:  mov    %ebx,%edx
08435687 +0xbd:  mov    %eax,(%esp)
0843568a +0xc0:  call   08ae3750 <_Unwind_Resume>
0843568f +0xc5:  lea    -0x10(%ebp),%eax
08435692 +0xc8:  mov    %eax,(%esp)
08435695 +0xcb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843569a +0xd0:  add    $0x20,%esp
0843569d +0xd3:  pop    %ebx
0843569e +0xd4:  pop    %esi
0843569f +0xd5:  pop    %ebp
084356a0 +0xd6:  ret
084356a1 +0xd7:  nop
```

## 反编译 C

```c
// DB_BlackipPrivateSecurityValuation::makeRequest @ 0x84355ca

/* DB_BlackipPrivateSecurityValuation::makeRequest(unsigned int) */

void DB_BlackipPrivateSecurityValuation::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7fa1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843561c to 08435671 has its CatchHandler @ 08435674 */
  CStreamGuard::operator<<(pCVar2,0x164);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
