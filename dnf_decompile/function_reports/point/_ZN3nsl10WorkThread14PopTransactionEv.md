# _ZN3nsl10WorkThread14PopTransactionEv

`nsl::WorkThread::PopTransaction()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80b7012` | `0xb8` | `0x80b6bc8` | `0xb5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,58 +1,56 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <pthread_mutex_lock>
 jmp    <T> <_ZN3nsl10WorkThread14PopTransactionEv+0x30>
 mov    0x8(%ebp),%eax
 lea    0x48(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <pthread_cond_wait>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIPN3nsl14IMessageStructESt5dequeIS2_SaIS2_EEE4sizeEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 jne    <T> <_ZN3nsl10WorkThread14PopTransactionEv+0x16>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIPN3nsl14IMessageStructESt5dequeIS2_SaIS2_EEE5frontEv>
 mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIPN3nsl14IMessageStructESt5dequeIS2_SaIS2_EEE3popEv>
 mov    -0xc(%ebp),%eax
 movzbl 0x6(%eax),%eax
 movsbl %al,%eax
 sub    $0x1,%eax
 cmp    $0x2,%eax
-jbe    <T> <_ZN3nsl10WorkThread14PopTransactionEv+0x8f>
+jbe    <T> <_ZN3nsl10WorkThread14PopTransactionEv+0x8d>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getUserFromMessageEv>
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser17DecPendingWorkNumEv>
-jmp    <T> <_ZN3nsl10WorkThread14PopTransactionEv+0x90>
-nop
 mov    0x8(%ebp),%eax
 mov    0xc0(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc0(%eax)
 mov    0x8(%ebp),%eax
 add    $0x48,%eax
 mov    %eax,(%esp)
 call   <T> <pthread_mutex_unlock>
 mov    -0xc(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: IMessageStruct * PopTransaction(WorkThread * this) */

IMessageStruct * __thiscall nsl::WorkThread::_ZN3nsl10WorkThread14PopTransactionEv(WorkThread *this)

{
  Message *this_00;
  size_t sVar1;
  IMessageStruct **ppIVar2;
  TCPUser *this_01;
  
                    /* Unresolved local var: IMessageStruct * msg@[???] */
  pthread_mutex_lock((pthread_mutex_t *)&this->workerLock);
  while( true ) {
    sVar1 = std::
            queue<nsl::IMessageStruct*,_std::deque<nsl::IMessageStruct*,_std::allocator<nsl::IMessageStruct*>_>_>
            ::size(&this->orderQueue);
    if (sVar1 != 0) break;
    pthread_cond_wait((pthread_cond_t *)&this->isEmpty,(pthread_mutex_t *)&this->workerLock);
  }
  ppIVar2 = std::
            queue<nsl::IMessageStruct*,_std::deque<nsl::IMessageStruct*,_std::allocator<nsl::IMessageStruct*>_>_>
            ::front(&this->orderQueue);
  this_00 = (Message *)*ppIVar2;
  std::
  queue<nsl::IMessageStruct*,_std::deque<nsl::IMessageStruct*,_std::allocator<nsl::IMessageStruct*>_>_>
  ::pop(&this->orderQueue);
  if (2 < (int)(this_00->super_IMessageStruct).mMsgType - 1U) {
    this_01 = Message::getUserFromMessage(this_00);
    TCPUser::DecPendingWorkNum(this_01);
  }
  this->mQueueSize = this->mQueueSize - 1;
  pthread_mutex_unlock((pthread_mutex_t *)&this->workerLock);
  return &this_00->super_IMessageStruct;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/WorkThread.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/WorkThread.cpp)（约第 92 行）：

```cpp
IMessageStruct* WorkThread::PopTransaction()
{
    pthread_mutex_lock(&workerLock);
    while (orderQueue.size() == 0)
    {
        pthread_cond_wait(&isEmpty, &workerLock);
    }
    Message* msg = (Message*)orderQueue.front();
    orderQueue.pop();
    // ORIG: jbe skip; Dec; jmp join; nop; join: mQueueSize--
    if ((unsigned int)((int)msg->mMsgType - 1) > 2)
    {
        msg->getUserFromMessage()->DecPendingWorkNum();
    }
    mQueueSize = mQueueSize - 1;
    pthread_mutex_unlock(&workerLock);
    return (IMessageStruct*)msg;
}
```
