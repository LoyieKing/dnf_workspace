# _ZN12CApplication14SwitchQueueTCPEv

`CApplication::SwitchQueueTCP()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8063a8e` | `0x8a` | `0x804f4c0` | `0x8f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,47 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 add    $0x130,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvQLockEv>
 mov    %eax,0x4(%esp)
-lea    -0xc(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 call   <T> <_ZN6IQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEE3GetEv>
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6IQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEE11SwitchQueueEv>
-xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN12CApplication14SwitchQueueTCPEv+0x78>
-call   <T> <_ZN6IQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEE3GetEv>
+je     <T> <_ZN12CApplication14SwitchQueueTCPEv+0x7d>
+call   <T> <_Z22CPacketDecoderInstancev>
+mov    %eax,-0xc(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6IQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEE13GetParseQueueEv>
-mov    %eax,%ebx
-call   <T> <_Z22CPacketDecoderInstancev>
-mov    %ebx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder11SetTCPQueueEPSt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEE>
-jmp    <T> <_ZN12CApplication14SwitchQueueTCPEv+0x78>
+jmp    <T> <_ZN12CApplication14SwitchQueueTCPEv+0x7d>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xc(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0xc(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::SwitchQueueTCP() */

void __thiscall CApplication::_ZN12CApplication14SwitchQueueTCPEv(CApplication *this)

{
  char cVar1;
  CMutex *pCVar2;
  IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
  *pIVar3;
  queue *pqVar4;
  CPacketDecoder *this_00;
  CGuard<CMutex> local_10 [4];
  
  pCVar2 = (CMutex *)CTcpNetSystem::Get_TcpRecvQLock((CTcpNetSystem *)(this + 0x130));
  CGuard<CMutex>::CGuard(local_10,pCVar2);
                    /* try { // try from 08063ab5 to 08063ae8 has its CatchHandler @ 08063aeb */
  pIVar3 = (IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
            *)IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
              ::Get();
  cVar1 = IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
          ::SwitchQueue(pIVar3);
  if (cVar1 == '\x01') {
    pIVar3 = (IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
              *)IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
                ::Get();
    pqVar4 = (queue *)IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
                      ::GetParseQueue(pIVar3);
    this_00 = (CPacketDecoder *)CPacketDecoderInstance();
    CPacketDecoder::SetTCPQueue(this_00,pqVar4);
  }
  CGuard<CMutex>::~CGuard(local_10);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFApplication.cpp](source/DNFServer/GameServer/Guild/DNFApplication.cpp)（约第 545 行）：

```cpp
void CApplication::SwitchQueueTCP()
{
    CGuard<CMutex> guard(m_tcpNetSystem.Get_TcpRecvQLock());
    typedef std::queue<CTcpRecvBuffer*> TcpRecvQueue;
    IQueue<TcpRecvQueue>* q = IQueue<TcpRecvQueue>::Get();
    if (q->SwitchQueue())
    {
        CPacketDecoder* dec = CPacketDecoderInstance();
        dec->SetTCPQueue(q->GetParseQueue());
    }
}
```
