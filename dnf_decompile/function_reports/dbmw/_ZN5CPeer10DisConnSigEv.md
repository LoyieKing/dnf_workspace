# _ZN5CPeer10DisConnSigEv

`CPeer::DisConnSig()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x805a8c0` | `0xea` | `0x80ec07e` | `0xea` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,71 +1,71 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
-lea    -0x12(%ebp),%eax
+lea    -0x16(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_InnerPakcet_LogoutC1Ev>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x182c(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 movl   $0x1804,(%esp)
 call   <T> <_ZN14CTcpRecvBuffernwEj>
-mov    %eax,-0x18(%ebp)
-lea    -0x1c(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
-movzwl -0x10(%ebp),%eax
+movzwl -0x14(%ebp),%eax
 movzwl %ax,%edx
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %edx,0x8(%esp)
-lea    -0x12(%ebp),%edx
+lea    -0x16(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 mov    0x1830(%eax),%eax
 mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    0x8(%ebp),%eax
 mov    0x1828(%eax),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
 jmp    <T> <_ZN5CPeer10DisConnSigEv+0xd8>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x20(%ebp),%eax
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPeer::DisConnSig() */

void __thiscall CPeer::_ZN5CPeer10DisConnSigEv(CPeer *this)

{
  CMutex *pCVar1;
  CGuard<CMutex> local_24 [4];
  CGuard<CMutex> local_20 [4];
  CTcpRecvBuffer *local_1c;
  Packet_InnerPakcet_Logout local_16 [2];
  ushort local_14;
  undefined4 local_10;
  
  Packet_InnerPakcet_Logout::Packet_InnerPakcet_Logout(local_16);
  local_10 = TCPSocket::getHandle((TCPSocket *)this);
  pCVar1 = *(CMutex **)(this + 0x182c);
  CGuard<CMutex>::CGuard(local_20,pCVar1);
                    /* try { // try from 0805a900 to 0805a904 has its CatchHandler @ 0805a962 */
  local_1c = CTcpRecvBuffer::operator_new((CTcpRecvBuffer *)0x1804,(uint)pCVar1);
  CGuard<CMutex>::~CGuard(local_20);
  memcpy(local_1c,local_16,(uint)local_14);
  CGuard<CMutex>::CGuard(local_24,*(CMutex **)(this + 0x1830));
                    /* try { // try from 0805a95b to 0805a95f has its CatchHandler @ 0805a97d */
  std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>::push
            (*(queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>> **
              )(this + 0x1828),&local_1c);
  CGuard<CMutex>::~CGuard(local_24);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/Peer.cpp](source/DNFServer/GameServer/DBMW/Peer.cpp)（约第 105 行）：

```cpp
void CPeer::DisConnSig()
{
    struct PktLocal {
        unsigned short packetId;
        unsigned short packetSize;
        unsigned short reversed1;
    } __attribute__((packed));
    PktLocal pkt;
    _ZN25Packet_InnerPakcet_LogoutC1Ev(&pkt);
    int fd = getHandle();
    CTcpRecvBuffer* buf;
    {
        CGuard<CMutex> guard(m_sendBLock);
        buf = new CTcpRecvBuffer;
    }
    memcpy(buf, &pkt, pkt.packetSize);
    {
        CGuard<CMutex> guard(m_sendQLock);
        m_recvQ->push(buf);
    }
}
```
