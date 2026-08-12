# _ZN17CTcpNetworkThread8dispatchEPv

`CTcpNetworkThread::dispatch(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805a44c` | `0x457` | `0x8084e6a` | `0x456` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,327 +1,329 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 movl   $0x0,-0x28(%ebp)
 movl   $0x0,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 movb   $0x1,0x2c(%eax)
 movl   $0x0,0x4(%esp)
 movl   $0x5,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1d8>
+mov    0x8(%ebp),%eax
+movzbl 0x2c(%eax),%eax
+test   %al,%al
+jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x78>
+movl   $0xae,0x8(%esp)
+movl   $&_ZZN17CTcpNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"RecvThread Terminate",0x8(%esp)
+movl   $"./log/TcpRecv",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x44e>
 call   <T> <__errno_location>
 movl   $0x0,(%eax)
 movl   $0x5,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1d4>
+sete   %al
+test   %al,%al
+jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x32>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem10SendPacketEv>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem12WaitForEventEv>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1d7>
+sete   %al
+test   %al,%al
+jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x32>
 cmpl   $0x0,-0x24(%ebp)
-jns    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0xbc>
+jns    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x105>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0x4,%eax
-je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0xbc>
+je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x105>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x44e>
+je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x105>
+nop
+jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x44e>
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1c1>
+jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x20c>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CTcpHandler11GetEventPtrEi>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x106>
+je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x14f>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CTcpHandler12IsSetInEventEi>
 test   %al,%al
-je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x106>
+je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x14f>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x10b>
+jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x154>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x148>
+je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x193>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer10RecvPacketEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x148>
+test   %eax,%eax
+setle  %al
+test   %al,%al
+je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x193>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer10DisConnSigEv>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem10DeletePeerEP5CPeer>
 movl   $0x0,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x17d>
+je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1c8>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer18get_remain_sendlenEv>
 test   %eax,%eax
-je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x17d>
+je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1c8>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CTcpHandler13IsSetOutEventEi>
 test   %al,%al
-je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x17d>
+je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1c8>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x182>
+jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1cd>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1a8>
+je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1f3>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer18get_remain_sendlenEv>
 cmp    $0x1800,%eax
