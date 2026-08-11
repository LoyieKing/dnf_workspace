# _ZN12CApplication17FindTcpGameServerEj

`CApplication::FindTcpGameServer(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8063560` | `0x1d` | `0x804ef4e` | `0x2e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,11 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
+mov    0x8(%ebp),%eax
+mov    0x68(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN12CApplication17FindTcpGameServerEj+0x27>
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetTcpGameServerEj>
+jmp    <T> <_ZN12CApplication17FindTcpGameServerEj+0x2c>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::FindTcpGameServer(unsigned int) */

void CApplication::_ZN12CApplication17FindTcpGameServerEj(uint param_1)

{
  CServerHandler::GetTcpGameServer(*(uint *)(param_1 + 0x68));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFApplication.cpp](source/DNFServer/GameServer/Guild/DNFApplication.cpp)（约第 409 行）：

```cpp
CTcpGameServer* CApplication::FindTcpGameServer(unsigned int group)
{
    return m_serverHandler ? m_serverHandler->GetTcpGameServer(group) : 0;
}
```
