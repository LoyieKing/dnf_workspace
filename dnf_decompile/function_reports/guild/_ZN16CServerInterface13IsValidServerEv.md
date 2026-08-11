# _ZN16CServerInterface13IsValidServerEv

`CServerInterface::IsValidServer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806f754` | `0x1e` | `0x8083b6c` | `0x28` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN16CServerInterface13IsValidServerEv+0x21>
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 movzbl (%eax),%eax
 cmp    $0xff,%al
-jne    <T> <_ZN16CServerInterface13IsValidServerEv+0x17>
+je     <T> <_ZN16CServerInterface13IsValidServerEv+0x21>
+mov    $0x1,%eax
+jmp    <T> <_ZN16CServerInterface13IsValidServerEv+0x26>
 mov    $0x0,%eax
-jmp    <T> <_ZN16CServerInterface13IsValidServerEv+0x1c>
-mov    $0x1,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerInterface::IsValidServer() */

bool __thiscall CServerInterface::_ZN16CServerInterface13IsValidServerEv(CServerInterface *this)

{
  return **(char **)(this + 4) != -1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerInterface.cpp](source/DNFServer/GameServer/Guild/DNFServerInterface.cpp)（约第 120 行）：

```cpp
bool CServerInterface::IsValidServer()
{
    return m_info != 0 && m_info->m_group != 0xff;
}
```
