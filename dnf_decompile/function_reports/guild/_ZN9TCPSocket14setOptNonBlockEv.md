# _ZN9TCPSocket14setOptNonBlockEv

`TCPSocket::setOptNonBlock()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804f590` | `0x5e` | `0x8086aba` | `0x54` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $0x0,0x8(%esp)
 movl   $0x3,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <fcntl>
-mov    %eax,-0xc(%ebp)
-orl    $0x800,-0xc(%ebp)
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %eax,%edx
+or     $0x8,%dh
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-mov    -0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 movl   $0x4,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <fcntl>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+not    %eax
 shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN9TCPSocket14setOptNonBlockEv+0x57>
-mov    $0x0,%eax
-jmp    <T> <_ZN9TCPSocket14setOptNonBlockEv+0x5c>
-mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::setOptNonBlock() */

bool __thiscall TCPSocket::_ZN9TCPSocket14setOptNonBlockEv(TCPSocket *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(*(int *)this,3,0);
  iVar2 = fcntl(*(int *)this,4,uVar1 | 0x800);
  return -1 < iVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFTcpSocket.cpp](source/DNFServer/GameServer/Guild/DNFTcpSocket.cpp)（约第 207 行）：

```cpp
bool TCPSocket::setOptNonBlock()
{
    int flags = fcntl(m_sock, 3, 0);
    int r = fcntl(m_sock, 4, flags | 0x800);
    return -1 < r;
}
```
