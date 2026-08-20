# makeRequest

`_ZN26DB_UpdateInventoryCapacity11makeRequestE17ENUM_SERVER_GROUPiji`

`DB_UpdateInventoryCapacity::makeRequest(ENUM_SERVER_GROUP, int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateInventoryCapacity` | `0x08444d12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08444d12  _ZN26DB_UpdateInventoryCapacity11makeRequestE17ENUM_SERVER_GROUPiji
#           DB_UpdateInventoryCapacity::makeRequest(ENUM_SERVER_GROUP, int, unsigned int, int)
# range [0x08444d12, 0x08444e1d]
08444d12 +0x000:  push   %ebp
08444d13 +0x001:  mov    %esp,%ebp
08444d15 +0x003:  push   %esi
08444d16 +0x004:  push   %ebx
08444d17 +0x005:  sub    $0x20,%esp
08444d1a +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08444d1f +0x00d:  movl   $0xabd0,0x8(%esp)
08444d27 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08444d2f +0x01d:  mov    %eax,(%esp)
08444d32 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08444d37 +0x025:  movl   $0x1,0x8(%esp)
08444d3f +0x02d:  mov    %eax,0x4(%esp)
08444d43 +0x031:  lea    -0x10(%ebp),%eax
08444d46 +0x034:  mov    %eax,(%esp)
08444d49 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08444d4e +0x03c:  lea    -0x10(%ebp),%eax
08444d51 +0x03f:  mov    %eax,(%esp)
08444d54 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444d59 +0x047:  movl   $0x2ae,0x4(%esp)
08444d61 +0x04f:  mov    %eax,(%esp)
08444d64 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444d69 +0x057:  lea    -0x10(%ebp),%eax
08444d6c +0x05a:  mov    %eax,(%esp)
08444d6f +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444d74 +0x062:  movl   $0xffffffff,0x4(%esp)
08444d7c +0x06a:  mov    %eax,(%esp)
08444d7f +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444d84 +0x072:  mov    0x8(%ebp),%ebx
08444d87 +0x075:  lea    -0x10(%ebp),%eax
08444d8a +0x078:  mov    %eax,(%esp)
08444d8d +0x07b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444d92 +0x080:  mov    %ebx,0x4(%esp)
08444d96 +0x084:  mov    %eax,(%esp)
08444d99 +0x087:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444d9e +0x08c:  lea    -0x10(%ebp),%eax
08444da1 +0x08f:  mov    %eax,(%esp)
08444da4 +0x092:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444da9 +0x097:  mov    0x10(%ebp),%edx
08444dac +0x09a:  mov    %edx,0x4(%esp)
08444db0 +0x09e:  mov    %eax,(%esp)
08444db3 +0x0a1:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08444db8 +0x0a6:  lea    -0x10(%ebp),%eax
08444dbb +0x0a9:  mov    %eax,(%esp)
08444dbe +0x0ac:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444dc3 +0x0b1:  mov    0x14(%ebp),%edx
08444dc6 +0x0b4:  mov    %edx,0x4(%esp)
08444dca +0x0b8:  mov    %eax,(%esp)
08444dcd +0x0bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444dd2 +0x0c0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08444dd7 +0x0c5:  lea    -0x10(%ebp),%edx
08444dda +0x0c8:  mov    %edx,0x8(%esp)
08444dde +0x0cc:  movl   $0x2,0x4(%esp)
08444de6 +0x0d4:  mov    %eax,(%esp)
08444de9 +0x0d7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08444dee +0x0dc:  jmp    08444e0b <+0xf9>
08444df0 +0x0de:  mov    %edx,%ebx
08444df2 +0x0e0:  mov    %eax,%esi
08444df4 +0x0e2:  lea    -0x10(%ebp),%eax
08444df7 +0x0e5:  mov    %eax,(%esp)
08444dfa +0x0e8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08444dff +0x0ed:  mov    %esi,%eax
08444e01 +0x0ef:  mov    %ebx,%edx
08444e03 +0x0f1:  mov    %eax,(%esp)
08444e06 +0x0f4:  call   08ae3750 <_Unwind_Resume>
08444e0b +0x0f9:  lea    -0x10(%ebp),%eax
08444e0e +0x0fc:  mov    %eax,(%esp)
08444e11 +0x0ff:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08444e16 +0x104:  add    $0x20,%esp
08444e19 +0x107:  pop    %ebx
08444e1a +0x108:  pop    %esi
08444e1b +0x109:  pop    %ebp
08444e1c +0x10a:  ret
08444e1d +0x10b:  nop
```

## 反编译 C

```c
// DB_UpdateInventoryCapacity::makeRequest @ 0x8444d12

/* DB_UpdateInventoryCapacity::makeRequest(ENUM_SERVER_GROUP, int, unsigned int, int) */

void DB_UpdateInventoryCapacity::makeRequest
               (int param_1,undefined4 param_2,uint param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xabd0);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08444d64 to 08444ded has its CatchHandler @ 08444df0 */
  CStreamGuard::operator<<(pCVar2,0x2ae);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
