# makeRequest

`_ZN21DB_SecurityCardDisuse11makeRequestEj`

`DB_SecurityCardDisuse::makeRequest(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardDisuse` | `0x0842b790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842b790  _ZN21DB_SecurityCardDisuse11makeRequestEj
#           DB_SecurityCardDisuse::makeRequest(unsigned int)
# range [0x0842b790, 0x0842b86b]
0842b790 +0x00:  push   %ebp
0842b791 +0x01:  mov    %esp,%ebp
0842b793 +0x03:  push   %esi
0842b794 +0x04:  push   %ebx
0842b795 +0x05:  sub    $0x20,%esp
0842b798 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842b79d +0x0d:  movl   $0x6e2d,0x8(%esp)
0842b7a5 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0842b7ad +0x1d:  mov    %eax,(%esp)
0842b7b0 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842b7b5 +0x25:  movl   $0x1,0x8(%esp)
0842b7bd +0x2d:  mov    %eax,0x4(%esp)
0842b7c1 +0x31:  lea    -0x14(%ebp),%eax
0842b7c4 +0x34:  mov    %eax,(%esp)
0842b7c7 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842b7cc +0x3c:  lea    -0x14(%ebp),%eax
0842b7cf +0x3f:  mov    %eax,(%esp)
0842b7d2 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842b7d7 +0x47:  movl   $0xfe,0x4(%esp)
0842b7df +0x4f:  mov    %eax,(%esp)
0842b7e2 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842b7e7 +0x57:  lea    -0x14(%ebp),%eax
0842b7ea +0x5a:  mov    %eax,(%esp)
0842b7ed +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842b7f2 +0x62:  movl   $0xffffffff,0x4(%esp)
0842b7fa +0x6a:  mov    %eax,(%esp)
0842b7fd +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842b802 +0x72:  lea    -0x14(%ebp),%eax
0842b805 +0x75:  mov    %eax,(%esp)
0842b808 +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842b80d +0x7d:  mov    %eax,(%esp)
0842b810 +0x80:  call   08452672 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5288>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5288
0842b815 +0x85:  mov    %eax,-0xc(%ebp)
0842b818 +0x88:  mov    -0xc(%ebp),%eax
0842b81b +0x8b:  mov    0x8(%ebp),%edx
0842b81e +0x8e:  mov    %edx,(%eax)
0842b820 +0x90:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842b825 +0x95:  lea    -0x14(%ebp),%edx
0842b828 +0x98:  mov    %edx,0x8(%esp)
0842b82c +0x9c:  movl   $0x2,0x4(%esp)
0842b834 +0xa4:  mov    %eax,(%esp)
0842b837 +0xa7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842b83c +0xac:  jmp    0842b859 <+0xc9>
0842b83e +0xae:  mov    %edx,%ebx
0842b840 +0xb0:  mov    %eax,%esi
0842b842 +0xb2:  lea    -0x14(%ebp),%eax
0842b845 +0xb5:  mov    %eax,(%esp)
0842b848 +0xb8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842b84d +0xbd:  mov    %esi,%eax
0842b84f +0xbf:  mov    %ebx,%edx
0842b851 +0xc1:  mov    %eax,(%esp)
0842b854 +0xc4:  call   08ae3750 <_Unwind_Resume>
0842b859 +0xc9:  lea    -0x14(%ebp),%eax
0842b85c +0xcc:  mov    %eax,(%esp)
0842b85f +0xcf:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842b864 +0xd4:  add    $0x20,%esp
0842b867 +0xd7:  pop    %ebx
0842b868 +0xd8:  pop    %esi
0842b869 +0xd9:  pop    %ebp
0842b86a +0xda:  ret
0842b86b +0xdb:  nop
```

## 反编译 C

```c
// DB_SecurityCardDisuse::makeRequest @ 0x842b790

/* DB_SecurityCardDisuse::makeRequest(unsigned int) */

void DB_SecurityCardDisuse::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_DISUSE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6e2d);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842b7e2 to 0842b83b has its CatchHandler @ 0842b83e */
  CStreamGuard::operator<<(pCVar2,0xfe);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_DISUSE>(pCVar2);
  *(uint *)local_10 = param_1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
