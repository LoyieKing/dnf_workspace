# makeRequest

`_ZN28DB_CancelRestingUserRestrict11makeRequestEji`

`DB_CancelRestingUserRestrict::makeRequest(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_CancelRestingUserRestrict` | `0x0843741e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843741e  _ZN28DB_CancelRestingUserRestrict11makeRequestEji
#           DB_CancelRestingUserRestrict::makeRequest(unsigned int, int)
# range [0x0843741e, 0x084374f7]
0843741e +0x00:  push   %ebp
0843741f +0x01:  mov    %esp,%ebp
08437421 +0x03:  push   %esi
08437422 +0x04:  push   %ebx
08437423 +0x05:  sub    $0x20,%esp
08437426 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843742b +0x0d:  movl   $0x8389,0x8(%esp)
08437433 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843743b +0x1d:  mov    %eax,(%esp)
0843743e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08437443 +0x25:  movl   $0x1,0x8(%esp)
0843744b +0x2d:  mov    %eax,0x4(%esp)
0843744f +0x31:  lea    -0x14(%ebp),%eax
08437452 +0x34:  mov    %eax,(%esp)
08437455 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843745a +0x3c:  lea    -0x14(%ebp),%eax
0843745d +0x3f:  mov    %eax,(%esp)
08437460 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08437465 +0x47:  movl   $0x195,0x4(%esp)
0843746d +0x4f:  mov    %eax,(%esp)
08437470 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08437475 +0x57:  lea    -0x14(%ebp),%eax
08437478 +0x5a:  mov    %eax,(%esp)
0843747b +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08437480 +0x62:  mov    0xc(%ebp),%edx
08437483 +0x65:  mov    %edx,0x4(%esp)
08437487 +0x69:  mov    %eax,(%esp)
0843748a +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843748f +0x71:  lea    -0x14(%ebp),%eax
08437492 +0x74:  mov    %eax,(%esp)
08437495 +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843749a +0x7c:  mov    %eax,(%esp)
0843749d +0x7f:  call   08453514 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x612a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x612a
084374a2 +0x84:  mov    %eax,-0xc(%ebp)
084374a5 +0x87:  mov    -0xc(%ebp),%eax
084374a8 +0x8a:  mov    0x8(%ebp),%edx
084374ab +0x8d:  mov    %edx,(%eax)
084374ad +0x8f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084374b2 +0x94:  lea    -0x14(%ebp),%edx
084374b5 +0x97:  mov    %edx,0x8(%esp)
084374b9 +0x9b:  movl   $0x2,0x4(%esp)
084374c1 +0xa3:  mov    %eax,(%esp)
084374c4 +0xa6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084374c9 +0xab:  jmp    084374e6 <+0xc8>
084374cb +0xad:  mov    %edx,%ebx
084374cd +0xaf:  mov    %eax,%esi
084374cf +0xb1:  lea    -0x14(%ebp),%eax
084374d2 +0xb4:  mov    %eax,(%esp)
084374d5 +0xb7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084374da +0xbc:  mov    %esi,%eax
084374dc +0xbe:  mov    %ebx,%edx
084374de +0xc0:  mov    %eax,(%esp)
084374e1 +0xc3:  call   08ae3750 <_Unwind_Resume>
084374e6 +0xc8:  lea    -0x14(%ebp),%eax
084374e9 +0xcb:  mov    %eax,(%esp)
084374ec +0xce:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084374f1 +0xd3:  add    $0x20,%esp
084374f4 +0xd6:  pop    %ebx
084374f5 +0xd7:  pop    %esi
084374f6 +0xd8:  pop    %ebp
084374f7 +0xd9:  ret
```

## 反编译 C

```c
// DB_CancelRestingUserRestrict::makeRequest @ 0x843741e

/* DB_CancelRestingUserRestrict::makeRequest(unsigned int, int) */

void DB_CancelRestingUserRestrict::makeRequest(uint param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_RESTING_USER_RESTRICT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8389);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08437470 to 084374c8 has its CatchHandler @ 084374cb */
  CStreamGuard::operator<<(pCVar2,0x195);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_RESTING_USER_RESTRICT>(pCVar2);
  *(uint *)local_10 = param_1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
