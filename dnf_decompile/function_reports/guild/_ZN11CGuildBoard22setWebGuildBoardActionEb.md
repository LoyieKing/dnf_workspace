# _ZN11CGuildBoard22setWebGuildBoardActionEb

`CGuildBoard::setWebGuildBoardAction(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808ae56` | `0x18` | `0x808f858` | `0x28` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x4(%ebp)
 mov    0x8(%ebp),%eax
-movzbl -0x4(%ebp),%edx
-mov    %dl,0x4(%eax)
+lea    0x4(%eax),%edx
+cmpb   $0x0,-0x4(%ebp)
+je     <T> <_ZN11CGuildBoard22setWebGuildBoardActionEb+0x1f>
+mov    $0x1,%eax
+jmp    <T> <_ZN11CGuildBoard22setWebGuildBoardActionEb+0x24>
+mov    $0x0,%eax
+mov    %al,(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::setWebGuildBoardAction(bool) */

void __thiscall
CGuildBoard::_ZN11CGuildBoard22setWebGuildBoardActionEb(CGuildBoard *this,bool param_1)

{
  this[4] = (CGuildBoard)param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildBoard.cpp](source/DNFServer/GameServer/Guild/GuildBoard.cpp)（约第 90 行）：

```cpp
void CGuildBoard::setWebGuildBoardAction(bool flag)
{
    *(unsigned char*)(m_data + 4) = flag ? 1 : 0;
}
```
