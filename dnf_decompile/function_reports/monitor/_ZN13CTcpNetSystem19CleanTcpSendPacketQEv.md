# _ZN13CTcpNetSystem19CleanTcpSendPacketQEv

`CTcpNetSystem::CleanTcpSendPacketQ()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8053d1e` | `0x11c` | `0x80a3792` | `0x117` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,83 +1,82 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x30,%esp
+sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 add    $0xe8,%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    0x8(%ebp),%eax
 add    $0xc0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x3a>
 mov    $0x0,%ebx
-jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x81>
+jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x7e>
 mov    0x8(%ebp),%eax
 add    $0xc0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEE5frontEv>
-mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
+mov    (%eax),%esi
 mov    0x8(%ebp),%eax
 add    $0xc0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CTcpSendBufferSt5dequeIS1_SaIS1_EEE3popEv>
 mov    $0x1,%ebx
-jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x81>
+jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x7e>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+test   %ebx,%ebx
+je     <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0xd9>
+mov    0x8(%ebp),%eax
+add    $0x100,%eax
+mov    %eax,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    %esi,(%esp)
+call   <T> <_ZN14CTcpSendBufferdlEPv>
+jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0xc9>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
-test   %ebx,%ebx
-je     <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0xdf>
-mov    0x8(%ebp),%eax
-add    $0x100,%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpSendBufferdlEPv>
-jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0xcf>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
 jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x8>
+nop
 movl   $0x16b,0x8(%esp)
 movl   $&_ZZN13CTcpNetSystem19CleanTcpSendPacketQEvE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Clean Tcp Send Queue Complete !",0x8(%esp)
 movl   $"./log/TcpSend",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x30,%esp
+add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::CleanTcpSendPacketQ() */

void __thiscall CTcpNetSystem::_ZN13CTcpNetSystem19CleanTcpSendPacketQEv(CTcpNetSystem *this)

{
  char cVar1;
  undefined4 *puVar2;
  CMutex *pCVar3;
  CGuard<CMutex> local_20 [4];
  CGuard<CMutex> local_1c [4];
  CMyFileLog local_18 [8];
  CTcpSendBuffer *local_10;
  
  while( true ) {
    CGuard<CMutex>::CGuard(local_1c,(CMutex *)(this + 0xe8));
                    /* try { // try from 08053d48 to 08053d7c has its CatchHandler @ 08053d84 */
    cVar1 = std::queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>
            ::empty((queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>
                     *)(this + 0xc0));
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)
               std::
               queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>::
               front();
      local_10 = (CTcpSendBuffer *)*puVar2;
      std::queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>::pop
                ((queue<CTcpSendBuffer*,std::deque<CTcpSendBuffer*,std::allocator<CTcpSendBuffer*>>>
                  *)(this + 0xc0));
    }
    CGuard<CMutex>::~CGuard(local_1c);
    if (cVar1 != '\0') break;
    pCVar3 = (CMutex *)(this + 0x100);
    CGuard<CMutex>::CGuard(local_20,pCVar3);
                    /* try { // try from 08053dcb to 08053dcf has its CatchHandler @ 08053dd2 */
    CTcpSendBuffer::operator_delete(local_10,pCVar3);
    CGuard<CMutex>::~CGuard(local_20);
  }
  CMyFileLog::CMyFileLog(local_18,"CleanTcpSendPacketQ",0x16b);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_18,"./log/TcpSend","Clean Tcp Send Queue Complete !");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp](source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp)（约第 367 行）：

```cpp
void CTcpNetSystem::CleanTcpSendPacketQ()
{
    while (true)
    {
        register CTcpSendBuffer* buf;
        register int flag;
        {
            CGuard<CMutex> guard1(&m_mutexe8);
            if (m_sendQ.empty())
            {
                flag = 0;
            }
            else
            {
                buf = m_sendQ.front();
                m_sendQ.pop();
                flag = 1;
            }
        }
        if (!flag)
        {
            break;
        }
        {
            CGuard<CMutex> guard2(&m_mutex100);
            delete buf;
        }
    }
    DNF_LOG_SCOPE_LINE(0x16b, "./log/TcpSend", "Clean Tcp Send Queue Complete !");
}
```
