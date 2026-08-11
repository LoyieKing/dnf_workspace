# _ZN11CGuildBoard21isWebGuildBoardActionEv

`CGuildBoard::isWebGuildBoardAction()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808ae6e` | `0xc` | `0x808f880` | `0x13` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,9 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movzbl 0x4(%eax),%eax
+add    $0x4,%eax
+movzbl (%eax),%eax
+test   %al,%al
+setne  %al
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::isWebGuildBoardAction() */

CGuildBoard __thiscall CGuildBoard::_ZN11CGuildBoard21isWebGuildBoardActionEv(CGuildBoard *this)

{
  return this[4];
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildBoard.cpp](source/DNFServer/GameServer/Guild/GuildBoard.cpp)（约第 95 行）：

```cpp
bool CGuildBoard::isWebGuildBoardAction()
{
    return *(unsigned char*)(m_data + 4) != 0;
}
```
