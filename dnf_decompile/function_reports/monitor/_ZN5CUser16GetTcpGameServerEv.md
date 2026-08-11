# _ZN5CUser16GetTcpGameServerEv

`CUser::GetTcpGameServer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8072882` | `0xb` | `0x808899c` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
+mov    $0x0,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::GetTcpGameServer() */

undefined4 __thiscall CUser::_ZN5CUser16GetTcpGameServerEv(CUser *this)

{
  return *(undefined4 *)(this + 0xc);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 579 行）：

```cpp
CTcpGameServer* CUser::GetTcpGameServer()
{
    return m_tcpGameServer;
}
```
