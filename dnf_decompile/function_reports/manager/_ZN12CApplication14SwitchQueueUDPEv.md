# _ZN12CApplication14SwitchQueueUDPEv

`CApplication::SwitchQueueUDP()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x805f164` | `0xba` | `0x804ef18` | `0xbd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,59 +1,60 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 add    $0x22c,%eax
 mov    %eax,0x4(%esp)
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    0x8(%ebp),%eax
 add    $0x6c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE8GetRecvQEv>
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN12CApplication14SwitchQueueUDPEv+0xa8>
+je     <T> <_ZN12CApplication14SwitchQueueUDPEv+0xab>
 mov    0x8(%ebp),%eax
 add    $0x6c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE5SwapQEv>
 mov    0x8(%ebp),%eax
 add    $0x6c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE8GetRecvQEv>
 mov    0x8(%ebp),%edx
 mov    0xc8(%edx),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN17CUdpNetworkThread11SetUDPQueueEPSt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEE>
 mov    0x8(%ebp),%eax
 add    $0x6c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE9GetParseQEv>
 mov    %eax,%ebx
 call   <T> <_Z22CPacketDecoderInstancev>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder11SetUdpQueueEPSt5queueIP14CUdpRecvBufferSt5dequeIS2_SaIS2_EEE>
-jmp    <T> <_ZN12CApplication14SwitchQueueUDPEv+0xa8>
+jmp    <T> <_ZN12CApplication14SwitchQueueUDPEv+0xab>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0xc(%ebp),%eax
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

/* CApplication::SwitchQueueUDP() */

void __thiscall CApplication::_ZN12CApplication14SwitchQueueUDPEv(CApplication *this)

{
  char cVar1;
  queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>> *this_00;
  queue *pqVar2;
  CPacketDecoder *this_01;
  CGuard<CMutex> local_10 [4];
  
  CGuard<CMutex>::CGuard(local_10,(CMutex *)(this + 0x22c));
  this_00 = (queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>> *)
            CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
            ::GetRecvQ((CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                        *)(this + 0x6c));
                    /* try { // try from 0805f194 to 0805f1ee has its CatchHandler @ 0805f1f1 */
  cVar1 = std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::
          empty(this_00);
  if (cVar1 == '\0') {
    CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
    ::SwapQ((CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
             *)(this + 0x6c));
    pqVar2 = (queue *)CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                      ::GetRecvQ((CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                                  *)(this + 0x6c));
    CUdpNetworkThread::SetUDPQueue(*(CUdpNetworkThread **)(this + 200),pqVar2);
    pqVar2 = (queue *)CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                      ::GetParseQ((CSwapQueue<std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>,2>
                                   *)(this + 0x6c));
    this_01 = (CPacketDecoder *)CPacketDecoderInstance();
    CPacketDecoder::SetUdpQueue(this_01,pqVar2);
  }
  CGuard<CMutex>::~CGuard(local_10);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFApplication.cpp](source/DNFServer/GameServer/DBMW/DNFApplication.cpp)（约第 347 行）：

```cpp
void CApplication::SwitchQueueUDP()
{
    CGuard<CMutex> guard(&m_mutexF8);
    if (!m_udpSwapQueue.GetRecvQ()->empty())
    {
        m_udpSwapQueue.SwapQ();
        m_networkThread->SetUDPQueue(m_udpSwapQueue.GetRecvQ());
        CPacketDecoderInstance()->SetUdpQueue(m_udpSwapQueue.GetParseQ());
    }
}
```
