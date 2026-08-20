# makeRequest

`_ZN27DB_UpdateInGameEventHistory11makeRequestEjiii`

`DB_UpdateInGameEventHistory::makeRequest(unsigned int, int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateInGameEventHistory` | `0x08444ac4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08444ac4  _ZN27DB_UpdateInGameEventHistory11makeRequestEjiii
#           DB_UpdateInGameEventHistory::makeRequest(unsigned int, int, int, int)
# range [0x08444ac4, 0x08444be9]
08444ac4 +0x000:  push   %ebp
08444ac5 +0x001:  mov    %esp,%ebp
08444ac7 +0x003:  push   %esi
08444ac8 +0x004:  push   %ebx
08444ac9 +0x005:  sub    $0x20,%esp
08444acc +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08444ad1 +0x00d:  movl   $0xaba8,0x8(%esp)
08444ad9 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08444ae1 +0x01d:  mov    %eax,(%esp)
08444ae4 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08444ae9 +0x025:  movl   $0x1,0x8(%esp)
08444af1 +0x02d:  mov    %eax,0x4(%esp)
08444af5 +0x031:  lea    -0x10(%ebp),%eax
08444af8 +0x034:  mov    %eax,(%esp)
08444afb +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08444b00 +0x03c:  lea    -0x10(%ebp),%eax
08444b03 +0x03f:  mov    %eax,(%esp)
08444b06 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444b0b +0x047:  movl   $0x2ad,0x4(%esp)
08444b13 +0x04f:  mov    %eax,(%esp)
08444b16 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444b1b +0x057:  lea    -0x10(%ebp),%eax
08444b1e +0x05a:  mov    %eax,(%esp)
08444b21 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444b26 +0x062:  movl   $0xffffffff,0x4(%esp)
08444b2e +0x06a:  mov    %eax,(%esp)
08444b31 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444b36 +0x072:  lea    -0x10(%ebp),%eax
08444b39 +0x075:  mov    %eax,(%esp)
08444b3c +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444b41 +0x07d:  mov    0x8(%ebp),%edx
08444b44 +0x080:  mov    %edx,0x4(%esp)
08444b48 +0x084:  mov    %eax,(%esp)
08444b4b +0x087:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08444b50 +0x08c:  lea    -0x10(%ebp),%eax
08444b53 +0x08f:  mov    %eax,(%esp)
08444b56 +0x092:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444b5b +0x097:  mov    0xc(%ebp),%edx
08444b5e +0x09a:  mov    %edx,0x4(%esp)
08444b62 +0x09e:  mov    %eax,(%esp)
08444b65 +0x0a1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444b6a +0x0a6:  lea    -0x10(%ebp),%eax
08444b6d +0x0a9:  mov    %eax,(%esp)
08444b70 +0x0ac:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444b75 +0x0b1:  mov    0x10(%ebp),%edx
08444b78 +0x0b4:  mov    %edx,0x4(%esp)
08444b7c +0x0b8:  mov    %eax,(%esp)
08444b7f +0x0bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444b84 +0x0c0:  lea    -0x10(%ebp),%eax
08444b87 +0x0c3:  mov    %eax,(%esp)
08444b8a +0x0c6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444b8f +0x0cb:  mov    0x14(%ebp),%edx
08444b92 +0x0ce:  mov    %edx,0x4(%esp)
08444b96 +0x0d2:  mov    %eax,(%esp)
08444b99 +0x0d5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444b9e +0x0da:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08444ba3 +0x0df:  lea    -0x10(%ebp),%edx
08444ba6 +0x0e2:  mov    %edx,0x8(%esp)
08444baa +0x0e6:  movl   $0x2,0x4(%esp)
08444bb2 +0x0ee:  mov    %eax,(%esp)
08444bb5 +0x0f1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08444bba +0x0f6:  jmp    08444bd7 <+0x113>
08444bbc +0x0f8:  mov    %edx,%ebx
08444bbe +0x0fa:  mov    %eax,%esi
08444bc0 +0x0fc:  lea    -0x10(%ebp),%eax
08444bc3 +0x0ff:  mov    %eax,(%esp)
08444bc6 +0x102:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08444bcb +0x107:  mov    %esi,%eax
08444bcd +0x109:  mov    %ebx,%edx
08444bcf +0x10b:  mov    %eax,(%esp)
08444bd2 +0x10e:  call   08ae3750 <_Unwind_Resume>
08444bd7 +0x113:  lea    -0x10(%ebp),%eax
08444bda +0x116:  mov    %eax,(%esp)
08444bdd +0x119:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08444be2 +0x11e:  add    $0x20,%esp
08444be5 +0x121:  pop    %ebx
08444be6 +0x122:  pop    %esi
08444be7 +0x123:  pop    %ebp
08444be8 +0x124:  ret
08444be9 +0x125:  nop
```

## 反编译 C

```c
// DB_UpdateInGameEventHistory::makeRequest @ 0x8444ac4

/* DB_UpdateInGameEventHistory::makeRequest(unsigned int, int, int, int) */

void DB_UpdateInGameEventHistory::makeRequest(uint param_1,int param_2,int param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xaba8);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08444b16 to 08444bb9 has its CatchHandler @ 08444bbc */
  CStreamGuard::operator<<(pCVar2,0x2ad);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
