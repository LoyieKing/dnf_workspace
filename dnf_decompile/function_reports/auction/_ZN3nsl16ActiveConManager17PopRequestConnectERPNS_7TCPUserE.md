# _ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE

`nsl::ActiveConManager::PopRequestConnect(nsl::TCPUser*&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80bd134` | `0x437` | `0x80aa0da` | `0x43c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,292 +1,292 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x50,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEEC1ERS3_>
 mov    0x8(%ebp),%eax
 add    $0x4c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIPN3nsl12ConInterfaceESt5dequeIS2_SaIS2_EEE5emptyEv>
 test   %al,%al
-je     <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x41>
+je     <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x3e>
 mov    0x8(%ebp),%eax
 movb   $0x0,(%eax)
-mov    $0x0,%ebx
-mov    $0x0,%esi
-jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x84>
+movl   $0x0,-0x18(%ebp)
+jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x83>
 mov    0x8(%ebp),%eax
 add    $0x4c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIPN3nsl12ConInterfaceESt5dequeIS2_SaIS2_EEE5frontEv>
 mov    (%eax),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x4c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIPN3nsl12ConInterfaceESt5dequeIS2_SaIS2_EEE3popEv>
-mov    $0x1,%esi
-jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x84>
+movl   $0x1,-0x18(%ebp)
+jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x83>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
-test   %esi,%esi
-je     <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x42e>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x9e>
+mov    $0x0,%eax
+jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x435>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool15createTCPSocketEv>
 mov    %eax,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket4openEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0xf9>
+je     <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x100>
 movl   $"failed to open UDP socket port",(%esp)
 call   <T> <puts>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
 mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool16destroyTCPSocketEPNS_9TCPSocketE>
-mov    $0x0,%ebx
-jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x42e>
-mov    -0x18(%ebp),%eax
+mov    $0x0,%eax
+jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x435>
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface7getPortEv>
 mov    %eax,%ebx
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface5getIpEv>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"try to connect-%s, %d\n",(%esp)
 call   <T> <printf>
-movl   $0x3,-0x24(%ebp)
-movl   $0x0,-0x20(%ebp)
-mov    -0x18(%ebp),%eax
+movl   $0x3,-0x28(%ebp)
+movl   $0x0,-0x24(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface7getPortEv>
 movzwl %ax,%ebx
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface5getIpEv>
 mov    %eax,%ecx
-mov    -0x24(%ebp),%eax
-mov    -0x20(%ebp),%edx
+mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%edx
 mov    %eax,0xc(%esp)
 mov    %edx,0x10(%esp)
 mov    %ebx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x1f0>
-mov    -0x18(%ebp),%eax
+je     <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x1f7>
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface7getPortEv>
 mov    %eax,%esi
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface5getIpEv>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"failed to connect remote server-ip=%s, port=%d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket5closeEv>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
 mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool16destroyTCPSocketEPNS_9TCPSocketE>
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 movb   $0x1,0x2c(%eax)
-mov    $0x0,%ebx
-jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x42e>
+mov    $0x0,%eax
+jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x435>
 movl   $0x1,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface12SetConnectedEb>
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface7getPortEv>
 mov    %eax,%ebx
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface5getIpEv>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"connection success!!-%s, %d\n",(%esp)
 call   <T> <printf>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool13createTCPUserEv>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x290>
+jne    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x297>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket5closeEv>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
 mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool16destroyTCPSocketEPNS_9TCPSocketE>
 movl   $"cannot create TCP USER",(%esp)
 call   <T> <puts>
-mov    $0x0,%ebx
-jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x42e>
+mov    $0x0,%eax
+jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x435>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser10initializeEv>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser21startupAfterSetSocketEv>
 mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9setSocketEPNS_9TCPSocketE>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser17setLastAccessTimeEv>
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface12getNeedReconEv>
 movzbl %al,%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser16setNeedReconnectEb>
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface11getSendTypeEv>
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser15setSendDataTypeENS0_14ENUM_DATA_TYPEE>
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface11getRecvTypeEv>
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser15setRecvDataTypeENS0_14ENUM_DATA_TYPEE>
 mov    -0x10(%ebp),%eax
 mov    0x30(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"Active Connected TCPUser id=[%d]",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x74,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Reactor10getReactorEv>
 mov    %eax,-0xc(%ebp)
 movl   $0x5,0x8(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12registHandleEPS1_j>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x385>
+je     <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x38c>
 movl   $"register handle fail",(%esp)
 call   <T> <puts>
-mov    $0x0,%ebx
-jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x42e>
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    $0x0,%eax
+jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x435>
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface10setTCPUserEPNS_7TCPUserE>
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEEC1ERS3_>
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface5getIdEv>
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x34(%eax),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIiPN3nsl12ConInterfaceESt4lessIiESaISt4pairIKiS2_EEEixERS6_>
-mov    -0x18(%ebp),%edx
+mov    -0x1c(%ebp),%edx
 mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x1,0x1(%eax)
 mov    0x8(%ebp),%eax
 add    $0x34,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiPN3nsl12ConInterfaceESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 mov    %eax,0x4(%esp)
 movl   $"con map size-%d\n",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x416>
+jmp    <T> <_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE+0x41d>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
 mov    0xc(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,(%eax)
-mov    $0x1,%ebx
-mov    %ebx,%eax
+mov    $0x1,%eax
 add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: bool PopRequestConnect(ActiveConManager * this, TCPUser * *
   outConnectedUser) */

bool __thiscall
nsl::ActiveConManager::_ZN3nsl16ActiveConManager17PopRequestConnectERPNS_7TCPUserE
          (ActiveConManager *this,TCPUser **outConnectedUser)

{
  uint uVar1;
  timeval tval;
  bool bVar2;
  DataPool *pDVar3;
  int iVar4;
  char *pcVar5;
  TraceLog *pTVar6;
  ENUM_DATA_TYPE EVar7;
  ConInterface **ppCVar8;
  size_t __in_chrg;
  undefined1 unaff_BL;
  ThreadLock *in_lock_;
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_> local_30;
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_> local_2c;
  __time_t local_28;
  __suseconds_t local_24;
  int local_20;
  ConInterface *local_1c;
  TCPSocket *local_18;
  TCPUser *local_14;
  TCPReactor *local_10;
  
                    /* Unresolved local var: ConInterface * conInfo@[???]
                       Unresolved local var: TCPSocket * sTCP@[???]
                       Unresolved local var: timeval tv@[???]
                       Unresolved local var: TCPUser * acUser@[???]
                       Unresolved local var: TCPReactor * r@[???]
                       Unresolved local var: TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>
                       slock@[???] */
  in_lock_ = &this->LockInCon;
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::TScopedLock(&local_2c,in_lock_);
                    /* try { // try from 080bd15a to 080bd195 has its CatchHandler @ 080bd19d */
  bVar2 = std::
          queue<nsl::ConInterface*,_std::deque<nsl::ConInterface*,_std::allocator<nsl::ConInterface*>_>_>
          ::empty(&this->queueRequestConnect);
  if (!bVar2) {
    ppCVar8 = std::
              queue<nsl::ConInterface*,_std::deque<nsl::ConInterface*,_std::allocator<nsl::ConInterface*>_>_>
              ::front(&this->queueRequestConnect);
    local_1c = *ppCVar8;
    std::
    queue<nsl::ConInterface*,_std::deque<nsl::ConInterface*,_std::allocator<nsl::ConInterface*>_>_>
    ::pop(&this->queueRequestConnect);
  }
  else {
    this->bRequestInQueue = false;
    unaff_BL = 0;
  }
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::~TScopedLock(&local_2c,(int)in_lock_);
  if (!bVar2) {
    pDVar3 = DataPools::getDataPool(&pApp->super_DataPools);
    local_18 = DataPool::createTCPSocket(pDVar3);
    bVar2 = TCPSocket::open(local_18);
    if (bVar2) {
      iVar4 = ConInterface::getPort(local_1c);
      pcVar5 = ConInterface::getIp(local_1c);
      printf("try to connect-%s, %d\n",pcVar5,iVar4);
      local_28 = 3;
      local_24 = 0;
      iVar4 = ConInterface::getPort(local_1c);
      pcVar5 = ConInterface::getIp(local_1c);
      tval.tv_usec = local_24;
      tval.tv_sec = local_28;
      bVar2 = TCPSocket::connect_nonb(local_18,pcVar5,(ushort)iVar4,tval);
      if (bVar2) {
        ConInterface::SetConnected(local_1c,true);
        iVar4 = ConInterface::getPort(local_1c);
        pcVar5 = ConInterface::getIp(local_1c);
        printf("connection success!!-%s, %d\n",pcVar5,iVar4);
        pDVar3 = DataPools::getDataPool(&pApp->super_DataPools);
        local_14 = DataPool::createTCPUser(pDVar3);
        if (local_14 == (TCPUser *)0x0) {
          TCPSocket::close(local_18);
          pDVar3 = DataPools::getDataPool(&pApp->super_DataPools);
          DataPool::destroyTCPSocket(pDVar3,local_18);
          puts("cannot create TCP USER");
          unaff_BL = 0;
        }
        else {
          TCPUser::initialize(local_14);
          TCPUser::startupAfterSetSocket(local_14);
          TCPUser::setSocket(local_14,local_18);
          TCPUser::setLastAccessTime(local_14);
          bVar2 = ConInterface::getNeedRecon(local_1c);
          TCPUser::setNeedReconnect(local_14,bVar2);
          EVar7 = ConInterface::getSendType(local_1c);
          TCPUser::setSendDataType(local_14,EVar7);
          EVar7 = ConInterface::getRecvType(local_1c);
          TCPUser::setRecvDataType(local_14,EVar7);
          uVar1 = local_14->mUserId;
          pTVar6 = G_TraceLog();
          TraceLog::sysLog(pTVar6,8,"Active Connected TCPUser id=[%d]",uVar1);
          local_10 = Reactor::getReactor(&pApp->super_Reactor);
          bVar2 = EpollReactor<nsl::TCPUser>::
                  _ZN3nsl12EpollReactorINS_7TCPUserEE12registHandleEPS1_j(local_10,local_14,5);
          if (bVar2) {
            ConInterface::setTCPUser(local_1c,local_14);
                    /* Unresolved local var: TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>
                       slock@[???] */
            TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::TScopedLock
                      (&local_30,&this->LockOutCon);
            local_20 = ConInterface::getId(local_1c);
                    /* try { // try from 080bd4fe to 080bd52c has its CatchHandler @ 080bd52f */
            ppCVar8 = std::
                      map<int,_nsl::ConInterface*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::ConInterface*>_>_>
                      ::operator[](&this->mapConnectedUser_,&local_20);
            *ppCVar8 = local_1c;
            this->bConnectedInQueue = true;
            __in_chrg = std::
                        map<int,_nsl::ConInterface*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::ConInterface*>_>_>
                        ::size(&this->mapConnectedUser_);
            printf("con map size-%d\n");
            TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::~TScopedLock(&local_30,__in_chrg)
            ;
            *outConnectedUser = local_14;
            unaff_BL = 1;
          }
          else {
            puts("register handle fail");
            unaff_BL = 0;
          }
        }
      }
      else {
        iVar4 = ConInterface::getPort(local_1c);
        pcVar5 = ConInterface::getIp(local_1c);
        pTVar6 = G_TraceLog();
        TraceLog::sysLog(pTVar6,7,"failed to connect remote server-ip=%s, port=%d",pcVar5,iVar4);
        TCPSocket::close(local_18);
        pDVar3 = DataPools::getDataPool(&pApp->super_DataPools);
        DataPool::destroyTCPSocket(pDVar3,local_18);
        local_1c->mIsRejected = true;
        unaff_BL = 0;
      }
    }
    else {
      puts("failed to open UDP socket port");
      pDVar3 = DataPools::getDataPool(&pApp->super_DataPools);
      DataPool::destroyTCPSocket(pDVar3,local_18);
      unaff_BL = 0;
    }
  }
  return (bool)unaff_BL;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TActiveConnect.cpp, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DBConnections.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DataPools.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/Dispatchers.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/EncyptTools.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/IActiveConManager.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/IHandler.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/IHandlers.h 等 544 个文件*
