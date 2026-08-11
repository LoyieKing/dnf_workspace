# _ZN12CApplication4FreeEv

`CApplication::Free()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8062a86` | `0x28c` | `0x804e56e` | `0x29c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,180 +1,187 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 movl   $"Application Free Start!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    0x8(%ebp),%edx
-add    $0x290,%edx
+mov    %eax,-0x14(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x290(%eax),%edx
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager25DBGuildAndGuildMemberSaveEP14CServerHandler>
 movl   $"Guild And Guild Member DB Save Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0xfc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0xa0>
+je     <T> <_ZN12CApplication4FreeEv+0xb6>
 mov    0x8(%ebp),%eax
 mov    0xfc(%eax),%eax
 mov    (%eax),%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0xfc(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0xfc(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 mov    0xfc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x93>
+je     <T> <_ZN12CApplication4FreeEv+0xa9>
+mov    0x8(%ebp),%eax
+mov    0xfc(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN12CApplication4FreeEv+0xa9>
 mov    0x8(%ebp),%eax
 mov    0xfc(%eax),%eax
 mov    (%eax),%eax
-add    $0xc,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0xfc(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0xfc(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0xfc(%eax)
 movl   $"Udp Thread Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x9c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0xe3>
+je     <T> <_ZN12CApplication4FreeEv+0xf9>
 mov    0x8(%ebp),%eax
 mov    0x9c(%eax),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN12CApplication4FreeEv+0xd6>
+je     <T> <_ZN12CApplication4FreeEv+0xec>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CInnerMsgHandlerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x9c(%eax)
 movl   $"UDP Handler Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x11d>
+je     <T> <_ZN12CApplication4FreeEv+0x133>
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN12CApplication4FreeEv+0x113>
+je     <T> <_ZN12CApplication4FreeEv+0x129>
 mov    %ebx,(%esp)
 call   <T> <_ZN14CServerHandlerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x68(%eax)
 movl   $"Game Server Handler Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0xf8(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x154>
+je     <T> <_ZN12CApplication4FreeEv+0x16a>
 mov    0x8(%ebp),%eax
 mov    0xf8(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0xf8(%eax)
 movl   $"UDP Handler Free Success!",(%esp)
 call   <T> <puts>
 call   <T> <_Z25CSignalTranslatorInstancev>
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator5clearEv>
 movl   $"Signal Translater Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x1af>
+je     <T> <_ZN12CApplication4FreeEv+0x1cb>
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x1a5>
+je     <T> <_ZN12CApplication4FreeEv+0x1c1>
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x5c(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x5c(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x5c(%eax)
 movl   $"Application Config Free Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x1f1>
+je     <T> <_ZN12CApplication4FreeEv+0x20d>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CApplication4FreeEv+0x1e7>
+je     <T> <_ZN12CApplication4FreeEv+0x203>
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
-movl   $"Application 종료!",(%esp)
-call   <T> <puts>
-jmp    <T> <_ZN12CApplication4FreeEv+0x285>
+jmp    <T> <_ZN12CApplication4FreeEv+0x295>
 cmp    $0x2,%edx
-jne    <T> <_ZN12CApplication4FreeEv+0x257>
+jne    <T> <_ZN12CApplication4FreeEv+0x267>
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
  CServerHandler *pCVar1;
  CSignalTranslator *this_01;
  
                    /* try { // try from 08062a95 to 08062c8e has its CatchHandler @ 08062c91 */
  puts("Application Free Start!");
  pCVar1 = (CServerHandler *)Get_ServerHandler(this);
  CGuildManager::DBGuildAndGuildMemberSave((CGuildManager *)(this + 0x290),pCVar1);
  puts("Guild And Guild Member DB Save Success!");
  if (*(int *)(this + 0xfc) != 0) {
    (**(code **)**(undefined4 **)(this + 0xfc))(*(undefined4 *)(this + 0xfc));
    if (*(int *)(this + 0xfc) != 0) {
      (**(code **)(**(int **)(this + 0xfc) + 0xc))(*(undefined4 *)(this + 0xfc));
    }
    *(undefined4 *)(this + 0xfc) = 0;
  }
  puts("Udp Thread Free Success!");
  if (*(int *)(this + 0x9c) != 0) {
    this_00 = *(CInnerMsgHandler **)(this + 0x9c);
    if (this_00 != (CInnerMsgHandler *)0x0) {
      CInnerMsgHandler::~CInnerMsgHandler(this_00);
      ::operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x9c) = 0;
  }
  puts("UDP Handler Free Success!");
  if (*(int *)(this + 0x68) != 0) {
    pCVar1 = *(CServerHandler **)(this + 0x68);
    if (pCVar1 != (CServerHandler *)0x0) {
      CServerHandler::~CServerHandler(pCVar1);
      ::operator_delete(pCVar1);
    }
    *(undefined4 *)(this + 0x68) = 0;
  }
  puts("Game Server Handler Free Success!");
  if (*(int *)(this + 0xf8) != 0) {
    ::operator_delete(*(void **)(this + 0xf8));
    *(undefined4 *)(this + 0xf8) = 0;
  }
  puts("UDP Handler Free Success!");
  this_01 = (CSignalTranslator *)CSignalTranslatorInstance();
  CSignalTranslator::clear(this_01);
  puts("Signal Translater Free Success!");
  if (*(int *)(this + 0x5c) != 0) {
    if (*(int *)(this + 0x5c) != 0) {
      (**(code **)(**(int **)(this + 0x5c) + 4))(*(undefined4 *)(this + 0x5c));
    }
    *(undefined4 *)(this + 0x5c) = 0;
  }
  puts("Application Config Free Success!");
  if (*(int *)(this + 0xc) != 0) {
    if (*(int *)(this + 0xc) != 0) {
      (**(code **)(**(int **)(this + 0xc) + 4))(*(undefined4 *)(this + 0xc));
    }
    *(undefined4 *)(this + 0xc) = 0;
  }
  puts("Application Initor Free Success!");
  puts(&DAT_0811c915);
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
