# _ZN5CUser16SetTcpGameServerEP14CTcpGameServer

`CUser::SetTcpGameServer(CTcpGameServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8093268` | `0xe` | `0x8089318` | `0x10` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,8 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0xc(%eax)
+lea    0xc(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    %eax,(%edx)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SetTcpGameServer(CTcpGameServer*) */

void __thiscall
CUser::_ZN5CUser16SetTcpGameServerEP14CTcpGameServer(CUser *this,CTcpGameServer *param_1)

{
  *(CTcpGameServer **)(this + 0xc) = param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 644 行）：

```cpp
void CUser::SetTcpGameServer(CTcpGameServer* server)
{
    m_tcpGameServer = server;
}
```
