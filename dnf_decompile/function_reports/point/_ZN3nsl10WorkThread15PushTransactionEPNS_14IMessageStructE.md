# _ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE

`nsl::WorkThread::PushTransaction(nsl::IMessageStruct*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80b6e7c` | `0x195` | `0x80b693e` | `0x1ab` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,110 +1,118 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <pthread_mutex_lock>
 mov    0xc(%ebp),%eax
 movzbl 0x6(%eax),%eax
 movsbl %al,%eax
 sub    $0x1,%eax
 cmp    $0x2,%eax
 ja     <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE+0x43>
 mov    0x8(%ebp),%eax
 lea    0x14(%eax),%edx
 lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt5queueIPN3nsl14IMessageStructESt5dequeIS2_SaIS2_EEE4pushERKS2_>
-jmp    <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE+0x15a>
+jmp    <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE+0x170>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getUserFromMessageEv>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser19isAboutToDisconnectEv>
 test   %al,%al
 jne    <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE+0x6f>
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser14isDisconnectedEv>
 test   %al,%al
 je     <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE+0x76>
 mov    $0x1,%eax
 jmp    <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE+0x7b>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE+0xe5>
 movl   $0x0,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser10SetWorkingEb>
 mov    0xc(%ebp),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message6setUseEb>
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <pthread_cond_signal>
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <pthread_mutex_unlock>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"161don't put this user",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE+0x18d>
+jmp    <T> <_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE+0x1a3>
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser17IncPendingWorkNumEv>
 movl   $0x1,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser10SetWorkingEb>
 mov    0x8(%ebp),%eax
 lea    0x14(%eax),%edx
 lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt5queueIPN3nsl14IMessageStructESt5dequeIS2_SaIS2_EEE4pushERKS2_>
-mov    &_ZN3nsl7Message5identE,%ebx
-mov    &_ZN3nsl7Message5identE+0x4,%esi
+mov    &_ZN3nsl7Message5identE,%eax
+mov    &_ZN3nsl7Message5identE+0x4,%edx
+mov    %eax,%ebx
+mov    &_ZN3nsl7Message5identE,%eax
+mov    &_ZN3nsl7Message5identE+0x4,%edx
+mov    %edx,%eax
+xor    %edx,%edx
+mov    %eax,%esi
+mov    %esi,%edi
+mov    %ebx,%esi
 mov    -0x1c(%ebp),%eax
-mov    0x30(%eax),%edi
+mov    0x30(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %ebx,0x14(%esp)
-mov    %esi,0x18(%esp)
-mov    %edi,0x10(%esp)
+mov    %edi,0x18(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
 mov    -0x1c(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $"RECV PUSH USER=%x, ID=%d, msg=%d",0x8(%esp)
 movl   $0x4,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    0xc0(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc0(%eax)
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <pthread_cond_signal>
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <pthread_mutex_unlock>
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void PushTransaction(WorkThread * this, IMessageStruct * pMessage) */

void __thiscall
nsl::WorkThread::_ZN3nsl10WorkThread15PushTransactionEPNS_14IMessageStructE
          (WorkThread *this,IMessageStruct *pMessage)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  TCPUser *this_00;
  TraceLog *pTVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)&this->workerLock);
  if ((int)pMessage->mMsgType - 1U < 3) {
    std::
    queue<nsl::IMessageStruct*,_std::deque<nsl::IMessageStruct*,_std::allocator<nsl::IMessageStruct*>_>_>
    ::push(&this->orderQueue,&pMessage);
  }
  else {
                    /* Unresolved local var: TCPUser * u@[???] */
    this_00 = Message::getUserFromMessage((Message *)pMessage);
    bVar4 = TCPUser::isAboutToDisconnect(this_00);
    if ((bVar4) || (bVar4 = TCPUser::isDisconnected(this_00), bVar4)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      TCPUser::SetWorking(this_00,false);
      Message::setUse((Message *)pMessage,false);
      pthread_cond_signal((pthread_cond_t *)&this->isEmpty);
      pthread_mutex_unlock((pthread_mutex_t *)&this->workerLock);
      pTVar5 = G_TraceLog();
      TraceLog::sysLog(pTVar5,8,"161don\'t put this user");
      return;
    }
    TCPUser::IncPendingWorkNum(this_00);
    TCPUser::SetWorking(this_00,true);
    std::
    queue<nsl::IMessageStruct*,_std::deque<nsl::IMessageStruct*,_std::allocator<nsl::IMessageStruct*>_>_>
    ::push(&this->orderQueue,&pMessage);
    uVar3 = Message::ident._4_4_;
    uVar2 = (undefined4)Message::ident;
    uVar1 = this_00->mUserId;
    pTVar5 = G_TraceLog();
    TraceLog::sysLog(pTVar5,4,"RECV PUSH USER=%x, ID=%d, msg=%d",this_00,uVar1,uVar2,uVar3);
  }
  this->mQueueSize = this->mQueueSize + 1;
  pthread_cond_signal((pthread_cond_t *)&this->isEmpty);
  pthread_mutex_unlock((pthread_mutex_t *)&this->workerLock);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/WorkThread.cpp, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/GetMessageBuffer.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/GlobalInstance.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/Script.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/System.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/TCPUser.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/Thread.h 等 585 个文件*
