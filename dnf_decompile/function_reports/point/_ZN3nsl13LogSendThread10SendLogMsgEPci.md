# _ZN3nsl13LogSendThread10SendLogMsgEPci

`nsl::LogSendThread::SendLogMsg(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80b9d88` | `0xdc` | `0x807c76e` | `0xdd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x34,%esp
-lea    -0x1e(%ebp),%eax
+sub    $0x38,%esp
+lea    -0x22(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl18PCK_CS_POSTING_LOGC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TThreadLockINS_16ThreadLock_linuxEE4lockEv>
 mov    0x8(%ebp),%eax
-mov    0x30(%eax),%ebx
+mov    0x30(%eax),%eax
+mov    %eax,-0x10(%ebp)
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPools11getDataPoolEv>
-mov    %ebx,0x4(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool13getLogMessageEPNS_7TCPUserE>
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TThreadLockINS_16ThreadLock_linuxEE6unlockEv>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0xc(%ebp)
-lea    -0x1e(%ebp),%eax
+lea    -0x22(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0xc(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell12AttachStreamEPci>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TThreadLockINS_16ThreadLock_linuxEE4lockEv>
 mov    0x8(%ebp),%eax
 lea    0x4c(%eax),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EE9push_backERKS2_>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TThreadLockINS_16ThreadLock_linuxEE6unlockEv>
-add    $0x34,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void SendLogMsg(LogSendThread * this, char * buf, int len) */

void __thiscall
nsl::LogSendThread::_ZN3nsl13LogSendThread10SendLogMsgEPci(LogSendThread *this,char *buf,int len)

{
  TCPUser *u;
  DataPool *this_00;
  Message *local_28;
  PACKET_HEADER local_22;
  CMsgCell *local_10;
  
                    /* Unresolved local var: PCK_CS_POSTING_LOG pck@[???]
                       Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * pMsg@[???] */
  PCK_CS_POSTING_LOG::PCK_CS_POSTING_LOG((PCK_CS_POSTING_LOG *)&local_22);
  TThreadLock<nsl::ThreadLock_linux>::lock(&this->mThreadLock);
  u = this->mLogUser;
  this_00 = DataPools::getDataPool(&pApp->super_DataPools);
  local_28 = DataPool::getLogMessage(this_00,u);
  TThreadLock<nsl::ThreadLock_linux>::unlock(&this->mThreadLock);
  local_10 = Message::getCellFromMessage(local_28);
  CMsgCell::operator<<(local_10,&local_22);
  local_10 = Message::getCellFromMessage(local_28);
  CMsgCell::AttachStream(local_10,buf,len);
  CMsgCell::PAD(local_10);
  TThreadLock<nsl::ThreadLock_linux>::lock(&this->mThreadLock);
  std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::push_back
            (&this->mLogMessagePool,&local_28);
  TThreadLock<nsl::ThreadLock_linux>::unlock(&this->mThreadLock);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/LogSendThread.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/LogSendThread.cpp)（约第 72 行）：

```cpp
void LogSendThread::SendLogMsg(char* buf, int len)
{
    PCK_CS_POSTING_LOG pck;
    mThreadLock.lock();
    TCPUser* u = mLogUser;
    Message* msg = pApp->super_DataPools.getDataPool()->getLogMessage(u);
    mThreadLock.unlock();
    CMsgCell* pMsg = msg->getCellFromMessage();
    *pMsg << &pck;
    pMsg = msg->getCellFromMessage();
    pMsg->AttachStream(buf, len);
    pMsg->PAD();
    mThreadLock.lock();
    mLogMessagePool.push_back(msg);
    mThreadLock.unlock();
}
```
