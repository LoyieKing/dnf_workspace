# _ZN15CAbstractSocketILi4096ELi4096EE12AcceptSocketEv

`CAbstractSocket<4096, 4096>::AcceptSocket()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x804fe5a` | `0xae` | `0x804fd22` | `0xae` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 movl   $0x10,-0x24(%ebp)
-lea    -0x24(%ebp),%ecx
 lea    -0x20(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
+lea    -0x24(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <accept>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 jns    <T> <_ZN15CAbstractSocketILi4096ELi4096EE12AcceptSocketEv+0x66>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0xc(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"Accept Socket[%d] Error(%s)",0x4(%esp)
 lea    -0xe(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10ArchiveLogC1EPKcz>
 mov    $0xffffffff,%eax
 jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE12AcceptSocketEv+0xa8>
 movzwl -0x1e(%ebp),%eax
 movzwl %ax,%eax
 mov    %eax,(%esp)
 call   <T> <ntohs>
 movzwl %ax,%ebx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <inet_ntoa>
 mov    -0xc(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"accepted other server ip(%s), port(%d), sock(%d)",0x4(%esp)
 lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10ArchiveLogC1EPKcz>
 mov    -0xc(%ebp),%eax
 add    $0x44,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAbstractSocket<4096, 4096>::AcceptSocket() */

int __thiscall
CAbstractSocket<4096,4096>::_ZN15CAbstractSocketILi4096ELi4096EE12AcceptSocketEv
          (CAbstractSocket<4096,4096> *this)

{
  uint16_t uVar1;
  int *piVar2;
  char *pcVar3;
  socklen_t local_28;
  undefined1 local_24 [18];
  ArchiveLog local_12;
  ArchiveLog local_11;
  int local_10;
  
  local_28 = 0x10;
  local_10 = accept(*(int *)this,(sockaddr *)local_24,&local_28);
  if (local_10 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    ArchiveLog::_ZN10ArchiveLogC2EPKcz(&local_12,"Accept Socket[%d] Error(%s)",local_10,pcVar3);
    local_10 = -1;
  }
  else {
    uVar1 = ntohs(local_24._2_2_);
    pcVar3 = inet_ntoa((in_addr)local_24._4_4_);
    ArchiveLog::_ZN10ArchiveLogC2EPKcz
              (&local_11,"accepted other server ip(%s), port(%d), sock(%d)",pcVar3,(uint)uVar1,
               local_10);
  }
  return local_10;
}
```

## 3. 我们的源码函数

定义于 [source/Community/NetworkSession.cpp](source/Community/NetworkSession.cpp)（约第 190 行）：

```cpp
int CAbstractSocket<TSizeIn, TSizeOut>::AcceptSocket() {
    sockaddr_in addr;
    socklen_t len;
    len = 16;
    int sock = accept(socket, (sockaddr *)&addr, &len);
    if (sock < 0) {
        // 原始：strerror(errno) 直接内联为变参
        ArchiveLog("Accept Socket[%d] Error(%s)", sock, strerror(errno));
        return -1;
    } else {
        // 原始：inet_ntoa/ntohs 直接内联为变参（ntohs 先于 inet_ntoa 求值）
        ArchiveLog("accepted other server ip(%s), port(%d), sock(%d)", inet_ntoa(addr.sin_addr), ntohs(addr.sin_port), sock);
    }
    return sock;
}
```
