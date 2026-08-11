# _ZN12CApplication4FreeEv

`CApplication::Free()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x806402e` | `0x4bd` | `0x8051d88` | `0x4bd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,316 +1,316 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 movl   $"Application Free Start!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x134(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x74>
 mov    0x8(%ebp),%eax
 mov    0x134(%eax),%eax
 mov    (%eax),%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x134(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 mov    0x134(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+test   %eax,%eax
+je     <T> <_ZN12CApplication4FreeEv+0x67>
 mov    0x8(%ebp),%eax
 mov    0x134(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x67>
-mov    0x8(%ebp),%eax
-mov    0x134(%eax),%eax
 mov    (%eax),%eax
 add    $0xc,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x134(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x134(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x134(%eax)
 movl   $"Udp Thread Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0xd4(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0xb7>
 mov    0x8(%ebp),%eax
 mov    0xd4(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CApplication4FreeEv+0xaa>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CInnerMsgHandlerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0xd4(%eax)
 movl   $"UDP Handler Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0xfa>
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CApplication4FreeEv+0xed>
 mov    %ebx,(%esp)
 call   <T> <_ZN14CServerHandlerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0xa0(%eax)
 movl   $"Game Server Handler Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x130(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x131>
 mov    0x8(%ebp),%eax
 mov    0x130(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x130(%eax)
 movl   $"UDP Handler Free Success!",(%esp)
 call   <T> <puts>
 call   <T> <_Z25CSignalTranslatorInstancev>
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator5clearEv>
 movl   $"Signal Translater Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x19b>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x18e>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x8c(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x8c(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8c(%eax)
 movl   $"Application Config Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x1dd>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x1d3>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0xc(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax)
 movl   $"Application Initor Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x2c8(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x220>
 mov    0x8(%ebp),%eax
 mov    0x2c8(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CApplication4FreeEv+0x213>
 mov    %ebx,(%esp)
 call   <T> <_ZN14CTaskSchedulerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x2c8(%eax)
 mov    0x8(%ebp),%eax
 mov    0x2cc(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x257>
 mov    0x8(%ebp),%eax
 mov    0x2cc(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CApplication4FreeEv+0x24a>
 mov    %ebx,(%esp)
 call   <T> <_ZN8WongWork11CGMAccountsD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x2cc(%eax)
 mov    0x8(%ebp),%eax
 mov    0x318(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x28e>
 mov    0x8(%ebp),%eax
 mov    0x318(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CApplication4FreeEv+0x281>
 mov    %ebx,(%esp)
 call   <T> <_ZN18CMemoryCashManagerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x318(%eax)
 mov    0x8(%ebp),%eax
 mov    0x324(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x2c5>
 mov    0x8(%ebp),%eax
 mov    0x324(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CApplication4FreeEv+0x2b8>
 mov    %ebx,(%esp)
 call   <T> <_ZN10CTowerRankD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x324(%eax)
 mov    0x8(%ebp),%eax
 mov    0x328(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x2fc>
 mov    0x8(%ebp),%eax
 mov    0x328(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CApplication4FreeEv+0x2ef>
 mov    %ebx,(%esp)
 call   <T> <_ZN20CItemLimitEditionMgrD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x328(%eax)
 mov    0x8(%ebp),%eax
 mov    0x32c(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x333>
 mov    0x8(%ebp),%eax
 mov    0x32c(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CApplication4FreeEv+0x326>
 mov    %ebx,(%esp)
 call   <T> <_ZN10CIPCounterD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x32c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x334(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x35e>
 mov    0x8(%ebp),%eax
 mov    0x334(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x334(%eax)
 mov    0x8(%ebp),%eax
 mov    0x380(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x395>
 mov    0x8(%ebp),%eax
 mov    0x380(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CApplication4FreeEv+0x388>
 mov    %ebx,(%esp)
 call   <T> <_ZN19CPeriodicMessageMgrD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x380(%eax)
 mov    0x8(%ebp),%eax
 mov    0x384(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x3cc>
 mov    0x8(%ebp),%eax
 mov    0x384(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CApplication4FreeEv+0x3bf>
 mov    %ebx,(%esp)
 call   <T> <_ZN22LimitNpcBuyItemManagerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x384(%eax)
 mov    0x8(%ebp),%eax
 mov    0x388(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x3f7>
 mov    0x8(%ebp),%eax
 mov    0x388(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x388(%eax)
 mov    0x8(%ebp),%eax
 mov    0x330(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CApplication4FreeEv+0x42e>
 mov    0x8(%ebp),%eax
 mov    0x330(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN12CApplication4FreeEv+0x421>
 mov    %ebx,(%esp)
 call   <T> <_ZN22CLoginLogoutStatisticsD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x330(%eax)
 movl   $"Application Exit!",(%esp)
 call   <T> <puts>
 jmp    <T> <_ZN12CApplication4FreeEv+0x4b6>
 cmp    $0x2,%edx
 jne    <T> <_ZN12CApplication4FreeEv+0x488>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,0x4(%esp)
 movl   $"CApplication::Free() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 call   <T> <__cxa_rethrow>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CApplication::Free() Exception Break",(%esp)
 call   <T> <puts>
 call   <T> <__cxa_rethrow>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::Free() */

void __thiscall CApplication::_ZN12CApplication4FreeEv(CApplication *this)

{
  CInnerMsgHandler *this_00;
  CServerHandler *this_01;
  CTaskScheduler *this_02;
  CGMAccounts *this_03;
  CMemoryCashManager *this_04;
  CTowerRank *this_05;
  CItemLimitEditionMgr *this_06;
  CIPCounter *this_07;
  CPeriodicMessageMgr *this_08;
  LimitNpcBuyItemManager *this_09;
  CLoginLogoutStatistics *this_10;
  CSignalTranslator *this_11;
  
                    /* try { // try from 0806403d to 08064467 has its CatchHandler @ 0806446a */
  puts("Application Free Start!");
  if (*(int *)(this + 0x134) != 0) {
    (**(code **)**(undefined4 **)(this + 0x134))(*(undefined4 *)(this + 0x134));
    if (*(int *)(this + 0x134) != 0) {
      (**(code **)(**(int **)(this + 0x134) + 0xc))(*(undefined4 *)(this + 0x134));
    }
    *(undefined4 *)(this + 0x134) = 0;
  }
  puts("Udp Thread Free Success!");
  if (*(int *)(this + 0xd4) != 0) {
    this_00 = *(CInnerMsgHandler **)(this + 0xd4);
    if (this_00 != (CInnerMsgHandler *)0x0) {
      CInnerMsgHandler::~CInnerMsgHandler(this_00);
      ::operator_delete(this_00);
    }
    *(undefined4 *)(this + 0xd4) = 0;
  }
  puts("UDP Handler Free Success!");
  if (*(int *)(this + 0xa0) != 0) {
    this_01 = *(CServerHandler **)(this + 0xa0);
    if (this_01 != (CServerHandler *)0x0) {
      CServerHandler::~CServerHandler(this_01);
      ::operator_delete(this_01);
    }
    *(undefined4 *)(this + 0xa0) = 0;
  }
  puts("Game Server Handler Free Success!");
  if (*(int *)(this + 0x130) != 0) {
    ::operator_delete(*(void **)(this + 0x130));
    *(undefined4 *)(this + 0x130) = 0;
  }
  puts("UDP Handler Free Success!");
  this_11 = (CSignalTranslator *)CSignalTranslatorInstance();
  CSignalTranslator::clear(this_11);
  puts("Signal Translater Free Success!");
  if (*(int *)(this + 0x8c) != 0) {
    if (*(int *)(this + 0x8c) != 0) {
      (**(code **)(**(int **)(this + 0x8c) + 4))(*(undefined4 *)(this + 0x8c));
    }
    *(undefined4 *)(this + 0x8c) = 0;
  }
  puts("Application Config Free Success!");
  if (*(int *)(this + 0xc) != 0) {
    if (*(int *)(this + 0xc) != 0) {
      (**(code **)(**(int **)(this + 0xc) + 4))(*(undefined4 *)(this + 0xc));
    }
    *(undefined4 *)(this + 0xc) = 0;
  }
  puts("Application Initor Free Success!");
  if (*(int *)(this + 0x2c8) != 0) {
    this_02 = *(CTaskScheduler **)(this + 0x2c8);
    if (this_02 != (CTaskScheduler *)0x0) {
      CTaskScheduler::~CTaskScheduler(this_02);
      ::operator_delete(this_02);
    }
    *(undefined4 *)(this + 0x2c8) = 0;
  }
  if (*(int *)(this + 0x2cc) != 0) {
    this_03 = *(CGMAccounts **)(this + 0x2cc);
    if (this_03 != (CGMAccounts *)0x0) {
      WongWork::CGMAccounts::~CGMAccounts(this_03);
      ::operator_delete(this_03);
    }
    *(undefined4 *)(this + 0x2cc) = 0;
  }
  if (*(int *)(this + 0x318) != 0) {
    this_04 = *(CMemoryCashManager **)(this + 0x318);
    if (this_04 != (CMemoryCashManager *)0x0) {
      CMemoryCashManager::~CMemoryCashManager(this_04);
      ::operator_delete(this_04);
    }
    *(undefined4 *)(this + 0x318) = 0;
  }
  if (*(int *)(this + 0x324) != 0) {
    this_05 = *(CTowerRank **)(this + 0x324);
    if (this_05 != (CTowerRank *)0x0) {
      CTowerRank::~CTowerRank(this_05);
      ::operator_delete(this_05);
    }
    *(undefined4 *)(this + 0x324) = 0;
  }
  if (*(int *)(this + 0x328) != 0) {
    this_06 = *(CItemLimitEditionMgr **)(this + 0x328);
    if (this_06 != (CItemLimitEditionMgr *)0x0) {
      CItemLimitEditionMgr::~CItemLimitEditionMgr(this_06);
      ::operator_delete(this_06);
    }
    *(undefined4 *)(this + 0x328) = 0;
  }
  if (*(int *)(this + 0x32c) != 0) {
    this_07 = *(CIPCounter **)(this + 0x32c);
    if (this_07 != (CIPCounter *)0x0) {
      CIPCounter::~CIPCounter(this_07);
      ::operator_delete(this_07);
    }
    *(undefined4 *)(this + 0x32c) = 0;
  }
  if (*(int *)(this + 0x334) != 0) {
    ::operator_delete(*(void **)(this + 0x334));
    *(undefined4 *)(this + 0x334) = 0;
  }
  if (*(int *)(this + 0x380) != 0) {
    this_08 = *(CPeriodicMessageMgr **)(this + 0x380);
    if (this_08 != (CPeriodicMessageMgr *)0x0) {
      CPeriodicMessageMgr::~CPeriodicMessageMgr(this_08);
      ::operator_delete(this_08);
    }
    *(undefined4 *)(this + 0x380) = 0;
  }
  if (*(int *)(this + 900) != 0) {
    this_09 = *(LimitNpcBuyItemManager **)(this + 900);
    if (this_09 != (LimitNpcBuyItemManager *)0x0) {
      LimitNpcBuyItemManager::~LimitNpcBuyItemManager(this_09);
      ::operator_delete(this_09);
    }
    *(undefined4 *)(this + 900) = 0;
  }
  if (*(int *)(this + 0x388) != 0) {
    ::operator_delete(*(void **)(this + 0x388));
    *(undefined4 *)(this + 0x388) = 0;
  }
  if (*(int *)(this + 0x330) != 0) {
    this_10 = *(CLoginLogoutStatistics **)(this + 0x330);
    if (this_10 != (CLoginLogoutStatistics *)0x0) {
      CLoginLogoutStatistics::~CLoginLogoutStatistics(this_10);
      ::operator_delete(this_10);
    }
    *(undefined4 *)(this + 0x330) = 0;
  }
  puts("Application Exit!");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 185 行）：

```cpp
void CApplication::Free()
{
    try
    {
        puts("Application Free Start!");
        for (int i = 0; i < 0x65; i++)
        {
            if (m_netThreads[i] != 0)
            {
                m_netThreads[i]->stop();
                delete m_netThreads[i];
                m_netThreads[i] = 0;
            }
            if (m_udpHandlers[i] != 0)
            {
                ::operator delete(m_udpHandlers[i]);
                m_udpHandlers[i] = 0;
            }
        }
        puts("UDP Handler Free Success!");
        puts("Thread Free Success!");
        if (m_innerMsg != 0)
        {
            delete m_innerMsg;
            m_innerMsg = 0;
        }
        puts("UDP Handler Free Success!");
        if (m_serverHandler != 0)
        {
            delete m_serverHandler;
            m_serverHandler = 0;
        }
        puts("Game Server Handler Free Success!");
        CSignalTranslatorInstance()->clear();
        puts("Signal Translater Free Success!");
        if (m_appConfig != 0)
        {
            delete m_appConfig;
            m_appConfig = 0;
        }
        puts("Application Config Free Success!");
        if (m_serverConfig != 0)
        {
            delete m_serverConfig;
            m_serverConfig = 0;
        }
        puts("Application Server Config Free Success!");
        if (m_appInit != 0)
        {
            delete m_appInit;
            m_appInit = 0;
        }
        puts("Application Initor Free Success!");
        puts("Application \xc1\xbe\xb7\xe1!");
    }
    catch (CDNFException& e)
    {
        printf("CApplication::Free() Exception Break : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CApplication::Free() Exception Break");
        throw;
    }
}
```
