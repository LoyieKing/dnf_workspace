# _ZN12CApplication7ProcessEv

`CApplication::Process()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80644ec` | `0x377` | `0x8052200` | `0x375` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,218 +1,217 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
-jmp    <T> <_ZN12CApplication7ProcessEv+0x31f>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x31d>
 mov    0x8(%ebp),%eax
 add    $0xa4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 test   %al,%al
-je     <T> <_ZN12CApplication7ProcessEv+0x195>
+je     <T> <_ZN12CApplication7ProcessEv+0x173>
 mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 cmp    $0x1,%al
-jbe    <T> <_ZN12CApplication7ProcessEv+0x195>
+jbe    <T> <_ZN12CApplication7ProcessEv+0x173>
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler7ProcessEv>
 mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 cmp    $0x2,%al
 jbe    <T> <_ZN12CApplication7ProcessEv+0x173>
 mov    0x8(%ebp),%eax
 add    $0x2d0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv>
 mov    0x8(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager18MemberEnterProcessEv>
 mov    0x8(%ebp),%eax
 add    $0xa4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandler11SaveProcessEv>
 mov    0x8(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager15ProcessByMinuteEv>
 mov    0x8(%ebp),%eax
 mov    0x318(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv>
 mov    0x8(%ebp),%eax
 mov    0x318(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager20ProcessCashDataPrintEv>
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x324(%eax),%eax
 movl   $0x2710,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CTowerRank20processReloadRankingEP14CServerHandlerbj>
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x324(%eax),%eax
 movl   $0x5,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CTowerRank20processReloadRankingEP14CServerHandlerbj>
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x380(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19CPeriodicMessageMgr9OnProcessEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    0x330(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22CLoginLogoutStatistics15ProcessByMinuteEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15ProcessTimeSyncEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication18UpdateCollectItemsEv>
 mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 cmp    $0x4,%al
 jne    <T> <_ZN12CApplication7ProcessEv+0x173>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication19UpdateMiniCraneSeedEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
 movl   $0x0,0x8(%esp)
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN20CItemLimitEditionMgr19processScheduledJobEP12CApplicationb>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14SwitchQueueTCPEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14SwitchQueueUDPEv>
 call   <T> <_Z22CPacketDecoderInstancev>
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder7ProcessEv>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x32c(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CIPCounter4ProcEj>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x2c8(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTaskScheduler11ProcessTaskEj>
 movl   $0x1,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x31f>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x31d>
 cmp    $0x2,%edx
-jne    <T> <_ZN12CApplication7ProcessEv+0x2b9>
+jne    <T> <_ZN12CApplication7ProcessEv+0x2b7>
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
 movl   $"CApplication::Process() Exception Break : %s\n",(%esp)
 call   <T> <printf>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
 movl   $0x413,0x8(%esp)
 movl   $"Process",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CApplication::Process() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/process",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x2b2>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x2b0>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x31f>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x31d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CApplication::Process() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x418,0x8(%esp)
 movl   $"Process",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CApplication::Process() Exception Break\n",0x8(%esp)
 movl   $"./log/process",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x31a>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x318>
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
 movl   $0x41c,0x8(%esp)
 movl   $"Process",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CApplication::Process() Exit\n",0x8(%esp)
 movl   $"./log/process",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 add    $0x30,%esp
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
  CItemLimitEditionMgr *this_00;
  CPacketDecoder *this_01;
  uint uVar1;
  CMyFileLog local_1c [8];
  int local_14;
  
  while (this[4] != (CApplication)0x0) {
                    /* try { // try from 08064504 to 080646fd has its CatchHandler @ 08064703 */
    local_14 = CFrameCountHandler::GetFrameCountInfo((CFrameCountHandler *)(this + 0xa4));
    if ((*(char *)(local_14 + 0x24) != '\0') && (1 < *(byte *)(local_14 + 0x24))) {
      CServerHandler::Process(*(CServerHandler **)(this + 0xa0));
      if (2 < *(byte *)(local_14 + 0x24)) {
        CMemberManager::MemberRegisterFlagProcess((CMemberManager *)(this + 0x2d0));
        CUserManager::MemberEnterProcess();
        CFrameCountHandler::SaveProcess((CFrameCountHandler *)(this + 0xa4));
        CUserManager::ProcessByMinute((CUserManager *)(this + 0x10));
        CMemoryCashManager::ProcessLifeTimeOut(*(CMemoryCashManager **)(this + 0x318));
        CMemoryCashManager::ProcessCashDataPrint(*(CMemoryCashManager **)(this + 0x318));
        CTowerRank::processReloadRanking
                  (*(CTowerRank **)(this + 0x324),*(CServerHandler **)(this + 0xa0),false,10000);
        CTowerRank::processReloadRanking
                  (*(CTowerRank **)(this + 0x324),*(CServerHandler **)(this + 0xa0),false,5);
        CPeriodicMessageMgr::OnProcess
                  (*(CPeriodicMessageMgr **)(this + 0x380),*(CServerHandler **)(this + 0xa0));
        CLoginLogoutStatistics::ProcessByMinute(*(CLoginLogoutStatistics **)(this + 0x330));
        _ZN12CApplication15ProcessTimeSyncEv(this);
        _ZN12CApplication18UpdateCollectItemsEv(this);
        if (*(char *)(local_14 + 0x24) == '\x04') {
          _ZN12CApplication19UpdateMiniCraneSeedEv(this);
        }
      }
      this_00 = (CItemLimitEditionMgr *)_ZN12CApplication22getItemLimitEditionMgrEv(this);
      CItemLimitEditionMgr::processScheduledJob(this_00,this,false);
    }
    _ZN12CApplication14SwitchQueueTCPEv(this);
    _ZN12CApplication14SwitchQueueUDPEv(this);
    this_01 = (CPacketDecoder *)CPacketDecoderInstance();
    CPacketDecoder::Process(this_01);
    uVar1 = time((time_t *)0x0);
    CIPCounter::_ZN10CIPCounter4ProcEj(*(CIPCounter **)(this + 0x32c),uVar1);
    uVar1 = time((time_t *)0x0);
    CTaskScheduler::ProcessTask(*(CTaskScheduler **)(this + 0x2c8),uVar1);
    DNFFLib::Sleep_Ext(0,1);
  }
  puts("CApplication::Process() Exit");
  CMyFileLog::CMyFileLog(local_1c,"Process",0x41c);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_1c,"./log/process","CApplication::Process() Exit\n");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 252 行）：

```cpp
void CApplication::Process()
{
    while (m_loaded)
    {
        try
        {
            CFrameCountHandler* f = m_frame.GetFrameCountInfo();
            if (f->m_state != 0 && 1 < (unsigned char)f->m_state)
            {
                m_serverHandler->Process();
                if (f->m_state == 3)
                {
                    m_frame.SaveProcess(9999);
                }
            }
            DNFFLib::Sleep_Ext(0, 1);
        }
        catch (CDNFException& e)
        {
            printf("CApplication::Process() Exception Break : %s\n", e.what());
            register const char* msg = e.what();
            DNF_LOG_SCOPE_LINE(0x1ec, "./log/process", "CApplication::Process() Exception Break : %s\n", msg);
        }
        catch (...)
        {
            puts("CApplication::Process() Exception Break");
            DNF_LOG_SCOPE_LINE(0x1f1, "./log/process", "CApplication::Process() Exception Break\n");
        }
    }
}
```
