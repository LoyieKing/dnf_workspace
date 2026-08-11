# _ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv

`CAbstractSocket<4096, 4096>::recv_packet()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x804f9d0` | `0x15a` | `0x804faa2` | `0x156` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,104 +1,102 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jns    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x1a>
 mov    $0x0,%eax
-jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x154>
+jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x150>
 call   <T> <__errno_location>
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    $0x1000,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 jne    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x5c>
 mov    0x8(%ebp),%eax
 lea    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 movl   $0x1000,-0x10(%ebp)
-mov    -0x10(%ebp),%ecx
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
+mov    -0x10(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <read>
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x103>
+cmpl   $0x0,-0xc(%ebp)
+jns    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0xff>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0xb,%eax
-je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0xb6>
+je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0xb2>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0x4,%eax
-je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0xb6>
+je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0xb2>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0xb,%eax
-je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0xb6>
+je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0xb2>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0xc0>
+jne    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0xbc>
 mov    $0x0,%eax
-jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x154>
+jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x150>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 call   <T> <__errno_location>
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %ebx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)",0x4(%esp)
 lea    -0x12(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10ArchiveLogC1EPKcz>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x154>
+jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x150>
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x151>
+jne    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x14d>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    -0x10(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"Recv ERROR = 0 (%d) : %s, MaxRead(%d) nRead(%d)",0x4(%esp)
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10ArchiveLogC1EPKcz>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x154>
+jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv+0x150>
 mov    -0xc(%ebp),%eax
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAbstractSocket<4096, 4096>::recv_packet() */

ssize_t __thiscall
CAbstractSocket<4096,4096>::_ZN15CAbstractSocketILi4096ELi4096EE11recv_packetEv
          (CAbstractSocket<4096,4096> *this)

{
  int *piVar1;
  char *pcVar2;
  ArchiveLog local_16;
  ArchiveLog local_15;
  size_t local_14;
  ssize_t local_10;
  
  if (*(int *)this < 0) {
    local_10 = 0;
  }
  else {
    piVar1 = __errno_location();
    *piVar1 = 0;
    local_14 = 0x1000 - *(int *)(this + 8);
    if (local_14 == 0) {
      *(CAbstractSocket<4096,4096> **)(this + 0xc) = this + 0x10;
      *(undefined4 *)(this + 8) = 0;
      local_14 = 0x1000;
    }
    local_10 = read(*(int *)this,*(void **)(this + 0xc),local_14);
    if (local_10 < 0) {
      piVar1 = __errno_location();
      if ((((*piVar1 == 0xb) || (piVar1 = __errno_location(), *piVar1 == 4)) ||
          (piVar1 = __errno_location(), *piVar1 == 0xb)) ||
         (piVar1 = __errno_location(), *piVar1 == 0)) {
        local_10 = 0;
      }
      else {
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        piVar1 = __errno_location();
        ArchiveLog::_ZN10ArchiveLogC2EPKcz
                  (&local_16,"RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)",*(undefined4 *)this,
                   *piVar1,pcVar2);
        local_10 = -1;
      }
    }
    else if (local_10 == 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      piVar1 = __errno_location();
      ArchiveLog::_ZN10ArchiveLogC2EPKcz
                (&local_15,"Recv ERROR = 0 (%d) : %s, MaxRead(%d) nRead(%d)",*piVar1,pcVar2,local_14
                 ,local_10);
      local_10 = -1;
    }
  }
  return local_10;
}
```

## 3. 我们的源码函数

定义于 [source/Community/NetworkSession.cpp](source/Community/NetworkSession.cpp)（约第 372 行）：

```cpp
ssize_t CAbstractSocket<MaxRecvBuf, MaxSendBuf>::recv_packet() {
    if (this->socket < 0) {
        return 0;
    }
    errno = 0;
    size_t maxRead = MaxRecvBuf - m_remain_recvlen;
    if (maxRead == 0) {
        recvBufferOffset = recvBuffer;
        m_remain_recvlen = 0;
        maxRead = MaxRecvBuf;
    }
    ssize_t nRead = read(this->socket, this->recvBufferOffset, maxRead);
    if (nRead < 0) {
        if (errno == EAGAIN || errno == EINTR || errno == EAGAIN /*two 0xb, not typo. copied from original code*/ || errno == 0) {
            return 0;
        } else {
            ArchiveLog("RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)", this->socket, errno, strerror(errno));
            return -1;
        }
    } else if (nRead == 0) {
        ArchiveLog("Recv ERROR = 0 (%d) : %s, MaxRead(%d) nRead(%d)", errno, strerror(errno), maxRead, nRead);
        return -1;
    }
    return nRead;
}
```
