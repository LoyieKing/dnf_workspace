# makeRequest

`_ZN19DB_SwapCreatureItem11makeRequestEii`

`DB_SwapCreatureItem::makeRequest(int, int)`

| 类 | 地址 |
|---|---|
| `DB_SwapCreatureItem` | `0x0841fef2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841fef2  _ZN19DB_SwapCreatureItem11makeRequestEii
#           DB_SwapCreatureItem::makeRequest(int, int)
# range [0x0841fef2, 0x0841fff7]
0841fef2 +0x000:  push   %ebp
0841fef3 +0x001:  mov    %esp,%ebp
0841fef5 +0x003:  push   %esi
0841fef6 +0x004:  push   %ebx
0841fef7 +0x005:  sub    $0x20,%esp
0841fefa +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841feff +0x00d:  movl   $0x5662,0x8(%esp)
0841ff07 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0841ff0f +0x01d:  mov    %eax,(%esp)
0841ff12 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0841ff17 +0x025:  movl   $0x1,0x8(%esp)
0841ff1f +0x02d:  mov    %eax,0x4(%esp)
0841ff23 +0x031:  lea    -0x14(%ebp),%eax
0841ff26 +0x034:  mov    %eax,(%esp)
0841ff29 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0841ff2e +0x03c:  lea    -0x14(%ebp),%eax
0841ff31 +0x03f:  mov    %eax,(%esp)
0841ff34 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841ff39 +0x047:  movl   $0x8c,0x4(%esp)
0841ff41 +0x04f:  mov    %eax,(%esp)
0841ff44 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841ff49 +0x057:  lea    -0x14(%ebp),%eax
0841ff4c +0x05a:  mov    %eax,(%esp)
0841ff4f +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841ff54 +0x062:  movl   $0xffffffff,0x4(%esp)
0841ff5c +0x06a:  mov    %eax,(%esp)
0841ff5f +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841ff64 +0x072:  lea    -0x14(%ebp),%eax
0841ff67 +0x075:  mov    %eax,(%esp)
0841ff6a +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0841ff6f +0x07d:  mov    %eax,(%esp)
0841ff72 +0x080:  call   08343ac8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x5b95>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x5b95
0841ff77 +0x085:  mov    %eax,-0xc(%ebp)
0841ff7a +0x088:  mov    -0xc(%ebp),%eax
0841ff7d +0x08b:  movb   $0x0,0x8(%eax)
0841ff81 +0x08f:  mov    -0xc(%ebp),%eax
0841ff84 +0x092:  mov    0xc(%ebp),%edx
0841ff87 +0x095:  mov    %edx,0x10(%eax)
0841ff8a +0x098:  mov    -0xc(%ebp),%eax
0841ff8d +0x09b:  mov    0x8(%ebp),%edx
0841ff90 +0x09e:  mov    %edx,(%eax)
0841ff92 +0x0a0:  mov    -0xc(%ebp),%eax
0841ff95 +0x0a3:  movb   $0x1,0x14(%eax)
0841ff99 +0x0a7:  mov    -0xc(%ebp),%eax
0841ff9c +0x0aa:  movl   $0x0,0x4(%eax)
0841ffa3 +0x0b1:  mov    -0xc(%ebp),%eax
0841ffa6 +0x0b4:  movl   $0x0,0xc(%eax)
0841ffad +0x0bb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0841ffb2 +0x0c0:  lea    -0x14(%ebp),%edx
0841ffb5 +0x0c3:  mov    %edx,0x8(%esp)
0841ffb9 +0x0c7:  movl   $0x2,0x4(%esp)
0841ffc1 +0x0cf:  mov    %eax,(%esp)
0841ffc4 +0x0d2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0841ffc9 +0x0d7:  jmp    0841ffe6 <+0xf4>
0841ffcb +0x0d9:  mov    %edx,%ebx
0841ffcd +0x0db:  mov    %eax,%esi
0841ffcf +0x0dd:  lea    -0x14(%ebp),%eax
0841ffd2 +0x0e0:  mov    %eax,(%esp)
0841ffd5 +0x0e3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841ffda +0x0e8:  mov    %esi,%eax
0841ffdc +0x0ea:  mov    %ebx,%edx
0841ffde +0x0ec:  mov    %eax,(%esp)
0841ffe1 +0x0ef:  call   08ae3750 <_Unwind_Resume>
0841ffe6 +0x0f4:  lea    -0x14(%ebp),%eax
0841ffe9 +0x0f7:  mov    %eax,(%esp)
0841ffec +0x0fa:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841fff1 +0x0ff:  add    $0x20,%esp
0841fff4 +0x102:  pop    %ebx
0841fff5 +0x103:  pop    %esi
0841fff6 +0x104:  pop    %ebp
0841fff7 +0x105:  ret
```

## 反编译 C

```c
// DB_SwapCreatureItem::makeRequest @ 0x841fef2

/* DB_SwapCreatureItem::makeRequest(int, int) */

void DB_SwapCreatureItem::makeRequest(int param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SWAP_CREATURE_ITEM *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5662);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0841ff44 to 0841ffc8 has its CatchHandler @ 0841ffcb */
  CStreamGuard::operator<<(pCVar2,0x8c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SWAP_CREATURE_ITEM>(pCVar2);
  local_10[8] = (SIG_SWAP_CREATURE_ITEM)0x0;
  *(int *)(local_10 + 0x10) = param_2;
  *(int *)local_10 = param_1;
  local_10[0x14] = (SIG_SWAP_CREATURE_ITEM)0x1;
  *(undefined4 *)(local_10 + 4) = 0;
  *(undefined4 *)(local_10 + 0xc) = 0;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
