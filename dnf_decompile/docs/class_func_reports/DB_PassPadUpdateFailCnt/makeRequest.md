# makeRequest

`_ZN23DB_PassPadUpdateFailCnt11makeRequestEjjPc`

`DB_PassPadUpdateFailCnt::makeRequest(unsigned int, unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `DB_PassPadUpdateFailCnt` | `0x08423eb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08423eb4  _ZN23DB_PassPadUpdateFailCnt11makeRequestEjjPc
#           DB_PassPadUpdateFailCnt::makeRequest(unsigned int, unsigned int, char*)
# range [0x08423eb4, 0x08423fb5]
08423eb4 +0x000:  push   %ebp
08423eb5 +0x001:  mov    %esp,%ebp
08423eb7 +0x003:  push   %esi
08423eb8 +0x004:  push   %ebx
08423eb9 +0x005:  sub    $0x20,%esp
08423ebc +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08423ec1 +0x00d:  movl   $0x5f31,0x8(%esp)
08423ec9 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08423ed1 +0x01d:  mov    %eax,(%esp)
08423ed4 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08423ed9 +0x025:  movl   $0x1,0x8(%esp)
08423ee1 +0x02d:  mov    %eax,0x4(%esp)
08423ee5 +0x031:  lea    -0x14(%ebp),%eax
08423ee8 +0x034:  mov    %eax,(%esp)
08423eeb +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08423ef0 +0x03c:  lea    -0x14(%ebp),%eax
08423ef3 +0x03f:  mov    %eax,(%esp)
08423ef6 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08423efb +0x047:  movl   $0xa4,0x4(%esp)
08423f03 +0x04f:  mov    %eax,(%esp)
08423f06 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08423f0b +0x057:  lea    -0x14(%ebp),%eax
08423f0e +0x05a:  mov    %eax,(%esp)
08423f11 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08423f16 +0x062:  movl   $0xffffffff,0x4(%esp)
08423f1e +0x06a:  mov    %eax,(%esp)
08423f21 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08423f26 +0x072:  lea    -0x14(%ebp),%eax
08423f29 +0x075:  mov    %eax,(%esp)
08423f2c +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08423f31 +0x07d:  mov    %eax,(%esp)
08423f34 +0x080:  call   08451e1a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4a30>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4a30
08423f39 +0x085:  mov    %eax,-0xc(%ebp)
08423f3c +0x088:  mov    -0xc(%ebp),%eax
08423f3f +0x08b:  mov    0x8(%ebp),%edx
08423f42 +0x08e:  mov    %edx,(%eax)
08423f44 +0x090:  mov    -0xc(%ebp),%eax
08423f47 +0x093:  mov    0xc(%ebp),%edx
08423f4a +0x096:  mov    %edx,0x4(%eax)
08423f4d +0x099:  mov    -0xc(%ebp),%eax
08423f50 +0x09c:  lea    0x8(%eax),%edx
08423f53 +0x09f:  movl   $0x10,0x8(%esp)
08423f5b +0x0a7:  mov    0x10(%ebp),%eax
08423f5e +0x0aa:  mov    %eax,0x4(%esp)
08423f62 +0x0ae:  mov    %edx,(%esp)
08423f65 +0x0b1:  call   0807d8d0 <_init+0x1c8>
08423f6a +0x0b6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08423f6f +0x0bb:  lea    -0x14(%ebp),%edx
08423f72 +0x0be:  mov    %edx,0x8(%esp)
08423f76 +0x0c2:  movl   $0x2,0x4(%esp)
08423f7e +0x0ca:  mov    %eax,(%esp)
08423f81 +0x0cd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08423f86 +0x0d2:  jmp    08423fa3 <+0xef>
08423f88 +0x0d4:  mov    %edx,%ebx
08423f8a +0x0d6:  mov    %eax,%esi
08423f8c +0x0d8:  lea    -0x14(%ebp),%eax
08423f8f +0x0db:  mov    %eax,(%esp)
08423f92 +0x0de:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08423f97 +0x0e3:  mov    %esi,%eax
08423f99 +0x0e5:  mov    %ebx,%edx
08423f9b +0x0e7:  mov    %eax,(%esp)
08423f9e +0x0ea:  call   08ae3750 <_Unwind_Resume>
08423fa3 +0x0ef:  lea    -0x14(%ebp),%eax
08423fa6 +0x0f2:  mov    %eax,(%esp)
08423fa9 +0x0f5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08423fae +0x0fa:  add    $0x20,%esp
08423fb1 +0x0fd:  pop    %ebx
08423fb2 +0x0fe:  pop    %esi
08423fb3 +0x0ff:  pop    %ebp
08423fb4 +0x100:  ret
08423fb5 +0x101:  nop
```

## 反编译 C

```c
// DB_PassPadUpdateFailCnt::makeRequest @ 0x8423eb4

/* DB_PassPadUpdateFailCnt::makeRequest(unsigned int, unsigned int, char*) */

void DB_PassPadUpdateFailCnt::makeRequest(uint param_1,uint param_2,char *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5f31);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08423f06 to 08423f85 has its CatchHandler @ 08423f88 */
  CStreamGuard::operator<<(pCVar2,0xa4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  strncpy((char *)(local_10 + 8),param_3,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
