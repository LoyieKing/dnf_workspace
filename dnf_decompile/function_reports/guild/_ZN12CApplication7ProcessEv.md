# _ZN12CApplication7ProcessEv

`CApplication::Process()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8062d12` | `0x261` | `0x804e79a` | `0x259` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,156 +1,156 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x30,%esp
-jmp    <T> <_ZN12CApplication7ProcessEv+0x209>
+sub    $0x40,%esp
+jmp    <T> <_ZN12CApplication7ProcessEv+0x201>
 mov    0x8(%ebp),%eax
 add    $0x6c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-movzbl 0x24(%eax),%eax
-test   %al,%al
-je     <T> <_ZN12CApplication7ProcessEv+0xc5>
-mov    -0x10(%ebp),%eax
-movzbl 0x24(%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
+mov    0x24(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN12CApplication7ProcessEv+0xbf>
+mov    -0x14(%ebp),%eax
+mov    0x24(%eax),%eax
 cmp    $0x1,%al
-jbe    <T> <_ZN12CApplication7ProcessEv+0xc5>
+jbe    <T> <_ZN12CApplication7ProcessEv+0xbf>
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler7ProcessEv>
-mov    -0x10(%ebp),%eax
-movzbl 0x24(%eax),%eax
+mov    -0x14(%ebp),%eax
+mov    0x24(%eax),%eax
 cmp    $0x3,%al
-jne    <T> <_ZN12CApplication7ProcessEv+0xb5>
-mov    0x8(%ebp),%eax
-add    $0x6c,%eax
+jne    <T> <_ZN12CApplication7ProcessEv+0xaf>
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandler11SaveProcessEv>
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x290,%edx
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb>
 mov    0x8(%ebp),%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager15ProcessByMinuteEv>
 mov    0x8(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager15ProcessByMinuteEv>
 mov    0x8(%ebp),%eax
 mov    0x510(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv>
 mov    0x8(%ebp),%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager15ProcessBySecondEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14SwitchQueueTCPEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14SwitchQueueUDPEv>
 call   <T> <_Z22CPacketDecoderInstancev>
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder7ProcessEv>
 movl   $0x1,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x209>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x201>
 cmp    $0x2,%edx
-jne    <T> <_ZN12CApplication7ProcessEv+0x1a3>
+jne    <T> <_ZN12CApplication7ProcessEv+0x19b>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,0x4(%esp)
-movl   $"CApplication::Process() Exception Break : %s\n",(%esp)
-call   <T> <printf>
+mov    %eax,(%esp)
+call   <T> <puts>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x248,0x8(%esp)
 movl   $&_ZZN12CApplication7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
-movl   $"CApplication::Process() Exception Break : %s\n",0x8(%esp)
+movl   $"%s\n",0x8(%esp)
 movl   $"./log/process",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x19c>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x194>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x209>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x201>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CApplication::Process() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x24d,0x8(%esp)
 movl   $&_ZZN12CApplication7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CApplication::Process() Exception Break\n",0x8(%esp)
+movl   $"CApplication::Process() Exception Break",0x8(%esp)
 movl   $"./log/process",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x204>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x1fc>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 mov    0x8(%ebp),%eax
 movzbl 0x4(%eax),%eax
 test   %al,%al
 jne    <T> <_ZN12CApplication7ProcessEv+0xd>
 movl   $"CApplication::Process() Exit",(%esp)
 call   <T> <puts>
 movl   $0x251,0x8(%esp)
 movl   $&_ZZN12CApplication7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CApplication::Process() Exit\n",0x8(%esp)
 movl   $"./log/process",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x30,%esp
+add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::Process() */

void __thiscall CApplication::_ZN12CApplication7ProcessEv(CApplication *this)

{
  CPacketDecoder *this_00;
  CMyFileLog local_1c [8];
  int local_14;
  
  while (this[4] != (CApplication)0x0) {
                    /* try { // try from 08062d28 to 08062e0d has its CatchHandler @ 08062e13 */
    local_14 = CFrameCountHandler::GetFrameCountInfo((CFrameCountHandler *)(this + 0x6c));
    if ((*(char *)(local_14 + 0x24) != '\0') && (1 < *(byte *)(local_14 + 0x24))) {
      CServerHandler::Process(*(CServerHandler **)(this + 0x68));
      if (*(char *)(local_14 + 0x24) == '\x03') {
        CFrameCountHandler::SaveProcess((CFrameCountHandler *)(this + 0x6c));
        CGuildManager::DBGuildProcess
                  ((CServerHandler *)(this + 0x290),SUB41(*(undefined4 *)(this + 0x68),0));
        CGuildManager::ProcessByMinute((CGuildManager *)(this + 0x290));
        CUserManager::ProcessByMinute();
        CMemoryCashManager::ProcessLifeTimeOut(*(CMemoryCashManager **)(this + 0x510));
      }
      CGuildManager::ProcessBySecond();
    }
    _ZN12CApplication14SwitchQueueTCPEv(this);
    _ZN12CApplication14SwitchQueueUDPEv(this);
    this_00 = (CPacketDecoder *)CPacketDecoderInstance();
    CPacketDecoder::Process(this_00);
    DNFFLib::Sleep_Ext(0,1);
  }
  puts("CApplication::Process() Exit");
  CMyFileLog::CMyFileLog(local_1c,"Process",0x251);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_1c,"./log/process","CApplication::Process() Exit\n");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFApplication.cpp](source/DNFServer/GameServer/Guild/DNFApplication.cpp)（约第 295 行）：

```cpp
void CApplication::Process()
{
    while (m_loaded)
    {
        try
        {
            CFrameCountHandler* f = m_frameCount.GetFrameCountInfo();
            if (f->m_field24 != 0 && 1 < (unsigned char)f->m_field24)
            {
                m_serverHandler->Process();
                if ((unsigned char)f->m_field24 == 3)
                {
                    f->SaveProcess();
                    m_guildManager.DBGuildProcess(m_serverHandler, false);
                    m_guildManager.ProcessByMinute();
                    m_userManager.ProcessByMinute();
                    m_memoryCash->ProcessLifeTimeOut();
                }
                m_guildManager.ProcessBySecond();
            }
            SwitchQueueTCP();
            SwitchQueueUDP();
            CPacketDecoder* dec = CPacketDecoderInstance();
            dec->Process();
            DNFFLib::Sleep_Ext(0, 1);
        }
        catch (CDNFException& e)
        {
            printf("%s\n", e.what());
            DNF_LOG_SCOPE_LINE(0x248, "./log/process", "%s\n", e.what());
        }
        catch (...)
        {
            puts("CApplication::Process() Exception Break");
            DNF_LOG_SCOPE_LINE(0x24d, "./log/process", "CApplication::Process() Exception Break");
        }
    }
    puts("CApplication::Process() Exit");
    DNF_LOG_SCOPE_LINE(0x251, "./log/process", "CApplication::Process() Exit\n");
}
```
