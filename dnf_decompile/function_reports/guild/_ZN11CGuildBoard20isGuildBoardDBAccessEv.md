# _ZN11CGuildBoard20isGuildBoardDBAccessEv

`CGuildBoard::isGuildBoardDBAccess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809d132` | `0x37` | `0x808f978` | `0x2a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,19 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x18,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0xc(%ebp)
+mov    %eax,%edx
 mov    0x8(%ebp),%eax
-mov    0x24(%eax),%eax
-mov    -0xc(%ebp),%edx
+add    $0x24,%eax
+mov    (%eax),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 cmp    $0x5,%eax
-jbe    <T> <_ZN11CGuildBoard20isGuildBoardDBAccessEv+0x30>
-mov    $0x1,%eax
-jmp    <T> <_ZN11CGuildBoard20isGuildBoardDBAccessEv+0x35>
-mov    $0x0,%eax
+seta   %al
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::isGuildBoardDBAccess() */

bool __thiscall CGuildBoard::_ZN11CGuildBoard20isGuildBoardDBAccessEv(CGuildBoard *this)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  return 5 < (uint)(tVar1 - *(int *)(this + 0x24));
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildBoard.cpp](source/DNFServer/GameServer/Guild/GuildBoard.cpp)（约第 134 行）：

```cpp
bool CGuildBoard::isGuildBoardDBAccess()
{
    return 5 < (unsigned int)(time(0) - *(unsigned int*)(m_data + 0x24));
}
```
