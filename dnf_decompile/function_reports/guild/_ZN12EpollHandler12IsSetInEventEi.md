# _ZN12EpollHandler12IsSetInEventEi

`EpollHandler::IsSetInEvent(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804ede8` | `0x1f` | `0x8085f4e` | `0x21` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,15 @@
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
 and    $0x1,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* EpollHandler::IsSetInEvent(int) */

uint __thiscall EpollHandler::_ZN12EpollHandler12IsSetInEventEi(EpollHandler *this,int param_1)

{
  return *(uint *)(*(int *)(this + 0x10) + param_1 * 0xc) & 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp](source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp)（约第 54 行）：

```cpp
char CTcpHandler::IsSetInEvent(int idx)
{
    return m_epoll ? m_epoll->IsSetInEvent(idx) : 0;
}
```
