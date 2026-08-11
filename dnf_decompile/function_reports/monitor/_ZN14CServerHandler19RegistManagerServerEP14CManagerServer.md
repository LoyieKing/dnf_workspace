# _ZN14CServerHandler19RegistManagerServerEP14CManagerServer

`CServerHandler::RegistManagerServer(CManagerServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807a8a4` | `0x13` | `0x8080840` | `0xe` |

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
 mov    %edx,0x1c(%eax)
-mov    $0x1,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::RegistManagerServer(CManagerServer*) */

undefined4 __thiscall
CServerHandler::_ZN14CServerHandler19RegistManagerServerEP14CManagerServer
          (CServerHandler *this,CManagerServer *param_1)

{
  *(CManagerServer **)(this + 0x1c) = param_1;
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 480 行）：

```cpp
bool CServerHandler::RegistManagerServer(CManagerServer* server)
{
    m_managerServer = server;
    return true;
}
```
