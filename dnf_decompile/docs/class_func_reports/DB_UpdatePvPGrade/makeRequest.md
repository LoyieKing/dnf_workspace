# makeRequest

`_ZN17DB_UpdatePvPGrade11makeRequestEv`

`DB_UpdatePvPGrade::makeRequest()`

| 类 | 地址 |
|---|---|
| `DB_UpdatePvPGrade` | `0x084293a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084293a0  _ZN17DB_UpdatePvPGrade11makeRequestEv
#           DB_UpdatePvPGrade::makeRequest()
# range [0x084293a0, 0x0842945d]
084293a0 +0x00:  push   %ebp
084293a1 +0x01:  mov    %esp,%ebp
084293a3 +0x03:  push   %esi
084293a4 +0x04:  push   %ebx
084293a5 +0x05:  sub    $0x20,%esp
084293a8 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084293ad +0x0d:  movl   $0x6ac8,0x8(%esp)
084293b5 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084293bd +0x1d:  mov    %eax,(%esp)
084293c0 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084293c5 +0x25:  movl   $0x1,0x8(%esp)
084293cd +0x2d:  mov    %eax,0x4(%esp)
084293d1 +0x31:  lea    -0x10(%ebp),%eax
084293d4 +0x34:  mov    %eax,(%esp)
084293d7 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084293dc +0x3c:  lea    -0x10(%ebp),%eax
084293df +0x3f:  mov    %eax,(%esp)
084293e2 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084293e7 +0x47:  movl   $0xd4,0x4(%esp)
084293ef +0x4f:  mov    %eax,(%esp)
084293f2 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084293f7 +0x57:  lea    -0x10(%ebp),%eax
084293fa +0x5a:  mov    %eax,(%esp)
084293fd +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08429402 +0x62:  movl   $0xffffffff,0x4(%esp)
0842940a +0x6a:  mov    %eax,(%esp)
0842940d +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08429412 +0x72:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08429417 +0x77:  lea    -0x10(%ebp),%edx
0842941a +0x7a:  mov    %edx,0x8(%esp)
0842941e +0x7e:  movl   $0x2,0x4(%esp)
08429426 +0x86:  mov    %eax,(%esp)
08429429 +0x89:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842942e +0x8e:  jmp    0842944b <+0xab>
08429430 +0x90:  mov    %edx,%ebx
08429432 +0x92:  mov    %eax,%esi
08429434 +0x94:  lea    -0x10(%ebp),%eax
08429437 +0x97:  mov    %eax,(%esp)
0842943a +0x9a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842943f +0x9f:  mov    %esi,%eax
08429441 +0xa1:  mov    %ebx,%edx
08429443 +0xa3:  mov    %eax,(%esp)
08429446 +0xa6:  call   08ae3750 <_Unwind_Resume>
0842944b +0xab:  lea    -0x10(%ebp),%eax
0842944e +0xae:  mov    %eax,(%esp)
08429451 +0xb1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08429456 +0xb6:  add    $0x20,%esp
08429459 +0xb9:  pop    %ebx
0842945a +0xba:  pop    %esi
0842945b +0xbb:  pop    %ebp
0842945c +0xbc:  ret
0842945d +0xbd:  nop
```

## 反编译 C

```c
// DB_UpdatePvPGrade::makeRequest @ 0x84293a0

/* DB_UpdatePvPGrade::makeRequest() */

void DB_UpdatePvPGrade::makeRequest(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6ac8);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084293f2 to 0842942d has its CatchHandler @ 08429430 */
  CStreamGuard::operator<<(pCVar2,0xd4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
