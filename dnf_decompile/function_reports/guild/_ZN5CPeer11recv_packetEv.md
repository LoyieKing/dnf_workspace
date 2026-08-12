# _ZN5CPeer11recv_packetEv

`CPeer::recv_packet()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8051086` | `0x1a1` | `0x80980f6` | `0x1bf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,117 +1,121 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 shr    $0x1f,%eax
 test   %al,%al
 je     <T> <_ZN5CPeer11recv_packetEv+0x24>
 mov    $0x0,%eax
-jmp    <T> <_ZN5CPeer11recv_packetEv+0x19a>
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
 call   <T> <__errno_location>
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x181c(%eax),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 add    $0x1800,%eax
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 jne    <T> <_ZN5CPeer11recv_packetEv+0x77>
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x181c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1820(%eax)
 movl   $0x1800,-0x10(%ebp)
 mov    -0x10(%ebp),%esi
 mov    0x8(%ebp),%eax
 mov    0x181c(%eax),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <read>
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN5CPeer11recv_packetEv+0x126>
+cmpl   $0x0,-0xc(%ebp)
+jns    <T> <_ZN5CPeer11recv_packetEv+0x144>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0xb,%eax
-je     <T> <_ZN5CPeer11recv_packetEv+0xda>
+jne    <T> <_ZN5CPeer11recv_packetEv+0xc1>
+mov    $0x0,%eax
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0x4,%eax
-je     <T> <_ZN5CPeer11recv_packetEv+0xda>
+jne    <T> <_ZN5CPeer11recv_packetEv+0xd7>
+mov    $0x0,%eax
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0xb,%eax
-je     <T> <_ZN5CPeer11recv_packetEv+0xda>
+jne    <T> <_ZN5CPeer11recv_packetEv+0xed>
+mov    $0x0,%eax
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN5CPeer11recv_packetEv+0xe4>
+jne    <T> <_ZN5CPeer11recv_packetEv+0x102>
 mov    $0x0,%eax
-jmp    <T> <_ZN5CPeer11recv_packetEv+0x19a>
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 call   <T> <__errno_location>
 mov    (%eax),%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 mov    %ebx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)",(%esp)
 call   <T> <printf>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN5CPeer11recv_packetEv+0x19a>
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN5CPeer11recv_packetEv+0x197>
+jne    <T> <_ZN5CPeer11recv_packetEv+0x1b5>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 call   <T> <__errno_location>
 mov    (%eax),%esi
 movl   $0xa4,0x8(%esp)
 movl   $&_ZZN5CPeer11recv_packetEvE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $"Recv ERROR = 0 (%d) : %s, MaxRead(%d) nRead(%d)",0x8(%esp)
 movl   $"./log/TcpRecv",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN5CPeer11recv_packetEv+0x19a>
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
 mov    -0xc(%ebp),%eax
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPeer::recv_packet() */

ssize_t __thiscall CPeer::_ZN5CPeer11recv_packetEv(CPeer *this)

{
  void *__buf;
  CPeer *__nbytes;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  CMyFileLog local_1c [8];
  CPeer *local_14;
  ssize_t local_10;
  
  iVar1 = TCPSocket::getHandle((TCPSocket *)this);
  if (iVar1 < 0) {
    local_10 = 0;
  }
  else {
    piVar2 = __errno_location();
    *piVar2 = 0;
    local_14 = this + (0x181c - *(int *)(this + 0x181c));
    if (local_14 == (CPeer *)0x0) {
      *(CPeer **)(this + 0x181c) = this + 0x1c;
      *(undefined4 *)(this + 0x1820) = 0;
      local_14 = (CPeer *)0x1800;
    }
    __nbytes = local_14;
    __buf = *(void **)(this + 0x181c);
    iVar1 = TCPSocket::getHandle((TCPSocket *)this);
    local_10 = read(iVar1,__buf,(size_t)__nbytes);
    if (local_10 < 0) {
      piVar2 = __errno_location();
      if ((((*piVar2 == 0xb) || (piVar2 = __errno_location(), *piVar2 == 4)) ||
          (piVar2 = __errno_location(), *piVar2 == 0xb)) ||
         (piVar2 = __errno_location(), *piVar2 == 0)) {
        local_10 = 0;
      }
      else {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        piVar2 = __errno_location();
        iVar1 = *piVar2;
        uVar4 = TCPSocket::getHandle((TCPSocket *)this);
        printf("RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)",uVar4,iVar1,pcVar3);
        local_10 = -1;
      }
    }
    else if (local_10 == 0) {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      CMyFileLog::CMyFileLog(local_1c,"recv_packet",0xa4);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_1c,"./log/TcpRecv","Recv ERROR = 0 (%d) : %s, MaxRead(%d) nRead(%d)",iVar1,
                 pcVar3,local_14,local_10);
      local_10 = -1;
    }
  }
  return local_10;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/Peer.cpp](source/DNFServer/GameServer/Guild/Peer.cpp)（约第 169 行）：

```cpp
int CPeer::recv_packet()
{
    if (getHandle() < 0)
        return 0;
    errno = 0;
    int remaining = ((char*)this + 0x1c) - m_buf + 0x1800;
    if (remaining == 0)
    {
        m_buf = (char*)this + 0x1c;
        m_remainLen = 0;
        remaining = 0x1800;
    }
    int n = read(getHandle(), m_buf, remaining);
    if (n < 0)
    {
        if (errno == EAGAIN)
            return 0;
        if (errno == EINTR)
            return 0;
        if (errno == EAGAIN)
            return 0;
        if (errno == 0)
            return 0;
        printf("RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)",
               getHandle(), errno, strerror(errno));
        return -1;
    }
    if (n == 0)
    {
        DNF_LOG_SCOPE_LINE(0xa4, "./log/TcpRecv",
            "Recv ERROR = 0 (%d) : %s, MaxRead(%d) nRead(%d)",
            errno, strerror(errno), remaining, n);
        return -1;
    }
    return n;
}
```
