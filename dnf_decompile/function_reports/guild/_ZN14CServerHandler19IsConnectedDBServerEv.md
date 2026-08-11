# _ZN14CServerHandler19IsConnectedDBServerEv

`CServerHandler::IsConnectedDBServer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806d426` | `0x27` | `0x80819da` | `0x30` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN14CServerHandler19IsConnectedDBServerEv+0x20>
+je     <T> <_ZN14CServerHandler19IsConnectedDBServerEv+0x29>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface11IsConnectedEv>
-jmp    <T> <_ZN14CServerHandler19IsConnectedDBServerEv+0x25>
+test   %al,%al
+je     <T> <_ZN14CServerHandler19IsConnectedDBServerEv+0x29>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler19IsConnectedDBServerEv+0x2e>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::IsConnectedDBServer() */

undefined4 __thiscall
CServerHandler::_ZN14CServerHandler19IsConnectedDBServerEv(CServerHandler *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CServerInterface::IsConnected(*(CServerInterface **)(this + 0x18));
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 249 行）：

```cpp
bool CServerHandler::IsConnectedDBServer()
{
    return m_dbServer != 0 && m_dbServer->IsConnected();
}
```
