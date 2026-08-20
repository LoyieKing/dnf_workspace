# makeRequest

`_ZN26DB_DeathTowerLoadTopRanker11makeRequestEb`

`DB_DeathTowerLoadTopRanker::makeRequest(bool)`

| 类 | 地址 |
|---|---|
| `DB_DeathTowerLoadTopRanker` | `0x0842a910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842a910  _ZN26DB_DeathTowerLoadTopRanker11makeRequestEb
#           DB_DeathTowerLoadTopRanker::makeRequest(bool)
# range [0x0842a910, 0x0842a9fb]
0842a910 +0x00:  push   %ebp
0842a911 +0x01:  mov    %esp,%ebp
0842a913 +0x03:  push   %esi
0842a914 +0x04:  push   %ebx
0842a915 +0x05:  sub    $0x30,%esp
0842a918 +0x08:  mov    0x8(%ebp),%eax
0842a91b +0x0b:  mov    %al,-0x1c(%ebp)
0842a91e +0x0e:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
0842a923 +0x13:  movl   $0x6c5f,0x8(%esp)
0842a92b +0x1b:  movl   $"DBThread.cpp",0x4(%esp)
0842a933 +0x23:  mov    %eax,(%esp)
0842a936 +0x26:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
0842a93b +0x2b:  movl   $0x1,0x8(%esp)
0842a943 +0x33:  mov    %eax,0x4(%esp)
0842a947 +0x37:  lea    -0x10(%ebp),%eax
0842a94a +0x3a:  mov    %eax,(%esp)
0842a94d +0x3d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842a952 +0x42:  lea    -0x10(%ebp),%eax
0842a955 +0x45:  mov    %eax,(%esp)
0842a958 +0x48:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842a95d +0x4d:  movl   $0xe4,0x4(%esp)
0842a965 +0x55:  mov    %eax,(%esp)
0842a968 +0x58:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842a96d +0x5d:  lea    -0x10(%ebp),%eax
0842a970 +0x60:  mov    %eax,(%esp)
0842a973 +0x63:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842a978 +0x68:  movl   $0xffffffff,0x4(%esp)
0842a980 +0x70:  mov    %eax,(%esp)
0842a983 +0x73:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842a988 +0x78:  cmpb   $0x0,-0x1c(%ebp)
0842a98c +0x7c:  je     0842a995 <+0x85>
0842a98e +0x7e:  mov    $0x1,%ebx
0842a993 +0x83:  jmp    0842a99a <+0x8a>
0842a995 +0x85:  mov    $0x0,%ebx
0842a99a +0x8a:  lea    -0x10(%ebp),%eax
0842a99d +0x8d:  mov    %eax,(%esp)
0842a9a0 +0x90:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842a9a5 +0x95:  mov    %ebx,0x4(%esp)
0842a9a9 +0x99:  mov    %eax,(%esp)
0842a9ac +0x9c:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
0842a9b1 +0xa1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842a9b6 +0xa6:  lea    -0x10(%ebp),%edx
0842a9b9 +0xa9:  mov    %edx,0x8(%esp)
0842a9bd +0xad:  movl   $0x2,0x4(%esp)
0842a9c5 +0xb5:  mov    %eax,(%esp)
0842a9c8 +0xb8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842a9cd +0xbd:  jmp    0842a9ea <+0xda>
0842a9cf +0xbf:  mov    %edx,%ebx
0842a9d1 +0xc1:  mov    %eax,%esi
0842a9d3 +0xc3:  lea    -0x10(%ebp),%eax
0842a9d6 +0xc6:  mov    %eax,(%esp)
0842a9d9 +0xc9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842a9de +0xce:  mov    %esi,%eax
0842a9e0 +0xd0:  mov    %ebx,%edx
0842a9e2 +0xd2:  mov    %eax,(%esp)
0842a9e5 +0xd5:  call   08ae3750 <_Unwind_Resume>
0842a9ea +0xda:  lea    -0x10(%ebp),%eax
0842a9ed +0xdd:  mov    %eax,(%esp)
0842a9f0 +0xe0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842a9f5 +0xe5:  add    $0x30,%esp
0842a9f8 +0xe8:  pop    %ebx
0842a9f9 +0xe9:  pop    %esi
0842a9fa +0xea:  pop    %ebp
0842a9fb +0xeb:  ret
```

## 反编译 C

```c
// DB_DeathTowerLoadTopRanker::makeRequest @ 0x842a910

/* DB_DeathTowerLoadTopRanker::makeRequest(bool) */

void DB_DeathTowerLoadTopRanker::makeRequest(bool param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x6c5f);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842a968 to 0842a9cc has its CatchHandler @ 0842a9cf */
  CStreamGuard::operator<<(pCVar2,0xe4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
