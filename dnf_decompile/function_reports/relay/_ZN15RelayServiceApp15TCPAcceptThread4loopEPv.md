# _ZN15RelayServiceApp15TCPAcceptThread4loopEPv

`RelayServiceApp::TCPAcceptThread::loop(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805b2da` | `0x3a6` | `0x805b3a8` | `0x3a3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,256 +1,254 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp15TCPAcceptThread7getPortEv>
 mov    %ax,-0x26(%ebp)
 movl   $"loop",0x4(%esp)
 movl   $"In %s \n",(%esp)
 call   <T> <printf>
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketC1Ev>
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket4openEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x98>
 movl   $0x100c,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 movl   $"Fail to open socket",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN9ExceptionC1EPKc>
 jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x80>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x378>
+jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x375>
 movl   $0x0,0x8(%esp)
 movl   $&_ZTI9Exception,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movzwl -0x26(%ebp),%eax
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket4bindEtb>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x109>
 movl   $0x100c,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 movl   $"Fail to bind listen",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN9ExceptionC1EPKc>
 jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0xf1>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x378>
+jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x375>
 movl   $0x0,0x8(%esp)
 movl   $&_ZTI9Exception,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $0x64,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket6listenEi>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x33c>
+je     <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x339>
 movl   $0x100c,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 movl   $"Fail to Create AcceptThread.",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN9ExceptionC1EPKc>
 jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x15e>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x378>
+jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x375>
 movl   $0x0,0x8(%esp)
 movl   $&_ZTI9Exception,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $0x64,(%esp)
 call   <T> <_ZN7TSystemI11LinuxSystemE6usleepEi>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Thread6isStopEv>
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x354>
+jne    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x351>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0xf4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp9UserPools15createTCPSocketEv>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x33b>
+je     <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x339>
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket6acceptERS_>
 mov    %al,-0x1d(%ebp)
 movzbl -0x1d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x205>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 lea    0xf4(%eax),%edx
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN15RelayServiceApp9UserPools16destroyTCPSocketEP9TCPSocket>
-jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x33c>
+jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x339>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp5Users12getUserCountEv>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp5Users15getMaxUserCountEv>
 cmp    %eax,%ebx
 setge  %al
 test   %al,%al
 je     <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x287>
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp15TCPAcceptThread31notifyCannotLoginByMaxUserCountER9TCPSocket>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket5closeEv>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 lea    0xf4(%eax),%edx
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN15RelayServiceApp9UserPools16destroyTCPSocketEP9TCPSocket>
-jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x33c>
+jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x339>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0xf4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp9UserPools13createTCPUserEv>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
 jne    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x2ed>
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp15TCPAcceptThread22notifyCannotCreateUserER9TCPSocket>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket5closeEv>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 lea    0xf4(%eax),%edx
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN15RelayServiceApp9UserPools16destroyTCPSocketEP9TCPSocket>
-jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x33c>
+jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x339>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 mov    -0x1c(%ebp),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10setManagerEPS1_>
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser9setSocketEP9TCPSocket>
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser21startupAfterSetSocketEv>
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp15TCPAcceptThread20lockPushAcceptedUserEPNS_7TCPUserE>
-jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x33c>
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6Thread13isTerminatingEv>
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x176>
+jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x352>
 nop
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Thread13isTerminatingEv>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x176>
-jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x355>
-nop
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6Thread13isTerminatingEv>
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket5closeEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Thread13setTerminatedEv>
-jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x393>
+jmp    <T> <_ZN15RelayServiceApp15TCPAcceptThread4loopEPv+0x390>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketD1Ev>
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::TCPAcceptThread::loop(void*) */

void RelayServiceApp::TCPAcceptThread::_ZN15RelayServiceApp15TCPAcceptThread4loopEPv(void *param_1)

{
  char cVar1;
  Exception *pEVar2;
  int iVar3;
  int iVar4;
  RelayService *pRVar5;
  TCPSocket local_48 [30];
  ushort local_2a;
  TCPSocket *local_28;
  char local_21;
  TManager<RelayServiceApp::RelayService> *local_20;
  
  local_2a = getPort(param_1);
  printf("In %s \n",&loop(void*)::__FUNCTION__);
  TCPSocket::TCPSocket(local_48);
                    /* try { // try from 0805b317 to 0805b31b has its CatchHandler @ 0805b652 */
  cVar1 = TCPSocket::open(local_48);
  if (cVar1 != '\x01') {
    pEVar2 = (Exception *)__cxa_allocate_exception(0x100c);
                    /* try { // try from 0805b33e to 0805b342 has its CatchHandler @ 0805b345 */
    Exception::Exception(pEVar2,"Fail to open socket");
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0805b36d to 0805b38c has its CatchHandler @ 0805b652 */
    __cxa_throw(pEVar2,&Exception::typeinfo,0);
  }
  cVar1 = TCPSocket::bind(local_48,local_2a,false);
  if (cVar1 != '\x01') {
    pEVar2 = (Exception *)__cxa_allocate_exception(0x100c);
                    /* try { // try from 0805b3af to 0805b3b3 has its CatchHandler @ 0805b3b6 */
    Exception::Exception(pEVar2,"Fail to bind listen");
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0805b3de to 0805b3f5 has its CatchHandler @ 0805b652 */
    __cxa_throw(pEVar2,&Exception::typeinfo,0);
  }
  cVar1 = TCPSocket::listen(local_48,100);
  if (cVar1 != '\x01') {
    pEVar2 = (Exception *)__cxa_allocate_exception(0x100c);
                    /* try { // try from 0805b41c to 0805b420 has its CatchHandler @ 0805b423 */
    Exception::Exception(pEVar2,"Fail to Create AcceptThread.");
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0805b44b to 0805b64f has its CatchHandler @ 0805b652 */
    __cxa_throw(pEVar2,&Exception::typeinfo,0);
  }
  while (cVar1 = Thread::isTerminating(param_1), cVar1 != '\x01') {
    TSystem<LinuxSystem>::usleep(100);
    cVar1 = Thread::isStop(param_1);
    if (cVar1 != '\0') break;
    iVar3 = TManager<RelayServiceApp::RelayService>::getManager
                      ((TManager<RelayServiceApp::RelayService> *)((int)param_1 + 0x14));
    local_28 = (TCPSocket *)UserPools::createTCPSocket((UserPools *)(iVar3 + 0xf4));
    if (local_28 != (TCPSocket *)0x0) {
      local_21 = TCPSocket::accept(local_48,local_28);
      if (local_21 == '\x01') {
        iVar3 = TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)((int)param_1 + 0x14));
        iVar3 = Users::getUserCount((Users *)(iVar3 + 0x24));
        iVar4 = TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)((int)param_1 + 0x14));
        iVar4 = Users::getMaxUserCount((Users *)(iVar4 + 0x24));
        if (iVar3 < iVar4) {
          iVar3 = TManager<RelayServiceApp::RelayService>::getManager
                            ((TManager<RelayServiceApp::RelayService> *)((int)param_1 + 0x14));
          local_20 = (TManager<RelayServiceApp::RelayService> *)
                     UserPools::createTCPUser((UserPools *)(iVar3 + 0xf4));
          if (local_20 == (TManager<RelayServiceApp::RelayService> *)0x0) {
            notifyCannotCreateUser(param_1);
            TCPSocket::close(local_28);
            iVar3 = TManager<RelayServiceApp::RelayService>::getManager
                              ((TManager<RelayServiceApp::RelayService> *)((int)param_1 + 0x14));
            UserPools::destroyTCPSocket((UserPools *)(iVar3 + 0xf4),local_28);
          }
          else {
            pRVar5 = (RelayService *)
                     TManager<RelayServiceApp::RelayService>::getManager
                               ((TManager<RelayServiceApp::RelayService> *)((int)param_1 + 0x14));
            TManager<RelayServiceApp::RelayService>::setManager(local_20,pRVar5);
            TCPUser::setSocket((TCPUser *)local_20,local_28);
            TCPUser::startupAfterSetSocket((TCPUser *)local_20);
            lockPushAcceptedUser(param_1);
          }
        }
        else {
          notifyCannotLoginByMaxUserCount(param_1);
          TCPSocket::close(local_28);
          iVar3 = TManager<RelayServiceApp::RelayService>::getManager
                            ((TManager<RelayServiceApp::RelayService> *)((int)param_1 + 0x14));
          UserPools::destroyTCPSocket((UserPools *)(iVar3 + 0xf4),local_28);
        }
      }
      else {
        iVar3 = TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)((int)param_1 + 0x14));
        UserPools::destroyTCPSocket((UserPools *)(iVar3 + 0xf4),local_28);
      }
    }
  }
  Thread::isTerminating(param_1);
  TCPSocket::close(local_48);
  Thread::setTerminated(param_1);
  TCPSocket::~TCPSocket(local_48);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPAcceptThread.cpp](source/ChannelOld/DNFChannelBridge/TCPAcceptThread.cpp)（约第 48 行）：

```cpp
void ChannelServiceApp::TCPAcceptThread::loop(void* temp)
{
    puts("Start up TCPAcceptThread");
    unsigned short accport = (unsigned short)getPort();
    ChannelService* pApp = TManager<ChannelService>::getManager();
    TCPSocket listenSocket;
    if (!listenSocket.open())
    {
        throw Exception("Fail to open socket");
    }
    if (!listenSocket.bind(accport, false))
    {
        throw Exception("Fail to bind listen");
    }
    if (!listenSocket.listen(0x400))
    {
        throw Exception("Fail to Create AcceptThread.");
    }
    while (!isTerminating())
    {
        usleep(100);
        if (isStop())
        {
            break;
        }
        sockaddr_in useradr;
        int size = 0x10;
        TCPSocket* s = TManager<ChannelService>::getManager()->UserPools::createTCPSocket("TCPAcceptThread.cpp", 0x4d);
        if (s == NULL)
        {
            GLOG(gFileLogInfo, "Create Error :  Remain TCP Sockets =" << pApp->UserPools::m_poolTCPSocket.getRemain());
            continue;
        }
        bool bRet = listenSocket.accept(*s);
        if (!bRet)
        {
            GLOG(gFileLogInfo, "Create Error :  accept error" << strerror(*__errno_location()));
            TManager<ChannelService>::getManager()->UserPools::destroyTCPSocket(s);
            continue;
        }
        TCPUser* acUser = TManager<ChannelService>::getManager()->UserPools::createTCPUser("TCPAcceptThread.cpp", 0x61);
        if (acUser == NULL)
        {
            GLOG(gFileLogInfo, "Create Error :  Remain TCP Sockets =" << pApp->UserPools::m_poolTCPSocket.getRemain());
            GLOG(gFileLogInfo, "Create Error :  Remain TCP Users =" << pApp->UserPools::m_poolTCPUser.getRemain());
            notifyCannotCreateUser(*s);
            s->close();
            TManager<ChannelService>::getManager()->UserPools::destroyTCPSocket(s);
            continue;
        }
        acUser->TManager<ChannelService>::setManager(TManager<ChannelService>::getManager());
        acUser->setSocket(s);
        acUser->startupAfterSetSocket();
        acUser->setLastAccessTime();
        lockPushAcceptedUser(acUser);
    }
    if (isTerminating())
    {
    }
    listenSocket.close();
    setTerminated();
}
```
