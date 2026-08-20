# updateDBLinkCharacConnectState

`_ZN12CGameManager30updateDBLinkCharacConnectStateEjj28ENUM_CHARAC_LINK_ACTION_TYPE`

`CGameManager::updateDBLinkCharacConnectState(unsigned int, unsigned int, ENUM_CHARAC_LINK_ACTION_TYPE)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082984a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082984a0  _ZN12CGameManager30updateDBLinkCharacConnectStateEjj28ENUM_CHARAC_LINK_ACTION_TYPE
#           CGameManager::updateDBLinkCharacConnectState(unsigned int, unsigned int, ENUM_CHARAC_LINK_ACTION_TYPE)
# range [0x082984a0, 0x082985a7]
082984a0 +0x000:  push   %ebp
082984a1 +0x001:  mov    %esp,%ebp
082984a3 +0x003:  push   %esi
082984a4 +0x004:  push   %ebx
082984a5 +0x005:  sub    $0x20,%esp
082984a8 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
082984ad +0x00d:  movl   $0x125b,0x8(%esp)
082984b5 +0x015:  movl   $"App.cpp",0x4(%esp)
082984bd +0x01d:  mov    %eax,(%esp)
082984c0 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
082984c5 +0x025:  movl   $0x1,0x8(%esp)
082984cd +0x02d:  mov    %eax,0x4(%esp)
082984d1 +0x031:  lea    -0x14(%ebp),%eax
082984d4 +0x034:  mov    %eax,(%esp)
082984d7 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
082984dc +0x03c:  lea    -0x14(%ebp),%eax
082984df +0x03f:  mov    %eax,(%esp)
082984e2 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
082984e7 +0x047:  movl   $0x1e5,0x4(%esp)
082984ef +0x04f:  mov    %eax,(%esp)
082984f2 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
082984f7 +0x057:  lea    -0x14(%ebp),%eax
082984fa +0x05a:  mov    %eax,(%esp)
082984fd +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08298502 +0x062:  movl   $0xffffffff,0x4(%esp)
0829850a +0x06a:  mov    %eax,(%esp)
0829850d +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08298512 +0x072:  lea    -0x14(%ebp),%eax
08298515 +0x075:  mov    %eax,(%esp)
08298518 +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0829851d +0x07d:  mov    %eax,(%esp)
08298520 +0x080:  call   082b2ca2 <_GLOBAL__I__ZN4CLog5this_E+0xf0c9>  ; global constructors keyed to CLog::this_+0xf0c9
08298525 +0x085:  mov    %eax,-0xc(%ebp)
08298528 +0x088:  movl   $0xc,0x8(%esp)
08298530 +0x090:  movl   $0x0,0x4(%esp)
08298538 +0x098:  mov    -0xc(%ebp),%eax
0829853b +0x09b:  mov    %eax,(%esp)
0829853e +0x09e:  call   0807dcc0 <_init+0x5b8>
08298543 +0x0a3:  mov    -0xc(%ebp),%eax
08298546 +0x0a6:  mov    0xc(%ebp),%edx
08298549 +0x0a9:  mov    %edx,(%eax)
0829854b +0x0ab:  mov    -0xc(%ebp),%eax
0829854e +0x0ae:  mov    0x10(%ebp),%edx
08298551 +0x0b1:  mov    %edx,0x4(%eax)
08298554 +0x0b4:  mov    0x14(%ebp),%edx
08298557 +0x0b7:  mov    -0xc(%ebp),%eax
0829855a +0x0ba:  mov    %edx,0x8(%eax)
0829855d +0x0bd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08298562 +0x0c2:  lea    -0x14(%ebp),%edx
08298565 +0x0c5:  mov    %edx,0x8(%esp)
08298569 +0x0c9:  movl   $0x2,0x4(%esp)
08298571 +0x0d1:  mov    %eax,(%esp)
08298574 +0x0d4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08298579 +0x0d9:  jmp    08298596 <+0xf6>
0829857b +0x0db:  mov    %edx,%ebx
0829857d +0x0dd:  mov    %eax,%esi
0829857f +0x0df:  lea    -0x14(%ebp),%eax
08298582 +0x0e2:  mov    %eax,(%esp)
08298585 +0x0e5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0829858a +0x0ea:  mov    %esi,%eax
0829858c +0x0ec:  mov    %ebx,%edx
0829858e +0x0ee:  mov    %eax,(%esp)
08298591 +0x0f1:  call   08ae3750 <_Unwind_Resume>
08298596 +0x0f6:  lea    -0x14(%ebp),%eax
08298599 +0x0f9:  mov    %eax,(%esp)
0829859c +0x0fc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082985a1 +0x101:  add    $0x20,%esp
082985a4 +0x104:  pop    %ebx
082985a5 +0x105:  pop    %esi
082985a6 +0x106:  pop    %ebp
082985a7 +0x107:  ret
```

## 反编译 C

```c
// CGameManager::updateDBLinkCharacConnectState @ 0x82984a0

/* CGameManager::updateDBLinkCharacConnectState(unsigned int, unsigned int,
   ENUM_CHARAC_LINK_ACTION_TYPE) */

void __thiscall
CGameManager::updateDBLinkCharacConnectState
          (undefined4 this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_UPDATE_LINK_CHARAC_CONNECT_STATE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"App.cpp",0x125b);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 082984f2 to 08298578 has its CatchHandler @ 0829857b */
  CStreamGuard::operator<<(pCVar2,0x1e5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_LINK_CHARAC_CONNECT_STATE>(pCVar2);
  memset(local_10,0,0xc);
  *(undefined4 *)local_10 = param_1;
  *(undefined4 *)(local_10 + 4) = param_2;
  *(undefined4 *)(local_10 + 8) = param_4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
