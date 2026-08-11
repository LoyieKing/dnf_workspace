# _ZN12EpollHandler7DestroyEv

`EpollHandler::Destroy()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80544dc` | `0x2a` | `0x806117e` | `0x34` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12EpollHandler7DestroyEv+0x1e>
+je     <T> <_ZN12EpollHandler7DestroyEv+0x32>
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN12EpollHandler7DestroyEv+0x28>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdaPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* EpollHandler::Destroy() */

void __thiscall EpollHandler::_ZN12EpollHandler7DestroyEv(EpollHandler *this)

{
  if (*(int *)(this + 0x10) != 0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFTcpHandler.cpp](source/DNFServer/GameServer/Guild/DNFTcpHandler.cpp)（约第 91 行）：

```cpp
void EpollHandler::Destroy()
{
    delete[] m_events;
    m_events = 0;
}
```
