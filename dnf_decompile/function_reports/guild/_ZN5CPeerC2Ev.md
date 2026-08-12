# _ZN5CPeerC2Ev

`CPeer::CPeer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8050da6` | `0x7b` | `0x8097a64` | `0x83` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,32 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketC1Ev>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x181c(%eax)
+add    $0x181c,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x1820(%eax)
+add    $0x1820,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x1824(%eax)
+add    $0x1824,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x1828(%eax)
+add    $0x1828,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x182c(%eax)
+add    $0x182c,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x1830(%eax)
+add    $0x1830,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x1834(%eax)
+add    $0x1834,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x1838(%eax)
+add    $0x1838,%eax
+movl   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPeer::CPeer() */

void __thiscall CPeer::_ZN5CPeerC2Ev(CPeer *this)

{
  TCPSocket::TCPSocket((TCPSocket *)this);
  *(undefined4 *)(this + 0x181c) = 0;
  *(undefined4 *)(this + 0x1820) = 0;
  *(undefined4 *)(this + 0x1824) = 0;
  *(undefined4 *)(this + 0x1828) = 0;
  *(undefined4 *)(this + 0x182c) = 0;
  *(undefined4 *)(this + 0x1830) = 0;
  *(undefined4 *)(this + 0x1834) = 0;
  *(undefined4 *)(this + 0x1838) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/Peer.cpp](source/DNFServer/GameServer/Guild/Peer.cpp)（约第 108 行）：

```cpp
CPeer::CPeer()
{
    m_buf = 0;
    m_remainLen = 0;
    m_alreadyRead = 0;
    m_recvQ = 0;
    m_bLock = 0;
    m_qLock = 0;
    m_sendRemain = 0;
    m_sendPtr = 0;
}
```
