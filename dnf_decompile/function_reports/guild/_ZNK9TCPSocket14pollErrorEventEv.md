# _ZNK9TCPSocket14pollErrorEventEv

`TCPSocket::pollErrorEvent() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804f9ca` | `0x113` | `0x808708e` | `0x106` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,79 +1,71 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0xcc,%esp
-lea    -0xac(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZNK9TCPSocket14pollErrorEventEv+0x2f>
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%eax
-movl   $0x0,(%eax,%edx,4)
-addl   $0x1,-0x20(%ebp)
-cmpl   $0x1f,-0x20(%ebp)
+sub    $0xc0,%esp
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZNK9TCPSocket14pollErrorEventEv+0x26>
+mov    -0xc(%ebp),%eax
+movl   $0x0,-0x98(%ebp,%eax,4)
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x1f,-0xc(%ebp)
 setbe  %al
 test   %al,%al
-jne    <T> <_ZNK9TCPSocket14pollErrorEventEv+0x1e>
+jne    <T> <_ZNK9TCPSocket14pollErrorEventEv+0x14>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,%edx
 shr    $0x5,%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-shr    $0x5,%eax
-mov    -0xac(%ebp,%eax,4),%ebx
+and    $0x1f,%eax
+mov    $0x1,%ebx
+mov    %ebx,%esi
+mov    %eax,%ecx
+shl    %cl,%esi
+mov    %esi,-0x9c(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-and    $0x1f,%eax
-mov    $0x1,%esi
-mov    %esi,%edi
-mov    %eax,%ecx
-shl    %cl,%edi
-mov    %edi,%eax
-or     %ebx,%eax
-mov    %eax,-0xac(%ebp,%edx,4)
-movl   $0x1,-0x2c(%ebp)
-movl   $0x0,-0x28(%ebp)
-movl   $0x0,-0x24(%ebp)
-lea    -0x2c(%ebp),%eax
+shr    $0x5,%eax
+mov    -0x98(%ebp,%eax,4),%eax
+or     -0x9c(%ebp),%eax
+mov    %eax,-0x98(%ebp,%edx,4)
+movl   $0x1,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
+lea    -0x18(%ebp),%eax
 mov    %eax,0x10(%esp)
-lea    -0xac(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $0x0,0x8(%esp)
 movl   $0x0,0x4(%esp)
 movl   $0x2,(%esp)
 call   <T> <select>
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZNK9TCPSocket14pollErrorEventEv+0xe6>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jns    <T> <_ZNK9TCPSocket14pollErrorEventEv+0xda>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x4(%esp)
 movl   $"pollErrorEvent(%s)",(%esp)
 call   <T> <printf>
 mov    $0x0,%eax
-jmp    <T> <_ZNK9TCPSocket14pollErrorEventEv+0x108>
+jmp    <T> <_ZNK9TCPSocket14pollErrorEventEv+0xfc>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 shr    $0x5,%eax
-mov    -0xac(%ebp,%eax,4),%edx
+mov    -0x98(%ebp,%eax,4),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 and    $0x1f,%eax
 mov    %edx,%ebx
 mov    %eax,%ecx
 sar    %cl,%ebx
 mov    %ebx,%eax
 and    $0x1,%eax
-add    $0xcc,%esp
+add    $0xc0,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::pollErrorEvent() const */

uint __thiscall TCPSocket::_ZNK9TCPSocket14pollErrorEventEv(TCPSocket *this)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  fd_set local_b0;
  timeval local_30;
  int local_28;
  uint local_24;
  fd_set *local_20;
  
  local_20 = &local_b0;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_b0.fds_bits[local_24] = 0;
  }
  local_b0.fds_bits[*(uint *)this >> 5] =
       1 << ((byte)*(undefined4 *)this & 0x1f) | local_b0.fds_bits[*(uint *)this >> 5];
  local_30.tv_sec = 1;
  local_30.tv_usec = 0;
  local_28 = 0;
  local_28 = select(2,(fd_set *)0x0,(fd_set *)0x0,&local_b0,&local_30);
  if (local_28 < 0) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    printf("pollErrorEvent(%s)",pcVar2);
    uVar3 = 0;
  }
  else {
    uVar3 = local_b0.fds_bits[*(uint *)this >> 5] >> ((byte)*(undefined4 *)this & 0x1f) & 1;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp](source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp)（约第 201 行）：

```cpp
char TCPSocket::pollErrorEvent() const
{
    fd_set exceptfds;
    FD_ZERO(&exceptfds);
    FD_SET(m_fd, &exceptfds);
    struct timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    int ret = select(2, 0, 0, &exceptfds, &tv);
    if (ret < 0)
    {
        printf("pollErrorEvent(%s)", strerror(errno));
        return 0;
    }
    return FD_ISSET(m_fd, &exceptfds) ? 1 : 0;
}
```
