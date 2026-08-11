# _ZN15RelayServiceApp9UDPThread4loopEPv

`RelayServiceApp::UDPThread::loop(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805e642` | `0x2e9` | `0x805db46` | `0x2dd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,193 +1,186 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10c0,%esp
 movl   $0xffffffff,-0x28(%ebp)
-movl   $0x0,-0x24(%ebp)
 movl   $0x1,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
+movl   $0x1,(%esp)
 call   <T> <epoll_create>
 mov    %eax,-0x28(%ebp)
 cmpl   $0xffffffff,-0x28(%ebp)
-jne    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x48>
+jne    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x42>
 movl   $"loop",0x4(%esp)
 movl   $"In %s : Can't create epoll device",(%esp)
 call   <T> <printf>
 lea    -0xb4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocketC1Ev>
 lea    -0xb4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocket4openEv>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x7c>
-movl   $"failed to open UDP socket port",(%esp)
-call   <T> <puts>
-jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x2d1>
+je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x299>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 movzwl %ax,%eax
 movl   $0x1,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0xb4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocket4bindEtb>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0xc1>
-mov    0x8(%ebp),%eax
-mov    0x1c(%eax),%eax
-mov    %eax,0x4(%esp)
-movl   $"failed to bind UDP socket port #%d\n",(%esp)
-call   <T> <printf>
-jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x2d1>
+je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x281>
 lea    -0xb4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocket14setOptNonBlockEv>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0xe7>
-movl   $"failed to set Option Non Blocking",(%esp)
-call   <T> <puts>
-jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x2d1>
+je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x273>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %eax,0x4(%esp)
 movl   $"succeeded in binding UDP socket port #%d\n",(%esp)
 call   <T> <printf>
 movl   $0x1,-0x34(%ebp)
 lea    -0xb4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocket9getHandleEv>
 mov    %eax,-0x30(%ebp)
 lea    -0xb4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocket9getHandleEv>
 lea    -0x34(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <epoll_ctl>
 shr    $0x1f,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x15c>
+je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x122>
 movl   $"loop",0x4(%esp)
 movl   $"In %s : epoll_ctl error\n",(%esp)
 call   <T> <printf>
 lea    -0xb4(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp9UDPThread12setUDPSocketEP9UDPSocket>
-jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x290>
+jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x250>
 movl   $0x64,0xc(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <epoll_wait>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x28c>
+je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x250>
 call   <T> <_Z12G_ScriptDatav>
 movzbl 0x34(%eax),%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x20c>
+je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x1d2>
 call   <T> <_Z11get_ms_tickv>
 mov    %eax,-0x18(%ebp)
 mov    %edx,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%ecx
 mov    0x28(%eax),%ebx
 mov    -0x18(%ebp),%eax
 mov    -0x14(%ebp),%edx
 sub    %ecx,%eax
 sbb    %ebx,%edx
 mov    %eax,-0x10(%ebp)
 mov    %edx,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-js     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x20c>
+js     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x1d2>
 cmpl   $0x0,-0xc(%ebp)
-jg     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x1ea>
+jg     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x1b0>
 cmpl   $0x1f4,-0x10(%ebp)
-jbe    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x20c>
+jbe    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x1d2>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp9UDPThread12getUDPSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocket20popMonitorAuthPacketEv>
 mov    0x8(%ebp),%ecx
 mov    -0x18(%ebp),%eax
 mov    -0x14(%ebp),%edx
 mov    %eax,0x24(%ecx)
 mov    %edx,0x28(%ecx)
 movl   $0x1000,0x8(%esp)
 lea    -0x10b4(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0xb4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocket4recvEPci>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-jns    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x256>
+jns    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x21c>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x4(%esp)
 movl   $"[ERROR] UDP Thread Recv Error(%s)",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x290>
+jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x250>
 cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x28f>
+je     <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x250>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    (%eax),%eax
 mov    (%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 movl   $0x0,0xc(%esp)
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x10b4(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ecx
-jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x290>
-nop
-jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x290>
-nop
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Thread13isTerminatingEv>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x176>
+jne    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x13c>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Thread13setTerminatedEv>
-jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x2d1>
+jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x2c5>
+movl   $"failed to set Option Non Blocking",(%esp)
+call   <T> <puts>
+jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x2c5>
+mov    0x8(%ebp),%eax
+mov    0x1c(%eax),%eax
+mov    %eax,0x4(%esp)
+movl   $"failed to bind UDP socket port #%d\n",(%esp)
+call   <T> <printf>
+jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x2c5>
+movl   $"failed to open UDP socket port",(%esp)
+call   <T> <puts>
+jmp    <T> <_ZN15RelayServiceApp9UDPThread4loopEPv+0x2c5>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xb4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocketD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0xb4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocketD1Ev>
 add    $0x10c0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x0805e823) */
/* RelayServiceApp::UDPThread::loop(void*) */

void RelayServiceApp::UDPThread::_ZN15RelayServiceApp9UDPThread4loopEPv(void *param_1)

{
  char cVar1;
  int iVar2;
  UDPSocket *this;
  int *piVar3;
  char *pcVar4;
  longlong lVar5;
  char local_10b8 [4096];
  UDPSocket local_b8 [128];
  epoll_event local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined8 local_1c;
  undefined8 local_14;
  
  local_2c = 0xffffffff;
  local_28 = 1;
  local_2c = epoll_create(1);
  if (local_2c == -1) {
    printf("In %s : Can\'t create epoll device",&loop(void*)::__FUNCTION__);
  }
  UDPSocket::UDPSocket(local_b8);
                    /* try { // try from 0805e6a1 to 0805e8f2 has its CatchHandler @ 0805e8f5 */
  cVar1 = UDPSocket::open(local_b8);
  if (cVar1 == '\x01') {
    cVar1 = UDPSocket::bind(local_b8,(ushort)*(undefined4 *)((int)param_1 + 0x1c),true);
    if (cVar1 == '\x01') {
      cVar1 = UDPSocket::setOptNonBlock(local_b8);
      if (cVar1 == '\x01') {
        printf("succeeded in binding UDP socket port #%d\n",*(undefined4 *)((int)param_1 + 0x1c));
        local_38.events = 1;
        local_38.data.ptr = (void *)UDPSocket::getHandle(local_b8);
        iVar2 = UDPSocket::getHandle(local_b8);
        iVar2 = epoll_ctl(local_2c,1,iVar2,&local_38);
        if (iVar2 < 0) {
          printf("In %s : epoll_ctl error\n",&loop(void*)::__FUNCTION__);
        }
        setUDPSocket(param_1,local_b8);
        while( true ) {
          cVar1 = Thread::isTerminating(param_1);
          if (cVar1 == '\x01') break;
          local_24 = epoll_wait(local_2c,&local_38,local_28,100);
          if (local_24 != 0) {
            iVar2 = G_ScriptData();
            if (*(char *)(iVar2 + 0x34) != '\0') {
              lVar5 = get_ms_tick();
              local_14 = lVar5 - *(longlong *)((int)param_1 + 0x24);
              local_1c = lVar5;
              if (500 < local_14) {
                this = (UDPSocket *)getUDPSocket(param_1);
                UDPSocket::popMonitorAuthPacket(this);
                *(longlong *)((int)param_1 + 0x24) = local_1c;
              }
            }
            local_20 = UDPSocket::recv(local_b8,local_10b8,0x1000);
            if (local_20 < 0) {
              piVar3 = __errno_location();
              pcVar4 = strerror(*piVar3);
              printf("[ERROR] UDP Thread Recv Error(%s)",pcVar4);
            }
            else if (local_20 != 0) {
              (**(code **)**(undefined4 **)((int)param_1 + 0x18))
                        (*(undefined4 *)((int)param_1 + 0x18),local_10b8,local_20,0);
            }
          }
        }
        Thread::setTerminated(param_1);
      }
      else {
        puts("failed to set Option Non Blocking");
      }
    }
    else {
      printf("failed to bind UDP socket port #%d\n",*(undefined4 *)((int)param_1 + 0x1c));
    }
  }
  else {
    puts("failed to open UDP socket port");
  }
  UDPSocket::~UDPSocket(local_b8);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/UDPThread.cpp](source/ChannelOld/DNFChannelBridge/UDPThread.cpp)（约第 22 行）：

```cpp
void ChannelServiceApp::UDPThread::loop(void* temp)
{
    puts("Start up UDPThread");
    UDPSocket sUDP;
    if (!sUDP.open())
    {
        puts("failed to open UDP socket port");
        return;
    }
    if (!sUDP.bind((unsigned short)nPort_, true))
    {
        printf("failed to bind UDP socket port #%d\n", nPort_);
        return;
    }
    printf("succeeded in binding UDP socket port! #%d\n", nPort_);
    while (!isTerminating())
    {
        TSystem<LinuxSystem>::usleep(10);
        char recv_buf[0x1000];
        int nRead = sUDP.recv(recv_buf, 0x1000);
        if (nRead < 0)
        {
            printf("[ERROR] UDP Thread Recv Error(%s)", strerror(errno));
        }
        else if (nRead != 0)
        {
            pHandler_->dispatch(recv_buf, nRead, 0);
        }
    }
    setTerminated();
}
```
