# _ZN17ChannelServiceApp9UDPThread4loopEPv

`ChannelServiceApp::UDPThread::loop(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | DIFF | `0x805f6ca` | `0x1cd` | `0x805c51a` | `0x1c7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,119 +1,117 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x1040,%esp
 movl   $"Start up UDPThread",(%esp)
 call   <T> <puts>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocketC1Ev>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocket4openEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x45>
 movl   $"failed to open UDP socket port",(%esp)
 call   <T> <puts>
-jmp    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x1b8>
+jmp    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x1b2>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 movzwl %ax,%eax
 movl   $0x1,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocket4bindEtb>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x87>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %eax,0x4(%esp)
 movl   $"failed to bind UDP socket port #%d\n",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x1b8>
+jmp    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x1b2>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %eax,0x4(%esp)
 movl   $"succeeded in binding UDP socket port! #%d\n",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x17a>
+jmp    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x174>
 movl   $0xa,(%esp)
 call   <T> <usleep>
 movl   $0x1000,0x8(%esp)
 lea    -0x1034(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocket4recvEPci>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jns    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0xf8>
+jns    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0xf5>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x4(%esp)
 movl   $"[ERROR] UDP Thread Recv Error(%s)",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x17a>
+jmp    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x174>
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x179>
+je     <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x174>
 movl   $&_ZN17ChannelServiceApp12gFileLogWarnE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"UDP read=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogWarnE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogWarnE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    (%eax),%eax
 mov    (%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 movl   $0x0,0xc(%esp)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x1034(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ecx
-jmp    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x17a>
-nop
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Thread13isTerminatingEv>
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0xa2>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Thread13setTerminatedEv>
-jmp    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x1b8>
+jmp    <T> <_ZN17ChannelServiceApp9UDPThread4loopEPv+0x1b2>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocketD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9UDPSocketD1Ev>
 add    $0x1040,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void loop(UDPThread * this, void * temp) */

void __thiscall
ChannelServiceApp::UDPThread::_ZN17ChannelServiceApp9UDPThread4loopEPv(UDPThread *this,void *temp)

{
  bool bVar1;
  int *piVar2;
  TDebugTrace<char> *pTVar3;
  char *in_stack_ffffefb8;
  char local_1038 [4096];
  UDPSocket local_38;
  int local_10;
  
                    /* Unresolved local var: UDPSocket sUDP@[???] */
  puts("Start up UDPThread");
  UDPSocket::UDPSocket(&local_38);
                    /* try { // try from 0805f6f2 to 0805f864 has its CatchHandler @ 0805f867 */
  bVar1 = UDPSocket::open(&local_38);
  if (bVar1) {
    bVar1 = UDPSocket::bind(&local_38,(ushort)this->nPort_,true);
    if (bVar1) {
      in_stack_ffffefb8 = (char *)this->nPort_;
      printf("succeeded in binding UDP socket port! #%d\n");
      while( true ) {
        bVar1 = Thread::isTerminating(&this->super_Thread);
        if (bVar1) break;
                    /* Unresolved local var: char[4096] recv_buf@[???]
                       Unresolved local var: int nRead@[???] */
        usleep(10);
        in_stack_ffffefb8 = local_1038;
        local_10 = UDPSocket::recv(&local_38,in_stack_ffffefb8,0x1000);
        if (local_10 < 0) {
          piVar2 = __errno_location();
          in_stack_ffffefb8 = strerror(*piVar2);
          printf("[ERROR] UDP Thread Recv Error(%s)");
        }
        else if (local_10 != 0) {
          TDebugTrace<char>::Lock(&gFileLogWarn);
          pTVar3 = TDebugTrace<char>::operator<<(&gFileLogWarn,"UDP read=");
          pTVar3 = TDebugTrace<char>::operator<<(pTVar3,local_10);
          TDebugTrace<char>::operator<<(pTVar3,endl<char>);
          TDebugTrace<char>::Unlock(&gFileLogWarn);
          in_stack_ffffefb8 = local_1038;
          (**this->pHandler_->_vptr_UDPHandler)(this->pHandler_,in_stack_ffffefb8,local_10,0);
        }
      }
      Thread::setTerminated(&this->super_Thread);
    }
    else {
      in_stack_ffffefb8 = (char *)this->nPort_;
      printf("failed to bind UDP socket port #%d\n");
    }
  }
  else {
    puts("failed to open UDP socket port");
  }
  UDPSocket::~UDPSocket(&local_38,(int)in_stack_ffffefb8);
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
