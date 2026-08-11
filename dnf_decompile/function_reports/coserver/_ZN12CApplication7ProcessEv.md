# _ZN12CApplication7ProcessEv

`CApplication::Process()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x804fd46` | `0x19a` | `0x804d3e4` | `0x19e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,112 +1,113 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
-jmp    <T> <_ZN12CApplication7ProcessEv+0x184>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x188>
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 movzbl 0x24(%eax),%eax
 test   %al,%al
 je     <T> <_ZN12CApplication7ProcessEv+0x63>
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 movzbl 0x24(%eax),%eax
 cmp    $0x1,%al
 jbe    <T> <_ZN12CApplication7ProcessEv+0x63>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler7ProcessEv>
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 movzbl 0x24(%eax),%eax
 cmp    $0x3,%al
 jne    <T> <_ZN12CApplication7ProcessEv+0x63>
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 movl   $0x270f,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandler11SaveProcessEi>
 movl   $0x1,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x184>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x188>
 cmp    $0x2,%edx
-jne    <T> <_ZN12CApplication7ProcessEv+0x11e>
+jne    <T> <_ZN12CApplication7ProcessEv+0x122>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CApplication::Process() Exception Break : %s\n",(%esp)
 call   <T> <printf>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
 movl   $0x1ec,0x8(%esp)
 movl   $&_ZZN12CApplication7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CApplication::Process() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/process",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x117>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x11b>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x184>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x188>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CApplication::Process() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x1f1,0x8(%esp)
 movl   $&_ZZN12CApplication7ProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CApplication::Process() Exception Break\n",0x8(%esp)
 movl   $"./log/process",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x17f>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x183>
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
  
  while (this[4] != (CApplication)0x0) {
                    /* try { // try from 0804fd5c to 0804fdbc has its CatchHandler @ 0804fdc2 */
    iVar1 = CFrameCountHandler::GetFrameCountInfo((CFrameCountHandler *)(this + 0x20));
    if ((*(char *)(iVar1 + 0x24) != '\0') && (1 < *(byte *)(iVar1 + 0x24))) {
      CServerHandler::Process(*(CServerHandler **)(this + 0x1c));
      if (*(char *)(iVar1 + 0x24) == '\x03') {
        CFrameCountHandler::SaveProcess((CFrameCountHandler *)(this + 0x20),9999);
      }
    }
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
            const char* msg = e.what();
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
