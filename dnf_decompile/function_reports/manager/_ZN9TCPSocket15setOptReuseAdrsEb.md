# _ZN9TCPSocket15setOptReuseAdrsEb

`TCPSocket::setOptReuseAdrs(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8054f32` | `0x6a` | `0x80621ce` | `0x62` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
-movl   $0x0,-0xc(%ebp)
 cmpb   $0x0,-0x1c(%ebp)
-je     <T> <_ZN9TCPSocket15setOptReuseAdrsEb+0x22>
-movl   $0x1,-0xc(%ebp)
-jmp    <T> <_ZN9TCPSocket15setOptReuseAdrsEb+0x29>
-movl   $0x0,-0xc(%ebp)
+je     <T> <_ZN9TCPSocket15setOptReuseAdrsEb+0x19>
+mov    $0x1,%eax
+jmp    <T> <_ZN9TCPSocket15setOptReuseAdrsEb+0x1e>
+mov    $0x0,%eax
+mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $0x4,0x10(%esp)
 lea    -0xc(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0x2,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <setsockopt>
 shr    $0x1f,%eax
 test   %al,%al
-je     <T> <_ZN9TCPSocket15setOptReuseAdrsEb+0x63>
+je     <T> <_ZN9TCPSocket15setOptReuseAdrsEb+0x5b>
 mov    $0x0,%eax
-jmp    <T> <_ZN9TCPSocket15setOptReuseAdrsEb+0x68>
+jmp    <T> <_ZN9TCPSocket15setOptReuseAdrsEb+0x60>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::setOptReuseAdrs(bool) */

bool __thiscall TCPSocket::_ZN9TCPSocket15setOptReuseAdrsEb(TCPSocket *this,bool param_1)

{
  int iVar1;
  uint local_10 [3];
  
  local_10[0] = (uint)param_1;
  iVar1 = setsockopt(*(int *)this,1,2,local_10,4);
  return -1 < iVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp](source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp)（约第 151 行）：

```cpp
char TCPSocket::setOptReuseAdrs(bool flag)
{
    int opt = flag ? 1 : 0;
    if (setsockopt(m_fd, SOL_SOCKET, SO_REUSEADDR, &opt, 4) < 0)
        return 0;
    return 1;
}
```
