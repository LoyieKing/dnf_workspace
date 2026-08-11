# _ZN3nsl9TCPSocket12connect_nonbEPKct7timeval

`nsl::TCPSocket::connect_nonb(char const*, unsigned short, timeval)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80ad270` | `0x230` | `0x809f50c` | `0x220` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,155 +1,150 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xec,%esp
 mov    0x10(%ebp),%eax
 mov    %ax,-0xcc(%ebp)
 movl   $0x10,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movw   $0x2,-0x3c(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <inet_addr>
 mov    %eax,-0x38(%ebp)
 movzwl -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <htons>
 mov    %ax,-0x3a(%ebp)
 movl   $0x10,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket14setOptNonBlockEv>
 movl   $0x0,-0x24(%ebp)
 mov    -0x2c(%ebp),%ecx
 lea    -0x3c(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <connect>
 mov    %eax,-0x28(%ebp)
 mov    -0x28(%ebp),%eax
 shr    $0x1f,%eax
 test   %al,%al
 je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0xd3>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0x73,%eax
 je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0xd3>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0x4,%eax
 je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0xd3>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0xb,%eax
 je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0xd3>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0xb,%eax
 je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0xd3>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x225>
+jmp    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x215>
 cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x1f5>
+je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x1e5>
 lea    -0xc4(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 movl   $0x0,-0x20(%ebp)
 jmp    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x100>
 mov    -0x20(%ebp),%edx
 mov    -0x1c(%ebp),%eax
 movl   $0x0,(%eax,%edx,4)
 addl   $0x1,-0x20(%ebp)
 cmpl   $0x1f,-0x20(%ebp)
 setbe  %al
 test   %al,%al
 jne    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0xef>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 shr    $0x5,%eax
 mov    %eax,%edx
 mov    -0xc4(%ebp,%eax,4),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 and    $0x1f,%eax
 mov    $0x1,%esi
 mov    %esi,%edi
 mov    %eax,%ecx
 shl    %cl,%edi
 mov    %edi,%eax
 or     %ebx,%eax
 mov    %eax,-0xc4(%ebp,%edx,4)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 lea    0x1(%eax),%edx
 lea    0x14(%ebp),%eax
 mov    %eax,0x10(%esp)
 movl   $0x0,0xc(%esp)
 lea    -0xc4(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <select>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
-jns    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x187>
+jns    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x18a>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0x4,%eax
-je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x187>
-mov    $0x1,%eax
-jmp    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x18c>
+je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x18a>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x19a>
+jmp    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x215>
+cmpl   $0x0,-0x28(%ebp)
+jg     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x197>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x225>
-cmpl   $0x0,-0x28(%ebp)
-jle    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x1ee>
+jmp    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x215>
 movl   $0x4,-0x40(%ebp)
-lea    -0x44(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-lea    -0x40(%ebp),%ecx
-mov    %ecx,0x10(%esp)
+lea    -0x40(%ebp),%edx
+mov    %edx,0x10(%esp)
+lea    -0x44(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0x4,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <getsockopt>
 shr    $0x1f,%eax
 test   %al,%al
-je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x1e0>
+je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x1d7>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x225>
+jmp    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x215>
 mov    -0x44(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x1f5>
+je     <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x1e5>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x225>
-mov    $0x0,%eax
-jmp    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x225>
+jmp    <T> <_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval+0x215>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 movl   $0x4,0x8(%esp)
 lea    -0x3c(%ebp),%edx
 add    $0x4,%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 movzwl -0x3a(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x18(%eax)
 mov    $0x1,%eax
 add    $0xec,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool connect_nonb(TCPSocket * this, char * ip, ushort port, timeval
   tval) */

bool __thiscall
nsl::TCPSocket::_ZN3nsl9TCPSocket12connect_nonbEPKct7timeval
          (TCPSocket *this,char *ip,ushort port,timeval tval)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  fd_set local_c8;
  int local_48 [2];
  sockaddr local_40;
  socklen_t local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  fd_set *local_20;
  
                    /* Unresolved local var: sockaddr_in svradr@[???]
                       Unresolved local var: int len@[???]
                       Unresolved local var: int n@[???]
                       Unresolved local var: int error@[???]
                       Unresolved local var: FD_SET wset@[???] */
  memset(&local_40,0,0x10);
  local_40.sa_family = 2;
  local_40.sa_data._2_4_ = inet_addr(ip);
  local_40.sa_data._0_2_ = htons(port);
  local_30 = 0x10;
  setOptNonBlock(this);
  local_28 = 0;
  local_2c = ::connect(this->sock_,&local_40,local_30);
  if ((((local_2c < 0) && (piVar2 = __errno_location(), *piVar2 != 0x73)) &&
      (piVar2 = __errno_location(), *piVar2 != 4)) &&
     ((piVar2 = __errno_location(), *piVar2 != 0xb && (piVar2 = __errno_location(), *piVar2 != 0xb))
     )) {
    return false;
  }
  if (local_2c != 0) {
                    /* Unresolved local var: uint __i@[???]
                       Unresolved local var: fd_set * __arr@[???] */
    local_20 = &local_c8;
    for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
      local_c8.fds_bits[local_24] = 0;
    }
    uVar3 = (uint)this->sock_ >> 5;
    local_c8.fds_bits[uVar3] = 1 << ((byte)this->sock_ & 0x1f) | local_c8.fds_bits[uVar3];
    local_2c = select(this->sock_ + 1,(fd_set *)0x0,&local_c8,(fd_set *)0x0,(timeval *)&tval);
    if ((local_2c < 0) && (piVar2 = __errno_location(), *piVar2 != 4)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return false;
    }
    if (local_2c < 1) {
      return false;
    }
                    /* Unresolved local var: socklen_t lon@[???]
                       Unresolved local var: int valopt@[???] */
    local_48[1] = 4;
    iVar4 = getsockopt(this->sock_,1,4,local_48,(socklen_t *)(local_48 + 1));
    if (iVar4 < 0) {
      return false;
    }
    if (local_48[0] != 0) {
      return false;
    }
  }
  memcpy(this->c_adrs_,local_40.sa_data + 2,4);
  this->port_ = local_40.sa_data._0_2_;
  return true;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/Socket.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/Socket.cpp)（约第 300 行）：

```cpp
bool TCPSocket::connect_nonb(const char* ip, unsigned short port, timeval tval)
{
    sockaddr_in svradr;
    memset(&svradr, 0, 0x10);
    svradr.sin_family = 2;
    svradr.sin_addr.s_addr = inet_addr(ip);
    svradr.sin_port = htons(port);
    int len = 0x10;
    setOptNonBlock();
    int n;
    int error = 0;
    (void)error;
    // ORIG: 赋值在条件内（mov n; shr $0x1f; test; je）
    if ((n = ::connect(sock_, (sockaddr*)&svradr, len)) < 0)
    {
        if ((errno != EINPROGRESS) && (errno != EINTR) && (errno != EAGAIN) && (errno != EAGAIN))
        {
            return false;
        }
    }
    if (n != 0)
    {
        fd_set wset;
        unsigned int i;
        fd_set* p = &wset;
        for (i = 0; i <= 0x1f; i = i + 1)
        {
            p->fds_bits[i] = 0;
        }
        FD_SET((unsigned int)sock_, &wset);
        n = select(sock_ + 1, NULL, &wset, NULL, &tval);
        // ORIG: && 物化为 0/1（mov $1; jmp; mov $0; test; je）
        if (n < 0 && errno != EINTR)
        {
            return false;
        }
        if (n < 1)
        {
            return false;
        }
        socklen_t lon = 4;
        int valopt;
        if (getsockopt(sock_, 1, 4, &valopt, &lon) < 0)
        {
            return false;
        }
        if (valopt != 0)
        {
            return false;
        }
    }
    memcpy(c_adrs_, &svradr.sin_addr, 4);
    port_ = svradr.sin_port;
    return true;
}
```
