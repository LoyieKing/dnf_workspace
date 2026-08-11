# _ZN9TCPSocket12setOptLingerEb

`TCPSocket::setOptLinger(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804f658` | `0x69` | `0x8086d3a` | `0x53` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,29 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
-cmpb   $0x0,-0x1c(%ebp)
-je     <T> <_ZN9TCPSocket12setOptLingerEb+0x19>
-mov    $0x1,%eax
-jmp    <T> <_ZN9TCPSocket12setOptLingerEb+0x1e>
-mov    $0x0,%eax
-mov    %eax,-0x10(%ebp)
-movl   $0x0,-0xc(%ebp)
+movzbl -0x1c(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $0x8,0x10(%esp)
-lea    -0x10(%ebp),%edx
+lea    -0x14(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0xd,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <setsockopt>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+not    %eax
 shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN9TCPSocket12setOptLingerEb+0x62>
-mov    $0x0,%eax
-jmp    <T> <_ZN9TCPSocket12setOptLingerEb+0x67>
-mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::setOptLinger(bool) */

bool __thiscall TCPSocket::_ZN9TCPSocket12setOptLingerEb(TCPSocket *this,bool param_1)

{
  int iVar1;
  uint local_14 [4];
  
  local_14[0] = (uint)param_1;
  local_14[1] = 0;
  iVar1 = setsockopt(*(int *)this,1,0xd,local_14,8);
  return -1 < iVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp](source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp)（约第 158 行）：

```cpp
char TCPSocket::setOptLinger(bool flag)
{
    struct linger linger;
    linger.l_onoff = flag ? 1 : 0;
    linger.l_linger = 0;
    if (setsockopt(m_fd, SOL_SOCKET, SO_LINGER, &linger, 8) < 0)
        return 0;
    return 1;
}
```
