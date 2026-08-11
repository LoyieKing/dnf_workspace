# _ZN12CApplication4FreeEv

`CApplication::Free()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x806c0ba` | `0x2a2` | `0x806ee1c` | `0x2a0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,191 +1,191 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 movl   $"Application Free Start!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x9c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x74>
+je     <T> <_ZN12CApplication4FreeEv+0x72>
 mov    0x8(%ebp),%eax
 mov    0x9c(%eax),%eax
 mov    (%eax),%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x9c(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x9c(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 mov    0x9c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x67>
-mov    0x8(%ebp),%eax
-mov    0x9c(%eax),%eax
+je     <T> <_ZN12CApplication4FreeEv+0x65>
+mov    -0x10(%ebp),%eax
+add    $0xc,%eax
 mov    (%eax),%eax
-add    $0xc,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x9c(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    0x8(%ebp),%edx
+mov    0x9c(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x9c(%eax)
 movl   $"Thread Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0xae>
+je     <T> <_ZN12CApplication4FreeEv+0xac>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN12CApplication4FreeEv+0xa4>
+je     <T> <_ZN12CApplication4FreeEv+0xa2>
 mov    %ebx,(%esp)
 call   <T> <_ZN14CServerHandlerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x18(%eax)
 movl   $"Game Server Handler Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x98(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0xe5>
+je     <T> <_ZN12CApplication4FreeEv+0xe3>
 mov    0x8(%ebp),%eax
 mov    0x98(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x98(%eax)
 movl   $"UDP Handler Free Success!",(%esp)
 call   <T> <puts>
 call   <T> <_Z25CSignalTranslatorInstancev>
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator5clearEv>
 movl   $"Signal Translater Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x140>
+je     <T> <_ZN12CApplication4FreeEv+0x13e>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x136>
+je     <T> <_ZN12CApplication4FreeEv+0x134>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x10(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 movl   $"Application Config Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x182>
+je     <T> <_ZN12CApplication4FreeEv+0x180>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x178>
+je     <T> <_ZN12CApplication4FreeEv+0x176>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x14(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 movl   $"Application Server Config Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x1c4>
+je     <T> <_ZN12CApplication4FreeEv+0x1c2>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x1ba>
+je     <T> <_ZN12CApplication4FreeEv+0x1b8>
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
 mov    0x288(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x207>
+je     <T> <_ZN12CApplication4FreeEv+0x205>
 mov    0x8(%ebp),%eax
 mov    0x288(%eax),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN12CApplication4FreeEv+0x1fa>
+je     <T> <_ZN12CApplication4FreeEv+0x1f8>
 mov    %ebx,(%esp)
 call   <T> <_ZN13CGuildManagerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x288(%eax)
 movl   $"Guild Manager Free Success!",(%esp)
 call   <T> <puts>
 movl   $"Application End!",(%esp)
 call   <T> <puts>
-jmp    <T> <_ZN12CApplication4FreeEv+0x29b>
+jmp    <T> <_ZN12CApplication4FreeEv+0x299>
 cmp    $0x2,%edx
-jne    <T> <_ZN12CApplication4FreeEv+0x26d>
+jne    <T> <_ZN12CApplication4FreeEv+0x26b>
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
  CServerHandler *this_00;
  CGuildManager *this_01;
  CSignalTranslator *this_02;
  
                    /* try { // try from 0806c0c9 to 0806c2d8 has its CatchHandler @ 0806c2db */
  puts("Application Free Start!");
  if (*(int *)(this + 0x9c) != 0) {
    (**(code **)**(undefined4 **)(this + 0x9c))(*(undefined4 *)(this + 0x9c));
    if (*(int *)(this + 0x9c) != 0) {
      (**(code **)(**(int **)(this + 0x9c) + 0xc))(*(undefined4 *)(this + 0x9c));
    }
    *(undefined4 *)(this + 0x9c) = 0;
  }
  puts("Thread Free Success!");
  if (*(int *)(this + 0x18) != 0) {
    this_00 = *(CServerHandler **)(this + 0x18);
    if (this_00 != (CServerHandler *)0x0) {
      CServerHandler::~CServerHandler(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  puts("Game Server Handler Free Success!");
  if (*(int *)(this + 0x98) != 0) {
    operator_delete(*(void **)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  puts("UDP Handler Free Success!");
  this_02 = (CSignalTranslator *)CSignalTranslatorInstance();
  CSignalTranslator::clear(this_02);
  puts("Signal Translater Free Success!");
  if (*(int *)(this + 0x10) != 0) {
    if (*(int *)(this + 0x10) != 0) {
      (**(code **)(**(int **)(this + 0x10) + 4))(*(undefined4 *)(this + 0x10));
    }
    *(undefined4 *)(this + 0x10) = 0;
  }
  puts("Application Config Free Success!");
  if (*(int *)(this + 0x14) != 0) {
    if (*(int *)(this + 0x14) != 0) {
      (**(code **)(**(int **)(this + 0x14) + 4))(*(undefined4 *)(this + 0x14));
    }
    *(undefined4 *)(this + 0x14) = 0;
  }
  puts("Application Server Config Free Success!");
  if (*(int *)(this + 0xc) != 0) {
    if (*(int *)(this + 0xc) != 0) {
      (**(code **)(**(int **)(this + 0xc) + 4))(*(undefined4 *)(this + 0xc));
    }
    *(undefined4 *)(this + 0xc) = 0;
  }
  puts("Application Initor Free Success!");
  if (*(int *)(this + 0x288) != 0) {
    this_01 = *(CGuildManager **)(this + 0x288);
    if (this_01 != (CGuildManager *)0x0) {
      CGuildManager::~CGuildManager(this_01);
      operator_delete(this_01);
    }
    *(undefined4 *)(this + 0x288) = 0;
  }
  puts("Guild Manager Free Success!");
  puts("Application End!");
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
