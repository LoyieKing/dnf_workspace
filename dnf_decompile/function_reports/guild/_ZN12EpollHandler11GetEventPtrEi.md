# _ZN12EpollHandler11GetEventPtrEi

`EpollHandler::GetEventPtr(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804ee08` | `0x1d` | `0x8085f70` | `0x21` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,13 +1,15 @@
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
+add    $0x1,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
-mov    0x4(%eax),%eax
+mov    (%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* EpollHandler::GetEventPtr(int) */

undefined4 __thiscall EpollHandler::_ZN12EpollHandler11GetEventPtrEi(EpollHandler *this,int param_1)

{
  return *(undefined4 *)(*(int *)(this + 0x10) + param_1 * 0xc + 4);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp](source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp)（约第 50 行）：

```cpp
void* CTcpHandler::GetEventPtr(int idx)
{
    return m_epoll ? m_epoll->GetEventPtr(idx) : 0;
}
```
