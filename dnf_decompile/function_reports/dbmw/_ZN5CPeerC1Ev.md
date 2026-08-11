# _ZN5CPeerC1Ev

`CPeer::CPeer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8059b4a` | `0x7b` | `0x80985d8` | `0x33` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketC1Ev>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x181c(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1820(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1824(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1828(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x182c(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1830(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1834(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1838(%eax)
+add    $0x181c,%eax
+movl   $0x20,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPeer::CPeer() */

void __thiscall CPeer::_ZN5CPeerC1Ev(CPeer *this)

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

定义于 [source/DNFServer/GameServer/DBMW/Peer.cpp](source/DNFServer/GameServer/DBMW/Peer.cpp)（约第 28 行）：

```cpp
CPeer::CPeer()
{
    memset(&m_sendBuf, 0, 0x20);
}
```
