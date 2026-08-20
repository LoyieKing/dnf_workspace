# makeRequest

`_ZN26DB_UpdateAddItemCountValue11makeRequestEjj`

`DB_UpdateAddItemCountValue::makeRequest(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateAddItemCountValue` | `0x0843ef30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843ef30  _ZN26DB_UpdateAddItemCountValue11makeRequestEjj
#           DB_UpdateAddItemCountValue::makeRequest(unsigned int, unsigned int)
# range [0x0843ef30, 0x0843f021]
0843ef30 +0x00:  push   %ebp
0843ef31 +0x01:  mov    %esp,%ebp
0843ef33 +0x03:  push   %esi
0843ef34 +0x04:  push   %ebx
0843ef35 +0x05:  sub    $0x20,%esp
0843ef38 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843ef3d +0x0d:  movl   $0x9684,0x8(%esp)
0843ef45 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843ef4d +0x1d:  mov    %eax,(%esp)
0843ef50 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843ef55 +0x25:  movl   $0x1,0x8(%esp)
0843ef5d +0x2d:  mov    %eax,0x4(%esp)
0843ef61 +0x31:  lea    -0x10(%ebp),%eax
0843ef64 +0x34:  mov    %eax,(%esp)
0843ef67 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843ef6c +0x3c:  lea    -0x10(%ebp),%eax
0843ef6f +0x3f:  mov    %eax,(%esp)
0843ef72 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843ef77 +0x47:  movl   $0x280,0x4(%esp)
0843ef7f +0x4f:  mov    %eax,(%esp)
0843ef82 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843ef87 +0x57:  lea    -0x10(%ebp),%eax
0843ef8a +0x5a:  mov    %eax,(%esp)
0843ef8d +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843ef92 +0x62:  movl   $0xffffffff,0x4(%esp)
0843ef9a +0x6a:  mov    %eax,(%esp)
0843ef9d +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843efa2 +0x72:  lea    -0x10(%ebp),%eax
0843efa5 +0x75:  mov    %eax,(%esp)
0843efa8 +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843efad +0x7d:  mov    0x8(%ebp),%edx
0843efb0 +0x80:  mov    %edx,0x4(%esp)
0843efb4 +0x84:  mov    %eax,(%esp)
0843efb7 +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843efbc +0x8c:  lea    -0x10(%ebp),%eax
0843efbf +0x8f:  mov    %eax,(%esp)
0843efc2 +0x92:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843efc7 +0x97:  mov    0xc(%ebp),%edx
0843efca +0x9a:  mov    %edx,0x4(%esp)
0843efce +0x9e:  mov    %eax,(%esp)
0843efd1 +0xa1:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843efd6 +0xa6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843efdb +0xab:  lea    -0x10(%ebp),%edx
0843efde +0xae:  mov    %edx,0x8(%esp)
0843efe2 +0xb2:  movl   $0x2,0x4(%esp)
0843efea +0xba:  mov    %eax,(%esp)
0843efed +0xbd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843eff2 +0xc2:  jmp    0843f00f <+0xdf>
0843eff4 +0xc4:  mov    %edx,%ebx
0843eff6 +0xc6:  mov    %eax,%esi
0843eff8 +0xc8:  lea    -0x10(%ebp),%eax
0843effb +0xcb:  mov    %eax,(%esp)
0843effe +0xce:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843f003 +0xd3:  mov    %esi,%eax
0843f005 +0xd5:  mov    %ebx,%edx
0843f007 +0xd7:  mov    %eax,(%esp)
0843f00a +0xda:  call   08ae3750 <_Unwind_Resume>
0843f00f +0xdf:  lea    -0x10(%ebp),%eax
0843f012 +0xe2:  mov    %eax,(%esp)
0843f015 +0xe5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843f01a +0xea:  add    $0x20,%esp
0843f01d +0xed:  pop    %ebx
0843f01e +0xee:  pop    %esi
0843f01f +0xef:  pop    %ebp
0843f020 +0xf0:  ret
0843f021 +0xf1:  nop
```

## 反编译 C

```c
// DB_UpdateAddItemCountValue::makeRequest @ 0x843ef30

/* DB_UpdateAddItemCountValue::makeRequest(unsigned int, unsigned int) */

void DB_UpdateAddItemCountValue::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9684);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843ef82 to 0843eff1 has its CatchHandler @ 0843eff4 */
  CStreamGuard::operator<<(pCVar2,0x280);
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
