# _ZN3nsl7TCPUserC1Ev

`nsl::TCPUser::TCPUser()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80b2054` | `0x175` | `0x80af6b0` | `0x176` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,101 +1,102 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 add    $0x3c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x64,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EEC1Ev>
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0xd,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0xc,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 mov    0x8(%ebp),%edx
 add    $0x8c,%edx
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl10RecvBufferC1Eii>
 mov    0x8(%ebp),%eax
 add    $0xd8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TThreadLockINS_16ThreadLock_linuxEEC1Ev>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x15(%eax)
 mov    &_ZN3nslL10user_countE,%eax
 add    $0x1,%eax
 mov    %eax,&_ZN3nslL10user_countE
-mov    &_ZN3nslL10user_countE,%edx
+mov    &_ZN3nslL10user_countE,%eax
+mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x30(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1c(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0xf0(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xf8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xf4(%eax)
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0xd,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 mov    0x8(%ebp),%edx
 mov    %eax,0xd4(%edx)
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xd8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TThreadLockINS_16ThreadLock_linuxEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN3nsl7TCPUserC1Ev+0x125>
+jmp    <T> <_ZN3nsl7TCPUserC1Ev+0x126>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x8c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl10RecvBufferD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN3nsl7TCPUserC1Ev+0x13f>
+jmp    <T> <_ZN3nsl7TCPUserC1Ev+0x140>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x64,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN3nsl7TCPUserC1Ev+0x157>
+jmp    <T> <_ZN3nsl7TCPUserC1Ev+0x158>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x3c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeIPN3nsl7MessageESaIS2_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void TCPUser(TCPUser * this) */

void __thiscall nsl::TCPUser::_ZN3nsl7TCPUserC1Ev(TCPUser *this)

{
  Script *pSVar1;
  int iVar2;
  int queueSize;
  
  std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::deque(&this->wouldBlockQueue);
                    /* try { // try from 080b2073 to 080b2077 has its CatchHandler @ 080b21ab */
  std::deque<nsl::Message*,_std::allocator<nsl::Message*>_>::deque(&this->mSendMessageQueue);
                    /* try { // try from 080b2078 to 080b20cc has its CatchHandler @ 080b2193 */
  pSVar1 = G_Script();
  iVar2 = Script::findIntValue(pSVar1,0,0xd);
  pSVar1 = G_Script();
  queueSize = Script::findIntValue(pSVar1,0,0xc);
  RecvBuffer::_ZN3nsl10RecvBufferC2Eii(&this->mRecvBuffer,queueSize,iVar2);
                    /* try { // try from 080b20d8 to 080b20dc has its CatchHandler @ 080b2179 */
  TThreadLock<nsl::ThreadLock_linux>::TThreadLock(&this->mPendingSendLock);
  this->bDisconnected_ = false;
  this->bAboutToDisconnect_ = false;
  user_count = user_count + 1;
  this->mUserId = user_count;
  this->pSession = (ISession *)0x0;
  this->mbBindedSession = false;
  this->mPendingWork = 0;
  this->mPendingSend = 0;
                    /* try { // try from 080b2132 to 080b214e has its CatchHandler @ 080b215f */
  pSVar1 = G_Script();
  iVar2 = Script::findIntValue(pSVar1,0,0xd);
  this->mMaxPacketSize = iVar2;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/TCPUser.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/TCPUser.cpp)（约第 19 行）：

```cpp
TCPUser::TCPUser()
    : mRecvBuffer(G_Script()->findIntValue(0, 0xc), G_Script()->findIntValue(0, 0xd))
{
    bDisconnected_ = false;
    bAboutToDisconnect_ = false;
    user_count = user_count + 1;
    mUserId = user_count;
    pSession = 0;
    mbBindedSession = false;
    mPendingWork = 0;
    mPendingSend = 0;
    mMaxPacketSize = G_Script()->findIntValue(0, 0xd);
}
```
