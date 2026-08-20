# makeRequest

`_ZN28DB_ReqQueryCharacInfoMailbox11makeRequestEiPKc`

`DB_ReqQueryCharacInfoMailbox::makeRequest(int, char const*)`

| 类 | 地址 |
|---|---|
| `DB_ReqQueryCharacInfoMailbox` | `0x0843c138` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843c138  _ZN28DB_ReqQueryCharacInfoMailbox11makeRequestEiPKc
#           DB_ReqQueryCharacInfoMailbox::makeRequest(int, char const*)
# range [0x0843c138, 0x0843c223]
0843c138 +0x00:  push   %ebp
0843c139 +0x01:  mov    %esp,%ebp
0843c13b +0x03:  push   %esi
0843c13c +0x04:  push   %ebx
0843c13d +0x05:  sub    $0x20,%esp
0843c140 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843c145 +0x0d:  movl   $0x8ec5,0x8(%esp)
0843c14d +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843c155 +0x1d:  mov    %eax,(%esp)
0843c158 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843c15d +0x25:  movl   $0x1,0x8(%esp)
0843c165 +0x2d:  mov    %eax,0x4(%esp)
0843c169 +0x31:  lea    -0x14(%ebp),%eax
0843c16c +0x34:  mov    %eax,(%esp)
0843c16f +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843c174 +0x3c:  lea    -0x14(%ebp),%eax
0843c177 +0x3f:  mov    %eax,(%esp)
0843c17a +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c17f +0x47:  movl   $0x1f6,0x4(%esp)
0843c187 +0x4f:  mov    %eax,(%esp)
0843c18a +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843c18f +0x57:  lea    -0x14(%ebp),%eax
0843c192 +0x5a:  mov    %eax,(%esp)
0843c195 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c19a +0x62:  mov    0x8(%ebp),%edx
0843c19d +0x65:  mov    %edx,0x4(%esp)
0843c1a1 +0x69:  mov    %eax,(%esp)
0843c1a4 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843c1a9 +0x71:  lea    -0x14(%ebp),%eax
0843c1ac +0x74:  mov    %eax,(%esp)
0843c1af +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843c1b4 +0x7c:  mov    %eax,(%esp)
0843c1b7 +0x7f:  call   08452128 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4d3e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4d3e
0843c1bc +0x84:  mov    %eax,-0xc(%ebp)
0843c1bf +0x87:  mov    -0xc(%ebp),%eax
0843c1c2 +0x8a:  movl   $0x1d,0x8(%esp)
0843c1ca +0x92:  mov    0xc(%ebp),%edx
0843c1cd +0x95:  mov    %edx,0x4(%esp)
0843c1d1 +0x99:  mov    %eax,(%esp)
0843c1d4 +0x9c:  call   0807d8d0 <_init+0x1c8>
0843c1d9 +0xa1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843c1de +0xa6:  lea    -0x14(%ebp),%edx
0843c1e1 +0xa9:  mov    %edx,0x8(%esp)
0843c1e5 +0xad:  movl   $0x2,0x4(%esp)
0843c1ed +0xb5:  mov    %eax,(%esp)
0843c1f0 +0xb8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843c1f5 +0xbd:  jmp    0843c212 <+0xda>
0843c1f7 +0xbf:  mov    %edx,%ebx
0843c1f9 +0xc1:  mov    %eax,%esi
0843c1fb +0xc3:  lea    -0x14(%ebp),%eax
0843c1fe +0xc6:  mov    %eax,(%esp)
0843c201 +0xc9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843c206 +0xce:  mov    %esi,%eax
0843c208 +0xd0:  mov    %ebx,%edx
0843c20a +0xd2:  mov    %eax,(%esp)
0843c20d +0xd5:  call   08ae3750 <_Unwind_Resume>
0843c212 +0xda:  lea    -0x14(%ebp),%eax
0843c215 +0xdd:  mov    %eax,(%esp)
0843c218 +0xe0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843c21d +0xe5:  add    $0x20,%esp
0843c220 +0xe8:  pop    %ebx
0843c221 +0xe9:  pop    %esi
0843c222 +0xea:  pop    %ebp
0843c223 +0xeb:  ret
```

## 反编译 C

```c
// DB_ReqQueryCharacInfoMailbox::makeRequest @ 0x843c138

/* DB_ReqQueryCharacInfoMailbox::makeRequest(int, char const*) */

void DB_ReqQueryCharacInfoMailbox::makeRequest(int param_1,char *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_QUERY_CHARAC_INFO *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8ec5);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843c18a to 0843c1f4 has its CatchHandler @ 0843c1f7 */
  CStreamGuard::operator<<(pCVar2,0x1f6);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_QUERY_CHARAC_INFO>(pCVar2);
  strncpy((char *)local_10,param_2,0x1d);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
