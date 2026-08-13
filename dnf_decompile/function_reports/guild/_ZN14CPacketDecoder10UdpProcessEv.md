# _ZN14CPacketDecoder10UdpProcessEv

`CPacketDecoder::UdpProcess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807013c` | `0x32e` | `0x806690a` | `0x338` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,242 +1,248 @@
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
-lea    -0x2d(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x2d(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketDecoder is Not Ready!\n",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x34(%ebp),%esi
+lea    -0x40(%ebp),%esi
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
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x91>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xae>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xae>
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xc9>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0xae>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2d(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x2d(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x30e>
+movl   $0x0,-0x30(%ebp)
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x318>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE5frontEv>
 mov    (%eax),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE3popEv>
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x30e>
-mov    -0x24(%ebp),%eax
+cmpl   $0x0,-0x30(%ebp)
+je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x317>
+mov    -0x30(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
+mov    %eax,-0x28(%ebp)
+call   <T> <_Z23CAppLoadCheckerInstancev>
+mov    -0x28(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN15CAppLoadChecker13CheckUdpRecvQEi>
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x180>
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
 mov    %eax,-0x20(%ebp)
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
-mov    %eax,-0x1c(%ebp)
 call   <T> <_Z23CAppLoadCheckerInstancev>
-mov    -0x1c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN15CAppLoadChecker13CheckUdpRecvQEi>
-test   %al,%al
-je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x175>
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%ebx
-call   <T> <_Z23CAppLoadCheckerInstancev>
-mov    -0x1c(%ebp),%edx
+mov    -0x28(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0x2,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15CAppLoadChecker9RequestDBEP14CServerHandlerii>
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2c6>
+je     <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2c7>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,0x4(%esp)
-lea    -0x38(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x24(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x1cf>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %eax,0x8(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",(%esp)
 call   <T> <printf>
-lea    -0x25(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x25(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x2c(%ebp),%esi
+lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x271>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x25d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x26b>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x288>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x288>
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2a3>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x288>
-call   <T> <_ZSt9terminatev>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x25(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x25(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x257>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x274>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x274>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x289>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x274>
+call   <T> <_ZSt9terminatev>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x2ac>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x24(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x303>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x30a>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x3c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CPacketDecoder10UdpProcessEv+0x318>
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
                    /* try { // try from 0807041d to 08070421 has its CatchHandler @ 08070424 */
      CUdpRecvBuffer::operator_delete(local_28,pCVar6);
      CGuard<CMutex>::~CGuard(local_40);
    }
    pCVar6 = *(CMutex **)(this + 8);
    CGuard<CMutex>::CGuard(local_3c,pCVar6);
                    /* try { // try from 080702e9 to 080702ed has its CatchHandler @ 080702f0 */
    CUdpRecvBuffer::operator_delete(local_28,pCVar6);
    CGuard<CMutex>::~CGuard(local_3c);
    printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",local_24,
           (uint)*(ushort *)local_24);
    std::allocator<char>::allocator();
                    /* try { // try from 08070356 to 0807035a has its CatchHandler @ 080703c4 */
    std::string::string(local_30,
                        "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!",
                        &local_29);
    pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08070375 to 08070379 has its CatchHandler @ 0807037c */
    CDNFException::CDNFException(pCVar3,local_30);
                    /* try { // try from 080703b3 to 080703b7 has its CatchHandler @ 080703ba */
    std::string::~string(local_30);
    std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0807017c to 08070180 has its CatchHandler @ 080701ea */
  std::string::string(local_38,"CPacketDecoder is Not Ready!\n",&local_31);
  pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807019b to 0807019f has its CatchHandler @ 080701a2 */
  CDNFException::CDNFException(pCVar3,local_38);
                    /* try { // try from 080701d9 to 080701dd has its CatchHandler @ 080701e0 */
  std::string::~string(local_38);
  std::allocator<char>::~allocator((allocator<char> *)&local_31);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketDecoder.cpp](source/DNFServer/GameServer/Guild/DNFPacketDecoder.cpp)（约第 231 行）：

```cpp
void CPacketDecoder::UdpProcess()
{
    if (m_udpParseQ == 0 || m_udpQLock == 0)
    {
        throw CDNFException("CPacketDecoder is Not Ready!\n");
    }
    CUdpRecvBuffer* buf = 0;
    while (!((std::queue<CUdpRecvBuffer*>*)m_udpParseQ)->empty())
    {
        buf = ((std::queue<CUdpRecvBuffer*>*)m_udpParseQ)->front();
        ((std::queue<CUdpRecvBuffer*>*)m_udpParseQ)->pop();
        if (buf == 0)
        {
            continue;
        }
        CUdpRecvBuffer* pkt = buf;
        int qsize = (int)((std::queue<CUdpRecvBuffer*>*)m_udpParseQ)->size();
        if (CAppLoadCheckerInstance()->CheckUdpRecvQ(qsize) != 0)
        {
            CServerHandler* handler = (CServerHandler*)m_serverHandler;
            CAppLoadCheckerInstance()->RequestDB(handler, 2, qsize);
        }
        if (MsgDecode((PacketHeader*)pkt) != 1)
        {
            CMutex* mtx = (CMutex*)m_udpBLock;
            CGuard<CMutex> g(mtx);
            CUdpRecvBuffer::operator delete(buf);
            printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n", pkt,
                   (unsigned int)*(unsigned short*)pkt);
            throw CDNFException(
                "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!");
        }
        CMutex* mtx = (CMutex*)m_udpBLock;
        CGuard<CMutex> g(mtx);
        CUdpRecvBuffer::operator delete(buf);
    }
}
```
