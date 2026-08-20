# makeRequest

`_ZN25DB_EventGrowthWeaponReset11makeRequestEj`

`DB_EventGrowthWeaponReset::makeRequest(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_EventGrowthWeaponReset` | `0x08449980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08449980  _ZN25DB_EventGrowthWeaponReset11makeRequestEj
#           DB_EventGrowthWeaponReset::makeRequest(unsigned int)
# range [0x08449980, 0x08449a57]
08449980 +0x00:  push   %ebp
08449981 +0x01:  mov    %esp,%ebp
08449983 +0x03:  push   %esi
08449984 +0x04:  push   %ebx
08449985 +0x05:  sub    $0x20,%esp
08449988 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844998d +0x0d:  movl   $0xb95e,0x8(%esp)
08449995 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0844999d +0x1d:  mov    %eax,(%esp)
084499a0 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084499a5 +0x25:  movl   $0x1,0x8(%esp)
084499ad +0x2d:  mov    %eax,0x4(%esp)
084499b1 +0x31:  lea    -0x10(%ebp),%eax
084499b4 +0x34:  mov    %eax,(%esp)
084499b7 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084499bc +0x3c:  lea    -0x10(%ebp),%eax
084499bf +0x3f:  mov    %eax,(%esp)
084499c2 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084499c7 +0x47:  movl   $0x316,0x4(%esp)
084499cf +0x4f:  mov    %eax,(%esp)
084499d2 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084499d7 +0x57:  lea    -0x10(%ebp),%eax
084499da +0x5a:  mov    %eax,(%esp)
084499dd +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084499e2 +0x62:  movl   $0xffffffff,0x4(%esp)
084499ea +0x6a:  mov    %eax,(%esp)
084499ed +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084499f2 +0x72:  lea    -0x10(%ebp),%eax
084499f5 +0x75:  mov    %eax,(%esp)
084499f8 +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084499fd +0x7d:  mov    0x8(%ebp),%edx
08449a00 +0x80:  mov    %edx,0x4(%esp)
08449a04 +0x84:  mov    %eax,(%esp)
08449a07 +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08449a0c +0x8c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08449a11 +0x91:  lea    -0x10(%ebp),%edx
08449a14 +0x94:  mov    %edx,0x8(%esp)
08449a18 +0x98:  movl   $0x2,0x4(%esp)
08449a20 +0xa0:  mov    %eax,(%esp)
08449a23 +0xa3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08449a28 +0xa8:  jmp    08449a45 <+0xc5>
08449a2a +0xaa:  mov    %edx,%ebx
08449a2c +0xac:  mov    %eax,%esi
08449a2e +0xae:  lea    -0x10(%ebp),%eax
08449a31 +0xb1:  mov    %eax,(%esp)
08449a34 +0xb4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08449a39 +0xb9:  mov    %esi,%eax
08449a3b +0xbb:  mov    %ebx,%edx
08449a3d +0xbd:  mov    %eax,(%esp)
08449a40 +0xc0:  call   08ae3750 <_Unwind_Resume>
08449a45 +0xc5:  lea    -0x10(%ebp),%eax
08449a48 +0xc8:  mov    %eax,(%esp)
08449a4b +0xcb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08449a50 +0xd0:  add    $0x20,%esp
08449a53 +0xd3:  pop    %ebx
08449a54 +0xd4:  pop    %esi
08449a55 +0xd5:  pop    %ebp
08449a56 +0xd6:  ret
08449a57 +0xd7:  nop
```

## 反编译 C

```c
// DB_EventGrowthWeaponReset::makeRequest @ 0x8449980

/* DB_EventGrowthWeaponReset::makeRequest(unsigned int) */

void DB_EventGrowthWeaponReset::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb95e);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084499d2 to 08449a27 has its CatchHandler @ 08449a2a */
  CStreamGuard::operator<<(pCVar2,0x316);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
