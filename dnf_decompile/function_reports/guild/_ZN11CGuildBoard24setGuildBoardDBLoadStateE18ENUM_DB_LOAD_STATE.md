# _ZN11CGuildBoard24setGuildBoardDBLoadStateE18ENUM_DB_LOAD_STATE

`CGuildBoard::setGuildBoardDBLoadState(ENUM_DB_LOAD_STATE)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808ae7a` | `0xe` | `0x808f894` | `0x10` |

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
-mov    %edx,0x8(%eax)
+lea    0x8(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    %eax,(%edx)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::setGuildBoardDBLoadState(ENUM_DB_LOAD_STATE) */

void __thiscall
CGuildBoard::_ZN11CGuildBoard24setGuildBoardDBLoadStateE18ENUM_DB_LOAD_STATE
          (CGuildBoard *this,undefined4 param_2)

{
  *(undefined4 *)(this + 8) = param_2;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildBoard.cpp](source/DNFServer/GameServer/Guild/GuildBoard.cpp)（约第 100 行）：

```cpp
void CGuildBoard::setGuildBoardDBLoadState(ENUM_DB_LOAD_STATE state)
{
    *(unsigned int*)(m_data + 8) = (unsigned int)state;
}
```
