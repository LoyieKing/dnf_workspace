# makeRequest

`_ZN22DB_InsertEventStageLog11makeRequestER19SIG_EVENT_STAGE_LOG`

`DB_InsertEventStageLog::makeRequest(SIG_EVENT_STAGE_LOG&)`

| 类 | 地址 |
|---|---|
| `DB_InsertEventStageLog` | `0x0844920e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844920e  _ZN22DB_InsertEventStageLog11makeRequestER19SIG_EVENT_STAGE_LOG
#           DB_InsertEventStageLog::makeRequest(SIG_EVENT_STAGE_LOG&)
# range [0x0844920e, 0x084492fb]
0844920e +0x00:  push   %ebp
0844920f +0x01:  mov    %esp,%ebp
08449211 +0x03:  push   %esi
08449212 +0x04:  push   %ebx
08449213 +0x05:  sub    $0x20,%esp
08449216 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844921b +0x0d:  movl   $0xb7df,0x8(%esp)
08449223 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0844922b +0x1d:  mov    %eax,(%esp)
0844922e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08449233 +0x25:  movl   $0x1,0x8(%esp)
0844923b +0x2d:  mov    %eax,0x4(%esp)
0844923f +0x31:  lea    -0x14(%ebp),%eax
08449242 +0x34:  mov    %eax,(%esp)
08449245 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844924a +0x3c:  lea    -0x14(%ebp),%eax
0844924d +0x3f:  mov    %eax,(%esp)
08449250 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449255 +0x47:  movl   $0x333,0x4(%esp)
0844925d +0x4f:  mov    %eax,(%esp)
08449260 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449265 +0x57:  lea    -0x14(%ebp),%eax
08449268 +0x5a:  mov    %eax,(%esp)
0844926b +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449270 +0x62:  movl   $0xffffffff,0x4(%esp)
08449278 +0x6a:  mov    %eax,(%esp)
0844927b +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449280 +0x72:  lea    -0x14(%ebp),%eax
08449283 +0x75:  mov    %eax,(%esp)
08449286 +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0844928b +0x7d:  mov    %eax,(%esp)
0844928e +0x80:  call   084546ce <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x72e4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x72e4
08449293 +0x85:  mov    %eax,-0xc(%ebp)
08449296 +0x88:  movl   $0x78,0x8(%esp)
0844929e +0x90:  mov    0x8(%ebp),%eax
084492a1 +0x93:  mov    %eax,0x4(%esp)
084492a5 +0x97:  mov    -0xc(%ebp),%eax
084492a8 +0x9a:  mov    %eax,(%esp)
084492ab +0x9d:  call   0807d8a0 <_init+0x198>
084492b0 +0xa2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084492b5 +0xa7:  lea    -0x14(%ebp),%edx
084492b8 +0xaa:  mov    %edx,0x8(%esp)
084492bc +0xae:  movl   $0x2,0x4(%esp)
084492c4 +0xb6:  mov    %eax,(%esp)
084492c7 +0xb9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084492cc +0xbe:  jmp    084492e9 <+0xdb>
084492ce +0xc0:  mov    %edx,%ebx
084492d0 +0xc2:  mov    %eax,%esi
084492d2 +0xc4:  lea    -0x14(%ebp),%eax
084492d5 +0xc7:  mov    %eax,(%esp)
084492d8 +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084492dd +0xcf:  mov    %esi,%eax
084492df +0xd1:  mov    %ebx,%edx
084492e1 +0xd3:  mov    %eax,(%esp)
084492e4 +0xd6:  call   08ae3750 <_Unwind_Resume>
084492e9 +0xdb:  lea    -0x14(%ebp),%eax
084492ec +0xde:  mov    %eax,(%esp)
084492ef +0xe1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084492f4 +0xe6:  add    $0x20,%esp
084492f7 +0xe9:  pop    %ebx
084492f8 +0xea:  pop    %esi
084492f9 +0xeb:  pop    %ebp
084492fa +0xec:  ret
084492fb +0xed:  nop
```

## 反编译 C

```c
// DB_InsertEventStageLog::makeRequest @ 0x844920e

/* DB_InsertEventStageLog::makeRequest(SIG_EVENT_STAGE_LOG&) */

void DB_InsertEventStageLog::makeRequest(SIG_EVENT_STAGE_LOG *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_EVENT_STAGE_LOG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb7df);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08449260 to 084492cb has its CatchHandler @ 084492ce */
  CStreamGuard::operator<<(pCVar2,0x333);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_EVENT_STAGE_LOG>(pCVar2);
  memcpy(local_10,param_1,0x78);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
