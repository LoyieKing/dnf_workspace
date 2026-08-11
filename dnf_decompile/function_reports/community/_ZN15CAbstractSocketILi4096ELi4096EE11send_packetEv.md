# _ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv

`CAbstractSocket<4096, 4096>::send_packet()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x804fc54` | `0x206` | `0x804fe14` | `0x201` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,138 +1,136 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x1010(%eax),%eax
 test   %eax,%eax
 jg     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x25>
 mov    $0x0,%eax
-jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x200>
+jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1fb>
 mov    0x8(%ebp),%eax
 mov    0x1010(%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 lea    0x1018(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <write>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-setle  %al
-test   %al,%al
-je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0xdb>
+jg     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0xd6>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0xb,%eax
-je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x8b>
+je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x86>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0x4,%eax
-je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x8b>
+je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x86>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0xb,%eax
-je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x8b>
+je     <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x86>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x95>
+jne    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x90>
 mov    $0x0,%eax
-jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x200>
+jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1fb>
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
 movl   $"SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)",0x4(%esp)
 lea    -0xe(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10ArchiveLogC1EPKcz>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x200>
+jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1fb>
 cmpl   $0x0,-0xc(%ebp)
-jle    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1fd>
+jle    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1f8>
 mov    0x8(%ebp),%eax
 mov    0x1010(%eax),%eax
 cmp    -0xc(%ebp),%eax
-jle    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1a2>
+jle    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x19d>
 mov    0x8(%ebp),%eax
 lea    0x1018(%eax),%edx
 mov    -0xc(%ebp),%eax
 add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1014(%eax)
 mov    0x8(%ebp),%eax
 mov    0x1010(%eax),%eax
 mov    %eax,%edx
 sub    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1010(%eax)
 mov    0x8(%ebp),%eax
 mov    0x1010(%eax),%eax
 test   %eax,%eax
-jns    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x13c>
+jns    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x137>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x200>
+jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1fb>
 mov    0x8(%ebp),%eax
 mov    0x1010(%eax),%eax
 cmp    $0x1000,%eax
-jle    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x156>
+jle    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x151>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x200>
+jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1fb>
 mov    0x8(%ebp),%eax
 mov    0x1010(%eax),%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x1014(%eax),%eax
 mov    0x8(%ebp),%ecx
 add    $0x1018,%ecx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <memmove>
 mov    0x8(%ebp),%eax
 lea    0x1018(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x1010(%eax),%eax
 add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1014(%eax)
-jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1fd>
+jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1f8>
 mov    0x8(%ebp),%eax
 mov    0x1010(%eax),%eax
 cmp    -0xc(%ebp),%eax
-jge    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1de>
+jge    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1d9>
 mov    0x8(%ebp),%eax
 mov    0x1010(%eax),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"offset error[Remain_Data: %d Send:%d]",0x4(%esp)
 lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10ArchiveLogC1EPKcz>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x200>
+jmp    <T> <_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv+0x1fb>
 mov    0x8(%ebp),%eax
 lea    0x1018(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1014(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1010(%eax)
 mov    -0xc(%ebp),%eax
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAbstractSocket<4096, 4096>::send_packet() */

ssize_t __thiscall
CAbstractSocket<4096,4096>::_ZN15CAbstractSocketILi4096ELi4096EE11send_packetEv
          (CAbstractSocket<4096,4096> *this)

{
  int *piVar1;
  char *pcVar2;
  ArchiveLog local_12;
  ArchiveLog local_11;
  ssize_t local_10;
  
  local_10 = 0;
  if (*(int *)(this + 0x1010) < 1) {
    local_10 = 0;
  }
  else {
    local_10 = write(*(int *)this,this + 0x1018,*(size_t *)(this + 0x1010));
    if (local_10 < 1) {
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
                  (&local_12,"SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)",*(undefined4 *)this,
                   *piVar1,pcVar2);
        local_10 = -1;
      }
    }
    else if (0 < local_10) {
      if (local_10 < *(int *)(this + 0x1010)) {
        *(CAbstractSocket<4096,4096> **)(this + 0x1014) = this + local_10 + 0x1018;
        *(int *)(this + 0x1010) = *(int *)(this + 0x1010) - local_10;
        if (*(int *)(this + 0x1010) < 0) {
          local_10 = -1;
        }
        else if (*(int *)(this + 0x1010) < 0x1001) {
          memmove(this + 0x1018,*(void **)(this + 0x1014),*(size_t *)(this + 0x1010));
          *(CAbstractSocket<4096,4096> **)(this + 0x1014) = this + *(int *)(this + 0x1010) + 0x1018;
        }
        else {
          local_10 = -1;
        }
      }
      else if (*(int *)(this + 0x1010) < local_10) {
        ArchiveLog::_ZN10ArchiveLogC2EPKcz
                  (&local_11,"offset error[Remain_Data: %d Send:%d]",*(undefined4 *)(this + 0x1010),
                   local_10);
        local_10 = -1;
      }
      else {
        *(CAbstractSocket<4096,4096> **)(this + 0x1014) = this + 0x1018;
        *(undefined4 *)(this + 0x1010) = 0;
      }
    }
  }
  return local_10;
}
```

## 3. 我们的源码函数

定义于 [source/Community/NetworkSession.cpp](source/Community/NetworkSession.cpp)（约第 75 行）：

```cpp
    if (send_packet() < 0) {
        ArchiveLog("OnSend() Socket[%d] Error(%s)", GetSocket(), strerror(errno));
        return -1;
    }
```
