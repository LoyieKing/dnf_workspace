# makeRequest

`_ZN25DB_SecurityCardAddCertCnt11makeRequestEj`

`DB_SecurityCardAddCertCnt::makeRequest(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardAddCertCnt` | `0x08436388` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08436388  _ZN25DB_SecurityCardAddCertCnt11makeRequestEj
#           DB_SecurityCardAddCertCnt::makeRequest(unsigned int)
# range [0x08436388, 0x08436463]
08436388 +0x00:  push   %ebp
08436389 +0x01:  mov    %esp,%ebp
0843638b +0x03:  push   %esi
0843638c +0x04:  push   %ebx
0843638d +0x05:  sub    $0x20,%esp
08436390 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08436395 +0x0d:  movl   $0x8199,0x8(%esp)
0843639d +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084363a5 +0x1d:  mov    %eax,(%esp)
084363a8 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084363ad +0x25:  movl   $0x1,0x8(%esp)
084363b5 +0x2d:  mov    %eax,0x4(%esp)
084363b9 +0x31:  lea    -0x14(%ebp),%eax
084363bc +0x34:  mov    %eax,(%esp)
084363bf +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084363c4 +0x3c:  lea    -0x14(%ebp),%eax
084363c7 +0x3f:  mov    %eax,(%esp)
084363ca +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084363cf +0x47:  movl   $0x17c,0x4(%esp)
084363d7 +0x4f:  mov    %eax,(%esp)
084363da +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084363df +0x57:  lea    -0x14(%ebp),%eax
084363e2 +0x5a:  mov    %eax,(%esp)
084363e5 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084363ea +0x62:  movl   $0xffffffff,0x4(%esp)
084363f2 +0x6a:  mov    %eax,(%esp)
084363f5 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084363fa +0x72:  lea    -0x14(%ebp),%eax
084363fd +0x75:  mov    %eax,(%esp)
08436400 +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08436405 +0x7d:  mov    %eax,(%esp)
08436408 +0x80:  call   0845332e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5f44>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5f44
0843640d +0x85:  mov    %eax,-0xc(%ebp)
08436410 +0x88:  mov    -0xc(%ebp),%eax
08436413 +0x8b:  mov    0x8(%ebp),%edx
08436416 +0x8e:  mov    %edx,(%eax)
08436418 +0x90:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843641d +0x95:  lea    -0x14(%ebp),%edx
08436420 +0x98:  mov    %edx,0x8(%esp)
08436424 +0x9c:  movl   $0x2,0x4(%esp)
0843642c +0xa4:  mov    %eax,(%esp)
0843642f +0xa7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08436434 +0xac:  jmp    08436451 <+0xc9>
08436436 +0xae:  mov    %edx,%ebx
08436438 +0xb0:  mov    %eax,%esi
0843643a +0xb2:  lea    -0x14(%ebp),%eax
0843643d +0xb5:  mov    %eax,(%esp)
08436440 +0xb8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08436445 +0xbd:  mov    %esi,%eax
08436447 +0xbf:  mov    %ebx,%edx
08436449 +0xc1:  mov    %eax,(%esp)
0843644c +0xc4:  call   08ae3750 <_Unwind_Resume>
08436451 +0xc9:  lea    -0x14(%ebp),%eax
08436454 +0xcc:  mov    %eax,(%esp)
08436457 +0xcf:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843645c +0xd4:  add    $0x20,%esp
0843645f +0xd7:  pop    %ebx
08436460 +0xd8:  pop    %esi
08436461 +0xd9:  pop    %ebp
08436462 +0xda:  ret
08436463 +0xdb:  nop
```

## 反编译 C

```c
// DB_SecurityCardAddCertCnt::makeRequest @ 0x8436388

/* DB_SecurityCardAddCertCnt::makeRequest(unsigned int) */

void DB_SecurityCardAddCertCnt::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_ADD_CERT_CNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8199);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084363da to 08436433 has its CatchHandler @ 08436436 */
  CStreamGuard::operator<<(pCVar2,0x17c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_ADD_CERT_CNT>(pCVar2);
  *(uint *)local_10 = param_1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
