# _ZN10CAppThread8dispatchEPv

`CAppThread::dispatch(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x8051fc2` | `0x2f9` | `0x804be7e` | `0x307` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,212 +1,215 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x10,%edx
 movl   $0x3e8,0xc(%esp)
 movl   $0x22,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt>
 mov    0x8(%ebp),%eax
 mov    0x40(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN10CAppThread8dispatchEPv+0x53>
+je     <T> <_ZN10CAppThread8dispatchEPv+0x131>
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN10CAppThread8dispatchEPv+0x53>
+je     <T> <_ZN10CAppThread8dispatchEPv+0x131>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CAppThread8dispatchEPv+0x11c>
-lea    -0x35(%ebp),%eax
+je     <T> <_ZN10CAppThread8dispatchEPv+0x131>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_UserManagerEv>
+movl   $0x0,0x4(%esp)
+movl   $0x5,(%esp)
+call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
+movl   $"AppThread Thread Start!",(%esp)
+call   <T> <puts>
+mov    0x8(%ebp),%eax
+movb   $0x1,0x8(%eax)
+jmp    <T> <_ZN10CAppThread8dispatchEPv+0x118>
+mov    0x8(%ebp),%eax
+add    $0x10,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv>
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+movzbl 0x24(%eax),%eax
+test   %al,%al
+je     <T> <_ZN10CAppThread8dispatchEPv+0xdf>
+mov    -0x20(%ebp),%eax
+movzbl 0x24(%eax),%eax
+cmp    $0x1,%al
+jbe    <T> <_ZN10CAppThread8dispatchEPv+0xdf>
+mov    -0x20(%ebp),%eax
+movzbl 0x24(%eax),%eax
+cmp    $0x3,%al
+jne    <T> <_ZN10CAppThread8dispatchEPv+0xdf>
+mov    0x8(%ebp),%eax
+mov    0x4c(%eax),%eax
+mov    0x8(%ebp),%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN18CFrameCountHandler11SaveProcessEi>
+mov    0x8(%ebp),%eax
+mov    0x44(%eax),%eax
+mov    %eax,%esi
+mov    0x8(%ebp),%eax
+mov    0x40(%eax),%eax
+mov    %eax,%ebx
+call   <T> <_Z22CPacketDecoderInstancev>
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CPacketDecoder7ProcessEPSt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEEP6CMutex>
+movl   $0x1,0x4(%esp)
+movl   $0x0,(%esp)
+call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
+mov    0x8(%ebp),%eax
+movzbl 0x8(%eax),%eax
+test   %al,%al
+setne  %al
+test   %al,%al
+jne    <T> <_ZN10CAppThread8dispatchEPv+0x95>
+jmp    <T> <_ZN10CAppThread8dispatchEPv+0x2ff>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"AppThread is Not Ready!\n",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN10CAppThread8dispatchEPv+0xca>
+jmp    <T> <_ZN10CAppThread8dispatchEPv+0x1a8>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CAppThread8dispatchEPv+0xc4>
+jmp    <T> <_ZN10CAppThread8dispatchEPv+0x1a2>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN10CAppThread8dispatchEPv+0xe1>
+jne    <T> <_ZN10CAppThread8dispatchEPv+0x1bf>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN10CAppThread8dispatchEPv+0xe1>
-lea    -0x3c(%ebp),%eax
+jmp    <T> <_ZN10CAppThread8dispatchEPv+0x1bf>
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CAppThread8dispatchEPv+0xf9>
+jmp    <T> <_ZN10CAppThread8dispatchEPv+0x1d4>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN10CAppThread8dispatchEPv+0xe1>
+jne    <T> <_ZN10CAppThread8dispatchEPv+0x1bf>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x35(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN10CAppThread8dispatchEPv+0x1e9>
-lea    -0x35(%ebp),%eax
+jmp    <T> <_ZN10CAppThread8dispatchEPv+0x1f7>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_UserManagerEv>
-mov    %eax,-0x24(%ebp)
-movl   $0x0,0x4(%esp)
-movl   $0x5,(%esp)
-call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-movl   $"AppThread Thread Start!",(%esp)
-call   <T> <puts>
-mov    0x8(%ebp),%eax
-movb   $0x1,0x8(%eax)
-jmp    <T> <_ZN10CAppThread8dispatchEPv+0x1d5>
-mov    0x8(%ebp),%eax
-add    $0x10,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x24(%eax),%eax
-test   %al,%al
-je     <T> <_ZN10CAppThread8dispatchEPv+0x1a0>
-mov    -0x20(%ebp),%eax
-movzbl 0x24(%eax),%eax
-cmp    $0x1,%al
-jbe    <T> <_ZN10CAppThread8dispatchEPv+0x1a0>
-mov    -0x20(%ebp),%eax
-movzbl 0x24(%eax),%eax
-cmp    $0x3,%al
-jne    <T> <_ZN10CAppThread8dispatchEPv+0x1a0>
-mov    0x8(%ebp),%eax
-mov    0x4c(%eax),%eax
-mov    0x8(%ebp),%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN18CFrameCountHandler11SaveProcessEi>
-mov    0x8(%ebp),%eax
-mov    0x44(%eax),%esi
-mov    0x8(%ebp),%eax
-mov    0x40(%eax),%ebx
-call   <T> <_Z22CPacketDecoderInstancev>
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CPacketDecoder7ProcessEPSt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEEP6CMutex>
-movl   $0x1,0x4(%esp)
-movl   $0x0,(%esp)
-call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-mov    0x8(%ebp),%eax
-movzbl 0x8(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN10CAppThread8dispatchEPv+0x156>
-jmp    <T> <_ZN10CAppThread8dispatchEPv+0x2f1>
 cmp    $0x2,%edx
-jne    <T> <_ZN10CAppThread8dispatchEPv+0x28b>
+jne    <T> <_ZN10CAppThread8dispatchEPv+0x299>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CApplication::Process() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x63,0x8(%esp)
 movl   $&_ZZN10CAppThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CAppThread::dispatch() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/process",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN10CAppThread8dispatchEPv+0x284>
+jmp    <T> <_ZN10CAppThread8dispatchEPv+0x292>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN10CAppThread8dispatchEPv+0x2f1>
+jmp    <T> <_ZN10CAppThread8dispatchEPv+0x2ff>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CApplication::Process() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x68,0x8(%esp)
 movl   $&_ZZN10CAppThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CAppThread::dispatch() Exception Break\n",0x8(%esp)
 movl   $"./log/process",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN10CAppThread8dispatchEPv+0x2ec>
+jmp    <T> <_ZN10CAppThread8dispatchEPv+0x2fa>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x4c,%esp
+add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppThread::dispatch(void*) */

void CAppThread::_ZN10CAppThread8dispatchEPv(void *param_1)

{
  CMutex *pCVar1;
  queue *pqVar2;
  CDNFException *this;
  CPacketDecoder *this_00;
  char *pcVar3;
  allocator *paVar4;
  undefined4 uVar5;
  string local_40 [7];
  allocator local_39 [17];
  undefined4 local_28;
  int local_24;
  
  uVar5 = 1000;
                    /* try { // try from 08051fee to 08051ff2 has its CatchHandler @ 080521ab */
  CFrameCountHandler::InitFrameCountInfo
            ((CApplication *)((int)param_1 + 0x10),*(uint *)((int)param_1 + 0xc),0x22);
  if (((*(int *)((int)param_1 + 0x40) != 0) && (*(int *)((int)param_1 + 0x44) != 0)) &&
     (*(int *)((int)param_1 + 0xc) != 0)) {
    local_28 = CApplication::Get_UserManager(*(CApplication **)((int)param_1 + 0xc));
    DNFFLib::Sleep_Ext(5,0);
    puts("AppThread Thread Start!");
    *(undefined1 *)((int)param_1 + 8) = 1;
    while (*(char *)((int)param_1 + 8) != '\0') {
      local_24 = CFrameCountHandler::GetFrameCountInfo((CFrameCountHandler *)((int)param_1 + 0x10));
      if (((*(char *)(local_24 + 0x24) != '\0') && (1 < *(byte *)(local_24 + 0x24))) &&
         (*(char *)(local_24 + 0x24) == '\x03')) {
        CFrameCountHandler::SaveProcess
                  ((CFrameCountHandler *)((int)param_1 + 0x10),*(int *)((int)param_1 + 0x4c));
      }
      pCVar1 = *(CMutex **)((int)param_1 + 0x44);
      pqVar2 = *(queue **)((int)param_1 + 0x40);
      this_00 = (CPacketDecoder *)CPacketDecoderInstance();
      CPacketDecoder::Process(this_00,pqVar2,pCVar1);
      DNFFLib::Sleep_Ext(0,1);
    }
    return;
  }
  std::allocator<char>::allocator();
  paVar4 = local_39;
  pcVar3 = "AppThread is Not Ready!\n";
                    /* try { // try from 08052035 to 08052039 has its CatchHandler @ 080520a3 */
  std::string::string(local_40,"AppThread is Not Ready!\n",paVar4);
  this = (CDNFException *)__cxa_allocate_exception(8,pcVar3,paVar4,uVar5);
                    /* try { // try from 08052054 to 08052058 has its CatchHandler @ 0805205b */
  CDNFException::CDNFException(this,local_40);
                    /* try { // try from 08052092 to 08052096 has its CatchHandler @ 08052099 */
  std::string::~string(local_40);
  std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080520d9 to 08052196 has its CatchHandler @ 080521ab */
  __cxa_throw(this,&CDNFException::typeinfo,CDNFException::~CDNFException);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFAppThread.cpp](source/DNFServer/GameServer/COServer/DNFAppThread.cpp)（约第 31 行）：

```cpp
void CAppThread::dispatch(void* param)
{
    try
    {
        m_frame.InitFrameCountInfo(m_app, 0x22, 1000);
        if (m_queue != 0 && m_lock != 0 && m_app != 0)
        {
            m_app->Get_UserManager();
            DNFFLib::Sleep_Ext(5, 0);
            puts("AppThread Thread Start!");
            m_running = 1;
            while (m_running != 0)
            {
                CFrameCountHandler* f = m_frame.GetFrameCountInfo();
                if (f->m_state != 0 && 1 < (unsigned char)f->m_state && f->m_state == 3)
                {
                    m_frame.SaveProcess(m_saveInterval);
                }
                CPacketDecoderInstance()->Process((std::queue<CUdpRecvBuffer*>*)m_queue,
                                                   (CMutex*)m_lock);
                DNFFLib::Sleep_Ext(0, 1);
            }
            return;
        }
        throw CDNFException("AppThread is Not Ready!\n");
    }
    catch (CDNFException& e)
    {
        printf("CApplication::Process() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x63, "./log/process", "CAppThread::dispatch() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CApplication::Process() Exception Break");
        DNF_LOG_SCOPE_LINE(0x68, "./log/process", "CAppThread::dispatch() Exception Break\n");
    }
}
```
