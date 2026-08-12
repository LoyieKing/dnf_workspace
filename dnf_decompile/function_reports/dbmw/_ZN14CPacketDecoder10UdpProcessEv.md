# _ZN14CPacketDecoder10UdpProcessEv

`CPacketDecoder::UdpProcess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80917d0` | `0x32e` | `0x80cda78` | `0x331` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,242 +1,244 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x20>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xec>
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketDecoder is Not Ready!\n",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x34(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x97>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x91>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xae>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xae>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xc9>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xae>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x30e>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x311>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE5frontEv>
 mov    (%eax),%eax
 mov    %eax,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE3popEv>
 cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x30e>
+je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x310>
 mov    -0x24(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
 mov    %eax,-0x1c(%ebp)
 call   <T> <_Z23CAppLoadCheckerInstancev>
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15CAppLoadChecker13CheckUdpRecvQEi>
 test   %al,%al
 je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x175>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%ebx
 call   <T> <_Z23CAppLoadCheckerInstancev>
 mov    -0x1c(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0x2,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15CAppLoadChecker9RequestDBEP14CServerHandlerii>
 mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2c6>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x1cf>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    -0x20(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %eax,0x8(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",(%esp)
 call   <T> <printf>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketDecoder::MsgDecode() Undefined Packet Arrive Exception Break!",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x2c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x271>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x26b>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x288>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x288>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2a3>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x288>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x303>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x311>
+nop
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xf8>
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketDecoder::UdpProcess() */

void __thiscall CPacketDecoder::_ZN14CPacketDecoder10UdpProcessEv(CPacketDecoder *this)

{
  CServerHandler *pCVar1;
  char cVar2;
  CDNFException *pCVar3;
  int *piVar4;
  CAppLoadChecker *pCVar5;
  CMutex *pCVar6;
  CGuard<CMutex> local_40 [4];
  CGuard<CMutex> local_3c [4];
  string local_38 [7];
  allocator local_31;
  string local_30 [7];
  allocator local_29;
  CUdpRecvBuffer *local_28;
  CUdpRecvBuffer *local_24;
  int local_20;
  
  if ((*(int *)this != 0) && (*(int *)(this + 4) != 0)) {
    local_28 = (CUdpRecvBuffer *)0x0;
    while( true ) {
      do {
        cVar2 = std::
                queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::
                empty(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                        **)this);
        if (cVar2 == '\x01') {
          return;
        }
        piVar4 = (int *)std::
                        queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                        ::front();
        local_28 = (CUdpRecvBuffer *)*piVar4;
        std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::pop
                  (*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                     **)this);
      } while (local_28 == (CUdpRecvBuffer *)0x0);
      local_24 = local_28;
      local_20 = std::
                 queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                 ::size(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                          **)this);
      pCVar5 = (CAppLoadChecker *)CAppLoadCheckerInstance();
      cVar2 = CAppLoadChecker::CheckUdpRecvQ(pCVar5,local_20);
      if (cVar2 != '\0') {
        pCVar1 = *(CServerHandler **)(this + 0x18);
        pCVar5 = (CAppLoadChecker *)CAppLoadCheckerInstance();
        CAppLoadChecker::RequestDB(pCVar5,pCVar1,2,local_20);
      }
      cVar2 = MsgDecode(this,(PacketHeader *)local_24);
      if (cVar2 != '\x01') break;
      pCVar6 = *(CMutex **)(this + 8);
      CGuard<CMutex>::CGuard(local_40,pCVar6);
                    /* try { // try from 08091ab1 to 08091ab5 has its CatchHandler @ 08091ab8 */
      CUdpRecvBuffer::operator_delete(local_28,pCVar6);
      CGuard<CMutex>::~CGuard(local_40);
    }
    pCVar6 = *(CMutex **)(this + 8);
    CGuard<CMutex>::CGuard(local_3c,pCVar6);
                    /* try { // try from 0809197d to 08091981 has its CatchHandler @ 08091984 */
    CUdpRecvBuffer::operator_delete(local_28,pCVar6);
    CGuard<CMutex>::~CGuard(local_3c);
    printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",local_24,
           (uint)*(ushort *)local_24);
    std::allocator<char>::allocator();
                    /* try { // try from 080919ea to 080919ee has its CatchHandler @ 08091a58 */
    std::string::string(local_30,
                        "CPacketDecoder::MsgDecode() Undefined Packet Arrive Exception Break!",
                        &local_29);
    pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08091a09 to 08091a0d has its CatchHandler @ 08091a10 */
    CDNFException::CDNFException(pCVar3,local_30);
                    /* try { // try from 08091a47 to 08091a4b has its CatchHandler @ 08091a4e */
    std::string::~string(local_30);
    std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08091810 to 08091814 has its CatchHandler @ 0809187e */
  std::string::string(local_38,"CPacketDecoder is Not Ready!\n",&local_31);
  pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809182f to 08091833 has its CatchHandler @ 08091836 */
  CDNFException::CDNFException(pCVar3,local_38);
                    /* try { // try from 0809186d to 08091871 has its CatchHandler @ 08091874 */
  std::string::~string(local_38);
  std::allocator<char>::~allocator((allocator<char> *)&local_31);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketDecoder.cpp](source/DNFServer/GameServer/DBMW/DNFPacketDecoder.cpp)（约第 206 行）：

```cpp
void CPacketDecoder::UdpProcess()
{
    if (!m_udpQueue || !m_udpQLock)
        throw CDNFException("CPacketDecoder is Not Ready!\n");
    CUdpRecvBuffer* buf = 0;
    while (!m_udpQueue->empty())
    {
        buf = m_udpQueue->front();
        m_udpQueue->pop();
        if (!buf)
            continue;
        PacketHeader* p = (PacketHeader*)buf;
        int size = m_udpQueue->size();
        if (CAppLoadCheckerInstance()->CheckUdpRecvQ(size))
        {
            CAppLoadCheckerInstance()->RequestDB(m_serverHandler, 2, size);
        }
        if (!MsgDecode(p))
        {
            {
                CGuard<CMutex> guard(m_udpBLock);
                delete buf;
            }
            printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",
                   p, p->packetId);
            throw CDNFException(
                "CPacketDecoder::MsgDecode() Undefined Packet Arrive Exception Break!");
        }
        {
            CGuard<CMutex> guard(m_udpBLock);
            delete buf;
        }
    }
}
```
