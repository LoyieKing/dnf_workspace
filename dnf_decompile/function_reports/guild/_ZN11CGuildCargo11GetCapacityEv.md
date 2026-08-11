# _ZN11CGuildCargo11GetCapacityEv

`CGuildCargo::GetCapacity()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808ae40` | `0xe` | `0x8091634` | `0xf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0x18d8(%eax),%eax
+add    $0x18d8,%eax
+mov    (%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::GetCapacity() */

undefined4 __thiscall CGuildCargo::_ZN11CGuildCargo11GetCapacityEv(CGuildCargo *this)

{
  return *(undefined4 *)(this + 0x18d8);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 102 行）：

```cpp
int CGuildCargo::GetCapacity()
{
    return *(int*)((char*)this + 0x18d8);
}
```
