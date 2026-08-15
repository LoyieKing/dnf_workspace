# _ZN3nsl9TCPThread4loopEPv

`nsl::TCPThread::loop(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80afc5c` | `0x64a` | `0x80ae4c2` | `0x64a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,390 +1,390 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xc0,%esp
 movl   $"Start up TCPThread",(%esp)
 call   <T> <puts>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Start up TCPThread",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
 mov    %eax,-0x54(%ebp)
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x74,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Reactor10getReactorEv>
 mov    %eax,-0x50(%ebp)
 movl   $0x1770,0x4(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE4initEi>
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE7startupEv>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads16getTCPSendThreadEv>
 mov    %eax,-0x4c(%ebp)
 movl   $0x12,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x66(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
+lea    -0x66(%ebp),%eax
 movl   $0xffffffff,0x4(%esp)
-lea    -0x66(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13PACKET_HEADER11setCategoryEi>
-movl   $0x0,0x4(%esp)
-lea    -0x66(%ebp),%eax
+lea    -0x66(%ebp),%eax
+movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13PACKET_HEADER11setPacketIDEi>
+lea    -0x66(%ebp),%eax
 movl   $0x12,0x4(%esp)
-lea    -0x66(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13PACKET_HEADER7setSizeEi>
 lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN3nsl7TCPUserEEEC1Ev>
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN3nsl7TCPUserEEEC1Ev>
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN3nsl7TCPUserEEEC1Ev>
 movl   $0x7530,-0x48(%ebp)
 movl   $0x0,-0x44(%ebp)
 movl   $0x7530,-0x40(%ebp)
 movl   $0x0,-0x3c(%ebp)
 mov    &_ZN3nsl4pAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl14ServiceFactory7getTickEv>
 mov    %eax,-0x38(%ebp)
 mov    %edx,-0x34(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl9TCPThread7getPortEv>
 mov    %ax,-0x2e(%ebp)
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool13createTCPUserEv>
 mov    %eax,-0x2c(%ebp)
 lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocketC1Ev>
 lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket4openEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x19e>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Fail to open socket",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 jmp    <T> <_ZN3nsl9TCPThread4loopEPv+0x60a>
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x4,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 cmp    $0x5209,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x266>
 movzwl -0x2e(%ebp),%eax
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket4bindEtb>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x227>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"Fail to bind listen : reason=%s",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 jmp    <T> <_ZN3nsl9TCPThread4loopEPv+0x60a>
 movl   $0x400,0x4(%esp)
 lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket6listenEi>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x266>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Fail to Create AcceptThread",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 jmp    <T> <_ZN3nsl9TCPThread4loopEPv+0x60a>
 lea    -0xa0(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9setSocketEPNS_9TCPSocketE>
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x4,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 cmp    $0x5209,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x2e3>
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE18registListenHandleEPS1_>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x2e3>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Fail to regist socket",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 jmp    <T> <_ZN3nsl9TCPThread4loopEPv+0x60a>
 nop
 jmp    <T> <_ZN3nsl9TCPThread4loopEPv+0x2e3>
 nop
 mov    &_ZN3nsl4pAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14ServiceFactory7setTickEv>
 mov    -0x54(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0xb8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl17IActiveConManager19getActiveConManagerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl16ActiveConManager16isRequestInQueueEv>
 test   %al,%al
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x380>
 movl   $0x0,-0x78(%ebp)
 mov    &_ZN3nsl4pAppE,%eax
 add    $0xb8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl17IActiveConManager19getActiveConManagerEv>
 lea    -0x78(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE>
 mov    -0x78(%ebp),%eax
 test   %eax,%eax
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x380>
 mov    -0x78(%ebp),%ebx
 mov    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9getUserIdEv>
 movl   $0x1,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE16addConnectedUserEjPS1_b>
 movzbl &_ZN3nsl17is_config_changedE,%eax
 test   %al,%al
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x3f3>
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $&_ZN3nsl10configpathE,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script4loadEPc>
 mov    %al,-0x11(%ebp)
 movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x3c4>
 movl   $&_ZN3nsl10configpathE,0x4(%esp)
 movl   $"Can't open script file : %s\n",(%esp)
 call   <T> <printf>
 jmp    <T> <_ZN3nsl9TCPThread4loopEPv+0x3d8>
 movl   $&_ZN3nsl10configpathE,0x4(%esp)
 movl   $"Reloading script file : %s\n",(%esp)
 call   <T> <printf>
 call   <T> <_ZN3nsl8G_ScriptEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12get_sectionsEv>
 movb   $0x0,&_ZN3nsl17is_config_changedE
 movb   $0x1,&_ZN3nsl18is_config_reloadedE
 call   <T> <_ZN3nsl16G_ActiveNetCloseEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14ActiveNetClose8isInDataEv>
 test   %al,%al
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x46a>
 movl   $0x0,-0x80(%ebp)
 call   <T> <_ZN3nsl16G_ActiveNetCloseEv>
 lea    -0x80(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x7c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14ActiveNetClose13onActvieCloseERjRPNS_7TCPUserE>
 mov    -0x80(%ebp),%eax
 test   %eax,%eax
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x46a>
 mov    -0x7c(%ebp),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"active close, tcpuserid(%d)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x80(%ebp),%edx
 mov    -0x7c(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE16delConnectedUserEjPS1_>
 mov    &_ZN3nsl4pAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl14ServiceFactory7getTickEv>
 mov    %eax,-0x28(%ebp)
 mov    %edx,-0x24(%ebp)
 mov    -0x38(%ebp),%ecx
 mov    -0x34(%ebp),%ebx
 mov    -0x28(%ebp),%eax
 mov    -0x24(%ebp),%edx
 sub    %ecx,%eax
 sbb    %ebx,%edx
 mov    %eax,-0x20(%ebp)
 mov    %edx,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
 js     <T> <_ZN3nsl9TCPThread4loopEPv+0x2df>
 cmpl   $0x0,-0x1c(%ebp)
 jg     <T> <_ZN3nsl9TCPThread4loopEPv+0x4b0>
 cmpl   $0x7530,-0x20(%ebp)
 jbe    <T> <_ZN3nsl9TCPThread4loopEPv+0x2e2>
 mov    -0x28(%ebp),%eax
 mov    -0x24(%ebp),%edx
 mov    %eax,-0x38(%ebp)
 mov    %edx,-0x34(%ebp)
 movl   $0x1,0xc(%esp)
 lea    -0x70(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x6c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE21GetConnectedUsersIterERSt17_Rb_tree_iteratorISt4pairIKjPS1_EES9_b>
 mov    -0x6c(%ebp),%eax
 mov    %eax,-0x74(%ebp)
 jmp    <T> <_ZN3nsl9TCPThread4loopEPv+0x5eb>
 cmpl   $0x0,-0x4c(%ebp)
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x512>
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN3nsl7TCPUserEEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser19isAboutToDisconnectEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x512>
 mov    $0x1,%eax
 jmp    <T> <_ZN3nsl9TCPThread4loopEPv+0x517>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN3nsl9TCPThread4loopEPv+0x5e0>
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN3nsl7TCPUserEEEptEv>
 mov    0x4(%eax),%ebx
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0xc(%ebp)
 lea    -0x66(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE18GetServerUserCountEv>
 mov    %eax,%esi
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN3nsl7TCPUserEEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9getUserIdEv>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"heartbeat SEND, server(%d) reactor-servermapsize(%d)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN3nsl7TCPUserEEEppEv>
 lea    -0x70(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN3nsl7TCPUserEEEneERKS6_>
 test   %al,%al
 jne    <T> <_ZN3nsl9TCPThread4loopEPv+0x4e8>
 jmp    <T> <_ZN3nsl9TCPThread4loopEPv+0x2e3>
 mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE8shutdownEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Thread13setTerminatedEv>
 movl   $0x1,(%esp)
 call   <T> <exit>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocketD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void loop(TCPThread * this, void * temp) */

void __thiscall nsl::TCPThread::_ZN3nsl9TCPThread4loopEPv(TCPThread *this,void *temp)

{
  TCPUser *pTVar1;
  bool bVar2;
  TraceLog *pTVar3;
  int iVar4;
  DataPool *this_00;
  Script *pSVar5;
  int *piVar6;
  char *pcVar7;
  ActiveConManager *pAVar8;
  uint uVar9;
  ActiveNetClose *pAVar10;
  pair<const_unsigned_int,_nsl::TCPUser*> *ppVar11;
  CommonDataPool *this_01;
  int in_GS_OFFSET;
  __int64 _Var12;
  TCPSocket local_a4;
  TCPUser *local_84;
  uint local_80;
  TCPUser *local_7c;
  _Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_> local_78;
  _Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_> local_74;
  _Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_> local_70;
  PACKET_HEADER local_6a;
  DataPool *local_58;
  EpollReactor<nsl::TCPUser> *local_54;
  TCPSendThread *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  ushort local_32;
  TCPUser *local_30;
  undefined8 local_2c;
  uint local_24;
  int local_20;
  undefined1 local_15;
  Message *local_14;
  CMsgCell *local_10;
  
                    /* Unresolved local var: DataPool * pPool@[???]
                       Unresolved local var: TCPReactor * r@[???]
                       Unresolved local var: TCPSendThread * tcp_send_thread_@[???]
                       Unresolved local var: PACKET_HEADER heart_beat_packet@[???]
                       Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>
                       client_iter_begin@[???]
                       Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>
                       client_iter_end@[???]
                       Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>
                       client_iter@[???]
                       Unresolved local var: longlong HEART_BEAT_CHECK_INTERVAL@[???]
                       Unresolved local var: longlong HEART_BEAT_LIMIT_TIME@[???]
                       Unresolved local var: longlong last_heartbeat_check_time@[???]
                       Unresolved local var: ushort accport@[???]
                       Unresolved local var: TCPUser * sUser@[???]
                       Unresolved local var: TCPSocket listenSocket@[???] */
  puts("Start up TCPThread");
  pTVar3 = G_TraceLog();
  TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar3,8,"Start up TCPThread");
  local_58 = DataPools::getDataPool(&pApp->super_DataPools);
  local_54 = Reactor::getReactor(&pApp->super_Reactor);
  EpollReactor<nsl::TCPUser>::_ZN3nsl12EpollReactorINS_7TCPUserEE4initEi(local_54,6000);
  EpollReactor<nsl::TCPUser>::_ZN3nsl12EpollReactorINS_7TCPUserEE7startupEv(local_54);
  local_50 = Threads::getTCPSendThread(&pApp->super_Threads);
  memset(&local_6a,0,0x12);
  PACKET_HEADER::setCategory(&local_6a,-1);
  PACKET_HEADER::setPacketID(&local_6a,0);
  PACKET_HEADER::setSize(&local_6a,0x12);
  std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>::_Rb_tree_iterator
            (&local_70);
  std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>::_Rb_tree_iterator
            (&local_74);
  std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>::_Rb_tree_iterator
            (&local_78);
  local_4c = 30000;
  local_48 = 0;
  local_44 = 30000;
  local_40 = 0;
  local_3c = ServiceFactory::getTick(pApp);
  iVar4 = getPort(this);
  local_32 = (ushort)iVar4;
  this_00 = DataPools::getDataPool(&pApp->super_DataPools);
  local_30 = DataPool::_ZN3nsl8DataPool13createTCPUserEv(this_00);
  TCPSocket::TCPSocket(&local_a4);
                    /* try { // try from 080afdcc to 080b027b has its CatchHandler @ 080b0288 */
  bVar2 = TCPSocket::_ZN3nsl9TCPSocket4openEv(&local_a4);
  if (!bVar2) {
    pTVar3 = G_TraceLog();
    TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar3,0,"Fail to open socket");
    goto LAB_080b0266;
  }
  pSVar5 = G_Script();
  iVar4 = Script::findIntValue(pSVar5,0,4);
  if (iVar4 != 0x5209) {
    bVar2 = TCPSocket::_ZN3nsl9TCPSocket4bindEtb(&local_a4,local_32,false);
    if (!bVar2) {
      piVar6 = __errno_location();
      pcVar7 = strerror(*piVar6);
      pTVar3 = G_TraceLog();
      TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar3,0,"Fail to bind listen : reason=%s",pcVar7);
      goto LAB_080b0266;
    }
    bVar2 = TCPSocket::listen(&local_a4,0x400);
    if (!bVar2) {
      pTVar3 = G_TraceLog();
      TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar3,0,"Fail to Create AcceptThread");
      goto LAB_080b0266;
    }
  }
  TCPUser::setSocket(local_30,&local_a4);
  pSVar5 = G_Script();
  iVar4 = Script::findIntValue(pSVar5,0,4);
  if ((iVar4 == 0x5209) ||
     (bVar2 = EpollReactor<nsl::TCPUser>::
              _ZN3nsl12EpollReactorINS_7TCPUserEE18registListenHandleEPS1_(local_54,local_30), bVar2
     )) {
    do {
      do {
                    /* Unresolved local var: longlong now_time@[???]
                       Unresolved local var: longlong loopgap@[???] */
        ServiceFactory::setTick(pApp);
        EpollReactor<nsl::TCPUser>::
        _ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE(local_54,3,local_58);
        pAVar8 = IActiveConManager::getActiveConManager(&pApp->super_IActiveConManager);
        bVar2 = ActiveConManager::isRequestInQueue(pAVar8);
        if (bVar2) {
                    /* Unresolved local var: TCPUser * active_connect_user@[???] */
          local_7c = (TCPUser *)0x0;
          pAVar8 = IActiveConManager::getActiveConManager(&pApp->super_IActiveConManager);
          ActiveConManager::_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE
                    (pAVar8,&local_7c);
          pTVar1 = local_7c;
          if (local_7c != (TCPUser *)0x0) {
            uVar9 = TCPUser::getUserId(local_7c);
            EpollReactor<nsl::TCPUser>::_ZN3nsl12EpollReactorINS_7TCPUserEE16addConnectedUserEjPS1_b
                      (local_54,uVar9,pTVar1,true);
          }
        }
        if (is_config_changed != false) {
                    /* Unresolved local var: bool ret@[???] */
          pSVar5 = G_Script();
          local_15 = Script::_ZN3nsl6Script4loadEPc(pSVar5,configpath);
          if ((bool)local_15) {
            printf("Reloading script file : %s\n",configpath);
          }
          else {
            printf("Can\'t open script file : %s\n",configpath);
          }
          pSVar5 = G_Script();
          Script::get_sections(pSVar5);
          is_config_changed = false;
          is_config_reloaded = true;
        }
        pAVar10 = G_ActiveNetClose();
        bVar2 = ActiveNetClose::isInData(pAVar10);
        if (bVar2) {
                    /* Unresolved local var: uint active_close_user_id@[???]
                       Unresolved local var: TCPUser * active_close_user@[???] */
          local_84 = (TCPUser *)0x0;
          pAVar10 = G_ActiveNetClose();
          ActiveNetClose::_ZN3nsl14ActiveNetClose13onActvieCloseERjRPNS_7TCPUserE
                    (pAVar10,&local_80,&local_84);
          uVar9 = local_80;
          if (local_84 != (TCPUser *)0x0) {
            pTVar3 = G_TraceLog();
            TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar3,5,"active close, tcpuserid(%d)",uVar9);
            EpollReactor<nsl::TCPUser>::_ZN3nsl12EpollReactorINS_7TCPUserEE16delConnectedUserEjPS1_
                      (local_54,local_80,local_84);
          }
        }
        _Var12 = ServiceFactory::getTick(pApp);
        local_2c._0_4_ = (uint)_Var12;
        local_2c._4_4_ = (int)(_Var12 >> 0x20);
        local_24 = (uint)local_2c - (uint)local_3c;
        local_20 = (local_2c._4_4_ - local_3c._4_4_) - (uint)((uint)local_2c < (uint)local_3c);
        local_2c = _Var12;
      } while ((local_20 < 0) || ((local_20 < 1 && (local_24 < 0x7531))));
      local_3c = _Var12;
      EpollReactor<nsl::TCPUser>::GetConnectedUsersIter(local_54,&local_70,&local_74,true);
      local_78._M_node = local_70._M_node;
      while (bVar2 = std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>::
                     operator!=(&local_78,&local_74), bVar2) {
        if (local_50 == (TCPSendThread *)0x0) {
LAB_080b016e:
          bVar2 = false;
        }
        else {
          ppVar11 = std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>::
                    operator->(&local_78);
          bVar2 = TCPUser::isAboutToDisconnect(ppVar11->second);
          if (bVar2) goto LAB_080b016e;
          bVar2 = true;
        }
        if (bVar2) {
                    /* Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
          ppVar11 = std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>::
                    operator->(&local_78);
          pTVar1 = ppVar11->second;
          this_01 = DataPools::getCommonDataPool(&pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4))
          ;
          local_14 = CommonDataPool::_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE
                               (this_01,pTVar1);
          local_10 = Message::getCellFromMessage(local_14);
          CMsgCell::operator<<(local_10,&local_6a);
          CMsgCell::PAD(local_10);
          TCPSendThread::_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE(local_50,local_14);
          iVar4 = EpollReactor<nsl::TCPUser>::GetServerUserCount(local_54);
          ppVar11 = std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>::
                    operator->(&local_78);
          uVar9 = TCPUser::getUserId(ppVar11->second);
          pTVar3 = G_TraceLog();
          TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz
                    (pTVar3,5,"heartbeat SEND, server(%d) reactor-servermapsize(%d)",uVar9,iVar4);
        }
        std::_Rb_tree_iterator<std::pair<const_unsigned_int,_nsl::TCPUser*>_>::operator++(&local_78)
        ;
      }
    } while( true );
  }
  pTVar3 = G_TraceLog();
  TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar3,0,"Fail to regist socket");
LAB_080b0266:
  EpollReactor<nsl::TCPUser>::shutdown(local_54);
  Thread::setTerminated(&this->super_Thread);
                    /* WARNING: Subroutine does not return */
  exit(1);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPThread.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPThread.cpp)（约第 38 行）：

```cpp
void TCPThread::loop(void* temp)
{
    puts("Start up TCPThread");
    G_TraceLog()->sysLog(8, "Start up TCPThread");
    DataPool* pPool = pApp->super_DataPools.getDataPool();
    EpollReactor<TCPUser>* r = pApp->super_Reactor.getReactor();
    r->init(6000);
    r->startup();
    TCPSendThread* tcp_send_thread = pApp->super_Threads.getTCPSendThread();
    // ORIG 里是 POD 栈对象（该 TU 的头视图没有 ctor）+ memset + 三个 setter，
    // 共享头 PACKET_HEADER 带空 ctor 会多生成一次调用，所以用 18 字节原始缓冲
    // 并在调用处强转，避免 ctor 调用、保持相同调用目标。
    char heart_beat_packet[0x12];
    memset(heart_beat_packet, 0, 0x12);
    ((nsl::PACKET_HEADER*)heart_beat_packet)->setCategory(-1);
    ((nsl::PACKET_HEADER*)heart_beat_packet)->setPacketID(0);
    ((nsl::PACKET_HEADER*)heart_beat_packet)->setSize(0x12);
    std::map<unsigned int, TCPUser*>::iterator client_iter_begin;
    std::map<unsigned int, TCPUser*>::iterator client_iter_end;
    std::map<unsigned int, TCPUser*>::iterator client_iter;
    long long HEART_BEAT_CHECK_INTERVAL = 30000;
    long long last_heartbeat_check_time = 30000;
    {
        long long last_heartbeat_check_time = pApp->getTick();
        unsigned short accport = (unsigned short)getPort();
        TCPUser* sUser = pApp->super_DataPools.getDataPool()->createTCPUser();
        TCPSocket listenSocket;
        long long now_time;
        if (!listenSocket.open())
        {
            G_TraceLog()->sysLog(0, "Fail to open socket");
            goto fail;
        }
        if (G_Script()->findIntValue(0, 4) != 0x5209)
        {
            if (!listenSocket.bind(accport, false))
            {
                G_TraceLog()->sysLog(0, "Fail to bind listen : reason=%s", strerror(errno));
                goto fail;
            }
            if (!listenSocket.listen(0x400))
            {
                G_TraceLog()->sysLog(0, "Fail to Create AcceptThread");
                goto fail;
            }
        }
        sUser->setSocket(&listenSocket);
        // Fail-first regist: if not 0x5209 mode, require registListenHandle.
        if (G_Script()->findIntValue(0, 4) != 0x5209)
        {
            if (!r->registListenHandle(sUser))
            {
                G_TraceLog()->sysLog(0, "Fail to regist socket");
                goto fail;
            }
        }
        while (true)
        {
            pApp->setTick();
            r->handleEvents(3, pPool);
            if (pApp->super_IActiveConManager.getActiveConManager()->isRequestInQueue())
            {
                TCPUser* active_connect_user = NULL;
                pApp->super_IActiveConManager.getActiveConManager()->PopRequestConnect(active_connect_user);
                if (active_connect_user != NULL)
                {
                    r->addConnectedUser(active_connect_user->getUserId(), active_connect_user, true);
                }
            }
            if (is_config_changed)
            {
                bool ret = G_Script()->load(configpath);
                if (!ret)
                {
                    printf("Can't open script file : %s\n", configpath);
                }
                else
                {
                    printf("Reloading script file : %s\n", configpath);
                }
                G_Script()->get_sections();
                is_config_changed = false;
                is_config_reloaded = true;
            }
            if (G_ActiveNetClose()->isInData())
            {
                unsigned int active_close_user_id;
                TCPUser* active_close_user = NULL;
                G_ActiveNetClose()->onActvieClose(active_close_user_id, active_close_user);
                if (active_close_user != NULL)
                {
                    G_TraceLog()->sysLog(5, "active close, tcpuserid(%d)", active_close_user_id);
                    r->delConnectedUser(active_close_user_id, active_close_user);
                }
            }
            now_time = pApp->getTick();
            long long delta = now_time - last_heartbeat_check_time;
            if (delta > 30000)
            {
                last_heartbeat_check_time = now_time;
                r->GetConnectedUsersIter(client_iter_begin, client_iter_end, true);
                for (client_iter = client_iter_begin; client_iter != client_iter_end; ++client_iter)
                {
                    if ((tcp_send_thread != NULL)
                            ? (!client_iter->second->isAboutToDisconnect()) ? true : false
                            : false)
                    {
                        Message* msg = pApp->super_DataPools.getCommonDataPool(tlsThreadId)->getSendMessage(client_iter->second);
                        CMsgCell* cell = msg->getCellFromMessage();
                        *cell << (PACKET_HEADER*)&heart_beat_packet;
                        cell->PAD();
                        tcp_send_thread->PushSendMsg(msg);
                        register int servercount = r->GetServerUserCount();
                        G_TraceLog()->sysLog(5, "heartbeat SEND, server(%d) reactor-servermapsize(%d)", client_iter->second->getUserId(), servercount);
                    }
                }
            }
        }
fail:
        r->shutdown();
        Thread::setTerminated();
        exit(1);
    }
}
```
