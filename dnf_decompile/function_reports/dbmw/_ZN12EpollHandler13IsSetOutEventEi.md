# _ZN12EpollHandler13IsSetOutEventEi

`EpollHandler::IsSetOutEvent(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8057b68` | `0x24` | `0x80e7b36` | `0x26` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0x10(%eax),%ecx
+mov    0x10(%eax),%eax
+mov    %eax,%ecx
 mov    0xc(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x4,%eax
 test   %eax,%eax
 setne  %al
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* EpollHandler::IsSetOutEvent(int) */

bool __thiscall EpollHandler::_ZN12EpollHandler13IsSetOutEventEi(EpollHandler *this,int param_1)

{
  return (*(uint *)(*(int *)(this + 0x10) + param_1 * 0xc) & 4) != 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/EpollHandler.cpp](source/DNFServer/GameServer/DBMW/EpollHandler.cpp)（约第 70 行）：

```cpp
char EpollHandler::IsSetOutEvent(int idx)
{
    return (((struct epoll_event*)m_events)[idx].events & 0x4) != 0;
}
```
