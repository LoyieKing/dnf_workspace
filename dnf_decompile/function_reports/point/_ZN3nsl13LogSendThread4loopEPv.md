# _ZN3nsl13LogSendThread4loopEPv

`nsl::LogSendThread::loop(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80b9e64` | `0x1ac` | `0x807c598` | `0x1ac` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,120 +1,118 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TThreadLockINS_16ThreadLock_linuxEE4lockEv>
 mov    0x8(%ebp),%eax
 add    $0x4c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5dequeIPN3nsl7MessageESaIS2_EE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl13LogSendThread4loopEPv+0x6d>
+je     <T> <_ZN3nsl13LogSendThread4loopEPv+0x18d>
 mov    0x8(%ebp),%eax
 add    $0x4c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EE5frontEv>
 mov    (%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x4c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EE9pop_frontEv>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TThreadLockINS_16ThreadLock_linuxEE6unlockEv>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser19isAboutToDisconnectEv>
 test   %al,%al
-jne    <T> <_ZN3nsl13LogSendThread4loopEPv+0x9e>
-jmp    <T> <_ZN3nsl13LogSendThread4loopEPv+0x8c>
-mov    0x8(%ebp),%eax
-add    $0x18,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl11TThreadLockINS_16ThreadLock_linuxEE6unlockEv>
-movl   $0x3e8,(%esp)
-call   <T> <_ZN3nsl7TSystemINS_11LinuxSystemEE5sleepEi>
-jmp    <T> <_ZN3nsl13LogSendThread4loopEPv+0x1a7>
+jne    <T> <_ZN3nsl13LogSendThread4loopEPv+0x81>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser14isDisconnectedEv>
 test   %al,%al
-je     <T> <_ZN3nsl13LogSendThread4loopEPv+0xa5>
+je     <T> <_ZN3nsl13LogSendThread4loopEPv+0x88>
 mov    $0x1,%eax
-jmp    <T> <_ZN3nsl13LogSendThread4loopEPv+0xaa>
+jmp    <T> <_ZN3nsl13LogSendThread4loopEPv+0x8d>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN3nsl13LogSendThread4loopEPv+0xe0>
+je     <T> <_ZN3nsl13LogSendThread4loopEPv+0xc3>
 mov    -0x10(%ebp),%ebx
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool17destroyLogMessageEPNS_7MessageE>
 movl   $0x3e8,(%esp)
 call   <T> <_ZN3nsl7TSystemINS_11LinuxSystemEE5sleepEi>
 nop
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser13onWriteByCMsgEPNS_8CMsgCellE>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN3nsl13LogSendThread4loopEPv+0x183>
+je     <T> <_ZN3nsl13LogSendThread4loopEPv+0x169>
 mov    -0x10(%ebp),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18setOffDataTypeMaskEi>
 mov    -0x10(%ebp),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message17setOnDataTypeMaskEi>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl8CMsgCell7GetSizeEv>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"Would block 이므로 다시 큐에 넣는다. size=%d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 lea    0x4c(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EE10push_frontERKS2_>
 movl   $0x3e8,(%esp)
 call   <T> <_ZN3nsl7TSystemINS_11LinuxSystemEE5sleepEi>
-jmp    <T> <_ZN3nsl13LogSendThread4loopEPv+0x1a7>
+jmp    <T> <_ZN3nsl13LogSendThread4loopEPv+0x7>
 mov    -0x10(%ebp),%ebx
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool17destroyLogMessageEPNS_7MessageE>
 jmp    <T> <_ZN3nsl13LogSendThread4loopEPv+0x7>
+mov    0x8(%ebp),%eax
+add    $0x18,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl11TThreadLockINS_16ThreadLock_linuxEE6unlockEv>
+movl   $0x3e8,(%esp)
+call   <T> <_ZN3nsl7TSystemINS_11LinuxSystemEE5sleepEi>
 jmp    <T> <_ZN3nsl13LogSendThread4loopEPv+0x7>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void loop(LogSendThread * this, void * temp) */

void __thiscall nsl::LogSendThread::_ZN3nsl13LogSendThread4loopEPv(LogSendThread *this,void *temp)

{
  Message *pMVar1;
  bool bVar2;
  Message **ppMVar3;
  DataPool *pDVar4;
  int iVar5;
  TraceLog *this_00;
  Message *local_14;
  CMsgCell *local_10;
  
  while( true ) {
    while( true ) {
                    /* Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
      TThreadLock<nsl::ThreadLock_linux>::lock(&this->mThreadLock);
      bVar2 = std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::empty
                        (&this->mLogMessagePool);
      if (!bVar2) break;
      TThreadLock<nsl::ThreadLock_linux>::unlock(&this->mThreadLock);
      TSystem<nsl::LinuxSystem>::sleep(1000);
    }
    ppMVar3 = std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::front
                        (&this->mLogMessagePool);
    local_14 = *ppMVar3;
    std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::pop_front(&this->mLogMessagePool);
    TThreadLock<nsl::ThreadLock_linux>::unlock(&this->mThreadLock);
    bVar2 = TCPUser::isAboutToDisconnect(this->mLogUser);
    if ((bVar2) || (bVar2 = TCPUser::isDisconnected(this->mLogUser), bVar2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    pMVar1 = local_14;
    if (bVar2) break;
    local_10 = Message::getCellFromMessage(local_14);
    iVar5 = TCPUser::onWriteByCMsg(this->mLogUser,local_10);
    pMVar1 = local_14;
    if (iVar5 == 0) {
      Message::setOffDataTypeMask(local_14,0);
      Message::setOnDataTypeMask(local_14,0);
      iVar5 = CMsgCell::GetSize(local_10);
      this_00 = G_TraceLog();
      TraceLog::sysLog(this_00,7,&DAT_0816277c,iVar5);
      std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::push_front
                (&this->mLogMessagePool,&local_14);
      TSystem<nsl::LinuxSystem>::sleep(1000);
    }
    else {
      pDVar4 = DataPools::getDataPool(&pApp->super_DataPools);
      DataPool::destroyLogMessage(pDVar4,pMVar1);
    }
  }
  pDVar4 = DataPools::getDataPool(&pApp->super_DataPools);
  DataPool::destroyLogMessage(pDVar4,pMVar1);
  TSystem<nsl::LinuxSystem>::sleep(1000);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/LogSendThread.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/LogSendThread.cpp)（约第 25 行）：

```cpp
void LogSendThread::loop(void* temp)
{
    Message* msg;
    while (true)
    {
        mThreadLock.lock();
        // ORIG: empty(); xor $1; je empty_path  => if (!empty()) process else empty
        if (!mLogMessagePool.empty())
        {
            msg = mLogMessagePool.front();
            mLogMessagePool.pop_front();
            mThreadLock.unlock();
            // ORIG || expansion: about? -> true; else check disconnected -> 0/1; test
            if (mLogUser->isAboutToDisconnect() || mLogUser->isDisconnected())
            {
                pApp->super_DataPools.getDataPool()->destroyLogMessage(msg);
                TSystem<LinuxSystem>::sleep(1000);
                return;
            }
            CMsgCell* cell = msg->getCellFromMessage();
            if (mLogUser->onWriteByCMsg(cell) == 0)
            {
                msg->setOffDataTypeMask(0);
                msg->setOnDataTypeMask(0);
                G_TraceLog()->sysLog(7, "Would block \xC0\xCC\xB9\xC7\xB7\xCE \xB4\xD9\xBD\xC3 \xC5\xA5\xBF\xA1 \xB3\xD6\xB4\xC2\xB4\xD9. size=%d", cell->GetSize());
                mLogMessagePool.push_front(msg);
                TSystem<LinuxSystem>::sleep(1000);
            }
            else
            {
                pApp->super_DataPools.getDataPool()->destroyLogMessage(msg);
            }
        }
        else
        {
            mThreadLock.unlock();
            TSystem<LinuxSystem>::sleep(1000);
        }
    }
}
```
