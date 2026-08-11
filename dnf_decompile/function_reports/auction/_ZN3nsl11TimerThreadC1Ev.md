# _ZN3nsl11TimerThreadC1Ev

`nsl::TimerThread::TimerThread()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80b4040` | `0xbc` | `0x80b2b78` | `0xbc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,63 +1,63 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6ThreadC1Ev>
 mov    0x8(%ebp),%eax
+movl   $&_ZTVN3nsl11TimerThreadE+0x8,(%eax)
+mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TimeManagerC1Ev>
-mov    0x8(%ebp),%eax
-movl   $&_ZTVN3nsl11TimerThreadE+0x8,(%eax)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl11ITimeEntityESaIS2_EEC1Ev>
 mov    0x8(%ebp),%eax
 lea    0x4c(%eax),%edx
 lea    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt5queueIPN3nsl11ITimeEntityESt5dequeIS2_SaIS2_EEEC1EOS5_>
 jmp    <T> <_ZN3nsl11TimerThreadC1Ev+0x61>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl11ITimeEntityESaIS2_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN3nsl11TimerThreadC1Ev+0x89>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl11ITimeEntityESaIS2_EED1Ev>
 mov    0x8(%ebp),%eax
 add    $0x74,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <pthread_mutex_init>
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TimeManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN3nsl11TimerThreadC1Ev+0xa1>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6ThreadD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void TimerThread(TimerThread * this) */

void __thiscall nsl::TimerThread::_ZN3nsl11TimerThreadC1Ev(TimerThread *this)

{
  deque<nsl::ITimeEntity*,_std::allocator<nsl::ITimeEntity*>_> *__c;
  deque<nsl::ITimeEntity*,_std::allocator<nsl::ITimeEntity*>_> local_34;
  
  Thread::Thread(&this->super_Thread);
                    /* try { // try from 080b405c to 080b4060 has its CatchHandler @ 080b40e1 */
  TimeManager::TimeManager(&this->super_TimeManager);
  (this->super_Thread)._vptr_Thread = (_func_int_varargs **)&PTR__TimerThread_08161710;
                    /* try { // try from 080b4070 to 080b4074 has its CatchHandler @ 080b40c9 */
  std::deque<nsl::ITimeEntity*,_std::allocator<nsl::ITimeEntity*>_>::deque(&local_34);
  __c = &local_34;
                    /* try { // try from 080b4085 to 080b4089 has its CatchHandler @ 080b408c */
  std::queue<nsl::ITimeEntity*,_std::deque<nsl::ITimeEntity*,_std::allocator<nsl::ITimeEntity*>_>_>
  ::queue(&this->timeReqQueue,__c);
                    /* try { // try from 080b40a7 to 080b40ab has its CatchHandler @ 080b40c9 */
  std::deque<nsl::ITimeEntity*,_std::allocator<nsl::ITimeEntity*>_>::~deque(&local_34,(int)__c);
  pthread_mutex_init((pthread_mutex_t *)&this->timerLock,(pthread_mutexattr_t *)0x0);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TimerThread.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TimerThread.cpp)（约第 10 行）：

```cpp
TimerThread::TimerThread()
    : timeReqQueue()
{
    pthread_mutex_init(&timerLock, NULL);
}
```
