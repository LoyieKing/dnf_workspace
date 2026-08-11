# _ZN15CExchangeServer21GetExchangeServerPortEv

`CExchangeServer::GetExchangeServerPort()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x8093d32` | `0xc` | `0x805cc58` | `0xc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,6 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movzwl 0xc(%eax),%eax
+movzwl 0x10(%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CExchangeServer::GetExchangeServerPort() */

undefined2 __thiscall
CExchangeServer::_ZN15CExchangeServer21GetExchangeServerPortEv(CExchangeServer *this)

{
  return *(undefined2 *)(this + 0xc);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp](source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp)（约第 48 行）：

```cpp
unsigned short CExchangeServer::GetExchangeServerPort()
{
    return m_port;
}
```
