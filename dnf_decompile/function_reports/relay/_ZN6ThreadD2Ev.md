# _ZN6ThreadD2Ev

`Thread::~Thread()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | NEAR | `0x804bb8c` | `0xda` | `0x805d408` | `0xda` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,70 +1,70 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1c,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV6Thread+0x8,(%eax)
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19TThreadStateControlI11TThreadLockI15ThreadLock_ZeroEE9isStartedEv>
 test   %al,%al
 je     <T> <_ZN6ThreadD1Ev+0x3d>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Thread12isTerminatedEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN6ThreadD1Ev+0x3d>
 mov    $0x1,%eax
 jmp    <T> <_ZN6ThreadD1Ev+0x42>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN6ThreadD1Ev+0xb0>
 movl   $0x100c,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
-movl   $"[Thread::~Thread] abnormal destruction. you should terminate the thread,first.",0x4(%esp)
+movl   $&data#f469eef6(.rodata),0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN9ExceptionC1EPKc>
 jmp    <T> <_ZN6ThreadD1Ev+0x7a>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 jmp    <T> <_ZN6ThreadD1Ev+0x92>
 movl   $0x0,0x8(%esp)
 movl   $&_ZTI9Exception,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19TThreadStateControlI11TThreadLockI15ThreadLock_ZeroEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19TThreadStateControlI11TThreadLockI15ThreadLock_ZeroEED1Ev>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN6ThreadD1Ev+0xd2>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 add    $0x1c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x0804bc53) */
/* Thread::~Thread() */

void __thiscall Thread::_ZN6ThreadD2Ev(Thread *this)

{
  bool bVar1;
  char cVar2;
  Exception *this_00;
  
  *(undefined ***)this = &PTR__ZN6ThreadD2Ev_08070860;
                    /* try { // try from 0804bba7 to 0804bbba has its CatchHandler @ 0804bc1e */
  cVar2 = TThreadStateControl<TThreadLock<ThreadLock_Zero>>::isStarted
                    ((TThreadStateControl<TThreadLock<ThreadLock_Zero>> *)(this + 0xc));
  if ((cVar2 == '\0') || (cVar2 = isTerminated(this), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    TThreadStateControl<TThreadLock<ThreadLock_Zero>>::~TThreadStateControl
              ((TThreadStateControl<TThreadLock<ThreadLock_Zero>> *)(this + 0xc));
    return;
  }
  this_00 = (Exception *)__cxa_allocate_exception(0x100c);
                    /* try { // try from 0804bbed to 0804bbf1 has its CatchHandler @ 0804bbf4 */
  Exception::Exception
            (this_00,
             "[Thread::~Thread] abnormal destruction. you should terminate the thread,first.");
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0804bc19 to 0804bc1d has its CatchHandler @ 0804bc1e */
  __cxa_throw(this_00,&Exception::typeinfo,0);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/Thread.cpp](source/DNFServer/GameServer/Relay/Thread.cpp)（约第 12 行）：

```cpp
Thread::~Thread()
{
    if (states_.isStarted() && !isTerminated())
    {
        throw Exception(
            "[Thread::~Thread] abnormal destruction. you should terminate the thread,first.");
    }
}
```
