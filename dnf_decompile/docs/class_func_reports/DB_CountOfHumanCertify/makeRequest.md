# makeRequest

`_ZN22DB_CountOfHumanCertify11makeRequestEj`

`DB_CountOfHumanCertify::makeRequest(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_CountOfHumanCertify` | `0x084283ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084283ca  _ZN22DB_CountOfHumanCertify11makeRequestEj
#           DB_CountOfHumanCertify::makeRequest(unsigned int)
# range [0x084283ca, 0x084284a1]
084283ca +0x00:  push   %ebp
084283cb +0x01:  mov    %esp,%ebp
084283cd +0x03:  push   %esi
084283ce +0x04:  push   %ebx
084283cf +0x05:  sub    $0x20,%esp
084283d2 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084283d7 +0x0d:  movl   $0x69d6,0x8(%esp)
084283df +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084283e7 +0x1d:  mov    %eax,(%esp)
084283ea +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084283ef +0x25:  movl   $0x1,0x8(%esp)
084283f7 +0x2d:  mov    %eax,0x4(%esp)
084283fb +0x31:  lea    -0x10(%ebp),%eax
084283fe +0x34:  mov    %eax,(%esp)
08428401 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08428406 +0x3c:  lea    -0x10(%ebp),%eax
08428409 +0x3f:  mov    %eax,(%esp)
0842840c +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08428411 +0x47:  movl   $0x111,0x4(%esp)
08428419 +0x4f:  mov    %eax,(%esp)
0842841c +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08428421 +0x57:  lea    -0x10(%ebp),%eax
08428424 +0x5a:  mov    %eax,(%esp)
08428427 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842842c +0x62:  movl   $0xffffffff,0x4(%esp)
08428434 +0x6a:  mov    %eax,(%esp)
08428437 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842843c +0x72:  lea    -0x10(%ebp),%eax
0842843f +0x75:  mov    %eax,(%esp)
08428442 +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08428447 +0x7d:  mov    0x8(%ebp),%edx
0842844a +0x80:  mov    %edx,0x4(%esp)
0842844e +0x84:  mov    %eax,(%esp)
08428451 +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08428456 +0x8c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842845b +0x91:  lea    -0x10(%ebp),%edx
0842845e +0x94:  mov    %edx,0x8(%esp)
08428462 +0x98:  movl   $0x2,0x4(%esp)
0842846a +0xa0:  mov    %eax,(%esp)
0842846d +0xa3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08428472 +0xa8:  jmp    0842848f <+0xc5>
08428474 +0xaa:  mov    %edx,%ebx
08428476 +0xac:  mov    %eax,%esi
08428478 +0xae:  lea    -0x10(%ebp),%eax
0842847b +0xb1:  mov    %eax,(%esp)
0842847e +0xb4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08428483 +0xb9:  mov    %esi,%eax
08428485 +0xbb:  mov    %ebx,%edx
08428487 +0xbd:  mov    %eax,(%esp)
0842848a +0xc0:  call   08ae3750 <_Unwind_Resume>
0842848f +0xc5:  lea    -0x10(%ebp),%eax
08428492 +0xc8:  mov    %eax,(%esp)
08428495 +0xcb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842849a +0xd0:  add    $0x20,%esp
0842849d +0xd3:  pop    %ebx
0842849e +0xd4:  pop    %esi
0842849f +0xd5:  pop    %ebp
084284a0 +0xd6:  ret
084284a1 +0xd7:  nop
```

## 反编译 C

```c
// DB_CountOfHumanCertify::makeRequest @ 0x84283ca

/* DB_CountOfHumanCertify::makeRequest(unsigned int) */

void DB_CountOfHumanCertify::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x69d6);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842841c to 08428471 has its CatchHandler @ 08428474 */
  CStreamGuard::operator<<(pCVar2,0x111);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
