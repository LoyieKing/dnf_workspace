# _ZN10CAppConfig15Get_DBMWTcpPortEv

`CAppConfig::Get_DBMWTcpPort()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8063f42` | `0xc` | `0x804c490` | `0xe` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movzwl 0x10(%eax),%eax
+add    $0x10,%eax
+movzwl (%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppConfig::Get_DBMWTcpPort() */

undefined2 __thiscall CAppConfig::_ZN10CAppConfig15Get_DBMWTcpPortEv(CAppConfig *this)

{
  return *(undefined2 *)(this + 0x10);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFAppConfig.cpp](source/DNFServer/GameServer/Guild/DNFAppConfig.cpp)（约第 205 行）：

```cpp
unsigned short CAppConfig::Get_DBMWTcpPort()
{
    return *(unsigned short*)((char*)this + 0x10);
}
```