-seta   %al
-test   %al,%al
-jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1a8>
+setbe  %al
+test   %al,%al
+je     <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1f3>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer11send_packetEv>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CTcpHandler13IsSetErrEventEi>
 addl   $0x1,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 cmp    -0x24(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0xc8>
-jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1d8>
-nop
-jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x1d8>
-nop
-mov    0x8(%ebp),%eax
-movzbl 0x2c(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x37>
-movl   $0xae,0x8(%esp)
-movl   $&_ZZN17CTcpNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"RecvThread Terminate",0x8(%esp)
-movl   $"./log/TcpRecv",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x44f>
+jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x111>
+jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x32>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
 jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x34b>
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
 movl   $"CTcpNetworkThread::dispatch() 예외 발생 : %s\n",(%esp)
 call   <T> <printf>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"CTcpNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
+movl   $"CTcpNetworkThread::dispatch() 예외 발생!",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x2db>
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
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x2d5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x2fa>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x2fa>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x30f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x2fa>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x336>
 lea    -0x31(%ebp),%eax
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
 movl   $"CTcpNetworkThread::dispatch() 예외 발생",(%esp)
 call   <T> <puts>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"CTcpNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
+movl   $"CTcpNetworkThread::dispatch() 예외 발생!",0x4(%esp)
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
 jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x3de>
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
 jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x3d8>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x3fd>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x3fd>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x412>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x3fd>
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
 jmp    <T> <_ZN17CTcpNetworkThread8dispatchEPv+0x439>
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
-nop
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetworkThread::dispatch(void*) */

void CTcpNetworkThread::_ZN17CTcpNetworkThread8dispatchEPv(void *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  CMyFileLog local_44 [24];
  CPeer *local_2c;
  int local_28;
  int local_24;
  
  local_2c = (CPeer *)0x0;
  local_28 = 0;
  *(undefined1 *)((int)param_1 + 0x2c) = 1;
                    /* try { // try from 0805a479 to 0805a668 has its CatchHandler @ 0805a66e */
  DNFFLib::Sleep_Ext(5,0);
  while( true ) {
    do {
      do {
        if (*(char *)((int)param_1 + 0x2c) == '\0') {
          CMyFileLog::CMyFileLog(local_44,"dispatch",0xae);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_44,"./log/TcpRecv","RecvThread Terminate");
          return;
        }
        piVar3 = __errno_location();
        *piVar3 = 0;
        DNFFLib::Sleep_Ext(0,5);
      } while (*(int *)((int)param_1 + 0xc) == 0);
      CTcpNetSystem::_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv
                (*(CTcpNetSystem **)((int)param_1 + 0xc));
      CTcpNetSystem::_ZN13CTcpNetSystem10SendPacketEv(*(CTcpNetSystem **)((int)param_1 + 0xc));
      local_28 = CTcpNetSystem::WaitForEvent(*(CTcpNetSystem **)((int)param_1 + 0xc));
    } while (local_28 == 0);
    if (((local_28 < 0) && (piVar3 = __errno_location(), *piVar3 != 4)) &&
       (piVar3 = __errno_location(), *piVar3 != 0)) break;
    for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
      local_2c = (CPeer *)CTcpHandler::_ZN11CTcpHandler11GetEventPtrEi
                                    (*(CTcpHandler **)((int)param_1 + 0x14),local_24);
      if ((local_2c == (CPeer *)0x0) ||
         (cVar2 = CTcpHandler::_ZN11CTcpHandler12IsSetInEventEi
                            (*(CTcpHandler **)((int)param_1 + 0x14),local_24), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (cVar2 = CPeer::RecvPacket(local_2c), cVar2 != '\x01')) {
        CPeer::DisConnSig(local_2c);
        CTcpNetSystem::_ZN13CTcpNetSystem10DeletePeerEP5CPeer
                  (*(CTcpNetSystem **)((int)param_1 + 0xc),local_2c);
        local_2c = (CPeer *)0x0;
      }
      if (((local_2c == (CPeer *)0x0) || (iVar4 = CPeer::get_remain_sendlen(local_2c), iVar4 == 0))
         || (cVar2 = CTcpHandler::_ZN11CTcpHandler13IsSetOutEventEi
                               (*(CTcpHandler **)((int)param_1 + 0x14),local_24), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (uVar5 = CPeer::get_remain_sendlen(local_2c), uVar5 < 0x1801)) {
        CPeer::send_packet(local_2c);
      }
      CTcpHandler::_ZN11CTcpHandler13IsSetErrEventEi
                (*(CTcpHandler **)((int)param_1 + 0x14),local_24);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFTcpNetworkThread.cpp](source/DNFServer/GameServer/Monitor/DNFTcpNetworkThread.cpp)（约第 72 行）：

```cpp
void CTcpNetworkThread::dispatch(void* param)
{
    CPeer* peer = 0;
    int eventCount = 0;
    m_runningFlag = 1;
    try
    {
        DNFFLib::Sleep_Ext(5, 0);
        while (true)
        {
            do
            {
                do
                {
                    if (m_runningFlag == 0)
                    {
                        DNF_LOG_SCOPE_LINE(0xae, "./log/TcpRecv", "RecvThread Terminate");
                        return;
                    }
                    errno = 0;
                    DNFFLib::Sleep_Ext(0, 5);
                } while (m_net == 0);
                m_net->SetEpollAcceptedPeers();
                m_net->SendPacket();
                eventCount = m_net->WaitForEvent();
            } while (eventCount == 0);
            if ((eventCount < 0 && errno != EINTR) && errno != 0)
            {
                break;
            }
            for (int i = 0; i < eventCount; i++)
            {
                peer = (CPeer*)((CTcpHandler*)m_handler)->GetEventPtr(i);
                if (peer != 0 && ((CTcpHandler*)m_handler)->IsSetInEvent(i))
                {
                    if (peer->RecvPacket() < 1)
                    {
                        peer->DisConnSig();
                        m_net->DeletePeer(peer);
                        peer = 0;
                    }
                }
                if (peer != 0 && peer->get_remain_sendlen() != 0 &&
                    ((CTcpHandler*)m_handler)->IsSetOutEvent(i))
                {
                    if (peer->get_remain_sendlen() < 0x1801)
                    {
                        peer->send_packet();
                    }
                }
                ((CTcpHandler*)m_handler)->IsSetErrEvent(i);
            }
        }
    }
    catch (CDNFException& e)
    {
        printf("CTcpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
        throw CDNFException("CTcpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd!");
    }
    catch (...)
    {
        puts("CTcpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd");
        throw CDNFException("CTcpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd!");
    }
}
```
