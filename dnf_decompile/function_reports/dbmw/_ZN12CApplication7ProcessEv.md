# _ZN12CApplication7ProcessEv

`CApplication::Process()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x806c35c` | `0x1df` | `0x806cb54` | `0x1de` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,131 +1,131 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
-jmp    <T> <_ZN12CApplication7ProcessEv+0x1c9>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x1c3>
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv>
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 test   %al,%al
-je     <T> <_ZN12CApplication7ProcessEv+0x85>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN12CApplication7ProcessEv+0x7f>
+mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 cmp    $0x1,%al
-jbe    <T> <_ZN12CApplication7ProcessEv+0x85>
+jbe    <T> <_ZN12CApplication7ProcessEv+0x7f>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler7ProcessEv>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 cmp    $0x3,%al
-jne    <T> <_ZN12CApplication7ProcessEv+0x85>
+jne    <T> <_ZN12CApplication7ProcessEv+0x7f>
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandler11SaveProcessEv>
+mov    0x8(%ebp),%eax
+lea    0x50(%eax),%ebx
 call   <T> <_Z21CQueryCounterInstancev>
-mov    %eax,-0x10(%ebp)
-mov    0x8(%ebp),%eax
-add    $0x50,%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CQueryCounter10WriteDBLogER10CDBManager>
 call   <T> <_Z21CPacketTracerInstancev>
 mov    %eax,(%esp)
 call   <T> <_ZN13CPacketTracer21WritePacketProcessLogEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14SwitchQueueTCPEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14SwitchQueueUDPEv>
 call   <T> <_Z22CPacketDecoderInstancev>
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder7ProcessEv>
 movl   $0x1,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x1c9>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x1c3>
 cmp    $0x2,%edx
-jne    <T> <_ZN12CApplication7ProcessEv+0x163>
+jne    <T> <_ZN12CApplication7ProcessEv+0x15d>
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
 mov    %eax,0x4(%esp)
 movl   $"CApplication::Process() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x315,0x8(%esp)
 movl   $&_ZZN12CApplication7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CApplication::Process() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/process.log",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x15c>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x156>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x1c9>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x1c3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CApplication::Process() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x31a,0x8(%esp)
 movl   $&_ZZN12CApplication7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CApplication::Process() Exception Break\n",0x8(%esp)
 movl   $"./log/process.log",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x1c4>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x1be>
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
+setne  %al
+test   %al,%al
 jne    <T> <_ZN12CApplication7ProcessEv+0xd>
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
  int iVar1;
  CQueryCounter *this_00;
  CPacketTracer *this_01;
  CPacketDecoder *this_02;
  
  while (this[4] != (CApplication)0x0) {
                    /* try { // try from 0806c372 to 0806c417 has its CatchHandler @ 0806c41d */
    iVar1 = CFrameCountHandler::GetFrameCountInfo((CFrameCountHandler *)(this + 0x1c));
    if ((*(char *)(iVar1 + 0x24) != '\0') && (1 < *(byte *)(iVar1 + 0x24))) {
      CServerHandler::Process(*(CServerHandler **)(this + 0x18));
      if (*(char *)(iVar1 + 0x24) == '\x03') {
        CFrameCountHandler::SaveProcess((CFrameCountHandler *)(this + 0x1c));
        this_00 = (CQueryCounter *)CQueryCounterInstance();
        CQueryCounter::WriteDBLog(this_00,(CDBManager *)(this + 0x50));
        this_01 = (CPacketTracer *)CPacketTracerInstance();
        CPacketTracer::WritePacketProcessLog(this_01);
      }
    }
    _ZN12CApplication14SwitchQueueTCPEv(this);
    _ZN12CApplication14SwitchQueueUDPEv(this);
    this_02 = (CPacketDecoder *)CPacketDecoderInstance();
    CPacketDecoder::Process(this_02);
    DNFFLib::Sleep_Ext(0,1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFApplication.cpp](source/DNFServer/GameServer/DBMW/DNFApplication.cpp)（约第 70 行）：

```cpp
void CApplication::Process()
{
    while (m_loaded)
    {
        try
        {
            CFrameCountHandler* info = (CFrameCountHandler*)m_frameCount.GetFrameCountInfo();
            if (info->m_field24 != 0 && info->m_field24 > 1)
            {
                m_serverHandler->Process();
                if (info->m_field24 == 3)
                {
                    m_frameCount.SaveProcess();
                    CQueryCounterInstance()->WriteDBLog(m_dbManager);
                    CPacketTracerInstance()->WritePacketProcessLog();
                }
            }
            SwitchQueueTCP();
            SwitchQueueUDP();
            CPacketDecoderInstance()->Process();
            DNFFLib::Sleep_Ext(0, 1);
        }
        DNF_CATCH_LOG_PRINTF("./log/process.log", "CApplication::Process() Exception Break", 0x315, 0x31a);
    }
}
```
