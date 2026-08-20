# makeRequest

`_ZN35DB_InsertAccountFirstLoginDailyFlag11makeRequestEijji`

`DB_InsertAccountFirstLoginDailyFlag::makeRequest(int, unsigned int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_InsertAccountFirstLoginDailyFlag` | `0x0843ea64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843ea64  _ZN35DB_InsertAccountFirstLoginDailyFlag11makeRequestEijji
#           DB_InsertAccountFirstLoginDailyFlag::makeRequest(int, unsigned int, unsigned int, int)
# range [0x0843ea64, 0x0843eb6d]
0843ea64 +0x000:  push   %ebp
0843ea65 +0x001:  mov    %esp,%ebp
0843ea67 +0x003:  push   %esi
0843ea68 +0x004:  push   %ebx
0843ea69 +0x005:  sub    $0x20,%esp
0843ea6c +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843ea71 +0x00d:  movl   $0x953d,0x8(%esp)
0843ea79 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0843ea81 +0x01d:  mov    %eax,(%esp)
0843ea84 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843ea89 +0x025:  movl   $0x1,0x8(%esp)
0843ea91 +0x02d:  mov    %eax,0x4(%esp)
0843ea95 +0x031:  lea    -0x10(%ebp),%eax
0843ea98 +0x034:  mov    %eax,(%esp)
0843ea9b +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843eaa0 +0x03c:  lea    -0x10(%ebp),%eax
0843eaa3 +0x03f:  mov    %eax,(%esp)
0843eaa6 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843eaab +0x047:  movl   $0x342,0x4(%esp)
0843eab3 +0x04f:  mov    %eax,(%esp)
0843eab6 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843eabb +0x057:  lea    -0x10(%ebp),%eax
0843eabe +0x05a:  mov    %eax,(%esp)
0843eac1 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843eac6 +0x062:  mov    0x8(%ebp),%edx
0843eac9 +0x065:  mov    %edx,0x4(%esp)
0843eacd +0x069:  mov    %eax,(%esp)
0843ead0 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843ead5 +0x071:  lea    -0x10(%ebp),%eax
0843ead8 +0x074:  mov    %eax,(%esp)
0843eadb +0x077:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843eae0 +0x07c:  mov    0xc(%ebp),%edx
0843eae3 +0x07f:  mov    %edx,0x4(%esp)
0843eae7 +0x083:  mov    %eax,(%esp)
0843eaea +0x086:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843eaef +0x08b:  lea    -0x10(%ebp),%eax
0843eaf2 +0x08e:  mov    %eax,(%esp)
0843eaf5 +0x091:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843eafa +0x096:  mov    0x10(%ebp),%edx
0843eafd +0x099:  mov    %edx,0x4(%esp)
0843eb01 +0x09d:  mov    %eax,(%esp)
0843eb04 +0x0a0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843eb09 +0x0a5:  lea    -0x10(%ebp),%eax
0843eb0c +0x0a8:  mov    %eax,(%esp)
0843eb0f +0x0ab:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843eb14 +0x0b0:  mov    0x14(%ebp),%edx
0843eb17 +0x0b3:  mov    %edx,0x4(%esp)
0843eb1b +0x0b7:  mov    %eax,(%esp)
0843eb1e +0x0ba:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843eb23 +0x0bf:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843eb28 +0x0c4:  lea    -0x10(%ebp),%edx
0843eb2b +0x0c7:  mov    %edx,0x8(%esp)
0843eb2f +0x0cb:  movl   $0x2,0x4(%esp)
0843eb37 +0x0d3:  mov    %eax,(%esp)
0843eb3a +0x0d6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843eb3f +0x0db:  jmp    0843eb5c <+0xf8>
0843eb41 +0x0dd:  mov    %edx,%ebx
0843eb43 +0x0df:  mov    %eax,%esi
0843eb45 +0x0e1:  lea    -0x10(%ebp),%eax
0843eb48 +0x0e4:  mov    %eax,(%esp)
0843eb4b +0x0e7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843eb50 +0x0ec:  mov    %esi,%eax
0843eb52 +0x0ee:  mov    %ebx,%edx
0843eb54 +0x0f0:  mov    %eax,(%esp)
0843eb57 +0x0f3:  call   08ae3750 <_Unwind_Resume>
0843eb5c +0x0f8:  lea    -0x10(%ebp),%eax
0843eb5f +0x0fb:  mov    %eax,(%esp)
0843eb62 +0x0fe:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843eb67 +0x103:  add    $0x20,%esp
0843eb6a +0x106:  pop    %ebx
0843eb6b +0x107:  pop    %esi
0843eb6c +0x108:  pop    %ebp
0843eb6d +0x109:  ret
```

## 反编译 C

```c
// DB_InsertAccountFirstLoginDailyFlag::makeRequest @ 0x843ea64

/* DB_InsertAccountFirstLoginDailyFlag::makeRequest(int, unsigned int, unsigned int, int) */

void DB_InsertAccountFirstLoginDailyFlag::makeRequest
               (int param_1,uint param_2,uint param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x953d);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843eab6 to 0843eb3e has its CatchHandler @ 0843eb41 */
  CStreamGuard::operator<<(pCVar2,0x342);
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
