# _ZN15RelayServiceApp7TCPUser6onReadEv

`RelayServiceApp::TCPUser::onRead()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805cf04` | `0x85` | `0x805bf6c` | `0x88` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x22>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 test   %eax,%eax
 jns    <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x29>
 mov    $0x1,%eax
 jmp    <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x2e>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x47>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser16postDisconnectedEi>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x83>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x86>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser19isAboutToDisconnectEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x65>
+je     <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x72>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser14isDisconnectedEv>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x6c>
+je     <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x72>
 mov    $0x1,%eax
-jmp    <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x71>
+jmp    <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x77>
 mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x82>
+je     <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x86>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser7onRead_Ev>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser6onReadEv+0x83>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::TCPUser::onRead() */

void __thiscall RelayServiceApp::TCPUser::_ZN15RelayServiceApp7TCPUser6onReadEv(TCPUser *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  if ((*(int *)(this + 0x1c) == 0) ||
     (iVar3 = TCPSocket::getHandle(*(TCPSocket **)(this + 0x1c)), iVar3 < 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    cVar2 = isAboutToDisconnect(this);
    if ((cVar2 == '\0') && (cVar2 = isDisconnected(this), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      onRead_(this);
    }
    return;
  }
  postDisconnected(this,1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPUser.cpp](source/ChannelOld/DNFChannelBridge/TCPUser.cpp)（约第 105 行）：

```cpp
void ChannelServiceApp::TCPUser::onRead(char* file, int line)
{
    if (pSock_->getHandle() < 0)
        return;
    if (isAboutToDisconnect() || isDisconnected())
        return;
    TScopedLock<TThreadLock<ThreadLock_linux> > rlock(lockRecv_);
    onRead_();
}
```
