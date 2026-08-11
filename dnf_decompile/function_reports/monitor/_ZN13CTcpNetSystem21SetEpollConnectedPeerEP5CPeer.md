# _ZN13CTcpNetSystem21SetEpollConnectedPeerEP5CPeer

`CTcpNetSystem::SetEpollConnectedPeer(CPeer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8053b0a` | `0x136` | `0x80a2f64` | `0x122` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,91 +1,85 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x40,%esp
+sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 add    $0x78,%eax
 mov    %eax,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-movl   $0x0,-0xc(%ebp)
+movl   $0x0,-0x10(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
-mov    0xc(%ebp),%ecx
-mov    0x8(%ebp),%edx
-mov    (%edx),%edx
+mov    %eax,-0xc(%ebp)
+mov    0xc(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
 movl   $0x0,0xc(%esp)
-mov    %eax,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %edx,(%esp)
+mov    -0xc(%ebp),%ecx
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZN11CTcpHandler7SetPeerEPvib>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN13CTcpNetSystem21SetEpollConnectedPeerEP5CPeer+0xa0>
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN13CTcpNetSystem21SetEpollConnectedPeerEP5CPeer+0xa1>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 mov    %ebx,0xc(%esp)
-mov    -0xc(%ebp),%edx
+mov    -0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"G_EpollHandler()->SetPeer(peer->get_socket(%d)) %d(%s)",(%esp)
 call   <T> <printf>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x28(%ebp)
+lea    0xc(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
-lea    0xc(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    -0x10(%ebp),%edx
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIiRP5CPeerESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
-sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjP5CPeerEC1IiS2_EEOS_IT_T0_E>
+call   <T> <_ZNSt4pairIKjP5CPeerEC1IRiRS2_EEOT_OT0_>
 mov    0x8(%ebp),%eax
 lea    0x144(%eax),%ecx
-lea    -0x28(%ebp),%eax
-lea    -0x20(%ebp),%edx
+lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CPeerSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::SetEpollConnectedPeer(CPeer*) */

void __thiscall
CTcpNetSystem::_ZN13CTcpNetSystem21SetEpollConnectedPeerEP5CPeer(CTcpNetSystem *this,CPeer *param_1)

{
  TCPSocket *pTVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  CGuard<CMutex> local_30 [4];
  pair local_2c [8];
  pair<unsigned_int_const,CPeer*> local_24 [8];
  int local_1c [2];
  CPeer *local_14;
  int local_10;
  
  CGuard<CMutex>::CGuard(local_30,(CMutex *)(this + 0x78));
  local_10 = 0;
  pTVar1 = (TCPSocket *)CPeer::GetTcpSocket(param_1);
                    /* try { // try from 08053b3c to 08053c0c has its CatchHandler @ 08053c25 */
  iVar2 = TCPSocket::getHandle(pTVar1);
  local_10 = CTcpHandler::_ZN11CTcpHandler7SetPeerEPvib(*(CTcpHandler **)this,param_1,iVar2,false);
  if (local_10 != 0) {
    pcVar3 = strerror(local_10);
    pTVar1 = (TCPSocket *)CPeer::GetTcpSocket(param_1);
    uVar4 = TCPSocket::getHandle(pTVar1);
    printf("G_EpollHandler()->SetPeer(peer->get_socket(%d)) %d(%s)",uVar4,local_10,pcVar3);
  }
  pTVar1 = (TCPSocket *)CPeer::GetTcpSocket(param_1);
  local_14 = (CPeer *)TCPSocket::getHandle(pTVar1);
  std::make_pair<int,CPeer*&>(local_1c,&local_14);
  std::pair<unsigned_int_const,CPeer*>::pair<int,CPeer*>(local_24,(pair *)local_1c);
  std::
  map<unsigned_int,CPeer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CPeer*>>>
  ::insert(local_2c);
  CGuard<CMutex>::~CGuard(local_30);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp](source/DNFServer/GameServer/Monitor/TcpNetSystem.cpp)（约第 400 行）：

```cpp
void CTcpNetSystem::SetEpollConnectedPeer(CPeer* peer)
{
    {
        CGuard<CMutex> guard(&m_mutex78);
        int rc = 0;
        int fd = peer->GetTcpSocket()->getHandle();
        rc = m_handler->SetPeer(peer, fd, false);
        if (rc != 0)
        {
            printf("G_EpollHandler()->SetPeer(peer->get_socket(%d)) %d(%s)",
                   peer->GetTcpSocket()->getHandle(), rc, strerror(rc));
        }
        int key = peer->GetTcpSocket()->getHandle();
        m_peers.insert(std::pair<const unsigned int, CPeer*>(key, peer));
    }
}
```
