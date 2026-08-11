# _ZN9TCPSocketC2Ev

`TCPSocket::TCPSocket()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804f334` | `0x56` | `0x808525c` | `0x58` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0xffffffff,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 movl   $0x4,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 movl   $0x10,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
-movw   $0x0,0x18(%eax)
+add    $0x18,%eax
+movw   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::TCPSocket() */

void __thiscall TCPSocket::_ZN9TCPSocketC2Ev(TCPSocket *this)

{
  *(undefined4 *)this = 0xffffffff;
  memset(this + 0x14,0,4);
  memset(this + 4,0,0x10);
  *(undefined2 *)(this + 0x18) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp](source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp)（约第 26 行）：

```cpp
TCPSocket::TCPSocket()
{
    m_fd = -1;
    memset(&m_addr, 0, 4);
    memset(&m_data4, 0, 0x10);
    m_port = 0;
}
```
