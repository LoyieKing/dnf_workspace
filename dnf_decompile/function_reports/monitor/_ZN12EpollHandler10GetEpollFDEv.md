# _ZN12EpollHandler10GetEpollFDEv

`EpollHandler::GetEpollFD()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x804f2dc` | `0xb` | `0x80a3138` | `0xb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,6 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
+mov    0x10(%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* EpollHandler::GetEpollFD() */

undefined4 __thiscall EpollHandler::_ZN12EpollHandler10GetEpollFDEv(EpollHandler *this)

{
  return *(undefined4 *)(this + 0x14);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TcpNetSystem.h](source/DNFServer/GameServer/Monitor/TcpNetSystem.h)（约第 271 行）：

```cpp
    int GetEpollFD() { return m_epollFd; }
```
