# _ZN12CApplication7ProcessEv

`CApplication::Process()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x805e60c` | `0x1c3` | `0x804de26` | `0x1ae` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,124 +1,114 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
-jmp    <T> <_ZN12CApplication7ProcessEv+0x1ad>
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 test   %al,%al
-je     <T> <_ZN12CApplication7ProcessEv+0x69>
+je     <T> <_ZN12CApplication7ProcessEv+0x64>
 mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 cmp    $0x1,%al
-jbe    <T> <_ZN12CApplication7ProcessEv+0x69>
+jbe    <T> <_ZN12CApplication7ProcessEv+0x64>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler7ProcessEv>
 mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 cmp    $0x3,%al
-jne    <T> <_ZN12CApplication7ProcessEv+0x69>
+jne    <T> <_ZN12CApplication7ProcessEv+0x64>
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandler11SaveProcessEv>
 mov    0x8(%ebp),%eax
 add    $0x4c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager15ProcessByMinuteEv>
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
-jmp    <T> <_ZN12CApplication7ProcessEv+0x1ad>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x8>
 cmp    $0x2,%edx
-jne    <T> <_ZN12CApplication7ProcessEv+0x147>
+jne    <T> <_ZN12CApplication7ProcessEv+0x143>
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
+movl   $0x22a,0x8(%esp)
+movl   $"Process",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x22a,0x8(%esp)
-movl   $"Process",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CApplication::Process() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/process.log",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x140>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x139>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x1ad>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x8>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CApplication::Process() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x22f,0x8(%esp)
 movl   $"Process",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CApplication::Process() Exception Break\n",0x8(%esp)
 movl   $"./log/process.log",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x1a8>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x1a4>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-mov    0x8(%ebp),%eax
-movzbl 0x4(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN12CApplication7ProcessEv+0xd>
-add    $0x30,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
+jmp    <T> <_ZN12CApplication7ProcessEv+0x8>
```
## 2. Ghidra 反编译 C

```c

/* CApplication::Process() */

void __thiscall CApplication::_ZN12CApplication7ProcessEv(CApplication *this)

{
  int iVar1;
  CPacketDecoder *this_00;
  
  while (this[4] != (CApplication)0x0) {
                    /* try { // try from 0805e622 to 0805e6ab has its CatchHandler @ 0805e6b1 */
    iVar1 = CFrameCountHandler::GetFrameCountInfo((CFrameCountHandler *)(this + 0x1c));
    if ((*(char *)(iVar1 + 0x24) != '\0') && (1 < *(byte *)(iVar1 + 0x24))) {
      CServerHandler::Process(*(CServerHandler **)(this + 0x18));
      if (*(char *)(iVar1 + 0x24) == '\x03') {
        CFrameCountHandler::SaveProcess((CFrameCountHandler *)(this + 0x1c));
        CUserManager::ProcessByMinute((CUserManager *)(this + 0x4c));
      }
    }
    _ZN12CApplication14SwitchQueueTCPEv(this);
    _ZN12CApplication14SwitchQueueUDPEv(this);
    this_00 = (CPacketDecoder *)CPacketDecoderInstance();
    CPacketDecoder::Process(this_00);
    DNFFLib::Sleep_Ext(0,1);
  }
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
