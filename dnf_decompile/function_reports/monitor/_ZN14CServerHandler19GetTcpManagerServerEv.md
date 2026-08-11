# _ZN14CServerHandler19GetTcpManagerServerEv

`CServerHandler::GetTcpManagerServer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x8066560` | `0xb` | `0x808111a` | `0xb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,6 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-add    $0x54,%eax
+add    $0x58,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::GetTcpManagerServer() */

CServerHandler * __thiscall
CServerHandler::_ZN14CServerHandler19GetTcpManagerServerEv(CServerHandler *this)

{
  return this + 0x54;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp](source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp)（约第 481 行）：

```cpp
CTcpManagerServer* CServerHandler::GetTcpManagerServer() { return &m_tcpManagerServer; }
```
