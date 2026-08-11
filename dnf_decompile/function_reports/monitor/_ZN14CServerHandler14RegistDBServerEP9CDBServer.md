# _ZN14CServerHandler14RegistDBServerEP9CDBServer

`CServerHandler::RegistDBServer(CDBServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807a844` | `0x13` | `0x80807f6` | `0xe` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x18(%eax)
-mov    $0x1,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::RegistDBServer(CDBServer*) */

undefined4 __thiscall
CServerHandler::_ZN14CServerHandler14RegistDBServerEP9CDBServer
          (CServerHandler *this,CDBServer *param_1)

{
  *(CDBServer **)(this + 0x18) = param_1;
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 459 行）：

```cpp
bool CServerHandler::RegistDBServer(CDBServer* server)
{
    m_dbServer = server;
    return true;
}
```
