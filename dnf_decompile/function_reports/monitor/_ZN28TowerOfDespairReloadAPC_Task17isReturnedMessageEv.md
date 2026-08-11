# _ZN28TowerOfDespairReloadAPC_Task17isReturnedMessageEv

`TowerOfDespairReloadAPC_Task::isReturnedMessage()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x805cc8f` | `0xc` | `0x80a6726` | `0xc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,5 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-movzbl &_ZN28TowerOfDespairReloadAPC_Task33returnUpdateMessageFromGameServerE,%eax
+movzbl &_ZN28TowerOfDespairReloadAPC_Task38returnUpdateMessageFromGameServer_flagE,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* TowerOfDespairReloadAPC_Task::isReturnedMessage() */

undefined1
TowerOfDespairReloadAPC_Task::_ZN28TowerOfDespairReloadAPC_Task17isReturnedMessageEv(void)

{
  return returnUpdateMessageFromGameServer;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TowerOfDespairReloadAPC.cpp](source/DNFServer/GameServer/Monitor/TowerOfDespairReloadAPC.cpp)（约第 38 行）：

```cpp
bool TowerOfDespairReloadAPC_Task::isReturnedMessage()
{
    return returnUpdateMessageFromGameServer_flag;
}
```
