# _ZNK9TCPSocket21pollReadWriteErrEventEv

`TCPSocket::pollReadWriteErrEvent() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804fade` | `0x255` | `0x808719e` | `0x26a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,178 +1,183 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x1dc,%esp
-lea    -0xc0(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-movl   $0x0,-0x30(%ebp)
-jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x2f>
-mov    -0x30(%ebp),%edx
-mov    -0x2c(%ebp),%eax
+sub    $0x1e4,%esp
+lea    -0xc8(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x2d>
+mov    -0x14(%ebp),%edx
+mov    -0x40(%ebp),%eax
 movl   $0x0,(%eax,%edx,4)
-addl   $0x1,-0x30(%ebp)
-cmpl   $0x1f,-0x30(%ebp)
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x1f,-0x14(%ebp)
 setbe  %al
 test   %al,%al
-jne    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x1e>
-lea    -0x140(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-movl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x5d>
-mov    -0x28(%ebp),%edx
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x1c>
+lea    -0x148(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x5b>
+mov    -0x10(%ebp),%edx
+mov    -0x3c(%ebp),%eax
 movl   $0x0,(%eax,%edx,4)
-addl   $0x1,-0x28(%ebp)
-cmpl   $0x1f,-0x28(%ebp)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x1f,-0x10(%ebp)
 setbe  %al
 test   %al,%al
-jne    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x4c>
-lea    -0x1c0(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x8b>
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%eax
+jne    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x4a>
+lea    -0x1c8(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x89>
+mov    -0xc(%ebp),%edx
+mov    -0x38(%ebp),%eax
 movl   $0x0,(%eax,%edx,4)
-addl   $0x1,-0x20(%ebp)
-cmpl   $0x1f,-0x20(%ebp)
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x1f,-0xc(%ebp)
 setbe  %al
 test   %al,%al
-jne    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x7a>
+jne    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x78>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+shr    $0x5,%eax
+mov    -0xc8(%ebp,%eax,4),%eax
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+and    $0x1f,%eax
+mov    $0x1,%edx
+mov    %edx,%ebx
+mov    %eax,%ecx
+shl    %cl,%ebx
+mov    %ebx,%eax
+mov    %eax,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,%edx
 shr    $0x5,%edx
+mov    -0x34(%ebp),%eax
+mov    -0x30(%ebp),%ecx
+or     %ecx,%eax
+mov    %eax,-0xc8(%ebp,%edx,4)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 shr    $0x5,%eax
-mov    -0xc0(%ebp,%eax,4),%ebx
+mov    -0x148(%ebp,%eax,4),%eax
+mov    %eax,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 and    $0x1f,%eax
-mov    $0x1,%esi
-mov    %esi,%edi
+mov    $0x1,%edx
+mov    %edx,%ebx
 mov    %eax,%ecx
-shl    %cl,%edi
-mov    %edi,%eax
-or     %ebx,%eax
-mov    %eax,-0xc0(%ebp,%edx,4)
+shl    %cl,%ebx
+mov    %ebx,%eax
+mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,%edx
 shr    $0x5,%edx
+mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%ecx
+or     %ecx,%eax
+mov    %eax,-0x148(%ebp,%edx,4)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 shr    $0x5,%eax
-mov    -0x140(%ebp,%eax,4),%ebx
+mov    -0x1c8(%ebp,%eax,4),%eax
+mov    %eax,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 and    $0x1f,%eax
-mov    $0x1,%esi
-mov    %esi,%edi
+mov    $0x1,%edx
+mov    %edx,%ebx
 mov    %eax,%ecx
-shl    %cl,%edi
-mov    %edi,%eax
-or     %ebx,%eax
-mov    %eax,-0x140(%ebp,%edx,4)
+shl    %cl,%ebx
+mov    %ebx,%eax
+mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,%edx
 shr    $0x5,%edx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-shr    $0x5,%eax
-mov    -0x1c0(%ebp,%eax,4),%ebx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-and    $0x1f,%eax
-mov    $0x1,%esi
-mov    %esi,%edi
-mov    %eax,%ecx
-shl    %cl,%edi
-mov    %edi,%eax
-or     %ebx,%eax
-mov    %eax,-0x1c0(%ebp,%edx,4)
-movl   $0x1,-0x40(%ebp)
-movl   $0x0,-0x3c(%ebp)
-movl   $0x0,-0x38(%ebp)
-movl   $0x0,-0x34(%ebp)
-lea    -0x40(%ebp),%eax
+mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+or     %ecx,%eax
+mov    %eax,-0x1c8(%ebp,%edx,4)
+movl   $0x1,-0x48(%ebp)
+movl   $0x0,-0x44(%ebp)
+lea    -0x48(%ebp),%eax
 mov    %eax,0x10(%esp)
-lea    -0x1c0(%ebp),%eax
+lea    -0x1c8(%ebp),%eax
 mov    %eax,0xc(%esp)
-lea    -0x140(%ebp),%eax
+lea    -0x148(%ebp),%eax
 mov    %eax,0x8(%esp)
-lea    -0xc0(%ebp),%eax
+lea    -0xc8(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $0x2,(%esp)
 call   <T> <select>
-mov    %eax,-0x38(%ebp)
-mov    -0x38(%ebp),%eax
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x1bc>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jns    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x1cc>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x4(%esp)
 movl   $"pollReadWriteErrEvent(%s)",(%esp)
 call   <T> <printf>
-mov    -0x38(%ebp),%eax
-jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x24a>
+mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x261>
+movl   $0x0,-0x18(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 shr    $0x5,%eax
-mov    -0xc0(%ebp,%eax,4),%edx
+mov    -0xc8(%ebp,%eax,4),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 and    $0x1f,%eax
 mov    %edx,%ebx
 mov    %eax,%ecx
 sar    %cl,%ebx
 mov    %ebx,%eax
 and    $0x1,%eax
 test   %al,%al
-je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x1eb>
-movl   $0x1,-0x34(%ebp)
-jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x247>
+je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x202>
+movl   $0x1,-0x18(%ebp)
+jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x25e>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 shr    $0x5,%eax
-mov    -0x140(%ebp,%eax,4),%edx
+mov    -0x148(%ebp,%eax,4),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 and    $0x1f,%eax
 mov    %edx,%ebx
 mov    %eax,%ecx
 sar    %cl,%ebx
 mov    %ebx,%eax
 and    $0x1,%eax
 test   %al,%al
-je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x21a>
-movl   $0x2,-0x34(%ebp)
-jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x247>
+je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x231>
+movl   $0x2,-0x18(%ebp)
+jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x25e>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 shr    $0x5,%eax
-mov    -0x1c0(%ebp,%eax,4),%edx
+mov    -0x1c8(%ebp,%eax,4),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 and    $0x1f,%eax
 mov    %edx,%ebx
 mov    %eax,%ecx
 sar    %cl,%ebx
 mov    %ebx,%eax
 and    $0x1,%eax
 test   %al,%al
-je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x247>
-movl   $0x3,-0x34(%ebp)
-mov    -0x34(%ebp),%eax
-add    $0x1dc,%esp
+je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x25e>
+movl   $0x3,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
+add    $0x1e4,%esp
 pop    %ebx
-pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::pollReadWriteErrEvent() const */

int __thiscall TCPSocket::_ZNK9TCPSocket21pollReadWriteErrEventEv(TCPSocket *this)

{
  int *piVar1;
  char *pcVar2;
  fd_set local_1c4;
  fd_set local_144;
  fd_set local_c4;
  timeval local_44;
  int local_3c;
  int local_38;
  uint local_34;
  fd_set *local_30;
  uint local_2c;
  fd_set *local_28;
  uint local_24;
  fd_set *local_20;
  
  local_30 = &local_c4;
  for (local_34 = 0; local_34 < 0x20; local_34 = local_34 + 1) {
    local_c4.fds_bits[local_34] = 0;
  }
  local_28 = &local_144;
  for (local_2c = 0; local_2c < 0x20; local_2c = local_2c + 1) {
    local_144.fds_bits[local_2c] = 0;
  }
  local_20 = &local_1c4;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_1c4.fds_bits[local_24] = 0;
  }
  local_c4.fds_bits[*(uint *)this >> 5] =
       1 << ((byte)*(undefined4 *)this & 0x1f) | local_c4.fds_bits[*(uint *)this >> 5];
  local_144.fds_bits[*(uint *)this >> 5] =
       1 << ((byte)*(undefined4 *)this & 0x1f) | local_144.fds_bits[*(uint *)this >> 5];
  local_1c4.fds_bits[*(uint *)this >> 5] =
       1 << ((byte)*(undefined4 *)this & 0x1f) | local_1c4.fds_bits[*(uint *)this >> 5];
  local_44.tv_sec = 1;
  local_44.tv_usec = 0;
  local_3c = 0;
  local_38 = 0;
  local_3c = select(2,&local_c4,&local_144,&local_1c4,&local_44);
  if (local_3c < 0) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    printf("pollReadWriteErrEvent(%s)",pcVar2);
  }
  else if ((local_c4.fds_bits[*(uint *)this >> 5] >> ((byte)*(undefined4 *)this & 0x1f) & 1U) == 0)
  {
    if ((local_144.fds_bits[*(uint *)this >> 5] >> ((byte)*(undefined4 *)this & 0x1f) & 1U) == 0) {
      local_3c = local_38;
      if ((local_1c4.fds_bits[*(uint *)this >> 5] >> ((byte)*(undefined4 *)this & 0x1f) & 1U) != 0)
      {
        local_38 = 3;
        local_3c = local_38;
      }
    }
    else {
      local_38 = 2;
      local_3c = local_38;
    }
  }
  else {
    local_38 = 1;
    local_3c = local_38;
  }
  return local_3c;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFTcpSocket.cpp](source/DNFServer/GameServer/Guild/DNFTcpSocket.cpp)（约第 377 行）：

```cpp
int TCPSocket::pollReadWriteErrEvent() const
{
    fd_set rfds;
    fd_set wfds;
    fd_set efds;
    fd_set* rp = &rfds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        rp->fds_bits[i] = 0;
    }
    fd_set* wp = &wfds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        wp->fds_bits[i] = 0;
    }
    fd_set* ep = &efds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        ep->fds_bits[i] = 0;
    }
    unsigned int rbits = rfds.fds_bits[(unsigned int)m_sock >> 5];
    unsigned int rmask = (1 << ((unsigned int)m_sock & 0x1f));
    rfds.fds_bits[(unsigned int)m_sock >> 5] = rmask | rbits;
    unsigned int wbits = wfds.fds_bits[(unsigned int)m_sock >> 5];
    unsigned int wmask = (1 << ((unsigned int)m_sock & 0x1f));
    wfds.fds_bits[(unsigned int)m_sock >> 5] = wmask | wbits;
    unsigned int ebits = efds.fds_bits[(unsigned int)m_sock >> 5];
    unsigned int emask = (1 << ((unsigned int)m_sock & 0x1f));
    efds.fds_bits[(unsigned int)m_sock >> 5] = emask | ebits;
    timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    int r = select(2, &rfds, &wfds, &efds, &tv);
    if (r < 0)
    {
        printf("pollReadWriteErrEvent(%s)", strerror(errno));
        return r;
    }
    int result = 0;
    if ((rfds.fds_bits[(unsigned int)m_sock >> 5] >> ((unsigned int)m_sock & 0x1f) & 1U) != 0)
    {
        result = 1;
    }
    else if ((wfds.fds_bits[(unsigned int)m_sock >> 5] >> ((unsigned int)m_sock & 0x1f) & 1U) != 0)
    {
        result = 2;
    }
    else if ((efds.fds_bits[(unsigned int)m_sock >> 5] >> ((unsigned int)m_sock & 0x1f) & 1U) != 0)
    {
        result = 3;
    }
    return result;
}
```
