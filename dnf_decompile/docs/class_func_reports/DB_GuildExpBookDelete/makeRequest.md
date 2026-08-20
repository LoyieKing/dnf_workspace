# makeRequest

`_ZN21DB_GuildExpBookDelete11makeRequestEji17ENUM_SERVER_GROUP`

`DB_GuildExpBookDelete::makeRequest(unsigned int, int, ENUM_SERVER_GROUP)`

| 类 | 地址 |
|---|---|
| `DB_GuildExpBookDelete` | `0x0843c408` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843c408  _ZN21DB_GuildExpBookDelete11makeRequestEji17ENUM_SERVER_GROUP
#           DB_GuildExpBookDelete::makeRequest(unsigned int, int, ENUM_SERVER_GROUP)
# range [0x0843c408, 0x0843c513]
0843c408 +0x000:  push   %ebp
0843c409 +0x001:  mov    %esp,%ebp
0843c40b +0x003:  push   %esi
0843c40c +0x004:  push   %ebx
0843c40d +0x005:  sub    $0x20,%esp
0843c410 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843c415 +0x00d:  movl   $0x902a,0x8(%esp)
0843c41d +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0843c425 +0x01d:  mov    %eax,(%esp)
0843c428 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843c42d +0x025:  movl   $0x1,0x8(%esp)
0843c435 +0x02d:  mov    %eax,0x4(%esp)
0843c439 +0x031:  lea    -0x10(%ebp),%eax
0843c43c +0x034:  mov    %eax,(%esp)
0843c43f +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843c444 +0x03c:  lea    -0x10(%ebp),%eax
0843c447 +0x03f:  mov    %eax,(%esp)
0843c44a +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c44f +0x047:  movl   $0x209,0x4(%esp)
0843c457 +0x04f:  mov    %eax,(%esp)
0843c45a +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843c45f +0x057:  lea    -0x10(%ebp),%eax
0843c462 +0x05a:  mov    %eax,(%esp)
0843c465 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c46a +0x062:  movl   $0xffffffff,0x4(%esp)
0843c472 +0x06a:  mov    %eax,(%esp)
0843c475 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843c47a +0x072:  lea    -0x10(%ebp),%eax
0843c47d +0x075:  mov    %eax,(%esp)
0843c480 +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c485 +0x07d:  mov    0x8(%ebp),%edx
0843c488 +0x080:  mov    %edx,0x4(%esp)
0843c48c +0x084:  mov    %eax,(%esp)
0843c48f +0x087:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843c494 +0x08c:  lea    -0x10(%ebp),%eax
0843c497 +0x08f:  mov    %eax,(%esp)
0843c49a +0x092:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c49f +0x097:  mov    0xc(%ebp),%edx
0843c4a2 +0x09a:  mov    %edx,0x4(%esp)
0843c4a6 +0x09e:  mov    %eax,(%esp)
0843c4a9 +0x0a1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843c4ae +0x0a6:  mov    0x10(%ebp),%ebx
0843c4b1 +0x0a9:  lea    -0x10(%ebp),%eax
0843c4b4 +0x0ac:  mov    %eax,(%esp)
0843c4b7 +0x0af:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c4bc +0x0b4:  mov    %ebx,0x4(%esp)
0843c4c0 +0x0b8:  mov    %eax,(%esp)
0843c4c3 +0x0bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843c4c8 +0x0c0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843c4cd +0x0c5:  lea    -0x10(%ebp),%edx
0843c4d0 +0x0c8:  mov    %edx,0x8(%esp)
0843c4d4 +0x0cc:  movl   $0x2,0x4(%esp)
0843c4dc +0x0d4:  mov    %eax,(%esp)
0843c4df +0x0d7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843c4e4 +0x0dc:  jmp    0843c501 <+0xf9>
0843c4e6 +0x0de:  mov    %edx,%ebx
0843c4e8 +0x0e0:  mov    %eax,%esi
0843c4ea +0x0e2:  lea    -0x10(%ebp),%eax
0843c4ed +0x0e5:  mov    %eax,(%esp)
0843c4f0 +0x0e8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843c4f5 +0x0ed:  mov    %esi,%eax
0843c4f7 +0x0ef:  mov    %ebx,%edx
0843c4f9 +0x0f1:  mov    %eax,(%esp)
0843c4fc +0x0f4:  call   08ae3750 <_Unwind_Resume>
0843c501 +0x0f9:  lea    -0x10(%ebp),%eax
0843c504 +0x0fc:  mov    %eax,(%esp)
0843c507 +0x0ff:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843c50c +0x104:  add    $0x20,%esp
0843c50f +0x107:  pop    %ebx
0843c510 +0x108:  pop    %esi
0843c511 +0x109:  pop    %ebp
0843c512 +0x10a:  ret
0843c513 +0x10b:  nop
```

## 反编译 C

```c
// DB_GuildExpBookDelete::makeRequest @ 0x843c408

/* DB_GuildExpBookDelete::makeRequest(unsigned int, int, ENUM_SERVER_GROUP) */

void DB_GuildExpBookDelete::makeRequest(uint param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x902a);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843c45a to 0843c4e3 has its CatchHandler @ 0843c4e6 */
  CStreamGuard::operator<<(pCVar2,0x209);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
