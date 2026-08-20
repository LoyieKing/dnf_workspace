# makeRequest

`_ZN33DB_SecurityCardUpdateValidityTime11makeRequestEjj`

`DB_SecurityCardUpdateValidityTime::makeRequest(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardUpdateValidityTime` | `0x0842bce8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842bce8  _ZN33DB_SecurityCardUpdateValidityTime11makeRequestEjj
#           DB_SecurityCardUpdateValidityTime::makeRequest(unsigned int, unsigned int)
# range [0x0842bce8, 0x0842bdd9]
0842bce8 +0x00:  push   %ebp
0842bce9 +0x01:  mov    %esp,%ebp
0842bceb +0x03:  push   %esi
0842bcec +0x04:  push   %ebx
0842bced +0x05:  sub    $0x20,%esp
0842bcf0 +0x08:  cmpl   $0x0,0x8(%ebp)
0842bcf4 +0x0c:  je     0842bdd1 <+0xe9>
0842bcfa +0x12:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842bcff +0x17:  movl   $0x6ebb,0x8(%esp)
0842bd07 +0x1f:  movl   $"DBThread.cpp",0x4(%esp)
0842bd0f +0x27:  mov    %eax,(%esp)
0842bd12 +0x2a:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842bd17 +0x2f:  movl   $0x1,0x8(%esp)
0842bd1f +0x37:  mov    %eax,0x4(%esp)
0842bd23 +0x3b:  lea    -0x14(%ebp),%eax
0842bd26 +0x3e:  mov    %eax,(%esp)
0842bd29 +0x41:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842bd2e +0x46:  lea    -0x14(%ebp),%eax
0842bd31 +0x49:  mov    %eax,(%esp)
0842bd34 +0x4c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842bd39 +0x51:  movl   $0x100,0x4(%esp)
0842bd41 +0x59:  mov    %eax,(%esp)
0842bd44 +0x5c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842bd49 +0x61:  lea    -0x14(%ebp),%eax
0842bd4c +0x64:  mov    %eax,(%esp)
0842bd4f +0x67:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842bd54 +0x6c:  movl   $0xffffffff,0x4(%esp)
0842bd5c +0x74:  mov    %eax,(%esp)
0842bd5f +0x77:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842bd64 +0x7c:  lea    -0x14(%ebp),%eax
0842bd67 +0x7f:  mov    %eax,(%esp)
0842bd6a +0x82:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842bd6f +0x87:  mov    %eax,(%esp)
0842bd72 +0x8a:  call   08452746 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x535c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x535c
0842bd77 +0x8f:  mov    %eax,-0xc(%ebp)
0842bd7a +0x92:  mov    -0xc(%ebp),%eax
0842bd7d +0x95:  mov    0x8(%ebp),%edx
0842bd80 +0x98:  mov    %edx,(%eax)
0842bd82 +0x9a:  mov    -0xc(%ebp),%eax
0842bd85 +0x9d:  mov    0xc(%ebp),%edx
0842bd88 +0xa0:  mov    %edx,0x4(%eax)
0842bd8b +0xa3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842bd90 +0xa8:  lea    -0x14(%ebp),%edx
0842bd93 +0xab:  mov    %edx,0x8(%esp)
0842bd97 +0xaf:  movl   $0x2,0x4(%esp)
0842bd9f +0xb7:  mov    %eax,(%esp)
0842bda2 +0xba:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842bda7 +0xbf:  jmp    0842bdc4 <+0xdc>
0842bda9 +0xc1:  mov    %edx,%ebx
0842bdab +0xc3:  mov    %eax,%esi
0842bdad +0xc5:  lea    -0x14(%ebp),%eax
0842bdb0 +0xc8:  mov    %eax,(%esp)
0842bdb3 +0xcb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842bdb8 +0xd0:  mov    %esi,%eax
0842bdba +0xd2:  mov    %ebx,%edx
0842bdbc +0xd4:  mov    %eax,(%esp)
0842bdbf +0xd7:  call   08ae3750 <_Unwind_Resume>
0842bdc4 +0xdc:  lea    -0x14(%ebp),%eax
0842bdc7 +0xdf:  mov    %eax,(%esp)
0842bdca +0xe2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842bdcf +0xe7:  jmp    0842bdd2 <+0xea>
0842bdd1 +0xe9:  nop
0842bdd2 +0xea:  add    $0x20,%esp
0842bdd5 +0xed:  pop    %ebx
0842bdd6 +0xee:  pop    %esi
0842bdd7 +0xef:  pop    %ebp
0842bdd8 +0xf0:  ret
0842bdd9 +0xf1:  nop
```

## 反编译 C

```c
// DB_SecurityCardUpdateValidityTime::makeRequest @ 0x842bce8

/* DB_SecurityCardUpdateValidityTime::makeRequest(unsigned int, unsigned int) */

void DB_SecurityCardUpdateValidityTime::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_UPDATE_VALIDITYTIME *local_10;
  
  if (param_1 != 0) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6ebb);
    CStreamGuard::CStreamGuard(local_18,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842bd44 to 0842bda6 has its CatchHandler @ 0842bda9 */
    CStreamGuard::operator<<(pCVar2,0x100);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_UPDATE_VALIDITYTIME>(pCVar2);
    *(uint *)local_10 = param_1;
    *(uint *)(local_10 + 4) = param_2;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}
```
