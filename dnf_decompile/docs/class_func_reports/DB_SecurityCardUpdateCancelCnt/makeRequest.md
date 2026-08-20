# makeRequest

`_ZN30DB_SecurityCardUpdateCancelCnt11makeRequestEjj`

`DB_SecurityCardUpdateCancelCnt::makeRequest(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardUpdateCancelCnt` | `0x0842c112` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842c112  _ZN30DB_SecurityCardUpdateCancelCnt11makeRequestEjj
#           DB_SecurityCardUpdateCancelCnt::makeRequest(unsigned int, unsigned int)
# range [0x0842c112, 0x0842c1f5]
0842c112 +0x00:  push   %ebp
0842c113 +0x01:  mov    %esp,%ebp
0842c115 +0x03:  push   %esi
0842c116 +0x04:  push   %ebx
0842c117 +0x05:  sub    $0x20,%esp
0842c11a +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842c11f +0x0d:  movl   $0x6f25,0x8(%esp)
0842c127 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0842c12f +0x1d:  mov    %eax,(%esp)
0842c132 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842c137 +0x25:  movl   $0x1,0x8(%esp)
0842c13f +0x2d:  mov    %eax,0x4(%esp)
0842c143 +0x31:  lea    -0x14(%ebp),%eax
0842c146 +0x34:  mov    %eax,(%esp)
0842c149 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842c14e +0x3c:  lea    -0x14(%ebp),%eax
0842c151 +0x3f:  mov    %eax,(%esp)
0842c154 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842c159 +0x47:  movl   $0x102,0x4(%esp)
0842c161 +0x4f:  mov    %eax,(%esp)
0842c164 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842c169 +0x57:  lea    -0x14(%ebp),%eax
0842c16c +0x5a:  mov    %eax,(%esp)
0842c16f +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842c174 +0x62:  movl   $0xffffffff,0x4(%esp)
0842c17c +0x6a:  mov    %eax,(%esp)
0842c17f +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842c184 +0x72:  lea    -0x14(%ebp),%eax
0842c187 +0x75:  mov    %eax,(%esp)
0842c18a +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842c18f +0x7d:  mov    %eax,(%esp)
0842c192 +0x80:  call   08451e1a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4a30>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4a30
0842c197 +0x85:  mov    %eax,-0xc(%ebp)
0842c19a +0x88:  mov    -0xc(%ebp),%eax
0842c19d +0x8b:  mov    0x8(%ebp),%edx
0842c1a0 +0x8e:  mov    %edx,(%eax)
0842c1a2 +0x90:  mov    -0xc(%ebp),%eax
0842c1a5 +0x93:  mov    0xc(%ebp),%edx
0842c1a8 +0x96:  mov    %edx,0x4(%eax)
0842c1ab +0x99:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842c1b0 +0x9e:  lea    -0x14(%ebp),%edx
0842c1b3 +0xa1:  mov    %edx,0x8(%esp)
0842c1b7 +0xa5:  movl   $0x2,0x4(%esp)
0842c1bf +0xad:  mov    %eax,(%esp)
0842c1c2 +0xb0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842c1c7 +0xb5:  jmp    0842c1e4 <+0xd2>
0842c1c9 +0xb7:  mov    %edx,%ebx
0842c1cb +0xb9:  mov    %eax,%esi
0842c1cd +0xbb:  lea    -0x14(%ebp),%eax
0842c1d0 +0xbe:  mov    %eax,(%esp)
0842c1d3 +0xc1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842c1d8 +0xc6:  mov    %esi,%eax
0842c1da +0xc8:  mov    %ebx,%edx
0842c1dc +0xca:  mov    %eax,(%esp)
0842c1df +0xcd:  call   08ae3750 <_Unwind_Resume>
0842c1e4 +0xd2:  lea    -0x14(%ebp),%eax
0842c1e7 +0xd5:  mov    %eax,(%esp)
0842c1ea +0xd8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842c1ef +0xdd:  add    $0x20,%esp
0842c1f2 +0xe0:  pop    %ebx
0842c1f3 +0xe1:  pop    %esi
0842c1f4 +0xe2:  pop    %ebp
0842c1f5 +0xe3:  ret
```

## 反编译 C

```c
// DB_SecurityCardUpdateCancelCnt::makeRequest @ 0x842c112

/* DB_SecurityCardUpdateCancelCnt::makeRequest(unsigned int, unsigned int) */

void DB_SecurityCardUpdateCancelCnt::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6f25);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842c164 to 0842c1c6 has its CatchHandler @ 0842c1c9 */
  CStreamGuard::operator<<(pCVar2,0x102);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
