# makeRequest

`_ZN23DB_UpdateItemCountValue11makeRequestEjj`

`DB_UpdateItemCountValue::makeRequest(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateItemCountValue` | `0x0843eca4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843eca4  _ZN23DB_UpdateItemCountValue11makeRequestEjj
#           DB_UpdateItemCountValue::makeRequest(unsigned int, unsigned int)
# range [0x0843eca4, 0x0843ed95]
0843eca4 +0x00:  push   %ebp
0843eca5 +0x01:  mov    %esp,%ebp
0843eca7 +0x03:  push   %esi
0843eca8 +0x04:  push   %ebx
0843eca9 +0x05:  sub    $0x20,%esp
0843ecac +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843ecb1 +0x0d:  movl   $0x960e,0x8(%esp)
0843ecb9 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843ecc1 +0x1d:  mov    %eax,(%esp)
0843ecc4 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843ecc9 +0x25:  movl   $0x1,0x8(%esp)
0843ecd1 +0x2d:  mov    %eax,0x4(%esp)
0843ecd5 +0x31:  lea    -0x10(%ebp),%eax
0843ecd8 +0x34:  mov    %eax,(%esp)
0843ecdb +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843ece0 +0x3c:  lea    -0x10(%ebp),%eax
0843ece3 +0x3f:  mov    %eax,(%esp)
0843ece6 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843eceb +0x47:  movl   $0x240,0x4(%esp)
0843ecf3 +0x4f:  mov    %eax,(%esp)
0843ecf6 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843ecfb +0x57:  lea    -0x10(%ebp),%eax
0843ecfe +0x5a:  mov    %eax,(%esp)
0843ed01 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843ed06 +0x62:  movl   $0xffffffff,0x4(%esp)
0843ed0e +0x6a:  mov    %eax,(%esp)
0843ed11 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843ed16 +0x72:  lea    -0x10(%ebp),%eax
0843ed19 +0x75:  mov    %eax,(%esp)
0843ed1c +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843ed21 +0x7d:  mov    0x8(%ebp),%edx
0843ed24 +0x80:  mov    %edx,0x4(%esp)
0843ed28 +0x84:  mov    %eax,(%esp)
0843ed2b +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843ed30 +0x8c:  lea    -0x10(%ebp),%eax
0843ed33 +0x8f:  mov    %eax,(%esp)
0843ed36 +0x92:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843ed3b +0x97:  mov    0xc(%ebp),%edx
0843ed3e +0x9a:  mov    %edx,0x4(%esp)
0843ed42 +0x9e:  mov    %eax,(%esp)
0843ed45 +0xa1:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843ed4a +0xa6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843ed4f +0xab:  lea    -0x10(%ebp),%edx
0843ed52 +0xae:  mov    %edx,0x8(%esp)
0843ed56 +0xb2:  movl   $0x2,0x4(%esp)
0843ed5e +0xba:  mov    %eax,(%esp)
0843ed61 +0xbd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843ed66 +0xc2:  jmp    0843ed83 <+0xdf>
0843ed68 +0xc4:  mov    %edx,%ebx
0843ed6a +0xc6:  mov    %eax,%esi
0843ed6c +0xc8:  lea    -0x10(%ebp),%eax
0843ed6f +0xcb:  mov    %eax,(%esp)
0843ed72 +0xce:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843ed77 +0xd3:  mov    %esi,%eax
0843ed79 +0xd5:  mov    %ebx,%edx
0843ed7b +0xd7:  mov    %eax,(%esp)
0843ed7e +0xda:  call   08ae3750 <_Unwind_Resume>
0843ed83 +0xdf:  lea    -0x10(%ebp),%eax
0843ed86 +0xe2:  mov    %eax,(%esp)
0843ed89 +0xe5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843ed8e +0xea:  add    $0x20,%esp
0843ed91 +0xed:  pop    %ebx
0843ed92 +0xee:  pop    %esi
0843ed93 +0xef:  pop    %ebp
0843ed94 +0xf0:  ret
0843ed95 +0xf1:  nop
```

## 反编译 C

```c
// DB_UpdateItemCountValue::makeRequest @ 0x843eca4

/* DB_UpdateItemCountValue::makeRequest(unsigned int, unsigned int) */

void DB_UpdateItemCountValue::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x960e);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843ecf6 to 0843ed65 has its CatchHandler @ 0843ed68 */
  CStreamGuard::operator<<(pCVar2,0x240);
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
