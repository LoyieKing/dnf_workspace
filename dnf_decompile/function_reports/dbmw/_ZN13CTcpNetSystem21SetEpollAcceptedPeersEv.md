# _ZN13CTcpNetSystem21SetEpollAcceptedPeersEv

`CTcpNetSystem::SetEpollAcceptedPeers()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x805bd5c` | `0x19c` | `0x80f5498` | `0x171` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,117 +1,107 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 add    $0x60,%eax
 mov    %eax,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    0x8(%ebp),%eax
-add    $0x11c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt5queueIP5CPeerSt5dequeIS1_SaIS1_EEE5emptyEv>
-test   %al,%al
-jne    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x187>
-movl   $0x0,-0x30(%ebp)
-jmp    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x14f>
+jmp    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x124>
 mov    0x8(%ebp),%eax
 add    $0x11c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP5CPeerSt5dequeIS1_SaIS1_EEE5frontEv>
 mov    (%eax),%eax
-mov    %eax,-0x30(%ebp)
-movl   $0x0,-0xc(%ebp)
-mov    -0x30(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
-mov    -0x30(%ebp),%ecx
+mov    -0x2c(%ebp),%ecx
 mov    0x8(%ebp),%edx
 mov    (%edx),%edx
 movl   $0x0,0xc(%esp)
 mov    %eax,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN11CTcpHandler7SetPeerEPvib>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0xd9>
+je     <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0xae>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
-mov    -0x30(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 mov    %ebx,0xc(%esp)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"G_EpollHandler()->SetPeer(peer->get_socket(%d)) %d(%s)",(%esp)
 call   <T> <printf>
-mov    -0x30(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
-mov    %eax,-0x10(%ebp)
-lea    -0x18(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+lea    -0x14(%ebp),%eax
+lea    -0x2c(%ebp),%edx
+mov    %edx,0x8(%esp)
 lea    -0x30(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIiRP5CPeerESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
+call   <T> <_ZSt9make_pairIRiRP5CPeerESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjP5CPeerEC1IiS2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x144(%eax),%ecx
-lea    -0x28(%ebp),%eax
-lea    -0x20(%ebp),%edx
+lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0x11c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP5CPeerSt5dequeIS1_SaIS1_EEE3popEv>
 mov    0x8(%ebp),%eax
 add    $0x11c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP5CPeerSt5dequeIS1_SaIS1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x41>
-jmp    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x187>
+jne    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x22>
+jmp    <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv+0x15c>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::SetEpollAcceptedPeers() */

void __thiscall CTcpNetSystem::_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv(CTcpNetSystem *this)

{
  CPeer *this_00;
  char cVar1;
  undefined4 *puVar2;
  TCPSocket *pTVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  CGuard<CMutex> local_30 [4];
  pair local_2c [8];
  pair<unsigned_int_const,CPeer*> local_24 [8];
  int local_1c [2];
  CPeer *local_14;
  int local_10;
  
  CGuard<CMutex>::CGuard(local_30,(CMutex *)(this + 0x60));
                    /* try { // try from 0805bd84 to 0805beba has its CatchHandler @ 0805bec8 */
  cVar1 = std::queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>>::empty
                    ((queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>> *)(this + 0x11c));
  if (cVar1 == '\0') {
    while (cVar1 = std::queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>>::empty
                             ((queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>> *)
                              (this + 0x11c)), cVar1 != '\x01') {
      puVar2 = (undefined4 *)std::queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>>::front();
      this_00 = (CPeer *)*puVar2;
      local_10 = 0;
      pTVar3 = (TCPSocket *)CPeer::GetTcpSocket(this_00);
      iVar4 = TCPSocket::getHandle(pTVar3);
      local_10 = CTcpHandler::_ZN11CTcpHandler7SetPeerEPvib
                           (*(CTcpHandler **)this,this_00,iVar4,false);
      if (local_10 != 0) {
        pcVar5 = strerror(local_10);
        pTVar3 = (TCPSocket *)CPeer::GetTcpSocket(this_00);
        uVar6 = TCPSocket::getHandle(pTVar3);
        printf("G_EpollHandler()->SetPeer(peer->get_socket(%d)) %d(%s)",uVar6,local_10,pcVar5);
      }
      pTVar3 = (TCPSocket *)CPeer::GetTcpSocket(this_00);
      local_14 = (CPeer *)TCPSocket::getHandle(pTVar3);
      std::make_pair<int,CPeer*&>(local_1c,&local_14);
      std::pair<unsigned_int_const,CPeer*>::pair<int,CPeer*>(local_24,(pair *)local_1c);
      std::
      map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
      ::insert(local_2c);
      std::queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>>::pop
                ((queue<CPeer*,std::deque<CPeer*,std::allocator<CPeer*>>> *)(this + 0x11c));
    }
  }
  CGuard<CMutex>::~CGuard(local_30);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/TcpNetSystem.cpp](source/DNFServer/GameServer/DBMW/TcpNetSystem.cpp)（约第 139 行）：

```cpp
void CTcpNetSystem::SetEpollAcceptedPeers()
{
    CGuard<CMutex> guard(&m_mutex60);
    while (!m_peerQueue.empty())
    {
        CPeer* peer = m_peerQueue.front();
        int ret = m_tcpHandler->SetPeer(peer, peer->GetTcpSocket()->getHandle(), false);
        if (ret != 0)
        {
            printf("G_EpollHandler()->SetPeer(peer->get_socket(%d)) %d(%s)",
                   peer->GetTcpSocket()->getHandle(), ret, strerror(ret));
        }
        int fd = peer->GetTcpSocket()->getHandle();
        m_peerMap.insert(std::make_pair(fd, peer));
        m_peerQueue.pop();
    }
}
```
