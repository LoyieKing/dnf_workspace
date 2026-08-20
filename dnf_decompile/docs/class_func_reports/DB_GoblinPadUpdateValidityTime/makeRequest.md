# makeRequest

`_ZN30DB_GoblinPadUpdateValidityTime11makeRequestEjj`

`DB_GoblinPadUpdateValidityTime::makeRequest(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_GoblinPadUpdateValidityTime` | `0x0842f2ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842f2ae  _ZN30DB_GoblinPadUpdateValidityTime11makeRequestEjj
#           DB_GoblinPadUpdateValidityTime::makeRequest(unsigned int, unsigned int)
# range [0x0842f2ae, 0x0842f39f]
0842f2ae +0x00:  push   %ebp
0842f2af +0x01:  mov    %esp,%ebp
0842f2b1 +0x03:  push   %esi
0842f2b2 +0x04:  push   %ebx
0842f2b3 +0x05:  sub    $0x20,%esp
0842f2b6 +0x08:  cmpl   $0x0,0x8(%ebp)
0842f2ba +0x0c:  je     0842f397 <+0xe9>
0842f2c0 +0x12:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842f2c5 +0x17:  movl   $0x7453,0x8(%esp)
0842f2cd +0x1f:  movl   $"DBThread.cpp",0x4(%esp)
0842f2d5 +0x27:  mov    %eax,(%esp)
0842f2d8 +0x2a:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842f2dd +0x2f:  movl   $0x1,0x8(%esp)
0842f2e5 +0x37:  mov    %eax,0x4(%esp)
0842f2e9 +0x3b:  lea    -0x14(%ebp),%eax
0842f2ec +0x3e:  mov    %eax,(%esp)
0842f2ef +0x41:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842f2f4 +0x46:  lea    -0x14(%ebp),%eax
0842f2f7 +0x49:  mov    %eax,(%esp)
0842f2fa +0x4c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842f2ff +0x51:  movl   $0x12c,0x4(%esp)
0842f307 +0x59:  mov    %eax,(%esp)
0842f30a +0x5c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842f30f +0x61:  lea    -0x14(%ebp),%eax
0842f312 +0x64:  mov    %eax,(%esp)
0842f315 +0x67:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842f31a +0x6c:  movl   $0xffffffff,0x4(%esp)
0842f322 +0x74:  mov    %eax,(%esp)
0842f325 +0x77:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842f32a +0x7c:  lea    -0x14(%ebp),%eax
0842f32d +0x7f:  mov    %eax,(%esp)
0842f330 +0x82:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842f335 +0x87:  mov    %eax,(%esp)
0842f338 +0x8a:  call   08452ad8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x56ee>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x56ee
0842f33d +0x8f:  mov    %eax,-0xc(%ebp)
0842f340 +0x92:  mov    -0xc(%ebp),%eax
0842f343 +0x95:  mov    0x8(%ebp),%edx
0842f346 +0x98:  mov    %edx,(%eax)
0842f348 +0x9a:  mov    -0xc(%ebp),%eax
0842f34b +0x9d:  mov    0xc(%ebp),%edx
0842f34e +0xa0:  mov    %edx,0x4(%eax)
0842f351 +0xa3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842f356 +0xa8:  lea    -0x14(%ebp),%edx
0842f359 +0xab:  mov    %edx,0x8(%esp)
0842f35d +0xaf:  movl   $0x2,0x4(%esp)
0842f365 +0xb7:  mov    %eax,(%esp)
0842f368 +0xba:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842f36d +0xbf:  jmp    0842f38a <+0xdc>
0842f36f +0xc1:  mov    %edx,%ebx
0842f371 +0xc3:  mov    %eax,%esi
0842f373 +0xc5:  lea    -0x14(%ebp),%eax
0842f376 +0xc8:  mov    %eax,(%esp)
0842f379 +0xcb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842f37e +0xd0:  mov    %esi,%eax
0842f380 +0xd2:  mov    %ebx,%edx
0842f382 +0xd4:  mov    %eax,(%esp)
0842f385 +0xd7:  call   08ae3750 <_Unwind_Resume>
0842f38a +0xdc:  lea    -0x14(%ebp),%eax
0842f38d +0xdf:  mov    %eax,(%esp)
0842f390 +0xe2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842f395 +0xe7:  jmp    0842f398 <+0xea>
0842f397 +0xe9:  nop
0842f398 +0xea:  add    $0x20,%esp
0842f39b +0xed:  pop    %ebx
0842f39c +0xee:  pop    %esi
0842f39d +0xef:  pop    %ebp
0842f39e +0xf0:  ret
0842f39f +0xf1:  nop
```

## 反编译 C

```c
// DB_GoblinPadUpdateValidityTime::makeRequest @ 0x842f2ae

/* DB_GoblinPadUpdateValidityTime::makeRequest(unsigned int, unsigned int) */

void DB_GoblinPadUpdateValidityTime::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_GOBLIN_UPDATE_VALIDITYTIME *local_10;
  
  if (param_1 != 0) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7453);
    CStreamGuard::CStreamGuard(local_18,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842f30a to 0842f36c has its CatchHandler @ 0842f36f */
    CStreamGuard::operator<<(pCVar2,300);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_GOBLIN_UPDATE_VALIDITYTIME>(pCVar2);
    *(uint *)local_10 = param_1;
    *(uint *)(local_10 + 4) = param_2;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}
```
