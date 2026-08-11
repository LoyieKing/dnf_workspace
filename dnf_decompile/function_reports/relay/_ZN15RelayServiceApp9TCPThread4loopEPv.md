# _ZN15RelayServiceApp9TCPThread4loopEPv

`RelayServiceApp::TCPThread::loop(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805bb8e` | `0x22f` | `0x805bb4e` | `0x22f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,155 +1,156 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x50,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp9TCPThread7getPortEv>
 mov    %ax,-0xe(%ebp)
 movzwl -0xe(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"loop",0x4(%esp)
 movl   $"In %s : port='%d'\n",(%esp)
 call   <T> <printf>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 add    $0x184,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7Reactor10getReactorEv>
 mov    %eax,-0xc(%ebp)
 call   <T> <_Z12G_ScriptDatav>
 mov    (%eax),%eax
 add    $0x69,%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TReactorI12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS3_ES2_S3_S3_E4initEi>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TReactorI12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS3_ES2_S3_S3_E7startupEv>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TReactorI12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS3_ES2_S3_S3_E17setManagerToEpollEPNS1_12RelayServiceE>
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketC1Ev>
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket4openEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN15RelayServiceApp9TCPThread4loopEPv+0xce>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x4(%esp)
 movl   $"listenSocket.open : ERROR(%s)\n",(%esp)
 call   <T> <printf>
 call   <T> <_Z12G_ScriptDatav>
-movzwl 0x1a(%eax),%eax
+add    $0x1a,%eax
+movzwl (%eax),%eax
 test   %ax,%ax
 setne  %al
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp9TCPThread4loopEPv+0x100>
+je     <T> <_ZN15RelayServiceApp9TCPThread4loopEPv+0x102>
 movl   $"Set Relay Server for PVP Channel",(%esp)
 call   <T> <puts>
 movl   $0x0,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket11setOptNagleEb>
 movzwl -0xe(%ebp),%eax
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket4bindEtb>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp9TCPThread4loopEPv+0x141>
+je     <T> <_ZN15RelayServiceApp9TCPThread4loopEPv+0x143>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x4(%esp)
 movl   $"listenSocket.bind : ERROR(%s)\n",(%esp)
 call   <T> <printf>
 movl   $0x64,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket6listenEi>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp9TCPThread4loopEPv+0x17a>
+je     <T> <_ZN15RelayServiceApp9TCPThread4loopEPv+0x17c>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x4(%esp)
 movl   $"listenSocket.listen : ERROR(%s)\n",(%esp)
 call   <T> <printf>
 mov    -0x48(%ebp),%eax
 mov    %eax,-0x2c(%ebp)
 mov    -0x44(%ebp),%eax
 mov    %eax,-0x28(%ebp)
 mov    -0x40(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 mov    -0x3c(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x38(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 mov    -0x34(%ebp),%eax
 mov    %eax,-0x18(%ebp)
-movzwl -0x30(%ebp),%eax
-mov    %ax,-0x14(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,-0x14(%ebp)
 movl   $0x7,0xc(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x7d0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TReactorI12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS3_ES2_S3_S3_E12handleEventsEjS3_j>
 jmp    <T> <_ZN15RelayServiceApp9TCPThread4loopEPv+0x1df>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN15RelayServiceApp9TCPThread4loopEPv+0x202>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketD1Ev>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TReactorI12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS3_ES2_S3_S3_E8shutdownEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Thread13setTerminatedEv>
 jmp    <T> <_ZN15RelayServiceApp9TCPThread4loopEPv+0x21d>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketD1Ev>
 add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::TCPThread::loop(void*) */

void RelayServiceApp::TCPThread::_ZN15RelayServiceApp9TCPThread4loopEPv(void *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  RelayService *pRVar4;
  char *pcVar5;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  ushort local_12;
  TReactor<EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket>,RelayServiceApp::TCPUser,TCPSocket,TCPSocket>
  *local_10;
  
  local_12 = getPort(param_1);
  printf("In %s : port=\'%d\'\n",&loop(void*)::__FUNCTION__,(uint)local_12);
  iVar2 = TManager<RelayServiceApp::RelayService>::getManager
                    ((TManager<RelayServiceApp::RelayService> *)((int)param_1 + 0x14));
  local_10 = (TReactor<EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket>,RelayServiceApp::TCPUser,TCPSocket,TCPSocket>
              *)Reactor::getReactor((Reactor *)(iVar2 + 0x184));
  piVar3 = (int *)G_ScriptData();
  TReactor<EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket>,RelayServiceApp::TCPUser,TCPSocket,TCPSocket>
  ::init(local_10,*piVar3 + 0x69);
  TReactor<EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket>,RelayServiceApp::TCPUser,TCPSocket,TCPSocket>
  ::startup(local_10);
  pRVar4 = (RelayService *)
           TManager<RelayServiceApp::RelayService>::getManager
                     ((TManager<RelayServiceApp::RelayService> *)((int)param_1 + 0x14));
  TReactor<EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket>,RelayServiceApp::TCPUser,TCPSocket,TCPSocket>
  ::setManagerToEpoll(local_10,pRVar4);
  TCPSocket::TCPSocket((TCPSocket *)&local_4c);
                    /* try { // try from 0805bc31 to 0805bd07 has its CatchHandler @ 0805bd90 */
  cVar1 = TCPSocket::open((TCPSocket *)&local_4c);
  if (cVar1 != '\x01') {
    piVar3 = __errno_location();
    pcVar5 = strerror(*piVar3);
    printf("listenSocket.open : ERROR(%s)\n",pcVar5);
  }
  iVar2 = G_ScriptData();
  if (*(short *)(iVar2 + 0x1a) != 0) {
    puts("Set Relay Server for PVP Channel");
    TCPSocket::setOptNagle((TCPSocket *)&local_4c,false);
  }
  cVar1 = TCPSocket::bind((TCPSocket *)&local_4c,local_12,false);
  if (cVar1 != '\x01') {
    piVar3 = __errno_location();
    pcVar5 = strerror(*piVar3);
    printf("listenSocket.bind : ERROR(%s)\n",pcVar5);
  }
  cVar1 = TCPSocket::listen((TCPSocket *)&local_4c,100);
  if (cVar1 != '\x01') {
    piVar3 = __errno_location();
    pcVar5 = strerror(*piVar3);
    printf("listenSocket.listen : ERROR(%s)\n",pcVar5);
  }
  local_30 = local_4c;
  local_2c = local_48;
  local_28 = local_44;
  local_24 = local_40;
  local_20 = local_3c;
  local_1c = local_38;
  local_18 = local_34;
                    /* try { // try from 0805bd51 to 0805bd55 has its CatchHandler @ 0805bd58 */
  TReactor<EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket>,RelayServiceApp::TCPUser,TCPSocket,TCPSocket>
  ::handleEvents(local_10,2000,&local_30,7);
                    /* try { // try from 0805bd73 to 0805bd8d has its CatchHandler @ 0805bd90 */
  TCPSocket::~TCPSocket((TCPSocket *)&local_30);
  TReactor<EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket>,RelayServiceApp::TCPUser,TCPSocket,TCPSocket>
  ::shutdown(local_10);
  Thread::setTerminated(param_1);
  TCPSocket::~TCPSocket((TCPSocket *)&local_4c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPThread.cpp](source/ChannelOld/DNFChannelBridge/TCPThread.cpp)（约第 18 行）：

```cpp
void ChannelServiceApp::TCPThread::loop(void* temp)
{
    puts("Start up TCPThread");
    TReactor<EpollReactor<TCPUser>, TCPUser>* r = getManager()->getReactor();
    r->init(10000);
    r->startup();
    while (!isTerminating())
    {
        getManager()->setTick();
        while (true)
        {
            TCPUser* pUser = getManager()->getTCPAcceptThread()->lockPopAcceptedUser();
            if (pUser == NULL)
            {
                break;
            }
            pUser->onAccept();
            r->registHandle(pUser, 7);
        }
        r->handleEvents(1000);
        usleep(10000);
    }
    r->shutdown();
    setTerminated();
}
```
