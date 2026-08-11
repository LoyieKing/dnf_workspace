# _ZNK9TCPSocket21pollReadWriteErrEventEv

`TCPSocket::pollReadWriteErrEvent() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8055422` | `0x255` | `0x80625be` | `0x2aa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,178 +1,223 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1dc,%esp
-lea    -0xc0(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-movl   $0x0,-0x30(%ebp)
-jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x2f>
-mov    -0x30(%ebp),%edx
-mov    -0x2c(%ebp),%eax
-movl   $0x0,(%eax,%edx,4)
-addl   $0x1,-0x30(%ebp)
-cmpl   $0x1f,-0x30(%ebp)
-setbe  %al
-test   %al,%al
-jne    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x1e>
-lea    -0x140(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-movl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x5d>
-mov    -0x28(%ebp),%edx
-mov    -0x24(%ebp),%eax
-movl   $0x0,(%eax,%edx,4)
-addl   $0x1,-0x28(%ebp)
-cmpl   $0x1f,-0x28(%ebp)
-setbe  %al
-test   %al,%al
-jne    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x4c>
-lea    -0x1c0(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x8b>
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%eax
-movl   $0x0,(%eax,%edx,4)
-addl   $0x1,-0x20(%ebp)
-cmpl   $0x1f,-0x20(%ebp)
-setbe  %al
-test   %al,%al
-jne    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x7a>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,%edx
-shr    $0x5,%edx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-shr    $0x5,%eax
-mov    -0xc0(%ebp,%eax,4),%ebx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-and    $0x1f,%eax
-mov    $0x1,%esi
-mov    %esi,%edi
+mov    $0x0,%eax
+mov    $0x20,%ecx
+lea    -0xc0(%ebp),%edx
+mov    %edx,%edi
+cld
+rep stos %eax,%es:(%edi)
+mov    %edi,%edx
+mov    %ecx,-0x30(%ebp)
+mov    %edx,-0x2c(%ebp)
+mov    $0x0,%eax
+mov    $0x20,%ecx
+lea    -0x140(%ebp),%edx
+mov    %edx,%edi
+cld
+rep stos %eax,%es:(%edi)
+mov    %edi,%edx
+mov    %ecx,-0x28(%ebp)
+mov    %edx,-0x24(%ebp)
+mov    $0x0,%eax
+mov    $0x20,%ecx
+lea    -0x1c0(%ebp),%edx
+mov    %edx,%edi
+cld
+rep stos %eax,%es:(%edi)
+mov    %edi,%edx
+mov    %ecx,-0x20(%ebp)
+mov    %edx,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    0x1f(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
+sar    $0x5,%eax
+mov    %eax,%ebx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    0x1f(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
+sar    $0x5,%eax
+mov    -0xc0(%ebp,%eax,4),%esi
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+shr    $0x1b,%edx
+add    %edx,%eax
+and    $0x1f,%eax
+sub    %edx,%eax
+mov    $0x1,%edx
+mov    %edx,%edi
 mov    %eax,%ecx
 shl    %cl,%edi
 mov    %edi,%eax
-or     %ebx,%eax
-mov    %eax,-0xc0(%ebp,%edx,4)
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,%edx
-shr    $0x5,%edx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-shr    $0x5,%eax
-mov    -0x140(%ebp,%eax,4),%ebx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-and    $0x1f,%eax
-mov    $0x1,%esi
-mov    %esi,%edi
+or     %esi,%eax
+mov    %eax,-0xc0(%ebp,%ebx,4)
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    0x1f(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
+sar    $0x5,%eax
+mov    %eax,%ebx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    0x1f(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
+sar    $0x5,%eax
+mov    -0x140(%ebp,%eax,4),%esi
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+shr    $0x1b,%edx
+add    %edx,%eax
+and    $0x1f,%eax
+sub    %edx,%eax
+mov    $0x1,%edx
+mov    %edx,%edi
 mov    %eax,%ecx
 shl    %cl,%edi
 mov    %edi,%eax
-or     %ebx,%eax
-mov    %eax,-0x140(%ebp,%edx,4)
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,%edx
-shr    $0x5,%edx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-shr    $0x5,%eax
-mov    -0x1c0(%ebp,%eax,4),%ebx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-and    $0x1f,%eax
-mov    $0x1,%esi
-mov    %esi,%edi
+or     %esi,%eax
+mov    %eax,-0x140(%ebp,%ebx,4)
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    0x1f(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
+sar    $0x5,%eax
+mov    %eax,%ebx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    0x1f(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
+sar    $0x5,%eax
+mov    -0x1c0(%ebp,%eax,4),%esi
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+shr    $0x1b,%edx
+add    %edx,%eax
+and    $0x1f,%eax
+sub    %edx,%eax
+mov    $0x1,%edx
+mov    %edx,%edi
 mov    %eax,%ecx
 shl    %cl,%edi
 mov    %edi,%eax
-or     %ebx,%eax
-mov    %eax,-0x1c0(%ebp,%edx,4)
+or     %esi,%eax
+mov    %eax,-0x1c0(%ebp,%ebx,4)
 movl   $0x1,-0x40(%ebp)
 movl   $0x0,-0x3c(%ebp)
-movl   $0x0,-0x38(%ebp)
-movl   $0x0,-0x34(%ebp)
 lea    -0x40(%ebp),%eax
 mov    %eax,0x10(%esp)
 lea    -0x1c0(%ebp),%eax
 mov    %eax,0xc(%esp)
 lea    -0x140(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0xc0(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $0x2,(%esp)
 call   <T> <select>
 mov    %eax,-0x38(%ebp)
-mov    -0x38(%ebp),%eax
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x1bc>
+cmpl   $0x0,-0x38(%ebp)
+jns    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x1cb>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x4(%esp)
 movl   $"pollReadWriteErrEvent(%s)",(%esp)
 call   <T> <printf>
 mov    -0x38(%ebp),%eax
-jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x24a>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-shr    $0x5,%eax
-mov    -0xc0(%ebp,%eax,4),%edx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-and    $0x1f,%eax
-mov    %edx,%ebx
-mov    %eax,%ecx
-sar    %cl,%ebx
-mov    %ebx,%eax
+jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x29f>
+movl   $0x0,-0x34(%ebp)
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    0x1f(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
+sar    $0x5,%eax
+mov    -0xc0(%ebp,%eax,4),%ebx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+shr    $0x1b,%edx
+add    %edx,%eax
+and    $0x1f,%eax
+sub    %edx,%eax
+mov    %ebx,%edi
+mov    %eax,%ecx
+sar    %cl,%edi
+mov    %edi,%eax
 and    $0x1,%eax
 test   %al,%al
-je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x1eb>
+je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x218>
 movl   $0x1,-0x34(%ebp)
-jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x247>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-shr    $0x5,%eax
-mov    -0x140(%ebp,%eax,4),%edx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-and    $0x1f,%eax
-mov    %edx,%ebx
-mov    %eax,%ecx
-sar    %cl,%ebx
-mov    %ebx,%eax
+jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x29c>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    0x1f(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
+sar    $0x5,%eax
+mov    -0x140(%ebp,%eax,4),%ebx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+shr    $0x1b,%edx
+add    %edx,%eax
+and    $0x1f,%eax
+sub    %edx,%eax
+mov    %ebx,%edi
+mov    %eax,%ecx
+sar    %cl,%edi
+mov    %edi,%eax
 and    $0x1,%eax
 test   %al,%al
-je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x21a>
+je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x25b>
 movl   $0x2,-0x34(%ebp)
-jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x247>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-shr    $0x5,%eax
-mov    -0x1c0(%ebp,%eax,4),%edx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-and    $0x1f,%eax
-mov    %edx,%ebx
-mov    %eax,%ecx
-sar    %cl,%ebx
-mov    %ebx,%eax
+jmp    <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x29c>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    0x1f(%eax),%edx
+test   %eax,%eax
+cmovs  %edx,%eax
+sar    $0x5,%eax
+mov    -0x1c0(%ebp,%eax,4),%ebx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+shr    $0x1b,%edx
+add    %edx,%eax
+and    $0x1f,%eax
+sub    %edx,%eax
+mov    %ebx,%edi
+mov    %eax,%ecx
+sar    %cl,%edi
+mov    %edi,%eax
 and    $0x1,%eax
 test   %al,%al
-je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x247>
+je     <T> <_ZNK9TCPSocket21pollReadWriteErrEventEv+0x29c>
 movl   $0x3,-0x34(%ebp)
 mov    -0x34(%ebp),%eax
 add    $0x1dc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
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

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp](source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp)（约第 217 行）：

```cpp
int TCPSocket::pollReadWriteErrEvent() const
{
    fd_set readfds, writefds, exceptfds;
    FD_ZERO(&readfds);
    FD_ZERO(&writefds);
    FD_ZERO(&exceptfds);
    FD_SET(m_fd, &readfds);
    FD_SET(m_fd, &writefds);
    FD_SET(m_fd, &exceptfds);
    struct timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    int ret = select(2, &readfds, &writefds, &exceptfds, &tv);
    if (ret < 0)
    {
        printf("pollReadWriteErrEvent(%s)", strerror(errno));
        return ret;
    }
    int result = 0;
    if (FD_ISSET(m_fd, &readfds))
        result = 1;
    else if (FD_ISSET(m_fd, &writefds))
        result = 2;
    else if (FD_ISSET(m_fd, &exceptfds))
        result = 3;
    return result;
}
```
