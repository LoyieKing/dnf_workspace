# _ZN11CGuildBoard21setGuildBoardDBAccessEv

`CGuildBoard::setGuildBoardDBAccess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809d16a` | `0x20` | `0x808f9a2` | `0x21` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,11 +1,13 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+push   %ebx
+sub    $0x14,%esp
+mov    0x8(%ebp),%eax
+lea    0x24(%eax),%ebx
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0xc(%ebp)
-mov    0x8(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    %edx,0x24(%eax)
-leave
+mov    %eax,(%ebx)
+add    $0x14,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::setGuildBoardDBAccess() */

void __thiscall CGuildBoard::_ZN11CGuildBoard21setGuildBoardDBAccessEv(CGuildBoard *this)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  *(time_t *)(this + 0x24) = tVar1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildBoard.cpp](source/DNFServer/GameServer/Guild/GuildBoard.cpp)（约第 139 行）：

```cpp
void CGuildBoard::setGuildBoardDBAccess()
{
    *(unsigned int*)(m_data + 0x24) = (unsigned int)time(0);
}
```
