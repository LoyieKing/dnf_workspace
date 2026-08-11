# _ZN15RelayServiceApp7TCPUser9getHandleEv

`RelayServiceApp::TCPUser::getHandle()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x80523fc` | `0x27` | `0x805be3a` | `0x27` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN15RelayServiceApp7TCPUser9getHandleEv+0x20>
+jne    <T> <_ZN15RelayServiceApp7TCPUser9getHandleEv+0x17>
+mov    $0x0,%eax
+jmp    <T> <_ZN15RelayServiceApp7TCPUser9getHandleEv+0x25>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
-jmp    <T> <_ZN15RelayServiceApp7TCPUser9getHandleEv+0x25>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::TCPUser::getHandle() */

undefined4 __thiscall
RelayServiceApp::TCPUser::_ZN15RelayServiceApp7TCPUser9getHandleEv(TCPUser *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x1c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = TCPSocket::getHandle(*(TCPSocket **)(this + 0x1c));
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPUser.cpp](source/ChannelOld/DNFChannelBridge/TCPUser.cpp)（约第 256 行）：

```cpp
    else if (0 > pSock_->getHandle())
    {
        GLOG(ChannelServiceApp::gFileLogInfo, "onWrite_ : Error(2)");
    }
```
