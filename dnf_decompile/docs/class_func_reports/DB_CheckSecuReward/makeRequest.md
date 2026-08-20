# makeRequest

`_ZN18DB_CheckSecuReward11makeRequestEiji`

`DB_CheckSecuReward::makeRequest(int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_CheckSecuReward` | `0x08444408` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08444408  _ZN18DB_CheckSecuReward11makeRequestEiji
#           DB_CheckSecuReward::makeRequest(int, unsigned int, int)
# range [0x08444408, 0x084444eb]
08444408 +0x00:  push   %ebp
08444409 +0x01:  mov    %esp,%ebp
0844440b +0x03:  push   %esi
0844440c +0x04:  push   %ebx
0844440d +0x05:  sub    $0x20,%esp
08444410 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08444415 +0x0d:  movl   $0xab34,0x8(%esp)
0844441d +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08444425 +0x1d:  mov    %eax,(%esp)
08444428 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844442d +0x25:  movl   $0x1,0x8(%esp)
08444435 +0x2d:  mov    %eax,0x4(%esp)
08444439 +0x31:  lea    -0x14(%ebp),%eax
0844443c +0x34:  mov    %eax,(%esp)
0844443f +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08444444 +0x3c:  lea    -0x14(%ebp),%eax
08444447 +0x3f:  mov    %eax,(%esp)
0844444a +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844444f +0x47:  movl   $0x2ab,0x4(%esp)
08444457 +0x4f:  mov    %eax,(%esp)
0844445a +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844445f +0x57:  lea    -0x14(%ebp),%eax
08444462 +0x5a:  mov    %eax,(%esp)
08444465 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844446a +0x62:  mov    0x8(%ebp),%edx
0844446d +0x65:  mov    %edx,0x4(%esp)
08444471 +0x69:  mov    %eax,(%esp)
08444474 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444479 +0x71:  lea    -0x14(%ebp),%eax
0844447c +0x74:  mov    %eax,(%esp)
0844447f +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08444484 +0x7c:  mov    %eax,(%esp)
08444487 +0x7f:  call   0845406e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6c84>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6c84
0844448c +0x84:  mov    %eax,-0xc(%ebp)
0844448f +0x87:  mov    -0xc(%ebp),%eax
08444492 +0x8a:  mov    0xc(%ebp),%edx
08444495 +0x8d:  mov    %edx,(%eax)
08444497 +0x8f:  mov    -0xc(%ebp),%eax
0844449a +0x92:  mov    0x10(%ebp),%edx
0844449d +0x95:  mov    %edx,0x4(%eax)
084444a0 +0x98:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084444a5 +0x9d:  lea    -0x14(%ebp),%edx
084444a8 +0xa0:  mov    %edx,0x8(%esp)
084444ac +0xa4:  movl   $0x2,0x4(%esp)
084444b4 +0xac:  mov    %eax,(%esp)
084444b7 +0xaf:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084444bc +0xb4:  jmp    084444d9 <+0xd1>
084444be +0xb6:  mov    %edx,%ebx
084444c0 +0xb8:  mov    %eax,%esi
084444c2 +0xba:  lea    -0x14(%ebp),%eax
084444c5 +0xbd:  mov    %eax,(%esp)
084444c8 +0xc0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084444cd +0xc5:  mov    %esi,%eax
084444cf +0xc7:  mov    %ebx,%edx
084444d1 +0xc9:  mov    %eax,(%esp)
084444d4 +0xcc:  call   08ae3750 <_Unwind_Resume>
084444d9 +0xd1:  lea    -0x14(%ebp),%eax
084444dc +0xd4:  mov    %eax,(%esp)
084444df +0xd7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084444e4 +0xdc:  add    $0x20,%esp
084444e7 +0xdf:  pop    %ebx
084444e8 +0xe0:  pop    %esi
084444e9 +0xe1:  pop    %ebp
084444ea +0xe2:  ret
084444eb +0xe3:  nop
```

## 反编译 C

```c
// DB_CheckSecuReward::makeRequest @ 0x8444408

/* DB_CheckSecuReward::makeRequest(int, unsigned int, int) */

void DB_CheckSecuReward::makeRequest(int param_1,uint param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_CHECK_USER_SECU_REWARD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xab34);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0844445a to 084444bb has its CatchHandler @ 084444be */
  CStreamGuard::operator<<(pCVar2,0x2ab);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_USER_SECU_REWARD>(pCVar2);
  *(uint *)local_10 = param_2;
  *(int *)(local_10 + 4) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
