# _ZN14CPacketDecoder7ProcessEv

`CPacketDecoder::Process()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8059930` | `0x2f4` | `0x80544ba` | `0x2f3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,231 +1,230 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN14CPacketDecoder7ProcessEv+0x20>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN14CPacketDecoder7ProcessEv+0xec>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketDecoder is Not Ready!\n",0x4(%esp)
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
 jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x97>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x91>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN14CPacketDecoder7ProcessEv+0xae>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0xae>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0xc9>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN14CPacketDecoder7ProcessEv+0xae>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $0x0,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14CPacketDecoder7ProcessEv+0x158>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
+je     <T> <_ZN14CPacketDecoder7ProcessEv+0x15a>
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE5frontEv>
 mov    (%eax),%eax
 mov    %eax,-0x20(%ebp)
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE3popEv>
-jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x158>
+jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x15a>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN14CPacketDecoder7ProcessEv+0x2ec>
+je     <T> <_ZN14CPacketDecoder7ProcessEv+0x2eb>
 mov    -0x20(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN14CPacketDecoder7ProcessEv+0x2a4>
+je     <T> <_ZN14CPacketDecoder7ProcessEv+0x2a3>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x1cd>
+jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x1cc>
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
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!",0x4(%esp)
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
-jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x24f>
+jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x24e>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x249>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder7ProcessEv+0x266>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x266>
+jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x248>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder7ProcessEv+0x265>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x265>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x281>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN14CPacketDecoder7ProcessEv+0x266>
+jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x280>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN14CPacketDecoder7ProcessEv+0x265>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x2e1>
+jmp    <T> <_ZN14CPacketDecoder7ProcessEv+0x2e0>
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
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketDecoder::Process() */

void __thiscall CPacketDecoder::_ZN14CPacketDecoder7ProcessEv(CPacketDecoder *this)

{
  char cVar1;
  CDNFException *pCVar2;
  undefined4 *puVar3;
  CMutex *pCVar4;
  CGuard<CMutex> local_40 [4];
  CGuard<CMutex> local_3c [4];
  CGuard<CMutex> local_38 [4];
  string local_34 [7];
  allocator local_2d;
  string local_2c [7];
  allocator local_25;
  PacketHeader *local_24;
  PacketHeader *local_20;
  
  if ((*(int *)this != 0) && (*(int *)(this + 4) != 0)) {
    local_24 = (PacketHeader *)0x0;
    CGuard<CMutex>::CGuard(local_38,*(CMutex **)(this + 4));
                    /* try { // try from 08059a40 to 08059a6a has its CatchHandler @ 08059a6d */
    cVar1 = std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
            ::empty(*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                      **)this);
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)
               std::
               queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::
               front();
      local_24 = (PacketHeader *)*puVar3;
      std::queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>::pop
                (*(queue<CUdpRecvBuffer*,std::deque<CUdpRecvBuffer*,std::allocator<CUdpRecvBuffer*>>>
                   **)this);
    }
    CGuard<CMutex>::~CGuard(local_38);
    if (local_24 != (PacketHeader *)0x0) {
      local_20 = local_24;
      cVar1 = MsgDecode(this,local_24);
      if (cVar1 != '\x01') {
        pCVar4 = *(CMutex **)(this + 8);
        CGuard<CMutex>::CGuard(local_3c,pCVar4);
                    /* try { // try from 08059adb to 08059adf has its CatchHandler @ 08059ae2 */
        CUdpRecvBuffer::operator_delete((CUdpRecvBuffer *)local_24,pCVar4);
        CGuard<CMutex>::~CGuard(local_3c);
        std::allocator<char>::allocator();
                    /* try { // try from 08059b28 to 08059b2c has its CatchHandler @ 08059b96 */
        std::string::string(local_2c,
                            "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!",
                            &local_25);
        pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08059b47 to 08059b4b has its CatchHandler @ 08059b4e */
        CDNFException::CDNFException(pCVar2,local_2c);
                    /* try { // try from 08059b85 to 08059b89 has its CatchHandler @ 08059b8c */
        std::string::~string(local_2c);
        std::allocator<char>::~allocator((allocator<char> *)&local_25);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
      pCVar4 = *(CMutex **)(this + 8);
      CGuard<CMutex>::CGuard(local_40,pCVar4);
                    /* try { // try from 08059bef to 08059bf3 has its CatchHandler @ 08059bf6 */
      CUdpRecvBuffer::operator_delete((CUdpRecvBuffer *)local_24,pCVar4);
      CGuard<CMutex>::~CGuard(local_40);
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08059970 to 08059974 has its CatchHandler @ 080599de */
  std::string::string(local_34,"CPacketDecoder is Not Ready!\n",&local_2d);
  pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0805998f to 08059993 has its CatchHandler @ 08059996 */
  CDNFException::CDNFException(pCVar2,local_34);
                    /* try { // try from 080599cd to 080599d1 has its CatchHandler @ 080599d4 */
  std::string::~string(local_34);
  std::allocator<char>::~allocator((allocator<char> *)&local_2d);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketDecoder.cpp](source/DNFServer/GameServer/COServer/DNFPacketDecoder.cpp)（约第 76 行）：

```cpp
void CPacketDecoder::Process(std::queue<CUdpRecvBuffer*>* q, CMutex* lock)
{
    if (q != 0 && lock != 0)
    {
        PacketHeader* pkt = 0;
        {
            CGuard<CMutex> g(lock);
            if (!q->empty())
            {
                pkt = (PacketHeader*)q->front();
                q->pop();
            }
        }
        if (pkt != 0)
        {
            if (MsgDecode(pkt) != 1)
            {
                {
                    CGuard<CMutex> g((CMutex*)m_poolLock);
                    CUdpRecvBuffer::operator delete(pkt);
                }
                throw CDNFException(
                    "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!");
            }
            {
                CGuard<CMutex> g((CMutex*)m_poolLock);
                CUdpRecvBuffer::operator delete(pkt);
            }
        }
        return;
    }
    throw CDNFException("CPacketDecoder is Not Ready!\n");
}
```
