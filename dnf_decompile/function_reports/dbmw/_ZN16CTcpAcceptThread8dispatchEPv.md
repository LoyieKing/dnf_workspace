# _ZN16CTcpAcceptThread8dispatchEPv

`CTcpAcceptThread::dispatch(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8062a68` | `0x405` | `0x80e2b62` | `0x405` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,302 +1,302 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket4openEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2f>
 movl   $"Tcp Accept Socket Open Err",(%esp)
 call   <T> <printf>
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3fd>
 mov    0x8(%ebp),%eax
 movzwl 0x34(%eax),%eax
 movzwl %ax,%eax
 mov    0x8(%ebp),%edx
 add    $0x18,%edx
 movl   $0x1,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN9TCPSocket4bindEtb>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x6b>
 movl   $"Tcp Accept Socket Bind Err",(%esp)
 call   <T> <printf>
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3fd>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket6listenEi>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x99>
 movl   $"Tcp Accept Socket Listen Err",(%esp)
 call   <T> <printf>
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3fd>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x8(%eax)
 movl   $0x0,0x4(%esp)
 movl   $0x5,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x1bd>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket13pollReadEventEv>
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x1bc>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem10CreatePeerEv>
 mov    %eax,-0x20(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x18(%eax),%ebx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
-mov    0x8(%ebp),%edx
-add    $0x18,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket6acceptERS_>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x12a>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 mov    %eax,0x4(%esp)
 movl   $"Accept GameServer Fail(Port : %d)\n",(%esp)
 call   <T> <printf>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 mov    %eax,0x4(%esp)
 movl   $"Accept GameServer(Port : %d)\n",(%esp)
 call   <T> <printf>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvBLockEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvQLockEv>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE8GetRecvQEv>
 mov    %esi,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer8InitPeerEPSt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEP6CMutexS9_>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer7ConnSigEv>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18InsertAcceptedPeerEP5CPeer>
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x1bd>
 nop
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%eax
 test   %al,%al
 jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0xb9>
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3fd>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
 jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2fa>
 mov    %ecx,(%esp)
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
 movl   $"CTcpNetworkThread::dispatch() Except Break : %s\n",(%esp)
 call   <T> <printf>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CTcpNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x28a>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x284>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2a9>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2a9>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2be>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2a9>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2e5>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CTcpNetworkThread::dispatch() Except Break",(%esp)
 call   <T> <puts>
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CTcpNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x38d>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x387>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3ac>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3ac>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3c1>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3ac>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3e8>
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpAcceptThread::dispatch(void*) */

void CTcpAcceptThread::_ZN16CTcpAcceptThread8dispatchEPv(void *param_1)

{
  char cVar1;
  CPeer *this;
  TCPSocket *pTVar2;
  undefined4 uVar3;
  CMutex *pCVar4;
  CMutex *pCVar5;
  CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
  *this_00;
  queue *pqVar6;
  
                    /* try { // try from 08062a7a to 08062c21 has its CatchHandler @ 08062c39 */
  cVar1 = TCPSocket::open((TCPSocket *)((int)param_1 + 0x18));
  if (cVar1 == '\x01') {
    cVar1 = TCPSocket::bind((TCPSocket *)((int)param_1 + 0x18),*(ushort *)((int)param_1 + 0x34),true
                           );
    if (cVar1 == '\x01') {
      cVar1 = TCPSocket::listen((TCPSocket *)((int)param_1 + 0x18),5);
      if (cVar1 == '\x01') {
        *(undefined1 *)((int)param_1 + 8) = 1;
        DNFFLib::Sleep_Ext(5,0);
        while (*(char *)((int)param_1 + 8) != '\0') {
          cVar1 = TCPSocket::pollReadEvent((TCPSocket *)((int)param_1 + 0x18));
          if (cVar1 == '\x01') {
            this = (CPeer *)CTcpNetSystem::CreatePeer(*(CTcpNetSystem **)((int)param_1 + 0xc));
            pTVar2 = (TCPSocket *)CPeer::GetTcpSocket(this);
            cVar1 = TCPSocket::accept((TCPSocket *)((int)param_1 + 0x18),pTVar2);
            if (cVar1 != '\x01') {
              pTVar2 = (TCPSocket *)CPeer::GetTcpSocket(this);
              uVar3 = TCPSocket::getHandle(pTVar2);
              printf("Accept GameServer Fail(Port : %d)\n",uVar3);
            }
            pTVar2 = (TCPSocket *)CPeer::GetTcpSocket(this);
            uVar3 = TCPSocket::getHandle(pTVar2);
            printf("Accept GameServer(Port : %d)\n",uVar3);
            pCVar4 = (CMutex *)
                     CTcpNetSystem::Get_TcpRecvBLock(*(CTcpNetSystem **)((int)param_1 + 0xc));
            pCVar5 = (CMutex *)
                     CTcpNetSystem::Get_TcpRecvQLock(*(CTcpNetSystem **)((int)param_1 + 0xc));
            this_00 = (CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                       *)CTcpNetSystem::Get_TcpSwapQPacket(*(CTcpNetSystem **)((int)param_1 + 0xc));
            pqVar6 = (queue *)CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                              ::GetRecvQ(this_00);
            CPeer::InitPeer(this,pqVar6,pCVar5,pCVar4);
            CPeer::ConnSig(this);
            CTcpNetSystem::InsertAcceptedPeer(*(CPeer **)((int)param_1 + 0xc));
          }
        }
      }
      else {
        printf("Tcp Accept Socket Listen Err");
      }
    }
    else {
      printf("Tcp Accept Socket Bind Err");
    }
  }
  else {
    printf("Tcp Accept Socket Open Err");
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpAcceptThread.cpp](source/DNFServer/GameServer/DBMW/DNFTcpAcceptThread.cpp)（约第 44 行）：

```cpp
void CTcpAcceptThread::dispatch(void* param)
{
    if (!m_sock.open())
    {
        printf("Tcp Accept Socket Open Err");
        return;
    }
    if (!m_sock.bind(m_port, true))
    {
        printf("Tcp Accept Socket Bind Err");
        return;
    }
    if (!m_sock.listen(5))
    {
        printf("Tcp Accept Socket Listen Err");
        return;
    }
    m_stop = 1;
    DNFFLib::Sleep_Ext(5, 0);
    try
    {
        while (m_stop)
        {
            if (!m_sock.pollReadEvent())
                continue;
            CPeer* peer = m_net->CreatePeer();
            if (!peer->GetTcpSocket()->accept(m_sock))
                printf("Accept GameServer Fail(Port : %d)\n",
                       peer->GetTcpSocket()->getHandle());
            printf("Accept GameServer(Port : %d)\n",
                   peer->GetTcpSocket()->getHandle());
            peer->InitPeer(m_net->Get_TcpSwapQPacket()->GetRecvQ(),
                           m_net->Get_TcpRecvQLock(), m_net->Get_TcpRecvBLock());
            peer->ConnSig();
            m_net->InsertAcceptedPeer(peer);
        }
    }
    catch (CDNFException& e)
    {
        printf("CTcpNetworkThread::dispatch() Except Break : %s\n", e.what());
        throw CDNFException("CTcpNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
    catch (...)
    {
        puts("CTcpNetworkThread::dispatch() Except Break");
        throw CDNFException("CTcpNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
}
```
