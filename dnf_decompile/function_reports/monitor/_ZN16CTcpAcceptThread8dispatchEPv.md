# _ZN16CTcpAcceptThread8dispatchEPv

`CTcpAcceptThread::dispatch(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8059e70` | `0x405` | `0x80845b6` | `0x410` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,302 +1,305 @@
-push   %ebp
-mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x3c,%esp
+sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket4openEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2f>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x31>
 movl   $"Tcp Accept Socket Open Err",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3fd>
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x408>
 mov    0x8(%ebp),%eax
 movzwl 0x34(%eax),%eax
 movzwl %ax,%eax
 mov    0x8(%ebp),%edx
 add    $0x18,%edx
 movl   $0x1,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN9TCPSocket4bindEtb>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x6b>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x6f>
 movl   $"Tcp Accept Socket Bind Err",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3fd>
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x408>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket6listenEi>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x99>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x9f>
 movl   $"Tcp Accept Socket Listen Err",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3fd>
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x408>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x8(%eax)
 movl   $0x0,0x4(%esp)
 movl   $0x5,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x1bd>
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x1c8>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket13pollReadEventEv>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x1bc>
+test   %al,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x1c8>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem10CreatePeerEv>
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CPeer12GetTcpSocketEv>
+mov    %eax,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x18(%eax),%edx
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN9TCPSocket6acceptERS_>
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x132>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9TCPSocket9getHandleEv>
+mov    %eax,0x4(%esp)
+movl   $"Accept GameServer Fail(Port : %d)\n",(%esp)
+call   <T> <printf>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9TCPSocket9getHandleEv>
+mov    %eax,0x4(%esp)
+movl   $"Accept GameServer(Port : %d)\n",(%esp)
+call   <T> <printf>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvBLockEv>
+mov    %eax,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvQLockEv>
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
+mov    %eax,(%esp)
+call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE8GetRecvQEv>
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CPeer12GetTcpSocketEv>
-mov    0x8(%ebp),%edx
-add    $0x18,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN9TCPSocket6acceptERS_>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x12a>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CPeer12GetTcpSocketEv>
-mov    %eax,(%esp)
-call   <T> <_ZNK9TCPSocket9getHandleEv>
-mov    %eax,0x4(%esp)
-movl   $"Accept GameServer Fail(Port : %d)\n",(%esp)
-call   <T> <printf>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CPeer12GetTcpSocketEv>
-mov    %eax,(%esp)
-call   <T> <_ZNK9TCPSocket9getHandleEv>
-mov    %eax,0x4(%esp)
-movl   $"Accept GameServer(Port : %d)\n",(%esp)
-call   <T> <printf>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvBLockEv>
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvQLockEv>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
-mov    %eax,(%esp)
-call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE8GetRecvQEv>
-mov    %esi,0xc(%esp)
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer8InitPeerEPSt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEP6CMutexS9_>
-mov    -0x20(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer7ConnSigEv>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    -0x20(%ebp),%edx
+mov    -0x30(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18InsertAcceptedPeerEP5CPeer>
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x1bd>
-nop
 mov    0x8(%ebp),%eax
 movzbl 0x8(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0xb9>
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3fd>
+jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0xbf>
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x408>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2fa>
+jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x305>
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
-lea    -0x29(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x29(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CTcpNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x30(%ebp),%esi
+lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x28a>
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x295>
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
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x284>
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x28f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2a9>
+jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2b4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2a9>
-lea    -0x30(%ebp),%eax
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2b4>
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2be>
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2c9>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2a9>
+jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2b4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x29(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2e5>
-lea    -0x29(%ebp),%eax
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x2f0>
+lea    -0x39(%ebp),%eax
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
-lea    -0x21(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x21(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CTcpNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x28(%ebp),%esi
+lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x38d>
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x398>
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
-lea    -0x28(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x387>
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x392>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3ac>
+jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3b7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3ac>
-lea    -0x28(%ebp),%eax
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3b7>
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3c1>
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3cc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3ac>
+jne    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3b7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x21(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3e8>
-lea    -0x21(%ebp),%eax
+jmp    <T> <_ZN16CTcpAcceptThread8dispatchEPv+0x3f3>
+lea    -0x31(%ebp),%eax
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
-add    $0x3c,%esp
+add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
+push   %ebp
+mov    %esp,%ebp
+sub    $0x18,%esp
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
  
                    /* try { // try from 08059e82 to 0805a029 has its CatchHandler @ 0805a041 */
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
            this = (CPeer *)CTcpNetSystem::_ZN13CTcpNetSystem10CreatePeerEv
                                      (*(CTcpNetSystem **)((int)param_1 + 0xc));
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

定义于 [source/DNFServer/GameServer/Monitor/DNFTcpAcceptThread.cpp](source/DNFServer/GameServer/Monitor/DNFTcpAcceptThread.cpp)（约第 55 行）：

```cpp
void CTcpAcceptThread::dispatch(void* param)
{
    try
    {
        if (!m_sock.open())
        {
            printf("Tcp Accept Socket Open Err");
        }
        else if (!m_sock.bind(m_port, true))
        {
            printf("Tcp Accept Socket Bind Err");
        }
        else if (!m_sock.listen(5))
        {
            printf("Tcp Accept Socket Listen Err");
        }
        else
        {
            m_running = true;
            DNFFLib::Sleep_Ext(5, 0);
            while (m_running)
            {
                if (m_sock.pollReadEvent())
                {
                    CPeer* peer = m_net->CreatePeer();
                    TCPSocket* sock = peer->GetTcpSocket();
                    if (m_sock.accept(*sock) != 1)
                    {
                        printf("Accept GameServer Fail(Port : %d)\n", sock->getHandle());
                    }
                    printf("Accept GameServer(Port : %d)\n", sock->getHandle());
                    CMutex* recvB = m_net->Get_TcpRecvBLock();
                    CMutex* recvQ = m_net->Get_TcpRecvQLock();
                    void* q = m_net->Get_TcpSwapQPacket()->GetRecvQ();
                    peer->InitPeer(
                        (std::queue<CTcpRecvBuffer*>*)q, recvQ, recvB);
                    peer->ConnSig();
                    m_net->InsertAcceptedPeer(peer);
                }
            }
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
