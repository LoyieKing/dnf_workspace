# _ZN13CTcpNetSystem14OpenTcpServiceERiPKct

`CTcpNetSystem::OpenTcpService(int&, char const*, unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8053958` | `0x1b1` | `0x80a2c2a` | `0x1c1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,114 +1,118 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x50,%esp
+sub    $0x64,%esp
 mov    0x14(%ebp),%eax
-mov    %ax,-0x2c(%ebp)
+mov    %ax,-0x3c(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem10CreatePeerEv>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket4openEv>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x9b>
+sete   %al
+test   %al,%al
+je     <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x9c>
 movl   $"tcpSock.open() Fail!",(%esp)
 call   <T> <puts>
 movl   $0x118,0x8(%esp)
 movl   $&_ZZN13CTcpNetSystem14OpenTcpServiceERiPKctE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"tcpSock.open() Fail!",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem10DeletePeerEP5CPeer>
 mov    $0x0,%eax
-jmp    <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x1aa>
-movzwl -0x2c(%ebp),%eax
+jmp    <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x1bb>
+movzwl -0x3c(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket7connectEPKct>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x129>
+sete   %al
+test   %al,%al
+je     <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x12c>
 movl   $"tcpSock.connect Fail!",(%esp)
 call   <T> <puts>
-movzwl -0x2c(%ebp),%ebx
+movzwl -0x3c(%ebp),%ebx
 movl   $0x123,0x8(%esp)
 movl   $&_ZZN13CTcpNetSystem14OpenTcpServiceERiPKctE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"tcpSock.connect(%s, %d) Fail!",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem10DeletePeerEP5CPeer>
 mov    $0x0,%eax
-jmp    <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x1aa>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x1bb>
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket14setOptNonBlockEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvBLockEv>
-mov    %eax,%esi
+mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem16Get_TcpRecvQLockEv>
-mov    %eax,%ebx
+mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE8GetRecvQEv>
-mov    %esi,0xc(%esp)
-mov    %ebx,0x8(%esp)
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer8InitPeerEPSt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEP6CMutexS9_>
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer7ConnSigEv>
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem21SetEpollConnectedPeerEP5CPeer>
-mov    -0xc(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 mov    0xc(%ebp),%edx
 mov    %eax,(%edx)
 mov    $0x1,%eax
-add    $0x50,%esp
+add    $0x64,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::OpenTcpService(int&, char const*, unsigned short) */

undefined4 __thiscall
CTcpNetSystem::_ZN13CTcpNetSystem14OpenTcpServiceERiPKct
          (CTcpNetSystem *this,int *param_1,char *param_2,ushort param_3)

{
  char cVar1;
  undefined4 uVar2;
  CMutex *pCVar3;
  CMutex *pCVar4;
  CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
  *this_00;
  queue *pqVar5;
  int iVar6;
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  CPeer *local_14;
  TCPSocket *local_10;
  
  local_14 = (CPeer *)_ZN13CTcpNetSystem10CreatePeerEv(this);
  local_10 = (TCPSocket *)CPeer::GetTcpSocket(local_14);
  cVar1 = TCPSocket::open(local_10);
  if (cVar1 == '\x01') {
    cVar1 = TCPSocket::connect(local_10,param_2,param_3);
    if (cVar1 == '\x01') {
      TCPSocket::setOptNonBlock(local_10);
      pCVar3 = (CMutex *)Get_TcpRecvBLock(this);
      pCVar4 = (CMutex *)Get_TcpRecvQLock(this);
      this_00 = (CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                 *)Get_TcpSwapQPacket(this);
      pqVar5 = (queue *)CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                        ::GetRecvQ(this_00);
      CPeer::InitPeer(local_14,pqVar5,pCVar4,pCVar3);
      CPeer::ConnSig(local_14);
      SetEpollConnectedPeer(this,local_14);
      iVar6 = TCPSocket::getHandle(local_10);
      *param_1 = iVar6;
      uVar2 = 1;
    }
    else {
      puts("tcpSock.connect Fail!");
      CMyFileLog::CMyFileLog(local_1c,"OpenTcpService",0x123);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_1c,"./log/TcpServer","tcpSock.connect(%s, %d) Fail!",param_2,(uint)param_3);
      _ZN13CTcpNetSystem10DeletePeerEP5CPeer(this,local_14);
      uVar2 = 0;
    }
  }
  else {
    puts("tcpSock.open() Fail!");
    CMyFileLog::CMyFileLog(local_24,"OpenTcpService",0x118);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_24,"./log/TcpServer","tcpSock.open() Fail!");
    _ZN13CTcpNetSystem10DeletePeerEP5CPeer(this,local_14);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp](source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp)（约第 185 行）：

```cpp
bool CTcpNetSystem::OpenTcpService(int& sockRef, const char* ip, unsigned short port)
{
    CPeer* peer = CreatePeer();
    TCPSocket* sock = peer->GetTcpSocket();
    if (!sock->open())
    {
        puts("tcpSock.open() Fail!");
        DNF_LOG_SCOPE_LINE(0x118, "./log/TcpServer", "tcpSock.open() Fail!");
        DeletePeer(peer);
        return 0;
    }
    if (!sock->connect(ip, port))
    {
        puts("tcpSock.connect Fail!");
        DNF_LOG_SCOPE_LINE(0x123, "./log/TcpServer", "tcpSock.connect(%s, %d) Fail!", ip, (unsigned int)port);
        DeletePeer(peer);
        return 0;
    }
    sock->setOptNonBlock();
    CMutex* b = Get_TcpRecvBLock();
    CMutex* q = Get_TcpRecvQLock();
    void* recvQ = Get_TcpSwapQPacket()->GetRecvQ();
    peer->InitPeer((std::queue<CTcpRecvBuffer*>*)recvQ, q, b);
    peer->ConnSig();
    SetEpollConnectedPeer(peer);
    sockRef = sock->getHandle();
    return 1;
}
```
